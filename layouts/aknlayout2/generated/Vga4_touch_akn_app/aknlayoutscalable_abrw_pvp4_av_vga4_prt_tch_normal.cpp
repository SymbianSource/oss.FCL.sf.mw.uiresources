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

#include "aknlayoutscalable_abrw_pvp4_av_vga4_prt_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0000b805 };

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
0x66b1,	// (0x00011eb6) Screen

0x66bd,	// (0x00011ec2) application_window_ParamLimits

0x66bd,	// (0x00011ec2) application_window

0x3eef,	// (0x0000f6f4) screen_g1

0x4ab3,	// (0x000102b8) area_bottom_pane_ParamLimits

0x4ab3,	// (0x000102b8) area_bottom_pane

0x4b73,	// (0x00010378) area_top_pane_ParamLimits

0x4b73,	// (0x00010378) area_top_pane

0x4c11,	// (0x00010416) main_pane_ParamLimits

0x4c11,	// (0x00010416) main_pane

0x4068,	// (0x0000f86d) misc_graphics

0x8e6a,	// (0x0001466f) battery_pane_ParamLimits

0x8e6a,	// (0x0001466f) battery_pane

0x9c04,	// (0x00015409) bg_status_flat_pane_g8

0x9c0c,	// (0x00015411) bg_status_flat_pane_g9

0x8f32,	// (0x00014737) context_pane_ParamLimits

0x8f32,	// (0x00014737) context_pane

0x9056,	// (0x0001485b) navi_pane_ParamLimits

0x9056,	// (0x0001485b) navi_pane

0x90e5,	// (0x000148ea) signal_pane_ParamLimits

0x90e5,	// (0x000148ea) signal_pane

0x0008,

0xf885,	// (0x0001b08a) bg_status_flat_pane_g

0x9152,	// (0x00014957) status_pane_g1_ParamLimits

0x9152,	// (0x00014957) status_pane_g1

0x9166,	// (0x0001496b) status_pane_g2_ParamLimits

0x9166,	// (0x0001496b) status_pane_g2

0x9172,	// (0x00014977) status_pane_g3_ParamLimits

0x9172,	// (0x00014977) status_pane_g3

0x0004,

0xf7b3,	// (0x0001afb8) status_pane_g_ParamLimits

0xf7b3,	// (0x0001afb8) status_pane_g

0x91a6,	// (0x000149ab) title_pane_ParamLimits

0x91a6,	// (0x000149ab) title_pane

0x91e3,	// (0x000149e8) uni_indicator_pane_ParamLimits

0x91e3,	// (0x000149e8) uni_indicator_pane

0x8757,	// (0x00013f5c) bg_list_pane_ParamLimits

0x8757,	// (0x00013f5c) bg_list_pane

0x8777,	// (0x00013f7c) find_pane

0x877f,	// (0x00013f84) listscroll_app_pane_ParamLimits

0x877f,	// (0x00013f84) listscroll_app_pane

0x878b,	// (0x00013f90) listscroll_form_pane

0x8793,	// (0x00013f98) listscroll_gen_pane_ParamLimits

0x8793,	// (0x00013f98) listscroll_gen_pane

0x878b,	// (0x00013f90) listscroll_set_pane

0x7938,	// (0x0001313d) main_idle_act_pane

0x842b,	// (0x00013c30) main_idle_trad_pane

0x842b,	// (0x00013c30) main_list_empty_pane

0x87b9,	// (0x00013fbe) main_midp_pane

0x87c5,	// (0x00013fca) main_pane_g1_ParamLimits

0x87c5,	// (0x00013fca) main_pane_g1

0x87d3,	// (0x00013fd8) popup_ai_message_window_ParamLimits

0x87d3,	// (0x00013fd8) popup_ai_message_window

0x888b,	// (0x00014090) popup_fep_china_uni_window_ParamLimits

0x888b,	// (0x00014090) popup_fep_china_uni_window

0x88eb,	// (0x000140f0) popup_fep_japan_candidate_window_ParamLimits

0x88eb,	// (0x000140f0) popup_fep_japan_candidate_window

0x8915,	// (0x0001411a) popup_fep_japan_predictive_window_ParamLimits

0x8915,	// (0x0001411a) popup_fep_japan_predictive_window

0x894b,	// (0x00014150) popup_find_window

0x8958,	// (0x0001415d) popup_grid_graphic_window_ParamLimits

0x8958,	// (0x0001415d) popup_grid_graphic_window

0x8986,	// (0x0001418b) popup_large_graphic_colour_window

0x89ac,	// (0x000141b1) popup_menu_window_ParamLimits

0x89ac,	// (0x000141b1) popup_menu_window

0x8b76,	// (0x0001437b) popup_note_image_window

0x8b60,	// (0x00014365) popup_note_wait_window_ParamLimits

0x8b60,	// (0x00014365) popup_note_wait_window

0x8b60,	// (0x00014365) popup_note_window_ParamLimits

0x8b60,	// (0x00014365) popup_note_window

0x8bdc,	// (0x000143e1) popup_query_code_window_ParamLimits

0x8bdc,	// (0x000143e1) popup_query_code_window

0x8bf2,	// (0x000143f7) popup_query_data_code_window_ParamLimits

0x8bf2,	// (0x000143f7) popup_query_data_code_window

0x8c15,	// (0x0001441a) popup_query_data_window_ParamLimits

0x8c15,	// (0x0001441a) popup_query_data_window

0x8c37,	// (0x0001443c) popup_query_sat_info_window_ParamLimits

0x8c37,	// (0x0001443c) popup_query_sat_info_window

0x8c76,	// (0x0001447b) popup_snote_single_graphic_window_ParamLimits

0x8c76,	// (0x0001447b) popup_snote_single_graphic_window

0x8c76,	// (0x0001447b) popup_snote_single_text_window_ParamLimits

0x8c76,	// (0x0001447b) popup_snote_single_text_window

0x8c8d,	// (0x00014492) popup_sub_window_general

0x8dd3,	// (0x000145d8) popup_window_general_ParamLimits

0x8dd3,	// (0x000145d8) popup_window_general

0x8dec,	// (0x000145f1) power_save_pane

0x5388,	// (0x00010b8d) control_pane_g1_ParamLimits

0x5388,	// (0x00010b8d) control_pane_g1

0x53b1,	// (0x00010bb6) control_pane_g2_ParamLimits

0x53b1,	// (0x00010bb6) control_pane_g2

0x86f8,	// (0x00013efd) control_pane_g3_ParamLimits

0x86f8,	// (0x00013efd) control_pane_g3

0x0007,

0xf79b,	// (0x0001afa0) control_pane_g_ParamLimits

0xf79b,	// (0x0001afa0) control_pane_g

0x53fc,	// (0x00010c01) control_pane_t1_ParamLimits

0x53fc,	// (0x00010c01) control_pane_t1

0x544e,	// (0x00010c53) control_pane_t2_ParamLimits

0x544e,	// (0x00010c53) control_pane_t2

0x0002,

0xf7ac,	// (0x0001afb1) control_pane_t_ParamLimits

0xf7ac,	// (0x0001afb1) control_pane_t

0x8619,	// (0x00013e1e) navi_navi_volume_pane_cp1

0x8622,	// (0x00013e27) status_small_icon_pane

0x862a,	// (0x00013e2f) status_small_pane_g1_ParamLimits

0x862a,	// (0x00013e2f) status_small_pane_g1

0x865e,	// (0x00013e63) status_small_pane_g2_ParamLimits

0x865e,	// (0x00013e63) status_small_pane_g2

0x866a,	// (0x00013e6f) status_small_pane_g3_ParamLimits

0x866a,	// (0x00013e6f) status_small_pane_g3

0x8676,	// (0x00013e7b) status_small_pane_g4_ParamLimits

0x8676,	// (0x00013e7b) status_small_pane_g4

0x8682,	// (0x00013e87) status_small_pane_g5_ParamLimits

0x8682,	// (0x00013e87) status_small_pane_g5

0x8691,	// (0x00013e96) status_small_pane_g6_ParamLimits

0x8691,	// (0x00013e96) status_small_pane_g6

0x0007,

0xf78a,	// (0x0001af8f) status_small_pane_g_ParamLimits

0xf78a,	// (0x0001af8f) status_small_pane_g

0x86c1,	// (0x00013ec6) status_small_pane_t1

0x86e4,	// (0x00013ee9) status_small_wait_pane_ParamLimits

0x86e4,	// (0x00013ee9) status_small_wait_pane

0x7e36,	// (0x0001363b) aid_levels_signal_ParamLimits

0x7e36,	// (0x0001363b) aid_levels_signal

0x7e48,	// (0x0001364d) signal_pane_g1_ParamLimits

0x7e48,	// (0x0001364d) signal_pane_g1

0x7e5d,	// (0x00013662) signal_pane_g2_ParamLimits

0x7e5d,	// (0x00013662) signal_pane_g2

0x0001,

0xf71f,	// (0x0001af24) signal_pane_g_ParamLimits

0xf71f,	// (0x0001af24) signal_pane_g

0x7e72,	// (0x00013677) context_pane_g1

0x66cd,	// (0x00011ed2) title_pane_g1

0x6703,	// (0x00011f08) title_pane_t1

0x676b,	// (0x00011f70) title_pane_t2

0x6791,	// (0x00011f96) title_pane_t3

0x0002,

0xf573,	// (0x0001ad78) title_pane_t

0x91fb,	// (0x00014a00) aid_levels_battery_ParamLimits

0x91fb,	// (0x00014a00) aid_levels_battery

0x920f,	// (0x00014a14) battery_pane_g1_ParamLimits

0x920f,	// (0x00014a14) battery_pane_g1

0x9225,	// (0x00014a2a) battery_pane_g2_ParamLimits

0x9225,	// (0x00014a2a) battery_pane_g2

0x0001,

0xf7be,	// (0x0001afc3) battery_pane_g_ParamLimits

0xf7be,	// (0x0001afc3) battery_pane_g

0xa554,	// (0x00015d59) uni_indicator_pane_g1

0xa569,	// (0x00015d6e) uni_indicator_pane_g2

0xa57f,	// (0x00015d84) uni_indicator_pane_g3

0x0005,

0xf92d,	// (0x0001b132) uni_indicator_pane_g

0x8299,	// (0x00013a9e) navi_icon_pane_ParamLimits

0x8299,	// (0x00013a9e) navi_icon_pane

0x81e0,	// (0x000139e5) navi_midp_pane

0x82b5,	// (0x00013aba) navi_navi_pane

0x82bf,	// (0x00013ac4) navi_text_pane_ParamLimits

0x82bf,	// (0x00013ac4) navi_text_pane

0x3eef,	// (0x0000f6f4) status_small_wait_pane_g1

0x6bef,	// (0x000123f4) status_small_wait_pane_g2

0x0001,

0xf928,	// (0x0001b12d) status_small_wait_pane_g

0xa267,	// (0x00015a6c) navi_navi_icon_text_pane

0xa26f,	// (0x00015a74) navi_navi_pane_g1_ParamLimits

0xa26f,	// (0x00015a74) navi_navi_pane_g1

0xa281,	// (0x00015a86) navi_navi_pane_g2_ParamLimits

0xa281,	// (0x00015a86) navi_navi_pane_g2

0x0001,

0xf8f6,	// (0x0001b0fb) navi_navi_pane_g_ParamLimits

0xf8f6,	// (0x0001b0fb) navi_navi_pane_g

0xa293,	// (0x00015a98) navi_navi_tabs_pane

0xa29c,	// (0x00015aa1) navi_navi_text_pane

0xa267,	// (0x00015a6c) navi_navi_volume_pane

0xa240,	// (0x00015a45) navi_text_pane_t1

0xa231,	// (0x00015a36) navi_icon_pane_g1

0xa184,	// (0x00015989) navi_navi_text_pane_t1

0x57f1,	// (0x00010ff6) navi_navi_volume_pane_g1

0x57f9,	// (0x00010ffe) volume_small_pane

0xa0ea,	// (0x000158ef) navi_navi_icon_text_pane_g1

0xa0f2,	// (0x000158f7) navi_navi_icon_text_pane_t1

0x82b5,	// (0x00013aba) navi_tabs_2_long_pane

0x82b5,	// (0x00013aba) navi_tabs_2_pane

0x82b5,	// (0x00013aba) navi_tabs_3_long_pane

0x82b5,	// (0x00013aba) navi_tabs_3_pane

0x82b5,	// (0x00013aba) navi_tabs_4_pane

0x57d1,	// (0x00010fd6) tabs_2_active_pane_ParamLimits

0x57d1,	// (0x00010fd6) tabs_2_active_pane

0x57e1,	// (0x00010fe6) tabs_2_passive_pane_ParamLimits

0x57e1,	// (0x00010fe6) tabs_2_passive_pane

0x579f,	// (0x00010fa4) tabs_3_active_pane_ParamLimits

0x579f,	// (0x00010fa4) tabs_3_active_pane

0x57af,	// (0x00010fb4) tabs_3_passive_pane_ParamLimits

0x57af,	// (0x00010fb4) tabs_3_passive_pane

0x57c0,	// (0x00010fc5) tabs_3_passive_pane_cp_ParamLimits

0x57c0,	// (0x00010fc5) tabs_3_passive_pane_cp

0x5753,	// (0x00010f58) tabs_4_active_pane_ParamLimits

0x5753,	// (0x00010f58) tabs_4_active_pane

0x5766,	// (0x00010f6b) tabs_4_passive_pane_ParamLimits

0x5766,	// (0x00010f6b) tabs_4_passive_pane

0x5777,	// (0x00010f7c) tabs_4_passive_pane_cp_ParamLimits

0x5777,	// (0x00010f7c) tabs_4_passive_pane_cp

0x5788,	// (0x00010f8d) tabs_4_passive_pane_cp2_ParamLimits

0x5788,	// (0x00010f8d) tabs_4_passive_pane_cp2

0x572f,	// (0x00010f34) tabs_2_long_active_pane_ParamLimits

0x572f,	// (0x00010f34) tabs_2_long_active_pane

0x5741,	// (0x00010f46) tabs_2_long_passive_pane_ParamLimits

0x5741,	// (0x00010f46) tabs_2_long_passive_pane

0x56f0,	// (0x00010ef5) tabs_3_long_active_pane_ParamLimits

0x56f0,	// (0x00010ef5) tabs_3_long_active_pane

0x5703,	// (0x00010f08) tabs_3_long_passive_pane_ParamLimits

0x5703,	// (0x00010f08) tabs_3_long_passive_pane

0x571c,	// (0x00010f21) tabs_3_long_passive_pane_cp_ParamLimits

0x571c,	// (0x00010f21) tabs_3_long_passive_pane_cp

0x5696,	// (0x00010e9b) volume_small_pane_g1

0x569f,	// (0x00010ea4) volume_small_pane_g2

0x56a8,	// (0x00010ead) volume_small_pane_g3

0x56b1,	// (0x00010eb6) volume_small_pane_g4

0x56ba,	// (0x00010ebf) volume_small_pane_g5

0x56c3,	// (0x00010ec8) volume_small_pane_g6

0x56cc,	// (0x00010ed1) volume_small_pane_g7

0x56d5,	// (0x00010eda) volume_small_pane_g8

0x56de,	// (0x00010ee3) volume_small_pane_g9

0x56e7,	// (0x00010eec) volume_small_pane_g10

0x0009,

0xf8c2,	// (0x0001b0c7) volume_small_pane_g

0x67a3,	// (0x00011fa8) bg_active_tab_pane_cp2_ParamLimits

0x67a3,	// (0x00011fa8) bg_active_tab_pane_cp2

0x67b1,	// (0x00011fb6) tabs_3_active_pane_g1

0x67b9,	// (0x00011fbe) tabs_3_active_pane_t1

0x67a3,	// (0x00011fa8) bg_passive_tab_pane_cp2_ParamLimits

0x67a3,	// (0x00011fa8) bg_passive_tab_pane_cp2

0x67b1,	// (0x00011fb6) tabs_3_passive_pane_g1

0x67b9,	// (0x00011fbe) tabs_3_passive_pane_t1

0x67a3,	// (0x00011fa8) bg_active_tab_pane_cp3_ParamLimits

0x67a3,	// (0x00011fa8) bg_active_tab_pane_cp3

0x67cb,	// (0x00011fd0) tabs_4_active_pane_g1

0x67d3,	// (0x00011fd8) tabs_4_active_pane_t1

0x67a3,	// (0x00011fa8) bg_passive_tab_pane_cp3_ParamLimits

0x67a3,	// (0x00011fa8) bg_passive_tab_pane_cp3

0x67cb,	// (0x00011fd0) tabs_4_1_passive_pane_g1

0x67d3,	// (0x00011fd8) tabs_4_1_passive_pane_t1

0x87b9,	// (0x00013fbe) list_highlight_pane_cp2

0xa80b,	// (0x00016010) list_set_pane_ParamLimits

0xa80b,	// (0x00016010) list_set_pane

0xa8d3,	// (0x000160d8) main_pane_set_t1_ParamLimits

0xa8d3,	// (0x000160d8) main_pane_set_t1

0xa8f3,	// (0x000160f8) main_pane_set_t2_ParamLimits

0xa8f3,	// (0x000160f8) main_pane_set_t2

0xa907,	// (0x0001610c) main_pane_set_t3_ParamLimits

0xa907,	// (0x0001610c) main_pane_set_t3

0xa91b,	// (0x00016120) main_pane_set_t4_ParamLimits

0xa91b,	// (0x00016120) main_pane_set_t4

0x0003,

0xf992,	// (0x0001b197) main_pane_set_t_ParamLimits

0xf992,	// (0x0001b197) main_pane_set_t

0xa93b,	// (0x00016140) setting_code_pane

0xa945,	// (0x0001614a) setting_slider_graphic_pane

0xa945,	// (0x0001614a) setting_slider_pane

0xa945,	// (0x0001614a) setting_text_pane

0xa945,	// (0x0001614a) setting_volume_pane

0x4e68,	// (0x0001066d) volume_set_pane

0x67a3,	// (0x00011fa8) bg_set_opt_pane_cp

0x4e72,	// (0x00010677) setting_slider_pane_t1

0x4e88,	// (0x0001068d) setting_slider_pane_t2

0x4ea2,	// (0x000106a7) setting_slider_pane_t3

0x0002,

0xf57a,	// (0x0001ad7f) setting_slider_pane_t

0x4eba,	// (0x000106bf) slider_set_pane

0x4068,	// (0x0000f86d) bg_set_opt_pane_cp2

0x67e5,	// (0x00011fea) setting_slider_graphic_pane_g1

0x4ed0,	// (0x000106d5) setting_slider_graphic_pane_t1

0x4ee0,	// (0x000106e5) setting_slider_graphic_pane_t2

0x0001,

0xf581,	// (0x0001ad86) setting_slider_graphic_pane_t

0x4ef0,	// (0x000106f5) slider_set_pane_cp

0x4068,	// (0x0000f86d) input_focus_pane_cp1

0xa7cc,	// (0x00015fd1) list_set_text_pane

0x3eef,	// (0x0000f6f4) setting_text_pane_g1

0x4068,	// (0x0000f86d) input_focus_pane_cp2

0x3eef,	// (0x0000f6f4) setting_code_pane_g1

0x67ee,	// (0x00011ff3) setting_code_pane_t1

0x67fc,	// (0x00012001) set_text_pane_t1_ParamLimits

0x67fc,	// (0x00012001) set_text_pane_t1

0x771b,	// (0x00012f20) set_opt_bg_pane_g1

0x7723,	// (0x00012f28) set_opt_bg_pane_g2

0xa7a4,	// (0x00015fa9) set_opt_bg_pane_g3

0x7733,	// (0x00012f38) set_opt_bg_pane_g4

0x773b,	// (0x00012f40) set_opt_bg_pane_g5

0x7743,	// (0x00012f48) set_opt_bg_pane_g6

0xa7ae,	// (0x00015fb3) set_opt_bg_pane_g7

0xa7b8,	// (0x00015fbd) set_opt_bg_pane_g8

0xa7c2,	// (0x00015fc7) set_opt_bg_pane_g9

0x0008,

0xf97f,	// (0x0001b184) set_opt_bg_pane_g

0xa797,	// (0x00015f9c) slider_set_pane_g1

0x587a,	// (0x0001107f) slider_set_pane_g2

0x0006,

0xf970,	// (0x0001b175) slider_set_pane_g

0x5802,	// (0x00011007) volume_set_pane_g1

0x580c,	// (0x00011011) volume_set_pane_g2

0x5816,	// (0x0001101b) volume_set_pane_g3

0x5820,	// (0x00011025) volume_set_pane_g4

0x582a,	// (0x0001102f) volume_set_pane_g5

0x5834,	// (0x00011039) volume_set_pane_g6

0x583e,	// (0x00011043) volume_set_pane_g7

0x5848,	// (0x0001104d) volume_set_pane_g8

0x5852,	// (0x00011057) volume_set_pane_g9

0x585c,	// (0x00011061) volume_set_pane_g10

0x0009,

0xf948,	// (0x0001b14d) volume_set_pane_g

0x6816,	// (0x0001201b) indicator_pane_ParamLimits

0x6816,	// (0x0001201b) indicator_pane

0x6822,	// (0x00012027) main_idle_pane_g2_ParamLimits

0x6822,	// (0x00012027) main_idle_pane_g2

0x684a,	// (0x0001204f) main_pane_idle_g1_ParamLimits

0x684a,	// (0x0001204f) main_pane_idle_g1

0x6858,	// (0x0001205d) popup_clock_digital_analogue_window_ParamLimits

0x6858,	// (0x0001205d) popup_clock_digital_analogue_window

0x686f,	// (0x00012074) soft_indicator_pane_ParamLimits

0x686f,	// (0x00012074) soft_indicator_pane

0x687d,	// (0x00012082) wallpaper_pane_ParamLimits

0x687d,	// (0x00012082) wallpaper_pane

0x3eef,	// (0x0000f6f4) wallpaper_pane_g1

0x6891,	// (0x00012096) indicator_pane_g1_ParamLimits

0x6891,	// (0x00012096) indicator_pane_g1

0xac6a,	// (0x0001646f) navi_navi_icon_text_pane_srt_g1

0x68ac,	// (0x000120b1) soft_indicator_pane_t1

0x68c6,	// (0x000120cb) aid_ps_area_pane

0x68d7,	// (0x000120dc) aid_ps_clock_pane

0x68e5,	// (0x000120ea) aid_ps_indicator_pane

0x68f1,	// (0x000120f6) indicator_ps_pane_ParamLimits

0x68f1,	// (0x000120f6) indicator_ps_pane

0x6900,	// (0x00012105) power_save_pane_g1_ParamLimits

0x6900,	// (0x00012105) power_save_pane_g1

0x690c,	// (0x00012111) power_save_pane_g2_ParamLimits

0x690c,	// (0x00012111) power_save_pane_g2

0x4a67,	// (0x0001026c) aid_navinavi_width_pane

0x68c6,	// (0x000120cb) aid_ps_area_pane_ParamLimits

0x0001,

0xf586,	// (0x0001ad8b) power_save_pane_g_ParamLimits

0xf586,	// (0x0001ad8b) power_save_pane_g

0x691a,	// (0x0001211f) power_save_pane_t1_ParamLimits

0x691a,	// (0x0001211f) power_save_pane_t1

0x68d7,	// (0x000120dc) aid_ps_clock_pane_ParamLimits

0x68e5,	// (0x000120ea) aid_ps_indicator_pane_ParamLimits

0x692c,	// (0x00012131) power_save_pane_t4_ParamLimits

0x692c,	// (0x00012131) power_save_pane_t4

0x0001,

0xf58b,	// (0x0001ad90) power_save_pane_t_ParamLimits

0xf58b,	// (0x0001ad90) power_save_pane_t

0x6956,	// (0x0001215b) power_save_t3_ParamLimits

0x6956,	// (0x0001215b) power_save_t3

0x6941,	// (0x00012146) power_save_t2_ParamLimits

0x6941,	// (0x00012146) power_save_t2

0x696b,	// (0x00012170) indicator_ps_pane_g1

0x6974,	// (0x00012179) ai_gene_pane_ParamLimits

0x6974,	// (0x00012179) ai_gene_pane

0x6980,	// (0x00012185) ai_links_pane_ParamLimits

0x6980,	// (0x00012185) ai_links_pane

0x698c,	// (0x00012191) indicator_pane_cp1_ParamLimits

0x698c,	// (0x00012191) indicator_pane_cp1

0x6998,	// (0x0001219d) main_pane_idle_g1_cp_ParamLimits

0x6998,	// (0x0001219d) main_pane_idle_g1_cp

0x69a4,	// (0x000121a9) popup_ai_links_title_window

0x69ad,	// (0x000121b2) soft_indicator_pane_cp1_ParamLimits

0x69ad,	// (0x000121b2) soft_indicator_pane_cp1

0xa542,	// (0x00015d47) ai_links_pane_g1

0xa54b,	// (0x00015d50) grid_ai_links_pane

0xa527,	// (0x00015d2c) ai_gene_pane_1

0xa530,	// (0x00015d35) ai_gene_pane_2

0xa539,	// (0x00015d3e) list_highlight_pane_cp4

0xa507,	// (0x00015d0c) cell_ai_link_pane_ParamLimits

0xa507,	// (0x00015d0c) cell_ai_link_pane

0xa4ff,	// (0x00015d04) cell_ai_link_pane_g1

0x6bef,	// (0x000123f4) cell_ai_link_pane_g2

0x0001,

0xf923,	// (0x0001b128) cell_ai_link_pane_g

0x4068,	// (0x0000f86d) grid_highlight_cp2

0x4068,	// (0x0000f86d) bg_popup_sub_pane_cp1

0x69c7,	// (0x000121cc) popup_ai_links_title_window_t1

0xa44b,	// (0x00015c50) ai_gene_pane_1_g1_ParamLimits

0xa44b,	// (0x00015c50) ai_gene_pane_1_g1

0xa457,	// (0x00015c5c) ai_gene_pane_1_g2_ParamLimits

0xa457,	// (0x00015c5c) ai_gene_pane_1_g2

0x0001,

0xf919,	// (0x0001b11e) ai_gene_pane_1_g_ParamLimits

0xf919,	// (0x0001b11e) ai_gene_pane_1_g

0xa464,	// (0x00015c69) ai_gene_pane_1_t1_ParamLimits

0xa464,	// (0x00015c69) ai_gene_pane_1_t1

0xa498,	// (0x00015c9d) grid_ai_soft_ind_pane

0xa436,	// (0x00015c3b) ai_gene_pane_2_t1_ParamLimits

0xa436,	// (0x00015c3b) ai_gene_pane_2_t1

0x69d6,	// (0x000121db) main_pane_empty_t1_ParamLimits

0x69d6,	// (0x000121db) main_pane_empty_t1

0x69ee,	// (0x000121f3) main_pane_empty_t2_ParamLimits

0x69ee,	// (0x000121f3) main_pane_empty_t2

0x6a03,	// (0x00012208) main_pane_empty_t3_ParamLimits

0x6a03,	// (0x00012208) main_pane_empty_t3

0x6a15,	// (0x0001221a) main_pane_empty_t4_ParamLimits

0x6a15,	// (0x0001221a) main_pane_empty_t4

0x6a27,	// (0x0001222c) main_pane_empty_t5_ParamLimits

0x6a27,	// (0x0001222c) main_pane_empty_t5

0x0004,

0xf590,	// (0x0001ad95) main_pane_empty_t_ParamLimits

0xf590,	// (0x0001ad95) main_pane_empty_t

0x77f9,	// (0x00012ffe) bg_popup_window_pane_ParamLimits

0x77f9,	// (0x00012ffe) bg_popup_window_pane

0xa192,	// (0x00015997) find_popup_pane_cp2_ParamLimits

0xa192,	// (0x00015997) find_popup_pane_cp2

0xa19e,	// (0x000159a3) heading_pane_ParamLimits

0xa19e,	// (0x000159a3) heading_pane

0x4068,	// (0x0000f86d) bg_popup_sub_pane

0xa10c,	// (0x00015911) bg_popup_window_pane_g1_ParamLimits

0xa10c,	// (0x00015911) bg_popup_window_pane_g1

0xa118,	// (0x0001591d) bg_popup_window_pane_g2_ParamLimits

0xa118,	// (0x0001591d) bg_popup_window_pane_g2

0xa124,	// (0x00015929) bg_popup_window_pane_g3_ParamLimits

0xa124,	// (0x00015929) bg_popup_window_pane_g3

0xa130,	// (0x00015935) bg_popup_window_pane_g4_ParamLimits

0xa130,	// (0x00015935) bg_popup_window_pane_g4

0xa13c,	// (0x00015941) bg_popup_window_pane_g5_ParamLimits

0xa13c,	// (0x00015941) bg_popup_window_pane_g5

0xa148,	// (0x0001594d) bg_popup_window_pane_g6_ParamLimits

0xa148,	// (0x0001594d) bg_popup_window_pane_g6

0xa154,	// (0x00015959) bg_popup_window_pane_g7_ParamLimits

0xa154,	// (0x00015959) bg_popup_window_pane_g7

0xa160,	// (0x00015965) bg_popup_window_pane_g8_ParamLimits

0xa160,	// (0x00015965) bg_popup_window_pane_g8

0xa16c,	// (0x00015971) bg_popup_window_pane_g9_ParamLimits

0xa16c,	// (0x00015971) bg_popup_window_pane_g9

0xa178,	// (0x0001597d) bg_popup_window_pane_g10_ParamLimits

0xa178,	// (0x0001597d) bg_popup_window_pane_g10

0x0009,

0xf8e1,	// (0x0001b0e6) bg_popup_window_pane_g_ParamLimits

0xf8e1,	// (0x0001b0e6) bg_popup_window_pane_g

0xa0a1,	// (0x000158a6) bg_popup_heading_pane_ParamLimits

0xa0a1,	// (0x000158a6) bg_popup_heading_pane

0x5902,	// (0x00011107) tabs_4_passive_pane_cp_srt_ParamLimits

0x5902,	// (0x00011107) tabs_4_passive_pane_cp_srt

0x5914,	// (0x00011119) tabs_4_passive_pane_srt_ParamLimits

0xa0b5,	// (0x000158ba) heading_pane_g2

0x5914,	// (0x00011119) tabs_4_passive_pane_srt

0x87b9,	// (0x00013fbe) bg_passive_tab_pane_cp3_srt_ParamLimits

0x87b9,	// (0x00013fbe) bg_passive_tab_pane_cp3_srt

0xa0bd,	// (0x000158c2) heading_pane_t1_ParamLimits

0xa0bd,	// (0x000158c2) heading_pane_t1

0xa0d4,	// (0x000158d9) heading_pane_t2_ParamLimits

0xa0d4,	// (0x000158d9) heading_pane_t2

0x0001,

0xf8dc,	// (0x0001b0e1) heading_pane_t_ParamLimits

0xf8dc,	// (0x0001b0e1) heading_pane_t

0x9bcc,	// (0x000153d1) bg_popup_heading_pane_g1

0x9c7b,	// (0x00015480) bg_popup_heading_pane_g2

0x9c85,	// (0x0001548a) bg_popup_heading_pane_g3

0x9c8f,	// (0x00015494) bg_popup_heading_pane_g4

0x9c99,	// (0x0001549e) bg_popup_heading_pane_g5

0x9ca3,	// (0x000154a8) bg_popup_heading_pane_g6

0x9cab,	// (0x000154b0) bg_popup_heading_pane_g7

0x9cb3,	// (0x000154b8) bg_popup_heading_pane_g8

0x9cbd,	// (0x000154c2) bg_popup_heading_pane_g9

0x0008,

0xf898,	// (0x0001b09d) bg_popup_heading_pane_g

0x932b,	// (0x00014b30) bg_popup_sub_pane_g1

0x933b,	// (0x00014b40) bg_popup_sub_pane_g2

0x9333,	// (0x00014b38) bg_popup_sub_pane_g3

0x934b,	// (0x00014b50) bg_popup_sub_pane_g4

0x9343,	// (0x00014b48) bg_popup_sub_pane_g5

0x9353,	// (0x00014b58) bg_popup_sub_pane_g6

0x935b,	// (0x00014b60) bg_popup_sub_pane_g7

0x936b,	// (0x00014b70) bg_popup_sub_pane_g8

0x9363,	// (0x00014b68) bg_popup_sub_pane_g9

0x0008,

0xf872,	// (0x0001b077) bg_popup_sub_pane_g

0x6a39,	// (0x0001223e) bg_popup_window_pane_cp5_ParamLimits

0x6a39,	// (0x0001223e) bg_popup_window_pane_cp5

0x6a55,	// (0x0001225a) popup_note_window_g1_ParamLimits

0x6a55,	// (0x0001225a) popup_note_window_g1

0x6a61,	// (0x00012266) popup_note_window_t1_ParamLimits

0x6a61,	// (0x00012266) popup_note_window_t1

0x6a77,	// (0x0001227c) popup_note_window_t2_ParamLimits

0x6a77,	// (0x0001227c) popup_note_window_t2

0x6a8d,	// (0x00012292) popup_note_window_t3_ParamLimits

0x6a8d,	// (0x00012292) popup_note_window_t3

0x6aa3,	// (0x000122a8) popup_note_window_t4_ParamLimits

0x6aa3,	// (0x000122a8) popup_note_window_t4

0x6acb,	// (0x000122d0) popup_note_window_t5_ParamLimits

0x6acb,	// (0x000122d0) popup_note_window_t5

0x0004,

0xf59b,	// (0x0001ada0) popup_note_window_t_ParamLimits

0xf59b,	// (0x0001ada0) popup_note_window_t

0x6aef,	// (0x000122f4) bg_popup_window_pane_cp6_ParamLimits

0x6aef,	// (0x000122f4) bg_popup_window_pane_cp6

0x9b48,	// (0x0001534d) popup_note_image_window_g1_ParamLimits

0x9b48,	// (0x0001534d) popup_note_image_window_g1

0x9b54,	// (0x00015359) popup_note_image_window_g2_ParamLimits

0x9b54,	// (0x00015359) popup_note_image_window_g2

0x0001,

0xf866,	// (0x0001b06b) popup_note_image_window_g_ParamLimits

0xf866,	// (0x0001b06b) popup_note_image_window_g

0x9b6d,	// (0x00015372) popup_note_image_window_t1_ParamLimits

0x9b6d,	// (0x00015372) popup_note_image_window_t1

0x9b86,	// (0x0001538b) popup_note_image_window_t2_ParamLimits

0x9b86,	// (0x0001538b) popup_note_image_window_t2

0x9b9f,	// (0x000153a4) popup_note_image_window_t3_ParamLimits

0x9b9f,	// (0x000153a4) popup_note_image_window_t3

0x0002,

0xf86b,	// (0x0001b070) popup_note_image_window_t_ParamLimits

0xf86b,	// (0x0001b070) popup_note_image_window_t

0x9a08,	// (0x0001520d) bg_popup_window_pane_cp7_ParamLimits

0x9a08,	// (0x0001520d) bg_popup_window_pane_cp7

0x9a38,	// (0x0001523d) popup_note_wait_window_g1_ParamLimits

0x9a38,	// (0x0001523d) popup_note_wait_window_g1

0x9a44,	// (0x00015249) popup_note_wait_window_g2_ParamLimits

0x9a44,	// (0x00015249) popup_note_wait_window_g2

0x0002,

0xf854,	// (0x0001b059) popup_note_wait_window_g_ParamLimits

0xf854,	// (0x0001b059) popup_note_wait_window_g

0x9a5c,	// (0x00015261) popup_note_wait_window_t1_ParamLimits

0x9a5c,	// (0x00015261) popup_note_wait_window_t1

0x9a83,	// (0x00015288) popup_note_wait_window_t2_ParamLimits

0x9a83,	// (0x00015288) popup_note_wait_window_t2

0x9aa1,	// (0x000152a6) popup_note_wait_window_t3_ParamLimits

0x9aa1,	// (0x000152a6) popup_note_wait_window_t3

0x9ab4,	// (0x000152b9) popup_note_wait_window_t4_ParamLimits

0x9ab4,	// (0x000152b9) popup_note_wait_window_t4

0x0004,

0xf85b,	// (0x0001b060) popup_note_wait_window_t_ParamLimits

0xf85b,	// (0x0001b060) popup_note_wait_window_t

0x9ad9,	// (0x000152de) wait_bar_pane_ParamLimits

0x9ad9,	// (0x000152de) wait_bar_pane

0x4068,	// (0x0000f86d) wait_anim_pane

0x4068,	// (0x0000f86d) wait_border_pane

0x3eef,	// (0x0000f6f4) wait_anim_pane_g1

0x3eef,	// (0x0000f6f4) wait_anim_pane_g2

0x0001,

0xf71a,	// (0x0001af1f) wait_anim_pane_g

0x99ac,	// (0x000151b1) wait_border_pane_g1

0x99b7,	// (0x000151bc) wait_border_pane_g2

0x99c0,	// (0x000151c5) wait_border_pane_g3

0x0002,

0xf84d,	// (0x0001b052) wait_border_pane_g

0x9816,	// (0x0001501b) bg_popup_window_pane_cp16_ParamLimits

0x9816,	// (0x0001501b) bg_popup_window_pane_cp16

0x9916,	// (0x0001511b) indicator_popup_pane_cp4_ParamLimits

0x9916,	// (0x0001511b) indicator_popup_pane_cp4

0x992a,	// (0x0001512f) popup_query_data_window_t1_ParamLimits

0x992a,	// (0x0001512f) popup_query_data_window_t1

0x993c,	// (0x00015141) popup_query_data_window_t2_ParamLimits

0x993c,	// (0x00015141) popup_query_data_window_t2

0x9955,	// (0x0001515a) popup_query_data_window_t3_ParamLimits

0x9955,	// (0x0001515a) popup_query_data_window_t3

0x0002,

0xf846,	// (0x0001b04b) popup_query_data_window_t_ParamLimits

0xf846,	// (0x0001b04b) popup_query_data_window_t

0x996f,	// (0x00015174) query_popup_data_pane_ParamLimits

0x996f,	// (0x00015174) query_popup_data_pane

0x9983,	// (0x00015188) query_popup_data_pane_cp1_ParamLimits

0x9983,	// (0x00015188) query_popup_data_pane_cp1

0x9816,	// (0x0001501b) bg_popup_window_pane_cp10_ParamLimits

0x9816,	// (0x0001501b) bg_popup_window_pane_cp10

0x9848,	// (0x0001504d) indicator_popup_pane_ParamLimits

0x9848,	// (0x0001504d) indicator_popup_pane

0x986a,	// (0x0001506f) popup_query_code_window_t1_ParamLimits

0x986a,	// (0x0001506f) popup_query_code_window_t1

0x9884,	// (0x00015089) popup_query_code_window_t2_ParamLimits

0x9884,	// (0x00015089) popup_query_code_window_t2

0x98cd,	// (0x000150d2) popup_query_code_window_t3_ParamLimits

0x98cd,	// (0x000150d2) popup_query_code_window_t3

0x0002,

0xf83f,	// (0x0001b044) popup_query_code_window_t_ParamLimits

0xf83f,	// (0x0001b044) popup_query_code_window_t

0x98fc,	// (0x00015101) query_popup_pane_ParamLimits

0x98fc,	// (0x00015101) query_popup_pane

0x6aef,	// (0x000122f4) bg_popup_window_pane_cp15_ParamLimits

0x6aef,	// (0x000122f4) bg_popup_window_pane_cp15

0x6b0f,	// (0x00012314) indicator_popup_pane_cp1_ParamLimits

0x6b0f,	// (0x00012314) indicator_popup_pane_cp1

0x6b22,	// (0x00012327) indicator_popup_pane_cp2_ParamLimits

0x6b22,	// (0x00012327) indicator_popup_pane_cp2

0x6b3d,	// (0x00012342) popup_query_data_code_window_g1_ParamLimits

0x6b3d,	// (0x00012342) popup_query_data_code_window_g1

0x6b50,	// (0x00012355) popup_query_data_code_window_t1_ParamLimits

0x6b50,	// (0x00012355) popup_query_data_code_window_t1

0x6b62,	// (0x00012367) popup_query_data_code_window_t2_ParamLimits

0x6b62,	// (0x00012367) popup_query_data_code_window_t2

0x6b74,	// (0x00012379) popup_query_data_code_window_t3_ParamLimits

0x6b74,	// (0x00012379) popup_query_data_code_window_t3

0x6b8a,	// (0x0001238f) popup_query_data_code_window_t4_ParamLimits

0x6b8a,	// (0x0001238f) popup_query_data_code_window_t4

0x0003,

0xf5a6,	// (0x0001adab) popup_query_data_code_window_t_ParamLimits

0xf5a6,	// (0x0001adab) popup_query_data_code_window_t

0x55a2,	// (0x00010da7) list_single_midp_graphic_pane_g3

0x6ba4,	// (0x000123a9) query_popup_data_pane_cp2_ParamLimits

0x6bb7,	// (0x000123bc) query_popup_pane_cp2_ParamLimits

0x6bb7,	// (0x000123bc) query_popup_pane_cp2

0x4068,	// (0x0000f86d) bg_popup_window_pane_cp11

0x980e,	// (0x00015013) heading_pane_cp5

0x6ca7,	// (0x000124ac) listscroll_popup_info_pane

0x4068,	// (0x0000f86d) input_focus_pane_cp3

0x6bd2,	// (0x000123d7) query_popup_pane_t1

0x6be0,	// (0x000123e5) list_popup_info_pane_ParamLimits

0x6be0,	// (0x000123e5) list_popup_info_pane

0x6bef,	// (0x000123f4) listscroll_popup_info_pane_g1

0x6bf7,	// (0x000123fc) scroll_pane_cp7

0x6c01,	// (0x00012406) popup_info_list_pane_t1_ParamLimits

0x6c01,	// (0x00012406) popup_info_list_pane_t1

0x6c1b,	// (0x00012420) popup_info_list_pane_t2_ParamLimits

0x6c1b,	// (0x00012420) popup_info_list_pane_t2

0x0001,

0xf5af,	// (0x0001adb4) popup_info_list_pane_t_ParamLimits

0xf5af,	// (0x0001adb4) popup_info_list_pane_t

0x4068,	// (0x0000f86d) bg_popup_window_pane_cp12

0xac84,	// (0x00016489) find_popup_pane

0x67a3,	// (0x00011fa8) bg_popup_window_pane_cp3

0x6c35,	// (0x0001243a) heading_pane_cp3

0x6c41,	// (0x00012446) listscroll_popup_graphic_pane

0x4068,	// (0x0000f86d) bg_popup_window_pane_cp4

0x6c9d,	// (0x000124a2) heading_pane_cp4

0x6ca7,	// (0x000124ac) listscroll_popup_colour_pane

0x6caf,	// (0x000124b4) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x6caf,	// (0x000124b4) cell_large_graphic_colour_none_popup_pane

0x6cc3,	// (0x000124c8) grid_large_graphic_colour_popup_pane_ParamLimits

0x6cc3,	// (0x000124c8) grid_large_graphic_colour_popup_pane

0x6cef,	// (0x000124f4) listscroll_popup_colour_pane_g1_ParamLimits

0x6cef,	// (0x000124f4) listscroll_popup_colour_pane_g1

0x6d06,	// (0x0001250b) listscroll_popup_colour_pane_g2_ParamLimits

0x6d06,	// (0x0001250b) listscroll_popup_colour_pane_g2

0x6d1d,	// (0x00012522) listscroll_popup_colour_pane_g3_ParamLimits

0x6d1d,	// (0x00012522) listscroll_popup_colour_pane_g3

0x6d2d,	// (0x00012532) listscroll_popup_colour_pane_g4_ParamLimits

0x6d2d,	// (0x00012532) listscroll_popup_colour_pane_g4

0x0003,

0xf5b4,	// (0x0001adb9) listscroll_popup_colour_pane_g_ParamLimits

0xf5b4,	// (0x0001adb9) listscroll_popup_colour_pane_g

0x6d41,	// (0x00012546) scroll_pane_cp6_ParamLimits

0x6d41,	// (0x00012546) scroll_pane_cp6

0x6d53,	// (0x00012558) cell_large_graphic_colour_popup_pane_ParamLimits

0x6d53,	// (0x00012558) cell_large_graphic_colour_popup_pane

0x6d78,	// (0x0001257d) cell_large_graphic_colour_none_popup_pane_t1

0x4068,	// (0x0000f86d) grid_highlight_pane_cp5

0x6d87,	// (0x0001258c) cell_large_graphic_colour_popup_pane_g1

0x6d8f,	// (0x00012594) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5bd,	// (0x0001adc2) cell_large_graphic_colour_popup_pane_g

0x6d97,	// (0x0001259c) cell_large_graphic_colour_popup_pane_g2_copy1

0x6da0,	// (0x000125a5) grid_highlight_pane_cp4

0x6da8,	// (0x000125ad) bg_popup_window_pane_cp8_ParamLimits

0x6da8,	// (0x000125ad) bg_popup_window_pane_cp8

0x6dc3,	// (0x000125c8) popup_snote_single_text_window_g1_ParamLimits

0x6dc3,	// (0x000125c8) popup_snote_single_text_window_g1

0x6dd5,	// (0x000125da) popup_snote_single_text_window_t1_ParamLimits

0x6dd5,	// (0x000125da) popup_snote_single_text_window_t1

0x6de8,	// (0x000125ed) popup_snote_single_text_window_t2_ParamLimits

0x6de8,	// (0x000125ed) popup_snote_single_text_window_t2

0x6dfb,	// (0x00012600) popup_snote_single_text_window_t3_ParamLimits

0x6dfb,	// (0x00012600) popup_snote_single_text_window_t3

0x6e34,	// (0x00012639) popup_snote_single_text_window_t4_ParamLimits

0x6e34,	// (0x00012639) popup_snote_single_text_window_t4

0x6e68,	// (0x0001266d) popup_snote_single_text_window_t5_ParamLimits

0x6e68,	// (0x0001266d) popup_snote_single_text_window_t5

0x0004,

0xf5c2,	// (0x0001adc7) popup_snote_single_text_window_t_ParamLimits

0xf5c2,	// (0x0001adc7) popup_snote_single_text_window_t

0x6e97,	// (0x0001269c) bg_popup_window_pane_cp9_ParamLimits

0x6e97,	// (0x0001269c) bg_popup_window_pane_cp9

0x6dc3,	// (0x000125c8) popup_snote_single_graphic_window_g1_ParamLimits

0x6dc3,	// (0x000125c8) popup_snote_single_graphic_window_g1

0x6ea5,	// (0x000126aa) popup_snote_single_graphic_window_g2_ParamLimits

0x6ea5,	// (0x000126aa) popup_snote_single_graphic_window_g2

0x0001,

0xf5cd,	// (0x0001add2) popup_snote_single_graphic_window_g_ParamLimits

0xf5cd,	// (0x0001add2) popup_snote_single_graphic_window_g

0x6eb1,	// (0x000126b6) popup_snote_single_graphic_window_t1_ParamLimits

0x6eb1,	// (0x000126b6) popup_snote_single_graphic_window_t1

0x6ec4,	// (0x000126c9) popup_snote_single_graphic_window_t2_ParamLimits

0x6ec4,	// (0x000126c9) popup_snote_single_graphic_window_t2

0x6ed7,	// (0x000126dc) popup_snote_single_graphic_window_t3_ParamLimits

0x6ed7,	// (0x000126dc) popup_snote_single_graphic_window_t3

0x6f10,	// (0x00012715) popup_snote_single_graphic_window_t4_ParamLimits

0x6f10,	// (0x00012715) popup_snote_single_graphic_window_t4

0x6f44,	// (0x00012749) popup_snote_single_graphic_window_t5_ParamLimits

0x6f44,	// (0x00012749) popup_snote_single_graphic_window_t5

0x0004,

0xf5d2,	// (0x0001add7) popup_snote_single_graphic_window_t_ParamLimits

0xf5d2,	// (0x0001add7) popup_snote_single_graphic_window_t

0xabc2,	// (0x000163c7) grid_graphic_popup_pane_ParamLimits

0xabc2,	// (0x000163c7) grid_graphic_popup_pane

0xabf0,	// (0x000163f5) listscroll_popup_graphic_pane_g1_ParamLimits

0xabf0,	// (0x000163f5) listscroll_popup_graphic_pane_g1

0xac04,	// (0x00016409) listscroll_popup_graphic_pane_g2_ParamLimits

0xac04,	// (0x00016409) listscroll_popup_graphic_pane_g2

0x0001,

0xf9bc,	// (0x0001b1c1) listscroll_popup_graphic_pane_g_ParamLimits

0xf9bc,	// (0x0001b1c1) listscroll_popup_graphic_pane_g

0xac18,	// (0x0001641d) scroll_pane_cp5

0xab6a,	// (0x0001636f) cell_graphic_popup_pane_ParamLimits

0xab6a,	// (0x0001636f) cell_graphic_popup_pane

0xab4b,	// (0x00016350) cell_graphic_popup_pane_g1

0xab53,	// (0x00016358) cell_graphic_popup_pane_g2

0x6d97,	// (0x0001259c) cell_graphic_popup_pane_g3

0x0002,

0xf9b5,	// (0x0001b1ba) cell_graphic_popup_pane_g

0xab5c,	// (0x00016361) cell_graphic_popup_pane_t2

0x6da0,	// (0x000125a5) grid_highlight_pane_cp3

0x6f85,	// (0x0001278a) list_gen_pane_ParamLimits

0x6f85,	// (0x0001278a) list_gen_pane

0x6fb7,	// (0x000127bc) scroll_pane

0xaaad,	// (0x000162b2) bg_list_pane_g1_ParamLimits

0xaaad,	// (0x000162b2) bg_list_pane_g1

0xaac8,	// (0x000162cd) bg_list_pane_g2_ParamLimits

0xaac8,	// (0x000162cd) bg_list_pane_g2

0xaadb,	// (0x000162e0) bg_list_pane_g3_ParamLimits

0xaadb,	// (0x000162e0) bg_list_pane_g3

0xaaed,	// (0x000162f2) bg_list_pane_g4_ParamLimits

0xaaed,	// (0x000162f2) bg_list_pane_g4

0xaaff,	// (0x00016304) bg_list_pane_g5_ParamLimits

0xaaff,	// (0x00016304) bg_list_pane_g5

0x0004,

0xf9aa,	// (0x0001b1af) bg_list_pane_g_ParamLimits

0xf9aa,	// (0x0001b1af) bg_list_pane_g

0xa9fe,	// (0x00016203) list_double2_graphic_large_graphic_pane_ParamLimits

0xa9fe,	// (0x00016203) list_double2_graphic_large_graphic_pane

0xa9fe,	// (0x00016203) list_double2_graphic_pane_ParamLimits

0xa9fe,	// (0x00016203) list_double2_graphic_pane

0xa9fe,	// (0x00016203) list_double2_large_graphic_pane_ParamLimits

0xa9fe,	// (0x00016203) list_double2_large_graphic_pane

0xa9fe,	// (0x00016203) list_double2_pane_ParamLimits

0xa9fe,	// (0x00016203) list_double2_pane

0xa9fe,	// (0x00016203) list_double_graphic_heading_pane_ParamLimits

0xa9fe,	// (0x00016203) list_double_graphic_heading_pane

0xa9fe,	// (0x00016203) list_double_graphic_pane_ParamLimits

0xa9fe,	// (0x00016203) list_double_graphic_pane

0xa9fe,	// (0x00016203) list_double_heading_pane_ParamLimits

0xa9fe,	// (0x00016203) list_double_heading_pane

0xa9fe,	// (0x00016203) list_double_large_graphic_pane_ParamLimits

0xa9fe,	// (0x00016203) list_double_large_graphic_pane

0xa9fe,	// (0x00016203) list_double_number_pane_ParamLimits

0xa9fe,	// (0x00016203) list_double_number_pane

0xa9fe,	// (0x00016203) list_double_pane_ParamLimits

0xa9fe,	// (0x00016203) list_double_pane

0xa9fe,	// (0x00016203) list_double_time_pane_ParamLimits

0xa9fe,	// (0x00016203) list_double_time_pane

0xa9fe,	// (0x00016203) list_setting_number_pane_ParamLimits

0xa9fe,	// (0x00016203) list_setting_number_pane

0xa9fe,	// (0x00016203) list_setting_pane_ParamLimits

0xa9fe,	// (0x00016203) list_setting_pane

0xaa3d,	// (0x00016242) list_single_2graphic_pane_ParamLimits

0xaa3d,	// (0x00016242) list_single_2graphic_pane

0xaa3d,	// (0x00016242) list_single_graphic_heading_pane_ParamLimits

0xaa3d,	// (0x00016242) list_single_graphic_heading_pane

0xaa3d,	// (0x00016242) list_single_graphic_pane_ParamLimits

0xaa3d,	// (0x00016242) list_single_graphic_pane

0xaa3d,	// (0x00016242) list_single_heading_pane_ParamLimits

0xaa3d,	// (0x00016242) list_single_heading_pane

0xaa95,	// (0x0001629a) list_single_large_graphic_pane_ParamLimits

0xaa95,	// (0x0001629a) list_single_large_graphic_pane

0xaa3d,	// (0x00016242) list_single_number_heading_pane_ParamLimits

0xaa3d,	// (0x00016242) list_single_number_heading_pane

0xaa3d,	// (0x00016242) list_single_number_pane_ParamLimits

0xaa3d,	// (0x00016242) list_single_number_pane

0xaa3d,	// (0x00016242) list_single_pane_ParamLimits

0xaa3d,	// (0x00016242) list_single_pane

0x4068,	// (0x0000f86d) list_highlight_pane_cp1

0x6ff7,	// (0x000127fc) list_single_pane_g1_ParamLimits

0x6ff7,	// (0x000127fc) list_single_pane_g1

0x7003,	// (0x00012808) list_single_pane_g2_ParamLimits

0x7003,	// (0x00012808) list_single_pane_g2

0x0001,

0xf5e4,	// (0x0001ade9) list_single_pane_g_ParamLimits

0xf5e4,	// (0x0001ade9) list_single_pane_g

0xa9b7,	// (0x000161bc) list_single_pane_t1_ParamLimits

0xa9b7,	// (0x000161bc) list_single_pane_t1

0x6ff7,	// (0x000127fc) list_single_number_pane_g1_ParamLimits

0x6ff7,	// (0x000127fc) list_single_number_pane_g1

0x7003,	// (0x00012808) list_single_number_pane_g2_ParamLimits

0x7003,	// (0x00012808) list_single_number_pane_g2

0x0001,

0xf5e4,	// (0x0001ade9) list_single_number_pane_g_ParamLimits

0xf5e4,	// (0x0001ade9) list_single_number_pane_g

0xa713,	// (0x00015f18) list_single_number_pane_t1_ParamLimits

0xa713,	// (0x00015f18) list_single_number_pane_t1

0xa729,	// (0x00015f2e) list_single_number_pane_t2_ParamLimits

0xa729,	// (0x00015f2e) list_single_number_pane_t2

0x0001,

0xf96b,	// (0x0001b170) list_single_number_pane_t_ParamLimits

0xf96b,	// (0x0001b170) list_single_number_pane_t

0x6feb,	// (0x000127f0) list_single_graphic_pane_g1_ParamLimits

0x6feb,	// (0x000127f0) list_single_graphic_pane_g1

0x6ff7,	// (0x000127fc) list_single_graphic_pane_g2_ParamLimits

0x6ff7,	// (0x000127fc) list_single_graphic_pane_g2

0x7003,	// (0x00012808) list_single_graphic_pane_g3_ParamLimits

0x7003,	// (0x00012808) list_single_graphic_pane_g3

0x0002,

0xf5dd,	// (0x0001ade2) list_single_graphic_pane_g_ParamLimits

0xf5dd,	// (0x0001ade2) list_single_graphic_pane_g

0x700f,	// (0x00012814) list_single_graphic_pane_t1_ParamLimits

0x700f,	// (0x00012814) list_single_graphic_pane_t1

0x6ff7,	// (0x000127fc) list_single_heading_pane_g1_ParamLimits

0x6ff7,	// (0x000127fc) list_single_heading_pane_g1

0x7003,	// (0x00012808) list_single_heading_pane_g2_ParamLimits

0x7003,	// (0x00012808) list_single_heading_pane_g2

0x0001,

0xf5e4,	// (0x0001ade9) list_single_heading_pane_g_ParamLimits

0xf5e4,	// (0x0001ade9) list_single_heading_pane_g

0x7025,	// (0x0001282a) list_single_heading_pane_t1_ParamLimits

0x7025,	// (0x0001282a) list_single_heading_pane_t1

0x703b,	// (0x00012840) list_single_heading_pane_t2_ParamLimits

0x703b,	// (0x00012840) list_single_heading_pane_t2

0x0001,

0xf5e9,	// (0x0001adee) list_single_heading_pane_t_ParamLimits

0xf5e9,	// (0x0001adee) list_single_heading_pane_t

0x6ff7,	// (0x000127fc) list_single_number_heading_pane_g1_ParamLimits

0x6ff7,	// (0x000127fc) list_single_number_heading_pane_g1

0x7003,	// (0x00012808) list_single_number_heading_pane_g2_ParamLimits

0x7003,	// (0x00012808) list_single_number_heading_pane_g2

0x0001,

0xf5e4,	// (0x0001ade9) list_single_number_heading_pane_g_ParamLimits

0xf5e4,	// (0x0001ade9) list_single_number_heading_pane_g

0x7025,	// (0x0001282a) list_single_number_heading_pane_t1_ParamLimits

0x7025,	// (0x0001282a) list_single_number_heading_pane_t1

0x704d,	// (0x00012852) list_single_number_heading_pane_t2_ParamLimits

0x704d,	// (0x00012852) list_single_number_heading_pane_t2

0x705f,	// (0x00012864) list_single_number_heading_pane_t3_ParamLimits

0x705f,	// (0x00012864) list_single_number_heading_pane_t3

0x0002,

0xf5ee,	// (0x0001adf3) list_single_number_heading_pane_t_ParamLimits

0xf5ee,	// (0x0001adf3) list_single_number_heading_pane_t

0x7071,	// (0x00012876) list_single_graphic_heading_pane_g1_ParamLimits

0x7071,	// (0x00012876) list_single_graphic_heading_pane_g1

0x707d,	// (0x00012882) list_single_graphic_heading_pane_g4_ParamLimits

0x707d,	// (0x00012882) list_single_graphic_heading_pane_g4

0x7003,	// (0x00012808) list_single_graphic_heading_pane_g5_ParamLimits

0x7003,	// (0x00012808) list_single_graphic_heading_pane_g5

0x0002,

0xf5f5,	// (0x0001adfa) list_single_graphic_heading_pane_g_ParamLimits

0xf5f5,	// (0x0001adfa) list_single_graphic_heading_pane_g

0x7025,	// (0x0001282a) list_single_graphic_heading_pane_t1_ParamLimits

0x7025,	// (0x0001282a) list_single_graphic_heading_pane_t1

0x708e,	// (0x00012893) list_single_graphic_heading_pane_t2_ParamLimits

0x708e,	// (0x00012893) list_single_graphic_heading_pane_t2

0x0001,

0xf5fc,	// (0x0001ae01) list_single_graphic_heading_pane_t_ParamLimits

0xf5fc,	// (0x0001ae01) list_single_graphic_heading_pane_t

0x70a0,	// (0x000128a5) list_single_large_graphic_pane_g1_ParamLimits

0x70a0,	// (0x000128a5) list_single_large_graphic_pane_g1

0x70ac,	// (0x000128b1) list_single_large_graphic_pane_g2_ParamLimits

0x70ac,	// (0x000128b1) list_single_large_graphic_pane_g2

0x70b8,	// (0x000128bd) list_single_large_graphic_pane_g3_ParamLimits

0x70b8,	// (0x000128bd) list_single_large_graphic_pane_g3

0x0002,

0xf601,	// (0x0001ae06) list_single_large_graphic_pane_g_ParamLimits

0xf601,	// (0x0001ae06) list_single_large_graphic_pane_g

0x99b7,	// (0x000151bc) wait_border_pane_g2_copy1

0x70c4,	// (0x000128c9) list_single_large_graphic_pane_g4_cp2

0x70cc,	// (0x000128d1) list_single_large_graphic_pane_t1_ParamLimits

0x70cc,	// (0x000128d1) list_single_large_graphic_pane_t1

0x70e2,	// (0x000128e7) list_double_pane_g1_ParamLimits

0x70e2,	// (0x000128e7) list_double_pane_g1

0x70ee,	// (0x000128f3) list_double_pane_g2_ParamLimits

0x70ee,	// (0x000128f3) list_double_pane_g2

0x0001,

0xf608,	// (0x0001ae0d) list_double_pane_g_ParamLimits

0xf608,	// (0x0001ae0d) list_double_pane_g

0x70fa,	// (0x000128ff) list_double_pane_t1_ParamLimits

0x70fa,	// (0x000128ff) list_double_pane_t1

0x7110,	// (0x00012915) list_double_pane_t2_ParamLimits

0x7110,	// (0x00012915) list_double_pane_t2

0x0001,

0xf60d,	// (0x0001ae12) list_double_pane_t_ParamLimits

0xf60d,	// (0x0001ae12) list_double_pane_t

0x7122,	// (0x00012927) list_double2_pane_g1_ParamLimits

0x7122,	// (0x00012927) list_double2_pane_g1

0x7133,	// (0x00012938) list_double2_pane_g2_ParamLimits

0x7133,	// (0x00012938) list_double2_pane_g2

0x0001,

0xf612,	// (0x0001ae17) list_double2_pane_g_ParamLimits

0xf612,	// (0x0001ae17) list_double2_pane_g

0x713f,	// (0x00012944) list_double2_pane_t1_ParamLimits

0x713f,	// (0x00012944) list_double2_pane_t1

0x7155,	// (0x0001295a) list_double2_pane_t2_ParamLimits

0x7155,	// (0x0001295a) list_double2_pane_t2

0x0001,

0xf617,	// (0x0001ae1c) list_double2_pane_t_ParamLimits

0xf617,	// (0x0001ae1c) list_double2_pane_t

0x70e2,	// (0x000128e7) list_double_number_pane_g1_ParamLimits

0x70e2,	// (0x000128e7) list_double_number_pane_g1

0x70ee,	// (0x000128f3) list_double_number_pane_g2_ParamLimits

0x70ee,	// (0x000128f3) list_double_number_pane_g2

0x0001,

0xf608,	// (0x0001ae0d) list_double_number_pane_g_ParamLimits

0xf608,	// (0x0001ae0d) list_double_number_pane_g

0x7167,	// (0x0001296c) list_double_number_pane_t1_ParamLimits

0x7167,	// (0x0001296c) list_double_number_pane_t1

0x7179,	// (0x0001297e) list_double_number_pane_t2_ParamLimits

0x7179,	// (0x0001297e) list_double_number_pane_t2

0x718f,	// (0x00012994) list_double_number_pane_t3_ParamLimits

0x718f,	// (0x00012994) list_double_number_pane_t3

0x0002,

0xf61c,	// (0x0001ae21) list_double_number_pane_t_ParamLimits

0xf61c,	// (0x0001ae21) list_double_number_pane_t

0x71a1,	// (0x000129a6) list_double_graphic_pane_g1_ParamLimits

0x71a1,	// (0x000129a6) list_double_graphic_pane_g1

0x71ad,	// (0x000129b2) list_double_graphic_pane_g2_ParamLimits

0x71ad,	// (0x000129b2) list_double_graphic_pane_g2

0x71bc,	// (0x000129c1) list_double_graphic_pane_g3_ParamLimits

0x71bc,	// (0x000129c1) list_double_graphic_pane_g3

0x0003,

0xf623,	// (0x0001ae28) list_double_graphic_pane_g_ParamLimits

0xf623,	// (0x0001ae28) list_double_graphic_pane_g

0x71d4,	// (0x000129d9) list_double_graphic_pane_t1_ParamLimits

0x71d4,	// (0x000129d9) list_double_graphic_pane_t1

0x71ea,	// (0x000129ef) list_double_graphic_pane_t2_ParamLimits

0x71ea,	// (0x000129ef) list_double_graphic_pane_t2

0x0001,

0xf62c,	// (0x0001ae31) list_double_graphic_pane_t_ParamLimits

0xf62c,	// (0x0001ae31) list_double_graphic_pane_t

0x71fc,	// (0x00012a01) list_double2_graphic_pane_g1_ParamLimits

0x71fc,	// (0x00012a01) list_double2_graphic_pane_g1

0x7208,	// (0x00012a0d) list_double2_graphic_pane_g2_ParamLimits

0x7208,	// (0x00012a0d) list_double2_graphic_pane_g2

0x7133,	// (0x00012938) list_double2_graphic_pane_g3_ParamLimits

0x7133,	// (0x00012938) list_double2_graphic_pane_g3

0x0002,

0xf631,	// (0x0001ae36) list_double2_graphic_pane_g_ParamLimits

0xf631,	// (0x0001ae36) list_double2_graphic_pane_g

0x7214,	// (0x00012a19) list_double2_graphic_pane_t1_ParamLimits

0x7214,	// (0x00012a19) list_double2_graphic_pane_t1

0x722a,	// (0x00012a2f) list_double2_graphic_pane_t2_ParamLimits

0x722a,	// (0x00012a2f) list_double2_graphic_pane_t2

0x0001,

0xf638,	// (0x0001ae3d) list_double2_graphic_pane_t_ParamLimits

0xf638,	// (0x0001ae3d) list_double2_graphic_pane_t

0x723c,	// (0x00012a41) list_double_large_graphic_pane_g1_ParamLimits

0x723c,	// (0x00012a41) list_double_large_graphic_pane_g1

0x7267,	// (0x00012a6c) list_double_large_graphic_pane_g2_ParamLimits

0x7267,	// (0x00012a6c) list_double_large_graphic_pane_g2

0x70ee,	// (0x000128f3) list_double_large_graphic_pane_g3_ParamLimits

0x70ee,	// (0x000128f3) list_double_large_graphic_pane_g3

0x7278,	// (0x00012a7d) list_double_large_graphic_pane_g4_ParamLimits

0x7278,	// (0x00012a7d) list_double_large_graphic_pane_g4

0x0004,

0xf63d,	// (0x0001ae42) list_double_large_graphic_pane_g_ParamLimits

0xf63d,	// (0x0001ae42) list_double_large_graphic_pane_g

0x72a0,	// (0x00012aa5) list_double_large_graphic_pane_t1_ParamLimits

0x72a0,	// (0x00012aa5) list_double_large_graphic_pane_t1

0x72b9,	// (0x00012abe) list_double_large_graphic_pane_t2_ParamLimits

0x72b9,	// (0x00012abe) list_double_large_graphic_pane_t2

0x0001,

0xf648,	// (0x0001ae4d) list_double_large_graphic_pane_t_ParamLimits

0xf648,	// (0x0001ae4d) list_double_large_graphic_pane_t

0x72cb,	// (0x00012ad0) list_double2_large_graphic_pane_g1_ParamLimits

0x72cb,	// (0x00012ad0) list_double2_large_graphic_pane_g1

0x7122,	// (0x00012927) list_double2_large_graphic_pane_g2_ParamLimits

0x7122,	// (0x00012927) list_double2_large_graphic_pane_g2

0x7133,	// (0x00012938) list_double2_large_graphic_pane_g3_ParamLimits

0x7133,	// (0x00012938) list_double2_large_graphic_pane_g3

0x0002,

0xf64d,	// (0x0001ae52) list_double2_large_graphic_pane_g_ParamLimits

0xf64d,	// (0x0001ae52) list_double2_large_graphic_pane_g

0x72d7,	// (0x00012adc) list_double2_large_graphic_pane_t1_ParamLimits

0x72d7,	// (0x00012adc) list_double2_large_graphic_pane_t1

0x72ed,	// (0x00012af2) list_double2_large_graphic_pane_t2_ParamLimits

0x72ed,	// (0x00012af2) list_double2_large_graphic_pane_t2

0x0001,

0xf654,	// (0x0001ae59) list_double2_large_graphic_pane_t_ParamLimits

0xf654,	// (0x0001ae59) list_double2_large_graphic_pane_t

0x72ff,	// (0x00012b04) list_double_heading_pane_g1_ParamLimits

0x72ff,	// (0x00012b04) list_double_heading_pane_g1

0x7310,	// (0x00012b15) list_double_heading_pane_g2_ParamLimits

0x7310,	// (0x00012b15) list_double_heading_pane_g2

0x0001,

0xf659,	// (0x0001ae5e) list_double_heading_pane_g_ParamLimits

0xf659,	// (0x0001ae5e) list_double_heading_pane_g

0x731c,	// (0x00012b21) list_double_heading_pane_t1_ParamLimits

0x731c,	// (0x00012b21) list_double_heading_pane_t1

0x7332,	// (0x00012b37) list_double_heading_pane_t2_ParamLimits

0x7332,	// (0x00012b37) list_double_heading_pane_t2

0x0001,

0xf65e,	// (0x0001ae63) list_double_heading_pane_t_ParamLimits

0xf65e,	// (0x0001ae63) list_double_heading_pane_t

0x7344,	// (0x00012b49) list_double_graphic_heading_pane_g1_ParamLimits

0x7344,	// (0x00012b49) list_double_graphic_heading_pane_g1

0x72ff,	// (0x00012b04) list_double_graphic_heading_pane_g2_ParamLimits

0x72ff,	// (0x00012b04) list_double_graphic_heading_pane_g2

0x7310,	// (0x00012b15) list_double_graphic_heading_pane_g3_ParamLimits

0x7310,	// (0x00012b15) list_double_graphic_heading_pane_g3

0x0002,

0xf663,	// (0x0001ae68) list_double_graphic_heading_pane_g_ParamLimits

0xf663,	// (0x0001ae68) list_double_graphic_heading_pane_g

0x7350,	// (0x00012b55) list_double_graphic_heading_pane_t1_ParamLimits

0x7350,	// (0x00012b55) list_double_graphic_heading_pane_t1

0x7366,	// (0x00012b6b) list_double_graphic_heading_pane_t2_ParamLimits

0x7366,	// (0x00012b6b) list_double_graphic_heading_pane_t2

0x0001,

0xf66a,	// (0x0001ae6f) list_double_graphic_heading_pane_t_ParamLimits

0xf66a,	// (0x0001ae6f) list_double_graphic_heading_pane_t

0x7267,	// (0x00012a6c) list_double_time_pane_g1_ParamLimits

0x7267,	// (0x00012a6c) list_double_time_pane_g1

0x70ee,	// (0x000128f3) list_double_time_pane_g2_ParamLimits

0x70ee,	// (0x000128f3) list_double_time_pane_g2

0x0001,

0xf66f,	// (0x0001ae74) list_double_time_pane_g_ParamLimits

0xf66f,	// (0x0001ae74) list_double_time_pane_g

0x7378,	// (0x00012b7d) list_double_time_pane_t1_ParamLimits

0x7378,	// (0x00012b7d) list_double_time_pane_t1

0x738e,	// (0x00012b93) list_double_time_pane_t2_ParamLimits

0x738e,	// (0x00012b93) list_double_time_pane_t2

0x73a0,	// (0x00012ba5) list_double_time_pane_t3_ParamLimits

0x73a0,	// (0x00012ba5) list_double_time_pane_t3

0x73b2,	// (0x00012bb7) list_double_time_pane_t4_ParamLimits

0x73b2,	// (0x00012bb7) list_double_time_pane_t4

0x0003,

0xf674,	// (0x0001ae79) list_double_time_pane_t_ParamLimits

0xf674,	// (0x0001ae79) list_double_time_pane_t

0x7208,	// (0x00012a0d) list_setting_pane_g1_ParamLimits

0x7208,	// (0x00012a0d) list_setting_pane_g1

0x7133,	// (0x00012938) list_setting_pane_g2_ParamLimits

0x7133,	// (0x00012938) list_setting_pane_g2

0x0001,

0xf67d,	// (0x0001ae82) list_setting_pane_g_ParamLimits

0xf67d,	// (0x0001ae82) list_setting_pane_g

0x73c4,	// (0x00012bc9) list_setting_pane_t1_ParamLimits

0x73c4,	// (0x00012bc9) list_setting_pane_t1

0x73db,	// (0x00012be0) list_setting_pane_t2_ParamLimits

0x73db,	// (0x00012be0) list_setting_pane_t2

0x0002,

0xf682,	// (0x0001ae87) list_setting_pane_t_ParamLimits

0xf682,	// (0x0001ae87) list_setting_pane_t

0x741a,	// (0x00012c1f) set_value_pane_cp_ParamLimits

0x741a,	// (0x00012c1f) set_value_pane_cp

0x7208,	// (0x00012a0d) list_setting_number_pane_g1_ParamLimits

0x7208,	// (0x00012a0d) list_setting_number_pane_g1

0x7133,	// (0x00012938) list_setting_number_pane_g2_ParamLimits

0x7133,	// (0x00012938) list_setting_number_pane_g2

0x0001,

0xf67d,	// (0x0001ae82) list_setting_number_pane_g_ParamLimits

0xf67d,	// (0x0001ae82) list_setting_number_pane_g

0x7428,	// (0x00012c2d) list_setting_number_pane_t1_ParamLimits

0x7428,	// (0x00012c2d) list_setting_number_pane_t1

0x743c,	// (0x00012c41) list_setting_number_pane_t2_ParamLimits

0x743c,	// (0x00012c41) list_setting_number_pane_t2

0x7453,	// (0x00012c58) list_setting_number_pane_t3_ParamLimits

0x7453,	// (0x00012c58) list_setting_number_pane_t3

0x0003,

0xf689,	// (0x0001ae8e) list_setting_number_pane_t_ParamLimits

0xf689,	// (0x0001ae8e) list_setting_number_pane_t

0x741a,	// (0x00012c1f) set_value_pane_ParamLimits

0x741a,	// (0x00012c1f) set_value_pane

0x7496,	// (0x00012c9b) bg_set_opt_pane_ParamLimits

0x7496,	// (0x00012c9b) bg_set_opt_pane

0x74b7,	// (0x00012cbc) set_value_pane_t1

0x74c5,	// (0x00012cca) slider_set_pane_cp3

0x74ce,	// (0x00012cd3) volume_small_pane_cp

0x74d7,	// (0x00012cdc) list_form_gen_pane

0x74e0,	// (0x00012ce5) scroll_pane_cp8

0x74f9,	// (0x00012cfe) form_field_data_pane_ParamLimits

0x74f9,	// (0x00012cfe) form_field_data_pane

0x751f,	// (0x00012d24) form_field_data_wide_pane_ParamLimits

0x751f,	// (0x00012d24) form_field_data_wide_pane

0x7546,	// (0x00012d4b) form_field_popup_pane_ParamLimits

0x7546,	// (0x00012d4b) form_field_popup_pane

0x7568,	// (0x00012d6d) form_field_popup_wide_pane_ParamLimits

0x7568,	// (0x00012d6d) form_field_popup_wide_pane

0x7589,	// (0x00012d8e) form_field_slider_pane_ParamLimits

0x7589,	// (0x00012d8e) form_field_slider_pane

0x759c,	// (0x00012da1) form_field_slider_wide_pane_ParamLimits

0x759c,	// (0x00012da1) form_field_slider_wide_pane

0x75af,	// (0x00012db4) data_form_pane

0x75c5,	// (0x00012dca) form_field_data_pane_t1

0x75df,	// (0x00012de4) input_focus_pane

0x75ed,	// (0x00012df2) data_form_wide_pane

0x7625,	// (0x00012e2a) form_field_data_wide_pane_t1

0x6db5,	// (0x000125ba) input_focus_pane_cp6

0x7647,	// (0x00012e4c) form_field_popup_pane_t1

0x75df,	// (0x00012de4) input_focus_pane_cp7

0x7661,	// (0x00012e66) list_form_pane

0x7675,	// (0x00012e7a) form_field_popup_wide_pane_t1

0x75df,	// (0x00012de4) input_focus_pane_cp8

0x768a,	// (0x00012e8f) list_form_wide_pane

0x76a1,	// (0x00012ea6) form_field_slider_pane_t1_ParamLimits

0x76a1,	// (0x00012ea6) form_field_slider_pane_t1

0x76b5,	// (0x00012eba) form_field_slider_pane_t2_ParamLimits

0x76b5,	// (0x00012eba) form_field_slider_pane_t2

0x0001,

0xf699,	// (0x0001ae9e) form_field_slider_pane_t_ParamLimits

0xf699,	// (0x0001ae9e) form_field_slider_pane_t

0x6a39,	// (0x0001223e) input_focus_pane_cp9_ParamLimits

0x6a39,	// (0x0001223e) input_focus_pane_cp9

0x76c7,	// (0x00012ecc) slider_cont_pane_ParamLimits

0x76c7,	// (0x00012ecc) slider_cont_pane

0x76db,	// (0x00012ee0) form_field_slider_wide_pane_t1_ParamLimits

0x76db,	// (0x00012ee0) form_field_slider_wide_pane_t1

0x76ed,	// (0x00012ef2) form_field_slider_wide_pane_t2_ParamLimits

0x76ed,	// (0x00012ef2) form_field_slider_wide_pane_t2

0x0001,

0xf69e,	// (0x0001aea3) form_field_slider_wide_pane_t_ParamLimits

0xf69e,	// (0x0001aea3) form_field_slider_wide_pane_t

0x6a39,	// (0x0001223e) input_focus_pane_cp10_ParamLimits

0x6a39,	// (0x0001223e) input_focus_pane_cp10

0x76ff,	// (0x00012f04) slider_cont_pane_cp1_ParamLimits

0x76ff,	// (0x00012f04) slider_cont_pane_cp1

0x7713,	// (0x00012f18) slider_form_pane_cp

0x771b,	// (0x00012f20) input_focus_pane_g1

0x7723,	// (0x00012f28) input_focus_pane_g2

0x772b,	// (0x00012f30) input_focus_pane_g3

0x7733,	// (0x00012f38) input_focus_pane_g4

0x773b,	// (0x00012f40) input_focus_pane_g5

0x7743,	// (0x00012f48) input_focus_pane_g6

0x774b,	// (0x00012f50) input_focus_pane_g7

0x7753,	// (0x00012f58) input_focus_pane_g8

0x775b,	// (0x00012f60) input_focus_pane_g9

0x3eef,	// (0x0000f6f4) input_focus_pane_g10

0x0009,

0xf6a3,	// (0x0001aea8) input_focus_pane_g

0x99c0,	// (0x000151c5) wait_border_pane_g3_copy1

0x7763,	// (0x00012f68) data_form_pane_t1

0x3eef,	// (0x0000f6f4) wait_anim_pane_g1_copy1

0xa998,	// (0x0001619d) data_form_wide_pane_t1

0x7782,	// (0x00012f87) list_form_graphic_pane_cp_ParamLimits

0x7782,	// (0x00012f87) list_form_graphic_pane_cp

0xa96d,	// (0x00016172) slider_form_pane_g1

0xa976,	// (0x0001617b) slider_form_pane_g2

0x0006,

0xf99b,	// (0x0001b1a0) slider_form_pane_g

0x7782,	// (0x00012f87) list_form_graphic_pane_ParamLimits

0x7782,	// (0x00012f87) list_form_graphic_pane

0x7794,	// (0x00012f99) list_form_graphic_pane_g1

0x779c,	// (0x00012fa1) list_form_graphic_pane_t1_ParamLimits

0x779c,	// (0x00012fa1) list_form_graphic_pane_t1

0x67a3,	// (0x00011fa8) list_highlight_pane_cp5_ParamLimits

0x67a3,	// (0x00011fa8) list_highlight_pane_cp5

0x77b1,	// (0x00012fb6) find_pane_g1

0x77ba,	// (0x00012fbf) input_find_pane

0x77c3,	// (0x00012fc8) input_find_pane_g1_ParamLimits

0x77c3,	// (0x00012fc8) input_find_pane_g1

0x77cf,	// (0x00012fd4) input_find_pane_t1_ParamLimits

0x77cf,	// (0x00012fd4) input_find_pane_t1

0x77e4,	// (0x00012fe9) input_find_pane_t2_ParamLimits

0x77e4,	// (0x00012fe9) input_find_pane_t2

0x0001,

0xf6b8,	// (0x0001aebd) input_find_pane_t_ParamLimits

0xf6b8,	// (0x0001aebd) input_find_pane_t

0x77f9,	// (0x00012ffe) input_focus_pane_cp5_ParamLimits

0x77f9,	// (0x00012ffe) input_focus_pane_cp5

0x7813,	// (0x00013018) bg_popup_window_pane_cp2_ParamLimits

0x7813,	// (0x00013018) bg_popup_window_pane_cp2

0x7820,	// (0x00013025) listscroll_menu_pane_ParamLimits

0x7820,	// (0x00013025) listscroll_menu_pane

0x782c,	// (0x00013031) popup_submenu_window_ParamLimits

0x782c,	// (0x00013031) popup_submenu_window

0x785c,	// (0x00013061) find_popup_pane_g1

0x7864,	// (0x00013069) input_popup_find_pane_cp

0x77f9,	// (0x00012ffe) input_focus_pane_cp4_ParamLimits

0x77f9,	// (0x00012ffe) input_focus_pane_cp4

0x787c,	// (0x00013081) input_popup_find_pane_t1_ParamLimits

0x787c,	// (0x00013081) input_popup_find_pane_t1

0x4068,	// (0x0000f86d) bg_popup_sub_pane_cp

0x78aa,	// (0x000130af) listscroll_popup_sub_pane

0x78b2,	// (0x000130b7) list_submenu_pane_ParamLimits

0x78b2,	// (0x000130b7) list_submenu_pane

0x78c3,	// (0x000130c8) scroll_pane_cp4

0x78cb,	// (0x000130d0) list_single_popup_submenu_pane_ParamLimits

0x78cb,	// (0x000130d0) list_single_popup_submenu_pane

0x78e0,	// (0x000130e5) list_single_popup_submenu_pane_g1

0x78e8,	// (0x000130ed) list_single_popup_submenu_pane_t1_ParamLimits

0x78e8,	// (0x000130ed) list_single_popup_submenu_pane_t1

0x67a3,	// (0x00011fa8) bg_active_tab_pane_cp1_ParamLimits

0x67a3,	// (0x00011fa8) bg_active_tab_pane_cp1

0x78fd,	// (0x00013102) tabs_2_active_pane_g1

0x7905,	// (0x0001310a) tabs_2_active_pane_t1

0x67a3,	// (0x00011fa8) bg_passive_tab_pane_cp1_ParamLimits

0x67a3,	// (0x00011fa8) bg_passive_tab_pane_cp1

0x78fd,	// (0x00013102) tabs_2_passive_pane_g1

0x7905,	// (0x0001310a) tabs_2_passive_pane_t1

0x7917,	// (0x0001311c) bg_active_tab_pane_cp4

0x7925,	// (0x0001312a) tabs_2_long_active_pane_t1

0x7938,	// (0x0001313d) bg_passive_tab_pane_cp4

0x55aa,	// (0x00010daf) list_single_midp_graphic_pane_g4_ParamLimits

0x7917,	// (0x0001311c) bg_active_tab_pane_cp5

0x7944,	// (0x00013149) tabs_3_long_active_pane_t1

0x7938,	// (0x0001313d) bg_passive_tab_pane_cp5

0x55aa,	// (0x00010daf) list_single_midp_graphic_pane_g4

0x67a3,	// (0x00011fa8) bg_popup_window_pane_cp13_ParamLimits

0x67a3,	// (0x00011fa8) bg_popup_window_pane_cp13

0x795f,	// (0x00013164) listscroll_popup_fast_pane_ParamLimits

0x795f,	// (0x00013164) listscroll_popup_fast_pane

0x796e,	// (0x00013173) grid_popup_fast_pane_ParamLimits

0x796e,	// (0x00013173) grid_popup_fast_pane

0x7980,	// (0x00013185) scroll_pane_cp9_ParamLimits

0x7980,	// (0x00013185) scroll_pane_cp9

0xc77c,	// (0x00017f81) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc77c,	// (0x00017f81) list_single_graphic_hl_pane_t1_cp2

0x79a4,	// (0x000131a9) input_focus_pane_cp20_ParamLimits

0x79a4,	// (0x000131a9) input_focus_pane_cp20

0x79b2,	// (0x000131b7) query_popup_data_pane_t1_ParamLimits

0x79b2,	// (0x000131b7) query_popup_data_pane_t1

0x79c5,	// (0x000131ca) query_popup_data_pane_t2_ParamLimits

0x79c5,	// (0x000131ca) query_popup_data_pane_t2

0x7a0b,	// (0x00013210) query_popup_data_pane_t3_ParamLimits

0x7a0b,	// (0x00013210) query_popup_data_pane_t3

0x7a4c,	// (0x00013251) query_popup_data_pane_t4_ParamLimits

0x7a4c,	// (0x00013251) query_popup_data_pane_t4

0x7a88,	// (0x0001328d) query_popup_data_pane_t5_ParamLimits

0x7a88,	// (0x0001328d) query_popup_data_pane_t5

0x0004,

0xf6bd,	// (0x0001aec2) query_popup_data_pane_t_ParamLimits

0xf6bd,	// (0x0001aec2) query_popup_data_pane_t

0x771b,	// (0x00012f20) bg_set_opt_pane_g1

0x7723,	// (0x00012f28) bg_set_opt_pane_g2

0x772b,	// (0x00012f30) bg_set_opt_pane_g3

0x7733,	// (0x00012f38) bg_set_opt_pane_g4

0x773b,	// (0x00012f40) bg_set_opt_pane_g5

0x7743,	// (0x00012f48) bg_set_opt_pane_g6

0x774b,	// (0x00012f50) bg_set_opt_pane_g7

0x7753,	// (0x00012f58) bg_set_opt_pane_g8

0x775b,	// (0x00012f60) bg_set_opt_pane_g9

0x0008,

0xf6c8,	// (0x0001aecd) bg_set_opt_pane_g

0x519b,	// (0x000109a0) control_top_pane_stacon_ParamLimits

0x519b,	// (0x000109a0) control_top_pane_stacon

0x51ee,	// (0x000109f3) signal_pane_stacon_ParamLimits

0x51ee,	// (0x000109f3) signal_pane_stacon

0x80c0,	// (0x000138c5) stacon_top_pane_g1_ParamLimits

0x80c0,	// (0x000138c5) stacon_top_pane_g1

0x5213,	// (0x00010a18) title_pane_stacon_ParamLimits

0x5213,	// (0x00010a18) title_pane_stacon

0x523d,	// (0x00010a42) uni_indicator_pane_stacon_ParamLimits

0x523d,	// (0x00010a42) uni_indicator_pane_stacon

0x5255,	// (0x00010a5a) battery_pane_stacon_ParamLimits

0x5255,	// (0x00010a5a) battery_pane_stacon

0x5299,	// (0x00010a9e) control_bottom_pane_stacon_ParamLimits

0x5299,	// (0x00010a9e) control_bottom_pane_stacon

0x52bc,	// (0x00010ac1) navi_pane_stacon_ParamLimits

0x52bc,	// (0x00010ac1) navi_pane_stacon

0x80e2,	// (0x000138e7) stacon_bottom_pane_g1_ParamLimits

0x80e2,	// (0x000138e7) stacon_bottom_pane_g1

0x4ef8,	// (0x000106fd) aid_levels_signal_lsc_ParamLimits

0x4ef8,	// (0x000106fd) aid_levels_signal_lsc

0x4f0f,	// (0x00010714) signal_pane_stacon_g1_ParamLimits

0x4f0f,	// (0x00010714) signal_pane_stacon_g1

0x4f23,	// (0x00010728) signal_pane_stacon_g2_ParamLimits

0x4f23,	// (0x00010728) signal_pane_stacon_g2

0x0001,

0xf6db,	// (0x0001aee0) signal_pane_stacon_g_ParamLimits

0xf6db,	// (0x0001aee0) signal_pane_stacon_g

0x4f58,	// (0x0001075d) title_pane_stacon_t1_ParamLimits

0x4f58,	// (0x0001075d) title_pane_stacon_t1

0x7acc,	// (0x000132d1) uni_indicator_pane_stacon_g1

0x7ad6,	// (0x000132db) uni_indicator_pane_stacon_g2

0x7ae0,	// (0x000132e5) uni_indicator_pane_stacon_g3

0x7aea,	// (0x000132ef) uni_indicator_pane_stacon_g4

0x0003,

0xf6e7,	// (0x0001aeec) uni_indicator_pane_stacon_g

0x4f7d,	// (0x00010782) control_top_pane_stacon_g1

0x4f85,	// (0x0001078a) control_top_pane_stacon_t1_ParamLimits

0x4f85,	// (0x0001078a) control_top_pane_stacon_t1

0x4fbc,	// (0x000107c1) aid_levels_battery_lsc_ParamLimits

0x4fbc,	// (0x000107c1) aid_levels_battery_lsc

0x4fd4,	// (0x000107d9) battery_pane_stacon_g1_ParamLimits

0x4fd4,	// (0x000107d9) battery_pane_stacon_g1

0x4fe7,	// (0x000107ec) battery_pane_stacon_g2_ParamLimits

0x4fe7,	// (0x000107ec) battery_pane_stacon_g2

0x0001,

0xf6f0,	// (0x0001aef5) battery_pane_stacon_g_ParamLimits

0xf6f0,	// (0x0001aef5) battery_pane_stacon_g

0x5025,	// (0x0001082a) navi_icon_pane_stacon

0x5039,	// (0x0001083e) navi_navi_pane_stacon

0x5025,	// (0x0001082a) navi_text_pane_stacon

0x4f7d,	// (0x00010782) control_bottom_pane_stacon_g1

0x504f,	// (0x00010854) control_bottom_pane_stacon_t1_ParamLimits

0x504f,	// (0x00010854) control_bottom_pane_stacon_t1

0x7b0e,	// (0x00013313) grid_app_pane_ParamLimits

0x7b0e,	// (0x00013313) grid_app_pane

0x7b32,	// (0x00013337) scroll_pane_cp15_ParamLimits

0x7b32,	// (0x00013337) scroll_pane_cp15

0x7b47,	// (0x0001334c) cell_app_pane_ParamLimits

0x7b47,	// (0x0001334c) cell_app_pane

0x7b73,	// (0x00013378) cell_app_pane_g1_ParamLimits

0x7b73,	// (0x00013378) cell_app_pane_g1

0x7b97,	// (0x0001339c) cell_app_pane_g2_ParamLimits

0x7b97,	// (0x0001339c) cell_app_pane_g2

0x0001,

0xf6f5,	// (0x0001aefa) cell_app_pane_g_ParamLimits

0xf6f5,	// (0x0001aefa) cell_app_pane_g

0x7ba3,	// (0x000133a8) cell_app_pane_t1_ParamLimits

0x7ba3,	// (0x000133a8) cell_app_pane_t1

0x7bb5,	// (0x000133ba) grid_highlight_pane_ParamLimits

0x7bb5,	// (0x000133ba) grid_highlight_pane

0x771b,	// (0x00012f20) cell_highlight_pane_g1

0x7723,	// (0x00012f28) cell_highlight_pane_g2

0x772b,	// (0x00012f30) cell_highlight_pane_g3

0x7733,	// (0x00012f38) cell_highlight_pane_g4

0x773b,	// (0x00012f40) cell_highlight_pane_g5

0x7743,	// (0x00012f48) cell_highlight_pane_g6

0x774b,	// (0x00012f50) cell_highlight_pane_g7

0x7753,	// (0x00012f58) cell_highlight_pane_g8

0x775b,	// (0x00012f60) cell_highlight_pane_g9

0x3eef,	// (0x0000f6f4) cell_highlight_pane_g10

0x0009,

0xf6a3,	// (0x0001aea8) cell_highlight_pane_g

0x7bc6,	// (0x000133cb) bg_scroll_pane

0x5099,	// (0x0001089e) scroll_handle_pane

0x7c0d,	// (0x00013412) scroll_bg_pane_g1

0x7c22,	// (0x00013427) scroll_bg_pane_g2

0x7c3a,	// (0x0001343f) scroll_bg_pane_g3

0x0002,

0xf6fa,	// (0x0001aeff) scroll_bg_pane_g

0x7c4f,	// (0x00013454) scroll_handle_focus_pane_ParamLimits

0x7c4f,	// (0x00013454) scroll_handle_focus_pane

0x7c0d,	// (0x00013412) scroll_handle_pane_g1

0x7c5c,	// (0x00013461) scroll_handle_pane_g2

0x7c3a,	// (0x0001343f) scroll_handle_pane_g3

0x0002,

0xf701,	// (0x0001af06) scroll_handle_pane_g

0x77f9,	// (0x00012ffe) bg_popup_sub_pane_cp21_ParamLimits

0x77f9,	// (0x00012ffe) bg_popup_sub_pane_cp21

0x7c70,	// (0x00013475) popup_fep_japan_predictive_window_t1_ParamLimits

0x7c70,	// (0x00013475) popup_fep_japan_predictive_window_t1

0x7c87,	// (0x0001348c) popup_fep_japan_predictive_window_t2_ParamLimits

0x7c87,	// (0x0001348c) popup_fep_japan_predictive_window_t2

0x7cba,	// (0x000134bf) popup_fep_japan_predictive_window_t3_ParamLimits

0x7cba,	// (0x000134bf) popup_fep_japan_predictive_window_t3

0x0002,

0xf708,	// (0x0001af0d) popup_fep_japan_predictive_window_t_ParamLimits

0xf708,	// (0x0001af0d) popup_fep_japan_predictive_window_t

0x4068,	// (0x0000f86d) bg_popup_sub_pane_cp23

0x7cf1,	// (0x000134f6) listscroll_japin_cand_pane

0x7cf9,	// (0x000134fe) popup_fep_japan_candidate_window_t1

0x7d07,	// (0x0001350c) candidate_pane_ParamLimits

0x7d07,	// (0x0001350c) candidate_pane

0x7d19,	// (0x0001351e) scroll_pane_cp30

0x7d23,	// (0x00013528) list_single_popup_jap_candidate_pane_ParamLimits

0x7d23,	// (0x00013528) list_single_popup_jap_candidate_pane

0x4068,	// (0x0000f86d) list_highlight_pane_cp30

0x7d37,	// (0x0001353c) list_single_popup_jap_candidate_pane_t1

0x7d46,	// (0x0001354b) level_1_signal

0x7d53,	// (0x00013558) level_2_signal

0x7d60,	// (0x00013565) level_3_signal

0x7d6d,	// (0x00013572) level_4_signal

0x7d7a,	// (0x0001357f) level_5_signal

0x7d87,	// (0x0001358c) level_6_signal

0x7d94,	// (0x00013599) level_7_signal

0x7d46,	// (0x0001354b) level_1_battery

0x7d53,	// (0x00013558) level_2_battery

0x7d60,	// (0x00013565) level_3_battery

0x7d6d,	// (0x00013572) level_4_battery

0x7d7a,	// (0x0001357f) level_5_battery

0x7d87,	// (0x0001358c) level_6_battery

0x7d94,	// (0x00013599) level_7_battery

0x7db9,	// (0x000135be) list_menu_pane_ParamLimits

0x7db9,	// (0x000135be) list_menu_pane

0x7dca,	// (0x000135cf) scroll_pane_cp25_ParamLimits

0x7dca,	// (0x000135cf) scroll_pane_cp25

0x7de3,	// (0x000135e8) list_double2_graphic_pane_cp2_ParamLimits

0x7de3,	// (0x000135e8) list_double2_graphic_pane_cp2

0x7de3,	// (0x000135e8) list_double2_large_graphic_pane_cp2_ParamLimits

0x7de3,	// (0x000135e8) list_double2_large_graphic_pane_cp2

0x7de3,	// (0x000135e8) list_double2_pane_cp2_ParamLimits

0x7de3,	// (0x000135e8) list_double2_pane_cp2

0x7de3,	// (0x000135e8) list_double_graphic_pane_cp2_ParamLimits

0x7de3,	// (0x000135e8) list_double_graphic_pane_cp2

0x7de3,	// (0x000135e8) list_double_large_graphic_pane_cp2_ParamLimits

0x7de3,	// (0x000135e8) list_double_large_graphic_pane_cp2

0x7de3,	// (0x000135e8) list_double_number_pane_cp2_ParamLimits

0x7de3,	// (0x000135e8) list_double_number_pane_cp2

0x7de3,	// (0x000135e8) list_double_pane_cp2_ParamLimits

0x7de3,	// (0x000135e8) list_double_pane_cp2

0x7e09,	// (0x0001360e) list_single_2graphic_pane_cp2_ParamLimits

0x7e09,	// (0x0001360e) list_single_2graphic_pane_cp2

0x7e09,	// (0x0001360e) list_single_graphic_heading_pane_cp2_ParamLimits

0x7e09,	// (0x0001360e) list_single_graphic_heading_pane_cp2

0x7e09,	// (0x0001360e) list_single_graphic_pane_cp2_ParamLimits

0x7e09,	// (0x0001360e) list_single_graphic_pane_cp2

0x7e09,	// (0x0001360e) list_single_heading_pane_cp2_ParamLimits

0x7e09,	// (0x0001360e) list_single_heading_pane_cp2

0x7e26,	// (0x0001362b) list_single_large_graphic_pane_cp2_ParamLimits

0x7e26,	// (0x0001362b) list_single_large_graphic_pane_cp2

0x7e09,	// (0x0001360e) list_single_number_heading_pane_cp2_ParamLimits

0x7e09,	// (0x0001360e) list_single_number_heading_pane_cp2

0x7e09,	// (0x0001360e) list_single_number_pane_cp2_ParamLimits

0x7e09,	// (0x0001360e) list_single_number_pane_cp2

0x7e09,	// (0x0001360e) list_single_pane_cp2_ParamLimits

0x7e09,	// (0x0001360e) list_single_pane_cp2

0x7e7b,	// (0x00013680) bg_popup_sub_pane_cp22

0x514b,	// (0x00010950) popup_side_volume_key_window_g1

0x5175,	// (0x0001097a) popup_side_volume_key_window_t1

0x5193,	// (0x00010998) volume_small_pane_cp1

0x6a39,	// (0x0001223e) bg_popup_sub_pane_cp24_ParamLimits

0x6a39,	// (0x0001223e) bg_popup_sub_pane_cp24

0x7e91,	// (0x00013696) fep_china_uni_candidate_pane_ParamLimits

0x7e91,	// (0x00013696) fep_china_uni_candidate_pane

0x7ea5,	// (0x000136aa) fep_china_uni_entry_pane

0x7eb5,	// (0x000136ba) popup_fep_china_uni_window_g1

0x7ed1,	// (0x000136d6) fep_china_uni_entry_pane_g1

0x7edb,	// (0x000136e0) fep_china_uni_entry_pane_g2

0x0001,

0xf735,	// (0x0001af3a) fep_china_uni_entry_pane_g

0x7ee5,	// (0x000136ea) fep_entry_item_pane

0x7eef,	// (0x000136f4) fep_candidate_item_pane

0x7ef7,	// (0x000136fc) fep_china_uni_candidate_pane_g1

0x7f01,	// (0x00013706) fep_china_uni_candidate_pane_g2

0x7f09,	// (0x0001370e) fep_china_uni_candidate_pane_g3

0x7f11,	// (0x00013716) fep_china_uni_candidate_pane_g4

0x0003,

0xf73a,	// (0x0001af3f) fep_china_uni_candidate_pane_g

0x3eef,	// (0x0000f6f4) fep_entry_item_pane_g1

0x7f1b,	// (0x00013720) fep_entry_item_pane_t1_ParamLimits

0x7f1b,	// (0x00013720) fep_entry_item_pane_t1

0x7f31,	// (0x00013736) fep_candidate_item_pane_t1_ParamLimits

0x7f31,	// (0x00013736) fep_candidate_item_pane_t1

0x7f46,	// (0x0001374b) fep_candidate_item_pane_t2_ParamLimits

0x7f46,	// (0x0001374b) fep_candidate_item_pane_t2

0x0001,

0xf743,	// (0x0001af48) fep_candidate_item_pane_t_ParamLimits

0xf743,	// (0x0001af48) fep_candidate_item_pane_t

0x67a3,	// (0x00011fa8) list_highlight_pane_cp31_ParamLimits

0x67a3,	// (0x00011fa8) list_highlight_pane_cp31

0x7f58,	// (0x0001375d) level_1_signal_lsc

0x7f61,	// (0x00013766) level_2_signal_lsc

0x7f6a,	// (0x0001376f) level_3_signal_lsc

0x7f73,	// (0x00013778) level_4_signal_lsc

0x7f7c,	// (0x00013781) level_5_signal_lsc

0x7f85,	// (0x0001378a) level_6_signal_lsc

0x7f8e,	// (0x00013793) level_7_signal_lsc

0x7f8e,	// (0x00013793) level_1_battery_lsc

0x7f97,	// (0x0001379c) level_2_battery_lsc

0x7fa0,	// (0x000137a5) level_3_battery_lsc

0x7fa9,	// (0x000137ae) level_4_battery_lsc

0x7fb2,	// (0x000137b7) level_5_battery_lsc

0x7fbb,	// (0x000137c0) level_6_battery_lsc

0x7f58,	// (0x0001375d) level_7_battery_lsc

0x7fc4,	// (0x000137c9) scroll_handle_focus_pane_g1

0x7fcd,	// (0x000137d2) scroll_handle_focus_pane_g2

0x7fd6,	// (0x000137db) scroll_handle_focus_pane_g3

0x0002,

0xf748,	// (0x0001af4d) scroll_handle_focus_pane_g

0x7fdf,	// (0x000137e4) list_single_2graphic_pane_g1_ParamLimits

0x7fdf,	// (0x000137e4) list_single_2graphic_pane_g1

0x707d,	// (0x00012882) list_single_2graphic_pane_g2_ParamLimits

0x707d,	// (0x00012882) list_single_2graphic_pane_g2

0x7003,	// (0x00012808) list_single_2graphic_pane_g3_ParamLimits

0x7003,	// (0x00012808) list_single_2graphic_pane_g3

0x7feb,	// (0x000137f0) list_single_2graphic_pane_g4_ParamLimits

0x7feb,	// (0x000137f0) list_single_2graphic_pane_g4

0x0003,

0xf74f,	// (0x0001af54) list_single_2graphic_pane_g_ParamLimits

0xf74f,	// (0x0001af54) list_single_2graphic_pane_g

0x7ff7,	// (0x000137fc) list_single_2graphic_pane_t1_ParamLimits

0x7ff7,	// (0x000137fc) list_single_2graphic_pane_t1

0x8025,	// (0x0001382a) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x8025,	// (0x0001382a) list_double2_graphic_large_graphic_pane_g1

0x7122,	// (0x00012927) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x7122,	// (0x00012927) list_double2_graphic_large_graphic_pane_g2

0x7133,	// (0x00012938) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x7133,	// (0x00012938) list_double2_graphic_large_graphic_pane_g3

0x8037,	// (0x0001383c) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x8037,	// (0x0001383c) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf758,	// (0x0001af5d) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf758,	// (0x0001af5d) list_double2_graphic_large_graphic_pane_g

0x8043,	// (0x00013848) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x8043,	// (0x00013848) list_double2_graphic_large_graphic_pane_t1

0x8059,	// (0x0001385e) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x8059,	// (0x0001385e) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf761,	// (0x0001af66) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf761,	// (0x0001af66) list_double2_graphic_large_graphic_pane_t

0x81a4,	// (0x000139a9) popup_fast_swap_window_ParamLimits

0x81a4,	// (0x000139a9) popup_fast_swap_window

0x81c2,	// (0x000139c7) popup_side_volume_key_window

0x81e0,	// (0x000139e5) stacon_top_pane

0x81ea,	// (0x000139ef) status_pane_ParamLimits

0x81ea,	// (0x000139ef) status_pane

0x81e0,	// (0x000139e5) status_small_pane

0x4068,	// (0x0000f86d) control_pane

0x4068,	// (0x0000f86d) stacon_bottom_pane

0x74e0,	// (0x00012ce5) scroll_pane_cp121

0x74d7,	// (0x00012cdc) set_content_pane

0x806b,	// (0x00013870) bg_active_tab_pane_g1_cp1

0x8074,	// (0x00013879) bg_active_tab_pane_g2_cp1

0x807d,	// (0x00013882) bg_active_tab_pane_g3_cp1

0x806b,	// (0x00013870) bg_passive_tab_pane_g1_cp1

0x8074,	// (0x00013879) bg_passive_tab_pane_g2_cp1

0x807d,	// (0x00013882) bg_passive_tab_pane_g3_cp1

0x8086,	// (0x0001388b) bg_active_tab_pane_g1_cp2

0x8074,	// (0x00013879) bg_active_tab_pane_g2_cp2

0x808f,	// (0x00013894) bg_active_tab_pane_g3_cp2

0x8086,	// (0x0001388b) bg_passive_tab_pane_g1_cp2

0x8074,	// (0x00013879) bg_passive_tab_pane_g2_cp2

0x808f,	// (0x00013894) bg_passive_tab_pane_g3_cp2

0x8098,	// (0x0001389d) bg_active_tab_pane_g1_cp3

0x8074,	// (0x00013879) bg_active_tab_pane_g2_cp3

0x80a1,	// (0x000138a6) bg_active_tab_pane_g3_cp3

0x8098,	// (0x0001389d) bg_passive_tab_pane_g1_cp3

0x8074,	// (0x00013879) bg_passive_tab_pane_g2_cp3

0x80a1,	// (0x000138a6) bg_passive_tab_pane_g3_cp3

0x80aa,	// (0x000138af) bg_active_tab_pane_g1_cp4

0x8074,	// (0x00013879) bg_active_tab_pane_g2_cp4

0x80b5,	// (0x000138ba) bg_active_tab_pane_g3_cp4

0x80aa,	// (0x000138af) bg_passive_tab_pane_g1_cp4

0x8074,	// (0x00013879) bg_passive_tab_pane_g2_cp4

0x80b5,	// (0x000138ba) bg_passive_tab_pane_g3_cp4

0x80fe,	// (0x00013903) bg_active_tab_pane_g1_cp5

0x8074,	// (0x00013879) bg_active_tab_pane_g2_cp5

0x8107,	// (0x0001390c) bg_active_tab_pane_g3_cp5

0x80fe,	// (0x00013903) bg_passive_tab_pane_g1_cp5

0x8074,	// (0x00013879) bg_passive_tab_pane_g2_cp5

0x8107,	// (0x0001390c) bg_passive_tab_pane_g3_cp5

0x8110,	// (0x00013915) list_set_graphic_pane_ParamLimits

0x8110,	// (0x00013915) list_set_graphic_pane

0x4068,	// (0x0000f86d) bg_set_opt_pane_cp4

0x8125,	// (0x0001392a) list_set_graphic_pane_g1_ParamLimits

0x8125,	// (0x0001392a) list_set_graphic_pane_g1

0x8131,	// (0x00013936) list_set_graphic_pane_g2_ParamLimits

0x8131,	// (0x00013936) list_set_graphic_pane_g2

0x0001,

0xf766,	// (0x0001af6b) list_set_graphic_pane_g_ParamLimits

0xf766,	// (0x0001af6b) list_set_graphic_pane_g

0x0009,

0xfad5,	// (0x0001b2da) volume_small_pane_cp_g

0x8155,	// (0x0001395a) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x8155,	// (0x0001395a) list_double2_large_graphic_pane_g1_cp2

0x8163,	// (0x00013968) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x8163,	// (0x00013968) list_double2_large_graphic_pane_g2_cp2

0x8174,	// (0x00013979) list_double2_large_graphic_pane_g3_cp2

0x817c,	// (0x00013981) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x817c,	// (0x00013981) list_double2_large_graphic_pane_t1_cp2

0x8192,	// (0x00013997) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x8192,	// (0x00013997) list_double2_large_graphic_pane_t2_cp2

0xa4aa,	// (0x00015caf) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xa4aa,	// (0x00015caf) list_double_large_graphic_pane_g1_cp2

0xa4bd,	// (0x00015cc2) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xa4bd,	// (0x00015cc2) list_double_large_graphic_pane_g2_cp2

0x8308,	// (0x00013b0d) list_double_large_graphic_pane_g3_cp2

0xa4ce,	// (0x00015cd3) list_double_large_graphic_pane_g4_cp

0xa4d6,	// (0x00015cdb) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xa4d6,	// (0x00015cdb) list_double_large_graphic_pane_t1_cp2

0xa4ed,	// (0x00015cf2) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xa4ed,	// (0x00015cf2) list_double_large_graphic_pane_t2_cp2

0x81f8,	// (0x000139fd) list_double2_graphic_pane_g1_cp2_ParamLimits

0x81f8,	// (0x000139fd) list_double2_graphic_pane_g1_cp2

0x8206,	// (0x00013a0b) list_double2_graphic_pane_g2_cp2_ParamLimits

0x8206,	// (0x00013a0b) list_double2_graphic_pane_g2_cp2

0x8217,	// (0x00013a1c) list_double2_graphic_pane_g3_cp2

0x8221,	// (0x00013a26) list_double2_graphic_pane_t1_cp2_ParamLimits

0x8221,	// (0x00013a26) list_double2_graphic_pane_t1_cp2

0x8237,	// (0x00013a3c) list_double2_graphic_pane_t2_cp2_ParamLimits

0x8237,	// (0x00013a3c) list_double2_graphic_pane_t2_cp2

0x8249,	// (0x00013a4e) list_single_number_heading_pane_g1_cp2_ParamLimits

0x8249,	// (0x00013a4e) list_single_number_heading_pane_g1_cp2

0x8255,	// (0x00013a5a) list_single_number_heading_pane_g2_cp2

0x825d,	// (0x00013a62) list_single_number_heading_pane_t1_cp2_ParamLimits

0x825d,	// (0x00013a62) list_single_number_heading_pane_t1_cp2

0x8273,	// (0x00013a78) list_single_number_heading_pane_t2_cp2_ParamLimits

0x8273,	// (0x00013a78) list_single_number_heading_pane_t2_cp2

0x8287,	// (0x00013a8c) list_single_number_heading_pane_t3_cp2_ParamLimits

0x8287,	// (0x00013a8c) list_single_number_heading_pane_t3_cp2

0x8249,	// (0x00013a4e) list_single_heading_pane_g1_cp2_ParamLimits

0x8249,	// (0x00013a4e) list_single_heading_pane_g1_cp2

0x8255,	// (0x00013a5a) list_single_heading_pane_g2_cp2

0x825d,	// (0x00013a62) list_single_heading_pane_t1_cp2_ParamLimits

0x825d,	// (0x00013a62) list_single_heading_pane_t1_cp2

0xa2a4,	// (0x00015aa9) list_single_heading_pane_t2_cp2_ParamLimits

0xa2a4,	// (0x00015aa9) list_single_heading_pane_t2_cp2

0xa1e6,	// (0x000159eb) list_double_graphic_pane_g1_cp2_ParamLimits

0xa1e6,	// (0x000159eb) list_double_graphic_pane_g1_cp2

0xa1f2,	// (0x000159f7) list_double_graphic_pane_g2_cp2_ParamLimits

0xa1f2,	// (0x000159f7) list_double_graphic_pane_g2_cp2

0xa201,	// (0x00015a06) list_double_graphic_pane_g3_cp2

0xa209,	// (0x00015a0e) list_double_graphic_pane_t1_cp2_ParamLimits

0xa209,	// (0x00015a0e) list_double_graphic_pane_t1_cp2

0xa21f,	// (0x00015a24) list_double_graphic_pane_t2_cp2_ParamLimits

0xa21f,	// (0x00015a24) list_double_graphic_pane_t2_cp2

0x82fc,	// (0x00013b01) list_double_number_pane_g1_cp2_ParamLimits

0x82fc,	// (0x00013b01) list_double_number_pane_g1_cp2

0x8308,	// (0x00013b0d) list_double_number_pane_g2_cp2

0xa1aa,	// (0x000159af) list_double_number_pane_t1_cp2_ParamLimits

0xa1aa,	// (0x000159af) list_double_number_pane_t1_cp2

0xa1be,	// (0x000159c3) list_double_number_pane_t2_cp2_ParamLimits

0xa1be,	// (0x000159c3) list_double_number_pane_t2_cp2

0xa1d4,	// (0x000159d9) list_double_number_pane_t3_cp2_ParamLimits

0xa1d4,	// (0x000159d9) list_double_number_pane_t3_cp2

0xa093,	// (0x00015898) list_single_graphic_pane_g1_cp2_ParamLimits

0xa093,	// (0x00015898) list_single_graphic_pane_g1_cp2

0x8362,	// (0x00013b67) list_single_graphic_pane_g2_cp2_ParamLimits

0x8362,	// (0x00013b67) list_single_graphic_pane_g2_cp2

0x836e,	// (0x00013b73) list_single_graphic_pane_g3_cp2

0xa069,	// (0x0001586e) list_single_graphic_pane_t1_cp2_ParamLimits

0xa069,	// (0x0001586e) list_single_graphic_pane_t1_cp2

0x8362,	// (0x00013b67) list_single_number_pane_g1_cp2_ParamLimits

0x8362,	// (0x00013b67) list_single_number_pane_g1_cp2

0x836e,	// (0x00013b73) list_single_number_pane_g2_cp2

0xa069,	// (0x0001586e) list_single_number_pane_t1_cp2_ParamLimits

0xa069,	// (0x0001586e) list_single_number_pane_t1_cp2

0xa07f,	// (0x00015884) list_single_number_pane_t2_cp2_ParamLimits

0xa07f,	// (0x00015884) list_single_number_pane_t2_cp2

0x8163,	// (0x00013968) list_double2_pane_g1_cp2_ParamLimits

0x8163,	// (0x00013968) list_double2_pane_g1_cp2

0x8174,	// (0x00013979) list_double2_pane_g2_cp2

0x82d4,	// (0x00013ad9) list_double2_pane_t1_cp2_ParamLimits

0x82d4,	// (0x00013ad9) list_double2_pane_t1_cp2

0x82ea,	// (0x00013aef) list_double2_pane_t2_cp2_ParamLimits

0x82ea,	// (0x00013aef) list_double2_pane_t2_cp2

0x82fc,	// (0x00013b01) list_double_pane_g1_cp2_ParamLimits

0x82fc,	// (0x00013b01) list_double_pane_g1_cp2

0x8308,	// (0x00013b0d) list_double_pane_g2_cp2

0x8310,	// (0x00013b15) list_double_pane_t1_cp2_ParamLimits

0x8310,	// (0x00013b15) list_double_pane_t1_cp2

0x8326,	// (0x00013b2b) list_double_pane_t2_cp2_ParamLimits

0x8326,	// (0x00013b2b) list_double_pane_t2_cp2

0x8352,	// (0x00013b57) list_single_pane_cp2_g3

0x8362,	// (0x00013b67) list_single_pane_g1_cp2_ParamLimits

0x8362,	// (0x00013b67) list_single_pane_g1_cp2

0x836e,	// (0x00013b73) list_single_pane_g2_cp2

0x8376,	// (0x00013b7b) list_single_pane_t1_cp2_ParamLimits

0x8376,	// (0x00013b7b) list_single_pane_t1_cp2

0x838e,	// (0x00013b93) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x838e,	// (0x00013b93) list_single_large_graphic_pane_g1_cp2

0x839c,	// (0x00013ba1) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x839c,	// (0x00013ba1) list_single_large_graphic_pane_g2_cp2

0x83a8,	// (0x00013bad) list_single_large_graphic_pane_g3_cp2

0x83b0,	// (0x00013bb5) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x83b0,	// (0x00013bb5) list_single_large_graphic_pane_g4_cp1

0x83ca,	// (0x00013bcf) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x83ca,	// (0x00013bcf) list_single_large_graphic_pane_t1_cp2

0xa033,	// (0x00015838) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa033,	// (0x00015838) list_single_graphic_heading_pane_g1_cp2

0xa000,	// (0x00015805) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa000,	// (0x00015805) list_single_graphic_heading_pane_g4_cp2

0x836e,	// (0x00013b73) list_single_graphic_heading_pane_g5_cp2

0xa03f,	// (0x00015844) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa03f,	// (0x00015844) list_single_graphic_heading_pane_t1_cp2

0xa055,	// (0x0001585a) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa055,	// (0x0001585a) list_single_graphic_heading_pane_t2_cp2

0x9ff4,	// (0x000157f9) list_single_2graphic_pane_g1_cp2_ParamLimits

0x9ff4,	// (0x000157f9) list_single_2graphic_pane_g1_cp2

0xa000,	// (0x00015805) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa000,	// (0x00015805) list_single_2graphic_pane_g2_cp2

0x836e,	// (0x00013b73) list_single_2graphic_pane_g3_cp2

0xa011,	// (0x00015816) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa011,	// (0x00015816) list_single_2graphic_pane_g4_cp2

0xa01d,	// (0x00015822) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa01d,	// (0x00015822) list_single_2graphic_pane_t1_cp2

0x3eef,	// (0x0000f6f4) list_highlight_pane_g10_cp1

0x9bcc,	// (0x000153d1) list_highlight_pane_g1_cp1

0x9bd4,	// (0x000153d9) list_highlight_pane_g2_cp1

0x9bdc,	// (0x000153e1) list_highlight_pane_g3_cp1

0x9be4,	// (0x000153e9) list_highlight_pane_g4_cp1

0x9bec,	// (0x000153f1) list_highlight_pane_g5_cp1

0x9bf4,	// (0x000153f9) list_highlight_pane_g6_cp1

0x9bfc,	// (0x00015401) list_highlight_pane_g7_cp1

0x9c04,	// (0x00015409) list_highlight_pane_g8_cp1

0x9c0c,	// (0x00015411) list_highlight_pane_g9_cp1

0x9aec,	// (0x000152f1) form_field_slider_pane_t3

0x9afa,	// (0x000152ff) form_field_slider_pane_t4

0x9b08,	// (0x0001530d) slider_form_pane_ParamLimits

0x9b08,	// (0x0001530d) slider_form_pane

0x4068,	// (0x0000f86d) control_abbreviations

0x4068,	// (0x0000f86d) control_conventions

0x4068,	// (0x0000f86d) control_definitions

0x4068,	// (0x0000f86d) format_table_attribute

0xa2fa,	// (0x00015aff) bg_popup_preview_window_pane_g9

0x4068,	// (0x0000f86d) format_table_data2

0x4068,	// (0x0000f86d) format_table_data3

0x4068,	// (0x0000f86d) format_table_data_example

0x0008,

0x4068,	// (0x0000f86d) intro_purpose

0xf8fb,	// (0x0001b100) bg_popup_preview_window_pane_g

0x4068,	// (0x0000f86d) texts_category

0x4068,	// (0x0000f86d) texts_graphics

0x83e0,	// (0x00013be5) text_digital

0x83ef,	// (0x00013bf4) text_primary

0x83fe,	// (0x00013c03) text_primary_small

0x840d,	// (0x00013c12) text_secondary

0x841c,	// (0x00013c21) text_title

0xab1f,	// (0x00016324) bg_passive_tab_pane_g1_cp3_srt

0x8074,	// (0x00013879) bg_passive_tab_pane_g2_cp3_srt

0xab28,	// (0x0001632d) bg_passive_tab_pane_g3_cp3_srt

0x67a3,	// (0x00011fa8) bg_active_tab_pane_cp3_srt_ParamLimits

0x67a3,	// (0x00011fa8) bg_active_tab_pane_cp3_srt

0xab31,	// (0x00016336) tabs_4_active_pane_srt_g1

0xab39,	// (0x0001633e) tabs_4_active_pane_srt_t1_ParamLimits

0xab39,	// (0x0001633e) tabs_4_active_pane_srt_t1

0xab1f,	// (0x00016324) bg_active_tab_pane_g1_cp3_copy1

0x8074,	// (0x00013879) bg_active_tab_pane_g2_cp3_copy1

0xab28,	// (0x0001632d) bg_active_tab_pane_g3_cp3_copy1

0x67a3,	// (0x00011fa8) tabs_2_long_active_pane_srt_ParamLimits

0x67a3,	// (0x00011fa8) tabs_2_long_active_pane_srt

0x67a3,	// (0x00011fa8) tabs_2_long_passive_pane_srt_ParamLimits

0x67a3,	// (0x00011fa8) tabs_2_long_passive_pane_srt

0x7938,	// (0x0001313d) bg_passive_tab_pane_cp4_srt_ParamLimits

0x7938,	// (0x0001313d) bg_passive_tab_pane_cp4_srt

0xa772,	// (0x00015f77) bg_passive_tab_pane_g1_cp4_srt

0x8074,	// (0x00013879) bg_passive_tab_pane_g2_cp4_srt

0xa77b,	// (0x00015f80) bg_passive_tab_pane_g3_cp4_srt

0x7917,	// (0x0001311c) bg_active_tab_pane_cp4_srt_ParamLimits

0x7917,	// (0x0001311c) bg_active_tab_pane_cp4_srt

0xa784,	// (0x00015f89) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa784,	// (0x00015f89) tabs_2_long_active_pane_srt_t1

0xa772,	// (0x00015f77) bg_active_tab_pane_g1_cp4_srt

0x8074,	// (0x00013879) bg_active_tab_pane_g2_cp4_srt

0xa77b,	// (0x00015f80) bg_active_tab_pane_g3_cp4_srt

0x6a39,	// (0x0001223e) tabs_3_long_active_pane_srt_ParamLimits

0x6a39,	// (0x0001223e) tabs_3_long_active_pane_srt

0x6a39,	// (0x0001223e) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x6a39,	// (0x0001223e) tabs_3_long_passive_pane_cp_srt

0x6a39,	// (0x0001223e) tabs_3_long_passive_pane_srt_ParamLimits

0x6a39,	// (0x0001223e) tabs_3_long_passive_pane_srt

0x7938,	// (0x0001313d) bg_passive_tab_pane_cp5_srt_ParamLimits

0x7938,	// (0x0001313d) bg_passive_tab_pane_cp5_srt

0x80fe,	// (0x00013903) bg_passive_tab_pane_g1_cp5_srt

0x8074,	// (0x00013879) bg_passive_tab_pane_g2_cp5_srt

0x8107,	// (0x0001390c) bg_passive_tab_pane_g3_cp5_srt

0x7917,	// (0x0001311c) bg_active_tab_pane_cp5_srt_ParamLimits

0x7917,	// (0x0001311c) bg_active_tab_pane_cp5_srt

0xa760,	// (0x00015f65) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa760,	// (0x00015f65) tabs_3_long_active_pane_srt_t1

0x80fe,	// (0x00013903) bg_active_tab_pane_g1_cp5_srt

0x8074,	// (0x00013879) bg_active_tab_pane_g2_cp5_srt

0x8107,	// (0x0001390c) bg_active_tab_pane_g3_cp5_srt

0xa752,	// (0x00015f57) navi_text_pane_srt_t1

0xa74a,	// (0x00015f4f) navi_icon_pane_srt_g1

0x85f3,	// (0x00013df8) midp_editing_number_pane_srt

0x842b,	// (0x00013c30) midp_ticker_pane_srt

0x85fb,	// (0x00013e00) midp_ticker_pane_srt_g1

0x8603,	// (0x00013e08) midp_ticker_pane_srt_g2

0x0001,

0xf785,	// (0x0001af8a) midp_ticker_pane_srt_g

0x860b,	// (0x00013e10) midp_ticker_pane_srt_t1

0xa73b,	// (0x00015f40) midp_editing_number_pane_t1_copy1

0x8433,	// (0x00013c38) listscroll_midp_pane

0x8433,	// (0x00013c38) midp_form_pane

0x84a1,	// (0x00013ca6) midp_info_popup_window_ParamLimits

0x84a1,	// (0x00013ca6) midp_info_popup_window

0x77f9,	// (0x00012ffe) bg_popup_sub_pane_cp50_ParamLimits

0x77f9,	// (0x00012ffe) bg_popup_sub_pane_cp50

0x9802,	// (0x00015007) listscroll_midp_info_pane_ParamLimits

0x9802,	// (0x00015007) listscroll_midp_info_pane

0x97ea,	// (0x00014fef) listscroll_form_midp_pane_ParamLimits

0x97ea,	// (0x00014fef) listscroll_form_midp_pane

0x97f6,	// (0x00014ffb) scroll_bar_cp050

0x97ca,	// (0x00014fcf) list_midp_pane

0xb765,	// (0x00016f6a) signal_pane_g2_cp

0x9704,	// (0x00014f09) listscroll_midp_info_pane_t1_ParamLimits

0x9704,	// (0x00014f09) listscroll_midp_info_pane_t1

0x971c,	// (0x00014f21) listscroll_midp_info_pane_t2_ParamLimits

0x971c,	// (0x00014f21) listscroll_midp_info_pane_t2

0x975a,	// (0x00014f5f) listscroll_midp_info_pane_t3_ParamLimits

0x975a,	// (0x00014f5f) listscroll_midp_info_pane_t3

0x9794,	// (0x00014f99) listscroll_midp_info_pane_t4_ParamLimits

0x9794,	// (0x00014f99) listscroll_midp_info_pane_t4

0x0003,

0xf836,	// (0x0001b03b) listscroll_midp_info_pane_t_ParamLimits

0xf836,	// (0x0001b03b) listscroll_midp_info_pane_t

0x78c3,	// (0x000130c8) scroll_pane_cp21

0x969e,	// (0x00014ea3) form_midp_field_choice_group_pane

0x96a7,	// (0x00014eac) form_midp_field_text_pane

0x96ea,	// (0x00014eef) form_midp_field_time_pane

0x96f2,	// (0x00014ef7) form_midp_gauge_slider_pane

0x96fb,	// (0x00014f00) form_midp_gauge_wait_pane

0x4068,	// (0x0000f86d) form_midp_image_pane

0x967e,	// (0x00014e83) list_single_midp_pane_ParamLimits

0x967e,	// (0x00014e83) list_single_midp_pane

0x9642,	// (0x00014e47) form_midp_field_text_pane_t1

0x9447,	// (0x00014c4c) input_focus_pane_cp050

0x966d,	// (0x00014e72) list_midp_form_text_pane

0x9611,	// (0x00014e16) form_midp_field_choice_group_pane_t1

0x961f,	// (0x00014e24) input_focus_pane_cp051

0x9633,	// (0x00014e38) list_midp_choice_pane

0x4068,	// (0x0000f86d) status_idle_pane

0x95f5,	// (0x00014dfa) form_midp_field_time_pane_t1

0x3eef,	// (0x0000f6f4) wait_anim_pane_g2_copy1

0x9603,	// (0x00014e08) form_midp_field_time_pane_t2

0x0001,

0x8551,	// (0x00013d56) aid_navinavi_width_2_pane

0xf831,	// (0x0001b036) form_midp_field_time_pane_t

0x4068,	// (0x0000f86d) input_focus_pane_cp052

0x4068,	// (0x0000f86d) bg_input_focus_pane_cp040

0x95b5,	// (0x00014dba) form_midp_gauge_slider_pane_t1

0x95c3,	// (0x00014dc8) form_midp_gauge_slider_pane_t2

0x95d1,	// (0x00014dd6) form_midp_gauge_slider_pane_t3

0x95df,	// (0x00014de4) form_midp_gauge_slider_pane_t4

0x0003,

0xf828,	// (0x0001b02d) form_midp_gauge_slider_pane_t

0x95ed,	// (0x00014df2) form_midp_slider_pane

0x67a3,	// (0x00011fa8) bg_input_focus_pane_cp041_ParamLimits

0x67a3,	// (0x00011fa8) bg_input_focus_pane_cp041

0x9582,	// (0x00014d87) form_midp_gauge_wait_pane_t1_ParamLimits

0x9582,	// (0x00014d87) form_midp_gauge_wait_pane_t1

0x9594,	// (0x00014d99) form_midp_gauge_wait_pane_t2_ParamLimits

0x9594,	// (0x00014d99) form_midp_gauge_wait_pane_t2

0x0001,

0xf823,	// (0x0001b028) form_midp_gauge_wait_pane_t_ParamLimits

0xf823,	// (0x0001b028) form_midp_gauge_wait_pane_t

0x95a6,	// (0x00014dab) form_midp_wait_pane_ParamLimits

0x95a6,	// (0x00014dab) form_midp_wait_pane

0x954a,	// (0x00014d4f) form_midp_image_pane_g1

0x9553,	// (0x00014d58) form_midp_image_pane_t1

0x9562,	// (0x00014d67) form_midp_image_pane_t2

0x9571,	// (0x00014d76) form_midp_image_pane_t3

0x0002,

0xf81c,	// (0x0001b021) form_midp_image_pane_t

0x9532,	// (0x00014d37) list_single_midp_pane_g1

0x953b,	// (0x00014d40) list_single_midp_pane_t1

0x9518,	// (0x00014d1d) list_midp_form_item_pane_ParamLimits

0x9518,	// (0x00014d1d) list_midp_form_item_pane

0x84f9,	// (0x00013cfe) list_midp_form_item_pane_t1

0x8508,	// (0x00013d0d) midp_ticker_pane_g1

0x8514,	// (0x00013d19) midp_ticker_pane_g2

0x0001,

0xf76b,	// (0x0001af70) midp_ticker_pane_g

0x8520,	// (0x00013d25) midp_ticker_pane_t1

0xa9ef,	// (0x000161f4) midp_editing_number_pane_t1

0xa9cd,	// (0x000161d2) midp_editing_number_pane

0xa9dc,	// (0x000161e1) midp_ticker_pane

0xa703,	// (0x00015f08) ai_message_heading_pane

0x4068,	// (0x0000f86d) bg_popup_window_pane_cp14

0xa70b,	// (0x00015f10) listscroll_ai_message_pane

0xa689,	// (0x00015e8e) ai_message_heading_pane_g1_ParamLimits

0xa689,	// (0x00015e8e) ai_message_heading_pane_g1

0xa695,	// (0x00015e9a) ai_message_heading_pane_g2_ParamLimits

0xa695,	// (0x00015e9a) ai_message_heading_pane_g2

0xa6a3,	// (0x00015ea8) ai_message_heading_pane_g3_ParamLimits

0xa6a3,	// (0x00015ea8) ai_message_heading_pane_g3

0xa6af,	// (0x00015eb4) ai_message_heading_pane_g4_ParamLimits

0xa6af,	// (0x00015eb4) ai_message_heading_pane_g4

0x0003,

0xf95d,	// (0x0001b162) ai_message_heading_pane_g_ParamLimits

0xf95d,	// (0x0001b162) ai_message_heading_pane_g

0xa6bb,	// (0x00015ec0) ai_message_heading_pane_t1_ParamLimits

0xa6bb,	// (0x00015ec0) ai_message_heading_pane_t1

0xa6d5,	// (0x00015eda) ai_message_heading_pane_t2_ParamLimits

0xa6d5,	// (0x00015eda) ai_message_heading_pane_t2

0x0001,

0xf966,	// (0x0001b16b) ai_message_heading_pane_t_ParamLimits

0xf966,	// (0x0001b16b) ai_message_heading_pane_t

0xa6e9,	// (0x00015eee) bg_popup_heading_pane_cp1_ParamLimits

0xa6e9,	// (0x00015eee) bg_popup_heading_pane_cp1

0xa677,	// (0x00015e7c) list_ai_message_pane_ParamLimits

0xa677,	// (0x00015e7c) list_ai_message_pane

0x78c3,	// (0x000130c8) scroll_pane_cp10

0xa613,	// (0x00015e18) list_ai_message_pane_g1

0xa61b,	// (0x00015e20) list_ai_message_pane_g2

0x0001,

0xf93a,	// (0x0001b13f) list_ai_message_pane_g

0xa623,	// (0x00015e28) list_ai_message_pane_t1_ParamLimits

0xa623,	// (0x00015e28) list_ai_message_pane_t1

0xa638,	// (0x00015e3d) list_ai_message_pane_t2_ParamLimits

0xa638,	// (0x00015e3d) list_ai_message_pane_t2

0xa64d,	// (0x00015e52) list_ai_message_pane_t3_ParamLimits

0xa64d,	// (0x00015e52) list_ai_message_pane_t3

0xa662,	// (0x00015e67) list_ai_message_pane_t4_ParamLimits

0xa662,	// (0x00015e67) list_ai_message_pane_t4

0x0003,

0xf93f,	// (0x0001b144) list_ai_message_pane_t_ParamLimits

0xf93f,	// (0x0001b144) list_ai_message_pane_t

0xa5fc,	// (0x00015e01) cell_ai_soft_ind_pane_ParamLimits

0xa5fc,	// (0x00015e01) cell_ai_soft_ind_pane

0x8532,	// (0x00013d37) cell_ai_soft_ind_pane_g1_ParamLimits

0x8532,	// (0x00013d37) cell_ai_soft_ind_pane_g1

0x4068,	// (0x0000f86d) grid_highlight_cp1

0x853f,	// (0x00013d44) text_secondary_cp56_ParamLimits

0x853f,	// (0x00013d44) text_secondary_cp56

0xa5d1,	// (0x00015dd6) example_general_pane_ParamLimits

0xa5d1,	// (0x00015dd6) example_general_pane

0xa5dd,	// (0x00015de2) example_parent_pane_g1_ParamLimits

0xa5dd,	// (0x00015de2) example_parent_pane_g1

0xa5e9,	// (0x00015dee) example_parent_pane_t1_ParamLimits

0xa5e9,	// (0x00015dee) example_parent_pane_t1

0x8b84,	// (0x00014389) popup_preview_text_window_ParamLimits

0x8b84,	// (0x00014389) popup_preview_text_window

0x835a,	// (0x00013b5f) list_single_pane_cp2_g4

0x6aef,	// (0x000122f4) bg_popup_preview_window_pane_ParamLimits

0x6aef,	// (0x000122f4) bg_popup_preview_window_pane

0xa304,	// (0x00015b09) popup_preview_text_window_t1_ParamLimits

0xa304,	// (0x00015b09) popup_preview_text_window_t1

0xa322,	// (0x00015b27) popup_preview_text_window_t2_ParamLimits

0xa322,	// (0x00015b27) popup_preview_text_window_t2

0xa36b,	// (0x00015b70) popup_preview_text_window_t3_ParamLimits

0xa36b,	// (0x00015b70) popup_preview_text_window_t3

0xa3b0,	// (0x00015bb5) popup_preview_text_window_t4_ParamLimits

0xa3b0,	// (0x00015bb5) popup_preview_text_window_t4

0x0004,

0xf90e,	// (0x0001b113) popup_preview_text_window_t_ParamLimits

0xf90e,	// (0x0001b113) popup_preview_text_window_t

0xa42e,	// (0x00015c33) scroll_pane_cp11

0x932b,	// (0x00014b30) bg_popup_preview_window_pane_g1

0xa2b8,	// (0x00015abd) bg_popup_preview_window_pane_g2

0xa2c2,	// (0x00015ac7) bg_popup_preview_window_pane_g3

0xa2cc,	// (0x00015ad1) bg_popup_preview_window_pane_g4

0xa2d6,	// (0x00015adb) bg_popup_preview_window_pane_g5

0xa2e0,	// (0x00015ae5) bg_popup_preview_window_pane_g6

0xa2e8,	// (0x00015aed) bg_popup_preview_window_pane_g7

0xa2f0,	// (0x00015af5) bg_popup_preview_window_pane_g8

0x4a73,	// (0x00010278) aid_popup_width_pane

0x8b60,	// (0x00014365) popup_midp_note_alarm_window_ParamLimits

0x8b60,	// (0x00014365) popup_midp_note_alarm_window

0x75af,	// (0x00012db4) data_form_pane_ParamLimits

0x75bb,	// (0x00012dc0) form_field_data_pane_g1

0x75c5,	// (0x00012dca) form_field_data_pane_t1_ParamLimits

0x75df,	// (0x00012de4) input_focus_pane_ParamLimits

0x75ed,	// (0x00012df2) data_form_wide_pane_ParamLimits

0x75f9,	// (0x00012dfe) form_field_data_wide_pane_g1

0x7625,	// (0x00012e2a) form_field_data_wide_pane_t1_ParamLimits

0x6db5,	// (0x000125ba) input_focus_pane_cp6_ParamLimits

0x786e,	// (0x00013073) input_popup_find_pane_g1_ParamLimits

0x786e,	// (0x00013073) input_popup_find_pane_g1

0x4ff8,	// (0x000107fd) aid_navi_side_left_pane

0x500d,	// (0x00010812) aid_navi_side_right_pane

0x9cc7,	// (0x000154cc) bg_popup_window_pane_cp30_ParamLimits

0x9cc7,	// (0x000154cc) bg_popup_window_pane_cp30

0x9d41,	// (0x00015546) popup_midp_note_alarm_window_g1_ParamLimits

0x9d41,	// (0x00015546) popup_midp_note_alarm_window_g1

0x9d71,	// (0x00015576) popup_midp_note_alarm_window_t1_ParamLimits

0x9d71,	// (0x00015576) popup_midp_note_alarm_window_t1

0x9e12,	// (0x00015617) popup_midp_note_alarm_window_t2_ParamLimits

0x9e12,	// (0x00015617) popup_midp_note_alarm_window_t2

0x9ec0,	// (0x000156c5) popup_midp_note_alarm_window_t3_ParamLimits

0x9ec0,	// (0x000156c5) popup_midp_note_alarm_window_t3

0x9ef2,	// (0x000156f7) popup_midp_note_alarm_window_t4_ParamLimits

0x9ef2,	// (0x000156f7) popup_midp_note_alarm_window_t4

0x9f18,	// (0x0001571d) popup_midp_note_alarm_window_t5_ParamLimits

0x9f18,	// (0x0001571d) popup_midp_note_alarm_window_t5

0x000a,

0xf8ab,	// (0x0001b0b0) popup_midp_note_alarm_window_t_ParamLimits

0xf8ab,	// (0x0001b0b0) popup_midp_note_alarm_window_t

0x9fc4,	// (0x000157c9) wait_bar_pane_cp1_ParamLimits

0x9fc4,	// (0x000157c9) wait_bar_pane_cp1

0x4068,	// (0x0000f86d) wait_anim_pane_copy1

0x4068,	// (0x0000f86d) wait_border_pane_copy1

0x99ac,	// (0x000151b1) wait_border_pane_g1_copy1

0x763f,	// (0x00012e44) form_field_popup_pane_g1

0x7647,	// (0x00012e4c) form_field_popup_pane_t1_ParamLimits

0x75df,	// (0x00012de4) input_focus_pane_cp7_ParamLimits

0x7661,	// (0x00012e66) list_form_pane_ParamLimits

0x766d,	// (0x00012e72) form_field_popup_wide_pane_g1

0x7675,	// (0x00012e7a) form_field_popup_wide_pane_t1_ParamLimits

0x75df,	// (0x00012de4) input_focus_pane_cp8_ParamLimits

0x768a,	// (0x00012e8f) list_form_wide_pane_ParamLimits

0xabac,	// (0x000163b1) aid_size_cell_graphic_pane

0x7763,	// (0x00012f68) data_form_pane_t1_ParamLimits

0xa998,	// (0x0001619d) data_form_wide_pane_t1_ParamLimits

0x8eab,	// (0x000146b0) bg_status_flat_pane

0x6703,	// (0x00011f08) title_pane_t1_ParamLimits

0x676b,	// (0x00011f70) title_pane_t2_ParamLimits

0x6791,	// (0x00011f96) title_pane_t3_ParamLimits

0xf573,	// (0x0001ad78) title_pane_t_ParamLimits

0x7d46,	// (0x0001354b) level_1_signal_ParamLimits

0x7d53,	// (0x00013558) level_2_signal_ParamLimits

0x7d60,	// (0x00013565) level_3_signal_ParamLimits

0x7d6d,	// (0x00013572) level_4_signal_ParamLimits

0x7d7a,	// (0x0001357f) level_5_signal_ParamLimits

0x7d87,	// (0x0001358c) level_6_signal_ParamLimits

0x7d94,	// (0x00013599) level_7_signal_ParamLimits

0x7d46,	// (0x0001354b) level_1_battery_ParamLimits

0x7d53,	// (0x00013558) level_2_battery_ParamLimits

0x7d60,	// (0x00013565) level_3_battery_ParamLimits

0x7d6d,	// (0x00013572) level_4_battery_ParamLimits

0x7d7a,	// (0x0001357f) level_5_battery_ParamLimits

0x7d87,	// (0x0001358c) level_6_battery_ParamLimits

0x7d94,	// (0x00013599) level_7_battery_ParamLimits

0x9bcc,	// (0x000153d1) bg_status_flat_pane_g1

0x9bd4,	// (0x000153d9) bg_status_flat_pane_g2

0x9bdc,	// (0x000153e1) bg_status_flat_pane_g3

0x9be4,	// (0x000153e9) bg_status_flat_pane_g4

0x9bec,	// (0x000153f1) bg_status_flat_pane_g5

0x9bf4,	// (0x000153f9) bg_status_flat_pane_g6

0x9bfc,	// (0x00015401) bg_status_flat_pane_g7

0x67b9,	// (0x00011fbe) tabs_3_active_pane_t1_ParamLimits

0x67b9,	// (0x00011fbe) tabs_3_passive_pane_t1_ParamLimits

0x67d3,	// (0x00011fd8) tabs_4_active_pane_t1_ParamLimits

0x67d3,	// (0x00011fd8) tabs_4_1_passive_pane_t1_ParamLimits

0x7905,	// (0x0001310a) tabs_2_active_pane_t1_ParamLimits

0x7905,	// (0x0001310a) tabs_2_passive_pane_t1_ParamLimits

0x7917,	// (0x0001311c) bg_active_tab_pane_cp4_ParamLimits

0x7925,	// (0x0001312a) tabs_2_long_active_pane_t1_ParamLimits

0x7938,	// (0x0001313d) bg_passive_tab_pane_cp4_ParamLimits

0x55dd,	// (0x00010de2) list_single_midp_graphic_pane_t1_ParamLimits

0x7917,	// (0x0001311c) bg_active_tab_pane_cp5_ParamLimits

0x7944,	// (0x00013149) tabs_3_long_active_pane_t1_ParamLimits

0x7938,	// (0x0001313d) bg_passive_tab_pane_cp5_ParamLimits

0x55dd,	// (0x00010de2) list_single_midp_graphic_pane_t1

0x8eab,	// (0x000146b0) bg_status_flat_pane_ParamLimits

0x8f76,	// (0x0001477b) indicator_pane_cp2_ParamLimits

0x8f76,	// (0x0001477b) indicator_pane_cp2

0x90b8,	// (0x000148bd) navi_pane_srt_ParamLimits

0x90b8,	// (0x000148bd) navi_pane_srt

0x90dc,	// (0x000148e1) popup_clock_digital_analogue_window_cp1

0x689d,	// (0x000120a2) indicator_pane_t1

0x842b,	// (0x00013c30) copy_highlight_pane

0x842b,	// (0x00013c30) cursor_graphics_pane

0x842b,	// (0x00013c30) graphic_within_text_pane

0x842b,	// (0x00013c30) link_highlight_pane

0xa3f1,	// (0x00015bf6) popup_preview_text_window_t5_ParamLimits

0xa3f1,	// (0x00015bf6) popup_preview_text_window_t5

0x855b,	// (0x00013d60) cursor_digital_pane

0x855b,	// (0x00013d60) cursor_primary_pane

0x856c,	// (0x00013d71) cursor_primary_small_pane

0x8574,	// (0x00013d79) cursor_secondary_pane

0x857c,	// (0x00013d81) cursor_title_pane

0x855b,	// (0x00013d60) link_highlight_digital_pane

0x8563,	// (0x00013d68) link_highlight_primary_pane

0x856c,	// (0x00013d71) link_highlight_primary_small_pane

0x8574,	// (0x00013d79) link_highlight_secondary_pane

0x857c,	// (0x00013d81) link_highlight_title_pane

0x855b,	// (0x00013d60) copy_highlight_digital_pane

0x855b,	// (0x00013d60) copy_highlight_primary_pane

0x856c,	// (0x00013d71) copy_highlight_primary_small_pane

0x8574,	// (0x00013d79) copy_highlight_secondary_pane

0x857c,	// (0x00013d81) copy_highlight_title_pane

0x8574,	// (0x00013d79) graphic_text_digital_pane

0x9c6a,	// (0x0001546f) graphic_text_primary_pane

0x9c73,	// (0x00015478) graphic_text_primary_small_pane

0x856c,	// (0x00013d71) graphic_text_secondary_pane

0x855b,	// (0x00013d60) graphic_text_title_pane

0x8584,	// (0x00013d89) cursor_primary_pane_g1

0x9c5c,	// (0x00015461) cursor_text_primary_t1

0x9c44,	// (0x00015449) cursor_primary_small_pane_g1

0x9c4e,	// (0x00015453) cursor_text_primary_small_t1

0x9c2c,	// (0x00015431) cursor_primary_small_pane_g1_copy1

0x9c36,	// (0x0001543b) cursor_text_primary_small_t1_copy1

0x9c14,	// (0x00015419) cursor_text_title_t1

0x9c22,	// (0x00015427) cursor_title_pane_g1

0x8584,	// (0x00013d89) cursor_digital_pane_g1

0x858e,	// (0x00013d93) cursor_text_digital_t1

0x859c,	// (0x00013da1) link_highlight_primary_pane_g1

0x9bbd,	// (0x000153c2) link_highlight_primary_pane_t1

0x859c,	// (0x00013da1) link_highlight_primary_small_pane_g1

0x85a4,	// (0x00013da9) link_highlight_primary_small_pane_t1

0x85b3,	// (0x00013db8) link_highlight_secondary_pane_g1

0x85bb,	// (0x00013dc0) link_highlight_secondary_pane_t1

0x9b31,	// (0x00015336) link_highlight_title_pane_g1

0x9b39,	// (0x0001533e) link_highlight_title_pane_t1

0x9b1a,	// (0x0001531f) link_highlight_digital_pane_g1

0x9b22,	// (0x00015327) link_highlight_digital_pane_t1

0x99e2,	// (0x000151e7) copy_highlight_primary_pane_g1

0x99f9,	// (0x000151fe) copy_highlight_primary_pane_t1

0x99e2,	// (0x000151e7) copy_highlight_primary_small_pane_g1

0x99ea,	// (0x000151ef) copy_highlight_primary_small_pane_t1

0x85ca,	// (0x00013dcf) copy_highlight_secondary_pane_g1

0x85d2,	// (0x00013dd7) copy_highlight_secondary_pane_t1

0x99cb,	// (0x000151d0) copy_highlight_title_pane_g1

0x99d3,	// (0x000151d8) copy_highlight_title_pane_t1

0x99e2,	// (0x000151e7) copy_highlight_digital_pane_g1

0xad7c,	// (0x00016581) copy_highlight_digital_pane_t1

0xacd0,	// (0x000164d5) graphic_text_primary_pane_g1

0xad60,	// (0x00016565) graphic_text_primary_pane_t1

0xad6e,	// (0x00016573) graphic_text_primary_pane_t2

0x0001,

0xf9da,	// (0x0001b1df) graphic_text_primary_pane_t

0xad3c,	// (0x00016541) graphic_text_primary_small_pane_g1

0xad44,	// (0x00016549) graphic_text_primary_small_pane_t1

0xad52,	// (0x00016557) graphic_text_primary_small_pane_t2

0x0001,

0xf9d5,	// (0x0001b1da) graphic_text_primary_small_pane_t

0xad18,	// (0x0001651d) graphic_text_secondary_pane_g1

0xad20,	// (0x00016525) graphic_text_secondary_pane_t1

0xad2e,	// (0x00016533) graphic_text_secondary_pane_t2

0x0001,

0xf9d0,	// (0x0001b1d5) graphic_text_secondary_pane_t

0xacf4,	// (0x000164f9) graphic_text_title_pane_g1

0xacfc,	// (0x00016501) graphic_text_title_pane_t1

0xad0a,	// (0x0001650f) graphic_text_title_pane_t2

0x0001,

0xf9cb,	// (0x0001b1d0) graphic_text_title_pane_t

0xacd0,	// (0x000164d5) graphic_text_digital_pane_g1

0xacd8,	// (0x000164dd) graphic_text_digital_pane_t1

0xace6,	// (0x000164eb) graphic_text_digital_pane_t2

0x0001,

0xf9c6,	// (0x0001b1cb) graphic_text_digital_pane_t

0x67a3,	// (0x00011fa8) navi_icon_pane_srt_ParamLimits

0x67a3,	// (0x00011fa8) navi_icon_pane_srt

0x4068,	// (0x0000f86d) navi_midp_pane_srt

0x4068,	// (0x0000f86d) navi_navi_pane_srt

0x67a3,	// (0x00011fa8) navi_text_pane_srt_ParamLimits

0x67a3,	// (0x00011fa8) navi_text_pane_srt

0xac9b,	// (0x000164a0) navi_navi_icon_text_pane_srt

0xaca3,	// (0x000164a8) navi_navi_pane_srt_g1_ParamLimits

0xaca3,	// (0x000164a8) navi_navi_pane_srt_g1

0xacb5,	// (0x000164ba) navi_navi_pane_srt_g2_ParamLimits

0xacb5,	// (0x000164ba) navi_navi_pane_srt_g2

0x0001,

0xf9c1,	// (0x0001b1c6) navi_navi_pane_srt_g_ParamLimits

0xf9c1,	// (0x0001b1c6) navi_navi_pane_srt_g

0xacc7,	// (0x000164cc) navi_navi_tabs_pane_srt

0xac9b,	// (0x000164a0) navi_navi_text_pane_srt

0xac9b,	// (0x000164a0) navi_navi_volume_pane_srt

0xac8c,	// (0x00016491) navi_navi_text_pane_srt_t1

0x5979,	// (0x0001117e) navi_navi_volume_pane_srt_g1

0x5981,	// (0x00011186) volume_small_pane_srt_ParamLimits

0x5981,	// (0x00011186) volume_small_pane_srt

0x52df,	// (0x00010ae4) volume_small_pane_srt_g1_ParamLimits

0x52df,	// (0x00010ae4) volume_small_pane_srt_g1

0x52ef,	// (0x00010af4) volume_small_pane_srt_g2_ParamLimits

0x52ef,	// (0x00010af4) volume_small_pane_srt_g2

0x5300,	// (0x00010b05) volume_small_pane_srt_g3_ParamLimits

0x5300,	// (0x00010b05) volume_small_pane_srt_g3

0x5311,	// (0x00010b16) volume_small_pane_srt_g4_ParamLimits

0x5311,	// (0x00010b16) volume_small_pane_srt_g4

0x5322,	// (0x00010b27) volume_small_pane_srt_g5_ParamLimits

0x5322,	// (0x00010b27) volume_small_pane_srt_g5

0x5333,	// (0x00010b38) volume_small_pane_srt_g6_ParamLimits

0x5333,	// (0x00010b38) volume_small_pane_srt_g6

0x5344,	// (0x00010b49) volume_small_pane_srt_g7_ParamLimits

0x5344,	// (0x00010b49) volume_small_pane_srt_g7

0x5355,	// (0x00010b5a) volume_small_pane_srt_g8_ParamLimits

0x5355,	// (0x00010b5a) volume_small_pane_srt_g8

0x5366,	// (0x00010b6b) volume_small_pane_srt_g9_ParamLimits

0x5366,	// (0x00010b6b) volume_small_pane_srt_g9

0x5377,	// (0x00010b7c) volume_small_pane_srt_g10_ParamLimits

0x5377,	// (0x00010b7c) volume_small_pane_srt_g10

0x0009,

0xf770,	// (0x0001af75) volume_small_pane_srt_g_ParamLimits

0xf770,	// (0x0001af75) volume_small_pane_srt_g

0x6ba4,	// (0x000123a9) query_popup_data_pane_cp2

0xac72,	// (0x00016477) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xac72,	// (0x00016477) navi_navi_icon_text_pane_srt_t1

0x9c6a,	// (0x0001546f) navi_tabs_2_long_pane_srt

0x9c6a,	// (0x0001546f) navi_tabs_2_pane_srt

0x9c6a,	// (0x0001546f) navi_tabs_3_long_pane_srt

0x9c6a,	// (0x0001546f) navi_tabs_3_pane_srt

0x9c6a,	// (0x0001546f) navi_tabs_4_pane_srt

0x5959,	// (0x0001115e) tabs_2_active_pane_srt_ParamLimits

0x5959,	// (0x0001115e) tabs_2_active_pane_srt

0x5969,	// (0x0001116e) tabs_2_passive_pane_srt_ParamLimits

0x5969,	// (0x0001116e) tabs_2_passive_pane_srt

0x87b9,	// (0x00013fbe) bg_passive_tab_pane_cp1_srt_ParamLimits

0x87b9,	// (0x00013fbe) bg_passive_tab_pane_cp1_srt

0xac3e,	// (0x00016443) bg_passive_tab_pane_g1_cp1_srt

0x8074,	// (0x00013879) bg_passive_tab_pane_g2_cp1_srt

0xac47,	// (0x0001644c) bg_passive_tab_pane_g3_cp1_srt

0x67a3,	// (0x00011fa8) bg_active_tab_pane_cp1_srt_ParamLimits

0x67a3,	// (0x00011fa8) bg_active_tab_pane_cp1_srt

0xac50,	// (0x00016455) tabs_2_active_pane_srt_g1

0xac58,	// (0x0001645d) tabs_2_active_pane_srt_t1_ParamLimits

0xac58,	// (0x0001645d) tabs_2_active_pane_srt_t1

0xac3e,	// (0x00016443) bg_active_tab_pane_g1_cp1_srt

0x8074,	// (0x00013879) bg_active_tab_pane_g2_cp1_srt

0xac47,	// (0x0001644c) bg_active_tab_pane_g3_cp1_srt

0x5926,	// (0x0001112b) tabs_3_active_pane_srt_ParamLimits

0x5926,	// (0x0001112b) tabs_3_active_pane_srt

0x5937,	// (0x0001113c) tabs_3_passive_pane_cp_srt_ParamLimits

0x5937,	// (0x0001113c) tabs_3_passive_pane_cp_srt

0x5948,	// (0x0001114d) tabs_3_passive_pane_srt_ParamLimits

0x5948,	// (0x0001114d) tabs_3_passive_pane_srt

0x87b9,	// (0x00013fbe) bg_passive_tab_pane_cp2_srt_ParamLimits

0x87b9,	// (0x00013fbe) bg_passive_tab_pane_cp2_srt

0x85e1,	// (0x00013de6) bg_passive_tab_pane_g1_cp2_srt

0x8074,	// (0x00013879) bg_passive_tab_pane_g2_cp2_srt

0x85ea,	// (0x00013def) bg_passive_tab_pane_g3_cp2_srt

0x67a3,	// (0x00011fa8) bg_active_tab_pane_cp2_srt_ParamLimits

0x67a3,	// (0x00011fa8) bg_active_tab_pane_cp2_srt

0xac24,	// (0x00016429) tabs_3_active_pane_srt_g1

0xac2c,	// (0x00016431) tabs_3_active_pane_srt_t1_ParamLimits

0xac2c,	// (0x00016431) tabs_3_active_pane_srt_t1

0x85e1,	// (0x00013de6) bg_active_tab_pane_g1_cp2_srt

0x8074,	// (0x00013879) bg_active_tab_pane_g2_cp2_srt

0x85ea,	// (0x00013def) bg_active_tab_pane_g3_cp2_srt

0x58de,	// (0x000110e3) tabs_4_active_pane_srt_ParamLimits

0x58de,	// (0x000110e3) tabs_4_active_pane_srt

0x58f0,	// (0x000110f5) tabs_4_passive_pane_cp2_srt_ParamLimits

0x58f0,	// (0x000110f5) tabs_4_passive_pane_cp2_srt

0x873f,	// (0x00013f44) aid_size_cell_toolbar

0x7938,	// (0x0001313d) main_idle_act_pane_ParamLimits

0x8986,	// (0x0001418b) popup_large_graphic_colour_window_ParamLimits

0x8d2d,	// (0x00014532) popup_toolbar_window_ParamLimits

0x8d2d,	// (0x00014532) popup_toolbar_window

0xaa12,	// (0x00016217) list_single_graphic_2heading_pane_ParamLimits

0xaa12,	// (0x00016217) list_single_graphic_2heading_pane

0x7af4,	// (0x000132f9) aid_size_cell_apps_grid_lsc_pane

0x7b06,	// (0x0001330b) aid_size_cell_apps_grid_prt_pane

0x87b9,	// (0x00013fbe) bg_wml_button_pane_cp1_ParamLimits

0x87b9,	// (0x00013fbe) bg_wml_button_pane_cp1

0x9642,	// (0x00014e47) form_midp_field_text_pane_t1_ParamLimits

0x9447,	// (0x00014c4c) input_focus_pane_cp050_ParamLimits

0x966d,	// (0x00014e72) list_midp_form_text_pane_ParamLimits

0x961f,	// (0x00014e24) input_focus_pane_cp051_ParamLimits

0x9633,	// (0x00014e38) list_midp_choice_pane_ParamLimits

0x94d8,	// (0x00014cdd) list_single_2graphic_pane_cp3_ParamLimits

0x94d8,	// (0x00014cdd) list_single_2graphic_pane_cp3

0x94f1,	// (0x00014cf6) list_single_midp_graphic_pane_ParamLimits

0x94f1,	// (0x00014cf6) list_single_midp_graphic_pane

0x54e1,	// (0x00010ce6) list_single_graphic_2heading_pane_g1_ParamLimits

0x54e1,	// (0x00010ce6) list_single_graphic_2heading_pane_g1

0x54ed,	// (0x00010cf2) list_single_graphic_2heading_pane_g4_ParamLimits

0x54ed,	// (0x00010cf2) list_single_graphic_2heading_pane_g4

0x54f9,	// (0x00010cfe) list_single_graphic_2heading_pane_g5_ParamLimits

0x54f9,	// (0x00010cfe) list_single_graphic_2heading_pane_g5

0x0002,

0xf7c3,	// (0x0001afc8) list_single_graphic_2heading_pane_g_ParamLimits

0xf7c3,	// (0x0001afc8) list_single_graphic_2heading_pane_g

0x5505,	// (0x00010d0a) list_single_graphic_2heading_pane_t1_ParamLimits

0x5505,	// (0x00010d0a) list_single_graphic_2heading_pane_t1

0x5519,	// (0x00010d1e) list_single_graphic_2heading_pane_t2_ParamLimits

0x5519,	// (0x00010d1e) list_single_graphic_2heading_pane_t2

0x5535,	// (0x00010d3a) list_single_graphic_2heading_pane_t3_ParamLimits

0x5535,	// (0x00010d3a) list_single_graphic_2heading_pane_t3

0x0002,

0xf7ca,	// (0x0001afcf) list_single_graphic_2heading_pane_t_ParamLimits

0xf7ca,	// (0x0001afcf) list_single_graphic_2heading_pane_t

0x923b,	// (0x00014a40) bg_popup_sub_pane_cp2

0x9265,	// (0x00014a6a) grid_toobar_pane

0x554d,	// (0x00010d52) cell_toolbar_pane_ParamLimits

0x554d,	// (0x00010d52) cell_toolbar_pane

0x92cf,	// (0x00014ad4) cell_toolbar_pane_g1_ParamLimits

0x92cf,	// (0x00014ad4) cell_toolbar_pane_g1

0x92e3,	// (0x00014ae8) cell_toolbar_pane_g2_ParamLimits

0x92e3,	// (0x00014ae8) cell_toolbar_pane_g2

0x0001,

0xf7d8,	// (0x0001afdd) cell_toolbar_pane_g_ParamLimits

0xf7d8,	// (0x0001afdd) cell_toolbar_pane_g

0x9305,	// (0x00014b0a) grid_highlight_pane_cp2_ParamLimits

0x9305,	// (0x00014b0a) grid_highlight_pane_cp2

0x931f,	// (0x00014b24) toolbar_button_pane

0x932b,	// (0x00014b30) toolbar_button_pane_g1

0x9333,	// (0x00014b38) toolbar_button_pane_g2

0x933b,	// (0x00014b40) toolbar_button_pane_g3

0x9343,	// (0x00014b48) toolbar_button_pane_g4

0x934b,	// (0x00014b50) toolbar_button_pane_g5

0x9353,	// (0x00014b58) toolbar_button_pane_g6

0x935b,	// (0x00014b60) toolbar_button_pane_g7

0x9363,	// (0x00014b68) toolbar_button_pane_g8

0x936b,	// (0x00014b70) toolbar_button_pane_g9

0x0009,

0xf7dd,	// (0x0001afe2) toolbar_button_pane_g

0x5585,	// (0x00010d8a) list_single_2graphic_pane_g1_cp3_ParamLimits

0x5585,	// (0x00010d8a) list_single_2graphic_pane_g1_cp3

0x5591,	// (0x00010d96) list_single_2graphic_pane_g2_cp3_ParamLimits

0x5591,	// (0x00010d96) list_single_2graphic_pane_g2_cp3

0x55a2,	// (0x00010da7) list_single_2graphic_pane_g3_cp3

0x55aa,	// (0x00010daf) list_single_2graphic_pane_g4_cp3_ParamLimits

0x55aa,	// (0x00010daf) list_single_2graphic_pane_g4_cp3

0x55b6,	// (0x00010dbb) list_single_2graphic_pane_t1_cp3_ParamLimits

0x55b6,	// (0x00010dbb) list_single_2graphic_pane_t1_cp3

0x55d1,	// (0x00010dd6) list_single_midp_graphic_pane_g2_ParamLimits

0x55d1,	// (0x00010dd6) list_single_midp_graphic_pane_g2

0x8747,	// (0x00013f4c) aid_zoom_text_primary

0x874f,	// (0x00013f54) aid_zoom_text_secondary

0x869e,	// (0x00013ea3) status_small_pane_g7_ParamLimits

0x869e,	// (0x00013ea3) status_small_pane_g7

0x86c1,	// (0x00013ec6) status_small_pane_t1_ParamLimits

0x66da,	// (0x00011edf) title_pane_g2

0x0003,

0xf56a,	// (0x0001ad6f) title_pane_g

0x6c4d,	// (0x00012452) aid_size_cell_colour_1_pane_ParamLimits

0x6c4d,	// (0x00012452) aid_size_cell_colour_1_pane

0x6c61,	// (0x00012466) aid_size_cell_colour_2_pane_ParamLimits

0x6c61,	// (0x00012466) aid_size_cell_colour_2_pane

0x6c75,	// (0x0001247a) aid_size_cell_colour_3_pane_ParamLimits

0x6c75,	// (0x0001247a) aid_size_cell_colour_3_pane

0x6c89,	// (0x0001248e) aid_size_cell_colour_4_pane_ParamLimits

0x6c89,	// (0x0001248e) aid_size_cell_colour_4_pane

0x4f34,	// (0x00010739) title_pane_stacon_g1_ParamLimits

0x4f34,	// (0x00010739) title_pane_stacon_g1

0x9a50,	// (0x00015255) popup_note_wait_window_g3_ParamLimits

0x9a50,	// (0x00015255) popup_note_wait_window_g3

0x9ac7,	// (0x000152cc) popup_note_wait_window_t5_ParamLimits

0x9ac7,	// (0x000152cc) popup_note_wait_window_t5

0x4068,	// (0x0000f86d) main_feb_china_hwr_fs_writing_pane

0x884d,	// (0x00014052) popup_feb_china_hwr_fs_window_ParamLimits

0x884d,	// (0x00014052) popup_feb_china_hwr_fs_window

0x55f3,	// (0x00010df8) aid_size_cell_hwr_fs_ParamLimits

0x55f3,	// (0x00010df8) aid_size_cell_hwr_fs

0x9447,	// (0x00014c4c) bg_popup_sub_pane_cp3_ParamLimits

0x9447,	// (0x00014c4c) bg_popup_sub_pane_cp3

0x5608,	// (0x00010e0d) grid_hwr_fs_pane_ParamLimits

0x5608,	// (0x00010e0d) grid_hwr_fs_pane

0x5620,	// (0x00010e25) linegrid_hwr_fs_pane_ParamLimits

0x5620,	// (0x00010e25) linegrid_hwr_fs_pane

0x5630,	// (0x00010e35) cell_hwr_fs_pane_ParamLimits

0x5630,	// (0x00010e35) cell_hwr_fs_pane

0x9453,	// (0x00014c58) linegrid_hwr_fs_pane_g1_ParamLimits

0x9453,	// (0x00014c58) linegrid_hwr_fs_pane_g1

0x945f,	// (0x00014c64) linegrid_hwr_fs_pane_g2_ParamLimits

0x945f,	// (0x00014c64) linegrid_hwr_fs_pane_g2

0x9471,	// (0x00014c76) linegrid_hwr_fs_pane_g3_ParamLimits

0x9471,	// (0x00014c76) linegrid_hwr_fs_pane_g3

0x5654,	// (0x00010e59) linegrid_hwr_fs_pane_g4_ParamLimits

0x5654,	// (0x00010e59) linegrid_hwr_fs_pane_g4

0x5672,	// (0x00010e77) linegrid_hwr_fs_pane_g5_ParamLimits

0x5672,	// (0x00010e77) linegrid_hwr_fs_pane_g5

0x0004,

0xf808,	// (0x0001b00d) linegrid_hwr_fs_pane_g_ParamLimits

0xf808,	// (0x0001b00d) linegrid_hwr_fs_pane_g

0x947d,	// (0x00014c82) cell_hwr_fs_pane_g1_ParamLimits

0x947d,	// (0x00014c82) cell_hwr_fs_pane_g1

0x9172,	// (0x00014977) cell_hwr_fs_pane_g2_ParamLimits

0x9172,	// (0x00014977) cell_hwr_fs_pane_g2

0x9493,	// (0x00014c98) cell_hwr_fs_pane_g3_ParamLimits

0x9493,	// (0x00014c98) cell_hwr_fs_pane_g3

0x94a0,	// (0x00014ca5) cell_hwr_fs_pane_g4_ParamLimits

0x94a0,	// (0x00014ca5) cell_hwr_fs_pane_g4

0x0003,

0xf813,	// (0x0001b018) cell_hwr_fs_pane_g_ParamLimits

0xf813,	// (0x0001b018) cell_hwr_fs_pane_g

0x5688,	// (0x00010e8d) cell_hwr_fs_pane_t1

0x4068,	// (0x0000f86d) grid_highlight_pane_cp6

0x4068,	// (0x0000f86d) main_idle_act2_pane

0x78aa,	// (0x000130af) aid_inside_area_popup_secondary

0xa100,	// (0x00015905) aid_inside_area_window_primary_ParamLimits

0xa100,	// (0x00015905) aid_inside_area_window_primary

0xad8b,	// (0x00016590) ai2_news_ticker_pane

0xad93,	// (0x00016598) aid_size_cell_ai1_link_ParamLimits

0xad93,	// (0x00016598) aid_size_cell_ai1_link

0xadad,	// (0x000165b2) popup_ai2_data_window_ParamLimits

0xadad,	// (0x000165b2) popup_ai2_data_window

0xadcb,	// (0x000165d0) popup_ai2_link_window_ParamLimits

0xadcb,	// (0x000165d0) popup_ai2_link_window

0x9447,	// (0x00014c4c) bg_popup_sub_pane_cp4_ParamLimits

0x9447,	// (0x00014c4c) bg_popup_sub_pane_cp4

0xade1,	// (0x000165e6) grid_ai2_link_pane_ParamLimits

0xade1,	// (0x000165e6) grid_ai2_link_pane

0xadf8,	// (0x000165fd) popup_ai2_link_window_g1_ParamLimits

0xadf8,	// (0x000165fd) popup_ai2_link_window_g1

0xae04,	// (0x00016609) popup_ai2_link_window_g2_ParamLimits

0xae04,	// (0x00016609) popup_ai2_link_window_g2

0x0001,

0xf9df,	// (0x0001b1e4) popup_ai2_link_window_g_ParamLimits

0xf9df,	// (0x0001b1e4) popup_ai2_link_window_g

0xae15,	// (0x0001661a) ai2_mp_button_pane

0xae1d,	// (0x00016622) ai2_mp_volume_pane

0x961f,	// (0x00014e24) bg_popup_sub_pane_cp5_ParamLimits

0x961f,	// (0x00014e24) bg_popup_sub_pane_cp5

0xae25,	// (0x0001662a) heading_ai2_gene_pane_ParamLimits

0xae25,	// (0x0001662a) heading_ai2_gene_pane

0xae31,	// (0x00016636) list_ai2_gene_pane_ParamLimits

0xae31,	// (0x00016636) list_ai2_gene_pane

0xae79,	// (0x0001667e) cell_ai2_link_pane_ParamLimits

0xae79,	// (0x0001667e) cell_ai2_link_pane

0xae8f,	// (0x00016694) cell_ai2_link_pane_g1

0x4068,	// (0x0000f86d) grid_highlight_pane_cp7

0x5996,	// (0x0001119b) ai2_mp_volume_pane_g1

0xaf62,	// (0x00016767) ai2_mp_volume_pane_g2

0xaed7,	// (0x000166dc) list_ai2_gene_pane_t1

0xaf6a,	// (0x0001676f) ai2_mp_volume_pane_g3

0x0002,

0xf9f8,	// (0x0001b1fd) ai2_mp_volume_pane_g

0x599e,	// (0x000111a3) volume_small_pane_cp3

0xaf72,	// (0x00016777) aid_size_cell_ai2_button

0xaf7a,	// (0x0001677f) grid_ai2_button_pane

0xaf83,	// (0x00016788) cell_ai2_button_pane_ParamLimits

0xaf83,	// (0x00016788) cell_ai2_button_pane

0x3eef,	// (0x0000f6f4) cell_ai2_button_pane_g1

0x4068,	// (0x0000f86d) grid_highlight_pane_cp8

0xaf22,	// (0x00016727) ai2_gene_pane_t1_ParamLimits

0xaf22,	// (0x00016727) ai2_gene_pane_t1

0x8735,	// (0x00013f3a) aid_height_parent_landscape

0xa7d4,	// (0x00015fd9) aid_height_set_list

0xa7e5,	// (0x00015fea) aid_size_parent

0xabac,	// (0x000163b1) aid_size_cell_graphic_pane_ParamLimits

0xae41,	// (0x00016646) popup_ai2_data_window_g1_ParamLimits

0xae41,	// (0x00016646) popup_ai2_data_window_g1

0xae4d,	// (0x00016652) ai2_news_ticker_pane_g1

0xae55,	// (0x0001665a) ai2_news_ticker_pane_g2

0x0001,

0xf9e4,	// (0x0001b1e9) ai2_news_ticker_pane_g

0xae5d,	// (0x00016662) ai2_news_ticker_pane_t1

0xae6b,	// (0x00016670) ai2_news_ticker_pane_t2

0x0001,

0xf9e9,	// (0x0001b1ee) ai2_news_ticker_pane_t

0xae98,	// (0x0001669d) heading_ai2_gene_pane_g1

0xaea0,	// (0x000166a5) heading_ai2_gene_pane_t1_ParamLimits

0xaea0,	// (0x000166a5) heading_ai2_gene_pane_t1

0xaeb5,	// (0x000166ba) list_highlight_pane_cp6

0xaebd,	// (0x000166c2) ai2_gene_pane_ParamLimits

0xaebd,	// (0x000166c2) ai2_gene_pane

0xaee5,	// (0x000166ea) list_ai2_gene_pane_t2

0x0001,

0xf9ee,	// (0x0001b1f3) list_ai2_gene_pane_t

0xaef3,	// (0x000166f8) list_highlight_pane_cp8_ParamLimits

0xaef3,	// (0x000166f8) list_highlight_pane_cp8

0xaf04,	// (0x00016709) ai2_gene_pane_g1_ParamLimits

0xaf04,	// (0x00016709) ai2_gene_pane_g1

0xaf16,	// (0x0001671b) ai2_gene_pane_g2_ParamLimits

0xaf16,	// (0x0001671b) ai2_gene_pane_g2

0x0001,

0xf9f3,	// (0x0001b1f8) ai2_gene_pane_g_ParamLimits

0xf9f3,	// (0x0001b1f8) ai2_gene_pane_g

0x6fda,	// (0x000127df) scroll_pane_cp12

0x54a0,	// (0x00010ca5) control_pane_t3_ParamLimits

0x54a0,	// (0x00010ca5) control_pane_t3

0x86b2,	// (0x00013eb7) status_small_pane_g8_ParamLimits

0x86b2,	// (0x00013eb7) status_small_pane_g8

0x894b,	// (0x00014150) popup_find_window_ParamLimits

0x8b76,	// (0x0001437b) popup_note_image_window_ParamLimits

0x92a1,	// (0x00014aa6) list_double2_graphic_pane_vc_g1_ParamLimits

0x92a1,	// (0x00014aa6) list_double2_graphic_pane_vc_g1

0x839c,	// (0x00013ba1) list_double2_graphic_pane_vc_g2_ParamLimits

0x839c,	// (0x00013ba1) list_double2_graphic_pane_vc_g2

0x92ad,	// (0x00014ab2) list_double2_graphic_pane_vc_g3_ParamLimits

0x92ad,	// (0x00014ab2) list_double2_graphic_pane_vc_g3

0x0002,

0xf7d1,	// (0x0001afd6) list_double2_graphic_pane_vc_g_ParamLimits

0xf7d1,	// (0x0001afd6) list_double2_graphic_pane_vc_g

0x92b9,	// (0x00014abe) list_double2_graphic_pane_vc_t1_ParamLimits

0x92b9,	// (0x00014abe) list_double2_graphic_pane_vc_t1

0x839c,	// (0x00013ba1) list_single_heading_pane_vc_g1_ParamLimits

0x839c,	// (0x00013ba1) list_single_heading_pane_vc_g1

0x92ad,	// (0x00014ab2) list_single_heading_pane_vc_g2_ParamLimits

0x92ad,	// (0x00014ab2) list_single_heading_pane_vc_g2

0x0001,

0xf7f2,	// (0x0001aff7) list_single_heading_pane_vc_g_ParamLimits

0xf7f2,	// (0x0001aff7) list_single_heading_pane_vc_g

0x9373,	// (0x00014b78) list_single_heading_pane_vc_t1_ParamLimits

0x9373,	// (0x00014b78) list_single_heading_pane_vc_t1

0x9389,	// (0x00014b8e) list_single_heading_pane_vc_t2_ParamLimits

0x9389,	// (0x00014b8e) list_single_heading_pane_vc_t2

0x0001,

0xf7f7,	// (0x0001affc) list_single_heading_pane_vc_t_ParamLimits

0xf7f7,	// (0x0001affc) list_single_heading_pane_vc_t

0x939d,	// (0x00014ba2) list_setting_number_pane_vc_g1_ParamLimits

0x939d,	// (0x00014ba2) list_setting_number_pane_vc_g1

0x93a9,	// (0x00014bae) list_setting_number_pane_vc_g2_ParamLimits

0x93a9,	// (0x00014bae) list_setting_number_pane_vc_g2

0x0001,

0xf7fc,	// (0x0001b001) list_setting_number_pane_vc_g_ParamLimits

0xf7fc,	// (0x0001b001) list_setting_number_pane_vc_g

0x93b5,	// (0x00014bba) list_setting_number_pane_vc_t1_ParamLimits

0x93b5,	// (0x00014bba) list_setting_number_pane_vc_t1

0x93c9,	// (0x00014bce) list_setting_number_pane_vc_t2_ParamLimits

0x93c9,	// (0x00014bce) list_setting_number_pane_vc_t2

0x93e5,	// (0x00014bea) list_setting_number_pane_vc_t3_ParamLimits

0x93e5,	// (0x00014bea) list_setting_number_pane_vc_t3

0x0002,

0xf801,	// (0x0001b006) list_setting_number_pane_vc_t_ParamLimits

0xf801,	// (0x0001b006) list_setting_number_pane_vc_t

0x940d,	// (0x00014c12) set_value_pane_vc_ParamLimits

0x940d,	// (0x00014c12) set_value_pane_vc

0xaa12,	// (0x00016217) list_double2_graphic_pane_vc_ParamLimits

0xaa12,	// (0x00016217) list_double2_graphic_pane_vc

0xaa12,	// (0x00016217) list_double2_large_graphic_pane_vc_ParamLimits

0xaa12,	// (0x00016217) list_double2_large_graphic_pane_vc

0xaa12,	// (0x00016217) list_double2_pane_vc_ParamLimits

0xaa12,	// (0x00016217) list_double2_pane_vc

0xaa12,	// (0x00016217) list_double_graphic_heading_pane_vc_ParamLimits

0xaa12,	// (0x00016217) list_double_graphic_heading_pane_vc

0xaa12,	// (0x00016217) list_double_graphic_pane_vc_ParamLimits

0xaa12,	// (0x00016217) list_double_graphic_pane_vc

0xaa12,	// (0x00016217) list_double_heading_pane_vc_ParamLimits

0xaa12,	// (0x00016217) list_double_heading_pane_vc

0xaa12,	// (0x00016217) list_double_large_graphic_pane_vc_ParamLimits

0xaa12,	// (0x00016217) list_double_large_graphic_pane_vc

0xaa12,	// (0x00016217) list_double_number_pane_vc_ParamLimits

0xaa12,	// (0x00016217) list_double_number_pane_vc

0xaa12,	// (0x00016217) list_double_pane_vc_ParamLimits

0xaa12,	// (0x00016217) list_double_pane_vc

0xaa12,	// (0x00016217) list_double_time_pane_vc_ParamLimits

0xaa12,	// (0x00016217) list_double_time_pane_vc

0xaa12,	// (0x00016217) list_setting_number_pane_vc_ParamLimits

0xaa12,	// (0x00016217) list_setting_number_pane_vc

0xaa12,	// (0x00016217) list_setting_pane_vc_ParamLimits

0xaa12,	// (0x00016217) list_setting_pane_vc

0xaa12,	// (0x00016217) list_single_graphic_heading_pane_vc_ParamLimits

0xaa12,	// (0x00016217) list_single_graphic_heading_pane_vc

0xaa12,	// (0x00016217) list_single_heading_pane_vc_ParamLimits

0xaa12,	// (0x00016217) list_single_heading_pane_vc

0xaa26,	// (0x0001622b) list_single_number_heading_pane_vc_ParamLimits

0xaa26,	// (0x0001622b) list_single_number_heading_pane_vc

0x92a1,	// (0x00014aa6) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x92a1,	// (0x00014aa6) list_double_graphic_heading_pane_vc_g1

0xafb6,	// (0x000167bb) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xafb6,	// (0x000167bb) list_double_graphic_heading_pane_vc_g2

0xafc2,	// (0x000167c7) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xafc2,	// (0x000167c7) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ff,	// (0x0001b204) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ff,	// (0x0001b204) list_double_graphic_heading_pane_vc_g

0xafce,	// (0x000167d3) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xafce,	// (0x000167d3) list_double_graphic_heading_pane_vc_t1

0x9373,	// (0x00014b78) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x9373,	// (0x00014b78) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa06,	// (0x0001b20b) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa06,	// (0x0001b20b) list_double_graphic_heading_pane_vc_t

0x939d,	// (0x00014ba2) list_setting_pane_vc_g1_ParamLimits

0x939d,	// (0x00014ba2) list_setting_pane_vc_g1

0x93a9,	// (0x00014bae) list_setting_pane_vc_g2_ParamLimits

0x93a9,	// (0x00014bae) list_setting_pane_vc_g2

0x0001,

0xf7fc,	// (0x0001b001) list_setting_pane_vc_g_ParamLimits

0xf7fc,	// (0x0001b001) list_setting_pane_vc_g

0xb1eb,	// (0x000169f0) list_setting_pane_vc_t1_ParamLimits

0xb1eb,	// (0x000169f0) list_setting_pane_vc_t1

0xb1ff,	// (0x00016a04) list_setting_pane_vc_t2_ParamLimits

0xb1ff,	// (0x00016a04) list_setting_pane_vc_t2

0x0001,

0xfa34,	// (0x0001b239) list_setting_pane_vc_t_ParamLimits

0xfa34,	// (0x0001b239) list_setting_pane_vc_t

0x940d,	// (0x00014c12) set_value_pane_cp_vc_ParamLimits

0x940d,	// (0x00014c12) set_value_pane_cp_vc

0x839c,	// (0x00013ba1) list_single_number_heading_pane_vc_g1_ParamLimits

0x839c,	// (0x00013ba1) list_single_number_heading_pane_vc_g1

0x92ad,	// (0x00014ab2) list_single_number_heading_pane_vc_g2_ParamLimits

0x92ad,	// (0x00014ab2) list_single_number_heading_pane_vc_g2

0x0001,

0xf7f2,	// (0x0001aff7) list_single_number_heading_pane_vc_g_ParamLimits

0xf7f2,	// (0x0001aff7) list_single_number_heading_pane_vc_g

0x9373,	// (0x00014b78) list_single_number_heading_pane_vc_t1_ParamLimits

0x9373,	// (0x00014b78) list_single_number_heading_pane_vc_t1

0xb221,	// (0x00016a26) list_single_number_heading_pane_vc_t2_ParamLimits

0xb221,	// (0x00016a26) list_single_number_heading_pane_vc_t2

0xb235,	// (0x00016a3a) list_single_number_heading_pane_vc_t3_ParamLimits

0xb235,	// (0x00016a3a) list_single_number_heading_pane_vc_t3

0x0002,

0xfa39,	// (0x0001b23e) list_single_number_heading_pane_vc_t_ParamLimits

0xfa39,	// (0x0001b23e) list_single_number_heading_pane_vc_t

0x92a1,	// (0x00014aa6) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x92a1,	// (0x00014aa6) list_single_graphic_heading_pane_vc_g1

0x839c,	// (0x00013ba1) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x839c,	// (0x00013ba1) list_single_graphic_heading_pane_vc_g4

0x92ad,	// (0x00014ab2) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x92ad,	// (0x00014ab2) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7d1,	// (0x0001afd6) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7d1,	// (0x0001afd6) list_single_graphic_heading_pane_vc_g

0x9373,	// (0x00014b78) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x9373,	// (0x00014b78) list_single_graphic_heading_pane_vc_t1

0xb247,	// (0x00016a4c) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xb247,	// (0x00016a4c) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa40,	// (0x0001b245) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa40,	// (0x0001b245) list_single_graphic_heading_pane_vc_t

0x839c,	// (0x00013ba1) list_double2_pane_vc_g1_ParamLimits

0x839c,	// (0x00013ba1) list_double2_pane_vc_g1

0x92ad,	// (0x00014ab2) list_double2_pane_vc_g2_ParamLimits

0x92ad,	// (0x00014ab2) list_double2_pane_vc_g2

0x0001,

0xf7f2,	// (0x0001aff7) list_double2_pane_vc_g_ParamLimits

0xf7f2,	// (0x0001aff7) list_double2_pane_vc_g

0xb25b,	// (0x00016a60) list_double2_pane_vc_t1_ParamLimits

0xb25b,	// (0x00016a60) list_double2_pane_vc_t1

0xb271,	// (0x00016a76) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xb271,	// (0x00016a76) list_double2_large_graphic_pane_vc_g1

0x839c,	// (0x00013ba1) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x839c,	// (0x00013ba1) list_double2_large_graphic_pane_vc_g2

0x92ad,	// (0x00014ab2) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x92ad,	// (0x00014ab2) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa45,	// (0x0001b24a) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa45,	// (0x0001b24a) list_double2_large_graphic_pane_vc_g

0xb27d,	// (0x00016a82) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xb27d,	// (0x00016a82) list_double2_large_graphic_pane_vc_t1

0xb293,	// (0x00016a98) list_double_time_pane_vc_g1_ParamLimits

0xb293,	// (0x00016a98) list_double_time_pane_vc_g1

0xb29f,	// (0x00016aa4) list_double_time_pane_vc_g2_ParamLimits

0xb29f,	// (0x00016aa4) list_double_time_pane_vc_g2

0x0001,

0xfa4c,	// (0x0001b251) list_double_time_pane_vc_g_ParamLimits

0xfa4c,	// (0x0001b251) list_double_time_pane_vc_g

0xb2ab,	// (0x00016ab0) list_double_time_pane_vc_t1_ParamLimits

0xb2ab,	// (0x00016ab0) list_double_time_pane_vc_t1

0xb2c4,	// (0x00016ac9) list_double_time_pane_vc_t2_ParamLimits

0xb2c4,	// (0x00016ac9) list_double_time_pane_vc_t2

0xb2e4,	// (0x00016ae9) list_double_time_pane_vc_t3_ParamLimits

0xb2e4,	// (0x00016ae9) list_double_time_pane_vc_t3

0xb2fc,	// (0x00016b01) list_double_time_pane_vc_t4_ParamLimits

0xb2fc,	// (0x00016b01) list_double_time_pane_vc_t4

0x0003,

0xfa51,	// (0x0001b256) list_double_time_pane_vc_t_ParamLimits

0xfa51,	// (0x0001b256) list_double_time_pane_vc_t

0x839c,	// (0x00013ba1) list_double_pane_vc_g1_ParamLimits

0x839c,	// (0x00013ba1) list_double_pane_vc_g1

0x92ad,	// (0x00014ab2) list_double_pane_vc_g2_ParamLimits

0x92ad,	// (0x00014ab2) list_double_pane_vc_g2

0x0001,

0xf7f2,	// (0x0001aff7) list_double_pane_vc_g_ParamLimits

0xf7f2,	// (0x0001aff7) list_double_pane_vc_g

0xb310,	// (0x00016b15) list_double_pane_vc_t1_ParamLimits

0xb310,	// (0x00016b15) list_double_pane_vc_t1

0xb322,	// (0x00016b27) list_double_pane_vc_t2_ParamLimits

0xb322,	// (0x00016b27) list_double_pane_vc_t2

0x0001,

0xfa5a,	// (0x0001b25f) list_double_pane_vc_t_ParamLimits

0xfa5a,	// (0x0001b25f) list_double_pane_vc_t

0x839c,	// (0x00013ba1) list_double_number_pane_vc_g1_ParamLimits

0x839c,	// (0x00013ba1) list_double_number_pane_vc_g1

0x92ad,	// (0x00014ab2) list_double_number_pane_vc_g2_ParamLimits

0x92ad,	// (0x00014ab2) list_double_number_pane_vc_g2

0x0001,

0xf7f2,	// (0x0001aff7) list_double_number_pane_vc_g_ParamLimits

0xf7f2,	// (0x0001aff7) list_double_number_pane_vc_g

0xb33a,	// (0x00016b3f) list_double_number_pane_vc_t1_ParamLimits

0xb33a,	// (0x00016b3f) list_double_number_pane_vc_t1

0xb34e,	// (0x00016b53) list_double_number_pane_vc_t2_ParamLimits

0xb34e,	// (0x00016b53) list_double_number_pane_vc_t2

0xb322,	// (0x00016b27) list_double_number_pane_vc_t3_ParamLimits

0xb322,	// (0x00016b27) list_double_number_pane_vc_t3

0x0002,

0xfa5f,	// (0x0001b264) list_double_number_pane_vc_t_ParamLimits

0xfa5f,	// (0x0001b264) list_double_number_pane_vc_t

0xb360,	// (0x00016b65) list_double_large_graphic_pane_vc_g1_ParamLimits

0xb360,	// (0x00016b65) list_double_large_graphic_pane_vc_g1

0xb36c,	// (0x00016b71) list_double_large_graphic_pane_vc_g2_ParamLimits

0xb36c,	// (0x00016b71) list_double_large_graphic_pane_vc_g2

0x92ad,	// (0x00014ab2) list_double_large_graphic_pane_vc_g3_ParamLimits

0x92ad,	// (0x00014ab2) list_double_large_graphic_pane_vc_g3

0xb37b,	// (0x00016b80) list_double_large_graphic_pane_vc_g4_ParamLimits

0xb37b,	// (0x00016b80) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa66,	// (0x0001b26b) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa66,	// (0x0001b26b) list_double_large_graphic_pane_vc_g

0xb387,	// (0x00016b8c) list_double_large_graphic_pane_vc_t1_ParamLimits

0xb387,	// (0x00016b8c) list_double_large_graphic_pane_vc_t1

0xb399,	// (0x00016b9e) list_double_large_graphic_pane_vc_t2_ParamLimits

0xb399,	// (0x00016b9e) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa6f,	// (0x0001b274) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa6f,	// (0x0001b274) list_double_large_graphic_pane_vc_t

0xafb6,	// (0x000167bb) list_double_heading_pane_vc_g1_ParamLimits

0xafb6,	// (0x000167bb) list_double_heading_pane_vc_g1

0xafc2,	// (0x000167c7) list_double_heading_pane_vc_g2_ParamLimits

0xafc2,	// (0x000167c7) list_double_heading_pane_vc_g2

0x0001,

0xfa74,	// (0x0001b279) list_double_heading_pane_vc_g_ParamLimits

0xfa74,	// (0x0001b279) list_double_heading_pane_vc_g

0xb3b2,	// (0x00016bb7) list_double_heading_pane_vc_t1_ParamLimits

0xb3b2,	// (0x00016bb7) list_double_heading_pane_vc_t1

0x9373,	// (0x00014b78) list_double_heading_pane_vc_t2_ParamLimits

0x9373,	// (0x00014b78) list_double_heading_pane_vc_t2

0x0001,

0xfa79,	// (0x0001b27e) list_double_heading_pane_vc_t_ParamLimits

0xfa79,	// (0x0001b27e) list_double_heading_pane_vc_t

0x92a1,	// (0x00014aa6) list_double_graphic_pane_vc_g1_ParamLimits

0x92a1,	// (0x00014aa6) list_double_graphic_pane_vc_g1

0xb3c6,	// (0x00016bcb) list_double_graphic_pane_vc_g2_ParamLimits

0xb3c6,	// (0x00016bcb) list_double_graphic_pane_vc_g2

0xb3d5,	// (0x00016bda) list_double_graphic_pane_vc_g3_ParamLimits

0xb3d5,	// (0x00016bda) list_double_graphic_pane_vc_g3

0x0002,

0xfa7e,	// (0x0001b283) list_double_graphic_pane_vc_g_ParamLimits

0xfa7e,	// (0x0001b283) list_double_graphic_pane_vc_g

0xb3e1,	// (0x00016be6) list_double_graphic_pane_vc_t1_ParamLimits

0xb3e1,	// (0x00016be6) list_double_graphic_pane_vc_t1

0xb322,	// (0x00016b27) list_double_graphic_pane_vc_t2_ParamLimits

0xb322,	// (0x00016b27) list_double_graphic_pane_vc_t2

0x0001,

0xfa85,	// (0x0001b28a) list_double_graphic_pane_vc_t_ParamLimits

0xfa85,	// (0x0001b28a) list_double_graphic_pane_vc_t

0x4a7f,	// (0x00010284) aid_size_cell_fastswap

0x4a87,	// (0x0001028c) aid_size_cell_touch_ParamLimits

0x4a87,	// (0x0001028c) aid_size_cell_touch

0x4cf2,	// (0x000104f7) popup_fast_swap_wide_window_ParamLimits

0x4cf2,	// (0x000104f7) popup_fast_swap_wide_window

0x4e08,	// (0x0001060d) touch_pane_ParamLimits

0x4e08,	// (0x0001060d) touch_pane

0x74e9,	// (0x00012cee) button_value_adjust_pane_cp2

0x74f1,	// (0x00012cf6) button_value_adjust_pane_cp4

0x7517,	// (0x00012d1c) form_field_data_pane_cp2

0x753c,	// (0x00012d41) form_field_data_wide_pane_cp2

0x7bc6,	// (0x000133cb) bg_scroll_pane_ParamLimits

0x5099,	// (0x0001089e) scroll_handle_pane_ParamLimits

0x50ad,	// (0x000108b2) scroll_sc2_down_pane_ParamLimits

0x50ad,	// (0x000108b2) scroll_sc2_down_pane

0x7bf7,	// (0x000133fc) scroll_sc2_up_pane_ParamLimits

0x7bf7,	// (0x000133fc) scroll_sc2_up_pane

0xb84d,	// (0x00017052) grid_wheel_folder_pane_g1_ParamLimits

0xb84d,	// (0x00017052) grid_wheel_folder_pane_g1

0x5277,	// (0x00010a7c) clock_nsta_pane_cp2_ParamLimits

0x5277,	// (0x00010a7c) clock_nsta_pane_cp2

0x8433,	// (0x00013c38) listscroll_midp_pane_ParamLimits

0x843f,	// (0x00013c44) midp_canvas_pane

0x872d,	// (0x00013f32) nsta_clock_indic_pane

0x878b,	// (0x00013f90) listscroll_form_pane_vc

0x87a7,	// (0x00013fac) listscroll_set_pane_vc_ParamLimits

0x87a7,	// (0x00013fac) listscroll_set_pane_vc

0x8ec7,	// (0x000146cc) clock_nsta_pane

0x8f44,	// (0x00014749) indicator_nsta_pane

0x923b,	// (0x00014a40) bg_popup_sub_pane_cp2_ParamLimits

0x924f,	// (0x00014a54) find_pane_cp2_ParamLimits

0x924f,	// (0x00014a54) find_pane_cp2

0x9265,	// (0x00014a6a) grid_toobar_pane_ParamLimits

0x941b,	// (0x00014c20) list_form_gen_pane_vc_ParamLimits

0x941b,	// (0x00014c20) list_form_gen_pane_vc

0x9431,	// (0x00014c36) scroll_pane_cp8_vc_ParamLimits

0x9431,	// (0x00014c36) scroll_pane_cp8_vc

0x94ad,	// (0x00014cb2) data_form_wide_pane_vc_ParamLimits

0x94ad,	// (0x00014cb2) data_form_wide_pane_vc

0x94b9,	// (0x00014cbe) form_field_data_wide_pane_vc_g1

0x94c1,	// (0x00014cc6) form_field_data_wide_pane_vc_t1_ParamLimits

0x94c1,	// (0x00014cc6) form_field_data_wide_pane_vc_t1

0x75df,	// (0x00012de4) input_focus_pane_cp6_vc_ParamLimits

0x75df,	// (0x00012de4) input_focus_pane_cp6_vc

0x97ca,	// (0x00014fcf) list_midp_pane_ParamLimits

0x97d6,	// (0x00014fdb) scroll_pane_cp16_ParamLimits

0x97d6,	// (0x00014fdb) scroll_pane_cp16

0x9824,	// (0x00015029) button_value_adjust_pane_ParamLimits

0x9824,	// (0x00015029) button_value_adjust_pane

0xa7f7,	// (0x00015ffc) button_value_adjust_pane_cp6_ParamLimits

0xa7f7,	// (0x00015ffc) button_value_adjust_pane_cp6

0xa951,	// (0x00016156) settings_code_pane_cp_ParamLimits

0xa951,	// (0x00016156) settings_code_pane_cp

0x3eef,	// (0x0000f6f4) cell_touch_pane_g1

0x3eef,	// (0x0000f6f4) cell_touch_pane_g2

0x0001,

0xf71a,	// (0x0001af1f) cell_touch_pane_g

0xaf95,	// (0x0001679a) cell_touch_pane_cp_ParamLimits

0xaf95,	// (0x0001679a) cell_touch_pane_cp

0xafa5,	// (0x000167aa) cell_touch_pane_ParamLimits

0xafa5,	// (0x000167aa) cell_touch_pane

0x3eef,	// (0x0000f6f4) scroll_sc2_down_pane_g1

0x3eef,	// (0x0000f6f4) scroll_sc2_up_pane_g1

0x4068,	// (0x0000f86d) bg_set_opt_pane_cp4_vc

0xafe2,	// (0x000167e7) list_set_graphic_pane_vc_g1_ParamLimits

0xafe2,	// (0x000167e7) list_set_graphic_pane_vc_g1

0xafee,	// (0x000167f3) list_set_graphic_pane_vc_g2_ParamLimits

0xafee,	// (0x000167f3) list_set_graphic_pane_vc_g2

0x0001,

0xfa0b,	// (0x0001b210) list_set_graphic_pane_vc_g_ParamLimits

0xfa0b,	// (0x0001b210) list_set_graphic_pane_vc_g

0xaffa,	// (0x000167ff) text_primary_small_cp13_vc_ParamLimits

0xaffa,	// (0x000167ff) text_primary_small_cp13_vc

0xb012,	// (0x00016817) list_set_graphic_pane_vc_ParamLimits

0xb012,	// (0x00016817) list_set_graphic_pane_vc

0x4068,	// (0x0000f86d) input_focus_pane_cp2_vc

0x3eef,	// (0x0000f6f4) setting_code_pane_vc_g1

0xb026,	// (0x0001682b) setting_code_pane_vc_t1

0xb034,	// (0x00016839) set_text_pane_vc_t1_ParamLimits

0xb034,	// (0x00016839) set_text_pane_vc_t1

0x4068,	// (0x0000f86d) input_focus_pane_cp1_vc

0xb052,	// (0x00016857) list_set_text_pane_vc

0x3eef,	// (0x0000f6f4) setting_text_pane_vc_g1

0x4068,	// (0x0000f86d) bg_set_opt_pane_cp2_vc

0xb05c,	// (0x00016861) setting_slider_graphic_pane_vc_g1

0xb064,	// (0x00016869) setting_slider_graphic_pane_vc_t1

0xb072,	// (0x00016877) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa10,	// (0x0001b215) setting_slider_graphic_pane_vc_t

0xb080,	// (0x00016885) slider_set_pane_cp_vc

0xb088,	// (0x0001688d) slider_set_pane_vc_g1

0xb091,	// (0x00016896) slider_set_pane_vc_g2

0x0006,

0xfa15,	// (0x0001b21a) slider_set_pane_vc_g

0x771b,	// (0x00012f20) set_opt_bg_pane_g1_copy1

0x7723,	// (0x00012f28) set_opt_bg_pane_g2_copy1

0xb0bd,	// (0x000168c2) set_opt_bg_pane_g3_copy1

0x7733,	// (0x00012f38) set_opt_bg_pane_g4_copy1

0x773b,	// (0x00012f40) set_opt_bg_pane_g5_copy1

0x7743,	// (0x00012f48) set_opt_bg_pane_g6_copy1

0xb0c7,	// (0x000168cc) set_opt_bg_pane_g7_copy1

0xb0d1,	// (0x000168d6) set_opt_bg_pane_g8_copy1

0xb0db,	// (0x000168e0) set_opt_bg_pane_g9_copy1

0x4068,	// (0x0000f86d) bg_set_opt_pane_cp_vc

0xb0e5,	// (0x000168ea) setting_slider_pane_vc_t1

0xb064,	// (0x00016869) setting_slider_pane_vc_t2

0xb072,	// (0x00016877) setting_slider_pane_vc_t3

0x0002,

0xfa24,	// (0x0001b229) setting_slider_pane_vc_t

0xb080,	// (0x00016885) slider_set_pane_vc

0x5696,	// (0x00010e9b) volume_set_pane_vc_g1

0x569f,	// (0x00010ea4) volume_set_pane_vc_g2

0x56a8,	// (0x00010ead) volume_set_pane_vc_g3

0x56b1,	// (0x00010eb6) volume_set_pane_vc_g4

0x56ba,	// (0x00010ebf) volume_set_pane_vc_g5

0x56c3,	// (0x00010ec8) volume_set_pane_vc_g6

0x56cc,	// (0x00010ed1) volume_set_pane_vc_g7

0x56d5,	// (0x00010eda) volume_set_pane_vc_g8

0x56de,	// (0x00010ee3) volume_set_pane_vc_g9

0x56e7,	// (0x00010eec) volume_set_pane_vc_g10

0x0009,

0xf8c2,	// (0x0001b0c7) volume_set_pane_vc_g

0xb0f4,	// (0x000168f9) volume_set_pane_vc

0xb0fc,	// (0x00016901) button_value_adjust_pane_cp1_vc

0xb106,	// (0x0001690b) list_highlight_pane_cp2_vc

0xb10f,	// (0x00016914) list_set_pane_vc_ParamLimits

0xb10f,	// (0x00016914) list_set_pane_vc

0xb179,	// (0x0001697e) main_pane_set_vc_t1_ParamLimits

0xb179,	// (0x0001697e) main_pane_set_vc_t1

0xb18e,	// (0x00016993) main_pane_set_vc_t2_ParamLimits

0xb18e,	// (0x00016993) main_pane_set_vc_t2

0xb1a0,	// (0x000169a5) main_pane_set_vc_t3_ParamLimits

0xb1a0,	// (0x000169a5) main_pane_set_vc_t3

0xb1b4,	// (0x000169b9) main_pane_set_vc_t4_ParamLimits

0xb1b4,	// (0x000169b9) main_pane_set_vc_t4

0x0003,

0xfa2b,	// (0x0001b230) main_pane_set_vc_t_ParamLimits

0xfa2b,	// (0x0001b230) main_pane_set_vc_t

0xb1c8,	// (0x000169cd) setting_code_pane_vc_ParamLimits

0xb1c8,	// (0x000169cd) setting_code_pane_vc

0xb1d9,	// (0x000169de) setting_slider_graphic_pane_vc

0xb1d9,	// (0x000169de) setting_slider_pane_vc

0xb1d9,	// (0x000169de) setting_text_pane_vc

0xb1d9,	// (0x000169de) setting_volume_pane_vc

0xb1e3,	// (0x000169e8) scroll_pane_cp121_vc

0x74d7,	// (0x00012cdc) set_content_pane_vc

0xb3f3,	// (0x00016bf8) button_value_adjust_pane_g1

0xb3fc,	// (0x00016c01) button_value_adjust_pane_g2

0x0001,

0xfa8a,	// (0x0001b28f) button_value_adjust_pane_g

0xb405,	// (0x00016c0a) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb405,	// (0x00016c0a) form_field_slider_wide_pane_vc_t1

0xb419,	// (0x00016c1e) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb419,	// (0x00016c1e) form_field_slider_wide_pane_vc_t2

0x0001,

0xfa8f,	// (0x0001b294) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa8f,	// (0x0001b294) form_field_slider_wide_pane_vc_t

0x6a39,	// (0x0001223e) input_focus_pane_cp10_vc_ParamLimits

0x6a39,	// (0x0001223e) input_focus_pane_cp10_vc

0xb42b,	// (0x00016c30) slider_cont_pane_cp1_vc_ParamLimits

0xb42b,	// (0x00016c30) slider_cont_pane_cp1_vc

0xb088,	// (0x0001688d) slider_form_pane_g1_cp2

0xb091,	// (0x00016896) slider_form_pane_g2_cp2

0xb444,	// (0x00016c49) form_field_slider_pane_vc_t3

0xb452,	// (0x00016c57) form_field_slider_pane_vc_t4

0xb460,	// (0x00016c65) slider_form_pane_vc_ParamLimits

0xb460,	// (0x00016c65) slider_form_pane_vc

0xb46d,	// (0x00016c72) form_field_slider_pane_vc_t1_ParamLimits

0xb46d,	// (0x00016c72) form_field_slider_pane_vc_t1

0xb419,	// (0x00016c1e) form_field_slider_pane_vc_t2_ParamLimits

0xb419,	// (0x00016c1e) form_field_slider_pane_vc_t2

0x0001,

0xfa9f,	// (0x0001b2a4) form_field_slider_pane_vc_t_ParamLimits

0xfa9f,	// (0x0001b2a4) form_field_slider_pane_vc_t

0x6a39,	// (0x0001223e) input_focus_pane_cp9_vc_ParamLimits

0x6a39,	// (0x0001223e) input_focus_pane_cp9_vc

0xb489,	// (0x00016c8e) slider_cont_pane_vc_ParamLimits

0xb489,	// (0x00016c8e) slider_cont_pane_vc

0xb49b,	// (0x00016ca0) list_form_graphic_pane_cp_vc_ParamLimits

0xb49b,	// (0x00016ca0) list_form_graphic_pane_cp_vc

0x94b9,	// (0x00014cbe) form_field_popup_wide_pane_vc_g1

0xb4b0,	// (0x00016cb5) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb4b0,	// (0x00016cb5) form_field_popup_wide_pane_vc_t1

0x75df,	// (0x00012de4) input_focus_pane_cp8_vc_ParamLimits

0x75df,	// (0x00012de4) input_focus_pane_cp8_vc

0xb4c7,	// (0x00016ccc) list_form_wide_pane_vc_ParamLimits

0xb4c7,	// (0x00016ccc) list_form_wide_pane_vc

0xb4d3,	// (0x00016cd8) list_form_graphic_pane_vc_g1

0xb4db,	// (0x00016ce0) list_form_graphic_pane_vc_t1_ParamLimits

0xb4db,	// (0x00016ce0) list_form_graphic_pane_vc_t1

0x67a3,	// (0x00011fa8) list_highlight_pane_cp5_vc_ParamLimits

0x67a3,	// (0x00011fa8) list_highlight_pane_cp5_vc

0xb4f7,	// (0x00016cfc) list_form_graphic_pane_vc_ParamLimits

0xb4f7,	// (0x00016cfc) list_form_graphic_pane_vc

0x94b9,	// (0x00014cbe) form_field_popup_pane_vc_g1

0xb50d,	// (0x00016d12) form_field_popup_pane_vc_t1_ParamLimits

0xb50d,	// (0x00016d12) form_field_popup_pane_vc_t1

0x75df,	// (0x00012de4) input_focus_pane_cp7_vc_ParamLimits

0x75df,	// (0x00012de4) input_focus_pane_cp7_vc

0xb524,	// (0x00016d29) list_form_pane_vc_ParamLimits

0xb524,	// (0x00016d29) list_form_pane_vc

0xb530,	// (0x00016d35) data_form_pane_vc_t1_ParamLimits

0xb530,	// (0x00016d35) data_form_pane_vc_t1

0x771b,	// (0x00012f20) input_focus_pane_vc_g1

0x7723,	// (0x00012f28) input_focus_pane_vc_g2

0x772b,	// (0x00012f30) input_focus_pane_vc_g3

0x7733,	// (0x00012f38) input_focus_pane_vc_g4

0x773b,	// (0x00012f40) input_focus_pane_vc_g5

0x7743,	// (0x00012f48) input_focus_pane_vc_g6

0x774b,	// (0x00012f50) input_focus_pane_vc_g7

0x7753,	// (0x00012f58) input_focus_pane_vc_g8

0x775b,	// (0x00012f60) input_focus_pane_vc_g9

0x3eef,	// (0x0000f6f4) input_focus_pane_vc_g10

0x0009,

0xf6a3,	// (0x0001aea8) input_focus_pane_vc_g

0x94ad,	// (0x00014cb2) data_form_pane_vc_ParamLimits

0x94ad,	// (0x00014cb2) data_form_pane_vc

0x94b9,	// (0x00014cbe) form_field_data_pane_vc_g1

0xb54d,	// (0x00016d52) form_field_data_pane_vc_t1_ParamLimits

0xb54d,	// (0x00016d52) form_field_data_pane_vc_t1

0x75df,	// (0x00012de4) input_focus_pane_vc_ParamLimits

0x75df,	// (0x00012de4) input_focus_pane_vc

0xb567,	// (0x00016d6c) button_value_adjust_pane_cp3_vc

0xb56f,	// (0x00016d74) button_value_adjust_pane_cp5_vc

0xb577,	// (0x00016d7c) form_field_data_pane_vc_ParamLimits

0xb577,	// (0x00016d7c) form_field_data_pane_vc

0xb592,	// (0x00016d97) form_field_data_pane_vc_cp2

0xb59a,	// (0x00016d9f) form_field_data_wide_pane_vc_ParamLimits

0xb59a,	// (0x00016d9f) form_field_data_wide_pane_vc

0xb5b4,	// (0x00016db9) form_field_data_wide_pane_vc_cp2

0xb5bc,	// (0x00016dc1) form_field_popup_pane_vc_ParamLimits

0xb5bc,	// (0x00016dc1) form_field_popup_pane_vc

0xb5d7,	// (0x00016ddc) form_field_popup_wide_pane_vc_ParamLimits

0xb5d7,	// (0x00016ddc) form_field_popup_wide_pane_vc

0xb5f1,	// (0x00016df6) form_field_slider_pane_vc_ParamLimits

0xb5f1,	// (0x00016df6) form_field_slider_pane_vc

0xb604,	// (0x00016e09) form_field_slider_wide_pane_vc_ParamLimits

0xb604,	// (0x00016e09) form_field_slider_wide_pane_vc

0xb617,	// (0x00016e1c) grid_touch_1_pane_ParamLimits

0xb617,	// (0x00016e1c) grid_touch_1_pane

0xb623,	// (0x00016e28) grid_touch_2_pane_ParamLimits

0xb623,	// (0x00016e28) grid_touch_2_pane

0x86f8,	// (0x00013efd) touch_pane_g1_ParamLimits

0x86f8,	// (0x00013efd) touch_pane_g1

0xb63d,	// (0x00016e42) cell_app_pane_cp_wide_ParamLimits

0xb63d,	// (0x00016e42) cell_app_pane_cp_wide

0xb64e,	// (0x00016e53) grid_popup_fast_wide_pane_ParamLimits

0xb64e,	// (0x00016e53) grid_popup_fast_wide_pane

0xb662,	// (0x00016e67) scroll_pane_cp19_ParamLimits

0xb662,	// (0x00016e67) scroll_pane_cp19

0x4068,	// (0x0000f86d) bg_popup_window_pane_cp20

0xb676,	// (0x00016e7b) listscroll_popup_fast_wide_pane

0x67a3,	// (0x00011fa8) grid_indicator_nsta_pane

0xb67e,	// (0x00016e83) clock_nsta_pane_g1

0xb687,	// (0x00016e8c) clock_nsta_pane_t1

0xb6a3,	// (0x00016ea8) cell_indicator_nsta_pane_ParamLimits

0xb6a3,	// (0x00016ea8) cell_indicator_nsta_pane

0xb6db,	// (0x00016ee0) cell_indicator_nsta_pane_g1

0xb6e9,	// (0x00016eee) cell_indicator_nsta_pane_g2

0x0001,

0xfaa9,	// (0x0001b2ae) cell_indicator_nsta_pane_g

0xb6fe,	// (0x00016f03) clock_nsta_pane_cp

0xb706,	// (0x00016f0b) indicator_nsta_pane_cp

0xb70e,	// (0x00016f13) nsta_clock_indic_pane_g1

0x6889,	// (0x0001208e) grid_indicator_pane

0x7ce9,	// (0x000134ee) scroll_pane_cp29

0x51c3,	// (0x000109c8) indicator_nsta_pane_cp2_ParamLimits

0x51c3,	// (0x000109c8) indicator_nsta_pane_cp2

0x67a3,	// (0x00011fa8) main_apps_wheel_pane

0x96a7,	// (0x00014eac) form_midp_field_text_pane_ParamLimits

0x97f6,	// (0x00014ffb) scroll_bar_cp050_ParamLimits

0xb777,	// (0x00016f7c) cell_indicator_pane_ParamLimits

0xb777,	// (0x00016f7c) cell_indicator_pane

0xb78f,	// (0x00016f94) cell_indicator_pane_g1

0xb799,	// (0x00016f9e) grid_wheel_folder_pane_ParamLimits

0xb799,	// (0x00016f9e) grid_wheel_folder_pane

0xb7ad,	// (0x00016fb2) list_wheel_apps_pane_ParamLimits

0xb7ad,	// (0x00016fb2) list_wheel_apps_pane

0xb7c0,	// (0x00016fc5) main_apps_wheel_pane_g1_ParamLimits

0xb7c0,	// (0x00016fc5) main_apps_wheel_pane_g1

0xb7dc,	// (0x00016fe1) main_apps_wheel_pane_g2_ParamLimits

0xb7dc,	// (0x00016fe1) main_apps_wheel_pane_g2

0x0001,

0xfac5,	// (0x0001b2ca) main_apps_wheel_pane_g_ParamLimits

0xfac5,	// (0x0001b2ca) main_apps_wheel_pane_g

0xb7f8,	// (0x00016ffd) main_apps_wheel_pane_t1_ParamLimits

0xb7f8,	// (0x00016ffd) main_apps_wheel_pane_t1

0xb821,	// (0x00017026) list_wheel_apps_pane_g1

0xb829,	// (0x0001702e) list_wheel_apps_pane_g2

0xb831,	// (0x00017036) list_wheel_apps_pane_g3

0xb839,	// (0x0001703e) list_wheel_apps_pane_g4

0xb843,	// (0x00017048) list_wheel_apps_pane_g5

0x0004,

0xfaca,	// (0x0001b2cf) list_wheel_apps_pane_g

0x82a7,	// (0x00013aac) navi_icon_text_pane

0x8df4,	// (0x000145f9) aid_fill_nsta

0xb864,	// (0x00017069) navi_icon_text_pane_g1

0xb873,	// (0x00017078) navi_icon_text_pane_t1

0x813d,	// (0x00013942) list_set_graphic_pane_t1_ParamLimits

0x813d,	// (0x00013942) list_set_graphic_pane_t1

0x9f47,	// (0x0001574c) popup_midp_note_alarm_window_t6_ParamLimits

0x9f47,	// (0x0001574c) popup_midp_note_alarm_window_t6

0x9f59,	// (0x0001575e) popup_midp_note_alarm_window_t7_ParamLimits

0x9f59,	// (0x0001575e) popup_midp_note_alarm_window_t7

0x9f6b,	// (0x00015770) popup_midp_note_alarm_window_t8_ParamLimits

0x9f6b,	// (0x00015770) popup_midp_note_alarm_window_t8

0x9f7d,	// (0x00015782) popup_midp_note_alarm_window_t9_ParamLimits

0x9f7d,	// (0x00015782) popup_midp_note_alarm_window_t9

0x9f8f,	// (0x00015794) popup_midp_note_alarm_window_t10_ParamLimits

0x9f8f,	// (0x00015794) popup_midp_note_alarm_window_t10

0x9fa1,	// (0x000157a6) popup_midp_note_alarm_window_t11_ParamLimits

0x9fa1,	// (0x000157a6) popup_midp_note_alarm_window_t11

0x9fb3,	// (0x000157b8) scroll_pane_cp17_ParamLimits

0x9fb3,	// (0x000157b8) scroll_pane_cp17

0x5696,	// (0x00010e9b) volume_small_pane_cp_g1

0x59a7,	// (0x000111ac) volume_small_pane_cp_g2

0x59b0,	// (0x000111b5) volume_small_pane_cp_g3

0x59b9,	// (0x000111be) volume_small_pane_cp_g4

0x59c2,	// (0x000111c7) volume_small_pane_cp_g5

0x59cb,	// (0x000111d0) volume_small_pane_cp_g6

0x59d4,	// (0x000111d9) volume_small_pane_cp_g7

0x59dd,	// (0x000111e2) volume_small_pane_cp_g8

0x59e6,	// (0x000111eb) volume_small_pane_cp_g9

0x59ef,	// (0x000111f4) volume_small_pane_cp_g10

0x8508,	// (0x00013d0d) midp_ticker_pane_g1_ParamLimits

0x8514,	// (0x00013d19) midp_ticker_pane_g2_ParamLimits

0xf76b,	// (0x0001af70) midp_ticker_pane_g_ParamLimits

0x8520,	// (0x00013d25) midp_ticker_pane_t1_ParamLimits

0x8e0a,	// (0x0001460f) aid_fill_nsta_2

0x97e2,	// (0x00014fe7) list_form2_midp_pane

0xa9cd,	// (0x000161d2) midp_editing_number_pane_ParamLimits

0xa9dc,	// (0x000161e1) midp_ticker_pane_ParamLimits

0xb888,	// (0x0001708d) form2_midp_field_pane

0xb8ac,	// (0x000170b1) scroll_pane_cp51

0xb8cc,	// (0x000170d1) form2_midp_button_pane_ParamLimits

0xb8cc,	// (0x000170d1) form2_midp_button_pane

0xb8de,	// (0x000170e3) form2_midp_content_pane_ParamLimits

0xb8de,	// (0x000170e3) form2_midp_content_pane

0xb8f8,	// (0x000170fd) form2_midp_field_choice_group_pane

0xb900,	// (0x00017105) form2_midp_field_pane_g1

0xb908,	// (0x0001710d) form2_midp_field_pane_g2

0xb910,	// (0x00017115) form2_midp_field_pane_g3

0xb918,	// (0x0001711d) form2_midp_field_pane_g4

0x0003,

0xfaef,	// (0x0001b2f4) form2_midp_field_pane_g

0xb920,	// (0x00017125) form2_midp_gauge_slider_pane

0xb928,	// (0x0001712d) form2_midp_gauge_wait_pane

0xb930,	// (0x00017135) form2_midp_image_pane_ParamLimits

0xb930,	// (0x00017135) form2_midp_image_pane

0xb94b,	// (0x00017150) form2_midp_label_pane_ParamLimits

0xb94b,	// (0x00017150) form2_midp_label_pane

0xb96a,	// (0x0001716f) form2_midp_label_pane_cp_ParamLimits

0xb96a,	// (0x0001716f) form2_midp_label_pane_cp

0xb98b,	// (0x00017190) form2_midp_string_pane_ParamLimits

0xb98b,	// (0x00017190) form2_midp_string_pane

0xb99d,	// (0x000171a2) form2_midp_text_pane_ParamLimits

0xb99d,	// (0x000171a2) form2_midp_text_pane

0xb9be,	// (0x000171c3) form2_midp_time_pane

0xb9ce,	// (0x000171d3) input_focus_pane_cp51_ParamLimits

0xb9ce,	// (0x000171d3) input_focus_pane_cp51

0xb9e6,	// (0x000171eb) form2_midp_label_pane_t1_ParamLimits

0xb9e6,	// (0x000171eb) form2_midp_label_pane_t1

0xba2c,	// (0x00017231) form2_mdip_text_pane_t1_ParamLimits

0xba2c,	// (0x00017231) form2_mdip_text_pane_t1

0xba4e,	// (0x00017253) form2_midp_time_pane_t1

0xba69,	// (0x0001726e) form2_midp_gauge_slider_pane_t1

0xba7b,	// (0x00017280) form2_midp_gauge_slider_pane_t2

0xba8d,	// (0x00017292) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf8,	// (0x0001b2fd) form2_midp_gauge_slider_pane_t

0xba9f,	// (0x000172a4) form2_midp_slider_pane

0xbaab,	// (0x000172b0) form2_midp_gauge_wait_pane_t1

0xbab9,	// (0x000172be) form2_midp_wait_pane_ParamLimits

0xbab9,	// (0x000172be) form2_midp_wait_pane

0x94d8,	// (0x00014cdd) list_single_2graphic_pane_cp4_ParamLimits

0x94d8,	// (0x00014cdd) list_single_2graphic_pane_cp4

0xbae4,	// (0x000172e9) list_single_midp_graphic_pane_cp_ParamLimits

0xbae4,	// (0x000172e9) list_single_midp_graphic_pane_cp

0x4068,	// (0x0000f86d) list_highlight_pane_cp20

0xbb08,	// (0x0001730d) list_single_2graphic_pane_g1_cp4

0xae98,	// (0x0001669d) list_single_2graphic_pane_g2_cp4

0xbb10,	// (0x00017315) list_single_2graphic_pane_t1_cp4

0x67a3,	// (0x00011fa8) list_highlight_pane_cp21

0xbb1f,	// (0x00017324) list_single_midp_graphic_pane_g4_cp

0xbb2e,	// (0x00017333) list_single_midp_graphic_pane_t1_cp

0xbb43,	// (0x00017348) form2_mdip_string_pane_t1_ParamLimits

0xbb43,	// (0x00017348) form2_mdip_string_pane_t1

0x4068,	// (0x0000f86d) bg_wml_button_pane_cp2

0x3eef,	// (0x0000f6f4) form2_midp_image_pane_g1

0x728b,	// (0x00012a90) list_double_large_graphic_pane_g5_ParamLimits

0x728b,	// (0x00012a90) list_double_large_graphic_pane_g5

0x8433,	// (0x00013c38) midp_form_pane_ParamLimits

0x67a3,	// (0x00011fa8) main_apps_wheel_pane_ParamLimits

0x8b9e,	// (0x000143a3) popup_preview_window_ParamLimits

0x8b9e,	// (0x000143a3) popup_preview_window

0x8d85,	// (0x0001458a) popup_touch_info_window_ParamLimits

0x8d85,	// (0x0001458a) popup_touch_info_window

0x8da7,	// (0x000145ac) popup_touch_menu_window_ParamLimits

0x8da7,	// (0x000145ac) popup_touch_menu_window

0x3ee5,	// (0x0000f6ea) bg_popup_sub_pane_cp6

0xbbe8,	// (0x000173ed) list_touch_menu_pane

0xbbf0,	// (0x000173f5) list_single_touch_menu_pane_ParamLimits

0xbbf0,	// (0x000173f5) list_single_touch_menu_pane

0xbc0b,	// (0x00017410) list_single_touch_menu_pane_t1

0x67a3,	// (0x00011fa8) bg_popup_sub_pane_cp7_ParamLimits

0x67a3,	// (0x00011fa8) bg_popup_sub_pane_cp7

0xbc19,	// (0x0001741e) heading_sub_pane

0xbc21,	// (0x00017426) list_touch_info_pane_ParamLimits

0xbc21,	// (0x00017426) list_touch_info_pane

0xbc30,	// (0x00017435) list_single_touch_info_pane_ParamLimits

0xbc30,	// (0x00017435) list_single_touch_info_pane

0xbc42,	// (0x00017447) list_single_touch_info_pane_t1

0xbc50,	// (0x00017455) list_single_touch_info_pane_t2

0x0001,

0xfb06,	// (0x0001b30b) list_single_touch_info_pane_t

0x842b,	// (0x00013c30) bg_popup_heading_pane_cp

0xbc5e,	// (0x00017463) heading_sub_pane_t1

0x9447,	// (0x00014c4c) bg_popup_preview_window_pane_cp_ParamLimits

0x9447,	// (0x00014c4c) bg_popup_preview_window_pane_cp

0xbc19,	// (0x0001741e) heading_preview_pane

0xbc21,	// (0x00017426) list_preview_pane_ParamLimits

0xbc21,	// (0x00017426) list_preview_pane

0xbcae,	// (0x000174b3) popup_preview_window_g1

0xbc30,	// (0x00017435) list_single_preview_pane_ParamLimits

0xbc30,	// (0x00017435) list_single_preview_pane

0xbcb6,	// (0x000174bb) list_single_preview_pane_g1

0xbcbe,	// (0x000174c3) list_single_preview_pane_t1

0xbc42,	// (0x00017447) list_single_preview_pane_t2

0x0001,

0xfb0b,	// (0x0001b310) list_single_preview_pane_t

0xbccc,	// (0x000174d1) bg_popup_heading_pane_cp2_ParamLimits

0xbccc,	// (0x000174d1) bg_popup_heading_pane_cp2

0xbce2,	// (0x000174e7) heading_preview_pane_g1

0xbcea,	// (0x000174ef) heading_preview_pane_t1_ParamLimits

0xbcea,	// (0x000174ef) heading_preview_pane_t1

0x68ac,	// (0x000120b1) soft_indicator_pane_t1_ParamLimits

0x6fb7,	// (0x000127bc) scroll_pane_ParamLimits

0x7be5,	// (0x000133ea) scroll_sc2_left_pane

0x7bee,	// (0x000133f3) scroll_sc2_right_pane

0x7c0d,	// (0x00013412) scroll_bg_pane_g1_ParamLimits

0x7c22,	// (0x00013427) scroll_bg_pane_g2_ParamLimits

0x7c3a,	// (0x0001343f) scroll_bg_pane_g3_ParamLimits

0xf6fa,	// (0x0001aeff) scroll_bg_pane_g_ParamLimits

0x7c0d,	// (0x00013412) scroll_handle_pane_g1_ParamLimits

0x7c5c,	// (0x00013461) scroll_handle_pane_g2_ParamLimits

0x7c3a,	// (0x0001343f) scroll_handle_pane_g3_ParamLimits

0xf701,	// (0x0001af06) scroll_handle_pane_g_ParamLimits

0x87e9,	// (0x00013fee) popup_choice_list_window_ParamLimits

0x87e9,	// (0x00013fee) popup_choice_list_window

0x9247,	// (0x00014a4c) choice_list_pane

0x92f7,	// (0x00014afc) cell_toolbar_pane_t1

0x931f,	// (0x00014b24) toolbar_button_pane_ParamLimits

0xa483,	// (0x00015c88) ai_gene_pane_1_t2_ParamLimits

0xa483,	// (0x00015c88) ai_gene_pane_1_t2

0x0001,

0xf91e,	// (0x0001b123) ai_gene_pane_1_t_ParamLimits

0xf91e,	// (0x0001b123) ai_gene_pane_1_t

0xbd07,	// (0x0001750c) scroll_sc2_left_pane_g1

0xbd07,	// (0x0001750c) scroll_sc2_right_pane_g1

0x87b9,	// (0x00013fbe) bg_popup_sub_pane_cp10

0xbd11,	// (0x00017516) list_choice_list_pane

0xbd28,	// (0x0001752d) list_single_choice_list_pane_ParamLimits

0xbd28,	// (0x0001752d) list_single_choice_list_pane

0xbd3c,	// (0x00017541) list_single_choice_list_pane_g1

0xbd44,	// (0x00017549) list_single_choice_list_pane_t1_ParamLimits

0xbd44,	// (0x00017549) list_single_choice_list_pane_t1

0xbd59,	// (0x0001755e) choice_list_pane_g1

0xbd61,	// (0x00017566) choice_list_pane_t1

0x3ee5,	// (0x0000f6ea) input_focus_pane_cp11

0x7abf,	// (0x000132c4) title_pane_stacon_g2_ParamLimits

0x7abf,	// (0x000132c4) title_pane_stacon_g2

0x0002,

0xf6e0,	// (0x0001aee5) title_pane_stacon_g_ParamLimits

0xf6e0,	// (0x0001aee5) title_pane_stacon_g

0x842b,	// (0x00013c30) cursor_press_pane

0x889f,	// (0x000140a4) popup_fep_hwr_window_ParamLimits

0x889f,	// (0x000140a4) popup_fep_hwr_window

0x8929,	// (0x0001412e) popup_fep_vkb_window_ParamLimits

0x8929,	// (0x0001412e) popup_fep_vkb_window

0xbd6f,	// (0x00017574) cursor_press_pane_g1

0x0002,

0xfb34,	// (0x0001b339) fep_vkb_side_pane_g_ParamLimits

0x5a31,	// (0x00011236) fep_hwr_candidate_pane_ParamLimits

0x5a31,	// (0x00011236) fep_hwr_candidate_pane

0x5a5b,	// (0x00011260) fep_hwr_side_pane_ParamLimits

0x5a5b,	// (0x00011260) fep_hwr_side_pane

0x5a7d,	// (0x00011282) fep_hwr_top_pane_ParamLimits

0x5a7d,	// (0x00011282) fep_hwr_top_pane

0x5a95,	// (0x0001129a) fep_hwr_write_pane_ParamLimits

0x5a95,	// (0x0001129a) fep_hwr_write_pane

0xfb34,	// (0x0001b339) fep_vkb_side_pane_g

0xbd77,	// (0x0001757c) fep_hwr_top_pane_g1

0xbd89,	// (0x0001758e) fep_hwr_top_pane_g2

0x5acf,	// (0x000112d4) fep_hwr_top_pane_g3

0x0002,

0xfb10,	// (0x0001b315) fep_hwr_top_pane_g

0x5ae4,	// (0x000112e9) fep_hwr_top_text_pane

0x7db1,	// (0x000135b6) fep_hwr_top_text_pane_g1

0xbdbf,	// (0x000175c4) fep_hwr_top_text_pane_t1

0x5bee,	// (0x000113f3) fep_hwr_candidate_pane_g1

0xc00a,	// (0x0001780f) fep_vkb_keypad_pane_g3_ParamLimits

0xc00a,	// (0x0001780f) fep_vkb_keypad_pane_g3

0xc036,	// (0x0001783b) fep_vkb_keypad_pane_g4_ParamLimits

0xc036,	// (0x0001783b) fep_vkb_keypad_pane_g4

0xc0ad,	// (0x000178b2) fep_vkb_bottom_pane_g2_ParamLimits

0xc0ad,	// (0x000178b2) fep_vkb_bottom_pane_g2

0x0001,

0xfb3b,	// (0x0001b340) fep_vkb_bottom_pane_g_ParamLimits

0xfb3b,	// (0x0001b340) fep_vkb_bottom_pane_g

0xbd07,	// (0x0001750c) cell_vkb_side_pane_g2

0x0001,

0xfb45,	// (0x0001b34a) cell_vkb_side_pane_g

0xc138,	// (0x0001793d) cell_vkb_side_pane_t1

0xc146,	// (0x0001794b) cell_vkb_side_pane_t1_copy1

0xbd07,	// (0x0001750c) bg_fep_vkb_candidate_pane_g2

0xc28a,	// (0x00017a8f) cell_vkb_candidate_pane_ParamLimits

0xbdcd,	// (0x000175d2) aid_size_cell_vkb_ParamLimits

0xbdcd,	// (0x000175d2) aid_size_cell_vkb

0xc28a,	// (0x00017a8f) cell_vkb_candidate_pane

0x5c15,	// (0x0001141a) bg_popup_fep_shadow_pane_g1

0xbe5f,	// (0x00017664) fep_vkb_bottom_pane_ParamLimits

0xbe5f,	// (0x00017664) fep_vkb_bottom_pane

0xbe9c,	// (0x000176a1) fep_vkb_candidate_pane_ParamLimits

0xbe9c,	// (0x000176a1) fep_vkb_candidate_pane

0xbeb8,	// (0x000176bd) fep_vkb_keypad_pane_ParamLimits

0xbeb8,	// (0x000176bd) fep_vkb_keypad_pane

0xbeeb,	// (0x000176f0) fep_vkb_side_pane_ParamLimits

0xbeeb,	// (0x000176f0) fep_vkb_side_pane

0xbf27,	// (0x0001772c) fep_vkb_top_pane_ParamLimits

0xbf27,	// (0x0001772c) fep_vkb_top_pane

0xbf63,	// (0x00017768) fep_vkb_top_pane_g1_ParamLimits

0xbf63,	// (0x00017768) fep_vkb_top_pane_g1

0xbf72,	// (0x00017777) fep_vkb_top_pane_g2_ParamLimits

0xbf72,	// (0x00017777) fep_vkb_top_pane_g2

0xbf81,	// (0x00017786) fep_vkb_top_pane_g3_ParamLimits

0xbf81,	// (0x00017786) fep_vkb_top_pane_g3

0x0003,

0xfb2b,	// (0x0001b330) fep_vkb_top_pane_g_ParamLimits

0xfb2b,	// (0x0001b330) fep_vkb_top_pane_g

0xbf9f,	// (0x000177a4) fep_vkb_top_text_pane_ParamLimits

0xbf9f,	// (0x000177a4) fep_vkb_top_text_pane

0xbfb0,	// (0x000177b5) fep_vkb_side_pane_g1_ParamLimits

0xbfb0,	// (0x000177b5) fep_vkb_side_pane_g1

0xbff9,	// (0x000177fe) grid_vkb_side_pane_ParamLimits

0xbff9,	// (0x000177fe) grid_vkb_side_pane

0x5c1d,	// (0x00011422) bg_popup_fep_shadow_pane_g2

0x5c26,	// (0x0001142b) bg_popup_fep_shadow_pane_g3

0x5c2e,	// (0x00011433) bg_popup_fep_shadow_pane_g4

0x5c37,	// (0x0001143c) bg_popup_fep_shadow_pane_g5

0x5c41,	// (0x00011446) bg_popup_fep_shadow_pane_g6

0x5c49,	// (0x0001144e) bg_popup_fep_shadow_pane_g7

0x7733,	// (0x00012f38) bg_popup_fep_shadow_pane_g8

0xc058,	// (0x0001785d) grid_vkb_keypad_number_pane_ParamLimits

0xc058,	// (0x0001785d) grid_vkb_keypad_number_pane

0xc06c,	// (0x00017871) grid_vkb_keypad_pane_ParamLimits

0xc06c,	// (0x00017871) grid_vkb_keypad_pane

0xc092,	// (0x00017897) fep_vkb_bottom_pane_g1_ParamLimits

0xc092,	// (0x00017897) fep_vkb_bottom_pane_g1

0xc0bb,	// (0x000178c0) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc0bb,	// (0x000178c0) grid_vkb_keypad_bottom_left_pane

0xc0d0,	// (0x000178d5) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc0d0,	// (0x000178d5) grid_vkb_keypad_bottom_right_pane

0xc0e5,	// (0x000178ea) fep_vkb_top_text_pane_g1

0xc100,	// (0x00017905) fep_vkb_top_text_pane_t1

0xc115,	// (0x0001791a) cell_vkb_side_pane_ParamLimits

0xc115,	// (0x0001791a) cell_vkb_side_pane

0xbd07,	// (0x0001750c) cell_vkb_side_pane_g1

0xc154,	// (0x00017959) cell_vkb_keypad_pane_ParamLimits

0xc154,	// (0x00017959) cell_vkb_keypad_pane

0xc1e1,	// (0x000179e6) cell_vkb_keypad_pane_g1

0x0008,

0xfb58,	// (0x0001b35d) bg_popup_fep_shadow_pane_g

0x5c5b,	// (0x00011460) cell_hwr_side_pane_g1

0x5c5b,	// (0x00011460) cell_hwr_side_pane_g2

0xc1eb,	// (0x000179f0) cell_vkb_keypad_pane_t1

0xc1f9,	// (0x000179fe) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc1f9,	// (0x000179fe) cell_vkb_keypad_bottom_left_pane

0xc216,	// (0x00017a1b) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc216,	// (0x00017a1b) cell_vkb_keypad_bottom_right_pane

0xbd07,	// (0x0001750c) cell_vkb_keypad_bottom_left_pane_g1

0xbd07,	// (0x0001750c) cell_vkb_keypad_bottom_right_pane_g1

0xc24f,	// (0x00017a54) cell_vkb_keypad_number_pane_ParamLimits

0xc24f,	// (0x00017a54) cell_vkb_keypad_number_pane

0xc26e,	// (0x00017a73) cell_vkb_keypad_number_pane_g1

0xc278,	// (0x00017a7d) cell_vkb_keypad_number_pane_g2

0xc281,	// (0x00017a86) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb4a,	// (0x0001b34f) cell_vkb_keypad_number_pane_g

0xc1eb,	// (0x000179f0) cell_vkb_keypad_number_pane_t1

0xc2ab,	// (0x00017ab0) fep_vkb_candidate_pane_g1

0x0001,

0xfb6b,	// (0x0001b370) cell_hwr_side_pane_g

0xc2c4,	// (0x00017ac9) cell_hwr_side_pane_t1

0x5c65,	// (0x0001146a) cell_hwr_side_pane_t1_copy1

0x5c73,	// (0x00011478) cell_hwr_candidate_pane_g1

0x5ca2,	// (0x000114a7) cell_hwr_candidate_pane_t1

0xbd07,	// (0x0001750c) cell_vkb_candidate_pane_g2

0xc308,	// (0x00017b0d) cell_vkb_candidate_pane_t1

0x59f8,	// (0x000111fd) bg_popup_fep_shadow_pane_ParamLimits

0x59f8,	// (0x000111fd) bg_popup_fep_shadow_pane

0x5aaf,	// (0x000112b4) bg_fep_hwr_top_pane_g4

0xbd9b,	// (0x000175a0) bg_hwr_side_pane_g1_ParamLimits

0xbd9b,	// (0x000175a0) bg_hwr_side_pane_g1

0x5b22,	// (0x00011327) cell_hwr_side_pane_ParamLimits

0x5b22,	// (0x00011327) cell_hwr_side_pane

0x5b5f,	// (0x00011364) fep_hwr_write_pane_g1_ParamLimits

0x5b5f,	// (0x00011364) fep_hwr_write_pane_g1

0x5b6c,	// (0x00011371) fep_hwr_write_pane_g2_ParamLimits

0x5b6c,	// (0x00011371) fep_hwr_write_pane_g2

0x5b79,	// (0x0001137e) fep_hwr_write_pane_g3_ParamLimits

0x5b79,	// (0x0001137e) fep_hwr_write_pane_g3

0x5b87,	// (0x0001138c) fep_hwr_write_pane_g4_ParamLimits

0x5b87,	// (0x0001138c) fep_hwr_write_pane_g4

0x0005,

0xfb17,	// (0x0001b31c) fep_hwr_write_pane_g_ParamLimits

0xfb17,	// (0x0001b31c) fep_hwr_write_pane_g

0x5aaf,	// (0x000112b4) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x5aaf,	// (0x000112b4) bg_fep_hwr_candidate_pane_g2

0x5b9c,	// (0x000113a1) cell_hwr_candidate_pane_ParamLimits

0x5b9c,	// (0x000113a1) cell_hwr_candidate_pane

0x5bee,	// (0x000113f3) fep_hwr_candidate_pane_g1_ParamLimits

0xbdfb,	// (0x00017600) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xbdfb,	// (0x00017600) bg_popup_fep_shadow_pane_cp2

0xbf91,	// (0x00017796) fep_vkb_top_pane_g4_ParamLimits

0xbf91,	// (0x00017796) fep_vkb_top_pane_g4

0xbfd7,	// (0x000177dc) fep_vkb_side_pane_g2_ParamLimits

0xbfd7,	// (0x000177dc) fep_vkb_side_pane_g2

0x73ef,	// (0x00012bf4) list_setting_pane_t4_ParamLimits

0x73ef,	// (0x00012bf4) list_setting_pane_t4

0x746b,	// (0x00012c70) list_setting_number_pane_t5_ParamLimits

0x746b,	// (0x00012c70) list_setting_number_pane_t5

0x7df3,	// (0x000135f8) list_double_heading_pane_cp2_ParamLimits

0x7df3,	// (0x000135f8) list_double_heading_pane_cp2

0x7605,	// (0x00012e0a) list_double_heading_pane_g1_cp2_ParamLimits

0x7605,	// (0x00012e0a) list_double_heading_pane_g1_cp2

0x7611,	// (0x00012e16) list_double_heading_pane_g2_cp2_ParamLimits

0x7611,	// (0x00012e16) list_double_heading_pane_g2_cp2

0xc316,	// (0x00017b1b) list_double_heading_pane_t1_cp2_ParamLimits

0xc316,	// (0x00017b1b) list_double_heading_pane_t1_cp2

0xc32c,	// (0x00017b31) list_double_heading_pane_t2_cp2_ParamLimits

0xc32c,	// (0x00017b31) list_double_heading_pane_t2_cp2

0x3edd,	// (0x0000f6e2) aid_value_unit2

0x4d50,	// (0x00010555) popup_preview_fixed_window

0x6a47,	// (0x0001224c) bg_popup_preview_window_pane_cp02

0xc33e,	// (0x00017b43) list_preview_fixed_pane

0xc384,	// (0x00017b89) list_empty_pane_fp_ParamLimits

0xc384,	// (0x00017b89) list_empty_pane_fp

0xc384,	// (0x00017b89) list_single_cale_day_pane_fp_ParamLimits

0xc384,	// (0x00017b89) list_single_cale_day_pane_fp

0xc384,	// (0x00017b89) list_single_graphic_heading_pane_fp_ParamLimits

0xc384,	// (0x00017b89) list_single_graphic_heading_pane_fp

0xc384,	// (0x00017b89) list_single_graphic_pane_fp_ParamLimits

0xc384,	// (0x00017b89) list_single_graphic_pane_fp

0xc384,	// (0x00017b89) list_single_heading_pane_fp_ParamLimits

0xc384,	// (0x00017b89) list_single_heading_pane_fp

0xc384,	// (0x00017b89) list_single_pane_fp_ParamLimits

0xc384,	// (0x00017b89) list_single_pane_fp

0xc39d,	// (0x00017ba2) list_single_pane_fp_g1_ParamLimits

0xc39d,	// (0x00017ba2) list_single_pane_fp_g1

0xc3a9,	// (0x00017bae) list_single_pane_fp_g2_ParamLimits

0xc3a9,	// (0x00017bae) list_single_pane_fp_g2

0xc3b5,	// (0x00017bba) list_single_pane_fp_g3_ParamLimits

0xc3b5,	// (0x00017bba) list_single_pane_fp_g3

0xc3c9,	// (0x00017bce) list_single_pane_fp_g4_ParamLimits

0xc3c9,	// (0x00017bce) list_single_pane_fp_g4

0x0003,

0xfb7e,	// (0x0001b383) list_single_pane_fp_g_ParamLimits

0xfb7e,	// (0x0001b383) list_single_pane_fp_g

0xc3d5,	// (0x00017bda) list_single_pane_fp_t1_ParamLimits

0xc3d5,	// (0x00017bda) list_single_pane_fp_t1

0xc3ec,	// (0x00017bf1) list_single_graphic_pane_fp_g1_ParamLimits

0xc3ec,	// (0x00017bf1) list_single_graphic_pane_fp_g1

0xc39d,	// (0x00017ba2) list_single_graphic_pane_fp_g2_ParamLimits

0xc39d,	// (0x00017ba2) list_single_graphic_pane_fp_g2

0xc3a9,	// (0x00017bae) list_single_graphic_pane_fp_g3_ParamLimits

0xc3a9,	// (0x00017bae) list_single_graphic_pane_fp_g3

0xc3b5,	// (0x00017bba) list_single_graphic_pane_fp_g4_ParamLimits

0xc3b5,	// (0x00017bba) list_single_graphic_pane_fp_g4

0xc3c9,	// (0x00017bce) list_single_graphic_pane_fp_g5_ParamLimits

0xc3c9,	// (0x00017bce) list_single_graphic_pane_fp_g5

0x0004,

0xfb87,	// (0x0001b38c) list_single_graphic_pane_fp_g_ParamLimits

0xfb87,	// (0x0001b38c) list_single_graphic_pane_fp_g

0xc3f8,	// (0x00017bfd) list_single_graphic_pane_fp_t1_ParamLimits

0xc3f8,	// (0x00017bfd) list_single_graphic_pane_fp_t1

0xc3ec,	// (0x00017bf1) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xc3ec,	// (0x00017bf1) list_single_graphic_heading_pane_fp_g1

0xc39d,	// (0x00017ba2) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc39d,	// (0x00017ba2) list_single_graphic_heading_pane_fp_g2

0xc3a9,	// (0x00017bae) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xc3a9,	// (0x00017bae) list_single_graphic_heading_pane_fp_g3

0xc3b5,	// (0x00017bba) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xc3b5,	// (0x00017bba) list_single_graphic_heading_pane_fp_g4

0xc3c9,	// (0x00017bce) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc3c9,	// (0x00017bce) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb87,	// (0x0001b38c) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb87,	// (0x0001b38c) list_single_graphic_heading_pane_fp_g

0xc40e,	// (0x00017c13) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xc40e,	// (0x00017c13) list_single_graphic_heading_pane_fp_t1

0xc424,	// (0x00017c29) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xc424,	// (0x00017c29) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb92,	// (0x0001b397) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb92,	// (0x0001b397) list_single_graphic_heading_pane_fp_t

0xc436,	// (0x00017c3b) list_single_cale_day_pane_fp_g1_ParamLimits

0xc436,	// (0x00017c3b) list_single_cale_day_pane_fp_g1

0xc46e,	// (0x00017c73) list_single_cale_day_pane_fp_g2_ParamLimits

0xc46e,	// (0x00017c73) list_single_cale_day_pane_fp_g2

0xc47a,	// (0x00017c7f) list_single_cale_day_pane_fp_g3_ParamLimits

0xc47a,	// (0x00017c7f) list_single_cale_day_pane_fp_g3

0xc4a2,	// (0x00017ca7) list_single_cale_day_pane_fp_g4_ParamLimits

0xc4a2,	// (0x00017ca7) list_single_cale_day_pane_fp_g4

0xc4c6,	// (0x00017ccb) list_single_cale_day_pane_fp_g5_ParamLimits

0xc4c6,	// (0x00017ccb) list_single_cale_day_pane_fp_g5

0x0004,

0xfb97,	// (0x0001b39c) list_single_cale_day_pane_fp_g_ParamLimits

0xfb97,	// (0x0001b39c) list_single_cale_day_pane_fp_g

0xc4ea,	// (0x00017cef) list_single_cale_day_pane_fp_t1_ParamLimits

0xc4ea,	// (0x00017cef) list_single_cale_day_pane_fp_t1

0xc510,	// (0x00017d15) list_single_cale_day_pane_fp_t2_ParamLimits

0xc510,	// (0x00017d15) list_single_cale_day_pane_fp_t2

0xc529,	// (0x00017d2e) list_single_cale_day_pane_fp_t3_ParamLimits

0xc529,	// (0x00017d2e) list_single_cale_day_pane_fp_t3

0x0002,

0xfba2,	// (0x0001b3a7) list_single_cale_day_pane_fp_t_ParamLimits

0xfba2,	// (0x0001b3a7) list_single_cale_day_pane_fp_t

0xc39d,	// (0x00017ba2) list_empty_pane_fp_g1_ParamLimits

0xc39d,	// (0x00017ba2) list_empty_pane_fp_g1

0xc542,	// (0x00017d47) list_empty_pane_fp_t1

0xc550,	// (0x00017d55) list_empty_pane_fp_t2

0x0001,

0xfba9,	// (0x0001b3ae) list_empty_pane_fp_t

0xc39d,	// (0x00017ba2) list_single_heading_pane_fp_g1_ParamLimits

0xc39d,	// (0x00017ba2) list_single_heading_pane_fp_g1

0xc3a9,	// (0x00017bae) list_single_heading_pane_fp_g2_ParamLimits

0xc3a9,	// (0x00017bae) list_single_heading_pane_fp_g2

0xc3b5,	// (0x00017bba) list_single_heading_pane_fp_g3_ParamLimits

0xc3b5,	// (0x00017bba) list_single_heading_pane_fp_g3

0x0002,

0xfbae,	// (0x0001b3b3) list_single_heading_pane_fp_g_ParamLimits

0xfbae,	// (0x0001b3b3) list_single_heading_pane_fp_g

0xc55e,	// (0x00017d63) list_single_heading_pane_fp_t1_ParamLimits

0xc55e,	// (0x00017d63) list_single_heading_pane_fp_t1

0xc570,	// (0x00017d75) list_single_heading_pane_fp_t2_ParamLimits

0xc570,	// (0x00017d75) list_single_heading_pane_fp_t2

0x0001,

0xfbb5,	// (0x0001b3ba) list_single_heading_pane_fp_t_ParamLimits

0xfbb5,	// (0x0001b3ba) list_single_heading_pane_fp_t

0x7956,	// (0x0001315b) aid_size_cell_fast

0x69b9,	// (0x000121be) soft_indicator_pane_cp1_t1

0x7993,	// (0x00013198) cell_app_pane_cp2_ParamLimits

0x7993,	// (0x00013198) cell_app_pane_cp2

0x5a1a,	// (0x0001121f) fep_hwr_candidate_drop_down_list_pane

0x5c08,	// (0x0001140d) fep_hwr_candidate_pane_g3_ParamLimits

0x5c08,	// (0x0001140d) fep_hwr_candidate_pane_g3

0x35f7,	// (0x0000edfc) fep_hwr_candidate_pane_g4_ParamLimits

0x35f7,	// (0x0000edfc) fep_hwr_candidate_pane_g4

0x0002,

0xfb24,	// (0x0001b329) fep_hwr_candidate_pane_g_ParamLimits

0xfb24,	// (0x0001b329) fep_hwr_candidate_pane_g

0xbe8b,	// (0x00017690) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xbe8b,	// (0x00017690) fep_vkb_candidate_drop_down_list_pane

0xc2b3,	// (0x00017ab8) fep_vkb_candidate_pane_g3

0xc2bb,	// (0x00017ac0) fep_vkb_candidate_pane_g4

0x0002,

0xfb51,	// (0x0001b356) fep_vkb_candidate_pane_g

0x5c73,	// (0x00011478) cell_hwr_candidate_pane_g1_ParamLimits

0x5c81,	// (0x00011486) cell_hwr_candidate_pane_g3_ParamLimits

0x5c81,	// (0x00011486) cell_hwr_candidate_pane_g3

0xe3a9,	// (0x00019bae) cell_hwr_candidate_pane_g4_ParamLimits

0xe3a9,	// (0x00019bae) cell_hwr_candidate_pane_g4

0x0002,

0xfb70,	// (0x0001b375) cell_hwr_candidate_pane_g_ParamLimits

0xfb70,	// (0x0001b375) cell_hwr_candidate_pane_g

0xc2d2,	// (0x00017ad7) cell_vkb_candidate_pane_g3_ParamLimits

0xc2d2,	// (0x00017ad7) cell_vkb_candidate_pane_g3

0xc2ed,	// (0x00017af2) cell_vkb_candidate_pane_g4_ParamLimits

0xc2ed,	// (0x00017af2) cell_vkb_candidate_pane_g4

0xc586,	// (0x00017d8b) cell_app_pane_cp2_g1_ParamLimits

0xc586,	// (0x00017d8b) cell_app_pane_cp2_g1

0xc5a4,	// (0x00017da9) cell_app_pane_cp2_g2_ParamLimits

0xc5a4,	// (0x00017da9) cell_app_pane_cp2_g2

0x0001,

0xfbba,	// (0x0001b3bf) cell_app_pane_cp2_g_ParamLimits

0xfbba,	// (0x0001b3bf) cell_app_pane_cp2_g

0xc5b0,	// (0x00017db5) cell_app_pane_cp2_t1_ParamLimits

0xc5b0,	// (0x00017db5) cell_app_pane_cp2_t1

0x75df,	// (0x00012de4) grid_highlight_pane_cp1_ParamLimits

0x75df,	// (0x00012de4) grid_highlight_pane_cp1

0x5cc0,	// (0x000114c5) cell_hwr_candidate_pane_cp1_ParamLimits

0x5cc0,	// (0x000114c5) cell_hwr_candidate_pane_cp1

0x5c73,	// (0x00011478) fep_hwr_candidate_drop_down_list_pane_g1

0x5ce4,	// (0x000114e9) fep_hwr_candidate_drop_down_list_pane_g2

0x5cf1,	// (0x000114f6) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbbf,	// (0x0001b3c4) fep_hwr_candidate_drop_down_list_pane_g

0x5cfe,	// (0x00011503) fep_hwr_candidate_drop_down_list_scroll_pane

0x5d07,	// (0x0001150c) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x5d07,	// (0x0001150c) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x5d14,	// (0x00011519) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x5d14,	// (0x00011519) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x5d21,	// (0x00011526) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x5d21,	// (0x00011526) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x5d2e,	// (0x00011533) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x5d2e,	// (0x00011533) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x5d49,	// (0x0001154e) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x5d49,	// (0x0001154e) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x5d64,	// (0x00011569) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x5d64,	// (0x00011569) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x5d7f,	// (0x00011584) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x5d7f,	// (0x00011584) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x5d9a,	// (0x0001159f) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x5d9a,	// (0x0001159f) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc6,	// (0x0001b3cb) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc6,	// (0x0001b3cb) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc5c2,	// (0x00017dc7) cell_vkb_candidate_pane_cp1_ParamLimits

0xc5c2,	// (0x00017dc7) cell_vkb_candidate_pane_cp1

0xbf91,	// (0x00017796) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xbf91,	// (0x00017796) fep_vkb_candidate_drop_down_list_pane_g1

0xc5e8,	// (0x00017ded) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc5e8,	// (0x00017ded) fep_vkb_candidate_drop_down_list_pane_g2

0xc5f5,	// (0x00017dfa) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc5f5,	// (0x00017dfa) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbd7,	// (0x0001b3dc) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbd7,	// (0x0001b3dc) fep_vkb_candidate_drop_down_list_pane_g

0xc602,	// (0x00017e07) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc602,	// (0x00017e07) fep_vkb_candidate_drop_down_list_scroll_pane

0xc60f,	// (0x00017e14) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc60f,	// (0x00017e14) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc61c,	// (0x00017e21) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc61c,	// (0x00017e21) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc628,	// (0x00017e2d) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc628,	// (0x00017e2d) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc634,	// (0x00017e39) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc634,	// (0x00017e39) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc655,	// (0x00017e5a) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc655,	// (0x00017e5a) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc676,	// (0x00017e7b) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc676,	// (0x00017e7b) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc697,	// (0x00017e9c) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc697,	// (0x00017e9c) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc6b8,	// (0x00017ebd) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc6b8,	// (0x00017ebd) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbde,	// (0x0001b3e3) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbde,	// (0x0001b3e3) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x66cd,	// (0x00011ed2) title_pane_g1_ParamLimits

0x66da,	// (0x00011edf) title_pane_g2_ParamLimits

0xf56a,	// (0x0001ad6f) title_pane_g_ParamLimits

0x7da1,	// (0x000135a6) aid_call2_pane

0x7da9,	// (0x000135ae) aid_call_pane

0x7db1,	// (0x000135b6) popup_clock_analogue_window_g1

0x7db1,	// (0x000135b6) popup_clock_analogue_window_g2

0x50c2,	// (0x000108c7) popup_clock_analogue_window_g3

0x50cb,	// (0x000108d0) popup_clock_analogue_window_g4

0x3eef,	// (0x0000f6f4) popup_clock_analogue_window_g5

0x0004,

0xf70f,	// (0x0001af14) popup_clock_analogue_window_g

0x50d3,	// (0x000108d8) popup_clock_analogue_window_t1

0x50e1,	// (0x000108e6) clock_digital_number_pane_ParamLimits

0x50e1,	// (0x000108e6) clock_digital_number_pane

0x50ed,	// (0x000108f2) clock_digital_number_pane_cp02_ParamLimits

0x50ed,	// (0x000108f2) clock_digital_number_pane_cp02

0x50f9,	// (0x000108fe) clock_digital_number_pane_cp03_ParamLimits

0x50f9,	// (0x000108fe) clock_digital_number_pane_cp03

0x5105,	// (0x0001090a) clock_digital_number_pane_cp04_ParamLimits

0x5105,	// (0x0001090a) clock_digital_number_pane_cp04

0x5111,	// (0x00010916) clock_digital_separator_pane_ParamLimits

0x5111,	// (0x00010916) clock_digital_separator_pane

0x511d,	// (0x00010922) popup_clock_digital_window_t1_ParamLimits

0x511d,	// (0x00010922) popup_clock_digital_window_t1

0x3eef,	// (0x0000f6f4) clock_digital_number_pane_g1

0x3eef,	// (0x0000f6f4) clock_digital_number_pane_g2

0x0001,

0xf71a,	// (0x0001af1f) clock_digital_number_pane_g

0x3eef,	// (0x0000f6f4) clock_digital_separator_pane_g1

0x3eef,	// (0x0000f6f4) clock_digital_separator_pane_g2

0x0001,

0xf71a,	// (0x0001af1f) clock_digital_separator_pane_g

0x8df4,	// (0x000145f9) aid_fill_nsta_ParamLimits

0x8f44,	// (0x00014749) indicator_nsta_pane_ParamLimits

0x90d4,	// (0x000148d9) popup_clock_analogue_window

0x90d4,	// (0x000148d9) popup_clock_digital_window

0x67a3,	// (0x00011fa8) grid_indicator_nsta_pane_ParamLimits

0xb695,	// (0x00016e9a) clock_nsta_pane_t2

0x0001,

0xfaa4,	// (0x0001b2a9) clock_nsta_pane_t

0x5086,	// (0x0001088b) aid_size_max_handle

0x5090,	// (0x00010895) aid_size_min_handle

0x842b,	// (0x00013c30) editor_scroll_pane

0xc6d3,	// (0x00017ed8) ex_editor_pane

0x78c3,	// (0x000130c8) scroll_pane_cp13

0x6fe3,	// (0x000127e8) scroll_pane_cp14

0x7ddb,	// (0x000135e0) scroll_pane_cp36

0x7e09,	// (0x0001360e) list_single_graphic_hl_pane_cp2_ParamLimits

0x7e09,	// (0x0001360e) list_single_graphic_hl_pane_cp2

0xaa6d,	// (0x00016272) list_single_graphic_hl_pane_ParamLimits

0xaa6d,	// (0x00016272) list_single_graphic_hl_pane

0xc6db,	// (0x00017ee0) aid_size_min_hl_cp1

0xc6e4,	// (0x00017ee9) list_highlight_pane_cp34_ParamLimits

0xc6e4,	// (0x00017ee9) list_highlight_pane_cp34

0xc6f5,	// (0x00017efa) list_single_graphic_hl_pane_g1_ParamLimits

0xc6f5,	// (0x00017efa) list_single_graphic_hl_pane_g1

0xc702,	// (0x00017f07) list_single_graphic_hl_pane_g2_ParamLimits

0xc702,	// (0x00017f07) list_single_graphic_hl_pane_g2

0xc702,	// (0x00017f07) list_single_graphic_hl_pane_g3_ParamLimits

0xc702,	// (0x00017f07) list_single_graphic_hl_pane_g3

0xafb6,	// (0x000167bb) list_single_graphic_hl_pane_g4_ParamLimits

0xafb6,	// (0x000167bb) list_single_graphic_hl_pane_g4

0xc70e,	// (0x00017f13) list_single_graphic_hl_pane_g5_ParamLimits

0xc70e,	// (0x00017f13) list_single_graphic_hl_pane_g5

0x0004,

0xfbef,	// (0x0001b3f4) list_single_graphic_hl_pane_g_ParamLimits

0xfbef,	// (0x0001b3f4) list_single_graphic_hl_pane_g

0xc722,	// (0x00017f27) list_single_graphic_hl_pane_t1_ParamLimits

0xc722,	// (0x00017f27) list_single_graphic_hl_pane_t1

0xc738,	// (0x00017f3d) aid_size_min_hl_cp2

0xc741,	// (0x00017f46) list_highlight_pane_cp34_cp2_ParamLimits

0xc741,	// (0x00017f46) list_highlight_pane_cp34_cp2

0xc6f5,	// (0x00017efa) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc6f5,	// (0x00017efa) list_single_graphic_hl_pane_g1_cp2

0xc74e,	// (0x00017f53) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc74e,	// (0x00017f53) list_single_graphic_hl_pane_g2_cp2

0xc75a,	// (0x00017f5f) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc75a,	// (0x00017f5f) list_single_graphic_hl_pane_g3_cp2

0x6ff7,	// (0x000127fc) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x6ff7,	// (0x000127fc) list_single_graphic_hl_pane_g4_cp2

0xc768,	// (0x00017f6d) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc768,	// (0x00017f6d) list_single_graphic_hl_pane_g5_cp2

0x53d6,	// (0x00010bdb) control_pane_g4_ParamLimits

0x53d6,	// (0x00010bdb) control_pane_g4

0x87b9,	// (0x00013fbe) bg_popup_sub_pane_cp10_ParamLimits

0xbd11,	// (0x00017516) list_choice_list_pane_ParamLimits

0xbd20,	// (0x00017525) scroll_pane_cp23

0x6a47,	// (0x0001224c) bg_popup_preview_window_pane_cp02_ParamLimits

0xc33e,	// (0x00017b43) list_preview_fixed_pane_ParamLimits

0xc354,	// (0x00017b59) list_preview_fixed_pane_cp_ParamLimits

0xc354,	// (0x00017b59) list_preview_fixed_pane_cp

0xc360,	// (0x00017b65) popup_preview_fixed_window_g1_ParamLimits

0xc360,	// (0x00017b65) popup_preview_fixed_window_g1

0xc36c,	// (0x00017b71) popup_preview_fixed_window_g2_ParamLimits

0xc36c,	// (0x00017b71) popup_preview_fixed_window_g2

0x0002,

0xfb77,	// (0x0001b37c) popup_preview_fixed_window_g_ParamLimits

0xfb77,	// (0x0001b37c) popup_preview_fixed_window_g

0x4ff8,	// (0x000107fd) aid_navi_side_left_pane_ParamLimits

0x500d,	// (0x00010812) aid_navi_side_right_pane_ParamLimits

0x5025,	// (0x0001082a) navi_icon_pane_stacon_ParamLimits

0x5039,	// (0x0001083e) navi_navi_pane_stacon_ParamLimits

0x5025,	// (0x0001082a) navi_text_pane_stacon_ParamLimits

0x3ee5,	// (0x0000f6ea) main_text_info_pane

0xc792,	// (0x00017f97) listscroll_text_info_pane

0xc79a,	// (0x00017f9f) list_text_info_pane_ParamLimits

0xc79a,	// (0x00017f9f) list_text_info_pane

0xc7a9,	// (0x00017fae) scroll_pane_cp24_ParamLimits

0xc7a9,	// (0x00017fae) scroll_pane_cp24

0xc7c7,	// (0x00017fcc) list_text_info_pane_t1_ParamLimits

0xc7c7,	// (0x00017fcc) list_text_info_pane_t1

0x8807,	// (0x0001400c) popup_fast_swap2_window_ParamLimits

0x8807,	// (0x0001400c) popup_fast_swap2_window

0xc7ec,	// (0x00017ff1) aid_size_cell_fast2

0x3ee5,	// (0x0000f6ea) bg_popup_window_pane_cp17

0x980e,	// (0x00015013) heading_pane_cp2

0x6ca7,	// (0x000124ac) listscroll_fast2_pane

0xc7f6,	// (0x00017ffb) grid_fast2_pane

0xc800,	// (0x00018005) listscroll_fast2_pane_g1

0xc80a,	// (0x0001800f) listscroll_fast2_pane_g2

0x0001,

0xfbfa,	// (0x0001b3ff) listscroll_fast2_pane_g

0x78c3,	// (0x000130c8) scroll_pane_cp26

0xc814,	// (0x00018019) cell_fast2_pane_ParamLimits

0xc814,	// (0x00018019) cell_fast2_pane

0xc82b,	// (0x00018030) cell_fast2_pane_g1

0xc834,	// (0x00018039) cell_fast2_pane_g2

0xc83d,	// (0x00018042) cell_fast2_pane_g3

0x0002,

0xfbff,	// (0x0001b404) cell_fast2_pane_g

0x6da0,	// (0x000125a5) grid_highlight_pane_cp9

0x6db5,	// (0x000125ba) main_eswt_pane_ParamLimits

0x6db5,	// (0x000125ba) main_eswt_pane

0xc7be,	// (0x00017fc3) list_single_text_info_pane

0xc845,	// (0x0001804a) eswt_ctrl_button_pane

0xc845,	// (0x0001804a) eswt_ctrl_canvas_pane

0xc84d,	// (0x00018052) eswt_ctrl_combo_pane

0xc845,	// (0x0001804a) eswt_ctrl_default_pane

0xc845,	// (0x0001804a) eswt_ctrl_label_pane

0xc855,	// (0x0001805a) eswt_ctrl_wait_pane

0xc85d,	// (0x00018062) eswt_shell_pane

0x3ee5,	// (0x0000f6ea) listscroll_eswt_app_pane

0xc87d,	// (0x00018082) popup_eswt_tasktip_window_ParamLimits

0xc87d,	// (0x00018082) popup_eswt_tasktip_window

0x9447,	// (0x00014c4c) bg_popup_window_pane_cp18

0xc88e,	// (0x00018093) eswt_control_pane_g1_ParamLimits

0xc88e,	// (0x00018093) eswt_control_pane_g1

0xc89b,	// (0x000180a0) eswt_control_pane_g2_ParamLimits

0xc89b,	// (0x000180a0) eswt_control_pane_g2

0xc8a8,	// (0x000180ad) eswt_control_pane_g3_ParamLimits

0xc8a8,	// (0x000180ad) eswt_control_pane_g3

0xc8b5,	// (0x000180ba) eswt_control_pane_g4_ParamLimits

0xc8b5,	// (0x000180ba) eswt_control_pane_g4

0x0003,

0xfc06,	// (0x0001b40b) eswt_control_pane_g_ParamLimits

0xfc06,	// (0x0001b40b) eswt_control_pane_g

0x75df,	// (0x00012de4) bg_button_pane_ParamLimits

0x75df,	// (0x00012de4) bg_button_pane

0x6db5,	// (0x000125ba) common_borders_pane_copy2_ParamLimits

0x6db5,	// (0x000125ba) common_borders_pane_copy2

0xc8c2,	// (0x000180c7) control_button_pane_g1_ParamLimits

0xc8c2,	// (0x000180c7) control_button_pane_g1

0xc8ce,	// (0x000180d3) control_button_pane_g2_ParamLimits

0xc8ce,	// (0x000180d3) control_button_pane_g2

0xc8da,	// (0x000180df) control_button_pane_g3_ParamLimits

0xc8da,	// (0x000180df) control_button_pane_g3

0x0002,

0xfc0f,	// (0x0001b414) control_button_pane_g_ParamLimits

0xfc0f,	// (0x0001b414) control_button_pane_g

0xc8ee,	// (0x000180f3) control_button_pane_t1

0xc8fc,	// (0x00018101) control_button_pane_t2

0x0001,

0xfc16,	// (0x0001b41b) control_button_pane_t

0x932b,	// (0x00014b30) bg_button_pane_g1

0x933b,	// (0x00014b40) bg_button_pane_g2

0x9333,	// (0x00014b38) bg_button_pane_g3

0x934b,	// (0x00014b50) bg_button_pane_g4

0x9343,	// (0x00014b48) bg_button_pane_g5

0x9353,	// (0x00014b58) bg_button_pane_g6

0x935b,	// (0x00014b60) bg_button_pane_g7

0x936b,	// (0x00014b70) bg_button_pane_g8

0x9363,	// (0x00014b68) bg_button_pane_g9

0x0008,

0xf872,	// (0x0001b077) bg_button_pane_g

0xbccc,	// (0x000174d1) common_borders_pane_ParamLimits

0xbccc,	// (0x000174d1) common_borders_pane

0xc88e,	// (0x00018093) eswt_control_pane_g1_copy1_ParamLimits

0xc88e,	// (0x00018093) eswt_control_pane_g1_copy1

0xc89b,	// (0x000180a0) eswt_control_pane_g2_copy1_ParamLimits

0xc89b,	// (0x000180a0) eswt_control_pane_g2_copy1

0xc8a8,	// (0x000180ad) eswt_control_pane_g3_copy1_ParamLimits

0xc8a8,	// (0x000180ad) eswt_control_pane_g3_copy1

0xc8b5,	// (0x000180ba) eswt_control_pane_g4_copy1_ParamLimits

0xc8b5,	// (0x000180ba) eswt_control_pane_g4_copy1

0xbd07,	// (0x0001750c) bg_eswt_ctrl_canvas_pane_g1

0xbccc,	// (0x000174d1) common_borders_pane_cp2_ParamLimits

0xbccc,	// (0x000174d1) common_borders_pane_cp2

0xbccc,	// (0x000174d1) common_borders_pane_cp3_ParamLimits

0xbccc,	// (0x000174d1) common_borders_pane_cp3

0xc90a,	// (0x0001810f) separator_horizontal_pane

0xc912,	// (0x00018117) separator_vertical_pane

0xc88e,	// (0x00018093) eswt_control_pane_g1_copy2_ParamLimits

0xc88e,	// (0x00018093) eswt_control_pane_g1_copy2

0xc89b,	// (0x000180a0) eswt_control_pane_g2_copy2_ParamLimits

0xc89b,	// (0x000180a0) eswt_control_pane_g2_copy2

0xc8a8,	// (0x000180ad) eswt_control_pane_g3_copy2_ParamLimits

0xc8a8,	// (0x000180ad) eswt_control_pane_g3_copy2

0xc8b5,	// (0x000180ba) eswt_control_pane_g4_copy2_ParamLimits

0xc8b5,	// (0x000180ba) eswt_control_pane_g4_copy2

0x3ee5,	// (0x0000f6ea) common_borders_pane_cp4

0xc91b,	// (0x00018120) separator_horizontal_pane_g1

0xc924,	// (0x00018129) separator_horizontal_pane_g2

0xc92d,	// (0x00018132) separator_horizontal_pane_g3

0x0002,

0xfc1b,	// (0x0001b420) separator_horizontal_pane_g

0xc88e,	// (0x00018093) eswt_control_pane_g1_copy3_ParamLimits

0xc88e,	// (0x00018093) eswt_control_pane_g1_copy3

0xc89b,	// (0x000180a0) eswt_control_pane_g2_copy3_ParamLimits

0xc89b,	// (0x000180a0) eswt_control_pane_g2_copy3

0xc8a8,	// (0x000180ad) eswt_control_pane_g3_copy3_ParamLimits

0xc8a8,	// (0x000180ad) eswt_control_pane_g3_copy3

0xc8b5,	// (0x000180ba) eswt_control_pane_g4_copy3_ParamLimits

0xc8b5,	// (0x000180ba) eswt_control_pane_g4_copy3

0x3ee5,	// (0x0000f6ea) common_borders_pane_cp5

0xc936,	// (0x0001813b) separator_vertical_pane_g1

0xc93f,	// (0x00018144) separator_vertical_pane_g2

0xc948,	// (0x0001814d) separator_vertical_pane_g3

0x0002,

0xfc22,	// (0x0001b427) separator_vertical_pane_g

0xc88e,	// (0x00018093) eswt_control_pane_g1_copy4_ParamLimits

0xc88e,	// (0x00018093) eswt_control_pane_g1_copy4

0xc89b,	// (0x000180a0) eswt_control_pane_g2_copy4_ParamLimits

0xc89b,	// (0x000180a0) eswt_control_pane_g2_copy4

0xc8a8,	// (0x000180ad) eswt_control_pane_g3_copy4_ParamLimits

0xc8a8,	// (0x000180ad) eswt_control_pane_g3_copy4

0xc8b5,	// (0x000180ba) eswt_control_pane_g4_copy4_ParamLimits

0xc8b5,	// (0x000180ba) eswt_control_pane_g4_copy4

0xc951,	// (0x00018156) eswt_ctrl_combo_button_pane

0xc959,	// (0x0001815e) eswt_ctrl_input_pane

0xc961,	// (0x00018166) popup_choice_list_window_cp70

0xc969,	// (0x0001816e) eswt_ctrl_input_pane_t1

0x3ee5,	// (0x0000f6ea) input_focus_pane_cp70

0xbccc,	// (0x000174d1) bg_button_pane_cp70_ParamLimits

0xbccc,	// (0x000174d1) bg_button_pane_cp70

0xc977,	// (0x0001817c) eswt_ctrl_combo_button_pane_g1

0xc97f,	// (0x00018184) wait_bar_pane_cp70

0x9447,	// (0x00014c4c) bg_popup_window_pane_cp70_ParamLimits

0x9447,	// (0x00014c4c) bg_popup_window_pane_cp70

0xc987,	// (0x0001818c) popup_eswt_tasktip_window_t1

0xc99d,	// (0x000181a2) wait_bar_pane_cp71_ParamLimits

0xc99d,	// (0x000181a2) wait_bar_pane_cp71

0xc9a9,	// (0x000181ae) grid_eswt_app_pane

0x7be5,	// (0x000133ea) scroll_pane_cp70

0xc9b2,	// (0x000181b7) cell_eswt_app_pane_ParamLimits

0xc9b2,	// (0x000181b7) cell_eswt_app_pane

0xc9e4,	// (0x000181e9) cell_eswt_app_pane_g1_ParamLimits

0xc9e4,	// (0x000181e9) cell_eswt_app_pane_g1

0xca13,	// (0x00018218) cell_eswt_app_pane_g2_ParamLimits

0xca13,	// (0x00018218) cell_eswt_app_pane_g2

0x0001,

0xfc29,	// (0x0001b42e) cell_eswt_app_pane_g_ParamLimits

0xfc29,	// (0x0001b42e) cell_eswt_app_pane_g

0xca3c,	// (0x00018241) cell_eswt_app_pane_t1_ParamLimits

0xca3c,	// (0x00018241) cell_eswt_app_pane_t1

0xca6e,	// (0x00018273) grid_highlight_pane_cp70_ParamLimits

0xca6e,	// (0x00018273) grid_highlight_pane_cp70

0xa92f,	// (0x00016134) set_content_pane_g1

0x86db,	// (0x00013ee0) status_small_volume_pane

0x5db5,	// (0x000115ba) status_small_volume_pane_g1

0x5dbd,	// (0x000115c2) volume_small2_pane

0x5dc6,	// (0x000115cb) volume_small2_pane_g1

0x5dcf,	// (0x000115d4) volume_small2_pane_g2

0x5dd8,	// (0x000115dd) volume_small2_pane_g3

0x5de1,	// (0x000115e6) volume_small2_pane_g4

0x5dea,	// (0x000115ef) volume_small2_pane_g5

0x5df3,	// (0x000115f8) volume_small2_pane_g6

0x5dfc,	// (0x00011601) volume_small2_pane_g7

0x5e05,	// (0x0001160a) volume_small2_pane_g8

0x5e0e,	// (0x00011613) volume_small2_pane_g9

0x5e17,	// (0x0001161c) volume_small2_pane_g10

0x0009,

0xfc2e,	// (0x0001b433) volume_small2_pane_g

0xc0e5,	// (0x000178ea) fep_vkb_top_text_pane_g1_ParamLimits

0xc100,	// (0x00017905) fep_vkb_top_text_pane_t1_ParamLimits

0xc378,	// (0x00017b7d) popup_preview_fixed_window_g3_ParamLimits

0xc378,	// (0x00017b7d) popup_preview_fixed_window_g3

0x8d18,	// (0x0001451d) popup_toolbar_trans_pane

0xa7d4,	// (0x00015fd9) aid_height_set_list_ParamLimits

0xa7e5,	// (0x00015fea) aid_size_parent_ParamLimits

0x87b9,	// (0x00013fbe) list_highlight_pane_cp2_ParamLimits

0xa92f,	// (0x00016134) set_content_pane_g1_ParamLimits

0xaa81,	// (0x00016286) list_single_image_pane_ParamLimits

0xaa81,	// (0x00016286) list_single_image_pane

0xca7a,	// (0x0001827f) aid_size_cell_image_ParamLimits

0xca7a,	// (0x0001827f) aid_size_cell_image

0xca87,	// (0x0001828c) grid_single_image_pane_ParamLimits

0xca87,	// (0x0001828c) grid_single_image_pane

0x7605,	// (0x00012e0a) list_single_image_pane_g1_ParamLimits

0x7605,	// (0x00012e0a) list_single_image_pane_g1

0x7611,	// (0x00012e16) list_single_image_pane_g2_ParamLimits

0x7611,	// (0x00012e16) list_single_image_pane_g2

0x0001,

0xfc43,	// (0x0001b448) list_single_image_pane_g_ParamLimits

0xfc43,	// (0x0001b448) list_single_image_pane_g

0xca95,	// (0x0001829a) list_single_image_pane_t1_ParamLimits

0xca95,	// (0x0001829a) list_single_image_pane_t1

0xcaab,	// (0x000182b0) cell_image_list_pane_ParamLimits

0xcaab,	// (0x000182b0) cell_image_list_pane

0xcac1,	// (0x000182c6) cell_image_list_pane_g1

0xcaca,	// (0x000182cf) cell_image_list_pane_g2

0x0001,

0xfc48,	// (0x0001b44d) cell_image_list_pane_g

0xcad3,	// (0x000182d8) aid_size_cell_tb_trans_pane

0x75df,	// (0x00012de4) bg_tb_trans_pane

0xcae5,	// (0x000182ea) grid_tb_trans_pane

0x932b,	// (0x00014b30) bg_tb_trans_pane_g1

0x933b,	// (0x00014b40) bg_tb_trans_pane_g2

0x9333,	// (0x00014b38) bg_tb_trans_pane_g3

0x934b,	// (0x00014b50) bg_tb_trans_pane_g4

0x9343,	// (0x00014b48) bg_tb_trans_pane_g5

0x936b,	// (0x00014b70) bg_tb_trans_pane_g6

0x9363,	// (0x00014b68) bg_tb_trans_pane_g7

0x9353,	// (0x00014b58) bg_tb_trans_pane_g8

0x935b,	// (0x00014b60) bg_tb_trans_pane_g9

0x0008,

0xfc4d,	// (0x0001b452) bg_tb_trans_pane_g

0xcaf9,	// (0x000182fe) cell_toolbar_trans_pane_ParamLimits

0xcaf9,	// (0x000182fe) cell_toolbar_trans_pane

0xbd07,	// (0x0001750c) cell_toolbar_trans_pane_g1

0xb890,	// (0x00017095) list_form2_midp_pane_t1

0xb89e,	// (0x000170a3) list_form2_midp_pane_t2

0x0001,

0xfaea,	// (0x0001b2ef) list_form2_midp_pane_t

0xb8ac,	// (0x000170b1) scroll_pane_cp51_ParamLimits

0xbac9,	// (0x000172ce) form2_midp_wait_pane_g1

0xbad2,	// (0x000172d7) form2_midp_wait_pane_g2

0xbadb,	// (0x000172e0) form2_midp_wait_pane_g3

0x0002,

0xfaff,	// (0x0001b304) form2_midp_wait_pane_g

0x67a3,	// (0x00011fa8) list_highlight_pane_cp21_ParamLimits

0xbb1f,	// (0x00017324) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbb2e,	// (0x00017333) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xaa26,	// (0x0001622b) list_single_2graphic_im_pane_ParamLimits

0xaa26,	// (0x0001622b) list_single_2graphic_im_pane

0xcb1f,	// (0x00018324) list_single_2graphic_im_pane_g1_ParamLimits

0xcb1f,	// (0x00018324) list_single_2graphic_im_pane_g1

0xcb30,	// (0x00018335) list_single_2graphic_im_pane_g2_ParamLimits

0xcb30,	// (0x00018335) list_single_2graphic_im_pane_g2

0xcb3c,	// (0x00018341) list_single_2graphic_im_pane_g3_ParamLimits

0xcb3c,	// (0x00018341) list_single_2graphic_im_pane_g3

0x0003,

0xfc60,	// (0x0001b465) list_single_2graphic_im_pane_g_ParamLimits

0xfc60,	// (0x0001b465) list_single_2graphic_im_pane_g

0xcb5c,	// (0x00018361) list_single_2graphic_im_pane_t1_ParamLimits

0xcb5c,	// (0x00018361) list_single_2graphic_im_pane_t1

0xc384,	// (0x00017b89) list_single_graphic_2heading_pane_fp_ParamLimits

0xc384,	// (0x00017b89) list_single_graphic_2heading_pane_fp

0xc3ec,	// (0x00017bf1) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xc3ec,	// (0x00017bf1) list_single_graphic_2heading_pane_fp_g1

0xc39d,	// (0x00017ba2) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc39d,	// (0x00017ba2) list_single_graphic_2heading_pane_fp_g2

0xc3a9,	// (0x00017bae) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xc3a9,	// (0x00017bae) list_single_graphic_2heading_pane_fp_g3

0xc3b5,	// (0x00017bba) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xc3b5,	// (0x00017bba) list_single_graphic_2heading_pane_fp_g4

0xc3c9,	// (0x00017bce) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc3c9,	// (0x00017bce) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb87,	// (0x0001b38c) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb87,	// (0x0001b38c) list_single_graphic_2heading_pane_fp_g

0xcb8d,	// (0x00018392) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xcb8d,	// (0x00018392) list_single_graphic_2heading_pane_fp_t1

0xc424,	// (0x00017c29) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xc424,	// (0x00017c29) list_single_graphic_2heading_pane_fp_t2

0xcba3,	// (0x000183a8) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xcba3,	// (0x000183a8) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc69,	// (0x0001b46e) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc69,	// (0x0001b46e) list_single_graphic_2heading_pane_fp_t

0xbda7,	// (0x000175ac) fep_hwr_write_pane_g5_ParamLimits

0xbda7,	// (0x000175ac) fep_hwr_write_pane_g5

0xbdb3,	// (0x000175b8) fep_hwr_write_pane_g6_ParamLimits

0xbdb3,	// (0x000175b8) fep_hwr_write_pane_g6

0xc85d,	// (0x00018062) eswt_shell_pane_ParamLimits

0x9447,	// (0x00014c4c) bg_popup_window_pane_cp18_ParamLimits

0xa703,	// (0x00015f08) heading_pane_cp70

0xc987,	// (0x0001818c) popup_eswt_tasktip_window_t1_ParamLimits

0x8e4b,	// (0x00014650) aid_touch_tab_arrow_left

0x8e5a,	// (0x0001465f) aid_touch_tab_arrow_right

0x66eb,	// (0x00011ef0) title_pane_g3_ParamLimits

0x66eb,	// (0x00011ef0) title_pane_g3

0x74ae,	// (0x00012cb3) set_value_pane_g1

0x8d18,	// (0x0001451d) popup_toolbar_trans_pane_ParamLimits

0xcad3,	// (0x000182d8) aid_size_cell_tb_trans_pane_ParamLimits

0x75df,	// (0x00012de4) bg_tb_trans_pane_ParamLimits

0xcae5,	// (0x000182ea) grid_tb_trans_pane_ParamLimits

0x6a47,	// (0x0001224c) cont_note_pane_ParamLimits

0x6a47,	// (0x0001224c) cont_note_pane

0x6db5,	// (0x000125ba) cont_snote2_single_text_pane_ParamLimits

0x6db5,	// (0x000125ba) cont_snote2_single_text_pane

0x6db5,	// (0x000125ba) cont_snote2_single_graphic_pane_ParamLimits

0x6db5,	// (0x000125ba) cont_snote2_single_graphic_pane

0x9a2a,	// (0x0001522f) cont_note_wait_pane_ParamLimits

0x9a2a,	// (0x0001522f) cont_note_wait_pane

0x9a2a,	// (0x0001522f) cont_note_image_pane_ParamLimits

0x9a2a,	// (0x0001522f) cont_note_image_pane

0xcbb9,	// (0x000183be) popup_note2_window_g1_ParamLimits

0xcbb9,	// (0x000183be) popup_note2_window_g1

0xcbea,	// (0x000183ef) popup_note2_window_t1_ParamLimits

0xcbea,	// (0x000183ef) popup_note2_window_t1

0xcc2f,	// (0x00018434) popup_note2_window_t2_ParamLimits

0xcc2f,	// (0x00018434) popup_note2_window_t2

0xcc74,	// (0x00018479) popup_note2_window_t3_ParamLimits

0xcc74,	// (0x00018479) popup_note2_window_t3

0xccb9,	// (0x000184be) popup_note2_window_t4_ParamLimits

0xccb9,	// (0x000184be) popup_note2_window_t4

0x6acb,	// (0x000122d0) popup_note2_window_t5_ParamLimits

0x6acb,	// (0x000122d0) popup_note2_window_t5

0x0004,

0xfc75,	// (0x0001b47a) popup_note2_window_t_ParamLimits

0xfc75,	// (0x0001b47a) popup_note2_window_t

0xcce8,	// (0x000184ed) popup_note2_image_window_g1_ParamLimits

0xcce8,	// (0x000184ed) popup_note2_image_window_g1

0xccf4,	// (0x000184f9) popup_note2_image_window_g2_ParamLimits

0xccf4,	// (0x000184f9) popup_note2_image_window_g2

0x0001,

0xfc80,	// (0x0001b485) popup_note2_image_window_g_ParamLimits

0xfc80,	// (0x0001b485) popup_note2_image_window_g

0xcd06,	// (0x0001850b) popup_note2_image_window_t1_ParamLimits

0xcd06,	// (0x0001850b) popup_note2_image_window_t1

0xcd1e,	// (0x00018523) popup_note2_image_window_t2_ParamLimits

0xcd1e,	// (0x00018523) popup_note2_image_window_t2

0xcd36,	// (0x0001853b) popup_note2_image_window_t3_ParamLimits

0xcd36,	// (0x0001853b) popup_note2_image_window_t3

0x0002,

0xfc85,	// (0x0001b48a) popup_note2_image_window_t_ParamLimits

0xfc85,	// (0x0001b48a) popup_note2_image_window_t

0x9a38,	// (0x0001523d) popup_note2_wait_window_g1_ParamLimits

0x9a38,	// (0x0001523d) popup_note2_wait_window_g1

0xcd52,	// (0x00018557) popup_note2_wait_window_g2_ParamLimits

0xcd52,	// (0x00018557) popup_note2_wait_window_g2

0x9a50,	// (0x00015255) popup_note2_wait_window_g3_ParamLimits

0x9a50,	// (0x00015255) popup_note2_wait_window_g3

0x0002,

0xfc8c,	// (0x0001b491) popup_note2_wait_window_g_ParamLimits

0xfc8c,	// (0x0001b491) popup_note2_wait_window_g

0xcd5e,	// (0x00018563) popup_note2_wait_window_t1_ParamLimits

0xcd5e,	// (0x00018563) popup_note2_wait_window_t1

0xcd7c,	// (0x00018581) popup_note2_wait_window_t2_ParamLimits

0xcd7c,	// (0x00018581) popup_note2_wait_window_t2

0xcd9a,	// (0x0001859f) popup_note2_wait_window_t3_ParamLimits

0xcd9a,	// (0x0001859f) popup_note2_wait_window_t3

0xcdac,	// (0x000185b1) popup_note2_wait_window_t4_ParamLimits

0xcdac,	// (0x000185b1) popup_note2_wait_window_t4

0x0003,

0xfc93,	// (0x0001b498) popup_note2_wait_window_t_ParamLimits

0xfc93,	// (0x0001b498) popup_note2_wait_window_t

0xcdbe,	// (0x000185c3) wait_bar2_pane_ParamLimits

0xcdbe,	// (0x000185c3) wait_bar2_pane

0xcdd6,	// (0x000185db) popup_snote2_single_text_window_g1_ParamLimits

0xcdd6,	// (0x000185db) popup_snote2_single_text_window_g1

0xcdfe,	// (0x00018603) popup_snote2_single_text_window_t1_ParamLimits

0xcdfe,	// (0x00018603) popup_snote2_single_text_window_t1

0xce4a,	// (0x0001864f) popup_snote2_single_text_window_t2_ParamLimits

0xce4a,	// (0x0001864f) popup_snote2_single_text_window_t2

0xce96,	// (0x0001869b) popup_snote2_single_text_window_t3_ParamLimits

0xce96,	// (0x0001869b) popup_snote2_single_text_window_t3

0xced7,	// (0x000186dc) popup_snote2_single_text_window_t4_ParamLimits

0xced7,	// (0x000186dc) popup_snote2_single_text_window_t4

0xcf0d,	// (0x00018712) popup_snote2_single_text_window_t5_ParamLimits

0xcf0d,	// (0x00018712) popup_snote2_single_text_window_t5

0x0004,

0xfc9c,	// (0x0001b4a1) popup_snote2_single_text_window_t_ParamLimits

0xfc9c,	// (0x0001b4a1) popup_snote2_single_text_window_t

0xcf38,	// (0x0001873d) popup_snote2_single_graphic_window_g1_ParamLimits

0xcf38,	// (0x0001873d) popup_snote2_single_graphic_window_g1

0xcf60,	// (0x00018765) popup_snote2_single_graphic_window_g2_ParamLimits

0xcf60,	// (0x00018765) popup_snote2_single_graphic_window_g2

0x0001,

0xfca7,	// (0x0001b4ac) popup_snote2_single_graphic_window_g_ParamLimits

0xfca7,	// (0x0001b4ac) popup_snote2_single_graphic_window_g

0xcf88,	// (0x0001878d) popup_snote2_single_graphic_window_t1_ParamLimits

0xcf88,	// (0x0001878d) popup_snote2_single_graphic_window_t1

0xcfd4,	// (0x000187d9) popup_snote2_single_graphic_window_t2_ParamLimits

0xcfd4,	// (0x000187d9) popup_snote2_single_graphic_window_t2

0xce96,	// (0x0001869b) popup_snote2_single_graphic_window_t3_ParamLimits

0xce96,	// (0x0001869b) popup_snote2_single_graphic_window_t3

0xced7,	// (0x000186dc) popup_snote2_single_graphic_window_t4_ParamLimits

0xced7,	// (0x000186dc) popup_snote2_single_graphic_window_t4

0xcf0d,	// (0x00018712) popup_snote2_single_graphic_window_t5_ParamLimits

0xcf0d,	// (0x00018712) popup_snote2_single_graphic_window_t5

0x0004,

0xfcac,	// (0x0001b4b1) popup_snote2_single_graphic_window_t_ParamLimits

0xfcac,	// (0x0001b4b1) popup_snote2_single_graphic_window_t

0xb756,	// (0x00016f5b) clock_nsta_pane_cp2_t1

0xb756,	// (0x00016f5b) clock_nsta_pane_cp2_t2

0x0001,

0xfac0,	// (0x0001b2c5) clock_nsta_pane_cp2_t

0x75f9,	// (0x00012dfe) form_field_data_wide_pane_g1_ParamLimits

0x7605,	// (0x00012e0a) form_field_data_wide_pane_g2_ParamLimits

0x7605,	// (0x00012e0a) form_field_data_wide_pane_g2

0x7611,	// (0x00012e16) form_field_data_wide_pane_g3_ParamLimits

0x7611,	// (0x00012e16) form_field_data_wide_pane_g3

0x0002,

0xf692,	// (0x0001ae97) form_field_data_wide_pane_g_ParamLimits

0xf692,	// (0x0001ae97) form_field_data_wide_pane_g

0xb631,	// (0x00016e36) grid_touch_3_pane_ParamLimits

0xb631,	// (0x00016e36) grid_touch_3_pane

0xd020,	// (0x00018825) cell_touch_3_pane_ParamLimits

0xd020,	// (0x00018825) cell_touch_3_pane

0xbd07,	// (0x0001750c) cell_touch_3_pane_g1

0xbd07,	// (0x0001750c) cell_touch_3_pane_g2

0x0001,

0xfb45,	// (0x0001b34a) cell_touch_3_pane_g

0x6afd,	// (0x00012302) cont_query_data_pane

0x6b05,	// (0x0001230a) cont_query_data_pane_cp1

0xd053,	// (0x00018858) button_value_adjust_pane_cp7

0xd05b,	// (0x00018860) query_popup_pane_cp3

0x7e7b,	// (0x00013680) bg_popup_sub_pane_cp22_ParamLimits

0x513c,	// (0x00010941) navi_navi_volume_pane_cp2

0x5157,	// (0x0001095c) popup_side_volume_key_window_g2

0x5166,	// (0x0001096b) popup_side_volume_key_window_g3

0x0002,

0xf724,	// (0x0001af29) popup_side_volume_key_window_g

0x5183,	// (0x00010988) popup_side_volume_key_window_t2

0x0001,

0xf72b,	// (0x0001af30) popup_side_volume_key_window_t

0x81c2,	// (0x000139c7) popup_side_volume_key_window_ParamLimits

0x71c8,	// (0x000129cd) list_double_graphic_pane_g4_ParamLimits

0x71c8,	// (0x000129cd) list_double_graphic_pane_g4

0xaa55,	// (0x0001625a) list_single_2heading_msg_pane_ParamLimits

0xaa55,	// (0x0001625a) list_single_2heading_msg_pane

0xd08c,	// (0x00018891) list_single_2heading_msg_pane_g1_ParamLimits

0xd08c,	// (0x00018891) list_single_2heading_msg_pane_g1

0x6ff7,	// (0x000127fc) list_single_2heading_msg_pane_g2_ParamLimits

0x6ff7,	// (0x000127fc) list_single_2heading_msg_pane_g2

0xd098,	// (0x0001889d) list_single_2heading_msg_pane_g3_ParamLimits

0xd098,	// (0x0001889d) list_single_2heading_msg_pane_g3

0xd0a4,	// (0x000188a9) list_single_2heading_msg_pane_g4_ParamLimits

0xd0a4,	// (0x000188a9) list_single_2heading_msg_pane_g4

0x0003,

0xfcb7,	// (0x0001b4bc) list_single_2heading_msg_pane_g_ParamLimits

0xfcb7,	// (0x0001b4bc) list_single_2heading_msg_pane_g

0xd0bc,	// (0x000188c1) list_single_2heading_msg_pane_t1_ParamLimits

0xd0bc,	// (0x000188c1) list_single_2heading_msg_pane_t1

0xd0e4,	// (0x000188e9) list_single_2heading_msg_pane_t2_ParamLimits

0xd0e4,	// (0x000188e9) list_single_2heading_msg_pane_t2

0xd113,	// (0x00018918) list_single_2heading_msg_pane_t3_ParamLimits

0xd113,	// (0x00018918) list_single_2heading_msg_pane_t3

0xd14c,	// (0x00018951) list_single_2heading_msg_pane_t4_ParamLimits

0xd14c,	// (0x00018951) list_single_2heading_msg_pane_t4

0x0003,

0xfcc0,	// (0x0001b4c5) list_single_2heading_msg_pane_t_ParamLimits

0xfcc0,	// (0x0001b4c5) list_single_2heading_msg_pane_t

0x66f7,	// (0x00011efc) title_pane_g4_ParamLimits

0x66f7,	// (0x00011efc) title_pane_g4

0x4f48,	// (0x0001074d) title_pane_stacon_g3_ParamLimits

0x4f48,	// (0x0001074d) title_pane_stacon_g3

0xcb50,	// (0x00018355) list_single_2graphic_im_pane_g4_ParamLimits

0xcb50,	// (0x00018355) list_single_2graphic_im_pane_g4

0xa4a0,	// (0x00015ca5) popup_side_volume_key_window_cp

0xad9f,	// (0x000165a4) main_idle_act2_pane_t1

0x557d,	// (0x00010d82) toolbar_button_pane_g10

0x6fad,	// (0x000127b2) popup_toolbar_window_cp1

0xb747,	// (0x00016f4c) clock_nsta_pane_cp_t1

0xb747,	// (0x00016f4c) clock_nsta_pane_cp_t2

0x0001,

0xfabb,	// (0x0001b2c0) clock_nsta_pane_cp_t

0x513c,	// (0x00010941) navi_navi_volume_pane_cp2_ParamLimits

0x514b,	// (0x00010950) popup_side_volume_key_window_g1_ParamLimits

0x5157,	// (0x0001095c) popup_side_volume_key_window_g2_ParamLimits

0x5166,	// (0x0001096b) popup_side_volume_key_window_g3_ParamLimits

0xf724,	// (0x0001af29) popup_side_volume_key_window_g_ParamLimits

0x5a06,	// (0x0001120b) fep_hwr_aid_pane

0x5aaf,	// (0x000112b4) bg_fep_hwr_top_pane_g4_ParamLimits

0xbd77,	// (0x0001757c) fep_hwr_top_pane_g1_ParamLimits

0xbd89,	// (0x0001758e) fep_hwr_top_pane_g2_ParamLimits

0x5acf,	// (0x000112d4) fep_hwr_top_pane_g3_ParamLimits

0xfb10,	// (0x0001b315) fep_hwr_top_pane_g_ParamLimits

0x5ae4,	// (0x000112e9) fep_hwr_top_text_pane_ParamLimits

0xa255,	// (0x00015a5a) aid_touch_tab_arrow_arrow_2

0xa25e,	// (0x00015a63) aid_touch_tab_arrow_left_2

0x5a1a,	// (0x0001121f) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x5a51,	// (0x00011256) fep_hwr_prediction_pane

0xbedf,	// (0x000176e4) fep_vkb_prediction_pane

0xbfe5,	// (0x000177ea) fep_vkb_side_pane_g3_ParamLimits

0xbfe5,	// (0x000177ea) fep_vkb_side_pane_g3

0x5c73,	// (0x00011478) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x5ce4,	// (0x000114e9) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x5cf1,	// (0x000114f6) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbbf,	// (0x0001b3c4) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x5e20,	// (0x00011625) fep_hwr_prediction_pane_g1

0x5e2a,	// (0x0001162f) fep_hwr_prediction_pane_g2

0x5e32,	// (0x00011637) fep_hwr_prediction_pane_g3

0x5e3a,	// (0x0001163f) fep_hwr_prediction_pane_g4

0x0003,

0xfcc9,	// (0x0001b4ce) fep_hwr_prediction_pane_g

0xd171,	// (0x00018976) fep_vkb_prediction_pane_g1

0xd17b,	// (0x00018980) fep_vkb_prediction_pane_g2

0xd183,	// (0x00018988) fep_vkb_prediction_pane_g3

0xd18b,	// (0x00018990) fep_vkb_prediction_pane_g4

0x0003,

0xfcd2,	// (0x0001b4d7) fep_vkb_prediction_pane_g

0x5886,	// (0x0001108b) slider_set_pane_g3

0x589a,	// (0x0001109f) slider_set_pane_g4

0x58b2,	// (0x000110b7) slider_set_pane_g5

0x5886,	// (0x0001108b) slider_set_pane_g6

0x58c8,	// (0x000110cd) slider_set_pane_g7

0xa976,	// (0x0001617b) slider_form_pane_g3

0xa97f,	// (0x00016184) slider_form_pane_g4

0xa987,	// (0x0001618c) slider_form_pane_g5

0xa976,	// (0x0001617b) slider_form_pane_g6

0xa98f,	// (0x00016194) slider_form_pane_g7

0xb099,	// (0x0001689e) slider_set_pane_vc_g3

0xb0a2,	// (0x000168a7) slider_set_pane_vc_g4

0xb0ab,	// (0x000168b0) slider_set_pane_vc_g5

0xb099,	// (0x0001689e) slider_set_pane_vc_g6

0xb0b4,	// (0x000168b9) slider_set_pane_vc_g7

0xb099,	// (0x0001689e) slider_form_pane_vc_g1

0xb0a2,	// (0x000168a7) slider_form_pane_vc_g2

0xb0ab,	// (0x000168b0) slider_form_pane_vc_g3

0xb099,	// (0x0001689e) slider_form_pane_vc_g4

0xb43b,	// (0x00016c40) slider_form_pane_vc_g5

0x0004,

0xfa94,	// (0x0001b299) slider_form_pane_vc_g

0x3ee5,	// (0x0000f6ea) main_idle_act3_pane

0xd193,	// (0x00018998) ai3_links_pane

0xd19c,	// (0x000189a1) popup_ai3_data_window_ParamLimits

0xd19c,	// (0x000189a1) popup_ai3_data_window

0x3ee5,	// (0x0000f6ea) grid_ai3_links_pane

0xd1ba,	// (0x000189bf) cell_ai3_links_pane_ParamLimits

0xd1ba,	// (0x000189bf) cell_ai3_links_pane

0xd1d4,	// (0x000189d9) bg_popup_sub_pane_cp11

0xd1e1,	// (0x000189e6) cell_ai3_links_pane_g1

0x3ee5,	// (0x0000f6ea) bg_popup_sub_pane_cp12

0xd206,	// (0x00018a0b) heading_ai3_data_pane

0xd20e,	// (0x00018a13) list_ai3_gene_pane

0xd21a,	// (0x00018a1f) popup_ai3_data_window_g1

0xd222,	// (0x00018a27) heading_ai3_data_pane_g1

0xd22a,	// (0x00018a2f) heading_ai3_data_pane_t1

0xd238,	// (0x00018a3d) list_double_ai3_gene_pane_ParamLimits

0xd238,	// (0x00018a3d) list_double_ai3_gene_pane

0xd245,	// (0x00018a4a) list_single_ai3_gene_pane_ParamLimits

0xd245,	// (0x00018a4a) list_single_ai3_gene_pane

0xbccc,	// (0x000174d1) list_highlight_pane_cp7_ParamLimits

0xbccc,	// (0x000174d1) list_highlight_pane_cp7

0xd252,	// (0x00018a57) list_single_a13_gene_pane_t1_ParamLimits

0xd252,	// (0x00018a57) list_single_a13_gene_pane_t1

0xd269,	// (0x00018a6e) list_single_ai3_gene_pane_g1

0xd272,	// (0x00018a77) list_single_ai3_gene_pane_g2

0x0001,

0xfcdb,	// (0x0001b4e0) list_single_ai3_gene_pane_g

0xd27a,	// (0x00018a7f) list_double_ai3_gene_pane_g1_ParamLimits

0xd27a,	// (0x00018a7f) list_double_ai3_gene_pane_g1

0xd286,	// (0x00018a8b) list_double_ai3_gene_pane_t1_ParamLimits

0xd286,	// (0x00018a8b) list_double_ai3_gene_pane_t1

0xd2a2,	// (0x00018aa7) list_double_ai3_gene_pane_t2_ParamLimits

0xd2a2,	// (0x00018aa7) list_double_ai3_gene_pane_t2

0xd2b7,	// (0x00018abc) list_double_ai3_gene_pane_t3_ParamLimits

0xd2b7,	// (0x00018abc) list_double_ai3_gene_pane_t3

0x0002,

0xfce0,	// (0x0001b4e5) list_double_ai3_gene_pane_t_ParamLimits

0xfce0,	// (0x0001b4e5) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xd06c,	// (0x00018871) aid_size_min_col_2

0xd076,	// (0x0001887b) aid_size_min_msg_ParamLimits

0xd076,	// (0x0001887b) aid_size_min_msg

0xc0f1,	// (0x000178f6) fep_vkb_top_text_pane_g2_ParamLimits

0xc0f1,	// (0x000178f6) fep_vkb_top_text_pane_g2

0x0001,

0xfb40,	// (0x0001b345) fep_vkb_top_text_pane_g_ParamLimits

0xfb40,	// (0x0001b345) fep_vkb_top_text_pane_g

0x3ee5,	// (0x0000f6ea) main_hc_apps_shell_pane

0xd2d4,	// (0x00018ad9) grid_hc_apps_pane_ParamLimits

0xd2d4,	// (0x00018ad9) grid_hc_apps_pane

0xd2e3,	// (0x00018ae8) list_hc_apps_pane

0xd2eb,	// (0x00018af0) scroll_pane_cp37_ParamLimits

0xd2eb,	// (0x00018af0) scroll_pane_cp37

0xd2f7,	// (0x00018afc) cell_hc_apps_pane_ParamLimits

0xd2f7,	// (0x00018afc) cell_hc_apps_pane

0xd3bd,	// (0x00018bc2) cell_hc_apps_pane_g1_ParamLimits

0xd3bd,	// (0x00018bc2) cell_hc_apps_pane_g1

0xd3ee,	// (0x00018bf3) cell_hc_apps_pane_g2_ParamLimits

0xd3ee,	// (0x00018bf3) cell_hc_apps_pane_g2

0xd40a,	// (0x00018c0f) cell_hc_apps_pane_g3_ParamLimits

0xd40a,	// (0x00018c0f) cell_hc_apps_pane_g3

0x0002,

0xfce7,	// (0x0001b4ec) cell_hc_apps_pane_g_ParamLimits

0xfce7,	// (0x0001b4ec) cell_hc_apps_pane_g

0xd42c,	// (0x00018c31) cell_hc_apps_pane_t1_ParamLimits

0xd42c,	// (0x00018c31) cell_hc_apps_pane_t1

0x6a47,	// (0x0001224c) grid_highlight_pane_cp10_ParamLimits

0x6a47,	// (0x0001224c) grid_highlight_pane_cp10

0xd46c,	// (0x00018c71) list_single_hc_apps_pane_ParamLimits

0xd46c,	// (0x00018c71) list_single_hc_apps_pane

0xd4ab,	// (0x00018cb0) list_single_hc_apps_pane_g1

0xd4c4,	// (0x00018cc9) list_single_hc_apps_pane_g2

0x0001,

0xfcee,	// (0x0001b4f3) list_single_hc_apps_pane_g

0xd4dd,	// (0x00018ce2) list_single_hc_apps_pane_g2_copy1

0xd4f9,	// (0x00018cfe) list_single_hc_apps_pane_t1

0x67a3,	// (0x00011fa8) bg_set_opt_pane_cp_ParamLimits

0x4e72,	// (0x00010677) setting_slider_pane_t1_ParamLimits

0x4e88,	// (0x0001068d) setting_slider_pane_t2_ParamLimits

0x4ea2,	// (0x000106a7) setting_slider_pane_t3_ParamLimits

0xf57a,	// (0x0001ad7f) setting_slider_pane_t_ParamLimits

0x4eba,	// (0x000106bf) slider_set_pane_ParamLimits

0x53ed,	// (0x00010bf2) control_pane_g5_ParamLimits

0x53ed,	// (0x00010bf2) control_pane_g5

0xa797,	// (0x00015f9c) slider_set_pane_g1_ParamLimits

0x587a,	// (0x0001107f) slider_set_pane_g2_ParamLimits

0x5886,	// (0x0001108b) slider_set_pane_g3_ParamLimits

0x589a,	// (0x0001109f) slider_set_pane_g4_ParamLimits

0x58b2,	// (0x000110b7) slider_set_pane_g5_ParamLimits

0x5886,	// (0x0001108b) slider_set_pane_g6_ParamLimits

0x58c8,	// (0x000110cd) slider_set_pane_g7_ParamLimits

0xf970,	// (0x0001b175) slider_set_pane_g_ParamLimits

0x82a7,	// (0x00013aac) navi_icon_text_pane_ParamLimits

0x8e0a,	// (0x0001460f) aid_fill_nsta_2_ParamLimits

0x8e4b,	// (0x00014650) aid_touch_tab_arrow_left_ParamLimits

0x8e5a,	// (0x0001465f) aid_touch_tab_arrow_right_ParamLimits

0x8ec7,	// (0x000146cc) clock_nsta_pane_ParamLimits

0xa231,	// (0x00015a36) navi_icon_pane_g1_ParamLimits

0xa240,	// (0x00015a45) navi_text_pane_t1_ParamLimits

0xb864,	// (0x00017069) navi_icon_text_pane_g1_ParamLimits

0xb873,	// (0x00017078) navi_icon_text_pane_t1_ParamLimits

0xd4ab,	// (0x00018cb0) list_single_hc_apps_pane_g1_ParamLimits

0xd4c4,	// (0x00018cc9) list_single_hc_apps_pane_g2_ParamLimits

0xfcee,	// (0x0001b4f3) list_single_hc_apps_pane_g_ParamLimits

0xd4dd,	// (0x00018ce2) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xd4f9,	// (0x00018cfe) list_single_hc_apps_pane_t1_ParamLimits

0x4d7c,	// (0x00010581) popup_toolbar2_fixed_window_ParamLimits

0x4d7c,	// (0x00010581) popup_toolbar2_fixed_window

0x8d0e,	// (0x00014513) popup_toolbar2_float_window

0x3ee5,	// (0x0000f6ea) bg_popup_sub_pane_cp27

0xd527,	// (0x00018d2c) grid_toolbar2_float_pane

0x3ee5,	// (0x0000f6ea) bg_popup_sub_pane_cp26

0xd527,	// (0x00018d2c) grid_toolbar2_fixed_pane

0xd52f,	// (0x00018d34) cell_toolbar2_fixed_pane_ParamLimits

0xd52f,	// (0x00018d34) cell_toolbar2_fixed_pane

0xd53f,	// (0x00018d44) cell_toolbar2_fixed_pane_g1

0xd548,	// (0x00018d4d) toolbar2_fixed_button_pane

0x932b,	// (0x00014b30) toolbar2_fixed_button_pane_g1

0x933b,	// (0x00014b40) toolbar2_fixed_button_pane_g2

0x9333,	// (0x00014b38) toolbar2_fixed_button_pane_g3

0x934b,	// (0x00014b50) toolbar2_fixed_button_pane_g4

0x9343,	// (0x00014b48) toolbar2_fixed_button_pane_g5

0x9353,	// (0x00014b58) toolbar2_fixed_button_pane_g6

0x935b,	// (0x00014b60) toolbar2_fixed_button_pane_g7

0x936b,	// (0x00014b70) toolbar2_fixed_button_pane_g8

0x9363,	// (0x00014b68) toolbar2_fixed_button_pane_g9

0x0008,

0xf872,	// (0x0001b077) toolbar2_fixed_button_pane_g

0xd550,	// (0x00018d55) cell_toolbar2_float_pane_ParamLimits

0xd550,	// (0x00018d55) cell_toolbar2_float_pane

0xd561,	// (0x00018d66) cell_toolbar2_float_pane_g1

0xd548,	// (0x00018d4d) toolbar2_fixed_button_pane_cp

0xbe4d,	// (0x00017652) fep_vkb_accented_list_pane_ParamLimits

0xbe4d,	// (0x00017652) fep_vkb_accented_list_pane

0x5c53,	// (0x00011458) bg_popup_fep_shadow_pane_g9

0x842b,	// (0x00013c30) bg_popup_fep_shadow_pane_cp3

0x78aa,	// (0x000130af) list_accented_list_pane

0xd56a,	// (0x00018d6f) list_single_accented_list_pane_ParamLimits

0xd56a,	// (0x00018d6f) list_single_accented_list_pane

0x842b,	// (0x00013c30) list_highlight_pane_cp10

0xd57b,	// (0x00018d80) list_single_accented_list_pane_t1

0x8c54,	// (0x00014459) popup_slider_window_ParamLimits

0x8c54,	// (0x00014459) popup_slider_window

0xd063,	// (0x00018868) aid_indentation_list_msg

0xd647,	// (0x00018e4c) bg_popup_window_pane_cp19

0xd6b5,	// (0x00018eba) popup_slider_window_g1

0xd6d1,	// (0x00018ed6) popup_slider_window_g2

0xd6ed,	// (0x00018ef2) popup_slider_window_g3

0x0005,

0xfcf3,	// (0x0001b4f8) popup_slider_window_g

0xd749,	// (0x00018f4e) popup_slider_window_t1

0xd7bd,	// (0x00018fc2) small_volume_slider_vertical_pane

0xbd07,	// (0x0001750c) small_volume_slider_vertical_pane_g1

0xbd07,	// (0x0001750c) small_volume_slider_vertical_pane_g2

0xd7d9,	// (0x00018fde) small_volume_slider_vertical_pane_g3

0x0002,

0xfd05,	// (0x0001b50a) small_volume_slider_vertical_pane_g

0x4b2a,	// (0x0001032f) area_side_right_pane_ParamLimits

0x4b2a,	// (0x0001032f) area_side_right_pane

0x5e42,	// (0x00011647) aid_size_side_button_ParamLimits

0x5e42,	// (0x00011647) aid_size_side_button

0x5e56,	// (0x0001165b) grid_sctrl_middle_pane_ParamLimits

0x5e56,	// (0x0001165b) grid_sctrl_middle_pane

0x5e76,	// (0x0001167b) sctrl_sk_bottom_pane

0x5e87,	// (0x0001168c) sctrl_sk_top_pane

0x5e99,	// (0x0001169e) aid_touch_sctrl_top

0x5ea6,	// (0x000116ab) bg_sctrl_sk_pane_ParamLimits

0x5ea6,	// (0x000116ab) bg_sctrl_sk_pane

0x5eb4,	// (0x000116b9) sctrl_sk_top_pane_g1

0x5ec1,	// (0x000116c6) sctrl_sk_top_pane_t1

0x5e99,	// (0x0001169e) aid_touch_sctrl_bottom

0x5ea6,	// (0x000116ab) bg_sctrl_sk_pane_cp_ParamLimits

0x5ea6,	// (0x000116ab) bg_sctrl_sk_pane_cp

0x5edc,	// (0x000116e1) sctrl_sk_bottom_pane_g1

0x5ec1,	// (0x000116c6) sctrl_sk_bottom_pane_t1

0x5ee5,	// (0x000116ea) cell_sctrl_middle_pane_ParamLimits

0x5ee5,	// (0x000116ea) cell_sctrl_middle_pane

0x5f02,	// (0x00011707) aid_touch_sctrl_middle_ParamLimits

0x5f02,	// (0x00011707) aid_touch_sctrl_middle

0x5f14,	// (0x00011719) bg_sctrl_middle_pane_ParamLimits

0x5f14,	// (0x00011719) bg_sctrl_middle_pane

0x5c73,	// (0x00011478) cell_sctrl_middle_pane_g1_ParamLimits

0x5c73,	// (0x00011478) cell_sctrl_middle_pane_g1

0x5f22,	// (0x00011727) cell_sctrl_middle_pane_g2_ParamLimits

0x5f22,	// (0x00011727) cell_sctrl_middle_pane_g2

0x0001,

0xfd11,	// (0x0001b516) cell_sctrl_middle_pane_g_ParamLimits

0xfd11,	// (0x0001b516) cell_sctrl_middle_pane_g

0x932b,	// (0x00014b30) bg_sctrl_middle_pane_g1

0x9333,	// (0x00014b38) bg_sctrl_middle_pane_g2

0x933b,	// (0x00014b40) bg_sctrl_middle_pane_g3

0x9343,	// (0x00014b48) bg_sctrl_middle_pane_g4

0x934b,	// (0x00014b50) bg_sctrl_middle_pane_g5

0x9353,	// (0x00014b58) bg_sctrl_middle_pane_g6

0x935b,	// (0x00014b60) bg_sctrl_middle_pane_g7

0x9363,	// (0x00014b68) bg_sctrl_middle_pane_g8

0x0007,

0xfd16,	// (0x0001b51b) bg_sctrl_middle_pane_g

0x936b,	// (0x00014b70) bg_sctrl_middle_pane_g8_copy1

0x932b,	// (0x00014b30) bg_sctrl_sk_pane_g1

0x933b,	// (0x00014b40) bg_sctrl_sk_pane_g2

0x9333,	// (0x00014b38) bg_sctrl_sk_pane_g3

0x0008,

0xf872,	// (0x0001b077) bg_sctrl_sk_pane_g

0x6f73,	// (0x00012778) aid_size_touch_scroll_bar

0x934b,	// (0x00014b50) bg_sctrl_sk_pane_g4

0x9343,	// (0x00014b48) bg_sctrl_sk_pane_g5

0x9353,	// (0x00014b58) bg_sctrl_sk_pane_g6

0x935b,	// (0x00014b60) bg_sctrl_sk_pane_g7

0x936b,	// (0x00014b70) bg_sctrl_sk_pane_g8

0x9363,	// (0x00014b68) bg_sctrl_sk_pane_g9

0x886b,	// (0x00014070) popup_fep_china_hwr2_fs_candidate_window

0x8875,	// (0x0001407a) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x8875,	// (0x0001407a) popup_fep_china_hwr2_fs_control_window

0x5c73,	// (0x00011478) sctrl_sk_top_pane_g2

0x0001,

0xfd0c,	// (0x0001b511) sctrl_sk_top_pane_g

0xd7e2,	// (0x00018fe7) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd7e2,	// (0x00018fe7) aid_fep_china_hwr2_fs_cell

0xd7f5,	// (0x00018ffa) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd7f5,	// (0x00018ffa) bg_popup_fep_shadow_pane_cp4

0xd80e,	// (0x00019013) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd80e,	// (0x00019013) bg_popup_fep_shadow_pane_cp5

0xd820,	// (0x00019025) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd820,	// (0x00019025) popup_fep_china_hwr2_fs_control_bar_grid

0xd830,	// (0x00019035) popup_fep_china_hwr2_fs_control_funtion_grid

0xd838,	// (0x0001903d) aid_fep_china_hwr2_fs_candi_cell

0x3ee5,	// (0x0000f6ea) bg_popup_fep_shadow_pane_cp6

0xd842,	// (0x00019047) popup_fep_china_hwr2_fs_candidate_grid

0xd84c,	// (0x00019051) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd84c,	// (0x00019051) cell_fep_china_hwr2_fs_funtion_grid

0xbd07,	// (0x0001750c) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd864,	// (0x00019069) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd864,	// (0x00019069) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd872,	// (0x00019077) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd872,	// (0x00019077) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd27,	// (0x0001b52c) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd27,	// (0x0001b52c) cell_fep_china_hwr2_fs_funtion_grid_g

0xd888,	// (0x0001908d) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd888,	// (0x0001908d) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd89d,	// (0x000190a2) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd89d,	// (0x000190a2) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd2c,	// (0x0001b531) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd2c,	// (0x0001b531) cell_fep_china_hwr2_fs_funtion_grid_t

0xd8b9,	// (0x000190be) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd8c1,	// (0x000190c6) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd8c9,	// (0x000190ce) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd31,	// (0x0001b536) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd8d1,	// (0x000190d6) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd8d1,	// (0x000190d6) cell_fep_china_hwr2_fs_candidate_grid

0xd8f0,	// (0x000190f5) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd8f8,	// (0x000190fd) popup_fep_china_hwr2_fs_candidate_grid_g21

0xbd07,	// (0x0001750c) cell_fep_china_hwr2_fs_candidate_grid_g1

0xbd07,	// (0x0001750c) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb45,	// (0x0001b34a) cell_fep_china_hwr2_fs_candidate_grid_g

0xd900,	// (0x00019105) cell_fep_china_hwr2_fs_candidate_grid_t1

0x8eda,	// (0x000146df) clock_nsta_pane_cp_24_ParamLimits

0x8eda,	// (0x000146df) clock_nsta_pane_cp_24

0x8f5a,	// (0x0001475f) indicator_nsta_pane_cp_24_ParamLimits

0x8f5a,	// (0x0001475f) indicator_nsta_pane_cp_24

0xa0ad,	// (0x000158b2) heading_pane_g1

0x0001,

0xf8d7,	// (0x0001b0dc) heading_pane_g

0xabe6,	// (0x000163eb) grid_sct_catagory_button_pane

0xac18,	// (0x0001641d) scroll_pane_cp5_ParamLimits

0xb8b8,	// (0x000170bd) button_value_adjust_pane_cp5_ParamLimits

0xb8b8,	// (0x000170bd) button_value_adjust_pane_cp5

0xb9be,	// (0x000171c3) form2_midp_time_pane_ParamLimits

0xd90e,	// (0x00019113) cell_sct_catagory_button_pane_ParamLimits

0xd90e,	// (0x00019113) cell_sct_catagory_button_pane

0xbccc,	// (0x000174d1) bg_button_pane_cp01_ParamLimits

0xbccc,	// (0x000174d1) bg_button_pane_cp01

0xbd07,	// (0x0001750c) cell_sct_catagory_button_pane_g1

0x8c95,	// (0x0001449a) popup_tb_extension_window

0xd920,	// (0x00019125) aid_size_cell_ext_ParamLimits

0xd920,	// (0x00019125) aid_size_cell_ext

0x6a47,	// (0x0001224c) bg_tb_trans_pane_cp1_ParamLimits

0x6a47,	// (0x0001224c) bg_tb_trans_pane_cp1

0xd940,	// (0x00019145) grid_tb_ext_pane_ParamLimits

0xd940,	// (0x00019145) grid_tb_ext_pane

0xd970,	// (0x00019175) cell_tb_ext_pane_ParamLimits

0xd970,	// (0x00019175) cell_tb_ext_pane

0xd987,	// (0x0001918c) cell_tb_ext_pane_g1_ParamLimits

0xd987,	// (0x0001918c) cell_tb_ext_pane_g1

0xd9a4,	// (0x000191a9) cell_tb_ext_pane_t1

0x6a47,	// (0x0001224c) list_highlight_pane_cp11_ParamLimits

0x6a47,	// (0x0001224c) list_highlight_pane_cp11

0x4d9b,	// (0x000105a0) popup_uni_indicator_window_ParamLimits

0x4d9b,	// (0x000105a0) popup_uni_indicator_window

0x75df,	// (0x00012de4) bg_popup_sub_pane_cp14

0xd9bf,	// (0x000191c4) list_uniindi_pane

0xd9cb,	// (0x000191d0) uniindi_top_pane

0x6a47,	// (0x0001224c) bg_uniindi_top_pane

0xd9ec,	// (0x000191f1) uniindi_top_pane_g1

0xda02,	// (0x00019207) uniindi_top_pane_g2

0x0003,

0xfd38,	// (0x0001b53d) uniindi_top_pane_g

0xda2c,	// (0x00019231) uniindi_top_pane_t1

0xda58,	// (0x0001925d) list_single_uniindi_pane_ParamLimits

0xda58,	// (0x0001925d) list_single_uniindi_pane

0xbd07,	// (0x0001750c) bg_uniindi_top_pane_g1

0xda6a,	// (0x0001926f) list_single_uniindi_pane_g1

0xda7d,	// (0x00019282) list_single_uniindi_pane_t1

0x4c07,	// (0x0001040c) control_bg_pane

0xdaa2,	// (0x000192a7) bg_sctrl_sk_pane_cp1

0xdaab,	// (0x000192b0) bg_sctrl_sk_pane_cp2

0xdab4,	// (0x000192b9) control_bg_pane_g1

0xdabd,	// (0x000192c2) control_bg_pane_g2

0x0001,

0xfd41,	// (0x0001b546) control_bg_pane_g

0xb6db,	// (0x00016ee0) cell_indicator_nsta_pane_g1_ParamLimits

0xb6e9,	// (0x00016eee) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa9,	// (0x0001b2ae) cell_indicator_nsta_pane_g_ParamLimits

0xba4e,	// (0x00017253) form2_midp_time_pane_t1_ParamLimits

0x6db5,	// (0x000125ba) main_idle_act4_pane_ParamLimits

0x6db5,	// (0x000125ba) main_idle_act4_pane

0x8c95,	// (0x0001449a) popup_tb_extension_window_ParamLimits

0xd962,	// (0x00019167) tb_ext_find_pane_ParamLimits

0xd962,	// (0x00019167) tb_ext_find_pane

0xdac6,	// (0x000192cb) ai_gene_pane_1_cp1

0x8574,	// (0x00013d79) ai_gene_pane_2_cp1

0xdace,	// (0x000192d3) list_single_idle_plugin_calendar_pane

0xdad7,	// (0x000192dc) list_single_idle_plugin_notification_pane

0xdae0,	// (0x000192e5) list_single_idle_plugin_player_pane

0xdae9,	// (0x000192ee) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdae9,	// (0x000192ee) list_single_idle_plugin_shortcut_pane

0xdb0b,	// (0x00019310) main_idle_act4_pane_t1

0xdb1d,	// (0x00019322) main_idle_act4_pane_t2

0x0001,

0xfd46,	// (0x0001b54b) main_idle_act4_pane_t

0xdb2f,	// (0x00019334) middle_sk_idle_act4_pane_ParamLimits

0xdb2f,	// (0x00019334) middle_sk_idle_act4_pane

0xdb45,	// (0x0001934a) popup_clock_digital_analogue_window_cp2

0xdb5f,	// (0x00019364) shortcut_wheel_idle_act4_pane_ParamLimits

0xdb5f,	// (0x00019364) shortcut_wheel_idle_act4_pane

0xbd07,	// (0x0001750c) shortcut_wheel_idle_act4_pane_g1

0xbd07,	// (0x0001750c) shortcut_wheel_idle_act4_pane_g2

0xbd07,	// (0x0001750c) shortcut_wheel_idle_act4_pane_g3

0xbd07,	// (0x0001750c) shortcut_wheel_idle_act4_pane_g4

0xbd07,	// (0x0001750c) shortcut_wheel_idle_act4_pane_g5

0xdb73,	// (0x00019378) shortcut_wheel_idle_act4_pane_g6

0xdb7b,	// (0x00019380) shortcut_wheel_idle_act4_pane_g7

0xdb83,	// (0x00019388) shortcut_wheel_idle_act4_pane_g8

0xdb8b,	// (0x00019390) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd4b,	// (0x0001b550) shortcut_wheel_idle_act4_pane_g

0xbf91,	// (0x00017796) middle_sk_idle_act4_pane_g1_ParamLimits

0xbf91,	// (0x00017796) middle_sk_idle_act4_pane_g1

0xdbef,	// (0x000193f4) middle_sk_idle_act4_pane_g2_ParamLimits

0xdbef,	// (0x000193f4) middle_sk_idle_act4_pane_g2

0x0001,

0xfd6e,	// (0x0001b573) middle_sk_idle_act4_pane_g_ParamLimits

0xfd6e,	// (0x0001b573) middle_sk_idle_act4_pane_g

0xdbfb,	// (0x00019400) middle_sk_idle_act4_pane_t1_ParamLimits

0xdbfb,	// (0x00019400) middle_sk_idle_act4_pane_t1

0xdc18,	// (0x0001941d) grid_ai_shortcut_pane_ParamLimits

0xdc18,	// (0x0001941d) grid_ai_shortcut_pane

0xdc31,	// (0x00019436) list_highlight_pane_cp16_ParamLimits

0xdc31,	// (0x00019436) list_highlight_pane_cp16

0xdc3e,	// (0x00019443) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdc3e,	// (0x00019443) list_single_idle_plugin_shortcut_pane_g1

0xdc4a,	// (0x0001944f) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdc4a,	// (0x0001944f) list_single_idle_plugin_shortcut_pane_g2

0xdc64,	// (0x00019469) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdc64,	// (0x00019469) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd73,	// (0x0001b578) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd73,	// (0x0001b578) list_single_idle_plugin_shortcut_pane_g

0xdc77,	// (0x0001947c) cell_ai_shortcut_pane_ParamLimits

0xdc77,	// (0x0001947c) cell_ai_shortcut_pane

0xdc9a,	// (0x0001949f) cell_ai_shortcut_pane_g1_ParamLimits

0xdc9a,	// (0x0001949f) cell_ai_shortcut_pane_g1

0xdac6,	// (0x000192cb) ai_gene_pane_1_cp2

0xdcbc,	// (0x000194c1) ai_gene_pane_2_cp2

0xdcc4,	// (0x000194c9) list_highlight_pane_cp15

0xdccd,	// (0x000194d2) list_single_idle_plugin_calendar_pane_g1

0xdcc4,	// (0x000194c9) list_highlight_pane_cp17

0xdcd5,	// (0x000194da) list_single_idle_plugin_calendar_pane_g1_copy1

0xdcdd,	// (0x000194e2) list_single_idle_plugin_player_pane_g1

0xae4d,	// (0x00016652) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd7a,	// (0x0001b57f) list_single_idle_plugin_player_pane_g

0xdce5,	// (0x000194ea) list_single_idle_plugin_player_pane_t1

0xdcf3,	// (0x000194f8) list_single_idle_plugin_player_pane_t2

0xdd01,	// (0x00019506) list_single_idle_plugin_player_pane_t3

0xdd0f,	// (0x00019514) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd7f,	// (0x0001b584) list_single_idle_plugin_player_pane_t

0xdd1d,	// (0x00019522) wait_bar_pane_cp15

0xdd25,	// (0x0001952a) grid_ai_notification_pane

0xae4d,	// (0x00016652) list_single_idle_plugin_notification_pane_g1

0xdd2e,	// (0x00019533) cell_ai_notification_pane_ParamLimits

0xdd2e,	// (0x00019533) cell_ai_notification_pane

0xdd3b,	// (0x00019540) cell_ai_notification_pane_g1

0xdd43,	// (0x00019548) cell_ai_notification_pane_t1

0xdd51,	// (0x00019556) tb_ext_find_button_pane

0xdd59,	// (0x0001955e) tb_ext_find_pane_g1

0xdd61,	// (0x00019566) tb_ext_find_pane_t1

0x7db1,	// (0x000135b6) tb_ext_find_button_pane_g1

0xdd6f,	// (0x00019574) tb_ext_find_button_pane_g2

0x0001,

0xfd88,	// (0x0001b58d) tb_ext_find_button_pane_g

0xdb0b,	// (0x00019310) main_idle_act4_pane_t1_ParamLimits

0xdb1d,	// (0x00019322) main_idle_act4_pane_t2_ParamLimits

0xfd46,	// (0x0001b54b) main_idle_act4_pane_t_ParamLimits

0xdb45,	// (0x0001934a) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdb53,	// (0x00019358) sat_plugin_idle_act4_pane_ParamLimits

0xdb53,	// (0x00019358) sat_plugin_idle_act4_pane

0xdd78,	// (0x0001957d) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdd78,	// (0x0001957d) sat_plugin_idle_act4_pane_t1

0xdd8b,	// (0x00019590) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdd8b,	// (0x00019590) sat_plugin_idle_act4_pane_t2

0xdd9e,	// (0x000195a3) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdd9e,	// (0x000195a3) sat_plugin_idle_act4_pane_t3

0xddb1,	// (0x000195b6) sat_plugin_idle_act4_pane_t4_ParamLimits

0xddb1,	// (0x000195b6) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd8d,	// (0x0001b592) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd8d,	// (0x0001b592) sat_plugin_idle_act4_pane_t

0x4ccc,	// (0x000104d1) popup_battery_window_ParamLimits

0x4ccc,	// (0x000104d1) popup_battery_window

0x6a47,	// (0x0001224c) bg_popup_sub_pane_cp25_ParamLimits

0x6a47,	// (0x0001224c) bg_popup_sub_pane_cp25

0xddc4,	// (0x000195c9) popup_battery_window_g1_ParamLimits

0xddc4,	// (0x000195c9) popup_battery_window_g1

0xddd0,	// (0x000195d5) popup_battery_window_t1_ParamLimits

0xddd0,	// (0x000195d5) popup_battery_window_t1

0xdde2,	// (0x000195e7) popup_battery_window_t2_ParamLimits

0xdde2,	// (0x000195e7) popup_battery_window_t2

0x0001,

0xfd96,	// (0x0001b59b) popup_battery_window_t_ParamLimits

0xfd96,	// (0x0001b59b) popup_battery_window_t

0x843f,	// (0x00013c44) midp_canvas_pane_ParamLimits

0x84b6,	// (0x00013cbb) midp_keypad_pane_ParamLimits

0x84b6,	// (0x00013cbb) midp_keypad_pane

0x87b9,	// (0x00013fbe) main_midp_pane_ParamLimits

0xb765,	// (0x00016f6a) signal_pane_g2_cp_ParamLimits

0xddff,	// (0x00019604) aid_size_cell_midp_keypad_ParamLimits

0xddff,	// (0x00019604) aid_size_cell_midp_keypad

0xde19,	// (0x0001961e) midp_keyp_game_grid_pane_ParamLimits

0xde19,	// (0x0001961e) midp_keyp_game_grid_pane

0xde39,	// (0x0001963e) midp_keyp_rocker_pane_ParamLimits

0xde39,	// (0x0001963e) midp_keyp_rocker_pane

0xde68,	// (0x0001966d) midp_keyp_sk_left_pane_ParamLimits

0xde68,	// (0x0001966d) midp_keyp_sk_left_pane

0xdec2,	// (0x000196c7) midp_keyp_sk_right_pane_ParamLimits

0xdec2,	// (0x000196c7) midp_keyp_sk_right_pane

0x3ee5,	// (0x0000f6ea) bg_button_pane_cp03

0xdf1c,	// (0x00019721) midp_keyp_sk_left_pane_g1

0x3ee5,	// (0x0000f6ea) bg_button_pane_cp04

0xdf1c,	// (0x00019721) midp_keyp_sk_right_pane_g1

0xbd07,	// (0x0001750c) midp_keyp_rocker_pane_g1

0xdf25,	// (0x0001972a) keyp_game_cell_pane_ParamLimits

0xdf25,	// (0x0001972a) keyp_game_cell_pane

0x3ee5,	// (0x0000f6ea) bg_button_pane_cp02

0xdf38,	// (0x0001973d) keyp_game_cell_pane_g1

0x4d16,	// (0x0001051b) popup_fep_vkb2_window_ParamLimits

0x4d16,	// (0x0001051b) popup_fep_vkb2_window

0x5f44,	// (0x00011749) aid_size_cell_vkb2_ParamLimits

0x5f44,	// (0x00011749) aid_size_cell_vkb2

0x5f90,	// (0x00011795) popup_fep_vkb2_window_g1_ParamLimits

0x5f90,	// (0x00011795) popup_fep_vkb2_window_g1

0x5fd8,	// (0x000117dd) vkb2_area_bottom_pane_ParamLimits

0x5fd8,	// (0x000117dd) vkb2_area_bottom_pane

0x602c,	// (0x00011831) vkb2_area_keypad_pane_ParamLimits

0x602c,	// (0x00011831) vkb2_area_keypad_pane

0x6072,	// (0x00011877) vkb2_area_top_pane_ParamLimits

0x6072,	// (0x00011877) vkb2_area_top_pane

0x60ec,	// (0x000118f1) vkb2_top_entry_pane_ParamLimits

0x60ec,	// (0x000118f1) vkb2_top_entry_pane

0x6116,	// (0x0001191b) vkb2_top_grid_left_pane_ParamLimits

0x6116,	// (0x0001191b) vkb2_top_grid_left_pane

0x6134,	// (0x00011939) vkb2_top_grid_right_pane_ParamLimits

0x6134,	// (0x00011939) vkb2_top_grid_right_pane

0x6152,	// (0x00011957) vkb2_cell_keypad_pane_ParamLimits

0x6152,	// (0x00011957) vkb2_cell_keypad_pane

0x6208,	// (0x00011a0d) vkb2_area_bottom_grid_pane_ParamLimits

0x6208,	// (0x00011a0d) vkb2_area_bottom_grid_pane

0x622e,	// (0x00011a33) vkb2_area_bottom_pane_g1_ParamLimits

0x622e,	// (0x00011a33) vkb2_area_bottom_pane_g1

0x6252,	// (0x00011a57) vkb2_area_bottom_pane_g2_ParamLimits

0x6252,	// (0x00011a57) vkb2_area_bottom_pane_g2

0x6280,	// (0x00011a85) vkb2_area_bottom_pane_g3_ParamLimits

0x6280,	// (0x00011a85) vkb2_area_bottom_pane_g3

0x0002,

0xfd9b,	// (0x0001b5a0) vkb2_area_bottom_pane_g_ParamLimits

0xfd9b,	// (0x0001b5a0) vkb2_area_bottom_pane_g

0x62e1,	// (0x00011ae6) vkb2_top_cell_left_pane_ParamLimits

0x62e1,	// (0x00011ae6) vkb2_top_cell_left_pane

0xdf49,	// (0x0001974e) vkb2_top_entry_pane_g1_ParamLimits

0xdf49,	// (0x0001974e) vkb2_top_entry_pane_g1

0xdf57,	// (0x0001975c) vkb2_top_entry_pane_t1_ParamLimits

0xdf57,	// (0x0001975c) vkb2_top_entry_pane_t1

0xdf6f,	// (0x00019774) vkb2_top_entry_pane_t2_ParamLimits

0xdf6f,	// (0x00019774) vkb2_top_entry_pane_t2

0xdf87,	// (0x0001978c) vkb2_top_entry_pane_t3_ParamLimits

0xdf87,	// (0x0001978c) vkb2_top_entry_pane_t3

0x0002,

0xfda2,	// (0x0001b5a7) vkb2_top_entry_pane_t_ParamLimits

0xfda2,	// (0x0001b5a7) vkb2_top_entry_pane_t

0x632e,	// (0x00011b33) vkb2_top_grid_right_pane_g1_ParamLimits

0x632e,	// (0x00011b33) vkb2_top_grid_right_pane_g1

0x6344,	// (0x00011b49) vkb2_top_grid_right_pane_g2_ParamLimits

0x6344,	// (0x00011b49) vkb2_top_grid_right_pane_g2

0x635c,	// (0x00011b61) vkb2_top_grid_right_pane_g3_ParamLimits

0x635c,	// (0x00011b61) vkb2_top_grid_right_pane_g3

0x6374,	// (0x00011b79) vkb2_top_grid_right_pane_g4_ParamLimits

0x6374,	// (0x00011b79) vkb2_top_grid_right_pane_g4

0x0003,

0xfda9,	// (0x0001b5ae) vkb2_top_grid_right_pane_g_ParamLimits

0xfda9,	// (0x0001b5ae) vkb2_top_grid_right_pane_g

0x638a,	// (0x00011b8f) vkb2_top_cell_left_pane_g1

0x63a1,	// (0x00011ba6) vkb2_cell_keypad_pane_g1_ParamLimits

0x63a1,	// (0x00011ba6) vkb2_cell_keypad_pane_g1

0xdf9d,	// (0x000197a2) vkb2_cell_keypad_pane_t1_ParamLimits

0xdf9d,	// (0x000197a2) vkb2_cell_keypad_pane_t1

0x63c5,	// (0x00011bca) vkb2_cell_bottom_grid_pane_ParamLimits

0x63c5,	// (0x00011bca) vkb2_cell_bottom_grid_pane

0x63fe,	// (0x00011c03) vkb2_cell_bottom_grid_pane_g1

0xdb93,	// (0x00019398) aid_call2_pane_cp02

0xdb9b,	// (0x000193a0) aid_call_pane_cp02

0xdba3,	// (0x000193a8) clock_digital_number_pane_cp10

0xdbab,	// (0x000193b0) clock_digital_number_pane_cp11

0xdbb3,	// (0x000193b8) clock_digital_number_pane_cp12

0xdbbb,	// (0x000193c0) clock_digital_number_pane_cp13

0xdbc3,	// (0x000193c8) clock_digital_separator_pane_cp10

0x7db1,	// (0x000135b6) popup_clock_digital_analogue_window_cp2_g1

0x7db1,	// (0x000135b6) popup_clock_digital_analogue_window_cp2_g2

0xdbcb,	// (0x000193d0) popup_clock_digital_analogue_window_cp2_g3

0x7db1,	// (0x000135b6) popup_clock_digital_analogue_window_cp2_g4

0xdbcb,	// (0x000193d0) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd5e,	// (0x0001b563) popup_clock_digital_analogue_window_cp2_g

0xdbd3,	// (0x000193d8) popup_clock_digital_analogue_window_cp2_t1

0xdbe1,	// (0x000193e6) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd69,	// (0x0001b56e) popup_clock_digital_analogue_window_cp2_t

0xbd07,	// (0x0001750c) clock_digital_number_pane_cp10_g1

0xbd07,	// (0x0001750c) clock_digital_number_pane_cp10_g2

0x0001,

0xfb45,	// (0x0001b34a) clock_digital_number_pane_cp10_g

0xbd07,	// (0x0001750c) clock_digital_separator_pane_cp10_g1

0xbd07,	// (0x0001750c) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb45,	// (0x0001b34a) clock_digital_separator_pane_cp10_g

0xda0e,	// (0x00019213) uniindi_top_pane_g3

0xda1f,	// (0x00019224) uniindi_top_pane_g4

0x61c2,	// (0x000119c7) vkb2_row_keypad_pane_ParamLimits

0x61c2,	// (0x000119c7) vkb2_row_keypad_pane

0x641a,	// (0x00011c1f) vkb2_cell_t_keypad_pane_ParamLimits

0x641a,	// (0x00011c1f) vkb2_cell_t_keypad_pane

0x642a,	// (0x00011c2f) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x642a,	// (0x00011c2f) vkb2_cell_t_keypad_pane_cp08

0x643f,	// (0x00011c44) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x643f,	// (0x00011c44) vkb2_cell_t_keypad_pane_cp09

0x6453,	// (0x00011c58) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x6453,	// (0x00011c58) vkb2_cell_t_keypad_pane_cp01

0x6464,	// (0x00011c69) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x6464,	// (0x00011c69) vkb2_cell_t_keypad_pane_cp02

0x6475,	// (0x00011c7a) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x6475,	// (0x00011c7a) vkb2_cell_t_keypad_pane_cp03

0x6486,	// (0x00011c8b) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x6486,	// (0x00011c8b) vkb2_cell_t_keypad_pane_cp04

0x6497,	// (0x00011c9c) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x6497,	// (0x00011c9c) vkb2_cell_t_keypad_pane_cp05

0x64a8,	// (0x00011cad) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x64a8,	// (0x00011cad) vkb2_cell_t_keypad_pane_cp06

0x64bb,	// (0x00011cc0) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x64bb,	// (0x00011cc0) vkb2_cell_t_keypad_pane_cp07

0x64d0,	// (0x00011cd5) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x64d0,	// (0x00011cd5) vkb2_cell_t_keypad_pane_cp10

0x5c73,	// (0x00011478) vkb2_cell_t_keypad_pane_g1

0xdfb4,	// (0x000197b9) vkb2_cell_t_keypad_pane_t1

0x4c07,	// (0x0001040c) popup_grid_graphic2_window

0xdfc6,	// (0x000197cb) aid_size_cell_graphic2_ParamLimits

0xdfc6,	// (0x000197cb) aid_size_cell_graphic2

0xd3af,	// (0x00018bb4) bg_popup_window_pane_cp21_ParamLimits

0xd3af,	// (0x00018bb4) bg_popup_window_pane_cp21

0xdff2,	// (0x000197f7) graphic2_pages_pane_ParamLimits

0xdff2,	// (0x000197f7) graphic2_pages_pane

0xe038,	// (0x0001983d) grid_graphic2_control_pane_ParamLimits

0xe038,	// (0x0001983d) grid_graphic2_control_pane

0xe066,	// (0x0001986b) grid_graphic2_pane_ParamLimits

0xe066,	// (0x0001986b) grid_graphic2_pane

0xe0c8,	// (0x000198cd) cell_graphic2_pane

0x3ee5,	// (0x0000f6ea) main_comp_mode_pane

0xd20e,	// (0x00018a13) list_ai3_gene_pane_ParamLimits

0xd647,	// (0x00018e4c) bg_popup_window_pane_cp19_ParamLimits

0xd653,	// (0x00018e58) bg_touch_area_indi_pane_ParamLimits

0xd653,	// (0x00018e58) bg_touch_area_indi_pane

0xd669,	// (0x00018e6e) bg_touch_area_indi_pane_cp01_ParamLimits

0xd669,	// (0x00018e6e) bg_touch_area_indi_pane_cp01

0xd681,	// (0x00018e86) bg_touch_area_indi_pane_cp02_ParamLimits

0xd681,	// (0x00018e86) bg_touch_area_indi_pane_cp02

0xd69b,	// (0x00018ea0) bg_touch_area_indi_pane_cp03_ParamLimits

0xd69b,	// (0x00018ea0) bg_touch_area_indi_pane_cp03

0xd6b5,	// (0x00018eba) popup_slider_window_g1_ParamLimits

0xd6d1,	// (0x00018ed6) popup_slider_window_g2_ParamLimits

0xd6ed,	// (0x00018ef2) popup_slider_window_g3_ParamLimits

0xfcf3,	// (0x0001b4f8) popup_slider_window_g_ParamLimits

0xd749,	// (0x00018f4e) popup_slider_window_t1_ParamLimits

0xd7bd,	// (0x00018fc2) small_volume_slider_vertical_pane_ParamLimits

0xe0c8,	// (0x000198cd) cell_graphic2_pane_ParamLimits

0xe11d,	// (0x00019922) bg_button_pane_cp10_ParamLimits

0xe11d,	// (0x00019922) bg_button_pane_cp10

0xe132,	// (0x00019937) bg_button_pane_cp11_ParamLimits

0xe132,	// (0x00019937) bg_button_pane_cp11

0xe147,	// (0x0001994c) graphic2_pages_pane_g1_ParamLimits

0xe147,	// (0x0001994c) graphic2_pages_pane_g1

0xe162,	// (0x00019967) graphic2_pages_pane_g2_ParamLimits

0xe162,	// (0x00019967) graphic2_pages_pane_g2

0x0001,

0xfdb7,	// (0x0001b5bc) graphic2_pages_pane_g_ParamLimits

0xfdb7,	// (0x0001b5bc) graphic2_pages_pane_g

0xe17a,	// (0x0001997f) graphic2_pages_pane_t1_ParamLimits

0xe17a,	// (0x0001997f) graphic2_pages_pane_t1

0xe190,	// (0x00019995) cell_graphic2_control_pane_ParamLimits

0xe190,	// (0x00019995) cell_graphic2_control_pane

0xe1aa,	// (0x000199af) cell_graphic2_pane_g1_ParamLimits

0xe1aa,	// (0x000199af) cell_graphic2_pane_g1

0xe1b7,	// (0x000199bc) cell_graphic2_pane_g2_ParamLimits

0xe1b7,	// (0x000199bc) cell_graphic2_pane_g2

0xe1c4,	// (0x000199c9) cell_graphic2_pane_g3_ParamLimits

0xe1c4,	// (0x000199c9) cell_graphic2_pane_g3

0xe1d1,	// (0x000199d6) cell_graphic2_pane_g4_ParamLimits

0xe1d1,	// (0x000199d6) cell_graphic2_pane_g4

0xe1de,	// (0x000199e3) cell_graphic2_pane_g5_ParamLimits

0xe1de,	// (0x000199e3) cell_graphic2_pane_g5

0x0004,

0xfdbc,	// (0x0001b5c1) cell_graphic2_pane_g_ParamLimits

0xfdbc,	// (0x0001b5c1) cell_graphic2_pane_g

0xe1f9,	// (0x000199fe) cell_graphic2_pane_t1_ParamLimits

0xe1f9,	// (0x000199fe) cell_graphic2_pane_t1

0x9447,	// (0x00014c4c) grid_highlight_pane_cp11_ParamLimits

0x9447,	// (0x00014c4c) grid_highlight_pane_cp11

0x75df,	// (0x00012de4) bg_button_pane_cp05

0xe222,	// (0x00019a27) cell_graphic2_control_pane_g1

0xbd07,	// (0x0001750c) bg_touch_area_indi_pane_g1

0xe22f,	// (0x00019a34) aid_cmod_rocker_key_size

0xe239,	// (0x00019a3e) aid_cmode_itu_key_size

0xe243,	// (0x00019a48) main_cmode_video_pane

0xe24d,	// (0x00019a52) main_comp_mode_itu_pane

0xe259,	// (0x00019a5e) main_comp_mode_rocker_pane

0xe265,	// (0x00019a6a) cell_cmode_rocker_pane_ParamLimits

0xe265,	// (0x00019a6a) cell_cmode_rocker_pane

0xe279,	// (0x00019a7e) cell_cmode_itu_pane_ParamLimits

0xe279,	// (0x00019a7e) cell_cmode_itu_pane

0x75df,	// (0x00012de4) bg_button_pane_cp06_ParamLimits

0x75df,	// (0x00012de4) bg_button_pane_cp06

0xbf91,	// (0x00017796) cell_cmode_rocker_pane_g1_ParamLimits

0xbf91,	// (0x00017796) cell_cmode_rocker_pane_g1

0xd864,	// (0x00019069) cell_cmode_rocker_pane_g2_ParamLimits

0xd864,	// (0x00019069) cell_cmode_rocker_pane_g2

0x0001,

0xfdcc,	// (0x0001b5d1) cell_cmode_rocker_pane_g_ParamLimits

0xfdcc,	// (0x0001b5d1) cell_cmode_rocker_pane_g

0x3ee5,	// (0x0000f6ea) bg_button_pane_cp07

0xe290,	// (0x00019a95) cell_cmode_itu_pane_g1

0xe299,	// (0x00019a9e) cell_cmode_itu_pane_t1

0xe2a7,	// (0x00019aac) cell_cmode_itu_pane_t2

0x0001,

0xfdd1,	// (0x0001b5d6) cell_cmode_itu_pane_t

0xda92,	// (0x00019297) aid_touch_ctrl_left

0xda9a,	// (0x0001929f) aid_touch_ctrl_right

0x3ee5,	// (0x0000f6ea) compa_mode_pane

0xe2b5,	// (0x00019aba) aid_cmod_rocker_key_size_cp

0xe2bf,	// (0x00019ac4) aid_cmode_itu_key_size_cp

0xe2c9,	// (0x00019ace) compa_mode_pane_g1

0xe2d1,	// (0x00019ad6) compa_mode_pane_g2

0xe2d9,	// (0x00019ade) compa_mode_pane_g3

0x0002,

0xfdd6,	// (0x0001b5db) compa_mode_pane_g

0xe2e1,	// (0x00019ae6) main_comp_mode_itu_pane_cp

0xe2e9,	// (0x00019aee) main_comp_mode_rocker_pane_cp

0xe2f1,	// (0x00019af6) cell_cmode_itu_pane_cp_ParamLimits

0xe2f1,	// (0x00019af6) cell_cmode_itu_pane_cp

0xe306,	// (0x00019b0b) cell_cmode_rocker_pane_cp_ParamLimits

0xe306,	// (0x00019b0b) cell_cmode_rocker_pane_cp

0x75df,	// (0x00012de4) bg_button_pane_cp06_cp_ParamLimits

0x75df,	// (0x00012de4) bg_button_pane_cp06_cp

0xbf91,	// (0x00017796) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xbf91,	// (0x00017796) cell_cmode_rocker_pane_g1_cp

0xbd07,	// (0x0001750c) cell_cmode_rocker_pane_g2_cp

0x3ee5,	// (0x0000f6ea) bg_button_pane_cp07_cp

0xe318,	// (0x00019b1d) cell_cmode_itu_pane_g1_cp

0xe321,	// (0x00019b26) cell_cmode_itu_pane_t1_cp

0xe321,	// (0x00019b26) cell_cmode_itu_pane_t2_cp

0xa965,	// (0x0001616a) settings_code_pane_cp2

0x67a3,	// (0x00011fa8) bg_popup_window_pane_cp3_ParamLimits

0x6c35,	// (0x0001243a) heading_pane_cp3_ParamLimits

0x6c41,	// (0x00012446) listscroll_popup_graphic_pane_ParamLimits

0x5a06,	// (0x0001120b) fep_hwr_aid_pane_ParamLimits

0x5e99,	// (0x0001169e) aid_touch_sctrl_top_ParamLimits

0x5eb4,	// (0x000116b9) sctrl_sk_top_pane_g1_ParamLimits

0x5c73,	// (0x00011478) sctrl_sk_top_pane_g2_ParamLimits

0xfd0c,	// (0x0001b511) sctrl_sk_top_pane_g_ParamLimits

0x5ec1,	// (0x000116c6) sctrl_sk_top_pane_t1_ParamLimits

0x5e99,	// (0x0001169e) aid_touch_sctrl_bottom_ParamLimits

0x5ec1,	// (0x000116c6) sctrl_sk_bottom_pane_t1_ParamLimits

0xd9d8,	// (0x000191dd) aid_area_touch_clock

0x60b4,	// (0x000118b9) aid_vkb2_area_top_pane_cell_ParamLimits

0x60b4,	// (0x000118b9) aid_vkb2_area_top_pane_cell

0x61e4,	// (0x000119e9) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x61e4,	// (0x000119e9) aid_vkb2_area_bottom_pane_cell

0xdf41,	// (0x00019746) popup_char_count_window

0xe32f,	// (0x00019b34) popup_char_count_window_g1

0xe338,	// (0x00019b3d) popup_char_count_window_g2

0xe341,	// (0x00019b46) popup_char_count_window_g3

0x0002,

0xfddd,	// (0x0001b5e2) popup_char_count_window_g

0xe34a,	// (0x00019b4f) popup_char_count_window_t1

0x5f6e,	// (0x00011773) popup_fep_char_preview_window_ParamLimits

0x5f6e,	// (0x00011773) popup_fep_char_preview_window

0x60d2,	// (0x000118d7) vkb2_top_candi_pane_ParamLimits

0x60d2,	// (0x000118d7) vkb2_top_candi_pane

0xe358,	// (0x00019b5d) cell_vkb2_top_candi_pane_ParamLimits

0xe358,	// (0x00019b5d) cell_vkb2_top_candi_pane

0x64e5,	// (0x00011cea) bg_popup_fep_char_preview_window_ParamLimits

0x64e5,	// (0x00011cea) bg_popup_fep_char_preview_window

0x64f3,	// (0x00011cf8) popup_fep_char_preview_window_t1_ParamLimits

0x64f3,	// (0x00011cf8) popup_fep_char_preview_window_t1

0xe3ca,	// (0x00019bcf) bg_popup_fep_char_preview_window_g1

0xe3d2,	// (0x00019bd7) bg_popup_fep_char_preview_window_g2

0xe3da,	// (0x00019bdf) bg_popup_fep_char_preview_window_g3

0xe3e2,	// (0x00019be7) bg_popup_fep_char_preview_window_g4

0xe3ea,	// (0x00019bef) bg_popup_fep_char_preview_window_g5

0x652d,	// (0x00011d32) bg_popup_fep_char_preview_window_g6

0xe3f2,	// (0x00019bf7) bg_popup_fep_char_preview_window_g7

0xe3fa,	// (0x00019bff) bg_popup_fep_char_preview_window_g8

0xe402,	// (0x00019c07) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde4,	// (0x0001b5e9) bg_popup_fep_char_preview_window_g

0x5c73,	// (0x00011478) cell_vkb2_top_candi_pane_g1_ParamLimits

0x5c73,	// (0x00011478) cell_vkb2_top_candi_pane_g1

0x5c81,	// (0x00011486) cell_vkb2_top_candi_pane_g2_ParamLimits

0x5c81,	// (0x00011486) cell_vkb2_top_candi_pane_g2

0xe3a9,	// (0x00019bae) cell_vkb2_top_candi_pane_g3_ParamLimits

0xe3a9,	// (0x00019bae) cell_vkb2_top_candi_pane_g3

0x6535,	// (0x00011d3a) cell_vkb2_top_candi_pane_g4_ParamLimits

0x6535,	// (0x00011d3a) cell_vkb2_top_candi_pane_g4

0xc655,	// (0x00017e5a) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc655,	// (0x00017e5a) cell_vkb2_top_candi_pane_g5

0x6556,	// (0x00011d5b) cell_vkb2_top_candi_pane_g6_ParamLimits

0x6556,	// (0x00011d5b) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf7,	// (0x0001b5fc) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf7,	// (0x0001b5fc) cell_vkb2_top_candi_pane_g

0x6564,	// (0x00011d69) cell_vkb2_top_candi_pane_t1

0x5866,	// (0x0001106b) aid_size_touch_slider_mark_ParamLimits

0x5866,	// (0x0001106b) aid_size_touch_slider_mark

0xe028,	// (0x0001982d) grid_graphic2_catg_pane_ParamLimits

0xe028,	// (0x0001982d) grid_graphic2_catg_pane

0xe0a2,	// (0x000198a7) popup_grid_graphic2_window_t1_ParamLimits

0xe0a2,	// (0x000198a7) popup_grid_graphic2_window_t1

0xe0b4,	// (0x000198b9) popup_grid_graphic2_window_t2_ParamLimits

0xe0b4,	// (0x000198b9) popup_grid_graphic2_window_t2

0x0001,

0xfdb2,	// (0x0001b5b7) popup_grid_graphic2_window_t_ParamLimits

0xfdb2,	// (0x0001b5b7) popup_grid_graphic2_window_t

0x75df,	// (0x00012de4) bg_button_pane_cp05_ParamLimits

0xe222,	// (0x00019a27) cell_graphic2_control_pane_g1_ParamLimits

0xe40a,	// (0x00019c0f) cell_graphic2_catg_pane_ParamLimits

0xe40a,	// (0x00019c0f) cell_graphic2_catg_pane

0x3ee5,	// (0x0000f6ea) bg_button_pane_cp12

0xe41c,	// (0x00019c21) cell_graphic2_catg_pane_g1

0xd9a4,	// (0x000191a9) cell_tb_ext_pane_t1_ParamLimits

0x6301,	// (0x00011b06) vkb2_top_cell_right_narrow_pane_ParamLimits

0x6301,	// (0x00011b06) vkb2_top_cell_right_narrow_pane

0x6319,	// (0x00011b1e) vkb2_top_cell_right_wide_pane_ParamLimits

0x6319,	// (0x00011b1e) vkb2_top_cell_right_wide_pane

0x59f8,	// (0x000111fd) bg_vkb2_func_pane_ParamLimits

0x59f8,	// (0x000111fd) bg_vkb2_func_pane

0x638a,	// (0x00011b8f) vkb2_top_cell_left_pane_g1_ParamLimits

0x59f8,	// (0x000111fd) bg_vkb2_fuc_pane_cp03_ParamLimits

0x59f8,	// (0x000111fd) bg_vkb2_fuc_pane_cp03

0x63fe,	// (0x00011c03) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9333,	// (0x00014b38) bg_vkb2_func_pane_g1

0x933b,	// (0x00014b40) bg_vkb2_func_pane_g2

0x934b,	// (0x00014b50) bg_vkb2_func_pane_g3

0x9343,	// (0x00014b48) bg_vkb2_func_pane_g4

0x9353,	// (0x00014b58) bg_vkb2_func_pane_g5

0x935b,	// (0x00014b60) bg_vkb2_func_pane_g6

0x9363,	// (0x00014b68) bg_vkb2_func_pane_g7

0x936b,	// (0x00014b70) bg_vkb2_func_pane_g8

0x932b,	// (0x00014b30) bg_vkb2_func_pane_g9

0x0008,

0xfe04,	// (0x0001b609) bg_vkb2_func_pane_g

0x59f8,	// (0x000111fd) bg_vkb2_fuc_pane_cp01_ParamLimits

0x59f8,	// (0x000111fd) bg_vkb2_fuc_pane_cp01

0x638a,	// (0x00011b8f) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x638a,	// (0x00011b8f) vkb2_top_cell_right_wide_pane_g1

0x59f8,	// (0x000111fd) bg_vkb2_fuc_pane_cp02_ParamLimits

0x59f8,	// (0x000111fd) bg_vkb2_fuc_pane_cp02

0x63fe,	// (0x00011c03) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x63fe,	// (0x00011c03) vkb2_top_cell_right_narrow_pane_g1

0xd5c5,	// (0x00018dca) aid_touch_area_decrease_ParamLimits

0xd5c5,	// (0x00018dca) aid_touch_area_decrease

0xd5e9,	// (0x00018dee) aid_touch_area_increase_ParamLimits

0xd5e9,	// (0x00018dee) aid_touch_area_increase

0xd5f5,	// (0x00018dfa) aid_touch_area_mute_ParamLimits

0xd5f5,	// (0x00018dfa) aid_touch_area_mute

0xd619,	// (0x00018e1e) aid_touch_area_slider_ParamLimits

0xd619,	// (0x00018e1e) aid_touch_area_slider

0xd709,	// (0x00018f0e) popup_slider_window_g4_ParamLimits

0xd709,	// (0x00018f0e) popup_slider_window_g4

0xd715,	// (0x00018f1a) popup_slider_window_g5_ParamLimits

0xd715,	// (0x00018f1a) popup_slider_window_g5

0xd737,	// (0x00018f3c) popup_slider_window_g6_ParamLimits

0xd737,	// (0x00018f3c) popup_slider_window_g6

0xd777,	// (0x00018f7c) popup_slider_window_t2_ParamLimits

0xd777,	// (0x00018f7c) popup_slider_window_t2

0x0001,

0xfd00,	// (0x0001b505) popup_slider_window_t_ParamLimits

0xfd00,	// (0x0001b505) popup_slider_window_t

0xd78f,	// (0x00018f94) slider_pane_ParamLimits

0xd78f,	// (0x00018f94) slider_pane

0xe425,	// (0x00019c2a) slider_pane_g1_ParamLimits

0xe425,	// (0x00019c2a) slider_pane_g1

0xe439,	// (0x00019c3e) slider_pane_g2_ParamLimits

0xe439,	// (0x00019c3e) slider_pane_g2

0xe44f,	// (0x00019c54) slider_pane_g3_ParamLimits

0xe44f,	// (0x00019c54) slider_pane_g3

0x0003,

0xfe17,	// (0x0001b61c) slider_pane_g_ParamLimits

0xfe17,	// (0x0001b61c) slider_pane_g

0x8cf7,	// (0x000144fc) popup_tb_float_extension_window_ParamLimits

0x8cf7,	// (0x000144fc) popup_tb_float_extension_window

0xe47b,	// (0x00019c80) aid_size_cell_tb_float_ext

0x3ee5,	// (0x0000f6ea) bg_popup_sub_window_cp28

0xe487,	// (0x00019c8c) grid_tb_float_ext_pane

0xe493,	// (0x00019c98) cell_tb_float_ext_pane_ParamLimits

0xe493,	// (0x00019c98) cell_tb_float_ext_pane

0xe4af,	// (0x00019cb4) cell_tb_float_ext_pane_g1

0xe4b8,	// (0x00019cbd) grid_highlight_pane_cp12

0x5b4d,	// (0x00011352) cell_last_hwr_side_pane_ParamLimits

0x5b4d,	// (0x00011352) cell_last_hwr_side_pane

0xbd07,	// (0x0001750c) cell_last_hwr_side_pane_g1

0xe4c1,	// (0x00019cc6) cell_last_hwr_side_pane_g2

0x0001,

0xfe20,	// (0x0001b625) cell_last_hwr_side_pane_g

0x62b0,	// (0x00011ab5) vkb2_area_bottom_space_btn_pane_ParamLimits

0x62b0,	// (0x00011ab5) vkb2_area_bottom_space_btn_pane

0x5c73,	// (0x00011478) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdfb4,	// (0x000197b9) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x6564,	// (0x00011d69) cell_vkb2_top_candi_pane_t1_ParamLimits

0x6582,	// (0x00011d87) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x6582,	// (0x00011d87) vkb2_area_bottom_space_btn_pane_g1

0x65bc,	// (0x00011dc1) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x65bc,	// (0x00011dc1) vkb2_area_bottom_space_btn_pane_g2

0x65f2,	// (0x00011df7) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x65f2,	// (0x00011df7) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe25,	// (0x0001b62a) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe25,	// (0x0001b62a) vkb2_area_bottom_space_btn_pane_g

0x5abd,	// (0x000112c2) cel_fep_hwr_func_pane_ParamLimits

0x5abd,	// (0x000112c2) cel_fep_hwr_func_pane

0x5af9,	// (0x000112fe) cell_hwr_side_button_pane_ParamLimits

0x5af9,	// (0x000112fe) cell_hwr_side_button_pane

0xd9d8,	// (0x000191dd) aid_area_touch_clock_ParamLimits

0x6a47,	// (0x0001224c) bg_uniindi_top_pane_ParamLimits

0xd9ec,	// (0x000191f1) uniindi_top_pane_g1_ParamLimits

0xda02,	// (0x00019207) uniindi_top_pane_g2_ParamLimits

0xda0e,	// (0x00019213) uniindi_top_pane_g3_ParamLimits

0xda1f,	// (0x00019224) uniindi_top_pane_g4_ParamLimits

0xfd38,	// (0x0001b53d) uniindi_top_pane_g_ParamLimits

0xda2c,	// (0x00019231) uniindi_top_pane_t1_ParamLimits

0x6a47,	// (0x0001224c) bg_vkb2_func_pane_cp01_ParamLimits

0x6a47,	// (0x0001224c) bg_vkb2_func_pane_cp01

0xe4ca,	// (0x00019ccf) cel_fep_hwr_func_pane_g1_ParamLimits

0xe4ca,	// (0x00019ccf) cel_fep_hwr_func_pane_g1

0x6a47,	// (0x0001224c) bg_vkb2_func_pane_cp02_ParamLimits

0x6a47,	// (0x0001224c) bg_vkb2_func_pane_cp02

0xe4ca,	// (0x00019ccf) cell_hwr_side_button_pane_g1_ParamLimits

0xe4ca,	// (0x00019ccf) cell_hwr_side_button_pane_g1

0x917e,	// (0x00014983) status_pane_g4_ParamLimits

0x917e,	// (0x00014983) status_pane_g4

0x9198,	// (0x0001499d) status_pane_t1

0xba61,	// (0x00017266) form2_midp_gauge_slider_cont_pane

0xba69,	// (0x0001726e) form2_midp_gauge_slider_pane_t1_ParamLimits

0xba7b,	// (0x00017280) form2_midp_gauge_slider_pane_t2_ParamLimits

0xba8d,	// (0x00017292) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf8,	// (0x0001b2fd) form2_midp_gauge_slider_pane_t_ParamLimits

0xba9f,	// (0x000172a4) form2_midp_slider_pane_ParamLimits

0x5f36,	// (0x0001173b) aid_size_cell_func_vkb2_ParamLimits

0x5f36,	// (0x0001173b) aid_size_cell_func_vkb2

0xe467,	// (0x00019c6c) slider_pane_g4_ParamLimits

0xe467,	// (0x00019c6c) slider_pane_g4

0x663c,	// (0x00011e41) form2_midp_gauge_slider_pane_t2_cp01

0x664a,	// (0x00011e4f) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x664a,	// (0x00011e4f) form2_midp_gauge_slider_pane_t3_cp01

0x6667,	// (0x00011e6c) form2_midp_slider_pane_cp01

0x3ee5,	// (0x0000f6ea) navi_smil_pane

0xe503,	// (0x00019d08) navi_smil_pane_g1

0xe50b,	// (0x00019d10) navi_smil_pane_t1

0xe4d8,	// (0x00019cdd) form2_midp_slider_pane_g1

0xe4e1,	// (0x00019ce6) form2_midp_slider_pane_g2

0xe4e9,	// (0x00019cee) form2_midp_slider_pane_g3

0xe4d8,	// (0x00019cdd) form2_midp_slider_pane_g4

0xe4f1,	// (0x00019cf6) form2_midp_slider_pane_g5

0x0004,

0xfe2e,	// (0x0001b633) form2_midp_slider_pane_g

0x662c,	// (0x00011e31) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x662c,	// (0x00011e31) vkb2_area_bottom_space_btn_pane_g4

0x8f96,	// (0x0001479b) lc0_navi_pane_ParamLimits

0x8f96,	// (0x0001479b) lc0_navi_pane

0x9012,	// (0x00014817) lc0_stat_indi_pane_ParamLimits

0x9012,	// (0x00014817) lc0_stat_indi_pane

0x9029,	// (0x0001482e) ls0_title_pane_ParamLimits

0x9029,	// (0x0001482e) ls0_title_pane

0x75df,	// (0x00012de4) bg_popup_sub_pane_cp14_ParamLimits

0xd9bf,	// (0x000191c4) list_uniindi_pane_ParamLimits

0xd9cb,	// (0x000191d0) uniindi_top_pane_ParamLimits

0xda6a,	// (0x0001926f) list_single_uniindi_pane_g1_ParamLimits

0xda7d,	// (0x00019282) list_single_uniindi_pane_t1_ParamLimits

0x6670,	// (0x00011e75) lc0_stat_clock_pane_ParamLimits

0x6670,	// (0x00011e75) lc0_stat_clock_pane

0xe519,	// (0x00019d1e) lc0_stat_indi_pane_g1_ParamLimits

0xe519,	// (0x00019d1e) lc0_stat_indi_pane_g1

0xe526,	// (0x00019d2b) lc0_stat_indi_pane_g2_ParamLimits

0xe526,	// (0x00019d2b) lc0_stat_indi_pane_g2

0x0001,

0xfe39,	// (0x0001b63e) lc0_stat_indi_pane_g_ParamLimits

0xfe39,	// (0x0001b63e) lc0_stat_indi_pane_g

0x667d,	// (0x00011e82) lc0_uni_indicator_pane_ParamLimits

0x667d,	// (0x00011e82) lc0_uni_indicator_pane

0xe533,	// (0x00019d38) ls0_title_pane_g1_ParamLimits

0xe533,	// (0x00019d38) ls0_title_pane_g1

0xe547,	// (0x00019d4c) ls0_title_pane_t1_ParamLimits

0xe547,	// (0x00019d4c) ls0_title_pane_t1

0x668a,	// (0x00011e8f) lc0_uni_indicator_pane_g1_ParamLimits

0x668a,	// (0x00011e8f) lc0_uni_indicator_pane_g1

0xe57d,	// (0x00019d82) lc0_stat_clock_pane_t1

0x3ee5,	// (0x0000f6ea) main_ai5_pane

0xe58b,	// (0x00019d90) ai5_sk_pane_ParamLimits

0xe58b,	// (0x00019d90) ai5_sk_pane

0xe598,	// (0x00019d9d) cell_ai5_widget_pane_ParamLimits

0xe598,	// (0x00019d9d) cell_ai5_widget_pane

0xe60e,	// (0x00019e13) aid_size_cell_widget_grid

0xe622,	// (0x00019e27) bg_ai5_widget_pane_ParamLimits

0xe622,	// (0x00019e27) bg_ai5_widget_pane

0xe64a,	// (0x00019e4f) cell_ai5_widget_pane_g2

0xe65a,	// (0x00019e5f) cell_ai5_widget_pane_g3

0xe679,	// (0x00019e7e) cell_ai5_widget_pane_g4

0xe685,	// (0x00019e8a) cell_ai5_widget_pane_g5

0xe691,	// (0x00019e96) cell_ai5_widget_pane_g6

0xe69f,	// (0x00019ea4) cell_ai5_widget_pane_g7

0xe6e7,	// (0x00019eec) cell_ai5_widget_pane_t1_ParamLimits

0xe6e7,	// (0x00019eec) cell_ai5_widget_pane_t1

0xe704,	// (0x00019f09) cell_ai5_widget_pane_t2_ParamLimits

0xe704,	// (0x00019f09) cell_ai5_widget_pane_t2

0xe71c,	// (0x00019f21) cell_ai5_widget_pane_t3_ParamLimits

0xe71c,	// (0x00019f21) cell_ai5_widget_pane_t3

0xe734,	// (0x00019f39) cell_ai5_widget_pane_t4_ParamLimits

0xe734,	// (0x00019f39) cell_ai5_widget_pane_t4

0xe74e,	// (0x00019f53) cell_ai5_widget_pane_t5_ParamLimits

0xe74e,	// (0x00019f53) cell_ai5_widget_pane_t5

0xe76d,	// (0x00019f72) cell_ai5_widget_pane_t6_ParamLimits

0xe76d,	// (0x00019f72) cell_ai5_widget_pane_t6

0xe77f,	// (0x00019f84) cell_ai5_widget_pane_t7_ParamLimits

0xe77f,	// (0x00019f84) cell_ai5_widget_pane_t7

0xe798,	// (0x00019f9d) cell_ai5_widget_pane_t8_ParamLimits

0xe798,	// (0x00019f9d) cell_ai5_widget_pane_t8

0x0009,

0xfe53,	// (0x0001b658) cell_ai5_widget_pane_t_ParamLimits

0xfe53,	// (0x0001b658) cell_ai5_widget_pane_t

0xe7e4,	// (0x00019fe9) grid_ai5_widget_pane

0x75df,	// (0x00012de4) highlight_cell_ai5_widget_pane_ParamLimits

0x75df,	// (0x00012de4) highlight_cell_ai5_widget_pane

0xe7fb,	// (0x0001a000) ai5_sk_left_pane

0xe805,	// (0x0001a00a) ai5_sk_middle_pane

0xe80f,	// (0x0001a014) ai5_sk_right_pane

0xe819,	// (0x0001a01e) bg_ai5_widget_pane_g1_ParamLimits

0xe819,	// (0x0001a01e) bg_ai5_widget_pane_g1

0xe825,	// (0x0001a02a) bg_ai5_widget_pane_g2_ParamLimits

0xe825,	// (0x0001a02a) bg_ai5_widget_pane_g2

0xe831,	// (0x0001a036) bg_ai5_widget_pane_g3_ParamLimits

0xe831,	// (0x0001a036) bg_ai5_widget_pane_g3

0xe83d,	// (0x0001a042) bg_ai5_widget_pane_g4_ParamLimits

0xe83d,	// (0x0001a042) bg_ai5_widget_pane_g4

0xe849,	// (0x0001a04e) bg_ai5_widget_pane_g5_ParamLimits

0xe849,	// (0x0001a04e) bg_ai5_widget_pane_g5

0xe855,	// (0x0001a05a) bg_ai5_widget_pane_g6_ParamLimits

0xe855,	// (0x0001a05a) bg_ai5_widget_pane_g6

0xe861,	// (0x0001a066) bg_ai5_widget_pane_g7_ParamLimits

0xe861,	// (0x0001a066) bg_ai5_widget_pane_g7

0xe86d,	// (0x0001a072) bg_ai5_widget_pane_g8_ParamLimits

0xe86d,	// (0x0001a072) bg_ai5_widget_pane_g8

0xe879,	// (0x0001a07e) bg_ai5_widget_pane_g9_ParamLimits

0xe879,	// (0x0001a07e) bg_ai5_widget_pane_g9

0x0008,

0xfe68,	// (0x0001b66d) bg_ai5_widget_pane_g_ParamLimits

0xfe68,	// (0x0001b66d) bg_ai5_widget_pane_g

0xe8a0,	// (0x0001a0a5) cell_shortcut_ai5_widget_pane_ParamLimits

0xe8a0,	// (0x0001a0a5) cell_shortcut_ai5_widget_pane

0x6889,	// (0x0001208e) bg_cell_shortcut_ai5_widget_pane

0xe8b2,	// (0x0001a0b7) cell_grid_ai5_widget_pane_g1

0xe8bb,	// (0x0001a0c0) highlight_cell_shortcut_ai5_widget_pane

0x9333,	// (0x00014b38) ai5_sk_left_pane_g1

0xe8c3,	// (0x0001a0c8) ai5_sk_left_pane_g2

0xe8cb,	// (0x0001a0d0) ai5_sk_left_pane_g3

0xe8d3,	// (0x0001a0d8) ai5_sk_left_pane_g4

0x0003,

0xfe7b,	// (0x0001b680) ai5_sk_left_pane_g

0xe8db,	// (0x0001a0e0) ai5_sk_left_pane_t1

0x933b,	// (0x00014b40) ai5_sk_right_pane_g1

0xe8e9,	// (0x0001a0ee) ai5_sk_right_pane_g2

0xe8f1,	// (0x0001a0f6) ai5_sk_right_pane_g3

0xe8f9,	// (0x0001a0fe) ai5_sk_right_pane_g4

0x0003,

0xfe84,	// (0x0001b689) ai5_sk_right_pane_g

0xe901,	// (0x0001a106) ai5_sk_right_pane_t1

0x933b,	// (0x00014b40) ai5_sk_middle_pane_g1

0x9333,	// (0x00014b38) ai5_sk_middle_pane_g2

0x9353,	// (0x00014b58) ai5_sk_middle_pane_g3

0xe8f1,	// (0x0001a0f6) ai5_sk_middle_pane_g4

0xe8cb,	// (0x0001a0d0) ai5_sk_middle_pane_g5

0xe90f,	// (0x0001a114) ai5_sk_middle_pane_g6

0xe917,	// (0x0001a11c) ai5_sk_middle_pane_g7

0x0006,

0xfe8d,	// (0x0001b692) ai5_sk_middle_pane_g

0x8e18,	// (0x0001461d) aid_touch_area_size_lc0_ParamLimits

0x8e18,	// (0x0001461d) aid_touch_area_size_lc0

0x5ca2,	// (0x000114a7) cell_hwr_candidate_pane_t1_ParamLimits

0x8e36,	// (0x0001463b) aid_touch_navi_pane

0x9128,	// (0x0001492d) status_dt_navi_pane_ParamLimits

0x9128,	// (0x0001492d) status_dt_navi_pane

0x9135,	// (0x0001493a) status_dt_sta_pane_ParamLimits

0x9135,	// (0x0001493a) status_dt_sta_pane

0xe91f,	// (0x0001a124) dt_sta_controll_pane

0xe92c,	// (0x0001a131) dt_sta_indi_pane

0xe93d,	// (0x0001a142) dt_sta_title_pane

0x6a47,	// (0x0001224c) bg_dt_sta_indi_pane_ParamLimits

0x6a47,	// (0x0001224c) bg_dt_sta_indi_pane

0xe950,	// (0x0001a155) dt_sta_battery_pane

0xe958,	// (0x0001a15d) dt_sta_indi_pane_g1

0xe961,	// (0x0001a166) dt_sta_indi_pane_g2

0xe96a,	// (0x0001a16f) dt_sta_indi_pane_g3

0x0002,

0xfe9c,	// (0x0001b6a1) dt_sta_indi_pane_g

0xe973,	// (0x0001a178) dt_sta_signal_pane

0x75df,	// (0x00012de4) bg_dt_sta_title_pane_ParamLimits

0x75df,	// (0x00012de4) bg_dt_sta_title_pane

0xe97c,	// (0x0001a181) dt_sta_title_pane_g1

0xe984,	// (0x0001a189) dt_sta_title_pane_t1_ParamLimits

0xe984,	// (0x0001a189) dt_sta_title_pane_t1

0x3ee5,	// (0x0000f6ea) bg_dt_sta_control_pane

0xe999,	// (0x0001a19e) dt_sta_controll_pane_g1

0xe9a2,	// (0x0001a1a7) bg_dt_sta_title_pane_g1

0xe9ab,	// (0x0001a1b0) bg_dt_sta_title_pane_g2

0xe9b4,	// (0x0001a1b9) bg_dt_sta_title_pane_g3

0x0002,

0xfea3,	// (0x0001b6a8) bg_dt_sta_title_pane_g

0xbd07,	// (0x0001750c) bg_dt_sta_indi_pane_g1

0xe9bd,	// (0x0001a1c2) dt_sta_signal_pane_g1

0xe9c5,	// (0x0001a1ca) dt_sta_signal_pane_g2

0x0001,

0xfeaa,	// (0x0001b6af) dt_sta_signal_pane_g

0xe9cd,	// (0x0001a1d2) dt_sta_battery_pane_g1

0xe9d6,	// (0x0001a1db) dt_sta_battery_pane_t1

0xbd07,	// (0x0001750c) bg_dt_sta_control_pane_g1

0x7e9d,	// (0x000136a2) fep_china_uni_eep_pane

0x7ea5,	// (0x000136aa) fep_china_uni_entry_pane_ParamLimits

0x7eb5,	// (0x000136ba) popup_fep_china_uni_window_g1_ParamLimits

0x7ec5,	// (0x000136ca) popup_fep_china_uni_window_g2_ParamLimits

0x7ec5,	// (0x000136ca) popup_fep_china_uni_window_g2

0x0001,

0xf730,	// (0x0001af35) popup_fep_china_uni_window_g_ParamLimits

0xf730,	// (0x0001af35) popup_fep_china_uni_window_g

0xe9e5,	// (0x0001a1ea) fep_china_uni_eep_pane_g1

0xe9ed,	// (0x0001a1f2) fep_china_uni_eep_pane_t1

0xe4fa,	// (0x00019cff) aid_touch_area_size_smil_player

0x8f8e,	// (0x00014793) lc0_clock_pane

0x918c,	// (0x00014991) status_pane_g5_ParamLimits

0x918c,	// (0x00014991) status_pane_g5

0x897c,	// (0x00014181) popup_keymap_window

0x914a,	// (0x0001494f) status_icon_pane

0xe65a,	// (0x00019e5f) cell_ai5_widget_pane_g3_ParamLimits

0xe679,	// (0x00019e7e) cell_ai5_widget_pane_g4_ParamLimits

0xe685,	// (0x00019e8a) cell_ai5_widget_pane_g5_ParamLimits

0xe6ab,	// (0x00019eb0) cell_ai5_widget_pane_g8_ParamLimits

0xe6ab,	// (0x00019eb0) cell_ai5_widget_pane_g8

0xe6bf,	// (0x00019ec4) cell_ai5_widget_pane_g9_ParamLimits

0xe6bf,	// (0x00019ec4) cell_ai5_widget_pane_g9

0xe6d3,	// (0x00019ed8) cell_ai5_widget_pane_g10_ParamLimits

0xe6d3,	// (0x00019ed8) cell_ai5_widget_pane_g10

0xe9fc,	// (0x0001a201) status_icon_pane_g1

0x3ee5,	// (0x0000f6ea) bg_popup_sub_pane_cp13

0xea04,	// (0x0001a209) popup_keymap_window_t1

0x8706,	// (0x00013f0b) control_pane_g6_ParamLimits

0x8706,	// (0x00013f0b) control_pane_g6

0x8713,	// (0x00013f18) control_pane_g7_ParamLimits

0x8713,	// (0x00013f18) control_pane_g7

0x8720,	// (0x00013f25) control_pane_g8_ParamLimits

0x8720,	// (0x00013f25) control_pane_g8

0xe91f,	// (0x0001a124) dt_sta_controll_pane_ParamLimits

0xe92c,	// (0x0001a131) dt_sta_indi_pane_ParamLimits

0xe93d,	// (0x0001a142) dt_sta_title_pane_ParamLimits

0x6f7c,	// (0x00012781) aid_size_touch_scroll_bar_cale

0x4ce4,	// (0x000104e9) popup_discreet_window_ParamLimits

0x4ce4,	// (0x000104e9) popup_discreet_window

0x4d72,	// (0x00010577) popup_sk_window

0x9a2a,	// (0x0001522f) bg_popup_sub_pane_cp28_ParamLimits

0x9a2a,	// (0x0001522f) bg_popup_sub_pane_cp28

0xea12,	// (0x0001a217) popup_discreet_window_g1_ParamLimits

0xea12,	// (0x0001a217) popup_discreet_window_g1

0xea32,	// (0x0001a237) popup_discreet_window_t1_ParamLimits

0xea32,	// (0x0001a237) popup_discreet_window_t1

0xea50,	// (0x0001a255) popup_discreet_window_t2_ParamLimits

0xea50,	// (0x0001a255) popup_discreet_window_t2

0x0002,

0xfeaf,	// (0x0001b6b4) popup_discreet_window_t_ParamLimits

0xfeaf,	// (0x0001b6b4) popup_discreet_window_t

0x669d,	// (0x00011ea2) popup_sk_window_g1

0x66a7,	// (0x00011eac) popup_sk_window_g2

0x0001,

0xfeb6,	// (0x0001b6bb) popup_sk_window_g

0xeaa2,	// (0x0001a2a7) popup_sk_window_t1

0xeab0,	// (0x0001a2b5) popup_sk_window_t1_copy1

0xe64a,	// (0x00019e4f) cell_ai5_widget_pane_g2_ParamLimits

0xe7aa,	// (0x00019faf) cell_ai5_widget_pane_t9_ParamLimits

0xe7aa,	// (0x00019faf) cell_ai5_widget_pane_t9

0x3ee5,	// (0x0000f6ea) main_fep_fshwr2_pane

0xeabe,	// (0x0001a2c3) aid_fshwr2_btn_pane

0xeac6,	// (0x0001a2cb) aid_fshwr2_syb_pane

0xeace,	// (0x0001a2d3) aid_fshwr2_txt_pane

0xead6,	// (0x0001a2db) fshwr2_func_candi_pane

0xeae0,	// (0x0001a2e5) fshwr2_hwr_syb_pane

0xeaea,	// (0x0001a2ef) fshwr2_icf_pane

0x3ee5,	// (0x0000f6ea) fshwr2_icf_bg_pane

0xeb0c,	// (0x0001a311) fshwr2_icf_pane_t1_ParamLimits

0xeb0c,	// (0x0001a311) fshwr2_icf_pane_t1

0xbd07,	// (0x0001750c) fshwr2_func_candi_pane_g1

0xeb23,	// (0x0001a328) fshwr2_func_candi_row_pane_ParamLimits

0xeb23,	// (0x0001a328) fshwr2_func_candi_row_pane

0xeb34,	// (0x0001a339) cell_fshwr2_syb_pane_ParamLimits

0xeb34,	// (0x0001a339) cell_fshwr2_syb_pane

0xbf91,	// (0x00017796) fshwr2_hwr_syb_pane_g1_ParamLimits

0xbf91,	// (0x00017796) fshwr2_hwr_syb_pane_g1

0x3ee5,	// (0x0000f6ea) bg_popup_call_pane_cp01

0xeb4e,	// (0x0001a353) fshwr2_func_candi_cell_pane_ParamLimits

0xeb4e,	// (0x0001a353) fshwr2_func_candi_cell_pane

0xeb80,	// (0x0001a385) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xeb80,	// (0x0001a385) fshwr2_func_candi_cell_bg_pane

0xeb9a,	// (0x0001a39f) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xeb9a,	// (0x0001a39f) fshwr2_func_candi_cell_pane_g1

0xebba,	// (0x0001a3bf) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xebba,	// (0x0001a3bf) fshwr2_func_candi_cell_pane_t1

0x3ee5,	// (0x0000f6ea) bg_button_pane_cp08

0x842b,	// (0x00013c30) cell_fshwr2_syb_bg_pane

0xebcd,	// (0x0001a3d2) cell_fshwr2_syb_bg_pane_g1

0xebd5,	// (0x0001a3da) cell_fshwr2_syb_bg_pane_t1

0x75df,	// (0x00012de4) main_tmo_pane

0xa554,	// (0x00015d59) uni_indicator_pane_g1_ParamLimits

0xa569,	// (0x00015d6e) uni_indicator_pane_g2_ParamLimits

0xa57f,	// (0x00015d84) uni_indicator_pane_g3_ParamLimits

0xa595,	// (0x00015d9a) uni_indicator_pane_g4_ParamLimits

0xa595,	// (0x00015d9a) uni_indicator_pane_g4

0xa5a9,	// (0x00015dae) uni_indicator_pane_g5_ParamLimits

0xa5a9,	// (0x00015dae) uni_indicator_pane_g5

0xa5bd,	// (0x00015dc2) uni_indicator_pane_g6_ParamLimits

0xa5bd,	// (0x00015dc2) uni_indicator_pane_g6

0xf92d,	// (0x0001b132) uni_indicator_pane_g_ParamLimits

0xd595,	// (0x00018d9a) popup_tmo_note_window_ParamLimits

0xd595,	// (0x00018d9a) popup_tmo_note_window

0x3ee5,	// (0x0000f6ea) fshwr2_bg_pane

0xebab,	// (0x0001a3b0) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xebab,	// (0x0001a3b0) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfebb,	// (0x0001b6c0) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfebb,	// (0x0001b6c0) fshwr2_func_candi_cell_pane_g

0xbd07,	// (0x0001750c) bg_popup_window_pane_cp01

0xebe4,	// (0x0001a3e9) bg_popup_window_pane_g1_cp01

0xebed,	// (0x0001a3f2) bg_popup_window_pane_cp22_ParamLimits

0xebed,	// (0x0001a3f2) bg_popup_window_pane_cp22

0xebfb,	// (0x0001a400) listscroll_tmo_link_pane_ParamLimits

0xebfb,	// (0x0001a400) listscroll_tmo_link_pane

0xec3b,	// (0x0001a440) popup_tmo_note_window_g1_ParamLimits

0xec3b,	// (0x0001a440) popup_tmo_note_window_g1

0xec48,	// (0x0001a44d) tmo_note_info_pane_ParamLimits

0xec48,	// (0x0001a44d) tmo_note_info_pane

0xec62,	// (0x0001a467) list_tmo_note_info_pane_g1_ParamLimits

0xec62,	// (0x0001a467) list_tmo_note_info_pane_g1

0xec79,	// (0x0001a47e) list_tmo_note_info_pane_g2_ParamLimits

0xec79,	// (0x0001a47e) list_tmo_note_info_pane_g2

0x0001,

0xfec0,	// (0x0001b6c5) list_tmo_note_info_pane_g_ParamLimits

0xfec0,	// (0x0001b6c5) list_tmo_note_info_pane_g

0xec95,	// (0x0001a49a) list_tmo_note_info_text_pane_ParamLimits

0xec95,	// (0x0001a49a) list_tmo_note_info_text_pane

0xed1a,	// (0x0001a51f) list_tmo_link_pane

0xed27,	// (0x0001a52c) scroll_pane_cp20

0xed34,	// (0x0001a539) list_single_tmo_link_pane_ParamLimits

0xed34,	// (0x0001a539) list_single_tmo_link_pane

0xed44,	// (0x0001a549) list_single_tmo_link_pane_t1

0xed52,	// (0x0001a557) list_tmo_note_info_text_pane_t1_ParamLimits

0xed52,	// (0x0001a557) list_tmo_note_info_text_pane_t1

0x7807,	// (0x0001300c) aid_size_touch_scroll_bar_cp01_ParamLimits

0x7807,	// (0x0001300c) aid_size_touch_scroll_bar_cp01

0x7699,	// (0x00012e9e) aid_size_touch_slider_marker

0x4d5a,	// (0x0001055f) popup_settings_window_ParamLimits

0x4d5a,	// (0x0001055f) popup_settings_window

0x87e1,	// (0x00013fe6) popup_candi_list_indi_window

0x8e36,	// (0x0001463b) aid_touch_navi_pane_ParamLimits

0x5e6d,	// (0x00011672) rs_clock_indi_pane

0x5e76,	// (0x0001167b) sctrl_sk_bottom_pane_ParamLimits

0x5e87,	// (0x0001168c) sctrl_sk_top_pane_ParamLimits

0x5f88,	// (0x0001178d) popup_fep_tooltip_window

0xe60e,	// (0x00019e13) aid_size_cell_widget_grid_ParamLimits

0xe63e,	// (0x00019e43) cell_ai5_widget_pane_g1_ParamLimits

0xe63e,	// (0x00019e43) cell_ai5_widget_pane_g1

0xe691,	// (0x00019e96) cell_ai5_widget_pane_g6_ParamLimits

0xe69f,	// (0x00019ea4) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe3e,	// (0x0001b643) cell_ai5_widget_pane_g_ParamLimits

0xfe3e,	// (0x0001b643) cell_ai5_widget_pane_g

0xe7ce,	// (0x00019fd3) cell_ai5_widget_pane_t10_ParamLimits

0xe7ce,	// (0x00019fd3) cell_ai5_widget_pane_t10

0xe7e4,	// (0x00019fe9) grid_ai5_widget_pane_ParamLimits

0xe885,	// (0x0001a08a) cell_contacts_ai5_widget_pane_ParamLimits

0xe885,	// (0x0001a08a) cell_contacts_ai5_widget_pane

0xea65,	// (0x0001a26a) popup_discreet_window_t3_ParamLimits

0xea65,	// (0x0001a26a) popup_discreet_window_t3

0xeaf4,	// (0x0001a2f9) popup_fshwr2_char_preview_window_ParamLimits

0xeaf4,	// (0x0001a2f9) popup_fshwr2_char_preview_window

0xecb3,	// (0x0001a4b8) tmo_note_info_pane_t1

0xecc8,	// (0x0001a4cd) tmo_note_info_pane_t2

0xece1,	// (0x0001a4e6) tmo_note_info_pane_t3

0xecf6,	// (0x0001a4fb) tmo_note_info_pane_t4

0xed08,	// (0x0001a50d) tmo_note_info_pane_t5

0x0004,

0xfec5,	// (0x0001b6ca) tmo_note_info_pane_t

0xed1a,	// (0x0001a51f) list_tmo_link_pane_ParamLimits

0xed27,	// (0x0001a52c) scroll_pane_cp20_ParamLimits

0x3ee5,	// (0x0000f6ea) bg_popup_fep_char_preview_window_cp01

0xed6b,	// (0x0001a570) popup_fshwr2_char_preview_window_t1

0xed79,	// (0x0001a57e) popup_candi_list_indi_window_g1

0xed82,	// (0x0001a587) bg_cell_contacts_ai5_widget_pane

0xed8e,	// (0x0001a593) cell_contacts_ai5_widget_pane_g1

0xeda2,	// (0x0001a5a7) cell_contacts_ai5_widget_pane_g2

0xedb1,	// (0x0001a5b6) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfed0,	// (0x0001b6d5) cell_contacts_ai5_widget_pane_g

0xedc4,	// (0x0001a5c9) cell_contacts_ai5_widget_pane_t1

0x75df,	// (0x00012de4) highlight_cell_shortcut_ai5_widget_pane_cp01

0xee3e,	// (0x0001a643) settings_container_pane

0x842b,	// (0x00013c30) listscroll_set_pane_copy1

0xb1e3,	// (0x000169e8) scroll_pane_cp121_copy1

0xee4a,	// (0x0001a64f) set_content_pane_copy1

0xee52,	// (0x0001a657) aid_height_set_list_copy1_ParamLimits

0xee52,	// (0x0001a657) aid_height_set_list_copy1

0xa7e5,	// (0x00015fea) aid_size_parent_copy1_ParamLimits

0xa7e5,	// (0x00015fea) aid_size_parent_copy1

0xee5e,	// (0x0001a663) button_value_adjust_pane_cp6_copy1_ParamLimits

0xee5e,	// (0x0001a663) button_value_adjust_pane_cp6_copy1

0x87b9,	// (0x00013fbe) list_highlight_pane_cp2_copy1_ParamLimits

0x87b9,	// (0x00013fbe) list_highlight_pane_cp2_copy1

0xee72,	// (0x0001a677) list_set_pane_copy1_ParamLimits

0xee72,	// (0x0001a677) list_set_pane_copy1

0xedd9,	// (0x0001a5de) main_pane_set_t1_copy1_ParamLimits

0xedd9,	// (0x0001a5de) main_pane_set_t1_copy1

0xee13,	// (0x0001a618) main_pane_set_t2_copy1_ParamLimits

0xee13,	// (0x0001a618) main_pane_set_t2_copy1

0xef39,	// (0x0001a73e) main_pane_set_t3_copy1

0xef47,	// (0x0001a74c) main_pane_set_t4_copy1

0xee32,	// (0x0001a637) set_content_pane_g1_copy1_ParamLimits

0xee32,	// (0x0001a637) set_content_pane_g1_copy1

0xef55,	// (0x0001a75a) setting_code_pane_copy1

0xef5f,	// (0x0001a764) setting_slider_graphic_pane_copy1

0xef5f,	// (0x0001a764) setting_slider_pane_copy1

0xef5f,	// (0x0001a764) setting_text_pane_copy1

0xef69,	// (0x0001a76e) setting_volume_pane_copy1

0xef72,	// (0x0001a777) settings_code_pane_cp2_copy1

0xef7a,	// (0x0001a77f) settings_code_pane_cp_copy1_ParamLimits

0xef7a,	// (0x0001a77f) settings_code_pane_cp_copy1

0xef8e,	// (0x0001a793) volume_set_pane_copy1

0xef9a,	// (0x0001a79f) volume_set_pane_g10_copy1

0xefa6,	// (0x0001a7ab) volume_set_pane_g1_copy1

0xefb0,	// (0x0001a7b5) volume_set_pane_g2_copy1

0xefba,	// (0x0001a7bf) volume_set_pane_g3_copy1

0xefc4,	// (0x0001a7c9) volume_set_pane_g4_copy1

0xefce,	// (0x0001a7d3) volume_set_pane_g5_copy1

0xefd8,	// (0x0001a7dd) volume_set_pane_g6_copy1

0xefe2,	// (0x0001a7e7) volume_set_pane_g7_copy1

0xefec,	// (0x0001a7f1) volume_set_pane_g8_copy1

0xeff6,	// (0x0001a7fb) volume_set_pane_g9_copy1

0x67a3,	// (0x00011fa8) bg_set_opt_pane_cp_copy1_ParamLimits

0x67a3,	// (0x00011fa8) bg_set_opt_pane_cp_copy1

0xf000,	// (0x0001a805) setting_slider_pane_t1_copy1_ParamLimits

0xf000,	// (0x0001a805) setting_slider_pane_t1_copy1

0xf01e,	// (0x0001a823) setting_slider_pane_t2_copy1_ParamLimits

0xf01e,	// (0x0001a823) setting_slider_pane_t2_copy1

0xf038,	// (0x0001a83d) setting_slider_pane_t3_copy1_ParamLimits

0xf038,	// (0x0001a83d) setting_slider_pane_t3_copy1

0xf050,	// (0x0001a855) slider_set_pane_copy1_ParamLimits

0xf050,	// (0x0001a855) slider_set_pane_copy1

0x771b,	// (0x00012f20) set_opt_bg_pane_g1_copy2

0x7723,	// (0x00012f28) set_opt_bg_pane_g2_copy2

0xf066,	// (0x0001a86b) set_opt_bg_pane_g3_copy2

0x7733,	// (0x00012f38) set_opt_bg_pane_g4_copy2

0x773b,	// (0x00012f40) set_opt_bg_pane_g5_copy2

0x7743,	// (0x00012f48) set_opt_bg_pane_g6_copy2

0xf070,	// (0x0001a875) set_opt_bg_pane_g7_copy2

0xf07a,	// (0x0001a87f) set_opt_bg_pane_g8_copy2

0xf084,	// (0x0001a889) set_opt_bg_pane_g9_copy2

0xf08e,	// (0x0001a893) aid_size_touch_slider_mark_copy1_ParamLimits

0xf08e,	// (0x0001a893) aid_size_touch_slider_mark_copy1

0xf0a2,	// (0x0001a8a7) slider_set_pane_g1_copy1

0xf0ab,	// (0x0001a8b0) slider_set_pane_g2_copy1

0xbc6c,	// (0x00017471) slider_set_pane_g3_copy1_ParamLimits

0xbc6c,	// (0x00017471) slider_set_pane_g3_copy1

0xbc80,	// (0x00017485) slider_set_pane_g4_copy1_ParamLimits

0xbc80,	// (0x00017485) slider_set_pane_g4_copy1

0xbc98,	// (0x0001749d) slider_set_pane_g5_copy1_ParamLimits

0xbc98,	// (0x0001749d) slider_set_pane_g5_copy1

0xbc6c,	// (0x00017471) slider_set_pane_g6_copy1_ParamLimits

0xbc6c,	// (0x00017471) slider_set_pane_g6_copy1

0xf0b3,	// (0x0001a8b8) slider_set_pane_g7_copy1_ParamLimits

0xf0b3,	// (0x0001a8b8) slider_set_pane_g7_copy1

0x4068,	// (0x0000f86d) bg_set_opt_pane_cp2_copy1

0xf0c9,	// (0x0001a8ce) setting_slider_graphic_pane_g1_copy1

0xf0d2,	// (0x0001a8d7) setting_slider_graphic_pane_t1_copy1

0xf0e2,	// (0x0001a8e7) setting_slider_graphic_pane_t2_copy1

0xf0f2,	// (0x0001a8f7) slider_set_pane_cp_copy1

0xf102,	// (0x0001a907) input_focus_pane_cp1_copy1

0xf10b,	// (0x0001a910) list_set_text_pane_copy1

0xf113,	// (0x0001a918) setting_text_pane_g1_copy1

0xf11c,	// (0x0001a921) set_text_pane_t1_copy1

0xf102,	// (0x0001a907) input_focus_pane_cp2_copy1

0xf113,	// (0x0001a918) setting_code_pane_g1_copy1

0xf135,	// (0x0001a93a) setting_code_pane_t1_copy1

0xf143,	// (0x0001a948) list_set_graphic_pane_copy1

0x4068,	// (0x0000f86d) bg_set_opt_pane_cp4_copy1

0x8125,	// (0x0001392a) list_set_graphic_pane_g1_copy1_ParamLimits

0x8125,	// (0x0001392a) list_set_graphic_pane_g1_copy1

0xf155,	// (0x0001a95a) list_set_graphic_pane_g2_copy1

0x813d,	// (0x00013942) list_set_graphic_pane_t1_copy1_ParamLimits

0x813d,	// (0x00013942) list_set_graphic_pane_t1_copy1

0xbd07,	// (0x0001750c) rs_clock_indi_pane_g1

0xf15d,	// (0x0001a962) rs_clock_indi_pane_t1

0xf16b,	// (0x0001a970) rs_indi_pane

0xf173,	// (0x0001a978) rs_indi_pane_g1

0xf17c,	// (0x0001a981) rs_indi_pane_g2

0xf185,	// (0x0001a98a) rs_indi_pane_g3

0x0002,

0xfed7,	// (0x0001b6dc) rs_indi_pane_g

0x842b,	// (0x00013c30) bg_popup_preview_window_pane_cp03

0xf18e,	// (0x0001a993) popup_fep_tooltip_window_t1

0xcbdd,	// (0x000183e2) popup_note2_window_g2_ParamLimits

0xcbdd,	// (0x000183e2) popup_note2_window_g2

0x0001,

0xfc70,	// (0x0001b475) popup_note2_window_g_ParamLimits

0xfc70,	// (0x0001b475) popup_note2_window_g

0xd1d4,	// (0x000189d9) bg_popup_sub_pane_cp11_ParamLimits

0xd1e1,	// (0x000189e6) cell_ai3_links_pane_g1_ParamLimits

0xd1f8,	// (0x000189fd) cell_ai3_links_pane_t1

0xf11c,	// (0x0001a921) set_text_pane_t1_copy1_ParamLimits

0x8338,	// (0x00013b3d) cell_graphic_popup_pane_cp2_ParamLimits

0x8338,	// (0x00013b3d) cell_graphic_popup_pane_cp2

0xf19c,	// (0x0001a9a1) cell_graphic_popup_pane_g1_cp2

0x6d8f,	// (0x00012594) cell_graphic_popup_pane_g2_cp2

0xf1a4,	// (0x0001a9a9) cell_graphic_popup_pane_g3_cp2

0xf1ac,	// (0x0001a9b1) cell_graphic_popup_pane_t2_cp2

0x6da0,	// (0x000125a5) grid_highlight_pane_cp3_cp2

0x7af4,	// (0x000132f9) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x75df,	// (0x00012de4) main_tmo_pane_ParamLimits

0xd589,	// (0x00018d8e) popup_tmo_big_image_note_window

0xe62e,	// (0x00019e33) cell_ai5_widget_list_pane

0xe636,	// (0x00019e3b) cell_ai5_widget_lrg_icon_pane

0xecb3,	// (0x0001a4b8) tmo_note_info_pane_t1_ParamLimits

0xecc8,	// (0x0001a4cd) tmo_note_info_pane_t2_ParamLimits

0xece1,	// (0x0001a4e6) tmo_note_info_pane_t3_ParamLimits

0xecf6,	// (0x0001a4fb) tmo_note_info_pane_t4_ParamLimits

0xed08,	// (0x0001a50d) tmo_note_info_pane_t5_ParamLimits

0xfec5,	// (0x0001b6ca) tmo_note_info_pane_t_ParamLimits

0xee3e,	// (0x0001a643) settings_container_pane_ParamLimits

0xf0fa,	// (0x0001a8ff) indicator_popup_pane_cp5

0xf0fa,	// (0x0001a8ff) indicator_popup_pane_cp6

0xf143,	// (0x0001a948) list_set_graphic_pane_copy1_ParamLimits

0x3ee5,	// (0x0000f6ea) bg_popup_window_pane_cp23

0xf1ba,	// (0x0001a9bf) popup_tmo_big_image_note_window_g1

0xf1c6,	// (0x0001a9cb) popup_tmo_big_image_note_window_t1

0xf1d6,	// (0x0001a9db) popup_tmo_big_image_note_window_t2

0xf1e6,	// (0x0001a9eb) popup_tmo_big_image_note_window_t3

0x0002,

0xfede,	// (0x0001b6e3) popup_tmo_big_image_note_window_t

0xf1f6,	// (0x0001a9fb) cell_ai5_widget_lrg_icon_pane_g1

0xf1fe,	// (0x0001aa03) cell_ai5_widget_lrg_icon_pane_t1

0xf20c,	// (0x0001aa11) cell_ai5_widget_list_row_pane_ParamLimits

0xf20c,	// (0x0001aa11) cell_ai5_widget_list_row_pane

0xf225,	// (0x0001aa2a) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf225,	// (0x0001aa2a) cell_ai5_widget_list_row_pane_g1

0xf232,	// (0x0001aa37) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf232,	// (0x0001aa37) cell_ai5_widget_list_row_pane_t1

0xf24a,	// (0x0001aa4f) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf24a,	// (0x0001aa4f) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfee5,	// (0x0001b6ea) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee5,	// (0x0001b6ea) cell_ai5_widget_list_row_pane_t

0x4c07,	// (0x0001040c) main_fep_vtchi_ss_pane

0xf25c,	// (0x0001aa61) popup_fep_char_pre_window

0xf264,	// (0x0001aa69) popup_fep_ituss_window

0xf285,	// (0x0001aa8a) popup_fep_vkbss_window

0xf2a6,	// (0x0001aaab) grid_vkbss_keypad_pane_ParamLimits

0xf2a6,	// (0x0001aaab) grid_vkbss_keypad_pane

0xf2b6,	// (0x0001aabb) ituss_keypad_pane

0xf2cf,	// (0x0001aad4) aid_vkbss_key_offset_ParamLimits

0xf2cf,	// (0x0001aad4) aid_vkbss_key_offset

0xf2db,	// (0x0001aae0) cell_vkbss_key_pane_ParamLimits

0xf2db,	// (0x0001aae0) cell_vkbss_key_pane

0xf2f1,	// (0x0001aaf6) bg_cell_vkbss_key_g1_ParamLimits

0xf2f1,	// (0x0001aaf6) bg_cell_vkbss_key_g1

0xf2fd,	// (0x0001ab02) cell_vkbss_key_3p_pane_ParamLimits

0xf2fd,	// (0x0001ab02) cell_vkbss_key_3p_pane

0xf317,	// (0x0001ab1c) cell_vkbss_key_g1_ParamLimits

0xf317,	// (0x0001ab1c) cell_vkbss_key_g1

0xf331,	// (0x0001ab36) cell_vkbss_key_t1_ParamLimits

0xf331,	// (0x0001ab36) cell_vkbss_key_t1

0xf35c,	// (0x0001ab61) cell_ituss_key_pane_ParamLimits

0xf35c,	// (0x0001ab61) cell_ituss_key_pane

0xf36c,	// (0x0001ab71) bg_cell_ituss_key_g1_ParamLimits

0xf36c,	// (0x0001ab71) bg_cell_ituss_key_g1

0xf378,	// (0x0001ab7d) cell_ituss_key_pane_g1_ParamLimits

0xf378,	// (0x0001ab7d) cell_ituss_key_pane_g1

0xf384,	// (0x0001ab89) cell_ituss_key_pane_g2_ParamLimits

0xf384,	// (0x0001ab89) cell_ituss_key_pane_g2

0x0001,

0xfeea,	// (0x0001b6ef) cell_ituss_key_pane_g_ParamLimits

0xfeea,	// (0x0001b6ef) cell_ituss_key_pane_g

0xf3a0,	// (0x0001aba5) cell_ituss_key_t1_ParamLimits

0xf3a0,	// (0x0001aba5) cell_ituss_key_t1

0xf3ce,	// (0x0001abd3) cell_ituss_key_t2_ParamLimits

0xf3ce,	// (0x0001abd3) cell_ituss_key_t2

0xf3ff,	// (0x0001ac04) cell_ituss_key_t3_ParamLimits

0xf3ff,	// (0x0001ac04) cell_ituss_key_t3

0xf430,	// (0x0001ac35) cell_ituss_key_t4_ParamLimits

0xf430,	// (0x0001ac35) cell_ituss_key_t4

0x0003,

0xfeef,	// (0x0001b6f4) cell_ituss_key_t_ParamLimits

0xfeef,	// (0x0001b6f4) cell_ituss_key_t

0xf461,	// (0x0001ac66) cell_vkbss_key_3p_pane_g1

0xf469,	// (0x0001ac6e) cell_vkbss_key_3p_pane_g2

0xf471,	// (0x0001ac76) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef8,	// (0x0001b6fd) cell_vkbss_key_3p_pane_g

0x3ee5,	// (0x0000f6ea) bg_popup_fep_char_preview_window_cp02

0xf479,	// (0x0001ac7e) popup_fep_char_pre_window_t1

0xe604,	// (0x00019e09) main_ai5_sk_pane

0xed82,	// (0x0001a587) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xed8e,	// (0x0001a593) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xeda2,	// (0x0001a5a7) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xedb1,	// (0x0001a5b6) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfed0,	// (0x0001b6d5) cell_contacts_ai5_widget_pane_g_ParamLimits

0xedc4,	// (0x0001a5c9) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x75df,	// (0x00012de4) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf488,	// (0x0001ac8d) main_ai5_sk_pane_g1

0x9862,	// (0x00015067) popup_query_code_window_g1

0xf27a,	// (0x0001aa7f) popup_fep_vkb_icf_pane

0xf290,	// (0x0001aa95) popup_fep_vtchi_icf_pane

0x75df,	// (0x00012de4) bg_icf_pane

0xf4a0,	// (0x0001aca5) list_vkb_icf_pane

0x75df,	// (0x00012de4) bg_icf_pane_cp01

0xd548,	// (0x00018d4d) vtchi_icf_list_pane

0xf4c0,	// (0x0001acc5) list_vkb_icf_pane_t1_ParamLimits

0xf4c0,	// (0x0001acc5) list_vkb_icf_pane_t1

0xf4d7,	// (0x0001acdc) vtchi_icf_list_pane_t1_ParamLimits

0xf4d7,	// (0x0001acdc) vtchi_icf_list_pane_t1

0xf264,	// (0x0001aa69) popup_fep_ituss_window_ParamLimits

0xf290,	// (0x0001aa95) popup_fep_vtchi_icf_pane_ParamLimits

0xf2b6,	// (0x0001aabb) ituss_keypad_pane_ParamLimits

0xf2c6,	// (0x0001aacb) ituss_sks_pane

0x75df,	// (0x00012de4) bg_icf_pane_ParamLimits

0xf491,	// (0x0001ac96) icf_edit_indi_pane_ParamLimits

0xf491,	// (0x0001ac96) icf_edit_indi_pane

0xf4a0,	// (0x0001aca5) list_vkb_icf_pane_ParamLimits

0x75df,	// (0x00012de4) bg_icf_pane_cp01_ParamLimits

0xf4ac,	// (0x0001acb1) icf_edit_indi_pane_cp01_ParamLimits

0xf4ac,	// (0x0001acb1) icf_edit_indi_pane_cp01

0xf4b8,	// (0x0001acbd) vtchi_query_pane

0xbf91,	// (0x00017796) icf_edit_indi_pane_g1_ParamLimits

0xbf91,	// (0x00017796) icf_edit_indi_pane_g1

0xf4f0,	// (0x0001acf5) icf_edit_indi_pane_g2_ParamLimits

0xf4f0,	// (0x0001acf5) icf_edit_indi_pane_g2

0x0001,

0xfeff,	// (0x0001b704) icf_edit_indi_pane_g_ParamLimits

0xfeff,	// (0x0001b704) icf_edit_indi_pane_g

0xf4fc,	// (0x0001ad01) icf_edit_indi_pane_t1

0xf50a,	// (0x0001ad0f) bg_input_focus_pane_cp042

0x6f73,	// (0x00012778) vtchi_button_pane

0xf513,	// (0x0001ad18) vtchi_query_pane_t1

0xf521,	// (0x0001ad26) vtchi_query_pane_t2

0xf52f,	// (0x0001ad34) vtchi_query_pane_t3

0x0002,

0xff04,	// (0x0001b709) vtchi_query_pane_t

0x3ee5,	// (0x0000f6ea) bg_button_pane_cp13

0xf53d,	// (0x0001ad42) vtchi_button_pane_g1

0xdab4,	// (0x000192b9) ituss_sks_pane_g1

0xf545,	// (0x0001ad4a) ituss_sks_pane_g2

0x0001,

0xff0b,	// (0x0001b710) ituss_sks_pane_g

0xf54e,	// (0x0001ad53) ituss_sks_pane_t1

0xf55c,	// (0x0001ad61) ituss_sks_pane_t2

0x0001,

0xff10,	// (0x0001b715) ituss_sks_pane_t

0xb716,	// (0x00016f1b) indicator_nsta_pane_cp_g1

0xb71f,	// (0x00016f24) indicator_nsta_pane_cp_g2

0xb727,	// (0x00016f2c) indicator_nsta_pane_cp_g3

0xb72f,	// (0x00016f34) indicator_nsta_pane_cp_g4

0xb737,	// (0x00016f3c) indicator_nsta_pane_cp_g5

0xb73f,	// (0x00016f44) indicator_nsta_pane_cp_g6

0x0005,

0xfaae,	// (0x0001b2b3) indicator_nsta_pane_cp_g

0xe20f,	// (0x00019a14) cell_graphic2_pane_t2_ParamLimits

0xe20f,	// (0x00019a14) cell_graphic2_pane_t2

0x0001,

0xfdc7,	// (0x0001b5cc) cell_graphic2_pane_t_ParamLimits

0xfdc7,	// (0x0001b5cc) cell_graphic2_pane_t
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

} // end of namespace AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Normal
