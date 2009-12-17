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

#include "aknlayoutscalable_abrw_pvl4_av_vga4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0000f81f };

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
0xbb36,	// (0x0001b355) Screen

0xbb42,	// (0x0001b361) application_window_ParamLimits

0xbb42,	// (0x0001b361) application_window

0x1bc8,	// (0x000113e7) screen_g1

0xb22d,	// (0x0001aa4c) area_bottom_pane_ParamLimits

0xb22d,	// (0x0001aa4c) area_bottom_pane

0x0067,	// (0x0000f886) area_top_pane_ParamLimits

0x0067,	// (0x0000f886) area_top_pane

0x0105,	// (0x0000f924) main_pane_ParamLimits

0x0105,	// (0x0000f924) main_pane

0x1bd2,	// (0x000113f1) misc_graphics

0xd08e,	// (0x0001c8ad) battery_pane_ParamLimits

0xd08e,	// (0x0001c8ad) battery_pane

0x50e2,	// (0x00014901) bg_status_flat_pane_g8

0x50ea,	// (0x00014909) bg_status_flat_pane_g9

0x4441,	// (0x00013c60) context_pane_ParamLimits

0x4441,	// (0x00013c60) context_pane

0xd205,	// (0x0001ca24) navi_pane_ParamLimits

0xd205,	// (0x0001ca24) navi_pane

0xd28e,	// (0x0001caad) signal_pane_ParamLimits

0xd28e,	// (0x0001caad) signal_pane

0x0008,

0xf8a8,	// (0x0001f0c7) bg_status_flat_pane_g

0xd31e,	// (0x0001cb3d) status_pane_g1_ParamLimits

0xd31e,	// (0x0001cb3d) status_pane_g1

0xd334,	// (0x0001cb53) status_pane_g2_ParamLimits

0xd334,	// (0x0001cb53) status_pane_g2

0x4681,	// (0x00013ea0) status_pane_g3_ParamLimits

0x4681,	// (0x00013ea0) status_pane_g3

0x0004,

0xf7db,	// (0x0001effa) status_pane_g_ParamLimits

0xf7db,	// (0x0001effa) status_pane_g

0xd340,	// (0x0001cb5f) title_pane_ParamLimits

0xd340,	// (0x0001cb5f) title_pane

0xd39d,	// (0x0001cbbc) uni_indicator_pane_ParamLimits

0xd39d,	// (0x0001cbbc) uni_indicator_pane

0x3c66,	// (0x00013485) bg_list_pane_ParamLimits

0x3c66,	// (0x00013485) bg_list_pane

0xc8cb,	// (0x0001c0ea) find_pane

0xc8d3,	// (0x0001c0f2) listscroll_app_pane_ParamLimits

0xc8d3,	// (0x0001c0f2) listscroll_app_pane

0x3c9a,	// (0x000134b9) listscroll_form_pane

0xc8df,	// (0x0001c0fe) listscroll_gen_pane_ParamLimits

0xc8df,	// (0x0001c0fe) listscroll_gen_pane

0x3c9a,	// (0x000134b9) listscroll_set_pane

0x5cc3,	// (0x000154e2) main_idle_act_pane

0x393a,	// (0x00013159) main_idle_trad_pane

0x393a,	// (0x00013159) main_list_empty_pane

0x3cc8,	// (0x000134e7) main_midp_pane

0x3cd4,	// (0x000134f3) main_pane_g1_ParamLimits

0x3cd4,	// (0x000134f3) main_pane_g1

0xc8f3,	// (0x0001c112) popup_ai_message_window_ParamLimits

0xc8f3,	// (0x0001c112) popup_ai_message_window

0xc993,	// (0x0001c1b2) popup_fep_china_uni_window_ParamLimits

0xc993,	// (0x0001c1b2) popup_fep_china_uni_window

0x3dfa,	// (0x00013619) popup_fep_japan_candidate_window_ParamLimits

0x3dfa,	// (0x00013619) popup_fep_japan_candidate_window

0x3e24,	// (0x00013643) popup_fep_japan_predictive_window_ParamLimits

0x3e24,	// (0x00013643) popup_fep_japan_predictive_window

0xc9f3,	// (0x0001c212) popup_find_window

0xca10,	// (0x0001c22f) popup_grid_graphic_window_ParamLimits

0xca10,	// (0x0001c22f) popup_grid_graphic_window

0x3e95,	// (0x000136b4) popup_large_graphic_colour_window

0xcab4,	// (0x0001c2d3) popup_menu_window_ParamLimits

0xcab4,	// (0x0001c2d3) popup_menu_window

0xcca0,	// (0x0001c4bf) popup_note_image_window

0xcc60,	// (0x0001c47f) popup_note_wait_window_ParamLimits

0xcc60,	// (0x0001c47f) popup_note_wait_window

0xccb8,	// (0x0001c4d7) popup_note_window_ParamLimits

0xccb8,	// (0x0001c4d7) popup_note_window

0xcd66,	// (0x0001c585) popup_query_code_window_ParamLimits

0xcd66,	// (0x0001c585) popup_query_code_window

0x4101,	// (0x00013920) popup_query_data_code_window_ParamLimits

0x4101,	// (0x00013920) popup_query_data_code_window

0xcda6,	// (0x0001c5c5) popup_query_data_window_ParamLimits

0xcda6,	// (0x0001c5c5) popup_query_data_window

0xce3a,	// (0x0001c659) popup_query_sat_info_window_ParamLimits

0xce3a,	// (0x0001c659) popup_query_sat_info_window

0xcee5,	// (0x0001c704) popup_snote_single_graphic_window_ParamLimits

0xcee5,	// (0x0001c704) popup_snote_single_graphic_window

0xcee5,	// (0x0001c704) popup_snote_single_text_window_ParamLimits

0xcee5,	// (0x0001c704) popup_snote_single_text_window

0x419c,	// (0x000139bb) popup_sub_window_general

0x42e2,	// (0x00013b01) popup_window_general_ParamLimits

0x42e2,	// (0x00013b01) popup_window_general

0x42fb,	// (0x00013b1a) power_save_pane

0xb3b3,	// (0x0001abd2) control_pane_g1_ParamLimits

0xb3b3,	// (0x0001abd2) control_pane_g1

0x08a5,	// (0x000100c4) control_pane_g2_ParamLimits

0x08a5,	// (0x000100c4) control_pane_g2

0x3c07,	// (0x00013426) control_pane_g3_ParamLimits

0x3c07,	// (0x00013426) control_pane_g3

0x0007,

0xf7c3,	// (0x0001efe2) control_pane_g_ParamLimits

0xf7c3,	// (0x0001efe2) control_pane_g

0xb3ea,	// (0x0001ac09) control_pane_t1_ParamLimits

0xb3ea,	// (0x0001ac09) control_pane_t1

0xb448,	// (0x0001ac67) control_pane_t2_ParamLimits

0xb448,	// (0x0001ac67) control_pane_t2

0x0002,

0xf7d4,	// (0x0001eff3) control_pane_t_ParamLimits

0xf7d4,	// (0x0001eff3) control_pane_t

0x3b28,	// (0x00013347) navi_navi_volume_pane_cp1

0x3b31,	// (0x00013350) status_small_icon_pane

0x3b39,	// (0x00013358) status_small_pane_g1_ParamLimits

0x3b39,	// (0x00013358) status_small_pane_g1

0x3b6d,	// (0x0001338c) status_small_pane_g2_ParamLimits

0x3b6d,	// (0x0001338c) status_small_pane_g2

0x3b79,	// (0x00013398) status_small_pane_g3_ParamLimits

0x3b79,	// (0x00013398) status_small_pane_g3

0x3b85,	// (0x000133a4) status_small_pane_g4_ParamLimits

0x3b85,	// (0x000133a4) status_small_pane_g4

0x3b91,	// (0x000133b0) status_small_pane_g5_ParamLimits

0x3b91,	// (0x000133b0) status_small_pane_g5

0x3ba0,	// (0x000133bf) status_small_pane_g6_ParamLimits

0x3ba0,	// (0x000133bf) status_small_pane_g6

0x0007,

0xf7b2,	// (0x0001efd1) status_small_pane_g_ParamLimits

0xf7b2,	// (0x0001efd1) status_small_pane_g

0x3bd0,	// (0x000133ef) status_small_pane_t1

0x3bf3,	// (0x00013412) status_small_wait_pane_ParamLimits

0x3bf3,	// (0x00013412) status_small_wait_pane

0xc68a,	// (0x0001bea9) aid_levels_signal_ParamLimits

0xc68a,	// (0x0001bea9) aid_levels_signal

0xc6a2,	// (0x0001bec1) signal_pane_g1_ParamLimits

0xc6a2,	// (0x0001bec1) signal_pane_g1

0xc6bd,	// (0x0001bedc) signal_pane_g2_ParamLimits

0xc6bd,	// (0x0001bedc) signal_pane_g2

0x0001,

0xf747,	// (0x0001ef66) signal_pane_g_ParamLimits

0xf747,	// (0x0001ef66) signal_pane_g

0x3381,	// (0x00012ba0) context_pane_g1

0xbb52,	// (0x0001b371) title_pane_g1

0xbb87,	// (0x0001b3a6) title_pane_t1

0x1c7a,	// (0x00011499) title_pane_t2

0x1ca0,	// (0x000114bf) title_pane_t3

0x0002,

0xf59b,	// (0x0001edba) title_pane_t

0xd3c5,	// (0x0001cbe4) aid_levels_battery_ParamLimits

0xd3c5,	// (0x0001cbe4) aid_levels_battery

0xd3e1,	// (0x0001cc00) battery_pane_g1_ParamLimits

0xd3e1,	// (0x0001cc00) battery_pane_g1

0xd3fe,	// (0x0001cc1d) battery_pane_g2_ParamLimits

0xd3fe,	// (0x0001cc1d) battery_pane_g2

0x0001,

0xf7e6,	// (0x0001f005) battery_pane_g_ParamLimits

0xf7e6,	// (0x0001f005) battery_pane_g

0xd63e,	// (0x0001ce5d) uni_indicator_pane_g1

0xd653,	// (0x0001ce72) uni_indicator_pane_g2

0xd668,	// (0x0001ce87) uni_indicator_pane_g3

0x0005,

0xf950,	// (0x0001f16f) uni_indicator_pane_g

0x37a8,	// (0x00012fc7) navi_icon_pane_ParamLimits

0x37a8,	// (0x00012fc7) navi_icon_pane

0x36ef,	// (0x00012f0e) navi_midp_pane

0x37c4,	// (0x00012fe3) navi_navi_pane

0x37ce,	// (0x00012fed) navi_text_pane_ParamLimits

0x37ce,	// (0x00012fed) navi_text_pane

0x1bc8,	// (0x000113e7) status_small_wait_pane_g1

0x20fe,	// (0x0001191d) status_small_wait_pane_g2

0x0001,

0xf94b,	// (0x0001f16a) status_small_wait_pane_g

0xd5dd,	// (0x0001cdfc) navi_navi_icon_text_pane

0xd5e5,	// (0x0001ce04) navi_navi_pane_g1_ParamLimits

0xd5e5,	// (0x0001ce04) navi_navi_pane_g1

0xd5f7,	// (0x0001ce16) navi_navi_pane_g2_ParamLimits

0xd5f7,	// (0x0001ce16) navi_navi_pane_g2

0x0001,

0xf919,	// (0x0001f138) navi_navi_pane_g_ParamLimits

0xf919,	// (0x0001f138) navi_navi_pane_g

0x5771,	// (0x00014f90) navi_navi_tabs_pane

0xd609,	// (0x0001ce28) navi_navi_text_pane

0xd5dd,	// (0x0001cdfc) navi_navi_volume_pane

0xd5cb,	// (0x0001cdea) navi_text_pane_t1

0xd5bf,	// (0x0001cdde) navi_icon_pane_g1

0x5662,	// (0x00014e81) navi_navi_text_pane_t1

0xb6af,	// (0x0001aece) navi_navi_volume_pane_g1

0xb6b7,	// (0x0001aed6) volume_small_pane

0xd51b,	// (0x0001cd3a) navi_navi_icon_text_pane_g1

0xd523,	// (0x0001cd42) navi_navi_icon_text_pane_t1

0x37c4,	// (0x00012fe3) navi_tabs_2_long_pane

0x37c4,	// (0x00012fe3) navi_tabs_2_pane

0x37c4,	// (0x00012fe3) navi_tabs_3_long_pane

0x37c4,	// (0x00012fe3) navi_tabs_3_pane

0x37c4,	// (0x00012fe3) navi_tabs_4_pane

0xb68f,	// (0x0001aeae) tabs_2_active_pane_ParamLimits

0xb68f,	// (0x0001aeae) tabs_2_active_pane

0xb69f,	// (0x0001aebe) tabs_2_passive_pane_ParamLimits

0xb69f,	// (0x0001aebe) tabs_2_passive_pane

0xb65d,	// (0x0001ae7c) tabs_3_active_pane_ParamLimits

0xb65d,	// (0x0001ae7c) tabs_3_active_pane

0xb66d,	// (0x0001ae8c) tabs_3_passive_pane_ParamLimits

0xb66d,	// (0x0001ae8c) tabs_3_passive_pane

0xb67e,	// (0x0001ae9d) tabs_3_passive_pane_cp_ParamLimits

0xb67e,	// (0x0001ae9d) tabs_3_passive_pane_cp

0xb619,	// (0x0001ae38) tabs_4_active_pane_ParamLimits

0xb619,	// (0x0001ae38) tabs_4_active_pane

0xb62a,	// (0x0001ae49) tabs_4_passive_pane_ParamLimits

0xb62a,	// (0x0001ae49) tabs_4_passive_pane

0xb63b,	// (0x0001ae5a) tabs_4_passive_pane_cp_ParamLimits

0xb63b,	// (0x0001ae5a) tabs_4_passive_pane_cp

0xb64c,	// (0x0001ae6b) tabs_4_passive_pane_cp2_ParamLimits

0xb64c,	// (0x0001ae6b) tabs_4_passive_pane_cp2

0xb5f5,	// (0x0001ae14) tabs_2_long_active_pane_ParamLimits

0xb5f5,	// (0x0001ae14) tabs_2_long_active_pane

0xb607,	// (0x0001ae26) tabs_2_long_passive_pane_ParamLimits

0xb607,	// (0x0001ae26) tabs_2_long_passive_pane

0xb5aa,	// (0x0001adc9) tabs_3_long_active_pane_ParamLimits

0xb5aa,	// (0x0001adc9) tabs_3_long_active_pane

0xb5c3,	// (0x0001ade2) tabs_3_long_passive_pane_ParamLimits

0xb5c3,	// (0x0001ade2) tabs_3_long_passive_pane

0xb5dc,	// (0x0001adfb) tabs_3_long_passive_pane_cp_ParamLimits

0xb5dc,	// (0x0001adfb) tabs_3_long_passive_pane_cp

0x0b7f,	// (0x0001039e) volume_small_pane_g1

0xb559,	// (0x0001ad78) volume_small_pane_g2

0xb562,	// (0x0001ad81) volume_small_pane_g3

0xb56b,	// (0x0001ad8a) volume_small_pane_g4

0xb574,	// (0x0001ad93) volume_small_pane_g5

0xb57d,	// (0x0001ad9c) volume_small_pane_g6

0xb586,	// (0x0001ada5) volume_small_pane_g7

0xb58f,	// (0x0001adae) volume_small_pane_g8

0xb598,	// (0x0001adb7) volume_small_pane_g9

0xb5a1,	// (0x0001adc0) volume_small_pane_g10

0x0009,

0xf8e5,	// (0x0001f104) volume_small_pane_g

0x1f48,	// (0x00011767) bg_active_tab_pane_cp2_ParamLimits

0x1f48,	// (0x00011767) bg_active_tab_pane_cp2

0xbc13,	// (0x0001b432) tabs_3_active_pane_g1

0xbc1b,	// (0x0001b43a) tabs_3_active_pane_t1

0x1f48,	// (0x00011767) bg_passive_tab_pane_cp2_ParamLimits

0x1f48,	// (0x00011767) bg_passive_tab_pane_cp2

0xbc13,	// (0x0001b432) tabs_3_passive_pane_g1

0xbc1b,	// (0x0001b43a) tabs_3_passive_pane_t1

0x1f48,	// (0x00011767) bg_active_tab_pane_cp3_ParamLimits

0x1f48,	// (0x00011767) bg_active_tab_pane_cp3

0xbc2d,	// (0x0001b44c) tabs_4_active_pane_g1

0xbc35,	// (0x0001b454) tabs_4_active_pane_t1

0x1f48,	// (0x00011767) bg_passive_tab_pane_cp3_ParamLimits

0x1f48,	// (0x00011767) bg_passive_tab_pane_cp3

0xbc2d,	// (0x0001b44c) tabs_4_1_passive_pane_g1

0xbc35,	// (0x0001b454) tabs_4_1_passive_pane_t1

0x3cc8,	// (0x000134e7) list_highlight_pane_cp2

0xd738,	// (0x0001cf57) list_set_pane_ParamLimits

0xd738,	// (0x0001cf57) list_set_pane

0xd800,	// (0x0001d01f) main_pane_set_t1_ParamLimits

0xd800,	// (0x0001d01f) main_pane_set_t1

0xd820,	// (0x0001d03f) main_pane_set_t2_ParamLimits

0xd820,	// (0x0001d03f) main_pane_set_t2

0xd834,	// (0x0001d053) main_pane_set_t3_ParamLimits

0xd834,	// (0x0001d053) main_pane_set_t3

0xd848,	// (0x0001d067) main_pane_set_t4_ParamLimits

0xd848,	// (0x0001d067) main_pane_set_t4

0x0003,

0xf9b5,	// (0x0001f1d4) main_pane_set_t_ParamLimits

0xf9b5,	// (0x0001f1d4) main_pane_set_t

0xd85c,	// (0x0001d07b) setting_code_pane

0x5e23,	// (0x00015642) setting_slider_graphic_pane

0x5e23,	// (0x00015642) setting_slider_pane

0x5e23,	// (0x00015642) setting_text_pane

0x5e23,	// (0x00015642) setting_volume_pane

0x035c,	// (0x0000fb7b) volume_set_pane

0x1cb2,	// (0x000114d1) bg_set_opt_pane_cp

0x0366,	// (0x0000fb85) setting_slider_pane_t1

0x037c,	// (0x0000fb9b) setting_slider_pane_t2

0x0396,	// (0x0000fbb5) setting_slider_pane_t3

0x0002,

0xf5a2,	// (0x0001edc1) setting_slider_pane_t

0x03ae,	// (0x0000fbcd) slider_set_pane

0x1bd2,	// (0x000113f1) bg_set_opt_pane_cp2

0x1cf4,	// (0x00011513) setting_slider_graphic_pane_g1

0x03c4,	// (0x0000fbe3) setting_slider_graphic_pane_t1

0x03d4,	// (0x0000fbf3) setting_slider_graphic_pane_t2

0x0001,

0xf5a9,	// (0x0001edc8) setting_slider_graphic_pane_t

0x03e4,	// (0x0000fc03) slider_set_pane_cp

0x1bd2,	// (0x000113f1) input_focus_pane_cp1

0x5caa,	// (0x000154c9) list_set_text_pane

0x1bc8,	// (0x000113e7) setting_text_pane_g1

0x1bd2,	// (0x000113f1) input_focus_pane_cp2

0x1bc8,	// (0x000113e7) setting_code_pane_g1

0x1cfd,	// (0x0001151c) setting_code_pane_t1

0x1d0b,	// (0x0001152a) set_text_pane_t1_ParamLimits

0x1d0b,	// (0x0001152a) set_text_pane_t1

0x2c2a,	// (0x00012449) set_opt_bg_pane_g1

0x2c32,	// (0x00012451) set_opt_bg_pane_g2

0x5c82,	// (0x000154a1) set_opt_bg_pane_g3

0x2c42,	// (0x00012461) set_opt_bg_pane_g4

0x2c4a,	// (0x00012469) set_opt_bg_pane_g5

0x2c52,	// (0x00012471) set_opt_bg_pane_g6

0x5c8c,	// (0x000154ab) set_opt_bg_pane_g7

0x5c96,	// (0x000154b5) set_opt_bg_pane_g8

0x5ca0,	// (0x000154bf) set_opt_bg_pane_g9

0x0008,

0xf9a2,	// (0x0001f1c1) set_opt_bg_pane_g

0x5c75,	// (0x00015494) slider_set_pane_g1

0x0d63,	// (0x00010582) slider_set_pane_g2

0x0006,

0xf993,	// (0x0001f1b2) slider_set_pane_g

0x0ceb,	// (0x0001050a) volume_set_pane_g1

0x0cf5,	// (0x00010514) volume_set_pane_g2

0x0cff,	// (0x0001051e) volume_set_pane_g3

0x0d09,	// (0x00010528) volume_set_pane_g4

0x0d13,	// (0x00010532) volume_set_pane_g5

0x0d1d,	// (0x0001053c) volume_set_pane_g6

0x0d27,	// (0x00010546) volume_set_pane_g7

0x0d31,	// (0x00010550) volume_set_pane_g8

0x0d3b,	// (0x0001055a) volume_set_pane_g9

0x0d45,	// (0x00010564) volume_set_pane_g10

0x0009,

0xf96b,	// (0x0001f18a) volume_set_pane_g

0xbc47,	// (0x0001b466) indicator_pane_ParamLimits

0xbc47,	// (0x0001b466) indicator_pane

0xbc73,	// (0x0001b492) main_idle_pane_g2_ParamLimits

0xbc73,	// (0x0001b492) main_idle_pane_g2

0xbcab,	// (0x0001b4ca) main_pane_idle_g1_ParamLimits

0xbcab,	// (0x0001b4ca) main_pane_idle_g1

0x1d67,	// (0x00011586) popup_clock_digital_analogue_window_ParamLimits

0x1d67,	// (0x00011586) popup_clock_digital_analogue_window

0xbcd9,	// (0x0001b4f8) soft_indicator_pane_ParamLimits

0xbcd9,	// (0x0001b4f8) soft_indicator_pane

0xbcf5,	// (0x0001b514) wallpaper_pane_ParamLimits

0xbcf5,	// (0x0001b514) wallpaper_pane

0x1bc8,	// (0x000113e7) wallpaper_pane_g1

0xbd07,	// (0x0001b526) indicator_pane_g1_ParamLimits

0xbd07,	// (0x0001b526) indicator_pane_g1

0x6148,	// (0x00015967) navi_navi_icon_text_pane_srt_g1

0x1dbb,	// (0x000115da) soft_indicator_pane_t1

0x1dd5,	// (0x000115f4) aid_ps_area_pane

0xbd20,	// (0x0001b53f) aid_ps_clock_pane

0x1df4,	// (0x00011613) aid_ps_indicator_pane

0x1e00,	// (0x0001161f) indicator_ps_pane_ParamLimits

0x1e00,	// (0x0001161f) indicator_ps_pane

0x1e0f,	// (0x0001162e) power_save_pane_g1_ParamLimits

0x1e0f,	// (0x0001162e) power_save_pane_g1

0x1e1b,	// (0x0001163a) power_save_pane_g2_ParamLimits

0x1e1b,	// (0x0001163a) power_save_pane_g2

0xf572,	// (0x0001ed91) aid_navinavi_width_pane

0x1dd5,	// (0x000115f4) aid_ps_area_pane_ParamLimits

0x0001,

0xf5ae,	// (0x0001edcd) power_save_pane_g_ParamLimits

0xf5ae,	// (0x0001edcd) power_save_pane_g

0x1e29,	// (0x00011648) power_save_pane_t1_ParamLimits

0x1e29,	// (0x00011648) power_save_pane_t1

0xbd20,	// (0x0001b53f) aid_ps_clock_pane_ParamLimits

0x1df4,	// (0x00011613) aid_ps_indicator_pane_ParamLimits

0x1e3b,	// (0x0001165a) power_save_pane_t4_ParamLimits

0x1e3b,	// (0x0001165a) power_save_pane_t4

0x0001,

0xf5b3,	// (0x0001edd2) power_save_pane_t_ParamLimits

0xf5b3,	// (0x0001edd2) power_save_pane_t

0x1e65,	// (0x00011684) power_save_t3_ParamLimits

0x1e65,	// (0x00011684) power_save_t3

0x1e50,	// (0x0001166f) power_save_t2_ParamLimits

0x1e50,	// (0x0001166f) power_save_t2

0x1e7a,	// (0x00011699) indicator_ps_pane_g1

0xbd2e,	// (0x0001b54d) ai_gene_pane_ParamLimits

0xbd2e,	// (0x0001b54d) ai_gene_pane

0xbd45,	// (0x0001b564) ai_links_pane_ParamLimits

0xbd45,	// (0x0001b564) ai_links_pane

0xbd5d,	// (0x0001b57c) indicator_pane_cp1_ParamLimits

0xbd5d,	// (0x0001b57c) indicator_pane_cp1

0xbd6c,	// (0x0001b58b) main_pane_idle_g1_cp_ParamLimits

0xbd6c,	// (0x0001b58b) main_pane_idle_g1_cp

0x1eb3,	// (0x000116d2) popup_ai_links_title_window

0xbd84,	// (0x0001b5a3) soft_indicator_pane_cp1_ParamLimits

0xbd84,	// (0x0001b5a3) soft_indicator_pane_cp1

0x5a20,	// (0x0001523f) ai_links_pane_g1

0x5a29,	// (0x00015248) grid_ai_links_pane

0xd635,	// (0x0001ce54) ai_gene_pane_1

0x5a0e,	// (0x0001522d) ai_gene_pane_2

0x5a17,	// (0x00015236) list_highlight_pane_cp4

0xd611,	// (0x0001ce30) cell_ai_link_pane_ParamLimits

0xd611,	// (0x0001ce30) cell_ai_link_pane

0x59dd,	// (0x000151fc) cell_ai_link_pane_g1

0x20fe,	// (0x0001191d) cell_ai_link_pane_g2

0x0001,

0xf946,	// (0x0001f165) cell_ai_link_pane_g

0x1bd2,	// (0x000113f1) grid_highlight_cp2

0x1bd2,	// (0x000113f1) bg_popup_sub_pane_cp1

0x1ed6,	// (0x000116f5) popup_ai_links_title_window_t1

0x5929,	// (0x00015148) ai_gene_pane_1_g1_ParamLimits

0x5929,	// (0x00015148) ai_gene_pane_1_g1

0x5935,	// (0x00015154) ai_gene_pane_1_g2_ParamLimits

0x5935,	// (0x00015154) ai_gene_pane_1_g2

0x0001,

0xf93c,	// (0x0001f15b) ai_gene_pane_1_g_ParamLimits

0xf93c,	// (0x0001f15b) ai_gene_pane_1_g

0x5942,	// (0x00015161) ai_gene_pane_1_t1_ParamLimits

0x5942,	// (0x00015161) ai_gene_pane_1_t1

0x5976,	// (0x00015195) grid_ai_soft_ind_pane

0x5914,	// (0x00015133) ai_gene_pane_2_t1_ParamLimits

0x5914,	// (0x00015133) ai_gene_pane_2_t1

0xbd98,	// (0x0001b5b7) main_pane_empty_t1_ParamLimits

0xbd98,	// (0x0001b5b7) main_pane_empty_t1

0xbdb0,	// (0x0001b5cf) main_pane_empty_t2_ParamLimits

0xbdb0,	// (0x0001b5cf) main_pane_empty_t2

0xbdc5,	// (0x0001b5e4) main_pane_empty_t3_ParamLimits

0xbdc5,	// (0x0001b5e4) main_pane_empty_t3

0xbdd7,	// (0x0001b5f6) main_pane_empty_t4_ParamLimits

0xbdd7,	// (0x0001b5f6) main_pane_empty_t4

0xbde9,	// (0x0001b608) main_pane_empty_t5_ParamLimits

0xbde9,	// (0x0001b608) main_pane_empty_t5

0x0004,

0xf5b8,	// (0x0001edd7) main_pane_empty_t_ParamLimits

0xf5b8,	// (0x0001edd7) main_pane_empty_t

0x2d08,	// (0x00012527) bg_popup_window_pane_ParamLimits

0x2d08,	// (0x00012527) bg_popup_window_pane

0x5670,	// (0x00014e8f) find_popup_pane_cp2_ParamLimits

0x5670,	// (0x00014e8f) find_popup_pane_cp2

0x567c,	// (0x00014e9b) heading_pane_ParamLimits

0x567c,	// (0x00014e9b) heading_pane

0x1bd2,	// (0x000113f1) bg_popup_sub_pane

0xd540,	// (0x0001cd5f) bg_popup_window_pane_g1_ParamLimits

0xd540,	// (0x0001cd5f) bg_popup_window_pane_g1

0xd54f,	// (0x0001cd6e) bg_popup_window_pane_g2_ParamLimits

0xd54f,	// (0x0001cd6e) bg_popup_window_pane_g2

0xd55b,	// (0x0001cd7a) bg_popup_window_pane_g3_ParamLimits

0xd55b,	// (0x0001cd7a) bg_popup_window_pane_g3

0xd567,	// (0x0001cd86) bg_popup_window_pane_g4_ParamLimits

0xd567,	// (0x0001cd86) bg_popup_window_pane_g4

0xd576,	// (0x0001cd95) bg_popup_window_pane_g5_ParamLimits

0xd576,	// (0x0001cd95) bg_popup_window_pane_g5

0xd586,	// (0x0001cda5) bg_popup_window_pane_g6_ParamLimits

0xd586,	// (0x0001cda5) bg_popup_window_pane_g6

0xd592,	// (0x0001cdb1) bg_popup_window_pane_g7_ParamLimits

0xd592,	// (0x0001cdb1) bg_popup_window_pane_g7

0xd5a1,	// (0x0001cdc0) bg_popup_window_pane_g8_ParamLimits

0xd5a1,	// (0x0001cdc0) bg_popup_window_pane_g8

0xd5b0,	// (0x0001cdcf) bg_popup_window_pane_g9_ParamLimits

0xd5b0,	// (0x0001cdcf) bg_popup_window_pane_g9

0x5656,	// (0x00014e75) bg_popup_window_pane_g10_ParamLimits

0x5656,	// (0x00014e75) bg_popup_window_pane_g10

0x0009,

0xf904,	// (0x0001f123) bg_popup_window_pane_g_ParamLimits

0xf904,	// (0x0001f123) bg_popup_window_pane_g

0x557f,	// (0x00014d9e) bg_popup_heading_pane_ParamLimits

0x557f,	// (0x00014d9e) bg_popup_heading_pane

0x0deb,	// (0x0001060a) tabs_4_passive_pane_cp_srt_ParamLimits

0x0deb,	// (0x0001060a) tabs_4_passive_pane_cp_srt

0x0dfd,	// (0x0001061c) tabs_4_passive_pane_srt_ParamLimits

0x5593,	// (0x00014db2) heading_pane_g2

0x0dfd,	// (0x0001061c) tabs_4_passive_pane_srt

0x4956,	// (0x00014175) bg_passive_tab_pane_cp3_srt_ParamLimits

0x4956,	// (0x00014175) bg_passive_tab_pane_cp3_srt

0x559b,	// (0x00014dba) heading_pane_t1_ParamLimits

0x559b,	// (0x00014dba) heading_pane_t1

0x55b2,	// (0x00014dd1) heading_pane_t2_ParamLimits

0x55b2,	// (0x00014dd1) heading_pane_t2

0x0001,

0xf8ff,	// (0x0001f11e) heading_pane_t_ParamLimits

0xf8ff,	// (0x0001f11e) heading_pane_t

0x50aa,	// (0x000148c9) bg_popup_heading_pane_g1

0x5159,	// (0x00014978) bg_popup_heading_pane_g2

0x5163,	// (0x00014982) bg_popup_heading_pane_g3

0x516d,	// (0x0001498c) bg_popup_heading_pane_g4

0x5177,	// (0x00014996) bg_popup_heading_pane_g5

0x5181,	// (0x000149a0) bg_popup_heading_pane_g6

0x5189,	// (0x000149a8) bg_popup_heading_pane_g7

0x5191,	// (0x000149b0) bg_popup_heading_pane_g8

0x519b,	// (0x000149ba) bg_popup_heading_pane_g9

0x0008,

0xf8bb,	// (0x0001f0da) bg_popup_heading_pane_g

0x483a,	// (0x00014059) bg_popup_sub_pane_g1

0x484a,	// (0x00014069) bg_popup_sub_pane_g2

0x4842,	// (0x00014061) bg_popup_sub_pane_g3

0x485a,	// (0x00014079) bg_popup_sub_pane_g4

0x4852,	// (0x00014071) bg_popup_sub_pane_g5

0x4862,	// (0x00014081) bg_popup_sub_pane_g6

0x486a,	// (0x00014089) bg_popup_sub_pane_g7

0x487a,	// (0x00014099) bg_popup_sub_pane_g8

0x4872,	// (0x00014091) bg_popup_sub_pane_g9

0x0008,

0xf895,	// (0x0001f0b4) bg_popup_sub_pane_g

0x1f48,	// (0x00011767) bg_popup_window_pane_cp5_ParamLimits

0x1f48,	// (0x00011767) bg_popup_window_pane_cp5

0x1f64,	// (0x00011783) popup_note_window_g1_ParamLimits

0x1f64,	// (0x00011783) popup_note_window_g1

0x1f70,	// (0x0001178f) popup_note_window_t1_ParamLimits

0x1f70,	// (0x0001178f) popup_note_window_t1

0x1f86,	// (0x000117a5) popup_note_window_t2_ParamLimits

0x1f86,	// (0x000117a5) popup_note_window_t2

0x1f9c,	// (0x000117bb) popup_note_window_t3_ParamLimits

0x1f9c,	// (0x000117bb) popup_note_window_t3

0x1fb2,	// (0x000117d1) popup_note_window_t4_ParamLimits

0x1fb2,	// (0x000117d1) popup_note_window_t4

0x1fda,	// (0x000117f9) popup_note_window_t5_ParamLimits

0x1fda,	// (0x000117f9) popup_note_window_t5

0x0004,

0xf5c3,	// (0x0001ede2) popup_note_window_t_ParamLimits

0xf5c3,	// (0x0001ede2) popup_note_window_t

0x1ffe,	// (0x0001181d) bg_popup_window_pane_cp6_ParamLimits

0x1ffe,	// (0x0001181d) bg_popup_window_pane_cp6

0x5026,	// (0x00014845) popup_note_image_window_g1_ParamLimits

0x5026,	// (0x00014845) popup_note_image_window_g1

0x5032,	// (0x00014851) popup_note_image_window_g2_ParamLimits

0x5032,	// (0x00014851) popup_note_image_window_g2

0x0001,

0xf889,	// (0x0001f0a8) popup_note_image_window_g_ParamLimits

0xf889,	// (0x0001f0a8) popup_note_image_window_g

0x504b,	// (0x0001486a) popup_note_image_window_t1_ParamLimits

0x504b,	// (0x0001486a) popup_note_image_window_t1

0x5064,	// (0x00014883) popup_note_image_window_t2_ParamLimits

0x5064,	// (0x00014883) popup_note_image_window_t2

0x507d,	// (0x0001489c) popup_note_image_window_t3_ParamLimits

0x507d,	// (0x0001489c) popup_note_image_window_t3

0x0002,

0xf88e,	// (0x0001f0ad) popup_note_image_window_t_ParamLimits

0xf88e,	// (0x0001f0ad) popup_note_image_window_t

0x4ee6,	// (0x00014705) bg_popup_window_pane_cp7_ParamLimits

0x4ee6,	// (0x00014705) bg_popup_window_pane_cp7

0x4f16,	// (0x00014735) popup_note_wait_window_g1_ParamLimits

0x4f16,	// (0x00014735) popup_note_wait_window_g1

0x4f22,	// (0x00014741) popup_note_wait_window_g2_ParamLimits

0x4f22,	// (0x00014741) popup_note_wait_window_g2

0x0002,

0xf877,	// (0x0001f096) popup_note_wait_window_g_ParamLimits

0xf877,	// (0x0001f096) popup_note_wait_window_g

0x4f3a,	// (0x00014759) popup_note_wait_window_t1_ParamLimits

0x4f3a,	// (0x00014759) popup_note_wait_window_t1

0x4f61,	// (0x00014780) popup_note_wait_window_t2_ParamLimits

0x4f61,	// (0x00014780) popup_note_wait_window_t2

0x4f7f,	// (0x0001479e) popup_note_wait_window_t3_ParamLimits

0x4f7f,	// (0x0001479e) popup_note_wait_window_t3

0x4f92,	// (0x000147b1) popup_note_wait_window_t4_ParamLimits

0x4f92,	// (0x000147b1) popup_note_wait_window_t4

0x0004,

0xf87e,	// (0x0001f09d) popup_note_wait_window_t_ParamLimits

0xf87e,	// (0x0001f09d) popup_note_wait_window_t

0x4fb7,	// (0x000147d6) wait_bar_pane_ParamLimits

0x4fb7,	// (0x000147d6) wait_bar_pane

0x1bd2,	// (0x000113f1) wait_anim_pane

0x1bd2,	// (0x000113f1) wait_border_pane

0x1bc8,	// (0x000113e7) wait_anim_pane_g1

0x1bc8,	// (0x000113e7) wait_anim_pane_g2

0x0001,

0xf742,	// (0x0001ef61) wait_anim_pane_g

0x4e8a,	// (0x000146a9) wait_border_pane_g1

0x4e95,	// (0x000146b4) wait_border_pane_g2

0x4e9e,	// (0x000146bd) wait_border_pane_g3

0x0002,

0xf870,	// (0x0001f08f) wait_border_pane_g

0x4de6,	// (0x00014605) bg_popup_window_pane_cp16_ParamLimits

0x4de6,	// (0x00014605) bg_popup_window_pane_cp16

0x4df4,	// (0x00014613) indicator_popup_pane_cp4_ParamLimits

0x4df4,	// (0x00014613) indicator_popup_pane_cp4

0x4e08,	// (0x00014627) popup_query_data_window_t1_ParamLimits

0x4e08,	// (0x00014627) popup_query_data_window_t1

0x4e1a,	// (0x00014639) popup_query_data_window_t2_ParamLimits

0x4e1a,	// (0x00014639) popup_query_data_window_t2

0x4e33,	// (0x00014652) popup_query_data_window_t3_ParamLimits

0x4e33,	// (0x00014652) popup_query_data_window_t3

0x0002,

0xf869,	// (0x0001f088) popup_query_data_window_t_ParamLimits

0xf869,	// (0x0001f088) popup_query_data_window_t

0x4e4d,	// (0x0001466c) query_popup_data_pane_ParamLimits

0x4e4d,	// (0x0001466c) query_popup_data_pane

0x4e61,	// (0x00014680) query_popup_data_pane_cp1_ParamLimits

0x4e61,	// (0x00014680) query_popup_data_pane_cp1

0x1ffe,	// (0x0001181d) bg_popup_window_pane_cp10_ParamLimits

0x1ffe,	// (0x0001181d) bg_popup_window_pane_cp10

0x4d49,	// (0x00014568) indicator_popup_pane_ParamLimits

0x4d49,	// (0x00014568) indicator_popup_pane

0x205f,	// (0x0001187e) popup_query_code_window_t1_ParamLimits

0x205f,	// (0x0001187e) popup_query_code_window_t1

0x4d61,	// (0x00014580) popup_query_code_window_t2_ParamLimits

0x4d61,	// (0x00014580) popup_query_code_window_t2

0x4d9f,	// (0x000145be) popup_query_code_window_t3_ParamLimits

0x4d9f,	// (0x000145be) popup_query_code_window_t3

0x0002,

0xf862,	// (0x0001f081) popup_query_code_window_t_ParamLimits

0xf862,	// (0x0001f081) popup_query_code_window_t

0x4dce,	// (0x000145ed) query_popup_pane_ParamLimits

0x4dce,	// (0x000145ed) query_popup_pane

0x1ffe,	// (0x0001181d) bg_popup_window_pane_cp15_ParamLimits

0x1ffe,	// (0x0001181d) bg_popup_window_pane_cp15

0x201e,	// (0x0001183d) indicator_popup_pane_cp1_ParamLimits

0x201e,	// (0x0001183d) indicator_popup_pane_cp1

0x2031,	// (0x00011850) indicator_popup_pane_cp2_ParamLimits

0x2031,	// (0x00011850) indicator_popup_pane_cp2

0x204c,	// (0x0001186b) popup_query_data_code_window_g1_ParamLimits

0x204c,	// (0x0001186b) popup_query_data_code_window_g1

0x205f,	// (0x0001187e) popup_query_data_code_window_t1_ParamLimits

0x205f,	// (0x0001187e) popup_query_data_code_window_t1

0x2071,	// (0x00011890) popup_query_data_code_window_t2_ParamLimits

0x2071,	// (0x00011890) popup_query_data_code_window_t2

0x2083,	// (0x000118a2) popup_query_data_code_window_t3_ParamLimits

0x2083,	// (0x000118a2) popup_query_data_code_window_t3

0x2099,	// (0x000118b8) popup_query_data_code_window_t4_ParamLimits

0x2099,	// (0x000118b8) popup_query_data_code_window_t4

0x0003,

0xf5ce,	// (0x0001eded) popup_query_data_code_window_t_ParamLimits

0xf5ce,	// (0x0001eded) popup_query_data_code_window_t

0x0a8b,	// (0x000102aa) list_single_midp_graphic_pane_g3

0x20b3,	// (0x000118d2) query_popup_data_pane_cp2_ParamLimits

0x20c6,	// (0x000118e5) query_popup_pane_cp2_ParamLimits

0x20c6,	// (0x000118e5) query_popup_pane_cp2

0x1bd2,	// (0x000113f1) bg_popup_window_pane_cp11

0x4d1d,	// (0x0001453c) heading_pane_cp5

0x21b6,	// (0x000119d5) listscroll_popup_info_pane

0x1bd2,	// (0x000113f1) input_focus_pane_cp3

0x20e1,	// (0x00011900) query_popup_pane_t1

0x20ef,	// (0x0001190e) list_popup_info_pane_ParamLimits

0x20ef,	// (0x0001190e) list_popup_info_pane

0x20fe,	// (0x0001191d) listscroll_popup_info_pane_g1

0x2106,	// (0x00011925) scroll_pane_cp7

0x2110,	// (0x0001192f) popup_info_list_pane_t1_ParamLimits

0x2110,	// (0x0001192f) popup_info_list_pane_t1

0x212a,	// (0x00011949) popup_info_list_pane_t2_ParamLimits

0x212a,	// (0x00011949) popup_info_list_pane_t2

0x0001,

0xf5d7,	// (0x0001edf6) popup_info_list_pane_t_ParamLimits

0xf5d7,	// (0x0001edf6) popup_info_list_pane_t

0x1bd2,	// (0x000113f1) bg_popup_window_pane_cp12

0x6162,	// (0x00015981) find_popup_pane

0x1cb2,	// (0x000114d1) bg_popup_window_pane_cp3

0x2144,	// (0x00011963) heading_pane_cp3

0x2150,	// (0x0001196f) listscroll_popup_graphic_pane

0x1bd2,	// (0x000113f1) bg_popup_window_pane_cp4

0xbe4b,	// (0x0001b66a) heading_pane_cp4

0x21b6,	// (0x000119d5) listscroll_popup_colour_pane

0xbe55,	// (0x0001b674) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xbe55,	// (0x0001b674) cell_large_graphic_colour_none_popup_pane

0xbe69,	// (0x0001b688) grid_large_graphic_colour_popup_pane_ParamLimits

0xbe69,	// (0x0001b688) grid_large_graphic_colour_popup_pane

0xbe95,	// (0x0001b6b4) listscroll_popup_colour_pane_g1_ParamLimits

0xbe95,	// (0x0001b6b4) listscroll_popup_colour_pane_g1

0xbeac,	// (0x0001b6cb) listscroll_popup_colour_pane_g2_ParamLimits

0xbeac,	// (0x0001b6cb) listscroll_popup_colour_pane_g2

0xbec3,	// (0x0001b6e2) listscroll_popup_colour_pane_g3_ParamLimits

0xbec3,	// (0x0001b6e2) listscroll_popup_colour_pane_g3

0xbed3,	// (0x0001b6f2) listscroll_popup_colour_pane_g4_ParamLimits

0xbed3,	// (0x0001b6f2) listscroll_popup_colour_pane_g4

0x0003,

0xf5dc,	// (0x0001edfb) listscroll_popup_colour_pane_g_ParamLimits

0xf5dc,	// (0x0001edfb) listscroll_popup_colour_pane_g

0x2250,	// (0x00011a6f) scroll_pane_cp6_ParamLimits

0x2250,	// (0x00011a6f) scroll_pane_cp6

0xbee7,	// (0x0001b706) cell_large_graphic_colour_popup_pane_ParamLimits

0xbee7,	// (0x0001b706) cell_large_graphic_colour_popup_pane

0x2287,	// (0x00011aa6) cell_large_graphic_colour_none_popup_pane_t1

0x1bd2,	// (0x000113f1) grid_highlight_pane_cp5

0x2296,	// (0x00011ab5) cell_large_graphic_colour_popup_pane_g1

0x229e,	// (0x00011abd) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5e5,	// (0x0001ee04) cell_large_graphic_colour_popup_pane_g

0x22a6,	// (0x00011ac5) cell_large_graphic_colour_popup_pane_g2_copy1

0x22af,	// (0x00011ace) grid_highlight_pane_cp4

0x22b7,	// (0x00011ad6) bg_popup_window_pane_cp8_ParamLimits

0x22b7,	// (0x00011ad6) bg_popup_window_pane_cp8

0x22d2,	// (0x00011af1) popup_snote_single_text_window_g1_ParamLimits

0x22d2,	// (0x00011af1) popup_snote_single_text_window_g1

0x22e4,	// (0x00011b03) popup_snote_single_text_window_t1_ParamLimits

0x22e4,	// (0x00011b03) popup_snote_single_text_window_t1

0x22f7,	// (0x00011b16) popup_snote_single_text_window_t2_ParamLimits

0x22f7,	// (0x00011b16) popup_snote_single_text_window_t2

0x230a,	// (0x00011b29) popup_snote_single_text_window_t3_ParamLimits

0x230a,	// (0x00011b29) popup_snote_single_text_window_t3

0x2343,	// (0x00011b62) popup_snote_single_text_window_t4_ParamLimits

0x2343,	// (0x00011b62) popup_snote_single_text_window_t4

0x2377,	// (0x00011b96) popup_snote_single_text_window_t5_ParamLimits

0x2377,	// (0x00011b96) popup_snote_single_text_window_t5

0x0004,

0xf5ea,	// (0x0001ee09) popup_snote_single_text_window_t_ParamLimits

0xf5ea,	// (0x0001ee09) popup_snote_single_text_window_t

0x23a6,	// (0x00011bc5) bg_popup_window_pane_cp9_ParamLimits

0x23a6,	// (0x00011bc5) bg_popup_window_pane_cp9

0x22d2,	// (0x00011af1) popup_snote_single_graphic_window_g1_ParamLimits

0x22d2,	// (0x00011af1) popup_snote_single_graphic_window_g1

0x23b4,	// (0x00011bd3) popup_snote_single_graphic_window_g2_ParamLimits

0x23b4,	// (0x00011bd3) popup_snote_single_graphic_window_g2

0x0001,

0xf5f5,	// (0x0001ee14) popup_snote_single_graphic_window_g_ParamLimits

0xf5f5,	// (0x0001ee14) popup_snote_single_graphic_window_g

0x23c0,	// (0x00011bdf) popup_snote_single_graphic_window_t1_ParamLimits

0x23c0,	// (0x00011bdf) popup_snote_single_graphic_window_t1

0x23d3,	// (0x00011bf2) popup_snote_single_graphic_window_t2_ParamLimits

0x23d3,	// (0x00011bf2) popup_snote_single_graphic_window_t2

0x23e6,	// (0x00011c05) popup_snote_single_graphic_window_t3_ParamLimits

0x23e6,	// (0x00011c05) popup_snote_single_graphic_window_t3

0x241f,	// (0x00011c3e) popup_snote_single_graphic_window_t4_ParamLimits

0x241f,	// (0x00011c3e) popup_snote_single_graphic_window_t4

0x2453,	// (0x00011c72) popup_snote_single_graphic_window_t5_ParamLimits

0x2453,	// (0x00011c72) popup_snote_single_graphic_window_t5

0x0004,

0xf5fa,	// (0x0001ee19) popup_snote_single_graphic_window_t_ParamLimits

0xf5fa,	// (0x0001ee19) popup_snote_single_graphic_window_t

0x60a0,	// (0x000158bf) grid_graphic_popup_pane_ParamLimits

0x60a0,	// (0x000158bf) grid_graphic_popup_pane

0x60ce,	// (0x000158ed) listscroll_popup_graphic_pane_g1_ParamLimits

0x60ce,	// (0x000158ed) listscroll_popup_graphic_pane_g1

0xd99e,	// (0x0001d1bd) listscroll_popup_graphic_pane_g2_ParamLimits

0xd99e,	// (0x0001d1bd) listscroll_popup_graphic_pane_g2

0x0001,

0xf9df,	// (0x0001f1fe) listscroll_popup_graphic_pane_g_ParamLimits

0xf9df,	// (0x0001f1fe) listscroll_popup_graphic_pane_g

0x60f6,	// (0x00015915) scroll_pane_cp5

0xd95e,	// (0x0001d17d) cell_graphic_popup_pane_ParamLimits

0xd95e,	// (0x0001d17d) cell_graphic_popup_pane

0x6029,	// (0x00015848) cell_graphic_popup_pane_g1

0x6031,	// (0x00015850) cell_graphic_popup_pane_g2

0x22a6,	// (0x00011ac5) cell_graphic_popup_pane_g3

0x0002,

0xf9d8,	// (0x0001f1f7) cell_graphic_popup_pane_g

0x603a,	// (0x00015859) cell_graphic_popup_pane_t2

0x22af,	// (0x00011ace) grid_highlight_pane_cp3

0x2494,	// (0x00011cb3) list_gen_pane_ParamLimits

0x2494,	// (0x00011cb3) list_gen_pane

0x24c6,	// (0x00011ce5) scroll_pane

0xd919,	// (0x0001d138) bg_list_pane_g1_ParamLimits

0xd919,	// (0x0001d138) bg_list_pane_g1

0x5fa6,	// (0x000157c5) bg_list_pane_g2_ParamLimits

0x5fa6,	// (0x000157c5) bg_list_pane_g2

0x5fb9,	// (0x000157d8) bg_list_pane_g3_ParamLimits

0x5fb9,	// (0x000157d8) bg_list_pane_g3

0x5fcb,	// (0x000157ea) bg_list_pane_g4_ParamLimits

0x5fcb,	// (0x000157ea) bg_list_pane_g4

0xd934,	// (0x0001d153) bg_list_pane_g5_ParamLimits

0xd934,	// (0x0001d153) bg_list_pane_g5

0x0004,

0xf9cd,	// (0x0001f1ec) bg_list_pane_g_ParamLimits

0xf9cd,	// (0x0001f1ec) bg_list_pane_g

0xd8b6,	// (0x0001d0d5) list_double2_graphic_large_graphic_pane_ParamLimits

0xd8b6,	// (0x0001d0d5) list_double2_graphic_large_graphic_pane

0xd8b6,	// (0x0001d0d5) list_double2_graphic_pane_ParamLimits

0xd8b6,	// (0x0001d0d5) list_double2_graphic_pane

0xd8b6,	// (0x0001d0d5) list_double2_large_graphic_pane_ParamLimits

0xd8b6,	// (0x0001d0d5) list_double2_large_graphic_pane

0xd8b6,	// (0x0001d0d5) list_double2_pane_ParamLimits

0xd8b6,	// (0x0001d0d5) list_double2_pane

0xd8b6,	// (0x0001d0d5) list_double_graphic_heading_pane_ParamLimits

0xd8b6,	// (0x0001d0d5) list_double_graphic_heading_pane

0xd8b6,	// (0x0001d0d5) list_double_graphic_pane_ParamLimits

0xd8b6,	// (0x0001d0d5) list_double_graphic_pane

0xd8b6,	// (0x0001d0d5) list_double_heading_pane_ParamLimits

0xd8b6,	// (0x0001d0d5) list_double_heading_pane

0xd8b6,	// (0x0001d0d5) list_double_large_graphic_pane_ParamLimits

0xd8b6,	// (0x0001d0d5) list_double_large_graphic_pane

0xd8b6,	// (0x0001d0d5) list_double_number_pane_ParamLimits

0xd8b6,	// (0x0001d0d5) list_double_number_pane

0xd8b6,	// (0x0001d0d5) list_double_pane_ParamLimits

0xd8b6,	// (0x0001d0d5) list_double_pane

0xd8b6,	// (0x0001d0d5) list_double_time_pane_ParamLimits

0xd8b6,	// (0x0001d0d5) list_double_time_pane

0xd8b6,	// (0x0001d0d5) list_setting_number_pane_ParamLimits

0xd8b6,	// (0x0001d0d5) list_setting_number_pane

0xd8b6,	// (0x0001d0d5) list_setting_pane_ParamLimits

0xd8b6,	// (0x0001d0d5) list_setting_pane

0xd8ca,	// (0x0001d0e9) list_single_2graphic_pane_ParamLimits

0xd8ca,	// (0x0001d0e9) list_single_2graphic_pane

0xd8ca,	// (0x0001d0e9) list_single_graphic_heading_pane_ParamLimits

0xd8ca,	// (0x0001d0e9) list_single_graphic_heading_pane

0xd8ca,	// (0x0001d0e9) list_single_graphic_pane_ParamLimits

0xd8ca,	// (0x0001d0e9) list_single_graphic_pane

0xd8ca,	// (0x0001d0e9) list_single_heading_pane_ParamLimits

0xd8ca,	// (0x0001d0e9) list_single_heading_pane

0xd8ca,	// (0x0001d0e9) list_single_large_graphic_pane_ParamLimits

0xd8ca,	// (0x0001d0e9) list_single_large_graphic_pane

0xd8ca,	// (0x0001d0e9) list_single_number_heading_pane_ParamLimits

0xd8ca,	// (0x0001d0e9) list_single_number_heading_pane

0xd8ca,	// (0x0001d0e9) list_single_number_pane_ParamLimits

0xd8ca,	// (0x0001d0e9) list_single_number_pane

0xd8ca,	// (0x0001d0e9) list_single_pane_ParamLimits

0xd8ca,	// (0x0001d0e9) list_single_pane

0x1bd2,	// (0x000113f1) list_highlight_pane_cp1

0x38ab,	// (0x000130ca) list_single_pane_g1_ParamLimits

0x38ab,	// (0x000130ca) list_single_pane_g1

0x47bc,	// (0x00013fdb) list_single_pane_g2_ParamLimits

0x47bc,	// (0x00013fdb) list_single_pane_g2

0x0001,

0xf60c,	// (0x0001ee2b) list_single_pane_g_ParamLimits

0xf60c,	// (0x0001ee2b) list_single_pane_g

0x677b,	// (0x00015f9a) list_single_pane_t1_ParamLimits

0x677b,	// (0x00015f9a) list_single_pane_t1

0x38ab,	// (0x000130ca) list_single_number_pane_g1_ParamLimits

0x38ab,	// (0x000130ca) list_single_number_pane_g1

0x47bc,	// (0x00013fdb) list_single_number_pane_g2_ParamLimits

0x47bc,	// (0x00013fdb) list_single_number_pane_g2

0x0001,

0xf60c,	// (0x0001ee2b) list_single_number_pane_g_ParamLimits

0xf60c,	// (0x0001ee2b) list_single_number_pane_g

0x47c8,	// (0x00013fe7) list_single_number_pane_t1_ParamLimits

0x47c8,	// (0x00013fe7) list_single_number_pane_t1

0xd6d4,	// (0x0001cef3) list_single_number_pane_t2_ParamLimits

0xd6d4,	// (0x0001cef3) list_single_number_pane_t2

0x0001,

0xf98e,	// (0x0001f1ad) list_single_number_pane_t_ParamLimits

0xf98e,	// (0x0001f1ad) list_single_number_pane_t

0x7bbd,	// (0x000173dc) list_single_graphic_pane_g1_ParamLimits

0x7bbd,	// (0x000173dc) list_single_graphic_pane_g1

0x38ab,	// (0x000130ca) list_single_graphic_pane_g2_ParamLimits

0x38ab,	// (0x000130ca) list_single_graphic_pane_g2

0x47bc,	// (0x00013fdb) list_single_graphic_pane_g3_ParamLimits

0x47bc,	// (0x00013fdb) list_single_graphic_pane_g3

0x0002,

0xf605,	// (0x0001ee24) list_single_graphic_pane_g_ParamLimits

0xf605,	// (0x0001ee24) list_single_graphic_pane_g

0xbf12,	// (0x0001b731) list_single_graphic_pane_t1_ParamLimits

0xbf12,	// (0x0001b731) list_single_graphic_pane_t1

0x38ab,	// (0x000130ca) list_single_heading_pane_g1_ParamLimits

0x38ab,	// (0x000130ca) list_single_heading_pane_g1

0x47bc,	// (0x00013fdb) list_single_heading_pane_g2_ParamLimits

0x47bc,	// (0x00013fdb) list_single_heading_pane_g2

0x0001,

0xf60c,	// (0x0001ee2b) list_single_heading_pane_g_ParamLimits

0xf60c,	// (0x0001ee2b) list_single_heading_pane_g

0x679d,	// (0x00015fbc) list_single_heading_pane_t1_ParamLimits

0x679d,	// (0x00015fbc) list_single_heading_pane_t1

0xbf28,	// (0x0001b747) list_single_heading_pane_t2_ParamLimits

0xbf28,	// (0x0001b747) list_single_heading_pane_t2

0x0001,

0xf611,	// (0x0001ee30) list_single_heading_pane_t_ParamLimits

0xf611,	// (0x0001ee30) list_single_heading_pane_t

0x38ab,	// (0x000130ca) list_single_number_heading_pane_g1_ParamLimits

0x38ab,	// (0x000130ca) list_single_number_heading_pane_g1

0x47bc,	// (0x00013fdb) list_single_number_heading_pane_g2_ParamLimits

0x47bc,	// (0x00013fdb) list_single_number_heading_pane_g2

0x0001,

0xf60c,	// (0x0001ee2b) list_single_number_heading_pane_g_ParamLimits

0xf60c,	// (0x0001ee2b) list_single_number_heading_pane_g

0x679d,	// (0x00015fbc) list_single_number_heading_pane_t1_ParamLimits

0x679d,	// (0x00015fbc) list_single_number_heading_pane_t1

0xbf3a,	// (0x0001b759) list_single_number_heading_pane_t2_ParamLimits

0xbf3a,	// (0x0001b759) list_single_number_heading_pane_t2

0x6713,	// (0x00015f32) list_single_number_heading_pane_t3_ParamLimits

0x6713,	// (0x00015f32) list_single_number_heading_pane_t3

0x0002,

0xf616,	// (0x0001ee35) list_single_number_heading_pane_t_ParamLimits

0xf616,	// (0x0001ee35) list_single_number_heading_pane_t

0x47b0,	// (0x00013fcf) list_single_graphic_heading_pane_g1_ParamLimits

0x47b0,	// (0x00013fcf) list_single_graphic_heading_pane_g1

0xbf4c,	// (0x0001b76b) list_single_graphic_heading_pane_g4_ParamLimits

0xbf4c,	// (0x0001b76b) list_single_graphic_heading_pane_g4

0x47bc,	// (0x00013fdb) list_single_graphic_heading_pane_g5_ParamLimits

0x47bc,	// (0x00013fdb) list_single_graphic_heading_pane_g5

0x0002,

0xf61d,	// (0x0001ee3c) list_single_graphic_heading_pane_g_ParamLimits

0xf61d,	// (0x0001ee3c) list_single_graphic_heading_pane_g

0x679d,	// (0x00015fbc) list_single_graphic_heading_pane_t1_ParamLimits

0x679d,	// (0x00015fbc) list_single_graphic_heading_pane_t1

0xbf5d,	// (0x0001b77c) list_single_graphic_heading_pane_t2_ParamLimits

0xbf5d,	// (0x0001b77c) list_single_graphic_heading_pane_t2

0x0001,

0xf624,	// (0x0001ee43) list_single_graphic_heading_pane_t_ParamLimits

0xf624,	// (0x0001ee43) list_single_graphic_heading_pane_t

0x6791,	// (0x00015fb0) list_single_large_graphic_pane_g1_ParamLimits

0x6791,	// (0x00015fb0) list_single_large_graphic_pane_g1

0x38ab,	// (0x000130ca) list_single_large_graphic_pane_g2_ParamLimits

0x38ab,	// (0x000130ca) list_single_large_graphic_pane_g2

0x47bc,	// (0x00013fdb) list_single_large_graphic_pane_g3_ParamLimits

0x47bc,	// (0x00013fdb) list_single_large_graphic_pane_g3

0x0002,

0xf629,	// (0x0001ee48) list_single_large_graphic_pane_g_ParamLimits

0xf629,	// (0x0001ee48) list_single_large_graphic_pane_g

0x4e95,	// (0x000146b4) wait_border_pane_g2_copy1

0xbf6f,	// (0x0001b78e) list_single_large_graphic_pane_g4_cp2

0x679d,	// (0x00015fbc) list_single_large_graphic_pane_t1_ParamLimits

0x679d,	// (0x00015fbc) list_single_large_graphic_pane_t1

0xbf77,	// (0x0001b796) list_double_pane_g1_ParamLimits

0xbf77,	// (0x0001b796) list_double_pane_g1

0xbf83,	// (0x0001b7a2) list_double_pane_g2_ParamLimits

0xbf83,	// (0x0001b7a2) list_double_pane_g2

0x0001,

0xf630,	// (0x0001ee4f) list_double_pane_g_ParamLimits

0xf630,	// (0x0001ee4f) list_double_pane_g

0xbf8f,	// (0x0001b7ae) list_double_pane_t1_ParamLimits

0xbf8f,	// (0x0001b7ae) list_double_pane_t1

0xbfa5,	// (0x0001b7c4) list_double_pane_t2_ParamLimits

0xbfa5,	// (0x0001b7c4) list_double_pane_t2

0x0001,

0xf635,	// (0x0001ee54) list_double_pane_t_ParamLimits

0xf635,	// (0x0001ee54) list_double_pane_t

0xbfb7,	// (0x0001b7d6) list_double2_pane_g1_ParamLimits

0xbfb7,	// (0x0001b7d6) list_double2_pane_g1

0xbfc8,	// (0x0001b7e7) list_double2_pane_g2_ParamLimits

0xbfc8,	// (0x0001b7e7) list_double2_pane_g2

0x0001,

0xf63a,	// (0x0001ee59) list_double2_pane_g_ParamLimits

0xf63a,	// (0x0001ee59) list_double2_pane_g

0xbfd4,	// (0x0001b7f3) list_double2_pane_t1_ParamLimits

0xbfd4,	// (0x0001b7f3) list_double2_pane_t1

0xbfea,	// (0x0001b809) list_double2_pane_t2_ParamLimits

0xbfea,	// (0x0001b809) list_double2_pane_t2

0x0001,

0xf63f,	// (0x0001ee5e) list_double2_pane_t_ParamLimits

0xf63f,	// (0x0001ee5e) list_double2_pane_t

0xbf77,	// (0x0001b796) list_double_number_pane_g1_ParamLimits

0xbf77,	// (0x0001b796) list_double_number_pane_g1

0xbf83,	// (0x0001b7a2) list_double_number_pane_g2_ParamLimits

0xbf83,	// (0x0001b7a2) list_double_number_pane_g2

0x0001,

0xf630,	// (0x0001ee4f) list_double_number_pane_g_ParamLimits

0xf630,	// (0x0001ee4f) list_double_number_pane_g

0xbffc,	// (0x0001b81b) list_double_number_pane_t1_ParamLimits

0xbffc,	// (0x0001b81b) list_double_number_pane_t1

0xc00e,	// (0x0001b82d) list_double_number_pane_t2_ParamLimits

0xc00e,	// (0x0001b82d) list_double_number_pane_t2

0xc024,	// (0x0001b843) list_double_number_pane_t3_ParamLimits

0xc024,	// (0x0001b843) list_double_number_pane_t3

0x0002,

0xf644,	// (0x0001ee63) list_double_number_pane_t_ParamLimits

0xf644,	// (0x0001ee63) list_double_number_pane_t

0xc036,	// (0x0001b855) list_double_graphic_pane_g1_ParamLimits

0xc036,	// (0x0001b855) list_double_graphic_pane_g1

0xc042,	// (0x0001b861) list_double_graphic_pane_g2_ParamLimits

0xc042,	// (0x0001b861) list_double_graphic_pane_g2

0xc051,	// (0x0001b870) list_double_graphic_pane_g3_ParamLimits

0xc051,	// (0x0001b870) list_double_graphic_pane_g3

0x0003,

0xf64b,	// (0x0001ee6a) list_double_graphic_pane_g_ParamLimits

0xf64b,	// (0x0001ee6a) list_double_graphic_pane_g

0xc069,	// (0x0001b888) list_double_graphic_pane_t1_ParamLimits

0xc069,	// (0x0001b888) list_double_graphic_pane_t1

0xc07f,	// (0x0001b89e) list_double_graphic_pane_t2_ParamLimits

0xc07f,	// (0x0001b89e) list_double_graphic_pane_t2

0x0001,

0xf654,	// (0x0001ee73) list_double_graphic_pane_t_ParamLimits

0xf654,	// (0x0001ee73) list_double_graphic_pane_t

0x5511,	// (0x00014d30) list_double2_graphic_pane_g1_ParamLimits

0x5511,	// (0x00014d30) list_double2_graphic_pane_g1

0x3758,	// (0x00012f77) list_double2_graphic_pane_g2_ParamLimits

0x3758,	// (0x00012f77) list_double2_graphic_pane_g2

0xbfc8,	// (0x0001b7e7) list_double2_graphic_pane_g3_ParamLimits

0xbfc8,	// (0x0001b7e7) list_double2_graphic_pane_g3

0x0002,

0xf659,	// (0x0001ee78) list_double2_graphic_pane_g_ParamLimits

0xf659,	// (0x0001ee78) list_double2_graphic_pane_g

0xc091,	// (0x0001b8b0) list_double2_graphic_pane_t1_ParamLimits

0xc091,	// (0x0001b8b0) list_double2_graphic_pane_t1

0xc0a7,	// (0x0001b8c6) list_double2_graphic_pane_t2_ParamLimits

0xc0a7,	// (0x0001b8c6) list_double2_graphic_pane_t2

0x0001,

0xf660,	// (0x0001ee7f) list_double2_graphic_pane_t_ParamLimits

0xf660,	// (0x0001ee7f) list_double2_graphic_pane_t

0xc0b9,	// (0x0001b8d8) list_double_large_graphic_pane_g1_ParamLimits

0xc0b9,	// (0x0001b8d8) list_double_large_graphic_pane_g1

0xc0e4,	// (0x0001b903) list_double_large_graphic_pane_g2_ParamLimits

0xc0e4,	// (0x0001b903) list_double_large_graphic_pane_g2

0xbf83,	// (0x0001b7a2) list_double_large_graphic_pane_g3_ParamLimits

0xbf83,	// (0x0001b7a2) list_double_large_graphic_pane_g3

0xc0f5,	// (0x0001b914) list_double_large_graphic_pane_g4_ParamLimits

0xc0f5,	// (0x0001b914) list_double_large_graphic_pane_g4

0x0004,

0xf665,	// (0x0001ee84) list_double_large_graphic_pane_g_ParamLimits

0xf665,	// (0x0001ee84) list_double_large_graphic_pane_g

0xc108,	// (0x0001b927) list_double_large_graphic_pane_t1_ParamLimits

0xc108,	// (0x0001b927) list_double_large_graphic_pane_t1

0xc121,	// (0x0001b940) list_double_large_graphic_pane_t2_ParamLimits

0xc121,	// (0x0001b940) list_double_large_graphic_pane_t2

0x0001,

0xf670,	// (0x0001ee8f) list_double_large_graphic_pane_t_ParamLimits

0xf670,	// (0x0001ee8f) list_double_large_graphic_pane_t

0xc133,	// (0x0001b952) list_double2_large_graphic_pane_g1_ParamLimits

0xc133,	// (0x0001b952) list_double2_large_graphic_pane_g1

0xbfb7,	// (0x0001b7d6) list_double2_large_graphic_pane_g2_ParamLimits

0xbfb7,	// (0x0001b7d6) list_double2_large_graphic_pane_g2

0xbfc8,	// (0x0001b7e7) list_double2_large_graphic_pane_g3_ParamLimits

0xbfc8,	// (0x0001b7e7) list_double2_large_graphic_pane_g3

0x0002,

0xf675,	// (0x0001ee94) list_double2_large_graphic_pane_g_ParamLimits

0xf675,	// (0x0001ee94) list_double2_large_graphic_pane_g

0xc13f,	// (0x0001b95e) list_double2_large_graphic_pane_t1_ParamLimits

0xc13f,	// (0x0001b95e) list_double2_large_graphic_pane_t1

0xc155,	// (0x0001b974) list_double2_large_graphic_pane_t2_ParamLimits

0xc155,	// (0x0001b974) list_double2_large_graphic_pane_t2

0x0001,

0xf67c,	// (0x0001ee9b) list_double2_large_graphic_pane_t_ParamLimits

0xf67c,	// (0x0001ee9b) list_double2_large_graphic_pane_t

0xc167,	// (0x0001b986) list_double_heading_pane_g1_ParamLimits

0xc167,	// (0x0001b986) list_double_heading_pane_g1

0xc178,	// (0x0001b997) list_double_heading_pane_g2_ParamLimits

0xc178,	// (0x0001b997) list_double_heading_pane_g2

0x0001,

0xf681,	// (0x0001eea0) list_double_heading_pane_g_ParamLimits

0xf681,	// (0x0001eea0) list_double_heading_pane_g

0xc184,	// (0x0001b9a3) list_double_heading_pane_t1_ParamLimits

0xc184,	// (0x0001b9a3) list_double_heading_pane_t1

0xc19a,	// (0x0001b9b9) list_double_heading_pane_t2_ParamLimits

0xc19a,	// (0x0001b9b9) list_double_heading_pane_t2

0x0001,

0xf686,	// (0x0001eea5) list_double_heading_pane_t_ParamLimits

0xf686,	// (0x0001eea5) list_double_heading_pane_t

0x270b,	// (0x00011f2a) list_double_graphic_heading_pane_g1_ParamLimits

0x270b,	// (0x00011f2a) list_double_graphic_heading_pane_g1

0xc167,	// (0x0001b986) list_double_graphic_heading_pane_g2_ParamLimits

0xc167,	// (0x0001b986) list_double_graphic_heading_pane_g2

0xc178,	// (0x0001b997) list_double_graphic_heading_pane_g3_ParamLimits

0xc178,	// (0x0001b997) list_double_graphic_heading_pane_g3

0x0002,

0xf68b,	// (0x0001eeaa) list_double_graphic_heading_pane_g_ParamLimits

0xf68b,	// (0x0001eeaa) list_double_graphic_heading_pane_g

0xc1ac,	// (0x0001b9cb) list_double_graphic_heading_pane_t1_ParamLimits

0xc1ac,	// (0x0001b9cb) list_double_graphic_heading_pane_t1

0xc1c2,	// (0x0001b9e1) list_double_graphic_heading_pane_t2_ParamLimits

0xc1c2,	// (0x0001b9e1) list_double_graphic_heading_pane_t2

0x0001,

0xf692,	// (0x0001eeb1) list_double_graphic_heading_pane_t_ParamLimits

0xf692,	// (0x0001eeb1) list_double_graphic_heading_pane_t

0xc0e4,	// (0x0001b903) list_double_time_pane_g1_ParamLimits

0xc0e4,	// (0x0001b903) list_double_time_pane_g1

0xbf83,	// (0x0001b7a2) list_double_time_pane_g2_ParamLimits

0xbf83,	// (0x0001b7a2) list_double_time_pane_g2

0x0001,

0xf697,	// (0x0001eeb6) list_double_time_pane_g_ParamLimits

0xf697,	// (0x0001eeb6) list_double_time_pane_g

0xc1d4,	// (0x0001b9f3) list_double_time_pane_t1_ParamLimits

0xc1d4,	// (0x0001b9f3) list_double_time_pane_t1

0xc1ea,	// (0x0001ba09) list_double_time_pane_t2_ParamLimits

0xc1ea,	// (0x0001ba09) list_double_time_pane_t2

0xc1fc,	// (0x0001ba1b) list_double_time_pane_t3_ParamLimits

0xc1fc,	// (0x0001ba1b) list_double_time_pane_t3

0xc20e,	// (0x0001ba2d) list_double_time_pane_t4_ParamLimits

0xc20e,	// (0x0001ba2d) list_double_time_pane_t4

0x0003,

0xf69c,	// (0x0001eebb) list_double_time_pane_t_ParamLimits

0xf69c,	// (0x0001eebb) list_double_time_pane_t

0x3758,	// (0x00012f77) list_setting_pane_g1_ParamLimits

0x3758,	// (0x00012f77) list_setting_pane_g1

0xbfc8,	// (0x0001b7e7) list_setting_pane_g2_ParamLimits

0xbfc8,	// (0x0001b7e7) list_setting_pane_g2

0x0001,

0xf6a5,	// (0x0001eec4) list_setting_pane_g_ParamLimits

0xf6a5,	// (0x0001eec4) list_setting_pane_g

0xc220,	// (0x0001ba3f) list_setting_pane_t1_ParamLimits

0xc220,	// (0x0001ba3f) list_setting_pane_t1

0xc237,	// (0x0001ba56) list_setting_pane_t2_ParamLimits

0xc237,	// (0x0001ba56) list_setting_pane_t2

0x0002,

0xf6aa,	// (0x0001eec9) list_setting_pane_t_ParamLimits

0xf6aa,	// (0x0001eec9) list_setting_pane_t

0xc276,	// (0x0001ba95) set_value_pane_cp_ParamLimits

0xc276,	// (0x0001ba95) set_value_pane_cp

0x3758,	// (0x00012f77) list_setting_number_pane_g1_ParamLimits

0x3758,	// (0x00012f77) list_setting_number_pane_g1

0xbfc8,	// (0x0001b7e7) list_setting_number_pane_g2_ParamLimits

0xbfc8,	// (0x0001b7e7) list_setting_number_pane_g2

0x0001,

0xf6a5,	// (0x0001eec4) list_setting_number_pane_g_ParamLimits

0xf6a5,	// (0x0001eec4) list_setting_number_pane_g

0xc284,	// (0x0001baa3) list_setting_number_pane_t1_ParamLimits

0xc284,	// (0x0001baa3) list_setting_number_pane_t1

0xc298,	// (0x0001bab7) list_setting_number_pane_t2_ParamLimits

0xc298,	// (0x0001bab7) list_setting_number_pane_t2

0xc2af,	// (0x0001bace) list_setting_number_pane_t3_ParamLimits

0xc2af,	// (0x0001bace) list_setting_number_pane_t3

0x0003,

0xf6b1,	// (0x0001eed0) list_setting_number_pane_t_ParamLimits

0xf6b1,	// (0x0001eed0) list_setting_number_pane_t

0xc276,	// (0x0001ba95) set_value_pane_ParamLimits

0xc276,	// (0x0001ba95) set_value_pane

0x29a5,	// (0x000121c4) bg_set_opt_pane_ParamLimits

0x29a5,	// (0x000121c4) bg_set_opt_pane

0x29c6,	// (0x000121e5) set_value_pane_t1

0x29d4,	// (0x000121f3) slider_set_pane_cp3

0x29dd,	// (0x000121fc) volume_small_pane_cp

0x29e6,	// (0x00012205) list_form_gen_pane

0x29ef,	// (0x0001220e) scroll_pane_cp8

0xc2f2,	// (0x0001bb11) form_field_data_pane_ParamLimits

0xc2f2,	// (0x0001bb11) form_field_data_pane

0xc30d,	// (0x0001bb2c) form_field_data_wide_pane_ParamLimits

0xc30d,	// (0x0001bb2c) form_field_data_wide_pane

0xc331,	// (0x0001bb50) form_field_popup_pane_ParamLimits

0xc331,	// (0x0001bb50) form_field_popup_pane

0x2a77,	// (0x00012296) form_field_popup_wide_pane_ParamLimits

0x2a77,	// (0x00012296) form_field_popup_wide_pane

0x2a98,	// (0x000122b7) form_field_slider_pane_ParamLimits

0x2a98,	// (0x000122b7) form_field_slider_pane

0x2aab,	// (0x000122ca) form_field_slider_wide_pane_ParamLimits

0x2aab,	// (0x000122ca) form_field_slider_wide_pane

0x2abe,	// (0x000122dd) data_form_pane

0xc35d,	// (0x0001bb7c) form_field_data_pane_t1

0x2aee,	// (0x0001230d) input_focus_pane

0x2afc,	// (0x0001231b) data_form_wide_pane

0x2b34,	// (0x00012353) form_field_data_wide_pane_t1

0x22c4,	// (0x00011ae3) input_focus_pane_cp6

0xc377,	// (0x0001bb96) form_field_popup_pane_t1

0x2aee,	// (0x0001230d) input_focus_pane_cp7

0x2b70,	// (0x0001238f) list_form_pane

0x2b84,	// (0x000123a3) form_field_popup_wide_pane_t1

0x2aee,	// (0x0001230d) input_focus_pane_cp8

0x2b99,	// (0x000123b8) list_form_wide_pane

0xc399,	// (0x0001bbb8) form_field_slider_pane_t1_ParamLimits

0xc399,	// (0x0001bbb8) form_field_slider_pane_t1

0xc3b1,	// (0x0001bbd0) form_field_slider_pane_t2_ParamLimits

0xc3b1,	// (0x0001bbd0) form_field_slider_pane_t2

0x0001,

0xf6c1,	// (0x0001eee0) form_field_slider_pane_t_ParamLimits

0xf6c1,	// (0x0001eee0) form_field_slider_pane_t

0x1f48,	// (0x00011767) input_focus_pane_cp9_ParamLimits

0x1f48,	// (0x00011767) input_focus_pane_cp9

0xc3c6,	// (0x0001bbe5) slider_cont_pane_ParamLimits

0xc3c6,	// (0x0001bbe5) slider_cont_pane

0x2bea,	// (0x00012409) form_field_slider_wide_pane_t1_ParamLimits

0x2bea,	// (0x00012409) form_field_slider_wide_pane_t1

0x2bfc,	// (0x0001241b) form_field_slider_wide_pane_t2_ParamLimits

0x2bfc,	// (0x0001241b) form_field_slider_wide_pane_t2

0x0001,

0xf6c6,	// (0x0001eee5) form_field_slider_wide_pane_t_ParamLimits

0xf6c6,	// (0x0001eee5) form_field_slider_wide_pane_t

0x1f48,	// (0x00011767) input_focus_pane_cp10_ParamLimits

0x1f48,	// (0x00011767) input_focus_pane_cp10

0xc3da,	// (0x0001bbf9) slider_cont_pane_cp1_ParamLimits

0xc3da,	// (0x0001bbf9) slider_cont_pane_cp1

0xc3ee,	// (0x0001bc0d) slider_form_pane_cp

0x2c2a,	// (0x00012449) input_focus_pane_g1

0x2c32,	// (0x00012451) input_focus_pane_g2

0x2c3a,	// (0x00012459) input_focus_pane_g3

0x2c42,	// (0x00012461) input_focus_pane_g4

0x2c4a,	// (0x00012469) input_focus_pane_g5

0x2c52,	// (0x00012471) input_focus_pane_g6

0x2c5a,	// (0x00012479) input_focus_pane_g7

0x2c62,	// (0x00012481) input_focus_pane_g8

0x2c6a,	// (0x00012489) input_focus_pane_g9

0x1bc8,	// (0x000113e7) input_focus_pane_g10

0x0009,

0xf6cb,	// (0x0001eeea) input_focus_pane_g

0x4e9e,	// (0x000146bd) wait_border_pane_g3_copy1

0xc3f6,	// (0x0001bc15) data_form_pane_t1

0x1bc8,	// (0x000113e7) wait_anim_pane_g1_copy1

0xd88b,	// (0x0001d0aa) data_form_wide_pane_t1

0x2c91,	// (0x000124b0) list_form_graphic_pane_cp_ParamLimits

0x2c91,	// (0x000124b0) list_form_graphic_pane_cp

0x5e4b,	// (0x0001566a) slider_form_pane_g1

0x5e54,	// (0x00015673) slider_form_pane_g2

0x0006,

0xf9be,	// (0x0001f1dd) slider_form_pane_g

0xc412,	// (0x0001bc31) list_form_graphic_pane_ParamLimits

0xc412,	// (0x0001bc31) list_form_graphic_pane

0x2ca3,	// (0x000124c2) list_form_graphic_pane_g1

0x2cab,	// (0x000124ca) list_form_graphic_pane_t1_ParamLimits

0x2cab,	// (0x000124ca) list_form_graphic_pane_t1

0x1cb2,	// (0x000114d1) list_highlight_pane_cp5_ParamLimits

0x1cb2,	// (0x000114d1) list_highlight_pane_cp5

0xc423,	// (0x0001bc42) find_pane_g1

0x2cc9,	// (0x000124e8) input_find_pane

0xc42c,	// (0x0001bc4b) input_find_pane_g1_ParamLimits

0xc42c,	// (0x0001bc4b) input_find_pane_g1

0xc438,	// (0x0001bc57) input_find_pane_t1_ParamLimits

0xc438,	// (0x0001bc57) input_find_pane_t1

0xc44d,	// (0x0001bc6c) input_find_pane_t2_ParamLimits

0xc44d,	// (0x0001bc6c) input_find_pane_t2

0x0001,

0xf6e0,	// (0x0001eeff) input_find_pane_t_ParamLimits

0xf6e0,	// (0x0001eeff) input_find_pane_t

0x2d08,	// (0x00012527) input_focus_pane_cp5_ParamLimits

0x2d08,	// (0x00012527) input_focus_pane_cp5

0xc46e,	// (0x0001bc8d) bg_popup_window_pane_cp2_ParamLimits

0xc46e,	// (0x0001bc8d) bg_popup_window_pane_cp2

0xc47b,	// (0x0001bc9a) listscroll_menu_pane_ParamLimits

0xc47b,	// (0x0001bc9a) listscroll_menu_pane

0xc487,	// (0x0001bca6) popup_submenu_window_ParamLimits

0xc487,	// (0x0001bca6) popup_submenu_window

0x2d6b,	// (0x0001258a) find_popup_pane_g1

0x2d73,	// (0x00012592) input_popup_find_pane_cp

0x2d08,	// (0x00012527) input_focus_pane_cp4_ParamLimits

0x2d08,	// (0x00012527) input_focus_pane_cp4

0x2d8b,	// (0x000125aa) input_popup_find_pane_t1_ParamLimits

0x2d8b,	// (0x000125aa) input_popup_find_pane_t1

0x1bd2,	// (0x000113f1) bg_popup_sub_pane_cp

0x2db9,	// (0x000125d8) listscroll_popup_sub_pane

0x2dc1,	// (0x000125e0) list_submenu_pane_ParamLimits

0x2dc1,	// (0x000125e0) list_submenu_pane

0x2dd2,	// (0x000125f1) scroll_pane_cp4

0x2dda,	// (0x000125f9) list_single_popup_submenu_pane_ParamLimits

0x2dda,	// (0x000125f9) list_single_popup_submenu_pane

0x2def,	// (0x0001260e) list_single_popup_submenu_pane_g1

0x2df7,	// (0x00012616) list_single_popup_submenu_pane_t1_ParamLimits

0x2df7,	// (0x00012616) list_single_popup_submenu_pane_t1

0x1f48,	// (0x00011767) bg_active_tab_pane_cp1_ParamLimits

0x1f48,	// (0x00011767) bg_active_tab_pane_cp1

0xc4c5,	// (0x0001bce4) tabs_2_active_pane_g1

0xc4cd,	// (0x0001bcec) tabs_2_active_pane_t1

0x1f48,	// (0x00011767) bg_passive_tab_pane_cp1_ParamLimits

0x1f48,	// (0x00011767) bg_passive_tab_pane_cp1

0xc4c5,	// (0x0001bce4) tabs_2_passive_pane_g1

0xc4cd,	// (0x0001bcec) tabs_2_passive_pane_t1

0x1cb2,	// (0x000114d1) bg_active_tab_pane_cp4

0xc4df,	// (0x0001bcfe) tabs_2_long_active_pane_t1

0x3cc8,	// (0x000134e7) bg_passive_tab_pane_cp4

0x0a93,	// (0x000102b2) list_single_midp_graphic_pane_g4_ParamLimits

0x1cb2,	// (0x000114d1) bg_active_tab_pane_cp5

0xc4f2,	// (0x0001bd11) tabs_3_long_active_pane_t1

0x3cc8,	// (0x000134e7) bg_passive_tab_pane_cp5

0x0a93,	// (0x000102b2) list_single_midp_graphic_pane_g4

0x1cb2,	// (0x000114d1) bg_popup_window_pane_cp13_ParamLimits

0x1cb2,	// (0x000114d1) bg_popup_window_pane_cp13

0x2e6e,	// (0x0001268d) listscroll_popup_fast_pane_ParamLimits

0x2e6e,	// (0x0001268d) listscroll_popup_fast_pane

0x2e7d,	// (0x0001269c) grid_popup_fast_pane_ParamLimits

0x2e7d,	// (0x0001269c) grid_popup_fast_pane

0x2e8f,	// (0x000126ae) scroll_pane_cp9_ParamLimits

0x2e8f,	// (0x000126ae) scroll_pane_cp9

0x7c37,	// (0x00017456) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x7c37,	// (0x00017456) list_single_graphic_hl_pane_t1_cp2

0x2eb3,	// (0x000126d2) input_focus_pane_cp20_ParamLimits

0x2eb3,	// (0x000126d2) input_focus_pane_cp20

0x2ec1,	// (0x000126e0) query_popup_data_pane_t1_ParamLimits

0x2ec1,	// (0x000126e0) query_popup_data_pane_t1

0x2ed4,	// (0x000126f3) query_popup_data_pane_t2_ParamLimits

0x2ed4,	// (0x000126f3) query_popup_data_pane_t2

0x2f1a,	// (0x00012739) query_popup_data_pane_t3_ParamLimits

0x2f1a,	// (0x00012739) query_popup_data_pane_t3

0x2f5b,	// (0x0001277a) query_popup_data_pane_t4_ParamLimits

0x2f5b,	// (0x0001277a) query_popup_data_pane_t4

0x2f97,	// (0x000127b6) query_popup_data_pane_t5_ParamLimits

0x2f97,	// (0x000127b6) query_popup_data_pane_t5

0x0004,

0xf6e5,	// (0x0001ef04) query_popup_data_pane_t_ParamLimits

0xf6e5,	// (0x0001ef04) query_popup_data_pane_t

0x2c2a,	// (0x00012449) bg_set_opt_pane_g1

0x2c32,	// (0x00012451) bg_set_opt_pane_g2

0x2c3a,	// (0x00012459) bg_set_opt_pane_g3

0x2c42,	// (0x00012461) bg_set_opt_pane_g4

0x2c4a,	// (0x00012469) bg_set_opt_pane_g5

0x2c52,	// (0x00012471) bg_set_opt_pane_g6

0x2c5a,	// (0x00012479) bg_set_opt_pane_g7

0x2c62,	// (0x00012481) bg_set_opt_pane_g8

0x2c6a,	// (0x00012489) bg_set_opt_pane_g9

0x0008,

0xf6f0,	// (0x0001ef0f) bg_set_opt_pane_g

0x068f,	// (0x0000feae) control_top_pane_stacon_ParamLimits

0x068f,	// (0x0000feae) control_top_pane_stacon

0x06e2,	// (0x0000ff01) signal_pane_stacon_ParamLimits

0x06e2,	// (0x0000ff01) signal_pane_stacon

0x35cf,	// (0x00012dee) stacon_top_pane_g1_ParamLimits

0x35cf,	// (0x00012dee) stacon_top_pane_g1

0x0707,	// (0x0000ff26) title_pane_stacon_ParamLimits

0x0707,	// (0x0000ff26) title_pane_stacon

0x0731,	// (0x0000ff50) uni_indicator_pane_stacon_ParamLimits

0x0731,	// (0x0000ff50) uni_indicator_pane_stacon

0x0749,	// (0x0000ff68) battery_pane_stacon_ParamLimits

0x0749,	// (0x0000ff68) battery_pane_stacon

0x078d,	// (0x0000ffac) control_bottom_pane_stacon_ParamLimits

0x078d,	// (0x0000ffac) control_bottom_pane_stacon

0x07b0,	// (0x0000ffcf) navi_pane_stacon_ParamLimits

0x07b0,	// (0x0000ffcf) navi_pane_stacon

0x35f1,	// (0x00012e10) stacon_bottom_pane_g1_ParamLimits

0x35f1,	// (0x00012e10) stacon_bottom_pane_g1

0x03ec,	// (0x0000fc0b) aid_levels_signal_lsc_ParamLimits

0x03ec,	// (0x0000fc0b) aid_levels_signal_lsc

0x0403,	// (0x0000fc22) signal_pane_stacon_g1_ParamLimits

0x0403,	// (0x0000fc22) signal_pane_stacon_g1

0x0417,	// (0x0000fc36) signal_pane_stacon_g2_ParamLimits

0x0417,	// (0x0000fc36) signal_pane_stacon_g2

0x0001,

0xf703,	// (0x0001ef22) signal_pane_stacon_g_ParamLimits

0xf703,	// (0x0001ef22) signal_pane_stacon_g

0x044c,	// (0x0000fc6b) title_pane_stacon_t1_ParamLimits

0x044c,	// (0x0000fc6b) title_pane_stacon_t1

0x2fdb,	// (0x000127fa) uni_indicator_pane_stacon_g1

0x2fe5,	// (0x00012804) uni_indicator_pane_stacon_g2

0x2fef,	// (0x0001280e) uni_indicator_pane_stacon_g3

0x2ff9,	// (0x00012818) uni_indicator_pane_stacon_g4

0x0003,

0xf70f,	// (0x0001ef2e) uni_indicator_pane_stacon_g

0x0471,	// (0x0000fc90) control_top_pane_stacon_g1

0x0479,	// (0x0000fc98) control_top_pane_stacon_t1_ParamLimits

0x0479,	// (0x0000fc98) control_top_pane_stacon_t1

0x04b0,	// (0x0000fccf) aid_levels_battery_lsc_ParamLimits

0x04b0,	// (0x0000fccf) aid_levels_battery_lsc

0x04c8,	// (0x0000fce7) battery_pane_stacon_g1_ParamLimits

0x04c8,	// (0x0000fce7) battery_pane_stacon_g1

0x04db,	// (0x0000fcfa) battery_pane_stacon_g2_ParamLimits

0x04db,	// (0x0000fcfa) battery_pane_stacon_g2

0x0001,

0xf718,	// (0x0001ef37) battery_pane_stacon_g_ParamLimits

0xf718,	// (0x0001ef37) battery_pane_stacon_g

0x0519,	// (0x0000fd38) navi_icon_pane_stacon

0x052d,	// (0x0000fd4c) navi_navi_pane_stacon

0x0519,	// (0x0000fd38) navi_text_pane_stacon

0x0471,	// (0x0000fc90) control_bottom_pane_stacon_g1

0x0543,	// (0x0000fd62) control_bottom_pane_stacon_t1_ParamLimits

0x0543,	// (0x0000fd62) control_bottom_pane_stacon_t1

0xc504,	// (0x0001bd23) grid_app_pane_ParamLimits

0xc504,	// (0x0001bd23) grid_app_pane

0xc53c,	// (0x0001bd5b) scroll_pane_cp15_ParamLimits

0xc53c,	// (0x0001bd5b) scroll_pane_cp15

0xc559,	// (0x0001bd78) cell_app_pane_ParamLimits

0xc559,	// (0x0001bd78) cell_app_pane

0xc59a,	// (0x0001bdb9) cell_app_pane_g1_ParamLimits

0xc59a,	// (0x0001bdb9) cell_app_pane_g1

0x30a6,	// (0x000128c5) cell_app_pane_g2_ParamLimits

0x30a6,	// (0x000128c5) cell_app_pane_g2

0x0001,

0xf71d,	// (0x0001ef3c) cell_app_pane_g_ParamLimits

0xf71d,	// (0x0001ef3c) cell_app_pane_g

0x30b2,	// (0x000128d1) cell_app_pane_t1_ParamLimits

0x30b2,	// (0x000128d1) cell_app_pane_t1

0x30c4,	// (0x000128e3) grid_highlight_pane_ParamLimits

0x30c4,	// (0x000128e3) grid_highlight_pane

0x2c2a,	// (0x00012449) cell_highlight_pane_g1

0x2c32,	// (0x00012451) cell_highlight_pane_g2

0x2c3a,	// (0x00012459) cell_highlight_pane_g3

0x2c42,	// (0x00012461) cell_highlight_pane_g4

0x2c4a,	// (0x00012469) cell_highlight_pane_g5

0x2c52,	// (0x00012471) cell_highlight_pane_g6

0x2c5a,	// (0x00012479) cell_highlight_pane_g7

0x2c62,	// (0x00012481) cell_highlight_pane_g8

0x2c6a,	// (0x00012489) cell_highlight_pane_g9

0x1bc8,	// (0x000113e7) cell_highlight_pane_g10

0x0009,

0xf6cb,	// (0x0001eeea) cell_highlight_pane_g

0x30d5,	// (0x000128f4) bg_scroll_pane

0x058d,	// (0x0000fdac) scroll_handle_pane

0x311c,	// (0x0001293b) scroll_bg_pane_g1

0x3131,	// (0x00012950) scroll_bg_pane_g2

0x3149,	// (0x00012968) scroll_bg_pane_g3

0x0002,

0xf722,	// (0x0001ef41) scroll_bg_pane_g

0x315e,	// (0x0001297d) scroll_handle_focus_pane_ParamLimits

0x315e,	// (0x0001297d) scroll_handle_focus_pane

0x311c,	// (0x0001293b) scroll_handle_pane_g1

0x316b,	// (0x0001298a) scroll_handle_pane_g2

0x3149,	// (0x00012968) scroll_handle_pane_g3

0x0002,

0xf729,	// (0x0001ef48) scroll_handle_pane_g

0x2d08,	// (0x00012527) bg_popup_sub_pane_cp21_ParamLimits

0x2d08,	// (0x00012527) bg_popup_sub_pane_cp21

0x317f,	// (0x0001299e) popup_fep_japan_predictive_window_t1_ParamLimits

0x317f,	// (0x0001299e) popup_fep_japan_predictive_window_t1

0x3196,	// (0x000129b5) popup_fep_japan_predictive_window_t2_ParamLimits

0x3196,	// (0x000129b5) popup_fep_japan_predictive_window_t2

0x31c9,	// (0x000129e8) popup_fep_japan_predictive_window_t3_ParamLimits

0x31c9,	// (0x000129e8) popup_fep_japan_predictive_window_t3

0x0002,

0xf730,	// (0x0001ef4f) popup_fep_japan_predictive_window_t_ParamLimits

0xf730,	// (0x0001ef4f) popup_fep_japan_predictive_window_t

0x1bd2,	// (0x000113f1) bg_popup_sub_pane_cp23

0x3200,	// (0x00012a1f) listscroll_japin_cand_pane

0x3208,	// (0x00012a27) popup_fep_japan_candidate_window_t1

0x3216,	// (0x00012a35) candidate_pane_ParamLimits

0x3216,	// (0x00012a35) candidate_pane

0x3228,	// (0x00012a47) scroll_pane_cp30

0x3232,	// (0x00012a51) list_single_popup_jap_candidate_pane_ParamLimits

0x3232,	// (0x00012a51) list_single_popup_jap_candidate_pane

0x1bd2,	// (0x000113f1) list_highlight_pane_cp30

0x3246,	// (0x00012a65) list_single_popup_jap_candidate_pane_t1

0xc5be,	// (0x0001bddd) level_1_signal

0xc5d0,	// (0x0001bdef) level_2_signal

0xc5e3,	// (0x0001be02) level_3_signal

0xc5f6,	// (0x0001be15) level_4_signal

0xc63d,	// (0x0001be5c) level_5_signal

0xc650,	// (0x0001be6f) level_6_signal

0xc663,	// (0x0001be82) level_7_signal

0xc5be,	// (0x0001bddd) level_1_battery

0xc5d0,	// (0x0001bdef) level_2_battery

0xc5e3,	// (0x0001be02) level_3_battery

0xc5f6,	// (0x0001be15) level_4_battery

0xc63d,	// (0x0001be5c) level_5_battery

0xc650,	// (0x0001be6f) level_6_battery

0xc663,	// (0x0001be82) level_7_battery

0x32c8,	// (0x00012ae7) list_menu_pane_ParamLimits

0x32c8,	// (0x00012ae7) list_menu_pane

0x32d9,	// (0x00012af8) scroll_pane_cp25_ParamLimits

0x32d9,	// (0x00012af8) scroll_pane_cp25

0x32f2,	// (0x00012b11) list_double2_graphic_pane_cp2_ParamLimits

0x32f2,	// (0x00012b11) list_double2_graphic_pane_cp2

0x32f2,	// (0x00012b11) list_double2_large_graphic_pane_cp2_ParamLimits

0x32f2,	// (0x00012b11) list_double2_large_graphic_pane_cp2

0x32f2,	// (0x00012b11) list_double2_pane_cp2_ParamLimits

0x32f2,	// (0x00012b11) list_double2_pane_cp2

0x32f2,	// (0x00012b11) list_double_graphic_pane_cp2_ParamLimits

0x32f2,	// (0x00012b11) list_double_graphic_pane_cp2

0x32f2,	// (0x00012b11) list_double_large_graphic_pane_cp2_ParamLimits

0x32f2,	// (0x00012b11) list_double_large_graphic_pane_cp2

0x32f2,	// (0x00012b11) list_double_number_pane_cp2_ParamLimits

0x32f2,	// (0x00012b11) list_double_number_pane_cp2

0x32f2,	// (0x00012b11) list_double_pane_cp2_ParamLimits

0x32f2,	// (0x00012b11) list_double_pane_cp2

0xc676,	// (0x0001be95) list_single_2graphic_pane_cp2_ParamLimits

0xc676,	// (0x0001be95) list_single_2graphic_pane_cp2

0xc676,	// (0x0001be95) list_single_graphic_heading_pane_cp2_ParamLimits

0xc676,	// (0x0001be95) list_single_graphic_heading_pane_cp2

0xc676,	// (0x0001be95) list_single_graphic_pane_cp2_ParamLimits

0xc676,	// (0x0001be95) list_single_graphic_pane_cp2

0xc676,	// (0x0001be95) list_single_heading_pane_cp2_ParamLimits

0xc676,	// (0x0001be95) list_single_heading_pane_cp2

0x3335,	// (0x00012b54) list_single_large_graphic_pane_cp2_ParamLimits

0x3335,	// (0x00012b54) list_single_large_graphic_pane_cp2

0xc676,	// (0x0001be95) list_single_number_heading_pane_cp2_ParamLimits

0xc676,	// (0x0001be95) list_single_number_heading_pane_cp2

0xc676,	// (0x0001be95) list_single_number_pane_cp2_ParamLimits

0xc676,	// (0x0001be95) list_single_number_pane_cp2

0xc676,	// (0x0001be95) list_single_pane_cp2_ParamLimits

0xc676,	// (0x0001be95) list_single_pane_cp2

0x338a,	// (0x00012ba9) bg_popup_sub_pane_cp22

0x063f,	// (0x0000fe5e) popup_side_volume_key_window_g1

0x0669,	// (0x0000fe88) popup_side_volume_key_window_t1

0x0687,	// (0x0000fea6) volume_small_pane_cp1

0x1f48,	// (0x00011767) bg_popup_sub_pane_cp24_ParamLimits

0x1f48,	// (0x00011767) bg_popup_sub_pane_cp24

0x33a0,	// (0x00012bbf) fep_china_uni_candidate_pane_ParamLimits

0x33a0,	// (0x00012bbf) fep_china_uni_candidate_pane

0x33b4,	// (0x00012bd3) fep_china_uni_entry_pane

0x33c4,	// (0x00012be3) popup_fep_china_uni_window_g1

0x33e0,	// (0x00012bff) fep_china_uni_entry_pane_g1

0x33ea,	// (0x00012c09) fep_china_uni_entry_pane_g2

0x0001,

0xf75d,	// (0x0001ef7c) fep_china_uni_entry_pane_g

0x33f4,	// (0x00012c13) fep_entry_item_pane

0x33fe,	// (0x00012c1d) fep_candidate_item_pane

0x3406,	// (0x00012c25) fep_china_uni_candidate_pane_g1

0x3410,	// (0x00012c2f) fep_china_uni_candidate_pane_g2

0x3418,	// (0x00012c37) fep_china_uni_candidate_pane_g3

0x3420,	// (0x00012c3f) fep_china_uni_candidate_pane_g4

0x0003,

0xf762,	// (0x0001ef81) fep_china_uni_candidate_pane_g

0x1bc8,	// (0x000113e7) fep_entry_item_pane_g1

0x342a,	// (0x00012c49) fep_entry_item_pane_t1_ParamLimits

0x342a,	// (0x00012c49) fep_entry_item_pane_t1

0x3440,	// (0x00012c5f) fep_candidate_item_pane_t1_ParamLimits

0x3440,	// (0x00012c5f) fep_candidate_item_pane_t1

0x3455,	// (0x00012c74) fep_candidate_item_pane_t2_ParamLimits

0x3455,	// (0x00012c74) fep_candidate_item_pane_t2

0x0001,

0xf76b,	// (0x0001ef8a) fep_candidate_item_pane_t_ParamLimits

0xf76b,	// (0x0001ef8a) fep_candidate_item_pane_t

0x1cb2,	// (0x000114d1) list_highlight_pane_cp31_ParamLimits

0x1cb2,	// (0x000114d1) list_highlight_pane_cp31

0x3467,	// (0x00012c86) level_1_signal_lsc

0x3470,	// (0x00012c8f) level_2_signal_lsc

0x3479,	// (0x00012c98) level_3_signal_lsc

0x3482,	// (0x00012ca1) level_4_signal_lsc

0x348b,	// (0x00012caa) level_5_signal_lsc

0x3494,	// (0x00012cb3) level_6_signal_lsc

0x349d,	// (0x00012cbc) level_7_signal_lsc

0x349d,	// (0x00012cbc) level_1_battery_lsc

0x34a6,	// (0x00012cc5) level_2_battery_lsc

0x34af,	// (0x00012cce) level_3_battery_lsc

0x34b8,	// (0x00012cd7) level_4_battery_lsc

0x34c1,	// (0x00012ce0) level_5_battery_lsc

0x34ca,	// (0x00012ce9) level_6_battery_lsc

0x3467,	// (0x00012c86) level_7_battery_lsc

0x34d3,	// (0x00012cf2) scroll_handle_focus_pane_g1

0x34dc,	// (0x00012cfb) scroll_handle_focus_pane_g2

0x34e5,	// (0x00012d04) scroll_handle_focus_pane_g3

0x0002,

0xf770,	// (0x0001ef8f) scroll_handle_focus_pane_g

0xc6d9,	// (0x0001bef8) list_single_2graphic_pane_g1_ParamLimits

0xc6d9,	// (0x0001bef8) list_single_2graphic_pane_g1

0xbf4c,	// (0x0001b76b) list_single_2graphic_pane_g2_ParamLimits

0xbf4c,	// (0x0001b76b) list_single_2graphic_pane_g2

0x47bc,	// (0x00013fdb) list_single_2graphic_pane_g3_ParamLimits

0x47bc,	// (0x00013fdb) list_single_2graphic_pane_g3

0xc6e5,	// (0x0001bf04) list_single_2graphic_pane_g4_ParamLimits

0xc6e5,	// (0x0001bf04) list_single_2graphic_pane_g4

0x0003,

0xf777,	// (0x0001ef96) list_single_2graphic_pane_g_ParamLimits

0xf777,	// (0x0001ef96) list_single_2graphic_pane_g

0xc6f6,	// (0x0001bf15) list_single_2graphic_pane_t1_ParamLimits

0xc6f6,	// (0x0001bf15) list_single_2graphic_pane_t1

0xc724,	// (0x0001bf43) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xc724,	// (0x0001bf43) list_double2_graphic_large_graphic_pane_g1

0xbfb7,	// (0x0001b7d6) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xbfb7,	// (0x0001b7d6) list_double2_graphic_large_graphic_pane_g2

0xbfc8,	// (0x0001b7e7) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xbfc8,	// (0x0001b7e7) list_double2_graphic_large_graphic_pane_g3

0xc609,	// (0x0001be28) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xc609,	// (0x0001be28) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf780,	// (0x0001ef9f) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf780,	// (0x0001ef9f) list_double2_graphic_large_graphic_pane_g

0xc736,	// (0x0001bf55) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xc736,	// (0x0001bf55) list_double2_graphic_large_graphic_pane_t1

0xc74c,	// (0x0001bf6b) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xc74c,	// (0x0001bf6b) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf789,	// (0x0001efa8) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf789,	// (0x0001efa8) list_double2_graphic_large_graphic_pane_t

0x36b3,	// (0x00012ed2) popup_fast_swap_window_ParamLimits

0x36b3,	// (0x00012ed2) popup_fast_swap_window

0x36d1,	// (0x00012ef0) popup_side_volume_key_window

0x36ef,	// (0x00012f0e) stacon_top_pane

0x36f9,	// (0x00012f18) status_pane_ParamLimits

0x36f9,	// (0x00012f18) status_pane

0x36ef,	// (0x00012f0e) status_small_pane

0x1bd2,	// (0x000113f1) control_pane

0x1bd2,	// (0x000113f1) stacon_bottom_pane

0x29ef,	// (0x0001220e) scroll_pane_cp121

0x29e6,	// (0x00012205) set_content_pane

0xc75e,	// (0x0001bf7d) bg_active_tab_pane_g1_cp1

0x3583,	// (0x00012da2) bg_active_tab_pane_g2_cp1

0xc767,	// (0x0001bf86) bg_active_tab_pane_g3_cp1

0xc75e,	// (0x0001bf7d) bg_passive_tab_pane_g1_cp1

0x3583,	// (0x00012da2) bg_passive_tab_pane_g2_cp1

0xc767,	// (0x0001bf86) bg_passive_tab_pane_g3_cp1

0xc770,	// (0x0001bf8f) bg_active_tab_pane_g1_cp2

0x3583,	// (0x00012da2) bg_active_tab_pane_g2_cp2

0xc779,	// (0x0001bf98) bg_active_tab_pane_g3_cp2

0xc770,	// (0x0001bf8f) bg_passive_tab_pane_g1_cp2

0x3583,	// (0x00012da2) bg_passive_tab_pane_g2_cp2

0xc779,	// (0x0001bf98) bg_passive_tab_pane_g3_cp2

0xc782,	// (0x0001bfa1) bg_active_tab_pane_g1_cp3

0x3583,	// (0x00012da2) bg_active_tab_pane_g2_cp3

0xc78b,	// (0x0001bfaa) bg_active_tab_pane_g3_cp3

0xc782,	// (0x0001bfa1) bg_passive_tab_pane_g1_cp3

0x3583,	// (0x00012da2) bg_passive_tab_pane_g2_cp3

0xc78b,	// (0x0001bfaa) bg_passive_tab_pane_g3_cp3

0xc794,	// (0x0001bfb3) bg_active_tab_pane_g1_cp4

0x3583,	// (0x00012da2) bg_active_tab_pane_g2_cp4

0xc79d,	// (0x0001bfbc) bg_active_tab_pane_g3_cp4

0xc794,	// (0x0001bfb3) bg_passive_tab_pane_g1_cp4

0x3583,	// (0x00012da2) bg_passive_tab_pane_g2_cp4

0xc79d,	// (0x0001bfbc) bg_passive_tab_pane_g3_cp4

0x360d,	// (0x00012e2c) bg_active_tab_pane_g1_cp5

0x3583,	// (0x00012da2) bg_active_tab_pane_g2_cp5

0x3616,	// (0x00012e35) bg_active_tab_pane_g3_cp5

0x360d,	// (0x00012e2c) bg_passive_tab_pane_g1_cp5

0x3583,	// (0x00012da2) bg_passive_tab_pane_g2_cp5

0x3616,	// (0x00012e35) bg_passive_tab_pane_g3_cp5

0x2dda,	// (0x000125f9) list_set_graphic_pane_ParamLimits

0x2dda,	// (0x000125f9) list_set_graphic_pane

0x1bd2,	// (0x000113f1) bg_set_opt_pane_cp4

0xc7a6,	// (0x0001bfc5) list_set_graphic_pane_g1_ParamLimits

0xc7a6,	// (0x0001bfc5) list_set_graphic_pane_g1

0xc7b2,	// (0x0001bfd1) list_set_graphic_pane_g2_ParamLimits

0xc7b2,	// (0x0001bfd1) list_set_graphic_pane_g2

0x0001,

0xf78e,	// (0x0001efad) list_set_graphic_pane_g_ParamLimits

0xf78e,	// (0x0001efad) list_set_graphic_pane_g

0x0009,

0xfaf9,	// (0x0001f318) volume_small_pane_cp_g

0x3664,	// (0x00012e83) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x3664,	// (0x00012e83) list_double2_large_graphic_pane_g1_cp2

0x3672,	// (0x00012e91) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x3672,	// (0x00012e91) list_double2_large_graphic_pane_g2_cp2

0x3683,	// (0x00012ea2) list_double2_large_graphic_pane_g3_cp2

0x368b,	// (0x00012eaa) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x368b,	// (0x00012eaa) list_double2_large_graphic_pane_t1_cp2

0x36a1,	// (0x00012ec0) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x36a1,	// (0x00012ec0) list_double2_large_graphic_pane_t2_cp2

0x5988,	// (0x000151a7) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x5988,	// (0x000151a7) list_double_large_graphic_pane_g1_cp2

0x599b,	// (0x000151ba) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x599b,	// (0x000151ba) list_double_large_graphic_pane_g2_cp2

0x3817,	// (0x00013036) list_double_large_graphic_pane_g3_cp2

0x59ac,	// (0x000151cb) list_double_large_graphic_pane_g4_cp

0x59b4,	// (0x000151d3) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x59b4,	// (0x000151d3) list_double_large_graphic_pane_t1_cp2

0x59cb,	// (0x000151ea) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x59cb,	// (0x000151ea) list_double_large_graphic_pane_t2_cp2

0x3707,	// (0x00012f26) list_double2_graphic_pane_g1_cp2_ParamLimits

0x3707,	// (0x00012f26) list_double2_graphic_pane_g1_cp2

0x3715,	// (0x00012f34) list_double2_graphic_pane_g2_cp2_ParamLimits

0x3715,	// (0x00012f34) list_double2_graphic_pane_g2_cp2

0x3726,	// (0x00012f45) list_double2_graphic_pane_g3_cp2

0x3730,	// (0x00012f4f) list_double2_graphic_pane_t1_cp2_ParamLimits

0x3730,	// (0x00012f4f) list_double2_graphic_pane_t1_cp2

0x3746,	// (0x00012f65) list_double2_graphic_pane_t2_cp2_ParamLimits

0x3746,	// (0x00012f65) list_double2_graphic_pane_t2_cp2

0x3758,	// (0x00012f77) list_single_number_heading_pane_g1_cp2_ParamLimits

0x3758,	// (0x00012f77) list_single_number_heading_pane_g1_cp2

0x3764,	// (0x00012f83) list_single_number_heading_pane_g2_cp2

0x376c,	// (0x00012f8b) list_single_number_heading_pane_t1_cp2_ParamLimits

0x376c,	// (0x00012f8b) list_single_number_heading_pane_t1_cp2

0x3782,	// (0x00012fa1) list_single_number_heading_pane_t2_cp2_ParamLimits

0x3782,	// (0x00012fa1) list_single_number_heading_pane_t2_cp2

0x3796,	// (0x00012fb5) list_single_number_heading_pane_t3_cp2_ParamLimits

0x3796,	// (0x00012fb5) list_single_number_heading_pane_t3_cp2

0x3758,	// (0x00012f77) list_single_heading_pane_g1_cp2_ParamLimits

0x3758,	// (0x00012f77) list_single_heading_pane_g1_cp2

0x3764,	// (0x00012f83) list_single_heading_pane_g2_cp2

0x376c,	// (0x00012f8b) list_single_heading_pane_t1_cp2_ParamLimits

0x376c,	// (0x00012f8b) list_single_heading_pane_t1_cp2

0x5782,	// (0x00014fa1) list_single_heading_pane_t2_cp2_ParamLimits

0x5782,	// (0x00014fa1) list_single_heading_pane_t2_cp2

0x56c4,	// (0x00014ee3) list_double_graphic_pane_g1_cp2_ParamLimits

0x56c4,	// (0x00014ee3) list_double_graphic_pane_g1_cp2

0x56d0,	// (0x00014eef) list_double_graphic_pane_g2_cp2_ParamLimits

0x56d0,	// (0x00014eef) list_double_graphic_pane_g2_cp2

0x56df,	// (0x00014efe) list_double_graphic_pane_g3_cp2

0x56e7,	// (0x00014f06) list_double_graphic_pane_t1_cp2_ParamLimits

0x56e7,	// (0x00014f06) list_double_graphic_pane_t1_cp2

0x56fd,	// (0x00014f1c) list_double_graphic_pane_t2_cp2_ParamLimits

0x56fd,	// (0x00014f1c) list_double_graphic_pane_t2_cp2

0x380b,	// (0x0001302a) list_double_number_pane_g1_cp2_ParamLimits

0x380b,	// (0x0001302a) list_double_number_pane_g1_cp2

0x3817,	// (0x00013036) list_double_number_pane_g2_cp2

0x5688,	// (0x00014ea7) list_double_number_pane_t1_cp2_ParamLimits

0x5688,	// (0x00014ea7) list_double_number_pane_t1_cp2

0x569c,	// (0x00014ebb) list_double_number_pane_t2_cp2_ParamLimits

0x569c,	// (0x00014ebb) list_double_number_pane_t2_cp2

0x56b2,	// (0x00014ed1) list_double_number_pane_t3_cp2_ParamLimits

0x56b2,	// (0x00014ed1) list_double_number_pane_t3_cp2

0x5571,	// (0x00014d90) list_single_graphic_pane_g1_cp2_ParamLimits

0x5571,	// (0x00014d90) list_single_graphic_pane_g1_cp2

0x3871,	// (0x00013090) list_single_graphic_pane_g2_cp2_ParamLimits

0x3871,	// (0x00013090) list_single_graphic_pane_g2_cp2

0x387d,	// (0x0001309c) list_single_graphic_pane_g3_cp2

0x5547,	// (0x00014d66) list_single_graphic_pane_t1_cp2_ParamLimits

0x5547,	// (0x00014d66) list_single_graphic_pane_t1_cp2

0x3871,	// (0x00013090) list_single_number_pane_g1_cp2_ParamLimits

0x3871,	// (0x00013090) list_single_number_pane_g1_cp2

0x387d,	// (0x0001309c) list_single_number_pane_g2_cp2

0x5547,	// (0x00014d66) list_single_number_pane_t1_cp2_ParamLimits

0x5547,	// (0x00014d66) list_single_number_pane_t1_cp2

0x555d,	// (0x00014d7c) list_single_number_pane_t2_cp2_ParamLimits

0x555d,	// (0x00014d7c) list_single_number_pane_t2_cp2

0x3672,	// (0x00012e91) list_double2_pane_g1_cp2_ParamLimits

0x3672,	// (0x00012e91) list_double2_pane_g1_cp2

0x3683,	// (0x00012ea2) list_double2_pane_g2_cp2

0x37e3,	// (0x00013002) list_double2_pane_t1_cp2_ParamLimits

0x37e3,	// (0x00013002) list_double2_pane_t1_cp2

0x37f9,	// (0x00013018) list_double2_pane_t2_cp2_ParamLimits

0x37f9,	// (0x00013018) list_double2_pane_t2_cp2

0x380b,	// (0x0001302a) list_double_pane_g1_cp2_ParamLimits

0x380b,	// (0x0001302a) list_double_pane_g1_cp2

0x3817,	// (0x00013036) list_double_pane_g2_cp2

0x381f,	// (0x0001303e) list_double_pane_t1_cp2_ParamLimits

0x381f,	// (0x0001303e) list_double_pane_t1_cp2

0x3835,	// (0x00013054) list_double_pane_t2_cp2_ParamLimits

0x3835,	// (0x00013054) list_double_pane_t2_cp2

0x3861,	// (0x00013080) list_single_pane_cp2_g3

0x3871,	// (0x00013090) list_single_pane_g1_cp2_ParamLimits

0x3871,	// (0x00013090) list_single_pane_g1_cp2

0x387d,	// (0x0001309c) list_single_pane_g2_cp2

0x3885,	// (0x000130a4) list_single_pane_t1_cp2_ParamLimits

0x3885,	// (0x000130a4) list_single_pane_t1_cp2

0x389d,	// (0x000130bc) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x389d,	// (0x000130bc) list_single_large_graphic_pane_g1_cp2

0x38ab,	// (0x000130ca) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x38ab,	// (0x000130ca) list_single_large_graphic_pane_g2_cp2

0x38b7,	// (0x000130d6) list_single_large_graphic_pane_g3_cp2

0x38bf,	// (0x000130de) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x38bf,	// (0x000130de) list_single_large_graphic_pane_g4_cp1

0x38d9,	// (0x000130f8) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x38d9,	// (0x000130f8) list_single_large_graphic_pane_t1_cp2

0x5511,	// (0x00014d30) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x5511,	// (0x00014d30) list_single_graphic_heading_pane_g1_cp2

0x54de,	// (0x00014cfd) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x54de,	// (0x00014cfd) list_single_graphic_heading_pane_g4_cp2

0x387d,	// (0x0001309c) list_single_graphic_heading_pane_g5_cp2

0x551d,	// (0x00014d3c) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x551d,	// (0x00014d3c) list_single_graphic_heading_pane_t1_cp2

0x5533,	// (0x00014d52) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x5533,	// (0x00014d52) list_single_graphic_heading_pane_t2_cp2

0x54d2,	// (0x00014cf1) list_single_2graphic_pane_g1_cp2_ParamLimits

0x54d2,	// (0x00014cf1) list_single_2graphic_pane_g1_cp2

0x54de,	// (0x00014cfd) list_single_2graphic_pane_g2_cp2_ParamLimits

0x54de,	// (0x00014cfd) list_single_2graphic_pane_g2_cp2

0x387d,	// (0x0001309c) list_single_2graphic_pane_g3_cp2

0x54ef,	// (0x00014d0e) list_single_2graphic_pane_g4_cp2_ParamLimits

0x54ef,	// (0x00014d0e) list_single_2graphic_pane_g4_cp2

0x54fb,	// (0x00014d1a) list_single_2graphic_pane_t1_cp2_ParamLimits

0x54fb,	// (0x00014d1a) list_single_2graphic_pane_t1_cp2

0x1bc8,	// (0x000113e7) list_highlight_pane_g10_cp1

0x50aa,	// (0x000148c9) list_highlight_pane_g1_cp1

0x50b2,	// (0x000148d1) list_highlight_pane_g2_cp1

0x50ba,	// (0x000148d9) list_highlight_pane_g3_cp1

0x50c2,	// (0x000148e1) list_highlight_pane_g4_cp1

0x50ca,	// (0x000148e9) list_highlight_pane_g5_cp1

0x50d2,	// (0x000148f1) list_highlight_pane_g6_cp1

0x50da,	// (0x000148f9) list_highlight_pane_g7_cp1

0x50e2,	// (0x00014901) list_highlight_pane_g8_cp1

0x50ea,	// (0x00014909) list_highlight_pane_g9_cp1

0xd4e1,	// (0x0001cd00) form_field_slider_pane_t3

0xd4ef,	// (0x0001cd0e) form_field_slider_pane_t4

0x4fe6,	// (0x00014805) slider_form_pane_ParamLimits

0x4fe6,	// (0x00014805) slider_form_pane

0x1bd2,	// (0x000113f1) control_abbreviations

0x1bd2,	// (0x000113f1) control_conventions

0x1bd2,	// (0x000113f1) control_definitions

0x1bd2,	// (0x000113f1) format_table_attribute

0x57d8,	// (0x00014ff7) bg_popup_preview_window_pane_g9

0x1bd2,	// (0x000113f1) format_table_data2

0x1bd2,	// (0x000113f1) format_table_data3

0x1bd2,	// (0x000113f1) format_table_data_example

0x0008,

0x1bd2,	// (0x000113f1) intro_purpose

0xf91e,	// (0x0001f13d) bg_popup_preview_window_pane_g

0x1bd2,	// (0x000113f1) texts_category

0x1bd2,	// (0x000113f1) texts_graphics

0x38ef,	// (0x0001310e) text_digital

0x38fe,	// (0x0001311d) text_primary

0x390d,	// (0x0001312c) text_primary_small

0x391c,	// (0x0001313b) text_secondary

0x392b,	// (0x0001314a) text_title

0x5ffd,	// (0x0001581c) bg_passive_tab_pane_g1_cp3_srt

0x3583,	// (0x00012da2) bg_passive_tab_pane_g2_cp3_srt

0x6006,	// (0x00015825) bg_passive_tab_pane_g3_cp3_srt

0x1f48,	// (0x00011767) bg_active_tab_pane_cp3_srt_ParamLimits

0x1f48,	// (0x00011767) bg_active_tab_pane_cp3_srt

0x600f,	// (0x0001582e) tabs_4_active_pane_srt_g1

0xd948,	// (0x0001d167) tabs_4_active_pane_srt_t1_ParamLimits

0xd948,	// (0x0001d167) tabs_4_active_pane_srt_t1

0x5ffd,	// (0x0001581c) bg_active_tab_pane_g1_cp3_copy1

0x3583,	// (0x00012da2) bg_active_tab_pane_g2_cp3_copy1

0x6006,	// (0x00015825) bg_active_tab_pane_g3_cp3_copy1

0x1cb2,	// (0x000114d1) tabs_2_long_active_pane_srt_ParamLimits

0x1cb2,	// (0x000114d1) tabs_2_long_active_pane_srt

0x1cb2,	// (0x000114d1) tabs_2_long_passive_pane_srt_ParamLimits

0x1cb2,	// (0x000114d1) tabs_2_long_passive_pane_srt

0x3cc8,	// (0x000134e7) bg_passive_tab_pane_cp4_srt_ParamLimits

0x3cc8,	// (0x000134e7) bg_passive_tab_pane_cp4_srt

0x5c50,	// (0x0001546f) bg_passive_tab_pane_g1_cp4_srt

0x3583,	// (0x00012da2) bg_passive_tab_pane_g2_cp4_srt

0x5c59,	// (0x00015478) bg_passive_tab_pane_g3_cp4_srt

0x1cb2,	// (0x000114d1) bg_active_tab_pane_cp4_srt_ParamLimits

0x1cb2,	// (0x000114d1) bg_active_tab_pane_cp4_srt

0xd6fc,	// (0x0001cf1b) tabs_2_long_active_pane_srt_t1_ParamLimits

0xd6fc,	// (0x0001cf1b) tabs_2_long_active_pane_srt_t1

0x5c50,	// (0x0001546f) bg_active_tab_pane_g1_cp4_srt

0x3583,	// (0x00012da2) bg_active_tab_pane_g2_cp4_srt

0x5c59,	// (0x00015478) bg_active_tab_pane_g3_cp4_srt

0x1f48,	// (0x00011767) tabs_3_long_active_pane_srt_ParamLimits

0x1f48,	// (0x00011767) tabs_3_long_active_pane_srt

0x1f48,	// (0x00011767) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x1f48,	// (0x00011767) tabs_3_long_passive_pane_cp_srt

0x1f48,	// (0x00011767) tabs_3_long_passive_pane_srt_ParamLimits

0x1f48,	// (0x00011767) tabs_3_long_passive_pane_srt

0x3cc8,	// (0x000134e7) bg_passive_tab_pane_cp5_srt_ParamLimits

0x3cc8,	// (0x000134e7) bg_passive_tab_pane_cp5_srt

0x360d,	// (0x00012e2c) bg_passive_tab_pane_g1_cp5_srt

0x3583,	// (0x00012da2) bg_passive_tab_pane_g2_cp5_srt

0x3616,	// (0x00012e35) bg_passive_tab_pane_g3_cp5_srt

0x1cb2,	// (0x000114d1) bg_active_tab_pane_cp5_srt_ParamLimits

0x1cb2,	// (0x000114d1) bg_active_tab_pane_cp5_srt

0xd6e6,	// (0x0001cf05) tabs_3_long_active_pane_srt_t1_ParamLimits

0xd6e6,	// (0x0001cf05) tabs_3_long_active_pane_srt_t1

0x360d,	// (0x00012e2c) bg_active_tab_pane_g1_cp5_srt

0x3583,	// (0x00012da2) bg_active_tab_pane_g2_cp5_srt

0x3616,	// (0x00012e35) bg_active_tab_pane_g3_cp5_srt

0x5c30,	// (0x0001544f) navi_text_pane_srt_t1

0x5c28,	// (0x00015447) navi_icon_pane_srt_g1

0x3b02,	// (0x00013321) midp_editing_number_pane_srt

0x393a,	// (0x00013159) midp_ticker_pane_srt

0x3b0a,	// (0x00013329) midp_ticker_pane_srt_g1

0x3b12,	// (0x00013331) midp_ticker_pane_srt_g2

0x0001,

0xf7ad,	// (0x0001efcc) midp_ticker_pane_srt_g

0x3b1a,	// (0x00013339) midp_ticker_pane_srt_t1

0x5c19,	// (0x00015438) midp_editing_number_pane_t1_copy1

0xc7d6,	// (0x0001bff5) listscroll_midp_pane

0xc7d6,	// (0x0001bff5) midp_form_pane

0x39b0,	// (0x000131cf) midp_info_popup_window_ParamLimits

0x39b0,	// (0x000131cf) midp_info_popup_window

0x2d08,	// (0x00012527) bg_popup_sub_pane_cp50_ParamLimits

0x2d08,	// (0x00012527) bg_popup_sub_pane_cp50

0x4d11,	// (0x00014530) listscroll_midp_info_pane_ParamLimits

0x4d11,	// (0x00014530) listscroll_midp_info_pane

0x4cf9,	// (0x00014518) listscroll_form_midp_pane_ParamLimits

0x4cf9,	// (0x00014518) listscroll_form_midp_pane

0x4d05,	// (0x00014524) scroll_bar_cp050

0xd4d5,	// (0x0001ccf4) list_midp_pane

0x6c54,	// (0x00016473) signal_pane_g2_cp

0x4c13,	// (0x00014432) listscroll_midp_info_pane_t1_ParamLimits

0x4c13,	// (0x00014432) listscroll_midp_info_pane_t1

0x4c2b,	// (0x0001444a) listscroll_midp_info_pane_t2_ParamLimits

0x4c2b,	// (0x0001444a) listscroll_midp_info_pane_t2

0x4c69,	// (0x00014488) listscroll_midp_info_pane_t3_ParamLimits

0x4c69,	// (0x00014488) listscroll_midp_info_pane_t3

0x4ca3,	// (0x000144c2) listscroll_midp_info_pane_t4_ParamLimits

0x4ca3,	// (0x000144c2) listscroll_midp_info_pane_t4

0x0003,

0xf859,	// (0x0001f078) listscroll_midp_info_pane_t_ParamLimits

0xf859,	// (0x0001f078) listscroll_midp_info_pane_t

0x2dd2,	// (0x000125f1) scroll_pane_cp21

0x4bad,	// (0x000143cc) form_midp_field_choice_group_pane

0x4bb6,	// (0x000143d5) form_midp_field_text_pane

0x4bf9,	// (0x00014418) form_midp_field_time_pane

0x4c01,	// (0x00014420) form_midp_gauge_slider_pane

0x4c0a,	// (0x00014429) form_midp_gauge_wait_pane

0x1bd2,	// (0x000113f1) form_midp_image_pane

0xd4b8,	// (0x0001ccd7) list_single_midp_pane_ParamLimits

0xd4b8,	// (0x0001ccd7) list_single_midp_pane

0xd490,	// (0x0001ccaf) form_midp_field_text_pane_t1

0x4956,	// (0x00014175) input_focus_pane_cp050

0x4b7c,	// (0x0001439b) list_midp_form_text_pane

0x4b20,	// (0x0001433f) form_midp_field_choice_group_pane_t1

0x4b2e,	// (0x0001434d) input_focus_pane_cp051

0x4b42,	// (0x00014361) list_midp_choice_pane

0x1bd2,	// (0x000113f1) status_idle_pane

0x4b04,	// (0x00014323) form_midp_field_time_pane_t1

0x1bc8,	// (0x000113e7) wait_anim_pane_g2_copy1

0x4b12,	// (0x00014331) form_midp_field_time_pane_t2

0x0001,

0x3a60,	// (0x0001327f) aid_navinavi_width_2_pane

0xf854,	// (0x0001f073) form_midp_field_time_pane_t

0x1bd2,	// (0x000113f1) input_focus_pane_cp052

0x1bd2,	// (0x000113f1) bg_input_focus_pane_cp040

0x4ac4,	// (0x000142e3) form_midp_gauge_slider_pane_t1

0x4ad2,	// (0x000142f1) form_midp_gauge_slider_pane_t2

0xd474,	// (0x0001cc93) form_midp_gauge_slider_pane_t3

0xd482,	// (0x0001cca1) form_midp_gauge_slider_pane_t4

0x0003,

0xf84b,	// (0x0001f06a) form_midp_gauge_slider_pane_t

0x4afc,	// (0x0001431b) form_midp_slider_pane

0x1cb2,	// (0x000114d1) bg_input_focus_pane_cp041_ParamLimits

0x1cb2,	// (0x000114d1) bg_input_focus_pane_cp041

0x4a91,	// (0x000142b0) form_midp_gauge_wait_pane_t1_ParamLimits

0x4a91,	// (0x000142b0) form_midp_gauge_wait_pane_t1

0x4aa3,	// (0x000142c2) form_midp_gauge_wait_pane_t2_ParamLimits

0x4aa3,	// (0x000142c2) form_midp_gauge_wait_pane_t2

0x0001,

0xf846,	// (0x0001f065) form_midp_gauge_wait_pane_t_ParamLimits

0xf846,	// (0x0001f065) form_midp_gauge_wait_pane_t

0x4ab5,	// (0x000142d4) form_midp_wait_pane_ParamLimits

0x4ab5,	// (0x000142d4) form_midp_wait_pane

0x4a59,	// (0x00014278) form_midp_image_pane_g1

0x4a62,	// (0x00014281) form_midp_image_pane_t1

0x4a71,	// (0x00014290) form_midp_image_pane_t2

0x4a80,	// (0x0001429f) form_midp_image_pane_t3

0x0002,

0xf83f,	// (0x0001f05e) form_midp_image_pane_t

0x4a41,	// (0x00014260) list_single_midp_pane_g1

0x4a4a,	// (0x00014269) list_single_midp_pane_t1

0xd45d,	// (0x0001cc7c) list_midp_form_item_pane_ParamLimits

0xd45d,	// (0x0001cc7c) list_midp_form_item_pane

0x3a08,	// (0x00013227) list_midp_form_item_pane_t1

0x3a17,	// (0x00013236) midp_ticker_pane_g1

0x3a23,	// (0x00013242) midp_ticker_pane_g2

0x0001,

0xf793,	// (0x0001efb2) midp_ticker_pane_g

0xc87e,	// (0x0001c09d) midp_ticker_pane_t1

0xd8a7,	// (0x0001d0c6) midp_editing_number_pane_t1

0x5eab,	// (0x000156ca) midp_editing_number_pane

0x5eba,	// (0x000156d9) midp_ticker_pane

0x5be1,	// (0x00015400) ai_message_heading_pane

0x1bd2,	// (0x000113f1) bg_popup_window_pane_cp14

0x5be9,	// (0x00015408) listscroll_ai_message_pane

0x5b67,	// (0x00015386) ai_message_heading_pane_g1_ParamLimits

0x5b67,	// (0x00015386) ai_message_heading_pane_g1

0x5b73,	// (0x00015392) ai_message_heading_pane_g2_ParamLimits

0x5b73,	// (0x00015392) ai_message_heading_pane_g2

0x5b81,	// (0x000153a0) ai_message_heading_pane_g3_ParamLimits

0x5b81,	// (0x000153a0) ai_message_heading_pane_g3

0x5b8d,	// (0x000153ac) ai_message_heading_pane_g4_ParamLimits

0x5b8d,	// (0x000153ac) ai_message_heading_pane_g4

0x0003,

0xf980,	// (0x0001f19f) ai_message_heading_pane_g_ParamLimits

0xf980,	// (0x0001f19f) ai_message_heading_pane_g

0x5b99,	// (0x000153b8) ai_message_heading_pane_t1_ParamLimits

0x5b99,	// (0x000153b8) ai_message_heading_pane_t1

0x5bb3,	// (0x000153d2) ai_message_heading_pane_t2_ParamLimits

0x5bb3,	// (0x000153d2) ai_message_heading_pane_t2

0x0001,

0xf989,	// (0x0001f1a8) ai_message_heading_pane_t_ParamLimits

0xf989,	// (0x0001f1a8) ai_message_heading_pane_t

0x5bc7,	// (0x000153e6) bg_popup_heading_pane_cp1_ParamLimits

0x5bc7,	// (0x000153e6) bg_popup_heading_pane_cp1

0x5b55,	// (0x00015374) list_ai_message_pane_ParamLimits

0x5b55,	// (0x00015374) list_ai_message_pane

0x2dd2,	// (0x000125f1) scroll_pane_cp10

0x5af1,	// (0x00015310) list_ai_message_pane_g1

0x5af9,	// (0x00015318) list_ai_message_pane_g2

0x0001,

0xf95d,	// (0x0001f17c) list_ai_message_pane_g

0x5b01,	// (0x00015320) list_ai_message_pane_t1_ParamLimits

0x5b01,	// (0x00015320) list_ai_message_pane_t1

0x5b16,	// (0x00015335) list_ai_message_pane_t2_ParamLimits

0x5b16,	// (0x00015335) list_ai_message_pane_t2

0x5b2b,	// (0x0001534a) list_ai_message_pane_t3_ParamLimits

0x5b2b,	// (0x0001534a) list_ai_message_pane_t3

0x5b40,	// (0x0001535f) list_ai_message_pane_t4_ParamLimits

0x5b40,	// (0x0001535f) list_ai_message_pane_t4

0x0003,

0xf962,	// (0x0001f181) list_ai_message_pane_t_ParamLimits

0xf962,	// (0x0001f181) list_ai_message_pane_t

0xd6ba,	// (0x0001ced9) cell_ai_soft_ind_pane_ParamLimits

0xd6ba,	// (0x0001ced9) cell_ai_soft_ind_pane

0x3a41,	// (0x00013260) cell_ai_soft_ind_pane_g1_ParamLimits

0x3a41,	// (0x00013260) cell_ai_soft_ind_pane_g1

0x1bd2,	// (0x000113f1) grid_highlight_cp1

0x3a4e,	// (0x0001326d) text_secondary_cp56_ParamLimits

0x3a4e,	// (0x0001326d) text_secondary_cp56

0x5aaf,	// (0x000152ce) example_general_pane_ParamLimits

0x5aaf,	// (0x000152ce) example_general_pane

0x5abb,	// (0x000152da) example_parent_pane_g1_ParamLimits

0x5abb,	// (0x000152da) example_parent_pane_g1

0x5ac7,	// (0x000152e6) example_parent_pane_t1_ParamLimits

0x5ac7,	// (0x000152e6) example_parent_pane_t1

0xccf0,	// (0x0001c50f) popup_preview_text_window_ParamLimits

0xccf0,	// (0x0001c50f) popup_preview_text_window

0x3869,	// (0x00013088) list_single_pane_cp2_g4

0x1ffe,	// (0x0001181d) bg_popup_preview_window_pane_ParamLimits

0x1ffe,	// (0x0001181d) bg_popup_preview_window_pane

0x57e2,	// (0x00015001) popup_preview_text_window_t1_ParamLimits

0x57e2,	// (0x00015001) popup_preview_text_window_t1

0x5800,	// (0x0001501f) popup_preview_text_window_t2_ParamLimits

0x5800,	// (0x0001501f) popup_preview_text_window_t2

0x5849,	// (0x00015068) popup_preview_text_window_t3_ParamLimits

0x5849,	// (0x00015068) popup_preview_text_window_t3

0x588e,	// (0x000150ad) popup_preview_text_window_t4_ParamLimits

0x588e,	// (0x000150ad) popup_preview_text_window_t4

0x0004,

0xf931,	// (0x0001f150) popup_preview_text_window_t_ParamLimits

0xf931,	// (0x0001f150) popup_preview_text_window_t

0x590c,	// (0x0001512b) scroll_pane_cp11

0x483a,	// (0x00014059) bg_popup_preview_window_pane_g1

0x5796,	// (0x00014fb5) bg_popup_preview_window_pane_g2

0x57a0,	// (0x00014fbf) bg_popup_preview_window_pane_g3

0x57aa,	// (0x00014fc9) bg_popup_preview_window_pane_g4

0x57b4,	// (0x00014fd3) bg_popup_preview_window_pane_g5

0x57be,	// (0x00014fdd) bg_popup_preview_window_pane_g6

0x57c6,	// (0x00014fe5) bg_popup_preview_window_pane_g7

0x57ce,	// (0x00014fed) bg_popup_preview_window_pane_g8

0xf57e,	// (0x0001ed9d) aid_popup_width_pane

0xcc60,	// (0x0001c47f) popup_midp_note_alarm_window_ParamLimits

0xcc60,	// (0x0001c47f) popup_midp_note_alarm_window

0x2abe,	// (0x000122dd) data_form_pane_ParamLimits

0xc353,	// (0x0001bb72) form_field_data_pane_g1

0xc35d,	// (0x0001bb7c) form_field_data_pane_t1_ParamLimits

0x2aee,	// (0x0001230d) input_focus_pane_ParamLimits

0x2afc,	// (0x0001231b) data_form_wide_pane_ParamLimits

0x2b08,	// (0x00012327) form_field_data_wide_pane_g1

0x2b34,	// (0x00012353) form_field_data_wide_pane_t1_ParamLimits

0x22c4,	// (0x00011ae3) input_focus_pane_cp6_ParamLimits

0xc4b7,	// (0x0001bcd6) input_popup_find_pane_g1_ParamLimits

0xc4b7,	// (0x0001bcd6) input_popup_find_pane_g1

0x04ec,	// (0x0000fd0b) aid_navi_side_left_pane

0x0501,	// (0x0000fd20) aid_navi_side_right_pane

0x51a5,	// (0x000149c4) bg_popup_window_pane_cp30_ParamLimits

0x51a5,	// (0x000149c4) bg_popup_window_pane_cp30

0x521f,	// (0x00014a3e) popup_midp_note_alarm_window_g1_ParamLimits

0x521f,	// (0x00014a3e) popup_midp_note_alarm_window_g1

0x524f,	// (0x00014a6e) popup_midp_note_alarm_window_t1_ParamLimits

0x524f,	// (0x00014a6e) popup_midp_note_alarm_window_t1

0x52f0,	// (0x00014b0f) popup_midp_note_alarm_window_t2_ParamLimits

0x52f0,	// (0x00014b0f) popup_midp_note_alarm_window_t2

0x539e,	// (0x00014bbd) popup_midp_note_alarm_window_t3_ParamLimits

0x539e,	// (0x00014bbd) popup_midp_note_alarm_window_t3

0x53d0,	// (0x00014bef) popup_midp_note_alarm_window_t4_ParamLimits

0x53d0,	// (0x00014bef) popup_midp_note_alarm_window_t4

0x53f6,	// (0x00014c15) popup_midp_note_alarm_window_t5_ParamLimits

0x53f6,	// (0x00014c15) popup_midp_note_alarm_window_t5

0x000a,

0xf8ce,	// (0x0001f0ed) popup_midp_note_alarm_window_t_ParamLimits

0xf8ce,	// (0x0001f0ed) popup_midp_note_alarm_window_t

0x54a2,	// (0x00014cc1) wait_bar_pane_cp1_ParamLimits

0x54a2,	// (0x00014cc1) wait_bar_pane_cp1

0x1bd2,	// (0x000113f1) wait_anim_pane_copy1

0x1bd2,	// (0x000113f1) wait_border_pane_copy1

0x4e8a,	// (0x000146a9) wait_border_pane_g1_copy1

0x2b4e,	// (0x0001236d) form_field_popup_pane_g1

0xc377,	// (0x0001bb96) form_field_popup_pane_t1_ParamLimits

0x2aee,	// (0x0001230d) input_focus_pane_cp7_ParamLimits

0x2b70,	// (0x0001238f) list_form_pane_ParamLimits

0x2b7c,	// (0x0001239b) form_field_popup_wide_pane_g1

0x2b84,	// (0x000123a3) form_field_popup_wide_pane_t1_ParamLimits

0x2aee,	// (0x0001230d) input_focus_pane_cp8_ParamLimits

0x2b99,	// (0x000123b8) list_form_wide_pane_ParamLimits

0x608a,	// (0x000158a9) aid_size_cell_graphic_pane

0xc3f6,	// (0x0001bc15) data_form_pane_t1_ParamLimits

0xd88b,	// (0x0001d0aa) data_form_wide_pane_t1_ParamLimits

0xd0ed,	// (0x0001c90c) bg_status_flat_pane

0xbb87,	// (0x0001b3a6) title_pane_t1_ParamLimits

0x1c7a,	// (0x00011499) title_pane_t2_ParamLimits

0x1ca0,	// (0x000114bf) title_pane_t3_ParamLimits

0xf59b,	// (0x0001edba) title_pane_t_ParamLimits

0xc5be,	// (0x0001bddd) level_1_signal_ParamLimits

0xc5d0,	// (0x0001bdef) level_2_signal_ParamLimits

0xc5e3,	// (0x0001be02) level_3_signal_ParamLimits

0xc5f6,	// (0x0001be15) level_4_signal_ParamLimits

0xc63d,	// (0x0001be5c) level_5_signal_ParamLimits

0xc650,	// (0x0001be6f) level_6_signal_ParamLimits

0xc663,	// (0x0001be82) level_7_signal_ParamLimits

0xc5be,	// (0x0001bddd) level_1_battery_ParamLimits

0xc5d0,	// (0x0001bdef) level_2_battery_ParamLimits

0xc5e3,	// (0x0001be02) level_3_battery_ParamLimits

0xc5f6,	// (0x0001be15) level_4_battery_ParamLimits

0xc63d,	// (0x0001be5c) level_5_battery_ParamLimits

0xc650,	// (0x0001be6f) level_6_battery_ParamLimits

0xc663,	// (0x0001be82) level_7_battery_ParamLimits

0x50aa,	// (0x000148c9) bg_status_flat_pane_g1

0x50b2,	// (0x000148d1) bg_status_flat_pane_g2

0x50ba,	// (0x000148d9) bg_status_flat_pane_g3

0x50c2,	// (0x000148e1) bg_status_flat_pane_g4

0x50ca,	// (0x000148e9) bg_status_flat_pane_g5

0x50d2,	// (0x000148f1) bg_status_flat_pane_g6

0x50da,	// (0x000148f9) bg_status_flat_pane_g7

0xbc1b,	// (0x0001b43a) tabs_3_active_pane_t1_ParamLimits

0xbc1b,	// (0x0001b43a) tabs_3_passive_pane_t1_ParamLimits

0xbc35,	// (0x0001b454) tabs_4_active_pane_t1_ParamLimits

0xbc35,	// (0x0001b454) tabs_4_1_passive_pane_t1_ParamLimits

0xc4cd,	// (0x0001bcec) tabs_2_active_pane_t1_ParamLimits

0xc4cd,	// (0x0001bcec) tabs_2_passive_pane_t1_ParamLimits

0x1cb2,	// (0x000114d1) bg_active_tab_pane_cp4_ParamLimits

0xc4df,	// (0x0001bcfe) tabs_2_long_active_pane_t1_ParamLimits

0x3cc8,	// (0x000134e7) bg_passive_tab_pane_cp4_ParamLimits

0x0ac6,	// (0x000102e5) list_single_midp_graphic_pane_t1_ParamLimits

0x1cb2,	// (0x000114d1) bg_active_tab_pane_cp5_ParamLimits

0xc4f2,	// (0x0001bd11) tabs_3_long_active_pane_t1_ParamLimits

0x3cc8,	// (0x000134e7) bg_passive_tab_pane_cp5_ParamLimits

0x0ac6,	// (0x000102e5) list_single_midp_graphic_pane_t1

0xd0ed,	// (0x0001c90c) bg_status_flat_pane_ParamLimits

0x4485,	// (0x00013ca4) indicator_pane_cp2_ParamLimits

0x4485,	// (0x00013ca4) indicator_pane_cp2

0xd282,	// (0x0001caa1) navi_pane_srt_ParamLimits

0xd282,	// (0x0001caa1) navi_pane_srt

0x45eb,	// (0x00013e0a) popup_clock_digital_analogue_window_cp1

0x1dac,	// (0x000115cb) indicator_pane_t1

0x393a,	// (0x00013159) copy_highlight_pane

0x393a,	// (0x00013159) cursor_graphics_pane

0x393a,	// (0x00013159) graphic_within_text_pane

0x393a,	// (0x00013159) link_highlight_pane

0x58cf,	// (0x000150ee) popup_preview_text_window_t5_ParamLimits

0x58cf,	// (0x000150ee) popup_preview_text_window_t5

0x3a6a,	// (0x00013289) cursor_digital_pane

0x3a6a,	// (0x00013289) cursor_primary_pane

0x3a7b,	// (0x0001329a) cursor_primary_small_pane

0x3a83,	// (0x000132a2) cursor_secondary_pane

0x3a8b,	// (0x000132aa) cursor_title_pane

0x3a6a,	// (0x00013289) link_highlight_digital_pane

0x3a72,	// (0x00013291) link_highlight_primary_pane

0x3a7b,	// (0x0001329a) link_highlight_primary_small_pane

0x3a83,	// (0x000132a2) link_highlight_secondary_pane

0x3a8b,	// (0x000132aa) link_highlight_title_pane

0x3a6a,	// (0x00013289) copy_highlight_digital_pane

0x3a6a,	// (0x00013289) copy_highlight_primary_pane

0x3a7b,	// (0x0001329a) copy_highlight_primary_small_pane

0x3a83,	// (0x000132a2) copy_highlight_secondary_pane

0x3a8b,	// (0x000132aa) copy_highlight_title_pane

0x3a83,	// (0x000132a2) graphic_text_digital_pane

0x5148,	// (0x00014967) graphic_text_primary_pane

0x5151,	// (0x00014970) graphic_text_primary_small_pane

0x3a7b,	// (0x0001329a) graphic_text_secondary_pane

0x3a6a,	// (0x00013289) graphic_text_title_pane

0xc890,	// (0x0001c0af) cursor_primary_pane_g1

0x513a,	// (0x00014959) cursor_text_primary_t1

0xd511,	// (0x0001cd30) cursor_primary_small_pane_g1

0x512c,	// (0x0001494b) cursor_text_primary_small_t1

0xd507,	// (0x0001cd26) cursor_primary_small_pane_g1_copy1

0x5114,	// (0x00014933) cursor_text_primary_small_t1_copy1

0x50f2,	// (0x00014911) cursor_text_title_t1

0xd4fd,	// (0x0001cd1c) cursor_title_pane_g1

0xc890,	// (0x0001c0af) cursor_digital_pane_g1

0x3a9d,	// (0x000132bc) cursor_text_digital_t1

0x3aab,	// (0x000132ca) link_highlight_primary_pane_g1

0x509b,	// (0x000148ba) link_highlight_primary_pane_t1

0x3aab,	// (0x000132ca) link_highlight_primary_small_pane_g1

0x3ab3,	// (0x000132d2) link_highlight_primary_small_pane_t1

0x3ac2,	// (0x000132e1) link_highlight_secondary_pane_g1

0x3aca,	// (0x000132e9) link_highlight_secondary_pane_t1

0x500f,	// (0x0001482e) link_highlight_title_pane_g1

0x5017,	// (0x00014836) link_highlight_title_pane_t1

0x4ff8,	// (0x00014817) link_highlight_digital_pane_g1

0x5000,	// (0x0001481f) link_highlight_digital_pane_t1

0x4ec0,	// (0x000146df) copy_highlight_primary_pane_g1

0x4ed7,	// (0x000146f6) copy_highlight_primary_pane_t1

0x4ec0,	// (0x000146df) copy_highlight_primary_small_pane_g1

0x4ec8,	// (0x000146e7) copy_highlight_primary_small_pane_t1

0x3ad9,	// (0x000132f8) copy_highlight_secondary_pane_g1

0x3ae1,	// (0x00013300) copy_highlight_secondary_pane_t1

0x4ea9,	// (0x000146c8) copy_highlight_title_pane_g1

0x4eb1,	// (0x000146d0) copy_highlight_title_pane_t1

0x4ec0,	// (0x000146df) copy_highlight_digital_pane_g1

0x625a,	// (0x00015a79) copy_highlight_digital_pane_t1

0x61ae,	// (0x000159cd) graphic_text_primary_pane_g1

0x623e,	// (0x00015a5d) graphic_text_primary_pane_t1

0x624c,	// (0x00015a6b) graphic_text_primary_pane_t2

0x0001,

0xf9fd,	// (0x0001f21c) graphic_text_primary_pane_t

0x621a,	// (0x00015a39) graphic_text_primary_small_pane_g1

0x6222,	// (0x00015a41) graphic_text_primary_small_pane_t1

0x6230,	// (0x00015a4f) graphic_text_primary_small_pane_t2

0x0001,

0xf9f8,	// (0x0001f217) graphic_text_primary_small_pane_t

0x61f6,	// (0x00015a15) graphic_text_secondary_pane_g1

0x61fe,	// (0x00015a1d) graphic_text_secondary_pane_t1

0x620c,	// (0x00015a2b) graphic_text_secondary_pane_t2

0x0001,

0xf9f3,	// (0x0001f212) graphic_text_secondary_pane_t

0x61d2,	// (0x000159f1) graphic_text_title_pane_g1

0x61da,	// (0x000159f9) graphic_text_title_pane_t1

0x61e8,	// (0x00015a07) graphic_text_title_pane_t2

0x0001,

0xf9ee,	// (0x0001f20d) graphic_text_title_pane_t

0x61ae,	// (0x000159cd) graphic_text_digital_pane_g1

0x61b6,	// (0x000159d5) graphic_text_digital_pane_t1

0x61c4,	// (0x000159e3) graphic_text_digital_pane_t2

0x0001,

0xf9e9,	// (0x0001f208) graphic_text_digital_pane_t

0x1cb2,	// (0x000114d1) navi_icon_pane_srt_ParamLimits

0x1cb2,	// (0x000114d1) navi_icon_pane_srt

0x1bd2,	// (0x000113f1) navi_midp_pane_srt

0x1bd2,	// (0x000113f1) navi_navi_pane_srt

0x1cb2,	// (0x000114d1) navi_text_pane_srt_ParamLimits

0x1cb2,	// (0x000114d1) navi_text_pane_srt

0x6179,	// (0x00015998) navi_navi_icon_text_pane_srt

0x6181,	// (0x000159a0) navi_navi_pane_srt_g1_ParamLimits

0x6181,	// (0x000159a0) navi_navi_pane_srt_g1

0x6193,	// (0x000159b2) navi_navi_pane_srt_g2_ParamLimits

0x6193,	// (0x000159b2) navi_navi_pane_srt_g2

0x0001,

0xf9e4,	// (0x0001f203) navi_navi_pane_srt_g_ParamLimits

0xf9e4,	// (0x0001f203) navi_navi_pane_srt_g

0x61a5,	// (0x000159c4) navi_navi_tabs_pane_srt

0x6179,	// (0x00015998) navi_navi_text_pane_srt

0x6179,	// (0x00015998) navi_navi_volume_pane_srt

0x616a,	// (0x00015989) navi_navi_text_pane_srt_t1

0x0e62,	// (0x00010681) navi_navi_volume_pane_srt_g1

0x0e6a,	// (0x00010689) volume_small_pane_srt_ParamLimits

0x0e6a,	// (0x00010689) volume_small_pane_srt

0x07d3,	// (0x0000fff2) volume_small_pane_srt_g1_ParamLimits

0x07d3,	// (0x0000fff2) volume_small_pane_srt_g1

0x07e3,	// (0x00010002) volume_small_pane_srt_g2_ParamLimits

0x07e3,	// (0x00010002) volume_small_pane_srt_g2

0x07f4,	// (0x00010013) volume_small_pane_srt_g3_ParamLimits

0x07f4,	// (0x00010013) volume_small_pane_srt_g3

0x0805,	// (0x00010024) volume_small_pane_srt_g4_ParamLimits

0x0805,	// (0x00010024) volume_small_pane_srt_g4

0x0816,	// (0x00010035) volume_small_pane_srt_g5_ParamLimits

0x0816,	// (0x00010035) volume_small_pane_srt_g5

0x0827,	// (0x00010046) volume_small_pane_srt_g6_ParamLimits

0x0827,	// (0x00010046) volume_small_pane_srt_g6

0x0838,	// (0x00010057) volume_small_pane_srt_g7_ParamLimits

0x0838,	// (0x00010057) volume_small_pane_srt_g7

0x0849,	// (0x00010068) volume_small_pane_srt_g8_ParamLimits

0x0849,	// (0x00010068) volume_small_pane_srt_g8

0x085a,	// (0x00010079) volume_small_pane_srt_g9_ParamLimits

0x085a,	// (0x00010079) volume_small_pane_srt_g9

0x086b,	// (0x0001008a) volume_small_pane_srt_g10_ParamLimits

0x086b,	// (0x0001008a) volume_small_pane_srt_g10

0x0009,

0xf798,	// (0x0001efb7) volume_small_pane_srt_g_ParamLimits

0xf798,	// (0x0001efb7) volume_small_pane_srt_g

0x20b3,	// (0x000118d2) query_popup_data_pane_cp2

0x6150,	// (0x0001596f) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6150,	// (0x0001596f) navi_navi_icon_text_pane_srt_t1

0x5148,	// (0x00014967) navi_tabs_2_long_pane_srt

0x5148,	// (0x00014967) navi_tabs_2_pane_srt

0x5148,	// (0x00014967) navi_tabs_3_long_pane_srt

0x5148,	// (0x00014967) navi_tabs_3_pane_srt

0x5148,	// (0x00014967) navi_tabs_4_pane_srt

0x0e42,	// (0x00010661) tabs_2_active_pane_srt_ParamLimits

0x0e42,	// (0x00010661) tabs_2_active_pane_srt

0x0e52,	// (0x00010671) tabs_2_passive_pane_srt_ParamLimits

0x0e52,	// (0x00010671) tabs_2_passive_pane_srt

0x4956,	// (0x00014175) bg_passive_tab_pane_cp1_srt_ParamLimits

0x4956,	// (0x00014175) bg_passive_tab_pane_cp1_srt

0x611c,	// (0x0001593b) bg_passive_tab_pane_g1_cp1_srt

0x3583,	// (0x00012da2) bg_passive_tab_pane_g2_cp1_srt

0x6125,	// (0x00015944) bg_passive_tab_pane_g3_cp1_srt

0x1f48,	// (0x00011767) bg_active_tab_pane_cp1_srt_ParamLimits

0x1f48,	// (0x00011767) bg_active_tab_pane_cp1_srt

0x612e,	// (0x0001594d) tabs_2_active_pane_srt_g1

0xd9c8,	// (0x0001d1e7) tabs_2_active_pane_srt_t1_ParamLimits

0xd9c8,	// (0x0001d1e7) tabs_2_active_pane_srt_t1

0x611c,	// (0x0001593b) bg_active_tab_pane_g1_cp1_srt

0x3583,	// (0x00012da2) bg_active_tab_pane_g2_cp1_srt

0x6125,	// (0x00015944) bg_active_tab_pane_g3_cp1_srt

0x0e0f,	// (0x0001062e) tabs_3_active_pane_srt_ParamLimits

0x0e0f,	// (0x0001062e) tabs_3_active_pane_srt

0x0e20,	// (0x0001063f) tabs_3_passive_pane_cp_srt_ParamLimits

0x0e20,	// (0x0001063f) tabs_3_passive_pane_cp_srt

0x0e31,	// (0x00010650) tabs_3_passive_pane_srt_ParamLimits

0x0e31,	// (0x00010650) tabs_3_passive_pane_srt

0x4956,	// (0x00014175) bg_passive_tab_pane_cp2_srt_ParamLimits

0x4956,	// (0x00014175) bg_passive_tab_pane_cp2_srt

0x3af0,	// (0x0001330f) bg_passive_tab_pane_g1_cp2_srt

0x3583,	// (0x00012da2) bg_passive_tab_pane_g2_cp2_srt

0x3af9,	// (0x00013318) bg_passive_tab_pane_g3_cp2_srt

0x1f48,	// (0x00011767) bg_active_tab_pane_cp2_srt_ParamLimits

0x1f48,	// (0x00011767) bg_active_tab_pane_cp2_srt

0x6102,	// (0x00015921) tabs_3_active_pane_srt_g1

0xd9b2,	// (0x0001d1d1) tabs_3_active_pane_srt_t1_ParamLimits

0xd9b2,	// (0x0001d1d1) tabs_3_active_pane_srt_t1

0x3af0,	// (0x0001330f) bg_active_tab_pane_g1_cp2_srt

0x3583,	// (0x00012da2) bg_active_tab_pane_g2_cp2_srt

0x3af9,	// (0x00013318) bg_active_tab_pane_g3_cp2_srt

0x0dc7,	// (0x000105e6) tabs_4_active_pane_srt_ParamLimits

0x0dc7,	// (0x000105e6) tabs_4_active_pane_srt

0x0dd9,	// (0x000105f8) tabs_4_passive_pane_cp2_srt_ParamLimits

0x0dd9,	// (0x000105f8) tabs_4_passive_pane_cp2_srt

0x3c4e,	// (0x0001346d) aid_size_cell_toolbar

0x5cc3,	// (0x000154e2) main_idle_act_pane_ParamLimits

0x3e95,	// (0x000136b4) popup_large_graphic_colour_window_ParamLimits

0xcfb6,	// (0x0001c7d5) popup_toolbar_window_ParamLimits

0xcfb6,	// (0x0001c7d5) popup_toolbar_window

0x5ef0,	// (0x0001570f) list_single_graphic_2heading_pane_ParamLimits

0x5ef0,	// (0x0001570f) list_single_graphic_2heading_pane

0x3003,	// (0x00012822) aid_size_cell_apps_grid_lsc_pane

0x3015,	// (0x00012834) aid_size_cell_apps_grid_prt_pane

0x3cc8,	// (0x000134e7) bg_wml_button_pane_cp1_ParamLimits

0x3cc8,	// (0x000134e7) bg_wml_button_pane_cp1

0xd490,	// (0x0001ccaf) form_midp_field_text_pane_t1_ParamLimits

0x4956,	// (0x00014175) input_focus_pane_cp050_ParamLimits

0x4b7c,	// (0x0001439b) list_midp_form_text_pane_ParamLimits

0x4b2e,	// (0x0001434d) input_focus_pane_cp051_ParamLimits

0x4b42,	// (0x00014361) list_midp_choice_pane_ParamLimits

0xd447,	// (0x0001cc66) list_single_2graphic_pane_cp3_ParamLimits

0xd447,	// (0x0001cc66) list_single_2graphic_pane_cp3

0x6fd3,	// (0x000167f2) list_single_midp_graphic_pane_ParamLimits

0x6fd3,	// (0x000167f2) list_single_midp_graphic_pane

0x09ca,	// (0x000101e9) list_single_graphic_2heading_pane_g1_ParamLimits

0x09ca,	// (0x000101e9) list_single_graphic_2heading_pane_g1

0x09d6,	// (0x000101f5) list_single_graphic_2heading_pane_g4_ParamLimits

0x09d6,	// (0x000101f5) list_single_graphic_2heading_pane_g4

0x09e2,	// (0x00010201) list_single_graphic_2heading_pane_g5_ParamLimits

0x09e2,	// (0x00010201) list_single_graphic_2heading_pane_g5

0x0002,

0xf7eb,	// (0x0001f00a) list_single_graphic_2heading_pane_g_ParamLimits

0xf7eb,	// (0x0001f00a) list_single_graphic_2heading_pane_g

0x09ee,	// (0x0001020d) list_single_graphic_2heading_pane_t1_ParamLimits

0x09ee,	// (0x0001020d) list_single_graphic_2heading_pane_t1

0x0a02,	// (0x00010221) list_single_graphic_2heading_pane_t2_ParamLimits

0x0a02,	// (0x00010221) list_single_graphic_2heading_pane_t2

0x0a1e,	// (0x0001023d) list_single_graphic_2heading_pane_t3_ParamLimits

0x0a1e,	// (0x0001023d) list_single_graphic_2heading_pane_t3

0x0002,

0xf7f2,	// (0x0001f011) list_single_graphic_2heading_pane_t_ParamLimits

0xf7f2,	// (0x0001f011) list_single_graphic_2heading_pane_t

0x474a,	// (0x00013f69) bg_popup_sub_pane_cp2

0x4774,	// (0x00013f93) grid_toobar_pane

0x0a36,	// (0x00010255) cell_toolbar_pane_ParamLimits

0x0a36,	// (0x00010255) cell_toolbar_pane

0x47de,	// (0x00013ffd) cell_toolbar_pane_g1_ParamLimits

0x47de,	// (0x00013ffd) cell_toolbar_pane_g1

0x47f2,	// (0x00014011) cell_toolbar_pane_g2_ParamLimits

0x47f2,	// (0x00014011) cell_toolbar_pane_g2

0x0001,

0xf800,	// (0x0001f01f) cell_toolbar_pane_g_ParamLimits

0xf800,	// (0x0001f01f) cell_toolbar_pane_g

0x4814,	// (0x00014033) grid_highlight_pane_cp2_ParamLimits

0x4814,	// (0x00014033) grid_highlight_pane_cp2

0x482e,	// (0x0001404d) toolbar_button_pane

0x483a,	// (0x00014059) toolbar_button_pane_g1

0x4842,	// (0x00014061) toolbar_button_pane_g2

0x484a,	// (0x00014069) toolbar_button_pane_g3

0x4852,	// (0x00014071) toolbar_button_pane_g4

0x485a,	// (0x00014079) toolbar_button_pane_g5

0x4862,	// (0x00014081) toolbar_button_pane_g6

0x486a,	// (0x00014089) toolbar_button_pane_g7

0x4872,	// (0x00014091) toolbar_button_pane_g8

0x487a,	// (0x00014099) toolbar_button_pane_g9

0x0009,

0xf805,	// (0x0001f024) toolbar_button_pane_g

0x0a6e,	// (0x0001028d) list_single_2graphic_pane_g1_cp3_ParamLimits

0x0a6e,	// (0x0001028d) list_single_2graphic_pane_g1_cp3

0xb4e7,	// (0x0001ad06) list_single_2graphic_pane_g2_cp3_ParamLimits

0xb4e7,	// (0x0001ad06) list_single_2graphic_pane_g2_cp3

0x0a8b,	// (0x000102aa) list_single_2graphic_pane_g3_cp3

0x0a93,	// (0x000102b2) list_single_2graphic_pane_g4_cp3_ParamLimits

0x0a93,	// (0x000102b2) list_single_2graphic_pane_g4_cp3

0x0a9f,	// (0x000102be) list_single_2graphic_pane_t1_cp3_ParamLimits

0x0a9f,	// (0x000102be) list_single_2graphic_pane_t1_cp3

0x0aba,	// (0x000102d9) list_single_midp_graphic_pane_g2_ParamLimits

0x0aba,	// (0x000102d9) list_single_midp_graphic_pane_g2

0x3c56,	// (0x00013475) aid_zoom_text_primary

0x3c5e,	// (0x0001347d) aid_zoom_text_secondary

0x3bad,	// (0x000133cc) status_small_pane_g7_ParamLimits

0x3bad,	// (0x000133cc) status_small_pane_g7

0x3bd0,	// (0x000133ef) status_small_pane_t1_ParamLimits

0xbb63,	// (0x0001b382) title_pane_g2

0x0003,

0xf592,	// (0x0001edb1) title_pane_g

0xbdfb,	// (0x0001b61a) aid_size_cell_colour_1_pane_ParamLimits

0xbdfb,	// (0x0001b61a) aid_size_cell_colour_1_pane

0xbe0f,	// (0x0001b62e) aid_size_cell_colour_2_pane_ParamLimits

0xbe0f,	// (0x0001b62e) aid_size_cell_colour_2_pane

0xbe23,	// (0x0001b642) aid_size_cell_colour_3_pane_ParamLimits

0xbe23,	// (0x0001b642) aid_size_cell_colour_3_pane

0xbe37,	// (0x0001b656) aid_size_cell_colour_4_pane_ParamLimits

0xbe37,	// (0x0001b656) aid_size_cell_colour_4_pane

0x0428,	// (0x0000fc47) title_pane_stacon_g1_ParamLimits

0x0428,	// (0x0000fc47) title_pane_stacon_g1

0x4f2e,	// (0x0001474d) popup_note_wait_window_g3_ParamLimits

0x4f2e,	// (0x0001474d) popup_note_wait_window_g3

0x4fa5,	// (0x000147c4) popup_note_wait_window_t5_ParamLimits

0x4fa5,	// (0x000147c4) popup_note_wait_window_t5

0x1bd2,	// (0x000113f1) main_feb_china_hwr_fs_writing_pane

0xc951,	// (0x0001c170) popup_feb_china_hwr_fs_window_ParamLimits

0xc951,	// (0x0001c170) popup_feb_china_hwr_fs_window

0xb4f8,	// (0x0001ad17) aid_size_cell_hwr_fs_ParamLimits

0xb4f8,	// (0x0001ad17) aid_size_cell_hwr_fs

0x4956,	// (0x00014175) bg_popup_sub_pane_cp3_ParamLimits

0x4956,	// (0x00014175) bg_popup_sub_pane_cp3

0xb50d,	// (0x0001ad2c) grid_hwr_fs_pane_ParamLimits

0xb50d,	// (0x0001ad2c) grid_hwr_fs_pane

0x0b09,	// (0x00010328) linegrid_hwr_fs_pane_ParamLimits

0x0b09,	// (0x00010328) linegrid_hwr_fs_pane

0xb525,	// (0x0001ad44) cell_hwr_fs_pane_ParamLimits

0xb525,	// (0x0001ad44) cell_hwr_fs_pane

0x4962,	// (0x00014181) linegrid_hwr_fs_pane_g1_ParamLimits

0x4962,	// (0x00014181) linegrid_hwr_fs_pane_g1

0xd41b,	// (0x0001cc3a) linegrid_hwr_fs_pane_g2_ParamLimits

0xd41b,	// (0x0001cc3a) linegrid_hwr_fs_pane_g2

0x4980,	// (0x0001419f) linegrid_hwr_fs_pane_g3_ParamLimits

0x4980,	// (0x0001419f) linegrid_hwr_fs_pane_g3

0x0b3d,	// (0x0001035c) linegrid_hwr_fs_pane_g4_ParamLimits

0x0b3d,	// (0x0001035c) linegrid_hwr_fs_pane_g4

0x0b5b,	// (0x0001037a) linegrid_hwr_fs_pane_g5_ParamLimits

0x0b5b,	// (0x0001037a) linegrid_hwr_fs_pane_g5

0x0004,

0xf82b,	// (0x0001f04a) linegrid_hwr_fs_pane_g_ParamLimits

0xf82b,	// (0x0001f04a) linegrid_hwr_fs_pane_g

0x498c,	// (0x000141ab) cell_hwr_fs_pane_g1_ParamLimits

0x498c,	// (0x000141ab) cell_hwr_fs_pane_g1

0x4681,	// (0x00013ea0) cell_hwr_fs_pane_g2_ParamLimits

0x4681,	// (0x00013ea0) cell_hwr_fs_pane_g2

0xd42d,	// (0x0001cc4c) cell_hwr_fs_pane_g3_ParamLimits

0xd42d,	// (0x0001cc4c) cell_hwr_fs_pane_g3

0xd43a,	// (0x0001cc59) cell_hwr_fs_pane_g4_ParamLimits

0xd43a,	// (0x0001cc59) cell_hwr_fs_pane_g4

0x0003,

0xf836,	// (0x0001f055) cell_hwr_fs_pane_g_ParamLimits

0xf836,	// (0x0001f055) cell_hwr_fs_pane_g

0xb54b,	// (0x0001ad6a) cell_hwr_fs_pane_t1

0x1bd2,	// (0x000113f1) grid_highlight_pane_cp6

0x1bd2,	// (0x000113f1) main_idle_act2_pane

0x2db9,	// (0x000125d8) aid_inside_area_popup_secondary

0xd531,	// (0x0001cd50) aid_inside_area_window_primary_ParamLimits

0xd531,	// (0x0001cd50) aid_inside_area_window_primary

0x6269,	// (0x00015a88) ai2_news_ticker_pane

0x6271,	// (0x00015a90) aid_size_cell_ai1_link_ParamLimits

0x6271,	// (0x00015a90) aid_size_cell_ai1_link

0x628b,	// (0x00015aaa) popup_ai2_data_window_ParamLimits

0x628b,	// (0x00015aaa) popup_ai2_data_window

0x62a9,	// (0x00015ac8) popup_ai2_link_window_ParamLimits

0x62a9,	// (0x00015ac8) popup_ai2_link_window

0x4956,	// (0x00014175) bg_popup_sub_pane_cp4_ParamLimits

0x4956,	// (0x00014175) bg_popup_sub_pane_cp4

0x62bf,	// (0x00015ade) grid_ai2_link_pane_ParamLimits

0x62bf,	// (0x00015ade) grid_ai2_link_pane

0x62d6,	// (0x00015af5) popup_ai2_link_window_g1_ParamLimits

0x62d6,	// (0x00015af5) popup_ai2_link_window_g1

0x62e2,	// (0x00015b01) popup_ai2_link_window_g2_ParamLimits

0x62e2,	// (0x00015b01) popup_ai2_link_window_g2

0x0001,

0xfa02,	// (0x0001f221) popup_ai2_link_window_g_ParamLimits

0xfa02,	// (0x0001f221) popup_ai2_link_window_g

0x62f3,	// (0x00015b12) ai2_mp_button_pane

0x62fb,	// (0x00015b1a) ai2_mp_volume_pane

0x4b2e,	// (0x0001434d) bg_popup_sub_pane_cp5_ParamLimits

0x4b2e,	// (0x0001434d) bg_popup_sub_pane_cp5

0x6303,	// (0x00015b22) heading_ai2_gene_pane_ParamLimits

0x6303,	// (0x00015b22) heading_ai2_gene_pane

0x630f,	// (0x00015b2e) list_ai2_gene_pane_ParamLimits

0x630f,	// (0x00015b2e) list_ai2_gene_pane

0x6357,	// (0x00015b76) cell_ai2_link_pane_ParamLimits

0x6357,	// (0x00015b76) cell_ai2_link_pane

0x636d,	// (0x00015b8c) cell_ai2_link_pane_g1

0x1bd2,	// (0x000113f1) grid_highlight_pane_cp7

0x0e7f,	// (0x0001069e) ai2_mp_volume_pane_g1

0x6440,	// (0x00015c5f) ai2_mp_volume_pane_g2

0x63b5,	// (0x00015bd4) list_ai2_gene_pane_t1

0x6448,	// (0x00015c67) ai2_mp_volume_pane_g3

0x0002,

0xfa1b,	// (0x0001f23a) ai2_mp_volume_pane_g

0x0e87,	// (0x000106a6) volume_small_pane_cp3

0x6450,	// (0x00015c6f) aid_size_cell_ai2_button

0x6458,	// (0x00015c77) grid_ai2_button_pane

0x6461,	// (0x00015c80) cell_ai2_button_pane_ParamLimits

0x6461,	// (0x00015c80) cell_ai2_button_pane

0x1bc8,	// (0x000113e7) cell_ai2_button_pane_g1

0x1bd2,	// (0x000113f1) grid_highlight_pane_cp8

0x6400,	// (0x00015c1f) ai2_gene_pane_t1_ParamLimits

0x6400,	// (0x00015c1f) ai2_gene_pane_t1

0xc8c1,	// (0x0001c0e0) aid_height_parent_landscape

0xd713,	// (0x0001cf32) aid_height_set_list

0x5cc3,	// (0x000154e2) aid_size_parent

0x608a,	// (0x000158a9) aid_size_cell_graphic_pane_ParamLimits

0x631f,	// (0x00015b3e) popup_ai2_data_window_g1_ParamLimits

0x631f,	// (0x00015b3e) popup_ai2_data_window_g1

0x632b,	// (0x00015b4a) ai2_news_ticker_pane_g1

0x6333,	// (0x00015b52) ai2_news_ticker_pane_g2

0x0001,

0xfa07,	// (0x0001f226) ai2_news_ticker_pane_g

0x633b,	// (0x00015b5a) ai2_news_ticker_pane_t1

0x6349,	// (0x00015b68) ai2_news_ticker_pane_t2

0x0001,

0xfa0c,	// (0x0001f22b) ai2_news_ticker_pane_t

0x6376,	// (0x00015b95) heading_ai2_gene_pane_g1

0x637e,	// (0x00015b9d) heading_ai2_gene_pane_t1_ParamLimits

0x637e,	// (0x00015b9d) heading_ai2_gene_pane_t1

0x6393,	// (0x00015bb2) list_highlight_pane_cp6

0x639b,	// (0x00015bba) ai2_gene_pane_ParamLimits

0x639b,	// (0x00015bba) ai2_gene_pane

0x63c3,	// (0x00015be2) list_ai2_gene_pane_t2

0x0001,

0xfa11,	// (0x0001f230) list_ai2_gene_pane_t

0x63d1,	// (0x00015bf0) list_highlight_pane_cp8_ParamLimits

0x63d1,	// (0x00015bf0) list_highlight_pane_cp8

0x63e2,	// (0x00015c01) ai2_gene_pane_g1_ParamLimits

0x63e2,	// (0x00015c01) ai2_gene_pane_g1

0x63f4,	// (0x00015c13) ai2_gene_pane_g2_ParamLimits

0x63f4,	// (0x00015c13) ai2_gene_pane_g2

0x0001,

0xfa16,	// (0x0001f235) ai2_gene_pane_g_ParamLimits

0xfa16,	// (0x0001f235) ai2_gene_pane_g

0x24e9,	// (0x00011d08) scroll_pane_cp12

0xb4a6,	// (0x0001acc5) control_pane_t3_ParamLimits

0xb4a6,	// (0x0001acc5) control_pane_t3

0x3bc1,	// (0x000133e0) status_small_pane_g8_ParamLimits

0x3bc1,	// (0x000133e0) status_small_pane_g8

0xc9f3,	// (0x0001c212) popup_find_window_ParamLimits

0xcca0,	// (0x0001c4bf) popup_note_image_window_ParamLimits

0x47b0,	// (0x00013fcf) list_double2_graphic_pane_vc_g1_ParamLimits

0x47b0,	// (0x00013fcf) list_double2_graphic_pane_vc_g1

0x38ab,	// (0x000130ca) list_double2_graphic_pane_vc_g2_ParamLimits

0x38ab,	// (0x000130ca) list_double2_graphic_pane_vc_g2

0x47bc,	// (0x00013fdb) list_double2_graphic_pane_vc_g3_ParamLimits

0x47bc,	// (0x00013fdb) list_double2_graphic_pane_vc_g3

0x0002,

0xf7f9,	// (0x0001f018) list_double2_graphic_pane_vc_g_ParamLimits

0xf7f9,	// (0x0001f018) list_double2_graphic_pane_vc_g

0x47c8,	// (0x00013fe7) list_double2_graphic_pane_vc_t1_ParamLimits

0x47c8,	// (0x00013fe7) list_double2_graphic_pane_vc_t1

0x38ab,	// (0x000130ca) list_single_heading_pane_vc_g1_ParamLimits

0x38ab,	// (0x000130ca) list_single_heading_pane_vc_g1

0x47bc,	// (0x00013fdb) list_single_heading_pane_vc_g2_ParamLimits

0x47bc,	// (0x00013fdb) list_single_heading_pane_vc_g2

0x0001,

0xf60c,	// (0x0001ee2b) list_single_heading_pane_vc_g_ParamLimits

0xf60c,	// (0x0001ee2b) list_single_heading_pane_vc_g

0x4882,	// (0x000140a1) list_single_heading_pane_vc_t1_ParamLimits

0x4882,	// (0x000140a1) list_single_heading_pane_vc_t1

0x4898,	// (0x000140b7) list_single_heading_pane_vc_t2_ParamLimits

0x4898,	// (0x000140b7) list_single_heading_pane_vc_t2

0x0001,

0xf81a,	// (0x0001f039) list_single_heading_pane_vc_t_ParamLimits

0xf81a,	// (0x0001f039) list_single_heading_pane_vc_t

0x48ac,	// (0x000140cb) list_setting_number_pane_vc_g1_ParamLimits

0x48ac,	// (0x000140cb) list_setting_number_pane_vc_g1

0x48b8,	// (0x000140d7) list_setting_number_pane_vc_g2_ParamLimits

0x48b8,	// (0x000140d7) list_setting_number_pane_vc_g2

0x0001,

0xf81f,	// (0x0001f03e) list_setting_number_pane_vc_g_ParamLimits

0xf81f,	// (0x0001f03e) list_setting_number_pane_vc_g

0x48c4,	// (0x000140e3) list_setting_number_pane_vc_t1_ParamLimits

0x48c4,	// (0x000140e3) list_setting_number_pane_vc_t1

0x48d8,	// (0x000140f7) list_setting_number_pane_vc_t2_ParamLimits

0x48d8,	// (0x000140f7) list_setting_number_pane_vc_t2

0x48f4,	// (0x00014113) list_setting_number_pane_vc_t3_ParamLimits

0x48f4,	// (0x00014113) list_setting_number_pane_vc_t3

0x0002,

0xf824,	// (0x0001f043) list_setting_number_pane_vc_t_ParamLimits

0xf824,	// (0x0001f043) list_setting_number_pane_vc_t

0x491c,	// (0x0001413b) set_value_pane_vc_ParamLimits

0x491c,	// (0x0001413b) set_value_pane_vc

0x5ef0,	// (0x0001570f) list_double2_graphic_pane_vc_ParamLimits

0x5ef0,	// (0x0001570f) list_double2_graphic_pane_vc

0x5ef0,	// (0x0001570f) list_double2_large_graphic_pane_vc_ParamLimits

0x5ef0,	// (0x0001570f) list_double2_large_graphic_pane_vc

0x5ef0,	// (0x0001570f) list_double2_pane_vc_ParamLimits

0x5ef0,	// (0x0001570f) list_double2_pane_vc

0x5ef0,	// (0x0001570f) list_double_graphic_heading_pane_vc_ParamLimits

0x5ef0,	// (0x0001570f) list_double_graphic_heading_pane_vc

0x5ef0,	// (0x0001570f) list_double_graphic_pane_vc_ParamLimits

0x5ef0,	// (0x0001570f) list_double_graphic_pane_vc

0x5ef0,	// (0x0001570f) list_double_heading_pane_vc_ParamLimits

0x5ef0,	// (0x0001570f) list_double_heading_pane_vc

0x5ef0,	// (0x0001570f) list_double_large_graphic_pane_vc_ParamLimits

0x5ef0,	// (0x0001570f) list_double_large_graphic_pane_vc

0x5ef0,	// (0x0001570f) list_double_number_pane_vc_ParamLimits

0x5ef0,	// (0x0001570f) list_double_number_pane_vc

0x5ef0,	// (0x0001570f) list_double_pane_vc_ParamLimits

0x5ef0,	// (0x0001570f) list_double_pane_vc

0x5ef0,	// (0x0001570f) list_double_time_pane_vc_ParamLimits

0x5ef0,	// (0x0001570f) list_double_time_pane_vc

0x5ef0,	// (0x0001570f) list_setting_number_pane_vc_ParamLimits

0x5ef0,	// (0x0001570f) list_setting_number_pane_vc

0x5ef0,	// (0x0001570f) list_setting_pane_vc_ParamLimits

0x5ef0,	// (0x0001570f) list_setting_pane_vc

0x5ef0,	// (0x0001570f) list_single_graphic_heading_pane_vc_ParamLimits

0x5ef0,	// (0x0001570f) list_single_graphic_heading_pane_vc

0x5ef0,	// (0x0001570f) list_single_heading_pane_vc_ParamLimits

0x5ef0,	// (0x0001570f) list_single_heading_pane_vc

0x5ef0,	// (0x0001570f) list_single_number_heading_pane_vc_ParamLimits

0x5ef0,	// (0x0001570f) list_single_number_heading_pane_vc

0x47b0,	// (0x00013fcf) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x47b0,	// (0x00013fcf) list_double_graphic_heading_pane_vc_g1

0x6494,	// (0x00015cb3) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x6494,	// (0x00015cb3) list_double_graphic_heading_pane_vc_g2

0x64a0,	// (0x00015cbf) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x64a0,	// (0x00015cbf) list_double_graphic_heading_pane_vc_g3

0x0002,

0xfa22,	// (0x0001f241) list_double_graphic_heading_pane_vc_g_ParamLimits

0xfa22,	// (0x0001f241) list_double_graphic_heading_pane_vc_g

0x64ac,	// (0x00015ccb) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x64ac,	// (0x00015ccb) list_double_graphic_heading_pane_vc_t1

0x4882,	// (0x000140a1) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x4882,	// (0x000140a1) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa29,	// (0x0001f248) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa29,	// (0x0001f248) list_double_graphic_heading_pane_vc_t

0x48ac,	// (0x000140cb) list_setting_pane_vc_g1_ParamLimits

0x48ac,	// (0x000140cb) list_setting_pane_vc_g1

0x48b8,	// (0x000140d7) list_setting_pane_vc_g2_ParamLimits

0x48b8,	// (0x000140d7) list_setting_pane_vc_g2

0x0001,

0xf81f,	// (0x0001f03e) list_setting_pane_vc_g_ParamLimits

0xf81f,	// (0x0001f03e) list_setting_pane_vc_g

0x66c9,	// (0x00015ee8) list_setting_pane_vc_t1_ParamLimits

0x66c9,	// (0x00015ee8) list_setting_pane_vc_t1

0x66dd,	// (0x00015efc) list_setting_pane_vc_t2_ParamLimits

0x66dd,	// (0x00015efc) list_setting_pane_vc_t2

0x0001,

0xfa6c,	// (0x0001f28b) list_setting_pane_vc_t_ParamLimits

0xfa6c,	// (0x0001f28b) list_setting_pane_vc_t

0x491c,	// (0x0001413b) set_value_pane_cp_vc_ParamLimits

0x491c,	// (0x0001413b) set_value_pane_cp_vc

0x38ab,	// (0x000130ca) list_single_number_heading_pane_vc_g1_ParamLimits

0x38ab,	// (0x000130ca) list_single_number_heading_pane_vc_g1

0x47bc,	// (0x00013fdb) list_single_number_heading_pane_vc_g2_ParamLimits

0x47bc,	// (0x00013fdb) list_single_number_heading_pane_vc_g2

0x0001,

0xf60c,	// (0x0001ee2b) list_single_number_heading_pane_vc_g_ParamLimits

0xf60c,	// (0x0001ee2b) list_single_number_heading_pane_vc_g

0x4882,	// (0x000140a1) list_single_number_heading_pane_vc_t1_ParamLimits

0x4882,	// (0x000140a1) list_single_number_heading_pane_vc_t1

0x66ff,	// (0x00015f1e) list_single_number_heading_pane_vc_t2_ParamLimits

0x66ff,	// (0x00015f1e) list_single_number_heading_pane_vc_t2

0x6713,	// (0x00015f32) list_single_number_heading_pane_vc_t3_ParamLimits

0x6713,	// (0x00015f32) list_single_number_heading_pane_vc_t3

0x0002,

0xfa71,	// (0x0001f290) list_single_number_heading_pane_vc_t_ParamLimits

0xfa71,	// (0x0001f290) list_single_number_heading_pane_vc_t

0x47b0,	// (0x00013fcf) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x47b0,	// (0x00013fcf) list_single_graphic_heading_pane_vc_g1

0x38ab,	// (0x000130ca) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x38ab,	// (0x000130ca) list_single_graphic_heading_pane_vc_g4

0x47bc,	// (0x00013fdb) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x47bc,	// (0x00013fdb) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7f9,	// (0x0001f018) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7f9,	// (0x0001f018) list_single_graphic_heading_pane_vc_g

0x4882,	// (0x000140a1) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x4882,	// (0x000140a1) list_single_graphic_heading_pane_vc_t1

0x6725,	// (0x00015f44) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x6725,	// (0x00015f44) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa78,	// (0x0001f297) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa78,	// (0x0001f297) list_single_graphic_heading_pane_vc_t

0x38ab,	// (0x000130ca) list_double2_pane_vc_g1_ParamLimits

0x38ab,	// (0x000130ca) list_double2_pane_vc_g1

0x47bc,	// (0x00013fdb) list_double2_pane_vc_g2_ParamLimits

0x47bc,	// (0x00013fdb) list_double2_pane_vc_g2

0x0001,

0xf60c,	// (0x0001ee2b) list_double2_pane_vc_g_ParamLimits

0xf60c,	// (0x0001ee2b) list_double2_pane_vc_g

0x677b,	// (0x00015f9a) list_double2_pane_vc_t1_ParamLimits

0x677b,	// (0x00015f9a) list_double2_pane_vc_t1

0x6791,	// (0x00015fb0) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x6791,	// (0x00015fb0) list_double2_large_graphic_pane_vc_g1

0x38ab,	// (0x000130ca) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x38ab,	// (0x000130ca) list_double2_large_graphic_pane_vc_g2

0x47bc,	// (0x00013fdb) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x47bc,	// (0x00013fdb) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf629,	// (0x0001ee48) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf629,	// (0x0001ee48) list_double2_large_graphic_pane_vc_g

0x679d,	// (0x00015fbc) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x679d,	// (0x00015fbc) list_double2_large_graphic_pane_vc_t1

0x67b3,	// (0x00015fd2) list_double_time_pane_vc_g1_ParamLimits

0x67b3,	// (0x00015fd2) list_double_time_pane_vc_g1

0x67bf,	// (0x00015fde) list_double_time_pane_vc_g2_ParamLimits

0x67bf,	// (0x00015fde) list_double_time_pane_vc_g2

0x0001,

0xfa7d,	// (0x0001f29c) list_double_time_pane_vc_g_ParamLimits

0xfa7d,	// (0x0001f29c) list_double_time_pane_vc_g

0x67cb,	// (0x00015fea) list_double_time_pane_vc_t1_ParamLimits

0x67cb,	// (0x00015fea) list_double_time_pane_vc_t1

0x67e4,	// (0x00016003) list_double_time_pane_vc_t2_ParamLimits

0x67e4,	// (0x00016003) list_double_time_pane_vc_t2

0x6804,	// (0x00016023) list_double_time_pane_vc_t3_ParamLimits

0x6804,	// (0x00016023) list_double_time_pane_vc_t3

0x681c,	// (0x0001603b) list_double_time_pane_vc_t4_ParamLimits

0x681c,	// (0x0001603b) list_double_time_pane_vc_t4

0x0003,

0xfa82,	// (0x0001f2a1) list_double_time_pane_vc_t_ParamLimits

0xfa82,	// (0x0001f2a1) list_double_time_pane_vc_t

0x38ab,	// (0x000130ca) list_double_pane_vc_g1_ParamLimits

0x38ab,	// (0x000130ca) list_double_pane_vc_g1

0x47bc,	// (0x00013fdb) list_double_pane_vc_g2_ParamLimits

0x47bc,	// (0x00013fdb) list_double_pane_vc_g2

0x0001,

0xf60c,	// (0x0001ee2b) list_double_pane_vc_g_ParamLimits

0xf60c,	// (0x0001ee2b) list_double_pane_vc_g

0x6830,	// (0x0001604f) list_double_pane_vc_t1_ParamLimits

0x6830,	// (0x0001604f) list_double_pane_vc_t1

0x6842,	// (0x00016061) list_double_pane_vc_t2_ParamLimits

0x6842,	// (0x00016061) list_double_pane_vc_t2

0x0001,

0xfa8b,	// (0x0001f2aa) list_double_pane_vc_t_ParamLimits

0xfa8b,	// (0x0001f2aa) list_double_pane_vc_t

0x38ab,	// (0x000130ca) list_double_number_pane_vc_g1_ParamLimits

0x38ab,	// (0x000130ca) list_double_number_pane_vc_g1

0x47bc,	// (0x00013fdb) list_double_number_pane_vc_g2_ParamLimits

0x47bc,	// (0x00013fdb) list_double_number_pane_vc_g2

0x0001,

0xf60c,	// (0x0001ee2b) list_double_number_pane_vc_g_ParamLimits

0xf60c,	// (0x0001ee2b) list_double_number_pane_vc_g

0x685a,	// (0x00016079) list_double_number_pane_vc_t1_ParamLimits

0x685a,	// (0x00016079) list_double_number_pane_vc_t1

0x686e,	// (0x0001608d) list_double_number_pane_vc_t2_ParamLimits

0x686e,	// (0x0001608d) list_double_number_pane_vc_t2

0x6842,	// (0x00016061) list_double_number_pane_vc_t3_ParamLimits

0x6842,	// (0x00016061) list_double_number_pane_vc_t3

0x0002,

0xfa90,	// (0x0001f2af) list_double_number_pane_vc_t_ParamLimits

0xfa90,	// (0x0001f2af) list_double_number_pane_vc_t

0x6880,	// (0x0001609f) list_double_large_graphic_pane_vc_g1_ParamLimits

0x6880,	// (0x0001609f) list_double_large_graphic_pane_vc_g1

0x688c,	// (0x000160ab) list_double_large_graphic_pane_vc_g2_ParamLimits

0x688c,	// (0x000160ab) list_double_large_graphic_pane_vc_g2

0x47bc,	// (0x00013fdb) list_double_large_graphic_pane_vc_g3_ParamLimits

0x47bc,	// (0x00013fdb) list_double_large_graphic_pane_vc_g3

0x689b,	// (0x000160ba) list_double_large_graphic_pane_vc_g4_ParamLimits

0x689b,	// (0x000160ba) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa97,	// (0x0001f2b6) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa97,	// (0x0001f2b6) list_double_large_graphic_pane_vc_g

0x68a7,	// (0x000160c6) list_double_large_graphic_pane_vc_t1_ParamLimits

0x68a7,	// (0x000160c6) list_double_large_graphic_pane_vc_t1

0x68b9,	// (0x000160d8) list_double_large_graphic_pane_vc_t2_ParamLimits

0x68b9,	// (0x000160d8) list_double_large_graphic_pane_vc_t2

0x0001,

0xfaa0,	// (0x0001f2bf) list_double_large_graphic_pane_vc_t_ParamLimits

0xfaa0,	// (0x0001f2bf) list_double_large_graphic_pane_vc_t

0x6494,	// (0x00015cb3) list_double_heading_pane_vc_g1_ParamLimits

0x6494,	// (0x00015cb3) list_double_heading_pane_vc_g1

0x64a0,	// (0x00015cbf) list_double_heading_pane_vc_g2_ParamLimits

0x64a0,	// (0x00015cbf) list_double_heading_pane_vc_g2

0x0001,

0xfaa5,	// (0x0001f2c4) list_double_heading_pane_vc_g_ParamLimits

0xfaa5,	// (0x0001f2c4) list_double_heading_pane_vc_g

0x68d2,	// (0x000160f1) list_double_heading_pane_vc_t1_ParamLimits

0x68d2,	// (0x000160f1) list_double_heading_pane_vc_t1

0x4882,	// (0x000140a1) list_double_heading_pane_vc_t2_ParamLimits

0x4882,	// (0x000140a1) list_double_heading_pane_vc_t2

0x0001,

0xfaaa,	// (0x0001f2c9) list_double_heading_pane_vc_t_ParamLimits

0xfaaa,	// (0x0001f2c9) list_double_heading_pane_vc_t

0x47b0,	// (0x00013fcf) list_double_graphic_pane_vc_g1_ParamLimits

0x47b0,	// (0x00013fcf) list_double_graphic_pane_vc_g1

0x68e6,	// (0x00016105) list_double_graphic_pane_vc_g2_ParamLimits

0x68e6,	// (0x00016105) list_double_graphic_pane_vc_g2

0x68f5,	// (0x00016114) list_double_graphic_pane_vc_g3_ParamLimits

0x68f5,	// (0x00016114) list_double_graphic_pane_vc_g3

0x0002,

0xfaaf,	// (0x0001f2ce) list_double_graphic_pane_vc_g_ParamLimits

0xfaaf,	// (0x0001f2ce) list_double_graphic_pane_vc_g

0x6901,	// (0x00016120) list_double_graphic_pane_vc_t1_ParamLimits

0x6901,	// (0x00016120) list_double_graphic_pane_vc_t1

0x6842,	// (0x00016061) list_double_graphic_pane_vc_t2_ParamLimits

0x6842,	// (0x00016061) list_double_graphic_pane_vc_t2

0x0001,

0xfab6,	// (0x0001f2d5) list_double_graphic_pane_vc_t_ParamLimits

0xfab6,	// (0x0001f2d5) list_double_graphic_pane_vc_t

0xf58a,	// (0x0001eda9) aid_size_cell_fastswap

0xb205,	// (0x0001aa24) aid_size_cell_touch_ParamLimits

0xb205,	// (0x0001aa24) aid_size_cell_touch

0x01e6,	// (0x0000fa05) popup_fast_swap_wide_window_ParamLimits

0x01e6,	// (0x0000fa05) popup_fast_swap_wide_window

0xb354,	// (0x0001ab73) touch_pane_ParamLimits

0xb354,	// (0x0001ab73) touch_pane

0x29f8,	// (0x00012217) button_value_adjust_pane_cp2

0x2a00,	// (0x0001221f) button_value_adjust_pane_cp4

0x2a26,	// (0x00012245) form_field_data_pane_cp2

0xc327,	// (0x0001bb46) form_field_data_wide_pane_cp2

0x30d5,	// (0x000128f4) bg_scroll_pane_ParamLimits

0x058d,	// (0x0000fdac) scroll_handle_pane_ParamLimits

0x05a1,	// (0x0000fdc0) scroll_sc2_down_pane_ParamLimits

0x05a1,	// (0x0000fdc0) scroll_sc2_down_pane

0x3106,	// (0x00012925) scroll_sc2_up_pane_ParamLimits

0x3106,	// (0x00012925) scroll_sc2_up_pane

0xdb09,	// (0x0001d328) grid_wheel_folder_pane_g1_ParamLimits

0xdb09,	// (0x0001d328) grid_wheel_folder_pane_g1

0x076b,	// (0x0000ff8a) clock_nsta_pane_cp2_ParamLimits

0x076b,	// (0x0000ff8a) clock_nsta_pane_cp2

0xc7d6,	// (0x0001bff5) listscroll_midp_pane_ParamLimits

0xc7e7,	// (0x0001c006) midp_canvas_pane

0x3c3c,	// (0x0001345b) nsta_clock_indic_pane

0x3c9a,	// (0x000134b9) listscroll_form_pane_vc

0x3cb6,	// (0x000134d5) listscroll_set_pane_vc_ParamLimits

0x3cb6,	// (0x000134d5) listscroll_set_pane_vc

0xd115,	// (0x0001c934) clock_nsta_pane

0xd13f,	// (0x0001c95e) indicator_nsta_pane

0x474a,	// (0x00013f69) bg_popup_sub_pane_cp2_ParamLimits

0x475e,	// (0x00013f7d) find_pane_cp2_ParamLimits

0x475e,	// (0x00013f7d) find_pane_cp2

0x4774,	// (0x00013f93) grid_toobar_pane_ParamLimits

0x492a,	// (0x00014149) list_form_gen_pane_vc_ParamLimits

0x492a,	// (0x00014149) list_form_gen_pane_vc

0x4940,	// (0x0001415f) scroll_pane_cp8_vc_ParamLimits

0x4940,	// (0x0001415f) scroll_pane_cp8_vc

0x49bc,	// (0x000141db) data_form_wide_pane_vc_ParamLimits

0x49bc,	// (0x000141db) data_form_wide_pane_vc

0x49c8,	// (0x000141e7) form_field_data_wide_pane_vc_g1

0x49d0,	// (0x000141ef) form_field_data_wide_pane_vc_t1_ParamLimits

0x49d0,	// (0x000141ef) form_field_data_wide_pane_vc_t1

0x2aee,	// (0x0001230d) input_focus_pane_cp6_vc_ParamLimits

0x2aee,	// (0x0001230d) input_focus_pane_cp6_vc

0xd4d5,	// (0x0001ccf4) list_midp_pane_ParamLimits

0x60f6,	// (0x00015915) scroll_pane_cp16_ParamLimits

0x60f6,	// (0x00015915) scroll_pane_cp16

0x4d25,	// (0x00014544) button_value_adjust_pane_ParamLimits

0x4d25,	// (0x00014544) button_value_adjust_pane

0xd724,	// (0x0001cf43) button_value_adjust_pane_cp6_ParamLimits

0xd724,	// (0x0001cf43) button_value_adjust_pane_cp6

0xd866,	// (0x0001d085) settings_code_pane_cp_ParamLimits

0xd866,	// (0x0001d085) settings_code_pane_cp

0x1bc8,	// (0x000113e7) cell_touch_pane_g1

0x1bc8,	// (0x000113e7) cell_touch_pane_g2

0x0001,

0xf742,	// (0x0001ef61) cell_touch_pane_g

0xd9de,	// (0x0001d1fd) cell_touch_pane_cp_ParamLimits

0xd9de,	// (0x0001d1fd) cell_touch_pane_cp

0xd9fa,	// (0x0001d219) cell_touch_pane_ParamLimits

0xd9fa,	// (0x0001d219) cell_touch_pane

0x1bc8,	// (0x000113e7) scroll_sc2_down_pane_g1

0x1bc8,	// (0x000113e7) scroll_sc2_up_pane_g1

0x1bd2,	// (0x000113f1) bg_set_opt_pane_cp4_vc

0x64c0,	// (0x00015cdf) list_set_graphic_pane_vc_g1_ParamLimits

0x64c0,	// (0x00015cdf) list_set_graphic_pane_vc_g1

0x64cc,	// (0x00015ceb) list_set_graphic_pane_vc_g2_ParamLimits

0x64cc,	// (0x00015ceb) list_set_graphic_pane_vc_g2

0x0001,

0xfa2e,	// (0x0001f24d) list_set_graphic_pane_vc_g_ParamLimits

0xfa2e,	// (0x0001f24d) list_set_graphic_pane_vc_g

0x64d8,	// (0x00015cf7) text_primary_small_cp13_vc_ParamLimits

0x64d8,	// (0x00015cf7) text_primary_small_cp13_vc

0x64f0,	// (0x00015d0f) list_set_graphic_pane_vc_ParamLimits

0x64f0,	// (0x00015d0f) list_set_graphic_pane_vc

0x1bd2,	// (0x000113f1) input_focus_pane_cp2_vc

0x1bc8,	// (0x000113e7) setting_code_pane_vc_g1

0x6504,	// (0x00015d23) setting_code_pane_vc_t1

0x6512,	// (0x00015d31) set_text_pane_vc_t1_ParamLimits

0x6512,	// (0x00015d31) set_text_pane_vc_t1

0x1bd2,	// (0x000113f1) input_focus_pane_cp1_vc

0x6530,	// (0x00015d4f) list_set_text_pane_vc

0x1bc8,	// (0x000113e7) setting_text_pane_vc_g1

0x1bd2,	// (0x000113f1) bg_set_opt_pane_cp2_vc

0x653a,	// (0x00015d59) setting_slider_graphic_pane_vc_g1

0x6542,	// (0x00015d61) setting_slider_graphic_pane_vc_t1

0x6550,	// (0x00015d6f) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa33,	// (0x0001f252) setting_slider_graphic_pane_vc_t

0x655e,	// (0x00015d7d) slider_set_pane_cp_vc

0x6566,	// (0x00015d85) slider_set_pane_vc_g1

0x656f,	// (0x00015d8e) slider_set_pane_vc_g2

0x0006,

0xfa38,	// (0x0001f257) slider_set_pane_vc_g

0x2c2a,	// (0x00012449) set_opt_bg_pane_g1_copy1

0x2c32,	// (0x00012451) set_opt_bg_pane_g2_copy1

0x659b,	// (0x00015dba) set_opt_bg_pane_g3_copy1

0x2c42,	// (0x00012461) set_opt_bg_pane_g4_copy1

0x2c4a,	// (0x00012469) set_opt_bg_pane_g5_copy1

0x2c52,	// (0x00012471) set_opt_bg_pane_g6_copy1

0x65a5,	// (0x00015dc4) set_opt_bg_pane_g7_copy1

0x65af,	// (0x00015dce) set_opt_bg_pane_g8_copy1

0x65b9,	// (0x00015dd8) set_opt_bg_pane_g9_copy1

0x1bd2,	// (0x000113f1) bg_set_opt_pane_cp_vc

0x65c3,	// (0x00015de2) setting_slider_pane_vc_t1

0x6542,	// (0x00015d61) setting_slider_pane_vc_t2

0x6550,	// (0x00015d6f) setting_slider_pane_vc_t3

0x0002,

0xfa47,	// (0x0001f266) setting_slider_pane_vc_t

0x655e,	// (0x00015d7d) slider_set_pane_vc

0x0b7f,	// (0x0001039e) volume_set_pane_vc_g1

0x0b88,	// (0x000103a7) volume_set_pane_vc_g2

0x0b91,	// (0x000103b0) volume_set_pane_vc_g3

0x0b9a,	// (0x000103b9) volume_set_pane_vc_g4

0x0ba3,	// (0x000103c2) volume_set_pane_vc_g5

0x0bac,	// (0x000103cb) volume_set_pane_vc_g6

0x0bb5,	// (0x000103d4) volume_set_pane_vc_g7

0x0bbe,	// (0x000103dd) volume_set_pane_vc_g8

0x0bc7,	// (0x000103e6) volume_set_pane_vc_g9

0x0bd0,	// (0x000103ef) volume_set_pane_vc_g10

0x0009,

0xfa4e,	// (0x0001f26d) volume_set_pane_vc_g

0x65d2,	// (0x00015df1) volume_set_pane_vc

0x65da,	// (0x00015df9) button_value_adjust_pane_cp1_vc

0x65e4,	// (0x00015e03) list_highlight_pane_cp2_vc

0x65ed,	// (0x00015e0c) list_set_pane_vc_ParamLimits

0x65ed,	// (0x00015e0c) list_set_pane_vc

0x6657,	// (0x00015e76) main_pane_set_vc_t1_ParamLimits

0x6657,	// (0x00015e76) main_pane_set_vc_t1

0x666c,	// (0x00015e8b) main_pane_set_vc_t2_ParamLimits

0x666c,	// (0x00015e8b) main_pane_set_vc_t2

0x667e,	// (0x00015e9d) main_pane_set_vc_t3_ParamLimits

0x667e,	// (0x00015e9d) main_pane_set_vc_t3

0x6692,	// (0x00015eb1) main_pane_set_vc_t4_ParamLimits

0x6692,	// (0x00015eb1) main_pane_set_vc_t4

0x0003,

0xfa63,	// (0x0001f282) main_pane_set_vc_t_ParamLimits

0xfa63,	// (0x0001f282) main_pane_set_vc_t

0x66a6,	// (0x00015ec5) setting_code_pane_vc_ParamLimits

0x66a6,	// (0x00015ec5) setting_code_pane_vc

0x66b7,	// (0x00015ed6) setting_slider_graphic_pane_vc

0x66b7,	// (0x00015ed6) setting_slider_pane_vc

0x66b7,	// (0x00015ed6) setting_text_pane_vc

0x66b7,	// (0x00015ed6) setting_volume_pane_vc

0x66c1,	// (0x00015ee0) scroll_pane_cp121_vc

0x29e6,	// (0x00012205) set_content_pane_vc

0x6913,	// (0x00016132) button_value_adjust_pane_g1

0x691c,	// (0x0001613b) button_value_adjust_pane_g2

0x0001,

0xfabb,	// (0x0001f2da) button_value_adjust_pane_g

0x6925,	// (0x00016144) form_field_slider_wide_pane_vc_t1_ParamLimits

0x6925,	// (0x00016144) form_field_slider_wide_pane_vc_t1

0x6939,	// (0x00016158) form_field_slider_wide_pane_vc_t2_ParamLimits

0x6939,	// (0x00016158) form_field_slider_wide_pane_vc_t2

0x0001,

0xfac0,	// (0x0001f2df) form_field_slider_wide_pane_vc_t_ParamLimits

0xfac0,	// (0x0001f2df) form_field_slider_wide_pane_vc_t

0x1f48,	// (0x00011767) input_focus_pane_cp10_vc_ParamLimits

0x1f48,	// (0x00011767) input_focus_pane_cp10_vc

0x694b,	// (0x0001616a) slider_cont_pane_cp1_vc_ParamLimits

0x694b,	// (0x0001616a) slider_cont_pane_cp1_vc

0x6566,	// (0x00015d85) slider_form_pane_g1_cp2

0x656f,	// (0x00015d8e) slider_form_pane_g2_cp2

0x6964,	// (0x00016183) form_field_slider_pane_vc_t3

0x6972,	// (0x00016191) form_field_slider_pane_vc_t4

0x6980,	// (0x0001619f) slider_form_pane_vc_ParamLimits

0x6980,	// (0x0001619f) slider_form_pane_vc

0x698d,	// (0x000161ac) form_field_slider_pane_vc_t1_ParamLimits

0x698d,	// (0x000161ac) form_field_slider_pane_vc_t1

0x6939,	// (0x00016158) form_field_slider_pane_vc_t2_ParamLimits

0x6939,	// (0x00016158) form_field_slider_pane_vc_t2

0x0001,

0xfad0,	// (0x0001f2ef) form_field_slider_pane_vc_t_ParamLimits

0xfad0,	// (0x0001f2ef) form_field_slider_pane_vc_t

0x1f48,	// (0x00011767) input_focus_pane_cp9_vc_ParamLimits

0x1f48,	// (0x00011767) input_focus_pane_cp9_vc

0x69a9,	// (0x000161c8) slider_cont_pane_vc_ParamLimits

0x69a9,	// (0x000161c8) slider_cont_pane_vc

0x69bb,	// (0x000161da) list_form_graphic_pane_cp_vc_ParamLimits

0x69bb,	// (0x000161da) list_form_graphic_pane_cp_vc

0x49c8,	// (0x000141e7) form_field_popup_wide_pane_vc_g1

0x69d0,	// (0x000161ef) form_field_popup_wide_pane_vc_t1_ParamLimits

0x69d0,	// (0x000161ef) form_field_popup_wide_pane_vc_t1

0x2aee,	// (0x0001230d) input_focus_pane_cp8_vc_ParamLimits

0x2aee,	// (0x0001230d) input_focus_pane_cp8_vc

0x69e7,	// (0x00016206) list_form_wide_pane_vc_ParamLimits

0x69e7,	// (0x00016206) list_form_wide_pane_vc

0x69f3,	// (0x00016212) list_form_graphic_pane_vc_g1

0x69fb,	// (0x0001621a) list_form_graphic_pane_vc_t1_ParamLimits

0x69fb,	// (0x0001621a) list_form_graphic_pane_vc_t1

0x1cb2,	// (0x000114d1) list_highlight_pane_cp5_vc_ParamLimits

0x1cb2,	// (0x000114d1) list_highlight_pane_cp5_vc

0x6a17,	// (0x00016236) list_form_graphic_pane_vc_ParamLimits

0x6a17,	// (0x00016236) list_form_graphic_pane_vc

0x49c8,	// (0x000141e7) form_field_popup_pane_vc_g1

0x6a2d,	// (0x0001624c) form_field_popup_pane_vc_t1_ParamLimits

0x6a2d,	// (0x0001624c) form_field_popup_pane_vc_t1

0x2aee,	// (0x0001230d) input_focus_pane_cp7_vc_ParamLimits

0x2aee,	// (0x0001230d) input_focus_pane_cp7_vc

0x6a44,	// (0x00016263) list_form_pane_vc_ParamLimits

0x6a44,	// (0x00016263) list_form_pane_vc

0x6a50,	// (0x0001626f) data_form_pane_vc_t1_ParamLimits

0x6a50,	// (0x0001626f) data_form_pane_vc_t1

0x2c2a,	// (0x00012449) input_focus_pane_vc_g1

0x2c32,	// (0x00012451) input_focus_pane_vc_g2

0x2c3a,	// (0x00012459) input_focus_pane_vc_g3

0x2c42,	// (0x00012461) input_focus_pane_vc_g4

0x2c4a,	// (0x00012469) input_focus_pane_vc_g5

0x2c52,	// (0x00012471) input_focus_pane_vc_g6

0x2c5a,	// (0x00012479) input_focus_pane_vc_g7

0x2c62,	// (0x00012481) input_focus_pane_vc_g8

0x2c6a,	// (0x00012489) input_focus_pane_vc_g9

0x1bc8,	// (0x000113e7) input_focus_pane_vc_g10

0x0009,

0xf6cb,	// (0x0001eeea) input_focus_pane_vc_g

0x49bc,	// (0x000141db) data_form_pane_vc_ParamLimits

0x49bc,	// (0x000141db) data_form_pane_vc

0x49c8,	// (0x000141e7) form_field_data_pane_vc_g1

0x6a6d,	// (0x0001628c) form_field_data_pane_vc_t1_ParamLimits

0x6a6d,	// (0x0001628c) form_field_data_pane_vc_t1

0x2aee,	// (0x0001230d) input_focus_pane_vc_ParamLimits

0x2aee,	// (0x0001230d) input_focus_pane_vc

0x6a87,	// (0x000162a6) button_value_adjust_pane_cp3_vc

0x6a8f,	// (0x000162ae) button_value_adjust_pane_cp5_vc

0x6a97,	// (0x000162b6) form_field_data_pane_vc_ParamLimits

0x6a97,	// (0x000162b6) form_field_data_pane_vc

0x6ab2,	// (0x000162d1) form_field_data_pane_vc_cp2

0x6aba,	// (0x000162d9) form_field_data_wide_pane_vc_ParamLimits

0x6aba,	// (0x000162d9) form_field_data_wide_pane_vc

0x6ad4,	// (0x000162f3) form_field_data_wide_pane_vc_cp2

0x6adc,	// (0x000162fb) form_field_popup_pane_vc_ParamLimits

0x6adc,	// (0x000162fb) form_field_popup_pane_vc

0x6af7,	// (0x00016316) form_field_popup_wide_pane_vc_ParamLimits

0x6af7,	// (0x00016316) form_field_popup_wide_pane_vc

0x6b11,	// (0x00016330) form_field_slider_pane_vc_ParamLimits

0x6b11,	// (0x00016330) form_field_slider_pane_vc

0x6b24,	// (0x00016343) form_field_slider_wide_pane_vc_ParamLimits

0x6b24,	// (0x00016343) form_field_slider_wide_pane_vc

0xda18,	// (0x0001d237) grid_touch_1_pane_ParamLimits

0xda18,	// (0x0001d237) grid_touch_1_pane

0xda2c,	// (0x0001d24b) grid_touch_2_pane_ParamLimits

0xda2c,	// (0x0001d24b) grid_touch_2_pane

0x6bfb,	// (0x0001641a) touch_pane_g1_ParamLimits

0x6bfb,	// (0x0001641a) touch_pane_g1

0x6b5d,	// (0x0001637c) cell_app_pane_cp_wide_ParamLimits

0x6b5d,	// (0x0001637c) cell_app_pane_cp_wide

0x6b6e,	// (0x0001638d) grid_popup_fast_wide_pane_ParamLimits

0x6b6e,	// (0x0001638d) grid_popup_fast_wide_pane

0x6b82,	// (0x000163a1) scroll_pane_cp19_ParamLimits

0x6b82,	// (0x000163a1) scroll_pane_cp19

0x1bd2,	// (0x000113f1) bg_popup_window_pane_cp20

0x6b96,	// (0x000163b5) listscroll_popup_fast_wide_pane

0x2e26,	// (0x00012645) grid_indicator_nsta_pane

0x6b9e,	// (0x000163bd) clock_nsta_pane_g1

0x6ba7,	// (0x000163c6) clock_nsta_pane_t1

0xda58,	// (0x0001d277) cell_indicator_nsta_pane_ParamLimits

0xda58,	// (0x0001d277) cell_indicator_nsta_pane

0x6bfb,	// (0x0001641a) cell_indicator_nsta_pane_g1

0xda75,	// (0x0001d294) cell_indicator_nsta_pane_g2

0x0001,

0xfada,	// (0x0001f2f9) cell_indicator_nsta_pane_g

0x6c1e,	// (0x0001643d) clock_nsta_pane_cp

0x6c26,	// (0x00016445) indicator_nsta_pane_cp

0x6c2e,	// (0x0001644d) nsta_clock_indic_pane_g1

0x1d98,	// (0x000115b7) grid_indicator_pane

0x31f8,	// (0x00012a17) scroll_pane_cp29

0x06b7,	// (0x0000fed6) indicator_nsta_pane_cp2_ParamLimits

0x06b7,	// (0x0000fed6) indicator_nsta_pane_cp2

0x1cb2,	// (0x000114d1) main_apps_wheel_pane

0x4bb6,	// (0x000143d5) form_midp_field_text_pane_ParamLimits

0x4d05,	// (0x00014524) scroll_bar_cp050_ParamLimits

0x6c66,	// (0x00016485) cell_indicator_pane_ParamLimits

0x6c66,	// (0x00016485) cell_indicator_pane

0x6c7e,	// (0x0001649d) cell_indicator_pane_g1

0xda8b,	// (0x0001d2aa) grid_wheel_folder_pane_ParamLimits

0xda8b,	// (0x0001d2aa) grid_wheel_folder_pane

0xda99,	// (0x0001d2b8) list_wheel_apps_pane_ParamLimits

0xda99,	// (0x0001d2b8) list_wheel_apps_pane

0xdaa7,	// (0x0001d2c6) main_apps_wheel_pane_g1_ParamLimits

0xdaa7,	// (0x0001d2c6) main_apps_wheel_pane_g1

0xdab7,	// (0x0001d2d6) main_apps_wheel_pane_g2_ParamLimits

0xdab7,	// (0x0001d2d6) main_apps_wheel_pane_g2

0x0001,

0xfae9,	// (0x0001f308) main_apps_wheel_pane_g_ParamLimits

0xfae9,	// (0x0001f308) main_apps_wheel_pane_g

0xdac7,	// (0x0001d2e6) main_apps_wheel_pane_t1_ParamLimits

0xdac7,	// (0x0001d2e6) main_apps_wheel_pane_t1

0xdadf,	// (0x0001d2fe) list_wheel_apps_pane_g1

0xdae7,	// (0x0001d306) list_wheel_apps_pane_g2

0xdaef,	// (0x0001d30e) list_wheel_apps_pane_g3

0xdaf7,	// (0x0001d316) list_wheel_apps_pane_g4

0xdaff,	// (0x0001d31e) list_wheel_apps_pane_g5

0x0004,

0xfaee,	// (0x0001f30d) list_wheel_apps_pane_g

0x37b6,	// (0x00012fd5) navi_icon_text_pane

0xd00e,	// (0x0001c82d) aid_fill_nsta

0xdb1c,	// (0x0001d33b) navi_icon_text_pane_g1

0xdb28,	// (0x0001d347) navi_icon_text_pane_t1

0xc7be,	// (0x0001bfdd) list_set_graphic_pane_t1_ParamLimits

0xc7be,	// (0x0001bfdd) list_set_graphic_pane_t1

0x5425,	// (0x00014c44) popup_midp_note_alarm_window_t6_ParamLimits

0x5425,	// (0x00014c44) popup_midp_note_alarm_window_t6

0x5437,	// (0x00014c56) popup_midp_note_alarm_window_t7_ParamLimits

0x5437,	// (0x00014c56) popup_midp_note_alarm_window_t7

0x5449,	// (0x00014c68) popup_midp_note_alarm_window_t8_ParamLimits

0x5449,	// (0x00014c68) popup_midp_note_alarm_window_t8

0x545b,	// (0x00014c7a) popup_midp_note_alarm_window_t9_ParamLimits

0x545b,	// (0x00014c7a) popup_midp_note_alarm_window_t9

0x546d,	// (0x00014c8c) popup_midp_note_alarm_window_t10_ParamLimits

0x546d,	// (0x00014c8c) popup_midp_note_alarm_window_t10

0x547f,	// (0x00014c9e) popup_midp_note_alarm_window_t11_ParamLimits

0x547f,	// (0x00014c9e) popup_midp_note_alarm_window_t11

0x5491,	// (0x00014cb0) scroll_pane_cp17_ParamLimits

0x5491,	// (0x00014cb0) scroll_pane_cp17

0x0b7f,	// (0x0001039e) volume_small_pane_cp_g1

0x0e90,	// (0x000106af) volume_small_pane_cp_g2

0x0e99,	// (0x000106b8) volume_small_pane_cp_g3

0x0ea2,	// (0x000106c1) volume_small_pane_cp_g4

0x0eab,	// (0x000106ca) volume_small_pane_cp_g5

0x0eb4,	// (0x000106d3) volume_small_pane_cp_g6

0x0ebd,	// (0x000106dc) volume_small_pane_cp_g7

0x0ec6,	// (0x000106e5) volume_small_pane_cp_g8

0x0ecf,	// (0x000106ee) volume_small_pane_cp_g9

0x0ed8,	// (0x000106f7) volume_small_pane_cp_g10

0x3a17,	// (0x00013236) midp_ticker_pane_g1_ParamLimits

0x3a23,	// (0x00013242) midp_ticker_pane_g2_ParamLimits

0xf793,	// (0x0001efb2) midp_ticker_pane_g_ParamLimits

0xc87e,	// (0x0001c09d) midp_ticker_pane_t1_ParamLimits

0xd02e,	// (0x0001c84d) aid_fill_nsta_2

0x4cf1,	// (0x00014510) list_form2_midp_pane

0x5eab,	// (0x000156ca) midp_editing_number_pane_ParamLimits

0x5eba,	// (0x000156d9) midp_ticker_pane_ParamLimits

0x6d77,	// (0x00016596) form2_midp_field_pane

0x6d9b,	// (0x000165ba) scroll_pane_cp51

0x6dbb,	// (0x000165da) form2_midp_button_pane_ParamLimits

0x6dbb,	// (0x000165da) form2_midp_button_pane

0x6dcd,	// (0x000165ec) form2_midp_content_pane_ParamLimits

0x6dcd,	// (0x000165ec) form2_midp_content_pane

0x6de7,	// (0x00016606) form2_midp_field_choice_group_pane

0x6def,	// (0x0001660e) form2_midp_field_pane_g1

0x6df7,	// (0x00016616) form2_midp_field_pane_g2

0x6dff,	// (0x0001661e) form2_midp_field_pane_g3

0x6e07,	// (0x00016626) form2_midp_field_pane_g4

0x0003,

0xfb13,	// (0x0001f332) form2_midp_field_pane_g

0x6e0f,	// (0x0001662e) form2_midp_gauge_slider_pane

0x6e17,	// (0x00016636) form2_midp_gauge_wait_pane

0x6e1f,	// (0x0001663e) form2_midp_image_pane_ParamLimits

0x6e1f,	// (0x0001663e) form2_midp_image_pane

0x6e3a,	// (0x00016659) form2_midp_label_pane_ParamLimits

0x6e3a,	// (0x00016659) form2_midp_label_pane

0xdb56,	// (0x0001d375) form2_midp_label_pane_cp_ParamLimits

0xdb56,	// (0x0001d375) form2_midp_label_pane_cp

0x6e7a,	// (0x00016699) form2_midp_string_pane_ParamLimits

0x6e7a,	// (0x00016699) form2_midp_string_pane

0xdb77,	// (0x0001d396) form2_midp_text_pane_ParamLimits

0xdb77,	// (0x0001d396) form2_midp_text_pane

0x6ead,	// (0x000166cc) form2_midp_time_pane

0x6ebd,	// (0x000166dc) input_focus_pane_cp51_ParamLimits

0x6ebd,	// (0x000166dc) input_focus_pane_cp51

0x6ed5,	// (0x000166f4) form2_midp_label_pane_t1_ParamLimits

0x6ed5,	// (0x000166f4) form2_midp_label_pane_t1

0xdb98,	// (0x0001d3b7) form2_mdip_text_pane_t1_ParamLimits

0xdb98,	// (0x0001d3b7) form2_mdip_text_pane_t1

0x6f3d,	// (0x0001675c) form2_midp_time_pane_t1

0x6f58,	// (0x00016777) form2_midp_gauge_slider_pane_t1

0xdbb7,	// (0x0001d3d6) form2_midp_gauge_slider_pane_t2

0xdbc9,	// (0x0001d3e8) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb1c,	// (0x0001f33b) form2_midp_gauge_slider_pane_t

0x6f8e,	// (0x000167ad) form2_midp_slider_pane

0x6f9a,	// (0x000167b9) form2_midp_gauge_wait_pane_t1

0x6fa8,	// (0x000167c7) form2_midp_wait_pane_ParamLimits

0x6fa8,	// (0x000167c7) form2_midp_wait_pane

0xd447,	// (0x0001cc66) list_single_2graphic_pane_cp4_ParamLimits

0xd447,	// (0x0001cc66) list_single_2graphic_pane_cp4

0xdbdb,	// (0x0001d3fa) list_single_midp_graphic_pane_cp_ParamLimits

0xdbdb,	// (0x0001d3fa) list_single_midp_graphic_pane_cp

0x1bd2,	// (0x000113f1) list_highlight_pane_cp20

0x6ff7,	// (0x00016816) list_single_2graphic_pane_g1_cp4

0x6376,	// (0x00015b95) list_single_2graphic_pane_g2_cp4

0x6fff,	// (0x0001681e) list_single_2graphic_pane_t1_cp4

0x1cb2,	// (0x000114d1) list_highlight_pane_cp21

0x700e,	// (0x0001682d) list_single_midp_graphic_pane_g4_cp

0x701d,	// (0x0001683c) list_single_midp_graphic_pane_t1_cp

0xdbfc,	// (0x0001d41b) form2_mdip_string_pane_t1_ParamLimits

0xdbfc,	// (0x0001d41b) form2_mdip_string_pane_t1

0x1bd2,	// (0x000113f1) bg_wml_button_pane_cp2

0x1bc8,	// (0x000113e7) form2_midp_image_pane_g1

0x279a,	// (0x00011fb9) list_double_large_graphic_pane_g5_ParamLimits

0x279a,	// (0x00011fb9) list_double_large_graphic_pane_g5

0xc7d6,	// (0x0001bff5) midp_form_pane_ParamLimits

0x1cb2,	// (0x000114d1) main_apps_wheel_pane_ParamLimits

0xcd26,	// (0x0001c545) popup_preview_window_ParamLimits

0xcd26,	// (0x0001c545) popup_preview_window

0x4294,	// (0x00013ab3) popup_touch_info_window_ParamLimits

0x4294,	// (0x00013ab3) popup_touch_info_window

0x42b6,	// (0x00013ad5) popup_touch_menu_window_ParamLimits

0x42b6,	// (0x00013ad5) popup_touch_menu_window

0x1bbe,	// (0x000113dd) bg_popup_sub_pane_cp6

0x70d7,	// (0x000168f6) list_touch_menu_pane

0x70df,	// (0x000168fe) list_single_touch_menu_pane_ParamLimits

0x70df,	// (0x000168fe) list_single_touch_menu_pane

0x70fa,	// (0x00016919) list_single_touch_menu_pane_t1

0x1cb2,	// (0x000114d1) bg_popup_sub_pane_cp7_ParamLimits

0x1cb2,	// (0x000114d1) bg_popup_sub_pane_cp7

0x7108,	// (0x00016927) heading_sub_pane

0x7110,	// (0x0001692f) list_touch_info_pane_ParamLimits

0x7110,	// (0x0001692f) list_touch_info_pane

0x711f,	// (0x0001693e) list_single_touch_info_pane_ParamLimits

0x711f,	// (0x0001693e) list_single_touch_info_pane

0x7131,	// (0x00016950) list_single_touch_info_pane_t1

0x713f,	// (0x0001695e) list_single_touch_info_pane_t2

0x0001,

0xfb2a,	// (0x0001f349) list_single_touch_info_pane_t

0x393a,	// (0x00013159) bg_popup_heading_pane_cp

0x714d,	// (0x0001696c) heading_sub_pane_t1

0x4956,	// (0x00014175) bg_popup_preview_window_pane_cp_ParamLimits

0x4956,	// (0x00014175) bg_popup_preview_window_pane_cp

0x7108,	// (0x00016927) heading_preview_pane

0x7110,	// (0x0001692f) list_preview_pane_ParamLimits

0x7110,	// (0x0001692f) list_preview_pane

0x715b,	// (0x0001697a) popup_preview_window_g1

0x711f,	// (0x0001693e) list_single_preview_pane_ParamLimits

0x711f,	// (0x0001693e) list_single_preview_pane

0x7163,	// (0x00016982) list_single_preview_pane_g1

0x716b,	// (0x0001698a) list_single_preview_pane_t1

0x7131,	// (0x00016950) list_single_preview_pane_t2

0x0001,

0xfb2f,	// (0x0001f34e) list_single_preview_pane_t

0x7179,	// (0x00016998) bg_popup_heading_pane_cp2_ParamLimits

0x7179,	// (0x00016998) bg_popup_heading_pane_cp2

0x718f,	// (0x000169ae) heading_preview_pane_g1

0x7197,	// (0x000169b6) heading_preview_pane_t1_ParamLimits

0x7197,	// (0x000169b6) heading_preview_pane_t1

0x1dbb,	// (0x000115da) soft_indicator_pane_t1_ParamLimits

0x24c6,	// (0x00011ce5) scroll_pane_ParamLimits

0x30f4,	// (0x00012913) scroll_sc2_left_pane

0x30fd,	// (0x0001291c) scroll_sc2_right_pane

0x311c,	// (0x0001293b) scroll_bg_pane_g1_ParamLimits

0x3131,	// (0x00012950) scroll_bg_pane_g2_ParamLimits

0x3149,	// (0x00012968) scroll_bg_pane_g3_ParamLimits

0xf722,	// (0x0001ef41) scroll_bg_pane_g_ParamLimits

0x311c,	// (0x0001293b) scroll_handle_pane_g1_ParamLimits

0x316b,	// (0x0001298a) scroll_handle_pane_g2_ParamLimits

0x3149,	// (0x00012968) scroll_handle_pane_g3_ParamLimits

0xf729,	// (0x0001ef48) scroll_handle_pane_g_ParamLimits

0x3cf8,	// (0x00013517) popup_choice_list_window_ParamLimits

0x3cf8,	// (0x00013517) popup_choice_list_window

0x4756,	// (0x00013f75) choice_list_pane

0x4806,	// (0x00014025) cell_toolbar_pane_t1

0x482e,	// (0x0001404d) toolbar_button_pane_ParamLimits

0x5961,	// (0x00015180) ai_gene_pane_1_t2_ParamLimits

0x5961,	// (0x00015180) ai_gene_pane_1_t2

0x0001,

0xf941,	// (0x0001f160) ai_gene_pane_1_t_ParamLimits

0xf941,	// (0x0001f160) ai_gene_pane_1_t

0x71b4,	// (0x000169d3) scroll_sc2_left_pane_g1

0x71b4,	// (0x000169d3) scroll_sc2_right_pane_g1

0x3cc8,	// (0x000134e7) bg_popup_sub_pane_cp10

0x71be,	// (0x000169dd) list_choice_list_pane

0x71d5,	// (0x000169f4) list_single_choice_list_pane_ParamLimits

0x71d5,	// (0x000169f4) list_single_choice_list_pane

0x71e9,	// (0x00016a08) list_single_choice_list_pane_g1

0x71f1,	// (0x00016a10) list_single_choice_list_pane_t1_ParamLimits

0x71f1,	// (0x00016a10) list_single_choice_list_pane_t1

0x7206,	// (0x00016a25) choice_list_pane_g1

0x720e,	// (0x00016a2d) choice_list_pane_t1

0x1bbe,	// (0x000113dd) input_focus_pane_cp11

0x2fce,	// (0x000127ed) title_pane_stacon_g2_ParamLimits

0x2fce,	// (0x000127ed) title_pane_stacon_g2

0x0002,

0xf708,	// (0x0001ef27) title_pane_stacon_g_ParamLimits

0xf708,	// (0x0001ef27) title_pane_stacon_g

0x393a,	// (0x00013159) cursor_press_pane

0xc9a7,	// (0x0001c1c6) popup_fep_hwr_window_ParamLimits

0xc9a7,	// (0x0001c1c6) popup_fep_hwr_window

0x3e38,	// (0x00013657) popup_fep_vkb_window_ParamLimits

0x3e38,	// (0x00013657) popup_fep_vkb_window

0x721c,	// (0x00016a3b) cursor_press_pane_g1

0x0002,

0xfb58,	// (0x0001f377) fep_vkb_side_pane_g_ParamLimits

0x0f1a,	// (0x00010739) fep_hwr_candidate_pane_ParamLimits

0x0f1a,	// (0x00010739) fep_hwr_candidate_pane

0x0f44,	// (0x00010763) fep_hwr_side_pane_ParamLimits

0x0f44,	// (0x00010763) fep_hwr_side_pane

0x0f66,	// (0x00010785) fep_hwr_top_pane_ParamLimits

0x0f66,	// (0x00010785) fep_hwr_top_pane

0x0f7e,	// (0x0001079d) fep_hwr_write_pane_ParamLimits

0x0f7e,	// (0x0001079d) fep_hwr_write_pane

0xfb58,	// (0x0001f377) fep_vkb_side_pane_g

0x7224,	// (0x00016a43) fep_hwr_top_pane_g1

0x7236,	// (0x00016a55) fep_hwr_top_pane_g2

0x0fb8,	// (0x000107d7) fep_hwr_top_pane_g3

0x0002,

0xfb34,	// (0x0001f353) fep_hwr_top_pane_g

0x0fcd,	// (0x000107ec) fep_hwr_top_text_pane

0x32c0,	// (0x00012adf) fep_hwr_top_text_pane_g1

0x726c,	// (0x00016a8b) fep_hwr_top_text_pane_t1

0x10d7,	// (0x000108f6) fep_hwr_candidate_pane_g1

0x74c5,	// (0x00016ce4) fep_vkb_keypad_pane_g3_ParamLimits

0x74c5,	// (0x00016ce4) fep_vkb_keypad_pane_g3

0x74f1,	// (0x00016d10) fep_vkb_keypad_pane_g4_ParamLimits

0x74f1,	// (0x00016d10) fep_vkb_keypad_pane_g4

0x7568,	// (0x00016d87) fep_vkb_bottom_pane_g2_ParamLimits

0x7568,	// (0x00016d87) fep_vkb_bottom_pane_g2

0x0001,

0xfb5f,	// (0x0001f37e) fep_vkb_bottom_pane_g_ParamLimits

0xfb5f,	// (0x0001f37e) fep_vkb_bottom_pane_g

0x71b4,	// (0x000169d3) cell_vkb_side_pane_g2

0x0001,

0xfb69,	// (0x0001f388) cell_vkb_side_pane_g

0x75f3,	// (0x00016e12) cell_vkb_side_pane_t1

0x7601,	// (0x00016e20) cell_vkb_side_pane_t1_copy1

0x71b4,	// (0x000169d3) bg_fep_vkb_candidate_pane_g2

0x7745,	// (0x00016f64) cell_vkb_candidate_pane_ParamLimits

0x727a,	// (0x00016a99) aid_size_cell_vkb_ParamLimits

0x727a,	// (0x00016a99) aid_size_cell_vkb

0x7745,	// (0x00016f64) cell_vkb_candidate_pane

0x10fe,	// (0x0001091d) bg_popup_fep_shadow_pane_g1

0xdc98,	// (0x0001d4b7) fep_vkb_bottom_pane_ParamLimits

0xdc98,	// (0x0001d4b7) fep_vkb_bottom_pane

0x7349,	// (0x00016b68) fep_vkb_candidate_pane_ParamLimits

0x7349,	// (0x00016b68) fep_vkb_candidate_pane

0xdcc4,	// (0x0001d4e3) fep_vkb_keypad_pane_ParamLimits

0xdcc4,	// (0x0001d4e3) fep_vkb_keypad_pane

0xdceb,	// (0x0001d50a) fep_vkb_side_pane_ParamLimits

0xdceb,	// (0x0001d50a) fep_vkb_side_pane

0xdd27,	// (0x0001d546) fep_vkb_top_pane_ParamLimits

0xdd27,	// (0x0001d546) fep_vkb_top_pane

0x7410,	// (0x00016c2f) fep_vkb_top_pane_g1_ParamLimits

0x7410,	// (0x00016c2f) fep_vkb_top_pane_g1

0x741f,	// (0x00016c3e) fep_vkb_top_pane_g2_ParamLimits

0x741f,	// (0x00016c3e) fep_vkb_top_pane_g2

0x742e,	// (0x00016c4d) fep_vkb_top_pane_g3_ParamLimits

0x742e,	// (0x00016c4d) fep_vkb_top_pane_g3

0x0003,

0xfb4f,	// (0x0001f36e) fep_vkb_top_pane_g_ParamLimits

0xfb4f,	// (0x0001f36e) fep_vkb_top_pane_g

0x744c,	// (0x00016c6b) fep_vkb_top_text_pane_ParamLimits

0x744c,	// (0x00016c6b) fep_vkb_top_text_pane

0xdd63,	// (0x0001d582) fep_vkb_side_pane_g1_ParamLimits

0xdd63,	// (0x0001d582) fep_vkb_side_pane_g1

0x74b4,	// (0x00016cd3) grid_vkb_side_pane_ParamLimits

0x74b4,	// (0x00016cd3) grid_vkb_side_pane

0x1106,	// (0x00010925) bg_popup_fep_shadow_pane_g2

0x110f,	// (0x0001092e) bg_popup_fep_shadow_pane_g3

0x1117,	// (0x00010936) bg_popup_fep_shadow_pane_g4

0x1120,	// (0x0001093f) bg_popup_fep_shadow_pane_g5

0x112a,	// (0x00010949) bg_popup_fep_shadow_pane_g6

0x1132,	// (0x00010951) bg_popup_fep_shadow_pane_g7

0x2c42,	// (0x00012461) bg_popup_fep_shadow_pane_g8

0x7513,	// (0x00016d32) grid_vkb_keypad_number_pane_ParamLimits

0x7513,	// (0x00016d32) grid_vkb_keypad_number_pane

0x7527,	// (0x00016d46) grid_vkb_keypad_pane_ParamLimits

0x7527,	// (0x00016d46) grid_vkb_keypad_pane

0x754d,	// (0x00016d6c) fep_vkb_bottom_pane_g1_ParamLimits

0x754d,	// (0x00016d6c) fep_vkb_bottom_pane_g1

0x7576,	// (0x00016d95) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7576,	// (0x00016d95) grid_vkb_keypad_bottom_left_pane

0x758b,	// (0x00016daa) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x758b,	// (0x00016daa) grid_vkb_keypad_bottom_right_pane

0x75a0,	// (0x00016dbf) fep_vkb_top_text_pane_g1

0xddaa,	// (0x0001d5c9) fep_vkb_top_text_pane_t1

0xddbc,	// (0x0001d5db) cell_vkb_side_pane_ParamLimits

0xddbc,	// (0x0001d5db) cell_vkb_side_pane

0x71b4,	// (0x000169d3) cell_vkb_side_pane_g1

0x760f,	// (0x00016e2e) cell_vkb_keypad_pane_ParamLimits

0x760f,	// (0x00016e2e) cell_vkb_keypad_pane

0x769c,	// (0x00016ebb) cell_vkb_keypad_pane_g1

0x0008,

0xfb7c,	// (0x0001f39b) bg_popup_fep_shadow_pane_g

0x1144,	// (0x00010963) cell_hwr_side_pane_g1

0x1144,	// (0x00010963) cell_hwr_side_pane_g2

0x76a6,	// (0x00016ec5) cell_vkb_keypad_pane_t1

0xddd2,	// (0x0001d5f1) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xddd2,	// (0x0001d5f1) cell_vkb_keypad_bottom_left_pane

0xdde7,	// (0x0001d606) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xdde7,	// (0x0001d606) cell_vkb_keypad_bottom_right_pane

0x71b4,	// (0x000169d3) cell_vkb_keypad_bottom_left_pane_g1

0x71b4,	// (0x000169d3) cell_vkb_keypad_bottom_right_pane_g1

0x770a,	// (0x00016f29) cell_vkb_keypad_number_pane_ParamLimits

0x770a,	// (0x00016f29) cell_vkb_keypad_number_pane

0x7729,	// (0x00016f48) cell_vkb_keypad_number_pane_g1

0x7733,	// (0x00016f52) cell_vkb_keypad_number_pane_g2

0x773c,	// (0x00016f5b) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb6e,	// (0x0001f38d) cell_vkb_keypad_number_pane_g

0x76a6,	// (0x00016ec5) cell_vkb_keypad_number_pane_t1

0x7766,	// (0x00016f85) fep_vkb_candidate_pane_g1

0x0001,

0xfb8f,	// (0x0001f3ae) cell_hwr_side_pane_g

0x777f,	// (0x00016f9e) cell_hwr_side_pane_t1

0x114e,	// (0x0001096d) cell_hwr_side_pane_t1_copy1

0x115c,	// (0x0001097b) cell_hwr_candidate_pane_g1

0x118b,	// (0x000109aa) cell_hwr_candidate_pane_t1

0x71b4,	// (0x000169d3) cell_vkb_candidate_pane_g2

0x77c3,	// (0x00016fe2) cell_vkb_candidate_pane_t1

0x0ee1,	// (0x00010700) bg_popup_fep_shadow_pane_ParamLimits

0x0ee1,	// (0x00010700) bg_popup_fep_shadow_pane

0x0f98,	// (0x000107b7) bg_fep_hwr_top_pane_g4

0x7248,	// (0x00016a67) bg_hwr_side_pane_g1_ParamLimits

0x7248,	// (0x00016a67) bg_hwr_side_pane_g1

0xb6d8,	// (0x0001aef7) cell_hwr_side_pane_ParamLimits

0xb6d8,	// (0x0001aef7) cell_hwr_side_pane

0x1048,	// (0x00010867) fep_hwr_write_pane_g1_ParamLimits

0x1048,	// (0x00010867) fep_hwr_write_pane_g1

0x1055,	// (0x00010874) fep_hwr_write_pane_g2_ParamLimits

0x1055,	// (0x00010874) fep_hwr_write_pane_g2

0x1062,	// (0x00010881) fep_hwr_write_pane_g3_ParamLimits

0x1062,	// (0x00010881) fep_hwr_write_pane_g3

0xb6f8,	// (0x0001af17) fep_hwr_write_pane_g4_ParamLimits

0xb6f8,	// (0x0001af17) fep_hwr_write_pane_g4

0x0005,

0xfb3b,	// (0x0001f35a) fep_hwr_write_pane_g_ParamLimits

0xfb3b,	// (0x0001f35a) fep_hwr_write_pane_g

0x0f98,	// (0x000107b7) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x0f98,	// (0x000107b7) bg_fep_hwr_candidate_pane_g2

0x1085,	// (0x000108a4) cell_hwr_candidate_pane_ParamLimits

0x1085,	// (0x000108a4) cell_hwr_candidate_pane

0x10d7,	// (0x000108f6) fep_hwr_candidate_pane_g1_ParamLimits

0x72a8,	// (0x00016ac7) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x72a8,	// (0x00016ac7) bg_popup_fep_shadow_pane_cp2

0x743e,	// (0x00016c5d) fep_vkb_top_pane_g4_ParamLimits

0x743e,	// (0x00016c5d) fep_vkb_top_pane_g4

0x7492,	// (0x00016cb1) fep_vkb_side_pane_g2_ParamLimits

0x7492,	// (0x00016cb1) fep_vkb_side_pane_g2

0xc24b,	// (0x0001ba6a) list_setting_pane_t4_ParamLimits

0xc24b,	// (0x0001ba6a) list_setting_pane_t4

0xc2c7,	// (0x0001bae6) list_setting_number_pane_t5_ParamLimits

0xc2c7,	// (0x0001bae6) list_setting_number_pane_t5

0x32f2,	// (0x00012b11) list_double_heading_pane_cp2_ParamLimits

0x32f2,	// (0x00012b11) list_double_heading_pane_cp2

0x2b14,	// (0x00012333) list_double_heading_pane_g1_cp2_ParamLimits

0x2b14,	// (0x00012333) list_double_heading_pane_g1_cp2

0x2b20,	// (0x0001233f) list_double_heading_pane_g2_cp2_ParamLimits

0x2b20,	// (0x0001233f) list_double_heading_pane_g2_cp2

0x77d1,	// (0x00016ff0) list_double_heading_pane_t1_cp2_ParamLimits

0x77d1,	// (0x00016ff0) list_double_heading_pane_t1_cp2

0x77e7,	// (0x00017006) list_double_heading_pane_t2_cp2_ParamLimits

0x77e7,	// (0x00017006) list_double_heading_pane_t2_cp2

0x1ba6,	// (0x000113c5) aid_value_unit2

0x0244,	// (0x0000fa63) popup_preview_fixed_window

0x1f56,	// (0x00011775) bg_popup_preview_window_pane_cp02

0x77f9,	// (0x00017018) list_preview_fixed_pane

0x783f,	// (0x0001705e) list_empty_pane_fp_ParamLimits

0x783f,	// (0x0001705e) list_empty_pane_fp

0x783f,	// (0x0001705e) list_single_cale_day_pane_fp_ParamLimits

0x783f,	// (0x0001705e) list_single_cale_day_pane_fp

0x783f,	// (0x0001705e) list_single_graphic_heading_pane_fp_ParamLimits

0x783f,	// (0x0001705e) list_single_graphic_heading_pane_fp

0x783f,	// (0x0001705e) list_single_graphic_pane_fp_ParamLimits

0x783f,	// (0x0001705e) list_single_graphic_pane_fp

0x783f,	// (0x0001705e) list_single_heading_pane_fp_ParamLimits

0x783f,	// (0x0001705e) list_single_heading_pane_fp

0x783f,	// (0x0001705e) list_single_pane_fp_ParamLimits

0x783f,	// (0x0001705e) list_single_pane_fp

0x7858,	// (0x00017077) list_single_pane_fp_g1_ParamLimits

0x7858,	// (0x00017077) list_single_pane_fp_g1

0x7864,	// (0x00017083) list_single_pane_fp_g2_ParamLimits

0x7864,	// (0x00017083) list_single_pane_fp_g2

0x7870,	// (0x0001708f) list_single_pane_fp_g3_ParamLimits

0x7870,	// (0x0001708f) list_single_pane_fp_g3

0x7884,	// (0x000170a3) list_single_pane_fp_g4_ParamLimits

0x7884,	// (0x000170a3) list_single_pane_fp_g4

0x0003,

0xfba2,	// (0x0001f3c1) list_single_pane_fp_g_ParamLimits

0xfba2,	// (0x0001f3c1) list_single_pane_fp_g

0x7890,	// (0x000170af) list_single_pane_fp_t1_ParamLimits

0x7890,	// (0x000170af) list_single_pane_fp_t1

0x78a7,	// (0x000170c6) list_single_graphic_pane_fp_g1_ParamLimits

0x78a7,	// (0x000170c6) list_single_graphic_pane_fp_g1

0x7858,	// (0x00017077) list_single_graphic_pane_fp_g2_ParamLimits

0x7858,	// (0x00017077) list_single_graphic_pane_fp_g2

0x7864,	// (0x00017083) list_single_graphic_pane_fp_g3_ParamLimits

0x7864,	// (0x00017083) list_single_graphic_pane_fp_g3

0x7870,	// (0x0001708f) list_single_graphic_pane_fp_g4_ParamLimits

0x7870,	// (0x0001708f) list_single_graphic_pane_fp_g4

0x7884,	// (0x000170a3) list_single_graphic_pane_fp_g5_ParamLimits

0x7884,	// (0x000170a3) list_single_graphic_pane_fp_g5

0x0004,

0xfbab,	// (0x0001f3ca) list_single_graphic_pane_fp_g_ParamLimits

0xfbab,	// (0x0001f3ca) list_single_graphic_pane_fp_g

0x78b3,	// (0x000170d2) list_single_graphic_pane_fp_t1_ParamLimits

0x78b3,	// (0x000170d2) list_single_graphic_pane_fp_t1

0x78a7,	// (0x000170c6) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x78a7,	// (0x000170c6) list_single_graphic_heading_pane_fp_g1

0x7858,	// (0x00017077) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7858,	// (0x00017077) list_single_graphic_heading_pane_fp_g2

0x7864,	// (0x00017083) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x7864,	// (0x00017083) list_single_graphic_heading_pane_fp_g3

0x7870,	// (0x0001708f) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x7870,	// (0x0001708f) list_single_graphic_heading_pane_fp_g4

0x7884,	// (0x000170a3) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7884,	// (0x000170a3) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfbab,	// (0x0001f3ca) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfbab,	// (0x0001f3ca) list_single_graphic_heading_pane_fp_g

0x78c9,	// (0x000170e8) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x78c9,	// (0x000170e8) list_single_graphic_heading_pane_fp_t1

0x78df,	// (0x000170fe) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x78df,	// (0x000170fe) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfbb6,	// (0x0001f3d5) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfbb6,	// (0x0001f3d5) list_single_graphic_heading_pane_fp_t

0x78f1,	// (0x00017110) list_single_cale_day_pane_fp_g1_ParamLimits

0x78f1,	// (0x00017110) list_single_cale_day_pane_fp_g1

0x7929,	// (0x00017148) list_single_cale_day_pane_fp_g2_ParamLimits

0x7929,	// (0x00017148) list_single_cale_day_pane_fp_g2

0x7935,	// (0x00017154) list_single_cale_day_pane_fp_g3_ParamLimits

0x7935,	// (0x00017154) list_single_cale_day_pane_fp_g3

0x795d,	// (0x0001717c) list_single_cale_day_pane_fp_g4_ParamLimits

0x795d,	// (0x0001717c) list_single_cale_day_pane_fp_g4

0x7981,	// (0x000171a0) list_single_cale_day_pane_fp_g5_ParamLimits

0x7981,	// (0x000171a0) list_single_cale_day_pane_fp_g5

0x0004,

0xfbbb,	// (0x0001f3da) list_single_cale_day_pane_fp_g_ParamLimits

0xfbbb,	// (0x0001f3da) list_single_cale_day_pane_fp_g

0x79a5,	// (0x000171c4) list_single_cale_day_pane_fp_t1_ParamLimits

0x79a5,	// (0x000171c4) list_single_cale_day_pane_fp_t1

0x79cb,	// (0x000171ea) list_single_cale_day_pane_fp_t2_ParamLimits

0x79cb,	// (0x000171ea) list_single_cale_day_pane_fp_t2

0x79e4,	// (0x00017203) list_single_cale_day_pane_fp_t3_ParamLimits

0x79e4,	// (0x00017203) list_single_cale_day_pane_fp_t3

0x0002,

0xfbc6,	// (0x0001f3e5) list_single_cale_day_pane_fp_t_ParamLimits

0xfbc6,	// (0x0001f3e5) list_single_cale_day_pane_fp_t

0x7858,	// (0x00017077) list_empty_pane_fp_g1_ParamLimits

0x7858,	// (0x00017077) list_empty_pane_fp_g1

0x79fd,	// (0x0001721c) list_empty_pane_fp_t1

0x7a0b,	// (0x0001722a) list_empty_pane_fp_t2

0x0001,

0xfbcd,	// (0x0001f3ec) list_empty_pane_fp_t

0x7858,	// (0x00017077) list_single_heading_pane_fp_g1_ParamLimits

0x7858,	// (0x00017077) list_single_heading_pane_fp_g1

0x7864,	// (0x00017083) list_single_heading_pane_fp_g2_ParamLimits

0x7864,	// (0x00017083) list_single_heading_pane_fp_g2

0x7870,	// (0x0001708f) list_single_heading_pane_fp_g3_ParamLimits

0x7870,	// (0x0001708f) list_single_heading_pane_fp_g3

0x0002,

0xfbd2,	// (0x0001f3f1) list_single_heading_pane_fp_g_ParamLimits

0xfbd2,	// (0x0001f3f1) list_single_heading_pane_fp_g

0x7a19,	// (0x00017238) list_single_heading_pane_fp_t1_ParamLimits

0x7a19,	// (0x00017238) list_single_heading_pane_fp_t1

0x7a2b,	// (0x0001724a) list_single_heading_pane_fp_t2_ParamLimits

0x7a2b,	// (0x0001724a) list_single_heading_pane_fp_t2

0x0001,

0xfbd9,	// (0x0001f3f8) list_single_heading_pane_fp_t_ParamLimits

0xfbd9,	// (0x0001f3f8) list_single_heading_pane_fp_t

0x2e65,	// (0x00012684) aid_size_cell_fast

0x1ec8,	// (0x000116e7) soft_indicator_pane_cp1_t1

0x2ea2,	// (0x000126c1) cell_app_pane_cp2_ParamLimits

0x2ea2,	// (0x000126c1) cell_app_pane_cp2

0x0f03,	// (0x00010722) fep_hwr_candidate_drop_down_list_pane

0x10f1,	// (0x00010910) fep_hwr_candidate_pane_g3_ParamLimits

0x10f1,	// (0x00010910) fep_hwr_candidate_pane_g3

0xeaed,	// (0x0001e30c) fep_hwr_candidate_pane_g4_ParamLimits

0xeaed,	// (0x0001e30c) fep_hwr_candidate_pane_g4

0x0002,

0xfb48,	// (0x0001f367) fep_hwr_candidate_pane_g_ParamLimits

0xfb48,	// (0x0001f367) fep_hwr_candidate_pane_g

0x7338,	// (0x00016b57) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x7338,	// (0x00016b57) fep_vkb_candidate_drop_down_list_pane

0x776e,	// (0x00016f8d) fep_vkb_candidate_pane_g3

0x7776,	// (0x00016f95) fep_vkb_candidate_pane_g4

0x0002,

0xfb75,	// (0x0001f394) fep_vkb_candidate_pane_g

0x115c,	// (0x0001097b) cell_hwr_candidate_pane_g1_ParamLimits

0x116a,	// (0x00010989) cell_hwr_candidate_pane_g3_ParamLimits

0x116a,	// (0x00010989) cell_hwr_candidate_pane_g3

0x9883,	// (0x000190a2) cell_hwr_candidate_pane_g4_ParamLimits

0x9883,	// (0x000190a2) cell_hwr_candidate_pane_g4

0x0002,

0xfb94,	// (0x0001f3b3) cell_hwr_candidate_pane_g_ParamLimits

0xfb94,	// (0x0001f3b3) cell_hwr_candidate_pane_g

0x778d,	// (0x00016fac) cell_vkb_candidate_pane_g3_ParamLimits

0x778d,	// (0x00016fac) cell_vkb_candidate_pane_g3

0x77a8,	// (0x00016fc7) cell_vkb_candidate_pane_g4_ParamLimits

0x77a8,	// (0x00016fc7) cell_vkb_candidate_pane_g4

0x7a41,	// (0x00017260) cell_app_pane_cp2_g1_ParamLimits

0x7a41,	// (0x00017260) cell_app_pane_cp2_g1

0x7a5f,	// (0x0001727e) cell_app_pane_cp2_g2_ParamLimits

0x7a5f,	// (0x0001727e) cell_app_pane_cp2_g2

0x0001,

0xfbde,	// (0x0001f3fd) cell_app_pane_cp2_g_ParamLimits

0xfbde,	// (0x0001f3fd) cell_app_pane_cp2_g

0x7a6b,	// (0x0001728a) cell_app_pane_cp2_t1_ParamLimits

0x7a6b,	// (0x0001728a) cell_app_pane_cp2_t1

0x2aee,	// (0x0001230d) grid_highlight_pane_cp1_ParamLimits

0x2aee,	// (0x0001230d) grid_highlight_pane_cp1

0x11a9,	// (0x000109c8) cell_hwr_candidate_pane_cp1_ParamLimits

0x11a9,	// (0x000109c8) cell_hwr_candidate_pane_cp1

0x115c,	// (0x0001097b) fep_hwr_candidate_drop_down_list_pane_g1

0x11cd,	// (0x000109ec) fep_hwr_candidate_drop_down_list_pane_g2

0x11da,	// (0x000109f9) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbe3,	// (0x0001f402) fep_hwr_candidate_drop_down_list_pane_g

0x11e7,	// (0x00010a06) fep_hwr_candidate_drop_down_list_scroll_pane

0x11f0,	// (0x00010a0f) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x11f0,	// (0x00010a0f) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x11fd,	// (0x00010a1c) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x11fd,	// (0x00010a1c) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x120a,	// (0x00010a29) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x120a,	// (0x00010a29) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x1217,	// (0x00010a36) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x1217,	// (0x00010a36) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x1232,	// (0x00010a51) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x1232,	// (0x00010a51) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x124d,	// (0x00010a6c) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x124d,	// (0x00010a6c) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x1268,	// (0x00010a87) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x1268,	// (0x00010a87) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x1283,	// (0x00010aa2) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x1283,	// (0x00010aa2) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbea,	// (0x0001f409) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbea,	// (0x0001f409) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7a7d,	// (0x0001729c) cell_vkb_candidate_pane_cp1_ParamLimits

0x7a7d,	// (0x0001729c) cell_vkb_candidate_pane_cp1

0x743e,	// (0x00016c5d) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x743e,	// (0x00016c5d) fep_vkb_candidate_drop_down_list_pane_g1

0x7aa3,	// (0x000172c2) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7aa3,	// (0x000172c2) fep_vkb_candidate_drop_down_list_pane_g2

0x7ab0,	// (0x000172cf) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7ab0,	// (0x000172cf) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbfb,	// (0x0001f41a) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbfb,	// (0x0001f41a) fep_vkb_candidate_drop_down_list_pane_g

0x7abd,	// (0x000172dc) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x7abd,	// (0x000172dc) fep_vkb_candidate_drop_down_list_scroll_pane

0x7aca,	// (0x000172e9) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7aca,	// (0x000172e9) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7ad7,	// (0x000172f6) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7ad7,	// (0x000172f6) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x7ae3,	// (0x00017302) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7ae3,	// (0x00017302) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x7aef,	// (0x0001730e) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7aef,	// (0x0001730e) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x7b10,	// (0x0001732f) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7b10,	// (0x0001732f) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x7b31,	// (0x00017350) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7b31,	// (0x00017350) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x7b52,	// (0x00017371) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7b52,	// (0x00017371) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7b73,	// (0x00017392) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7b73,	// (0x00017392) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfc02,	// (0x0001f421) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfc02,	// (0x0001f421) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xbb52,	// (0x0001b371) title_pane_g1_ParamLimits

0xbb63,	// (0x0001b382) title_pane_g2_ParamLimits

0xf592,	// (0x0001edb1) title_pane_g_ParamLimits

0x32b0,	// (0x00012acf) aid_call2_pane

0x32b8,	// (0x00012ad7) aid_call_pane

0x32c0,	// (0x00012adf) popup_clock_analogue_window_g1

0x32c0,	// (0x00012adf) popup_clock_analogue_window_g2

0x05b6,	// (0x0000fdd5) popup_clock_analogue_window_g3

0x05bf,	// (0x0000fdde) popup_clock_analogue_window_g4

0x1bc8,	// (0x000113e7) popup_clock_analogue_window_g5

0x0004,

0xf737,	// (0x0001ef56) popup_clock_analogue_window_g

0x05c7,	// (0x0000fde6) popup_clock_analogue_window_t1

0x05d5,	// (0x0000fdf4) clock_digital_number_pane_ParamLimits

0x05d5,	// (0x0000fdf4) clock_digital_number_pane

0x05e1,	// (0x0000fe00) clock_digital_number_pane_cp02_ParamLimits

0x05e1,	// (0x0000fe00) clock_digital_number_pane_cp02

0x05ed,	// (0x0000fe0c) clock_digital_number_pane_cp03_ParamLimits

0x05ed,	// (0x0000fe0c) clock_digital_number_pane_cp03

0x05f9,	// (0x0000fe18) clock_digital_number_pane_cp04_ParamLimits

0x05f9,	// (0x0000fe18) clock_digital_number_pane_cp04

0x0605,	// (0x0000fe24) clock_digital_separator_pane_ParamLimits

0x0605,	// (0x0000fe24) clock_digital_separator_pane

0x0611,	// (0x0000fe30) popup_clock_digital_window_t1_ParamLimits

0x0611,	// (0x0000fe30) popup_clock_digital_window_t1

0x1bc8,	// (0x000113e7) clock_digital_number_pane_g1

0x1bc8,	// (0x000113e7) clock_digital_number_pane_g2

0x0001,

0xf742,	// (0x0001ef61) clock_digital_number_pane_g

0x1bc8,	// (0x000113e7) clock_digital_separator_pane_g1

0x1bc8,	// (0x000113e7) clock_digital_separator_pane_g2

0x0001,

0xf742,	// (0x0001ef61) clock_digital_separator_pane_g

0xd00e,	// (0x0001c82d) aid_fill_nsta_ParamLimits

0xd13f,	// (0x0001c95e) indicator_nsta_pane_ParamLimits

0x45e3,	// (0x00013e02) popup_clock_analogue_window

0x45e3,	// (0x00013e02) popup_clock_digital_window

0x2e26,	// (0x00012645) grid_indicator_nsta_pane_ParamLimits

0x6bb5,	// (0x000163d4) clock_nsta_pane_t2

0x0001,

0xfad5,	// (0x0001f2f4) clock_nsta_pane_t

0x057a,	// (0x0000fd99) aid_size_max_handle

0xb3aa,	// (0x0001abc9) aid_size_min_handle

0x393a,	// (0x00013159) editor_scroll_pane

0x7b8e,	// (0x000173ad) ex_editor_pane

0x2dd2,	// (0x000125f1) scroll_pane_cp13

0x24f2,	// (0x00011d11) scroll_pane_cp14

0x32ea,	// (0x00012b09) scroll_pane_cp36

0xc676,	// (0x0001be95) list_single_graphic_hl_pane_cp2_ParamLimits

0xc676,	// (0x0001be95) list_single_graphic_hl_pane_cp2

0xd8f4,	// (0x0001d113) list_single_graphic_hl_pane_ParamLimits

0xd8f4,	// (0x0001d113) list_single_graphic_hl_pane

0x7b96,	// (0x000173b5) aid_size_min_hl_cp1

0x7b9f,	// (0x000173be) list_highlight_pane_cp34_ParamLimits

0x7b9f,	// (0x000173be) list_highlight_pane_cp34

0x7bb0,	// (0x000173cf) list_single_graphic_hl_pane_g1_ParamLimits

0x7bb0,	// (0x000173cf) list_single_graphic_hl_pane_g1

0x24fa,	// (0x00011d19) list_single_graphic_hl_pane_g2_ParamLimits

0x24fa,	// (0x00011d19) list_single_graphic_hl_pane_g2

0x24fa,	// (0x00011d19) list_single_graphic_hl_pane_g3_ParamLimits

0x24fa,	// (0x00011d19) list_single_graphic_hl_pane_g3

0x2506,	// (0x00011d25) list_single_graphic_hl_pane_g4_ParamLimits

0x2506,	// (0x00011d25) list_single_graphic_hl_pane_g4

0x7c23,	// (0x00017442) list_single_graphic_hl_pane_g5_ParamLimits

0x7c23,	// (0x00017442) list_single_graphic_hl_pane_g5

0x0004,

0xfc13,	// (0x0001f432) list_single_graphic_hl_pane_g_ParamLimits

0xfc13,	// (0x0001f432) list_single_graphic_hl_pane_g

0xde02,	// (0x0001d621) list_single_graphic_hl_pane_t1_ParamLimits

0xde02,	// (0x0001d621) list_single_graphic_hl_pane_t1

0x7bf3,	// (0x00017412) aid_size_min_hl_cp2

0x7bfc,	// (0x0001741b) list_highlight_pane_cp34_cp2_ParamLimits

0x7bfc,	// (0x0001741b) list_highlight_pane_cp34_cp2

0x7bb0,	// (0x000173cf) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7bb0,	// (0x000173cf) list_single_graphic_hl_pane_g1_cp2

0x7c09,	// (0x00017428) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x7c09,	// (0x00017428) list_single_graphic_hl_pane_g2_cp2

0x7c15,	// (0x00017434) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x7c15,	// (0x00017434) list_single_graphic_hl_pane_g3_cp2

0x2506,	// (0x00011d25) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x2506,	// (0x00011d25) list_single_graphic_hl_pane_g4_cp2

0x7c23,	// (0x00017442) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x7c23,	// (0x00017442) list_single_graphic_hl_pane_g5_cp2

0xb3dc,	// (0x0001abfb) control_pane_g4_ParamLimits

0xb3dc,	// (0x0001abfb) control_pane_g4

0x3cc8,	// (0x000134e7) bg_popup_sub_pane_cp10_ParamLimits

0x71be,	// (0x000169dd) list_choice_list_pane_ParamLimits

0x71cd,	// (0x000169ec) scroll_pane_cp23

0x1f56,	// (0x00011775) bg_popup_preview_window_pane_cp02_ParamLimits

0x77f9,	// (0x00017018) list_preview_fixed_pane_ParamLimits

0x780f,	// (0x0001702e) list_preview_fixed_pane_cp_ParamLimits

0x780f,	// (0x0001702e) list_preview_fixed_pane_cp

0x781b,	// (0x0001703a) popup_preview_fixed_window_g1_ParamLimits

0x781b,	// (0x0001703a) popup_preview_fixed_window_g1

0x7827,	// (0x00017046) popup_preview_fixed_window_g2_ParamLimits

0x7827,	// (0x00017046) popup_preview_fixed_window_g2

0x0002,

0xfb9b,	// (0x0001f3ba) popup_preview_fixed_window_g_ParamLimits

0xfb9b,	// (0x0001f3ba) popup_preview_fixed_window_g

0x04ec,	// (0x0000fd0b) aid_navi_side_left_pane_ParamLimits

0x0501,	// (0x0000fd20) aid_navi_side_right_pane_ParamLimits

0x0519,	// (0x0000fd38) navi_icon_pane_stacon_ParamLimits

0x052d,	// (0x0000fd4c) navi_navi_pane_stacon_ParamLimits

0x0519,	// (0x0000fd38) navi_text_pane_stacon_ParamLimits

0x1bbe,	// (0x000113dd) main_text_info_pane

0x7c4d,	// (0x0001746c) listscroll_text_info_pane

0x7c55,	// (0x00017474) list_text_info_pane_ParamLimits

0x7c55,	// (0x00017474) list_text_info_pane

0x7c64,	// (0x00017483) scroll_pane_cp24_ParamLimits

0x7c64,	// (0x00017483) scroll_pane_cp24

0xde18,	// (0x0001d637) list_text_info_pane_t1_ParamLimits

0xde18,	// (0x0001d637) list_text_info_pane_t1

0xc90b,	// (0x0001c12a) popup_fast_swap2_window_ParamLimits

0xc90b,	// (0x0001c12a) popup_fast_swap2_window

0x7ca7,	// (0x000174c6) aid_size_cell_fast2

0x1bbe,	// (0x000113dd) bg_popup_window_pane_cp17

0x4d1d,	// (0x0001453c) heading_pane_cp2

0x21b6,	// (0x000119d5) listscroll_fast2_pane

0x7cb1,	// (0x000174d0) grid_fast2_pane

0x7cbb,	// (0x000174da) listscroll_fast2_pane_g1

0x7cc5,	// (0x000174e4) listscroll_fast2_pane_g2

0x0001,

0xfc1e,	// (0x0001f43d) listscroll_fast2_pane_g

0x2dd2,	// (0x000125f1) scroll_pane_cp26

0x7ccf,	// (0x000174ee) cell_fast2_pane_ParamLimits

0x7ccf,	// (0x000174ee) cell_fast2_pane

0x7ce6,	// (0x00017505) cell_fast2_pane_g1

0x7cef,	// (0x0001750e) cell_fast2_pane_g2

0x7cf8,	// (0x00017517) cell_fast2_pane_g3

0x0002,

0xfc23,	// (0x0001f442) cell_fast2_pane_g

0x22af,	// (0x00011ace) grid_highlight_pane_cp9

0x22c4,	// (0x00011ae3) main_eswt_pane_ParamLimits

0x22c4,	// (0x00011ae3) main_eswt_pane

0x7c79,	// (0x00017498) list_single_text_info_pane

0x7d00,	// (0x0001751f) eswt_ctrl_button_pane

0x7d00,	// (0x0001751f) eswt_ctrl_canvas_pane

0x7d08,	// (0x00017527) eswt_ctrl_combo_pane

0x7d00,	// (0x0001751f) eswt_ctrl_default_pane

0x7d00,	// (0x0001751f) eswt_ctrl_label_pane

0x7d10,	// (0x0001752f) eswt_ctrl_wait_pane

0x7d18,	// (0x00017537) eswt_shell_pane

0x1bbe,	// (0x000113dd) listscroll_eswt_app_pane

0x7d38,	// (0x00017557) popup_eswt_tasktip_window_ParamLimits

0x7d38,	// (0x00017557) popup_eswt_tasktip_window

0x4956,	// (0x00014175) bg_popup_window_pane_cp18

0x7d49,	// (0x00017568) eswt_control_pane_g1_ParamLimits

0x7d49,	// (0x00017568) eswt_control_pane_g1

0x7d56,	// (0x00017575) eswt_control_pane_g2_ParamLimits

0x7d56,	// (0x00017575) eswt_control_pane_g2

0x7d63,	// (0x00017582) eswt_control_pane_g3_ParamLimits

0x7d63,	// (0x00017582) eswt_control_pane_g3

0x7d70,	// (0x0001758f) eswt_control_pane_g4_ParamLimits

0x7d70,	// (0x0001758f) eswt_control_pane_g4

0x0003,

0xfc2a,	// (0x0001f449) eswt_control_pane_g_ParamLimits

0xfc2a,	// (0x0001f449) eswt_control_pane_g

0x2aee,	// (0x0001230d) bg_button_pane_ParamLimits

0x2aee,	// (0x0001230d) bg_button_pane

0x22c4,	// (0x00011ae3) common_borders_pane_copy2_ParamLimits

0x22c4,	// (0x00011ae3) common_borders_pane_copy2

0x7d7d,	// (0x0001759c) control_button_pane_g1_ParamLimits

0x7d7d,	// (0x0001759c) control_button_pane_g1

0x7d89,	// (0x000175a8) control_button_pane_g2_ParamLimits

0x7d89,	// (0x000175a8) control_button_pane_g2

0x7d95,	// (0x000175b4) control_button_pane_g3_ParamLimits

0x7d95,	// (0x000175b4) control_button_pane_g3

0x0002,

0xfc33,	// (0x0001f452) control_button_pane_g_ParamLimits

0xfc33,	// (0x0001f452) control_button_pane_g

0x7da9,	// (0x000175c8) control_button_pane_t1

0x7db7,	// (0x000175d6) control_button_pane_t2

0x0001,

0xfc3a,	// (0x0001f459) control_button_pane_t

0x483a,	// (0x00014059) bg_button_pane_g1

0x484a,	// (0x00014069) bg_button_pane_g2

0x4842,	// (0x00014061) bg_button_pane_g3

0x485a,	// (0x00014079) bg_button_pane_g4

0x4852,	// (0x00014071) bg_button_pane_g5

0x4862,	// (0x00014081) bg_button_pane_g6

0x486a,	// (0x00014089) bg_button_pane_g7

0x487a,	// (0x00014099) bg_button_pane_g8

0x4872,	// (0x00014091) bg_button_pane_g9

0x0008,

0xf895,	// (0x0001f0b4) bg_button_pane_g

0x7179,	// (0x00016998) common_borders_pane_ParamLimits

0x7179,	// (0x00016998) common_borders_pane

0x7d49,	// (0x00017568) eswt_control_pane_g1_copy1_ParamLimits

0x7d49,	// (0x00017568) eswt_control_pane_g1_copy1

0x7d56,	// (0x00017575) eswt_control_pane_g2_copy1_ParamLimits

0x7d56,	// (0x00017575) eswt_control_pane_g2_copy1

0x7d63,	// (0x00017582) eswt_control_pane_g3_copy1_ParamLimits

0x7d63,	// (0x00017582) eswt_control_pane_g3_copy1

0x7d70,	// (0x0001758f) eswt_control_pane_g4_copy1_ParamLimits

0x7d70,	// (0x0001758f) eswt_control_pane_g4_copy1

0x71b4,	// (0x000169d3) bg_eswt_ctrl_canvas_pane_g1

0x7179,	// (0x00016998) common_borders_pane_cp2_ParamLimits

0x7179,	// (0x00016998) common_borders_pane_cp2

0x7179,	// (0x00016998) common_borders_pane_cp3_ParamLimits

0x7179,	// (0x00016998) common_borders_pane_cp3

0x7dc5,	// (0x000175e4) separator_horizontal_pane

0x7dcd,	// (0x000175ec) separator_vertical_pane

0x7d49,	// (0x00017568) eswt_control_pane_g1_copy2_ParamLimits

0x7d49,	// (0x00017568) eswt_control_pane_g1_copy2

0x7d56,	// (0x00017575) eswt_control_pane_g2_copy2_ParamLimits

0x7d56,	// (0x00017575) eswt_control_pane_g2_copy2

0x7d63,	// (0x00017582) eswt_control_pane_g3_copy2_ParamLimits

0x7d63,	// (0x00017582) eswt_control_pane_g3_copy2

0x7d70,	// (0x0001758f) eswt_control_pane_g4_copy2_ParamLimits

0x7d70,	// (0x0001758f) eswt_control_pane_g4_copy2

0x1bbe,	// (0x000113dd) common_borders_pane_cp4

0x7dd6,	// (0x000175f5) separator_horizontal_pane_g1

0x7ddf,	// (0x000175fe) separator_horizontal_pane_g2

0x7de8,	// (0x00017607) separator_horizontal_pane_g3

0x0002,

0xfc3f,	// (0x0001f45e) separator_horizontal_pane_g

0x7d49,	// (0x00017568) eswt_control_pane_g1_copy3_ParamLimits

0x7d49,	// (0x00017568) eswt_control_pane_g1_copy3

0x7d56,	// (0x00017575) eswt_control_pane_g2_copy3_ParamLimits

0x7d56,	// (0x00017575) eswt_control_pane_g2_copy3

0x7d63,	// (0x00017582) eswt_control_pane_g3_copy3_ParamLimits

0x7d63,	// (0x00017582) eswt_control_pane_g3_copy3

0x7d70,	// (0x0001758f) eswt_control_pane_g4_copy3_ParamLimits

0x7d70,	// (0x0001758f) eswt_control_pane_g4_copy3

0x1bbe,	// (0x000113dd) common_borders_pane_cp5

0x7df1,	// (0x00017610) separator_vertical_pane_g1

0x7dfa,	// (0x00017619) separator_vertical_pane_g2

0x7e03,	// (0x00017622) separator_vertical_pane_g3

0x0002,

0xfc46,	// (0x0001f465) separator_vertical_pane_g

0x7d49,	// (0x00017568) eswt_control_pane_g1_copy4_ParamLimits

0x7d49,	// (0x00017568) eswt_control_pane_g1_copy4

0x7d56,	// (0x00017575) eswt_control_pane_g2_copy4_ParamLimits

0x7d56,	// (0x00017575) eswt_control_pane_g2_copy4

0x7d63,	// (0x00017582) eswt_control_pane_g3_copy4_ParamLimits

0x7d63,	// (0x00017582) eswt_control_pane_g3_copy4

0x7d70,	// (0x0001758f) eswt_control_pane_g4_copy4_ParamLimits

0x7d70,	// (0x0001758f) eswt_control_pane_g4_copy4

0xde3a,	// (0x0001d659) eswt_ctrl_combo_button_pane

0xde42,	// (0x0001d661) eswt_ctrl_input_pane

0xde4a,	// (0x0001d669) popup_choice_list_window_cp70

0xde52,	// (0x0001d671) eswt_ctrl_input_pane_t1

0x1bbe,	// (0x000113dd) input_focus_pane_cp70

0x7179,	// (0x00016998) bg_button_pane_cp70_ParamLimits

0x7179,	// (0x00016998) bg_button_pane_cp70

0xde60,	// (0x0001d67f) eswt_ctrl_combo_button_pane_g1

0x7e3a,	// (0x00017659) wait_bar_pane_cp70

0x4956,	// (0x00014175) bg_popup_window_pane_cp70_ParamLimits

0x4956,	// (0x00014175) bg_popup_window_pane_cp70

0x7e42,	// (0x00017661) popup_eswt_tasktip_window_t1

0x7e58,	// (0x00017677) wait_bar_pane_cp71_ParamLimits

0x7e58,	// (0x00017677) wait_bar_pane_cp71

0x7e64,	// (0x00017683) grid_eswt_app_pane

0x30f4,	// (0x00012913) scroll_pane_cp70

0xde68,	// (0x0001d687) cell_eswt_app_pane_ParamLimits

0xde68,	// (0x0001d687) cell_eswt_app_pane

0xde9a,	// (0x0001d6b9) cell_eswt_app_pane_g1_ParamLimits

0xde9a,	// (0x0001d6b9) cell_eswt_app_pane_g1

0xdec9,	// (0x0001d6e8) cell_eswt_app_pane_g2_ParamLimits

0xdec9,	// (0x0001d6e8) cell_eswt_app_pane_g2

0x0001,

0xfc4d,	// (0x0001f46c) cell_eswt_app_pane_g_ParamLimits

0xfc4d,	// (0x0001f46c) cell_eswt_app_pane_g

0xdef2,	// (0x0001d711) cell_eswt_app_pane_t1_ParamLimits

0xdef2,	// (0x0001d711) cell_eswt_app_pane_t1

0x7f29,	// (0x00017748) grid_highlight_pane_cp70_ParamLimits

0x7f29,	// (0x00017748) grid_highlight_pane_cp70

0x5e0d,	// (0x0001562c) set_content_pane_g1

0x3bea,	// (0x00013409) status_small_volume_pane

0x129e,	// (0x00010abd) status_small_volume_pane_g1

0x12a6,	// (0x00010ac5) volume_small2_pane

0x12af,	// (0x00010ace) volume_small2_pane_g1

0x12b8,	// (0x00010ad7) volume_small2_pane_g2

0x12c1,	// (0x00010ae0) volume_small2_pane_g3

0x12ca,	// (0x00010ae9) volume_small2_pane_g4

0x12d3,	// (0x00010af2) volume_small2_pane_g5

0x12dc,	// (0x00010afb) volume_small2_pane_g6

0x12e5,	// (0x00010b04) volume_small2_pane_g7

0x12ee,	// (0x00010b0d) volume_small2_pane_g8

0x12f7,	// (0x00010b16) volume_small2_pane_g9

0x1300,	// (0x00010b1f) volume_small2_pane_g10

0x0009,

0xfc52,	// (0x0001f471) volume_small2_pane_g

0x75a0,	// (0x00016dbf) fep_vkb_top_text_pane_g1_ParamLimits

0xddaa,	// (0x0001d5c9) fep_vkb_top_text_pane_t1_ParamLimits

0x7833,	// (0x00017052) popup_preview_fixed_window_g3_ParamLimits

0x7833,	// (0x00017052) popup_preview_fixed_window_g3

0xcfa1,	// (0x0001c7c0) popup_toolbar_trans_pane

0xd713,	// (0x0001cf32) aid_height_set_list_ParamLimits

0x5cc3,	// (0x000154e2) aid_size_parent_ParamLimits

0x3cc8,	// (0x000134e7) list_highlight_pane_cp2_ParamLimits

0x5e0d,	// (0x0001562c) set_content_pane_g1_ParamLimits

0xd908,	// (0x0001d127) list_single_image_pane_ParamLimits

0xd908,	// (0x0001d127) list_single_image_pane

0xdf24,	// (0x0001d743) aid_size_cell_image_ParamLimits

0xdf24,	// (0x0001d743) aid_size_cell_image

0xdf31,	// (0x0001d750) grid_single_image_pane_ParamLimits

0xdf31,	// (0x0001d750) grid_single_image_pane

0x2b14,	// (0x00012333) list_single_image_pane_g1_ParamLimits

0x2b14,	// (0x00012333) list_single_image_pane_g1

0x2b20,	// (0x0001233f) list_single_image_pane_g2_ParamLimits

0x2b20,	// (0x0001233f) list_single_image_pane_g2

0x0001,

0xfc67,	// (0x0001f486) list_single_image_pane_g_ParamLimits

0xfc67,	// (0x0001f486) list_single_image_pane_g

0x7f50,	// (0x0001776f) list_single_image_pane_t1_ParamLimits

0x7f50,	// (0x0001776f) list_single_image_pane_t1

0xdf3f,	// (0x0001d75e) cell_image_list_pane_ParamLimits

0xdf3f,	// (0x0001d75e) cell_image_list_pane

0xdf59,	// (0x0001d778) cell_image_list_pane_g1

0xdf62,	// (0x0001d781) cell_image_list_pane_g2

0x0001,

0xfc6c,	// (0x0001f48b) cell_image_list_pane_g

0x7f8e,	// (0x000177ad) aid_size_cell_tb_trans_pane

0x2aee,	// (0x0001230d) bg_tb_trans_pane

0x7fa0,	// (0x000177bf) grid_tb_trans_pane

0x483a,	// (0x00014059) bg_tb_trans_pane_g1

0x484a,	// (0x00014069) bg_tb_trans_pane_g2

0x4842,	// (0x00014061) bg_tb_trans_pane_g3

0x485a,	// (0x00014079) bg_tb_trans_pane_g4

0x4852,	// (0x00014071) bg_tb_trans_pane_g5

0x487a,	// (0x00014099) bg_tb_trans_pane_g6

0x4872,	// (0x00014091) bg_tb_trans_pane_g7

0x4862,	// (0x00014081) bg_tb_trans_pane_g8

0x486a,	// (0x00014089) bg_tb_trans_pane_g9

0x0008,

0xfc71,	// (0x0001f490) bg_tb_trans_pane_g

0x7fb4,	// (0x000177d3) cell_toolbar_trans_pane_ParamLimits

0x7fb4,	// (0x000177d3) cell_toolbar_trans_pane

0x71b4,	// (0x000169d3) cell_toolbar_trans_pane_g1

0xdb3a,	// (0x0001d359) list_form2_midp_pane_t1

0xdb48,	// (0x0001d367) list_form2_midp_pane_t2

0x0001,

0xfb0e,	// (0x0001f32d) list_form2_midp_pane_t

0x6d9b,	// (0x000165ba) scroll_pane_cp51_ParamLimits

0x6fb8,	// (0x000167d7) form2_midp_wait_pane_g1

0x6fc1,	// (0x000167e0) form2_midp_wait_pane_g2

0x6fca,	// (0x000167e9) form2_midp_wait_pane_g3

0x0002,

0xfb23,	// (0x0001f342) form2_midp_wait_pane_g

0x1cb2,	// (0x000114d1) list_highlight_pane_cp21_ParamLimits

0x700e,	// (0x0001682d) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x701d,	// (0x0001683c) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x5ef0,	// (0x0001570f) list_single_2graphic_im_pane_ParamLimits

0x5ef0,	// (0x0001570f) list_single_2graphic_im_pane

0xdf6b,	// (0x0001d78a) list_single_2graphic_im_pane_g1_ParamLimits

0xdf6b,	// (0x0001d78a) list_single_2graphic_im_pane_g1

0xdf7c,	// (0x0001d79b) list_single_2graphic_im_pane_g2_ParamLimits

0xdf7c,	// (0x0001d79b) list_single_2graphic_im_pane_g2

0xdf88,	// (0x0001d7a7) list_single_2graphic_im_pane_g3_ParamLimits

0xdf88,	// (0x0001d7a7) list_single_2graphic_im_pane_g3

0x0003,

0xfc84,	// (0x0001f4a3) list_single_2graphic_im_pane_g_ParamLimits

0xfc84,	// (0x0001f4a3) list_single_2graphic_im_pane_g

0xdf9c,	// (0x0001d7bb) list_single_2graphic_im_pane_t1_ParamLimits

0xdf9c,	// (0x0001d7bb) list_single_2graphic_im_pane_t1

0x783f,	// (0x0001705e) list_single_graphic_2heading_pane_fp_ParamLimits

0x783f,	// (0x0001705e) list_single_graphic_2heading_pane_fp

0x78a7,	// (0x000170c6) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x78a7,	// (0x000170c6) list_single_graphic_2heading_pane_fp_g1

0x7858,	// (0x00017077) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7858,	// (0x00017077) list_single_graphic_2heading_pane_fp_g2

0x7864,	// (0x00017083) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x7864,	// (0x00017083) list_single_graphic_2heading_pane_fp_g3

0x7870,	// (0x0001708f) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x7870,	// (0x0001708f) list_single_graphic_2heading_pane_fp_g4

0x7884,	// (0x000170a3) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7884,	// (0x000170a3) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfbab,	// (0x0001f3ca) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfbab,	// (0x0001f3ca) list_single_graphic_2heading_pane_fp_g

0x8048,	// (0x00017867) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x8048,	// (0x00017867) list_single_graphic_2heading_pane_fp_t1

0x78df,	// (0x000170fe) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x78df,	// (0x000170fe) list_single_graphic_2heading_pane_fp_t2

0x805e,	// (0x0001787d) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x805e,	// (0x0001787d) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc8d,	// (0x0001f4ac) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc8d,	// (0x0001f4ac) list_single_graphic_2heading_pane_fp_t

0x7254,	// (0x00016a73) fep_hwr_write_pane_g5_ParamLimits

0x7254,	// (0x00016a73) fep_hwr_write_pane_g5

0x7260,	// (0x00016a7f) fep_hwr_write_pane_g6_ParamLimits

0x7260,	// (0x00016a7f) fep_hwr_write_pane_g6

0x7d18,	// (0x00017537) eswt_shell_pane_ParamLimits

0x4956,	// (0x00014175) bg_popup_window_pane_cp18_ParamLimits

0x5be1,	// (0x00015400) heading_pane_cp70

0x7e42,	// (0x00017661) popup_eswt_tasktip_window_t1_ParamLimits

0xd064,	// (0x0001c883) aid_touch_tab_arrow_left

0xd07a,	// (0x0001c899) aid_touch_tab_arrow_right

0xbb7b,	// (0x0001b39a) title_pane_g3_ParamLimits

0xbb7b,	// (0x0001b39a) title_pane_g3

0x29bd,	// (0x000121dc) set_value_pane_g1

0xcfa1,	// (0x0001c7c0) popup_toolbar_trans_pane_ParamLimits

0x7f8e,	// (0x000177ad) aid_size_cell_tb_trans_pane_ParamLimits

0x2aee,	// (0x0001230d) bg_tb_trans_pane_ParamLimits

0x7fa0,	// (0x000177bf) grid_tb_trans_pane_ParamLimits

0x1f56,	// (0x00011775) cont_note_pane_ParamLimits

0x1f56,	// (0x00011775) cont_note_pane

0x22c4,	// (0x00011ae3) cont_snote2_single_text_pane_ParamLimits

0x22c4,	// (0x00011ae3) cont_snote2_single_text_pane

0x22c4,	// (0x00011ae3) cont_snote2_single_graphic_pane_ParamLimits

0x22c4,	// (0x00011ae3) cont_snote2_single_graphic_pane

0x4f08,	// (0x00014727) cont_note_wait_pane_ParamLimits

0x4f08,	// (0x00014727) cont_note_wait_pane

0x4f08,	// (0x00014727) cont_note_image_pane_ParamLimits

0x4f08,	// (0x00014727) cont_note_image_pane

0x8074,	// (0x00017893) popup_note2_window_g1_ParamLimits

0x8074,	// (0x00017893) popup_note2_window_g1

0x80a5,	// (0x000178c4) popup_note2_window_t1_ParamLimits

0x80a5,	// (0x000178c4) popup_note2_window_t1

0x80ea,	// (0x00017909) popup_note2_window_t2_ParamLimits

0x80ea,	// (0x00017909) popup_note2_window_t2

0x812f,	// (0x0001794e) popup_note2_window_t3_ParamLimits

0x812f,	// (0x0001794e) popup_note2_window_t3

0x8174,	// (0x00017993) popup_note2_window_t4_ParamLimits

0x8174,	// (0x00017993) popup_note2_window_t4

0x1fda,	// (0x000117f9) popup_note2_window_t5_ParamLimits

0x1fda,	// (0x000117f9) popup_note2_window_t5

0x0004,

0xfc99,	// (0x0001f4b8) popup_note2_window_t_ParamLimits

0xfc99,	// (0x0001f4b8) popup_note2_window_t

0x81a3,	// (0x000179c2) popup_note2_image_window_g1_ParamLimits

0x81a3,	// (0x000179c2) popup_note2_image_window_g1

0x81af,	// (0x000179ce) popup_note2_image_window_g2_ParamLimits

0x81af,	// (0x000179ce) popup_note2_image_window_g2

0x0001,

0xfca4,	// (0x0001f4c3) popup_note2_image_window_g_ParamLimits

0xfca4,	// (0x0001f4c3) popup_note2_image_window_g

0x81c1,	// (0x000179e0) popup_note2_image_window_t1_ParamLimits

0x81c1,	// (0x000179e0) popup_note2_image_window_t1

0x81d9,	// (0x000179f8) popup_note2_image_window_t2_ParamLimits

0x81d9,	// (0x000179f8) popup_note2_image_window_t2

0x81f1,	// (0x00017a10) popup_note2_image_window_t3_ParamLimits

0x81f1,	// (0x00017a10) popup_note2_image_window_t3

0x0002,

0xfca9,	// (0x0001f4c8) popup_note2_image_window_t_ParamLimits

0xfca9,	// (0x0001f4c8) popup_note2_image_window_t

0x4f16,	// (0x00014735) popup_note2_wait_window_g1_ParamLimits

0x4f16,	// (0x00014735) popup_note2_wait_window_g1

0x820d,	// (0x00017a2c) popup_note2_wait_window_g2_ParamLimits

0x820d,	// (0x00017a2c) popup_note2_wait_window_g2

0x4f2e,	// (0x0001474d) popup_note2_wait_window_g3_ParamLimits

0x4f2e,	// (0x0001474d) popup_note2_wait_window_g3

0x0002,

0xfcb0,	// (0x0001f4cf) popup_note2_wait_window_g_ParamLimits

0xfcb0,	// (0x0001f4cf) popup_note2_wait_window_g

0x8219,	// (0x00017a38) popup_note2_wait_window_t1_ParamLimits

0x8219,	// (0x00017a38) popup_note2_wait_window_t1

0x8237,	// (0x00017a56) popup_note2_wait_window_t2_ParamLimits

0x8237,	// (0x00017a56) popup_note2_wait_window_t2

0x8255,	// (0x00017a74) popup_note2_wait_window_t3_ParamLimits

0x8255,	// (0x00017a74) popup_note2_wait_window_t3

0x8267,	// (0x00017a86) popup_note2_wait_window_t4_ParamLimits

0x8267,	// (0x00017a86) popup_note2_wait_window_t4

0x0003,

0xfcb7,	// (0x0001f4d6) popup_note2_wait_window_t_ParamLimits

0xfcb7,	// (0x0001f4d6) popup_note2_wait_window_t

0x8279,	// (0x00017a98) wait_bar2_pane_ParamLimits

0x8279,	// (0x00017a98) wait_bar2_pane

0x8291,	// (0x00017ab0) popup_snote2_single_text_window_g1_ParamLimits

0x8291,	// (0x00017ab0) popup_snote2_single_text_window_g1

0x82b9,	// (0x00017ad8) popup_snote2_single_text_window_t1_ParamLimits

0x82b9,	// (0x00017ad8) popup_snote2_single_text_window_t1

0x8305,	// (0x00017b24) popup_snote2_single_text_window_t2_ParamLimits

0x8305,	// (0x00017b24) popup_snote2_single_text_window_t2

0x8351,	// (0x00017b70) popup_snote2_single_text_window_t3_ParamLimits

0x8351,	// (0x00017b70) popup_snote2_single_text_window_t3

0x8392,	// (0x00017bb1) popup_snote2_single_text_window_t4_ParamLimits

0x8392,	// (0x00017bb1) popup_snote2_single_text_window_t4

0x83c8,	// (0x00017be7) popup_snote2_single_text_window_t5_ParamLimits

0x83c8,	// (0x00017be7) popup_snote2_single_text_window_t5

0x0004,

0xfcc0,	// (0x0001f4df) popup_snote2_single_text_window_t_ParamLimits

0xfcc0,	// (0x0001f4df) popup_snote2_single_text_window_t

0x83f3,	// (0x00017c12) popup_snote2_single_graphic_window_g1_ParamLimits

0x83f3,	// (0x00017c12) popup_snote2_single_graphic_window_g1

0x841b,	// (0x00017c3a) popup_snote2_single_graphic_window_g2_ParamLimits

0x841b,	// (0x00017c3a) popup_snote2_single_graphic_window_g2

0x0001,

0xfccb,	// (0x0001f4ea) popup_snote2_single_graphic_window_g_ParamLimits

0xfccb,	// (0x0001f4ea) popup_snote2_single_graphic_window_g

0x8443,	// (0x00017c62) popup_snote2_single_graphic_window_t1_ParamLimits

0x8443,	// (0x00017c62) popup_snote2_single_graphic_window_t1

0x848f,	// (0x00017cae) popup_snote2_single_graphic_window_t2_ParamLimits

0x848f,	// (0x00017cae) popup_snote2_single_graphic_window_t2

0x8351,	// (0x00017b70) popup_snote2_single_graphic_window_t3_ParamLimits

0x8351,	// (0x00017b70) popup_snote2_single_graphic_window_t3

0x8392,	// (0x00017bb1) popup_snote2_single_graphic_window_t4_ParamLimits

0x8392,	// (0x00017bb1) popup_snote2_single_graphic_window_t4

0x83c8,	// (0x00017be7) popup_snote2_single_graphic_window_t5_ParamLimits

0x83c8,	// (0x00017be7) popup_snote2_single_graphic_window_t5

0x0004,

0xfcd0,	// (0x0001f4ef) popup_snote2_single_graphic_window_t_ParamLimits

0xfcd0,	// (0x0001f4ef) popup_snote2_single_graphic_window_t

0x6c45,	// (0x00016464) clock_nsta_pane_cp2_t1

0x6c45,	// (0x00016464) clock_nsta_pane_cp2_t2

0x0001,

0xfae4,	// (0x0001f303) clock_nsta_pane_cp2_t

0x2b08,	// (0x00012327) form_field_data_wide_pane_g1_ParamLimits

0x2b14,	// (0x00012333) form_field_data_wide_pane_g2_ParamLimits

0x2b14,	// (0x00012333) form_field_data_wide_pane_g2

0x2b20,	// (0x0001233f) form_field_data_wide_pane_g3_ParamLimits

0x2b20,	// (0x0001233f) form_field_data_wide_pane_g3

0x0002,

0xf6ba,	// (0x0001eed9) form_field_data_wide_pane_g_ParamLimits

0xf6ba,	// (0x0001eed9) form_field_data_wide_pane_g

0xda42,	// (0x0001d261) grid_touch_3_pane_ParamLimits

0xda42,	// (0x0001d261) grid_touch_3_pane

0xdfcd,	// (0x0001d7ec) cell_touch_3_pane_ParamLimits

0xdfcd,	// (0x0001d7ec) cell_touch_3_pane

0x71b4,	// (0x000169d3) cell_touch_3_pane_g1

0x71b4,	// (0x000169d3) cell_touch_3_pane_g2

0x0001,

0xfb69,	// (0x0001f388) cell_touch_3_pane_g

0x200c,	// (0x0001182b) cont_query_data_pane

0x2014,	// (0x00011833) cont_query_data_pane_cp1

0x850e,	// (0x00017d2d) button_value_adjust_pane_cp7

0x8516,	// (0x00017d35) query_popup_pane_cp3

0x338a,	// (0x00012ba9) bg_popup_sub_pane_cp22_ParamLimits

0x0630,	// (0x0000fe4f) navi_navi_volume_pane_cp2

0x064b,	// (0x0000fe6a) popup_side_volume_key_window_g2

0x065a,	// (0x0000fe79) popup_side_volume_key_window_g3

0x0002,

0xf74c,	// (0x0001ef6b) popup_side_volume_key_window_g

0x0677,	// (0x0000fe96) popup_side_volume_key_window_t2

0x0001,

0xf753,	// (0x0001ef72) popup_side_volume_key_window_t

0x36d1,	// (0x00012ef0) popup_side_volume_key_window_ParamLimits

0xc05d,	// (0x0001b87c) list_double_graphic_pane_g4_ParamLimits

0xc05d,	// (0x0001b87c) list_double_graphic_pane_g4

0xd8df,	// (0x0001d0fe) list_single_2heading_msg_pane_ParamLimits

0xd8df,	// (0x0001d0fe) list_single_2heading_msg_pane

0xe017,	// (0x0001d836) list_single_2heading_msg_pane_g1_ParamLimits

0xe017,	// (0x0001d836) list_single_2heading_msg_pane_g1

0xe023,	// (0x0001d842) list_single_2heading_msg_pane_g2_ParamLimits

0xe023,	// (0x0001d842) list_single_2heading_msg_pane_g2

0xe036,	// (0x0001d855) list_single_2heading_msg_pane_g3_ParamLimits

0xe036,	// (0x0001d855) list_single_2heading_msg_pane_g3

0xe042,	// (0x0001d861) list_single_2heading_msg_pane_g4_ParamLimits

0xe042,	// (0x0001d861) list_single_2heading_msg_pane_g4

0x0003,

0xfcdb,	// (0x0001f4fa) list_single_2heading_msg_pane_g_ParamLimits

0xfcdb,	// (0x0001f4fa) list_single_2heading_msg_pane_g

0xe05a,	// (0x0001d879) list_single_2heading_msg_pane_t1_ParamLimits

0xe05a,	// (0x0001d879) list_single_2heading_msg_pane_t1

0xe082,	// (0x0001d8a1) list_single_2heading_msg_pane_t2_ParamLimits

0xe082,	// (0x0001d8a1) list_single_2heading_msg_pane_t2

0xe0ed,	// (0x0001d90c) list_single_2heading_msg_pane_t3_ParamLimits

0xe0ed,	// (0x0001d90c) list_single_2heading_msg_pane_t3

0x8607,	// (0x00017e26) list_single_2heading_msg_pane_t4_ParamLimits

0x8607,	// (0x00017e26) list_single_2heading_msg_pane_t4

0x0003,

0xfce4,	// (0x0001f503) list_single_2heading_msg_pane_t_ParamLimits

0xfce4,	// (0x0001f503) list_single_2heading_msg_pane_t

0x1c06,	// (0x00011425) title_pane_g4_ParamLimits

0x1c06,	// (0x00011425) title_pane_g4

0x043c,	// (0x0000fc5b) title_pane_stacon_g3_ParamLimits

0x043c,	// (0x0000fc5b) title_pane_stacon_g3

0x800b,	// (0x0001782a) list_single_2graphic_im_pane_g4_ParamLimits

0x800b,	// (0x0001782a) list_single_2graphic_im_pane_g4

0x597e,	// (0x0001519d) popup_side_volume_key_window_cp

0x627d,	// (0x00015a9c) main_idle_act2_pane_t1

0x0a66,	// (0x00010285) toolbar_button_pane_g10

0xbf08,	// (0x0001b727) popup_toolbar_window_cp1

0x6c36,	// (0x00016455) clock_nsta_pane_cp_t1

0x6c36,	// (0x00016455) clock_nsta_pane_cp_t2

0x0001,

0xfadf,	// (0x0001f2fe) clock_nsta_pane_cp_t

0x0630,	// (0x0000fe4f) navi_navi_volume_pane_cp2_ParamLimits

0x063f,	// (0x0000fe5e) popup_side_volume_key_window_g1_ParamLimits

0x064b,	// (0x0000fe6a) popup_side_volume_key_window_g2_ParamLimits

0x065a,	// (0x0000fe79) popup_side_volume_key_window_g3_ParamLimits

0xf74c,	// (0x0001ef6b) popup_side_volume_key_window_g_ParamLimits

0x0eef,	// (0x0001070e) fep_hwr_aid_pane

0x0f98,	// (0x000107b7) bg_fep_hwr_top_pane_g4_ParamLimits

0x7224,	// (0x00016a43) fep_hwr_top_pane_g1_ParamLimits

0x7236,	// (0x00016a55) fep_hwr_top_pane_g2_ParamLimits

0x0fb8,	// (0x000107d7) fep_hwr_top_pane_g3_ParamLimits

0xfb34,	// (0x0001f353) fep_hwr_top_pane_g_ParamLimits

0x0fcd,	// (0x000107ec) fep_hwr_top_text_pane_ParamLimits

0x5733,	// (0x00014f52) aid_touch_tab_arrow_arrow_2

0x573c,	// (0x00014f5b) aid_touch_tab_arrow_left_2

0x0f03,	// (0x00010722) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x0f3a,	// (0x00010759) fep_hwr_prediction_pane

0x738c,	// (0x00016bab) fep_vkb_prediction_pane

0xdd8a,	// (0x0001d5a9) fep_vkb_side_pane_g3_ParamLimits

0xdd8a,	// (0x0001d5a9) fep_vkb_side_pane_g3

0x115c,	// (0x0001097b) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x11cd,	// (0x000109ec) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x11da,	// (0x000109f9) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbe3,	// (0x0001f402) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x1309,	// (0x00010b28) fep_hwr_prediction_pane_g1

0x1313,	// (0x00010b32) fep_hwr_prediction_pane_g2

0x131b,	// (0x00010b3a) fep_hwr_prediction_pane_g3

0x1323,	// (0x00010b42) fep_hwr_prediction_pane_g4

0x0003,

0xfced,	// (0x0001f50c) fep_hwr_prediction_pane_g

0x862c,	// (0x00017e4b) fep_vkb_prediction_pane_g1

0x8636,	// (0x00017e55) fep_vkb_prediction_pane_g2

0x863e,	// (0x00017e5d) fep_vkb_prediction_pane_g3

0x8646,	// (0x00017e65) fep_vkb_prediction_pane_g4

0x0003,

0xfcf6,	// (0x0001f515) fep_vkb_prediction_pane_g

0x0d6f,	// (0x0001058e) slider_set_pane_g3

0x0d83,	// (0x000105a2) slider_set_pane_g4

0x0d9b,	// (0x000105ba) slider_set_pane_g5

0x0d6f,	// (0x0001058e) slider_set_pane_g6

0x0db1,	// (0x000105d0) slider_set_pane_g7

0x5e54,	// (0x00015673) slider_form_pane_g3

0x5e5d,	// (0x0001567c) slider_form_pane_g4

0x5e65,	// (0x00015684) slider_form_pane_g5

0x5e54,	// (0x00015673) slider_form_pane_g6

0xd882,	// (0x0001d0a1) slider_form_pane_g7

0x6577,	// (0x00015d96) slider_set_pane_vc_g3

0x6580,	// (0x00015d9f) slider_set_pane_vc_g4

0x6589,	// (0x00015da8) slider_set_pane_vc_g5

0x6577,	// (0x00015d96) slider_set_pane_vc_g6

0x6592,	// (0x00015db1) slider_set_pane_vc_g7

0x6577,	// (0x00015d96) slider_form_pane_vc_g1

0x6580,	// (0x00015d9f) slider_form_pane_vc_g2

0x6589,	// (0x00015da8) slider_form_pane_vc_g3

0x6577,	// (0x00015d96) slider_form_pane_vc_g4

0x695b,	// (0x0001617a) slider_form_pane_vc_g5

0x0004,

0xfac5,	// (0x0001f2e4) slider_form_pane_vc_g

0x1bbe,	// (0x000113dd) main_idle_act3_pane

0x864e,	// (0x00017e6d) ai3_links_pane

0xe15b,	// (0x0001d97a) popup_ai3_data_window_ParamLimits

0xe15b,	// (0x0001d97a) popup_ai3_data_window

0x1bbe,	// (0x000113dd) grid_ai3_links_pane

0xe179,	// (0x0001d998) cell_ai3_links_pane_ParamLimits

0xe179,	// (0x0001d998) cell_ai3_links_pane

0x868f,	// (0x00017eae) bg_popup_sub_pane_cp11

0x869c,	// (0x00017ebb) cell_ai3_links_pane_g1

0x1bbe,	// (0x000113dd) bg_popup_sub_pane_cp12

0x86c1,	// (0x00017ee0) heading_ai3_data_pane

0x86c9,	// (0x00017ee8) list_ai3_gene_pane

0x86d5,	// (0x00017ef4) popup_ai3_data_window_g1

0x86dd,	// (0x00017efc) heading_ai3_data_pane_g1

0x86e5,	// (0x00017f04) heading_ai3_data_pane_t1

0x86f3,	// (0x00017f12) list_double_ai3_gene_pane_ParamLimits

0x86f3,	// (0x00017f12) list_double_ai3_gene_pane

0x8700,	// (0x00017f1f) list_single_ai3_gene_pane_ParamLimits

0x8700,	// (0x00017f1f) list_single_ai3_gene_pane

0x7179,	// (0x00016998) list_highlight_pane_cp7_ParamLimits

0x7179,	// (0x00016998) list_highlight_pane_cp7

0x870d,	// (0x00017f2c) list_single_a13_gene_pane_t1_ParamLimits

0x870d,	// (0x00017f2c) list_single_a13_gene_pane_t1

0x8724,	// (0x00017f43) list_single_ai3_gene_pane_g1

0x872d,	// (0x00017f4c) list_single_ai3_gene_pane_g2

0x0001,

0xfcff,	// (0x0001f51e) list_single_ai3_gene_pane_g

0x8735,	// (0x00017f54) list_double_ai3_gene_pane_g1_ParamLimits

0x8735,	// (0x00017f54) list_double_ai3_gene_pane_g1

0x8741,	// (0x00017f60) list_double_ai3_gene_pane_t1_ParamLimits

0x8741,	// (0x00017f60) list_double_ai3_gene_pane_t1

0x875d,	// (0x00017f7c) list_double_ai3_gene_pane_t2_ParamLimits

0x875d,	// (0x00017f7c) list_double_ai3_gene_pane_t2

0x8772,	// (0x00017f91) list_double_ai3_gene_pane_t3_ParamLimits

0x8772,	// (0x00017f91) list_double_ai3_gene_pane_t3

0x0002,

0xfd04,	// (0x0001f523) list_double_ai3_gene_pane_t_ParamLimits

0xfd04,	// (0x0001f523) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x8527,	// (0x00017d46) aid_size_min_col_2

0xe001,	// (0x0001d820) aid_size_min_msg_ParamLimits

0xe001,	// (0x0001d820) aid_size_min_msg

0xdd9e,	// (0x0001d5bd) fep_vkb_top_text_pane_g2_ParamLimits

0xdd9e,	// (0x0001d5bd) fep_vkb_top_text_pane_g2

0x0001,

0xfb64,	// (0x0001f383) fep_vkb_top_text_pane_g_ParamLimits

0xfb64,	// (0x0001f383) fep_vkb_top_text_pane_g

0x1bbe,	// (0x000113dd) main_hc_apps_shell_pane

0x878f,	// (0x00017fae) grid_hc_apps_pane_ParamLimits

0x878f,	// (0x00017fae) grid_hc_apps_pane

0x879e,	// (0x00017fbd) list_hc_apps_pane

0x87a6,	// (0x00017fc5) scroll_pane_cp37_ParamLimits

0x87a6,	// (0x00017fc5) scroll_pane_cp37

0xe193,	// (0x0001d9b2) cell_hc_apps_pane_ParamLimits

0xe193,	// (0x0001d9b2) cell_hc_apps_pane

0xe25d,	// (0x0001da7c) cell_hc_apps_pane_g1_ParamLimits

0xe25d,	// (0x0001da7c) cell_hc_apps_pane_g1

0x889b,	// (0x000180ba) cell_hc_apps_pane_g2_ParamLimits

0x889b,	// (0x000180ba) cell_hc_apps_pane_g2

0x88b7,	// (0x000180d6) cell_hc_apps_pane_g3_ParamLimits

0x88b7,	// (0x000180d6) cell_hc_apps_pane_g3

0x0002,

0xfd0b,	// (0x0001f52a) cell_hc_apps_pane_g_ParamLimits

0xfd0b,	// (0x0001f52a) cell_hc_apps_pane_g

0xe28a,	// (0x0001daa9) cell_hc_apps_pane_t1_ParamLimits

0xe28a,	// (0x0001daa9) cell_hc_apps_pane_t1

0x1f56,	// (0x00011775) grid_highlight_pane_cp10_ParamLimits

0x1f56,	// (0x00011775) grid_highlight_pane_cp10

0xe2ca,	// (0x0001dae9) list_single_hc_apps_pane_ParamLimits

0xe2ca,	// (0x0001dae9) list_single_hc_apps_pane

0xe304,	// (0x0001db23) list_single_hc_apps_pane_g1

0xe31d,	// (0x0001db3c) list_single_hc_apps_pane_g2

0x0001,

0xfd12,	// (0x0001f531) list_single_hc_apps_pane_g

0xe336,	// (0x0001db55) list_single_hc_apps_pane_g2_copy1

0xe352,	// (0x0001db71) list_single_hc_apps_pane_t1

0x1cb2,	// (0x000114d1) bg_set_opt_pane_cp_ParamLimits

0x0366,	// (0x0000fb85) setting_slider_pane_t1_ParamLimits

0x037c,	// (0x0000fb9b) setting_slider_pane_t2_ParamLimits

0x0396,	// (0x0000fbb5) setting_slider_pane_t3_ParamLimits

0xf5a2,	// (0x0001edc1) setting_slider_pane_t_ParamLimits

0x03ae,	// (0x0000fbcd) slider_set_pane_ParamLimits

0x08d6,	// (0x000100f5) control_pane_g5_ParamLimits

0x08d6,	// (0x000100f5) control_pane_g5

0x5c75,	// (0x00015494) slider_set_pane_g1_ParamLimits

0x0d63,	// (0x00010582) slider_set_pane_g2_ParamLimits

0x0d6f,	// (0x0001058e) slider_set_pane_g3_ParamLimits

0x0d83,	// (0x000105a2) slider_set_pane_g4_ParamLimits

0x0d9b,	// (0x000105ba) slider_set_pane_g5_ParamLimits

0x0d6f,	// (0x0001058e) slider_set_pane_g6_ParamLimits

0x0db1,	// (0x000105d0) slider_set_pane_g7_ParamLimits

0xf993,	// (0x0001f1b2) slider_set_pane_g_ParamLimits

0x37b6,	// (0x00012fd5) navi_icon_text_pane_ParamLimits

0xd02e,	// (0x0001c84d) aid_fill_nsta_2_ParamLimits

0xd064,	// (0x0001c883) aid_touch_tab_arrow_left_ParamLimits

0xd07a,	// (0x0001c899) aid_touch_tab_arrow_right_ParamLimits

0xd115,	// (0x0001c934) clock_nsta_pane_ParamLimits

0xd5bf,	// (0x0001cdde) navi_icon_pane_g1_ParamLimits

0xd5cb,	// (0x0001cdea) navi_text_pane_t1_ParamLimits

0xdb1c,	// (0x0001d33b) navi_icon_text_pane_g1_ParamLimits

0xdb28,	// (0x0001d347) navi_icon_text_pane_t1_ParamLimits

0xe304,	// (0x0001db23) list_single_hc_apps_pane_g1_ParamLimits

0xe31d,	// (0x0001db3c) list_single_hc_apps_pane_g2_ParamLimits

0xfd12,	// (0x0001f531) list_single_hc_apps_pane_g_ParamLimits

0xe336,	// (0x0001db55) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xe352,	// (0x0001db71) list_single_hc_apps_pane_t1_ParamLimits

0xb33f,	// (0x0001ab5e) popup_toolbar2_fixed_window_ParamLimits

0xb33f,	// (0x0001ab5e) popup_toolbar2_fixed_window

0xcf97,	// (0x0001c7b6) popup_toolbar2_float_window

0x1bbe,	// (0x000113dd) bg_popup_sub_pane_cp27

0x89d4,	// (0x000181f3) grid_toolbar2_float_pane

0x1bbe,	// (0x000113dd) bg_popup_sub_pane_cp26

0x89d4,	// (0x000181f3) grid_toolbar2_fixed_pane

0xe380,	// (0x0001db9f) cell_toolbar2_fixed_pane_ParamLimits

0xe380,	// (0x0001db9f) cell_toolbar2_fixed_pane

0xe39d,	// (0x0001dbbc) cell_toolbar2_fixed_pane_g1

0x89f5,	// (0x00018214) toolbar2_fixed_button_pane

0x483a,	// (0x00014059) toolbar2_fixed_button_pane_g1

0x484a,	// (0x00014069) toolbar2_fixed_button_pane_g2

0x4842,	// (0x00014061) toolbar2_fixed_button_pane_g3

0x485a,	// (0x00014079) toolbar2_fixed_button_pane_g4

0x4852,	// (0x00014071) toolbar2_fixed_button_pane_g5

0x4862,	// (0x00014081) toolbar2_fixed_button_pane_g6

0x486a,	// (0x00014089) toolbar2_fixed_button_pane_g7

0x487a,	// (0x00014099) toolbar2_fixed_button_pane_g8

0x4872,	// (0x00014091) toolbar2_fixed_button_pane_g9

0x0008,

0xf895,	// (0x0001f0b4) toolbar2_fixed_button_pane_g

0x89fd,	// (0x0001821c) cell_toolbar2_float_pane_ParamLimits

0x89fd,	// (0x0001821c) cell_toolbar2_float_pane

0x8a0e,	// (0x0001822d) cell_toolbar2_float_pane_g1

0x89f5,	// (0x00018214) toolbar2_fixed_button_pane_cp

0xdc86,	// (0x0001d4a5) fep_vkb_accented_list_pane_ParamLimits

0xdc86,	// (0x0001d4a5) fep_vkb_accented_list_pane

0x113c,	// (0x0001095b) bg_popup_fep_shadow_pane_g9

0x393a,	// (0x00013159) bg_popup_fep_shadow_pane_cp3

0x2db9,	// (0x000125d8) list_accented_list_pane

0x8a17,	// (0x00018236) list_single_accented_list_pane_ParamLimits

0x8a17,	// (0x00018236) list_single_accented_list_pane

0x393a,	// (0x00013159) list_highlight_pane_cp10

0x8a28,	// (0x00018247) list_single_accented_list_pane_t1

0xceb3,	// (0x0001c6d2) popup_slider_window_ParamLimits

0xceb3,	// (0x0001c6d2) popup_slider_window

0x851e,	// (0x00017d3d) aid_indentation_list_msg

0xe4a8,	// (0x0001dcc7) bg_popup_window_pane_cp19

0x8b62,	// (0x00018381) popup_slider_window_g1

0x8b7e,	// (0x0001839d) popup_slider_window_g2

0x8b9a,	// (0x000183b9) popup_slider_window_g3

0x0005,

0xfd17,	// (0x0001f536) popup_slider_window_g

0x8bf6,	// (0x00018415) popup_slider_window_t1

0x8c6a,	// (0x00018489) small_volume_slider_vertical_pane

0x71b4,	// (0x000169d3) small_volume_slider_vertical_pane_g1

0x71b4,	// (0x000169d3) small_volume_slider_vertical_pane_g2

0x8c86,	// (0x000184a5) small_volume_slider_vertical_pane_g3

0x0002,

0xfd29,	// (0x0001f548) small_volume_slider_vertical_pane_g

0xb2a9,	// (0x0001aac8) area_side_right_pane_ParamLimits

0xb2a9,	// (0x0001aac8) area_side_right_pane

0xb70d,	// (0x0001af2c) aid_size_side_button_ParamLimits

0xb70d,	// (0x0001af2c) aid_size_side_button

0xb726,	// (0x0001af45) grid_sctrl_middle_pane_ParamLimits

0xb726,	// (0x0001af45) grid_sctrl_middle_pane

0x135f,	// (0x00010b7e) sctrl_sk_bottom_pane

0x1370,	// (0x00010b8f) sctrl_sk_top_pane

0x1382,	// (0x00010ba1) aid_touch_sctrl_top

0x138f,	// (0x00010bae) bg_sctrl_sk_pane_ParamLimits

0x138f,	// (0x00010bae) bg_sctrl_sk_pane

0x139d,	// (0x00010bbc) sctrl_sk_top_pane_g1

0x13aa,	// (0x00010bc9) sctrl_sk_top_pane_t1

0x1382,	// (0x00010ba1) aid_touch_sctrl_bottom

0x138f,	// (0x00010bae) bg_sctrl_sk_pane_cp_ParamLimits

0x138f,	// (0x00010bae) bg_sctrl_sk_pane_cp

0x13c5,	// (0x00010be4) sctrl_sk_bottom_pane_g1

0x13aa,	// (0x00010bc9) sctrl_sk_bottom_pane_t1

0xb740,	// (0x0001af5f) cell_sctrl_middle_pane_ParamLimits

0xb740,	// (0x0001af5f) cell_sctrl_middle_pane

0xb753,	// (0x0001af72) aid_touch_sctrl_middle_ParamLimits

0xb753,	// (0x0001af72) aid_touch_sctrl_middle

0xb760,	// (0x0001af7f) bg_sctrl_middle_pane_ParamLimits

0xb760,	// (0x0001af7f) bg_sctrl_middle_pane

0x1a3f,	// (0x0001125e) cell_sctrl_middle_pane_g1_ParamLimits

0x1a3f,	// (0x0001125e) cell_sctrl_middle_pane_g1

0xb76e,	// (0x0001af8d) cell_sctrl_middle_pane_g2_ParamLimits

0xb76e,	// (0x0001af8d) cell_sctrl_middle_pane_g2

0x0001,

0xfd35,	// (0x0001f554) cell_sctrl_middle_pane_g_ParamLimits

0xfd35,	// (0x0001f554) cell_sctrl_middle_pane_g

0x483a,	// (0x00014059) bg_sctrl_middle_pane_g1

0x4842,	// (0x00014061) bg_sctrl_middle_pane_g2

0x484a,	// (0x00014069) bg_sctrl_middle_pane_g3

0x4852,	// (0x00014071) bg_sctrl_middle_pane_g4

0x485a,	// (0x00014079) bg_sctrl_middle_pane_g5

0x4862,	// (0x00014081) bg_sctrl_middle_pane_g6

0x486a,	// (0x00014089) bg_sctrl_middle_pane_g7

0x4872,	// (0x00014091) bg_sctrl_middle_pane_g8

0x0007,

0xfd3a,	// (0x0001f559) bg_sctrl_middle_pane_g

0x487a,	// (0x00014099) bg_sctrl_middle_pane_g8_copy1

0x483a,	// (0x00014059) bg_sctrl_sk_pane_g1

0x484a,	// (0x00014069) bg_sctrl_sk_pane_g2

0x4842,	// (0x00014061) bg_sctrl_sk_pane_g3

0x0008,

0xf895,	// (0x0001f0b4) bg_sctrl_sk_pane_g

0x2482,	// (0x00011ca1) aid_size_touch_scroll_bar

0x485a,	// (0x00014079) bg_sctrl_sk_pane_g4

0x4852,	// (0x00014071) bg_sctrl_sk_pane_g5

0x4862,	// (0x00014081) bg_sctrl_sk_pane_g6

0x486a,	// (0x00014089) bg_sctrl_sk_pane_g7

0x487a,	// (0x00014099) bg_sctrl_sk_pane_g8

0x4872,	// (0x00014091) bg_sctrl_sk_pane_g9

0x3d7a,	// (0x00013599) popup_fep_china_hwr2_fs_candidate_window

0xc96f,	// (0x0001c18e) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc96f,	// (0x0001c18e) popup_fep_china_hwr2_fs_control_window

0x115c,	// (0x0001097b) sctrl_sk_top_pane_g2

0x0001,

0xfd30,	// (0x0001f54f) sctrl_sk_top_pane_g

0xe560,	// (0x0001dd7f) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe560,	// (0x0001dd7f) aid_fep_china_hwr2_fs_cell

0xe576,	// (0x0001dd95) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe576,	// (0x0001dd95) bg_popup_fep_shadow_pane_cp4

0xe58d,	// (0x0001ddac) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe58d,	// (0x0001ddac) bg_popup_fep_shadow_pane_cp5

0xe59f,	// (0x0001ddbe) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe59f,	// (0x0001ddbe) popup_fep_china_hwr2_fs_control_bar_grid

0xe5b3,	// (0x0001ddd2) popup_fep_china_hwr2_fs_control_funtion_grid

0x8ce5,	// (0x00018504) aid_fep_china_hwr2_fs_candi_cell

0x1bbe,	// (0x000113dd) bg_popup_fep_shadow_pane_cp6

0x8cef,	// (0x0001850e) popup_fep_china_hwr2_fs_candidate_grid

0xe5bb,	// (0x0001ddda) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe5bb,	// (0x0001ddda) cell_fep_china_hwr2_fs_funtion_grid

0x71b4,	// (0x000169d3) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x8d11,	// (0x00018530) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x8d11,	// (0x00018530) cell_fep_china_hwr2_fs_funtion_grid_g1

0x8d1f,	// (0x0001853e) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x8d1f,	// (0x0001853e) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd4b,	// (0x0001f56a) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd4b,	// (0x0001f56a) cell_fep_china_hwr2_fs_funtion_grid_g

0xe5d3,	// (0x0001ddf2) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe5d3,	// (0x0001ddf2) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe5e8,	// (0x0001de07) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe5e8,	// (0x0001de07) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd50,	// (0x0001f56f) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd50,	// (0x0001f56f) cell_fep_china_hwr2_fs_funtion_grid_t

0x8d66,	// (0x00018585) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x8d6e,	// (0x0001858d) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x8d76,	// (0x00018595) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd55,	// (0x0001f574) popup_fep_china_hwr2_fs_control_bar_grid_g

0x8d7e,	// (0x0001859d) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x8d7e,	// (0x0001859d) cell_fep_china_hwr2_fs_candidate_grid

0x8d9d,	// (0x000185bc) popup_fep_china_hwr2_fs_candidate_grid_g20

0x8da5,	// (0x000185c4) popup_fep_china_hwr2_fs_candidate_grid_g21

0x71b4,	// (0x000169d3) cell_fep_china_hwr2_fs_candidate_grid_g1

0x71b4,	// (0x000169d3) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb69,	// (0x0001f388) cell_fep_china_hwr2_fs_candidate_grid_g

0x8dad,	// (0x000185cc) cell_fep_china_hwr2_fs_candidate_grid_t1

0x43e9,	// (0x00013c08) clock_nsta_pane_cp_24_ParamLimits

0x43e9,	// (0x00013c08) clock_nsta_pane_cp_24

0x4469,	// (0x00013c88) indicator_nsta_pane_cp_24_ParamLimits

0x4469,	// (0x00013c88) indicator_nsta_pane_cp_24

0x558b,	// (0x00014daa) heading_pane_g1

0x0001,

0xf8fa,	// (0x0001f119) heading_pane_g

0x60c4,	// (0x000158e3) grid_sct_catagory_button_pane

0x60f6,	// (0x00015915) scroll_pane_cp5_ParamLimits

0x6da7,	// (0x000165c6) button_value_adjust_pane_cp5_ParamLimits

0x6da7,	// (0x000165c6) button_value_adjust_pane_cp5

0x6ead,	// (0x000166cc) form2_midp_time_pane_ParamLimits

0x8dbb,	// (0x000185da) cell_sct_catagory_button_pane_ParamLimits

0x8dbb,	// (0x000185da) cell_sct_catagory_button_pane

0x7179,	// (0x00016998) bg_button_pane_cp01_ParamLimits

0x7179,	// (0x00016998) bg_button_pane_cp01

0x71b4,	// (0x000169d3) cell_sct_catagory_button_pane_g1

0xcf34,	// (0x0001c753) popup_tb_extension_window

0xe604,	// (0x0001de23) aid_size_cell_ext_ParamLimits

0xe604,	// (0x0001de23) aid_size_cell_ext

0x22c4,	// (0x00011ae3) bg_tb_trans_pane_cp1_ParamLimits

0x22c4,	// (0x00011ae3) bg_tb_trans_pane_cp1

0xe62a,	// (0x0001de49) grid_tb_ext_pane_ParamLimits

0xe62a,	// (0x0001de49) grid_tb_ext_pane

0xe66a,	// (0x0001de89) cell_tb_ext_pane_ParamLimits

0xe66a,	// (0x0001de89) cell_tb_ext_pane

0xe694,	// (0x0001deb3) cell_tb_ext_pane_g1_ParamLimits

0xe694,	// (0x0001deb3) cell_tb_ext_pane_g1

0x8e51,	// (0x00018670) cell_tb_ext_pane_t1

0x1f56,	// (0x00011775) list_highlight_pane_cp11_ParamLimits

0x1f56,	// (0x00011775) list_highlight_pane_cp11

0x028f,	// (0x0000faae) popup_uni_indicator_window_ParamLimits

0x028f,	// (0x0000faae) popup_uni_indicator_window

0x2aee,	// (0x0001230d) bg_popup_sub_pane_cp14

0x8e6c,	// (0x0001868b) list_uniindi_pane

0x8e78,	// (0x00018697) uniindi_top_pane

0x1f56,	// (0x00011775) bg_uniindi_top_pane

0x8e99,	// (0x000186b8) uniindi_top_pane_g1

0x8eaf,	// (0x000186ce) uniindi_top_pane_g2

0x0003,

0xfd5c,	// (0x0001f57b) uniindi_top_pane_g

0x8ed9,	// (0x000186f8) uniindi_top_pane_t1

0x8f05,	// (0x00018724) list_single_uniindi_pane_ParamLimits

0x8f05,	// (0x00018724) list_single_uniindi_pane

0x71b4,	// (0x000169d3) bg_uniindi_top_pane_g1

0x8f17,	// (0x00018736) list_single_uniindi_pane_g1

0x8f2a,	// (0x00018749) list_single_uniindi_pane_t1

0x00fb,	// (0x0000f91a) control_bg_pane

0x8f4f,	// (0x0001876e) bg_sctrl_sk_pane_cp1

0x8f58,	// (0x00018777) bg_sctrl_sk_pane_cp2

0x8f61,	// (0x00018780) control_bg_pane_g1

0x8f6a,	// (0x00018789) control_bg_pane_g2

0x0001,

0xfd65,	// (0x0001f584) control_bg_pane_g

0x6bfb,	// (0x0001641a) cell_indicator_nsta_pane_g1_ParamLimits

0xda75,	// (0x0001d294) cell_indicator_nsta_pane_g2_ParamLimits

0xfada,	// (0x0001f2f9) cell_indicator_nsta_pane_g_ParamLimits

0x6f3d,	// (0x0001675c) form2_midp_time_pane_t1_ParamLimits

0x7484,	// (0x00016ca3) main_idle_act4_pane_ParamLimits

0x7484,	// (0x00016ca3) main_idle_act4_pane

0xcf34,	// (0x0001c753) popup_tb_extension_window_ParamLimits

0xe652,	// (0x0001de71) tb_ext_find_pane_ParamLimits

0xe652,	// (0x0001de71) tb_ext_find_pane

0x8f73,	// (0x00018792) ai_gene_pane_1_cp1

0x3a83,	// (0x000132a2) ai_gene_pane_2_cp1

0x8f7b,	// (0x0001879a) list_single_idle_plugin_calendar_pane

0x8f84,	// (0x000187a3) list_single_idle_plugin_notification_pane

0x8f8d,	// (0x000187ac) list_single_idle_plugin_player_pane

0xe6b1,	// (0x0001ded0) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe6b1,	// (0x0001ded0) list_single_idle_plugin_shortcut_pane

0xe6d9,	// (0x0001def8) main_idle_act4_pane_t1

0xe6f1,	// (0x0001df10) main_idle_act4_pane_t2

0x0001,

0xfd6a,	// (0x0001f589) main_idle_act4_pane_t

0xe709,	// (0x0001df28) middle_sk_idle_act4_pane_ParamLimits

0xe709,	// (0x0001df28) middle_sk_idle_act4_pane

0xe725,	// (0x0001df44) popup_clock_digital_analogue_window_cp2

0xe74c,	// (0x0001df6b) shortcut_wheel_idle_act4_pane_ParamLimits

0xe74c,	// (0x0001df6b) shortcut_wheel_idle_act4_pane

0x71b4,	// (0x000169d3) shortcut_wheel_idle_act4_pane_g1

0x71b4,	// (0x000169d3) shortcut_wheel_idle_act4_pane_g2

0x71b4,	// (0x000169d3) shortcut_wheel_idle_act4_pane_g3

0x71b4,	// (0x000169d3) shortcut_wheel_idle_act4_pane_g4

0x71b4,	// (0x000169d3) shortcut_wheel_idle_act4_pane_g5

0x9020,	// (0x0001883f) shortcut_wheel_idle_act4_pane_g6

0x9028,	// (0x00018847) shortcut_wheel_idle_act4_pane_g7

0x9030,	// (0x0001884f) shortcut_wheel_idle_act4_pane_g8

0x9038,	// (0x00018857) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd6f,	// (0x0001f58e) shortcut_wheel_idle_act4_pane_g

0xc615,	// (0x0001be34) middle_sk_idle_act4_pane_g1_ParamLimits

0xc615,	// (0x0001be34) middle_sk_idle_act4_pane_g1

0xe7c9,	// (0x0001dfe8) middle_sk_idle_act4_pane_g2_ParamLimits

0xe7c9,	// (0x0001dfe8) middle_sk_idle_act4_pane_g2

0x0001,

0xfd92,	// (0x0001f5b1) middle_sk_idle_act4_pane_g_ParamLimits

0xfd92,	// (0x0001f5b1) middle_sk_idle_act4_pane_g

0xe7e1,	// (0x0001e000) middle_sk_idle_act4_pane_t1_ParamLimits

0xe7e1,	// (0x0001e000) middle_sk_idle_act4_pane_t1

0xe810,	// (0x0001e02f) grid_ai_shortcut_pane_ParamLimits

0xe810,	// (0x0001e02f) grid_ai_shortcut_pane

0xe82d,	// (0x0001e04c) list_highlight_pane_cp16_ParamLimits

0xe82d,	// (0x0001e04c) list_highlight_pane_cp16

0xe83a,	// (0x0001e059) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe83a,	// (0x0001e059) list_single_idle_plugin_shortcut_pane_g1

0xe846,	// (0x0001e065) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe846,	// (0x0001e065) list_single_idle_plugin_shortcut_pane_g2

0xe864,	// (0x0001e083) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe864,	// (0x0001e083) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd97,	// (0x0001f5b6) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd97,	// (0x0001f5b6) list_single_idle_plugin_shortcut_pane_g

0xe879,	// (0x0001e098) cell_ai_shortcut_pane_ParamLimits

0xe879,	// (0x0001e098) cell_ai_shortcut_pane

0xe88f,	// (0x0001e0ae) cell_ai_shortcut_pane_g1_ParamLimits

0xe88f,	// (0x0001e0ae) cell_ai_shortcut_pane_g1

0x8f73,	// (0x00018792) ai_gene_pane_1_cp2

0x9169,	// (0x00018988) ai_gene_pane_2_cp2

0x9171,	// (0x00018990) list_highlight_pane_cp15

0x917a,	// (0x00018999) list_single_idle_plugin_calendar_pane_g1

0x9171,	// (0x00018990) list_highlight_pane_cp17

0x9182,	// (0x000189a1) list_single_idle_plugin_calendar_pane_g1_copy1

0x918a,	// (0x000189a9) list_single_idle_plugin_player_pane_g1

0x632b,	// (0x00015b4a) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd9e,	// (0x0001f5bd) list_single_idle_plugin_player_pane_g

0x9192,	// (0x000189b1) list_single_idle_plugin_player_pane_t1

0x91a0,	// (0x000189bf) list_single_idle_plugin_player_pane_t2

0x91ae,	// (0x000189cd) list_single_idle_plugin_player_pane_t3

0x91bc,	// (0x000189db) list_single_idle_plugin_player_pane_t4

0x0003,

0xfda3,	// (0x0001f5c2) list_single_idle_plugin_player_pane_t

0x91ca,	// (0x000189e9) wait_bar_pane_cp15

0x91d2,	// (0x000189f1) grid_ai_notification_pane

0x632b,	// (0x00015b4a) list_single_idle_plugin_notification_pane_g1

0xe8b1,	// (0x0001e0d0) cell_ai_notification_pane_ParamLimits

0xe8b1,	// (0x0001e0d0) cell_ai_notification_pane

0x91e8,	// (0x00018a07) cell_ai_notification_pane_g1

0x91f0,	// (0x00018a0f) cell_ai_notification_pane_t1

0xe8be,	// (0x0001e0dd) tb_ext_find_button_pane

0xe8c6,	// (0x0001e0e5) tb_ext_find_pane_g1

0xe8ce,	// (0x0001e0ed) tb_ext_find_pane_t1

0x32c0,	// (0x00012adf) tb_ext_find_button_pane_g1

0x921c,	// (0x00018a3b) tb_ext_find_button_pane_g2

0x0001,

0xfdac,	// (0x0001f5cb) tb_ext_find_button_pane_g

0xe6d9,	// (0x0001def8) main_idle_act4_pane_t1_ParamLimits

0xe6f1,	// (0x0001df10) main_idle_act4_pane_t2_ParamLimits

0xfd6a,	// (0x0001f589) main_idle_act4_pane_t_ParamLimits

0xe725,	// (0x0001df44) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe73c,	// (0x0001df5b) sat_plugin_idle_act4_pane_ParamLimits

0xe73c,	// (0x0001df5b) sat_plugin_idle_act4_pane

0xe8dc,	// (0x0001e0fb) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe8dc,	// (0x0001e0fb) sat_plugin_idle_act4_pane_t1

0xe8f4,	// (0x0001e113) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe8f4,	// (0x0001e113) sat_plugin_idle_act4_pane_t2

0xe90c,	// (0x0001e12b) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe90c,	// (0x0001e12b) sat_plugin_idle_act4_pane_t3

0xe924,	// (0x0001e143) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe924,	// (0x0001e143) sat_plugin_idle_act4_pane_t4

0x0003,

0xfdb1,	// (0x0001f5d0) sat_plugin_idle_act4_pane_t_ParamLimits

0xfdb1,	// (0x0001f5d0) sat_plugin_idle_act4_pane_t

0x01c0,	// (0x0000f9df) popup_battery_window_ParamLimits

0x01c0,	// (0x0000f9df) popup_battery_window

0x1f56,	// (0x00011775) bg_popup_sub_pane_cp25_ParamLimits

0x1f56,	// (0x00011775) bg_popup_sub_pane_cp25

0x9271,	// (0x00018a90) popup_battery_window_g1_ParamLimits

0x9271,	// (0x00018a90) popup_battery_window_g1

0x927d,	// (0x00018a9c) popup_battery_window_t1_ParamLimits

0x927d,	// (0x00018a9c) popup_battery_window_t1

0x928f,	// (0x00018aae) popup_battery_window_t2_ParamLimits

0x928f,	// (0x00018aae) popup_battery_window_t2

0x0001,

0xfdba,	// (0x0001f5d9) popup_battery_window_t_ParamLimits

0xfdba,	// (0x0001f5d9) popup_battery_window_t

0xc7e7,	// (0x0001c006) midp_canvas_pane_ParamLimits

0xc842,	// (0x0001c061) midp_keypad_pane_ParamLimits

0xc842,	// (0x0001c061) midp_keypad_pane

0x3cc8,	// (0x000134e7) main_midp_pane_ParamLimits

0x6c54,	// (0x00016473) signal_pane_g2_cp_ParamLimits

0xe93c,	// (0x0001e15b) aid_size_cell_midp_keypad_ParamLimits

0xe93c,	// (0x0001e15b) aid_size_cell_midp_keypad

0xe95a,	// (0x0001e179) midp_keyp_game_grid_pane_ParamLimits

0xe95a,	// (0x0001e179) midp_keyp_game_grid_pane

0xe981,	// (0x0001e1a0) midp_keyp_rocker_pane_ParamLimits

0xe981,	// (0x0001e1a0) midp_keyp_rocker_pane

0xe9c6,	// (0x0001e1e5) midp_keyp_sk_left_pane_ParamLimits

0xe9c6,	// (0x0001e1e5) midp_keyp_sk_left_pane

0xea1a,	// (0x0001e239) midp_keyp_sk_right_pane_ParamLimits

0xea1a,	// (0x0001e239) midp_keyp_sk_right_pane

0x1bbe,	// (0x000113dd) bg_button_pane_cp03

0xea6e,	// (0x0001e28d) midp_keyp_sk_left_pane_g1

0x1bbe,	// (0x000113dd) bg_button_pane_cp04

0xea6e,	// (0x0001e28d) midp_keyp_sk_right_pane_g1

0x71b4,	// (0x000169d3) midp_keyp_rocker_pane_g1

0xea77,	// (0x0001e296) keyp_game_cell_pane_ParamLimits

0xea77,	// (0x0001e296) keyp_game_cell_pane

0x1bbe,	// (0x000113dd) bg_button_pane_cp02

0xea9d,	// (0x0001e2bc) keyp_game_cell_pane_g1

0xb2eb,	// (0x0001ab0a) popup_fep_vkb2_window_ParamLimits

0xb2eb,	// (0x0001ab0a) popup_fep_vkb2_window

0xb77a,	// (0x0001af99) aid_size_cell_vkb2_ParamLimits

0xb77a,	// (0x0001af99) aid_size_cell_vkb2

0xb7a8,	// (0x0001afc7) popup_fep_vkb2_window_g1_ParamLimits

0xb7a8,	// (0x0001afc7) popup_fep_vkb2_window_g1

0xb7f8,	// (0x0001b017) vkb2_area_bottom_pane_ParamLimits

0xb7f8,	// (0x0001b017) vkb2_area_bottom_pane

0xb854,	// (0x0001b073) vkb2_area_keypad_pane_ParamLimits

0xb854,	// (0x0001b073) vkb2_area_keypad_pane

0xb8a2,	// (0x0001b0c1) vkb2_area_top_pane_ParamLimits

0xb8a2,	// (0x0001b0c1) vkb2_area_top_pane

0xb928,	// (0x0001b147) vkb2_top_entry_pane_ParamLimits

0xb928,	// (0x0001b147) vkb2_top_entry_pane

0xb955,	// (0x0001b174) vkb2_top_grid_left_pane_ParamLimits

0xb955,	// (0x0001b174) vkb2_top_grid_left_pane

0xb975,	// (0x0001b194) vkb2_top_grid_right_pane_ParamLimits

0xb975,	// (0x0001b194) vkb2_top_grid_right_pane

0x163b,	// (0x00010e5a) vkb2_cell_keypad_pane_ParamLimits

0x163b,	// (0x00010e5a) vkb2_cell_keypad_pane

0xb9bb,	// (0x0001b1da) vkb2_area_bottom_grid_pane_ParamLimits

0xb9bb,	// (0x0001b1da) vkb2_area_bottom_grid_pane

0xb9e5,	// (0x0001b204) vkb2_area_bottom_pane_g1_ParamLimits

0xb9e5,	// (0x0001b204) vkb2_area_bottom_pane_g1

0xba0b,	// (0x0001b22a) vkb2_area_bottom_pane_g2_ParamLimits

0xba0b,	// (0x0001b22a) vkb2_area_bottom_pane_g2

0xba3c,	// (0x0001b25b) vkb2_area_bottom_pane_g3_ParamLimits

0xba3c,	// (0x0001b25b) vkb2_area_bottom_pane_g3

0x0002,

0xfdbf,	// (0x0001f5de) vkb2_area_bottom_pane_g_ParamLimits

0xfdbf,	// (0x0001f5de) vkb2_area_bottom_pane_g

0x17ca,	// (0x00010fe9) vkb2_top_cell_left_pane_ParamLimits

0x17ca,	// (0x00010fe9) vkb2_top_cell_left_pane

0xeaa6,	// (0x0001e2c5) vkb2_top_entry_pane_g1_ParamLimits

0xeaa6,	// (0x0001e2c5) vkb2_top_entry_pane_g1

0xeab4,	// (0x0001e2d3) vkb2_top_entry_pane_t1_ParamLimits

0xeab4,	// (0x0001e2d3) vkb2_top_entry_pane_t1

0x941c,	// (0x00018c3b) vkb2_top_entry_pane_t2_ParamLimits

0x941c,	// (0x00018c3b) vkb2_top_entry_pane_t2

0x9434,	// (0x00018c53) vkb2_top_entry_pane_t3_ParamLimits

0x9434,	// (0x00018c53) vkb2_top_entry_pane_t3

0x0002,

0xfdc6,	// (0x0001f5e5) vkb2_top_entry_pane_t_ParamLimits

0xfdc6,	// (0x0001f5e5) vkb2_top_entry_pane_t

0xbaa6,	// (0x0001b2c5) vkb2_top_grid_right_pane_g1_ParamLimits

0xbaa6,	// (0x0001b2c5) vkb2_top_grid_right_pane_g1

0x182d,	// (0x0001104c) vkb2_top_grid_right_pane_g2_ParamLimits

0x182d,	// (0x0001104c) vkb2_top_grid_right_pane_g2

0x1845,	// (0x00011064) vkb2_top_grid_right_pane_g3_ParamLimits

0x1845,	// (0x00011064) vkb2_top_grid_right_pane_g3

0xbabc,	// (0x0001b2db) vkb2_top_grid_right_pane_g4_ParamLimits

0xbabc,	// (0x0001b2db) vkb2_top_grid_right_pane_g4

0x0003,

0xfdcd,	// (0x0001f5ec) vkb2_top_grid_right_pane_g_ParamLimits

0xfdcd,	// (0x0001f5ec) vkb2_top_grid_right_pane_g

0x1873,	// (0x00011092) vkb2_top_cell_left_pane_g1

0x188a,	// (0x000110a9) vkb2_cell_keypad_pane_g1_ParamLimits

0x188a,	// (0x000110a9) vkb2_cell_keypad_pane_g1

0x944a,	// (0x00018c69) vkb2_cell_keypad_pane_t1_ParamLimits

0x944a,	// (0x00018c69) vkb2_cell_keypad_pane_t1

0x18ae,	// (0x000110cd) vkb2_cell_bottom_grid_pane_ParamLimits

0x18ae,	// (0x000110cd) vkb2_cell_bottom_grid_pane

0x18e7,	// (0x00011106) vkb2_cell_bottom_grid_pane_g1

0xe76d,	// (0x0001df8c) aid_call2_pane_cp02

0xe775,	// (0x0001df94) aid_call_pane_cp02

0xe77d,	// (0x0001df9c) clock_digital_number_pane_cp10

0xe785,	// (0x0001dfa4) clock_digital_number_pane_cp11

0xe78d,	// (0x0001dfac) clock_digital_number_pane_cp12

0xe795,	// (0x0001dfb4) clock_digital_number_pane_cp13

0xe79d,	// (0x0001dfbc) clock_digital_separator_pane_cp10

0x32c0,	// (0x00012adf) popup_clock_digital_analogue_window_cp2_g1

0x32c0,	// (0x00012adf) popup_clock_digital_analogue_window_cp2_g2

0xe7a5,	// (0x0001dfc4) popup_clock_digital_analogue_window_cp2_g3

0x32c0,	// (0x00012adf) popup_clock_digital_analogue_window_cp2_g4

0xe7a5,	// (0x0001dfc4) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd82,	// (0x0001f5a1) popup_clock_digital_analogue_window_cp2_g

0xe7ad,	// (0x0001dfcc) popup_clock_digital_analogue_window_cp2_t1

0xe7bb,	// (0x0001dfda) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd8d,	// (0x0001f5ac) popup_clock_digital_analogue_window_cp2_t

0x71b4,	// (0x000169d3) clock_digital_number_pane_cp10_g1

0x71b4,	// (0x000169d3) clock_digital_number_pane_cp10_g2

0x0001,

0xfb69,	// (0x0001f388) clock_digital_number_pane_cp10_g

0x71b4,	// (0x000169d3) clock_digital_separator_pane_cp10_g1

0x71b4,	// (0x000169d3) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb69,	// (0x0001f388) clock_digital_separator_pane_cp10_g

0x8ebb,	// (0x000186da) uniindi_top_pane_g3

0x8ecc,	// (0x000186eb) uniindi_top_pane_g4

0x16ab,	// (0x00010eca) vkb2_row_keypad_pane_ParamLimits

0x16ab,	// (0x00010eca) vkb2_row_keypad_pane

0x1903,	// (0x00011122) vkb2_cell_t_keypad_pane_ParamLimits

0x1903,	// (0x00011122) vkb2_cell_t_keypad_pane

0x1913,	// (0x00011132) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x1913,	// (0x00011132) vkb2_cell_t_keypad_pane_cp08

0x1928,	// (0x00011147) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x1928,	// (0x00011147) vkb2_cell_t_keypad_pane_cp09

0x193c,	// (0x0001115b) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x193c,	// (0x0001115b) vkb2_cell_t_keypad_pane_cp01

0x194d,	// (0x0001116c) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x194d,	// (0x0001116c) vkb2_cell_t_keypad_pane_cp02

0x195e,	// (0x0001117d) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x195e,	// (0x0001117d) vkb2_cell_t_keypad_pane_cp03

0x196f,	// (0x0001118e) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x196f,	// (0x0001118e) vkb2_cell_t_keypad_pane_cp04

0x1980,	// (0x0001119f) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x1980,	// (0x0001119f) vkb2_cell_t_keypad_pane_cp05

0x1991,	// (0x000111b0) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x1991,	// (0x000111b0) vkb2_cell_t_keypad_pane_cp06

0x19a4,	// (0x000111c3) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x19a4,	// (0x000111c3) vkb2_cell_t_keypad_pane_cp07

0x19b9,	// (0x000111d8) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x19b9,	// (0x000111d8) vkb2_cell_t_keypad_pane_cp10

0x115c,	// (0x0001097b) vkb2_cell_t_keypad_pane_g1

0x9461,	// (0x00018c80) vkb2_cell_t_keypad_pane_t1

0x00fb,	// (0x0000f91a) popup_grid_graphic2_window

0xeafa,	// (0x0001e319) aid_size_cell_graphic2_ParamLimits

0xeafa,	// (0x0001e319) aid_size_cell_graphic2

0x4f08,	// (0x00014727) bg_popup_window_pane_cp21_ParamLimits

0x4f08,	// (0x00014727) bg_popup_window_pane_cp21

0xeb2c,	// (0x0001e34b) graphic2_pages_pane_ParamLimits

0xeb2c,	// (0x0001e34b) graphic2_pages_pane

0xeb84,	// (0x0001e3a3) grid_graphic2_control_pane_ParamLimits

0xeb84,	// (0x0001e3a3) grid_graphic2_control_pane

0xebb8,	// (0x0001e3d7) grid_graphic2_pane_ParamLimits

0xebb8,	// (0x0001e3d7) grid_graphic2_pane

0xec2f,	// (0x0001e44e) cell_graphic2_pane

0x1bbe,	// (0x000113dd) main_comp_mode_pane

0x86c9,	// (0x00017ee8) list_ai3_gene_pane_ParamLimits

0xe4a8,	// (0x0001dcc7) bg_popup_window_pane_cp19_ParamLimits

0x8b00,	// (0x0001831f) bg_touch_area_indi_pane_ParamLimits

0x8b00,	// (0x0001831f) bg_touch_area_indi_pane

0x8b16,	// (0x00018335) bg_touch_area_indi_pane_cp01_ParamLimits

0x8b16,	// (0x00018335) bg_touch_area_indi_pane_cp01

0x8b2e,	// (0x0001834d) bg_touch_area_indi_pane_cp02_ParamLimits

0x8b2e,	// (0x0001834d) bg_touch_area_indi_pane_cp02

0x8b48,	// (0x00018367) bg_touch_area_indi_pane_cp03_ParamLimits

0x8b48,	// (0x00018367) bg_touch_area_indi_pane_cp03

0x8b62,	// (0x00018381) popup_slider_window_g1_ParamLimits

0x8b7e,	// (0x0001839d) popup_slider_window_g2_ParamLimits

0x8b9a,	// (0x000183b9) popup_slider_window_g3_ParamLimits

0xfd17,	// (0x0001f536) popup_slider_window_g_ParamLimits

0x8bf6,	// (0x00018415) popup_slider_window_t1_ParamLimits

0x8c6a,	// (0x00018489) small_volume_slider_vertical_pane_ParamLimits

0xec2f,	// (0x0001e44e) cell_graphic2_pane_ParamLimits

0xec92,	// (0x0001e4b1) bg_button_pane_cp10_ParamLimits

0xec92,	// (0x0001e4b1) bg_button_pane_cp10

0xeca5,	// (0x0001e4c4) bg_button_pane_cp11_ParamLimits

0xeca5,	// (0x0001e4c4) bg_button_pane_cp11

0xecb8,	// (0x0001e4d7) graphic2_pages_pane_g1_ParamLimits

0xecb8,	// (0x0001e4d7) graphic2_pages_pane_g1

0xecd3,	// (0x0001e4f2) graphic2_pages_pane_g2_ParamLimits

0xecd3,	// (0x0001e4f2) graphic2_pages_pane_g2

0x0001,

0xfddb,	// (0x0001f5fa) graphic2_pages_pane_g_ParamLimits

0xfddb,	// (0x0001f5fa) graphic2_pages_pane_g

0xeceb,	// (0x0001e50a) graphic2_pages_pane_t1_ParamLimits

0xeceb,	// (0x0001e50a) graphic2_pages_pane_t1

0xed03,	// (0x0001e522) cell_graphic2_control_pane_ParamLimits

0xed03,	// (0x0001e522) cell_graphic2_control_pane

0xed1d,	// (0x0001e53c) cell_graphic2_pane_g1_ParamLimits

0xed1d,	// (0x0001e53c) cell_graphic2_pane_g1

0xc623,	// (0x0001be42) cell_graphic2_pane_g2_ParamLimits

0xc623,	// (0x0001be42) cell_graphic2_pane_g2

0xeaed,	// (0x0001e30c) cell_graphic2_pane_g3_ParamLimits

0xeaed,	// (0x0001e30c) cell_graphic2_pane_g3

0xc630,	// (0x0001be4f) cell_graphic2_pane_g4_ParamLimits

0xc630,	// (0x0001be4f) cell_graphic2_pane_g4

0xed2a,	// (0x0001e549) cell_graphic2_pane_g5_ParamLimits

0xed2a,	// (0x0001e549) cell_graphic2_pane_g5

0x0004,

0xfde0,	// (0x0001f5ff) cell_graphic2_pane_g_ParamLimits

0xfde0,	// (0x0001f5ff) cell_graphic2_pane_g

0xed4a,	// (0x0001e569) cell_graphic2_pane_t1_ParamLimits

0xed4a,	// (0x0001e569) cell_graphic2_pane_t1

0x557f,	// (0x00014d9e) grid_highlight_pane_cp11_ParamLimits

0x557f,	// (0x00014d9e) grid_highlight_pane_cp11

0x2aee,	// (0x0001230d) bg_button_pane_cp05

0xed61,	// (0x0001e580) cell_graphic2_control_pane_g1

0x71b4,	// (0x000169d3) bg_touch_area_indi_pane_g1

0x96c9,	// (0x00018ee8) aid_cmod_rocker_key_size

0x96d3,	// (0x00018ef2) aid_cmode_itu_key_size

0x96dd,	// (0x00018efc) main_cmode_video_pane

0x96e7,	// (0x00018f06) main_comp_mode_itu_pane

0x96f3,	// (0x00018f12) main_comp_mode_rocker_pane

0x96ff,	// (0x00018f1e) cell_cmode_rocker_pane_ParamLimits

0x96ff,	// (0x00018f1e) cell_cmode_rocker_pane

0x9713,	// (0x00018f32) cell_cmode_itu_pane_ParamLimits

0x9713,	// (0x00018f32) cell_cmode_itu_pane

0x2aee,	// (0x0001230d) bg_button_pane_cp06_ParamLimits

0x2aee,	// (0x0001230d) bg_button_pane_cp06

0x743e,	// (0x00016c5d) cell_cmode_rocker_pane_g1_ParamLimits

0x743e,	// (0x00016c5d) cell_cmode_rocker_pane_g1

0x8d11,	// (0x00018530) cell_cmode_rocker_pane_g2_ParamLimits

0x8d11,	// (0x00018530) cell_cmode_rocker_pane_g2

0x0001,

0xfdeb,	// (0x0001f60a) cell_cmode_rocker_pane_g_ParamLimits

0xfdeb,	// (0x0001f60a) cell_cmode_rocker_pane_g

0x1bbe,	// (0x000113dd) bg_button_pane_cp07

0x972a,	// (0x00018f49) cell_cmode_itu_pane_g1

0x9733,	// (0x00018f52) cell_cmode_itu_pane_t1

0x9741,	// (0x00018f60) cell_cmode_itu_pane_t2

0x0001,

0xfdf0,	// (0x0001f60f) cell_cmode_itu_pane_t

0x8f3f,	// (0x0001875e) aid_touch_ctrl_left

0x8f47,	// (0x00018766) aid_touch_ctrl_right

0x1bbe,	// (0x000113dd) compa_mode_pane

0xed6e,	// (0x0001e58d) aid_cmod_rocker_key_size_cp

0xed78,	// (0x0001e597) aid_cmode_itu_key_size_cp

0x9763,	// (0x00018f82) compa_mode_pane_g1

0x976b,	// (0x00018f8a) compa_mode_pane_g2

0x9773,	// (0x00018f92) compa_mode_pane_g3

0x0002,

0xfdf5,	// (0x0001f614) compa_mode_pane_g

0xed82,	// (0x0001e5a1) main_comp_mode_itu_pane_cp

0xed8a,	// (0x0001e5a9) main_comp_mode_rocker_pane_cp

0xed92,	// (0x0001e5b1) cell_cmode_itu_pane_cp_ParamLimits

0xed92,	// (0x0001e5b1) cell_cmode_itu_pane_cp

0xeda7,	// (0x0001e5c6) cell_cmode_rocker_pane_cp_ParamLimits

0xeda7,	// (0x0001e5c6) cell_cmode_rocker_pane_cp

0x2aee,	// (0x0001230d) bg_button_pane_cp06_cp_ParamLimits

0x2aee,	// (0x0001230d) bg_button_pane_cp06_cp

0x743e,	// (0x00016c5d) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x743e,	// (0x00016c5d) cell_cmode_rocker_pane_g1_cp

0x71b4,	// (0x000169d3) cell_cmode_rocker_pane_g2_cp

0x1bbe,	// (0x000113dd) bg_button_pane_cp07_cp

0xedb9,	// (0x0001e5d8) cell_cmode_itu_pane_g1_cp

0xedc2,	// (0x0001e5e1) cell_cmode_itu_pane_t1_cp

0xedc2,	// (0x0001e5e1) cell_cmode_itu_pane_t2_cp

0xd87a,	// (0x0001d099) settings_code_pane_cp2

0x1cb2,	// (0x000114d1) bg_popup_window_pane_cp3_ParamLimits

0x2144,	// (0x00011963) heading_pane_cp3_ParamLimits

0x2150,	// (0x0001196f) listscroll_popup_graphic_pane_ParamLimits

0x0eef,	// (0x0001070e) fep_hwr_aid_pane_ParamLimits

0x1382,	// (0x00010ba1) aid_touch_sctrl_top_ParamLimits

0x139d,	// (0x00010bbc) sctrl_sk_top_pane_g1_ParamLimits

0x115c,	// (0x0001097b) sctrl_sk_top_pane_g2_ParamLimits

0xfd30,	// (0x0001f54f) sctrl_sk_top_pane_g_ParamLimits

0x13aa,	// (0x00010bc9) sctrl_sk_top_pane_t1_ParamLimits

0x1382,	// (0x00010ba1) aid_touch_sctrl_bottom_ParamLimits

0x13aa,	// (0x00010bc9) sctrl_sk_bottom_pane_t1_ParamLimits

0x8e85,	// (0x000186a4) aid_area_touch_clock

0xb8ea,	// (0x0001b109) aid_vkb2_area_top_pane_cell_ParamLimits

0xb8ea,	// (0x0001b109) aid_vkb2_area_top_pane_cell

0xb995,	// (0x0001b1b4) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xb995,	// (0x0001b1b4) aid_vkb2_area_bottom_pane_cell

0x93ee,	// (0x00018c0d) popup_char_count_window

0x97c9,	// (0x00018fe8) popup_char_count_window_g1

0x97d2,	// (0x00018ff1) popup_char_count_window_g2

0x97db,	// (0x00018ffa) popup_char_count_window_g3

0x0002,

0xfdfc,	// (0x0001f61b) popup_char_count_window_g

0x97e4,	// (0x00019003) popup_char_count_window_t1

0x1457,	// (0x00010c76) popup_fep_char_preview_window_ParamLimits

0x1457,	// (0x00010c76) popup_fep_char_preview_window

0xb90a,	// (0x0001b129) vkb2_top_candi_pane_ParamLimits

0xb90a,	// (0x0001b129) vkb2_top_candi_pane

0xedd0,	// (0x0001e5ef) cell_vkb2_top_candi_pane_ParamLimits

0xedd0,	// (0x0001e5ef) cell_vkb2_top_candi_pane

0x19ce,	// (0x000111ed) bg_popup_fep_char_preview_window_ParamLimits

0x19ce,	// (0x000111ed) bg_popup_fep_char_preview_window

0x19dc,	// (0x000111fb) popup_fep_char_preview_window_t1_ParamLimits

0x19dc,	// (0x000111fb) popup_fep_char_preview_window_t1

0x9843,	// (0x00019062) bg_popup_fep_char_preview_window_g1

0x984b,	// (0x0001906a) bg_popup_fep_char_preview_window_g2

0x9853,	// (0x00019072) bg_popup_fep_char_preview_window_g3

0x985b,	// (0x0001907a) bg_popup_fep_char_preview_window_g4

0x9863,	// (0x00019082) bg_popup_fep_char_preview_window_g5

0x1a16,	// (0x00011235) bg_popup_fep_char_preview_window_g6

0x986b,	// (0x0001908a) bg_popup_fep_char_preview_window_g7

0x9873,	// (0x00019092) bg_popup_fep_char_preview_window_g8

0x987b,	// (0x0001909a) bg_popup_fep_char_preview_window_g9

0x0008,

0xfe03,	// (0x0001f622) bg_popup_fep_char_preview_window_g

0x115c,	// (0x0001097b) cell_vkb2_top_candi_pane_g1_ParamLimits

0x115c,	// (0x0001097b) cell_vkb2_top_candi_pane_g1

0x116a,	// (0x00010989) cell_vkb2_top_candi_pane_g2_ParamLimits

0x116a,	// (0x00010989) cell_vkb2_top_candi_pane_g2

0x9883,	// (0x000190a2) cell_vkb2_top_candi_pane_g3_ParamLimits

0x9883,	// (0x000190a2) cell_vkb2_top_candi_pane_g3

0x1a1e,	// (0x0001123d) cell_vkb2_top_candi_pane_g4_ParamLimits

0x1a1e,	// (0x0001123d) cell_vkb2_top_candi_pane_g4

0x7b10,	// (0x0001732f) cell_vkb2_top_candi_pane_g5_ParamLimits

0x7b10,	// (0x0001732f) cell_vkb2_top_candi_pane_g5

0x1a3f,	// (0x0001125e) cell_vkb2_top_candi_pane_g6_ParamLimits

0x1a3f,	// (0x0001125e) cell_vkb2_top_candi_pane_g6

0x0005,

0xfe16,	// (0x0001f635) cell_vkb2_top_candi_pane_g_ParamLimits

0xfe16,	// (0x0001f635) cell_vkb2_top_candi_pane_g

0x1a4d,	// (0x0001126c) cell_vkb2_top_candi_pane_t1

0x0d4f,	// (0x0001056e) aid_size_touch_slider_mark_ParamLimits

0x0d4f,	// (0x0001056e) aid_size_touch_slider_mark

0xeb68,	// (0x0001e387) grid_graphic2_catg_pane_ParamLimits

0xeb68,	// (0x0001e387) grid_graphic2_catg_pane

0xebfe,	// (0x0001e41d) popup_grid_graphic2_window_t1_ParamLimits

0xebfe,	// (0x0001e41d) popup_grid_graphic2_window_t1

0xec14,	// (0x0001e433) popup_grid_graphic2_window_t2_ParamLimits

0xec14,	// (0x0001e433) popup_grid_graphic2_window_t2

0x0001,

0xfdd6,	// (0x0001f5f5) popup_grid_graphic2_window_t_ParamLimits

0xfdd6,	// (0x0001f5f5) popup_grid_graphic2_window_t

0x2aee,	// (0x0001230d) bg_button_pane_cp05_ParamLimits

0xed61,	// (0x0001e580) cell_graphic2_control_pane_g1_ParamLimits

0xee24,	// (0x0001e643) cell_graphic2_catg_pane_ParamLimits

0xee24,	// (0x0001e643) cell_graphic2_catg_pane

0x1bbe,	// (0x000113dd) bg_button_pane_cp12

0xee36,	// (0x0001e655) cell_graphic2_catg_pane_g1

0x8e51,	// (0x00018670) cell_tb_ext_pane_t1_ParamLimits

0x17ea,	// (0x00011009) vkb2_top_cell_right_narrow_pane_ParamLimits

0x17ea,	// (0x00011009) vkb2_top_cell_right_narrow_pane

0x1802,	// (0x00011021) vkb2_top_cell_right_wide_pane_ParamLimits

0x1802,	// (0x00011021) vkb2_top_cell_right_wide_pane

0x0ee1,	// (0x00010700) bg_vkb2_func_pane_ParamLimits

0x0ee1,	// (0x00010700) bg_vkb2_func_pane

0x1873,	// (0x00011092) vkb2_top_cell_left_pane_g1_ParamLimits

0x0ee1,	// (0x00010700) bg_vkb2_fuc_pane_cp03_ParamLimits

0x0ee1,	// (0x00010700) bg_vkb2_fuc_pane_cp03

0x18e7,	// (0x00011106) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x4842,	// (0x00014061) bg_vkb2_func_pane_g1

0x484a,	// (0x00014069) bg_vkb2_func_pane_g2

0x485a,	// (0x00014079) bg_vkb2_func_pane_g3

0x4852,	// (0x00014071) bg_vkb2_func_pane_g4

0x4862,	// (0x00014081) bg_vkb2_func_pane_g5

0x486a,	// (0x00014089) bg_vkb2_func_pane_g6

0x4872,	// (0x00014091) bg_vkb2_func_pane_g7

0x487a,	// (0x00014099) bg_vkb2_func_pane_g8

0x483a,	// (0x00014059) bg_vkb2_func_pane_g9

0x0008,

0xfe23,	// (0x0001f642) bg_vkb2_func_pane_g

0x0ee1,	// (0x00010700) bg_vkb2_fuc_pane_cp01_ParamLimits

0x0ee1,	// (0x00010700) bg_vkb2_fuc_pane_cp01

0x1873,	// (0x00011092) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x1873,	// (0x00011092) vkb2_top_cell_right_wide_pane_g1

0x0ee1,	// (0x00010700) bg_vkb2_fuc_pane_cp02_ParamLimits

0x0ee1,	// (0x00010700) bg_vkb2_fuc_pane_cp02

0x18e7,	// (0x00011106) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x18e7,	// (0x00011106) vkb2_top_cell_right_narrow_pane_g1

0xe3e2,	// (0x0001dc01) aid_touch_area_decrease_ParamLimits

0xe3e2,	// (0x0001dc01) aid_touch_area_decrease

0xe41c,	// (0x0001dc3b) aid_touch_area_increase_ParamLimits

0xe41c,	// (0x0001dc3b) aid_touch_area_increase

0xe444,	// (0x0001dc63) aid_touch_area_mute_ParamLimits

0xe444,	// (0x0001dc63) aid_touch_area_mute

0xe474,	// (0x0001dc93) aid_touch_area_slider_ParamLimits

0xe474,	// (0x0001dc93) aid_touch_area_slider

0xe4b4,	// (0x0001dcd3) popup_slider_window_g4_ParamLimits

0xe4b4,	// (0x0001dcd3) popup_slider_window_g4

0xe4dc,	// (0x0001dcfb) popup_slider_window_g5_ParamLimits

0xe4dc,	// (0x0001dcfb) popup_slider_window_g5

0xe510,	// (0x0001dd2f) popup_slider_window_g6_ParamLimits

0xe510,	// (0x0001dd2f) popup_slider_window_g6

0x8c24,	// (0x00018443) popup_slider_window_t2_ParamLimits

0x8c24,	// (0x00018443) popup_slider_window_t2

0x0001,

0xfd24,	// (0x0001f543) popup_slider_window_t_ParamLimits

0xfd24,	// (0x0001f543) popup_slider_window_t

0xe52c,	// (0x0001dd4b) slider_pane_ParamLimits

0xe52c,	// (0x0001dd4b) slider_pane

0x98bf,	// (0x000190de) slider_pane_g1_ParamLimits

0x98bf,	// (0x000190de) slider_pane_g1

0x98d3,	// (0x000190f2) slider_pane_g2_ParamLimits

0x98d3,	// (0x000190f2) slider_pane_g2

0x98e9,	// (0x00019108) slider_pane_g3_ParamLimits

0x98e9,	// (0x00019108) slider_pane_g3

0x0003,

0xfe36,	// (0x0001f655) slider_pane_g_ParamLimits

0xfe36,	// (0x0001f655) slider_pane_g

0xcf80,	// (0x0001c79f) popup_tb_float_extension_window_ParamLimits

0xcf80,	// (0x0001c79f) popup_tb_float_extension_window

0x9915,	// (0x00019134) aid_size_cell_tb_float_ext

0x1bbe,	// (0x000113dd) bg_popup_sub_window_cp28

0x9921,	// (0x00019140) grid_tb_float_ext_pane

0x992d,	// (0x0001914c) cell_tb_float_ext_pane_ParamLimits

0x992d,	// (0x0001914c) cell_tb_float_ext_pane

0x9949,	// (0x00019168) cell_tb_float_ext_pane_g1

0x9952,	// (0x00019171) grid_highlight_pane_cp12

0xb6eb,	// (0x0001af0a) cell_last_hwr_side_pane_ParamLimits

0xb6eb,	// (0x0001af0a) cell_last_hwr_side_pane

0x71b4,	// (0x000169d3) cell_last_hwr_side_pane_g1

0x995b,	// (0x0001917a) cell_last_hwr_side_pane_g2

0x0001,

0xfe3f,	// (0x0001f65e) cell_last_hwr_side_pane_g

0xba71,	// (0x0001b290) vkb2_area_bottom_space_btn_pane_ParamLimits

0xba71,	// (0x0001b290) vkb2_area_bottom_space_btn_pane

0x115c,	// (0x0001097b) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x9461,	// (0x00018c80) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x1a4d,	// (0x0001126c) cell_vkb2_top_candi_pane_t1_ParamLimits

0x1a6b,	// (0x0001128a) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x1a6b,	// (0x0001128a) vkb2_area_bottom_space_btn_pane_g1

0x1aa5,	// (0x000112c4) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x1aa5,	// (0x000112c4) vkb2_area_bottom_space_btn_pane_g2

0x1adb,	// (0x000112fa) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x1adb,	// (0x000112fa) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe44,	// (0x0001f663) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe44,	// (0x0001f663) vkb2_area_bottom_space_btn_pane_g

0x0fa6,	// (0x000107c5) cel_fep_hwr_func_pane_ParamLimits

0x0fa6,	// (0x000107c5) cel_fep_hwr_func_pane

0xb6c0,	// (0x0001aedf) cell_hwr_side_button_pane_ParamLimits

0xb6c0,	// (0x0001aedf) cell_hwr_side_button_pane

0x8e85,	// (0x000186a4) aid_area_touch_clock_ParamLimits

0x1f56,	// (0x00011775) bg_uniindi_top_pane_ParamLimits

0x8e99,	// (0x000186b8) uniindi_top_pane_g1_ParamLimits

0x8eaf,	// (0x000186ce) uniindi_top_pane_g2_ParamLimits

0x8ebb,	// (0x000186da) uniindi_top_pane_g3_ParamLimits

0x8ecc,	// (0x000186eb) uniindi_top_pane_g4_ParamLimits

0xfd5c,	// (0x0001f57b) uniindi_top_pane_g_ParamLimits

0x8ed9,	// (0x000186f8) uniindi_top_pane_t1_ParamLimits

0x1f56,	// (0x00011775) bg_vkb2_func_pane_cp01_ParamLimits

0x1f56,	// (0x00011775) bg_vkb2_func_pane_cp01

0x9964,	// (0x00019183) cel_fep_hwr_func_pane_g1_ParamLimits

0x9964,	// (0x00019183) cel_fep_hwr_func_pane_g1

0x1f56,	// (0x00011775) bg_vkb2_func_pane_cp02_ParamLimits

0x1f56,	// (0x00011775) bg_vkb2_func_pane_cp02

0x9964,	// (0x00019183) cell_hwr_side_button_pane_g1_ParamLimits

0x9964,	// (0x00019183) cell_hwr_side_button_pane_g1

0x468d,	// (0x00013eac) status_pane_g4_ParamLimits

0x468d,	// (0x00013eac) status_pane_g4

0x46a7,	// (0x00013ec6) status_pane_t1

0x6f50,	// (0x0001676f) form2_midp_gauge_slider_cont_pane

0x6f58,	// (0x00016777) form2_midp_gauge_slider_pane_t1_ParamLimits

0xdbb7,	// (0x0001d3d6) form2_midp_gauge_slider_pane_t2_ParamLimits

0xdbc9,	// (0x0001d3e8) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb1c,	// (0x0001f33b) form2_midp_gauge_slider_pane_t_ParamLimits

0x6f8e,	// (0x000167ad) form2_midp_slider_pane_ParamLimits

0x141f,	// (0x00010c3e) aid_size_cell_func_vkb2_ParamLimits

0x141f,	// (0x00010c3e) aid_size_cell_func_vkb2

0x9901,	// (0x00019120) slider_pane_g4_ParamLimits

0x9901,	// (0x00019120) slider_pane_g4

0xbad2,	// (0x0001b2f1) form2_midp_gauge_slider_pane_t2_cp01

0xbae0,	// (0x0001b2ff) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xbae0,	// (0x0001b2ff) form2_midp_gauge_slider_pane_t3_cp01

0x1b50,	// (0x0001136f) form2_midp_slider_pane_cp01

0x1bbe,	// (0x000113dd) navi_smil_pane

0x999d,	// (0x000191bc) navi_smil_pane_g1

0x99a5,	// (0x000191c4) navi_smil_pane_t1

0x9972,	// (0x00019191) form2_midp_slider_pane_g1

0x997b,	// (0x0001919a) form2_midp_slider_pane_g2

0x9983,	// (0x000191a2) form2_midp_slider_pane_g3

0x9972,	// (0x00019191) form2_midp_slider_pane_g4

0xee3f,	// (0x0001e65e) form2_midp_slider_pane_g5

0x0004,

0xfe4d,	// (0x0001f66c) form2_midp_slider_pane_g

0x1b15,	// (0x00011334) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x1b15,	// (0x00011334) vkb2_area_bottom_space_btn_pane_g4

0xd160,	// (0x0001c97f) lc0_navi_pane_ParamLimits

0xd160,	// (0x0001c97f) lc0_navi_pane

0xd1d0,	// (0x0001c9ef) lc0_stat_indi_pane_ParamLimits

0xd1d0,	// (0x0001c9ef) lc0_stat_indi_pane

0xd1e5,	// (0x0001ca04) ls0_title_pane_ParamLimits

0xd1e5,	// (0x0001ca04) ls0_title_pane

0x2aee,	// (0x0001230d) bg_popup_sub_pane_cp14_ParamLimits

0x8e6c,	// (0x0001868b) list_uniindi_pane_ParamLimits

0x8e78,	// (0x00018697) uniindi_top_pane_ParamLimits

0x8f17,	// (0x00018736) list_single_uniindi_pane_g1_ParamLimits

0x8f2a,	// (0x00018749) list_single_uniindi_pane_t1_ParamLimits

0xbafd,	// (0x0001b31c) lc0_stat_clock_pane_ParamLimits

0xbafd,	// (0x0001b31c) lc0_stat_clock_pane

0xee48,	// (0x0001e667) lc0_stat_indi_pane_g1_ParamLimits

0xee48,	// (0x0001e667) lc0_stat_indi_pane_g1

0xee55,	// (0x0001e674) lc0_stat_indi_pane_g2_ParamLimits

0xee55,	// (0x0001e674) lc0_stat_indi_pane_g2

0x0001,

0xfe58,	// (0x0001f677) lc0_stat_indi_pane_g_ParamLimits

0xfe58,	// (0x0001f677) lc0_stat_indi_pane_g

0xbb0a,	// (0x0001b329) lc0_uni_indicator_pane_ParamLimits

0xbb0a,	// (0x0001b329) lc0_uni_indicator_pane

0xee62,	// (0x0001e681) ls0_title_pane_g1_ParamLimits

0xee62,	// (0x0001e681) ls0_title_pane_g1

0xee76,	// (0x0001e695) ls0_title_pane_t1_ParamLimits

0xee76,	// (0x0001e695) ls0_title_pane_t1

0xbb17,	// (0x0001b336) lc0_uni_indicator_pane_g1_ParamLimits

0xbb17,	// (0x0001b336) lc0_uni_indicator_pane_g1

0x9a17,	// (0x00019236) lc0_stat_clock_pane_t1

0x1bbe,	// (0x000113dd) main_ai5_pane

0x9a25,	// (0x00019244) ai5_sk_pane_ParamLimits

0x9a25,	// (0x00019244) ai5_sk_pane

0xeea4,	// (0x0001e6c3) cell_ai5_widget_pane_ParamLimits

0xeea4,	// (0x0001e6c3) cell_ai5_widget_pane

0x9aa8,	// (0x000192c7) aid_size_cell_widget_grid

0x9abc,	// (0x000192db) bg_ai5_widget_pane_ParamLimits

0x9abc,	// (0x000192db) bg_ai5_widget_pane

0xef31,	// (0x0001e750) cell_ai5_widget_pane_g2

0xef41,	// (0x0001e760) cell_ai5_widget_pane_g3

0xef55,	// (0x0001e774) cell_ai5_widget_pane_g4

0xef61,	// (0x0001e780) cell_ai5_widget_pane_g5

0xef6d,	// (0x0001e78c) cell_ai5_widget_pane_g6

0xef79,	// (0x0001e798) cell_ai5_widget_pane_g7

0xefc1,	// (0x0001e7e0) cell_ai5_widget_pane_t1_ParamLimits

0xefc1,	// (0x0001e7e0) cell_ai5_widget_pane_t1

0xefde,	// (0x0001e7fd) cell_ai5_widget_pane_t2_ParamLimits

0xefde,	// (0x0001e7fd) cell_ai5_widget_pane_t2

0xeff6,	// (0x0001e815) cell_ai5_widget_pane_t3_ParamLimits

0xeff6,	// (0x0001e815) cell_ai5_widget_pane_t3

0xf00e,	// (0x0001e82d) cell_ai5_widget_pane_t4_ParamLimits

0xf00e,	// (0x0001e82d) cell_ai5_widget_pane_t4

0xf028,	// (0x0001e847) cell_ai5_widget_pane_t5_ParamLimits

0xf028,	// (0x0001e847) cell_ai5_widget_pane_t5

0x9bfc,	// (0x0001941b) cell_ai5_widget_pane_t6_ParamLimits

0x9bfc,	// (0x0001941b) cell_ai5_widget_pane_t6

0x9c0e,	// (0x0001942d) cell_ai5_widget_pane_t7_ParamLimits

0x9c0e,	// (0x0001942d) cell_ai5_widget_pane_t7

0xf047,	// (0x0001e866) cell_ai5_widget_pane_t8_ParamLimits

0xf047,	// (0x0001e866) cell_ai5_widget_pane_t8

0x0009,

0xfe72,	// (0x0001f691) cell_ai5_widget_pane_t_ParamLimits

0xfe72,	// (0x0001f691) cell_ai5_widget_pane_t

0xf08f,	// (0x0001e8ae) grid_ai5_widget_pane

0x2aee,	// (0x0001230d) highlight_cell_ai5_widget_pane_ParamLimits

0x2aee,	// (0x0001230d) highlight_cell_ai5_widget_pane

0xf0a6,	// (0x0001e8c5) ai5_sk_left_pane

0xf0b0,	// (0x0001e8cf) ai5_sk_middle_pane

0xf0ba,	// (0x0001e8d9) ai5_sk_right_pane

0x9ca4,	// (0x000194c3) bg_ai5_widget_pane_g1_ParamLimits

0x9ca4,	// (0x000194c3) bg_ai5_widget_pane_g1

0x9cb0,	// (0x000194cf) bg_ai5_widget_pane_g2_ParamLimits

0x9cb0,	// (0x000194cf) bg_ai5_widget_pane_g2

0x9cbc,	// (0x000194db) bg_ai5_widget_pane_g3_ParamLimits

0x9cbc,	// (0x000194db) bg_ai5_widget_pane_g3

0x9cc8,	// (0x000194e7) bg_ai5_widget_pane_g4_ParamLimits

0x9cc8,	// (0x000194e7) bg_ai5_widget_pane_g4

0x9cd4,	// (0x000194f3) bg_ai5_widget_pane_g5_ParamLimits

0x9cd4,	// (0x000194f3) bg_ai5_widget_pane_g5

0x9ce0,	// (0x000194ff) bg_ai5_widget_pane_g6_ParamLimits

0x9ce0,	// (0x000194ff) bg_ai5_widget_pane_g6

0x9cec,	// (0x0001950b) bg_ai5_widget_pane_g7_ParamLimits

0x9cec,	// (0x0001950b) bg_ai5_widget_pane_g7

0x9cf8,	// (0x00019517) bg_ai5_widget_pane_g8_ParamLimits

0x9cf8,	// (0x00019517) bg_ai5_widget_pane_g8

0x9d04,	// (0x00019523) bg_ai5_widget_pane_g9_ParamLimits

0x9d04,	// (0x00019523) bg_ai5_widget_pane_g9

0x0008,

0xfe87,	// (0x0001f6a6) bg_ai5_widget_pane_g_ParamLimits

0xfe87,	// (0x0001f6a6) bg_ai5_widget_pane_g

0x9d29,	// (0x00019548) cell_shortcut_ai5_widget_pane_ParamLimits

0x9d29,	// (0x00019548) cell_shortcut_ai5_widget_pane

0x1d98,	// (0x000115b7) bg_cell_shortcut_ai5_widget_pane

0x9d3b,	// (0x0001955a) cell_grid_ai5_widget_pane_g1

0x9d44,	// (0x00019563) highlight_cell_shortcut_ai5_widget_pane

0x4842,	// (0x00014061) ai5_sk_left_pane_g1

0x9d4c,	// (0x0001956b) ai5_sk_left_pane_g2

0x9d54,	// (0x00019573) ai5_sk_left_pane_g3

0x9d5c,	// (0x0001957b) ai5_sk_left_pane_g4

0x0003,

0xfe9a,	// (0x0001f6b9) ai5_sk_left_pane_g

0x9d64,	// (0x00019583) ai5_sk_left_pane_t1

0x484a,	// (0x00014069) ai5_sk_right_pane_g1

0x9d72,	// (0x00019591) ai5_sk_right_pane_g2

0x9d7a,	// (0x00019599) ai5_sk_right_pane_g3

0x9d82,	// (0x000195a1) ai5_sk_right_pane_g4

0x0003,

0xfea3,	// (0x0001f6c2) ai5_sk_right_pane_g

0x9d8a,	// (0x000195a9) ai5_sk_right_pane_t1

0x484a,	// (0x00014069) ai5_sk_middle_pane_g1

0x4842,	// (0x00014061) ai5_sk_middle_pane_g2

0x4862,	// (0x00014081) ai5_sk_middle_pane_g3

0x9d7a,	// (0x00019599) ai5_sk_middle_pane_g4

0x9d54,	// (0x00019573) ai5_sk_middle_pane_g5

0x9d98,	// (0x000195b7) ai5_sk_middle_pane_g6

0xf0c4,	// (0x0001e8e3) ai5_sk_middle_pane_g7

0x0006,

0xfeac,	// (0x0001f6cb) ai5_sk_middle_pane_g

0xd04a,	// (0x0001c869) aid_touch_area_size_lc0_ParamLimits

0xd04a,	// (0x0001c869) aid_touch_area_size_lc0

0x118b,	// (0x000109aa) cell_hwr_candidate_pane_t1_ParamLimits

0x4345,	// (0x00013b64) aid_touch_navi_pane

0xd2ef,	// (0x0001cb0e) status_dt_navi_pane_ParamLimits

0xd2ef,	// (0x0001cb0e) status_dt_navi_pane

0xd307,	// (0x0001cb26) status_dt_sta_pane_ParamLimits

0xd307,	// (0x0001cb26) status_dt_sta_pane

0xf0cc,	// (0x0001e8eb) dt_sta_controll_pane

0xf0d9,	// (0x0001e8f8) dt_sta_indi_pane

0xf0e6,	// (0x0001e905) dt_sta_title_pane

0x1f56,	// (0x00011775) bg_dt_sta_indi_pane_ParamLimits

0x1f56,	// (0x00011775) bg_dt_sta_indi_pane

0xf0f8,	// (0x0001e917) dt_sta_battery_pane

0xf100,	// (0x0001e91f) dt_sta_indi_pane_g1

0xf109,	// (0x0001e928) dt_sta_indi_pane_g2

0xf112,	// (0x0001e931) dt_sta_indi_pane_g3

0x0002,

0xfebb,	// (0x0001f6da) dt_sta_indi_pane_g

0xf11b,	// (0x0001e93a) dt_sta_signal_pane

0x2aee,	// (0x0001230d) bg_dt_sta_title_pane_ParamLimits

0x2aee,	// (0x0001230d) bg_dt_sta_title_pane

0xf124,	// (0x0001e943) dt_sta_title_pane_g1

0xf12c,	// (0x0001e94b) dt_sta_title_pane_t1_ParamLimits

0xf12c,	// (0x0001e94b) dt_sta_title_pane_t1

0x1bbe,	// (0x000113dd) bg_dt_sta_control_pane

0xf141,	// (0x0001e960) dt_sta_controll_pane_g1

0xf14a,	// (0x0001e969) bg_dt_sta_title_pane_g1

0xf153,	// (0x0001e972) bg_dt_sta_title_pane_g2

0xf15c,	// (0x0001e97b) bg_dt_sta_title_pane_g3

0x0002,

0xfec2,	// (0x0001f6e1) bg_dt_sta_title_pane_g

0x71b4,	// (0x000169d3) bg_dt_sta_indi_pane_g1

0x9e46,	// (0x00019665) dt_sta_signal_pane_g1

0x9e4e,	// (0x0001966d) dt_sta_signal_pane_g2

0x0001,

0xfec9,	// (0x0001f6e8) dt_sta_signal_pane_g

0x9e56,	// (0x00019675) dt_sta_battery_pane_g1

0x9e5f,	// (0x0001967e) dt_sta_battery_pane_t1

0x71b4,	// (0x000169d3) bg_dt_sta_control_pane_g1

0x33ac,	// (0x00012bcb) fep_china_uni_eep_pane

0x33b4,	// (0x00012bd3) fep_china_uni_entry_pane_ParamLimits

0x33c4,	// (0x00012be3) popup_fep_china_uni_window_g1_ParamLimits

0x33d4,	// (0x00012bf3) popup_fep_china_uni_window_g2_ParamLimits

0x33d4,	// (0x00012bf3) popup_fep_china_uni_window_g2

0x0001,

0xf758,	// (0x0001ef77) popup_fep_china_uni_window_g_ParamLimits

0xf758,	// (0x0001ef77) popup_fep_china_uni_window_g

0x9e6e,	// (0x0001968d) fep_china_uni_eep_pane_g1

0x9e76,	// (0x00019695) fep_china_uni_eep_pane_t1

0x9994,	// (0x000191b3) aid_touch_area_size_smil_player

0x449d,	// (0x00013cbc) lc0_clock_pane

0x469b,	// (0x00013eba) status_pane_g5_ParamLimits

0x469b,	// (0x00013eba) status_pane_g5

0xcaaa,	// (0x0001c2c9) popup_keymap_window

0x4659,	// (0x00013e78) status_icon_pane

0xef41,	// (0x0001e760) cell_ai5_widget_pane_g3_ParamLimits

0xef55,	// (0x0001e774) cell_ai5_widget_pane_g4_ParamLimits

0xef61,	// (0x0001e780) cell_ai5_widget_pane_g5_ParamLimits

0xef85,	// (0x0001e7a4) cell_ai5_widget_pane_g8_ParamLimits

0xef85,	// (0x0001e7a4) cell_ai5_widget_pane_g8

0xef99,	// (0x0001e7b8) cell_ai5_widget_pane_g9_ParamLimits

0xef99,	// (0x0001e7b8) cell_ai5_widget_pane_g9

0xefad,	// (0x0001e7cc) cell_ai5_widget_pane_g10_ParamLimits

0xefad,	// (0x0001e7cc) cell_ai5_widget_pane_g10

0x9e85,	// (0x000196a4) status_icon_pane_g1

0x1bbe,	// (0x000113dd) bg_popup_sub_pane_cp13

0x9e8d,	// (0x000196ac) popup_keymap_window_t1

0xc89a,	// (0x0001c0b9) control_pane_g6_ParamLimits

0xc89a,	// (0x0001c0b9) control_pane_g6

0xc8a7,	// (0x0001c0c6) control_pane_g7_ParamLimits

0xc8a7,	// (0x0001c0c6) control_pane_g7

0xc8b4,	// (0x0001c0d3) control_pane_g8_ParamLimits

0xc8b4,	// (0x0001c0d3) control_pane_g8

0xf0cc,	// (0x0001e8eb) dt_sta_controll_pane_ParamLimits

0xf0d9,	// (0x0001e8f8) dt_sta_indi_pane_ParamLimits

0xf0e6,	// (0x0001e905) dt_sta_title_pane_ParamLimits

0x248b,	// (0x00011caa) aid_size_touch_scroll_bar_cale

0x01d8,	// (0x0000f9f7) popup_discreet_window_ParamLimits

0x01d8,	// (0x0000f9f7) popup_discreet_window

0xb335,	// (0x0001ab54) popup_sk_window

0x4f08,	// (0x00014727) bg_popup_sub_pane_cp28_ParamLimits

0x4f08,	// (0x00014727) bg_popup_sub_pane_cp28

0x9e9b,	// (0x000196ba) popup_discreet_window_g1_ParamLimits

0x9e9b,	// (0x000196ba) popup_discreet_window_g1

0x9ebb,	// (0x000196da) popup_discreet_window_t1_ParamLimits

0x9ebb,	// (0x000196da) popup_discreet_window_t1

0x9ed9,	// (0x000196f8) popup_discreet_window_t2_ParamLimits

0x9ed9,	// (0x000196f8) popup_discreet_window_t2

0x0002,

0xfece,	// (0x0001f6ed) popup_discreet_window_t_ParamLimits

0xfece,	// (0x0001f6ed) popup_discreet_window_t

0x1b86,	// (0x000113a5) popup_sk_window_g1

0x1b90,	// (0x000113af) popup_sk_window_g2

0x0001,

0xfed5,	// (0x0001f6f4) popup_sk_window_g

0x9f2b,	// (0x0001974a) popup_sk_window_t1

0x9f39,	// (0x00019758) popup_sk_window_t1_copy1

0xef31,	// (0x0001e750) cell_ai5_widget_pane_g2_ParamLimits

0xf059,	// (0x0001e878) cell_ai5_widget_pane_t9_ParamLimits

0xf059,	// (0x0001e878) cell_ai5_widget_pane_t9

0x1bbe,	// (0x000113dd) main_fep_fshwr2_pane

0xf165,	// (0x0001e984) aid_fshwr2_btn_pane

0xf16d,	// (0x0001e98c) aid_fshwr2_syb_pane

0xf175,	// (0x0001e994) aid_fshwr2_txt_pane

0xf17d,	// (0x0001e99c) fshwr2_func_candi_pane

0xf187,	// (0x0001e9a6) fshwr2_hwr_syb_pane

0xf193,	// (0x0001e9b2) fshwr2_icf_pane

0x1bbe,	// (0x000113dd) fshwr2_icf_bg_pane

0xf19d,	// (0x0001e9bc) fshwr2_icf_pane_t1_ParamLimits

0xf19d,	// (0x0001e9bc) fshwr2_icf_pane_t1

0x71b4,	// (0x000169d3) fshwr2_func_candi_pane_g1

0x9fac,	// (0x000197cb) fshwr2_func_candi_row_pane_ParamLimits

0x9fac,	// (0x000197cb) fshwr2_func_candi_row_pane

0xf1b5,	// (0x0001e9d4) cell_fshwr2_syb_pane_ParamLimits

0xf1b5,	// (0x0001e9d4) cell_fshwr2_syb_pane

0x743e,	// (0x00016c5d) fshwr2_hwr_syb_pane_g1_ParamLimits

0x743e,	// (0x00016c5d) fshwr2_hwr_syb_pane_g1

0x1bbe,	// (0x000113dd) bg_popup_call_pane_cp01

0x9fd7,	// (0x000197f6) fshwr2_func_candi_cell_pane_ParamLimits

0x9fd7,	// (0x000197f6) fshwr2_func_candi_cell_pane

0xa009,	// (0x00019828) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa009,	// (0x00019828) fshwr2_func_candi_cell_bg_pane

0xa023,	// (0x00019842) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xa023,	// (0x00019842) fshwr2_func_candi_cell_pane_g1

0xa043,	// (0x00019862) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xa043,	// (0x00019862) fshwr2_func_candi_cell_pane_t1

0x1bbe,	// (0x000113dd) bg_button_pane_cp08

0x393a,	// (0x00013159) cell_fshwr2_syb_bg_pane

0xf1ce,	// (0x0001e9ed) cell_fshwr2_syb_bg_pane_g1

0xf1d6,	// (0x0001e9f5) cell_fshwr2_syb_bg_pane_t1

0x2aee,	// (0x0001230d) main_tmo_pane

0xd63e,	// (0x0001ce5d) uni_indicator_pane_g1_ParamLimits

0xd653,	// (0x0001ce72) uni_indicator_pane_g2_ParamLimits

0xd668,	// (0x0001ce87) uni_indicator_pane_g3_ParamLimits

0xd67e,	// (0x0001ce9d) uni_indicator_pane_g4_ParamLimits

0xd67e,	// (0x0001ce9d) uni_indicator_pane_g4

0xd692,	// (0x0001ceb1) uni_indicator_pane_g5_ParamLimits

0xd692,	// (0x0001ceb1) uni_indicator_pane_g5

0xd6a6,	// (0x0001cec5) uni_indicator_pane_g6_ParamLimits

0xd6a6,	// (0x0001cec5) uni_indicator_pane_g6

0xf950,	// (0x0001f16f) uni_indicator_pane_g_ParamLimits

0xe3b2,	// (0x0001dbd1) popup_tmo_note_window_ParamLimits

0xe3b2,	// (0x0001dbd1) popup_tmo_note_window

0x1bbe,	// (0x000113dd) fshwr2_bg_pane

0xa034,	// (0x00019853) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xa034,	// (0x00019853) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeda,	// (0x0001f6f9) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeda,	// (0x0001f6f9) fshwr2_func_candi_cell_pane_g

0x71b4,	// (0x000169d3) bg_popup_window_pane_cp01

0xa06d,	// (0x0001988c) bg_popup_window_pane_g1_cp01

0xa076,	// (0x00019895) bg_popup_window_pane_cp22_ParamLimits

0xa076,	// (0x00019895) bg_popup_window_pane_cp22

0xa084,	// (0x000198a3) listscroll_tmo_link_pane_ParamLimits

0xa084,	// (0x000198a3) listscroll_tmo_link_pane

0xa0c4,	// (0x000198e3) popup_tmo_note_window_g1_ParamLimits

0xa0c4,	// (0x000198e3) popup_tmo_note_window_g1

0xa0d1,	// (0x000198f0) tmo_note_info_pane_ParamLimits

0xa0d1,	// (0x000198f0) tmo_note_info_pane

0xf1e5,	// (0x0001ea04) list_tmo_note_info_pane_g1_ParamLimits

0xf1e5,	// (0x0001ea04) list_tmo_note_info_pane_g1

0xa102,	// (0x00019921) list_tmo_note_info_pane_g2_ParamLimits

0xa102,	// (0x00019921) list_tmo_note_info_pane_g2

0x0001,

0xfedf,	// (0x0001f6fe) list_tmo_note_info_pane_g_ParamLimits

0xfedf,	// (0x0001f6fe) list_tmo_note_info_pane_g

0xa11e,	// (0x0001993d) list_tmo_note_info_text_pane_ParamLimits

0xa11e,	// (0x0001993d) list_tmo_note_info_text_pane

0xa1a3,	// (0x000199c2) list_tmo_link_pane

0xa1b0,	// (0x000199cf) scroll_pane_cp20

0xa1bd,	// (0x000199dc) list_single_tmo_link_pane_ParamLimits

0xa1bd,	// (0x000199dc) list_single_tmo_link_pane

0xa1cd,	// (0x000199ec) list_single_tmo_link_pane_t1

0xa1db,	// (0x000199fa) list_tmo_note_info_text_pane_t1_ParamLimits

0xa1db,	// (0x000199fa) list_tmo_note_info_text_pane_t1

0xc462,	// (0x0001bc81) aid_size_touch_scroll_bar_cp01_ParamLimits

0xc462,	// (0x0001bc81) aid_size_touch_scroll_bar_cp01

0xc391,	// (0x0001bbb0) aid_size_touch_slider_marker

0xb325,	// (0x0001ab44) popup_settings_window_ParamLimits

0xb325,	// (0x0001ab44) popup_settings_window

0x3cf0,	// (0x0001350f) popup_candi_list_indi_window

0x4345,	// (0x00013b64) aid_touch_navi_pane_ParamLimits

0x1356,	// (0x00010b75) rs_clock_indi_pane

0x135f,	// (0x00010b7e) sctrl_sk_bottom_pane_ParamLimits

0x1370,	// (0x00010b8f) sctrl_sk_top_pane_ParamLimits

0x1471,	// (0x00010c90) popup_fep_tooltip_window

0x9aa8,	// (0x000192c7) aid_size_cell_widget_grid_ParamLimits

0xef25,	// (0x0001e744) cell_ai5_widget_pane_g1_ParamLimits

0xef25,	// (0x0001e744) cell_ai5_widget_pane_g1

0xef6d,	// (0x0001e78c) cell_ai5_widget_pane_g6_ParamLimits

0xef79,	// (0x0001e798) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe5d,	// (0x0001f67c) cell_ai5_widget_pane_g_ParamLimits

0xfe5d,	// (0x0001f67c) cell_ai5_widget_pane_g

0xf07d,	// (0x0001e89c) cell_ai5_widget_pane_t10_ParamLimits

0xf07d,	// (0x0001e89c) cell_ai5_widget_pane_t10

0xf08f,	// (0x0001e8ae) grid_ai5_widget_pane_ParamLimits

0x9d10,	// (0x0001952f) cell_contacts_ai5_widget_pane_ParamLimits

0x9d10,	// (0x0001952f) cell_contacts_ai5_widget_pane

0x9eee,	// (0x0001970d) popup_discreet_window_t3_ParamLimits

0x9eee,	// (0x0001970d) popup_discreet_window_t3

0x9f7d,	// (0x0001979c) popup_fshwr2_char_preview_window_ParamLimits

0x9f7d,	// (0x0001979c) popup_fshwr2_char_preview_window

0xf1fc,	// (0x0001ea1b) tmo_note_info_pane_t1

0xf211,	// (0x0001ea30) tmo_note_info_pane_t2

0xf22a,	// (0x0001ea49) tmo_note_info_pane_t3

0xa17f,	// (0x0001999e) tmo_note_info_pane_t4

0xa191,	// (0x000199b0) tmo_note_info_pane_t5

0x0004,

0xfee4,	// (0x0001f703) tmo_note_info_pane_t

0xa1a3,	// (0x000199c2) list_tmo_link_pane_ParamLimits

0xa1b0,	// (0x000199cf) scroll_pane_cp20_ParamLimits

0x1bbe,	// (0x000113dd) bg_popup_fep_char_preview_window_cp01

0xa1f4,	// (0x00019a13) popup_fshwr2_char_preview_window_t1

0xa202,	// (0x00019a21) popup_candi_list_indi_window_g1

0xa20b,	// (0x00019a2a) bg_cell_contacts_ai5_widget_pane

0xa217,	// (0x00019a36) cell_contacts_ai5_widget_pane_g1

0xa22b,	// (0x00019a4a) cell_contacts_ai5_widget_pane_g2

0xa23a,	// (0x00019a59) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeef,	// (0x0001f70e) cell_contacts_ai5_widget_pane_g

0xa24d,	// (0x00019a6c) cell_contacts_ai5_widget_pane_t1

0x2aee,	// (0x0001230d) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf2a4,	// (0x0001eac3) settings_container_pane

0x393a,	// (0x00013159) listscroll_set_pane_copy1

0x66c1,	// (0x00015ee0) scroll_pane_cp121_copy1

0xa2d3,	// (0x00019af2) set_content_pane_copy1

0xf2b0,	// (0x0001eacf) aid_height_set_list_copy1_ParamLimits

0xf2b0,	// (0x0001eacf) aid_height_set_list_copy1

0x5cc3,	// (0x000154e2) aid_size_parent_copy1_ParamLimits

0x5cc3,	// (0x000154e2) aid_size_parent_copy1

0xf2bc,	// (0x0001eadb) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf2bc,	// (0x0001eadb) button_value_adjust_pane_cp6_copy1

0x3cc8,	// (0x000134e7) list_highlight_pane_cp2_copy1_ParamLimits

0x3cc8,	// (0x000134e7) list_highlight_pane_cp2_copy1

0xf2d0,	// (0x0001eaef) list_set_pane_copy1_ParamLimits

0xf2d0,	// (0x0001eaef) list_set_pane_copy1

0xf23f,	// (0x0001ea5e) main_pane_set_t1_copy1_ParamLimits

0xf23f,	// (0x0001ea5e) main_pane_set_t1_copy1

0xf279,	// (0x0001ea98) main_pane_set_t2_copy1_ParamLimits

0xf279,	// (0x0001ea98) main_pane_set_t2_copy1

0xf397,	// (0x0001ebb6) main_pane_set_t3_copy1

0xf3a5,	// (0x0001ebc4) main_pane_set_t4_copy1

0xf298,	// (0x0001eab7) set_content_pane_g1_copy1_ParamLimits

0xf298,	// (0x0001eab7) set_content_pane_g1_copy1

0xf3b3,	// (0x0001ebd2) setting_code_pane_copy1

0xa3e8,	// (0x00019c07) setting_slider_graphic_pane_copy1

0xa3e8,	// (0x00019c07) setting_slider_pane_copy1

0xa3f2,	// (0x00019c11) setting_text_pane_copy1

0xa3fc,	// (0x00019c1b) setting_volume_pane_copy1

0xf3bd,	// (0x0001ebdc) settings_code_pane_cp2_copy1

0xf3c5,	// (0x0001ebe4) settings_code_pane_cp_copy1_ParamLimits

0xf3c5,	// (0x0001ebe4) settings_code_pane_cp_copy1

0xf3d9,	// (0x0001ebf8) volume_set_pane_copy1

0xf3e5,	// (0x0001ec04) volume_set_pane_g10_copy1

0xf3f1,	// (0x0001ec10) volume_set_pane_g1_copy1

0xf3fb,	// (0x0001ec1a) volume_set_pane_g2_copy1

0xf405,	// (0x0001ec24) volume_set_pane_g3_copy1

0xf40f,	// (0x0001ec2e) volume_set_pane_g4_copy1

0xf419,	// (0x0001ec38) volume_set_pane_g5_copy1

0xf423,	// (0x0001ec42) volume_set_pane_g6_copy1

0xf42d,	// (0x0001ec4c) volume_set_pane_g7_copy1

0xf437,	// (0x0001ec56) volume_set_pane_g8_copy1

0xf441,	// (0x0001ec60) volume_set_pane_g9_copy1

0x1cb2,	// (0x000114d1) bg_set_opt_pane_cp_copy1_ParamLimits

0x1cb2,	// (0x000114d1) bg_set_opt_pane_cp_copy1

0xa493,	// (0x00019cb2) setting_slider_pane_t1_copy1_ParamLimits

0xa493,	// (0x00019cb2) setting_slider_pane_t1_copy1

0xf44b,	// (0x0001ec6a) setting_slider_pane_t2_copy1_ParamLimits

0xf44b,	// (0x0001ec6a) setting_slider_pane_t2_copy1

0xf465,	// (0x0001ec84) setting_slider_pane_t3_copy1_ParamLimits

0xf465,	// (0x0001ec84) setting_slider_pane_t3_copy1

0xf47d,	// (0x0001ec9c) slider_set_pane_copy1_ParamLimits

0xf47d,	// (0x0001ec9c) slider_set_pane_copy1

0x2c2a,	// (0x00012449) set_opt_bg_pane_g1_copy2

0x2c32,	// (0x00012451) set_opt_bg_pane_g2_copy2

0xa4f9,	// (0x00019d18) set_opt_bg_pane_g3_copy2

0x2c42,	// (0x00012461) set_opt_bg_pane_g4_copy2

0x2c4a,	// (0x00012469) set_opt_bg_pane_g5_copy2

0x2c52,	// (0x00012471) set_opt_bg_pane_g6_copy2

0xf493,	// (0x0001ecb2) set_opt_bg_pane_g7_copy2

0xa50d,	// (0x00019d2c) set_opt_bg_pane_g8_copy2

0xa517,	// (0x00019d36) set_opt_bg_pane_g9_copy2

0xa521,	// (0x00019d40) aid_size_touch_slider_mark_copy1_ParamLimits

0xa521,	// (0x00019d40) aid_size_touch_slider_mark_copy1

0xa535,	// (0x00019d54) slider_set_pane_g1_copy1

0xa53e,	// (0x00019d5d) slider_set_pane_g2_copy1

0x6739,	// (0x00015f58) slider_set_pane_g3_copy1_ParamLimits

0x6739,	// (0x00015f58) slider_set_pane_g3_copy1

0x674d,	// (0x00015f6c) slider_set_pane_g4_copy1_ParamLimits

0x674d,	// (0x00015f6c) slider_set_pane_g4_copy1

0x6765,	// (0x00015f84) slider_set_pane_g5_copy1_ParamLimits

0x6765,	// (0x00015f84) slider_set_pane_g5_copy1

0x6739,	// (0x00015f58) slider_set_pane_g6_copy1_ParamLimits

0x6739,	// (0x00015f58) slider_set_pane_g6_copy1

0xf49d,	// (0x0001ecbc) slider_set_pane_g7_copy1_ParamLimits

0xf49d,	// (0x0001ecbc) slider_set_pane_g7_copy1

0x1bd2,	// (0x000113f1) bg_set_opt_pane_cp2_copy1

0xa55c,	// (0x00019d7b) setting_slider_graphic_pane_g1_copy1

0xf4b3,	// (0x0001ecd2) setting_slider_graphic_pane_t1_copy1

0xf4c3,	// (0x0001ece2) setting_slider_graphic_pane_t2_copy1

0xf4d3,	// (0x0001ecf2) slider_set_pane_cp_copy1

0xa595,	// (0x00019db4) input_focus_pane_cp1_copy1

0xa59e,	// (0x00019dbd) list_set_text_pane_copy1

0xa5a6,	// (0x00019dc5) setting_text_pane_g1_copy1

0x1d0b,	// (0x0001152a) set_text_pane_t1_copy1

0xa595,	// (0x00019db4) input_focus_pane_cp2_copy1

0xa5a6,	// (0x00019dc5) setting_code_pane_g1_copy1

0xf4db,	// (0x0001ecfa) setting_code_pane_t1_copy1

0xf4e9,	// (0x0001ed08) list_set_graphic_pane_copy1

0x1bd2,	// (0x000113f1) bg_set_opt_pane_cp4_copy1

0xc7a6,	// (0x0001bfc5) list_set_graphic_pane_g1_copy1_ParamLimits

0xc7a6,	// (0x0001bfc5) list_set_graphic_pane_g1_copy1

0xf4fb,	// (0x0001ed1a) list_set_graphic_pane_g2_copy1

0xc7be,	// (0x0001bfdd) list_set_graphic_pane_t1_copy1_ParamLimits

0xc7be,	// (0x0001bfdd) list_set_graphic_pane_t1_copy1

0x71b4,	// (0x000169d3) rs_clock_indi_pane_g1

0xa5d7,	// (0x00019df6) rs_clock_indi_pane_t1

0xa5e5,	// (0x00019e04) rs_indi_pane

0xa5ed,	// (0x00019e0c) rs_indi_pane_g1

0xa5f6,	// (0x00019e15) rs_indi_pane_g2

0xa5ff,	// (0x00019e1e) rs_indi_pane_g3

0x0002,

0xfef6,	// (0x0001f715) rs_indi_pane_g

0x393a,	// (0x00013159) bg_popup_preview_window_pane_cp03

0xa608,	// (0x00019e27) popup_fep_tooltip_window_t1

0x8098,	// (0x000178b7) popup_note2_window_g2_ParamLimits

0x8098,	// (0x000178b7) popup_note2_window_g2

0x0001,

0xfc94,	// (0x0001f4b3) popup_note2_window_g_ParamLimits

0xfc94,	// (0x0001f4b3) popup_note2_window_g

0x868f,	// (0x00017eae) bg_popup_sub_pane_cp11_ParamLimits

0x869c,	// (0x00017ebb) cell_ai3_links_pane_g1_ParamLimits

0x86b3,	// (0x00017ed2) cell_ai3_links_pane_t1

0x1d0b,	// (0x0001152a) set_text_pane_t1_copy1_ParamLimits

0x3847,	// (0x00013066) cell_graphic_popup_pane_cp2_ParamLimits

0x3847,	// (0x00013066) cell_graphic_popup_pane_cp2

0xa616,	// (0x00019e35) cell_graphic_popup_pane_g1_cp2

0x229e,	// (0x00011abd) cell_graphic_popup_pane_g2_cp2

0xa61e,	// (0x00019e3d) cell_graphic_popup_pane_g3_cp2

0xa626,	// (0x00019e45) cell_graphic_popup_pane_t2_cp2

0x22af,	// (0x00011ace) grid_highlight_pane_cp3_cp2

0x3003,	// (0x00012822) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x2aee,	// (0x0001230d) main_tmo_pane_ParamLimits

0xe3a6,	// (0x0001dbc5) popup_tmo_big_image_note_window

0xef15,	// (0x0001e734) cell_ai5_widget_list_pane

0xef1d,	// (0x0001e73c) cell_ai5_widget_lrg_icon_pane

0xf1fc,	// (0x0001ea1b) tmo_note_info_pane_t1_ParamLimits

0xf211,	// (0x0001ea30) tmo_note_info_pane_t2_ParamLimits

0xf22a,	// (0x0001ea49) tmo_note_info_pane_t3_ParamLimits

0xa17f,	// (0x0001999e) tmo_note_info_pane_t4_ParamLimits

0xa191,	// (0x000199b0) tmo_note_info_pane_t5_ParamLimits

0xfee4,	// (0x0001f703) tmo_note_info_pane_t_ParamLimits

0xf2a4,	// (0x0001eac3) settings_container_pane_ParamLimits

0xa58d,	// (0x00019dac) indicator_popup_pane_cp5

0xa58d,	// (0x00019dac) indicator_popup_pane_cp6

0xf4e9,	// (0x0001ed08) list_set_graphic_pane_copy1_ParamLimits

0x1bbe,	// (0x000113dd) bg_popup_window_pane_cp23

0xa634,	// (0x00019e53) popup_tmo_big_image_note_window_g1

0xa640,	// (0x00019e5f) popup_tmo_big_image_note_window_t1

0xa650,	// (0x00019e6f) popup_tmo_big_image_note_window_t2

0xa660,	// (0x00019e7f) popup_tmo_big_image_note_window_t3

0x0002,

0xfefd,	// (0x0001f71c) popup_tmo_big_image_note_window_t

0xf503,	// (0x0001ed22) cell_ai5_widget_lrg_icon_pane_g1

0xf50b,	// (0x0001ed2a) cell_ai5_widget_lrg_icon_pane_t1

0xf519,	// (0x0001ed38) cell_ai5_widget_list_row_pane_ParamLimits

0xf519,	// (0x0001ed38) cell_ai5_widget_list_row_pane

0xf532,	// (0x0001ed51) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf532,	// (0x0001ed51) cell_ai5_widget_list_row_pane_g1

0xf53f,	// (0x0001ed5e) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf53f,	// (0x0001ed5e) cell_ai5_widget_list_row_pane_t1

0xf557,	// (0x0001ed76) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf557,	// (0x0001ed76) cell_ai5_widget_list_row_pane_t2

0x0001,

0xff04,	// (0x0001f723) cell_ai5_widget_list_row_pane_t_ParamLimits

0xff04,	// (0x0001f723) cell_ai5_widget_list_row_pane_t

0x00fb,	// (0x0000f91a) main_fep_vtchi_ss_pane

0xa6d6,	// (0x00019ef5) popup_fep_char_pre_window

0xa6de,	// (0x00019efd) popup_fep_ituss_window

0xa6e9,	// (0x00019f08) popup_fep_vkbss_window

0xa6f4,	// (0x00019f13) grid_vkbss_keypad_pane_ParamLimits

0xa6f4,	// (0x00019f13) grid_vkbss_keypad_pane

0xa704,	// (0x00019f23) ituss_keypad_pane

0xa70c,	// (0x00019f2b) aid_vkbss_key_offset_ParamLimits

0xa70c,	// (0x00019f2b) aid_vkbss_key_offset

0xa71b,	// (0x00019f3a) cell_vkbss_key_pane_ParamLimits

0xa71b,	// (0x00019f3a) cell_vkbss_key_pane

0xa731,	// (0x00019f50) bg_cell_vkbss_key_g1_ParamLimits

0xa731,	// (0x00019f50) bg_cell_vkbss_key_g1

0xa73d,	// (0x00019f5c) cell_vkbss_key_3p_pane_ParamLimits

0xa73d,	// (0x00019f5c) cell_vkbss_key_3p_pane

0xa757,	// (0x00019f76) cell_vkbss_key_g1_ParamLimits

0xa757,	// (0x00019f76) cell_vkbss_key_g1

0xa771,	// (0x00019f90) cell_vkbss_key_t1_ParamLimits

0xa771,	// (0x00019f90) cell_vkbss_key_t1

0xa79c,	// (0x00019fbb) cell_ituss_key_pane_ParamLimits

0xa79c,	// (0x00019fbb) cell_ituss_key_pane

0xa7ab,	// (0x00019fca) bg_cell_ituss_key_g1_ParamLimits

0xa7ab,	// (0x00019fca) bg_cell_ituss_key_g1

0xa7b7,	// (0x00019fd6) cell_ituss_key_pane_g1_ParamLimits

0xa7b7,	// (0x00019fd6) cell_ituss_key_pane_g1

0xa7c3,	// (0x00019fe2) cell_ituss_key_pane_g2_ParamLimits

0xa7c3,	// (0x00019fe2) cell_ituss_key_pane_g2

0x0001,

0xff09,	// (0x0001f728) cell_ituss_key_pane_g_ParamLimits

0xff09,	// (0x0001f728) cell_ituss_key_pane_g

0xa7d7,	// (0x00019ff6) cell_ituss_key_t1_ParamLimits

0xa7d7,	// (0x00019ff6) cell_ituss_key_t1

0xa7f5,	// (0x0001a014) cell_ituss_key_t2_ParamLimits

0xa7f5,	// (0x0001a014) cell_ituss_key_t2

0xa814,	// (0x0001a033) cell_ituss_key_t3_ParamLimits

0xa814,	// (0x0001a033) cell_ituss_key_t3

0xa833,	// (0x0001a052) cell_ituss_key_t4_ParamLimits

0xa833,	// (0x0001a052) cell_ituss_key_t4

0x0003,

0xff0e,	// (0x0001f72d) cell_ituss_key_t_ParamLimits

0xff0e,	// (0x0001f72d) cell_ituss_key_t

0xa852,	// (0x0001a071) cell_vkbss_key_3p_pane_g1

0xa85a,	// (0x0001a079) cell_vkbss_key_3p_pane_g2

0xa862,	// (0x0001a081) cell_vkbss_key_3p_pane_g3

0x0002,

0xff17,	// (0x0001f736) cell_vkbss_key_3p_pane_g

0x1bbe,	// (0x000113dd) bg_popup_fep_char_preview_window_cp02

0xa86a,	// (0x0001a089) popup_fep_char_pre_window_t1

0xef0b,	// (0x0001e72a) main_ai5_sk_pane

0xa20b,	// (0x00019a2a) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa217,	// (0x00019a36) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xa22b,	// (0x00019a4a) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa23a,	// (0x00019a59) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeef,	// (0x0001f70e) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa24d,	// (0x00019a6c) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x2aee,	// (0x0001230d) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf569,	// (0x0001ed88) main_ai5_sk_pane_g1
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
	};

} // end of namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Normal
