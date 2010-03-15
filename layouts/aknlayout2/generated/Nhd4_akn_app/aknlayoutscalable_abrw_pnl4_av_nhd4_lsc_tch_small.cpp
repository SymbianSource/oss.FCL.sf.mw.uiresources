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

#include "aknlayoutscalable_abrw_pnl4_av_nhd4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x00027bc3 };

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
0x2f12,	// (0x0002aad5) Screen

0x2f1e,	// (0x0002aae1) application_window_ParamLimits

0x2f1e,	// (0x0002aae1) application_window

0xb159,	// (0x00032d1c) screen_g1

0x8692,	// (0x00030255) area_bottom_pane_ParamLimits

0x8692,	// (0x00030255) area_bottom_pane

0x3ea6,	// (0x0002ba69) area_top_pane_ParamLimits

0x3ea6,	// (0x0002ba69) area_top_pane

0x3f44,	// (0x0002bb07) main_pane_ParamLimits

0x3f44,	// (0x0002bb07) main_pane

0xb163,	// (0x00032d26) misc_graphics

0x9426,	// (0x00030fe9) battery_pane_ParamLimits

0x9426,	// (0x00030fe9) battery_pane

0xcd54,	// (0x00034917) bg_status_flat_pane_g8

0xcd5c,	// (0x0003491f) bg_status_flat_pane_g9

0xc4b0,	// (0x00034073) context_pane_ParamLimits

0xc4b0,	// (0x00034073) context_pane

0x9591,	// (0x00031154) navi_pane_ParamLimits

0x9591,	// (0x00031154) navi_pane

0x9609,	// (0x000311cc) signal_pane_ParamLimits

0x9609,	// (0x000311cc) signal_pane

0x0008,

0xf87a,	// (0x0003743d) bg_status_flat_pane_g

0x9699,	// (0x0003125c) status_pane_g1_ParamLimits

0x9699,	// (0x0003125c) status_pane_g1

0x96af,	// (0x00031272) status_pane_g2_ParamLimits

0x96af,	// (0x00031272) status_pane_g2

0xc515,	// (0x000340d8) status_pane_g3_ParamLimits

0xc515,	// (0x000340d8) status_pane_g3

0x0004,

0xf7a6,	// (0x00037369) status_pane_g_ParamLimits

0xf7a6,	// (0x00037369) status_pane_g

0x96bb,	// (0x0003127e) title_pane_ParamLimits

0x96bb,	// (0x0003127e) title_pane

0x971e,	// (0x000312e1) uni_indicator_pane_ParamLimits

0x971e,	// (0x000312e1) uni_indicator_pane

0xc3f3,	// (0x00033fb6) bg_list_pane_ParamLimits

0xc3f3,	// (0x00033fb6) bg_list_pane

0x028c,	// (0x00027e4f) find_pane

0x8ced,	// (0x000308b0) listscroll_app_pane_ParamLimits

0x8ced,	// (0x000308b0) listscroll_app_pane

0xc413,	// (0x00033fd6) listscroll_form_pane

0x8cf9,	// (0x000308bc) listscroll_gen_pane_ParamLimits

0x8cf9,	// (0x000308bc) listscroll_gen_pane

0xc413,	// (0x00033fd6) listscroll_set_pane

0xc6bd,	// (0x00034280) main_idle_act_pane

0xc1d7,	// (0x00033d9a) main_idle_trad_pane

0xc1d7,	// (0x00033d9a) main_list_empty_pane

0xb96b,	// (0x0003352e) main_midp_pane

0xc42d,	// (0x00033ff0) main_pane_g1_ParamLimits

0xc42d,	// (0x00033ff0) main_pane_g1

0x8d0d,	// (0x000308d0) popup_ai_message_window_ParamLimits

0x8d0d,	// (0x000308d0) popup_ai_message_window

0x8d9e,	// (0x00030961) popup_fep_china_uni_window_ParamLimits

0x8d9e,	// (0x00030961) popup_fep_china_uni_window

0x48fa,	// (0x0002c4bd) popup_fep_japan_candidate_window_ParamLimits

0x48fa,	// (0x0002c4bd) popup_fep_japan_candidate_window

0x4918,	// (0x0002c4db) popup_fep_japan_predictive_window_ParamLimits

0x4918,	// (0x0002c4db) popup_fep_japan_predictive_window

0x8df8,	// (0x000309bb) popup_find_window

0x8e15,	// (0x000309d8) popup_grid_graphic_window_ParamLimits

0x8e15,	// (0x000309d8) popup_grid_graphic_window

0x497d,	// (0x0002c540) popup_large_graphic_colour_window

0x8ead,	// (0x00030a70) popup_menu_window_ParamLimits

0x8ead,	// (0x00030a70) popup_menu_window

0x9079,	// (0x00030c3c) popup_note_image_window

0x903f,	// (0x00030c02) popup_note_wait_window_ParamLimits

0x903f,	// (0x00030c02) popup_note_wait_window

0x9091,	// (0x00030c54) popup_note_window_ParamLimits

0x9091,	// (0x00030c54) popup_note_window

0x9137,	// (0x00030cfa) popup_query_code_window_ParamLimits

0x9137,	// (0x00030cfa) popup_query_code_window

0x4bc7,	// (0x0002c78a) popup_query_data_code_window_ParamLimits

0x4bc7,	// (0x0002c78a) popup_query_data_code_window

0x9171,	// (0x00030d34) popup_query_data_window_ParamLimits

0x9171,	// (0x00030d34) popup_query_data_window

0x91ed,	// (0x00030db0) popup_query_sat_info_window_ParamLimits

0x91ed,	// (0x00030db0) popup_query_sat_info_window

0x9284,	// (0x00030e47) popup_snote_single_graphic_window_ParamLimits

0x9284,	// (0x00030e47) popup_snote_single_graphic_window

0x9284,	// (0x00030e47) popup_snote_single_text_window_ParamLimits

0x9284,	// (0x00030e47) popup_snote_single_text_window

0x4c4a,	// (0x0002c80d) popup_sub_window_general

0x4d78,	// (0x0002c93b) popup_window_general_ParamLimits

0x4d78,	// (0x0002c93b) popup_window_general

0xc43b,	// (0x00033ffe) power_save_pane

0x8b55,	// (0x00030718) control_pane_g1_ParamLimits

0x8b55,	// (0x00030718) control_pane_g1

0x8b7e,	// (0x00030741) control_pane_g2_ParamLimits

0x8b7e,	// (0x00030741) control_pane_g2

0xc3dd,	// (0x00033fa0) control_pane_g3_ParamLimits

0xc3dd,	// (0x00033fa0) control_pane_g3

0x0007,

0xf78e,	// (0x00037351) control_pane_g_ParamLimits

0xf78e,	// (0x00037351) control_pane_g

0x8be6,	// (0x000307a9) control_pane_t1_ParamLimits

0x8be6,	// (0x000307a9) control_pane_t1

0x8c44,	// (0x00030807) control_pane_t2_ParamLimits

0x8c44,	// (0x00030807) control_pane_t2

0x0002,

0xf79f,	// (0x00037362) control_pane_t_ParamLimits

0xf79f,	// (0x00037362) control_pane_t

0xc2fe,	// (0x00033ec1) navi_navi_volume_pane_cp1

0xc307,	// (0x00033eca) status_small_icon_pane

0xc30f,	// (0x00033ed2) status_small_pane_g1_ParamLimits

0xc30f,	// (0x00033ed2) status_small_pane_g1

0xc343,	// (0x00033f06) status_small_pane_g2_ParamLimits

0xc343,	// (0x00033f06) status_small_pane_g2

0xc34f,	// (0x00033f12) status_small_pane_g3_ParamLimits

0xc34f,	// (0x00033f12) status_small_pane_g3

0xc35b,	// (0x00033f1e) status_small_pane_g4_ParamLimits

0xc35b,	// (0x00033f1e) status_small_pane_g4

0xc367,	// (0x00033f2a) status_small_pane_g5_ParamLimits

0xc367,	// (0x00033f2a) status_small_pane_g5

0xc376,	// (0x00033f39) status_small_pane_g6_ParamLimits

0xc376,	// (0x00033f39) status_small_pane_g6

0x0007,

0xf77d,	// (0x00037340) status_small_pane_g_ParamLimits

0xf77d,	// (0x00037340) status_small_pane_g

0xc3a6,	// (0x00033f69) status_small_pane_t1

0xc3c9,	// (0x00033f8c) status_small_wait_pane_ParamLimits

0xc3c9,	// (0x00033f8c) status_small_wait_pane

0x897d,	// (0x00030540) aid_levels_signal_ParamLimits

0x897d,	// (0x00030540) aid_levels_signal

0x8995,	// (0x00030558) signal_pane_g1_ParamLimits

0x8995,	// (0x00030558) signal_pane_g1

0x89b0,	// (0x00030573) signal_pane_g2_ParamLimits

0x89b0,	// (0x00030573) signal_pane_g2

0x0003,

0xf70e,	// (0x000372d1) signal_pane_g_ParamLimits

0xf70e,	// (0x000372d1) signal_pane_g

0xbd8d,	// (0x00033950) context_pane_g1

0x2f2e,	// (0x0002aaf1) title_pane_g1

0x3045,	// (0x0002ac08) title_pane_t1

0xb179,	// (0x00032d3c) title_pane_t2

0xb19f,	// (0x00032d62) title_pane_t3

0x0002,

0xf55d,	// (0x00037120) title_pane_t

0x9746,	// (0x00031309) aid_levels_battery_ParamLimits

0x9746,	// (0x00031309) aid_levels_battery

0x9762,	// (0x00031325) battery_pane_g1_ParamLimits

0x9762,	// (0x00031325) battery_pane_g1

0x977f,	// (0x00031342) battery_pane_g2_ParamLimits

0x977f,	// (0x00031342) battery_pane_g2

0x0001,

0xf7b1,	// (0x00037374) battery_pane_g_ParamLimits

0xf7b1,	// (0x00037374) battery_pane_g

0x9bd6,	// (0x00031799) uni_indicator_pane_g1

0x9beb,	// (0x000317ae) uni_indicator_pane_g2

0xd516,	// (0x000350d9) uni_indicator_pane_g3

0x0005,

0xf922,	// (0x000374e5) uni_indicator_pane_g

0xc06d,	// (0x00033c30) navi_icon_pane_ParamLimits

0xc06d,	// (0x00033c30) navi_icon_pane

0xbff1,	// (0x00033bb4) navi_midp_pane

0xc089,	// (0x00033c4c) navi_navi_pane

0xc093,	// (0x00033c56) navi_text_pane_ParamLimits

0xc093,	// (0x00033c56) navi_text_pane

0xb159,	// (0x00032d1c) status_small_wait_pane_g1

0xb47a,	// (0x0003303d) status_small_wait_pane_g2

0x0001,

0xf91d,	// (0x000374e0) status_small_wait_pane_g

0xd298,	// (0x00034e5b) navi_navi_icon_text_pane

0xd2a0,	// (0x00034e63) navi_navi_pane_g1_ParamLimits

0xd2a0,	// (0x00034e63) navi_navi_pane_g1

0xd2b2,	// (0x00034e75) navi_navi_pane_g2_ParamLimits

0xd2b2,	// (0x00034e75) navi_navi_pane_g2

0x0001,

0xf8eb,	// (0x000374ae) navi_navi_pane_g_ParamLimits

0xf8eb,	// (0x000374ae) navi_navi_pane_g

0xd2c4,	// (0x00034e87) navi_navi_tabs_pane

0xd2cd,	// (0x00034e90) navi_navi_text_pane

0xd298,	// (0x00034e5b) navi_navi_volume_pane

0x9b5f,	// (0x00031722) navi_text_pane_t1

0xd27a,	// (0x00034e3d) navi_icon_pane_g1

0xd1e1,	// (0x00034da4) navi_navi_text_pane_t1

0x9b3a,	// (0x000316fd) navi_navi_volume_pane_g1

0x9b42,	// (0x00031705) volume_small_pane

0x9a96,	// (0x00031659) navi_navi_icon_text_pane_g1

0x9a9e,	// (0x00031661) navi_navi_icon_text_pane_t1

0xc089,	// (0x00033c4c) navi_tabs_2_long_pane

0xc089,	// (0x00033c4c) navi_tabs_2_pane

0xc089,	// (0x00033c4c) navi_tabs_3_long_pane

0xc089,	// (0x00033c4c) navi_tabs_3_pane

0xc089,	// (0x00033c4c) navi_tabs_4_pane

0x9a54,	// (0x00031617) tabs_2_active_pane_ParamLimits

0x9a54,	// (0x00031617) tabs_2_active_pane

0x9a64,	// (0x00031627) tabs_2_passive_pane_ParamLimits

0x9a64,	// (0x00031627) tabs_2_passive_pane

0x9a22,	// (0x000315e5) tabs_3_active_pane_ParamLimits

0x9a22,	// (0x000315e5) tabs_3_active_pane

0x9a32,	// (0x000315f5) tabs_3_passive_pane_ParamLimits

0x9a32,	// (0x000315f5) tabs_3_passive_pane

0x9a43,	// (0x00031606) tabs_3_passive_pane_cp_ParamLimits

0x9a43,	// (0x00031606) tabs_3_passive_pane_cp

0x99de,	// (0x000315a1) tabs_4_active_pane_ParamLimits

0x99de,	// (0x000315a1) tabs_4_active_pane

0x99ef,	// (0x000315b2) tabs_4_passive_pane_ParamLimits

0x99ef,	// (0x000315b2) tabs_4_passive_pane

0x9a00,	// (0x000315c3) tabs_4_passive_pane_cp_ParamLimits

0x9a00,	// (0x000315c3) tabs_4_passive_pane_cp

0x9a11,	// (0x000315d4) tabs_4_passive_pane_cp2_ParamLimits

0x9a11,	// (0x000315d4) tabs_4_passive_pane_cp2

0x99be,	// (0x00031581) tabs_2_long_active_pane_ParamLimits

0x99be,	// (0x00031581) tabs_2_long_active_pane

0x99ce,	// (0x00031591) tabs_2_long_passive_pane_ParamLimits

0x99ce,	// (0x00031591) tabs_2_long_passive_pane

0x9989,	// (0x0003154c) tabs_3_long_active_pane_ParamLimits

0x9989,	// (0x0003154c) tabs_3_long_active_pane

0x999a,	// (0x0003155d) tabs_3_long_passive_pane_ParamLimits

0x999a,	// (0x0003155d) tabs_3_long_passive_pane

0x99ad,	// (0x00031570) tabs_3_long_passive_pane_cp_ParamLimits

0x99ad,	// (0x00031570) tabs_3_long_passive_pane_cp

0x4ecf,	// (0x0002ca92) volume_small_pane_g1

0x9938,	// (0x000314fb) volume_small_pane_g2

0x9941,	// (0x00031504) volume_small_pane_g3

0x994a,	// (0x0003150d) volume_small_pane_g4

0x9953,	// (0x00031516) volume_small_pane_g5

0x995c,	// (0x0003151f) volume_small_pane_g6

0x9965,	// (0x00031528) volume_small_pane_g7

0x996e,	// (0x00031531) volume_small_pane_g8

0x9977,	// (0x0003153a) volume_small_pane_g9

0x9980,	// (0x00031543) volume_small_pane_g10

0x0009,

0xf8b7,	// (0x0003747a) volume_small_pane_g

0xb1b1,	// (0x00032d74) bg_active_tab_pane_cp2_ParamLimits

0xb1b1,	// (0x00032d74) bg_active_tab_pane_cp2

0x30d1,	// (0x0002ac94) tabs_3_active_pane_g1

0x30d9,	// (0x0002ac9c) tabs_3_active_pane_t1

0xb1b1,	// (0x00032d74) bg_passive_tab_pane_cp2_ParamLimits

0xb1b1,	// (0x00032d74) bg_passive_tab_pane_cp2

0x30d1,	// (0x0002ac94) tabs_3_passive_pane_g1

0x30d9,	// (0x0002ac9c) tabs_3_passive_pane_t1

0xb1b1,	// (0x00032d74) bg_active_tab_pane_cp3_ParamLimits

0xb1b1,	// (0x00032d74) bg_active_tab_pane_cp3

0x30eb,	// (0x0002acae) tabs_4_active_pane_g1

0x30f3,	// (0x0002acb6) tabs_4_active_pane_t1

0xb1b1,	// (0x00032d74) bg_passive_tab_pane_cp3_ParamLimits

0xb1b1,	// (0x00032d74) bg_passive_tab_pane_cp3

0x30eb,	// (0x0002acae) tabs_4_1_passive_pane_g1

0x30f3,	// (0x0002acb6) tabs_4_1_passive_pane_t1

0xb96b,	// (0x0003352e) list_highlight_pane_cp2

0x9c75,	// (0x00031838) list_set_pane_ParamLimits

0x9c75,	// (0x00031838) list_set_pane

0x9d0f,	// (0x000318d2) main_pane_set_t1_ParamLimits

0x9d0f,	// (0x000318d2) main_pane_set_t1

0x9d2f,	// (0x000318f2) main_pane_set_t2_ParamLimits

0x9d2f,	// (0x000318f2) main_pane_set_t2

0x9d43,	// (0x00031906) main_pane_set_t3_ParamLimits

0x9d43,	// (0x00031906) main_pane_set_t3

0x9d55,	// (0x00031918) main_pane_set_t4_ParamLimits

0x9d55,	// (0x00031918) main_pane_set_t4

0x0003,

0xf987,	// (0x0003754a) main_pane_set_t_ParamLimits

0xf987,	// (0x0003754a) main_pane_set_t

0x9d67,	// (0x0003192a) setting_code_pane

0x9d6f,	// (0x00031932) setting_slider_graphic_pane

0x9d6f,	// (0x00031932) setting_slider_pane

0x9d6f,	// (0x00031932) setting_text_pane

0x9d6f,	// (0x00031932) setting_volume_pane

0x417b,	// (0x0002bd3e) volume_set_pane

0xb1bf,	// (0x00032d82) bg_set_opt_pane_cp

0x4183,	// (0x0002bd46) setting_slider_pane_t1

0x419c,	// (0x0002bd5f) setting_slider_pane_t2

0x41b6,	// (0x0002bd79) setting_slider_pane_t3

0x0002,

0xf564,	// (0x00037127) setting_slider_pane_t

0x41ce,	// (0x0002bd91) slider_set_pane

0xb163,	// (0x00032d26) bg_set_opt_pane_cp2

0xb1cd,	// (0x00032d90) setting_slider_graphic_pane_g1

0x41e4,	// (0x0002bda7) setting_slider_graphic_pane_t1

0x41f4,	// (0x0002bdb7) setting_slider_graphic_pane_t2

0x0001,

0xf56b,	// (0x0003712e) setting_slider_graphic_pane_t

0x4204,	// (0x0002bdc7) slider_set_pane_cp

0xb163,	// (0x00032d26) input_focus_pane_cp1

0xd6f3,	// (0x000352b6) list_set_text_pane

0xb159,	// (0x00032d1c) setting_text_pane_g1

0xb163,	// (0x00032d26) input_focus_pane_cp2

0xb159,	// (0x00032d1c) setting_code_pane_g1

0xb1d6,	// (0x00032d99) setting_code_pane_t1

0x6c03,	// (0x0002e7c6) set_text_pane_t1_ParamLimits

0x6c03,	// (0x0002e7c6) set_text_pane_t1

0xb861,	// (0x00033424) set_opt_bg_pane_g1

0xb869,	// (0x0003342c) set_opt_bg_pane_g2

0xd6d3,	// (0x00035296) set_opt_bg_pane_g3

0xb879,	// (0x0003343c) set_opt_bg_pane_g4

0xb881,	// (0x00033444) set_opt_bg_pane_g5

0xb889,	// (0x0003344c) set_opt_bg_pane_g6

0xd6db,	// (0x0003529e) set_opt_bg_pane_g7

0xd6e3,	// (0x000352a6) set_opt_bg_pane_g8

0xd6eb,	// (0x000352ae) set_opt_bg_pane_g9

0x0008,

0xf974,	// (0x00037537) set_opt_bg_pane_g

0xd6c6,	// (0x00035289) slider_set_pane_g1

0x5091,	// (0x0002cc54) slider_set_pane_g2

0x0006,

0xf965,	// (0x00037528) slider_set_pane_g

0x502d,	// (0x0002cbf0) volume_set_pane_g1

0x5035,	// (0x0002cbf8) volume_set_pane_g2

0x503d,	// (0x0002cc00) volume_set_pane_g3

0x5045,	// (0x0002cc08) volume_set_pane_g4

0x504d,	// (0x0002cc10) volume_set_pane_g5

0x5055,	// (0x0002cc18) volume_set_pane_g6

0x505d,	// (0x0002cc20) volume_set_pane_g7

0x5065,	// (0x0002cc28) volume_set_pane_g8

0x506d,	// (0x0002cc30) volume_set_pane_g9

0x5075,	// (0x0002cc38) volume_set_pane_g10

0x0009,

0xf93d,	// (0x00037500) volume_set_pane_g

0x3105,	// (0x0002acc8) indicator_pane_ParamLimits

0x3105,	// (0x0002acc8) indicator_pane

0x312d,	// (0x0002acf0) main_idle_pane_g2_ParamLimits

0x312d,	// (0x0002acf0) main_idle_pane_g2

0x3165,	// (0x0002ad28) main_pane_idle_g1_ParamLimits

0x3165,	// (0x0002ad28) main_pane_idle_g1

0xb1e4,	// (0x00032da7) popup_clock_digital_analogue_window_ParamLimits

0xb1e4,	// (0x00032da7) popup_clock_digital_analogue_window

0x318c,	// (0x0002ad4f) soft_indicator_pane_ParamLimits

0x318c,	// (0x0002ad4f) soft_indicator_pane

0x31a6,	// (0x0002ad69) wallpaper_pane_ParamLimits

0x31a6,	// (0x0002ad69) wallpaper_pane

0xb159,	// (0x00032d1c) wallpaper_pane_g1

0x31b8,	// (0x0002ad7b) indicator_pane_g1_ParamLimits

0x31b8,	// (0x0002ad7b) indicator_pane_g1

0xd864,	// (0x00035427) navi_navi_icon_text_pane_srt_g1

0xb212,	// (0x00032dd5) soft_indicator_pane_t1

0xb22c,	// (0x00032def) aid_ps_area_pane

0x31ce,	// (0x0002ad91) aid_ps_clock_pane

0xb23d,	// (0x00032e00) aid_ps_indicator_pane

0xb249,	// (0x00032e0c) indicator_ps_pane_ParamLimits

0xb249,	// (0x00032e0c) indicator_ps_pane

0xb258,	// (0x00032e1b) power_save_pane_g1_ParamLimits

0xb258,	// (0x00032e1b) power_save_pane_g1

0xb264,	// (0x00032e27) power_save_pane_g2_ParamLimits

0xb264,	// (0x00032e27) power_save_pane_g2

0x3d9a,	// (0x0002b95d) aid_navinavi_width_pane

0xb22c,	// (0x00032def) aid_ps_area_pane_ParamLimits

0x0001,

0xf570,	// (0x00037133) power_save_pane_g_ParamLimits

0xf570,	// (0x00037133) power_save_pane_g

0xb272,	// (0x00032e35) power_save_pane_t1_ParamLimits

0xb272,	// (0x00032e35) power_save_pane_t1

0x31ce,	// (0x0002ad91) aid_ps_clock_pane_ParamLimits

0xb23d,	// (0x00032e00) aid_ps_indicator_pane_ParamLimits

0xb284,	// (0x00032e47) power_save_pane_t4_ParamLimits

0xb284,	// (0x00032e47) power_save_pane_t4

0x0001,

0xf575,	// (0x00037138) power_save_pane_t_ParamLimits

0xf575,	// (0x00037138) power_save_pane_t

0xb2ae,	// (0x00032e71) power_save_t3_ParamLimits

0xb2ae,	// (0x00032e71) power_save_t3

0xb299,	// (0x00032e5c) power_save_t2_ParamLimits

0xb299,	// (0x00032e5c) power_save_t2

0xb2c3,	// (0x00032e86) indicator_ps_pane_g1

0x31dc,	// (0x0002ad9f) ai_gene_pane_ParamLimits

0x31dc,	// (0x0002ad9f) ai_gene_pane

0x31f3,	// (0x0002adb6) ai_links_pane_ParamLimits

0x31f3,	// (0x0002adb6) ai_links_pane

0x320b,	// (0x0002adce) indicator_pane_cp1_ParamLimits

0x320b,	// (0x0002adce) indicator_pane_cp1

0x321a,	// (0x0002addd) main_pane_idle_g1_cp_ParamLimits

0x321a,	// (0x0002addd) main_pane_idle_g1_cp

0xb2cc,	// (0x00032e8f) popup_ai_links_title_window

0x3232,	// (0x0002adf5) soft_indicator_pane_cp1_ParamLimits

0x3232,	// (0x0002adf5) soft_indicator_pane_cp1

0xd504,	// (0x000350c7) ai_links_pane_g1

0xd50d,	// (0x000350d0) grid_ai_links_pane

0x9bcd,	// (0x00031790) ai_gene_pane_1

0xd4f2,	// (0x000350b5) ai_gene_pane_2

0xd4fb,	// (0x000350be) list_highlight_pane_cp4

0x9ba9,	// (0x0003176c) cell_ai_link_pane_ParamLimits

0x9ba9,	// (0x0003176c) cell_ai_link_pane

0xd4ea,	// (0x000350ad) cell_ai_link_pane_g1

0xb47a,	// (0x0003303d) cell_ai_link_pane_g2

0x0001,

0xf918,	// (0x000374db) cell_ai_link_pane_g

0xb163,	// (0x00032d26) grid_highlight_cp2

0xb163,	// (0x00032d26) bg_popup_sub_pane_cp1

0xb2e3,	// (0x00032ea6) popup_ai_links_title_window_t1

0xd45c,	// (0x0003501f) ai_gene_pane_1_g1_ParamLimits

0xd45c,	// (0x0003501f) ai_gene_pane_1_g1

0xd468,	// (0x0003502b) ai_gene_pane_1_g2_ParamLimits

0xd468,	// (0x0003502b) ai_gene_pane_1_g2

0x0001,

0xf90e,	// (0x000374d1) ai_gene_pane_1_g_ParamLimits

0xf90e,	// (0x000374d1) ai_gene_pane_1_g

0xd475,	// (0x00035038) ai_gene_pane_1_t1_ParamLimits

0xd475,	// (0x00035038) ai_gene_pane_1_t1

0xd4a9,	// (0x0003506c) grid_ai_soft_ind_pane

0xd447,	// (0x0003500a) ai_gene_pane_2_t1_ParamLimits

0xd447,	// (0x0003500a) ai_gene_pane_2_t1

0x3246,	// (0x0002ae09) main_pane_empty_t1_ParamLimits

0x3246,	// (0x0002ae09) main_pane_empty_t1

0x325e,	// (0x0002ae21) main_pane_empty_t2_ParamLimits

0x325e,	// (0x0002ae21) main_pane_empty_t2

0x3273,	// (0x0002ae36) main_pane_empty_t3_ParamLimits

0x3273,	// (0x0002ae36) main_pane_empty_t3

0x3285,	// (0x0002ae48) main_pane_empty_t4_ParamLimits

0x3285,	// (0x0002ae48) main_pane_empty_t4

0x3297,	// (0x0002ae5a) main_pane_empty_t5_ParamLimits

0x3297,	// (0x0002ae5a) main_pane_empty_t5

0x0004,

0xf57a,	// (0x0003713d) main_pane_empty_t_ParamLimits

0xf57a,	// (0x0003713d) main_pane_empty_t

0xb8b2,	// (0x00033475) bg_popup_window_pane_ParamLimits

0xb8b2,	// (0x00033475) bg_popup_window_pane

0xd1ef,	// (0x00034db2) find_popup_pane_cp2_ParamLimits

0xd1ef,	// (0x00034db2) find_popup_pane_cp2

0xd1fb,	// (0x00034dbe) heading_pane_ParamLimits

0xd1fb,	// (0x00034dbe) heading_pane

0xb163,	// (0x00032d26) bg_popup_sub_pane

0x9abb,	// (0x0003167e) bg_popup_window_pane_g1_ParamLimits

0x9abb,	// (0x0003167e) bg_popup_window_pane_g1

0x9aca,	// (0x0003168d) bg_popup_window_pane_g2_ParamLimits

0x9aca,	// (0x0003168d) bg_popup_window_pane_g2

0x9ad6,	// (0x00031699) bg_popup_window_pane_g3_ParamLimits

0x9ad6,	// (0x00031699) bg_popup_window_pane_g3

0x9ae2,	// (0x000316a5) bg_popup_window_pane_g4_ParamLimits

0x9ae2,	// (0x000316a5) bg_popup_window_pane_g4

0x9af1,	// (0x000316b4) bg_popup_window_pane_g5_ParamLimits

0x9af1,	// (0x000316b4) bg_popup_window_pane_g5

0x9b01,	// (0x000316c4) bg_popup_window_pane_g6_ParamLimits

0x9b01,	// (0x000316c4) bg_popup_window_pane_g6

0x9b0d,	// (0x000316d0) bg_popup_window_pane_g7_ParamLimits

0x9b0d,	// (0x000316d0) bg_popup_window_pane_g7

0x9b1c,	// (0x000316df) bg_popup_window_pane_g8_ParamLimits

0x9b1c,	// (0x000316df) bg_popup_window_pane_g8

0x9b2b,	// (0x000316ee) bg_popup_window_pane_g9_ParamLimits

0x9b2b,	// (0x000316ee) bg_popup_window_pane_g9

0xd1d5,	// (0x00034d98) bg_popup_window_pane_g10_ParamLimits

0xd1d5,	// (0x00034d98) bg_popup_window_pane_g10

0x0009,

0xf8d6,	// (0x00037499) bg_popup_window_pane_g_ParamLimits

0xf8d6,	// (0x00037499) bg_popup_window_pane_g

0xd18c,	// (0x00034d4f) bg_popup_heading_pane_ParamLimits

0xd18c,	// (0x00034d4f) bg_popup_heading_pane

0x5119,	// (0x0002ccdc) tabs_4_passive_pane_cp_srt_ParamLimits

0x5119,	// (0x0002ccdc) tabs_4_passive_pane_cp_srt

0x512b,	// (0x0002ccee) tabs_4_passive_pane_srt_ParamLimits

0xd1a0,	// (0x00034d63) heading_pane_g2

0x512b,	// (0x0002ccee) tabs_4_passive_pane_srt

0xc67f,	// (0x00034242) bg_passive_tab_pane_cp3_srt_ParamLimits

0xc67f,	// (0x00034242) bg_passive_tab_pane_cp3_srt

0xd1a8,	// (0x00034d6b) heading_pane_t1_ParamLimits

0xd1a8,	// (0x00034d6b) heading_pane_t1

0xd1bf,	// (0x00034d82) heading_pane_t2_ParamLimits

0xd1bf,	// (0x00034d82) heading_pane_t2

0x0001,

0xf8d1,	// (0x00037494) heading_pane_t_ParamLimits

0xf8d1,	// (0x00037494) heading_pane_t

0xcd1c,	// (0x000348df) bg_popup_heading_pane_g1

0xcdad,	// (0x00034970) bg_popup_heading_pane_g2

0xcdb7,	// (0x0003497a) bg_popup_heading_pane_g3

0xcdc1,	// (0x00034984) bg_popup_heading_pane_g4

0xcdcb,	// (0x0003498e) bg_popup_heading_pane_g5

0xcdd5,	// (0x00034998) bg_popup_heading_pane_g6

0xcddd,	// (0x000349a0) bg_popup_heading_pane_g7

0xcde5,	// (0x000349a8) bg_popup_heading_pane_g8

0xcdef,	// (0x000349b2) bg_popup_heading_pane_g9

0x0008,

0xf88d,	// (0x00037450) bg_popup_heading_pane_g

0xc60b,	// (0x000341ce) bg_popup_sub_pane_g1

0xc61b,	// (0x000341de) bg_popup_sub_pane_g2

0xc613,	// (0x000341d6) bg_popup_sub_pane_g3

0xc62b,	// (0x000341ee) bg_popup_sub_pane_g4

0xc623,	// (0x000341e6) bg_popup_sub_pane_g5

0xc633,	// (0x000341f6) bg_popup_sub_pane_g6

0xc63b,	// (0x000341fe) bg_popup_sub_pane_g7

0xc64b,	// (0x0003420e) bg_popup_sub_pane_g8

0xc643,	// (0x00034206) bg_popup_sub_pane_g9

0x0008,

0xf867,	// (0x0003742a) bg_popup_sub_pane_g

0xb1b1,	// (0x00032d74) bg_popup_window_pane_cp5_ParamLimits

0xb1b1,	// (0x00032d74) bg_popup_window_pane_cp5

0xb300,	// (0x00032ec3) popup_note_window_g1_ParamLimits

0xb300,	// (0x00032ec3) popup_note_window_g1

0xb30c,	// (0x00032ecf) popup_note_window_t1_ParamLimits

0xb30c,	// (0x00032ecf) popup_note_window_t1

0xb31e,	// (0x00032ee1) popup_note_window_t2_ParamLimits

0xb31e,	// (0x00032ee1) popup_note_window_t2

0xb330,	// (0x00032ef3) popup_note_window_t3_ParamLimits

0xb330,	// (0x00032ef3) popup_note_window_t3

0xb342,	// (0x00032f05) popup_note_window_t4_ParamLimits

0xb342,	// (0x00032f05) popup_note_window_t4

0xb36a,	// (0x00032f2d) popup_note_window_t5_ParamLimits

0xb36a,	// (0x00032f2d) popup_note_window_t5

0x0004,

0xf585,	// (0x00037148) popup_note_window_t_ParamLimits

0xf585,	// (0x00037148) popup_note_window_t

0xb38e,	// (0x00032f51) bg_popup_window_pane_cp6_ParamLimits

0xb38e,	// (0x00032f51) bg_popup_window_pane_cp6

0xcc90,	// (0x00034853) popup_note_image_window_g1_ParamLimits

0xcc90,	// (0x00034853) popup_note_image_window_g1

0xcc9c,	// (0x0003485f) popup_note_image_window_g2_ParamLimits

0xcc9c,	// (0x0003485f) popup_note_image_window_g2

0x0001,

0xf85b,	// (0x0003741e) popup_note_image_window_g_ParamLimits

0xf85b,	// (0x0003741e) popup_note_image_window_g

0xccb5,	// (0x00034878) popup_note_image_window_t1_ParamLimits

0xccb5,	// (0x00034878) popup_note_image_window_t1

0xccce,	// (0x00034891) popup_note_image_window_t2_ParamLimits

0xccce,	// (0x00034891) popup_note_image_window_t2

0xcce7,	// (0x000348aa) popup_note_image_window_t3_ParamLimits

0xcce7,	// (0x000348aa) popup_note_image_window_t3

0x0002,

0xf860,	// (0x00037423) popup_note_image_window_t_ParamLimits

0xf860,	// (0x00037423) popup_note_image_window_t

0xcb6d,	// (0x00034730) bg_popup_window_pane_cp7_ParamLimits

0xcb6d,	// (0x00034730) bg_popup_window_pane_cp7

0xcb9d,	// (0x00034760) popup_note_wait_window_g1_ParamLimits

0xcb9d,	// (0x00034760) popup_note_wait_window_g1

0xcba9,	// (0x0003476c) popup_note_wait_window_g2_ParamLimits

0xcba9,	// (0x0003476c) popup_note_wait_window_g2

0x0002,

0xf849,	// (0x0003740c) popup_note_wait_window_g_ParamLimits

0xf849,	// (0x0003740c) popup_note_wait_window_g

0xcbc1,	// (0x00034784) popup_note_wait_window_t1_ParamLimits

0xcbc1,	// (0x00034784) popup_note_wait_window_t1

0xcbe8,	// (0x000347ab) popup_note_wait_window_t2_ParamLimits

0xcbe8,	// (0x000347ab) popup_note_wait_window_t2

0xcc05,	// (0x000347c8) popup_note_wait_window_t3_ParamLimits

0xcc05,	// (0x000347c8) popup_note_wait_window_t3

0xcc18,	// (0x000347db) popup_note_wait_window_t4_ParamLimits

0xcc18,	// (0x000347db) popup_note_wait_window_t4

0x0004,

0xf850,	// (0x00037413) popup_note_wait_window_t_ParamLimits

0xf850,	// (0x00037413) popup_note_wait_window_t

0xcc3d,	// (0x00034800) wait_bar_pane_ParamLimits

0xcc3d,	// (0x00034800) wait_bar_pane

0xb163,	// (0x00032d26) wait_anim_pane

0xb163,	// (0x00032d26) wait_border_pane

0xb159,	// (0x00032d1c) wait_anim_pane_g1

0xb159,	// (0x00032d1c) wait_anim_pane_g2

0x0001,

0xf709,	// (0x000372cc) wait_anim_pane_g

0xcb11,	// (0x000346d4) wait_border_pane_g1

0xcb1c,	// (0x000346df) wait_border_pane_g2

0xcb25,	// (0x000346e8) wait_border_pane_g3

0x0002,

0xf842,	// (0x00037405) wait_border_pane_g

0xc981,	// (0x00034544) bg_popup_window_pane_cp16_ParamLimits

0xc981,	// (0x00034544) bg_popup_window_pane_cp16

0xca81,	// (0x00034644) indicator_popup_pane_cp4_ParamLimits

0xca81,	// (0x00034644) indicator_popup_pane_cp4

0xca95,	// (0x00034658) popup_query_data_window_t1_ParamLimits

0xca95,	// (0x00034658) popup_query_data_window_t1

0xcaa7,	// (0x0003466a) popup_query_data_window_t2_ParamLimits

0xcaa7,	// (0x0003466a) popup_query_data_window_t2

0xcac0,	// (0x00034683) popup_query_data_window_t3_ParamLimits

0xcac0,	// (0x00034683) popup_query_data_window_t3

0x0002,

0xf83b,	// (0x000373fe) popup_query_data_window_t_ParamLimits

0xf83b,	// (0x000373fe) popup_query_data_window_t

0xcada,	// (0x0003469d) query_popup_data_pane_ParamLimits

0xcada,	// (0x0003469d) query_popup_data_pane

0xcaee,	// (0x000346b1) query_popup_data_pane_cp1_ParamLimits

0xcaee,	// (0x000346b1) query_popup_data_pane_cp1

0xc981,	// (0x00034544) bg_popup_window_pane_cp10_ParamLimits

0xc981,	// (0x00034544) bg_popup_window_pane_cp10

0xc9b3,	// (0x00034576) indicator_popup_pane_ParamLimits

0xc9b3,	// (0x00034576) indicator_popup_pane

0xc9d5,	// (0x00034598) popup_query_code_window_t1_ParamLimits

0xc9d5,	// (0x00034598) popup_query_code_window_t1

0xc9ef,	// (0x000345b2) popup_query_code_window_t2_ParamLimits

0xc9ef,	// (0x000345b2) popup_query_code_window_t2

0xca38,	// (0x000345fb) popup_query_code_window_t3_ParamLimits

0xca38,	// (0x000345fb) popup_query_code_window_t3

0x0002,

0xf834,	// (0x000373f7) popup_query_code_window_t_ParamLimits

0xf834,	// (0x000373f7) popup_query_code_window_t

0xca67,	// (0x0003462a) query_popup_pane_ParamLimits

0xca67,	// (0x0003462a) query_popup_pane

0xb38e,	// (0x00032f51) bg_popup_window_pane_cp15_ParamLimits

0xb38e,	// (0x00032f51) bg_popup_window_pane_cp15

0xb3ac,	// (0x00032f6f) indicator_popup_pane_cp1_ParamLimits

0xb3ac,	// (0x00032f6f) indicator_popup_pane_cp1

0xb3bf,	// (0x00032f82) indicator_popup_pane_cp2_ParamLimits

0xb3bf,	// (0x00032f82) indicator_popup_pane_cp2

0xb3d2,	// (0x00032f95) popup_query_data_code_window_g1_ParamLimits

0xb3d2,	// (0x00032f95) popup_query_data_code_window_g1

0xb3e5,	// (0x00032fa8) popup_query_data_code_window_t1_ParamLimits

0xb3e5,	// (0x00032fa8) popup_query_data_code_window_t1

0xb3f7,	// (0x00032fba) popup_query_data_code_window_t2_ParamLimits

0xb3f7,	// (0x00032fba) popup_query_data_code_window_t2

0xb409,	// (0x00032fcc) popup_query_data_code_window_t3_ParamLimits

0xb409,	// (0x00032fcc) popup_query_data_code_window_t3

0xb41f,	// (0x00032fe2) popup_query_data_code_window_t4_ParamLimits

0xb41f,	// (0x00032fe2) popup_query_data_code_window_t4

0x0003,

0xf590,	// (0x00037153) popup_query_data_code_window_t_ParamLimits

0xf590,	// (0x00037153) popup_query_data_code_window_t

0x4de2,	// (0x0002c9a5) list_single_midp_graphic_pane_g3

0xb437,	// (0x00032ffa) query_popup_data_pane_cp2_ParamLimits

0xb44a,	// (0x0003300d) query_popup_pane_cp2_ParamLimits

0xb44a,	// (0x0003300d) query_popup_pane_cp2

0xb163,	// (0x00032d26) bg_popup_window_pane_cp11

0xc979,	// (0x0003453c) heading_pane_cp5

0xb4d8,	// (0x0003309b) listscroll_popup_info_pane

0xb163,	// (0x00032d26) input_focus_pane_cp3

0xb45d,	// (0x00033020) query_popup_pane_t1

0xb46b,	// (0x0003302e) list_popup_info_pane_ParamLimits

0xb46b,	// (0x0003302e) list_popup_info_pane

0xb47a,	// (0x0003303d) listscroll_popup_info_pane_g1

0xb482,	// (0x00033045) scroll_pane_cp7

0xb48c,	// (0x0003304f) popup_info_list_pane_t1_ParamLimits

0xb48c,	// (0x0003304f) popup_info_list_pane_t1

0xb4a6,	// (0x00033069) popup_info_list_pane_t2_ParamLimits

0xb4a6,	// (0x00033069) popup_info_list_pane_t2

0x0001,

0xf599,	// (0x0003715c) popup_info_list_pane_t_ParamLimits

0xf599,	// (0x0003715c) popup_info_list_pane_t

0xb163,	// (0x00032d26) bg_popup_window_pane_cp12

0xd87e,	// (0x00035441) find_popup_pane

0xb1bf,	// (0x00032d82) bg_popup_window_pane_cp3

0xb4c0,	// (0x00033083) heading_pane_cp3

0xb4cc,	// (0x0003308f) listscroll_popup_graphic_pane

0xb163,	// (0x00032d26) bg_popup_window_pane_cp4

0x32f9,	// (0x0002aebc) heading_pane_cp4

0xb4d8,	// (0x0003309b) listscroll_popup_colour_pane

0xb4e0,	// (0x000330a3) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xb4e0,	// (0x000330a3) cell_large_graphic_colour_none_popup_pane

0x3301,	// (0x0002aec4) grid_large_graphic_colour_popup_pane_ParamLimits

0x3301,	// (0x0002aec4) grid_large_graphic_colour_popup_pane

0xb4f4,	// (0x000330b7) listscroll_popup_colour_pane_g1_ParamLimits

0xb4f4,	// (0x000330b7) listscroll_popup_colour_pane_g1

0xb50b,	// (0x000330ce) listscroll_popup_colour_pane_g2_ParamLimits

0xb50b,	// (0x000330ce) listscroll_popup_colour_pane_g2

0xb522,	// (0x000330e5) listscroll_popup_colour_pane_g3_ParamLimits

0xb522,	// (0x000330e5) listscroll_popup_colour_pane_g3

0x3325,	// (0x0002aee8) listscroll_popup_colour_pane_g4_ParamLimits

0x3325,	// (0x0002aee8) listscroll_popup_colour_pane_g4

0x0003,

0xf59e,	// (0x00037161) listscroll_popup_colour_pane_g_ParamLimits

0xf59e,	// (0x00037161) listscroll_popup_colour_pane_g

0xb532,	// (0x000330f5) scroll_pane_cp6_ParamLimits

0xb532,	// (0x000330f5) scroll_pane_cp6

0x3334,	// (0x0002aef7) cell_large_graphic_colour_popup_pane_ParamLimits

0x3334,	// (0x0002aef7) cell_large_graphic_colour_popup_pane

0xb544,	// (0x00033107) cell_large_graphic_colour_none_popup_pane_t1

0xb163,	// (0x00032d26) grid_highlight_pane_cp5

0xb553,	// (0x00033116) cell_large_graphic_colour_popup_pane_g1

0xb55b,	// (0x0003311e) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a7,	// (0x0003716a) cell_large_graphic_colour_popup_pane_g

0xb563,	// (0x00033126) cell_large_graphic_colour_popup_pane_g2_copy1

0xb56c,	// (0x0003312f) grid_highlight_pane_cp4

0xb574,	// (0x00033137) bg_popup_window_pane_cp8_ParamLimits

0xb574,	// (0x00033137) bg_popup_window_pane_cp8

0xb58f,	// (0x00033152) popup_snote_single_text_window_g1_ParamLimits

0xb58f,	// (0x00033152) popup_snote_single_text_window_g1

0xb5a1,	// (0x00033164) popup_snote_single_text_window_t1_ParamLimits

0xb5a1,	// (0x00033164) popup_snote_single_text_window_t1

0xb5b4,	// (0x00033177) popup_snote_single_text_window_t2_ParamLimits

0xb5b4,	// (0x00033177) popup_snote_single_text_window_t2

0xb5c7,	// (0x0003318a) popup_snote_single_text_window_t3_ParamLimits

0xb5c7,	// (0x0003318a) popup_snote_single_text_window_t3

0xb600,	// (0x000331c3) popup_snote_single_text_window_t4_ParamLimits

0xb600,	// (0x000331c3) popup_snote_single_text_window_t4

0xb634,	// (0x000331f7) popup_snote_single_text_window_t5_ParamLimits

0xb634,	// (0x000331f7) popup_snote_single_text_window_t5

0x0004,

0xf5ac,	// (0x0003716f) popup_snote_single_text_window_t_ParamLimits

0xf5ac,	// (0x0003716f) popup_snote_single_text_window_t

0xb663,	// (0x00033226) bg_popup_window_pane_cp9_ParamLimits

0xb663,	// (0x00033226) bg_popup_window_pane_cp9

0xb58f,	// (0x00033152) popup_snote_single_graphic_window_g1_ParamLimits

0xb58f,	// (0x00033152) popup_snote_single_graphic_window_g1

0xb671,	// (0x00033234) popup_snote_single_graphic_window_g2_ParamLimits

0xb671,	// (0x00033234) popup_snote_single_graphic_window_g2

0x0001,

0xf5b7,	// (0x0003717a) popup_snote_single_graphic_window_g_ParamLimits

0xf5b7,	// (0x0003717a) popup_snote_single_graphic_window_g

0xb67d,	// (0x00033240) popup_snote_single_graphic_window_t1_ParamLimits

0xb67d,	// (0x00033240) popup_snote_single_graphic_window_t1

0xb690,	// (0x00033253) popup_snote_single_graphic_window_t2_ParamLimits

0xb690,	// (0x00033253) popup_snote_single_graphic_window_t2

0xb6a3,	// (0x00033266) popup_snote_single_graphic_window_t3_ParamLimits

0xb6a3,	// (0x00033266) popup_snote_single_graphic_window_t3

0xb6dc,	// (0x0003329f) popup_snote_single_graphic_window_t4_ParamLimits

0xb6dc,	// (0x0003329f) popup_snote_single_graphic_window_t4

0xb710,	// (0x000332d3) popup_snote_single_graphic_window_t5_ParamLimits

0xb710,	// (0x000332d3) popup_snote_single_graphic_window_t5

0x0004,

0xf5bc,	// (0x0003717f) popup_snote_single_graphic_window_t_ParamLimits

0xf5bc,	// (0x0003717f) popup_snote_single_graphic_window_t

0xd806,	// (0x000353c9) grid_graphic_popup_pane_ParamLimits

0xd806,	// (0x000353c9) grid_graphic_popup_pane

0xd82e,	// (0x000353f1) listscroll_popup_graphic_pane_g1_ParamLimits

0xd82e,	// (0x000353f1) listscroll_popup_graphic_pane_g1

0x9e5e,	// (0x00031a21) listscroll_popup_graphic_pane_g2_ParamLimits

0x9e5e,	// (0x00031a21) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b1,	// (0x00037574) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b1,	// (0x00037574) listscroll_popup_graphic_pane_g

0xd7ab,	// (0x0003536e) scroll_pane_cp5

0x9e22,	// (0x000319e5) cell_graphic_popup_pane_ParamLimits

0x9e22,	// (0x000319e5) cell_graphic_popup_pane

0xd7d1,	// (0x00035394) cell_graphic_popup_pane_g1

0xd7d9,	// (0x0003539c) cell_graphic_popup_pane_g2

0xb563,	// (0x00033126) cell_graphic_popup_pane_g3

0x0002,

0xf9aa,	// (0x0003756d) cell_graphic_popup_pane_g

0xd7e2,	// (0x000353a5) cell_graphic_popup_pane_t2

0xb56c,	// (0x0003312f) grid_highlight_pane_cp3

0xb751,	// (0x00033314) list_gen_pane_ParamLimits

0xb751,	// (0x00033314) list_gen_pane

0xb779,	// (0x0003333c) scroll_pane

0x9ddd,	// (0x000319a0) bg_list_pane_g1_ParamLimits

0x9ddd,	// (0x000319a0) bg_list_pane_g1

0xd761,	// (0x00035324) bg_list_pane_g2_ParamLimits

0xd761,	// (0x00035324) bg_list_pane_g2

0xd774,	// (0x00035337) bg_list_pane_g3_ParamLimits

0xd774,	// (0x00035337) bg_list_pane_g3

0xd786,	// (0x00035349) bg_list_pane_g4_ParamLimits

0xd786,	// (0x00035349) bg_list_pane_g4

0x9df8,	// (0x000319bb) bg_list_pane_g5_ParamLimits

0x9df8,	// (0x000319bb) bg_list_pane_g5

0x0004,

0xf99f,	// (0x00037562) bg_list_pane_g_ParamLimits

0xf99f,	// (0x00037562) bg_list_pane_g

0x9da2,	// (0x00031965) list_double2_graphic_large_graphic_pane_ParamLimits

0x9da2,	// (0x00031965) list_double2_graphic_large_graphic_pane

0x9da2,	// (0x00031965) list_double2_graphic_pane_ParamLimits

0x9da2,	// (0x00031965) list_double2_graphic_pane

0x9da2,	// (0x00031965) list_double2_large_graphic_pane_ParamLimits

0x9da2,	// (0x00031965) list_double2_large_graphic_pane

0x9da2,	// (0x00031965) list_double2_pane_ParamLimits

0x9da2,	// (0x00031965) list_double2_pane

0x9da2,	// (0x00031965) list_double_graphic_heading_pane_ParamLimits

0x9da2,	// (0x00031965) list_double_graphic_heading_pane

0x9da2,	// (0x00031965) list_double_graphic_pane_ParamLimits

0x9da2,	// (0x00031965) list_double_graphic_pane

0x9da2,	// (0x00031965) list_double_heading_pane_ParamLimits

0x9da2,	// (0x00031965) list_double_heading_pane

0x9da2,	// (0x00031965) list_double_large_graphic_pane_ParamLimits

0x9da2,	// (0x00031965) list_double_large_graphic_pane

0x9da2,	// (0x00031965) list_double_number_pane_ParamLimits

0x9da2,	// (0x00031965) list_double_number_pane

0x9da2,	// (0x00031965) list_double_pane_ParamLimits

0x9da2,	// (0x00031965) list_double_pane

0x9da2,	// (0x00031965) list_double_time_pane_ParamLimits

0x9da2,	// (0x00031965) list_double_time_pane

0x9da2,	// (0x00031965) list_setting_number_pane_ParamLimits

0x9da2,	// (0x00031965) list_setting_number_pane

0x9da2,	// (0x00031965) list_setting_pane_ParamLimits

0x9da2,	// (0x00031965) list_setting_pane

0x9db5,	// (0x00031978) list_single_2graphic_pane_ParamLimits

0x9db5,	// (0x00031978) list_single_2graphic_pane

0x9db5,	// (0x00031978) list_single_graphic_heading_pane_ParamLimits

0x9db5,	// (0x00031978) list_single_graphic_heading_pane

0x9db5,	// (0x00031978) list_single_graphic_pane_ParamLimits

0x9db5,	// (0x00031978) list_single_graphic_pane

0x9db5,	// (0x00031978) list_single_heading_pane_ParamLimits

0x9db5,	// (0x00031978) list_single_heading_pane

0x9db5,	// (0x00031978) list_single_large_graphic_pane_ParamLimits

0x9db5,	// (0x00031978) list_single_large_graphic_pane

0x9db5,	// (0x00031978) list_single_number_heading_pane_ParamLimits

0x9db5,	// (0x00031978) list_single_number_heading_pane

0x9db5,	// (0x00031978) list_single_number_pane_ParamLimits

0x9db5,	// (0x00031978) list_single_number_pane

0x9db5,	// (0x00031978) list_single_pane_ParamLimits

0x9db5,	// (0x00031978) list_single_pane

0xb163,	// (0x00032d26) list_highlight_pane_cp1

0x6cde,	// (0x0002e8a1) list_single_pane_g1_ParamLimits

0x6cde,	// (0x0002e8a1) list_single_pane_g1

0x6cea,	// (0x0002e8ad) list_single_pane_g2_ParamLimits

0x6cea,	// (0x0002e8ad) list_single_pane_g2

0x0001,

0xf5ce,	// (0x00037191) list_single_pane_g_ParamLimits

0xf5ce,	// (0x00037191) list_single_pane_g

0x76a6,	// (0x0002f269) list_single_pane_t1_ParamLimits

0x76a6,	// (0x0002f269) list_single_pane_t1

0x6cde,	// (0x0002e8a1) list_single_number_pane_g1_ParamLimits

0x6cde,	// (0x0002e8a1) list_single_number_pane_g1

0x6cea,	// (0x0002e8ad) list_single_number_pane_g2_ParamLimits

0x6cea,	// (0x0002e8ad) list_single_number_pane_g2

0x0001,

0xf5ce,	// (0x00037191) list_single_number_pane_g_ParamLimits

0xf5ce,	// (0x00037191) list_single_number_pane_g

0x73a4,	// (0x0002ef67) list_single_number_pane_t1_ParamLimits

0x73a4,	// (0x0002ef67) list_single_number_pane_t1

0xf313,	// (0x00036ed6) list_single_number_pane_t2_ParamLimits

0xf313,	// (0x00036ed6) list_single_number_pane_t2

0x0001,

0xf960,	// (0x00037523) list_single_number_pane_t_ParamLimits

0xf960,	// (0x00037523) list_single_number_pane_t

0xed6a,	// (0x0003692d) list_single_graphic_pane_g1_ParamLimits

0xed6a,	// (0x0003692d) list_single_graphic_pane_g1

0x6cde,	// (0x0002e8a1) list_single_graphic_pane_g2_ParamLimits

0x6cde,	// (0x0002e8a1) list_single_graphic_pane_g2

0x6cea,	// (0x0002e8ad) list_single_graphic_pane_g3_ParamLimits

0x6cea,	// (0x0002e8ad) list_single_graphic_pane_g3

0x0002,

0xf5c7,	// (0x0003718a) list_single_graphic_pane_g_ParamLimits

0xf5c7,	// (0x0003718a) list_single_graphic_pane_g

0xed76,	// (0x00036939) list_single_graphic_pane_t1_ParamLimits

0xed76,	// (0x00036939) list_single_graphic_pane_t1

0x6cde,	// (0x0002e8a1) list_single_heading_pane_g1_ParamLimits

0x6cde,	// (0x0002e8a1) list_single_heading_pane_g1

0x6cea,	// (0x0002e8ad) list_single_heading_pane_g2_ParamLimits

0x6cea,	// (0x0002e8ad) list_single_heading_pane_g2

0x0001,

0xf5ce,	// (0x00037191) list_single_heading_pane_g_ParamLimits

0xf5ce,	// (0x00037191) list_single_heading_pane_g

0x76c8,	// (0x0002f28b) list_single_heading_pane_t1_ParamLimits

0x76c8,	// (0x0002f28b) list_single_heading_pane_t1

0xed8c,	// (0x0003694f) list_single_heading_pane_t2_ParamLimits

0xed8c,	// (0x0003694f) list_single_heading_pane_t2

0x0001,

0xf5d3,	// (0x00037196) list_single_heading_pane_t_ParamLimits

0xf5d3,	// (0x00037196) list_single_heading_pane_t

0x6cde,	// (0x0002e8a1) list_single_number_heading_pane_g1_ParamLimits

0x6cde,	// (0x0002e8a1) list_single_number_heading_pane_g1

0x6cea,	// (0x0002e8ad) list_single_number_heading_pane_g2_ParamLimits

0x6cea,	// (0x0002e8ad) list_single_number_heading_pane_g2

0x0001,

0xf5ce,	// (0x00037191) list_single_number_heading_pane_g_ParamLimits

0xf5ce,	// (0x00037191) list_single_number_heading_pane_g

0x76c8,	// (0x0002f28b) list_single_number_heading_pane_t1_ParamLimits

0x76c8,	// (0x0002f28b) list_single_number_heading_pane_t1

0xed9e,	// (0x00036961) list_single_number_heading_pane_t2_ParamLimits

0xed9e,	// (0x00036961) list_single_number_heading_pane_t2

0x7680,	// (0x0002f243) list_single_number_heading_pane_t3_ParamLimits

0x7680,	// (0x0002f243) list_single_number_heading_pane_t3

0x0002,

0xf5d8,	// (0x0003719b) list_single_number_heading_pane_t_ParamLimits

0xf5d8,	// (0x0003719b) list_single_number_heading_pane_t

0x7398,	// (0x0002ef5b) list_single_graphic_heading_pane_g1_ParamLimits

0x7398,	// (0x0002ef5b) list_single_graphic_heading_pane_g1

0xedb0,	// (0x00036973) list_single_graphic_heading_pane_g4_ParamLimits

0xedb0,	// (0x00036973) list_single_graphic_heading_pane_g4

0x6cea,	// (0x0002e8ad) list_single_graphic_heading_pane_g5_ParamLimits

0x6cea,	// (0x0002e8ad) list_single_graphic_heading_pane_g5

0x0002,

0xf5df,	// (0x000371a2) list_single_graphic_heading_pane_g_ParamLimits

0xf5df,	// (0x000371a2) list_single_graphic_heading_pane_g

0x76c8,	// (0x0002f28b) list_single_graphic_heading_pane_t1_ParamLimits

0x76c8,	// (0x0002f28b) list_single_graphic_heading_pane_t1

0xedc1,	// (0x00036984) list_single_graphic_heading_pane_t2_ParamLimits

0xedc1,	// (0x00036984) list_single_graphic_heading_pane_t2

0x0001,

0xf5e6,	// (0x000371a9) list_single_graphic_heading_pane_t_ParamLimits

0xf5e6,	// (0x000371a9) list_single_graphic_heading_pane_t

0x76bc,	// (0x0002f27f) list_single_large_graphic_pane_g1_ParamLimits

0x76bc,	// (0x0002f27f) list_single_large_graphic_pane_g1

0x6cde,	// (0x0002e8a1) list_single_large_graphic_pane_g2_ParamLimits

0x6cde,	// (0x0002e8a1) list_single_large_graphic_pane_g2

0x6cea,	// (0x0002e8ad) list_single_large_graphic_pane_g3_ParamLimits

0x6cea,	// (0x0002e8ad) list_single_large_graphic_pane_g3

0x0002,

0xf5eb,	// (0x000371ae) list_single_large_graphic_pane_g_ParamLimits

0xf5eb,	// (0x000371ae) list_single_large_graphic_pane_g

0xcb1c,	// (0x000346df) wait_border_pane_g2_copy1

0xedd3,	// (0x00036996) list_single_large_graphic_pane_g4_cp2

0x76c8,	// (0x0002f28b) list_single_large_graphic_pane_t1_ParamLimits

0x76c8,	// (0x0002f28b) list_single_large_graphic_pane_t1

0xeddb,	// (0x0003699e) list_double_pane_g1_ParamLimits

0xeddb,	// (0x0003699e) list_double_pane_g1

0x6d65,	// (0x0002e928) list_double_pane_g2_ParamLimits

0x6d65,	// (0x0002e928) list_double_pane_g2

0x0001,

0xf5f2,	// (0x000371b5) list_double_pane_g_ParamLimits

0xf5f2,	// (0x000371b5) list_double_pane_g

0x6d71,	// (0x0002e934) list_double_pane_t1_ParamLimits

0x6d71,	// (0x0002e934) list_double_pane_t1

0xede7,	// (0x000369aa) list_double_pane_t2_ParamLimits

0xede7,	// (0x000369aa) list_double_pane_t2

0x0001,

0xf5f7,	// (0x000371ba) list_double_pane_t_ParamLimits

0xf5f7,	// (0x000371ba) list_double_pane_t

0xedf9,	// (0x000369bc) list_double2_pane_g1_ParamLimits

0xedf9,	// (0x000369bc) list_double2_pane_g1

0x6f36,	// (0x0002eaf9) list_double2_pane_g2_ParamLimits

0x6f36,	// (0x0002eaf9) list_double2_pane_g2

0x0001,

0xf5fc,	// (0x000371bf) list_double2_pane_g_ParamLimits

0xf5fc,	// (0x000371bf) list_double2_pane_g

0xee0a,	// (0x000369cd) list_double2_pane_t1_ParamLimits

0xee0a,	// (0x000369cd) list_double2_pane_t1

0xee20,	// (0x000369e3) list_double2_pane_t2_ParamLimits

0xee20,	// (0x000369e3) list_double2_pane_t2

0x0001,

0xf601,	// (0x000371c4) list_double2_pane_t_ParamLimits

0xf601,	// (0x000371c4) list_double2_pane_t

0xeddb,	// (0x0003699e) list_double_number_pane_g1_ParamLimits

0xeddb,	// (0x0003699e) list_double_number_pane_g1

0x6d65,	// (0x0002e928) list_double_number_pane_g2_ParamLimits

0x6d65,	// (0x0002e928) list_double_number_pane_g2

0x0001,

0xf5f2,	// (0x000371b5) list_double_number_pane_g_ParamLimits

0xf5f2,	// (0x000371b5) list_double_number_pane_g

0xee32,	// (0x000369f5) list_double_number_pane_t1_ParamLimits

0xee32,	// (0x000369f5) list_double_number_pane_t1

0x6e3a,	// (0x0002e9fd) list_double_number_pane_t2_ParamLimits

0x6e3a,	// (0x0002e9fd) list_double_number_pane_t2

0xee44,	// (0x00036a07) list_double_number_pane_t3_ParamLimits

0xee44,	// (0x00036a07) list_double_number_pane_t3

0x0002,

0xf606,	// (0x000371c9) list_double_number_pane_t_ParamLimits

0xf606,	// (0x000371c9) list_double_number_pane_t

0x6e2e,	// (0x0002e9f1) list_double_graphic_pane_g1_ParamLimits

0x6e2e,	// (0x0002e9f1) list_double_graphic_pane_g1

0xee56,	// (0x00036a19) list_double_graphic_pane_g2_ParamLimits

0xee56,	// (0x00036a19) list_double_graphic_pane_g2

0xee65,	// (0x00036a28) list_double_graphic_pane_g3_ParamLimits

0xee65,	// (0x00036a28) list_double_graphic_pane_g3

0x0003,

0xf60d,	// (0x000371d0) list_double_graphic_pane_g_ParamLimits

0xf60d,	// (0x000371d0) list_double_graphic_pane_g

0xee7d,	// (0x00036a40) list_double_graphic_pane_t1_ParamLimits

0xee7d,	// (0x00036a40) list_double_graphic_pane_t1

0xee93,	// (0x00036a56) list_double_graphic_pane_t2_ParamLimits

0xee93,	// (0x00036a56) list_double_graphic_pane_t2

0x0001,

0xf616,	// (0x000371d9) list_double_graphic_pane_t_ParamLimits

0xf616,	// (0x000371d9) list_double_graphic_pane_t

0xeea5,	// (0x00036a68) list_double2_graphic_pane_g1_ParamLimits

0xeea5,	// (0x00036a68) list_double2_graphic_pane_g1

0xeddb,	// (0x0003699e) list_double2_graphic_pane_g2_ParamLimits

0xeddb,	// (0x0003699e) list_double2_graphic_pane_g2

0x6d65,	// (0x0002e928) list_double2_graphic_pane_g3_ParamLimits

0x6d65,	// (0x0002e928) list_double2_graphic_pane_g3

0x0002,

0xf61b,	// (0x000371de) list_double2_graphic_pane_g_ParamLimits

0xf61b,	// (0x000371de) list_double2_graphic_pane_g

0xeeb1,	// (0x00036a74) list_double2_graphic_pane_t1_ParamLimits

0xeeb1,	// (0x00036a74) list_double2_graphic_pane_t1

0xeec7,	// (0x00036a8a) list_double2_graphic_pane_t2_ParamLimits

0xeec7,	// (0x00036a8a) list_double2_graphic_pane_t2

0x0001,

0xf622,	// (0x000371e5) list_double2_graphic_pane_t_ParamLimits

0xf622,	// (0x000371e5) list_double2_graphic_pane_t

0xeed9,	// (0x00036a9c) list_double_large_graphic_pane_g1_ParamLimits

0xeed9,	// (0x00036a9c) list_double_large_graphic_pane_g1

0xef04,	// (0x00036ac7) list_double_large_graphic_pane_g2_ParamLimits

0xef04,	// (0x00036ac7) list_double_large_graphic_pane_g2

0x6d65,	// (0x0002e928) list_double_large_graphic_pane_g3_ParamLimits

0x6d65,	// (0x0002e928) list_double_large_graphic_pane_g3

0xef15,	// (0x00036ad8) list_double_large_graphic_pane_g4_ParamLimits

0xef15,	// (0x00036ad8) list_double_large_graphic_pane_g4

0x0004,

0xf627,	// (0x000371ea) list_double_large_graphic_pane_g_ParamLimits

0xf627,	// (0x000371ea) list_double_large_graphic_pane_g

0xef28,	// (0x00036aeb) list_double_large_graphic_pane_t1_ParamLimits

0xef28,	// (0x00036aeb) list_double_large_graphic_pane_t1

0xef41,	// (0x00036b04) list_double_large_graphic_pane_t2_ParamLimits

0xef41,	// (0x00036b04) list_double_large_graphic_pane_t2

0x0001,

0xf632,	// (0x000371f5) list_double_large_graphic_pane_t_ParamLimits

0xf632,	// (0x000371f5) list_double_large_graphic_pane_t

0xef53,	// (0x00036b16) list_double2_large_graphic_pane_g1_ParamLimits

0xef53,	// (0x00036b16) list_double2_large_graphic_pane_g1

0xedf9,	// (0x000369bc) list_double2_large_graphic_pane_g2_ParamLimits

0xedf9,	// (0x000369bc) list_double2_large_graphic_pane_g2

0x6f36,	// (0x0002eaf9) list_double2_large_graphic_pane_g3_ParamLimits

0x6f36,	// (0x0002eaf9) list_double2_large_graphic_pane_g3

0x0002,

0xf637,	// (0x000371fa) list_double2_large_graphic_pane_g_ParamLimits

0xf637,	// (0x000371fa) list_double2_large_graphic_pane_g

0xef5f,	// (0x00036b22) list_double2_large_graphic_pane_t1_ParamLimits

0xef5f,	// (0x00036b22) list_double2_large_graphic_pane_t1

0xef75,	// (0x00036b38) list_double2_large_graphic_pane_t2_ParamLimits

0xef75,	// (0x00036b38) list_double2_large_graphic_pane_t2

0x0001,

0xf63e,	// (0x00037201) list_double2_large_graphic_pane_t_ParamLimits

0xf63e,	// (0x00037201) list_double2_large_graphic_pane_t

0xef87,	// (0x00036b4a) list_double_heading_pane_g1_ParamLimits

0xef87,	// (0x00036b4a) list_double_heading_pane_g1

0xef98,	// (0x00036b5b) list_double_heading_pane_g2_ParamLimits

0xef98,	// (0x00036b5b) list_double_heading_pane_g2

0x0001,

0xf643,	// (0x00037206) list_double_heading_pane_g_ParamLimits

0xf643,	// (0x00037206) list_double_heading_pane_g

0xefa4,	// (0x00036b67) list_double_heading_pane_t1_ParamLimits

0xefa4,	// (0x00036b67) list_double_heading_pane_t1

0xee20,	// (0x000369e3) list_double_heading_pane_t2_ParamLimits

0xee20,	// (0x000369e3) list_double_heading_pane_t2

0x0001,

0xf648,	// (0x0003720b) list_double_heading_pane_t_ParamLimits

0xf648,	// (0x0003720b) list_double_heading_pane_t

0x6e2e,	// (0x0002e9f1) list_double_graphic_heading_pane_g1_ParamLimits

0x6e2e,	// (0x0002e9f1) list_double_graphic_heading_pane_g1

0xef87,	// (0x00036b4a) list_double_graphic_heading_pane_g2_ParamLimits

0xef87,	// (0x00036b4a) list_double_graphic_heading_pane_g2

0xef98,	// (0x00036b5b) list_double_graphic_heading_pane_g3_ParamLimits

0xef98,	// (0x00036b5b) list_double_graphic_heading_pane_g3

0x0002,

0xf64d,	// (0x00037210) list_double_graphic_heading_pane_g_ParamLimits

0xf64d,	// (0x00037210) list_double_graphic_heading_pane_g

0xefba,	// (0x00036b7d) list_double_graphic_heading_pane_t1_ParamLimits

0xefba,	// (0x00036b7d) list_double_graphic_heading_pane_t1

0xeec7,	// (0x00036a8a) list_double_graphic_heading_pane_t2_ParamLimits

0xeec7,	// (0x00036a8a) list_double_graphic_heading_pane_t2

0x0001,

0xf654,	// (0x00037217) list_double_graphic_heading_pane_t_ParamLimits

0xf654,	// (0x00037217) list_double_graphic_heading_pane_t

0xef04,	// (0x00036ac7) list_double_time_pane_g1_ParamLimits

0xef04,	// (0x00036ac7) list_double_time_pane_g1

0x6d65,	// (0x0002e928) list_double_time_pane_g2_ParamLimits

0x6d65,	// (0x0002e928) list_double_time_pane_g2

0x0001,

0xf659,	// (0x0003721c) list_double_time_pane_g_ParamLimits

0xf659,	// (0x0003721c) list_double_time_pane_g

0x6efd,	// (0x0002eac0) list_double_time_pane_t1_ParamLimits

0x6efd,	// (0x0002eac0) list_double_time_pane_t1

0xefd0,	// (0x00036b93) list_double_time_pane_t2_ParamLimits

0xefd0,	// (0x00036b93) list_double_time_pane_t2

0xefe2,	// (0x00036ba5) list_double_time_pane_t3_ParamLimits

0xefe2,	// (0x00036ba5) list_double_time_pane_t3

0xeff4,	// (0x00036bb7) list_double_time_pane_t4_ParamLimits

0xeff4,	// (0x00036bb7) list_double_time_pane_t4

0x0003,

0xf65e,	// (0x00037221) list_double_time_pane_t_ParamLimits

0xf65e,	// (0x00037221) list_double_time_pane_t

0x6fba,	// (0x0002eb7d) list_setting_pane_g1_ParamLimits

0x6fba,	// (0x0002eb7d) list_setting_pane_g1

0x6f36,	// (0x0002eaf9) list_setting_pane_g2_ParamLimits

0x6f36,	// (0x0002eaf9) list_setting_pane_g2

0x0001,

0xf667,	// (0x0003722a) list_setting_pane_g_ParamLimits

0xf667,	// (0x0003722a) list_setting_pane_g

0xf006,	// (0x00036bc9) list_setting_pane_t1_ParamLimits

0xf006,	// (0x00036bc9) list_setting_pane_t1

0xf020,	// (0x00036be3) list_setting_pane_t2_ParamLimits

0xf020,	// (0x00036be3) list_setting_pane_t2

0x0002,

0xf66c,	// (0x0003722f) list_setting_pane_t_ParamLimits

0xf66c,	// (0x0003722f) list_setting_pane_t

0xf05d,	// (0x00036c20) set_value_pane_cp_ParamLimits

0xf05d,	// (0x00036c20) set_value_pane_cp

0x7026,	// (0x0002ebe9) list_setting_number_pane_g1_ParamLimits

0x7026,	// (0x0002ebe9) list_setting_number_pane_g1

0x7032,	// (0x0002ebf5) list_setting_number_pane_g2_ParamLimits

0x7032,	// (0x0002ebf5) list_setting_number_pane_g2

0x0001,

0xf673,	// (0x00037236) list_setting_number_pane_g_ParamLimits

0xf673,	// (0x00037236) list_setting_number_pane_g

0xf069,	// (0x00036c2c) list_setting_number_pane_t1_ParamLimits

0xf069,	// (0x00036c2c) list_setting_number_pane_t1

0xf082,	// (0x00036c45) list_setting_number_pane_t2_ParamLimits

0xf082,	// (0x00036c45) list_setting_number_pane_t2

0xf09c,	// (0x00036c5f) list_setting_number_pane_t3_ParamLimits

0xf09c,	// (0x00036c5f) list_setting_number_pane_t3

0x0003,

0xf678,	// (0x0003723b) list_setting_number_pane_t_ParamLimits

0xf678,	// (0x0003723b) list_setting_number_pane_t

0xf05d,	// (0x00036c20) set_value_pane_ParamLimits

0xf05d,	// (0x00036c20) set_value_pane

0xb7ad,	// (0x00033370) bg_set_opt_pane_ParamLimits

0xb7ad,	// (0x00033370) bg_set_opt_pane

0x70ac,	// (0x0002ec6f) set_value_pane_t1

0xb7ce,	// (0x00033391) slider_set_pane_cp3

0xb7d7,	// (0x0003339a) volume_small_pane_cp

0xb7e0,	// (0x000333a3) list_form_gen_pane

0xb7e9,	// (0x000333ac) scroll_pane_cp8

0xf0df,	// (0x00036ca2) form_field_data_pane_ParamLimits

0xf0df,	// (0x00036ca2) form_field_data_pane

0xf0f6,	// (0x00036cb9) form_field_data_wide_pane_ParamLimits

0xf0f6,	// (0x00036cb9) form_field_data_wide_pane

0xf116,	// (0x00036cd9) form_field_popup_pane_ParamLimits

0xf116,	// (0x00036cd9) form_field_popup_pane

0xf12e,	// (0x00036cf1) form_field_popup_wide_pane_ParamLimits

0xf12e,	// (0x00036cf1) form_field_popup_wide_pane

0x713e,	// (0x0002ed01) form_field_slider_pane_ParamLimits

0x713e,	// (0x0002ed01) form_field_slider_pane

0x7151,	// (0x0002ed14) form_field_slider_wide_pane_ParamLimits

0x7151,	// (0x0002ed14) form_field_slider_wide_pane

0xb7fa,	// (0x000333bd) data_form_pane

0xf155,	// (0x00036d18) form_field_data_pane_t1

0xb806,	// (0x000333c9) input_focus_pane

0x7188,	// (0x0002ed4b) data_form_wide_pane

0x71a5,	// (0x0002ed68) form_field_data_wide_pane_t1

0xb581,	// (0x00033144) input_focus_pane_cp6

0xf16f,	// (0x00036d32) form_field_popup_pane_t1

0xb806,	// (0x000333c9) input_focus_pane_cp7

0xb834,	// (0x000333f7) list_form_pane

0x71e9,	// (0x0002edac) form_field_popup_wide_pane_t1

0xb806,	// (0x000333c9) input_focus_pane_cp8

0xb840,	// (0x00033403) list_form_wide_pane

0xf191,	// (0x00036d54) form_field_slider_pane_t1_ParamLimits

0xf191,	// (0x00036d54) form_field_slider_pane_t1

0xf1a9,	// (0x00036d6c) form_field_slider_pane_t2_ParamLimits

0xf1a9,	// (0x00036d6c) form_field_slider_pane_t2

0x0001,

0xf688,	// (0x0003724b) form_field_slider_pane_t_ParamLimits

0xf688,	// (0x0003724b) form_field_slider_pane_t

0xb1b1,	// (0x00032d74) input_focus_pane_cp9_ParamLimits

0xb1b1,	// (0x00032d74) input_focus_pane_cp9

0xf1be,	// (0x00036d81) slider_cont_pane_ParamLimits

0xf1be,	// (0x00036d81) slider_cont_pane

0xb84f,	// (0x00033412) form_field_slider_wide_pane_t1_ParamLimits

0xb84f,	// (0x00033412) form_field_slider_wide_pane_t1

0x7240,	// (0x0002ee03) form_field_slider_wide_pane_t2_ParamLimits

0x7240,	// (0x0002ee03) form_field_slider_wide_pane_t2

0x0001,

0xf68d,	// (0x00037250) form_field_slider_wide_pane_t_ParamLimits

0xf68d,	// (0x00037250) form_field_slider_wide_pane_t

0xb1b1,	// (0x00032d74) input_focus_pane_cp10_ParamLimits

0xb1b1,	// (0x00032d74) input_focus_pane_cp10

0xf1d2,	// (0x00036d95) slider_cont_pane_cp1_ParamLimits

0xf1d2,	// (0x00036d95) slider_cont_pane_cp1

0xf1e6,	// (0x00036da9) slider_form_pane_cp

0xb861,	// (0x00033424) input_focus_pane_g1

0xb869,	// (0x0003342c) input_focus_pane_g2

0xb871,	// (0x00033434) input_focus_pane_g3

0xb879,	// (0x0003343c) input_focus_pane_g4

0xb881,	// (0x00033444) input_focus_pane_g5

0xb889,	// (0x0003344c) input_focus_pane_g6

0xb891,	// (0x00033454) input_focus_pane_g7

0xb899,	// (0x0003345c) input_focus_pane_g8

0xb8a1,	// (0x00033464) input_focus_pane_g9

0xb159,	// (0x00032d1c) input_focus_pane_g10

0x0009,

0xf692,	// (0x00037255) input_focus_pane_g

0xcb25,	// (0x000346e8) wait_border_pane_g3_copy1

0xf1ee,	// (0x00036db1) data_form_pane_t1

0xb159,	// (0x00032d1c) wait_anim_pane_g1_copy1

0xf325,	// (0x00036ee8) data_form_wide_pane_t1

0xf208,	// (0x00036dcb) list_form_graphic_pane_cp_ParamLimits

0xf208,	// (0x00036dcb) list_form_graphic_pane_cp

0xd6fb,	// (0x000352be) slider_form_pane_g1

0xd704,	// (0x000352c7) slider_form_pane_g2

0x0006,

0xf990,	// (0x00037553) slider_form_pane_g

0xf21b,	// (0x00036dde) list_form_graphic_pane_ParamLimits

0xf21b,	// (0x00036dde) list_form_graphic_pane

0x72a0,	// (0x0002ee63) list_form_graphic_pane_g1

0x72a8,	// (0x0002ee6b) list_form_graphic_pane_t1_ParamLimits

0x72a8,	// (0x0002ee6b) list_form_graphic_pane_t1

0xb1bf,	// (0x00032d82) list_highlight_pane_cp5_ParamLimits

0xb1bf,	// (0x00032d82) list_highlight_pane_cp5

0xf22d,	// (0x00036df0) find_pane_g1

0xb8a9,	// (0x0003346c) input_find_pane

0xf236,	// (0x00036df9) input_find_pane_g1_ParamLimits

0xf236,	// (0x00036df9) input_find_pane_g1

0xf242,	// (0x00036e05) input_find_pane_t1_ParamLimits

0xf242,	// (0x00036e05) input_find_pane_t1

0xf257,	// (0x00036e1a) input_find_pane_t2_ParamLimits

0xf257,	// (0x00036e1a) input_find_pane_t2

0x0001,

0xf6a7,	// (0x0003726a) input_find_pane_t_ParamLimits

0xf6a7,	// (0x0003726a) input_find_pane_t

0xb8b2,	// (0x00033475) input_focus_pane_cp5_ParamLimits

0xb8b2,	// (0x00033475) input_focus_pane_cp5

0xb8c0,	// (0x00033483) bg_popup_window_pane_cp2_ParamLimits

0xb8c0,	// (0x00033483) bg_popup_window_pane_cp2

0xb8cd,	// (0x00033490) listscroll_menu_pane_ParamLimits

0xb8cd,	// (0x00033490) listscroll_menu_pane

0x8817,	// (0x000303da) popup_submenu_window_ParamLimits

0x8817,	// (0x000303da) popup_submenu_window

0xb8d9,	// (0x0003349c) find_popup_pane_g1

0xb8e1,	// (0x000334a4) input_popup_find_pane_cp

0xb8b2,	// (0x00033475) input_focus_pane_cp4_ParamLimits

0xb8b2,	// (0x00033475) input_focus_pane_cp4

0xb8eb,	// (0x000334ae) input_popup_find_pane_t1_ParamLimits

0xb8eb,	// (0x000334ae) input_popup_find_pane_t1

0xb163,	// (0x00032d26) bg_popup_sub_pane_cp

0xb919,	// (0x000334dc) listscroll_popup_sub_pane

0xb921,	// (0x000334e4) list_submenu_pane_ParamLimits

0xb921,	// (0x000334e4) list_submenu_pane

0xb932,	// (0x000334f5) scroll_pane_cp4

0xb93a,	// (0x000334fd) list_single_popup_submenu_pane_ParamLimits

0xb93a,	// (0x000334fd) list_single_popup_submenu_pane

0xb94e,	// (0x00033511) list_single_popup_submenu_pane_g1

0xb956,	// (0x00033519) list_single_popup_submenu_pane_t1_ParamLimits

0xb956,	// (0x00033519) list_single_popup_submenu_pane_t1

0xb1b1,	// (0x00032d74) bg_active_tab_pane_cp1_ParamLimits

0xb1b1,	// (0x00032d74) bg_active_tab_pane_cp1

0x884d,	// (0x00030410) tabs_2_active_pane_g1

0x8855,	// (0x00030418) tabs_2_active_pane_t1

0xb1b1,	// (0x00032d74) bg_passive_tab_pane_cp1_ParamLimits

0xb1b1,	// (0x00032d74) bg_passive_tab_pane_cp1

0x884d,	// (0x00030410) tabs_2_passive_pane_g1

0x8855,	// (0x00030418) tabs_2_passive_pane_t1

0xb1bf,	// (0x00032d82) bg_active_tab_pane_cp4

0x8867,	// (0x0003042a) tabs_2_long_active_pane_t1

0xb96b,	// (0x0003352e) bg_passive_tab_pane_cp4

0x4dea,	// (0x0002c9ad) list_single_midp_graphic_pane_g4_ParamLimits

0xb1bf,	// (0x00032d82) bg_active_tab_pane_cp5

0x887a,	// (0x0003043d) tabs_3_long_active_pane_t1

0xb96b,	// (0x0003352e) bg_passive_tab_pane_cp5

0x4dea,	// (0x0002c9ad) list_single_midp_graphic_pane_g4

0xb1bf,	// (0x00032d82) bg_popup_window_pane_cp13_ParamLimits

0xb1bf,	// (0x00032d82) bg_popup_window_pane_cp13

0xb980,	// (0x00033543) listscroll_popup_fast_pane_ParamLimits

0xb980,	// (0x00033543) listscroll_popup_fast_pane

0xb98c,	// (0x0003354f) grid_popup_fast_pane_ParamLimits

0xb98c,	// (0x0003354f) grid_popup_fast_pane

0xb99e,	// (0x00033561) scroll_pane_cp9_ParamLimits

0xb99e,	// (0x00033561) scroll_pane_cp9

0xea61,	// (0x00036624) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xea61,	// (0x00036624) list_single_graphic_hl_pane_t1_cp2

0xb9c2,	// (0x00033585) input_focus_pane_cp20_ParamLimits

0xb9c2,	// (0x00033585) input_focus_pane_cp20

0xb9d0,	// (0x00033593) query_popup_data_pane_t1_ParamLimits

0xb9d0,	// (0x00033593) query_popup_data_pane_t1

0xb9e3,	// (0x000335a6) query_popup_data_pane_t2_ParamLimits

0xb9e3,	// (0x000335a6) query_popup_data_pane_t2

0xba29,	// (0x000335ec) query_popup_data_pane_t3_ParamLimits

0xba29,	// (0x000335ec) query_popup_data_pane_t3

0xba6a,	// (0x0003362d) query_popup_data_pane_t4_ParamLimits

0xba6a,	// (0x0003362d) query_popup_data_pane_t4

0xbaa6,	// (0x00033669) query_popup_data_pane_t5_ParamLimits

0xbaa6,	// (0x00033669) query_popup_data_pane_t5

0x0004,

0xf6ac,	// (0x0003726f) query_popup_data_pane_t_ParamLimits

0xf6ac,	// (0x0003726f) query_popup_data_pane_t

0xb861,	// (0x00033424) bg_set_opt_pane_g1

0xb869,	// (0x0003342c) bg_set_opt_pane_g2

0xb871,	// (0x00033434) bg_set_opt_pane_g3

0xb879,	// (0x0003343c) bg_set_opt_pane_g4

0xb881,	// (0x00033444) bg_set_opt_pane_g5

0xb889,	// (0x0003344c) bg_set_opt_pane_g6

0xb891,	// (0x00033454) bg_set_opt_pane_g7

0xb899,	// (0x0003345c) bg_set_opt_pane_g8

0xb8a1,	// (0x00033464) bg_set_opt_pane_g9

0x0008,

0xf6b7,	// (0x0003727a) bg_set_opt_pane_g

0x44a2,	// (0x0002c065) control_top_pane_stacon_ParamLimits

0x44a2,	// (0x0002c065) control_top_pane_stacon

0x44f5,	// (0x0002c0b8) signal_pane_stacon_ParamLimits

0x44f5,	// (0x0002c0b8) signal_pane_stacon

0xbf0d,	// (0x00033ad0) stacon_top_pane_g1_ParamLimits

0xbf0d,	// (0x00033ad0) stacon_top_pane_g1

0x451a,	// (0x0002c0dd) title_pane_stacon_ParamLimits

0x451a,	// (0x0002c0dd) title_pane_stacon

0x4544,	// (0x0002c107) uni_indicator_pane_stacon_ParamLimits

0x4544,	// (0x0002c107) uni_indicator_pane_stacon

0x4559,	// (0x0002c11c) battery_pane_stacon_ParamLimits

0x4559,	// (0x0002c11c) battery_pane_stacon

0x459d,	// (0x0002c160) control_bottom_pane_stacon_ParamLimits

0x459d,	// (0x0002c160) control_bottom_pane_stacon

0x45c0,	// (0x0002c183) navi_pane_stacon_ParamLimits

0x45c0,	// (0x0002c183) navi_pane_stacon

0xbf2f,	// (0x00033af2) stacon_bottom_pane_g1_ParamLimits

0xbf2f,	// (0x00033af2) stacon_bottom_pane_g1

0x420c,	// (0x0002bdcf) aid_levels_signal_lsc_ParamLimits

0x420c,	// (0x0002bdcf) aid_levels_signal_lsc

0x4223,	// (0x0002bde6) signal_pane_stacon_g1_ParamLimits

0x4223,	// (0x0002bde6) signal_pane_stacon_g1

0x4237,	// (0x0002bdfa) signal_pane_stacon_g2_ParamLimits

0x4237,	// (0x0002bdfa) signal_pane_stacon_g2

0x0001,

0xf6ca,	// (0x0003728d) signal_pane_stacon_g_ParamLimits

0xf6ca,	// (0x0003728d) signal_pane_stacon_g

0x426c,	// (0x0002be2f) title_pane_stacon_t1_ParamLimits

0x426c,	// (0x0002be2f) title_pane_stacon_t1

0xbaea,	// (0x000336ad) uni_indicator_pane_stacon_g1

0xbaf4,	// (0x000336b7) uni_indicator_pane_stacon_g2

0xbafe,	// (0x000336c1) uni_indicator_pane_stacon_g3

0xbb08,	// (0x000336cb) uni_indicator_pane_stacon_g4

0x0003,

0xf6d6,	// (0x00037299) uni_indicator_pane_stacon_g

0x4291,	// (0x0002be54) control_top_pane_stacon_g1

0x4299,	// (0x0002be5c) control_top_pane_stacon_t1_ParamLimits

0x4299,	// (0x0002be5c) control_top_pane_stacon_t1

0x42d0,	// (0x0002be93) aid_levels_battery_lsc_ParamLimits

0x42d0,	// (0x0002be93) aid_levels_battery_lsc

0x42e8,	// (0x0002beab) battery_pane_stacon_g1_ParamLimits

0x42e8,	// (0x0002beab) battery_pane_stacon_g1

0x42fb,	// (0x0002bebe) battery_pane_stacon_g2_ParamLimits

0x42fb,	// (0x0002bebe) battery_pane_stacon_g2

0x0001,

0xf6df,	// (0x000372a2) battery_pane_stacon_g_ParamLimits

0xf6df,	// (0x000372a2) battery_pane_stacon_g

0x4339,	// (0x0002befc) navi_icon_pane_stacon

0x434d,	// (0x0002bf10) navi_navi_pane_stacon

0x4339,	// (0x0002befc) navi_text_pane_stacon

0x4291,	// (0x0002be54) control_bottom_pane_stacon_g1

0x4361,	// (0x0002bf24) control_bottom_pane_stacon_t1_ParamLimits

0x4361,	// (0x0002bf24) control_bottom_pane_stacon_t1

0x888c,	// (0x0003044f) grid_app_pane_ParamLimits

0x888c,	// (0x0003044f) grid_app_pane

0x88c2,	// (0x00030485) scroll_pane_cp15_ParamLimits

0x88c2,	// (0x00030485) scroll_pane_cp15

0x88db,	// (0x0003049e) cell_app_pane_ParamLimits

0x88db,	// (0x0003049e) cell_app_pane

0x8922,	// (0x000304e5) cell_app_pane_g1_ParamLimits

0x8922,	// (0x000304e5) cell_app_pane_g1

0xbb2c,	// (0x000336ef) cell_app_pane_g2_ParamLimits

0xbb2c,	// (0x000336ef) cell_app_pane_g2

0x0001,

0xf6e4,	// (0x000372a7) cell_app_pane_g_ParamLimits

0xf6e4,	// (0x000372a7) cell_app_pane_g

0x8942,	// (0x00030505) cell_app_pane_t1_ParamLimits

0x8942,	// (0x00030505) cell_app_pane_t1

0xbb38,	// (0x000336fb) grid_highlight_pane_ParamLimits

0xbb38,	// (0x000336fb) grid_highlight_pane

0xb861,	// (0x00033424) cell_highlight_pane_g1

0xb869,	// (0x0003342c) cell_highlight_pane_g2

0xb871,	// (0x00033434) cell_highlight_pane_g3

0xb879,	// (0x0003343c) cell_highlight_pane_g4

0xb881,	// (0x00033444) cell_highlight_pane_g5

0xb889,	// (0x0003344c) cell_highlight_pane_g6

0xb891,	// (0x00033454) cell_highlight_pane_g7

0xb899,	// (0x0003345c) cell_highlight_pane_g8

0xb8a1,	// (0x00033464) cell_highlight_pane_g9

0xb159,	// (0x00032d1c) cell_highlight_pane_g10

0x0009,

0xf692,	// (0x00037255) cell_highlight_pane_g

0xbb49,	// (0x0003370c) bg_scroll_pane

0x43ab,	// (0x0002bf6e) scroll_handle_pane

0xbb90,	// (0x00033753) scroll_bg_pane_g1

0xbba5,	// (0x00033768) scroll_bg_pane_g2

0xbbbd,	// (0x00033780) scroll_bg_pane_g3

0x0002,

0xf6e9,	// (0x000372ac) scroll_bg_pane_g

0xbbd2,	// (0x00033795) scroll_handle_focus_pane_ParamLimits

0xbbd2,	// (0x00033795) scroll_handle_focus_pane

0xbb90,	// (0x00033753) scroll_handle_pane_g1

0xbbdf,	// (0x000337a2) scroll_handle_pane_g2

0xbbbd,	// (0x00033780) scroll_handle_pane_g3

0x0002,

0xf6f0,	// (0x000372b3) scroll_handle_pane_g

0xb8b2,	// (0x00033475) bg_popup_sub_pane_cp21_ParamLimits

0xb8b2,	// (0x00033475) bg_popup_sub_pane_cp21

0xbbf3,	// (0x000337b6) popup_fep_japan_predictive_window_t1_ParamLimits

0xbbf3,	// (0x000337b6) popup_fep_japan_predictive_window_t1

0xbc0d,	// (0x000337d0) popup_fep_japan_predictive_window_t2_ParamLimits

0xbc0d,	// (0x000337d0) popup_fep_japan_predictive_window_t2

0xbc40,	// (0x00033803) popup_fep_japan_predictive_window_t3_ParamLimits

0xbc40,	// (0x00033803) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f7,	// (0x000372ba) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f7,	// (0x000372ba) popup_fep_japan_predictive_window_t

0xb163,	// (0x00032d26) bg_popup_sub_pane_cp23

0xbc77,	// (0x0003383a) listscroll_japin_cand_pane

0xbc7f,	// (0x00033842) popup_fep_japan_candidate_window_t1

0xbc8d,	// (0x00033850) candidate_pane_ParamLimits

0xbc8d,	// (0x00033850) candidate_pane

0xbc9f,	// (0x00033862) scroll_pane_cp30

0xbca7,	// (0x0003386a) list_single_popup_jap_candidate_pane_ParamLimits

0xbca7,	// (0x0003386a) list_single_popup_jap_candidate_pane

0xb163,	// (0x00032d26) list_highlight_pane_cp30

0xbcbb,	// (0x0003387e) list_single_popup_jap_candidate_pane_t1

0xbcca,	// (0x0003388d) level_1_signal

0xbcd7,	// (0x0003389a) level_2_signal

0xbce4,	// (0x000338a7) level_3_signal

0xbcf1,	// (0x000338b4) level_4_signal

0xbcfe,	// (0x000338c1) level_5_signal

0xbd0b,	// (0x000338ce) level_6_signal

0xbd18,	// (0x000338db) level_7_signal

0xbcca,	// (0x0003388d) level_1_battery

0xbcd7,	// (0x0003389a) level_2_battery

0xbce4,	// (0x000338a7) level_3_battery

0xbcf1,	// (0x000338b4) level_4_battery

0xbcfe,	// (0x000338c1) level_5_battery

0xbd0b,	// (0x000338ce) level_6_battery

0xbd18,	// (0x000338db) level_7_battery

0xbd3d,	// (0x00033900) list_menu_pane_ParamLimits

0xbd3d,	// (0x00033900) list_menu_pane

0xbd53,	// (0x00033916) scroll_pane_cp25_ParamLimits

0xbd53,	// (0x00033916) scroll_pane_cp25

0xbd6c,	// (0x0003392f) list_double2_graphic_pane_cp2_ParamLimits

0xbd6c,	// (0x0003392f) list_double2_graphic_pane_cp2

0xbd6c,	// (0x0003392f) list_double2_large_graphic_pane_cp2_ParamLimits

0xbd6c,	// (0x0003392f) list_double2_large_graphic_pane_cp2

0xbd6c,	// (0x0003392f) list_double2_pane_cp2_ParamLimits

0xbd6c,	// (0x0003392f) list_double2_pane_cp2

0xbd6c,	// (0x0003392f) list_double_graphic_pane_cp2_ParamLimits

0xbd6c,	// (0x0003392f) list_double_graphic_pane_cp2

0xbd6c,	// (0x0003392f) list_double_large_graphic_pane_cp2_ParamLimits

0xbd6c,	// (0x0003392f) list_double_large_graphic_pane_cp2

0xbd6c,	// (0x0003392f) list_double_number_pane_cp2_ParamLimits

0xbd6c,	// (0x0003392f) list_double_number_pane_cp2

0xbd6c,	// (0x0003392f) list_double_pane_cp2_ParamLimits

0xbd6c,	// (0x0003392f) list_double_pane_cp2

0x896a,	// (0x0003052d) list_single_2graphic_pane_cp2_ParamLimits

0x896a,	// (0x0003052d) list_single_2graphic_pane_cp2

0x896a,	// (0x0003052d) list_single_graphic_heading_pane_cp2_ParamLimits

0x896a,	// (0x0003052d) list_single_graphic_heading_pane_cp2

0x896a,	// (0x0003052d) list_single_graphic_pane_cp2_ParamLimits

0x896a,	// (0x0003052d) list_single_graphic_pane_cp2

0x896a,	// (0x0003052d) list_single_heading_pane_cp2_ParamLimits

0x896a,	// (0x0003052d) list_single_heading_pane_cp2

0xbd7c,	// (0x0003393f) list_single_large_graphic_pane_cp2_ParamLimits

0xbd7c,	// (0x0003393f) list_single_large_graphic_pane_cp2

0x896a,	// (0x0003052d) list_single_number_heading_pane_cp2_ParamLimits

0x896a,	// (0x0003052d) list_single_number_heading_pane_cp2

0x896a,	// (0x0003052d) list_single_number_pane_cp2_ParamLimits

0x896a,	// (0x0003052d) list_single_number_pane_cp2

0x896a,	// (0x0003052d) list_single_pane_cp2_ParamLimits

0x896a,	// (0x0003052d) list_single_pane_cp2

0xbd96,	// (0x00033959) bg_popup_sub_pane_cp22

0x445a,	// (0x0002c01d) popup_side_volume_key_window_g1

0x447e,	// (0x0002c041) popup_side_volume_key_window_t1

0x449a,	// (0x0002c05d) volume_small_pane_cp1

0xb1b1,	// (0x00032d74) bg_popup_sub_pane_cp24_ParamLimits

0xb1b1,	// (0x00032d74) bg_popup_sub_pane_cp24

0xbdac,	// (0x0003396f) fep_china_uni_candidate_pane_ParamLimits

0xbdac,	// (0x0003396f) fep_china_uni_candidate_pane

0xbdc0,	// (0x00033983) fep_china_uni_entry_pane

0xbdd0,	// (0x00033993) popup_fep_china_uni_window_g1

0xbdec,	// (0x000339af) fep_china_uni_entry_pane_g1

0xbdf4,	// (0x000339b7) fep_china_uni_entry_pane_g2

0x0001,

0xf728,	// (0x000372eb) fep_china_uni_entry_pane_g

0xbdfc,	// (0x000339bf) fep_entry_item_pane

0xbe06,	// (0x000339c9) fep_candidate_item_pane

0xbe0e,	// (0x000339d1) fep_china_uni_candidate_pane_g1

0xbe16,	// (0x000339d9) fep_china_uni_candidate_pane_g2

0xbe1e,	// (0x000339e1) fep_china_uni_candidate_pane_g3

0xbe26,	// (0x000339e9) fep_china_uni_candidate_pane_g4

0x0003,

0xf72d,	// (0x000372f0) fep_china_uni_candidate_pane_g

0xb159,	// (0x00032d1c) fep_entry_item_pane_g1

0xbe2e,	// (0x000339f1) fep_entry_item_pane_t1_ParamLimits

0xbe2e,	// (0x000339f1) fep_entry_item_pane_t1

0xbe44,	// (0x00033a07) fep_candidate_item_pane_t1_ParamLimits

0xbe44,	// (0x00033a07) fep_candidate_item_pane_t1

0xbe59,	// (0x00033a1c) fep_candidate_item_pane_t2_ParamLimits

0xbe59,	// (0x00033a1c) fep_candidate_item_pane_t2

0x0001,

0xf736,	// (0x000372f9) fep_candidate_item_pane_t_ParamLimits

0xf736,	// (0x000372f9) fep_candidate_item_pane_t

0xb1bf,	// (0x00032d82) list_highlight_pane_cp31_ParamLimits

0xb1bf,	// (0x00032d82) list_highlight_pane_cp31

0xbe6b,	// (0x00033a2e) level_1_signal_lsc

0xbe74,	// (0x00033a37) level_2_signal_lsc

0xbe7d,	// (0x00033a40) level_3_signal_lsc

0xbe86,	// (0x00033a49) level_4_signal_lsc

0xbe8f,	// (0x00033a52) level_5_signal_lsc

0xbe98,	// (0x00033a5b) level_6_signal_lsc

0xbea1,	// (0x00033a64) level_7_signal_lsc

0xbea1,	// (0x00033a64) level_1_battery_lsc

0xbeaa,	// (0x00033a6d) level_2_battery_lsc

0xbeb3,	// (0x00033a76) level_3_battery_lsc

0xbebc,	// (0x00033a7f) level_4_battery_lsc

0xbec5,	// (0x00033a88) level_5_battery_lsc

0xbece,	// (0x00033a91) level_6_battery_lsc

0xbe6b,	// (0x00033a2e) level_7_battery_lsc

0xbed7,	// (0x00033a9a) scroll_handle_focus_pane_g1

0xbee0,	// (0x00033aa3) scroll_handle_focus_pane_g2

0xbee9,	// (0x00033aac) scroll_handle_focus_pane_g3

0x0002,

0xf73b,	// (0x000372fe) scroll_handle_focus_pane_g

0xf26c,	// (0x00036e2f) list_single_2graphic_pane_g1_ParamLimits

0xf26c,	// (0x00036e2f) list_single_2graphic_pane_g1

0xedb0,	// (0x00036973) list_single_2graphic_pane_g2_ParamLimits

0xedb0,	// (0x00036973) list_single_2graphic_pane_g2

0x6cea,	// (0x0002e8ad) list_single_2graphic_pane_g3_ParamLimits

0x6cea,	// (0x0002e8ad) list_single_2graphic_pane_g3

0xf278,	// (0x00036e3b) list_single_2graphic_pane_g4_ParamLimits

0xf278,	// (0x00036e3b) list_single_2graphic_pane_g4

0x0003,

0xf742,	// (0x00037305) list_single_2graphic_pane_g_ParamLimits

0xf742,	// (0x00037305) list_single_2graphic_pane_g

0xf284,	// (0x00036e47) list_single_2graphic_pane_t1_ParamLimits

0xf284,	// (0x00036e47) list_single_2graphic_pane_t1

0xf2b2,	// (0x00036e75) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xf2b2,	// (0x00036e75) list_double2_graphic_large_graphic_pane_g1

0xedf9,	// (0x000369bc) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xedf9,	// (0x000369bc) list_double2_graphic_large_graphic_pane_g2

0x6f36,	// (0x0002eaf9) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x6f36,	// (0x0002eaf9) list_double2_graphic_large_graphic_pane_g3

0xf2c4,	// (0x00036e87) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xf2c4,	// (0x00036e87) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74b,	// (0x0003730e) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74b,	// (0x0003730e) list_double2_graphic_large_graphic_pane_g

0xf2d0,	// (0x00036e93) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xf2d0,	// (0x00036e93) list_double2_graphic_large_graphic_pane_t1

0xf2e6,	// (0x00036ea9) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xf2e6,	// (0x00036ea9) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf754,	// (0x00037317) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf754,	// (0x00037317) list_double2_graphic_large_graphic_pane_t

0xbfbb,	// (0x00033b7e) popup_fast_swap_window_ParamLimits

0xbfbb,	// (0x00033b7e) popup_fast_swap_window

0xbfd7,	// (0x00033b9a) popup_side_volume_key_window

0xbff1,	// (0x00033bb4) stacon_top_pane

0xbffb,	// (0x00033bbe) status_pane_ParamLimits

0xbffb,	// (0x00033bbe) status_pane

0xbff1,	// (0x00033bb4) status_small_pane

0xb163,	// (0x00032d26) control_pane

0xb163,	// (0x00032d26) stacon_bottom_pane

0xb7e9,	// (0x000333ac) scroll_pane_cp121

0xb7e0,	// (0x000333a3) set_content_pane

0xbef2,	// (0x00033ab5) bg_active_tab_pane_g1_cp1

0xbefb,	// (0x00033abe) bg_active_tab_pane_g2_cp1

0xbf04,	// (0x00033ac7) bg_active_tab_pane_g3_cp1

0xbef2,	// (0x00033ab5) bg_passive_tab_pane_g1_cp1

0xbefb,	// (0x00033abe) bg_passive_tab_pane_g2_cp1

0xbf04,	// (0x00033ac7) bg_passive_tab_pane_g3_cp1

0x89f8,	// (0x000305bb) bg_active_tab_pane_g1_cp2

0xbefb,	// (0x00033abe) bg_active_tab_pane_g2_cp2

0x8a01,	// (0x000305c4) bg_active_tab_pane_g3_cp2

0x89f8,	// (0x000305bb) bg_passive_tab_pane_g1_cp2

0xbefb,	// (0x00033abe) bg_passive_tab_pane_g2_cp2

0x8a01,	// (0x000305c4) bg_passive_tab_pane_g3_cp2

0x8a0a,	// (0x000305cd) bg_active_tab_pane_g1_cp3

0xbefb,	// (0x00033abe) bg_active_tab_pane_g2_cp3

0x8a13,	// (0x000305d6) bg_active_tab_pane_g3_cp3

0x8a0a,	// (0x000305cd) bg_passive_tab_pane_g1_cp3

0xbefb,	// (0x00033abe) bg_passive_tab_pane_g2_cp3

0x8a13,	// (0x000305d6) bg_passive_tab_pane_g3_cp3

0x8a1c,	// (0x000305df) bg_active_tab_pane_g1_cp4

0xbefb,	// (0x00033abe) bg_active_tab_pane_g2_cp4

0x8a25,	// (0x000305e8) bg_active_tab_pane_g3_cp4

0x8a1c,	// (0x000305df) bg_passive_tab_pane_g1_cp4

0xbefb,	// (0x00033abe) bg_passive_tab_pane_g2_cp4

0x8a25,	// (0x000305e8) bg_passive_tab_pane_g3_cp4

0xbf4b,	// (0x00033b0e) bg_active_tab_pane_g1_cp5

0xbefb,	// (0x00033abe) bg_active_tab_pane_g2_cp5

0xbf54,	// (0x00033b17) bg_active_tab_pane_g3_cp5

0xbf4b,	// (0x00033b0e) bg_passive_tab_pane_g1_cp5

0xbefb,	// (0x00033abe) bg_passive_tab_pane_g2_cp5

0xbf54,	// (0x00033b17) bg_passive_tab_pane_g3_cp5

0xd798,	// (0x0003535b) list_set_graphic_pane_ParamLimits

0xd798,	// (0x0003535b) list_set_graphic_pane

0xb163,	// (0x00032d26) bg_set_opt_pane_cp4

0xbf5d,	// (0x00033b20) list_set_graphic_pane_g1_ParamLimits

0xbf5d,	// (0x00033b20) list_set_graphic_pane_g1

0xbf69,	// (0x00033b2c) list_set_graphic_pane_g2_ParamLimits

0xbf69,	// (0x00033b2c) list_set_graphic_pane_g2

0x0001,

0xf759,	// (0x0003731c) list_set_graphic_pane_g_ParamLimits

0xf759,	// (0x0003731c) list_set_graphic_pane_g

0x0009,

0xfadc,	// (0x0003769f) volume_small_pane_cp_g

0x8a2e,	// (0x000305f1) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x8a2e,	// (0x000305f1) list_double2_large_graphic_pane_g1_cp2

0x8a3c,	// (0x000305ff) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x8a3c,	// (0x000305ff) list_double2_large_graphic_pane_g2_cp2

0xbf8b,	// (0x00033b4e) list_double2_large_graphic_pane_g3_cp2

0xbf93,	// (0x00033b56) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xbf93,	// (0x00033b56) list_double2_large_graphic_pane_t1_cp2

0xbfa9,	// (0x00033b6c) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xbfa9,	// (0x00033b6c) list_double2_large_graphic_pane_t2_cp2

0x9b85,	// (0x00031748) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x9b85,	// (0x00031748) list_double_large_graphic_pane_g1_cp2

0x9b98,	// (0x0003175b) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x9b98,	// (0x0003175b) list_double_large_graphic_pane_g2_cp2

0xc0dc,	// (0x00033c9f) list_double_large_graphic_pane_g3_cp2

0xd4b9,	// (0x0003507c) list_double_large_graphic_pane_g4_cp

0xd4c1,	// (0x00035084) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xd4c1,	// (0x00035084) list_double_large_graphic_pane_t1_cp2

0xd4d8,	// (0x0003509b) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xd4d8,	// (0x0003509b) list_double_large_graphic_pane_t2_cp2

0x8a4d,	// (0x00030610) list_double2_graphic_pane_g1_cp2_ParamLimits

0x8a4d,	// (0x00030610) list_double2_graphic_pane_g1_cp2

0x8a5b,	// (0x0003061e) list_double2_graphic_pane_g2_cp2_ParamLimits

0x8a5b,	// (0x0003061e) list_double2_graphic_pane_g2_cp2

0x8a6c,	// (0x0003062f) list_double2_graphic_pane_g3_cp2

0xc009,	// (0x00033bcc) list_double2_graphic_pane_t1_cp2_ParamLimits

0xc009,	// (0x00033bcc) list_double2_graphic_pane_t1_cp2

0xc01f,	// (0x00033be2) list_double2_graphic_pane_t2_cp2_ParamLimits

0xc01f,	// (0x00033be2) list_double2_graphic_pane_t2_cp2

0xc031,	// (0x00033bf4) list_single_number_heading_pane_g1_cp2_ParamLimits

0xc031,	// (0x00033bf4) list_single_number_heading_pane_g1_cp2

0xc03d,	// (0x00033c00) list_single_number_heading_pane_g2_cp2

0xc045,	// (0x00033c08) list_single_number_heading_pane_t1_cp2_ParamLimits

0xc045,	// (0x00033c08) list_single_number_heading_pane_t1_cp2

0x8a76,	// (0x00030639) list_single_number_heading_pane_t2_cp2_ParamLimits

0x8a76,	// (0x00030639) list_single_number_heading_pane_t2_cp2

0xc05b,	// (0x00033c1e) list_single_number_heading_pane_t3_cp2_ParamLimits

0xc05b,	// (0x00033c1e) list_single_number_heading_pane_t3_cp2

0xc031,	// (0x00033bf4) list_single_heading_pane_g1_cp2_ParamLimits

0xc031,	// (0x00033bf4) list_single_heading_pane_g1_cp2

0xc03d,	// (0x00033c00) list_single_heading_pane_g2_cp2

0xc045,	// (0x00033c08) list_single_heading_pane_t1_cp2_ParamLimits

0xc045,	// (0x00033c08) list_single_heading_pane_t1_cp2

0x9b71,	// (0x00031734) list_single_heading_pane_t2_cp2_ParamLimits

0x9b71,	// (0x00031734) list_single_heading_pane_t2_cp2

0xd22f,	// (0x00034df2) list_double_graphic_pane_g1_cp2_ParamLimits

0xd22f,	// (0x00034df2) list_double_graphic_pane_g1_cp2

0xd23b,	// (0x00034dfe) list_double_graphic_pane_g2_cp2_ParamLimits

0xd23b,	// (0x00034dfe) list_double_graphic_pane_g2_cp2

0xd24a,	// (0x00034e0d) list_double_graphic_pane_g3_cp2

0xd252,	// (0x00034e15) list_double_graphic_pane_t1_cp2_ParamLimits

0xd252,	// (0x00034e15) list_double_graphic_pane_t1_cp2

0xd268,	// (0x00034e2b) list_double_graphic_pane_t2_cp2_ParamLimits

0xd268,	// (0x00034e2b) list_double_graphic_pane_t2_cp2

0xc0d0,	// (0x00033c93) list_double_number_pane_g1_cp2_ParamLimits

0xc0d0,	// (0x00033c93) list_double_number_pane_g1_cp2

0xc0dc,	// (0x00033c9f) list_double_number_pane_g2_cp2

0x9b4b,	// (0x0003170e) list_double_number_pane_t1_cp2_ParamLimits

0x9b4b,	// (0x0003170e) list_double_number_pane_t1_cp2

0xd207,	// (0x00034dca) list_double_number_pane_t2_cp2_ParamLimits

0xd207,	// (0x00034dca) list_double_number_pane_t2_cp2

0xd21d,	// (0x00034de0) list_double_number_pane_t3_cp2_ParamLimits

0xd21d,	// (0x00034de0) list_double_number_pane_t3_cp2

0x9a88,	// (0x0003164b) list_single_graphic_pane_g1_cp2_ParamLimits

0x9a88,	// (0x0003164b) list_single_graphic_pane_g1_cp2

0xc11c,	// (0x00033cdf) list_single_graphic_pane_g2_cp2_ParamLimits

0xc11c,	// (0x00033cdf) list_single_graphic_pane_g2_cp2

0xc128,	// (0x00033ceb) list_single_graphic_pane_g3_cp2

0xd176,	// (0x00034d39) list_single_graphic_pane_t1_cp2_ParamLimits

0xd176,	// (0x00034d39) list_single_graphic_pane_t1_cp2

0xc11c,	// (0x00033cdf) list_single_number_pane_g1_cp2_ParamLimits

0xc11c,	// (0x00033cdf) list_single_number_pane_g1_cp2

0xc128,	// (0x00033ceb) list_single_number_pane_g2_cp2

0xd176,	// (0x00034d39) list_single_number_pane_t1_cp2_ParamLimits

0xd176,	// (0x00034d39) list_single_number_pane_t1_cp2

0x9a74,	// (0x00031637) list_single_number_pane_t2_cp2_ParamLimits

0x9a74,	// (0x00031637) list_single_number_pane_t2_cp2

0x8a3c,	// (0x000305ff) list_double2_pane_g1_cp2_ParamLimits

0x8a3c,	// (0x000305ff) list_double2_pane_g1_cp2

0xbf8b,	// (0x00033b4e) list_double2_pane_g2_cp2

0xc0a8,	// (0x00033c6b) list_double2_pane_t1_cp2_ParamLimits

0xc0a8,	// (0x00033c6b) list_double2_pane_t1_cp2

0xc0be,	// (0x00033c81) list_double2_pane_t2_cp2_ParamLimits

0xc0be,	// (0x00033c81) list_double2_pane_t2_cp2

0xc0d0,	// (0x00033c93) list_double_pane_g1_cp2_ParamLimits

0xc0d0,	// (0x00033c93) list_double_pane_g1_cp2

0xc0dc,	// (0x00033c9f) list_double_pane_g2_cp2

0xc0e4,	// (0x00033ca7) list_double_pane_t1_cp2_ParamLimits

0xc0e4,	// (0x00033ca7) list_double_pane_t1_cp2

0xc0fa,	// (0x00033cbd) list_double_pane_t2_cp2_ParamLimits

0xc0fa,	// (0x00033cbd) list_double_pane_t2_cp2

0xc10c,	// (0x00033ccf) list_single_pane_cp2_g3

0xc11c,	// (0x00033cdf) list_single_pane_g1_cp2_ParamLimits

0xc11c,	// (0x00033cdf) list_single_pane_g1_cp2

0xc128,	// (0x00033ceb) list_single_pane_g2_cp2

0xc130,	// (0x00033cf3) list_single_pane_t1_cp2_ParamLimits

0xc130,	// (0x00033cf3) list_single_pane_t1_cp2

0x8aa2,	// (0x00030665) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x8aa2,	// (0x00030665) list_single_large_graphic_pane_g1_cp2

0xc148,	// (0x00033d0b) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xc148,	// (0x00033d0b) list_single_large_graphic_pane_g2_cp2

0xc154,	// (0x00033d17) list_single_large_graphic_pane_g3_cp2

0xc15c,	// (0x00033d1f) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xc15c,	// (0x00033d1f) list_single_large_graphic_pane_g4_cp1

0xc176,	// (0x00033d39) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xc176,	// (0x00033d39) list_single_large_graphic_pane_t1_cp2

0xd154,	// (0x00034d17) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xd154,	// (0x00034d17) list_single_graphic_heading_pane_g1_cp2

0x9913,	// (0x000314d6) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x9913,	// (0x000314d6) list_single_graphic_heading_pane_g4_cp2

0xc128,	// (0x00033ceb) list_single_graphic_heading_pane_g5_cp2

0xd160,	// (0x00034d23) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xd160,	// (0x00034d23) list_single_graphic_heading_pane_t1_cp2

0x9924,	// (0x000314e7) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x9924,	// (0x000314e7) list_single_graphic_heading_pane_t2_cp2

0xd126,	// (0x00034ce9) list_single_2graphic_pane_g1_cp2_ParamLimits

0xd126,	// (0x00034ce9) list_single_2graphic_pane_g1_cp2

0x9913,	// (0x000314d6) list_single_2graphic_pane_g2_cp2_ParamLimits

0x9913,	// (0x000314d6) list_single_2graphic_pane_g2_cp2

0xc128,	// (0x00033ceb) list_single_2graphic_pane_g3_cp2

0xd132,	// (0x00034cf5) list_single_2graphic_pane_g4_cp2_ParamLimits

0xd132,	// (0x00034cf5) list_single_2graphic_pane_g4_cp2

0xd13e,	// (0x00034d01) list_single_2graphic_pane_t1_cp2_ParamLimits

0xd13e,	// (0x00034d01) list_single_2graphic_pane_t1_cp2

0xb159,	// (0x00032d1c) list_highlight_pane_g10_cp1

0xcd1c,	// (0x000348df) list_highlight_pane_g1_cp1

0xcd24,	// (0x000348e7) list_highlight_pane_g2_cp1

0xcd2c,	// (0x000348ef) list_highlight_pane_g3_cp1

0xcd34,	// (0x000348f7) list_highlight_pane_g4_cp1

0xcd3c,	// (0x000348ff) list_highlight_pane_g5_cp1

0xcd44,	// (0x00034907) list_highlight_pane_g6_cp1

0xcd4c,	// (0x0003490f) list_highlight_pane_g7_cp1

0xcd54,	// (0x00034917) list_highlight_pane_g8_cp1

0xcd5c,	// (0x0003491f) list_highlight_pane_g9_cp1

0x98d5,	// (0x00031498) form_field_slider_pane_t3

0x98e5,	// (0x000314a8) form_field_slider_pane_t4

0xcc50,	// (0x00034813) slider_form_pane_ParamLimits

0xcc50,	// (0x00034813) slider_form_pane

0xb163,	// (0x00032d26) control_abbreviations

0xb163,	// (0x00032d26) control_conventions

0xb163,	// (0x00032d26) control_definitions

0xb163,	// (0x00032d26) format_table_attribute

0xd30d,	// (0x00034ed0) bg_popup_preview_window_pane_g9

0xb163,	// (0x00032d26) format_table_data2

0xb163,	// (0x00032d26) format_table_data3

0xb163,	// (0x00032d26) format_table_data_example

0x0008,

0xb163,	// (0x00032d26) intro_purpose

0xf8f0,	// (0x000374b3) bg_popup_preview_window_pane_g

0xb163,	// (0x00032d26) texts_category

0xb163,	// (0x00032d26) texts_graphics

0xc18c,	// (0x00033d4f) text_digital

0xc19b,	// (0x00033d5e) text_primary

0xc1aa,	// (0x00033d6d) text_primary_small

0xc1b9,	// (0x00033d7c) text_secondary

0xc1c8,	// (0x00033d8b) text_title

0xd7b7,	// (0x0003537a) bg_passive_tab_pane_g1_cp3_srt

0xbefb,	// (0x00033abe) bg_passive_tab_pane_g2_cp3_srt

0xd7c0,	// (0x00035383) bg_passive_tab_pane_g3_cp3_srt

0xb1b1,	// (0x00032d74) bg_active_tab_pane_cp3_srt_ParamLimits

0xb1b1,	// (0x00032d74) bg_active_tab_pane_cp3_srt

0xd7c9,	// (0x0003538c) tabs_4_active_pane_srt_g1

0x9e0c,	// (0x000319cf) tabs_4_active_pane_srt_t1_ParamLimits

0x9e0c,	// (0x000319cf) tabs_4_active_pane_srt_t1

0xd7b7,	// (0x0003537a) bg_active_tab_pane_g1_cp3_copy1

0xbefb,	// (0x00033abe) bg_active_tab_pane_g2_cp3_copy1

0xd7c0,	// (0x00035383) bg_active_tab_pane_g3_cp3_copy1

0xb1bf,	// (0x00032d82) tabs_2_long_active_pane_srt_ParamLimits

0xb1bf,	// (0x00032d82) tabs_2_long_active_pane_srt

0xb1bf,	// (0x00032d82) tabs_2_long_passive_pane_srt_ParamLimits

0xb1bf,	// (0x00032d82) tabs_2_long_passive_pane_srt

0xb96b,	// (0x0003352e) bg_passive_tab_pane_cp4_srt_ParamLimits

0xb96b,	// (0x0003352e) bg_passive_tab_pane_cp4_srt

0xd6b4,	// (0x00035277) bg_passive_tab_pane_g1_cp4_srt

0xbefb,	// (0x00033abe) bg_passive_tab_pane_g2_cp4_srt

0xd6bd,	// (0x00035280) bg_passive_tab_pane_g3_cp4_srt

0xb1bf,	// (0x00032d82) bg_active_tab_pane_cp4_srt_ParamLimits

0xb1bf,	// (0x00032d82) bg_active_tab_pane_cp4_srt

0x9c39,	// (0x000317fc) tabs_2_long_active_pane_srt_t1_ParamLimits

0x9c39,	// (0x000317fc) tabs_2_long_active_pane_srt_t1

0xd6b4,	// (0x00035277) bg_active_tab_pane_g1_cp4_srt

0xbefb,	// (0x00033abe) bg_active_tab_pane_g2_cp4_srt

0xd6bd,	// (0x00035280) bg_active_tab_pane_g3_cp4_srt

0xb1b1,	// (0x00032d74) tabs_3_long_active_pane_srt_ParamLimits

0xb1b1,	// (0x00032d74) tabs_3_long_active_pane_srt

0xb1b1,	// (0x00032d74) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xb1b1,	// (0x00032d74) tabs_3_long_passive_pane_cp_srt

0xb1b1,	// (0x00032d74) tabs_3_long_passive_pane_srt_ParamLimits

0xb1b1,	// (0x00032d74) tabs_3_long_passive_pane_srt

0xb96b,	// (0x0003352e) bg_passive_tab_pane_cp5_srt_ParamLimits

0xb96b,	// (0x0003352e) bg_passive_tab_pane_cp5_srt

0xbf4b,	// (0x00033b0e) bg_passive_tab_pane_g1_cp5_srt

0xbefb,	// (0x00033abe) bg_passive_tab_pane_g2_cp5_srt

0xbf54,	// (0x00033b17) bg_passive_tab_pane_g3_cp5_srt

0xb1bf,	// (0x00032d82) bg_active_tab_pane_cp5_srt_ParamLimits

0xb1bf,	// (0x00032d82) bg_active_tab_pane_cp5_srt

0x9c23,	// (0x000317e6) tabs_3_long_active_pane_srt_t1_ParamLimits

0x9c23,	// (0x000317e6) tabs_3_long_active_pane_srt_t1

0xbf4b,	// (0x00033b0e) bg_active_tab_pane_g1_cp5_srt

0xbefb,	// (0x00033abe) bg_active_tab_pane_g2_cp5_srt

0xbf54,	// (0x00033b17) bg_active_tab_pane_g3_cp5_srt

0xd6a6,	// (0x00035269) navi_text_pane_srt_t1

0xd69e,	// (0x00035261) navi_icon_pane_srt_g1

0xc2d8,	// (0x00033e9b) midp_editing_number_pane_srt

0xc1d7,	// (0x00033d9a) midp_ticker_pane_srt

0xc2e0,	// (0x00033ea3) midp_ticker_pane_srt_g1

0xc2e8,	// (0x00033eab) midp_ticker_pane_srt_g2

0x0001,

0xf778,	// (0x0003733b) midp_ticker_pane_srt_g

0xc2f0,	// (0x00033eb3) midp_ticker_pane_srt_t1

0xd68f,	// (0x00035252) midp_editing_number_pane_t1_copy1

0xb96b,	// (0x0003352e) listscroll_midp_pane

0xb96b,	// (0x0003352e) midp_form_pane

0xc1df,	// (0x00033da2) midp_info_popup_window_ParamLimits

0xc1df,	// (0x00033da2) midp_info_popup_window

0xb8b2,	// (0x00033475) bg_popup_sub_pane_cp50_ParamLimits

0xb8b2,	// (0x00033475) bg_popup_sub_pane_cp50

0xc96d,	// (0x00034530) listscroll_midp_info_pane_ParamLimits

0xc96d,	// (0x00034530) listscroll_midp_info_pane

0xc955,	// (0x00034518) listscroll_form_midp_pane_ParamLimits

0xc955,	// (0x00034518) listscroll_form_midp_pane

0xc961,	// (0x00034524) scroll_bar_cp050

0x98c9,	// (0x0003148c) list_midp_pane

0xe0c0,	// (0x00035c83) signal_pane_g2_cp

0xc887,	// (0x0003444a) listscroll_midp_info_pane_t1_ParamLimits

0xc887,	// (0x0003444a) listscroll_midp_info_pane_t1

0xc89f,	// (0x00034462) listscroll_midp_info_pane_t2_ParamLimits

0xc89f,	// (0x00034462) listscroll_midp_info_pane_t2

0xc8dd,	// (0x000344a0) listscroll_midp_info_pane_t3_ParamLimits

0xc8dd,	// (0x000344a0) listscroll_midp_info_pane_t3

0xc917,	// (0x000344da) listscroll_midp_info_pane_t4_ParamLimits

0xc917,	// (0x000344da) listscroll_midp_info_pane_t4

0x0003,

0xf82b,	// (0x000373ee) listscroll_midp_info_pane_t_ParamLimits

0xf82b,	// (0x000373ee) listscroll_midp_info_pane_t

0xb932,	// (0x000334f5) scroll_pane_cp21

0xc829,	// (0x000343ec) form_midp_field_choice_group_pane

0xc832,	// (0x000343f5) form_midp_field_text_pane

0xc86d,	// (0x00034430) form_midp_field_time_pane

0xc875,	// (0x00034438) form_midp_gauge_slider_pane

0xc87e,	// (0x00034441) form_midp_gauge_wait_pane

0xb163,	// (0x00032d26) form_midp_image_pane

0xf2f8,	// (0x00036ebb) list_single_midp_pane_ParamLimits

0xf2f8,	// (0x00036ebb) list_single_midp_pane

0x98a6,	// (0x00031469) form_midp_field_text_pane_t1

0xc67f,	// (0x00034242) input_focus_pane_cp050

0xc818,	// (0x000343db) list_midp_form_text_pane

0xc7e7,	// (0x000343aa) form_midp_field_choice_group_pane_t1

0xc7f5,	// (0x000343b8) input_focus_pane_cp051

0xc809,	// (0x000343cc) list_midp_choice_pane

0xb163,	// (0x00032d26) status_idle_pane

0xc7cb,	// (0x0003438e) form_midp_field_time_pane_t1

0xb159,	// (0x00032d1c) wait_anim_pane_g2_copy1

0xc7d9,	// (0x0003439c) form_midp_field_time_pane_t2

0x0001,

0xc24a,	// (0x00033e0d) aid_navinavi_width_2_pane

0xf826,	// (0x000373e9) form_midp_field_time_pane_t

0xb163,	// (0x00032d26) input_focus_pane_cp052

0xb163,	// (0x00032d26) bg_input_focus_pane_cp040

0xc7a7,	// (0x0003436a) form_midp_gauge_slider_pane_t1

0xc7b5,	// (0x00034378) form_midp_gauge_slider_pane_t2

0x9886,	// (0x00031449) form_midp_gauge_slider_pane_t3

0x9896,	// (0x00031459) form_midp_gauge_slider_pane_t4

0x0003,

0xf81d,	// (0x000373e0) form_midp_gauge_slider_pane_t

0xc7c3,	// (0x00034386) form_midp_slider_pane

0xb1bf,	// (0x00032d82) bg_input_focus_pane_cp041_ParamLimits

0xb1bf,	// (0x00032d82) bg_input_focus_pane_cp041

0xc774,	// (0x00034337) form_midp_gauge_wait_pane_t1_ParamLimits

0xc774,	// (0x00034337) form_midp_gauge_wait_pane_t1

0xc786,	// (0x00034349) form_midp_gauge_wait_pane_t2_ParamLimits

0xc786,	// (0x00034349) form_midp_gauge_wait_pane_t2

0x0001,

0xf818,	// (0x000373db) form_midp_gauge_wait_pane_t_ParamLimits

0xf818,	// (0x000373db) form_midp_gauge_wait_pane_t

0xc798,	// (0x0003435b) form_midp_wait_pane_ParamLimits

0xc798,	// (0x0003435b) form_midp_wait_pane

0xc73e,	// (0x00034301) form_midp_image_pane_g1

0xc747,	// (0x0003430a) form_midp_image_pane_t1

0xc756,	// (0x00034319) form_midp_image_pane_t2

0xc765,	// (0x00034328) form_midp_image_pane_t3

0x0002,

0xf811,	// (0x000373d4) form_midp_image_pane_t

0xc735,	// (0x000342f8) list_single_midp_pane_g1

0x7454,	// (0x0002f017) list_single_midp_pane_t1

0x9870,	// (0x00031433) list_midp_form_item_pane_ParamLimits

0x9870,	// (0x00031433) list_midp_form_item_pane

0xc1f2,	// (0x00033db5) list_midp_form_item_pane_t1

0xc201,	// (0x00033dc4) midp_ticker_pane_g1

0xc20d,	// (0x00033dd0) midp_ticker_pane_g2

0x0001,

0xf75e,	// (0x00037321) midp_ticker_pane_g

0xc219,	// (0x00033ddc) midp_ticker_pane_t1

0xd73f,	// (0x00035302) midp_editing_number_pane_t1

0xd71d,	// (0x000352e0) midp_editing_number_pane

0xd72c,	// (0x000352ef) midp_ticker_pane

0xd67f,	// (0x00035242) ai_message_heading_pane

0xb163,	// (0x00032d26) bg_popup_window_pane_cp14

0xd687,	// (0x0003524a) listscroll_ai_message_pane

0xd609,	// (0x000351cc) ai_message_heading_pane_g1_ParamLimits

0xd609,	// (0x000351cc) ai_message_heading_pane_g1

0xd615,	// (0x000351d8) ai_message_heading_pane_g2_ParamLimits

0xd615,	// (0x000351d8) ai_message_heading_pane_g2

0xd621,	// (0x000351e4) ai_message_heading_pane_g3_ParamLimits

0xd621,	// (0x000351e4) ai_message_heading_pane_g3

0xd62d,	// (0x000351f0) ai_message_heading_pane_g4_ParamLimits

0xd62d,	// (0x000351f0) ai_message_heading_pane_g4

0x0003,

0xf952,	// (0x00037515) ai_message_heading_pane_g_ParamLimits

0xf952,	// (0x00037515) ai_message_heading_pane_g

0xd639,	// (0x000351fc) ai_message_heading_pane_t1_ParamLimits

0xd639,	// (0x000351fc) ai_message_heading_pane_t1

0xd653,	// (0x00035216) ai_message_heading_pane_t2_ParamLimits

0xd653,	// (0x00035216) ai_message_heading_pane_t2

0x0001,

0xf95b,	// (0x0003751e) ai_message_heading_pane_t_ParamLimits

0xf95b,	// (0x0003751e) ai_message_heading_pane_t

0xd665,	// (0x00035228) bg_popup_heading_pane_cp1_ParamLimits

0xd665,	// (0x00035228) bg_popup_heading_pane_cp1

0xd5f7,	// (0x000351ba) list_ai_message_pane_ParamLimits

0xd5f7,	// (0x000351ba) list_ai_message_pane

0xb932,	// (0x000334f5) scroll_pane_cp10

0xd593,	// (0x00035156) list_ai_message_pane_g1

0xd59b,	// (0x0003515e) list_ai_message_pane_g2

0x0001,

0xf92f,	// (0x000374f2) list_ai_message_pane_g

0xd5a3,	// (0x00035166) list_ai_message_pane_t1_ParamLimits

0xd5a3,	// (0x00035166) list_ai_message_pane_t1

0xd5b8,	// (0x0003517b) list_ai_message_pane_t2_ParamLimits

0xd5b8,	// (0x0003517b) list_ai_message_pane_t2

0xd5cd,	// (0x00035190) list_ai_message_pane_t3_ParamLimits

0xd5cd,	// (0x00035190) list_ai_message_pane_t3

0xd5e2,	// (0x000351a5) list_ai_message_pane_t4_ParamLimits

0xd5e2,	// (0x000351a5) list_ai_message_pane_t4

0x0003,

0xf934,	// (0x000374f7) list_ai_message_pane_t_ParamLimits

0xf934,	// (0x000374f7) list_ai_message_pane_t

0x9c01,	// (0x000317c4) cell_ai_soft_ind_pane_ParamLimits

0x9c01,	// (0x000317c4) cell_ai_soft_ind_pane

0xc22b,	// (0x00033dee) cell_ai_soft_ind_pane_g1_ParamLimits

0xc22b,	// (0x00033dee) cell_ai_soft_ind_pane_g1

0xb163,	// (0x00032d26) grid_highlight_cp1

0xc238,	// (0x00033dfb) text_secondary_cp56_ParamLimits

0xc238,	// (0x00033dfb) text_secondary_cp56

0xd568,	// (0x0003512b) example_general_pane_ParamLimits

0xd568,	// (0x0003512b) example_general_pane

0xd574,	// (0x00035137) example_parent_pane_g1_ParamLimits

0xd574,	// (0x00035137) example_parent_pane_g1

0xd580,	// (0x00035143) example_parent_pane_t1_ParamLimits

0xd580,	// (0x00035143) example_parent_pane_t1

0x90c3,	// (0x00030c86) popup_preview_text_window_ParamLimits

0x90c3,	// (0x00030c86) popup_preview_text_window

0xc114,	// (0x00033cd7) list_single_pane_cp2_g4

0xb38e,	// (0x00032f51) bg_popup_preview_window_pane_ParamLimits

0xb38e,	// (0x00032f51) bg_popup_preview_window_pane

0xd315,	// (0x00034ed8) popup_preview_text_window_t1_ParamLimits

0xd315,	// (0x00034ed8) popup_preview_text_window_t1

0xd333,	// (0x00034ef6) popup_preview_text_window_t2_ParamLimits

0xd333,	// (0x00034ef6) popup_preview_text_window_t2

0xd37c,	// (0x00034f3f) popup_preview_text_window_t3_ParamLimits

0xd37c,	// (0x00034f3f) popup_preview_text_window_t3

0xd3c1,	// (0x00034f84) popup_preview_text_window_t4_ParamLimits

0xd3c1,	// (0x00034f84) popup_preview_text_window_t4

0x0004,

0xf903,	// (0x000374c6) popup_preview_text_window_t_ParamLimits

0xf903,	// (0x000374c6) popup_preview_text_window_t

0xd43f,	// (0x00035002) scroll_pane_cp11

0xc60b,	// (0x000341ce) bg_popup_preview_window_pane_g1

0xd2d5,	// (0x00034e98) bg_popup_preview_window_pane_g2

0xd2dd,	// (0x00034ea0) bg_popup_preview_window_pane_g3

0xd2e5,	// (0x00034ea8) bg_popup_preview_window_pane_g4

0xd2ed,	// (0x00034eb0) bg_popup_preview_window_pane_g5

0xd2f5,	// (0x00034eb8) bg_popup_preview_window_pane_g6

0xd2fd,	// (0x00034ec0) bg_popup_preview_window_pane_g7

0xd305,	// (0x00034ec8) bg_popup_preview_window_pane_g8

0x3da6,	// (0x0002b969) aid_popup_width_pane

0x903f,	// (0x00030c02) popup_midp_note_alarm_window_ParamLimits

0x903f,	// (0x00030c02) popup_midp_note_alarm_window

0xb7fa,	// (0x000333bd) data_form_pane_ParamLimits

0xf14b,	// (0x00036d0e) form_field_data_pane_g1

0xf155,	// (0x00036d18) form_field_data_pane_t1_ParamLimits

0xb806,	// (0x000333c9) input_focus_pane_ParamLimits

0x7188,	// (0x0002ed4b) data_form_wide_pane_ParamLimits

0x7199,	// (0x0002ed5c) form_field_data_wide_pane_g1

0x71a5,	// (0x0002ed68) form_field_data_wide_pane_t1_ParamLimits

0xb581,	// (0x00033144) input_focus_pane_cp6_ParamLimits

0x883f,	// (0x00030402) input_popup_find_pane_g1_ParamLimits

0x883f,	// (0x00030402) input_popup_find_pane_g1

0x430c,	// (0x0002becf) aid_navi_side_left_pane

0x4321,	// (0x0002bee4) aid_navi_side_right_pane

0xcdf9,	// (0x000349bc) bg_popup_window_pane_cp30_ParamLimits

0xcdf9,	// (0x000349bc) bg_popup_window_pane_cp30

0xce73,	// (0x00034a36) popup_midp_note_alarm_window_g1_ParamLimits

0xce73,	// (0x00034a36) popup_midp_note_alarm_window_g1

0xcea3,	// (0x00034a66) popup_midp_note_alarm_window_t1_ParamLimits

0xcea3,	// (0x00034a66) popup_midp_note_alarm_window_t1

0xcf44,	// (0x00034b07) popup_midp_note_alarm_window_t2_ParamLimits

0xcf44,	// (0x00034b07) popup_midp_note_alarm_window_t2

0xcff2,	// (0x00034bb5) popup_midp_note_alarm_window_t3_ParamLimits

0xcff2,	// (0x00034bb5) popup_midp_note_alarm_window_t3

0xd024,	// (0x00034be7) popup_midp_note_alarm_window_t4_ParamLimits

0xd024,	// (0x00034be7) popup_midp_note_alarm_window_t4

0xd04a,	// (0x00034c0d) popup_midp_note_alarm_window_t5_ParamLimits

0xd04a,	// (0x00034c0d) popup_midp_note_alarm_window_t5

0x000a,

0xf8a0,	// (0x00037463) popup_midp_note_alarm_window_t_ParamLimits

0xf8a0,	// (0x00037463) popup_midp_note_alarm_window_t

0xd0f6,	// (0x00034cb9) wait_bar_pane_cp1_ParamLimits

0xd0f6,	// (0x00034cb9) wait_bar_pane_cp1

0xb163,	// (0x00032d26) wait_anim_pane_copy1

0xb163,	// (0x00032d26) wait_border_pane_copy1

0xcb11,	// (0x000346d4) wait_border_pane_g1_copy1

0x71bf,	// (0x0002ed82) form_field_popup_pane_g1

0xf16f,	// (0x00036d32) form_field_popup_pane_t1_ParamLimits

0xb806,	// (0x000333c9) input_focus_pane_cp7_ParamLimits

0xb834,	// (0x000333f7) list_form_pane_ParamLimits

0x71e1,	// (0x0002eda4) form_field_popup_wide_pane_g1

0x71e9,	// (0x0002edac) form_field_popup_wide_pane_t1_ParamLimits

0xb806,	// (0x000333c9) input_focus_pane_cp8_ParamLimits

0xb840,	// (0x00033403) list_form_wide_pane_ParamLimits

0xd7f0,	// (0x000353b3) aid_size_cell_graphic_pane

0xf1ee,	// (0x00036db1) data_form_pane_t1_ParamLimits

0xf325,	// (0x00036ee8) data_form_wide_pane_t1_ParamLimits

0x9485,	// (0x00031048) bg_status_flat_pane

0x3045,	// (0x0002ac08) title_pane_t1_ParamLimits

0xb179,	// (0x00032d3c) title_pane_t2_ParamLimits

0xb19f,	// (0x00032d62) title_pane_t3_ParamLimits

0xf55d,	// (0x00037120) title_pane_t_ParamLimits

0xbcca,	// (0x0003388d) level_1_signal_ParamLimits

0xbcd7,	// (0x0003389a) level_2_signal_ParamLimits

0xbce4,	// (0x000338a7) level_3_signal_ParamLimits

0xbcf1,	// (0x000338b4) level_4_signal_ParamLimits

0xbcfe,	// (0x000338c1) level_5_signal_ParamLimits

0xbd0b,	// (0x000338ce) level_6_signal_ParamLimits

0xbd18,	// (0x000338db) level_7_signal_ParamLimits

0xbcca,	// (0x0003388d) level_1_battery_ParamLimits

0xbcd7,	// (0x0003389a) level_2_battery_ParamLimits

0xbce4,	// (0x000338a7) level_3_battery_ParamLimits

0xbcf1,	// (0x000338b4) level_4_battery_ParamLimits

0xbcfe,	// (0x000338c1) level_5_battery_ParamLimits

0xbd0b,	// (0x000338ce) level_6_battery_ParamLimits

0xbd18,	// (0x000338db) level_7_battery_ParamLimits

0xcd1c,	// (0x000348df) bg_status_flat_pane_g1

0xcd24,	// (0x000348e7) bg_status_flat_pane_g2

0xcd2c,	// (0x000348ef) bg_status_flat_pane_g3

0xcd34,	// (0x000348f7) bg_status_flat_pane_g4

0xcd3c,	// (0x000348ff) bg_status_flat_pane_g5

0xcd44,	// (0x00034907) bg_status_flat_pane_g6

0xcd4c,	// (0x0003490f) bg_status_flat_pane_g7

0x30d9,	// (0x0002ac9c) tabs_3_active_pane_t1_ParamLimits

0x30d9,	// (0x0002ac9c) tabs_3_passive_pane_t1_ParamLimits

0x30f3,	// (0x0002acb6) tabs_4_active_pane_t1_ParamLimits

0x30f3,	// (0x0002acb6) tabs_4_1_passive_pane_t1_ParamLimits

0x8855,	// (0x00030418) tabs_2_active_pane_t1_ParamLimits

0x8855,	// (0x00030418) tabs_2_passive_pane_t1_ParamLimits

0xb1bf,	// (0x00032d82) bg_active_tab_pane_cp4_ParamLimits

0x8867,	// (0x0003042a) tabs_2_long_active_pane_t1_ParamLimits

0xb96b,	// (0x0003352e) bg_passive_tab_pane_cp4_ParamLimits

0x4e1c,	// (0x0002c9df) list_single_midp_graphic_pane_t1_ParamLimits

0xb1bf,	// (0x00032d82) bg_active_tab_pane_cp5_ParamLimits

0x887a,	// (0x0003043d) tabs_3_long_active_pane_t1_ParamLimits

0xb96b,	// (0x0003352e) bg_passive_tab_pane_cp5_ParamLimits

0x4e1c,	// (0x0002c9df) list_single_midp_graphic_pane_t1

0x9485,	// (0x00031048) bg_status_flat_pane_ParamLimits

0xc4dc,	// (0x0003409f) indicator_pane_cp2_ParamLimits

0xc4dc,	// (0x0003409f) indicator_pane_cp2

0x95fd,	// (0x000311c0) navi_pane_srt_ParamLimits

0x95fd,	// (0x000311c0) navi_pane_srt

0xc504,	// (0x000340c7) popup_clock_digital_analogue_window_cp1

0xb203,	// (0x00032dc6) indicator_pane_t1

0xc1d7,	// (0x00033d9a) copy_highlight_pane

0xc1d7,	// (0x00033d9a) cursor_graphics_pane

0xc1d7,	// (0x00033d9a) graphic_within_text_pane

0xc1d7,	// (0x00033d9a) link_highlight_pane

0xd402,	// (0x00034fc5) popup_preview_text_window_t5_ParamLimits

0xd402,	// (0x00034fc5) popup_preview_text_window_t5

0xc252,	// (0x00033e15) cursor_digital_pane

0xc252,	// (0x00033e15) cursor_primary_pane

0xc263,	// (0x00033e26) cursor_primary_small_pane

0xc26b,	// (0x00033e2e) cursor_secondary_pane

0xc273,	// (0x00033e36) cursor_title_pane

0xc252,	// (0x00033e15) link_highlight_digital_pane

0xc25a,	// (0x00033e1d) link_highlight_primary_pane

0xc263,	// (0x00033e26) link_highlight_primary_small_pane

0xc26b,	// (0x00033e2e) link_highlight_secondary_pane

0xc273,	// (0x00033e36) link_highlight_title_pane

0xc252,	// (0x00033e15) copy_highlight_digital_pane

0xc252,	// (0x00033e15) copy_highlight_primary_pane

0xc263,	// (0x00033e26) copy_highlight_primary_small_pane

0xc26b,	// (0x00033e2e) copy_highlight_secondary_pane

0xc273,	// (0x00033e36) copy_highlight_title_pane

0xc26b,	// (0x00033e2e) graphic_text_digital_pane

0xcd9c,	// (0x0003495f) graphic_text_primary_pane

0xcda5,	// (0x00034968) graphic_text_primary_small_pane

0xc263,	// (0x00033e26) graphic_text_secondary_pane

0xc252,	// (0x00033e15) graphic_text_title_pane

0x8b4b,	// (0x0003070e) cursor_primary_pane_g1

0xcd8e,	// (0x00034951) cursor_text_primary_t1

0x9909,	// (0x000314cc) cursor_primary_small_pane_g1

0xcd80,	// (0x00034943) cursor_text_primary_small_t1

0x98ff,	// (0x000314c2) cursor_primary_small_pane_g1_copy1

0xcd72,	// (0x00034935) cursor_text_primary_small_t1_copy1

0xcd64,	// (0x00034927) cursor_text_title_t1

0x98f5,	// (0x000314b8) cursor_title_pane_g1

0x8b4b,	// (0x0003070e) cursor_digital_pane_g1

0xc27b,	// (0x00033e3e) cursor_text_digital_t1

0xcd05,	// (0x000348c8) link_highlight_primary_pane_g1

0xcd0d,	// (0x000348d0) link_highlight_primary_pane_t1

0xc289,	// (0x00033e4c) link_highlight_primary_small_pane_g1

0xc291,	// (0x00033e54) link_highlight_primary_small_pane_t1

0xc289,	// (0x00033e4c) link_highlight_secondary_pane_g1

0xc2a0,	// (0x00033e63) link_highlight_secondary_pane_t1

0xcc79,	// (0x0003483c) link_highlight_title_pane_g1

0xcc81,	// (0x00034844) link_highlight_title_pane_t1

0xcc62,	// (0x00034825) link_highlight_digital_pane_g1

0xcc6a,	// (0x0003482d) link_highlight_digital_pane_t1

0xcb56,	// (0x00034719) copy_highlight_primary_pane_g1

0xcb5e,	// (0x00034721) copy_highlight_primary_pane_t1

0xcb30,	// (0x000346f3) copy_highlight_primary_small_pane_g1

0xcb47,	// (0x0003470a) copy_highlight_primary_small_pane_t1

0xc2af,	// (0x00033e72) copy_highlight_secondary_pane_g1

0xc2b7,	// (0x00033e7a) copy_highlight_secondary_pane_t1

0xcb30,	// (0x000346f3) copy_highlight_title_pane_g1

0xcb38,	// (0x000346fb) copy_highlight_title_pane_t1

0xcb56,	// (0x00034719) copy_highlight_digital_pane_g1

0xd976,	// (0x00035539) copy_highlight_digital_pane_t1

0xd8ca,	// (0x0003548d) graphic_text_primary_pane_g1

0xd95a,	// (0x0003551d) graphic_text_primary_pane_t1

0xd968,	// (0x0003552b) graphic_text_primary_pane_t2

0x0001,

0xf9cf,	// (0x00037592) graphic_text_primary_pane_t

0xd936,	// (0x000354f9) graphic_text_primary_small_pane_g1

0xd93e,	// (0x00035501) graphic_text_primary_small_pane_t1

0xd94c,	// (0x0003550f) graphic_text_primary_small_pane_t2

0x0001,

0xf9ca,	// (0x0003758d) graphic_text_primary_small_pane_t

0xd912,	// (0x000354d5) graphic_text_secondary_pane_g1

0xd91a,	// (0x000354dd) graphic_text_secondary_pane_t1

0xd928,	// (0x000354eb) graphic_text_secondary_pane_t2

0x0001,

0xf9c5,	// (0x00037588) graphic_text_secondary_pane_t

0xd8ee,	// (0x000354b1) graphic_text_title_pane_g1

0xd8f6,	// (0x000354b9) graphic_text_title_pane_t1

0xd904,	// (0x000354c7) graphic_text_title_pane_t2

0x0001,

0xf9c0,	// (0x00037583) graphic_text_title_pane_t

0xd8ca,	// (0x0003548d) graphic_text_digital_pane_g1

0xd8d2,	// (0x00035495) graphic_text_digital_pane_t1

0xd8e0,	// (0x000354a3) graphic_text_digital_pane_t2

0x0001,

0xf9bb,	// (0x0003757e) graphic_text_digital_pane_t

0xb1bf,	// (0x00032d82) navi_icon_pane_srt_ParamLimits

0xb1bf,	// (0x00032d82) navi_icon_pane_srt

0xb163,	// (0x00032d26) navi_midp_pane_srt

0xb163,	// (0x00032d26) navi_navi_pane_srt

0xb1bf,	// (0x00032d82) navi_text_pane_srt_ParamLimits

0xb1bf,	// (0x00032d82) navi_text_pane_srt

0xd895,	// (0x00035458) navi_navi_icon_text_pane_srt

0xd89d,	// (0x00035460) navi_navi_pane_srt_g1_ParamLimits

0xd89d,	// (0x00035460) navi_navi_pane_srt_g1

0xd8af,	// (0x00035472) navi_navi_pane_srt_g2_ParamLimits

0xd8af,	// (0x00035472) navi_navi_pane_srt_g2

0x0001,

0xf9b6,	// (0x00037579) navi_navi_pane_srt_g_ParamLimits

0xf9b6,	// (0x00037579) navi_navi_pane_srt_g

0xd8c1,	// (0x00035484) navi_navi_tabs_pane_srt

0xd895,	// (0x00035458) navi_navi_text_pane_srt

0xd895,	// (0x00035458) navi_navi_volume_pane_srt

0xd886,	// (0x00035449) navi_navi_text_pane_srt_t1

0x5190,	// (0x0002cd53) navi_navi_volume_pane_srt_g1

0x5198,	// (0x0002cd5b) volume_small_pane_srt_ParamLimits

0x5198,	// (0x0002cd5b) volume_small_pane_srt

0x45e3,	// (0x0002c1a6) volume_small_pane_srt_g1_ParamLimits

0x45e3,	// (0x0002c1a6) volume_small_pane_srt_g1

0x45f3,	// (0x0002c1b6) volume_small_pane_srt_g2_ParamLimits

0x45f3,	// (0x0002c1b6) volume_small_pane_srt_g2

0x4604,	// (0x0002c1c7) volume_small_pane_srt_g3_ParamLimits

0x4604,	// (0x0002c1c7) volume_small_pane_srt_g3

0x4615,	// (0x0002c1d8) volume_small_pane_srt_g4_ParamLimits

0x4615,	// (0x0002c1d8) volume_small_pane_srt_g4

0x4626,	// (0x0002c1e9) volume_small_pane_srt_g5_ParamLimits

0x4626,	// (0x0002c1e9) volume_small_pane_srt_g5

0x4637,	// (0x0002c1fa) volume_small_pane_srt_g6_ParamLimits

0x4637,	// (0x0002c1fa) volume_small_pane_srt_g6

0x4648,	// (0x0002c20b) volume_small_pane_srt_g7_ParamLimits

0x4648,	// (0x0002c20b) volume_small_pane_srt_g7

0x4659,	// (0x0002c21c) volume_small_pane_srt_g8_ParamLimits

0x4659,	// (0x0002c21c) volume_small_pane_srt_g8

0x466a,	// (0x0002c22d) volume_small_pane_srt_g9_ParamLimits

0x466a,	// (0x0002c22d) volume_small_pane_srt_g9

0x467b,	// (0x0002c23e) volume_small_pane_srt_g10_ParamLimits

0x467b,	// (0x0002c23e) volume_small_pane_srt_g10

0x0009,

0xf763,	// (0x00037326) volume_small_pane_srt_g_ParamLimits

0xf763,	// (0x00037326) volume_small_pane_srt_g

0xb437,	// (0x00032ffa) query_popup_data_pane_cp2

0xd86c,	// (0x0003542f) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xd86c,	// (0x0003542f) navi_navi_icon_text_pane_srt_t1

0xcd9c,	// (0x0003495f) navi_tabs_2_long_pane_srt

0xcd9c,	// (0x0003495f) navi_tabs_2_pane_srt

0xcd9c,	// (0x0003495f) navi_tabs_3_long_pane_srt

0xcd9c,	// (0x0003495f) navi_tabs_3_pane_srt

0xcd9c,	// (0x0003495f) navi_tabs_4_pane_srt

0x5170,	// (0x0002cd33) tabs_2_active_pane_srt_ParamLimits

0x5170,	// (0x0002cd33) tabs_2_active_pane_srt

0x5180,	// (0x0002cd43) tabs_2_passive_pane_srt_ParamLimits

0x5180,	// (0x0002cd43) tabs_2_passive_pane_srt

0xc67f,	// (0x00034242) bg_passive_tab_pane_cp1_srt_ParamLimits

0xc67f,	// (0x00034242) bg_passive_tab_pane_cp1_srt

0xd84a,	// (0x0003540d) bg_passive_tab_pane_g1_cp1_srt

0xbefb,	// (0x00033abe) bg_passive_tab_pane_g2_cp1_srt

0xd853,	// (0x00035416) bg_passive_tab_pane_g3_cp1_srt

0xb1b1,	// (0x00032d74) bg_active_tab_pane_cp1_srt_ParamLimits

0xb1b1,	// (0x00032d74) bg_active_tab_pane_cp1_srt

0xd85c,	// (0x0003541f) tabs_2_active_pane_srt_g1

0x9e88,	// (0x00031a4b) tabs_2_active_pane_srt_t1_ParamLimits

0x9e88,	// (0x00031a4b) tabs_2_active_pane_srt_t1

0xd84a,	// (0x0003540d) bg_active_tab_pane_g1_cp1_srt

0xbefb,	// (0x00033abe) bg_active_tab_pane_g2_cp1_srt

0xd853,	// (0x00035416) bg_active_tab_pane_g3_cp1_srt

0x513d,	// (0x0002cd00) tabs_3_active_pane_srt_ParamLimits

0x513d,	// (0x0002cd00) tabs_3_active_pane_srt

0x514e,	// (0x0002cd11) tabs_3_passive_pane_cp_srt_ParamLimits

0x514e,	// (0x0002cd11) tabs_3_passive_pane_cp_srt

0x515f,	// (0x0002cd22) tabs_3_passive_pane_srt_ParamLimits

0x515f,	// (0x0002cd22) tabs_3_passive_pane_srt

0xc67f,	// (0x00034242) bg_passive_tab_pane_cp2_srt_ParamLimits

0xc67f,	// (0x00034242) bg_passive_tab_pane_cp2_srt

0xc2c6,	// (0x00033e89) bg_passive_tab_pane_g1_cp2_srt

0xbefb,	// (0x00033abe) bg_passive_tab_pane_g2_cp2_srt

0xc2cf,	// (0x00033e92) bg_passive_tab_pane_g3_cp2_srt

0xb1b1,	// (0x00032d74) bg_active_tab_pane_cp2_srt_ParamLimits

0xb1b1,	// (0x00032d74) bg_active_tab_pane_cp2_srt

0xd842,	// (0x00035405) tabs_3_active_pane_srt_g1

0x9e72,	// (0x00031a35) tabs_3_active_pane_srt_t1_ParamLimits

0x9e72,	// (0x00031a35) tabs_3_active_pane_srt_t1

0xc2c6,	// (0x00033e89) bg_active_tab_pane_g1_cp2_srt

0xbefb,	// (0x00033abe) bg_active_tab_pane_g2_cp2_srt

0xc2cf,	// (0x00033e92) bg_active_tab_pane_g3_cp2_srt

0x50f5,	// (0x0002ccb8) tabs_4_active_pane_srt_ParamLimits

0x50f5,	// (0x0002ccb8) tabs_4_active_pane_srt

0x5107,	// (0x0002ccca) tabs_4_passive_pane_cp2_srt_ParamLimits

0x5107,	// (0x0002ccca) tabs_4_passive_pane_cp2_srt

0x47de,	// (0x0002c3a1) aid_size_cell_toolbar

0xc6bd,	// (0x00034280) main_idle_act_pane_ParamLimits

0x497d,	// (0x0002c540) popup_large_graphic_colour_window_ParamLimits

0x9349,	// (0x00030f0c) popup_toolbar_window_ParamLimits

0x9349,	// (0x00030f0c) popup_toolbar_window

0xd74e,	// (0x00035311) list_single_graphic_2heading_pane_ParamLimits

0xd74e,	// (0x00035311) list_single_graphic_2heading_pane

0xbb12,	// (0x000336d5) aid_size_cell_apps_grid_lsc_pane

0xbb24,	// (0x000336e7) aid_size_cell_apps_grid_prt_pane

0xb96b,	// (0x0003352e) bg_wml_button_pane_cp1_ParamLimits

0xb96b,	// (0x0003352e) bg_wml_button_pane_cp1

0x98a6,	// (0x00031469) form_midp_field_text_pane_t1_ParamLimits

0xc67f,	// (0x00034242) input_focus_pane_cp050_ParamLimits

0xc818,	// (0x000343db) list_midp_form_text_pane_ParamLimits

0xc7f5,	// (0x000343b8) input_focus_pane_cp051_ParamLimits

0xc809,	// (0x000343cc) list_midp_choice_pane_ParamLimits

0x983a,	// (0x000313fd) list_single_2graphic_pane_cp3_ParamLimits

0x983a,	// (0x000313fd) list_single_2graphic_pane_cp3

0x984f,	// (0x00031412) list_single_midp_graphic_pane_ParamLimits

0x984f,	// (0x00031412) list_single_midp_graphic_pane

0x3d30,	// (0x0002b8f3) list_single_graphic_2heading_pane_g1_ParamLimits

0x3d30,	// (0x0002b8f3) list_single_graphic_2heading_pane_g1

0x3d3c,	// (0x0002b8ff) list_single_graphic_2heading_pane_g4_ParamLimits

0x3d3c,	// (0x0002b8ff) list_single_graphic_2heading_pane_g4

0x3d48,	// (0x0002b90b) list_single_graphic_2heading_pane_g5_ParamLimits

0x3d48,	// (0x0002b90b) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b6,	// (0x00037379) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b6,	// (0x00037379) list_single_graphic_2heading_pane_g

0x3d54,	// (0x0002b917) list_single_graphic_2heading_pane_t1_ParamLimits

0x3d54,	// (0x0002b917) list_single_graphic_2heading_pane_t1

0x3d68,	// (0x0002b92b) list_single_graphic_2heading_pane_t2_ParamLimits

0x3d68,	// (0x0002b92b) list_single_graphic_2heading_pane_t2

0x3d82,	// (0x0002b945) list_single_graphic_2heading_pane_t3_ParamLimits

0x3d82,	// (0x0002b945) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bd,	// (0x00037380) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bd,	// (0x00037380) list_single_graphic_2heading_pane_t

0xc549,	// (0x0003410c) bg_popup_sub_pane_cp2

0xc573,	// (0x00034136) grid_toobar_pane

0x4d8d,	// (0x0002c950) cell_toolbar_pane_ParamLimits

0x4d8d,	// (0x0002c950) cell_toolbar_pane

0xc5af,	// (0x00034172) cell_toolbar_pane_g1_ParamLimits

0xc5af,	// (0x00034172) cell_toolbar_pane_g1

0xc5c3,	// (0x00034186) cell_toolbar_pane_g2_ParamLimits

0xc5c3,	// (0x00034186) cell_toolbar_pane_g2

0x0001,

0xf7cb,	// (0x0003738e) cell_toolbar_pane_g_ParamLimits

0xf7cb,	// (0x0003738e) cell_toolbar_pane_g

0xc5e5,	// (0x000341a8) grid_highlight_pane_cp2_ParamLimits

0xc5e5,	// (0x000341a8) grid_highlight_pane_cp2

0xc5ff,	// (0x000341c2) toolbar_button_pane

0xc60b,	// (0x000341ce) toolbar_button_pane_g1

0xc613,	// (0x000341d6) toolbar_button_pane_g2

0xc61b,	// (0x000341de) toolbar_button_pane_g3

0xc623,	// (0x000341e6) toolbar_button_pane_g4

0xc62b,	// (0x000341ee) toolbar_button_pane_g5

0xc633,	// (0x000341f6) toolbar_button_pane_g6

0xc63b,	// (0x000341fe) toolbar_button_pane_g7

0xc643,	// (0x00034206) toolbar_button_pane_g8

0xc64b,	// (0x0003420e) toolbar_button_pane_g9

0x0009,

0xf7d0,	// (0x00037393) toolbar_button_pane_g

0x4dc5,	// (0x0002c988) list_single_2graphic_pane_g1_cp3_ParamLimits

0x4dc5,	// (0x0002c988) list_single_2graphic_pane_g1_cp3

0x979c,	// (0x0003135f) list_single_2graphic_pane_g2_cp3_ParamLimits

0x979c,	// (0x0003135f) list_single_2graphic_pane_g2_cp3

0x4de2,	// (0x0002c9a5) list_single_2graphic_pane_g3_cp3

0x4dea,	// (0x0002c9ad) list_single_2graphic_pane_g4_cp3_ParamLimits

0x4dea,	// (0x0002c9ad) list_single_2graphic_pane_g4_cp3

0x4df6,	// (0x0002c9b9) list_single_2graphic_pane_t1_cp3_ParamLimits

0x4df6,	// (0x0002c9b9) list_single_2graphic_pane_t1_cp3

0x4e10,	// (0x0002c9d3) list_single_midp_graphic_pane_g2_ParamLimits

0x4e10,	// (0x0002c9d3) list_single_midp_graphic_pane_g2

0x47e6,	// (0x0002c3a9) aid_zoom_text_primary

0x3d14,	// (0x0002b8d7) aid_zoom_text_secondary

0xc383,	// (0x00033f46) status_small_pane_g7_ParamLimits

0xc383,	// (0x00033f46) status_small_pane_g7

0xc3a6,	// (0x00033f69) status_small_pane_t1_ParamLimits

0x3021,	// (0x0002abe4) title_pane_g2

0x0003,

0xf554,	// (0x00037117) title_pane_g

0x32a9,	// (0x0002ae6c) aid_size_cell_colour_1_pane_ParamLimits

0x32a9,	// (0x0002ae6c) aid_size_cell_colour_1_pane

0x32bd,	// (0x0002ae80) aid_size_cell_colour_2_pane_ParamLimits

0x32bd,	// (0x0002ae80) aid_size_cell_colour_2_pane

0x32d1,	// (0x0002ae94) aid_size_cell_colour_3_pane_ParamLimits

0x32d1,	// (0x0002ae94) aid_size_cell_colour_3_pane

0x32e5,	// (0x0002aea8) aid_size_cell_colour_4_pane_ParamLimits

0x32e5,	// (0x0002aea8) aid_size_cell_colour_4_pane

0x4248,	// (0x0002be0b) title_pane_stacon_g1_ParamLimits

0x4248,	// (0x0002be0b) title_pane_stacon_g1

0xcbb5,	// (0x00034778) popup_note_wait_window_g3_ParamLimits

0xcbb5,	// (0x00034778) popup_note_wait_window_g3

0xcc2b,	// (0x000347ee) popup_note_wait_window_t5_ParamLimits

0xcc2b,	// (0x000347ee) popup_note_wait_window_t5

0xb163,	// (0x00032d26) main_feb_china_hwr_fs_writing_pane

0x8d65,	// (0x00030928) popup_feb_china_hwr_fs_window_ParamLimits

0x8d65,	// (0x00030928) popup_feb_china_hwr_fs_window

0x97ad,	// (0x00031370) aid_size_cell_hwr_fs_ParamLimits

0x97ad,	// (0x00031370) aid_size_cell_hwr_fs

0xc67f,	// (0x00034242) bg_popup_sub_pane_cp3_ParamLimits

0xc67f,	// (0x00034242) bg_popup_sub_pane_cp3

0x97c2,	// (0x00031385) grid_hwr_fs_pane_ParamLimits

0x97c2,	// (0x00031385) grid_hwr_fs_pane

0x4e5f,	// (0x0002ca22) linegrid_hwr_fs_pane_ParamLimits

0x4e5f,	// (0x0002ca22) linegrid_hwr_fs_pane

0x97da,	// (0x0003139d) cell_hwr_fs_pane_ParamLimits

0x97da,	// (0x0003139d) cell_hwr_fs_pane

0xc68b,	// (0x0003424e) linegrid_hwr_fs_pane_g1_ParamLimits

0xc68b,	// (0x0003424e) linegrid_hwr_fs_pane_g1

0x9800,	// (0x000313c3) linegrid_hwr_fs_pane_g2_ParamLimits

0x9800,	// (0x000313c3) linegrid_hwr_fs_pane_g2

0xc697,	// (0x0003425a) linegrid_hwr_fs_pane_g3_ParamLimits

0xc697,	// (0x0003425a) linegrid_hwr_fs_pane_g3

0x4e91,	// (0x0002ca54) linegrid_hwr_fs_pane_g4_ParamLimits

0x4e91,	// (0x0002ca54) linegrid_hwr_fs_pane_g4

0x4eab,	// (0x0002ca6e) linegrid_hwr_fs_pane_g5_ParamLimits

0x4eab,	// (0x0002ca6e) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f6,	// (0x000373b9) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f6,	// (0x000373b9) linegrid_hwr_fs_pane_g

0xc6cf,	// (0x00034292) cell_hwr_fs_pane_g1_ParamLimits

0xc6cf,	// (0x00034292) cell_hwr_fs_pane_g1

0xc515,	// (0x000340d8) cell_hwr_fs_pane_g2_ParamLimits

0xc515,	// (0x000340d8) cell_hwr_fs_pane_g2

0x9812,	// (0x000313d5) cell_hwr_fs_pane_g3_ParamLimits

0x9812,	// (0x000313d5) cell_hwr_fs_pane_g3

0x981f,	// (0x000313e2) cell_hwr_fs_pane_g4_ParamLimits

0x981f,	// (0x000313e2) cell_hwr_fs_pane_g4

0x0003,

0xf801,	// (0x000373c4) cell_hwr_fs_pane_g_ParamLimits

0xf801,	// (0x000373c4) cell_hwr_fs_pane_g

0x982c,	// (0x000313ef) cell_hwr_fs_pane_t1

0xb163,	// (0x00032d26) grid_highlight_pane_cp6

0xb163,	// (0x00032d26) main_idle_act2_pane

0xb919,	// (0x000334dc) aid_inside_area_popup_secondary

0x9aac,	// (0x0003166f) aid_inside_area_window_primary_ParamLimits

0x9aac,	// (0x0003166f) aid_inside_area_window_primary

0xd985,	// (0x00035548) ai2_news_ticker_pane

0xd98d,	// (0x00035550) aid_size_cell_ai1_link_ParamLimits

0xd98d,	// (0x00035550) aid_size_cell_ai1_link

0xd9a7,	// (0x0003556a) popup_ai2_data_window_ParamLimits

0xd9a7,	// (0x0003556a) popup_ai2_data_window

0xd9bb,	// (0x0003557e) popup_ai2_link_window_ParamLimits

0xd9bb,	// (0x0003557e) popup_ai2_link_window

0xc67f,	// (0x00034242) bg_popup_sub_pane_cp4_ParamLimits

0xc67f,	// (0x00034242) bg_popup_sub_pane_cp4

0xd9cf,	// (0x00035592) grid_ai2_link_pane_ParamLimits

0xd9cf,	// (0x00035592) grid_ai2_link_pane

0xd9e6,	// (0x000355a9) popup_ai2_link_window_g1_ParamLimits

0xd9e6,	// (0x000355a9) popup_ai2_link_window_g1

0xd9f2,	// (0x000355b5) popup_ai2_link_window_g2_ParamLimits

0xd9f2,	// (0x000355b5) popup_ai2_link_window_g2

0x0001,

0xf9d4,	// (0x00037597) popup_ai2_link_window_g_ParamLimits

0xf9d4,	// (0x00037597) popup_ai2_link_window_g

0xda01,	// (0x000355c4) ai2_mp_button_pane

0xda09,	// (0x000355cc) ai2_mp_volume_pane

0xc7f5,	// (0x000343b8) bg_popup_sub_pane_cp5_ParamLimits

0xc7f5,	// (0x000343b8) bg_popup_sub_pane_cp5

0xda11,	// (0x000355d4) heading_ai2_gene_pane_ParamLimits

0xda11,	// (0x000355d4) heading_ai2_gene_pane

0xda1d,	// (0x000355e0) list_ai2_gene_pane_ParamLimits

0xda1d,	// (0x000355e0) list_ai2_gene_pane

0xda65,	// (0x00035628) cell_ai2_link_pane_ParamLimits

0xda65,	// (0x00035628) cell_ai2_link_pane

0xda7b,	// (0x0003563e) cell_ai2_link_pane_g1

0xb163,	// (0x00032d26) grid_highlight_pane_cp7

0x51ad,	// (0x0002cd70) ai2_mp_volume_pane_g1

0xdb4c,	// (0x0003570f) ai2_mp_volume_pane_g2

0xdac1,	// (0x00035684) list_ai2_gene_pane_t1

0xdb54,	// (0x00035717) ai2_mp_volume_pane_g3

0x0002,

0xf9ed,	// (0x000375b0) ai2_mp_volume_pane_g

0x51b5,	// (0x0002cd78) volume_small_pane_cp3

0xdb5c,	// (0x0003571f) aid_size_cell_ai2_button

0xdb64,	// (0x00035727) grid_ai2_button_pane

0xdb6d,	// (0x00035730) cell_ai2_button_pane_ParamLimits

0xdb6d,	// (0x00035730) cell_ai2_button_pane

0xb159,	// (0x00032d1c) cell_ai2_button_pane_g1

0xb163,	// (0x00032d26) grid_highlight_pane_cp8

0xdb0c,	// (0x000356cf) ai2_gene_pane_t1_ParamLimits

0xdb0c,	// (0x000356cf) ai2_gene_pane_t1

0x8ce3,	// (0x000308a6) aid_height_parent_landscape

0x9c50,	// (0x00031813) aid_height_set_list

0xc6bd,	// (0x00034280) aid_size_parent

0xd7f0,	// (0x000353b3) aid_size_cell_graphic_pane_ParamLimits

0xda2d,	// (0x000355f0) popup_ai2_data_window_g1_ParamLimits

0xda2d,	// (0x000355f0) popup_ai2_data_window_g1

0xda39,	// (0x000355fc) ai2_news_ticker_pane_g1

0xda41,	// (0x00035604) ai2_news_ticker_pane_g2

0x0001,

0xf9d9,	// (0x0003759c) ai2_news_ticker_pane_g

0xda49,	// (0x0003560c) ai2_news_ticker_pane_t1

0xda57,	// (0x0003561a) ai2_news_ticker_pane_t2

0x0001,

0xf9de,	// (0x000375a1) ai2_news_ticker_pane_t

0xda84,	// (0x00035647) heading_ai2_gene_pane_g1

0xda8c,	// (0x0003564f) heading_ai2_gene_pane_t1_ParamLimits

0xda8c,	// (0x0003564f) heading_ai2_gene_pane_t1

0xdaa1,	// (0x00035664) list_highlight_pane_cp6

0xdaa9,	// (0x0003566c) ai2_gene_pane_ParamLimits

0xdaa9,	// (0x0003566c) ai2_gene_pane

0xdacf,	// (0x00035692) list_ai2_gene_pane_t2

0x0001,

0xf9e3,	// (0x000375a6) list_ai2_gene_pane_t

0xdadd,	// (0x000356a0) list_highlight_pane_cp8_ParamLimits

0xdadd,	// (0x000356a0) list_highlight_pane_cp8

0xdaee,	// (0x000356b1) ai2_gene_pane_g1_ParamLimits

0xdaee,	// (0x000356b1) ai2_gene_pane_g1

0xdb00,	// (0x000356c3) ai2_gene_pane_g2_ParamLimits

0xdb00,	// (0x000356c3) ai2_gene_pane_g2

0x0001,

0xf9e8,	// (0x000375ab) ai2_gene_pane_g_ParamLimits

0xf9e8,	// (0x000375ab) ai2_gene_pane_g

0xb79c,	// (0x0003335f) scroll_pane_cp12

0x8ca2,	// (0x00030865) control_pane_t3_ParamLimits

0x8ca2,	// (0x00030865) control_pane_t3

0xc397,	// (0x00033f5a) status_small_pane_g8_ParamLimits

0xc397,	// (0x00033f5a) status_small_pane_g8

0x8df8,	// (0x000309bb) popup_find_window_ParamLimits

0x9079,	// (0x00030c3c) popup_note_image_window_ParamLimits

0x7398,	// (0x0002ef5b) list_double2_graphic_pane_vc_g1_ParamLimits

0x7398,	// (0x0002ef5b) list_double2_graphic_pane_vc_g1

0x6cde,	// (0x0002e8a1) list_double2_graphic_pane_vc_g2_ParamLimits

0x6cde,	// (0x0002e8a1) list_double2_graphic_pane_vc_g2

0x6cea,	// (0x0002e8ad) list_double2_graphic_pane_vc_g3_ParamLimits

0x6cea,	// (0x0002e8ad) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c4,	// (0x00037387) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c4,	// (0x00037387) list_double2_graphic_pane_vc_g

0x73a4,	// (0x0002ef67) list_double2_graphic_pane_vc_t1_ParamLimits

0x73a4,	// (0x0002ef67) list_double2_graphic_pane_vc_t1

0x6cde,	// (0x0002e8a1) list_single_heading_pane_vc_g1_ParamLimits

0x6cde,	// (0x0002e8a1) list_single_heading_pane_vc_g1

0x6cea,	// (0x0002e8ad) list_single_heading_pane_vc_g2_ParamLimits

0x6cea,	// (0x0002e8ad) list_single_heading_pane_vc_g2

0x0001,

0xf5ce,	// (0x00037191) list_single_heading_pane_vc_g_ParamLimits

0xf5ce,	// (0x00037191) list_single_heading_pane_vc_g

0x73ba,	// (0x0002ef7d) list_single_heading_pane_vc_t1_ParamLimits

0x73ba,	// (0x0002ef7d) list_single_heading_pane_vc_t1

0x73d0,	// (0x0002ef93) list_single_heading_pane_vc_t2_ParamLimits

0x73d0,	// (0x0002ef93) list_single_heading_pane_vc_t2

0x0001,

0xf7e5,	// (0x000373a8) list_single_heading_pane_vc_t_ParamLimits

0xf7e5,	// (0x000373a8) list_single_heading_pane_vc_t

0x73e4,	// (0x0002efa7) list_setting_number_pane_vc_g1_ParamLimits

0x73e4,	// (0x0002efa7) list_setting_number_pane_vc_g1

0x73f0,	// (0x0002efb3) list_setting_number_pane_vc_g2_ParamLimits

0x73f0,	// (0x0002efb3) list_setting_number_pane_vc_g2

0x0001,

0xf7ea,	// (0x000373ad) list_setting_number_pane_vc_g_ParamLimits

0xf7ea,	// (0x000373ad) list_setting_number_pane_vc_g

0x73fc,	// (0x0002efbf) list_setting_number_pane_vc_t1_ParamLimits

0x73fc,	// (0x0002efbf) list_setting_number_pane_vc_t1

0x7410,	// (0x0002efd3) list_setting_number_pane_vc_t2_ParamLimits

0x7410,	// (0x0002efd3) list_setting_number_pane_vc_t2

0x742a,	// (0x0002efed) list_setting_number_pane_vc_t3_ParamLimits

0x742a,	// (0x0002efed) list_setting_number_pane_vc_t3

0x0002,

0xf7ef,	// (0x000373b2) list_setting_number_pane_vc_t_ParamLimits

0xf7ef,	// (0x000373b2) list_setting_number_pane_vc_t

0x7444,	// (0x0002f007) set_value_pane_vc_ParamLimits

0x7444,	// (0x0002f007) set_value_pane_vc

0xd74e,	// (0x00035311) list_double2_graphic_pane_vc_ParamLimits

0xd74e,	// (0x00035311) list_double2_graphic_pane_vc

0xd74e,	// (0x00035311) list_double2_large_graphic_pane_vc_ParamLimits

0xd74e,	// (0x00035311) list_double2_large_graphic_pane_vc

0xd74e,	// (0x00035311) list_double2_pane_vc_ParamLimits

0xd74e,	// (0x00035311) list_double2_pane_vc

0xd74e,	// (0x00035311) list_double_graphic_heading_pane_vc_ParamLimits

0xd74e,	// (0x00035311) list_double_graphic_heading_pane_vc

0xd74e,	// (0x00035311) list_double_graphic_pane_vc_ParamLimits

0xd74e,	// (0x00035311) list_double_graphic_pane_vc

0xd74e,	// (0x00035311) list_double_heading_pane_vc_ParamLimits

0xd74e,	// (0x00035311) list_double_heading_pane_vc

0xd74e,	// (0x00035311) list_double_large_graphic_pane_vc_ParamLimits

0xd74e,	// (0x00035311) list_double_large_graphic_pane_vc

0xd74e,	// (0x00035311) list_double_number_pane_vc_ParamLimits

0xd74e,	// (0x00035311) list_double_number_pane_vc

0xd74e,	// (0x00035311) list_double_pane_vc_ParamLimits

0xd74e,	// (0x00035311) list_double_pane_vc

0xd74e,	// (0x00035311) list_double_time_pane_vc_ParamLimits

0xd74e,	// (0x00035311) list_double_time_pane_vc

0xd74e,	// (0x00035311) list_setting_number_pane_vc_ParamLimits

0xd74e,	// (0x00035311) list_setting_number_pane_vc

0xd74e,	// (0x00035311) list_setting_pane_vc_ParamLimits

0xd74e,	// (0x00035311) list_setting_pane_vc

0xd74e,	// (0x00035311) list_single_graphic_heading_pane_vc_ParamLimits

0xd74e,	// (0x00035311) list_single_graphic_heading_pane_vc

0xd74e,	// (0x00035311) list_single_heading_pane_vc_ParamLimits

0xd74e,	// (0x00035311) list_single_heading_pane_vc

0xd74e,	// (0x00035311) list_single_number_heading_pane_vc_ParamLimits

0xd74e,	// (0x00035311) list_single_number_heading_pane_vc

0x75fa,	// (0x0002f1bd) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x75fa,	// (0x0002f1bd) list_double_graphic_heading_pane_vc_g1

0x6cde,	// (0x0002e8a1) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x6cde,	// (0x0002e8a1) list_double_graphic_heading_pane_vc_g2

0x6cea,	// (0x0002e8ad) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x6cea,	// (0x0002e8ad) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9f4,	// (0x000375b7) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9f4,	// (0x000375b7) list_double_graphic_heading_pane_vc_g

0x7606,	// (0x0002f1c9) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x7606,	// (0x0002f1c9) list_double_graphic_heading_pane_vc_t1

0x7622,	// (0x0002f1e5) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x7622,	// (0x0002f1e5) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9fb,	// (0x000375be) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9fb,	// (0x000375be) list_double_graphic_heading_pane_vc_t

0x73e4,	// (0x0002efa7) list_setting_pane_vc_g1_ParamLimits

0x73e4,	// (0x0002efa7) list_setting_pane_vc_g1

0x73f0,	// (0x0002efb3) list_setting_pane_vc_g2_ParamLimits

0x73f0,	// (0x0002efb3) list_setting_pane_vc_g2

0x0001,

0xf7ea,	// (0x000373ad) list_setting_pane_vc_g_ParamLimits

0xf7ea,	// (0x000373ad) list_setting_pane_vc_g

0x763a,	// (0x0002f1fd) list_setting_pane_vc_t1_ParamLimits

0x763a,	// (0x0002f1fd) list_setting_pane_vc_t1

0x7654,	// (0x0002f217) list_setting_pane_vc_t2_ParamLimits

0x7654,	// (0x0002f217) list_setting_pane_vc_t2

0x0001,

0xfa3e,	// (0x00037601) list_setting_pane_vc_t_ParamLimits

0xfa3e,	// (0x00037601) list_setting_pane_vc_t

0x7444,	// (0x0002f007) set_value_pane_cp_vc_ParamLimits

0x7444,	// (0x0002f007) set_value_pane_cp_vc

0x6cde,	// (0x0002e8a1) list_single_number_heading_pane_vc_g1_ParamLimits

0x6cde,	// (0x0002e8a1) list_single_number_heading_pane_vc_g1

0x6cea,	// (0x0002e8ad) list_single_number_heading_pane_vc_g2_ParamLimits

0x6cea,	// (0x0002e8ad) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ce,	// (0x00037191) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ce,	// (0x00037191) list_single_number_heading_pane_vc_g

0x73ba,	// (0x0002ef7d) list_single_number_heading_pane_vc_t1_ParamLimits

0x73ba,	// (0x0002ef7d) list_single_number_heading_pane_vc_t1

0x766c,	// (0x0002f22f) list_single_number_heading_pane_vc_t2_ParamLimits

0x766c,	// (0x0002f22f) list_single_number_heading_pane_vc_t2

0x7680,	// (0x0002f243) list_single_number_heading_pane_vc_t3_ParamLimits

0x7680,	// (0x0002f243) list_single_number_heading_pane_vc_t3

0x0002,

0xfa43,	// (0x00037606) list_single_number_heading_pane_vc_t_ParamLimits

0xfa43,	// (0x00037606) list_single_number_heading_pane_vc_t

0x7398,	// (0x0002ef5b) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x7398,	// (0x0002ef5b) list_single_graphic_heading_pane_vc_g1

0x6cde,	// (0x0002e8a1) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x6cde,	// (0x0002e8a1) list_single_graphic_heading_pane_vc_g4

0x6cea,	// (0x0002e8ad) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x6cea,	// (0x0002e8ad) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c4,	// (0x00037387) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c4,	// (0x00037387) list_single_graphic_heading_pane_vc_g

0x73ba,	// (0x0002ef7d) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x73ba,	// (0x0002ef7d) list_single_graphic_heading_pane_vc_t1

0x7692,	// (0x0002f255) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x7692,	// (0x0002f255) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa4a,	// (0x0003760d) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa4a,	// (0x0003760d) list_single_graphic_heading_pane_vc_t

0x6cde,	// (0x0002e8a1) list_double2_pane_vc_g1_ParamLimits

0x6cde,	// (0x0002e8a1) list_double2_pane_vc_g1

0x6cea,	// (0x0002e8ad) list_double2_pane_vc_g2_ParamLimits

0x6cea,	// (0x0002e8ad) list_double2_pane_vc_g2

0x0001,

0xf5ce,	// (0x00037191) list_double2_pane_vc_g_ParamLimits

0xf5ce,	// (0x00037191) list_double2_pane_vc_g

0x76a6,	// (0x0002f269) list_double2_pane_vc_t1_ParamLimits

0x76a6,	// (0x0002f269) list_double2_pane_vc_t1

0x76bc,	// (0x0002f27f) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x76bc,	// (0x0002f27f) list_double2_large_graphic_pane_vc_g1

0x6cde,	// (0x0002e8a1) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x6cde,	// (0x0002e8a1) list_double2_large_graphic_pane_vc_g2

0x6cea,	// (0x0002e8ad) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x6cea,	// (0x0002e8ad) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5eb,	// (0x000371ae) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5eb,	// (0x000371ae) list_double2_large_graphic_pane_vc_g

0x76c8,	// (0x0002f28b) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x76c8,	// (0x0002f28b) list_double2_large_graphic_pane_vc_t1

0x76de,	// (0x0002f2a1) list_double_time_pane_vc_g1_ParamLimits

0x76de,	// (0x0002f2a1) list_double_time_pane_vc_g1

0x76ea,	// (0x0002f2ad) list_double_time_pane_vc_g2_ParamLimits

0x76ea,	// (0x0002f2ad) list_double_time_pane_vc_g2

0x0001,

0xfa4f,	// (0x00037612) list_double_time_pane_vc_g_ParamLimits

0xfa4f,	// (0x00037612) list_double_time_pane_vc_g

0x76f6,	// (0x0002f2b9) list_double_time_pane_vc_t1_ParamLimits

0x76f6,	// (0x0002f2b9) list_double_time_pane_vc_t1

0x771a,	// (0x0002f2dd) list_double_time_pane_vc_t2_ParamLimits

0x771a,	// (0x0002f2dd) list_double_time_pane_vc_t2

0x7764,	// (0x0002f327) list_double_time_pane_vc_t3_ParamLimits

0x7764,	// (0x0002f327) list_double_time_pane_vc_t3

0x7776,	// (0x0002f339) list_double_time_pane_vc_t4_ParamLimits

0x7776,	// (0x0002f339) list_double_time_pane_vc_t4

0x0003,

0xfa54,	// (0x00037617) list_double_time_pane_vc_t_ParamLimits

0xfa54,	// (0x00037617) list_double_time_pane_vc_t

0x6cde,	// (0x0002e8a1) list_double_pane_vc_g1_ParamLimits

0x6cde,	// (0x0002e8a1) list_double_pane_vc_g1

0x6cea,	// (0x0002e8ad) list_double_pane_vc_g2_ParamLimits

0x6cea,	// (0x0002e8ad) list_double_pane_vc_g2

0x0001,

0xf5ce,	// (0x00037191) list_double_pane_vc_g_ParamLimits

0xf5ce,	// (0x00037191) list_double_pane_vc_g

0x778a,	// (0x0002f34d) list_double_pane_vc_t1_ParamLimits

0x778a,	// (0x0002f34d) list_double_pane_vc_t1

0x779e,	// (0x0002f361) list_double_pane_vc_t2_ParamLimits

0x779e,	// (0x0002f361) list_double_pane_vc_t2

0x0001,

0xfa5d,	// (0x00037620) list_double_pane_vc_t_ParamLimits

0xfa5d,	// (0x00037620) list_double_pane_vc_t

0x6cde,	// (0x0002e8a1) list_double_number_pane_vc_g1_ParamLimits

0x6cde,	// (0x0002e8a1) list_double_number_pane_vc_g1

0x6cea,	// (0x0002e8ad) list_double_number_pane_vc_g2_ParamLimits

0x6cea,	// (0x0002e8ad) list_double_number_pane_vc_g2

0x0001,

0xf5ce,	// (0x00037191) list_double_number_pane_vc_g_ParamLimits

0xf5ce,	// (0x00037191) list_double_number_pane_vc_g

0x77b6,	// (0x0002f379) list_double_number_pane_vc_t1_ParamLimits

0x77b6,	// (0x0002f379) list_double_number_pane_vc_t1

0x77ca,	// (0x0002f38d) list_double_number_pane_vc_t2_ParamLimits

0x77ca,	// (0x0002f38d) list_double_number_pane_vc_t2

0x779e,	// (0x0002f361) list_double_number_pane_vc_t3_ParamLimits

0x779e,	// (0x0002f361) list_double_number_pane_vc_t3

0x0002,

0xfa62,	// (0x00037625) list_double_number_pane_vc_t_ParamLimits

0xfa62,	// (0x00037625) list_double_number_pane_vc_t

0x77de,	// (0x0002f3a1) list_double_large_graphic_pane_vc_g1_ParamLimits

0x77de,	// (0x0002f3a1) list_double_large_graphic_pane_vc_g1

0x77ef,	// (0x0002f3b2) list_double_large_graphic_pane_vc_g2_ParamLimits

0x77ef,	// (0x0002f3b2) list_double_large_graphic_pane_vc_g2

0x6cea,	// (0x0002e8ad) list_double_large_graphic_pane_vc_g3_ParamLimits

0x6cea,	// (0x0002e8ad) list_double_large_graphic_pane_vc_g3

0x77fe,	// (0x0002f3c1) list_double_large_graphic_pane_vc_g4_ParamLimits

0x77fe,	// (0x0002f3c1) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa69,	// (0x0003762c) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa69,	// (0x0003762c) list_double_large_graphic_pane_vc_g

0x780a,	// (0x0002f3cd) list_double_large_graphic_pane_vc_t1_ParamLimits

0x780a,	// (0x0002f3cd) list_double_large_graphic_pane_vc_t1

0x7823,	// (0x0002f3e6) list_double_large_graphic_pane_vc_t2_ParamLimits

0x7823,	// (0x0002f3e6) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa72,	// (0x00037635) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa72,	// (0x00037635) list_double_large_graphic_pane_vc_t

0x6cde,	// (0x0002e8a1) list_double_heading_pane_vc_g1_ParamLimits

0x6cde,	// (0x0002e8a1) list_double_heading_pane_vc_g1

0x6cea,	// (0x0002e8ad) list_double_heading_pane_vc_g2_ParamLimits

0x6cea,	// (0x0002e8ad) list_double_heading_pane_vc_g2

0x0001,

0xf5ce,	// (0x00037191) list_double_heading_pane_vc_g_ParamLimits

0xf5ce,	// (0x00037191) list_double_heading_pane_vc_g

0x783c,	// (0x0002f3ff) list_double_heading_pane_vc_t1_ParamLimits

0x783c,	// (0x0002f3ff) list_double_heading_pane_vc_t1

0x73ba,	// (0x0002ef7d) list_double_heading_pane_vc_t2_ParamLimits

0x73ba,	// (0x0002ef7d) list_double_heading_pane_vc_t2

0x0001,

0xfa77,	// (0x0003763a) list_double_heading_pane_vc_t_ParamLimits

0xfa77,	// (0x0003763a) list_double_heading_pane_vc_t

0x7850,	// (0x0002f413) list_double_graphic_pane_vc_g1_ParamLimits

0x7850,	// (0x0002f413) list_double_graphic_pane_vc_g1

0x7860,	// (0x0002f423) list_double_graphic_pane_vc_g2_ParamLimits

0x7860,	// (0x0002f423) list_double_graphic_pane_vc_g2

0x786f,	// (0x0002f432) list_double_graphic_pane_vc_g3_ParamLimits

0x786f,	// (0x0002f432) list_double_graphic_pane_vc_g3

0x0002,

0xfa7c,	// (0x0003763f) list_double_graphic_pane_vc_g_ParamLimits

0xfa7c,	// (0x0003763f) list_double_graphic_pane_vc_g

0x787b,	// (0x0002f43e) list_double_graphic_pane_vc_t1_ParamLimits

0x787b,	// (0x0002f43e) list_double_graphic_pane_vc_t1

0x788f,	// (0x0002f452) list_double_graphic_pane_vc_t2_ParamLimits

0x788f,	// (0x0002f452) list_double_graphic_pane_vc_t2

0x0001,

0xfa83,	// (0x00037646) list_double_graphic_pane_vc_t_ParamLimits

0xfa83,	// (0x00037646) list_double_graphic_pane_vc_t

0x3db2,	// (0x0002b975) aid_size_cell_fastswap

0x866a,	// (0x0003022d) aid_size_cell_touch_ParamLimits

0x866a,	// (0x0003022d) aid_size_cell_touch

0x401f,	// (0x0002bbe2) popup_fast_swap_wide_window_ParamLimits

0x401f,	// (0x0002bbe2) popup_fast_swap_wide_window

0x87b5,	// (0x00030378) touch_pane_ParamLimits

0x87b5,	// (0x00030378) touch_pane

0xb7f2,	// (0x000333b5) button_value_adjust_pane_cp2

0x70ba,	// (0x0002ec7d) button_value_adjust_pane_cp4

0x70da,	// (0x0002ec9d) form_field_data_pane_cp2

0xf10c,	// (0x00036ccf) form_field_data_wide_pane_cp2

0xbb49,	// (0x0003370c) bg_scroll_pane_ParamLimits

0x43ab,	// (0x0002bf6e) scroll_handle_pane_ParamLimits

0x43bf,	// (0x0002bf82) scroll_sc2_down_pane_ParamLimits

0x43bf,	// (0x0002bf82) scroll_sc2_down_pane

0xbb7a,	// (0x0003373d) scroll_sc2_up_pane_ParamLimits

0xbb7a,	// (0x0003373d) scroll_sc2_up_pane

0x9fbf,	// (0x00031b82) grid_wheel_folder_pane_g1_ParamLimits

0x9fbf,	// (0x00031b82) grid_wheel_folder_pane_g1

0x457b,	// (0x0002c13e) clock_nsta_pane_cp2_ParamLimits

0x457b,	// (0x0002c13e) clock_nsta_pane_cp2

0xb96b,	// (0x0003352e) listscroll_midp_pane_ParamLimits

0x8ab0,	// (0x00030673) midp_canvas_pane

0xc3eb,	// (0x00033fae) nsta_clock_indic_pane

0xc413,	// (0x00033fd6) listscroll_form_pane_vc

0xc41b,	// (0x00033fde) listscroll_set_pane_vc_ParamLimits

0xc41b,	// (0x00033fde) listscroll_set_pane_vc

0x94ad,	// (0x00031070) clock_nsta_pane

0x94d7,	// (0x0003109a) indicator_nsta_pane

0xc549,	// (0x0003410c) bg_popup_sub_pane_cp2_ParamLimits

0xc55d,	// (0x00034120) find_pane_cp2_ParamLimits

0xc55d,	// (0x00034120) find_pane_cp2

0xc573,	// (0x00034136) grid_toobar_pane_ParamLimits

0xc653,	// (0x00034216) list_form_gen_pane_vc_ParamLimits

0xc653,	// (0x00034216) list_form_gen_pane_vc

0xc669,	// (0x0003422c) scroll_pane_cp8_vc_ParamLimits

0xc669,	// (0x0003422c) scroll_pane_cp8_vc

0xc6e5,	// (0x000342a8) data_form_wide_pane_vc_ParamLimits

0xc6e5,	// (0x000342a8) data_form_wide_pane_vc

0xc6f1,	// (0x000342b4) form_field_data_wide_pane_vc_g1

0xc6f9,	// (0x000342bc) form_field_data_wide_pane_vc_t1_ParamLimits

0xc6f9,	// (0x000342bc) form_field_data_wide_pane_vc_t1

0xb806,	// (0x000333c9) input_focus_pane_cp6_vc_ParamLimits

0xb806,	// (0x000333c9) input_focus_pane_cp6_vc

0x98c9,	// (0x0003148c) list_midp_pane_ParamLimits

0xd7ab,	// (0x0003536e) scroll_pane_cp16_ParamLimits

0xd7ab,	// (0x0003536e) scroll_pane_cp16

0xc98f,	// (0x00034552) button_value_adjust_pane_ParamLimits

0xc98f,	// (0x00034552) button_value_adjust_pane

0x9c61,	// (0x00031824) button_value_adjust_pane_cp6_ParamLimits

0x9c61,	// (0x00031824) button_value_adjust_pane_cp6

0x9d77,	// (0x0003193a) settings_code_pane_cp_ParamLimits

0x9d77,	// (0x0003193a) settings_code_pane_cp

0xb159,	// (0x00032d1c) cell_touch_pane_g1

0xb159,	// (0x00032d1c) cell_touch_pane_g2

0x0001,

0xf709,	// (0x000372cc) cell_touch_pane_g

0x9e9e,	// (0x00031a61) cell_touch_pane_cp_ParamLimits

0x9e9e,	// (0x00031a61) cell_touch_pane_cp

0x9eba,	// (0x00031a7d) cell_touch_pane_ParamLimits

0x9eba,	// (0x00031a7d) cell_touch_pane

0xb159,	// (0x00032d1c) scroll_sc2_down_pane_g1

0xb159,	// (0x00032d1c) scroll_sc2_up_pane_g1

0xb163,	// (0x00032d26) bg_set_opt_pane_cp4_vc

0xdb7f,	// (0x00035742) list_set_graphic_pane_vc_g1_ParamLimits

0xdb7f,	// (0x00035742) list_set_graphic_pane_vc_g1

0xdb8b,	// (0x0003574e) list_set_graphic_pane_vc_g2_ParamLimits

0xdb8b,	// (0x0003574e) list_set_graphic_pane_vc_g2

0x0001,

0xfa00,	// (0x000375c3) list_set_graphic_pane_vc_g_ParamLimits

0xfa00,	// (0x000375c3) list_set_graphic_pane_vc_g

0xdb97,	// (0x0003575a) text_primary_small_cp13_vc_ParamLimits

0xdb97,	// (0x0003575a) text_primary_small_cp13_vc

0xd798,	// (0x0003535b) list_set_graphic_pane_vc_ParamLimits

0xd798,	// (0x0003535b) list_set_graphic_pane_vc

0xb163,	// (0x00032d26) input_focus_pane_cp2_vc

0xb159,	// (0x00032d1c) setting_code_pane_vc_g1

0xb1d6,	// (0x00032d99) setting_code_pane_vc_t1

0xdbaf,	// (0x00035772) set_text_pane_vc_t1_ParamLimits

0xdbaf,	// (0x00035772) set_text_pane_vc_t1

0xb163,	// (0x00032d26) input_focus_pane_cp1_vc

0xdbcc,	// (0x0003578f) list_set_text_pane_vc

0xb159,	// (0x00032d1c) setting_text_pane_vc_g1

0xb163,	// (0x00032d26) bg_set_opt_pane_cp2_vc

0xb1cd,	// (0x00032d90) setting_slider_graphic_pane_vc_g1

0xdbd6,	// (0x00035799) setting_slider_graphic_pane_vc_t1

0xdbe6,	// (0x000357a9) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa05,	// (0x000375c8) setting_slider_graphic_pane_vc_t

0xdbf6,	// (0x000357b9) slider_set_pane_cp_vc

0xdbfe,	// (0x000357c1) slider_set_pane_vc_g1

0xdc07,	// (0x000357ca) slider_set_pane_vc_g2

0x0006,

0xfa0a,	// (0x000375cd) slider_set_pane_vc_g

0xb861,	// (0x00033424) set_opt_bg_pane_g1_copy1

0xb869,	// (0x0003342c) set_opt_bg_pane_g2_copy1

0xdc33,	// (0x000357f6) set_opt_bg_pane_g3_copy1

0xb879,	// (0x0003343c) set_opt_bg_pane_g4_copy1

0xb881,	// (0x00033444) set_opt_bg_pane_g5_copy1

0xb889,	// (0x0003344c) set_opt_bg_pane_g6_copy1

0xdc3b,	// (0x000357fe) set_opt_bg_pane_g7_copy1

0xdc45,	// (0x00035808) set_opt_bg_pane_g8_copy1

0xdc4d,	// (0x00035810) set_opt_bg_pane_g9_copy1

0xb163,	// (0x00032d26) bg_set_opt_pane_cp_vc

0xdc55,	// (0x00035818) setting_slider_pane_vc_t1

0xdc64,	// (0x00035827) setting_slider_pane_vc_t2

0xdc74,	// (0x00035837) setting_slider_pane_vc_t3

0x0002,

0xfa19,	// (0x000375dc) setting_slider_pane_vc_t

0xdc84,	// (0x00035847) slider_set_pane_vc

0x4ecf,	// (0x0002ca92) volume_set_pane_vc_g1

0x51be,	// (0x0002cd81) volume_set_pane_vc_g2

0x51c7,	// (0x0002cd8a) volume_set_pane_vc_g3

0x51d0,	// (0x0002cd93) volume_set_pane_vc_g4

0x51d9,	// (0x0002cd9c) volume_set_pane_vc_g5

0x51e2,	// (0x0002cda5) volume_set_pane_vc_g6

0x4efc,	// (0x0002cabf) volume_set_pane_vc_g7

0x51eb,	// (0x0002cdae) volume_set_pane_vc_g8

0x51f4,	// (0x0002cdb7) volume_set_pane_vc_g9

0x51fd,	// (0x0002cdc0) volume_set_pane_vc_g10

0x0009,

0xfa20,	// (0x000375e3) volume_set_pane_vc_g

0xdc8c,	// (0x0003584f) volume_set_pane_vc

0xdc94,	// (0x00035857) button_value_adjust_pane_cp1_vc

0xdc9e,	// (0x00035861) list_highlight_pane_cp2_vc

0xdca7,	// (0x0003586a) list_set_pane_vc_ParamLimits

0xdca7,	// (0x0003586a) list_set_pane_vc

0xdd05,	// (0x000358c8) main_pane_set_vc_t1_ParamLimits

0xdd05,	// (0x000358c8) main_pane_set_vc_t1

0xdd1a,	// (0x000358dd) main_pane_set_vc_t2_ParamLimits

0xdd1a,	// (0x000358dd) main_pane_set_vc_t2

0xdd2c,	// (0x000358ef) main_pane_set_vc_t3_ParamLimits

0xdd2c,	// (0x000358ef) main_pane_set_vc_t3

0xdd3e,	// (0x00035901) main_pane_set_vc_t4_ParamLimits

0xdd3e,	// (0x00035901) main_pane_set_vc_t4

0x0003,

0xfa35,	// (0x000375f8) main_pane_set_vc_t_ParamLimits

0xfa35,	// (0x000375f8) main_pane_set_vc_t

0xdd50,	// (0x00035913) setting_code_pane_vc_ParamLimits

0xdd50,	// (0x00035913) setting_code_pane_vc

0xdd5f,	// (0x00035922) setting_slider_graphic_pane_vc

0xdd5f,	// (0x00035922) setting_slider_pane_vc

0xdd5f,	// (0x00035922) setting_text_pane_vc

0xdd5f,	// (0x00035922) setting_volume_pane_vc

0xdd67,	// (0x0003592a) scroll_pane_cp121_vc

0xb7e0,	// (0x000333a3) set_content_pane_vc

0xdd6f,	// (0x00035932) button_value_adjust_pane_g1

0xdd78,	// (0x0003593b) button_value_adjust_pane_g2

0x0001,

0xfa88,	// (0x0003764b) button_value_adjust_pane_g

0xdd81,	// (0x00035944) form_field_slider_wide_pane_vc_t1_ParamLimits

0xdd81,	// (0x00035944) form_field_slider_wide_pane_vc_t1

0xdd95,	// (0x00035958) form_field_slider_wide_pane_vc_t2_ParamLimits

0xdd95,	// (0x00035958) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa8d,	// (0x00037650) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa8d,	// (0x00037650) form_field_slider_wide_pane_vc_t

0xb1b1,	// (0x00032d74) input_focus_pane_cp10_vc_ParamLimits

0xb1b1,	// (0x00032d74) input_focus_pane_cp10_vc

0xddc1,	// (0x00035984) slider_cont_pane_cp1_vc_ParamLimits

0xddc1,	// (0x00035984) slider_cont_pane_cp1_vc

0xddd1,	// (0x00035994) slider_form_pane_g1_cp2

0xdc07,	// (0x000357ca) slider_form_pane_g2_cp2

0xddfe,	// (0x000359c1) form_field_slider_pane_vc_t3

0xde0c,	// (0x000359cf) form_field_slider_pane_vc_t4

0xde1a,	// (0x000359dd) slider_form_pane_vc_ParamLimits

0xde1a,	// (0x000359dd) slider_form_pane_vc

0xde27,	// (0x000359ea) form_field_slider_pane_vc_t1_ParamLimits

0xde27,	// (0x000359ea) form_field_slider_pane_vc_t1

0xdd95,	// (0x00035958) form_field_slider_pane_vc_t2_ParamLimits

0xdd95,	// (0x00035958) form_field_slider_pane_vc_t2

0x0001,

0xfa9f,	// (0x00037662) form_field_slider_pane_vc_t_ParamLimits

0xfa9f,	// (0x00037662) form_field_slider_pane_vc_t

0xb1b1,	// (0x00032d74) input_focus_pane_cp9_vc_ParamLimits

0xb1b1,	// (0x00032d74) input_focus_pane_cp9_vc

0xde43,	// (0x00035a06) slider_cont_pane_vc_ParamLimits

0xde43,	// (0x00035a06) slider_cont_pane_vc

0xde55,	// (0x00035a18) list_form_graphic_pane_cp_vc_ParamLimits

0xde55,	// (0x00035a18) list_form_graphic_pane_cp_vc

0xc6f1,	// (0x000342b4) form_field_popup_wide_pane_vc_g1

0xde6a,	// (0x00035a2d) form_field_popup_wide_pane_vc_t1_ParamLimits

0xde6a,	// (0x00035a2d) form_field_popup_wide_pane_vc_t1

0xb806,	// (0x000333c9) input_focus_pane_cp8_vc_ParamLimits

0xb806,	// (0x000333c9) input_focus_pane_cp8_vc

0xdeaf,	// (0x00035a72) list_form_wide_pane_vc_ParamLimits

0xdeaf,	// (0x00035a72) list_form_wide_pane_vc

0xdebb,	// (0x00035a7e) list_form_graphic_pane_vc_g1

0xdec3,	// (0x00035a86) list_form_graphic_pane_vc_t1_ParamLimits

0xdec3,	// (0x00035a86) list_form_graphic_pane_vc_t1

0xb1bf,	// (0x00032d82) list_highlight_pane_cp5_vc_ParamLimits

0xb1bf,	// (0x00032d82) list_highlight_pane_cp5_vc

0xdedf,	// (0x00035aa2) list_form_graphic_pane_vc_ParamLimits

0xdedf,	// (0x00035aa2) list_form_graphic_pane_vc

0xc6f1,	// (0x000342b4) form_field_popup_pane_vc_g1

0xdef5,	// (0x00035ab8) form_field_popup_pane_vc_t1_ParamLimits

0xdef5,	// (0x00035ab8) form_field_popup_pane_vc_t1

0xb806,	// (0x000333c9) input_focus_pane_cp7_vc_ParamLimits

0xb806,	// (0x000333c9) input_focus_pane_cp7_vc

0xdf0c,	// (0x00035acf) list_form_pane_vc_ParamLimits

0xdf0c,	// (0x00035acf) list_form_pane_vc

0xdf18,	// (0x00035adb) data_form_pane_vc_t1_ParamLimits

0xdf18,	// (0x00035adb) data_form_pane_vc_t1

0xb861,	// (0x00033424) input_focus_pane_vc_g1

0xb869,	// (0x0003342c) input_focus_pane_vc_g2

0xb871,	// (0x00033434) input_focus_pane_vc_g3

0xb879,	// (0x0003343c) input_focus_pane_vc_g4

0xb881,	// (0x00033444) input_focus_pane_vc_g5

0xb889,	// (0x0003344c) input_focus_pane_vc_g6

0xb891,	// (0x00033454) input_focus_pane_vc_g7

0xb899,	// (0x0003345c) input_focus_pane_vc_g8

0xb8a1,	// (0x00033464) input_focus_pane_vc_g9

0xb159,	// (0x00032d1c) input_focus_pane_vc_g10

0x0009,

0xf692,	// (0x00037255) input_focus_pane_vc_g

0xc6e5,	// (0x000342a8) data_form_pane_vc_ParamLimits

0xc6e5,	// (0x000342a8) data_form_pane_vc

0xc6f1,	// (0x000342b4) form_field_data_pane_vc_g1

0xdf33,	// (0x00035af6) form_field_data_pane_vc_t1_ParamLimits

0xdf33,	// (0x00035af6) form_field_data_pane_vc_t1

0xb806,	// (0x000333c9) input_focus_pane_vc_ParamLimits

0xb806,	// (0x000333c9) input_focus_pane_vc

0xdf4d,	// (0x00035b10) button_value_adjust_pane_cp3_vc

0xdf55,	// (0x00035b18) button_value_adjust_pane_cp5_vc

0xdf5d,	// (0x00035b20) form_field_data_pane_vc_ParamLimits

0xdf5d,	// (0x00035b20) form_field_data_pane_vc

0xdf74,	// (0x00035b37) form_field_data_pane_vc_cp2

0xdf7c,	// (0x00035b3f) form_field_data_wide_pane_vc_ParamLimits

0xdf7c,	// (0x00035b3f) form_field_data_wide_pane_vc

0xdf92,	// (0x00035b55) form_field_data_wide_pane_vc_cp2

0xdf9a,	// (0x00035b5d) form_field_popup_pane_vc_ParamLimits

0xdf9a,	// (0x00035b5d) form_field_popup_pane_vc

0xdfb1,	// (0x00035b74) form_field_popup_wide_pane_vc_ParamLimits

0xdfb1,	// (0x00035b74) form_field_popup_wide_pane_vc

0xdfc7,	// (0x00035b8a) form_field_slider_pane_vc_ParamLimits

0xdfc7,	// (0x00035b8a) form_field_slider_pane_vc

0xdfda,	// (0x00035b9d) form_field_slider_wide_pane_vc_ParamLimits

0xdfda,	// (0x00035b9d) form_field_slider_wide_pane_vc

0x9ed8,	// (0x00031a9b) grid_touch_1_pane_ParamLimits

0x9ed8,	// (0x00031a9b) grid_touch_1_pane

0x9eec,	// (0x00031aaf) grid_touch_2_pane_ParamLimits

0x9eec,	// (0x00031aaf) grid_touch_2_pane

0xdfed,	// (0x00035bb0) touch_pane_g1_ParamLimits

0xdfed,	// (0x00035bb0) touch_pane_g1

0xdffb,	// (0x00035bbe) cell_app_pane_cp_wide_ParamLimits

0xdffb,	// (0x00035bbe) cell_app_pane_cp_wide

0xe00c,	// (0x00035bcf) grid_popup_fast_wide_pane_ParamLimits

0xe00c,	// (0x00035bcf) grid_popup_fast_wide_pane

0xe020,	// (0x00035be3) scroll_pane_cp19_ParamLimits

0xe020,	// (0x00035be3) scroll_pane_cp19

0xb163,	// (0x00032d26) bg_popup_window_pane_cp20

0xe034,	// (0x00035bf7) listscroll_popup_fast_wide_pane

0xc6a3,	// (0x00034266) grid_indicator_nsta_pane

0xe03c,	// (0x00035bff) clock_nsta_pane_g1

0xe045,	// (0x00035c08) clock_nsta_pane_t1

0x9f16,	// (0x00031ad9) cell_indicator_nsta_pane_ParamLimits

0x9f16,	// (0x00031ad9) cell_indicator_nsta_pane

0xdfed,	// (0x00035bb0) cell_indicator_nsta_pane_g1

0x9f33,	// (0x00031af6) cell_indicator_nsta_pane_g2

0x0001,

0xfab0,	// (0x00037673) cell_indicator_nsta_pane_g

0xe061,	// (0x00035c24) clock_nsta_pane_cp

0xe069,	// (0x00035c2c) indicator_nsta_pane_cp

0xe071,	// (0x00035c34) nsta_clock_indic_pane_g1

0xb1fb,	// (0x00032dbe) grid_indicator_pane

0xbc6f,	// (0x00033832) scroll_pane_cp29

0x44ca,	// (0x0002c08d) indicator_nsta_pane_cp2_ParamLimits

0x44ca,	// (0x0002c08d) indicator_nsta_pane_cp2

0xb1bf,	// (0x00032d82) main_apps_wheel_pane

0xc832,	// (0x000343f5) form_midp_field_text_pane_ParamLimits

0xc961,	// (0x00034524) scroll_bar_cp050_ParamLimits

0xe0d2,	// (0x00035c95) cell_indicator_pane_ParamLimits

0xe0d2,	// (0x00035c95) cell_indicator_pane

0xe0ed,	// (0x00035cb0) cell_indicator_pane_g1

0x9f49,	// (0x00031b0c) grid_wheel_folder_pane_ParamLimits

0x9f49,	// (0x00031b0c) grid_wheel_folder_pane

0x9f57,	// (0x00031b1a) list_wheel_apps_pane_ParamLimits

0x9f57,	// (0x00031b1a) list_wheel_apps_pane

0x9f65,	// (0x00031b28) main_apps_wheel_pane_g1_ParamLimits

0x9f65,	// (0x00031b28) main_apps_wheel_pane_g1

0x9f71,	// (0x00031b34) main_apps_wheel_pane_g2_ParamLimits

0x9f71,	// (0x00031b34) main_apps_wheel_pane_g2

0x0001,

0xfacc,	// (0x0003768f) main_apps_wheel_pane_g_ParamLimits

0xfacc,	// (0x0003768f) main_apps_wheel_pane_g

0x9f7f,	// (0x00031b42) main_apps_wheel_pane_t1_ParamLimits

0x9f7f,	// (0x00031b42) main_apps_wheel_pane_t1

0x9f93,	// (0x00031b56) list_wheel_apps_pane_g1

0x9f9b,	// (0x00031b5e) list_wheel_apps_pane_g2

0x9fa3,	// (0x00031b66) list_wheel_apps_pane_g3

0x9fab,	// (0x00031b6e) list_wheel_apps_pane_g4

0x9fb5,	// (0x00031b78) list_wheel_apps_pane_g5

0x0004,

0xfad1,	// (0x00037694) list_wheel_apps_pane_g

0xc07b,	// (0x00033c3e) navi_icon_text_pane

0x93a1,	// (0x00030f64) aid_fill_nsta

0xe0f7,	// (0x00035cba) navi_icon_text_pane_g1

0xe103,	// (0x00035cc6) navi_icon_text_pane_t1

0xbf75,	// (0x00033b38) list_set_graphic_pane_t1_ParamLimits

0xbf75,	// (0x00033b38) list_set_graphic_pane_t1

0xd079,	// (0x00034c3c) popup_midp_note_alarm_window_t6_ParamLimits

0xd079,	// (0x00034c3c) popup_midp_note_alarm_window_t6

0xd08b,	// (0x00034c4e) popup_midp_note_alarm_window_t7_ParamLimits

0xd08b,	// (0x00034c4e) popup_midp_note_alarm_window_t7

0xd09d,	// (0x00034c60) popup_midp_note_alarm_window_t8_ParamLimits

0xd09d,	// (0x00034c60) popup_midp_note_alarm_window_t8

0xd0af,	// (0x00034c72) popup_midp_note_alarm_window_t9_ParamLimits

0xd0af,	// (0x00034c72) popup_midp_note_alarm_window_t9

0xd0c1,	// (0x00034c84) popup_midp_note_alarm_window_t10_ParamLimits

0xd0c1,	// (0x00034c84) popup_midp_note_alarm_window_t10

0xd0d3,	// (0x00034c96) popup_midp_note_alarm_window_t11_ParamLimits

0xd0d3,	// (0x00034c96) popup_midp_note_alarm_window_t11

0xd0e5,	// (0x00034ca8) scroll_pane_cp17_ParamLimits

0xd0e5,	// (0x00034ca8) scroll_pane_cp17

0x4ecf,	// (0x0002ca92) volume_small_pane_cp_g1

0x5206,	// (0x0002cdc9) volume_small_pane_cp_g2

0x520f,	// (0x0002cdd2) volume_small_pane_cp_g3

0x4ee1,	// (0x0002caa4) volume_small_pane_cp_g4

0x5218,	// (0x0002cddb) volume_small_pane_cp_g5

0x51d9,	// (0x0002cd9c) volume_small_pane_cp_g6

0x4ef3,	// (0x0002cab6) volume_small_pane_cp_g7

0x5221,	// (0x0002cde4) volume_small_pane_cp_g8

0x522a,	// (0x0002cded) volume_small_pane_cp_g9

0x4f05,	// (0x0002cac8) volume_small_pane_cp_g10

0xc201,	// (0x00033dc4) midp_ticker_pane_g1_ParamLimits

0xc20d,	// (0x00033dd0) midp_ticker_pane_g2_ParamLimits

0xf75e,	// (0x00037321) midp_ticker_pane_g_ParamLimits

0xc219,	// (0x00033ddc) midp_ticker_pane_t1_ParamLimits

0x93c5,	// (0x00030f88) aid_fill_nsta_2

0xc94d,	// (0x00034510) list_form2_midp_pane

0xd71d,	// (0x000352e0) midp_editing_number_pane_ParamLimits

0xd72c,	// (0x000352ef) midp_ticker_pane_ParamLimits

0xe115,	// (0x00035cd8) form2_midp_field_pane

0xe11d,	// (0x00035ce0) scroll_pane_cp51

0xe13d,	// (0x00035d00) form2_midp_button_pane_ParamLimits

0xe13d,	// (0x00035d00) form2_midp_button_pane

0xe14f,	// (0x00035d12) form2_midp_content_pane_ParamLimits

0xe14f,	// (0x00035d12) form2_midp_content_pane

0xe169,	// (0x00035d2c) form2_midp_field_choice_group_pane

0xe171,	// (0x00035d34) form2_midp_field_pane_g1

0xe179,	// (0x00035d3c) form2_midp_field_pane_g2

0xe181,	// (0x00035d44) form2_midp_field_pane_g3

0xe189,	// (0x00035d4c) form2_midp_field_pane_g4

0x0003,

0xfaf6,	// (0x000376b9) form2_midp_field_pane_g

0xe191,	// (0x00035d54) form2_midp_gauge_slider_pane

0xe199,	// (0x00035d5c) form2_midp_gauge_wait_pane

0xe1a1,	// (0x00035d64) form2_midp_image_pane_ParamLimits

0xe1a1,	// (0x00035d64) form2_midp_image_pane

0xe1bc,	// (0x00035d7f) form2_midp_label_pane_ParamLimits

0xe1bc,	// (0x00035d7f) form2_midp_label_pane

0x9fe8,	// (0x00031bab) form2_midp_label_pane_cp_ParamLimits

0x9fe8,	// (0x00031bab) form2_midp_label_pane_cp

0xe1d5,	// (0x00035d98) form2_midp_string_pane_ParamLimits

0xe1d5,	// (0x00035d98) form2_midp_string_pane

0x78a7,	// (0x0002f46a) form2_midp_text_pane_ParamLimits

0x78a7,	// (0x0002f46a) form2_midp_text_pane

0xe1e7,	// (0x00035daa) form2_midp_time_pane

0xe1f7,	// (0x00035dba) input_focus_pane_cp51_ParamLimits

0xe1f7,	// (0x00035dba) input_focus_pane_cp51

0xe20f,	// (0x00035dd2) form2_midp_label_pane_t1_ParamLimits

0xe20f,	// (0x00035dd2) form2_midp_label_pane_t1

0x78c0,	// (0x0002f483) form2_mdip_text_pane_t1_ParamLimits

0x78c0,	// (0x0002f483) form2_mdip_text_pane_t1

0x78de,	// (0x0002f4a1) form2_midp_time_pane_t1

0xe257,	// (0x00035e1a) form2_midp_gauge_slider_pane_t1

0xa009,	// (0x00031bcc) form2_midp_gauge_slider_pane_t2

0xa01d,	// (0x00031be0) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaff,	// (0x000376c2) form2_midp_gauge_slider_pane_t

0xe269,	// (0x00035e2c) form2_midp_slider_pane

0xe275,	// (0x00035e38) form2_midp_gauge_wait_pane_t1

0xe283,	// (0x00035e46) form2_midp_wait_pane_ParamLimits

0xe283,	// (0x00035e46) form2_midp_wait_pane

0xa031,	// (0x00031bf4) list_single_2graphic_pane_cp4_ParamLimits

0xa031,	// (0x00031bf4) list_single_2graphic_pane_cp4

0x984f,	// (0x00031412) list_single_midp_graphic_pane_cp_ParamLimits

0x984f,	// (0x00031412) list_single_midp_graphic_pane_cp

0xb163,	// (0x00032d26) list_highlight_pane_cp20

0xe2af,	// (0x00035e72) list_single_2graphic_pane_g1_cp4

0xda84,	// (0x00035647) list_single_2graphic_pane_g2_cp4

0xe2b7,	// (0x00035e7a) list_single_2graphic_pane_t1_cp4

0xb1bf,	// (0x00032d82) list_highlight_pane_cp21

0xe2c6,	// (0x00035e89) list_single_midp_graphic_pane_g4_cp

0xe2d5,	// (0x00035e98) list_single_midp_graphic_pane_t1_cp

0xa047,	// (0x00031c0a) form2_mdip_string_pane_t1_ParamLimits

0xa047,	// (0x00031c0a) form2_mdip_string_pane_t1

0xb163,	// (0x00032d26) bg_wml_button_pane_cp2

0xb159,	// (0x00032d1c) form2_midp_image_pane_g1

0x6eb1,	// (0x0002ea74) list_double_large_graphic_pane_g5_ParamLimits

0x6eb1,	// (0x0002ea74) list_double_large_graphic_pane_g5

0xb96b,	// (0x0003352e) midp_form_pane_ParamLimits

0xb1bf,	// (0x00032d82) main_apps_wheel_pane_ParamLimits

0x90f7,	// (0x00030cba) popup_preview_window_ParamLimits

0x90f7,	// (0x00030cba) popup_preview_window

0x4d3a,	// (0x0002c8fd) popup_touch_info_window_ParamLimits

0x4d3a,	// (0x0002c8fd) popup_touch_info_window

0x4d58,	// (0x0002c91b) popup_touch_menu_window_ParamLimits

0x4d58,	// (0x0002c91b) popup_touch_menu_window

0xb14f,	// (0x00032d12) bg_popup_sub_pane_cp6

0xe2ea,	// (0x00035ead) list_touch_menu_pane

0xe2f2,	// (0x00035eb5) list_single_touch_menu_pane_ParamLimits

0xe2f2,	// (0x00035eb5) list_single_touch_menu_pane

0xe306,	// (0x00035ec9) list_single_touch_menu_pane_t1

0xb1bf,	// (0x00032d82) bg_popup_sub_pane_cp7_ParamLimits

0xb1bf,	// (0x00032d82) bg_popup_sub_pane_cp7

0xe314,	// (0x00035ed7) heading_sub_pane

0xe31c,	// (0x00035edf) list_touch_info_pane_ParamLimits

0xe31c,	// (0x00035edf) list_touch_info_pane

0xe32b,	// (0x00035eee) list_single_touch_info_pane_ParamLimits

0xe32b,	// (0x00035eee) list_single_touch_info_pane

0xe33d,	// (0x00035f00) list_single_touch_info_pane_t1

0xe34b,	// (0x00035f0e) list_single_touch_info_pane_t2

0x0001,

0xfb0d,	// (0x000376d0) list_single_touch_info_pane_t

0xc1d7,	// (0x00033d9a) bg_popup_heading_pane_cp

0xe359,	// (0x00035f1c) heading_sub_pane_t1

0xc67f,	// (0x00034242) bg_popup_preview_window_pane_cp_ParamLimits

0xc67f,	// (0x00034242) bg_popup_preview_window_pane_cp

0xe314,	// (0x00035ed7) heading_preview_pane

0xe31c,	// (0x00035edf) list_preview_pane_ParamLimits

0xe31c,	// (0x00035edf) list_preview_pane

0xe367,	// (0x00035f2a) popup_preview_window_g1

0xe32b,	// (0x00035eee) list_single_preview_pane_ParamLimits

0xe32b,	// (0x00035eee) list_single_preview_pane

0xe36f,	// (0x00035f32) list_single_preview_pane_g1

0xe377,	// (0x00035f3a) list_single_preview_pane_t1

0xe33d,	// (0x00035f00) list_single_preview_pane_t2

0x0001,

0xfb12,	// (0x000376d5) list_single_preview_pane_t

0xe385,	// (0x00035f48) bg_popup_heading_pane_cp2_ParamLimits

0xe385,	// (0x00035f48) bg_popup_heading_pane_cp2

0xe39b,	// (0x00035f5e) heading_preview_pane_g1

0xe3a3,	// (0x00035f66) heading_preview_pane_t1_ParamLimits

0xe3a3,	// (0x00035f66) heading_preview_pane_t1

0xb212,	// (0x00032dd5) soft_indicator_pane_t1_ParamLimits

0xb779,	// (0x0003333c) scroll_pane_ParamLimits

0xbb68,	// (0x0003372b) scroll_sc2_left_pane

0xbb71,	// (0x00033734) scroll_sc2_right_pane

0xbb90,	// (0x00033753) scroll_bg_pane_g1_ParamLimits

0xbba5,	// (0x00033768) scroll_bg_pane_g2_ParamLimits

0xbbbd,	// (0x00033780) scroll_bg_pane_g3_ParamLimits

0xf6e9,	// (0x000372ac) scroll_bg_pane_g_ParamLimits

0xbb90,	// (0x00033753) scroll_handle_pane_g1_ParamLimits

0xbbdf,	// (0x000337a2) scroll_handle_pane_g2_ParamLimits

0xbbbd,	// (0x00033780) scroll_handle_pane_g3_ParamLimits

0xf6f0,	// (0x000372b3) scroll_handle_pane_g_ParamLimits

0x480a,	// (0x0002c3cd) popup_choice_list_window_ParamLimits

0x480a,	// (0x0002c3cd) popup_choice_list_window

0xc555,	// (0x00034118) choice_list_pane

0xc5d7,	// (0x0003419a) cell_toolbar_pane_t1

0xc5ff,	// (0x000341c2) toolbar_button_pane_ParamLimits

0xd494,	// (0x00035057) ai_gene_pane_1_t2_ParamLimits

0xd494,	// (0x00035057) ai_gene_pane_1_t2

0x0001,

0xf913,	// (0x000374d6) ai_gene_pane_1_t_ParamLimits

0xf913,	// (0x000374d6) ai_gene_pane_1_t

0xe3c0,	// (0x00035f83) scroll_sc2_left_pane_g1

0xe3c0,	// (0x00035f83) scroll_sc2_right_pane_g1

0xb96b,	// (0x0003352e) bg_popup_sub_pane_cp10

0xe3ca,	// (0x00035f8d) list_choice_list_pane

0xe3e3,	// (0x00035fa6) list_single_choice_list_pane_ParamLimits

0xe3e3,	// (0x00035fa6) list_single_choice_list_pane

0xe3f6,	// (0x00035fb9) list_single_choice_list_pane_g1

0xb956,	// (0x00033519) list_single_choice_list_pane_t1_ParamLimits

0xb956,	// (0x00033519) list_single_choice_list_pane_t1

0xe3fe,	// (0x00035fc1) choice_list_pane_g1

0xe406,	// (0x00035fc9) choice_list_pane_t1

0xb14f,	// (0x00032d12) input_focus_pane_cp11

0xbadd,	// (0x000336a0) title_pane_stacon_g2_ParamLimits

0xbadd,	// (0x000336a0) title_pane_stacon_g2

0x0002,

0xf6cf,	// (0x00037292) title_pane_stacon_g_ParamLimits

0xf6cf,	// (0x00037292) title_pane_stacon_g

0xc1d7,	// (0x00033d9a) cursor_press_pane

0x8db0,	// (0x00030973) popup_fep_hwr_window_ParamLimits

0x8db0,	// (0x00030973) popup_fep_hwr_window

0x492a,	// (0x0002c4ed) popup_fep_vkb_window_ParamLimits

0x492a,	// (0x0002c4ed) popup_fep_vkb_window

0xe414,	// (0x00035fd7) cursor_press_pane_g1

0x0002,

0xfb3b,	// (0x000376fe) fep_vkb_side_pane_g_ParamLimits

0x526c,	// (0x0002ce2f) fep_hwr_candidate_pane_ParamLimits

0x526c,	// (0x0002ce2f) fep_hwr_candidate_pane

0x5296,	// (0x0002ce59) fep_hwr_side_pane_ParamLimits

0x5296,	// (0x0002ce59) fep_hwr_side_pane

0x52b6,	// (0x0002ce79) fep_hwr_top_pane_ParamLimits

0x52b6,	// (0x0002ce79) fep_hwr_top_pane

0x52ce,	// (0x0002ce91) fep_hwr_write_pane_ParamLimits

0x52ce,	// (0x0002ce91) fep_hwr_write_pane

0xfb3b,	// (0x000376fe) fep_vkb_side_pane_g

0xe41c,	// (0x00035fdf) fep_hwr_top_pane_g1

0xe42e,	// (0x00035ff1) fep_hwr_top_pane_g2

0x5308,	// (0x0002cecb) fep_hwr_top_pane_g3

0x0002,

0xfb17,	// (0x000376da) fep_hwr_top_pane_g

0x531d,	// (0x0002cee0) fep_hwr_top_text_pane

0xbd35,	// (0x000338f8) fep_hwr_top_text_pane_g1

0xe464,	// (0x00036027) fep_hwr_top_text_pane_t1

0x5413,	// (0x0002cfd6) fep_hwr_candidate_pane_g1

0xe5d1,	// (0x00036194) fep_vkb_keypad_pane_g3_ParamLimits

0xe5d1,	// (0x00036194) fep_vkb_keypad_pane_g3

0xe5f9,	// (0x000361bc) fep_vkb_keypad_pane_g4_ParamLimits

0xe5f9,	// (0x000361bc) fep_vkb_keypad_pane_g4

0xe668,	// (0x0003622b) fep_vkb_bottom_pane_g2_ParamLimits

0xe668,	// (0x0003622b) fep_vkb_bottom_pane_g2

0x0001,

0xfb42,	// (0x00037705) fep_vkb_bottom_pane_g_ParamLimits

0xfb42,	// (0x00037705) fep_vkb_bottom_pane_g

0xe3c0,	// (0x00035f83) cell_vkb_side_pane_g2

0x0001,

0xfb4c,	// (0x0003770f) cell_vkb_side_pane_g

0xe6ac,	// (0x0003626f) cell_vkb_side_pane_t1

0xe6ba,	// (0x0003627d) cell_vkb_side_pane_t1_copy1

0xe3c0,	// (0x00035f83) bg_fep_vkb_candidate_pane_g2

0xe790,	// (0x00036353) cell_vkb_candidate_pane_ParamLimits

0xe472,	// (0x00036035) aid_size_cell_vkb_ParamLimits

0xe472,	// (0x00036035) aid_size_cell_vkb

0xe790,	// (0x00036353) cell_vkb_candidate_pane

0x543a,	// (0x0002cffd) bg_popup_fep_shadow_pane_g1

0xa124,	// (0x00031ce7) fep_vkb_bottom_pane_ParamLimits

0xa124,	// (0x00031ce7) fep_vkb_bottom_pane

0xe53f,	// (0x00036102) fep_vkb_candidate_pane_ParamLimits

0xe53f,	// (0x00036102) fep_vkb_candidate_pane

0xa149,	// (0x00031d0c) fep_vkb_keypad_pane_ParamLimits

0xa149,	// (0x00031d0c) fep_vkb_keypad_pane

0xa17e,	// (0x00031d41) fep_vkb_side_pane_ParamLimits

0xa17e,	// (0x00031d41) fep_vkb_side_pane

0xa1ba,	// (0x00031d7d) fep_vkb_top_pane_ParamLimits

0xa1ba,	// (0x00031d7d) fep_vkb_top_pane

0xe565,	// (0x00036128) fep_vkb_top_pane_g1_ParamLimits

0xe565,	// (0x00036128) fep_vkb_top_pane_g1

0xe574,	// (0x00036137) fep_vkb_top_pane_g2_ParamLimits

0xe574,	// (0x00036137) fep_vkb_top_pane_g2

0xe583,	// (0x00036146) fep_vkb_top_pane_g3_ParamLimits

0xe583,	// (0x00036146) fep_vkb_top_pane_g3

0x0003,

0xfb32,	// (0x000376f5) fep_vkb_top_pane_g_ParamLimits

0xfb32,	// (0x000376f5) fep_vkb_top_pane_g

0xe5a1,	// (0x00036164) fep_vkb_top_text_pane_ParamLimits

0xe5a1,	// (0x00036164) fep_vkb_top_text_pane

0xa1ef,	// (0x00031db2) fep_vkb_side_pane_g1_ParamLimits

0xa1ef,	// (0x00031db2) fep_vkb_side_pane_g1

0xe5c0,	// (0x00036183) grid_vkb_side_pane_ParamLimits

0xe5c0,	// (0x00036183) grid_vkb_side_pane

0x5442,	// (0x0002d005) bg_popup_fep_shadow_pane_g2

0x544b,	// (0x0002d00e) bg_popup_fep_shadow_pane_g3

0x5453,	// (0x0002d016) bg_popup_fep_shadow_pane_g4

0x545c,	// (0x0002d01f) bg_popup_fep_shadow_pane_g5

0x5466,	// (0x0002d029) bg_popup_fep_shadow_pane_g6

0x546e,	// (0x0002d031) bg_popup_fep_shadow_pane_g7

0xb879,	// (0x0003343c) bg_popup_fep_shadow_pane_g8

0xe617,	// (0x000361da) grid_vkb_keypad_number_pane_ParamLimits

0xe617,	// (0x000361da) grid_vkb_keypad_number_pane

0xe627,	// (0x000361ea) grid_vkb_keypad_pane_ParamLimits

0xe627,	// (0x000361ea) grid_vkb_keypad_pane

0xe64d,	// (0x00036210) fep_vkb_bottom_pane_g1_ParamLimits

0xe64d,	// (0x00036210) fep_vkb_bottom_pane_g1

0xe676,	// (0x00036239) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xe676,	// (0x00036239) grid_vkb_keypad_bottom_left_pane

0xe68b,	// (0x0003624e) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xe68b,	// (0x0003624e) grid_vkb_keypad_bottom_right_pane

0xe6a0,	// (0x00036263) fep_vkb_top_text_pane_g1

0xa236,	// (0x00031df9) fep_vkb_top_text_pane_t1

0xa248,	// (0x00031e0b) cell_vkb_side_pane_ParamLimits

0xa248,	// (0x00031e0b) cell_vkb_side_pane

0xe3c0,	// (0x00035f83) cell_vkb_side_pane_g1

0xe6c8,	// (0x0003628b) cell_vkb_keypad_pane_ParamLimits

0xe6c8,	// (0x0003628b) cell_vkb_keypad_pane

0xe73d,	// (0x00036300) cell_vkb_keypad_pane_g1

0x0008,

0xfb5f,	// (0x00037722) bg_popup_fep_shadow_pane_g

0x5480,	// (0x0002d043) cell_hwr_side_pane_g1

0x5480,	// (0x0002d043) cell_hwr_side_pane_g2

0xe747,	// (0x0003630a) cell_vkb_keypad_pane_t1

0xa25e,	// (0x00031e21) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xa25e,	// (0x00031e21) cell_vkb_keypad_bottom_left_pane

0xa273,	// (0x00031e36) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xa273,	// (0x00031e36) cell_vkb_keypad_bottom_right_pane

0xe3c0,	// (0x00035f83) cell_vkb_keypad_bottom_left_pane_g1

0xe3c0,	// (0x00035f83) cell_vkb_keypad_bottom_right_pane_g1

0xe755,	// (0x00036318) cell_vkb_keypad_number_pane_ParamLimits

0xe755,	// (0x00036318) cell_vkb_keypad_number_pane

0xe774,	// (0x00036337) cell_vkb_keypad_number_pane_g1

0xe77e,	// (0x00036341) cell_vkb_keypad_number_pane_g2

0xe787,	// (0x0003634a) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb51,	// (0x00037714) cell_vkb_keypad_number_pane_g

0xe747,	// (0x0003630a) cell_vkb_keypad_number_pane_t1

0xe7ab,	// (0x0003636e) fep_vkb_candidate_pane_g1

0x0001,

0xfb72,	// (0x00037735) cell_hwr_side_pane_g

0xe7c4,	// (0x00036387) cell_hwr_side_pane_t1

0x548a,	// (0x0002d04d) cell_hwr_side_pane_t1_copy1

0x5498,	// (0x0002d05b) cell_hwr_candidate_pane_g1

0x54c7,	// (0x0002d08a) cell_hwr_candidate_pane_t1

0xe3c0,	// (0x00035f83) cell_vkb_candidate_pane_g2

0xe808,	// (0x000363cb) cell_vkb_candidate_pane_t1

0x5233,	// (0x0002cdf6) bg_popup_fep_shadow_pane_ParamLimits

0x5233,	// (0x0002cdf6) bg_popup_fep_shadow_pane

0x52e8,	// (0x0002ceab) bg_fep_hwr_top_pane_g4

0xe440,	// (0x00036003) bg_hwr_side_pane_g1_ParamLimits

0xe440,	// (0x00036003) bg_hwr_side_pane_g1

0xa0dd,	// (0x00031ca0) cell_hwr_side_pane_ParamLimits

0xa0dd,	// (0x00031ca0) cell_hwr_side_pane

0x5394,	// (0x0002cf57) fep_hwr_write_pane_g1_ParamLimits

0x5394,	// (0x0002cf57) fep_hwr_write_pane_g1

0x53a1,	// (0x0002cf64) fep_hwr_write_pane_g2_ParamLimits

0x53a1,	// (0x0002cf64) fep_hwr_write_pane_g2

0x53ae,	// (0x0002cf71) fep_hwr_write_pane_g3_ParamLimits

0x53ae,	// (0x0002cf71) fep_hwr_write_pane_g3

0xa0fd,	// (0x00031cc0) fep_hwr_write_pane_g4_ParamLimits

0xa0fd,	// (0x00031cc0) fep_hwr_write_pane_g4

0x0005,

0xfb1e,	// (0x000376e1) fep_hwr_write_pane_g_ParamLimits

0xfb1e,	// (0x000376e1) fep_hwr_write_pane_g

0x52e8,	// (0x0002ceab) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x52e8,	// (0x0002ceab) bg_fep_hwr_candidate_pane_g2

0x53d1,	// (0x0002cf94) cell_hwr_candidate_pane_ParamLimits

0x53d1,	// (0x0002cf94) cell_hwr_candidate_pane

0x5413,	// (0x0002cfd6) fep_hwr_candidate_pane_g1_ParamLimits

0xe4e2,	// (0x000360a5) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xe4e2,	// (0x000360a5) bg_popup_fep_shadow_pane_cp2

0xe593,	// (0x00036156) fep_vkb_top_pane_g4_ParamLimits

0xe593,	// (0x00036156) fep_vkb_top_pane_g4

0xe5b2,	// (0x00036175) fep_vkb_side_pane_g2_ParamLimits

0xe5b2,	// (0x00036175) fep_vkb_side_pane_g2

0xf032,	// (0x00036bf5) list_setting_pane_t4_ParamLimits

0xf032,	// (0x00036bf5) list_setting_pane_t4

0xf0b4,	// (0x00036c77) list_setting_number_pane_t5_ParamLimits

0xf0b4,	// (0x00036c77) list_setting_number_pane_t5

0x8959,	// (0x0003051c) list_double_heading_pane_cp2_ParamLimits

0x8959,	// (0x0003051c) list_double_heading_pane_cp2

0xb814,	// (0x000333d7) list_double_heading_pane_g1_cp2_ParamLimits

0xb814,	// (0x000333d7) list_double_heading_pane_g1_cp2

0xb820,	// (0x000333e3) list_double_heading_pane_g2_cp2_ParamLimits

0xb820,	// (0x000333e3) list_double_heading_pane_g2_cp2

0xe816,	// (0x000363d9) list_double_heading_pane_t1_cp2_ParamLimits

0xe816,	// (0x000363d9) list_double_heading_pane_t1_cp2

0xe82c,	// (0x000363ef) list_double_heading_pane_t2_cp2_ParamLimits

0xe82c,	// (0x000363ef) list_double_heading_pane_t2_cp2

0xb147,	// (0x00032d0a) aid_value_unit2

0x406b,	// (0x0002bc2e) popup_preview_fixed_window

0xb2f2,	// (0x00032eb5) bg_popup_preview_window_pane_cp02

0xe83e,	// (0x00036401) list_preview_fixed_pane

0xe884,	// (0x00036447) list_empty_pane_fp_ParamLimits

0xe884,	// (0x00036447) list_empty_pane_fp

0xe884,	// (0x00036447) list_single_cale_day_pane_fp_ParamLimits

0xe884,	// (0x00036447) list_single_cale_day_pane_fp

0xe884,	// (0x00036447) list_single_graphic_heading_pane_fp_ParamLimits

0xe884,	// (0x00036447) list_single_graphic_heading_pane_fp

0xe884,	// (0x00036447) list_single_graphic_pane_fp_ParamLimits

0xe884,	// (0x00036447) list_single_graphic_pane_fp

0xe884,	// (0x00036447) list_single_heading_pane_fp_ParamLimits

0xe884,	// (0x00036447) list_single_heading_pane_fp

0xe884,	// (0x00036447) list_single_pane_fp_ParamLimits

0xe884,	// (0x00036447) list_single_pane_fp

0xe89a,	// (0x0003645d) list_single_pane_fp_g1_ParamLimits

0xe89a,	// (0x0003645d) list_single_pane_fp_g1

0x6d14,	// (0x0002e8d7) list_single_pane_fp_g2_ParamLimits

0x6d14,	// (0x0002e8d7) list_single_pane_fp_g2

0x78f1,	// (0x0002f4b4) list_single_pane_fp_g3_ParamLimits

0x78f1,	// (0x0002f4b4) list_single_pane_fp_g3

0xe8a6,	// (0x00036469) list_single_pane_fp_g4_ParamLimits

0xe8a6,	// (0x00036469) list_single_pane_fp_g4

0x0003,

0xfb85,	// (0x00037748) list_single_pane_fp_g_ParamLimits

0xfb85,	// (0x00037748) list_single_pane_fp_g

0x7905,	// (0x0002f4c8) list_single_pane_fp_t1_ParamLimits

0x7905,	// (0x0002f4c8) list_single_pane_fp_t1

0x791c,	// (0x0002f4df) list_single_graphic_pane_fp_g1_ParamLimits

0x791c,	// (0x0002f4df) list_single_graphic_pane_fp_g1

0xe89a,	// (0x0003645d) list_single_graphic_pane_fp_g2_ParamLimits

0xe89a,	// (0x0003645d) list_single_graphic_pane_fp_g2

0x6d14,	// (0x0002e8d7) list_single_graphic_pane_fp_g3_ParamLimits

0x6d14,	// (0x0002e8d7) list_single_graphic_pane_fp_g3

0x78f1,	// (0x0002f4b4) list_single_graphic_pane_fp_g4_ParamLimits

0x78f1,	// (0x0002f4b4) list_single_graphic_pane_fp_g4

0xe8a6,	// (0x00036469) list_single_graphic_pane_fp_g5_ParamLimits

0xe8a6,	// (0x00036469) list_single_graphic_pane_fp_g5

0x0004,

0xfb8e,	// (0x00037751) list_single_graphic_pane_fp_g_ParamLimits

0xfb8e,	// (0x00037751) list_single_graphic_pane_fp_g

0x7928,	// (0x0002f4eb) list_single_graphic_pane_fp_t1_ParamLimits

0x7928,	// (0x0002f4eb) list_single_graphic_pane_fp_t1

0x791c,	// (0x0002f4df) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x791c,	// (0x0002f4df) list_single_graphic_heading_pane_fp_g1

0xe89a,	// (0x0003645d) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xe89a,	// (0x0003645d) list_single_graphic_heading_pane_fp_g2

0x6d14,	// (0x0002e8d7) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x6d14,	// (0x0002e8d7) list_single_graphic_heading_pane_fp_g3

0x78f1,	// (0x0002f4b4) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x78f1,	// (0x0002f4b4) list_single_graphic_heading_pane_fp_g4

0xe8a6,	// (0x00036469) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xe8a6,	// (0x00036469) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb8e,	// (0x00037751) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb8e,	// (0x00037751) list_single_graphic_heading_pane_fp_g

0x793e,	// (0x0002f501) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x793e,	// (0x0002f501) list_single_graphic_heading_pane_fp_t1

0x7954,	// (0x0002f517) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x7954,	// (0x0002f517) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb99,	// (0x0003775c) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb99,	// (0x0003775c) list_single_graphic_heading_pane_fp_t

0x7966,	// (0x0002f529) list_single_cale_day_pane_fp_g1_ParamLimits

0x7966,	// (0x0002f529) list_single_cale_day_pane_fp_g1

0xe8b2,	// (0x00036475) list_single_cale_day_pane_fp_g2_ParamLimits

0xe8b2,	// (0x00036475) list_single_cale_day_pane_fp_g2

0x799e,	// (0x0002f561) list_single_cale_day_pane_fp_g3_ParamLimits

0x799e,	// (0x0002f561) list_single_cale_day_pane_fp_g3

0x79c6,	// (0x0002f589) list_single_cale_day_pane_fp_g4_ParamLimits

0x79c6,	// (0x0002f589) list_single_cale_day_pane_fp_g4

0x79ea,	// (0x0002f5ad) list_single_cale_day_pane_fp_g5_ParamLimits

0x79ea,	// (0x0002f5ad) list_single_cale_day_pane_fp_g5

0x0004,

0xfb9e,	// (0x00037761) list_single_cale_day_pane_fp_g_ParamLimits

0xfb9e,	// (0x00037761) list_single_cale_day_pane_fp_g

0x7a0e,	// (0x0002f5d1) list_single_cale_day_pane_fp_t1_ParamLimits

0x7a0e,	// (0x0002f5d1) list_single_cale_day_pane_fp_t1

0x7a34,	// (0x0002f5f7) list_single_cale_day_pane_fp_t2_ParamLimits

0x7a34,	// (0x0002f5f7) list_single_cale_day_pane_fp_t2

0x7a4d,	// (0x0002f610) list_single_cale_day_pane_fp_t3_ParamLimits

0x7a4d,	// (0x0002f610) list_single_cale_day_pane_fp_t3

0x0002,

0xfba9,	// (0x0003776c) list_single_cale_day_pane_fp_t_ParamLimits

0xfba9,	// (0x0003776c) list_single_cale_day_pane_fp_t

0xe89a,	// (0x0003645d) list_empty_pane_fp_g1_ParamLimits

0xe89a,	// (0x0003645d) list_empty_pane_fp_g1

0x7a66,	// (0x0002f629) list_empty_pane_fp_t1

0x7a74,	// (0x0002f637) list_empty_pane_fp_t2

0x0001,

0xfbb0,	// (0x00037773) list_empty_pane_fp_t

0xe89a,	// (0x0003645d) list_single_heading_pane_fp_g1_ParamLimits

0xe89a,	// (0x0003645d) list_single_heading_pane_fp_g1

0x6d14,	// (0x0002e8d7) list_single_heading_pane_fp_g2_ParamLimits

0x6d14,	// (0x0002e8d7) list_single_heading_pane_fp_g2

0x78f1,	// (0x0002f4b4) list_single_heading_pane_fp_g3_ParamLimits

0x78f1,	// (0x0002f4b4) list_single_heading_pane_fp_g3

0x0002,

0xfbb5,	// (0x00037778) list_single_heading_pane_fp_g_ParamLimits

0xfbb5,	// (0x00037778) list_single_heading_pane_fp_g

0x7a82,	// (0x0002f645) list_single_heading_pane_fp_t1_ParamLimits

0x7a82,	// (0x0002f645) list_single_heading_pane_fp_t1

0x7a94,	// (0x0002f657) list_single_heading_pane_fp_t2_ParamLimits

0x7a94,	// (0x0002f657) list_single_heading_pane_fp_t2

0x0001,

0xfbbc,	// (0x0003777f) list_single_heading_pane_fp_t_ParamLimits

0xfbbc,	// (0x0003777f) list_single_heading_pane_fp_t

0xb977,	// (0x0003353a) aid_size_cell_fast

0xb2d5,	// (0x00032e98) soft_indicator_pane_cp1_t1

0xb9b1,	// (0x00033574) cell_app_pane_cp2_ParamLimits

0xb9b1,	// (0x00033574) cell_app_pane_cp2

0x5255,	// (0x0002ce18) fep_hwr_candidate_drop_down_list_pane

0x542d,	// (0x0002cff0) fep_hwr_candidate_pane_g3_ParamLimits

0x542d,	// (0x0002cff0) fep_hwr_candidate_pane_g3

0x1ba9,	// (0x0002976c) fep_hwr_candidate_pane_g4_ParamLimits

0x1ba9,	// (0x0002976c) fep_hwr_candidate_pane_g4

0x0002,

0xfb2b,	// (0x000376ee) fep_hwr_candidate_pane_g_ParamLimits

0xfb2b,	// (0x000376ee) fep_hwr_candidate_pane_g

0xe52e,	// (0x000360f1) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xe52e,	// (0x000360f1) fep_vkb_candidate_drop_down_list_pane

0xe7b3,	// (0x00036376) fep_vkb_candidate_pane_g3

0xe7bb,	// (0x0003637e) fep_vkb_candidate_pane_g4

0x0002,

0xfb58,	// (0x0003771b) fep_vkb_candidate_pane_g

0x5498,	// (0x0002d05b) cell_hwr_candidate_pane_g1_ParamLimits

0x54a6,	// (0x0002d069) cell_hwr_candidate_pane_g3_ParamLimits

0x54a6,	// (0x0002d069) cell_hwr_candidate_pane_g3

0x21e4,	// (0x00029da7) cell_hwr_candidate_pane_g4_ParamLimits

0x21e4,	// (0x00029da7) cell_hwr_candidate_pane_g4

0x0002,

0xfb77,	// (0x0003773a) cell_hwr_candidate_pane_g_ParamLimits

0xfb77,	// (0x0003773a) cell_hwr_candidate_pane_g

0xe7d2,	// (0x00036395) cell_vkb_candidate_pane_g3_ParamLimits

0xe7d2,	// (0x00036395) cell_vkb_candidate_pane_g3

0xe7ed,	// (0x000363b0) cell_vkb_candidate_pane_g4_ParamLimits

0xe7ed,	// (0x000363b0) cell_vkb_candidate_pane_g4

0xe8be,	// (0x00036481) cell_app_pane_cp2_g1_ParamLimits

0xe8be,	// (0x00036481) cell_app_pane_cp2_g1

0xe8dc,	// (0x0003649f) cell_app_pane_cp2_g2_ParamLimits

0xe8dc,	// (0x0003649f) cell_app_pane_cp2_g2

0x0001,

0xfbc1,	// (0x00037784) cell_app_pane_cp2_g_ParamLimits

0xfbc1,	// (0x00037784) cell_app_pane_cp2_g

0xe8e8,	// (0x000364ab) cell_app_pane_cp2_t1_ParamLimits

0xe8e8,	// (0x000364ab) cell_app_pane_cp2_t1

0xb806,	// (0x000333c9) grid_highlight_pane_cp1_ParamLimits

0xb806,	// (0x000333c9) grid_highlight_pane_cp1

0x54e5,	// (0x0002d0a8) cell_hwr_candidate_pane_cp1_ParamLimits

0x54e5,	// (0x0002d0a8) cell_hwr_candidate_pane_cp1

0x5498,	// (0x0002d05b) fep_hwr_candidate_drop_down_list_pane_g1

0x5504,	// (0x0002d0c7) fep_hwr_candidate_drop_down_list_pane_g2

0x5511,	// (0x0002d0d4) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc6,	// (0x00037789) fep_hwr_candidate_drop_down_list_pane_g

0x551e,	// (0x0002d0e1) fep_hwr_candidate_drop_down_list_scroll_pane

0x5527,	// (0x0002d0ea) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x5527,	// (0x0002d0ea) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x5534,	// (0x0002d0f7) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x5534,	// (0x0002d0f7) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x5541,	// (0x0002d104) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x5541,	// (0x0002d104) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x554e,	// (0x0002d111) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x554e,	// (0x0002d111) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x5569,	// (0x0002d12c) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x5569,	// (0x0002d12c) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x5584,	// (0x0002d147) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x5584,	// (0x0002d147) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x559f,	// (0x0002d162) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x559f,	// (0x0002d162) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x55ba,	// (0x0002d17d) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x55ba,	// (0x0002d17d) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbcd,	// (0x00037790) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbcd,	// (0x00037790) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xe8fa,	// (0x000364bd) cell_vkb_candidate_pane_cp1_ParamLimits

0xe8fa,	// (0x000364bd) cell_vkb_candidate_pane_cp1

0xe593,	// (0x00036156) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xe593,	// (0x00036156) fep_vkb_candidate_drop_down_list_pane_g1

0xe91a,	// (0x000364dd) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xe91a,	// (0x000364dd) fep_vkb_candidate_drop_down_list_pane_g2

0xe927,	// (0x000364ea) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xe927,	// (0x000364ea) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbde,	// (0x000377a1) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbde,	// (0x000377a1) fep_vkb_candidate_drop_down_list_pane_g

0xe934,	// (0x000364f7) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xe934,	// (0x000364f7) fep_vkb_candidate_drop_down_list_scroll_pane

0xe941,	// (0x00036504) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xe941,	// (0x00036504) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xe94e,	// (0x00036511) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xe94e,	// (0x00036511) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xe95a,	// (0x0003651d) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xe95a,	// (0x0003651d) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xe966,	// (0x00036529) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xe966,	// (0x00036529) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xe987,	// (0x0003654a) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xe987,	// (0x0003654a) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xe9a8,	// (0x0003656b) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xe9a8,	// (0x0003656b) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xe9c9,	// (0x0003658c) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xe9c9,	// (0x0003658c) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xe9ea,	// (0x000365ad) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xe9ea,	// (0x000365ad) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe5,	// (0x000377a8) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe5,	// (0x000377a8) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x2f2e,	// (0x0002aaf1) title_pane_g1_ParamLimits

0x3021,	// (0x0002abe4) title_pane_g2_ParamLimits

0xf554,	// (0x00037117) title_pane_g_ParamLimits

0xbd25,	// (0x000338e8) aid_call2_pane

0xbd2d,	// (0x000338f0) aid_call_pane

0xbd35,	// (0x000338f8) popup_clock_analogue_window_g1

0xbd35,	// (0x000338f8) popup_clock_analogue_window_g2

0x43d4,	// (0x0002bf97) popup_clock_analogue_window_g3

0x43dd,	// (0x0002bfa0) popup_clock_analogue_window_g4

0xb159,	// (0x00032d1c) popup_clock_analogue_window_g5

0x0004,

0xf6fe,	// (0x000372c1) popup_clock_analogue_window_g

0x43e5,	// (0x0002bfa8) popup_clock_analogue_window_t1

0x43f3,	// (0x0002bfb6) clock_digital_number_pane_ParamLimits

0x43f3,	// (0x0002bfb6) clock_digital_number_pane

0x43ff,	// (0x0002bfc2) clock_digital_number_pane_cp02_ParamLimits

0x43ff,	// (0x0002bfc2) clock_digital_number_pane_cp02

0x440b,	// (0x0002bfce) clock_digital_number_pane_cp03_ParamLimits

0x440b,	// (0x0002bfce) clock_digital_number_pane_cp03

0x4417,	// (0x0002bfda) clock_digital_number_pane_cp04_ParamLimits

0x4417,	// (0x0002bfda) clock_digital_number_pane_cp04

0x4423,	// (0x0002bfe6) clock_digital_separator_pane_ParamLimits

0x4423,	// (0x0002bfe6) clock_digital_separator_pane

0x442f,	// (0x0002bff2) popup_clock_digital_window_t1_ParamLimits

0x442f,	// (0x0002bff2) popup_clock_digital_window_t1

0xb159,	// (0x00032d1c) clock_digital_number_pane_g1

0xb159,	// (0x00032d1c) clock_digital_number_pane_g2

0x0001,

0xf709,	// (0x000372cc) clock_digital_number_pane_g

0xb159,	// (0x00032d1c) clock_digital_separator_pane_g1

0xb159,	// (0x00032d1c) clock_digital_separator_pane_g2

0x0001,

0xf709,	// (0x000372cc) clock_digital_separator_pane_g

0x93a1,	// (0x00030f64) aid_fill_nsta_ParamLimits

0x94d7,	// (0x0003109a) indicator_nsta_pane_ParamLimits

0xc4fc,	// (0x000340bf) popup_clock_analogue_window

0xc4fc,	// (0x000340bf) popup_clock_digital_window

0xc6a3,	// (0x00034266) grid_indicator_nsta_pane_ParamLimits

0xe053,	// (0x00035c16) clock_nsta_pane_t2

0x0001,

0xfaab,	// (0x0003766e) clock_nsta_pane_t

0x4398,	// (0x0002bf5b) aid_size_max_handle

0x43a2,	// (0x0002bf65) aid_size_min_handle

0xc1d7,	// (0x00033d9a) editor_scroll_pane

0xea05,	// (0x000365c8) ex_editor_pane

0xb932,	// (0x000334f5) scroll_pane_cp13

0xb7a5,	// (0x00033368) scroll_pane_cp14

0xbd64,	// (0x00033927) scroll_pane_cp36

0x896a,	// (0x0003052d) list_single_graphic_hl_pane_cp2_ParamLimits

0x896a,	// (0x0003052d) list_single_graphic_hl_pane_cp2

0xf351,	// (0x00036f14) list_single_graphic_hl_pane_ParamLimits

0xf351,	// (0x00036f14) list_single_graphic_hl_pane

0x7aaa,	// (0x0002f66d) aid_size_min_hl_cp1

0xea0d,	// (0x000365d0) list_highlight_pane_cp34_ParamLimits

0xea0d,	// (0x000365d0) list_highlight_pane_cp34

0xea1e,	// (0x000365e1) list_single_graphic_hl_pane_g1_ParamLimits

0xea1e,	// (0x000365e1) list_single_graphic_hl_pane_g1

0xf377,	// (0x00036f3a) list_single_graphic_hl_pane_g2_ParamLimits

0xf377,	// (0x00036f3a) list_single_graphic_hl_pane_g2

0xf377,	// (0x00036f3a) list_single_graphic_hl_pane_g3_ParamLimits

0xf377,	// (0x00036f3a) list_single_graphic_hl_pane_g3

0x6c29,	// (0x0002e7ec) list_single_graphic_hl_pane_g4_ParamLimits

0x6c29,	// (0x0002e7ec) list_single_graphic_hl_pane_g4

0xf383,	// (0x00036f46) list_single_graphic_hl_pane_g5_ParamLimits

0xf383,	// (0x00036f46) list_single_graphic_hl_pane_g5

0x0004,

0xfbf6,	// (0x000377b9) list_single_graphic_hl_pane_g_ParamLimits

0xfbf6,	// (0x000377b9) list_single_graphic_hl_pane_g

0xf397,	// (0x00036f5a) list_single_graphic_hl_pane_t1_ParamLimits

0xf397,	// (0x00036f5a) list_single_graphic_hl_pane_t1

0xea2b,	// (0x000365ee) aid_size_min_hl_cp2

0xea34,	// (0x000365f7) list_highlight_pane_cp34_cp2_ParamLimits

0xea34,	// (0x000365f7) list_highlight_pane_cp34_cp2

0xea1e,	// (0x000365e1) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xea1e,	// (0x000365e1) list_single_graphic_hl_pane_g1_cp2

0xea41,	// (0x00036604) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xea41,	// (0x00036604) list_single_graphic_hl_pane_g2_cp2

0xa28e,	// (0x00031e51) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xa28e,	// (0x00031e51) list_single_graphic_hl_pane_g3_cp2

0xc11c,	// (0x00033cdf) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc11c,	// (0x00033cdf) list_single_graphic_hl_pane_g4_cp2

0xea4d,	// (0x00036610) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xea4d,	// (0x00036610) list_single_graphic_hl_pane_g5_cp2

0x8ba7,	// (0x0003076a) control_pane_g4_ParamLimits

0x8ba7,	// (0x0003076a) control_pane_g4

0xb96b,	// (0x0003352e) bg_popup_sub_pane_cp10_ParamLimits

0xe3ca,	// (0x00035f8d) list_choice_list_pane_ParamLimits

0xe3d9,	// (0x00035f9c) scroll_pane_cp23

0xb2f2,	// (0x00032eb5) bg_popup_preview_window_pane_cp02_ParamLimits

0xe83e,	// (0x00036401) list_preview_fixed_pane_ParamLimits

0xe854,	// (0x00036417) list_preview_fixed_pane_cp_ParamLimits

0xe854,	// (0x00036417) list_preview_fixed_pane_cp

0xe860,	// (0x00036423) popup_preview_fixed_window_g1_ParamLimits

0xe860,	// (0x00036423) popup_preview_fixed_window_g1

0xe86c,	// (0x0003642f) popup_preview_fixed_window_g2_ParamLimits

0xe86c,	// (0x0003642f) popup_preview_fixed_window_g2

0x0002,

0xfb7e,	// (0x00037741) popup_preview_fixed_window_g_ParamLimits

0xfb7e,	// (0x00037741) popup_preview_fixed_window_g

0x430c,	// (0x0002becf) aid_navi_side_left_pane_ParamLimits

0x4321,	// (0x0002bee4) aid_navi_side_right_pane_ParamLimits

0x4339,	// (0x0002befc) navi_icon_pane_stacon_ParamLimits

0x434d,	// (0x0002bf10) navi_navi_pane_stacon_ParamLimits

0x4339,	// (0x0002befc) navi_text_pane_stacon_ParamLimits

0x3f3a,	// (0x0002bafd) main_text_info_pane

0xea77,	// (0x0003663a) listscroll_text_info_pane

0xea7f,	// (0x00036642) list_text_info_pane_ParamLimits

0xea7f,	// (0x00036642) list_text_info_pane

0xea8e,	// (0x00036651) scroll_pane_cp24_ParamLimits

0xea8e,	// (0x00036651) scroll_pane_cp24

0xa29c,	// (0x00031e5f) list_text_info_pane_t1_ParamLimits

0xa29c,	// (0x00031e5f) list_text_info_pane_t1

0x8d25,	// (0x000308e8) popup_fast_swap2_window_ParamLimits

0x8d25,	// (0x000308e8) popup_fast_swap2_window

0xeaac,	// (0x0003666f) aid_size_cell_fast2

0xb14f,	// (0x00032d12) bg_popup_window_pane_cp17

0xc979,	// (0x0003453c) heading_pane_cp2

0xb4d8,	// (0x0003309b) listscroll_fast2_pane

0xeab6,	// (0x00036679) grid_fast2_pane

0xeac0,	// (0x00036683) listscroll_fast2_pane_g1

0xeac8,	// (0x0003668b) listscroll_fast2_pane_g2

0x0001,

0xfc01,	// (0x000377c4) listscroll_fast2_pane_g

0xb932,	// (0x000334f5) scroll_pane_cp26

0xead2,	// (0x00036695) cell_fast2_pane_ParamLimits

0xead2,	// (0x00036695) cell_fast2_pane

0xeae7,	// (0x000366aa) cell_fast2_pane_g1

0xeaf0,	// (0x000366b3) cell_fast2_pane_g2

0xeaf9,	// (0x000366bc) cell_fast2_pane_g3

0x0002,

0xfc06,	// (0x000377c9) cell_fast2_pane_g

0xb56c,	// (0x0003312f) grid_highlight_pane_cp9

0x47ee,	// (0x0002c3b1) main_eswt_pane_ParamLimits

0x47ee,	// (0x0002c3b1) main_eswt_pane

0xeaa3,	// (0x00036666) list_single_text_info_pane

0xeb01,	// (0x000366c4) eswt_ctrl_button_pane

0xeb01,	// (0x000366c4) eswt_ctrl_canvas_pane

0xeb09,	// (0x000366cc) eswt_ctrl_combo_pane

0xeb01,	// (0x000366c4) eswt_ctrl_default_pane

0xeb01,	// (0x000366c4) eswt_ctrl_label_pane

0xeb11,	// (0x000366d4) eswt_ctrl_wait_pane

0xeb19,	// (0x000366dc) eswt_shell_pane

0xb14f,	// (0x00032d12) listscroll_eswt_app_pane

0xeb39,	// (0x000366fc) popup_eswt_tasktip_window_ParamLimits

0xeb39,	// (0x000366fc) popup_eswt_tasktip_window

0xc67f,	// (0x00034242) bg_popup_window_pane_cp18

0xeb4a,	// (0x0003670d) eswt_control_pane_g1_ParamLimits

0xeb4a,	// (0x0003670d) eswt_control_pane_g1

0xeb57,	// (0x0003671a) eswt_control_pane_g2_ParamLimits

0xeb57,	// (0x0003671a) eswt_control_pane_g2

0xeb64,	// (0x00036727) eswt_control_pane_g3_ParamLimits

0xeb64,	// (0x00036727) eswt_control_pane_g3

0xeb71,	// (0x00036734) eswt_control_pane_g4_ParamLimits

0xeb71,	// (0x00036734) eswt_control_pane_g4

0x0003,

0xfc0d,	// (0x000377d0) eswt_control_pane_g_ParamLimits

0xfc0d,	// (0x000377d0) eswt_control_pane_g

0xb806,	// (0x000333c9) bg_button_pane_ParamLimits

0xb806,	// (0x000333c9) bg_button_pane

0xb581,	// (0x00033144) common_borders_pane_copy2_ParamLimits

0xb581,	// (0x00033144) common_borders_pane_copy2

0xeb7e,	// (0x00036741) control_button_pane_g1_ParamLimits

0xeb7e,	// (0x00036741) control_button_pane_g1

0xeb8a,	// (0x0003674d) control_button_pane_g2_ParamLimits

0xeb8a,	// (0x0003674d) control_button_pane_g2

0xeb96,	// (0x00036759) control_button_pane_g3_ParamLimits

0xeb96,	// (0x00036759) control_button_pane_g3

0x0002,

0xfc16,	// (0x000377d9) control_button_pane_g_ParamLimits

0xfc16,	// (0x000377d9) control_button_pane_g

0xebaa,	// (0x0003676d) control_button_pane_t1

0xebb8,	// (0x0003677b) control_button_pane_t2

0x0001,

0xfc1d,	// (0x000377e0) control_button_pane_t

0xc60b,	// (0x000341ce) bg_button_pane_g1

0xc61b,	// (0x000341de) bg_button_pane_g2

0xc613,	// (0x000341d6) bg_button_pane_g3

0xc62b,	// (0x000341ee) bg_button_pane_g4

0xc623,	// (0x000341e6) bg_button_pane_g5

0xc633,	// (0x000341f6) bg_button_pane_g6

0xc63b,	// (0x000341fe) bg_button_pane_g7

0xc64b,	// (0x0003420e) bg_button_pane_g8

0xc643,	// (0x00034206) bg_button_pane_g9

0x0008,

0xf867,	// (0x0003742a) bg_button_pane_g

0xe385,	// (0x00035f48) common_borders_pane_ParamLimits

0xe385,	// (0x00035f48) common_borders_pane

0xeb4a,	// (0x0003670d) eswt_control_pane_g1_copy1_ParamLimits

0xeb4a,	// (0x0003670d) eswt_control_pane_g1_copy1

0xeb57,	// (0x0003671a) eswt_control_pane_g2_copy1_ParamLimits

0xeb57,	// (0x0003671a) eswt_control_pane_g2_copy1

0xeb64,	// (0x00036727) eswt_control_pane_g3_copy1_ParamLimits

0xeb64,	// (0x00036727) eswt_control_pane_g3_copy1

0xeb71,	// (0x00036734) eswt_control_pane_g4_copy1_ParamLimits

0xeb71,	// (0x00036734) eswt_control_pane_g4_copy1

0xe3c0,	// (0x00035f83) bg_eswt_ctrl_canvas_pane_g1

0xe385,	// (0x00035f48) common_borders_pane_cp2_ParamLimits

0xe385,	// (0x00035f48) common_borders_pane_cp2

0xe385,	// (0x00035f48) common_borders_pane_cp3_ParamLimits

0xe385,	// (0x00035f48) common_borders_pane_cp3

0xebc6,	// (0x00036789) separator_horizontal_pane

0xebce,	// (0x00036791) separator_vertical_pane

0xeb4a,	// (0x0003670d) eswt_control_pane_g1_copy2_ParamLimits

0xeb4a,	// (0x0003670d) eswt_control_pane_g1_copy2

0xeb57,	// (0x0003671a) eswt_control_pane_g2_copy2_ParamLimits

0xeb57,	// (0x0003671a) eswt_control_pane_g2_copy2

0xeb64,	// (0x00036727) eswt_control_pane_g3_copy2_ParamLimits

0xeb64,	// (0x00036727) eswt_control_pane_g3_copy2

0xeb71,	// (0x00036734) eswt_control_pane_g4_copy2_ParamLimits

0xeb71,	// (0x00036734) eswt_control_pane_g4_copy2

0xb14f,	// (0x00032d12) common_borders_pane_cp4

0xebd7,	// (0x0003679a) separator_horizontal_pane_g1

0xebe0,	// (0x000367a3) separator_horizontal_pane_g2

0xebe9,	// (0x000367ac) separator_horizontal_pane_g3

0x0002,

0xfc22,	// (0x000377e5) separator_horizontal_pane_g

0xeb4a,	// (0x0003670d) eswt_control_pane_g1_copy3_ParamLimits

0xeb4a,	// (0x0003670d) eswt_control_pane_g1_copy3

0xeb57,	// (0x0003671a) eswt_control_pane_g2_copy3_ParamLimits

0xeb57,	// (0x0003671a) eswt_control_pane_g2_copy3

0xeb64,	// (0x00036727) eswt_control_pane_g3_copy3_ParamLimits

0xeb64,	// (0x00036727) eswt_control_pane_g3_copy3

0xeb71,	// (0x00036734) eswt_control_pane_g4_copy3_ParamLimits

0xeb71,	// (0x00036734) eswt_control_pane_g4_copy3

0xb14f,	// (0x00032d12) common_borders_pane_cp5

0xebf2,	// (0x000367b5) separator_vertical_pane_g1

0xebfb,	// (0x000367be) separator_vertical_pane_g2

0xec04,	// (0x000367c7) separator_vertical_pane_g3

0x0002,

0xfc29,	// (0x000377ec) separator_vertical_pane_g

0xeb4a,	// (0x0003670d) eswt_control_pane_g1_copy4_ParamLimits

0xeb4a,	// (0x0003670d) eswt_control_pane_g1_copy4

0xeb57,	// (0x0003671a) eswt_control_pane_g2_copy4_ParamLimits

0xeb57,	// (0x0003671a) eswt_control_pane_g2_copy4

0xeb64,	// (0x00036727) eswt_control_pane_g3_copy4_ParamLimits

0xeb64,	// (0x00036727) eswt_control_pane_g3_copy4

0xeb71,	// (0x00036734) eswt_control_pane_g4_copy4_ParamLimits

0xeb71,	// (0x00036734) eswt_control_pane_g4_copy4

0xec0d,	// (0x000367d0) eswt_ctrl_combo_button_pane

0xec15,	// (0x000367d8) eswt_ctrl_input_pane

0xec1d,	// (0x000367e0) popup_choice_list_window_cp70

0xec25,	// (0x000367e8) eswt_ctrl_input_pane_t1

0xb14f,	// (0x00032d12) input_focus_pane_cp70

0xe385,	// (0x00035f48) bg_button_pane_cp70_ParamLimits

0xe385,	// (0x00035f48) bg_button_pane_cp70

0xec33,	// (0x000367f6) eswt_ctrl_combo_button_pane_g1

0xec3b,	// (0x000367fe) wait_bar_pane_cp70

0xc67f,	// (0x00034242) bg_popup_window_pane_cp70_ParamLimits

0xc67f,	// (0x00034242) bg_popup_window_pane_cp70

0xec43,	// (0x00036806) popup_eswt_tasktip_window_t1

0xec59,	// (0x0003681c) wait_bar_pane_cp71_ParamLimits

0xec59,	// (0x0003681c) wait_bar_pane_cp71

0xec65,	// (0x00036828) grid_eswt_app_pane

0xbb68,	// (0x0003372b) scroll_pane_cp70

0xa2b9,	// (0x00031e7c) cell_eswt_app_pane_ParamLimits

0xa2b9,	// (0x00031e7c) cell_eswt_app_pane

0xa2e3,	// (0x00031ea6) cell_eswt_app_pane_g1_ParamLimits

0xa2e3,	// (0x00031ea6) cell_eswt_app_pane_g1

0xa312,	// (0x00031ed5) cell_eswt_app_pane_g2_ParamLimits

0xa312,	// (0x00031ed5) cell_eswt_app_pane_g2

0x0001,

0xfc30,	// (0x000377f3) cell_eswt_app_pane_g_ParamLimits

0xfc30,	// (0x000377f3) cell_eswt_app_pane_g

0xa336,	// (0x00031ef9) cell_eswt_app_pane_t1_ParamLimits

0xa336,	// (0x00031ef9) cell_eswt_app_pane_t1

0xec6e,	// (0x00036831) grid_highlight_pane_cp70_ParamLimits

0xec6e,	// (0x00036831) grid_highlight_pane_cp70

0xc0d0,	// (0x00033c93) set_content_pane_g1

0xc3c0,	// (0x00033f83) status_small_volume_pane

0x55d5,	// (0x0002d198) status_small_volume_pane_g1

0x55dd,	// (0x0002d1a0) volume_small2_pane

0x55e6,	// (0x0002d1a9) volume_small2_pane_g1

0x55ef,	// (0x0002d1b2) volume_small2_pane_g2

0x55f8,	// (0x0002d1bb) volume_small2_pane_g3

0x5601,	// (0x0002d1c4) volume_small2_pane_g4

0x560a,	// (0x0002d1cd) volume_small2_pane_g5

0x5613,	// (0x0002d1d6) volume_small2_pane_g6

0x561c,	// (0x0002d1df) volume_small2_pane_g7

0x5625,	// (0x0002d1e8) volume_small2_pane_g8

0x562e,	// (0x0002d1f1) volume_small2_pane_g9

0x5637,	// (0x0002d1fa) volume_small2_pane_g10

0x0009,

0xfc35,	// (0x000377f8) volume_small2_pane_g

0xe6a0,	// (0x00036263) fep_vkb_top_text_pane_g1_ParamLimits

0xa236,	// (0x00031df9) fep_vkb_top_text_pane_t1_ParamLimits

0xe878,	// (0x0003643b) popup_preview_fixed_window_g3_ParamLimits

0xe878,	// (0x0003643b) popup_preview_fixed_window_g3

0x9334,	// (0x00030ef7) popup_toolbar_trans_pane

0x9c50,	// (0x00031813) aid_height_set_list_ParamLimits

0xc6bd,	// (0x00034280) aid_size_parent_ParamLimits

0xb96b,	// (0x0003352e) list_highlight_pane_cp2_ParamLimits

0xc0d0,	// (0x00033c93) set_content_pane_g1_ParamLimits

0xf364,	// (0x00036f27) list_single_image_pane_ParamLimits

0xf364,	// (0x00036f27) list_single_image_pane

0xa368,	// (0x00031f2b) aid_size_cell_image_ParamLimits

0xa368,	// (0x00031f2b) aid_size_cell_image

0xa375,	// (0x00031f38) grid_single_image_pane_ParamLimits

0xa375,	// (0x00031f38) grid_single_image_pane

0xec7a,	// (0x0003683d) list_single_image_pane_g1_ParamLimits

0xec7a,	// (0x0003683d) list_single_image_pane_g1

0xec86,	// (0x00036849) list_single_image_pane_g2_ParamLimits

0xec86,	// (0x00036849) list_single_image_pane_g2

0x0001,

0xfc4a,	// (0x0003780d) list_single_image_pane_g_ParamLimits

0xfc4a,	// (0x0003780d) list_single_image_pane_g

0xec9a,	// (0x0003685d) list_single_image_pane_t1_ParamLimits

0xec9a,	// (0x0003685d) list_single_image_pane_t1

0xa381,	// (0x00031f44) cell_image_list_pane_ParamLimits

0xa381,	// (0x00031f44) cell_image_list_pane

0xa395,	// (0x00031f58) cell_image_list_pane_g1

0xa39e,	// (0x00031f61) cell_image_list_pane_g2

0x0001,

0xfc4f,	// (0x00037812) cell_image_list_pane_g

0xecb0,	// (0x00036873) aid_size_cell_tb_trans_pane

0xb806,	// (0x000333c9) bg_tb_trans_pane

0xecc2,	// (0x00036885) grid_tb_trans_pane

0xc60b,	// (0x000341ce) bg_tb_trans_pane_g1

0xc61b,	// (0x000341de) bg_tb_trans_pane_g2

0xc613,	// (0x000341d6) bg_tb_trans_pane_g3

0xc62b,	// (0x000341ee) bg_tb_trans_pane_g4

0xc623,	// (0x000341e6) bg_tb_trans_pane_g5

0xc64b,	// (0x0003420e) bg_tb_trans_pane_g6

0xc643,	// (0x00034206) bg_tb_trans_pane_g7

0xc633,	// (0x000341f6) bg_tb_trans_pane_g8

0xc63b,	// (0x000341fe) bg_tb_trans_pane_g9

0x0008,

0xfc54,	// (0x00037817) bg_tb_trans_pane_g

0xecd6,	// (0x00036899) cell_toolbar_trans_pane_ParamLimits

0xecd6,	// (0x00036899) cell_toolbar_trans_pane

0xe3c0,	// (0x00035f83) cell_toolbar_trans_pane_g1

0x9fcc,	// (0x00031b8f) list_form2_midp_pane_t1

0x9fda,	// (0x00031b9d) list_form2_midp_pane_t2

0x0001,

0xfaf1,	// (0x000376b4) list_form2_midp_pane_t

0xe11d,	// (0x00035ce0) scroll_pane_cp51_ParamLimits

0xe294,	// (0x00035e57) form2_midp_wait_pane_g1

0xe29d,	// (0x00035e60) form2_midp_wait_pane_g2

0xe2a6,	// (0x00035e69) form2_midp_wait_pane_g3

0x0002,

0xfb06,	// (0x000376c9) form2_midp_wait_pane_g

0xb1bf,	// (0x00032d82) list_highlight_pane_cp21_ParamLimits

0xe2c6,	// (0x00035e89) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xe2d5,	// (0x00035e98) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xd74e,	// (0x00035311) list_single_2graphic_im_pane_ParamLimits

0xd74e,	// (0x00035311) list_single_2graphic_im_pane

0xecfc,	// (0x000368bf) list_single_2graphic_im_pane_g1_ParamLimits

0xecfc,	// (0x000368bf) list_single_2graphic_im_pane_g1

0xed0d,	// (0x000368d0) list_single_2graphic_im_pane_g2_ParamLimits

0xed0d,	// (0x000368d0) list_single_2graphic_im_pane_g2

0xed19,	// (0x000368dc) list_single_2graphic_im_pane_g3_ParamLimits

0xed19,	// (0x000368dc) list_single_2graphic_im_pane_g3

0x0003,

0xfc67,	// (0x0003782a) list_single_2graphic_im_pane_g_ParamLimits

0xfc67,	// (0x0003782a) list_single_2graphic_im_pane_g

0xed39,	// (0x000368fc) list_single_2graphic_im_pane_t1_ParamLimits

0xed39,	// (0x000368fc) list_single_2graphic_im_pane_t1

0xe884,	// (0x00036447) list_single_graphic_2heading_pane_fp_ParamLimits

0xe884,	// (0x00036447) list_single_graphic_2heading_pane_fp

0x791c,	// (0x0002f4df) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x791c,	// (0x0002f4df) list_single_graphic_2heading_pane_fp_g1

0xe89a,	// (0x0003645d) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xe89a,	// (0x0003645d) list_single_graphic_2heading_pane_fp_g2

0x6d14,	// (0x0002e8d7) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x6d14,	// (0x0002e8d7) list_single_graphic_2heading_pane_fp_g3

0x78f1,	// (0x0002f4b4) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x78f1,	// (0x0002f4b4) list_single_graphic_2heading_pane_fp_g4

0xe8a6,	// (0x00036469) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xe8a6,	// (0x00036469) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb8e,	// (0x00037751) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb8e,	// (0x00037751) list_single_graphic_2heading_pane_fp_g

0x7af5,	// (0x0002f6b8) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x7af5,	// (0x0002f6b8) list_single_graphic_2heading_pane_fp_t1

0x7954,	// (0x0002f517) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x7954,	// (0x0002f517) list_single_graphic_2heading_pane_fp_t2

0x7b0b,	// (0x0002f6ce) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x7b0b,	// (0x0002f6ce) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc70,	// (0x00037833) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc70,	// (0x00037833) list_single_graphic_2heading_pane_fp_t

0xe44c,	// (0x0003600f) fep_hwr_write_pane_g5_ParamLimits

0xe44c,	// (0x0003600f) fep_hwr_write_pane_g5

0xe458,	// (0x0003601b) fep_hwr_write_pane_g6_ParamLimits

0xe458,	// (0x0003601b) fep_hwr_write_pane_g6

0xeb19,	// (0x000366dc) eswt_shell_pane_ParamLimits

0xc67f,	// (0x00034242) bg_popup_window_pane_cp18_ParamLimits

0xd67f,	// (0x00035242) heading_pane_cp70

0xec43,	// (0x00036806) popup_eswt_tasktip_window_t1_ParamLimits

0x93fc,	// (0x00030fbf) aid_touch_tab_arrow_left

0x9412,	// (0x00030fd5) aid_touch_tab_arrow_right

0x3039,	// (0x0002abfc) title_pane_g3_ParamLimits

0x3039,	// (0x0002abfc) title_pane_g3

0xb7c5,	// (0x00033388) set_value_pane_g1

0x9334,	// (0x00030ef7) popup_toolbar_trans_pane_ParamLimits

0xecb0,	// (0x00036873) aid_size_cell_tb_trans_pane_ParamLimits

0xb806,	// (0x000333c9) bg_tb_trans_pane_ParamLimits

0xecc2,	// (0x00036885) grid_tb_trans_pane_ParamLimits

0xb2f2,	// (0x00032eb5) cont_note_pane_ParamLimits

0xb2f2,	// (0x00032eb5) cont_note_pane

0xb581,	// (0x00033144) cont_snote2_single_text_pane_ParamLimits

0xb581,	// (0x00033144) cont_snote2_single_text_pane

0xb581,	// (0x00033144) cont_snote2_single_graphic_pane_ParamLimits

0xb581,	// (0x00033144) cont_snote2_single_graphic_pane

0xcb8f,	// (0x00034752) cont_note_wait_pane_ParamLimits

0xcb8f,	// (0x00034752) cont_note_wait_pane

0xcb8f,	// (0x00034752) cont_note_image_pane_ParamLimits

0xcb8f,	// (0x00034752) cont_note_image_pane

0x0b37,	// (0x000286fa) popup_note2_window_g1_ParamLimits

0x0b37,	// (0x000286fa) popup_note2_window_g1

0x0b68,	// (0x0002872b) popup_note2_window_t1_ParamLimits

0x0b68,	// (0x0002872b) popup_note2_window_t1

0x0bad,	// (0x00028770) popup_note2_window_t2_ParamLimits

0x0bad,	// (0x00028770) popup_note2_window_t2

0x0bf2,	// (0x000287b5) popup_note2_window_t3_ParamLimits

0x0bf2,	// (0x000287b5) popup_note2_window_t3

0x0c37,	// (0x000287fa) popup_note2_window_t4_ParamLimits

0x0c37,	// (0x000287fa) popup_note2_window_t4

0xb36a,	// (0x00032f2d) popup_note2_window_t5_ParamLimits

0xb36a,	// (0x00032f2d) popup_note2_window_t5

0x0004,

0xfc7c,	// (0x0003783f) popup_note2_window_t_ParamLimits

0xfc7c,	// (0x0003783f) popup_note2_window_t

0x0c66,	// (0x00028829) popup_note2_image_window_g1_ParamLimits

0x0c66,	// (0x00028829) popup_note2_image_window_g1

0x0c72,	// (0x00028835) popup_note2_image_window_g2_ParamLimits

0x0c72,	// (0x00028835) popup_note2_image_window_g2

0x0001,

0xfc87,	// (0x0003784a) popup_note2_image_window_g_ParamLimits

0xfc87,	// (0x0003784a) popup_note2_image_window_g

0x0c84,	// (0x00028847) popup_note2_image_window_t1_ParamLimits

0x0c84,	// (0x00028847) popup_note2_image_window_t1

0x0c9c,	// (0x0002885f) popup_note2_image_window_t2_ParamLimits

0x0c9c,	// (0x0002885f) popup_note2_image_window_t2

0x0cb4,	// (0x00028877) popup_note2_image_window_t3_ParamLimits

0x0cb4,	// (0x00028877) popup_note2_image_window_t3

0x0002,

0xfc8c,	// (0x0003784f) popup_note2_image_window_t_ParamLimits

0xfc8c,	// (0x0003784f) popup_note2_image_window_t

0xcb9d,	// (0x00034760) popup_note2_wait_window_g1_ParamLimits

0xcb9d,	// (0x00034760) popup_note2_wait_window_g1

0x0cd0,	// (0x00028893) popup_note2_wait_window_g2_ParamLimits

0x0cd0,	// (0x00028893) popup_note2_wait_window_g2

0xcbb5,	// (0x00034778) popup_note2_wait_window_g3_ParamLimits

0xcbb5,	// (0x00034778) popup_note2_wait_window_g3

0x0002,

0xfc93,	// (0x00037856) popup_note2_wait_window_g_ParamLimits

0xfc93,	// (0x00037856) popup_note2_wait_window_g

0x0cdc,	// (0x0002889f) popup_note2_wait_window_t1_ParamLimits

0x0cdc,	// (0x0002889f) popup_note2_wait_window_t1

0x0cfa,	// (0x000288bd) popup_note2_wait_window_t2_ParamLimits

0x0cfa,	// (0x000288bd) popup_note2_wait_window_t2

0x0d18,	// (0x000288db) popup_note2_wait_window_t3_ParamLimits

0x0d18,	// (0x000288db) popup_note2_wait_window_t3

0x0d2a,	// (0x000288ed) popup_note2_wait_window_t4_ParamLimits

0x0d2a,	// (0x000288ed) popup_note2_wait_window_t4

0x0003,

0xfc9a,	// (0x0003785d) popup_note2_wait_window_t_ParamLimits

0xfc9a,	// (0x0003785d) popup_note2_wait_window_t

0x0d3c,	// (0x000288ff) wait_bar2_pane_ParamLimits

0x0d3c,	// (0x000288ff) wait_bar2_pane

0x0d54,	// (0x00028917) popup_snote2_single_text_window_g1_ParamLimits

0x0d54,	// (0x00028917) popup_snote2_single_text_window_g1

0x0d7c,	// (0x0002893f) popup_snote2_single_text_window_t1_ParamLimits

0x0d7c,	// (0x0002893f) popup_snote2_single_text_window_t1

0x0dc8,	// (0x0002898b) popup_snote2_single_text_window_t2_ParamLimits

0x0dc8,	// (0x0002898b) popup_snote2_single_text_window_t2

0x0e14,	// (0x000289d7) popup_snote2_single_text_window_t3_ParamLimits

0x0e14,	// (0x000289d7) popup_snote2_single_text_window_t3

0x0e55,	// (0x00028a18) popup_snote2_single_text_window_t4_ParamLimits

0x0e55,	// (0x00028a18) popup_snote2_single_text_window_t4

0x0e8b,	// (0x00028a4e) popup_snote2_single_text_window_t5_ParamLimits

0x0e8b,	// (0x00028a4e) popup_snote2_single_text_window_t5

0x0004,

0xfca3,	// (0x00037866) popup_snote2_single_text_window_t_ParamLimits

0xfca3,	// (0x00037866) popup_snote2_single_text_window_t

0x0eb6,	// (0x00028a79) popup_snote2_single_graphic_window_g1_ParamLimits

0x0eb6,	// (0x00028a79) popup_snote2_single_graphic_window_g1

0x0ede,	// (0x00028aa1) popup_snote2_single_graphic_window_g2_ParamLimits

0x0ede,	// (0x00028aa1) popup_snote2_single_graphic_window_g2

0x0001,

0xfcae,	// (0x00037871) popup_snote2_single_graphic_window_g_ParamLimits

0xfcae,	// (0x00037871) popup_snote2_single_graphic_window_g

0x0f06,	// (0x00028ac9) popup_snote2_single_graphic_window_t1_ParamLimits

0x0f06,	// (0x00028ac9) popup_snote2_single_graphic_window_t1

0x0f52,	// (0x00028b15) popup_snote2_single_graphic_window_t2_ParamLimits

0x0f52,	// (0x00028b15) popup_snote2_single_graphic_window_t2

0x0e14,	// (0x000289d7) popup_snote2_single_graphic_window_t3_ParamLimits

0x0e14,	// (0x000289d7) popup_snote2_single_graphic_window_t3

0x0e55,	// (0x00028a18) popup_snote2_single_graphic_window_t4_ParamLimits

0x0e55,	// (0x00028a18) popup_snote2_single_graphic_window_t4

0x0e8b,	// (0x00028a4e) popup_snote2_single_graphic_window_t5_ParamLimits

0x0e8b,	// (0x00028a4e) popup_snote2_single_graphic_window_t5

0x0004,

0xfcb3,	// (0x00037876) popup_snote2_single_graphic_window_t_ParamLimits

0xfcb3,	// (0x00037876) popup_snote2_single_graphic_window_t

0xe0b1,	// (0x00035c74) clock_nsta_pane_cp2_t1

0xe0b1,	// (0x00035c74) clock_nsta_pane_cp2_t2

0x0001,

0xfac7,	// (0x0003768a) clock_nsta_pane_cp2_t

0x7199,	// (0x0002ed5c) form_field_data_wide_pane_g1_ParamLimits

0xb814,	// (0x000333d7) form_field_data_wide_pane_g2_ParamLimits

0xb814,	// (0x000333d7) form_field_data_wide_pane_g2

0xb820,	// (0x000333e3) form_field_data_wide_pane_g3_ParamLimits

0xb820,	// (0x000333e3) form_field_data_wide_pane_g3

0x0002,

0xf681,	// (0x00037244) form_field_data_wide_pane_g_ParamLimits

0xf681,	// (0x00037244) form_field_data_wide_pane_g

0x9f00,	// (0x00031ac3) grid_touch_3_pane_ParamLimits

0x9f00,	// (0x00031ac3) grid_touch_3_pane

0xa3a7,	// (0x00031f6a) cell_touch_3_pane_ParamLimits

0xa3a7,	// (0x00031f6a) cell_touch_3_pane

0xe3c0,	// (0x00035f83) cell_touch_3_pane_g1

0xe3c0,	// (0x00035f83) cell_touch_3_pane_g2

0x0001,

0xfb4c,	// (0x0003770f) cell_touch_3_pane_g

0xb39c,	// (0x00032f5f) cont_query_data_pane

0xb3a4,	// (0x00032f67) cont_query_data_pane_cp1

0x0f9e,	// (0x00028b61) button_value_adjust_pane_cp7

0x0fa6,	// (0x00028b69) query_popup_pane_cp3

0xbd96,	// (0x00033959) bg_popup_sub_pane_cp22_ParamLimits

0x444e,	// (0x0002c011) navi_navi_volume_pane_cp2

0x4466,	// (0x0002c029) popup_side_volume_key_window_g2

0x4472,	// (0x0002c035) popup_side_volume_key_window_g3

0x0002,

0xf717,	// (0x000372da) popup_side_volume_key_window_g

0x448c,	// (0x0002c04f) popup_side_volume_key_window_t2

0x0001,

0xf71e,	// (0x000372e1) popup_side_volume_key_window_t

0xbfd7,	// (0x00033b9a) popup_side_volume_key_window_ParamLimits

0xee71,	// (0x00036a34) list_double_graphic_pane_g4_ParamLimits

0xee71,	// (0x00036a34) list_double_graphic_pane_g4

0x9dc9,	// (0x0003198c) list_single_2heading_msg_pane_ParamLimits

0x9dc9,	// (0x0003198c) list_single_2heading_msg_pane

0xf3ad,	// (0x00036f70) list_single_2heading_msg_pane_g1_ParamLimits

0xf3ad,	// (0x00036f70) list_single_2heading_msg_pane_g1

0xf3b9,	// (0x00036f7c) list_single_2heading_msg_pane_g2_ParamLimits

0xf3b9,	// (0x00036f7c) list_single_2heading_msg_pane_g2

0xf3cc,	// (0x00036f8f) list_single_2heading_msg_pane_g3_ParamLimits

0xf3cc,	// (0x00036f8f) list_single_2heading_msg_pane_g3

0xf3d8,	// (0x00036f9b) list_single_2heading_msg_pane_g4_ParamLimits

0xf3d8,	// (0x00036f9b) list_single_2heading_msg_pane_g4

0x0003,

0xfcbe,	// (0x00037881) list_single_2heading_msg_pane_g_ParamLimits

0xfcbe,	// (0x00037881) list_single_2heading_msg_pane_g

0xf3f0,	// (0x00036fb3) list_single_2heading_msg_pane_t1_ParamLimits

0xf3f0,	// (0x00036fb3) list_single_2heading_msg_pane_t1

0xf418,	// (0x00036fdb) list_single_2heading_msg_pane_t2_ParamLimits

0xf418,	// (0x00036fdb) list_single_2heading_msg_pane_t2

0xf483,	// (0x00037046) list_single_2heading_msg_pane_t3_ParamLimits

0xf483,	// (0x00037046) list_single_2heading_msg_pane_t3

0x7bf0,	// (0x0002f7b3) list_single_2heading_msg_pane_t4_ParamLimits

0x7bf0,	// (0x0002f7b3) list_single_2heading_msg_pane_t4

0x0003,

0xfcc7,	// (0x0003788a) list_single_2heading_msg_pane_t_ParamLimits

0xfcc7,	// (0x0003788a) list_single_2heading_msg_pane_t

0xb16d,	// (0x00032d30) title_pane_g4_ParamLimits

0xb16d,	// (0x00032d30) title_pane_g4

0x425c,	// (0x0002be1f) title_pane_stacon_g3_ParamLimits

0x425c,	// (0x0002be1f) title_pane_stacon_g3

0xed2d,	// (0x000368f0) list_single_2graphic_im_pane_g4_ParamLimits

0xed2d,	// (0x000368f0) list_single_2graphic_im_pane_g4

0xd4b1,	// (0x00035074) popup_side_volume_key_window_cp

0xd999,	// (0x0003555c) main_idle_act2_pane_t1

0x4dbd,	// (0x0002c980) toolbar_button_pane_g10

0x3353,	// (0x0002af16) popup_toolbar_window_cp1

0xe0a2,	// (0x00035c65) clock_nsta_pane_cp_t1

0xe0a2,	// (0x00035c65) clock_nsta_pane_cp_t2

0x0001,

0xfac2,	// (0x00037685) clock_nsta_pane_cp_t

0x444e,	// (0x0002c011) navi_navi_volume_pane_cp2_ParamLimits

0x445a,	// (0x0002c01d) popup_side_volume_key_window_g1_ParamLimits

0x4466,	// (0x0002c029) popup_side_volume_key_window_g2_ParamLimits

0x4472,	// (0x0002c035) popup_side_volume_key_window_g3_ParamLimits

0xf717,	// (0x000372da) popup_side_volume_key_window_g_ParamLimits

0x5241,	// (0x0002ce04) fep_hwr_aid_pane

0x52e8,	// (0x0002ceab) bg_fep_hwr_top_pane_g4_ParamLimits

0xe41c,	// (0x00035fdf) fep_hwr_top_pane_g1_ParamLimits

0xe42e,	// (0x00035ff1) fep_hwr_top_pane_g2_ParamLimits

0x5308,	// (0x0002cecb) fep_hwr_top_pane_g3_ParamLimits

0xfb17,	// (0x000376da) fep_hwr_top_pane_g_ParamLimits

0x531d,	// (0x0002cee0) fep_hwr_top_text_pane_ParamLimits

0xd286,	// (0x00034e49) aid_touch_tab_arrow_arrow_2

0xd28f,	// (0x00034e52) aid_touch_tab_arrow_left_2

0x5255,	// (0x0002ce18) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x528c,	// (0x0002ce4f) fep_hwr_prediction_pane

0xe55b,	// (0x0003611e) fep_vkb_prediction_pane

0xa216,	// (0x00031dd9) fep_vkb_side_pane_g3_ParamLimits

0xa216,	// (0x00031dd9) fep_vkb_side_pane_g3

0x5498,	// (0x0002d05b) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x5504,	// (0x0002d0c7) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x5511,	// (0x0002d0d4) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc6,	// (0x00037789) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x5685,	// (0x0002d248) fep_hwr_prediction_pane_g1

0x568f,	// (0x0002d252) fep_hwr_prediction_pane_g2

0x5697,	// (0x0002d25a) fep_hwr_prediction_pane_g3

0x569f,	// (0x0002d262) fep_hwr_prediction_pane_g4

0x0003,

0xfcd0,	// (0x00037893) fep_hwr_prediction_pane_g

0x0fb7,	// (0x00028b7a) fep_vkb_prediction_pane_g1

0x0fc1,	// (0x00028b84) fep_vkb_prediction_pane_g2

0x0fc9,	// (0x00028b8c) fep_vkb_prediction_pane_g3

0x0fd1,	// (0x00028b94) fep_vkb_prediction_pane_g4

0x0003,

0xfcd9,	// (0x0003789c) fep_vkb_prediction_pane_g

0x509d,	// (0x0002cc60) slider_set_pane_g3

0x50b1,	// (0x0002cc74) slider_set_pane_g4

0x50c9,	// (0x0002cc8c) slider_set_pane_g5

0x509d,	// (0x0002cc60) slider_set_pane_g6

0x50df,	// (0x0002cca2) slider_set_pane_g7

0xd704,	// (0x000352c7) slider_form_pane_g3

0xd70d,	// (0x000352d0) slider_form_pane_g4

0xd715,	// (0x000352d8) slider_form_pane_g5

0xd704,	// (0x000352c7) slider_form_pane_g6

0x9d97,	// (0x0003195a) slider_form_pane_g7

0xdc0f,	// (0x000357d2) slider_set_pane_vc_g3

0xdc18,	// (0x000357db) slider_set_pane_vc_g4

0xdc21,	// (0x000357e4) slider_set_pane_vc_g5

0xdc0f,	// (0x000357d2) slider_set_pane_vc_g6

0xdc2a,	// (0x000357ed) slider_set_pane_vc_g7

0xddda,	// (0x0003599d) slider_form_pane_vc_g1

0xdde3,	// (0x000359a6) slider_form_pane_vc_g2

0xddec,	// (0x000359af) slider_form_pane_vc_g3

0xddda,	// (0x0003599d) slider_form_pane_vc_g4

0xddf5,	// (0x000359b8) slider_form_pane_vc_g5

0x0004,

0xfa94,	// (0x00037657) slider_form_pane_vc_g

0x3f3a,	// (0x0002bafd) main_idle_act3_pane

0x0fd9,	// (0x00028b9c) ai3_links_pane

0xa3f0,	// (0x00031fb3) popup_ai3_data_window_ParamLimits

0xa3f0,	// (0x00031fb3) popup_ai3_data_window

0xb14f,	// (0x00032d12) grid_ai3_links_pane

0xa408,	// (0x00031fcb) cell_ai3_links_pane_ParamLimits

0xa408,	// (0x00031fcb) cell_ai3_links_pane

0x0fe2,	// (0x00028ba5) bg_popup_sub_pane_cp11

0x0fef,	// (0x00028bb2) cell_ai3_links_pane_g1

0xb14f,	// (0x00032d12) bg_popup_sub_pane_cp12

0x1014,	// (0x00028bd7) heading_ai3_data_pane

0x101c,	// (0x00028bdf) list_ai3_gene_pane

0x1028,	// (0x00028beb) popup_ai3_data_window_g1

0x1030,	// (0x00028bf3) heading_ai3_data_pane_g1

0x1038,	// (0x00028bfb) heading_ai3_data_pane_t1

0x1046,	// (0x00028c09) list_double_ai3_gene_pane_ParamLimits

0x1046,	// (0x00028c09) list_double_ai3_gene_pane

0x1053,	// (0x00028c16) list_single_ai3_gene_pane_ParamLimits

0x1053,	// (0x00028c16) list_single_ai3_gene_pane

0xe385,	// (0x00035f48) list_highlight_pane_cp7_ParamLimits

0xe385,	// (0x00035f48) list_highlight_pane_cp7

0x1060,	// (0x00028c23) list_single_a13_gene_pane_t1_ParamLimits

0x1060,	// (0x00028c23) list_single_a13_gene_pane_t1

0x1077,	// (0x00028c3a) list_single_ai3_gene_pane_g1

0x1080,	// (0x00028c43) list_single_ai3_gene_pane_g2

0x0001,

0xfce2,	// (0x000378a5) list_single_ai3_gene_pane_g

0x1088,	// (0x00028c4b) list_double_ai3_gene_pane_g1_ParamLimits

0x1088,	// (0x00028c4b) list_double_ai3_gene_pane_g1

0x1094,	// (0x00028c57) list_double_ai3_gene_pane_t1_ParamLimits

0x1094,	// (0x00028c57) list_double_ai3_gene_pane_t1

0x10b0,	// (0x00028c73) list_double_ai3_gene_pane_t2_ParamLimits

0x10b0,	// (0x00028c73) list_double_ai3_gene_pane_t2

0x10c5,	// (0x00028c88) list_double_ai3_gene_pane_t3_ParamLimits

0x10c5,	// (0x00028c88) list_double_ai3_gene_pane_t3

0x0002,

0xfce7,	// (0x000378aa) list_double_ai3_gene_pane_t_ParamLimits

0xfce7,	// (0x000378aa) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x7b21,	// (0x0002f6e4) aid_size_min_col_2

0xa3da,	// (0x00031f9d) aid_size_min_msg_ParamLimits

0xa3da,	// (0x00031f9d) aid_size_min_msg

0xa22a,	// (0x00031ded) fep_vkb_top_text_pane_g2_ParamLimits

0xa22a,	// (0x00031ded) fep_vkb_top_text_pane_g2

0x0001,

0xfb47,	// (0x0003770a) fep_vkb_top_text_pane_g_ParamLimits

0xfb47,	// (0x0003770a) fep_vkb_top_text_pane_g

0x3f3a,	// (0x0002bafd) main_hc_apps_shell_pane

0x10e2,	// (0x00028ca5) grid_hc_apps_pane_ParamLimits

0x10e2,	// (0x00028ca5) grid_hc_apps_pane

0x10f1,	// (0x00028cb4) list_hc_apps_pane

0x10f9,	// (0x00028cbc) scroll_pane_cp37_ParamLimits

0x10f9,	// (0x00028cbc) scroll_pane_cp37

0xa422,	// (0x00031fe5) cell_hc_apps_pane_ParamLimits

0xa422,	// (0x00031fe5) cell_hc_apps_pane

0xa4e0,	// (0x000320a3) cell_hc_apps_pane_g1_ParamLimits

0xa4e0,	// (0x000320a3) cell_hc_apps_pane_g1

0x1105,	// (0x00028cc8) cell_hc_apps_pane_g2_ParamLimits

0x1105,	// (0x00028cc8) cell_hc_apps_pane_g2

0x1121,	// (0x00028ce4) cell_hc_apps_pane_g3_ParamLimits

0x1121,	// (0x00028ce4) cell_hc_apps_pane_g3

0x0002,

0xfcee,	// (0x000378b1) cell_hc_apps_pane_g_ParamLimits

0xfcee,	// (0x000378b1) cell_hc_apps_pane_g

0xa50d,	// (0x000320d0) cell_hc_apps_pane_t1_ParamLimits

0xa50d,	// (0x000320d0) cell_hc_apps_pane_t1

0xb2f2,	// (0x00032eb5) grid_highlight_pane_cp10_ParamLimits

0xb2f2,	// (0x00032eb5) grid_highlight_pane_cp10

0xa54b,	// (0x0003210e) list_single_hc_apps_pane_ParamLimits

0xa54b,	// (0x0003210e) list_single_hc_apps_pane

0xa57c,	// (0x0003213f) list_single_hc_apps_pane_g1

0xf4f1,	// (0x000370b4) list_single_hc_apps_pane_g2

0x0001,

0xfcf5,	// (0x000378b8) list_single_hc_apps_pane_g

0xf50a,	// (0x000370cd) list_single_hc_apps_pane_g2_copy1

0xf526,	// (0x000370e9) list_single_hc_apps_pane_t1

0xb1bf,	// (0x00032d82) bg_set_opt_pane_cp_ParamLimits

0x4183,	// (0x0002bd46) setting_slider_pane_t1_ParamLimits

0x419c,	// (0x0002bd5f) setting_slider_pane_t2_ParamLimits

0x41b6,	// (0x0002bd79) setting_slider_pane_t3_ParamLimits

0xf564,	// (0x00037127) setting_slider_pane_t_ParamLimits

0x41ce,	// (0x0002bd91) slider_set_pane_ParamLimits

0x46ee,	// (0x0002c2b1) control_pane_g5_ParamLimits

0x46ee,	// (0x0002c2b1) control_pane_g5

0xd6c6,	// (0x00035289) slider_set_pane_g1_ParamLimits

0x5091,	// (0x0002cc54) slider_set_pane_g2_ParamLimits

0x509d,	// (0x0002cc60) slider_set_pane_g3_ParamLimits

0x50b1,	// (0x0002cc74) slider_set_pane_g4_ParamLimits

0x50c9,	// (0x0002cc8c) slider_set_pane_g5_ParamLimits

0x509d,	// (0x0002cc60) slider_set_pane_g6_ParamLimits

0x50df,	// (0x0002cca2) slider_set_pane_g7_ParamLimits

0xf965,	// (0x00037528) slider_set_pane_g_ParamLimits

0xc07b,	// (0x00033c3e) navi_icon_text_pane_ParamLimits

0x93c5,	// (0x00030f88) aid_fill_nsta_2_ParamLimits

0x93fc,	// (0x00030fbf) aid_touch_tab_arrow_left_ParamLimits

0x9412,	// (0x00030fd5) aid_touch_tab_arrow_right_ParamLimits

0x94ad,	// (0x00031070) clock_nsta_pane_ParamLimits

0xd27a,	// (0x00034e3d) navi_icon_pane_g1_ParamLimits

0x9b5f,	// (0x00031722) navi_text_pane_t1_ParamLimits

0xe0f7,	// (0x00035cba) navi_icon_text_pane_g1_ParamLimits

0xe103,	// (0x00035cc6) navi_icon_text_pane_t1_ParamLimits

0xa57c,	// (0x0003213f) list_single_hc_apps_pane_g1_ParamLimits

0xf4f1,	// (0x000370b4) list_single_hc_apps_pane_g2_ParamLimits

0xfcf5,	// (0x000378b8) list_single_hc_apps_pane_g_ParamLimits

0xf50a,	// (0x000370cd) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xf526,	// (0x000370e9) list_single_hc_apps_pane_t1_ParamLimits

0x87a0,	// (0x00030363) popup_toolbar2_fixed_window_ParamLimits

0x87a0,	// (0x00030363) popup_toolbar2_fixed_window

0x932a,	// (0x00030eed) popup_toolbar2_float_window

0xb14f,	// (0x00032d12) bg_popup_sub_pane_cp27

0x1143,	// (0x00028d06) grid_toolbar2_float_pane

0xb14f,	// (0x00032d12) bg_popup_sub_pane_cp26

0x1143,	// (0x00028d06) grid_toolbar2_fixed_pane

0xa595,	// (0x00032158) cell_toolbar2_fixed_pane_ParamLimits

0xa595,	// (0x00032158) cell_toolbar2_fixed_pane

0xa5b0,	// (0x00032173) cell_toolbar2_fixed_pane_g1

0x4b99,	// (0x0002c75c) toolbar2_fixed_button_pane

0xc60b,	// (0x000341ce) toolbar2_fixed_button_pane_g1

0xc61b,	// (0x000341de) toolbar2_fixed_button_pane_g2

0xc613,	// (0x000341d6) toolbar2_fixed_button_pane_g3

0xc62b,	// (0x000341ee) toolbar2_fixed_button_pane_g4

0xc623,	// (0x000341e6) toolbar2_fixed_button_pane_g5

0xc633,	// (0x000341f6) toolbar2_fixed_button_pane_g6

0xc63b,	// (0x000341fe) toolbar2_fixed_button_pane_g7

0xc64b,	// (0x0003420e) toolbar2_fixed_button_pane_g8

0xc643,	// (0x00034206) toolbar2_fixed_button_pane_g9

0x0008,

0xf867,	// (0x0003742a) toolbar2_fixed_button_pane_g

0x114b,	// (0x00028d0e) cell_toolbar2_float_pane_ParamLimits

0x114b,	// (0x00028d0e) cell_toolbar2_float_pane

0x115f,	// (0x00028d22) cell_toolbar2_float_pane_g1

0x4b99,	// (0x0002c75c) toolbar2_fixed_button_pane_cp

0xa112,	// (0x00031cd5) fep_vkb_accented_list_pane_ParamLimits

0xa112,	// (0x00031cd5) fep_vkb_accented_list_pane

0x5478,	// (0x0002d03b) bg_popup_fep_shadow_pane_g9

0xc1d7,	// (0x00033d9a) bg_popup_fep_shadow_pane_cp3

0xb919,	// (0x000334dc) list_accented_list_pane

0x1168,	// (0x00028d2b) list_single_accented_list_pane_ParamLimits

0x1168,	// (0x00028d2b) list_single_accented_list_pane

0xc1d7,	// (0x00033d9a) list_highlight_pane_cp10

0x1179,	// (0x00028d3c) list_single_accented_list_pane_t1

0x9254,	// (0x00030e17) popup_slider_window_ParamLimits

0x9254,	// (0x00030e17) popup_slider_window

0x0fae,	// (0x00028b71) aid_indentation_list_msg

0xa6a9,	// (0x0003226c) bg_popup_window_pane_cp19

0x11e5,	// (0x00028da8) popup_slider_window_g1

0x1201,	// (0x00028dc4) popup_slider_window_g2

0x121d,	// (0x00028de0) popup_slider_window_g3

0x0005,

0xfcfa,	// (0x000378bd) popup_slider_window_g

0x1239,	// (0x00028dfc) popup_slider_window_t1

0x127f,	// (0x00028e42) small_volume_slider_vertical_pane

0xe3c0,	// (0x00035f83) small_volume_slider_vertical_pane_g1

0xe3c0,	// (0x00035f83) small_volume_slider_vertical_pane_g2

0x129b,	// (0x00028e5e) small_volume_slider_vertical_pane_g3

0x0002,

0xfd0c,	// (0x000378cf) small_volume_slider_vertical_pane_g

0x870e,	// (0x000302d1) area_side_right_pane_ParamLimits

0x870e,	// (0x000302d1) area_side_right_pane

0xa761,	// (0x00032324) aid_size_side_button_ParamLimits

0xa761,	// (0x00032324) aid_size_side_button

0xa77a,	// (0x0003233d) grid_sctrl_middle_pane_ParamLimits

0xa77a,	// (0x0003233d) grid_sctrl_middle_pane

0x59ea,	// (0x0002d5ad) sctrl_sk_bottom_pane

0x59fb,	// (0x0002d5be) sctrl_sk_top_pane

0x5a0d,	// (0x0002d5d0) aid_touch_sctrl_top

0x5a1a,	// (0x0002d5dd) bg_sctrl_sk_pane_ParamLimits

0x5a1a,	// (0x0002d5dd) bg_sctrl_sk_pane

0x5a28,	// (0x0002d5eb) sctrl_sk_top_pane_g1

0x5a35,	// (0x0002d5f8) sctrl_sk_top_pane_t1

0x5a0d,	// (0x0002d5d0) aid_touch_sctrl_bottom

0x5a1a,	// (0x0002d5dd) bg_sctrl_sk_pane_cp_ParamLimits

0x5a1a,	// (0x0002d5dd) bg_sctrl_sk_pane_cp

0x5a50,	// (0x0002d613) sctrl_sk_bottom_pane_g1

0x5a35,	// (0x0002d5f8) sctrl_sk_bottom_pane_t1

0xa794,	// (0x00032357) cell_sctrl_middle_pane_ParamLimits

0xa794,	// (0x00032357) cell_sctrl_middle_pane

0xa7a5,	// (0x00032368) aid_touch_sctrl_middle_ParamLimits

0xa7a5,	// (0x00032368) aid_touch_sctrl_middle

0xa7b2,	// (0x00032375) bg_sctrl_middle_pane_ParamLimits

0xa7b2,	// (0x00032375) bg_sctrl_middle_pane

0x68f8,	// (0x0002e4bb) cell_sctrl_middle_pane_g1_ParamLimits

0x68f8,	// (0x0002e4bb) cell_sctrl_middle_pane_g1

0xa7c0,	// (0x00032383) cell_sctrl_middle_pane_g2_ParamLimits

0xa7c0,	// (0x00032383) cell_sctrl_middle_pane_g2

0x0001,

0xfd18,	// (0x000378db) cell_sctrl_middle_pane_g_ParamLimits

0xfd18,	// (0x000378db) cell_sctrl_middle_pane_g

0xc60b,	// (0x000341ce) bg_sctrl_middle_pane_g1

0xc613,	// (0x000341d6) bg_sctrl_middle_pane_g2

0xc61b,	// (0x000341de) bg_sctrl_middle_pane_g3

0xc623,	// (0x000341e6) bg_sctrl_middle_pane_g4

0xc62b,	// (0x000341ee) bg_sctrl_middle_pane_g5

0xc633,	// (0x000341f6) bg_sctrl_middle_pane_g6

0xc63b,	// (0x000341fe) bg_sctrl_middle_pane_g7

0xc643,	// (0x00034206) bg_sctrl_middle_pane_g8

0x0007,

0xfd1d,	// (0x000378e0) bg_sctrl_middle_pane_g

0xc64b,	// (0x0003420e) bg_sctrl_middle_pane_g8_copy1

0xc60b,	// (0x000341ce) bg_sctrl_sk_pane_g1

0xc61b,	// (0x000341de) bg_sctrl_sk_pane_g2

0xc613,	// (0x000341d6) bg_sctrl_sk_pane_g3

0x0008,

0xf867,	// (0x0003742a) bg_sctrl_sk_pane_g

0xb73f,	// (0x00033302) aid_size_touch_scroll_bar

0xc62b,	// (0x000341ee) bg_sctrl_sk_pane_g4

0xc623,	// (0x000341e6) bg_sctrl_sk_pane_g5

0xc633,	// (0x000341f6) bg_sctrl_sk_pane_g6

0xc63b,	// (0x000341fe) bg_sctrl_sk_pane_g7

0xc64b,	// (0x0003420e) bg_sctrl_sk_pane_g8

0xc643,	// (0x00034206) bg_sctrl_sk_pane_g9

0x4884,	// (0x0002c447) popup_fep_china_hwr2_fs_candidate_window

0x8d82,	// (0x00030945) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x8d82,	// (0x00030945) popup_fep_china_hwr2_fs_control_window

0x5498,	// (0x0002d05b) sctrl_sk_top_pane_g2

0x0001,

0xfd13,	// (0x000378d6) sctrl_sk_top_pane_g

0xa7cc,	// (0x0003238f) aid_fep_china_hwr2_fs_cell_ParamLimits

0xa7cc,	// (0x0003238f) aid_fep_china_hwr2_fs_cell

0xa7e0,	// (0x000323a3) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xa7e0,	// (0x000323a3) bg_popup_fep_shadow_pane_cp4

0xa7f7,	// (0x000323ba) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xa7f7,	// (0x000323ba) bg_popup_fep_shadow_pane_cp5

0xa809,	// (0x000323cc) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xa809,	// (0x000323cc) popup_fep_china_hwr2_fs_control_bar_grid

0xa81d,	// (0x000323e0) popup_fep_china_hwr2_fs_control_funtion_grid

0x131d,	// (0x00028ee0) aid_fep_china_hwr2_fs_candi_cell

0xb14f,	// (0x00032d12) bg_popup_fep_shadow_pane_cp6

0x1327,	// (0x00028eea) popup_fep_china_hwr2_fs_candidate_grid

0xa825,	// (0x000323e8) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xa825,	// (0x000323e8) cell_fep_china_hwr2_fs_funtion_grid

0xe3c0,	// (0x00035f83) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x1303,	// (0x00028ec6) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x1303,	// (0x00028ec6) cell_fep_china_hwr2_fs_funtion_grid_g1

0x1331,	// (0x00028ef4) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x1331,	// (0x00028ef4) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd2e,	// (0x000378f1) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd2e,	// (0x000378f1) cell_fep_china_hwr2_fs_funtion_grid_g

0xa83d,	// (0x00032400) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xa83d,	// (0x00032400) cell_fep_china_hwr2_fs_funtion_grid_t1

0xa852,	// (0x00032415) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xa852,	// (0x00032415) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd33,	// (0x000378f6) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd33,	// (0x000378f6) cell_fep_china_hwr2_fs_funtion_grid_t

0x1347,	// (0x00028f0a) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x134f,	// (0x00028f12) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x1357,	// (0x00028f1a) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd38,	// (0x000378fb) popup_fep_china_hwr2_fs_control_bar_grid_g

0x135f,	// (0x00028f22) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x135f,	// (0x00028f22) cell_fep_china_hwr2_fs_candidate_grid

0x1378,	// (0x00028f3b) popup_fep_china_hwr2_fs_candidate_grid_g20

0x1380,	// (0x00028f43) popup_fep_china_hwr2_fs_candidate_grid_g21

0xe3c0,	// (0x00035f83) cell_fep_china_hwr2_fs_candidate_grid_g1

0xe3c0,	// (0x00035f83) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb4c,	// (0x0003770f) cell_fep_china_hwr2_fs_candidate_grid_g

0x1388,	// (0x00028f4b) cell_fep_china_hwr2_fs_candidate_grid_t1

0xc458,	// (0x0003401b) clock_nsta_pane_cp_24_ParamLimits

0xc458,	// (0x0003401b) clock_nsta_pane_cp_24

0xc4c0,	// (0x00034083) indicator_nsta_pane_cp_24_ParamLimits

0xc4c0,	// (0x00034083) indicator_nsta_pane_cp_24

0xd198,	// (0x00034d5b) heading_pane_g1

0x0001,

0xf8cc,	// (0x0003748f) heading_pane_g

0xd826,	// (0x000353e9) grid_sct_catagory_button_pane

0xd7ab,	// (0x0003536e) scroll_pane_cp5_ParamLimits

0xe129,	// (0x00035cec) button_value_adjust_pane_cp5_ParamLimits

0xe129,	// (0x00035cec) button_value_adjust_pane_cp5

0xe1e7,	// (0x00035daa) form2_midp_time_pane_ParamLimits

0x1396,	// (0x00028f59) cell_sct_catagory_button_pane_ParamLimits

0x1396,	// (0x00028f59) cell_sct_catagory_button_pane

0xe385,	// (0x00035f48) bg_button_pane_cp01_ParamLimits

0xe385,	// (0x00035f48) bg_button_pane_cp01

0xe3c0,	// (0x00035f83) cell_sct_catagory_button_pane_g1

0x92cd,	// (0x00030e90) popup_tb_extension_window

0xa86e,	// (0x00032431) aid_size_cell_ext_ParamLimits

0xa86e,	// (0x00032431) aid_size_cell_ext

0xb581,	// (0x00033144) bg_tb_trans_pane_cp1_ParamLimits

0xb581,	// (0x00033144) bg_tb_trans_pane_cp1

0xa894,	// (0x00032457) grid_tb_ext_pane_ParamLimits

0xa894,	// (0x00032457) grid_tb_ext_pane

0xa8d6,	// (0x00032499) cell_tb_ext_pane_ParamLimits

0xa8d6,	// (0x00032499) cell_tb_ext_pane

0xa8fe,	// (0x000324c1) cell_tb_ext_pane_g1_ParamLimits

0xa8fe,	// (0x000324c1) cell_tb_ext_pane_g1

0x13a8,	// (0x00028f6b) cell_tb_ext_pane_t1

0xb2f2,	// (0x00032eb5) list_highlight_pane_cp11_ParamLimits

0xb2f2,	// (0x00032eb5) list_highlight_pane_cp11

0x40b6,	// (0x0002bc79) popup_uni_indicator_window_ParamLimits

0x40b6,	// (0x0002bc79) popup_uni_indicator_window

0xb806,	// (0x000333c9) bg_popup_sub_pane_cp14

0x13c3,	// (0x00028f86) list_uniindi_pane

0x13cf,	// (0x00028f92) uniindi_top_pane

0xb2f2,	// (0x00032eb5) bg_uniindi_top_pane

0x13ee,	// (0x00028fb1) uniindi_top_pane_g1

0x1404,	// (0x00028fc7) uniindi_top_pane_g2

0x0003,

0xfd3f,	// (0x00037902) uniindi_top_pane_g

0x142e,	// (0x00028ff1) uniindi_top_pane_t1

0x1458,	// (0x0002901b) list_single_uniindi_pane_ParamLimits

0x1458,	// (0x0002901b) list_single_uniindi_pane

0xe3c0,	// (0x00035f83) bg_uniindi_top_pane_g1

0x146b,	// (0x0002902e) list_single_uniindi_pane_g1

0x147e,	// (0x00029041) list_single_uniindi_pane_t1

0x3f3a,	// (0x0002bafd) control_bg_pane

0x14a3,	// (0x00029066) bg_sctrl_sk_pane_cp1

0x14ac,	// (0x0002906f) bg_sctrl_sk_pane_cp2

0x14b5,	// (0x00029078) control_bg_pane_g1

0x14be,	// (0x00029081) control_bg_pane_g2

0x0001,

0xfd48,	// (0x0003790b) control_bg_pane_g

0xdfed,	// (0x00035bb0) cell_indicator_nsta_pane_g1_ParamLimits

0x9f33,	// (0x00031af6) cell_indicator_nsta_pane_g2_ParamLimits

0xfab0,	// (0x00037673) cell_indicator_nsta_pane_g_ParamLimits

0x78de,	// (0x0002f4a1) form2_midp_time_pane_t1_ParamLimits

0x5233,	// (0x0002cdf6) main_idle_act4_pane_ParamLimits

0x5233,	// (0x0002cdf6) main_idle_act4_pane

0x92cd,	// (0x00030e90) popup_tb_extension_window_ParamLimits

0xa8bc,	// (0x0003247f) tb_ext_find_pane_ParamLimits

0xa8bc,	// (0x0003247f) tb_ext_find_pane

0x14c7,	// (0x0002908a) ai_gene_pane_1_cp1

0xc26b,	// (0x00033e2e) ai_gene_pane_2_cp1

0x14cf,	// (0x00029092) list_single_idle_plugin_calendar_pane

0x14d8,	// (0x0002909b) list_single_idle_plugin_notification_pane

0x14e1,	// (0x000290a4) list_single_idle_plugin_player_pane

0xa91b,	// (0x000324de) list_single_idle_plugin_shortcut_pane_ParamLimits

0xa91b,	// (0x000324de) list_single_idle_plugin_shortcut_pane

0xa943,	// (0x00032506) main_idle_act4_pane_t1

0xa959,	// (0x0003251c) main_idle_act4_pane_t2

0x0001,

0xfd4d,	// (0x00037910) main_idle_act4_pane_t

0xa971,	// (0x00032534) middle_sk_idle_act4_pane_ParamLimits

0xa971,	// (0x00032534) middle_sk_idle_act4_pane

0xa98d,	// (0x00032550) popup_clock_digital_analogue_window_cp2

0xa9b4,	// (0x00032577) shortcut_wheel_idle_act4_pane_ParamLimits

0xa9b4,	// (0x00032577) shortcut_wheel_idle_act4_pane

0xe3c0,	// (0x00035f83) shortcut_wheel_idle_act4_pane_g1

0xe3c0,	// (0x00035f83) shortcut_wheel_idle_act4_pane_g2

0xe3c0,	// (0x00035f83) shortcut_wheel_idle_act4_pane_g3

0xe3c0,	// (0x00035f83) shortcut_wheel_idle_act4_pane_g4

0xe3c0,	// (0x00035f83) shortcut_wheel_idle_act4_pane_g5

0x14ea,	// (0x000290ad) shortcut_wheel_idle_act4_pane_g6

0x14f2,	// (0x000290b5) shortcut_wheel_idle_act4_pane_g7

0x14fa,	// (0x000290bd) shortcut_wheel_idle_act4_pane_g8

0x1502,	// (0x000290c5) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd52,	// (0x00037915) shortcut_wheel_idle_act4_pane_g

0x22b4,	// (0x00029e77) middle_sk_idle_act4_pane_g1_ParamLimits

0x22b4,	// (0x00029e77) middle_sk_idle_act4_pane_g1

0xaa31,	// (0x000325f4) middle_sk_idle_act4_pane_g2_ParamLimits

0xaa31,	// (0x000325f4) middle_sk_idle_act4_pane_g2

0x0001,

0xfd75,	// (0x00037938) middle_sk_idle_act4_pane_g_ParamLimits

0xfd75,	// (0x00037938) middle_sk_idle_act4_pane_g

0xaa49,	// (0x0003260c) middle_sk_idle_act4_pane_t1_ParamLimits

0xaa49,	// (0x0003260c) middle_sk_idle_act4_pane_t1

0xaa78,	// (0x0003263b) grid_ai_shortcut_pane_ParamLimits

0xaa78,	// (0x0003263b) grid_ai_shortcut_pane

0xaa95,	// (0x00032658) list_highlight_pane_cp16_ParamLimits

0xaa95,	// (0x00032658) list_highlight_pane_cp16

0xaaa2,	// (0x00032665) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xaaa2,	// (0x00032665) list_single_idle_plugin_shortcut_pane_g1

0xaaae,	// (0x00032671) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xaaae,	// (0x00032671) list_single_idle_plugin_shortcut_pane_g2

0xaaca,	// (0x0003268d) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xaaca,	// (0x0003268d) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd7a,	// (0x0003793d) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd7a,	// (0x0003793d) list_single_idle_plugin_shortcut_pane_g

0xaadf,	// (0x000326a2) cell_ai_shortcut_pane_ParamLimits

0xaadf,	// (0x000326a2) cell_ai_shortcut_pane

0xaaf5,	// (0x000326b8) cell_ai_shortcut_pane_g1_ParamLimits

0xaaf5,	// (0x000326b8) cell_ai_shortcut_pane_g1

0x14c7,	// (0x0002908a) ai_gene_pane_1_cp2

0x150a,	// (0x000290cd) ai_gene_pane_2_cp2

0x1512,	// (0x000290d5) list_highlight_pane_cp15

0x151b,	// (0x000290de) list_single_idle_plugin_calendar_pane_g1

0x1512,	// (0x000290d5) list_highlight_pane_cp17

0x1523,	// (0x000290e6) list_single_idle_plugin_calendar_pane_g1_copy1

0x152b,	// (0x000290ee) list_single_idle_plugin_player_pane_g1

0xda39,	// (0x000355fc) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd81,	// (0x00037944) list_single_idle_plugin_player_pane_g

0x1533,	// (0x000290f6) list_single_idle_plugin_player_pane_t1

0x1541,	// (0x00029104) list_single_idle_plugin_player_pane_t2

0x154f,	// (0x00029112) list_single_idle_plugin_player_pane_t3

0x155d,	// (0x00029120) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd86,	// (0x00037949) list_single_idle_plugin_player_pane_t

0x156b,	// (0x0002912e) wait_bar_pane_cp15

0x1573,	// (0x00029136) grid_ai_notification_pane

0xda39,	// (0x000355fc) list_single_idle_plugin_notification_pane_g1

0xab17,	// (0x000326da) cell_ai_notification_pane_ParamLimits

0xab17,	// (0x000326da) cell_ai_notification_pane

0x157c,	// (0x0002913f) cell_ai_notification_pane_g1

0x1584,	// (0x00029147) cell_ai_notification_pane_t1

0xab24,	// (0x000326e7) tb_ext_find_button_pane

0xab2c,	// (0x000326ef) tb_ext_find_pane_g1

0xab34,	// (0x000326f7) tb_ext_find_pane_t1

0xbd35,	// (0x000338f8) tb_ext_find_button_pane_g1

0x2016,	// (0x00029bd9) tb_ext_find_button_pane_g2

0x0001,

0xfd8f,	// (0x00037952) tb_ext_find_button_pane_g

0xa943,	// (0x00032506) main_idle_act4_pane_t1_ParamLimits

0xa959,	// (0x0003251c) main_idle_act4_pane_t2_ParamLimits

0xfd4d,	// (0x00037910) main_idle_act4_pane_t_ParamLimits

0xa98d,	// (0x00032550) popup_clock_digital_analogue_window_cp2_ParamLimits

0xa9a4,	// (0x00032567) sat_plugin_idle_act4_pane_ParamLimits

0xa9a4,	// (0x00032567) sat_plugin_idle_act4_pane

0xab42,	// (0x00032705) sat_plugin_idle_act4_pane_t1_ParamLimits

0xab42,	// (0x00032705) sat_plugin_idle_act4_pane_t1

0xab5a,	// (0x0003271d) sat_plugin_idle_act4_pane_t2_ParamLimits

0xab5a,	// (0x0003271d) sat_plugin_idle_act4_pane_t2

0xab72,	// (0x00032735) sat_plugin_idle_act4_pane_t3_ParamLimits

0xab72,	// (0x00032735) sat_plugin_idle_act4_pane_t3

0xab8a,	// (0x0003274d) sat_plugin_idle_act4_pane_t4_ParamLimits

0xab8a,	// (0x0003274d) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd94,	// (0x00037957) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd94,	// (0x00037957) sat_plugin_idle_act4_pane_t

0x3fff,	// (0x0002bbc2) popup_battery_window_ParamLimits

0x3fff,	// (0x0002bbc2) popup_battery_window

0xb2f2,	// (0x00032eb5) bg_popup_sub_pane_cp25_ParamLimits

0xb2f2,	// (0x00032eb5) bg_popup_sub_pane_cp25

0x201f,	// (0x00029be2) popup_battery_window_g1_ParamLimits

0x201f,	// (0x00029be2) popup_battery_window_g1

0x202b,	// (0x00029bee) popup_battery_window_t1_ParamLimits

0x202b,	// (0x00029bee) popup_battery_window_t1

0x203d,	// (0x00029c00) popup_battery_window_t2_ParamLimits

0x203d,	// (0x00029c00) popup_battery_window_t2

0x0001,

0xfd9d,	// (0x00037960) popup_battery_window_t_ParamLimits

0xfd9d,	// (0x00037960) popup_battery_window_t

0x8ab0,	// (0x00030673) midp_canvas_pane_ParamLimits

0x8b0d,	// (0x000306d0) midp_keypad_pane_ParamLimits

0x8b0d,	// (0x000306d0) midp_keypad_pane

0xb96b,	// (0x0003352e) main_midp_pane_ParamLimits

0xe0c0,	// (0x00035c83) signal_pane_g2_cp_ParamLimits

0xaba2,	// (0x00032765) aid_size_cell_midp_keypad_ParamLimits

0xaba2,	// (0x00032765) aid_size_cell_midp_keypad

0xabc0,	// (0x00032783) midp_keyp_game_grid_pane_ParamLimits

0xabc0,	// (0x00032783) midp_keyp_game_grid_pane

0xabe7,	// (0x000327aa) midp_keyp_rocker_pane_ParamLimits

0xabe7,	// (0x000327aa) midp_keyp_rocker_pane

0xac30,	// (0x000327f3) midp_keyp_sk_left_pane_ParamLimits

0xac30,	// (0x000327f3) midp_keyp_sk_left_pane

0xac82,	// (0x00032845) midp_keyp_sk_right_pane_ParamLimits

0xac82,	// (0x00032845) midp_keyp_sk_right_pane

0xb14f,	// (0x00032d12) bg_button_pane_cp03

0xacd4,	// (0x00032897) midp_keyp_sk_left_pane_g1

0xb14f,	// (0x00032d12) bg_button_pane_cp04

0xacd4,	// (0x00032897) midp_keyp_sk_right_pane_g1

0xe3c0,	// (0x00035f83) midp_keyp_rocker_pane_g1

0xacdd,	// (0x000328a0) keyp_game_cell_pane_ParamLimits

0xacdd,	// (0x000328a0) keyp_game_cell_pane

0xb14f,	// (0x00032d12) bg_button_pane_cp02

0xad01,	// (0x000328c4) keyp_game_cell_pane_g1

0x8750,	// (0x00030313) popup_fep_vkb2_window_ParamLimits

0x8750,	// (0x00030313) popup_fep_vkb2_window

0xad0a,	// (0x000328cd) aid_size_cell_vkb2_ParamLimits

0xad0a,	// (0x000328cd) aid_size_cell_vkb2

0xad40,	// (0x00032903) popup_fep_vkb2_window_g1_ParamLimits

0xad40,	// (0x00032903) popup_fep_vkb2_window_g1

0xad90,	// (0x00032953) vkb2_area_bottom_pane_ParamLimits

0xad90,	// (0x00032953) vkb2_area_bottom_pane

0xade4,	// (0x000329a7) vkb2_area_keypad_pane_ParamLimits

0xade4,	// (0x000329a7) vkb2_area_keypad_pane

0xae2c,	// (0x000329ef) vkb2_area_top_pane_ParamLimits

0xae2c,	// (0x000329ef) vkb2_area_top_pane

0xaeb2,	// (0x00032a75) vkb2_top_entry_pane_ParamLimits

0xaeb2,	// (0x00032a75) vkb2_top_entry_pane

0xaedf,	// (0x00032aa2) vkb2_top_grid_left_pane_ParamLimits

0xaedf,	// (0x00032aa2) vkb2_top_grid_left_pane

0xaeff,	// (0x00032ac2) vkb2_top_grid_right_pane_ParamLimits

0xaeff,	// (0x00032ac2) vkb2_top_grid_right_pane

0x6148,	// (0x0002dd0b) vkb2_cell_keypad_pane_ParamLimits

0x6148,	// (0x0002dd0b) vkb2_cell_keypad_pane

0xaf45,	// (0x00032b08) vkb2_area_bottom_grid_pane_ParamLimits

0xaf45,	// (0x00032b08) vkb2_area_bottom_grid_pane

0xaf6f,	// (0x00032b32) vkb2_area_bottom_pane_g1_ParamLimits

0xaf6f,	// (0x00032b32) vkb2_area_bottom_pane_g1

0xaf95,	// (0x00032b58) vkb2_area_bottom_pane_g2_ParamLimits

0xaf95,	// (0x00032b58) vkb2_area_bottom_pane_g2

0xafc6,	// (0x00032b89) vkb2_area_bottom_pane_g3_ParamLimits

0xafc6,	// (0x00032b89) vkb2_area_bottom_pane_g3

0x0002,

0xfda2,	// (0x00037965) vkb2_area_bottom_pane_g_ParamLimits

0xfda2,	// (0x00037965) vkb2_area_bottom_pane_g

0x62f2,	// (0x0002deb5) vkb2_top_cell_left_pane_ParamLimits

0x62f2,	// (0x0002deb5) vkb2_top_cell_left_pane

0x18b8,	// (0x0002947b) vkb2_top_entry_pane_g1_ParamLimits

0x18b8,	// (0x0002947b) vkb2_top_entry_pane_g1

0x18c6,	// (0x00029489) vkb2_top_entry_pane_t1_ParamLimits

0x18c6,	// (0x00029489) vkb2_top_entry_pane_t1

0x2062,	// (0x00029c25) vkb2_top_entry_pane_t2_ParamLimits

0x2062,	// (0x00029c25) vkb2_top_entry_pane_t2

0x2094,	// (0x00029c57) vkb2_top_entry_pane_t3_ParamLimits

0x2094,	// (0x00029c57) vkb2_top_entry_pane_t3

0x0002,

0xfda9,	// (0x0003796c) vkb2_top_entry_pane_t_ParamLimits

0xfda9,	// (0x0003796c) vkb2_top_entry_pane_t

0xb030,	// (0x00032bf3) vkb2_top_grid_right_pane_g1_ParamLimits

0xb030,	// (0x00032bf3) vkb2_top_grid_right_pane_g1

0x6395,	// (0x0002df58) vkb2_top_grid_right_pane_g2_ParamLimits

0x6395,	// (0x0002df58) vkb2_top_grid_right_pane_g2

0x63ad,	// (0x0002df70) vkb2_top_grid_right_pane_g3_ParamLimits

0x63ad,	// (0x0002df70) vkb2_top_grid_right_pane_g3

0xb046,	// (0x00032c09) vkb2_top_grid_right_pane_g4_ParamLimits

0xb046,	// (0x00032c09) vkb2_top_grid_right_pane_g4

0x0003,

0xfdb0,	// (0x00037973) vkb2_top_grid_right_pane_g_ParamLimits

0xfdb0,	// (0x00037973) vkb2_top_grid_right_pane_g

0x63db,	// (0x0002df9e) vkb2_top_cell_left_pane_g1

0x63f2,	// (0x0002dfb5) vkb2_cell_keypad_pane_g1_ParamLimits

0x63f2,	// (0x0002dfb5) vkb2_cell_keypad_pane_g1

0x20b8,	// (0x00029c7b) vkb2_cell_keypad_pane_t1_ParamLimits

0x20b8,	// (0x00029c7b) vkb2_cell_keypad_pane_t1

0x6400,	// (0x0002dfc3) vkb2_cell_bottom_grid_pane_ParamLimits

0x6400,	// (0x0002dfc3) vkb2_cell_bottom_grid_pane

0x6439,	// (0x0002dffc) vkb2_cell_bottom_grid_pane_g1

0xa9d5,	// (0x00032598) aid_call2_pane_cp02

0xa9dd,	// (0x000325a0) aid_call_pane_cp02

0xa9e5,	// (0x000325a8) clock_digital_number_pane_cp10

0xa9ed,	// (0x000325b0) clock_digital_number_pane_cp11

0xa9f5,	// (0x000325b8) clock_digital_number_pane_cp12

0xa9fd,	// (0x000325c0) clock_digital_number_pane_cp13

0xaa05,	// (0x000325c8) clock_digital_separator_pane_cp10

0xbd35,	// (0x000338f8) popup_clock_digital_analogue_window_cp2_g1

0xbd35,	// (0x000338f8) popup_clock_digital_analogue_window_cp2_g2

0xaa0d,	// (0x000325d0) popup_clock_digital_analogue_window_cp2_g3

0xbd35,	// (0x000338f8) popup_clock_digital_analogue_window_cp2_g4

0xaa0d,	// (0x000325d0) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd65,	// (0x00037928) popup_clock_digital_analogue_window_cp2_g

0xaa15,	// (0x000325d8) popup_clock_digital_analogue_window_cp2_t1

0xaa23,	// (0x000325e6) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd70,	// (0x00037933) popup_clock_digital_analogue_window_cp2_t

0xe3c0,	// (0x00035f83) clock_digital_number_pane_cp10_g1

0xe3c0,	// (0x00035f83) clock_digital_number_pane_cp10_g2

0x0001,

0xfb4c,	// (0x0003770f) clock_digital_number_pane_cp10_g

0xe3c0,	// (0x00035f83) clock_digital_separator_pane_cp10_g1

0xe3c0,	// (0x00035f83) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb4c,	// (0x0003770f) clock_digital_separator_pane_cp10_g

0x1410,	// (0x00028fd3) uniindi_top_pane_g3

0x1421,	// (0x00028fe4) uniindi_top_pane_g4

0x61d3,	// (0x0002dd96) vkb2_row_keypad_pane_ParamLimits

0x61d3,	// (0x0002dd96) vkb2_row_keypad_pane

0x6459,	// (0x0002e01c) vkb2_cell_t_keypad_pane_ParamLimits

0x6459,	// (0x0002e01c) vkb2_cell_t_keypad_pane

0x6469,	// (0x0002e02c) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x6469,	// (0x0002e02c) vkb2_cell_t_keypad_pane_cp08

0x647c,	// (0x0002e03f) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x647c,	// (0x0002e03f) vkb2_cell_t_keypad_pane_cp09

0x6490,	// (0x0002e053) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x6490,	// (0x0002e053) vkb2_cell_t_keypad_pane_cp01

0x64a1,	// (0x0002e064) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x64a1,	// (0x0002e064) vkb2_cell_t_keypad_pane_cp02

0x64b2,	// (0x0002e075) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x64b2,	// (0x0002e075) vkb2_cell_t_keypad_pane_cp03

0x64c3,	// (0x0002e086) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x64c3,	// (0x0002e086) vkb2_cell_t_keypad_pane_cp04

0x64d4,	// (0x0002e097) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x64d4,	// (0x0002e097) vkb2_cell_t_keypad_pane_cp05

0x64e5,	// (0x0002e0a8) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x64e5,	// (0x0002e0a8) vkb2_cell_t_keypad_pane_cp06

0x64f6,	// (0x0002e0b9) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x64f6,	// (0x0002e0b9) vkb2_cell_t_keypad_pane_cp07

0x6507,	// (0x0002e0ca) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x6507,	// (0x0002e0ca) vkb2_cell_t_keypad_pane_cp10

0x5498,	// (0x0002d05b) vkb2_cell_t_keypad_pane_g1

0x20cf,	// (0x00029c92) vkb2_cell_t_keypad_pane_t1

0x3f3a,	// (0x0002bafd) popup_grid_graphic2_window

0x192b,	// (0x000294ee) aid_size_cell_graphic2_ParamLimits

0x192b,	// (0x000294ee) aid_size_cell_graphic2

0x1969,	// (0x0002952c) bg_popup_window_pane_cp21_ParamLimits

0x1969,	// (0x0002952c) bg_popup_window_pane_cp21

0x1977,	// (0x0002953a) graphic2_pages_pane_ParamLimits

0x1977,	// (0x0002953a) graphic2_pages_pane

0x19cd,	// (0x00029590) grid_graphic2_control_pane_ParamLimits

0x19cd,	// (0x00029590) grid_graphic2_control_pane

0x1a15,	// (0x000295d8) grid_graphic2_pane_ParamLimits

0x1a15,	// (0x000295d8) grid_graphic2_pane

0x1a9c,	// (0x0002965f) cell_graphic2_pane

0x3f3a,	// (0x0002bafd) main_comp_mode_pane

0x101c,	// (0x00028bdf) list_ai3_gene_pane_ParamLimits

0xa6a9,	// (0x0003226c) bg_popup_window_pane_cp19_ParamLimits

0x1187,	// (0x00028d4a) bg_touch_area_indi_pane_ParamLimits

0x1187,	// (0x00028d4a) bg_touch_area_indi_pane

0x119d,	// (0x00028d60) bg_touch_area_indi_pane_cp01_ParamLimits

0x119d,	// (0x00028d60) bg_touch_area_indi_pane_cp01

0x11b3,	// (0x00028d76) bg_touch_area_indi_pane_cp02_ParamLimits

0x11b3,	// (0x00028d76) bg_touch_area_indi_pane_cp02

0x11cb,	// (0x00028d8e) bg_touch_area_indi_pane_cp03_ParamLimits

0x11cb,	// (0x00028d8e) bg_touch_area_indi_pane_cp03

0x11e5,	// (0x00028da8) popup_slider_window_g1_ParamLimits

0x1201,	// (0x00028dc4) popup_slider_window_g2_ParamLimits

0x121d,	// (0x00028de0) popup_slider_window_g3_ParamLimits

0xfcfa,	// (0x000378bd) popup_slider_window_g_ParamLimits

0x1239,	// (0x00028dfc) popup_slider_window_t1_ParamLimits

0x127f,	// (0x00028e42) small_volume_slider_vertical_pane_ParamLimits

0x1a9c,	// (0x0002965f) cell_graphic2_pane_ParamLimits

0x1af9,	// (0x000296bc) bg_button_pane_cp10_ParamLimits

0x1af9,	// (0x000296bc) bg_button_pane_cp10

0x1b0c,	// (0x000296cf) bg_button_pane_cp11_ParamLimits

0x1b0c,	// (0x000296cf) bg_button_pane_cp11

0x1b1f,	// (0x000296e2) graphic2_pages_pane_g1_ParamLimits

0x1b1f,	// (0x000296e2) graphic2_pages_pane_g1

0x1b3a,	// (0x000296fd) graphic2_pages_pane_g2_ParamLimits

0x1b3a,	// (0x000296fd) graphic2_pages_pane_g2

0x0001,

0xfdbe,	// (0x00037981) graphic2_pages_pane_g_ParamLimits

0xfdbe,	// (0x00037981) graphic2_pages_pane_g

0x1b52,	// (0x00029715) graphic2_pages_pane_t1_ParamLimits

0x1b52,	// (0x00029715) graphic2_pages_pane_t1

0x1b6a,	// (0x0002972d) cell_graphic2_control_pane_ParamLimits

0x1b6a,	// (0x0002972d) cell_graphic2_control_pane

0x1b9c,	// (0x0002975f) cell_graphic2_pane_g1_ParamLimits

0x1b9c,	// (0x0002975f) cell_graphic2_pane_g1

0x22c2,	// (0x00029e85) cell_graphic2_pane_g2_ParamLimits

0x22c2,	// (0x00029e85) cell_graphic2_pane_g2

0x1ba9,	// (0x0002976c) cell_graphic2_pane_g3_ParamLimits

0x1ba9,	// (0x0002976c) cell_graphic2_pane_g3

0x22cf,	// (0x00029e92) cell_graphic2_pane_g4_ParamLimits

0x22cf,	// (0x00029e92) cell_graphic2_pane_g4

0x1bb6,	// (0x00029779) cell_graphic2_pane_g5_ParamLimits

0x1bb6,	// (0x00029779) cell_graphic2_pane_g5

0x0004,

0xfdc3,	// (0x00037986) cell_graphic2_pane_g_ParamLimits

0xfdc3,	// (0x00037986) cell_graphic2_pane_g

0x1bd6,	// (0x00029799) cell_graphic2_pane_t1_ParamLimits

0x1bd6,	// (0x00029799) cell_graphic2_pane_t1

0xd18c,	// (0x00034d4f) grid_highlight_pane_cp11_ParamLimits

0xd18c,	// (0x00034d4f) grid_highlight_pane_cp11

0xb2f2,	// (0x00032eb5) bg_button_pane_cp05

0x1c0a,	// (0x000297cd) cell_graphic2_control_pane_g1

0xe3c0,	// (0x00035f83) bg_touch_area_indi_pane_g1

0x20e1,	// (0x00029ca4) aid_cmod_rocker_key_size

0x20eb,	// (0x00029cae) aid_cmode_itu_key_size

0x20f5,	// (0x00029cb8) main_cmode_video_pane

0x20ff,	// (0x00029cc2) main_comp_mode_itu_pane

0x210b,	// (0x00029cce) main_comp_mode_rocker_pane

0x2117,	// (0x00029cda) cell_cmode_rocker_pane_ParamLimits

0x2117,	// (0x00029cda) cell_cmode_rocker_pane

0x2129,	// (0x00029cec) cell_cmode_itu_pane_ParamLimits

0x2129,	// (0x00029cec) cell_cmode_itu_pane

0xb806,	// (0x000333c9) bg_button_pane_cp06_ParamLimits

0xb806,	// (0x000333c9) bg_button_pane_cp06

0xe593,	// (0x00036156) cell_cmode_rocker_pane_g1_ParamLimits

0xe593,	// (0x00036156) cell_cmode_rocker_pane_g1

0x1303,	// (0x00028ec6) cell_cmode_rocker_pane_g2_ParamLimits

0x1303,	// (0x00028ec6) cell_cmode_rocker_pane_g2

0x0001,

0xfdd3,	// (0x00037996) cell_cmode_rocker_pane_g_ParamLimits

0xfdd3,	// (0x00037996) cell_cmode_rocker_pane_g

0xb14f,	// (0x00032d12) bg_button_pane_cp07

0x213e,	// (0x00029d01) cell_cmode_itu_pane_g1

0x2147,	// (0x00029d0a) cell_cmode_itu_pane_t1

0x2155,	// (0x00029d18) cell_cmode_itu_pane_t2

0x0001,

0xfdd8,	// (0x0003799b) cell_cmode_itu_pane_t

0x1493,	// (0x00029056) aid_touch_ctrl_left

0x149b,	// (0x0002905e) aid_touch_ctrl_right

0xb14f,	// (0x00032d12) compa_mode_pane

0x1c2e,	// (0x000297f1) aid_cmod_rocker_key_size_cp

0x1c38,	// (0x000297fb) aid_cmode_itu_key_size_cp

0x2163,	// (0x00029d26) compa_mode_pane_g1

0x216b,	// (0x00029d2e) compa_mode_pane_g2

0x2173,	// (0x00029d36) compa_mode_pane_g3

0x0002,

0xfddd,	// (0x000379a0) compa_mode_pane_g

0x1c42,	// (0x00029805) main_comp_mode_itu_pane_cp

0x1c4a,	// (0x0002980d) main_comp_mode_rocker_pane_cp

0x1c52,	// (0x00029815) cell_cmode_itu_pane_cp_ParamLimits

0x1c52,	// (0x00029815) cell_cmode_itu_pane_cp

0x1c67,	// (0x0002982a) cell_cmode_rocker_pane_cp_ParamLimits

0x1c67,	// (0x0002982a) cell_cmode_rocker_pane_cp

0xb806,	// (0x000333c9) bg_button_pane_cp06_cp_ParamLimits

0xb806,	// (0x000333c9) bg_button_pane_cp06_cp

0xe593,	// (0x00036156) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xe593,	// (0x00036156) cell_cmode_rocker_pane_g1_cp

0xe3c0,	// (0x00035f83) cell_cmode_rocker_pane_g2_cp

0xb14f,	// (0x00032d12) bg_button_pane_cp07_cp

0x1c79,	// (0x0002983c) cell_cmode_itu_pane_g1_cp

0x1c82,	// (0x00029845) cell_cmode_itu_pane_t1_cp

0x1c82,	// (0x00029845) cell_cmode_itu_pane_t2_cp

0x9d8d,	// (0x00031950) settings_code_pane_cp2

0xb1bf,	// (0x00032d82) bg_popup_window_pane_cp3_ParamLimits

0xb4c0,	// (0x00033083) heading_pane_cp3_ParamLimits

0xb4cc,	// (0x0003308f) listscroll_popup_graphic_pane_ParamLimits

0x5241,	// (0x0002ce04) fep_hwr_aid_pane_ParamLimits

0x5a0d,	// (0x0002d5d0) aid_touch_sctrl_top_ParamLimits

0x5a28,	// (0x0002d5eb) sctrl_sk_top_pane_g1_ParamLimits

0x5498,	// (0x0002d05b) sctrl_sk_top_pane_g2_ParamLimits

0xfd13,	// (0x000378d6) sctrl_sk_top_pane_g_ParamLimits

0x5a35,	// (0x0002d5f8) sctrl_sk_top_pane_t1_ParamLimits

0x5a0d,	// (0x0002d5d0) aid_touch_sctrl_bottom_ParamLimits

0x5a35,	// (0x0002d5f8) sctrl_sk_bottom_pane_t1_ParamLimits

0x13dc,	// (0x00028f9f) aid_area_touch_clock

0xae74,	// (0x00032a37) aid_vkb2_area_top_pane_cell_ParamLimits

0xae74,	// (0x00032a37) aid_vkb2_area_top_pane_cell

0xaf1f,	// (0x00032ae2) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xaf1f,	// (0x00032ae2) aid_vkb2_area_bottom_pane_cell

0x205a,	// (0x00029c1d) popup_char_count_window

0x217b,	// (0x00029d3e) popup_char_count_window_g1

0x2184,	// (0x00029d47) popup_char_count_window_g2

0x218d,	// (0x00029d50) popup_char_count_window_g3

0x0002,

0xfde4,	// (0x000379a7) popup_char_count_window_g

0x2196,	// (0x00029d59) popup_char_count_window_t1

0x5f70,	// (0x0002db33) popup_fep_char_preview_window_ParamLimits

0x5f70,	// (0x0002db33) popup_fep_char_preview_window

0xae94,	// (0x00032a57) vkb2_top_candi_pane_ParamLimits

0xae94,	// (0x00032a57) vkb2_top_candi_pane

0x1c90,	// (0x00029853) cell_vkb2_top_candi_pane_ParamLimits

0x1c90,	// (0x00029853) cell_vkb2_top_candi_pane

0x6887,	// (0x0002e44a) bg_popup_fep_char_preview_window_ParamLimits

0x6887,	// (0x0002e44a) bg_popup_fep_char_preview_window

0x6895,	// (0x0002e458) popup_fep_char_preview_window_t1_ParamLimits

0x6895,	// (0x0002e458) popup_fep_char_preview_window_t1

0x21b4,	// (0x00029d77) bg_popup_fep_char_preview_window_g1

0x21ac,	// (0x00029d6f) bg_popup_fep_char_preview_window_g2

0x21a4,	// (0x00029d67) bg_popup_fep_char_preview_window_g3

0x21d4,	// (0x00029d97) bg_popup_fep_char_preview_window_g4

0x21cc,	// (0x00029d8f) bg_popup_fep_char_preview_window_g5

0x68cf,	// (0x0002e492) bg_popup_fep_char_preview_window_g6

0x21c4,	// (0x00029d87) bg_popup_fep_char_preview_window_g7

0x21bc,	// (0x00029d7f) bg_popup_fep_char_preview_window_g8

0x21dc,	// (0x00029d9f) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdeb,	// (0x000379ae) bg_popup_fep_char_preview_window_g

0x5498,	// (0x0002d05b) cell_vkb2_top_candi_pane_g1_ParamLimits

0x5498,	// (0x0002d05b) cell_vkb2_top_candi_pane_g1

0x54a6,	// (0x0002d069) cell_vkb2_top_candi_pane_g2_ParamLimits

0x54a6,	// (0x0002d069) cell_vkb2_top_candi_pane_g2

0x21e4,	// (0x00029da7) cell_vkb2_top_candi_pane_g3_ParamLimits

0x21e4,	// (0x00029da7) cell_vkb2_top_candi_pane_g3

0x68d7,	// (0x0002e49a) cell_vkb2_top_candi_pane_g4_ParamLimits

0x68d7,	// (0x0002e49a) cell_vkb2_top_candi_pane_g4

0xe987,	// (0x0003654a) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe987,	// (0x0003654a) cell_vkb2_top_candi_pane_g5

0x68f8,	// (0x0002e4bb) cell_vkb2_top_candi_pane_g6_ParamLimits

0x68f8,	// (0x0002e4bb) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdfe,	// (0x000379c1) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdfe,	// (0x000379c1) cell_vkb2_top_candi_pane_g

0x6906,	// (0x0002e4c9) cell_vkb2_top_candi_pane_t1

0x507d,	// (0x0002cc40) aid_size_touch_slider_mark_ParamLimits

0x507d,	// (0x0002cc40) aid_size_touch_slider_mark

0x19b3,	// (0x00029576) grid_graphic2_catg_pane_ParamLimits

0x19b3,	// (0x00029576) grid_graphic2_catg_pane

0x1a6f,	// (0x00029632) popup_grid_graphic2_window_t1_ParamLimits

0x1a6f,	// (0x00029632) popup_grid_graphic2_window_t1

0x1a85,	// (0x00029648) popup_grid_graphic2_window_t2_ParamLimits

0x1a85,	// (0x00029648) popup_grid_graphic2_window_t2

0x0001,

0xfdb9,	// (0x0003797c) popup_grid_graphic2_window_t_ParamLimits

0xfdb9,	// (0x0003797c) popup_grid_graphic2_window_t

0xb2f2,	// (0x00032eb5) bg_button_pane_cp05_ParamLimits

0x1c0a,	// (0x000297cd) cell_graphic2_control_pane_g1_ParamLimits

0x1cf6,	// (0x000298b9) cell_graphic2_catg_pane_ParamLimits

0x1cf6,	// (0x000298b9) cell_graphic2_catg_pane

0xb14f,	// (0x00032d12) bg_button_pane_cp12

0x1d08,	// (0x000298cb) cell_graphic2_catg_pane_g1

0x13a8,	// (0x00028f6b) cell_tb_ext_pane_t1_ParamLimits

0x6352,	// (0x0002df15) vkb2_top_cell_right_narrow_pane_ParamLimits

0x6352,	// (0x0002df15) vkb2_top_cell_right_narrow_pane

0x636a,	// (0x0002df2d) vkb2_top_cell_right_wide_pane_ParamLimits

0x636a,	// (0x0002df2d) vkb2_top_cell_right_wide_pane

0x5233,	// (0x0002cdf6) bg_vkb2_func_pane_ParamLimits

0x5233,	// (0x0002cdf6) bg_vkb2_func_pane

0x63db,	// (0x0002df9e) vkb2_top_cell_left_pane_g1_ParamLimits

0x5233,	// (0x0002cdf6) bg_vkb2_fuc_pane_cp03_ParamLimits

0x5233,	// (0x0002cdf6) bg_vkb2_fuc_pane_cp03

0x6439,	// (0x0002dffc) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0xc613,	// (0x000341d6) bg_vkb2_func_pane_g1

0xc61b,	// (0x000341de) bg_vkb2_func_pane_g2

0xc62b,	// (0x000341ee) bg_vkb2_func_pane_g3

0xc623,	// (0x000341e6) bg_vkb2_func_pane_g4

0xc633,	// (0x000341f6) bg_vkb2_func_pane_g5

0xc63b,	// (0x000341fe) bg_vkb2_func_pane_g6

0xc643,	// (0x00034206) bg_vkb2_func_pane_g7

0xc64b,	// (0x0003420e) bg_vkb2_func_pane_g8

0xc60b,	// (0x000341ce) bg_vkb2_func_pane_g9

0x0008,

0xfe0b,	// (0x000379ce) bg_vkb2_func_pane_g

0x5233,	// (0x0002cdf6) bg_vkb2_fuc_pane_cp01_ParamLimits

0x5233,	// (0x0002cdf6) bg_vkb2_fuc_pane_cp01

0x63db,	// (0x0002df9e) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x63db,	// (0x0002df9e) vkb2_top_cell_right_wide_pane_g1

0x5233,	// (0x0002cdf6) bg_vkb2_fuc_pane_cp02_ParamLimits

0x5233,	// (0x0002cdf6) bg_vkb2_fuc_pane_cp02

0x6439,	// (0x0002dffc) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x6439,	// (0x0002dffc) vkb2_top_cell_right_narrow_pane_g1

0xa5e3,	// (0x000321a6) aid_touch_area_decrease_ParamLimits

0xa5e3,	// (0x000321a6) aid_touch_area_decrease

0xa61d,	// (0x000321e0) aid_touch_area_increase_ParamLimits

0xa61d,	// (0x000321e0) aid_touch_area_increase

0xa645,	// (0x00032208) aid_touch_area_mute_ParamLimits

0xa645,	// (0x00032208) aid_touch_area_mute

0xa675,	// (0x00032238) aid_touch_area_slider_ParamLimits

0xa675,	// (0x00032238) aid_touch_area_slider

0xa6b5,	// (0x00032278) popup_slider_window_g4_ParamLimits

0xa6b5,	// (0x00032278) popup_slider_window_g4

0xa6dd,	// (0x000322a0) popup_slider_window_g5_ParamLimits

0xa6dd,	// (0x000322a0) popup_slider_window_g5

0xa711,	// (0x000322d4) popup_slider_window_g6_ParamLimits

0xa711,	// (0x000322d4) popup_slider_window_g6

0x1267,	// (0x00028e2a) popup_slider_window_t2_ParamLimits

0x1267,	// (0x00028e2a) popup_slider_window_t2

0x0001,

0xfd07,	// (0x000378ca) popup_slider_window_t_ParamLimits

0xfd07,	// (0x000378ca) popup_slider_window_t

0xa72d,	// (0x000322f0) slider_pane_ParamLimits

0xa72d,	// (0x000322f0) slider_pane

0x2205,	// (0x00029dc8) slider_pane_g1_ParamLimits

0x2205,	// (0x00029dc8) slider_pane_g1

0x2219,	// (0x00029ddc) slider_pane_g2_ParamLimits

0x2219,	// (0x00029ddc) slider_pane_g2

0x222f,	// (0x00029df2) slider_pane_g3_ParamLimits

0x222f,	// (0x00029df2) slider_pane_g3

0x0003,

0xfe1e,	// (0x000379e1) slider_pane_g_ParamLimits

0xfe1e,	// (0x000379e1) slider_pane_g

0x9315,	// (0x00030ed8) popup_tb_float_extension_window_ParamLimits

0x9315,	// (0x00030ed8) popup_tb_float_extension_window

0x225b,	// (0x00029e1e) aid_size_cell_tb_float_ext

0xb14f,	// (0x00032d12) bg_popup_sub_window_cp28

0x2267,	// (0x00029e2a) grid_tb_float_ext_pane

0x2271,	// (0x00029e34) cell_tb_float_ext_pane_ParamLimits

0x2271,	// (0x00029e34) cell_tb_float_ext_pane

0x228b,	// (0x00029e4e) cell_tb_float_ext_pane_g1

0x2294,	// (0x00029e57) grid_highlight_pane_cp12

0xa0f0,	// (0x00031cb3) cell_last_hwr_side_pane_ParamLimits

0xa0f0,	// (0x00031cb3) cell_last_hwr_side_pane

0xe3c0,	// (0x00035f83) cell_last_hwr_side_pane_g1

0x229d,	// (0x00029e60) cell_last_hwr_side_pane_g2

0x0001,

0xfe27,	// (0x000379ea) cell_last_hwr_side_pane_g

0xaffb,	// (0x00032bbe) vkb2_area_bottom_space_btn_pane_ParamLimits

0xaffb,	// (0x00032bbe) vkb2_area_bottom_space_btn_pane

0x5498,	// (0x0002d05b) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x20cf,	// (0x00029c92) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x6906,	// (0x0002e4c9) cell_vkb2_top_candi_pane_t1_ParamLimits

0x6940,	// (0x0002e503) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x6940,	// (0x0002e503) vkb2_area_bottom_space_btn_pane_g1

0x697a,	// (0x0002e53d) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x697a,	// (0x0002e53d) vkb2_area_bottom_space_btn_pane_g2

0x69b0,	// (0x0002e573) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x69b0,	// (0x0002e573) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe2c,	// (0x000379ef) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe2c,	// (0x000379ef) vkb2_area_bottom_space_btn_pane_g

0x52f6,	// (0x0002ceb9) cel_fep_hwr_func_pane_ParamLimits

0x52f6,	// (0x0002ceb9) cel_fep_hwr_func_pane

0xa0c5,	// (0x00031c88) cell_hwr_side_button_pane_ParamLimits

0xa0c5,	// (0x00031c88) cell_hwr_side_button_pane

0x13dc,	// (0x00028f9f) aid_area_touch_clock_ParamLimits

0xb2f2,	// (0x00032eb5) bg_uniindi_top_pane_ParamLimits

0x13ee,	// (0x00028fb1) uniindi_top_pane_g1_ParamLimits

0x1404,	// (0x00028fc7) uniindi_top_pane_g2_ParamLimits

0x1410,	// (0x00028fd3) uniindi_top_pane_g3_ParamLimits

0x1421,	// (0x00028fe4) uniindi_top_pane_g4_ParamLimits

0xfd3f,	// (0x00037902) uniindi_top_pane_g_ParamLimits

0x142e,	// (0x00028ff1) uniindi_top_pane_t1_ParamLimits

0xb2f2,	// (0x00032eb5) bg_vkb2_func_pane_cp01_ParamLimits

0xb2f2,	// (0x00032eb5) bg_vkb2_func_pane_cp01

0x22a6,	// (0x00029e69) cel_fep_hwr_func_pane_g1_ParamLimits

0x22a6,	// (0x00029e69) cel_fep_hwr_func_pane_g1

0xb2f2,	// (0x00032eb5) bg_vkb2_func_pane_cp02_ParamLimits

0xb2f2,	// (0x00032eb5) bg_vkb2_func_pane_cp02

0x22a6,	// (0x00029e69) cell_hwr_side_button_pane_g1_ParamLimits

0x22a6,	// (0x00029e69) cell_hwr_side_button_pane_g1

0xc521,	// (0x000340e4) status_pane_g4_ParamLimits

0xc521,	// (0x000340e4) status_pane_g4

0xc53b,	// (0x000340fe) status_pane_t1

0xe24f,	// (0x00035e12) form2_midp_gauge_slider_cont_pane

0xe257,	// (0x00035e1a) form2_midp_gauge_slider_pane_t1_ParamLimits

0xa009,	// (0x00031bcc) form2_midp_gauge_slider_pane_t2_ParamLimits

0xa01d,	// (0x00031be0) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaff,	// (0x000376c2) form2_midp_gauge_slider_pane_t_ParamLimits

0xe269,	// (0x00035e2c) form2_midp_slider_pane_ParamLimits

0x5f30,	// (0x0002daf3) aid_size_cell_func_vkb2_ParamLimits

0x5f30,	// (0x0002daf3) aid_size_cell_func_vkb2

0x2247,	// (0x00029e0a) slider_pane_g4_ParamLimits

0x2247,	// (0x00029e0a) slider_pane_g4

0xb05c,	// (0x00032c1f) form2_midp_gauge_slider_pane_t2_cp01

0xb06c,	// (0x00032c2f) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xb06c,	// (0x00032c2f) form2_midp_gauge_slider_pane_t3_cp01

0x6a25,	// (0x0002e5e8) form2_midp_slider_pane_cp01

0xb14f,	// (0x00032d12) navi_smil_pane

0x22fe,	// (0x00029ec1) navi_smil_pane_g1

0x2306,	// (0x00029ec9) navi_smil_pane_t1

0x22dc,	// (0x00029e9f) form2_midp_slider_pane_g1

0x22e5,	// (0x00029ea8) form2_midp_slider_pane_g2

0x22ed,	// (0x00029eb0) form2_midp_slider_pane_g3

0x22dc,	// (0x00029e9f) form2_midp_slider_pane_g4

0x1d40,	// (0x00029903) form2_midp_slider_pane_g5

0x0004,

0xfe35,	// (0x000379f8) form2_midp_slider_pane_g

0x69ea,	// (0x0002e5ad) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x69ea,	// (0x0002e5ad) vkb2_area_bottom_space_btn_pane_g4

0x94f8,	// (0x000310bb) lc0_navi_pane_ParamLimits

0x94f8,	// (0x000310bb) lc0_navi_pane

0x9562,	// (0x00031125) lc0_stat_indi_pane_ParamLimits

0x9562,	// (0x00031125) lc0_stat_indi_pane

0x9577,	// (0x0003113a) ls0_title_pane_ParamLimits

0x9577,	// (0x0003113a) ls0_title_pane

0xb806,	// (0x000333c9) bg_popup_sub_pane_cp14_ParamLimits

0x13c3,	// (0x00028f86) list_uniindi_pane_ParamLimits

0x13cf,	// (0x00028f92) uniindi_top_pane_ParamLimits

0x146b,	// (0x0002902e) list_single_uniindi_pane_g1_ParamLimits

0x147e,	// (0x00029041) list_single_uniindi_pane_t1_ParamLimits

0xb08b,	// (0x00032c4e) lc0_stat_clock_pane_ParamLimits

0xb08b,	// (0x00032c4e) lc0_stat_clock_pane

0x1d65,	// (0x00029928) lc0_stat_indi_pane_g1_ParamLimits

0x1d65,	// (0x00029928) lc0_stat_indi_pane_g1

0x1d58,	// (0x0002991b) lc0_stat_indi_pane_g2_ParamLimits

0x1d58,	// (0x0002991b) lc0_stat_indi_pane_g2

0x0001,

0xfe40,	// (0x00037a03) lc0_stat_indi_pane_g_ParamLimits

0xfe40,	// (0x00037a03) lc0_stat_indi_pane_g

0xb098,	// (0x00032c5b) lc0_uni_indicator_pane_ParamLimits

0xb098,	// (0x00032c5b) lc0_uni_indicator_pane

0x1d7f,	// (0x00029942) ls0_title_pane_g1_ParamLimits

0x1d7f,	// (0x00029942) ls0_title_pane_g1

0x1d93,	// (0x00029956) ls0_title_pane_t1_ParamLimits

0x1d93,	// (0x00029956) ls0_title_pane_t1

0xb0a5,	// (0x00032c68) lc0_uni_indicator_pane_g1_ParamLimits

0xb0a5,	// (0x00032c68) lc0_uni_indicator_pane_g1

0x2314,	// (0x00029ed7) lc0_stat_clock_pane_t1

0x3f3a,	// (0x0002bafd) main_ai5_pane

0x2322,	// (0x00029ee5) ai5_sk_pane_ParamLimits

0x2322,	// (0x00029ee5) ai5_sk_pane

0x1def,	// (0x000299b2) cell_ai5_widget_pane_ParamLimits

0x1def,	// (0x000299b2) cell_ai5_widget_pane

0x232f,	// (0x00029ef2) aid_size_cell_widget_grid

0x2345,	// (0x00029f08) bg_ai5_widget_pane_ParamLimits

0x2345,	// (0x00029f08) bg_ai5_widget_pane

0x23af,	// (0x00029f72) cell_ai5_widget_pane_g2

0x23bf,	// (0x00029f82) cell_ai5_widget_pane_g3

0x23de,	// (0x00029fa1) cell_ai5_widget_pane_g4

0x23ea,	// (0x00029fad) cell_ai5_widget_pane_g5

0x23f6,	// (0x00029fb9) cell_ai5_widget_pane_g6

0x2402,	// (0x00029fc5) cell_ai5_widget_pane_g7

0x244a,	// (0x0002a00d) cell_ai5_widget_pane_t1_ParamLimits

0x244a,	// (0x0002a00d) cell_ai5_widget_pane_t1

0x2467,	// (0x0002a02a) cell_ai5_widget_pane_t2_ParamLimits

0x2467,	// (0x0002a02a) cell_ai5_widget_pane_t2

0x247f,	// (0x0002a042) cell_ai5_widget_pane_t3_ParamLimits

0x247f,	// (0x0002a042) cell_ai5_widget_pane_t3

0x2497,	// (0x0002a05a) cell_ai5_widget_pane_t4_ParamLimits

0x2497,	// (0x0002a05a) cell_ai5_widget_pane_t4

0x24b1,	// (0x0002a074) cell_ai5_widget_pane_t5_ParamLimits

0x24b1,	// (0x0002a074) cell_ai5_widget_pane_t5

0x24d0,	// (0x0002a093) cell_ai5_widget_pane_t6_ParamLimits

0x24d0,	// (0x0002a093) cell_ai5_widget_pane_t6

0x24e2,	// (0x0002a0a5) cell_ai5_widget_pane_t7_ParamLimits

0x24e2,	// (0x0002a0a5) cell_ai5_widget_pane_t7

0x24fb,	// (0x0002a0be) cell_ai5_widget_pane_t8_ParamLimits

0x24fb,	// (0x0002a0be) cell_ai5_widget_pane_t8

0x0009,

0xfe5a,	// (0x00037a1d) cell_ai5_widget_pane_t_ParamLimits

0xfe5a,	// (0x00037a1d) cell_ai5_widget_pane_t

0x2547,	// (0x0002a10a) grid_ai5_widget_pane

0xb806,	// (0x000333c9) highlight_cell_ai5_widget_pane_ParamLimits

0xb806,	// (0x000333c9) highlight_cell_ai5_widget_pane

0x1e59,	// (0x00029a1c) ai5_sk_left_pane

0x1e63,	// (0x00029a26) ai5_sk_middle_pane

0x1e6d,	// (0x00029a30) ai5_sk_right_pane

0x255f,	// (0x0002a122) bg_ai5_widget_pane_g1_ParamLimits

0x255f,	// (0x0002a122) bg_ai5_widget_pane_g1

0x256b,	// (0x0002a12e) bg_ai5_widget_pane_g2_ParamLimits

0x256b,	// (0x0002a12e) bg_ai5_widget_pane_g2

0x2577,	// (0x0002a13a) bg_ai5_widget_pane_g3_ParamLimits

0x2577,	// (0x0002a13a) bg_ai5_widget_pane_g3

0x2583,	// (0x0002a146) bg_ai5_widget_pane_g4_ParamLimits

0x2583,	// (0x0002a146) bg_ai5_widget_pane_g4

0x258f,	// (0x0002a152) bg_ai5_widget_pane_g5_ParamLimits

0x258f,	// (0x0002a152) bg_ai5_widget_pane_g5

0x259b,	// (0x0002a15e) bg_ai5_widget_pane_g6_ParamLimits

0x259b,	// (0x0002a15e) bg_ai5_widget_pane_g6

0x25a7,	// (0x0002a16a) bg_ai5_widget_pane_g7_ParamLimits

0x25a7,	// (0x0002a16a) bg_ai5_widget_pane_g7

0x25b3,	// (0x0002a176) bg_ai5_widget_pane_g8_ParamLimits

0x25b3,	// (0x0002a176) bg_ai5_widget_pane_g8

0x25bf,	// (0x0002a182) bg_ai5_widget_pane_g9_ParamLimits

0x25bf,	// (0x0002a182) bg_ai5_widget_pane_g9

0x0008,

0xfe6f,	// (0x00037a32) bg_ai5_widget_pane_g_ParamLimits

0xfe6f,	// (0x00037a32) bg_ai5_widget_pane_g

0x25f2,	// (0x0002a1b5) cell_shortcut_ai5_widget_pane_ParamLimits

0x25f2,	// (0x0002a1b5) cell_shortcut_ai5_widget_pane

0xc1d7,	// (0x00033d9a) bg_cell_shortcut_ai5_widget_pane

0x2603,	// (0x0002a1c6) cell_grid_ai5_widget_pane_g1

0x260c,	// (0x0002a1cf) highlight_cell_shortcut_ai5_widget_pane

0xc613,	// (0x000341d6) ai5_sk_left_pane_g1

0x2614,	// (0x0002a1d7) ai5_sk_left_pane_g2

0x261c,	// (0x0002a1df) ai5_sk_left_pane_g3

0x2624,	// (0x0002a1e7) ai5_sk_left_pane_g4

0x0003,

0xfe82,	// (0x00037a45) ai5_sk_left_pane_g

0x262c,	// (0x0002a1ef) ai5_sk_left_pane_t1

0xc61b,	// (0x000341de) ai5_sk_right_pane_g1

0x263a,	// (0x0002a1fd) ai5_sk_right_pane_g2

0x2642,	// (0x0002a205) ai5_sk_right_pane_g3

0x264a,	// (0x0002a20d) ai5_sk_right_pane_g4

0x0003,

0xfe8b,	// (0x00037a4e) ai5_sk_right_pane_g

0x2652,	// (0x0002a215) ai5_sk_right_pane_t1

0xc61b,	// (0x000341de) ai5_sk_middle_pane_g1

0xc613,	// (0x000341d6) ai5_sk_middle_pane_g2

0xc633,	// (0x000341f6) ai5_sk_middle_pane_g3

0x2642,	// (0x0002a205) ai5_sk_middle_pane_g4

0x261c,	// (0x0002a1df) ai5_sk_middle_pane_g5

0x2660,	// (0x0002a223) ai5_sk_middle_pane_g6

0x1e77,	// (0x00029a3a) ai5_sk_middle_pane_g7

0x0006,

0xfe94,	// (0x00037a57) ai5_sk_middle_pane_g

0x93e4,	// (0x00030fa7) aid_touch_area_size_lc0_ParamLimits

0x93e4,	// (0x00030fa7) aid_touch_area_size_lc0

0x54c7,	// (0x0002d08a) cell_hwr_candidate_pane_t1_ParamLimits

0xc443,	// (0x00034006) aid_touch_navi_pane

0x966a,	// (0x0003122d) status_dt_navi_pane_ParamLimits

0x966a,	// (0x0003122d) status_dt_navi_pane

0x9682,	// (0x00031245) status_dt_sta_pane_ParamLimits

0x9682,	// (0x00031245) status_dt_sta_pane

0x1e7f,	// (0x00029a42) dt_sta_controll_pane

0x1e8c,	// (0x00029a4f) dt_sta_indi_pane

0x1e99,	// (0x00029a5c) dt_sta_title_pane

0xb2f2,	// (0x00032eb5) bg_dt_sta_indi_pane_ParamLimits

0xb2f2,	// (0x00032eb5) bg_dt_sta_indi_pane

0x2668,	// (0x0002a22b) dt_sta_battery_pane

0x1eab,	// (0x00029a6e) dt_sta_indi_pane_g1

0x1eb4,	// (0x00029a77) dt_sta_indi_pane_g2

0x1ebd,	// (0x00029a80) dt_sta_indi_pane_g3

0x0002,

0xfea3,	// (0x00037a66) dt_sta_indi_pane_g

0x1ec6,	// (0x00029a89) dt_sta_signal_pane

0xb806,	// (0x000333c9) bg_dt_sta_title_pane_ParamLimits

0xb806,	// (0x000333c9) bg_dt_sta_title_pane

0x2670,	// (0x0002a233) dt_sta_title_pane_g1

0x1ecf,	// (0x00029a92) dt_sta_title_pane_t1_ParamLimits

0x1ecf,	// (0x00029a92) dt_sta_title_pane_t1

0xb14f,	// (0x00032d12) bg_dt_sta_control_pane

0x1ee4,	// (0x00029aa7) dt_sta_controll_pane_g1

0x2678,	// (0x0002a23b) bg_dt_sta_title_pane_g1

0x2681,	// (0x0002a244) bg_dt_sta_title_pane_g2

0x268a,	// (0x0002a24d) bg_dt_sta_title_pane_g3

0x0002,

0xfeaa,	// (0x00037a6d) bg_dt_sta_title_pane_g

0xe3c0,	// (0x00035f83) bg_dt_sta_indi_pane_g1

0x2693,	// (0x0002a256) dt_sta_signal_pane_g1

0x269b,	// (0x0002a25e) dt_sta_signal_pane_g2

0x0001,

0xfeb1,	// (0x00037a74) dt_sta_signal_pane_g

0x26a3,	// (0x0002a266) dt_sta_battery_pane_g1

0x26ac,	// (0x0002a26f) dt_sta_battery_pane_t1

0xe3c0,	// (0x00035f83) bg_dt_sta_control_pane_g1

0xbdb8,	// (0x0003397b) fep_china_uni_eep_pane

0xbdc0,	// (0x00033983) fep_china_uni_entry_pane_ParamLimits

0xbdd0,	// (0x00033993) popup_fep_china_uni_window_g1_ParamLimits

0xbde0,	// (0x000339a3) popup_fep_china_uni_window_g2_ParamLimits

0xbde0,	// (0x000339a3) popup_fep_china_uni_window_g2

0x0001,

0xf723,	// (0x000372e6) popup_fep_china_uni_window_g_ParamLimits

0xf723,	// (0x000372e6) popup_fep_china_uni_window_g

0x26bb,	// (0x0002a27e) fep_china_uni_eep_pane_g1

0x26c3,	// (0x0002a286) fep_china_uni_eep_pane_t1

0x22f5,	// (0x00029eb8) aid_touch_area_size_smil_player

0xc4f4,	// (0x000340b7) lc0_clock_pane

0xc52f,	// (0x000340f2) status_pane_g5_ParamLimits

0xc52f,	// (0x000340f2) status_pane_g5

0x8ea3,	// (0x00030a66) popup_keymap_window

0xc50d,	// (0x000340d0) status_icon_pane

0x23bf,	// (0x00029f82) cell_ai5_widget_pane_g3_ParamLimits

0x23de,	// (0x00029fa1) cell_ai5_widget_pane_g4_ParamLimits

0x23ea,	// (0x00029fad) cell_ai5_widget_pane_g5_ParamLimits

0x240e,	// (0x00029fd1) cell_ai5_widget_pane_g8_ParamLimits

0x240e,	// (0x00029fd1) cell_ai5_widget_pane_g8

0x2422,	// (0x00029fe5) cell_ai5_widget_pane_g9_ParamLimits

0x2422,	// (0x00029fe5) cell_ai5_widget_pane_g9

0x2436,	// (0x00029ff9) cell_ai5_widget_pane_g10_ParamLimits

0x2436,	// (0x00029ff9) cell_ai5_widget_pane_g10

0x26d2,	// (0x0002a295) status_icon_pane_g1

0xb14f,	// (0x00032d12) bg_popup_sub_pane_cp13

0x26da,	// (0x0002a29d) popup_keymap_window_t1

0x8bbf,	// (0x00030782) control_pane_g6_ParamLimits

0x8bbf,	// (0x00030782) control_pane_g6

0x8bcc,	// (0x0003078f) control_pane_g7_ParamLimits

0x8bcc,	// (0x0003078f) control_pane_g7

0x8bd9,	// (0x0003079c) control_pane_g8_ParamLimits

0x8bd9,	// (0x0003079c) control_pane_g8

0x1e7f,	// (0x00029a42) dt_sta_controll_pane_ParamLimits

0x1e8c,	// (0x00029a4f) dt_sta_indi_pane_ParamLimits

0x1e99,	// (0x00029a5c) dt_sta_title_pane_ParamLimits

0xb748,	// (0x0003330b) aid_size_touch_scroll_bar_cale

0x4013,	// (0x0002bbd6) popup_discreet_window_ParamLimits

0x4013,	// (0x0002bbd6) popup_discreet_window

0x8796,	// (0x00030359) popup_sk_window

0xcb8f,	// (0x00034752) bg_popup_sub_pane_cp28_ParamLimits

0xcb8f,	// (0x00034752) bg_popup_sub_pane_cp28

0x26e8,	// (0x0002a2ab) popup_discreet_window_g1_ParamLimits

0x26e8,	// (0x0002a2ab) popup_discreet_window_g1

0x2708,	// (0x0002a2cb) popup_discreet_window_t1_ParamLimits

0x2708,	// (0x0002a2cb) popup_discreet_window_t1

0x2726,	// (0x0002a2e9) popup_discreet_window_t2_ParamLimits

0x2726,	// (0x0002a2e9) popup_discreet_window_t2

0x0002,

0xfeb6,	// (0x00037a79) popup_discreet_window_t_ParamLimits

0xfeb6,	// (0x00037a79) popup_discreet_window_t

0x6a5d,	// (0x0002e620) popup_sk_window_g1

0x6a67,	// (0x0002e62a) popup_sk_window_g2

0x0001,

0xfebd,	// (0x00037a80) popup_sk_window_g

0x6a71,	// (0x0002e634) popup_sk_window_t1

0x6a7f,	// (0x0002e642) popup_sk_window_t1_copy1

0x23af,	// (0x00029f72) cell_ai5_widget_pane_g2_ParamLimits

0x250d,	// (0x0002a0d0) cell_ai5_widget_pane_t9_ParamLimits

0x250d,	// (0x0002a0d0) cell_ai5_widget_pane_t9

0xb14f,	// (0x00032d12) main_fep_fshwr2_pane

0xb0d3,	// (0x00032c96) aid_fshwr2_btn_pane

0xb0e2,	// (0x00032ca5) aid_fshwr2_syb_pane

0xb0f4,	// (0x00032cb7) aid_fshwr2_txt_pane

0xb103,	// (0x00032cc6) fshwr2_func_candi_pane

0xb114,	// (0x00032cd7) fshwr2_hwr_syb_pane

0xb12f,	// (0x00032cf2) fshwr2_icf_pane

0xb14f,	// (0x00032d12) fshwr2_icf_bg_pane

0x1f61,	// (0x00029b24) fshwr2_icf_pane_t1_ParamLimits

0x1f61,	// (0x00029b24) fshwr2_icf_pane_t1

0xe3c0,	// (0x00035f83) fshwr2_func_candi_pane_g1

0x2778,	// (0x0002a33b) fshwr2_func_candi_row_pane_ParamLimits

0x2778,	// (0x0002a33b) fshwr2_func_candi_row_pane

0x1f7a,	// (0x00029b3d) cell_fshwr2_syb_pane_ParamLimits

0x1f7a,	// (0x00029b3d) cell_fshwr2_syb_pane

0xe593,	// (0x00036156) fshwr2_hwr_syb_pane_g1_ParamLimits

0xe593,	// (0x00036156) fshwr2_hwr_syb_pane_g1

0xb14f,	// (0x00032d12) bg_popup_call_pane_cp01

0x2789,	// (0x0002a34c) fshwr2_func_candi_cell_pane_ParamLimits

0x2789,	// (0x0002a34c) fshwr2_func_candi_cell_pane

0x27b7,	// (0x0002a37a) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x27b7,	// (0x0002a37a) fshwr2_func_candi_cell_bg_pane

0x27d1,	// (0x0002a394) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x27d1,	// (0x0002a394) fshwr2_func_candi_cell_pane_g1

0x27f1,	// (0x0002a3b4) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x27f1,	// (0x0002a3b4) fshwr2_func_candi_cell_pane_t1

0xb14f,	// (0x00032d12) bg_button_pane_cp08

0xc1d7,	// (0x00033d9a) cell_fshwr2_syb_bg_pane

0x1f94,	// (0x00029b57) cell_fshwr2_syb_bg_pane_g1

0x1f9c,	// (0x00029b5f) cell_fshwr2_syb_bg_pane_t1

0xb806,	// (0x000333c9) main_tmo_pane

0x9bd6,	// (0x00031799) uni_indicator_pane_g1_ParamLimits

0x9beb,	// (0x000317ae) uni_indicator_pane_g2_ParamLimits

0xd516,	// (0x000350d9) uni_indicator_pane_g3_ParamLimits

0xd52c,	// (0x000350ef) uni_indicator_pane_g4_ParamLimits

0xd52c,	// (0x000350ef) uni_indicator_pane_g4

0xd540,	// (0x00035103) uni_indicator_pane_g5_ParamLimits

0xd540,	// (0x00035103) uni_indicator_pane_g5

0xd554,	// (0x00035117) uni_indicator_pane_g6_ParamLimits

0xd554,	// (0x00035117) uni_indicator_pane_g6

0xf922,	// (0x000374e5) uni_indicator_pane_g_ParamLimits

0xa5c5,	// (0x00032188) popup_tmo_note_window_ParamLimits

0xa5c5,	// (0x00032188) popup_tmo_note_window

0x5a86,	// (0x0002d649) fshwr2_bg_pane

0x27e2,	// (0x0002a3a5) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x27e2,	// (0x0002a3a5) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfec2,	// (0x00037a85) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfec2,	// (0x00037a85) fshwr2_func_candi_cell_pane_g

0xe3c0,	// (0x00035f83) bg_popup_window_pane_cp01

0x2804,	// (0x0002a3c7) bg_popup_window_pane_g1_cp01

0x280d,	// (0x0002a3d0) bg_popup_window_pane_cp22_ParamLimits

0x280d,	// (0x0002a3d0) bg_popup_window_pane_cp22

0x281b,	// (0x0002a3de) listscroll_tmo_link_pane_ParamLimits

0x281b,	// (0x0002a3de) listscroll_tmo_link_pane

0x285b,	// (0x0002a41e) popup_tmo_note_window_g1_ParamLimits

0x285b,	// (0x0002a41e) popup_tmo_note_window_g1

0x2868,	// (0x0002a42b) tmo_note_info_pane_ParamLimits

0x2868,	// (0x0002a42b) tmo_note_info_pane

0x1fab,	// (0x00029b6e) list_tmo_note_info_pane_g1_ParamLimits

0x1fab,	// (0x00029b6e) list_tmo_note_info_pane_g1

0x2882,	// (0x0002a445) list_tmo_note_info_pane_g2_ParamLimits

0x2882,	// (0x0002a445) list_tmo_note_info_pane_g2

0x0001,

0xfec7,	// (0x00037a8a) list_tmo_note_info_pane_g_ParamLimits

0xfec7,	// (0x00037a8a) list_tmo_note_info_pane_g

0x289e,	// (0x0002a461) list_tmo_note_info_text_pane_ParamLimits

0x289e,	// (0x0002a461) list_tmo_note_info_text_pane

0x28e0,	// (0x0002a4a3) list_tmo_link_pane

0x28ed,	// (0x0002a4b0) scroll_pane_cp20

0x28fa,	// (0x0002a4bd) list_single_tmo_link_pane_ParamLimits

0x28fa,	// (0x0002a4bd) list_single_tmo_link_pane

0x290a,	// (0x0002a4cd) list_single_tmo_link_pane_t1

0x2918,	// (0x0002a4db) list_tmo_note_info_text_pane_t1_ParamLimits

0x2918,	// (0x0002a4db) list_tmo_note_info_text_pane_t1

0x880b,	// (0x000303ce) aid_size_touch_scroll_bar_cp01_ParamLimits

0x880b,	// (0x000303ce) aid_size_touch_scroll_bar_cp01

0xf189,	// (0x00036d4c) aid_size_touch_slider_marker

0x8786,	// (0x00030349) popup_settings_window_ParamLimits

0x8786,	// (0x00030349) popup_settings_window

0x7390,	// (0x0002ef53) popup_candi_list_indi_window

0xc443,	// (0x00034006) aid_touch_navi_pane_ParamLimits

0x59e1,	// (0x0002d5a4) rs_clock_indi_pane

0x59ea,	// (0x0002d5ad) sctrl_sk_bottom_pane_ParamLimits

0x59fb,	// (0x0002d5be) sctrl_sk_top_pane_ParamLimits

0x5f8a,	// (0x0002db4d) popup_fep_tooltip_window

0x232f,	// (0x00029ef2) aid_size_cell_widget_grid_ParamLimits

0x23a3,	// (0x00029f66) cell_ai5_widget_pane_g1_ParamLimits

0x23a3,	// (0x00029f66) cell_ai5_widget_pane_g1

0x23f6,	// (0x00029fb9) cell_ai5_widget_pane_g6_ParamLimits

0x2402,	// (0x00029fc5) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe45,	// (0x00037a08) cell_ai5_widget_pane_g_ParamLimits

0xfe45,	// (0x00037a08) cell_ai5_widget_pane_g

0x2531,	// (0x0002a0f4) cell_ai5_widget_pane_t10_ParamLimits

0x2531,	// (0x0002a0f4) cell_ai5_widget_pane_t10

0x2547,	// (0x0002a10a) grid_ai5_widget_pane_ParamLimits

0x25cb,	// (0x0002a18e) cell_contacts_ai5_widget_pane_ParamLimits

0x25cb,	// (0x0002a18e) cell_contacts_ai5_widget_pane

0x273b,	// (0x0002a2fe) popup_discreet_window_t3_ParamLimits

0x273b,	// (0x0002a2fe) popup_discreet_window_t3

0x6aeb,	// (0x0002e6ae) popup_fshwr2_char_preview_window_ParamLimits

0x6aeb,	// (0x0002e6ae) popup_fshwr2_char_preview_window

0x1fc2,	// (0x00029b85) tmo_note_info_pane_t1

0x1fd7,	// (0x00029b9a) tmo_note_info_pane_t2

0x1ff0,	// (0x00029bb3) tmo_note_info_pane_t3

0x28bc,	// (0x0002a47f) tmo_note_info_pane_t4

0x28ce,	// (0x0002a491) tmo_note_info_pane_t5

0x0004,

0xfecc,	// (0x00037a8f) tmo_note_info_pane_t

0x28e0,	// (0x0002a4a3) list_tmo_link_pane_ParamLimits

0x28ed,	// (0x0002a4b0) scroll_pane_cp20_ParamLimits

0xb14f,	// (0x00032d12) bg_popup_fep_char_preview_window_cp01

0x2931,	// (0x0002a4f4) popup_fshwr2_char_preview_window_t1

0x293f,	// (0x0002a502) popup_candi_list_indi_window_g1

0x2948,	// (0x0002a50b) bg_cell_contacts_ai5_widget_pane

0x2954,	// (0x0002a517) cell_contacts_ai5_widget_pane_g1

0x2967,	// (0x0002a52a) cell_contacts_ai5_widget_pane_g2

0x2973,	// (0x0002a536) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfed7,	// (0x00037a9a) cell_contacts_ai5_widget_pane_g

0x2985,	// (0x0002a548) cell_contacts_ai5_widget_pane_t1

0xb806,	// (0x000333c9) highlight_cell_shortcut_ai5_widget_pane_cp01

0x29ff,	// (0x0002a5c2) settings_container_pane

0xc1d7,	// (0x00033d9a) listscroll_set_pane_copy1

0xdd67,	// (0x0003592a) scroll_pane_cp121_copy1

0x2a0b,	// (0x0002a5ce) set_content_pane_copy1

0x2a13,	// (0x0002a5d6) aid_height_set_list_copy1_ParamLimits

0x2a13,	// (0x0002a5d6) aid_height_set_list_copy1

0xc6bd,	// (0x00034280) aid_size_parent_copy1_ParamLimits

0xc6bd,	// (0x00034280) aid_size_parent_copy1

0x2a1f,	// (0x0002a5e2) button_value_adjust_pane_cp6_copy1_ParamLimits

0x2a1f,	// (0x0002a5e2) button_value_adjust_pane_cp6_copy1

0xb96b,	// (0x0003352e) list_highlight_pane_cp2_copy1_ParamLimits

0xb96b,	// (0x0003352e) list_highlight_pane_cp2_copy1

0x2a33,	// (0x0002a5f6) list_set_pane_copy1_ParamLimits

0x2a33,	// (0x0002a5f6) list_set_pane_copy1

0x299a,	// (0x0002a55d) main_pane_set_t1_copy1_ParamLimits

0x299a,	// (0x0002a55d) main_pane_set_t1_copy1

0x29d4,	// (0x0002a597) main_pane_set_t2_copy1_ParamLimits

0x29d4,	// (0x0002a597) main_pane_set_t2_copy1

0x2ae0,	// (0x0002a6a3) main_pane_set_t3_copy1

0x2aee,	// (0x0002a6b1) main_pane_set_t4_copy1

0x29f3,	// (0x0002a5b6) set_content_pane_g1_copy1_ParamLimits

0x29f3,	// (0x0002a5b6) set_content_pane_g1_copy1

0x2afc,	// (0x0002a6bf) setting_code_pane_copy1

0x2b04,	// (0x0002a6c7) setting_slider_graphic_pane_copy1

0x2b04,	// (0x0002a6c7) setting_slider_pane_copy1

0x2b04,	// (0x0002a6c7) setting_text_pane_copy1

0x2b04,	// (0x0002a6c7) setting_volume_pane_copy1

0x2afc,	// (0x0002a6bf) settings_code_pane_cp2_copy1

0x2b0c,	// (0x0002a6cf) settings_code_pane_cp_copy1_ParamLimits

0x2b0c,	// (0x0002a6cf) settings_code_pane_cp_copy1

0x6aff,	// (0x0002e6c2) volume_set_pane_copy1

0x2b20,	// (0x0002a6e3) volume_set_pane_g10_copy1

0x2b28,	// (0x0002a6eb) volume_set_pane_g1_copy1

0x2b30,	// (0x0002a6f3) volume_set_pane_g2_copy1

0x2b38,	// (0x0002a6fb) volume_set_pane_g3_copy1

0x2b40,	// (0x0002a703) volume_set_pane_g4_copy1

0x2b48,	// (0x0002a70b) volume_set_pane_g5_copy1

0x2b50,	// (0x0002a713) volume_set_pane_g6_copy1

0x2b58,	// (0x0002a71b) volume_set_pane_g7_copy1

0x2b60,	// (0x0002a723) volume_set_pane_g8_copy1

0x2b68,	// (0x0002a72b) volume_set_pane_g9_copy1

0xb1bf,	// (0x00032d82) bg_set_opt_pane_cp_copy1_ParamLimits

0xb1bf,	// (0x00032d82) bg_set_opt_pane_cp_copy1

0x6b07,	// (0x0002e6ca) setting_slider_pane_t1_copy1_ParamLimits

0x6b07,	// (0x0002e6ca) setting_slider_pane_t1_copy1

0x6b25,	// (0x0002e6e8) setting_slider_pane_t2_copy1_ParamLimits

0x6b25,	// (0x0002e6e8) setting_slider_pane_t2_copy1

0x6b3f,	// (0x0002e702) setting_slider_pane_t3_copy1_ParamLimits

0x6b3f,	// (0x0002e702) setting_slider_pane_t3_copy1

0x6b57,	// (0x0002e71a) slider_set_pane_copy1_ParamLimits

0x6b57,	// (0x0002e71a) slider_set_pane_copy1

0xb861,	// (0x00033424) set_opt_bg_pane_g1_copy2

0xb869,	// (0x0003342c) set_opt_bg_pane_g2_copy2

0x2b70,	// (0x0002a733) set_opt_bg_pane_g3_copy2

0xb879,	// (0x0003343c) set_opt_bg_pane_g4_copy2

0xb881,	// (0x00033444) set_opt_bg_pane_g5_copy2

0xb889,	// (0x0003344c) set_opt_bg_pane_g6_copy2

0x2b7a,	// (0x0002a73d) set_opt_bg_pane_g7_copy2

0x2b82,	// (0x0002a745) set_opt_bg_pane_g8_copy2

0x2b8c,	// (0x0002a74f) set_opt_bg_pane_g9_copy2

0x2b96,	// (0x0002a759) aid_size_touch_slider_mark_copy1_ParamLimits

0x2b96,	// (0x0002a759) aid_size_touch_slider_mark_copy1

0x2baa,	// (0x0002a76d) slider_set_pane_g1_copy1

0x2bb3,	// (0x0002a776) slider_set_pane_g2_copy1

0xe4a0,	// (0x00036063) slider_set_pane_g3_copy1_ParamLimits

0xe4a0,	// (0x00036063) slider_set_pane_g3_copy1

0xe4b4,	// (0x00036077) slider_set_pane_g4_copy1_ParamLimits

0xe4b4,	// (0x00036077) slider_set_pane_g4_copy1

0xe4cc,	// (0x0003608f) slider_set_pane_g5_copy1_ParamLimits

0xe4cc,	// (0x0003608f) slider_set_pane_g5_copy1

0xe4a0,	// (0x00036063) slider_set_pane_g6_copy1_ParamLimits

0xe4a0,	// (0x00036063) slider_set_pane_g6_copy1

0x2bbb,	// (0x0002a77e) slider_set_pane_g7_copy1_ParamLimits

0x2bbb,	// (0x0002a77e) slider_set_pane_g7_copy1

0xb163,	// (0x00032d26) bg_set_opt_pane_cp2_copy1

0x2bd1,	// (0x0002a794) setting_slider_graphic_pane_g1_copy1

0x2bea,	// (0x0002a7ad) setting_slider_graphic_pane_t1_copy1

0x2bda,	// (0x0002a79d) setting_slider_graphic_pane_t2_copy1

0x2bfa,	// (0x0002a7bd) slider_set_pane_cp_copy1

0x2c0a,	// (0x0002a7cd) input_focus_pane_cp1_copy1

0x2c13,	// (0x0002a7d6) list_set_text_pane_copy1

0x2c1b,	// (0x0002a7de) setting_text_pane_g1_copy1

0x7c78,	// (0x0002f83b) set_text_pane_t1_copy1

0x2c0a,	// (0x0002a7cd) input_focus_pane_cp2_copy1

0x2c1b,	// (0x0002a7de) setting_code_pane_g1_copy1

0x2c24,	// (0x0002a7e7) setting_code_pane_t1_copy1

0xd798,	// (0x0003535b) list_set_graphic_pane_copy1

0xb163,	// (0x00032d26) bg_set_opt_pane_cp4_copy1

0xbf5d,	// (0x00033b20) list_set_graphic_pane_g1_copy1_ParamLimits

0xbf5d,	// (0x00033b20) list_set_graphic_pane_g1_copy1

0x2c32,	// (0x0002a7f5) list_set_graphic_pane_g2_copy1

0xbf75,	// (0x00033b38) list_set_graphic_pane_t1_copy1_ParamLimits

0xbf75,	// (0x00033b38) list_set_graphic_pane_t1_copy1

0xe3c0,	// (0x00035f83) rs_clock_indi_pane_g1

0x2c3a,	// (0x0002a7fd) rs_clock_indi_pane_t1

0x2c48,	// (0x0002a80b) rs_indi_pane

0x2c50,	// (0x0002a813) rs_indi_pane_g1

0x2c59,	// (0x0002a81c) rs_indi_pane_g2

0x2c62,	// (0x0002a825) rs_indi_pane_g3

0x0002,

0xfede,	// (0x00037aa1) rs_indi_pane_g

0xc1d7,	// (0x00033d9a) bg_popup_preview_window_pane_cp03

0x2c6b,	// (0x0002a82e) popup_fep_tooltip_window_t1

0x0b5b,	// (0x0002871e) popup_note2_window_g2_ParamLimits

0x0b5b,	// (0x0002871e) popup_note2_window_g2

0x0001,

0xfc77,	// (0x0003783a) popup_note2_window_g_ParamLimits

0xfc77,	// (0x0003783a) popup_note2_window_g

0x0fe2,	// (0x00028ba5) bg_popup_sub_pane_cp11_ParamLimits

0x0fef,	// (0x00028bb2) cell_ai3_links_pane_g1_ParamLimits

0x1006,	// (0x00028bc9) cell_ai3_links_pane_t1

0x7c78,	// (0x0002f83b) set_text_pane_t1_copy1_ParamLimits

0x8a8a,	// (0x0003064d) cell_graphic_popup_pane_cp2_ParamLimits

0x8a8a,	// (0x0003064d) cell_graphic_popup_pane_cp2

0x2005,	// (0x00029bc8) cell_graphic_popup_pane_g1_cp2

0xb55b,	// (0x0003311e) cell_graphic_popup_pane_g2_cp2

0x2c79,	// (0x0002a83c) cell_graphic_popup_pane_g3_cp2

0x2c81,	// (0x0002a844) cell_graphic_popup_pane_t2_cp2

0xb56c,	// (0x0003312f) grid_highlight_pane_cp3_cp2

0xbb12,	// (0x000336d5) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xb806,	// (0x000333c9) main_tmo_pane_ParamLimits

0xa5b9,	// (0x0003217c) popup_tmo_big_image_note_window

0x2393,	// (0x00029f56) cell_ai5_widget_list_pane

0x239b,	// (0x00029f5e) cell_ai5_widget_lrg_icon_pane

0x1fc2,	// (0x00029b85) tmo_note_info_pane_t1_ParamLimits

0x1fd7,	// (0x00029b9a) tmo_note_info_pane_t2_ParamLimits

0x1ff0,	// (0x00029bb3) tmo_note_info_pane_t3_ParamLimits

0x28bc,	// (0x0002a47f) tmo_note_info_pane_t4_ParamLimits

0x28ce,	// (0x0002a491) tmo_note_info_pane_t5_ParamLimits

0xfecc,	// (0x00037a8f) tmo_note_info_pane_t_ParamLimits

0x29ff,	// (0x0002a5c2) settings_container_pane_ParamLimits

0x2c02,	// (0x0002a7c5) indicator_popup_pane_cp5

0x2c02,	// (0x0002a7c5) indicator_popup_pane_cp6

0xd798,	// (0x0003535b) list_set_graphic_pane_copy1_ParamLimits

0xb14f,	// (0x00032d12) bg_popup_window_pane_cp23

0x2c8f,	// (0x0002a852) popup_tmo_big_image_note_window_g1

0x2c98,	// (0x0002a85b) popup_tmo_big_image_note_window_t1

0x2ca8,	// (0x0002a86b) popup_tmo_big_image_note_window_t2

0x2cb8,	// (0x0002a87b) popup_tmo_big_image_note_window_t3

0x0002,

0xfee5,	// (0x00037aa8) popup_tmo_big_image_note_window_t

0x2cc8,	// (0x0002a88b) cell_ai5_widget_lrg_icon_pane_g1

0x2cd0,	// (0x0002a893) cell_ai5_widget_lrg_icon_pane_t1

0x2cde,	// (0x0002a8a1) cell_ai5_widget_list_row_pane_ParamLimits

0x2cde,	// (0x0002a8a1) cell_ai5_widget_list_row_pane

0x2cf6,	// (0x0002a8b9) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x2cf6,	// (0x0002a8b9) cell_ai5_widget_list_row_pane_g1

0x2d03,	// (0x0002a8c6) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x2d03,	// (0x0002a8c6) cell_ai5_widget_list_row_pane_t1

0x2d1b,	// (0x0002a8de) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x2d1b,	// (0x0002a8de) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeec,	// (0x00037aaf) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeec,	// (0x00037aaf) cell_ai5_widget_list_row_pane_t

0x3f3a,	// (0x0002bafd) main_fep_vtchi_ss_pane

0x6b7c,	// (0x0002e73f) popup_fep_char_pre_window

0x6b84,	// (0x0002e747) popup_fep_ituss_window

0x6ba5,	// (0x0002e768) popup_fep_vkbss_window

0x2d43,	// (0x0002a906) grid_vkbss_keypad_pane_ParamLimits

0x2d43,	// (0x0002a906) grid_vkbss_keypad_pane

0x2d53,	// (0x0002a916) ituss_keypad_pane

0x6bd0,	// (0x0002e793) aid_vkbss_key_offset_ParamLimits

0x6bd0,	// (0x0002e793) aid_vkbss_key_offset

0x6bdc,	// (0x0002e79f) cell_vkbss_key_pane_ParamLimits

0x6bdc,	// (0x0002e79f) cell_vkbss_key_pane

0xc6b1,	// (0x00034274) bg_cell_vkbss_key_g1_ParamLimits

0xc6b1,	// (0x00034274) bg_cell_vkbss_key_g1

0x2d63,	// (0x0002a926) cell_vkbss_key_3p_pane_ParamLimits

0x2d63,	// (0x0002a926) cell_vkbss_key_3p_pane

0x2d7d,	// (0x0002a940) cell_vkbss_key_g1_ParamLimits

0x2d7d,	// (0x0002a940) cell_vkbss_key_g1

0x2d97,	// (0x0002a95a) cell_vkbss_key_t1_ParamLimits

0x2d97,	// (0x0002a95a) cell_vkbss_key_t1

0x6bf2,	// (0x0002e7b5) cell_ituss_key_pane_ParamLimits

0x6bf2,	// (0x0002e7b5) cell_ituss_key_pane

0x2dc2,	// (0x0002a985) bg_cell_ituss_key_g1_ParamLimits

0x2dc2,	// (0x0002a985) bg_cell_ituss_key_g1

0x2dce,	// (0x0002a991) cell_ituss_key_pane_g1_ParamLimits

0x2dce,	// (0x0002a991) cell_ituss_key_pane_g1

0x2de2,	// (0x0002a9a5) cell_ituss_key_pane_g2_ParamLimits

0x2de2,	// (0x0002a9a5) cell_ituss_key_pane_g2

0x0001,

0xfef3,	// (0x00037ab6) cell_ituss_key_pane_g_ParamLimits

0xfef3,	// (0x00037ab6) cell_ituss_key_pane_g

0x2e10,	// (0x0002a9d3) cell_ituss_key_t1_ParamLimits

0x2e10,	// (0x0002a9d3) cell_ituss_key_t1

0x2e46,	// (0x0002aa09) cell_ituss_key_t2_ParamLimits

0x2e46,	// (0x0002aa09) cell_ituss_key_t2

0x2e77,	// (0x0002aa3a) cell_ituss_key_t3_ParamLimits

0x2e77,	// (0x0002aa3a) cell_ituss_key_t3

0x2eb1,	// (0x0002aa74) cell_ituss_key_t4_ParamLimits

0x2eb1,	// (0x0002aa74) cell_ituss_key_t4

0x0003,

0xfef8,	// (0x00037abb) cell_ituss_key_t_ParamLimits

0xfef8,	// (0x00037abb) cell_ituss_key_t

0x2efb,	// (0x0002aabe) cell_vkbss_key_3p_pane_g1

0x2ef3,	// (0x0002aab6) cell_vkbss_key_3p_pane_g2

0x2eeb,	// (0x0002aaae) cell_vkbss_key_3p_pane_g3

0x0002,

0xff01,	// (0x00037ac4) cell_vkbss_key_3p_pane_g

0xb14f,	// (0x00032d12) bg_popup_fep_char_preview_window_cp02

0x2f03,	// (0x0002aac6) popup_fep_char_pre_window_t1

0x1e4f,	// (0x00029a12) main_ai5_sk_pane

0x2948,	// (0x0002a50b) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x2954,	// (0x0002a517) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x2967,	// (0x0002a52a) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x2973,	// (0x0002a536) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfed7,	// (0x00037a9a) cell_contacts_ai5_widget_pane_g_ParamLimits

0x2985,	// (0x0002a548) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xb806,	// (0x000333c9) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0x200d,	// (0x00029bd0) main_ai5_sk_pane_g1

0xc9cd,	// (0x00034590) popup_query_code_window_g1

0x6b9a,	// (0x0002e75d) popup_fep_vkb_icf_pane

0x6bae,	// (0x0002e771) popup_fep_vtchi_icf_pane

0xb806,	// (0x000333c9) bg_icf_pane

0x2f41,	// (0x0002ab04) list_vkb_icf_pane

0xb806,	// (0x000333c9) bg_icf_pane_cp01

0x2f4d,	// (0x0002ab10) vtchi_icf_list_pane

0x2f5e,	// (0x0002ab21) list_vkb_icf_pane_t1_ParamLimits

0x2f5e,	// (0x0002ab21) list_vkb_icf_pane_t1

0x2f77,	// (0x0002ab3a) vtchi_icf_list_pane_t1_ParamLimits

0x2f77,	// (0x0002ab3a) vtchi_icf_list_pane_t1

0x6b84,	// (0x0002e747) popup_fep_ituss_window_ParamLimits

0x6bae,	// (0x0002e771) popup_fep_vtchi_icf_pane_ParamLimits

0x2d53,	// (0x0002a916) ituss_keypad_pane_ParamLimits

0x6bc4,	// (0x0002e787) ituss_sks_pane

0xb806,	// (0x000333c9) bg_icf_pane_ParamLimits

0x6b6d,	// (0x0002e730) icf_edit_indi_pane_ParamLimits

0x6b6d,	// (0x0002e730) icf_edit_indi_pane

0x2f41,	// (0x0002ab04) list_vkb_icf_pane_ParamLimits

0xb806,	// (0x000333c9) bg_icf_pane_cp01_ParamLimits

0x6b6d,	// (0x0002e730) icf_edit_indi_pane_cp01_ParamLimits

0x6b6d,	// (0x0002e730) icf_edit_indi_pane_cp01

0x2f55,	// (0x0002ab18) vtchi_query_pane

0xe593,	// (0x00036156) icf_edit_indi_pane_g1_ParamLimits

0xe593,	// (0x00036156) icf_edit_indi_pane_g1

0x3004,	// (0x0002abc7) icf_edit_indi_pane_g2_ParamLimits

0x3004,	// (0x0002abc7) icf_edit_indi_pane_g2

0x0001,

0xff19,	// (0x00037adc) icf_edit_indi_pane_g_ParamLimits

0xff19,	// (0x00037adc) icf_edit_indi_pane_g

0x3013,	// (0x0002abd6) icf_edit_indi_pane_t1

0x2f9a,	// (0x0002ab5d) bg_input_focus_pane_cp042

0xb73f,	// (0x00033302) vtchi_button_pane

0x2fa3,	// (0x0002ab66) vtchi_query_pane_t1

0x2fb1,	// (0x0002ab74) vtchi_query_pane_t2

0x2fbf,	// (0x0002ab82) vtchi_query_pane_t3

0x0002,

0xff08,	// (0x00037acb) vtchi_query_pane_t

0xb14f,	// (0x00032d12) bg_button_pane_cp13

0x2fcd,	// (0x0002ab90) vtchi_button_pane_g1

0x2fd5,	// (0x0002ab98) ituss_sks_pane_g1

0x2fe0,	// (0x0002aba3) ituss_sks_pane_g2

0x0001,

0xff0f,	// (0x00037ad2) ituss_sks_pane_g

0x2fe8,	// (0x0002abab) ituss_sks_pane_t1

0x2ff6,	// (0x0002abb9) ituss_sks_pane_t2

0x0001,

0xff14,	// (0x00037ad7) ituss_sks_pane_t

0xe079,	// (0x00035c3c) indicator_nsta_pane_cp_g1

0xe082,	// (0x00035c45) indicator_nsta_pane_cp_g2

0xe08a,	// (0x00035c4d) indicator_nsta_pane_cp_g3

0xe092,	// (0x00035c55) indicator_nsta_pane_cp_g4

0xe09a,	// (0x00035c5d) indicator_nsta_pane_cp_g5

0xe09a,	// (0x00035c5d) indicator_nsta_pane_cp_g6

0x0005,

0xfab5,	// (0x00037678) indicator_nsta_pane_cp_g

0x1bed,	// (0x000297b0) cell_graphic2_pane_t2_ParamLimits

0x1bed,	// (0x000297b0) cell_graphic2_pane_t2

0x0001,

0xfdce,	// (0x00037991) cell_graphic2_pane_t_ParamLimits

0xfdce,	// (0x00037991) cell_graphic2_pane_t

0x1c20,	// (0x000297e3) cell_graphic2_control_pane_t1

0x89cc,	// (0x0003058f) signal_pane_g3_ParamLimits

0x89cc,	// (0x0003058f) signal_pane_g3

0x89e0,	// (0x000305a3) signal_pane_g4_ParamLimits

0x89e0,	// (0x000305a3) signal_pane_g4

0x2d2d,	// (0x0002a8f0) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x2d2d,	// (0x0002a8f0) cell_ai5_widget_list_row_pane_t3

0x2dfe,	// (0x0002a9c1) cell_ituss_key_pane_t1_ParamLimits

0x2dfe,	// (0x0002a9c1) cell_ituss_key_pane_t1

0xc70d,	// (0x000342d0) form_field_data_wide_pane_vc_t2_ParamLimits

0xc70d,	// (0x000342d0) form_field_data_wide_pane_vc_t2

0xc721,	// (0x000342e4) form_field_data_wide_pane_vc_t3_ParamLimits

0xc721,	// (0x000342e4) form_field_data_wide_pane_vc_t3

0x0002,

0xf80a,	// (0x000373cd) form_field_data_wide_pane_vc_t_ParamLimits

0xf80a,	// (0x000373cd) form_field_data_wide_pane_vc_t

0xdda7,	// (0x0003596a) form_field_slider_wide_pane_vc_t3_ParamLimits

0xdda7,	// (0x0003596a) form_field_slider_wide_pane_vc_t3

0xde81,	// (0x00035a44) form_field_popup_wide_pane_vc_t2_ParamLimits

0xde81,	// (0x00035a44) form_field_popup_wide_pane_vc_t2

0xde98,	// (0x00035a5b) form_field_popup_wide_pane_vc_t3_ParamLimits

0xde98,	// (0x00035a5b) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaa4,	// (0x00037667) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaa4,	// (0x00037667) form_field_popup_wide_pane_vc_t

0xb0d3,	// (0x00032c96) aid_fshwr2_btn_pane_ParamLimits

0xb0e2,	// (0x00032ca5) aid_fshwr2_syb_pane_ParamLimits

0xb0f4,	// (0x00032cb7) aid_fshwr2_txt_pane_ParamLimits

0x5a86,	// (0x0002d649) fshwr2_bg_pane_ParamLimits

0xb103,	// (0x00032cc6) fshwr2_func_candi_pane_ParamLimits

0xb114,	// (0x00032cd7) fshwr2_hwr_syb_pane_ParamLimits

0xb12f,	// (0x00032cf2) fshwr2_icf_pane_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Small
