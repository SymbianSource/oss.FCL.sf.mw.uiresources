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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x00052331 };

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
0x4e22,	// (0x00057153) Screen

0x4e2e,	// (0x0005715f) application_window_ParamLimits

0x4e2e,	// (0x0005715f) application_window

0xed53,	// (0x00061084) screen_g1

0x4e8a,	// (0x000571bb) area_bottom_pane_ParamLimits

0x4e8a,	// (0x000571bb) area_bottom_pane

0x4f4a,	// (0x0005727b) area_top_pane_ParamLimits

0x4f4a,	// (0x0005727b) area_top_pane

0x4fe8,	// (0x00057319) main_pane_ParamLimits

0x4fe8,	// (0x00057319) main_pane

0xed5d,	// (0x0006108e) misc_graphics

0x8c0d,	// (0x0005af3e) battery_pane_ParamLimits

0x8c0d,	// (0x0005af3e) battery_pane

0x98ed,	// (0x0005bc1e) bg_status_flat_pane_g8

0x98f5,	// (0x0005bc26) bg_status_flat_pane_g9

0x8cd5,	// (0x0005b006) context_pane_ParamLimits

0x8cd5,	// (0x0005b006) context_pane

0x8df9,	// (0x0005b12a) navi_pane_ParamLimits

0x8df9,	// (0x0005b12a) navi_pane

0x8e89,	// (0x0005b1ba) signal_pane_ParamLimits

0x8e89,	// (0x0005b1ba) signal_pane

0x0008,

0xf859,	// (0x00061b8a) bg_status_flat_pane_g

0x8ef6,	// (0x0005b227) status_pane_g1_ParamLimits

0x8ef6,	// (0x0005b227) status_pane_g1

0x8f02,	// (0x0005b233) status_pane_g2_ParamLimits

0x8f02,	// (0x0005b233) status_pane_g2

0x8f0e,	// (0x0005b23f) status_pane_g3_ParamLimits

0x8f0e,	// (0x0005b23f) status_pane_g3

0x0004,

0xf780,	// (0x00061ab1) status_pane_g_ParamLimits

0xf780,	// (0x00061ab1) status_pane_g

0x8f42,	// (0x0005b273) title_pane_ParamLimits

0x8f42,	// (0x0005b273) title_pane

0x8f81,	// (0x0005b2b2) uni_indicator_pane_ParamLimits

0x8f81,	// (0x0005b2b2) uni_indicator_pane

0x8b3f,	// (0x0005ae70) bg_list_pane_ParamLimits

0x8b3f,	// (0x0005ae70) bg_list_pane

0x6469,	// (0x0005879a) find_pane

0x8b5f,	// (0x0005ae90) listscroll_app_pane_ParamLimits

0x8b5f,	// (0x0005ae90) listscroll_app_pane

0x8b6b,	// (0x0005ae9c) listscroll_form_pane

0x6471,	// (0x000587a2) listscroll_gen_pane_ParamLimits

0x6471,	// (0x000587a2) listscroll_gen_pane

0x6485,	// (0x000587b6) listscroll_set_pane

0x5ce7,	// (0x00058018) main_idle_act_pane

0x8838,	// (0x0005ab69) main_idle_trad_pane

0x8838,	// (0x0005ab69) main_list_empty_pane

0x8b5f,	// (0x0005ae90) main_midp_pane

0x8b85,	// (0x0005aeb6) main_pane_g1_ParamLimits

0x8b85,	// (0x0005aeb6) main_pane_g1

0x649b,	// (0x000587cc) popup_ai_message_window_ParamLimits

0x649b,	// (0x000587cc) popup_ai_message_window

0x654f,	// (0x00058880) popup_fep_china_uni_window_ParamLimits

0x654f,	// (0x00058880) popup_fep_china_uni_window

0x65af,	// (0x000588e0) popup_fep_japan_candidate_window_ParamLimits

0x65af,	// (0x000588e0) popup_fep_japan_candidate_window

0x65d9,	// (0x0005890a) popup_fep_japan_predictive_window_ParamLimits

0x65d9,	// (0x0005890a) popup_fep_japan_predictive_window

0x660f,	// (0x00058940) popup_find_window

0x661c,	// (0x0005894d) popup_grid_graphic_window_ParamLimits

0x661c,	// (0x0005894d) popup_grid_graphic_window

0x664c,	// (0x0005897d) popup_large_graphic_colour_window

0x6672,	// (0x000589a3) popup_menu_window_ParamLimits

0x6672,	// (0x000589a3) popup_menu_window

0x683c,	// (0x00058b6d) popup_note_image_window

0x6826,	// (0x00058b57) popup_note_wait_window_ParamLimits

0x6826,	// (0x00058b57) popup_note_wait_window

0x6826,	// (0x00058b57) popup_note_window_ParamLimits

0x6826,	// (0x00058b57) popup_note_window

0x68a2,	// (0x00058bd3) popup_query_code_window_ParamLimits

0x68a2,	// (0x00058bd3) popup_query_code_window

0x68b8,	// (0x00058be9) popup_query_data_code_window_ParamLimits

0x68b8,	// (0x00058be9) popup_query_data_code_window

0x68db,	// (0x00058c0c) popup_query_data_window_ParamLimits

0x68db,	// (0x00058c0c) popup_query_data_window

0x68fd,	// (0x00058c2e) popup_query_sat_info_window_ParamLimits

0x68fd,	// (0x00058c2e) popup_query_sat_info_window

0x693c,	// (0x00058c6d) popup_snote_single_graphic_window_ParamLimits

0x693c,	// (0x00058c6d) popup_snote_single_graphic_window

0x693c,	// (0x00058c6d) popup_snote_single_text_window_ParamLimits

0x693c,	// (0x00058c6d) popup_snote_single_text_window

0x6953,	// (0x00058c84) popup_sub_window_general

0x6a99,	// (0x00058dca) popup_window_general_ParamLimits

0x6a99,	// (0x00058dca) popup_window_general

0x8b93,	// (0x0005aec4) power_save_pane

0x62f3,	// (0x00058624) control_pane_g1_ParamLimits

0x62f3,	// (0x00058624) control_pane_g1

0x631c,	// (0x0005864d) control_pane_g2_ParamLimits

0x631c,	// (0x0005864d) control_pane_g2

0x8b02,	// (0x0005ae33) control_pane_g3_ParamLimits

0x8b02,	// (0x0005ae33) control_pane_g3

0x0007,

0xf768,	// (0x00061a99) control_pane_g_ParamLimits

0xf768,	// (0x00061a99) control_pane_g

0x6368,	// (0x00058699) control_pane_t1_ParamLimits

0x6368,	// (0x00058699) control_pane_t1

0x63c2,	// (0x000586f3) control_pane_t2_ParamLimits

0x63c2,	// (0x000586f3) control_pane_t2

0x0002,

0xf779,	// (0x00061aaa) control_pane_t_ParamLimits

0xf779,	// (0x00061aaa) control_pane_t

0x8a27,	// (0x0005ad58) navi_navi_volume_pane_cp1

0x8a2f,	// (0x0005ad60) status_small_icon_pane

0x8a37,	// (0x0005ad68) status_small_pane_g1_ParamLimits

0x8a37,	// (0x0005ad68) status_small_pane_g1

0x8a6b,	// (0x0005ad9c) status_small_pane_g2_ParamLimits

0x8a6b,	// (0x0005ad9c) status_small_pane_g2

0x8a77,	// (0x0005ada8) status_small_pane_g3_ParamLimits

0x8a77,	// (0x0005ada8) status_small_pane_g3

0x8a83,	// (0x0005adb4) status_small_pane_g4_ParamLimits

0x8a83,	// (0x0005adb4) status_small_pane_g4

0x8a8f,	// (0x0005adc0) status_small_pane_g5_ParamLimits

0x8a8f,	// (0x0005adc0) status_small_pane_g5

0x8a9d,	// (0x0005adce) status_small_pane_g6_ParamLimits

0x8a9d,	// (0x0005adce) status_small_pane_g6

0x0007,

0xf757,	// (0x00061a88) status_small_pane_g_ParamLimits

0xf757,	// (0x00061a88) status_small_pane_g

0x8acc,	// (0x0005adfd) status_small_pane_t1

0x8aee,	// (0x0005ae1f) status_small_wait_pane_ParamLimits

0x8aee,	// (0x0005ae1f) status_small_wait_pane

0x82b6,	// (0x0005a5e7) aid_levels_signal_ParamLimits

0x82b6,	// (0x0005a5e7) aid_levels_signal

0x82c5,	// (0x0005a5f6) signal_pane_g1_ParamLimits

0x82c5,	// (0x0005a5f6) signal_pane_g1

0x82da,	// (0x0005a60b) signal_pane_g2_ParamLimits

0x82da,	// (0x0005a60b) signal_pane_g2

0x0003,

0xf6e8,	// (0x00061a19) signal_pane_g_ParamLimits

0xf6e8,	// (0x00061a19) signal_pane_g

0x830b,	// (0x0005a63c) context_pane_g1

0x5247,	// (0x00057578) title_pane_g1

0x5279,	// (0x000575aa) title_pane_t1

0xed73,	// (0x000610a4) title_pane_t2

0xed99,	// (0x000610ca) title_pane_t3

0x0002,

0xf532,	// (0x00061863) title_pane_t

0x8f99,	// (0x0005b2ca) aid_levels_battery_ParamLimits

0x8f99,	// (0x0005b2ca) aid_levels_battery

0x8faa,	// (0x0005b2db) battery_pane_g1_ParamLimits

0x8faa,	// (0x0005b2db) battery_pane_g1

0x8fc0,	// (0x0005b2f1) battery_pane_g2_ParamLimits

0x8fc0,	// (0x0005b2f1) battery_pane_g2

0x0001,

0xf78b,	// (0x00061abc) battery_pane_g_ParamLimits

0xf78b,	// (0x00061abc) battery_pane_g

0xa3fa,	// (0x0005c72b) uni_indicator_pane_g1

0xa410,	// (0x0005c741) uni_indicator_pane_g2

0xa426,	// (0x0005c757) uni_indicator_pane_g3

0x0005,

0xf901,	// (0x00061c32) uni_indicator_pane_g

0x86a6,	// (0x0005a9d7) navi_icon_pane_ParamLimits

0x86a6,	// (0x0005a9d7) navi_icon_pane

0x85ee,	// (0x0005a91f) navi_midp_pane

0x86c2,	// (0x0005a9f3) navi_navi_pane

0x86cc,	// (0x0005a9fd) navi_text_pane_ParamLimits

0x86cc,	// (0x0005a9fd) navi_text_pane

0xed53,	// (0x00061084) status_small_wait_pane_g1

0xf148,	// (0x00061479) status_small_wait_pane_g2

0x0001,

0xf8fc,	// (0x00061c2d) status_small_wait_pane_g

0xa10d,	// (0x0005c43e) navi_navi_icon_text_pane

0xa115,	// (0x0005c446) navi_navi_pane_g1_ParamLimits

0xa115,	// (0x0005c446) navi_navi_pane_g1

0xa127,	// (0x0005c458) navi_navi_pane_g2_ParamLimits

0xa127,	// (0x0005c458) navi_navi_pane_g2

0x0001,

0xf8ca,	// (0x00061bfb) navi_navi_pane_g_ParamLimits

0xf8ca,	// (0x00061bfb) navi_navi_pane_g

0xa139,	// (0x0005c46a) navi_navi_tabs_pane

0xa142,	// (0x0005c473) navi_navi_text_pane

0xa10d,	// (0x0005c43e) navi_navi_volume_pane

0xa0e9,	// (0x0005c41a) navi_text_pane_t1

0xa0dd,	// (0x0005c40e) navi_icon_pane_g1

0xa030,	// (0x0005c361) navi_navi_text_pane_t1

0x6d75,	// (0x000590a6) navi_navi_volume_pane_g1

0x6d7d,	// (0x000590ae) volume_small_pane

0x9f96,	// (0x0005c2c7) navi_navi_icon_text_pane_g1

0x9f9e,	// (0x0005c2cf) navi_navi_icon_text_pane_t1

0x86c2,	// (0x0005a9f3) navi_tabs_2_long_pane

0x86c2,	// (0x0005a9f3) navi_tabs_2_pane

0x86c2,	// (0x0005a9f3) navi_tabs_3_long_pane

0x86c2,	// (0x0005a9f3) navi_tabs_3_pane

0x86c2,	// (0x0005a9f3) navi_tabs_4_pane

0x6d55,	// (0x00059086) tabs_2_active_pane_ParamLimits

0x6d55,	// (0x00059086) tabs_2_active_pane

0x6d65,	// (0x00059096) tabs_2_passive_pane_ParamLimits

0x6d65,	// (0x00059096) tabs_2_passive_pane

0x6d23,	// (0x00059054) tabs_3_active_pane_ParamLimits

0x6d23,	// (0x00059054) tabs_3_active_pane

0x6d33,	// (0x00059064) tabs_3_passive_pane_ParamLimits

0x6d33,	// (0x00059064) tabs_3_passive_pane

0x6d44,	// (0x00059075) tabs_3_passive_pane_cp_ParamLimits

0x6d44,	// (0x00059075) tabs_3_passive_pane_cp

0x6cd7,	// (0x00059008) tabs_4_active_pane_ParamLimits

0x6cd7,	// (0x00059008) tabs_4_active_pane

0x6cea,	// (0x0005901b) tabs_4_passive_pane_ParamLimits

0x6cea,	// (0x0005901b) tabs_4_passive_pane

0x6cfb,	// (0x0005902c) tabs_4_passive_pane_cp_ParamLimits

0x6cfb,	// (0x0005902c) tabs_4_passive_pane_cp

0x6d0c,	// (0x0005903d) tabs_4_passive_pane_cp2_ParamLimits

0x6d0c,	// (0x0005903d) tabs_4_passive_pane_cp2

0x6cb3,	// (0x00058fe4) tabs_2_long_active_pane_ParamLimits

0x6cb3,	// (0x00058fe4) tabs_2_long_active_pane

0x6cc5,	// (0x00058ff6) tabs_2_long_passive_pane_ParamLimits

0x6cc5,	// (0x00058ff6) tabs_2_long_passive_pane

0x6c74,	// (0x00058fa5) tabs_3_long_active_pane_ParamLimits

0x6c74,	// (0x00058fa5) tabs_3_long_active_pane

0x6c87,	// (0x00058fb8) tabs_3_long_passive_pane_ParamLimits

0x6c87,	// (0x00058fb8) tabs_3_long_passive_pane

0x6ca0,	// (0x00058fd1) tabs_3_long_passive_pane_cp_ParamLimits

0x6ca0,	// (0x00058fd1) tabs_3_long_passive_pane_cp

0x6c1a,	// (0x00058f4b) volume_small_pane_g1

0x6c23,	// (0x00058f54) volume_small_pane_g2

0x6c2c,	// (0x00058f5d) volume_small_pane_g3

0x6c35,	// (0x00058f66) volume_small_pane_g4

0x6c3e,	// (0x00058f6f) volume_small_pane_g5

0x6c47,	// (0x00058f78) volume_small_pane_g6

0x6c50,	// (0x00058f81) volume_small_pane_g7

0x6c59,	// (0x00058f8a) volume_small_pane_g8

0x6c62,	// (0x00058f93) volume_small_pane_g9

0x6c6b,	// (0x00058f9c) volume_small_pane_g10

0x0009,

0xf896,	// (0x00061bc7) volume_small_pane_g

0xedab,	// (0x000610dc) bg_active_tab_pane_cp2_ParamLimits

0xedab,	// (0x000610dc) bg_active_tab_pane_cp2

0x52e1,	// (0x00057612) tabs_3_active_pane_g1

0x52e9,	// (0x0005761a) tabs_3_active_pane_t1

0xedab,	// (0x000610dc) bg_passive_tab_pane_cp2_ParamLimits

0xedab,	// (0x000610dc) bg_passive_tab_pane_cp2

0x52e1,	// (0x00057612) tabs_3_passive_pane_g1

0x52e9,	// (0x0005761a) tabs_3_passive_pane_t1

0xedab,	// (0x000610dc) bg_active_tab_pane_cp3_ParamLimits

0xedab,	// (0x000610dc) bg_active_tab_pane_cp3

0x52fb,	// (0x0005762c) tabs_4_active_pane_g1

0x5303,	// (0x00057634) tabs_4_active_pane_t1

0xedab,	// (0x000610dc) bg_passive_tab_pane_cp3_ParamLimits

0xedab,	// (0x000610dc) bg_passive_tab_pane_cp3

0x52fb,	// (0x0005762c) tabs_4_1_passive_pane_g1

0x5303,	// (0x00057634) tabs_4_1_passive_pane_t1

0x8b5f,	// (0x0005ae90) list_highlight_pane_cp2

0xa673,	// (0x0005c9a4) list_set_pane_ParamLimits

0xa673,	// (0x0005c9a4) list_set_pane

0xa735,	// (0x0005ca66) main_pane_set_t1_ParamLimits

0xa735,	// (0x0005ca66) main_pane_set_t1

0xa755,	// (0x0005ca86) main_pane_set_t2_ParamLimits

0xa755,	// (0x0005ca86) main_pane_set_t2

0xa769,	// (0x0005ca9a) main_pane_set_t3_ParamLimits

0xa769,	// (0x0005ca9a) main_pane_set_t3

0xa77d,	// (0x0005caae) main_pane_set_t4_ParamLimits

0xa77d,	// (0x0005caae) main_pane_set_t4

0x0003,

0xf966,	// (0x00061c97) main_pane_set_t_ParamLimits

0xf966,	// (0x00061c97) main_pane_set_t

0xa791,	// (0x0005cac2) setting_code_pane

0xa79b,	// (0x0005cacc) setting_slider_graphic_pane

0xa79b,	// (0x0005cacc) setting_slider_pane

0xa79b,	// (0x0005cacc) setting_text_pane

0xa79b,	// (0x0005cacc) setting_volume_pane

0x5315,	// (0x00057646) volume_set_pane

0xedab,	// (0x000610dc) bg_set_opt_pane_cp

0x531f,	// (0x00057650) setting_slider_pane_t1

0x5338,	// (0x00057669) setting_slider_pane_t2

0x5352,	// (0x00057683) setting_slider_pane_t3

0x0002,

0xf539,	// (0x0006186a) setting_slider_pane_t

0x536a,	// (0x0005769b) slider_set_pane

0xed5d,	// (0x0006108e) bg_set_opt_pane_cp2

0xedb9,	// (0x000610ea) setting_slider_graphic_pane_g1

0x5380,	// (0x000576b1) setting_slider_graphic_pane_t1

0x5390,	// (0x000576c1) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x00061871) setting_slider_graphic_pane_t

0x53a0,	// (0x000576d1) slider_set_pane_cp

0xed5d,	// (0x0006108e) input_focus_pane_cp1

0xa634,	// (0x0005c965) list_set_text_pane

0xed53,	// (0x00061084) setting_text_pane_g1

0xed5d,	// (0x0006108e) input_focus_pane_cp2

0xed53,	// (0x00061084) setting_code_pane_g1

0xedc2,	// (0x000610f3) setting_code_pane_t1

0x3260,	// (0x00055591) set_text_pane_t1_ParamLimits

0x3260,	// (0x00055591) set_text_pane_t1

0xf4e1,	// (0x00061812) set_opt_bg_pane_g1

0xf4e9,	// (0x0006181a) set_opt_bg_pane_g2

0xa60c,	// (0x0005c93d) set_opt_bg_pane_g3

0xf4f9,	// (0x0006182a) set_opt_bg_pane_g4

0xf501,	// (0x00061832) set_opt_bg_pane_g5

0xf509,	// (0x0006183a) set_opt_bg_pane_g6

0xa616,	// (0x0005c947) set_opt_bg_pane_g7

0xa620,	// (0x0005c951) set_opt_bg_pane_g8

0xa62a,	// (0x0005c95b) set_opt_bg_pane_g9

0x0008,

0xf953,	// (0x00061c84) set_opt_bg_pane_g

0xa5ff,	// (0x0005c930) slider_set_pane_g1

0x6e26,	// (0x00059157) slider_set_pane_g2

0x0006,

0xf944,	// (0x00061c75) slider_set_pane_g

0x6d86,	// (0x000590b7) volume_set_pane_g1

0x6d90,	// (0x000590c1) volume_set_pane_g2

0x6d9a,	// (0x000590cb) volume_set_pane_g3

0x6da4,	// (0x000590d5) volume_set_pane_g4

0x6dae,	// (0x000590df) volume_set_pane_g5

0x6db8,	// (0x000590e9) volume_set_pane_g6

0x6dc2,	// (0x000590f3) volume_set_pane_g7

0x6dcc,	// (0x000590fd) volume_set_pane_g8

0x6dd6,	// (0x00059107) volume_set_pane_g9

0x6de0,	// (0x00059111) volume_set_pane_g10

0x0009,

0xf91c,	// (0x00061c4d) volume_set_pane_g

0x53a8,	// (0x000576d9) indicator_pane_ParamLimits

0x53a8,	// (0x000576d9) indicator_pane

0x53b4,	// (0x000576e5) main_idle_pane_g2_ParamLimits

0x53b4,	// (0x000576e5) main_idle_pane_g2

0x53dc,	// (0x0005770d) main_pane_idle_g1_ParamLimits

0x53dc,	// (0x0005770d) main_pane_idle_g1

0xedd0,	// (0x00061101) popup_clock_digital_analogue_window_ParamLimits

0xedd0,	// (0x00061101) popup_clock_digital_analogue_window

0x53ea,	// (0x0005771b) soft_indicator_pane_ParamLimits

0x53ea,	// (0x0005771b) soft_indicator_pane

0x53f8,	// (0x00057729) wallpaper_pane_ParamLimits

0x53f8,	// (0x00057729) wallpaper_pane

0xed53,	// (0x00061084) wallpaper_pane_g1

0x5404,	// (0x00057735) indicator_pane_g1_ParamLimits

0x5404,	// (0x00057735) indicator_pane_g1

0xaa28,	// (0x0005cd59) navi_navi_icon_text_pane_srt_g1

0xedfe,	// (0x0006112f) soft_indicator_pane_t1

0xee18,	// (0x00061149) aid_ps_area_pane

0x5410,	// (0x00057741) aid_ps_clock_pane

0xee29,	// (0x0006115a) aid_ps_indicator_pane

0xee35,	// (0x00061166) indicator_ps_pane_ParamLimits

0xee35,	// (0x00061166) indicator_ps_pane

0xee44,	// (0x00061175) power_save_pane_g1_ParamLimits

0xee44,	// (0x00061175) power_save_pane_g1

0xee50,	// (0x00061181) power_save_pane_g2_ParamLimits

0xee50,	// (0x00061181) power_save_pane_g2

0x4e3e,	// (0x0005716f) aid_navinavi_width_pane

0xee18,	// (0x00061149) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x00061876) power_save_pane_g_ParamLimits

0xf545,	// (0x00061876) power_save_pane_g

0xee5e,	// (0x0006118f) power_save_pane_t1_ParamLimits

0xee5e,	// (0x0006118f) power_save_pane_t1

0x5410,	// (0x00057741) aid_ps_clock_pane_ParamLimits

0xee29,	// (0x0006115a) aid_ps_indicator_pane_ParamLimits

0xee70,	// (0x000611a1) power_save_pane_t4_ParamLimits

0xee70,	// (0x000611a1) power_save_pane_t4

0x0001,

0xf54a,	// (0x0006187b) power_save_pane_t_ParamLimits

0xf54a,	// (0x0006187b) power_save_pane_t

0xee9a,	// (0x000611cb) power_save_t3_ParamLimits

0xee9a,	// (0x000611cb) power_save_t3

0xee85,	// (0x000611b6) power_save_t2_ParamLimits

0xee85,	// (0x000611b6) power_save_t2

0xeeaf,	// (0x000611e0) indicator_ps_pane_g1

0x541e,	// (0x0005774f) ai_gene_pane_ParamLimits

0x541e,	// (0x0005774f) ai_gene_pane

0x542a,	// (0x0005775b) ai_links_pane_ParamLimits

0x542a,	// (0x0005775b) ai_links_pane

0x5436,	// (0x00057767) indicator_pane_cp1_ParamLimits

0x5436,	// (0x00057767) indicator_pane_cp1

0x5442,	// (0x00057773) main_pane_idle_g1_cp_ParamLimits

0x5442,	// (0x00057773) main_pane_idle_g1_cp

0xeeb8,	// (0x000611e9) popup_ai_links_title_window

0x544e,	// (0x0005777f) soft_indicator_pane_cp1_ParamLimits

0x544e,	// (0x0005777f) soft_indicator_pane_cp1

0xa3e8,	// (0x0005c719) ai_links_pane_g1

0xa3f1,	// (0x0005c722) grid_ai_links_pane

0xa3cd,	// (0x0005c6fe) ai_gene_pane_1

0xa3d6,	// (0x0005c707) ai_gene_pane_2

0xa3df,	// (0x0005c710) list_highlight_pane_cp4

0xa3ad,	// (0x0005c6de) cell_ai_link_pane_ParamLimits

0xa3ad,	// (0x0005c6de) cell_ai_link_pane

0xa3a5,	// (0x0005c6d6) cell_ai_link_pane_g1

0xf148,	// (0x00061479) cell_ai_link_pane_g2

0x0001,

0xf8f7,	// (0x00061c28) cell_ai_link_pane_g

0xed5d,	// (0x0006108e) grid_highlight_cp2

0xed5d,	// (0x0006108e) bg_popup_sub_pane_cp1

0xeecf,	// (0x00061200) popup_ai_links_title_window_t1

0xa2f1,	// (0x0005c622) ai_gene_pane_1_g1_ParamLimits

0xa2f1,	// (0x0005c622) ai_gene_pane_1_g1

0xa2fd,	// (0x0005c62e) ai_gene_pane_1_g2_ParamLimits

0xa2fd,	// (0x0005c62e) ai_gene_pane_1_g2

0x0001,

0xf8ed,	// (0x00061c1e) ai_gene_pane_1_g_ParamLimits

0xf8ed,	// (0x00061c1e) ai_gene_pane_1_g

0xa30a,	// (0x0005c63b) ai_gene_pane_1_t1_ParamLimits

0xa30a,	// (0x0005c63b) ai_gene_pane_1_t1

0xa33e,	// (0x0005c66f) grid_ai_soft_ind_pane

0xa2dc,	// (0x0005c60d) ai_gene_pane_2_t1_ParamLimits

0xa2dc,	// (0x0005c60d) ai_gene_pane_2_t1

0x545a,	// (0x0005778b) main_pane_empty_t1_ParamLimits

0x545a,	// (0x0005778b) main_pane_empty_t1

0x5472,	// (0x000577a3) main_pane_empty_t2_ParamLimits

0x5472,	// (0x000577a3) main_pane_empty_t2

0x5487,	// (0x000577b8) main_pane_empty_t3_ParamLimits

0x5487,	// (0x000577b8) main_pane_empty_t3

0x5499,	// (0x000577ca) main_pane_empty_t4_ParamLimits

0x5499,	// (0x000577ca) main_pane_empty_t4

0x54ab,	// (0x000577dc) main_pane_empty_t5_ParamLimits

0x54ab,	// (0x000577dc) main_pane_empty_t5

0x0004,

0xf54f,	// (0x00061880) main_pane_empty_t_ParamLimits

0xf54f,	// (0x00061880) main_pane_empty_t

0x32ea,	// (0x0005561b) bg_popup_window_pane_ParamLimits

0x32ea,	// (0x0005561b) bg_popup_window_pane

0xa03e,	// (0x0005c36f) find_popup_pane_cp2_ParamLimits

0xa03e,	// (0x0005c36f) find_popup_pane_cp2

0xa04a,	// (0x0005c37b) heading_pane_ParamLimits

0xa04a,	// (0x0005c37b) heading_pane

0xed5d,	// (0x0006108e) bg_popup_sub_pane

0x9fb8,	// (0x0005c2e9) bg_popup_window_pane_g1_ParamLimits

0x9fb8,	// (0x0005c2e9) bg_popup_window_pane_g1

0x9fc4,	// (0x0005c2f5) bg_popup_window_pane_g2_ParamLimits

0x9fc4,	// (0x0005c2f5) bg_popup_window_pane_g2

0x9fd0,	// (0x0005c301) bg_popup_window_pane_g3_ParamLimits

0x9fd0,	// (0x0005c301) bg_popup_window_pane_g3

0x9fdc,	// (0x0005c30d) bg_popup_window_pane_g4_ParamLimits

0x9fdc,	// (0x0005c30d) bg_popup_window_pane_g4

0x9fe8,	// (0x0005c319) bg_popup_window_pane_g5_ParamLimits

0x9fe8,	// (0x0005c319) bg_popup_window_pane_g5

0x9ff4,	// (0x0005c325) bg_popup_window_pane_g6_ParamLimits

0x9ff4,	// (0x0005c325) bg_popup_window_pane_g6

0xa000,	// (0x0005c331) bg_popup_window_pane_g7_ParamLimits

0xa000,	// (0x0005c331) bg_popup_window_pane_g7

0xa00c,	// (0x0005c33d) bg_popup_window_pane_g8_ParamLimits

0xa00c,	// (0x0005c33d) bg_popup_window_pane_g8

0xa018,	// (0x0005c349) bg_popup_window_pane_g9_ParamLimits

0xa018,	// (0x0005c349) bg_popup_window_pane_g9

0xa024,	// (0x0005c355) bg_popup_window_pane_g10_ParamLimits

0xa024,	// (0x0005c355) bg_popup_window_pane_g10

0x0009,

0xf8b5,	// (0x00061be6) bg_popup_window_pane_g_ParamLimits

0xf8b5,	// (0x00061be6) bg_popup_window_pane_g

0x9f4d,	// (0x0005c27e) bg_popup_heading_pane_ParamLimits

0x9f4d,	// (0x0005c27e) bg_popup_heading_pane

0x6f0e,	// (0x0005923f) tabs_4_passive_pane_cp_srt_ParamLimits

0x6f0e,	// (0x0005923f) tabs_4_passive_pane_cp_srt

0x6f20,	// (0x00059251) tabs_4_passive_pane_srt_ParamLimits

0x9f61,	// (0x0005c292) heading_pane_g2

0x6f20,	// (0x00059251) tabs_4_passive_pane_srt

0x8b5f,	// (0x0005ae90) bg_passive_tab_pane_cp3_srt_ParamLimits

0x8b5f,	// (0x0005ae90) bg_passive_tab_pane_cp3_srt

0x9f69,	// (0x0005c29a) heading_pane_t1_ParamLimits

0x9f69,	// (0x0005c29a) heading_pane_t1

0x9f80,	// (0x0005c2b1) heading_pane_t2_ParamLimits

0x9f80,	// (0x0005c2b1) heading_pane_t2

0x0001,

0xf8b0,	// (0x00061be1) heading_pane_t_ParamLimits

0xf8b0,	// (0x00061be1) heading_pane_t

0x98b5,	// (0x0005bbe6) bg_popup_heading_pane_g1

0x9964,	// (0x0005bc95) bg_popup_heading_pane_g2

0x996e,	// (0x0005bc9f) bg_popup_heading_pane_g3

0x9978,	// (0x0005bca9) bg_popup_heading_pane_g4

0x9982,	// (0x0005bcb3) bg_popup_heading_pane_g5

0x998c,	// (0x0005bcbd) bg_popup_heading_pane_g6

0x9994,	// (0x0005bcc5) bg_popup_heading_pane_g7

0x999c,	// (0x0005bccd) bg_popup_heading_pane_g8

0x99a6,	// (0x0005bcd7) bg_popup_heading_pane_g9

0x0008,

0xf86c,	// (0x00061b9d) bg_popup_heading_pane_g

0x90ad,	// (0x0005b3de) bg_popup_sub_pane_g1

0x90bd,	// (0x0005b3ee) bg_popup_sub_pane_g2

0x90b5,	// (0x0005b3e6) bg_popup_sub_pane_g3

0x90cd,	// (0x0005b3fe) bg_popup_sub_pane_g4

0x90c5,	// (0x0005b3f6) bg_popup_sub_pane_g5

0x90d5,	// (0x0005b406) bg_popup_sub_pane_g6

0x90dd,	// (0x0005b40e) bg_popup_sub_pane_g7

0x90ed,	// (0x0005b41e) bg_popup_sub_pane_g8

0x90e5,	// (0x0005b416) bg_popup_sub_pane_g9

0x0008,

0xf846,	// (0x00061b77) bg_popup_sub_pane_g

0xeede,	// (0x0006120f) bg_popup_window_pane_cp5_ParamLimits

0xeede,	// (0x0006120f) bg_popup_window_pane_cp5

0xeefa,	// (0x0006122b) popup_note_window_g1_ParamLimits

0xeefa,	// (0x0006122b) popup_note_window_g1

0xef06,	// (0x00061237) popup_note_window_t1_ParamLimits

0xef06,	// (0x00061237) popup_note_window_t1

0xef1c,	// (0x0006124d) popup_note_window_t2_ParamLimits

0xef1c,	// (0x0006124d) popup_note_window_t2

0xef32,	// (0x00061263) popup_note_window_t3_ParamLimits

0xef32,	// (0x00061263) popup_note_window_t3

0xef48,	// (0x00061279) popup_note_window_t4_ParamLimits

0xef48,	// (0x00061279) popup_note_window_t4

0xef70,	// (0x000612a1) popup_note_window_t5_ParamLimits

0xef70,	// (0x000612a1) popup_note_window_t5

0x0004,

0xf55a,	// (0x0006188b) popup_note_window_t_ParamLimits

0xf55a,	// (0x0006188b) popup_note_window_t

0xefba,	// (0x000612eb) bg_popup_window_pane_cp6_ParamLimits

0xefba,	// (0x000612eb) bg_popup_window_pane_cp6

0x9831,	// (0x0005bb62) popup_note_image_window_g1_ParamLimits

0x9831,	// (0x0005bb62) popup_note_image_window_g1

0x983d,	// (0x0005bb6e) popup_note_image_window_g2_ParamLimits

0x983d,	// (0x0005bb6e) popup_note_image_window_g2

0x0001,

0xf83a,	// (0x00061b6b) popup_note_image_window_g_ParamLimits

0xf83a,	// (0x00061b6b) popup_note_image_window_g

0x9856,	// (0x0005bb87) popup_note_image_window_t1_ParamLimits

0x9856,	// (0x0005bb87) popup_note_image_window_t1

0x986f,	// (0x0005bba0) popup_note_image_window_t2_ParamLimits

0x986f,	// (0x0005bba0) popup_note_image_window_t2

0x9888,	// (0x0005bbb9) popup_note_image_window_t3_ParamLimits

0x9888,	// (0x0005bbb9) popup_note_image_window_t3

0x0002,

0xf83f,	// (0x00061b70) popup_note_image_window_t_ParamLimits

0xf83f,	// (0x00061b70) popup_note_image_window_t

0x96f1,	// (0x0005ba22) bg_popup_window_pane_cp7_ParamLimits

0x96f1,	// (0x0005ba22) bg_popup_window_pane_cp7

0x9721,	// (0x0005ba52) popup_note_wait_window_g1_ParamLimits

0x9721,	// (0x0005ba52) popup_note_wait_window_g1

0x972d,	// (0x0005ba5e) popup_note_wait_window_g2_ParamLimits

0x972d,	// (0x0005ba5e) popup_note_wait_window_g2

0x0002,

0xf828,	// (0x00061b59) popup_note_wait_window_g_ParamLimits

0xf828,	// (0x00061b59) popup_note_wait_window_g

0x9745,	// (0x0005ba76) popup_note_wait_window_t1_ParamLimits

0x9745,	// (0x0005ba76) popup_note_wait_window_t1

0x976c,	// (0x0005ba9d) popup_note_wait_window_t2_ParamLimits

0x976c,	// (0x0005ba9d) popup_note_wait_window_t2

0x978a,	// (0x0005babb) popup_note_wait_window_t3_ParamLimits

0x978a,	// (0x0005babb) popup_note_wait_window_t3

0x979d,	// (0x0005bace) popup_note_wait_window_t4_ParamLimits

0x979d,	// (0x0005bace) popup_note_wait_window_t4

0x0004,

0xf82f,	// (0x00061b60) popup_note_wait_window_t_ParamLimits

0xf82f,	// (0x00061b60) popup_note_wait_window_t

0x97c2,	// (0x0005baf3) wait_bar_pane_ParamLimits

0x97c2,	// (0x0005baf3) wait_bar_pane

0xed5d,	// (0x0006108e) wait_anim_pane

0xed5d,	// (0x0006108e) wait_border_pane

0xed53,	// (0x00061084) wait_anim_pane_g1

0xed53,	// (0x00061084) wait_anim_pane_g2

0x0001,

0xf6e3,	// (0x00061a14) wait_anim_pane_g

0x9695,	// (0x0005b9c6) wait_border_pane_g1

0x96a0,	// (0x0005b9d1) wait_border_pane_g2

0x96a9,	// (0x0005b9da) wait_border_pane_g3

0x0002,

0xf821,	// (0x00061b52) wait_border_pane_g

0x94ff,	// (0x0005b830) bg_popup_window_pane_cp16_ParamLimits

0x94ff,	// (0x0005b830) bg_popup_window_pane_cp16

0x95ff,	// (0x0005b930) indicator_popup_pane_cp4_ParamLimits

0x95ff,	// (0x0005b930) indicator_popup_pane_cp4

0x9613,	// (0x0005b944) popup_query_data_window_t1_ParamLimits

0x9613,	// (0x0005b944) popup_query_data_window_t1

0x9625,	// (0x0005b956) popup_query_data_window_t2_ParamLimits

0x9625,	// (0x0005b956) popup_query_data_window_t2

0x963e,	// (0x0005b96f) popup_query_data_window_t3_ParamLimits

0x963e,	// (0x0005b96f) popup_query_data_window_t3

0x0002,

0xf81a,	// (0x00061b4b) popup_query_data_window_t_ParamLimits

0xf81a,	// (0x00061b4b) popup_query_data_window_t

0x9658,	// (0x0005b989) query_popup_data_pane_ParamLimits

0x9658,	// (0x0005b989) query_popup_data_pane

0x966c,	// (0x0005b99d) query_popup_data_pane_cp1_ParamLimits

0x966c,	// (0x0005b99d) query_popup_data_pane_cp1

0x94ff,	// (0x0005b830) bg_popup_window_pane_cp10_ParamLimits

0x94ff,	// (0x0005b830) bg_popup_window_pane_cp10

0x9531,	// (0x0005b862) indicator_popup_pane_ParamLimits

0x9531,	// (0x0005b862) indicator_popup_pane

0x9553,	// (0x0005b884) popup_query_code_window_t1_ParamLimits

0x9553,	// (0x0005b884) popup_query_code_window_t1

0x956d,	// (0x0005b89e) popup_query_code_window_t2_ParamLimits

0x956d,	// (0x0005b89e) popup_query_code_window_t2

0x95b6,	// (0x0005b8e7) popup_query_code_window_t3_ParamLimits

0x95b6,	// (0x0005b8e7) popup_query_code_window_t3

0x0002,

0xf813,	// (0x00061b44) popup_query_code_window_t_ParamLimits

0xf813,	// (0x00061b44) popup_query_code_window_t

0x95e5,	// (0x0005b916) query_popup_pane_ParamLimits

0x95e5,	// (0x0005b916) query_popup_pane

0xefba,	// (0x000612eb) bg_popup_window_pane_cp15_ParamLimits

0xefba,	// (0x000612eb) bg_popup_window_pane_cp15

0xefda,	// (0x0006130b) indicator_popup_pane_cp1_ParamLimits

0xefda,	// (0x0006130b) indicator_popup_pane_cp1

0xefed,	// (0x0006131e) indicator_popup_pane_cp2_ParamLimits

0xefed,	// (0x0006131e) indicator_popup_pane_cp2

0xf008,	// (0x00061339) popup_query_data_code_window_g1_ParamLimits

0xf008,	// (0x00061339) popup_query_data_code_window_g1

0xf01b,	// (0x0006134c) popup_query_data_code_window_t1_ParamLimits

0xf01b,	// (0x0006134c) popup_query_data_code_window_t1

0xf0bb,	// (0x000613ec) popup_query_data_code_window_t2_ParamLimits

0xf0bb,	// (0x000613ec) popup_query_data_code_window_t2

0xf0cd,	// (0x000613fe) popup_query_data_code_window_t3_ParamLimits

0xf0cd,	// (0x000613fe) popup_query_data_code_window_t3

0xf0e3,	// (0x00061414) popup_query_data_code_window_t4_ParamLimits

0xf0e3,	// (0x00061414) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x00061896) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x00061896) popup_query_data_code_window_t

0x6b07,	// (0x00058e38) list_single_midp_graphic_pane_g3

0xf0fd,	// (0x0006142e) query_popup_data_pane_cp2_ParamLimits

0xf110,	// (0x00061441) query_popup_pane_cp2_ParamLimits

0xf110,	// (0x00061441) query_popup_pane_cp2

0xed5d,	// (0x0006108e) bg_popup_window_pane_cp11

0x94e3,	// (0x0005b814) heading_pane_cp5

0x94eb,	// (0x0005b81c) listscroll_popup_info_pane

0xed5d,	// (0x0006108e) input_focus_pane_cp3

0xf12b,	// (0x0006145c) query_popup_pane_t1

0xf139,	// (0x0006146a) list_popup_info_pane_ParamLimits

0xf139,	// (0x0006146a) list_popup_info_pane

0xf148,	// (0x00061479) listscroll_popup_info_pane_g1

0xf150,	// (0x00061481) scroll_pane_cp7

0xf15a,	// (0x0006148b) popup_info_list_pane_t1_ParamLimits

0xf15a,	// (0x0006148b) popup_info_list_pane_t1

0xf174,	// (0x000614a5) popup_info_list_pane_t2_ParamLimits

0xf174,	// (0x000614a5) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x0006189f) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x0006189f) popup_info_list_pane_t

0xed5d,	// (0x0006108e) bg_popup_window_pane_cp12

0xaa42,	// (0x0005cd73) find_popup_pane

0xedab,	// (0x000610dc) bg_popup_window_pane_cp3

0xf18e,	// (0x000614bf) heading_pane_cp3

0xf19d,	// (0x000614ce) listscroll_popup_graphic_pane

0xed5d,	// (0x0006108e) bg_popup_window_pane_cp4

0x550d,	// (0x0005783e) heading_pane_cp4

0xf1ad,	// (0x000614de) listscroll_popup_colour_pane

0x5517,	// (0x00057848) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x5517,	// (0x00057848) cell_large_graphic_colour_none_popup_pane

0x552b,	// (0x0005785c) grid_large_graphic_colour_popup_pane_ParamLimits

0x552b,	// (0x0005785c) grid_large_graphic_colour_popup_pane

0x5557,	// (0x00057888) listscroll_popup_colour_pane_g1_ParamLimits

0x5557,	// (0x00057888) listscroll_popup_colour_pane_g1

0x556e,	// (0x0005789f) listscroll_popup_colour_pane_g2_ParamLimits

0x556e,	// (0x0005789f) listscroll_popup_colour_pane_g2

0x5585,	// (0x000578b6) listscroll_popup_colour_pane_g3_ParamLimits

0x5585,	// (0x000578b6) listscroll_popup_colour_pane_g3

0x5595,	// (0x000578c6) listscroll_popup_colour_pane_g4_ParamLimits

0x5595,	// (0x000578c6) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x000618a4) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x000618a4) listscroll_popup_colour_pane_g

0xf1b5,	// (0x000614e6) scroll_pane_cp6_ParamLimits

0xf1b5,	// (0x000614e6) scroll_pane_cp6

0x55a9,	// (0x000578da) cell_large_graphic_colour_popup_pane_ParamLimits

0x55a9,	// (0x000578da) cell_large_graphic_colour_popup_pane

0xf1c7,	// (0x000614f8) cell_large_graphic_colour_none_popup_pane_t1

0xed5d,	// (0x0006108e) grid_highlight_pane_cp5

0xf1d6,	// (0x00061507) cell_large_graphic_colour_popup_pane_g1

0xf1de,	// (0x0006150f) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x000618ad) cell_large_graphic_colour_popup_pane_g

0xf1e6,	// (0x00061517) cell_large_graphic_colour_popup_pane_g2_copy1

0xf1ef,	// (0x00061520) grid_highlight_pane_cp4

0xf1f7,	// (0x00061528) bg_popup_window_pane_cp8_ParamLimits

0xf1f7,	// (0x00061528) bg_popup_window_pane_cp8

0xf212,	// (0x00061543) popup_snote_single_text_window_g1_ParamLimits

0xf212,	// (0x00061543) popup_snote_single_text_window_g1

0xf224,	// (0x00061555) popup_snote_single_text_window_t1_ParamLimits

0xf224,	// (0x00061555) popup_snote_single_text_window_t1

0xf237,	// (0x00061568) popup_snote_single_text_window_t2_ParamLimits

0xf237,	// (0x00061568) popup_snote_single_text_window_t2

0xf24a,	// (0x0006157b) popup_snote_single_text_window_t3_ParamLimits

0xf24a,	// (0x0006157b) popup_snote_single_text_window_t3

0xf283,	// (0x000615b4) popup_snote_single_text_window_t4_ParamLimits

0xf283,	// (0x000615b4) popup_snote_single_text_window_t4

0xf2b7,	// (0x000615e8) popup_snote_single_text_window_t5_ParamLimits

0xf2b7,	// (0x000615e8) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x000618b2) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x000618b2) popup_snote_single_text_window_t

0xf2e6,	// (0x00061617) bg_popup_window_pane_cp9_ParamLimits

0xf2e6,	// (0x00061617) bg_popup_window_pane_cp9

0xf212,	// (0x00061543) popup_snote_single_graphic_window_g1_ParamLimits

0xf212,	// (0x00061543) popup_snote_single_graphic_window_g1

0xf2f4,	// (0x00061625) popup_snote_single_graphic_window_g2_ParamLimits

0xf2f4,	// (0x00061625) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x000618bd) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x000618bd) popup_snote_single_graphic_window_g

0xf300,	// (0x00061631) popup_snote_single_graphic_window_t1_ParamLimits

0xf300,	// (0x00061631) popup_snote_single_graphic_window_t1

0xf313,	// (0x00061644) popup_snote_single_graphic_window_t2_ParamLimits

0xf313,	// (0x00061644) popup_snote_single_graphic_window_t2

0xf326,	// (0x00061657) popup_snote_single_graphic_window_t3_ParamLimits

0xf326,	// (0x00061657) popup_snote_single_graphic_window_t3

0xf35f,	// (0x00061690) popup_snote_single_graphic_window_t4_ParamLimits

0xf35f,	// (0x00061690) popup_snote_single_graphic_window_t4

0xf393,	// (0x000616c4) popup_snote_single_graphic_window_t5_ParamLimits

0xf393,	// (0x000616c4) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x000618c2) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x000618c2) popup_snote_single_graphic_window_t

0xa980,	// (0x0005ccb1) grid_graphic_popup_pane_ParamLimits

0xa980,	// (0x0005ccb1) grid_graphic_popup_pane

0xa9ae,	// (0x0005ccdf) listscroll_popup_graphic_pane_g1_ParamLimits

0xa9ae,	// (0x0005ccdf) listscroll_popup_graphic_pane_g1

0xa9c2,	// (0x0005ccf3) listscroll_popup_graphic_pane_g2_ParamLimits

0xa9c2,	// (0x0005ccf3) listscroll_popup_graphic_pane_g2

0x0001,

0xf990,	// (0x00061cc1) listscroll_popup_graphic_pane_g_ParamLimits

0xf990,	// (0x00061cc1) listscroll_popup_graphic_pane_g

0xa9d6,	// (0x0005cd07) scroll_pane_cp5

0xa918,	// (0x0005cc49) cell_graphic_popup_pane_ParamLimits

0xa918,	// (0x0005cc49) cell_graphic_popup_pane

0xa8f9,	// (0x0005cc2a) cell_graphic_popup_pane_g1

0xa901,	// (0x0005cc32) cell_graphic_popup_pane_g2

0xf1e6,	// (0x00061517) cell_graphic_popup_pane_g3

0x0002,

0xf989,	// (0x00061cba) cell_graphic_popup_pane_g

0xa90a,	// (0x0005cc3b) cell_graphic_popup_pane_t2

0xf1ef,	// (0x00061520) grid_highlight_pane_cp3

0xf3d4,	// (0x00061705) list_gen_pane_ParamLimits

0xf3d4,	// (0x00061705) list_gen_pane

0xf3fc,	// (0x0006172d) scroll_pane

0xa851,	// (0x0005cb82) bg_list_pane_g1_ParamLimits

0xa851,	// (0x0005cb82) bg_list_pane_g1

0xa86e,	// (0x0005cb9f) bg_list_pane_g2_ParamLimits

0xa86e,	// (0x0005cb9f) bg_list_pane_g2

0xa883,	// (0x0005cbb4) bg_list_pane_g3_ParamLimits

0xa883,	// (0x0005cbb4) bg_list_pane_g3

0xa897,	// (0x0005cbc8) bg_list_pane_g4_ParamLimits

0xa897,	// (0x0005cbc8) bg_list_pane_g4

0xa8ab,	// (0x0005cbdc) bg_list_pane_g5_ParamLimits

0xa8ab,	// (0x0005cbdc) bg_list_pane_g5

0x0004,

0xf97e,	// (0x00061caf) bg_list_pane_g_ParamLimits

0xf97e,	// (0x00061caf) bg_list_pane_g

0xa81f,	// (0x0005cb50) list_double2_graphic_large_graphic_pane_ParamLimits

0xa81f,	// (0x0005cb50) list_double2_graphic_large_graphic_pane

0xa81f,	// (0x0005cb50) list_double2_graphic_pane_ParamLimits

0xa81f,	// (0x0005cb50) list_double2_graphic_pane

0xa81f,	// (0x0005cb50) list_double2_large_graphic_pane_ParamLimits

0xa81f,	// (0x0005cb50) list_double2_large_graphic_pane

0x6ed6,	// (0x00059207) list_double2_pane_ParamLimits

0x6ed6,	// (0x00059207) list_double2_pane

0xa81f,	// (0x0005cb50) list_double_graphic_heading_pane_ParamLimits

0xa81f,	// (0x0005cb50) list_double_graphic_heading_pane

0xa81f,	// (0x0005cb50) list_double_graphic_pane_ParamLimits

0xa81f,	// (0x0005cb50) list_double_graphic_pane

0xa81f,	// (0x0005cb50) list_double_heading_pane_ParamLimits

0xa81f,	// (0x0005cb50) list_double_heading_pane

0xa81f,	// (0x0005cb50) list_double_large_graphic_pane_ParamLimits

0xa81f,	// (0x0005cb50) list_double_large_graphic_pane

0xa81f,	// (0x0005cb50) list_double_number_pane_ParamLimits

0xa81f,	// (0x0005cb50) list_double_number_pane

0xa81f,	// (0x0005cb50) list_double_pane_ParamLimits

0xa81f,	// (0x0005cb50) list_double_pane

0xa81f,	// (0x0005cb50) list_double_time_pane_ParamLimits

0xa81f,	// (0x0005cb50) list_double_time_pane

0xa81f,	// (0x0005cb50) list_setting_number_pane_ParamLimits

0xa81f,	// (0x0005cb50) list_setting_number_pane

0xa81f,	// (0x0005cb50) list_setting_pane_ParamLimits

0xa81f,	// (0x0005cb50) list_setting_pane

0x9b48,	// (0x0005be79) list_single_2graphic_pane_ParamLimits

0x9b48,	// (0x0005be79) list_single_2graphic_pane

0x9b48,	// (0x0005be79) list_single_graphic_heading_pane_ParamLimits

0x9b48,	// (0x0005be79) list_single_graphic_heading_pane

0x9b48,	// (0x0005be79) list_single_graphic_pane_ParamLimits

0x9b48,	// (0x0005be79) list_single_graphic_pane

0x9b48,	// (0x0005be79) list_single_heading_pane_ParamLimits

0x9b48,	// (0x0005be79) list_single_heading_pane

0xa836,	// (0x0005cb67) list_single_large_graphic_pane_ParamLimits

0xa836,	// (0x0005cb67) list_single_large_graphic_pane

0x9b48,	// (0x0005be79) list_single_number_heading_pane_ParamLimits

0x9b48,	// (0x0005be79) list_single_number_heading_pane

0x9b48,	// (0x0005be79) list_single_number_pane_ParamLimits

0x9b48,	// (0x0005be79) list_single_number_pane

0x9b48,	// (0x0005be79) list_single_pane_ParamLimits

0x9b48,	// (0x0005be79) list_single_pane

0xed5d,	// (0x0006108e) list_highlight_pane_cp1

0x55e0,	// (0x00057911) list_single_pane_g1_ParamLimits

0x55e0,	// (0x00057911) list_single_pane_g1

0x55ec,	// (0x0005791d) list_single_pane_g2_ParamLimits

0x55ec,	// (0x0005791d) list_single_pane_g2

0x0001,

0xf5ad,	// (0x000618de) list_single_pane_g_ParamLimits

0xf5ad,	// (0x000618de) list_single_pane_g

0x6ec0,	// (0x000591f1) list_single_pane_t1_ParamLimits

0x6ec0,	// (0x000591f1) list_single_pane_t1

0x55e0,	// (0x00057911) list_single_number_pane_g1_ParamLimits

0x55e0,	// (0x00057911) list_single_number_pane_g1

0x55ec,	// (0x0005791d) list_single_number_pane_g2_ParamLimits

0x55ec,	// (0x0005791d) list_single_number_pane_g2

0x0001,

0xf5ad,	// (0x000618de) list_single_number_pane_g_ParamLimits

0xf5ad,	// (0x000618de) list_single_number_pane_g

0x6dea,	// (0x0005911b) list_single_number_pane_t1_ParamLimits

0x6dea,	// (0x0005911b) list_single_number_pane_t1

0x6e00,	// (0x00059131) list_single_number_pane_t2_ParamLimits

0x6e00,	// (0x00059131) list_single_number_pane_t2

0x0001,

0xf93f,	// (0x00061c70) list_single_number_pane_t_ParamLimits

0xf93f,	// (0x00061c70) list_single_number_pane_t

0x55d4,	// (0x00057905) list_single_graphic_pane_g1_ParamLimits

0x55d4,	// (0x00057905) list_single_graphic_pane_g1

0x55e0,	// (0x00057911) list_single_graphic_pane_g2_ParamLimits

0x55e0,	// (0x00057911) list_single_graphic_pane_g2

0x55ec,	// (0x0005791d) list_single_graphic_pane_g3_ParamLimits

0x55ec,	// (0x0005791d) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x000618cd) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x000618cd) list_single_graphic_pane_g

0x55f8,	// (0x00057929) list_single_graphic_pane_t1_ParamLimits

0x55f8,	// (0x00057929) list_single_graphic_pane_t1

0x560e,	// (0x0005793f) list_single_heading_pane_g1_ParamLimits

0x560e,	// (0x0005793f) list_single_heading_pane_g1

0x55ec,	// (0x0005791d) list_single_heading_pane_g2_ParamLimits

0x55ec,	// (0x0005791d) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x000618d4) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x000618d4) list_single_heading_pane_g

0x5621,	// (0x00057952) list_single_heading_pane_t1_ParamLimits

0x5621,	// (0x00057952) list_single_heading_pane_t1

0x5637,	// (0x00057968) list_single_heading_pane_t2_ParamLimits

0x5637,	// (0x00057968) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x000618d9) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x000618d9) list_single_heading_pane_t

0x55e0,	// (0x00057911) list_single_number_heading_pane_g1_ParamLimits

0x55e0,	// (0x00057911) list_single_number_heading_pane_g1

0x55ec,	// (0x0005791d) list_single_number_heading_pane_g2_ParamLimits

0x55ec,	// (0x0005791d) list_single_number_heading_pane_g2

0x0001,

0xf5ad,	// (0x000618de) list_single_number_heading_pane_g_ParamLimits

0xf5ad,	// (0x000618de) list_single_number_heading_pane_g

0x5649,	// (0x0005797a) list_single_number_heading_pane_t1_ParamLimits

0x5649,	// (0x0005797a) list_single_number_heading_pane_t1

0x565f,	// (0x00057990) list_single_number_heading_pane_t2_ParamLimits

0x565f,	// (0x00057990) list_single_number_heading_pane_t2

0x5671,	// (0x000579a2) list_single_number_heading_pane_t3_ParamLimits

0x5671,	// (0x000579a2) list_single_number_heading_pane_t3

0x0002,

0xf5b2,	// (0x000618e3) list_single_number_heading_pane_t_ParamLimits

0xf5b2,	// (0x000618e3) list_single_number_heading_pane_t

0x5683,	// (0x000579b4) list_single_graphic_heading_pane_g1_ParamLimits

0x5683,	// (0x000579b4) list_single_graphic_heading_pane_g1

0x569b,	// (0x000579cc) list_single_graphic_heading_pane_g4_ParamLimits

0x569b,	// (0x000579cc) list_single_graphic_heading_pane_g4

0x55ec,	// (0x0005791d) list_single_graphic_heading_pane_g5_ParamLimits

0x55ec,	// (0x0005791d) list_single_graphic_heading_pane_g5

0x0002,

0xf5b9,	// (0x000618ea) list_single_graphic_heading_pane_g_ParamLimits

0xf5b9,	// (0x000618ea) list_single_graphic_heading_pane_g

0x5649,	// (0x0005797a) list_single_graphic_heading_pane_t1_ParamLimits

0x5649,	// (0x0005797a) list_single_graphic_heading_pane_t1

0x56ac,	// (0x000579dd) list_single_graphic_heading_pane_t2_ParamLimits

0x56ac,	// (0x000579dd) list_single_graphic_heading_pane_t2

0x0001,

0xf5c0,	// (0x000618f1) list_single_graphic_heading_pane_t_ParamLimits

0xf5c0,	// (0x000618f1) list_single_graphic_heading_pane_t

0x56c4,	// (0x000579f5) list_single_large_graphic_pane_g1_ParamLimits

0x56c4,	// (0x000579f5) list_single_large_graphic_pane_g1

0x55e0,	// (0x00057911) list_single_large_graphic_pane_g2_ParamLimits

0x55e0,	// (0x00057911) list_single_large_graphic_pane_g2

0x55ec,	// (0x0005791d) list_single_large_graphic_pane_g3_ParamLimits

0x55ec,	// (0x0005791d) list_single_large_graphic_pane_g3

0x0002,

0xf5c5,	// (0x000618f6) list_single_large_graphic_pane_g_ParamLimits

0xf5c5,	// (0x000618f6) list_single_large_graphic_pane_g

0x96a0,	// (0x0005b9d1) wait_border_pane_g2_copy1

0x56d0,	// (0x00057a01) list_single_large_graphic_pane_g4_cp2

0x56d8,	// (0x00057a09) list_single_large_graphic_pane_t1_ParamLimits

0x56d8,	// (0x00057a09) list_single_large_graphic_pane_t1

0x81e9,	// (0x0005a51a) list_double_pane_g1_ParamLimits

0x81e9,	// (0x0005a51a) list_double_pane_g1

0x3279,	// (0x000555aa) list_double_pane_g2_ParamLimits

0x3279,	// (0x000555aa) list_double_pane_g2

0x0001,

0xf5cc,	// (0x000618fd) list_double_pane_g_ParamLimits

0xf5cc,	// (0x000618fd) list_double_pane_g

0x56ee,	// (0x00057a1f) list_double_pane_t1_ParamLimits

0x56ee,	// (0x00057a1f) list_double_pane_t1

0x5704,	// (0x00057a35) list_double_pane_t2_ParamLimits

0x5704,	// (0x00057a35) list_double_pane_t2

0x0001,

0xf5d1,	// (0x00061902) list_double_pane_t_ParamLimits

0xf5d1,	// (0x00061902) list_double_pane_t

0x5716,	// (0x00057a47) list_double2_pane_g1_ParamLimits

0x5716,	// (0x00057a47) list_double2_pane_g1

0x5727,	// (0x00057a58) list_double2_pane_g2_ParamLimits

0x5727,	// (0x00057a58) list_double2_pane_g2

0x0001,

0xf5d6,	// (0x00061907) list_double2_pane_g_ParamLimits

0xf5d6,	// (0x00061907) list_double2_pane_g

0x5733,	// (0x00057a64) list_double2_pane_t1_ParamLimits

0x5733,	// (0x00057a64) list_double2_pane_t1

0x5749,	// (0x00057a7a) list_double2_pane_t2_ParamLimits

0x5749,	// (0x00057a7a) list_double2_pane_t2

0x0001,

0xf5db,	// (0x0006190c) list_double2_pane_t_ParamLimits

0xf5db,	// (0x0006190c) list_double2_pane_t

0x81e9,	// (0x0005a51a) list_double_number_pane_g1_ParamLimits

0x81e9,	// (0x0005a51a) list_double_number_pane_g1

0x3279,	// (0x000555aa) list_double_number_pane_g2_ParamLimits

0x3279,	// (0x000555aa) list_double_number_pane_g2

0x0001,

0xf5cc,	// (0x000618fd) list_double_number_pane_g_ParamLimits

0xf5cc,	// (0x000618fd) list_double_number_pane_g

0x575b,	// (0x00057a8c) list_double_number_pane_t1_ParamLimits

0x575b,	// (0x00057a8c) list_double_number_pane_t1

0x576d,	// (0x00057a9e) list_double_number_pane_t2_ParamLimits

0x576d,	// (0x00057a9e) list_double_number_pane_t2

0x5783,	// (0x00057ab4) list_double_number_pane_t3_ParamLimits

0x5783,	// (0x00057ab4) list_double_number_pane_t3

0x0002,

0xf5e0,	// (0x00061911) list_double_number_pane_t_ParamLimits

0xf5e0,	// (0x00061911) list_double_number_pane_t

0x5795,	// (0x00057ac6) list_double_graphic_pane_g1_ParamLimits

0x5795,	// (0x00057ac6) list_double_graphic_pane_g1

0x57a1,	// (0x00057ad2) list_double_graphic_pane_g2_ParamLimits

0x57a1,	// (0x00057ad2) list_double_graphic_pane_g2

0x57b0,	// (0x00057ae1) list_double_graphic_pane_g3_ParamLimits

0x57b0,	// (0x00057ae1) list_double_graphic_pane_g3

0x0003,

0xf5e7,	// (0x00061918) list_double_graphic_pane_g_ParamLimits

0xf5e7,	// (0x00061918) list_double_graphic_pane_g

0x57c8,	// (0x00057af9) list_double_graphic_pane_t1_ParamLimits

0x57c8,	// (0x00057af9) list_double_graphic_pane_t1

0x57de,	// (0x00057b0f) list_double_graphic_pane_t2_ParamLimits

0x57de,	// (0x00057b0f) list_double_graphic_pane_t2

0x0001,

0xf5f0,	// (0x00061921) list_double_graphic_pane_t_ParamLimits

0xf5f0,	// (0x00061921) list_double_graphic_pane_t

0x57f0,	// (0x00057b21) list_double2_graphic_pane_g1_ParamLimits

0x57f0,	// (0x00057b21) list_double2_graphic_pane_g1

0x57fc,	// (0x00057b2d) list_double2_graphic_pane_g2_ParamLimits

0x57fc,	// (0x00057b2d) list_double2_graphic_pane_g2

0x5808,	// (0x00057b39) list_double2_graphic_pane_g3_ParamLimits

0x5808,	// (0x00057b39) list_double2_graphic_pane_g3

0x0002,

0xf5f5,	// (0x00061926) list_double2_graphic_pane_g_ParamLimits

0xf5f5,	// (0x00061926) list_double2_graphic_pane_g

0x5814,	// (0x00057b45) list_double2_graphic_pane_t1_ParamLimits

0x5814,	// (0x00057b45) list_double2_graphic_pane_t1

0x582a,	// (0x00057b5b) list_double2_graphic_pane_t2_ParamLimits

0x582a,	// (0x00057b5b) list_double2_graphic_pane_t2

0x0001,

0xf5fc,	// (0x0006192d) list_double2_graphic_pane_t_ParamLimits

0xf5fc,	// (0x0006192d) list_double2_graphic_pane_t

0x583c,	// (0x00057b6d) list_double_large_graphic_pane_g1_ParamLimits

0x583c,	// (0x00057b6d) list_double_large_graphic_pane_g1

0x585b,	// (0x00057b8c) list_double_large_graphic_pane_g2_ParamLimits

0x585b,	// (0x00057b8c) list_double_large_graphic_pane_g2

0x3279,	// (0x000555aa) list_double_large_graphic_pane_g3_ParamLimits

0x3279,	// (0x000555aa) list_double_large_graphic_pane_g3

0x5871,	// (0x00057ba2) list_double_large_graphic_pane_g4_ParamLimits

0x5871,	// (0x00057ba2) list_double_large_graphic_pane_g4

0x0004,

0xf601,	// (0x00061932) list_double_large_graphic_pane_g_ParamLimits

0xf601,	// (0x00061932) list_double_large_graphic_pane_g

0x5899,	// (0x00057bca) list_double_large_graphic_pane_t1_ParamLimits

0x5899,	// (0x00057bca) list_double_large_graphic_pane_t1

0x58b2,	// (0x00057be3) list_double_large_graphic_pane_t2_ParamLimits

0x58b2,	// (0x00057be3) list_double_large_graphic_pane_t2

0x0001,

0xf60c,	// (0x0006193d) list_double_large_graphic_pane_t_ParamLimits

0xf60c,	// (0x0006193d) list_double_large_graphic_pane_t

0x58c4,	// (0x00057bf5) list_double2_large_graphic_pane_g1_ParamLimits

0x58c4,	// (0x00057bf5) list_double2_large_graphic_pane_g1

0x58d0,	// (0x00057c01) list_double2_large_graphic_pane_g2_ParamLimits

0x58d0,	// (0x00057c01) list_double2_large_graphic_pane_g2

0x5808,	// (0x00057b39) list_double2_large_graphic_pane_g3_ParamLimits

0x5808,	// (0x00057b39) list_double2_large_graphic_pane_g3

0x0002,

0xf611,	// (0x00061942) list_double2_large_graphic_pane_g_ParamLimits

0xf611,	// (0x00061942) list_double2_large_graphic_pane_g

0x58e1,	// (0x00057c12) list_double2_large_graphic_pane_t1_ParamLimits

0x58e1,	// (0x00057c12) list_double2_large_graphic_pane_t1

0x58f7,	// (0x00057c28) list_double2_large_graphic_pane_t2_ParamLimits

0x58f7,	// (0x00057c28) list_double2_large_graphic_pane_t2

0x0001,

0xf618,	// (0x00061949) list_double2_large_graphic_pane_t_ParamLimits

0xf618,	// (0x00061949) list_double2_large_graphic_pane_t

0x5909,	// (0x00057c3a) list_double_heading_pane_g1_ParamLimits

0x5909,	// (0x00057c3a) list_double_heading_pane_g1

0x591a,	// (0x00057c4b) list_double_heading_pane_g2_ParamLimits

0x591a,	// (0x00057c4b) list_double_heading_pane_g2

0x0001,

0xf61d,	// (0x0006194e) list_double_heading_pane_g_ParamLimits

0xf61d,	// (0x0006194e) list_double_heading_pane_g

0x5926,	// (0x00057c57) list_double_heading_pane_t1_ParamLimits

0x5926,	// (0x00057c57) list_double_heading_pane_t1

0x593c,	// (0x00057c6d) list_double_heading_pane_t2_ParamLimits

0x593c,	// (0x00057c6d) list_double_heading_pane_t2

0x0001,

0xf622,	// (0x00061953) list_double_heading_pane_t_ParamLimits

0xf622,	// (0x00061953) list_double_heading_pane_t

0x594e,	// (0x00057c7f) list_double_graphic_heading_pane_g1_ParamLimits

0x594e,	// (0x00057c7f) list_double_graphic_heading_pane_g1

0x5909,	// (0x00057c3a) list_double_graphic_heading_pane_g2_ParamLimits

0x5909,	// (0x00057c3a) list_double_graphic_heading_pane_g2

0x591a,	// (0x00057c4b) list_double_graphic_heading_pane_g3_ParamLimits

0x591a,	// (0x00057c4b) list_double_graphic_heading_pane_g3

0x0002,

0xf627,	// (0x00061958) list_double_graphic_heading_pane_g_ParamLimits

0xf627,	// (0x00061958) list_double_graphic_heading_pane_g

0x595a,	// (0x00057c8b) list_double_graphic_heading_pane_t1_ParamLimits

0x595a,	// (0x00057c8b) list_double_graphic_heading_pane_t1

0x5970,	// (0x00057ca1) list_double_graphic_heading_pane_t2_ParamLimits

0x5970,	// (0x00057ca1) list_double_graphic_heading_pane_t2

0x0001,

0xf62e,	// (0x0006195f) list_double_graphic_heading_pane_t_ParamLimits

0xf62e,	// (0x0006195f) list_double_graphic_heading_pane_t

0x5982,	// (0x00057cb3) list_double_time_pane_g1_ParamLimits

0x5982,	// (0x00057cb3) list_double_time_pane_g1

0x5993,	// (0x00057cc4) list_double_time_pane_g2_ParamLimits

0x5993,	// (0x00057cc4) list_double_time_pane_g2

0x0001,

0xf633,	// (0x00061964) list_double_time_pane_g_ParamLimits

0xf633,	// (0x00061964) list_double_time_pane_g

0x599f,	// (0x00057cd0) list_double_time_pane_t1_ParamLimits

0x599f,	// (0x00057cd0) list_double_time_pane_t1

0x59b5,	// (0x00057ce6) list_double_time_pane_t2_ParamLimits

0x59b5,	// (0x00057ce6) list_double_time_pane_t2

0x59c7,	// (0x00057cf8) list_double_time_pane_t3_ParamLimits

0x59c7,	// (0x00057cf8) list_double_time_pane_t3

0x59d9,	// (0x00057d0a) list_double_time_pane_t4_ParamLimits

0x59d9,	// (0x00057d0a) list_double_time_pane_t4

0x0003,

0xf638,	// (0x00061969) list_double_time_pane_t_ParamLimits

0xf638,	// (0x00061969) list_double_time_pane_t

0x59eb,	// (0x00057d1c) list_setting_pane_g1_ParamLimits

0x59eb,	// (0x00057d1c) list_setting_pane_g1

0x59f7,	// (0x00057d28) list_setting_pane_g2_ParamLimits

0x59f7,	// (0x00057d28) list_setting_pane_g2

0x0001,

0xf641,	// (0x00061972) list_setting_pane_g_ParamLimits

0xf641,	// (0x00061972) list_setting_pane_g

0x5a03,	// (0x00057d34) list_setting_pane_t1_ParamLimits

0x5a03,	// (0x00057d34) list_setting_pane_t1

0x5a1d,	// (0x00057d4e) list_setting_pane_t2_ParamLimits

0x5a1d,	// (0x00057d4e) list_setting_pane_t2

0x0002,

0xf646,	// (0x00061977) list_setting_pane_t_ParamLimits

0xf646,	// (0x00061977) list_setting_pane_t

0x5a5c,	// (0x00057d8d) set_value_pane_cp_ParamLimits

0x5a5c,	// (0x00057d8d) set_value_pane_cp

0x5a6a,	// (0x00057d9b) list_setting_number_pane_g1_ParamLimits

0x5a6a,	// (0x00057d9b) list_setting_number_pane_g1

0x5a76,	// (0x00057da7) list_setting_number_pane_g2_ParamLimits

0x5a76,	// (0x00057da7) list_setting_number_pane_g2

0x0001,

0xf64d,	// (0x0006197e) list_setting_number_pane_g_ParamLimits

0xf64d,	// (0x0006197e) list_setting_number_pane_g

0x5a82,	// (0x00057db3) list_setting_number_pane_t1_ParamLimits

0x5a82,	// (0x00057db3) list_setting_number_pane_t1

0x5a9b,	// (0x00057dcc) list_setting_number_pane_t2_ParamLimits

0x5a9b,	// (0x00057dcc) list_setting_number_pane_t2

0x5ab5,	// (0x00057de6) list_setting_number_pane_t3_ParamLimits

0x5ab5,	// (0x00057de6) list_setting_number_pane_t3

0x0003,

0xf652,	// (0x00061983) list_setting_number_pane_t_ParamLimits

0xf652,	// (0x00061983) list_setting_number_pane_t

0x5a5c,	// (0x00057d8d) set_value_pane_ParamLimits

0x5a5c,	// (0x00057d8d) set_value_pane

0xf430,	// (0x00061761) bg_set_opt_pane_ParamLimits

0xf430,	// (0x00061761) bg_set_opt_pane

0x3285,	// (0x000555b6) set_value_pane_t1

0xf451,	// (0x00061782) slider_set_pane_cp3

0xf45a,	// (0x0006178b) volume_small_pane_cp

0xf463,	// (0x00061794) list_form_gen_pane

0xf46c,	// (0x0006179d) scroll_pane_cp8

0x5af8,	// (0x00057e29) form_field_data_pane_ParamLimits

0x5af8,	// (0x00057e29) form_field_data_pane

0x5b18,	// (0x00057e49) form_field_data_wide_pane_ParamLimits

0x5b18,	// (0x00057e49) form_field_data_wide_pane

0x5b3f,	// (0x00057e70) form_field_popup_pane_ParamLimits

0x5b3f,	// (0x00057e70) form_field_popup_pane

0x3abf,	// (0x00055df0) form_field_popup_wide_pane_ParamLimits

0x3abf,	// (0x00055df0) form_field_popup_wide_pane

0x3ae0,	// (0x00055e11) form_field_slider_pane_ParamLimits

0x3ae0,	// (0x00055e11) form_field_slider_pane

0x3af3,	// (0x00055e24) form_field_slider_wide_pane_ParamLimits

0x3af3,	// (0x00055e24) form_field_slider_wide_pane

0xf47d,	// (0x000617ae) data_form_pane

0x5b6b,	// (0x00057e9c) form_field_data_pane_t1

0xf489,	// (0x000617ba) input_focus_pane

0x3b06,	// (0x00055e37) data_form_wide_pane

0x3b23,	// (0x00055e54) form_field_data_wide_pane_t1

0xf204,	// (0x00061535) input_focus_pane_cp6

0x5b85,	// (0x00057eb6) form_field_popup_pane_t1

0xf489,	// (0x000617ba) input_focus_pane_cp7

0xf4b7,	// (0x000617e8) list_form_pane

0x3b4d,	// (0x00055e7e) form_field_popup_wide_pane_t1

0xf489,	// (0x000617ba) input_focus_pane_cp8

0xf4c3,	// (0x000617f4) list_form_wide_pane

0x5ba7,	// (0x00057ed8) form_field_slider_pane_t1_ParamLimits

0x5ba7,	// (0x00057ed8) form_field_slider_pane_t1

0x5bbf,	// (0x00057ef0) form_field_slider_pane_t2_ParamLimits

0x5bbf,	// (0x00057ef0) form_field_slider_pane_t2

0x0001,

0xf662,	// (0x00061993) form_field_slider_pane_t_ParamLimits

0xf662,	// (0x00061993) form_field_slider_pane_t

0xeede,	// (0x0006120f) input_focus_pane_cp9_ParamLimits

0xeede,	// (0x0006120f) input_focus_pane_cp9

0x5bd4,	// (0x00057f05) slider_cont_pane_ParamLimits

0x5bd4,	// (0x00057f05) slider_cont_pane

0xf4cf,	// (0x00061800) form_field_slider_wide_pane_t1_ParamLimits

0xf4cf,	// (0x00061800) form_field_slider_wide_pane_t1

0x3b62,	// (0x00055e93) form_field_slider_wide_pane_t2_ParamLimits

0x3b62,	// (0x00055e93) form_field_slider_wide_pane_t2

0x0001,

0xf667,	// (0x00061998) form_field_slider_wide_pane_t_ParamLimits

0xf667,	// (0x00061998) form_field_slider_wide_pane_t

0xeede,	// (0x0006120f) input_focus_pane_cp10_ParamLimits

0xeede,	// (0x0006120f) input_focus_pane_cp10

0x5be8,	// (0x00057f19) slider_cont_pane_cp1_ParamLimits

0x5be8,	// (0x00057f19) slider_cont_pane_cp1

0x5bfc,	// (0x00057f2d) slider_form_pane_cp

0xf4e1,	// (0x00061812) input_focus_pane_g1

0xf4e9,	// (0x0006181a) input_focus_pane_g2

0xf4f1,	// (0x00061822) input_focus_pane_g3

0xf4f9,	// (0x0006182a) input_focus_pane_g4

0xf501,	// (0x00061832) input_focus_pane_g5

0xf509,	// (0x0006183a) input_focus_pane_g6

0xf511,	// (0x00061842) input_focus_pane_g7

0xf519,	// (0x0006184a) input_focus_pane_g8

0xf521,	// (0x00061852) input_focus_pane_g9

0xed53,	// (0x00061084) input_focus_pane_g10

0x0009,

0xf66c,	// (0x0006199d) input_focus_pane_g

0x96a9,	// (0x0005b9da) wait_border_pane_g3_copy1

0x5c04,	// (0x00057f35) data_form_pane_t1

0xed53,	// (0x00061084) wait_anim_pane_g1_copy1

0x6e8a,	// (0x000591bb) data_form_wide_pane_t1

0x3b74,	// (0x00055ea5) list_form_graphic_pane_cp_ParamLimits

0x3b74,	// (0x00055ea5) list_form_graphic_pane_cp

0xa7c3,	// (0x0005caf4) slider_form_pane_g1

0xa7cc,	// (0x0005cafd) slider_form_pane_g2

0x0006,

0xf96f,	// (0x00061ca0) slider_form_pane_g

0x3b74,	// (0x00055ea5) list_form_graphic_pane_ParamLimits

0x3b74,	// (0x00055ea5) list_form_graphic_pane

0x3b86,	// (0x00055eb7) list_form_graphic_pane_g1

0x3b8e,	// (0x00055ebf) list_form_graphic_pane_t1_ParamLimits

0x3b8e,	// (0x00055ebf) list_form_graphic_pane_t1

0xedab,	// (0x000610dc) list_highlight_pane_cp5_ParamLimits

0xedab,	// (0x000610dc) list_highlight_pane_cp5

0x5c23,	// (0x00057f54) find_pane_g1

0x32a3,	// (0x000555d4) input_find_pane

0x5c2c,	// (0x00057f5d) input_find_pane_g1_ParamLimits

0x5c2c,	// (0x00057f5d) input_find_pane_g1

0x5c38,	// (0x00057f69) input_find_pane_t1_ParamLimits

0x5c38,	// (0x00057f69) input_find_pane_t1

0x5c4d,	// (0x00057f7e) input_find_pane_t2_ParamLimits

0x5c4d,	// (0x00057f7e) input_find_pane_t2

0x0001,

0xf681,	// (0x000619b2) input_find_pane_t_ParamLimits

0xf681,	// (0x000619b2) input_find_pane_t

0x32ac,	// (0x000555dd) input_focus_pane_cp5_ParamLimits

0x32ac,	// (0x000555dd) input_focus_pane_cp5

0x32bf,	// (0x000555f0) bg_popup_window_pane_cp2_ParamLimits

0x32bf,	// (0x000555f0) bg_popup_window_pane_cp2

0x32cc,	// (0x000555fd) listscroll_menu_pane_ParamLimits

0x32cc,	// (0x000555fd) listscroll_menu_pane

0x5c6e,	// (0x00057f9f) popup_submenu_window_ParamLimits

0x5c6e,	// (0x00057f9f) popup_submenu_window

0x32d8,	// (0x00055609) find_popup_pane_g1

0x32e0,	// (0x00055611) input_popup_find_pane_cp

0x32ea,	// (0x0005561b) input_focus_pane_cp4_ParamLimits

0x32ea,	// (0x0005561b) input_focus_pane_cp4

0x32f8,	// (0x00055629) input_popup_find_pane_t1_ParamLimits

0x32f8,	// (0x00055629) input_popup_find_pane_t1

0xed5d,	// (0x0006108e) bg_popup_sub_pane_cp

0x3326,	// (0x00055657) listscroll_popup_sub_pane

0x332e,	// (0x0005565f) list_submenu_pane_ParamLimits

0x332e,	// (0x0005565f) list_submenu_pane

0x333f,	// (0x00055670) scroll_pane_cp4

0x3347,	// (0x00055678) list_single_popup_submenu_pane_ParamLimits

0x3347,	// (0x00055678) list_single_popup_submenu_pane

0x335c,	// (0x0005568d) list_single_popup_submenu_pane_g1

0x3364,	// (0x00055695) list_single_popup_submenu_pane_t1_ParamLimits

0x3364,	// (0x00055695) list_single_popup_submenu_pane_t1

0xedab,	// (0x000610dc) bg_active_tab_pane_cp1_ParamLimits

0xedab,	// (0x000610dc) bg_active_tab_pane_cp1

0x5cac,	// (0x00057fdd) tabs_2_active_pane_g1

0x5cb4,	// (0x00057fe5) tabs_2_active_pane_t1

0xedab,	// (0x000610dc) bg_passive_tab_pane_cp1_ParamLimits

0xedab,	// (0x000610dc) bg_passive_tab_pane_cp1

0x5cac,	// (0x00057fdd) tabs_2_passive_pane_g1

0x5cb4,	// (0x00057fe5) tabs_2_passive_pane_t1

0x5cc6,	// (0x00057ff7) bg_active_tab_pane_cp4

0x5cd4,	// (0x00058005) tabs_2_long_active_pane_t1

0x5ce7,	// (0x00058018) bg_passive_tab_pane_cp4

0x6b0f,	// (0x00058e40) list_single_midp_graphic_pane_g4_ParamLimits

0x5cc6,	// (0x00057ff7) bg_active_tab_pane_cp5

0x5cf3,	// (0x00058024) tabs_3_long_active_pane_t1

0x5ce7,	// (0x00058018) bg_passive_tab_pane_cp5

0x6b0f,	// (0x00058e40) list_single_midp_graphic_pane_g4

0xedab,	// (0x000610dc) bg_popup_window_pane_cp13_ParamLimits

0xedab,	// (0x000610dc) bg_popup_window_pane_cp13

0x3382,	// (0x000556b3) listscroll_popup_fast_pane_ParamLimits

0x3382,	// (0x000556b3) listscroll_popup_fast_pane

0x3391,	// (0x000556c2) grid_popup_fast_pane_ParamLimits

0x3391,	// (0x000556c2) grid_popup_fast_pane

0x33a3,	// (0x000556d4) scroll_pane_cp9_ParamLimits

0x33a3,	// (0x000556d4) scroll_pane_cp9

0xc0fc,	// (0x0005e42d) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc0fc,	// (0x0005e42d) list_single_graphic_hl_pane_t1_cp2

0x33c7,	// (0x000556f8) input_focus_pane_cp20_ParamLimits

0x33c7,	// (0x000556f8) input_focus_pane_cp20

0x33d5,	// (0x00055706) query_popup_data_pane_t1_ParamLimits

0x33d5,	// (0x00055706) query_popup_data_pane_t1

0x33e8,	// (0x00055719) query_popup_data_pane_t2_ParamLimits

0x33e8,	// (0x00055719) query_popup_data_pane_t2

0x342e,	// (0x0005575f) query_popup_data_pane_t3_ParamLimits

0x342e,	// (0x0005575f) query_popup_data_pane_t3

0x346f,	// (0x000557a0) query_popup_data_pane_t4_ParamLimits

0x346f,	// (0x000557a0) query_popup_data_pane_t4

0x34ab,	// (0x000557dc) query_popup_data_pane_t5_ParamLimits

0x34ab,	// (0x000557dc) query_popup_data_pane_t5

0x0004,

0xf686,	// (0x000619b7) query_popup_data_pane_t_ParamLimits

0xf686,	// (0x000619b7) query_popup_data_pane_t

0xf4e1,	// (0x00061812) bg_set_opt_pane_g1

0xf4e9,	// (0x0006181a) bg_set_opt_pane_g2

0xf4f1,	// (0x00061822) bg_set_opt_pane_g3

0xf4f9,	// (0x0006182a) bg_set_opt_pane_g4

0xf501,	// (0x00061832) bg_set_opt_pane_g5

0xf509,	// (0x0006183a) bg_set_opt_pane_g6

0xf511,	// (0x00061842) bg_set_opt_pane_g7

0xf519,	// (0x0006184a) bg_set_opt_pane_g8

0xf521,	// (0x00061852) bg_set_opt_pane_g9

0x0008,

0xf691,	// (0x000619c2) bg_set_opt_pane_g

0x6109,	// (0x0005843a) control_top_pane_stacon_ParamLimits

0x6109,	// (0x0005843a) control_top_pane_stacon

0x615c,	// (0x0005848d) signal_pane_stacon_ParamLimits

0x615c,	// (0x0005848d) signal_pane_stacon

0x84cd,	// (0x0005a7fe) stacon_top_pane_g1_ParamLimits

0x84cd,	// (0x0005a7fe) stacon_top_pane_g1

0x6181,	// (0x000584b2) title_pane_stacon_ParamLimits

0x6181,	// (0x000584b2) title_pane_stacon

0x61ab,	// (0x000584dc) uni_indicator_pane_stacon_ParamLimits

0x61ab,	// (0x000584dc) uni_indicator_pane_stacon

0x61c0,	// (0x000584f1) battery_pane_stacon_ParamLimits

0x61c0,	// (0x000584f1) battery_pane_stacon

0x6204,	// (0x00058535) control_bottom_pane_stacon_ParamLimits

0x6204,	// (0x00058535) control_bottom_pane_stacon

0x6227,	// (0x00058558) navi_pane_stacon_ParamLimits

0x6227,	// (0x00058558) navi_pane_stacon

0x84ef,	// (0x0005a820) stacon_bottom_pane_g1_ParamLimits

0x84ef,	// (0x0005a820) stacon_bottom_pane_g1

0x5d05,	// (0x00058036) aid_levels_signal_lsc_ParamLimits

0x5d05,	// (0x00058036) aid_levels_signal_lsc

0x5d1c,	// (0x0005804d) signal_pane_stacon_g1_ParamLimits

0x5d1c,	// (0x0005804d) signal_pane_stacon_g1

0x5d30,	// (0x00058061) signal_pane_stacon_g2_ParamLimits

0x5d30,	// (0x00058061) signal_pane_stacon_g2

0x0001,

0xf6a4,	// (0x000619d5) signal_pane_stacon_g_ParamLimits

0xf6a4,	// (0x000619d5) signal_pane_stacon_g

0x5d65,	// (0x00058096) title_pane_stacon_t1_ParamLimits

0x5d65,	// (0x00058096) title_pane_stacon_t1

0x3503,	// (0x00055834) uni_indicator_pane_stacon_g1

0x350d,	// (0x0005583e) uni_indicator_pane_stacon_g2

0x34ef,	// (0x00055820) uni_indicator_pane_stacon_g3

0x34f9,	// (0x0005582a) uni_indicator_pane_stacon_g4

0x0003,

0xf6b0,	// (0x000619e1) uni_indicator_pane_stacon_g

0x5d8a,	// (0x000580bb) control_top_pane_stacon_g1

0x5d92,	// (0x000580c3) control_top_pane_stacon_t1_ParamLimits

0x5d92,	// (0x000580c3) control_top_pane_stacon_t1

0x5dc9,	// (0x000580fa) aid_levels_battery_lsc_ParamLimits

0x5dc9,	// (0x000580fa) aid_levels_battery_lsc

0x5de1,	// (0x00058112) battery_pane_stacon_g1_ParamLimits

0x5de1,	// (0x00058112) battery_pane_stacon_g1

0x5df4,	// (0x00058125) battery_pane_stacon_g2_ParamLimits

0x5df4,	// (0x00058125) battery_pane_stacon_g2

0x0001,

0xf6b9,	// (0x000619ea) battery_pane_stacon_g_ParamLimits

0xf6b9,	// (0x000619ea) battery_pane_stacon_g

0x5e32,	// (0x00058163) navi_icon_pane_stacon

0x5e46,	// (0x00058177) navi_navi_pane_stacon

0x5e32,	// (0x00058163) navi_text_pane_stacon

0x5d8a,	// (0x000580bb) control_bottom_pane_stacon_g1

0x5e5c,	// (0x0005818d) control_bottom_pane_stacon_t1_ParamLimits

0x5e5c,	// (0x0005818d) control_bottom_pane_stacon_t1

0x5e93,	// (0x000581c4) grid_app_pane_ParamLimits

0x5e93,	// (0x000581c4) grid_app_pane

0x5eb5,	// (0x000581e6) scroll_pane_cp15_ParamLimits

0x5eb5,	// (0x000581e6) scroll_pane_cp15

0x5ec8,	// (0x000581f9) cell_app_pane_ParamLimits

0x5ec8,	// (0x000581f9) cell_app_pane

0x5ef4,	// (0x00058225) cell_app_pane_g1_ParamLimits

0x5ef4,	// (0x00058225) cell_app_pane_g1

0x3531,	// (0x00055862) cell_app_pane_g2_ParamLimits

0x3531,	// (0x00055862) cell_app_pane_g2

0x0001,

0xf6be,	// (0x000619ef) cell_app_pane_g_ParamLimits

0xf6be,	// (0x000619ef) cell_app_pane_g

0x5f18,	// (0x00058249) cell_app_pane_t1_ParamLimits

0x5f18,	// (0x00058249) cell_app_pane_t1

0x353d,	// (0x0005586e) grid_highlight_pane_ParamLimits

0x353d,	// (0x0005586e) grid_highlight_pane

0xf4e1,	// (0x00061812) cell_highlight_pane_g1

0xf4e9,	// (0x0006181a) cell_highlight_pane_g2

0xf4f1,	// (0x00061822) cell_highlight_pane_g3

0xf4f9,	// (0x0006182a) cell_highlight_pane_g4

0xf501,	// (0x00061832) cell_highlight_pane_g5

0xf509,	// (0x0006183a) cell_highlight_pane_g6

0xf511,	// (0x00061842) cell_highlight_pane_g7

0xf519,	// (0x0006184a) cell_highlight_pane_g8

0xf521,	// (0x00061852) cell_highlight_pane_g9

0xed53,	// (0x00061084) cell_highlight_pane_g10

0x0009,

0xf66c,	// (0x0006199d) cell_highlight_pane_g

0x354e,	// (0x0005587f) bg_scroll_pane

0x5f42,	// (0x00058273) scroll_handle_pane

0x3595,	// (0x000558c6) scroll_bg_pane_g1

0x35aa,	// (0x000558db) scroll_bg_pane_g2

0x35c2,	// (0x000558f3) scroll_bg_pane_g3

0x0002,

0xf6c3,	// (0x000619f4) scroll_bg_pane_g

0x35d7,	// (0x00055908) scroll_handle_focus_pane_ParamLimits

0x35d7,	// (0x00055908) scroll_handle_focus_pane

0x3595,	// (0x000558c6) scroll_handle_pane_g1

0x35e4,	// (0x00055915) scroll_handle_pane_g2

0x35c2,	// (0x000558f3) scroll_handle_pane_g3

0x0002,

0xf6ca,	// (0x000619fb) scroll_handle_pane_g

0x32ea,	// (0x0005561b) bg_popup_sub_pane_cp21_ParamLimits

0x32ea,	// (0x0005561b) bg_popup_sub_pane_cp21

0x35f8,	// (0x00055929) popup_fep_japan_predictive_window_t1_ParamLimits

0x35f8,	// (0x00055929) popup_fep_japan_predictive_window_t1

0x360f,	// (0x00055940) popup_fep_japan_predictive_window_t2_ParamLimits

0x360f,	// (0x00055940) popup_fep_japan_predictive_window_t2

0x3642,	// (0x00055973) popup_fep_japan_predictive_window_t3_ParamLimits

0x3642,	// (0x00055973) popup_fep_japan_predictive_window_t3

0x0002,

0xf6d1,	// (0x00061a02) popup_fep_japan_predictive_window_t_ParamLimits

0xf6d1,	// (0x00061a02) popup_fep_japan_predictive_window_t

0xed5d,	// (0x0006108e) bg_popup_sub_pane_cp23

0x3679,	// (0x000559aa) listscroll_japin_cand_pane

0x3681,	// (0x000559b2) popup_fep_japan_candidate_window_t1

0x368f,	// (0x000559c0) candidate_pane_ParamLimits

0x368f,	// (0x000559c0) candidate_pane

0x36a1,	// (0x000559d2) scroll_pane_cp30

0x36ab,	// (0x000559dc) list_single_popup_jap_candidate_pane_ParamLimits

0x36ab,	// (0x000559dc) list_single_popup_jap_candidate_pane

0xed5d,	// (0x0006108e) list_highlight_pane_cp30

0x36bf,	// (0x000559f0) list_single_popup_jap_candidate_pane_t1

0x5f6b,	// (0x0005829c) level_1_signal

0x5f78,	// (0x000582a9) level_2_signal

0x5f85,	// (0x000582b6) level_3_signal

0x5f92,	// (0x000582c3) level_4_signal

0x81f5,	// (0x0005a526) level_5_signal

0x8202,	// (0x0005a533) level_6_signal

0x820f,	// (0x0005a540) level_7_signal

0x5f6b,	// (0x0005829c) level_1_battery

0x5f78,	// (0x000582a9) level_2_battery

0x5f85,	// (0x000582b6) level_3_battery

0x5f92,	// (0x000582c3) level_4_battery

0x81f5,	// (0x0005a526) level_5_battery

0x8202,	// (0x0005a533) level_6_battery

0x820f,	// (0x0005a540) level_7_battery

0x8234,	// (0x0005a565) list_menu_pane_ParamLimits

0x8234,	// (0x0005a565) list_menu_pane

0x824a,	// (0x0005a57b) scroll_pane_cp25_ParamLimits

0x824a,	// (0x0005a57b) scroll_pane_cp25

0x8263,	// (0x0005a594) list_double2_graphic_pane_cp2_ParamLimits

0x8263,	// (0x0005a594) list_double2_graphic_pane_cp2

0x8263,	// (0x0005a594) list_double2_large_graphic_pane_cp2_ParamLimits

0x8263,	// (0x0005a594) list_double2_large_graphic_pane_cp2

0x8263,	// (0x0005a594) list_double2_pane_cp2_ParamLimits

0x8263,	// (0x0005a594) list_double2_pane_cp2

0x8263,	// (0x0005a594) list_double_graphic_pane_cp2_ParamLimits

0x8263,	// (0x0005a594) list_double_graphic_pane_cp2

0x8263,	// (0x0005a594) list_double_large_graphic_pane_cp2_ParamLimits

0x8263,	// (0x0005a594) list_double_large_graphic_pane_cp2

0x8263,	// (0x0005a594) list_double_number_pane_cp2_ParamLimits

0x8263,	// (0x0005a594) list_double_number_pane_cp2

0x8263,	// (0x0005a594) list_double_pane_cp2_ParamLimits

0x8263,	// (0x0005a594) list_double_pane_cp2

0x8289,	// (0x0005a5ba) list_single_2graphic_pane_cp2_ParamLimits

0x8289,	// (0x0005a5ba) list_single_2graphic_pane_cp2

0x8289,	// (0x0005a5ba) list_single_graphic_heading_pane_cp2_ParamLimits

0x8289,	// (0x0005a5ba) list_single_graphic_heading_pane_cp2

0x8289,	// (0x0005a5ba) list_single_graphic_pane_cp2_ParamLimits

0x8289,	// (0x0005a5ba) list_single_graphic_pane_cp2

0x8289,	// (0x0005a5ba) list_single_heading_pane_cp2_ParamLimits

0x8289,	// (0x0005a5ba) list_single_heading_pane_cp2

0x82a6,	// (0x0005a5d7) list_single_large_graphic_pane_cp2_ParamLimits

0x82a6,	// (0x0005a5d7) list_single_large_graphic_pane_cp2

0x8289,	// (0x0005a5ba) list_single_number_heading_pane_cp2_ParamLimits

0x8289,	// (0x0005a5ba) list_single_number_heading_pane_cp2

0x8289,	// (0x0005a5ba) list_single_number_pane_cp2_ParamLimits

0x8289,	// (0x0005a5ba) list_single_number_pane_cp2

0x8289,	// (0x0005a5ba) list_single_pane_cp2_ParamLimits

0x8289,	// (0x0005a5ba) list_single_pane_cp2

0x8314,	// (0x0005a645) bg_popup_sub_pane_cp22

0x6028,	// (0x00058359) popup_side_volume_key_window_g1

0x6052,	// (0x00058383) popup_side_volume_key_window_t1

0x6070,	// (0x000583a1) volume_small_pane_cp1

0xeede,	// (0x0006120f) bg_popup_sub_pane_cp24_ParamLimits

0xeede,	// (0x0006120f) bg_popup_sub_pane_cp24

0x832a,	// (0x0005a65b) fep_china_uni_candidate_pane_ParamLimits

0x832a,	// (0x0005a65b) fep_china_uni_candidate_pane

0x833e,	// (0x0005a66f) fep_china_uni_entry_pane

0x834e,	// (0x0005a67f) popup_fep_china_uni_window_g1

0x836a,	// (0x0005a69b) fep_china_uni_entry_pane_g1

0x8374,	// (0x0005a6a5) fep_china_uni_entry_pane_g2

0x0001,

0xf702,	// (0x00061a33) fep_china_uni_entry_pane_g

0x837e,	// (0x0005a6af) fep_entry_item_pane

0x8388,	// (0x0005a6b9) fep_candidate_item_pane

0x8390,	// (0x0005a6c1) fep_china_uni_candidate_pane_g1

0x839a,	// (0x0005a6cb) fep_china_uni_candidate_pane_g2

0x83a2,	// (0x0005a6d3) fep_china_uni_candidate_pane_g3

0x83aa,	// (0x0005a6db) fep_china_uni_candidate_pane_g4

0x0003,

0xf707,	// (0x00061a38) fep_china_uni_candidate_pane_g

0xed53,	// (0x00061084) fep_entry_item_pane_g1

0x83b4,	// (0x0005a6e5) fep_entry_item_pane_t1_ParamLimits

0x83b4,	// (0x0005a6e5) fep_entry_item_pane_t1

0x83ca,	// (0x0005a6fb) fep_candidate_item_pane_t1_ParamLimits

0x83ca,	// (0x0005a6fb) fep_candidate_item_pane_t1

0x83df,	// (0x0005a710) fep_candidate_item_pane_t2_ParamLimits

0x83df,	// (0x0005a710) fep_candidate_item_pane_t2

0x0001,

0xf710,	// (0x00061a41) fep_candidate_item_pane_t_ParamLimits

0xf710,	// (0x00061a41) fep_candidate_item_pane_t

0xedab,	// (0x000610dc) list_highlight_pane_cp31_ParamLimits

0xedab,	// (0x000610dc) list_highlight_pane_cp31

0x83f1,	// (0x0005a722) level_1_signal_lsc

0x83fa,	// (0x0005a72b) level_2_signal_lsc

0x8403,	// (0x0005a734) level_3_signal_lsc

0x840c,	// (0x0005a73d) level_4_signal_lsc

0x8415,	// (0x0005a746) level_5_signal_lsc

0x841e,	// (0x0005a74f) level_6_signal_lsc

0x8427,	// (0x0005a758) level_7_signal_lsc

0x8427,	// (0x0005a758) level_1_battery_lsc

0x8430,	// (0x0005a761) level_2_battery_lsc

0x8439,	// (0x0005a76a) level_3_battery_lsc

0x8442,	// (0x0005a773) level_4_battery_lsc

0x844b,	// (0x0005a77c) level_5_battery_lsc

0x8454,	// (0x0005a785) level_6_battery_lsc

0x83f1,	// (0x0005a722) level_7_battery_lsc

0x845d,	// (0x0005a78e) scroll_handle_focus_pane_g1

0x8466,	// (0x0005a797) scroll_handle_focus_pane_g2

0x846f,	// (0x0005a7a0) scroll_handle_focus_pane_g3

0x0002,

0xf715,	// (0x00061a46) scroll_handle_focus_pane_g

0x6078,	// (0x000583a9) list_single_2graphic_pane_g1_ParamLimits

0x6078,	// (0x000583a9) list_single_2graphic_pane_g1

0x569b,	// (0x000579cc) list_single_2graphic_pane_g2_ParamLimits

0x569b,	// (0x000579cc) list_single_2graphic_pane_g2

0x55ec,	// (0x0005791d) list_single_2graphic_pane_g3_ParamLimits

0x55ec,	// (0x0005791d) list_single_2graphic_pane_g3

0x6084,	// (0x000583b5) list_single_2graphic_pane_g4_ParamLimits

0x6084,	// (0x000583b5) list_single_2graphic_pane_g4

0x0003,

0xf71c,	// (0x00061a4d) list_single_2graphic_pane_g_ParamLimits

0xf71c,	// (0x00061a4d) list_single_2graphic_pane_g

0x6095,	// (0x000583c6) list_single_2graphic_pane_t1_ParamLimits

0x6095,	// (0x000583c6) list_single_2graphic_pane_t1

0x60c3,	// (0x000583f4) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x60c3,	// (0x000583f4) list_double2_graphic_large_graphic_pane_g1

0x58d0,	// (0x00057c01) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x58d0,	// (0x00057c01) list_double2_graphic_large_graphic_pane_g2

0x5808,	// (0x00057b39) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x5808,	// (0x00057b39) list_double2_graphic_large_graphic_pane_g3

0x60d5,	// (0x00058406) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x60d5,	// (0x00058406) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf725,	// (0x00061a56) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf725,	// (0x00061a56) list_double2_graphic_large_graphic_pane_g

0x60e1,	// (0x00058412) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x60e1,	// (0x00058412) list_double2_graphic_large_graphic_pane_t1

0x60f7,	// (0x00058428) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x60f7,	// (0x00058428) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf72e,	// (0x00061a5f) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf72e,	// (0x00061a5f) list_double2_graphic_large_graphic_pane_t

0x85b2,	// (0x0005a8e3) popup_fast_swap_window_ParamLimits

0x85b2,	// (0x0005a8e3) popup_fast_swap_window

0x85d0,	// (0x0005a901) popup_side_volume_key_window

0x85ee,	// (0x0005a91f) stacon_top_pane

0x85f8,	// (0x0005a929) status_pane_ParamLimits

0x85f8,	// (0x0005a929) status_pane

0x8606,	// (0x0005a937) status_small_pane

0xed5d,	// (0x0006108e) control_pane

0xed5d,	// (0x0006108e) stacon_bottom_pane

0xf46c,	// (0x0006179d) scroll_pane_cp121

0xf463,	// (0x00061794) set_content_pane

0x8478,	// (0x0005a7a9) bg_active_tab_pane_g1_cp1

0x8481,	// (0x0005a7b2) bg_active_tab_pane_g2_cp1

0x848a,	// (0x0005a7bb) bg_active_tab_pane_g3_cp1

0x8478,	// (0x0005a7a9) bg_passive_tab_pane_g1_cp1

0x8481,	// (0x0005a7b2) bg_passive_tab_pane_g2_cp1

0x848a,	// (0x0005a7bb) bg_passive_tab_pane_g3_cp1

0x8493,	// (0x0005a7c4) bg_active_tab_pane_g1_cp2

0x8481,	// (0x0005a7b2) bg_active_tab_pane_g2_cp2

0x849c,	// (0x0005a7cd) bg_active_tab_pane_g3_cp2

0x8493,	// (0x0005a7c4) bg_passive_tab_pane_g1_cp2

0x8481,	// (0x0005a7b2) bg_passive_tab_pane_g2_cp2

0x849c,	// (0x0005a7cd) bg_passive_tab_pane_g3_cp2

0x84a5,	// (0x0005a7d6) bg_active_tab_pane_g1_cp3

0x8481,	// (0x0005a7b2) bg_active_tab_pane_g2_cp3

0x84ae,	// (0x0005a7df) bg_active_tab_pane_g3_cp3

0x84a5,	// (0x0005a7d6) bg_passive_tab_pane_g1_cp3

0x8481,	// (0x0005a7b2) bg_passive_tab_pane_g2_cp3

0x84ae,	// (0x0005a7df) bg_passive_tab_pane_g3_cp3

0x84b7,	// (0x0005a7e8) bg_active_tab_pane_g1_cp4

0x8481,	// (0x0005a7b2) bg_active_tab_pane_g2_cp4

0x84c2,	// (0x0005a7f3) bg_active_tab_pane_g3_cp4

0x84b7,	// (0x0005a7e8) bg_passive_tab_pane_g1_cp4

0x8481,	// (0x0005a7b2) bg_passive_tab_pane_g2_cp4

0x84c2,	// (0x0005a7f3) bg_passive_tab_pane_g3_cp4

0x850b,	// (0x0005a83c) bg_active_tab_pane_g1_cp5

0x8481,	// (0x0005a7b2) bg_active_tab_pane_g2_cp5

0x8514,	// (0x0005a845) bg_active_tab_pane_g3_cp5

0x850b,	// (0x0005a83c) bg_passive_tab_pane_g1_cp5

0x8481,	// (0x0005a7b2) bg_passive_tab_pane_g2_cp5

0x8514,	// (0x0005a845) bg_passive_tab_pane_g3_cp5

0x851d,	// (0x0005a84e) list_set_graphic_pane_ParamLimits

0x851d,	// (0x0005a84e) list_set_graphic_pane

0xed5d,	// (0x0006108e) bg_set_opt_pane_cp4

0x8533,	// (0x0005a864) list_set_graphic_pane_g1_ParamLimits

0x8533,	// (0x0005a864) list_set_graphic_pane_g1

0x853f,	// (0x0005a870) list_set_graphic_pane_g2_ParamLimits

0x853f,	// (0x0005a870) list_set_graphic_pane_g2

0x0001,

0xf733,	// (0x00061a64) list_set_graphic_pane_g_ParamLimits

0xf733,	// (0x00061a64) list_set_graphic_pane_g

0x0009,

0xfaaf,	// (0x00061de0) volume_small_pane_cp_g

0x8563,	// (0x0005a894) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x8563,	// (0x0005a894) list_double2_large_graphic_pane_g1_cp2

0x8571,	// (0x0005a8a2) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x8571,	// (0x0005a8a2) list_double2_large_graphic_pane_g2_cp2

0x8582,	// (0x0005a8b3) list_double2_large_graphic_pane_g3_cp2

0x858a,	// (0x0005a8bb) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x858a,	// (0x0005a8bb) list_double2_large_graphic_pane_t1_cp2

0x85a0,	// (0x0005a8d1) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x85a0,	// (0x0005a8d1) list_double2_large_graphic_pane_t2_cp2

0xa350,	// (0x0005c681) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xa350,	// (0x0005c681) list_double_large_graphic_pane_g1_cp2

0xa363,	// (0x0005c694) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xa363,	// (0x0005c694) list_double_large_graphic_pane_g2_cp2

0x8715,	// (0x0005aa46) list_double_large_graphic_pane_g3_cp2

0xa374,	// (0x0005c6a5) list_double_large_graphic_pane_g4_cp

0xa37c,	// (0x0005c6ad) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xa37c,	// (0x0005c6ad) list_double_large_graphic_pane_t1_cp2

0xa393,	// (0x0005c6c4) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xa393,	// (0x0005c6c4) list_double_large_graphic_pane_t2_cp2

0x8611,	// (0x0005a942) list_double2_graphic_pane_g1_cp2_ParamLimits

0x8611,	// (0x0005a942) list_double2_graphic_pane_g1_cp2

0x861f,	// (0x0005a950) list_double2_graphic_pane_g2_cp2_ParamLimits

0x861f,	// (0x0005a950) list_double2_graphic_pane_g2_cp2

0x8630,	// (0x0005a961) list_double2_graphic_pane_g3_cp2

0x863a,	// (0x0005a96b) list_double2_graphic_pane_t1_cp2_ParamLimits

0x863a,	// (0x0005a96b) list_double2_graphic_pane_t1_cp2

0x8650,	// (0x0005a981) list_double2_graphic_pane_t2_cp2_ParamLimits

0x8650,	// (0x0005a981) list_double2_graphic_pane_t2_cp2

0x81e9,	// (0x0005a51a) list_single_number_heading_pane_g1_cp2_ParamLimits

0x81e9,	// (0x0005a51a) list_single_number_heading_pane_g1_cp2

0x8662,	// (0x0005a993) list_single_number_heading_pane_g2_cp2

0x866a,	// (0x0005a99b) list_single_number_heading_pane_t1_cp2_ParamLimits

0x866a,	// (0x0005a99b) list_single_number_heading_pane_t1_cp2

0x8680,	// (0x0005a9b1) list_single_number_heading_pane_t2_cp2_ParamLimits

0x8680,	// (0x0005a9b1) list_single_number_heading_pane_t2_cp2

0x8694,	// (0x0005a9c5) list_single_number_heading_pane_t3_cp2_ParamLimits

0x8694,	// (0x0005a9c5) list_single_number_heading_pane_t3_cp2

0x81e9,	// (0x0005a51a) list_single_heading_pane_g1_cp2_ParamLimits

0x81e9,	// (0x0005a51a) list_single_heading_pane_g1_cp2

0x8662,	// (0x0005a993) list_single_heading_pane_g2_cp2

0x866a,	// (0x0005a99b) list_single_heading_pane_t1_cp2_ParamLimits

0x866a,	// (0x0005a99b) list_single_heading_pane_t1_cp2

0xa14a,	// (0x0005c47b) list_single_heading_pane_t2_cp2_ParamLimits

0xa14a,	// (0x0005c47b) list_single_heading_pane_t2_cp2

0xa092,	// (0x0005c3c3) list_double_graphic_pane_g1_cp2_ParamLimits

0xa092,	// (0x0005c3c3) list_double_graphic_pane_g1_cp2

0xa09e,	// (0x0005c3cf) list_double_graphic_pane_g2_cp2_ParamLimits

0xa09e,	// (0x0005c3cf) list_double_graphic_pane_g2_cp2

0xa0ad,	// (0x0005c3de) list_double_graphic_pane_g3_cp2

0xa0b5,	// (0x0005c3e6) list_double_graphic_pane_t1_cp2_ParamLimits

0xa0b5,	// (0x0005c3e6) list_double_graphic_pane_t1_cp2

0xa0cb,	// (0x0005c3fc) list_double_graphic_pane_t2_cp2_ParamLimits

0xa0cb,	// (0x0005c3fc) list_double_graphic_pane_t2_cp2

0x8709,	// (0x0005aa3a) list_double_number_pane_g1_cp2_ParamLimits

0x8709,	// (0x0005aa3a) list_double_number_pane_g1_cp2

0x8715,	// (0x0005aa46) list_double_number_pane_g2_cp2

0xa056,	// (0x0005c387) list_double_number_pane_t1_cp2_ParamLimits

0xa056,	// (0x0005c387) list_double_number_pane_t1_cp2

0xa06a,	// (0x0005c39b) list_double_number_pane_t2_cp2_ParamLimits

0xa06a,	// (0x0005c39b) list_double_number_pane_t2_cp2

0xa080,	// (0x0005c3b1) list_double_number_pane_t3_cp2_ParamLimits

0xa080,	// (0x0005c3b1) list_double_number_pane_t3_cp2

0x9f3f,	// (0x0005c270) list_single_graphic_pane_g1_cp2_ParamLimits

0x9f3f,	// (0x0005c270) list_single_graphic_pane_g1_cp2

0x876f,	// (0x0005aaa0) list_single_graphic_pane_g2_cp2_ParamLimits

0x876f,	// (0x0005aaa0) list_single_graphic_pane_g2_cp2

0x877b,	// (0x0005aaac) list_single_graphic_pane_g3_cp2

0x9f15,	// (0x0005c246) list_single_graphic_pane_t1_cp2_ParamLimits

0x9f15,	// (0x0005c246) list_single_graphic_pane_t1_cp2

0x876f,	// (0x0005aaa0) list_single_number_pane_g1_cp2_ParamLimits

0x876f,	// (0x0005aaa0) list_single_number_pane_g1_cp2

0x877b,	// (0x0005aaac) list_single_number_pane_g2_cp2

0x9f15,	// (0x0005c246) list_single_number_pane_t1_cp2_ParamLimits

0x9f15,	// (0x0005c246) list_single_number_pane_t1_cp2

0x9f2b,	// (0x0005c25c) list_single_number_pane_t2_cp2_ParamLimits

0x9f2b,	// (0x0005c25c) list_single_number_pane_t2_cp2

0x8571,	// (0x0005a8a2) list_double2_pane_g1_cp2_ParamLimits

0x8571,	// (0x0005a8a2) list_double2_pane_g1_cp2

0x8582,	// (0x0005a8b3) list_double2_pane_g2_cp2

0x86e1,	// (0x0005aa12) list_double2_pane_t1_cp2_ParamLimits

0x86e1,	// (0x0005aa12) list_double2_pane_t1_cp2

0x86f7,	// (0x0005aa28) list_double2_pane_t2_cp2_ParamLimits

0x86f7,	// (0x0005aa28) list_double2_pane_t2_cp2

0x8709,	// (0x0005aa3a) list_double_pane_g1_cp2_ParamLimits

0x8709,	// (0x0005aa3a) list_double_pane_g1_cp2

0x8715,	// (0x0005aa46) list_double_pane_g2_cp2

0x871d,	// (0x0005aa4e) list_double_pane_t1_cp2_ParamLimits

0x871d,	// (0x0005aa4e) list_double_pane_t1_cp2

0x8733,	// (0x0005aa64) list_double_pane_t2_cp2_ParamLimits

0x8733,	// (0x0005aa64) list_double_pane_t2_cp2

0x875f,	// (0x0005aa90) list_single_pane_cp2_g3

0x876f,	// (0x0005aaa0) list_single_pane_g1_cp2_ParamLimits

0x876f,	// (0x0005aaa0) list_single_pane_g1_cp2

0x877b,	// (0x0005aaac) list_single_pane_g2_cp2

0x8783,	// (0x0005aab4) list_single_pane_t1_cp2_ParamLimits

0x8783,	// (0x0005aab4) list_single_pane_t1_cp2

0x879b,	// (0x0005aacc) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x879b,	// (0x0005aacc) list_single_large_graphic_pane_g1_cp2

0x87a9,	// (0x0005aada) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x87a9,	// (0x0005aada) list_single_large_graphic_pane_g2_cp2

0x87b5,	// (0x0005aae6) list_single_large_graphic_pane_g3_cp2

0x87bd,	// (0x0005aaee) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x87bd,	// (0x0005aaee) list_single_large_graphic_pane_g4_cp1

0x87d7,	// (0x0005ab08) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x87d7,	// (0x0005ab08) list_single_large_graphic_pane_t1_cp2

0x9edf,	// (0x0005c210) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x9edf,	// (0x0005c210) list_single_graphic_heading_pane_g1_cp2

0x9eac,	// (0x0005c1dd) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x9eac,	// (0x0005c1dd) list_single_graphic_heading_pane_g4_cp2

0x877b,	// (0x0005aaac) list_single_graphic_heading_pane_g5_cp2

0x9eeb,	// (0x0005c21c) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x9eeb,	// (0x0005c21c) list_single_graphic_heading_pane_t1_cp2

0x9f01,	// (0x0005c232) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x9f01,	// (0x0005c232) list_single_graphic_heading_pane_t2_cp2

0x9ea0,	// (0x0005c1d1) list_single_2graphic_pane_g1_cp2_ParamLimits

0x9ea0,	// (0x0005c1d1) list_single_2graphic_pane_g1_cp2

0x9eac,	// (0x0005c1dd) list_single_2graphic_pane_g2_cp2_ParamLimits

0x9eac,	// (0x0005c1dd) list_single_2graphic_pane_g2_cp2

0x877b,	// (0x0005aaac) list_single_2graphic_pane_g3_cp2

0x9ebd,	// (0x0005c1ee) list_single_2graphic_pane_g4_cp2_ParamLimits

0x9ebd,	// (0x0005c1ee) list_single_2graphic_pane_g4_cp2

0x9ec9,	// (0x0005c1fa) list_single_2graphic_pane_t1_cp2_ParamLimits

0x9ec9,	// (0x0005c1fa) list_single_2graphic_pane_t1_cp2

0xed53,	// (0x00061084) list_highlight_pane_g10_cp1

0x98b5,	// (0x0005bbe6) list_highlight_pane_g1_cp1

0x98bd,	// (0x0005bbee) list_highlight_pane_g2_cp1

0x98c5,	// (0x0005bbf6) list_highlight_pane_g3_cp1

0x98cd,	// (0x0005bbfe) list_highlight_pane_g4_cp1

0x98d5,	// (0x0005bc06) list_highlight_pane_g5_cp1

0x98dd,	// (0x0005bc0e) list_highlight_pane_g6_cp1

0x98e5,	// (0x0005bc16) list_highlight_pane_g7_cp1

0x98ed,	// (0x0005bc1e) list_highlight_pane_g8_cp1

0x98f5,	// (0x0005bc26) list_highlight_pane_g9_cp1

0x97d5,	// (0x0005bb06) form_field_slider_pane_t3

0x97e3,	// (0x0005bb14) form_field_slider_pane_t4

0x97f1,	// (0x0005bb22) slider_form_pane_ParamLimits

0x97f1,	// (0x0005bb22) slider_form_pane

0xed5d,	// (0x0006108e) control_abbreviations

0xed5d,	// (0x0006108e) control_conventions

0xed5d,	// (0x0006108e) control_definitions

0xed5d,	// (0x0006108e) format_table_attribute

0xa1a0,	// (0x0005c4d1) bg_popup_preview_window_pane_g9

0xed5d,	// (0x0006108e) format_table_data2

0xed5d,	// (0x0006108e) format_table_data3

0xed5d,	// (0x0006108e) format_table_data_example

0x0008,

0xed5d,	// (0x0006108e) intro_purpose

0xf8cf,	// (0x00061c00) bg_popup_preview_window_pane_g

0xed5d,	// (0x0006108e) texts_category

0xed5d,	// (0x0006108e) texts_graphics

0x87ed,	// (0x0005ab1e) text_digital

0x87fc,	// (0x0005ab2d) text_primary

0x880b,	// (0x0005ab3c) text_primary_small

0x881a,	// (0x0005ab4b) text_secondary

0x8829,	// (0x0005ab5a) text_title

0xa8cd,	// (0x0005cbfe) bg_passive_tab_pane_g1_cp3_srt

0x8481,	// (0x0005a7b2) bg_passive_tab_pane_g2_cp3_srt

0xa8d6,	// (0x0005cc07) bg_passive_tab_pane_g3_cp3_srt

0xedab,	// (0x000610dc) bg_active_tab_pane_cp3_srt_ParamLimits

0xedab,	// (0x000610dc) bg_active_tab_pane_cp3_srt

0xa8df,	// (0x0005cc10) tabs_4_active_pane_srt_g1

0xa8e7,	// (0x0005cc18) tabs_4_active_pane_srt_t1_ParamLimits

0xa8e7,	// (0x0005cc18) tabs_4_active_pane_srt_t1

0xa8cd,	// (0x0005cbfe) bg_active_tab_pane_g1_cp3_copy1

0x8481,	// (0x0005a7b2) bg_active_tab_pane_g2_cp3_copy1

0xa8d6,	// (0x0005cc07) bg_active_tab_pane_g3_cp3_copy1

0xedab,	// (0x000610dc) tabs_2_long_active_pane_srt_ParamLimits

0xedab,	// (0x000610dc) tabs_2_long_active_pane_srt

0xedab,	// (0x000610dc) tabs_2_long_passive_pane_srt_ParamLimits

0xedab,	// (0x000610dc) tabs_2_long_passive_pane_srt

0x5ce7,	// (0x00058018) bg_passive_tab_pane_cp4_srt_ParamLimits

0x5ce7,	// (0x00058018) bg_passive_tab_pane_cp4_srt

0xa5da,	// (0x0005c90b) bg_passive_tab_pane_g1_cp4_srt

0x8481,	// (0x0005a7b2) bg_passive_tab_pane_g2_cp4_srt

0xa5e3,	// (0x0005c914) bg_passive_tab_pane_g3_cp4_srt

0x5cc6,	// (0x00057ff7) bg_active_tab_pane_cp4_srt_ParamLimits

0x5cc6,	// (0x00057ff7) bg_active_tab_pane_cp4_srt

0xa5ec,	// (0x0005c91d) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa5ec,	// (0x0005c91d) tabs_2_long_active_pane_srt_t1

0xa5da,	// (0x0005c90b) bg_active_tab_pane_g1_cp4_srt

0x8481,	// (0x0005a7b2) bg_active_tab_pane_g2_cp4_srt

0xa5e3,	// (0x0005c914) bg_active_tab_pane_g3_cp4_srt

0xeede,	// (0x0006120f) tabs_3_long_active_pane_srt_ParamLimits

0xeede,	// (0x0006120f) tabs_3_long_active_pane_srt

0xeede,	// (0x0006120f) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xeede,	// (0x0006120f) tabs_3_long_passive_pane_cp_srt

0xeede,	// (0x0006120f) tabs_3_long_passive_pane_srt_ParamLimits

0xeede,	// (0x0006120f) tabs_3_long_passive_pane_srt

0x5ce7,	// (0x00058018) bg_passive_tab_pane_cp5_srt_ParamLimits

0x5ce7,	// (0x00058018) bg_passive_tab_pane_cp5_srt

0x850b,	// (0x0005a83c) bg_passive_tab_pane_g1_cp5_srt

0x8481,	// (0x0005a7b2) bg_passive_tab_pane_g2_cp5_srt

0x8514,	// (0x0005a845) bg_passive_tab_pane_g3_cp5_srt

0x5cc6,	// (0x00057ff7) bg_active_tab_pane_cp5_srt_ParamLimits

0x5cc6,	// (0x00057ff7) bg_active_tab_pane_cp5_srt

0xa5c8,	// (0x0005c8f9) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa5c8,	// (0x0005c8f9) tabs_3_long_active_pane_srt_t1

0x850b,	// (0x0005a83c) bg_active_tab_pane_g1_cp5_srt

0x8481,	// (0x0005a7b2) bg_active_tab_pane_g2_cp5_srt

0x8514,	// (0x0005a845) bg_active_tab_pane_g3_cp5_srt

0xa5ba,	// (0x0005c8eb) navi_text_pane_srt_t1

0xa5b2,	// (0x0005c8e3) navi_icon_pane_srt_g1

0x8a01,	// (0x0005ad32) midp_editing_number_pane_srt

0x8838,	// (0x0005ab69) midp_ticker_pane_srt

0x8a09,	// (0x0005ad3a) midp_ticker_pane_srt_g1

0x8a11,	// (0x0005ad42) midp_ticker_pane_srt_g2

0x0001,

0xf752,	// (0x00061a83) midp_ticker_pane_srt_g

0x8a19,	// (0x0005ad4a) midp_ticker_pane_srt_t1

0xa5a3,	// (0x0005c8d4) midp_editing_number_pane_t1_copy1

0x8840,	// (0x0005ab71) listscroll_midp_pane

0x8840,	// (0x0005ab71) midp_form_pane

0x88af,	// (0x0005abe0) midp_info_popup_window_ParamLimits

0x88af,	// (0x0005abe0) midp_info_popup_window

0x32ea,	// (0x0005561b) bg_popup_sub_pane_cp50_ParamLimits

0x32ea,	// (0x0005561b) bg_popup_sub_pane_cp50

0x94d7,	// (0x0005b808) listscroll_midp_info_pane_ParamLimits

0x94d7,	// (0x0005b808) listscroll_midp_info_pane

0x94b7,	// (0x0005b7e8) listscroll_form_midp_pane_ParamLimits

0x94b7,	// (0x0005b7e8) listscroll_form_midp_pane

0x94c3,	// (0x0005b7f4) scroll_bar_cp050

0x9497,	// (0x0005b7c8) list_midp_pane

0xb381,	// (0x0005d6b2) signal_pane_g2_cp

0x93d1,	// (0x0005b702) listscroll_midp_info_pane_t1_ParamLimits

0x93d1,	// (0x0005b702) listscroll_midp_info_pane_t1

0x93e9,	// (0x0005b71a) listscroll_midp_info_pane_t2_ParamLimits

0x93e9,	// (0x0005b71a) listscroll_midp_info_pane_t2

0x9427,	// (0x0005b758) listscroll_midp_info_pane_t3_ParamLimits

0x9427,	// (0x0005b758) listscroll_midp_info_pane_t3

0x9461,	// (0x0005b792) listscroll_midp_info_pane_t4_ParamLimits

0x9461,	// (0x0005b792) listscroll_midp_info_pane_t4

0x0003,

0xf80a,	// (0x00061b3b) listscroll_midp_info_pane_t_ParamLimits

0xf80a,	// (0x00061b3b) listscroll_midp_info_pane_t

0x333f,	// (0x00055670) scroll_pane_cp21

0x936b,	// (0x0005b69c) form_midp_field_choice_group_pane

0x9374,	// (0x0005b6a5) form_midp_field_text_pane

0x93b7,	// (0x0005b6e8) form_midp_field_time_pane

0x93bf,	// (0x0005b6f0) form_midp_gauge_slider_pane

0x93c8,	// (0x0005b6f9) form_midp_gauge_wait_pane

0xed5d,	// (0x0006108e) form_midp_image_pane

0x6bfb,	// (0x00058f2c) list_single_midp_pane_ParamLimits

0x6bfb,	// (0x00058f2c) list_single_midp_pane

0x932f,	// (0x0005b660) form_midp_field_text_pane_t1

0x9121,	// (0x0005b452) input_focus_pane_cp050

0x935a,	// (0x0005b68b) list_midp_form_text_pane

0x92fe,	// (0x0005b62f) form_midp_field_choice_group_pane_t1

0x930c,	// (0x0005b63d) input_focus_pane_cp051

0x9320,	// (0x0005b651) list_midp_choice_pane

0xed5d,	// (0x0006108e) status_idle_pane

0x92e2,	// (0x0005b613) form_midp_field_time_pane_t1

0xed53,	// (0x00061084) wait_anim_pane_g2_copy1

0x92f0,	// (0x0005b621) form_midp_field_time_pane_t2

0x0001,

0x895f,	// (0x0005ac90) aid_navinavi_width_2_pane

0xf805,	// (0x00061b36) form_midp_field_time_pane_t

0xed5d,	// (0x0006108e) input_focus_pane_cp052

0xed5d,	// (0x0006108e) bg_input_focus_pane_cp040

0x92a2,	// (0x0005b5d3) form_midp_gauge_slider_pane_t1

0x92b0,	// (0x0005b5e1) form_midp_gauge_slider_pane_t2

0x92be,	// (0x0005b5ef) form_midp_gauge_slider_pane_t3

0x92cc,	// (0x0005b5fd) form_midp_gauge_slider_pane_t4

0x0003,

0xf7fc,	// (0x00061b2d) form_midp_gauge_slider_pane_t

0x92da,	// (0x0005b60b) form_midp_slider_pane

0xedab,	// (0x000610dc) bg_input_focus_pane_cp041_ParamLimits

0xedab,	// (0x000610dc) bg_input_focus_pane_cp041

0x926f,	// (0x0005b5a0) form_midp_gauge_wait_pane_t1_ParamLimits

0x926f,	// (0x0005b5a0) form_midp_gauge_wait_pane_t1

0x9281,	// (0x0005b5b2) form_midp_gauge_wait_pane_t2_ParamLimits

0x9281,	// (0x0005b5b2) form_midp_gauge_wait_pane_t2

0x0001,

0xf7f7,	// (0x00061b28) form_midp_gauge_wait_pane_t_ParamLimits

0xf7f7,	// (0x00061b28) form_midp_gauge_wait_pane_t

0x9293,	// (0x0005b5c4) form_midp_wait_pane_ParamLimits

0x9293,	// (0x0005b5c4) form_midp_wait_pane

0x9237,	// (0x0005b568) form_midp_image_pane_g1

0x9240,	// (0x0005b571) form_midp_image_pane_t1

0x924f,	// (0x0005b580) form_midp_image_pane_t2

0x925e,	// (0x0005b58f) form_midp_image_pane_t3

0x0002,

0xf7f0,	// (0x00061b21) form_midp_image_pane_t

0x922e,	// (0x0005b55f) list_single_midp_pane_g1

0x3cf7,	// (0x00056028) list_single_midp_pane_t1

0x9214,	// (0x0005b545) list_midp_form_item_pane_ParamLimits

0x9214,	// (0x0005b545) list_midp_form_item_pane

0x8907,	// (0x0005ac38) list_midp_form_item_pane_t1

0x8916,	// (0x0005ac47) midp_ticker_pane_g1

0x8922,	// (0x0005ac53) midp_ticker_pane_g2

0x0001,

0xf738,	// (0x00061a69) midp_ticker_pane_g

0x892e,	// (0x0005ac5f) midp_ticker_pane_t1

0xa810,	// (0x0005cb41) midp_editing_number_pane_t1

0xa7ee,	// (0x0005cb1f) midp_editing_number_pane

0xa7fd,	// (0x0005cb2e) midp_ticker_pane

0xa593,	// (0x0005c8c4) ai_message_heading_pane

0xed5d,	// (0x0006108e) bg_popup_window_pane_cp14

0xa59b,	// (0x0005c8cc) listscroll_ai_message_pane

0xa519,	// (0x0005c84a) ai_message_heading_pane_g1_ParamLimits

0xa519,	// (0x0005c84a) ai_message_heading_pane_g1

0xa525,	// (0x0005c856) ai_message_heading_pane_g2_ParamLimits

0xa525,	// (0x0005c856) ai_message_heading_pane_g2

0xa533,	// (0x0005c864) ai_message_heading_pane_g3_ParamLimits

0xa533,	// (0x0005c864) ai_message_heading_pane_g3

0xa53f,	// (0x0005c870) ai_message_heading_pane_g4_ParamLimits

0xa53f,	// (0x0005c870) ai_message_heading_pane_g4

0x0003,

0xf931,	// (0x00061c62) ai_message_heading_pane_g_ParamLimits

0xf931,	// (0x00061c62) ai_message_heading_pane_g

0xa54b,	// (0x0005c87c) ai_message_heading_pane_t1_ParamLimits

0xa54b,	// (0x0005c87c) ai_message_heading_pane_t1

0xa565,	// (0x0005c896) ai_message_heading_pane_t2_ParamLimits

0xa565,	// (0x0005c896) ai_message_heading_pane_t2

0x0001,

0xf93a,	// (0x00061c6b) ai_message_heading_pane_t_ParamLimits

0xf93a,	// (0x00061c6b) ai_message_heading_pane_t

0xa579,	// (0x0005c8aa) bg_popup_heading_pane_cp1_ParamLimits

0xa579,	// (0x0005c8aa) bg_popup_heading_pane_cp1

0xa507,	// (0x0005c838) list_ai_message_pane_ParamLimits

0xa507,	// (0x0005c838) list_ai_message_pane

0x333f,	// (0x00055670) scroll_pane_cp10

0xa4a3,	// (0x0005c7d4) list_ai_message_pane_g1

0xa4ab,	// (0x0005c7dc) list_ai_message_pane_g2

0x0001,

0xf90e,	// (0x00061c3f) list_ai_message_pane_g

0xa4b3,	// (0x0005c7e4) list_ai_message_pane_t1_ParamLimits

0xa4b3,	// (0x0005c7e4) list_ai_message_pane_t1

0xa4c8,	// (0x0005c7f9) list_ai_message_pane_t2_ParamLimits

0xa4c8,	// (0x0005c7f9) list_ai_message_pane_t2

0xa4dd,	// (0x0005c80e) list_ai_message_pane_t3_ParamLimits

0xa4dd,	// (0x0005c80e) list_ai_message_pane_t3

0xa4f2,	// (0x0005c823) list_ai_message_pane_t4_ParamLimits

0xa4f2,	// (0x0005c823) list_ai_message_pane_t4

0x0003,

0xf913,	// (0x00061c44) list_ai_message_pane_t_ParamLimits

0xf913,	// (0x00061c44) list_ai_message_pane_t

0xa48c,	// (0x0005c7bd) cell_ai_soft_ind_pane_ParamLimits

0xa48c,	// (0x0005c7bd) cell_ai_soft_ind_pane

0x8940,	// (0x0005ac71) cell_ai_soft_ind_pane_g1_ParamLimits

0x8940,	// (0x0005ac71) cell_ai_soft_ind_pane_g1

0xed5d,	// (0x0006108e) grid_highlight_cp1

0x894d,	// (0x0005ac7e) text_secondary_cp56_ParamLimits

0x894d,	// (0x0005ac7e) text_secondary_cp56

0xa461,	// (0x0005c792) example_general_pane_ParamLimits

0xa461,	// (0x0005c792) example_general_pane

0xa46d,	// (0x0005c79e) example_parent_pane_g1_ParamLimits

0xa46d,	// (0x0005c79e) example_parent_pane_g1

0xa479,	// (0x0005c7aa) example_parent_pane_t1_ParamLimits

0xa479,	// (0x0005c7aa) example_parent_pane_t1

0x684a,	// (0x00058b7b) popup_preview_text_window_ParamLimits

0x684a,	// (0x00058b7b) popup_preview_text_window

0x8767,	// (0x0005aa98) list_single_pane_cp2_g4

0xefba,	// (0x000612eb) bg_popup_preview_window_pane_ParamLimits

0xefba,	// (0x000612eb) bg_popup_preview_window_pane

0xa1aa,	// (0x0005c4db) popup_preview_text_window_t1_ParamLimits

0xa1aa,	// (0x0005c4db) popup_preview_text_window_t1

0xa1c8,	// (0x0005c4f9) popup_preview_text_window_t2_ParamLimits

0xa1c8,	// (0x0005c4f9) popup_preview_text_window_t2

0xa211,	// (0x0005c542) popup_preview_text_window_t3_ParamLimits

0xa211,	// (0x0005c542) popup_preview_text_window_t3

0xa256,	// (0x0005c587) popup_preview_text_window_t4_ParamLimits

0xa256,	// (0x0005c587) popup_preview_text_window_t4

0x0004,

0xf8e2,	// (0x00061c13) popup_preview_text_window_t_ParamLimits

0xf8e2,	// (0x00061c13) popup_preview_text_window_t

0xa2d4,	// (0x0005c605) scroll_pane_cp11

0x90ad,	// (0x0005b3de) bg_popup_preview_window_pane_g1

0xa15e,	// (0x0005c48f) bg_popup_preview_window_pane_g2

0xa168,	// (0x0005c499) bg_popup_preview_window_pane_g3

0xa172,	// (0x0005c4a3) bg_popup_preview_window_pane_g4

0xa17c,	// (0x0005c4ad) bg_popup_preview_window_pane_g5

0xa186,	// (0x0005c4b7) bg_popup_preview_window_pane_g6

0xa18e,	// (0x0005c4bf) bg_popup_preview_window_pane_g7

0xa196,	// (0x0005c4c7) bg_popup_preview_window_pane_g8

0x4e4a,	// (0x0005717b) aid_popup_width_pane

0x6826,	// (0x00058b57) popup_midp_note_alarm_window_ParamLimits

0x6826,	// (0x00058b57) popup_midp_note_alarm_window

0xf47d,	// (0x000617ae) data_form_pane_ParamLimits

0x5b61,	// (0x00057e92) form_field_data_pane_g1

0x5b6b,	// (0x00057e9c) form_field_data_pane_t1_ParamLimits

0xf489,	// (0x000617ba) input_focus_pane_ParamLimits

0x3b06,	// (0x00055e37) data_form_wide_pane_ParamLimits

0x3b17,	// (0x00055e48) form_field_data_wide_pane_g1

0x3b23,	// (0x00055e54) form_field_data_wide_pane_t1_ParamLimits

0xf204,	// (0x00061535) input_focus_pane_cp6_ParamLimits

0x5c9e,	// (0x00057fcf) input_popup_find_pane_g1_ParamLimits

0x5c9e,	// (0x00057fcf) input_popup_find_pane_g1

0x5e05,	// (0x00058136) aid_navi_side_left_pane

0x5e1a,	// (0x0005814b) aid_navi_side_right_pane

0x99b0,	// (0x0005bce1) bg_popup_window_pane_cp30_ParamLimits

0x99b0,	// (0x0005bce1) bg_popup_window_pane_cp30

0x9a2a,	// (0x0005bd5b) popup_midp_note_alarm_window_g1_ParamLimits

0x9a2a,	// (0x0005bd5b) popup_midp_note_alarm_window_g1

0x9a5a,	// (0x0005bd8b) popup_midp_note_alarm_window_t1_ParamLimits

0x9a5a,	// (0x0005bd8b) popup_midp_note_alarm_window_t1

0x9cbe,	// (0x0005bfef) popup_midp_note_alarm_window_t2_ParamLimits

0x9cbe,	// (0x0005bfef) popup_midp_note_alarm_window_t2

0x9d6c,	// (0x0005c09d) popup_midp_note_alarm_window_t3_ParamLimits

0x9d6c,	// (0x0005c09d) popup_midp_note_alarm_window_t3

0x9d9e,	// (0x0005c0cf) popup_midp_note_alarm_window_t4_ParamLimits

0x9d9e,	// (0x0005c0cf) popup_midp_note_alarm_window_t4

0x9dc4,	// (0x0005c0f5) popup_midp_note_alarm_window_t5_ParamLimits

0x9dc4,	// (0x0005c0f5) popup_midp_note_alarm_window_t5

0x000a,

0xf87f,	// (0x00061bb0) popup_midp_note_alarm_window_t_ParamLimits

0xf87f,	// (0x00061bb0) popup_midp_note_alarm_window_t

0x9e70,	// (0x0005c1a1) wait_bar_pane_cp1_ParamLimits

0x9e70,	// (0x0005c1a1) wait_bar_pane_cp1

0xed5d,	// (0x0006108e) wait_anim_pane_copy1

0xed5d,	// (0x0006108e) wait_border_pane_copy1

0x9695,	// (0x0005b9c6) wait_border_pane_g1_copy1

0x3b3d,	// (0x00055e6e) form_field_popup_pane_g1

0x5b85,	// (0x00057eb6) form_field_popup_pane_t1_ParamLimits

0xf489,	// (0x000617ba) input_focus_pane_cp7_ParamLimits

0xf4b7,	// (0x000617e8) list_form_pane_ParamLimits

0x3b45,	// (0x00055e76) form_field_popup_wide_pane_g1

0x3b4d,	// (0x00055e7e) form_field_popup_wide_pane_t1_ParamLimits

0xf489,	// (0x000617ba) input_focus_pane_cp8_ParamLimits

0xf4c3,	// (0x000617f4) list_form_wide_pane_ParamLimits

0xa968,	// (0x0005cc99) aid_size_cell_graphic_pane

0x5c04,	// (0x00057f35) data_form_pane_t1_ParamLimits

0x6e8a,	// (0x000591bb) data_form_wide_pane_t1_ParamLimits

0x8c4e,	// (0x0005af7f) bg_status_flat_pane

0x5279,	// (0x000575aa) title_pane_t1_ParamLimits

0xed73,	// (0x000610a4) title_pane_t2_ParamLimits

0xed99,	// (0x000610ca) title_pane_t3_ParamLimits

0xf532,	// (0x00061863) title_pane_t_ParamLimits

0x5f6b,	// (0x0005829c) level_1_signal_ParamLimits

0x5f78,	// (0x000582a9) level_2_signal_ParamLimits

0x5f85,	// (0x000582b6) level_3_signal_ParamLimits

0x5f92,	// (0x000582c3) level_4_signal_ParamLimits

0x81f5,	// (0x0005a526) level_5_signal_ParamLimits

0x8202,	// (0x0005a533) level_6_signal_ParamLimits

0x820f,	// (0x0005a540) level_7_signal_ParamLimits

0x5f6b,	// (0x0005829c) level_1_battery_ParamLimits

0x5f78,	// (0x000582a9) level_2_battery_ParamLimits

0x5f85,	// (0x000582b6) level_3_battery_ParamLimits

0x5f92,	// (0x000582c3) level_4_battery_ParamLimits

0x81f5,	// (0x0005a526) level_5_battery_ParamLimits

0x8202,	// (0x0005a533) level_6_battery_ParamLimits

0x820f,	// (0x0005a540) level_7_battery_ParamLimits

0x98b5,	// (0x0005bbe6) bg_status_flat_pane_g1

0x98bd,	// (0x0005bbee) bg_status_flat_pane_g2

0x98c5,	// (0x0005bbf6) bg_status_flat_pane_g3

0x98cd,	// (0x0005bbfe) bg_status_flat_pane_g4

0x98d5,	// (0x0005bc06) bg_status_flat_pane_g5

0x98dd,	// (0x0005bc0e) bg_status_flat_pane_g6

0x98e5,	// (0x0005bc16) bg_status_flat_pane_g7

0x52e9,	// (0x0005761a) tabs_3_active_pane_t1_ParamLimits

0x52e9,	// (0x0005761a) tabs_3_passive_pane_t1_ParamLimits

0x5303,	// (0x00057634) tabs_4_active_pane_t1_ParamLimits

0x5303,	// (0x00057634) tabs_4_1_passive_pane_t1_ParamLimits

0x5cb4,	// (0x00057fe5) tabs_2_active_pane_t1_ParamLimits

0x5cb4,	// (0x00057fe5) tabs_2_passive_pane_t1_ParamLimits

0x5cc6,	// (0x00057ff7) bg_active_tab_pane_cp4_ParamLimits

0x5cd4,	// (0x00058005) tabs_2_long_active_pane_t1_ParamLimits

0x5ce7,	// (0x00058018) bg_passive_tab_pane_cp4_ParamLimits

0x6b42,	// (0x00058e73) list_single_midp_graphic_pane_t1_ParamLimits

0x5cc6,	// (0x00057ff7) bg_active_tab_pane_cp5_ParamLimits

0x5cf3,	// (0x00058024) tabs_3_long_active_pane_t1_ParamLimits

0x5ce7,	// (0x00058018) bg_passive_tab_pane_cp5_ParamLimits

0x6b42,	// (0x00058e73) list_single_midp_graphic_pane_t1

0x8c4e,	// (0x0005af7f) bg_status_flat_pane_ParamLimits

0x8d19,	// (0x0005b04a) indicator_pane_cp2_ParamLimits

0x8d19,	// (0x0005b04a) indicator_pane_cp2

0x8e5c,	// (0x0005b18d) navi_pane_srt_ParamLimits

0x8e5c,	// (0x0005b18d) navi_pane_srt

0x8e80,	// (0x0005b1b1) popup_clock_digital_analogue_window_cp1

0xedef,	// (0x00061120) indicator_pane_t1

0x8838,	// (0x0005ab69) copy_highlight_pane

0x8838,	// (0x0005ab69) cursor_graphics_pane

0x8838,	// (0x0005ab69) graphic_within_text_pane

0x8838,	// (0x0005ab69) link_highlight_pane

0xa297,	// (0x0005c5c8) popup_preview_text_window_t5_ParamLimits

0xa297,	// (0x0005c5c8) popup_preview_text_window_t5

0x8969,	// (0x0005ac9a) cursor_digital_pane

0x8969,	// (0x0005ac9a) cursor_primary_pane

0x897a,	// (0x0005acab) cursor_primary_small_pane

0x8982,	// (0x0005acb3) cursor_secondary_pane

0x898a,	// (0x0005acbb) cursor_title_pane

0x8969,	// (0x0005ac9a) link_highlight_digital_pane

0x8971,	// (0x0005aca2) link_highlight_primary_pane

0x897a,	// (0x0005acab) link_highlight_primary_small_pane

0x8982,	// (0x0005acb3) link_highlight_secondary_pane

0x898a,	// (0x0005acbb) link_highlight_title_pane

0x8969,	// (0x0005ac9a) copy_highlight_digital_pane

0x8969,	// (0x0005ac9a) copy_highlight_primary_pane

0x897a,	// (0x0005acab) copy_highlight_primary_small_pane

0x8982,	// (0x0005acb3) copy_highlight_secondary_pane

0x898a,	// (0x0005acbb) copy_highlight_title_pane

0x8982,	// (0x0005acb3) graphic_text_digital_pane

0x9953,	// (0x0005bc84) graphic_text_primary_pane

0x995c,	// (0x0005bc8d) graphic_text_primary_small_pane

0x897a,	// (0x0005acab) graphic_text_secondary_pane

0x8969,	// (0x0005ac9a) graphic_text_title_pane

0x8992,	// (0x0005acc3) cursor_primary_pane_g1

0x9945,	// (0x0005bc76) cursor_text_primary_t1

0x992d,	// (0x0005bc5e) cursor_primary_small_pane_g1

0x9937,	// (0x0005bc68) cursor_text_primary_small_t1

0x9915,	// (0x0005bc46) cursor_primary_small_pane_g1_copy1

0x991f,	// (0x0005bc50) cursor_text_primary_small_t1_copy1

0x98fd,	// (0x0005bc2e) cursor_text_title_t1

0x990b,	// (0x0005bc3c) cursor_title_pane_g1

0x8992,	// (0x0005acc3) cursor_digital_pane_g1

0x899c,	// (0x0005accd) cursor_text_digital_t1

0x89aa,	// (0x0005acdb) link_highlight_primary_pane_g1

0x98a6,	// (0x0005bbd7) link_highlight_primary_pane_t1

0x89aa,	// (0x0005acdb) link_highlight_primary_small_pane_g1

0x89b2,	// (0x0005ace3) link_highlight_primary_small_pane_t1

0x89c1,	// (0x0005acf2) link_highlight_secondary_pane_g1

0x89c9,	// (0x0005acfa) link_highlight_secondary_pane_t1

0x981a,	// (0x0005bb4b) link_highlight_title_pane_g1

0x9822,	// (0x0005bb53) link_highlight_title_pane_t1

0x9803,	// (0x0005bb34) link_highlight_digital_pane_g1

0x980b,	// (0x0005bb3c) link_highlight_digital_pane_t1

0x96cb,	// (0x0005b9fc) copy_highlight_primary_pane_g1

0x96e2,	// (0x0005ba13) copy_highlight_primary_pane_t1

0x96cb,	// (0x0005b9fc) copy_highlight_primary_small_pane_g1

0x96d3,	// (0x0005ba04) copy_highlight_primary_small_pane_t1

0x89d8,	// (0x0005ad09) copy_highlight_secondary_pane_g1

0x89e0,	// (0x0005ad11) copy_highlight_secondary_pane_t1

0x96b4,	// (0x0005b9e5) copy_highlight_title_pane_g1

0x96bc,	// (0x0005b9ed) copy_highlight_title_pane_t1

0x96cb,	// (0x0005b9fc) copy_highlight_digital_pane_g1

0xab3a,	// (0x0005ce6b) copy_highlight_digital_pane_t1

0xaa8e,	// (0x0005cdbf) graphic_text_primary_pane_g1

0xab1e,	// (0x0005ce4f) graphic_text_primary_pane_t1

0xab2c,	// (0x0005ce5d) graphic_text_primary_pane_t2

0x0001,

0xf9ae,	// (0x00061cdf) graphic_text_primary_pane_t

0xaafa,	// (0x0005ce2b) graphic_text_primary_small_pane_g1

0xab02,	// (0x0005ce33) graphic_text_primary_small_pane_t1

0xab10,	// (0x0005ce41) graphic_text_primary_small_pane_t2

0x0001,

0xf9a9,	// (0x00061cda) graphic_text_primary_small_pane_t

0xaad6,	// (0x0005ce07) graphic_text_secondary_pane_g1

0xaade,	// (0x0005ce0f) graphic_text_secondary_pane_t1

0xaaec,	// (0x0005ce1d) graphic_text_secondary_pane_t2

0x0001,

0xf9a4,	// (0x00061cd5) graphic_text_secondary_pane_t

0xaab2,	// (0x0005cde3) graphic_text_title_pane_g1

0xaaba,	// (0x0005cdeb) graphic_text_title_pane_t1

0xaac8,	// (0x0005cdf9) graphic_text_title_pane_t2

0x0001,

0xf99f,	// (0x00061cd0) graphic_text_title_pane_t

0xaa8e,	// (0x0005cdbf) graphic_text_digital_pane_g1

0xaa96,	// (0x0005cdc7) graphic_text_digital_pane_t1

0xaaa4,	// (0x0005cdd5) graphic_text_digital_pane_t2

0x0001,

0xf99a,	// (0x00061ccb) graphic_text_digital_pane_t

0xedab,	// (0x000610dc) navi_icon_pane_srt_ParamLimits

0xedab,	// (0x000610dc) navi_icon_pane_srt

0xed5d,	// (0x0006108e) navi_midp_pane_srt

0xed5d,	// (0x0006108e) navi_navi_pane_srt

0xedab,	// (0x000610dc) navi_text_pane_srt_ParamLimits

0xedab,	// (0x000610dc) navi_text_pane_srt

0xaa59,	// (0x0005cd8a) navi_navi_icon_text_pane_srt

0xaa61,	// (0x0005cd92) navi_navi_pane_srt_g1_ParamLimits

0xaa61,	// (0x0005cd92) navi_navi_pane_srt_g1

0xaa73,	// (0x0005cda4) navi_navi_pane_srt_g2_ParamLimits

0xaa73,	// (0x0005cda4) navi_navi_pane_srt_g2

0x0001,

0xf995,	// (0x00061cc6) navi_navi_pane_srt_g_ParamLimits

0xf995,	// (0x00061cc6) navi_navi_pane_srt_g

0xaa85,	// (0x0005cdb6) navi_navi_tabs_pane_srt

0xaa59,	// (0x0005cd8a) navi_navi_text_pane_srt

0xaa59,	// (0x0005cd8a) navi_navi_volume_pane_srt

0xaa4a,	// (0x0005cd7b) navi_navi_text_pane_srt_t1

0x6f85,	// (0x000592b6) navi_navi_volume_pane_srt_g1

0x6f8d,	// (0x000592be) volume_small_pane_srt_ParamLimits

0x6f8d,	// (0x000592be) volume_small_pane_srt

0x624a,	// (0x0005857b) volume_small_pane_srt_g1_ParamLimits

0x624a,	// (0x0005857b) volume_small_pane_srt_g1

0x625a,	// (0x0005858b) volume_small_pane_srt_g2_ParamLimits

0x625a,	// (0x0005858b) volume_small_pane_srt_g2

0x626b,	// (0x0005859c) volume_small_pane_srt_g3_ParamLimits

0x626b,	// (0x0005859c) volume_small_pane_srt_g3

0x627c,	// (0x000585ad) volume_small_pane_srt_g4_ParamLimits

0x627c,	// (0x000585ad) volume_small_pane_srt_g4

0x628d,	// (0x000585be) volume_small_pane_srt_g5_ParamLimits

0x628d,	// (0x000585be) volume_small_pane_srt_g5

0x629e,	// (0x000585cf) volume_small_pane_srt_g6_ParamLimits

0x629e,	// (0x000585cf) volume_small_pane_srt_g6

0x62af,	// (0x000585e0) volume_small_pane_srt_g7_ParamLimits

0x62af,	// (0x000585e0) volume_small_pane_srt_g7

0x62c0,	// (0x000585f1) volume_small_pane_srt_g8_ParamLimits

0x62c0,	// (0x000585f1) volume_small_pane_srt_g8

0x62d1,	// (0x00058602) volume_small_pane_srt_g9_ParamLimits

0x62d1,	// (0x00058602) volume_small_pane_srt_g9

0x62e2,	// (0x00058613) volume_small_pane_srt_g10_ParamLimits

0x62e2,	// (0x00058613) volume_small_pane_srt_g10

0x0009,

0xf73d,	// (0x00061a6e) volume_small_pane_srt_g_ParamLimits

0xf73d,	// (0x00061a6e) volume_small_pane_srt_g

0xf0fd,	// (0x0006142e) query_popup_data_pane_cp2

0xaa30,	// (0x0005cd61) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xaa30,	// (0x0005cd61) navi_navi_icon_text_pane_srt_t1

0x9953,	// (0x0005bc84) navi_tabs_2_long_pane_srt

0x9953,	// (0x0005bc84) navi_tabs_2_pane_srt

0x9953,	// (0x0005bc84) navi_tabs_3_long_pane_srt

0x9953,	// (0x0005bc84) navi_tabs_3_pane_srt

0x9953,	// (0x0005bc84) navi_tabs_4_pane_srt

0x6f65,	// (0x00059296) tabs_2_active_pane_srt_ParamLimits

0x6f65,	// (0x00059296) tabs_2_active_pane_srt

0x6f75,	// (0x000592a6) tabs_2_passive_pane_srt_ParamLimits

0x6f75,	// (0x000592a6) tabs_2_passive_pane_srt

0x8b5f,	// (0x0005ae90) bg_passive_tab_pane_cp1_srt_ParamLimits

0x8b5f,	// (0x0005ae90) bg_passive_tab_pane_cp1_srt

0xa9fc,	// (0x0005cd2d) bg_passive_tab_pane_g1_cp1_srt

0x8481,	// (0x0005a7b2) bg_passive_tab_pane_g2_cp1_srt

0xaa05,	// (0x0005cd36) bg_passive_tab_pane_g3_cp1_srt

0xedab,	// (0x000610dc) bg_active_tab_pane_cp1_srt_ParamLimits

0xedab,	// (0x000610dc) bg_active_tab_pane_cp1_srt

0xaa0e,	// (0x0005cd3f) tabs_2_active_pane_srt_g1

0xaa16,	// (0x0005cd47) tabs_2_active_pane_srt_t1_ParamLimits

0xaa16,	// (0x0005cd47) tabs_2_active_pane_srt_t1

0xa9fc,	// (0x0005cd2d) bg_active_tab_pane_g1_cp1_srt

0x8481,	// (0x0005a7b2) bg_active_tab_pane_g2_cp1_srt

0xaa05,	// (0x0005cd36) bg_active_tab_pane_g3_cp1_srt

0x6f32,	// (0x00059263) tabs_3_active_pane_srt_ParamLimits

0x6f32,	// (0x00059263) tabs_3_active_pane_srt

0x6f43,	// (0x00059274) tabs_3_passive_pane_cp_srt_ParamLimits

0x6f43,	// (0x00059274) tabs_3_passive_pane_cp_srt

0x6f54,	// (0x00059285) tabs_3_passive_pane_srt_ParamLimits

0x6f54,	// (0x00059285) tabs_3_passive_pane_srt

0x8b5f,	// (0x0005ae90) bg_passive_tab_pane_cp2_srt_ParamLimits

0x8b5f,	// (0x0005ae90) bg_passive_tab_pane_cp2_srt

0x89ef,	// (0x0005ad20) bg_passive_tab_pane_g1_cp2_srt

0x8481,	// (0x0005a7b2) bg_passive_tab_pane_g2_cp2_srt

0x89f8,	// (0x0005ad29) bg_passive_tab_pane_g3_cp2_srt

0xedab,	// (0x000610dc) bg_active_tab_pane_cp2_srt_ParamLimits

0xedab,	// (0x000610dc) bg_active_tab_pane_cp2_srt

0xa9e2,	// (0x0005cd13) tabs_3_active_pane_srt_g1

0xa9ea,	// (0x0005cd1b) tabs_3_active_pane_srt_t1_ParamLimits

0xa9ea,	// (0x0005cd1b) tabs_3_active_pane_srt_t1

0x89ef,	// (0x0005ad20) bg_active_tab_pane_g1_cp2_srt

0x8481,	// (0x0005a7b2) bg_active_tab_pane_g2_cp2_srt

0x89f8,	// (0x0005ad29) bg_active_tab_pane_g3_cp2_srt

0x6eea,	// (0x0005921b) tabs_4_active_pane_srt_ParamLimits

0x6eea,	// (0x0005921b) tabs_4_active_pane_srt

0x6efc,	// (0x0005922d) tabs_4_passive_pane_cp2_srt_ParamLimits

0x6efc,	// (0x0005922d) tabs_4_passive_pane_cp2_srt

0x6461,	// (0x00058792) aid_size_cell_toolbar

0x5ce7,	// (0x00058018) main_idle_act_pane_ParamLimits

0x664c,	// (0x0005897d) popup_large_graphic_colour_window_ParamLimits

0x69f3,	// (0x00058d24) popup_toolbar_window_ParamLimits

0x69f3,	// (0x00058d24) popup_toolbar_window

0x9afb,	// (0x0005be2c) list_single_graphic_2heading_pane_ParamLimits

0x9afb,	// (0x0005be2c) list_single_graphic_2heading_pane

0x3517,	// (0x00055848) aid_size_cell_apps_grid_lsc_pane

0x3529,	// (0x0005585a) aid_size_cell_apps_grid_prt_pane

0x8b5f,	// (0x0005ae90) bg_wml_button_pane_cp1_ParamLimits

0x8b5f,	// (0x0005ae90) bg_wml_button_pane_cp1

0x932f,	// (0x0005b660) form_midp_field_text_pane_t1_ParamLimits

0x9121,	// (0x0005b452) input_focus_pane_cp050_ParamLimits

0x935a,	// (0x0005b68b) list_midp_form_text_pane_ParamLimits

0x930c,	// (0x0005b63d) input_focus_pane_cp051_ParamLimits

0x9320,	// (0x0005b651) list_midp_choice_pane_ParamLimits

0x91da,	// (0x0005b50b) list_single_2graphic_pane_cp3_ParamLimits

0x91da,	// (0x0005b50b) list_single_2graphic_pane_cp3

0x91f0,	// (0x0005b521) list_single_midp_graphic_pane_ParamLimits

0x91f0,	// (0x0005b521) list_single_midp_graphic_pane

0x4db6,	// (0x000570e7) list_single_graphic_2heading_pane_g1_ParamLimits

0x4db6,	// (0x000570e7) list_single_graphic_2heading_pane_g1

0x4dc2,	// (0x000570f3) list_single_graphic_2heading_pane_g4_ParamLimits

0x4dc2,	// (0x000570f3) list_single_graphic_2heading_pane_g4

0x4dce,	// (0x000570ff) list_single_graphic_2heading_pane_g5_ParamLimits

0x4dce,	// (0x000570ff) list_single_graphic_2heading_pane_g5

0x0002,

0xf790,	// (0x00061ac1) list_single_graphic_2heading_pane_g_ParamLimits

0xf790,	// (0x00061ac1) list_single_graphic_2heading_pane_g

0x4dda,	// (0x0005710b) list_single_graphic_2heading_pane_t1_ParamLimits

0x4dda,	// (0x0005710b) list_single_graphic_2heading_pane_t1

0x4dee,	// (0x0005711f) list_single_graphic_2heading_pane_t2_ParamLimits

0x4dee,	// (0x0005711f) list_single_graphic_2heading_pane_t2

0x4e0a,	// (0x0005713b) list_single_graphic_2heading_pane_t3_ParamLimits

0x4e0a,	// (0x0005713b) list_single_graphic_2heading_pane_t3

0x0002,

0xf797,	// (0x00061ac8) list_single_graphic_2heading_pane_t_ParamLimits

0xf797,	// (0x00061ac8) list_single_graphic_2heading_pane_t

0x8fd3,	// (0x0005b304) bg_popup_sub_pane_cp2

0x8ffd,	// (0x0005b32e) grid_toobar_pane

0x6ab2,	// (0x00058de3) cell_toolbar_pane_ParamLimits

0x6ab2,	// (0x00058de3) cell_toolbar_pane

0x9051,	// (0x0005b382) cell_toolbar_pane_g1_ParamLimits

0x9051,	// (0x0005b382) cell_toolbar_pane_g1

0x9065,	// (0x0005b396) cell_toolbar_pane_g2_ParamLimits

0x9065,	// (0x0005b396) cell_toolbar_pane_g2

0x0001,

0xf7a5,	// (0x00061ad6) cell_toolbar_pane_g_ParamLimits

0xf7a5,	// (0x00061ad6) cell_toolbar_pane_g

0x9087,	// (0x0005b3b8) grid_highlight_pane_cp2_ParamLimits

0x9087,	// (0x0005b3b8) grid_highlight_pane_cp2

0x90a1,	// (0x0005b3d2) toolbar_button_pane

0x90ad,	// (0x0005b3de) toolbar_button_pane_g1

0x90b5,	// (0x0005b3e6) toolbar_button_pane_g2

0x90bd,	// (0x0005b3ee) toolbar_button_pane_g3

0x90c5,	// (0x0005b3f6) toolbar_button_pane_g4

0x90cd,	// (0x0005b3fe) toolbar_button_pane_g5

0x90d5,	// (0x0005b406) toolbar_button_pane_g6

0x90dd,	// (0x0005b40e) toolbar_button_pane_g7

0x90e5,	// (0x0005b416) toolbar_button_pane_g8

0x90ed,	// (0x0005b41e) toolbar_button_pane_g9

0x0009,

0xf7aa,	// (0x00061adb) toolbar_button_pane_g

0x6aea,	// (0x00058e1b) list_single_2graphic_pane_g1_cp3_ParamLimits

0x6aea,	// (0x00058e1b) list_single_2graphic_pane_g1_cp3

0x6af6,	// (0x00058e27) list_single_2graphic_pane_g2_cp3_ParamLimits

0x6af6,	// (0x00058e27) list_single_2graphic_pane_g2_cp3

0x6b07,	// (0x00058e38) list_single_2graphic_pane_g3_cp3

0x6b0f,	// (0x00058e40) list_single_2graphic_pane_g4_cp3_ParamLimits

0x6b0f,	// (0x00058e40) list_single_2graphic_pane_g4_cp3

0x6b1b,	// (0x00058e4c) list_single_2graphic_pane_t1_cp3_ParamLimits

0x6b1b,	// (0x00058e4c) list_single_2graphic_pane_t1_cp3

0x6b36,	// (0x00058e67) list_single_midp_graphic_pane_g2_ParamLimits

0x6b36,	// (0x00058e67) list_single_midp_graphic_pane_g2

0x4da6,	// (0x000570d7) aid_zoom_text_primary

0x4dae,	// (0x000570df) aid_zoom_text_secondary

0x8aa9,	// (0x0005adda) status_small_pane_g7_ParamLimits

0x8aa9,	// (0x0005adda) status_small_pane_g7

0x8acc,	// (0x0005adfd) status_small_pane_t1_ParamLimits

0x5254,	// (0x00057585) title_pane_g2

0x0003,

0xf529,	// (0x0006185a) title_pane_g

0x54bd,	// (0x000577ee) aid_size_cell_colour_1_pane_ParamLimits

0x54bd,	// (0x000577ee) aid_size_cell_colour_1_pane

0x54d1,	// (0x00057802) aid_size_cell_colour_2_pane_ParamLimits

0x54d1,	// (0x00057802) aid_size_cell_colour_2_pane

0x54e5,	// (0x00057816) aid_size_cell_colour_3_pane_ParamLimits

0x54e5,	// (0x00057816) aid_size_cell_colour_3_pane

0x54f9,	// (0x0005782a) aid_size_cell_colour_4_pane_ParamLimits

0x54f9,	// (0x0005782a) aid_size_cell_colour_4_pane

0x5d41,	// (0x00058072) title_pane_stacon_g1_ParamLimits

0x5d41,	// (0x00058072) title_pane_stacon_g1

0x9739,	// (0x0005ba6a) popup_note_wait_window_g3_ParamLimits

0x9739,	// (0x0005ba6a) popup_note_wait_window_g3

0x97b0,	// (0x0005bae1) popup_note_wait_window_t5_ParamLimits

0x97b0,	// (0x0005bae1) popup_note_wait_window_t5

0xed5d,	// (0x0006108e) main_feb_china_hwr_fs_writing_pane

0x6511,	// (0x00058842) popup_feb_china_hwr_fs_window_ParamLimits

0x6511,	// (0x00058842) popup_feb_china_hwr_fs_window

0x6b58,	// (0x00058e89) aid_size_cell_hwr_fs_ParamLimits

0x6b58,	// (0x00058e89) aid_size_cell_hwr_fs

0x9121,	// (0x0005b452) bg_popup_sub_pane_cp3_ParamLimits

0x9121,	// (0x0005b452) bg_popup_sub_pane_cp3

0x6b6d,	// (0x00058e9e) grid_hwr_fs_pane_ParamLimits

0x6b6d,	// (0x00058e9e) grid_hwr_fs_pane

0x6b85,	// (0x00058eb6) linegrid_hwr_fs_pane_ParamLimits

0x6b85,	// (0x00058eb6) linegrid_hwr_fs_pane

0x6b95,	// (0x00058ec6) cell_hwr_fs_pane_ParamLimits

0x6b95,	// (0x00058ec6) cell_hwr_fs_pane

0x912d,	// (0x0005b45e) linegrid_hwr_fs_pane_g1_ParamLimits

0x912d,	// (0x0005b45e) linegrid_hwr_fs_pane_g1

0x9139,	// (0x0005b46a) linegrid_hwr_fs_pane_g2_ParamLimits

0x9139,	// (0x0005b46a) linegrid_hwr_fs_pane_g2

0x914b,	// (0x0005b47c) linegrid_hwr_fs_pane_g3_ParamLimits

0x914b,	// (0x0005b47c) linegrid_hwr_fs_pane_g3

0x6bb9,	// (0x00058eea) linegrid_hwr_fs_pane_g4_ParamLimits

0x6bb9,	// (0x00058eea) linegrid_hwr_fs_pane_g4

0x6bd7,	// (0x00058f08) linegrid_hwr_fs_pane_g5_ParamLimits

0x6bd7,	// (0x00058f08) linegrid_hwr_fs_pane_g5

0x0004,

0xf7d5,	// (0x00061b06) linegrid_hwr_fs_pane_g_ParamLimits

0xf7d5,	// (0x00061b06) linegrid_hwr_fs_pane_g

0x9157,	// (0x0005b488) cell_hwr_fs_pane_g1_ParamLimits

0x9157,	// (0x0005b488) cell_hwr_fs_pane_g1

0x8f0e,	// (0x0005b23f) cell_hwr_fs_pane_g2_ParamLimits

0x8f0e,	// (0x0005b23f) cell_hwr_fs_pane_g2

0x916d,	// (0x0005b49e) cell_hwr_fs_pane_g3_ParamLimits

0x916d,	// (0x0005b49e) cell_hwr_fs_pane_g3

0x917a,	// (0x0005b4ab) cell_hwr_fs_pane_g4_ParamLimits

0x917a,	// (0x0005b4ab) cell_hwr_fs_pane_g4

0x0003,

0xf7e0,	// (0x00061b11) cell_hwr_fs_pane_g_ParamLimits

0xf7e0,	// (0x00061b11) cell_hwr_fs_pane_g

0x6bed,	// (0x00058f1e) cell_hwr_fs_pane_t1

0xed5d,	// (0x0006108e) grid_highlight_pane_cp6

0xed5d,	// (0x0006108e) main_idle_act2_pane

0x3326,	// (0x00055657) aid_inside_area_popup_secondary

0x9fac,	// (0x0005c2dd) aid_inside_area_window_primary_ParamLimits

0x9fac,	// (0x0005c2dd) aid_inside_area_window_primary

0xab49,	// (0x0005ce7a) ai2_news_ticker_pane

0xab51,	// (0x0005ce82) aid_size_cell_ai1_link_ParamLimits

0xab51,	// (0x0005ce82) aid_size_cell_ai1_link

0xab6b,	// (0x0005ce9c) popup_ai2_data_window_ParamLimits

0xab6b,	// (0x0005ce9c) popup_ai2_data_window

0xab89,	// (0x0005ceba) popup_ai2_link_window_ParamLimits

0xab89,	// (0x0005ceba) popup_ai2_link_window

0x9121,	// (0x0005b452) bg_popup_sub_pane_cp4_ParamLimits

0x9121,	// (0x0005b452) bg_popup_sub_pane_cp4

0xab9f,	// (0x0005ced0) grid_ai2_link_pane_ParamLimits

0xab9f,	// (0x0005ced0) grid_ai2_link_pane

0xabb6,	// (0x0005cee7) popup_ai2_link_window_g1_ParamLimits

0xabb6,	// (0x0005cee7) popup_ai2_link_window_g1

0xabc2,	// (0x0005cef3) popup_ai2_link_window_g2_ParamLimits

0xabc2,	// (0x0005cef3) popup_ai2_link_window_g2

0x0001,

0xf9b3,	// (0x00061ce4) popup_ai2_link_window_g_ParamLimits

0xf9b3,	// (0x00061ce4) popup_ai2_link_window_g

0xabd3,	// (0x0005cf04) ai2_mp_button_pane

0xabdb,	// (0x0005cf0c) ai2_mp_volume_pane

0x930c,	// (0x0005b63d) bg_popup_sub_pane_cp5_ParamLimits

0x930c,	// (0x0005b63d) bg_popup_sub_pane_cp5

0xabe3,	// (0x0005cf14) heading_ai2_gene_pane_ParamLimits

0xabe3,	// (0x0005cf14) heading_ai2_gene_pane

0xabef,	// (0x0005cf20) list_ai2_gene_pane_ParamLimits

0xabef,	// (0x0005cf20) list_ai2_gene_pane

0xac37,	// (0x0005cf68) cell_ai2_link_pane_ParamLimits

0xac37,	// (0x0005cf68) cell_ai2_link_pane

0xac4d,	// (0x0005cf7e) cell_ai2_link_pane_g1

0xed5d,	// (0x0006108e) grid_highlight_pane_cp7

0x6fa2,	// (0x000592d3) ai2_mp_volume_pane_g1

0xad20,	// (0x0005d051) ai2_mp_volume_pane_g2

0xac95,	// (0x0005cfc6) list_ai2_gene_pane_t1

0xad28,	// (0x0005d059) ai2_mp_volume_pane_g3

0x0002,

0xf9cc,	// (0x00061cfd) ai2_mp_volume_pane_g

0x6faa,	// (0x000592db) volume_small_pane_cp3

0xad30,	// (0x0005d061) aid_size_cell_ai2_button

0xad38,	// (0x0005d069) grid_ai2_button_pane

0xad41,	// (0x0005d072) cell_ai2_button_pane_ParamLimits

0xad41,	// (0x0005d072) cell_ai2_button_pane

0xed53,	// (0x00061084) cell_ai2_button_pane_g1

0xed5d,	// (0x0006108e) grid_highlight_pane_cp8

0xace0,	// (0x0005d011) ai2_gene_pane_t1_ParamLimits

0xace0,	// (0x0005d011) ai2_gene_pane_t1

0x6457,	// (0x00058788) aid_height_parent_landscape

0xa63c,	// (0x0005c96d) aid_height_set_list

0xa64d,	// (0x0005c97e) aid_size_parent

0xa968,	// (0x0005cc99) aid_size_cell_graphic_pane_ParamLimits

0xabff,	// (0x0005cf30) popup_ai2_data_window_g1_ParamLimits

0xabff,	// (0x0005cf30) popup_ai2_data_window_g1

0xac0b,	// (0x0005cf3c) ai2_news_ticker_pane_g1

0xac13,	// (0x0005cf44) ai2_news_ticker_pane_g2

0x0001,

0xf9b8,	// (0x00061ce9) ai2_news_ticker_pane_g

0xac1b,	// (0x0005cf4c) ai2_news_ticker_pane_t1

0xac29,	// (0x0005cf5a) ai2_news_ticker_pane_t2

0x0001,

0xf9bd,	// (0x00061cee) ai2_news_ticker_pane_t

0xac56,	// (0x0005cf87) heading_ai2_gene_pane_g1

0xac5e,	// (0x0005cf8f) heading_ai2_gene_pane_t1_ParamLimits

0xac5e,	// (0x0005cf8f) heading_ai2_gene_pane_t1

0xac73,	// (0x0005cfa4) list_highlight_pane_cp6

0xac7b,	// (0x0005cfac) ai2_gene_pane_ParamLimits

0xac7b,	// (0x0005cfac) ai2_gene_pane

0xaca3,	// (0x0005cfd4) list_ai2_gene_pane_t2

0x0001,

0xf9c2,	// (0x00061cf3) list_ai2_gene_pane_t

0xacb1,	// (0x0005cfe2) list_highlight_pane_cp8_ParamLimits

0xacb1,	// (0x0005cfe2) list_highlight_pane_cp8

0xacc2,	// (0x0005cff3) ai2_gene_pane_g1_ParamLimits

0xacc2,	// (0x0005cff3) ai2_gene_pane_g1

0xacd4,	// (0x0005d005) ai2_gene_pane_g2_ParamLimits

0xacd4,	// (0x0005d005) ai2_gene_pane_g2

0x0001,

0xf9c7,	// (0x00061cf8) ai2_gene_pane_g_ParamLimits

0xf9c7,	// (0x00061cf8) ai2_gene_pane_g

0xf41f,	// (0x00061750) scroll_pane_cp12

0x6414,	// (0x00058745) control_pane_t3_ParamLimits

0x6414,	// (0x00058745) control_pane_t3

0x8abd,	// (0x0005adee) status_small_pane_g8_ParamLimits

0x8abd,	// (0x0005adee) status_small_pane_g8

0x660f,	// (0x00058940) popup_find_window_ParamLimits

0x683c,	// (0x00058b6d) popup_note_image_window_ParamLimits

0x3c27,	// (0x00055f58) list_double2_graphic_pane_vc_g1_ParamLimits

0x3c27,	// (0x00055f58) list_double2_graphic_pane_vc_g1

0x9039,	// (0x0005b36a) list_double2_graphic_pane_vc_g2_ParamLimits

0x9039,	// (0x0005b36a) list_double2_graphic_pane_vc_g2

0x9045,	// (0x0005b376) list_double2_graphic_pane_vc_g3_ParamLimits

0x9045,	// (0x0005b376) list_double2_graphic_pane_vc_g3

0x0002,

0xf79e,	// (0x00061acf) list_double2_graphic_pane_vc_g_ParamLimits

0xf79e,	// (0x00061acf) list_double2_graphic_pane_vc_g

0x3c33,	// (0x00055f64) list_double2_graphic_pane_vc_t1_ParamLimits

0x3c33,	// (0x00055f64) list_double2_graphic_pane_vc_t1

0x9039,	// (0x0005b36a) list_single_heading_pane_vc_g1_ParamLimits

0x9039,	// (0x0005b36a) list_single_heading_pane_vc_g1

0x9045,	// (0x0005b376) list_single_heading_pane_vc_g2_ParamLimits

0x9045,	// (0x0005b376) list_single_heading_pane_vc_g2

0x0001,

0xf7bf,	// (0x00061af0) list_single_heading_pane_vc_g_ParamLimits

0xf7bf,	// (0x00061af0) list_single_heading_pane_vc_g

0x3c49,	// (0x00055f7a) list_single_heading_pane_vc_t1_ParamLimits

0x3c49,	// (0x00055f7a) list_single_heading_pane_vc_t1

0x3c5f,	// (0x00055f90) list_single_heading_pane_vc_t2_ParamLimits

0x3c5f,	// (0x00055f90) list_single_heading_pane_vc_t2

0x0001,

0xf7c4,	// (0x00061af5) list_single_heading_pane_vc_t_ParamLimits

0xf7c4,	// (0x00061af5) list_single_heading_pane_vc_t

0x3c71,	// (0x00055fa2) list_setting_number_pane_vc_g1_ParamLimits

0x3c71,	// (0x00055fa2) list_setting_number_pane_vc_g1

0x3c7d,	// (0x00055fae) list_setting_number_pane_vc_g2_ParamLimits

0x3c7d,	// (0x00055fae) list_setting_number_pane_vc_g2

0x0001,

0xf7c9,	// (0x00061afa) list_setting_number_pane_vc_g_ParamLimits

0xf7c9,	// (0x00061afa) list_setting_number_pane_vc_g

0x3c89,	// (0x00055fba) list_setting_number_pane_vc_t1_ParamLimits

0x3c89,	// (0x00055fba) list_setting_number_pane_vc_t1

0x3c9d,	// (0x00055fce) list_setting_number_pane_vc_t2_ParamLimits

0x3c9d,	// (0x00055fce) list_setting_number_pane_vc_t2

0x3cb9,	// (0x00055fea) list_setting_number_pane_vc_t3_ParamLimits

0x3cb9,	// (0x00055fea) list_setting_number_pane_vc_t3

0x0002,

0xf7ce,	// (0x00061aff) list_setting_number_pane_vc_t_ParamLimits

0xf7ce,	// (0x00061aff) list_setting_number_pane_vc_t

0x3ce5,	// (0x00056016) set_value_pane_vc_ParamLimits

0x3ce5,	// (0x00056016) set_value_pane_vc

0x9afb,	// (0x0005be2c) list_double2_graphic_pane_vc_ParamLimits

0x9afb,	// (0x0005be2c) list_double2_graphic_pane_vc

0x9afb,	// (0x0005be2c) list_double2_large_graphic_pane_vc_ParamLimits

0x9afb,	// (0x0005be2c) list_double2_large_graphic_pane_vc

0x9afb,	// (0x0005be2c) list_double2_pane_vc_ParamLimits

0x9afb,	// (0x0005be2c) list_double2_pane_vc

0x9afb,	// (0x0005be2c) list_double_graphic_heading_pane_vc_ParamLimits

0x9afb,	// (0x0005be2c) list_double_graphic_heading_pane_vc

0x9afb,	// (0x0005be2c) list_double_graphic_pane_vc_ParamLimits

0x9afb,	// (0x0005be2c) list_double_graphic_pane_vc

0x9afb,	// (0x0005be2c) list_double_heading_pane_vc_ParamLimits

0x9afb,	// (0x0005be2c) list_double_heading_pane_vc

0x9b0f,	// (0x0005be40) list_double_large_graphic_pane_vc_ParamLimits

0x9b0f,	// (0x0005be40) list_double_large_graphic_pane_vc

0x9afb,	// (0x0005be2c) list_double_number_pane_vc_ParamLimits

0x9afb,	// (0x0005be2c) list_double_number_pane_vc

0x9afb,	// (0x0005be2c) list_double_pane_vc_ParamLimits

0x9afb,	// (0x0005be2c) list_double_pane_vc

0x9afb,	// (0x0005be2c) list_double_time_pane_vc_ParamLimits

0x9afb,	// (0x0005be2c) list_double_time_pane_vc

0x9afb,	// (0x0005be2c) list_setting_number_pane_vc_ParamLimits

0x9afb,	// (0x0005be2c) list_setting_number_pane_vc

0x9afb,	// (0x0005be2c) list_setting_pane_vc_ParamLimits

0x9afb,	// (0x0005be2c) list_setting_pane_vc

0x9afb,	// (0x0005be2c) list_single_graphic_heading_pane_vc_ParamLimits

0x9afb,	// (0x0005be2c) list_single_graphic_heading_pane_vc

0x9afb,	// (0x0005be2c) list_single_heading_pane_vc_ParamLimits

0x9afb,	// (0x0005be2c) list_single_heading_pane_vc

0x9b31,	// (0x0005be62) list_single_number_heading_pane_vc_ParamLimits

0x9b31,	// (0x0005be62) list_single_number_heading_pane_vc

0x3d2e,	// (0x0005605f) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x3d2e,	// (0x0005605f) list_double_graphic_heading_pane_vc_g1

0x9039,	// (0x0005b36a) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x9039,	// (0x0005b36a) list_double_graphic_heading_pane_vc_g2

0x9045,	// (0x0005b376) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x9045,	// (0x0005b376) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9d3,	// (0x00061d04) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9d3,	// (0x00061d04) list_double_graphic_heading_pane_vc_g

0x3d3a,	// (0x0005606b) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x3d3a,	// (0x0005606b) list_double_graphic_heading_pane_vc_t1

0x3d50,	// (0x00056081) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x3d50,	// (0x00056081) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9da,	// (0x00061d0b) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9da,	// (0x00061d0b) list_double_graphic_heading_pane_vc_t

0x3c71,	// (0x00055fa2) list_setting_pane_vc_g1_ParamLimits

0x3c71,	// (0x00055fa2) list_setting_pane_vc_g1

0x3c7d,	// (0x00055fae) list_setting_pane_vc_g2_ParamLimits

0x3c7d,	// (0x00055fae) list_setting_pane_vc_g2

0x0001,

0xf7c9,	// (0x00061afa) list_setting_pane_vc_g_ParamLimits

0xf7c9,	// (0x00061afa) list_setting_pane_vc_g

0x3d6e,	// (0x0005609f) list_setting_pane_vc_t1_ParamLimits

0x3d6e,	// (0x0005609f) list_setting_pane_vc_t1

0x3d8a,	// (0x000560bb) list_setting_pane_vc_t2_ParamLimits

0x3d8a,	// (0x000560bb) list_setting_pane_vc_t2

0x0001,

0xfa08,	// (0x00061d39) list_setting_pane_vc_t_ParamLimits

0xfa08,	// (0x00061d39) list_setting_pane_vc_t

0x3ce5,	// (0x00056016) set_value_pane_cp_vc_ParamLimits

0x3ce5,	// (0x00056016) set_value_pane_cp_vc

0x9039,	// (0x0005b36a) list_single_number_heading_pane_vc_g1_ParamLimits

0x9039,	// (0x0005b36a) list_single_number_heading_pane_vc_g1

0x9045,	// (0x0005b376) list_single_number_heading_pane_vc_g2_ParamLimits

0x9045,	// (0x0005b376) list_single_number_heading_pane_vc_g2

0x0001,

0xf7bf,	// (0x00061af0) list_single_number_heading_pane_vc_g_ParamLimits

0xf7bf,	// (0x00061af0) list_single_number_heading_pane_vc_g

0x3da6,	// (0x000560d7) list_single_number_heading_pane_vc_t1_ParamLimits

0x3da6,	// (0x000560d7) list_single_number_heading_pane_vc_t1

0x3a85,	// (0x00055db6) list_single_number_heading_pane_vc_t2_ParamLimits

0x3a85,	// (0x00055db6) list_single_number_heading_pane_vc_t2

0x3a97,	// (0x00055dc8) list_single_number_heading_pane_vc_t3_ParamLimits

0x3a97,	// (0x00055dc8) list_single_number_heading_pane_vc_t3

0x0002,

0xfa0d,	// (0x00061d3e) list_single_number_heading_pane_vc_t_ParamLimits

0xfa0d,	// (0x00061d3e) list_single_number_heading_pane_vc_t

0x3c27,	// (0x00055f58) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x3c27,	// (0x00055f58) list_single_graphic_heading_pane_vc_g1

0x9039,	// (0x0005b36a) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x9039,	// (0x0005b36a) list_single_graphic_heading_pane_vc_g4

0x9045,	// (0x0005b376) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x9045,	// (0x0005b376) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf79e,	// (0x00061acf) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf79e,	// (0x00061acf) list_single_graphic_heading_pane_vc_g

0x3dbc,	// (0x000560ed) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x3dbc,	// (0x000560ed) list_single_graphic_heading_pane_vc_t1

0x3dd2,	// (0x00056103) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x3dd2,	// (0x00056103) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa14,	// (0x00061d45) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa14,	// (0x00061d45) list_single_graphic_heading_pane_vc_t

0x9039,	// (0x0005b36a) list_double2_pane_vc_g1_ParamLimits

0x9039,	// (0x0005b36a) list_double2_pane_vc_g1

0x9045,	// (0x0005b376) list_double2_pane_vc_g2_ParamLimits

0x9045,	// (0x0005b376) list_double2_pane_vc_g2

0x0001,

0xf7bf,	// (0x00061af0) list_double2_pane_vc_g_ParamLimits

0xf7bf,	// (0x00061af0) list_double2_pane_vc_g

0x3d18,	// (0x00056049) list_double2_pane_vc_t1_ParamLimits

0x3d18,	// (0x00056049) list_double2_pane_vc_t1

0x9b8c,	// (0x0005bebd) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x9b8c,	// (0x0005bebd) list_double2_large_graphic_pane_vc_g1

0x9039,	// (0x0005b36a) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x9039,	// (0x0005b36a) list_double2_large_graphic_pane_vc_g2

0x9045,	// (0x0005b376) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x9045,	// (0x0005b376) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa19,	// (0x00061d4a) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa19,	// (0x00061d4a) list_double2_large_graphic_pane_vc_g

0x3aa9,	// (0x00055dda) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x3aa9,	// (0x00055dda) list_double2_large_graphic_pane_vc_t1

0x3de4,	// (0x00056115) list_double_time_pane_vc_g1_ParamLimits

0x3de4,	// (0x00056115) list_double_time_pane_vc_g1

0x3df0,	// (0x00056121) list_double_time_pane_vc_g2_ParamLimits

0x3df0,	// (0x00056121) list_double_time_pane_vc_g2

0x0001,

0xfa20,	// (0x00061d51) list_double_time_pane_vc_g_ParamLimits

0xfa20,	// (0x00061d51) list_double_time_pane_vc_g

0x3dfc,	// (0x0005612d) list_double_time_pane_vc_t1_ParamLimits

0x3dfc,	// (0x0005612d) list_double_time_pane_vc_t1

0x3e26,	// (0x00056157) list_double_time_pane_vc_t2_ParamLimits

0x3e26,	// (0x00056157) list_double_time_pane_vc_t2

0x3e6f,	// (0x000561a0) list_double_time_pane_vc_t3_ParamLimits

0x3e6f,	// (0x000561a0) list_double_time_pane_vc_t3

0x3e81,	// (0x000561b2) list_double_time_pane_vc_t4_ParamLimits

0x3e81,	// (0x000561b2) list_double_time_pane_vc_t4

0x0003,

0xfa25,	// (0x00061d56) list_double_time_pane_vc_t_ParamLimits

0xfa25,	// (0x00061d56) list_double_time_pane_vc_t

0x9039,	// (0x0005b36a) list_double_pane_vc_g1_ParamLimits

0x9039,	// (0x0005b36a) list_double_pane_vc_g1

0x9045,	// (0x0005b376) list_double_pane_vc_g2_ParamLimits

0x9045,	// (0x0005b376) list_double_pane_vc_g2

0x0001,

0xf7bf,	// (0x00061af0) list_double_pane_vc_g_ParamLimits

0xf7bf,	// (0x00061af0) list_double_pane_vc_g

0x3e95,	// (0x000561c6) list_double_pane_vc_t1_ParamLimits

0x3e95,	// (0x000561c6) list_double_pane_vc_t1

0x3ea9,	// (0x000561da) list_double_pane_vc_t2_ParamLimits

0x3ea9,	// (0x000561da) list_double_pane_vc_t2

0x0001,

0xfa2e,	// (0x00061d5f) list_double_pane_vc_t_ParamLimits

0xfa2e,	// (0x00061d5f) list_double_pane_vc_t

0x9039,	// (0x0005b36a) list_double_number_pane_vc_g1_ParamLimits

0x9039,	// (0x0005b36a) list_double_number_pane_vc_g1

0x9045,	// (0x0005b376) list_double_number_pane_vc_g2_ParamLimits

0x9045,	// (0x0005b376) list_double_number_pane_vc_g2

0x0001,

0xf7bf,	// (0x00061af0) list_double_number_pane_vc_g_ParamLimits

0xf7bf,	// (0x00061af0) list_double_number_pane_vc_g

0x3d06,	// (0x00056037) list_double_number_pane_vc_t1_ParamLimits

0x3d06,	// (0x00056037) list_double_number_pane_vc_t1

0x3ebf,	// (0x000561f0) list_double_number_pane_vc_t2_ParamLimits

0x3ebf,	// (0x000561f0) list_double_number_pane_vc_t2

0x3ea9,	// (0x000561da) list_double_number_pane_vc_t3_ParamLimits

0x3ea9,	// (0x000561da) list_double_number_pane_vc_t3

0x0002,

0xfa33,	// (0x00061d64) list_double_number_pane_vc_t_ParamLimits

0xfa33,	// (0x00061d64) list_double_number_pane_vc_t

0x9b98,	// (0x0005bec9) list_double_large_graphic_pane_vc_g1_ParamLimits

0x9b98,	// (0x0005bec9) list_double_large_graphic_pane_vc_g1

0x9bba,	// (0x0005beeb) list_double_large_graphic_pane_vc_g2_ParamLimits

0x9bba,	// (0x0005beeb) list_double_large_graphic_pane_vc_g2

0x9bce,	// (0x0005beff) list_double_large_graphic_pane_vc_g3_ParamLimits

0x9bce,	// (0x0005beff) list_double_large_graphic_pane_vc_g3

0x3ed3,	// (0x00056204) list_double_large_graphic_pane_vc_g4_ParamLimits

0x3ed3,	// (0x00056204) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa3a,	// (0x00061d6b) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa3a,	// (0x00061d6b) list_double_large_graphic_pane_vc_g

0x3edf,	// (0x00056210) list_double_large_graphic_pane_vc_t1_ParamLimits

0x3edf,	// (0x00056210) list_double_large_graphic_pane_vc_t1

0x3efb,	// (0x0005622c) list_double_large_graphic_pane_vc_t2_ParamLimits

0x3efb,	// (0x0005622c) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa43,	// (0x00061d74) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa43,	// (0x00061d74) list_double_large_graphic_pane_vc_t

0x9039,	// (0x0005b36a) list_double_heading_pane_vc_g1_ParamLimits

0x9039,	// (0x0005b36a) list_double_heading_pane_vc_g1

0x9045,	// (0x0005b376) list_double_heading_pane_vc_g2_ParamLimits

0x9045,	// (0x0005b376) list_double_heading_pane_vc_g2

0x0001,

0xf7bf,	// (0x00061af0) list_double_heading_pane_vc_g_ParamLimits

0xf7bf,	// (0x00061af0) list_double_heading_pane_vc_g

0x3f1b,	// (0x0005624c) list_double_heading_pane_vc_t1_ParamLimits

0x3f1b,	// (0x0005624c) list_double_heading_pane_vc_t1

0x3f2d,	// (0x0005625e) list_double_heading_pane_vc_t2_ParamLimits

0x3f2d,	// (0x0005625e) list_double_heading_pane_vc_t2

0x0001,

0xfa48,	// (0x00061d79) list_double_heading_pane_vc_t_ParamLimits

0xfa48,	// (0x00061d79) list_double_heading_pane_vc_t

0x3f45,	// (0x00056276) list_double_graphic_pane_vc_g1_ParamLimits

0x3f45,	// (0x00056276) list_double_graphic_pane_vc_g1

0x3f51,	// (0x00056282) list_double_graphic_pane_vc_g2_ParamLimits

0x3f51,	// (0x00056282) list_double_graphic_pane_vc_g2

0x9039,	// (0x0005b36a) list_double_graphic_pane_vc_g3_ParamLimits

0x9039,	// (0x0005b36a) list_double_graphic_pane_vc_g3

0x0003,

0xfa4d,	// (0x00061d7e) list_double_graphic_pane_vc_g_ParamLimits

0xfa4d,	// (0x00061d7e) list_double_graphic_pane_vc_g

0x3f6e,	// (0x0005629f) list_double_graphic_pane_vc_t1_ParamLimits

0x3f6e,	// (0x0005629f) list_double_graphic_pane_vc_t1

0x3f98,	// (0x000562c9) list_double_graphic_pane_vc_t2_ParamLimits

0x3f98,	// (0x000562c9) list_double_graphic_pane_vc_t2

0x0001,

0xfa56,	// (0x00061d87) list_double_graphic_pane_vc_t_ParamLimits

0xfa56,	// (0x00061d87) list_double_graphic_pane_vc_t

0x4e56,	// (0x00057187) aid_size_cell_fastswap

0x4e5e,	// (0x0005718f) aid_size_cell_touch_ParamLimits

0x4e5e,	// (0x0005718f) aid_size_cell_touch

0x50c9,	// (0x000573fa) popup_fast_swap_wide_window_ParamLimits

0x50c9,	// (0x000573fa) popup_fast_swap_wide_window

0x51e7,	// (0x00057518) touch_pane_ParamLimits

0x51e7,	// (0x00057518) touch_pane

0xf475,	// (0x000617a6) button_value_adjust_pane_cp2

0x3293,	// (0x000555c4) button_value_adjust_pane_cp4

0x329b,	// (0x000555cc) form_field_data_pane_cp2

0x5b35,	// (0x00057e66) form_field_data_wide_pane_cp2

0x354e,	// (0x0005587f) bg_scroll_pane_ParamLimits

0x5f42,	// (0x00058273) scroll_handle_pane_ParamLimits

0x5f56,	// (0x00058287) scroll_sc2_down_pane_ParamLimits

0x5f56,	// (0x00058287) scroll_sc2_down_pane

0x357f,	// (0x000558b0) scroll_sc2_up_pane_ParamLimits

0x357f,	// (0x000558b0) scroll_sc2_up_pane

0xb469,	// (0x0005d79a) grid_wheel_folder_pane_g1_ParamLimits

0xb469,	// (0x0005d79a) grid_wheel_folder_pane_g1

0x61e2,	// (0x00058513) clock_nsta_pane_cp2_ParamLimits

0x61e2,	// (0x00058513) clock_nsta_pane_cp2

0x8840,	// (0x0005ab71) listscroll_midp_pane_ParamLimits

0x884c,	// (0x0005ab7d) midp_canvas_pane

0x8b37,	// (0x0005ae68) nsta_clock_indic_pane

0x8b6b,	// (0x0005ae9c) listscroll_form_pane_vc

0x8b73,	// (0x0005aea4) listscroll_set_pane_vc_ParamLimits

0x8b73,	// (0x0005aea4) listscroll_set_pane_vc

0x8c6a,	// (0x0005af9b) clock_nsta_pane

0x8ce7,	// (0x0005b018) indicator_nsta_pane

0x8fd3,	// (0x0005b304) bg_popup_sub_pane_cp2_ParamLimits

0x8fe7,	// (0x0005b318) find_pane_cp2_ParamLimits

0x8fe7,	// (0x0005b318) find_pane_cp2

0x8ffd,	// (0x0005b32e) grid_toobar_pane_ParamLimits

0x90f5,	// (0x0005b426) list_form_gen_pane_vc_ParamLimits

0x90f5,	// (0x0005b426) list_form_gen_pane_vc

0x910b,	// (0x0005b43c) scroll_pane_cp8_vc_ParamLimits

0x910b,	// (0x0005b43c) scroll_pane_cp8_vc

0x9187,	// (0x0005b4b8) data_form_wide_pane_vc_ParamLimits

0x9187,	// (0x0005b4b8) data_form_wide_pane_vc

0x9193,	// (0x0005b4c4) form_field_data_wide_pane_vc_g1

0x919b,	// (0x0005b4cc) form_field_data_wide_pane_vc_t1_ParamLimits

0x919b,	// (0x0005b4cc) form_field_data_wide_pane_vc_t1

0xf489,	// (0x000617ba) input_focus_pane_cp6_vc_ParamLimits

0xf489,	// (0x000617ba) input_focus_pane_cp6_vc

0x9497,	// (0x0005b7c8) list_midp_pane_ParamLimits

0x94a3,	// (0x0005b7d4) scroll_pane_cp16_ParamLimits

0x94a3,	// (0x0005b7d4) scroll_pane_cp16

0x950d,	// (0x0005b83e) button_value_adjust_pane_ParamLimits

0x950d,	// (0x0005b83e) button_value_adjust_pane

0xa65f,	// (0x0005c990) button_value_adjust_pane_cp6_ParamLimits

0xa65f,	// (0x0005c990) button_value_adjust_pane_cp6

0xa7a7,	// (0x0005cad8) settings_code_pane_cp_ParamLimits

0xa7a7,	// (0x0005cad8) settings_code_pane_cp

0xed53,	// (0x00061084) cell_touch_pane_g1

0xed53,	// (0x00061084) cell_touch_pane_g2

0x0001,

0xf6e3,	// (0x00061a14) cell_touch_pane_g

0xad53,	// (0x0005d084) cell_touch_pane_cp_ParamLimits

0xad53,	// (0x0005d084) cell_touch_pane_cp

0xad63,	// (0x0005d094) cell_touch_pane_ParamLimits

0xad63,	// (0x0005d094) cell_touch_pane

0xed53,	// (0x00061084) scroll_sc2_down_pane_g1

0xed53,	// (0x00061084) scroll_sc2_up_pane_g1

0xed5d,	// (0x0006108e) bg_set_opt_pane_cp4_vc

0xad74,	// (0x0005d0a5) list_set_graphic_pane_vc_g1_ParamLimits

0xad74,	// (0x0005d0a5) list_set_graphic_pane_vc_g1

0xad80,	// (0x0005d0b1) list_set_graphic_pane_vc_g2_ParamLimits

0xad80,	// (0x0005d0b1) list_set_graphic_pane_vc_g2

0x0001,

0xf9df,	// (0x00061d10) list_set_graphic_pane_vc_g_ParamLimits

0xf9df,	// (0x00061d10) list_set_graphic_pane_vc_g

0xad8c,	// (0x0005d0bd) text_primary_small_cp13_vc_ParamLimits

0xad8c,	// (0x0005d0bd) text_primary_small_cp13_vc

0xada4,	// (0x0005d0d5) list_set_graphic_pane_vc_ParamLimits

0xada4,	// (0x0005d0d5) list_set_graphic_pane_vc

0xed5d,	// (0x0006108e) input_focus_pane_cp2_vc

0xed53,	// (0x00061084) setting_code_pane_vc_g1

0xedc2,	// (0x000610f3) setting_code_pane_vc_t1

0xadb7,	// (0x0005d0e8) set_text_pane_vc_t1_ParamLimits

0xadb7,	// (0x0005d0e8) set_text_pane_vc_t1

0xed5d,	// (0x0006108e) input_focus_pane_cp1_vc

0xadd8,	// (0x0005d109) list_set_text_pane_vc

0xed53,	// (0x00061084) setting_text_pane_vc_g1

0xed5d,	// (0x0006108e) bg_set_opt_pane_cp2_vc

0xedb9,	// (0x000610ea) setting_slider_graphic_pane_vc_g1

0xade2,	// (0x0005d113) setting_slider_graphic_pane_vc_t1

0xadf4,	// (0x0005d125) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9e4,	// (0x00061d15) setting_slider_graphic_pane_vc_t

0xae06,	// (0x0005d137) slider_set_pane_cp_vc

0xae10,	// (0x0005d141) slider_set_pane_vc_g1

0xae19,	// (0x0005d14a) slider_set_pane_vc_g2

0x0006,

0xf9e9,	// (0x00061d1a) slider_set_pane_vc_g

0xf4e1,	// (0x00061812) set_opt_bg_pane_g1_copy1

0xf4e9,	// (0x0006181a) set_opt_bg_pane_g2_copy1

0xae45,	// (0x0005d176) set_opt_bg_pane_g3_copy1

0xf4f9,	// (0x0006182a) set_opt_bg_pane_g4_copy1

0xf501,	// (0x00061832) set_opt_bg_pane_g5_copy1

0xf509,	// (0x0006183a) set_opt_bg_pane_g6_copy1

0xae4f,	// (0x0005d180) set_opt_bg_pane_g7_copy1

0xae59,	// (0x0005d18a) set_opt_bg_pane_g8_copy1

0xae63,	// (0x0005d194) set_opt_bg_pane_g9_copy1

0xed5d,	// (0x0006108e) bg_set_opt_pane_cp_vc

0xae6d,	// (0x0005d19e) setting_slider_pane_vc_t1

0xae7c,	// (0x0005d1ad) setting_slider_pane_vc_t2

0xae8e,	// (0x0005d1bf) setting_slider_pane_vc_t3

0x0002,

0xf9f8,	// (0x00061d29) setting_slider_pane_vc_t

0xaea0,	// (0x0005d1d1) slider_set_pane_vc

0x6c1a,	// (0x00058f4b) volume_set_pane_vc_g1

0x6c23,	// (0x00058f54) volume_set_pane_vc_g2

0x6c2c,	// (0x00058f5d) volume_set_pane_vc_g3

0x6c35,	// (0x00058f66) volume_set_pane_vc_g4

0x6c3e,	// (0x00058f6f) volume_set_pane_vc_g5

0x6c47,	// (0x00058f78) volume_set_pane_vc_g6

0x6c50,	// (0x00058f81) volume_set_pane_vc_g7

0x6c59,	// (0x00058f8a) volume_set_pane_vc_g8

0x6c62,	// (0x00058f93) volume_set_pane_vc_g9

0x6c6b,	// (0x00058f9c) volume_set_pane_vc_g10

0x0009,

0xf896,	// (0x00061bc7) volume_set_pane_vc_g

0xaeaa,	// (0x0005d1db) volume_set_pane_vc

0xaeb4,	// (0x0005d1e5) button_value_adjust_pane_cp1_vc

0xaebe,	// (0x0005d1ef) list_highlight_pane_cp2_vc

0xaec7,	// (0x0005d1f8) list_set_pane_vc_ParamLimits

0xaec7,	// (0x0005d1f8) list_set_pane_vc

0xaf35,	// (0x0005d266) main_pane_set_vc_t1_ParamLimits

0xaf35,	// (0x0005d266) main_pane_set_vc_t1

0xaf4a,	// (0x0005d27b) main_pane_set_vc_t2_ParamLimits

0xaf4a,	// (0x0005d27b) main_pane_set_vc_t2

0xaf5c,	// (0x0005d28d) main_pane_set_vc_t3_ParamLimits

0xaf5c,	// (0x0005d28d) main_pane_set_vc_t3

0xaf70,	// (0x0005d2a1) main_pane_set_vc_t4_ParamLimits

0xaf70,	// (0x0005d2a1) main_pane_set_vc_t4

0x0003,

0xf9ff,	// (0x00061d30) main_pane_set_vc_t_ParamLimits

0xf9ff,	// (0x00061d30) main_pane_set_vc_t

0xaf84,	// (0x0005d2b5) setting_code_pane_vc_ParamLimits

0xaf84,	// (0x0005d2b5) setting_code_pane_vc

0xaf95,	// (0x0005d2c6) setting_slider_graphic_pane_vc

0xaf95,	// (0x0005d2c6) setting_slider_pane_vc

0xaf95,	// (0x0005d2c6) setting_text_pane_vc

0xaf95,	// (0x0005d2c6) setting_volume_pane_vc

0xaf9f,	// (0x0005d2d0) scroll_pane_cp121_vc

0xf463,	// (0x00061794) set_content_pane_vc

0xafa7,	// (0x0005d2d8) button_value_adjust_pane_g1

0xafb0,	// (0x0005d2e1) button_value_adjust_pane_g2

0x0001,

0xfa5b,	// (0x00061d8c) button_value_adjust_pane_g

0xafb9,	// (0x0005d2ea) form_field_slider_wide_pane_vc_t1_ParamLimits

0xafb9,	// (0x0005d2ea) form_field_slider_wide_pane_vc_t1

0xafcb,	// (0x0005d2fc) form_field_slider_wide_pane_vc_t2_ParamLimits

0xafcb,	// (0x0005d2fc) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa60,	// (0x00061d91) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa60,	// (0x00061d91) form_field_slider_wide_pane_vc_t

0xeede,	// (0x0006120f) input_focus_pane_cp10_vc_ParamLimits

0xeede,	// (0x0006120f) input_focus_pane_cp10_vc

0xaff7,	// (0x0005d328) slider_cont_pane_cp1_vc_ParamLimits

0xaff7,	// (0x0005d328) slider_cont_pane_cp1_vc

0xb009,	// (0x0005d33a) slider_form_pane_g1_cp2

0xae19,	// (0x0005d14a) slider_form_pane_g2_cp2

0xb036,	// (0x0005d367) form_field_slider_pane_vc_t3

0xb044,	// (0x0005d375) form_field_slider_pane_vc_t4

0xb052,	// (0x0005d383) slider_form_pane_vc_ParamLimits

0xb052,	// (0x0005d383) slider_form_pane_vc

0xb05f,	// (0x0005d390) form_field_slider_pane_vc_t1_ParamLimits

0xb05f,	// (0x0005d390) form_field_slider_pane_vc_t1

0xafcb,	// (0x0005d2fc) form_field_slider_pane_vc_t2_ParamLimits

0xafcb,	// (0x0005d2fc) form_field_slider_pane_vc_t2

0x0001,

0xfa72,	// (0x00061da3) form_field_slider_pane_vc_t_ParamLimits

0xfa72,	// (0x00061da3) form_field_slider_pane_vc_t

0xeede,	// (0x0006120f) input_focus_pane_cp9_vc_ParamLimits

0xeede,	// (0x0006120f) input_focus_pane_cp9_vc

0xb075,	// (0x0005d3a6) slider_cont_pane_vc_ParamLimits

0xb075,	// (0x0005d3a6) slider_cont_pane_vc

0xb089,	// (0x0005d3ba) list_form_graphic_pane_cp_vc_ParamLimits

0xb089,	// (0x0005d3ba) list_form_graphic_pane_cp_vc

0x9193,	// (0x0005b4c4) form_field_popup_wide_pane_vc_g1

0xb09e,	// (0x0005d3cf) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb09e,	// (0x0005d3cf) form_field_popup_wide_pane_vc_t1

0xf489,	// (0x000617ba) input_focus_pane_cp8_vc_ParamLimits

0xf489,	// (0x000617ba) input_focus_pane_cp8_vc

0xb0e3,	// (0x0005d414) list_form_wide_pane_vc_ParamLimits

0xb0e3,	// (0x0005d414) list_form_wide_pane_vc

0xb0ef,	// (0x0005d420) list_form_graphic_pane_vc_g1

0xb0f7,	// (0x0005d428) list_form_graphic_pane_vc_t1_ParamLimits

0xb0f7,	// (0x0005d428) list_form_graphic_pane_vc_t1

0xedab,	// (0x000610dc) list_highlight_pane_cp5_vc_ParamLimits

0xedab,	// (0x000610dc) list_highlight_pane_cp5_vc

0xb113,	// (0x0005d444) list_form_graphic_pane_vc_ParamLimits

0xb113,	// (0x0005d444) list_form_graphic_pane_vc

0x9193,	// (0x0005b4c4) form_field_popup_pane_vc_g1

0xb129,	// (0x0005d45a) form_field_popup_pane_vc_t1_ParamLimits

0xb129,	// (0x0005d45a) form_field_popup_pane_vc_t1

0xf489,	// (0x000617ba) input_focus_pane_cp7_vc_ParamLimits

0xf489,	// (0x000617ba) input_focus_pane_cp7_vc

0xb140,	// (0x0005d471) list_form_pane_vc_ParamLimits

0xb140,	// (0x0005d471) list_form_pane_vc

0xb14c,	// (0x0005d47d) data_form_pane_vc_t1_ParamLimits

0xb14c,	// (0x0005d47d) data_form_pane_vc_t1

0xf4e1,	// (0x00061812) input_focus_pane_vc_g1

0xf4e9,	// (0x0006181a) input_focus_pane_vc_g2

0xf4f1,	// (0x00061822) input_focus_pane_vc_g3

0xf4f9,	// (0x0006182a) input_focus_pane_vc_g4

0xf501,	// (0x00061832) input_focus_pane_vc_g5

0xf509,	// (0x0006183a) input_focus_pane_vc_g6

0xf511,	// (0x00061842) input_focus_pane_vc_g7

0xf519,	// (0x0006184a) input_focus_pane_vc_g8

0xf521,	// (0x00061852) input_focus_pane_vc_g9

0xed53,	// (0x00061084) input_focus_pane_vc_g10

0x0009,

0xf66c,	// (0x0006199d) input_focus_pane_vc_g

0x9187,	// (0x0005b4b8) data_form_pane_vc_ParamLimits

0x9187,	// (0x0005b4b8) data_form_pane_vc

0x9193,	// (0x0005b4c4) form_field_data_pane_vc_g1

0xb169,	// (0x0005d49a) form_field_data_pane_vc_t1_ParamLimits

0xb169,	// (0x0005d49a) form_field_data_pane_vc_t1

0xf489,	// (0x000617ba) input_focus_pane_vc_ParamLimits

0xf489,	// (0x000617ba) input_focus_pane_vc

0xb183,	// (0x0005d4b4) button_value_adjust_pane_cp3_vc

0xb18b,	// (0x0005d4bc) button_value_adjust_pane_cp5_vc

0xb193,	// (0x0005d4c4) form_field_data_pane_vc_ParamLimits

0xb193,	// (0x0005d4c4) form_field_data_pane_vc

0xb1ae,	// (0x0005d4df) form_field_data_pane_vc_cp2

0xb1b6,	// (0x0005d4e7) form_field_data_wide_pane_vc_ParamLimits

0xb1b6,	// (0x0005d4e7) form_field_data_wide_pane_vc

0xb1d0,	// (0x0005d501) form_field_data_wide_pane_vc_cp2

0xb1d8,	// (0x0005d509) form_field_popup_pane_vc_ParamLimits

0xb1d8,	// (0x0005d509) form_field_popup_pane_vc

0xb1f3,	// (0x0005d524) form_field_popup_wide_pane_vc_ParamLimits

0xb1f3,	// (0x0005d524) form_field_popup_wide_pane_vc

0xb20d,	// (0x0005d53e) form_field_slider_pane_vc_ParamLimits

0xb20d,	// (0x0005d53e) form_field_slider_pane_vc

0xb220,	// (0x0005d551) form_field_slider_wide_pane_vc_ParamLimits

0xb220,	// (0x0005d551) form_field_slider_wide_pane_vc

0xb233,	// (0x0005d564) grid_touch_1_pane_ParamLimits

0xb233,	// (0x0005d564) grid_touch_1_pane

0xb23f,	// (0x0005d570) grid_touch_2_pane_ParamLimits

0xb23f,	// (0x0005d570) grid_touch_2_pane

0x8b02,	// (0x0005ae33) touch_pane_g1_ParamLimits

0x8b02,	// (0x0005ae33) touch_pane_g1

0xb259,	// (0x0005d58a) cell_app_pane_cp_wide_ParamLimits

0xb259,	// (0x0005d58a) cell_app_pane_cp_wide

0xb26a,	// (0x0005d59b) grid_popup_fast_wide_pane_ParamLimits

0xb26a,	// (0x0005d59b) grid_popup_fast_wide_pane

0xb27e,	// (0x0005d5af) scroll_pane_cp19_ParamLimits

0xb27e,	// (0x0005d5af) scroll_pane_cp19

0xed5d,	// (0x0006108e) bg_popup_window_pane_cp20

0xb292,	// (0x0005d5c3) listscroll_popup_fast_wide_pane

0xb29a,	// (0x0005d5cb) grid_indicator_nsta_pane

0xb2ac,	// (0x0005d5dd) clock_nsta_pane_g1

0xb2b5,	// (0x0005d5e6) clock_nsta_pane_t1

0xb2d1,	// (0x0005d602) cell_indicator_nsta_pane_ParamLimits

0xb2d1,	// (0x0005d602) cell_indicator_nsta_pane

0xb306,	// (0x0005d637) cell_indicator_nsta_pane_g1

0xb314,	// (0x0005d645) cell_indicator_nsta_pane_g2

0x0001,

0xfa83,	// (0x00061db4) cell_indicator_nsta_pane_g

0xb327,	// (0x0005d658) clock_nsta_pane_cp

0xb330,	// (0x0005d661) indicator_nsta_pane_cp

0xb33a,	// (0x0005d66b) nsta_clock_indic_pane_g1

0xede7,	// (0x00061118) grid_indicator_pane

0x3671,	// (0x000559a2) scroll_pane_cp29

0x6131,	// (0x00058462) indicator_nsta_pane_cp2_ParamLimits

0x6131,	// (0x00058462) indicator_nsta_pane_cp2

0xedab,	// (0x000610dc) main_apps_wheel_pane

0x9374,	// (0x0005b6a5) form_midp_field_text_pane_ParamLimits

0x94c3,	// (0x0005b7f4) scroll_bar_cp050_ParamLimits

0xb393,	// (0x0005d6c4) cell_indicator_pane_ParamLimits

0xb393,	// (0x0005d6c4) cell_indicator_pane

0xb3ab,	// (0x0005d6dc) cell_indicator_pane_g1

0xb3b5,	// (0x0005d6e6) grid_wheel_folder_pane_ParamLimits

0xb3b5,	// (0x0005d6e6) grid_wheel_folder_pane

0xb3c9,	// (0x0005d6fa) list_wheel_apps_pane_ParamLimits

0xb3c9,	// (0x0005d6fa) list_wheel_apps_pane

0xb3dc,	// (0x0005d70d) main_apps_wheel_pane_g1_ParamLimits

0xb3dc,	// (0x0005d70d) main_apps_wheel_pane_g1

0xb3f8,	// (0x0005d729) main_apps_wheel_pane_g2_ParamLimits

0xb3f8,	// (0x0005d729) main_apps_wheel_pane_g2

0x0001,

0xfa9f,	// (0x00061dd0) main_apps_wheel_pane_g_ParamLimits

0xfa9f,	// (0x00061dd0) main_apps_wheel_pane_g

0xb414,	// (0x0005d745) main_apps_wheel_pane_t1_ParamLimits

0xb414,	// (0x0005d745) main_apps_wheel_pane_t1

0xb43d,	// (0x0005d76e) list_wheel_apps_pane_g1

0xb445,	// (0x0005d776) list_wheel_apps_pane_g2

0xb44d,	// (0x0005d77e) list_wheel_apps_pane_g3

0xb455,	// (0x0005d786) list_wheel_apps_pane_g4

0xb45f,	// (0x0005d790) list_wheel_apps_pane_g5

0x0004,

0xfaa4,	// (0x00061dd5) list_wheel_apps_pane_g

0x86b4,	// (0x0005a9e5) navi_icon_text_pane

0x8b9b,	// (0x0005aecc) aid_fill_nsta

0xb480,	// (0x0005d7b1) navi_icon_text_pane_g1

0xb48c,	// (0x0005d7bd) navi_icon_text_pane_t1

0x854b,	// (0x0005a87c) list_set_graphic_pane_t1_ParamLimits

0x854b,	// (0x0005a87c) list_set_graphic_pane_t1

0x9df3,	// (0x0005c124) popup_midp_note_alarm_window_t6_ParamLimits

0x9df3,	// (0x0005c124) popup_midp_note_alarm_window_t6

0x9e05,	// (0x0005c136) popup_midp_note_alarm_window_t7_ParamLimits

0x9e05,	// (0x0005c136) popup_midp_note_alarm_window_t7

0x9e17,	// (0x0005c148) popup_midp_note_alarm_window_t8_ParamLimits

0x9e17,	// (0x0005c148) popup_midp_note_alarm_window_t8

0x9e29,	// (0x0005c15a) popup_midp_note_alarm_window_t9_ParamLimits

0x9e29,	// (0x0005c15a) popup_midp_note_alarm_window_t9

0x9e3b,	// (0x0005c16c) popup_midp_note_alarm_window_t10_ParamLimits

0x9e3b,	// (0x0005c16c) popup_midp_note_alarm_window_t10

0x9e4d,	// (0x0005c17e) popup_midp_note_alarm_window_t11_ParamLimits

0x9e4d,	// (0x0005c17e) popup_midp_note_alarm_window_t11

0x9e5f,	// (0x0005c190) scroll_pane_cp17_ParamLimits

0x9e5f,	// (0x0005c190) scroll_pane_cp17

0x6c1a,	// (0x00058f4b) volume_small_pane_cp_g1

0x6fb3,	// (0x000592e4) volume_small_pane_cp_g2

0x6fbc,	// (0x000592ed) volume_small_pane_cp_g3

0x6fc5,	// (0x000592f6) volume_small_pane_cp_g4

0x6fce,	// (0x000592ff) volume_small_pane_cp_g5

0x6fd7,	// (0x00059308) volume_small_pane_cp_g6

0x6fe0,	// (0x00059311) volume_small_pane_cp_g7

0x6fe9,	// (0x0005931a) volume_small_pane_cp_g8

0x6ff2,	// (0x00059323) volume_small_pane_cp_g9

0x6ffb,	// (0x0005932c) volume_small_pane_cp_g10

0x8916,	// (0x0005ac47) midp_ticker_pane_g1_ParamLimits

0x8922,	// (0x0005ac53) midp_ticker_pane_g2_ParamLimits

0xf738,	// (0x00061a69) midp_ticker_pane_g_ParamLimits

0x892e,	// (0x0005ac5f) midp_ticker_pane_t1_ParamLimits

0x8bb1,	// (0x0005aee2) aid_fill_nsta_2

0x94af,	// (0x0005b7e0) list_form2_midp_pane

0xa7ee,	// (0x0005cb1f) midp_editing_number_pane_ParamLimits

0xa7fd,	// (0x0005cb2e) midp_ticker_pane_ParamLimits

0xb49e,	// (0x0005d7cf) form2_midp_field_pane

0xb4c2,	// (0x0005d7f3) scroll_pane_cp51

0xb4e2,	// (0x0005d813) form2_midp_button_pane_ParamLimits

0xb4e2,	// (0x0005d813) form2_midp_button_pane

0xb4f4,	// (0x0005d825) form2_midp_content_pane_ParamLimits

0xb4f4,	// (0x0005d825) form2_midp_content_pane

0xb50e,	// (0x0005d83f) form2_midp_field_choice_group_pane

0xb516,	// (0x0005d847) form2_midp_field_pane_g1

0xb51e,	// (0x0005d84f) form2_midp_field_pane_g2

0xb526,	// (0x0005d857) form2_midp_field_pane_g3

0xb52e,	// (0x0005d85f) form2_midp_field_pane_g4

0x0003,

0xfac9,	// (0x00061dfa) form2_midp_field_pane_g

0xb536,	// (0x0005d867) form2_midp_gauge_slider_pane

0xb53e,	// (0x0005d86f) form2_midp_gauge_wait_pane

0xb546,	// (0x0005d877) form2_midp_image_pane_ParamLimits

0xb546,	// (0x0005d877) form2_midp_image_pane

0xb561,	// (0x0005d892) form2_midp_label_pane_ParamLimits

0xb561,	// (0x0005d892) form2_midp_label_pane

0xb580,	// (0x0005d8b1) form2_midp_label_pane_cp_ParamLimits

0xb580,	// (0x0005d8b1) form2_midp_label_pane_cp

0xb5a1,	// (0x0005d8d2) form2_midp_string_pane_ParamLimits

0xb5a1,	// (0x0005d8d2) form2_midp_string_pane

0x7004,	// (0x00059335) form2_midp_text_pane_ParamLimits

0x7004,	// (0x00059335) form2_midp_text_pane

0xb5b3,	// (0x0005d8e4) form2_midp_time_pane

0xb5c3,	// (0x0005d8f4) input_focus_pane_cp51_ParamLimits

0xb5c3,	// (0x0005d8f4) input_focus_pane_cp51

0xb5db,	// (0x0005d90c) form2_midp_label_pane_t1_ParamLimits

0xb5db,	// (0x0005d90c) form2_midp_label_pane_t1

0x7027,	// (0x00059358) form2_mdip_text_pane_t1_ParamLimits

0x7027,	// (0x00059358) form2_mdip_text_pane_t1

0x3fb6,	// (0x000562e7) form2_midp_time_pane_t1

0xb629,	// (0x0005d95a) form2_midp_gauge_slider_pane_t1

0xb63b,	// (0x0005d96c) form2_midp_gauge_slider_pane_t2

0xb64d,	// (0x0005d97e) form2_midp_gauge_slider_pane_t3

0x0002,

0xfad2,	// (0x00061e03) form2_midp_gauge_slider_pane_t

0xb65f,	// (0x0005d990) form2_midp_slider_pane

0xb66b,	// (0x0005d99c) form2_midp_gauge_wait_pane_t1

0xb679,	// (0x0005d9aa) form2_midp_wait_pane_ParamLimits

0xb679,	// (0x0005d9aa) form2_midp_wait_pane

0xb6a4,	// (0x0005d9d5) list_single_2graphic_pane_cp4_ParamLimits

0xb6a4,	// (0x0005d9d5) list_single_2graphic_pane_cp4

0x91f0,	// (0x0005b521) list_single_midp_graphic_pane_cp_ParamLimits

0x91f0,	// (0x0005b521) list_single_midp_graphic_pane_cp

0xed5d,	// (0x0006108e) list_highlight_pane_cp20

0xb6bd,	// (0x0005d9ee) list_single_2graphic_pane_g1_cp4

0xac56,	// (0x0005cf87) list_single_2graphic_pane_g2_cp4

0xb6c5,	// (0x0005d9f6) list_single_2graphic_pane_t1_cp4

0xedab,	// (0x000610dc) list_highlight_pane_cp21

0xb6d4,	// (0x0005da05) list_single_midp_graphic_pane_g4_cp

0xb6e3,	// (0x0005da14) list_single_midp_graphic_pane_t1_cp

0xb6f8,	// (0x0005da29) form2_mdip_string_pane_t1_ParamLimits

0xb6f8,	// (0x0005da29) form2_mdip_string_pane_t1

0xed5d,	// (0x0006108e) bg_wml_button_pane_cp2

0xed53,	// (0x00061084) form2_midp_image_pane_g1

0x5884,	// (0x00057bb5) list_double_large_graphic_pane_g5_ParamLimits

0x5884,	// (0x00057bb5) list_double_large_graphic_pane_g5

0x8840,	// (0x0005ab71) midp_form_pane_ParamLimits

0xedab,	// (0x000610dc) main_apps_wheel_pane_ParamLimits

0x6864,	// (0x00058b95) popup_preview_window_ParamLimits

0x6864,	// (0x00058b95) popup_preview_window

0x6a4b,	// (0x00058d7c) popup_touch_info_window_ParamLimits

0x6a4b,	// (0x00058d7c) popup_touch_info_window

0x6a6d,	// (0x00058d9e) popup_touch_menu_window_ParamLimits

0x6a6d,	// (0x00058d9e) popup_touch_menu_window

0xed49,	// (0x0006107a) bg_popup_sub_pane_cp6

0xb794,	// (0x0005dac5) list_touch_menu_pane

0xb79c,	// (0x0005dacd) list_single_touch_menu_pane_ParamLimits

0xb79c,	// (0x0005dacd) list_single_touch_menu_pane

0xb7b4,	// (0x0005dae5) list_single_touch_menu_pane_t1

0xedab,	// (0x000610dc) bg_popup_sub_pane_cp7_ParamLimits

0xedab,	// (0x000610dc) bg_popup_sub_pane_cp7

0xb7c2,	// (0x0005daf3) heading_sub_pane

0xb7ca,	// (0x0005dafb) list_touch_info_pane_ParamLimits

0xb7ca,	// (0x0005dafb) list_touch_info_pane

0xb7d9,	// (0x0005db0a) list_single_touch_info_pane_ParamLimits

0xb7d9,	// (0x0005db0a) list_single_touch_info_pane

0xb7eb,	// (0x0005db1c) list_single_touch_info_pane_t1

0xb7f9,	// (0x0005db2a) list_single_touch_info_pane_t2

0x0001,

0xfae0,	// (0x00061e11) list_single_touch_info_pane_t

0x8838,	// (0x0005ab69) bg_popup_heading_pane_cp

0xb807,	// (0x0005db38) heading_sub_pane_t1

0x9121,	// (0x0005b452) bg_popup_preview_window_pane_cp_ParamLimits

0x9121,	// (0x0005b452) bg_popup_preview_window_pane_cp

0xb7c2,	// (0x0005daf3) heading_preview_pane

0xb7ca,	// (0x0005dafb) list_preview_pane_ParamLimits

0xb7ca,	// (0x0005dafb) list_preview_pane

0xb815,	// (0x0005db46) popup_preview_window_g1

0xb7d9,	// (0x0005db0a) list_single_preview_pane_ParamLimits

0xb7d9,	// (0x0005db0a) list_single_preview_pane

0xb81d,	// (0x0005db4e) list_single_preview_pane_g1

0xb825,	// (0x0005db56) list_single_preview_pane_t1

0xb7eb,	// (0x0005db1c) list_single_preview_pane_t2

0x0001,

0xfae5,	// (0x00061e16) list_single_preview_pane_t

0xb833,	// (0x0005db64) bg_popup_heading_pane_cp2_ParamLimits

0xb833,	// (0x0005db64) bg_popup_heading_pane_cp2

0xb849,	// (0x0005db7a) heading_preview_pane_g1

0xb851,	// (0x0005db82) heading_preview_pane_t1_ParamLimits

0xb851,	// (0x0005db82) heading_preview_pane_t1

0xedfe,	// (0x0006112f) soft_indicator_pane_t1_ParamLimits

0xf3fc,	// (0x0006172d) scroll_pane_ParamLimits

0x3576,	// (0x000558a7) scroll_sc2_left_pane

0x356d,	// (0x0005589e) scroll_sc2_right_pane

0x3595,	// (0x000558c6) scroll_bg_pane_g1_ParamLimits

0x35aa,	// (0x000558db) scroll_bg_pane_g2_ParamLimits

0x35c2,	// (0x000558f3) scroll_bg_pane_g3_ParamLimits

0xf6c3,	// (0x000619f4) scroll_bg_pane_g_ParamLimits

0x3595,	// (0x000558c6) scroll_handle_pane_g1_ParamLimits

0x35e4,	// (0x00055915) scroll_handle_pane_g2_ParamLimits

0x35c2,	// (0x000558f3) scroll_handle_pane_g3_ParamLimits

0xf6ca,	// (0x000619fb) scroll_handle_pane_g_ParamLimits

0x64a9,	// (0x000587da) popup_choice_list_window_ParamLimits

0x64a9,	// (0x000587da) popup_choice_list_window

0x8fdf,	// (0x0005b310) choice_list_pane

0x9079,	// (0x0005b3aa) cell_toolbar_pane_t1

0x90a1,	// (0x0005b3d2) toolbar_button_pane_ParamLimits

0xa329,	// (0x0005c65a) ai_gene_pane_1_t2_ParamLimits

0xa329,	// (0x0005c65a) ai_gene_pane_1_t2

0x0001,

0xf8f2,	// (0x00061c23) ai_gene_pane_1_t_ParamLimits

0xf8f2,	// (0x00061c23) ai_gene_pane_1_t

0xb86e,	// (0x0005db9f) scroll_sc2_left_pane_g1

0xb86e,	// (0x0005db9f) scroll_sc2_right_pane_g1

0x8b5f,	// (0x0005ae90) bg_popup_sub_pane_cp10

0xb878,	// (0x0005dba9) list_choice_list_pane

0xb891,	// (0x0005dbc2) list_single_choice_list_pane_ParamLimits

0xb891,	// (0x0005dbc2) list_single_choice_list_pane

0xb8a9,	// (0x0005dbda) list_single_choice_list_pane_g1

0x3364,	// (0x00055695) list_single_choice_list_pane_t1_ParamLimits

0x3364,	// (0x00055695) list_single_choice_list_pane_t1

0xb8b1,	// (0x0005dbe2) choice_list_pane_g1

0xb8b9,	// (0x0005dbea) choice_list_pane_t1

0xed49,	// (0x0006107a) input_focus_pane_cp11

0x34e2,	// (0x00055813) title_pane_stacon_g2_ParamLimits

0x34e2,	// (0x00055813) title_pane_stacon_g2

0x0002,

0xf6a9,	// (0x000619da) title_pane_stacon_g_ParamLimits

0xf6a9,	// (0x000619da) title_pane_stacon_g

0x8838,	// (0x0005ab69) cursor_press_pane

0x6563,	// (0x00058894) popup_fep_hwr_window_ParamLimits

0x6563,	// (0x00058894) popup_fep_hwr_window

0x65ed,	// (0x0005891e) popup_fep_vkb_window_ParamLimits

0x65ed,	// (0x0005891e) popup_fep_vkb_window

0xb8c7,	// (0x0005dbf8) cursor_press_pane_g1

0x0002,

0xfb0e,	// (0x00061e3f) fep_vkb_side_pane_g_ParamLimits

0x707f,	// (0x000593b0) fep_hwr_candidate_pane_ParamLimits

0x707f,	// (0x000593b0) fep_hwr_candidate_pane

0x70a9,	// (0x000593da) fep_hwr_side_pane_ParamLimits

0x70a9,	// (0x000593da) fep_hwr_side_pane

0x70cb,	// (0x000593fc) fep_hwr_top_pane_ParamLimits

0x70cb,	// (0x000593fc) fep_hwr_top_pane

0x70e3,	// (0x00059414) fep_hwr_write_pane_ParamLimits

0x70e3,	// (0x00059414) fep_hwr_write_pane

0xfb0e,	// (0x00061e3f) fep_vkb_side_pane_g

0xb8cf,	// (0x0005dc00) fep_hwr_top_pane_g1

0xb8e1,	// (0x0005dc12) fep_hwr_top_pane_g2

0x711d,	// (0x0005944e) fep_hwr_top_pane_g3

0x0002,

0xfaea,	// (0x00061e1b) fep_hwr_top_pane_g

0x7132,	// (0x00059463) fep_hwr_top_text_pane

0x822c,	// (0x0005a55d) fep_hwr_top_text_pane_g1

0xb917,	// (0x0005dc48) fep_hwr_top_text_pane_t1

0x723c,	// (0x0005956d) fep_hwr_candidate_pane_g1

0xbb62,	// (0x0005de93) fep_vkb_keypad_pane_g3_ParamLimits

0xbb62,	// (0x0005de93) fep_vkb_keypad_pane_g3

0xbb8e,	// (0x0005debf) fep_vkb_keypad_pane_g4_ParamLimits

0xbb8e,	// (0x0005debf) fep_vkb_keypad_pane_g4

0xbc05,	// (0x0005df36) fep_vkb_bottom_pane_g2_ParamLimits

0xbc05,	// (0x0005df36) fep_vkb_bottom_pane_g2

0x0001,

0xfb15,	// (0x00061e46) fep_vkb_bottom_pane_g_ParamLimits

0xfb15,	// (0x00061e46) fep_vkb_bottom_pane_g

0xb86e,	// (0x0005db9f) cell_vkb_side_pane_g2

0x0001,

0xfb1f,	// (0x00061e50) cell_vkb_side_pane_g

0xbc90,	// (0x0005dfc1) cell_vkb_side_pane_t1

0xbc9e,	// (0x0005dfcf) cell_vkb_side_pane_t1_copy1

0xb86e,	// (0x0005db9f) bg_fep_vkb_candidate_pane_g2

0xbde2,	// (0x0005e113) cell_vkb_candidate_pane_ParamLimits

0xb925,	// (0x0005dc56) aid_size_cell_vkb_ParamLimits

0xb925,	// (0x0005dc56) aid_size_cell_vkb

0xbde2,	// (0x0005e113) cell_vkb_candidate_pane

0x7263,	// (0x00059594) bg_popup_fep_shadow_pane_g1

0xb9b7,	// (0x0005dce8) fep_vkb_bottom_pane_ParamLimits

0xb9b7,	// (0x0005dce8) fep_vkb_bottom_pane

0xb9f4,	// (0x0005dd25) fep_vkb_candidate_pane_ParamLimits

0xb9f4,	// (0x0005dd25) fep_vkb_candidate_pane

0xba10,	// (0x0005dd41) fep_vkb_keypad_pane_ParamLimits

0xba10,	// (0x0005dd41) fep_vkb_keypad_pane

0xba43,	// (0x0005dd74) fep_vkb_side_pane_ParamLimits

0xba43,	// (0x0005dd74) fep_vkb_side_pane

0xba7f,	// (0x0005ddb0) fep_vkb_top_pane_ParamLimits

0xba7f,	// (0x0005ddb0) fep_vkb_top_pane

0xbabb,	// (0x0005ddec) fep_vkb_top_pane_g1_ParamLimits

0xbabb,	// (0x0005ddec) fep_vkb_top_pane_g1

0xbaca,	// (0x0005ddfb) fep_vkb_top_pane_g2_ParamLimits

0xbaca,	// (0x0005ddfb) fep_vkb_top_pane_g2

0xbad9,	// (0x0005de0a) fep_vkb_top_pane_g3_ParamLimits

0xbad9,	// (0x0005de0a) fep_vkb_top_pane_g3

0x0003,

0xfb05,	// (0x00061e36) fep_vkb_top_pane_g_ParamLimits

0xfb05,	// (0x00061e36) fep_vkb_top_pane_g

0xbaf7,	// (0x0005de28) fep_vkb_top_text_pane_ParamLimits

0xbaf7,	// (0x0005de28) fep_vkb_top_text_pane

0xbb08,	// (0x0005de39) fep_vkb_side_pane_g1_ParamLimits

0xbb08,	// (0x0005de39) fep_vkb_side_pane_g1

0xbb51,	// (0x0005de82) grid_vkb_side_pane_ParamLimits

0xbb51,	// (0x0005de82) grid_vkb_side_pane

0x726b,	// (0x0005959c) bg_popup_fep_shadow_pane_g2

0x7274,	// (0x000595a5) bg_popup_fep_shadow_pane_g3

0x727c,	// (0x000595ad) bg_popup_fep_shadow_pane_g4

0x7285,	// (0x000595b6) bg_popup_fep_shadow_pane_g5

0x728f,	// (0x000595c0) bg_popup_fep_shadow_pane_g6

0x7297,	// (0x000595c8) bg_popup_fep_shadow_pane_g7

0xf4f9,	// (0x0006182a) bg_popup_fep_shadow_pane_g8

0xbbb0,	// (0x0005dee1) grid_vkb_keypad_number_pane_ParamLimits

0xbbb0,	// (0x0005dee1) grid_vkb_keypad_number_pane

0xbbc4,	// (0x0005def5) grid_vkb_keypad_pane_ParamLimits

0xbbc4,	// (0x0005def5) grid_vkb_keypad_pane

0xbbea,	// (0x0005df1b) fep_vkb_bottom_pane_g1_ParamLimits

0xbbea,	// (0x0005df1b) fep_vkb_bottom_pane_g1

0xbc13,	// (0x0005df44) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xbc13,	// (0x0005df44) grid_vkb_keypad_bottom_left_pane

0xbc28,	// (0x0005df59) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xbc28,	// (0x0005df59) grid_vkb_keypad_bottom_right_pane

0xbc3d,	// (0x0005df6e) fep_vkb_top_text_pane_g1

0xbc58,	// (0x0005df89) fep_vkb_top_text_pane_t1

0xbc6d,	// (0x0005df9e) cell_vkb_side_pane_ParamLimits

0xbc6d,	// (0x0005df9e) cell_vkb_side_pane

0xb86e,	// (0x0005db9f) cell_vkb_side_pane_g1

0xbcac,	// (0x0005dfdd) cell_vkb_keypad_pane_ParamLimits

0xbcac,	// (0x0005dfdd) cell_vkb_keypad_pane

0xbd39,	// (0x0005e06a) cell_vkb_keypad_pane_g1

0x0008,

0xfb32,	// (0x00061e63) bg_popup_fep_shadow_pane_g

0x72a9,	// (0x000595da) cell_hwr_side_pane_g1

0x72a9,	// (0x000595da) cell_hwr_side_pane_g2

0xbd43,	// (0x0005e074) cell_vkb_keypad_pane_t1

0xbd51,	// (0x0005e082) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xbd51,	// (0x0005e082) cell_vkb_keypad_bottom_left_pane

0xbd6e,	// (0x0005e09f) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xbd6e,	// (0x0005e09f) cell_vkb_keypad_bottom_right_pane

0xb86e,	// (0x0005db9f) cell_vkb_keypad_bottom_left_pane_g1

0xb86e,	// (0x0005db9f) cell_vkb_keypad_bottom_right_pane_g1

0xbda7,	// (0x0005e0d8) cell_vkb_keypad_number_pane_ParamLimits

0xbda7,	// (0x0005e0d8) cell_vkb_keypad_number_pane

0xbdc6,	// (0x0005e0f7) cell_vkb_keypad_number_pane_g1

0xbdd0,	// (0x0005e101) cell_vkb_keypad_number_pane_g2

0xbdd9,	// (0x0005e10a) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb24,	// (0x00061e55) cell_vkb_keypad_number_pane_g

0xbd43,	// (0x0005e074) cell_vkb_keypad_number_pane_t1

0xbe03,	// (0x0005e134) fep_vkb_candidate_pane_g1

0x0001,

0xfb45,	// (0x00061e76) cell_hwr_side_pane_g

0xbe1c,	// (0x0005e14d) cell_hwr_side_pane_t1

0x72b3,	// (0x000595e4) cell_hwr_side_pane_t1_copy1

0x72c1,	// (0x000595f2) cell_hwr_candidate_pane_g1

0x72f0,	// (0x00059621) cell_hwr_candidate_pane_t1

0xb86e,	// (0x0005db9f) cell_vkb_candidate_pane_g2

0xbe60,	// (0x0005e191) cell_vkb_candidate_pane_t1

0x7046,	// (0x00059377) bg_popup_fep_shadow_pane_ParamLimits

0x7046,	// (0x00059377) bg_popup_fep_shadow_pane

0x70fd,	// (0x0005942e) bg_fep_hwr_top_pane_g4

0xb8f3,	// (0x0005dc24) bg_hwr_side_pane_g1_ParamLimits

0xb8f3,	// (0x0005dc24) bg_hwr_side_pane_g1

0x7170,	// (0x000594a1) cell_hwr_side_pane_ParamLimits

0x7170,	// (0x000594a1) cell_hwr_side_pane

0x71ad,	// (0x000594de) fep_hwr_write_pane_g1_ParamLimits

0x71ad,	// (0x000594de) fep_hwr_write_pane_g1

0x71ba,	// (0x000594eb) fep_hwr_write_pane_g2_ParamLimits

0x71ba,	// (0x000594eb) fep_hwr_write_pane_g2

0x71c7,	// (0x000594f8) fep_hwr_write_pane_g3_ParamLimits

0x71c7,	// (0x000594f8) fep_hwr_write_pane_g3

0x71d5,	// (0x00059506) fep_hwr_write_pane_g4_ParamLimits

0x71d5,	// (0x00059506) fep_hwr_write_pane_g4

0x0005,

0xfaf1,	// (0x00061e22) fep_hwr_write_pane_g_ParamLimits

0xfaf1,	// (0x00061e22) fep_hwr_write_pane_g

0x70fd,	// (0x0005942e) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x70fd,	// (0x0005942e) bg_fep_hwr_candidate_pane_g2

0x71ea,	// (0x0005951b) cell_hwr_candidate_pane_ParamLimits

0x71ea,	// (0x0005951b) cell_hwr_candidate_pane

0x723c,	// (0x0005956d) fep_hwr_candidate_pane_g1_ParamLimits

0xb953,	// (0x0005dc84) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xb953,	// (0x0005dc84) bg_popup_fep_shadow_pane_cp2

0xbae9,	// (0x0005de1a) fep_vkb_top_pane_g4_ParamLimits

0xbae9,	// (0x0005de1a) fep_vkb_top_pane_g4

0xbb2f,	// (0x0005de60) fep_vkb_side_pane_g2_ParamLimits

0xbb2f,	// (0x0005de60) fep_vkb_side_pane_g2

0x5a31,	// (0x00057d62) list_setting_pane_t4_ParamLimits

0x5a31,	// (0x00057d62) list_setting_pane_t4

0x5acd,	// (0x00057dfe) list_setting_number_pane_t5_ParamLimits

0x5acd,	// (0x00057dfe) list_setting_number_pane_t5

0x8273,	// (0x0005a5a4) list_double_heading_pane_cp2_ParamLimits

0x8273,	// (0x0005a5a4) list_double_heading_pane_cp2

0xbe6e,	// (0x0005e19f) list_double_heading_pane_g1_cp2_ParamLimits

0xbe6e,	// (0x0005e19f) list_double_heading_pane_g1_cp2

0xbe7a,	// (0x0005e1ab) list_double_heading_pane_g2_cp2_ParamLimits

0xbe7a,	// (0x0005e1ab) list_double_heading_pane_g2_cp2

0xbe8e,	// (0x0005e1bf) list_double_heading_pane_t1_cp2_ParamLimits

0xbe8e,	// (0x0005e1bf) list_double_heading_pane_t1_cp2

0xbea4,	// (0x0005e1d5) list_double_heading_pane_t2_cp2_ParamLimits

0xbea4,	// (0x0005e1d5) list_double_heading_pane_t2_cp2

0xed41,	// (0x00061072) aid_value_unit2

0x5127,	// (0x00057458) popup_preview_fixed_window

0xeeec,	// (0x0006121d) bg_popup_preview_window_pane_cp02

0xbeb6,	// (0x0005e1e7) list_preview_fixed_pane

0xbefc,	// (0x0005e22d) list_empty_pane_fp_ParamLimits

0xbefc,	// (0x0005e22d) list_empty_pane_fp

0xbefc,	// (0x0005e22d) list_single_cale_day_pane_fp_ParamLimits

0xbefc,	// (0x0005e22d) list_single_cale_day_pane_fp

0xbefc,	// (0x0005e22d) list_single_graphic_heading_pane_fp_ParamLimits

0xbefc,	// (0x0005e22d) list_single_graphic_heading_pane_fp

0xbefc,	// (0x0005e22d) list_single_graphic_pane_fp_ParamLimits

0xbefc,	// (0x0005e22d) list_single_graphic_pane_fp

0xbefc,	// (0x0005e22d) list_single_heading_pane_fp_ParamLimits

0xbefc,	// (0x0005e22d) list_single_heading_pane_fp

0xbefc,	// (0x0005e22d) list_single_pane_fp_ParamLimits

0xbefc,	// (0x0005e22d) list_single_pane_fp

0xbf15,	// (0x0005e246) list_single_pane_fp_g1_ParamLimits

0xbf15,	// (0x0005e246) list_single_pane_fp_g1

0xbe6e,	// (0x0005e19f) list_single_pane_fp_g2_ParamLimits

0xbe6e,	// (0x0005e19f) list_single_pane_fp_g2

0xbe7a,	// (0x0005e1ab) list_single_pane_fp_g3_ParamLimits

0xbe7a,	// (0x0005e1ab) list_single_pane_fp_g3

0xbf21,	// (0x0005e252) list_single_pane_fp_g4_ParamLimits

0xbf21,	// (0x0005e252) list_single_pane_fp_g4

0x0003,

0xfb58,	// (0x00061e89) list_single_pane_fp_g_ParamLimits

0xfb58,	// (0x00061e89) list_single_pane_fp_g

0x3fc9,	// (0x000562fa) list_single_pane_fp_t1_ParamLimits

0x3fc9,	// (0x000562fa) list_single_pane_fp_t1

0x3fe0,	// (0x00056311) list_single_graphic_pane_fp_g1_ParamLimits

0x3fe0,	// (0x00056311) list_single_graphic_pane_fp_g1

0xbf15,	// (0x0005e246) list_single_graphic_pane_fp_g2_ParamLimits

0xbf15,	// (0x0005e246) list_single_graphic_pane_fp_g2

0xbe6e,	// (0x0005e19f) list_single_graphic_pane_fp_g3_ParamLimits

0xbe6e,	// (0x0005e19f) list_single_graphic_pane_fp_g3

0xbe7a,	// (0x0005e1ab) list_single_graphic_pane_fp_g4_ParamLimits

0xbe7a,	// (0x0005e1ab) list_single_graphic_pane_fp_g4

0xbf21,	// (0x0005e252) list_single_graphic_pane_fp_g5_ParamLimits

0xbf21,	// (0x0005e252) list_single_graphic_pane_fp_g5

0x0004,

0xfb61,	// (0x00061e92) list_single_graphic_pane_fp_g_ParamLimits

0xfb61,	// (0x00061e92) list_single_graphic_pane_fp_g

0x3fec,	// (0x0005631d) list_single_graphic_pane_fp_t1_ParamLimits

0x3fec,	// (0x0005631d) list_single_graphic_pane_fp_t1

0x3fe0,	// (0x00056311) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x3fe0,	// (0x00056311) list_single_graphic_heading_pane_fp_g1

0xbf15,	// (0x0005e246) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xbf15,	// (0x0005e246) list_single_graphic_heading_pane_fp_g2

0xbe6e,	// (0x0005e19f) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xbe6e,	// (0x0005e19f) list_single_graphic_heading_pane_fp_g3

0xbe7a,	// (0x0005e1ab) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xbe7a,	// (0x0005e1ab) list_single_graphic_heading_pane_fp_g4

0xbf21,	// (0x0005e252) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xbf21,	// (0x0005e252) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb61,	// (0x00061e92) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb61,	// (0x00061e92) list_single_graphic_heading_pane_fp_g

0x4002,	// (0x00056333) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x4002,	// (0x00056333) list_single_graphic_heading_pane_fp_t1

0x4018,	// (0x00056349) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x4018,	// (0x00056349) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb6c,	// (0x00061e9d) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb6c,	// (0x00061e9d) list_single_graphic_heading_pane_fp_t

0x402a,	// (0x0005635b) list_single_cale_day_pane_fp_g1_ParamLimits

0x402a,	// (0x0005635b) list_single_cale_day_pane_fp_g1

0xbf2d,	// (0x0005e25e) list_single_cale_day_pane_fp_g2_ParamLimits

0xbf2d,	// (0x0005e25e) list_single_cale_day_pane_fp_g2

0x9bdd,	// (0x0005bf0e) list_single_cale_day_pane_fp_g3_ParamLimits

0x9bdd,	// (0x0005bf0e) list_single_cale_day_pane_fp_g3

0x9c05,	// (0x0005bf36) list_single_cale_day_pane_fp_g4_ParamLimits

0x9c05,	// (0x0005bf36) list_single_cale_day_pane_fp_g4

0x9c29,	// (0x0005bf5a) list_single_cale_day_pane_fp_g5_ParamLimits

0x9c29,	// (0x0005bf5a) list_single_cale_day_pane_fp_g5

0x0004,

0xfb71,	// (0x00061ea2) list_single_cale_day_pane_fp_g_ParamLimits

0xfb71,	// (0x00061ea2) list_single_cale_day_pane_fp_g

0x4225,	// (0x00056556) list_single_cale_day_pane_fp_t1_ParamLimits

0x4225,	// (0x00056556) list_single_cale_day_pane_fp_t1

0x424b,	// (0x0005657c) list_single_cale_day_pane_fp_t2_ParamLimits

0x424b,	// (0x0005657c) list_single_cale_day_pane_fp_t2

0x4264,	// (0x00056595) list_single_cale_day_pane_fp_t3_ParamLimits

0x4264,	// (0x00056595) list_single_cale_day_pane_fp_t3

0x0002,

0xfb7c,	// (0x00061ead) list_single_cale_day_pane_fp_t_ParamLimits

0xfb7c,	// (0x00061ead) list_single_cale_day_pane_fp_t

0xbf15,	// (0x0005e246) list_empty_pane_fp_g1_ParamLimits

0xbf15,	// (0x0005e246) list_empty_pane_fp_g1

0x427d,	// (0x000565ae) list_empty_pane_fp_t1

0x428b,	// (0x000565bc) list_empty_pane_fp_t2

0x0001,

0xfb83,	// (0x00061eb4) list_empty_pane_fp_t

0xbf15,	// (0x0005e246) list_single_heading_pane_fp_g1_ParamLimits

0xbf15,	// (0x0005e246) list_single_heading_pane_fp_g1

0xbe6e,	// (0x0005e19f) list_single_heading_pane_fp_g2_ParamLimits

0xbe6e,	// (0x0005e19f) list_single_heading_pane_fp_g2

0xbe7a,	// (0x0005e1ab) list_single_heading_pane_fp_g3_ParamLimits

0xbe7a,	// (0x0005e1ab) list_single_heading_pane_fp_g3

0x0002,

0xfb88,	// (0x00061eb9) list_single_heading_pane_fp_g_ParamLimits

0xfb88,	// (0x00061eb9) list_single_heading_pane_fp_g

0x4299,	// (0x000565ca) list_single_heading_pane_fp_t1_ParamLimits

0x4299,	// (0x000565ca) list_single_heading_pane_fp_t1

0x42ab,	// (0x000565dc) list_single_heading_pane_fp_t2_ParamLimits

0x42ab,	// (0x000565dc) list_single_heading_pane_fp_t2

0x0001,

0xfb8f,	// (0x00061ec0) list_single_heading_pane_fp_t_ParamLimits

0xfb8f,	// (0x00061ec0) list_single_heading_pane_fp_t

0x3379,	// (0x000556aa) aid_size_cell_fast

0xeec1,	// (0x000611f2) soft_indicator_pane_cp1_t1

0x33b6,	// (0x000556e7) cell_app_pane_cp2_ParamLimits

0x33b6,	// (0x000556e7) cell_app_pane_cp2

0x7068,	// (0x00059399) fep_hwr_candidate_drop_down_list_pane

0x7256,	// (0x00059587) fep_hwr_candidate_pane_g3_ParamLimits

0x7256,	// (0x00059587) fep_hwr_candidate_pane_g3

0x2e76,	// (0x000551a7) fep_hwr_candidate_pane_g4_ParamLimits

0x2e76,	// (0x000551a7) fep_hwr_candidate_pane_g4

0x0002,

0xfafe,	// (0x00061e2f) fep_hwr_candidate_pane_g_ParamLimits

0xfafe,	// (0x00061e2f) fep_hwr_candidate_pane_g

0xb9e3,	// (0x0005dd14) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xb9e3,	// (0x0005dd14) fep_vkb_candidate_drop_down_list_pane

0xbe0b,	// (0x0005e13c) fep_vkb_candidate_pane_g3

0xbe13,	// (0x0005e144) fep_vkb_candidate_pane_g4

0x0002,

0xfb2b,	// (0x00061e5c) fep_vkb_candidate_pane_g

0x72c1,	// (0x000595f2) cell_hwr_candidate_pane_g1_ParamLimits

0x72cf,	// (0x00059600) cell_hwr_candidate_pane_g3_ParamLimits

0x72cf,	// (0x00059600) cell_hwr_candidate_pane_g3

0xd267,	// (0x0005f598) cell_hwr_candidate_pane_g4_ParamLimits

0xd267,	// (0x0005f598) cell_hwr_candidate_pane_g4

0x0002,

0xfb4a,	// (0x00061e7b) cell_hwr_candidate_pane_g_ParamLimits

0xfb4a,	// (0x00061e7b) cell_hwr_candidate_pane_g

0xbe2a,	// (0x0005e15b) cell_vkb_candidate_pane_g3_ParamLimits

0xbe2a,	// (0x0005e15b) cell_vkb_candidate_pane_g3

0xbe45,	// (0x0005e176) cell_vkb_candidate_pane_g4_ParamLimits

0xbe45,	// (0x0005e176) cell_vkb_candidate_pane_g4

0xbf39,	// (0x0005e26a) cell_app_pane_cp2_g1_ParamLimits

0xbf39,	// (0x0005e26a) cell_app_pane_cp2_g1

0xbf57,	// (0x0005e288) cell_app_pane_cp2_g2_ParamLimits

0xbf57,	// (0x0005e288) cell_app_pane_cp2_g2

0x0001,

0xfb94,	// (0x00061ec5) cell_app_pane_cp2_g_ParamLimits

0xfb94,	// (0x00061ec5) cell_app_pane_cp2_g

0xbf63,	// (0x0005e294) cell_app_pane_cp2_t1_ParamLimits

0xbf63,	// (0x0005e294) cell_app_pane_cp2_t1

0xf489,	// (0x000617ba) grid_highlight_pane_cp1_ParamLimits

0xf489,	// (0x000617ba) grid_highlight_pane_cp1

0x730e,	// (0x0005963f) cell_hwr_candidate_pane_cp1_ParamLimits

0x730e,	// (0x0005963f) cell_hwr_candidate_pane_cp1

0x72c1,	// (0x000595f2) fep_hwr_candidate_drop_down_list_pane_g1

0x7332,	// (0x00059663) fep_hwr_candidate_drop_down_list_pane_g2

0x733f,	// (0x00059670) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb99,	// (0x00061eca) fep_hwr_candidate_drop_down_list_pane_g

0x734c,	// (0x0005967d) fep_hwr_candidate_drop_down_list_scroll_pane

0x7355,	// (0x00059686) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7355,	// (0x00059686) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x7362,	// (0x00059693) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7362,	// (0x00059693) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x736f,	// (0x000596a0) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x736f,	// (0x000596a0) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x737c,	// (0x000596ad) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x737c,	// (0x000596ad) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x7397,	// (0x000596c8) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7397,	// (0x000596c8) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x73b2,	// (0x000596e3) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x73b2,	// (0x000596e3) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x73cd,	// (0x000596fe) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x73cd,	// (0x000596fe) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x73e8,	// (0x00059719) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x73e8,	// (0x00059719) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba0,	// (0x00061ed1) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba0,	// (0x00061ed1) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xbf75,	// (0x0005e2a6) cell_vkb_candidate_pane_cp1_ParamLimits

0xbf75,	// (0x0005e2a6) cell_vkb_candidate_pane_cp1

0xbae9,	// (0x0005de1a) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xbae9,	// (0x0005de1a) fep_vkb_candidate_drop_down_list_pane_g1

0xbf9b,	// (0x0005e2cc) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xbf9b,	// (0x0005e2cc) fep_vkb_candidate_drop_down_list_pane_g2

0xbfa8,	// (0x0005e2d9) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xbfa8,	// (0x0005e2d9) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbb1,	// (0x00061ee2) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbb1,	// (0x00061ee2) fep_vkb_candidate_drop_down_list_pane_g

0xbfb5,	// (0x0005e2e6) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xbfb5,	// (0x0005e2e6) fep_vkb_candidate_drop_down_list_scroll_pane

0xbfc2,	// (0x0005e2f3) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xbfc2,	// (0x0005e2f3) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xbfcf,	// (0x0005e300) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xbfcf,	// (0x0005e300) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xbfdb,	// (0x0005e30c) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xbfdb,	// (0x0005e30c) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xbfe7,	// (0x0005e318) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xbfe7,	// (0x0005e318) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc008,	// (0x0005e339) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc008,	// (0x0005e339) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc029,	// (0x0005e35a) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc029,	// (0x0005e35a) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc04a,	// (0x0005e37b) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc04a,	// (0x0005e37b) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc06b,	// (0x0005e39c) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc06b,	// (0x0005e39c) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb8,	// (0x00061ee9) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb8,	// (0x00061ee9) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x5247,	// (0x00057578) title_pane_g1_ParamLimits

0x5254,	// (0x00057585) title_pane_g2_ParamLimits

0xf529,	// (0x0006185a) title_pane_g_ParamLimits

0x821c,	// (0x0005a54d) aid_call2_pane

0x8224,	// (0x0005a555) aid_call_pane

0x822c,	// (0x0005a55d) popup_clock_analogue_window_g1

0x822c,	// (0x0005a55d) popup_clock_analogue_window_g2

0x5f9f,	// (0x000582d0) popup_clock_analogue_window_g3

0x5fa8,	// (0x000582d9) popup_clock_analogue_window_g4

0xed53,	// (0x00061084) popup_clock_analogue_window_g5

0x0004,

0xf6d8,	// (0x00061a09) popup_clock_analogue_window_g

0x5fb0,	// (0x000582e1) popup_clock_analogue_window_t1

0x5fbe,	// (0x000582ef) clock_digital_number_pane_ParamLimits

0x5fbe,	// (0x000582ef) clock_digital_number_pane

0x5fca,	// (0x000582fb) clock_digital_number_pane_cp02_ParamLimits

0x5fca,	// (0x000582fb) clock_digital_number_pane_cp02

0x5fd6,	// (0x00058307) clock_digital_number_pane_cp03_ParamLimits

0x5fd6,	// (0x00058307) clock_digital_number_pane_cp03

0x5fe2,	// (0x00058313) clock_digital_number_pane_cp04_ParamLimits

0x5fe2,	// (0x00058313) clock_digital_number_pane_cp04

0x5fee,	// (0x0005831f) clock_digital_separator_pane_ParamLimits

0x5fee,	// (0x0005831f) clock_digital_separator_pane

0x5ffa,	// (0x0005832b) popup_clock_digital_window_t1_ParamLimits

0x5ffa,	// (0x0005832b) popup_clock_digital_window_t1

0xed53,	// (0x00061084) clock_digital_number_pane_g1

0xed53,	// (0x00061084) clock_digital_number_pane_g2

0x0001,

0xf6e3,	// (0x00061a14) clock_digital_number_pane_g

0xed53,	// (0x00061084) clock_digital_separator_pane_g1

0xed53,	// (0x00061084) clock_digital_separator_pane_g2

0x0001,

0xf6e3,	// (0x00061a14) clock_digital_separator_pane_g

0x8b9b,	// (0x0005aecc) aid_fill_nsta_ParamLimits

0x8ce7,	// (0x0005b018) indicator_nsta_pane_ParamLimits

0x8e78,	// (0x0005b1a9) popup_clock_analogue_window

0x8e78,	// (0x0005b1a9) popup_clock_digital_window

0xb29a,	// (0x0005d5cb) grid_indicator_nsta_pane_ParamLimits

0xb2c3,	// (0x0005d5f4) clock_nsta_pane_t2

0x0001,

0xfa7e,	// (0x00061daf) clock_nsta_pane_t

0x5f2f,	// (0x00058260) aid_size_max_handle

0x5f39,	// (0x0005826a) aid_size_min_handle

0x8838,	// (0x0005ab69) editor_scroll_pane

0xc086,	// (0x0005e3b7) ex_editor_pane

0x333f,	// (0x00055670) scroll_pane_cp13

0xf428,	// (0x00061759) scroll_pane_cp14

0x825b,	// (0x0005a58c) scroll_pane_cp36

0x8289,	// (0x0005a5ba) list_single_graphic_hl_pane_cp2_ParamLimits

0x8289,	// (0x0005a5ba) list_single_graphic_hl_pane_cp2

0x9afb,	// (0x0005be2c) list_single_graphic_hl_pane_ParamLimits

0x9afb,	// (0x0005be2c) list_single_graphic_hl_pane

0x42c1,	// (0x000565f2) aid_size_min_hl_cp1

0xc08e,	// (0x0005e3bf) list_highlight_pane_cp34_ParamLimits

0xc08e,	// (0x0005e3bf) list_highlight_pane_cp34

0xc09f,	// (0x0005e3d0) list_single_graphic_hl_pane_g1_ParamLimits

0xc09f,	// (0x0005e3d0) list_single_graphic_hl_pane_g1

0x7403,	// (0x00059734) list_single_graphic_hl_pane_g2_ParamLimits

0x7403,	// (0x00059734) list_single_graphic_hl_pane_g2

0x7403,	// (0x00059734) list_single_graphic_hl_pane_g3_ParamLimits

0x7403,	// (0x00059734) list_single_graphic_hl_pane_g3

0x9039,	// (0x0005b36a) list_single_graphic_hl_pane_g4_ParamLimits

0x9039,	// (0x0005b36a) list_single_graphic_hl_pane_g4

0x740f,	// (0x00059740) list_single_graphic_hl_pane_g5_ParamLimits

0x740f,	// (0x00059740) list_single_graphic_hl_pane_g5

0x0004,

0xfbc9,	// (0x00061efa) list_single_graphic_hl_pane_g_ParamLimits

0xfbc9,	// (0x00061efa) list_single_graphic_hl_pane_g

0x7423,	// (0x00059754) list_single_graphic_hl_pane_t1_ParamLimits

0x7423,	// (0x00059754) list_single_graphic_hl_pane_t1

0xc0ac,	// (0x0005e3dd) aid_size_min_hl_cp2

0xc0b5,	// (0x0005e3e6) list_highlight_pane_cp34_cp2_ParamLimits

0xc0b5,	// (0x0005e3e6) list_highlight_pane_cp34_cp2

0xc09f,	// (0x0005e3d0) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc09f,	// (0x0005e3d0) list_single_graphic_hl_pane_g1_cp2

0xc0c2,	// (0x0005e3f3) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc0c2,	// (0x0005e3f3) list_single_graphic_hl_pane_g2_cp2

0xc0ce,	// (0x0005e3ff) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc0ce,	// (0x0005e3ff) list_single_graphic_hl_pane_g3_cp2

0xc0dc,	// (0x0005e40d) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc0dc,	// (0x0005e40d) list_single_graphic_hl_pane_g4_cp2

0xc0e8,	// (0x0005e419) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc0e8,	// (0x0005e419) list_single_graphic_hl_pane_g5_cp2

0x6345,	// (0x00058676) control_pane_g4_ParamLimits

0x6345,	// (0x00058676) control_pane_g4

0x8b5f,	// (0x0005ae90) bg_popup_sub_pane_cp10_ParamLimits

0xb878,	// (0x0005dba9) list_choice_list_pane_ParamLimits

0xb887,	// (0x0005dbb8) scroll_pane_cp23

0xeeec,	// (0x0006121d) bg_popup_preview_window_pane_cp02_ParamLimits

0xbeb6,	// (0x0005e1e7) list_preview_fixed_pane_ParamLimits

0xbecc,	// (0x0005e1fd) list_preview_fixed_pane_cp_ParamLimits

0xbecc,	// (0x0005e1fd) list_preview_fixed_pane_cp

0xbed8,	// (0x0005e209) popup_preview_fixed_window_g1_ParamLimits

0xbed8,	// (0x0005e209) popup_preview_fixed_window_g1

0xbee4,	// (0x0005e215) popup_preview_fixed_window_g2_ParamLimits

0xbee4,	// (0x0005e215) popup_preview_fixed_window_g2

0x0002,

0xfb51,	// (0x00061e82) popup_preview_fixed_window_g_ParamLimits

0xfb51,	// (0x00061e82) popup_preview_fixed_window_g

0x5e05,	// (0x00058136) aid_navi_side_left_pane_ParamLimits

0x5e1a,	// (0x0005814b) aid_navi_side_right_pane_ParamLimits

0x5e32,	// (0x00058163) navi_icon_pane_stacon_ParamLimits

0x5e46,	// (0x00058177) navi_navi_pane_stacon_ParamLimits

0x5e32,	// (0x00058163) navi_text_pane_stacon_ParamLimits

0x4fde,	// (0x0005730f) main_text_info_pane

0xc112,	// (0x0005e443) listscroll_text_info_pane

0xc11a,	// (0x0005e44b) list_text_info_pane_ParamLimits

0xc11a,	// (0x0005e44b) list_text_info_pane

0xc129,	// (0x0005e45a) scroll_pane_cp24_ParamLimits

0xc129,	// (0x0005e45a) scroll_pane_cp24

0xc147,	// (0x0005e478) list_text_info_pane_t1_ParamLimits

0xc147,	// (0x0005e478) list_text_info_pane_t1

0x64cb,	// (0x000587fc) popup_fast_swap2_window_ParamLimits

0x64cb,	// (0x000587fc) popup_fast_swap2_window

0xc16c,	// (0x0005e49d) aid_size_cell_fast2

0xed49,	// (0x0006107a) bg_popup_window_pane_cp17

0x94e3,	// (0x0005b814) heading_pane_cp2

0x94eb,	// (0x0005b81c) listscroll_fast2_pane

0xc176,	// (0x0005e4a7) grid_fast2_pane

0xc180,	// (0x0005e4b1) listscroll_fast2_pane_g1

0xc18a,	// (0x0005e4bb) listscroll_fast2_pane_g2

0x0001,

0xfbd4,	// (0x00061f05) listscroll_fast2_pane_g

0x333f,	// (0x00055670) scroll_pane_cp26

0xc194,	// (0x0005e4c5) cell_fast2_pane_ParamLimits

0xc194,	// (0x0005e4c5) cell_fast2_pane

0xc1ab,	// (0x0005e4dc) cell_fast2_pane_g1

0xc1b4,	// (0x0005e4e5) cell_fast2_pane_g2

0xc1bd,	// (0x0005e4ee) cell_fast2_pane_g3

0x0002,

0xfbd9,	// (0x00061f0a) cell_fast2_pane_g

0xf1ef,	// (0x00061520) grid_highlight_pane_cp9

0x648d,	// (0x000587be) main_eswt_pane_ParamLimits

0x648d,	// (0x000587be) main_eswt_pane

0xc13e,	// (0x0005e46f) list_single_text_info_pane

0xc1c5,	// (0x0005e4f6) eswt_ctrl_button_pane

0xc1c5,	// (0x0005e4f6) eswt_ctrl_canvas_pane

0xc1cd,	// (0x0005e4fe) eswt_ctrl_combo_pane

0xc1c5,	// (0x0005e4f6) eswt_ctrl_default_pane

0xc1c5,	// (0x0005e4f6) eswt_ctrl_label_pane

0xc1d5,	// (0x0005e506) eswt_ctrl_wait_pane

0xc1dd,	// (0x0005e50e) eswt_shell_pane

0xed49,	// (0x0006107a) listscroll_eswt_app_pane

0xc1fd,	// (0x0005e52e) popup_eswt_tasktip_window_ParamLimits

0xc1fd,	// (0x0005e52e) popup_eswt_tasktip_window

0x9121,	// (0x0005b452) bg_popup_window_pane_cp18

0xc20e,	// (0x0005e53f) eswt_control_pane_g1_ParamLimits

0xc20e,	// (0x0005e53f) eswt_control_pane_g1

0xc21b,	// (0x0005e54c) eswt_control_pane_g2_ParamLimits

0xc21b,	// (0x0005e54c) eswt_control_pane_g2

0xc228,	// (0x0005e559) eswt_control_pane_g3_ParamLimits

0xc228,	// (0x0005e559) eswt_control_pane_g3

0xc235,	// (0x0005e566) eswt_control_pane_g4_ParamLimits

0xc235,	// (0x0005e566) eswt_control_pane_g4

0x0003,

0xfbe0,	// (0x00061f11) eswt_control_pane_g_ParamLimits

0xfbe0,	// (0x00061f11) eswt_control_pane_g

0xf489,	// (0x000617ba) bg_button_pane_ParamLimits

0xf489,	// (0x000617ba) bg_button_pane

0xf204,	// (0x00061535) common_borders_pane_copy2_ParamLimits

0xf204,	// (0x00061535) common_borders_pane_copy2

0xc242,	// (0x0005e573) control_button_pane_g1_ParamLimits

0xc242,	// (0x0005e573) control_button_pane_g1

0xc24e,	// (0x0005e57f) control_button_pane_g2_ParamLimits

0xc24e,	// (0x0005e57f) control_button_pane_g2

0xc25a,	// (0x0005e58b) control_button_pane_g3_ParamLimits

0xc25a,	// (0x0005e58b) control_button_pane_g3

0x0002,

0xfbe9,	// (0x00061f1a) control_button_pane_g_ParamLimits

0xfbe9,	// (0x00061f1a) control_button_pane_g

0xc26e,	// (0x0005e59f) control_button_pane_t1

0xc27c,	// (0x0005e5ad) control_button_pane_t2

0x0001,

0xfbf0,	// (0x00061f21) control_button_pane_t

0x90ad,	// (0x0005b3de) bg_button_pane_g1

0x90bd,	// (0x0005b3ee) bg_button_pane_g2

0x90b5,	// (0x0005b3e6) bg_button_pane_g3

0x90cd,	// (0x0005b3fe) bg_button_pane_g4

0x90c5,	// (0x0005b3f6) bg_button_pane_g5

0x90d5,	// (0x0005b406) bg_button_pane_g6

0x90dd,	// (0x0005b40e) bg_button_pane_g7

0x90ed,	// (0x0005b41e) bg_button_pane_g8

0x90e5,	// (0x0005b416) bg_button_pane_g9

0x0008,

0xf846,	// (0x00061b77) bg_button_pane_g

0xb833,	// (0x0005db64) common_borders_pane_ParamLimits

0xb833,	// (0x0005db64) common_borders_pane

0xc20e,	// (0x0005e53f) eswt_control_pane_g1_copy1_ParamLimits

0xc20e,	// (0x0005e53f) eswt_control_pane_g1_copy1

0xc21b,	// (0x0005e54c) eswt_control_pane_g2_copy1_ParamLimits

0xc21b,	// (0x0005e54c) eswt_control_pane_g2_copy1

0xc228,	// (0x0005e559) eswt_control_pane_g3_copy1_ParamLimits

0xc228,	// (0x0005e559) eswt_control_pane_g3_copy1

0xc235,	// (0x0005e566) eswt_control_pane_g4_copy1_ParamLimits

0xc235,	// (0x0005e566) eswt_control_pane_g4_copy1

0xb86e,	// (0x0005db9f) bg_eswt_ctrl_canvas_pane_g1

0xb833,	// (0x0005db64) common_borders_pane_cp2_ParamLimits

0xb833,	// (0x0005db64) common_borders_pane_cp2

0xb833,	// (0x0005db64) common_borders_pane_cp3_ParamLimits

0xb833,	// (0x0005db64) common_borders_pane_cp3

0xc28a,	// (0x0005e5bb) separator_horizontal_pane

0xc292,	// (0x0005e5c3) separator_vertical_pane

0xc20e,	// (0x0005e53f) eswt_control_pane_g1_copy2_ParamLimits

0xc20e,	// (0x0005e53f) eswt_control_pane_g1_copy2

0xc21b,	// (0x0005e54c) eswt_control_pane_g2_copy2_ParamLimits

0xc21b,	// (0x0005e54c) eswt_control_pane_g2_copy2

0xc228,	// (0x0005e559) eswt_control_pane_g3_copy2_ParamLimits

0xc228,	// (0x0005e559) eswt_control_pane_g3_copy2

0xc235,	// (0x0005e566) eswt_control_pane_g4_copy2_ParamLimits

0xc235,	// (0x0005e566) eswt_control_pane_g4_copy2

0xed49,	// (0x0006107a) common_borders_pane_cp4

0xc29b,	// (0x0005e5cc) separator_horizontal_pane_g1

0xc2a4,	// (0x0005e5d5) separator_horizontal_pane_g2

0xc2ad,	// (0x0005e5de) separator_horizontal_pane_g3

0x0002,

0xfbf5,	// (0x00061f26) separator_horizontal_pane_g

0xc20e,	// (0x0005e53f) eswt_control_pane_g1_copy3_ParamLimits

0xc20e,	// (0x0005e53f) eswt_control_pane_g1_copy3

0xc21b,	// (0x0005e54c) eswt_control_pane_g2_copy3_ParamLimits

0xc21b,	// (0x0005e54c) eswt_control_pane_g2_copy3

0xc228,	// (0x0005e559) eswt_control_pane_g3_copy3_ParamLimits

0xc228,	// (0x0005e559) eswt_control_pane_g3_copy3

0xc235,	// (0x0005e566) eswt_control_pane_g4_copy3_ParamLimits

0xc235,	// (0x0005e566) eswt_control_pane_g4_copy3

0xed49,	// (0x0006107a) common_borders_pane_cp5

0xc2b6,	// (0x0005e5e7) separator_vertical_pane_g1

0xc2bf,	// (0x0005e5f0) separator_vertical_pane_g2

0xc2c8,	// (0x0005e5f9) separator_vertical_pane_g3

0x0002,

0xfbfc,	// (0x00061f2d) separator_vertical_pane_g

0xc20e,	// (0x0005e53f) eswt_control_pane_g1_copy4_ParamLimits

0xc20e,	// (0x0005e53f) eswt_control_pane_g1_copy4

0xc21b,	// (0x0005e54c) eswt_control_pane_g2_copy4_ParamLimits

0xc21b,	// (0x0005e54c) eswt_control_pane_g2_copy4

0xc228,	// (0x0005e559) eswt_control_pane_g3_copy4_ParamLimits

0xc228,	// (0x0005e559) eswt_control_pane_g3_copy4

0xc235,	// (0x0005e566) eswt_control_pane_g4_copy4_ParamLimits

0xc235,	// (0x0005e566) eswt_control_pane_g4_copy4

0xc2d1,	// (0x0005e602) eswt_ctrl_combo_button_pane

0xc2d9,	// (0x0005e60a) eswt_ctrl_input_pane

0xc2e1,	// (0x0005e612) popup_choice_list_window_cp70

0xc2e9,	// (0x0005e61a) eswt_ctrl_input_pane_t1

0xed49,	// (0x0006107a) input_focus_pane_cp70

0xb833,	// (0x0005db64) bg_button_pane_cp70_ParamLimits

0xb833,	// (0x0005db64) bg_button_pane_cp70

0xc2f7,	// (0x0005e628) eswt_ctrl_combo_button_pane_g1

0xc2ff,	// (0x0005e630) wait_bar_pane_cp70

0x9121,	// (0x0005b452) bg_popup_window_pane_cp70_ParamLimits

0x9121,	// (0x0005b452) bg_popup_window_pane_cp70

0xc307,	// (0x0005e638) popup_eswt_tasktip_window_t1

0xc31d,	// (0x0005e64e) wait_bar_pane_cp71_ParamLimits

0xc31d,	// (0x0005e64e) wait_bar_pane_cp71

0xc329,	// (0x0005e65a) grid_eswt_app_pane

0x3576,	// (0x000558a7) scroll_pane_cp70

0xc332,	// (0x0005e663) cell_eswt_app_pane_ParamLimits

0xc332,	// (0x0005e663) cell_eswt_app_pane

0xc364,	// (0x0005e695) cell_eswt_app_pane_g1_ParamLimits

0xc364,	// (0x0005e695) cell_eswt_app_pane_g1

0xc393,	// (0x0005e6c4) cell_eswt_app_pane_g2_ParamLimits

0xc393,	// (0x0005e6c4) cell_eswt_app_pane_g2

0x0001,

0xfc03,	// (0x00061f34) cell_eswt_app_pane_g_ParamLimits

0xfc03,	// (0x00061f34) cell_eswt_app_pane_g

0xc3bc,	// (0x0005e6ed) cell_eswt_app_pane_t1_ParamLimits

0xc3bc,	// (0x0005e6ed) cell_eswt_app_pane_t1

0xc3ee,	// (0x0005e71f) grid_highlight_pane_cp70_ParamLimits

0xc3ee,	// (0x0005e71f) grid_highlight_pane_cp70

0x8709,	// (0x0005aa3a) set_content_pane_g1

0x8ae6,	// (0x0005ae17) status_small_volume_pane

0x7439,	// (0x0005976a) status_small_volume_pane_g1

0x7441,	// (0x00059772) volume_small2_pane

0x744a,	// (0x0005977b) volume_small2_pane_g1

0x7453,	// (0x00059784) volume_small2_pane_g2

0x745c,	// (0x0005978d) volume_small2_pane_g3

0x7465,	// (0x00059796) volume_small2_pane_g4

0x746e,	// (0x0005979f) volume_small2_pane_g5

0x7477,	// (0x000597a8) volume_small2_pane_g6

0x7480,	// (0x000597b1) volume_small2_pane_g7

0x7489,	// (0x000597ba) volume_small2_pane_g8

0x7492,	// (0x000597c3) volume_small2_pane_g9

0x749b,	// (0x000597cc) volume_small2_pane_g10

0x0009,

0xfc08,	// (0x00061f39) volume_small2_pane_g

0xbc3d,	// (0x0005df6e) fep_vkb_top_text_pane_g1_ParamLimits

0xbc58,	// (0x0005df89) fep_vkb_top_text_pane_t1_ParamLimits

0xbef0,	// (0x0005e221) popup_preview_fixed_window_g3_ParamLimits

0xbef0,	// (0x0005e221) popup_preview_fixed_window_g3

0x69de,	// (0x00058d0f) popup_toolbar_trans_pane

0xa63c,	// (0x0005c96d) aid_height_set_list_ParamLimits

0xa64d,	// (0x0005c97e) aid_size_parent_ParamLimits

0x8b5f,	// (0x0005ae90) list_highlight_pane_cp2_ParamLimits

0x8709,	// (0x0005aa3a) set_content_pane_g1_ParamLimits

0x9b78,	// (0x0005bea9) list_single_image_pane_ParamLimits

0x9b78,	// (0x0005bea9) list_single_image_pane

0xc3fa,	// (0x0005e72b) aid_size_cell_image_ParamLimits

0xc3fa,	// (0x0005e72b) aid_size_cell_image

0xc407,	// (0x0005e738) grid_single_image_pane_ParamLimits

0xc407,	// (0x0005e738) grid_single_image_pane

0xf497,	// (0x000617c8) list_single_image_pane_g1_ParamLimits

0xf497,	// (0x000617c8) list_single_image_pane_g1

0xf4a3,	// (0x000617d4) list_single_image_pane_g2_ParamLimits

0xf4a3,	// (0x000617d4) list_single_image_pane_g2

0x0001,

0xfc1d,	// (0x00061f4e) list_single_image_pane_g_ParamLimits

0xfc1d,	// (0x00061f4e) list_single_image_pane_g

0xc415,	// (0x0005e746) list_single_image_pane_t1_ParamLimits

0xc415,	// (0x0005e746) list_single_image_pane_t1

0xc42b,	// (0x0005e75c) cell_image_list_pane_ParamLimits

0xc42b,	// (0x0005e75c) cell_image_list_pane

0xc443,	// (0x0005e774) cell_image_list_pane_g1

0xc44c,	// (0x0005e77d) cell_image_list_pane_g2

0x0001,

0xfc22,	// (0x00061f53) cell_image_list_pane_g

0xc455,	// (0x0005e786) aid_size_cell_tb_trans_pane

0xf489,	// (0x000617ba) bg_tb_trans_pane

0xc467,	// (0x0005e798) grid_tb_trans_pane

0x90ad,	// (0x0005b3de) bg_tb_trans_pane_g1

0x90bd,	// (0x0005b3ee) bg_tb_trans_pane_g2

0x90b5,	// (0x0005b3e6) bg_tb_trans_pane_g3

0x90cd,	// (0x0005b3fe) bg_tb_trans_pane_g4

0x90c5,	// (0x0005b3f6) bg_tb_trans_pane_g5

0x90ed,	// (0x0005b41e) bg_tb_trans_pane_g6

0x90e5,	// (0x0005b416) bg_tb_trans_pane_g7

0x90d5,	// (0x0005b406) bg_tb_trans_pane_g8

0x90dd,	// (0x0005b40e) bg_tb_trans_pane_g9

0x0008,

0xfc27,	// (0x00061f58) bg_tb_trans_pane_g

0xc47b,	// (0x0005e7ac) cell_toolbar_trans_pane_ParamLimits

0xc47b,	// (0x0005e7ac) cell_toolbar_trans_pane

0xb86e,	// (0x0005db9f) cell_toolbar_trans_pane_g1

0xb4a6,	// (0x0005d7d7) list_form2_midp_pane_t1

0xb4b4,	// (0x0005d7e5) list_form2_midp_pane_t2

0x0001,

0xfac4,	// (0x00061df5) list_form2_midp_pane_t

0xb4c2,	// (0x0005d7f3) scroll_pane_cp51_ParamLimits

0xb689,	// (0x0005d9ba) form2_midp_wait_pane_g1

0xb692,	// (0x0005d9c3) form2_midp_wait_pane_g2

0xb69b,	// (0x0005d9cc) form2_midp_wait_pane_g3

0x0002,

0xfad9,	// (0x00061e0a) form2_midp_wait_pane_g

0xedab,	// (0x000610dc) list_highlight_pane_cp21_ParamLimits

0xb6d4,	// (0x0005da05) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xb6e3,	// (0x0005da14) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x9b31,	// (0x0005be62) list_single_2graphic_im_pane_ParamLimits

0x9b31,	// (0x0005be62) list_single_2graphic_im_pane

0xc4a1,	// (0x0005e7d2) list_single_2graphic_im_pane_g1_ParamLimits

0xc4a1,	// (0x0005e7d2) list_single_2graphic_im_pane_g1

0xc4b2,	// (0x0005e7e3) list_single_2graphic_im_pane_g2_ParamLimits

0xc4b2,	// (0x0005e7e3) list_single_2graphic_im_pane_g2

0xc4be,	// (0x0005e7ef) list_single_2graphic_im_pane_g3_ParamLimits

0xc4be,	// (0x0005e7ef) list_single_2graphic_im_pane_g3

0x0003,

0xfc3a,	// (0x00061f6b) list_single_2graphic_im_pane_g_ParamLimits

0xfc3a,	// (0x00061f6b) list_single_2graphic_im_pane_g

0xc4de,	// (0x0005e80f) list_single_2graphic_im_pane_t1_ParamLimits

0xc4de,	// (0x0005e80f) list_single_2graphic_im_pane_t1

0xbefc,	// (0x0005e22d) list_single_graphic_2heading_pane_fp_ParamLimits

0xbefc,	// (0x0005e22d) list_single_graphic_2heading_pane_fp

0x3fe0,	// (0x00056311) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x3fe0,	// (0x00056311) list_single_graphic_2heading_pane_fp_g1

0xbf15,	// (0x0005e246) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xbf15,	// (0x0005e246) list_single_graphic_2heading_pane_fp_g2

0xbe6e,	// (0x0005e19f) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xbe6e,	// (0x0005e19f) list_single_graphic_2heading_pane_fp_g3

0xbe7a,	// (0x0005e1ab) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xbe7a,	// (0x0005e1ab) list_single_graphic_2heading_pane_fp_g4

0xbf21,	// (0x0005e252) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xbf21,	// (0x0005e252) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb61,	// (0x00061e92) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb61,	// (0x00061e92) list_single_graphic_2heading_pane_fp_g

0x42ca,	// (0x000565fb) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x42ca,	// (0x000565fb) list_single_graphic_2heading_pane_fp_t1

0x4018,	// (0x00056349) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x4018,	// (0x00056349) list_single_graphic_2heading_pane_fp_t2

0x42e0,	// (0x00056611) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x42e0,	// (0x00056611) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc43,	// (0x00061f74) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc43,	// (0x00061f74) list_single_graphic_2heading_pane_fp_t

0xb8ff,	// (0x0005dc30) fep_hwr_write_pane_g5_ParamLimits

0xb8ff,	// (0x0005dc30) fep_hwr_write_pane_g5

0xb90b,	// (0x0005dc3c) fep_hwr_write_pane_g6_ParamLimits

0xb90b,	// (0x0005dc3c) fep_hwr_write_pane_g6

0xc1dd,	// (0x0005e50e) eswt_shell_pane_ParamLimits

0x9121,	// (0x0005b452) bg_popup_window_pane_cp18_ParamLimits

0xa593,	// (0x0005c8c4) heading_pane_cp70

0xc307,	// (0x0005e638) popup_eswt_tasktip_window_t1_ParamLimits

0x8bf2,	// (0x0005af23) aid_touch_tab_arrow_left

0x8bfe,	// (0x0005af2f) aid_touch_tab_arrow_right

0x526d,	// (0x0005759e) title_pane_g3_ParamLimits

0x526d,	// (0x0005759e) title_pane_g3

0xf448,	// (0x00061779) set_value_pane_g1

0x69de,	// (0x00058d0f) popup_toolbar_trans_pane_ParamLimits

0xc455,	// (0x0005e786) aid_size_cell_tb_trans_pane_ParamLimits

0xf489,	// (0x000617ba) bg_tb_trans_pane_ParamLimits

0xc467,	// (0x0005e798) grid_tb_trans_pane_ParamLimits

0xeeec,	// (0x0006121d) cont_note_pane_ParamLimits

0xeeec,	// (0x0006121d) cont_note_pane

0xf204,	// (0x00061535) cont_snote2_single_text_pane_ParamLimits

0xf204,	// (0x00061535) cont_snote2_single_text_pane

0xf204,	// (0x00061535) cont_snote2_single_graphic_pane_ParamLimits

0xf204,	// (0x00061535) cont_snote2_single_graphic_pane

0x9713,	// (0x0005ba44) cont_note_wait_pane_ParamLimits

0x9713,	// (0x0005ba44) cont_note_wait_pane

0x9713,	// (0x0005ba44) cont_note_image_pane_ParamLimits

0x9713,	// (0x0005ba44) cont_note_image_pane

0xc50f,	// (0x0005e840) popup_note2_window_g1_ParamLimits

0xc50f,	// (0x0005e840) popup_note2_window_g1

0xc540,	// (0x0005e871) popup_note2_window_t1_ParamLimits

0xc540,	// (0x0005e871) popup_note2_window_t1

0xc585,	// (0x0005e8b6) popup_note2_window_t2_ParamLimits

0xc585,	// (0x0005e8b6) popup_note2_window_t2

0xc5ca,	// (0x0005e8fb) popup_note2_window_t3_ParamLimits

0xc5ca,	// (0x0005e8fb) popup_note2_window_t3

0xc60f,	// (0x0005e940) popup_note2_window_t4_ParamLimits

0xc60f,	// (0x0005e940) popup_note2_window_t4

0xef70,	// (0x000612a1) popup_note2_window_t5_ParamLimits

0xef70,	// (0x000612a1) popup_note2_window_t5

0x0004,

0xfc4f,	// (0x00061f80) popup_note2_window_t_ParamLimits

0xfc4f,	// (0x00061f80) popup_note2_window_t

0xc63e,	// (0x0005e96f) popup_note2_image_window_g1_ParamLimits

0xc63e,	// (0x0005e96f) popup_note2_image_window_g1

0xc64a,	// (0x0005e97b) popup_note2_image_window_g2_ParamLimits

0xc64a,	// (0x0005e97b) popup_note2_image_window_g2

0x0001,

0xfc5a,	// (0x00061f8b) popup_note2_image_window_g_ParamLimits

0xfc5a,	// (0x00061f8b) popup_note2_image_window_g

0xc65c,	// (0x0005e98d) popup_note2_image_window_t1_ParamLimits

0xc65c,	// (0x0005e98d) popup_note2_image_window_t1

0xc674,	// (0x0005e9a5) popup_note2_image_window_t2_ParamLimits

0xc674,	// (0x0005e9a5) popup_note2_image_window_t2

0xc68c,	// (0x0005e9bd) popup_note2_image_window_t3_ParamLimits

0xc68c,	// (0x0005e9bd) popup_note2_image_window_t3

0x0002,

0xfc5f,	// (0x00061f90) popup_note2_image_window_t_ParamLimits

0xfc5f,	// (0x00061f90) popup_note2_image_window_t

0x9721,	// (0x0005ba52) popup_note2_wait_window_g1_ParamLimits

0x9721,	// (0x0005ba52) popup_note2_wait_window_g1

0xc6a8,	// (0x0005e9d9) popup_note2_wait_window_g2_ParamLimits

0xc6a8,	// (0x0005e9d9) popup_note2_wait_window_g2

0x9739,	// (0x0005ba6a) popup_note2_wait_window_g3_ParamLimits

0x9739,	// (0x0005ba6a) popup_note2_wait_window_g3

0x0002,

0xfc66,	// (0x00061f97) popup_note2_wait_window_g_ParamLimits

0xfc66,	// (0x00061f97) popup_note2_wait_window_g

0xc6b4,	// (0x0005e9e5) popup_note2_wait_window_t1_ParamLimits

0xc6b4,	// (0x0005e9e5) popup_note2_wait_window_t1

0xc6d2,	// (0x0005ea03) popup_note2_wait_window_t2_ParamLimits

0xc6d2,	// (0x0005ea03) popup_note2_wait_window_t2

0xc6f0,	// (0x0005ea21) popup_note2_wait_window_t3_ParamLimits

0xc6f0,	// (0x0005ea21) popup_note2_wait_window_t3

0xc702,	// (0x0005ea33) popup_note2_wait_window_t4_ParamLimits

0xc702,	// (0x0005ea33) popup_note2_wait_window_t4

0x0003,

0xfc6d,	// (0x00061f9e) popup_note2_wait_window_t_ParamLimits

0xfc6d,	// (0x00061f9e) popup_note2_wait_window_t

0xc714,	// (0x0005ea45) wait_bar2_pane_ParamLimits

0xc714,	// (0x0005ea45) wait_bar2_pane

0xc72c,	// (0x0005ea5d) popup_snote2_single_text_window_g1_ParamLimits

0xc72c,	// (0x0005ea5d) popup_snote2_single_text_window_g1

0xc754,	// (0x0005ea85) popup_snote2_single_text_window_t1_ParamLimits

0xc754,	// (0x0005ea85) popup_snote2_single_text_window_t1

0xc7a0,	// (0x0005ead1) popup_snote2_single_text_window_t2_ParamLimits

0xc7a0,	// (0x0005ead1) popup_snote2_single_text_window_t2

0xc7ec,	// (0x0005eb1d) popup_snote2_single_text_window_t3_ParamLimits

0xc7ec,	// (0x0005eb1d) popup_snote2_single_text_window_t3

0xc82d,	// (0x0005eb5e) popup_snote2_single_text_window_t4_ParamLimits

0xc82d,	// (0x0005eb5e) popup_snote2_single_text_window_t4

0xc863,	// (0x0005eb94) popup_snote2_single_text_window_t5_ParamLimits

0xc863,	// (0x0005eb94) popup_snote2_single_text_window_t5

0x0004,

0xfc76,	// (0x00061fa7) popup_snote2_single_text_window_t_ParamLimits

0xfc76,	// (0x00061fa7) popup_snote2_single_text_window_t

0xc88e,	// (0x0005ebbf) popup_snote2_single_graphic_window_g1_ParamLimits

0xc88e,	// (0x0005ebbf) popup_snote2_single_graphic_window_g1

0xc8b6,	// (0x0005ebe7) popup_snote2_single_graphic_window_g2_ParamLimits

0xc8b6,	// (0x0005ebe7) popup_snote2_single_graphic_window_g2

0x0001,

0xfc81,	// (0x00061fb2) popup_snote2_single_graphic_window_g_ParamLimits

0xfc81,	// (0x00061fb2) popup_snote2_single_graphic_window_g

0xc8de,	// (0x0005ec0f) popup_snote2_single_graphic_window_t1_ParamLimits

0xc8de,	// (0x0005ec0f) popup_snote2_single_graphic_window_t1

0xc92a,	// (0x0005ec5b) popup_snote2_single_graphic_window_t2_ParamLimits

0xc92a,	// (0x0005ec5b) popup_snote2_single_graphic_window_t2

0xc7ec,	// (0x0005eb1d) popup_snote2_single_graphic_window_t3_ParamLimits

0xc7ec,	// (0x0005eb1d) popup_snote2_single_graphic_window_t3

0xc82d,	// (0x0005eb5e) popup_snote2_single_graphic_window_t4_ParamLimits

0xc82d,	// (0x0005eb5e) popup_snote2_single_graphic_window_t4

0xc863,	// (0x0005eb94) popup_snote2_single_graphic_window_t5_ParamLimits

0xc863,	// (0x0005eb94) popup_snote2_single_graphic_window_t5

0x0004,

0xfc86,	// (0x00061fb7) popup_snote2_single_graphic_window_t_ParamLimits

0xfc86,	// (0x00061fb7) popup_snote2_single_graphic_window_t

0xb372,	// (0x0005d6a3) clock_nsta_pane_cp2_t1

0xb372,	// (0x0005d6a3) clock_nsta_pane_cp2_t2

0x0001,

0xfa9a,	// (0x00061dcb) clock_nsta_pane_cp2_t

0x3b17,	// (0x00055e48) form_field_data_wide_pane_g1_ParamLimits

0xf497,	// (0x000617c8) form_field_data_wide_pane_g2_ParamLimits

0xf497,	// (0x000617c8) form_field_data_wide_pane_g2

0xf4a3,	// (0x000617d4) form_field_data_wide_pane_g3_ParamLimits

0xf4a3,	// (0x000617d4) form_field_data_wide_pane_g3

0x0002,

0xf65b,	// (0x0006198c) form_field_data_wide_pane_g_ParamLimits

0xf65b,	// (0x0006198c) form_field_data_wide_pane_g

0xb24d,	// (0x0005d57e) grid_touch_3_pane_ParamLimits

0xb24d,	// (0x0005d57e) grid_touch_3_pane

0xc976,	// (0x0005eca7) cell_touch_3_pane_ParamLimits

0xc976,	// (0x0005eca7) cell_touch_3_pane

0xb86e,	// (0x0005db9f) cell_touch_3_pane_g1

0xb86e,	// (0x0005db9f) cell_touch_3_pane_g2

0x0001,

0xfb1f,	// (0x00061e50) cell_touch_3_pane_g

0xefc8,	// (0x000612f9) cont_query_data_pane

0xefd0,	// (0x00061301) cont_query_data_pane_cp1

0xc9a9,	// (0x0005ecda) button_value_adjust_pane_cp7

0xc9b1,	// (0x0005ece2) query_popup_pane_cp3

0x8314,	// (0x0005a645) bg_popup_sub_pane_cp22_ParamLimits

0x6019,	// (0x0005834a) navi_navi_volume_pane_cp2

0x6034,	// (0x00058365) popup_side_volume_key_window_g2

0x6043,	// (0x00058374) popup_side_volume_key_window_g3

0x0002,

0xf6f1,	// (0x00061a22) popup_side_volume_key_window_g

0x6060,	// (0x00058391) popup_side_volume_key_window_t2

0x0001,

0xf6f8,	// (0x00061a29) popup_side_volume_key_window_t

0x85d0,	// (0x0005a901) popup_side_volume_key_window_ParamLimits

0x57bc,	// (0x00057aed) list_double_graphic_pane_g4_ParamLimits

0x57bc,	// (0x00057aed) list_double_graphic_pane_g4

0x9b60,	// (0x0005be91) list_single_2heading_msg_pane_ParamLimits

0x9b60,	// (0x0005be91) list_single_2heading_msg_pane

0x9c4d,	// (0x0005bf7e) list_single_2heading_msg_pane_g1_ParamLimits

0x9c4d,	// (0x0005bf7e) list_single_2heading_msg_pane_g1

0x9c59,	// (0x0005bf8a) list_single_2heading_msg_pane_g2_ParamLimits

0x9c59,	// (0x0005bf8a) list_single_2heading_msg_pane_g2

0x9c65,	// (0x0005bf96) list_single_2heading_msg_pane_g3_ParamLimits

0x9c65,	// (0x0005bf96) list_single_2heading_msg_pane_g3

0x9c71,	// (0x0005bfa2) list_single_2heading_msg_pane_g4_ParamLimits

0x9c71,	// (0x0005bfa2) list_single_2heading_msg_pane_g4

0x0003,

0xfc91,	// (0x00061fc2) list_single_2heading_msg_pane_g_ParamLimits

0xfc91,	// (0x00061fc2) list_single_2heading_msg_pane_g

0x74a4,	// (0x000597d5) list_single_2heading_msg_pane_t1_ParamLimits

0x74a4,	// (0x000597d5) list_single_2heading_msg_pane_t1

0x74cc,	// (0x000597fd) list_single_2heading_msg_pane_t2_ParamLimits

0x74cc,	// (0x000597fd) list_single_2heading_msg_pane_t2

0x74fb,	// (0x0005982c) list_single_2heading_msg_pane_t3_ParamLimits

0x74fb,	// (0x0005982c) list_single_2heading_msg_pane_t3

0x4300,	// (0x00056631) list_single_2heading_msg_pane_t4_ParamLimits

0x4300,	// (0x00056631) list_single_2heading_msg_pane_t4

0x0003,

0xfc9a,	// (0x00061fcb) list_single_2heading_msg_pane_t_ParamLimits

0xfc9a,	// (0x00061fcb) list_single_2heading_msg_pane_t

0xed67,	// (0x00061098) title_pane_g4_ParamLimits

0xed67,	// (0x00061098) title_pane_g4

0x5d55,	// (0x00058086) title_pane_stacon_g3_ParamLimits

0x5d55,	// (0x00058086) title_pane_stacon_g3

0xc4d2,	// (0x0005e803) list_single_2graphic_im_pane_g4_ParamLimits

0xc4d2,	// (0x0005e803) list_single_2graphic_im_pane_g4

0xa346,	// (0x0005c677) popup_side_volume_key_window_cp

0xab5d,	// (0x0005ce8e) main_idle_act2_pane_t1

0x6ae2,	// (0x00058e13) toolbar_button_pane_g10

0x55ca,	// (0x000578fb) popup_toolbar_window_cp1

0xb363,	// (0x0005d694) clock_nsta_pane_cp_t1

0xb363,	// (0x0005d694) clock_nsta_pane_cp_t2

0x0001,

0xfa95,	// (0x00061dc6) clock_nsta_pane_cp_t

0x6019,	// (0x0005834a) navi_navi_volume_pane_cp2_ParamLimits

0x6028,	// (0x00058359) popup_side_volume_key_window_g1_ParamLimits

0x6034,	// (0x00058365) popup_side_volume_key_window_g2_ParamLimits

0x6043,	// (0x00058374) popup_side_volume_key_window_g3_ParamLimits

0xf6f1,	// (0x00061a22) popup_side_volume_key_window_g_ParamLimits

0x7054,	// (0x00059385) fep_hwr_aid_pane

0x70fd,	// (0x0005942e) bg_fep_hwr_top_pane_g4_ParamLimits

0xb8cf,	// (0x0005dc00) fep_hwr_top_pane_g1_ParamLimits

0xb8e1,	// (0x0005dc12) fep_hwr_top_pane_g2_ParamLimits

0x711d,	// (0x0005944e) fep_hwr_top_pane_g3_ParamLimits

0xfaea,	// (0x00061e1b) fep_hwr_top_pane_g_ParamLimits

0x7132,	// (0x00059463) fep_hwr_top_text_pane_ParamLimits

0xa0fb,	// (0x0005c42c) aid_touch_tab_arrow_arrow_2

0xa104,	// (0x0005c435) aid_touch_tab_arrow_left_2

0x7068,	// (0x00059399) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x709f,	// (0x000593d0) fep_hwr_prediction_pane

0xba37,	// (0x0005dd68) fep_vkb_prediction_pane

0xbb3d,	// (0x0005de6e) fep_vkb_side_pane_g3_ParamLimits

0xbb3d,	// (0x0005de6e) fep_vkb_side_pane_g3

0x72c1,	// (0x000595f2) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x7332,	// (0x00059663) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x733f,	// (0x00059670) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb99,	// (0x00061eca) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x7534,	// (0x00059865) fep_hwr_prediction_pane_g1

0x753e,	// (0x0005986f) fep_hwr_prediction_pane_g2

0x7546,	// (0x00059877) fep_hwr_prediction_pane_g3

0x754e,	// (0x0005987f) fep_hwr_prediction_pane_g4

0x0003,

0xfca3,	// (0x00061fd4) fep_hwr_prediction_pane_g

0xc9d8,	// (0x0005ed09) fep_vkb_prediction_pane_g1

0xc9e2,	// (0x0005ed13) fep_vkb_prediction_pane_g2

0xc9ea,	// (0x0005ed1b) fep_vkb_prediction_pane_g3

0xc9f2,	// (0x0005ed23) fep_vkb_prediction_pane_g4

0x0003,

0xfcac,	// (0x00061fdd) fep_vkb_prediction_pane_g

0x6e32,	// (0x00059163) slider_set_pane_g3

0x6e46,	// (0x00059177) slider_set_pane_g4

0x6e5e,	// (0x0005918f) slider_set_pane_g5

0x6e32,	// (0x00059163) slider_set_pane_g6

0x6e74,	// (0x000591a5) slider_set_pane_g7

0xa7cc,	// (0x0005cafd) slider_form_pane_g3

0xa7d5,	// (0x0005cb06) slider_form_pane_g4

0xa7dd,	// (0x0005cb0e) slider_form_pane_g5

0xa7cc,	// (0x0005cafd) slider_form_pane_g6

0xa7e5,	// (0x0005cb16) slider_form_pane_g7

0xae21,	// (0x0005d152) slider_set_pane_vc_g3

0xae2a,	// (0x0005d15b) slider_set_pane_vc_g4

0xae33,	// (0x0005d164) slider_set_pane_vc_g5

0xae21,	// (0x0005d152) slider_set_pane_vc_g6

0xae3c,	// (0x0005d16d) slider_set_pane_vc_g7

0xb012,	// (0x0005d343) slider_form_pane_vc_g1

0xb01b,	// (0x0005d34c) slider_form_pane_vc_g2

0xb024,	// (0x0005d355) slider_form_pane_vc_g3

0xb012,	// (0x0005d343) slider_form_pane_vc_g4

0xb02d,	// (0x0005d35e) slider_form_pane_vc_g5

0x0004,

0xfa67,	// (0x00061d98) slider_form_pane_vc_g

0x4fde,	// (0x0005730f) main_idle_act3_pane

0xc9fa,	// (0x0005ed2b) ai3_links_pane

0xca03,	// (0x0005ed34) popup_ai3_data_window_ParamLimits

0xca03,	// (0x0005ed34) popup_ai3_data_window

0xed49,	// (0x0006107a) grid_ai3_links_pane

0xca21,	// (0x0005ed52) cell_ai3_links_pane_ParamLimits

0xca21,	// (0x0005ed52) cell_ai3_links_pane

0xca3b,	// (0x0005ed6c) bg_popup_sub_pane_cp11

0xca48,	// (0x0005ed79) cell_ai3_links_pane_g1

0xed49,	// (0x0006107a) bg_popup_sub_pane_cp12

0xca6d,	// (0x0005ed9e) heading_ai3_data_pane

0xca75,	// (0x0005eda6) list_ai3_gene_pane

0xca81,	// (0x0005edb2) popup_ai3_data_window_g1

0xca89,	// (0x0005edba) heading_ai3_data_pane_g1

0xca91,	// (0x0005edc2) heading_ai3_data_pane_t1

0xca9f,	// (0x0005edd0) list_double_ai3_gene_pane_ParamLimits

0xca9f,	// (0x0005edd0) list_double_ai3_gene_pane

0xcaac,	// (0x0005eddd) list_single_ai3_gene_pane_ParamLimits

0xcaac,	// (0x0005eddd) list_single_ai3_gene_pane

0xb833,	// (0x0005db64) list_highlight_pane_cp7_ParamLimits

0xb833,	// (0x0005db64) list_highlight_pane_cp7

0xcab9,	// (0x0005edea) list_single_a13_gene_pane_t1_ParamLimits

0xcab9,	// (0x0005edea) list_single_a13_gene_pane_t1

0xcad0,	// (0x0005ee01) list_single_ai3_gene_pane_g1

0xcad9,	// (0x0005ee0a) list_single_ai3_gene_pane_g2

0x0001,

0xfcb5,	// (0x00061fe6) list_single_ai3_gene_pane_g

0xcae1,	// (0x0005ee12) list_double_ai3_gene_pane_g1_ParamLimits

0xcae1,	// (0x0005ee12) list_double_ai3_gene_pane_g1

0xcaed,	// (0x0005ee1e) list_double_ai3_gene_pane_t1_ParamLimits

0xcaed,	// (0x0005ee1e) list_double_ai3_gene_pane_t1

0xcb09,	// (0x0005ee3a) list_double_ai3_gene_pane_t2_ParamLimits

0xcb09,	// (0x0005ee3a) list_double_ai3_gene_pane_t2

0xcb1e,	// (0x0005ee4f) list_double_ai3_gene_pane_t3_ParamLimits

0xcb1e,	// (0x0005ee4f) list_double_ai3_gene_pane_t3

0x0002,

0xfcba,	// (0x00061feb) list_double_ai3_gene_pane_t_ParamLimits

0xfcba,	// (0x00061feb) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x42f6,	// (0x00056627) aid_size_min_col_2

0xc9c2,	// (0x0005ecf3) aid_size_min_msg_ParamLimits

0xc9c2,	// (0x0005ecf3) aid_size_min_msg

0xbc49,	// (0x0005df7a) fep_vkb_top_text_pane_g2_ParamLimits

0xbc49,	// (0x0005df7a) fep_vkb_top_text_pane_g2

0x0001,

0xfb1a,	// (0x00061e4b) fep_vkb_top_text_pane_g_ParamLimits

0xfb1a,	// (0x00061e4b) fep_vkb_top_text_pane_g

0x4fde,	// (0x0005730f) main_hc_apps_shell_pane

0xcb3b,	// (0x0005ee6c) grid_hc_apps_pane_ParamLimits

0xcb3b,	// (0x0005ee6c) grid_hc_apps_pane

0xcb4d,	// (0x0005ee7e) list_hc_apps_pane

0xcb55,	// (0x0005ee86) scroll_pane_cp37_ParamLimits

0xcb55,	// (0x0005ee86) scroll_pane_cp37

0xcb61,	// (0x0005ee92) cell_hc_apps_pane_ParamLimits

0xcb61,	// (0x0005ee92) cell_hc_apps_pane

0xcc17,	// (0x0005ef48) cell_hc_apps_pane_g1_ParamLimits

0xcc17,	// (0x0005ef48) cell_hc_apps_pane_g1

0xcc43,	// (0x0005ef74) cell_hc_apps_pane_g2_ParamLimits

0xcc43,	// (0x0005ef74) cell_hc_apps_pane_g2

0xcc5f,	// (0x0005ef90) cell_hc_apps_pane_g3_ParamLimits

0xcc5f,	// (0x0005ef90) cell_hc_apps_pane_g3

0x0002,

0xfcc1,	// (0x00061ff2) cell_hc_apps_pane_g_ParamLimits

0xfcc1,	// (0x00061ff2) cell_hc_apps_pane_g

0xcc81,	// (0x0005efb2) cell_hc_apps_pane_t1_ParamLimits

0xcc81,	// (0x0005efb2) cell_hc_apps_pane_t1

0xeeec,	// (0x0006121d) grid_highlight_pane_cp10_ParamLimits

0xeeec,	// (0x0006121d) grid_highlight_pane_cp10

0xccc1,	// (0x0005eff2) list_single_hc_apps_pane_ParamLimits

0xccc1,	// (0x0005eff2) list_single_hc_apps_pane

0xcd00,	// (0x0005f031) list_single_hc_apps_pane_g1

0x9c89,	// (0x0005bfba) list_single_hc_apps_pane_g2

0x0001,

0xfcc8,	// (0x00061ff9) list_single_hc_apps_pane_g

0x9ca2,	// (0x0005bfd3) list_single_hc_apps_pane_g2_copy1

0x7556,	// (0x00059887) list_single_hc_apps_pane_t1

0xedab,	// (0x000610dc) bg_set_opt_pane_cp_ParamLimits

0x531f,	// (0x00057650) setting_slider_pane_t1_ParamLimits

0x5338,	// (0x00057669) setting_slider_pane_t2_ParamLimits

0x5352,	// (0x00057683) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x0006186a) setting_slider_pane_t_ParamLimits

0x536a,	// (0x0005769b) slider_set_pane_ParamLimits

0x6359,	// (0x0005868a) control_pane_g5_ParamLimits

0x6359,	// (0x0005868a) control_pane_g5

0xa5ff,	// (0x0005c930) slider_set_pane_g1_ParamLimits

0x6e26,	// (0x00059157) slider_set_pane_g2_ParamLimits

0x6e32,	// (0x00059163) slider_set_pane_g3_ParamLimits

0x6e46,	// (0x00059177) slider_set_pane_g4_ParamLimits

0x6e5e,	// (0x0005918f) slider_set_pane_g5_ParamLimits

0x6e32,	// (0x00059163) slider_set_pane_g6_ParamLimits

0x6e74,	// (0x000591a5) slider_set_pane_g7_ParamLimits

0xf944,	// (0x00061c75) slider_set_pane_g_ParamLimits

0x86b4,	// (0x0005a9e5) navi_icon_text_pane_ParamLimits

0x8bb1,	// (0x0005aee2) aid_fill_nsta_2_ParamLimits

0x8bf2,	// (0x0005af23) aid_touch_tab_arrow_left_ParamLimits

0x8bfe,	// (0x0005af2f) aid_touch_tab_arrow_right_ParamLimits

0x8c6a,	// (0x0005af9b) clock_nsta_pane_ParamLimits

0xa0dd,	// (0x0005c40e) navi_icon_pane_g1_ParamLimits

0xa0e9,	// (0x0005c41a) navi_text_pane_t1_ParamLimits

0xb480,	// (0x0005d7b1) navi_icon_text_pane_g1_ParamLimits

0xb48c,	// (0x0005d7bd) navi_icon_text_pane_t1_ParamLimits

0xcd00,	// (0x0005f031) list_single_hc_apps_pane_g1_ParamLimits

0x9c89,	// (0x0005bfba) list_single_hc_apps_pane_g2_ParamLimits

0xfcc8,	// (0x00061ff9) list_single_hc_apps_pane_g_ParamLimits

0x9ca2,	// (0x0005bfd3) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x7556,	// (0x00059887) list_single_hc_apps_pane_t1_ParamLimits

0x5153,	// (0x00057484) popup_toolbar2_fixed_window_ParamLimits

0x5153,	// (0x00057484) popup_toolbar2_fixed_window

0x69d4,	// (0x00058d05) popup_toolbar2_float_window

0xed49,	// (0x0006107a) bg_popup_sub_pane_cp27

0xcd19,	// (0x0005f04a) grid_toolbar2_float_pane

0xed49,	// (0x0006107a) bg_popup_sub_pane_cp26

0xcd19,	// (0x0005f04a) grid_toolbar2_fixed_pane

0xcd21,	// (0x0005f052) cell_toolbar2_fixed_pane_ParamLimits

0xcd21,	// (0x0005f052) cell_toolbar2_fixed_pane

0xcd31,	// (0x0005f062) cell_toolbar2_fixed_pane_g1

0xcd3a,	// (0x0005f06b) toolbar2_fixed_button_pane

0x90ad,	// (0x0005b3de) toolbar2_fixed_button_pane_g1

0x90bd,	// (0x0005b3ee) toolbar2_fixed_button_pane_g2

0x90b5,	// (0x0005b3e6) toolbar2_fixed_button_pane_g3

0x90cd,	// (0x0005b3fe) toolbar2_fixed_button_pane_g4

0x90c5,	// (0x0005b3f6) toolbar2_fixed_button_pane_g5

0x90d5,	// (0x0005b406) toolbar2_fixed_button_pane_g6

0x90dd,	// (0x0005b40e) toolbar2_fixed_button_pane_g7

0x90ed,	// (0x0005b41e) toolbar2_fixed_button_pane_g8

0x90e5,	// (0x0005b416) toolbar2_fixed_button_pane_g9

0x0008,

0xf846,	// (0x00061b77) toolbar2_fixed_button_pane_g

0xcd42,	// (0x0005f073) cell_toolbar2_float_pane_ParamLimits

0xcd42,	// (0x0005f073) cell_toolbar2_float_pane

0xcd53,	// (0x0005f084) cell_toolbar2_float_pane_g1

0xcd3a,	// (0x0005f06b) toolbar2_fixed_button_pane_cp

0xb9a5,	// (0x0005dcd6) fep_vkb_accented_list_pane_ParamLimits

0xb9a5,	// (0x0005dcd6) fep_vkb_accented_list_pane

0x72a1,	// (0x000595d2) bg_popup_fep_shadow_pane_g9

0x8838,	// (0x0005ab69) bg_popup_fep_shadow_pane_cp3

0x3326,	// (0x00055657) list_accented_list_pane

0xcd5c,	// (0x0005f08d) list_single_accented_list_pane_ParamLimits

0xcd5c,	// (0x0005f08d) list_single_accented_list_pane

0x8838,	// (0x0005ab69) list_highlight_pane_cp10

0xcd6d,	// (0x0005f09e) list_single_accented_list_pane_t1

0x691a,	// (0x00058c4b) popup_slider_window_ParamLimits

0x691a,	// (0x00058c4b) popup_slider_window

0xc9b9,	// (0x0005ecea) aid_indentation_list_msg

0xce3d,	// (0x0005f16e) bg_popup_window_pane_cp19

0xcea9,	// (0x0005f1da) popup_slider_window_g1

0xcec5,	// (0x0005f1f6) popup_slider_window_g2

0xcee1,	// (0x0005f212) popup_slider_window_g3

0x0005,

0xfccd,	// (0x00061ffe) popup_slider_window_g

0xcf47,	// (0x0005f278) popup_slider_window_t1

0xcfbb,	// (0x0005f2ec) small_volume_slider_vertical_pane

0xb86e,	// (0x0005db9f) small_volume_slider_vertical_pane_g1

0xb86e,	// (0x0005db9f) small_volume_slider_vertical_pane_g2

0xcfd7,	// (0x0005f308) small_volume_slider_vertical_pane_g3

0x0002,

0xfcdf,	// (0x00062010) small_volume_slider_vertical_pane_g

0x4f01,	// (0x00057232) area_side_right_pane_ParamLimits

0x4f01,	// (0x00057232) area_side_right_pane

0x7584,	// (0x000598b5) aid_size_side_button_ParamLimits

0x7584,	// (0x000598b5) aid_size_side_button

0x7598,	// (0x000598c9) grid_sctrl_middle_pane_ParamLimits

0x7598,	// (0x000598c9) grid_sctrl_middle_pane

0x75b7,	// (0x000598e8) sctrl_sk_bottom_pane

0x75c8,	// (0x000598f9) sctrl_sk_top_pane

0x75da,	// (0x0005990b) aid_touch_sctrl_top

0x75e7,	// (0x00059918) bg_sctrl_sk_pane_ParamLimits

0x75e7,	// (0x00059918) bg_sctrl_sk_pane

0x75f5,	// (0x00059926) sctrl_sk_top_pane_g1

0x7602,	// (0x00059933) sctrl_sk_top_pane_t1

0x75da,	// (0x0005990b) aid_touch_sctrl_bottom

0x75e7,	// (0x00059918) bg_sctrl_sk_pane_cp_ParamLimits

0x75e7,	// (0x00059918) bg_sctrl_sk_pane_cp

0x761d,	// (0x0005994e) sctrl_sk_bottom_pane_g1

0x7602,	// (0x00059933) sctrl_sk_bottom_pane_t1

0x7626,	// (0x00059957) cell_sctrl_middle_pane_ParamLimits

0x7626,	// (0x00059957) cell_sctrl_middle_pane

0x7643,	// (0x00059974) aid_touch_sctrl_middle_ParamLimits

0x7643,	// (0x00059974) aid_touch_sctrl_middle

0x7655,	// (0x00059986) bg_sctrl_middle_pane_ParamLimits

0x7655,	// (0x00059986) bg_sctrl_middle_pane

0x72c1,	// (0x000595f2) cell_sctrl_middle_pane_g1_ParamLimits

0x72c1,	// (0x000595f2) cell_sctrl_middle_pane_g1

0x7663,	// (0x00059994) cell_sctrl_middle_pane_g2_ParamLimits

0x7663,	// (0x00059994) cell_sctrl_middle_pane_g2

0x0001,

0xfceb,	// (0x0006201c) cell_sctrl_middle_pane_g_ParamLimits

0xfceb,	// (0x0006201c) cell_sctrl_middle_pane_g

0x90ad,	// (0x0005b3de) bg_sctrl_middle_pane_g1

0x90b5,	// (0x0005b3e6) bg_sctrl_middle_pane_g2

0x90bd,	// (0x0005b3ee) bg_sctrl_middle_pane_g3

0x90c5,	// (0x0005b3f6) bg_sctrl_middle_pane_g4

0x90cd,	// (0x0005b3fe) bg_sctrl_middle_pane_g5

0x90d5,	// (0x0005b406) bg_sctrl_middle_pane_g6

0x90dd,	// (0x0005b40e) bg_sctrl_middle_pane_g7

0x90e5,	// (0x0005b416) bg_sctrl_middle_pane_g8

0x0007,

0xfcf0,	// (0x00062021) bg_sctrl_middle_pane_g

0x90ed,	// (0x0005b41e) bg_sctrl_middle_pane_g8_copy1

0x90ad,	// (0x0005b3de) bg_sctrl_sk_pane_g1

0x90bd,	// (0x0005b3ee) bg_sctrl_sk_pane_g2

0x90b5,	// (0x0005b3e6) bg_sctrl_sk_pane_g3

0x0008,

0xf846,	// (0x00061b77) bg_sctrl_sk_pane_g

0xf3c2,	// (0x000616f3) aid_size_touch_scroll_bar

0x90cd,	// (0x0005b3fe) bg_sctrl_sk_pane_g4

0x90c5,	// (0x0005b3f6) bg_sctrl_sk_pane_g5

0x90d5,	// (0x0005b406) bg_sctrl_sk_pane_g6

0x90dd,	// (0x0005b40e) bg_sctrl_sk_pane_g7

0x90ed,	// (0x0005b41e) bg_sctrl_sk_pane_g8

0x90e5,	// (0x0005b416) bg_sctrl_sk_pane_g9

0x652f,	// (0x00058860) popup_fep_china_hwr2_fs_candidate_window

0x6539,	// (0x0005886a) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x6539,	// (0x0005886a) popup_fep_china_hwr2_fs_control_window

0x72c1,	// (0x000595f2) sctrl_sk_top_pane_g2

0x0001,

0xfce6,	// (0x00062017) sctrl_sk_top_pane_g

0xcfe0,	// (0x0005f311) aid_fep_china_hwr2_fs_cell_ParamLimits

0xcfe0,	// (0x0005f311) aid_fep_china_hwr2_fs_cell

0xcff3,	// (0x0005f324) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xcff3,	// (0x0005f324) bg_popup_fep_shadow_pane_cp4

0xd00c,	// (0x0005f33d) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd00c,	// (0x0005f33d) bg_popup_fep_shadow_pane_cp5

0xd01e,	// (0x0005f34f) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd01e,	// (0x0005f34f) popup_fep_china_hwr2_fs_control_bar_grid

0xd02e,	// (0x0005f35f) popup_fep_china_hwr2_fs_control_funtion_grid

0xd036,	// (0x0005f367) aid_fep_china_hwr2_fs_candi_cell

0xed49,	// (0x0006107a) bg_popup_fep_shadow_pane_cp6

0xd040,	// (0x0005f371) popup_fep_china_hwr2_fs_candidate_grid

0xd04a,	// (0x0005f37b) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd04a,	// (0x0005f37b) cell_fep_china_hwr2_fs_funtion_grid

0xb86e,	// (0x0005db9f) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd062,	// (0x0005f393) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd062,	// (0x0005f393) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd070,	// (0x0005f3a1) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd070,	// (0x0005f3a1) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd01,	// (0x00062032) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd01,	// (0x00062032) cell_fep_china_hwr2_fs_funtion_grid_g

0xd086,	// (0x0005f3b7) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd086,	// (0x0005f3b7) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd09b,	// (0x0005f3cc) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd09b,	// (0x0005f3cc) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd06,	// (0x00062037) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd06,	// (0x00062037) cell_fep_china_hwr2_fs_funtion_grid_t

0xd0b7,	// (0x0005f3e8) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd0bf,	// (0x0005f3f0) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd0c7,	// (0x0005f3f8) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd0b,	// (0x0006203c) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd0cf,	// (0x0005f400) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd0cf,	// (0x0005f400) cell_fep_china_hwr2_fs_candidate_grid

0xd0ee,	// (0x0005f41f) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd0f6,	// (0x0005f427) popup_fep_china_hwr2_fs_candidate_grid_g21

0xb86e,	// (0x0005db9f) cell_fep_china_hwr2_fs_candidate_grid_g1

0xb86e,	// (0x0005db9f) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb1f,	// (0x00061e50) cell_fep_china_hwr2_fs_candidate_grid_g

0xd0fe,	// (0x0005f42f) cell_fep_china_hwr2_fs_candidate_grid_t1

0x8c7d,	// (0x0005afae) clock_nsta_pane_cp_24_ParamLimits

0x8c7d,	// (0x0005afae) clock_nsta_pane_cp_24

0x8cfd,	// (0x0005b02e) indicator_nsta_pane_cp_24_ParamLimits

0x8cfd,	// (0x0005b02e) indicator_nsta_pane_cp_24

0x9f59,	// (0x0005c28a) heading_pane_g1

0x0001,

0xf8ab,	// (0x00061bdc) heading_pane_g

0xa9a4,	// (0x0005ccd5) grid_sct_catagory_button_pane

0xa9d6,	// (0x0005cd07) scroll_pane_cp5_ParamLimits

0xb4ce,	// (0x0005d7ff) button_value_adjust_pane_cp5_ParamLimits

0xb4ce,	// (0x0005d7ff) button_value_adjust_pane_cp5

0xb5b3,	// (0x0005d8e4) form2_midp_time_pane_ParamLimits

0xd10c,	// (0x0005f43d) cell_sct_catagory_button_pane_ParamLimits

0xd10c,	// (0x0005f43d) cell_sct_catagory_button_pane

0xb833,	// (0x0005db64) bg_button_pane_cp01_ParamLimits

0xb833,	// (0x0005db64) bg_button_pane_cp01

0xb86e,	// (0x0005db9f) cell_sct_catagory_button_pane_g1

0x695b,	// (0x00058c8c) popup_tb_extension_window

0xd11e,	// (0x0005f44f) aid_size_cell_ext_ParamLimits

0xd11e,	// (0x0005f44f) aid_size_cell_ext

0xeeec,	// (0x0006121d) bg_tb_trans_pane_cp1_ParamLimits

0xeeec,	// (0x0006121d) bg_tb_trans_pane_cp1

0xd13e,	// (0x0005f46f) grid_tb_ext_pane_ParamLimits

0xd13e,	// (0x0005f46f) grid_tb_ext_pane

0xd16c,	// (0x0005f49d) cell_tb_ext_pane_ParamLimits

0xd16c,	// (0x0005f49d) cell_tb_ext_pane

0xd183,	// (0x0005f4b4) cell_tb_ext_pane_g1_ParamLimits

0xd183,	// (0x0005f4b4) cell_tb_ext_pane_g1

0xd1a0,	// (0x0005f4d1) cell_tb_ext_pane_t1

0xeeec,	// (0x0006121d) list_highlight_pane_cp11_ParamLimits

0xeeec,	// (0x0006121d) list_highlight_pane_cp11

0x5172,	// (0x000574a3) popup_uni_indicator_window_ParamLimits

0x5172,	// (0x000574a3) popup_uni_indicator_window

0xf489,	// (0x000617ba) bg_popup_sub_pane_cp14

0xd1bb,	// (0x0005f4ec) list_uniindi_pane

0xd1c7,	// (0x0005f4f8) uniindi_top_pane

0xeeec,	// (0x0006121d) bg_uniindi_top_pane

0xd1e8,	// (0x0005f519) uniindi_top_pane_g1

0xd1fe,	// (0x0005f52f) uniindi_top_pane_g2

0x0003,

0xfd12,	// (0x00062043) uniindi_top_pane_g

0xd228,	// (0x0005f559) uniindi_top_pane_t1

0xd254,	// (0x0005f585) list_single_uniindi_pane_ParamLimits

0xd254,	// (0x0005f585) list_single_uniindi_pane

0xb86e,	// (0x0005db9f) bg_uniindi_top_pane_g1

0xd288,	// (0x0005f5b9) list_single_uniindi_pane_g1

0xd29b,	// (0x0005f5cc) list_single_uniindi_pane_t1

0x4fde,	// (0x0005730f) control_bg_pane

0xd2c0,	// (0x0005f5f1) bg_sctrl_sk_pane_cp1

0xd2c9,	// (0x0005f5fa) bg_sctrl_sk_pane_cp2

0xd2d2,	// (0x0005f603) control_bg_pane_g1

0xd2db,	// (0x0005f60c) control_bg_pane_g2

0x0001,

0xfd1b,	// (0x0006204c) control_bg_pane_g

0xb306,	// (0x0005d637) cell_indicator_nsta_pane_g1_ParamLimits

0xb314,	// (0x0005d645) cell_indicator_nsta_pane_g2_ParamLimits

0xfa83,	// (0x00061db4) cell_indicator_nsta_pane_g_ParamLimits

0x3fb6,	// (0x000562e7) form2_midp_time_pane_t1_ParamLimits

0x648d,	// (0x000587be) main_idle_act4_pane_ParamLimits

0x648d,	// (0x000587be) main_idle_act4_pane

0x695b,	// (0x00058c8c) popup_tb_extension_window_ParamLimits

0xd15e,	// (0x0005f48f) tb_ext_find_pane_ParamLimits

0xd15e,	// (0x0005f48f) tb_ext_find_pane

0xd2e4,	// (0x0005f615) ai_gene_pane_1_cp1

0x8982,	// (0x0005acb3) ai_gene_pane_2_cp1

0xd2ec,	// (0x0005f61d) list_single_idle_plugin_calendar_pane

0xd2f5,	// (0x0005f626) list_single_idle_plugin_notification_pane

0xd2fe,	// (0x0005f62f) list_single_idle_plugin_player_pane

0xd307,	// (0x0005f638) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd307,	// (0x0005f638) list_single_idle_plugin_shortcut_pane

0xd329,	// (0x0005f65a) main_idle_act4_pane_t1

0xd33b,	// (0x0005f66c) main_idle_act4_pane_t2

0x0001,

0xfd20,	// (0x00062051) main_idle_act4_pane_t

0xd34d,	// (0x0005f67e) middle_sk_idle_act4_pane_ParamLimits

0xd34d,	// (0x0005f67e) middle_sk_idle_act4_pane

0xd363,	// (0x0005f694) popup_clock_digital_analogue_window_cp2

0xd37d,	// (0x0005f6ae) shortcut_wheel_idle_act4_pane_ParamLimits

0xd37d,	// (0x0005f6ae) shortcut_wheel_idle_act4_pane

0xb86e,	// (0x0005db9f) shortcut_wheel_idle_act4_pane_g1

0xb86e,	// (0x0005db9f) shortcut_wheel_idle_act4_pane_g2

0xb86e,	// (0x0005db9f) shortcut_wheel_idle_act4_pane_g3

0xb86e,	// (0x0005db9f) shortcut_wheel_idle_act4_pane_g4

0xb86e,	// (0x0005db9f) shortcut_wheel_idle_act4_pane_g5

0xd391,	// (0x0005f6c2) shortcut_wheel_idle_act4_pane_g6

0xd399,	// (0x0005f6ca) shortcut_wheel_idle_act4_pane_g7

0xd3a1,	// (0x0005f6d2) shortcut_wheel_idle_act4_pane_g8

0xd3a9,	// (0x0005f6da) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd25,	// (0x00062056) shortcut_wheel_idle_act4_pane_g

0xbae9,	// (0x0005de1a) middle_sk_idle_act4_pane_g1_ParamLimits

0xbae9,	// (0x0005de1a) middle_sk_idle_act4_pane_g1

0xd40d,	// (0x0005f73e) middle_sk_idle_act4_pane_g2_ParamLimits

0xd40d,	// (0x0005f73e) middle_sk_idle_act4_pane_g2

0x0001,

0xfd48,	// (0x00062079) middle_sk_idle_act4_pane_g_ParamLimits

0xfd48,	// (0x00062079) middle_sk_idle_act4_pane_g

0xd419,	// (0x0005f74a) middle_sk_idle_act4_pane_t1_ParamLimits

0xd419,	// (0x0005f74a) middle_sk_idle_act4_pane_t1

0xd436,	// (0x0005f767) grid_ai_shortcut_pane_ParamLimits

0xd436,	// (0x0005f767) grid_ai_shortcut_pane

0xd44f,	// (0x0005f780) list_highlight_pane_cp16_ParamLimits

0xd44f,	// (0x0005f780) list_highlight_pane_cp16

0xd45c,	// (0x0005f78d) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd45c,	// (0x0005f78d) list_single_idle_plugin_shortcut_pane_g1

0xd468,	// (0x0005f799) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd468,	// (0x0005f799) list_single_idle_plugin_shortcut_pane_g2

0xd482,	// (0x0005f7b3) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd482,	// (0x0005f7b3) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd4d,	// (0x0006207e) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd4d,	// (0x0006207e) list_single_idle_plugin_shortcut_pane_g

0xd495,	// (0x0005f7c6) cell_ai_shortcut_pane_ParamLimits

0xd495,	// (0x0005f7c6) cell_ai_shortcut_pane

0xd4b8,	// (0x0005f7e9) cell_ai_shortcut_pane_g1_ParamLimits

0xd4b8,	// (0x0005f7e9) cell_ai_shortcut_pane_g1

0xd2e4,	// (0x0005f615) ai_gene_pane_1_cp2

0xd4da,	// (0x0005f80b) ai_gene_pane_2_cp2

0xd4e2,	// (0x0005f813) list_highlight_pane_cp15

0xd4eb,	// (0x0005f81c) list_single_idle_plugin_calendar_pane_g1

0xd4e2,	// (0x0005f813) list_highlight_pane_cp17

0xd4f3,	// (0x0005f824) list_single_idle_plugin_calendar_pane_g1_copy1

0xd4fb,	// (0x0005f82c) list_single_idle_plugin_player_pane_g1

0xac0b,	// (0x0005cf3c) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd54,	// (0x00062085) list_single_idle_plugin_player_pane_g

0xd503,	// (0x0005f834) list_single_idle_plugin_player_pane_t1

0xd511,	// (0x0005f842) list_single_idle_plugin_player_pane_t2

0xd51f,	// (0x0005f850) list_single_idle_plugin_player_pane_t3

0xd52d,	// (0x0005f85e) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd59,	// (0x0006208a) list_single_idle_plugin_player_pane_t

0xd53b,	// (0x0005f86c) wait_bar_pane_cp15

0xd543,	// (0x0005f874) grid_ai_notification_pane

0xac0b,	// (0x0005cf3c) list_single_idle_plugin_notification_pane_g1

0xd54c,	// (0x0005f87d) cell_ai_notification_pane_ParamLimits

0xd54c,	// (0x0005f87d) cell_ai_notification_pane

0xd559,	// (0x0005f88a) cell_ai_notification_pane_g1

0xd561,	// (0x0005f892) cell_ai_notification_pane_t1

0xd56f,	// (0x0005f8a0) tb_ext_find_button_pane

0xd577,	// (0x0005f8a8) tb_ext_find_pane_g1

0xd57f,	// (0x0005f8b0) tb_ext_find_pane_t1

0x822c,	// (0x0005a55d) tb_ext_find_button_pane_g1

0xd58d,	// (0x0005f8be) tb_ext_find_button_pane_g2

0x0001,

0xfd62,	// (0x00062093) tb_ext_find_button_pane_g

0xd329,	// (0x0005f65a) main_idle_act4_pane_t1_ParamLimits

0xd33b,	// (0x0005f66c) main_idle_act4_pane_t2_ParamLimits

0xfd20,	// (0x00062051) main_idle_act4_pane_t_ParamLimits

0xd363,	// (0x0005f694) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd371,	// (0x0005f6a2) sat_plugin_idle_act4_pane_ParamLimits

0xd371,	// (0x0005f6a2) sat_plugin_idle_act4_pane

0xd596,	// (0x0005f8c7) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd596,	// (0x0005f8c7) sat_plugin_idle_act4_pane_t1

0xd5a9,	// (0x0005f8da) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd5a9,	// (0x0005f8da) sat_plugin_idle_act4_pane_t2

0xd5bc,	// (0x0005f8ed) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd5bc,	// (0x0005f8ed) sat_plugin_idle_act4_pane_t3

0xd5cf,	// (0x0005f900) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd5cf,	// (0x0005f900) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd67,	// (0x00062098) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd67,	// (0x00062098) sat_plugin_idle_act4_pane_t

0x50a3,	// (0x000573d4) popup_battery_window_ParamLimits

0x50a3,	// (0x000573d4) popup_battery_window

0xeeec,	// (0x0006121d) bg_popup_sub_pane_cp25_ParamLimits

0xeeec,	// (0x0006121d) bg_popup_sub_pane_cp25

0xd5e2,	// (0x0005f913) popup_battery_window_g1_ParamLimits

0xd5e2,	// (0x0005f913) popup_battery_window_g1

0xd5ee,	// (0x0005f91f) popup_battery_window_t1_ParamLimits

0xd5ee,	// (0x0005f91f) popup_battery_window_t1

0xd600,	// (0x0005f931) popup_battery_window_t2_ParamLimits

0xd600,	// (0x0005f931) popup_battery_window_t2

0x0001,

0xfd70,	// (0x000620a1) popup_battery_window_t_ParamLimits

0xfd70,	// (0x000620a1) popup_battery_window_t

0x884c,	// (0x0005ab7d) midp_canvas_pane_ParamLimits

0x88c4,	// (0x0005abf5) midp_keypad_pane_ParamLimits

0x88c4,	// (0x0005abf5) midp_keypad_pane

0x8b5f,	// (0x0005ae90) main_midp_pane_ParamLimits

0xb381,	// (0x0005d6b2) signal_pane_g2_cp_ParamLimits

0xd61d,	// (0x0005f94e) aid_size_cell_midp_keypad_ParamLimits

0xd61d,	// (0x0005f94e) aid_size_cell_midp_keypad

0xd637,	// (0x0005f968) midp_keyp_game_grid_pane_ParamLimits

0xd637,	// (0x0005f968) midp_keyp_game_grid_pane

0xd657,	// (0x0005f988) midp_keyp_rocker_pane_ParamLimits

0xd657,	// (0x0005f988) midp_keyp_rocker_pane

0xd686,	// (0x0005f9b7) midp_keyp_sk_left_pane_ParamLimits

0xd686,	// (0x0005f9b7) midp_keyp_sk_left_pane

0xd6e2,	// (0x0005fa13) midp_keyp_sk_right_pane_ParamLimits

0xd6e2,	// (0x0005fa13) midp_keyp_sk_right_pane

0xed49,	// (0x0006107a) bg_button_pane_cp03

0xd73e,	// (0x0005fa6f) midp_keyp_sk_left_pane_g1

0xed49,	// (0x0006107a) bg_button_pane_cp04

0xd73e,	// (0x0005fa6f) midp_keyp_sk_right_pane_g1

0xb86e,	// (0x0005db9f) midp_keyp_rocker_pane_g1

0xd746,	// (0x0005fa77) keyp_game_cell_pane_ParamLimits

0xd746,	// (0x0005fa77) keyp_game_cell_pane

0xed49,	// (0x0006107a) bg_button_pane_cp02

0xd759,	// (0x0005fa8a) keyp_game_cell_pane_g1

0x50ed,	// (0x0005741e) popup_fep_vkb2_window_ParamLimits

0x50ed,	// (0x0005741e) popup_fep_vkb2_window

0x7681,	// (0x000599b2) aid_size_cell_vkb2_ParamLimits

0x7681,	// (0x000599b2) aid_size_cell_vkb2

0x76d5,	// (0x00059a06) popup_fep_vkb2_window_g1_ParamLimits

0x76d5,	// (0x00059a06) popup_fep_vkb2_window_g1

0x771d,	// (0x00059a4e) vkb2_area_bottom_pane_ParamLimits

0x771d,	// (0x00059a4e) vkb2_area_bottom_pane

0x7771,	// (0x00059aa2) vkb2_area_keypad_pane_ParamLimits

0x7771,	// (0x00059aa2) vkb2_area_keypad_pane

0x77b7,	// (0x00059ae8) vkb2_area_top_pane_ParamLimits

0x77b7,	// (0x00059ae8) vkb2_area_top_pane

0x7831,	// (0x00059b62) vkb2_top_entry_pane_ParamLimits

0x7831,	// (0x00059b62) vkb2_top_entry_pane

0x785b,	// (0x00059b8c) vkb2_top_grid_left_pane_ParamLimits

0x785b,	// (0x00059b8c) vkb2_top_grid_left_pane

0x7879,	// (0x00059baa) vkb2_top_grid_right_pane_ParamLimits

0x7879,	// (0x00059baa) vkb2_top_grid_right_pane

0x7897,	// (0x00059bc8) vkb2_cell_keypad_pane_ParamLimits

0x7897,	// (0x00059bc8) vkb2_cell_keypad_pane

0x7968,	// (0x00059c99) vkb2_area_bottom_grid_pane_ParamLimits

0x7968,	// (0x00059c99) vkb2_area_bottom_grid_pane

0x798e,	// (0x00059cbf) vkb2_area_bottom_pane_g1_ParamLimits

0x798e,	// (0x00059cbf) vkb2_area_bottom_pane_g1

0x79b2,	// (0x00059ce3) vkb2_area_bottom_pane_g2_ParamLimits

0x79b2,	// (0x00059ce3) vkb2_area_bottom_pane_g2

0x79e0,	// (0x00059d11) vkb2_area_bottom_pane_g3_ParamLimits

0x79e0,	// (0x00059d11) vkb2_area_bottom_pane_g3

0x0002,

0xfd75,	// (0x000620a6) vkb2_area_bottom_pane_g_ParamLimits

0xfd75,	// (0x000620a6) vkb2_area_bottom_pane_g

0x7a41,	// (0x00059d72) vkb2_top_cell_left_pane_ParamLimits

0x7a41,	// (0x00059d72) vkb2_top_cell_left_pane

0xd76a,	// (0x0005fa9b) vkb2_top_entry_pane_g1_ParamLimits

0xd76a,	// (0x0005fa9b) vkb2_top_entry_pane_g1

0xd778,	// (0x0005faa9) vkb2_top_entry_pane_t1_ParamLimits

0xd778,	// (0x0005faa9) vkb2_top_entry_pane_t1

0xd7aa,	// (0x0005fadb) vkb2_top_entry_pane_t2_ParamLimits

0xd7aa,	// (0x0005fadb) vkb2_top_entry_pane_t2

0xd7dc,	// (0x0005fb0d) vkb2_top_entry_pane_t3_ParamLimits

0xd7dc,	// (0x0005fb0d) vkb2_top_entry_pane_t3

0x0002,

0xfd7c,	// (0x000620ad) vkb2_top_entry_pane_t_ParamLimits

0xfd7c,	// (0x000620ad) vkb2_top_entry_pane_t

0x7a8e,	// (0x00059dbf) vkb2_top_grid_right_pane_g1_ParamLimits

0x7a8e,	// (0x00059dbf) vkb2_top_grid_right_pane_g1

0x7aa4,	// (0x00059dd5) vkb2_top_grid_right_pane_g2_ParamLimits

0x7aa4,	// (0x00059dd5) vkb2_top_grid_right_pane_g2

0x7abc,	// (0x00059ded) vkb2_top_grid_right_pane_g3_ParamLimits

0x7abc,	// (0x00059ded) vkb2_top_grid_right_pane_g3

0x7ad4,	// (0x00059e05) vkb2_top_grid_right_pane_g4_ParamLimits

0x7ad4,	// (0x00059e05) vkb2_top_grid_right_pane_g4

0x0003,

0xfd83,	// (0x000620b4) vkb2_top_grid_right_pane_g_ParamLimits

0xfd83,	// (0x000620b4) vkb2_top_grid_right_pane_g

0x7aea,	// (0x00059e1b) vkb2_top_cell_left_pane_g1

0x7b01,	// (0x00059e32) vkb2_cell_keypad_pane_g1_ParamLimits

0x7b01,	// (0x00059e32) vkb2_cell_keypad_pane_g1

0xd800,	// (0x0005fb31) vkb2_cell_keypad_pane_t1_ParamLimits

0xd800,	// (0x0005fb31) vkb2_cell_keypad_pane_t1

0x7b0f,	// (0x00059e40) vkb2_cell_bottom_grid_pane_ParamLimits

0x7b0f,	// (0x00059e40) vkb2_cell_bottom_grid_pane

0x7b48,	// (0x00059e79) vkb2_cell_bottom_grid_pane_g1

0xd3b1,	// (0x0005f6e2) aid_call2_pane_cp02

0xd3b9,	// (0x0005f6ea) aid_call_pane_cp02

0xd3c1,	// (0x0005f6f2) clock_digital_number_pane_cp10

0xd3c9,	// (0x0005f6fa) clock_digital_number_pane_cp11

0xd3d1,	// (0x0005f702) clock_digital_number_pane_cp12

0xd3d9,	// (0x0005f70a) clock_digital_number_pane_cp13

0xd3e1,	// (0x0005f712) clock_digital_separator_pane_cp10

0x822c,	// (0x0005a55d) popup_clock_digital_analogue_window_cp2_g1

0x822c,	// (0x0005a55d) popup_clock_digital_analogue_window_cp2_g2

0xd3e9,	// (0x0005f71a) popup_clock_digital_analogue_window_cp2_g3

0x822c,	// (0x0005a55d) popup_clock_digital_analogue_window_cp2_g4

0xd3e9,	// (0x0005f71a) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd38,	// (0x00062069) popup_clock_digital_analogue_window_cp2_g

0xd3f1,	// (0x0005f722) popup_clock_digital_analogue_window_cp2_t1

0xd3ff,	// (0x0005f730) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd43,	// (0x00062074) popup_clock_digital_analogue_window_cp2_t

0xb86e,	// (0x0005db9f) clock_digital_number_pane_cp10_g1

0xb86e,	// (0x0005db9f) clock_digital_number_pane_cp10_g2

0x0001,

0xfb1f,	// (0x00061e50) clock_digital_number_pane_cp10_g

0xb86e,	// (0x0005db9f) clock_digital_separator_pane_cp10_g1

0xb86e,	// (0x0005db9f) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb1f,	// (0x00061e50) clock_digital_separator_pane_cp10_g

0xd20a,	// (0x0005f53b) uniindi_top_pane_g3

0xd21b,	// (0x0005f54c) uniindi_top_pane_g4

0x7922,	// (0x00059c53) vkb2_row_keypad_pane_ParamLimits

0x7922,	// (0x00059c53) vkb2_row_keypad_pane

0x7b64,	// (0x00059e95) vkb2_cell_t_keypad_pane_ParamLimits

0x7b64,	// (0x00059e95) vkb2_cell_t_keypad_pane

0x7b74,	// (0x00059ea5) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x7b74,	// (0x00059ea5) vkb2_cell_t_keypad_pane_cp08

0x7b89,	// (0x00059eba) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x7b89,	// (0x00059eba) vkb2_cell_t_keypad_pane_cp09

0x7b9d,	// (0x00059ece) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x7b9d,	// (0x00059ece) vkb2_cell_t_keypad_pane_cp01

0x7bae,	// (0x00059edf) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x7bae,	// (0x00059edf) vkb2_cell_t_keypad_pane_cp02

0x7bbf,	// (0x00059ef0) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x7bbf,	// (0x00059ef0) vkb2_cell_t_keypad_pane_cp03

0x7bd0,	// (0x00059f01) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x7bd0,	// (0x00059f01) vkb2_cell_t_keypad_pane_cp04

0x7be1,	// (0x00059f12) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x7be1,	// (0x00059f12) vkb2_cell_t_keypad_pane_cp05

0x7bf2,	// (0x00059f23) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x7bf2,	// (0x00059f23) vkb2_cell_t_keypad_pane_cp06

0x7c05,	// (0x00059f36) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x7c05,	// (0x00059f36) vkb2_cell_t_keypad_pane_cp07

0x7c1a,	// (0x00059f4b) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x7c1a,	// (0x00059f4b) vkb2_cell_t_keypad_pane_cp10

0x72c1,	// (0x000595f2) vkb2_cell_t_keypad_pane_g1

0xd817,	// (0x0005fb48) vkb2_cell_t_keypad_pane_t1

0x4fde,	// (0x0005730f) popup_grid_graphic2_window

0xd829,	// (0x0005fb5a) aid_size_cell_graphic2_ParamLimits

0xd829,	// (0x0005fb5a) aid_size_cell_graphic2

0xd861,	// (0x0005fb92) bg_popup_window_pane_cp21_ParamLimits

0xd861,	// (0x0005fb92) bg_popup_window_pane_cp21

0xd86f,	// (0x0005fba0) graphic2_pages_pane_ParamLimits

0xd86f,	// (0x0005fba0) graphic2_pages_pane

0xd8b5,	// (0x0005fbe6) grid_graphic2_control_pane_ParamLimits

0xd8b5,	// (0x0005fbe6) grid_graphic2_control_pane

0xd8f3,	// (0x0005fc24) grid_graphic2_pane_ParamLimits

0xd8f3,	// (0x0005fc24) grid_graphic2_pane

0xd969,	// (0x0005fc9a) cell_graphic2_pane

0x4fde,	// (0x0005730f) main_comp_mode_pane

0xca75,	// (0x0005eda6) list_ai3_gene_pane_ParamLimits

0xce3d,	// (0x0005f16e) bg_popup_window_pane_cp19_ParamLimits

0xce49,	// (0x0005f17a) bg_touch_area_indi_pane_ParamLimits

0xce49,	// (0x0005f17a) bg_touch_area_indi_pane

0xce5f,	// (0x0005f190) bg_touch_area_indi_pane_cp01_ParamLimits

0xce5f,	// (0x0005f190) bg_touch_area_indi_pane_cp01

0xce75,	// (0x0005f1a6) bg_touch_area_indi_pane_cp02_ParamLimits

0xce75,	// (0x0005f1a6) bg_touch_area_indi_pane_cp02

0xce8f,	// (0x0005f1c0) bg_touch_area_indi_pane_cp03_ParamLimits

0xce8f,	// (0x0005f1c0) bg_touch_area_indi_pane_cp03

0xcea9,	// (0x0005f1da) popup_slider_window_g1_ParamLimits

0xcec5,	// (0x0005f1f6) popup_slider_window_g2_ParamLimits

0xcee1,	// (0x0005f212) popup_slider_window_g3_ParamLimits

0xfccd,	// (0x00061ffe) popup_slider_window_g_ParamLimits

0xcf47,	// (0x0005f278) popup_slider_window_t1_ParamLimits

0xcfbb,	// (0x0005f2ec) small_volume_slider_vertical_pane_ParamLimits

0xd969,	// (0x0005fc9a) cell_graphic2_pane_ParamLimits

0xd9bd,	// (0x0005fcee) bg_button_pane_cp10_ParamLimits

0xd9bd,	// (0x0005fcee) bg_button_pane_cp10

0xd9d2,	// (0x0005fd03) bg_button_pane_cp11_ParamLimits

0xd9d2,	// (0x0005fd03) bg_button_pane_cp11

0xd9e7,	// (0x0005fd18) graphic2_pages_pane_g1_ParamLimits

0xd9e7,	// (0x0005fd18) graphic2_pages_pane_g1

0xda02,	// (0x0005fd33) graphic2_pages_pane_g2_ParamLimits

0xda02,	// (0x0005fd33) graphic2_pages_pane_g2

0x0001,

0xfd91,	// (0x000620c2) graphic2_pages_pane_g_ParamLimits

0xfd91,	// (0x000620c2) graphic2_pages_pane_g

0xda1a,	// (0x0005fd4b) graphic2_pages_pane_t1_ParamLimits

0xda1a,	// (0x0005fd4b) graphic2_pages_pane_t1

0xda30,	// (0x0005fd61) cell_graphic2_control_pane_ParamLimits

0xda30,	// (0x0005fd61) cell_graphic2_control_pane

0xda50,	// (0x0005fd81) cell_graphic2_pane_g1_ParamLimits

0xda50,	// (0x0005fd81) cell_graphic2_pane_g1

0xda5d,	// (0x0005fd8e) cell_graphic2_pane_g2_ParamLimits

0xda5d,	// (0x0005fd8e) cell_graphic2_pane_g2

0xda6a,	// (0x0005fd9b) cell_graphic2_pane_g3_ParamLimits

0xda6a,	// (0x0005fd9b) cell_graphic2_pane_g3

0xda77,	// (0x0005fda8) cell_graphic2_pane_g4_ParamLimits

0xda77,	// (0x0005fda8) cell_graphic2_pane_g4

0xda84,	// (0x0005fdb5) cell_graphic2_pane_g5_ParamLimits

0xda84,	// (0x0005fdb5) cell_graphic2_pane_g5

0x0004,

0xfd96,	// (0x000620c7) cell_graphic2_pane_g_ParamLimits

0xfd96,	// (0x000620c7) cell_graphic2_pane_g

0xda9c,	// (0x0005fdcd) cell_graphic2_pane_t1_ParamLimits

0xda9c,	// (0x0005fdcd) cell_graphic2_pane_t1

0x9121,	// (0x0005b452) grid_highlight_pane_cp11_ParamLimits

0x9121,	// (0x0005b452) grid_highlight_pane_cp11

0xeeec,	// (0x0006121d) bg_button_pane_cp05

0xdad2,	// (0x0005fe03) cell_graphic2_control_pane_g1

0xb86e,	// (0x0005db9f) bg_touch_area_indi_pane_g1

0xdafa,	// (0x0005fe2b) aid_cmod_rocker_key_size

0xdb04,	// (0x0005fe35) aid_cmode_itu_key_size

0xdb0e,	// (0x0005fe3f) main_cmode_video_pane

0xdb18,	// (0x0005fe49) main_comp_mode_itu_pane

0xdb24,	// (0x0005fe55) main_comp_mode_rocker_pane

0xdb30,	// (0x0005fe61) cell_cmode_rocker_pane_ParamLimits

0xdb30,	// (0x0005fe61) cell_cmode_rocker_pane

0xdb44,	// (0x0005fe75) cell_cmode_itu_pane_ParamLimits

0xdb44,	// (0x0005fe75) cell_cmode_itu_pane

0xf489,	// (0x000617ba) bg_button_pane_cp06_ParamLimits

0xf489,	// (0x000617ba) bg_button_pane_cp06

0xbae9,	// (0x0005de1a) cell_cmode_rocker_pane_g1_ParamLimits

0xbae9,	// (0x0005de1a) cell_cmode_rocker_pane_g1

0xd062,	// (0x0005f393) cell_cmode_rocker_pane_g2_ParamLimits

0xd062,	// (0x0005f393) cell_cmode_rocker_pane_g2

0x0001,

0xfda6,	// (0x000620d7) cell_cmode_rocker_pane_g_ParamLimits

0xfda6,	// (0x000620d7) cell_cmode_rocker_pane_g

0xed49,	// (0x0006107a) bg_button_pane_cp07

0xdb5b,	// (0x0005fe8c) cell_cmode_itu_pane_g1

0xdb64,	// (0x0005fe95) cell_cmode_itu_pane_t1

0xdb72,	// (0x0005fea3) cell_cmode_itu_pane_t2

0x0001,

0xfdab,	// (0x000620dc) cell_cmode_itu_pane_t

0xd2b0,	// (0x0005f5e1) aid_touch_ctrl_left

0xd2b8,	// (0x0005f5e9) aid_touch_ctrl_right

0xed49,	// (0x0006107a) compa_mode_pane

0xdb80,	// (0x0005feb1) aid_cmod_rocker_key_size_cp

0xdb8a,	// (0x0005febb) aid_cmode_itu_key_size_cp

0xdb94,	// (0x0005fec5) compa_mode_pane_g1

0xdb9c,	// (0x0005fecd) compa_mode_pane_g2

0xdba4,	// (0x0005fed5) compa_mode_pane_g3

0x0002,

0xfdb0,	// (0x000620e1) compa_mode_pane_g

0xdbac,	// (0x0005fedd) main_comp_mode_itu_pane_cp

0xdbb4,	// (0x0005fee5) main_comp_mode_rocker_pane_cp

0xdbbc,	// (0x0005feed) cell_cmode_itu_pane_cp_ParamLimits

0xdbbc,	// (0x0005feed) cell_cmode_itu_pane_cp

0xdbd1,	// (0x0005ff02) cell_cmode_rocker_pane_cp_ParamLimits

0xdbd1,	// (0x0005ff02) cell_cmode_rocker_pane_cp

0xf489,	// (0x000617ba) bg_button_pane_cp06_cp_ParamLimits

0xf489,	// (0x000617ba) bg_button_pane_cp06_cp

0xbae9,	// (0x0005de1a) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xbae9,	// (0x0005de1a) cell_cmode_rocker_pane_g1_cp

0xb86e,	// (0x0005db9f) cell_cmode_rocker_pane_g2_cp

0xed49,	// (0x0006107a) bg_button_pane_cp07_cp

0xdbe3,	// (0x0005ff14) cell_cmode_itu_pane_g1_cp

0xdbec,	// (0x0005ff1d) cell_cmode_itu_pane_t1_cp

0xdbec,	// (0x0005ff1d) cell_cmode_itu_pane_t2_cp

0xa7bb,	// (0x0005caec) settings_code_pane_cp2

0xedab,	// (0x000610dc) bg_popup_window_pane_cp3_ParamLimits

0xf18e,	// (0x000614bf) heading_pane_cp3_ParamLimits

0xf19d,	// (0x000614ce) listscroll_popup_graphic_pane_ParamLimits

0x7054,	// (0x00059385) fep_hwr_aid_pane_ParamLimits

0x75da,	// (0x0005990b) aid_touch_sctrl_top_ParamLimits

0x75f5,	// (0x00059926) sctrl_sk_top_pane_g1_ParamLimits

0x72c1,	// (0x000595f2) sctrl_sk_top_pane_g2_ParamLimits

0xfce6,	// (0x00062017) sctrl_sk_top_pane_g_ParamLimits

0x7602,	// (0x00059933) sctrl_sk_top_pane_t1_ParamLimits

0x75da,	// (0x0005990b) aid_touch_sctrl_bottom_ParamLimits

0x7602,	// (0x00059933) sctrl_sk_bottom_pane_t1_ParamLimits

0xd1d4,	// (0x0005f505) aid_area_touch_clock

0x77f9,	// (0x00059b2a) aid_vkb2_area_top_pane_cell_ParamLimits

0x77f9,	// (0x00059b2a) aid_vkb2_area_top_pane_cell

0x7944,	// (0x00059c75) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x7944,	// (0x00059c75) aid_vkb2_area_bottom_pane_cell

0xd762,	// (0x0005fa93) popup_char_count_window

0xdbfa,	// (0x0005ff2b) popup_char_count_window_g1

0xdc03,	// (0x0005ff34) popup_char_count_window_g2

0xdc0c,	// (0x0005ff3d) popup_char_count_window_g3

0x0002,

0xfdb7,	// (0x000620e8) popup_char_count_window_g

0xdc15,	// (0x0005ff46) popup_char_count_window_t1

0x76b3,	// (0x000599e4) popup_fep_char_preview_window_ParamLimits

0x76b3,	// (0x000599e4) popup_fep_char_preview_window

0x7817,	// (0x00059b48) vkb2_top_candi_pane_ParamLimits

0x7817,	// (0x00059b48) vkb2_top_candi_pane

0xdc23,	// (0x0005ff54) cell_vkb2_top_candi_pane_ParamLimits

0xdc23,	// (0x0005ff54) cell_vkb2_top_candi_pane

0x7c2f,	// (0x00059f60) bg_popup_fep_char_preview_window_ParamLimits

0x7c2f,	// (0x00059f60) bg_popup_fep_char_preview_window

0x7c3d,	// (0x00059f6e) popup_fep_char_preview_window_t1_ParamLimits

0x7c3d,	// (0x00059f6e) popup_fep_char_preview_window_t1

0xdc74,	// (0x0005ffa5) bg_popup_fep_char_preview_window_g1

0xdc7c,	// (0x0005ffad) bg_popup_fep_char_preview_window_g2

0xdc84,	// (0x0005ffb5) bg_popup_fep_char_preview_window_g3

0xdc8c,	// (0x0005ffbd) bg_popup_fep_char_preview_window_g4

0xdc94,	// (0x0005ffc5) bg_popup_fep_char_preview_window_g5

0xdc9c,	// (0x0005ffcd) bg_popup_fep_char_preview_window_g6

0xdca4,	// (0x0005ffd5) bg_popup_fep_char_preview_window_g7

0xdcac,	// (0x0005ffdd) bg_popup_fep_char_preview_window_g8

0xdcb4,	// (0x0005ffe5) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdbe,	// (0x000620ef) bg_popup_fep_char_preview_window_g

0x72c1,	// (0x000595f2) cell_vkb2_top_candi_pane_g1_ParamLimits

0x72c1,	// (0x000595f2) cell_vkb2_top_candi_pane_g1

0x72cf,	// (0x00059600) cell_vkb2_top_candi_pane_g2_ParamLimits

0x72cf,	// (0x00059600) cell_vkb2_top_candi_pane_g2

0xd267,	// (0x0005f598) cell_vkb2_top_candi_pane_g3_ParamLimits

0xd267,	// (0x0005f598) cell_vkb2_top_candi_pane_g3

0x7c7f,	// (0x00059fb0) cell_vkb2_top_candi_pane_g4_ParamLimits

0x7c7f,	// (0x00059fb0) cell_vkb2_top_candi_pane_g4

0xc008,	// (0x0005e339) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc008,	// (0x0005e339) cell_vkb2_top_candi_pane_g5

0x7ca0,	// (0x00059fd1) cell_vkb2_top_candi_pane_g6_ParamLimits

0x7ca0,	// (0x00059fd1) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdd3,	// (0x00062104) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdd3,	// (0x00062104) cell_vkb2_top_candi_pane_g

0x7cae,	// (0x00059fdf) cell_vkb2_top_candi_pane_t1

0x6e12,	// (0x00059143) aid_size_touch_slider_mark_ParamLimits

0x6e12,	// (0x00059143) aid_size_touch_slider_mark

0xd8a5,	// (0x0005fbd6) grid_graphic2_catg_pane_ParamLimits

0xd8a5,	// (0x0005fbd6) grid_graphic2_catg_pane

0xd943,	// (0x0005fc74) popup_grid_graphic2_window_t1_ParamLimits

0xd943,	// (0x0005fc74) popup_grid_graphic2_window_t1

0xd955,	// (0x0005fc86) popup_grid_graphic2_window_t2_ParamLimits

0xd955,	// (0x0005fc86) popup_grid_graphic2_window_t2

0x0001,

0xfd8c,	// (0x000620bd) popup_grid_graphic2_window_t_ParamLimits

0xfd8c,	// (0x000620bd) popup_grid_graphic2_window_t

0xeeec,	// (0x0006121d) bg_button_pane_cp05_ParamLimits

0xdad2,	// (0x0005fe03) cell_graphic2_control_pane_g1_ParamLimits

0xdcbc,	// (0x0005ffed) cell_graphic2_catg_pane_ParamLimits

0xdcbc,	// (0x0005ffed) cell_graphic2_catg_pane

0xed49,	// (0x0006107a) bg_button_pane_cp12

0xdcce,	// (0x0005ffff) cell_graphic2_catg_pane_g1

0xd1a0,	// (0x0005f4d1) cell_tb_ext_pane_t1_ParamLimits

0x7a61,	// (0x00059d92) vkb2_top_cell_right_narrow_pane_ParamLimits

0x7a61,	// (0x00059d92) vkb2_top_cell_right_narrow_pane

0x7a79,	// (0x00059daa) vkb2_top_cell_right_wide_pane_ParamLimits

0x7a79,	// (0x00059daa) vkb2_top_cell_right_wide_pane

0x7046,	// (0x00059377) bg_vkb2_func_pane_ParamLimits

0x7046,	// (0x00059377) bg_vkb2_func_pane

0x7aea,	// (0x00059e1b) vkb2_top_cell_left_pane_g1_ParamLimits

0x7046,	// (0x00059377) bg_vkb2_fuc_pane_cp03_ParamLimits

0x7046,	// (0x00059377) bg_vkb2_fuc_pane_cp03

0x7b48,	// (0x00059e79) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x90b5,	// (0x0005b3e6) bg_vkb2_func_pane_g1

0x90bd,	// (0x0005b3ee) bg_vkb2_func_pane_g2

0x90cd,	// (0x0005b3fe) bg_vkb2_func_pane_g3

0x90c5,	// (0x0005b3f6) bg_vkb2_func_pane_g4

0x90d5,	// (0x0005b406) bg_vkb2_func_pane_g5

0x90dd,	// (0x0005b40e) bg_vkb2_func_pane_g6

0x90e5,	// (0x0005b416) bg_vkb2_func_pane_g7

0x90ed,	// (0x0005b41e) bg_vkb2_func_pane_g8

0x90ad,	// (0x0005b3de) bg_vkb2_func_pane_g9

0x0008,

0xfde0,	// (0x00062111) bg_vkb2_func_pane_g

0x7046,	// (0x00059377) bg_vkb2_fuc_pane_cp01_ParamLimits

0x7046,	// (0x00059377) bg_vkb2_fuc_pane_cp01

0x7aea,	// (0x00059e1b) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x7aea,	// (0x00059e1b) vkb2_top_cell_right_wide_pane_g1

0x7046,	// (0x00059377) bg_vkb2_fuc_pane_cp02_ParamLimits

0x7046,	// (0x00059377) bg_vkb2_fuc_pane_cp02

0x7b48,	// (0x00059e79) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x7b48,	// (0x00059e79) vkb2_top_cell_right_narrow_pane_g1

0xcdb7,	// (0x0005f0e8) aid_touch_area_decrease_ParamLimits

0xcdb7,	// (0x0005f0e8) aid_touch_area_decrease

0xcddb,	// (0x0005f10c) aid_touch_area_increase_ParamLimits

0xcddb,	// (0x0005f10c) aid_touch_area_increase

0xcdf3,	// (0x0005f124) aid_touch_area_mute_ParamLimits

0xcdf3,	// (0x0005f124) aid_touch_area_mute

0xce0f,	// (0x0005f140) aid_touch_area_slider_ParamLimits

0xce0f,	// (0x0005f140) aid_touch_area_slider

0xcefd,	// (0x0005f22e) popup_slider_window_g4_ParamLimits

0xcefd,	// (0x0005f22e) popup_slider_window_g4

0xcf15,	// (0x0005f246) popup_slider_window_g5_ParamLimits

0xcf15,	// (0x0005f246) popup_slider_window_g5

0xcf37,	// (0x0005f268) popup_slider_window_g6_ParamLimits

0xcf37,	// (0x0005f268) popup_slider_window_g6

0xcf75,	// (0x0005f2a6) popup_slider_window_t2_ParamLimits

0xcf75,	// (0x0005f2a6) popup_slider_window_t2

0x0001,

0xfcda,	// (0x0006200b) popup_slider_window_t_ParamLimits

0xfcda,	// (0x0006200b) popup_slider_window_t

0xcf8d,	// (0x0005f2be) slider_pane_ParamLimits

0xcf8d,	// (0x0005f2be) slider_pane

0xdcd7,	// (0x00060008) slider_pane_g1_ParamLimits

0xdcd7,	// (0x00060008) slider_pane_g1

0xdceb,	// (0x0006001c) slider_pane_g2_ParamLimits

0xdceb,	// (0x0006001c) slider_pane_g2

0xdd01,	// (0x00060032) slider_pane_g3_ParamLimits

0xdd01,	// (0x00060032) slider_pane_g3

0x0003,

0xfdf3,	// (0x00062124) slider_pane_g_ParamLimits

0xfdf3,	// (0x00062124) slider_pane_g

0x69bd,	// (0x00058cee) popup_tb_float_extension_window_ParamLimits

0x69bd,	// (0x00058cee) popup_tb_float_extension_window

0xdd2d,	// (0x0006005e) aid_size_cell_tb_float_ext

0xed49,	// (0x0006107a) bg_popup_sub_window_cp28

0xdd39,	// (0x0006006a) grid_tb_float_ext_pane

0xdd45,	// (0x00060076) cell_tb_float_ext_pane_ParamLimits

0xdd45,	// (0x00060076) cell_tb_float_ext_pane

0xdd61,	// (0x00060092) cell_tb_float_ext_pane_g1

0xdd6a,	// (0x0006009b) grid_highlight_pane_cp12

0x719b,	// (0x000594cc) cell_last_hwr_side_pane_ParamLimits

0x719b,	// (0x000594cc) cell_last_hwr_side_pane

0xb86e,	// (0x0005db9f) cell_last_hwr_side_pane_g1

0xdd73,	// (0x000600a4) cell_last_hwr_side_pane_g2

0x0001,

0xfdfc,	// (0x0006212d) cell_last_hwr_side_pane_g

0x7a10,	// (0x00059d41) vkb2_area_bottom_space_btn_pane_ParamLimits

0x7a10,	// (0x00059d41) vkb2_area_bottom_space_btn_pane

0x72c1,	// (0x000595f2) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xd817,	// (0x0005fb48) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x7cae,	// (0x00059fdf) cell_vkb2_top_candi_pane_t1_ParamLimits

0x7ccc,	// (0x00059ffd) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x7ccc,	// (0x00059ffd) vkb2_area_bottom_space_btn_pane_g1

0x7d06,	// (0x0005a037) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x7d06,	// (0x0005a037) vkb2_area_bottom_space_btn_pane_g2

0x7d3c,	// (0x0005a06d) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x7d3c,	// (0x0005a06d) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe01,	// (0x00062132) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe01,	// (0x00062132) vkb2_area_bottom_space_btn_pane_g

0x710b,	// (0x0005943c) cel_fep_hwr_func_pane_ParamLimits

0x710b,	// (0x0005943c) cel_fep_hwr_func_pane

0x7147,	// (0x00059478) cell_hwr_side_button_pane_ParamLimits

0x7147,	// (0x00059478) cell_hwr_side_button_pane

0xd1d4,	// (0x0005f505) aid_area_touch_clock_ParamLimits

0xeeec,	// (0x0006121d) bg_uniindi_top_pane_ParamLimits

0xd1e8,	// (0x0005f519) uniindi_top_pane_g1_ParamLimits

0xd1fe,	// (0x0005f52f) uniindi_top_pane_g2_ParamLimits

0xd20a,	// (0x0005f53b) uniindi_top_pane_g3_ParamLimits

0xd21b,	// (0x0005f54c) uniindi_top_pane_g4_ParamLimits

0xfd12,	// (0x00062043) uniindi_top_pane_g_ParamLimits

0xd228,	// (0x0005f559) uniindi_top_pane_t1_ParamLimits

0xeeec,	// (0x0006121d) bg_vkb2_func_pane_cp01_ParamLimits

0xeeec,	// (0x0006121d) bg_vkb2_func_pane_cp01

0xdd7c,	// (0x000600ad) cel_fep_hwr_func_pane_g1_ParamLimits

0xdd7c,	// (0x000600ad) cel_fep_hwr_func_pane_g1

0xeeec,	// (0x0006121d) bg_vkb2_func_pane_cp02_ParamLimits

0xeeec,	// (0x0006121d) bg_vkb2_func_pane_cp02

0xdd7c,	// (0x000600ad) cell_hwr_side_button_pane_g1_ParamLimits

0xdd7c,	// (0x000600ad) cell_hwr_side_button_pane_g1

0x8f1a,	// (0x0005b24b) status_pane_g4_ParamLimits

0x8f1a,	// (0x0005b24b) status_pane_g4

0x8f34,	// (0x0005b265) status_pane_t1

0xb621,	// (0x0005d952) form2_midp_gauge_slider_cont_pane

0xb629,	// (0x0005d95a) form2_midp_gauge_slider_pane_t1_ParamLimits

0xb63b,	// (0x0005d96c) form2_midp_gauge_slider_pane_t2_ParamLimits

0xb64d,	// (0x0005d97e) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfad2,	// (0x00061e03) form2_midp_gauge_slider_pane_t_ParamLimits

0xb65f,	// (0x0005d990) form2_midp_slider_pane_ParamLimits

0x7673,	// (0x000599a4) aid_size_cell_func_vkb2_ParamLimits

0x7673,	// (0x000599a4) aid_size_cell_func_vkb2

0xdd19,	// (0x0006004a) slider_pane_g4_ParamLimits

0xdd19,	// (0x0006004a) slider_pane_g4

0x7d86,	// (0x0005a0b7) form2_midp_gauge_slider_pane_t2_cp01

0x7d94,	// (0x0005a0c5) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x7d94,	// (0x0005a0c5) form2_midp_gauge_slider_pane_t3_cp01

0x7db1,	// (0x0005a0e2) form2_midp_slider_pane_cp01

0xed49,	// (0x0006107a) navi_smil_pane

0xddb5,	// (0x000600e6) navi_smil_pane_g1

0xddbd,	// (0x000600ee) navi_smil_pane_t1

0xdd8a,	// (0x000600bb) form2_midp_slider_pane_g1

0xdd93,	// (0x000600c4) form2_midp_slider_pane_g2

0xdd9b,	// (0x000600cc) form2_midp_slider_pane_g3

0xdd8a,	// (0x000600bb) form2_midp_slider_pane_g4

0xdda3,	// (0x000600d4) form2_midp_slider_pane_g5

0x0004,

0xfe0a,	// (0x0006213b) form2_midp_slider_pane_g

0x7d76,	// (0x0005a0a7) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x7d76,	// (0x0005a0a7) vkb2_area_bottom_space_btn_pane_g4

0x8d39,	// (0x0005b06a) lc0_navi_pane_ParamLimits

0x8d39,	// (0x0005b06a) lc0_navi_pane

0x8db5,	// (0x0005b0e6) lc0_stat_indi_pane_ParamLimits

0x8db5,	// (0x0005b0e6) lc0_stat_indi_pane

0x8dcc,	// (0x0005b0fd) ls0_title_pane_ParamLimits

0x8dcc,	// (0x0005b0fd) ls0_title_pane

0xf489,	// (0x000617ba) bg_popup_sub_pane_cp14_ParamLimits

0xd1bb,	// (0x0005f4ec) list_uniindi_pane_ParamLimits

0xd1c7,	// (0x0005f4f8) uniindi_top_pane_ParamLimits

0xd288,	// (0x0005f5b9) list_single_uniindi_pane_g1_ParamLimits

0xd29b,	// (0x0005f5cc) list_single_uniindi_pane_t1_ParamLimits

0x7dba,	// (0x0005a0eb) lc0_stat_clock_pane_ParamLimits

0x7dba,	// (0x0005a0eb) lc0_stat_clock_pane

0xddcb,	// (0x000600fc) lc0_stat_indi_pane_g1_ParamLimits

0xddcb,	// (0x000600fc) lc0_stat_indi_pane_g1

0xddd8,	// (0x00060109) lc0_stat_indi_pane_g2_ParamLimits

0xddd8,	// (0x00060109) lc0_stat_indi_pane_g2

0x0001,

0xfe15,	// (0x00062146) lc0_stat_indi_pane_g_ParamLimits

0xfe15,	// (0x00062146) lc0_stat_indi_pane_g

0x7dc7,	// (0x0005a0f8) lc0_uni_indicator_pane_ParamLimits

0x7dc7,	// (0x0005a0f8) lc0_uni_indicator_pane

0xdde5,	// (0x00060116) ls0_title_pane_g1_ParamLimits

0xdde5,	// (0x00060116) ls0_title_pane_g1

0xddf9,	// (0x0006012a) ls0_title_pane_t1_ParamLimits

0xddf9,	// (0x0006012a) ls0_title_pane_t1

0x7dd4,	// (0x0005a105) lc0_uni_indicator_pane_g1_ParamLimits

0x7dd4,	// (0x0005a105) lc0_uni_indicator_pane_g1

0xde2f,	// (0x00060160) lc0_stat_clock_pane_t1

0x4fde,	// (0x0005730f) main_ai5_pane

0xde3d,	// (0x0006016e) ai5_sk_pane_ParamLimits

0xde3d,	// (0x0006016e) ai5_sk_pane

0xde4a,	// (0x0006017b) cell_ai5_widget_pane_ParamLimits

0xde4a,	// (0x0006017b) cell_ai5_widget_pane

0xdeed,	// (0x0006021e) aid_size_cell_widget_grid

0xdefb,	// (0x0006022c) bg_ai5_widget_pane_ParamLimits

0xdefb,	// (0x0006022c) bg_ai5_widget_pane

0xdf77,	// (0x000602a8) cell_ai5_widget_pane_g2

0xdf8b,	// (0x000602bc) cell_ai5_widget_pane_g3

0xdfa5,	// (0x000602d6) cell_ai5_widget_pane_g4

0xdfb5,	// (0x000602e6) cell_ai5_widget_pane_g5

0xdfc5,	// (0x000602f6) cell_ai5_widget_pane_g6

0xdfd1,	// (0x00060302) cell_ai5_widget_pane_g7

0xe03d,	// (0x0006036e) cell_ai5_widget_pane_t1_ParamLimits

0xe03d,	// (0x0006036e) cell_ai5_widget_pane_t1

0xe05a,	// (0x0006038b) cell_ai5_widget_pane_t2_ParamLimits

0xe05a,	// (0x0006038b) cell_ai5_widget_pane_t2

0xe072,	// (0x000603a3) cell_ai5_widget_pane_t3_ParamLimits

0xe072,	// (0x000603a3) cell_ai5_widget_pane_t3

0xe08a,	// (0x000603bb) cell_ai5_widget_pane_t4_ParamLimits

0xe08a,	// (0x000603bb) cell_ai5_widget_pane_t4

0xe0b0,	// (0x000603e1) cell_ai5_widget_pane_t5_ParamLimits

0xe0b0,	// (0x000603e1) cell_ai5_widget_pane_t5

0xe0d0,	// (0x00060401) cell_ai5_widget_pane_t6_ParamLimits

0xe0d0,	// (0x00060401) cell_ai5_widget_pane_t6

0xe0e2,	// (0x00060413) cell_ai5_widget_pane_t7_ParamLimits

0xe0e2,	// (0x00060413) cell_ai5_widget_pane_t7

0xe101,	// (0x00060432) cell_ai5_widget_pane_t8_ParamLimits

0xe101,	// (0x00060432) cell_ai5_widget_pane_t8

0x000b,

0xfe35,	// (0x00062166) cell_ai5_widget_pane_t_ParamLimits

0xfe35,	// (0x00062166) cell_ai5_widget_pane_t

0xe185,	// (0x000604b6) grid_ai5_widget_pane

0xf489,	// (0x000617ba) highlight_cell_ai5_widget_pane_ParamLimits

0xf489,	// (0x000617ba) highlight_cell_ai5_widget_pane

0xe193,	// (0x000604c4) ai5_sk_left_pane

0xe19d,	// (0x000604ce) ai5_sk_middle_pane

0xe1a7,	// (0x000604d8) ai5_sk_right_pane

0xe1b1,	// (0x000604e2) bg_ai5_widget_pane_g1_ParamLimits

0xe1b1,	// (0x000604e2) bg_ai5_widget_pane_g1

0xe1bd,	// (0x000604ee) bg_ai5_widget_pane_g2_ParamLimits

0xe1bd,	// (0x000604ee) bg_ai5_widget_pane_g2

0xe1c9,	// (0x000604fa) bg_ai5_widget_pane_g3_ParamLimits

0xe1c9,	// (0x000604fa) bg_ai5_widget_pane_g3

0xe1d5,	// (0x00060506) bg_ai5_widget_pane_g4_ParamLimits

0xe1d5,	// (0x00060506) bg_ai5_widget_pane_g4

0xe1e1,	// (0x00060512) bg_ai5_widget_pane_g5_ParamLimits

0xe1e1,	// (0x00060512) bg_ai5_widget_pane_g5

0xe1ed,	// (0x0006051e) bg_ai5_widget_pane_g6_ParamLimits

0xe1ed,	// (0x0006051e) bg_ai5_widget_pane_g6

0xe1f9,	// (0x0006052a) bg_ai5_widget_pane_g7_ParamLimits

0xe1f9,	// (0x0006052a) bg_ai5_widget_pane_g7

0xe205,	// (0x00060536) bg_ai5_widget_pane_g8_ParamLimits

0xe205,	// (0x00060536) bg_ai5_widget_pane_g8

0xe211,	// (0x00060542) bg_ai5_widget_pane_g9_ParamLimits

0xe211,	// (0x00060542) bg_ai5_widget_pane_g9

0x0008,

0xfe4e,	// (0x0006217f) bg_ai5_widget_pane_g_ParamLimits

0xfe4e,	// (0x0006217f) bg_ai5_widget_pane_g

0xe249,	// (0x0006057a) cell_shortcut_ai5_widget_pane_ParamLimits

0xe249,	// (0x0006057a) cell_shortcut_ai5_widget_pane

0x8838,	// (0x0005ab69) bg_cell_shortcut_ai5_widget_pane

0xe25c,	// (0x0006058d) cell_grid_ai5_widget_pane_g1

0x8838,	// (0x0005ab69) highlight_cell_shortcut_ai5_widget_pane

0x90b5,	// (0x0005b3e6) ai5_sk_left_pane_g1

0xe265,	// (0x00060596) ai5_sk_left_pane_g2

0xe26d,	// (0x0006059e) ai5_sk_left_pane_g3

0xe275,	// (0x000605a6) ai5_sk_left_pane_g4

0x0003,

0xfe61,	// (0x00062192) ai5_sk_left_pane_g

0xe27d,	// (0x000605ae) ai5_sk_left_pane_t1

0x90bd,	// (0x0005b3ee) ai5_sk_right_pane_g1

0xe28b,	// (0x000605bc) ai5_sk_right_pane_g2

0xe293,	// (0x000605c4) ai5_sk_right_pane_g3

0xe29b,	// (0x000605cc) ai5_sk_right_pane_g4

0x0003,

0xfe6a,	// (0x0006219b) ai5_sk_right_pane_g

0xe2a3,	// (0x000605d4) ai5_sk_right_pane_t1

0x90bd,	// (0x0005b3ee) ai5_sk_middle_pane_g1

0x90b5,	// (0x0005b3e6) ai5_sk_middle_pane_g2

0x90d5,	// (0x0005b406) ai5_sk_middle_pane_g3

0xe293,	// (0x000605c4) ai5_sk_middle_pane_g4

0xe26d,	// (0x0006059e) ai5_sk_middle_pane_g5

0xe2b1,	// (0x000605e2) ai5_sk_middle_pane_g6

0xe2b9,	// (0x000605ea) ai5_sk_middle_pane_g7

0x0006,

0xfe73,	// (0x000621a4) ai5_sk_middle_pane_g

0x8bbf,	// (0x0005aef0) aid_touch_area_size_lc0_ParamLimits

0x8bbf,	// (0x0005aef0) aid_touch_area_size_lc0

0x72f0,	// (0x00059621) cell_hwr_candidate_pane_t1_ParamLimits

0x8bdd,	// (0x0005af0e) aid_touch_navi_pane

0x8ecc,	// (0x0005b1fd) status_dt_navi_pane_ParamLimits

0x8ecc,	// (0x0005b1fd) status_dt_navi_pane

0x8ed9,	// (0x0005b20a) status_dt_sta_pane_ParamLimits

0x8ed9,	// (0x0005b20a) status_dt_sta_pane

0xe2c1,	// (0x000605f2) dt_sta_controll_pane

0xe2ce,	// (0x000605ff) dt_sta_indi_pane

0xe2df,	// (0x00060610) dt_sta_title_pane

0xeeec,	// (0x0006121d) bg_dt_sta_indi_pane_ParamLimits

0xeeec,	// (0x0006121d) bg_dt_sta_indi_pane

0xe2f2,	// (0x00060623) dt_sta_battery_pane

0xe2fa,	// (0x0006062b) dt_sta_indi_pane_g1

0xe303,	// (0x00060634) dt_sta_indi_pane_g2

0xe30c,	// (0x0006063d) dt_sta_indi_pane_g3

0x0002,

0xfe82,	// (0x000621b3) dt_sta_indi_pane_g

0xe315,	// (0x00060646) dt_sta_signal_pane

0xf489,	// (0x000617ba) bg_dt_sta_title_pane_ParamLimits

0xf489,	// (0x000617ba) bg_dt_sta_title_pane

0xe31e,	// (0x0006064f) dt_sta_title_pane_g1

0xe326,	// (0x00060657) dt_sta_title_pane_t1_ParamLimits

0xe326,	// (0x00060657) dt_sta_title_pane_t1

0xed49,	// (0x0006107a) bg_dt_sta_control_pane

0xe33b,	// (0x0006066c) dt_sta_controll_pane_g1

0xe344,	// (0x00060675) bg_dt_sta_title_pane_g1

0xe34d,	// (0x0006067e) bg_dt_sta_title_pane_g2

0xe356,	// (0x00060687) bg_dt_sta_title_pane_g3

0x0002,

0xfe89,	// (0x000621ba) bg_dt_sta_title_pane_g

0xb86e,	// (0x0005db9f) bg_dt_sta_indi_pane_g1

0xe35f,	// (0x00060690) dt_sta_signal_pane_g1

0xe367,	// (0x00060698) dt_sta_signal_pane_g2

0x0001,

0xfe90,	// (0x000621c1) dt_sta_signal_pane_g

0xe36f,	// (0x000606a0) dt_sta_battery_pane_g1

0xe378,	// (0x000606a9) dt_sta_battery_pane_t1

0xb86e,	// (0x0005db9f) bg_dt_sta_control_pane_g1

0x8336,	// (0x0005a667) fep_china_uni_eep_pane

0x833e,	// (0x0005a66f) fep_china_uni_entry_pane_ParamLimits

0x834e,	// (0x0005a67f) popup_fep_china_uni_window_g1_ParamLimits

0x835e,	// (0x0005a68f) popup_fep_china_uni_window_g2_ParamLimits

0x835e,	// (0x0005a68f) popup_fep_china_uni_window_g2

0x0001,

0xf6fd,	// (0x00061a2e) popup_fep_china_uni_window_g_ParamLimits

0xf6fd,	// (0x00061a2e) popup_fep_china_uni_window_g

0xe387,	// (0x000606b8) fep_china_uni_eep_pane_g1

0xe38f,	// (0x000606c0) fep_china_uni_eep_pane_t1

0xddac,	// (0x000600dd) aid_touch_area_size_smil_player

0x8d31,	// (0x0005b062) lc0_clock_pane

0x8f28,	// (0x0005b259) status_pane_g5_ParamLimits

0x8f28,	// (0x0005b259) status_pane_g5

0x6642,	// (0x00058973) popup_keymap_window

0x8eee,	// (0x0005b21f) status_icon_pane

0xdf8b,	// (0x000602bc) cell_ai5_widget_pane_g3_ParamLimits

0xdfa5,	// (0x000602d6) cell_ai5_widget_pane_g4_ParamLimits

0xdfb5,	// (0x000602e6) cell_ai5_widget_pane_g5_ParamLimits

0xdfdd,	// (0x0006030e) cell_ai5_widget_pane_g8_ParamLimits

0xdfdd,	// (0x0006030e) cell_ai5_widget_pane_g8

0xdff1,	// (0x00060322) cell_ai5_widget_pane_g9_ParamLimits

0xdff1,	// (0x00060322) cell_ai5_widget_pane_g9

0xe005,	// (0x00060336) cell_ai5_widget_pane_g10_ParamLimits

0xe005,	// (0x00060336) cell_ai5_widget_pane_g10

0xe39e,	// (0x000606cf) status_icon_pane_g1

0xed49,	// (0x0006107a) bg_popup_sub_pane_cp13

0xe3a6,	// (0x000606d7) popup_keymap_window_t1

0x8b10,	// (0x0005ae41) control_pane_g6_ParamLimits

0x8b10,	// (0x0005ae41) control_pane_g6

0x8b1d,	// (0x0005ae4e) control_pane_g7_ParamLimits

0x8b1d,	// (0x0005ae4e) control_pane_g7

0x8b2a,	// (0x0005ae5b) control_pane_g8_ParamLimits

0x8b2a,	// (0x0005ae5b) control_pane_g8

0xe2c1,	// (0x000605f2) dt_sta_controll_pane_ParamLimits

0xe2ce,	// (0x000605ff) dt_sta_indi_pane_ParamLimits

0xe2df,	// (0x00060610) dt_sta_title_pane_ParamLimits

0xf3cb,	// (0x000616fc) aid_size_touch_scroll_bar_cale

0x50bb,	// (0x000573ec) popup_discreet_window_ParamLimits

0x50bb,	// (0x000573ec) popup_discreet_window

0x5149,	// (0x0005747a) popup_sk_window

0x9713,	// (0x0005ba44) bg_popup_sub_pane_cp28_ParamLimits

0x9713,	// (0x0005ba44) bg_popup_sub_pane_cp28

0xe3b4,	// (0x000606e5) popup_discreet_window_g1_ParamLimits

0xe3b4,	// (0x000606e5) popup_discreet_window_g1

0xe3d4,	// (0x00060705) popup_discreet_window_t1_ParamLimits

0xe3d4,	// (0x00060705) popup_discreet_window_t1

0xe3f2,	// (0x00060723) popup_discreet_window_t2_ParamLimits

0xe3f2,	// (0x00060723) popup_discreet_window_t2

0x0002,

0xfe95,	// (0x000621c6) popup_discreet_window_t_ParamLimits

0xfe95,	// (0x000621c6) popup_discreet_window_t

0x7de7,	// (0x0005a118) popup_sk_window_g1

0x7df1,	// (0x0005a122) popup_sk_window_g2

0x0001,

0xfe9c,	// (0x000621cd) popup_sk_window_g

0x7df9,	// (0x0005a12a) popup_sk_window_t1

0x7e07,	// (0x0005a138) popup_sk_window_t1_copy1

0xdf77,	// (0x000602a8) cell_ai5_widget_pane_g2_ParamLimits

0xe113,	// (0x00060444) cell_ai5_widget_pane_t9_ParamLimits

0xe113,	// (0x00060444) cell_ai5_widget_pane_t9

0xed49,	// (0x0006107a) main_fep_fshwr2_pane

0x7e15,	// (0x0005a146) aid_fshwr2_btn_pane

0x7e21,	// (0x0005a152) aid_fshwr2_syb_pane

0x7e33,	// (0x0005a164) aid_fshwr2_txt_pane

0x7e3f,	// (0x0005a170) fshwr2_func_candi_pane

0x7e57,	// (0x0005a188) fshwr2_hwr_syb_pane

0x7e6d,	// (0x0005a19e) fshwr2_icf_pane

0x4fde,	// (0x0005730f) fshwr2_icf_bg_pane

0x7ea1,	// (0x0005a1d2) fshwr2_icf_pane_t1_ParamLimits

0x7ea1,	// (0x0005a1d2) fshwr2_icf_pane_t1

0x822c,	// (0x0005a55d) fshwr2_func_candi_pane_g1

0xe444,	// (0x00060775) fshwr2_func_candi_row_pane_ParamLimits

0xe444,	// (0x00060775) fshwr2_func_candi_row_pane

0x7eb9,	// (0x0005a1ea) cell_fshwr2_syb_pane_ParamLimits

0x7eb9,	// (0x0005a1ea) cell_fshwr2_syb_pane

0x7eda,	// (0x0005a20b) fshwr2_hwr_syb_pane_g1_ParamLimits

0x7eda,	// (0x0005a20b) fshwr2_hwr_syb_pane_g1

0x4fde,	// (0x0005730f) bg_popup_call_pane_cp01

0x7ee8,	// (0x0005a219) fshwr2_func_candi_cell_pane_ParamLimits

0x7ee8,	// (0x0005a219) fshwr2_func_candi_cell_pane

0x9f4d,	// (0x0005c27e) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x9f4d,	// (0x0005c27e) fshwr2_func_candi_cell_bg_pane

0x7f39,	// (0x0005a26a) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x7f39,	// (0x0005a26a) fshwr2_func_candi_cell_pane_g1

0x7f59,	// (0x0005a28a) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x7f59,	// (0x0005a28a) fshwr2_func_candi_cell_pane_t1

0x4fde,	// (0x0005730f) bg_button_pane_cp08

0x8b5f,	// (0x0005ae90) cell_fshwr2_syb_bg_pane

0x7f6c,	// (0x0005a29d) cell_fshwr2_syb_bg_pane_g1

0x7f80,	// (0x0005a2b1) cell_fshwr2_syb_bg_pane_t1

0xf489,	// (0x000617ba) main_tmo_pane

0xa3fa,	// (0x0005c72b) uni_indicator_pane_g1_ParamLimits

0xa410,	// (0x0005c741) uni_indicator_pane_g2_ParamLimits

0xa426,	// (0x0005c757) uni_indicator_pane_g3_ParamLimits

0xa439,	// (0x0005c76a) uni_indicator_pane_g4_ParamLimits

0xa439,	// (0x0005c76a) uni_indicator_pane_g4

0xa44d,	// (0x0005c77e) uni_indicator_pane_g5_ParamLimits

0xa44d,	// (0x0005c77e) uni_indicator_pane_g5

0xa44d,	// (0x0005c77e) uni_indicator_pane_g6_ParamLimits

0xa44d,	// (0x0005c77e) uni_indicator_pane_g6

0xf901,	// (0x00061c32) uni_indicator_pane_g_ParamLimits

0xcd87,	// (0x0005f0b8) popup_tmo_note_window_ParamLimits

0xcd87,	// (0x0005f0b8) popup_tmo_note_window

0x7655,	// (0x00059986) fshwr2_bg_pane

0x7f4a,	// (0x0005a27b) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x7f4a,	// (0x0005a27b) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea1,	// (0x000621d2) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea1,	// (0x000621d2) fshwr2_func_candi_cell_pane_g

0x72a9,	// (0x000595da) bg_popup_window_pane_cp01

0x7f93,	// (0x0005a2c4) bg_popup_window_pane_g1_cp01

0xe467,	// (0x00060798) bg_popup_window_pane_cp22_ParamLimits

0xe467,	// (0x00060798) bg_popup_window_pane_cp22

0xe475,	// (0x000607a6) listscroll_tmo_link_pane_ParamLimits

0xe475,	// (0x000607a6) listscroll_tmo_link_pane

0xe4b5,	// (0x000607e6) popup_tmo_note_window_g1_ParamLimits

0xe4b5,	// (0x000607e6) popup_tmo_note_window_g1

0xe4c2,	// (0x000607f3) tmo_note_info_pane_ParamLimits

0xe4c2,	// (0x000607f3) tmo_note_info_pane

0xe4dc,	// (0x0006080d) list_tmo_note_info_pane_g1_ParamLimits

0xe4dc,	// (0x0006080d) list_tmo_note_info_pane_g1

0xe4f3,	// (0x00060824) list_tmo_note_info_pane_g2_ParamLimits

0xe4f3,	// (0x00060824) list_tmo_note_info_pane_g2

0x0001,

0xfea6,	// (0x000621d7) list_tmo_note_info_pane_g_ParamLimits

0xfea6,	// (0x000621d7) list_tmo_note_info_pane_g

0xe50f,	// (0x00060840) list_tmo_note_info_text_pane_ParamLimits

0xe50f,	// (0x00060840) list_tmo_note_info_text_pane

0xe594,	// (0x000608c5) list_tmo_link_pane

0xe5a1,	// (0x000608d2) scroll_pane_cp20

0xe5ae,	// (0x000608df) list_single_tmo_link_pane_ParamLimits

0xe5ae,	// (0x000608df) list_single_tmo_link_pane

0xe5be,	// (0x000608ef) list_single_tmo_link_pane_t1

0xe5cc,	// (0x000608fd) list_tmo_note_info_text_pane_t1_ParamLimits

0xe5cc,	// (0x000608fd) list_tmo_note_info_text_pane_t1

0x5c62,	// (0x00057f93) aid_size_touch_scroll_bar_cp01_ParamLimits

0x5c62,	// (0x00057f93) aid_size_touch_scroll_bar_cp01

0x5b9f,	// (0x00057ed0) aid_size_touch_slider_marker

0x5131,	// (0x00057462) popup_settings_window_ParamLimits

0x5131,	// (0x00057462) popup_settings_window

0x3bb3,	// (0x00055ee4) popup_candi_list_indi_window

0x8bdd,	// (0x0005af0e) aid_touch_navi_pane_ParamLimits

0x75ae,	// (0x000598df) rs_clock_indi_pane

0x75b7,	// (0x000598e8) sctrl_sk_bottom_pane_ParamLimits

0x75c8,	// (0x000598f9) sctrl_sk_top_pane_ParamLimits

0x76cd,	// (0x000599fe) popup_fep_tooltip_window

0xdeed,	// (0x0006021e) aid_size_cell_widget_grid_ParamLimits

0xdf62,	// (0x00060293) cell_ai5_widget_pane_g1_ParamLimits

0xdf62,	// (0x00060293) cell_ai5_widget_pane_g1

0xdfc5,	// (0x000602f6) cell_ai5_widget_pane_g6_ParamLimits

0xdfd1,	// (0x00060302) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe1a,	// (0x0006214b) cell_ai5_widget_pane_g_ParamLimits

0xfe1a,	// (0x0006214b) cell_ai5_widget_pane_g

0xe142,	// (0x00060473) cell_ai5_widget_pane_t10_ParamLimits

0xe142,	// (0x00060473) cell_ai5_widget_pane_t10

0xe185,	// (0x000604b6) grid_ai5_widget_pane_ParamLimits

0xe21d,	// (0x0006054e) cell_contacts_ai5_widget_pane_ParamLimits

0xe21d,	// (0x0006054e) cell_contacts_ai5_widget_pane

0xe407,	// (0x00060738) popup_discreet_window_t3_ParamLimits

0xe407,	// (0x00060738) popup_discreet_window_t3

0x7e89,	// (0x0005a1ba) popup_fshwr2_char_preview_window_ParamLimits

0x7e89,	// (0x0005a1ba) popup_fshwr2_char_preview_window

0xe52d,	// (0x0006085e) tmo_note_info_pane_t1

0xe542,	// (0x00060873) tmo_note_info_pane_t2

0xe55b,	// (0x0006088c) tmo_note_info_pane_t3

0xe570,	// (0x000608a1) tmo_note_info_pane_t4

0xe582,	// (0x000608b3) tmo_note_info_pane_t5

0x0004,

0xfeab,	// (0x000621dc) tmo_note_info_pane_t

0xe594,	// (0x000608c5) list_tmo_link_pane_ParamLimits

0xe5a1,	// (0x000608d2) scroll_pane_cp20_ParamLimits

0x4fde,	// (0x0005730f) bg_popup_fep_char_preview_window_cp01

0xe5e5,	// (0x00060916) popup_fshwr2_char_preview_window_t1

0xe5f3,	// (0x00060924) popup_candi_list_indi_window_g1

0xe5fc,	// (0x0006092d) bg_cell_contacts_ai5_widget_pane

0xe608,	// (0x00060939) cell_contacts_ai5_widget_pane_g1

0xe61d,	// (0x0006094e) cell_contacts_ai5_widget_pane_g2

0xe629,	// (0x0006095a) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeb6,	// (0x000621e7) cell_contacts_ai5_widget_pane_g

0xe635,	// (0x00060966) cell_contacts_ai5_widget_pane_t1

0xf489,	// (0x000617ba) highlight_cell_shortcut_ai5_widget_pane_cp01

0xe6ac,	// (0x000609dd) settings_container_pane

0x8838,	// (0x0005ab69) listscroll_set_pane_copy1

0xaf9f,	// (0x0005d2d0) scroll_pane_cp121_copy1

0xe6b8,	// (0x000609e9) set_content_pane_copy1

0xe6c0,	// (0x000609f1) aid_height_set_list_copy1_ParamLimits

0xe6c0,	// (0x000609f1) aid_height_set_list_copy1

0xa64d,	// (0x0005c97e) aid_size_parent_copy1_ParamLimits

0xa64d,	// (0x0005c97e) aid_size_parent_copy1

0xe6cc,	// (0x000609fd) button_value_adjust_pane_cp6_copy1_ParamLimits

0xe6cc,	// (0x000609fd) button_value_adjust_pane_cp6_copy1

0x8b5f,	// (0x0005ae90) list_highlight_pane_cp2_copy1_ParamLimits

0x8b5f,	// (0x0005ae90) list_highlight_pane_cp2_copy1

0xe6e0,	// (0x00060a11) list_set_pane_copy1_ParamLimits

0xe6e0,	// (0x00060a11) list_set_pane_copy1

0xe647,	// (0x00060978) main_pane_set_t1_copy1_ParamLimits

0xe647,	// (0x00060978) main_pane_set_t1_copy1

0xe681,	// (0x000609b2) main_pane_set_t2_copy1_ParamLimits

0xe681,	// (0x000609b2) main_pane_set_t2_copy1

0xe7a1,	// (0x00060ad2) main_pane_set_t3_copy1

0xe7af,	// (0x00060ae0) main_pane_set_t4_copy1

0xe6a0,	// (0x000609d1) set_content_pane_g1_copy1_ParamLimits

0xe6a0,	// (0x000609d1) set_content_pane_g1_copy1

0xe7bd,	// (0x00060aee) setting_code_pane_copy1

0xe7c5,	// (0x00060af6) setting_slider_graphic_pane_copy1

0xe7c5,	// (0x00060af6) setting_slider_pane_copy1

0xe7cd,	// (0x00060afe) setting_text_pane_copy1

0xe7cd,	// (0x00060afe) setting_volume_pane_copy1

0xe7bd,	// (0x00060aee) settings_code_pane_cp2_copy1

0xe7d5,	// (0x00060b06) settings_code_pane_cp_copy1_ParamLimits

0xe7d5,	// (0x00060b06) settings_code_pane_cp_copy1

0x7f9c,	// (0x0005a2cd) volume_set_pane_copy1

0xe7e9,	// (0x00060b1a) volume_set_pane_g10_copy1

0xe7f5,	// (0x00060b26) volume_set_pane_g1_copy1

0xe7ff,	// (0x00060b30) volume_set_pane_g2_copy1

0xe809,	// (0x00060b3a) volume_set_pane_g3_copy1

0xe813,	// (0x00060b44) volume_set_pane_g4_copy1

0xe81d,	// (0x00060b4e) volume_set_pane_g5_copy1

0xe827,	// (0x00060b58) volume_set_pane_g6_copy1

0xe831,	// (0x00060b62) volume_set_pane_g7_copy1

0xe83b,	// (0x00060b6c) volume_set_pane_g8_copy1

0xe845,	// (0x00060b76) volume_set_pane_g9_copy1

0xedab,	// (0x000610dc) bg_set_opt_pane_cp_copy1_ParamLimits

0xedab,	// (0x000610dc) bg_set_opt_pane_cp_copy1

0x7fa8,	// (0x0005a2d9) setting_slider_pane_t1_copy1_ParamLimits

0x7fa8,	// (0x0005a2d9) setting_slider_pane_t1_copy1

0x7fc7,	// (0x0005a2f8) setting_slider_pane_t2_copy1_ParamLimits

0x7fc7,	// (0x0005a2f8) setting_slider_pane_t2_copy1

0x7fe1,	// (0x0005a312) setting_slider_pane_t3_copy1_ParamLimits

0x7fe1,	// (0x0005a312) setting_slider_pane_t3_copy1

0x7ff9,	// (0x0005a32a) slider_set_pane_copy1_ParamLimits

0x7ff9,	// (0x0005a32a) slider_set_pane_copy1

0xf4e1,	// (0x00061812) set_opt_bg_pane_g1_copy2

0xf4e9,	// (0x0006181a) set_opt_bg_pane_g2_copy2

0xe851,	// (0x00060b82) set_opt_bg_pane_g3_copy2

0xf4f9,	// (0x0006182a) set_opt_bg_pane_g4_copy2

0xf501,	// (0x00061832) set_opt_bg_pane_g5_copy2

0xf509,	// (0x0006183a) set_opt_bg_pane_g6_copy2

0xe85b,	// (0x00060b8c) set_opt_bg_pane_g7_copy2

0xe865,	// (0x00060b96) set_opt_bg_pane_g8_copy2

0xe86f,	// (0x00060ba0) set_opt_bg_pane_g9_copy2

0x800f,	// (0x0005a340) aid_size_touch_slider_mark_copy1_ParamLimits

0x800f,	// (0x0005a340) aid_size_touch_slider_mark_copy1

0xe879,	// (0x00060baa) slider_set_pane_g1_copy1

0x8023,	// (0x0005a354) slider_set_pane_g2_copy1

0x6e32,	// (0x00059163) slider_set_pane_g3_copy1_ParamLimits

0x6e32,	// (0x00059163) slider_set_pane_g3_copy1

0x6e46,	// (0x00059177) slider_set_pane_g4_copy1_ParamLimits

0x6e46,	// (0x00059177) slider_set_pane_g4_copy1

0x6e5e,	// (0x0005918f) slider_set_pane_g5_copy1_ParamLimits

0x6e5e,	// (0x0005918f) slider_set_pane_g5_copy1

0x6e32,	// (0x00059163) slider_set_pane_g6_copy1_ParamLimits

0x6e32,	// (0x00059163) slider_set_pane_g6_copy1

0x802b,	// (0x0005a35c) slider_set_pane_g7_copy1_ParamLimits

0x802b,	// (0x0005a35c) slider_set_pane_g7_copy1

0xed5d,	// (0x0006108e) bg_set_opt_pane_cp2_copy1

0xe882,	// (0x00060bb3) setting_slider_graphic_pane_g1_copy1

0xe88b,	// (0x00060bbc) setting_slider_graphic_pane_t1_copy1

0xe89b,	// (0x00060bcc) setting_slider_graphic_pane_t2_copy1

0xe8ab,	// (0x00060bdc) slider_set_pane_cp_copy1

0xe8bb,	// (0x00060bec) input_focus_pane_cp1_copy1

0xe8c4,	// (0x00060bf5) list_set_text_pane_copy1

0xe8cc,	// (0x00060bfd) setting_text_pane_g1_copy1

0x3260,	// (0x00055591) set_text_pane_t1_copy1

0xe8bb,	// (0x00060bec) input_focus_pane_cp2_copy1

0xe8cc,	// (0x00060bfd) setting_code_pane_g1_copy1

0xe8d5,	// (0x00060c06) setting_code_pane_t1_copy1

0xada4,	// (0x0005d0d5) list_set_graphic_pane_copy1

0xed5d,	// (0x0006108e) bg_set_opt_pane_cp4_copy1

0x8533,	// (0x0005a864) list_set_graphic_pane_g1_copy1_ParamLimits

0x8533,	// (0x0005a864) list_set_graphic_pane_g1_copy1

0xe8e3,	// (0x00060c14) list_set_graphic_pane_g2_copy1

0x854b,	// (0x0005a87c) list_set_graphic_pane_t1_copy1_ParamLimits

0x854b,	// (0x0005a87c) list_set_graphic_pane_t1_copy1

0xb86e,	// (0x0005db9f) rs_clock_indi_pane_g1

0xe8eb,	// (0x00060c1c) rs_clock_indi_pane_t1

0xe8f9,	// (0x00060c2a) rs_indi_pane

0xe901,	// (0x00060c32) rs_indi_pane_g1

0xe90a,	// (0x00060c3b) rs_indi_pane_g2

0xe913,	// (0x00060c44) rs_indi_pane_g3

0x0002,

0xfebd,	// (0x000621ee) rs_indi_pane_g

0x8838,	// (0x0005ab69) bg_popup_preview_window_pane_cp03

0xe91c,	// (0x00060c4d) popup_fep_tooltip_window_t1

0xc533,	// (0x0005e864) popup_note2_window_g2_ParamLimits

0xc533,	// (0x0005e864) popup_note2_window_g2

0x0001,

0xfc4a,	// (0x00061f7b) popup_note2_window_g_ParamLimits

0xfc4a,	// (0x00061f7b) popup_note2_window_g

0xca3b,	// (0x0005ed6c) bg_popup_sub_pane_cp11_ParamLimits

0xca48,	// (0x0005ed79) cell_ai3_links_pane_g1_ParamLimits

0xca5f,	// (0x0005ed90) cell_ai3_links_pane_t1

0x3260,	// (0x00055591) set_text_pane_t1_copy1_ParamLimits

0x8745,	// (0x0005aa76) cell_graphic_popup_pane_cp2_ParamLimits

0x8745,	// (0x0005aa76) cell_graphic_popup_pane_cp2

0xe92a,	// (0x00060c5b) cell_graphic_popup_pane_g1_cp2

0xf1de,	// (0x0006150f) cell_graphic_popup_pane_g2_cp2

0xe932,	// (0x00060c63) cell_graphic_popup_pane_g3_cp2

0xe93a,	// (0x00060c6b) cell_graphic_popup_pane_t2_cp2

0xf1ef,	// (0x00061520) grid_highlight_pane_cp3_cp2

0x3517,	// (0x00055848) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xf489,	// (0x000617ba) main_tmo_pane_ParamLimits

0xcd7b,	// (0x0005f0ac) popup_tmo_big_image_note_window

0xdf51,	// (0x00060282) cell_ai5_widget_list_pane

0xdf59,	// (0x0006028a) cell_ai5_widget_lrg_icon_pane

0xe52d,	// (0x0006085e) tmo_note_info_pane_t1_ParamLimits

0xe542,	// (0x00060873) tmo_note_info_pane_t2_ParamLimits

0xe55b,	// (0x0006088c) tmo_note_info_pane_t3_ParamLimits

0xe570,	// (0x000608a1) tmo_note_info_pane_t4_ParamLimits

0xe582,	// (0x000608b3) tmo_note_info_pane_t5_ParamLimits

0xfeab,	// (0x000621dc) tmo_note_info_pane_t_ParamLimits

0xe6ac,	// (0x000609dd) settings_container_pane_ParamLimits

0xe8b3,	// (0x00060be4) indicator_popup_pane_cp5

0xe8b3,	// (0x00060be4) indicator_popup_pane_cp6

0xada4,	// (0x0005d0d5) list_set_graphic_pane_copy1_ParamLimits

0xed49,	// (0x0006107a) bg_popup_window_pane_cp23

0xe948,	// (0x00060c79) popup_tmo_big_image_note_window_g1

0xe954,	// (0x00060c85) popup_tmo_big_image_note_window_t1

0xe964,	// (0x00060c95) popup_tmo_big_image_note_window_t2

0xe974,	// (0x00060ca5) popup_tmo_big_image_note_window_t3

0x0002,

0xfec4,	// (0x000621f5) popup_tmo_big_image_note_window_t

0xb86e,	// (0x0005db9f) cell_ai5_widget_lrg_icon_pane_g1

0xe984,	// (0x00060cb5) cell_ai5_widget_lrg_icon_pane_t1

0xe992,	// (0x00060cc3) cell_ai5_widget_list_row_pane_ParamLimits

0xe992,	// (0x00060cc3) cell_ai5_widget_list_row_pane

0xe9aa,	// (0x00060cdb) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xe9aa,	// (0x00060cdb) cell_ai5_widget_list_row_pane_g1

0xe9b7,	// (0x00060ce8) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xe9b7,	// (0x00060ce8) cell_ai5_widget_list_row_pane_t1

0xe9e2,	// (0x00060d13) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xe9e2,	// (0x00060d13) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfecb,	// (0x000621fc) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfecb,	// (0x000621fc) cell_ai5_widget_list_row_pane_t

0x4fde,	// (0x0005730f) main_fep_vtchi_ss_pane

0xea32,	// (0x00060d63) popup_fep_char_pre_window

0xea3a,	// (0x00060d6b) popup_fep_ituss_window

0xea66,	// (0x00060d97) popup_fep_vkbss_window

0x8b5f,	// (0x0005ae90) grid_vkbss_keypad_pane_ParamLimits

0x8b5f,	// (0x0005ae90) grid_vkbss_keypad_pane

0xeaa8,	// (0x00060dd9) ituss_keypad_pane

0x804d,	// (0x0005a37e) aid_vkbss_key_offset_ParamLimits

0x804d,	// (0x0005a37e) aid_vkbss_key_offset

0x8059,	// (0x0005a38a) cell_vkbss_key_pane_ParamLimits

0x8059,	// (0x0005a38a) cell_vkbss_key_pane

0xeab4,	// (0x00060de5) bg_cell_vkbss_key_g1_ParamLimits

0xeab4,	// (0x00060de5) bg_cell_vkbss_key_g1

0xeac0,	// (0x00060df1) cell_vkbss_key_3p_pane_ParamLimits

0xeac0,	// (0x00060df1) cell_vkbss_key_3p_pane

0xeaf6,	// (0x00060e27) cell_vkbss_key_g1_ParamLimits

0xeaf6,	// (0x00060e27) cell_vkbss_key_g1

0xeb2c,	// (0x00060e5d) cell_vkbss_key_t1_ParamLimits

0xeb2c,	// (0x00060e5d) cell_vkbss_key_t1

0x8093,	// (0x0005a3c4) cell_ituss_key_pane_ParamLimits

0x8093,	// (0x0005a3c4) cell_ituss_key_pane

0xeb88,	// (0x00060eb9) bg_cell_ituss_key_g1_ParamLimits

0xeb88,	// (0x00060eb9) bg_cell_ituss_key_g1

0xeb94,	// (0x00060ec5) cell_ituss_key_pane_g1_ParamLimits

0xeb94,	// (0x00060ec5) cell_ituss_key_pane_g1

0x80a4,	// (0x0005a3d5) cell_ituss_key_pane_g2_ParamLimits

0x80a4,	// (0x0005a3d5) cell_ituss_key_pane_g2

0x0005,

0xfed2,	// (0x00062203) cell_ituss_key_pane_g_ParamLimits

0xfed2,	// (0x00062203) cell_ituss_key_pane_g

0x8128,	// (0x0005a459) cell_ituss_key_t1_ParamLimits

0x8128,	// (0x0005a459) cell_ituss_key_t1

0x8162,	// (0x0005a493) cell_ituss_key_t2_ParamLimits

0x8162,	// (0x0005a493) cell_ituss_key_t2

0x8193,	// (0x0005a4c4) cell_ituss_key_t3_ParamLimits

0x8193,	// (0x0005a4c4) cell_ituss_key_t3

0x8162,	// (0x0005a493) cell_ituss_key_t4_ParamLimits

0x8162,	// (0x0005a493) cell_ituss_key_t4

0x0004,

0xfedf,	// (0x00062210) cell_ituss_key_t_ParamLimits

0xfedf,	// (0x00062210) cell_ituss_key_t

0xebba,	// (0x00060eeb) cell_vkbss_key_3p_pane_g1

0xebc2,	// (0x00060ef3) cell_vkbss_key_3p_pane_g2

0xebca,	// (0x00060efb) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeea,	// (0x0006221b) cell_vkbss_key_3p_pane_g

0x8838,	// (0x0005ab69) bg_popup_fep_char_preview_window_cp02

0xebd2,	// (0x00060f03) popup_fep_char_pre_window_t1

0xdeda,	// (0x0006020b) main_ai5_sk_pane

0xe5fc,	// (0x0006092d) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xe608,	// (0x00060939) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xe61d,	// (0x0006094e) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xe629,	// (0x0006095a) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeb6,	// (0x000621e7) cell_contacts_ai5_widget_pane_g_ParamLimits

0xe635,	// (0x00060966) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xf489,	// (0x000617ba) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xebe0,	// (0x00060f11) main_ai5_sk_pane_g1

0x954b,	// (0x0005b87c) popup_query_code_window_g1

0xea50,	// (0x00060d81) popup_fep_vkb_icf_pane

0xea7f,	// (0x00060db0) popup_fep_vtchi_icf_pane

0x8b5f,	// (0x0005ae90) bg_icf_pane

0x8b5f,	// (0x0005ae90) list_vkb_icf_pane

0xebe9,	// (0x00060f1a) bg_icf_pane_cp01

0xebfc,	// (0x00060f2d) vtchi_icf_list_pane

0xec64,	// (0x00060f95) list_vkb_icf_pane_t1_ParamLimits

0xec64,	// (0x00060f95) list_vkb_icf_pane_t1

0xec80,	// (0x00060fb1) vtchi_icf_list_pane_t1_ParamLimits

0xec80,	// (0x00060fb1) vtchi_icf_list_pane_t1

0xea3a,	// (0x00060d6b) popup_fep_ituss_window_ParamLimits

0xea7f,	// (0x00060db0) popup_fep_vtchi_icf_pane_ParamLimits

0xeaa8,	// (0x00060dd9) ituss_keypad_pane_ParamLimits

0x8041,	// (0x0005a372) ituss_sks_pane

0x8b5f,	// (0x0005ae90) bg_icf_pane_ParamLimits

0xea0a,	// (0x00060d3b) icf_edit_indi_pane_ParamLimits

0xea0a,	// (0x00060d3b) icf_edit_indi_pane

0x8b5f,	// (0x0005ae90) list_vkb_icf_pane_ParamLimits

0xebe9,	// (0x00060f1a) bg_icf_pane_cp01_ParamLimits

0xea25,	// (0x00060d56) icf_edit_indi_pane_cp01_ParamLimits

0xea25,	// (0x00060d56) icf_edit_indi_pane_cp01

0xec04,	// (0x00060f35) vtchi_query_pane

0xdd7c,	// (0x000600ad) icf_edit_indi_pane_g1_ParamLimits

0xdd7c,	// (0x000600ad) icf_edit_indi_pane_g1

0xecf0,	// (0x00061021) icf_edit_indi_pane_g2_ParamLimits

0xecf0,	// (0x00061021) icf_edit_indi_pane_g2

0x0001,

0xff15,	// (0x00062246) icf_edit_indi_pane_g_ParamLimits

0xff15,	// (0x00062246) icf_edit_indi_pane_g

0xed04,	// (0x00061035) icf_edit_indi_pane_t1

0xec99,	// (0x00060fca) bg_input_focus_pane_cp042

0xf3c2,	// (0x000616f3) vtchi_button_pane

0xeca2,	// (0x00060fd3) vtchi_query_pane_t1

0xecb0,	// (0x00060fe1) vtchi_query_pane_t2

0xecbe,	// (0x00060fef) vtchi_query_pane_t3

0x0002,

0xff04,	// (0x00062235) vtchi_query_pane_t

0x4fde,	// (0x0005730f) bg_button_pane_cp13

0xeccc,	// (0x00060ffd) vtchi_button_pane_g1

0x81d6,	// (0x0005a507) ituss_sks_pane_g1

0x81e1,	// (0x0005a512) ituss_sks_pane_g2

0x0001,

0xff0b,	// (0x0006223c) ituss_sks_pane_g

0xecd4,	// (0x00061005) ituss_sks_pane_t1

0xece2,	// (0x00061013) ituss_sks_pane_t2

0x0001,

0xff10,	// (0x00062241) ituss_sks_pane_t

0xb342,	// (0x0005d673) indicator_nsta_pane_cp_g1

0xb34b,	// (0x0005d67c) indicator_nsta_pane_cp_g2

0xb353,	// (0x0005d684) indicator_nsta_pane_cp_g3

0xb35b,	// (0x0005d68c) indicator_nsta_pane_cp_g4

0xb34b,	// (0x0005d67c) indicator_nsta_pane_cp_g5

0xb353,	// (0x0005d684) indicator_nsta_pane_cp_g6

0x0005,

0xfa88,	// (0x00061db9) indicator_nsta_pane_cp_g

0xdac0,	// (0x0005fdf1) cell_graphic2_pane_t2_ParamLimits

0xdac0,	// (0x0005fdf1) cell_graphic2_pane_t2

0x0001,

0xfda1,	// (0x000620d2) cell_graphic2_pane_t_ParamLimits

0xfda1,	// (0x000620d2) cell_graphic2_pane_t

0xdaec,	// (0x0005fe1d) cell_graphic2_control_pane_t1

0x82ec,	// (0x0005a61d) signal_pane_g3_ParamLimits

0x82ec,	// (0x0005a61d) signal_pane_g3

0x82fb,	// (0x0005a62c) signal_pane_g4_ParamLimits

0x82fb,	// (0x0005a62c) signal_pane_g4

0xe9f4,	// (0x00060d25) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xe9f4,	// (0x00060d25) cell_ai5_widget_list_row_pane_t3

0xeba8,	// (0x00060ed9) cell_ituss_key_pane_t1_ParamLimits

0xeba8,	// (0x00060ed9) cell_ituss_key_pane_t1

0x91b2,	// (0x0005b4e3) form_field_data_wide_pane_vc_t2_ParamLimits

0x91b2,	// (0x0005b4e3) form_field_data_wide_pane_vc_t2

0x91c6,	// (0x0005b4f7) form_field_data_wide_pane_vc_t3_ParamLimits

0x91c6,	// (0x0005b4f7) form_field_data_wide_pane_vc_t3

0x0002,

0xf7e9,	// (0x00061b1a) form_field_data_wide_pane_vc_t_ParamLimits

0xf7e9,	// (0x00061b1a) form_field_data_wide_pane_vc_t

0xafdf,	// (0x0005d310) form_field_slider_wide_pane_vc_t3_ParamLimits

0xafdf,	// (0x0005d310) form_field_slider_wide_pane_vc_t3

0xb0b5,	// (0x0005d3e6) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb0b5,	// (0x0005d3e6) form_field_popup_wide_pane_vc_t2

0xb0cc,	// (0x0005d3fd) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb0cc,	// (0x0005d3fd) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa77,	// (0x00061da8) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa77,	// (0x00061da8) form_field_popup_wide_pane_vc_t

0x7e15,	// (0x0005a146) aid_fshwr2_btn_pane_ParamLimits

0x7e21,	// (0x0005a152) aid_fshwr2_syb_pane_ParamLimits

0x7e33,	// (0x0005a164) aid_fshwr2_txt_pane_ParamLimits

0x7655,	// (0x00059986) fshwr2_bg_pane_ParamLimits

0x7e3f,	// (0x0005a170) fshwr2_func_candi_pane_ParamLimits

0x7e57,	// (0x0005a188) fshwr2_hwr_syb_pane_ParamLimits

0x7e6d,	// (0x0005a19e) fshwr2_icf_pane_ParamLimits

0x3f62,	// (0x00056293) list_double_graphic_pane_vc_g4_ParamLimits

0x3f62,	// (0x00056293) list_double_graphic_pane_vc_g4

0x80c4,	// (0x0005a3f5) cell_ituss_key_pane_g3_ParamLimits

0x80c4,	// (0x0005a3f5) cell_ituss_key_pane_g3

0x81c4,	// (0x0005a4f5) cell_ituss_key_t5_ParamLimits

0x81c4,	// (0x0005a4f5) cell_ituss_key_t5

0xea66,	// (0x00060d97) popup_fep_vkbss_window_ParamLimits

0xdee4,	// (0x00060215) aid_cell_ai5_quarter

0xed04,	// (0x00061035) icf_edit_indi_pane_t1_ParamLimits

0xef94,	// (0x000612c5) aid_tch_indicator_popup_pane_cp2_ParamLimits

0xef94,	// (0x000612c5) aid_tch_indicator_popup_pane_cp2

0xefa7,	// (0x000612d8) aid_tch_query_popup_data_pane_cp2_ParamLimits

0xefa7,	// (0x000612d8) aid_tch_query_popup_data_pane_cp2

0x94f3,	// (0x0005b824) aid_tch_query_popup_pane_ParamLimits

0x94f3,	// (0x0005b824) aid_tch_query_popup_pane

0x94f3,	// (0x0005b824) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x94f3,	// (0x0005b824) aid_tch_query_popup_data_pane_cp1

0x8b5f,	// (0x0005ae90) cell_fshwr2_syb_bg_pane_ParamLimits

0x7f6c,	// (0x0005a29d) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x7f80,	// (0x0005a2b1) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xea50,	// (0x00060d81) popup_fep_vkb_icf_pane_ParamLimits

0x7c77,	// (0x00059fa8) bg_popup_fep_char_preview_window_g10

0xe019,	// (0x0006034a) cell_ai5_widget_pane_g11_ParamLimits

0xe019,	// (0x0006034a) cell_ai5_widget_pane_g11

0xe025,	// (0x00060356) cell_ai5_widget_pane_g12_ParamLimits

0xe025,	// (0x00060356) cell_ai5_widget_pane_g12

0xe031,	// (0x00060362) cell_ai5_widget_pane_g13_ParamLimits

0xe031,	// (0x00060362) cell_ai5_widget_pane_g13

0xe161,	// (0x00060492) cell_ai5_widget_pane_t11_ParamLimits

0xe161,	// (0x00060492) cell_ai5_widget_pane_t11

0xe173,	// (0x000604a4) cell_ai5_widget_pane_t12_ParamLimits

0xe173,	// (0x000604a4) cell_ai5_widget_pane_t12

0x80d0,	// (0x0005a401) cell_ituss_key_pane_g4_ParamLimits

0x80d0,	// (0x0005a401) cell_ituss_key_pane_g4

0x80ec,	// (0x0005a41d) cell_ituss_key_pane_g5_ParamLimits

0x80ec,	// (0x0005a41d) cell_ituss_key_pane_g5

0x8108,	// (0x0005a439) cell_ituss_key_pane_g6_ParamLimits

0x8108,	// (0x0005a439) cell_ituss_key_pane_g6

0x90ad,	// (0x0005b3de) bg_icf_pane_g1

0xec0c,	// (0x00060f3d) bg_icf_pane_g2

0xec18,	// (0x00060f49) bg_icf_pane_g3

0xec22,	// (0x00060f53) bg_icf_pane_g4

0xec2e,	// (0x00060f5f) bg_icf_pane_g5

0xec38,	// (0x00060f69) bg_icf_pane_g6

0xec44,	// (0x00060f75) bg_icf_pane_g7

0xec4e,	// (0x00060f7f) bg_icf_pane_g8

0xec5a,	// (0x00060f8b) bg_icf_pane_g9

0x0008,

0xfef1,	// (0x00062222) bg_icf_pane_g

0xea95,	// (0x00060dc6) popup_hyb_candi_window_ParamLimits

0xea95,	// (0x00060dc6) popup_hyb_candi_window

0x9121,	// (0x0005b452) bg_popup_sub_pane_cp01_ParamLimits

0x9121,	// (0x0005b452) bg_popup_sub_pane_cp01

0xed1d,	// (0x0006104e) entry_hyb_candi_pane_ParamLimits

0xed1d,	// (0x0006104e) entry_hyb_candi_pane

0xed2c,	// (0x0006105d) grid_hyb_candi_pane_ParamLimits

0xed2c,	// (0x0006105d) grid_hyb_candi_pane

0xf02d,	// (0x0006135e) grid_hyb_phrase_pane_ParamLimits

0xf02d,	// (0x0006135e) grid_hyb_phrase_pane

0xf03c,	// (0x0006136d) cell_hyb_candi_pane_ParamLimits

0xf03c,	// (0x0006136d) cell_hyb_candi_pane

0xf3cb,	// (0x000616fc) cell_hyb_candi_scroll_pane

0x822c,	// (0x0005a55d) cell_hyb_candi_pane_g1

0xf058,	// (0x00061389) cell_hyb_candi_pane_t1

0xf066,	// (0x00061397) cell_hyb_phrase_pane

0x822c,	// (0x0005a55d) cell_hyb_phrase_pane_g1

0xf06f,	// (0x000613a0) cell_hyb_phrase_pane_t1

0xf07d,	// (0x000613ae) entry_hyb_candi_pane_t1

0x8838,	// (0x0005ab69) input_focus_pane_cp06

0xf08b,	// (0x000613bc) cell_hyb_candi_scroll_pane_g1

0xf093,	// (0x000613c4) cell_hyb_candi_scroll_pane_g1_aid

0xf09b,	// (0x000613cc) cell_hyb_candi_scroll_pane_g2

0xf0a3,	// (0x000613d4) cell_hyb_candi_scroll_pane_g2_aid

0xf0ab,	// (0x000613dc) cell_hyb_candi_scroll_pane_g3

0xf0b3,	// (0x000613e4) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Large
