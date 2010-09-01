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

#include "aknlayoutscalable_abrw_pql_av_qvga_lsc_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt[]; }

namespace AknLayoutScalable_Abrw_pql_av_qvga_lsc_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt + 0x0000ae35 };

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
0xf4a8,	// (0x0001a2dd) Screen

0xf4b2,	// (0x0001a2e7) application_window_ParamLimits

0xf4b2,	// (0x0001a2e7) application_window

0x610c,	// (0x00010f41) screen_g1

0xf4c0,	// (0x0001a2f5) area_bottom_pane_ParamLimits

0xf4c0,	// (0x0001a2f5) area_bottom_pane

0x617b,	// (0x00010fb0) area_top_pane_ParamLimits

0x617b,	// (0x00010fb0) area_top_pane

0x3f8f,	// (0x0000edc4) main_pane_ParamLimits

0x3f8f,	// (0x0000edc4) main_pane

0x61f3,	// (0x00011028) misc_graphics

0x14e9,	// (0x0000c31e) battery_pane_ParamLimits

0x14e9,	// (0x0000c31e) battery_pane

0x8eb4,	// (0x00013ce9) bg_status_flat_pane_g8

0x8ebc,	// (0x00013cf1) bg_status_flat_pane_g9

0x824a,	// (0x0001307f) context_pane_ParamLimits

0x824a,	// (0x0001307f) context_pane

0x1643,	// (0x0000c478) navi_pane_ParamLimits

0x1643,	// (0x0000c478) navi_pane

0x16b8,	// (0x0000c4ed) signal_pane_ParamLimits

0x16b8,	// (0x0000c4ed) signal_pane

0x0008,

0xf843,	// (0x0001a678) bg_status_flat_pane_g

0x1744,	// (0x0000c579) status_pane_g1_ParamLimits

0x1744,	// (0x0000c579) status_pane_g1

0x1750,	// (0x0000c585) status_pane_g2_ParamLimits

0x1750,	// (0x0000c585) status_pane_g2

0x845f,	// (0x00013294) status_pane_g3_ParamLimits

0x845f,	// (0x00013294) status_pane_g3

0x0004,

0xf776,	// (0x0001a5ab) status_pane_g_ParamLimits

0xf776,	// (0x0001a5ab) status_pane_g

0x175c,	// (0x0000c591) title_pane_ParamLimits

0x175c,	// (0x0000c591) title_pane

0x17b7,	// (0x0000c5ec) uni_indicator_pane_ParamLimits

0x17b7,	// (0x0000c5ec) uni_indicator_pane

0x80a5,	// (0x00012eda) bg_list_pane_ParamLimits

0x80a5,	// (0x00012eda) bg_list_pane

0x0ead,	// (0x0000bce2) find_pane

0xdb58,	// (0x0001898d) listscroll_app_pane_ParamLimits

0xdb58,	// (0x0001898d) listscroll_app_pane

0x80d9,	// (0x00012f0e) listscroll_form_pane

0x0ec5,	// (0x0000bcfa) listscroll_gen_pane_ParamLimits

0x0ec5,	// (0x0000bcfa) listscroll_gen_pane

0x478e,	// (0x0000f5c3) listscroll_set_pane

0xdb68,	// (0x0001899d) main_idle_act_pane

0x7db9,	// (0x00012bee) main_idle_trad_pane

0x7db9,	// (0x00012bee) main_list_empty_pane

0x8108,	// (0x00012f3d) main_midp_pane

0x8114,	// (0x00012f49) main_pane_g1_ParamLimits

0x8114,	// (0x00012f49) main_pane_g1

0xdb7b,	// (0x000189b0) popup_ai_message_window_ParamLimits

0xdb7b,	// (0x000189b0) popup_ai_message_window

0xdbff,	// (0x00018a34) popup_fep_china_uni_window_ParamLimits

0xdbff,	// (0x00018a34) popup_fep_china_uni_window

0x4878,	// (0x0000f6ad) popup_fep_japan_candidate_window_ParamLimits

0x4878,	// (0x0000f6ad) popup_fep_japan_candidate_window

0x4896,	// (0x0000f6cb) popup_fep_japan_predictive_window_ParamLimits

0x4896,	// (0x0000f6cb) popup_fep_japan_predictive_window

0xdc3d,	// (0x00018a72) popup_find_window

0xdc56,	// (0x00018a8b) popup_grid_graphic_window_ParamLimits

0xdc56,	// (0x00018a8b) popup_grid_graphic_window

0x48ed,	// (0x0000f722) popup_large_graphic_colour_window

0xdcd2,	// (0x00018b07) popup_menu_window_ParamLimits

0xdcd2,	// (0x00018b07) popup_menu_window

0xde30,	// (0x00018c65) popup_note_image_window

0xddf8,	// (0x00018c2d) popup_note_wait_window_ParamLimits

0xddf8,	// (0x00018c2d) popup_note_wait_window

0xde46,	// (0x00018c7b) popup_note_window_ParamLimits

0xde46,	// (0x00018c7b) popup_note_window

0xdeda,	// (0x00018d0f) popup_query_code_window_ParamLimits

0xdeda,	// (0x00018d0f) popup_query_code_window

0x4aaa,	// (0x0000f8df) popup_query_data_code_window_ParamLimits

0x4aaa,	// (0x0000f8df) popup_query_data_code_window

0xdf12,	// (0x00018d47) popup_query_data_window_ParamLimits

0xdf12,	// (0x00018d47) popup_query_data_window

0xdf86,	// (0x00018dbb) popup_query_sat_info_window_ParamLimits

0xdf86,	// (0x00018dbb) popup_query_sat_info_window

0xe013,	// (0x00018e48) popup_snote_single_graphic_window_ParamLimits

0xe013,	// (0x00018e48) popup_snote_single_graphic_window

0xe013,	// (0x00018e48) popup_snote_single_text_window_ParamLimits

0xe013,	// (0x00018e48) popup_snote_single_text_window

0x4b19,	// (0x0000f94e) popup_sub_window_general

0x4c1d,	// (0x0000fa52) popup_window_general_ParamLimits

0x4c1d,	// (0x0000fa52) popup_window_general

0x812a,	// (0x00012f5f) power_save_pane

0xda29,	// (0x0001885e) control_pane_g1_ParamLimits

0xda29,	// (0x0001885e) control_pane_g1

0x4643,	// (0x0000f478) control_pane_g2_ParamLimits

0x4643,	// (0x0000f478) control_pane_g2

0x8070,	// (0x00012ea5) control_pane_g3_ParamLimits

0x8070,	// (0x00012ea5) control_pane_g3

0x0007,

0xf75e,	// (0x0001a593) control_pane_g_ParamLimits

0xf75e,	// (0x0001a593) control_pane_g

0xda5e,	// (0x00018893) control_pane_t1_ParamLimits

0xda5e,	// (0x00018893) control_pane_t1

0xdaba,	// (0x000188ef) control_pane_t2_ParamLimits

0xdaba,	// (0x000188ef) control_pane_t2

0x0002,

0xf76f,	// (0x0001a5a4) control_pane_t_ParamLimits

0xf76f,	// (0x0001a5a4) control_pane_t

0x7f97,	// (0x00012dcc) navi_navi_volume_pane_cp1

0x7f9f,	// (0x00012dd4) status_small_icon_pane

0x7fa7,	// (0x00012ddc) status_small_pane_g1_ParamLimits

0x7fa7,	// (0x00012ddc) status_small_pane_g1

0x0cd6,	// (0x0000bb0b) status_small_pane_g2_ParamLimits

0x0cd6,	// (0x0000bb0b) status_small_pane_g2

0x0ce2,	// (0x0000bb17) status_small_pane_g3_ParamLimits

0x0ce2,	// (0x0000bb17) status_small_pane_g3

0x0cee,	// (0x0000bb23) status_small_pane_g4_ParamLimits

0x0cee,	// (0x0000bb23) status_small_pane_g4

0x0cfa,	// (0x0000bb2f) status_small_pane_g5_ParamLimits

0x0cfa,	// (0x0000bb2f) status_small_pane_g5

0x800b,	// (0x00012e40) status_small_pane_g6_ParamLimits

0x800b,	// (0x00012e40) status_small_pane_g6

0x0007,

0xf74d,	// (0x0001a582) status_small_pane_g_ParamLimits

0xf74d,	// (0x0001a582) status_small_pane_g

0x0d29,	// (0x0000bb5e) status_small_pane_t1

0x0d43,	// (0x0000bb78) status_small_wait_pane_ParamLimits

0x0d43,	// (0x0000bb78) status_small_wait_pane

0x0af2,	// (0x0000b927) aid_levels_signal_ParamLimits

0x0af2,	// (0x0000b927) aid_levels_signal

0x0b06,	// (0x0000b93b) signal_pane_g1_ParamLimits

0x0b06,	// (0x0000b93b) signal_pane_g1

0x0b20,	// (0x0000b955) signal_pane_g2_ParamLimits

0x0b20,	// (0x0000b955) signal_pane_g2

0x0003,

0xf6de,	// (0x0001a513) signal_pane_g_ParamLimits

0xf6de,	// (0x0001a513) signal_pane_g

0x786c,	// (0x000126a1) context_pane_g1

0x009a,	// (0x0000aecf) title_pane_g1

0x00dc,	// (0x0000af11) title_pane_t1

0x629b,	// (0x000110d0) title_pane_t2

0x62c1,	// (0x000110f6) title_pane_t3

0x0002,

0xf532,	// (0x0001a367) title_pane_t

0x17dd,	// (0x0000c612) aid_levels_battery_ParamLimits

0x17dd,	// (0x0000c612) aid_levels_battery

0x17f5,	// (0x0000c62a) battery_pane_g1_ParamLimits

0x17f5,	// (0x0000c62a) battery_pane_g1

0x1810,	// (0x0000c645) battery_pane_g2_ParamLimits

0x1810,	// (0x0000c645) battery_pane_g2

0x0001,

0xf781,	// (0x0001a5b6) battery_pane_g_ParamLimits

0xf781,	// (0x0001a5b6) battery_pane_g

0x1b2e,	// (0x0000c963) uni_indicator_pane_g1

0x1b42,	// (0x0000c977) uni_indicator_pane_g2

0x1b57,	// (0x0000c98c) uni_indicator_pane_g3

0x0005,

0xf8eb,	// (0x0001a720) uni_indicator_pane_g

0x7245,	// (0x0001207a) navi_icon_pane_ParamLimits

0x7245,	// (0x0001207a) navi_icon_pane

0x61f3,	// (0x00011028) navi_midp_pane

0x61f3,	// (0x00011028) navi_navi_pane

0x7245,	// (0x0001207a) navi_text_pane_ParamLimits

0x7245,	// (0x0001207a) navi_text_pane

0x610c,	// (0x00010f41) status_small_wait_pane_g1

0x6735,	// (0x0001156a) status_small_wait_pane_g2

0x0001,

0xf8e6,	// (0x0001a71b) status_small_wait_pane_g

0x1ad4,	// (0x0000c909) navi_navi_icon_text_pane

0x1aee,	// (0x0000c923) navi_navi_pane_g1_ParamLimits

0x1aee,	// (0x0000c923) navi_navi_pane_g1

0x1adc,	// (0x0000c911) navi_navi_pane_g2_ParamLimits

0x1adc,	// (0x0000c911) navi_navi_pane_g2

0x0001,

0xf8b4,	// (0x0001a6e9) navi_navi_pane_g_ParamLimits

0xf8b4,	// (0x0001a6e9) navi_navi_pane_g

0x1b00,	// (0x0000c935) navi_navi_tabs_pane

0x1ad4,	// (0x0000c909) navi_navi_text_pane

0x1ad4,	// (0x0000c909) navi_navi_volume_pane

0x94ac,	// (0x000142e1) navi_text_pane_t1

0x94a0,	// (0x000142d5) navi_icon_pane_g1

0x93f4,	// (0x00014229) navi_navi_text_pane_t1

0x4f02,	// (0x0000fd37) navi_navi_volume_pane_g1

0xe261,	// (0x00019096) volume_small_pane

0x1a27,	// (0x0000c85c) navi_navi_icon_text_pane_g1

0x1a2f,	// (0x0000c864) navi_navi_icon_text_pane_t1

0x8f2c,	// (0x00013d61) navi_tabs_2_long_pane

0x8f2c,	// (0x00013d61) navi_tabs_2_pane

0x8f2c,	// (0x00013d61) navi_tabs_3_long_pane

0x8f2c,	// (0x00013d61) navi_tabs_3_pane

0x8f2c,	// (0x00013d61) navi_tabs_4_pane

0xe241,	// (0x00019076) tabs_2_active_pane_ParamLimits

0xe241,	// (0x00019076) tabs_2_active_pane

0xe251,	// (0x00019086) tabs_2_passive_pane_ParamLimits

0xe251,	// (0x00019086) tabs_2_passive_pane

0xe20f,	// (0x00019044) tabs_3_active_pane_ParamLimits

0xe20f,	// (0x00019044) tabs_3_active_pane

0xe21f,	// (0x00019054) tabs_3_passive_pane_ParamLimits

0xe21f,	// (0x00019054) tabs_3_passive_pane

0xe230,	// (0x00019065) tabs_3_passive_pane_cp_ParamLimits

0xe230,	// (0x00019065) tabs_3_passive_pane_cp

0xe1cb,	// (0x00019000) tabs_4_active_pane_ParamLimits

0xe1cb,	// (0x00019000) tabs_4_active_pane

0xe1dc,	// (0x00019011) tabs_4_passive_pane_ParamLimits

0xe1dc,	// (0x00019011) tabs_4_passive_pane

0xe1ed,	// (0x00019022) tabs_4_passive_pane_cp_ParamLimits

0xe1ed,	// (0x00019022) tabs_4_passive_pane_cp

0xe1fe,	// (0x00019033) tabs_4_passive_pane_cp2_ParamLimits

0xe1fe,	// (0x00019033) tabs_4_passive_pane_cp2

0xe1ab,	// (0x00018fe0) tabs_2_long_active_pane_ParamLimits

0xe1ab,	// (0x00018fe0) tabs_2_long_active_pane

0xe1bb,	// (0x00018ff0) tabs_2_long_passive_pane_ParamLimits

0xe1bb,	// (0x00018ff0) tabs_2_long_passive_pane

0xe174,	// (0x00018fa9) tabs_3_long_active_pane_ParamLimits

0xe174,	// (0x00018fa9) tabs_3_long_active_pane

0xe187,	// (0x00018fbc) tabs_3_long_passive_pane_ParamLimits

0xe187,	// (0x00018fbc) tabs_3_long_passive_pane

0xe198,	// (0x00018fcd) tabs_3_long_passive_pane_cp_ParamLimits

0xe198,	// (0x00018fcd) tabs_3_long_passive_pane_cp

0x4dbd,	// (0x0000fbf2) volume_small_pane_g1

0x4dc6,	// (0x0000fbfb) volume_small_pane_g2

0x4dcf,	// (0x0000fc04) volume_small_pane_g3

0x4dd8,	// (0x0000fc0d) volume_small_pane_g4

0x4de1,	// (0x0000fc16) volume_small_pane_g5

0x4dea,	// (0x0000fc1f) volume_small_pane_g6

0x4df3,	// (0x0000fc28) volume_small_pane_g7

0x4dfc,	// (0x0000fc31) volume_small_pane_g8

0x4e05,	// (0x0000fc3a) volume_small_pane_g9

0x4e0e,	// (0x0000fc43) volume_small_pane_g10

0x0009,

0xf880,	// (0x0001a6b5) volume_small_pane_g

0x656d,	// (0x000113a2) bg_active_tab_pane_cp2_ParamLimits

0x656d,	// (0x000113a2) bg_active_tab_pane_cp2

0x62e1,	// (0x00011116) tabs_3_active_pane_g1

0x0169,	// (0x0000af9e) tabs_3_active_pane_t1

0x656d,	// (0x000113a2) bg_passive_tab_pane_cp2_ParamLimits

0x656d,	// (0x000113a2) bg_passive_tab_pane_cp2

0x62e1,	// (0x00011116) tabs_3_passive_pane_g1

0x0169,	// (0x0000af9e) tabs_3_passive_pane_t1

0x656d,	// (0x000113a2) bg_active_tab_pane_cp3_ParamLimits

0x656d,	// (0x000113a2) bg_active_tab_pane_cp3

0x9cc8,	// (0x00014afd) tabs_4_active_pane_g1

0x017f,	// (0x0000afb4) tabs_4_active_pane_t1

0x656d,	// (0x000113a2) bg_passive_tab_pane_cp3_ParamLimits

0x656d,	// (0x000113a2) bg_passive_tab_pane_cp3

0x9cc8,	// (0x00014afd) tabs_4_1_passive_pane_g1

0x017f,	// (0x0000afb4) tabs_4_1_passive_pane_t1

0x8108,	// (0x00012f3d) list_highlight_pane_cp2

0x1c18,	// (0x0000ca4d) list_set_pane_ParamLimits

0x1c18,	// (0x0000ca4d) list_set_pane

0x1ca6,	// (0x0000cadb) main_pane_set_t1_ParamLimits

0x1ca6,	// (0x0000cadb) main_pane_set_t1

0x1cc6,	// (0x0000cafb) main_pane_set_t2_ParamLimits

0x1cc6,	// (0x0000cafb) main_pane_set_t2

0x1cda,	// (0x0000cb0f) main_pane_set_t3_ParamLimits

0x1cda,	// (0x0000cb0f) main_pane_set_t3

0x1cec,	// (0x0000cb21) main_pane_set_t4_ParamLimits

0x1cec,	// (0x0000cb21) main_pane_set_t4

0x0003,

0xf950,	// (0x0001a785) main_pane_set_t_ParamLimits

0xf950,	// (0x0001a785) main_pane_set_t

0x1cfe,	// (0x0000cb33) setting_code_pane

0x1d06,	// (0x0000cb3b) setting_slider_graphic_pane

0x1d06,	// (0x0000cb3b) setting_slider_pane

0x1d06,	// (0x0000cb3b) setting_text_pane

0x1d06,	// (0x0000cb3b) setting_volume_pane

0xd9c2,	// (0x000187f7) volume_set_pane

0x62d3,	// (0x00011108) bg_set_opt_pane_cp

0x4196,	// (0x0000efcb) setting_slider_pane_t1

0xd9ca,	// (0x000187ff) setting_slider_pane_t2

0xd9e3,	// (0x00018818) setting_slider_pane_t3

0x0002,

0xf539,	// (0x0001a36e) setting_slider_pane_t

0x41dc,	// (0x0000f011) slider_set_pane

0x61f3,	// (0x00011028) bg_set_opt_pane_cp2

0x6315,	// (0x0001114a) setting_slider_graphic_pane_g1

0xd9fa,	// (0x0001882f) setting_slider_graphic_pane_t1

0xda09,	// (0x0001883e) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x0001a375) setting_slider_graphic_pane_t

0xda18,	// (0x0001884d) slider_set_pane_cp

0x61f3,	// (0x00011028) input_focus_pane_cp1

0x99b2,	// (0x000147e7) list_set_text_pane

0x610c,	// (0x00010f41) setting_text_pane_g1

0x61f3,	// (0x00011028) input_focus_pane_cp2

0x610c,	// (0x00010f41) setting_code_pane_g1

0x631e,	// (0x00011153) setting_code_pane_t1

0x01f3,	// (0x0000b028) set_text_pane_t1_ParamLimits

0x01f3,	// (0x0000b028) set_text_pane_t1

0x70f2,	// (0x00011f27) set_opt_bg_pane_g1

0x70fa,	// (0x00011f2f) set_opt_bg_pane_g2

0x1be4,	// (0x0000ca19) set_opt_bg_pane_g3

0x710a,	// (0x00011f3f) set_opt_bg_pane_g4

0x7112,	// (0x00011f47) set_opt_bg_pane_g5

0x711a,	// (0x00011f4f) set_opt_bg_pane_g6

0x1bec,	// (0x0000ca21) set_opt_bg_pane_g7

0x1bf4,	// (0x0000ca29) set_opt_bg_pane_g8

0x1bfc,	// (0x0000ca31) set_opt_bg_pane_g9

0x0008,

0xf93d,	// (0x0001a772) set_opt_bg_pane_g

0x9985,	// (0x000147ba) slider_set_pane_g1

0x4f77,	// (0x0000fdac) slider_set_pane_g2

0x0006,

0xf92e,	// (0x0001a763) slider_set_pane_g

0xe26a,	// (0x0001909f) volume_set_pane_g1

0xe272,	// (0x000190a7) volume_set_pane_g2

0xe27a,	// (0x000190af) volume_set_pane_g3

0xe282,	// (0x000190b7) volume_set_pane_g4

0xe28a,	// (0x000190bf) volume_set_pane_g5

0xe292,	// (0x000190c7) volume_set_pane_g6

0xe29a,	// (0x000190cf) volume_set_pane_g7

0xe2a2,	// (0x000190d7) volume_set_pane_g8

0xe2aa,	// (0x000190df) volume_set_pane_g9

0xe2b2,	// (0x000190e7) volume_set_pane_g10

0x0009,

0xf906,	// (0x0001a73b) volume_set_pane_g

0x020d,	// (0x0000b042) indicator_pane_ParamLimits

0x020d,	// (0x0000b042) indicator_pane

0x0235,	// (0x0000b06a) main_idle_pane_g2_ParamLimits

0x0235,	// (0x0000b06a) main_idle_pane_g2

0x0265,	// (0x0000b09a) main_pane_idle_g1_ParamLimits

0x0265,	// (0x0000b09a) main_pane_idle_g1

0x6385,	// (0x000111ba) popup_clock_digital_analogue_window_ParamLimits

0x6385,	// (0x000111ba) popup_clock_digital_analogue_window

0x028a,	// (0x0000b0bf) soft_indicator_pane_ParamLimits

0x028a,	// (0x0000b0bf) soft_indicator_pane

0x02a4,	// (0x0000b0d9) wallpaper_pane_ParamLimits

0x02a4,	// (0x0000b0d9) wallpaper_pane

0x610c,	// (0x00010f41) wallpaper_pane_g1

0x02b6,	// (0x0000b0eb) indicator_pane_g1_ParamLimits

0x02b6,	// (0x0000b0eb) indicator_pane_g1

0x9dc4,	// (0x00014bf9) navi_navi_icon_text_pane_srt_g1

0x63d7,	// (0x0001120c) soft_indicator_pane_t1

0x63f1,	// (0x00011226) aid_ps_area_pane

0x02cf,	// (0x0000b104) aid_ps_clock_pane

0x640e,	// (0x00011243) aid_ps_indicator_pane

0x641a,	// (0x0001124f) indicator_ps_pane_ParamLimits

0x641a,	// (0x0001124f) indicator_ps_pane

0x6429,	// (0x0001125e) power_save_pane_g1_ParamLimits

0x6429,	// (0x0001125e) power_save_pane_g1

0x6435,	// (0x0001126a) power_save_pane_g2_ParamLimits

0x6435,	// (0x0001126a) power_save_pane_g2

0x3f01,	// (0x0000ed36) aid_navinavi_width_pane

0x63f1,	// (0x00011226) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x0001a37a) power_save_pane_g_ParamLimits

0xf545,	// (0x0001a37a) power_save_pane_g

0x6443,	// (0x00011278) power_save_pane_t1_ParamLimits

0x6443,	// (0x00011278) power_save_pane_t1

0x02cf,	// (0x0000b104) aid_ps_clock_pane_ParamLimits

0x640e,	// (0x00011243) aid_ps_indicator_pane_ParamLimits

0x6455,	// (0x0001128a) power_save_pane_t4_ParamLimits

0x6455,	// (0x0001128a) power_save_pane_t4

0x0001,

0xf54a,	// (0x0001a37f) power_save_pane_t_ParamLimits

0xf54a,	// (0x0001a37f) power_save_pane_t

0x647f,	// (0x000112b4) power_save_t3_ParamLimits

0x647f,	// (0x000112b4) power_save_t3

0x646a,	// (0x0001129f) power_save_t2_ParamLimits

0x646a,	// (0x0001129f) power_save_t2

0x6494,	// (0x000112c9) indicator_ps_pane_g1

0x02db,	// (0x0000b110) ai_gene_pane_ParamLimits

0x02db,	// (0x0000b110) ai_gene_pane

0x02f2,	// (0x0000b127) ai_links_pane_ParamLimits

0x02f2,	// (0x0000b127) ai_links_pane

0x0304,	// (0x0000b139) indicator_pane_cp1_ParamLimits

0x0304,	// (0x0000b139) indicator_pane_cp1

0x0313,	// (0x0000b148) main_pane_idle_g1_cp_ParamLimits

0x0313,	// (0x0000b148) main_pane_idle_g1_cp

0x64cd,	// (0x00011302) popup_ai_links_title_window

0x032b,	// (0x0000b160) soft_indicator_pane_cp1_ParamLimits

0x032b,	// (0x0000b160) soft_indicator_pane_cp1

0x978b,	// (0x000145c0) ai_links_pane_g1

0x9794,	// (0x000145c9) grid_ai_links_pane

0x1b25,	// (0x0000c95a) ai_gene_pane_1

0x9779,	// (0x000145ae) ai_gene_pane_2

0x9782,	// (0x000145b7) list_highlight_pane_cp4

0x1b09,	// (0x0000c93e) cell_ai_link_pane_ParamLimits

0x1b09,	// (0x0000c93e) cell_ai_link_pane

0x974c,	// (0x00014581) cell_ai_link_pane_g1

0x6735,	// (0x0001156a) cell_ai_link_pane_g2

0x0001,

0xf8e1,	// (0x0001a716) cell_ai_link_pane_g

0x61f3,	// (0x00011028) grid_highlight_cp2

0x61f3,	// (0x00011028) bg_popup_sub_pane_cp1

0x64f0,	// (0x00011325) popup_ai_links_title_window_t1

0x969e,	// (0x000144d3) ai_gene_pane_1_g1_ParamLimits

0x969e,	// (0x000144d3) ai_gene_pane_1_g1

0x96aa,	// (0x000144df) ai_gene_pane_1_g2_ParamLimits

0x96aa,	// (0x000144df) ai_gene_pane_1_g2

0x0001,

0xf8d7,	// (0x0001a70c) ai_gene_pane_1_g_ParamLimits

0xf8d7,	// (0x0001a70c) ai_gene_pane_1_g

0x96b7,	// (0x000144ec) ai_gene_pane_1_t1_ParamLimits

0x96b7,	// (0x000144ec) ai_gene_pane_1_t1

0x96eb,	// (0x00014520) grid_ai_soft_ind_pane

0x9689,	// (0x000144be) ai_gene_pane_2_t1_ParamLimits

0x9689,	// (0x000144be) ai_gene_pane_2_t1

0x033f,	// (0x0000b174) main_pane_empty_t1_ParamLimits

0x033f,	// (0x0000b174) main_pane_empty_t1

0x035c,	// (0x0000b191) main_pane_empty_t2_ParamLimits

0x035c,	// (0x0000b191) main_pane_empty_t2

0x0374,	// (0x0000b1a9) main_pane_empty_t3_ParamLimits

0x0374,	// (0x0000b1a9) main_pane_empty_t3

0x0387,	// (0x0000b1bc) main_pane_empty_t4_ParamLimits

0x0387,	// (0x0000b1bc) main_pane_empty_t4

0x039a,	// (0x0000b1cf) main_pane_empty_t5_ParamLimits

0x039a,	// (0x0000b1cf) main_pane_empty_t5

0x0004,

0xf54f,	// (0x0001a384) main_pane_empty_t_ParamLimits

0xf54f,	// (0x0001a384) main_pane_empty_t

0x7245,	// (0x0001207a) bg_popup_window_pane_ParamLimits

0x7245,	// (0x0001207a) bg_popup_window_pane

0x9403,	// (0x00014238) find_popup_pane_cp2_ParamLimits

0x9403,	// (0x00014238) find_popup_pane_cp2

0x940f,	// (0x00014244) heading_pane_ParamLimits

0x940f,	// (0x00014244) heading_pane

0x61f3,	// (0x00011028) bg_popup_sub_pane

0x1a4c,	// (0x0000c881) bg_popup_window_pane_g1_ParamLimits

0x1a4c,	// (0x0000c881) bg_popup_window_pane_g1

0x1a5b,	// (0x0000c890) bg_popup_window_pane_g2_ParamLimits

0x1a5b,	// (0x0000c890) bg_popup_window_pane_g2

0x1a67,	// (0x0000c89c) bg_popup_window_pane_g3_ParamLimits

0x1a67,	// (0x0000c89c) bg_popup_window_pane_g3

0x1a73,	// (0x0000c8a8) bg_popup_window_pane_g4_ParamLimits

0x1a73,	// (0x0000c8a8) bg_popup_window_pane_g4

0x1a82,	// (0x0000c8b7) bg_popup_window_pane_g5_ParamLimits

0x1a82,	// (0x0000c8b7) bg_popup_window_pane_g5

0x1a92,	// (0x0000c8c7) bg_popup_window_pane_g6_ParamLimits

0x1a92,	// (0x0000c8c7) bg_popup_window_pane_g6

0x1a9e,	// (0x0000c8d3) bg_popup_window_pane_g7_ParamLimits

0x1a9e,	// (0x0000c8d3) bg_popup_window_pane_g7

0x1aad,	// (0x0000c8e2) bg_popup_window_pane_g8_ParamLimits

0x1aad,	// (0x0000c8e2) bg_popup_window_pane_g8

0x1abc,	// (0x0000c8f1) bg_popup_window_pane_g9_ParamLimits

0x1abc,	// (0x0000c8f1) bg_popup_window_pane_g9

0x93e8,	// (0x0001421d) bg_popup_window_pane_g10_ParamLimits

0x93e8,	// (0x0001421d) bg_popup_window_pane_g10

0x0009,

0xf89f,	// (0x0001a6d4) bg_popup_window_pane_g_ParamLimits

0xf89f,	// (0x0001a6d4) bg_popup_window_pane_g

0x9311,	// (0x00014146) bg_popup_heading_pane_ParamLimits

0x9311,	// (0x00014146) bg_popup_heading_pane

0x4fff,	// (0x0000fe34) tabs_4_passive_pane_cp_srt_ParamLimits

0x4fff,	// (0x0000fe34) tabs_4_passive_pane_cp_srt

0x5011,	// (0x0000fe46) tabs_4_passive_pane_srt_ParamLimits

0x9325,	// (0x0001415a) heading_pane_g2

0x5011,	// (0x0000fe46) tabs_4_passive_pane_srt

0x871d,	// (0x00013552) bg_passive_tab_pane_cp3_srt_ParamLimits

0x871d,	// (0x00013552) bg_passive_tab_pane_cp3_srt

0x932d,	// (0x00014162) heading_pane_t1_ParamLimits

0x932d,	// (0x00014162) heading_pane_t1

0x9344,	// (0x00014179) heading_pane_t2_ParamLimits

0x9344,	// (0x00014179) heading_pane_t2

0x0001,

0xf89a,	// (0x0001a6cf) heading_pane_t_ParamLimits

0xf89a,	// (0x0001a6cf) heading_pane_t

0x8e7c,	// (0x00013cb1) bg_popup_heading_pane_g1

0x8f3d,	// (0x00013d72) bg_popup_heading_pane_g2

0x8f45,	// (0x00013d7a) bg_popup_heading_pane_g3

0x8f4d,	// (0x00013d82) bg_popup_heading_pane_g4

0x8f55,	// (0x00013d8a) bg_popup_heading_pane_g5

0x8f5d,	// (0x00013d92) bg_popup_heading_pane_g6

0x8f65,	// (0x00013d9a) bg_popup_heading_pane_g7

0x8f6d,	// (0x00013da2) bg_popup_heading_pane_g8

0x8f75,	// (0x00013daa) bg_popup_heading_pane_g9

0x0008,

0xf856,	// (0x0001a68b) bg_popup_heading_pane_g

0x8605,	// (0x0001343a) bg_popup_sub_pane_g1

0x8615,	// (0x0001344a) bg_popup_sub_pane_g2

0x860d,	// (0x00013442) bg_popup_sub_pane_g3

0x8625,	// (0x0001345a) bg_popup_sub_pane_g4

0x861d,	// (0x00013452) bg_popup_sub_pane_g5

0x862d,	// (0x00013462) bg_popup_sub_pane_g6

0x8635,	// (0x0001346a) bg_popup_sub_pane_g7

0x8645,	// (0x0001347a) bg_popup_sub_pane_g8

0x863d,	// (0x00013472) bg_popup_sub_pane_g9

0x0008,

0xf830,	// (0x0001a665) bg_popup_sub_pane_g

0x656d,	// (0x000113a2) bg_popup_window_pane_cp5_ParamLimits

0x656d,	// (0x000113a2) bg_popup_window_pane_cp5

0x6589,	// (0x000113be) popup_note_window_g1_ParamLimits

0x6589,	// (0x000113be) popup_note_window_g1

0x6595,	// (0x000113ca) popup_note_window_t1_ParamLimits

0x6595,	// (0x000113ca) popup_note_window_t1

0x65ab,	// (0x000113e0) popup_note_window_t2_ParamLimits

0x65ab,	// (0x000113e0) popup_note_window_t2

0x65c1,	// (0x000113f6) popup_note_window_t3_ParamLimits

0x65c1,	// (0x000113f6) popup_note_window_t3

0x65d7,	// (0x0001140c) popup_note_window_t4_ParamLimits

0x65d7,	// (0x0001140c) popup_note_window_t4

0x65ff,	// (0x00011434) popup_note_window_t5_ParamLimits

0x65ff,	// (0x00011434) popup_note_window_t5

0x0004,

0xf55a,	// (0x0001a38f) popup_note_window_t_ParamLimits

0xf55a,	// (0x0001a38f) popup_note_window_t

0x6649,	// (0x0001147e) bg_popup_window_pane_cp6_ParamLimits

0x6649,	// (0x0001147e) bg_popup_window_pane_cp6

0x8df8,	// (0x00013c2d) popup_note_image_window_g1_ParamLimits

0x8df8,	// (0x00013c2d) popup_note_image_window_g1

0x8e04,	// (0x00013c39) popup_note_image_window_g2_ParamLimits

0x8e04,	// (0x00013c39) popup_note_image_window_g2

0x0001,

0xf824,	// (0x0001a659) popup_note_image_window_g_ParamLimits

0xf824,	// (0x0001a659) popup_note_image_window_g

0x8e1d,	// (0x00013c52) popup_note_image_window_t1_ParamLimits

0x8e1d,	// (0x00013c52) popup_note_image_window_t1

0x8e36,	// (0x00013c6b) popup_note_image_window_t2_ParamLimits

0x8e36,	// (0x00013c6b) popup_note_image_window_t2

0x8e4f,	// (0x00013c84) popup_note_image_window_t3_ParamLimits

0x8e4f,	// (0x00013c84) popup_note_image_window_t3

0x0002,

0xf829,	// (0x0001a65e) popup_note_image_window_t_ParamLimits

0xf829,	// (0x0001a65e) popup_note_image_window_t

0x8cc7,	// (0x00013afc) bg_popup_window_pane_cp7_ParamLimits

0x8cc7,	// (0x00013afc) bg_popup_window_pane_cp7

0x8cf7,	// (0x00013b2c) popup_note_wait_window_g1_ParamLimits

0x8cf7,	// (0x00013b2c) popup_note_wait_window_g1

0x8d03,	// (0x00013b38) popup_note_wait_window_g2_ParamLimits

0x8d03,	// (0x00013b38) popup_note_wait_window_g2

0x0002,

0xf812,	// (0x0001a647) popup_note_wait_window_g_ParamLimits

0xf812,	// (0x0001a647) popup_note_wait_window_g

0x8d1b,	// (0x00013b50) popup_note_wait_window_t1_ParamLimits

0x8d1b,	// (0x00013b50) popup_note_wait_window_t1

0x8d42,	// (0x00013b77) popup_note_wait_window_t2_ParamLimits

0x8d42,	// (0x00013b77) popup_note_wait_window_t2

0x8d5f,	// (0x00013b94) popup_note_wait_window_t3_ParamLimits

0x8d5f,	// (0x00013b94) popup_note_wait_window_t3

0x8d72,	// (0x00013ba7) popup_note_wait_window_t4_ParamLimits

0x8d72,	// (0x00013ba7) popup_note_wait_window_t4

0x0004,

0xf819,	// (0x0001a64e) popup_note_wait_window_t_ParamLimits

0xf819,	// (0x0001a64e) popup_note_wait_window_t

0x8d97,	// (0x00013bcc) wait_bar_pane_ParamLimits

0x8d97,	// (0x00013bcc) wait_bar_pane

0x61f3,	// (0x00011028) wait_anim_pane

0x61f3,	// (0x00011028) wait_border_pane

0x610c,	// (0x00010f41) wait_anim_pane_g1

0x610c,	// (0x00010f41) wait_anim_pane_g2

0x0001,

0xf6d9,	// (0x0001a50e) wait_anim_pane_g

0x8c77,	// (0x00013aac) wait_border_pane_g1

0x8c80,	// (0x00013ab5) wait_border_pane_g2

0x8c89,	// (0x00013abe) wait_border_pane_g3

0x0002,

0xf80b,	// (0x0001a640) wait_border_pane_g

0x8ae7,	// (0x0001391c) bg_popup_window_pane_cp16_ParamLimits

0x8ae7,	// (0x0001391c) bg_popup_window_pane_cp16

0x8be7,	// (0x00013a1c) indicator_popup_pane_cp4_ParamLimits

0x8be7,	// (0x00013a1c) indicator_popup_pane_cp4

0x8bfb,	// (0x00013a30) popup_query_data_window_t1_ParamLimits

0x8bfb,	// (0x00013a30) popup_query_data_window_t1

0x8c0d,	// (0x00013a42) popup_query_data_window_t2_ParamLimits

0x8c0d,	// (0x00013a42) popup_query_data_window_t2

0x8c26,	// (0x00013a5b) popup_query_data_window_t3_ParamLimits

0x8c26,	// (0x00013a5b) popup_query_data_window_t3

0x0002,

0xf804,	// (0x0001a639) popup_query_data_window_t_ParamLimits

0xf804,	// (0x0001a639) popup_query_data_window_t

0x8c40,	// (0x00013a75) query_popup_data_pane_ParamLimits

0x8c40,	// (0x00013a75) query_popup_data_pane

0x8c54,	// (0x00013a89) query_popup_data_pane_cp1_ParamLimits

0x8c54,	// (0x00013a89) query_popup_data_pane_cp1

0x8ae7,	// (0x0001391c) bg_popup_window_pane_cp10_ParamLimits

0x8ae7,	// (0x0001391c) bg_popup_window_pane_cp10

0x8b19,	// (0x0001394e) indicator_popup_pane_ParamLimits

0x8b19,	// (0x0001394e) indicator_popup_pane

0x8b3b,	// (0x00013970) popup_query_code_window_t1_ParamLimits

0x8b3b,	// (0x00013970) popup_query_code_window_t1

0x8b55,	// (0x0001398a) popup_query_code_window_t2_ParamLimits

0x8b55,	// (0x0001398a) popup_query_code_window_t2

0x8b9e,	// (0x000139d3) popup_query_code_window_t3_ParamLimits

0x8b9e,	// (0x000139d3) popup_query_code_window_t3

0x0002,

0xf7fd,	// (0x0001a632) popup_query_code_window_t_ParamLimits

0xf7fd,	// (0x0001a632) popup_query_code_window_t

0x8bcd,	// (0x00013a02) query_popup_pane_ParamLimits

0x8bcd,	// (0x00013a02) query_popup_pane

0x6649,	// (0x0001147e) bg_popup_window_pane_cp15_ParamLimits

0x6649,	// (0x0001147e) bg_popup_window_pane_cp15

0x6667,	// (0x0001149c) indicator_popup_pane_cp1_ParamLimits

0x6667,	// (0x0001149c) indicator_popup_pane_cp1

0x667a,	// (0x000114af) indicator_popup_pane_cp2_ParamLimits

0x667a,	// (0x000114af) indicator_popup_pane_cp2

0x668d,	// (0x000114c2) popup_query_data_code_window_g1_ParamLimits

0x668d,	// (0x000114c2) popup_query_data_code_window_g1

0x66a0,	// (0x000114d5) popup_query_data_code_window_t1_ParamLimits

0x66a0,	// (0x000114d5) popup_query_data_code_window_t1

0x66b2,	// (0x000114e7) popup_query_data_code_window_t2_ParamLimits

0x66b2,	// (0x000114e7) popup_query_data_code_window_t2

0x66c4,	// (0x000114f9) popup_query_data_code_window_t3_ParamLimits

0x66c4,	// (0x000114f9) popup_query_data_code_window_t3

0x66da,	// (0x0001150f) popup_query_data_code_window_t4_ParamLimits

0x66da,	// (0x0001150f) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x0001a39a) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x0001a39a) popup_query_data_code_window_t

0x4ce4,	// (0x0000fb19) list_single_midp_graphic_pane_g3

0x66f2,	// (0x00011527) query_popup_data_pane_cp2_ParamLimits

0x6705,	// (0x0001153a) query_popup_pane_cp2_ParamLimits

0x6705,	// (0x0001153a) query_popup_pane_cp2

0x61f3,	// (0x00011028) bg_popup_window_pane_cp11

0x8acb,	// (0x00013900) heading_pane_cp5

0x8ad3,	// (0x00013908) listscroll_popup_info_pane

0x61f3,	// (0x00011028) input_focus_pane_cp3

0x6718,	// (0x0001154d) query_popup_pane_t1

0x6726,	// (0x0001155b) list_popup_info_pane_ParamLimits

0x6726,	// (0x0001155b) list_popup_info_pane

0x6735,	// (0x0001156a) listscroll_popup_info_pane_g1

0x673d,	// (0x00011572) scroll_pane_cp7

0x6745,	// (0x0001157a) popup_info_list_pane_t1_ParamLimits

0x6745,	// (0x0001157a) popup_info_list_pane_t1

0x675f,	// (0x00011594) popup_info_list_pane_t2_ParamLimits

0x675f,	// (0x00011594) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x0001a3a3) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x0001a3a3) popup_info_list_pane_t

0x61f3,	// (0x00011028) bg_popup_window_pane_cp12

0x9dde,	// (0x00014c13) find_popup_pane

0x62d3,	// (0x00011108) bg_popup_window_pane_cp3

0x6779,	// (0x000115ae) heading_pane_cp3

0x6788,	// (0x000115bd) listscroll_popup_graphic_pane

0x61f3,	// (0x00011028) bg_popup_window_pane_cp4

0x03fd,	// (0x0000b232) heading_pane_cp4

0x67ef,	// (0x00011624) listscroll_popup_colour_pane

0x67f7,	// (0x0001162c) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x67f7,	// (0x0001162c) cell_large_graphic_colour_none_popup_pane

0x0405,	// (0x0000b23a) grid_large_graphic_colour_popup_pane_ParamLimits

0x0405,	// (0x0000b23a) grid_large_graphic_colour_popup_pane

0x0421,	// (0x0000b256) listscroll_popup_colour_pane_g1_ParamLimits

0x0421,	// (0x0000b256) listscroll_popup_colour_pane_g1

0x0438,	// (0x0000b26d) listscroll_popup_colour_pane_g2_ParamLimits

0x0438,	// (0x0000b26d) listscroll_popup_colour_pane_g2

0x684e,	// (0x00011683) listscroll_popup_colour_pane_g3_ParamLimits

0x684e,	// (0x00011683) listscroll_popup_colour_pane_g3

0x044c,	// (0x0000b281) listscroll_popup_colour_pane_g4_ParamLimits

0x044c,	// (0x0000b281) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x0001a3a8) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x0001a3a8) listscroll_popup_colour_pane_g

0x686d,	// (0x000116a2) scroll_pane_cp6_ParamLimits

0x686d,	// (0x000116a2) scroll_pane_cp6

0x045b,	// (0x0000b290) cell_large_graphic_colour_popup_pane_ParamLimits

0x045b,	// (0x0000b290) cell_large_graphic_colour_popup_pane

0x689e,	// (0x000116d3) cell_large_graphic_colour_none_popup_pane_t1

0x61f3,	// (0x00011028) grid_highlight_pane_cp5

0x68ad,	// (0x000116e2) cell_large_graphic_colour_popup_pane_g1

0x68b5,	// (0x000116ea) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x0001a3b1) cell_large_graphic_colour_popup_pane_g

0x68bd,	// (0x000116f2) cell_large_graphic_colour_popup_pane_g2_copy1

0x68c6,	// (0x000116fb) grid_highlight_pane_cp4

0x68ce,	// (0x00011703) bg_popup_window_pane_cp8_ParamLimits

0x68ce,	// (0x00011703) bg_popup_window_pane_cp8

0x68e9,	// (0x0001171e) popup_snote_single_text_window_g1_ParamLimits

0x68e9,	// (0x0001171e) popup_snote_single_text_window_g1

0x68fb,	// (0x00011730) popup_snote_single_text_window_t1_ParamLimits

0x68fb,	// (0x00011730) popup_snote_single_text_window_t1

0x690e,	// (0x00011743) popup_snote_single_text_window_t2_ParamLimits

0x690e,	// (0x00011743) popup_snote_single_text_window_t2

0x6921,	// (0x00011756) popup_snote_single_text_window_t3_ParamLimits

0x6921,	// (0x00011756) popup_snote_single_text_window_t3

0x695a,	// (0x0001178f) popup_snote_single_text_window_t4_ParamLimits

0x695a,	// (0x0001178f) popup_snote_single_text_window_t4

0x698e,	// (0x000117c3) popup_snote_single_text_window_t5_ParamLimits

0x698e,	// (0x000117c3) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x0001a3b6) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x0001a3b6) popup_snote_single_text_window_t

0x69bd,	// (0x000117f2) bg_popup_window_pane_cp9_ParamLimits

0x69bd,	// (0x000117f2) bg_popup_window_pane_cp9

0x68e9,	// (0x0001171e) popup_snote_single_graphic_window_g1_ParamLimits

0x68e9,	// (0x0001171e) popup_snote_single_graphic_window_g1

0x69cb,	// (0x00011800) popup_snote_single_graphic_window_g2_ParamLimits

0x69cb,	// (0x00011800) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x0001a3c1) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x0001a3c1) popup_snote_single_graphic_window_g

0x69d7,	// (0x0001180c) popup_snote_single_graphic_window_t1_ParamLimits

0x69d7,	// (0x0001180c) popup_snote_single_graphic_window_t1

0x69ea,	// (0x0001181f) popup_snote_single_graphic_window_t2_ParamLimits

0x69ea,	// (0x0001181f) popup_snote_single_graphic_window_t2

0x6921,	// (0x00011756) popup_snote_single_graphic_window_t3_ParamLimits

0x6921,	// (0x00011756) popup_snote_single_graphic_window_t3

0x695a,	// (0x0001178f) popup_snote_single_graphic_window_t4_ParamLimits

0x695a,	// (0x0001178f) popup_snote_single_graphic_window_t4

0x698e,	// (0x000117c3) popup_snote_single_graphic_window_t5_ParamLimits

0x698e,	// (0x000117c3) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x0001a3c6) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x0001a3c6) popup_snote_single_graphic_window_t

0x1e1d,	// (0x0000cc52) grid_graphic_popup_pane_ParamLimits

0x1e1d,	// (0x0000cc52) grid_graphic_popup_pane

0x1e40,	// (0x0000cc75) listscroll_popup_graphic_pane_g1_ParamLimits

0x1e40,	// (0x0000cc75) listscroll_popup_graphic_pane_g1

0x1e54,	// (0x0000cc89) listscroll_popup_graphic_pane_g2_ParamLimits

0x1e54,	// (0x0000cc89) listscroll_popup_graphic_pane_g2

0x0001,

0xf97a,	// (0x0001a7af) listscroll_popup_graphic_pane_g_ParamLimits

0xf97a,	// (0x0001a7af) listscroll_popup_graphic_pane_g

0x9d96,	// (0x00014bcb) scroll_pane_cp5

0x1dd9,	// (0x0000cc0e) cell_graphic_popup_pane_ParamLimits

0x1dd9,	// (0x0000cc0e) cell_graphic_popup_pane

0x9cd0,	// (0x00014b05) cell_graphic_popup_pane_g1

0x9cd8,	// (0x00014b0d) cell_graphic_popup_pane_g2

0x68bd,	// (0x000116f2) cell_graphic_popup_pane_g3

0x0002,

0xf973,	// (0x0001a7a8) cell_graphic_popup_pane_g

0x9ce1,	// (0x00014b16) cell_graphic_popup_pane_t2

0x68c6,	// (0x000116fb) grid_highlight_pane_cp3

0x6a0f,	// (0x00011844) list_gen_pane_ParamLimits

0x6a0f,	// (0x00011844) list_gen_pane

0x6a40,	// (0x00011875) scroll_pane

0x1dac,	// (0x0000cbe1) bg_list_pane_g1_ParamLimits

0x1dac,	// (0x0000cbe1) bg_list_pane_g1

0x9c67,	// (0x00014a9c) bg_list_pane_g2_ParamLimits

0x9c67,	// (0x00014a9c) bg_list_pane_g2

0x9c7a,	// (0x00014aaf) bg_list_pane_g3_ParamLimits

0x9c7a,	// (0x00014aaf) bg_list_pane_g3

0x9c8c,	// (0x00014ac1) bg_list_pane_g4_ParamLimits

0x9c8c,	// (0x00014ac1) bg_list_pane_g4

0x1dc7,	// (0x0000cbfc) bg_list_pane_g5_ParamLimits

0x1dc7,	// (0x0000cbfc) bg_list_pane_g5

0x0004,

0xf968,	// (0x0001a79d) bg_list_pane_g_ParamLimits

0xf968,	// (0x0001a79d) bg_list_pane_g

0x1d4c,	// (0x0000cb81) list_double2_graphic_large_graphic_pane_ParamLimits

0x1d4c,	// (0x0000cb81) list_double2_graphic_large_graphic_pane

0x1d4c,	// (0x0000cb81) list_double2_graphic_pane_ParamLimits

0x1d4c,	// (0x0000cb81) list_double2_graphic_pane

0x1d4c,	// (0x0000cb81) list_double2_large_graphic_pane_ParamLimits

0x1d4c,	// (0x0000cb81) list_double2_large_graphic_pane

0x1d4c,	// (0x0000cb81) list_double2_pane_ParamLimits

0x1d4c,	// (0x0000cb81) list_double2_pane

0x1d4c,	// (0x0000cb81) list_double_graphic_heading_pane_ParamLimits

0x1d4c,	// (0x0000cb81) list_double_graphic_heading_pane

0x1d4c,	// (0x0000cb81) list_double_graphic_pane_ParamLimits

0x1d4c,	// (0x0000cb81) list_double_graphic_pane

0x1d4c,	// (0x0000cb81) list_double_heading_pane_ParamLimits

0x1d4c,	// (0x0000cb81) list_double_heading_pane

0x1d4c,	// (0x0000cb81) list_double_large_graphic_pane_ParamLimits

0x1d4c,	// (0x0000cb81) list_double_large_graphic_pane

0x1d4c,	// (0x0000cb81) list_double_number_pane_ParamLimits

0x1d4c,	// (0x0000cb81) list_double_number_pane

0x1d4c,	// (0x0000cb81) list_double_pane_ParamLimits

0x1d4c,	// (0x0000cb81) list_double_pane

0x1d4c,	// (0x0000cb81) list_double_time_pane_ParamLimits

0x1d4c,	// (0x0000cb81) list_double_time_pane

0x1d4c,	// (0x0000cb81) list_setting_number_pane_ParamLimits

0x1d4c,	// (0x0000cb81) list_setting_number_pane

0x1d4c,	// (0x0000cb81) list_setting_pane_ParamLimits

0x1d4c,	// (0x0000cb81) list_setting_pane

0x1d5d,	// (0x0000cb92) list_single_2graphic_pane_ParamLimits

0x1d5d,	// (0x0000cb92) list_single_2graphic_pane

0x1d5d,	// (0x0000cb92) list_single_graphic_heading_pane_ParamLimits

0x1d5d,	// (0x0000cb92) list_single_graphic_heading_pane

0x1d5d,	// (0x0000cb92) list_single_graphic_pane_ParamLimits

0x1d5d,	// (0x0000cb92) list_single_graphic_pane

0x1d5d,	// (0x0000cb92) list_single_heading_pane_ParamLimits

0x1d5d,	// (0x0000cb92) list_single_heading_pane

0x1d9a,	// (0x0000cbcf) list_single_large_graphic_pane_ParamLimits

0x1d9a,	// (0x0000cbcf) list_single_large_graphic_pane

0x1d5d,	// (0x0000cb92) list_single_number_heading_pane_ParamLimits

0x1d5d,	// (0x0000cb92) list_single_number_heading_pane

0x1d5d,	// (0x0000cb92) list_single_number_pane_ParamLimits

0x1d5d,	// (0x0000cb92) list_single_number_pane

0x1d5d,	// (0x0000cb92) list_single_pane_ParamLimits

0x1d5d,	// (0x0000cb92) list_single_pane

0x61f3,	// (0x00011028) list_highlight_pane_cp1

0x7c2e,	// (0x00012a63) list_single_pane_g1_ParamLimits

0x7c2e,	// (0x00012a63) list_single_pane_g1

0x8589,	// (0x000133be) list_single_pane_g2_ParamLimits

0x8589,	// (0x000133be) list_single_pane_g2

0x0001,

0xf5a3,	// (0x0001a3d8) list_single_pane_g_ParamLimits

0xf5a3,	// (0x0001a3d8) list_single_pane_g

0xa330,	// (0x00015165) list_single_pane_t1_ParamLimits

0xa330,	// (0x00015165) list_single_pane_t1

0x7c2e,	// (0x00012a63) list_single_number_pane_g1_ParamLimits

0x7c2e,	// (0x00012a63) list_single_number_pane_g1

0x8589,	// (0x000133be) list_single_number_pane_g2_ParamLimits

0x8589,	// (0x000133be) list_single_number_pane_g2

0x0001,

0xf5a3,	// (0x0001a3d8) list_single_number_pane_g_ParamLimits

0xf5a3,	// (0x0001a3d8) list_single_number_pane_g

0x8595,	// (0x000133ca) list_single_number_pane_t1_ParamLimits

0x8595,	// (0x000133ca) list_single_number_pane_t1

0x1bbc,	// (0x0000c9f1) list_single_number_pane_t2_ParamLimits

0x1bbc,	// (0x0000c9f1) list_single_number_pane_t2

0x0001,

0xf929,	// (0x0001a75e) list_single_number_pane_t_ParamLimits

0xf929,	// (0x0001a75e) list_single_number_pane_t

0x857d,	// (0x000133b2) list_single_graphic_pane_g1_ParamLimits

0x857d,	// (0x000133b2) list_single_graphic_pane_g1

0x7c2e,	// (0x00012a63) list_single_graphic_pane_g2_ParamLimits

0x7c2e,	// (0x00012a63) list_single_graphic_pane_g2

0x8589,	// (0x000133be) list_single_graphic_pane_g3_ParamLimits

0x8589,	// (0x000133be) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x0001a3d1) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x0001a3d1) list_single_graphic_pane_g

0x8595,	// (0x000133ca) list_single_graphic_pane_t1_ParamLimits

0x8595,	// (0x000133ca) list_single_graphic_pane_t1

0x7c2e,	// (0x00012a63) list_single_heading_pane_g1_ParamLimits

0x7c2e,	// (0x00012a63) list_single_heading_pane_g1

0x8589,	// (0x000133be) list_single_heading_pane_g2_ParamLimits

0x8589,	// (0x000133be) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x0001a3d8) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x0001a3d8) list_single_heading_pane_g

0x0482,	// (0x0000b2b7) list_single_heading_pane_t1_ParamLimits

0x0482,	// (0x0000b2b7) list_single_heading_pane_t1

0x0498,	// (0x0000b2cd) list_single_heading_pane_t2_ParamLimits

0x0498,	// (0x0000b2cd) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x0001a3dd) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x0001a3dd) list_single_heading_pane_t

0x7c2e,	// (0x00012a63) list_single_number_heading_pane_g1_ParamLimits

0x7c2e,	// (0x00012a63) list_single_number_heading_pane_g1

0x8589,	// (0x000133be) list_single_number_heading_pane_g2_ParamLimits

0x8589,	// (0x000133be) list_single_number_heading_pane_g2

0x0001,

0xf5a3,	// (0x0001a3d8) list_single_number_heading_pane_g_ParamLimits

0xf5a3,	// (0x0001a3d8) list_single_number_heading_pane_g

0x0482,	// (0x0000b2b7) list_single_number_heading_pane_t1_ParamLimits

0x0482,	// (0x0000b2b7) list_single_number_heading_pane_t1

0x04aa,	// (0x0000b2df) list_single_number_heading_pane_t2_ParamLimits

0x04aa,	// (0x0000b2df) list_single_number_heading_pane_t2

0x7c6a,	// (0x00012a9f) list_single_number_heading_pane_t3_ParamLimits

0x7c6a,	// (0x00012a9f) list_single_number_heading_pane_t3

0x0002,

0xf5ad,	// (0x0001a3e2) list_single_number_heading_pane_t_ParamLimits

0xf5ad,	// (0x0001a3e2) list_single_number_heading_pane_t

0x857d,	// (0x000133b2) list_single_graphic_heading_pane_g1_ParamLimits

0x857d,	// (0x000133b2) list_single_graphic_heading_pane_g1

0x04bc,	// (0x0000b2f1) list_single_graphic_heading_pane_g4_ParamLimits

0x04bc,	// (0x0000b2f1) list_single_graphic_heading_pane_g4

0x8589,	// (0x000133be) list_single_graphic_heading_pane_g5_ParamLimits

0x8589,	// (0x000133be) list_single_graphic_heading_pane_g5

0x0002,

0xf5b4,	// (0x0001a3e9) list_single_graphic_heading_pane_g_ParamLimits

0xf5b4,	// (0x0001a3e9) list_single_graphic_heading_pane_g

0x0482,	// (0x0000b2b7) list_single_graphic_heading_pane_t1_ParamLimits

0x0482,	// (0x0000b2b7) list_single_graphic_heading_pane_t1

0x04cd,	// (0x0000b302) list_single_graphic_heading_pane_t2_ParamLimits

0x04cd,	// (0x0000b302) list_single_graphic_heading_pane_t2

0x0001,

0xf5bb,	// (0x0001a3f0) list_single_graphic_heading_pane_t_ParamLimits

0xf5bb,	// (0x0001a3f0) list_single_graphic_heading_pane_t

0x6b1c,	// (0x00011951) list_single_large_graphic_pane_g1_ParamLimits

0x6b1c,	// (0x00011951) list_single_large_graphic_pane_g1

0x6b28,	// (0x0001195d) list_single_large_graphic_pane_g2_ParamLimits

0x6b28,	// (0x0001195d) list_single_large_graphic_pane_g2

0x6b34,	// (0x00011969) list_single_large_graphic_pane_g3_ParamLimits

0x6b34,	// (0x00011969) list_single_large_graphic_pane_g3

0x0002,

0xf5c0,	// (0x0001a3f5) list_single_large_graphic_pane_g_ParamLimits

0xf5c0,	// (0x0001a3f5) list_single_large_graphic_pane_g

0x8c80,	// (0x00013ab5) wait_border_pane_g2_copy1

0x6b40,	// (0x00011975) list_single_large_graphic_pane_g4_cp2

0x6b48,	// (0x0001197d) list_single_large_graphic_pane_t1_ParamLimits

0x6b48,	// (0x0001197d) list_single_large_graphic_pane_t1

0x7ca4,	// (0x00012ad9) list_double_pane_g1_ParamLimits

0x7ca4,	// (0x00012ad9) list_double_pane_g1

0x04df,	// (0x0000b314) list_double_pane_g2_ParamLimits

0x04df,	// (0x0000b314) list_double_pane_g2

0x0001,

0xf5c7,	// (0x0001a3fc) list_double_pane_g_ParamLimits

0xf5c7,	// (0x0001a3fc) list_double_pane_g

0x04eb,	// (0x0000b320) list_double_pane_t1_ParamLimits

0x04eb,	// (0x0000b320) list_double_pane_t1

0x0501,	// (0x0000b336) list_double_pane_t2_ParamLimits

0x0501,	// (0x0000b336) list_double_pane_t2

0x0001,

0xf5cc,	// (0x0001a401) list_double_pane_t_ParamLimits

0xf5cc,	// (0x0001a401) list_double_pane_t

0x0513,	// (0x0000b348) list_double2_pane_g1_ParamLimits

0x0513,	// (0x0000b348) list_double2_pane_g1

0x6b6a,	// (0x0001199f) list_double2_pane_g2_ParamLimits

0x6b6a,	// (0x0001199f) list_double2_pane_g2

0x0001,

0xf5d1,	// (0x0001a406) list_double2_pane_g_ParamLimits

0xf5d1,	// (0x0001a406) list_double2_pane_g

0x6b76,	// (0x000119ab) list_double2_pane_t1_ParamLimits

0x6b76,	// (0x000119ab) list_double2_pane_t1

0x0524,	// (0x0000b359) list_double2_pane_t2_ParamLimits

0x0524,	// (0x0000b359) list_double2_pane_t2

0x0001,

0xf5d6,	// (0x0001a40b) list_double2_pane_t_ParamLimits

0xf5d6,	// (0x0001a40b) list_double2_pane_t

0x7ca4,	// (0x00012ad9) list_double_number_pane_g1_ParamLimits

0x7ca4,	// (0x00012ad9) list_double_number_pane_g1

0x04df,	// (0x0000b314) list_double_number_pane_g2_ParamLimits

0x04df,	// (0x0000b314) list_double_number_pane_g2

0x0001,

0xf5c7,	// (0x0001a3fc) list_double_number_pane_g_ParamLimits

0xf5c7,	// (0x0001a3fc) list_double_number_pane_g

0x0536,	// (0x0000b36b) list_double_number_pane_t1_ParamLimits

0x0536,	// (0x0000b36b) list_double_number_pane_t1

0x0548,	// (0x0000b37d) list_double_number_pane_t2_ParamLimits

0x0548,	// (0x0000b37d) list_double_number_pane_t2

0x055e,	// (0x0000b393) list_double_number_pane_t3_ParamLimits

0x055e,	// (0x0000b393) list_double_number_pane_t3

0x0002,

0xf5db,	// (0x0001a410) list_double_number_pane_t_ParamLimits

0xf5db,	// (0x0001a410) list_double_number_pane_t

0x0570,	// (0x0000b3a5) list_double_graphic_pane_g1_ParamLimits

0x0570,	// (0x0000b3a5) list_double_graphic_pane_g1

0x9461,	// (0x00014296) list_double_graphic_pane_g2_ParamLimits

0x9461,	// (0x00014296) list_double_graphic_pane_g2

0x057c,	// (0x0000b3b1) list_double_graphic_pane_g3_ParamLimits

0x057c,	// (0x0000b3b1) list_double_graphic_pane_g3

0x0003,

0xf5e2,	// (0x0001a417) list_double_graphic_pane_g_ParamLimits

0xf5e2,	// (0x0001a417) list_double_graphic_pane_g

0x0594,	// (0x0000b3c9) list_double_graphic_pane_t1_ParamLimits

0x0594,	// (0x0000b3c9) list_double_graphic_pane_t1

0x05aa,	// (0x0000b3df) list_double_graphic_pane_t2_ParamLimits

0x05aa,	// (0x0000b3df) list_double_graphic_pane_t2

0x0001,

0xf5eb,	// (0x0001a420) list_double_graphic_pane_t_ParamLimits

0xf5eb,	// (0x0001a420) list_double_graphic_pane_t

0x6c1b,	// (0x00011a50) list_double2_graphic_pane_g1_ParamLimits

0x6c1b,	// (0x00011a50) list_double2_graphic_pane_g1

0x6b5e,	// (0x00011993) list_double2_graphic_pane_g2_ParamLimits

0x6b5e,	// (0x00011993) list_double2_graphic_pane_g2

0x6b6a,	// (0x0001199f) list_double2_graphic_pane_g3_ParamLimits

0x6b6a,	// (0x0001199f) list_double2_graphic_pane_g3

0x0002,

0xf5f0,	// (0x0001a425) list_double2_graphic_pane_g_ParamLimits

0xf5f0,	// (0x0001a425) list_double2_graphic_pane_g

0x6bf3,	// (0x00011a28) list_double2_graphic_pane_t1_ParamLimits

0x6bf3,	// (0x00011a28) list_double2_graphic_pane_t1

0x05bc,	// (0x0000b3f1) list_double2_graphic_pane_t2_ParamLimits

0x05bc,	// (0x0000b3f1) list_double2_graphic_pane_t2

0x0001,

0xf5f7,	// (0x0001a42c) list_double2_graphic_pane_t_ParamLimits

0xf5f7,	// (0x0001a42c) list_double2_graphic_pane_t

0x05ce,	// (0x0000b403) list_double_large_graphic_pane_g1_ParamLimits

0x05ce,	// (0x0000b403) list_double_large_graphic_pane_g1

0x05f7,	// (0x0000b42c) list_double_large_graphic_pane_g2_ParamLimits

0x05f7,	// (0x0000b42c) list_double_large_graphic_pane_g2

0x04df,	// (0x0000b314) list_double_large_graphic_pane_g3_ParamLimits

0x04df,	// (0x0000b314) list_double_large_graphic_pane_g3

0x0608,	// (0x0000b43d) list_double_large_graphic_pane_g4_ParamLimits

0x0608,	// (0x0000b43d) list_double_large_graphic_pane_g4

0x0004,

0xf5fc,	// (0x0001a431) list_double_large_graphic_pane_g_ParamLimits

0xf5fc,	// (0x0001a431) list_double_large_graphic_pane_g

0x0619,	// (0x0000b44e) list_double_large_graphic_pane_t1_ParamLimits

0x0619,	// (0x0000b44e) list_double_large_graphic_pane_t1

0x0632,	// (0x0000b467) list_double_large_graphic_pane_t2_ParamLimits

0x0632,	// (0x0000b467) list_double_large_graphic_pane_t2

0x0001,

0xf607,	// (0x0001a43c) list_double_large_graphic_pane_t_ParamLimits

0xf607,	// (0x0001a43c) list_double_large_graphic_pane_t

0x0644,	// (0x0000b479) list_double2_large_graphic_pane_g1_ParamLimits

0x0644,	// (0x0000b479) list_double2_large_graphic_pane_g1

0x0513,	// (0x0000b348) list_double2_large_graphic_pane_g2_ParamLimits

0x0513,	// (0x0000b348) list_double2_large_graphic_pane_g2

0x6b6a,	// (0x0001199f) list_double2_large_graphic_pane_g3_ParamLimits

0x6b6a,	// (0x0001199f) list_double2_large_graphic_pane_g3

0x0002,

0xf60c,	// (0x0001a441) list_double2_large_graphic_pane_g_ParamLimits

0xf60c,	// (0x0001a441) list_double2_large_graphic_pane_g

0x6d9f,	// (0x00011bd4) list_double2_large_graphic_pane_t1_ParamLimits

0x6d9f,	// (0x00011bd4) list_double2_large_graphic_pane_t1

0x0650,	// (0x0000b485) list_double2_large_graphic_pane_t2_ParamLimits

0x0650,	// (0x0000b485) list_double2_large_graphic_pane_t2

0x0001,

0xf613,	// (0x0001a448) list_double2_large_graphic_pane_t_ParamLimits

0xf613,	// (0x0001a448) list_double2_large_graphic_pane_t

0x0662,	// (0x0000b497) list_double_heading_pane_g1_ParamLimits

0x0662,	// (0x0000b497) list_double_heading_pane_g1

0x0673,	// (0x0000b4a8) list_double_heading_pane_g2_ParamLimits

0x0673,	// (0x0000b4a8) list_double_heading_pane_g2

0x0001,

0xf618,	// (0x0001a44d) list_double_heading_pane_g_ParamLimits

0xf618,	// (0x0001a44d) list_double_heading_pane_g

0x067f,	// (0x0000b4b4) list_double_heading_pane_t1_ParamLimits

0x067f,	// (0x0000b4b4) list_double_heading_pane_t1

0x0524,	// (0x0000b359) list_double_heading_pane_t2_ParamLimits

0x0524,	// (0x0000b359) list_double_heading_pane_t2

0x0001,

0xf61d,	// (0x0001a452) list_double_heading_pane_t_ParamLimits

0xf61d,	// (0x0001a452) list_double_heading_pane_t

0x6c76,	// (0x00011aab) list_double_graphic_heading_pane_g1_ParamLimits

0x6c76,	// (0x00011aab) list_double_graphic_heading_pane_g1

0x0662,	// (0x0000b497) list_double_graphic_heading_pane_g2_ParamLimits

0x0662,	// (0x0000b497) list_double_graphic_heading_pane_g2

0x0673,	// (0x0000b4a8) list_double_graphic_heading_pane_g3_ParamLimits

0x0673,	// (0x0000b4a8) list_double_graphic_heading_pane_g3

0x0002,

0xf622,	// (0x0001a457) list_double_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x0001a457) list_double_graphic_heading_pane_g

0x0695,	// (0x0000b4ca) list_double_graphic_heading_pane_t1_ParamLimits

0x0695,	// (0x0000b4ca) list_double_graphic_heading_pane_t1

0x05bc,	// (0x0000b3f1) list_double_graphic_heading_pane_t2_ParamLimits

0x05bc,	// (0x0000b3f1) list_double_graphic_heading_pane_t2

0x0001,

0xf629,	// (0x0001a45e) list_double_graphic_heading_pane_t_ParamLimits

0xf629,	// (0x0001a45e) list_double_graphic_heading_pane_t

0x05f7,	// (0x0000b42c) list_double_time_pane_g1_ParamLimits

0x05f7,	// (0x0000b42c) list_double_time_pane_g1

0x04df,	// (0x0000b314) list_double_time_pane_g2_ParamLimits

0x04df,	// (0x0000b314) list_double_time_pane_g2

0x0001,

0xf62e,	// (0x0001a463) list_double_time_pane_g_ParamLimits

0xf62e,	// (0x0001a463) list_double_time_pane_g

0x06ab,	// (0x0000b4e0) list_double_time_pane_t1_ParamLimits

0x06ab,	// (0x0000b4e0) list_double_time_pane_t1

0x06c1,	// (0x0000b4f6) list_double_time_pane_t2_ParamLimits

0x06c1,	// (0x0000b4f6) list_double_time_pane_t2

0x06d3,	// (0x0000b508) list_double_time_pane_t3_ParamLimits

0x06d3,	// (0x0000b508) list_double_time_pane_t3

0x06e5,	// (0x0000b51a) list_double_time_pane_t4_ParamLimits

0x06e5,	// (0x0000b51a) list_double_time_pane_t4

0x0003,

0xf633,	// (0x0001a468) list_double_time_pane_t_ParamLimits

0xf633,	// (0x0001a468) list_double_time_pane_t

0x6b5e,	// (0x00011993) list_setting_pane_g1_ParamLimits

0x6b5e,	// (0x00011993) list_setting_pane_g1

0x6b6a,	// (0x0001199f) list_setting_pane_g2_ParamLimits

0x6b6a,	// (0x0001199f) list_setting_pane_g2

0x0001,

0xf63c,	// (0x0001a471) list_setting_pane_g_ParamLimits

0xf63c,	// (0x0001a471) list_setting_pane_g

0x06f7,	// (0x0000b52c) list_setting_pane_t1_ParamLimits

0x06f7,	// (0x0000b52c) list_setting_pane_t1

0x070e,	// (0x0000b543) list_setting_pane_t2_ParamLimits

0x070e,	// (0x0000b543) list_setting_pane_t2

0x0002,

0xf641,	// (0x0001a476) list_setting_pane_t_ParamLimits

0xf641,	// (0x0001a476) list_setting_pane_t

0x074b,	// (0x0000b580) set_value_pane_cp_ParamLimits

0x074b,	// (0x0000b580) set_value_pane_cp

0x6b5e,	// (0x00011993) list_setting_number_pane_g1_ParamLimits

0x6b5e,	// (0x00011993) list_setting_number_pane_g1

0x6b6a,	// (0x0001199f) list_setting_number_pane_g2_ParamLimits

0x6b6a,	// (0x0001199f) list_setting_number_pane_g2

0x0001,

0xf63c,	// (0x0001a471) list_setting_number_pane_g_ParamLimits

0xf63c,	// (0x0001a471) list_setting_number_pane_g

0x0757,	// (0x0000b58c) list_setting_number_pane_t1_ParamLimits

0x0757,	// (0x0000b58c) list_setting_number_pane_t1

0x076b,	// (0x0000b5a0) list_setting_number_pane_t2_ParamLimits

0x076b,	// (0x0000b5a0) list_setting_number_pane_t2

0x0782,	// (0x0000b5b7) list_setting_number_pane_t3_ParamLimits

0x0782,	// (0x0000b5b7) list_setting_number_pane_t3

0x0003,

0xf648,	// (0x0001a47d) list_setting_number_pane_t_ParamLimits

0xf648,	// (0x0001a47d) list_setting_number_pane_t

0x074b,	// (0x0000b580) set_value_pane_ParamLimits

0x074b,	// (0x0000b580) set_value_pane

0x6eb5,	// (0x00011cea) bg_set_opt_pane_ParamLimits

0x6eb5,	// (0x00011cea) bg_set_opt_pane

0x6ed6,	// (0x00011d0b) set_value_pane_t1

0x6ee4,	// (0x00011d19) slider_set_pane_cp3

0x6eed,	// (0x00011d22) volume_small_pane_cp

0x6ef6,	// (0x00011d2b) list_form_gen_pane

0x6a64,	// (0x00011899) scroll_pane_cp8

0xa6f9,	// (0x0001552e) form_field_data_pane_ParamLimits

0xa6f9,	// (0x0001552e) form_field_data_pane

0x07c5,	// (0x0000b5fa) form_field_data_wide_pane_ParamLimits

0x07c5,	// (0x0000b5fa) form_field_data_wide_pane

0x07e5,	// (0x0000b61a) form_field_popup_pane_ParamLimits

0x07e5,	// (0x0000b61a) form_field_popup_pane

0x07fd,	// (0x0000b632) form_field_popup_wide_pane_ParamLimits

0x07fd,	// (0x0000b632) form_field_popup_wide_pane

0x6f7d,	// (0x00011db2) form_field_slider_pane_ParamLimits

0x6f7d,	// (0x00011db2) form_field_slider_pane

0x6f90,	// (0x00011dc5) form_field_slider_wide_pane_ParamLimits

0x6f90,	// (0x00011dc5) form_field_slider_wide_pane

0x6fa3,	// (0x00011dd8) data_form_pane

0x081e,	// (0x0000b653) form_field_data_pane_t1

0x6fcf,	// (0x00011e04) input_focus_pane

0x6fdd,	// (0x00011e12) data_form_wide_pane

0x7009,	// (0x00011e3e) form_field_data_wide_pane_t1

0x68db,	// (0x00011710) input_focus_pane_cp6

0x0836,	// (0x0000b66b) form_field_popup_pane_t1

0x6fcf,	// (0x00011e04) input_focus_pane_cp7

0x6fa3,	// (0x00011dd8) list_form_pane

0x7048,	// (0x00011e7d) form_field_popup_wide_pane_t1

0x6fcf,	// (0x00011e04) input_focus_pane_cp8

0x705d,	// (0x00011e92) list_form_wide_pane

0x0856,	// (0x0000b68b) form_field_slider_pane_t1_ParamLimits

0x0856,	// (0x0000b68b) form_field_slider_pane_t1

0x086c,	// (0x0000b6a1) form_field_slider_pane_t2_ParamLimits

0x086c,	// (0x0000b6a1) form_field_slider_pane_t2

0x0001,

0xf658,	// (0x0001a48d) form_field_slider_pane_t_ParamLimits

0xf658,	// (0x0001a48d) form_field_slider_pane_t

0x656d,	// (0x000113a2) input_focus_pane_cp9_ParamLimits

0x656d,	// (0x000113a2) input_focus_pane_cp9

0x0881,	// (0x0000b6b6) slider_cont_pane_ParamLimits

0x0881,	// (0x0000b6b6) slider_cont_pane

0x70b0,	// (0x00011ee5) form_field_slider_wide_pane_t1_ParamLimits

0x70b0,	// (0x00011ee5) form_field_slider_wide_pane_t1

0x70c2,	// (0x00011ef7) form_field_slider_wide_pane_t2_ParamLimits

0x70c2,	// (0x00011ef7) form_field_slider_wide_pane_t2

0x0001,

0xf65d,	// (0x0001a492) form_field_slider_wide_pane_t_ParamLimits

0xf65d,	// (0x0001a492) form_field_slider_wide_pane_t

0x656d,	// (0x000113a2) input_focus_pane_cp10_ParamLimits

0x656d,	// (0x000113a2) input_focus_pane_cp10

0x0895,	// (0x0000b6ca) slider_cont_pane_cp1_ParamLimits

0x0895,	// (0x0000b6ca) slider_cont_pane_cp1

0x08ab,	// (0x0000b6e0) slider_form_pane_cp

0x70f2,	// (0x00011f27) input_focus_pane_g1

0x70fa,	// (0x00011f2f) input_focus_pane_g2

0x7102,	// (0x00011f37) input_focus_pane_g3

0x710a,	// (0x00011f3f) input_focus_pane_g4

0x7112,	// (0x00011f47) input_focus_pane_g5

0x711a,	// (0x00011f4f) input_focus_pane_g6

0x7122,	// (0x00011f57) input_focus_pane_g7

0x712a,	// (0x00011f5f) input_focus_pane_g8

0x7132,	// (0x00011f67) input_focus_pane_g9

0x610c,	// (0x00010f41) input_focus_pane_g10

0x0009,

0xf662,	// (0x0001a497) input_focus_pane_g

0x8c89,	// (0x00013abe) wait_border_pane_g3_copy1

0x08b3,	// (0x0000b6e8) data_form_pane_t1

0x610c,	// (0x00010f41) wait_anim_pane_g1_copy1

0x1d33,	// (0x0000cb68) data_form_wide_pane_t1

0x08cc,	// (0x0000b701) list_form_graphic_pane_cp_ParamLimits

0x08cc,	// (0x0000b701) list_form_graphic_pane_cp

0x9afc,	// (0x00014931) slider_form_pane_g1

0x9b05,	// (0x0001493a) slider_form_pane_g2

0x0006,

0xf959,	// (0x0001a78e) slider_form_pane_g

0x7154,	// (0x00011f89) list_form_graphic_pane_ParamLimits

0x7154,	// (0x00011f89) list_form_graphic_pane

0x717f,	// (0x00011fb4) list_form_graphic_pane_g1

0x7187,	// (0x00011fbc) list_form_graphic_pane_t1_ParamLimits

0x7187,	// (0x00011fbc) list_form_graphic_pane_t1

0x62d3,	// (0x00011108) list_highlight_pane_cp5_ParamLimits

0x62d3,	// (0x00011108) list_highlight_pane_cp5

0x08e0,	// (0x0000b715) find_pane_g1

0x71a5,	// (0x00011fda) input_find_pane

0x08eb,	// (0x0000b720) input_find_pane_g1_ParamLimits

0x08eb,	// (0x0000b720) input_find_pane_g1

0x08f7,	// (0x0000b72c) input_find_pane_t1_ParamLimits

0x08f7,	// (0x0000b72c) input_find_pane_t1

0x090c,	// (0x0000b741) input_find_pane_t2_ParamLimits

0x090c,	// (0x0000b741) input_find_pane_t2

0x0001,

0xf677,	// (0x0001a4ac) input_find_pane_t_ParamLimits

0xf677,	// (0x0001a4ac) input_find_pane_t

0x71e4,	// (0x00012019) input_focus_pane_cp5_ParamLimits

0x71e4,	// (0x00012019) input_focus_pane_cp5

0x656d,	// (0x000113a2) bg_popup_window_pane_cp2_ParamLimits

0x656d,	// (0x000113a2) bg_popup_window_pane_cp2

0x7203,	// (0x00012038) listscroll_menu_pane_ParamLimits

0x7203,	// (0x00012038) listscroll_menu_pane

0x720f,	// (0x00012044) popup_submenu_window_ParamLimits

0x720f,	// (0x00012044) popup_submenu_window

0x7233,	// (0x00012068) find_popup_pane_g1

0x723b,	// (0x00012070) input_popup_find_pane_cp

0x7245,	// (0x0001207a) input_focus_pane_cp4_ParamLimits

0x7245,	// (0x0001207a) input_focus_pane_cp4

0x725f,	// (0x00012094) input_popup_find_pane_t1_ParamLimits

0x725f,	// (0x00012094) input_popup_find_pane_t1

0x61f3,	// (0x00011028) bg_popup_sub_pane_cp

0x728d,	// (0x000120c2) listscroll_popup_sub_pane

0x7295,	// (0x000120ca) list_submenu_pane_ParamLimits

0x7295,	// (0x000120ca) list_submenu_pane

0x72a6,	// (0x000120db) scroll_pane_cp4

0x72ae,	// (0x000120e3) list_single_popup_submenu_pane_ParamLimits

0x72ae,	// (0x000120e3) list_single_popup_submenu_pane

0x72c0,	// (0x000120f5) list_single_popup_submenu_pane_g1

0x72c8,	// (0x000120fd) list_single_popup_submenu_pane_t1_ParamLimits

0x72c8,	// (0x000120fd) list_single_popup_submenu_pane_t1

0x656d,	// (0x000113a2) bg_active_tab_pane_cp1_ParamLimits

0x656d,	// (0x000113a2) bg_active_tab_pane_cp1

0x9dbc,	// (0x00014bf1) tabs_2_active_pane_g1

0x092d,	// (0x0000b762) tabs_2_active_pane_t1

0x656d,	// (0x000113a2) bg_passive_tab_pane_cp1_ParamLimits

0x656d,	// (0x000113a2) bg_passive_tab_pane_cp1

0x9dbc,	// (0x00014bf1) tabs_2_passive_pane_g1

0x092d,	// (0x0000b762) tabs_2_passive_pane_t1

0x62d3,	// (0x00011108) bg_active_tab_pane_cp4

0x0943,	// (0x0000b778) tabs_2_long_active_pane_t1

0x8108,	// (0x00012f3d) bg_passive_tab_pane_cp4

0x4cec,	// (0x0000fb21) list_single_midp_graphic_pane_g4_ParamLimits

0x62d3,	// (0x00011108) bg_active_tab_pane_cp5

0x095a,	// (0x0000b78f) tabs_3_long_active_pane_t1

0x8108,	// (0x00012f3d) bg_passive_tab_pane_cp5

0x4cec,	// (0x0000fb21) list_single_midp_graphic_pane_g4

0x62d3,	// (0x00011108) bg_popup_window_pane_cp13_ParamLimits

0x62d3,	// (0x00011108) bg_popup_window_pane_cp13

0x733f,	// (0x00012174) listscroll_popup_fast_pane_ParamLimits

0x733f,	// (0x00012174) listscroll_popup_fast_pane

0x734e,	// (0x00012183) grid_popup_fast_pane_ParamLimits

0x734e,	// (0x00012183) grid_popup_fast_pane

0x7360,	// (0x00012195) scroll_pane_cp9_ParamLimits

0x7360,	// (0x00012195) scroll_pane_cp9

0xb754,	// (0x00016589) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xb754,	// (0x00016589) list_single_graphic_hl_pane_t1_cp2

0x7384,	// (0x000121b9) input_focus_pane_cp20_ParamLimits

0x7384,	// (0x000121b9) input_focus_pane_cp20

0x7392,	// (0x000121c7) query_popup_data_pane_t1_ParamLimits

0x7392,	// (0x000121c7) query_popup_data_pane_t1

0x73a5,	// (0x000121da) query_popup_data_pane_t2_ParamLimits

0x73a5,	// (0x000121da) query_popup_data_pane_t2

0x73eb,	// (0x00012220) query_popup_data_pane_t3_ParamLimits

0x73eb,	// (0x00012220) query_popup_data_pane_t3

0x742c,	// (0x00012261) query_popup_data_pane_t4_ParamLimits

0x742c,	// (0x00012261) query_popup_data_pane_t4

0x7468,	// (0x0001229d) query_popup_data_pane_t5_ParamLimits

0x7468,	// (0x0001229d) query_popup_data_pane_t5

0x0004,

0xf67c,	// (0x0001a4b1) query_popup_data_pane_t_ParamLimits

0xf67c,	// (0x0001a4b1) query_popup_data_pane_t

0x70f2,	// (0x00011f27) bg_set_opt_pane_g1

0x70fa,	// (0x00011f2f) bg_set_opt_pane_g2

0x7102,	// (0x00011f37) bg_set_opt_pane_g3

0x710a,	// (0x00011f3f) bg_set_opt_pane_g4

0x7112,	// (0x00011f47) bg_set_opt_pane_g5

0x711a,	// (0x00011f4f) bg_set_opt_pane_g6

0x7122,	// (0x00011f57) bg_set_opt_pane_g7

0x712a,	// (0x00011f5f) bg_set_opt_pane_g8

0x7132,	// (0x00011f67) bg_set_opt_pane_g9

0x0008,

0xf687,	// (0x0001a4bc) bg_set_opt_pane_g

0x444c,	// (0x0000f281) control_top_pane_stacon_ParamLimits

0x444c,	// (0x0000f281) control_top_pane_stacon

0x449f,	// (0x0000f2d4) signal_pane_stacon_ParamLimits

0x449f,	// (0x0000f2d4) signal_pane_stacon

0x7aac,	// (0x000128e1) stacon_top_pane_g1_ParamLimits

0x7aac,	// (0x000128e1) stacon_top_pane_g1

0x44c4,	// (0x0000f2f9) title_pane_stacon_ParamLimits

0x44c4,	// (0x0000f2f9) title_pane_stacon

0x44e6,	// (0x0000f31b) uni_indicator_pane_stacon_ParamLimits

0x44e6,	// (0x0000f31b) uni_indicator_pane_stacon

0x44fb,	// (0x0000f330) battery_pane_stacon_ParamLimits

0x44fb,	// (0x0000f330) battery_pane_stacon

0x453b,	// (0x0000f370) control_bottom_pane_stacon_ParamLimits

0x453b,	// (0x0000f370) control_bottom_pane_stacon

0x455a,	// (0x0000f38f) navi_pane_stacon_ParamLimits

0x455a,	// (0x0000f38f) navi_pane_stacon

0x7ace,	// (0x00012903) stacon_bottom_pane_g1_ParamLimits

0x7ace,	// (0x00012903) stacon_bottom_pane_g1

0x749f,	// (0x000122d4) aid_levels_signal_lsc_ParamLimits

0x749f,	// (0x000122d4) aid_levels_signal_lsc

0x4218,	// (0x0000f04d) signal_pane_stacon_g1_ParamLimits

0x4218,	// (0x0000f04d) signal_pane_stacon_g1

0x4224,	// (0x0000f059) signal_pane_stacon_g2_ParamLimits

0x4224,	// (0x0000f059) signal_pane_stacon_g2

0x0001,

0xf69a,	// (0x0001a4cf) signal_pane_stacon_g_ParamLimits

0xf69a,	// (0x0001a4cf) signal_pane_stacon_g

0x4258,	// (0x0000f08d) title_pane_stacon_t1_ParamLimits

0x4258,	// (0x0000f08d) title_pane_stacon_t1

0x74b9,	// (0x000122ee) uni_indicator_pane_stacon_g1

0x74c3,	// (0x000122f8) uni_indicator_pane_stacon_g2

0x74cd,	// (0x00012302) uni_indicator_pane_stacon_g3

0x74d7,	// (0x0001230c) uni_indicator_pane_stacon_g4

0x0003,

0xf6a6,	// (0x0001a4db) uni_indicator_pane_stacon_g

0x427d,	// (0x0000f0b2) control_top_pane_stacon_g1

0x4285,	// (0x0000f0ba) control_top_pane_stacon_t1_ParamLimits

0x4285,	// (0x0000f0ba) control_top_pane_stacon_t1

0x74e1,	// (0x00012316) aid_levels_battery_lsc_ParamLimits

0x74e1,	// (0x00012316) aid_levels_battery_lsc

0x42b6,	// (0x0000f0eb) battery_pane_stacon_g1_ParamLimits

0x42b6,	// (0x0000f0eb) battery_pane_stacon_g1

0x42c2,	// (0x0000f0f7) battery_pane_stacon_g2_ParamLimits

0x42c2,	// (0x0000f0f7) battery_pane_stacon_g2

0x0001,

0xf6af,	// (0x0001a4e4) battery_pane_stacon_g_ParamLimits

0xf6af,	// (0x0001a4e4) battery_pane_stacon_g

0x42f1,	// (0x0000f126) navi_icon_pane_stacon

0x4301,	// (0x0000f136) navi_navi_pane_stacon

0x42f1,	// (0x0000f126) navi_text_pane_stacon

0x427d,	// (0x0000f0b2) control_bottom_pane_stacon_g1

0x4311,	// (0x0000f146) control_bottom_pane_stacon_t1_ParamLimits

0x4311,	// (0x0000f146) control_bottom_pane_stacon_t1

0x0970,	// (0x0000b7a5) grid_app_pane_ParamLimits

0x0970,	// (0x0000b7a5) grid_app_pane

0x099e,	// (0x0000b7d3) scroll_pane_cp15_ParamLimits

0x099e,	// (0x0000b7d3) scroll_pane_cp15

0x09b1,	// (0x0000b7e6) cell_app_pane_ParamLimits

0x09b1,	// (0x0000b7e6) cell_app_pane

0x09ee,	// (0x0000b823) cell_app_pane_g1_ParamLimits

0x09ee,	// (0x0000b823) cell_app_pane_g1

0x757e,	// (0x000123b3) cell_app_pane_g2_ParamLimits

0x757e,	// (0x000123b3) cell_app_pane_g2

0x0001,

0xf6b4,	// (0x0001a4e9) cell_app_pane_g_ParamLimits

0xf6b4,	// (0x0001a4e9) cell_app_pane_g

0x0a12,	// (0x0000b847) cell_app_pane_t1_ParamLimits

0x0a12,	// (0x0000b847) cell_app_pane_t1

0x75a1,	// (0x000123d6) grid_highlight_pane_ParamLimits

0x75a1,	// (0x000123d6) grid_highlight_pane

0x70f2,	// (0x00011f27) cell_highlight_pane_g1

0x70fa,	// (0x00011f2f) cell_highlight_pane_g2

0x7102,	// (0x00011f37) cell_highlight_pane_g3

0x710a,	// (0x00011f3f) cell_highlight_pane_g4

0x7112,	// (0x00011f47) cell_highlight_pane_g5

0x711a,	// (0x00011f4f) cell_highlight_pane_g6

0x7122,	// (0x00011f57) cell_highlight_pane_g7

0x712a,	// (0x00011f5f) cell_highlight_pane_g8

0x7132,	// (0x00011f67) cell_highlight_pane_g9

0x610c,	// (0x00010f41) cell_highlight_pane_g10

0x0009,

0xf662,	// (0x0001a497) cell_highlight_pane_g

0x75b2,	// (0x000123e7) bg_scroll_pane

0x4355,	// (0x0000f18a) scroll_handle_pane

0x75f9,	// (0x0001242e) scroll_bg_pane_g1

0x760e,	// (0x00012443) scroll_bg_pane_g2

0x7626,	// (0x0001245b) scroll_bg_pane_g3

0x0002,

0xf6b9,	// (0x0001a4ee) scroll_bg_pane_g

0x763b,	// (0x00012470) scroll_handle_focus_pane_ParamLimits

0x763b,	// (0x00012470) scroll_handle_focus_pane

0x75f9,	// (0x0001242e) scroll_handle_pane_g1

0x7648,	// (0x0001247d) scroll_handle_pane_g2

0x7626,	// (0x0001245b) scroll_handle_pane_g3

0x0002,

0xf6c0,	// (0x0001a4f5) scroll_handle_pane_g

0x7245,	// (0x0001207a) bg_popup_sub_pane_cp21_ParamLimits

0x7245,	// (0x0001207a) bg_popup_sub_pane_cp21

0x765c,	// (0x00012491) popup_fep_japan_predictive_window_t1_ParamLimits

0x765c,	// (0x00012491) popup_fep_japan_predictive_window_t1

0x7673,	// (0x000124a8) popup_fep_japan_predictive_window_t2_ParamLimits

0x7673,	// (0x000124a8) popup_fep_japan_predictive_window_t2

0x76a6,	// (0x000124db) popup_fep_japan_predictive_window_t3_ParamLimits

0x76a6,	// (0x000124db) popup_fep_japan_predictive_window_t3

0x0002,

0xf6c7,	// (0x0001a4fc) popup_fep_japan_predictive_window_t_ParamLimits

0xf6c7,	// (0x0001a4fc) popup_fep_japan_predictive_window_t

0x61f3,	// (0x00011028) bg_popup_sub_pane_cp23

0x76dd,	// (0x00012512) listscroll_japin_cand_pane

0x76e5,	// (0x0001251a) popup_fep_japan_candidate_window_t1

0x76f3,	// (0x00012528) candidate_pane_ParamLimits

0x76f3,	// (0x00012528) candidate_pane

0x7706,	// (0x0001253b) scroll_pane_cp30

0x770e,	// (0x00012543) list_single_popup_jap_candidate_pane_ParamLimits

0x770e,	// (0x00012543) list_single_popup_jap_candidate_pane

0x61f3,	// (0x00011028) list_highlight_pane_cp30

0x7723,	// (0x00012558) list_single_popup_jap_candidate_pane_t1

0x0a32,	// (0x0000b867) level_1_signal

0x0a44,	// (0x0000b879) level_2_signal

0x0a57,	// (0x0000b88c) level_3_signal

0x0a6a,	// (0x0000b89f) level_4_signal

0x0a7d,	// (0x0000b8b2) level_5_signal

0x0a90,	// (0x0000b8c5) level_6_signal

0x0aa3,	// (0x0000b8d8) level_7_signal

0x0a32,	// (0x0000b867) level_1_battery

0x0a44,	// (0x0000b879) level_2_battery

0x0a57,	// (0x0000b88c) level_3_battery

0x0a6a,	// (0x0000b89f) level_4_battery

0x0a7d,	// (0x0000b8b2) level_5_battery

0x0a90,	// (0x0000b8c5) level_6_battery

0x0aa3,	// (0x0000b8d8) level_7_battery

0x77a5,	// (0x000125da) list_menu_pane_ParamLimits

0x77a5,	// (0x000125da) list_menu_pane

0x77bb,	// (0x000125f0) scroll_pane_cp25_ParamLimits

0x77bb,	// (0x000125f0) scroll_pane_cp25

0x0ab6,	// (0x0000b8eb) list_double2_graphic_pane_cp2_ParamLimits

0x0ab6,	// (0x0000b8eb) list_double2_graphic_pane_cp2

0x0ab6,	// (0x0000b8eb) list_double2_large_graphic_pane_cp2_ParamLimits

0x0ab6,	// (0x0000b8eb) list_double2_large_graphic_pane_cp2

0x0ab6,	// (0x0000b8eb) list_double2_pane_cp2_ParamLimits

0x0ab6,	// (0x0000b8eb) list_double2_pane_cp2

0x0ab6,	// (0x0000b8eb) list_double_graphic_pane_cp2_ParamLimits

0x0ab6,	// (0x0000b8eb) list_double_graphic_pane_cp2

0x0ab6,	// (0x0000b8eb) list_double_large_graphic_pane_cp2_ParamLimits

0x0ab6,	// (0x0000b8eb) list_double_large_graphic_pane_cp2

0x0ab6,	// (0x0000b8eb) list_double_number_pane_cp2_ParamLimits

0x0ab6,	// (0x0000b8eb) list_double_number_pane_cp2

0x0ab6,	// (0x0000b8eb) list_double_pane_cp2_ParamLimits

0x0ab6,	// (0x0000b8eb) list_double_pane_cp2

0x0ad1,	// (0x0000b906) list_single_2graphic_pane_cp2_ParamLimits

0x0ad1,	// (0x0000b906) list_single_2graphic_pane_cp2

0x0ad1,	// (0x0000b906) list_single_graphic_heading_pane_cp2_ParamLimits

0x0ad1,	// (0x0000b906) list_single_graphic_heading_pane_cp2

0x0ad1,	// (0x0000b906) list_single_graphic_pane_cp2_ParamLimits

0x0ad1,	// (0x0000b906) list_single_graphic_pane_cp2

0x0ad1,	// (0x0000b906) list_single_heading_pane_cp2_ParamLimits

0x0ad1,	// (0x0000b906) list_single_heading_pane_cp2

0x0ae2,	// (0x0000b917) list_single_large_graphic_pane_cp2_ParamLimits

0x0ae2,	// (0x0000b917) list_single_large_graphic_pane_cp2

0x0ad1,	// (0x0000b906) list_single_number_heading_pane_cp2_ParamLimits

0x0ad1,	// (0x0000b906) list_single_number_heading_pane_cp2

0x0ad1,	// (0x0000b906) list_single_number_pane_cp2_ParamLimits

0x0ad1,	// (0x0000b906) list_single_number_pane_cp2

0x0ad1,	// (0x0000b906) list_single_pane_cp2_ParamLimits

0x0ad1,	// (0x0000b906) list_single_pane_cp2

0x7875,	// (0x000126aa) bg_popup_sub_pane_cp22

0x4404,	// (0x0000f239) popup_side_volume_key_window_g1

0x4428,	// (0x0000f25d) popup_side_volume_key_window_t1

0x4444,	// (0x0000f279) volume_small_pane_cp1

0x656d,	// (0x000113a2) bg_popup_sub_pane_cp24_ParamLimits

0x656d,	// (0x000113a2) bg_popup_sub_pane_cp24

0x788b,	// (0x000126c0) fep_china_uni_candidate_pane_ParamLimits

0x788b,	// (0x000126c0) fep_china_uni_candidate_pane

0x789f,	// (0x000126d4) fep_china_uni_entry_pane

0x78af,	// (0x000126e4) popup_fep_china_uni_window_g1

0x78cb,	// (0x00012700) fep_china_uni_entry_pane_g1

0x78d3,	// (0x00012708) fep_china_uni_entry_pane_g2

0x0001,

0xf6f8,	// (0x0001a52d) fep_china_uni_entry_pane_g

0x78db,	// (0x00012710) fep_entry_item_pane

0x78e5,	// (0x0001271a) fep_candidate_item_pane

0x78ed,	// (0x00012722) fep_china_uni_candidate_pane_g1

0x78f5,	// (0x0001272a) fep_china_uni_candidate_pane_g2

0x78fd,	// (0x00012732) fep_china_uni_candidate_pane_g3

0x7905,	// (0x0001273a) fep_china_uni_candidate_pane_g4

0x0003,

0xf6fd,	// (0x0001a532) fep_china_uni_candidate_pane_g

0x610c,	// (0x00010f41) fep_entry_item_pane_g1

0x790d,	// (0x00012742) fep_entry_item_pane_t1_ParamLimits

0x790d,	// (0x00012742) fep_entry_item_pane_t1

0x7923,	// (0x00012758) fep_candidate_item_pane_t1_ParamLimits

0x7923,	// (0x00012758) fep_candidate_item_pane_t1

0x7938,	// (0x0001276d) fep_candidate_item_pane_t2_ParamLimits

0x7938,	// (0x0001276d) fep_candidate_item_pane_t2

0x0001,

0xf706,	// (0x0001a53b) fep_candidate_item_pane_t_ParamLimits

0xf706,	// (0x0001a53b) fep_candidate_item_pane_t

0x62d3,	// (0x00011108) list_highlight_pane_cp31_ParamLimits

0x62d3,	// (0x00011108) list_highlight_pane_cp31

0x794a,	// (0x0001277f) level_1_signal_lsc

0x7953,	// (0x00012788) level_2_signal_lsc

0x795c,	// (0x00012791) level_3_signal_lsc

0x7965,	// (0x0001279a) level_4_signal_lsc

0x796e,	// (0x000127a3) level_5_signal_lsc

0x7977,	// (0x000127ac) level_6_signal_lsc

0x7980,	// (0x000127b5) level_7_signal_lsc

0x7980,	// (0x000127b5) level_1_battery_lsc

0x7989,	// (0x000127be) level_2_battery_lsc

0x7992,	// (0x000127c7) level_3_battery_lsc

0x799b,	// (0x000127d0) level_4_battery_lsc

0x79a4,	// (0x000127d9) level_5_battery_lsc

0x79ad,	// (0x000127e2) level_6_battery_lsc

0x794a,	// (0x0001277f) level_7_battery_lsc

0x79b6,	// (0x000127eb) scroll_handle_focus_pane_g1

0x79bf,	// (0x000127f4) scroll_handle_focus_pane_g2

0x79c8,	// (0x000127fd) scroll_handle_focus_pane_g3

0x0002,

0xf70b,	// (0x0001a540) scroll_handle_focus_pane_g

0x0b67,	// (0x0000b99c) list_single_2graphic_pane_g1_ParamLimits

0x0b67,	// (0x0000b99c) list_single_2graphic_pane_g1

0x04bc,	// (0x0000b2f1) list_single_2graphic_pane_g2_ParamLimits

0x04bc,	// (0x0000b2f1) list_single_2graphic_pane_g2

0x8589,	// (0x000133be) list_single_2graphic_pane_g3_ParamLimits

0x8589,	// (0x000133be) list_single_2graphic_pane_g3

0x0b73,	// (0x0000b9a8) list_single_2graphic_pane_g4_ParamLimits

0x0b73,	// (0x0000b9a8) list_single_2graphic_pane_g4

0x0003,

0xf712,	// (0x0001a547) list_single_2graphic_pane_g_ParamLimits

0xf712,	// (0x0001a547) list_single_2graphic_pane_g

0x0b7f,	// (0x0000b9b4) list_single_2graphic_pane_t1_ParamLimits

0x0b7f,	// (0x0000b9b4) list_single_2graphic_pane_t1

0x0bad,	// (0x0000b9e2) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x0bad,	// (0x0000b9e2) list_double2_graphic_large_graphic_pane_g1

0x0513,	// (0x0000b348) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x0513,	// (0x0000b348) list_double2_graphic_large_graphic_pane_g2

0x6b6a,	// (0x0001199f) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x6b6a,	// (0x0001199f) list_double2_graphic_large_graphic_pane_g3

0x0bbd,	// (0x0000b9f2) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x0bbd,	// (0x0000b9f2) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf71b,	// (0x0001a550) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf71b,	// (0x0001a550) list_double2_graphic_large_graphic_pane_g

0x0bc9,	// (0x0000b9fe) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x0bc9,	// (0x0000b9fe) list_double2_graphic_large_graphic_pane_t1

0x0bdf,	// (0x0000ba14) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x0bdf,	// (0x0000ba14) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf724,	// (0x0001a559) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf724,	// (0x0001a559) list_double2_graphic_large_graphic_pane_t

0x7b8c,	// (0x000129c1) popup_fast_swap_window_ParamLimits

0x7b8c,	// (0x000129c1) popup_fast_swap_window

0x7ba8,	// (0x000129dd) popup_side_volume_key_window

0x7bc2,	// (0x000129f7) stacon_top_pane

0x7bcc,	// (0x00012a01) status_pane_ParamLimits

0x7bcc,	// (0x00012a01) status_pane

0x0c27,	// (0x0000ba5c) status_small_pane

0x61f3,	// (0x00011028) control_pane

0x61f3,	// (0x00011028) stacon_bottom_pane

0x6a64,	// (0x00011899) scroll_pane_cp121

0x6ef6,	// (0x00011d2b) set_content_pane

0x9daa,	// (0x00014bdf) bg_active_tab_pane_g1_cp1

0x7a64,	// (0x00012899) bg_active_tab_pane_g2_cp1

0x9db3,	// (0x00014be8) bg_active_tab_pane_g3_cp1

0x9daa,	// (0x00014bdf) bg_passive_tab_pane_g1_cp1

0x7a64,	// (0x00012899) bg_passive_tab_pane_g2_cp1

0x9db3,	// (0x00014be8) bg_passive_tab_pane_g3_cp1

0x0bfa,	// (0x0000ba2f) bg_active_tab_pane_g1_cp2

0x7a64,	// (0x00012899) bg_active_tab_pane_g2_cp2

0x0bf1,	// (0x0000ba26) bg_active_tab_pane_g3_cp2

0x0bfa,	// (0x0000ba2f) bg_passive_tab_pane_g1_cp2

0x7a64,	// (0x00012899) bg_passive_tab_pane_g2_cp2

0x0bf1,	// (0x0000ba26) bg_passive_tab_pane_g3_cp2

0x0c0c,	// (0x0000ba41) bg_active_tab_pane_g1_cp3

0x7a64,	// (0x00012899) bg_active_tab_pane_g2_cp3

0x0c03,	// (0x0000ba38) bg_active_tab_pane_g3_cp3

0x0c0c,	// (0x0000ba41) bg_passive_tab_pane_g1_cp3

0x7a64,	// (0x00012899) bg_passive_tab_pane_g2_cp3

0x0c03,	// (0x0000ba38) bg_passive_tab_pane_g3_cp3

0x0c1e,	// (0x0000ba53) bg_active_tab_pane_g1_cp4

0x7a64,	// (0x00012899) bg_active_tab_pane_g2_cp4

0x0c15,	// (0x0000ba4a) bg_active_tab_pane_g3_cp4

0x0c1e,	// (0x0000ba53) bg_passive_tab_pane_g1_cp4

0x7a64,	// (0x00012899) bg_passive_tab_pane_g2_cp4

0x0c15,	// (0x0000ba4a) bg_passive_tab_pane_g3_cp4

0x7aea,	// (0x0001291f) bg_active_tab_pane_g1_cp5

0x7a64,	// (0x00012899) bg_active_tab_pane_g2_cp5

0x7af3,	// (0x00012928) bg_active_tab_pane_g3_cp5

0x7aea,	// (0x0001291f) bg_passive_tab_pane_g1_cp5

0x7a64,	// (0x00012899) bg_passive_tab_pane_g2_cp5

0x7af3,	// (0x00012928) bg_passive_tab_pane_g3_cp5

0xe879,	// (0x000196ae) list_set_graphic_pane_ParamLimits

0xe879,	// (0x000196ae) list_set_graphic_pane

0x61f3,	// (0x00011028) bg_set_opt_pane_cp4

0x7b13,	// (0x00012948) list_set_graphic_pane_g1_ParamLimits

0x7b13,	// (0x00012948) list_set_graphic_pane_g1

0x7b1f,	// (0x00012954) list_set_graphic_pane_g2_ParamLimits

0x7b1f,	// (0x00012954) list_set_graphic_pane_g2

0x0001,

0xf729,	// (0x0001a55e) list_set_graphic_pane_g_ParamLimits

0xf729,	// (0x0001a55e) list_set_graphic_pane_g

0x0009,

0xfaa0,	// (0x0001a8d5) volume_small_pane_cp_g

0x7b41,	// (0x00012976) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x7b41,	// (0x00012976) list_double2_large_graphic_pane_g1_cp2

0x7b4d,	// (0x00012982) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x7b4d,	// (0x00012982) list_double2_large_graphic_pane_g2_cp2

0x7b5c,	// (0x00012991) list_double2_large_graphic_pane_g3_cp2

0x7b64,	// (0x00012999) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x7b64,	// (0x00012999) list_double2_large_graphic_pane_t1_cp2

0x7b7a,	// (0x000129af) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x7b7a,	// (0x000129af) list_double2_large_graphic_pane_t2_cp2

0x96fb,	// (0x00014530) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x96fb,	// (0x00014530) list_double_large_graphic_pane_g1_cp2

0x970c,	// (0x00014541) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x970c,	// (0x00014541) list_double_large_graphic_pane_g2_cp2

0x7cb0,	// (0x00012ae5) list_double_large_graphic_pane_g3_cp2

0x971b,	// (0x00014550) list_double_large_graphic_pane_g4_cp

0x9723,	// (0x00014558) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x9723,	// (0x00014558) list_double_large_graphic_pane_t1_cp2

0x973a,	// (0x0001456f) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x973a,	// (0x0001456f) list_double_large_graphic_pane_t2_cp2

0x7be3,	// (0x00012a18) list_double2_graphic_pane_g1_cp2_ParamLimits

0x7be3,	// (0x00012a18) list_double2_graphic_pane_g1_cp2

0x7bef,	// (0x00012a24) list_double2_graphic_pane_g2_cp2_ParamLimits

0x7bef,	// (0x00012a24) list_double2_graphic_pane_g2_cp2

0x7bfe,	// (0x00012a33) list_double2_graphic_pane_g3_cp2

0x7c06,	// (0x00012a3b) list_double2_graphic_pane_t1_cp2_ParamLimits

0x7c06,	// (0x00012a3b) list_double2_graphic_pane_t1_cp2

0x7c1c,	// (0x00012a51) list_double2_graphic_pane_t2_cp2_ParamLimits

0x7c1c,	// (0x00012a51) list_double2_graphic_pane_t2_cp2

0x7c2e,	// (0x00012a63) list_single_number_heading_pane_g1_cp2_ParamLimits

0x7c2e,	// (0x00012a63) list_single_number_heading_pane_g1_cp2

0x7c3a,	// (0x00012a6f) list_single_number_heading_pane_g2_cp2

0x7c42,	// (0x00012a77) list_single_number_heading_pane_t1_cp2_ParamLimits

0x7c42,	// (0x00012a77) list_single_number_heading_pane_t1_cp2

0x7c58,	// (0x00012a8d) list_single_number_heading_pane_t2_cp2_ParamLimits

0x7c58,	// (0x00012a8d) list_single_number_heading_pane_t2_cp2

0x7c6a,	// (0x00012a9f) list_single_number_heading_pane_t3_cp2_ParamLimits

0x7c6a,	// (0x00012a9f) list_single_number_heading_pane_t3_cp2

0x7c2e,	// (0x00012a63) list_single_heading_pane_g1_cp2_ParamLimits

0x7c2e,	// (0x00012a63) list_single_heading_pane_g1_cp2

0x7c3a,	// (0x00012a6f) list_single_heading_pane_g2_cp2

0x7c42,	// (0x00012a77) list_single_heading_pane_t1_cp2_ParamLimits

0x7c42,	// (0x00012a77) list_single_heading_pane_t1_cp2

0x9505,	// (0x0001433a) list_single_heading_pane_t2_cp2_ParamLimits

0x9505,	// (0x0001433a) list_single_heading_pane_t2_cp2

0x9455,	// (0x0001428a) list_double_graphic_pane_g1_cp2_ParamLimits

0x9455,	// (0x0001428a) list_double_graphic_pane_g1_cp2

0x9461,	// (0x00014296) list_double_graphic_pane_g2_cp2_ParamLimits

0x9461,	// (0x00014296) list_double_graphic_pane_g2_cp2

0x9470,	// (0x000142a5) list_double_graphic_pane_g3_cp2

0x9478,	// (0x000142ad) list_double_graphic_pane_t1_cp2_ParamLimits

0x9478,	// (0x000142ad) list_double_graphic_pane_t1_cp2

0x948e,	// (0x000142c3) list_double_graphic_pane_t2_cp2_ParamLimits

0x948e,	// (0x000142c3) list_double_graphic_pane_t2_cp2

0x7ca4,	// (0x00012ad9) list_double_number_pane_g1_cp2_ParamLimits

0x7ca4,	// (0x00012ad9) list_double_number_pane_g1_cp2

0x7cb0,	// (0x00012ae5) list_double_number_pane_g2_cp2

0x941b,	// (0x00014250) list_double_number_pane_t1_cp2_ParamLimits

0x941b,	// (0x00014250) list_double_number_pane_t1_cp2

0x942d,	// (0x00014262) list_double_number_pane_t2_cp2_ParamLimits

0x942d,	// (0x00014262) list_double_number_pane_t2_cp2

0x9443,	// (0x00014278) list_double_number_pane_t3_cp2_ParamLimits

0x9443,	// (0x00014278) list_double_number_pane_t3_cp2

0x9305,	// (0x0001413a) list_single_graphic_pane_g1_cp2_ParamLimits

0x9305,	// (0x0001413a) list_single_graphic_pane_g1_cp2

0x7c2e,	// (0x00012a63) list_single_graphic_pane_g2_cp2_ParamLimits

0x7c2e,	// (0x00012a63) list_single_graphic_pane_g2_cp2

0x7c3a,	// (0x00012a6f) list_single_graphic_pane_g3_cp2

0x92dd,	// (0x00014112) list_single_graphic_pane_t1_cp2_ParamLimits

0x92dd,	// (0x00014112) list_single_graphic_pane_t1_cp2

0x7c2e,	// (0x00012a63) list_single_number_pane_g1_cp2_ParamLimits

0x7c2e,	// (0x00012a63) list_single_number_pane_g1_cp2

0x7c3a,	// (0x00012a6f) list_single_number_pane_g2_cp2

0x92dd,	// (0x00014112) list_single_number_pane_t1_cp2_ParamLimits

0x92dd,	// (0x00014112) list_single_number_pane_t1_cp2

0x92f3,	// (0x00014128) list_single_number_pane_t2_cp2_ParamLimits

0x92f3,	// (0x00014128) list_single_number_pane_t2_cp2

0x7b4d,	// (0x00012982) list_double2_pane_g1_cp2_ParamLimits

0x7b4d,	// (0x00012982) list_double2_pane_g1_cp2

0x7b5c,	// (0x00012991) list_double2_pane_g2_cp2

0x7c7c,	// (0x00012ab1) list_double2_pane_t1_cp2_ParamLimits

0x7c7c,	// (0x00012ab1) list_double2_pane_t1_cp2

0x7c92,	// (0x00012ac7) list_double2_pane_t2_cp2_ParamLimits

0x7c92,	// (0x00012ac7) list_double2_pane_t2_cp2

0x7ca4,	// (0x00012ad9) list_double_pane_g1_cp2_ParamLimits

0x7ca4,	// (0x00012ad9) list_double_pane_g1_cp2

0x7cb0,	// (0x00012ae5) list_double_pane_g2_cp2

0x7cb8,	// (0x00012aed) list_double_pane_t1_cp2_ParamLimits

0x7cb8,	// (0x00012aed) list_double_pane_t1_cp2

0x7cce,	// (0x00012b03) list_double_pane_t2_cp2_ParamLimits

0x7cce,	// (0x00012b03) list_double_pane_t2_cp2

0x7cf6,	// (0x00012b2b) list_single_pane_cp2_g3

0x7c2e,	// (0x00012a63) list_single_pane_g1_cp2_ParamLimits

0x7c2e,	// (0x00012a63) list_single_pane_g1_cp2

0x7c3a,	// (0x00012a6f) list_single_pane_g2_cp2

0x7d06,	// (0x00012b3b) list_single_pane_t1_cp2_ParamLimits

0x7d06,	// (0x00012b3b) list_single_pane_t1_cp2

0x7d1e,	// (0x00012b53) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x7d1e,	// (0x00012b53) list_single_large_graphic_pane_g1_cp2

0x7d2a,	// (0x00012b5f) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x7d2a,	// (0x00012b5f) list_single_large_graphic_pane_g2_cp2

0x7d36,	// (0x00012b6b) list_single_large_graphic_pane_g3_cp2

0x7d3e,	// (0x00012b73) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x7d3e,	// (0x00012b73) list_single_large_graphic_pane_g4_cp1

0x7d58,	// (0x00012b8d) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x7d58,	// (0x00012b8d) list_single_large_graphic_pane_t1_cp2

0x8ede,	// (0x00013d13) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x8ede,	// (0x00013d13) list_single_graphic_heading_pane_g1_cp2

0x92a6,	// (0x000140db) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x92a6,	// (0x000140db) list_single_graphic_heading_pane_g4_cp2

0x7c3a,	// (0x00012a6f) list_single_graphic_heading_pane_g5_cp2

0x7c42,	// (0x00012a77) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x7c42,	// (0x00012a77) list_single_graphic_heading_pane_t1_cp2

0x92cb,	// (0x00014100) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x92cb,	// (0x00014100) list_single_graphic_heading_pane_t2_cp2

0x929a,	// (0x000140cf) list_single_2graphic_pane_g1_cp2_ParamLimits

0x929a,	// (0x000140cf) list_single_2graphic_pane_g1_cp2

0x92a6,	// (0x000140db) list_single_2graphic_pane_g2_cp2_ParamLimits

0x92a6,	// (0x000140db) list_single_2graphic_pane_g2_cp2

0x7c3a,	// (0x00012a6f) list_single_2graphic_pane_g3_cp2

0x8ed2,	// (0x00013d07) list_single_2graphic_pane_g4_cp2_ParamLimits

0x8ed2,	// (0x00013d07) list_single_2graphic_pane_g4_cp2

0x92b5,	// (0x000140ea) list_single_2graphic_pane_t1_cp2_ParamLimits

0x92b5,	// (0x000140ea) list_single_2graphic_pane_t1_cp2

0x610c,	// (0x00010f41) list_highlight_pane_g10_cp1

0x8e7c,	// (0x00013cb1) list_highlight_pane_g1_cp1

0x8e84,	// (0x00013cb9) list_highlight_pane_g2_cp1

0x8e8c,	// (0x00013cc1) list_highlight_pane_g3_cp1

0x8e94,	// (0x00013cc9) list_highlight_pane_g4_cp1

0x8e9c,	// (0x00013cd1) list_highlight_pane_g5_cp1

0x8ea4,	// (0x00013cd9) list_highlight_pane_g6_cp1

0x8eac,	// (0x00013ce1) list_highlight_pane_g7_cp1

0x8eb4,	// (0x00013ce9) list_highlight_pane_g8_cp1

0x8ebc,	// (0x00013cf1) list_highlight_pane_g9_cp1

0x1900,	// (0x0000c735) form_field_slider_pane_t3

0x190e,	// (0x0000c743) form_field_slider_pane_t4

0x8dc6,	// (0x00013bfb) slider_form_pane_ParamLimits

0x8dc6,	// (0x00013bfb) slider_form_pane

0x61f3,	// (0x00011028) control_abbreviations

0x61f3,	// (0x00011028) control_conventions

0x61f3,	// (0x00011028) control_definitions

0x61f3,	// (0x00011028) format_table_attribute

0x954f,	// (0x00014384) bg_popup_preview_window_pane_g9

0x61f3,	// (0x00011028) format_table_data2

0x61f3,	// (0x00011028) format_table_data3

0x61f3,	// (0x00011028) format_table_data_example

0x0008,

0x61f3,	// (0x00011028) intro_purpose

0xf8b9,	// (0x0001a6ee) bg_popup_preview_window_pane_g

0x61f3,	// (0x00011028) texts_category

0x61f3,	// (0x00011028) texts_graphics

0x7d6e,	// (0x00012ba3) text_digital

0x7d7d,	// (0x00012bb2) text_primary

0x7d8c,	// (0x00012bc1) text_primary_small

0x7d9b,	// (0x00012bd0) text_secondary

0x7daa,	// (0x00012bdf) text_title

0x9cb6,	// (0x00014aeb) bg_passive_tab_pane_g1_cp3_srt

0x7a64,	// (0x00012899) bg_passive_tab_pane_g2_cp3_srt

0x9cbf,	// (0x00014af4) bg_passive_tab_pane_g3_cp3_srt

0x656d,	// (0x000113a2) bg_active_tab_pane_cp3_srt_ParamLimits

0x656d,	// (0x000113a2) bg_active_tab_pane_cp3_srt

0x9cc8,	// (0x00014afd) tabs_4_active_pane_srt_g1

0x017f,	// (0x0000afb4) tabs_4_active_pane_srt_t1_ParamLimits

0x017f,	// (0x0000afb4) tabs_4_active_pane_srt_t1

0x9cb6,	// (0x00014aeb) bg_active_tab_pane_g1_cp3_copy1

0x7a64,	// (0x00012899) bg_active_tab_pane_g2_cp3_copy1

0x9cbf,	// (0x00014af4) bg_active_tab_pane_g3_cp3_copy1

0x62d3,	// (0x00011108) tabs_2_long_active_pane_srt_ParamLimits

0x62d3,	// (0x00011108) tabs_2_long_active_pane_srt

0x62d3,	// (0x00011108) tabs_2_long_passive_pane_srt_ParamLimits

0x62d3,	// (0x00011108) tabs_2_long_passive_pane_srt

0x8108,	// (0x00012f3d) bg_passive_tab_pane_cp4_srt_ParamLimits

0x8108,	// (0x00012f3d) bg_passive_tab_pane_cp4_srt

0x9973,	// (0x000147a8) bg_passive_tab_pane_g1_cp4_srt

0x7a64,	// (0x00012899) bg_passive_tab_pane_g2_cp4_srt

0x997c,	// (0x000147b1) bg_passive_tab_pane_g3_cp4_srt

0x62d3,	// (0x00011108) bg_active_tab_pane_cp4_srt_ParamLimits

0x62d3,	// (0x00011108) bg_active_tab_pane_cp4_srt

0x0943,	// (0x0000b778) tabs_2_long_active_pane_srt_t1_ParamLimits

0x0943,	// (0x0000b778) tabs_2_long_active_pane_srt_t1

0x9973,	// (0x000147a8) bg_active_tab_pane_g1_cp4_srt

0x7a64,	// (0x00012899) bg_active_tab_pane_g2_cp4_srt

0x997c,	// (0x000147b1) bg_active_tab_pane_g3_cp4_srt

0x656d,	// (0x000113a2) tabs_3_long_active_pane_srt_ParamLimits

0x656d,	// (0x000113a2) tabs_3_long_active_pane_srt

0x656d,	// (0x000113a2) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x656d,	// (0x000113a2) tabs_3_long_passive_pane_cp_srt

0x656d,	// (0x000113a2) tabs_3_long_passive_pane_srt_ParamLimits

0x656d,	// (0x000113a2) tabs_3_long_passive_pane_srt

0x8108,	// (0x00012f3d) bg_passive_tab_pane_cp5_srt_ParamLimits

0x8108,	// (0x00012f3d) bg_passive_tab_pane_cp5_srt

0x7aea,	// (0x0001291f) bg_passive_tab_pane_g1_cp5_srt

0x7a64,	// (0x00012899) bg_passive_tab_pane_g2_cp5_srt

0x7af3,	// (0x00012928) bg_passive_tab_pane_g3_cp5_srt

0x62d3,	// (0x00011108) bg_active_tab_pane_cp5_srt_ParamLimits

0x62d3,	// (0x00011108) bg_active_tab_pane_cp5_srt

0x095a,	// (0x0000b78f) tabs_3_long_active_pane_srt_t1_ParamLimits

0x095a,	// (0x0000b78f) tabs_3_long_active_pane_srt_t1

0x7aea,	// (0x0001291f) bg_active_tab_pane_g1_cp5_srt

0x7a64,	// (0x00012899) bg_active_tab_pane_g2_cp5_srt

0x7af3,	// (0x00012928) bg_active_tab_pane_g3_cp5_srt

0x9965,	// (0x0001479a) navi_text_pane_srt_t1

0x995d,	// (0x00014792) navi_icon_pane_srt_g1

0x7f71,	// (0x00012da6) midp_editing_number_pane_srt

0x7db9,	// (0x00012bee) midp_ticker_pane_srt

0x7f79,	// (0x00012dae) midp_ticker_pane_srt_g1

0x7f81,	// (0x00012db6) midp_ticker_pane_srt_g2

0x0001,

0xf748,	// (0x0001a57d) midp_ticker_pane_srt_g

0x7f89,	// (0x00012dbe) midp_ticker_pane_srt_t1

0x994e,	// (0x00014783) midp_editing_number_pane_t1_copy1

0x0c30,	// (0x0000ba65) listscroll_midp_pane

0x0c30,	// (0x0000ba65) midp_form_pane

0x7e29,	// (0x00012c5e) midp_info_popup_window_ParamLimits

0x7e29,	// (0x00012c5e) midp_info_popup_window

0x7245,	// (0x0001207a) bg_popup_sub_pane_cp50_ParamLimits

0x7245,	// (0x0001207a) bg_popup_sub_pane_cp50

0x8abf,	// (0x000138f4) listscroll_midp_info_pane_ParamLimits

0x8abf,	// (0x000138f4) listscroll_midp_info_pane

0x8aa7,	// (0x000138dc) listscroll_form_midp_pane_ParamLimits

0x8aa7,	// (0x000138dc) listscroll_form_midp_pane

0x8ab3,	// (0x000138e8) scroll_bar_cp050

0x18f4,	// (0x0000c729) list_midp_pane

0xa8d3,	// (0x00015708) signal_pane_g2_cp

0x89c1,	// (0x000137f6) listscroll_midp_info_pane_t1_ParamLimits

0x89c1,	// (0x000137f6) listscroll_midp_info_pane_t1

0x89d9,	// (0x0001380e) listscroll_midp_info_pane_t2_ParamLimits

0x89d9,	// (0x0001380e) listscroll_midp_info_pane_t2

0x8a17,	// (0x0001384c) listscroll_midp_info_pane_t3_ParamLimits

0x8a17,	// (0x0001384c) listscroll_midp_info_pane_t3

0x8a51,	// (0x00013886) listscroll_midp_info_pane_t4_ParamLimits

0x8a51,	// (0x00013886) listscroll_midp_info_pane_t4

0x0003,

0xf7f4,	// (0x0001a629) listscroll_midp_info_pane_t_ParamLimits

0xf7f4,	// (0x0001a629) listscroll_midp_info_pane_t

0x72a6,	// (0x000120db) scroll_pane_cp21

0x8965,	// (0x0001379a) form_midp_field_choice_group_pane

0x896e,	// (0x000137a3) form_midp_field_text_pane

0x89a7,	// (0x000137dc) form_midp_field_time_pane

0x89af,	// (0x000137e4) form_midp_gauge_slider_pane

0x89b8,	// (0x000137ed) form_midp_gauge_wait_pane

0x61f3,	// (0x00011028) form_midp_image_pane

0x18de,	// (0x0000c713) list_single_midp_pane_ParamLimits

0x18de,	// (0x0000c713) list_single_midp_pane

0x891e,	// (0x00013753) form_midp_field_text_pane_t1

0x871d,	// (0x00013552) input_focus_pane_cp050

0x893f,	// (0x00013774) list_midp_form_text_pane

0x88ed,	// (0x00013722) form_midp_field_choice_group_pane_t1

0x88fb,	// (0x00013730) input_focus_pane_cp051

0x890f,	// (0x00013744) list_midp_choice_pane

0x61f3,	// (0x00011028) status_idle_pane

0x88d1,	// (0x00013706) form_midp_field_time_pane_t1

0x610c,	// (0x00010f41) wait_anim_pane_g2_copy1

0x88df,	// (0x00013714) form_midp_field_time_pane_t2

0x0001,

0x7ed3,	// (0x00012d08) aid_navinavi_width_2_pane

0xf7ef,	// (0x0001a624) form_midp_field_time_pane_t

0x61f3,	// (0x00011028) input_focus_pane_cp052

0x61f3,	// (0x00011028) bg_input_focus_pane_cp040

0x8891,	// (0x000136c6) form_midp_gauge_slider_pane_t1

0x889f,	// (0x000136d4) form_midp_gauge_slider_pane_t2

0x18c2,	// (0x0000c6f7) form_midp_gauge_slider_pane_t3

0x18d0,	// (0x0000c705) form_midp_gauge_slider_pane_t4

0x0003,

0xf7e6,	// (0x0001a61b) form_midp_gauge_slider_pane_t

0x88c9,	// (0x000136fe) form_midp_slider_pane

0x62d3,	// (0x00011108) bg_input_focus_pane_cp041_ParamLimits

0x62d3,	// (0x00011108) bg_input_focus_pane_cp041

0x8861,	// (0x00013696) form_midp_gauge_wait_pane_t1_ParamLimits

0x8861,	// (0x00013696) form_midp_gauge_wait_pane_t1

0x8873,	// (0x000136a8) form_midp_gauge_wait_pane_t2_ParamLimits

0x8873,	// (0x000136a8) form_midp_gauge_wait_pane_t2

0x0001,

0xf7e1,	// (0x0001a616) form_midp_gauge_wait_pane_t_ParamLimits

0xf7e1,	// (0x0001a616) form_midp_gauge_wait_pane_t

0x8885,	// (0x000136ba) form_midp_wait_pane_ParamLimits

0x8885,	// (0x000136ba) form_midp_wait_pane

0x882b,	// (0x00013660) form_midp_image_pane_g1

0x8834,	// (0x00013669) form_midp_image_pane_t1

0x8843,	// (0x00013678) form_midp_image_pane_t2

0x8852,	// (0x00013687) form_midp_image_pane_t3

0x0002,

0xf7da,	// (0x0001a60f) form_midp_image_pane_t

0x8813,	// (0x00013648) list_single_midp_pane_g1

0x881c,	// (0x00013651) list_single_midp_pane_t1

0x87ff,	// (0x00013634) list_midp_form_item_pane_ParamLimits

0x87ff,	// (0x00013634) list_midp_form_item_pane

0x7e7b,	// (0x00012cb0) list_midp_form_item_pane_t1

0x7e8a,	// (0x00012cbf) midp_ticker_pane_g1

0x7e96,	// (0x00012ccb) midp_ticker_pane_g2

0x0001,

0xf72e,	// (0x0001a563) midp_ticker_pane_g

0x7ea2,	// (0x00012cd7) midp_ticker_pane_t1

0x994e,	// (0x00014783) midp_editing_number_pane_t1

0x9b5f,	// (0x00014994) midp_editing_number_pane

0x9b6b,	// (0x000149a0) midp_ticker_pane

0x992c,	// (0x00014761) ai_message_heading_pane

0x61f3,	// (0x00011028) bg_popup_window_pane_cp14

0x9934,	// (0x00014769) listscroll_ai_message_pane

0x98b6,	// (0x000146eb) ai_message_heading_pane_g1_ParamLimits

0x98b6,	// (0x000146eb) ai_message_heading_pane_g1

0x98c2,	// (0x000146f7) ai_message_heading_pane_g2_ParamLimits

0x98c2,	// (0x000146f7) ai_message_heading_pane_g2

0x98ce,	// (0x00014703) ai_message_heading_pane_g3_ParamLimits

0x98ce,	// (0x00014703) ai_message_heading_pane_g3

0x98da,	// (0x0001470f) ai_message_heading_pane_g4_ParamLimits

0x98da,	// (0x0001470f) ai_message_heading_pane_g4

0x0003,

0xf91b,	// (0x0001a750) ai_message_heading_pane_g_ParamLimits

0xf91b,	// (0x0001a750) ai_message_heading_pane_g

0x98e6,	// (0x0001471b) ai_message_heading_pane_t1_ParamLimits

0x98e6,	// (0x0001471b) ai_message_heading_pane_t1

0x9900,	// (0x00014735) ai_message_heading_pane_t2_ParamLimits

0x9900,	// (0x00014735) ai_message_heading_pane_t2

0x0001,

0xf924,	// (0x0001a759) ai_message_heading_pane_t_ParamLimits

0xf924,	// (0x0001a759) ai_message_heading_pane_t

0x9912,	// (0x00014747) bg_popup_heading_pane_cp1_ParamLimits

0x9912,	// (0x00014747) bg_popup_heading_pane_cp1

0x98a4,	// (0x000146d9) list_ai_message_pane_ParamLimits

0x98a4,	// (0x000146d9) list_ai_message_pane

0x72a6,	// (0x000120db) scroll_pane_cp10

0x9840,	// (0x00014675) list_ai_message_pane_g1

0x9848,	// (0x0001467d) list_ai_message_pane_g2

0x0001,

0xf8f8,	// (0x0001a72d) list_ai_message_pane_g

0x9850,	// (0x00014685) list_ai_message_pane_t1_ParamLimits

0x9850,	// (0x00014685) list_ai_message_pane_t1

0x9865,	// (0x0001469a) list_ai_message_pane_t2_ParamLimits

0x9865,	// (0x0001469a) list_ai_message_pane_t2

0x987a,	// (0x000146af) list_ai_message_pane_t3_ParamLimits

0x987a,	// (0x000146af) list_ai_message_pane_t3

0x988f,	// (0x000146c4) list_ai_message_pane_t4_ParamLimits

0x988f,	// (0x000146c4) list_ai_message_pane_t4

0x0003,

0xf8fd,	// (0x0001a732) list_ai_message_pane_t_ParamLimits

0xf8fd,	// (0x0001a732) list_ai_message_pane_t

0x982e,	// (0x00014663) cell_ai_soft_ind_pane_ParamLimits

0x982e,	// (0x00014663) cell_ai_soft_ind_pane

0x7eb4,	// (0x00012ce9) cell_ai_soft_ind_pane_g1_ParamLimits

0x7eb4,	// (0x00012ce9) cell_ai_soft_ind_pane_g1

0x61f3,	// (0x00011028) grid_highlight_cp1

0x7ec1,	// (0x00012cf6) text_secondary_cp56_ParamLimits

0x7ec1,	// (0x00012cf6) text_secondary_cp56

0x9803,	// (0x00014638) example_general_pane_ParamLimits

0x9803,	// (0x00014638) example_general_pane

0x980f,	// (0x00014644) example_parent_pane_g1_ParamLimits

0x980f,	// (0x00014644) example_parent_pane_g1

0x981b,	// (0x00014650) example_parent_pane_t1_ParamLimits

0x981b,	// (0x00014650) example_parent_pane_t1

0xde76,	// (0x00018cab) popup_preview_text_window_ParamLimits

0xde76,	// (0x00018cab) popup_preview_text_window

0x7cfe,	// (0x00012b33) list_single_pane_cp2_g4

0x6649,	// (0x0001147e) bg_popup_preview_window_pane_ParamLimits

0x6649,	// (0x0001147e) bg_popup_preview_window_pane

0x9557,	// (0x0001438c) popup_preview_text_window_t1_ParamLimits

0x9557,	// (0x0001438c) popup_preview_text_window_t1

0x9575,	// (0x000143aa) popup_preview_text_window_t2_ParamLimits

0x9575,	// (0x000143aa) popup_preview_text_window_t2

0x95be,	// (0x000143f3) popup_preview_text_window_t3_ParamLimits

0x95be,	// (0x000143f3) popup_preview_text_window_t3

0x9603,	// (0x00014438) popup_preview_text_window_t4_ParamLimits

0x9603,	// (0x00014438) popup_preview_text_window_t4

0x0004,

0xf8cc,	// (0x0001a701) popup_preview_text_window_t_ParamLimits

0xf8cc,	// (0x0001a701) popup_preview_text_window_t

0x9681,	// (0x000144b6) scroll_pane_cp11

0x8605,	// (0x0001343a) bg_popup_preview_window_pane_g1

0x9517,	// (0x0001434c) bg_popup_preview_window_pane_g2

0x951f,	// (0x00014354) bg_popup_preview_window_pane_g3

0x9527,	// (0x0001435c) bg_popup_preview_window_pane_g4

0x952f,	// (0x00014364) bg_popup_preview_window_pane_g5

0x9537,	// (0x0001436c) bg_popup_preview_window_pane_g6

0x953f,	// (0x00014374) bg_popup_preview_window_pane_g7

0x9547,	// (0x0001437c) bg_popup_preview_window_pane_g8

0x3f09,	// (0x0000ed3e) aid_popup_width_pane

0xddf8,	// (0x00018c2d) popup_midp_note_alarm_window_ParamLimits

0xddf8,	// (0x00018c2d) popup_midp_note_alarm_window

0x6fa3,	// (0x00011dd8) data_form_pane_ParamLimits

0x0814,	// (0x0000b649) form_field_data_pane_g1

0x081e,	// (0x0000b653) form_field_data_pane_t1_ParamLimits

0x6fcf,	// (0x00011e04) input_focus_pane_ParamLimits

0x6fdd,	// (0x00011e12) data_form_wide_pane_ParamLimits

0x6fe9,	// (0x00011e1e) form_field_data_wide_pane_g1

0x7009,	// (0x00011e3e) form_field_data_wide_pane_t1_ParamLimits

0x68db,	// (0x00011710) input_focus_pane_cp6_ParamLimits

0x0921,	// (0x0000b756) input_popup_find_pane_g1_ParamLimits

0x0921,	// (0x0000b756) input_popup_find_pane_g1

0x42d2,	// (0x0000f107) aid_navi_side_left_pane

0x42e2,	// (0x0000f117) aid_navi_side_right_pane

0x8f7d,	// (0x00013db2) bg_popup_window_pane_cp30_ParamLimits

0x8f7d,	// (0x00013db2) bg_popup_window_pane_cp30

0x8ff7,	// (0x00013e2c) popup_midp_note_alarm_window_g1_ParamLimits

0x8ff7,	// (0x00013e2c) popup_midp_note_alarm_window_g1

0x9027,	// (0x00013e5c) popup_midp_note_alarm_window_t1_ParamLimits

0x9027,	// (0x00013e5c) popup_midp_note_alarm_window_t1

0x90c8,	// (0x00013efd) popup_midp_note_alarm_window_t2_ParamLimits

0x90c8,	// (0x00013efd) popup_midp_note_alarm_window_t2

0x9176,	// (0x00013fab) popup_midp_note_alarm_window_t3_ParamLimits

0x9176,	// (0x00013fab) popup_midp_note_alarm_window_t3

0x919e,	// (0x00013fd3) popup_midp_note_alarm_window_t4_ParamLimits

0x919e,	// (0x00013fd3) popup_midp_note_alarm_window_t4

0x91be,	// (0x00013ff3) popup_midp_note_alarm_window_t5_ParamLimits

0x91be,	// (0x00013ff3) popup_midp_note_alarm_window_t5

0x000a,

0xf869,	// (0x0001a69e) popup_midp_note_alarm_window_t_ParamLimits

0xf869,	// (0x0001a69e) popup_midp_note_alarm_window_t

0x926a,	// (0x0001409f) wait_bar_pane_cp1_ParamLimits

0x926a,	// (0x0001409f) wait_bar_pane_cp1

0x61f3,	// (0x00011028) wait_anim_pane_copy1

0x61f3,	// (0x00011028) wait_border_pane_copy1

0x8c77,	// (0x00013aac) wait_border_pane_g1_copy1

0x7020,	// (0x00011e55) form_field_popup_pane_g1

0x0836,	// (0x0000b66b) form_field_popup_pane_t1_ParamLimits

0x6fcf,	// (0x00011e04) input_focus_pane_cp7_ParamLimits

0x6fa3,	// (0x00011dd8) list_form_pane_ParamLimits

0x7040,	// (0x00011e75) form_field_popup_wide_pane_g1

0x7048,	// (0x00011e7d) form_field_popup_wide_pane_t1_ParamLimits

0x6fcf,	// (0x00011e04) input_focus_pane_cp8_ParamLimits

0x705d,	// (0x00011e92) list_form_wide_pane_ParamLimits

0x9d35,	// (0x00014b6a) aid_size_cell_graphic_pane

0x08b3,	// (0x0000b6e8) data_form_pane_t1_ParamLimits

0x1d33,	// (0x0000cb68) data_form_wide_pane_t1_ParamLimits

0x1546,	// (0x0000c37b) bg_status_flat_pane

0x00dc,	// (0x0000af11) title_pane_t1_ParamLimits

0x629b,	// (0x000110d0) title_pane_t2_ParamLimits

0x62c1,	// (0x000110f6) title_pane_t3_ParamLimits

0xf532,	// (0x0001a367) title_pane_t_ParamLimits

0x0a32,	// (0x0000b867) level_1_signal_ParamLimits

0x0a44,	// (0x0000b879) level_2_signal_ParamLimits

0x0a57,	// (0x0000b88c) level_3_signal_ParamLimits

0x0a6a,	// (0x0000b89f) level_4_signal_ParamLimits

0x0a7d,	// (0x0000b8b2) level_5_signal_ParamLimits

0x0a90,	// (0x0000b8c5) level_6_signal_ParamLimits

0x0aa3,	// (0x0000b8d8) level_7_signal_ParamLimits

0x0a32,	// (0x0000b867) level_1_battery_ParamLimits

0x0a44,	// (0x0000b879) level_2_battery_ParamLimits

0x0a57,	// (0x0000b88c) level_3_battery_ParamLimits

0x0a6a,	// (0x0000b89f) level_4_battery_ParamLimits

0x0a7d,	// (0x0000b8b2) level_5_battery_ParamLimits

0x0a90,	// (0x0000b8c5) level_6_battery_ParamLimits

0x0aa3,	// (0x0000b8d8) level_7_battery_ParamLimits

0x8e7c,	// (0x00013cb1) bg_status_flat_pane_g1

0x8e84,	// (0x00013cb9) bg_status_flat_pane_g2

0x8e8c,	// (0x00013cc1) bg_status_flat_pane_g3

0x8e94,	// (0x00013cc9) bg_status_flat_pane_g4

0x8e9c,	// (0x00013cd1) bg_status_flat_pane_g5

0x8ea4,	// (0x00013cd9) bg_status_flat_pane_g6

0x8eac,	// (0x00013ce1) bg_status_flat_pane_g7

0x0169,	// (0x0000af9e) tabs_3_active_pane_t1_ParamLimits

0x0169,	// (0x0000af9e) tabs_3_passive_pane_t1_ParamLimits

0x017f,	// (0x0000afb4) tabs_4_active_pane_t1_ParamLimits

0x017f,	// (0x0000afb4) tabs_4_1_passive_pane_t1_ParamLimits

0x092d,	// (0x0000b762) tabs_2_active_pane_t1_ParamLimits

0x092d,	// (0x0000b762) tabs_2_passive_pane_t1_ParamLimits

0x62d3,	// (0x00011108) bg_active_tab_pane_cp4_ParamLimits

0x0943,	// (0x0000b778) tabs_2_long_active_pane_t1_ParamLimits

0x8108,	// (0x00012f3d) bg_passive_tab_pane_cp4_ParamLimits

0x4d12,	// (0x0000fb47) list_single_midp_graphic_pane_t1_ParamLimits

0x62d3,	// (0x00011108) bg_active_tab_pane_cp5_ParamLimits

0x095a,	// (0x0000b78f) tabs_3_long_active_pane_t1_ParamLimits

0x8108,	// (0x00012f3d) bg_passive_tab_pane_cp5_ParamLimits

0x4d12,	// (0x0000fb47) list_single_midp_graphic_pane_t1

0x1546,	// (0x0000c37b) bg_status_flat_pane_ParamLimits

0x828d,	// (0x000130c2) indicator_pane_cp2_ParamLimits

0x828d,	// (0x000130c2) indicator_pane_cp2

0x16ac,	// (0x0000c4e1) navi_pane_srt_ParamLimits

0x16ac,	// (0x0000c4e1) navi_pane_srt

0x83d5,	// (0x0001320a) popup_clock_digital_analogue_window_cp1

0x63c8,	// (0x000111fd) indicator_pane_t1

0x7db9,	// (0x00012bee) copy_highlight_pane

0x7db9,	// (0x00012bee) cursor_graphics_pane

0x7db9,	// (0x00012bee) graphic_within_text_pane

0x7db9,	// (0x00012bee) link_highlight_pane

0x9644,	// (0x00014479) popup_preview_text_window_t5_ParamLimits

0x9644,	// (0x00014479) popup_preview_text_window_t5

0x7edb,	// (0x00012d10) cursor_digital_pane

0x7edb,	// (0x00012d10) cursor_primary_pane

0x7eec,	// (0x00012d21) cursor_primary_small_pane

0x7ef4,	// (0x00012d29) cursor_secondary_pane

0x7efc,	// (0x00012d31) cursor_title_pane

0x7edb,	// (0x00012d10) link_highlight_digital_pane

0x7ee3,	// (0x00012d18) link_highlight_primary_pane

0x7eec,	// (0x00012d21) link_highlight_primary_small_pane

0x7ef4,	// (0x00012d29) link_highlight_secondary_pane

0x7efc,	// (0x00012d31) link_highlight_title_pane

0x7edb,	// (0x00012d10) copy_highlight_digital_pane

0x7edb,	// (0x00012d10) copy_highlight_primary_pane

0x7eec,	// (0x00012d21) copy_highlight_primary_small_pane

0x7ef4,	// (0x00012d29) copy_highlight_secondary_pane

0x7efc,	// (0x00012d31) copy_highlight_title_pane

0x7ef4,	// (0x00012d29) graphic_text_digital_pane

0x8f2c,	// (0x00013d61) graphic_text_primary_pane

0x8f35,	// (0x00013d6a) graphic_text_primary_small_pane

0x7eec,	// (0x00012d21) graphic_text_secondary_pane

0x7edb,	// (0x00012d10) graphic_text_title_pane

0x0ccc,	// (0x0000bb01) cursor_primary_pane_g1

0x8f1e,	// (0x00013d53) cursor_text_primary_t1

0x1930,	// (0x0000c765) cursor_primary_small_pane_g1

0x8f10,	// (0x00013d45) cursor_text_primary_small_t1

0x1926,	// (0x0000c75b) cursor_primary_small_pane_g1_copy1

0x8efa,	// (0x00013d2f) cursor_text_primary_small_t1_copy1

0x8ec4,	// (0x00013cf9) cursor_text_title_t1

0x191c,	// (0x0000c751) cursor_title_pane_g1

0x0ccc,	// (0x0000bb01) cursor_digital_pane_g1

0x7f0c,	// (0x00012d41) cursor_text_digital_t1

0x7f1a,	// (0x00012d4f) link_highlight_primary_pane_g1

0x8e6d,	// (0x00013ca2) link_highlight_primary_pane_t1

0x7f1a,	// (0x00012d4f) link_highlight_primary_small_pane_g1

0x7f22,	// (0x00012d57) link_highlight_primary_small_pane_t1

0x7f31,	// (0x00012d66) link_highlight_secondary_pane_g1

0x7f39,	// (0x00012d6e) link_highlight_secondary_pane_t1

0x8dd2,	// (0x00013c07) link_highlight_title_pane_g1

0x8de9,	// (0x00013c1e) link_highlight_title_pane_t1

0x8dd2,	// (0x00013c07) link_highlight_digital_pane_g1

0x8dda,	// (0x00013c0f) link_highlight_digital_pane_t1

0x8c92,	// (0x00013ac7) copy_highlight_primary_pane_g1

0x8cb8,	// (0x00013aed) copy_highlight_primary_pane_t1

0x8c92,	// (0x00013ac7) copy_highlight_primary_small_pane_g1

0x8ca9,	// (0x00013ade) copy_highlight_primary_small_pane_t1

0x7f48,	// (0x00012d7d) copy_highlight_secondary_pane_g1

0x7f50,	// (0x00012d85) copy_highlight_secondary_pane_t1

0x8c92,	// (0x00013ac7) copy_highlight_title_pane_g1

0x8c9a,	// (0x00013acf) copy_highlight_title_pane_t1

0x8c92,	// (0x00013ac7) copy_highlight_digital_pane_g1

0x9ea1,	// (0x00014cd6) copy_highlight_digital_pane_t1

0x9df5,	// (0x00014c2a) graphic_text_primary_pane_g1

0x9e85,	// (0x00014cba) graphic_text_primary_pane_t1

0x9e93,	// (0x00014cc8) graphic_text_primary_pane_t2

0x0001,

0xf998,	// (0x0001a7cd) graphic_text_primary_pane_t

0x9e61,	// (0x00014c96) graphic_text_primary_small_pane_g1

0x9e69,	// (0x00014c9e) graphic_text_primary_small_pane_t1

0x9e77,	// (0x00014cac) graphic_text_primary_small_pane_t2

0x0001,

0xf993,	// (0x0001a7c8) graphic_text_primary_small_pane_t

0x9e3d,	// (0x00014c72) graphic_text_secondary_pane_g1

0x9e45,	// (0x00014c7a) graphic_text_secondary_pane_t1

0x9e53,	// (0x00014c88) graphic_text_secondary_pane_t2

0x0001,

0xf98e,	// (0x0001a7c3) graphic_text_secondary_pane_t

0x9e19,	// (0x00014c4e) graphic_text_title_pane_g1

0x9e21,	// (0x00014c56) graphic_text_title_pane_t1

0x9e2f,	// (0x00014c64) graphic_text_title_pane_t2

0x0001,

0xf989,	// (0x0001a7be) graphic_text_title_pane_t

0x9df5,	// (0x00014c2a) graphic_text_digital_pane_g1

0x9dfd,	// (0x00014c32) graphic_text_digital_pane_t1

0x9e0b,	// (0x00014c40) graphic_text_digital_pane_t2

0x0001,

0xf984,	// (0x0001a7b9) graphic_text_digital_pane_t

0x62d3,	// (0x00011108) navi_icon_pane_srt_ParamLimits

0x62d3,	// (0x00011108) navi_icon_pane_srt

0x61f3,	// (0x00011028) navi_midp_pane_srt

0x61f3,	// (0x00011028) navi_navi_pane_srt

0x62d3,	// (0x00011108) navi_text_pane_srt_ParamLimits

0x62d3,	// (0x00011108) navi_text_pane_srt

0x94d0,	// (0x00014305) navi_navi_icon_text_pane_srt

0x94d8,	// (0x0001430d) navi_navi_pane_srt_g1_ParamLimits

0x94d8,	// (0x0001430d) navi_navi_pane_srt_g1

0x94ea,	// (0x0001431f) navi_navi_pane_srt_g2_ParamLimits

0x94ea,	// (0x0001431f) navi_navi_pane_srt_g2

0x0001,

0xf97f,	// (0x0001a7b4) navi_navi_pane_srt_g_ParamLimits

0xf97f,	// (0x0001a7b4) navi_navi_pane_srt_g

0x94fc,	// (0x00014331) navi_navi_tabs_pane_srt

0x94d0,	// (0x00014305) navi_navi_text_pane_srt

0x94d0,	// (0x00014305) navi_navi_volume_pane_srt

0x9de6,	// (0x00014c1b) navi_navi_text_pane_srt_t1

0x5076,	// (0x0000feab) navi_navi_volume_pane_srt_g1

0x507e,	// (0x0000feb3) volume_small_pane_srt_ParamLimits

0x507e,	// (0x0000feb3) volume_small_pane_srt

0x4579,	// (0x0000f3ae) volume_small_pane_srt_g1_ParamLimits

0x4579,	// (0x0000f3ae) volume_small_pane_srt_g1

0x4589,	// (0x0000f3be) volume_small_pane_srt_g2_ParamLimits

0x4589,	// (0x0000f3be) volume_small_pane_srt_g2

0x459a,	// (0x0000f3cf) volume_small_pane_srt_g3_ParamLimits

0x459a,	// (0x0000f3cf) volume_small_pane_srt_g3

0x45ab,	// (0x0000f3e0) volume_small_pane_srt_g4_ParamLimits

0x45ab,	// (0x0000f3e0) volume_small_pane_srt_g4

0x45bc,	// (0x0000f3f1) volume_small_pane_srt_g5_ParamLimits

0x45bc,	// (0x0000f3f1) volume_small_pane_srt_g5

0x45cd,	// (0x0000f402) volume_small_pane_srt_g6_ParamLimits

0x45cd,	// (0x0000f402) volume_small_pane_srt_g6

0x45de,	// (0x0000f413) volume_small_pane_srt_g7_ParamLimits

0x45de,	// (0x0000f413) volume_small_pane_srt_g7

0x45ef,	// (0x0000f424) volume_small_pane_srt_g8_ParamLimits

0x45ef,	// (0x0000f424) volume_small_pane_srt_g8

0x4600,	// (0x0000f435) volume_small_pane_srt_g9_ParamLimits

0x4600,	// (0x0000f435) volume_small_pane_srt_g9

0x4611,	// (0x0000f446) volume_small_pane_srt_g10_ParamLimits

0x4611,	// (0x0000f446) volume_small_pane_srt_g10

0x0009,

0xf733,	// (0x0001a568) volume_small_pane_srt_g_ParamLimits

0xf733,	// (0x0001a568) volume_small_pane_srt_g

0x66f2,	// (0x00011527) query_popup_data_pane_cp2

0x9dcc,	// (0x00014c01) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x9dcc,	// (0x00014c01) navi_navi_icon_text_pane_srt_t1

0x8f2c,	// (0x00013d61) navi_tabs_2_long_pane_srt

0x8f2c,	// (0x00013d61) navi_tabs_2_pane_srt

0x8f2c,	// (0x00013d61) navi_tabs_3_long_pane_srt

0x8f2c,	// (0x00013d61) navi_tabs_3_pane_srt

0x8f2c,	// (0x00013d61) navi_tabs_4_pane_srt

0x5056,	// (0x0000fe8b) tabs_2_active_pane_srt_ParamLimits

0x5056,	// (0x0000fe8b) tabs_2_active_pane_srt

0x5066,	// (0x0000fe9b) tabs_2_passive_pane_srt_ParamLimits

0x5066,	// (0x0000fe9b) tabs_2_passive_pane_srt

0x871d,	// (0x00013552) bg_passive_tab_pane_cp1_srt_ParamLimits

0x871d,	// (0x00013552) bg_passive_tab_pane_cp1_srt

0x9daa,	// (0x00014bdf) bg_passive_tab_pane_g1_cp1_srt

0x7a64,	// (0x00012899) bg_passive_tab_pane_g2_cp1_srt

0x9db3,	// (0x00014be8) bg_passive_tab_pane_g3_cp1_srt

0x656d,	// (0x000113a2) bg_active_tab_pane_cp1_srt_ParamLimits

0x656d,	// (0x000113a2) bg_active_tab_pane_cp1_srt

0x9dbc,	// (0x00014bf1) tabs_2_active_pane_srt_g1

0x092d,	// (0x0000b762) tabs_2_active_pane_srt_t1_ParamLimits

0x092d,	// (0x0000b762) tabs_2_active_pane_srt_t1

0x9daa,	// (0x00014bdf) bg_active_tab_pane_g1_cp1_srt

0x7a64,	// (0x00012899) bg_active_tab_pane_g2_cp1_srt

0x9db3,	// (0x00014be8) bg_active_tab_pane_g3_cp1_srt

0x5023,	// (0x0000fe58) tabs_3_active_pane_srt_ParamLimits

0x5023,	// (0x0000fe58) tabs_3_active_pane_srt

0x5034,	// (0x0000fe69) tabs_3_passive_pane_cp_srt_ParamLimits

0x5034,	// (0x0000fe69) tabs_3_passive_pane_cp_srt

0x5045,	// (0x0000fe7a) tabs_3_passive_pane_srt_ParamLimits

0x5045,	// (0x0000fe7a) tabs_3_passive_pane_srt

0x871d,	// (0x00013552) bg_passive_tab_pane_cp2_srt_ParamLimits

0x871d,	// (0x00013552) bg_passive_tab_pane_cp2_srt

0x7f5f,	// (0x00012d94) bg_passive_tab_pane_g1_cp2_srt

0x7a64,	// (0x00012899) bg_passive_tab_pane_g2_cp2_srt

0x7f68,	// (0x00012d9d) bg_passive_tab_pane_g3_cp2_srt

0x656d,	// (0x000113a2) bg_active_tab_pane_cp2_srt_ParamLimits

0x656d,	// (0x000113a2) bg_active_tab_pane_cp2_srt

0x9da2,	// (0x00014bd7) tabs_3_active_pane_srt_g1

0x0169,	// (0x0000af9e) tabs_3_active_pane_srt_t1_ParamLimits

0x0169,	// (0x0000af9e) tabs_3_active_pane_srt_t1

0x7f5f,	// (0x00012d94) bg_active_tab_pane_g1_cp2_srt

0x7a64,	// (0x00012899) bg_active_tab_pane_g2_cp2_srt

0x7f68,	// (0x00012d9d) bg_active_tab_pane_g3_cp2_srt

0x4fdb,	// (0x0000fe10) tabs_4_active_pane_srt_ParamLimits

0x4fdb,	// (0x0000fe10) tabs_4_active_pane_srt

0x4fed,	// (0x0000fe22) tabs_4_passive_pane_cp2_srt_ParamLimits

0x4fed,	// (0x0000fe22) tabs_4_passive_pane_cp2_srt

0x4776,	// (0x0000f5ab) aid_size_cell_toolbar

0xdb68,	// (0x0001899d) main_idle_act_pane_ParamLimits

0x48ed,	// (0x0000f722) popup_large_graphic_colour_window_ParamLimits

0xe0c6,	// (0x00018efb) popup_toolbar_window_ParamLimits

0xe0c6,	// (0x00018efb) popup_toolbar_window

0x9b90,	// (0x000149c5) list_single_graphic_2heading_pane_ParamLimits

0x9b90,	// (0x000149c5) list_single_graphic_2heading_pane

0x74ef,	// (0x00012324) aid_size_cell_apps_grid_lsc_pane

0x7501,	// (0x00012336) aid_size_cell_apps_grid_prt_pane

0x8108,	// (0x00012f3d) bg_wml_button_pane_cp1_ParamLimits

0x8108,	// (0x00012f3d) bg_wml_button_pane_cp1

0x891e,	// (0x00013753) form_midp_field_text_pane_t1_ParamLimits

0x871d,	// (0x00013552) input_focus_pane_cp050_ParamLimits

0x893f,	// (0x00013774) list_midp_form_text_pane_ParamLimits

0x88fb,	// (0x00013730) input_focus_pane_cp051_ParamLimits

0x890f,	// (0x00013744) list_midp_choice_pane_ParamLimits

0x87cd,	// (0x00013602) list_single_2graphic_pane_cp3_ParamLimits

0x87cd,	// (0x00013602) list_single_2graphic_pane_cp3

0x87e0,	// (0x00013615) list_single_midp_graphic_pane_ParamLimits

0x87e0,	// (0x00013615) list_single_midp_graphic_pane

0x4c30,	// (0x0000fa65) list_single_graphic_2heading_pane_g1_ParamLimits

0x4c30,	// (0x0000fa65) list_single_graphic_2heading_pane_g1

0x4c3c,	// (0x0000fa71) list_single_graphic_2heading_pane_g4_ParamLimits

0x4c3c,	// (0x0000fa71) list_single_graphic_2heading_pane_g4

0x4c48,	// (0x0000fa7d) list_single_graphic_2heading_pane_g5_ParamLimits

0x4c48,	// (0x0000fa7d) list_single_graphic_2heading_pane_g5

0x0002,

0xf786,	// (0x0001a5bb) list_single_graphic_2heading_pane_g_ParamLimits

0xf786,	// (0x0001a5bb) list_single_graphic_2heading_pane_g

0x4c54,	// (0x0000fa89) list_single_graphic_2heading_pane_t1_ParamLimits

0x4c54,	// (0x0000fa89) list_single_graphic_2heading_pane_t1

0x4c68,	// (0x0000fa9d) list_single_graphic_2heading_pane_t2_ParamLimits

0x4c68,	// (0x0000fa9d) list_single_graphic_2heading_pane_t2

0x4c82,	// (0x0000fab7) list_single_graphic_2heading_pane_t3_ParamLimits

0x4c82,	// (0x0000fab7) list_single_graphic_2heading_pane_t3

0x0002,

0xf78d,	// (0x0001a5c2) list_single_graphic_2heading_pane_t_ParamLimits

0xf78d,	// (0x0001a5c2) list_single_graphic_2heading_pane_t

0x8521,	// (0x00013356) bg_popup_sub_pane_cp2

0x8547,	// (0x0001337c) grid_toobar_pane

0x4c9a,	// (0x0000facf) cell_toolbar_pane_ParamLimits

0x4c9a,	// (0x0000facf) cell_toolbar_pane

0x85ab,	// (0x000133e0) cell_toolbar_pane_g1_ParamLimits

0x85ab,	// (0x000133e0) cell_toolbar_pane_g1

0x85bd,	// (0x000133f2) cell_toolbar_pane_g2_ParamLimits

0x85bd,	// (0x000133f2) cell_toolbar_pane_g2

0x0001,

0xf794,	// (0x0001a5c9) cell_toolbar_pane_g_ParamLimits

0xf794,	// (0x0001a5c9) cell_toolbar_pane_g

0x85df,	// (0x00013414) grid_highlight_pane_cp2_ParamLimits

0x85df,	// (0x00013414) grid_highlight_pane_cp2

0x85f9,	// (0x0001342e) toolbar_button_pane

0x8605,	// (0x0001343a) toolbar_button_pane_g1

0x860d,	// (0x00013442) toolbar_button_pane_g2

0x8615,	// (0x0001344a) toolbar_button_pane_g3

0x861d,	// (0x00013452) toolbar_button_pane_g4

0x8625,	// (0x0001345a) toolbar_button_pane_g5

0x862d,	// (0x00013462) toolbar_button_pane_g6

0x8635,	// (0x0001346a) toolbar_button_pane_g7

0x863d,	// (0x00013472) toolbar_button_pane_g8

0x8645,	// (0x0001347a) toolbar_button_pane_g9

0x0009,

0xf799,	// (0x0001a5ce) toolbar_button_pane_g

0x4cc9,	// (0x0000fafe) list_single_2graphic_pane_g1_cp3_ParamLimits

0x4cc9,	// (0x0000fafe) list_single_2graphic_pane_g1_cp3

0xe108,	// (0x00018f3d) list_single_2graphic_pane_g2_cp3_ParamLimits

0xe108,	// (0x00018f3d) list_single_2graphic_pane_g2_cp3

0x4ce4,	// (0x0000fb19) list_single_2graphic_pane_g3_cp3

0x4cec,	// (0x0000fb21) list_single_2graphic_pane_g4_cp3_ParamLimits

0x4cec,	// (0x0000fb21) list_single_2graphic_pane_g4_cp3

0x4cf8,	// (0x0000fb2d) list_single_2graphic_pane_t1_cp3_ParamLimits

0x4cf8,	// (0x0000fb2d) list_single_2graphic_pane_t1_cp3

0x4c3c,	// (0x0000fa71) list_single_midp_graphic_pane_g2_ParamLimits

0x4c3c,	// (0x0000fa71) list_single_midp_graphic_pane_g2

0x477e,	// (0x0000f5b3) aid_zoom_text_primary

0x4786,	// (0x0000f5bb) aid_zoom_text_secondary

0x0d06,	// (0x0000bb3b) status_small_pane_g7_ParamLimits

0x0d06,	// (0x0000bb3b) status_small_pane_g7

0x0d29,	// (0x0000bb5e) status_small_pane_t1_ParamLimits

0x00b1,	// (0x0000aee6) title_pane_g2

0x0003,

0xf529,	// (0x0001a35e) title_pane_g

0x03ad,	// (0x0000b1e2) aid_size_cell_colour_1_pane_ParamLimits

0x03ad,	// (0x0000b1e2) aid_size_cell_colour_1_pane

0x03c1,	// (0x0000b1f6) aid_size_cell_colour_2_pane_ParamLimits

0x03c1,	// (0x0000b1f6) aid_size_cell_colour_2_pane

0x03d5,	// (0x0000b20a) aid_size_cell_colour_3_pane_ParamLimits

0x03d5,	// (0x0000b20a) aid_size_cell_colour_3_pane

0x03e9,	// (0x0000b21e) aid_size_cell_colour_4_pane_ParamLimits

0x03e9,	// (0x0000b21e) aid_size_cell_colour_4_pane

0x4234,	// (0x0000f069) title_pane_stacon_g1_ParamLimits

0x4234,	// (0x0000f069) title_pane_stacon_g1

0x8d0f,	// (0x00013b44) popup_note_wait_window_g3_ParamLimits

0x8d0f,	// (0x00013b44) popup_note_wait_window_g3

0x8d85,	// (0x00013bba) popup_note_wait_window_t5_ParamLimits

0x8d85,	// (0x00013bba) popup_note_wait_window_t5

0x61f3,	// (0x00011028) main_feb_china_hwr_fs_writing_pane

0xdbc9,	// (0x000189fe) popup_feb_china_hwr_fs_window_ParamLimits

0xdbc9,	// (0x000189fe) popup_feb_china_hwr_fs_window

0xe119,	// (0x00018f4e) aid_size_cell_hwr_fs_ParamLimits

0xe119,	// (0x00018f4e) aid_size_cell_hwr_fs

0x871d,	// (0x00013552) bg_popup_sub_pane_cp3_ParamLimits

0x871d,	// (0x00013552) bg_popup_sub_pane_cp3

0xe12e,	// (0x00018f63) grid_hwr_fs_pane_ParamLimits

0xe12e,	// (0x00018f63) grid_hwr_fs_pane

0x4d51,	// (0x0000fb86) linegrid_hwr_fs_pane_ParamLimits

0x4d51,	// (0x0000fb86) linegrid_hwr_fs_pane

0xe146,	// (0x00018f7b) cell_hwr_fs_pane_ParamLimits

0xe146,	// (0x00018f7b) cell_hwr_fs_pane

0x8729,	// (0x0001355e) linegrid_hwr_fs_pane_g1_ParamLimits

0x8729,	// (0x0001355e) linegrid_hwr_fs_pane_g1

0x1888,	// (0x0000c6bd) linegrid_hwr_fs_pane_g2_ParamLimits

0x1888,	// (0x0000c6bd) linegrid_hwr_fs_pane_g2

0x8747,	// (0x0001357c) linegrid_hwr_fs_pane_g3_ParamLimits

0x8747,	// (0x0001357c) linegrid_hwr_fs_pane_g3

0x4d7f,	// (0x0000fbb4) linegrid_hwr_fs_pane_g4_ParamLimits

0x4d7f,	// (0x0000fbb4) linegrid_hwr_fs_pane_g4

0x4d99,	// (0x0000fbce) linegrid_hwr_fs_pane_g5_ParamLimits

0x4d99,	// (0x0000fbce) linegrid_hwr_fs_pane_g5

0x0004,

0xf7bf,	// (0x0001a5f4) linegrid_hwr_fs_pane_g_ParamLimits

0xf7bf,	// (0x0001a5f4) linegrid_hwr_fs_pane_g

0x8753,	// (0x00013588) cell_hwr_fs_pane_g1_ParamLimits

0x8753,	// (0x00013588) cell_hwr_fs_pane_g1

0x845f,	// (0x00013294) cell_hwr_fs_pane_g2_ParamLimits

0x845f,	// (0x00013294) cell_hwr_fs_pane_g2

0x189a,	// (0x0000c6cf) cell_hwr_fs_pane_g3_ParamLimits

0x189a,	// (0x0000c6cf) cell_hwr_fs_pane_g3

0x18a7,	// (0x0000c6dc) cell_hwr_fs_pane_g4_ParamLimits

0x18a7,	// (0x0000c6dc) cell_hwr_fs_pane_g4

0x0003,

0xf7ca,	// (0x0001a5ff) cell_hwr_fs_pane_g_ParamLimits

0xf7ca,	// (0x0001a5ff) cell_hwr_fs_pane_g

0xe166,	// (0x00018f9b) cell_hwr_fs_pane_t1

0x61f3,	// (0x00011028) grid_highlight_pane_cp6

0x61f3,	// (0x00011028) main_idle_act2_pane

0x728d,	// (0x000120c2) aid_inside_area_popup_secondary

0x1a3d,	// (0x0000c872) aid_inside_area_window_primary_ParamLimits

0x1a3d,	// (0x0000c872) aid_inside_area_window_primary

0x9eb0,	// (0x00014ce5) ai2_news_ticker_pane

0x9eb8,	// (0x00014ced) aid_size_cell_ai1_link_ParamLimits

0x9eb8,	// (0x00014ced) aid_size_cell_ai1_link

0x1e68,	// (0x0000cc9d) popup_ai2_data_window_ParamLimits

0x1e68,	// (0x0000cc9d) popup_ai2_data_window

0x9ee6,	// (0x00014d1b) popup_ai2_link_window_ParamLimits

0x9ee6,	// (0x00014d1b) popup_ai2_link_window

0x871d,	// (0x00013552) bg_popup_sub_pane_cp4_ParamLimits

0x871d,	// (0x00013552) bg_popup_sub_pane_cp4

0x9efa,	// (0x00014d2f) grid_ai2_link_pane_ParamLimits

0x9efa,	// (0x00014d2f) grid_ai2_link_pane

0x9f11,	// (0x00014d46) popup_ai2_link_window_g1_ParamLimits

0x9f11,	// (0x00014d46) popup_ai2_link_window_g1

0x9f1d,	// (0x00014d52) popup_ai2_link_window_g2_ParamLimits

0x9f1d,	// (0x00014d52) popup_ai2_link_window_g2

0x0001,

0xf99d,	// (0x0001a7d2) popup_ai2_link_window_g_ParamLimits

0xf99d,	// (0x0001a7d2) popup_ai2_link_window_g

0x9f2c,	// (0x00014d61) ai2_mp_button_pane

0x9f34,	// (0x00014d69) ai2_mp_volume_pane

0x88fb,	// (0x00013730) bg_popup_sub_pane_cp5_ParamLimits

0x88fb,	// (0x00013730) bg_popup_sub_pane_cp5

0x9f3c,	// (0x00014d71) heading_ai2_gene_pane_ParamLimits

0x9f3c,	// (0x00014d71) heading_ai2_gene_pane

0x9f48,	// (0x00014d7d) list_ai2_gene_pane_ParamLimits

0x9f48,	// (0x00014d7d) list_ai2_gene_pane

0x9f90,	// (0x00014dc5) cell_ai2_link_pane_ParamLimits

0x9f90,	// (0x00014dc5) cell_ai2_link_pane

0x9fa6,	// (0x00014ddb) cell_ai2_link_pane_g1

0x61f3,	// (0x00011028) grid_highlight_pane_cp7

0x5093,	// (0x0000fec8) ai2_mp_volume_pane_g1

0xa076,	// (0x00014eab) ai2_mp_volume_pane_g2

0x1e92,	// (0x0000ccc7) list_ai2_gene_pane_t1

0xa07e,	// (0x00014eb3) ai2_mp_volume_pane_g3

0x0002,

0xf9b6,	// (0x0001a7eb) ai2_mp_volume_pane_g

0x509b,	// (0x0000fed0) volume_small_pane_cp3

0xa086,	// (0x00014ebb) aid_size_cell_ai2_button

0xa08e,	// (0x00014ec3) grid_ai2_button_pane

0xa097,	// (0x00014ecc) cell_ai2_button_pane_ParamLimits

0xa097,	// (0x00014ecc) cell_ai2_button_pane

0x610c,	// (0x00010f41) cell_ai2_button_pane_g1

0x61f3,	// (0x00011028) grid_highlight_pane_cp8

0xa036,	// (0x00014e6b) ai2_gene_pane_t1_ParamLimits

0xa036,	// (0x00014e6b) ai2_gene_pane_t1

0xdb50,	// (0x00018985) aid_height_parent_landscape

0x99ba,	// (0x000147ef) aid_height_set_list

0x99c6,	// (0x000147fb) aid_size_parent

0x9d35,	// (0x00014b6a) aid_size_cell_graphic_pane_ParamLimits

0x9f58,	// (0x00014d8d) popup_ai2_data_window_g1_ParamLimits

0x9f58,	// (0x00014d8d) popup_ai2_data_window_g1

0x9f64,	// (0x00014d99) ai2_news_ticker_pane_g1

0x9f6c,	// (0x00014da1) ai2_news_ticker_pane_g2

0x0001,

0xf9a2,	// (0x0001a7d7) ai2_news_ticker_pane_g

0x9f74,	// (0x00014da9) ai2_news_ticker_pane_t1

0x9f82,	// (0x00014db7) ai2_news_ticker_pane_t2

0x0001,

0xf9a7,	// (0x0001a7dc) ai2_news_ticker_pane_t

0x9faf,	// (0x00014de4) heading_ai2_gene_pane_g1

0x9fb7,	// (0x00014dec) heading_ai2_gene_pane_t1_ParamLimits

0x9fb7,	// (0x00014dec) heading_ai2_gene_pane_t1

0x9fcc,	// (0x00014e01) list_highlight_pane_cp6

0x1e7c,	// (0x0000ccb1) ai2_gene_pane_ParamLimits

0x1e7c,	// (0x0000ccb1) ai2_gene_pane

0x1ea0,	// (0x0000ccd5) list_ai2_gene_pane_t2

0x0001,

0xf9ac,	// (0x0001a7e1) list_ai2_gene_pane_t

0xa007,	// (0x00014e3c) list_highlight_pane_cp8_ParamLimits

0xa007,	// (0x00014e3c) list_highlight_pane_cp8

0xa018,	// (0x00014e4d) ai2_gene_pane_g1_ParamLimits

0xa018,	// (0x00014e4d) ai2_gene_pane_g1

0xa02a,	// (0x00014e5f) ai2_gene_pane_g2_ParamLimits

0xa02a,	// (0x00014e5f) ai2_gene_pane_g2

0x0001,

0xf9b1,	// (0x0001a7e6) ai2_gene_pane_g_ParamLimits

0xf9b1,	// (0x0001a7e6) ai2_gene_pane_g

0x6a64,	// (0x00011899) scroll_pane_cp12

0xdb0f,	// (0x00018944) control_pane_t3_ParamLimits

0xdb0f,	// (0x00018944) control_pane_t3

0x0d1a,	// (0x0000bb4f) status_small_pane_g8_ParamLimits

0x0d1a,	// (0x0000bb4f) status_small_pane_g8

0xdc3d,	// (0x00018a72) popup_find_window_ParamLimits

0xde30,	// (0x00018c65) popup_note_image_window_ParamLimits

0x857d,	// (0x000133b2) list_double2_graphic_pane_vc_g1_ParamLimits

0x857d,	// (0x000133b2) list_double2_graphic_pane_vc_g1

0x7c2e,	// (0x00012a63) list_double2_graphic_pane_vc_g2_ParamLimits

0x7c2e,	// (0x00012a63) list_double2_graphic_pane_vc_g2

0x8589,	// (0x000133be) list_double2_graphic_pane_vc_g3_ParamLimits

0x8589,	// (0x000133be) list_double2_graphic_pane_vc_g3

0x0002,

0xf59c,	// (0x0001a3d1) list_double2_graphic_pane_vc_g_ParamLimits

0xf59c,	// (0x0001a3d1) list_double2_graphic_pane_vc_g

0x8595,	// (0x000133ca) list_double2_graphic_pane_vc_t1_ParamLimits

0x8595,	// (0x000133ca) list_double2_graphic_pane_vc_t1

0x7c2e,	// (0x00012a63) list_single_heading_pane_vc_g1_ParamLimits

0x7c2e,	// (0x00012a63) list_single_heading_pane_vc_g1

0x8589,	// (0x000133be) list_single_heading_pane_vc_g2_ParamLimits

0x8589,	// (0x000133be) list_single_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x0001a3d8) list_single_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x0001a3d8) list_single_heading_pane_vc_g

0x864d,	// (0x00013482) list_single_heading_pane_vc_t1_ParamLimits

0x864d,	// (0x00013482) list_single_heading_pane_vc_t1

0x8663,	// (0x00013498) list_single_heading_pane_vc_t2_ParamLimits

0x8663,	// (0x00013498) list_single_heading_pane_vc_t2

0x0001,

0xf7ae,	// (0x0001a5e3) list_single_heading_pane_vc_t_ParamLimits

0xf7ae,	// (0x0001a5e3) list_single_heading_pane_vc_t

0x8675,	// (0x000134aa) list_setting_number_pane_vc_g1_ParamLimits

0x8675,	// (0x000134aa) list_setting_number_pane_vc_g1

0x8681,	// (0x000134b6) list_setting_number_pane_vc_g2_ParamLimits

0x8681,	// (0x000134b6) list_setting_number_pane_vc_g2

0x0001,

0xf7b3,	// (0x0001a5e8) list_setting_number_pane_vc_g_ParamLimits

0xf7b3,	// (0x0001a5e8) list_setting_number_pane_vc_g

0x868d,	// (0x000134c2) list_setting_number_pane_vc_t1_ParamLimits

0x868d,	// (0x000134c2) list_setting_number_pane_vc_t1

0x86a1,	// (0x000134d6) list_setting_number_pane_vc_t2_ParamLimits

0x86a1,	// (0x000134d6) list_setting_number_pane_vc_t2

0x86bd,	// (0x000134f2) list_setting_number_pane_vc_t3_ParamLimits

0x86bd,	// (0x000134f2) list_setting_number_pane_vc_t3

0x0002,

0xf7b8,	// (0x0001a5ed) list_setting_number_pane_vc_t_ParamLimits

0xf7b8,	// (0x0001a5ed) list_setting_number_pane_vc_t

0x86e5,	// (0x0001351a) set_value_pane_vc_ParamLimits

0x86e5,	// (0x0001351a) set_value_pane_vc

0x9b90,	// (0x000149c5) list_double2_graphic_pane_vc_ParamLimits

0x9b90,	// (0x000149c5) list_double2_graphic_pane_vc

0x9ba4,	// (0x000149d9) list_double2_large_graphic_pane_vc_ParamLimits

0x9ba4,	// (0x000149d9) list_double2_large_graphic_pane_vc

0x9b90,	// (0x000149c5) list_double2_pane_vc_ParamLimits

0x9b90,	// (0x000149c5) list_double2_pane_vc

0x9b90,	// (0x000149c5) list_double_graphic_heading_pane_vc_ParamLimits

0x9b90,	// (0x000149c5) list_double_graphic_heading_pane_vc

0x9b90,	// (0x000149c5) list_double_graphic_pane_vc_ParamLimits

0x9b90,	// (0x000149c5) list_double_graphic_pane_vc

0x9b90,	// (0x000149c5) list_double_heading_pane_vc_ParamLimits

0x9b90,	// (0x000149c5) list_double_heading_pane_vc

0x9bb5,	// (0x000149ea) list_double_large_graphic_pane_vc_ParamLimits

0x9bb5,	// (0x000149ea) list_double_large_graphic_pane_vc

0x9b90,	// (0x000149c5) list_double_number_pane_vc_ParamLimits

0x9b90,	// (0x000149c5) list_double_number_pane_vc

0x9b90,	// (0x000149c5) list_double_pane_vc_ParamLimits

0x9b90,	// (0x000149c5) list_double_pane_vc

0x9b90,	// (0x000149c5) list_double_time_pane_vc_ParamLimits

0x9b90,	// (0x000149c5) list_double_time_pane_vc

0x9b90,	// (0x000149c5) list_setting_number_pane_vc_ParamLimits

0x9b90,	// (0x000149c5) list_setting_number_pane_vc

0x9b90,	// (0x000149c5) list_setting_pane_vc_ParamLimits

0x9b90,	// (0x000149c5) list_setting_pane_vc

0x9b90,	// (0x000149c5) list_single_graphic_heading_pane_vc_ParamLimits

0x9b90,	// (0x000149c5) list_single_graphic_heading_pane_vc

0x9b90,	// (0x000149c5) list_single_heading_pane_vc_ParamLimits

0x9b90,	// (0x000149c5) list_single_heading_pane_vc

0x9b90,	// (0x000149c5) list_single_number_heading_pane_vc_ParamLimits

0x9b90,	// (0x000149c5) list_single_number_heading_pane_vc

0x857d,	// (0x000133b2) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x857d,	// (0x000133b2) list_double_graphic_heading_pane_vc_g1

0x7c2e,	// (0x00012a63) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x7c2e,	// (0x00012a63) list_double_graphic_heading_pane_vc_g2

0x8589,	// (0x000133be) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x8589,	// (0x000133be) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf59c,	// (0x0001a3d1) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf59c,	// (0x0001a3d1) list_double_graphic_heading_pane_vc_g

0xa0cb,	// (0x00014f00) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xa0cb,	// (0x00014f00) list_double_graphic_heading_pane_vc_t1

0xa0e1,	// (0x00014f16) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xa0e1,	// (0x00014f16) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9bd,	// (0x0001a7f2) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9bd,	// (0x0001a7f2) list_double_graphic_heading_pane_vc_t

0x8675,	// (0x000134aa) list_setting_pane_vc_g1_ParamLimits

0x8675,	// (0x000134aa) list_setting_pane_vc_g1

0x8681,	// (0x000134b6) list_setting_pane_vc_g2_ParamLimits

0x8681,	// (0x000134b6) list_setting_pane_vc_g2

0x0001,

0xf7b3,	// (0x0001a5e8) list_setting_pane_vc_g_ParamLimits

0xf7b3,	// (0x0001a5e8) list_setting_pane_vc_g

0xa2d6,	// (0x0001510b) list_setting_pane_vc_t1_ParamLimits

0xa2d6,	// (0x0001510b) list_setting_pane_vc_t1

0xa2ea,	// (0x0001511f) list_setting_pane_vc_t2_ParamLimits

0xa2ea,	// (0x0001511f) list_setting_pane_vc_t2

0x0001,

0xfa00,	// (0x0001a835) list_setting_pane_vc_t_ParamLimits

0xfa00,	// (0x0001a835) list_setting_pane_vc_t

0x86e5,	// (0x0001351a) set_value_pane_cp_vc_ParamLimits

0x86e5,	// (0x0001351a) set_value_pane_cp_vc

0x7c2e,	// (0x00012a63) list_single_number_heading_pane_vc_g1_ParamLimits

0x7c2e,	// (0x00012a63) list_single_number_heading_pane_vc_g1

0x8589,	// (0x000133be) list_single_number_heading_pane_vc_g2_ParamLimits

0x8589,	// (0x000133be) list_single_number_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x0001a3d8) list_single_number_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x0001a3d8) list_single_number_heading_pane_vc_g

0x864d,	// (0x00013482) list_single_number_heading_pane_vc_t1_ParamLimits

0x864d,	// (0x00013482) list_single_number_heading_pane_vc_t1

0xa30c,	// (0x00015141) list_single_number_heading_pane_vc_t2_ParamLimits

0xa30c,	// (0x00015141) list_single_number_heading_pane_vc_t2

0x7c6a,	// (0x00012a9f) list_single_number_heading_pane_vc_t3_ParamLimits

0x7c6a,	// (0x00012a9f) list_single_number_heading_pane_vc_t3

0x0002,

0xfa05,	// (0x0001a83a) list_single_number_heading_pane_vc_t_ParamLimits

0xfa05,	// (0x0001a83a) list_single_number_heading_pane_vc_t

0x857d,	// (0x000133b2) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x857d,	// (0x000133b2) list_single_graphic_heading_pane_vc_g1

0x7c2e,	// (0x00012a63) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x7c2e,	// (0x00012a63) list_single_graphic_heading_pane_vc_g4

0x8589,	// (0x000133be) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x8589,	// (0x000133be) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf59c,	// (0x0001a3d1) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf59c,	// (0x0001a3d1) list_single_graphic_heading_pane_vc_g

0x864d,	// (0x00013482) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x864d,	// (0x00013482) list_single_graphic_heading_pane_vc_t1

0xa31e,	// (0x00015153) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xa31e,	// (0x00015153) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa0c,	// (0x0001a841) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa0c,	// (0x0001a841) list_single_graphic_heading_pane_vc_t

0x7c2e,	// (0x00012a63) list_double2_pane_vc_g1_ParamLimits

0x7c2e,	// (0x00012a63) list_double2_pane_vc_g1

0x8589,	// (0x000133be) list_double2_pane_vc_g2_ParamLimits

0x8589,	// (0x000133be) list_double2_pane_vc_g2

0x0001,

0xf5a3,	// (0x0001a3d8) list_double2_pane_vc_g_ParamLimits

0xf5a3,	// (0x0001a3d8) list_double2_pane_vc_g

0xa330,	// (0x00015165) list_double2_pane_vc_t1_ParamLimits

0xa330,	// (0x00015165) list_double2_pane_vc_t1

0x6b1c,	// (0x00011951) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x6b1c,	// (0x00011951) list_double2_large_graphic_pane_vc_g1

0x6b28,	// (0x0001195d) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x6b28,	// (0x0001195d) list_double2_large_graphic_pane_vc_g2

0x6b34,	// (0x00011969) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x6b34,	// (0x00011969) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5c0,	// (0x0001a3f5) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5c0,	// (0x0001a3f5) list_double2_large_graphic_pane_vc_g

0x6b48,	// (0x0001197d) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x6b48,	// (0x0001197d) list_double2_large_graphic_pane_vc_t1

0xa346,	// (0x0001517b) list_double_time_pane_vc_g1_ParamLimits

0xa346,	// (0x0001517b) list_double_time_pane_vc_g1

0xa352,	// (0x00015187) list_double_time_pane_vc_g2_ParamLimits

0xa352,	// (0x00015187) list_double_time_pane_vc_g2

0x0001,

0xfa11,	// (0x0001a846) list_double_time_pane_vc_g_ParamLimits

0xfa11,	// (0x0001a846) list_double_time_pane_vc_g

0xa35e,	// (0x00015193) list_double_time_pane_vc_t1_ParamLimits

0xa35e,	// (0x00015193) list_double_time_pane_vc_t1

0xa37c,	// (0x000151b1) list_double_time_pane_vc_t2_ParamLimits

0xa37c,	// (0x000151b1) list_double_time_pane_vc_t2

0xa3a0,	// (0x000151d5) list_double_time_pane_vc_t3_ParamLimits

0xa3a0,	// (0x000151d5) list_double_time_pane_vc_t3

0xa3b2,	// (0x000151e7) list_double_time_pane_vc_t4_ParamLimits

0xa3b2,	// (0x000151e7) list_double_time_pane_vc_t4

0x0003,

0xfa16,	// (0x0001a84b) list_double_time_pane_vc_t_ParamLimits

0xfa16,	// (0x0001a84b) list_double_time_pane_vc_t

0x7c2e,	// (0x00012a63) list_double_pane_vc_g1_ParamLimits

0x7c2e,	// (0x00012a63) list_double_pane_vc_g1

0x8589,	// (0x000133be) list_double_pane_vc_g2_ParamLimits

0x8589,	// (0x000133be) list_double_pane_vc_g2

0x0001,

0xf5a3,	// (0x0001a3d8) list_double_pane_vc_g_ParamLimits

0xf5a3,	// (0x0001a3d8) list_double_pane_vc_g

0xa3c4,	// (0x000151f9) list_double_pane_vc_t1_ParamLimits

0xa3c4,	// (0x000151f9) list_double_pane_vc_t1

0xa3d6,	// (0x0001520b) list_double_pane_vc_t2_ParamLimits

0xa3d6,	// (0x0001520b) list_double_pane_vc_t2

0x0001,

0xfa1f,	// (0x0001a854) list_double_pane_vc_t_ParamLimits

0xfa1f,	// (0x0001a854) list_double_pane_vc_t

0x7c2e,	// (0x00012a63) list_double_number_pane_vc_g1_ParamLimits

0x7c2e,	// (0x00012a63) list_double_number_pane_vc_g1

0x8589,	// (0x000133be) list_double_number_pane_vc_g2_ParamLimits

0x8589,	// (0x000133be) list_double_number_pane_vc_g2

0x0001,

0xf5a3,	// (0x0001a3d8) list_double_number_pane_vc_g_ParamLimits

0xf5a3,	// (0x0001a3d8) list_double_number_pane_vc_g

0xa3ec,	// (0x00015221) list_double_number_pane_vc_t1_ParamLimits

0xa3ec,	// (0x00015221) list_double_number_pane_vc_t1

0xa400,	// (0x00015235) list_double_number_pane_vc_t2_ParamLimits

0xa400,	// (0x00015235) list_double_number_pane_vc_t2

0xa412,	// (0x00015247) list_double_number_pane_vc_t3_ParamLimits

0xa412,	// (0x00015247) list_double_number_pane_vc_t3

0x0002,

0xfa24,	// (0x0001a859) list_double_number_pane_vc_t_ParamLimits

0xfa24,	// (0x0001a859) list_double_number_pane_vc_t

0xa428,	// (0x0001525d) list_double_large_graphic_pane_vc_g1_ParamLimits

0xa428,	// (0x0001525d) list_double_large_graphic_pane_vc_g1

0xa450,	// (0x00015285) list_double_large_graphic_pane_vc_g2_ParamLimits

0xa450,	// (0x00015285) list_double_large_graphic_pane_vc_g2

0xa464,	// (0x00015299) list_double_large_graphic_pane_vc_g3_ParamLimits

0xa464,	// (0x00015299) list_double_large_graphic_pane_vc_g3

0xa473,	// (0x000152a8) list_double_large_graphic_pane_vc_g4_ParamLimits

0xa473,	// (0x000152a8) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa2b,	// (0x0001a860) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa2b,	// (0x0001a860) list_double_large_graphic_pane_vc_g

0xa483,	// (0x000152b8) list_double_large_graphic_pane_vc_t1_ParamLimits

0xa483,	// (0x000152b8) list_double_large_graphic_pane_vc_t1

0xa49d,	// (0x000152d2) list_double_large_graphic_pane_vc_t2_ParamLimits

0xa49d,	// (0x000152d2) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa34,	// (0x0001a869) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa34,	// (0x0001a869) list_double_large_graphic_pane_vc_t

0x7c2e,	// (0x00012a63) list_double_heading_pane_vc_g1_ParamLimits

0x7c2e,	// (0x00012a63) list_double_heading_pane_vc_g1

0x8589,	// (0x000133be) list_double_heading_pane_vc_g2_ParamLimits

0x8589,	// (0x000133be) list_double_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x0001a3d8) list_double_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x0001a3d8) list_double_heading_pane_vc_g

0xa4bd,	// (0x000152f2) list_double_heading_pane_vc_t1_ParamLimits

0xa4bd,	// (0x000152f2) list_double_heading_pane_vc_t1

0x864d,	// (0x00013482) list_double_heading_pane_vc_t2_ParamLimits

0x864d,	// (0x00013482) list_double_heading_pane_vc_t2

0x0001,

0xfa39,	// (0x0001a86e) list_double_heading_pane_vc_t_ParamLimits

0xfa39,	// (0x0001a86e) list_double_heading_pane_vc_t

0xa4cf,	// (0x00015304) list_double_graphic_pane_vc_g1_ParamLimits

0xa4cf,	// (0x00015304) list_double_graphic_pane_vc_g1

0xa4db,	// (0x00015310) list_double_graphic_pane_vc_g2_ParamLimits

0xa4db,	// (0x00015310) list_double_graphic_pane_vc_g2

0x7c2e,	// (0x00012a63) list_double_graphic_pane_vc_g3_ParamLimits

0x7c2e,	// (0x00012a63) list_double_graphic_pane_vc_g3

0x0003,

0xfa3e,	// (0x0001a873) list_double_graphic_pane_vc_g_ParamLimits

0xfa3e,	// (0x0001a873) list_double_graphic_pane_vc_g

0xa4f8,	// (0x0001532d) list_double_graphic_pane_vc_t1_ParamLimits

0xa4f8,	// (0x0001532d) list_double_graphic_pane_vc_t1

0xa516,	// (0x0001534b) list_double_graphic_pane_vc_t2_ParamLimits

0xa516,	// (0x0001534b) list_double_graphic_pane_vc_t2

0x0001,

0xfa47,	// (0x0001a87c) list_double_graphic_pane_vc_t_ParamLimits

0xfa47,	// (0x0001a87c) list_double_graphic_pane_vc_t

0x3f11,	// (0x0000ed46) aid_size_cell_fastswap

0xd874,	// (0x000186a9) aid_size_cell_touch_ParamLimits

0xd874,	// (0x000186a9) aid_size_cell_touch

0x4068,	// (0x0000ee9d) popup_fast_swap_wide_window_ParamLimits

0x4068,	// (0x0000ee9d) popup_fast_swap_wide_window

0xd96c,	// (0x000187a1) touch_pane_ParamLimits

0xd96c,	// (0x000187a1) touch_pane

0x6eff,	// (0x00011d34) button_value_adjust_pane_cp2

0x6f07,	// (0x00011d3c) button_value_adjust_pane_cp4

0x6f27,	// (0x00011d5c) form_field_data_pane_cp2

0x07db,	// (0x0000b610) form_field_data_wide_pane_cp2

0x75b2,	// (0x000123e7) bg_scroll_pane_ParamLimits

0x4355,	// (0x0000f18a) scroll_handle_pane_ParamLimits

0x4369,	// (0x0000f19e) scroll_sc2_down_pane_ParamLimits

0x4369,	// (0x0000f19e) scroll_sc2_down_pane

0x75e3,	// (0x00012418) scroll_sc2_up_pane_ParamLimits

0x75e3,	// (0x00012418) scroll_sc2_up_pane

0x1fc2,	// (0x0000cdf7) grid_wheel_folder_pane_g1_ParamLimits

0x1fc2,	// (0x0000cdf7) grid_wheel_folder_pane_g1

0x451d,	// (0x0000f352) clock_nsta_pane_cp2_ParamLimits

0x451d,	// (0x0000f352) clock_nsta_pane_cp2

0x0c30,	// (0x0000ba65) listscroll_midp_pane_ParamLimits

0x0c3f,	// (0x0000ba74) midp_canvas_pane

0x4764,	// (0x0000f599) nsta_clock_indic_pane

0x80d9,	// (0x00012f0e) listscroll_form_pane_vc

0x80f6,	// (0x00012f2b) listscroll_set_pane_vc_ParamLimits

0x80f6,	// (0x00012f2b) listscroll_set_pane_vc

0x156e,	// (0x0000c3a3) clock_nsta_pane

0x1591,	// (0x0000c3c6) indicator_nsta_pane

0x8521,	// (0x00013356) bg_popup_sub_pane_cp2_ParamLimits

0x8535,	// (0x0001336a) find_pane_cp2_ParamLimits

0x8535,	// (0x0001336a) find_pane_cp2

0x8547,	// (0x0001337c) grid_toobar_pane_ParamLimits

0x86f1,	// (0x00013526) list_form_gen_pane_vc_ParamLimits

0x86f1,	// (0x00013526) list_form_gen_pane_vc

0x8707,	// (0x0001353c) scroll_pane_cp8_vc_ParamLimits

0x8707,	// (0x0001353c) scroll_pane_cp8_vc

0x8783,	// (0x000135b8) data_form_wide_pane_vc_ParamLimits

0x8783,	// (0x000135b8) data_form_wide_pane_vc

0x878f,	// (0x000135c4) form_field_data_wide_pane_vc_g1

0x8797,	// (0x000135cc) form_field_data_wide_pane_vc_t1_ParamLimits

0x8797,	// (0x000135cc) form_field_data_wide_pane_vc_t1

0x6fcf,	// (0x00011e04) input_focus_pane_cp6_vc_ParamLimits

0x6fcf,	// (0x00011e04) input_focus_pane_cp6_vc

0x18f4,	// (0x0000c729) list_midp_pane_ParamLimits

0x9d96,	// (0x00014bcb) scroll_pane_cp16_ParamLimits

0x9d96,	// (0x00014bcb) scroll_pane_cp16

0x8af5,	// (0x0001392a) button_value_adjust_pane_ParamLimits

0x8af5,	// (0x0001392a) button_value_adjust_pane

0x1c04,	// (0x0000ca39) button_value_adjust_pane_cp6_ParamLimits

0x1c04,	// (0x0000ca39) button_value_adjust_pane_cp6

0x1d0e,	// (0x0000cb43) settings_code_pane_cp_ParamLimits

0x1d0e,	// (0x0000cb43) settings_code_pane_cp

0x610c,	// (0x00010f41) cell_touch_pane_g1

0x610c,	// (0x00010f41) cell_touch_pane_g2

0x0001,

0xf6d9,	// (0x0001a50e) cell_touch_pane_g

0x1eae,	// (0x0000cce3) cell_touch_pane_cp_ParamLimits

0x1eae,	// (0x0000cce3) cell_touch_pane_cp

0x1eca,	// (0x0000ccff) cell_touch_pane_ParamLimits

0x1eca,	// (0x0000ccff) cell_touch_pane

0x610c,	// (0x00010f41) scroll_sc2_down_pane_g1

0x610c,	// (0x00010f41) scroll_sc2_up_pane_g1

0x61f3,	// (0x00011028) bg_set_opt_pane_cp4_vc

0xa0f9,	// (0x00014f2e) list_set_graphic_pane_vc_g1_ParamLimits

0xa0f9,	// (0x00014f2e) list_set_graphic_pane_vc_g1

0xa105,	// (0x00014f3a) list_set_graphic_pane_vc_g2_ParamLimits

0xa105,	// (0x00014f3a) list_set_graphic_pane_vc_g2

0x0001,

0xf9c2,	// (0x0001a7f7) list_set_graphic_pane_vc_g_ParamLimits

0xf9c2,	// (0x0001a7f7) list_set_graphic_pane_vc_g

0xa111,	// (0x00014f46) text_primary_small_cp13_vc_ParamLimits

0xa111,	// (0x00014f46) text_primary_small_cp13_vc

0xa129,	// (0x00014f5e) list_set_graphic_pane_vc_ParamLimits

0xa129,	// (0x00014f5e) list_set_graphic_pane_vc

0x61f3,	// (0x00011028) input_focus_pane_cp2_vc

0x610c,	// (0x00010f41) setting_code_pane_vc_g1

0xa13c,	// (0x00014f71) setting_code_pane_vc_t1

0xa14a,	// (0x00014f7f) set_text_pane_vc_t1_ParamLimits

0xa14a,	// (0x00014f7f) set_text_pane_vc_t1

0x61f3,	// (0x00011028) input_focus_pane_cp1_vc

0xa165,	// (0x00014f9a) list_set_text_pane_vc

0x610c,	// (0x00010f41) setting_text_pane_vc_g1

0x61f3,	// (0x00011028) bg_set_opt_pane_cp2_vc

0xa16f,	// (0x00014fa4) setting_slider_graphic_pane_vc_g1

0xa177,	// (0x00014fac) setting_slider_graphic_pane_vc_t1

0xa185,	// (0x00014fba) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9c7,	// (0x0001a7fc) setting_slider_graphic_pane_vc_t

0xa193,	// (0x00014fc8) slider_set_pane_cp_vc

0xa19b,	// (0x00014fd0) slider_set_pane_vc_g1

0xa1a4,	// (0x00014fd9) slider_set_pane_vc_g2

0x0006,

0xf9cc,	// (0x0001a801) slider_set_pane_vc_g

0x70f2,	// (0x00011f27) set_opt_bg_pane_g1_copy1

0x70fa,	// (0x00011f2f) set_opt_bg_pane_g2_copy1

0xa1d0,	// (0x00015005) set_opt_bg_pane_g3_copy1

0x710a,	// (0x00011f3f) set_opt_bg_pane_g4_copy1

0x7112,	// (0x00011f47) set_opt_bg_pane_g5_copy1

0x711a,	// (0x00011f4f) set_opt_bg_pane_g6_copy1

0xa1d8,	// (0x0001500d) set_opt_bg_pane_g7_copy1

0xa1e0,	// (0x00015015) set_opt_bg_pane_g8_copy1

0xa1e8,	// (0x0001501d) set_opt_bg_pane_g9_copy1

0x61f3,	// (0x00011028) bg_set_opt_pane_cp_vc

0xa1f0,	// (0x00015025) setting_slider_pane_vc_t1

0xa177,	// (0x00014fac) setting_slider_pane_vc_t2

0xa185,	// (0x00014fba) setting_slider_pane_vc_t3

0x0002,

0xf9db,	// (0x0001a810) setting_slider_pane_vc_t

0xa193,	// (0x00014fc8) slider_set_pane_vc

0x4dbd,	// (0x0000fbf2) volume_set_pane_vc_g1

0x50a4,	// (0x0000fed9) volume_set_pane_vc_g2

0x50ad,	// (0x0000fee2) volume_set_pane_vc_g3

0x50b6,	// (0x0000feeb) volume_set_pane_vc_g4

0x50bf,	// (0x0000fef4) volume_set_pane_vc_g5

0x50c8,	// (0x0000fefd) volume_set_pane_vc_g6

0x50d1,	// (0x0000ff06) volume_set_pane_vc_g7

0x50da,	// (0x0000ff0f) volume_set_pane_vc_g8

0x50e3,	// (0x0000ff18) volume_set_pane_vc_g9

0x50ec,	// (0x0000ff21) volume_set_pane_vc_g10

0x0009,

0xf9e2,	// (0x0001a817) volume_set_pane_vc_g

0xa1ff,	// (0x00015034) volume_set_pane_vc

0xa207,	// (0x0001503c) button_value_adjust_pane_cp1_vc

0xa211,	// (0x00015046) list_highlight_pane_cp2_vc

0xa21a,	// (0x0001504f) list_set_pane_vc_ParamLimits

0xa21a,	// (0x0001504f) list_set_pane_vc

0xa26c,	// (0x000150a1) main_pane_set_vc_t1_ParamLimits

0xa26c,	// (0x000150a1) main_pane_set_vc_t1

0xa281,	// (0x000150b6) main_pane_set_vc_t2_ParamLimits

0xa281,	// (0x000150b6) main_pane_set_vc_t2

0xa293,	// (0x000150c8) main_pane_set_vc_t3_ParamLimits

0xa293,	// (0x000150c8) main_pane_set_vc_t3

0xa2a5,	// (0x000150da) main_pane_set_vc_t4_ParamLimits

0xa2a5,	// (0x000150da) main_pane_set_vc_t4

0x0003,

0xf9f7,	// (0x0001a82c) main_pane_set_vc_t_ParamLimits

0xf9f7,	// (0x0001a82c) main_pane_set_vc_t

0xa2b7,	// (0x000150ec) setting_code_pane_vc_ParamLimits

0xa2b7,	// (0x000150ec) setting_code_pane_vc

0xa2c6,	// (0x000150fb) setting_slider_graphic_pane_vc

0xa2c6,	// (0x000150fb) setting_slider_pane_vc

0xa2c6,	// (0x000150fb) setting_text_pane_vc

0xa2c6,	// (0x000150fb) setting_volume_pane_vc

0xa2ce,	// (0x00015103) scroll_pane_cp121_vc

0x6ef6,	// (0x00011d2b) set_content_pane_vc

0xa534,	// (0x00015369) button_value_adjust_pane_g1

0xa53d,	// (0x00015372) button_value_adjust_pane_g2

0x0001,

0xfa4c,	// (0x0001a881) button_value_adjust_pane_g

0xa546,	// (0x0001537b) form_field_slider_wide_pane_vc_t1_ParamLimits

0xa546,	// (0x0001537b) form_field_slider_wide_pane_vc_t1

0xa55c,	// (0x00015391) form_field_slider_wide_pane_vc_t2_ParamLimits

0xa55c,	// (0x00015391) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa51,	// (0x0001a886) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa51,	// (0x0001a886) form_field_slider_wide_pane_vc_t

0x656d,	// (0x000113a2) input_focus_pane_cp10_vc_ParamLimits

0x656d,	// (0x000113a2) input_focus_pane_cp10_vc

0xa587,	// (0x000153bc) slider_cont_pane_cp1_vc_ParamLimits

0xa587,	// (0x000153bc) slider_cont_pane_cp1_vc

0xa19b,	// (0x00014fd0) slider_form_pane_g1_cp2

0xa1a4,	// (0x00014fd9) slider_form_pane_g2_cp2

0xa5a2,	// (0x000153d7) form_field_slider_pane_vc_t3

0xa5b0,	// (0x000153e5) form_field_slider_pane_vc_t4

0xa5be,	// (0x000153f3) slider_form_pane_vc_ParamLimits

0xa5be,	// (0x000153f3) slider_form_pane_vc

0xa5cb,	// (0x00015400) form_field_slider_pane_vc_t1_ParamLimits

0xa5cb,	// (0x00015400) form_field_slider_pane_vc_t1

0xa5e1,	// (0x00015416) form_field_slider_pane_vc_t2_ParamLimits

0xa5e1,	// (0x00015416) form_field_slider_pane_vc_t2

0x0001,

0xfa63,	// (0x0001a898) form_field_slider_pane_vc_t_ParamLimits

0xfa63,	// (0x0001a898) form_field_slider_pane_vc_t

0x656d,	// (0x000113a2) input_focus_pane_cp9_vc_ParamLimits

0x656d,	// (0x000113a2) input_focus_pane_cp9_vc

0xa5f3,	// (0x00015428) slider_cont_pane_vc_ParamLimits

0xa5f3,	// (0x00015428) slider_cont_pane_vc

0xa605,	// (0x0001543a) list_form_graphic_pane_cp_vc_ParamLimits

0xa605,	// (0x0001543a) list_form_graphic_pane_cp_vc

0x878f,	// (0x000135c4) form_field_popup_wide_pane_vc_g1

0xa61a,	// (0x0001544f) form_field_popup_wide_pane_vc_t1_ParamLimits

0xa61a,	// (0x0001544f) form_field_popup_wide_pane_vc_t1

0x6fcf,	// (0x00011e04) input_focus_pane_cp8_vc_ParamLimits

0x6fcf,	// (0x00011e04) input_focus_pane_cp8_vc

0xa659,	// (0x0001548e) list_form_wide_pane_vc_ParamLimits

0xa659,	// (0x0001548e) list_form_wide_pane_vc

0xa665,	// (0x0001549a) list_form_graphic_pane_vc_g1

0xa66d,	// (0x000154a2) list_form_graphic_pane_vc_t1_ParamLimits

0xa66d,	// (0x000154a2) list_form_graphic_pane_vc_t1

0x62d3,	// (0x00011108) list_highlight_pane_cp5_vc_ParamLimits

0x62d3,	// (0x00011108) list_highlight_pane_cp5_vc

0xa689,	// (0x000154be) list_form_graphic_pane_vc_ParamLimits

0xa689,	// (0x000154be) list_form_graphic_pane_vc

0x878f,	// (0x000135c4) form_field_popup_pane_vc_g1

0xa69f,	// (0x000154d4) form_field_popup_pane_vc_t1_ParamLimits

0xa69f,	// (0x000154d4) form_field_popup_pane_vc_t1

0x6fcf,	// (0x00011e04) input_focus_pane_cp7_vc_ParamLimits

0x6fcf,	// (0x00011e04) input_focus_pane_cp7_vc

0xa6b4,	// (0x000154e9) list_form_pane_vc_ParamLimits

0xa6b4,	// (0x000154e9) list_form_pane_vc

0xa6c0,	// (0x000154f5) data_form_pane_vc_t1_ParamLimits

0xa6c0,	// (0x000154f5) data_form_pane_vc_t1

0x70f2,	// (0x00011f27) input_focus_pane_vc_g1

0x70fa,	// (0x00011f2f) input_focus_pane_vc_g2

0x7102,	// (0x00011f37) input_focus_pane_vc_g3

0x710a,	// (0x00011f3f) input_focus_pane_vc_g4

0x7112,	// (0x00011f47) input_focus_pane_vc_g5

0x711a,	// (0x00011f4f) input_focus_pane_vc_g6

0x7122,	// (0x00011f57) input_focus_pane_vc_g7

0x712a,	// (0x00011f5f) input_focus_pane_vc_g8

0x7132,	// (0x00011f67) input_focus_pane_vc_g9

0x610c,	// (0x00010f41) input_focus_pane_vc_g10

0x0009,

0xf662,	// (0x0001a497) input_focus_pane_vc_g

0x8783,	// (0x000135b8) data_form_pane_vc_ParamLimits

0x8783,	// (0x000135b8) data_form_pane_vc

0x878f,	// (0x000135c4) form_field_data_pane_vc_g1

0xa6db,	// (0x00015510) form_field_data_pane_vc_t1_ParamLimits

0xa6db,	// (0x00015510) form_field_data_pane_vc_t1

0x6fcf,	// (0x00011e04) input_focus_pane_vc_ParamLimits

0x6fcf,	// (0x00011e04) input_focus_pane_vc

0x6eff,	// (0x00011d34) button_value_adjust_pane_cp3_vc

0xa6f1,	// (0x00015526) button_value_adjust_pane_cp5_vc

0xa6f9,	// (0x0001552e) form_field_data_pane_vc_ParamLimits

0xa6f9,	// (0x0001552e) form_field_data_pane_vc

0x6f27,	// (0x00011d5c) form_field_data_pane_vc_cp2

0xa710,	// (0x00015545) form_field_data_wide_pane_vc_ParamLimits

0xa710,	// (0x00015545) form_field_data_wide_pane_vc

0xa726,	// (0x0001555b) form_field_data_wide_pane_vc_cp2

0xa72e,	// (0x00015563) form_field_popup_pane_vc_ParamLimits

0xa72e,	// (0x00015563) form_field_popup_pane_vc

0xa745,	// (0x0001557a) form_field_popup_wide_pane_vc_ParamLimits

0xa745,	// (0x0001557a) form_field_popup_wide_pane_vc

0xa75b,	// (0x00015590) form_field_slider_pane_vc_ParamLimits

0xa75b,	// (0x00015590) form_field_slider_pane_vc

0xa76e,	// (0x000155a3) form_field_slider_wide_pane_vc_ParamLimits

0xa76e,	// (0x000155a3) form_field_slider_wide_pane_vc

0x1ee8,	// (0x0000cd1d) grid_touch_1_pane_ParamLimits

0x1ee8,	// (0x0000cd1d) grid_touch_1_pane

0x1efc,	// (0x0000cd31) grid_touch_2_pane_ParamLimits

0x1efc,	// (0x0000cd31) grid_touch_2_pane

0xa84d,	// (0x00015682) touch_pane_g1_ParamLimits

0xa84d,	// (0x00015682) touch_pane_g1

0xa7a5,	// (0x000155da) cell_app_pane_cp_wide_ParamLimits

0xa7a5,	// (0x000155da) cell_app_pane_cp_wide

0xa7b5,	// (0x000155ea) grid_popup_fast_wide_pane_ParamLimits

0xa7b5,	// (0x000155ea) grid_popup_fast_wide_pane

0xa7c9,	// (0x000155fe) scroll_pane_cp19_ParamLimits

0xa7c9,	// (0x000155fe) scroll_pane_cp19

0x61f3,	// (0x00011028) bg_popup_window_pane_cp20

0xa7dd,	// (0x00015612) listscroll_popup_fast_wide_pane

0x1f26,	// (0x0000cd5b) grid_indicator_nsta_pane

0xa7f7,	// (0x0001562c) clock_nsta_pane_g1

0xa800,	// (0x00015635) clock_nsta_pane_t1

0x1f32,	// (0x0000cd67) cell_indicator_nsta_pane_ParamLimits

0x1f32,	// (0x0000cd67) cell_indicator_nsta_pane

0xa84d,	// (0x00015682) cell_indicator_nsta_pane_g1

0x1f49,	// (0x0000cd7e) cell_indicator_nsta_pane_g2

0x0001,

0xfa74,	// (0x0001a8a9) cell_indicator_nsta_pane_g

0xa86b,	// (0x000156a0) clock_nsta_pane_cp

0xa873,	// (0x000156a8) indicator_nsta_pane_cp

0xa87c,	// (0x000156b1) nsta_clock_indic_pane_g1

0x63b4,	// (0x000111e9) grid_indicator_pane

0x76d5,	// (0x0001250a) scroll_pane_cp29

0x4474,	// (0x0000f2a9) indicator_nsta_pane_cp2_ParamLimits

0x4474,	// (0x0000f2a9) indicator_nsta_pane_cp2

0x62d3,	// (0x00011108) main_apps_wheel_pane

0x896e,	// (0x000137a3) form_midp_field_text_pane_ParamLimits

0x8ab3,	// (0x000138e8) scroll_bar_cp050_ParamLimits

0xa8e5,	// (0x0001571a) cell_indicator_pane_ParamLimits

0xa8e5,	// (0x0001571a) cell_indicator_pane

0xa8fb,	// (0x00015730) cell_indicator_pane_g1

0x1f56,	// (0x0000cd8b) grid_wheel_folder_pane_ParamLimits

0x1f56,	// (0x0000cd8b) grid_wheel_folder_pane

0x1f64,	// (0x0000cd99) list_wheel_apps_pane_ParamLimits

0x1f64,	// (0x0000cd99) list_wheel_apps_pane

0x1f70,	// (0x0000cda5) main_apps_wheel_pane_g1_ParamLimits

0x1f70,	// (0x0000cda5) main_apps_wheel_pane_g1

0x1f7c,	// (0x0000cdb1) main_apps_wheel_pane_g2_ParamLimits

0x1f7c,	// (0x0000cdb1) main_apps_wheel_pane_g2

0x0001,

0xfa90,	// (0x0001a8c5) main_apps_wheel_pane_g_ParamLimits

0xfa90,	// (0x0001a8c5) main_apps_wheel_pane_g

0x1f88,	// (0x0000cdbd) main_apps_wheel_pane_t1_ParamLimits

0x1f88,	// (0x0000cdbd) main_apps_wheel_pane_t1

0x1f9a,	// (0x0000cdcf) list_wheel_apps_pane_g1

0x1fa2,	// (0x0000cdd7) list_wheel_apps_pane_g2

0x1faa,	// (0x0000cddf) list_wheel_apps_pane_g3

0x1fb2,	// (0x0000cde7) list_wheel_apps_pane_g4

0x1fba,	// (0x0000cdef) list_wheel_apps_pane_g5

0x0004,

0xfa95,	// (0x0001a8ca) list_wheel_apps_pane_g

0x62d3,	// (0x00011108) navi_icon_text_pane

0x147a,	// (0x0000c2af) aid_fill_nsta

0xa9ac,	// (0x000157e1) navi_icon_text_pane_g1

0xa9b8,	// (0x000157ed) navi_icon_text_pane_t1

0x7b2b,	// (0x00012960) list_set_graphic_pane_t1_ParamLimits

0x7b2b,	// (0x00012960) list_set_graphic_pane_t1

0x91ed,	// (0x00014022) popup_midp_note_alarm_window_t6_ParamLimits

0x91ed,	// (0x00014022) popup_midp_note_alarm_window_t6

0x91ff,	// (0x00014034) popup_midp_note_alarm_window_t7_ParamLimits

0x91ff,	// (0x00014034) popup_midp_note_alarm_window_t7

0x9211,	// (0x00014046) popup_midp_note_alarm_window_t8_ParamLimits

0x9211,	// (0x00014046) popup_midp_note_alarm_window_t8

0x9223,	// (0x00014058) popup_midp_note_alarm_window_t9_ParamLimits

0x9223,	// (0x00014058) popup_midp_note_alarm_window_t9

0x9235,	// (0x0001406a) popup_midp_note_alarm_window_t10_ParamLimits

0x9235,	// (0x0001406a) popup_midp_note_alarm_window_t10

0x9247,	// (0x0001407c) popup_midp_note_alarm_window_t11_ParamLimits

0x9247,	// (0x0001407c) popup_midp_note_alarm_window_t11

0x9259,	// (0x0001408e) scroll_pane_cp17_ParamLimits

0x9259,	// (0x0001408e) scroll_pane_cp17

0x4dbd,	// (0x0000fbf2) volume_small_pane_cp_g1

0x50f5,	// (0x0000ff2a) volume_small_pane_cp_g2

0x50fe,	// (0x0000ff33) volume_small_pane_cp_g3

0x5107,	// (0x0000ff3c) volume_small_pane_cp_g4

0x4dea,	// (0x0000fc1f) volume_small_pane_cp_g5

0x5110,	// (0x0000ff45) volume_small_pane_cp_g6

0x5119,	// (0x0000ff4e) volume_small_pane_cp_g7

0x5122,	// (0x0000ff57) volume_small_pane_cp_g8

0x512b,	// (0x0000ff60) volume_small_pane_cp_g9

0x5134,	// (0x0000ff69) volume_small_pane_cp_g10

0x7e8a,	// (0x00012cbf) midp_ticker_pane_g1_ParamLimits

0x7e96,	// (0x00012ccb) midp_ticker_pane_g2_ParamLimits

0xf72e,	// (0x0001a563) midp_ticker_pane_g_ParamLimits

0x7ea2,	// (0x00012cd7) midp_ticker_pane_t1_ParamLimits

0x1490,	// (0x0000c2c5) aid_fill_nsta_2

0x8a9f,	// (0x000138d4) list_form2_midp_pane

0x9b5f,	// (0x00014994) midp_editing_number_pane_ParamLimits

0x9b6b,	// (0x000149a0) midp_ticker_pane_ParamLimits

0xa9ca,	// (0x000157ff) form2_midp_field_pane

0xa9ee,	// (0x00015823) scroll_pane_cp51

0xaa0e,	// (0x00015843) form2_midp_button_pane_ParamLimits

0xaa0e,	// (0x00015843) form2_midp_button_pane

0xaa20,	// (0x00015855) form2_midp_content_pane_ParamLimits

0xaa20,	// (0x00015855) form2_midp_content_pane

0xaa3a,	// (0x0001586f) form2_midp_field_choice_group_pane

0xaa42,	// (0x00015877) form2_midp_field_pane_g1

0xaa4a,	// (0x0001587f) form2_midp_field_pane_g2

0xaa52,	// (0x00015887) form2_midp_field_pane_g3

0xaa5a,	// (0x0001588f) form2_midp_field_pane_g4

0x0003,

0xfaba,	// (0x0001a8ef) form2_midp_field_pane_g

0xaa62,	// (0x00015897) form2_midp_gauge_slider_pane

0xaa6a,	// (0x0001589f) form2_midp_gauge_wait_pane

0xaa72,	// (0x000158a7) form2_midp_image_pane_ParamLimits

0xaa72,	// (0x000158a7) form2_midp_image_pane

0xaa8d,	// (0x000158c2) form2_midp_label_pane_ParamLimits

0xaa8d,	// (0x000158c2) form2_midp_label_pane

0x1fef,	// (0x0000ce24) form2_midp_label_pane_cp_ParamLimits

0x1fef,	// (0x0000ce24) form2_midp_label_pane_cp

0xaac5,	// (0x000158fa) form2_midp_string_pane_ParamLimits

0xaac5,	// (0x000158fa) form2_midp_string_pane

0xaad7,	// (0x0001590c) form2_midp_text_pane_ParamLimits

0xaad7,	// (0x0001590c) form2_midp_text_pane

0xaaf0,	// (0x00015925) form2_midp_time_pane

0xab00,	// (0x00015935) input_focus_pane_cp51_ParamLimits

0xab00,	// (0x00015935) input_focus_pane_cp51

0xab18,	// (0x0001594d) form2_midp_label_pane_t1_ParamLimits

0xab18,	// (0x0001594d) form2_midp_label_pane_t1

0x713a,	// (0x00011f6f) form2_mdip_text_pane_t1_ParamLimits

0x713a,	// (0x00011f6f) form2_mdip_text_pane_t1

0xab58,	// (0x0001598d) form2_midp_time_pane_t1

0xab73,	// (0x000159a8) form2_midp_gauge_slider_pane_t1

0x200e,	// (0x0000ce43) form2_midp_gauge_slider_pane_t2

0x2020,	// (0x0000ce55) form2_midp_gauge_slider_pane_t3

0x0002,

0xfac3,	// (0x0001a8f8) form2_midp_gauge_slider_pane_t

0xaba9,	// (0x000159de) form2_midp_slider_pane

0xabb5,	// (0x000159ea) form2_midp_gauge_wait_pane_t1

0xabc3,	// (0x000159f8) form2_midp_wait_pane_ParamLimits

0xabc3,	// (0x000159f8) form2_midp_wait_pane

0x87cd,	// (0x00013602) list_single_2graphic_pane_cp4_ParamLimits

0x87cd,	// (0x00013602) list_single_2graphic_pane_cp4

0xabee,	// (0x00015a23) list_single_midp_graphic_pane_cp_ParamLimits

0xabee,	// (0x00015a23) list_single_midp_graphic_pane_cp

0x61f3,	// (0x00011028) list_highlight_pane_cp20

0xac0c,	// (0x00015a41) list_single_2graphic_pane_g1_cp4

0x9faf,	// (0x00014de4) list_single_2graphic_pane_g2_cp4

0xac14,	// (0x00015a49) list_single_2graphic_pane_t1_cp4

0x62d3,	// (0x00011108) list_highlight_pane_cp21

0xac23,	// (0x00015a58) list_single_midp_graphic_pane_g4_cp

0xac32,	// (0x00015a67) list_single_midp_graphic_pane_t1_cp

0xac47,	// (0x00015a7c) form2_mdip_string_pane_t1_ParamLimits

0xac47,	// (0x00015a7c) form2_mdip_string_pane_t1

0x61f3,	// (0x00011028) bg_wml_button_pane_cp2

0x610c,	// (0x00010f41) form2_midp_image_pane_g1

0x6cff,	// (0x00011b34) list_double_large_graphic_pane_g5_ParamLimits

0x6cff,	// (0x00011b34) list_double_large_graphic_pane_g5

0x0c30,	// (0x0000ba65) midp_form_pane_ParamLimits

0x62d3,	// (0x00011108) main_apps_wheel_pane_ParamLimits

0xdeaa,	// (0x00018cdf) popup_preview_window_ParamLimits

0xdeaa,	// (0x00018cdf) popup_preview_window

0x4be3,	// (0x0000fa18) popup_touch_info_window_ParamLimits

0x4be3,	// (0x0000fa18) popup_touch_info_window

0x4c01,	// (0x0000fa36) popup_touch_menu_window_ParamLimits

0x4c01,	// (0x0000fa36) popup_touch_menu_window

0x6102,	// (0x00010f37) bg_popup_sub_pane_cp6

0xacb1,	// (0x00015ae6) list_touch_menu_pane

0xacb9,	// (0x00015aee) list_single_touch_menu_pane_ParamLimits

0xacb9,	// (0x00015aee) list_single_touch_menu_pane

0xacd0,	// (0x00015b05) list_single_touch_menu_pane_t1

0x62d3,	// (0x00011108) bg_popup_sub_pane_cp7_ParamLimits

0x62d3,	// (0x00011108) bg_popup_sub_pane_cp7

0xacde,	// (0x00015b13) heading_sub_pane

0xace6,	// (0x00015b1b) list_touch_info_pane_ParamLimits

0xace6,	// (0x00015b1b) list_touch_info_pane

0xacf5,	// (0x00015b2a) list_single_touch_info_pane_ParamLimits

0xacf5,	// (0x00015b2a) list_single_touch_info_pane

0xad06,	// (0x00015b3b) list_single_touch_info_pane_t1

0xad14,	// (0x00015b49) list_single_touch_info_pane_t2

0x0001,

0xfad1,	// (0x0001a906) list_single_touch_info_pane_t

0x7db9,	// (0x00012bee) bg_popup_heading_pane_cp

0xad22,	// (0x00015b57) heading_sub_pane_t1

0x871d,	// (0x00013552) bg_popup_preview_window_pane_cp_ParamLimits

0x871d,	// (0x00013552) bg_popup_preview_window_pane_cp

0xacde,	// (0x00015b13) heading_preview_pane

0xace6,	// (0x00015b1b) list_preview_pane_ParamLimits

0xace6,	// (0x00015b1b) list_preview_pane

0xad30,	// (0x00015b65) popup_preview_window_g1

0xacf5,	// (0x00015b2a) list_single_preview_pane_ParamLimits

0xacf5,	// (0x00015b2a) list_single_preview_pane

0xad38,	// (0x00015b6d) list_single_preview_pane_g1

0xad40,	// (0x00015b75) list_single_preview_pane_t1

0xad06,	// (0x00015b3b) list_single_preview_pane_t2

0x0001,

0xfad6,	// (0x0001a90b) list_single_preview_pane_t

0xad4e,	// (0x00015b83) bg_popup_heading_pane_cp2_ParamLimits

0xad4e,	// (0x00015b83) bg_popup_heading_pane_cp2

0xad64,	// (0x00015b99) heading_preview_pane_g1

0xad6c,	// (0x00015ba1) heading_preview_pane_t1_ParamLimits

0xad6c,	// (0x00015ba1) heading_preview_pane_t1

0x63d7,	// (0x0001120c) soft_indicator_pane_t1_ParamLimits

0x6a40,	// (0x00011875) scroll_pane_ParamLimits

0x75d1,	// (0x00012406) scroll_sc2_left_pane

0x75da,	// (0x0001240f) scroll_sc2_right_pane

0x75f9,	// (0x0001242e) scroll_bg_pane_g1_ParamLimits

0x760e,	// (0x00012443) scroll_bg_pane_g2_ParamLimits

0x7626,	// (0x0001245b) scroll_bg_pane_g3_ParamLimits

0xf6b9,	// (0x0001a4ee) scroll_bg_pane_g_ParamLimits

0x75f9,	// (0x0001242e) scroll_handle_pane_g1_ParamLimits

0x7648,	// (0x0001247d) scroll_handle_pane_g2_ParamLimits

0x7626,	// (0x0001245b) scroll_handle_pane_g3_ParamLimits

0xf6c0,	// (0x0001a4f5) scroll_handle_pane_g_ParamLimits

0x47b0,	// (0x0000f5e5) popup_choice_list_window_ParamLimits

0x47b0,	// (0x0000f5e5) popup_choice_list_window

0x852d,	// (0x00013362) choice_list_pane

0x85d1,	// (0x00013406) cell_toolbar_pane_t1

0x85f9,	// (0x0001342e) toolbar_button_pane_ParamLimits

0x96d6,	// (0x0001450b) ai_gene_pane_1_t2_ParamLimits

0x96d6,	// (0x0001450b) ai_gene_pane_1_t2

0x0001,

0xf8dc,	// (0x0001a711) ai_gene_pane_1_t_ParamLimits

0xf8dc,	// (0x0001a711) ai_gene_pane_1_t

0xad89,	// (0x00015bbe) scroll_sc2_left_pane_g1

0xad89,	// (0x00015bbe) scroll_sc2_right_pane_g1

0x8108,	// (0x00012f3d) bg_popup_sub_pane_cp10

0xad93,	// (0x00015bc8) list_choice_list_pane

0xadaa,	// (0x00015bdf) list_single_choice_list_pane_ParamLimits

0xadaa,	// (0x00015bdf) list_single_choice_list_pane

0xadbc,	// (0x00015bf1) list_single_choice_list_pane_g1

0x72c8,	// (0x000120fd) list_single_choice_list_pane_t1_ParamLimits

0x72c8,	// (0x000120fd) list_single_choice_list_pane_t1

0xadc4,	// (0x00015bf9) choice_list_pane_g1

0xadcc,	// (0x00015c01) choice_list_pane_t1

0x6102,	// (0x00010f37) input_focus_pane_cp11

0x74ac,	// (0x000122e1) title_pane_stacon_g2_ParamLimits

0x74ac,	// (0x000122e1) title_pane_stacon_g2

0x0002,

0xf69f,	// (0x0001a4d4) title_pane_stacon_g_ParamLimits

0xf69f,	// (0x0001a4d4) title_pane_stacon_g

0x7db9,	// (0x00012bee) cursor_press_pane

0xdc11,	// (0x00018a46) popup_fep_hwr_window_ParamLimits

0xdc11,	// (0x00018a46) popup_fep_hwr_window

0x48a8,	// (0x0000f6dd) popup_fep_vkb_window_ParamLimits

0x48a8,	// (0x0000f6dd) popup_fep_vkb_window

0xadda,	// (0x00015c0f) cursor_press_pane_g1

0x0002,

0xfaff,	// (0x0001a934) fep_vkb_side_pane_g_ParamLimits

0x5172,	// (0x0000ffa7) fep_hwr_candidate_pane_ParamLimits

0x5172,	// (0x0000ffa7) fep_hwr_candidate_pane

0x519a,	// (0x0000ffcf) fep_hwr_side_pane_ParamLimits

0x519a,	// (0x0000ffcf) fep_hwr_side_pane

0x51ba,	// (0x0000ffef) fep_hwr_top_pane_ParamLimits

0x51ba,	// (0x0000ffef) fep_hwr_top_pane

0x51d2,	// (0x00010007) fep_hwr_write_pane_ParamLimits

0x51d2,	// (0x00010007) fep_hwr_write_pane

0xfaff,	// (0x0001a934) fep_vkb_side_pane_g

0xade2,	// (0x00015c17) fep_hwr_top_pane_g1

0xadf4,	// (0x00015c29) fep_hwr_top_pane_g2

0x520c,	// (0x00010041) fep_hwr_top_pane_g3

0x0002,

0xfadb,	// (0x0001a910) fep_hwr_top_pane_g

0x5221,	// (0x00010056) fep_hwr_top_text_pane

0x779d,	// (0x000125d2) fep_hwr_top_text_pane_g1

0xae2a,	// (0x00015c5f) fep_hwr_top_text_pane_t1

0x530f,	// (0x00010144) fep_hwr_candidate_pane_g1

0xb03a,	// (0x00015e6f) fep_vkb_keypad_pane_g3_ParamLimits

0xb03a,	// (0x00015e6f) fep_vkb_keypad_pane_g3

0xb05c,	// (0x00015e91) fep_vkb_keypad_pane_g4_ParamLimits

0xb05c,	// (0x00015e91) fep_vkb_keypad_pane_g4

0xb0cb,	// (0x00015f00) fep_vkb_bottom_pane_g2_ParamLimits

0xb0cb,	// (0x00015f00) fep_vkb_bottom_pane_g2

0x0001,

0xfb06,	// (0x0001a93b) fep_vkb_bottom_pane_g_ParamLimits

0xfb06,	// (0x0001a93b) fep_vkb_bottom_pane_g

0xad89,	// (0x00015bbe) cell_vkb_side_pane_g2

0x0001,

0xfb10,	// (0x0001a945) cell_vkb_side_pane_g

0xb156,	// (0x00015f8b) cell_vkb_side_pane_t1

0xb164,	// (0x00015f99) cell_vkb_side_pane_t1_copy1

0xad89,	// (0x00015bbe) bg_fep_vkb_candidate_pane_g2

0xb288,	// (0x000160bd) cell_vkb_candidate_pane_ParamLimits

0xae38,	// (0x00015c6d) aid_size_cell_vkb_ParamLimits

0xae38,	// (0x00015c6d) aid_size_cell_vkb

0xb288,	// (0x000160bd) cell_vkb_candidate_pane

0x5336,	// (0x0001016b) bg_popup_fep_shadow_pane_g1

0xaeae,	// (0x00015ce3) fep_vkb_bottom_pane_ParamLimits

0xaeae,	// (0x00015ce3) fep_vkb_bottom_pane

0xaeeb,	// (0x00015d20) fep_vkb_candidate_pane_ParamLimits

0xaeeb,	// (0x00015d20) fep_vkb_candidate_pane

0xaf07,	// (0x00015d3c) fep_vkb_keypad_pane_ParamLimits

0xaf07,	// (0x00015d3c) fep_vkb_keypad_pane

0xaf3b,	// (0x00015d70) fep_vkb_side_pane_ParamLimits

0xaf3b,	// (0x00015d70) fep_vkb_side_pane

0xaf67,	// (0x00015d9c) fep_vkb_top_pane_ParamLimits

0xaf67,	// (0x00015d9c) fep_vkb_top_pane

0xaf93,	// (0x00015dc8) fep_vkb_top_pane_g1_ParamLimits

0xaf93,	// (0x00015dc8) fep_vkb_top_pane_g1

0xafa2,	// (0x00015dd7) fep_vkb_top_pane_g2_ParamLimits

0xafa2,	// (0x00015dd7) fep_vkb_top_pane_g2

0xafb1,	// (0x00015de6) fep_vkb_top_pane_g3_ParamLimits

0xafb1,	// (0x00015de6) fep_vkb_top_pane_g3

0x0003,

0xfaf6,	// (0x0001a92b) fep_vkb_top_pane_g_ParamLimits

0xfaf6,	// (0x0001a92b) fep_vkb_top_pane_g

0xafcf,	// (0x00015e04) fep_vkb_top_text_pane_ParamLimits

0xafcf,	// (0x00015e04) fep_vkb_top_text_pane

0x208f,	// (0x0000cec4) fep_vkb_side_pane_g1_ParamLimits

0x208f,	// (0x0000cec4) fep_vkb_side_pane_g1

0xb029,	// (0x00015e5e) grid_vkb_side_pane_ParamLimits

0xb029,	// (0x00015e5e) grid_vkb_side_pane

0x533e,	// (0x00010173) bg_popup_fep_shadow_pane_g2

0x5347,	// (0x0001017c) bg_popup_fep_shadow_pane_g3

0x534f,	// (0x00010184) bg_popup_fep_shadow_pane_g4

0x5358,	// (0x0001018d) bg_popup_fep_shadow_pane_g5

0x5360,	// (0x00010195) bg_popup_fep_shadow_pane_g6

0x5368,	// (0x0001019d) bg_popup_fep_shadow_pane_g7

0x710a,	// (0x00011f3f) bg_popup_fep_shadow_pane_g8

0xb07a,	// (0x00015eaf) grid_vkb_keypad_number_pane_ParamLimits

0xb07a,	// (0x00015eaf) grid_vkb_keypad_number_pane

0xb08a,	// (0x00015ebf) grid_vkb_keypad_pane_ParamLimits

0xb08a,	// (0x00015ebf) grid_vkb_keypad_pane

0xb0b0,	// (0x00015ee5) fep_vkb_bottom_pane_g1_ParamLimits

0xb0b0,	// (0x00015ee5) fep_vkb_bottom_pane_g1

0xb0d9,	// (0x00015f0e) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xb0d9,	// (0x00015f0e) grid_vkb_keypad_bottom_left_pane

0xb0ee,	// (0x00015f23) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xb0ee,	// (0x00015f23) grid_vkb_keypad_bottom_right_pane

0xb103,	// (0x00015f38) fep_vkb_top_text_pane_g1

0x20d6,	// (0x0000cf0b) fep_vkb_top_text_pane_t1

0x20e8,	// (0x0000cf1d) cell_vkb_side_pane_ParamLimits

0x20e8,	// (0x0000cf1d) cell_vkb_side_pane

0xad89,	// (0x00015bbe) cell_vkb_side_pane_g1

0xb172,	// (0x00015fa7) cell_vkb_keypad_pane_ParamLimits

0xb172,	// (0x00015fa7) cell_vkb_keypad_pane

0xb1df,	// (0x00016014) cell_vkb_keypad_pane_g1

0x0008,

0xfb23,	// (0x0001a958) bg_popup_fep_shadow_pane_g

0x5378,	// (0x000101ad) cell_hwr_side_pane_g1

0x5378,	// (0x000101ad) cell_hwr_side_pane_g2

0xb1e9,	// (0x0001601e) cell_vkb_keypad_pane_t1

0x20fe,	// (0x0000cf33) cell_vkb_keypad_bottom_left_pane_ParamLimits

0x20fe,	// (0x0000cf33) cell_vkb_keypad_bottom_left_pane

0x2113,	// (0x0000cf48) cell_vkb_keypad_bottom_right_pane_ParamLimits

0x2113,	// (0x0000cf48) cell_vkb_keypad_bottom_right_pane

0xad89,	// (0x00015bbe) cell_vkb_keypad_bottom_left_pane_g1

0xad89,	// (0x00015bbe) cell_vkb_keypad_bottom_right_pane_g1

0xb24d,	// (0x00016082) cell_vkb_keypad_number_pane_ParamLimits

0xb24d,	// (0x00016082) cell_vkb_keypad_number_pane

0xb26c,	// (0x000160a1) cell_vkb_keypad_number_pane_g1

0xb276,	// (0x000160ab) cell_vkb_keypad_number_pane_g2

0xb27f,	// (0x000160b4) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb15,	// (0x0001a94a) cell_vkb_keypad_number_pane_g

0xb1e9,	// (0x0001601e) cell_vkb_keypad_number_pane_t1

0xb2a1,	// (0x000160d6) fep_vkb_candidate_pane_g1

0x0001,

0xfb36,	// (0x0001a96b) cell_hwr_side_pane_g

0xb2ba,	// (0x000160ef) cell_hwr_side_pane_t1

0x5382,	// (0x000101b7) cell_hwr_side_pane_t1_copy1

0x5390,	// (0x000101c5) cell_hwr_candidate_pane_g1

0x53bf,	// (0x000101f4) cell_hwr_candidate_pane_t1

0xad89,	// (0x00015bbe) cell_vkb_candidate_pane_g2

0xb2fe,	// (0x00016133) cell_vkb_candidate_pane_t1

0x513d,	// (0x0000ff72) bg_popup_fep_shadow_pane_ParamLimits

0x513d,	// (0x0000ff72) bg_popup_fep_shadow_pane

0x51ec,	// (0x00010021) bg_fep_hwr_top_pane_g4

0xae06,	// (0x00015c3b) bg_hwr_side_pane_g1_ParamLimits

0xae06,	// (0x00015c3b) bg_hwr_side_pane_g1

0xe2e8,	// (0x0001911d) cell_hwr_side_pane_ParamLimits

0xe2e8,	// (0x0001911d) cell_hwr_side_pane

0x5298,	// (0x000100cd) fep_hwr_write_pane_g1_ParamLimits

0x5298,	// (0x000100cd) fep_hwr_write_pane_g1

0x52a5,	// (0x000100da) fep_hwr_write_pane_g2_ParamLimits

0x52a5,	// (0x000100da) fep_hwr_write_pane_g2

0x52b2,	// (0x000100e7) fep_hwr_write_pane_g3_ParamLimits

0x52b2,	// (0x000100e7) fep_hwr_write_pane_g3

0xe308,	// (0x0001913d) fep_hwr_write_pane_g4_ParamLimits

0xe308,	// (0x0001913d) fep_hwr_write_pane_g4

0x0005,

0xfae2,	// (0x0001a917) fep_hwr_write_pane_g_ParamLimits

0xfae2,	// (0x0001a917) fep_hwr_write_pane_g

0x51ec,	// (0x00010021) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x51ec,	// (0x00010021) bg_fep_hwr_candidate_pane_g2

0x52d5,	// (0x0001010a) cell_hwr_candidate_pane_ParamLimits

0x52d5,	// (0x0001010a) cell_hwr_candidate_pane

0x530f,	// (0x00010144) fep_hwr_candidate_pane_g1_ParamLimits

0xae66,	// (0x00015c9b) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xae66,	// (0x00015c9b) bg_popup_fep_shadow_pane_cp2

0xafc1,	// (0x00015df6) fep_vkb_top_pane_g4_ParamLimits

0xafc1,	// (0x00015df6) fep_vkb_top_pane_g4

0xb007,	// (0x00015e3c) fep_vkb_side_pane_g2_ParamLimits

0xb007,	// (0x00015e3c) fep_vkb_side_pane_g2

0x0720,	// (0x0000b555) list_setting_pane_t4_ParamLimits

0x0720,	// (0x0000b555) list_setting_pane_t4

0x079a,	// (0x0000b5cf) list_setting_number_pane_t5_ParamLimits

0x079a,	// (0x0000b5cf) list_setting_number_pane_t5

0x0ac5,	// (0x0000b8fa) list_double_heading_pane_cp2_ParamLimits

0x0ac5,	// (0x0000b8fa) list_double_heading_pane_cp2

0x7c2e,	// (0x00012a63) list_double_heading_pane_g1_cp2_ParamLimits

0x7c2e,	// (0x00012a63) list_double_heading_pane_g1_cp2

0xb30c,	// (0x00016141) list_double_heading_pane_g2_cp2_ParamLimits

0xb30c,	// (0x00016141) list_double_heading_pane_g2_cp2

0xb320,	// (0x00016155) list_double_heading_pane_t1_cp2_ParamLimits

0xb320,	// (0x00016155) list_double_heading_pane_t1_cp2

0xb336,	// (0x0001616b) list_double_heading_pane_t2_cp2_ParamLimits

0xb336,	// (0x0001616b) list_double_heading_pane_t2_cp2

0x60ec,	// (0x00010f21) aid_value_unit2

0x40a4,	// (0x0000eed9) popup_preview_fixed_window

0x657b,	// (0x000113b0) bg_popup_preview_window_pane_cp02

0xb348,	// (0x0001617d) list_preview_fixed_pane

0xb38e,	// (0x000161c3) list_empty_pane_fp_ParamLimits

0xb38e,	// (0x000161c3) list_empty_pane_fp

0xb38e,	// (0x000161c3) list_single_cale_day_pane_fp_ParamLimits

0xb38e,	// (0x000161c3) list_single_cale_day_pane_fp

0xb38e,	// (0x000161c3) list_single_graphic_heading_pane_fp_ParamLimits

0xb38e,	// (0x000161c3) list_single_graphic_heading_pane_fp

0xb38e,	// (0x000161c3) list_single_graphic_pane_fp_ParamLimits

0xb38e,	// (0x000161c3) list_single_graphic_pane_fp

0xb38e,	// (0x000161c3) list_single_heading_pane_fp_ParamLimits

0xb38e,	// (0x000161c3) list_single_heading_pane_fp

0xb38e,	// (0x000161c3) list_single_pane_fp_ParamLimits

0xb38e,	// (0x000161c3) list_single_pane_fp

0xb3a2,	// (0x000161d7) list_single_pane_fp_g1_ParamLimits

0xb3a2,	// (0x000161d7) list_single_pane_fp_g1

0xb3ae,	// (0x000161e3) list_single_pane_fp_g2_ParamLimits

0xb3ae,	// (0x000161e3) list_single_pane_fp_g2

0xb3ba,	// (0x000161ef) list_single_pane_fp_g3_ParamLimits

0xb3ba,	// (0x000161ef) list_single_pane_fp_g3

0xb3ce,	// (0x00016203) list_single_pane_fp_g4_ParamLimits

0xb3ce,	// (0x00016203) list_single_pane_fp_g4

0x0003,

0xfb49,	// (0x0001a97e) list_single_pane_fp_g_ParamLimits

0xfb49,	// (0x0001a97e) list_single_pane_fp_g

0xb3da,	// (0x0001620f) list_single_pane_fp_t1_ParamLimits

0xb3da,	// (0x0001620f) list_single_pane_fp_t1

0xb3f1,	// (0x00016226) list_single_graphic_pane_fp_g1_ParamLimits

0xb3f1,	// (0x00016226) list_single_graphic_pane_fp_g1

0xb3a2,	// (0x000161d7) list_single_graphic_pane_fp_g2_ParamLimits

0xb3a2,	// (0x000161d7) list_single_graphic_pane_fp_g2

0xb3ae,	// (0x000161e3) list_single_graphic_pane_fp_g3_ParamLimits

0xb3ae,	// (0x000161e3) list_single_graphic_pane_fp_g3

0xb3ba,	// (0x000161ef) list_single_graphic_pane_fp_g4_ParamLimits

0xb3ba,	// (0x000161ef) list_single_graphic_pane_fp_g4

0xb3ce,	// (0x00016203) list_single_graphic_pane_fp_g5_ParamLimits

0xb3ce,	// (0x00016203) list_single_graphic_pane_fp_g5

0x0004,

0xfb52,	// (0x0001a987) list_single_graphic_pane_fp_g_ParamLimits

0xfb52,	// (0x0001a987) list_single_graphic_pane_fp_g

0xb3fd,	// (0x00016232) list_single_graphic_pane_fp_t1_ParamLimits

0xb3fd,	// (0x00016232) list_single_graphic_pane_fp_t1

0xb3f1,	// (0x00016226) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xb3f1,	// (0x00016226) list_single_graphic_heading_pane_fp_g1

0xb3a2,	// (0x000161d7) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xb3a2,	// (0x000161d7) list_single_graphic_heading_pane_fp_g2

0xb3ae,	// (0x000161e3) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xb3ae,	// (0x000161e3) list_single_graphic_heading_pane_fp_g3

0xb3ba,	// (0x000161ef) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xb3ba,	// (0x000161ef) list_single_graphic_heading_pane_fp_g4

0xb3ce,	// (0x00016203) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xb3ce,	// (0x00016203) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb52,	// (0x0001a987) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb52,	// (0x0001a987) list_single_graphic_heading_pane_fp_g

0xb413,	// (0x00016248) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xb413,	// (0x00016248) list_single_graphic_heading_pane_fp_t1

0xb429,	// (0x0001625e) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xb429,	// (0x0001625e) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb5d,	// (0x0001a992) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb5d,	// (0x0001a992) list_single_graphic_heading_pane_fp_t

0xb43b,	// (0x00016270) list_single_cale_day_pane_fp_g1_ParamLimits

0xb43b,	// (0x00016270) list_single_cale_day_pane_fp_g1

0xb473,	// (0x000162a8) list_single_cale_day_pane_fp_g2_ParamLimits

0xb473,	// (0x000162a8) list_single_cale_day_pane_fp_g2

0xb47f,	// (0x000162b4) list_single_cale_day_pane_fp_g3_ParamLimits

0xb47f,	// (0x000162b4) list_single_cale_day_pane_fp_g3

0xb4a7,	// (0x000162dc) list_single_cale_day_pane_fp_g4_ParamLimits

0xb4a7,	// (0x000162dc) list_single_cale_day_pane_fp_g4

0xb4cb,	// (0x00016300) list_single_cale_day_pane_fp_g5_ParamLimits

0xb4cb,	// (0x00016300) list_single_cale_day_pane_fp_g5

0x0004,

0xfb62,	// (0x0001a997) list_single_cale_day_pane_fp_g_ParamLimits

0xfb62,	// (0x0001a997) list_single_cale_day_pane_fp_g

0xb4ef,	// (0x00016324) list_single_cale_day_pane_fp_t1_ParamLimits

0xb4ef,	// (0x00016324) list_single_cale_day_pane_fp_t1

0xb515,	// (0x0001634a) list_single_cale_day_pane_fp_t2_ParamLimits

0xb515,	// (0x0001634a) list_single_cale_day_pane_fp_t2

0xb570,	// (0x000163a5) list_single_cale_day_pane_fp_t3_ParamLimits

0xb570,	// (0x000163a5) list_single_cale_day_pane_fp_t3

0x0002,

0xfb6d,	// (0x0001a9a2) list_single_cale_day_pane_fp_t_ParamLimits

0xfb6d,	// (0x0001a9a2) list_single_cale_day_pane_fp_t

0xb3a2,	// (0x000161d7) list_empty_pane_fp_g1_ParamLimits

0xb3a2,	// (0x000161d7) list_empty_pane_fp_g1

0xb589,	// (0x000163be) list_empty_pane_fp_t1

0xb597,	// (0x000163cc) list_empty_pane_fp_t2

0x0001,

0xfb74,	// (0x0001a9a9) list_empty_pane_fp_t

0xb3a2,	// (0x000161d7) list_single_heading_pane_fp_g1_ParamLimits

0xb3a2,	// (0x000161d7) list_single_heading_pane_fp_g1

0xb3ae,	// (0x000161e3) list_single_heading_pane_fp_g2_ParamLimits

0xb3ae,	// (0x000161e3) list_single_heading_pane_fp_g2

0xb3ba,	// (0x000161ef) list_single_heading_pane_fp_g3_ParamLimits

0xb3ba,	// (0x000161ef) list_single_heading_pane_fp_g3

0x0002,

0xfb79,	// (0x0001a9ae) list_single_heading_pane_fp_g_ParamLimits

0xfb79,	// (0x0001a9ae) list_single_heading_pane_fp_g

0xb5a5,	// (0x000163da) list_single_heading_pane_fp_t1_ParamLimits

0xb5a5,	// (0x000163da) list_single_heading_pane_fp_t1

0xb5b7,	// (0x000163ec) list_single_heading_pane_fp_t2_ParamLimits

0xb5b7,	// (0x000163ec) list_single_heading_pane_fp_t2

0x0001,

0xfb80,	// (0x0001a9b5) list_single_heading_pane_fp_t_ParamLimits

0xfb80,	// (0x0001a9b5) list_single_heading_pane_fp_t

0x7336,	// (0x0001216b) aid_size_cell_fast

0x64e2,	// (0x00011317) soft_indicator_pane_cp1_t1

0x7373,	// (0x000121a8) cell_app_pane_cp2_ParamLimits

0x7373,	// (0x000121a8) cell_app_pane_cp2

0x515f,	// (0x0000ff94) fep_hwr_candidate_drop_down_list_pane

0x5329,	// (0x0001015e) fep_hwr_candidate_pane_g3_ParamLimits

0x5329,	// (0x0001015e) fep_hwr_candidate_pane_g3

0x32f6,	// (0x0000e12b) fep_hwr_candidate_pane_g4_ParamLimits

0x32f6,	// (0x0000e12b) fep_hwr_candidate_pane_g4

0x0002,

0xfaef,	// (0x0001a924) fep_hwr_candidate_pane_g_ParamLimits

0xfaef,	// (0x0001a924) fep_hwr_candidate_pane_g

0xaeda,	// (0x00015d0f) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xaeda,	// (0x00015d0f) fep_vkb_candidate_drop_down_list_pane

0xb2a9,	// (0x000160de) fep_vkb_candidate_pane_g3

0xb2b1,	// (0x000160e6) fep_vkb_candidate_pane_g4

0x0002,

0xfb1c,	// (0x0001a951) fep_vkb_candidate_pane_g

0x5390,	// (0x000101c5) cell_hwr_candidate_pane_g1_ParamLimits

0x539e,	// (0x000101d3) cell_hwr_candidate_pane_g3_ParamLimits

0x539e,	// (0x000101d3) cell_hwr_candidate_pane_g3

0xe88e,	// (0x000196c3) cell_hwr_candidate_pane_g4_ParamLimits

0xe88e,	// (0x000196c3) cell_hwr_candidate_pane_g4

0x0002,

0xfb3b,	// (0x0001a970) cell_hwr_candidate_pane_g_ParamLimits

0xfb3b,	// (0x0001a970) cell_hwr_candidate_pane_g

0xb2c8,	// (0x000160fd) cell_vkb_candidate_pane_g3_ParamLimits

0xb2c8,	// (0x000160fd) cell_vkb_candidate_pane_g3

0xb2e3,	// (0x00016118) cell_vkb_candidate_pane_g4_ParamLimits

0xb2e3,	// (0x00016118) cell_vkb_candidate_pane_g4

0xb5cd,	// (0x00016402) cell_app_pane_cp2_g1_ParamLimits

0xb5cd,	// (0x00016402) cell_app_pane_cp2_g1

0xb5eb,	// (0x00016420) cell_app_pane_cp2_g2_ParamLimits

0xb5eb,	// (0x00016420) cell_app_pane_cp2_g2

0x0001,

0xfb85,	// (0x0001a9ba) cell_app_pane_cp2_g_ParamLimits

0xfb85,	// (0x0001a9ba) cell_app_pane_cp2_g

0xb5f7,	// (0x0001642c) cell_app_pane_cp2_t1_ParamLimits

0xb5f7,	// (0x0001642c) cell_app_pane_cp2_t1

0x6fcf,	// (0x00011e04) grid_highlight_pane_cp1_ParamLimits

0x6fcf,	// (0x00011e04) grid_highlight_pane_cp1

0x53dc,	// (0x00010211) cell_hwr_candidate_pane_cp1_ParamLimits

0x53dc,	// (0x00010211) cell_hwr_candidate_pane_cp1

0x5390,	// (0x000101c5) fep_hwr_candidate_drop_down_list_pane_g1

0x53fa,	// (0x0001022f) fep_hwr_candidate_drop_down_list_pane_g2

0x5407,	// (0x0001023c) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb8a,	// (0x0001a9bf) fep_hwr_candidate_drop_down_list_pane_g

0x5414,	// (0x00010249) fep_hwr_candidate_drop_down_list_scroll_pane

0x541d,	// (0x00010252) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x541d,	// (0x00010252) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x542a,	// (0x0001025f) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x542a,	// (0x0001025f) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x5437,	// (0x0001026c) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x5437,	// (0x0001026c) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x5444,	// (0x00010279) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x5444,	// (0x00010279) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x545f,	// (0x00010294) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x545f,	// (0x00010294) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x547a,	// (0x000102af) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x547a,	// (0x000102af) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x5495,	// (0x000102ca) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x5495,	// (0x000102ca) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x54b0,	// (0x000102e5) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x54b0,	// (0x000102e5) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb91,	// (0x0001a9c6) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb91,	// (0x0001a9c6) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x212e,	// (0x0000cf63) cell_vkb_candidate_pane_cp1_ParamLimits

0x212e,	// (0x0000cf63) cell_vkb_candidate_pane_cp1

0xafc1,	// (0x00015df6) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xafc1,	// (0x00015df6) fep_vkb_candidate_drop_down_list_pane_g1

0xb62c,	// (0x00016461) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xb62c,	// (0x00016461) fep_vkb_candidate_drop_down_list_pane_g2

0xb639,	// (0x0001646e) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xb639,	// (0x0001646e) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfba2,	// (0x0001a9d7) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfba2,	// (0x0001a9d7) fep_vkb_candidate_drop_down_list_pane_g

0xb646,	// (0x0001647b) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xb646,	// (0x0001647b) fep_vkb_candidate_drop_down_list_scroll_pane

0xb653,	// (0x00016488) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xb653,	// (0x00016488) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xb660,	// (0x00016495) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xb660,	// (0x00016495) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xb66c,	// (0x000164a1) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xb66c,	// (0x000164a1) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xb52e,	// (0x00016363) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xb52e,	// (0x00016363) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xb54f,	// (0x00016384) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xb54f,	// (0x00016384) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xb678,	// (0x000164ad) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xb678,	// (0x000164ad) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xb699,	// (0x000164ce) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xb699,	// (0x000164ce) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xb6ba,	// (0x000164ef) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xb6ba,	// (0x000164ef) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba9,	// (0x0001a9de) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba9,	// (0x0001a9de) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x009a,	// (0x0000aecf) title_pane_g1_ParamLimits

0x00b1,	// (0x0000aee6) title_pane_g2_ParamLimits

0xf529,	// (0x0001a35e) title_pane_g_ParamLimits

0x778d,	// (0x000125c2) aid_call2_pane

0x7795,	// (0x000125ca) aid_call_pane

0x779d,	// (0x000125d2) popup_clock_analogue_window_g1

0x779d,	// (0x000125d2) popup_clock_analogue_window_g2

0x437e,	// (0x0000f1b3) popup_clock_analogue_window_g3

0x4387,	// (0x0000f1bc) popup_clock_analogue_window_g4

0x610c,	// (0x00010f41) popup_clock_analogue_window_g5

0x0004,

0xf6ce,	// (0x0001a503) popup_clock_analogue_window_g

0x438f,	// (0x0000f1c4) popup_clock_analogue_window_t1

0x439d,	// (0x0000f1d2) clock_digital_number_pane_ParamLimits

0x439d,	// (0x0000f1d2) clock_digital_number_pane

0x43a9,	// (0x0000f1de) clock_digital_number_pane_cp02_ParamLimits

0x43a9,	// (0x0000f1de) clock_digital_number_pane_cp02

0x43b5,	// (0x0000f1ea) clock_digital_number_pane_cp03_ParamLimits

0x43b5,	// (0x0000f1ea) clock_digital_number_pane_cp03

0x43c1,	// (0x0000f1f6) clock_digital_number_pane_cp04_ParamLimits

0x43c1,	// (0x0000f1f6) clock_digital_number_pane_cp04

0x43cd,	// (0x0000f202) clock_digital_separator_pane_ParamLimits

0x43cd,	// (0x0000f202) clock_digital_separator_pane

0x43d9,	// (0x0000f20e) popup_clock_digital_window_t1_ParamLimits

0x43d9,	// (0x0000f20e) popup_clock_digital_window_t1

0x610c,	// (0x00010f41) clock_digital_number_pane_g1

0x610c,	// (0x00010f41) clock_digital_number_pane_g2

0x0001,

0xf6d9,	// (0x0001a50e) clock_digital_number_pane_g

0x610c,	// (0x00010f41) clock_digital_separator_pane_g1

0x610c,	// (0x00010f41) clock_digital_separator_pane_g2

0x0001,

0xf6d9,	// (0x0001a50e) clock_digital_separator_pane_g

0x147a,	// (0x0000c2af) aid_fill_nsta_ParamLimits

0x1591,	// (0x0000c3c6) indicator_nsta_pane_ParamLimits

0x83cd,	// (0x00013202) popup_clock_analogue_window

0x83cd,	// (0x00013202) popup_clock_digital_window

0x1f26,	// (0x0000cd5b) grid_indicator_nsta_pane_ParamLimits

0xa80e,	// (0x00015643) clock_nsta_pane_t2

0x0001,

0xfa6f,	// (0x0001a8a4) clock_nsta_pane_t

0x4342,	// (0x0000f177) aid_size_max_handle

0xda20,	// (0x00018855) aid_size_min_handle

0x7db9,	// (0x00012bee) editor_scroll_pane

0xb6d5,	// (0x0001650a) ex_editor_pane

0x72a6,	// (0x000120db) scroll_pane_cp13

0x6a6d,	// (0x000118a2) scroll_pane_cp14

0x77cc,	// (0x00012601) scroll_pane_cp36

0x0ad1,	// (0x0000b906) list_single_graphic_hl_pane_cp2_ParamLimits

0x0ad1,	// (0x0000b906) list_single_graphic_hl_pane_cp2

0x1d87,	// (0x0000cbbc) list_single_graphic_hl_pane_ParamLimits

0x1d87,	// (0x0000cbbc) list_single_graphic_hl_pane

0xb6dd,	// (0x00016512) aid_size_min_hl_cp1

0xb6e6,	// (0x0001651b) list_highlight_pane_cp34_ParamLimits

0xb6e6,	// (0x0001651b) list_highlight_pane_cp34

0xb6f7,	// (0x0001652c) list_single_graphic_hl_pane_g1_ParamLimits

0xb6f7,	// (0x0001652c) list_single_graphic_hl_pane_g1

0x214e,	// (0x0000cf83) list_single_graphic_hl_pane_g2_ParamLimits

0x214e,	// (0x0000cf83) list_single_graphic_hl_pane_g2

0x214e,	// (0x0000cf83) list_single_graphic_hl_pane_g3_ParamLimits

0x214e,	// (0x0000cf83) list_single_graphic_hl_pane_g3

0x6a81,	// (0x000118b6) list_single_graphic_hl_pane_g4_ParamLimits

0x6a81,	// (0x000118b6) list_single_graphic_hl_pane_g4

0x6ff5,	// (0x00011e2a) list_single_graphic_hl_pane_g5_ParamLimits

0x6ff5,	// (0x00011e2a) list_single_graphic_hl_pane_g5

0x0004,

0xfbba,	// (0x0001a9ef) list_single_graphic_hl_pane_g_ParamLimits

0xfbba,	// (0x0001a9ef) list_single_graphic_hl_pane_g

0x215a,	// (0x0000cf8f) list_single_graphic_hl_pane_t1_ParamLimits

0x215a,	// (0x0000cf8f) list_single_graphic_hl_pane_t1

0xb726,	// (0x0001655b) aid_size_min_hl_cp2

0xb72f,	// (0x00016564) list_highlight_pane_cp34_cp2_ParamLimits

0xb72f,	// (0x00016564) list_highlight_pane_cp34_cp2

0xb6f7,	// (0x0001652c) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xb6f7,	// (0x0001652c) list_single_graphic_hl_pane_g1_cp2

0xb73c,	// (0x00016571) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xb73c,	// (0x00016571) list_single_graphic_hl_pane_g2_cp2

0xb748,	// (0x0001657d) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xb748,	// (0x0001657d) list_single_graphic_hl_pane_g3_cp2

0x7c2e,	// (0x00012a63) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x7c2e,	// (0x00012a63) list_single_graphic_hl_pane_g4_cp2

0xb30c,	// (0x00016141) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xb30c,	// (0x00016141) list_single_graphic_hl_pane_g5_cp2

0xda4a,	// (0x0001887f) control_pane_g4_ParamLimits

0xda4a,	// (0x0001887f) control_pane_g4

0x8108,	// (0x00012f3d) bg_popup_sub_pane_cp10_ParamLimits

0xad93,	// (0x00015bc8) list_choice_list_pane_ParamLimits

0xada2,	// (0x00015bd7) scroll_pane_cp23

0x657b,	// (0x000113b0) bg_popup_preview_window_pane_cp02_ParamLimits

0xb348,	// (0x0001617d) list_preview_fixed_pane_ParamLimits

0xb35e,	// (0x00016193) list_preview_fixed_pane_cp_ParamLimits

0xb35e,	// (0x00016193) list_preview_fixed_pane_cp

0xb36a,	// (0x0001619f) popup_preview_fixed_window_g1_ParamLimits

0xb36a,	// (0x0001619f) popup_preview_fixed_window_g1

0xb376,	// (0x000161ab) popup_preview_fixed_window_g2_ParamLimits

0xb376,	// (0x000161ab) popup_preview_fixed_window_g2

0x0002,

0xfb42,	// (0x0001a977) popup_preview_fixed_window_g_ParamLimits

0xfb42,	// (0x0001a977) popup_preview_fixed_window_g

0x42d2,	// (0x0000f107) aid_navi_side_left_pane_ParamLimits

0x42e2,	// (0x0000f117) aid_navi_side_right_pane_ParamLimits

0x42f1,	// (0x0000f126) navi_icon_pane_stacon_ParamLimits

0x4301,	// (0x0000f136) navi_navi_pane_stacon_ParamLimits

0x42f1,	// (0x0000f126) navi_text_pane_stacon_ParamLimits

0x3f85,	// (0x0000edba) main_text_info_pane

0xb76a,	// (0x0001659f) listscroll_text_info_pane

0xb772,	// (0x000165a7) list_text_info_pane_ParamLimits

0xb772,	// (0x000165a7) list_text_info_pane

0xb781,	// (0x000165b6) scroll_pane_cp24_ParamLimits

0xb781,	// (0x000165b6) scroll_pane_cp24

0x2170,	// (0x0000cfa5) list_text_info_pane_t1_ParamLimits

0x2170,	// (0x0000cfa5) list_text_info_pane_t1

0xdb91,	// (0x000189c6) popup_fast_swap2_window_ParamLimits

0xdb91,	// (0x000189c6) popup_fast_swap2_window

0xb7bc,	// (0x000165f1) aid_size_cell_fast2

0x6102,	// (0x00010f37) bg_popup_window_pane_cp17

0x8acb,	// (0x00013900) heading_pane_cp2

0x8ad3,	// (0x00013908) listscroll_fast2_pane

0xb7c6,	// (0x000165fb) grid_fast2_pane

0xb7ce,	// (0x00016603) listscroll_fast2_pane_g1

0xb7d6,	// (0x0001660b) listscroll_fast2_pane_g2

0x0001,

0xfbc5,	// (0x0001a9fa) listscroll_fast2_pane_g

0x72a6,	// (0x000120db) scroll_pane_cp26

0xb7de,	// (0x00016613) cell_fast2_pane_ParamLimits

0xb7de,	// (0x00016613) cell_fast2_pane

0xb7f4,	// (0x00016629) cell_fast2_pane_g1

0xb7fd,	// (0x00016632) cell_fast2_pane_g2

0xb806,	// (0x0001663b) cell_fast2_pane_g3

0x0002,

0xfbca,	// (0x0001a9ff) cell_fast2_pane_g

0x68c6,	// (0x000116fb) grid_highlight_pane_cp9

0x4796,	// (0x0000f5cb) main_eswt_pane_ParamLimits

0x4796,	// (0x0000f5cb) main_eswt_pane

0xb796,	// (0x000165cb) list_single_text_info_pane

0xb80e,	// (0x00016643) eswt_ctrl_button_pane

0xb80e,	// (0x00016643) eswt_ctrl_canvas_pane

0xb816,	// (0x0001664b) eswt_ctrl_combo_pane

0xb80e,	// (0x00016643) eswt_ctrl_default_pane

0xb80e,	// (0x00016643) eswt_ctrl_label_pane

0xb81e,	// (0x00016653) eswt_ctrl_wait_pane

0xb826,	// (0x0001665b) eswt_shell_pane

0x6102,	// (0x00010f37) listscroll_eswt_app_pane

0xb842,	// (0x00016677) popup_eswt_tasktip_window_ParamLimits

0xb842,	// (0x00016677) popup_eswt_tasktip_window

0x871d,	// (0x00013552) bg_popup_window_pane_cp18

0xb853,	// (0x00016688) eswt_control_pane_g1_ParamLimits

0xb853,	// (0x00016688) eswt_control_pane_g1

0xb860,	// (0x00016695) eswt_control_pane_g2_ParamLimits

0xb860,	// (0x00016695) eswt_control_pane_g2

0xb86d,	// (0x000166a2) eswt_control_pane_g3_ParamLimits

0xb86d,	// (0x000166a2) eswt_control_pane_g3

0xb87a,	// (0x000166af) eswt_control_pane_g4_ParamLimits

0xb87a,	// (0x000166af) eswt_control_pane_g4

0x0003,

0xfbd1,	// (0x0001aa06) eswt_control_pane_g_ParamLimits

0xfbd1,	// (0x0001aa06) eswt_control_pane_g

0x6fcf,	// (0x00011e04) bg_button_pane_ParamLimits

0x6fcf,	// (0x00011e04) bg_button_pane

0x68db,	// (0x00011710) common_borders_pane_copy2_ParamLimits

0x68db,	// (0x00011710) common_borders_pane_copy2

0xb887,	// (0x000166bc) control_button_pane_g1_ParamLimits

0xb887,	// (0x000166bc) control_button_pane_g1

0xb893,	// (0x000166c8) control_button_pane_g2_ParamLimits

0xb893,	// (0x000166c8) control_button_pane_g2

0xb89f,	// (0x000166d4) control_button_pane_g3_ParamLimits

0xb89f,	// (0x000166d4) control_button_pane_g3

0x0002,

0xfbda,	// (0x0001aa0f) control_button_pane_g_ParamLimits

0xfbda,	// (0x0001aa0f) control_button_pane_g

0xb8b3,	// (0x000166e8) control_button_pane_t1

0xb8c1,	// (0x000166f6) control_button_pane_t2

0x0001,

0xfbe1,	// (0x0001aa16) control_button_pane_t

0x8605,	// (0x0001343a) bg_button_pane_g1

0x8615,	// (0x0001344a) bg_button_pane_g2

0x860d,	// (0x00013442) bg_button_pane_g3

0x8625,	// (0x0001345a) bg_button_pane_g4

0x861d,	// (0x00013452) bg_button_pane_g5

0x862d,	// (0x00013462) bg_button_pane_g6

0x8635,	// (0x0001346a) bg_button_pane_g7

0x8645,	// (0x0001347a) bg_button_pane_g8

0x863d,	// (0x00013472) bg_button_pane_g9

0x0008,

0xf830,	// (0x0001a665) bg_button_pane_g

0xad4e,	// (0x00015b83) common_borders_pane_ParamLimits

0xad4e,	// (0x00015b83) common_borders_pane

0xb853,	// (0x00016688) eswt_control_pane_g1_copy1_ParamLimits

0xb853,	// (0x00016688) eswt_control_pane_g1_copy1

0xb860,	// (0x00016695) eswt_control_pane_g2_copy1_ParamLimits

0xb860,	// (0x00016695) eswt_control_pane_g2_copy1

0xb86d,	// (0x000166a2) eswt_control_pane_g3_copy1_ParamLimits

0xb86d,	// (0x000166a2) eswt_control_pane_g3_copy1

0xb87a,	// (0x000166af) eswt_control_pane_g4_copy1_ParamLimits

0xb87a,	// (0x000166af) eswt_control_pane_g4_copy1

0xad89,	// (0x00015bbe) bg_eswt_ctrl_canvas_pane_g1

0xad4e,	// (0x00015b83) common_borders_pane_cp2_ParamLimits

0xad4e,	// (0x00015b83) common_borders_pane_cp2

0xad4e,	// (0x00015b83) common_borders_pane_cp3_ParamLimits

0xad4e,	// (0x00015b83) common_borders_pane_cp3

0xb8cf,	// (0x00016704) separator_horizontal_pane

0x75da,	// (0x0001240f) separator_vertical_pane

0xb853,	// (0x00016688) eswt_control_pane_g1_copy2_ParamLimits

0xb853,	// (0x00016688) eswt_control_pane_g1_copy2

0xb860,	// (0x00016695) eswt_control_pane_g2_copy2_ParamLimits

0xb860,	// (0x00016695) eswt_control_pane_g2_copy2

0xb86d,	// (0x000166a2) eswt_control_pane_g3_copy2_ParamLimits

0xb86d,	// (0x000166a2) eswt_control_pane_g3_copy2

0xb87a,	// (0x000166af) eswt_control_pane_g4_copy2_ParamLimits

0xb87a,	// (0x000166af) eswt_control_pane_g4_copy2

0x6102,	// (0x00010f37) common_borders_pane_cp4

0xb8d7,	// (0x0001670c) separator_horizontal_pane_g1

0xb8e0,	// (0x00016715) separator_horizontal_pane_g2

0xb8e9,	// (0x0001671e) separator_horizontal_pane_g3

0x0002,

0xfbe6,	// (0x0001aa1b) separator_horizontal_pane_g

0xb853,	// (0x00016688) eswt_control_pane_g1_copy3_ParamLimits

0xb853,	// (0x00016688) eswt_control_pane_g1_copy3

0xb860,	// (0x00016695) eswt_control_pane_g2_copy3_ParamLimits

0xb860,	// (0x00016695) eswt_control_pane_g2_copy3

0xb86d,	// (0x000166a2) eswt_control_pane_g3_copy3_ParamLimits

0xb86d,	// (0x000166a2) eswt_control_pane_g3_copy3

0xb87a,	// (0x000166af) eswt_control_pane_g4_copy3_ParamLimits

0xb87a,	// (0x000166af) eswt_control_pane_g4_copy3

0x6102,	// (0x00010f37) common_borders_pane_cp5

0xb8f2,	// (0x00016727) separator_vertical_pane_g1

0xb8fb,	// (0x00016730) separator_vertical_pane_g2

0xb904,	// (0x00016739) separator_vertical_pane_g3

0x0002,

0xfbed,	// (0x0001aa22) separator_vertical_pane_g

0xb853,	// (0x00016688) eswt_control_pane_g1_copy4_ParamLimits

0xb853,	// (0x00016688) eswt_control_pane_g1_copy4

0xb860,	// (0x00016695) eswt_control_pane_g2_copy4_ParamLimits

0xb860,	// (0x00016695) eswt_control_pane_g2_copy4

0xb86d,	// (0x000166a2) eswt_control_pane_g3_copy4_ParamLimits

0xb86d,	// (0x000166a2) eswt_control_pane_g3_copy4

0xb87a,	// (0x000166af) eswt_control_pane_g4_copy4_ParamLimits

0xb87a,	// (0x000166af) eswt_control_pane_g4_copy4

0x218b,	// (0x0000cfc0) eswt_ctrl_combo_button_pane

0x2193,	// (0x0000cfc8) eswt_ctrl_input_pane

0x219b,	// (0x0000cfd0) popup_choice_list_window_cp70

0x21a3,	// (0x0000cfd8) eswt_ctrl_input_pane_t1

0x6102,	// (0x00010f37) input_focus_pane_cp70

0xad4e,	// (0x00015b83) bg_button_pane_cp70_ParamLimits

0xad4e,	// (0x00015b83) bg_button_pane_cp70

0x9f6c,	// (0x00014da1) eswt_ctrl_combo_button_pane_g1

0xb93b,	// (0x00016770) wait_bar_pane_cp70

0x871d,	// (0x00013552) bg_popup_window_pane_cp70_ParamLimits

0x871d,	// (0x00013552) bg_popup_window_pane_cp70

0xb943,	// (0x00016778) popup_eswt_tasktip_window_t1

0xb959,	// (0x0001678e) wait_bar_pane_cp71_ParamLimits

0xb959,	// (0x0001678e) wait_bar_pane_cp71

0xb965,	// (0x0001679a) grid_eswt_app_pane

0x75d1,	// (0x00012406) scroll_pane_cp70

0x21b1,	// (0x0000cfe6) cell_eswt_app_pane_ParamLimits

0x21b1,	// (0x0000cfe6) cell_eswt_app_pane

0x21d9,	// (0x0000d00e) cell_eswt_app_pane_g1_ParamLimits

0x21d9,	// (0x0000d00e) cell_eswt_app_pane_g1

0x2208,	// (0x0000d03d) cell_eswt_app_pane_g2_ParamLimits

0x2208,	// (0x0000d03d) cell_eswt_app_pane_g2

0x0001,

0xfbf4,	// (0x0001aa29) cell_eswt_app_pane_g_ParamLimits

0xfbf4,	// (0x0001aa29) cell_eswt_app_pane_g

0x2231,	// (0x0000d066) cell_eswt_app_pane_t1_ParamLimits

0x2231,	// (0x0000d066) cell_eswt_app_pane_t1

0xba20,	// (0x00016855) grid_highlight_pane_cp70_ParamLimits

0xba20,	// (0x00016855) grid_highlight_pane_cp70

0x6a81,	// (0x000118b6) set_content_pane_g1

0x8054,	// (0x00012e89) status_small_volume_pane

0x54cb,	// (0x00010300) status_small_volume_pane_g1

0x54d3,	// (0x00010308) volume_small2_pane

0x54dc,	// (0x00010311) volume_small2_pane_g1

0x54e5,	// (0x0001031a) volume_small2_pane_g2

0x54ee,	// (0x00010323) volume_small2_pane_g3

0x54f7,	// (0x0001032c) volume_small2_pane_g4

0x5500,	// (0x00010335) volume_small2_pane_g5

0x5509,	// (0x0001033e) volume_small2_pane_g6

0x5512,	// (0x00010347) volume_small2_pane_g7

0x551b,	// (0x00010350) volume_small2_pane_g8

0x5524,	// (0x00010359) volume_small2_pane_g9

0x552d,	// (0x00010362) volume_small2_pane_g10

0x0009,

0xfbf9,	// (0x0001aa2e) volume_small2_pane_g

0xb103,	// (0x00015f38) fep_vkb_top_text_pane_g1_ParamLimits

0x20d6,	// (0x0000cf0b) fep_vkb_top_text_pane_t1_ParamLimits

0xb382,	// (0x000161b7) popup_preview_fixed_window_g3_ParamLimits

0xb382,	// (0x000161b7) popup_preview_fixed_window_g3

0xe0b1,	// (0x00018ee6) popup_toolbar_trans_pane

0x99ba,	// (0x000147ef) aid_height_set_list_ParamLimits

0x99c6,	// (0x000147fb) aid_size_parent_ParamLimits

0x8108,	// (0x00012f3d) list_highlight_pane_cp2_ParamLimits

0x6a81,	// (0x000118b6) set_content_pane_g1_ParamLimits

0x7373,	// (0x000121a8) list_single_image_pane_ParamLimits

0x7373,	// (0x000121a8) list_single_image_pane

0x2263,	// (0x0000d098) aid_size_cell_image_ParamLimits

0x2263,	// (0x0000d098) aid_size_cell_image

0x2270,	// (0x0000d0a5) grid_single_image_pane_ParamLimits

0x2270,	// (0x0000d0a5) grid_single_image_pane

0x6a81,	// (0x000118b6) list_single_image_pane_g1_ParamLimits

0x6a81,	// (0x000118b6) list_single_image_pane_g1

0x6ff5,	// (0x00011e2a) list_single_image_pane_g2_ParamLimits

0x6ff5,	// (0x00011e2a) list_single_image_pane_g2

0x0001,

0xfc0e,	// (0x0001aa43) list_single_image_pane_g_ParamLimits

0xfc0e,	// (0x0001aa43) list_single_image_pane_g

0x9b49,	// (0x0001497e) list_single_image_pane_t1_ParamLimits

0x9b49,	// (0x0001497e) list_single_image_pane_t1

0x227e,	// (0x0000d0b3) cell_image_list_pane_ParamLimits

0x227e,	// (0x0000d0b3) cell_image_list_pane

0x2292,	// (0x0000d0c7) cell_image_list_pane_g1

0x229b,	// (0x0000d0d0) cell_image_list_pane_g2

0x0001,

0xfc13,	// (0x0001aa48) cell_image_list_pane_g

0xba6a,	// (0x0001689f) aid_size_cell_tb_trans_pane

0x6fcf,	// (0x00011e04) bg_tb_trans_pane

0xba7c,	// (0x000168b1) grid_tb_trans_pane

0x8605,	// (0x0001343a) bg_tb_trans_pane_g1

0x8615,	// (0x0001344a) bg_tb_trans_pane_g2

0x860d,	// (0x00013442) bg_tb_trans_pane_g3

0x8625,	// (0x0001345a) bg_tb_trans_pane_g4

0x861d,	// (0x00013452) bg_tb_trans_pane_g5

0x8645,	// (0x0001347a) bg_tb_trans_pane_g6

0x863d,	// (0x00013472) bg_tb_trans_pane_g7

0x862d,	// (0x00013462) bg_tb_trans_pane_g8

0x8635,	// (0x0001346a) bg_tb_trans_pane_g9

0x0008,

0xfc18,	// (0x0001aa4d) bg_tb_trans_pane_g

0xba90,	// (0x000168c5) cell_toolbar_trans_pane_ParamLimits

0xba90,	// (0x000168c5) cell_toolbar_trans_pane

0xad89,	// (0x00015bbe) cell_toolbar_trans_pane_g1

0x1fd3,	// (0x0000ce08) list_form2_midp_pane_t1

0x1fe1,	// (0x0000ce16) list_form2_midp_pane_t2

0x0001,

0xfab5,	// (0x0001a8ea) list_form2_midp_pane_t

0xa9ee,	// (0x00015823) scroll_pane_cp51_ParamLimits

0xabd3,	// (0x00015a08) form2_midp_wait_pane_g1

0xabdc,	// (0x00015a11) form2_midp_wait_pane_g2

0xabe5,	// (0x00015a1a) form2_midp_wait_pane_g3

0x0002,

0xfaca,	// (0x0001a8ff) form2_midp_wait_pane_g

0x62d3,	// (0x00011108) list_highlight_pane_cp21_ParamLimits

0xac23,	// (0x00015a58) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xac32,	// (0x00015a67) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x9b90,	// (0x000149c5) list_single_2graphic_im_pane_ParamLimits

0x9b90,	// (0x000149c5) list_single_2graphic_im_pane

0x22a4,	// (0x0000d0d9) list_single_2graphic_im_pane_g1_ParamLimits

0x22a4,	// (0x0000d0d9) list_single_2graphic_im_pane_g1

0x22b5,	// (0x0000d0ea) list_single_2graphic_im_pane_g2_ParamLimits

0x22b5,	// (0x0000d0ea) list_single_2graphic_im_pane_g2

0x22c1,	// (0x0000d0f6) list_single_2graphic_im_pane_g3_ParamLimits

0x22c1,	// (0x0000d0f6) list_single_2graphic_im_pane_g3

0x0003,

0xfc2b,	// (0x0001aa60) list_single_2graphic_im_pane_g_ParamLimits

0xfc2b,	// (0x0001aa60) list_single_2graphic_im_pane_g

0x22d5,	// (0x0000d10a) list_single_2graphic_im_pane_t1_ParamLimits

0x22d5,	// (0x0000d10a) list_single_2graphic_im_pane_t1

0xb38e,	// (0x000161c3) list_single_graphic_2heading_pane_fp_ParamLimits

0xb38e,	// (0x000161c3) list_single_graphic_2heading_pane_fp

0xb3f1,	// (0x00016226) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xb3f1,	// (0x00016226) list_single_graphic_2heading_pane_fp_g1

0xb3a2,	// (0x000161d7) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xb3a2,	// (0x000161d7) list_single_graphic_2heading_pane_fp_g2

0xb3ae,	// (0x000161e3) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xb3ae,	// (0x000161e3) list_single_graphic_2heading_pane_fp_g3

0xb3ba,	// (0x000161ef) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xb3ba,	// (0x000161ef) list_single_graphic_2heading_pane_fp_g4

0xb3ce,	// (0x00016203) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xb3ce,	// (0x00016203) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb52,	// (0x0001a987) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb52,	// (0x0001a987) list_single_graphic_2heading_pane_fp_g

0xbb24,	// (0x00016959) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xbb24,	// (0x00016959) list_single_graphic_2heading_pane_fp_t1

0xb429,	// (0x0001625e) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xb429,	// (0x0001625e) list_single_graphic_2heading_pane_fp_t2

0xbb3a,	// (0x0001696f) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xbb3a,	// (0x0001696f) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc34,	// (0x0001aa69) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc34,	// (0x0001aa69) list_single_graphic_2heading_pane_fp_t

0xae12,	// (0x00015c47) fep_hwr_write_pane_g5_ParamLimits

0xae12,	// (0x00015c47) fep_hwr_write_pane_g5

0xae1e,	// (0x00015c53) fep_hwr_write_pane_g6_ParamLimits

0xae1e,	// (0x00015c53) fep_hwr_write_pane_g6

0xb826,	// (0x0001665b) eswt_shell_pane_ParamLimits

0x871d,	// (0x00013552) bg_popup_window_pane_cp18_ParamLimits

0x992c,	// (0x00014761) heading_pane_cp70

0xb943,	// (0x00016778) popup_eswt_tasktip_window_t1_ParamLimits

0x14be,	// (0x0000c2f3) aid_touch_tab_arrow_left

0x14d2,	// (0x0000c307) aid_touch_tab_arrow_right

0x00d0,	// (0x0000af05) title_pane_g3_ParamLimits

0x00d0,	// (0x0000af05) title_pane_g3

0x6ecd,	// (0x00011d02) set_value_pane_g1

0xe0b1,	// (0x00018ee6) popup_toolbar_trans_pane_ParamLimits

0xba6a,	// (0x0001689f) aid_size_cell_tb_trans_pane_ParamLimits

0x6fcf,	// (0x00011e04) bg_tb_trans_pane_ParamLimits

0xba7c,	// (0x000168b1) grid_tb_trans_pane_ParamLimits

0x657b,	// (0x000113b0) cont_note_pane_ParamLimits

0x657b,	// (0x000113b0) cont_note_pane

0x68db,	// (0x00011710) cont_snote2_single_text_pane_ParamLimits

0x68db,	// (0x00011710) cont_snote2_single_text_pane

0x68db,	// (0x00011710) cont_snote2_single_graphic_pane_ParamLimits

0x68db,	// (0x00011710) cont_snote2_single_graphic_pane

0x8ce9,	// (0x00013b1e) cont_note_wait_pane_ParamLimits

0x8ce9,	// (0x00013b1e) cont_note_wait_pane

0x8ce9,	// (0x00013b1e) cont_note_image_pane_ParamLimits

0x8ce9,	// (0x00013b1e) cont_note_image_pane

0xbb50,	// (0x00016985) popup_note2_window_g1_ParamLimits

0xbb50,	// (0x00016985) popup_note2_window_g1

0xbb81,	// (0x000169b6) popup_note2_window_t1_ParamLimits

0xbb81,	// (0x000169b6) popup_note2_window_t1

0xbbc6,	// (0x000169fb) popup_note2_window_t2_ParamLimits

0xbbc6,	// (0x000169fb) popup_note2_window_t2

0xbc0b,	// (0x00016a40) popup_note2_window_t3_ParamLimits

0xbc0b,	// (0x00016a40) popup_note2_window_t3

0xbc50,	// (0x00016a85) popup_note2_window_t4_ParamLimits

0xbc50,	// (0x00016a85) popup_note2_window_t4

0x65ff,	// (0x00011434) popup_note2_window_t5_ParamLimits

0x65ff,	// (0x00011434) popup_note2_window_t5

0x0004,

0xfc40,	// (0x0001aa75) popup_note2_window_t_ParamLimits

0xfc40,	// (0x0001aa75) popup_note2_window_t

0xbc7f,	// (0x00016ab4) popup_note2_image_window_g1_ParamLimits

0xbc7f,	// (0x00016ab4) popup_note2_image_window_g1

0xbc8b,	// (0x00016ac0) popup_note2_image_window_g2_ParamLimits

0xbc8b,	// (0x00016ac0) popup_note2_image_window_g2

0x0001,

0xfc4b,	// (0x0001aa80) popup_note2_image_window_g_ParamLimits

0xfc4b,	// (0x0001aa80) popup_note2_image_window_g

0xbc9d,	// (0x00016ad2) popup_note2_image_window_t1_ParamLimits

0xbc9d,	// (0x00016ad2) popup_note2_image_window_t1

0xbcb5,	// (0x00016aea) popup_note2_image_window_t2_ParamLimits

0xbcb5,	// (0x00016aea) popup_note2_image_window_t2

0xbccd,	// (0x00016b02) popup_note2_image_window_t3_ParamLimits

0xbccd,	// (0x00016b02) popup_note2_image_window_t3

0x0002,

0xfc50,	// (0x0001aa85) popup_note2_image_window_t_ParamLimits

0xfc50,	// (0x0001aa85) popup_note2_image_window_t

0x8cf7,	// (0x00013b2c) popup_note2_wait_window_g1_ParamLimits

0x8cf7,	// (0x00013b2c) popup_note2_wait_window_g1

0x8d03,	// (0x00013b38) popup_note2_wait_window_g2_ParamLimits

0x8d03,	// (0x00013b38) popup_note2_wait_window_g2

0x8d0f,	// (0x00013b44) popup_note2_wait_window_g3_ParamLimits

0x8d0f,	// (0x00013b44) popup_note2_wait_window_g3

0x0002,

0xf812,	// (0x0001a647) popup_note2_wait_window_g_ParamLimits

0xf812,	// (0x0001a647) popup_note2_wait_window_g

0xbce9,	// (0x00016b1e) popup_note2_wait_window_t1_ParamLimits

0xbce9,	// (0x00016b1e) popup_note2_wait_window_t1

0xbd07,	// (0x00016b3c) popup_note2_wait_window_t2_ParamLimits

0xbd07,	// (0x00016b3c) popup_note2_wait_window_t2

0xbd25,	// (0x00016b5a) popup_note2_wait_window_t3_ParamLimits

0xbd25,	// (0x00016b5a) popup_note2_wait_window_t3

0xbd37,	// (0x00016b6c) popup_note2_wait_window_t4_ParamLimits

0xbd37,	// (0x00016b6c) popup_note2_wait_window_t4

0x0003,

0xfc57,	// (0x0001aa8c) popup_note2_wait_window_t_ParamLimits

0xfc57,	// (0x0001aa8c) popup_note2_wait_window_t

0xbd49,	// (0x00016b7e) wait_bar2_pane_ParamLimits

0xbd49,	// (0x00016b7e) wait_bar2_pane

0xbd61,	// (0x00016b96) popup_snote2_single_text_window_g1_ParamLimits

0xbd61,	// (0x00016b96) popup_snote2_single_text_window_g1

0xbd89,	// (0x00016bbe) popup_snote2_single_text_window_t1_ParamLimits

0xbd89,	// (0x00016bbe) popup_snote2_single_text_window_t1

0xbdd5,	// (0x00016c0a) popup_snote2_single_text_window_t2_ParamLimits

0xbdd5,	// (0x00016c0a) popup_snote2_single_text_window_t2

0xbe21,	// (0x00016c56) popup_snote2_single_text_window_t3_ParamLimits

0xbe21,	// (0x00016c56) popup_snote2_single_text_window_t3

0xbe62,	// (0x00016c97) popup_snote2_single_text_window_t4_ParamLimits

0xbe62,	// (0x00016c97) popup_snote2_single_text_window_t4

0xbe98,	// (0x00016ccd) popup_snote2_single_text_window_t5_ParamLimits

0xbe98,	// (0x00016ccd) popup_snote2_single_text_window_t5

0x0004,

0xfc60,	// (0x0001aa95) popup_snote2_single_text_window_t_ParamLimits

0xfc60,	// (0x0001aa95) popup_snote2_single_text_window_t

0xbec3,	// (0x00016cf8) popup_snote2_single_graphic_window_g1_ParamLimits

0xbec3,	// (0x00016cf8) popup_snote2_single_graphic_window_g1

0xbeeb,	// (0x00016d20) popup_snote2_single_graphic_window_g2_ParamLimits

0xbeeb,	// (0x00016d20) popup_snote2_single_graphic_window_g2

0x0001,

0xfc6b,	// (0x0001aaa0) popup_snote2_single_graphic_window_g_ParamLimits

0xfc6b,	// (0x0001aaa0) popup_snote2_single_graphic_window_g

0xbf13,	// (0x00016d48) popup_snote2_single_graphic_window_t1_ParamLimits

0xbf13,	// (0x00016d48) popup_snote2_single_graphic_window_t1

0xbf5f,	// (0x00016d94) popup_snote2_single_graphic_window_t2_ParamLimits

0xbf5f,	// (0x00016d94) popup_snote2_single_graphic_window_t2

0xbe21,	// (0x00016c56) popup_snote2_single_graphic_window_t3_ParamLimits

0xbe21,	// (0x00016c56) popup_snote2_single_graphic_window_t3

0xbe62,	// (0x00016c97) popup_snote2_single_graphic_window_t4_ParamLimits

0xbe62,	// (0x00016c97) popup_snote2_single_graphic_window_t4

0xbe98,	// (0x00016ccd) popup_snote2_single_graphic_window_t5_ParamLimits

0xbe98,	// (0x00016ccd) popup_snote2_single_graphic_window_t5

0x0004,

0xfc70,	// (0x0001aaa5) popup_snote2_single_graphic_window_t_ParamLimits

0xfc70,	// (0x0001aaa5) popup_snote2_single_graphic_window_t

0xa8c4,	// (0x000156f9) clock_nsta_pane_cp2_t1

0xa8c4,	// (0x000156f9) clock_nsta_pane_cp2_t2

0x0001,

0xfa8b,	// (0x0001a8c0) clock_nsta_pane_cp2_t

0x6fe9,	// (0x00011e1e) form_field_data_wide_pane_g1_ParamLimits

0x6a81,	// (0x000118b6) form_field_data_wide_pane_g2_ParamLimits

0x6a81,	// (0x000118b6) form_field_data_wide_pane_g2

0x6ff5,	// (0x00011e2a) form_field_data_wide_pane_g3_ParamLimits

0x6ff5,	// (0x00011e2a) form_field_data_wide_pane_g3

0x0002,

0xf651,	// (0x0001a486) form_field_data_wide_pane_g_ParamLimits

0xf651,	// (0x0001a486) form_field_data_wide_pane_g

0x1f10,	// (0x0000cd45) grid_touch_3_pane_ParamLimits

0x1f10,	// (0x0000cd45) grid_touch_3_pane

0x2306,	// (0x0000d13b) cell_touch_3_pane_ParamLimits

0x2306,	// (0x0000d13b) cell_touch_3_pane

0xad89,	// (0x00015bbe) cell_touch_3_pane_g1

0xad89,	// (0x00015bbe) cell_touch_3_pane_g2

0x0001,

0xfb10,	// (0x0001a945) cell_touch_3_pane_g

0x6657,	// (0x0001148c) cont_query_data_pane

0x665f,	// (0x00011494) cont_query_data_pane_cp1

0xbfd8,	// (0x00016e0d) button_value_adjust_pane_cp7

0xbfe0,	// (0x00016e15) query_popup_pane_cp3

0x7875,	// (0x000126aa) bg_popup_sub_pane_cp22_ParamLimits

0x43f8,	// (0x0000f22d) navi_navi_volume_pane_cp2

0x4410,	// (0x0000f245) popup_side_volume_key_window_g2

0x441c,	// (0x0000f251) popup_side_volume_key_window_g3

0x0002,

0xf6e7,	// (0x0001a51c) popup_side_volume_key_window_g

0x4436,	// (0x0000f26b) popup_side_volume_key_window_t2

0x0001,

0xf6ee,	// (0x0001a523) popup_side_volume_key_window_t

0x7ba8,	// (0x000129dd) popup_side_volume_key_window_ParamLimits

0x0588,	// (0x0000b3bd) list_double_graphic_pane_g4_ParamLimits

0x0588,	// (0x0000b3bd) list_double_graphic_pane_g4

0x1d72,	// (0x0000cba7) list_single_2heading_msg_pane_ParamLimits

0x1d72,	// (0x0000cba7) list_single_2heading_msg_pane

0x234d,	// (0x0000d182) list_single_2heading_msg_pane_g1_ParamLimits

0x234d,	// (0x0000d182) list_single_2heading_msg_pane_g1

0x2359,	// (0x0000d18e) list_single_2heading_msg_pane_g2_ParamLimits

0x2359,	// (0x0000d18e) list_single_2heading_msg_pane_g2

0x236c,	// (0x0000d1a1) list_single_2heading_msg_pane_g3_ParamLimits

0x236c,	// (0x0000d1a1) list_single_2heading_msg_pane_g3

0x2378,	// (0x0000d1ad) list_single_2heading_msg_pane_g4_ParamLimits

0x2378,	// (0x0000d1ad) list_single_2heading_msg_pane_g4

0x0003,

0xfc7b,	// (0x0001aab0) list_single_2heading_msg_pane_g_ParamLimits

0xfc7b,	// (0x0001aab0) list_single_2heading_msg_pane_g

0xc049,	// (0x00016e7e) list_single_2heading_msg_pane_t1_ParamLimits

0xc049,	// (0x00016e7e) list_single_2heading_msg_pane_t1

0x2390,	// (0x0000d1c5) list_single_2heading_msg_pane_t2_ParamLimits

0x2390,	// (0x0000d1c5) list_single_2heading_msg_pane_t2

0x23fb,	// (0x0000d230) list_single_2heading_msg_pane_t3_ParamLimits

0x23fb,	// (0x0000d230) list_single_2heading_msg_pane_t3

0xc0d9,	// (0x00016f0e) list_single_2heading_msg_pane_t4_ParamLimits

0xc0d9,	// (0x00016f0e) list_single_2heading_msg_pane_t4

0x0003,

0xfc84,	// (0x0001aab9) list_single_2heading_msg_pane_t_ParamLimits

0xfc84,	// (0x0001aab9) list_single_2heading_msg_pane_t

0x6227,	// (0x0001105c) title_pane_g4_ParamLimits

0x6227,	// (0x0001105c) title_pane_g4

0x4248,	// (0x0000f07d) title_pane_stacon_g3_ParamLimits

0x4248,	// (0x0000f07d) title_pane_stacon_g3

0xbae7,	// (0x0001691c) list_single_2graphic_im_pane_g4_ParamLimits

0xbae7,	// (0x0001691c) list_single_2graphic_im_pane_g4

0x96f3,	// (0x00014528) popup_side_volume_key_window_cp

0x9ec4,	// (0x00014cf9) main_idle_act2_pane_t1

0x4cc1,	// (0x0000faf6) toolbar_button_pane_g10

0x047a,	// (0x0000b2af) popup_toolbar_window_cp1

0xa8b5,	// (0x000156ea) clock_nsta_pane_cp_t1

0xa8b5,	// (0x000156ea) clock_nsta_pane_cp_t2

0x0001,

0xfa86,	// (0x0001a8bb) clock_nsta_pane_cp_t

0x43f8,	// (0x0000f22d) navi_navi_volume_pane_cp2_ParamLimits

0x4404,	// (0x0000f239) popup_side_volume_key_window_g1_ParamLimits

0x4410,	// (0x0000f245) popup_side_volume_key_window_g2_ParamLimits

0x441c,	// (0x0000f251) popup_side_volume_key_window_g3_ParamLimits

0xf6e7,	// (0x0001a51c) popup_side_volume_key_window_g_ParamLimits

0x514b,	// (0x0000ff80) fep_hwr_aid_pane

0x51ec,	// (0x00010021) bg_fep_hwr_top_pane_g4_ParamLimits

0xade2,	// (0x00015c17) fep_hwr_top_pane_g1_ParamLimits

0xadf4,	// (0x00015c29) fep_hwr_top_pane_g2_ParamLimits

0x520c,	// (0x00010041) fep_hwr_top_pane_g3_ParamLimits

0xfadb,	// (0x0001a910) fep_hwr_top_pane_g_ParamLimits

0x5221,	// (0x00010056) fep_hwr_top_text_pane_ParamLimits

0x94be,	// (0x000142f3) aid_touch_tab_arrow_arrow_2

0x94c7,	// (0x000142fc) aid_touch_tab_arrow_left_2

0x515f,	// (0x0000ff94) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x5192,	// (0x0000ffc7) fep_hwr_prediction_pane

0xaf33,	// (0x00015d68) fep_vkb_prediction_pane

0x20b6,	// (0x0000ceeb) fep_vkb_side_pane_g3_ParamLimits

0x20b6,	// (0x0000ceeb) fep_vkb_side_pane_g3

0x5390,	// (0x000101c5) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x53fa,	// (0x0001022f) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x5407,	// (0x0001023c) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb8a,	// (0x0001a9bf) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x5536,	// (0x0001036b) fep_hwr_prediction_pane_g1

0x5540,	// (0x00010375) fep_hwr_prediction_pane_g2

0x5548,	// (0x0001037d) fep_hwr_prediction_pane_g3

0x5550,	// (0x00010385) fep_hwr_prediction_pane_g4

0x0003,

0xfc8d,	// (0x0001aac2) fep_hwr_prediction_pane_g

0xc0fe,	// (0x00016f33) fep_vkb_prediction_pane_g1

0xc108,	// (0x00016f3d) fep_vkb_prediction_pane_g2

0xc110,	// (0x00016f45) fep_vkb_prediction_pane_g3

0xc118,	// (0x00016f4d) fep_vkb_prediction_pane_g4

0x0003,

0xfc96,	// (0x0001aacb) fep_vkb_prediction_pane_g

0x4f83,	// (0x0000fdb8) slider_set_pane_g3

0x4f97,	// (0x0000fdcc) slider_set_pane_g4

0x4faf,	// (0x0000fde4) slider_set_pane_g5

0x4f83,	// (0x0000fdb8) slider_set_pane_g6

0xe2ba,	// (0x000190ef) slider_set_pane_g7

0x9b0d,	// (0x00014942) slider_form_pane_g3

0x9b16,	// (0x0001494b) slider_form_pane_g4

0x9b1e,	// (0x00014953) slider_form_pane_g5

0x9b0d,	// (0x00014942) slider_form_pane_g6

0x1d2a,	// (0x0000cb5f) slider_form_pane_g7

0xa1ac,	// (0x00014fe1) slider_set_pane_vc_g3

0xa1b5,	// (0x00014fea) slider_set_pane_vc_g4

0xa1be,	// (0x00014ff3) slider_set_pane_vc_g5

0xa1ac,	// (0x00014fe1) slider_set_pane_vc_g6

0xa1c7,	// (0x00014ffc) slider_set_pane_vc_g7

0xa1ac,	// (0x00014fe1) slider_form_pane_vc_g1

0xa1b5,	// (0x00014fea) slider_form_pane_vc_g2

0xa1be,	// (0x00014ff3) slider_form_pane_vc_g3

0xa1ac,	// (0x00014fe1) slider_form_pane_vc_g4

0xa599,	// (0x000153ce) slider_form_pane_vc_g5

0x0004,

0xfa58,	// (0x0001a88d) slider_form_pane_vc_g

0x3f85,	// (0x0000edba) main_idle_act3_pane

0xc120,	// (0x00016f55) ai3_links_pane

0x2469,	// (0x0000d29e) popup_ai3_data_window_ParamLimits

0x2469,	// (0x0000d29e) popup_ai3_data_window

0x6102,	// (0x00010f37) grid_ai3_links_pane

0x2481,	// (0x0000d2b6) cell_ai3_links_pane_ParamLimits

0x2481,	// (0x0000d2b6) cell_ai3_links_pane

0xc155,	// (0x00016f8a) bg_popup_sub_pane_cp11

0xc162,	// (0x00016f97) cell_ai3_links_pane_g1

0x6102,	// (0x00010f37) bg_popup_sub_pane_cp12

0xc187,	// (0x00016fbc) heading_ai3_data_pane

0xc18f,	// (0x00016fc4) list_ai3_gene_pane

0xc19b,	// (0x00016fd0) popup_ai3_data_window_g1

0xc1a3,	// (0x00016fd8) heading_ai3_data_pane_g1

0xc1ab,	// (0x00016fe0) heading_ai3_data_pane_t1

0xc1b9,	// (0x00016fee) list_double_ai3_gene_pane_ParamLimits

0xc1b9,	// (0x00016fee) list_double_ai3_gene_pane

0xc1c6,	// (0x00016ffb) list_single_ai3_gene_pane_ParamLimits

0xc1c6,	// (0x00016ffb) list_single_ai3_gene_pane

0xad4e,	// (0x00015b83) list_highlight_pane_cp7_ParamLimits

0xad4e,	// (0x00015b83) list_highlight_pane_cp7

0xc1d3,	// (0x00017008) list_single_a13_gene_pane_t1_ParamLimits

0xc1d3,	// (0x00017008) list_single_a13_gene_pane_t1

0xc1ea,	// (0x0001701f) list_single_ai3_gene_pane_g1

0xc1f3,	// (0x00017028) list_single_ai3_gene_pane_g2

0x0001,

0xfc9f,	// (0x0001aad4) list_single_ai3_gene_pane_g

0xc1fb,	// (0x00017030) list_double_ai3_gene_pane_g1_ParamLimits

0xc1fb,	// (0x00017030) list_double_ai3_gene_pane_g1

0xc207,	// (0x0001703c) list_double_ai3_gene_pane_t1_ParamLimits

0xc207,	// (0x0001703c) list_double_ai3_gene_pane_t1

0xc223,	// (0x00017058) list_double_ai3_gene_pane_t2_ParamLimits

0xc223,	// (0x00017058) list_double_ai3_gene_pane_t2

0xc238,	// (0x0001706d) list_double_ai3_gene_pane_t3_ParamLimits

0xc238,	// (0x0001706d) list_double_ai3_gene_pane_t3

0x0002,

0xfca4,	// (0x0001aad9) list_double_ai3_gene_pane_t_ParamLimits

0xfca4,	// (0x0001aad9) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xbff1,	// (0x00016e26) aid_size_min_col_2

0x2339,	// (0x0000d16e) aid_size_min_msg_ParamLimits

0x2339,	// (0x0000d16e) aid_size_min_msg

0x20ca,	// (0x0000ceff) fep_vkb_top_text_pane_g2_ParamLimits

0x20ca,	// (0x0000ceff) fep_vkb_top_text_pane_g2

0x0001,

0xfb0b,	// (0x0001a940) fep_vkb_top_text_pane_g_ParamLimits

0xfb0b,	// (0x0001a940) fep_vkb_top_text_pane_g

0x3f85,	// (0x0000edba) main_hc_apps_shell_pane

0xc255,	// (0x0001708a) grid_hc_apps_pane_ParamLimits

0xc255,	// (0x0001708a) grid_hc_apps_pane

0xc267,	// (0x0001709c) list_hc_apps_pane

0xc26f,	// (0x000170a4) scroll_pane_cp37_ParamLimits

0xc26f,	// (0x000170a4) scroll_pane_cp37

0x2497,	// (0x0000d2cc) cell_hc_apps_pane_ParamLimits

0x2497,	// (0x0000d2cc) cell_hc_apps_pane

0x2531,	// (0x0000d366) cell_hc_apps_pane_g1_ParamLimits

0x2531,	// (0x0000d366) cell_hc_apps_pane_g1

0xc335,	// (0x0001716a) cell_hc_apps_pane_g2_ParamLimits

0xc335,	// (0x0001716a) cell_hc_apps_pane_g2

0xc351,	// (0x00017186) cell_hc_apps_pane_g3_ParamLimits

0xc351,	// (0x00017186) cell_hc_apps_pane_g3

0x0002,

0xfcab,	// (0x0001aae0) cell_hc_apps_pane_g_ParamLimits

0xfcab,	// (0x0001aae0) cell_hc_apps_pane_g

0x255d,	// (0x0000d392) cell_hc_apps_pane_t1_ParamLimits

0x255d,	// (0x0000d392) cell_hc_apps_pane_t1

0x657b,	// (0x000113b0) grid_highlight_pane_cp10_ParamLimits

0x657b,	// (0x000113b0) grid_highlight_pane_cp10

0x259b,	// (0x0000d3d0) list_single_hc_apps_pane_ParamLimits

0x259b,	// (0x0000d3d0) list_single_hc_apps_pane

0x25c7,	// (0x0000d3fc) list_single_hc_apps_pane_g1

0x25e0,	// (0x0000d415) list_single_hc_apps_pane_g2

0x0001,

0xfcb2,	// (0x0001aae7) list_single_hc_apps_pane_g

0x25f9,	// (0x0000d42e) list_single_hc_apps_pane_g2_copy1

0x2615,	// (0x0000d44a) list_single_hc_apps_pane_t1

0x62d3,	// (0x00011108) bg_set_opt_pane_cp_ParamLimits

0x4196,	// (0x0000efcb) setting_slider_pane_t1_ParamLimits

0xd9ca,	// (0x000187ff) setting_slider_pane_t2_ParamLimits

0xd9e3,	// (0x00018818) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x0001a36e) setting_slider_pane_t_ParamLimits

0x41dc,	// (0x0000f011) slider_set_pane_ParamLimits

0x4678,	// (0x0000f4ad) control_pane_g5_ParamLimits

0x4678,	// (0x0000f4ad) control_pane_g5

0x9985,	// (0x000147ba) slider_set_pane_g1_ParamLimits

0x4f77,	// (0x0000fdac) slider_set_pane_g2_ParamLimits

0x4f83,	// (0x0000fdb8) slider_set_pane_g3_ParamLimits

0x4f97,	// (0x0000fdcc) slider_set_pane_g4_ParamLimits

0x4faf,	// (0x0000fde4) slider_set_pane_g5_ParamLimits

0x4f83,	// (0x0000fdb8) slider_set_pane_g6_ParamLimits

0xe2ba,	// (0x000190ef) slider_set_pane_g7_ParamLimits

0xf92e,	// (0x0001a763) slider_set_pane_g_ParamLimits

0x62d3,	// (0x00011108) navi_icon_text_pane_ParamLimits

0x1490,	// (0x0000c2c5) aid_fill_nsta_2_ParamLimits

0x14be,	// (0x0000c2f3) aid_touch_tab_arrow_left_ParamLimits

0x14d2,	// (0x0000c307) aid_touch_tab_arrow_right_ParamLimits

0x156e,	// (0x0000c3a3) clock_nsta_pane_ParamLimits

0x94a0,	// (0x000142d5) navi_icon_pane_g1_ParamLimits

0x94ac,	// (0x000142e1) navi_text_pane_t1_ParamLimits

0xa9ac,	// (0x000157e1) navi_icon_text_pane_g1_ParamLimits

0xa9b8,	// (0x000157ed) navi_icon_text_pane_t1_ParamLimits

0x25c7,	// (0x0000d3fc) list_single_hc_apps_pane_g1_ParamLimits

0x25e0,	// (0x0000d415) list_single_hc_apps_pane_g2_ParamLimits

0xfcb2,	// (0x0001aae7) list_single_hc_apps_pane_g_ParamLimits

0x25f9,	// (0x0000d42e) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x2615,	// (0x0000d44a) list_single_hc_apps_pane_t1_ParamLimits

0xd910,	// (0x00018745) popup_toolbar2_fixed_window_ParamLimits

0xd910,	// (0x00018745) popup_toolbar2_fixed_window

0xe0a9,	// (0x00018ede) popup_toolbar2_float_window

0x6102,	// (0x00010f37) bg_popup_sub_pane_cp27

0xc45d,	// (0x00017292) grid_toolbar2_float_pane

0x6102,	// (0x00010f37) bg_popup_sub_pane_cp26

0xc45d,	// (0x00017292) grid_toolbar2_fixed_pane

0x2643,	// (0x0000d478) cell_toolbar2_fixed_pane_ParamLimits

0x2643,	// (0x0000d478) cell_toolbar2_fixed_pane

0x265e,	// (0x0000d493) cell_toolbar2_fixed_pane_g1

0xc47f,	// (0x000172b4) toolbar2_fixed_button_pane

0x8605,	// (0x0001343a) toolbar2_fixed_button_pane_g1

0x8615,	// (0x0001344a) toolbar2_fixed_button_pane_g2

0x860d,	// (0x00013442) toolbar2_fixed_button_pane_g3

0x8625,	// (0x0001345a) toolbar2_fixed_button_pane_g4

0x861d,	// (0x00013452) toolbar2_fixed_button_pane_g5

0x862d,	// (0x00013462) toolbar2_fixed_button_pane_g6

0x8635,	// (0x0001346a) toolbar2_fixed_button_pane_g7

0x8645,	// (0x0001347a) toolbar2_fixed_button_pane_g8

0x863d,	// (0x00013472) toolbar2_fixed_button_pane_g9

0x0008,

0xf830,	// (0x0001a665) toolbar2_fixed_button_pane_g

0xc487,	// (0x000172bc) cell_toolbar2_float_pane_ParamLimits

0xc487,	// (0x000172bc) cell_toolbar2_float_pane

0xc498,	// (0x000172cd) cell_toolbar2_float_pane_g1

0xc47f,	// (0x000172b4) toolbar2_fixed_button_pane_cp

0x207f,	// (0x0000ceb4) fep_vkb_accented_list_pane_ParamLimits

0x207f,	// (0x0000ceb4) fep_vkb_accented_list_pane

0x5370,	// (0x000101a5) bg_popup_fep_shadow_pane_g9

0x7db9,	// (0x00012bee) bg_popup_fep_shadow_pane_cp3

0x728d,	// (0x000120c2) list_accented_list_pane

0xc4a1,	// (0x000172d6) list_single_accented_list_pane_ParamLimits

0xc4a1,	// (0x000172d6) list_single_accented_list_pane

0x7db9,	// (0x00012bee) list_highlight_pane_cp10

0xc4b2,	// (0x000172e7) list_single_accented_list_pane_t1

0xdfeb,	// (0x00018e20) popup_slider_window_ParamLimits

0xdfeb,	// (0x00018e20) popup_slider_window

0xbfe8,	// (0x00016e1d) aid_indentation_list_msg

0x273d,	// (0x0000d572) bg_popup_window_pane_cp19

0xc5b6,	// (0x000173eb) popup_slider_window_g1

0xc5d2,	// (0x00017407) popup_slider_window_g2

0xc5ee,	// (0x00017423) popup_slider_window_g3

0x0005,

0xfcb7,	// (0x0001aaec) popup_slider_window_g

0xc64a,	// (0x0001747f) popup_slider_window_t1

0xc6bc,	// (0x000174f1) small_volume_slider_vertical_pane

0xad89,	// (0x00015bbe) small_volume_slider_vertical_pane_g1

0xad89,	// (0x00015bbe) small_volume_slider_vertical_pane_g2

0xc6d8,	// (0x0001750d) small_volume_slider_vertical_pane_g3

0x0002,

0xfcc9,	// (0x0001aafe) small_volume_slider_vertical_pane_g

0xd894,	// (0x000186c9) area_side_right_pane_ParamLimits

0xd894,	// (0x000186c9) area_side_right_pane

0xe31d,	// (0x00019152) aid_size_side_button_ParamLimits

0xe31d,	// (0x00019152) aid_size_side_button

0xe336,	// (0x0001916b) grid_sctrl_middle_pane_ParamLimits

0xe336,	// (0x0001916b) grid_sctrl_middle_pane

0x5588,	// (0x000103bd) sctrl_sk_bottom_pane

0x5599,	// (0x000103ce) sctrl_sk_top_pane

0x55ab,	// (0x000103e0) aid_touch_sctrl_top

0x55b8,	// (0x000103ed) bg_sctrl_sk_pane_ParamLimits

0x55b8,	// (0x000103ed) bg_sctrl_sk_pane

0x55c6,	// (0x000103fb) sctrl_sk_top_pane_g1

0x55d3,	// (0x00010408) sctrl_sk_top_pane_t1

0x55ab,	// (0x000103e0) aid_touch_sctrl_bottom

0x55b8,	// (0x000103ed) bg_sctrl_sk_pane_cp_ParamLimits

0x55b8,	// (0x000103ed) bg_sctrl_sk_pane_cp

0x55ee,	// (0x00010423) sctrl_sk_bottom_pane_g1

0x55d3,	// (0x00010408) sctrl_sk_bottom_pane_t1

0xe34c,	// (0x00019181) cell_sctrl_middle_pane_ParamLimits

0xe34c,	// (0x00019181) cell_sctrl_middle_pane

0xe35d,	// (0x00019192) aid_touch_sctrl_middle_ParamLimits

0xe35d,	// (0x00019192) aid_touch_sctrl_middle

0xe36a,	// (0x0001919f) bg_sctrl_middle_pane_ParamLimits

0xe36a,	// (0x0001919f) bg_sctrl_middle_pane

0x5bf6,	// (0x00010a2b) cell_sctrl_middle_pane_g1_ParamLimits

0x5bf6,	// (0x00010a2b) cell_sctrl_middle_pane_g1

0xe378,	// (0x000191ad) cell_sctrl_middle_pane_g2_ParamLimits

0xe378,	// (0x000191ad) cell_sctrl_middle_pane_g2

0x0001,

0xfcd5,	// (0x0001ab0a) cell_sctrl_middle_pane_g_ParamLimits

0xfcd5,	// (0x0001ab0a) cell_sctrl_middle_pane_g

0x8605,	// (0x0001343a) bg_sctrl_middle_pane_g1

0x860d,	// (0x00013442) bg_sctrl_middle_pane_g2

0x8615,	// (0x0001344a) bg_sctrl_middle_pane_g3

0x861d,	// (0x00013452) bg_sctrl_middle_pane_g4

0x8625,	// (0x0001345a) bg_sctrl_middle_pane_g5

0x862d,	// (0x00013462) bg_sctrl_middle_pane_g6

0x8635,	// (0x0001346a) bg_sctrl_middle_pane_g7

0x863d,	// (0x00013472) bg_sctrl_middle_pane_g8

0x0007,

0xfcda,	// (0x0001ab0f) bg_sctrl_middle_pane_g

0x8645,	// (0x0001347a) bg_sctrl_middle_pane_g8_copy1

0x8605,	// (0x0001343a) bg_sctrl_sk_pane_g1

0x8615,	// (0x0001344a) bg_sctrl_sk_pane_g2

0x860d,	// (0x00013442) bg_sctrl_sk_pane_g3

0x0008,

0xf830,	// (0x0001a665) bg_sctrl_sk_pane_g

0x69fd,	// (0x00011832) aid_size_touch_scroll_bar

0x8625,	// (0x0001345a) bg_sctrl_sk_pane_g4

0x861d,	// (0x00013452) bg_sctrl_sk_pane_g5

0x862d,	// (0x00013462) bg_sctrl_sk_pane_g6

0x8635,	// (0x0001346a) bg_sctrl_sk_pane_g7

0x8645,	// (0x0001347a) bg_sctrl_sk_pane_g8

0x863d,	// (0x00013472) bg_sctrl_sk_pane_g9

0x4820,	// (0x0000f655) popup_fep_china_hwr2_fs_candidate_window

0xdbe6,	// (0x00018a1b) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xdbe6,	// (0x00018a1b) popup_fep_china_hwr2_fs_control_window

0x5390,	// (0x000101c5) sctrl_sk_top_pane_g2

0x0001,

0xfcd0,	// (0x0001ab05) sctrl_sk_top_pane_g

0x285d,	// (0x0000d692) aid_fep_china_hwr2_fs_cell_ParamLimits

0x285d,	// (0x0000d692) aid_fep_china_hwr2_fs_cell

0x2871,	// (0x0000d6a6) bg_popup_fep_shadow_pane_cp4_ParamLimits

0x2871,	// (0x0000d6a6) bg_popup_fep_shadow_pane_cp4

0x2888,	// (0x0000d6bd) bg_popup_fep_shadow_pane_cp5_ParamLimits

0x2888,	// (0x0000d6bd) bg_popup_fep_shadow_pane_cp5

0x289a,	// (0x0000d6cf) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0x289a,	// (0x0000d6cf) popup_fep_china_hwr2_fs_control_bar_grid

0x28ae,	// (0x0000d6e3) popup_fep_china_hwr2_fs_control_funtion_grid

0xc733,	// (0x00017568) aid_fep_china_hwr2_fs_candi_cell

0x6102,	// (0x00010f37) bg_popup_fep_shadow_pane_cp6

0xc73d,	// (0x00017572) popup_fep_china_hwr2_fs_candidate_grid

0x28b6,	// (0x0000d6eb) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0x28b6,	// (0x0000d6eb) cell_fep_china_hwr2_fs_funtion_grid

0xad89,	// (0x00015bbe) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xc75d,	// (0x00017592) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xc75d,	// (0x00017592) cell_fep_china_hwr2_fs_funtion_grid_g1

0xc76b,	// (0x000175a0) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xc76b,	// (0x000175a0) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfceb,	// (0x0001ab20) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfceb,	// (0x0001ab20) cell_fep_china_hwr2_fs_funtion_grid_g

0x28ce,	// (0x0000d703) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0x28ce,	// (0x0000d703) cell_fep_china_hwr2_fs_funtion_grid_t1

0x28e3,	// (0x0000d718) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0x28e3,	// (0x0000d718) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfcf0,	// (0x0001ab25) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfcf0,	// (0x0001ab25) cell_fep_china_hwr2_fs_funtion_grid_t

0xc7b2,	// (0x000175e7) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xc7ba,	// (0x000175ef) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xc7c2,	// (0x000175f7) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfcf5,	// (0x0001ab2a) popup_fep_china_hwr2_fs_control_bar_grid_g

0xc7ca,	// (0x000175ff) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xc7ca,	// (0x000175ff) cell_fep_china_hwr2_fs_candidate_grid

0xc7e3,	// (0x00017618) popup_fep_china_hwr2_fs_candidate_grid_g20

0xc7eb,	// (0x00017620) popup_fep_china_hwr2_fs_candidate_grid_g21

0xad89,	// (0x00015bbe) cell_fep_china_hwr2_fs_candidate_grid_g1

0xad89,	// (0x00015bbe) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb10,	// (0x0001a945) cell_fep_china_hwr2_fs_candidate_grid_g

0xc7f3,	// (0x00017628) cell_fep_china_hwr2_fs_candidate_grid_t1

0x81fd,	// (0x00013032) clock_nsta_pane_cp_24_ParamLimits

0x81fd,	// (0x00013032) clock_nsta_pane_cp_24

0x8270,	// (0x000130a5) indicator_nsta_pane_cp_24_ParamLimits

0x8270,	// (0x000130a5) indicator_nsta_pane_cp_24

0x931d,	// (0x00014152) heading_pane_g1

0x0001,

0xf895,	// (0x0001a6ca) heading_pane_g

0x1e38,	// (0x0000cc6d) grid_sct_catagory_button_pane

0x9d96,	// (0x00014bcb) scroll_pane_cp5_ParamLimits

0xa9fa,	// (0x0001582f) button_value_adjust_pane_cp5_ParamLimits

0xa9fa,	// (0x0001582f) button_value_adjust_pane_cp5

0xaaf0,	// (0x00015925) form2_midp_time_pane_ParamLimits

0xc801,	// (0x00017636) cell_sct_catagory_button_pane_ParamLimits

0xc801,	// (0x00017636) cell_sct_catagory_button_pane

0xad4e,	// (0x00015b83) bg_button_pane_cp01_ParamLimits

0xad4e,	// (0x00015b83) bg_button_pane_cp01

0xad89,	// (0x00015bbe) cell_sct_catagory_button_pane_g1

0xe05a,	// (0x00018e8f) popup_tb_extension_window

0x28ff,	// (0x0000d734) aid_size_cell_ext_ParamLimits

0x28ff,	// (0x0000d734) aid_size_cell_ext

0x68db,	// (0x00011710) bg_tb_trans_pane_cp1_ParamLimits

0x68db,	// (0x00011710) bg_tb_trans_pane_cp1

0x2925,	// (0x0000d75a) grid_tb_ext_pane_ParamLimits

0x2925,	// (0x0000d75a) grid_tb_ext_pane

0x295b,	// (0x0000d790) cell_tb_ext_pane_ParamLimits

0x295b,	// (0x0000d790) cell_tb_ext_pane

0x297f,	// (0x0000d7b4) cell_tb_ext_pane_g1_ParamLimits

0x297f,	// (0x0000d7b4) cell_tb_ext_pane_g1

0xc88b,	// (0x000176c0) cell_tb_ext_pane_t1

0x657b,	// (0x000113b0) list_highlight_pane_cp11_ParamLimits

0x657b,	// (0x000113b0) list_highlight_pane_cp11

0xd925,	// (0x0001875a) popup_uni_indicator_window_ParamLimits

0xd925,	// (0x0001875a) popup_uni_indicator_window

0x6fcf,	// (0x00011e04) bg_popup_sub_pane_cp14

0xc8a6,	// (0x000176db) list_uniindi_pane

0xc8b2,	// (0x000176e7) uniindi_top_pane

0x657b,	// (0x000113b0) bg_uniindi_top_pane

0xc8d1,	// (0x00017706) uniindi_top_pane_g1

0xc8e7,	// (0x0001771c) uniindi_top_pane_g2

0x0003,

0xfcfc,	// (0x0001ab31) uniindi_top_pane_g

0xc911,	// (0x00017746) uniindi_top_pane_t1

0xc93b,	// (0x00017770) list_single_uniindi_pane_ParamLimits

0xc93b,	// (0x00017770) list_single_uniindi_pane

0xad89,	// (0x00015bbe) bg_uniindi_top_pane_g1

0xc94d,	// (0x00017782) list_single_uniindi_pane_g1

0xc960,	// (0x00017795) list_single_uniindi_pane_t1

0x3f85,	// (0x0000edba) control_bg_pane

0xc985,	// (0x000177ba) bg_sctrl_sk_pane_cp1

0xc98e,	// (0x000177c3) bg_sctrl_sk_pane_cp2

0xc997,	// (0x000177cc) control_bg_pane_g1

0xc9a0,	// (0x000177d5) control_bg_pane_g2

0x0001,

0xfd05,	// (0x0001ab3a) control_bg_pane_g

0xa84d,	// (0x00015682) cell_indicator_nsta_pane_g1_ParamLimits

0x1f49,	// (0x0000cd7e) cell_indicator_nsta_pane_g2_ParamLimits

0xfa74,	// (0x0001a8a9) cell_indicator_nsta_pane_g_ParamLimits

0xab58,	// (0x0001598d) form2_midp_time_pane_t1_ParamLimits

0x513d,	// (0x0000ff72) main_idle_act4_pane_ParamLimits

0x513d,	// (0x0000ff72) main_idle_act4_pane

0xe05a,	// (0x00018e8f) popup_tb_extension_window_ParamLimits

0x2945,	// (0x0000d77a) tb_ext_find_pane_ParamLimits

0x2945,	// (0x0000d77a) tb_ext_find_pane

0xc9a9,	// (0x000177de) ai_gene_pane_1_cp1

0x7ef4,	// (0x00012d29) ai_gene_pane_2_cp1

0xc9b1,	// (0x000177e6) list_single_idle_plugin_calendar_pane

0xc9ba,	// (0x000177ef) list_single_idle_plugin_notification_pane

0xc9c3,	// (0x000177f8) list_single_idle_plugin_player_pane

0x299c,	// (0x0000d7d1) list_single_idle_plugin_shortcut_pane_ParamLimits

0x299c,	// (0x0000d7d1) list_single_idle_plugin_shortcut_pane

0x29c4,	// (0x0000d7f9) main_idle_act4_pane_t1

0x29da,	// (0x0000d80f) main_idle_act4_pane_t2

0x0001,

0xfd0a,	// (0x0001ab3f) main_idle_act4_pane_t

0x29f0,	// (0x0000d825) middle_sk_idle_act4_pane_ParamLimits

0x29f0,	// (0x0000d825) middle_sk_idle_act4_pane

0x2a0c,	// (0x0000d841) popup_clock_digital_analogue_window_cp2

0x2a32,	// (0x0000d867) shortcut_wheel_idle_act4_pane_ParamLimits

0x2a32,	// (0x0000d867) shortcut_wheel_idle_act4_pane

0xad89,	// (0x00015bbe) shortcut_wheel_idle_act4_pane_g1

0xad89,	// (0x00015bbe) shortcut_wheel_idle_act4_pane_g2

0xad89,	// (0x00015bbe) shortcut_wheel_idle_act4_pane_g3

0xad89,	// (0x00015bbe) shortcut_wheel_idle_act4_pane_g4

0xad89,	// (0x00015bbe) shortcut_wheel_idle_act4_pane_g5

0xca56,	// (0x0001788b) shortcut_wheel_idle_act4_pane_g6

0xca5e,	// (0x00017893) shortcut_wheel_idle_act4_pane_g7

0xca66,	// (0x0001789b) shortcut_wheel_idle_act4_pane_g8

0xca6e,	// (0x000178a3) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd0f,	// (0x0001ab44) shortcut_wheel_idle_act4_pane_g

0xe8af,	// (0x000196e4) middle_sk_idle_act4_pane_g1_ParamLimits

0xe8af,	// (0x000196e4) middle_sk_idle_act4_pane_g1

0x2aad,	// (0x0000d8e2) middle_sk_idle_act4_pane_g2_ParamLimits

0x2aad,	// (0x0000d8e2) middle_sk_idle_act4_pane_g2

0x0001,

0xfd32,	// (0x0001ab67) middle_sk_idle_act4_pane_g_ParamLimits

0xfd32,	// (0x0001ab67) middle_sk_idle_act4_pane_g

0x2ac5,	// (0x0000d8fa) middle_sk_idle_act4_pane_t1_ParamLimits

0x2ac5,	// (0x0000d8fa) middle_sk_idle_act4_pane_t1

0x2af4,	// (0x0000d929) grid_ai_shortcut_pane_ParamLimits

0x2af4,	// (0x0000d929) grid_ai_shortcut_pane

0x2b11,	// (0x0000d946) list_highlight_pane_cp16_ParamLimits

0x2b11,	// (0x0000d946) list_highlight_pane_cp16

0x2b1e,	// (0x0000d953) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0x2b1e,	// (0x0000d953) list_single_idle_plugin_shortcut_pane_g1

0x2b2a,	// (0x0000d95f) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0x2b2a,	// (0x0000d95f) list_single_idle_plugin_shortcut_pane_g2

0x2b46,	// (0x0000d97b) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0x2b46,	// (0x0000d97b) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd37,	// (0x0001ab6c) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd37,	// (0x0001ab6c) list_single_idle_plugin_shortcut_pane_g

0x2b5b,	// (0x0000d990) cell_ai_shortcut_pane_ParamLimits

0x2b5b,	// (0x0000d990) cell_ai_shortcut_pane

0x2b71,	// (0x0000d9a6) cell_ai_shortcut_pane_g1_ParamLimits

0x2b71,	// (0x0000d9a6) cell_ai_shortcut_pane_g1

0xc9a9,	// (0x000177de) ai_gene_pane_1_cp2

0xcb9b,	// (0x000179d0) ai_gene_pane_2_cp2

0xcba3,	// (0x000179d8) list_highlight_pane_cp15

0xcbac,	// (0x000179e1) list_single_idle_plugin_calendar_pane_g1

0xcba3,	// (0x000179d8) list_highlight_pane_cp17

0xcbb4,	// (0x000179e9) list_single_idle_plugin_calendar_pane_g1_copy1

0xcbbc,	// (0x000179f1) list_single_idle_plugin_player_pane_g1

0x9f64,	// (0x00014d99) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd3e,	// (0x0001ab73) list_single_idle_plugin_player_pane_g

0xcbc4,	// (0x000179f9) list_single_idle_plugin_player_pane_t1

0xcbd2,	// (0x00017a07) list_single_idle_plugin_player_pane_t2

0xcbe0,	// (0x00017a15) list_single_idle_plugin_player_pane_t3

0xcbee,	// (0x00017a23) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd43,	// (0x0001ab78) list_single_idle_plugin_player_pane_t

0xcbfc,	// (0x00017a31) wait_bar_pane_cp15

0xcc04,	// (0x00017a39) grid_ai_notification_pane

0x9f64,	// (0x00014d99) list_single_idle_plugin_notification_pane_g1

0x2b93,	// (0x0000d9c8) cell_ai_notification_pane_ParamLimits

0x2b93,	// (0x0000d9c8) cell_ai_notification_pane

0xcc1a,	// (0x00017a4f) cell_ai_notification_pane_g1

0xcc22,	// (0x00017a57) cell_ai_notification_pane_t1

0x2ba0,	// (0x0000d9d5) tb_ext_find_button_pane

0x2ba8,	// (0x0000d9dd) tb_ext_find_pane_g1

0x2bb0,	// (0x0000d9e5) tb_ext_find_pane_t1

0x779d,	// (0x000125d2) tb_ext_find_button_pane_g1

0xcc4e,	// (0x00017a83) tb_ext_find_button_pane_g2

0x0001,

0xfd4c,	// (0x0001ab81) tb_ext_find_button_pane_g

0x29c4,	// (0x0000d7f9) main_idle_act4_pane_t1_ParamLimits

0x29da,	// (0x0000d80f) main_idle_act4_pane_t2_ParamLimits

0xfd0a,	// (0x0001ab3f) main_idle_act4_pane_t_ParamLimits

0x2a0c,	// (0x0000d841) popup_clock_digital_analogue_window_cp2_ParamLimits

0x2a22,	// (0x0000d857) sat_plugin_idle_act4_pane_ParamLimits

0x2a22,	// (0x0000d857) sat_plugin_idle_act4_pane

0x2bbe,	// (0x0000d9f3) sat_plugin_idle_act4_pane_t1_ParamLimits

0x2bbe,	// (0x0000d9f3) sat_plugin_idle_act4_pane_t1

0x2bd6,	// (0x0000da0b) sat_plugin_idle_act4_pane_t2_ParamLimits

0x2bd6,	// (0x0000da0b) sat_plugin_idle_act4_pane_t2

0x2bee,	// (0x0000da23) sat_plugin_idle_act4_pane_t3_ParamLimits

0x2bee,	// (0x0000da23) sat_plugin_idle_act4_pane_t3

0x2c06,	// (0x0000da3b) sat_plugin_idle_act4_pane_t4_ParamLimits

0x2c06,	// (0x0000da3b) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd51,	// (0x0001ab86) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd51,	// (0x0001ab86) sat_plugin_idle_act4_pane_t

0x4048,	// (0x0000ee7d) popup_battery_window_ParamLimits

0x4048,	// (0x0000ee7d) popup_battery_window

0x657b,	// (0x000113b0) bg_popup_sub_pane_cp25_ParamLimits

0x657b,	// (0x000113b0) bg_popup_sub_pane_cp25

0xcca3,	// (0x00017ad8) popup_battery_window_g1_ParamLimits

0xcca3,	// (0x00017ad8) popup_battery_window_g1

0xccaf,	// (0x00017ae4) popup_battery_window_t1_ParamLimits

0xccaf,	// (0x00017ae4) popup_battery_window_t1

0xccc1,	// (0x00017af6) popup_battery_window_t2_ParamLimits

0xccc1,	// (0x00017af6) popup_battery_window_t2

0x0001,

0xfd5a,	// (0x0001ab8f) popup_battery_window_t_ParamLimits

0xfd5a,	// (0x0001ab8f) popup_battery_window_t

0x0c3f,	// (0x0000ba74) midp_canvas_pane_ParamLimits

0x0c94,	// (0x0000bac9) midp_keypad_pane_ParamLimits

0x0c94,	// (0x0000bac9) midp_keypad_pane

0x8108,	// (0x00012f3d) main_midp_pane_ParamLimits

0xa8d3,	// (0x00015708) signal_pane_g2_cp_ParamLimits

0x2c1e,	// (0x0000da53) aid_size_cell_midp_keypad_ParamLimits

0x2c1e,	// (0x0000da53) aid_size_cell_midp_keypad

0x2c3c,	// (0x0000da71) midp_keyp_game_grid_pane_ParamLimits

0x2c3c,	// (0x0000da71) midp_keyp_game_grid_pane

0x2c5b,	// (0x0000da90) midp_keyp_rocker_pane_ParamLimits

0x2c5b,	// (0x0000da90) midp_keyp_rocker_pane

0x2c9c,	// (0x0000dad1) midp_keyp_sk_left_pane_ParamLimits

0x2c9c,	// (0x0000dad1) midp_keyp_sk_left_pane

0x2cee,	// (0x0000db23) midp_keyp_sk_right_pane_ParamLimits

0x2cee,	// (0x0000db23) midp_keyp_sk_right_pane

0x6102,	// (0x00010f37) bg_button_pane_cp03

0x2d3a,	// (0x0000db6f) midp_keyp_sk_left_pane_g1

0x6102,	// (0x00010f37) bg_button_pane_cp04

0x2d3a,	// (0x0000db6f) midp_keyp_sk_right_pane_g1

0xad89,	// (0x00015bbe) midp_keyp_rocker_pane_g1

0x2d43,	// (0x0000db78) keyp_game_cell_pane_ParamLimits

0x2d43,	// (0x0000db78) keyp_game_cell_pane

0x6102,	// (0x00010f37) bg_button_pane_cp02

0x2d65,	// (0x0000db9a) keyp_game_cell_pane_g1

0xd8d6,	// (0x0001870b) popup_fep_vkb2_window_ParamLimits

0xd8d6,	// (0x0001870b) popup_fep_vkb2_window

0xe385,	// (0x000191ba) aid_size_cell_vkb2_ParamLimits

0xe385,	// (0x000191ba) aid_size_cell_vkb2

0xe3bb,	// (0x000191f0) popup_fep_vkb2_window_g1_ParamLimits

0xe3bb,	// (0x000191f0) popup_fep_vkb2_window_g1

0xe40b,	// (0x00019240) vkb2_area_bottom_pane_ParamLimits

0xe40b,	// (0x00019240) vkb2_area_bottom_pane

0xe449,	// (0x0001927e) vkb2_area_keypad_pane_ParamLimits

0xe449,	// (0x0001927e) vkb2_area_keypad_pane

0xe487,	// (0x000192bc) vkb2_area_top_pane_ParamLimits

0xe487,	// (0x000192bc) vkb2_area_top_pane

0xe503,	// (0x00019338) vkb2_top_entry_pane_ParamLimits

0xe503,	// (0x00019338) vkb2_top_entry_pane

0xe530,	// (0x00019365) vkb2_top_grid_left_pane_ParamLimits

0xe530,	// (0x00019365) vkb2_top_grid_left_pane

0xe550,	// (0x00019385) vkb2_top_grid_right_pane_ParamLimits

0xe550,	// (0x00019385) vkb2_top_grid_right_pane

0x5837,	// (0x0001066c) vkb2_cell_keypad_pane_ParamLimits

0x5837,	// (0x0001066c) vkb2_cell_keypad_pane

0xe596,	// (0x000193cb) vkb2_area_bottom_grid_pane_ParamLimits

0xe596,	// (0x000193cb) vkb2_area_bottom_grid_pane

0xe5bc,	// (0x000193f1) vkb2_area_bottom_pane_g1_ParamLimits

0xe5bc,	// (0x000193f1) vkb2_area_bottom_pane_g1

0xe5e2,	// (0x00019417) vkb2_area_bottom_pane_g2_ParamLimits

0xe5e2,	// (0x00019417) vkb2_area_bottom_pane_g2

0xe613,	// (0x00019448) vkb2_area_bottom_pane_g3_ParamLimits

0xe613,	// (0x00019448) vkb2_area_bottom_pane_g3

0x0002,

0xfd5f,	// (0x0001ab94) vkb2_area_bottom_pane_g_ParamLimits

0xfd5f,	// (0x0001ab94) vkb2_area_bottom_pane_g

0x59af,	// (0x000107e4) vkb2_top_cell_left_pane_ParamLimits

0x59af,	// (0x000107e4) vkb2_top_cell_left_pane

0x3052,	// (0x0000de87) vkb2_top_entry_pane_g1_ParamLimits

0x3052,	// (0x0000de87) vkb2_top_entry_pane_g1

0x3060,	// (0x0000de95) vkb2_top_entry_pane_t1_ParamLimits

0x3060,	// (0x0000de95) vkb2_top_entry_pane_t1

0xce54,	// (0x00017c89) vkb2_top_entry_pane_t2_ParamLimits

0xce54,	// (0x00017c89) vkb2_top_entry_pane_t2

0xce86,	// (0x00017cbb) vkb2_top_entry_pane_t3_ParamLimits

0xce86,	// (0x00017cbb) vkb2_top_entry_pane_t3

0x0002,

0xfd66,	// (0x0001ab9b) vkb2_top_entry_pane_t_ParamLimits

0xfd66,	// (0x0001ab9b) vkb2_top_entry_pane_t

0xe669,	// (0x0001949e) vkb2_top_grid_right_pane_g1_ParamLimits

0xe669,	// (0x0001949e) vkb2_top_grid_right_pane_g1

0x5a12,	// (0x00010847) vkb2_top_grid_right_pane_g2_ParamLimits

0x5a12,	// (0x00010847) vkb2_top_grid_right_pane_g2

0x5a2a,	// (0x0001085f) vkb2_top_grid_right_pane_g3_ParamLimits

0x5a2a,	// (0x0001085f) vkb2_top_grid_right_pane_g3

0xe67f,	// (0x000194b4) vkb2_top_grid_right_pane_g4_ParamLimits

0xe67f,	// (0x000194b4) vkb2_top_grid_right_pane_g4

0x0003,

0xfd6d,	// (0x0001aba2) vkb2_top_grid_right_pane_g_ParamLimits

0xfd6d,	// (0x0001aba2) vkb2_top_grid_right_pane_g

0x5a58,	// (0x0001088d) vkb2_top_cell_left_pane_g1

0x5a6f,	// (0x000108a4) vkb2_cell_keypad_pane_g1_ParamLimits

0x5a6f,	// (0x000108a4) vkb2_cell_keypad_pane_g1

0xe8bd,	// (0x000196f2) vkb2_cell_keypad_pane_t1_ParamLimits

0xe8bd,	// (0x000196f2) vkb2_cell_keypad_pane_t1

0x5a7d,	// (0x000108b2) vkb2_cell_bottom_grid_pane_ParamLimits

0x5a7d,	// (0x000108b2) vkb2_cell_bottom_grid_pane

0x5ab6,	// (0x000108eb) vkb2_cell_bottom_grid_pane_g1

0x2a51,	// (0x0000d886) aid_call2_pane_cp02

0x2a59,	// (0x0000d88e) aid_call_pane_cp02

0x2a61,	// (0x0000d896) clock_digital_number_pane_cp10

0x2a69,	// (0x0000d89e) clock_digital_number_pane_cp11

0x2a71,	// (0x0000d8a6) clock_digital_number_pane_cp12

0x2a79,	// (0x0000d8ae) clock_digital_number_pane_cp13

0x2a81,	// (0x0000d8b6) clock_digital_separator_pane_cp10

0x779d,	// (0x000125d2) popup_clock_digital_analogue_window_cp2_g1

0x779d,	// (0x000125d2) popup_clock_digital_analogue_window_cp2_g2

0x2a89,	// (0x0000d8be) popup_clock_digital_analogue_window_cp2_g3

0x779d,	// (0x000125d2) popup_clock_digital_analogue_window_cp2_g4

0x2a89,	// (0x0000d8be) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd22,	// (0x0001ab57) popup_clock_digital_analogue_window_cp2_g

0x2a91,	// (0x0000d8c6) popup_clock_digital_analogue_window_cp2_t1

0x2a9f,	// (0x0000d8d4) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd2d,	// (0x0001ab62) popup_clock_digital_analogue_window_cp2_t

0xad89,	// (0x00015bbe) clock_digital_number_pane_cp10_g1

0xad89,	// (0x00015bbe) clock_digital_number_pane_cp10_g2

0x0001,

0xfb10,	// (0x0001a945) clock_digital_number_pane_cp10_g

0xad89,	// (0x00015bbe) clock_digital_separator_pane_cp10_g1

0xad89,	// (0x00015bbe) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb10,	// (0x0001a945) clock_digital_separator_pane_cp10_g

0xc8f3,	// (0x00017728) uniindi_top_pane_g3

0xc904,	// (0x00017739) uniindi_top_pane_g4

0x58a2,	// (0x000106d7) vkb2_row_keypad_pane_ParamLimits

0x58a2,	// (0x000106d7) vkb2_row_keypad_pane

0x5ad2,	// (0x00010907) vkb2_cell_t_keypad_pane_ParamLimits

0x5ad2,	// (0x00010907) vkb2_cell_t_keypad_pane

0x5adf,	// (0x00010914) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x5adf,	// (0x00010914) vkb2_cell_t_keypad_pane_cp08

0x5aef,	// (0x00010924) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x5aef,	// (0x00010924) vkb2_cell_t_keypad_pane_cp09

0x5b00,	// (0x00010935) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x5b00,	// (0x00010935) vkb2_cell_t_keypad_pane_cp01

0x5b10,	// (0x00010945) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x5b10,	// (0x00010945) vkb2_cell_t_keypad_pane_cp02

0x5b20,	// (0x00010955) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x5b20,	// (0x00010955) vkb2_cell_t_keypad_pane_cp03

0x5b30,	// (0x00010965) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x5b30,	// (0x00010965) vkb2_cell_t_keypad_pane_cp04

0x5b40,	// (0x00010975) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x5b40,	// (0x00010975) vkb2_cell_t_keypad_pane_cp05

0x5b50,	// (0x00010985) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x5b50,	// (0x00010985) vkb2_cell_t_keypad_pane_cp06

0x5b60,	// (0x00010995) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x5b60,	// (0x00010995) vkb2_cell_t_keypad_pane_cp07

0x5b70,	// (0x000109a5) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x5b70,	// (0x000109a5) vkb2_cell_t_keypad_pane_cp10

0x5390,	// (0x000101c5) vkb2_cell_t_keypad_pane_g1

0xe8d4,	// (0x00019709) vkb2_cell_t_keypad_pane_t1

0x3f85,	// (0x0000edba) popup_grid_graphic2_window

0x30c5,	// (0x0000defa) aid_size_cell_graphic2_ParamLimits

0x30c5,	// (0x0000defa) aid_size_cell_graphic2

0x3103,	// (0x0000df38) bg_popup_window_pane_cp21_ParamLimits

0x3103,	// (0x0000df38) bg_popup_window_pane_cp21

0x3111,	// (0x0000df46) graphic2_pages_pane_ParamLimits

0x3111,	// (0x0000df46) graphic2_pages_pane

0x315a,	// (0x0000df8f) grid_graphic2_control_pane_ParamLimits

0x315a,	// (0x0000df8f) grid_graphic2_control_pane

0x3198,	// (0x0000dfcd) grid_graphic2_pane_ParamLimits

0x3198,	// (0x0000dfcd) grid_graphic2_pane

0x3207,	// (0x0000e03c) cell_graphic2_pane

0x3f85,	// (0x0000edba) main_comp_mode_pane

0xc18f,	// (0x00016fc4) list_ai3_gene_pane_ParamLimits

0x273d,	// (0x0000d572) bg_popup_window_pane_cp19_ParamLimits

0xc55e,	// (0x00017393) bg_touch_area_indi_pane_ParamLimits

0xc55e,	// (0x00017393) bg_touch_area_indi_pane

0xc574,	// (0x000173a9) bg_touch_area_indi_pane_cp01_ParamLimits

0xc574,	// (0x000173a9) bg_touch_area_indi_pane_cp01

0xc58a,	// (0x000173bf) bg_touch_area_indi_pane_cp02_ParamLimits

0xc58a,	// (0x000173bf) bg_touch_area_indi_pane_cp02

0xc5a0,	// (0x000173d5) bg_touch_area_indi_pane_cp03_ParamLimits

0xc5a0,	// (0x000173d5) bg_touch_area_indi_pane_cp03

0xc5b6,	// (0x000173eb) popup_slider_window_g1_ParamLimits

0xc5d2,	// (0x00017407) popup_slider_window_g2_ParamLimits

0xc5ee,	// (0x00017423) popup_slider_window_g3_ParamLimits

0xfcb7,	// (0x0001aaec) popup_slider_window_g_ParamLimits

0xc64a,	// (0x0001747f) popup_slider_window_t1_ParamLimits

0xc6bc,	// (0x000174f1) small_volume_slider_vertical_pane_ParamLimits

0x3207,	// (0x0000e03c) cell_graphic2_pane_ParamLimits

0x3252,	// (0x0000e087) bg_button_pane_cp10_ParamLimits

0x3252,	// (0x0000e087) bg_button_pane_cp10

0x3263,	// (0x0000e098) bg_button_pane_cp11_ParamLimits

0x3263,	// (0x0000e098) bg_button_pane_cp11

0x3274,	// (0x0000e0a9) graphic2_pages_pane_g1_ParamLimits

0x3274,	// (0x0000e0a9) graphic2_pages_pane_g1

0x328f,	// (0x0000e0c4) graphic2_pages_pane_g2_ParamLimits

0x328f,	// (0x0000e0c4) graphic2_pages_pane_g2

0x0001,

0xfd7b,	// (0x0001abb0) graphic2_pages_pane_g_ParamLimits

0xfd7b,	// (0x0001abb0) graphic2_pages_pane_g

0x32a7,	// (0x0000e0dc) graphic2_pages_pane_t1_ParamLimits

0x32a7,	// (0x0000e0dc) graphic2_pages_pane_t1

0x32bf,	// (0x0000e0f4) cell_graphic2_control_pane_ParamLimits

0x32bf,	// (0x0000e0f4) cell_graphic2_control_pane

0x32e9,	// (0x0000e11e) cell_graphic2_pane_g1_ParamLimits

0x32e9,	// (0x0000e11e) cell_graphic2_pane_g1

0xe8e6,	// (0x0001971b) cell_graphic2_pane_g2_ParamLimits

0xe8e6,	// (0x0001971b) cell_graphic2_pane_g2

0x32f6,	// (0x0000e12b) cell_graphic2_pane_g3_ParamLimits

0x32f6,	// (0x0000e12b) cell_graphic2_pane_g3

0xe8f3,	// (0x00019728) cell_graphic2_pane_g4_ParamLimits

0xe8f3,	// (0x00019728) cell_graphic2_pane_g4

0x3303,	// (0x0000e138) cell_graphic2_pane_g5_ParamLimits

0x3303,	// (0x0000e138) cell_graphic2_pane_g5

0x0004,

0xfd80,	// (0x0001abb5) cell_graphic2_pane_g_ParamLimits

0xfd80,	// (0x0001abb5) cell_graphic2_pane_g

0x3320,	// (0x0000e155) cell_graphic2_pane_t1_ParamLimits

0x3320,	// (0x0000e155) cell_graphic2_pane_t1

0x9311,	// (0x00014146) grid_highlight_pane_cp11_ParamLimits

0x9311,	// (0x00014146) grid_highlight_pane_cp11

0x657b,	// (0x000113b0) bg_button_pane_cp05

0x3355,	// (0x0000e18a) cell_graphic2_control_pane_g1

0xad89,	// (0x00015bbe) bg_touch_area_indi_pane_g1

0xe900,	// (0x00019735) aid_cmod_rocker_key_size

0xe90a,	// (0x0001973f) aid_cmode_itu_key_size

0xe914,	// (0x00019749) main_cmode_video_pane

0xe91c,	// (0x00019751) main_comp_mode_itu_pane

0xe926,	// (0x0001975b) main_comp_mode_rocker_pane

0xe92e,	// (0x00019763) cell_cmode_rocker_pane_ParamLimits

0xe92e,	// (0x00019763) cell_cmode_rocker_pane

0xe940,	// (0x00019775) cell_cmode_itu_pane_ParamLimits

0xe940,	// (0x00019775) cell_cmode_itu_pane

0x6fcf,	// (0x00011e04) bg_button_pane_cp06_ParamLimits

0x6fcf,	// (0x00011e04) bg_button_pane_cp06

0xafc1,	// (0x00015df6) cell_cmode_rocker_pane_g1_ParamLimits

0xafc1,	// (0x00015df6) cell_cmode_rocker_pane_g1

0xc75d,	// (0x00017592) cell_cmode_rocker_pane_g2_ParamLimits

0xc75d,	// (0x00017592) cell_cmode_rocker_pane_g2

0x0001,

0xfd90,	// (0x0001abc5) cell_cmode_rocker_pane_g_ParamLimits

0xfd90,	// (0x0001abc5) cell_cmode_rocker_pane_g

0x6102,	// (0x00010f37) bg_button_pane_cp07

0xe955,	// (0x0001978a) cell_cmode_itu_pane_g1

0xe95e,	// (0x00019793) cell_cmode_itu_pane_t1

0xe96c,	// (0x000197a1) cell_cmode_itu_pane_t2

0x0001,

0xfd95,	// (0x0001abca) cell_cmode_itu_pane_t

0xc975,	// (0x000177aa) aid_touch_ctrl_left

0xc97d,	// (0x000177b2) aid_touch_ctrl_right

0x6102,	// (0x00010f37) compa_mode_pane

0x337d,	// (0x0000e1b2) aid_cmod_rocker_key_size_cp

0x3387,	// (0x0000e1bc) aid_cmode_itu_key_size_cp

0xe97a,	// (0x000197af) compa_mode_pane_g1

0xe982,	// (0x000197b7) compa_mode_pane_g2

0xe98a,	// (0x000197bf) compa_mode_pane_g3

0x0002,

0xfd9a,	// (0x0001abcf) compa_mode_pane_g

0x3391,	// (0x0000e1c6) main_comp_mode_itu_pane_cp

0x339b,	// (0x0000e1d0) main_comp_mode_rocker_pane_cp

0x33a5,	// (0x0000e1da) cell_cmode_itu_pane_cp_ParamLimits

0x33a5,	// (0x0000e1da) cell_cmode_itu_pane_cp

0x33ba,	// (0x0000e1ef) cell_cmode_rocker_pane_cp_ParamLimits

0x33ba,	// (0x0000e1ef) cell_cmode_rocker_pane_cp

0x6fcf,	// (0x00011e04) bg_button_pane_cp06_cp_ParamLimits

0x6fcf,	// (0x00011e04) bg_button_pane_cp06_cp

0xafc1,	// (0x00015df6) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xafc1,	// (0x00015df6) cell_cmode_rocker_pane_g1_cp

0xad89,	// (0x00015bbe) cell_cmode_rocker_pane_g2_cp

0x6102,	// (0x00010f37) bg_button_pane_cp07_cp

0x33cc,	// (0x0000e201) cell_cmode_itu_pane_g1_cp

0x33d5,	// (0x0000e20a) cell_cmode_itu_pane_t1_cp

0x33e3,	// (0x0000e218) cell_cmode_itu_pane_t2_cp

0x1d22,	// (0x0000cb57) settings_code_pane_cp2

0x62d3,	// (0x00011108) bg_popup_window_pane_cp3_ParamLimits

0x6779,	// (0x000115ae) heading_pane_cp3_ParamLimits

0x6788,	// (0x000115bd) listscroll_popup_graphic_pane_ParamLimits

0x514b,	// (0x0000ff80) fep_hwr_aid_pane_ParamLimits

0x55ab,	// (0x000103e0) aid_touch_sctrl_top_ParamLimits

0x55c6,	// (0x000103fb) sctrl_sk_top_pane_g1_ParamLimits

0x5390,	// (0x000101c5) sctrl_sk_top_pane_g2_ParamLimits

0xfcd0,	// (0x0001ab05) sctrl_sk_top_pane_g_ParamLimits

0x55d3,	// (0x00010408) sctrl_sk_top_pane_t1_ParamLimits

0x55ab,	// (0x000103e0) aid_touch_sctrl_bottom_ParamLimits

0x55d3,	// (0x00010408) sctrl_sk_bottom_pane_t1_ParamLimits

0xc8bf,	// (0x000176f4) aid_area_touch_clock

0xe4c5,	// (0x000192fa) aid_vkb2_area_top_pane_cell_ParamLimits

0xe4c5,	// (0x000192fa) aid_vkb2_area_top_pane_cell

0xe570,	// (0x000193a5) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xe570,	// (0x000193a5) aid_vkb2_area_bottom_pane_cell

0xce0c,	// (0x00017c41) popup_char_count_window

0xe992,	// (0x000197c7) popup_char_count_window_g1

0xe99b,	// (0x000197d0) popup_char_count_window_g2

0xe9a4,	// (0x000197d9) popup_char_count_window_g3

0x0002,

0xfda1,	// (0x0001abd6) popup_char_count_window_g

0xe9ad,	// (0x000197e2) popup_char_count_window_t1

0x5687,	// (0x000104bc) popup_fep_char_preview_window_ParamLimits

0x5687,	// (0x000104bc) popup_fep_char_preview_window

0xe4e5,	// (0x0001931a) vkb2_top_candi_pane_ParamLimits

0xe4e5,	// (0x0001931a) vkb2_top_candi_pane

0x33f1,	// (0x0000e226) cell_vkb2_top_candi_pane_ParamLimits

0x33f1,	// (0x0000e226) cell_vkb2_top_candi_pane

0x5b85,	// (0x000109ba) bg_popup_fep_char_preview_window_ParamLimits

0x5b85,	// (0x000109ba) bg_popup_fep_char_preview_window

0x5b93,	// (0x000109c8) popup_fep_char_preview_window_t1_ParamLimits

0x5b93,	// (0x000109c8) popup_fep_char_preview_window_t1

0xe9bb,	// (0x000197f0) bg_popup_fep_char_preview_window_g1

0xe9c3,	// (0x000197f8) bg_popup_fep_char_preview_window_g2

0xe9cb,	// (0x00019800) bg_popup_fep_char_preview_window_g3

0xe9d3,	// (0x00019808) bg_popup_fep_char_preview_window_g4

0xe9db,	// (0x00019810) bg_popup_fep_char_preview_window_g5

0xe9e3,	// (0x00019818) bg_popup_fep_char_preview_window_g6

0xe9eb,	// (0x00019820) bg_popup_fep_char_preview_window_g7

0xe9f3,	// (0x00019828) bg_popup_fep_char_preview_window_g8

0xe9fb,	// (0x00019830) bg_popup_fep_char_preview_window_g9

0x0009,

0xfda8,	// (0x0001abdd) bg_popup_fep_char_preview_window_g

0x5390,	// (0x000101c5) cell_vkb2_top_candi_pane_g1_ParamLimits

0x5390,	// (0x000101c5) cell_vkb2_top_candi_pane_g1

0x539e,	// (0x000101d3) cell_vkb2_top_candi_pane_g2_ParamLimits

0x539e,	// (0x000101d3) cell_vkb2_top_candi_pane_g2

0xe88e,	// (0x000196c3) cell_vkb2_top_candi_pane_g3_ParamLimits

0xe88e,	// (0x000196c3) cell_vkb2_top_candi_pane_g3

0x5bd5,	// (0x00010a0a) cell_vkb2_top_candi_pane_g4_ParamLimits

0x5bd5,	// (0x00010a0a) cell_vkb2_top_candi_pane_g4

0xb54f,	// (0x00016384) cell_vkb2_top_candi_pane_g5_ParamLimits

0xb54f,	// (0x00016384) cell_vkb2_top_candi_pane_g5

0x5bf6,	// (0x00010a2b) cell_vkb2_top_candi_pane_g6_ParamLimits

0x5bf6,	// (0x00010a2b) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdbd,	// (0x0001abf2) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdbd,	// (0x0001abf2) cell_vkb2_top_candi_pane_g

0x5c04,	// (0x00010a39) cell_vkb2_top_candi_pane_t1

0x4f63,	// (0x0000fd98) aid_size_touch_slider_mark_ParamLimits

0x4f63,	// (0x0000fd98) aid_size_touch_slider_mark

0x3145,	// (0x0000df7a) grid_graphic2_catg_pane_ParamLimits

0x3145,	// (0x0000df7a) grid_graphic2_catg_pane

0x31dc,	// (0x0000e011) popup_grid_graphic2_window_t1_ParamLimits

0x31dc,	// (0x0000e011) popup_grid_graphic2_window_t1

0x31f1,	// (0x0000e026) popup_grid_graphic2_window_t2_ParamLimits

0x31f1,	// (0x0000e026) popup_grid_graphic2_window_t2

0x0001,

0xfd76,	// (0x0001abab) popup_grid_graphic2_window_t_ParamLimits

0xfd76,	// (0x0001abab) popup_grid_graphic2_window_t

0x657b,	// (0x000113b0) bg_button_pane_cp05_ParamLimits

0x3355,	// (0x0000e18a) cell_graphic2_control_pane_g1_ParamLimits

0xc93b,	// (0x00017770) cell_graphic2_catg_pane_ParamLimits

0xc93b,	// (0x00017770) cell_graphic2_catg_pane

0x6102,	// (0x00010f37) bg_button_pane_cp12

0x3443,	// (0x0000e278) cell_graphic2_catg_pane_g1

0xc88b,	// (0x000176c0) cell_tb_ext_pane_t1_ParamLimits

0x59cf,	// (0x00010804) vkb2_top_cell_right_narrow_pane_ParamLimits

0x59cf,	// (0x00010804) vkb2_top_cell_right_narrow_pane

0x59e7,	// (0x0001081c) vkb2_top_cell_right_wide_pane_ParamLimits

0x59e7,	// (0x0001081c) vkb2_top_cell_right_wide_pane

0x513d,	// (0x0000ff72) bg_vkb2_func_pane_ParamLimits

0x513d,	// (0x0000ff72) bg_vkb2_func_pane

0x5a58,	// (0x0001088d) vkb2_top_cell_left_pane_g1_ParamLimits

0x513d,	// (0x0000ff72) bg_vkb2_fuc_pane_cp03_ParamLimits

0x513d,	// (0x0000ff72) bg_vkb2_fuc_pane_cp03

0x5ab6,	// (0x000108eb) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x860d,	// (0x00013442) bg_vkb2_func_pane_g1

0x8615,	// (0x0001344a) bg_vkb2_func_pane_g2

0x8625,	// (0x0001345a) bg_vkb2_func_pane_g3

0x861d,	// (0x00013452) bg_vkb2_func_pane_g4

0x862d,	// (0x00013462) bg_vkb2_func_pane_g5

0x8635,	// (0x0001346a) bg_vkb2_func_pane_g6

0x863d,	// (0x00013472) bg_vkb2_func_pane_g7

0x8645,	// (0x0001347a) bg_vkb2_func_pane_g8

0x8605,	// (0x0001343a) bg_vkb2_func_pane_g9

0x0008,

0xfdca,	// (0x0001abff) bg_vkb2_func_pane_g

0x513d,	// (0x0000ff72) bg_vkb2_fuc_pane_cp01_ParamLimits

0x513d,	// (0x0000ff72) bg_vkb2_fuc_pane_cp01

0x5a58,	// (0x0001088d) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x5a58,	// (0x0001088d) vkb2_top_cell_right_wide_pane_g1

0x513d,	// (0x0000ff72) bg_vkb2_fuc_pane_cp02_ParamLimits

0x513d,	// (0x0000ff72) bg_vkb2_fuc_pane_cp02

0x5ab6,	// (0x000108eb) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x5ab6,	// (0x000108eb) vkb2_top_cell_right_narrow_pane_g1

0x268b,	// (0x0000d4c0) aid_touch_area_decrease_ParamLimits

0x268b,	// (0x0000d4c0) aid_touch_area_decrease

0x26b9,	// (0x0000d4ee) aid_touch_area_increase_ParamLimits

0x26b9,	// (0x0000d4ee) aid_touch_area_increase

0x26e1,	// (0x0000d516) aid_touch_area_mute_ParamLimits

0x26e1,	// (0x0000d516) aid_touch_area_mute

0x2709,	// (0x0000d53e) aid_touch_area_slider_ParamLimits

0x2709,	// (0x0000d53e) aid_touch_area_slider

0x2749,	// (0x0000d57e) popup_slider_window_g4_ParamLimits

0x2749,	// (0x0000d57e) popup_slider_window_g4

0x2771,	// (0x0000d5a6) popup_slider_window_g5_ParamLimits

0x2771,	// (0x0000d5a6) popup_slider_window_g5

0x27a5,	// (0x0000d5da) popup_slider_window_g6_ParamLimits

0x27a5,	// (0x0000d5da) popup_slider_window_g6

0xc676,	// (0x000174ab) popup_slider_window_t2_ParamLimits

0xc676,	// (0x000174ab) popup_slider_window_t2

0x0001,

0xfcc4,	// (0x0001aaf9) popup_slider_window_t_ParamLimits

0xfcc4,	// (0x0001aaf9) popup_slider_window_t

0x27c1,	// (0x0000d5f6) slider_pane_ParamLimits

0x27c1,	// (0x0000d5f6) slider_pane

0xea03,	// (0x00019838) slider_pane_g1_ParamLimits

0xea03,	// (0x00019838) slider_pane_g1

0xea17,	// (0x0001984c) slider_pane_g2_ParamLimits

0xea17,	// (0x0001984c) slider_pane_g2

0xea2d,	// (0x00019862) slider_pane_g3_ParamLimits

0xea2d,	// (0x00019862) slider_pane_g3

0x0003,

0xfddd,	// (0x0001ac12) slider_pane_g_ParamLimits

0xfddd,	// (0x0001ac12) slider_pane_g

0xe096,	// (0x00018ecb) popup_tb_float_extension_window_ParamLimits

0xe096,	// (0x00018ecb) popup_tb_float_extension_window

0xea59,	// (0x0001988e) aid_size_cell_tb_float_ext

0x6102,	// (0x00010f37) bg_popup_sub_window_cp28

0xea64,	// (0x00019899) grid_tb_float_ext_pane

0xea6c,	// (0x000198a1) cell_tb_float_ext_pane_ParamLimits

0xea6c,	// (0x000198a1) cell_tb_float_ext_pane

0xea84,	// (0x000198b9) cell_tb_float_ext_pane_g1

0xea8d,	// (0x000198c2) grid_highlight_pane_cp12

0xe2fb,	// (0x00019130) cell_last_hwr_side_pane_ParamLimits

0xe2fb,	// (0x00019130) cell_last_hwr_side_pane

0xad89,	// (0x00015bbe) cell_last_hwr_side_pane_g1

0xea96,	// (0x000198cb) cell_last_hwr_side_pane_g2

0x0001,

0xfde6,	// (0x0001ac1b) cell_last_hwr_side_pane_g

0xe644,	// (0x00019479) vkb2_area_bottom_space_btn_pane_ParamLimits

0xe644,	// (0x00019479) vkb2_area_bottom_space_btn_pane

0x5390,	// (0x000101c5) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe8d4,	// (0x00019709) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x5c04,	// (0x00010a39) cell_vkb2_top_candi_pane_t1_ParamLimits

0x5c1a,	// (0x00010a4f) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x5c1a,	// (0x00010a4f) vkb2_area_bottom_space_btn_pane_g1

0x5c50,	// (0x00010a85) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x5c50,	// (0x00010a85) vkb2_area_bottom_space_btn_pane_g2

0x5c86,	// (0x00010abb) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x5c86,	// (0x00010abb) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdeb,	// (0x0001ac20) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdeb,	// (0x0001ac20) vkb2_area_bottom_space_btn_pane_g

0x51fa,	// (0x0001002f) cel_fep_hwr_func_pane_ParamLimits

0x51fa,	// (0x0001002f) cel_fep_hwr_func_pane

0xe2d0,	// (0x00019105) cell_hwr_side_button_pane_ParamLimits

0xe2d0,	// (0x00019105) cell_hwr_side_button_pane

0xc8bf,	// (0x000176f4) aid_area_touch_clock_ParamLimits

0x657b,	// (0x000113b0) bg_uniindi_top_pane_ParamLimits

0xc8d1,	// (0x00017706) uniindi_top_pane_g1_ParamLimits

0xc8e7,	// (0x0001771c) uniindi_top_pane_g2_ParamLimits

0xc8f3,	// (0x00017728) uniindi_top_pane_g3_ParamLimits

0xc904,	// (0x00017739) uniindi_top_pane_g4_ParamLimits

0xfcfc,	// (0x0001ab31) uniindi_top_pane_g_ParamLimits

0xc911,	// (0x00017746) uniindi_top_pane_t1_ParamLimits

0x657b,	// (0x000113b0) bg_vkb2_func_pane_cp01_ParamLimits

0x657b,	// (0x000113b0) bg_vkb2_func_pane_cp01

0xea9f,	// (0x000198d4) cel_fep_hwr_func_pane_g1_ParamLimits

0xea9f,	// (0x000198d4) cel_fep_hwr_func_pane_g1

0x657b,	// (0x000113b0) bg_vkb2_func_pane_cp02_ParamLimits

0x657b,	// (0x000113b0) bg_vkb2_func_pane_cp02

0xea9f,	// (0x000198d4) cell_hwr_side_button_pane_g1_ParamLimits

0xea9f,	// (0x000198d4) cell_hwr_side_button_pane_g1

0x846b,	// (0x000132a0) status_pane_g4_ParamLimits

0x846b,	// (0x000132a0) status_pane_g4

0x8483,	// (0x000132b8) status_pane_t1

0xab6b,	// (0x000159a0) form2_midp_gauge_slider_cont_pane

0xab73,	// (0x000159a8) form2_midp_gauge_slider_pane_t1_ParamLimits

0x200e,	// (0x0000ce43) form2_midp_gauge_slider_pane_t2_ParamLimits

0x2020,	// (0x0000ce55) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfac3,	// (0x0001a8f8) form2_midp_gauge_slider_pane_t_ParamLimits

0xaba9,	// (0x000159de) form2_midp_slider_pane_ParamLimits

0x5647,	// (0x0001047c) aid_size_cell_func_vkb2_ParamLimits

0x5647,	// (0x0001047c) aid_size_cell_func_vkb2

0xea45,	// (0x0001987a) slider_pane_g4_ParamLimits

0xea45,	// (0x0001987a) slider_pane_g4

0xe69d,	// (0x000194d2) form2_midp_gauge_slider_pane_t2_cp01

0xe6ab,	// (0x000194e0) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xe6ab,	// (0x000194e0) form2_midp_gauge_slider_pane_t3_cp01

0x5cf7,	// (0x00010b2c) form2_midp_slider_pane_cp01

0x6102,	// (0x00010f37) navi_smil_pane

0xeacf,	// (0x00019904) navi_smil_pane_g1

0xead7,	// (0x0001990c) navi_smil_pane_t1

0xeaad,	// (0x000198e2) form2_midp_slider_pane_g1

0xeab6,	// (0x000198eb) form2_midp_slider_pane_g2

0xeabe,	// (0x000198f3) form2_midp_slider_pane_g3

0xeaad,	// (0x000198e2) form2_midp_slider_pane_g4

0x3477,	// (0x0000e2ac) form2_midp_slider_pane_g5

0x0004,

0xfdf4,	// (0x0001ac29) form2_midp_slider_pane_g

0x5cbc,	// (0x00010af1) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x5cbc,	// (0x00010af1) vkb2_area_bottom_space_btn_pane_g4

0x15aa,	// (0x0000c3df) lc0_navi_pane_ParamLimits

0x15aa,	// (0x0000c3df) lc0_navi_pane

0x1614,	// (0x0000c449) lc0_stat_indi_pane_ParamLimits

0x1614,	// (0x0000c449) lc0_stat_indi_pane

0x1629,	// (0x0000c45e) ls0_title_pane_ParamLimits

0x1629,	// (0x0000c45e) ls0_title_pane

0x6fcf,	// (0x00011e04) bg_popup_sub_pane_cp14_ParamLimits

0xc8a6,	// (0x000176db) list_uniindi_pane_ParamLimits

0xc8b2,	// (0x000176e7) uniindi_top_pane_ParamLimits

0xc94d,	// (0x00017782) list_single_uniindi_pane_g1_ParamLimits

0xc960,	// (0x00017795) list_single_uniindi_pane_t1_ParamLimits

0xe6c8,	// (0x000194fd) lc0_stat_clock_pane_ParamLimits

0xe6c8,	// (0x000194fd) lc0_stat_clock_pane

0x349a,	// (0x0000e2cf) lc0_stat_indi_pane_g1_ParamLimits

0x349a,	// (0x0000e2cf) lc0_stat_indi_pane_g1

0x348d,	// (0x0000e2c2) lc0_stat_indi_pane_g2_ParamLimits

0x348d,	// (0x0000e2c2) lc0_stat_indi_pane_g2

0x0001,

0xfdff,	// (0x0001ac34) lc0_stat_indi_pane_g_ParamLimits

0xfdff,	// (0x0001ac34) lc0_stat_indi_pane_g

0xe6d5,	// (0x0001950a) lc0_uni_indicator_pane_ParamLimits

0xe6d5,	// (0x0001950a) lc0_uni_indicator_pane

0xeae5,	// (0x0001991a) ls0_title_pane_g1_ParamLimits

0xeae5,	// (0x0001991a) ls0_title_pane_g1

0x34b4,	// (0x0000e2e9) ls0_title_pane_t1_ParamLimits

0x34b4,	// (0x0000e2e9) ls0_title_pane_t1

0xe6e2,	// (0x00019517) lc0_uni_indicator_pane_g1_ParamLimits

0xe6e2,	// (0x00019517) lc0_uni_indicator_pane_g1

0xeaf9,	// (0x0001992e) lc0_stat_clock_pane_t1

0x3f85,	// (0x0000edba) main_ai5_pane

0xeb07,	// (0x0001993c) ai5_sk_pane_ParamLimits

0xeb07,	// (0x0001993c) ai5_sk_pane

0x34f7,	// (0x0000e32c) cell_ai5_widget_pane_ParamLimits

0x34f7,	// (0x0000e32c) cell_ai5_widget_pane

0xeb14,	// (0x00019949) aid_size_cell_widget_grid

0xeb21,	// (0x00019956) bg_ai5_widget_pane_ParamLimits

0xeb21,	// (0x00019956) bg_ai5_widget_pane

0x3584,	// (0x0000e3b9) cell_ai5_widget_pane_g2

0x3598,	// (0x0000e3cd) cell_ai5_widget_pane_g3

0x35b2,	// (0x0000e3e7) cell_ai5_widget_pane_g4

0x35c2,	// (0x0000e3f7) cell_ai5_widget_pane_g5

0x35d2,	// (0x0000e407) cell_ai5_widget_pane_g6

0x35de,	// (0x0000e413) cell_ai5_widget_pane_g7

0x364a,	// (0x0000e47f) cell_ai5_widget_pane_t1_ParamLimits

0x364a,	// (0x0000e47f) cell_ai5_widget_pane_t1

0x3667,	// (0x0000e49c) cell_ai5_widget_pane_t2_ParamLimits

0x3667,	// (0x0000e49c) cell_ai5_widget_pane_t2

0x367f,	// (0x0000e4b4) cell_ai5_widget_pane_t3_ParamLimits

0x367f,	// (0x0000e4b4) cell_ai5_widget_pane_t3

0x3697,	// (0x0000e4cc) cell_ai5_widget_pane_t4_ParamLimits

0x3697,	// (0x0000e4cc) cell_ai5_widget_pane_t4

0x36bd,	// (0x0000e4f2) cell_ai5_widget_pane_t5_ParamLimits

0x36bd,	// (0x0000e4f2) cell_ai5_widget_pane_t5

0xeb5b,	// (0x00019990) cell_ai5_widget_pane_t6_ParamLimits

0xeb5b,	// (0x00019990) cell_ai5_widget_pane_t6

0xeb6d,	// (0x000199a2) cell_ai5_widget_pane_t7_ParamLimits

0xeb6d,	// (0x000199a2) cell_ai5_widget_pane_t7

0x36dc,	// (0x0000e511) cell_ai5_widget_pane_t8_ParamLimits

0x36dc,	// (0x0000e511) cell_ai5_widget_pane_t8

0x000b,

0xfe1f,	// (0x0001ac54) cell_ai5_widget_pane_t_ParamLimits

0xfe1f,	// (0x0001ac54) cell_ai5_widget_pane_t

0x3760,	// (0x0000e595) grid_ai5_widget_pane

0x6fcf,	// (0x00011e04) highlight_cell_ai5_widget_pane_ParamLimits

0x6fcf,	// (0x00011e04) highlight_cell_ai5_widget_pane

0x376c,	// (0x0000e5a1) ai5_sk_left_pane

0x3776,	// (0x0000e5ab) ai5_sk_middle_pane

0x3780,	// (0x0000e5b5) ai5_sk_right_pane

0xeb8c,	// (0x000199c1) bg_ai5_widget_pane_g1_ParamLimits

0xeb8c,	// (0x000199c1) bg_ai5_widget_pane_g1

0xeb98,	// (0x000199cd) bg_ai5_widget_pane_g2_ParamLimits

0xeb98,	// (0x000199cd) bg_ai5_widget_pane_g2

0xeba4,	// (0x000199d9) bg_ai5_widget_pane_g3_ParamLimits

0xeba4,	// (0x000199d9) bg_ai5_widget_pane_g3

0xebb0,	// (0x000199e5) bg_ai5_widget_pane_g4_ParamLimits

0xebb0,	// (0x000199e5) bg_ai5_widget_pane_g4

0xebbc,	// (0x000199f1) bg_ai5_widget_pane_g5_ParamLimits

0xebbc,	// (0x000199f1) bg_ai5_widget_pane_g5

0xebc8,	// (0x000199fd) bg_ai5_widget_pane_g6_ParamLimits

0xebc8,	// (0x000199fd) bg_ai5_widget_pane_g6

0xebd4,	// (0x00019a09) bg_ai5_widget_pane_g7_ParamLimits

0xebd4,	// (0x00019a09) bg_ai5_widget_pane_g7

0xebe0,	// (0x00019a15) bg_ai5_widget_pane_g8_ParamLimits

0xebe0,	// (0x00019a15) bg_ai5_widget_pane_g8

0xebec,	// (0x00019a21) bg_ai5_widget_pane_g9_ParamLimits

0xebec,	// (0x00019a21) bg_ai5_widget_pane_g9

0x0008,

0xfe38,	// (0x0001ac6d) bg_ai5_widget_pane_g_ParamLimits

0xfe38,	// (0x0001ac6d) bg_ai5_widget_pane_g

0xec1c,	// (0x00019a51) cell_shortcut_ai5_widget_pane_ParamLimits

0xec1c,	// (0x00019a51) cell_shortcut_ai5_widget_pane

0xec2d,	// (0x00019a62) bg_cell_shortcut_ai5_widget_pane

0x6735,	// (0x0001156a) cell_grid_ai5_widget_pane_g1

0x7db9,	// (0x00012bee) highlight_cell_shortcut_ai5_widget_pane

0x860d,	// (0x00013442) ai5_sk_left_pane_g1

0xec35,	// (0x00019a6a) ai5_sk_left_pane_g2

0xec3d,	// (0x00019a72) ai5_sk_left_pane_g3

0xec45,	// (0x00019a7a) ai5_sk_left_pane_g4

0x0003,

0xfe4b,	// (0x0001ac80) ai5_sk_left_pane_g

0xec4d,	// (0x00019a82) ai5_sk_left_pane_t1

0x8615,	// (0x0001344a) ai5_sk_right_pane_g1

0xec5b,	// (0x00019a90) ai5_sk_right_pane_g2

0xec63,	// (0x00019a98) ai5_sk_right_pane_g3

0xec6b,	// (0x00019aa0) ai5_sk_right_pane_g4

0x0003,

0xfe54,	// (0x0001ac89) ai5_sk_right_pane_g

0xec73,	// (0x00019aa8) ai5_sk_right_pane_t1

0x8615,	// (0x0001344a) ai5_sk_middle_pane_g1

0x860d,	// (0x00013442) ai5_sk_middle_pane_g2

0x862d,	// (0x00013462) ai5_sk_middle_pane_g3

0xec63,	// (0x00019a98) ai5_sk_middle_pane_g4

0xec3d,	// (0x00019a72) ai5_sk_middle_pane_g5

0xec81,	// (0x00019ab6) ai5_sk_middle_pane_g6

0x378a,	// (0x0000e5bf) ai5_sk_middle_pane_g7

0x0006,

0xfe5d,	// (0x0001ac92) ai5_sk_middle_pane_g

0x14a8,	// (0x0000c2dd) aid_touch_area_size_lc0_ParamLimits

0x14a8,	// (0x0000c2dd) aid_touch_area_size_lc0

0x53bf,	// (0x000101f4) cell_hwr_candidate_pane_t1_ParamLimits

0x8168,	// (0x00012f9d) aid_touch_navi_pane

0x1715,	// (0x0000c54a) status_dt_navi_pane_ParamLimits

0x1715,	// (0x0000c54a) status_dt_navi_pane

0x172d,	// (0x0000c562) status_dt_sta_pane_ParamLimits

0x172d,	// (0x0000c562) status_dt_sta_pane

0x3792,	// (0x0000e5c7) dt_sta_controll_pane

0x379f,	// (0x0000e5d4) dt_sta_indi_pane

0x37ac,	// (0x0000e5e1) dt_sta_title_pane

0x657b,	// (0x000113b0) bg_dt_sta_indi_pane_ParamLimits

0x657b,	// (0x000113b0) bg_dt_sta_indi_pane

0x37be,	// (0x0000e5f3) dt_sta_battery_pane

0x37c6,	// (0x0000e5fb) dt_sta_indi_pane_g1

0x37cf,	// (0x0000e604) dt_sta_indi_pane_g2

0x37d8,	// (0x0000e60d) dt_sta_indi_pane_g3

0x0002,

0xfe6c,	// (0x0001aca1) dt_sta_indi_pane_g

0x37e1,	// (0x0000e616) dt_sta_signal_pane

0x6fcf,	// (0x00011e04) bg_dt_sta_title_pane_ParamLimits

0x6fcf,	// (0x00011e04) bg_dt_sta_title_pane

0x37ea,	// (0x0000e61f) dt_sta_title_pane_g1

0x37f2,	// (0x0000e627) dt_sta_title_pane_t1_ParamLimits

0x37f2,	// (0x0000e627) dt_sta_title_pane_t1

0x6102,	// (0x00010f37) bg_dt_sta_control_pane

0x3807,	// (0x0000e63c) dt_sta_controll_pane_g1

0x3810,	// (0x0000e645) bg_dt_sta_title_pane_g1

0x3819,	// (0x0000e64e) bg_dt_sta_title_pane_g2

0x3822,	// (0x0000e657) bg_dt_sta_title_pane_g3

0x0002,

0xfe73,	// (0x0001aca8) bg_dt_sta_title_pane_g

0xad89,	// (0x00015bbe) bg_dt_sta_indi_pane_g1

0x382b,	// (0x0000e660) dt_sta_signal_pane_g1

0x3833,	// (0x0000e668) dt_sta_signal_pane_g2

0x0001,

0xfe7a,	// (0x0001acaf) dt_sta_signal_pane_g

0xec89,	// (0x00019abe) dt_sta_battery_pane_g1

0xec92,	// (0x00019ac7) dt_sta_battery_pane_t1

0xad89,	// (0x00015bbe) bg_dt_sta_control_pane_g1

0x7897,	// (0x000126cc) fep_china_uni_eep_pane

0x789f,	// (0x000126d4) fep_china_uni_entry_pane_ParamLimits

0x78af,	// (0x000126e4) popup_fep_china_uni_window_g1_ParamLimits

0x78bf,	// (0x000126f4) popup_fep_china_uni_window_g2_ParamLimits

0x78bf,	// (0x000126f4) popup_fep_china_uni_window_g2

0x0001,

0xf6f3,	// (0x0001a528) popup_fep_china_uni_window_g_ParamLimits

0xf6f3,	// (0x0001a528) popup_fep_china_uni_window_g

0xeca1,	// (0x00019ad6) fep_china_uni_eep_pane_g1

0xeca9,	// (0x00019ade) fep_china_uni_eep_pane_t1

0xeac6,	// (0x000198fb) aid_touch_area_size_smil_player

0x82a5,	// (0x000130da) lc0_clock_pane

0x8477,	// (0x000132ac) status_pane_g5_ParamLimits

0x8477,	// (0x000132ac) status_pane_g5

0xdcca,	// (0x00018aff) popup_keymap_window

0x843f,	// (0x00013274) status_icon_pane

0x3598,	// (0x0000e3cd) cell_ai5_widget_pane_g3_ParamLimits

0x35b2,	// (0x0000e3e7) cell_ai5_widget_pane_g4_ParamLimits

0x35c2,	// (0x0000e3f7) cell_ai5_widget_pane_g5_ParamLimits

0x35ea,	// (0x0000e41f) cell_ai5_widget_pane_g8_ParamLimits

0x35ea,	// (0x0000e41f) cell_ai5_widget_pane_g8

0x35fe,	// (0x0000e433) cell_ai5_widget_pane_g9_ParamLimits

0x35fe,	// (0x0000e433) cell_ai5_widget_pane_g9

0x3612,	// (0x0000e447) cell_ai5_widget_pane_g10_ParamLimits

0x3612,	// (0x0000e447) cell_ai5_widget_pane_g10

0xecb8,	// (0x00019aed) status_icon_pane_g1

0x6102,	// (0x00010f37) bg_popup_sub_pane_cp13

0xecc0,	// (0x00019af5) popup_keymap_window_t1

0x0da6,	// (0x0000bbdb) control_pane_g6_ParamLimits

0x0da6,	// (0x0000bbdb) control_pane_g6

0x0d99,	// (0x0000bbce) control_pane_g7_ParamLimits

0x0d99,	// (0x0000bbce) control_pane_g7

0x0d8c,	// (0x0000bbc1) control_pane_g8_ParamLimits

0x0d8c,	// (0x0000bbc1) control_pane_g8

0x3792,	// (0x0000e5c7) dt_sta_controll_pane_ParamLimits

0x379f,	// (0x0000e5d4) dt_sta_indi_pane_ParamLimits

0x37ac,	// (0x0000e5e1) dt_sta_title_pane_ParamLimits

0x6a06,	// (0x0001183b) aid_size_touch_scroll_bar_cale

0x405c,	// (0x0000ee91) popup_discreet_window_ParamLimits

0x405c,	// (0x0000ee91) popup_discreet_window

0xd908,	// (0x0001873d) popup_sk_window

0x8ce9,	// (0x00013b1e) bg_popup_sub_pane_cp28_ParamLimits

0x8ce9,	// (0x00013b1e) bg_popup_sub_pane_cp28

0xecce,	// (0x00019b03) popup_discreet_window_g1_ParamLimits

0xecce,	// (0x00019b03) popup_discreet_window_g1

0xecee,	// (0x00019b23) popup_discreet_window_t1_ParamLimits

0xecee,	// (0x00019b23) popup_discreet_window_t1

0xed0c,	// (0x00019b41) popup_discreet_window_t2_ParamLimits

0xed0c,	// (0x00019b41) popup_discreet_window_t2

0x0002,

0xfe7f,	// (0x0001acb4) popup_discreet_window_t_ParamLimits

0xfe7f,	// (0x0001acb4) popup_discreet_window_t

0x5d2c,	// (0x00010b61) popup_sk_window_g1

0x5d35,	// (0x00010b6a) popup_sk_window_g2

0x0001,

0xfe86,	// (0x0001acbb) popup_sk_window_g

0x5d3e,	// (0x00010b73) popup_sk_window_t1

0x5d4c,	// (0x00010b81) popup_sk_window_t1_copy1

0x3584,	// (0x0000e3b9) cell_ai5_widget_pane_g2_ParamLimits

0x36ee,	// (0x0000e523) cell_ai5_widget_pane_t9_ParamLimits

0x36ee,	// (0x0000e523) cell_ai5_widget_pane_t9

0x6102,	// (0x00010f37) main_fep_fshwr2_pane

0xe6f7,	// (0x0001952c) aid_fshwr2_btn_pane

0xe70b,	// (0x00019540) aid_fshwr2_syb_pane

0xe71f,	// (0x00019554) aid_fshwr2_txt_pane

0xe72f,	// (0x00019564) fshwr2_func_candi_pane

0xe747,	// (0x0001957c) fshwr2_hwr_syb_pane

0xe75f,	// (0x00019594) fshwr2_icf_pane

0x3f85,	// (0x0000edba) fshwr2_icf_bg_pane

0xe789,	// (0x000195be) fshwr2_icf_pane_t1_ParamLimits

0xe789,	// (0x000195be) fshwr2_icf_pane_t1

0x779d,	// (0x000125d2) fshwr2_func_candi_pane_g1

0x38e4,	// (0x0000e719) fshwr2_func_candi_row_pane_ParamLimits

0x38e4,	// (0x0000e719) fshwr2_func_candi_row_pane

0xe7a0,	// (0x000195d5) cell_fshwr2_syb_pane_ParamLimits

0xe7a0,	// (0x000195d5) cell_fshwr2_syb_pane

0x5e09,	// (0x00010c3e) fshwr2_hwr_syb_pane_g1_ParamLimits

0x5e09,	// (0x00010c3e) fshwr2_hwr_syb_pane_g1

0x3f85,	// (0x0000edba) bg_popup_call_pane_cp01

0xe7c2,	// (0x000195f7) fshwr2_func_candi_cell_pane_ParamLimits

0xe7c2,	// (0x000195f7) fshwr2_func_candi_cell_pane

0x8adb,	// (0x00013910) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x8adb,	// (0x00013910) fshwr2_func_candi_cell_bg_pane

0xe801,	// (0x00019636) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xe801,	// (0x00019636) fshwr2_func_candi_cell_pane_g1

0xe838,	// (0x0001966d) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xe838,	// (0x0001966d) fshwr2_func_candi_cell_pane_t1

0x3f85,	// (0x0000edba) bg_button_pane_cp08

0x8108,	// (0x00012f3d) cell_fshwr2_syb_bg_pane

0xe853,	// (0x00019688) cell_fshwr2_syb_bg_pane_g1

0xe863,	// (0x00019698) cell_fshwr2_syb_bg_pane_t1

0x6fcf,	// (0x00011e04) main_tmo_pane

0x1b2e,	// (0x0000c963) uni_indicator_pane_g1_ParamLimits

0x1b42,	// (0x0000c977) uni_indicator_pane_g2_ParamLimits

0x1b57,	// (0x0000c98c) uni_indicator_pane_g3_ParamLimits

0x97db,	// (0x00014610) uni_indicator_pane_g4_ParamLimits

0x97db,	// (0x00014610) uni_indicator_pane_g4

0x97ef,	// (0x00014624) uni_indicator_pane_g5_ParamLimits

0x97ef,	// (0x00014624) uni_indicator_pane_g5

0x97ef,	// (0x00014624) uni_indicator_pane_g6_ParamLimits

0x97ef,	// (0x00014624) uni_indicator_pane_g6

0xf8eb,	// (0x0001a720) uni_indicator_pane_g_ParamLimits

0x266f,	// (0x0000d4a4) popup_tmo_note_window_ParamLimits

0x266f,	// (0x0000d4a4) popup_tmo_note_window

0x5623,	// (0x00010458) fshwr2_bg_pane

0xe829,	// (0x0001965e) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xe829,	// (0x0001965e) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe8b,	// (0x0001acc0) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe8b,	// (0x0001acc0) fshwr2_func_candi_cell_pane_g

0x5378,	// (0x000101ad) bg_popup_window_pane_cp01

0x5eb3,	// (0x00010ce8) bg_popup_window_pane_g1_cp01

0xed5e,	// (0x00019b93) bg_popup_window_pane_cp22_ParamLimits

0xed5e,	// (0x00019b93) bg_popup_window_pane_cp22

0xed6c,	// (0x00019ba1) listscroll_tmo_link_pane_ParamLimits

0xed6c,	// (0x00019ba1) listscroll_tmo_link_pane

0xedac,	// (0x00019be1) popup_tmo_note_window_g1_ParamLimits

0xedac,	// (0x00019be1) popup_tmo_note_window_g1

0xedb9,	// (0x00019bee) tmo_note_info_pane_ParamLimits

0xedb9,	// (0x00019bee) tmo_note_info_pane

0x39e0,	// (0x0000e815) list_tmo_note_info_pane_g1_ParamLimits

0x39e0,	// (0x0000e815) list_tmo_note_info_pane_g1

0xedd3,	// (0x00019c08) list_tmo_note_info_pane_g2_ParamLimits

0xedd3,	// (0x00019c08) list_tmo_note_info_pane_g2

0x0001,

0xfe90,	// (0x0001acc5) list_tmo_note_info_pane_g_ParamLimits

0xfe90,	// (0x0001acc5) list_tmo_note_info_pane_g

0xedef,	// (0x00019c24) list_tmo_note_info_text_pane_ParamLimits

0xedef,	// (0x00019c24) list_tmo_note_info_text_pane

0xee31,	// (0x00019c66) list_tmo_link_pane

0xee3e,	// (0x00019c73) scroll_pane_cp20

0xee4b,	// (0x00019c80) list_single_tmo_link_pane_ParamLimits

0xee4b,	// (0x00019c80) list_single_tmo_link_pane

0xee5b,	// (0x00019c90) list_single_tmo_link_pane_t1

0xee69,	// (0x00019c9e) list_tmo_note_info_text_pane_t1_ParamLimits

0xee69,	// (0x00019c9e) list_tmo_note_info_text_pane_t1

0x71f7,	// (0x0001202c) aid_size_touch_scroll_bar_cp01_ParamLimits

0x71f7,	// (0x0001202c) aid_size_touch_scroll_bar_cp01

0x084e,	// (0x0000b683) aid_size_touch_slider_marker

0xd8fc,	// (0x00018731) popup_settings_window_ParamLimits

0xd8fc,	// (0x00018731) popup_settings_window

0x8122,	// (0x00012f57) popup_candi_list_indi_window

0x8168,	// (0x00012f9d) aid_touch_navi_pane_ParamLimits

0x557f,	// (0x000103b4) rs_clock_indi_pane

0x5588,	// (0x000103bd) sctrl_sk_bottom_pane_ParamLimits

0x5599,	// (0x000103ce) sctrl_sk_top_pane_ParamLimits

0x56a1,	// (0x000104d6) popup_fep_tooltip_window

0xeb14,	// (0x00019949) aid_size_cell_widget_grid_ParamLimits

0x3570,	// (0x0000e3a5) cell_ai5_widget_pane_g1_ParamLimits

0x3570,	// (0x0000e3a5) cell_ai5_widget_pane_g1

0x35d2,	// (0x0000e407) cell_ai5_widget_pane_g6_ParamLimits

0x35de,	// (0x0000e413) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe04,	// (0x0001ac39) cell_ai5_widget_pane_g_ParamLimits

0xfe04,	// (0x0001ac39) cell_ai5_widget_pane_g

0x371d,	// (0x0000e552) cell_ai5_widget_pane_t10_ParamLimits

0x371d,	// (0x0000e552) cell_ai5_widget_pane_t10

0x3760,	// (0x0000e595) grid_ai5_widget_pane_ParamLimits

0xebf8,	// (0x00019a2d) cell_contacts_ai5_widget_pane_ParamLimits

0xebf8,	// (0x00019a2d) cell_contacts_ai5_widget_pane

0xed21,	// (0x00019b56) popup_discreet_window_t3_ParamLimits

0xed21,	// (0x00019b56) popup_discreet_window_t3

0xe777,	// (0x000195ac) popup_fshwr2_char_preview_window_ParamLimits

0xe777,	// (0x000195ac) popup_fshwr2_char_preview_window

0x39f7,	// (0x0000e82c) tmo_note_info_pane_t1

0x3a0c,	// (0x0000e841) tmo_note_info_pane_t2

0x3a21,	// (0x0000e856) tmo_note_info_pane_t3

0xee0d,	// (0x00019c42) tmo_note_info_pane_t4

0xee1f,	// (0x00019c54) tmo_note_info_pane_t5

0x0004,

0xfe95,	// (0x0001acca) tmo_note_info_pane_t

0xee31,	// (0x00019c66) list_tmo_link_pane_ParamLimits

0xee3e,	// (0x00019c73) scroll_pane_cp20_ParamLimits

0x3f85,	// (0x0000edba) bg_popup_fep_char_preview_window_cp01

0xee82,	// (0x00019cb7) popup_fshwr2_char_preview_window_t1

0xee90,	// (0x00019cc5) popup_candi_list_indi_window_g1

0xee99,	// (0x00019cce) bg_cell_contacts_ai5_widget_pane

0xeea5,	// (0x00019cda) cell_contacts_ai5_widget_pane_g1

0xeeba,	// (0x00019cef) cell_contacts_ai5_widget_pane_g2

0xeec6,	// (0x00019cfb) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfea0,	// (0x0001acd5) cell_contacts_ai5_widget_pane_g

0xeed2,	// (0x00019d07) cell_contacts_ai5_widget_pane_t1

0x6fcf,	// (0x00011e04) highlight_cell_shortcut_ai5_widget_pane_cp01

0xef47,	// (0x00019d7c) settings_container_pane

0x7db9,	// (0x00012bee) listscroll_set_pane_copy1

0xa2ce,	// (0x00015103) scroll_pane_cp121_copy1

0xef53,	// (0x00019d88) set_content_pane_copy1

0xef5b,	// (0x00019d90) aid_height_set_list_copy1_ParamLimits

0xef5b,	// (0x00019d90) aid_height_set_list_copy1

0x99c6,	// (0x000147fb) aid_size_parent_copy1_ParamLimits

0x99c6,	// (0x000147fb) aid_size_parent_copy1

0xef67,	// (0x00019d9c) button_value_adjust_pane_cp6_copy1_ParamLimits

0xef67,	// (0x00019d9c) button_value_adjust_pane_cp6_copy1

0x8108,	// (0x00012f3d) list_highlight_pane_cp2_copy1_ParamLimits

0x8108,	// (0x00012f3d) list_highlight_pane_cp2_copy1

0xef7b,	// (0x00019db0) list_set_pane_copy1_ParamLimits

0xef7b,	// (0x00019db0) list_set_pane_copy1

0xeee4,	// (0x00019d19) main_pane_set_t1_copy1_ParamLimits

0xeee4,	// (0x00019d19) main_pane_set_t1_copy1

0xef1e,	// (0x00019d53) main_pane_set_t2_copy1_ParamLimits

0xef1e,	// (0x00019d53) main_pane_set_t2_copy1

0xf009,	// (0x00019e3e) main_pane_set_t3_copy1

0xf017,	// (0x00019e4c) main_pane_set_t4_copy1

0xef3b,	// (0x00019d70) set_content_pane_g1_copy1_ParamLimits

0xef3b,	// (0x00019d70) set_content_pane_g1_copy1

0xf025,	// (0x00019e5a) setting_code_pane_copy1

0xf02d,	// (0x00019e62) setting_slider_graphic_pane_copy1

0xf02d,	// (0x00019e62) setting_slider_pane_copy1

0xf02d,	// (0x00019e62) setting_text_pane_copy1

0xf02d,	// (0x00019e62) setting_volume_pane_copy1

0xf035,	// (0x00019e6a) settings_code_pane_cp2_copy1

0xf03d,	// (0x00019e72) settings_code_pane_cp_copy1_ParamLimits

0xf03d,	// (0x00019e72) settings_code_pane_cp_copy1

0x5ebc,	// (0x00010cf1) volume_set_pane_copy1

0xf051,	// (0x00019e86) volume_set_pane_g10_copy1

0xf059,	// (0x00019e8e) volume_set_pane_g1_copy1

0xf061,	// (0x00019e96) volume_set_pane_g2_copy1

0xf069,	// (0x00019e9e) volume_set_pane_g3_copy1

0xf071,	// (0x00019ea6) volume_set_pane_g4_copy1

0xf079,	// (0x00019eae) volume_set_pane_g5_copy1

0xf081,	// (0x00019eb6) volume_set_pane_g6_copy1

0xf089,	// (0x00019ebe) volume_set_pane_g7_copy1

0xf091,	// (0x00019ec6) volume_set_pane_g8_copy1

0xf099,	// (0x00019ece) volume_set_pane_g9_copy1

0x62d3,	// (0x00011108) bg_set_opt_pane_cp_copy1_ParamLimits

0x62d3,	// (0x00011108) bg_set_opt_pane_cp_copy1

0x5ec4,	// (0x00010cf9) setting_slider_pane_t1_copy1_ParamLimits

0x5ec4,	// (0x00010cf9) setting_slider_pane_t1_copy1

0x5edb,	// (0x00010d10) setting_slider_pane_t2_copy1_ParamLimits

0x5edb,	// (0x00010d10) setting_slider_pane_t2_copy1

0x5ef4,	// (0x00010d29) setting_slider_pane_t3_copy1_ParamLimits

0x5ef4,	// (0x00010d29) setting_slider_pane_t3_copy1

0x41dc,	// (0x0000f011) slider_set_pane_copy1_ParamLimits

0x41dc,	// (0x0000f011) slider_set_pane_copy1

0x70f2,	// (0x00011f27) set_opt_bg_pane_g1_copy2

0x70fa,	// (0x00011f2f) set_opt_bg_pane_g2_copy2

0xf0a1,	// (0x00019ed6) set_opt_bg_pane_g3_copy2

0x710a,	// (0x00011f3f) set_opt_bg_pane_g4_copy2

0x7112,	// (0x00011f47) set_opt_bg_pane_g5_copy2

0x711a,	// (0x00011f4f) set_opt_bg_pane_g6_copy2

0xf0a9,	// (0x00019ede) set_opt_bg_pane_g7_copy2

0xf0b1,	// (0x00019ee6) set_opt_bg_pane_g8_copy2

0xf0b9,	// (0x00019eee) set_opt_bg_pane_g9_copy2

0x4f63,	// (0x0000fd98) aid_size_touch_slider_mark_copy1_ParamLimits

0x4f63,	// (0x0000fd98) aid_size_touch_slider_mark_copy1

0x9afc,	// (0x00014931) slider_set_pane_g1_copy1

0x9b1e,	// (0x00014953) slider_set_pane_g2_copy1

0x4f83,	// (0x0000fdb8) slider_set_pane_g3_copy1_ParamLimits

0x4f83,	// (0x0000fdb8) slider_set_pane_g3_copy1

0x4f97,	// (0x0000fdcc) slider_set_pane_g4_copy1_ParamLimits

0x4f97,	// (0x0000fdcc) slider_set_pane_g4_copy1

0x4faf,	// (0x0000fde4) slider_set_pane_g5_copy1_ParamLimits

0x4faf,	// (0x0000fde4) slider_set_pane_g5_copy1

0x4f83,	// (0x0000fdb8) slider_set_pane_g6_copy1_ParamLimits

0x4f83,	// (0x0000fdb8) slider_set_pane_g6_copy1

0x5f0b,	// (0x00010d40) slider_set_pane_g7_copy1_ParamLimits

0x5f0b,	// (0x00010d40) slider_set_pane_g7_copy1

0x61f3,	// (0x00011028) bg_set_opt_pane_cp2_copy1

0x6315,	// (0x0001114a) setting_slider_graphic_pane_g1_copy1

0x5f21,	// (0x00010d56) setting_slider_graphic_pane_t1_copy1

0x5f30,	// (0x00010d65) setting_slider_graphic_pane_t2_copy1

0x5f3f,	// (0x00010d74) slider_set_pane_cp_copy1

0xf0c9,	// (0x00019efe) input_focus_pane_cp1_copy1

0xf0d2,	// (0x00019f07) list_set_text_pane_copy1

0xf0da,	// (0x00019f0f) setting_text_pane_g1_copy1

0xf0e3,	// (0x00019f18) set_text_pane_t1_copy1

0xf0c9,	// (0x00019efe) input_focus_pane_cp2_copy1

0xf0da,	// (0x00019f0f) setting_code_pane_g1_copy1

0xf0fc,	// (0x00019f31) setting_code_pane_t1_copy1

0xe879,	// (0x000196ae) list_set_graphic_pane_copy1

0x61f3,	// (0x00011028) bg_set_opt_pane_cp4_copy1

0x7b13,	// (0x00012948) list_set_graphic_pane_g1_copy1_ParamLimits

0x7b13,	// (0x00012948) list_set_graphic_pane_g1_copy1

0xf10a,	// (0x00019f3f) list_set_graphic_pane_g2_copy1

0x7b2b,	// (0x00012960) list_set_graphic_pane_t1_copy1_ParamLimits

0x7b2b,	// (0x00012960) list_set_graphic_pane_t1_copy1

0xad89,	// (0x00015bbe) rs_clock_indi_pane_g1

0xf112,	// (0x00019f47) rs_clock_indi_pane_t1

0xf120,	// (0x00019f55) rs_indi_pane

0xf128,	// (0x00019f5d) rs_indi_pane_g1

0xf131,	// (0x00019f66) rs_indi_pane_g2

0xee90,	// (0x00019cc5) rs_indi_pane_g3

0x0002,

0xfea7,	// (0x0001acdc) rs_indi_pane_g

0x7db9,	// (0x00012bee) bg_popup_preview_window_pane_cp03

0xf13a,	// (0x00019f6f) popup_fep_tooltip_window_t1

0xbb74,	// (0x000169a9) popup_note2_window_g2_ParamLimits

0xbb74,	// (0x000169a9) popup_note2_window_g2

0x0001,

0xfc3b,	// (0x0001aa70) popup_note2_window_g_ParamLimits

0xfc3b,	// (0x0001aa70) popup_note2_window_g

0xc155,	// (0x00016f8a) bg_popup_sub_pane_cp11_ParamLimits

0xc162,	// (0x00016f97) cell_ai3_links_pane_g1_ParamLimits

0xc179,	// (0x00016fae) cell_ai3_links_pane_t1

0xf0e3,	// (0x00019f18) set_text_pane_t1_copy1_ParamLimits

0x7ce0,	// (0x00012b15) cell_graphic_popup_pane_cp2_ParamLimits

0x7ce0,	// (0x00012b15) cell_graphic_popup_pane_cp2

0xf148,	// (0x00019f7d) cell_graphic_popup_pane_g1_cp2

0x68b5,	// (0x000116ea) cell_graphic_popup_pane_g2_cp2

0xf150,	// (0x00019f85) cell_graphic_popup_pane_g3_cp2

0xf158,	// (0x00019f8d) cell_graphic_popup_pane_t2_cp2

0x68c6,	// (0x000116fb) grid_highlight_pane_cp3_cp2

0x74ef,	// (0x00012324) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x6fcf,	// (0x00011e04) main_tmo_pane_ParamLimits

0x2667,	// (0x0000d49c) popup_tmo_big_image_note_window

0xeb53,	// (0x00019988) cell_ai5_widget_list_pane

0x3567,	// (0x0000e39c) cell_ai5_widget_lrg_icon_pane

0x39f7,	// (0x0000e82c) tmo_note_info_pane_t1_ParamLimits

0x3a0c,	// (0x0000e841) tmo_note_info_pane_t2_ParamLimits

0x3a21,	// (0x0000e856) tmo_note_info_pane_t3_ParamLimits

0xee0d,	// (0x00019c42) tmo_note_info_pane_t4_ParamLimits

0xee1f,	// (0x00019c54) tmo_note_info_pane_t5_ParamLimits

0xfe95,	// (0x0001acca) tmo_note_info_pane_t_ParamLimits

0xef47,	// (0x00019d7c) settings_container_pane_ParamLimits

0xf0c1,	// (0x00019ef6) indicator_popup_pane_cp5

0xf0c1,	// (0x00019ef6) indicator_popup_pane_cp6

0xe879,	// (0x000196ae) list_set_graphic_pane_copy1_ParamLimits

0x6102,	// (0x00010f37) bg_popup_window_pane_cp23

0xf166,	// (0x00019f9b) popup_tmo_big_image_note_window_g1

0xf16f,	// (0x00019fa4) popup_tmo_big_image_note_window_t1

0xf17d,	// (0x00019fb2) popup_tmo_big_image_note_window_t2

0xf18b,	// (0x00019fc0) popup_tmo_big_image_note_window_t3

0x0002,

0xfeae,	// (0x0001ace3) popup_tmo_big_image_note_window_t

0xad89,	// (0x00015bbe) cell_ai5_widget_lrg_icon_pane_g1

0xf199,	// (0x00019fce) cell_ai5_widget_lrg_icon_pane_t1

0x3a36,	// (0x0000e86b) cell_ai5_widget_list_row_pane_ParamLimits

0x3a36,	// (0x0000e86b) cell_ai5_widget_list_row_pane

0x3a4d,	// (0x0000e882) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x3a4d,	// (0x0000e882) cell_ai5_widget_list_row_pane_g1

0x3a5a,	// (0x0000e88f) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x3a5a,	// (0x0000e88f) cell_ai5_widget_list_row_pane_t1

0x3a8b,	// (0x0000e8c0) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x3a8b,	// (0x0000e8c0) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeb5,	// (0x0001acea) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeb5,	// (0x0001acea) cell_ai5_widget_list_row_pane_t

0x3f85,	// (0x0000edba) main_fep_vtchi_ss_pane

0xf1b4,	// (0x00019fe9) popup_fep_char_pre_window

0xf1bc,	// (0x00019ff1) popup_fep_ituss_window

0x3ade,	// (0x0000e913) popup_fep_vkbss_window

0xf1f7,	// (0x0001a02c) grid_vkbss_keypad_pane_ParamLimits

0xf1f7,	// (0x0001a02c) grid_vkbss_keypad_pane

0xf207,	// (0x0001a03c) ituss_keypad_pane

0x5f51,	// (0x00010d86) aid_vkbss_key_offset_ParamLimits

0x5f51,	// (0x00010d86) aid_vkbss_key_offset

0x5f5d,	// (0x00010d92) cell_vkbss_key_pane_ParamLimits

0x5f5d,	// (0x00010d92) cell_vkbss_key_pane

0xf216,	// (0x0001a04b) bg_cell_vkbss_key_g1_ParamLimits

0xf216,	// (0x0001a04b) bg_cell_vkbss_key_g1

0xf222,	// (0x0001a057) cell_vkbss_key_3p_pane_ParamLimits

0xf222,	// (0x0001a057) cell_vkbss_key_3p_pane

0xf258,	// (0x0001a08d) cell_vkbss_key_g1_ParamLimits

0xf258,	// (0x0001a08d) cell_vkbss_key_g1

0xf28e,	// (0x0001a0c3) cell_vkbss_key_t1_ParamLimits

0xf28e,	// (0x0001a0c3) cell_vkbss_key_t1

0x5f91,	// (0x00010dc6) cell_ituss_key_pane_ParamLimits

0x5f91,	// (0x00010dc6) cell_ituss_key_pane

0xf2fe,	// (0x0001a133) bg_cell_ituss_key_g1_ParamLimits

0xf2fe,	// (0x0001a133) bg_cell_ituss_key_g1

0xf30a,	// (0x0001a13f) cell_ituss_key_pane_g1_ParamLimits

0xf30a,	// (0x0001a13f) cell_ituss_key_pane_g1

0x5fa2,	// (0x00010dd7) cell_ituss_key_pane_g2_ParamLimits

0x5fa2,	// (0x00010dd7) cell_ituss_key_pane_g2

0x0005,

0xfebc,	// (0x0001acf1) cell_ituss_key_pane_g_ParamLimits

0xfebc,	// (0x0001acf1) cell_ituss_key_pane_g

0x6026,	// (0x00010e5b) cell_ituss_key_t1_ParamLimits

0x6026,	// (0x00010e5b) cell_ituss_key_t1

0x605c,	// (0x00010e91) cell_ituss_key_t2_ParamLimits

0x605c,	// (0x00010e91) cell_ituss_key_t2

0x608d,	// (0x00010ec2) cell_ituss_key_t3_ParamLimits

0x608d,	// (0x00010ec2) cell_ituss_key_t3

0x605c,	// (0x00010e91) cell_ituss_key_t4_ParamLimits

0x605c,	// (0x00010e91) cell_ituss_key_t4

0x0004,

0xfec9,	// (0x0001acfe) cell_ituss_key_t_ParamLimits

0xfec9,	// (0x0001acfe) cell_ituss_key_t

0xf330,	// (0x0001a165) cell_vkbss_key_3p_pane_g1

0xf338,	// (0x0001a16d) cell_vkbss_key_3p_pane_g2

0xf340,	// (0x0001a175) cell_vkbss_key_3p_pane_g3

0x0002,

0xfed4,	// (0x0001ad09) cell_vkbss_key_3p_pane_g

0x7db9,	// (0x00012bee) bg_popup_fep_char_preview_window_cp02

0xf348,	// (0x0001a17d) popup_fep_char_pre_window_t1

0x3554,	// (0x0000e389) main_ai5_sk_pane

0xee99,	// (0x00019cce) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xeea5,	// (0x00019cda) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xeeba,	// (0x00019cef) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xeec6,	// (0x00019cfb) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfea0,	// (0x0001acd5) cell_contacts_ai5_widget_pane_g_ParamLimits

0xeed2,	// (0x00019d07) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x6fcf,	// (0x00011e04) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0x3aeb,	// (0x0000e920) main_ai5_sk_pane_g1

0x8b33,	// (0x00013968) popup_query_code_window_g1

0x3acf,	// (0x0000e904) popup_fep_vkb_icf_pane

0xf1ce,	// (0x0001a003) popup_fep_vtchi_icf_pane

0x8108,	// (0x00012f3d) bg_icf_pane

0x8108,	// (0x00012f3d) list_vkb_icf_pane

0xf356,	// (0x0001a18b) bg_icf_pane_cp01

0xf369,	// (0x0001a19e) vtchi_icf_list_pane

0x3b40,	// (0x0000e975) list_vkb_icf_pane_t1_ParamLimits

0x3b40,	// (0x0000e975) list_vkb_icf_pane_t1

0xf379,	// (0x0001a1ae) vtchi_icf_list_pane_t1_ParamLimits

0xf379,	// (0x0001a1ae) vtchi_icf_list_pane_t1

0xf1bc,	// (0x00019ff1) popup_fep_ituss_window_ParamLimits

0xf1ce,	// (0x0001a003) popup_fep_vtchi_icf_pane_ParamLimits

0xf207,	// (0x0001a03c) ituss_keypad_pane_ParamLimits

0x5f47,	// (0x00010d7c) ituss_sks_pane

0x8108,	// (0x00012f3d) bg_icf_pane_ParamLimits

0x3ab3,	// (0x0000e8e8) icf_edit_indi_pane_ParamLimits

0x3ab3,	// (0x0000e8e8) icf_edit_indi_pane

0x8108,	// (0x00012f3d) list_vkb_icf_pane_ParamLimits

0xf356,	// (0x0001a18b) bg_icf_pane_cp01_ParamLimits

0xf1a7,	// (0x00019fdc) icf_edit_indi_pane_cp01_ParamLimits

0xf1a7,	// (0x00019fdc) icf_edit_indi_pane_cp01

0xf371,	// (0x0001a1a6) vtchi_query_pane

0xea9f,	// (0x000198d4) icf_edit_indi_pane_g1_ParamLimits

0xea9f,	// (0x000198d4) icf_edit_indi_pane_g1

0x3b56,	// (0x0000e98b) icf_edit_indi_pane_g2_ParamLimits

0x3b56,	// (0x0000e98b) icf_edit_indi_pane_g2

0x0001,

0xfeff,	// (0x0001ad34) icf_edit_indi_pane_g_ParamLimits

0xfeff,	// (0x0001ad34) icf_edit_indi_pane_g

0x3b6a,	// (0x0000e99f) icf_edit_indi_pane_t1

0xf391,	// (0x0001a1c6) bg_input_focus_pane_cp042

0xf39a,	// (0x0001a1cf) vtchi_button_pane

0xf3a3,	// (0x0001a1d8) vtchi_query_pane_t1

0xf3b1,	// (0x0001a1e6) vtchi_query_pane_t2

0xf3bf,	// (0x0001a1f4) vtchi_query_pane_t3

0x0002,

0xfeee,	// (0x0001ad23) vtchi_query_pane_t

0x3f85,	// (0x0000edba) bg_button_pane_cp13

0xf3cd,	// (0x0001a202) vtchi_button_pane_g1

0x60d0,	// (0x00010f05) ituss_sks_pane_g1

0x60d9,	// (0x00010f0e) ituss_sks_pane_g2

0x0001,

0xfef5,	// (0x0001ad2a) ituss_sks_pane_g

0xf3d5,	// (0x0001a20a) ituss_sks_pane_t1

0xf3e3,	// (0x0001a218) ituss_sks_pane_t2

0x0001,

0xfefa,	// (0x0001ad2f) ituss_sks_pane_t

0xa884,	// (0x000156b9) indicator_nsta_pane_cp_g1

0xa88d,	// (0x000156c2) indicator_nsta_pane_cp_g2

0xa895,	// (0x000156ca) indicator_nsta_pane_cp_g3

0xa89d,	// (0x000156d2) indicator_nsta_pane_cp_g4

0xa8a5,	// (0x000156da) indicator_nsta_pane_cp_g5

0xa8ad,	// (0x000156e2) indicator_nsta_pane_cp_g6

0x0005,

0xfa79,	// (0x0001a8ae) indicator_nsta_pane_cp_g

0x3337,	// (0x0000e16c) cell_graphic2_pane_t2_ParamLimits

0x3337,	// (0x0000e16c) cell_graphic2_pane_t2

0x0001,

0xfd8b,	// (0x0001abc0) cell_graphic2_pane_t_ParamLimits

0xfd8b,	// (0x0001abc0) cell_graphic2_pane_t

0x336f,	// (0x0000e1a4) cell_graphic2_control_pane_t1

0x0b3b,	// (0x0000b970) signal_pane_g3_ParamLimits

0x0b3b,	// (0x0000b970) signal_pane_g3

0x0b4f,	// (0x0000b984) signal_pane_g4_ParamLimits

0x0b4f,	// (0x0000b984) signal_pane_g4

0x3a9d,	// (0x0000e8d2) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x3a9d,	// (0x0000e8d2) cell_ai5_widget_list_row_pane_t3

0xf31e,	// (0x0001a153) cell_ituss_key_pane_t1_ParamLimits

0xf31e,	// (0x0001a153) cell_ituss_key_pane_t1

0x87a9,	// (0x000135de) form_field_data_wide_pane_vc_t2_ParamLimits

0x87a9,	// (0x000135de) form_field_data_wide_pane_vc_t2

0x87bb,	// (0x000135f0) form_field_data_wide_pane_vc_t3_ParamLimits

0x87bb,	// (0x000135f0) form_field_data_wide_pane_vc_t3

0x0002,

0xf7d3,	// (0x0001a608) form_field_data_wide_pane_vc_t_ParamLimits

0xf7d3,	// (0x0001a608) form_field_data_wide_pane_vc_t

0xa571,	// (0x000153a6) form_field_slider_wide_pane_vc_t3_ParamLimits

0xa571,	// (0x000153a6) form_field_slider_wide_pane_vc_t3

0xa62f,	// (0x00015464) form_field_popup_wide_pane_vc_t2_ParamLimits

0xa62f,	// (0x00015464) form_field_popup_wide_pane_vc_t2

0xa644,	// (0x00015479) form_field_popup_wide_pane_vc_t3_ParamLimits

0xa644,	// (0x00015479) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa68,	// (0x0001a89d) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa68,	// (0x0001a89d) form_field_popup_wide_pane_vc_t

0xe6f7,	// (0x0001952c) aid_fshwr2_btn_pane_ParamLimits

0xe70b,	// (0x00019540) aid_fshwr2_syb_pane_ParamLimits

0xe71f,	// (0x00019554) aid_fshwr2_txt_pane_ParamLimits

0x5623,	// (0x00010458) fshwr2_bg_pane_ParamLimits

0xe72f,	// (0x00019564) fshwr2_func_candi_pane_ParamLimits

0xe747,	// (0x0001957c) fshwr2_hwr_syb_pane_ParamLimits

0xe75f,	// (0x00019594) fshwr2_icf_pane_ParamLimits

0xa4ec,	// (0x00015321) list_double_graphic_pane_vc_g4_ParamLimits

0xa4ec,	// (0x00015321) list_double_graphic_pane_vc_g4

0x5fc2,	// (0x00010df7) cell_ituss_key_pane_g3_ParamLimits

0x5fc2,	// (0x00010df7) cell_ituss_key_pane_g3

0x60be,	// (0x00010ef3) cell_ituss_key_t5_ParamLimits

0x60be,	// (0x00010ef3) cell_ituss_key_t5

0x3ade,	// (0x0000e913) popup_fep_vkbss_window_ParamLimits

0x355e,	// (0x0000e393) aid_cell_ai5_quarter

0x3b6a,	// (0x0000e99f) icf_edit_indi_pane_t1_ParamLimits

0x6623,	// (0x00011458) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x6623,	// (0x00011458) aid_tch_indicator_popup_pane_cp2

0x6636,	// (0x0001146b) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x6636,	// (0x0001146b) aid_tch_query_popup_data_pane_cp2

0x8adb,	// (0x00013910) aid_tch_query_popup_pane_ParamLimits

0x8adb,	// (0x00013910) aid_tch_query_popup_pane

0x8adb,	// (0x00013910) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x8adb,	// (0x00013910) aid_tch_query_popup_data_pane_cp1

0x8108,	// (0x00012f3d) cell_fshwr2_syb_bg_pane_ParamLimits

0xe853,	// (0x00019688) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xe863,	// (0x00019698) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0x3acf,	// (0x0000e904) popup_fep_vkb_icf_pane_ParamLimits

0xe695,	// (0x000194ca) bg_popup_fep_char_preview_window_g10

0x3626,	// (0x0000e45b) cell_ai5_widget_pane_g11_ParamLimits

0x3626,	// (0x0000e45b) cell_ai5_widget_pane_g11

0x3632,	// (0x0000e467) cell_ai5_widget_pane_g12_ParamLimits

0x3632,	// (0x0000e467) cell_ai5_widget_pane_g12

0x363e,	// (0x0000e473) cell_ai5_widget_pane_g13_ParamLimits

0x363e,	// (0x0000e473) cell_ai5_widget_pane_g13

0x373c,	// (0x0000e571) cell_ai5_widget_pane_t11_ParamLimits

0x373c,	// (0x0000e571) cell_ai5_widget_pane_t11

0x374e,	// (0x0000e583) cell_ai5_widget_pane_t12_ParamLimits

0x374e,	// (0x0000e583) cell_ai5_widget_pane_t12

0x5fce,	// (0x00010e03) cell_ituss_key_pane_g4_ParamLimits

0x5fce,	// (0x00010e03) cell_ituss_key_pane_g4

0x5fea,	// (0x00010e1f) cell_ituss_key_pane_g5_ParamLimits

0x5fea,	// (0x00010e1f) cell_ituss_key_pane_g5

0x6006,	// (0x00010e3b) cell_ituss_key_pane_g6_ParamLimits

0x6006,	// (0x00010e3b) cell_ituss_key_pane_g6

0x8605,	// (0x0001343a) bg_icf_pane_g1

0x3af4,	// (0x0000e929) bg_icf_pane_g2

0x3afe,	// (0x0000e933) bg_icf_pane_g3

0x3b06,	// (0x0000e93b) bg_icf_pane_g4

0x3b10,	// (0x0000e945) bg_icf_pane_g5

0x3b1a,	// (0x0000e94f) bg_icf_pane_g6

0x3b24,	// (0x0000e959) bg_icf_pane_g7

0x3b2c,	// (0x0000e961) bg_icf_pane_g8

0x3b36,	// (0x0000e96b) bg_icf_pane_g9

0x0008,

0xfedb,	// (0x0001ad10) bg_icf_pane_g

0xf1e4,	// (0x0001a019) popup_hyb_candi_window_ParamLimits

0xf1e4,	// (0x0001a019) popup_hyb_candi_window

0x871d,	// (0x00013552) bg_popup_sub_pane_cp01_ParamLimits

0x871d,	// (0x00013552) bg_popup_sub_pane_cp01

0xf3f1,	// (0x0001a226) entry_hyb_candi_pane_ParamLimits

0xf3f1,	// (0x0001a226) entry_hyb_candi_pane

0xf400,	// (0x0001a235) grid_hyb_candi_pane_ParamLimits

0xf400,	// (0x0001a235) grid_hyb_candi_pane

0xf415,	// (0x0001a24a) grid_hyb_phrase_pane_ParamLimits

0xf415,	// (0x0001a24a) grid_hyb_phrase_pane

0xf424,	// (0x0001a259) cell_hyb_candi_pane_ParamLimits

0xf424,	// (0x0001a259) cell_hyb_candi_pane

0xf43c,	// (0x0001a271) cell_hyb_candi_scroll_pane

0x779d,	// (0x000125d2) cell_hyb_candi_pane_g1

0xf445,	// (0x0001a27a) cell_hyb_candi_pane_t1

0xf453,	// (0x0001a288) cell_hyb_phrase_pane

0x779d,	// (0x000125d2) cell_hyb_phrase_pane_g1

0xf45c,	// (0x0001a291) cell_hyb_phrase_pane_t1

0xf46a,	// (0x0001a29f) entry_hyb_candi_pane_t1

0x7db9,	// (0x00012bee) input_focus_pane_cp06

0xf478,	// (0x0001a2ad) cell_hyb_candi_scroll_pane_g1

0xf480,	// (0x0001a2b5) cell_hyb_candi_scroll_pane_g1_aid

0xf488,	// (0x0001a2bd) cell_hyb_candi_scroll_pane_g2

0xf490,	// (0x0001a2c5) cell_hyb_candi_scroll_pane_g2_aid

0xf498,	// (0x0001a2cd) cell_hyb_candi_scroll_pane_g3

0xf4a0,	// (0x0001a2d5) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Abrw_pql_av_qvga_lsc_Normal
