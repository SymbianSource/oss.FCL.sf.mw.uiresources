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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0000b8c2 };

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
0x677a,	// (0x0001203c) Screen

0x6786,	// (0x00012048) application_window_ParamLimits

0x6786,	// (0x00012048) application_window

0x3f18,	// (0x0000f7da) screen_g1

0x4b59,	// (0x0001041b) area_bottom_pane_ParamLimits

0x4b59,	// (0x0001041b) area_bottom_pane

0x4c19,	// (0x000104db) area_top_pane_ParamLimits

0x4c19,	// (0x000104db) area_top_pane

0x4cb7,	// (0x00010579) main_pane_ParamLimits

0x4cb7,	// (0x00010579) main_pane

0x4091,	// (0x0000f953) misc_graphics

0x8f52,	// (0x00014814) battery_pane_ParamLimits

0x8f52,	// (0x00014814) battery_pane

0x9cb4,	// (0x00015576) bg_status_flat_pane_g8

0x9cbc,	// (0x0001557e) bg_status_flat_pane_g9

0x901a,	// (0x000148dc) context_pane_ParamLimits

0x901a,	// (0x000148dc) context_pane

0x913e,	// (0x00014a00) navi_pane_ParamLimits

0x913e,	// (0x00014a00) navi_pane

0x91ce,	// (0x00014a90) signal_pane_ParamLimits

0x91ce,	// (0x00014a90) signal_pane

0x0008,

0xf885,	// (0x0001b147) bg_status_flat_pane_g

0x923b,	// (0x00014afd) status_pane_g1_ParamLimits

0x923b,	// (0x00014afd) status_pane_g1

0x924f,	// (0x00014b11) status_pane_g2_ParamLimits

0x924f,	// (0x00014b11) status_pane_g2

0x925b,	// (0x00014b1d) status_pane_g3_ParamLimits

0x925b,	// (0x00014b1d) status_pane_g3

0x0004,

0xf7b3,	// (0x0001b075) status_pane_g_ParamLimits

0xf7b3,	// (0x0001b075) status_pane_g

0x928f,	// (0x00014b51) title_pane_ParamLimits

0x928f,	// (0x00014b51) title_pane

0x92cc,	// (0x00014b8e) uni_indicator_pane_ParamLimits

0x92cc,	// (0x00014b8e) uni_indicator_pane

0x883f,	// (0x00014101) bg_list_pane_ParamLimits

0x883f,	// (0x00014101) bg_list_pane

0x885f,	// (0x00014121) find_pane

0x8867,	// (0x00014129) listscroll_app_pane_ParamLimits

0x8867,	// (0x00014129) listscroll_app_pane

0x8873,	// (0x00014135) listscroll_form_pane

0x887b,	// (0x0001413d) listscroll_gen_pane_ParamLimits

0x887b,	// (0x0001413d) listscroll_gen_pane

0x8873,	// (0x00014135) listscroll_set_pane

0x79f5,	// (0x000132b7) main_idle_act_pane

0x8513,	// (0x00013dd5) main_idle_trad_pane

0x8513,	// (0x00013dd5) main_list_empty_pane

0x88a1,	// (0x00014163) main_midp_pane

0x88ad,	// (0x0001416f) main_pane_g1_ParamLimits

0x88ad,	// (0x0001416f) main_pane_g1

0x88bb,	// (0x0001417d) popup_ai_message_window_ParamLimits

0x88bb,	// (0x0001417d) popup_ai_message_window

0x8973,	// (0x00014235) popup_fep_china_uni_window_ParamLimits

0x8973,	// (0x00014235) popup_fep_china_uni_window

0x89d3,	// (0x00014295) popup_fep_japan_candidate_window_ParamLimits

0x89d3,	// (0x00014295) popup_fep_japan_candidate_window

0x89fd,	// (0x000142bf) popup_fep_japan_predictive_window_ParamLimits

0x89fd,	// (0x000142bf) popup_fep_japan_predictive_window

0x8a33,	// (0x000142f5) popup_find_window

0x8a40,	// (0x00014302) popup_grid_graphic_window_ParamLimits

0x8a40,	// (0x00014302) popup_grid_graphic_window

0x8a6e,	// (0x00014330) popup_large_graphic_colour_window

0x8a94,	// (0x00014356) popup_menu_window_ParamLimits

0x8a94,	// (0x00014356) popup_menu_window

0x8c5e,	// (0x00014520) popup_note_image_window

0x8c48,	// (0x0001450a) popup_note_wait_window_ParamLimits

0x8c48,	// (0x0001450a) popup_note_wait_window

0x8c48,	// (0x0001450a) popup_note_window_ParamLimits

0x8c48,	// (0x0001450a) popup_note_window

0x8cc4,	// (0x00014586) popup_query_code_window_ParamLimits

0x8cc4,	// (0x00014586) popup_query_code_window

0x8cda,	// (0x0001459c) popup_query_data_code_window_ParamLimits

0x8cda,	// (0x0001459c) popup_query_data_code_window

0x8cfd,	// (0x000145bf) popup_query_data_window_ParamLimits

0x8cfd,	// (0x000145bf) popup_query_data_window

0x8d1f,	// (0x000145e1) popup_query_sat_info_window_ParamLimits

0x8d1f,	// (0x000145e1) popup_query_sat_info_window

0x8d5e,	// (0x00014620) popup_snote_single_graphic_window_ParamLimits

0x8d5e,	// (0x00014620) popup_snote_single_graphic_window

0x8d5e,	// (0x00014620) popup_snote_single_text_window_ParamLimits

0x8d5e,	// (0x00014620) popup_snote_single_text_window

0x8d75,	// (0x00014637) popup_sub_window_general

0x8ebb,	// (0x0001477d) popup_window_general_ParamLimits

0x8ebb,	// (0x0001477d) popup_window_general

0x8ed4,	// (0x00014796) power_save_pane

0x542e,	// (0x00010cf0) control_pane_g1_ParamLimits

0x542e,	// (0x00010cf0) control_pane_g1

0x5457,	// (0x00010d19) control_pane_g2_ParamLimits

0x5457,	// (0x00010d19) control_pane_g2

0x87e0,	// (0x000140a2) control_pane_g3_ParamLimits

0x87e0,	// (0x000140a2) control_pane_g3

0x0007,

0xf79b,	// (0x0001b05d) control_pane_g_ParamLimits

0xf79b,	// (0x0001b05d) control_pane_g

0x549f,	// (0x00010d61) control_pane_t1_ParamLimits

0x549f,	// (0x00010d61) control_pane_t1

0x54eb,	// (0x00010dad) control_pane_t2_ParamLimits

0x54eb,	// (0x00010dad) control_pane_t2

0x0002,

0xf7ac,	// (0x0001b06e) control_pane_t_ParamLimits

0xf7ac,	// (0x0001b06e) control_pane_t

0x8701,	// (0x00013fc3) navi_navi_volume_pane_cp1

0x870a,	// (0x00013fcc) status_small_icon_pane

0x8712,	// (0x00013fd4) status_small_pane_g1_ParamLimits

0x8712,	// (0x00013fd4) status_small_pane_g1

0x8746,	// (0x00014008) status_small_pane_g2_ParamLimits

0x8746,	// (0x00014008) status_small_pane_g2

0x8752,	// (0x00014014) status_small_pane_g3_ParamLimits

0x8752,	// (0x00014014) status_small_pane_g3

0x875e,	// (0x00014020) status_small_pane_g4_ParamLimits

0x875e,	// (0x00014020) status_small_pane_g4

0x876a,	// (0x0001402c) status_small_pane_g5_ParamLimits

0x876a,	// (0x0001402c) status_small_pane_g5

0x8779,	// (0x0001403b) status_small_pane_g6_ParamLimits

0x8779,	// (0x0001403b) status_small_pane_g6

0x0007,

0xf78a,	// (0x0001b04c) status_small_pane_g_ParamLimits

0xf78a,	// (0x0001b04c) status_small_pane_g

0x87a9,	// (0x0001406b) status_small_pane_t1

0x87cc,	// (0x0001408e) status_small_wait_pane_ParamLimits

0x87cc,	// (0x0001408e) status_small_wait_pane

0x7ef8,	// (0x000137ba) aid_levels_signal_ParamLimits

0x7ef8,	// (0x000137ba) aid_levels_signal

0x7f0a,	// (0x000137cc) signal_pane_g1_ParamLimits

0x7f0a,	// (0x000137cc) signal_pane_g1

0x7f1f,	// (0x000137e1) signal_pane_g2_ParamLimits

0x7f1f,	// (0x000137e1) signal_pane_g2

0x0003,

0xf71b,	// (0x0001afdd) signal_pane_g_ParamLimits

0xf71b,	// (0x0001afdd) signal_pane_g

0x7f5a,	// (0x0001381c) context_pane_g1

0x6796,	// (0x00012058) title_pane_g1

0x67c0,	// (0x00012082) title_pane_t1

0x6828,	// (0x000120ea) title_pane_t2

0x684e,	// (0x00012110) title_pane_t3

0x0002,

0xf56f,	// (0x0001ae31) title_pane_t

0x92e4,	// (0x00014ba6) aid_levels_battery_ParamLimits

0x92e4,	// (0x00014ba6) aid_levels_battery

0x92f8,	// (0x00014bba) battery_pane_g1_ParamLimits

0x92f8,	// (0x00014bba) battery_pane_g1

0x930e,	// (0x00014bd0) battery_pane_g2_ParamLimits

0x930e,	// (0x00014bd0) battery_pane_g2

0x0001,

0xf7be,	// (0x0001b080) battery_pane_g_ParamLimits

0xf7be,	// (0x0001b080) battery_pane_g

0xa604,	// (0x00015ec6) uni_indicator_pane_g1

0xa619,	// (0x00015edb) uni_indicator_pane_g2

0xa62f,	// (0x00015ef1) uni_indicator_pane_g3

0x0005,

0xf92d,	// (0x0001b1ef) uni_indicator_pane_g

0x8381,	// (0x00013c43) navi_icon_pane_ParamLimits

0x8381,	// (0x00013c43) navi_icon_pane

0x82c8,	// (0x00013b8a) navi_midp_pane

0x839d,	// (0x00013c5f) navi_navi_pane

0x83a7,	// (0x00013c69) navi_text_pane_ParamLimits

0x83a7,	// (0x00013c69) navi_text_pane

0x3f18,	// (0x0000f7da) status_small_wait_pane_g1

0x6cac,	// (0x0001256e) status_small_wait_pane_g2

0x0001,

0xf928,	// (0x0001b1ea) status_small_wait_pane_g

0xa317,	// (0x00015bd9) navi_navi_icon_text_pane

0xa31f,	// (0x00015be1) navi_navi_pane_g1_ParamLimits

0xa31f,	// (0x00015be1) navi_navi_pane_g1

0xa331,	// (0x00015bf3) navi_navi_pane_g2_ParamLimits

0xa331,	// (0x00015bf3) navi_navi_pane_g2

0x0001,

0xf8f6,	// (0x0001b1b8) navi_navi_pane_g_ParamLimits

0xf8f6,	// (0x0001b1b8) navi_navi_pane_g

0xa343,	// (0x00015c05) navi_navi_tabs_pane

0xa34c,	// (0x00015c0e) navi_navi_text_pane

0xa317,	// (0x00015bd9) navi_navi_volume_pane

0xa2f0,	// (0x00015bb2) navi_text_pane_t1

0xa2e1,	// (0x00015ba3) navi_icon_pane_g1

0xa234,	// (0x00015af6) navi_navi_text_pane_t1

0x5888,	// (0x0001114a) navi_navi_volume_pane_g1

0x5890,	// (0x00011152) volume_small_pane

0xa19a,	// (0x00015a5c) navi_navi_icon_text_pane_g1

0xa1a2,	// (0x00015a64) navi_navi_icon_text_pane_t1

0x839d,	// (0x00013c5f) navi_tabs_2_long_pane

0x839d,	// (0x00013c5f) navi_tabs_2_pane

0x839d,	// (0x00013c5f) navi_tabs_3_long_pane

0x839d,	// (0x00013c5f) navi_tabs_3_pane

0x839d,	// (0x00013c5f) navi_tabs_4_pane

0x5868,	// (0x0001112a) tabs_2_active_pane_ParamLimits

0x5868,	// (0x0001112a) tabs_2_active_pane

0x5878,	// (0x0001113a) tabs_2_passive_pane_ParamLimits

0x5878,	// (0x0001113a) tabs_2_passive_pane

0x5836,	// (0x000110f8) tabs_3_active_pane_ParamLimits

0x5836,	// (0x000110f8) tabs_3_active_pane

0x5846,	// (0x00011108) tabs_3_passive_pane_ParamLimits

0x5846,	// (0x00011108) tabs_3_passive_pane

0x5857,	// (0x00011119) tabs_3_passive_pane_cp_ParamLimits

0x5857,	// (0x00011119) tabs_3_passive_pane_cp

0x57ea,	// (0x000110ac) tabs_4_active_pane_ParamLimits

0x57ea,	// (0x000110ac) tabs_4_active_pane

0x57fd,	// (0x000110bf) tabs_4_passive_pane_ParamLimits

0x57fd,	// (0x000110bf) tabs_4_passive_pane

0x580e,	// (0x000110d0) tabs_4_passive_pane_cp_ParamLimits

0x580e,	// (0x000110d0) tabs_4_passive_pane_cp

0x581f,	// (0x000110e1) tabs_4_passive_pane_cp2_ParamLimits

0x581f,	// (0x000110e1) tabs_4_passive_pane_cp2

0x57c6,	// (0x00011088) tabs_2_long_active_pane_ParamLimits

0x57c6,	// (0x00011088) tabs_2_long_active_pane

0x57d8,	// (0x0001109a) tabs_2_long_passive_pane_ParamLimits

0x57d8,	// (0x0001109a) tabs_2_long_passive_pane

0x5787,	// (0x00011049) tabs_3_long_active_pane_ParamLimits

0x5787,	// (0x00011049) tabs_3_long_active_pane

0x579a,	// (0x0001105c) tabs_3_long_passive_pane_ParamLimits

0x579a,	// (0x0001105c) tabs_3_long_passive_pane

0x57b3,	// (0x00011075) tabs_3_long_passive_pane_cp_ParamLimits

0x57b3,	// (0x00011075) tabs_3_long_passive_pane_cp

0x572d,	// (0x00010fef) volume_small_pane_g1

0x5736,	// (0x00010ff8) volume_small_pane_g2

0x573f,	// (0x00011001) volume_small_pane_g3

0x5748,	// (0x0001100a) volume_small_pane_g4

0x5751,	// (0x00011013) volume_small_pane_g5

0x575a,	// (0x0001101c) volume_small_pane_g6

0x5763,	// (0x00011025) volume_small_pane_g7

0x576c,	// (0x0001102e) volume_small_pane_g8

0x5775,	// (0x00011037) volume_small_pane_g9

0x577e,	// (0x00011040) volume_small_pane_g10

0x0009,

0xf8c2,	// (0x0001b184) volume_small_pane_g

0x6860,	// (0x00012122) bg_active_tab_pane_cp2_ParamLimits

0x6860,	// (0x00012122) bg_active_tab_pane_cp2

0x686e,	// (0x00012130) tabs_3_active_pane_g1

0x6876,	// (0x00012138) tabs_3_active_pane_t1

0x6860,	// (0x00012122) bg_passive_tab_pane_cp2_ParamLimits

0x6860,	// (0x00012122) bg_passive_tab_pane_cp2

0x686e,	// (0x00012130) tabs_3_passive_pane_g1

0x6876,	// (0x00012138) tabs_3_passive_pane_t1

0x6860,	// (0x00012122) bg_active_tab_pane_cp3_ParamLimits

0x6860,	// (0x00012122) bg_active_tab_pane_cp3

0x6888,	// (0x0001214a) tabs_4_active_pane_g1

0x6890,	// (0x00012152) tabs_4_active_pane_t1

0x6860,	// (0x00012122) bg_passive_tab_pane_cp3_ParamLimits

0x6860,	// (0x00012122) bg_passive_tab_pane_cp3

0x6888,	// (0x0001214a) tabs_4_1_passive_pane_g1

0x6890,	// (0x00012152) tabs_4_1_passive_pane_t1

0x88a1,	// (0x00014163) list_highlight_pane_cp2

0xa8bb,	// (0x0001617d) list_set_pane_ParamLimits

0xa8bb,	// (0x0001617d) list_set_pane

0xa983,	// (0x00016245) main_pane_set_t1_ParamLimits

0xa983,	// (0x00016245) main_pane_set_t1

0xa9a3,	// (0x00016265) main_pane_set_t2_ParamLimits

0xa9a3,	// (0x00016265) main_pane_set_t2

0xa9b7,	// (0x00016279) main_pane_set_t3_ParamLimits

0xa9b7,	// (0x00016279) main_pane_set_t3

0xa9cb,	// (0x0001628d) main_pane_set_t4_ParamLimits

0xa9cb,	// (0x0001628d) main_pane_set_t4

0x0003,

0xf992,	// (0x0001b254) main_pane_set_t_ParamLimits

0xf992,	// (0x0001b254) main_pane_set_t

0xa9eb,	// (0x000162ad) setting_code_pane

0xa9f5,	// (0x000162b7) setting_slider_graphic_pane

0xa9f5,	// (0x000162b7) setting_slider_pane

0xa9f5,	// (0x000162b7) setting_text_pane

0xa9f5,	// (0x000162b7) setting_volume_pane

0x4f0e,	// (0x000107d0) volume_set_pane

0x6860,	// (0x00012122) bg_set_opt_pane_cp

0x4f18,	// (0x000107da) setting_slider_pane_t1

0x4f2e,	// (0x000107f0) setting_slider_pane_t2

0x4f48,	// (0x0001080a) setting_slider_pane_t3

0x0002,

0xf576,	// (0x0001ae38) setting_slider_pane_t

0x4f60,	// (0x00010822) slider_set_pane

0x4091,	// (0x0000f953) bg_set_opt_pane_cp2

0x68a2,	// (0x00012164) setting_slider_graphic_pane_g1

0x4f76,	// (0x00010838) setting_slider_graphic_pane_t1

0x4f86,	// (0x00010848) setting_slider_graphic_pane_t2

0x0001,

0xf57d,	// (0x0001ae3f) setting_slider_graphic_pane_t

0x4f96,	// (0x00010858) slider_set_pane_cp

0x4091,	// (0x0000f953) input_focus_pane_cp1

0xa87c,	// (0x0001613e) list_set_text_pane

0x3f18,	// (0x0000f7da) setting_text_pane_g1

0x4091,	// (0x0000f953) input_focus_pane_cp2

0x3f18,	// (0x0000f7da) setting_code_pane_g1

0x68ab,	// (0x0001216d) setting_code_pane_t1

0x68b9,	// (0x0001217b) set_text_pane_t1_ParamLimits

0x68b9,	// (0x0001217b) set_text_pane_t1

0x77d8,	// (0x0001309a) set_opt_bg_pane_g1

0x77e0,	// (0x000130a2) set_opt_bg_pane_g2

0xa854,	// (0x00016116) set_opt_bg_pane_g3

0x77f0,	// (0x000130b2) set_opt_bg_pane_g4

0x77f8,	// (0x000130ba) set_opt_bg_pane_g5

0x7800,	// (0x000130c2) set_opt_bg_pane_g6

0xa85e,	// (0x00016120) set_opt_bg_pane_g7

0xa868,	// (0x0001612a) set_opt_bg_pane_g8

0xa872,	// (0x00016134) set_opt_bg_pane_g9

0x0008,

0xf97f,	// (0x0001b241) set_opt_bg_pane_g

0xa847,	// (0x00016109) slider_set_pane_g1

0x5911,	// (0x000111d3) slider_set_pane_g2

0x0006,

0xf970,	// (0x0001b232) slider_set_pane_g

0x5899,	// (0x0001115b) volume_set_pane_g1

0x58a3,	// (0x00011165) volume_set_pane_g2

0x58ad,	// (0x0001116f) volume_set_pane_g3

0x58b7,	// (0x00011179) volume_set_pane_g4

0x58c1,	// (0x00011183) volume_set_pane_g5

0x58cb,	// (0x0001118d) volume_set_pane_g6

0x58d5,	// (0x00011197) volume_set_pane_g7

0x58df,	// (0x000111a1) volume_set_pane_g8

0x58e9,	// (0x000111ab) volume_set_pane_g9

0x58f3,	// (0x000111b5) volume_set_pane_g10

0x0009,

0xf948,	// (0x0001b20a) volume_set_pane_g

0x68d3,	// (0x00012195) indicator_pane_ParamLimits

0x68d3,	// (0x00012195) indicator_pane

0x68df,	// (0x000121a1) main_idle_pane_g2_ParamLimits

0x68df,	// (0x000121a1) main_idle_pane_g2

0x6907,	// (0x000121c9) main_pane_idle_g1_ParamLimits

0x6907,	// (0x000121c9) main_pane_idle_g1

0x6915,	// (0x000121d7) popup_clock_digital_analogue_window_ParamLimits

0x6915,	// (0x000121d7) popup_clock_digital_analogue_window

0x692c,	// (0x000121ee) soft_indicator_pane_ParamLimits

0x692c,	// (0x000121ee) soft_indicator_pane

0x693a,	// (0x000121fc) wallpaper_pane_ParamLimits

0x693a,	// (0x000121fc) wallpaper_pane

0x3f18,	// (0x0000f7da) wallpaper_pane_g1

0x694e,	// (0x00012210) indicator_pane_g1_ParamLimits

0x694e,	// (0x00012210) indicator_pane_g1

0xad1a,	// (0x000165dc) navi_navi_icon_text_pane_srt_g1

0x6969,	// (0x0001222b) soft_indicator_pane_t1

0x6983,	// (0x00012245) aid_ps_area_pane

0x6994,	// (0x00012256) aid_ps_clock_pane

0x69a2,	// (0x00012264) aid_ps_indicator_pane

0x69ae,	// (0x00012270) indicator_ps_pane_ParamLimits

0x69ae,	// (0x00012270) indicator_ps_pane

0x69bd,	// (0x0001227f) power_save_pane_g1_ParamLimits

0x69bd,	// (0x0001227f) power_save_pane_g1

0x69c9,	// (0x0001228b) power_save_pane_g2_ParamLimits

0x69c9,	// (0x0001228b) power_save_pane_g2

0x4b0d,	// (0x000103cf) aid_navinavi_width_pane

0x6983,	// (0x00012245) aid_ps_area_pane_ParamLimits

0x0001,

0xf582,	// (0x0001ae44) power_save_pane_g_ParamLimits

0xf582,	// (0x0001ae44) power_save_pane_g

0x69d7,	// (0x00012299) power_save_pane_t1_ParamLimits

0x69d7,	// (0x00012299) power_save_pane_t1

0x6994,	// (0x00012256) aid_ps_clock_pane_ParamLimits

0x69a2,	// (0x00012264) aid_ps_indicator_pane_ParamLimits

0x69e9,	// (0x000122ab) power_save_pane_t4_ParamLimits

0x69e9,	// (0x000122ab) power_save_pane_t4

0x0001,

0xf587,	// (0x0001ae49) power_save_pane_t_ParamLimits

0xf587,	// (0x0001ae49) power_save_pane_t

0x6a13,	// (0x000122d5) power_save_t3_ParamLimits

0x6a13,	// (0x000122d5) power_save_t3

0x69fe,	// (0x000122c0) power_save_t2_ParamLimits

0x69fe,	// (0x000122c0) power_save_t2

0x6a28,	// (0x000122ea) indicator_ps_pane_g1

0x6a31,	// (0x000122f3) ai_gene_pane_ParamLimits

0x6a31,	// (0x000122f3) ai_gene_pane

0x6a3d,	// (0x000122ff) ai_links_pane_ParamLimits

0x6a3d,	// (0x000122ff) ai_links_pane

0x6a49,	// (0x0001230b) indicator_pane_cp1_ParamLimits

0x6a49,	// (0x0001230b) indicator_pane_cp1

0x6a55,	// (0x00012317) main_pane_idle_g1_cp_ParamLimits

0x6a55,	// (0x00012317) main_pane_idle_g1_cp

0x6a61,	// (0x00012323) popup_ai_links_title_window

0x6a6a,	// (0x0001232c) soft_indicator_pane_cp1_ParamLimits

0x6a6a,	// (0x0001232c) soft_indicator_pane_cp1

0xa5f2,	// (0x00015eb4) ai_links_pane_g1

0xa5fb,	// (0x00015ebd) grid_ai_links_pane

0xa5d7,	// (0x00015e99) ai_gene_pane_1

0xa5e0,	// (0x00015ea2) ai_gene_pane_2

0xa5e9,	// (0x00015eab) list_highlight_pane_cp4

0xa5b7,	// (0x00015e79) cell_ai_link_pane_ParamLimits

0xa5b7,	// (0x00015e79) cell_ai_link_pane

0xa5af,	// (0x00015e71) cell_ai_link_pane_g1

0x6cac,	// (0x0001256e) cell_ai_link_pane_g2

0x0001,

0xf923,	// (0x0001b1e5) cell_ai_link_pane_g

0x4091,	// (0x0000f953) grid_highlight_cp2

0x4091,	// (0x0000f953) bg_popup_sub_pane_cp1

0x6a84,	// (0x00012346) popup_ai_links_title_window_t1

0xa4fb,	// (0x00015dbd) ai_gene_pane_1_g1_ParamLimits

0xa4fb,	// (0x00015dbd) ai_gene_pane_1_g1

0xa507,	// (0x00015dc9) ai_gene_pane_1_g2_ParamLimits

0xa507,	// (0x00015dc9) ai_gene_pane_1_g2

0x0001,

0xf919,	// (0x0001b1db) ai_gene_pane_1_g_ParamLimits

0xf919,	// (0x0001b1db) ai_gene_pane_1_g

0xa514,	// (0x00015dd6) ai_gene_pane_1_t1_ParamLimits

0xa514,	// (0x00015dd6) ai_gene_pane_1_t1

0xa548,	// (0x00015e0a) grid_ai_soft_ind_pane

0xa4e6,	// (0x00015da8) ai_gene_pane_2_t1_ParamLimits

0xa4e6,	// (0x00015da8) ai_gene_pane_2_t1

0x6a93,	// (0x00012355) main_pane_empty_t1_ParamLimits

0x6a93,	// (0x00012355) main_pane_empty_t1

0x6aab,	// (0x0001236d) main_pane_empty_t2_ParamLimits

0x6aab,	// (0x0001236d) main_pane_empty_t2

0x6ac0,	// (0x00012382) main_pane_empty_t3_ParamLimits

0x6ac0,	// (0x00012382) main_pane_empty_t3

0x6ad2,	// (0x00012394) main_pane_empty_t4_ParamLimits

0x6ad2,	// (0x00012394) main_pane_empty_t4

0x6ae4,	// (0x000123a6) main_pane_empty_t5_ParamLimits

0x6ae4,	// (0x000123a6) main_pane_empty_t5

0x0004,

0xf58c,	// (0x0001ae4e) main_pane_empty_t_ParamLimits

0xf58c,	// (0x0001ae4e) main_pane_empty_t

0x78b6,	// (0x00013178) bg_popup_window_pane_ParamLimits

0x78b6,	// (0x00013178) bg_popup_window_pane

0xa242,	// (0x00015b04) find_popup_pane_cp2_ParamLimits

0xa242,	// (0x00015b04) find_popup_pane_cp2

0xa24e,	// (0x00015b10) heading_pane_ParamLimits

0xa24e,	// (0x00015b10) heading_pane

0x4091,	// (0x0000f953) bg_popup_sub_pane

0xa1bc,	// (0x00015a7e) bg_popup_window_pane_g1_ParamLimits

0xa1bc,	// (0x00015a7e) bg_popup_window_pane_g1

0xa1c8,	// (0x00015a8a) bg_popup_window_pane_g2_ParamLimits

0xa1c8,	// (0x00015a8a) bg_popup_window_pane_g2

0xa1d4,	// (0x00015a96) bg_popup_window_pane_g3_ParamLimits

0xa1d4,	// (0x00015a96) bg_popup_window_pane_g3

0xa1e0,	// (0x00015aa2) bg_popup_window_pane_g4_ParamLimits

0xa1e0,	// (0x00015aa2) bg_popup_window_pane_g4

0xa1ec,	// (0x00015aae) bg_popup_window_pane_g5_ParamLimits

0xa1ec,	// (0x00015aae) bg_popup_window_pane_g5

0xa1f8,	// (0x00015aba) bg_popup_window_pane_g6_ParamLimits

0xa1f8,	// (0x00015aba) bg_popup_window_pane_g6

0xa204,	// (0x00015ac6) bg_popup_window_pane_g7_ParamLimits

0xa204,	// (0x00015ac6) bg_popup_window_pane_g7

0xa210,	// (0x00015ad2) bg_popup_window_pane_g8_ParamLimits

0xa210,	// (0x00015ad2) bg_popup_window_pane_g8

0xa21c,	// (0x00015ade) bg_popup_window_pane_g9_ParamLimits

0xa21c,	// (0x00015ade) bg_popup_window_pane_g9

0xa228,	// (0x00015aea) bg_popup_window_pane_g10_ParamLimits

0xa228,	// (0x00015aea) bg_popup_window_pane_g10

0x0009,

0xf8e1,	// (0x0001b1a3) bg_popup_window_pane_g_ParamLimits

0xf8e1,	// (0x0001b1a3) bg_popup_window_pane_g

0xa151,	// (0x00015a13) bg_popup_heading_pane_ParamLimits

0xa151,	// (0x00015a13) bg_popup_heading_pane

0x5999,	// (0x0001125b) tabs_4_passive_pane_cp_srt_ParamLimits

0x5999,	// (0x0001125b) tabs_4_passive_pane_cp_srt

0x59ab,	// (0x0001126d) tabs_4_passive_pane_srt_ParamLimits

0xa165,	// (0x00015a27) heading_pane_g2

0x59ab,	// (0x0001126d) tabs_4_passive_pane_srt

0x88a1,	// (0x00014163) bg_passive_tab_pane_cp3_srt_ParamLimits

0x88a1,	// (0x00014163) bg_passive_tab_pane_cp3_srt

0xa16d,	// (0x00015a2f) heading_pane_t1_ParamLimits

0xa16d,	// (0x00015a2f) heading_pane_t1

0xa184,	// (0x00015a46) heading_pane_t2_ParamLimits

0xa184,	// (0x00015a46) heading_pane_t2

0x0001,

0xf8dc,	// (0x0001b19e) heading_pane_t_ParamLimits

0xf8dc,	// (0x0001b19e) heading_pane_t

0x9c7c,	// (0x0001553e) bg_popup_heading_pane_g1

0x9d2b,	// (0x000155ed) bg_popup_heading_pane_g2

0x9d35,	// (0x000155f7) bg_popup_heading_pane_g3

0x9d3f,	// (0x00015601) bg_popup_heading_pane_g4

0x9d49,	// (0x0001560b) bg_popup_heading_pane_g5

0x9d53,	// (0x00015615) bg_popup_heading_pane_g6

0x9d5b,	// (0x0001561d) bg_popup_heading_pane_g7

0x9d63,	// (0x00015625) bg_popup_heading_pane_g8

0x9d6d,	// (0x0001562f) bg_popup_heading_pane_g9

0x0008,

0xf898,	// (0x0001b15a) bg_popup_heading_pane_g

0x9414,	// (0x00014cd6) bg_popup_sub_pane_g1

0x9424,	// (0x00014ce6) bg_popup_sub_pane_g2

0x941c,	// (0x00014cde) bg_popup_sub_pane_g3

0x9434,	// (0x00014cf6) bg_popup_sub_pane_g4

0x942c,	// (0x00014cee) bg_popup_sub_pane_g5

0x943c,	// (0x00014cfe) bg_popup_sub_pane_g6

0x9444,	// (0x00014d06) bg_popup_sub_pane_g7

0x9454,	// (0x00014d16) bg_popup_sub_pane_g8

0x944c,	// (0x00014d0e) bg_popup_sub_pane_g9

0x0008,

0xf872,	// (0x0001b134) bg_popup_sub_pane_g

0x6af6,	// (0x000123b8) bg_popup_window_pane_cp5_ParamLimits

0x6af6,	// (0x000123b8) bg_popup_window_pane_cp5

0x6b12,	// (0x000123d4) popup_note_window_g1_ParamLimits

0x6b12,	// (0x000123d4) popup_note_window_g1

0x6b1e,	// (0x000123e0) popup_note_window_t1_ParamLimits

0x6b1e,	// (0x000123e0) popup_note_window_t1

0x6b34,	// (0x000123f6) popup_note_window_t2_ParamLimits

0x6b34,	// (0x000123f6) popup_note_window_t2

0x6b4a,	// (0x0001240c) popup_note_window_t3_ParamLimits

0x6b4a,	// (0x0001240c) popup_note_window_t3

0x6b60,	// (0x00012422) popup_note_window_t4_ParamLimits

0x6b60,	// (0x00012422) popup_note_window_t4

0x6b88,	// (0x0001244a) popup_note_window_t5_ParamLimits

0x6b88,	// (0x0001244a) popup_note_window_t5

0x0004,

0xf597,	// (0x0001ae59) popup_note_window_t_ParamLimits

0xf597,	// (0x0001ae59) popup_note_window_t

0x6bac,	// (0x0001246e) bg_popup_window_pane_cp6_ParamLimits

0x6bac,	// (0x0001246e) bg_popup_window_pane_cp6

0x9bf8,	// (0x000154ba) popup_note_image_window_g1_ParamLimits

0x9bf8,	// (0x000154ba) popup_note_image_window_g1

0x9c04,	// (0x000154c6) popup_note_image_window_g2_ParamLimits

0x9c04,	// (0x000154c6) popup_note_image_window_g2

0x0001,

0xf866,	// (0x0001b128) popup_note_image_window_g_ParamLimits

0xf866,	// (0x0001b128) popup_note_image_window_g

0x9c1d,	// (0x000154df) popup_note_image_window_t1_ParamLimits

0x9c1d,	// (0x000154df) popup_note_image_window_t1

0x9c36,	// (0x000154f8) popup_note_image_window_t2_ParamLimits

0x9c36,	// (0x000154f8) popup_note_image_window_t2

0x9c4f,	// (0x00015511) popup_note_image_window_t3_ParamLimits

0x9c4f,	// (0x00015511) popup_note_image_window_t3

0x0002,

0xf86b,	// (0x0001b12d) popup_note_image_window_t_ParamLimits

0xf86b,	// (0x0001b12d) popup_note_image_window_t

0x9ab8,	// (0x0001537a) bg_popup_window_pane_cp7_ParamLimits

0x9ab8,	// (0x0001537a) bg_popup_window_pane_cp7

0x9ae8,	// (0x000153aa) popup_note_wait_window_g1_ParamLimits

0x9ae8,	// (0x000153aa) popup_note_wait_window_g1

0x9af4,	// (0x000153b6) popup_note_wait_window_g2_ParamLimits

0x9af4,	// (0x000153b6) popup_note_wait_window_g2

0x0002,

0xf854,	// (0x0001b116) popup_note_wait_window_g_ParamLimits

0xf854,	// (0x0001b116) popup_note_wait_window_g

0x9b0c,	// (0x000153ce) popup_note_wait_window_t1_ParamLimits

0x9b0c,	// (0x000153ce) popup_note_wait_window_t1

0x9b33,	// (0x000153f5) popup_note_wait_window_t2_ParamLimits

0x9b33,	// (0x000153f5) popup_note_wait_window_t2

0x9b51,	// (0x00015413) popup_note_wait_window_t3_ParamLimits

0x9b51,	// (0x00015413) popup_note_wait_window_t3

0x9b64,	// (0x00015426) popup_note_wait_window_t4_ParamLimits

0x9b64,	// (0x00015426) popup_note_wait_window_t4

0x0004,

0xf85b,	// (0x0001b11d) popup_note_wait_window_t_ParamLimits

0xf85b,	// (0x0001b11d) popup_note_wait_window_t

0x9b89,	// (0x0001544b) wait_bar_pane_ParamLimits

0x9b89,	// (0x0001544b) wait_bar_pane

0x4091,	// (0x0000f953) wait_anim_pane

0x4091,	// (0x0000f953) wait_border_pane

0x3f18,	// (0x0000f7da) wait_anim_pane_g1

0x3f18,	// (0x0000f7da) wait_anim_pane_g2

0x0001,

0xf716,	// (0x0001afd8) wait_anim_pane_g

0x9a5c,	// (0x0001531e) wait_border_pane_g1

0x9a67,	// (0x00015329) wait_border_pane_g2

0x9a70,	// (0x00015332) wait_border_pane_g3

0x0002,

0xf84d,	// (0x0001b10f) wait_border_pane_g

0x98c6,	// (0x00015188) bg_popup_window_pane_cp16_ParamLimits

0x98c6,	// (0x00015188) bg_popup_window_pane_cp16

0x99c6,	// (0x00015288) indicator_popup_pane_cp4_ParamLimits

0x99c6,	// (0x00015288) indicator_popup_pane_cp4

0x99da,	// (0x0001529c) popup_query_data_window_t1_ParamLimits

0x99da,	// (0x0001529c) popup_query_data_window_t1

0x99ec,	// (0x000152ae) popup_query_data_window_t2_ParamLimits

0x99ec,	// (0x000152ae) popup_query_data_window_t2

0x9a05,	// (0x000152c7) popup_query_data_window_t3_ParamLimits

0x9a05,	// (0x000152c7) popup_query_data_window_t3

0x0002,

0xf846,	// (0x0001b108) popup_query_data_window_t_ParamLimits

0xf846,	// (0x0001b108) popup_query_data_window_t

0x9a1f,	// (0x000152e1) query_popup_data_pane_ParamLimits

0x9a1f,	// (0x000152e1) query_popup_data_pane

0x9a33,	// (0x000152f5) query_popup_data_pane_cp1_ParamLimits

0x9a33,	// (0x000152f5) query_popup_data_pane_cp1

0x98c6,	// (0x00015188) bg_popup_window_pane_cp10_ParamLimits

0x98c6,	// (0x00015188) bg_popup_window_pane_cp10

0x98f8,	// (0x000151ba) indicator_popup_pane_ParamLimits

0x98f8,	// (0x000151ba) indicator_popup_pane

0x991a,	// (0x000151dc) popup_query_code_window_t1_ParamLimits

0x991a,	// (0x000151dc) popup_query_code_window_t1

0x9934,	// (0x000151f6) popup_query_code_window_t2_ParamLimits

0x9934,	// (0x000151f6) popup_query_code_window_t2

0x997d,	// (0x0001523f) popup_query_code_window_t3_ParamLimits

0x997d,	// (0x0001523f) popup_query_code_window_t3

0x0002,

0xf83f,	// (0x0001b101) popup_query_code_window_t_ParamLimits

0xf83f,	// (0x0001b101) popup_query_code_window_t

0x99ac,	// (0x0001526e) query_popup_pane_ParamLimits

0x99ac,	// (0x0001526e) query_popup_pane

0x6bac,	// (0x0001246e) bg_popup_window_pane_cp15_ParamLimits

0x6bac,	// (0x0001246e) bg_popup_window_pane_cp15

0x6bcc,	// (0x0001248e) indicator_popup_pane_cp1_ParamLimits

0x6bcc,	// (0x0001248e) indicator_popup_pane_cp1

0x6bdf,	// (0x000124a1) indicator_popup_pane_cp2_ParamLimits

0x6bdf,	// (0x000124a1) indicator_popup_pane_cp2

0x6bfa,	// (0x000124bc) popup_query_data_code_window_g1_ParamLimits

0x6bfa,	// (0x000124bc) popup_query_data_code_window_g1

0x6c0d,	// (0x000124cf) popup_query_data_code_window_t1_ParamLimits

0x6c0d,	// (0x000124cf) popup_query_data_code_window_t1

0x6c1f,	// (0x000124e1) popup_query_data_code_window_t2_ParamLimits

0x6c1f,	// (0x000124e1) popup_query_data_code_window_t2

0x6c31,	// (0x000124f3) popup_query_data_code_window_t3_ParamLimits

0x6c31,	// (0x000124f3) popup_query_data_code_window_t3

0x6c47,	// (0x00012509) popup_query_data_code_window_t4_ParamLimits

0x6c47,	// (0x00012509) popup_query_data_code_window_t4

0x0003,

0xf5a2,	// (0x0001ae64) popup_query_data_code_window_t_ParamLimits

0xf5a2,	// (0x0001ae64) popup_query_data_code_window_t

0x5639,	// (0x00010efb) list_single_midp_graphic_pane_g3

0x6c61,	// (0x00012523) query_popup_data_pane_cp2_ParamLimits

0x6c74,	// (0x00012536) query_popup_pane_cp2_ParamLimits

0x6c74,	// (0x00012536) query_popup_pane_cp2

0x4091,	// (0x0000f953) bg_popup_window_pane_cp11

0x98be,	// (0x00015180) heading_pane_cp5

0x6d64,	// (0x00012626) listscroll_popup_info_pane

0x4091,	// (0x0000f953) input_focus_pane_cp3

0x6c8f,	// (0x00012551) query_popup_pane_t1

0x6c9d,	// (0x0001255f) list_popup_info_pane_ParamLimits

0x6c9d,	// (0x0001255f) list_popup_info_pane

0x6cac,	// (0x0001256e) listscroll_popup_info_pane_g1

0x6cb4,	// (0x00012576) scroll_pane_cp7

0x6cbe,	// (0x00012580) popup_info_list_pane_t1_ParamLimits

0x6cbe,	// (0x00012580) popup_info_list_pane_t1

0x6cd8,	// (0x0001259a) popup_info_list_pane_t2_ParamLimits

0x6cd8,	// (0x0001259a) popup_info_list_pane_t2

0x0001,

0xf5ab,	// (0x0001ae6d) popup_info_list_pane_t_ParamLimits

0xf5ab,	// (0x0001ae6d) popup_info_list_pane_t

0x4091,	// (0x0000f953) bg_popup_window_pane_cp12

0xad34,	// (0x000165f6) find_popup_pane

0x6860,	// (0x00012122) bg_popup_window_pane_cp3

0x6cf2,	// (0x000125b4) heading_pane_cp3

0x6cfe,	// (0x000125c0) listscroll_popup_graphic_pane

0x4091,	// (0x0000f953) bg_popup_window_pane_cp4

0x6d5a,	// (0x0001261c) heading_pane_cp4

0x6d64,	// (0x00012626) listscroll_popup_colour_pane

0x6d6c,	// (0x0001262e) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x6d6c,	// (0x0001262e) cell_large_graphic_colour_none_popup_pane

0x6d80,	// (0x00012642) grid_large_graphic_colour_popup_pane_ParamLimits

0x6d80,	// (0x00012642) grid_large_graphic_colour_popup_pane

0x6dac,	// (0x0001266e) listscroll_popup_colour_pane_g1_ParamLimits

0x6dac,	// (0x0001266e) listscroll_popup_colour_pane_g1

0x6dc3,	// (0x00012685) listscroll_popup_colour_pane_g2_ParamLimits

0x6dc3,	// (0x00012685) listscroll_popup_colour_pane_g2

0x6dda,	// (0x0001269c) listscroll_popup_colour_pane_g3_ParamLimits

0x6dda,	// (0x0001269c) listscroll_popup_colour_pane_g3

0x6dea,	// (0x000126ac) listscroll_popup_colour_pane_g4_ParamLimits

0x6dea,	// (0x000126ac) listscroll_popup_colour_pane_g4

0x0003,

0xf5b0,	// (0x0001ae72) listscroll_popup_colour_pane_g_ParamLimits

0xf5b0,	// (0x0001ae72) listscroll_popup_colour_pane_g

0x6dfe,	// (0x000126c0) scroll_pane_cp6_ParamLimits

0x6dfe,	// (0x000126c0) scroll_pane_cp6

0x6e10,	// (0x000126d2) cell_large_graphic_colour_popup_pane_ParamLimits

0x6e10,	// (0x000126d2) cell_large_graphic_colour_popup_pane

0x6e35,	// (0x000126f7) cell_large_graphic_colour_none_popup_pane_t1

0x4091,	// (0x0000f953) grid_highlight_pane_cp5

0x6e44,	// (0x00012706) cell_large_graphic_colour_popup_pane_g1

0x6e4c,	// (0x0001270e) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5b9,	// (0x0001ae7b) cell_large_graphic_colour_popup_pane_g

0x6e54,	// (0x00012716) cell_large_graphic_colour_popup_pane_g2_copy1

0x6e5d,	// (0x0001271f) grid_highlight_pane_cp4

0x6e65,	// (0x00012727) bg_popup_window_pane_cp8_ParamLimits

0x6e65,	// (0x00012727) bg_popup_window_pane_cp8

0x6e80,	// (0x00012742) popup_snote_single_text_window_g1_ParamLimits

0x6e80,	// (0x00012742) popup_snote_single_text_window_g1

0x6e92,	// (0x00012754) popup_snote_single_text_window_t1_ParamLimits

0x6e92,	// (0x00012754) popup_snote_single_text_window_t1

0x6ea5,	// (0x00012767) popup_snote_single_text_window_t2_ParamLimits

0x6ea5,	// (0x00012767) popup_snote_single_text_window_t2

0x6eb8,	// (0x0001277a) popup_snote_single_text_window_t3_ParamLimits

0x6eb8,	// (0x0001277a) popup_snote_single_text_window_t3

0x6ef1,	// (0x000127b3) popup_snote_single_text_window_t4_ParamLimits

0x6ef1,	// (0x000127b3) popup_snote_single_text_window_t4

0x6f25,	// (0x000127e7) popup_snote_single_text_window_t5_ParamLimits

0x6f25,	// (0x000127e7) popup_snote_single_text_window_t5

0x0004,

0xf5be,	// (0x0001ae80) popup_snote_single_text_window_t_ParamLimits

0xf5be,	// (0x0001ae80) popup_snote_single_text_window_t

0x6f54,	// (0x00012816) bg_popup_window_pane_cp9_ParamLimits

0x6f54,	// (0x00012816) bg_popup_window_pane_cp9

0x6e80,	// (0x00012742) popup_snote_single_graphic_window_g1_ParamLimits

0x6e80,	// (0x00012742) popup_snote_single_graphic_window_g1

0x6f62,	// (0x00012824) popup_snote_single_graphic_window_g2_ParamLimits

0x6f62,	// (0x00012824) popup_snote_single_graphic_window_g2

0x0001,

0xf5c9,	// (0x0001ae8b) popup_snote_single_graphic_window_g_ParamLimits

0xf5c9,	// (0x0001ae8b) popup_snote_single_graphic_window_g

0x6f6e,	// (0x00012830) popup_snote_single_graphic_window_t1_ParamLimits

0x6f6e,	// (0x00012830) popup_snote_single_graphic_window_t1

0x6f81,	// (0x00012843) popup_snote_single_graphic_window_t2_ParamLimits

0x6f81,	// (0x00012843) popup_snote_single_graphic_window_t2

0x6f94,	// (0x00012856) popup_snote_single_graphic_window_t3_ParamLimits

0x6f94,	// (0x00012856) popup_snote_single_graphic_window_t3

0x6fcd,	// (0x0001288f) popup_snote_single_graphic_window_t4_ParamLimits

0x6fcd,	// (0x0001288f) popup_snote_single_graphic_window_t4

0x7001,	// (0x000128c3) popup_snote_single_graphic_window_t5_ParamLimits

0x7001,	// (0x000128c3) popup_snote_single_graphic_window_t5

0x0004,

0xf5ce,	// (0x0001ae90) popup_snote_single_graphic_window_t_ParamLimits

0xf5ce,	// (0x0001ae90) popup_snote_single_graphic_window_t

0xac72,	// (0x00016534) grid_graphic_popup_pane_ParamLimits

0xac72,	// (0x00016534) grid_graphic_popup_pane

0xaca0,	// (0x00016562) listscroll_popup_graphic_pane_g1_ParamLimits

0xaca0,	// (0x00016562) listscroll_popup_graphic_pane_g1

0xacb4,	// (0x00016576) listscroll_popup_graphic_pane_g2_ParamLimits

0xacb4,	// (0x00016576) listscroll_popup_graphic_pane_g2

0x0001,

0xf9bc,	// (0x0001b27e) listscroll_popup_graphic_pane_g_ParamLimits

0xf9bc,	// (0x0001b27e) listscroll_popup_graphic_pane_g

0xacc8,	// (0x0001658a) scroll_pane_cp5

0xac1a,	// (0x000164dc) cell_graphic_popup_pane_ParamLimits

0xac1a,	// (0x000164dc) cell_graphic_popup_pane

0xabfb,	// (0x000164bd) cell_graphic_popup_pane_g1

0xac03,	// (0x000164c5) cell_graphic_popup_pane_g2

0x6e54,	// (0x00012716) cell_graphic_popup_pane_g3

0x0002,

0xf9b5,	// (0x0001b277) cell_graphic_popup_pane_g

0xac0c,	// (0x000164ce) cell_graphic_popup_pane_t2

0x6e5d,	// (0x0001271f) grid_highlight_pane_cp3

0x7042,	// (0x00012904) list_gen_pane_ParamLimits

0x7042,	// (0x00012904) list_gen_pane

0x7074,	// (0x00012936) scroll_pane

0xab5d,	// (0x0001641f) bg_list_pane_g1_ParamLimits

0xab5d,	// (0x0001641f) bg_list_pane_g1

0xab78,	// (0x0001643a) bg_list_pane_g2_ParamLimits

0xab78,	// (0x0001643a) bg_list_pane_g2

0xab8b,	// (0x0001644d) bg_list_pane_g3_ParamLimits

0xab8b,	// (0x0001644d) bg_list_pane_g3

0xab9d,	// (0x0001645f) bg_list_pane_g4_ParamLimits

0xab9d,	// (0x0001645f) bg_list_pane_g4

0xabaf,	// (0x00016471) bg_list_pane_g5_ParamLimits

0xabaf,	// (0x00016471) bg_list_pane_g5

0x0004,

0xf9aa,	// (0x0001b26c) bg_list_pane_g_ParamLimits

0xf9aa,	// (0x0001b26c) bg_list_pane_g

0xaaae,	// (0x00016370) list_double2_graphic_large_graphic_pane_ParamLimits

0xaaae,	// (0x00016370) list_double2_graphic_large_graphic_pane

0xaaae,	// (0x00016370) list_double2_graphic_pane_ParamLimits

0xaaae,	// (0x00016370) list_double2_graphic_pane

0xaaae,	// (0x00016370) list_double2_large_graphic_pane_ParamLimits

0xaaae,	// (0x00016370) list_double2_large_graphic_pane

0xaaae,	// (0x00016370) list_double2_pane_ParamLimits

0xaaae,	// (0x00016370) list_double2_pane

0xaaae,	// (0x00016370) list_double_graphic_heading_pane_ParamLimits

0xaaae,	// (0x00016370) list_double_graphic_heading_pane

0xaaae,	// (0x00016370) list_double_graphic_pane_ParamLimits

0xaaae,	// (0x00016370) list_double_graphic_pane

0xaaae,	// (0x00016370) list_double_heading_pane_ParamLimits

0xaaae,	// (0x00016370) list_double_heading_pane

0xaaae,	// (0x00016370) list_double_large_graphic_pane_ParamLimits

0xaaae,	// (0x00016370) list_double_large_graphic_pane

0xaaae,	// (0x00016370) list_double_number_pane_ParamLimits

0xaaae,	// (0x00016370) list_double_number_pane

0xaaae,	// (0x00016370) list_double_pane_ParamLimits

0xaaae,	// (0x00016370) list_double_pane

0xaaae,	// (0x00016370) list_double_time_pane_ParamLimits

0xaaae,	// (0x00016370) list_double_time_pane

0xaaae,	// (0x00016370) list_setting_number_pane_ParamLimits

0xaaae,	// (0x00016370) list_setting_number_pane

0xaaae,	// (0x00016370) list_setting_pane_ParamLimits

0xaaae,	// (0x00016370) list_setting_pane

0xaaed,	// (0x000163af) list_single_2graphic_pane_ParamLimits

0xaaed,	// (0x000163af) list_single_2graphic_pane

0xaaed,	// (0x000163af) list_single_graphic_heading_pane_ParamLimits

0xaaed,	// (0x000163af) list_single_graphic_heading_pane

0xaaed,	// (0x000163af) list_single_graphic_pane_ParamLimits

0xaaed,	// (0x000163af) list_single_graphic_pane

0xaaed,	// (0x000163af) list_single_heading_pane_ParamLimits

0xaaed,	// (0x000163af) list_single_heading_pane

0xab45,	// (0x00016407) list_single_large_graphic_pane_ParamLimits

0xab45,	// (0x00016407) list_single_large_graphic_pane

0xaaed,	// (0x000163af) list_single_number_heading_pane_ParamLimits

0xaaed,	// (0x000163af) list_single_number_heading_pane

0xaaed,	// (0x000163af) list_single_number_pane_ParamLimits

0xaaed,	// (0x000163af) list_single_number_pane

0xaaed,	// (0x000163af) list_single_pane_ParamLimits

0xaaed,	// (0x000163af) list_single_pane

0x4091,	// (0x0000f953) list_highlight_pane_cp1

0x70b4,	// (0x00012976) list_single_pane_g1_ParamLimits

0x70b4,	// (0x00012976) list_single_pane_g1

0x70c0,	// (0x00012982) list_single_pane_g2_ParamLimits

0x70c0,	// (0x00012982) list_single_pane_g2

0x0001,

0xf5e0,	// (0x0001aea2) list_single_pane_g_ParamLimits

0xf5e0,	// (0x0001aea2) list_single_pane_g

0xaa67,	// (0x00016329) list_single_pane_t1_ParamLimits

0xaa67,	// (0x00016329) list_single_pane_t1

0x70b4,	// (0x00012976) list_single_number_pane_g1_ParamLimits

0x70b4,	// (0x00012976) list_single_number_pane_g1

0x70c0,	// (0x00012982) list_single_number_pane_g2_ParamLimits

0x70c0,	// (0x00012982) list_single_number_pane_g2

0x0001,

0xf5e0,	// (0x0001aea2) list_single_number_pane_g_ParamLimits

0xf5e0,	// (0x0001aea2) list_single_number_pane_g

0xa7c3,	// (0x00016085) list_single_number_pane_t1_ParamLimits

0xa7c3,	// (0x00016085) list_single_number_pane_t1

0xa7d9,	// (0x0001609b) list_single_number_pane_t2_ParamLimits

0xa7d9,	// (0x0001609b) list_single_number_pane_t2

0x0001,

0xf96b,	// (0x0001b22d) list_single_number_pane_t_ParamLimits

0xf96b,	// (0x0001b22d) list_single_number_pane_t

0x70a8,	// (0x0001296a) list_single_graphic_pane_g1_ParamLimits

0x70a8,	// (0x0001296a) list_single_graphic_pane_g1

0x70b4,	// (0x00012976) list_single_graphic_pane_g2_ParamLimits

0x70b4,	// (0x00012976) list_single_graphic_pane_g2

0x70c0,	// (0x00012982) list_single_graphic_pane_g3_ParamLimits

0x70c0,	// (0x00012982) list_single_graphic_pane_g3

0x0002,

0xf5d9,	// (0x0001ae9b) list_single_graphic_pane_g_ParamLimits

0xf5d9,	// (0x0001ae9b) list_single_graphic_pane_g

0x70cc,	// (0x0001298e) list_single_graphic_pane_t1_ParamLimits

0x70cc,	// (0x0001298e) list_single_graphic_pane_t1

0x70b4,	// (0x00012976) list_single_heading_pane_g1_ParamLimits

0x70b4,	// (0x00012976) list_single_heading_pane_g1

0x70c0,	// (0x00012982) list_single_heading_pane_g2_ParamLimits

0x70c0,	// (0x00012982) list_single_heading_pane_g2

0x0001,

0xf5e0,	// (0x0001aea2) list_single_heading_pane_g_ParamLimits

0xf5e0,	// (0x0001aea2) list_single_heading_pane_g

0x70e2,	// (0x000129a4) list_single_heading_pane_t1_ParamLimits

0x70e2,	// (0x000129a4) list_single_heading_pane_t1

0x70f8,	// (0x000129ba) list_single_heading_pane_t2_ParamLimits

0x70f8,	// (0x000129ba) list_single_heading_pane_t2

0x0001,

0xf5e5,	// (0x0001aea7) list_single_heading_pane_t_ParamLimits

0xf5e5,	// (0x0001aea7) list_single_heading_pane_t

0x70b4,	// (0x00012976) list_single_number_heading_pane_g1_ParamLimits

0x70b4,	// (0x00012976) list_single_number_heading_pane_g1

0x70c0,	// (0x00012982) list_single_number_heading_pane_g2_ParamLimits

0x70c0,	// (0x00012982) list_single_number_heading_pane_g2

0x0001,

0xf5e0,	// (0x0001aea2) list_single_number_heading_pane_g_ParamLimits

0xf5e0,	// (0x0001aea2) list_single_number_heading_pane_g

0x70e2,	// (0x000129a4) list_single_number_heading_pane_t1_ParamLimits

0x70e2,	// (0x000129a4) list_single_number_heading_pane_t1

0x710a,	// (0x000129cc) list_single_number_heading_pane_t2_ParamLimits

0x710a,	// (0x000129cc) list_single_number_heading_pane_t2

0x711c,	// (0x000129de) list_single_number_heading_pane_t3_ParamLimits

0x711c,	// (0x000129de) list_single_number_heading_pane_t3

0x0002,

0xf5ea,	// (0x0001aeac) list_single_number_heading_pane_t_ParamLimits

0xf5ea,	// (0x0001aeac) list_single_number_heading_pane_t

0x712e,	// (0x000129f0) list_single_graphic_heading_pane_g1_ParamLimits

0x712e,	// (0x000129f0) list_single_graphic_heading_pane_g1

0x713a,	// (0x000129fc) list_single_graphic_heading_pane_g4_ParamLimits

0x713a,	// (0x000129fc) list_single_graphic_heading_pane_g4

0x70c0,	// (0x00012982) list_single_graphic_heading_pane_g5_ParamLimits

0x70c0,	// (0x00012982) list_single_graphic_heading_pane_g5

0x0002,

0xf5f1,	// (0x0001aeb3) list_single_graphic_heading_pane_g_ParamLimits

0xf5f1,	// (0x0001aeb3) list_single_graphic_heading_pane_g

0x70e2,	// (0x000129a4) list_single_graphic_heading_pane_t1_ParamLimits

0x70e2,	// (0x000129a4) list_single_graphic_heading_pane_t1

0x714b,	// (0x00012a0d) list_single_graphic_heading_pane_t2_ParamLimits

0x714b,	// (0x00012a0d) list_single_graphic_heading_pane_t2

0x0001,

0xf5f8,	// (0x0001aeba) list_single_graphic_heading_pane_t_ParamLimits

0xf5f8,	// (0x0001aeba) list_single_graphic_heading_pane_t

0x715d,	// (0x00012a1f) list_single_large_graphic_pane_g1_ParamLimits

0x715d,	// (0x00012a1f) list_single_large_graphic_pane_g1

0x7169,	// (0x00012a2b) list_single_large_graphic_pane_g2_ParamLimits

0x7169,	// (0x00012a2b) list_single_large_graphic_pane_g2

0x7175,	// (0x00012a37) list_single_large_graphic_pane_g3_ParamLimits

0x7175,	// (0x00012a37) list_single_large_graphic_pane_g3

0x0002,

0xf5fd,	// (0x0001aebf) list_single_large_graphic_pane_g_ParamLimits

0xf5fd,	// (0x0001aebf) list_single_large_graphic_pane_g

0x9a67,	// (0x00015329) wait_border_pane_g2_copy1

0x7181,	// (0x00012a43) list_single_large_graphic_pane_g4_cp2

0x7189,	// (0x00012a4b) list_single_large_graphic_pane_t1_ParamLimits

0x7189,	// (0x00012a4b) list_single_large_graphic_pane_t1

0x719f,	// (0x00012a61) list_double_pane_g1_ParamLimits

0x719f,	// (0x00012a61) list_double_pane_g1

0x71ab,	// (0x00012a6d) list_double_pane_g2_ParamLimits

0x71ab,	// (0x00012a6d) list_double_pane_g2

0x0001,

0xf604,	// (0x0001aec6) list_double_pane_g_ParamLimits

0xf604,	// (0x0001aec6) list_double_pane_g

0x71b7,	// (0x00012a79) list_double_pane_t1_ParamLimits

0x71b7,	// (0x00012a79) list_double_pane_t1

0x71cd,	// (0x00012a8f) list_double_pane_t2_ParamLimits

0x71cd,	// (0x00012a8f) list_double_pane_t2

0x0001,

0xf609,	// (0x0001aecb) list_double_pane_t_ParamLimits

0xf609,	// (0x0001aecb) list_double_pane_t

0x71df,	// (0x00012aa1) list_double2_pane_g1_ParamLimits

0x71df,	// (0x00012aa1) list_double2_pane_g1

0x71f0,	// (0x00012ab2) list_double2_pane_g2_ParamLimits

0x71f0,	// (0x00012ab2) list_double2_pane_g2

0x0001,

0xf60e,	// (0x0001aed0) list_double2_pane_g_ParamLimits

0xf60e,	// (0x0001aed0) list_double2_pane_g

0x71fc,	// (0x00012abe) list_double2_pane_t1_ParamLimits

0x71fc,	// (0x00012abe) list_double2_pane_t1

0x7212,	// (0x00012ad4) list_double2_pane_t2_ParamLimits

0x7212,	// (0x00012ad4) list_double2_pane_t2

0x0001,

0xf613,	// (0x0001aed5) list_double2_pane_t_ParamLimits

0xf613,	// (0x0001aed5) list_double2_pane_t

0x719f,	// (0x00012a61) list_double_number_pane_g1_ParamLimits

0x719f,	// (0x00012a61) list_double_number_pane_g1

0x71ab,	// (0x00012a6d) list_double_number_pane_g2_ParamLimits

0x71ab,	// (0x00012a6d) list_double_number_pane_g2

0x0001,

0xf604,	// (0x0001aec6) list_double_number_pane_g_ParamLimits

0xf604,	// (0x0001aec6) list_double_number_pane_g

0x7224,	// (0x00012ae6) list_double_number_pane_t1_ParamLimits

0x7224,	// (0x00012ae6) list_double_number_pane_t1

0x7236,	// (0x00012af8) list_double_number_pane_t2_ParamLimits

0x7236,	// (0x00012af8) list_double_number_pane_t2

0x724c,	// (0x00012b0e) list_double_number_pane_t3_ParamLimits

0x724c,	// (0x00012b0e) list_double_number_pane_t3

0x0002,

0xf618,	// (0x0001aeda) list_double_number_pane_t_ParamLimits

0xf618,	// (0x0001aeda) list_double_number_pane_t

0x725e,	// (0x00012b20) list_double_graphic_pane_g1_ParamLimits

0x725e,	// (0x00012b20) list_double_graphic_pane_g1

0x726a,	// (0x00012b2c) list_double_graphic_pane_g2_ParamLimits

0x726a,	// (0x00012b2c) list_double_graphic_pane_g2

0x7279,	// (0x00012b3b) list_double_graphic_pane_g3_ParamLimits

0x7279,	// (0x00012b3b) list_double_graphic_pane_g3

0x0003,

0xf61f,	// (0x0001aee1) list_double_graphic_pane_g_ParamLimits

0xf61f,	// (0x0001aee1) list_double_graphic_pane_g

0x7291,	// (0x00012b53) list_double_graphic_pane_t1_ParamLimits

0x7291,	// (0x00012b53) list_double_graphic_pane_t1

0x72a7,	// (0x00012b69) list_double_graphic_pane_t2_ParamLimits

0x72a7,	// (0x00012b69) list_double_graphic_pane_t2

0x0001,

0xf628,	// (0x0001aeea) list_double_graphic_pane_t_ParamLimits

0xf628,	// (0x0001aeea) list_double_graphic_pane_t

0x72b9,	// (0x00012b7b) list_double2_graphic_pane_g1_ParamLimits

0x72b9,	// (0x00012b7b) list_double2_graphic_pane_g1

0x72c5,	// (0x00012b87) list_double2_graphic_pane_g2_ParamLimits

0x72c5,	// (0x00012b87) list_double2_graphic_pane_g2

0x71f0,	// (0x00012ab2) list_double2_graphic_pane_g3_ParamLimits

0x71f0,	// (0x00012ab2) list_double2_graphic_pane_g3

0x0002,

0xf62d,	// (0x0001aeef) list_double2_graphic_pane_g_ParamLimits

0xf62d,	// (0x0001aeef) list_double2_graphic_pane_g

0x72d1,	// (0x00012b93) list_double2_graphic_pane_t1_ParamLimits

0x72d1,	// (0x00012b93) list_double2_graphic_pane_t1

0x72e7,	// (0x00012ba9) list_double2_graphic_pane_t2_ParamLimits

0x72e7,	// (0x00012ba9) list_double2_graphic_pane_t2

0x0001,

0xf634,	// (0x0001aef6) list_double2_graphic_pane_t_ParamLimits

0xf634,	// (0x0001aef6) list_double2_graphic_pane_t

0x72f9,	// (0x00012bbb) list_double_large_graphic_pane_g1_ParamLimits

0x72f9,	// (0x00012bbb) list_double_large_graphic_pane_g1

0x7324,	// (0x00012be6) list_double_large_graphic_pane_g2_ParamLimits

0x7324,	// (0x00012be6) list_double_large_graphic_pane_g2

0x71ab,	// (0x00012a6d) list_double_large_graphic_pane_g3_ParamLimits

0x71ab,	// (0x00012a6d) list_double_large_graphic_pane_g3

0x7335,	// (0x00012bf7) list_double_large_graphic_pane_g4_ParamLimits

0x7335,	// (0x00012bf7) list_double_large_graphic_pane_g4

0x0004,

0xf639,	// (0x0001aefb) list_double_large_graphic_pane_g_ParamLimits

0xf639,	// (0x0001aefb) list_double_large_graphic_pane_g

0x735d,	// (0x00012c1f) list_double_large_graphic_pane_t1_ParamLimits

0x735d,	// (0x00012c1f) list_double_large_graphic_pane_t1

0x7376,	// (0x00012c38) list_double_large_graphic_pane_t2_ParamLimits

0x7376,	// (0x00012c38) list_double_large_graphic_pane_t2

0x0001,

0xf644,	// (0x0001af06) list_double_large_graphic_pane_t_ParamLimits

0xf644,	// (0x0001af06) list_double_large_graphic_pane_t

0x7388,	// (0x00012c4a) list_double2_large_graphic_pane_g1_ParamLimits

0x7388,	// (0x00012c4a) list_double2_large_graphic_pane_g1

0x71df,	// (0x00012aa1) list_double2_large_graphic_pane_g2_ParamLimits

0x71df,	// (0x00012aa1) list_double2_large_graphic_pane_g2

0x71f0,	// (0x00012ab2) list_double2_large_graphic_pane_g3_ParamLimits

0x71f0,	// (0x00012ab2) list_double2_large_graphic_pane_g3

0x0002,

0xf649,	// (0x0001af0b) list_double2_large_graphic_pane_g_ParamLimits

0xf649,	// (0x0001af0b) list_double2_large_graphic_pane_g

0x7394,	// (0x00012c56) list_double2_large_graphic_pane_t1_ParamLimits

0x7394,	// (0x00012c56) list_double2_large_graphic_pane_t1

0x73aa,	// (0x00012c6c) list_double2_large_graphic_pane_t2_ParamLimits

0x73aa,	// (0x00012c6c) list_double2_large_graphic_pane_t2

0x0001,

0xf650,	// (0x0001af12) list_double2_large_graphic_pane_t_ParamLimits

0xf650,	// (0x0001af12) list_double2_large_graphic_pane_t

0x73bc,	// (0x00012c7e) list_double_heading_pane_g1_ParamLimits

0x73bc,	// (0x00012c7e) list_double_heading_pane_g1

0x73cd,	// (0x00012c8f) list_double_heading_pane_g2_ParamLimits

0x73cd,	// (0x00012c8f) list_double_heading_pane_g2

0x0001,

0xf655,	// (0x0001af17) list_double_heading_pane_g_ParamLimits

0xf655,	// (0x0001af17) list_double_heading_pane_g

0x73d9,	// (0x00012c9b) list_double_heading_pane_t1_ParamLimits

0x73d9,	// (0x00012c9b) list_double_heading_pane_t1

0x73ef,	// (0x00012cb1) list_double_heading_pane_t2_ParamLimits

0x73ef,	// (0x00012cb1) list_double_heading_pane_t2

0x0001,

0xf65a,	// (0x0001af1c) list_double_heading_pane_t_ParamLimits

0xf65a,	// (0x0001af1c) list_double_heading_pane_t

0x7401,	// (0x00012cc3) list_double_graphic_heading_pane_g1_ParamLimits

0x7401,	// (0x00012cc3) list_double_graphic_heading_pane_g1

0x73bc,	// (0x00012c7e) list_double_graphic_heading_pane_g2_ParamLimits

0x73bc,	// (0x00012c7e) list_double_graphic_heading_pane_g2

0x73cd,	// (0x00012c8f) list_double_graphic_heading_pane_g3_ParamLimits

0x73cd,	// (0x00012c8f) list_double_graphic_heading_pane_g3

0x0002,

0xf65f,	// (0x0001af21) list_double_graphic_heading_pane_g_ParamLimits

0xf65f,	// (0x0001af21) list_double_graphic_heading_pane_g

0x740d,	// (0x00012ccf) list_double_graphic_heading_pane_t1_ParamLimits

0x740d,	// (0x00012ccf) list_double_graphic_heading_pane_t1

0x7423,	// (0x00012ce5) list_double_graphic_heading_pane_t2_ParamLimits

0x7423,	// (0x00012ce5) list_double_graphic_heading_pane_t2

0x0001,

0xf666,	// (0x0001af28) list_double_graphic_heading_pane_t_ParamLimits

0xf666,	// (0x0001af28) list_double_graphic_heading_pane_t

0x7324,	// (0x00012be6) list_double_time_pane_g1_ParamLimits

0x7324,	// (0x00012be6) list_double_time_pane_g1

0x71ab,	// (0x00012a6d) list_double_time_pane_g2_ParamLimits

0x71ab,	// (0x00012a6d) list_double_time_pane_g2

0x0001,

0xf66b,	// (0x0001af2d) list_double_time_pane_g_ParamLimits

0xf66b,	// (0x0001af2d) list_double_time_pane_g

0x7435,	// (0x00012cf7) list_double_time_pane_t1_ParamLimits

0x7435,	// (0x00012cf7) list_double_time_pane_t1

0x744b,	// (0x00012d0d) list_double_time_pane_t2_ParamLimits

0x744b,	// (0x00012d0d) list_double_time_pane_t2

0x745d,	// (0x00012d1f) list_double_time_pane_t3_ParamLimits

0x745d,	// (0x00012d1f) list_double_time_pane_t3

0x746f,	// (0x00012d31) list_double_time_pane_t4_ParamLimits

0x746f,	// (0x00012d31) list_double_time_pane_t4

0x0003,

0xf670,	// (0x0001af32) list_double_time_pane_t_ParamLimits

0xf670,	// (0x0001af32) list_double_time_pane_t

0x72c5,	// (0x00012b87) list_setting_pane_g1_ParamLimits

0x72c5,	// (0x00012b87) list_setting_pane_g1

0x71f0,	// (0x00012ab2) list_setting_pane_g2_ParamLimits

0x71f0,	// (0x00012ab2) list_setting_pane_g2

0x0001,

0xf679,	// (0x0001af3b) list_setting_pane_g_ParamLimits

0xf679,	// (0x0001af3b) list_setting_pane_g

0x7481,	// (0x00012d43) list_setting_pane_t1_ParamLimits

0x7481,	// (0x00012d43) list_setting_pane_t1

0x7498,	// (0x00012d5a) list_setting_pane_t2_ParamLimits

0x7498,	// (0x00012d5a) list_setting_pane_t2

0x0002,

0xf67e,	// (0x0001af40) list_setting_pane_t_ParamLimits

0xf67e,	// (0x0001af40) list_setting_pane_t

0x74d7,	// (0x00012d99) set_value_pane_cp_ParamLimits

0x74d7,	// (0x00012d99) set_value_pane_cp

0x72c5,	// (0x00012b87) list_setting_number_pane_g1_ParamLimits

0x72c5,	// (0x00012b87) list_setting_number_pane_g1

0x71f0,	// (0x00012ab2) list_setting_number_pane_g2_ParamLimits

0x71f0,	// (0x00012ab2) list_setting_number_pane_g2

0x0001,

0xf679,	// (0x0001af3b) list_setting_number_pane_g_ParamLimits

0xf679,	// (0x0001af3b) list_setting_number_pane_g

0x74e5,	// (0x00012da7) list_setting_number_pane_t1_ParamLimits

0x74e5,	// (0x00012da7) list_setting_number_pane_t1

0x74f9,	// (0x00012dbb) list_setting_number_pane_t2_ParamLimits

0x74f9,	// (0x00012dbb) list_setting_number_pane_t2

0x7510,	// (0x00012dd2) list_setting_number_pane_t3_ParamLimits

0x7510,	// (0x00012dd2) list_setting_number_pane_t3

0x0003,

0xf685,	// (0x0001af47) list_setting_number_pane_t_ParamLimits

0xf685,	// (0x0001af47) list_setting_number_pane_t

0x74d7,	// (0x00012d99) set_value_pane_ParamLimits

0x74d7,	// (0x00012d99) set_value_pane

0x7553,	// (0x00012e15) bg_set_opt_pane_ParamLimits

0x7553,	// (0x00012e15) bg_set_opt_pane

0x7574,	// (0x00012e36) set_value_pane_t1

0x7582,	// (0x00012e44) slider_set_pane_cp3

0x758b,	// (0x00012e4d) volume_small_pane_cp

0x7594,	// (0x00012e56) list_form_gen_pane

0x759d,	// (0x00012e5f) scroll_pane_cp8

0x75b6,	// (0x00012e78) form_field_data_pane_ParamLimits

0x75b6,	// (0x00012e78) form_field_data_pane

0x75dc,	// (0x00012e9e) form_field_data_wide_pane_ParamLimits

0x75dc,	// (0x00012e9e) form_field_data_wide_pane

0x7603,	// (0x00012ec5) form_field_popup_pane_ParamLimits

0x7603,	// (0x00012ec5) form_field_popup_pane

0x7625,	// (0x00012ee7) form_field_popup_wide_pane_ParamLimits

0x7625,	// (0x00012ee7) form_field_popup_wide_pane

0x7646,	// (0x00012f08) form_field_slider_pane_ParamLimits

0x7646,	// (0x00012f08) form_field_slider_pane

0x7659,	// (0x00012f1b) form_field_slider_wide_pane_ParamLimits

0x7659,	// (0x00012f1b) form_field_slider_wide_pane

0x766c,	// (0x00012f2e) data_form_pane

0x7682,	// (0x00012f44) form_field_data_pane_t1

0x769c,	// (0x00012f5e) input_focus_pane

0x76aa,	// (0x00012f6c) data_form_wide_pane

0x76e2,	// (0x00012fa4) form_field_data_wide_pane_t1

0x6e72,	// (0x00012734) input_focus_pane_cp6

0x7704,	// (0x00012fc6) form_field_popup_pane_t1

0x769c,	// (0x00012f5e) input_focus_pane_cp7

0x771e,	// (0x00012fe0) list_form_pane

0x7732,	// (0x00012ff4) form_field_popup_wide_pane_t1

0x769c,	// (0x00012f5e) input_focus_pane_cp8

0x7747,	// (0x00013009) list_form_wide_pane

0x775e,	// (0x00013020) form_field_slider_pane_t1_ParamLimits

0x775e,	// (0x00013020) form_field_slider_pane_t1

0x7772,	// (0x00013034) form_field_slider_pane_t2_ParamLimits

0x7772,	// (0x00013034) form_field_slider_pane_t2

0x0001,

0xf695,	// (0x0001af57) form_field_slider_pane_t_ParamLimits

0xf695,	// (0x0001af57) form_field_slider_pane_t

0x6af6,	// (0x000123b8) input_focus_pane_cp9_ParamLimits

0x6af6,	// (0x000123b8) input_focus_pane_cp9

0x7784,	// (0x00013046) slider_cont_pane_ParamLimits

0x7784,	// (0x00013046) slider_cont_pane

0x7798,	// (0x0001305a) form_field_slider_wide_pane_t1_ParamLimits

0x7798,	// (0x0001305a) form_field_slider_wide_pane_t1

0x77aa,	// (0x0001306c) form_field_slider_wide_pane_t2_ParamLimits

0x77aa,	// (0x0001306c) form_field_slider_wide_pane_t2

0x0001,

0xf69a,	// (0x0001af5c) form_field_slider_wide_pane_t_ParamLimits

0xf69a,	// (0x0001af5c) form_field_slider_wide_pane_t

0x6af6,	// (0x000123b8) input_focus_pane_cp10_ParamLimits

0x6af6,	// (0x000123b8) input_focus_pane_cp10

0x77bc,	// (0x0001307e) slider_cont_pane_cp1_ParamLimits

0x77bc,	// (0x0001307e) slider_cont_pane_cp1

0x77d0,	// (0x00013092) slider_form_pane_cp

0x77d8,	// (0x0001309a) input_focus_pane_g1

0x77e0,	// (0x000130a2) input_focus_pane_g2

0x77e8,	// (0x000130aa) input_focus_pane_g3

0x77f0,	// (0x000130b2) input_focus_pane_g4

0x77f8,	// (0x000130ba) input_focus_pane_g5

0x7800,	// (0x000130c2) input_focus_pane_g6

0x7808,	// (0x000130ca) input_focus_pane_g7

0x7810,	// (0x000130d2) input_focus_pane_g8

0x7818,	// (0x000130da) input_focus_pane_g9

0x3f18,	// (0x0000f7da) input_focus_pane_g10

0x0009,

0xf69f,	// (0x0001af61) input_focus_pane_g

0x9a70,	// (0x00015332) wait_border_pane_g3_copy1

0x7820,	// (0x000130e2) data_form_pane_t1

0x3f18,	// (0x0000f7da) wait_anim_pane_g1_copy1

0xaa48,	// (0x0001630a) data_form_wide_pane_t1

0x783f,	// (0x00013101) list_form_graphic_pane_cp_ParamLimits

0x783f,	// (0x00013101) list_form_graphic_pane_cp

0xaa1d,	// (0x000162df) slider_form_pane_g1

0xaa26,	// (0x000162e8) slider_form_pane_g2

0x0006,

0xf99b,	// (0x0001b25d) slider_form_pane_g

0x783f,	// (0x00013101) list_form_graphic_pane_ParamLimits

0x783f,	// (0x00013101) list_form_graphic_pane

0x7851,	// (0x00013113) list_form_graphic_pane_g1

0x7859,	// (0x0001311b) list_form_graphic_pane_t1_ParamLimits

0x7859,	// (0x0001311b) list_form_graphic_pane_t1

0x6860,	// (0x00012122) list_highlight_pane_cp5_ParamLimits

0x6860,	// (0x00012122) list_highlight_pane_cp5

0x786e,	// (0x00013130) find_pane_g1

0x7877,	// (0x00013139) input_find_pane

0x7880,	// (0x00013142) input_find_pane_g1_ParamLimits

0x7880,	// (0x00013142) input_find_pane_g1

0x788c,	// (0x0001314e) input_find_pane_t1_ParamLimits

0x788c,	// (0x0001314e) input_find_pane_t1

0x78a1,	// (0x00013163) input_find_pane_t2_ParamLimits

0x78a1,	// (0x00013163) input_find_pane_t2

0x0001,

0xf6b4,	// (0x0001af76) input_find_pane_t_ParamLimits

0xf6b4,	// (0x0001af76) input_find_pane_t

0x78b6,	// (0x00013178) input_focus_pane_cp5_ParamLimits

0x78b6,	// (0x00013178) input_focus_pane_cp5

0x78d0,	// (0x00013192) bg_popup_window_pane_cp2_ParamLimits

0x78d0,	// (0x00013192) bg_popup_window_pane_cp2

0x78dd,	// (0x0001319f) listscroll_menu_pane_ParamLimits

0x78dd,	// (0x0001319f) listscroll_menu_pane

0x78e9,	// (0x000131ab) popup_submenu_window_ParamLimits

0x78e9,	// (0x000131ab) popup_submenu_window

0x7919,	// (0x000131db) find_popup_pane_g1

0x7921,	// (0x000131e3) input_popup_find_pane_cp

0x78b6,	// (0x00013178) input_focus_pane_cp4_ParamLimits

0x78b6,	// (0x00013178) input_focus_pane_cp4

0x7939,	// (0x000131fb) input_popup_find_pane_t1_ParamLimits

0x7939,	// (0x000131fb) input_popup_find_pane_t1

0x4091,	// (0x0000f953) bg_popup_sub_pane_cp

0x7967,	// (0x00013229) listscroll_popup_sub_pane

0x796f,	// (0x00013231) list_submenu_pane_ParamLimits

0x796f,	// (0x00013231) list_submenu_pane

0x7980,	// (0x00013242) scroll_pane_cp4

0x7988,	// (0x0001324a) list_single_popup_submenu_pane_ParamLimits

0x7988,	// (0x0001324a) list_single_popup_submenu_pane

0x799d,	// (0x0001325f) list_single_popup_submenu_pane_g1

0x79a5,	// (0x00013267) list_single_popup_submenu_pane_t1_ParamLimits

0x79a5,	// (0x00013267) list_single_popup_submenu_pane_t1

0x6860,	// (0x00012122) bg_active_tab_pane_cp1_ParamLimits

0x6860,	// (0x00012122) bg_active_tab_pane_cp1

0x79ba,	// (0x0001327c) tabs_2_active_pane_g1

0x79c2,	// (0x00013284) tabs_2_active_pane_t1

0x6860,	// (0x00012122) bg_passive_tab_pane_cp1_ParamLimits

0x6860,	// (0x00012122) bg_passive_tab_pane_cp1

0x79ba,	// (0x0001327c) tabs_2_passive_pane_g1

0x79c2,	// (0x00013284) tabs_2_passive_pane_t1

0x79d4,	// (0x00013296) bg_active_tab_pane_cp4

0x79e2,	// (0x000132a4) tabs_2_long_active_pane_t1

0x79f5,	// (0x000132b7) bg_passive_tab_pane_cp4

0x5641,	// (0x00010f03) list_single_midp_graphic_pane_g4_ParamLimits

0x79d4,	// (0x00013296) bg_active_tab_pane_cp5

0x7a01,	// (0x000132c3) tabs_3_long_active_pane_t1

0x79f5,	// (0x000132b7) bg_passive_tab_pane_cp5

0x5641,	// (0x00010f03) list_single_midp_graphic_pane_g4

0x6860,	// (0x00012122) bg_popup_window_pane_cp13_ParamLimits

0x6860,	// (0x00012122) bg_popup_window_pane_cp13

0x7a1c,	// (0x000132de) listscroll_popup_fast_pane_ParamLimits

0x7a1c,	// (0x000132de) listscroll_popup_fast_pane

0x7a2b,	// (0x000132ed) grid_popup_fast_pane_ParamLimits

0x7a2b,	// (0x000132ed) grid_popup_fast_pane

0x7a3d,	// (0x000132ff) scroll_pane_cp9_ParamLimits

0x7a3d,	// (0x000132ff) scroll_pane_cp9

0xc75e,	// (0x00018020) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc75e,	// (0x00018020) list_single_graphic_hl_pane_t1_cp2

0x7a61,	// (0x00013323) input_focus_pane_cp20_ParamLimits

0x7a61,	// (0x00013323) input_focus_pane_cp20

0x7a6f,	// (0x00013331) query_popup_data_pane_t1_ParamLimits

0x7a6f,	// (0x00013331) query_popup_data_pane_t1

0x7a82,	// (0x00013344) query_popup_data_pane_t2_ParamLimits

0x7a82,	// (0x00013344) query_popup_data_pane_t2

0x7ac8,	// (0x0001338a) query_popup_data_pane_t3_ParamLimits

0x7ac8,	// (0x0001338a) query_popup_data_pane_t3

0x7b09,	// (0x000133cb) query_popup_data_pane_t4_ParamLimits

0x7b09,	// (0x000133cb) query_popup_data_pane_t4

0x7b45,	// (0x00013407) query_popup_data_pane_t5_ParamLimits

0x7b45,	// (0x00013407) query_popup_data_pane_t5

0x0004,

0xf6b9,	// (0x0001af7b) query_popup_data_pane_t_ParamLimits

0xf6b9,	// (0x0001af7b) query_popup_data_pane_t

0x77d8,	// (0x0001309a) bg_set_opt_pane_g1

0x77e0,	// (0x000130a2) bg_set_opt_pane_g2

0x77e8,	// (0x000130aa) bg_set_opt_pane_g3

0x77f0,	// (0x000130b2) bg_set_opt_pane_g4

0x77f8,	// (0x000130ba) bg_set_opt_pane_g5

0x7800,	// (0x000130c2) bg_set_opt_pane_g6

0x7808,	// (0x000130ca) bg_set_opt_pane_g7

0x7810,	// (0x000130d2) bg_set_opt_pane_g8

0x7818,	// (0x000130da) bg_set_opt_pane_g9

0x0008,

0xf6c4,	// (0x0001af86) bg_set_opt_pane_g

0x5241,	// (0x00010b03) control_top_pane_stacon_ParamLimits

0x5241,	// (0x00010b03) control_top_pane_stacon

0x5294,	// (0x00010b56) signal_pane_stacon_ParamLimits

0x5294,	// (0x00010b56) signal_pane_stacon

0x81a8,	// (0x00013a6a) stacon_top_pane_g1_ParamLimits

0x81a8,	// (0x00013a6a) stacon_top_pane_g1

0x52b9,	// (0x00010b7b) title_pane_stacon_ParamLimits

0x52b9,	// (0x00010b7b) title_pane_stacon

0x52e3,	// (0x00010ba5) uni_indicator_pane_stacon_ParamLimits

0x52e3,	// (0x00010ba5) uni_indicator_pane_stacon

0x52fb,	// (0x00010bbd) battery_pane_stacon_ParamLimits

0x52fb,	// (0x00010bbd) battery_pane_stacon

0x533f,	// (0x00010c01) control_bottom_pane_stacon_ParamLimits

0x533f,	// (0x00010c01) control_bottom_pane_stacon

0x5362,	// (0x00010c24) navi_pane_stacon_ParamLimits

0x5362,	// (0x00010c24) navi_pane_stacon

0x81ca,	// (0x00013a8c) stacon_bottom_pane_g1_ParamLimits

0x81ca,	// (0x00013a8c) stacon_bottom_pane_g1

0x4f9e,	// (0x00010860) aid_levels_signal_lsc_ParamLimits

0x4f9e,	// (0x00010860) aid_levels_signal_lsc

0x4fb5,	// (0x00010877) signal_pane_stacon_g1_ParamLimits

0x4fb5,	// (0x00010877) signal_pane_stacon_g1

0x4fc9,	// (0x0001088b) signal_pane_stacon_g2_ParamLimits

0x4fc9,	// (0x0001088b) signal_pane_stacon_g2

0x0001,

0xf6d7,	// (0x0001af99) signal_pane_stacon_g_ParamLimits

0xf6d7,	// (0x0001af99) signal_pane_stacon_g

0x4ffe,	// (0x000108c0) title_pane_stacon_t1_ParamLimits

0x4ffe,	// (0x000108c0) title_pane_stacon_t1

0x7b89,	// (0x0001344b) uni_indicator_pane_stacon_g1

0x7b93,	// (0x00013455) uni_indicator_pane_stacon_g2

0x7b9d,	// (0x0001345f) uni_indicator_pane_stacon_g3

0x7ba7,	// (0x00013469) uni_indicator_pane_stacon_g4

0x0003,

0xf6e3,	// (0x0001afa5) uni_indicator_pane_stacon_g

0x5023,	// (0x000108e5) control_top_pane_stacon_g1

0x502b,	// (0x000108ed) control_top_pane_stacon_t1_ParamLimits

0x502b,	// (0x000108ed) control_top_pane_stacon_t1

0x5062,	// (0x00010924) aid_levels_battery_lsc_ParamLimits

0x5062,	// (0x00010924) aid_levels_battery_lsc

0x507a,	// (0x0001093c) battery_pane_stacon_g1_ParamLimits

0x507a,	// (0x0001093c) battery_pane_stacon_g1

0x508d,	// (0x0001094f) battery_pane_stacon_g2_ParamLimits

0x508d,	// (0x0001094f) battery_pane_stacon_g2

0x0001,

0xf6ec,	// (0x0001afae) battery_pane_stacon_g_ParamLimits

0xf6ec,	// (0x0001afae) battery_pane_stacon_g

0x50cb,	// (0x0001098d) navi_icon_pane_stacon

0x50df,	// (0x000109a1) navi_navi_pane_stacon

0x50cb,	// (0x0001098d) navi_text_pane_stacon

0x5023,	// (0x000108e5) control_bottom_pane_stacon_g1

0x50f5,	// (0x000109b7) control_bottom_pane_stacon_t1_ParamLimits

0x50f5,	// (0x000109b7) control_bottom_pane_stacon_t1

0x7bcb,	// (0x0001348d) grid_app_pane_ParamLimits

0x7bcb,	// (0x0001348d) grid_app_pane

0x7bef,	// (0x000134b1) scroll_pane_cp15_ParamLimits

0x7bef,	// (0x000134b1) scroll_pane_cp15

0x7c04,	// (0x000134c6) cell_app_pane_ParamLimits

0x7c04,	// (0x000134c6) cell_app_pane

0x7c30,	// (0x000134f2) cell_app_pane_g1_ParamLimits

0x7c30,	// (0x000134f2) cell_app_pane_g1

0x7c54,	// (0x00013516) cell_app_pane_g2_ParamLimits

0x7c54,	// (0x00013516) cell_app_pane_g2

0x0001,

0xf6f1,	// (0x0001afb3) cell_app_pane_g_ParamLimits

0xf6f1,	// (0x0001afb3) cell_app_pane_g

0x7c60,	// (0x00013522) cell_app_pane_t1_ParamLimits

0x7c60,	// (0x00013522) cell_app_pane_t1

0x7c72,	// (0x00013534) grid_highlight_pane_ParamLimits

0x7c72,	// (0x00013534) grid_highlight_pane

0x77d8,	// (0x0001309a) cell_highlight_pane_g1

0x77e0,	// (0x000130a2) cell_highlight_pane_g2

0x77e8,	// (0x000130aa) cell_highlight_pane_g3

0x77f0,	// (0x000130b2) cell_highlight_pane_g4

0x77f8,	// (0x000130ba) cell_highlight_pane_g5

0x7800,	// (0x000130c2) cell_highlight_pane_g6

0x7808,	// (0x000130ca) cell_highlight_pane_g7

0x7810,	// (0x000130d2) cell_highlight_pane_g8

0x7818,	// (0x000130da) cell_highlight_pane_g9

0x3f18,	// (0x0000f7da) cell_highlight_pane_g10

0x0009,

0xf69f,	// (0x0001af61) cell_highlight_pane_g

0x7c83,	// (0x00013545) bg_scroll_pane

0x513f,	// (0x00010a01) scroll_handle_pane

0x7cca,	// (0x0001358c) scroll_bg_pane_g1

0x7cdf,	// (0x000135a1) scroll_bg_pane_g2

0x7cf7,	// (0x000135b9) scroll_bg_pane_g3

0x0002,

0xf6f6,	// (0x0001afb8) scroll_bg_pane_g

0x7d0c,	// (0x000135ce) scroll_handle_focus_pane_ParamLimits

0x7d0c,	// (0x000135ce) scroll_handle_focus_pane

0x7cca,	// (0x0001358c) scroll_handle_pane_g1

0x7d19,	// (0x000135db) scroll_handle_pane_g2

0x7cf7,	// (0x000135b9) scroll_handle_pane_g3

0x0002,

0xf6fd,	// (0x0001afbf) scroll_handle_pane_g

0x78b6,	// (0x00013178) bg_popup_sub_pane_cp21_ParamLimits

0x78b6,	// (0x00013178) bg_popup_sub_pane_cp21

0x7d2d,	// (0x000135ef) popup_fep_japan_predictive_window_t1_ParamLimits

0x7d2d,	// (0x000135ef) popup_fep_japan_predictive_window_t1

0x7d44,	// (0x00013606) popup_fep_japan_predictive_window_t2_ParamLimits

0x7d44,	// (0x00013606) popup_fep_japan_predictive_window_t2

0x7d77,	// (0x00013639) popup_fep_japan_predictive_window_t3_ParamLimits

0x7d77,	// (0x00013639) popup_fep_japan_predictive_window_t3

0x0002,

0xf704,	// (0x0001afc6) popup_fep_japan_predictive_window_t_ParamLimits

0xf704,	// (0x0001afc6) popup_fep_japan_predictive_window_t

0x4091,	// (0x0000f953) bg_popup_sub_pane_cp23

0x7dae,	// (0x00013670) listscroll_japin_cand_pane

0x7db6,	// (0x00013678) popup_fep_japan_candidate_window_t1

0x7dc4,	// (0x00013686) candidate_pane_ParamLimits

0x7dc4,	// (0x00013686) candidate_pane

0x7dd6,	// (0x00013698) scroll_pane_cp30

0x7de0,	// (0x000136a2) list_single_popup_jap_candidate_pane_ParamLimits

0x7de0,	// (0x000136a2) list_single_popup_jap_candidate_pane

0x4091,	// (0x0000f953) list_highlight_pane_cp30

0x7df4,	// (0x000136b6) list_single_popup_jap_candidate_pane_t1

0x7e03,	// (0x000136c5) level_1_signal

0x7e10,	// (0x000136d2) level_2_signal

0x7e1d,	// (0x000136df) level_3_signal

0x7e2a,	// (0x000136ec) level_4_signal

0x7e37,	// (0x000136f9) level_5_signal

0x7e44,	// (0x00013706) level_6_signal

0x7e51,	// (0x00013713) level_7_signal

0x7e03,	// (0x000136c5) level_1_battery

0x7e10,	// (0x000136d2) level_2_battery

0x7e1d,	// (0x000136df) level_3_battery

0x7e2a,	// (0x000136ec) level_4_battery

0x7e37,	// (0x000136f9) level_5_battery

0x7e44,	// (0x00013706) level_6_battery

0x7e51,	// (0x00013713) level_7_battery

0x7e76,	// (0x00013738) list_menu_pane_ParamLimits

0x7e76,	// (0x00013738) list_menu_pane

0x7e8c,	// (0x0001374e) scroll_pane_cp25_ParamLimits

0x7e8c,	// (0x0001374e) scroll_pane_cp25

0x7ea5,	// (0x00013767) list_double2_graphic_pane_cp2_ParamLimits

0x7ea5,	// (0x00013767) list_double2_graphic_pane_cp2

0x7ea5,	// (0x00013767) list_double2_large_graphic_pane_cp2_ParamLimits

0x7ea5,	// (0x00013767) list_double2_large_graphic_pane_cp2

0x7ea5,	// (0x00013767) list_double2_pane_cp2_ParamLimits

0x7ea5,	// (0x00013767) list_double2_pane_cp2

0x7ea5,	// (0x00013767) list_double_graphic_pane_cp2_ParamLimits

0x7ea5,	// (0x00013767) list_double_graphic_pane_cp2

0x7ea5,	// (0x00013767) list_double_large_graphic_pane_cp2_ParamLimits

0x7ea5,	// (0x00013767) list_double_large_graphic_pane_cp2

0x7ea5,	// (0x00013767) list_double_number_pane_cp2_ParamLimits

0x7ea5,	// (0x00013767) list_double_number_pane_cp2

0x7ea5,	// (0x00013767) list_double_pane_cp2_ParamLimits

0x7ea5,	// (0x00013767) list_double_pane_cp2

0x7ecb,	// (0x0001378d) list_single_2graphic_pane_cp2_ParamLimits

0x7ecb,	// (0x0001378d) list_single_2graphic_pane_cp2

0x7ecb,	// (0x0001378d) list_single_graphic_heading_pane_cp2_ParamLimits

0x7ecb,	// (0x0001378d) list_single_graphic_heading_pane_cp2

0x7ecb,	// (0x0001378d) list_single_graphic_pane_cp2_ParamLimits

0x7ecb,	// (0x0001378d) list_single_graphic_pane_cp2

0x7ecb,	// (0x0001378d) list_single_heading_pane_cp2_ParamLimits

0x7ecb,	// (0x0001378d) list_single_heading_pane_cp2

0x7ee8,	// (0x000137aa) list_single_large_graphic_pane_cp2_ParamLimits

0x7ee8,	// (0x000137aa) list_single_large_graphic_pane_cp2

0x7ecb,	// (0x0001378d) list_single_number_heading_pane_cp2_ParamLimits

0x7ecb,	// (0x0001378d) list_single_number_heading_pane_cp2

0x7ecb,	// (0x0001378d) list_single_number_pane_cp2_ParamLimits

0x7ecb,	// (0x0001378d) list_single_number_pane_cp2

0x7ecb,	// (0x0001378d) list_single_pane_cp2_ParamLimits

0x7ecb,	// (0x0001378d) list_single_pane_cp2

0x7f63,	// (0x00013825) bg_popup_sub_pane_cp22

0x51f1,	// (0x00010ab3) popup_side_volume_key_window_g1

0x521b,	// (0x00010add) popup_side_volume_key_window_t1

0x5239,	// (0x00010afb) volume_small_pane_cp1

0x6af6,	// (0x000123b8) bg_popup_sub_pane_cp24_ParamLimits

0x6af6,	// (0x000123b8) bg_popup_sub_pane_cp24

0x7f79,	// (0x0001383b) fep_china_uni_candidate_pane_ParamLimits

0x7f79,	// (0x0001383b) fep_china_uni_candidate_pane

0x7f8d,	// (0x0001384f) fep_china_uni_entry_pane

0x7f9d,	// (0x0001385f) popup_fep_china_uni_window_g1

0x7fb9,	// (0x0001387b) fep_china_uni_entry_pane_g1

0x7fc3,	// (0x00013885) fep_china_uni_entry_pane_g2

0x0001,

0xf735,	// (0x0001aff7) fep_china_uni_entry_pane_g

0x7fcd,	// (0x0001388f) fep_entry_item_pane

0x7fd7,	// (0x00013899) fep_candidate_item_pane

0x7fdf,	// (0x000138a1) fep_china_uni_candidate_pane_g1

0x7fe9,	// (0x000138ab) fep_china_uni_candidate_pane_g2

0x7ff1,	// (0x000138b3) fep_china_uni_candidate_pane_g3

0x7ff9,	// (0x000138bb) fep_china_uni_candidate_pane_g4

0x0003,

0xf73a,	// (0x0001affc) fep_china_uni_candidate_pane_g

0x3f18,	// (0x0000f7da) fep_entry_item_pane_g1

0x8003,	// (0x000138c5) fep_entry_item_pane_t1_ParamLimits

0x8003,	// (0x000138c5) fep_entry_item_pane_t1

0x8019,	// (0x000138db) fep_candidate_item_pane_t1_ParamLimits

0x8019,	// (0x000138db) fep_candidate_item_pane_t1

0x802e,	// (0x000138f0) fep_candidate_item_pane_t2_ParamLimits

0x802e,	// (0x000138f0) fep_candidate_item_pane_t2

0x0001,

0xf743,	// (0x0001b005) fep_candidate_item_pane_t_ParamLimits

0xf743,	// (0x0001b005) fep_candidate_item_pane_t

0x6860,	// (0x00012122) list_highlight_pane_cp31_ParamLimits

0x6860,	// (0x00012122) list_highlight_pane_cp31

0x8040,	// (0x00013902) level_1_signal_lsc

0x8049,	// (0x0001390b) level_2_signal_lsc

0x8052,	// (0x00013914) level_3_signal_lsc

0x805b,	// (0x0001391d) level_4_signal_lsc

0x8064,	// (0x00013926) level_5_signal_lsc

0x806d,	// (0x0001392f) level_6_signal_lsc

0x8076,	// (0x00013938) level_7_signal_lsc

0x8076,	// (0x00013938) level_1_battery_lsc

0x807f,	// (0x00013941) level_2_battery_lsc

0x8088,	// (0x0001394a) level_3_battery_lsc

0x8091,	// (0x00013953) level_4_battery_lsc

0x809a,	// (0x0001395c) level_5_battery_lsc

0x80a3,	// (0x00013965) level_6_battery_lsc

0x8040,	// (0x00013902) level_7_battery_lsc

0x80ac,	// (0x0001396e) scroll_handle_focus_pane_g1

0x80b5,	// (0x00013977) scroll_handle_focus_pane_g2

0x80be,	// (0x00013980) scroll_handle_focus_pane_g3

0x0002,

0xf748,	// (0x0001b00a) scroll_handle_focus_pane_g

0x80c7,	// (0x00013989) list_single_2graphic_pane_g1_ParamLimits

0x80c7,	// (0x00013989) list_single_2graphic_pane_g1

0x713a,	// (0x000129fc) list_single_2graphic_pane_g2_ParamLimits

0x713a,	// (0x000129fc) list_single_2graphic_pane_g2

0x70c0,	// (0x00012982) list_single_2graphic_pane_g3_ParamLimits

0x70c0,	// (0x00012982) list_single_2graphic_pane_g3

0x80d3,	// (0x00013995) list_single_2graphic_pane_g4_ParamLimits

0x80d3,	// (0x00013995) list_single_2graphic_pane_g4

0x0003,

0xf74f,	// (0x0001b011) list_single_2graphic_pane_g_ParamLimits

0xf74f,	// (0x0001b011) list_single_2graphic_pane_g

0x80df,	// (0x000139a1) list_single_2graphic_pane_t1_ParamLimits

0x80df,	// (0x000139a1) list_single_2graphic_pane_t1

0x810d,	// (0x000139cf) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x810d,	// (0x000139cf) list_double2_graphic_large_graphic_pane_g1

0x71df,	// (0x00012aa1) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x71df,	// (0x00012aa1) list_double2_graphic_large_graphic_pane_g2

0x71f0,	// (0x00012ab2) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x71f0,	// (0x00012ab2) list_double2_graphic_large_graphic_pane_g3

0x811f,	// (0x000139e1) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x811f,	// (0x000139e1) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf758,	// (0x0001b01a) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf758,	// (0x0001b01a) list_double2_graphic_large_graphic_pane_g

0x812b,	// (0x000139ed) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x812b,	// (0x000139ed) list_double2_graphic_large_graphic_pane_t1

0x8141,	// (0x00013a03) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x8141,	// (0x00013a03) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf761,	// (0x0001b023) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf761,	// (0x0001b023) list_double2_graphic_large_graphic_pane_t

0x828c,	// (0x00013b4e) popup_fast_swap_window_ParamLimits

0x828c,	// (0x00013b4e) popup_fast_swap_window

0x82aa,	// (0x00013b6c) popup_side_volume_key_window

0x82c8,	// (0x00013b8a) stacon_top_pane

0x82d2,	// (0x00013b94) status_pane_ParamLimits

0x82d2,	// (0x00013b94) status_pane

0x82c8,	// (0x00013b8a) status_small_pane

0x4091,	// (0x0000f953) control_pane

0x4091,	// (0x0000f953) stacon_bottom_pane

0x759d,	// (0x00012e5f) scroll_pane_cp121

0x7594,	// (0x00012e56) set_content_pane

0x8153,	// (0x00013a15) bg_active_tab_pane_g1_cp1

0x815c,	// (0x00013a1e) bg_active_tab_pane_g2_cp1

0x8165,	// (0x00013a27) bg_active_tab_pane_g3_cp1

0x8153,	// (0x00013a15) bg_passive_tab_pane_g1_cp1

0x815c,	// (0x00013a1e) bg_passive_tab_pane_g2_cp1

0x8165,	// (0x00013a27) bg_passive_tab_pane_g3_cp1

0x816e,	// (0x00013a30) bg_active_tab_pane_g1_cp2

0x815c,	// (0x00013a1e) bg_active_tab_pane_g2_cp2

0x8177,	// (0x00013a39) bg_active_tab_pane_g3_cp2

0x816e,	// (0x00013a30) bg_passive_tab_pane_g1_cp2

0x815c,	// (0x00013a1e) bg_passive_tab_pane_g2_cp2

0x8177,	// (0x00013a39) bg_passive_tab_pane_g3_cp2

0x8180,	// (0x00013a42) bg_active_tab_pane_g1_cp3

0x815c,	// (0x00013a1e) bg_active_tab_pane_g2_cp3

0x8189,	// (0x00013a4b) bg_active_tab_pane_g3_cp3

0x8180,	// (0x00013a42) bg_passive_tab_pane_g1_cp3

0x815c,	// (0x00013a1e) bg_passive_tab_pane_g2_cp3

0x8189,	// (0x00013a4b) bg_passive_tab_pane_g3_cp3

0x8192,	// (0x00013a54) bg_active_tab_pane_g1_cp4

0x815c,	// (0x00013a1e) bg_active_tab_pane_g2_cp4

0x819d,	// (0x00013a5f) bg_active_tab_pane_g3_cp4

0x8192,	// (0x00013a54) bg_passive_tab_pane_g1_cp4

0x815c,	// (0x00013a1e) bg_passive_tab_pane_g2_cp4

0x819d,	// (0x00013a5f) bg_passive_tab_pane_g3_cp4

0x81e6,	// (0x00013aa8) bg_active_tab_pane_g1_cp5

0x815c,	// (0x00013a1e) bg_active_tab_pane_g2_cp5

0x81ef,	// (0x00013ab1) bg_active_tab_pane_g3_cp5

0x81e6,	// (0x00013aa8) bg_passive_tab_pane_g1_cp5

0x815c,	// (0x00013a1e) bg_passive_tab_pane_g2_cp5

0x81ef,	// (0x00013ab1) bg_passive_tab_pane_g3_cp5

0x81f8,	// (0x00013aba) list_set_graphic_pane_ParamLimits

0x81f8,	// (0x00013aba) list_set_graphic_pane

0x4091,	// (0x0000f953) bg_set_opt_pane_cp4

0x820d,	// (0x00013acf) list_set_graphic_pane_g1_ParamLimits

0x820d,	// (0x00013acf) list_set_graphic_pane_g1

0x8219,	// (0x00013adb) list_set_graphic_pane_g2_ParamLimits

0x8219,	// (0x00013adb) list_set_graphic_pane_g2

0x0001,

0xf766,	// (0x0001b028) list_set_graphic_pane_g_ParamLimits

0xf766,	// (0x0001b028) list_set_graphic_pane_g

0x0009,

0xfad5,	// (0x0001b397) volume_small_pane_cp_g

0x823d,	// (0x00013aff) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x823d,	// (0x00013aff) list_double2_large_graphic_pane_g1_cp2

0x824b,	// (0x00013b0d) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x824b,	// (0x00013b0d) list_double2_large_graphic_pane_g2_cp2

0x825c,	// (0x00013b1e) list_double2_large_graphic_pane_g3_cp2

0x8264,	// (0x00013b26) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x8264,	// (0x00013b26) list_double2_large_graphic_pane_t1_cp2

0x827a,	// (0x00013b3c) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x827a,	// (0x00013b3c) list_double2_large_graphic_pane_t2_cp2

0xa55a,	// (0x00015e1c) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xa55a,	// (0x00015e1c) list_double_large_graphic_pane_g1_cp2

0xa56d,	// (0x00015e2f) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xa56d,	// (0x00015e2f) list_double_large_graphic_pane_g2_cp2

0x83f0,	// (0x00013cb2) list_double_large_graphic_pane_g3_cp2

0xa57e,	// (0x00015e40) list_double_large_graphic_pane_g4_cp

0xa586,	// (0x00015e48) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xa586,	// (0x00015e48) list_double_large_graphic_pane_t1_cp2

0xa59d,	// (0x00015e5f) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xa59d,	// (0x00015e5f) list_double_large_graphic_pane_t2_cp2

0x82e0,	// (0x00013ba2) list_double2_graphic_pane_g1_cp2_ParamLimits

0x82e0,	// (0x00013ba2) list_double2_graphic_pane_g1_cp2

0x82ee,	// (0x00013bb0) list_double2_graphic_pane_g2_cp2_ParamLimits

0x82ee,	// (0x00013bb0) list_double2_graphic_pane_g2_cp2

0x82ff,	// (0x00013bc1) list_double2_graphic_pane_g3_cp2

0x8309,	// (0x00013bcb) list_double2_graphic_pane_t1_cp2_ParamLimits

0x8309,	// (0x00013bcb) list_double2_graphic_pane_t1_cp2

0x831f,	// (0x00013be1) list_double2_graphic_pane_t2_cp2_ParamLimits

0x831f,	// (0x00013be1) list_double2_graphic_pane_t2_cp2

0x8331,	// (0x00013bf3) list_single_number_heading_pane_g1_cp2_ParamLimits

0x8331,	// (0x00013bf3) list_single_number_heading_pane_g1_cp2

0x833d,	// (0x00013bff) list_single_number_heading_pane_g2_cp2

0x8345,	// (0x00013c07) list_single_number_heading_pane_t1_cp2_ParamLimits

0x8345,	// (0x00013c07) list_single_number_heading_pane_t1_cp2

0x835b,	// (0x00013c1d) list_single_number_heading_pane_t2_cp2_ParamLimits

0x835b,	// (0x00013c1d) list_single_number_heading_pane_t2_cp2

0x836f,	// (0x00013c31) list_single_number_heading_pane_t3_cp2_ParamLimits

0x836f,	// (0x00013c31) list_single_number_heading_pane_t3_cp2

0x8331,	// (0x00013bf3) list_single_heading_pane_g1_cp2_ParamLimits

0x8331,	// (0x00013bf3) list_single_heading_pane_g1_cp2

0x833d,	// (0x00013bff) list_single_heading_pane_g2_cp2

0x8345,	// (0x00013c07) list_single_heading_pane_t1_cp2_ParamLimits

0x8345,	// (0x00013c07) list_single_heading_pane_t1_cp2

0xa354,	// (0x00015c16) list_single_heading_pane_t2_cp2_ParamLimits

0xa354,	// (0x00015c16) list_single_heading_pane_t2_cp2

0xa296,	// (0x00015b58) list_double_graphic_pane_g1_cp2_ParamLimits

0xa296,	// (0x00015b58) list_double_graphic_pane_g1_cp2

0xa2a2,	// (0x00015b64) list_double_graphic_pane_g2_cp2_ParamLimits

0xa2a2,	// (0x00015b64) list_double_graphic_pane_g2_cp2

0xa2b1,	// (0x00015b73) list_double_graphic_pane_g3_cp2

0xa2b9,	// (0x00015b7b) list_double_graphic_pane_t1_cp2_ParamLimits

0xa2b9,	// (0x00015b7b) list_double_graphic_pane_t1_cp2

0xa2cf,	// (0x00015b91) list_double_graphic_pane_t2_cp2_ParamLimits

0xa2cf,	// (0x00015b91) list_double_graphic_pane_t2_cp2

0x83e4,	// (0x00013ca6) list_double_number_pane_g1_cp2_ParamLimits

0x83e4,	// (0x00013ca6) list_double_number_pane_g1_cp2

0x83f0,	// (0x00013cb2) list_double_number_pane_g2_cp2

0xa25a,	// (0x00015b1c) list_double_number_pane_t1_cp2_ParamLimits

0xa25a,	// (0x00015b1c) list_double_number_pane_t1_cp2

0xa26e,	// (0x00015b30) list_double_number_pane_t2_cp2_ParamLimits

0xa26e,	// (0x00015b30) list_double_number_pane_t2_cp2

0xa284,	// (0x00015b46) list_double_number_pane_t3_cp2_ParamLimits

0xa284,	// (0x00015b46) list_double_number_pane_t3_cp2

0xa143,	// (0x00015a05) list_single_graphic_pane_g1_cp2_ParamLimits

0xa143,	// (0x00015a05) list_single_graphic_pane_g1_cp2

0x844a,	// (0x00013d0c) list_single_graphic_pane_g2_cp2_ParamLimits

0x844a,	// (0x00013d0c) list_single_graphic_pane_g2_cp2

0x8456,	// (0x00013d18) list_single_graphic_pane_g3_cp2

0xa119,	// (0x000159db) list_single_graphic_pane_t1_cp2_ParamLimits

0xa119,	// (0x000159db) list_single_graphic_pane_t1_cp2

0x844a,	// (0x00013d0c) list_single_number_pane_g1_cp2_ParamLimits

0x844a,	// (0x00013d0c) list_single_number_pane_g1_cp2

0x8456,	// (0x00013d18) list_single_number_pane_g2_cp2

0xa119,	// (0x000159db) list_single_number_pane_t1_cp2_ParamLimits

0xa119,	// (0x000159db) list_single_number_pane_t1_cp2

0xa12f,	// (0x000159f1) list_single_number_pane_t2_cp2_ParamLimits

0xa12f,	// (0x000159f1) list_single_number_pane_t2_cp2

0x824b,	// (0x00013b0d) list_double2_pane_g1_cp2_ParamLimits

0x824b,	// (0x00013b0d) list_double2_pane_g1_cp2

0x825c,	// (0x00013b1e) list_double2_pane_g2_cp2

0x83bc,	// (0x00013c7e) list_double2_pane_t1_cp2_ParamLimits

0x83bc,	// (0x00013c7e) list_double2_pane_t1_cp2

0x83d2,	// (0x00013c94) list_double2_pane_t2_cp2_ParamLimits

0x83d2,	// (0x00013c94) list_double2_pane_t2_cp2

0x83e4,	// (0x00013ca6) list_double_pane_g1_cp2_ParamLimits

0x83e4,	// (0x00013ca6) list_double_pane_g1_cp2

0x83f0,	// (0x00013cb2) list_double_pane_g2_cp2

0x83f8,	// (0x00013cba) list_double_pane_t1_cp2_ParamLimits

0x83f8,	// (0x00013cba) list_double_pane_t1_cp2

0x840e,	// (0x00013cd0) list_double_pane_t2_cp2_ParamLimits

0x840e,	// (0x00013cd0) list_double_pane_t2_cp2

0x843a,	// (0x00013cfc) list_single_pane_cp2_g3

0x844a,	// (0x00013d0c) list_single_pane_g1_cp2_ParamLimits

0x844a,	// (0x00013d0c) list_single_pane_g1_cp2

0x8456,	// (0x00013d18) list_single_pane_g2_cp2

0x845e,	// (0x00013d20) list_single_pane_t1_cp2_ParamLimits

0x845e,	// (0x00013d20) list_single_pane_t1_cp2

0x8476,	// (0x00013d38) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x8476,	// (0x00013d38) list_single_large_graphic_pane_g1_cp2

0x8484,	// (0x00013d46) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x8484,	// (0x00013d46) list_single_large_graphic_pane_g2_cp2

0x8490,	// (0x00013d52) list_single_large_graphic_pane_g3_cp2

0x8498,	// (0x00013d5a) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x8498,	// (0x00013d5a) list_single_large_graphic_pane_g4_cp1

0x84b2,	// (0x00013d74) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x84b2,	// (0x00013d74) list_single_large_graphic_pane_t1_cp2

0xa0e3,	// (0x000159a5) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa0e3,	// (0x000159a5) list_single_graphic_heading_pane_g1_cp2

0xa0b0,	// (0x00015972) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa0b0,	// (0x00015972) list_single_graphic_heading_pane_g4_cp2

0x8456,	// (0x00013d18) list_single_graphic_heading_pane_g5_cp2

0xa0ef,	// (0x000159b1) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa0ef,	// (0x000159b1) list_single_graphic_heading_pane_t1_cp2

0xa105,	// (0x000159c7) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa105,	// (0x000159c7) list_single_graphic_heading_pane_t2_cp2

0xa0a4,	// (0x00015966) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa0a4,	// (0x00015966) list_single_2graphic_pane_g1_cp2

0xa0b0,	// (0x00015972) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa0b0,	// (0x00015972) list_single_2graphic_pane_g2_cp2

0x8456,	// (0x00013d18) list_single_2graphic_pane_g3_cp2

0xa0c1,	// (0x00015983) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa0c1,	// (0x00015983) list_single_2graphic_pane_g4_cp2

0xa0cd,	// (0x0001598f) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa0cd,	// (0x0001598f) list_single_2graphic_pane_t1_cp2

0x3f18,	// (0x0000f7da) list_highlight_pane_g10_cp1

0x9c7c,	// (0x0001553e) list_highlight_pane_g1_cp1

0x9c84,	// (0x00015546) list_highlight_pane_g2_cp1

0x9c8c,	// (0x0001554e) list_highlight_pane_g3_cp1

0x9c94,	// (0x00015556) list_highlight_pane_g4_cp1

0x9c9c,	// (0x0001555e) list_highlight_pane_g5_cp1

0x9ca4,	// (0x00015566) list_highlight_pane_g6_cp1

0x9cac,	// (0x0001556e) list_highlight_pane_g7_cp1

0x9cb4,	// (0x00015576) list_highlight_pane_g8_cp1

0x9cbc,	// (0x0001557e) list_highlight_pane_g9_cp1

0x9b9c,	// (0x0001545e) form_field_slider_pane_t3

0x9baa,	// (0x0001546c) form_field_slider_pane_t4

0x9bb8,	// (0x0001547a) slider_form_pane_ParamLimits

0x9bb8,	// (0x0001547a) slider_form_pane

0x4091,	// (0x0000f953) control_abbreviations

0x4091,	// (0x0000f953) control_conventions

0x4091,	// (0x0000f953) control_definitions

0x4091,	// (0x0000f953) format_table_attribute

0xa3aa,	// (0x00015c6c) bg_popup_preview_window_pane_g9

0x4091,	// (0x0000f953) format_table_data2

0x4091,	// (0x0000f953) format_table_data3

0x4091,	// (0x0000f953) format_table_data_example

0x0008,

0x4091,	// (0x0000f953) intro_purpose

0xf8fb,	// (0x0001b1bd) bg_popup_preview_window_pane_g

0x4091,	// (0x0000f953) texts_category

0x4091,	// (0x0000f953) texts_graphics

0x84c8,	// (0x00013d8a) text_digital

0x84d7,	// (0x00013d99) text_primary

0x84e6,	// (0x00013da8) text_primary_small

0x84f5,	// (0x00013db7) text_secondary

0x8504,	// (0x00013dc6) text_title

0xabcf,	// (0x00016491) bg_passive_tab_pane_g1_cp3_srt

0x815c,	// (0x00013a1e) bg_passive_tab_pane_g2_cp3_srt

0xabd8,	// (0x0001649a) bg_passive_tab_pane_g3_cp3_srt

0x6860,	// (0x00012122) bg_active_tab_pane_cp3_srt_ParamLimits

0x6860,	// (0x00012122) bg_active_tab_pane_cp3_srt

0xabe1,	// (0x000164a3) tabs_4_active_pane_srt_g1

0xabe9,	// (0x000164ab) tabs_4_active_pane_srt_t1_ParamLimits

0xabe9,	// (0x000164ab) tabs_4_active_pane_srt_t1

0xabcf,	// (0x00016491) bg_active_tab_pane_g1_cp3_copy1

0x815c,	// (0x00013a1e) bg_active_tab_pane_g2_cp3_copy1

0xabd8,	// (0x0001649a) bg_active_tab_pane_g3_cp3_copy1

0x6860,	// (0x00012122) tabs_2_long_active_pane_srt_ParamLimits

0x6860,	// (0x00012122) tabs_2_long_active_pane_srt

0x6860,	// (0x00012122) tabs_2_long_passive_pane_srt_ParamLimits

0x6860,	// (0x00012122) tabs_2_long_passive_pane_srt

0x79f5,	// (0x000132b7) bg_passive_tab_pane_cp4_srt_ParamLimits

0x79f5,	// (0x000132b7) bg_passive_tab_pane_cp4_srt

0xa822,	// (0x000160e4) bg_passive_tab_pane_g1_cp4_srt

0x815c,	// (0x00013a1e) bg_passive_tab_pane_g2_cp4_srt

0xa82b,	// (0x000160ed) bg_passive_tab_pane_g3_cp4_srt

0x79d4,	// (0x00013296) bg_active_tab_pane_cp4_srt_ParamLimits

0x79d4,	// (0x00013296) bg_active_tab_pane_cp4_srt

0xa834,	// (0x000160f6) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa834,	// (0x000160f6) tabs_2_long_active_pane_srt_t1

0xa822,	// (0x000160e4) bg_active_tab_pane_g1_cp4_srt

0x815c,	// (0x00013a1e) bg_active_tab_pane_g2_cp4_srt

0xa82b,	// (0x000160ed) bg_active_tab_pane_g3_cp4_srt

0x6af6,	// (0x000123b8) tabs_3_long_active_pane_srt_ParamLimits

0x6af6,	// (0x000123b8) tabs_3_long_active_pane_srt

0x6af6,	// (0x000123b8) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x6af6,	// (0x000123b8) tabs_3_long_passive_pane_cp_srt

0x6af6,	// (0x000123b8) tabs_3_long_passive_pane_srt_ParamLimits

0x6af6,	// (0x000123b8) tabs_3_long_passive_pane_srt

0x79f5,	// (0x000132b7) bg_passive_tab_pane_cp5_srt_ParamLimits

0x79f5,	// (0x000132b7) bg_passive_tab_pane_cp5_srt

0x81e6,	// (0x00013aa8) bg_passive_tab_pane_g1_cp5_srt

0x815c,	// (0x00013a1e) bg_passive_tab_pane_g2_cp5_srt

0x81ef,	// (0x00013ab1) bg_passive_tab_pane_g3_cp5_srt

0x79d4,	// (0x00013296) bg_active_tab_pane_cp5_srt_ParamLimits

0x79d4,	// (0x00013296) bg_active_tab_pane_cp5_srt

0xa810,	// (0x000160d2) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa810,	// (0x000160d2) tabs_3_long_active_pane_srt_t1

0x81e6,	// (0x00013aa8) bg_active_tab_pane_g1_cp5_srt

0x815c,	// (0x00013a1e) bg_active_tab_pane_g2_cp5_srt

0x81ef,	// (0x00013ab1) bg_active_tab_pane_g3_cp5_srt

0xa802,	// (0x000160c4) navi_text_pane_srt_t1

0xa7fa,	// (0x000160bc) navi_icon_pane_srt_g1

0x86db,	// (0x00013f9d) midp_editing_number_pane_srt

0x8513,	// (0x00013dd5) midp_ticker_pane_srt

0x86e3,	// (0x00013fa5) midp_ticker_pane_srt_g1

0x86eb,	// (0x00013fad) midp_ticker_pane_srt_g2

0x0001,

0xf785,	// (0x0001b047) midp_ticker_pane_srt_g

0x86f3,	// (0x00013fb5) midp_ticker_pane_srt_t1

0xa7eb,	// (0x000160ad) midp_editing_number_pane_t1_copy1

0x851b,	// (0x00013ddd) listscroll_midp_pane

0x851b,	// (0x00013ddd) midp_form_pane

0x8589,	// (0x00013e4b) midp_info_popup_window_ParamLimits

0x8589,	// (0x00013e4b) midp_info_popup_window

0x78b6,	// (0x00013178) bg_popup_sub_pane_cp50_ParamLimits

0x78b6,	// (0x00013178) bg_popup_sub_pane_cp50

0x98b2,	// (0x00015174) listscroll_midp_info_pane_ParamLimits

0x98b2,	// (0x00015174) listscroll_midp_info_pane

0x989a,	// (0x0001515c) listscroll_form_midp_pane_ParamLimits

0x989a,	// (0x0001515c) listscroll_form_midp_pane

0x98a6,	// (0x00015168) scroll_bar_cp050

0x987a,	// (0x0001513c) list_midp_pane

0xb812,	// (0x000170d4) signal_pane_g2_cp

0x97b4,	// (0x00015076) listscroll_midp_info_pane_t1_ParamLimits

0x97b4,	// (0x00015076) listscroll_midp_info_pane_t1

0x97cc,	// (0x0001508e) listscroll_midp_info_pane_t2_ParamLimits

0x97cc,	// (0x0001508e) listscroll_midp_info_pane_t2

0x980a,	// (0x000150cc) listscroll_midp_info_pane_t3_ParamLimits

0x980a,	// (0x000150cc) listscroll_midp_info_pane_t3

0x9844,	// (0x00015106) listscroll_midp_info_pane_t4_ParamLimits

0x9844,	// (0x00015106) listscroll_midp_info_pane_t4

0x0003,

0xf836,	// (0x0001b0f8) listscroll_midp_info_pane_t_ParamLimits

0xf836,	// (0x0001b0f8) listscroll_midp_info_pane_t

0x7980,	// (0x00013242) scroll_pane_cp21

0x974e,	// (0x00015010) form_midp_field_choice_group_pane

0x9757,	// (0x00015019) form_midp_field_text_pane

0x979a,	// (0x0001505c) form_midp_field_time_pane

0x97a2,	// (0x00015064) form_midp_gauge_slider_pane

0x97ab,	// (0x0001506d) form_midp_gauge_wait_pane

0x4091,	// (0x0000f953) form_midp_image_pane

0x973b,	// (0x00014ffd) list_single_midp_pane_ParamLimits

0x973b,	// (0x00014ffd) list_single_midp_pane

0x970c,	// (0x00014fce) form_midp_field_text_pane_t1

0x9530,	// (0x00014df2) input_focus_pane_cp050

0x972a,	// (0x00014fec) list_midp_form_text_pane

0x96db,	// (0x00014f9d) form_midp_field_choice_group_pane_t1

0x96e9,	// (0x00014fab) input_focus_pane_cp051

0x96fd,	// (0x00014fbf) list_midp_choice_pane

0x4091,	// (0x0000f953) status_idle_pane

0x96bf,	// (0x00014f81) form_midp_field_time_pane_t1

0x3f18,	// (0x0000f7da) wait_anim_pane_g2_copy1

0x96cd,	// (0x00014f8f) form_midp_field_time_pane_t2

0x0001,

0x8639,	// (0x00013efb) aid_navinavi_width_2_pane

0xf831,	// (0x0001b0f3) form_midp_field_time_pane_t

0x4091,	// (0x0000f953) input_focus_pane_cp052

0x4091,	// (0x0000f953) bg_input_focus_pane_cp040

0x967f,	// (0x00014f41) form_midp_gauge_slider_pane_t1

0x968d,	// (0x00014f4f) form_midp_gauge_slider_pane_t2

0x969b,	// (0x00014f5d) form_midp_gauge_slider_pane_t3

0x96a9,	// (0x00014f6b) form_midp_gauge_slider_pane_t4

0x0003,

0xf828,	// (0x0001b0ea) form_midp_gauge_slider_pane_t

0x96b7,	// (0x00014f79) form_midp_slider_pane

0x6860,	// (0x00012122) bg_input_focus_pane_cp041_ParamLimits

0x6860,	// (0x00012122) bg_input_focus_pane_cp041

0x964c,	// (0x00014f0e) form_midp_gauge_wait_pane_t1_ParamLimits

0x964c,	// (0x00014f0e) form_midp_gauge_wait_pane_t1

0x965e,	// (0x00014f20) form_midp_gauge_wait_pane_t2_ParamLimits

0x965e,	// (0x00014f20) form_midp_gauge_wait_pane_t2

0x0001,

0xf823,	// (0x0001b0e5) form_midp_gauge_wait_pane_t_ParamLimits

0xf823,	// (0x0001b0e5) form_midp_gauge_wait_pane_t

0x9670,	// (0x00014f32) form_midp_wait_pane_ParamLimits

0x9670,	// (0x00014f32) form_midp_wait_pane

0x9616,	// (0x00014ed8) form_midp_image_pane_g1

0x961f,	// (0x00014ee1) form_midp_image_pane_t1

0x962e,	// (0x00014ef0) form_midp_image_pane_t2

0x963d,	// (0x00014eff) form_midp_image_pane_t3

0x0002,

0xf81c,	// (0x0001b0de) form_midp_image_pane_t

0x95fe,	// (0x00014ec0) list_single_midp_pane_g1

0x9607,	// (0x00014ec9) list_single_midp_pane_t1

0x95ed,	// (0x00014eaf) list_midp_form_item_pane_ParamLimits

0x95ed,	// (0x00014eaf) list_midp_form_item_pane

0x85e1,	// (0x00013ea3) list_midp_form_item_pane_t1

0x85f0,	// (0x00013eb2) midp_ticker_pane_g1

0x85fc,	// (0x00013ebe) midp_ticker_pane_g2

0x0001,

0xf76b,	// (0x0001b02d) midp_ticker_pane_g

0x8608,	// (0x00013eca) midp_ticker_pane_t1

0xaa9f,	// (0x00016361) midp_editing_number_pane_t1

0xaa7d,	// (0x0001633f) midp_editing_number_pane

0xaa8c,	// (0x0001634e) midp_ticker_pane

0xa7b3,	// (0x00016075) ai_message_heading_pane

0x4091,	// (0x0000f953) bg_popup_window_pane_cp14

0xa7bb,	// (0x0001607d) listscroll_ai_message_pane

0xa739,	// (0x00015ffb) ai_message_heading_pane_g1_ParamLimits

0xa739,	// (0x00015ffb) ai_message_heading_pane_g1

0xa745,	// (0x00016007) ai_message_heading_pane_g2_ParamLimits

0xa745,	// (0x00016007) ai_message_heading_pane_g2

0xa753,	// (0x00016015) ai_message_heading_pane_g3_ParamLimits

0xa753,	// (0x00016015) ai_message_heading_pane_g3

0xa75f,	// (0x00016021) ai_message_heading_pane_g4_ParamLimits

0xa75f,	// (0x00016021) ai_message_heading_pane_g4

0x0003,

0xf95d,	// (0x0001b21f) ai_message_heading_pane_g_ParamLimits

0xf95d,	// (0x0001b21f) ai_message_heading_pane_g

0xa76b,	// (0x0001602d) ai_message_heading_pane_t1_ParamLimits

0xa76b,	// (0x0001602d) ai_message_heading_pane_t1

0xa785,	// (0x00016047) ai_message_heading_pane_t2_ParamLimits

0xa785,	// (0x00016047) ai_message_heading_pane_t2

0x0001,

0xf966,	// (0x0001b228) ai_message_heading_pane_t_ParamLimits

0xf966,	// (0x0001b228) ai_message_heading_pane_t

0xa799,	// (0x0001605b) bg_popup_heading_pane_cp1_ParamLimits

0xa799,	// (0x0001605b) bg_popup_heading_pane_cp1

0xa727,	// (0x00015fe9) list_ai_message_pane_ParamLimits

0xa727,	// (0x00015fe9) list_ai_message_pane

0x7980,	// (0x00013242) scroll_pane_cp10

0xa6c3,	// (0x00015f85) list_ai_message_pane_g1

0xa6cb,	// (0x00015f8d) list_ai_message_pane_g2

0x0001,

0xf93a,	// (0x0001b1fc) list_ai_message_pane_g

0xa6d3,	// (0x00015f95) list_ai_message_pane_t1_ParamLimits

0xa6d3,	// (0x00015f95) list_ai_message_pane_t1

0xa6e8,	// (0x00015faa) list_ai_message_pane_t2_ParamLimits

0xa6e8,	// (0x00015faa) list_ai_message_pane_t2

0xa6fd,	// (0x00015fbf) list_ai_message_pane_t3_ParamLimits

0xa6fd,	// (0x00015fbf) list_ai_message_pane_t3

0xa712,	// (0x00015fd4) list_ai_message_pane_t4_ParamLimits

0xa712,	// (0x00015fd4) list_ai_message_pane_t4

0x0003,

0xf93f,	// (0x0001b201) list_ai_message_pane_t_ParamLimits

0xf93f,	// (0x0001b201) list_ai_message_pane_t

0xa6ac,	// (0x00015f6e) cell_ai_soft_ind_pane_ParamLimits

0xa6ac,	// (0x00015f6e) cell_ai_soft_ind_pane

0x861a,	// (0x00013edc) cell_ai_soft_ind_pane_g1_ParamLimits

0x861a,	// (0x00013edc) cell_ai_soft_ind_pane_g1

0x4091,	// (0x0000f953) grid_highlight_cp1

0x8627,	// (0x00013ee9) text_secondary_cp56_ParamLimits

0x8627,	// (0x00013ee9) text_secondary_cp56

0xa681,	// (0x00015f43) example_general_pane_ParamLimits

0xa681,	// (0x00015f43) example_general_pane

0xa68d,	// (0x00015f4f) example_parent_pane_g1_ParamLimits

0xa68d,	// (0x00015f4f) example_parent_pane_g1

0xa699,	// (0x00015f5b) example_parent_pane_t1_ParamLimits

0xa699,	// (0x00015f5b) example_parent_pane_t1

0x8c6c,	// (0x0001452e) popup_preview_text_window_ParamLimits

0x8c6c,	// (0x0001452e) popup_preview_text_window

0x8442,	// (0x00013d04) list_single_pane_cp2_g4

0x6bac,	// (0x0001246e) bg_popup_preview_window_pane_ParamLimits

0x6bac,	// (0x0001246e) bg_popup_preview_window_pane

0xa3b4,	// (0x00015c76) popup_preview_text_window_t1_ParamLimits

0xa3b4,	// (0x00015c76) popup_preview_text_window_t1

0xa3d2,	// (0x00015c94) popup_preview_text_window_t2_ParamLimits

0xa3d2,	// (0x00015c94) popup_preview_text_window_t2

0xa41b,	// (0x00015cdd) popup_preview_text_window_t3_ParamLimits

0xa41b,	// (0x00015cdd) popup_preview_text_window_t3

0xa460,	// (0x00015d22) popup_preview_text_window_t4_ParamLimits

0xa460,	// (0x00015d22) popup_preview_text_window_t4

0x0004,

0xf90e,	// (0x0001b1d0) popup_preview_text_window_t_ParamLimits

0xf90e,	// (0x0001b1d0) popup_preview_text_window_t

0xa4de,	// (0x00015da0) scroll_pane_cp11

0x9414,	// (0x00014cd6) bg_popup_preview_window_pane_g1

0xa368,	// (0x00015c2a) bg_popup_preview_window_pane_g2

0xa372,	// (0x00015c34) bg_popup_preview_window_pane_g3

0xa37c,	// (0x00015c3e) bg_popup_preview_window_pane_g4

0xa386,	// (0x00015c48) bg_popup_preview_window_pane_g5

0xa390,	// (0x00015c52) bg_popup_preview_window_pane_g6

0xa398,	// (0x00015c5a) bg_popup_preview_window_pane_g7

0xa3a0,	// (0x00015c62) bg_popup_preview_window_pane_g8

0x4b19,	// (0x000103db) aid_popup_width_pane

0x8c48,	// (0x0001450a) popup_midp_note_alarm_window_ParamLimits

0x8c48,	// (0x0001450a) popup_midp_note_alarm_window

0x766c,	// (0x00012f2e) data_form_pane_ParamLimits

0x7678,	// (0x00012f3a) form_field_data_pane_g1

0x7682,	// (0x00012f44) form_field_data_pane_t1_ParamLimits

0x769c,	// (0x00012f5e) input_focus_pane_ParamLimits

0x76aa,	// (0x00012f6c) data_form_wide_pane_ParamLimits

0x76b6,	// (0x00012f78) form_field_data_wide_pane_g1

0x76e2,	// (0x00012fa4) form_field_data_wide_pane_t1_ParamLimits

0x6e72,	// (0x00012734) input_focus_pane_cp6_ParamLimits

0x792b,	// (0x000131ed) input_popup_find_pane_g1_ParamLimits

0x792b,	// (0x000131ed) input_popup_find_pane_g1

0x509e,	// (0x00010960) aid_navi_side_left_pane

0x50b3,	// (0x00010975) aid_navi_side_right_pane

0x9d77,	// (0x00015639) bg_popup_window_pane_cp30_ParamLimits

0x9d77,	// (0x00015639) bg_popup_window_pane_cp30

0x9df1,	// (0x000156b3) popup_midp_note_alarm_window_g1_ParamLimits

0x9df1,	// (0x000156b3) popup_midp_note_alarm_window_g1

0x9e21,	// (0x000156e3) popup_midp_note_alarm_window_t1_ParamLimits

0x9e21,	// (0x000156e3) popup_midp_note_alarm_window_t1

0x9ec2,	// (0x00015784) popup_midp_note_alarm_window_t2_ParamLimits

0x9ec2,	// (0x00015784) popup_midp_note_alarm_window_t2

0x9f70,	// (0x00015832) popup_midp_note_alarm_window_t3_ParamLimits

0x9f70,	// (0x00015832) popup_midp_note_alarm_window_t3

0x9fa2,	// (0x00015864) popup_midp_note_alarm_window_t4_ParamLimits

0x9fa2,	// (0x00015864) popup_midp_note_alarm_window_t4

0x9fc8,	// (0x0001588a) popup_midp_note_alarm_window_t5_ParamLimits

0x9fc8,	// (0x0001588a) popup_midp_note_alarm_window_t5

0x000a,

0xf8ab,	// (0x0001b16d) popup_midp_note_alarm_window_t_ParamLimits

0xf8ab,	// (0x0001b16d) popup_midp_note_alarm_window_t

0xa074,	// (0x00015936) wait_bar_pane_cp1_ParamLimits

0xa074,	// (0x00015936) wait_bar_pane_cp1

0x4091,	// (0x0000f953) wait_anim_pane_copy1

0x4091,	// (0x0000f953) wait_border_pane_copy1

0x9a5c,	// (0x0001531e) wait_border_pane_g1_copy1

0x76fc,	// (0x00012fbe) form_field_popup_pane_g1

0x7704,	// (0x00012fc6) form_field_popup_pane_t1_ParamLimits

0x769c,	// (0x00012f5e) input_focus_pane_cp7_ParamLimits

0x771e,	// (0x00012fe0) list_form_pane_ParamLimits

0x772a,	// (0x00012fec) form_field_popup_wide_pane_g1

0x7732,	// (0x00012ff4) form_field_popup_wide_pane_t1_ParamLimits

0x769c,	// (0x00012f5e) input_focus_pane_cp8_ParamLimits

0x7747,	// (0x00013009) list_form_wide_pane_ParamLimits

0xac5c,	// (0x0001651e) aid_size_cell_graphic_pane

0x7820,	// (0x000130e2) data_form_pane_t1_ParamLimits

0xaa48,	// (0x0001630a) data_form_wide_pane_t1_ParamLimits

0x8f93,	// (0x00014855) bg_status_flat_pane

0x67c0,	// (0x00012082) title_pane_t1_ParamLimits

0x6828,	// (0x000120ea) title_pane_t2_ParamLimits

0x684e,	// (0x00012110) title_pane_t3_ParamLimits

0xf56f,	// (0x0001ae31) title_pane_t_ParamLimits

0x7e03,	// (0x000136c5) level_1_signal_ParamLimits

0x7e10,	// (0x000136d2) level_2_signal_ParamLimits

0x7e1d,	// (0x000136df) level_3_signal_ParamLimits

0x7e2a,	// (0x000136ec) level_4_signal_ParamLimits

0x7e37,	// (0x000136f9) level_5_signal_ParamLimits

0x7e44,	// (0x00013706) level_6_signal_ParamLimits

0x7e51,	// (0x00013713) level_7_signal_ParamLimits

0x7e03,	// (0x000136c5) level_1_battery_ParamLimits

0x7e10,	// (0x000136d2) level_2_battery_ParamLimits

0x7e1d,	// (0x000136df) level_3_battery_ParamLimits

0x7e2a,	// (0x000136ec) level_4_battery_ParamLimits

0x7e37,	// (0x000136f9) level_5_battery_ParamLimits

0x7e44,	// (0x00013706) level_6_battery_ParamLimits

0x7e51,	// (0x00013713) level_7_battery_ParamLimits

0x9c7c,	// (0x0001553e) bg_status_flat_pane_g1

0x9c84,	// (0x00015546) bg_status_flat_pane_g2

0x9c8c,	// (0x0001554e) bg_status_flat_pane_g3

0x9c94,	// (0x00015556) bg_status_flat_pane_g4

0x9c9c,	// (0x0001555e) bg_status_flat_pane_g5

0x9ca4,	// (0x00015566) bg_status_flat_pane_g6

0x9cac,	// (0x0001556e) bg_status_flat_pane_g7

0x6876,	// (0x00012138) tabs_3_active_pane_t1_ParamLimits

0x6876,	// (0x00012138) tabs_3_passive_pane_t1_ParamLimits

0x6890,	// (0x00012152) tabs_4_active_pane_t1_ParamLimits

0x6890,	// (0x00012152) tabs_4_1_passive_pane_t1_ParamLimits

0x79c2,	// (0x00013284) tabs_2_active_pane_t1_ParamLimits

0x79c2,	// (0x00013284) tabs_2_passive_pane_t1_ParamLimits

0x79d4,	// (0x00013296) bg_active_tab_pane_cp4_ParamLimits

0x79e2,	// (0x000132a4) tabs_2_long_active_pane_t1_ParamLimits

0x79f5,	// (0x000132b7) bg_passive_tab_pane_cp4_ParamLimits

0x5674,	// (0x00010f36) list_single_midp_graphic_pane_t1_ParamLimits

0x79d4,	// (0x00013296) bg_active_tab_pane_cp5_ParamLimits

0x7a01,	// (0x000132c3) tabs_3_long_active_pane_t1_ParamLimits

0x79f5,	// (0x000132b7) bg_passive_tab_pane_cp5_ParamLimits

0x5674,	// (0x00010f36) list_single_midp_graphic_pane_t1

0x8f93,	// (0x00014855) bg_status_flat_pane_ParamLimits

0x905e,	// (0x00014920) indicator_pane_cp2_ParamLimits

0x905e,	// (0x00014920) indicator_pane_cp2

0x91a1,	// (0x00014a63) navi_pane_srt_ParamLimits

0x91a1,	// (0x00014a63) navi_pane_srt

0x91c5,	// (0x00014a87) popup_clock_digital_analogue_window_cp1

0x695a,	// (0x0001221c) indicator_pane_t1

0x8513,	// (0x00013dd5) copy_highlight_pane

0x8513,	// (0x00013dd5) cursor_graphics_pane

0x8513,	// (0x00013dd5) graphic_within_text_pane

0x8513,	// (0x00013dd5) link_highlight_pane

0xa4a1,	// (0x00015d63) popup_preview_text_window_t5_ParamLimits

0xa4a1,	// (0x00015d63) popup_preview_text_window_t5

0x8643,	// (0x00013f05) cursor_digital_pane

0x8643,	// (0x00013f05) cursor_primary_pane

0x8654,	// (0x00013f16) cursor_primary_small_pane

0x865c,	// (0x00013f1e) cursor_secondary_pane

0x8664,	// (0x00013f26) cursor_title_pane

0x8643,	// (0x00013f05) link_highlight_digital_pane

0x864b,	// (0x00013f0d) link_highlight_primary_pane

0x8654,	// (0x00013f16) link_highlight_primary_small_pane

0x865c,	// (0x00013f1e) link_highlight_secondary_pane

0x8664,	// (0x00013f26) link_highlight_title_pane

0x8643,	// (0x00013f05) copy_highlight_digital_pane

0x8643,	// (0x00013f05) copy_highlight_primary_pane

0x8654,	// (0x00013f16) copy_highlight_primary_small_pane

0x865c,	// (0x00013f1e) copy_highlight_secondary_pane

0x8664,	// (0x00013f26) copy_highlight_title_pane

0x865c,	// (0x00013f1e) graphic_text_digital_pane

0x9d1a,	// (0x000155dc) graphic_text_primary_pane

0x9d23,	// (0x000155e5) graphic_text_primary_small_pane

0x8654,	// (0x00013f16) graphic_text_secondary_pane

0x8643,	// (0x00013f05) graphic_text_title_pane

0x866c,	// (0x00013f2e) cursor_primary_pane_g1

0x9d0c,	// (0x000155ce) cursor_text_primary_t1

0x9cf4,	// (0x000155b6) cursor_primary_small_pane_g1

0x9cfe,	// (0x000155c0) cursor_text_primary_small_t1

0x9cdc,	// (0x0001559e) cursor_primary_small_pane_g1_copy1

0x9ce6,	// (0x000155a8) cursor_text_primary_small_t1_copy1

0x9cc4,	// (0x00015586) cursor_text_title_t1

0x9cd2,	// (0x00015594) cursor_title_pane_g1

0x866c,	// (0x00013f2e) cursor_digital_pane_g1

0x8676,	// (0x00013f38) cursor_text_digital_t1

0x8684,	// (0x00013f46) link_highlight_primary_pane_g1

0x9c6d,	// (0x0001552f) link_highlight_primary_pane_t1

0x8684,	// (0x00013f46) link_highlight_primary_small_pane_g1

0x868c,	// (0x00013f4e) link_highlight_primary_small_pane_t1

0x869b,	// (0x00013f5d) link_highlight_secondary_pane_g1

0x86a3,	// (0x00013f65) link_highlight_secondary_pane_t1

0x9be1,	// (0x000154a3) link_highlight_title_pane_g1

0x9be9,	// (0x000154ab) link_highlight_title_pane_t1

0x9bca,	// (0x0001548c) link_highlight_digital_pane_g1

0x9bd2,	// (0x00015494) link_highlight_digital_pane_t1

0x9a92,	// (0x00015354) copy_highlight_primary_pane_g1

0x9aa9,	// (0x0001536b) copy_highlight_primary_pane_t1

0x9a92,	// (0x00015354) copy_highlight_primary_small_pane_g1

0x9a9a,	// (0x0001535c) copy_highlight_primary_small_pane_t1

0x86b2,	// (0x00013f74) copy_highlight_secondary_pane_g1

0x86ba,	// (0x00013f7c) copy_highlight_secondary_pane_t1

0x9a7b,	// (0x0001533d) copy_highlight_title_pane_g1

0x9a83,	// (0x00015345) copy_highlight_title_pane_t1

0x9a92,	// (0x00015354) copy_highlight_digital_pane_g1

0xae2c,	// (0x000166ee) copy_highlight_digital_pane_t1

0xad80,	// (0x00016642) graphic_text_primary_pane_g1

0xae10,	// (0x000166d2) graphic_text_primary_pane_t1

0xae1e,	// (0x000166e0) graphic_text_primary_pane_t2

0x0001,

0xf9da,	// (0x0001b29c) graphic_text_primary_pane_t

0xadec,	// (0x000166ae) graphic_text_primary_small_pane_g1

0xadf4,	// (0x000166b6) graphic_text_primary_small_pane_t1

0xae02,	// (0x000166c4) graphic_text_primary_small_pane_t2

0x0001,

0xf9d5,	// (0x0001b297) graphic_text_primary_small_pane_t

0xadc8,	// (0x0001668a) graphic_text_secondary_pane_g1

0xadd0,	// (0x00016692) graphic_text_secondary_pane_t1

0xadde,	// (0x000166a0) graphic_text_secondary_pane_t2

0x0001,

0xf9d0,	// (0x0001b292) graphic_text_secondary_pane_t

0xada4,	// (0x00016666) graphic_text_title_pane_g1

0xadac,	// (0x0001666e) graphic_text_title_pane_t1

0xadba,	// (0x0001667c) graphic_text_title_pane_t2

0x0001,

0xf9cb,	// (0x0001b28d) graphic_text_title_pane_t

0xad80,	// (0x00016642) graphic_text_digital_pane_g1

0xad88,	// (0x0001664a) graphic_text_digital_pane_t1

0xad96,	// (0x00016658) graphic_text_digital_pane_t2

0x0001,

0xf9c6,	// (0x0001b288) graphic_text_digital_pane_t

0x6860,	// (0x00012122) navi_icon_pane_srt_ParamLimits

0x6860,	// (0x00012122) navi_icon_pane_srt

0x4091,	// (0x0000f953) navi_midp_pane_srt

0x4091,	// (0x0000f953) navi_navi_pane_srt

0x6860,	// (0x00012122) navi_text_pane_srt_ParamLimits

0x6860,	// (0x00012122) navi_text_pane_srt

0xad4b,	// (0x0001660d) navi_navi_icon_text_pane_srt

0xad53,	// (0x00016615) navi_navi_pane_srt_g1_ParamLimits

0xad53,	// (0x00016615) navi_navi_pane_srt_g1

0xad65,	// (0x00016627) navi_navi_pane_srt_g2_ParamLimits

0xad65,	// (0x00016627) navi_navi_pane_srt_g2

0x0001,

0xf9c1,	// (0x0001b283) navi_navi_pane_srt_g_ParamLimits

0xf9c1,	// (0x0001b283) navi_navi_pane_srt_g

0xad77,	// (0x00016639) navi_navi_tabs_pane_srt

0xad4b,	// (0x0001660d) navi_navi_text_pane_srt

0xad4b,	// (0x0001660d) navi_navi_volume_pane_srt

0xad3c,	// (0x000165fe) navi_navi_text_pane_srt_t1

0x5a10,	// (0x000112d2) navi_navi_volume_pane_srt_g1

0x5a18,	// (0x000112da) volume_small_pane_srt_ParamLimits

0x5a18,	// (0x000112da) volume_small_pane_srt

0x5385,	// (0x00010c47) volume_small_pane_srt_g1_ParamLimits

0x5385,	// (0x00010c47) volume_small_pane_srt_g1

0x5395,	// (0x00010c57) volume_small_pane_srt_g2_ParamLimits

0x5395,	// (0x00010c57) volume_small_pane_srt_g2

0x53a6,	// (0x00010c68) volume_small_pane_srt_g3_ParamLimits

0x53a6,	// (0x00010c68) volume_small_pane_srt_g3

0x53b7,	// (0x00010c79) volume_small_pane_srt_g4_ParamLimits

0x53b7,	// (0x00010c79) volume_small_pane_srt_g4

0x53c8,	// (0x00010c8a) volume_small_pane_srt_g5_ParamLimits

0x53c8,	// (0x00010c8a) volume_small_pane_srt_g5

0x53d9,	// (0x00010c9b) volume_small_pane_srt_g6_ParamLimits

0x53d9,	// (0x00010c9b) volume_small_pane_srt_g6

0x53ea,	// (0x00010cac) volume_small_pane_srt_g7_ParamLimits

0x53ea,	// (0x00010cac) volume_small_pane_srt_g7

0x53fb,	// (0x00010cbd) volume_small_pane_srt_g8_ParamLimits

0x53fb,	// (0x00010cbd) volume_small_pane_srt_g8

0x540c,	// (0x00010cce) volume_small_pane_srt_g9_ParamLimits

0x540c,	// (0x00010cce) volume_small_pane_srt_g9

0x541d,	// (0x00010cdf) volume_small_pane_srt_g10_ParamLimits

0x541d,	// (0x00010cdf) volume_small_pane_srt_g10

0x0009,

0xf770,	// (0x0001b032) volume_small_pane_srt_g_ParamLimits

0xf770,	// (0x0001b032) volume_small_pane_srt_g

0x6c61,	// (0x00012523) query_popup_data_pane_cp2

0xad22,	// (0x000165e4) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xad22,	// (0x000165e4) navi_navi_icon_text_pane_srt_t1

0x9d1a,	// (0x000155dc) navi_tabs_2_long_pane_srt

0x9d1a,	// (0x000155dc) navi_tabs_2_pane_srt

0x9d1a,	// (0x000155dc) navi_tabs_3_long_pane_srt

0x9d1a,	// (0x000155dc) navi_tabs_3_pane_srt

0x9d1a,	// (0x000155dc) navi_tabs_4_pane_srt

0x59f0,	// (0x000112b2) tabs_2_active_pane_srt_ParamLimits

0x59f0,	// (0x000112b2) tabs_2_active_pane_srt

0x5a00,	// (0x000112c2) tabs_2_passive_pane_srt_ParamLimits

0x5a00,	// (0x000112c2) tabs_2_passive_pane_srt

0x88a1,	// (0x00014163) bg_passive_tab_pane_cp1_srt_ParamLimits

0x88a1,	// (0x00014163) bg_passive_tab_pane_cp1_srt

0xacee,	// (0x000165b0) bg_passive_tab_pane_g1_cp1_srt

0x815c,	// (0x00013a1e) bg_passive_tab_pane_g2_cp1_srt

0xacf7,	// (0x000165b9) bg_passive_tab_pane_g3_cp1_srt

0x6860,	// (0x00012122) bg_active_tab_pane_cp1_srt_ParamLimits

0x6860,	// (0x00012122) bg_active_tab_pane_cp1_srt

0xad00,	// (0x000165c2) tabs_2_active_pane_srt_g1

0xad08,	// (0x000165ca) tabs_2_active_pane_srt_t1_ParamLimits

0xad08,	// (0x000165ca) tabs_2_active_pane_srt_t1

0xacee,	// (0x000165b0) bg_active_tab_pane_g1_cp1_srt

0x815c,	// (0x00013a1e) bg_active_tab_pane_g2_cp1_srt

0xacf7,	// (0x000165b9) bg_active_tab_pane_g3_cp1_srt

0x59bd,	// (0x0001127f) tabs_3_active_pane_srt_ParamLimits

0x59bd,	// (0x0001127f) tabs_3_active_pane_srt

0x59ce,	// (0x00011290) tabs_3_passive_pane_cp_srt_ParamLimits

0x59ce,	// (0x00011290) tabs_3_passive_pane_cp_srt

0x59df,	// (0x000112a1) tabs_3_passive_pane_srt_ParamLimits

0x59df,	// (0x000112a1) tabs_3_passive_pane_srt

0x88a1,	// (0x00014163) bg_passive_tab_pane_cp2_srt_ParamLimits

0x88a1,	// (0x00014163) bg_passive_tab_pane_cp2_srt

0x86c9,	// (0x00013f8b) bg_passive_tab_pane_g1_cp2_srt

0x815c,	// (0x00013a1e) bg_passive_tab_pane_g2_cp2_srt

0x86d2,	// (0x00013f94) bg_passive_tab_pane_g3_cp2_srt

0x6860,	// (0x00012122) bg_active_tab_pane_cp2_srt_ParamLimits

0x6860,	// (0x00012122) bg_active_tab_pane_cp2_srt

0xacd4,	// (0x00016596) tabs_3_active_pane_srt_g1

0xacdc,	// (0x0001659e) tabs_3_active_pane_srt_t1_ParamLimits

0xacdc,	// (0x0001659e) tabs_3_active_pane_srt_t1

0x86c9,	// (0x00013f8b) bg_active_tab_pane_g1_cp2_srt

0x815c,	// (0x00013a1e) bg_active_tab_pane_g2_cp2_srt

0x86d2,	// (0x00013f94) bg_active_tab_pane_g3_cp2_srt

0x5975,	// (0x00011237) tabs_4_active_pane_srt_ParamLimits

0x5975,	// (0x00011237) tabs_4_active_pane_srt

0x5987,	// (0x00011249) tabs_4_passive_pane_cp2_srt_ParamLimits

0x5987,	// (0x00011249) tabs_4_passive_pane_cp2_srt

0x8827,	// (0x000140e9) aid_size_cell_toolbar

0x79f5,	// (0x000132b7) main_idle_act_pane_ParamLimits

0x8a6e,	// (0x00014330) popup_large_graphic_colour_window_ParamLimits

0x8e15,	// (0x000146d7) popup_toolbar_window_ParamLimits

0x8e15,	// (0x000146d7) popup_toolbar_window

0xaac2,	// (0x00016384) list_single_graphic_2heading_pane_ParamLimits

0xaac2,	// (0x00016384) list_single_graphic_2heading_pane

0x7bb1,	// (0x00013473) aid_size_cell_apps_grid_lsc_pane

0x7bc3,	// (0x00013485) aid_size_cell_apps_grid_prt_pane

0x88a1,	// (0x00014163) bg_wml_button_pane_cp1_ParamLimits

0x88a1,	// (0x00014163) bg_wml_button_pane_cp1

0x970c,	// (0x00014fce) form_midp_field_text_pane_t1_ParamLimits

0x9530,	// (0x00014df2) input_focus_pane_cp050_ParamLimits

0x972a,	// (0x00014fec) list_midp_form_text_pane_ParamLimits

0x96e9,	// (0x00014fab) input_focus_pane_cp051_ParamLimits

0x96fd,	// (0x00014fbf) list_midp_choice_pane_ParamLimits

0x95c1,	// (0x00014e83) list_single_2graphic_pane_cp3_ParamLimits

0x95c1,	// (0x00014e83) list_single_2graphic_pane_cp3

0x95d1,	// (0x00014e93) list_single_midp_graphic_pane_ParamLimits

0x95d1,	// (0x00014e93) list_single_midp_graphic_pane

0x5578,	// (0x00010e3a) list_single_graphic_2heading_pane_g1_ParamLimits

0x5578,	// (0x00010e3a) list_single_graphic_2heading_pane_g1

0x5584,	// (0x00010e46) list_single_graphic_2heading_pane_g4_ParamLimits

0x5584,	// (0x00010e46) list_single_graphic_2heading_pane_g4

0x5590,	// (0x00010e52) list_single_graphic_2heading_pane_g5_ParamLimits

0x5590,	// (0x00010e52) list_single_graphic_2heading_pane_g5

0x0002,

0xf7c3,	// (0x0001b085) list_single_graphic_2heading_pane_g_ParamLimits

0xf7c3,	// (0x0001b085) list_single_graphic_2heading_pane_g

0x559c,	// (0x00010e5e) list_single_graphic_2heading_pane_t1_ParamLimits

0x559c,	// (0x00010e5e) list_single_graphic_2heading_pane_t1

0x55b0,	// (0x00010e72) list_single_graphic_2heading_pane_t2_ParamLimits

0x55b0,	// (0x00010e72) list_single_graphic_2heading_pane_t2

0x55cc,	// (0x00010e8e) list_single_graphic_2heading_pane_t3_ParamLimits

0x55cc,	// (0x00010e8e) list_single_graphic_2heading_pane_t3

0x0002,

0xf7ca,	// (0x0001b08c) list_single_graphic_2heading_pane_t_ParamLimits

0xf7ca,	// (0x0001b08c) list_single_graphic_2heading_pane_t

0x9324,	// (0x00014be6) bg_popup_sub_pane_cp2

0x934e,	// (0x00014c10) grid_toobar_pane

0x55e4,	// (0x00010ea6) cell_toolbar_pane_ParamLimits

0x55e4,	// (0x00010ea6) cell_toolbar_pane

0x93b8,	// (0x00014c7a) cell_toolbar_pane_g1_ParamLimits

0x93b8,	// (0x00014c7a) cell_toolbar_pane_g1

0x93cc,	// (0x00014c8e) cell_toolbar_pane_g2_ParamLimits

0x93cc,	// (0x00014c8e) cell_toolbar_pane_g2

0x0001,

0xf7d8,	// (0x0001b09a) cell_toolbar_pane_g_ParamLimits

0xf7d8,	// (0x0001b09a) cell_toolbar_pane_g

0x93ee,	// (0x00014cb0) grid_highlight_pane_cp2_ParamLimits

0x93ee,	// (0x00014cb0) grid_highlight_pane_cp2

0x9408,	// (0x00014cca) toolbar_button_pane

0x9414,	// (0x00014cd6) toolbar_button_pane_g1

0x941c,	// (0x00014cde) toolbar_button_pane_g2

0x9424,	// (0x00014ce6) toolbar_button_pane_g3

0x942c,	// (0x00014cee) toolbar_button_pane_g4

0x9434,	// (0x00014cf6) toolbar_button_pane_g5

0x943c,	// (0x00014cfe) toolbar_button_pane_g6

0x9444,	// (0x00014d06) toolbar_button_pane_g7

0x944c,	// (0x00014d0e) toolbar_button_pane_g8

0x9454,	// (0x00014d16) toolbar_button_pane_g9

0x0009,

0xf7dd,	// (0x0001b09f) toolbar_button_pane_g

0x561c,	// (0x00010ede) list_single_2graphic_pane_g1_cp3_ParamLimits

0x561c,	// (0x00010ede) list_single_2graphic_pane_g1_cp3

0x5628,	// (0x00010eea) list_single_2graphic_pane_g2_cp3_ParamLimits

0x5628,	// (0x00010eea) list_single_2graphic_pane_g2_cp3

0x5639,	// (0x00010efb) list_single_2graphic_pane_g3_cp3

0x5641,	// (0x00010f03) list_single_2graphic_pane_g4_cp3_ParamLimits

0x5641,	// (0x00010f03) list_single_2graphic_pane_g4_cp3

0x564d,	// (0x00010f0f) list_single_2graphic_pane_t1_cp3_ParamLimits

0x564d,	// (0x00010f0f) list_single_2graphic_pane_t1_cp3

0x5668,	// (0x00010f2a) list_single_midp_graphic_pane_g2_ParamLimits

0x5668,	// (0x00010f2a) list_single_midp_graphic_pane_g2

0x882f,	// (0x000140f1) aid_zoom_text_primary

0x8837,	// (0x000140f9) aid_zoom_text_secondary

0x8786,	// (0x00014048) status_small_pane_g7_ParamLimits

0x8786,	// (0x00014048) status_small_pane_g7

0x87a9,	// (0x0001406b) status_small_pane_t1_ParamLimits

0x67a3,	// (0x00012065) title_pane_g2

0x0003,

0xf566,	// (0x0001ae28) title_pane_g

0x6d0a,	// (0x000125cc) aid_size_cell_colour_1_pane_ParamLimits

0x6d0a,	// (0x000125cc) aid_size_cell_colour_1_pane

0x6d1e,	// (0x000125e0) aid_size_cell_colour_2_pane_ParamLimits

0x6d1e,	// (0x000125e0) aid_size_cell_colour_2_pane

0x6d32,	// (0x000125f4) aid_size_cell_colour_3_pane_ParamLimits

0x6d32,	// (0x000125f4) aid_size_cell_colour_3_pane

0x6d46,	// (0x00012608) aid_size_cell_colour_4_pane_ParamLimits

0x6d46,	// (0x00012608) aid_size_cell_colour_4_pane

0x4fda,	// (0x0001089c) title_pane_stacon_g1_ParamLimits

0x4fda,	// (0x0001089c) title_pane_stacon_g1

0x9b00,	// (0x000153c2) popup_note_wait_window_g3_ParamLimits

0x9b00,	// (0x000153c2) popup_note_wait_window_g3

0x9b77,	// (0x00015439) popup_note_wait_window_t5_ParamLimits

0x9b77,	// (0x00015439) popup_note_wait_window_t5

0x4091,	// (0x0000f953) main_feb_china_hwr_fs_writing_pane

0x8935,	// (0x000141f7) popup_feb_china_hwr_fs_window_ParamLimits

0x8935,	// (0x000141f7) popup_feb_china_hwr_fs_window

0x568a,	// (0x00010f4c) aid_size_cell_hwr_fs_ParamLimits

0x568a,	// (0x00010f4c) aid_size_cell_hwr_fs

0x9530,	// (0x00014df2) bg_popup_sub_pane_cp3_ParamLimits

0x9530,	// (0x00014df2) bg_popup_sub_pane_cp3

0x569f,	// (0x00010f61) grid_hwr_fs_pane_ParamLimits

0x569f,	// (0x00010f61) grid_hwr_fs_pane

0x56b7,	// (0x00010f79) linegrid_hwr_fs_pane_ParamLimits

0x56b7,	// (0x00010f79) linegrid_hwr_fs_pane

0x56c7,	// (0x00010f89) cell_hwr_fs_pane_ParamLimits

0x56c7,	// (0x00010f89) cell_hwr_fs_pane

0x953c,	// (0x00014dfe) linegrid_hwr_fs_pane_g1_ParamLimits

0x953c,	// (0x00014dfe) linegrid_hwr_fs_pane_g1

0x9548,	// (0x00014e0a) linegrid_hwr_fs_pane_g2_ParamLimits

0x9548,	// (0x00014e0a) linegrid_hwr_fs_pane_g2

0x955a,	// (0x00014e1c) linegrid_hwr_fs_pane_g3_ParamLimits

0x955a,	// (0x00014e1c) linegrid_hwr_fs_pane_g3

0x56eb,	// (0x00010fad) linegrid_hwr_fs_pane_g4_ParamLimits

0x56eb,	// (0x00010fad) linegrid_hwr_fs_pane_g4

0x5709,	// (0x00010fcb) linegrid_hwr_fs_pane_g5_ParamLimits

0x5709,	// (0x00010fcb) linegrid_hwr_fs_pane_g5

0x0004,

0xf808,	// (0x0001b0ca) linegrid_hwr_fs_pane_g_ParamLimits

0xf808,	// (0x0001b0ca) linegrid_hwr_fs_pane_g

0x9566,	// (0x00014e28) cell_hwr_fs_pane_g1_ParamLimits

0x9566,	// (0x00014e28) cell_hwr_fs_pane_g1

0x925b,	// (0x00014b1d) cell_hwr_fs_pane_g2_ParamLimits

0x925b,	// (0x00014b1d) cell_hwr_fs_pane_g2

0x957c,	// (0x00014e3e) cell_hwr_fs_pane_g3_ParamLimits

0x957c,	// (0x00014e3e) cell_hwr_fs_pane_g3

0x9589,	// (0x00014e4b) cell_hwr_fs_pane_g4_ParamLimits

0x9589,	// (0x00014e4b) cell_hwr_fs_pane_g4

0x0003,

0xf813,	// (0x0001b0d5) cell_hwr_fs_pane_g_ParamLimits

0xf813,	// (0x0001b0d5) cell_hwr_fs_pane_g

0x571f,	// (0x00010fe1) cell_hwr_fs_pane_t1

0x4091,	// (0x0000f953) grid_highlight_pane_cp6

0x4091,	// (0x0000f953) main_idle_act2_pane

0x7967,	// (0x00013229) aid_inside_area_popup_secondary

0xa1b0,	// (0x00015a72) aid_inside_area_window_primary_ParamLimits

0xa1b0,	// (0x00015a72) aid_inside_area_window_primary

0xae3b,	// (0x000166fd) ai2_news_ticker_pane

0xae43,	// (0x00016705) aid_size_cell_ai1_link_ParamLimits

0xae43,	// (0x00016705) aid_size_cell_ai1_link

0xae5d,	// (0x0001671f) popup_ai2_data_window_ParamLimits

0xae5d,	// (0x0001671f) popup_ai2_data_window

0xae7b,	// (0x0001673d) popup_ai2_link_window_ParamLimits

0xae7b,	// (0x0001673d) popup_ai2_link_window

0x9530,	// (0x00014df2) bg_popup_sub_pane_cp4_ParamLimits

0x9530,	// (0x00014df2) bg_popup_sub_pane_cp4

0xae91,	// (0x00016753) grid_ai2_link_pane_ParamLimits

0xae91,	// (0x00016753) grid_ai2_link_pane

0xaea8,	// (0x0001676a) popup_ai2_link_window_g1_ParamLimits

0xaea8,	// (0x0001676a) popup_ai2_link_window_g1

0xaeb4,	// (0x00016776) popup_ai2_link_window_g2_ParamLimits

0xaeb4,	// (0x00016776) popup_ai2_link_window_g2

0x0001,

0xf9df,	// (0x0001b2a1) popup_ai2_link_window_g_ParamLimits

0xf9df,	// (0x0001b2a1) popup_ai2_link_window_g

0xaec5,	// (0x00016787) ai2_mp_button_pane

0xaecd,	// (0x0001678f) ai2_mp_volume_pane

0x96e9,	// (0x00014fab) bg_popup_sub_pane_cp5_ParamLimits

0x96e9,	// (0x00014fab) bg_popup_sub_pane_cp5

0xaed5,	// (0x00016797) heading_ai2_gene_pane_ParamLimits

0xaed5,	// (0x00016797) heading_ai2_gene_pane

0xaee1,	// (0x000167a3) list_ai2_gene_pane_ParamLimits

0xaee1,	// (0x000167a3) list_ai2_gene_pane

0xaf29,	// (0x000167eb) cell_ai2_link_pane_ParamLimits

0xaf29,	// (0x000167eb) cell_ai2_link_pane

0xaf3f,	// (0x00016801) cell_ai2_link_pane_g1

0x4091,	// (0x0000f953) grid_highlight_pane_cp7

0x5a2d,	// (0x000112ef) ai2_mp_volume_pane_g1

0xb012,	// (0x000168d4) ai2_mp_volume_pane_g2

0xaf87,	// (0x00016849) list_ai2_gene_pane_t1

0xb01a,	// (0x000168dc) ai2_mp_volume_pane_g3

0x0002,

0xf9f8,	// (0x0001b2ba) ai2_mp_volume_pane_g

0x5a35,	// (0x000112f7) volume_small_pane_cp3

0xb022,	// (0x000168e4) aid_size_cell_ai2_button

0xb02a,	// (0x000168ec) grid_ai2_button_pane

0xb033,	// (0x000168f5) cell_ai2_button_pane_ParamLimits

0xb033,	// (0x000168f5) cell_ai2_button_pane

0x3f18,	// (0x0000f7da) cell_ai2_button_pane_g1

0x4091,	// (0x0000f953) grid_highlight_pane_cp8

0xafd2,	// (0x00016894) ai2_gene_pane_t1_ParamLimits

0xafd2,	// (0x00016894) ai2_gene_pane_t1

0x881d,	// (0x000140df) aid_height_parent_landscape

0xa884,	// (0x00016146) aid_height_set_list

0xa895,	// (0x00016157) aid_size_parent

0xac5c,	// (0x0001651e) aid_size_cell_graphic_pane_ParamLimits

0xaef1,	// (0x000167b3) popup_ai2_data_window_g1_ParamLimits

0xaef1,	// (0x000167b3) popup_ai2_data_window_g1

0xaefd,	// (0x000167bf) ai2_news_ticker_pane_g1

0xaf05,	// (0x000167c7) ai2_news_ticker_pane_g2

0x0001,

0xf9e4,	// (0x0001b2a6) ai2_news_ticker_pane_g

0xaf0d,	// (0x000167cf) ai2_news_ticker_pane_t1

0xaf1b,	// (0x000167dd) ai2_news_ticker_pane_t2

0x0001,

0xf9e9,	// (0x0001b2ab) ai2_news_ticker_pane_t

0xaf48,	// (0x0001680a) heading_ai2_gene_pane_g1

0xaf50,	// (0x00016812) heading_ai2_gene_pane_t1_ParamLimits

0xaf50,	// (0x00016812) heading_ai2_gene_pane_t1

0xaf65,	// (0x00016827) list_highlight_pane_cp6

0xaf6d,	// (0x0001682f) ai2_gene_pane_ParamLimits

0xaf6d,	// (0x0001682f) ai2_gene_pane

0xaf95,	// (0x00016857) list_ai2_gene_pane_t2

0x0001,

0xf9ee,	// (0x0001b2b0) list_ai2_gene_pane_t

0xafa3,	// (0x00016865) list_highlight_pane_cp8_ParamLimits

0xafa3,	// (0x00016865) list_highlight_pane_cp8

0xafb4,	// (0x00016876) ai2_gene_pane_g1_ParamLimits

0xafb4,	// (0x00016876) ai2_gene_pane_g1

0xafc6,	// (0x00016888) ai2_gene_pane_g2_ParamLimits

0xafc6,	// (0x00016888) ai2_gene_pane_g2

0x0001,

0xf9f3,	// (0x0001b2b5) ai2_gene_pane_g_ParamLimits

0xf9f3,	// (0x0001b2b5) ai2_gene_pane_g

0x7097,	// (0x00012959) scroll_pane_cp12

0x5537,	// (0x00010df9) control_pane_t3_ParamLimits

0x5537,	// (0x00010df9) control_pane_t3

0x879a,	// (0x0001405c) status_small_pane_g8_ParamLimits

0x879a,	// (0x0001405c) status_small_pane_g8

0x8a33,	// (0x000142f5) popup_find_window_ParamLimits

0x8c5e,	// (0x00014520) popup_note_image_window_ParamLimits

0x938a,	// (0x00014c4c) list_double2_graphic_pane_vc_g1_ParamLimits

0x938a,	// (0x00014c4c) list_double2_graphic_pane_vc_g1

0x8484,	// (0x00013d46) list_double2_graphic_pane_vc_g2_ParamLimits

0x8484,	// (0x00013d46) list_double2_graphic_pane_vc_g2

0x9396,	// (0x00014c58) list_double2_graphic_pane_vc_g3_ParamLimits

0x9396,	// (0x00014c58) list_double2_graphic_pane_vc_g3

0x0002,

0xf7d1,	// (0x0001b093) list_double2_graphic_pane_vc_g_ParamLimits

0xf7d1,	// (0x0001b093) list_double2_graphic_pane_vc_g

0x93a2,	// (0x00014c64) list_double2_graphic_pane_vc_t1_ParamLimits

0x93a2,	// (0x00014c64) list_double2_graphic_pane_vc_t1

0x8484,	// (0x00013d46) list_single_heading_pane_vc_g1_ParamLimits

0x8484,	// (0x00013d46) list_single_heading_pane_vc_g1

0x9396,	// (0x00014c58) list_single_heading_pane_vc_g2_ParamLimits

0x9396,	// (0x00014c58) list_single_heading_pane_vc_g2

0x0001,

0xf7f2,	// (0x0001b0b4) list_single_heading_pane_vc_g_ParamLimits

0xf7f2,	// (0x0001b0b4) list_single_heading_pane_vc_g

0x945c,	// (0x00014d1e) list_single_heading_pane_vc_t1_ParamLimits

0x945c,	// (0x00014d1e) list_single_heading_pane_vc_t1

0x9474,	// (0x00014d36) list_single_heading_pane_vc_t2_ParamLimits

0x9474,	// (0x00014d36) list_single_heading_pane_vc_t2

0x0001,

0xf7f7,	// (0x0001b0b9) list_single_heading_pane_vc_t_ParamLimits

0xf7f7,	// (0x0001b0b9) list_single_heading_pane_vc_t

0x9486,	// (0x00014d48) list_setting_number_pane_vc_g1_ParamLimits

0x9486,	// (0x00014d48) list_setting_number_pane_vc_g1

0x9492,	// (0x00014d54) list_setting_number_pane_vc_g2_ParamLimits

0x9492,	// (0x00014d54) list_setting_number_pane_vc_g2

0x0001,

0xf7fc,	// (0x0001b0be) list_setting_number_pane_vc_g_ParamLimits

0xf7fc,	// (0x0001b0be) list_setting_number_pane_vc_g

0x949e,	// (0x00014d60) list_setting_number_pane_vc_t1_ParamLimits

0x949e,	// (0x00014d60) list_setting_number_pane_vc_t1

0x94b2,	// (0x00014d74) list_setting_number_pane_vc_t2_ParamLimits

0x94b2,	// (0x00014d74) list_setting_number_pane_vc_t2

0x94ce,	// (0x00014d90) list_setting_number_pane_vc_t3_ParamLimits

0x94ce,	// (0x00014d90) list_setting_number_pane_vc_t3

0x0002,

0xf801,	// (0x0001b0c3) list_setting_number_pane_vc_t_ParamLimits

0xf801,	// (0x0001b0c3) list_setting_number_pane_vc_t

0x94f6,	// (0x00014db8) set_value_pane_vc_ParamLimits

0x94f6,	// (0x00014db8) set_value_pane_vc

0xaac2,	// (0x00016384) list_double2_graphic_pane_vc_ParamLimits

0xaac2,	// (0x00016384) list_double2_graphic_pane_vc

0xaac2,	// (0x00016384) list_double2_large_graphic_pane_vc_ParamLimits

0xaac2,	// (0x00016384) list_double2_large_graphic_pane_vc

0xaac2,	// (0x00016384) list_double2_pane_vc_ParamLimits

0xaac2,	// (0x00016384) list_double2_pane_vc

0xaac2,	// (0x00016384) list_double_graphic_heading_pane_vc_ParamLimits

0xaac2,	// (0x00016384) list_double_graphic_heading_pane_vc

0xaac2,	// (0x00016384) list_double_graphic_pane_vc_ParamLimits

0xaac2,	// (0x00016384) list_double_graphic_pane_vc

0xaac2,	// (0x00016384) list_double_heading_pane_vc_ParamLimits

0xaac2,	// (0x00016384) list_double_heading_pane_vc

0xaac2,	// (0x00016384) list_double_large_graphic_pane_vc_ParamLimits

0xaac2,	// (0x00016384) list_double_large_graphic_pane_vc

0xaac2,	// (0x00016384) list_double_number_pane_vc_ParamLimits

0xaac2,	// (0x00016384) list_double_number_pane_vc

0xaac2,	// (0x00016384) list_double_pane_vc_ParamLimits

0xaac2,	// (0x00016384) list_double_pane_vc

0xaac2,	// (0x00016384) list_double_time_pane_vc_ParamLimits

0xaac2,	// (0x00016384) list_double_time_pane_vc

0xaac2,	// (0x00016384) list_setting_number_pane_vc_ParamLimits

0xaac2,	// (0x00016384) list_setting_number_pane_vc

0xaac2,	// (0x00016384) list_setting_pane_vc_ParamLimits

0xaac2,	// (0x00016384) list_setting_pane_vc

0xaac2,	// (0x00016384) list_single_graphic_heading_pane_vc_ParamLimits

0xaac2,	// (0x00016384) list_single_graphic_heading_pane_vc

0xaac2,	// (0x00016384) list_single_heading_pane_vc_ParamLimits

0xaac2,	// (0x00016384) list_single_heading_pane_vc

0xaad6,	// (0x00016398) list_single_number_heading_pane_vc_ParamLimits

0xaad6,	// (0x00016398) list_single_number_heading_pane_vc

0x938a,	// (0x00014c4c) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x938a,	// (0x00014c4c) list_double_graphic_heading_pane_vc_g1

0xb066,	// (0x00016928) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xb066,	// (0x00016928) list_double_graphic_heading_pane_vc_g2

0xb072,	// (0x00016934) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xb072,	// (0x00016934) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ff,	// (0x0001b2c1) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ff,	// (0x0001b2c1) list_double_graphic_heading_pane_vc_g

0xb07e,	// (0x00016940) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xb07e,	// (0x00016940) list_double_graphic_heading_pane_vc_t1

0x945c,	// (0x00014d1e) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x945c,	// (0x00014d1e) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa06,	// (0x0001b2c8) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa06,	// (0x0001b2c8) list_double_graphic_heading_pane_vc_t

0x9486,	// (0x00014d48) list_setting_pane_vc_g1_ParamLimits

0x9486,	// (0x00014d48) list_setting_pane_vc_g1

0x9492,	// (0x00014d54) list_setting_pane_vc_g2_ParamLimits

0x9492,	// (0x00014d54) list_setting_pane_vc_g2

0x0001,

0xf7fc,	// (0x0001b0be) list_setting_pane_vc_g_ParamLimits

0xf7fc,	// (0x0001b0be) list_setting_pane_vc_g

0xb299,	// (0x00016b5b) list_setting_pane_vc_t1_ParamLimits

0xb299,	// (0x00016b5b) list_setting_pane_vc_t1

0xb2ad,	// (0x00016b6f) list_setting_pane_vc_t2_ParamLimits

0xb2ad,	// (0x00016b6f) list_setting_pane_vc_t2

0x0001,

0xfa34,	// (0x0001b2f6) list_setting_pane_vc_t_ParamLimits

0xfa34,	// (0x0001b2f6) list_setting_pane_vc_t

0x94f6,	// (0x00014db8) set_value_pane_cp_vc_ParamLimits

0x94f6,	// (0x00014db8) set_value_pane_cp_vc

0x8484,	// (0x00013d46) list_single_number_heading_pane_vc_g1_ParamLimits

0x8484,	// (0x00013d46) list_single_number_heading_pane_vc_g1

0x9396,	// (0x00014c58) list_single_number_heading_pane_vc_g2_ParamLimits

0x9396,	// (0x00014c58) list_single_number_heading_pane_vc_g2

0x0001,

0xf7f2,	// (0x0001b0b4) list_single_number_heading_pane_vc_g_ParamLimits

0xf7f2,	// (0x0001b0b4) list_single_number_heading_pane_vc_g

0x945c,	// (0x00014d1e) list_single_number_heading_pane_vc_t1_ParamLimits

0x945c,	// (0x00014d1e) list_single_number_heading_pane_vc_t1

0xb2cf,	// (0x00016b91) list_single_number_heading_pane_vc_t2_ParamLimits

0xb2cf,	// (0x00016b91) list_single_number_heading_pane_vc_t2

0xb2e1,	// (0x00016ba3) list_single_number_heading_pane_vc_t3_ParamLimits

0xb2e1,	// (0x00016ba3) list_single_number_heading_pane_vc_t3

0x0002,

0xfa39,	// (0x0001b2fb) list_single_number_heading_pane_vc_t_ParamLimits

0xfa39,	// (0x0001b2fb) list_single_number_heading_pane_vc_t

0x938a,	// (0x00014c4c) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x938a,	// (0x00014c4c) list_single_graphic_heading_pane_vc_g1

0x8484,	// (0x00013d46) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x8484,	// (0x00013d46) list_single_graphic_heading_pane_vc_g4

0x9396,	// (0x00014c58) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x9396,	// (0x00014c58) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7d1,	// (0x0001b093) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7d1,	// (0x0001b093) list_single_graphic_heading_pane_vc_g

0x945c,	// (0x00014d1e) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x945c,	// (0x00014d1e) list_single_graphic_heading_pane_vc_t1

0xb2f3,	// (0x00016bb5) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xb2f3,	// (0x00016bb5) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa40,	// (0x0001b302) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa40,	// (0x0001b302) list_single_graphic_heading_pane_vc_t

0x8484,	// (0x00013d46) list_double2_pane_vc_g1_ParamLimits

0x8484,	// (0x00013d46) list_double2_pane_vc_g1

0x9396,	// (0x00014c58) list_double2_pane_vc_g2_ParamLimits

0x9396,	// (0x00014c58) list_double2_pane_vc_g2

0x0001,

0xf7f2,	// (0x0001b0b4) list_double2_pane_vc_g_ParamLimits

0xf7f2,	// (0x0001b0b4) list_double2_pane_vc_g

0xb305,	// (0x00016bc7) list_double2_pane_vc_t1_ParamLimits

0xb305,	// (0x00016bc7) list_double2_pane_vc_t1

0xb31b,	// (0x00016bdd) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xb31b,	// (0x00016bdd) list_double2_large_graphic_pane_vc_g1

0x8484,	// (0x00013d46) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x8484,	// (0x00013d46) list_double2_large_graphic_pane_vc_g2

0x9396,	// (0x00014c58) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x9396,	// (0x00014c58) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa45,	// (0x0001b307) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa45,	// (0x0001b307) list_double2_large_graphic_pane_vc_g

0xb327,	// (0x00016be9) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xb327,	// (0x00016be9) list_double2_large_graphic_pane_vc_t1

0xb33d,	// (0x00016bff) list_double_time_pane_vc_g1_ParamLimits

0xb33d,	// (0x00016bff) list_double_time_pane_vc_g1

0xb349,	// (0x00016c0b) list_double_time_pane_vc_g2_ParamLimits

0xb349,	// (0x00016c0b) list_double_time_pane_vc_g2

0x0001,

0xfa4c,	// (0x0001b30e) list_double_time_pane_vc_g_ParamLimits

0xfa4c,	// (0x0001b30e) list_double_time_pane_vc_g

0xb355,	// (0x00016c17) list_double_time_pane_vc_t1_ParamLimits

0xb355,	// (0x00016c17) list_double_time_pane_vc_t1

0xb370,	// (0x00016c32) list_double_time_pane_vc_t2_ParamLimits

0xb370,	// (0x00016c32) list_double_time_pane_vc_t2

0xb38e,	// (0x00016c50) list_double_time_pane_vc_t3_ParamLimits

0xb38e,	// (0x00016c50) list_double_time_pane_vc_t3

0xb3a6,	// (0x00016c68) list_double_time_pane_vc_t4_ParamLimits

0xb3a6,	// (0x00016c68) list_double_time_pane_vc_t4

0x0003,

0xfa51,	// (0x0001b313) list_double_time_pane_vc_t_ParamLimits

0xfa51,	// (0x0001b313) list_double_time_pane_vc_t

0x8484,	// (0x00013d46) list_double_pane_vc_g1_ParamLimits

0x8484,	// (0x00013d46) list_double_pane_vc_g1

0x9396,	// (0x00014c58) list_double_pane_vc_g2_ParamLimits

0x9396,	// (0x00014c58) list_double_pane_vc_g2

0x0001,

0xf7f2,	// (0x0001b0b4) list_double_pane_vc_g_ParamLimits

0xf7f2,	// (0x0001b0b4) list_double_pane_vc_g

0xb3ba,	// (0x00016c7c) list_double_pane_vc_t1_ParamLimits

0xb3ba,	// (0x00016c7c) list_double_pane_vc_t1

0xb3ce,	// (0x00016c90) list_double_pane_vc_t2_ParamLimits

0xb3ce,	// (0x00016c90) list_double_pane_vc_t2

0x0001,

0xfa5a,	// (0x0001b31c) list_double_pane_vc_t_ParamLimits

0xfa5a,	// (0x0001b31c) list_double_pane_vc_t

0x8484,	// (0x00013d46) list_double_number_pane_vc_g1_ParamLimits

0x8484,	// (0x00013d46) list_double_number_pane_vc_g1

0x9396,	// (0x00014c58) list_double_number_pane_vc_g2_ParamLimits

0x9396,	// (0x00014c58) list_double_number_pane_vc_g2

0x0001,

0xf7f2,	// (0x0001b0b4) list_double_number_pane_vc_g_ParamLimits

0xf7f2,	// (0x0001b0b4) list_double_number_pane_vc_g

0xb3e4,	// (0x00016ca6) list_double_number_pane_vc_t1_ParamLimits

0xb3e4,	// (0x00016ca6) list_double_number_pane_vc_t1

0xb3f8,	// (0x00016cba) list_double_number_pane_vc_t2_ParamLimits

0xb3f8,	// (0x00016cba) list_double_number_pane_vc_t2

0xb3ce,	// (0x00016c90) list_double_number_pane_vc_t3_ParamLimits

0xb3ce,	// (0x00016c90) list_double_number_pane_vc_t3

0x0002,

0xfa5f,	// (0x0001b321) list_double_number_pane_vc_t_ParamLimits

0xfa5f,	// (0x0001b321) list_double_number_pane_vc_t

0xb40c,	// (0x00016cce) list_double_large_graphic_pane_vc_g1_ParamLimits

0xb40c,	// (0x00016cce) list_double_large_graphic_pane_vc_g1

0xb418,	// (0x00016cda) list_double_large_graphic_pane_vc_g2_ParamLimits

0xb418,	// (0x00016cda) list_double_large_graphic_pane_vc_g2

0x9396,	// (0x00014c58) list_double_large_graphic_pane_vc_g3_ParamLimits

0x9396,	// (0x00014c58) list_double_large_graphic_pane_vc_g3

0xb427,	// (0x00016ce9) list_double_large_graphic_pane_vc_g4_ParamLimits

0xb427,	// (0x00016ce9) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa66,	// (0x0001b328) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa66,	// (0x0001b328) list_double_large_graphic_pane_vc_g

0xb433,	// (0x00016cf5) list_double_large_graphic_pane_vc_t1_ParamLimits

0xb433,	// (0x00016cf5) list_double_large_graphic_pane_vc_t1

0xb447,	// (0x00016d09) list_double_large_graphic_pane_vc_t2_ParamLimits

0xb447,	// (0x00016d09) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa6f,	// (0x0001b331) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa6f,	// (0x0001b331) list_double_large_graphic_pane_vc_t

0xb066,	// (0x00016928) list_double_heading_pane_vc_g1_ParamLimits

0xb066,	// (0x00016928) list_double_heading_pane_vc_g1

0xb072,	// (0x00016934) list_double_heading_pane_vc_g2_ParamLimits

0xb072,	// (0x00016934) list_double_heading_pane_vc_g2

0x0001,

0xfa74,	// (0x0001b336) list_double_heading_pane_vc_g_ParamLimits

0xfa74,	// (0x0001b336) list_double_heading_pane_vc_g

0xb45e,	// (0x00016d20) list_double_heading_pane_vc_t1_ParamLimits

0xb45e,	// (0x00016d20) list_double_heading_pane_vc_t1

0x945c,	// (0x00014d1e) list_double_heading_pane_vc_t2_ParamLimits

0x945c,	// (0x00014d1e) list_double_heading_pane_vc_t2

0x0001,

0xfa79,	// (0x0001b33b) list_double_heading_pane_vc_t_ParamLimits

0xfa79,	// (0x0001b33b) list_double_heading_pane_vc_t

0x938a,	// (0x00014c4c) list_double_graphic_pane_vc_g1_ParamLimits

0x938a,	// (0x00014c4c) list_double_graphic_pane_vc_g1

0xb470,	// (0x00016d32) list_double_graphic_pane_vc_g2_ParamLimits

0xb470,	// (0x00016d32) list_double_graphic_pane_vc_g2

0xb47f,	// (0x00016d41) list_double_graphic_pane_vc_g3_ParamLimits

0xb47f,	// (0x00016d41) list_double_graphic_pane_vc_g3

0x0002,

0xfa7e,	// (0x0001b340) list_double_graphic_pane_vc_g_ParamLimits

0xfa7e,	// (0x0001b340) list_double_graphic_pane_vc_g

0xb48b,	// (0x00016d4d) list_double_graphic_pane_vc_t1_ParamLimits

0xb48b,	// (0x00016d4d) list_double_graphic_pane_vc_t1

0xb3ce,	// (0x00016c90) list_double_graphic_pane_vc_t2_ParamLimits

0xb3ce,	// (0x00016c90) list_double_graphic_pane_vc_t2

0x0001,

0xfa85,	// (0x0001b347) list_double_graphic_pane_vc_t_ParamLimits

0xfa85,	// (0x0001b347) list_double_graphic_pane_vc_t

0x4b25,	// (0x000103e7) aid_size_cell_fastswap

0x4b2d,	// (0x000103ef) aid_size_cell_touch_ParamLimits

0x4b2d,	// (0x000103ef) aid_size_cell_touch

0x4d98,	// (0x0001065a) popup_fast_swap_wide_window_ParamLimits

0x4d98,	// (0x0001065a) popup_fast_swap_wide_window

0x4eae,	// (0x00010770) touch_pane_ParamLimits

0x4eae,	// (0x00010770) touch_pane

0x75a6,	// (0x00012e68) button_value_adjust_pane_cp2

0x75ae,	// (0x00012e70) button_value_adjust_pane_cp4

0x75d4,	// (0x00012e96) form_field_data_pane_cp2

0x75f9,	// (0x00012ebb) form_field_data_wide_pane_cp2

0x7c83,	// (0x00013545) bg_scroll_pane_ParamLimits

0x513f,	// (0x00010a01) scroll_handle_pane_ParamLimits

0x5153,	// (0x00010a15) scroll_sc2_down_pane_ParamLimits

0x5153,	// (0x00010a15) scroll_sc2_down_pane

0x7cb4,	// (0x00013576) scroll_sc2_up_pane_ParamLimits

0x7cb4,	// (0x00013576) scroll_sc2_up_pane

0xb8fa,	// (0x000171bc) grid_wheel_folder_pane_g1_ParamLimits

0xb8fa,	// (0x000171bc) grid_wheel_folder_pane_g1

0x531d,	// (0x00010bdf) clock_nsta_pane_cp2_ParamLimits

0x531d,	// (0x00010bdf) clock_nsta_pane_cp2

0x851b,	// (0x00013ddd) listscroll_midp_pane_ParamLimits

0x8527,	// (0x00013de9) midp_canvas_pane

0x8815,	// (0x000140d7) nsta_clock_indic_pane

0x8873,	// (0x00014135) listscroll_form_pane_vc

0x888f,	// (0x00014151) listscroll_set_pane_vc_ParamLimits

0x888f,	// (0x00014151) listscroll_set_pane_vc

0x8faf,	// (0x00014871) clock_nsta_pane

0x902c,	// (0x000148ee) indicator_nsta_pane

0x9324,	// (0x00014be6) bg_popup_sub_pane_cp2_ParamLimits

0x9338,	// (0x00014bfa) find_pane_cp2_ParamLimits

0x9338,	// (0x00014bfa) find_pane_cp2

0x934e,	// (0x00014c10) grid_toobar_pane_ParamLimits

0x9504,	// (0x00014dc6) list_form_gen_pane_vc_ParamLimits

0x9504,	// (0x00014dc6) list_form_gen_pane_vc

0x951a,	// (0x00014ddc) scroll_pane_cp8_vc_ParamLimits

0x951a,	// (0x00014ddc) scroll_pane_cp8_vc

0x9596,	// (0x00014e58) data_form_wide_pane_vc_ParamLimits

0x9596,	// (0x00014e58) data_form_wide_pane_vc

0x95a2,	// (0x00014e64) form_field_data_wide_pane_vc_g1

0x95aa,	// (0x00014e6c) form_field_data_wide_pane_vc_t1_ParamLimits

0x95aa,	// (0x00014e6c) form_field_data_wide_pane_vc_t1

0x769c,	// (0x00012f5e) input_focus_pane_cp6_vc_ParamLimits

0x769c,	// (0x00012f5e) input_focus_pane_cp6_vc

0x987a,	// (0x0001513c) list_midp_pane_ParamLimits

0x9886,	// (0x00015148) scroll_pane_cp16_ParamLimits

0x9886,	// (0x00015148) scroll_pane_cp16

0x98d4,	// (0x00015196) button_value_adjust_pane_ParamLimits

0x98d4,	// (0x00015196) button_value_adjust_pane

0xa8a7,	// (0x00016169) button_value_adjust_pane_cp6_ParamLimits

0xa8a7,	// (0x00016169) button_value_adjust_pane_cp6

0xaa01,	// (0x000162c3) settings_code_pane_cp_ParamLimits

0xaa01,	// (0x000162c3) settings_code_pane_cp

0x3f18,	// (0x0000f7da) cell_touch_pane_g1

0x3f18,	// (0x0000f7da) cell_touch_pane_g2

0x0001,

0xf716,	// (0x0001afd8) cell_touch_pane_g

0xb045,	// (0x00016907) cell_touch_pane_cp_ParamLimits

0xb045,	// (0x00016907) cell_touch_pane_cp

0xb055,	// (0x00016917) cell_touch_pane_ParamLimits

0xb055,	// (0x00016917) cell_touch_pane

0x3f18,	// (0x0000f7da) scroll_sc2_down_pane_g1

0x3f18,	// (0x0000f7da) scroll_sc2_up_pane_g1

0x4091,	// (0x0000f953) bg_set_opt_pane_cp4_vc

0xb090,	// (0x00016952) list_set_graphic_pane_vc_g1_ParamLimits

0xb090,	// (0x00016952) list_set_graphic_pane_vc_g1

0xb09c,	// (0x0001695e) list_set_graphic_pane_vc_g2_ParamLimits

0xb09c,	// (0x0001695e) list_set_graphic_pane_vc_g2

0x0001,

0xfa0b,	// (0x0001b2cd) list_set_graphic_pane_vc_g_ParamLimits

0xfa0b,	// (0x0001b2cd) list_set_graphic_pane_vc_g

0xb0a8,	// (0x0001696a) text_primary_small_cp13_vc_ParamLimits

0xb0a8,	// (0x0001696a) text_primary_small_cp13_vc

0xb0c0,	// (0x00016982) list_set_graphic_pane_vc_ParamLimits

0xb0c0,	// (0x00016982) list_set_graphic_pane_vc

0x4091,	// (0x0000f953) input_focus_pane_cp2_vc

0x3f18,	// (0x0000f7da) setting_code_pane_vc_g1

0xb0d4,	// (0x00016996) setting_code_pane_vc_t1

0xb0e2,	// (0x000169a4) set_text_pane_vc_t1_ParamLimits

0xb0e2,	// (0x000169a4) set_text_pane_vc_t1

0x4091,	// (0x0000f953) input_focus_pane_cp1_vc

0xb100,	// (0x000169c2) list_set_text_pane_vc

0x3f18,	// (0x0000f7da) setting_text_pane_vc_g1

0x4091,	// (0x0000f953) bg_set_opt_pane_cp2_vc

0xb10a,	// (0x000169cc) setting_slider_graphic_pane_vc_g1

0xb112,	// (0x000169d4) setting_slider_graphic_pane_vc_t1

0xb120,	// (0x000169e2) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa10,	// (0x0001b2d2) setting_slider_graphic_pane_vc_t

0xb12e,	// (0x000169f0) slider_set_pane_cp_vc

0xb136,	// (0x000169f8) slider_set_pane_vc_g1

0xb13f,	// (0x00016a01) slider_set_pane_vc_g2

0x0006,

0xfa15,	// (0x0001b2d7) slider_set_pane_vc_g

0x77d8,	// (0x0001309a) set_opt_bg_pane_g1_copy1

0x77e0,	// (0x000130a2) set_opt_bg_pane_g2_copy1

0xb16b,	// (0x00016a2d) set_opt_bg_pane_g3_copy1

0x77f0,	// (0x000130b2) set_opt_bg_pane_g4_copy1

0x77f8,	// (0x000130ba) set_opt_bg_pane_g5_copy1

0x7800,	// (0x000130c2) set_opt_bg_pane_g6_copy1

0xb175,	// (0x00016a37) set_opt_bg_pane_g7_copy1

0xb17f,	// (0x00016a41) set_opt_bg_pane_g8_copy1

0xb189,	// (0x00016a4b) set_opt_bg_pane_g9_copy1

0x4091,	// (0x0000f953) bg_set_opt_pane_cp_vc

0xb193,	// (0x00016a55) setting_slider_pane_vc_t1

0xb112,	// (0x000169d4) setting_slider_pane_vc_t2

0xb120,	// (0x000169e2) setting_slider_pane_vc_t3

0x0002,

0xfa24,	// (0x0001b2e6) setting_slider_pane_vc_t

0xb12e,	// (0x000169f0) slider_set_pane_vc

0x572d,	// (0x00010fef) volume_set_pane_vc_g1

0x5736,	// (0x00010ff8) volume_set_pane_vc_g2

0x573f,	// (0x00011001) volume_set_pane_vc_g3

0x5748,	// (0x0001100a) volume_set_pane_vc_g4

0x5751,	// (0x00011013) volume_set_pane_vc_g5

0x575a,	// (0x0001101c) volume_set_pane_vc_g6

0x5763,	// (0x00011025) volume_set_pane_vc_g7

0x576c,	// (0x0001102e) volume_set_pane_vc_g8

0x5775,	// (0x00011037) volume_set_pane_vc_g9

0x577e,	// (0x00011040) volume_set_pane_vc_g10

0x0009,

0xf8c2,	// (0x0001b184) volume_set_pane_vc_g

0xb1a2,	// (0x00016a64) volume_set_pane_vc

0xb1aa,	// (0x00016a6c) button_value_adjust_pane_cp1_vc

0xb1b4,	// (0x00016a76) list_highlight_pane_cp2_vc

0xb1bd,	// (0x00016a7f) list_set_pane_vc_ParamLimits

0xb1bd,	// (0x00016a7f) list_set_pane_vc

0xb227,	// (0x00016ae9) main_pane_set_vc_t1_ParamLimits

0xb227,	// (0x00016ae9) main_pane_set_vc_t1

0xb23c,	// (0x00016afe) main_pane_set_vc_t2_ParamLimits

0xb23c,	// (0x00016afe) main_pane_set_vc_t2

0xb24e,	// (0x00016b10) main_pane_set_vc_t3_ParamLimits

0xb24e,	// (0x00016b10) main_pane_set_vc_t3

0xb262,	// (0x00016b24) main_pane_set_vc_t4_ParamLimits

0xb262,	// (0x00016b24) main_pane_set_vc_t4

0x0003,

0xfa2b,	// (0x0001b2ed) main_pane_set_vc_t_ParamLimits

0xfa2b,	// (0x0001b2ed) main_pane_set_vc_t

0xb276,	// (0x00016b38) setting_code_pane_vc_ParamLimits

0xb276,	// (0x00016b38) setting_code_pane_vc

0xb287,	// (0x00016b49) setting_slider_graphic_pane_vc

0xb287,	// (0x00016b49) setting_slider_pane_vc

0xb287,	// (0x00016b49) setting_text_pane_vc

0xb287,	// (0x00016b49) setting_volume_pane_vc

0xb291,	// (0x00016b53) scroll_pane_cp121_vc

0x7594,	// (0x00012e56) set_content_pane_vc

0xb49f,	// (0x00016d61) button_value_adjust_pane_g1

0xb4a8,	// (0x00016d6a) button_value_adjust_pane_g2

0x0001,

0xfa8a,	// (0x0001b34c) button_value_adjust_pane_g

0xb4b1,	// (0x00016d73) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb4b1,	// (0x00016d73) form_field_slider_wide_pane_vc_t1

0xb4c5,	// (0x00016d87) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb4c5,	// (0x00016d87) form_field_slider_wide_pane_vc_t2

0x0001,

0xfa8f,	// (0x0001b351) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa8f,	// (0x0001b351) form_field_slider_wide_pane_vc_t

0x6af6,	// (0x000123b8) input_focus_pane_cp10_vc_ParamLimits

0x6af6,	// (0x000123b8) input_focus_pane_cp10_vc

0xb4d7,	// (0x00016d99) slider_cont_pane_cp1_vc_ParamLimits

0xb4d7,	// (0x00016d99) slider_cont_pane_cp1_vc

0xb136,	// (0x000169f8) slider_form_pane_g1_cp2

0xb13f,	// (0x00016a01) slider_form_pane_g2_cp2

0xb4f0,	// (0x00016db2) form_field_slider_pane_vc_t3

0xb4fe,	// (0x00016dc0) form_field_slider_pane_vc_t4

0xb50c,	// (0x00016dce) slider_form_pane_vc_ParamLimits

0xb50c,	// (0x00016dce) slider_form_pane_vc

0xb519,	// (0x00016ddb) form_field_slider_pane_vc_t1_ParamLimits

0xb519,	// (0x00016ddb) form_field_slider_pane_vc_t1

0xb4c5,	// (0x00016d87) form_field_slider_pane_vc_t2_ParamLimits

0xb4c5,	// (0x00016d87) form_field_slider_pane_vc_t2

0x0001,

0xfa9f,	// (0x0001b361) form_field_slider_pane_vc_t_ParamLimits

0xfa9f,	// (0x0001b361) form_field_slider_pane_vc_t

0x6af6,	// (0x000123b8) input_focus_pane_cp9_vc_ParamLimits

0x6af6,	// (0x000123b8) input_focus_pane_cp9_vc

0xb535,	// (0x00016df7) slider_cont_pane_vc_ParamLimits

0xb535,	// (0x00016df7) slider_cont_pane_vc

0xb547,	// (0x00016e09) list_form_graphic_pane_cp_vc_ParamLimits

0xb547,	// (0x00016e09) list_form_graphic_pane_cp_vc

0x95a2,	// (0x00014e64) form_field_popup_wide_pane_vc_g1

0xb55c,	// (0x00016e1e) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb55c,	// (0x00016e1e) form_field_popup_wide_pane_vc_t1

0x769c,	// (0x00012f5e) input_focus_pane_cp8_vc_ParamLimits

0x769c,	// (0x00012f5e) input_focus_pane_cp8_vc

0xb573,	// (0x00016e35) list_form_wide_pane_vc_ParamLimits

0xb573,	// (0x00016e35) list_form_wide_pane_vc

0xb57f,	// (0x00016e41) list_form_graphic_pane_vc_g1

0xb587,	// (0x00016e49) list_form_graphic_pane_vc_t1_ParamLimits

0xb587,	// (0x00016e49) list_form_graphic_pane_vc_t1

0x6860,	// (0x00012122) list_highlight_pane_cp5_vc_ParamLimits

0x6860,	// (0x00012122) list_highlight_pane_cp5_vc

0xb5a3,	// (0x00016e65) list_form_graphic_pane_vc_ParamLimits

0xb5a3,	// (0x00016e65) list_form_graphic_pane_vc

0x95a2,	// (0x00014e64) form_field_popup_pane_vc_g1

0xb5b9,	// (0x00016e7b) form_field_popup_pane_vc_t1_ParamLimits

0xb5b9,	// (0x00016e7b) form_field_popup_pane_vc_t1

0x769c,	// (0x00012f5e) input_focus_pane_cp7_vc_ParamLimits

0x769c,	// (0x00012f5e) input_focus_pane_cp7_vc

0xb5d0,	// (0x00016e92) list_form_pane_vc_ParamLimits

0xb5d0,	// (0x00016e92) list_form_pane_vc

0xb5dc,	// (0x00016e9e) data_form_pane_vc_t1_ParamLimits

0xb5dc,	// (0x00016e9e) data_form_pane_vc_t1

0x77d8,	// (0x0001309a) input_focus_pane_vc_g1

0x77e0,	// (0x000130a2) input_focus_pane_vc_g2

0x77e8,	// (0x000130aa) input_focus_pane_vc_g3

0x77f0,	// (0x000130b2) input_focus_pane_vc_g4

0x77f8,	// (0x000130ba) input_focus_pane_vc_g5

0x7800,	// (0x000130c2) input_focus_pane_vc_g6

0x7808,	// (0x000130ca) input_focus_pane_vc_g7

0x7810,	// (0x000130d2) input_focus_pane_vc_g8

0x7818,	// (0x000130da) input_focus_pane_vc_g9

0x3f18,	// (0x0000f7da) input_focus_pane_vc_g10

0x0009,

0xf69f,	// (0x0001af61) input_focus_pane_vc_g

0x9596,	// (0x00014e58) data_form_pane_vc_ParamLimits

0x9596,	// (0x00014e58) data_form_pane_vc

0x95a2,	// (0x00014e64) form_field_data_pane_vc_g1

0xb5f9,	// (0x00016ebb) form_field_data_pane_vc_t1_ParamLimits

0xb5f9,	// (0x00016ebb) form_field_data_pane_vc_t1

0x769c,	// (0x00012f5e) input_focus_pane_vc_ParamLimits

0x769c,	// (0x00012f5e) input_focus_pane_vc

0xb613,	// (0x00016ed5) button_value_adjust_pane_cp3_vc

0xb61b,	// (0x00016edd) button_value_adjust_pane_cp5_vc

0xb623,	// (0x00016ee5) form_field_data_pane_vc_ParamLimits

0xb623,	// (0x00016ee5) form_field_data_pane_vc

0xb63e,	// (0x00016f00) form_field_data_pane_vc_cp2

0xb646,	// (0x00016f08) form_field_data_wide_pane_vc_ParamLimits

0xb646,	// (0x00016f08) form_field_data_wide_pane_vc

0xb660,	// (0x00016f22) form_field_data_wide_pane_vc_cp2

0xb668,	// (0x00016f2a) form_field_popup_pane_vc_ParamLimits

0xb668,	// (0x00016f2a) form_field_popup_pane_vc

0xb683,	// (0x00016f45) form_field_popup_wide_pane_vc_ParamLimits

0xb683,	// (0x00016f45) form_field_popup_wide_pane_vc

0xb69d,	// (0x00016f5f) form_field_slider_pane_vc_ParamLimits

0xb69d,	// (0x00016f5f) form_field_slider_pane_vc

0xb6b0,	// (0x00016f72) form_field_slider_wide_pane_vc_ParamLimits

0xb6b0,	// (0x00016f72) form_field_slider_wide_pane_vc

0xb6c3,	// (0x00016f85) grid_touch_1_pane_ParamLimits

0xb6c3,	// (0x00016f85) grid_touch_1_pane

0xb6cf,	// (0x00016f91) grid_touch_2_pane_ParamLimits

0xb6cf,	// (0x00016f91) grid_touch_2_pane

0x87e0,	// (0x000140a2) touch_pane_g1_ParamLimits

0x87e0,	// (0x000140a2) touch_pane_g1

0xb6e9,	// (0x00016fab) cell_app_pane_cp_wide_ParamLimits

0xb6e9,	// (0x00016fab) cell_app_pane_cp_wide

0xb6fa,	// (0x00016fbc) grid_popup_fast_wide_pane_ParamLimits

0xb6fa,	// (0x00016fbc) grid_popup_fast_wide_pane

0xb70e,	// (0x00016fd0) scroll_pane_cp19_ParamLimits

0xb70e,	// (0x00016fd0) scroll_pane_cp19

0x4091,	// (0x0000f953) bg_popup_window_pane_cp20

0xb722,	// (0x00016fe4) listscroll_popup_fast_wide_pane

0x6860,	// (0x00012122) grid_indicator_nsta_pane

0xb72a,	// (0x00016fec) clock_nsta_pane_g1

0xb733,	// (0x00016ff5) clock_nsta_pane_t1

0xb74f,	// (0x00017011) cell_indicator_nsta_pane_ParamLimits

0xb74f,	// (0x00017011) cell_indicator_nsta_pane

0xb787,	// (0x00017049) cell_indicator_nsta_pane_g1

0xb795,	// (0x00017057) cell_indicator_nsta_pane_g2

0x0001,

0xfaa9,	// (0x0001b36b) cell_indicator_nsta_pane_g

0xb7ab,	// (0x0001706d) clock_nsta_pane_cp

0xb7b3,	// (0x00017075) indicator_nsta_pane_cp

0xb7bb,	// (0x0001707d) nsta_clock_indic_pane_g1

0x6946,	// (0x00012208) grid_indicator_pane

0x7da6,	// (0x00013668) scroll_pane_cp29

0x5269,	// (0x00010b2b) indicator_nsta_pane_cp2_ParamLimits

0x5269,	// (0x00010b2b) indicator_nsta_pane_cp2

0x6860,	// (0x00012122) main_apps_wheel_pane

0x9757,	// (0x00015019) form_midp_field_text_pane_ParamLimits

0x98a6,	// (0x00015168) scroll_bar_cp050_ParamLimits

0xb824,	// (0x000170e6) cell_indicator_pane_ParamLimits

0xb824,	// (0x000170e6) cell_indicator_pane

0xb83c,	// (0x000170fe) cell_indicator_pane_g1

0xb846,	// (0x00017108) grid_wheel_folder_pane_ParamLimits

0xb846,	// (0x00017108) grid_wheel_folder_pane

0xb85a,	// (0x0001711c) list_wheel_apps_pane_ParamLimits

0xb85a,	// (0x0001711c) list_wheel_apps_pane

0xb86d,	// (0x0001712f) main_apps_wheel_pane_g1_ParamLimits

0xb86d,	// (0x0001712f) main_apps_wheel_pane_g1

0xb889,	// (0x0001714b) main_apps_wheel_pane_g2_ParamLimits

0xb889,	// (0x0001714b) main_apps_wheel_pane_g2

0x0001,

0xfac5,	// (0x0001b387) main_apps_wheel_pane_g_ParamLimits

0xfac5,	// (0x0001b387) main_apps_wheel_pane_g

0xb8a5,	// (0x00017167) main_apps_wheel_pane_t1_ParamLimits

0xb8a5,	// (0x00017167) main_apps_wheel_pane_t1

0xb8ce,	// (0x00017190) list_wheel_apps_pane_g1

0xb8d6,	// (0x00017198) list_wheel_apps_pane_g2

0xb8de,	// (0x000171a0) list_wheel_apps_pane_g3

0xb8e6,	// (0x000171a8) list_wheel_apps_pane_g4

0xb8f0,	// (0x000171b2) list_wheel_apps_pane_g5

0x0004,

0xfaca,	// (0x0001b38c) list_wheel_apps_pane_g

0x838f,	// (0x00013c51) navi_icon_text_pane

0x8edc,	// (0x0001479e) aid_fill_nsta

0xb911,	// (0x000171d3) navi_icon_text_pane_g1

0xb920,	// (0x000171e2) navi_icon_text_pane_t1

0x8225,	// (0x00013ae7) list_set_graphic_pane_t1_ParamLimits

0x8225,	// (0x00013ae7) list_set_graphic_pane_t1

0x9ff7,	// (0x000158b9) popup_midp_note_alarm_window_t6_ParamLimits

0x9ff7,	// (0x000158b9) popup_midp_note_alarm_window_t6

0xa009,	// (0x000158cb) popup_midp_note_alarm_window_t7_ParamLimits

0xa009,	// (0x000158cb) popup_midp_note_alarm_window_t7

0xa01b,	// (0x000158dd) popup_midp_note_alarm_window_t8_ParamLimits

0xa01b,	// (0x000158dd) popup_midp_note_alarm_window_t8

0xa02d,	// (0x000158ef) popup_midp_note_alarm_window_t9_ParamLimits

0xa02d,	// (0x000158ef) popup_midp_note_alarm_window_t9

0xa03f,	// (0x00015901) popup_midp_note_alarm_window_t10_ParamLimits

0xa03f,	// (0x00015901) popup_midp_note_alarm_window_t10

0xa051,	// (0x00015913) popup_midp_note_alarm_window_t11_ParamLimits

0xa051,	// (0x00015913) popup_midp_note_alarm_window_t11

0xa063,	// (0x00015925) scroll_pane_cp17_ParamLimits

0xa063,	// (0x00015925) scroll_pane_cp17

0x572d,	// (0x00010fef) volume_small_pane_cp_g1

0x5a3e,	// (0x00011300) volume_small_pane_cp_g2

0x5a47,	// (0x00011309) volume_small_pane_cp_g3

0x5a50,	// (0x00011312) volume_small_pane_cp_g4

0x5a59,	// (0x0001131b) volume_small_pane_cp_g5

0x5a62,	// (0x00011324) volume_small_pane_cp_g6

0x5a6b,	// (0x0001132d) volume_small_pane_cp_g7

0x5a74,	// (0x00011336) volume_small_pane_cp_g8

0x5a7d,	// (0x0001133f) volume_small_pane_cp_g9

0x5a86,	// (0x00011348) volume_small_pane_cp_g10

0x85f0,	// (0x00013eb2) midp_ticker_pane_g1_ParamLimits

0x85fc,	// (0x00013ebe) midp_ticker_pane_g2_ParamLimits

0xf76b,	// (0x0001b02d) midp_ticker_pane_g_ParamLimits

0x8608,	// (0x00013eca) midp_ticker_pane_t1_ParamLimits

0x8ef2,	// (0x000147b4) aid_fill_nsta_2

0x9892,	// (0x00015154) list_form2_midp_pane

0xaa7d,	// (0x0001633f) midp_editing_number_pane_ParamLimits

0xaa8c,	// (0x0001634e) midp_ticker_pane_ParamLimits

0xb935,	// (0x000171f7) form2_midp_field_pane

0xb959,	// (0x0001721b) scroll_pane_cp51

0xb979,	// (0x0001723b) form2_midp_button_pane_ParamLimits

0xb979,	// (0x0001723b) form2_midp_button_pane

0xb98b,	// (0x0001724d) form2_midp_content_pane_ParamLimits

0xb98b,	// (0x0001724d) form2_midp_content_pane

0xb9a5,	// (0x00017267) form2_midp_field_choice_group_pane

0xb9ad,	// (0x0001726f) form2_midp_field_pane_g1

0xb9b5,	// (0x00017277) form2_midp_field_pane_g2

0xb9bd,	// (0x0001727f) form2_midp_field_pane_g3

0xb9c5,	// (0x00017287) form2_midp_field_pane_g4

0x0003,

0xfaef,	// (0x0001b3b1) form2_midp_field_pane_g

0xb9cd,	// (0x0001728f) form2_midp_gauge_slider_pane

0xb9d5,	// (0x00017297) form2_midp_gauge_wait_pane

0xb9dd,	// (0x0001729f) form2_midp_image_pane_ParamLimits

0xb9dd,	// (0x0001729f) form2_midp_image_pane

0xb9f8,	// (0x000172ba) form2_midp_label_pane_ParamLimits

0xb9f8,	// (0x000172ba) form2_midp_label_pane

0xba11,	// (0x000172d3) form2_midp_label_pane_cp_ParamLimits

0xba11,	// (0x000172d3) form2_midp_label_pane_cp

0xba30,	// (0x000172f2) form2_midp_string_pane_ParamLimits

0xba30,	// (0x000172f2) form2_midp_string_pane

0xba42,	// (0x00017304) form2_midp_text_pane_ParamLimits

0xba42,	// (0x00017304) form2_midp_text_pane

0xba5b,	// (0x0001731d) form2_midp_time_pane

0xba6b,	// (0x0001732d) input_focus_pane_cp51_ParamLimits

0xba6b,	// (0x0001732d) input_focus_pane_cp51

0xba83,	// (0x00017345) form2_midp_label_pane_t1_ParamLimits

0xba83,	// (0x00017345) form2_midp_label_pane_t1

0xbab9,	// (0x0001737b) form2_mdip_text_pane_t1_ParamLimits

0xbab9,	// (0x0001737b) form2_mdip_text_pane_t1

0xbad0,	// (0x00017392) form2_midp_time_pane_t1

0xbaeb,	// (0x000173ad) form2_midp_gauge_slider_pane_t1

0xbafd,	// (0x000173bf) form2_midp_gauge_slider_pane_t2

0xbb0f,	// (0x000173d1) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf8,	// (0x0001b3ba) form2_midp_gauge_slider_pane_t

0xbb21,	// (0x000173e3) form2_midp_slider_pane

0xbb2d,	// (0x000173ef) form2_midp_gauge_wait_pane_t1

0xbb3b,	// (0x000173fd) form2_midp_wait_pane_ParamLimits

0xbb3b,	// (0x000173fd) form2_midp_wait_pane

0xbb66,	// (0x00017428) list_single_2graphic_pane_cp4_ParamLimits

0xbb66,	// (0x00017428) list_single_2graphic_pane_cp4

0x95d1,	// (0x00014e93) list_single_midp_graphic_pane_cp_ParamLimits

0x95d1,	// (0x00014e93) list_single_midp_graphic_pane_cp

0x4091,	// (0x0000f953) list_highlight_pane_cp20

0xbb77,	// (0x00017439) list_single_2graphic_pane_g1_cp4

0xaf48,	// (0x0001680a) list_single_2graphic_pane_g2_cp4

0xbb7f,	// (0x00017441) list_single_2graphic_pane_t1_cp4

0x6860,	// (0x00012122) list_highlight_pane_cp21

0xbb8e,	// (0x00017450) list_single_midp_graphic_pane_g4_cp

0xbb9d,	// (0x0001745f) list_single_midp_graphic_pane_t1_cp

0xbbb2,	// (0x00017474) form2_mdip_string_pane_t1_ParamLimits

0xbbb2,	// (0x00017474) form2_mdip_string_pane_t1

0x4091,	// (0x0000f953) bg_wml_button_pane_cp2

0x3f18,	// (0x0000f7da) form2_midp_image_pane_g1

0x7348,	// (0x00012c0a) list_double_large_graphic_pane_g5_ParamLimits

0x7348,	// (0x00012c0a) list_double_large_graphic_pane_g5

0x851b,	// (0x00013ddd) midp_form_pane_ParamLimits

0x6860,	// (0x00012122) main_apps_wheel_pane_ParamLimits

0x8c86,	// (0x00014548) popup_preview_window_ParamLimits

0x8c86,	// (0x00014548) popup_preview_window

0x8e6d,	// (0x0001472f) popup_touch_info_window_ParamLimits

0x8e6d,	// (0x0001472f) popup_touch_info_window

0x8e8f,	// (0x00014751) popup_touch_menu_window_ParamLimits

0x8e8f,	// (0x00014751) popup_touch_menu_window

0x3f0e,	// (0x0000f7d0) bg_popup_sub_pane_cp6

0xbc0c,	// (0x000174ce) list_touch_menu_pane

0xbc14,	// (0x000174d6) list_single_touch_menu_pane_ParamLimits

0xbc14,	// (0x000174d6) list_single_touch_menu_pane

0xbc2f,	// (0x000174f1) list_single_touch_menu_pane_t1

0x6860,	// (0x00012122) bg_popup_sub_pane_cp7_ParamLimits

0x6860,	// (0x00012122) bg_popup_sub_pane_cp7

0xbc3d,	// (0x000174ff) heading_sub_pane

0xbc45,	// (0x00017507) list_touch_info_pane_ParamLimits

0xbc45,	// (0x00017507) list_touch_info_pane

0xbc54,	// (0x00017516) list_single_touch_info_pane_ParamLimits

0xbc54,	// (0x00017516) list_single_touch_info_pane

0xbc66,	// (0x00017528) list_single_touch_info_pane_t1

0xbc74,	// (0x00017536) list_single_touch_info_pane_t2

0x0001,

0xfb06,	// (0x0001b3c8) list_single_touch_info_pane_t

0x8513,	// (0x00013dd5) bg_popup_heading_pane_cp

0xbc82,	// (0x00017544) heading_sub_pane_t1

0x9530,	// (0x00014df2) bg_popup_preview_window_pane_cp_ParamLimits

0x9530,	// (0x00014df2) bg_popup_preview_window_pane_cp

0xbc3d,	// (0x000174ff) heading_preview_pane

0xbc45,	// (0x00017507) list_preview_pane_ParamLimits

0xbc45,	// (0x00017507) list_preview_pane

0xbc90,	// (0x00017552) popup_preview_window_g1

0xbc54,	// (0x00017516) list_single_preview_pane_ParamLimits

0xbc54,	// (0x00017516) list_single_preview_pane

0xbc98,	// (0x0001755a) list_single_preview_pane_g1

0xbca0,	// (0x00017562) list_single_preview_pane_t1

0xbc66,	// (0x00017528) list_single_preview_pane_t2

0x0001,

0xfb0b,	// (0x0001b3cd) list_single_preview_pane_t

0xbcae,	// (0x00017570) bg_popup_heading_pane_cp2_ParamLimits

0xbcae,	// (0x00017570) bg_popup_heading_pane_cp2

0xbcc4,	// (0x00017586) heading_preview_pane_g1

0xbccc,	// (0x0001758e) heading_preview_pane_t1_ParamLimits

0xbccc,	// (0x0001758e) heading_preview_pane_t1

0x6969,	// (0x0001222b) soft_indicator_pane_t1_ParamLimits

0x7074,	// (0x00012936) scroll_pane_ParamLimits

0x7ca2,	// (0x00013564) scroll_sc2_left_pane

0x7cab,	// (0x0001356d) scroll_sc2_right_pane

0x7cca,	// (0x0001358c) scroll_bg_pane_g1_ParamLimits

0x7cdf,	// (0x000135a1) scroll_bg_pane_g2_ParamLimits

0x7cf7,	// (0x000135b9) scroll_bg_pane_g3_ParamLimits

0xf6f6,	// (0x0001afb8) scroll_bg_pane_g_ParamLimits

0x7cca,	// (0x0001358c) scroll_handle_pane_g1_ParamLimits

0x7d19,	// (0x000135db) scroll_handle_pane_g2_ParamLimits

0x7cf7,	// (0x000135b9) scroll_handle_pane_g3_ParamLimits

0xf6fd,	// (0x0001afbf) scroll_handle_pane_g_ParamLimits

0x88d1,	// (0x00014193) popup_choice_list_window_ParamLimits

0x88d1,	// (0x00014193) popup_choice_list_window

0x9330,	// (0x00014bf2) choice_list_pane

0x93e0,	// (0x00014ca2) cell_toolbar_pane_t1

0x9408,	// (0x00014cca) toolbar_button_pane_ParamLimits

0xa533,	// (0x00015df5) ai_gene_pane_1_t2_ParamLimits

0xa533,	// (0x00015df5) ai_gene_pane_1_t2

0x0001,

0xf91e,	// (0x0001b1e0) ai_gene_pane_1_t_ParamLimits

0xf91e,	// (0x0001b1e0) ai_gene_pane_1_t

0xbce9,	// (0x000175ab) scroll_sc2_left_pane_g1

0xbce9,	// (0x000175ab) scroll_sc2_right_pane_g1

0x88a1,	// (0x00014163) bg_popup_sub_pane_cp10

0xbcf3,	// (0x000175b5) list_choice_list_pane

0xbd0a,	// (0x000175cc) list_single_choice_list_pane_ParamLimits

0xbd0a,	// (0x000175cc) list_single_choice_list_pane

0xbd1e,	// (0x000175e0) list_single_choice_list_pane_g1

0xbd26,	// (0x000175e8) list_single_choice_list_pane_t1_ParamLimits

0xbd26,	// (0x000175e8) list_single_choice_list_pane_t1

0xbd3b,	// (0x000175fd) choice_list_pane_g1

0xbd43,	// (0x00017605) choice_list_pane_t1

0x3f0e,	// (0x0000f7d0) input_focus_pane_cp11

0x7b7c,	// (0x0001343e) title_pane_stacon_g2_ParamLimits

0x7b7c,	// (0x0001343e) title_pane_stacon_g2

0x0002,

0xf6dc,	// (0x0001af9e) title_pane_stacon_g_ParamLimits

0xf6dc,	// (0x0001af9e) title_pane_stacon_g

0x8513,	// (0x00013dd5) cursor_press_pane

0x8987,	// (0x00014249) popup_fep_hwr_window_ParamLimits

0x8987,	// (0x00014249) popup_fep_hwr_window

0x8a11,	// (0x000142d3) popup_fep_vkb_window_ParamLimits

0x8a11,	// (0x000142d3) popup_fep_vkb_window

0xbd51,	// (0x00017613) cursor_press_pane_g1

0x0002,

0xfb34,	// (0x0001b3f6) fep_vkb_side_pane_g_ParamLimits

0x5ac8,	// (0x0001138a) fep_hwr_candidate_pane_ParamLimits

0x5ac8,	// (0x0001138a) fep_hwr_candidate_pane

0x5af2,	// (0x000113b4) fep_hwr_side_pane_ParamLimits

0x5af2,	// (0x000113b4) fep_hwr_side_pane

0x5b14,	// (0x000113d6) fep_hwr_top_pane_ParamLimits

0x5b14,	// (0x000113d6) fep_hwr_top_pane

0x5b2c,	// (0x000113ee) fep_hwr_write_pane_ParamLimits

0x5b2c,	// (0x000113ee) fep_hwr_write_pane

0xfb34,	// (0x0001b3f6) fep_vkb_side_pane_g

0xbd59,	// (0x0001761b) fep_hwr_top_pane_g1

0xbd6b,	// (0x0001762d) fep_hwr_top_pane_g2

0x5b66,	// (0x00011428) fep_hwr_top_pane_g3

0x0002,

0xfb10,	// (0x0001b3d2) fep_hwr_top_pane_g

0x5b7b,	// (0x0001143d) fep_hwr_top_text_pane

0x7e6e,	// (0x00013730) fep_hwr_top_text_pane_g1

0xbda1,	// (0x00017663) fep_hwr_top_text_pane_t1

0x5c85,	// (0x00011547) fep_hwr_candidate_pane_g1

0xbfec,	// (0x000178ae) fep_vkb_keypad_pane_g3_ParamLimits

0xbfec,	// (0x000178ae) fep_vkb_keypad_pane_g3

0xc018,	// (0x000178da) fep_vkb_keypad_pane_g4_ParamLimits

0xc018,	// (0x000178da) fep_vkb_keypad_pane_g4

0xc08f,	// (0x00017951) fep_vkb_bottom_pane_g2_ParamLimits

0xc08f,	// (0x00017951) fep_vkb_bottom_pane_g2

0x0001,

0xfb3b,	// (0x0001b3fd) fep_vkb_bottom_pane_g_ParamLimits

0xfb3b,	// (0x0001b3fd) fep_vkb_bottom_pane_g

0xbce9,	// (0x000175ab) cell_vkb_side_pane_g2

0x0001,

0xfb45,	// (0x0001b407) cell_vkb_side_pane_g

0xc11a,	// (0x000179dc) cell_vkb_side_pane_t1

0xc128,	// (0x000179ea) cell_vkb_side_pane_t1_copy1

0xbce9,	// (0x000175ab) bg_fep_vkb_candidate_pane_g2

0xc26c,	// (0x00017b2e) cell_vkb_candidate_pane_ParamLimits

0xbdaf,	// (0x00017671) aid_size_cell_vkb_ParamLimits

0xbdaf,	// (0x00017671) aid_size_cell_vkb

0xc26c,	// (0x00017b2e) cell_vkb_candidate_pane

0x5cac,	// (0x0001156e) bg_popup_fep_shadow_pane_g1

0xbe41,	// (0x00017703) fep_vkb_bottom_pane_ParamLimits

0xbe41,	// (0x00017703) fep_vkb_bottom_pane

0xbe7e,	// (0x00017740) fep_vkb_candidate_pane_ParamLimits

0xbe7e,	// (0x00017740) fep_vkb_candidate_pane

0xbe9a,	// (0x0001775c) fep_vkb_keypad_pane_ParamLimits

0xbe9a,	// (0x0001775c) fep_vkb_keypad_pane

0xbecd,	// (0x0001778f) fep_vkb_side_pane_ParamLimits

0xbecd,	// (0x0001778f) fep_vkb_side_pane

0xbf09,	// (0x000177cb) fep_vkb_top_pane_ParamLimits

0xbf09,	// (0x000177cb) fep_vkb_top_pane

0xbf45,	// (0x00017807) fep_vkb_top_pane_g1_ParamLimits

0xbf45,	// (0x00017807) fep_vkb_top_pane_g1

0xbf54,	// (0x00017816) fep_vkb_top_pane_g2_ParamLimits

0xbf54,	// (0x00017816) fep_vkb_top_pane_g2

0xbf63,	// (0x00017825) fep_vkb_top_pane_g3_ParamLimits

0xbf63,	// (0x00017825) fep_vkb_top_pane_g3

0x0003,

0xfb2b,	// (0x0001b3ed) fep_vkb_top_pane_g_ParamLimits

0xfb2b,	// (0x0001b3ed) fep_vkb_top_pane_g

0xbf81,	// (0x00017843) fep_vkb_top_text_pane_ParamLimits

0xbf81,	// (0x00017843) fep_vkb_top_text_pane

0xbf92,	// (0x00017854) fep_vkb_side_pane_g1_ParamLimits

0xbf92,	// (0x00017854) fep_vkb_side_pane_g1

0xbfdb,	// (0x0001789d) grid_vkb_side_pane_ParamLimits

0xbfdb,	// (0x0001789d) grid_vkb_side_pane

0x5cb4,	// (0x00011576) bg_popup_fep_shadow_pane_g2

0x5cbd,	// (0x0001157f) bg_popup_fep_shadow_pane_g3

0x5cc5,	// (0x00011587) bg_popup_fep_shadow_pane_g4

0x5cce,	// (0x00011590) bg_popup_fep_shadow_pane_g5

0x5cd8,	// (0x0001159a) bg_popup_fep_shadow_pane_g6

0x5ce0,	// (0x000115a2) bg_popup_fep_shadow_pane_g7

0x77f0,	// (0x000130b2) bg_popup_fep_shadow_pane_g8

0xc03a,	// (0x000178fc) grid_vkb_keypad_number_pane_ParamLimits

0xc03a,	// (0x000178fc) grid_vkb_keypad_number_pane

0xc04e,	// (0x00017910) grid_vkb_keypad_pane_ParamLimits

0xc04e,	// (0x00017910) grid_vkb_keypad_pane

0xc074,	// (0x00017936) fep_vkb_bottom_pane_g1_ParamLimits

0xc074,	// (0x00017936) fep_vkb_bottom_pane_g1

0xc09d,	// (0x0001795f) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc09d,	// (0x0001795f) grid_vkb_keypad_bottom_left_pane

0xc0b2,	// (0x00017974) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc0b2,	// (0x00017974) grid_vkb_keypad_bottom_right_pane

0xc0c7,	// (0x00017989) fep_vkb_top_text_pane_g1

0xc0e2,	// (0x000179a4) fep_vkb_top_text_pane_t1

0xc0f7,	// (0x000179b9) cell_vkb_side_pane_ParamLimits

0xc0f7,	// (0x000179b9) cell_vkb_side_pane

0xbce9,	// (0x000175ab) cell_vkb_side_pane_g1

0xc136,	// (0x000179f8) cell_vkb_keypad_pane_ParamLimits

0xc136,	// (0x000179f8) cell_vkb_keypad_pane

0xc1c3,	// (0x00017a85) cell_vkb_keypad_pane_g1

0x0008,

0xfb58,	// (0x0001b41a) bg_popup_fep_shadow_pane_g

0x5cf2,	// (0x000115b4) cell_hwr_side_pane_g1

0x5cf2,	// (0x000115b4) cell_hwr_side_pane_g2

0xc1cd,	// (0x00017a8f) cell_vkb_keypad_pane_t1

0xc1db,	// (0x00017a9d) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc1db,	// (0x00017a9d) cell_vkb_keypad_bottom_left_pane

0xc1f8,	// (0x00017aba) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc1f8,	// (0x00017aba) cell_vkb_keypad_bottom_right_pane

0xbce9,	// (0x000175ab) cell_vkb_keypad_bottom_left_pane_g1

0xbce9,	// (0x000175ab) cell_vkb_keypad_bottom_right_pane_g1

0xc231,	// (0x00017af3) cell_vkb_keypad_number_pane_ParamLimits

0xc231,	// (0x00017af3) cell_vkb_keypad_number_pane

0xc250,	// (0x00017b12) cell_vkb_keypad_number_pane_g1

0xc25a,	// (0x00017b1c) cell_vkb_keypad_number_pane_g2

0xc263,	// (0x00017b25) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb4a,	// (0x0001b40c) cell_vkb_keypad_number_pane_g

0xc1cd,	// (0x00017a8f) cell_vkb_keypad_number_pane_t1

0xc28d,	// (0x00017b4f) fep_vkb_candidate_pane_g1

0x0001,

0xfb6b,	// (0x0001b42d) cell_hwr_side_pane_g

0xc2a6,	// (0x00017b68) cell_hwr_side_pane_t1

0x5cfc,	// (0x000115be) cell_hwr_side_pane_t1_copy1

0x5d0a,	// (0x000115cc) cell_hwr_candidate_pane_g1

0x5d39,	// (0x000115fb) cell_hwr_candidate_pane_t1

0xbce9,	// (0x000175ab) cell_vkb_candidate_pane_g2

0xc2ea,	// (0x00017bac) cell_vkb_candidate_pane_t1

0x5a8f,	// (0x00011351) bg_popup_fep_shadow_pane_ParamLimits

0x5a8f,	// (0x00011351) bg_popup_fep_shadow_pane

0x5b46,	// (0x00011408) bg_fep_hwr_top_pane_g4

0xbd7d,	// (0x0001763f) bg_hwr_side_pane_g1_ParamLimits

0xbd7d,	// (0x0001763f) bg_hwr_side_pane_g1

0x5bb9,	// (0x0001147b) cell_hwr_side_pane_ParamLimits

0x5bb9,	// (0x0001147b) cell_hwr_side_pane

0x5bf6,	// (0x000114b8) fep_hwr_write_pane_g1_ParamLimits

0x5bf6,	// (0x000114b8) fep_hwr_write_pane_g1

0x5c03,	// (0x000114c5) fep_hwr_write_pane_g2_ParamLimits

0x5c03,	// (0x000114c5) fep_hwr_write_pane_g2

0x5c10,	// (0x000114d2) fep_hwr_write_pane_g3_ParamLimits

0x5c10,	// (0x000114d2) fep_hwr_write_pane_g3

0x5c1e,	// (0x000114e0) fep_hwr_write_pane_g4_ParamLimits

0x5c1e,	// (0x000114e0) fep_hwr_write_pane_g4

0x0005,

0xfb17,	// (0x0001b3d9) fep_hwr_write_pane_g_ParamLimits

0xfb17,	// (0x0001b3d9) fep_hwr_write_pane_g

0x5b46,	// (0x00011408) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x5b46,	// (0x00011408) bg_fep_hwr_candidate_pane_g2

0x5c33,	// (0x000114f5) cell_hwr_candidate_pane_ParamLimits

0x5c33,	// (0x000114f5) cell_hwr_candidate_pane

0x5c85,	// (0x00011547) fep_hwr_candidate_pane_g1_ParamLimits

0xbddd,	// (0x0001769f) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xbddd,	// (0x0001769f) bg_popup_fep_shadow_pane_cp2

0xbf73,	// (0x00017835) fep_vkb_top_pane_g4_ParamLimits

0xbf73,	// (0x00017835) fep_vkb_top_pane_g4

0xbfb9,	// (0x0001787b) fep_vkb_side_pane_g2_ParamLimits

0xbfb9,	// (0x0001787b) fep_vkb_side_pane_g2

0x74ac,	// (0x00012d6e) list_setting_pane_t4_ParamLimits

0x74ac,	// (0x00012d6e) list_setting_pane_t4

0x7528,	// (0x00012dea) list_setting_number_pane_t5_ParamLimits

0x7528,	// (0x00012dea) list_setting_number_pane_t5

0x7eb5,	// (0x00013777) list_double_heading_pane_cp2_ParamLimits

0x7eb5,	// (0x00013777) list_double_heading_pane_cp2

0x76c2,	// (0x00012f84) list_double_heading_pane_g1_cp2_ParamLimits

0x76c2,	// (0x00012f84) list_double_heading_pane_g1_cp2

0x76ce,	// (0x00012f90) list_double_heading_pane_g2_cp2_ParamLimits

0x76ce,	// (0x00012f90) list_double_heading_pane_g2_cp2

0xc2f8,	// (0x00017bba) list_double_heading_pane_t1_cp2_ParamLimits

0xc2f8,	// (0x00017bba) list_double_heading_pane_t1_cp2

0xc30e,	// (0x00017bd0) list_double_heading_pane_t2_cp2_ParamLimits

0xc30e,	// (0x00017bd0) list_double_heading_pane_t2_cp2

0x3f06,	// (0x0000f7c8) aid_value_unit2

0x4df6,	// (0x000106b8) popup_preview_fixed_window

0x6b04,	// (0x000123c6) bg_popup_preview_window_pane_cp02

0xc320,	// (0x00017be2) list_preview_fixed_pane

0xc366,	// (0x00017c28) list_empty_pane_fp_ParamLimits

0xc366,	// (0x00017c28) list_empty_pane_fp

0xc366,	// (0x00017c28) list_single_cale_day_pane_fp_ParamLimits

0xc366,	// (0x00017c28) list_single_cale_day_pane_fp

0xc366,	// (0x00017c28) list_single_graphic_heading_pane_fp_ParamLimits

0xc366,	// (0x00017c28) list_single_graphic_heading_pane_fp

0xc366,	// (0x00017c28) list_single_graphic_pane_fp_ParamLimits

0xc366,	// (0x00017c28) list_single_graphic_pane_fp

0xc366,	// (0x00017c28) list_single_heading_pane_fp_ParamLimits

0xc366,	// (0x00017c28) list_single_heading_pane_fp

0xc366,	// (0x00017c28) list_single_pane_fp_ParamLimits

0xc366,	// (0x00017c28) list_single_pane_fp

0xc37f,	// (0x00017c41) list_single_pane_fp_g1_ParamLimits

0xc37f,	// (0x00017c41) list_single_pane_fp_g1

0xc38b,	// (0x00017c4d) list_single_pane_fp_g2_ParamLimits

0xc38b,	// (0x00017c4d) list_single_pane_fp_g2

0xc397,	// (0x00017c59) list_single_pane_fp_g3_ParamLimits

0xc397,	// (0x00017c59) list_single_pane_fp_g3

0xc3ab,	// (0x00017c6d) list_single_pane_fp_g4_ParamLimits

0xc3ab,	// (0x00017c6d) list_single_pane_fp_g4

0x0003,

0xfb7e,	// (0x0001b440) list_single_pane_fp_g_ParamLimits

0xfb7e,	// (0x0001b440) list_single_pane_fp_g

0xc3b7,	// (0x00017c79) list_single_pane_fp_t1_ParamLimits

0xc3b7,	// (0x00017c79) list_single_pane_fp_t1

0xc3ce,	// (0x00017c90) list_single_graphic_pane_fp_g1_ParamLimits

0xc3ce,	// (0x00017c90) list_single_graphic_pane_fp_g1

0xc37f,	// (0x00017c41) list_single_graphic_pane_fp_g2_ParamLimits

0xc37f,	// (0x00017c41) list_single_graphic_pane_fp_g2

0xc38b,	// (0x00017c4d) list_single_graphic_pane_fp_g3_ParamLimits

0xc38b,	// (0x00017c4d) list_single_graphic_pane_fp_g3

0xc397,	// (0x00017c59) list_single_graphic_pane_fp_g4_ParamLimits

0xc397,	// (0x00017c59) list_single_graphic_pane_fp_g4

0xc3ab,	// (0x00017c6d) list_single_graphic_pane_fp_g5_ParamLimits

0xc3ab,	// (0x00017c6d) list_single_graphic_pane_fp_g5

0x0004,

0xfb87,	// (0x0001b449) list_single_graphic_pane_fp_g_ParamLimits

0xfb87,	// (0x0001b449) list_single_graphic_pane_fp_g

0xc3da,	// (0x00017c9c) list_single_graphic_pane_fp_t1_ParamLimits

0xc3da,	// (0x00017c9c) list_single_graphic_pane_fp_t1

0xc3ce,	// (0x00017c90) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xc3ce,	// (0x00017c90) list_single_graphic_heading_pane_fp_g1

0xc37f,	// (0x00017c41) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc37f,	// (0x00017c41) list_single_graphic_heading_pane_fp_g2

0xc38b,	// (0x00017c4d) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xc38b,	// (0x00017c4d) list_single_graphic_heading_pane_fp_g3

0xc397,	// (0x00017c59) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xc397,	// (0x00017c59) list_single_graphic_heading_pane_fp_g4

0xc3ab,	// (0x00017c6d) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc3ab,	// (0x00017c6d) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb87,	// (0x0001b449) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb87,	// (0x0001b449) list_single_graphic_heading_pane_fp_g

0xc3f0,	// (0x00017cb2) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xc3f0,	// (0x00017cb2) list_single_graphic_heading_pane_fp_t1

0xc406,	// (0x00017cc8) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xc406,	// (0x00017cc8) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb92,	// (0x0001b454) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb92,	// (0x0001b454) list_single_graphic_heading_pane_fp_t

0xc418,	// (0x00017cda) list_single_cale_day_pane_fp_g1_ParamLimits

0xc418,	// (0x00017cda) list_single_cale_day_pane_fp_g1

0xc450,	// (0x00017d12) list_single_cale_day_pane_fp_g2_ParamLimits

0xc450,	// (0x00017d12) list_single_cale_day_pane_fp_g2

0xc45c,	// (0x00017d1e) list_single_cale_day_pane_fp_g3_ParamLimits

0xc45c,	// (0x00017d1e) list_single_cale_day_pane_fp_g3

0xc484,	// (0x00017d46) list_single_cale_day_pane_fp_g4_ParamLimits

0xc484,	// (0x00017d46) list_single_cale_day_pane_fp_g4

0xc4a8,	// (0x00017d6a) list_single_cale_day_pane_fp_g5_ParamLimits

0xc4a8,	// (0x00017d6a) list_single_cale_day_pane_fp_g5

0x0004,

0xfb97,	// (0x0001b459) list_single_cale_day_pane_fp_g_ParamLimits

0xfb97,	// (0x0001b459) list_single_cale_day_pane_fp_g

0xc4cc,	// (0x00017d8e) list_single_cale_day_pane_fp_t1_ParamLimits

0xc4cc,	// (0x00017d8e) list_single_cale_day_pane_fp_t1

0xc4f2,	// (0x00017db4) list_single_cale_day_pane_fp_t2_ParamLimits

0xc4f2,	// (0x00017db4) list_single_cale_day_pane_fp_t2

0xc50b,	// (0x00017dcd) list_single_cale_day_pane_fp_t3_ParamLimits

0xc50b,	// (0x00017dcd) list_single_cale_day_pane_fp_t3

0x0002,

0xfba2,	// (0x0001b464) list_single_cale_day_pane_fp_t_ParamLimits

0xfba2,	// (0x0001b464) list_single_cale_day_pane_fp_t

0xc37f,	// (0x00017c41) list_empty_pane_fp_g1_ParamLimits

0xc37f,	// (0x00017c41) list_empty_pane_fp_g1

0xc524,	// (0x00017de6) list_empty_pane_fp_t1

0xc532,	// (0x00017df4) list_empty_pane_fp_t2

0x0001,

0xfba9,	// (0x0001b46b) list_empty_pane_fp_t

0xc37f,	// (0x00017c41) list_single_heading_pane_fp_g1_ParamLimits

0xc37f,	// (0x00017c41) list_single_heading_pane_fp_g1

0xc38b,	// (0x00017c4d) list_single_heading_pane_fp_g2_ParamLimits

0xc38b,	// (0x00017c4d) list_single_heading_pane_fp_g2

0xc397,	// (0x00017c59) list_single_heading_pane_fp_g3_ParamLimits

0xc397,	// (0x00017c59) list_single_heading_pane_fp_g3

0x0002,

0xfbae,	// (0x0001b470) list_single_heading_pane_fp_g_ParamLimits

0xfbae,	// (0x0001b470) list_single_heading_pane_fp_g

0xc540,	// (0x00017e02) list_single_heading_pane_fp_t1_ParamLimits

0xc540,	// (0x00017e02) list_single_heading_pane_fp_t1

0xc552,	// (0x00017e14) list_single_heading_pane_fp_t2_ParamLimits

0xc552,	// (0x00017e14) list_single_heading_pane_fp_t2

0x0001,

0xfbb5,	// (0x0001b477) list_single_heading_pane_fp_t_ParamLimits

0xfbb5,	// (0x0001b477) list_single_heading_pane_fp_t

0x7a13,	// (0x000132d5) aid_size_cell_fast

0x6a76,	// (0x00012338) soft_indicator_pane_cp1_t1

0x7a50,	// (0x00013312) cell_app_pane_cp2_ParamLimits

0x7a50,	// (0x00013312) cell_app_pane_cp2

0x5ab1,	// (0x00011373) fep_hwr_candidate_drop_down_list_pane

0x5c9f,	// (0x00011561) fep_hwr_candidate_pane_g3_ParamLimits

0x5c9f,	// (0x00011561) fep_hwr_candidate_pane_g3

0x35ea,	// (0x0000eeac) fep_hwr_candidate_pane_g4_ParamLimits

0x35ea,	// (0x0000eeac) fep_hwr_candidate_pane_g4

0x0002,

0xfb24,	// (0x0001b3e6) fep_hwr_candidate_pane_g_ParamLimits

0xfb24,	// (0x0001b3e6) fep_hwr_candidate_pane_g

0xbe6d,	// (0x0001772f) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xbe6d,	// (0x0001772f) fep_vkb_candidate_drop_down_list_pane

0xc295,	// (0x00017b57) fep_vkb_candidate_pane_g3

0xc29d,	// (0x00017b5f) fep_vkb_candidate_pane_g4

0x0002,

0xfb51,	// (0x0001b413) fep_vkb_candidate_pane_g

0x5d0a,	// (0x000115cc) cell_hwr_candidate_pane_g1_ParamLimits

0x5d18,	// (0x000115da) cell_hwr_candidate_pane_g3_ParamLimits

0x5d18,	// (0x000115da) cell_hwr_candidate_pane_g3

0xd66f,	// (0x00018f31) cell_hwr_candidate_pane_g4_ParamLimits

0xd66f,	// (0x00018f31) cell_hwr_candidate_pane_g4

0x0002,

0xfb70,	// (0x0001b432) cell_hwr_candidate_pane_g_ParamLimits

0xfb70,	// (0x0001b432) cell_hwr_candidate_pane_g

0xc2b4,	// (0x00017b76) cell_vkb_candidate_pane_g3_ParamLimits

0xc2b4,	// (0x00017b76) cell_vkb_candidate_pane_g3

0xc2cf,	// (0x00017b91) cell_vkb_candidate_pane_g4_ParamLimits

0xc2cf,	// (0x00017b91) cell_vkb_candidate_pane_g4

0xc568,	// (0x00017e2a) cell_app_pane_cp2_g1_ParamLimits

0xc568,	// (0x00017e2a) cell_app_pane_cp2_g1

0xc586,	// (0x00017e48) cell_app_pane_cp2_g2_ParamLimits

0xc586,	// (0x00017e48) cell_app_pane_cp2_g2

0x0001,

0xfbba,	// (0x0001b47c) cell_app_pane_cp2_g_ParamLimits

0xfbba,	// (0x0001b47c) cell_app_pane_cp2_g

0xc592,	// (0x00017e54) cell_app_pane_cp2_t1_ParamLimits

0xc592,	// (0x00017e54) cell_app_pane_cp2_t1

0x769c,	// (0x00012f5e) grid_highlight_pane_cp1_ParamLimits

0x769c,	// (0x00012f5e) grid_highlight_pane_cp1

0x5d57,	// (0x00011619) cell_hwr_candidate_pane_cp1_ParamLimits

0x5d57,	// (0x00011619) cell_hwr_candidate_pane_cp1

0x5d0a,	// (0x000115cc) fep_hwr_candidate_drop_down_list_pane_g1

0x5d7b,	// (0x0001163d) fep_hwr_candidate_drop_down_list_pane_g2

0x5d88,	// (0x0001164a) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbbf,	// (0x0001b481) fep_hwr_candidate_drop_down_list_pane_g

0x5d95,	// (0x00011657) fep_hwr_candidate_drop_down_list_scroll_pane

0x5d9e,	// (0x00011660) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x5d9e,	// (0x00011660) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x5dab,	// (0x0001166d) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x5dab,	// (0x0001166d) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x5db8,	// (0x0001167a) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x5db8,	// (0x0001167a) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x5dc5,	// (0x00011687) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x5dc5,	// (0x00011687) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x5de0,	// (0x000116a2) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x5de0,	// (0x000116a2) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x5dfb,	// (0x000116bd) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x5dfb,	// (0x000116bd) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x5e16,	// (0x000116d8) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x5e16,	// (0x000116d8) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x5e31,	// (0x000116f3) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x5e31,	// (0x000116f3) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc6,	// (0x0001b488) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc6,	// (0x0001b488) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc5a4,	// (0x00017e66) cell_vkb_candidate_pane_cp1_ParamLimits

0xc5a4,	// (0x00017e66) cell_vkb_candidate_pane_cp1

0xbf73,	// (0x00017835) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xbf73,	// (0x00017835) fep_vkb_candidate_drop_down_list_pane_g1

0xc5ca,	// (0x00017e8c) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc5ca,	// (0x00017e8c) fep_vkb_candidate_drop_down_list_pane_g2

0xc5d7,	// (0x00017e99) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc5d7,	// (0x00017e99) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbd7,	// (0x0001b499) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbd7,	// (0x0001b499) fep_vkb_candidate_drop_down_list_pane_g

0xc5e4,	// (0x00017ea6) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc5e4,	// (0x00017ea6) fep_vkb_candidate_drop_down_list_scroll_pane

0xc5f1,	// (0x00017eb3) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc5f1,	// (0x00017eb3) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc5fe,	// (0x00017ec0) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc5fe,	// (0x00017ec0) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc60a,	// (0x00017ecc) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc60a,	// (0x00017ecc) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc616,	// (0x00017ed8) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc616,	// (0x00017ed8) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc637,	// (0x00017ef9) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc637,	// (0x00017ef9) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc658,	// (0x00017f1a) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc658,	// (0x00017f1a) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc679,	// (0x00017f3b) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc679,	// (0x00017f3b) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc69a,	// (0x00017f5c) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc69a,	// (0x00017f5c) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbde,	// (0x0001b4a0) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbde,	// (0x0001b4a0) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x6796,	// (0x00012058) title_pane_g1_ParamLimits

0x67a3,	// (0x00012065) title_pane_g2_ParamLimits

0xf566,	// (0x0001ae28) title_pane_g_ParamLimits

0x7e5e,	// (0x00013720) aid_call2_pane

0x7e66,	// (0x00013728) aid_call_pane

0x7e6e,	// (0x00013730) popup_clock_analogue_window_g1

0x7e6e,	// (0x00013730) popup_clock_analogue_window_g2

0x5168,	// (0x00010a2a) popup_clock_analogue_window_g3

0x5171,	// (0x00010a33) popup_clock_analogue_window_g4

0x3f18,	// (0x0000f7da) popup_clock_analogue_window_g5

0x0004,

0xf70b,	// (0x0001afcd) popup_clock_analogue_window_g

0x5179,	// (0x00010a3b) popup_clock_analogue_window_t1

0x5187,	// (0x00010a49) clock_digital_number_pane_ParamLimits

0x5187,	// (0x00010a49) clock_digital_number_pane

0x5193,	// (0x00010a55) clock_digital_number_pane_cp02_ParamLimits

0x5193,	// (0x00010a55) clock_digital_number_pane_cp02

0x519f,	// (0x00010a61) clock_digital_number_pane_cp03_ParamLimits

0x519f,	// (0x00010a61) clock_digital_number_pane_cp03

0x51ab,	// (0x00010a6d) clock_digital_number_pane_cp04_ParamLimits

0x51ab,	// (0x00010a6d) clock_digital_number_pane_cp04

0x51b7,	// (0x00010a79) clock_digital_separator_pane_ParamLimits

0x51b7,	// (0x00010a79) clock_digital_separator_pane

0x51c3,	// (0x00010a85) popup_clock_digital_window_t1_ParamLimits

0x51c3,	// (0x00010a85) popup_clock_digital_window_t1

0x3f18,	// (0x0000f7da) clock_digital_number_pane_g1

0x3f18,	// (0x0000f7da) clock_digital_number_pane_g2

0x0001,

0xf716,	// (0x0001afd8) clock_digital_number_pane_g

0x3f18,	// (0x0000f7da) clock_digital_separator_pane_g1

0x3f18,	// (0x0000f7da) clock_digital_separator_pane_g2

0x0001,

0xf716,	// (0x0001afd8) clock_digital_separator_pane_g

0x8edc,	// (0x0001479e) aid_fill_nsta_ParamLimits

0x902c,	// (0x000148ee) indicator_nsta_pane_ParamLimits

0x91bd,	// (0x00014a7f) popup_clock_analogue_window

0x91bd,	// (0x00014a7f) popup_clock_digital_window

0x6860,	// (0x00012122) grid_indicator_nsta_pane_ParamLimits

0xb741,	// (0x00017003) clock_nsta_pane_t2

0x0001,

0xfaa4,	// (0x0001b366) clock_nsta_pane_t

0x512c,	// (0x000109ee) aid_size_max_handle

0x5136,	// (0x000109f8) aid_size_min_handle

0x8513,	// (0x00013dd5) editor_scroll_pane

0xc6b5,	// (0x00017f77) ex_editor_pane

0x7980,	// (0x00013242) scroll_pane_cp13

0x70a0,	// (0x00012962) scroll_pane_cp14

0x7e9d,	// (0x0001375f) scroll_pane_cp36

0x7ecb,	// (0x0001378d) list_single_graphic_hl_pane_cp2_ParamLimits

0x7ecb,	// (0x0001378d) list_single_graphic_hl_pane_cp2

0xab1d,	// (0x000163df) list_single_graphic_hl_pane_ParamLimits

0xab1d,	// (0x000163df) list_single_graphic_hl_pane

0xc6bd,	// (0x00017f7f) aid_size_min_hl_cp1

0xc6c6,	// (0x00017f88) list_highlight_pane_cp34_ParamLimits

0xc6c6,	// (0x00017f88) list_highlight_pane_cp34

0xc6d7,	// (0x00017f99) list_single_graphic_hl_pane_g1_ParamLimits

0xc6d7,	// (0x00017f99) list_single_graphic_hl_pane_g1

0xc6e4,	// (0x00017fa6) list_single_graphic_hl_pane_g2_ParamLimits

0xc6e4,	// (0x00017fa6) list_single_graphic_hl_pane_g2

0xc6e4,	// (0x00017fa6) list_single_graphic_hl_pane_g3_ParamLimits

0xc6e4,	// (0x00017fa6) list_single_graphic_hl_pane_g3

0xb066,	// (0x00016928) list_single_graphic_hl_pane_g4_ParamLimits

0xb066,	// (0x00016928) list_single_graphic_hl_pane_g4

0xc6f0,	// (0x00017fb2) list_single_graphic_hl_pane_g5_ParamLimits

0xc6f0,	// (0x00017fb2) list_single_graphic_hl_pane_g5

0x0004,

0xfbef,	// (0x0001b4b1) list_single_graphic_hl_pane_g_ParamLimits

0xfbef,	// (0x0001b4b1) list_single_graphic_hl_pane_g

0xc704,	// (0x00017fc6) list_single_graphic_hl_pane_t1_ParamLimits

0xc704,	// (0x00017fc6) list_single_graphic_hl_pane_t1

0xc71a,	// (0x00017fdc) aid_size_min_hl_cp2

0xc723,	// (0x00017fe5) list_highlight_pane_cp34_cp2_ParamLimits

0xc723,	// (0x00017fe5) list_highlight_pane_cp34_cp2

0xc6d7,	// (0x00017f99) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc6d7,	// (0x00017f99) list_single_graphic_hl_pane_g1_cp2

0xc730,	// (0x00017ff2) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc730,	// (0x00017ff2) list_single_graphic_hl_pane_g2_cp2

0xc73c,	// (0x00017ffe) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc73c,	// (0x00017ffe) list_single_graphic_hl_pane_g3_cp2

0x70b4,	// (0x00012976) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x70b4,	// (0x00012976) list_single_graphic_hl_pane_g4_cp2

0xc74a,	// (0x0001800c) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc74a,	// (0x0001800c) list_single_graphic_hl_pane_g5_cp2

0x547c,	// (0x00010d3e) control_pane_g4_ParamLimits

0x547c,	// (0x00010d3e) control_pane_g4

0x88a1,	// (0x00014163) bg_popup_sub_pane_cp10_ParamLimits

0xbcf3,	// (0x000175b5) list_choice_list_pane_ParamLimits

0xbd02,	// (0x000175c4) scroll_pane_cp23

0x6b04,	// (0x000123c6) bg_popup_preview_window_pane_cp02_ParamLimits

0xc320,	// (0x00017be2) list_preview_fixed_pane_ParamLimits

0xc336,	// (0x00017bf8) list_preview_fixed_pane_cp_ParamLimits

0xc336,	// (0x00017bf8) list_preview_fixed_pane_cp

0xc342,	// (0x00017c04) popup_preview_fixed_window_g1_ParamLimits

0xc342,	// (0x00017c04) popup_preview_fixed_window_g1

0xc34e,	// (0x00017c10) popup_preview_fixed_window_g2_ParamLimits

0xc34e,	// (0x00017c10) popup_preview_fixed_window_g2

0x0002,

0xfb77,	// (0x0001b439) popup_preview_fixed_window_g_ParamLimits

0xfb77,	// (0x0001b439) popup_preview_fixed_window_g

0x509e,	// (0x00010960) aid_navi_side_left_pane_ParamLimits

0x50b3,	// (0x00010975) aid_navi_side_right_pane_ParamLimits

0x50cb,	// (0x0001098d) navi_icon_pane_stacon_ParamLimits

0x50df,	// (0x000109a1) navi_navi_pane_stacon_ParamLimits

0x50cb,	// (0x0001098d) navi_text_pane_stacon_ParamLimits

0x3f0e,	// (0x0000f7d0) main_text_info_pane

0xc774,	// (0x00018036) listscroll_text_info_pane

0xc77c,	// (0x0001803e) list_text_info_pane_ParamLimits

0xc77c,	// (0x0001803e) list_text_info_pane

0xc78b,	// (0x0001804d) scroll_pane_cp24_ParamLimits

0xc78b,	// (0x0001804d) scroll_pane_cp24

0xc7a9,	// (0x0001806b) list_text_info_pane_t1_ParamLimits

0xc7a9,	// (0x0001806b) list_text_info_pane_t1

0x88ef,	// (0x000141b1) popup_fast_swap2_window_ParamLimits

0x88ef,	// (0x000141b1) popup_fast_swap2_window

0xc7ce,	// (0x00018090) aid_size_cell_fast2

0x3f0e,	// (0x0000f7d0) bg_popup_window_pane_cp17

0x98be,	// (0x00015180) heading_pane_cp2

0x6d64,	// (0x00012626) listscroll_fast2_pane

0xc7d8,	// (0x0001809a) grid_fast2_pane

0xc7e2,	// (0x000180a4) listscroll_fast2_pane_g1

0xc7ec,	// (0x000180ae) listscroll_fast2_pane_g2

0x0001,

0xfbfa,	// (0x0001b4bc) listscroll_fast2_pane_g

0x7980,	// (0x00013242) scroll_pane_cp26

0xc7f6,	// (0x000180b8) cell_fast2_pane_ParamLimits

0xc7f6,	// (0x000180b8) cell_fast2_pane

0xc80d,	// (0x000180cf) cell_fast2_pane_g1

0xc816,	// (0x000180d8) cell_fast2_pane_g2

0xc81f,	// (0x000180e1) cell_fast2_pane_g3

0x0002,

0xfbff,	// (0x0001b4c1) cell_fast2_pane_g

0x6e5d,	// (0x0001271f) grid_highlight_pane_cp9

0x6e72,	// (0x00012734) main_eswt_pane_ParamLimits

0x6e72,	// (0x00012734) main_eswt_pane

0xc7a0,	// (0x00018062) list_single_text_info_pane

0xc827,	// (0x000180e9) eswt_ctrl_button_pane

0xc827,	// (0x000180e9) eswt_ctrl_canvas_pane

0xc82f,	// (0x000180f1) eswt_ctrl_combo_pane

0xc827,	// (0x000180e9) eswt_ctrl_default_pane

0xc827,	// (0x000180e9) eswt_ctrl_label_pane

0xc837,	// (0x000180f9) eswt_ctrl_wait_pane

0xc83f,	// (0x00018101) eswt_shell_pane

0x3f0e,	// (0x0000f7d0) listscroll_eswt_app_pane

0xc85f,	// (0x00018121) popup_eswt_tasktip_window_ParamLimits

0xc85f,	// (0x00018121) popup_eswt_tasktip_window

0x9530,	// (0x00014df2) bg_popup_window_pane_cp18

0xc870,	// (0x00018132) eswt_control_pane_g1_ParamLimits

0xc870,	// (0x00018132) eswt_control_pane_g1

0xc87d,	// (0x0001813f) eswt_control_pane_g2_ParamLimits

0xc87d,	// (0x0001813f) eswt_control_pane_g2

0xc88a,	// (0x0001814c) eswt_control_pane_g3_ParamLimits

0xc88a,	// (0x0001814c) eswt_control_pane_g3

0xc897,	// (0x00018159) eswt_control_pane_g4_ParamLimits

0xc897,	// (0x00018159) eswt_control_pane_g4

0x0003,

0xfc06,	// (0x0001b4c8) eswt_control_pane_g_ParamLimits

0xfc06,	// (0x0001b4c8) eswt_control_pane_g

0x769c,	// (0x00012f5e) bg_button_pane_ParamLimits

0x769c,	// (0x00012f5e) bg_button_pane

0x6e72,	// (0x00012734) common_borders_pane_copy2_ParamLimits

0x6e72,	// (0x00012734) common_borders_pane_copy2

0xc8a4,	// (0x00018166) control_button_pane_g1_ParamLimits

0xc8a4,	// (0x00018166) control_button_pane_g1

0xc8b0,	// (0x00018172) control_button_pane_g2_ParamLimits

0xc8b0,	// (0x00018172) control_button_pane_g2

0xc8bc,	// (0x0001817e) control_button_pane_g3_ParamLimits

0xc8bc,	// (0x0001817e) control_button_pane_g3

0x0002,

0xfc0f,	// (0x0001b4d1) control_button_pane_g_ParamLimits

0xfc0f,	// (0x0001b4d1) control_button_pane_g

0xc8d0,	// (0x00018192) control_button_pane_t1

0xc8de,	// (0x000181a0) control_button_pane_t2

0x0001,

0xfc16,	// (0x0001b4d8) control_button_pane_t

0x9414,	// (0x00014cd6) bg_button_pane_g1

0x9424,	// (0x00014ce6) bg_button_pane_g2

0x941c,	// (0x00014cde) bg_button_pane_g3

0x9434,	// (0x00014cf6) bg_button_pane_g4

0x942c,	// (0x00014cee) bg_button_pane_g5

0x943c,	// (0x00014cfe) bg_button_pane_g6

0x9444,	// (0x00014d06) bg_button_pane_g7

0x9454,	// (0x00014d16) bg_button_pane_g8

0x944c,	// (0x00014d0e) bg_button_pane_g9

0x0008,

0xf872,	// (0x0001b134) bg_button_pane_g

0xbcae,	// (0x00017570) common_borders_pane_ParamLimits

0xbcae,	// (0x00017570) common_borders_pane

0xc870,	// (0x00018132) eswt_control_pane_g1_copy1_ParamLimits

0xc870,	// (0x00018132) eswt_control_pane_g1_copy1

0xc87d,	// (0x0001813f) eswt_control_pane_g2_copy1_ParamLimits

0xc87d,	// (0x0001813f) eswt_control_pane_g2_copy1

0xc88a,	// (0x0001814c) eswt_control_pane_g3_copy1_ParamLimits

0xc88a,	// (0x0001814c) eswt_control_pane_g3_copy1

0xc897,	// (0x00018159) eswt_control_pane_g4_copy1_ParamLimits

0xc897,	// (0x00018159) eswt_control_pane_g4_copy1

0xbce9,	// (0x000175ab) bg_eswt_ctrl_canvas_pane_g1

0xbcae,	// (0x00017570) common_borders_pane_cp2_ParamLimits

0xbcae,	// (0x00017570) common_borders_pane_cp2

0xbcae,	// (0x00017570) common_borders_pane_cp3_ParamLimits

0xbcae,	// (0x00017570) common_borders_pane_cp3

0xc8ec,	// (0x000181ae) separator_horizontal_pane

0xc8f4,	// (0x000181b6) separator_vertical_pane

0xc870,	// (0x00018132) eswt_control_pane_g1_copy2_ParamLimits

0xc870,	// (0x00018132) eswt_control_pane_g1_copy2

0xc87d,	// (0x0001813f) eswt_control_pane_g2_copy2_ParamLimits

0xc87d,	// (0x0001813f) eswt_control_pane_g2_copy2

0xc88a,	// (0x0001814c) eswt_control_pane_g3_copy2_ParamLimits

0xc88a,	// (0x0001814c) eswt_control_pane_g3_copy2

0xc897,	// (0x00018159) eswt_control_pane_g4_copy2_ParamLimits

0xc897,	// (0x00018159) eswt_control_pane_g4_copy2

0x3f0e,	// (0x0000f7d0) common_borders_pane_cp4

0xc8fd,	// (0x000181bf) separator_horizontal_pane_g1

0xc906,	// (0x000181c8) separator_horizontal_pane_g2

0xc90f,	// (0x000181d1) separator_horizontal_pane_g3

0x0002,

0xfc1b,	// (0x0001b4dd) separator_horizontal_pane_g

0xc870,	// (0x00018132) eswt_control_pane_g1_copy3_ParamLimits

0xc870,	// (0x00018132) eswt_control_pane_g1_copy3

0xc87d,	// (0x0001813f) eswt_control_pane_g2_copy3_ParamLimits

0xc87d,	// (0x0001813f) eswt_control_pane_g2_copy3

0xc88a,	// (0x0001814c) eswt_control_pane_g3_copy3_ParamLimits

0xc88a,	// (0x0001814c) eswt_control_pane_g3_copy3

0xc897,	// (0x00018159) eswt_control_pane_g4_copy3_ParamLimits

0xc897,	// (0x00018159) eswt_control_pane_g4_copy3

0x3f0e,	// (0x0000f7d0) common_borders_pane_cp5

0xc918,	// (0x000181da) separator_vertical_pane_g1

0xc921,	// (0x000181e3) separator_vertical_pane_g2

0xc92a,	// (0x000181ec) separator_vertical_pane_g3

0x0002,

0xfc22,	// (0x0001b4e4) separator_vertical_pane_g

0xc870,	// (0x00018132) eswt_control_pane_g1_copy4_ParamLimits

0xc870,	// (0x00018132) eswt_control_pane_g1_copy4

0xc87d,	// (0x0001813f) eswt_control_pane_g2_copy4_ParamLimits

0xc87d,	// (0x0001813f) eswt_control_pane_g2_copy4

0xc88a,	// (0x0001814c) eswt_control_pane_g3_copy4_ParamLimits

0xc88a,	// (0x0001814c) eswt_control_pane_g3_copy4

0xc897,	// (0x00018159) eswt_control_pane_g4_copy4_ParamLimits

0xc897,	// (0x00018159) eswt_control_pane_g4_copy4

0xc933,	// (0x000181f5) eswt_ctrl_combo_button_pane

0xc93b,	// (0x000181fd) eswt_ctrl_input_pane

0xc943,	// (0x00018205) popup_choice_list_window_cp70

0xc94b,	// (0x0001820d) eswt_ctrl_input_pane_t1

0x3f0e,	// (0x0000f7d0) input_focus_pane_cp70

0xbcae,	// (0x00017570) bg_button_pane_cp70_ParamLimits

0xbcae,	// (0x00017570) bg_button_pane_cp70

0xc959,	// (0x0001821b) eswt_ctrl_combo_button_pane_g1

0xc961,	// (0x00018223) wait_bar_pane_cp70

0x9530,	// (0x00014df2) bg_popup_window_pane_cp70_ParamLimits

0x9530,	// (0x00014df2) bg_popup_window_pane_cp70

0xc969,	// (0x0001822b) popup_eswt_tasktip_window_t1

0xc97f,	// (0x00018241) wait_bar_pane_cp71_ParamLimits

0xc97f,	// (0x00018241) wait_bar_pane_cp71

0xc98b,	// (0x0001824d) grid_eswt_app_pane

0x7ca2,	// (0x00013564) scroll_pane_cp70

0xc994,	// (0x00018256) cell_eswt_app_pane_ParamLimits

0xc994,	// (0x00018256) cell_eswt_app_pane

0xc9c6,	// (0x00018288) cell_eswt_app_pane_g1_ParamLimits

0xc9c6,	// (0x00018288) cell_eswt_app_pane_g1

0xc9f5,	// (0x000182b7) cell_eswt_app_pane_g2_ParamLimits

0xc9f5,	// (0x000182b7) cell_eswt_app_pane_g2

0x0001,

0xfc29,	// (0x0001b4eb) cell_eswt_app_pane_g_ParamLimits

0xfc29,	// (0x0001b4eb) cell_eswt_app_pane_g

0xca1e,	// (0x000182e0) cell_eswt_app_pane_t1_ParamLimits

0xca1e,	// (0x000182e0) cell_eswt_app_pane_t1

0xca50,	// (0x00018312) grid_highlight_pane_cp70_ParamLimits

0xca50,	// (0x00018312) grid_highlight_pane_cp70

0xa9df,	// (0x000162a1) set_content_pane_g1

0x87c3,	// (0x00014085) status_small_volume_pane

0x5e4c,	// (0x0001170e) status_small_volume_pane_g1

0x5e54,	// (0x00011716) volume_small2_pane

0x5e5d,	// (0x0001171f) volume_small2_pane_g1

0x5e66,	// (0x00011728) volume_small2_pane_g2

0x5e6f,	// (0x00011731) volume_small2_pane_g3

0x5e78,	// (0x0001173a) volume_small2_pane_g4

0x5e81,	// (0x00011743) volume_small2_pane_g5

0x5e8a,	// (0x0001174c) volume_small2_pane_g6

0x5e93,	// (0x00011755) volume_small2_pane_g7

0x5e9c,	// (0x0001175e) volume_small2_pane_g8

0x5ea5,	// (0x00011767) volume_small2_pane_g9

0x5eae,	// (0x00011770) volume_small2_pane_g10

0x0009,

0xfc2e,	// (0x0001b4f0) volume_small2_pane_g

0xc0c7,	// (0x00017989) fep_vkb_top_text_pane_g1_ParamLimits

0xc0e2,	// (0x000179a4) fep_vkb_top_text_pane_t1_ParamLimits

0xc35a,	// (0x00017c1c) popup_preview_fixed_window_g3_ParamLimits

0xc35a,	// (0x00017c1c) popup_preview_fixed_window_g3

0x8e00,	// (0x000146c2) popup_toolbar_trans_pane

0xa884,	// (0x00016146) aid_height_set_list_ParamLimits

0xa895,	// (0x00016157) aid_size_parent_ParamLimits

0x88a1,	// (0x00014163) list_highlight_pane_cp2_ParamLimits

0xa9df,	// (0x000162a1) set_content_pane_g1_ParamLimits

0xab31,	// (0x000163f3) list_single_image_pane_ParamLimits

0xab31,	// (0x000163f3) list_single_image_pane

0xca5c,	// (0x0001831e) aid_size_cell_image_ParamLimits

0xca5c,	// (0x0001831e) aid_size_cell_image

0xca69,	// (0x0001832b) grid_single_image_pane_ParamLimits

0xca69,	// (0x0001832b) grid_single_image_pane

0x76c2,	// (0x00012f84) list_single_image_pane_g1_ParamLimits

0x76c2,	// (0x00012f84) list_single_image_pane_g1

0x76ce,	// (0x00012f90) list_single_image_pane_g2_ParamLimits

0x76ce,	// (0x00012f90) list_single_image_pane_g2

0x0001,

0xfc43,	// (0x0001b505) list_single_image_pane_g_ParamLimits

0xfc43,	// (0x0001b505) list_single_image_pane_g

0xca77,	// (0x00018339) list_single_image_pane_t1_ParamLimits

0xca77,	// (0x00018339) list_single_image_pane_t1

0xca8d,	// (0x0001834f) cell_image_list_pane_ParamLimits

0xca8d,	// (0x0001834f) cell_image_list_pane

0xcaa3,	// (0x00018365) cell_image_list_pane_g1

0xcaac,	// (0x0001836e) cell_image_list_pane_g2

0x0001,

0xfc48,	// (0x0001b50a) cell_image_list_pane_g

0xcab5,	// (0x00018377) aid_size_cell_tb_trans_pane

0x769c,	// (0x00012f5e) bg_tb_trans_pane

0xcac7,	// (0x00018389) grid_tb_trans_pane

0x9414,	// (0x00014cd6) bg_tb_trans_pane_g1

0x9424,	// (0x00014ce6) bg_tb_trans_pane_g2

0x941c,	// (0x00014cde) bg_tb_trans_pane_g3

0x9434,	// (0x00014cf6) bg_tb_trans_pane_g4

0x942c,	// (0x00014cee) bg_tb_trans_pane_g5

0x9454,	// (0x00014d16) bg_tb_trans_pane_g6

0x944c,	// (0x00014d0e) bg_tb_trans_pane_g7

0x943c,	// (0x00014cfe) bg_tb_trans_pane_g8

0x9444,	// (0x00014d06) bg_tb_trans_pane_g9

0x0008,

0xfc4d,	// (0x0001b50f) bg_tb_trans_pane_g

0xcadb,	// (0x0001839d) cell_toolbar_trans_pane_ParamLimits

0xcadb,	// (0x0001839d) cell_toolbar_trans_pane

0xbce9,	// (0x000175ab) cell_toolbar_trans_pane_g1

0xb93d,	// (0x000171ff) list_form2_midp_pane_t1

0xb94b,	// (0x0001720d) list_form2_midp_pane_t2

0x0001,

0xfaea,	// (0x0001b3ac) list_form2_midp_pane_t

0xb959,	// (0x0001721b) scroll_pane_cp51_ParamLimits

0xbb4b,	// (0x0001740d) form2_midp_wait_pane_g1

0xbb54,	// (0x00017416) form2_midp_wait_pane_g2

0xbb5d,	// (0x0001741f) form2_midp_wait_pane_g3

0x0002,

0xfaff,	// (0x0001b3c1) form2_midp_wait_pane_g

0x6860,	// (0x00012122) list_highlight_pane_cp21_ParamLimits

0xbb8e,	// (0x00017450) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbb9d,	// (0x0001745f) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xaad6,	// (0x00016398) list_single_2graphic_im_pane_ParamLimits

0xaad6,	// (0x00016398) list_single_2graphic_im_pane

0xcb01,	// (0x000183c3) list_single_2graphic_im_pane_g1_ParamLimits

0xcb01,	// (0x000183c3) list_single_2graphic_im_pane_g1

0xcb12,	// (0x000183d4) list_single_2graphic_im_pane_g2_ParamLimits

0xcb12,	// (0x000183d4) list_single_2graphic_im_pane_g2

0xcb1e,	// (0x000183e0) list_single_2graphic_im_pane_g3_ParamLimits

0xcb1e,	// (0x000183e0) list_single_2graphic_im_pane_g3

0x0003,

0xfc60,	// (0x0001b522) list_single_2graphic_im_pane_g_ParamLimits

0xfc60,	// (0x0001b522) list_single_2graphic_im_pane_g

0xcb3e,	// (0x00018400) list_single_2graphic_im_pane_t1_ParamLimits

0xcb3e,	// (0x00018400) list_single_2graphic_im_pane_t1

0xc366,	// (0x00017c28) list_single_graphic_2heading_pane_fp_ParamLimits

0xc366,	// (0x00017c28) list_single_graphic_2heading_pane_fp

0xc3ce,	// (0x00017c90) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xc3ce,	// (0x00017c90) list_single_graphic_2heading_pane_fp_g1

0xc37f,	// (0x00017c41) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc37f,	// (0x00017c41) list_single_graphic_2heading_pane_fp_g2

0xc38b,	// (0x00017c4d) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xc38b,	// (0x00017c4d) list_single_graphic_2heading_pane_fp_g3

0xc397,	// (0x00017c59) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xc397,	// (0x00017c59) list_single_graphic_2heading_pane_fp_g4

0xc3ab,	// (0x00017c6d) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc3ab,	// (0x00017c6d) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb87,	// (0x0001b449) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb87,	// (0x0001b449) list_single_graphic_2heading_pane_fp_g

0xcb6f,	// (0x00018431) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xcb6f,	// (0x00018431) list_single_graphic_2heading_pane_fp_t1

0xc406,	// (0x00017cc8) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xc406,	// (0x00017cc8) list_single_graphic_2heading_pane_fp_t2

0xcb85,	// (0x00018447) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xcb85,	// (0x00018447) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc69,	// (0x0001b52b) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc69,	// (0x0001b52b) list_single_graphic_2heading_pane_fp_t

0xbd89,	// (0x0001764b) fep_hwr_write_pane_g5_ParamLimits

0xbd89,	// (0x0001764b) fep_hwr_write_pane_g5

0xbd95,	// (0x00017657) fep_hwr_write_pane_g6_ParamLimits

0xbd95,	// (0x00017657) fep_hwr_write_pane_g6

0xc83f,	// (0x00018101) eswt_shell_pane_ParamLimits

0x9530,	// (0x00014df2) bg_popup_window_pane_cp18_ParamLimits

0xa7b3,	// (0x00016075) heading_pane_cp70

0xc969,	// (0x0001822b) popup_eswt_tasktip_window_t1_ParamLimits

0x8f33,	// (0x000147f5) aid_touch_tab_arrow_left

0x8f42,	// (0x00014804) aid_touch_tab_arrow_right

0x67b4,	// (0x00012076) title_pane_g3_ParamLimits

0x67b4,	// (0x00012076) title_pane_g3

0x756b,	// (0x00012e2d) set_value_pane_g1

0x8e00,	// (0x000146c2) popup_toolbar_trans_pane_ParamLimits

0xcab5,	// (0x00018377) aid_size_cell_tb_trans_pane_ParamLimits

0x769c,	// (0x00012f5e) bg_tb_trans_pane_ParamLimits

0xcac7,	// (0x00018389) grid_tb_trans_pane_ParamLimits

0x6b04,	// (0x000123c6) cont_note_pane_ParamLimits

0x6b04,	// (0x000123c6) cont_note_pane

0x6e72,	// (0x00012734) cont_snote2_single_text_pane_ParamLimits

0x6e72,	// (0x00012734) cont_snote2_single_text_pane

0x6e72,	// (0x00012734) cont_snote2_single_graphic_pane_ParamLimits

0x6e72,	// (0x00012734) cont_snote2_single_graphic_pane

0x9ada,	// (0x0001539c) cont_note_wait_pane_ParamLimits

0x9ada,	// (0x0001539c) cont_note_wait_pane

0x9ada,	// (0x0001539c) cont_note_image_pane_ParamLimits

0x9ada,	// (0x0001539c) cont_note_image_pane

0xcb9b,	// (0x0001845d) popup_note2_window_g1_ParamLimits

0xcb9b,	// (0x0001845d) popup_note2_window_g1

0xcbcc,	// (0x0001848e) popup_note2_window_t1_ParamLimits

0xcbcc,	// (0x0001848e) popup_note2_window_t1

0xcc11,	// (0x000184d3) popup_note2_window_t2_ParamLimits

0xcc11,	// (0x000184d3) popup_note2_window_t2

0xcc56,	// (0x00018518) popup_note2_window_t3_ParamLimits

0xcc56,	// (0x00018518) popup_note2_window_t3

0xcc9b,	// (0x0001855d) popup_note2_window_t4_ParamLimits

0xcc9b,	// (0x0001855d) popup_note2_window_t4

0x6b88,	// (0x0001244a) popup_note2_window_t5_ParamLimits

0x6b88,	// (0x0001244a) popup_note2_window_t5

0x0004,

0xfc75,	// (0x0001b537) popup_note2_window_t_ParamLimits

0xfc75,	// (0x0001b537) popup_note2_window_t

0xccca,	// (0x0001858c) popup_note2_image_window_g1_ParamLimits

0xccca,	// (0x0001858c) popup_note2_image_window_g1

0xccd6,	// (0x00018598) popup_note2_image_window_g2_ParamLimits

0xccd6,	// (0x00018598) popup_note2_image_window_g2

0x0001,

0xfc80,	// (0x0001b542) popup_note2_image_window_g_ParamLimits

0xfc80,	// (0x0001b542) popup_note2_image_window_g

0xcce8,	// (0x000185aa) popup_note2_image_window_t1_ParamLimits

0xcce8,	// (0x000185aa) popup_note2_image_window_t1

0xcd00,	// (0x000185c2) popup_note2_image_window_t2_ParamLimits

0xcd00,	// (0x000185c2) popup_note2_image_window_t2

0xcd18,	// (0x000185da) popup_note2_image_window_t3_ParamLimits

0xcd18,	// (0x000185da) popup_note2_image_window_t3

0x0002,

0xfc85,	// (0x0001b547) popup_note2_image_window_t_ParamLimits

0xfc85,	// (0x0001b547) popup_note2_image_window_t

0x9ae8,	// (0x000153aa) popup_note2_wait_window_g1_ParamLimits

0x9ae8,	// (0x000153aa) popup_note2_wait_window_g1

0xcd34,	// (0x000185f6) popup_note2_wait_window_g2_ParamLimits

0xcd34,	// (0x000185f6) popup_note2_wait_window_g2

0x9b00,	// (0x000153c2) popup_note2_wait_window_g3_ParamLimits

0x9b00,	// (0x000153c2) popup_note2_wait_window_g3

0x0002,

0xfc8c,	// (0x0001b54e) popup_note2_wait_window_g_ParamLimits

0xfc8c,	// (0x0001b54e) popup_note2_wait_window_g

0xcd40,	// (0x00018602) popup_note2_wait_window_t1_ParamLimits

0xcd40,	// (0x00018602) popup_note2_wait_window_t1

0xcd5e,	// (0x00018620) popup_note2_wait_window_t2_ParamLimits

0xcd5e,	// (0x00018620) popup_note2_wait_window_t2

0xcd7c,	// (0x0001863e) popup_note2_wait_window_t3_ParamLimits

0xcd7c,	// (0x0001863e) popup_note2_wait_window_t3

0xcd8e,	// (0x00018650) popup_note2_wait_window_t4_ParamLimits

0xcd8e,	// (0x00018650) popup_note2_wait_window_t4

0x0003,

0xfc93,	// (0x0001b555) popup_note2_wait_window_t_ParamLimits

0xfc93,	// (0x0001b555) popup_note2_wait_window_t

0xcda0,	// (0x00018662) wait_bar2_pane_ParamLimits

0xcda0,	// (0x00018662) wait_bar2_pane

0xcdb8,	// (0x0001867a) popup_snote2_single_text_window_g1_ParamLimits

0xcdb8,	// (0x0001867a) popup_snote2_single_text_window_g1

0xcde0,	// (0x000186a2) popup_snote2_single_text_window_t1_ParamLimits

0xcde0,	// (0x000186a2) popup_snote2_single_text_window_t1

0xce2c,	// (0x000186ee) popup_snote2_single_text_window_t2_ParamLimits

0xce2c,	// (0x000186ee) popup_snote2_single_text_window_t2

0xce78,	// (0x0001873a) popup_snote2_single_text_window_t3_ParamLimits

0xce78,	// (0x0001873a) popup_snote2_single_text_window_t3

0xceb9,	// (0x0001877b) popup_snote2_single_text_window_t4_ParamLimits

0xceb9,	// (0x0001877b) popup_snote2_single_text_window_t4

0xceef,	// (0x000187b1) popup_snote2_single_text_window_t5_ParamLimits

0xceef,	// (0x000187b1) popup_snote2_single_text_window_t5

0x0004,

0xfc9c,	// (0x0001b55e) popup_snote2_single_text_window_t_ParamLimits

0xfc9c,	// (0x0001b55e) popup_snote2_single_text_window_t

0xcf1a,	// (0x000187dc) popup_snote2_single_graphic_window_g1_ParamLimits

0xcf1a,	// (0x000187dc) popup_snote2_single_graphic_window_g1

0xcf42,	// (0x00018804) popup_snote2_single_graphic_window_g2_ParamLimits

0xcf42,	// (0x00018804) popup_snote2_single_graphic_window_g2

0x0001,

0xfca7,	// (0x0001b569) popup_snote2_single_graphic_window_g_ParamLimits

0xfca7,	// (0x0001b569) popup_snote2_single_graphic_window_g

0xcf6a,	// (0x0001882c) popup_snote2_single_graphic_window_t1_ParamLimits

0xcf6a,	// (0x0001882c) popup_snote2_single_graphic_window_t1

0xcfb6,	// (0x00018878) popup_snote2_single_graphic_window_t2_ParamLimits

0xcfb6,	// (0x00018878) popup_snote2_single_graphic_window_t2

0xce78,	// (0x0001873a) popup_snote2_single_graphic_window_t3_ParamLimits

0xce78,	// (0x0001873a) popup_snote2_single_graphic_window_t3

0xceb9,	// (0x0001877b) popup_snote2_single_graphic_window_t4_ParamLimits

0xceb9,	// (0x0001877b) popup_snote2_single_graphic_window_t4

0xceef,	// (0x000187b1) popup_snote2_single_graphic_window_t5_ParamLimits

0xceef,	// (0x000187b1) popup_snote2_single_graphic_window_t5

0x0004,

0xfcac,	// (0x0001b56e) popup_snote2_single_graphic_window_t_ParamLimits

0xfcac,	// (0x0001b56e) popup_snote2_single_graphic_window_t

0xb803,	// (0x000170c5) clock_nsta_pane_cp2_t1

0xb803,	// (0x000170c5) clock_nsta_pane_cp2_t2

0x0001,

0xfac0,	// (0x0001b382) clock_nsta_pane_cp2_t

0x76b6,	// (0x00012f78) form_field_data_wide_pane_g1_ParamLimits

0x76c2,	// (0x00012f84) form_field_data_wide_pane_g2_ParamLimits

0x76c2,	// (0x00012f84) form_field_data_wide_pane_g2

0x76ce,	// (0x00012f90) form_field_data_wide_pane_g3_ParamLimits

0x76ce,	// (0x00012f90) form_field_data_wide_pane_g3

0x0002,

0xf68e,	// (0x0001af50) form_field_data_wide_pane_g_ParamLimits

0xf68e,	// (0x0001af50) form_field_data_wide_pane_g

0xb6dd,	// (0x00016f9f) grid_touch_3_pane_ParamLimits

0xb6dd,	// (0x00016f9f) grid_touch_3_pane

0xd002,	// (0x000188c4) cell_touch_3_pane_ParamLimits

0xd002,	// (0x000188c4) cell_touch_3_pane

0xbce9,	// (0x000175ab) cell_touch_3_pane_g1

0xbce9,	// (0x000175ab) cell_touch_3_pane_g2

0x0001,

0xfb45,	// (0x0001b407) cell_touch_3_pane_g

0x6bba,	// (0x0001247c) cont_query_data_pane

0x6bc2,	// (0x00012484) cont_query_data_pane_cp1

0xd035,	// (0x000188f7) button_value_adjust_pane_cp7

0xd03d,	// (0x000188ff) query_popup_pane_cp3

0x7f63,	// (0x00013825) bg_popup_sub_pane_cp22_ParamLimits

0x51e2,	// (0x00010aa4) navi_navi_volume_pane_cp2

0x51fd,	// (0x00010abf) popup_side_volume_key_window_g2

0x520c,	// (0x00010ace) popup_side_volume_key_window_g3

0x0002,

0xf724,	// (0x0001afe6) popup_side_volume_key_window_g

0x5229,	// (0x00010aeb) popup_side_volume_key_window_t2

0x0001,

0xf72b,	// (0x0001afed) popup_side_volume_key_window_t

0x82aa,	// (0x00013b6c) popup_side_volume_key_window_ParamLimits

0x7285,	// (0x00012b47) list_double_graphic_pane_g4_ParamLimits

0x7285,	// (0x00012b47) list_double_graphic_pane_g4

0xab05,	// (0x000163c7) list_single_2heading_msg_pane_ParamLimits

0xab05,	// (0x000163c7) list_single_2heading_msg_pane

0xd06e,	// (0x00018930) list_single_2heading_msg_pane_g1_ParamLimits

0xd06e,	// (0x00018930) list_single_2heading_msg_pane_g1

0x70b4,	// (0x00012976) list_single_2heading_msg_pane_g2_ParamLimits

0x70b4,	// (0x00012976) list_single_2heading_msg_pane_g2

0xd07a,	// (0x0001893c) list_single_2heading_msg_pane_g3_ParamLimits

0xd07a,	// (0x0001893c) list_single_2heading_msg_pane_g3

0xd086,	// (0x00018948) list_single_2heading_msg_pane_g4_ParamLimits

0xd086,	// (0x00018948) list_single_2heading_msg_pane_g4

0x0003,

0xfcb7,	// (0x0001b579) list_single_2heading_msg_pane_g_ParamLimits

0xfcb7,	// (0x0001b579) list_single_2heading_msg_pane_g

0xd09e,	// (0x00018960) list_single_2heading_msg_pane_t1_ParamLimits

0xd09e,	// (0x00018960) list_single_2heading_msg_pane_t1

0xd0c6,	// (0x00018988) list_single_2heading_msg_pane_t2_ParamLimits

0xd0c6,	// (0x00018988) list_single_2heading_msg_pane_t2

0xd0f5,	// (0x000189b7) list_single_2heading_msg_pane_t3_ParamLimits

0xd0f5,	// (0x000189b7) list_single_2heading_msg_pane_t3

0xd12e,	// (0x000189f0) list_single_2heading_msg_pane_t4_ParamLimits

0xd12e,	// (0x000189f0) list_single_2heading_msg_pane_t4

0x0003,

0xfcc0,	// (0x0001b582) list_single_2heading_msg_pane_t_ParamLimits

0xfcc0,	// (0x0001b582) list_single_2heading_msg_pane_t

0x415c,	// (0x0000fa1e) title_pane_g4_ParamLimits

0x415c,	// (0x0000fa1e) title_pane_g4

0x4fee,	// (0x000108b0) title_pane_stacon_g3_ParamLimits

0x4fee,	// (0x000108b0) title_pane_stacon_g3

0xcb32,	// (0x000183f4) list_single_2graphic_im_pane_g4_ParamLimits

0xcb32,	// (0x000183f4) list_single_2graphic_im_pane_g4

0xa550,	// (0x00015e12) popup_side_volume_key_window_cp

0xae4f,	// (0x00016711) main_idle_act2_pane_t1

0x5614,	// (0x00010ed6) toolbar_button_pane_g10

0x706a,	// (0x0001292c) popup_toolbar_window_cp1

0xb7f4,	// (0x000170b6) clock_nsta_pane_cp_t1

0xb7f4,	// (0x000170b6) clock_nsta_pane_cp_t2

0x0001,

0xfabb,	// (0x0001b37d) clock_nsta_pane_cp_t

0x51e2,	// (0x00010aa4) navi_navi_volume_pane_cp2_ParamLimits

0x51f1,	// (0x00010ab3) popup_side_volume_key_window_g1_ParamLimits

0x51fd,	// (0x00010abf) popup_side_volume_key_window_g2_ParamLimits

0x520c,	// (0x00010ace) popup_side_volume_key_window_g3_ParamLimits

0xf724,	// (0x0001afe6) popup_side_volume_key_window_g_ParamLimits

0x5a9d,	// (0x0001135f) fep_hwr_aid_pane

0x5b46,	// (0x00011408) bg_fep_hwr_top_pane_g4_ParamLimits

0xbd59,	// (0x0001761b) fep_hwr_top_pane_g1_ParamLimits

0xbd6b,	// (0x0001762d) fep_hwr_top_pane_g2_ParamLimits

0x5b66,	// (0x00011428) fep_hwr_top_pane_g3_ParamLimits

0xfb10,	// (0x0001b3d2) fep_hwr_top_pane_g_ParamLimits

0x5b7b,	// (0x0001143d) fep_hwr_top_text_pane_ParamLimits

0xa305,	// (0x00015bc7) aid_touch_tab_arrow_arrow_2

0xa30e,	// (0x00015bd0) aid_touch_tab_arrow_left_2

0x5ab1,	// (0x00011373) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x5ae8,	// (0x000113aa) fep_hwr_prediction_pane

0xbec1,	// (0x00017783) fep_vkb_prediction_pane

0xbfc7,	// (0x00017889) fep_vkb_side_pane_g3_ParamLimits

0xbfc7,	// (0x00017889) fep_vkb_side_pane_g3

0x5d0a,	// (0x000115cc) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x5d7b,	// (0x0001163d) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x5d88,	// (0x0001164a) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbbf,	// (0x0001b481) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x5eb7,	// (0x00011779) fep_hwr_prediction_pane_g1

0x5ec1,	// (0x00011783) fep_hwr_prediction_pane_g2

0x5ec9,	// (0x0001178b) fep_hwr_prediction_pane_g3

0x5ed1,	// (0x00011793) fep_hwr_prediction_pane_g4

0x0003,

0xfcc9,	// (0x0001b58b) fep_hwr_prediction_pane_g

0xd153,	// (0x00018a15) fep_vkb_prediction_pane_g1

0xd15d,	// (0x00018a1f) fep_vkb_prediction_pane_g2

0xd165,	// (0x00018a27) fep_vkb_prediction_pane_g3

0xd16d,	// (0x00018a2f) fep_vkb_prediction_pane_g4

0x0003,

0xfcd2,	// (0x0001b594) fep_vkb_prediction_pane_g

0x591d,	// (0x000111df) slider_set_pane_g3

0x5931,	// (0x000111f3) slider_set_pane_g4

0x5949,	// (0x0001120b) slider_set_pane_g5

0x591d,	// (0x000111df) slider_set_pane_g6

0x595f,	// (0x00011221) slider_set_pane_g7

0xaa26,	// (0x000162e8) slider_form_pane_g3

0xaa2f,	// (0x000162f1) slider_form_pane_g4

0xaa37,	// (0x000162f9) slider_form_pane_g5

0xaa26,	// (0x000162e8) slider_form_pane_g6

0xaa3f,	// (0x00016301) slider_form_pane_g7

0xb147,	// (0x00016a09) slider_set_pane_vc_g3

0xb150,	// (0x00016a12) slider_set_pane_vc_g4

0xb159,	// (0x00016a1b) slider_set_pane_vc_g5

0xb147,	// (0x00016a09) slider_set_pane_vc_g6

0xb162,	// (0x00016a24) slider_set_pane_vc_g7

0xb147,	// (0x00016a09) slider_form_pane_vc_g1

0xb150,	// (0x00016a12) slider_form_pane_vc_g2

0xb159,	// (0x00016a1b) slider_form_pane_vc_g3

0xb147,	// (0x00016a09) slider_form_pane_vc_g4

0xb4e7,	// (0x00016da9) slider_form_pane_vc_g5

0x0004,

0xfa94,	// (0x0001b356) slider_form_pane_vc_g

0x3f0e,	// (0x0000f7d0) main_idle_act3_pane

0xd175,	// (0x00018a37) ai3_links_pane

0xd17e,	// (0x00018a40) popup_ai3_data_window_ParamLimits

0xd17e,	// (0x00018a40) popup_ai3_data_window

0x3f0e,	// (0x0000f7d0) grid_ai3_links_pane

0xd19c,	// (0x00018a5e) cell_ai3_links_pane_ParamLimits

0xd19c,	// (0x00018a5e) cell_ai3_links_pane

0xd1b6,	// (0x00018a78) bg_popup_sub_pane_cp11

0xd1c3,	// (0x00018a85) cell_ai3_links_pane_g1

0x3f0e,	// (0x0000f7d0) bg_popup_sub_pane_cp12

0xd1e8,	// (0x00018aaa) heading_ai3_data_pane

0xd1f0,	// (0x00018ab2) list_ai3_gene_pane

0xd1fc,	// (0x00018abe) popup_ai3_data_window_g1

0xd204,	// (0x00018ac6) heading_ai3_data_pane_g1

0xd20c,	// (0x00018ace) heading_ai3_data_pane_t1

0xd21a,	// (0x00018adc) list_double_ai3_gene_pane_ParamLimits

0xd21a,	// (0x00018adc) list_double_ai3_gene_pane

0xd227,	// (0x00018ae9) list_single_ai3_gene_pane_ParamLimits

0xd227,	// (0x00018ae9) list_single_ai3_gene_pane

0xbcae,	// (0x00017570) list_highlight_pane_cp7_ParamLimits

0xbcae,	// (0x00017570) list_highlight_pane_cp7

0xd234,	// (0x00018af6) list_single_a13_gene_pane_t1_ParamLimits

0xd234,	// (0x00018af6) list_single_a13_gene_pane_t1

0xd24b,	// (0x00018b0d) list_single_ai3_gene_pane_g1

0xd254,	// (0x00018b16) list_single_ai3_gene_pane_g2

0x0001,

0xfcdb,	// (0x0001b59d) list_single_ai3_gene_pane_g

0xd25c,	// (0x00018b1e) list_double_ai3_gene_pane_g1_ParamLimits

0xd25c,	// (0x00018b1e) list_double_ai3_gene_pane_g1

0xd268,	// (0x00018b2a) list_double_ai3_gene_pane_t1_ParamLimits

0xd268,	// (0x00018b2a) list_double_ai3_gene_pane_t1

0xd284,	// (0x00018b46) list_double_ai3_gene_pane_t2_ParamLimits

0xd284,	// (0x00018b46) list_double_ai3_gene_pane_t2

0xd299,	// (0x00018b5b) list_double_ai3_gene_pane_t3_ParamLimits

0xd299,	// (0x00018b5b) list_double_ai3_gene_pane_t3

0x0002,

0xfce0,	// (0x0001b5a2) list_double_ai3_gene_pane_t_ParamLimits

0xfce0,	// (0x0001b5a2) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xd04e,	// (0x00018910) aid_size_min_col_2

0xd058,	// (0x0001891a) aid_size_min_msg_ParamLimits

0xd058,	// (0x0001891a) aid_size_min_msg

0xc0d3,	// (0x00017995) fep_vkb_top_text_pane_g2_ParamLimits

0xc0d3,	// (0x00017995) fep_vkb_top_text_pane_g2

0x0001,

0xfb40,	// (0x0001b402) fep_vkb_top_text_pane_g_ParamLimits

0xfb40,	// (0x0001b402) fep_vkb_top_text_pane_g

0x3f0e,	// (0x0000f7d0) main_hc_apps_shell_pane

0xd2b6,	// (0x00018b78) grid_hc_apps_pane_ParamLimits

0xd2b6,	// (0x00018b78) grid_hc_apps_pane

0xd2c5,	// (0x00018b87) list_hc_apps_pane

0xd2cd,	// (0x00018b8f) scroll_pane_cp37_ParamLimits

0xd2cd,	// (0x00018b8f) scroll_pane_cp37

0xd2d9,	// (0x00018b9b) cell_hc_apps_pane_ParamLimits

0xd2d9,	// (0x00018b9b) cell_hc_apps_pane

0xd391,	// (0x00018c53) cell_hc_apps_pane_g1_ParamLimits

0xd391,	// (0x00018c53) cell_hc_apps_pane_g1

0xd3c2,	// (0x00018c84) cell_hc_apps_pane_g2_ParamLimits

0xd3c2,	// (0x00018c84) cell_hc_apps_pane_g2

0xd3de,	// (0x00018ca0) cell_hc_apps_pane_g3_ParamLimits

0xd3de,	// (0x00018ca0) cell_hc_apps_pane_g3

0x0002,

0xfce7,	// (0x0001b5a9) cell_hc_apps_pane_g_ParamLimits

0xfce7,	// (0x0001b5a9) cell_hc_apps_pane_g

0xd400,	// (0x00018cc2) cell_hc_apps_pane_t1_ParamLimits

0xd400,	// (0x00018cc2) cell_hc_apps_pane_t1

0x6b04,	// (0x000123c6) grid_highlight_pane_cp10_ParamLimits

0x6b04,	// (0x000123c6) grid_highlight_pane_cp10

0xd440,	// (0x00018d02) list_single_hc_apps_pane_ParamLimits

0xd440,	// (0x00018d02) list_single_hc_apps_pane

0xd47f,	// (0x00018d41) list_single_hc_apps_pane_g1

0xd498,	// (0x00018d5a) list_single_hc_apps_pane_g2

0x0001,

0xfcee,	// (0x0001b5b0) list_single_hc_apps_pane_g

0xd4b1,	// (0x00018d73) list_single_hc_apps_pane_g2_copy1

0xd4cd,	// (0x00018d8f) list_single_hc_apps_pane_t1

0x6860,	// (0x00012122) bg_set_opt_pane_cp_ParamLimits

0x4f18,	// (0x000107da) setting_slider_pane_t1_ParamLimits

0x4f2e,	// (0x000107f0) setting_slider_pane_t2_ParamLimits

0x4f48,	// (0x0001080a) setting_slider_pane_t3_ParamLimits

0xf576,	// (0x0001ae38) setting_slider_pane_t_ParamLimits

0x4f60,	// (0x00010822) slider_set_pane_ParamLimits

0x5490,	// (0x00010d52) control_pane_g5_ParamLimits

0x5490,	// (0x00010d52) control_pane_g5

0xa847,	// (0x00016109) slider_set_pane_g1_ParamLimits

0x5911,	// (0x000111d3) slider_set_pane_g2_ParamLimits

0x591d,	// (0x000111df) slider_set_pane_g3_ParamLimits

0x5931,	// (0x000111f3) slider_set_pane_g4_ParamLimits

0x5949,	// (0x0001120b) slider_set_pane_g5_ParamLimits

0x591d,	// (0x000111df) slider_set_pane_g6_ParamLimits

0x595f,	// (0x00011221) slider_set_pane_g7_ParamLimits

0xf970,	// (0x0001b232) slider_set_pane_g_ParamLimits

0x838f,	// (0x00013c51) navi_icon_text_pane_ParamLimits

0x8ef2,	// (0x000147b4) aid_fill_nsta_2_ParamLimits

0x8f33,	// (0x000147f5) aid_touch_tab_arrow_left_ParamLimits

0x8f42,	// (0x00014804) aid_touch_tab_arrow_right_ParamLimits

0x8faf,	// (0x00014871) clock_nsta_pane_ParamLimits

0xa2e1,	// (0x00015ba3) navi_icon_pane_g1_ParamLimits

0xa2f0,	// (0x00015bb2) navi_text_pane_t1_ParamLimits

0xb911,	// (0x000171d3) navi_icon_text_pane_g1_ParamLimits

0xb920,	// (0x000171e2) navi_icon_text_pane_t1_ParamLimits

0xd47f,	// (0x00018d41) list_single_hc_apps_pane_g1_ParamLimits

0xd498,	// (0x00018d5a) list_single_hc_apps_pane_g2_ParamLimits

0xfcee,	// (0x0001b5b0) list_single_hc_apps_pane_g_ParamLimits

0xd4b1,	// (0x00018d73) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xd4cd,	// (0x00018d8f) list_single_hc_apps_pane_t1_ParamLimits

0x4e22,	// (0x000106e4) popup_toolbar2_fixed_window_ParamLimits

0x4e22,	// (0x000106e4) popup_toolbar2_fixed_window

0x8df6,	// (0x000146b8) popup_toolbar2_float_window

0x3f0e,	// (0x0000f7d0) bg_popup_sub_pane_cp27

0xd4fb,	// (0x00018dbd) grid_toolbar2_float_pane

0x3f0e,	// (0x0000f7d0) bg_popup_sub_pane_cp26

0xd4fb,	// (0x00018dbd) grid_toolbar2_fixed_pane

0xd503,	// (0x00018dc5) cell_toolbar2_fixed_pane_ParamLimits

0xd503,	// (0x00018dc5) cell_toolbar2_fixed_pane

0xd513,	// (0x00018dd5) cell_toolbar2_fixed_pane_g1

0xd51c,	// (0x00018dde) toolbar2_fixed_button_pane

0x9414,	// (0x00014cd6) toolbar2_fixed_button_pane_g1

0x9424,	// (0x00014ce6) toolbar2_fixed_button_pane_g2

0x941c,	// (0x00014cde) toolbar2_fixed_button_pane_g3

0x9434,	// (0x00014cf6) toolbar2_fixed_button_pane_g4

0x942c,	// (0x00014cee) toolbar2_fixed_button_pane_g5

0x943c,	// (0x00014cfe) toolbar2_fixed_button_pane_g6

0x9444,	// (0x00014d06) toolbar2_fixed_button_pane_g7

0x9454,	// (0x00014d16) toolbar2_fixed_button_pane_g8

0x944c,	// (0x00014d0e) toolbar2_fixed_button_pane_g9

0x0008,

0xf872,	// (0x0001b134) toolbar2_fixed_button_pane_g

0xd524,	// (0x00018de6) cell_toolbar2_float_pane_ParamLimits

0xd524,	// (0x00018de6) cell_toolbar2_float_pane

0xd535,	// (0x00018df7) cell_toolbar2_float_pane_g1

0xd51c,	// (0x00018dde) toolbar2_fixed_button_pane_cp

0xbe2f,	// (0x000176f1) fep_vkb_accented_list_pane_ParamLimits

0xbe2f,	// (0x000176f1) fep_vkb_accented_list_pane

0x5cea,	// (0x000115ac) bg_popup_fep_shadow_pane_g9

0x8513,	// (0x00013dd5) bg_popup_fep_shadow_pane_cp3

0x7967,	// (0x00013229) list_accented_list_pane

0xd53e,	// (0x00018e00) list_single_accented_list_pane_ParamLimits

0xd53e,	// (0x00018e00) list_single_accented_list_pane

0x8513,	// (0x00013dd5) list_highlight_pane_cp10

0xd54f,	// (0x00018e11) list_single_accented_list_pane_t1

0x8d3c,	// (0x000145fe) popup_slider_window_ParamLimits

0x8d3c,	// (0x000145fe) popup_slider_window

0xd045,	// (0x00018907) aid_indentation_list_msg

0xd61b,	// (0x00018edd) bg_popup_window_pane_cp19

0xd6aa,	// (0x00018f6c) popup_slider_window_g1

0xd6c6,	// (0x00018f88) popup_slider_window_g2

0xd6e2,	// (0x00018fa4) popup_slider_window_g3

0x0005,

0xfcf3,	// (0x0001b5b5) popup_slider_window_g

0xd73e,	// (0x00019000) popup_slider_window_t1

0xd7b2,	// (0x00019074) small_volume_slider_vertical_pane

0xbce9,	// (0x000175ab) small_volume_slider_vertical_pane_g1

0xbce9,	// (0x000175ab) small_volume_slider_vertical_pane_g2

0xd7ce,	// (0x00019090) small_volume_slider_vertical_pane_g3

0x0002,

0xfd05,	// (0x0001b5c7) small_volume_slider_vertical_pane_g

0x4bd0,	// (0x00010492) area_side_right_pane_ParamLimits

0x4bd0,	// (0x00010492) area_side_right_pane

0x5ed9,	// (0x0001179b) aid_size_side_button_ParamLimits

0x5ed9,	// (0x0001179b) aid_size_side_button

0x5eed,	// (0x000117af) grid_sctrl_middle_pane_ParamLimits

0x5eed,	// (0x000117af) grid_sctrl_middle_pane

0x5f0d,	// (0x000117cf) sctrl_sk_bottom_pane

0x5f1e,	// (0x000117e0) sctrl_sk_top_pane

0x5f30,	// (0x000117f2) aid_touch_sctrl_top

0x5f3d,	// (0x000117ff) bg_sctrl_sk_pane_ParamLimits

0x5f3d,	// (0x000117ff) bg_sctrl_sk_pane

0x5f4b,	// (0x0001180d) sctrl_sk_top_pane_g1

0x5f58,	// (0x0001181a) sctrl_sk_top_pane_t1

0x5f30,	// (0x000117f2) aid_touch_sctrl_bottom

0x5f3d,	// (0x000117ff) bg_sctrl_sk_pane_cp_ParamLimits

0x5f3d,	// (0x000117ff) bg_sctrl_sk_pane_cp

0x5f73,	// (0x00011835) sctrl_sk_bottom_pane_g1

0x5f58,	// (0x0001181a) sctrl_sk_bottom_pane_t1

0x5f7c,	// (0x0001183e) cell_sctrl_middle_pane_ParamLimits

0x5f7c,	// (0x0001183e) cell_sctrl_middle_pane

0x5f99,	// (0x0001185b) aid_touch_sctrl_middle_ParamLimits

0x5f99,	// (0x0001185b) aid_touch_sctrl_middle

0x5fab,	// (0x0001186d) bg_sctrl_middle_pane_ParamLimits

0x5fab,	// (0x0001186d) bg_sctrl_middle_pane

0x5d0a,	// (0x000115cc) cell_sctrl_middle_pane_g1_ParamLimits

0x5d0a,	// (0x000115cc) cell_sctrl_middle_pane_g1

0x5fb9,	// (0x0001187b) cell_sctrl_middle_pane_g2_ParamLimits

0x5fb9,	// (0x0001187b) cell_sctrl_middle_pane_g2

0x0001,

0xfd11,	// (0x0001b5d3) cell_sctrl_middle_pane_g_ParamLimits

0xfd11,	// (0x0001b5d3) cell_sctrl_middle_pane_g

0x9414,	// (0x00014cd6) bg_sctrl_middle_pane_g1

0x941c,	// (0x00014cde) bg_sctrl_middle_pane_g2

0x9424,	// (0x00014ce6) bg_sctrl_middle_pane_g3

0x942c,	// (0x00014cee) bg_sctrl_middle_pane_g4

0x9434,	// (0x00014cf6) bg_sctrl_middle_pane_g5

0x943c,	// (0x00014cfe) bg_sctrl_middle_pane_g6

0x9444,	// (0x00014d06) bg_sctrl_middle_pane_g7

0x944c,	// (0x00014d0e) bg_sctrl_middle_pane_g8

0x0007,

0xfd16,	// (0x0001b5d8) bg_sctrl_middle_pane_g

0x9454,	// (0x00014d16) bg_sctrl_middle_pane_g8_copy1

0x9414,	// (0x00014cd6) bg_sctrl_sk_pane_g1

0x9424,	// (0x00014ce6) bg_sctrl_sk_pane_g2

0x941c,	// (0x00014cde) bg_sctrl_sk_pane_g3

0x0008,

0xf872,	// (0x0001b134) bg_sctrl_sk_pane_g

0x7030,	// (0x000128f2) aid_size_touch_scroll_bar

0x9434,	// (0x00014cf6) bg_sctrl_sk_pane_g4

0x942c,	// (0x00014cee) bg_sctrl_sk_pane_g5

0x943c,	// (0x00014cfe) bg_sctrl_sk_pane_g6

0x9444,	// (0x00014d06) bg_sctrl_sk_pane_g7

0x9454,	// (0x00014d16) bg_sctrl_sk_pane_g8

0x944c,	// (0x00014d0e) bg_sctrl_sk_pane_g9

0x8953,	// (0x00014215) popup_fep_china_hwr2_fs_candidate_window

0x895d,	// (0x0001421f) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x895d,	// (0x0001421f) popup_fep_china_hwr2_fs_control_window

0x5d0a,	// (0x000115cc) sctrl_sk_top_pane_g2

0x0001,

0xfd0c,	// (0x0001b5ce) sctrl_sk_top_pane_g

0xd7d7,	// (0x00019099) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd7d7,	// (0x00019099) aid_fep_china_hwr2_fs_cell

0xd7ea,	// (0x000190ac) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd7ea,	// (0x000190ac) bg_popup_fep_shadow_pane_cp4

0xd803,	// (0x000190c5) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd803,	// (0x000190c5) bg_popup_fep_shadow_pane_cp5

0xd815,	// (0x000190d7) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd815,	// (0x000190d7) popup_fep_china_hwr2_fs_control_bar_grid

0xd825,	// (0x000190e7) popup_fep_china_hwr2_fs_control_funtion_grid

0xd82d,	// (0x000190ef) aid_fep_china_hwr2_fs_candi_cell

0x3f0e,	// (0x0000f7d0) bg_popup_fep_shadow_pane_cp6

0xd837,	// (0x000190f9) popup_fep_china_hwr2_fs_candidate_grid

0xd841,	// (0x00019103) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd841,	// (0x00019103) cell_fep_china_hwr2_fs_funtion_grid

0xbce9,	// (0x000175ab) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd859,	// (0x0001911b) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd859,	// (0x0001911b) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd867,	// (0x00019129) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd867,	// (0x00019129) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd27,	// (0x0001b5e9) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd27,	// (0x0001b5e9) cell_fep_china_hwr2_fs_funtion_grid_g

0xd87d,	// (0x0001913f) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd87d,	// (0x0001913f) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd892,	// (0x00019154) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd892,	// (0x00019154) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd2c,	// (0x0001b5ee) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd2c,	// (0x0001b5ee) cell_fep_china_hwr2_fs_funtion_grid_t

0xd8ae,	// (0x00019170) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd8b6,	// (0x00019178) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd8be,	// (0x00019180) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd31,	// (0x0001b5f3) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd8c6,	// (0x00019188) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd8c6,	// (0x00019188) cell_fep_china_hwr2_fs_candidate_grid

0xd8e5,	// (0x000191a7) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd8ed,	// (0x000191af) popup_fep_china_hwr2_fs_candidate_grid_g21

0xbce9,	// (0x000175ab) cell_fep_china_hwr2_fs_candidate_grid_g1

0xbce9,	// (0x000175ab) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb45,	// (0x0001b407) cell_fep_china_hwr2_fs_candidate_grid_g

0xd8f5,	// (0x000191b7) cell_fep_china_hwr2_fs_candidate_grid_t1

0x8fc2,	// (0x00014884) clock_nsta_pane_cp_24_ParamLimits

0x8fc2,	// (0x00014884) clock_nsta_pane_cp_24

0x9042,	// (0x00014904) indicator_nsta_pane_cp_24_ParamLimits

0x9042,	// (0x00014904) indicator_nsta_pane_cp_24

0xa15d,	// (0x00015a1f) heading_pane_g1

0x0001,

0xf8d7,	// (0x0001b199) heading_pane_g

0xac96,	// (0x00016558) grid_sct_catagory_button_pane

0xacc8,	// (0x0001658a) scroll_pane_cp5_ParamLimits

0xb965,	// (0x00017227) button_value_adjust_pane_cp5_ParamLimits

0xb965,	// (0x00017227) button_value_adjust_pane_cp5

0xba5b,	// (0x0001731d) form2_midp_time_pane_ParamLimits

0xd903,	// (0x000191c5) cell_sct_catagory_button_pane_ParamLimits

0xd903,	// (0x000191c5) cell_sct_catagory_button_pane

0xbcae,	// (0x00017570) bg_button_pane_cp01_ParamLimits

0xbcae,	// (0x00017570) bg_button_pane_cp01

0xbce9,	// (0x000175ab) cell_sct_catagory_button_pane_g1

0x8d7d,	// (0x0001463f) popup_tb_extension_window

0xd915,	// (0x000191d7) aid_size_cell_ext_ParamLimits

0xd915,	// (0x000191d7) aid_size_cell_ext

0x6b04,	// (0x000123c6) bg_tb_trans_pane_cp1_ParamLimits

0x6b04,	// (0x000123c6) bg_tb_trans_pane_cp1

0xd935,	// (0x000191f7) grid_tb_ext_pane_ParamLimits

0xd935,	// (0x000191f7) grid_tb_ext_pane

0xd965,	// (0x00019227) cell_tb_ext_pane_ParamLimits

0xd965,	// (0x00019227) cell_tb_ext_pane

0xd97c,	// (0x0001923e) cell_tb_ext_pane_g1_ParamLimits

0xd97c,	// (0x0001923e) cell_tb_ext_pane_g1

0xd999,	// (0x0001925b) cell_tb_ext_pane_t1

0x6b04,	// (0x000123c6) list_highlight_pane_cp11_ParamLimits

0x6b04,	// (0x000123c6) list_highlight_pane_cp11

0x4e41,	// (0x00010703) popup_uni_indicator_window_ParamLimits

0x4e41,	// (0x00010703) popup_uni_indicator_window

0x769c,	// (0x00012f5e) bg_popup_sub_pane_cp14

0xd9b4,	// (0x00019276) list_uniindi_pane

0xd9c0,	// (0x00019282) uniindi_top_pane

0x6b04,	// (0x000123c6) bg_uniindi_top_pane

0xd9e1,	// (0x000192a3) uniindi_top_pane_g1

0xd9f7,	// (0x000192b9) uniindi_top_pane_g2

0x0003,

0xfd38,	// (0x0001b5fa) uniindi_top_pane_g

0xda21,	// (0x000192e3) uniindi_top_pane_t1

0xda4d,	// (0x0001930f) list_single_uniindi_pane_ParamLimits

0xda4d,	// (0x0001930f) list_single_uniindi_pane

0xbce9,	// (0x000175ab) bg_uniindi_top_pane_g1

0xda5f,	// (0x00019321) list_single_uniindi_pane_g1

0xda72,	// (0x00019334) list_single_uniindi_pane_t1

0x4cad,	// (0x0001056f) control_bg_pane

0xda97,	// (0x00019359) bg_sctrl_sk_pane_cp1

0xdaa0,	// (0x00019362) bg_sctrl_sk_pane_cp2

0xdaa9,	// (0x0001936b) control_bg_pane_g1

0xdab2,	// (0x00019374) control_bg_pane_g2

0x0001,

0xfd41,	// (0x0001b603) control_bg_pane_g

0xb787,	// (0x00017049) cell_indicator_nsta_pane_g1_ParamLimits

0xb795,	// (0x00017057) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa9,	// (0x0001b36b) cell_indicator_nsta_pane_g_ParamLimits

0xbad0,	// (0x00017392) form2_midp_time_pane_t1_ParamLimits

0x6e72,	// (0x00012734) main_idle_act4_pane_ParamLimits

0x6e72,	// (0x00012734) main_idle_act4_pane

0x8d7d,	// (0x0001463f) popup_tb_extension_window_ParamLimits

0xd957,	// (0x00019219) tb_ext_find_pane_ParamLimits

0xd957,	// (0x00019219) tb_ext_find_pane

0xdabb,	// (0x0001937d) ai_gene_pane_1_cp1

0x865c,	// (0x00013f1e) ai_gene_pane_2_cp1

0xdac3,	// (0x00019385) list_single_idle_plugin_calendar_pane

0xdacc,	// (0x0001938e) list_single_idle_plugin_notification_pane

0xdad5,	// (0x00019397) list_single_idle_plugin_player_pane

0xdade,	// (0x000193a0) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdade,	// (0x000193a0) list_single_idle_plugin_shortcut_pane

0xdb00,	// (0x000193c2) main_idle_act4_pane_t1

0xdb12,	// (0x000193d4) main_idle_act4_pane_t2

0x0001,

0xfd46,	// (0x0001b608) main_idle_act4_pane_t

0xdb24,	// (0x000193e6) middle_sk_idle_act4_pane_ParamLimits

0xdb24,	// (0x000193e6) middle_sk_idle_act4_pane

0xdb3a,	// (0x000193fc) popup_clock_digital_analogue_window_cp2

0xdb54,	// (0x00019416) shortcut_wheel_idle_act4_pane_ParamLimits

0xdb54,	// (0x00019416) shortcut_wheel_idle_act4_pane

0xbce9,	// (0x000175ab) shortcut_wheel_idle_act4_pane_g1

0xbce9,	// (0x000175ab) shortcut_wheel_idle_act4_pane_g2

0xbce9,	// (0x000175ab) shortcut_wheel_idle_act4_pane_g3

0xbce9,	// (0x000175ab) shortcut_wheel_idle_act4_pane_g4

0xbce9,	// (0x000175ab) shortcut_wheel_idle_act4_pane_g5

0xdb68,	// (0x0001942a) shortcut_wheel_idle_act4_pane_g6

0xdb70,	// (0x00019432) shortcut_wheel_idle_act4_pane_g7

0xdb78,	// (0x0001943a) shortcut_wheel_idle_act4_pane_g8

0xdb80,	// (0x00019442) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd4b,	// (0x0001b60d) shortcut_wheel_idle_act4_pane_g

0xbf73,	// (0x00017835) middle_sk_idle_act4_pane_g1_ParamLimits

0xbf73,	// (0x00017835) middle_sk_idle_act4_pane_g1

0xdbe4,	// (0x000194a6) middle_sk_idle_act4_pane_g2_ParamLimits

0xdbe4,	// (0x000194a6) middle_sk_idle_act4_pane_g2

0x0001,

0xfd6e,	// (0x0001b630) middle_sk_idle_act4_pane_g_ParamLimits

0xfd6e,	// (0x0001b630) middle_sk_idle_act4_pane_g

0xdbf0,	// (0x000194b2) middle_sk_idle_act4_pane_t1_ParamLimits

0xdbf0,	// (0x000194b2) middle_sk_idle_act4_pane_t1

0xdc0d,	// (0x000194cf) grid_ai_shortcut_pane_ParamLimits

0xdc0d,	// (0x000194cf) grid_ai_shortcut_pane

0xdc26,	// (0x000194e8) list_highlight_pane_cp16_ParamLimits

0xdc26,	// (0x000194e8) list_highlight_pane_cp16

0xdc33,	// (0x000194f5) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdc33,	// (0x000194f5) list_single_idle_plugin_shortcut_pane_g1

0xdc3f,	// (0x00019501) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdc3f,	// (0x00019501) list_single_idle_plugin_shortcut_pane_g2

0xdc59,	// (0x0001951b) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdc59,	// (0x0001951b) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd73,	// (0x0001b635) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd73,	// (0x0001b635) list_single_idle_plugin_shortcut_pane_g

0xdc6c,	// (0x0001952e) cell_ai_shortcut_pane_ParamLimits

0xdc6c,	// (0x0001952e) cell_ai_shortcut_pane

0xdc8f,	// (0x00019551) cell_ai_shortcut_pane_g1_ParamLimits

0xdc8f,	// (0x00019551) cell_ai_shortcut_pane_g1

0xdabb,	// (0x0001937d) ai_gene_pane_1_cp2

0xdcb1,	// (0x00019573) ai_gene_pane_2_cp2

0xdcb9,	// (0x0001957b) list_highlight_pane_cp15

0xdcc2,	// (0x00019584) list_single_idle_plugin_calendar_pane_g1

0xdcb9,	// (0x0001957b) list_highlight_pane_cp17

0xdcca,	// (0x0001958c) list_single_idle_plugin_calendar_pane_g1_copy1

0xdcd2,	// (0x00019594) list_single_idle_plugin_player_pane_g1

0xaefd,	// (0x000167bf) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd7a,	// (0x0001b63c) list_single_idle_plugin_player_pane_g

0xdcda,	// (0x0001959c) list_single_idle_plugin_player_pane_t1

0xdce8,	// (0x000195aa) list_single_idle_plugin_player_pane_t2

0xdcf6,	// (0x000195b8) list_single_idle_plugin_player_pane_t3

0xdd04,	// (0x000195c6) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd7f,	// (0x0001b641) list_single_idle_plugin_player_pane_t

0xdd12,	// (0x000195d4) wait_bar_pane_cp15

0xdd1a,	// (0x000195dc) grid_ai_notification_pane

0xaefd,	// (0x000167bf) list_single_idle_plugin_notification_pane_g1

0xdd23,	// (0x000195e5) cell_ai_notification_pane_ParamLimits

0xdd23,	// (0x000195e5) cell_ai_notification_pane

0xdd30,	// (0x000195f2) cell_ai_notification_pane_g1

0xdd38,	// (0x000195fa) cell_ai_notification_pane_t1

0xdd46,	// (0x00019608) tb_ext_find_button_pane

0xdd4e,	// (0x00019610) tb_ext_find_pane_g1

0xdd56,	// (0x00019618) tb_ext_find_pane_t1

0x7e6e,	// (0x00013730) tb_ext_find_button_pane_g1

0xdd64,	// (0x00019626) tb_ext_find_button_pane_g2

0x0001,

0xfd88,	// (0x0001b64a) tb_ext_find_button_pane_g

0xdb00,	// (0x000193c2) main_idle_act4_pane_t1_ParamLimits

0xdb12,	// (0x000193d4) main_idle_act4_pane_t2_ParamLimits

0xfd46,	// (0x0001b608) main_idle_act4_pane_t_ParamLimits

0xdb3a,	// (0x000193fc) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdb48,	// (0x0001940a) sat_plugin_idle_act4_pane_ParamLimits

0xdb48,	// (0x0001940a) sat_plugin_idle_act4_pane

0xdd6d,	// (0x0001962f) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdd6d,	// (0x0001962f) sat_plugin_idle_act4_pane_t1

0xdd80,	// (0x00019642) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdd80,	// (0x00019642) sat_plugin_idle_act4_pane_t2

0xdd93,	// (0x00019655) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdd93,	// (0x00019655) sat_plugin_idle_act4_pane_t3

0xdda6,	// (0x00019668) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdda6,	// (0x00019668) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd8d,	// (0x0001b64f) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd8d,	// (0x0001b64f) sat_plugin_idle_act4_pane_t

0x4d72,	// (0x00010634) popup_battery_window_ParamLimits

0x4d72,	// (0x00010634) popup_battery_window

0x6b04,	// (0x000123c6) bg_popup_sub_pane_cp25_ParamLimits

0x6b04,	// (0x000123c6) bg_popup_sub_pane_cp25

0xddb9,	// (0x0001967b) popup_battery_window_g1_ParamLimits

0xddb9,	// (0x0001967b) popup_battery_window_g1

0xddc5,	// (0x00019687) popup_battery_window_t1_ParamLimits

0xddc5,	// (0x00019687) popup_battery_window_t1

0xddd7,	// (0x00019699) popup_battery_window_t2_ParamLimits

0xddd7,	// (0x00019699) popup_battery_window_t2

0x0001,

0xfd96,	// (0x0001b658) popup_battery_window_t_ParamLimits

0xfd96,	// (0x0001b658) popup_battery_window_t

0x8527,	// (0x00013de9) midp_canvas_pane_ParamLimits

0x859e,	// (0x00013e60) midp_keypad_pane_ParamLimits

0x859e,	// (0x00013e60) midp_keypad_pane

0x88a1,	// (0x00014163) main_midp_pane_ParamLimits

0xb812,	// (0x000170d4) signal_pane_g2_cp_ParamLimits

0xddf4,	// (0x000196b6) aid_size_cell_midp_keypad_ParamLimits

0xddf4,	// (0x000196b6) aid_size_cell_midp_keypad

0xde0e,	// (0x000196d0) midp_keyp_game_grid_pane_ParamLimits

0xde0e,	// (0x000196d0) midp_keyp_game_grid_pane

0xde2e,	// (0x000196f0) midp_keyp_rocker_pane_ParamLimits

0xde2e,	// (0x000196f0) midp_keyp_rocker_pane

0xde5d,	// (0x0001971f) midp_keyp_sk_left_pane_ParamLimits

0xde5d,	// (0x0001971f) midp_keyp_sk_left_pane

0xdeb7,	// (0x00019779) midp_keyp_sk_right_pane_ParamLimits

0xdeb7,	// (0x00019779) midp_keyp_sk_right_pane

0x3f0e,	// (0x0000f7d0) bg_button_pane_cp03

0xdf11,	// (0x000197d3) midp_keyp_sk_left_pane_g1

0x3f0e,	// (0x0000f7d0) bg_button_pane_cp04

0xdf11,	// (0x000197d3) midp_keyp_sk_right_pane_g1

0xbce9,	// (0x000175ab) midp_keyp_rocker_pane_g1

0xdf1a,	// (0x000197dc) keyp_game_cell_pane_ParamLimits

0xdf1a,	// (0x000197dc) keyp_game_cell_pane

0x3f0e,	// (0x0000f7d0) bg_button_pane_cp02

0xdf2d,	// (0x000197ef) keyp_game_cell_pane_g1

0x4dbc,	// (0x0001067e) popup_fep_vkb2_window_ParamLimits

0x4dbc,	// (0x0001067e) popup_fep_vkb2_window

0x5fdb,	// (0x0001189d) aid_size_cell_vkb2_ParamLimits

0x5fdb,	// (0x0001189d) aid_size_cell_vkb2

0x6027,	// (0x000118e9) popup_fep_vkb2_window_g1_ParamLimits

0x6027,	// (0x000118e9) popup_fep_vkb2_window_g1

0x606f,	// (0x00011931) vkb2_area_bottom_pane_ParamLimits

0x606f,	// (0x00011931) vkb2_area_bottom_pane

0x60c3,	// (0x00011985) vkb2_area_keypad_pane_ParamLimits

0x60c3,	// (0x00011985) vkb2_area_keypad_pane

0x6109,	// (0x000119cb) vkb2_area_top_pane_ParamLimits

0x6109,	// (0x000119cb) vkb2_area_top_pane

0x6183,	// (0x00011a45) vkb2_top_entry_pane_ParamLimits

0x6183,	// (0x00011a45) vkb2_top_entry_pane

0x61ad,	// (0x00011a6f) vkb2_top_grid_left_pane_ParamLimits

0x61ad,	// (0x00011a6f) vkb2_top_grid_left_pane

0x61cb,	// (0x00011a8d) vkb2_top_grid_right_pane_ParamLimits

0x61cb,	// (0x00011a8d) vkb2_top_grid_right_pane

0x61e9,	// (0x00011aab) vkb2_cell_keypad_pane_ParamLimits

0x61e9,	// (0x00011aab) vkb2_cell_keypad_pane

0x629f,	// (0x00011b61) vkb2_area_bottom_grid_pane_ParamLimits

0x629f,	// (0x00011b61) vkb2_area_bottom_grid_pane

0x62c5,	// (0x00011b87) vkb2_area_bottom_pane_g1_ParamLimits

0x62c5,	// (0x00011b87) vkb2_area_bottom_pane_g1

0x62e9,	// (0x00011bab) vkb2_area_bottom_pane_g2_ParamLimits

0x62e9,	// (0x00011bab) vkb2_area_bottom_pane_g2

0x6317,	// (0x00011bd9) vkb2_area_bottom_pane_g3_ParamLimits

0x6317,	// (0x00011bd9) vkb2_area_bottom_pane_g3

0x0002,

0xfd9b,	// (0x0001b65d) vkb2_area_bottom_pane_g_ParamLimits

0xfd9b,	// (0x0001b65d) vkb2_area_bottom_pane_g

0x6378,	// (0x00011c3a) vkb2_top_cell_left_pane_ParamLimits

0x6378,	// (0x00011c3a) vkb2_top_cell_left_pane

0xdf3e,	// (0x00019800) vkb2_top_entry_pane_g1_ParamLimits

0xdf3e,	// (0x00019800) vkb2_top_entry_pane_g1

0xdf4c,	// (0x0001980e) vkb2_top_entry_pane_t1_ParamLimits

0xdf4c,	// (0x0001980e) vkb2_top_entry_pane_t1

0xdf64,	// (0x00019826) vkb2_top_entry_pane_t2_ParamLimits

0xdf64,	// (0x00019826) vkb2_top_entry_pane_t2

0xdf7c,	// (0x0001983e) vkb2_top_entry_pane_t3_ParamLimits

0xdf7c,	// (0x0001983e) vkb2_top_entry_pane_t3

0x0002,

0xfda2,	// (0x0001b664) vkb2_top_entry_pane_t_ParamLimits

0xfda2,	// (0x0001b664) vkb2_top_entry_pane_t

0x63c5,	// (0x00011c87) vkb2_top_grid_right_pane_g1_ParamLimits

0x63c5,	// (0x00011c87) vkb2_top_grid_right_pane_g1

0x63db,	// (0x00011c9d) vkb2_top_grid_right_pane_g2_ParamLimits

0x63db,	// (0x00011c9d) vkb2_top_grid_right_pane_g2

0x63f3,	// (0x00011cb5) vkb2_top_grid_right_pane_g3_ParamLimits

0x63f3,	// (0x00011cb5) vkb2_top_grid_right_pane_g3

0x640b,	// (0x00011ccd) vkb2_top_grid_right_pane_g4_ParamLimits

0x640b,	// (0x00011ccd) vkb2_top_grid_right_pane_g4

0x0003,

0xfda9,	// (0x0001b66b) vkb2_top_grid_right_pane_g_ParamLimits

0xfda9,	// (0x0001b66b) vkb2_top_grid_right_pane_g

0x6421,	// (0x00011ce3) vkb2_top_cell_left_pane_g1

0x6438,	// (0x00011cfa) vkb2_cell_keypad_pane_g1_ParamLimits

0x6438,	// (0x00011cfa) vkb2_cell_keypad_pane_g1

0xdf92,	// (0x00019854) vkb2_cell_keypad_pane_t1_ParamLimits

0xdf92,	// (0x00019854) vkb2_cell_keypad_pane_t1

0x645c,	// (0x00011d1e) vkb2_cell_bottom_grid_pane_ParamLimits

0x645c,	// (0x00011d1e) vkb2_cell_bottom_grid_pane

0x6495,	// (0x00011d57) vkb2_cell_bottom_grid_pane_g1

0xdb88,	// (0x0001944a) aid_call2_pane_cp02

0xdb90,	// (0x00019452) aid_call_pane_cp02

0xdb98,	// (0x0001945a) clock_digital_number_pane_cp10

0xdba0,	// (0x00019462) clock_digital_number_pane_cp11

0xdba8,	// (0x0001946a) clock_digital_number_pane_cp12

0xdbb0,	// (0x00019472) clock_digital_number_pane_cp13

0xdbb8,	// (0x0001947a) clock_digital_separator_pane_cp10

0x7e6e,	// (0x00013730) popup_clock_digital_analogue_window_cp2_g1

0x7e6e,	// (0x00013730) popup_clock_digital_analogue_window_cp2_g2

0xdbc0,	// (0x00019482) popup_clock_digital_analogue_window_cp2_g3

0x7e6e,	// (0x00013730) popup_clock_digital_analogue_window_cp2_g4

0xdbc0,	// (0x00019482) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd5e,	// (0x0001b620) popup_clock_digital_analogue_window_cp2_g

0xdbc8,	// (0x0001948a) popup_clock_digital_analogue_window_cp2_t1

0xdbd6,	// (0x00019498) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd69,	// (0x0001b62b) popup_clock_digital_analogue_window_cp2_t

0xbce9,	// (0x000175ab) clock_digital_number_pane_cp10_g1

0xbce9,	// (0x000175ab) clock_digital_number_pane_cp10_g2

0x0001,

0xfb45,	// (0x0001b407) clock_digital_number_pane_cp10_g

0xbce9,	// (0x000175ab) clock_digital_separator_pane_cp10_g1

0xbce9,	// (0x000175ab) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb45,	// (0x0001b407) clock_digital_separator_pane_cp10_g

0xda03,	// (0x000192c5) uniindi_top_pane_g3

0xda14,	// (0x000192d6) uniindi_top_pane_g4

0x6259,	// (0x00011b1b) vkb2_row_keypad_pane_ParamLimits

0x6259,	// (0x00011b1b) vkb2_row_keypad_pane

0x64b1,	// (0x00011d73) vkb2_cell_t_keypad_pane_ParamLimits

0x64b1,	// (0x00011d73) vkb2_cell_t_keypad_pane

0x64c1,	// (0x00011d83) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x64c1,	// (0x00011d83) vkb2_cell_t_keypad_pane_cp08

0x64d6,	// (0x00011d98) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x64d6,	// (0x00011d98) vkb2_cell_t_keypad_pane_cp09

0x64ea,	// (0x00011dac) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x64ea,	// (0x00011dac) vkb2_cell_t_keypad_pane_cp01

0x64fb,	// (0x00011dbd) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x64fb,	// (0x00011dbd) vkb2_cell_t_keypad_pane_cp02

0x650c,	// (0x00011dce) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x650c,	// (0x00011dce) vkb2_cell_t_keypad_pane_cp03

0x651d,	// (0x00011ddf) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x651d,	// (0x00011ddf) vkb2_cell_t_keypad_pane_cp04

0x652e,	// (0x00011df0) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x652e,	// (0x00011df0) vkb2_cell_t_keypad_pane_cp05

0x653f,	// (0x00011e01) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x653f,	// (0x00011e01) vkb2_cell_t_keypad_pane_cp06

0x6552,	// (0x00011e14) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x6552,	// (0x00011e14) vkb2_cell_t_keypad_pane_cp07

0x6567,	// (0x00011e29) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x6567,	// (0x00011e29) vkb2_cell_t_keypad_pane_cp10

0x5d0a,	// (0x000115cc) vkb2_cell_t_keypad_pane_g1

0xdfa9,	// (0x0001986b) vkb2_cell_t_keypad_pane_t1

0x4cad,	// (0x0001056f) popup_grid_graphic2_window

0xdfbb,	// (0x0001987d) aid_size_cell_graphic2_ParamLimits

0xdfbb,	// (0x0001987d) aid_size_cell_graphic2

0xdff3,	// (0x000198b5) bg_popup_window_pane_cp21_ParamLimits

0xdff3,	// (0x000198b5) bg_popup_window_pane_cp21

0xe001,	// (0x000198c3) graphic2_pages_pane_ParamLimits

0xe001,	// (0x000198c3) graphic2_pages_pane

0xe047,	// (0x00019909) grid_graphic2_control_pane_ParamLimits

0xe047,	// (0x00019909) grid_graphic2_control_pane

0xe085,	// (0x00019947) grid_graphic2_pane_ParamLimits

0xe085,	// (0x00019947) grid_graphic2_pane

0xe0fb,	// (0x000199bd) cell_graphic2_pane

0x3f0e,	// (0x0000f7d0) main_comp_mode_pane

0xd1f0,	// (0x00018ab2) list_ai3_gene_pane_ParamLimits

0xd61b,	// (0x00018edd) bg_popup_window_pane_cp19_ParamLimits

0xd627,	// (0x00018ee9) bg_touch_area_indi_pane_ParamLimits

0xd627,	// (0x00018ee9) bg_touch_area_indi_pane

0xd63d,	// (0x00018eff) bg_touch_area_indi_pane_cp01_ParamLimits

0xd63d,	// (0x00018eff) bg_touch_area_indi_pane_cp01

0xd655,	// (0x00018f17) bg_touch_area_indi_pane_cp02_ParamLimits

0xd655,	// (0x00018f17) bg_touch_area_indi_pane_cp02

0xd690,	// (0x00018f52) bg_touch_area_indi_pane_cp03_ParamLimits

0xd690,	// (0x00018f52) bg_touch_area_indi_pane_cp03

0xd6aa,	// (0x00018f6c) popup_slider_window_g1_ParamLimits

0xd6c6,	// (0x00018f88) popup_slider_window_g2_ParamLimits

0xd6e2,	// (0x00018fa4) popup_slider_window_g3_ParamLimits

0xfcf3,	// (0x0001b5b5) popup_slider_window_g_ParamLimits

0xd73e,	// (0x00019000) popup_slider_window_t1_ParamLimits

0xd7b2,	// (0x00019074) small_volume_slider_vertical_pane_ParamLimits

0xe0fb,	// (0x000199bd) cell_graphic2_pane_ParamLimits

0xe14d,	// (0x00019a0f) bg_button_pane_cp10_ParamLimits

0xe14d,	// (0x00019a0f) bg_button_pane_cp10

0xe162,	// (0x00019a24) bg_button_pane_cp11_ParamLimits

0xe162,	// (0x00019a24) bg_button_pane_cp11

0xe177,	// (0x00019a39) graphic2_pages_pane_g1_ParamLimits

0xe177,	// (0x00019a39) graphic2_pages_pane_g1

0xe192,	// (0x00019a54) graphic2_pages_pane_g2_ParamLimits

0xe192,	// (0x00019a54) graphic2_pages_pane_g2

0x0001,

0xfdb7,	// (0x0001b679) graphic2_pages_pane_g_ParamLimits

0xfdb7,	// (0x0001b679) graphic2_pages_pane_g

0xe1aa,	// (0x00019a6c) graphic2_pages_pane_t1_ParamLimits

0xe1aa,	// (0x00019a6c) graphic2_pages_pane_t1

0xe1c0,	// (0x00019a82) cell_graphic2_control_pane_ParamLimits

0xe1c0,	// (0x00019a82) cell_graphic2_control_pane

0xe1da,	// (0x00019a9c) cell_graphic2_pane_g1_ParamLimits

0xe1da,	// (0x00019a9c) cell_graphic2_pane_g1

0xe1e7,	// (0x00019aa9) cell_graphic2_pane_g2_ParamLimits

0xe1e7,	// (0x00019aa9) cell_graphic2_pane_g2

0xe1f4,	// (0x00019ab6) cell_graphic2_pane_g3_ParamLimits

0xe1f4,	// (0x00019ab6) cell_graphic2_pane_g3

0xe201,	// (0x00019ac3) cell_graphic2_pane_g4_ParamLimits

0xe201,	// (0x00019ac3) cell_graphic2_pane_g4

0xe20e,	// (0x00019ad0) cell_graphic2_pane_g5_ParamLimits

0xe20e,	// (0x00019ad0) cell_graphic2_pane_g5

0x0004,

0xfdbc,	// (0x0001b67e) cell_graphic2_pane_g_ParamLimits

0xfdbc,	// (0x0001b67e) cell_graphic2_pane_g

0xe229,	// (0x00019aeb) cell_graphic2_pane_t1_ParamLimits

0xe229,	// (0x00019aeb) cell_graphic2_pane_t1

0x9530,	// (0x00014df2) grid_highlight_pane_cp11_ParamLimits

0x9530,	// (0x00014df2) grid_highlight_pane_cp11

0x6b04,	// (0x000123c6) bg_button_pane_cp05

0xe252,	// (0x00019b14) cell_graphic2_control_pane_g1

0xbce9,	// (0x000175ab) bg_touch_area_indi_pane_g1

0xe27a,	// (0x00019b3c) aid_cmod_rocker_key_size

0xe284,	// (0x00019b46) aid_cmode_itu_key_size

0xe28e,	// (0x00019b50) main_cmode_video_pane

0xe298,	// (0x00019b5a) main_comp_mode_itu_pane

0xe2a4,	// (0x00019b66) main_comp_mode_rocker_pane

0xe2b0,	// (0x00019b72) cell_cmode_rocker_pane_ParamLimits

0xe2b0,	// (0x00019b72) cell_cmode_rocker_pane

0xe2c4,	// (0x00019b86) cell_cmode_itu_pane_ParamLimits

0xe2c4,	// (0x00019b86) cell_cmode_itu_pane

0x769c,	// (0x00012f5e) bg_button_pane_cp06_ParamLimits

0x769c,	// (0x00012f5e) bg_button_pane_cp06

0xbf73,	// (0x00017835) cell_cmode_rocker_pane_g1_ParamLimits

0xbf73,	// (0x00017835) cell_cmode_rocker_pane_g1

0xd859,	// (0x0001911b) cell_cmode_rocker_pane_g2_ParamLimits

0xd859,	// (0x0001911b) cell_cmode_rocker_pane_g2

0x0001,

0xfdcc,	// (0x0001b68e) cell_cmode_rocker_pane_g_ParamLimits

0xfdcc,	// (0x0001b68e) cell_cmode_rocker_pane_g

0x3f0e,	// (0x0000f7d0) bg_button_pane_cp07

0xe2db,	// (0x00019b9d) cell_cmode_itu_pane_g1

0xe2e4,	// (0x00019ba6) cell_cmode_itu_pane_t1

0xe2f2,	// (0x00019bb4) cell_cmode_itu_pane_t2

0x0001,

0xfdd1,	// (0x0001b693) cell_cmode_itu_pane_t

0xda87,	// (0x00019349) aid_touch_ctrl_left

0xda8f,	// (0x00019351) aid_touch_ctrl_right

0x3f0e,	// (0x0000f7d0) compa_mode_pane

0xe300,	// (0x00019bc2) aid_cmod_rocker_key_size_cp

0xe30a,	// (0x00019bcc) aid_cmode_itu_key_size_cp

0xe314,	// (0x00019bd6) compa_mode_pane_g1

0xe31c,	// (0x00019bde) compa_mode_pane_g2

0xe324,	// (0x00019be6) compa_mode_pane_g3

0x0002,

0xfdd6,	// (0x0001b698) compa_mode_pane_g

0xe32c,	// (0x00019bee) main_comp_mode_itu_pane_cp

0xe334,	// (0x00019bf6) main_comp_mode_rocker_pane_cp

0xe33c,	// (0x00019bfe) cell_cmode_itu_pane_cp_ParamLimits

0xe33c,	// (0x00019bfe) cell_cmode_itu_pane_cp

0xe351,	// (0x00019c13) cell_cmode_rocker_pane_cp_ParamLimits

0xe351,	// (0x00019c13) cell_cmode_rocker_pane_cp

0x769c,	// (0x00012f5e) bg_button_pane_cp06_cp_ParamLimits

0x769c,	// (0x00012f5e) bg_button_pane_cp06_cp

0xbf73,	// (0x00017835) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xbf73,	// (0x00017835) cell_cmode_rocker_pane_g1_cp

0xbce9,	// (0x000175ab) cell_cmode_rocker_pane_g2_cp

0x3f0e,	// (0x0000f7d0) bg_button_pane_cp07_cp

0xe363,	// (0x00019c25) cell_cmode_itu_pane_g1_cp

0xe36c,	// (0x00019c2e) cell_cmode_itu_pane_t1_cp

0xe36c,	// (0x00019c2e) cell_cmode_itu_pane_t2_cp

0xaa15,	// (0x000162d7) settings_code_pane_cp2

0x6860,	// (0x00012122) bg_popup_window_pane_cp3_ParamLimits

0x6cf2,	// (0x000125b4) heading_pane_cp3_ParamLimits

0x6cfe,	// (0x000125c0) listscroll_popup_graphic_pane_ParamLimits

0x5a9d,	// (0x0001135f) fep_hwr_aid_pane_ParamLimits

0x5f30,	// (0x000117f2) aid_touch_sctrl_top_ParamLimits

0x5f4b,	// (0x0001180d) sctrl_sk_top_pane_g1_ParamLimits

0x5d0a,	// (0x000115cc) sctrl_sk_top_pane_g2_ParamLimits

0xfd0c,	// (0x0001b5ce) sctrl_sk_top_pane_g_ParamLimits

0x5f58,	// (0x0001181a) sctrl_sk_top_pane_t1_ParamLimits

0x5f30,	// (0x000117f2) aid_touch_sctrl_bottom_ParamLimits

0x5f58,	// (0x0001181a) sctrl_sk_bottom_pane_t1_ParamLimits

0xd9cd,	// (0x0001928f) aid_area_touch_clock

0x614b,	// (0x00011a0d) aid_vkb2_area_top_pane_cell_ParamLimits

0x614b,	// (0x00011a0d) aid_vkb2_area_top_pane_cell

0x627b,	// (0x00011b3d) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x627b,	// (0x00011b3d) aid_vkb2_area_bottom_pane_cell

0xdf36,	// (0x000197f8) popup_char_count_window

0xe37a,	// (0x00019c3c) popup_char_count_window_g1

0xe383,	// (0x00019c45) popup_char_count_window_g2

0xe38c,	// (0x00019c4e) popup_char_count_window_g3

0x0002,

0xfddd,	// (0x0001b69f) popup_char_count_window_g

0xe395,	// (0x00019c57) popup_char_count_window_t1

0x6005,	// (0x000118c7) popup_fep_char_preview_window_ParamLimits

0x6005,	// (0x000118c7) popup_fep_char_preview_window

0x6169,	// (0x00011a2b) vkb2_top_candi_pane_ParamLimits

0x6169,	// (0x00011a2b) vkb2_top_candi_pane

0xe3a3,	// (0x00019c65) cell_vkb2_top_candi_pane_ParamLimits

0xe3a3,	// (0x00019c65) cell_vkb2_top_candi_pane

0x657c,	// (0x00011e3e) bg_popup_fep_char_preview_window_ParamLimits

0x657c,	// (0x00011e3e) bg_popup_fep_char_preview_window

0x658a,	// (0x00011e4c) popup_fep_char_preview_window_t1_ParamLimits

0x658a,	// (0x00011e4c) popup_fep_char_preview_window_t1

0xe3f4,	// (0x00019cb6) bg_popup_fep_char_preview_window_g1

0xe3fc,	// (0x00019cbe) bg_popup_fep_char_preview_window_g2

0xe404,	// (0x00019cc6) bg_popup_fep_char_preview_window_g3

0xe40c,	// (0x00019cce) bg_popup_fep_char_preview_window_g4

0xe414,	// (0x00019cd6) bg_popup_fep_char_preview_window_g5

0x65c4,	// (0x00011e86) bg_popup_fep_char_preview_window_g6

0xe41c,	// (0x00019cde) bg_popup_fep_char_preview_window_g7

0xe424,	// (0x00019ce6) bg_popup_fep_char_preview_window_g8

0xe42c,	// (0x00019cee) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde4,	// (0x0001b6a6) bg_popup_fep_char_preview_window_g

0x5d0a,	// (0x000115cc) cell_vkb2_top_candi_pane_g1_ParamLimits

0x5d0a,	// (0x000115cc) cell_vkb2_top_candi_pane_g1

0x5d18,	// (0x000115da) cell_vkb2_top_candi_pane_g2_ParamLimits

0x5d18,	// (0x000115da) cell_vkb2_top_candi_pane_g2

0xd66f,	// (0x00018f31) cell_vkb2_top_candi_pane_g3_ParamLimits

0xd66f,	// (0x00018f31) cell_vkb2_top_candi_pane_g3

0x65cc,	// (0x00011e8e) cell_vkb2_top_candi_pane_g4_ParamLimits

0x65cc,	// (0x00011e8e) cell_vkb2_top_candi_pane_g4

0xc637,	// (0x00017ef9) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc637,	// (0x00017ef9) cell_vkb2_top_candi_pane_g5

0x65ed,	// (0x00011eaf) cell_vkb2_top_candi_pane_g6_ParamLimits

0x65ed,	// (0x00011eaf) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf7,	// (0x0001b6b9) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf7,	// (0x0001b6b9) cell_vkb2_top_candi_pane_g

0x65fb,	// (0x00011ebd) cell_vkb2_top_candi_pane_t1

0x58fd,	// (0x000111bf) aid_size_touch_slider_mark_ParamLimits

0x58fd,	// (0x000111bf) aid_size_touch_slider_mark

0xe037,	// (0x000198f9) grid_graphic2_catg_pane_ParamLimits

0xe037,	// (0x000198f9) grid_graphic2_catg_pane

0xe0d5,	// (0x00019997) popup_grid_graphic2_window_t1_ParamLimits

0xe0d5,	// (0x00019997) popup_grid_graphic2_window_t1

0xe0e7,	// (0x000199a9) popup_grid_graphic2_window_t2_ParamLimits

0xe0e7,	// (0x000199a9) popup_grid_graphic2_window_t2

0x0001,

0xfdb2,	// (0x0001b674) popup_grid_graphic2_window_t_ParamLimits

0xfdb2,	// (0x0001b674) popup_grid_graphic2_window_t

0x6b04,	// (0x000123c6) bg_button_pane_cp05_ParamLimits

0xe252,	// (0x00019b14) cell_graphic2_control_pane_g1_ParamLimits

0xe434,	// (0x00019cf6) cell_graphic2_catg_pane_ParamLimits

0xe434,	// (0x00019cf6) cell_graphic2_catg_pane

0x3f0e,	// (0x0000f7d0) bg_button_pane_cp12

0xe446,	// (0x00019d08) cell_graphic2_catg_pane_g1

0xd999,	// (0x0001925b) cell_tb_ext_pane_t1_ParamLimits

0x6398,	// (0x00011c5a) vkb2_top_cell_right_narrow_pane_ParamLimits

0x6398,	// (0x00011c5a) vkb2_top_cell_right_narrow_pane

0x63b0,	// (0x00011c72) vkb2_top_cell_right_wide_pane_ParamLimits

0x63b0,	// (0x00011c72) vkb2_top_cell_right_wide_pane

0x5a8f,	// (0x00011351) bg_vkb2_func_pane_ParamLimits

0x5a8f,	// (0x00011351) bg_vkb2_func_pane

0x6421,	// (0x00011ce3) vkb2_top_cell_left_pane_g1_ParamLimits

0x5a8f,	// (0x00011351) bg_vkb2_fuc_pane_cp03_ParamLimits

0x5a8f,	// (0x00011351) bg_vkb2_fuc_pane_cp03

0x6495,	// (0x00011d57) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x941c,	// (0x00014cde) bg_vkb2_func_pane_g1

0x9424,	// (0x00014ce6) bg_vkb2_func_pane_g2

0x9434,	// (0x00014cf6) bg_vkb2_func_pane_g3

0x942c,	// (0x00014cee) bg_vkb2_func_pane_g4

0x943c,	// (0x00014cfe) bg_vkb2_func_pane_g5

0x9444,	// (0x00014d06) bg_vkb2_func_pane_g6

0x944c,	// (0x00014d0e) bg_vkb2_func_pane_g7

0x9454,	// (0x00014d16) bg_vkb2_func_pane_g8

0x9414,	// (0x00014cd6) bg_vkb2_func_pane_g9

0x0008,

0xfe04,	// (0x0001b6c6) bg_vkb2_func_pane_g

0x5a8f,	// (0x00011351) bg_vkb2_fuc_pane_cp01_ParamLimits

0x5a8f,	// (0x00011351) bg_vkb2_fuc_pane_cp01

0x6421,	// (0x00011ce3) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x6421,	// (0x00011ce3) vkb2_top_cell_right_wide_pane_g1

0x5a8f,	// (0x00011351) bg_vkb2_fuc_pane_cp02_ParamLimits

0x5a8f,	// (0x00011351) bg_vkb2_fuc_pane_cp02

0x6495,	// (0x00011d57) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x6495,	// (0x00011d57) vkb2_top_cell_right_narrow_pane_g1

0xd599,	// (0x00018e5b) aid_touch_area_decrease_ParamLimits

0xd599,	// (0x00018e5b) aid_touch_area_decrease

0xd5bd,	// (0x00018e7f) aid_touch_area_increase_ParamLimits

0xd5bd,	// (0x00018e7f) aid_touch_area_increase

0xd5c9,	// (0x00018e8b) aid_touch_area_mute_ParamLimits

0xd5c9,	// (0x00018e8b) aid_touch_area_mute

0xd5ed,	// (0x00018eaf) aid_touch_area_slider_ParamLimits

0xd5ed,	// (0x00018eaf) aid_touch_area_slider

0xd6fe,	// (0x00018fc0) popup_slider_window_g4_ParamLimits

0xd6fe,	// (0x00018fc0) popup_slider_window_g4

0xd70a,	// (0x00018fcc) popup_slider_window_g5_ParamLimits

0xd70a,	// (0x00018fcc) popup_slider_window_g5

0xd72c,	// (0x00018fee) popup_slider_window_g6_ParamLimits

0xd72c,	// (0x00018fee) popup_slider_window_g6

0xd76c,	// (0x0001902e) popup_slider_window_t2_ParamLimits

0xd76c,	// (0x0001902e) popup_slider_window_t2

0x0001,

0xfd00,	// (0x0001b5c2) popup_slider_window_t_ParamLimits

0xfd00,	// (0x0001b5c2) popup_slider_window_t

0xd784,	// (0x00019046) slider_pane_ParamLimits

0xd784,	// (0x00019046) slider_pane

0xe44f,	// (0x00019d11) slider_pane_g1_ParamLimits

0xe44f,	// (0x00019d11) slider_pane_g1

0xe463,	// (0x00019d25) slider_pane_g2_ParamLimits

0xe463,	// (0x00019d25) slider_pane_g2

0xe479,	// (0x00019d3b) slider_pane_g3_ParamLimits

0xe479,	// (0x00019d3b) slider_pane_g3

0x0003,

0xfe17,	// (0x0001b6d9) slider_pane_g_ParamLimits

0xfe17,	// (0x0001b6d9) slider_pane_g

0x8ddf,	// (0x000146a1) popup_tb_float_extension_window_ParamLimits

0x8ddf,	// (0x000146a1) popup_tb_float_extension_window

0xe4a5,	// (0x00019d67) aid_size_cell_tb_float_ext

0x3f0e,	// (0x0000f7d0) bg_popup_sub_window_cp28

0xe4b1,	// (0x00019d73) grid_tb_float_ext_pane

0xe4bd,	// (0x00019d7f) cell_tb_float_ext_pane_ParamLimits

0xe4bd,	// (0x00019d7f) cell_tb_float_ext_pane

0xe4d9,	// (0x00019d9b) cell_tb_float_ext_pane_g1

0xe4e2,	// (0x00019da4) grid_highlight_pane_cp12

0x5be4,	// (0x000114a6) cell_last_hwr_side_pane_ParamLimits

0x5be4,	// (0x000114a6) cell_last_hwr_side_pane

0xbce9,	// (0x000175ab) cell_last_hwr_side_pane_g1

0xe4eb,	// (0x00019dad) cell_last_hwr_side_pane_g2

0x0001,

0xfe20,	// (0x0001b6e2) cell_last_hwr_side_pane_g

0x6347,	// (0x00011c09) vkb2_area_bottom_space_btn_pane_ParamLimits

0x6347,	// (0x00011c09) vkb2_area_bottom_space_btn_pane

0x5d0a,	// (0x000115cc) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdfa9,	// (0x0001986b) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x65fb,	// (0x00011ebd) cell_vkb2_top_candi_pane_t1_ParamLimits

0x6619,	// (0x00011edb) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x6619,	// (0x00011edb) vkb2_area_bottom_space_btn_pane_g1

0x6653,	// (0x00011f15) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x6653,	// (0x00011f15) vkb2_area_bottom_space_btn_pane_g2

0x6689,	// (0x00011f4b) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x6689,	// (0x00011f4b) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe25,	// (0x0001b6e7) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe25,	// (0x0001b6e7) vkb2_area_bottom_space_btn_pane_g

0x5b54,	// (0x00011416) cel_fep_hwr_func_pane_ParamLimits

0x5b54,	// (0x00011416) cel_fep_hwr_func_pane

0x5b90,	// (0x00011452) cell_hwr_side_button_pane_ParamLimits

0x5b90,	// (0x00011452) cell_hwr_side_button_pane

0xd9cd,	// (0x0001928f) aid_area_touch_clock_ParamLimits

0x6b04,	// (0x000123c6) bg_uniindi_top_pane_ParamLimits

0xd9e1,	// (0x000192a3) uniindi_top_pane_g1_ParamLimits

0xd9f7,	// (0x000192b9) uniindi_top_pane_g2_ParamLimits

0xda03,	// (0x000192c5) uniindi_top_pane_g3_ParamLimits

0xda14,	// (0x000192d6) uniindi_top_pane_g4_ParamLimits

0xfd38,	// (0x0001b5fa) uniindi_top_pane_g_ParamLimits

0xda21,	// (0x000192e3) uniindi_top_pane_t1_ParamLimits

0x6b04,	// (0x000123c6) bg_vkb2_func_pane_cp01_ParamLimits

0x6b04,	// (0x000123c6) bg_vkb2_func_pane_cp01

0xe4f4,	// (0x00019db6) cel_fep_hwr_func_pane_g1_ParamLimits

0xe4f4,	// (0x00019db6) cel_fep_hwr_func_pane_g1

0x6b04,	// (0x000123c6) bg_vkb2_func_pane_cp02_ParamLimits

0x6b04,	// (0x000123c6) bg_vkb2_func_pane_cp02

0xe4f4,	// (0x00019db6) cell_hwr_side_button_pane_g1_ParamLimits

0xe4f4,	// (0x00019db6) cell_hwr_side_button_pane_g1

0x9267,	// (0x00014b29) status_pane_g4_ParamLimits

0x9267,	// (0x00014b29) status_pane_g4

0x9281,	// (0x00014b43) status_pane_t1

0xbae3,	// (0x000173a5) form2_midp_gauge_slider_cont_pane

0xbaeb,	// (0x000173ad) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbafd,	// (0x000173bf) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbb0f,	// (0x000173d1) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf8,	// (0x0001b3ba) form2_midp_gauge_slider_pane_t_ParamLimits

0xbb21,	// (0x000173e3) form2_midp_slider_pane_ParamLimits

0x5fcd,	// (0x0001188f) aid_size_cell_func_vkb2_ParamLimits

0x5fcd,	// (0x0001188f) aid_size_cell_func_vkb2

0xe491,	// (0x00019d53) slider_pane_g4_ParamLimits

0xe491,	// (0x00019d53) slider_pane_g4

0x66d3,	// (0x00011f95) form2_midp_gauge_slider_pane_t2_cp01

0x66e1,	// (0x00011fa3) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x66e1,	// (0x00011fa3) form2_midp_gauge_slider_pane_t3_cp01

0x66fe,	// (0x00011fc0) form2_midp_slider_pane_cp01

0x3f0e,	// (0x0000f7d0) navi_smil_pane

0xe52d,	// (0x00019def) navi_smil_pane_g1

0xe535,	// (0x00019df7) navi_smil_pane_t1

0xe502,	// (0x00019dc4) form2_midp_slider_pane_g1

0xe50b,	// (0x00019dcd) form2_midp_slider_pane_g2

0xe513,	// (0x00019dd5) form2_midp_slider_pane_g3

0xe502,	// (0x00019dc4) form2_midp_slider_pane_g4

0xe51b,	// (0x00019ddd) form2_midp_slider_pane_g5

0x0004,

0xfe2e,	// (0x0001b6f0) form2_midp_slider_pane_g

0x66c3,	// (0x00011f85) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x66c3,	// (0x00011f85) vkb2_area_bottom_space_btn_pane_g4

0x907e,	// (0x00014940) lc0_navi_pane_ParamLimits

0x907e,	// (0x00014940) lc0_navi_pane

0x90fa,	// (0x000149bc) lc0_stat_indi_pane_ParamLimits

0x90fa,	// (0x000149bc) lc0_stat_indi_pane

0x9111,	// (0x000149d3) ls0_title_pane_ParamLimits

0x9111,	// (0x000149d3) ls0_title_pane

0x769c,	// (0x00012f5e) bg_popup_sub_pane_cp14_ParamLimits

0xd9b4,	// (0x00019276) list_uniindi_pane_ParamLimits

0xd9c0,	// (0x00019282) uniindi_top_pane_ParamLimits

0xda5f,	// (0x00019321) list_single_uniindi_pane_g1_ParamLimits

0xda72,	// (0x00019334) list_single_uniindi_pane_t1_ParamLimits

0x6707,	// (0x00011fc9) lc0_stat_clock_pane_ParamLimits

0x6707,	// (0x00011fc9) lc0_stat_clock_pane

0xe543,	// (0x00019e05) lc0_stat_indi_pane_g1_ParamLimits

0xe543,	// (0x00019e05) lc0_stat_indi_pane_g1

0xe550,	// (0x00019e12) lc0_stat_indi_pane_g2_ParamLimits

0xe550,	// (0x00019e12) lc0_stat_indi_pane_g2

0x0001,

0xfe39,	// (0x0001b6fb) lc0_stat_indi_pane_g_ParamLimits

0xfe39,	// (0x0001b6fb) lc0_stat_indi_pane_g

0x6714,	// (0x00011fd6) lc0_uni_indicator_pane_ParamLimits

0x6714,	// (0x00011fd6) lc0_uni_indicator_pane

0xe55d,	// (0x00019e1f) ls0_title_pane_g1_ParamLimits

0xe55d,	// (0x00019e1f) ls0_title_pane_g1

0xe571,	// (0x00019e33) ls0_title_pane_t1_ParamLimits

0xe571,	// (0x00019e33) ls0_title_pane_t1

0x6721,	// (0x00011fe3) lc0_uni_indicator_pane_g1_ParamLimits

0x6721,	// (0x00011fe3) lc0_uni_indicator_pane_g1

0xe5a7,	// (0x00019e69) lc0_stat_clock_pane_t1

0x3f0e,	// (0x0000f7d0) main_ai5_pane

0xe5b5,	// (0x00019e77) ai5_sk_pane_ParamLimits

0xe5b5,	// (0x00019e77) ai5_sk_pane

0xe5c2,	// (0x00019e84) cell_ai5_widget_pane_ParamLimits

0xe5c2,	// (0x00019e84) cell_ai5_widget_pane

0xe638,	// (0x00019efa) aid_size_cell_widget_grid

0xe64c,	// (0x00019f0e) bg_ai5_widget_pane_ParamLimits

0xe64c,	// (0x00019f0e) bg_ai5_widget_pane

0xe674,	// (0x00019f36) cell_ai5_widget_pane_g2

0xe684,	// (0x00019f46) cell_ai5_widget_pane_g3

0xe6a3,	// (0x00019f65) cell_ai5_widget_pane_g4

0xe6af,	// (0x00019f71) cell_ai5_widget_pane_g5

0xe6bb,	// (0x00019f7d) cell_ai5_widget_pane_g6

0xe6c9,	// (0x00019f8b) cell_ai5_widget_pane_g7

0xe711,	// (0x00019fd3) cell_ai5_widget_pane_t1_ParamLimits

0xe711,	// (0x00019fd3) cell_ai5_widget_pane_t1

0xe72e,	// (0x00019ff0) cell_ai5_widget_pane_t2_ParamLimits

0xe72e,	// (0x00019ff0) cell_ai5_widget_pane_t2

0xe746,	// (0x0001a008) cell_ai5_widget_pane_t3_ParamLimits

0xe746,	// (0x0001a008) cell_ai5_widget_pane_t3

0xe75e,	// (0x0001a020) cell_ai5_widget_pane_t4_ParamLimits

0xe75e,	// (0x0001a020) cell_ai5_widget_pane_t4

0xe778,	// (0x0001a03a) cell_ai5_widget_pane_t5_ParamLimits

0xe778,	// (0x0001a03a) cell_ai5_widget_pane_t5

0xe797,	// (0x0001a059) cell_ai5_widget_pane_t6_ParamLimits

0xe797,	// (0x0001a059) cell_ai5_widget_pane_t6

0xe7a9,	// (0x0001a06b) cell_ai5_widget_pane_t7_ParamLimits

0xe7a9,	// (0x0001a06b) cell_ai5_widget_pane_t7

0xe7c2,	// (0x0001a084) cell_ai5_widget_pane_t8_ParamLimits

0xe7c2,	// (0x0001a084) cell_ai5_widget_pane_t8

0x0009,

0xfe53,	// (0x0001b715) cell_ai5_widget_pane_t_ParamLimits

0xfe53,	// (0x0001b715) cell_ai5_widget_pane_t

0xe80e,	// (0x0001a0d0) grid_ai5_widget_pane

0x769c,	// (0x00012f5e) highlight_cell_ai5_widget_pane_ParamLimits

0x769c,	// (0x00012f5e) highlight_cell_ai5_widget_pane

0xe825,	// (0x0001a0e7) ai5_sk_left_pane

0xe82f,	// (0x0001a0f1) ai5_sk_middle_pane

0xe839,	// (0x0001a0fb) ai5_sk_right_pane

0xe843,	// (0x0001a105) bg_ai5_widget_pane_g1_ParamLimits

0xe843,	// (0x0001a105) bg_ai5_widget_pane_g1

0xe84f,	// (0x0001a111) bg_ai5_widget_pane_g2_ParamLimits

0xe84f,	// (0x0001a111) bg_ai5_widget_pane_g2

0xe85b,	// (0x0001a11d) bg_ai5_widget_pane_g3_ParamLimits

0xe85b,	// (0x0001a11d) bg_ai5_widget_pane_g3

0xe867,	// (0x0001a129) bg_ai5_widget_pane_g4_ParamLimits

0xe867,	// (0x0001a129) bg_ai5_widget_pane_g4

0xe873,	// (0x0001a135) bg_ai5_widget_pane_g5_ParamLimits

0xe873,	// (0x0001a135) bg_ai5_widget_pane_g5

0xe87f,	// (0x0001a141) bg_ai5_widget_pane_g6_ParamLimits

0xe87f,	// (0x0001a141) bg_ai5_widget_pane_g6

0xe88b,	// (0x0001a14d) bg_ai5_widget_pane_g7_ParamLimits

0xe88b,	// (0x0001a14d) bg_ai5_widget_pane_g7

0xe897,	// (0x0001a159) bg_ai5_widget_pane_g8_ParamLimits

0xe897,	// (0x0001a159) bg_ai5_widget_pane_g8

0xe8a3,	// (0x0001a165) bg_ai5_widget_pane_g9_ParamLimits

0xe8a3,	// (0x0001a165) bg_ai5_widget_pane_g9

0x0008,

0xfe68,	// (0x0001b72a) bg_ai5_widget_pane_g_ParamLimits

0xfe68,	// (0x0001b72a) bg_ai5_widget_pane_g

0xe8ca,	// (0x0001a18c) cell_shortcut_ai5_widget_pane_ParamLimits

0xe8ca,	// (0x0001a18c) cell_shortcut_ai5_widget_pane

0x6946,	// (0x00012208) bg_cell_shortcut_ai5_widget_pane

0xe8dc,	// (0x0001a19e) cell_grid_ai5_widget_pane_g1

0xe8e5,	// (0x0001a1a7) highlight_cell_shortcut_ai5_widget_pane

0x941c,	// (0x00014cde) ai5_sk_left_pane_g1

0xe8ed,	// (0x0001a1af) ai5_sk_left_pane_g2

0xe8f5,	// (0x0001a1b7) ai5_sk_left_pane_g3

0xe8fd,	// (0x0001a1bf) ai5_sk_left_pane_g4

0x0003,

0xfe7b,	// (0x0001b73d) ai5_sk_left_pane_g

0xe905,	// (0x0001a1c7) ai5_sk_left_pane_t1

0x9424,	// (0x00014ce6) ai5_sk_right_pane_g1

0xe913,	// (0x0001a1d5) ai5_sk_right_pane_g2

0xe91b,	// (0x0001a1dd) ai5_sk_right_pane_g3

0xe923,	// (0x0001a1e5) ai5_sk_right_pane_g4

0x0003,

0xfe84,	// (0x0001b746) ai5_sk_right_pane_g

0xe92b,	// (0x0001a1ed) ai5_sk_right_pane_t1

0x9424,	// (0x00014ce6) ai5_sk_middle_pane_g1

0x941c,	// (0x00014cde) ai5_sk_middle_pane_g2

0x943c,	// (0x00014cfe) ai5_sk_middle_pane_g3

0xe91b,	// (0x0001a1dd) ai5_sk_middle_pane_g4

0xe8f5,	// (0x0001a1b7) ai5_sk_middle_pane_g5

0xe939,	// (0x0001a1fb) ai5_sk_middle_pane_g6

0xe941,	// (0x0001a203) ai5_sk_middle_pane_g7

0x0006,

0xfe8d,	// (0x0001b74f) ai5_sk_middle_pane_g

0x8f00,	// (0x000147c2) aid_touch_area_size_lc0_ParamLimits

0x8f00,	// (0x000147c2) aid_touch_area_size_lc0

0x5d39,	// (0x000115fb) cell_hwr_candidate_pane_t1_ParamLimits

0x8f1e,	// (0x000147e0) aid_touch_navi_pane

0x9211,	// (0x00014ad3) status_dt_navi_pane_ParamLimits

0x9211,	// (0x00014ad3) status_dt_navi_pane

0x921e,	// (0x00014ae0) status_dt_sta_pane_ParamLimits

0x921e,	// (0x00014ae0) status_dt_sta_pane

0xe949,	// (0x0001a20b) dt_sta_controll_pane

0xe956,	// (0x0001a218) dt_sta_indi_pane

0xe967,	// (0x0001a229) dt_sta_title_pane

0x6b04,	// (0x000123c6) bg_dt_sta_indi_pane_ParamLimits

0x6b04,	// (0x000123c6) bg_dt_sta_indi_pane

0xe97a,	// (0x0001a23c) dt_sta_battery_pane

0xe982,	// (0x0001a244) dt_sta_indi_pane_g1

0xe98b,	// (0x0001a24d) dt_sta_indi_pane_g2

0xe994,	// (0x0001a256) dt_sta_indi_pane_g3

0x0002,

0xfe9c,	// (0x0001b75e) dt_sta_indi_pane_g

0xe99d,	// (0x0001a25f) dt_sta_signal_pane

0x769c,	// (0x00012f5e) bg_dt_sta_title_pane_ParamLimits

0x769c,	// (0x00012f5e) bg_dt_sta_title_pane

0xe9a6,	// (0x0001a268) dt_sta_title_pane_g1

0xe9ae,	// (0x0001a270) dt_sta_title_pane_t1_ParamLimits

0xe9ae,	// (0x0001a270) dt_sta_title_pane_t1

0x3f0e,	// (0x0000f7d0) bg_dt_sta_control_pane

0xe9c3,	// (0x0001a285) dt_sta_controll_pane_g1

0xe9cc,	// (0x0001a28e) bg_dt_sta_title_pane_g1

0xe9d5,	// (0x0001a297) bg_dt_sta_title_pane_g2

0xe9de,	// (0x0001a2a0) bg_dt_sta_title_pane_g3

0x0002,

0xfea3,	// (0x0001b765) bg_dt_sta_title_pane_g

0xbce9,	// (0x000175ab) bg_dt_sta_indi_pane_g1

0xe9e7,	// (0x0001a2a9) dt_sta_signal_pane_g1

0xe9ef,	// (0x0001a2b1) dt_sta_signal_pane_g2

0x0001,

0xfeaa,	// (0x0001b76c) dt_sta_signal_pane_g

0xe9f7,	// (0x0001a2b9) dt_sta_battery_pane_g1

0xea00,	// (0x0001a2c2) dt_sta_battery_pane_t1

0xbce9,	// (0x000175ab) bg_dt_sta_control_pane_g1

0x7f85,	// (0x00013847) fep_china_uni_eep_pane

0x7f8d,	// (0x0001384f) fep_china_uni_entry_pane_ParamLimits

0x7f9d,	// (0x0001385f) popup_fep_china_uni_window_g1_ParamLimits

0x7fad,	// (0x0001386f) popup_fep_china_uni_window_g2_ParamLimits

0x7fad,	// (0x0001386f) popup_fep_china_uni_window_g2

0x0001,

0xf730,	// (0x0001aff2) popup_fep_china_uni_window_g_ParamLimits

0xf730,	// (0x0001aff2) popup_fep_china_uni_window_g

0xea0f,	// (0x0001a2d1) fep_china_uni_eep_pane_g1

0xea17,	// (0x0001a2d9) fep_china_uni_eep_pane_t1

0xe524,	// (0x00019de6) aid_touch_area_size_smil_player

0x9076,	// (0x00014938) lc0_clock_pane

0x9275,	// (0x00014b37) status_pane_g5_ParamLimits

0x9275,	// (0x00014b37) status_pane_g5

0x8a64,	// (0x00014326) popup_keymap_window

0x9233,	// (0x00014af5) status_icon_pane

0xe684,	// (0x00019f46) cell_ai5_widget_pane_g3_ParamLimits

0xe6a3,	// (0x00019f65) cell_ai5_widget_pane_g4_ParamLimits

0xe6af,	// (0x00019f71) cell_ai5_widget_pane_g5_ParamLimits

0xe6d5,	// (0x00019f97) cell_ai5_widget_pane_g8_ParamLimits

0xe6d5,	// (0x00019f97) cell_ai5_widget_pane_g8

0xe6e9,	// (0x00019fab) cell_ai5_widget_pane_g9_ParamLimits

0xe6e9,	// (0x00019fab) cell_ai5_widget_pane_g9

0xe6fd,	// (0x00019fbf) cell_ai5_widget_pane_g10_ParamLimits

0xe6fd,	// (0x00019fbf) cell_ai5_widget_pane_g10

0xea26,	// (0x0001a2e8) status_icon_pane_g1

0x3f0e,	// (0x0000f7d0) bg_popup_sub_pane_cp13

0xea2e,	// (0x0001a2f0) popup_keymap_window_t1

0x87ee,	// (0x000140b0) control_pane_g6_ParamLimits

0x87ee,	// (0x000140b0) control_pane_g6

0x87fb,	// (0x000140bd) control_pane_g7_ParamLimits

0x87fb,	// (0x000140bd) control_pane_g7

0x8808,	// (0x000140ca) control_pane_g8_ParamLimits

0x8808,	// (0x000140ca) control_pane_g8

0xe949,	// (0x0001a20b) dt_sta_controll_pane_ParamLimits

0xe956,	// (0x0001a218) dt_sta_indi_pane_ParamLimits

0xe967,	// (0x0001a229) dt_sta_title_pane_ParamLimits

0x7039,	// (0x000128fb) aid_size_touch_scroll_bar_cale

0x4d8a,	// (0x0001064c) popup_discreet_window_ParamLimits

0x4d8a,	// (0x0001064c) popup_discreet_window

0x4e18,	// (0x000106da) popup_sk_window

0x9ada,	// (0x0001539c) bg_popup_sub_pane_cp28_ParamLimits

0x9ada,	// (0x0001539c) bg_popup_sub_pane_cp28

0xea3c,	// (0x0001a2fe) popup_discreet_window_g1_ParamLimits

0xea3c,	// (0x0001a2fe) popup_discreet_window_g1

0xea5c,	// (0x0001a31e) popup_discreet_window_t1_ParamLimits

0xea5c,	// (0x0001a31e) popup_discreet_window_t1

0xea7a,	// (0x0001a33c) popup_discreet_window_t2_ParamLimits

0xea7a,	// (0x0001a33c) popup_discreet_window_t2

0x0002,

0xfeaf,	// (0x0001b771) popup_discreet_window_t_ParamLimits

0xfeaf,	// (0x0001b771) popup_discreet_window_t

0x6734,	// (0x00011ff6) popup_sk_window_g1

0x673e,	// (0x00012000) popup_sk_window_g2

0x0001,

0xfeb6,	// (0x0001b778) popup_sk_window_g

0xeacc,	// (0x0001a38e) popup_sk_window_t1

0xeada,	// (0x0001a39c) popup_sk_window_t1_copy1

0xe674,	// (0x00019f36) cell_ai5_widget_pane_g2_ParamLimits

0xe7d4,	// (0x0001a096) cell_ai5_widget_pane_t9_ParamLimits

0xe7d4,	// (0x0001a096) cell_ai5_widget_pane_t9

0x3f0e,	// (0x0000f7d0) main_fep_fshwr2_pane

0xeae8,	// (0x0001a3aa) aid_fshwr2_btn_pane

0xeaf0,	// (0x0001a3b2) aid_fshwr2_syb_pane

0xeaf8,	// (0x0001a3ba) aid_fshwr2_txt_pane

0xeb00,	// (0x0001a3c2) fshwr2_func_candi_pane

0xeb0a,	// (0x0001a3cc) fshwr2_hwr_syb_pane

0xeb14,	// (0x0001a3d6) fshwr2_icf_pane

0x3f0e,	// (0x0000f7d0) fshwr2_icf_bg_pane

0xeb36,	// (0x0001a3f8) fshwr2_icf_pane_t1_ParamLimits

0xeb36,	// (0x0001a3f8) fshwr2_icf_pane_t1

0xbce9,	// (0x000175ab) fshwr2_func_candi_pane_g1

0xeb4d,	// (0x0001a40f) fshwr2_func_candi_row_pane_ParamLimits

0xeb4d,	// (0x0001a40f) fshwr2_func_candi_row_pane

0xeb5e,	// (0x0001a420) cell_fshwr2_syb_pane_ParamLimits

0xeb5e,	// (0x0001a420) cell_fshwr2_syb_pane

0xbf73,	// (0x00017835) fshwr2_hwr_syb_pane_g1_ParamLimits

0xbf73,	// (0x00017835) fshwr2_hwr_syb_pane_g1

0x3f0e,	// (0x0000f7d0) bg_popup_call_pane_cp01

0xeb78,	// (0x0001a43a) fshwr2_func_candi_cell_pane_ParamLimits

0xeb78,	// (0x0001a43a) fshwr2_func_candi_cell_pane

0xebaa,	// (0x0001a46c) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xebaa,	// (0x0001a46c) fshwr2_func_candi_cell_bg_pane

0xebc4,	// (0x0001a486) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xebc4,	// (0x0001a486) fshwr2_func_candi_cell_pane_g1

0xebe4,	// (0x0001a4a6) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xebe4,	// (0x0001a4a6) fshwr2_func_candi_cell_pane_t1

0x3f0e,	// (0x0000f7d0) bg_button_pane_cp08

0x8513,	// (0x00013dd5) cell_fshwr2_syb_bg_pane

0xebf7,	// (0x0001a4b9) cell_fshwr2_syb_bg_pane_g1

0xebff,	// (0x0001a4c1) cell_fshwr2_syb_bg_pane_t1

0x769c,	// (0x00012f5e) main_tmo_pane

0xa604,	// (0x00015ec6) uni_indicator_pane_g1_ParamLimits

0xa619,	// (0x00015edb) uni_indicator_pane_g2_ParamLimits

0xa62f,	// (0x00015ef1) uni_indicator_pane_g3_ParamLimits

0xa645,	// (0x00015f07) uni_indicator_pane_g4_ParamLimits

0xa645,	// (0x00015f07) uni_indicator_pane_g4

0xa659,	// (0x00015f1b) uni_indicator_pane_g5_ParamLimits

0xa659,	// (0x00015f1b) uni_indicator_pane_g5

0xa66d,	// (0x00015f2f) uni_indicator_pane_g6_ParamLimits

0xa66d,	// (0x00015f2f) uni_indicator_pane_g6

0xf92d,	// (0x0001b1ef) uni_indicator_pane_g_ParamLimits

0xd569,	// (0x00018e2b) popup_tmo_note_window_ParamLimits

0xd569,	// (0x00018e2b) popup_tmo_note_window

0x3f0e,	// (0x0000f7d0) fshwr2_bg_pane

0xebd5,	// (0x0001a497) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xebd5,	// (0x0001a497) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfebb,	// (0x0001b77d) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfebb,	// (0x0001b77d) fshwr2_func_candi_cell_pane_g

0xbce9,	// (0x000175ab) bg_popup_window_pane_cp01

0xec0e,	// (0x0001a4d0) bg_popup_window_pane_g1_cp01

0xec17,	// (0x0001a4d9) bg_popup_window_pane_cp22_ParamLimits

0xec17,	// (0x0001a4d9) bg_popup_window_pane_cp22

0xec25,	// (0x0001a4e7) listscroll_tmo_link_pane_ParamLimits

0xec25,	// (0x0001a4e7) listscroll_tmo_link_pane

0xec65,	// (0x0001a527) popup_tmo_note_window_g1_ParamLimits

0xec65,	// (0x0001a527) popup_tmo_note_window_g1

0xec72,	// (0x0001a534) tmo_note_info_pane_ParamLimits

0xec72,	// (0x0001a534) tmo_note_info_pane

0xec8c,	// (0x0001a54e) list_tmo_note_info_pane_g1_ParamLimits

0xec8c,	// (0x0001a54e) list_tmo_note_info_pane_g1

0xeca3,	// (0x0001a565) list_tmo_note_info_pane_g2_ParamLimits

0xeca3,	// (0x0001a565) list_tmo_note_info_pane_g2

0x0001,

0xfec0,	// (0x0001b782) list_tmo_note_info_pane_g_ParamLimits

0xfec0,	// (0x0001b782) list_tmo_note_info_pane_g

0xecbf,	// (0x0001a581) list_tmo_note_info_text_pane_ParamLimits

0xecbf,	// (0x0001a581) list_tmo_note_info_text_pane

0xed44,	// (0x0001a606) list_tmo_link_pane

0xed51,	// (0x0001a613) scroll_pane_cp20

0xed5e,	// (0x0001a620) list_single_tmo_link_pane_ParamLimits

0xed5e,	// (0x0001a620) list_single_tmo_link_pane

0xed6e,	// (0x0001a630) list_single_tmo_link_pane_t1

0xed7c,	// (0x0001a63e) list_tmo_note_info_text_pane_t1_ParamLimits

0xed7c,	// (0x0001a63e) list_tmo_note_info_text_pane_t1

0x78c4,	// (0x00013186) aid_size_touch_scroll_bar_cp01_ParamLimits

0x78c4,	// (0x00013186) aid_size_touch_scroll_bar_cp01

0x7756,	// (0x00013018) aid_size_touch_slider_marker

0x4e00,	// (0x000106c2) popup_settings_window_ParamLimits

0x4e00,	// (0x000106c2) popup_settings_window

0x88c9,	// (0x0001418b) popup_candi_list_indi_window

0x8f1e,	// (0x000147e0) aid_touch_navi_pane_ParamLimits

0x5f04,	// (0x000117c6) rs_clock_indi_pane

0x5f0d,	// (0x000117cf) sctrl_sk_bottom_pane_ParamLimits

0x5f1e,	// (0x000117e0) sctrl_sk_top_pane_ParamLimits

0x601f,	// (0x000118e1) popup_fep_tooltip_window

0xe638,	// (0x00019efa) aid_size_cell_widget_grid_ParamLimits

0xe668,	// (0x00019f2a) cell_ai5_widget_pane_g1_ParamLimits

0xe668,	// (0x00019f2a) cell_ai5_widget_pane_g1

0xe6bb,	// (0x00019f7d) cell_ai5_widget_pane_g6_ParamLimits

0xe6c9,	// (0x00019f8b) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe3e,	// (0x0001b700) cell_ai5_widget_pane_g_ParamLimits

0xfe3e,	// (0x0001b700) cell_ai5_widget_pane_g

0xe7f8,	// (0x0001a0ba) cell_ai5_widget_pane_t10_ParamLimits

0xe7f8,	// (0x0001a0ba) cell_ai5_widget_pane_t10

0xe80e,	// (0x0001a0d0) grid_ai5_widget_pane_ParamLimits

0xe8af,	// (0x0001a171) cell_contacts_ai5_widget_pane_ParamLimits

0xe8af,	// (0x0001a171) cell_contacts_ai5_widget_pane

0xea8f,	// (0x0001a351) popup_discreet_window_t3_ParamLimits

0xea8f,	// (0x0001a351) popup_discreet_window_t3

0xeb1e,	// (0x0001a3e0) popup_fshwr2_char_preview_window_ParamLimits

0xeb1e,	// (0x0001a3e0) popup_fshwr2_char_preview_window

0xecdd,	// (0x0001a59f) tmo_note_info_pane_t1

0xecf2,	// (0x0001a5b4) tmo_note_info_pane_t2

0xed0b,	// (0x0001a5cd) tmo_note_info_pane_t3

0xed20,	// (0x0001a5e2) tmo_note_info_pane_t4

0xed32,	// (0x0001a5f4) tmo_note_info_pane_t5

0x0004,

0xfec5,	// (0x0001b787) tmo_note_info_pane_t

0xed44,	// (0x0001a606) list_tmo_link_pane_ParamLimits

0xed51,	// (0x0001a613) scroll_pane_cp20_ParamLimits

0x3f0e,	// (0x0000f7d0) bg_popup_fep_char_preview_window_cp01

0xed95,	// (0x0001a657) popup_fshwr2_char_preview_window_t1

0xeda3,	// (0x0001a665) popup_candi_list_indi_window_g1

0xedac,	// (0x0001a66e) bg_cell_contacts_ai5_widget_pane

0xedb8,	// (0x0001a67a) cell_contacts_ai5_widget_pane_g1

0xedcc,	// (0x0001a68e) cell_contacts_ai5_widget_pane_g2

0xeddb,	// (0x0001a69d) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfed0,	// (0x0001b792) cell_contacts_ai5_widget_pane_g

0xedee,	// (0x0001a6b0) cell_contacts_ai5_widget_pane_t1

0x769c,	// (0x00012f5e) highlight_cell_shortcut_ai5_widget_pane_cp01

0xee68,	// (0x0001a72a) settings_container_pane

0x8513,	// (0x00013dd5) listscroll_set_pane_copy1

0xb291,	// (0x00016b53) scroll_pane_cp121_copy1

0xee74,	// (0x0001a736) set_content_pane_copy1

0xee7c,	// (0x0001a73e) aid_height_set_list_copy1_ParamLimits

0xee7c,	// (0x0001a73e) aid_height_set_list_copy1

0xa895,	// (0x00016157) aid_size_parent_copy1_ParamLimits

0xa895,	// (0x00016157) aid_size_parent_copy1

0xee88,	// (0x0001a74a) button_value_adjust_pane_cp6_copy1_ParamLimits

0xee88,	// (0x0001a74a) button_value_adjust_pane_cp6_copy1

0x88a1,	// (0x00014163) list_highlight_pane_cp2_copy1_ParamLimits

0x88a1,	// (0x00014163) list_highlight_pane_cp2_copy1

0xee9c,	// (0x0001a75e) list_set_pane_copy1_ParamLimits

0xee9c,	// (0x0001a75e) list_set_pane_copy1

0xee03,	// (0x0001a6c5) main_pane_set_t1_copy1_ParamLimits

0xee03,	// (0x0001a6c5) main_pane_set_t1_copy1

0xee3d,	// (0x0001a6ff) main_pane_set_t2_copy1_ParamLimits

0xee3d,	// (0x0001a6ff) main_pane_set_t2_copy1

0xef63,	// (0x0001a825) main_pane_set_t3_copy1

0xef71,	// (0x0001a833) main_pane_set_t4_copy1

0xee5c,	// (0x0001a71e) set_content_pane_g1_copy1_ParamLimits

0xee5c,	// (0x0001a71e) set_content_pane_g1_copy1

0xef7f,	// (0x0001a841) setting_code_pane_copy1

0xef89,	// (0x0001a84b) setting_slider_graphic_pane_copy1

0xef89,	// (0x0001a84b) setting_slider_pane_copy1

0xef89,	// (0x0001a84b) setting_text_pane_copy1

0xef93,	// (0x0001a855) setting_volume_pane_copy1

0xef9c,	// (0x0001a85e) settings_code_pane_cp2_copy1

0xefa4,	// (0x0001a866) settings_code_pane_cp_copy1_ParamLimits

0xefa4,	// (0x0001a866) settings_code_pane_cp_copy1

0xefb8,	// (0x0001a87a) volume_set_pane_copy1

0xefc4,	// (0x0001a886) volume_set_pane_g10_copy1

0xefd0,	// (0x0001a892) volume_set_pane_g1_copy1

0xefda,	// (0x0001a89c) volume_set_pane_g2_copy1

0xefe4,	// (0x0001a8a6) volume_set_pane_g3_copy1

0xefee,	// (0x0001a8b0) volume_set_pane_g4_copy1

0xeff8,	// (0x0001a8ba) volume_set_pane_g5_copy1

0xf002,	// (0x0001a8c4) volume_set_pane_g6_copy1

0xf00c,	// (0x0001a8ce) volume_set_pane_g7_copy1

0xf016,	// (0x0001a8d8) volume_set_pane_g8_copy1

0xf020,	// (0x0001a8e2) volume_set_pane_g9_copy1

0x6860,	// (0x00012122) bg_set_opt_pane_cp_copy1_ParamLimits

0x6860,	// (0x00012122) bg_set_opt_pane_cp_copy1

0xf02a,	// (0x0001a8ec) setting_slider_pane_t1_copy1_ParamLimits

0xf02a,	// (0x0001a8ec) setting_slider_pane_t1_copy1

0xf048,	// (0x0001a90a) setting_slider_pane_t2_copy1_ParamLimits

0xf048,	// (0x0001a90a) setting_slider_pane_t2_copy1

0xf062,	// (0x0001a924) setting_slider_pane_t3_copy1_ParamLimits

0xf062,	// (0x0001a924) setting_slider_pane_t3_copy1

0xf07a,	// (0x0001a93c) slider_set_pane_copy1_ParamLimits

0xf07a,	// (0x0001a93c) slider_set_pane_copy1

0x77d8,	// (0x0001309a) set_opt_bg_pane_g1_copy2

0x77e0,	// (0x000130a2) set_opt_bg_pane_g2_copy2

0xf090,	// (0x0001a952) set_opt_bg_pane_g3_copy2

0x77f0,	// (0x000130b2) set_opt_bg_pane_g4_copy2

0x77f8,	// (0x000130ba) set_opt_bg_pane_g5_copy2

0x7800,	// (0x000130c2) set_opt_bg_pane_g6_copy2

0xf09a,	// (0x0001a95c) set_opt_bg_pane_g7_copy2

0xf0a4,	// (0x0001a966) set_opt_bg_pane_g8_copy2

0xf0ae,	// (0x0001a970) set_opt_bg_pane_g9_copy2

0x6748,	// (0x0001200a) aid_size_touch_slider_mark_copy1_ParamLimits

0x6748,	// (0x0001200a) aid_size_touch_slider_mark_copy1

0xf0b8,	// (0x0001a97a) slider_set_pane_g1_copy1

0x675c,	// (0x0001201e) slider_set_pane_g2_copy1

0x591d,	// (0x000111df) slider_set_pane_g3_copy1_ParamLimits

0x591d,	// (0x000111df) slider_set_pane_g3_copy1

0x5931,	// (0x000111f3) slider_set_pane_g4_copy1_ParamLimits

0x5931,	// (0x000111f3) slider_set_pane_g4_copy1

0x5949,	// (0x0001120b) slider_set_pane_g5_copy1_ParamLimits

0x5949,	// (0x0001120b) slider_set_pane_g5_copy1

0x591d,	// (0x000111df) slider_set_pane_g6_copy1_ParamLimits

0x591d,	// (0x000111df) slider_set_pane_g6_copy1

0x6764,	// (0x00012026) slider_set_pane_g7_copy1_ParamLimits

0x6764,	// (0x00012026) slider_set_pane_g7_copy1

0x4091,	// (0x0000f953) bg_set_opt_pane_cp2_copy1

0xf0c1,	// (0x0001a983) setting_slider_graphic_pane_g1_copy1

0xf0ca,	// (0x0001a98c) setting_slider_graphic_pane_t1_copy1

0xf0da,	// (0x0001a99c) setting_slider_graphic_pane_t2_copy1

0xf0ea,	// (0x0001a9ac) slider_set_pane_cp_copy1

0xf0fa,	// (0x0001a9bc) input_focus_pane_cp1_copy1

0xf103,	// (0x0001a9c5) list_set_text_pane_copy1

0xf10b,	// (0x0001a9cd) setting_text_pane_g1_copy1

0xf114,	// (0x0001a9d6) set_text_pane_t1_copy1

0xf0fa,	// (0x0001a9bc) input_focus_pane_cp2_copy1

0xf10b,	// (0x0001a9cd) setting_code_pane_g1_copy1

0xf12d,	// (0x0001a9ef) setting_code_pane_t1_copy1

0xf13b,	// (0x0001a9fd) list_set_graphic_pane_copy1

0x4091,	// (0x0000f953) bg_set_opt_pane_cp4_copy1

0x820d,	// (0x00013acf) list_set_graphic_pane_g1_copy1_ParamLimits

0x820d,	// (0x00013acf) list_set_graphic_pane_g1_copy1

0xf14d,	// (0x0001aa0f) list_set_graphic_pane_g2_copy1

0x8225,	// (0x00013ae7) list_set_graphic_pane_t1_copy1_ParamLimits

0x8225,	// (0x00013ae7) list_set_graphic_pane_t1_copy1

0xbce9,	// (0x000175ab) rs_clock_indi_pane_g1

0xf155,	// (0x0001aa17) rs_clock_indi_pane_t1

0xf163,	// (0x0001aa25) rs_indi_pane

0xf16b,	// (0x0001aa2d) rs_indi_pane_g1

0xf174,	// (0x0001aa36) rs_indi_pane_g2

0xf17d,	// (0x0001aa3f) rs_indi_pane_g3

0x0002,

0xfed7,	// (0x0001b799) rs_indi_pane_g

0x8513,	// (0x00013dd5) bg_popup_preview_window_pane_cp03

0xf186,	// (0x0001aa48) popup_fep_tooltip_window_t1

0xcbbf,	// (0x00018481) popup_note2_window_g2_ParamLimits

0xcbbf,	// (0x00018481) popup_note2_window_g2

0x0001,

0xfc70,	// (0x0001b532) popup_note2_window_g_ParamLimits

0xfc70,	// (0x0001b532) popup_note2_window_g

0xd1b6,	// (0x00018a78) bg_popup_sub_pane_cp11_ParamLimits

0xd1c3,	// (0x00018a85) cell_ai3_links_pane_g1_ParamLimits

0xd1da,	// (0x00018a9c) cell_ai3_links_pane_t1

0xf114,	// (0x0001a9d6) set_text_pane_t1_copy1_ParamLimits

0x8420,	// (0x00013ce2) cell_graphic_popup_pane_cp2_ParamLimits

0x8420,	// (0x00013ce2) cell_graphic_popup_pane_cp2

0xf194,	// (0x0001aa56) cell_graphic_popup_pane_g1_cp2

0x6e4c,	// (0x0001270e) cell_graphic_popup_pane_g2_cp2

0xf19c,	// (0x0001aa5e) cell_graphic_popup_pane_g3_cp2

0xf1a4,	// (0x0001aa66) cell_graphic_popup_pane_t2_cp2

0x6e5d,	// (0x0001271f) grid_highlight_pane_cp3_cp2

0x7bb1,	// (0x00013473) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x769c,	// (0x00012f5e) main_tmo_pane_ParamLimits

0xd55d,	// (0x00018e1f) popup_tmo_big_image_note_window

0xe658,	// (0x00019f1a) cell_ai5_widget_list_pane

0xe660,	// (0x00019f22) cell_ai5_widget_lrg_icon_pane

0xecdd,	// (0x0001a59f) tmo_note_info_pane_t1_ParamLimits

0xecf2,	// (0x0001a5b4) tmo_note_info_pane_t2_ParamLimits

0xed0b,	// (0x0001a5cd) tmo_note_info_pane_t3_ParamLimits

0xed20,	// (0x0001a5e2) tmo_note_info_pane_t4_ParamLimits

0xed32,	// (0x0001a5f4) tmo_note_info_pane_t5_ParamLimits

0xfec5,	// (0x0001b787) tmo_note_info_pane_t_ParamLimits

0xee68,	// (0x0001a72a) settings_container_pane_ParamLimits

0xf0f2,	// (0x0001a9b4) indicator_popup_pane_cp5

0xf0f2,	// (0x0001a9b4) indicator_popup_pane_cp6

0xf13b,	// (0x0001a9fd) list_set_graphic_pane_copy1_ParamLimits

0x3f0e,	// (0x0000f7d0) bg_popup_window_pane_cp23

0xf1b2,	// (0x0001aa74) popup_tmo_big_image_note_window_g1

0xf1be,	// (0x0001aa80) popup_tmo_big_image_note_window_t1

0xf1ce,	// (0x0001aa90) popup_tmo_big_image_note_window_t2

0xf1de,	// (0x0001aaa0) popup_tmo_big_image_note_window_t3

0x0002,

0xfede,	// (0x0001b7a0) popup_tmo_big_image_note_window_t

0xf1ee,	// (0x0001aab0) cell_ai5_widget_lrg_icon_pane_g1

0xf1f6,	// (0x0001aab8) cell_ai5_widget_lrg_icon_pane_t1

0xf204,	// (0x0001aac6) cell_ai5_widget_list_row_pane_ParamLimits

0xf204,	// (0x0001aac6) cell_ai5_widget_list_row_pane

0xf21d,	// (0x0001aadf) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf21d,	// (0x0001aadf) cell_ai5_widget_list_row_pane_g1

0xf22a,	// (0x0001aaec) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf22a,	// (0x0001aaec) cell_ai5_widget_list_row_pane_t1

0xf242,	// (0x0001ab04) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf242,	// (0x0001ab04) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfee5,	// (0x0001b7a7) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee5,	// (0x0001b7a7) cell_ai5_widget_list_row_pane_t

0x4cad,	// (0x0001056f) main_fep_vtchi_ss_pane

0xf254,	// (0x0001ab16) popup_fep_char_pre_window

0xf25c,	// (0x0001ab1e) popup_fep_ituss_window

0xf276,	// (0x0001ab38) popup_fep_vkbss_window

0xf296,	// (0x0001ab58) grid_vkbss_keypad_pane_ParamLimits

0xf296,	// (0x0001ab58) grid_vkbss_keypad_pane

0xf2a6,	// (0x0001ab68) ituss_keypad_pane

0xf2bc,	// (0x0001ab7e) aid_vkbss_key_offset_ParamLimits

0xf2bc,	// (0x0001ab7e) aid_vkbss_key_offset

0xf2c8,	// (0x0001ab8a) cell_vkbss_key_pane_ParamLimits

0xf2c8,	// (0x0001ab8a) cell_vkbss_key_pane

0xf2de,	// (0x0001aba0) bg_cell_vkbss_key_g1_ParamLimits

0xf2de,	// (0x0001aba0) bg_cell_vkbss_key_g1

0xf2ea,	// (0x0001abac) cell_vkbss_key_3p_pane_ParamLimits

0xf2ea,	// (0x0001abac) cell_vkbss_key_3p_pane

0xf304,	// (0x0001abc6) cell_vkbss_key_g1_ParamLimits

0xf304,	// (0x0001abc6) cell_vkbss_key_g1

0xf31e,	// (0x0001abe0) cell_vkbss_key_t1_ParamLimits

0xf31e,	// (0x0001abe0) cell_vkbss_key_t1

0xf349,	// (0x0001ac0b) cell_ituss_key_pane_ParamLimits

0xf349,	// (0x0001ac0b) cell_ituss_key_pane

0xf359,	// (0x0001ac1b) bg_cell_ituss_key_g1_ParamLimits

0xf359,	// (0x0001ac1b) bg_cell_ituss_key_g1

0xf365,	// (0x0001ac27) cell_ituss_key_pane_g1_ParamLimits

0xf365,	// (0x0001ac27) cell_ituss_key_pane_g1

0xf371,	// (0x0001ac33) cell_ituss_key_pane_g2_ParamLimits

0xf371,	// (0x0001ac33) cell_ituss_key_pane_g2

0x0001,

0xfeea,	// (0x0001b7ac) cell_ituss_key_pane_g_ParamLimits

0xfeea,	// (0x0001b7ac) cell_ituss_key_pane_g

0xf38a,	// (0x0001ac4c) cell_ituss_key_t1_ParamLimits

0xf38a,	// (0x0001ac4c) cell_ituss_key_t1

0xf3b8,	// (0x0001ac7a) cell_ituss_key_t2_ParamLimits

0xf3b8,	// (0x0001ac7a) cell_ituss_key_t2

0xf3e9,	// (0x0001acab) cell_ituss_key_t3_ParamLimits

0xf3e9,	// (0x0001acab) cell_ituss_key_t3

0xf41a,	// (0x0001acdc) cell_ituss_key_t4_ParamLimits

0xf41a,	// (0x0001acdc) cell_ituss_key_t4

0x0003,

0xfeef,	// (0x0001b7b1) cell_ituss_key_t_ParamLimits

0xfeef,	// (0x0001b7b1) cell_ituss_key_t

0xf44b,	// (0x0001ad0d) cell_vkbss_key_3p_pane_g1

0xf453,	// (0x0001ad15) cell_vkbss_key_3p_pane_g2

0xf45b,	// (0x0001ad1d) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef8,	// (0x0001b7ba) cell_vkbss_key_3p_pane_g

0x3f0e,	// (0x0000f7d0) bg_popup_fep_char_preview_window_cp02

0xf463,	// (0x0001ad25) popup_fep_char_pre_window_t1

0xe62e,	// (0x00019ef0) main_ai5_sk_pane

0xedac,	// (0x0001a66e) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xedb8,	// (0x0001a67a) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xedcc,	// (0x0001a68e) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xeddb,	// (0x0001a69d) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfed0,	// (0x0001b792) cell_contacts_ai5_widget_pane_g_ParamLimits

0xedee,	// (0x0001a6b0) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x769c,	// (0x00012f5e) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf472,	// (0x0001ad34) main_ai5_sk_pane_g1

0x9912,	// (0x000151d4) popup_query_code_window_g1

0xf26b,	// (0x0001ab2d) popup_fep_vkb_icf_pane

0xf281,	// (0x0001ab43) popup_fep_vtchi_icf_pane

0x769c,	// (0x00012f5e) bg_icf_pane

0xf48a,	// (0x0001ad4c) list_vkb_icf_pane

0x769c,	// (0x00012f5e) bg_icf_pane_cp01

0xf4a2,	// (0x0001ad64) vtchi_icf_list_pane

0xf4b2,	// (0x0001ad74) list_vkb_icf_pane_t1_ParamLimits

0xf4b2,	// (0x0001ad74) list_vkb_icf_pane_t1

0xf4c9,	// (0x0001ad8b) vtchi_icf_list_pane_t1_ParamLimits

0xf4c9,	// (0x0001ad8b) vtchi_icf_list_pane_t1

0xf25c,	// (0x0001ab1e) popup_fep_ituss_window_ParamLimits

0xf281,	// (0x0001ab43) popup_fep_vtchi_icf_pane_ParamLimits

0xf2a6,	// (0x0001ab68) ituss_keypad_pane_ParamLimits

0xf2b2,	// (0x0001ab74) ituss_sks_pane

0x769c,	// (0x00012f5e) bg_icf_pane_ParamLimits

0xf47b,	// (0x0001ad3d) icf_edit_indi_pane_ParamLimits

0xf47b,	// (0x0001ad3d) icf_edit_indi_pane

0xf48a,	// (0x0001ad4c) list_vkb_icf_pane_ParamLimits

0x769c,	// (0x00012f5e) bg_icf_pane_cp01_ParamLimits

0xf496,	// (0x0001ad58) icf_edit_indi_pane_cp01_ParamLimits

0xf496,	// (0x0001ad58) icf_edit_indi_pane_cp01

0xf4aa,	// (0x0001ad6c) vtchi_query_pane

0xbf73,	// (0x00017835) icf_edit_indi_pane_g1_ParamLimits

0xbf73,	// (0x00017835) icf_edit_indi_pane_g1

0xf4e2,	// (0x0001ada4) icf_edit_indi_pane_g2_ParamLimits

0xf4e2,	// (0x0001ada4) icf_edit_indi_pane_g2

0x0001,

0xfeff,	// (0x0001b7c1) icf_edit_indi_pane_g_ParamLimits

0xfeff,	// (0x0001b7c1) icf_edit_indi_pane_g

0xf4ee,	// (0x0001adb0) icf_edit_indi_pane_t1

0xf4fc,	// (0x0001adbe) bg_input_focus_pane_cp042

0x7030,	// (0x000128f2) vtchi_button_pane

0xf505,	// (0x0001adc7) vtchi_query_pane_t1

0xf513,	// (0x0001add5) vtchi_query_pane_t2

0xf521,	// (0x0001ade3) vtchi_query_pane_t3

0x0002,

0xff04,	// (0x0001b7c6) vtchi_query_pane_t

0x3f0e,	// (0x0000f7d0) bg_button_pane_cp13

0xf52f,	// (0x0001adf1) vtchi_button_pane_g1

0xf537,	// (0x0001adf9) ituss_sks_pane_g1

0xf542,	// (0x0001ae04) ituss_sks_pane_g2

0x0001,

0xff0b,	// (0x0001b7cd) ituss_sks_pane_g

0xf54a,	// (0x0001ae0c) ituss_sks_pane_t1

0xf558,	// (0x0001ae1a) ituss_sks_pane_t2

0x0001,

0xff10,	// (0x0001b7d2) ituss_sks_pane_t

0xb7c3,	// (0x00017085) indicator_nsta_pane_cp_g1

0xb7cc,	// (0x0001708e) indicator_nsta_pane_cp_g2

0xb7d4,	// (0x00017096) indicator_nsta_pane_cp_g3

0xb7dc,	// (0x0001709e) indicator_nsta_pane_cp_g4

0xb7e4,	// (0x000170a6) indicator_nsta_pane_cp_g5

0xb7ec,	// (0x000170ae) indicator_nsta_pane_cp_g6

0x0005,

0xfaae,	// (0x0001b370) indicator_nsta_pane_cp_g

0xe23f,	// (0x00019b01) cell_graphic2_pane_t2_ParamLimits

0xe23f,	// (0x00019b01) cell_graphic2_pane_t2

0x0001,

0xfdc7,	// (0x0001b689) cell_graphic2_pane_t_ParamLimits

0xfdc7,	// (0x0001b689) cell_graphic2_pane_t

0xe26c,	// (0x00019b2e) cell_graphic2_control_pane_t1

0x7f34,	// (0x000137f6) signal_pane_g3_ParamLimits

0x7f34,	// (0x000137f6) signal_pane_g3

0x7f46,	// (0x00013808) signal_pane_g4_ParamLimits

0x7f46,	// (0x00013808) signal_pane_g4
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
	};

} // end of namespace AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Normal
