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

#include "aknlayoutscalable_abrw_pvp4_av_vga4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0002aaee };

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
0x718c,	// (0x00031c7a) Screen

0x71a0,	// (0x00031c8e) application_window_ParamLimits

0x71a0,	// (0x00031c8e) application_window

0x71ba,	// (0x00031ca8) screen_g1

0x4c52,	// (0x0002f740) area_bottom_pane_ParamLimits

0x4c52,	// (0x0002f740) area_bottom_pane

0x4d12,	// (0x0002f800) area_top_pane_ParamLimits

0x4d12,	// (0x0002f800) area_top_pane

0x4db0,	// (0x0002f89e) main_pane_ParamLimits

0x4db0,	// (0x0002f89e) main_pane

0x71c4,	// (0x00031cb2) misc_graphics

0x976f,	// (0x0003425d) battery_pane_ParamLimits

0x976f,	// (0x0003425d) battery_pane

0xa451,	// (0x00034f3f) bg_status_flat_pane_g8

0xa459,	// (0x00034f47) bg_status_flat_pane_g9

0x9837,	// (0x00034325) context_pane_ParamLimits

0x9837,	// (0x00034325) context_pane

0x995b,	// (0x00034449) navi_pane_ParamLimits

0x995b,	// (0x00034449) navi_pane

0x99ea,	// (0x000344d8) signal_pane_ParamLimits

0x99ea,	// (0x000344d8) signal_pane

0x0008,

0xf8b2,	// (0x0003a3a0) bg_status_flat_pane_g

0x9a57,	// (0x00034545) status_pane_g1_ParamLimits

0x9a57,	// (0x00034545) status_pane_g1

0x9a6b,	// (0x00034559) status_pane_g2_ParamLimits

0x9a6b,	// (0x00034559) status_pane_g2

0x9a77,	// (0x00034565) status_pane_g3_ParamLimits

0x9a77,	// (0x00034565) status_pane_g3

0x0004,

0xf7e0,	// (0x0003a2ce) status_pane_g_ParamLimits

0xf7e0,	// (0x0003a2ce) status_pane_g

0x9aab,	// (0x00034599) title_pane_ParamLimits

0x9aab,	// (0x00034599) title_pane

0x9ae8,	// (0x000345d6) uni_indicator_pane_ParamLimits

0x9ae8,	// (0x000345d6) uni_indicator_pane

0x9058,	// (0x00033b46) bg_list_pane_ParamLimits

0x9058,	// (0x00033b46) bg_list_pane

0x9078,	// (0x00033b66) find_pane

0x9080,	// (0x00033b6e) listscroll_app_pane_ParamLimits

0x9080,	// (0x00033b6e) listscroll_app_pane

0x908c,	// (0x00033b7a) listscroll_form_pane

0x9094,	// (0x00033b82) listscroll_gen_pane_ParamLimits

0x9094,	// (0x00033b82) listscroll_gen_pane

0x908c,	// (0x00033b7a) listscroll_set_pane

0x82cd,	// (0x00032dbb) main_idle_act_pane

0x8d34,	// (0x00033822) main_idle_trad_pane

0x8d34,	// (0x00033822) main_list_empty_pane

0x90ba,	// (0x00033ba8) main_midp_pane

0x90c6,	// (0x00033bb4) main_pane_g1_ParamLimits

0x90c6,	// (0x00033bb4) main_pane_g1

0x90d4,	// (0x00033bc2) popup_ai_message_window_ParamLimits

0x90d4,	// (0x00033bc2) popup_ai_message_window

0x9184,	// (0x00033c72) popup_fep_china_uni_window_ParamLimits

0x9184,	// (0x00033c72) popup_fep_china_uni_window

0x91e4,	// (0x00033cd2) popup_fep_japan_candidate_window_ParamLimits

0x91e4,	// (0x00033cd2) popup_fep_japan_candidate_window

0x920e,	// (0x00033cfc) popup_fep_japan_predictive_window_ParamLimits

0x920e,	// (0x00033cfc) popup_fep_japan_predictive_window

0x9244,	// (0x00033d32) popup_find_window

0x9251,	// (0x00033d3f) popup_grid_graphic_window_ParamLimits

0x9251,	// (0x00033d3f) popup_grid_graphic_window

0x927f,	// (0x00033d6d) popup_large_graphic_colour_window

0x92a5,	// (0x00033d93) popup_menu_window_ParamLimits

0x92a5,	// (0x00033d93) popup_menu_window

0x947b,	// (0x00033f69) popup_note_image_window

0x9465,	// (0x00033f53) popup_note_wait_window_ParamLimits

0x9465,	// (0x00033f53) popup_note_wait_window

0x9465,	// (0x00033f53) popup_note_window_ParamLimits

0x9465,	// (0x00033f53) popup_note_window

0x94e1,	// (0x00033fcf) popup_query_code_window_ParamLimits

0x94e1,	// (0x00033fcf) popup_query_code_window

0x94f7,	// (0x00033fe5) popup_query_data_code_window_ParamLimits

0x94f7,	// (0x00033fe5) popup_query_data_code_window

0x951a,	// (0x00034008) popup_query_data_window_ParamLimits

0x951a,	// (0x00034008) popup_query_data_window

0x953c,	// (0x0003402a) popup_query_sat_info_window_ParamLimits

0x953c,	// (0x0003402a) popup_query_sat_info_window

0x957b,	// (0x00034069) popup_snote_single_graphic_window_ParamLimits

0x957b,	// (0x00034069) popup_snote_single_graphic_window

0x957b,	// (0x00034069) popup_snote_single_text_window_ParamLimits

0x957b,	// (0x00034069) popup_snote_single_text_window

0x9592,	// (0x00034080) popup_sub_window_general

0x96d8,	// (0x000341c6) popup_window_general_ParamLimits

0x96d8,	// (0x000341c6) popup_window_general

0x96f1,	// (0x000341df) power_save_pane

0x5cda,	// (0x000307c8) control_pane_g1_ParamLimits

0x5cda,	// (0x000307c8) control_pane_g1

0x5d03,	// (0x000307f1) control_pane_g2_ParamLimits

0x5d03,	// (0x000307f1) control_pane_g2

0x9001,	// (0x00033aef) control_pane_g3_ParamLimits

0x9001,	// (0x00033aef) control_pane_g3

0x0007,

0xf7c8,	// (0x0003a2b6) control_pane_g_ParamLimits

0xf7c8,	// (0x0003a2b6) control_pane_g

0x5d43,	// (0x00030831) control_pane_t1_ParamLimits

0x5d43,	// (0x00030831) control_pane_t1

0x5d95,	// (0x00030883) control_pane_t2_ParamLimits

0x5d95,	// (0x00030883) control_pane_t2

0x0002,

0xf7d9,	// (0x0003a2c7) control_pane_t_ParamLimits

0xf7d9,	// (0x0003a2c7) control_pane_t

0x8f22,	// (0x00033a10) navi_navi_volume_pane_cp1

0x8f2b,	// (0x00033a19) status_small_icon_pane

0x8f33,	// (0x00033a21) status_small_pane_g1_ParamLimits

0x8f33,	// (0x00033a21) status_small_pane_g1

0x8f67,	// (0x00033a55) status_small_pane_g2_ParamLimits

0x8f67,	// (0x00033a55) status_small_pane_g2

0x8f73,	// (0x00033a61) status_small_pane_g3_ParamLimits

0x8f73,	// (0x00033a61) status_small_pane_g3

0x8f7f,	// (0x00033a6d) status_small_pane_g4_ParamLimits

0x8f7f,	// (0x00033a6d) status_small_pane_g4

0x8f8b,	// (0x00033a79) status_small_pane_g5_ParamLimits

0x8f8b,	// (0x00033a79) status_small_pane_g5

0x8f9a,	// (0x00033a88) status_small_pane_g6_ParamLimits

0x8f9a,	// (0x00033a88) status_small_pane_g6

0x0007,

0xf7b7,	// (0x0003a2a5) status_small_pane_g_ParamLimits

0xf7b7,	// (0x0003a2a5) status_small_pane_g

0x8fca,	// (0x00033ab8) status_small_pane_t1

0x8fed,	// (0x00033adb) status_small_wait_pane_ParamLimits

0x8fed,	// (0x00033adb) status_small_wait_pane

0x87cb,	// (0x000332b9) aid_levels_signal_ParamLimits

0x87cb,	// (0x000332b9) aid_levels_signal

0x87dd,	// (0x000332cb) signal_pane_g1_ParamLimits

0x87dd,	// (0x000332cb) signal_pane_g1

0x87f2,	// (0x000332e0) signal_pane_g2_ParamLimits

0x87f2,	// (0x000332e0) signal_pane_g2

0x0001,

0xf74c,	// (0x0003a23a) signal_pane_g_ParamLimits

0xf74c,	// (0x0003a23a) signal_pane_g

0x8807,	// (0x000332f5) context_pane_g1

0x71ce,	// (0x00031cbc) title_pane_g1

0x7204,	// (0x00031cf2) title_pane_t1

0x726c,	// (0x00031d5a) title_pane_t2

0x7292,	// (0x00031d80) title_pane_t3

0x0002,

0xf59b,	// (0x0003a089) title_pane_t

0x9b00,	// (0x000345ee) aid_levels_battery_ParamLimits

0x9b00,	// (0x000345ee) aid_levels_battery

0x9b14,	// (0x00034602) battery_pane_g1_ParamLimits

0x9b14,	// (0x00034602) battery_pane_g1

0x9b2a,	// (0x00034618) battery_pane_g2_ParamLimits

0x9b2a,	// (0x00034618) battery_pane_g2

0x0001,

0xf7eb,	// (0x0003a2d9) battery_pane_g_ParamLimits

0xf7eb,	// (0x0003a2d9) battery_pane_g

0xada1,	// (0x0003588f) uni_indicator_pane_g1

0xadb6,	// (0x000358a4) uni_indicator_pane_g2

0xadcc,	// (0x000358ba) uni_indicator_pane_g3

0x0005,

0xf95a,	// (0x0003a448) uni_indicator_pane_g

0x8ba2,	// (0x00033690) navi_icon_pane_ParamLimits

0x8ba2,	// (0x00033690) navi_icon_pane

0x8ae9,	// (0x000335d7) navi_midp_pane

0x8bbe,	// (0x000336ac) navi_navi_pane

0x8bc8,	// (0x000336b6) navi_text_pane_ParamLimits

0x8bc8,	// (0x000336b6) navi_text_pane

0x71ba,	// (0x00031ca8) status_small_wait_pane_g1

0x76d6,	// (0x000321c4) status_small_wait_pane_g2

0x0001,

0xf955,	// (0x0003a443) status_small_wait_pane_g

0xaab4,	// (0x000355a2) navi_navi_icon_text_pane

0xaabc,	// (0x000355aa) navi_navi_pane_g1_ParamLimits

0xaabc,	// (0x000355aa) navi_navi_pane_g1

0xaace,	// (0x000355bc) navi_navi_pane_g2_ParamLimits

0xaace,	// (0x000355bc) navi_navi_pane_g2

0x0001,

0xf923,	// (0x0003a411) navi_navi_pane_g_ParamLimits

0xf923,	// (0x0003a411) navi_navi_pane_g

0xaae0,	// (0x000355ce) navi_navi_tabs_pane

0xaae9,	// (0x000355d7) navi_navi_text_pane

0xaab4,	// (0x000355a2) navi_navi_volume_pane

0xaa8d,	// (0x0003557b) navi_text_pane_t1

0xaa7e,	// (0x0003556c) navi_icon_pane_g1

0xa9d1,	// (0x000354bf) navi_navi_text_pane_t1

0x618a,	// (0x00030c78) navi_navi_volume_pane_g1

0x6192,	// (0x00030c80) volume_small_pane

0xa937,	// (0x00035425) navi_navi_icon_text_pane_g1

0xa93f,	// (0x0003542d) navi_navi_icon_text_pane_t1

0x8bbe,	// (0x000336ac) navi_tabs_2_long_pane

0x8bbe,	// (0x000336ac) navi_tabs_2_pane

0x8bbe,	// (0x000336ac) navi_tabs_3_long_pane

0x8bbe,	// (0x000336ac) navi_tabs_3_pane

0x8bbe,	// (0x000336ac) navi_tabs_4_pane

0x616a,	// (0x00030c58) tabs_2_active_pane_ParamLimits

0x616a,	// (0x00030c58) tabs_2_active_pane

0x617a,	// (0x00030c68) tabs_2_passive_pane_ParamLimits

0x617a,	// (0x00030c68) tabs_2_passive_pane

0x6138,	// (0x00030c26) tabs_3_active_pane_ParamLimits

0x6138,	// (0x00030c26) tabs_3_active_pane

0x6148,	// (0x00030c36) tabs_3_passive_pane_ParamLimits

0x6148,	// (0x00030c36) tabs_3_passive_pane

0x6159,	// (0x00030c47) tabs_3_passive_pane_cp_ParamLimits

0x6159,	// (0x00030c47) tabs_3_passive_pane_cp

0x60ec,	// (0x00030bda) tabs_4_active_pane_ParamLimits

0x60ec,	// (0x00030bda) tabs_4_active_pane

0x60ff,	// (0x00030bed) tabs_4_passive_pane_ParamLimits

0x60ff,	// (0x00030bed) tabs_4_passive_pane

0x6110,	// (0x00030bfe) tabs_4_passive_pane_cp_ParamLimits

0x6110,	// (0x00030bfe) tabs_4_passive_pane_cp

0x6121,	// (0x00030c0f) tabs_4_passive_pane_cp2_ParamLimits

0x6121,	// (0x00030c0f) tabs_4_passive_pane_cp2

0x60c8,	// (0x00030bb6) tabs_2_long_active_pane_ParamLimits

0x60c8,	// (0x00030bb6) tabs_2_long_active_pane

0x60da,	// (0x00030bc8) tabs_2_long_passive_pane_ParamLimits

0x60da,	// (0x00030bc8) tabs_2_long_passive_pane

0x6089,	// (0x00030b77) tabs_3_long_active_pane_ParamLimits

0x6089,	// (0x00030b77) tabs_3_long_active_pane

0x609c,	// (0x00030b8a) tabs_3_long_passive_pane_ParamLimits

0x609c,	// (0x00030b8a) tabs_3_long_passive_pane

0x60b5,	// (0x00030ba3) tabs_3_long_passive_pane_cp_ParamLimits

0x60b5,	// (0x00030ba3) tabs_3_long_passive_pane_cp

0x602f,	// (0x00030b1d) volume_small_pane_g1

0x6038,	// (0x00030b26) volume_small_pane_g2

0x6041,	// (0x00030b2f) volume_small_pane_g3

0x604a,	// (0x00030b38) volume_small_pane_g4

0x6053,	// (0x00030b41) volume_small_pane_g5

0x605c,	// (0x00030b4a) volume_small_pane_g6

0x6065,	// (0x00030b53) volume_small_pane_g7

0x606e,	// (0x00030b5c) volume_small_pane_g8

0x6077,	// (0x00030b65) volume_small_pane_g9

0x6080,	// (0x00030b6e) volume_small_pane_g10

0x0009,

0xf8ef,	// (0x0003a3dd) volume_small_pane_g

0x72a4,	// (0x00031d92) bg_active_tab_pane_cp2_ParamLimits

0x72a4,	// (0x00031d92) bg_active_tab_pane_cp2

0x72b2,	// (0x00031da0) tabs_3_active_pane_g1

0x72ba,	// (0x00031da8) tabs_3_active_pane_t1

0x72a4,	// (0x00031d92) bg_passive_tab_pane_cp2_ParamLimits

0x72a4,	// (0x00031d92) bg_passive_tab_pane_cp2

0x72b2,	// (0x00031da0) tabs_3_passive_pane_g1

0x72ba,	// (0x00031da8) tabs_3_passive_pane_t1

0x72a4,	// (0x00031d92) bg_active_tab_pane_cp3_ParamLimits

0x72a4,	// (0x00031d92) bg_active_tab_pane_cp3

0x72cc,	// (0x00031dba) tabs_4_active_pane_g1

0x72d4,	// (0x00031dc2) tabs_4_active_pane_t1

0x72a4,	// (0x00031d92) bg_passive_tab_pane_cp3_ParamLimits

0x72a4,	// (0x00031d92) bg_passive_tab_pane_cp3

0x72cc,	// (0x00031dba) tabs_4_1_passive_pane_g1

0x72d4,	// (0x00031dc2) tabs_4_1_passive_pane_t1

0x90ba,	// (0x00033ba8) list_highlight_pane_cp2

0xb030,	// (0x00035b1e) list_set_pane_ParamLimits

0xb030,	// (0x00035b1e) list_set_pane

0xb0f8,	// (0x00035be6) main_pane_set_t1_ParamLimits

0xb0f8,	// (0x00035be6) main_pane_set_t1

0xb118,	// (0x00035c06) main_pane_set_t2_ParamLimits

0xb118,	// (0x00035c06) main_pane_set_t2

0xb12c,	// (0x00035c1a) main_pane_set_t3_ParamLimits

0xb12c,	// (0x00035c1a) main_pane_set_t3

0xb140,	// (0x00035c2e) main_pane_set_t4_ParamLimits

0xb140,	// (0x00035c2e) main_pane_set_t4

0x0003,

0xf9bf,	// (0x0003a4ad) main_pane_set_t_ParamLimits

0xf9bf,	// (0x0003a4ad) main_pane_set_t

0xb160,	// (0x00035c4e) setting_code_pane

0xb16a,	// (0x00035c58) setting_slider_graphic_pane

0xb16a,	// (0x00035c58) setting_slider_pane

0xb16a,	// (0x00035c58) setting_text_pane

0xb16a,	// (0x00035c58) setting_volume_pane

0x5007,	// (0x0002faf5) volume_set_pane

0x72a4,	// (0x00031d92) bg_set_opt_pane_cp

0x5011,	// (0x0002faff) setting_slider_pane_t1

0x5027,	// (0x0002fb15) setting_slider_pane_t2

0x5041,	// (0x0002fb2f) setting_slider_pane_t3

0x0002,

0xf5a2,	// (0x0003a090) setting_slider_pane_t

0x5059,	// (0x0002fb47) slider_set_pane

0x71c4,	// (0x00031cb2) bg_set_opt_pane_cp2

0x72e6,	// (0x00031dd4) setting_slider_graphic_pane_g1

0x506f,	// (0x0002fb5d) setting_slider_graphic_pane_t1

0x507f,	// (0x0002fb6d) setting_slider_graphic_pane_t2

0x0001,

0xf5a9,	// (0x0003a097) setting_slider_graphic_pane_t

0x508f,	// (0x0002fb7d) slider_set_pane_cp

0x71c4,	// (0x00031cb2) input_focus_pane_cp1

0xaff1,	// (0x00035adf) list_set_text_pane

0x71ba,	// (0x00031ca8) setting_text_pane_g1

0x71c4,	// (0x00031cb2) input_focus_pane_cp2

0x71ba,	// (0x00031ca8) setting_code_pane_g1

0x72ef,	// (0x00031ddd) setting_code_pane_t1

0x41f8,	// (0x0002ece6) set_text_pane_t1_ParamLimits

0x41f8,	// (0x0002ece6) set_text_pane_t1

0x813d,	// (0x00032c2b) set_opt_bg_pane_g1

0x8145,	// (0x00032c33) set_opt_bg_pane_g2

0xafc9,	// (0x00035ab7) set_opt_bg_pane_g3

0x8155,	// (0x00032c43) set_opt_bg_pane_g4

0x815d,	// (0x00032c4b) set_opt_bg_pane_g5

0x8165,	// (0x00032c53) set_opt_bg_pane_g6

0xafd3,	// (0x00035ac1) set_opt_bg_pane_g7

0xafdd,	// (0x00035acb) set_opt_bg_pane_g8

0xafe7,	// (0x00035ad5) set_opt_bg_pane_g9

0x0008,

0xf9ac,	// (0x0003a49a) set_opt_bg_pane_g

0xafbc,	// (0x00035aaa) slider_set_pane_g1

0x623b,	// (0x00030d29) slider_set_pane_g2

0x0006,

0xf99d,	// (0x0003a48b) slider_set_pane_g

0x619b,	// (0x00030c89) volume_set_pane_g1

0x61a5,	// (0x00030c93) volume_set_pane_g2

0x61af,	// (0x00030c9d) volume_set_pane_g3

0x61b9,	// (0x00030ca7) volume_set_pane_g4

0x61c3,	// (0x00030cb1) volume_set_pane_g5

0x61cd,	// (0x00030cbb) volume_set_pane_g6

0x61d7,	// (0x00030cc5) volume_set_pane_g7

0x61e1,	// (0x00030ccf) volume_set_pane_g8

0x61eb,	// (0x00030cd9) volume_set_pane_g9

0x61f5,	// (0x00030ce3) volume_set_pane_g10

0x0009,

0xf975,	// (0x0003a463) volume_set_pane_g

0x72fd,	// (0x00031deb) indicator_pane_ParamLimits

0x72fd,	// (0x00031deb) indicator_pane

0x7309,	// (0x00031df7) main_idle_pane_g2_ParamLimits

0x7309,	// (0x00031df7) main_idle_pane_g2

0x7331,	// (0x00031e1f) main_pane_idle_g1_ParamLimits

0x7331,	// (0x00031e1f) main_pane_idle_g1

0x733f,	// (0x00031e2d) popup_clock_digital_analogue_window_ParamLimits

0x733f,	// (0x00031e2d) popup_clock_digital_analogue_window

0x7356,	// (0x00031e44) soft_indicator_pane_ParamLimits

0x7356,	// (0x00031e44) soft_indicator_pane

0x7364,	// (0x00031e52) wallpaper_pane_ParamLimits

0x7364,	// (0x00031e52) wallpaper_pane

0x71ba,	// (0x00031ca8) wallpaper_pane_g1

0x7378,	// (0x00031e66) indicator_pane_g1_ParamLimits

0x7378,	// (0x00031e66) indicator_pane_g1

0xb42e,	// (0x00035f1c) navi_navi_icon_text_pane_srt_g1

0x7393,	// (0x00031e81) soft_indicator_pane_t1

0x73ad,	// (0x00031e9b) aid_ps_area_pane

0x73be,	// (0x00031eac) aid_ps_clock_pane

0x73cc,	// (0x00031eba) aid_ps_indicator_pane

0x73d8,	// (0x00031ec6) indicator_ps_pane_ParamLimits

0x73d8,	// (0x00031ec6) indicator_ps_pane

0x73e7,	// (0x00031ed5) power_save_pane_g1_ParamLimits

0x73e7,	// (0x00031ed5) power_save_pane_g1

0x73f3,	// (0x00031ee1) power_save_pane_g2_ParamLimits

0x73f3,	// (0x00031ee1) power_save_pane_g2

0x4c06,	// (0x0002f6f4) aid_navinavi_width_pane

0x73ad,	// (0x00031e9b) aid_ps_area_pane_ParamLimits

0x0001,

0xf5ae,	// (0x0003a09c) power_save_pane_g_ParamLimits

0xf5ae,	// (0x0003a09c) power_save_pane_g

0x7401,	// (0x00031eef) power_save_pane_t1_ParamLimits

0x7401,	// (0x00031eef) power_save_pane_t1

0x73be,	// (0x00031eac) aid_ps_clock_pane_ParamLimits

0x73cc,	// (0x00031eba) aid_ps_indicator_pane_ParamLimits

0x7413,	// (0x00031f01) power_save_pane_t4_ParamLimits

0x7413,	// (0x00031f01) power_save_pane_t4

0x0001,

0xf5b3,	// (0x0003a0a1) power_save_pane_t_ParamLimits

0xf5b3,	// (0x0003a0a1) power_save_pane_t

0x743d,	// (0x00031f2b) power_save_t3_ParamLimits

0x743d,	// (0x00031f2b) power_save_t3

0x7428,	// (0x00031f16) power_save_t2_ParamLimits

0x7428,	// (0x00031f16) power_save_t2

0x7452,	// (0x00031f40) indicator_ps_pane_g1

0x745b,	// (0x00031f49) ai_gene_pane_ParamLimits

0x745b,	// (0x00031f49) ai_gene_pane

0x7467,	// (0x00031f55) ai_links_pane_ParamLimits

0x7467,	// (0x00031f55) ai_links_pane

0x7473,	// (0x00031f61) indicator_pane_cp1_ParamLimits

0x7473,	// (0x00031f61) indicator_pane_cp1

0x747f,	// (0x00031f6d) main_pane_idle_g1_cp_ParamLimits

0x747f,	// (0x00031f6d) main_pane_idle_g1_cp

0x748b,	// (0x00031f79) popup_ai_links_title_window

0x7494,	// (0x00031f82) soft_indicator_pane_cp1_ParamLimits

0x7494,	// (0x00031f82) soft_indicator_pane_cp1

0xad8f,	// (0x0003587d) ai_links_pane_g1

0xad98,	// (0x00035886) grid_ai_links_pane

0xad74,	// (0x00035862) ai_gene_pane_1

0xad7d,	// (0x0003586b) ai_gene_pane_2

0xad86,	// (0x00035874) list_highlight_pane_cp4

0xad54,	// (0x00035842) cell_ai_link_pane_ParamLimits

0xad54,	// (0x00035842) cell_ai_link_pane

0xad4c,	// (0x0003583a) cell_ai_link_pane_g1

0x76d6,	// (0x000321c4) cell_ai_link_pane_g2

0x0001,

0xf950,	// (0x0003a43e) cell_ai_link_pane_g

0x71c4,	// (0x00031cb2) grid_highlight_cp2

0x71c4,	// (0x00031cb2) bg_popup_sub_pane_cp1

0x74ae,	// (0x00031f9c) popup_ai_links_title_window_t1

0xac98,	// (0x00035786) ai_gene_pane_1_g1_ParamLimits

0xac98,	// (0x00035786) ai_gene_pane_1_g1

0xaca4,	// (0x00035792) ai_gene_pane_1_g2_ParamLimits

0xaca4,	// (0x00035792) ai_gene_pane_1_g2

0x0001,

0xf946,	// (0x0003a434) ai_gene_pane_1_g_ParamLimits

0xf946,	// (0x0003a434) ai_gene_pane_1_g

0xacb1,	// (0x0003579f) ai_gene_pane_1_t1_ParamLimits

0xacb1,	// (0x0003579f) ai_gene_pane_1_t1

0xace5,	// (0x000357d3) grid_ai_soft_ind_pane

0xac83,	// (0x00035771) ai_gene_pane_2_t1_ParamLimits

0xac83,	// (0x00035771) ai_gene_pane_2_t1

0x74bd,	// (0x00031fab) main_pane_empty_t1_ParamLimits

0x74bd,	// (0x00031fab) main_pane_empty_t1

0x74d5,	// (0x00031fc3) main_pane_empty_t2_ParamLimits

0x74d5,	// (0x00031fc3) main_pane_empty_t2

0x74ea,	// (0x00031fd8) main_pane_empty_t3_ParamLimits

0x74ea,	// (0x00031fd8) main_pane_empty_t3

0x74fc,	// (0x00031fea) main_pane_empty_t4_ParamLimits

0x74fc,	// (0x00031fea) main_pane_empty_t4

0x750e,	// (0x00031ffc) main_pane_empty_t5_ParamLimits

0x750e,	// (0x00031ffc) main_pane_empty_t5

0x0004,

0xf5b8,	// (0x0003a0a6) main_pane_empty_t_ParamLimits

0xf5b8,	// (0x0003a0a6) main_pane_empty_t

0x818e,	// (0x00032c7c) bg_popup_window_pane_ParamLimits

0x818e,	// (0x00032c7c) bg_popup_window_pane

0xa9df,	// (0x000354cd) find_popup_pane_cp2_ParamLimits

0xa9df,	// (0x000354cd) find_popup_pane_cp2

0xa9eb,	// (0x000354d9) heading_pane_ParamLimits

0xa9eb,	// (0x000354d9) heading_pane

0x71c4,	// (0x00031cb2) bg_popup_sub_pane

0xa959,	// (0x00035447) bg_popup_window_pane_g1_ParamLimits

0xa959,	// (0x00035447) bg_popup_window_pane_g1

0xa965,	// (0x00035453) bg_popup_window_pane_g2_ParamLimits

0xa965,	// (0x00035453) bg_popup_window_pane_g2

0xa971,	// (0x0003545f) bg_popup_window_pane_g3_ParamLimits

0xa971,	// (0x0003545f) bg_popup_window_pane_g3

0xa97d,	// (0x0003546b) bg_popup_window_pane_g4_ParamLimits

0xa97d,	// (0x0003546b) bg_popup_window_pane_g4

0xa989,	// (0x00035477) bg_popup_window_pane_g5_ParamLimits

0xa989,	// (0x00035477) bg_popup_window_pane_g5

0xa995,	// (0x00035483) bg_popup_window_pane_g6_ParamLimits

0xa995,	// (0x00035483) bg_popup_window_pane_g6

0xa9a1,	// (0x0003548f) bg_popup_window_pane_g7_ParamLimits

0xa9a1,	// (0x0003548f) bg_popup_window_pane_g7

0xa9ad,	// (0x0003549b) bg_popup_window_pane_g8_ParamLimits

0xa9ad,	// (0x0003549b) bg_popup_window_pane_g8

0xa9b9,	// (0x000354a7) bg_popup_window_pane_g9_ParamLimits

0xa9b9,	// (0x000354a7) bg_popup_window_pane_g9

0xa9c5,	// (0x000354b3) bg_popup_window_pane_g10_ParamLimits

0xa9c5,	// (0x000354b3) bg_popup_window_pane_g10

0x0009,

0xf90e,	// (0x0003a3fc) bg_popup_window_pane_g_ParamLimits

0xf90e,	// (0x0003a3fc) bg_popup_window_pane_g

0xa8ee,	// (0x000353dc) bg_popup_heading_pane_ParamLimits

0xa8ee,	// (0x000353dc) bg_popup_heading_pane

0x6361,	// (0x00030e4f) tabs_4_passive_pane_cp_srt_ParamLimits

0x6361,	// (0x00030e4f) tabs_4_passive_pane_cp_srt

0x6373,	// (0x00030e61) tabs_4_passive_pane_srt_ParamLimits

0xa902,	// (0x000353f0) heading_pane_g2

0x6373,	// (0x00030e61) tabs_4_passive_pane_srt

0x90ba,	// (0x00033ba8) bg_passive_tab_pane_cp3_srt_ParamLimits

0x90ba,	// (0x00033ba8) bg_passive_tab_pane_cp3_srt

0xa90a,	// (0x000353f8) heading_pane_t1_ParamLimits

0xa90a,	// (0x000353f8) heading_pane_t1

0xa921,	// (0x0003540f) heading_pane_t2_ParamLimits

0xa921,	// (0x0003540f) heading_pane_t2

0x0001,

0xf909,	// (0x0003a3f7) heading_pane_t_ParamLimits

0xf909,	// (0x0003a3f7) heading_pane_t

0xa419,	// (0x00034f07) bg_popup_heading_pane_g1

0xa4c8,	// (0x00034fb6) bg_popup_heading_pane_g2

0xa4d2,	// (0x00034fc0) bg_popup_heading_pane_g3

0xa4dc,	// (0x00034fca) bg_popup_heading_pane_g4

0xa4e6,	// (0x00034fd4) bg_popup_heading_pane_g5

0xa4f0,	// (0x00034fde) bg_popup_heading_pane_g6

0xa4f8,	// (0x00034fe6) bg_popup_heading_pane_g7

0xa500,	// (0x00034fee) bg_popup_heading_pane_g8

0xa50a,	// (0x00034ff8) bg_popup_heading_pane_g9

0x0008,

0xf8c5,	// (0x0003a3b3) bg_popup_heading_pane_g

0x9c02,	// (0x000346f0) bg_popup_sub_pane_g1

0x9c12,	// (0x00034700) bg_popup_sub_pane_g2

0x9c0a,	// (0x000346f8) bg_popup_sub_pane_g3

0x9c22,	// (0x00034710) bg_popup_sub_pane_g4

0x9c1a,	// (0x00034708) bg_popup_sub_pane_g5

0x9c2a,	// (0x00034718) bg_popup_sub_pane_g6

0x9c32,	// (0x00034720) bg_popup_sub_pane_g7

0x9c42,	// (0x00034730) bg_popup_sub_pane_g8

0x9c3a,	// (0x00034728) bg_popup_sub_pane_g9

0x0008,

0xf89f,	// (0x0003a38d) bg_popup_sub_pane_g

0x7520,	// (0x0003200e) bg_popup_window_pane_cp5_ParamLimits

0x7520,	// (0x0003200e) bg_popup_window_pane_cp5

0x753c,	// (0x0003202a) popup_note_window_g1_ParamLimits

0x753c,	// (0x0003202a) popup_note_window_g1

0x7548,	// (0x00032036) popup_note_window_t1_ParamLimits

0x7548,	// (0x00032036) popup_note_window_t1

0x755e,	// (0x0003204c) popup_note_window_t2_ParamLimits

0x755e,	// (0x0003204c) popup_note_window_t2

0x7574,	// (0x00032062) popup_note_window_t3_ParamLimits

0x7574,	// (0x00032062) popup_note_window_t3

0x758a,	// (0x00032078) popup_note_window_t4_ParamLimits

0x758a,	// (0x00032078) popup_note_window_t4

0x75b2,	// (0x000320a0) popup_note_window_t5_ParamLimits

0x75b2,	// (0x000320a0) popup_note_window_t5

0x0004,

0xf5c3,	// (0x0003a0b1) popup_note_window_t_ParamLimits

0xf5c3,	// (0x0003a0b1) popup_note_window_t

0x75d6,	// (0x000320c4) bg_popup_window_pane_cp6_ParamLimits

0x75d6,	// (0x000320c4) bg_popup_window_pane_cp6

0xa395,	// (0x00034e83) popup_note_image_window_g1_ParamLimits

0xa395,	// (0x00034e83) popup_note_image_window_g1

0xa3a1,	// (0x00034e8f) popup_note_image_window_g2_ParamLimits

0xa3a1,	// (0x00034e8f) popup_note_image_window_g2

0x0001,

0xf893,	// (0x0003a381) popup_note_image_window_g_ParamLimits

0xf893,	// (0x0003a381) popup_note_image_window_g

0xa3ba,	// (0x00034ea8) popup_note_image_window_t1_ParamLimits

0xa3ba,	// (0x00034ea8) popup_note_image_window_t1

0xa3d3,	// (0x00034ec1) popup_note_image_window_t2_ParamLimits

0xa3d3,	// (0x00034ec1) popup_note_image_window_t2

0xa3ec,	// (0x00034eda) popup_note_image_window_t3_ParamLimits

0xa3ec,	// (0x00034eda) popup_note_image_window_t3

0x0002,

0xf898,	// (0x0003a386) popup_note_image_window_t_ParamLimits

0xf898,	// (0x0003a386) popup_note_image_window_t

0xa255,	// (0x00034d43) bg_popup_window_pane_cp7_ParamLimits

0xa255,	// (0x00034d43) bg_popup_window_pane_cp7

0xa285,	// (0x00034d73) popup_note_wait_window_g1_ParamLimits

0xa285,	// (0x00034d73) popup_note_wait_window_g1

0xa291,	// (0x00034d7f) popup_note_wait_window_g2_ParamLimits

0xa291,	// (0x00034d7f) popup_note_wait_window_g2

0x0002,

0xf881,	// (0x0003a36f) popup_note_wait_window_g_ParamLimits

0xf881,	// (0x0003a36f) popup_note_wait_window_g

0xa2a9,	// (0x00034d97) popup_note_wait_window_t1_ParamLimits

0xa2a9,	// (0x00034d97) popup_note_wait_window_t1

0xa2d0,	// (0x00034dbe) popup_note_wait_window_t2_ParamLimits

0xa2d0,	// (0x00034dbe) popup_note_wait_window_t2

0xa2ee,	// (0x00034ddc) popup_note_wait_window_t3_ParamLimits

0xa2ee,	// (0x00034ddc) popup_note_wait_window_t3

0xa301,	// (0x00034def) popup_note_wait_window_t4_ParamLimits

0xa301,	// (0x00034def) popup_note_wait_window_t4

0x0004,

0xf888,	// (0x0003a376) popup_note_wait_window_t_ParamLimits

0xf888,	// (0x0003a376) popup_note_wait_window_t

0xa326,	// (0x00034e14) wait_bar_pane_ParamLimits

0xa326,	// (0x00034e14) wait_bar_pane

0x71c4,	// (0x00031cb2) wait_anim_pane

0x71c4,	// (0x00031cb2) wait_border_pane

0x71ba,	// (0x00031ca8) wait_anim_pane_g1

0x71ba,	// (0x00031ca8) wait_anim_pane_g2

0x0001,

0xf747,	// (0x0003a235) wait_anim_pane_g

0xa1f9,	// (0x00034ce7) wait_border_pane_g1

0xa204,	// (0x00034cf2) wait_border_pane_g2

0xa20d,	// (0x00034cfb) wait_border_pane_g3

0x0002,

0xf87a,	// (0x0003a368) wait_border_pane_g

0xa155,	// (0x00034c43) bg_popup_window_pane_cp16_ParamLimits

0xa155,	// (0x00034c43) bg_popup_window_pane_cp16

0xa163,	// (0x00034c51) indicator_popup_pane_cp4_ParamLimits

0xa163,	// (0x00034c51) indicator_popup_pane_cp4

0xa177,	// (0x00034c65) popup_query_data_window_t1_ParamLimits

0xa177,	// (0x00034c65) popup_query_data_window_t1

0xa189,	// (0x00034c77) popup_query_data_window_t2_ParamLimits

0xa189,	// (0x00034c77) popup_query_data_window_t2

0xa1a2,	// (0x00034c90) popup_query_data_window_t3_ParamLimits

0xa1a2,	// (0x00034c90) popup_query_data_window_t3

0x0002,

0xf873,	// (0x0003a361) popup_query_data_window_t_ParamLimits

0xf873,	// (0x0003a361) popup_query_data_window_t

0xa1bc,	// (0x00034caa) query_popup_data_pane_ParamLimits

0xa1bc,	// (0x00034caa) query_popup_data_pane

0xa1d0,	// (0x00034cbe) query_popup_data_pane_cp1_ParamLimits

0xa1d0,	// (0x00034cbe) query_popup_data_pane_cp1

0x75d6,	// (0x000320c4) bg_popup_window_pane_cp10_ParamLimits

0x75d6,	// (0x000320c4) bg_popup_window_pane_cp10

0xa0b8,	// (0x00034ba6) indicator_popup_pane_ParamLimits

0xa0b8,	// (0x00034ba6) indicator_popup_pane

0x7637,	// (0x00032125) popup_query_code_window_t1_ParamLimits

0x7637,	// (0x00032125) popup_query_code_window_t1

0xa0d0,	// (0x00034bbe) popup_query_code_window_t2_ParamLimits

0xa0d0,	// (0x00034bbe) popup_query_code_window_t2

0xa10e,	// (0x00034bfc) popup_query_code_window_t3_ParamLimits

0xa10e,	// (0x00034bfc) popup_query_code_window_t3

0x0002,

0xf86c,	// (0x0003a35a) popup_query_code_window_t_ParamLimits

0xf86c,	// (0x0003a35a) popup_query_code_window_t

0xa13d,	// (0x00034c2b) query_popup_pane_ParamLimits

0xa13d,	// (0x00034c2b) query_popup_pane

0x75d6,	// (0x000320c4) bg_popup_window_pane_cp15_ParamLimits

0x75d6,	// (0x000320c4) bg_popup_window_pane_cp15

0x75f6,	// (0x000320e4) indicator_popup_pane_cp1_ParamLimits

0x75f6,	// (0x000320e4) indicator_popup_pane_cp1

0x7609,	// (0x000320f7) indicator_popup_pane_cp2_ParamLimits

0x7609,	// (0x000320f7) indicator_popup_pane_cp2

0x7624,	// (0x00032112) popup_query_data_code_window_g1_ParamLimits

0x7624,	// (0x00032112) popup_query_data_code_window_g1

0x7637,	// (0x00032125) popup_query_data_code_window_t1_ParamLimits

0x7637,	// (0x00032125) popup_query_data_code_window_t1

0x7649,	// (0x00032137) popup_query_data_code_window_t2_ParamLimits

0x7649,	// (0x00032137) popup_query_data_code_window_t2

0x765b,	// (0x00032149) popup_query_data_code_window_t3_ParamLimits

0x765b,	// (0x00032149) popup_query_data_code_window_t3

0x7671,	// (0x0003215f) popup_query_data_code_window_t4_ParamLimits

0x7671,	// (0x0003215f) popup_query_data_code_window_t4

0x0003,

0xf5ce,	// (0x0003a0bc) popup_query_data_code_window_t_ParamLimits

0xf5ce,	// (0x0003a0bc) popup_query_data_code_window_t

0x5ec7,	// (0x000309b5) list_single_midp_graphic_pane_g3

0x768b,	// (0x00032179) query_popup_data_pane_cp2_ParamLimits

0x769e,	// (0x0003218c) query_popup_pane_cp2_ParamLimits

0x769e,	// (0x0003218c) query_popup_pane_cp2

0x71c4,	// (0x00031cb2) bg_popup_window_pane_cp11

0xa08c,	// (0x00034b7a) heading_pane_cp5

0x7d39,	// (0x00032827) listscroll_popup_info_pane

0x71c4,	// (0x00031cb2) input_focus_pane_cp3

0x76b9,	// (0x000321a7) query_popup_pane_t1

0x76c7,	// (0x000321b5) list_popup_info_pane_ParamLimits

0x76c7,	// (0x000321b5) list_popup_info_pane

0x76d6,	// (0x000321c4) listscroll_popup_info_pane_g1

0x76de,	// (0x000321cc) scroll_pane_cp7

0x76e8,	// (0x000321d6) popup_info_list_pane_t1_ParamLimits

0x76e8,	// (0x000321d6) popup_info_list_pane_t1

0x7cad,	// (0x0003279b) popup_info_list_pane_t2_ParamLimits

0x7cad,	// (0x0003279b) popup_info_list_pane_t2

0x0001,

0xf5d7,	// (0x0003a0c5) popup_info_list_pane_t_ParamLimits

0xf5d7,	// (0x0003a0c5) popup_info_list_pane_t

0x71c4,	// (0x00031cb2) bg_popup_window_pane_cp12

0xb448,	// (0x00035f36) find_popup_pane

0x72a4,	// (0x00031d92) bg_popup_window_pane_cp3

0x7cc7,	// (0x000327b5) heading_pane_cp3

0x7cd3,	// (0x000327c1) listscroll_popup_graphic_pane

0x71c4,	// (0x00031cb2) bg_popup_window_pane_cp4

0x7d2f,	// (0x0003281d) heading_pane_cp4

0x7d39,	// (0x00032827) listscroll_popup_colour_pane

0x7d41,	// (0x0003282f) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x7d41,	// (0x0003282f) cell_large_graphic_colour_none_popup_pane

0x7d55,	// (0x00032843) grid_large_graphic_colour_popup_pane_ParamLimits

0x7d55,	// (0x00032843) grid_large_graphic_colour_popup_pane

0x7d81,	// (0x0003286f) listscroll_popup_colour_pane_g1_ParamLimits

0x7d81,	// (0x0003286f) listscroll_popup_colour_pane_g1

0x7d98,	// (0x00032886) listscroll_popup_colour_pane_g2_ParamLimits

0x7d98,	// (0x00032886) listscroll_popup_colour_pane_g2

0x7daf,	// (0x0003289d) listscroll_popup_colour_pane_g3_ParamLimits

0x7daf,	// (0x0003289d) listscroll_popup_colour_pane_g3

0x7dbf,	// (0x000328ad) listscroll_popup_colour_pane_g4_ParamLimits

0x7dbf,	// (0x000328ad) listscroll_popup_colour_pane_g4

0x0003,

0xf5dc,	// (0x0003a0ca) listscroll_popup_colour_pane_g_ParamLimits

0xf5dc,	// (0x0003a0ca) listscroll_popup_colour_pane_g

0x7dd3,	// (0x000328c1) scroll_pane_cp6_ParamLimits

0x7dd3,	// (0x000328c1) scroll_pane_cp6

0x7de5,	// (0x000328d3) cell_large_graphic_colour_popup_pane_ParamLimits

0x7de5,	// (0x000328d3) cell_large_graphic_colour_popup_pane

0x7e0a,	// (0x000328f8) cell_large_graphic_colour_none_popup_pane_t1

0x71c4,	// (0x00031cb2) grid_highlight_pane_cp5

0x7e19,	// (0x00032907) cell_large_graphic_colour_popup_pane_g1

0x7e21,	// (0x0003290f) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5e5,	// (0x0003a0d3) cell_large_graphic_colour_popup_pane_g

0x7e29,	// (0x00032917) cell_large_graphic_colour_popup_pane_g2_copy1

0x7e32,	// (0x00032920) grid_highlight_pane_cp4

0x7e3a,	// (0x00032928) bg_popup_window_pane_cp8_ParamLimits

0x7e3a,	// (0x00032928) bg_popup_window_pane_cp8

0x7e55,	// (0x00032943) popup_snote_single_text_window_g1_ParamLimits

0x7e55,	// (0x00032943) popup_snote_single_text_window_g1

0x7e67,	// (0x00032955) popup_snote_single_text_window_t1_ParamLimits

0x7e67,	// (0x00032955) popup_snote_single_text_window_t1

0x7e7a,	// (0x00032968) popup_snote_single_text_window_t2_ParamLimits

0x7e7a,	// (0x00032968) popup_snote_single_text_window_t2

0x7e8d,	// (0x0003297b) popup_snote_single_text_window_t3_ParamLimits

0x7e8d,	// (0x0003297b) popup_snote_single_text_window_t3

0x7ec6,	// (0x000329b4) popup_snote_single_text_window_t4_ParamLimits

0x7ec6,	// (0x000329b4) popup_snote_single_text_window_t4

0x7efa,	// (0x000329e8) popup_snote_single_text_window_t5_ParamLimits

0x7efa,	// (0x000329e8) popup_snote_single_text_window_t5

0x0004,

0xf5ea,	// (0x0003a0d8) popup_snote_single_text_window_t_ParamLimits

0xf5ea,	// (0x0003a0d8) popup_snote_single_text_window_t

0x7f29,	// (0x00032a17) bg_popup_window_pane_cp9_ParamLimits

0x7f29,	// (0x00032a17) bg_popup_window_pane_cp9

0x7e55,	// (0x00032943) popup_snote_single_graphic_window_g1_ParamLimits

0x7e55,	// (0x00032943) popup_snote_single_graphic_window_g1

0x7f37,	// (0x00032a25) popup_snote_single_graphic_window_g2_ParamLimits

0x7f37,	// (0x00032a25) popup_snote_single_graphic_window_g2

0x0001,

0xf5f5,	// (0x0003a0e3) popup_snote_single_graphic_window_g_ParamLimits

0xf5f5,	// (0x0003a0e3) popup_snote_single_graphic_window_g

0x7f43,	// (0x00032a31) popup_snote_single_graphic_window_t1_ParamLimits

0x7f43,	// (0x00032a31) popup_snote_single_graphic_window_t1

0x7f56,	// (0x00032a44) popup_snote_single_graphic_window_t2_ParamLimits

0x7f56,	// (0x00032a44) popup_snote_single_graphic_window_t2

0x7f69,	// (0x00032a57) popup_snote_single_graphic_window_t3_ParamLimits

0x7f69,	// (0x00032a57) popup_snote_single_graphic_window_t3

0x7fa2,	// (0x00032a90) popup_snote_single_graphic_window_t4_ParamLimits

0x7fa2,	// (0x00032a90) popup_snote_single_graphic_window_t4

0x7fd6,	// (0x00032ac4) popup_snote_single_graphic_window_t5_ParamLimits

0x7fd6,	// (0x00032ac4) popup_snote_single_graphic_window_t5

0x0004,

0xf5fa,	// (0x0003a0e8) popup_snote_single_graphic_window_t_ParamLimits

0xf5fa,	// (0x0003a0e8) popup_snote_single_graphic_window_t

0xb386,	// (0x00035e74) grid_graphic_popup_pane_ParamLimits

0xb386,	// (0x00035e74) grid_graphic_popup_pane

0xb3b4,	// (0x00035ea2) listscroll_popup_graphic_pane_g1_ParamLimits

0xb3b4,	// (0x00035ea2) listscroll_popup_graphic_pane_g1

0xb3c8,	// (0x00035eb6) listscroll_popup_graphic_pane_g2_ParamLimits

0xb3c8,	// (0x00035eb6) listscroll_popup_graphic_pane_g2

0x0001,

0xf9e9,	// (0x0003a4d7) listscroll_popup_graphic_pane_g_ParamLimits

0xf9e9,	// (0x0003a4d7) listscroll_popup_graphic_pane_g

0xb3dc,	// (0x00035eca) scroll_pane_cp5

0xb32e,	// (0x00035e1c) cell_graphic_popup_pane_ParamLimits

0xb32e,	// (0x00035e1c) cell_graphic_popup_pane

0xb30f,	// (0x00035dfd) cell_graphic_popup_pane_g1

0xb317,	// (0x00035e05) cell_graphic_popup_pane_g2

0x7e29,	// (0x00032917) cell_graphic_popup_pane_g3

0x0002,

0xf9e2,	// (0x0003a4d0) cell_graphic_popup_pane_g

0xb320,	// (0x00035e0e) cell_graphic_popup_pane_t2

0x7e32,	// (0x00032920) grid_highlight_pane_cp3

0x8017,	// (0x00032b05) list_gen_pane_ParamLimits

0x8017,	// (0x00032b05) list_gen_pane

0x8049,	// (0x00032b37) scroll_pane

0xb271,	// (0x00035d5f) bg_list_pane_g1_ParamLimits

0xb271,	// (0x00035d5f) bg_list_pane_g1

0xb28c,	// (0x00035d7a) bg_list_pane_g2_ParamLimits

0xb28c,	// (0x00035d7a) bg_list_pane_g2

0xb29f,	// (0x00035d8d) bg_list_pane_g3_ParamLimits

0xb29f,	// (0x00035d8d) bg_list_pane_g3

0xb2b1,	// (0x00035d9f) bg_list_pane_g4_ParamLimits

0xb2b1,	// (0x00035d9f) bg_list_pane_g4

0xb2c3,	// (0x00035db1) bg_list_pane_g5_ParamLimits

0xb2c3,	// (0x00035db1) bg_list_pane_g5

0x0004,

0xf9d7,	// (0x0003a4c5) bg_list_pane_g_ParamLimits

0xf9d7,	// (0x0003a4c5) bg_list_pane_g

0x62e3,	// (0x00030dd1) list_double2_graphic_large_graphic_pane_ParamLimits

0x62e3,	// (0x00030dd1) list_double2_graphic_large_graphic_pane

0x62e3,	// (0x00030dd1) list_double2_graphic_pane_ParamLimits

0x62e3,	// (0x00030dd1) list_double2_graphic_pane

0x62e3,	// (0x00030dd1) list_double2_large_graphic_pane_ParamLimits

0x62e3,	// (0x00030dd1) list_double2_large_graphic_pane

0xb202,	// (0x00035cf0) list_double2_pane_ParamLimits

0xb202,	// (0x00035cf0) list_double2_pane

0x62e3,	// (0x00030dd1) list_double_graphic_heading_pane_ParamLimits

0x62e3,	// (0x00030dd1) list_double_graphic_heading_pane

0x62e3,	// (0x00030dd1) list_double_graphic_pane_ParamLimits

0x62e3,	// (0x00030dd1) list_double_graphic_pane

0x62e3,	// (0x00030dd1) list_double_heading_pane_ParamLimits

0x62e3,	// (0x00030dd1) list_double_heading_pane

0x62e3,	// (0x00030dd1) list_double_large_graphic_pane_ParamLimits

0x62e3,	// (0x00030dd1) list_double_large_graphic_pane

0x62e3,	// (0x00030dd1) list_double_number_pane_ParamLimits

0x62e3,	// (0x00030dd1) list_double_number_pane

0x62e3,	// (0x00030dd1) list_double_pane_ParamLimits

0x62e3,	// (0x00030dd1) list_double_pane

0x62e3,	// (0x00030dd1) list_double_time_pane_ParamLimits

0x62e3,	// (0x00030dd1) list_double_time_pane

0x62e3,	// (0x00030dd1) list_setting_number_pane_ParamLimits

0x62e3,	// (0x00030dd1) list_setting_number_pane

0x62e3,	// (0x00030dd1) list_setting_pane_ParamLimits

0x62e3,	// (0x00030dd1) list_setting_pane

0xb22d,	// (0x00035d1b) list_single_2graphic_pane_ParamLimits

0xb22d,	// (0x00035d1b) list_single_2graphic_pane

0xb22d,	// (0x00035d1b) list_single_graphic_heading_pane_ParamLimits

0xb22d,	// (0x00035d1b) list_single_graphic_heading_pane

0xb22d,	// (0x00035d1b) list_single_graphic_pane_ParamLimits

0xb22d,	// (0x00035d1b) list_single_graphic_pane

0xb22d,	// (0x00035d1b) list_single_heading_pane_ParamLimits

0xb22d,	// (0x00035d1b) list_single_heading_pane

0x6322,	// (0x00030e10) list_single_large_graphic_pane_ParamLimits

0x6322,	// (0x00030e10) list_single_large_graphic_pane

0xb22d,	// (0x00035d1b) list_single_number_heading_pane_ParamLimits

0xb22d,	// (0x00035d1b) list_single_number_heading_pane

0xb22d,	// (0x00035d1b) list_single_number_pane_ParamLimits

0xb22d,	// (0x00035d1b) list_single_number_pane

0xb22d,	// (0x00035d1b) list_single_pane_ParamLimits

0xb22d,	// (0x00035d1b) list_single_pane

0x71c4,	// (0x00031cb2) list_highlight_pane_cp1

0x4213,	// (0x0002ed01) list_single_pane_g1_ParamLimits

0x4213,	// (0x0002ed01) list_single_pane_g1

0x50a3,	// (0x0002fb91) list_single_pane_g2_ParamLimits

0x50a3,	// (0x0002fb91) list_single_pane_g2

0x0001,

0xf60c,	// (0x0003a0fa) list_single_pane_g_ParamLimits

0xf60c,	// (0x0003a0fa) list_single_pane_g

0x62cd,	// (0x00030dbb) list_single_pane_t1_ParamLimits

0x62cd,	// (0x00030dbb) list_single_pane_t1

0x4213,	// (0x0002ed01) list_single_number_pane_g1_ParamLimits

0x4213,	// (0x0002ed01) list_single_number_pane_g1

0x50a3,	// (0x0002fb91) list_single_number_pane_g2_ParamLimits

0x50a3,	// (0x0002fb91) list_single_number_pane_g2

0x0001,

0xf60c,	// (0x0003a0fa) list_single_number_pane_g_ParamLimits

0xf60c,	// (0x0003a0fa) list_single_number_pane_g

0x61ff,	// (0x00030ced) list_single_number_pane_t1_ParamLimits

0x61ff,	// (0x00030ced) list_single_number_pane_t1

0x6215,	// (0x00030d03) list_single_number_pane_t2_ParamLimits

0x6215,	// (0x00030d03) list_single_number_pane_t2

0x0001,

0xf998,	// (0x0003a486) list_single_number_pane_t_ParamLimits

0xf998,	// (0x0003a486) list_single_number_pane_t

0x5097,	// (0x0002fb85) list_single_graphic_pane_g1_ParamLimits

0x5097,	// (0x0002fb85) list_single_graphic_pane_g1

0x4213,	// (0x0002ed01) list_single_graphic_pane_g2_ParamLimits

0x4213,	// (0x0002ed01) list_single_graphic_pane_g2

0x50a3,	// (0x0002fb91) list_single_graphic_pane_g3_ParamLimits

0x50a3,	// (0x0002fb91) list_single_graphic_pane_g3

0x0002,

0xf605,	// (0x0003a0f3) list_single_graphic_pane_g_ParamLimits

0xf605,	// (0x0003a0f3) list_single_graphic_pane_g

0x50af,	// (0x0002fb9d) list_single_graphic_pane_t1_ParamLimits

0x50af,	// (0x0002fb9d) list_single_graphic_pane_t1

0x4213,	// (0x0002ed01) list_single_heading_pane_g1_ParamLimits

0x4213,	// (0x0002ed01) list_single_heading_pane_g1

0x50a3,	// (0x0002fb91) list_single_heading_pane_g2_ParamLimits

0x50a3,	// (0x0002fb91) list_single_heading_pane_g2

0x0001,

0xf60c,	// (0x0003a0fa) list_single_heading_pane_g_ParamLimits

0xf60c,	// (0x0003a0fa) list_single_heading_pane_g

0x50c5,	// (0x0002fbb3) list_single_heading_pane_t1_ParamLimits

0x50c5,	// (0x0002fbb3) list_single_heading_pane_t1

0x50db,	// (0x0002fbc9) list_single_heading_pane_t2_ParamLimits

0x50db,	// (0x0002fbc9) list_single_heading_pane_t2

0x0001,

0xf611,	// (0x0003a0ff) list_single_heading_pane_t_ParamLimits

0xf611,	// (0x0003a0ff) list_single_heading_pane_t

0x4213,	// (0x0002ed01) list_single_number_heading_pane_g1_ParamLimits

0x4213,	// (0x0002ed01) list_single_number_heading_pane_g1

0x50a3,	// (0x0002fb91) list_single_number_heading_pane_g2_ParamLimits

0x50a3,	// (0x0002fb91) list_single_number_heading_pane_g2

0x0001,

0xf60c,	// (0x0003a0fa) list_single_number_heading_pane_g_ParamLimits

0xf60c,	// (0x0003a0fa) list_single_number_heading_pane_g

0x50c5,	// (0x0002fbb3) list_single_number_heading_pane_t1_ParamLimits

0x50c5,	// (0x0002fbb3) list_single_number_heading_pane_t1

0x50ed,	// (0x0002fbdb) list_single_number_heading_pane_t2_ParamLimits

0x50ed,	// (0x0002fbdb) list_single_number_heading_pane_t2

0x50ff,	// (0x0002fbed) list_single_number_heading_pane_t3_ParamLimits

0x50ff,	// (0x0002fbed) list_single_number_heading_pane_t3

0x0002,

0xf616,	// (0x0003a104) list_single_number_heading_pane_t_ParamLimits

0xf616,	// (0x0003a104) list_single_number_heading_pane_t

0x5111,	// (0x0002fbff) list_single_graphic_heading_pane_g1_ParamLimits

0x5111,	// (0x0002fbff) list_single_graphic_heading_pane_g1

0x511d,	// (0x0002fc0b) list_single_graphic_heading_pane_g4_ParamLimits

0x511d,	// (0x0002fc0b) list_single_graphic_heading_pane_g4

0x50a3,	// (0x0002fb91) list_single_graphic_heading_pane_g5_ParamLimits

0x50a3,	// (0x0002fb91) list_single_graphic_heading_pane_g5

0x0002,

0xf61d,	// (0x0003a10b) list_single_graphic_heading_pane_g_ParamLimits

0xf61d,	// (0x0003a10b) list_single_graphic_heading_pane_g

0x50c5,	// (0x0002fbb3) list_single_graphic_heading_pane_t1_ParamLimits

0x50c5,	// (0x0002fbb3) list_single_graphic_heading_pane_t1

0x512e,	// (0x0002fc1c) list_single_graphic_heading_pane_t2_ParamLimits

0x512e,	// (0x0002fc1c) list_single_graphic_heading_pane_t2

0x0001,

0xf624,	// (0x0003a112) list_single_graphic_heading_pane_t_ParamLimits

0xf624,	// (0x0003a112) list_single_graphic_heading_pane_t

0x5140,	// (0x0002fc2e) list_single_large_graphic_pane_g1_ParamLimits

0x5140,	// (0x0002fc2e) list_single_large_graphic_pane_g1

0x4213,	// (0x0002ed01) list_single_large_graphic_pane_g2_ParamLimits

0x4213,	// (0x0002ed01) list_single_large_graphic_pane_g2

0x50a3,	// (0x0002fb91) list_single_large_graphic_pane_g3_ParamLimits

0x50a3,	// (0x0002fb91) list_single_large_graphic_pane_g3

0x0002,

0xf629,	// (0x0003a117) list_single_large_graphic_pane_g_ParamLimits

0xf629,	// (0x0003a117) list_single_large_graphic_pane_g

0xa204,	// (0x00034cf2) wait_border_pane_g2_copy1

0x514c,	// (0x0002fc3a) list_single_large_graphic_pane_g4_cp2

0x50c5,	// (0x0002fbb3) list_single_large_graphic_pane_t1_ParamLimits

0x50c5,	// (0x0002fbb3) list_single_large_graphic_pane_t1

0x5154,	// (0x0002fc42) list_double_pane_g1_ParamLimits

0x5154,	// (0x0002fc42) list_double_pane_g1

0x5160,	// (0x0002fc4e) list_double_pane_g2_ParamLimits

0x5160,	// (0x0002fc4e) list_double_pane_g2

0x0001,

0xf630,	// (0x0003a11e) list_double_pane_g_ParamLimits

0xf630,	// (0x0003a11e) list_double_pane_g

0x516c,	// (0x0002fc5a) list_double_pane_t1_ParamLimits

0x516c,	// (0x0002fc5a) list_double_pane_t1

0x5182,	// (0x0002fc70) list_double_pane_t2_ParamLimits

0x5182,	// (0x0002fc70) list_double_pane_t2

0x0001,

0xf635,	// (0x0003a123) list_double_pane_t_ParamLimits

0xf635,	// (0x0003a123) list_double_pane_t

0x5194,	// (0x0002fc82) list_double2_pane_g1_ParamLimits

0x5194,	// (0x0002fc82) list_double2_pane_g1

0x51a5,	// (0x0002fc93) list_double2_pane_g2_ParamLimits

0x51a5,	// (0x0002fc93) list_double2_pane_g2

0x0001,

0xf63a,	// (0x0003a128) list_double2_pane_g_ParamLimits

0xf63a,	// (0x0003a128) list_double2_pane_g

0x51b1,	// (0x0002fc9f) list_double2_pane_t1_ParamLimits

0x51b1,	// (0x0002fc9f) list_double2_pane_t1

0x51c7,	// (0x0002fcb5) list_double2_pane_t2_ParamLimits

0x51c7,	// (0x0002fcb5) list_double2_pane_t2

0x0001,

0xf63f,	// (0x0003a12d) list_double2_pane_t_ParamLimits

0xf63f,	// (0x0003a12d) list_double2_pane_t

0x5154,	// (0x0002fc42) list_double_number_pane_g1_ParamLimits

0x5154,	// (0x0002fc42) list_double_number_pane_g1

0x5160,	// (0x0002fc4e) list_double_number_pane_g2_ParamLimits

0x5160,	// (0x0002fc4e) list_double_number_pane_g2

0x0001,

0xf630,	// (0x0003a11e) list_double_number_pane_g_ParamLimits

0xf630,	// (0x0003a11e) list_double_number_pane_g

0x51d9,	// (0x0002fcc7) list_double_number_pane_t1_ParamLimits

0x51d9,	// (0x0002fcc7) list_double_number_pane_t1

0x51eb,	// (0x0002fcd9) list_double_number_pane_t2_ParamLimits

0x51eb,	// (0x0002fcd9) list_double_number_pane_t2

0x5201,	// (0x0002fcef) list_double_number_pane_t3_ParamLimits

0x5201,	// (0x0002fcef) list_double_number_pane_t3

0x0002,

0xf644,	// (0x0003a132) list_double_number_pane_t_ParamLimits

0xf644,	// (0x0003a132) list_double_number_pane_t

0x5213,	// (0x0002fd01) list_double_graphic_pane_g1_ParamLimits

0x5213,	// (0x0002fd01) list_double_graphic_pane_g1

0x521f,	// (0x0002fd0d) list_double_graphic_pane_g2_ParamLimits

0x521f,	// (0x0002fd0d) list_double_graphic_pane_g2

0x522e,	// (0x0002fd1c) list_double_graphic_pane_g3_ParamLimits

0x522e,	// (0x0002fd1c) list_double_graphic_pane_g3

0x0003,

0xf64b,	// (0x0003a139) list_double_graphic_pane_g_ParamLimits

0xf64b,	// (0x0003a139) list_double_graphic_pane_g

0x5246,	// (0x0002fd34) list_double_graphic_pane_t1_ParamLimits

0x5246,	// (0x0002fd34) list_double_graphic_pane_t1

0x525c,	// (0x0002fd4a) list_double_graphic_pane_t2_ParamLimits

0x525c,	// (0x0002fd4a) list_double_graphic_pane_t2

0x0001,

0xf654,	// (0x0003a142) list_double_graphic_pane_t_ParamLimits

0xf654,	// (0x0003a142) list_double_graphic_pane_t

0x526e,	// (0x0002fd5c) list_double2_graphic_pane_g1_ParamLimits

0x526e,	// (0x0002fd5c) list_double2_graphic_pane_g1

0x527a,	// (0x0002fd68) list_double2_graphic_pane_g2_ParamLimits

0x527a,	// (0x0002fd68) list_double2_graphic_pane_g2

0x5286,	// (0x0002fd74) list_double2_graphic_pane_g3_ParamLimits

0x5286,	// (0x0002fd74) list_double2_graphic_pane_g3

0x0002,

0xf659,	// (0x0003a147) list_double2_graphic_pane_g_ParamLimits

0xf659,	// (0x0003a147) list_double2_graphic_pane_g

0x5292,	// (0x0002fd80) list_double2_graphic_pane_t1_ParamLimits

0x5292,	// (0x0002fd80) list_double2_graphic_pane_t1

0x52a8,	// (0x0002fd96) list_double2_graphic_pane_t2_ParamLimits

0x52a8,	// (0x0002fd96) list_double2_graphic_pane_t2

0x0001,

0xf660,	// (0x0003a14e) list_double2_graphic_pane_t_ParamLimits

0xf660,	// (0x0003a14e) list_double2_graphic_pane_t

0x52ba,	// (0x0002fda8) list_double_large_graphic_pane_g1_ParamLimits

0x52ba,	// (0x0002fda8) list_double_large_graphic_pane_g1

0x52e5,	// (0x0002fdd3) list_double_large_graphic_pane_g2_ParamLimits

0x52e5,	// (0x0002fdd3) list_double_large_graphic_pane_g2

0x5160,	// (0x0002fc4e) list_double_large_graphic_pane_g3_ParamLimits

0x5160,	// (0x0002fc4e) list_double_large_graphic_pane_g3

0x52f6,	// (0x0002fde4) list_double_large_graphic_pane_g4_ParamLimits

0x52f6,	// (0x0002fde4) list_double_large_graphic_pane_g4

0x0004,

0xf665,	// (0x0003a153) list_double_large_graphic_pane_g_ParamLimits

0xf665,	// (0x0003a153) list_double_large_graphic_pane_g

0x531e,	// (0x0002fe0c) list_double_large_graphic_pane_t1_ParamLimits

0x531e,	// (0x0002fe0c) list_double_large_graphic_pane_t1

0x5337,	// (0x0002fe25) list_double_large_graphic_pane_t2_ParamLimits

0x5337,	// (0x0002fe25) list_double_large_graphic_pane_t2

0x0001,

0xf670,	// (0x0003a15e) list_double_large_graphic_pane_t_ParamLimits

0xf670,	// (0x0003a15e) list_double_large_graphic_pane_t

0x5349,	// (0x0002fe37) list_double2_large_graphic_pane_g1_ParamLimits

0x5349,	// (0x0002fe37) list_double2_large_graphic_pane_g1

0x5355,	// (0x0002fe43) list_double2_large_graphic_pane_g2_ParamLimits

0x5355,	// (0x0002fe43) list_double2_large_graphic_pane_g2

0x5366,	// (0x0002fe54) list_double2_large_graphic_pane_g3_ParamLimits

0x5366,	// (0x0002fe54) list_double2_large_graphic_pane_g3

0x0002,

0xf675,	// (0x0003a163) list_double2_large_graphic_pane_g_ParamLimits

0xf675,	// (0x0003a163) list_double2_large_graphic_pane_g

0x5372,	// (0x0002fe60) list_double2_large_graphic_pane_t1_ParamLimits

0x5372,	// (0x0002fe60) list_double2_large_graphic_pane_t1

0x5388,	// (0x0002fe76) list_double2_large_graphic_pane_t2_ParamLimits

0x5388,	// (0x0002fe76) list_double2_large_graphic_pane_t2

0x0001,

0xf67c,	// (0x0003a16a) list_double2_large_graphic_pane_t_ParamLimits

0xf67c,	// (0x0003a16a) list_double2_large_graphic_pane_t

0x539a,	// (0x0002fe88) list_double_heading_pane_g1_ParamLimits

0x539a,	// (0x0002fe88) list_double_heading_pane_g1

0x53ab,	// (0x0002fe99) list_double_heading_pane_g2_ParamLimits

0x53ab,	// (0x0002fe99) list_double_heading_pane_g2

0x0001,

0xf681,	// (0x0003a16f) list_double_heading_pane_g_ParamLimits

0xf681,	// (0x0003a16f) list_double_heading_pane_g

0x53b7,	// (0x0002fea5) list_double_heading_pane_t1_ParamLimits

0x53b7,	// (0x0002fea5) list_double_heading_pane_t1

0x53cd,	// (0x0002febb) list_double_heading_pane_t2_ParamLimits

0x53cd,	// (0x0002febb) list_double_heading_pane_t2

0x0001,

0xf686,	// (0x0003a174) list_double_heading_pane_t_ParamLimits

0xf686,	// (0x0003a174) list_double_heading_pane_t

0x53df,	// (0x0002fecd) list_double_graphic_heading_pane_g1_ParamLimits

0x53df,	// (0x0002fecd) list_double_graphic_heading_pane_g1

0x539a,	// (0x0002fe88) list_double_graphic_heading_pane_g2_ParamLimits

0x539a,	// (0x0002fe88) list_double_graphic_heading_pane_g2

0x53ab,	// (0x0002fe99) list_double_graphic_heading_pane_g3_ParamLimits

0x53ab,	// (0x0002fe99) list_double_graphic_heading_pane_g3

0x0002,

0xf68b,	// (0x0003a179) list_double_graphic_heading_pane_g_ParamLimits

0xf68b,	// (0x0003a179) list_double_graphic_heading_pane_g

0x53eb,	// (0x0002fed9) list_double_graphic_heading_pane_t1_ParamLimits

0x53eb,	// (0x0002fed9) list_double_graphic_heading_pane_t1

0x52a8,	// (0x0002fd96) list_double_graphic_heading_pane_t2_ParamLimits

0x52a8,	// (0x0002fd96) list_double_graphic_heading_pane_t2

0x0001,

0xf692,	// (0x0003a180) list_double_graphic_heading_pane_t_ParamLimits

0xf692,	// (0x0003a180) list_double_graphic_heading_pane_t

0x52e5,	// (0x0002fdd3) list_double_time_pane_g1_ParamLimits

0x52e5,	// (0x0002fdd3) list_double_time_pane_g1

0x5160,	// (0x0002fc4e) list_double_time_pane_g2_ParamLimits

0x5160,	// (0x0002fc4e) list_double_time_pane_g2

0x0001,

0xf697,	// (0x0003a185) list_double_time_pane_g_ParamLimits

0xf697,	// (0x0003a185) list_double_time_pane_g

0x5401,	// (0x0002feef) list_double_time_pane_t1_ParamLimits

0x5401,	// (0x0002feef) list_double_time_pane_t1

0x5417,	// (0x0002ff05) list_double_time_pane_t2_ParamLimits

0x5417,	// (0x0002ff05) list_double_time_pane_t2

0x5429,	// (0x0002ff17) list_double_time_pane_t3_ParamLimits

0x5429,	// (0x0002ff17) list_double_time_pane_t3

0x543b,	// (0x0002ff29) list_double_time_pane_t4_ParamLimits

0x543b,	// (0x0002ff29) list_double_time_pane_t4

0x0003,

0xf69c,	// (0x0003a18a) list_double_time_pane_t_ParamLimits

0xf69c,	// (0x0003a18a) list_double_time_pane_t

0x544d,	// (0x0002ff3b) list_setting_pane_g1_ParamLimits

0x544d,	// (0x0002ff3b) list_setting_pane_g1

0x5459,	// (0x0002ff47) list_setting_pane_g2_ParamLimits

0x5459,	// (0x0002ff47) list_setting_pane_g2

0x0001,

0xf6a5,	// (0x0003a193) list_setting_pane_g_ParamLimits

0xf6a5,	// (0x0003a193) list_setting_pane_g

0x5465,	// (0x0002ff53) list_setting_pane_t1_ParamLimits

0x5465,	// (0x0002ff53) list_setting_pane_t1

0x547f,	// (0x0002ff6d) list_setting_pane_t2_ParamLimits

0x547f,	// (0x0002ff6d) list_setting_pane_t2

0x0002,

0xf6aa,	// (0x0003a198) list_setting_pane_t_ParamLimits

0xf6aa,	// (0x0003a198) list_setting_pane_t

0x54be,	// (0x0002ffac) set_value_pane_cp_ParamLimits

0x54be,	// (0x0002ffac) set_value_pane_cp

0x54cc,	// (0x0002ffba) list_setting_number_pane_g1_ParamLimits

0x54cc,	// (0x0002ffba) list_setting_number_pane_g1

0x54d8,	// (0x0002ffc6) list_setting_number_pane_g2_ParamLimits

0x54d8,	// (0x0002ffc6) list_setting_number_pane_g2

0x0001,

0xf6b1,	// (0x0003a19f) list_setting_number_pane_g_ParamLimits

0xf6b1,	// (0x0003a19f) list_setting_number_pane_g

0x54e4,	// (0x0002ffd2) list_setting_number_pane_t1_ParamLimits

0x54e4,	// (0x0002ffd2) list_setting_number_pane_t1

0x54fd,	// (0x0002ffeb) list_setting_number_pane_t2_ParamLimits

0x54fd,	// (0x0002ffeb) list_setting_number_pane_t2

0x5517,	// (0x00030005) list_setting_number_pane_t3_ParamLimits

0x5517,	// (0x00030005) list_setting_number_pane_t3

0x0003,

0xf6b6,	// (0x0003a1a4) list_setting_number_pane_t_ParamLimits

0xf6b6,	// (0x0003a1a4) list_setting_number_pane_t

0x54be,	// (0x0002ffac) set_value_pane_ParamLimits

0x54be,	// (0x0002ffac) set_value_pane

0x807d,	// (0x00032b6b) bg_set_opt_pane_ParamLimits

0x807d,	// (0x00032b6b) bg_set_opt_pane

0x555a,	// (0x00030048) set_value_pane_t1

0x809e,	// (0x00032b8c) slider_set_pane_cp3

0x80a7,	// (0x00032b95) volume_small_pane_cp

0x80b0,	// (0x00032b9e) list_form_gen_pane

0x80b9,	// (0x00032ba7) scroll_pane_cp8

0x5568,	// (0x00030056) form_field_data_pane_ParamLimits

0x5568,	// (0x00030056) form_field_data_pane

0x558e,	// (0x0003007c) form_field_data_wide_pane_ParamLimits

0x558e,	// (0x0003007c) form_field_data_wide_pane

0x55b5,	// (0x000300a3) form_field_popup_pane_ParamLimits

0x55b5,	// (0x000300a3) form_field_popup_pane

0x55d7,	// (0x000300c5) form_field_popup_wide_pane_ParamLimits

0x55d7,	// (0x000300c5) form_field_popup_wide_pane

0x55f8,	// (0x000300e6) form_field_slider_pane_ParamLimits

0x55f8,	// (0x000300e6) form_field_slider_pane

0x560b,	// (0x000300f9) form_field_slider_wide_pane_ParamLimits

0x560b,	// (0x000300f9) form_field_slider_wide_pane

0x80ca,	// (0x00032bb8) data_form_pane

0x5628,	// (0x00030116) form_field_data_pane_t1

0x80d6,	// (0x00032bc4) input_focus_pane

0x80e4,	// (0x00032bd2) data_form_wide_pane

0x564e,	// (0x0003013c) form_field_data_wide_pane_t1

0x7e47,	// (0x00032935) input_focus_pane_cp6

0x5670,	// (0x0003015e) form_field_popup_pane_t1

0x80d6,	// (0x00032bc4) input_focus_pane_cp7

0x8110,	// (0x00032bfe) list_form_pane

0x5692,	// (0x00030180) form_field_popup_wide_pane_t1

0x80d6,	// (0x00032bc4) input_focus_pane_cp8

0x811c,	// (0x00032c0a) list_form_wide_pane

0x56af,	// (0x0003019d) form_field_slider_pane_t1_ParamLimits

0x56af,	// (0x0003019d) form_field_slider_pane_t1

0x56c7,	// (0x000301b5) form_field_slider_pane_t2_ParamLimits

0x56c7,	// (0x000301b5) form_field_slider_pane_t2

0x0001,

0xf6c6,	// (0x0003a1b4) form_field_slider_pane_t_ParamLimits

0xf6c6,	// (0x0003a1b4) form_field_slider_pane_t

0x7520,	// (0x0003200e) input_focus_pane_cp9_ParamLimits

0x7520,	// (0x0003200e) input_focus_pane_cp9

0x56dc,	// (0x000301ca) slider_cont_pane_ParamLimits

0x56dc,	// (0x000301ca) slider_cont_pane

0x812b,	// (0x00032c19) form_field_slider_wide_pane_t1_ParamLimits

0x812b,	// (0x00032c19) form_field_slider_wide_pane_t1

0x56f0,	// (0x000301de) form_field_slider_wide_pane_t2_ParamLimits

0x56f0,	// (0x000301de) form_field_slider_wide_pane_t2

0x0001,

0xf6cb,	// (0x0003a1b9) form_field_slider_wide_pane_t_ParamLimits

0xf6cb,	// (0x0003a1b9) form_field_slider_wide_pane_t

0x7520,	// (0x0003200e) input_focus_pane_cp10_ParamLimits

0x7520,	// (0x0003200e) input_focus_pane_cp10

0x5702,	// (0x000301f0) slider_cont_pane_cp1_ParamLimits

0x5702,	// (0x000301f0) slider_cont_pane_cp1

0x5716,	// (0x00030204) slider_form_pane_cp

0x813d,	// (0x00032c2b) input_focus_pane_g1

0x8145,	// (0x00032c33) input_focus_pane_g2

0x814d,	// (0x00032c3b) input_focus_pane_g3

0x8155,	// (0x00032c43) input_focus_pane_g4

0x815d,	// (0x00032c4b) input_focus_pane_g5

0x8165,	// (0x00032c53) input_focus_pane_g6

0x816d,	// (0x00032c5b) input_focus_pane_g7

0x8175,	// (0x00032c63) input_focus_pane_g8

0x817d,	// (0x00032c6b) input_focus_pane_g9

0x71ba,	// (0x00031ca8) input_focus_pane_g10

0x0009,

0xf6d0,	// (0x0003a1be) input_focus_pane_g

0xa20d,	// (0x00034cfb) wait_border_pane_g3_copy1

0x571e,	// (0x0003020c) data_form_pane_t1

0x71ba,	// (0x00031ca8) wait_anim_pane_g1_copy1

0x629f,	// (0x00030d8d) data_form_wide_pane_t1

0x573b,	// (0x00030229) list_form_graphic_pane_cp_ParamLimits

0x573b,	// (0x00030229) list_form_graphic_pane_cp

0xb192,	// (0x00035c80) slider_form_pane_g1

0xb19b,	// (0x00035c89) slider_form_pane_g2

0x0006,

0xf9c8,	// (0x0003a4b6) slider_form_pane_g

0x5750,	// (0x0003023e) list_form_graphic_pane_ParamLimits

0x5750,	// (0x0003023e) list_form_graphic_pane

0x5762,	// (0x00030250) list_form_graphic_pane_g1

0x576a,	// (0x00030258) list_form_graphic_pane_t1_ParamLimits

0x576a,	// (0x00030258) list_form_graphic_pane_t1

0x72a4,	// (0x00031d92) list_highlight_pane_cp5_ParamLimits

0x72a4,	// (0x00031d92) list_highlight_pane_cp5

0x577f,	// (0x0003026d) find_pane_g1

0x8185,	// (0x00032c73) input_find_pane

0x5788,	// (0x00030276) input_find_pane_g1_ParamLimits

0x5788,	// (0x00030276) input_find_pane_g1

0x5794,	// (0x00030282) input_find_pane_t1_ParamLimits

0x5794,	// (0x00030282) input_find_pane_t1

0x57a9,	// (0x00030297) input_find_pane_t2_ParamLimits

0x57a9,	// (0x00030297) input_find_pane_t2

0x0001,

0xf6e5,	// (0x0003a1d3) input_find_pane_t_ParamLimits

0xf6e5,	// (0x0003a1d3) input_find_pane_t

0x818e,	// (0x00032c7c) input_focus_pane_cp5_ParamLimits

0x818e,	// (0x00032c7c) input_focus_pane_cp5

0x81a8,	// (0x00032c96) bg_popup_window_pane_cp2_ParamLimits

0x81a8,	// (0x00032c96) bg_popup_window_pane_cp2

0x81b5,	// (0x00032ca3) listscroll_menu_pane_ParamLimits

0x81b5,	// (0x00032ca3) listscroll_menu_pane

0x81c1,	// (0x00032caf) popup_submenu_window_ParamLimits

0x81c1,	// (0x00032caf) popup_submenu_window

0x81f1,	// (0x00032cdf) find_popup_pane_g1

0x81f9,	// (0x00032ce7) input_popup_find_pane_cp

0x818e,	// (0x00032c7c) input_focus_pane_cp4_ParamLimits

0x818e,	// (0x00032c7c) input_focus_pane_cp4

0x8211,	// (0x00032cff) input_popup_find_pane_t1_ParamLimits

0x8211,	// (0x00032cff) input_popup_find_pane_t1

0x71c4,	// (0x00031cb2) bg_popup_sub_pane_cp

0x823f,	// (0x00032d2d) listscroll_popup_sub_pane

0x8247,	// (0x00032d35) list_submenu_pane_ParamLimits

0x8247,	// (0x00032d35) list_submenu_pane

0x8258,	// (0x00032d46) scroll_pane_cp4

0x8260,	// (0x00032d4e) list_single_popup_submenu_pane_ParamLimits

0x8260,	// (0x00032d4e) list_single_popup_submenu_pane

0x8275,	// (0x00032d63) list_single_popup_submenu_pane_g1

0x827d,	// (0x00032d6b) list_single_popup_submenu_pane_t1_ParamLimits

0x827d,	// (0x00032d6b) list_single_popup_submenu_pane_t1

0x72a4,	// (0x00031d92) bg_active_tab_pane_cp1_ParamLimits

0x72a4,	// (0x00031d92) bg_active_tab_pane_cp1

0x8292,	// (0x00032d80) tabs_2_active_pane_g1

0x829a,	// (0x00032d88) tabs_2_active_pane_t1

0x72a4,	// (0x00031d92) bg_passive_tab_pane_cp1_ParamLimits

0x72a4,	// (0x00031d92) bg_passive_tab_pane_cp1

0x8292,	// (0x00032d80) tabs_2_passive_pane_g1

0x829a,	// (0x00032d88) tabs_2_passive_pane_t1

0x82ac,	// (0x00032d9a) bg_active_tab_pane_cp4

0x82ba,	// (0x00032da8) tabs_2_long_active_pane_t1

0x82cd,	// (0x00032dbb) bg_passive_tab_pane_cp4

0x5ecf,	// (0x000309bd) list_single_midp_graphic_pane_g4_ParamLimits

0x82ac,	// (0x00032d9a) bg_active_tab_pane_cp5

0x82d9,	// (0x00032dc7) tabs_3_long_active_pane_t1

0x82cd,	// (0x00032dbb) bg_passive_tab_pane_cp5

0x5ecf,	// (0x000309bd) list_single_midp_graphic_pane_g4

0x72a4,	// (0x00031d92) bg_popup_window_pane_cp13_ParamLimits

0x72a4,	// (0x00031d92) bg_popup_window_pane_cp13

0x82f4,	// (0x00032de2) listscroll_popup_fast_pane_ParamLimits

0x82f4,	// (0x00032de2) listscroll_popup_fast_pane

0x8303,	// (0x00032df1) grid_popup_fast_pane_ParamLimits

0x8303,	// (0x00032df1) grid_popup_fast_pane

0x8315,	// (0x00032e03) scroll_pane_cp9_ParamLimits

0x8315,	// (0x00032e03) scroll_pane_cp9

0xcab7,	// (0x000375a5) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xcab7,	// (0x000375a5) list_single_graphic_hl_pane_t1_cp2

0x8339,	// (0x00032e27) input_focus_pane_cp20_ParamLimits

0x8339,	// (0x00032e27) input_focus_pane_cp20

0x8347,	// (0x00032e35) query_popup_data_pane_t1_ParamLimits

0x8347,	// (0x00032e35) query_popup_data_pane_t1

0x835a,	// (0x00032e48) query_popup_data_pane_t2_ParamLimits

0x835a,	// (0x00032e48) query_popup_data_pane_t2

0x83a0,	// (0x00032e8e) query_popup_data_pane_t3_ParamLimits

0x83a0,	// (0x00032e8e) query_popup_data_pane_t3

0x83e1,	// (0x00032ecf) query_popup_data_pane_t4_ParamLimits

0x83e1,	// (0x00032ecf) query_popup_data_pane_t4

0x841d,	// (0x00032f0b) query_popup_data_pane_t5_ParamLimits

0x841d,	// (0x00032f0b) query_popup_data_pane_t5

0x0004,

0xf6ea,	// (0x0003a1d8) query_popup_data_pane_t_ParamLimits

0xf6ea,	// (0x0003a1d8) query_popup_data_pane_t

0x813d,	// (0x00032c2b) bg_set_opt_pane_g1

0x8145,	// (0x00032c33) bg_set_opt_pane_g2

0x814d,	// (0x00032c3b) bg_set_opt_pane_g3

0x8155,	// (0x00032c43) bg_set_opt_pane_g4

0x815d,	// (0x00032c4b) bg_set_opt_pane_g5

0x8165,	// (0x00032c53) bg_set_opt_pane_g6

0x816d,	// (0x00032c5b) bg_set_opt_pane_g7

0x8175,	// (0x00032c63) bg_set_opt_pane_g8

0x817d,	// (0x00032c6b) bg_set_opt_pane_g9

0x0008,

0xf6f5,	// (0x0003a1e3) bg_set_opt_pane_g

0x5aed,	// (0x000305db) control_top_pane_stacon_ParamLimits

0x5aed,	// (0x000305db) control_top_pane_stacon

0x5b40,	// (0x0003062e) signal_pane_stacon_ParamLimits

0x5b40,	// (0x0003062e) signal_pane_stacon

0x89c9,	// (0x000334b7) stacon_top_pane_g1_ParamLimits

0x89c9,	// (0x000334b7) stacon_top_pane_g1

0x5b65,	// (0x00030653) title_pane_stacon_ParamLimits

0x5b65,	// (0x00030653) title_pane_stacon

0x5b8f,	// (0x0003067d) uni_indicator_pane_stacon_ParamLimits

0x5b8f,	// (0x0003067d) uni_indicator_pane_stacon

0x5ba7,	// (0x00030695) battery_pane_stacon_ParamLimits

0x5ba7,	// (0x00030695) battery_pane_stacon

0x5beb,	// (0x000306d9) control_bottom_pane_stacon_ParamLimits

0x5beb,	// (0x000306d9) control_bottom_pane_stacon

0x5c0e,	// (0x000306fc) navi_pane_stacon_ParamLimits

0x5c0e,	// (0x000306fc) navi_pane_stacon

0x89eb,	// (0x000334d9) stacon_bottom_pane_g1_ParamLimits

0x89eb,	// (0x000334d9) stacon_bottom_pane_g1

0x57be,	// (0x000302ac) aid_levels_signal_lsc_ParamLimits

0x57be,	// (0x000302ac) aid_levels_signal_lsc

0x57d5,	// (0x000302c3) signal_pane_stacon_g1_ParamLimits

0x57d5,	// (0x000302c3) signal_pane_stacon_g1

0x57e9,	// (0x000302d7) signal_pane_stacon_g2_ParamLimits

0x57e9,	// (0x000302d7) signal_pane_stacon_g2

0x0001,

0xf708,	// (0x0003a1f6) signal_pane_stacon_g_ParamLimits

0xf708,	// (0x0003a1f6) signal_pane_stacon_g

0x581e,	// (0x0003030c) title_pane_stacon_t1_ParamLimits

0x581e,	// (0x0003030c) title_pane_stacon_t1

0x8461,	// (0x00032f4f) uni_indicator_pane_stacon_g1

0x846b,	// (0x00032f59) uni_indicator_pane_stacon_g2

0x8475,	// (0x00032f63) uni_indicator_pane_stacon_g3

0x847f,	// (0x00032f6d) uni_indicator_pane_stacon_g4

0x0003,

0xf714,	// (0x0003a202) uni_indicator_pane_stacon_g

0x5843,	// (0x00030331) control_top_pane_stacon_g1

0x584b,	// (0x00030339) control_top_pane_stacon_t1_ParamLimits

0x584b,	// (0x00030339) control_top_pane_stacon_t1

0x5882,	// (0x00030370) aid_levels_battery_lsc_ParamLimits

0x5882,	// (0x00030370) aid_levels_battery_lsc

0x589a,	// (0x00030388) battery_pane_stacon_g1_ParamLimits

0x589a,	// (0x00030388) battery_pane_stacon_g1

0x58ad,	// (0x0003039b) battery_pane_stacon_g2_ParamLimits

0x58ad,	// (0x0003039b) battery_pane_stacon_g2

0x0001,

0xf71d,	// (0x0003a20b) battery_pane_stacon_g_ParamLimits

0xf71d,	// (0x0003a20b) battery_pane_stacon_g

0x58eb,	// (0x000303d9) navi_icon_pane_stacon

0x58ff,	// (0x000303ed) navi_navi_pane_stacon

0x58eb,	// (0x000303d9) navi_text_pane_stacon

0x5843,	// (0x00030331) control_bottom_pane_stacon_g1

0x5915,	// (0x00030403) control_bottom_pane_stacon_t1_ParamLimits

0x5915,	// (0x00030403) control_bottom_pane_stacon_t1

0x84a3,	// (0x00032f91) grid_app_pane_ParamLimits

0x84a3,	// (0x00032f91) grid_app_pane

0x84c7,	// (0x00032fb5) scroll_pane_cp15_ParamLimits

0x84c7,	// (0x00032fb5) scroll_pane_cp15

0x84dc,	// (0x00032fca) cell_app_pane_ParamLimits

0x84dc,	// (0x00032fca) cell_app_pane

0x8508,	// (0x00032ff6) cell_app_pane_g1_ParamLimits

0x8508,	// (0x00032ff6) cell_app_pane_g1

0x852c,	// (0x0003301a) cell_app_pane_g2_ParamLimits

0x852c,	// (0x0003301a) cell_app_pane_g2

0x0001,

0xf722,	// (0x0003a210) cell_app_pane_g_ParamLimits

0xf722,	// (0x0003a210) cell_app_pane_g

0x8538,	// (0x00033026) cell_app_pane_t1_ParamLimits

0x8538,	// (0x00033026) cell_app_pane_t1

0x854a,	// (0x00033038) grid_highlight_pane_ParamLimits

0x854a,	// (0x00033038) grid_highlight_pane

0x813d,	// (0x00032c2b) cell_highlight_pane_g1

0x8145,	// (0x00032c33) cell_highlight_pane_g2

0x814d,	// (0x00032c3b) cell_highlight_pane_g3

0x8155,	// (0x00032c43) cell_highlight_pane_g4

0x815d,	// (0x00032c4b) cell_highlight_pane_g5

0x8165,	// (0x00032c53) cell_highlight_pane_g6

0x816d,	// (0x00032c5b) cell_highlight_pane_g7

0x8175,	// (0x00032c63) cell_highlight_pane_g8

0x817d,	// (0x00032c6b) cell_highlight_pane_g9

0x71ba,	// (0x00031ca8) cell_highlight_pane_g10

0x0009,

0xf6d0,	// (0x0003a1be) cell_highlight_pane_g

0x855b,	// (0x00033049) bg_scroll_pane

0x595f,	// (0x0003044d) scroll_handle_pane

0x85a2,	// (0x00033090) scroll_bg_pane_g1

0x85b7,	// (0x000330a5) scroll_bg_pane_g2

0x85cf,	// (0x000330bd) scroll_bg_pane_g3

0x0002,

0xf727,	// (0x0003a215) scroll_bg_pane_g

0x85e4,	// (0x000330d2) scroll_handle_focus_pane_ParamLimits

0x85e4,	// (0x000330d2) scroll_handle_focus_pane

0x85a2,	// (0x00033090) scroll_handle_pane_g1

0x85f1,	// (0x000330df) scroll_handle_pane_g2

0x85cf,	// (0x000330bd) scroll_handle_pane_g3

0x0002,

0xf72e,	// (0x0003a21c) scroll_handle_pane_g

0x818e,	// (0x00032c7c) bg_popup_sub_pane_cp21_ParamLimits

0x818e,	// (0x00032c7c) bg_popup_sub_pane_cp21

0x8605,	// (0x000330f3) popup_fep_japan_predictive_window_t1_ParamLimits

0x8605,	// (0x000330f3) popup_fep_japan_predictive_window_t1

0x861c,	// (0x0003310a) popup_fep_japan_predictive_window_t2_ParamLimits

0x861c,	// (0x0003310a) popup_fep_japan_predictive_window_t2

0x864f,	// (0x0003313d) popup_fep_japan_predictive_window_t3_ParamLimits

0x864f,	// (0x0003313d) popup_fep_japan_predictive_window_t3

0x0002,

0xf735,	// (0x0003a223) popup_fep_japan_predictive_window_t_ParamLimits

0xf735,	// (0x0003a223) popup_fep_japan_predictive_window_t

0x71c4,	// (0x00031cb2) bg_popup_sub_pane_cp23

0x8686,	// (0x00033174) listscroll_japin_cand_pane

0x868e,	// (0x0003317c) popup_fep_japan_candidate_window_t1

0x869c,	// (0x0003318a) candidate_pane_ParamLimits

0x869c,	// (0x0003318a) candidate_pane

0x86ae,	// (0x0003319c) scroll_pane_cp30

0x86b8,	// (0x000331a6) list_single_popup_jap_candidate_pane_ParamLimits

0x86b8,	// (0x000331a6) list_single_popup_jap_candidate_pane

0x71c4,	// (0x00031cb2) list_highlight_pane_cp30

0x86cc,	// (0x000331ba) list_single_popup_jap_candidate_pane_t1

0x86db,	// (0x000331c9) level_1_signal

0x86e8,	// (0x000331d6) level_2_signal

0x86f5,	// (0x000331e3) level_3_signal

0x8702,	// (0x000331f0) level_4_signal

0x870f,	// (0x000331fd) level_5_signal

0x871c,	// (0x0003320a) level_6_signal

0x8729,	// (0x00033217) level_7_signal

0x86db,	// (0x000331c9) level_1_battery

0x86e8,	// (0x000331d6) level_2_battery

0x86f5,	// (0x000331e3) level_3_battery

0x8702,	// (0x000331f0) level_4_battery

0x870f,	// (0x000331fd) level_5_battery

0x871c,	// (0x0003320a) level_6_battery

0x8729,	// (0x00033217) level_7_battery

0x874e,	// (0x0003323c) list_menu_pane_ParamLimits

0x874e,	// (0x0003323c) list_menu_pane

0x875f,	// (0x0003324d) scroll_pane_cp25_ParamLimits

0x875f,	// (0x0003324d) scroll_pane_cp25

0x8778,	// (0x00033266) list_double2_graphic_pane_cp2_ParamLimits

0x8778,	// (0x00033266) list_double2_graphic_pane_cp2

0x8778,	// (0x00033266) list_double2_large_graphic_pane_cp2_ParamLimits

0x8778,	// (0x00033266) list_double2_large_graphic_pane_cp2

0x8778,	// (0x00033266) list_double2_pane_cp2_ParamLimits

0x8778,	// (0x00033266) list_double2_pane_cp2

0x8778,	// (0x00033266) list_double_graphic_pane_cp2_ParamLimits

0x8778,	// (0x00033266) list_double_graphic_pane_cp2

0x8778,	// (0x00033266) list_double_large_graphic_pane_cp2_ParamLimits

0x8778,	// (0x00033266) list_double_large_graphic_pane_cp2

0x8778,	// (0x00033266) list_double_number_pane_cp2_ParamLimits

0x8778,	// (0x00033266) list_double_number_pane_cp2

0x8778,	// (0x00033266) list_double_pane_cp2_ParamLimits

0x8778,	// (0x00033266) list_double_pane_cp2

0x879e,	// (0x0003328c) list_single_2graphic_pane_cp2_ParamLimits

0x879e,	// (0x0003328c) list_single_2graphic_pane_cp2

0x879e,	// (0x0003328c) list_single_graphic_heading_pane_cp2_ParamLimits

0x879e,	// (0x0003328c) list_single_graphic_heading_pane_cp2

0x879e,	// (0x0003328c) list_single_graphic_pane_cp2_ParamLimits

0x879e,	// (0x0003328c) list_single_graphic_pane_cp2

0x879e,	// (0x0003328c) list_single_heading_pane_cp2_ParamLimits

0x879e,	// (0x0003328c) list_single_heading_pane_cp2

0x87bb,	// (0x000332a9) list_single_large_graphic_pane_cp2_ParamLimits

0x87bb,	// (0x000332a9) list_single_large_graphic_pane_cp2

0x879e,	// (0x0003328c) list_single_number_heading_pane_cp2_ParamLimits

0x879e,	// (0x0003328c) list_single_number_heading_pane_cp2

0x879e,	// (0x0003328c) list_single_number_pane_cp2_ParamLimits

0x879e,	// (0x0003328c) list_single_number_pane_cp2

0x879e,	// (0x0003328c) list_single_pane_cp2_ParamLimits

0x879e,	// (0x0003328c) list_single_pane_cp2

0x8810,	// (0x000332fe) bg_popup_sub_pane_cp22

0x5a11,	// (0x000304ff) popup_side_volume_key_window_g1

0x5a3b,	// (0x00030529) popup_side_volume_key_window_t1

0x5a59,	// (0x00030547) volume_small_pane_cp1

0x7520,	// (0x0003200e) bg_popup_sub_pane_cp24_ParamLimits

0x7520,	// (0x0003200e) bg_popup_sub_pane_cp24

0x8826,	// (0x00033314) fep_china_uni_candidate_pane_ParamLimits

0x8826,	// (0x00033314) fep_china_uni_candidate_pane

0x883a,	// (0x00033328) fep_china_uni_entry_pane

0x884a,	// (0x00033338) popup_fep_china_uni_window_g1

0x8866,	// (0x00033354) fep_china_uni_entry_pane_g1

0x8870,	// (0x0003335e) fep_china_uni_entry_pane_g2

0x0001,

0xf762,	// (0x0003a250) fep_china_uni_entry_pane_g

0x887a,	// (0x00033368) fep_entry_item_pane

0x8884,	// (0x00033372) fep_candidate_item_pane

0x888c,	// (0x0003337a) fep_china_uni_candidate_pane_g1

0x8896,	// (0x00033384) fep_china_uni_candidate_pane_g2

0x889e,	// (0x0003338c) fep_china_uni_candidate_pane_g3

0x88a6,	// (0x00033394) fep_china_uni_candidate_pane_g4

0x0003,

0xf767,	// (0x0003a255) fep_china_uni_candidate_pane_g

0x71ba,	// (0x00031ca8) fep_entry_item_pane_g1

0x88b0,	// (0x0003339e) fep_entry_item_pane_t1_ParamLimits

0x88b0,	// (0x0003339e) fep_entry_item_pane_t1

0x88c6,	// (0x000333b4) fep_candidate_item_pane_t1_ParamLimits

0x88c6,	// (0x000333b4) fep_candidate_item_pane_t1

0x88db,	// (0x000333c9) fep_candidate_item_pane_t2_ParamLimits

0x88db,	// (0x000333c9) fep_candidate_item_pane_t2

0x0001,

0xf770,	// (0x0003a25e) fep_candidate_item_pane_t_ParamLimits

0xf770,	// (0x0003a25e) fep_candidate_item_pane_t

0x72a4,	// (0x00031d92) list_highlight_pane_cp31_ParamLimits

0x72a4,	// (0x00031d92) list_highlight_pane_cp31

0x88ed,	// (0x000333db) level_1_signal_lsc

0x88f6,	// (0x000333e4) level_2_signal_lsc

0x88ff,	// (0x000333ed) level_3_signal_lsc

0x8908,	// (0x000333f6) level_4_signal_lsc

0x8911,	// (0x000333ff) level_5_signal_lsc

0x891a,	// (0x00033408) level_6_signal_lsc

0x8923,	// (0x00033411) level_7_signal_lsc

0x8923,	// (0x00033411) level_1_battery_lsc

0x892c,	// (0x0003341a) level_2_battery_lsc

0x8935,	// (0x00033423) level_3_battery_lsc

0x893e,	// (0x0003342c) level_4_battery_lsc

0x8947,	// (0x00033435) level_5_battery_lsc

0x8950,	// (0x0003343e) level_6_battery_lsc

0x88ed,	// (0x000333db) level_7_battery_lsc

0x8959,	// (0x00033447) scroll_handle_focus_pane_g1

0x8962,	// (0x00033450) scroll_handle_focus_pane_g2

0x896b,	// (0x00033459) scroll_handle_focus_pane_g3

0x0002,

0xf775,	// (0x0003a263) scroll_handle_focus_pane_g

0x5a61,	// (0x0003054f) list_single_2graphic_pane_g1_ParamLimits

0x5a61,	// (0x0003054f) list_single_2graphic_pane_g1

0x511d,	// (0x0002fc0b) list_single_2graphic_pane_g2_ParamLimits

0x511d,	// (0x0002fc0b) list_single_2graphic_pane_g2

0x50a3,	// (0x0002fb91) list_single_2graphic_pane_g3_ParamLimits

0x50a3,	// (0x0002fb91) list_single_2graphic_pane_g3

0x5a6d,	// (0x0003055b) list_single_2graphic_pane_g4_ParamLimits

0x5a6d,	// (0x0003055b) list_single_2graphic_pane_g4

0x0003,

0xf77c,	// (0x0003a26a) list_single_2graphic_pane_g_ParamLimits

0xf77c,	// (0x0003a26a) list_single_2graphic_pane_g

0x5a79,	// (0x00030567) list_single_2graphic_pane_t1_ParamLimits

0x5a79,	// (0x00030567) list_single_2graphic_pane_t1

0x5aa7,	// (0x00030595) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x5aa7,	// (0x00030595) list_double2_graphic_large_graphic_pane_g1

0x5355,	// (0x0002fe43) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x5355,	// (0x0002fe43) list_double2_graphic_large_graphic_pane_g2

0x5366,	// (0x0002fe54) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x5366,	// (0x0002fe54) list_double2_graphic_large_graphic_pane_g3

0x5ab9,	// (0x000305a7) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x5ab9,	// (0x000305a7) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf785,	// (0x0003a273) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf785,	// (0x0003a273) list_double2_graphic_large_graphic_pane_g

0x5ac5,	// (0x000305b3) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x5ac5,	// (0x000305b3) list_double2_graphic_large_graphic_pane_t1

0x5adb,	// (0x000305c9) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x5adb,	// (0x000305c9) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf78e,	// (0x0003a27c) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf78e,	// (0x0003a27c) list_double2_graphic_large_graphic_pane_t

0x8aad,	// (0x0003359b) popup_fast_swap_window_ParamLimits

0x8aad,	// (0x0003359b) popup_fast_swap_window

0x8acb,	// (0x000335b9) popup_side_volume_key_window

0x8ae9,	// (0x000335d7) stacon_top_pane

0x8af3,	// (0x000335e1) status_pane_ParamLimits

0x8af3,	// (0x000335e1) status_pane

0x8ae9,	// (0x000335d7) status_small_pane

0x71c4,	// (0x00031cb2) control_pane

0x71c4,	// (0x00031cb2) stacon_bottom_pane

0x80b9,	// (0x00032ba7) scroll_pane_cp121

0x80b0,	// (0x00032b9e) set_content_pane

0x8974,	// (0x00033462) bg_active_tab_pane_g1_cp1

0x897d,	// (0x0003346b) bg_active_tab_pane_g2_cp1

0x8986,	// (0x00033474) bg_active_tab_pane_g3_cp1

0x8974,	// (0x00033462) bg_passive_tab_pane_g1_cp1

0x897d,	// (0x0003346b) bg_passive_tab_pane_g2_cp1

0x8986,	// (0x00033474) bg_passive_tab_pane_g3_cp1

0x898f,	// (0x0003347d) bg_active_tab_pane_g1_cp2

0x897d,	// (0x0003346b) bg_active_tab_pane_g2_cp2

0x8998,	// (0x00033486) bg_active_tab_pane_g3_cp2

0x898f,	// (0x0003347d) bg_passive_tab_pane_g1_cp2

0x897d,	// (0x0003346b) bg_passive_tab_pane_g2_cp2

0x8998,	// (0x00033486) bg_passive_tab_pane_g3_cp2

0x89a1,	// (0x0003348f) bg_active_tab_pane_g1_cp3

0x897d,	// (0x0003346b) bg_active_tab_pane_g2_cp3

0x89aa,	// (0x00033498) bg_active_tab_pane_g3_cp3

0x89a1,	// (0x0003348f) bg_passive_tab_pane_g1_cp3

0x897d,	// (0x0003346b) bg_passive_tab_pane_g2_cp3

0x89aa,	// (0x00033498) bg_passive_tab_pane_g3_cp3

0x89b3,	// (0x000334a1) bg_active_tab_pane_g1_cp4

0x897d,	// (0x0003346b) bg_active_tab_pane_g2_cp4

0x89be,	// (0x000334ac) bg_active_tab_pane_g3_cp4

0x89b3,	// (0x000334a1) bg_passive_tab_pane_g1_cp4

0x897d,	// (0x0003346b) bg_passive_tab_pane_g2_cp4

0x89be,	// (0x000334ac) bg_passive_tab_pane_g3_cp4

0x8a07,	// (0x000334f5) bg_active_tab_pane_g1_cp5

0x897d,	// (0x0003346b) bg_active_tab_pane_g2_cp5

0x8a10,	// (0x000334fe) bg_active_tab_pane_g3_cp5

0x8a07,	// (0x000334f5) bg_passive_tab_pane_g1_cp5

0x897d,	// (0x0003346b) bg_passive_tab_pane_g2_cp5

0x8a10,	// (0x000334fe) bg_passive_tab_pane_g3_cp5

0x8a19,	// (0x00033507) list_set_graphic_pane_ParamLimits

0x8a19,	// (0x00033507) list_set_graphic_pane

0x71c4,	// (0x00031cb2) bg_set_opt_pane_cp4

0x8a2e,	// (0x0003351c) list_set_graphic_pane_g1_ParamLimits

0x8a2e,	// (0x0003351c) list_set_graphic_pane_g1

0x8a3a,	// (0x00033528) list_set_graphic_pane_g2_ParamLimits

0x8a3a,	// (0x00033528) list_set_graphic_pane_g2

0x0001,

0xf793,	// (0x0003a281) list_set_graphic_pane_g_ParamLimits

0xf793,	// (0x0003a281) list_set_graphic_pane_g

0x0009,

0xfaf0,	// (0x0003a5de) volume_small_pane_cp_g

0x8a5e,	// (0x0003354c) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x8a5e,	// (0x0003354c) list_double2_large_graphic_pane_g1_cp2

0x8a6c,	// (0x0003355a) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x8a6c,	// (0x0003355a) list_double2_large_graphic_pane_g2_cp2

0x8a7d,	// (0x0003356b) list_double2_large_graphic_pane_g3_cp2

0x8a85,	// (0x00033573) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x8a85,	// (0x00033573) list_double2_large_graphic_pane_t1_cp2

0x8a9b,	// (0x00033589) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x8a9b,	// (0x00033589) list_double2_large_graphic_pane_t2_cp2

0xacf7,	// (0x000357e5) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xacf7,	// (0x000357e5) list_double_large_graphic_pane_g1_cp2

0xad0a,	// (0x000357f8) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xad0a,	// (0x000357f8) list_double_large_graphic_pane_g2_cp2

0x8c11,	// (0x000336ff) list_double_large_graphic_pane_g3_cp2

0xad1b,	// (0x00035809) list_double_large_graphic_pane_g4_cp

0xad23,	// (0x00035811) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xad23,	// (0x00035811) list_double_large_graphic_pane_t1_cp2

0xad3a,	// (0x00035828) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xad3a,	// (0x00035828) list_double_large_graphic_pane_t2_cp2

0x8b01,	// (0x000335ef) list_double2_graphic_pane_g1_cp2_ParamLimits

0x8b01,	// (0x000335ef) list_double2_graphic_pane_g1_cp2

0x8b0f,	// (0x000335fd) list_double2_graphic_pane_g2_cp2_ParamLimits

0x8b0f,	// (0x000335fd) list_double2_graphic_pane_g2_cp2

0x8b20,	// (0x0003360e) list_double2_graphic_pane_g3_cp2

0x8b2a,	// (0x00033618) list_double2_graphic_pane_t1_cp2_ParamLimits

0x8b2a,	// (0x00033618) list_double2_graphic_pane_t1_cp2

0x8b40,	// (0x0003362e) list_double2_graphic_pane_t2_cp2_ParamLimits

0x8b40,	// (0x0003362e) list_double2_graphic_pane_t2_cp2

0x8b52,	// (0x00033640) list_single_number_heading_pane_g1_cp2_ParamLimits

0x8b52,	// (0x00033640) list_single_number_heading_pane_g1_cp2

0x8b5e,	// (0x0003364c) list_single_number_heading_pane_g2_cp2

0x8b66,	// (0x00033654) list_single_number_heading_pane_t1_cp2_ParamLimits

0x8b66,	// (0x00033654) list_single_number_heading_pane_t1_cp2

0x8b7c,	// (0x0003366a) list_single_number_heading_pane_t2_cp2_ParamLimits

0x8b7c,	// (0x0003366a) list_single_number_heading_pane_t2_cp2

0x8b90,	// (0x0003367e) list_single_number_heading_pane_t3_cp2_ParamLimits

0x8b90,	// (0x0003367e) list_single_number_heading_pane_t3_cp2

0x8b52,	// (0x00033640) list_single_heading_pane_g1_cp2_ParamLimits

0x8b52,	// (0x00033640) list_single_heading_pane_g1_cp2

0x8b5e,	// (0x0003364c) list_single_heading_pane_g2_cp2

0x8b66,	// (0x00033654) list_single_heading_pane_t1_cp2_ParamLimits

0x8b66,	// (0x00033654) list_single_heading_pane_t1_cp2

0xaaf1,	// (0x000355df) list_single_heading_pane_t2_cp2_ParamLimits

0xaaf1,	// (0x000355df) list_single_heading_pane_t2_cp2

0xaa33,	// (0x00035521) list_double_graphic_pane_g1_cp2_ParamLimits

0xaa33,	// (0x00035521) list_double_graphic_pane_g1_cp2

0xaa3f,	// (0x0003552d) list_double_graphic_pane_g2_cp2_ParamLimits

0xaa3f,	// (0x0003552d) list_double_graphic_pane_g2_cp2

0xaa4e,	// (0x0003553c) list_double_graphic_pane_g3_cp2

0xaa56,	// (0x00035544) list_double_graphic_pane_t1_cp2_ParamLimits

0xaa56,	// (0x00035544) list_double_graphic_pane_t1_cp2

0xaa6c,	// (0x0003555a) list_double_graphic_pane_t2_cp2_ParamLimits

0xaa6c,	// (0x0003555a) list_double_graphic_pane_t2_cp2

0x8c05,	// (0x000336f3) list_double_number_pane_g1_cp2_ParamLimits

0x8c05,	// (0x000336f3) list_double_number_pane_g1_cp2

0x8c11,	// (0x000336ff) list_double_number_pane_g2_cp2

0xa9f7,	// (0x000354e5) list_double_number_pane_t1_cp2_ParamLimits

0xa9f7,	// (0x000354e5) list_double_number_pane_t1_cp2

0xaa0b,	// (0x000354f9) list_double_number_pane_t2_cp2_ParamLimits

0xaa0b,	// (0x000354f9) list_double_number_pane_t2_cp2

0xaa21,	// (0x0003550f) list_double_number_pane_t3_cp2_ParamLimits

0xaa21,	// (0x0003550f) list_double_number_pane_t3_cp2

0xa8e0,	// (0x000353ce) list_single_graphic_pane_g1_cp2_ParamLimits

0xa8e0,	// (0x000353ce) list_single_graphic_pane_g1_cp2

0x8c6b,	// (0x00033759) list_single_graphic_pane_g2_cp2_ParamLimits

0x8c6b,	// (0x00033759) list_single_graphic_pane_g2_cp2

0x8c77,	// (0x00033765) list_single_graphic_pane_g3_cp2

0xa8b6,	// (0x000353a4) list_single_graphic_pane_t1_cp2_ParamLimits

0xa8b6,	// (0x000353a4) list_single_graphic_pane_t1_cp2

0x8c6b,	// (0x00033759) list_single_number_pane_g1_cp2_ParamLimits

0x8c6b,	// (0x00033759) list_single_number_pane_g1_cp2

0x8c77,	// (0x00033765) list_single_number_pane_g2_cp2

0xa8b6,	// (0x000353a4) list_single_number_pane_t1_cp2_ParamLimits

0xa8b6,	// (0x000353a4) list_single_number_pane_t1_cp2

0xa8cc,	// (0x000353ba) list_single_number_pane_t2_cp2_ParamLimits

0xa8cc,	// (0x000353ba) list_single_number_pane_t2_cp2

0x8a6c,	// (0x0003355a) list_double2_pane_g1_cp2_ParamLimits

0x8a6c,	// (0x0003355a) list_double2_pane_g1_cp2

0x8a7d,	// (0x0003356b) list_double2_pane_g2_cp2

0x8bdd,	// (0x000336cb) list_double2_pane_t1_cp2_ParamLimits

0x8bdd,	// (0x000336cb) list_double2_pane_t1_cp2

0x8bf3,	// (0x000336e1) list_double2_pane_t2_cp2_ParamLimits

0x8bf3,	// (0x000336e1) list_double2_pane_t2_cp2

0x8c05,	// (0x000336f3) list_double_pane_g1_cp2_ParamLimits

0x8c05,	// (0x000336f3) list_double_pane_g1_cp2

0x8c11,	// (0x000336ff) list_double_pane_g2_cp2

0x8c19,	// (0x00033707) list_double_pane_t1_cp2_ParamLimits

0x8c19,	// (0x00033707) list_double_pane_t1_cp2

0x8c2f,	// (0x0003371d) list_double_pane_t2_cp2_ParamLimits

0x8c2f,	// (0x0003371d) list_double_pane_t2_cp2

0x8c5b,	// (0x00033749) list_single_pane_cp2_g3

0x8c6b,	// (0x00033759) list_single_pane_g1_cp2_ParamLimits

0x8c6b,	// (0x00033759) list_single_pane_g1_cp2

0x8c77,	// (0x00033765) list_single_pane_g2_cp2

0x8c7f,	// (0x0003376d) list_single_pane_t1_cp2_ParamLimits

0x8c7f,	// (0x0003376d) list_single_pane_t1_cp2

0x8c97,	// (0x00033785) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x8c97,	// (0x00033785) list_single_large_graphic_pane_g1_cp2

0x8ca5,	// (0x00033793) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x8ca5,	// (0x00033793) list_single_large_graphic_pane_g2_cp2

0x8cb1,	// (0x0003379f) list_single_large_graphic_pane_g3_cp2

0x8cb9,	// (0x000337a7) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x8cb9,	// (0x000337a7) list_single_large_graphic_pane_g4_cp1

0x8cd3,	// (0x000337c1) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x8cd3,	// (0x000337c1) list_single_large_graphic_pane_t1_cp2

0xa880,	// (0x0003536e) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa880,	// (0x0003536e) list_single_graphic_heading_pane_g1_cp2

0xa84d,	// (0x0003533b) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa84d,	// (0x0003533b) list_single_graphic_heading_pane_g4_cp2

0x8c77,	// (0x00033765) list_single_graphic_heading_pane_g5_cp2

0xa88c,	// (0x0003537a) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa88c,	// (0x0003537a) list_single_graphic_heading_pane_t1_cp2

0xa8a2,	// (0x00035390) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa8a2,	// (0x00035390) list_single_graphic_heading_pane_t2_cp2

0xa841,	// (0x0003532f) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa841,	// (0x0003532f) list_single_2graphic_pane_g1_cp2

0xa84d,	// (0x0003533b) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa84d,	// (0x0003533b) list_single_2graphic_pane_g2_cp2

0x8c77,	// (0x00033765) list_single_2graphic_pane_g3_cp2

0xa85e,	// (0x0003534c) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa85e,	// (0x0003534c) list_single_2graphic_pane_g4_cp2

0xa86a,	// (0x00035358) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa86a,	// (0x00035358) list_single_2graphic_pane_t1_cp2

0x71ba,	// (0x00031ca8) list_highlight_pane_g10_cp1

0xa419,	// (0x00034f07) list_highlight_pane_g1_cp1

0xa421,	// (0x00034f0f) list_highlight_pane_g2_cp1

0xa429,	// (0x00034f17) list_highlight_pane_g3_cp1

0xa431,	// (0x00034f1f) list_highlight_pane_g4_cp1

0xa439,	// (0x00034f27) list_highlight_pane_g5_cp1

0xa441,	// (0x00034f2f) list_highlight_pane_g6_cp1

0xa449,	// (0x00034f37) list_highlight_pane_g7_cp1

0xa451,	// (0x00034f3f) list_highlight_pane_g8_cp1

0xa459,	// (0x00034f47) list_highlight_pane_g9_cp1

0xa339,	// (0x00034e27) form_field_slider_pane_t3

0xa347,	// (0x00034e35) form_field_slider_pane_t4

0xa355,	// (0x00034e43) slider_form_pane_ParamLimits

0xa355,	// (0x00034e43) slider_form_pane

0x71c4,	// (0x00031cb2) control_abbreviations

0x71c4,	// (0x00031cb2) control_conventions

0x71c4,	// (0x00031cb2) control_definitions

0x71c4,	// (0x00031cb2) format_table_attribute

0xab47,	// (0x00035635) bg_popup_preview_window_pane_g9

0x71c4,	// (0x00031cb2) format_table_data2

0x71c4,	// (0x00031cb2) format_table_data3

0x71c4,	// (0x00031cb2) format_table_data_example

0x0008,

0x71c4,	// (0x00031cb2) intro_purpose

0xf928,	// (0x0003a416) bg_popup_preview_window_pane_g

0x71c4,	// (0x00031cb2) texts_category

0x71c4,	// (0x00031cb2) texts_graphics

0x8ce9,	// (0x000337d7) text_digital

0x8cf8,	// (0x000337e6) text_primary

0x8d07,	// (0x000337f5) text_primary_small

0x8d16,	// (0x00033804) text_secondary

0x8d25,	// (0x00033813) text_title

0xb2e3,	// (0x00035dd1) bg_passive_tab_pane_g1_cp3_srt

0x897d,	// (0x0003346b) bg_passive_tab_pane_g2_cp3_srt

0xb2ec,	// (0x00035dda) bg_passive_tab_pane_g3_cp3_srt

0x72a4,	// (0x00031d92) bg_active_tab_pane_cp3_srt_ParamLimits

0x72a4,	// (0x00031d92) bg_active_tab_pane_cp3_srt

0xb2f5,	// (0x00035de3) tabs_4_active_pane_srt_g1

0xb2fd,	// (0x00035deb) tabs_4_active_pane_srt_t1_ParamLimits

0xb2fd,	// (0x00035deb) tabs_4_active_pane_srt_t1

0xb2e3,	// (0x00035dd1) bg_active_tab_pane_g1_cp3_copy1

0x897d,	// (0x0003346b) bg_active_tab_pane_g2_cp3_copy1

0xb2ec,	// (0x00035dda) bg_active_tab_pane_g3_cp3_copy1

0x72a4,	// (0x00031d92) tabs_2_long_active_pane_srt_ParamLimits

0x72a4,	// (0x00031d92) tabs_2_long_active_pane_srt

0x72a4,	// (0x00031d92) tabs_2_long_passive_pane_srt_ParamLimits

0x72a4,	// (0x00031d92) tabs_2_long_passive_pane_srt

0x82cd,	// (0x00032dbb) bg_passive_tab_pane_cp4_srt_ParamLimits

0x82cd,	// (0x00032dbb) bg_passive_tab_pane_cp4_srt

0xaf97,	// (0x00035a85) bg_passive_tab_pane_g1_cp4_srt

0x897d,	// (0x0003346b) bg_passive_tab_pane_g2_cp4_srt

0xafa0,	// (0x00035a8e) bg_passive_tab_pane_g3_cp4_srt

0x82ac,	// (0x00032d9a) bg_active_tab_pane_cp4_srt_ParamLimits

0x82ac,	// (0x00032d9a) bg_active_tab_pane_cp4_srt

0xafa9,	// (0x00035a97) tabs_2_long_active_pane_srt_t1_ParamLimits

0xafa9,	// (0x00035a97) tabs_2_long_active_pane_srt_t1

0xaf97,	// (0x00035a85) bg_active_tab_pane_g1_cp4_srt

0x897d,	// (0x0003346b) bg_active_tab_pane_g2_cp4_srt

0xafa0,	// (0x00035a8e) bg_active_tab_pane_g3_cp4_srt

0x7520,	// (0x0003200e) tabs_3_long_active_pane_srt_ParamLimits

0x7520,	// (0x0003200e) tabs_3_long_active_pane_srt

0x7520,	// (0x0003200e) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x7520,	// (0x0003200e) tabs_3_long_passive_pane_cp_srt

0x7520,	// (0x0003200e) tabs_3_long_passive_pane_srt_ParamLimits

0x7520,	// (0x0003200e) tabs_3_long_passive_pane_srt

0x82cd,	// (0x00032dbb) bg_passive_tab_pane_cp5_srt_ParamLimits

0x82cd,	// (0x00032dbb) bg_passive_tab_pane_cp5_srt

0x8a07,	// (0x000334f5) bg_passive_tab_pane_g1_cp5_srt

0x897d,	// (0x0003346b) bg_passive_tab_pane_g2_cp5_srt

0x8a10,	// (0x000334fe) bg_passive_tab_pane_g3_cp5_srt

0x82ac,	// (0x00032d9a) bg_active_tab_pane_cp5_srt_ParamLimits

0x82ac,	// (0x00032d9a) bg_active_tab_pane_cp5_srt

0xaf85,	// (0x00035a73) tabs_3_long_active_pane_srt_t1_ParamLimits

0xaf85,	// (0x00035a73) tabs_3_long_active_pane_srt_t1

0x8a07,	// (0x000334f5) bg_active_tab_pane_g1_cp5_srt

0x897d,	// (0x0003346b) bg_active_tab_pane_g2_cp5_srt

0x8a10,	// (0x000334fe) bg_active_tab_pane_g3_cp5_srt

0xaf77,	// (0x00035a65) navi_text_pane_srt_t1

0xaf6f,	// (0x00035a5d) navi_icon_pane_srt_g1

0x8efc,	// (0x000339ea) midp_editing_number_pane_srt

0x8d34,	// (0x00033822) midp_ticker_pane_srt

0x8f04,	// (0x000339f2) midp_ticker_pane_srt_g1

0x8f0c,	// (0x000339fa) midp_ticker_pane_srt_g2

0x0001,

0xf7b2,	// (0x0003a2a0) midp_ticker_pane_srt_g

0x8f14,	// (0x00033a02) midp_ticker_pane_srt_t1

0xaf60,	// (0x00035a4e) midp_editing_number_pane_t1_copy1

0x8d3c,	// (0x0003382a) listscroll_midp_pane

0x8d3c,	// (0x0003382a) midp_form_pane

0x8daa,	// (0x00033898) midp_info_popup_window_ParamLimits

0x8daa,	// (0x00033898) midp_info_popup_window

0x818e,	// (0x00032c7c) bg_popup_sub_pane_cp50_ParamLimits

0x818e,	// (0x00032c7c) bg_popup_sub_pane_cp50

0xa080,	// (0x00034b6e) listscroll_midp_info_pane_ParamLimits

0xa080,	// (0x00034b6e) listscroll_midp_info_pane

0xa068,	// (0x00034b56) listscroll_form_midp_pane_ParamLimits

0xa068,	// (0x00034b56) listscroll_form_midp_pane

0xa074,	// (0x00034b62) scroll_bar_cp050

0xa048,	// (0x00034b36) list_midp_pane

0xbcfa,	// (0x000367e8) signal_pane_g2_cp

0x9f82,	// (0x00034a70) listscroll_midp_info_pane_t1_ParamLimits

0x9f82,	// (0x00034a70) listscroll_midp_info_pane_t1

0x9f9a,	// (0x00034a88) listscroll_midp_info_pane_t2_ParamLimits

0x9f9a,	// (0x00034a88) listscroll_midp_info_pane_t2

0x9fd8,	// (0x00034ac6) listscroll_midp_info_pane_t3_ParamLimits

0x9fd8,	// (0x00034ac6) listscroll_midp_info_pane_t3

0xa012,	// (0x00034b00) listscroll_midp_info_pane_t4_ParamLimits

0xa012,	// (0x00034b00) listscroll_midp_info_pane_t4

0x0003,

0xf863,	// (0x0003a351) listscroll_midp_info_pane_t_ParamLimits

0xf863,	// (0x0003a351) listscroll_midp_info_pane_t

0x8258,	// (0x00032d46) scroll_pane_cp21

0x9f1c,	// (0x00034a0a) form_midp_field_choice_group_pane

0x9f25,	// (0x00034a13) form_midp_field_text_pane

0x9f68,	// (0x00034a56) form_midp_field_time_pane

0x9f70,	// (0x00034a5e) form_midp_gauge_slider_pane

0x9f79,	// (0x00034a67) form_midp_gauge_wait_pane

0x71c4,	// (0x00031cb2) form_midp_image_pane

0x600c,	// (0x00030afa) list_single_midp_pane_ParamLimits

0x600c,	// (0x00030afa) list_single_midp_pane

0x9ee0,	// (0x000349ce) form_midp_field_text_pane_t1

0x9cf4,	// (0x000347e2) input_focus_pane_cp050

0x9f0b,	// (0x000349f9) list_midp_form_text_pane

0x9eaf,	// (0x0003499d) form_midp_field_choice_group_pane_t1

0x9ebd,	// (0x000349ab) input_focus_pane_cp051

0x9ed1,	// (0x000349bf) list_midp_choice_pane

0x71c4,	// (0x00031cb2) status_idle_pane

0x9e93,	// (0x00034981) form_midp_field_time_pane_t1

0x71ba,	// (0x00031ca8) wait_anim_pane_g2_copy1

0x9ea1,	// (0x0003498f) form_midp_field_time_pane_t2

0x0001,

0x8e5a,	// (0x00033948) aid_navinavi_width_2_pane

0xf85e,	// (0x0003a34c) form_midp_field_time_pane_t

0x71c4,	// (0x00031cb2) input_focus_pane_cp052

0x71c4,	// (0x00031cb2) bg_input_focus_pane_cp040

0x9e53,	// (0x00034941) form_midp_gauge_slider_pane_t1

0x9e61,	// (0x0003494f) form_midp_gauge_slider_pane_t2

0x9e6f,	// (0x0003495d) form_midp_gauge_slider_pane_t3

0x9e7d,	// (0x0003496b) form_midp_gauge_slider_pane_t4

0x0003,

0xf855,	// (0x0003a343) form_midp_gauge_slider_pane_t

0x9e8b,	// (0x00034979) form_midp_slider_pane

0x72a4,	// (0x00031d92) bg_input_focus_pane_cp041_ParamLimits

0x72a4,	// (0x00031d92) bg_input_focus_pane_cp041

0x9e20,	// (0x0003490e) form_midp_gauge_wait_pane_t1_ParamLimits

0x9e20,	// (0x0003490e) form_midp_gauge_wait_pane_t1

0x9e32,	// (0x00034920) form_midp_gauge_wait_pane_t2_ParamLimits

0x9e32,	// (0x00034920) form_midp_gauge_wait_pane_t2

0x0001,

0xf850,	// (0x0003a33e) form_midp_gauge_wait_pane_t_ParamLimits

0xf850,	// (0x0003a33e) form_midp_gauge_wait_pane_t

0x9e44,	// (0x00034932) form_midp_wait_pane_ParamLimits

0x9e44,	// (0x00034932) form_midp_wait_pane

0x9de8,	// (0x000348d6) form_midp_image_pane_g1

0x9df1,	// (0x000348df) form_midp_image_pane_t1

0x9e00,	// (0x000348ee) form_midp_image_pane_t2

0x9e0f,	// (0x000348fd) form_midp_image_pane_t3

0x0002,

0xf849,	// (0x0003a337) form_midp_image_pane_t

0x9ddf,	// (0x000348cd) list_single_midp_pane_g1

0x5ffd,	// (0x00030aeb) list_single_midp_pane_t1

0x9dc5,	// (0x000348b3) list_midp_form_item_pane_ParamLimits

0x9dc5,	// (0x000348b3) list_midp_form_item_pane

0x8e02,	// (0x000338f0) list_midp_form_item_pane_t1

0x8e11,	// (0x000338ff) midp_ticker_pane_g1

0x8e1d,	// (0x0003390b) midp_ticker_pane_g2

0x0001,

0xf798,	// (0x0003a286) midp_ticker_pane_g

0x8e29,	// (0x00033917) midp_ticker_pane_t1

0xb1df,	// (0x00035ccd) midp_editing_number_pane_t1

0xb1bd,	// (0x00035cab) midp_editing_number_pane

0xb1cc,	// (0x00035cba) midp_ticker_pane

0xaf50,	// (0x00035a3e) ai_message_heading_pane

0x71c4,	// (0x00031cb2) bg_popup_window_pane_cp14

0xaf58,	// (0x00035a46) listscroll_ai_message_pane

0xaed6,	// (0x000359c4) ai_message_heading_pane_g1_ParamLimits

0xaed6,	// (0x000359c4) ai_message_heading_pane_g1

0xaee2,	// (0x000359d0) ai_message_heading_pane_g2_ParamLimits

0xaee2,	// (0x000359d0) ai_message_heading_pane_g2

0xaef0,	// (0x000359de) ai_message_heading_pane_g3_ParamLimits

0xaef0,	// (0x000359de) ai_message_heading_pane_g3

0xaefc,	// (0x000359ea) ai_message_heading_pane_g4_ParamLimits

0xaefc,	// (0x000359ea) ai_message_heading_pane_g4

0x0003,

0xf98a,	// (0x0003a478) ai_message_heading_pane_g_ParamLimits

0xf98a,	// (0x0003a478) ai_message_heading_pane_g

0xaf08,	// (0x000359f6) ai_message_heading_pane_t1_ParamLimits

0xaf08,	// (0x000359f6) ai_message_heading_pane_t1

0xaf22,	// (0x00035a10) ai_message_heading_pane_t2_ParamLimits

0xaf22,	// (0x00035a10) ai_message_heading_pane_t2

0x0001,

0xf993,	// (0x0003a481) ai_message_heading_pane_t_ParamLimits

0xf993,	// (0x0003a481) ai_message_heading_pane_t

0xaf36,	// (0x00035a24) bg_popup_heading_pane_cp1_ParamLimits

0xaf36,	// (0x00035a24) bg_popup_heading_pane_cp1

0xaec4,	// (0x000359b2) list_ai_message_pane_ParamLimits

0xaec4,	// (0x000359b2) list_ai_message_pane

0x8258,	// (0x00032d46) scroll_pane_cp10

0xae60,	// (0x0003594e) list_ai_message_pane_g1

0xae68,	// (0x00035956) list_ai_message_pane_g2

0x0001,

0xf967,	// (0x0003a455) list_ai_message_pane_g

0xae70,	// (0x0003595e) list_ai_message_pane_t1_ParamLimits

0xae70,	// (0x0003595e) list_ai_message_pane_t1

0xae85,	// (0x00035973) list_ai_message_pane_t2_ParamLimits

0xae85,	// (0x00035973) list_ai_message_pane_t2

0xae9a,	// (0x00035988) list_ai_message_pane_t3_ParamLimits

0xae9a,	// (0x00035988) list_ai_message_pane_t3

0xaeaf,	// (0x0003599d) list_ai_message_pane_t4_ParamLimits

0xaeaf,	// (0x0003599d) list_ai_message_pane_t4

0x0003,

0xf96c,	// (0x0003a45a) list_ai_message_pane_t_ParamLimits

0xf96c,	// (0x0003a45a) list_ai_message_pane_t

0xae49,	// (0x00035937) cell_ai_soft_ind_pane_ParamLimits

0xae49,	// (0x00035937) cell_ai_soft_ind_pane

0x8e3b,	// (0x00033929) cell_ai_soft_ind_pane_g1_ParamLimits

0x8e3b,	// (0x00033929) cell_ai_soft_ind_pane_g1

0x71c4,	// (0x00031cb2) grid_highlight_cp1

0x8e48,	// (0x00033936) text_secondary_cp56_ParamLimits

0x8e48,	// (0x00033936) text_secondary_cp56

0xae1e,	// (0x0003590c) example_general_pane_ParamLimits

0xae1e,	// (0x0003590c) example_general_pane

0xae2a,	// (0x00035918) example_parent_pane_g1_ParamLimits

0xae2a,	// (0x00035918) example_parent_pane_g1

0xae36,	// (0x00035924) example_parent_pane_t1_ParamLimits

0xae36,	// (0x00035924) example_parent_pane_t1

0x9489,	// (0x00033f77) popup_preview_text_window_ParamLimits

0x9489,	// (0x00033f77) popup_preview_text_window

0x8c63,	// (0x00033751) list_single_pane_cp2_g4

0x75d6,	// (0x000320c4) bg_popup_preview_window_pane_ParamLimits

0x75d6,	// (0x000320c4) bg_popup_preview_window_pane

0xab51,	// (0x0003563f) popup_preview_text_window_t1_ParamLimits

0xab51,	// (0x0003563f) popup_preview_text_window_t1

0xab6f,	// (0x0003565d) popup_preview_text_window_t2_ParamLimits

0xab6f,	// (0x0003565d) popup_preview_text_window_t2

0xabb8,	// (0x000356a6) popup_preview_text_window_t3_ParamLimits

0xabb8,	// (0x000356a6) popup_preview_text_window_t3

0xabfd,	// (0x000356eb) popup_preview_text_window_t4_ParamLimits

0xabfd,	// (0x000356eb) popup_preview_text_window_t4

0x0004,

0xf93b,	// (0x0003a429) popup_preview_text_window_t_ParamLimits

0xf93b,	// (0x0003a429) popup_preview_text_window_t

0xac7b,	// (0x00035769) scroll_pane_cp11

0x9c02,	// (0x000346f0) bg_popup_preview_window_pane_g1

0xab05,	// (0x000355f3) bg_popup_preview_window_pane_g2

0xab0f,	// (0x000355fd) bg_popup_preview_window_pane_g3

0xab19,	// (0x00035607) bg_popup_preview_window_pane_g4

0xab23,	// (0x00035611) bg_popup_preview_window_pane_g5

0xab2d,	// (0x0003561b) bg_popup_preview_window_pane_g6

0xab35,	// (0x00035623) bg_popup_preview_window_pane_g7

0xab3d,	// (0x0003562b) bg_popup_preview_window_pane_g8

0x4c12,	// (0x0002f700) aid_popup_width_pane

0x9465,	// (0x00033f53) popup_midp_note_alarm_window_ParamLimits

0x9465,	// (0x00033f53) popup_midp_note_alarm_window

0x80ca,	// (0x00032bb8) data_form_pane_ParamLimits

0x561e,	// (0x0003010c) form_field_data_pane_g1

0x5628,	// (0x00030116) form_field_data_pane_t1_ParamLimits

0x80d6,	// (0x00032bc4) input_focus_pane_ParamLimits

0x80e4,	// (0x00032bd2) data_form_wide_pane_ParamLimits

0x5642,	// (0x00030130) form_field_data_wide_pane_g1

0x564e,	// (0x0003013c) form_field_data_wide_pane_t1_ParamLimits

0x7e47,	// (0x00032935) input_focus_pane_cp6_ParamLimits

0x8203,	// (0x00032cf1) input_popup_find_pane_g1_ParamLimits

0x8203,	// (0x00032cf1) input_popup_find_pane_g1

0x58be,	// (0x000303ac) aid_navi_side_left_pane

0x58d3,	// (0x000303c1) aid_navi_side_right_pane

0xa514,	// (0x00035002) bg_popup_window_pane_cp30_ParamLimits

0xa514,	// (0x00035002) bg_popup_window_pane_cp30

0xa58e,	// (0x0003507c) popup_midp_note_alarm_window_g1_ParamLimits

0xa58e,	// (0x0003507c) popup_midp_note_alarm_window_g1

0xa5be,	// (0x000350ac) popup_midp_note_alarm_window_t1_ParamLimits

0xa5be,	// (0x000350ac) popup_midp_note_alarm_window_t1

0xa65f,	// (0x0003514d) popup_midp_note_alarm_window_t2_ParamLimits

0xa65f,	// (0x0003514d) popup_midp_note_alarm_window_t2

0xa70d,	// (0x000351fb) popup_midp_note_alarm_window_t3_ParamLimits

0xa70d,	// (0x000351fb) popup_midp_note_alarm_window_t3

0xa73f,	// (0x0003522d) popup_midp_note_alarm_window_t4_ParamLimits

0xa73f,	// (0x0003522d) popup_midp_note_alarm_window_t4

0xa765,	// (0x00035253) popup_midp_note_alarm_window_t5_ParamLimits

0xa765,	// (0x00035253) popup_midp_note_alarm_window_t5

0x000a,

0xf8d8,	// (0x0003a3c6) popup_midp_note_alarm_window_t_ParamLimits

0xf8d8,	// (0x0003a3c6) popup_midp_note_alarm_window_t

0xa811,	// (0x000352ff) wait_bar_pane_cp1_ParamLimits

0xa811,	// (0x000352ff) wait_bar_pane_cp1

0x71c4,	// (0x00031cb2) wait_anim_pane_copy1

0x71c4,	// (0x00031cb2) wait_border_pane_copy1

0xa1f9,	// (0x00034ce7) wait_border_pane_g1_copy1

0x5668,	// (0x00030156) form_field_popup_pane_g1

0x5670,	// (0x0003015e) form_field_popup_pane_t1_ParamLimits

0x80d6,	// (0x00032bc4) input_focus_pane_cp7_ParamLimits

0x8110,	// (0x00032bfe) list_form_pane_ParamLimits

0x568a,	// (0x00030178) form_field_popup_wide_pane_g1

0x5692,	// (0x00030180) form_field_popup_wide_pane_t1_ParamLimits

0x80d6,	// (0x00032bc4) input_focus_pane_cp8_ParamLimits

0x811c,	// (0x00032c0a) list_form_wide_pane_ParamLimits

0xb370,	// (0x00035e5e) aid_size_cell_graphic_pane

0x571e,	// (0x0003020c) data_form_pane_t1_ParamLimits

0x629f,	// (0x00030d8d) data_form_wide_pane_t1_ParamLimits

0x97b0,	// (0x0003429e) bg_status_flat_pane

0x7204,	// (0x00031cf2) title_pane_t1_ParamLimits

0x726c,	// (0x00031d5a) title_pane_t2_ParamLimits

0x7292,	// (0x00031d80) title_pane_t3_ParamLimits

0xf59b,	// (0x0003a089) title_pane_t_ParamLimits

0x86db,	// (0x000331c9) level_1_signal_ParamLimits

0x86e8,	// (0x000331d6) level_2_signal_ParamLimits

0x86f5,	// (0x000331e3) level_3_signal_ParamLimits

0x8702,	// (0x000331f0) level_4_signal_ParamLimits

0x870f,	// (0x000331fd) level_5_signal_ParamLimits

0x871c,	// (0x0003320a) level_6_signal_ParamLimits

0x8729,	// (0x00033217) level_7_signal_ParamLimits

0x86db,	// (0x000331c9) level_1_battery_ParamLimits

0x86e8,	// (0x000331d6) level_2_battery_ParamLimits

0x86f5,	// (0x000331e3) level_3_battery_ParamLimits

0x8702,	// (0x000331f0) level_4_battery_ParamLimits

0x870f,	// (0x000331fd) level_5_battery_ParamLimits

0x871c,	// (0x0003320a) level_6_battery_ParamLimits

0x8729,	// (0x00033217) level_7_battery_ParamLimits

0xa419,	// (0x00034f07) bg_status_flat_pane_g1

0xa421,	// (0x00034f0f) bg_status_flat_pane_g2

0xa429,	// (0x00034f17) bg_status_flat_pane_g3

0xa431,	// (0x00034f1f) bg_status_flat_pane_g4

0xa439,	// (0x00034f27) bg_status_flat_pane_g5

0xa441,	// (0x00034f2f) bg_status_flat_pane_g6

0xa449,	// (0x00034f37) bg_status_flat_pane_g7

0x72ba,	// (0x00031da8) tabs_3_active_pane_t1_ParamLimits

0x72ba,	// (0x00031da8) tabs_3_passive_pane_t1_ParamLimits

0x72d4,	// (0x00031dc2) tabs_4_active_pane_t1_ParamLimits

0x72d4,	// (0x00031dc2) tabs_4_1_passive_pane_t1_ParamLimits

0x829a,	// (0x00032d88) tabs_2_active_pane_t1_ParamLimits

0x829a,	// (0x00032d88) tabs_2_passive_pane_t1_ParamLimits

0x82ac,	// (0x00032d9a) bg_active_tab_pane_cp4_ParamLimits

0x82ba,	// (0x00032da8) tabs_2_long_active_pane_t1_ParamLimits

0x82cd,	// (0x00032dbb) bg_passive_tab_pane_cp4_ParamLimits

0x5f44,	// (0x00030a32) list_single_midp_graphic_pane_t1_ParamLimits

0x82ac,	// (0x00032d9a) bg_active_tab_pane_cp5_ParamLimits

0x82d9,	// (0x00032dc7) tabs_3_long_active_pane_t1_ParamLimits

0x82cd,	// (0x00032dbb) bg_passive_tab_pane_cp5_ParamLimits

0x5f44,	// (0x00030a32) list_single_midp_graphic_pane_t1

0x97b0,	// (0x0003429e) bg_status_flat_pane_ParamLimits

0x987b,	// (0x00034369) indicator_pane_cp2_ParamLimits

0x987b,	// (0x00034369) indicator_pane_cp2

0x99bd,	// (0x000344ab) navi_pane_srt_ParamLimits

0x99bd,	// (0x000344ab) navi_pane_srt

0x99e1,	// (0x000344cf) popup_clock_digital_analogue_window_cp1

0x7384,	// (0x00031e72) indicator_pane_t1

0x8d34,	// (0x00033822) copy_highlight_pane

0x8d34,	// (0x00033822) cursor_graphics_pane

0x8d34,	// (0x00033822) graphic_within_text_pane

0x8d34,	// (0x00033822) link_highlight_pane

0xac3e,	// (0x0003572c) popup_preview_text_window_t5_ParamLimits

0xac3e,	// (0x0003572c) popup_preview_text_window_t5

0x8e64,	// (0x00033952) cursor_digital_pane

0x8e64,	// (0x00033952) cursor_primary_pane

0x8e75,	// (0x00033963) cursor_primary_small_pane

0x8e7d,	// (0x0003396b) cursor_secondary_pane

0x8e85,	// (0x00033973) cursor_title_pane

0x8e64,	// (0x00033952) link_highlight_digital_pane

0x8e6c,	// (0x0003395a) link_highlight_primary_pane

0x8e75,	// (0x00033963) link_highlight_primary_small_pane

0x8e7d,	// (0x0003396b) link_highlight_secondary_pane

0x8e85,	// (0x00033973) link_highlight_title_pane

0x8e64,	// (0x00033952) copy_highlight_digital_pane

0x8e64,	// (0x00033952) copy_highlight_primary_pane

0x8e75,	// (0x00033963) copy_highlight_primary_small_pane

0x8e7d,	// (0x0003396b) copy_highlight_secondary_pane

0x8e85,	// (0x00033973) copy_highlight_title_pane

0x8e7d,	// (0x0003396b) graphic_text_digital_pane

0xa4b7,	// (0x00034fa5) graphic_text_primary_pane

0xa4c0,	// (0x00034fae) graphic_text_primary_small_pane

0x8e75,	// (0x00033963) graphic_text_secondary_pane

0x8e64,	// (0x00033952) graphic_text_title_pane

0x8e8d,	// (0x0003397b) cursor_primary_pane_g1

0xa4a9,	// (0x00034f97) cursor_text_primary_t1

0xa491,	// (0x00034f7f) cursor_primary_small_pane_g1

0xa49b,	// (0x00034f89) cursor_text_primary_small_t1

0xa479,	// (0x00034f67) cursor_primary_small_pane_g1_copy1

0xa483,	// (0x00034f71) cursor_text_primary_small_t1_copy1

0xa461,	// (0x00034f4f) cursor_text_title_t1

0xa46f,	// (0x00034f5d) cursor_title_pane_g1

0x8e8d,	// (0x0003397b) cursor_digital_pane_g1

0x8e97,	// (0x00033985) cursor_text_digital_t1

0x8ea5,	// (0x00033993) link_highlight_primary_pane_g1

0xa40a,	// (0x00034ef8) link_highlight_primary_pane_t1

0x8ea5,	// (0x00033993) link_highlight_primary_small_pane_g1

0x8ead,	// (0x0003399b) link_highlight_primary_small_pane_t1

0x8ebc,	// (0x000339aa) link_highlight_secondary_pane_g1

0x8ec4,	// (0x000339b2) link_highlight_secondary_pane_t1

0xa37e,	// (0x00034e6c) link_highlight_title_pane_g1

0xa386,	// (0x00034e74) link_highlight_title_pane_t1

0xa367,	// (0x00034e55) link_highlight_digital_pane_g1

0xa36f,	// (0x00034e5d) link_highlight_digital_pane_t1

0xa22f,	// (0x00034d1d) copy_highlight_primary_pane_g1

0xa246,	// (0x00034d34) copy_highlight_primary_pane_t1

0xa22f,	// (0x00034d1d) copy_highlight_primary_small_pane_g1

0xa237,	// (0x00034d25) copy_highlight_primary_small_pane_t1

0x8ed3,	// (0x000339c1) copy_highlight_secondary_pane_g1

0x8edb,	// (0x000339c9) copy_highlight_secondary_pane_t1

0xa218,	// (0x00034d06) copy_highlight_title_pane_g1

0xa220,	// (0x00034d0e) copy_highlight_title_pane_t1

0xa22f,	// (0x00034d1d) copy_highlight_digital_pane_g1

0xb540,	// (0x0003602e) copy_highlight_digital_pane_t1

0xb494,	// (0x00035f82) graphic_text_primary_pane_g1

0xb524,	// (0x00036012) graphic_text_primary_pane_t1

0xb532,	// (0x00036020) graphic_text_primary_pane_t2

0x0001,

0xfa07,	// (0x0003a4f5) graphic_text_primary_pane_t

0xb500,	// (0x00035fee) graphic_text_primary_small_pane_g1

0xb508,	// (0x00035ff6) graphic_text_primary_small_pane_t1

0xb516,	// (0x00036004) graphic_text_primary_small_pane_t2

0x0001,

0xfa02,	// (0x0003a4f0) graphic_text_primary_small_pane_t

0xb4dc,	// (0x00035fca) graphic_text_secondary_pane_g1

0xb4e4,	// (0x00035fd2) graphic_text_secondary_pane_t1

0xb4f2,	// (0x00035fe0) graphic_text_secondary_pane_t2

0x0001,

0xf9fd,	// (0x0003a4eb) graphic_text_secondary_pane_t

0xb4b8,	// (0x00035fa6) graphic_text_title_pane_g1

0xb4c0,	// (0x00035fae) graphic_text_title_pane_t1

0xb4ce,	// (0x00035fbc) graphic_text_title_pane_t2

0x0001,

0xf9f8,	// (0x0003a4e6) graphic_text_title_pane_t

0xb494,	// (0x00035f82) graphic_text_digital_pane_g1

0xb49c,	// (0x00035f8a) graphic_text_digital_pane_t1

0xb4aa,	// (0x00035f98) graphic_text_digital_pane_t2

0x0001,

0xf9f3,	// (0x0003a4e1) graphic_text_digital_pane_t

0x72a4,	// (0x00031d92) navi_icon_pane_srt_ParamLimits

0x72a4,	// (0x00031d92) navi_icon_pane_srt

0x71c4,	// (0x00031cb2) navi_midp_pane_srt

0x71c4,	// (0x00031cb2) navi_navi_pane_srt

0x72a4,	// (0x00031d92) navi_text_pane_srt_ParamLimits

0x72a4,	// (0x00031d92) navi_text_pane_srt

0xb45f,	// (0x00035f4d) navi_navi_icon_text_pane_srt

0xb467,	// (0x00035f55) navi_navi_pane_srt_g1_ParamLimits

0xb467,	// (0x00035f55) navi_navi_pane_srt_g1

0xb479,	// (0x00035f67) navi_navi_pane_srt_g2_ParamLimits

0xb479,	// (0x00035f67) navi_navi_pane_srt_g2

0x0001,

0xf9ee,	// (0x0003a4dc) navi_navi_pane_srt_g_ParamLimits

0xf9ee,	// (0x0003a4dc) navi_navi_pane_srt_g

0xb48b,	// (0x00035f79) navi_navi_tabs_pane_srt

0xb45f,	// (0x00035f4d) navi_navi_text_pane_srt

0xb45f,	// (0x00035f4d) navi_navi_volume_pane_srt

0xb450,	// (0x00035f3e) navi_navi_text_pane_srt_t1

0x63d8,	// (0x00030ec6) navi_navi_volume_pane_srt_g1

0x63e0,	// (0x00030ece) volume_small_pane_srt_ParamLimits

0x63e0,	// (0x00030ece) volume_small_pane_srt

0x5c31,	// (0x0003071f) volume_small_pane_srt_g1_ParamLimits

0x5c31,	// (0x0003071f) volume_small_pane_srt_g1

0x5c41,	// (0x0003072f) volume_small_pane_srt_g2_ParamLimits

0x5c41,	// (0x0003072f) volume_small_pane_srt_g2

0x5c52,	// (0x00030740) volume_small_pane_srt_g3_ParamLimits

0x5c52,	// (0x00030740) volume_small_pane_srt_g3

0x5c63,	// (0x00030751) volume_small_pane_srt_g4_ParamLimits

0x5c63,	// (0x00030751) volume_small_pane_srt_g4

0x5c74,	// (0x00030762) volume_small_pane_srt_g5_ParamLimits

0x5c74,	// (0x00030762) volume_small_pane_srt_g5

0x5c85,	// (0x00030773) volume_small_pane_srt_g6_ParamLimits

0x5c85,	// (0x00030773) volume_small_pane_srt_g6

0x5c96,	// (0x00030784) volume_small_pane_srt_g7_ParamLimits

0x5c96,	// (0x00030784) volume_small_pane_srt_g7

0x5ca7,	// (0x00030795) volume_small_pane_srt_g8_ParamLimits

0x5ca7,	// (0x00030795) volume_small_pane_srt_g8

0x5cb8,	// (0x000307a6) volume_small_pane_srt_g9_ParamLimits

0x5cb8,	// (0x000307a6) volume_small_pane_srt_g9

0x5cc9,	// (0x000307b7) volume_small_pane_srt_g10_ParamLimits

0x5cc9,	// (0x000307b7) volume_small_pane_srt_g10

0x0009,

0xf79d,	// (0x0003a28b) volume_small_pane_srt_g_ParamLimits

0xf79d,	// (0x0003a28b) volume_small_pane_srt_g

0x768b,	// (0x00032179) query_popup_data_pane_cp2

0xb436,	// (0x00035f24) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb436,	// (0x00035f24) navi_navi_icon_text_pane_srt_t1

0xa4b7,	// (0x00034fa5) navi_tabs_2_long_pane_srt

0xa4b7,	// (0x00034fa5) navi_tabs_2_pane_srt

0xa4b7,	// (0x00034fa5) navi_tabs_3_long_pane_srt

0xa4b7,	// (0x00034fa5) navi_tabs_3_pane_srt

0xa4b7,	// (0x00034fa5) navi_tabs_4_pane_srt

0x63b8,	// (0x00030ea6) tabs_2_active_pane_srt_ParamLimits

0x63b8,	// (0x00030ea6) tabs_2_active_pane_srt

0x63c8,	// (0x00030eb6) tabs_2_passive_pane_srt_ParamLimits

0x63c8,	// (0x00030eb6) tabs_2_passive_pane_srt

0x90ba,	// (0x00033ba8) bg_passive_tab_pane_cp1_srt_ParamLimits

0x90ba,	// (0x00033ba8) bg_passive_tab_pane_cp1_srt

0xb402,	// (0x00035ef0) bg_passive_tab_pane_g1_cp1_srt

0x897d,	// (0x0003346b) bg_passive_tab_pane_g2_cp1_srt

0xb40b,	// (0x00035ef9) bg_passive_tab_pane_g3_cp1_srt

0x72a4,	// (0x00031d92) bg_active_tab_pane_cp1_srt_ParamLimits

0x72a4,	// (0x00031d92) bg_active_tab_pane_cp1_srt

0xb414,	// (0x00035f02) tabs_2_active_pane_srt_g1

0xb41c,	// (0x00035f0a) tabs_2_active_pane_srt_t1_ParamLimits

0xb41c,	// (0x00035f0a) tabs_2_active_pane_srt_t1

0xb402,	// (0x00035ef0) bg_active_tab_pane_g1_cp1_srt

0x897d,	// (0x0003346b) bg_active_tab_pane_g2_cp1_srt

0xb40b,	// (0x00035ef9) bg_active_tab_pane_g3_cp1_srt

0x6385,	// (0x00030e73) tabs_3_active_pane_srt_ParamLimits

0x6385,	// (0x00030e73) tabs_3_active_pane_srt

0x6396,	// (0x00030e84) tabs_3_passive_pane_cp_srt_ParamLimits

0x6396,	// (0x00030e84) tabs_3_passive_pane_cp_srt

0x63a7,	// (0x00030e95) tabs_3_passive_pane_srt_ParamLimits

0x63a7,	// (0x00030e95) tabs_3_passive_pane_srt

0x90ba,	// (0x00033ba8) bg_passive_tab_pane_cp2_srt_ParamLimits

0x90ba,	// (0x00033ba8) bg_passive_tab_pane_cp2_srt

0x8eea,	// (0x000339d8) bg_passive_tab_pane_g1_cp2_srt

0x897d,	// (0x0003346b) bg_passive_tab_pane_g2_cp2_srt

0x8ef3,	// (0x000339e1) bg_passive_tab_pane_g3_cp2_srt

0x72a4,	// (0x00031d92) bg_active_tab_pane_cp2_srt_ParamLimits

0x72a4,	// (0x00031d92) bg_active_tab_pane_cp2_srt

0xb3e8,	// (0x00035ed6) tabs_3_active_pane_srt_g1

0xb3f0,	// (0x00035ede) tabs_3_active_pane_srt_t1_ParamLimits

0xb3f0,	// (0x00035ede) tabs_3_active_pane_srt_t1

0x8eea,	// (0x000339d8) bg_active_tab_pane_g1_cp2_srt

0x897d,	// (0x0003346b) bg_active_tab_pane_g2_cp2_srt

0x8ef3,	// (0x000339e1) bg_active_tab_pane_g3_cp2_srt

0x633d,	// (0x00030e2b) tabs_4_active_pane_srt_ParamLimits

0x633d,	// (0x00030e2b) tabs_4_active_pane_srt

0x634f,	// (0x00030e3d) tabs_4_passive_pane_cp2_srt_ParamLimits

0x634f,	// (0x00030e3d) tabs_4_passive_pane_cp2_srt

0x9048,	// (0x00033b36) aid_size_cell_toolbar

0x82cd,	// (0x00032dbb) main_idle_act_pane_ParamLimits

0x927f,	// (0x00033d6d) popup_large_graphic_colour_window_ParamLimits

0x9632,	// (0x00034120) popup_toolbar_window_ParamLimits

0x9632,	// (0x00034120) popup_toolbar_window

0x62f8,	// (0x00030de6) list_single_graphic_2heading_pane_ParamLimits

0x62f8,	// (0x00030de6) list_single_graphic_2heading_pane

0x8489,	// (0x00032f77) aid_size_cell_apps_grid_lsc_pane

0x849b,	// (0x00032f89) aid_size_cell_apps_grid_prt_pane

0x90ba,	// (0x00033ba8) bg_wml_button_pane_cp1_ParamLimits

0x90ba,	// (0x00033ba8) bg_wml_button_pane_cp1

0x9ee0,	// (0x000349ce) form_midp_field_text_pane_t1_ParamLimits

0x9cf4,	// (0x000347e2) input_focus_pane_cp050_ParamLimits

0x9f0b,	// (0x000349f9) list_midp_form_text_pane_ParamLimits

0x9ebd,	// (0x000349ab) input_focus_pane_cp051_ParamLimits

0x9ed1,	// (0x000349bf) list_midp_choice_pane_ParamLimits

0x9d85,	// (0x00034873) list_single_2graphic_pane_cp3_ParamLimits

0x9d85,	// (0x00034873) list_single_2graphic_pane_cp3

0x9d9e,	// (0x0003488c) list_single_midp_graphic_pane_ParamLimits

0x9d9e,	// (0x0003488c) list_single_midp_graphic_pane

0x4b9a,	// (0x0002f688) list_single_graphic_2heading_pane_g1_ParamLimits

0x4b9a,	// (0x0002f688) list_single_graphic_2heading_pane_g1

0x4ba6,	// (0x0002f694) list_single_graphic_2heading_pane_g4_ParamLimits

0x4ba6,	// (0x0002f694) list_single_graphic_2heading_pane_g4

0x4bb2,	// (0x0002f6a0) list_single_graphic_2heading_pane_g5_ParamLimits

0x4bb2,	// (0x0002f6a0) list_single_graphic_2heading_pane_g5

0x0002,

0xf7f0,	// (0x0003a2de) list_single_graphic_2heading_pane_g_ParamLimits

0xf7f0,	// (0x0003a2de) list_single_graphic_2heading_pane_g

0x4bbe,	// (0x0002f6ac) list_single_graphic_2heading_pane_t1_ParamLimits

0x4bbe,	// (0x0002f6ac) list_single_graphic_2heading_pane_t1

0x4bd2,	// (0x0002f6c0) list_single_graphic_2heading_pane_t2_ParamLimits

0x4bd2,	// (0x0002f6c0) list_single_graphic_2heading_pane_t2

0x4bee,	// (0x0002f6dc) list_single_graphic_2heading_pane_t3_ParamLimits

0x4bee,	// (0x0002f6dc) list_single_graphic_2heading_pane_t3

0x0002,

0xf7f7,	// (0x0003a2e5) list_single_graphic_2heading_pane_t_ParamLimits

0xf7f7,	// (0x0003a2e5) list_single_graphic_2heading_pane_t

0x9b40,	// (0x0003462e) bg_popup_sub_pane_cp2

0x9b6a,	// (0x00034658) grid_toobar_pane

0x5e38,	// (0x00030926) cell_toolbar_pane_ParamLimits

0x5e38,	// (0x00030926) cell_toolbar_pane

0x9ba6,	// (0x00034694) cell_toolbar_pane_g1_ParamLimits

0x9ba6,	// (0x00034694) cell_toolbar_pane_g1

0x9bba,	// (0x000346a8) cell_toolbar_pane_g2_ParamLimits

0x9bba,	// (0x000346a8) cell_toolbar_pane_g2

0x0001,

0xf805,	// (0x0003a2f3) cell_toolbar_pane_g_ParamLimits

0xf805,	// (0x0003a2f3) cell_toolbar_pane_g

0x9bdc,	// (0x000346ca) grid_highlight_pane_cp2_ParamLimits

0x9bdc,	// (0x000346ca) grid_highlight_pane_cp2

0x9bf6,	// (0x000346e4) toolbar_button_pane

0x9c02,	// (0x000346f0) toolbar_button_pane_g1

0x9c0a,	// (0x000346f8) toolbar_button_pane_g2

0x9c12,	// (0x00034700) toolbar_button_pane_g3

0x9c1a,	// (0x00034708) toolbar_button_pane_g4

0x9c22,	// (0x00034710) toolbar_button_pane_g5

0x9c2a,	// (0x00034718) toolbar_button_pane_g6

0x9c32,	// (0x00034720) toolbar_button_pane_g7

0x9c3a,	// (0x00034728) toolbar_button_pane_g8

0x9c42,	// (0x00034730) toolbar_button_pane_g9

0x0009,

0xf80a,	// (0x0003a2f8) toolbar_button_pane_g

0x5eaa,	// (0x00030998) list_single_2graphic_pane_g1_cp3_ParamLimits

0x5eaa,	// (0x00030998) list_single_2graphic_pane_g1_cp3

0x5eb6,	// (0x000309a4) list_single_2graphic_pane_g2_cp3_ParamLimits

0x5eb6,	// (0x000309a4) list_single_2graphic_pane_g2_cp3

0x5ec7,	// (0x000309b5) list_single_2graphic_pane_g3_cp3

0x5ecf,	// (0x000309bd) list_single_2graphic_pane_g4_cp3_ParamLimits

0x5ecf,	// (0x000309bd) list_single_2graphic_pane_g4_cp3

0x5edb,	// (0x000309c9) list_single_2graphic_pane_t1_cp3_ParamLimits

0x5edb,	// (0x000309c9) list_single_2graphic_pane_t1_cp3

0x5f38,	// (0x00030a26) list_single_midp_graphic_pane_g2_ParamLimits

0x5f38,	// (0x00030a26) list_single_midp_graphic_pane_g2

0x9050,	// (0x00033b3e) aid_zoom_text_primary

0x5e28,	// (0x00030916) aid_zoom_text_secondary

0x8fa7,	// (0x00033a95) status_small_pane_g7_ParamLimits

0x8fa7,	// (0x00033a95) status_small_pane_g7

0x8fca,	// (0x00033ab8) status_small_pane_t1_ParamLimits

0x71db,	// (0x00031cc9) title_pane_g2

0x0003,

0xf592,	// (0x0003a080) title_pane_g

0x7cdf,	// (0x000327cd) aid_size_cell_colour_1_pane_ParamLimits

0x7cdf,	// (0x000327cd) aid_size_cell_colour_1_pane

0x7cf3,	// (0x000327e1) aid_size_cell_colour_2_pane_ParamLimits

0x7cf3,	// (0x000327e1) aid_size_cell_colour_2_pane

0x7d07,	// (0x000327f5) aid_size_cell_colour_3_pane_ParamLimits

0x7d07,	// (0x000327f5) aid_size_cell_colour_3_pane

0x7d1b,	// (0x00032809) aid_size_cell_colour_4_pane_ParamLimits

0x7d1b,	// (0x00032809) aid_size_cell_colour_4_pane

0x57fa,	// (0x000302e8) title_pane_stacon_g1_ParamLimits

0x57fa,	// (0x000302e8) title_pane_stacon_g1

0xa29d,	// (0x00034d8b) popup_note_wait_window_g3_ParamLimits

0xa29d,	// (0x00034d8b) popup_note_wait_window_g3

0xa314,	// (0x00034e02) popup_note_wait_window_t5_ParamLimits

0xa314,	// (0x00034e02) popup_note_wait_window_t5

0x71c4,	// (0x00031cb2) main_feb_china_hwr_fs_writing_pane

0x9146,	// (0x00033c34) popup_feb_china_hwr_fs_window_ParamLimits

0x9146,	// (0x00033c34) popup_feb_china_hwr_fs_window

0x5f5a,	// (0x00030a48) aid_size_cell_hwr_fs_ParamLimits

0x5f5a,	// (0x00030a48) aid_size_cell_hwr_fs

0x9cf4,	// (0x000347e2) bg_popup_sub_pane_cp3_ParamLimits

0x9cf4,	// (0x000347e2) bg_popup_sub_pane_cp3

0x5f6f,	// (0x00030a5d) grid_hwr_fs_pane_ParamLimits

0x5f6f,	// (0x00030a5d) grid_hwr_fs_pane

0x5f87,	// (0x00030a75) linegrid_hwr_fs_pane_ParamLimits

0x5f87,	// (0x00030a75) linegrid_hwr_fs_pane

0x5f97,	// (0x00030a85) cell_hwr_fs_pane_ParamLimits

0x5f97,	// (0x00030a85) cell_hwr_fs_pane

0x9d00,	// (0x000347ee) linegrid_hwr_fs_pane_g1_ParamLimits

0x9d00,	// (0x000347ee) linegrid_hwr_fs_pane_g1

0x9d0c,	// (0x000347fa) linegrid_hwr_fs_pane_g2_ParamLimits

0x9d0c,	// (0x000347fa) linegrid_hwr_fs_pane_g2

0x9d1e,	// (0x0003480c) linegrid_hwr_fs_pane_g3_ParamLimits

0x9d1e,	// (0x0003480c) linegrid_hwr_fs_pane_g3

0x5fbb,	// (0x00030aa9) linegrid_hwr_fs_pane_g4_ParamLimits

0x5fbb,	// (0x00030aa9) linegrid_hwr_fs_pane_g4

0x5fd9,	// (0x00030ac7) linegrid_hwr_fs_pane_g5_ParamLimits

0x5fd9,	// (0x00030ac7) linegrid_hwr_fs_pane_g5

0x0004,

0xf835,	// (0x0003a323) linegrid_hwr_fs_pane_g_ParamLimits

0xf835,	// (0x0003a323) linegrid_hwr_fs_pane_g

0x9d2a,	// (0x00034818) cell_hwr_fs_pane_g1_ParamLimits

0x9d2a,	// (0x00034818) cell_hwr_fs_pane_g1

0x9a77,	// (0x00034565) cell_hwr_fs_pane_g2_ParamLimits

0x9a77,	// (0x00034565) cell_hwr_fs_pane_g2

0x9d40,	// (0x0003482e) cell_hwr_fs_pane_g3_ParamLimits

0x9d40,	// (0x0003482e) cell_hwr_fs_pane_g3

0x9d4d,	// (0x0003483b) cell_hwr_fs_pane_g4_ParamLimits

0x9d4d,	// (0x0003483b) cell_hwr_fs_pane_g4

0x0003,

0xf840,	// (0x0003a32e) cell_hwr_fs_pane_g_ParamLimits

0xf840,	// (0x0003a32e) cell_hwr_fs_pane_g

0x5fef,	// (0x00030add) cell_hwr_fs_pane_t1

0x71c4,	// (0x00031cb2) grid_highlight_pane_cp6

0x71c4,	// (0x00031cb2) main_idle_act2_pane

0x823f,	// (0x00032d2d) aid_inside_area_popup_secondary

0xa94d,	// (0x0003543b) aid_inside_area_window_primary_ParamLimits

0xa94d,	// (0x0003543b) aid_inside_area_window_primary

0xb54f,	// (0x0003603d) ai2_news_ticker_pane

0xb557,	// (0x00036045) aid_size_cell_ai1_link_ParamLimits

0xb557,	// (0x00036045) aid_size_cell_ai1_link

0xb571,	// (0x0003605f) popup_ai2_data_window_ParamLimits

0xb571,	// (0x0003605f) popup_ai2_data_window

0xb58f,	// (0x0003607d) popup_ai2_link_window_ParamLimits

0xb58f,	// (0x0003607d) popup_ai2_link_window

0x9cf4,	// (0x000347e2) bg_popup_sub_pane_cp4_ParamLimits

0x9cf4,	// (0x000347e2) bg_popup_sub_pane_cp4

0xb5a5,	// (0x00036093) grid_ai2_link_pane_ParamLimits

0xb5a5,	// (0x00036093) grid_ai2_link_pane

0xb5bc,	// (0x000360aa) popup_ai2_link_window_g1_ParamLimits

0xb5bc,	// (0x000360aa) popup_ai2_link_window_g1

0xb5c8,	// (0x000360b6) popup_ai2_link_window_g2_ParamLimits

0xb5c8,	// (0x000360b6) popup_ai2_link_window_g2

0x0001,

0xfa0c,	// (0x0003a4fa) popup_ai2_link_window_g_ParamLimits

0xfa0c,	// (0x0003a4fa) popup_ai2_link_window_g

0xb5d9,	// (0x000360c7) ai2_mp_button_pane

0xb5e1,	// (0x000360cf) ai2_mp_volume_pane

0x9ebd,	// (0x000349ab) bg_popup_sub_pane_cp5_ParamLimits

0x9ebd,	// (0x000349ab) bg_popup_sub_pane_cp5

0xb5e9,	// (0x000360d7) heading_ai2_gene_pane_ParamLimits

0xb5e9,	// (0x000360d7) heading_ai2_gene_pane

0xb5f5,	// (0x000360e3) list_ai2_gene_pane_ParamLimits

0xb5f5,	// (0x000360e3) list_ai2_gene_pane

0xb63d,	// (0x0003612b) cell_ai2_link_pane_ParamLimits

0xb63d,	// (0x0003612b) cell_ai2_link_pane

0xb653,	// (0x00036141) cell_ai2_link_pane_g1

0x71c4,	// (0x00031cb2) grid_highlight_pane_cp7

0x63f5,	// (0x00030ee3) ai2_mp_volume_pane_g1

0xb726,	// (0x00036214) ai2_mp_volume_pane_g2

0xb69b,	// (0x00036189) list_ai2_gene_pane_t1

0xb72e,	// (0x0003621c) ai2_mp_volume_pane_g3

0x0002,

0xfa25,	// (0x0003a513) ai2_mp_volume_pane_g

0x63fd,	// (0x00030eeb) volume_small_pane_cp3

0xb736,	// (0x00036224) aid_size_cell_ai2_button

0xb73e,	// (0x0003622c) grid_ai2_button_pane

0xb747,	// (0x00036235) cell_ai2_button_pane_ParamLimits

0xb747,	// (0x00036235) cell_ai2_button_pane

0x71ba,	// (0x00031ca8) cell_ai2_button_pane_g1

0x71c4,	// (0x00031cb2) grid_highlight_pane_cp8

0xb6e6,	// (0x000361d4) ai2_gene_pane_t1_ParamLimits

0xb6e6,	// (0x000361d4) ai2_gene_pane_t1

0x903e,	// (0x00033b2c) aid_height_parent_landscape

0xaff9,	// (0x00035ae7) aid_height_set_list

0xb00a,	// (0x00035af8) aid_size_parent

0xb370,	// (0x00035e5e) aid_size_cell_graphic_pane_ParamLimits

0xb605,	// (0x000360f3) popup_ai2_data_window_g1_ParamLimits

0xb605,	// (0x000360f3) popup_ai2_data_window_g1

0xb611,	// (0x000360ff) ai2_news_ticker_pane_g1

0xb619,	// (0x00036107) ai2_news_ticker_pane_g2

0x0001,

0xfa11,	// (0x0003a4ff) ai2_news_ticker_pane_g

0xb621,	// (0x0003610f) ai2_news_ticker_pane_t1

0xb62f,	// (0x0003611d) ai2_news_ticker_pane_t2

0x0001,

0xfa16,	// (0x0003a504) ai2_news_ticker_pane_t

0xb65c,	// (0x0003614a) heading_ai2_gene_pane_g1

0xb664,	// (0x00036152) heading_ai2_gene_pane_t1_ParamLimits

0xb664,	// (0x00036152) heading_ai2_gene_pane_t1

0xb679,	// (0x00036167) list_highlight_pane_cp6

0xb681,	// (0x0003616f) ai2_gene_pane_ParamLimits

0xb681,	// (0x0003616f) ai2_gene_pane

0xb6a9,	// (0x00036197) list_ai2_gene_pane_t2

0x0001,

0xfa1b,	// (0x0003a509) list_ai2_gene_pane_t

0xb6b7,	// (0x000361a5) list_highlight_pane_cp8_ParamLimits

0xb6b7,	// (0x000361a5) list_highlight_pane_cp8

0xb6c8,	// (0x000361b6) ai2_gene_pane_g1_ParamLimits

0xb6c8,	// (0x000361b6) ai2_gene_pane_g1

0xb6da,	// (0x000361c8) ai2_gene_pane_g2_ParamLimits

0xb6da,	// (0x000361c8) ai2_gene_pane_g2

0x0001,

0xfa20,	// (0x0003a50e) ai2_gene_pane_g_ParamLimits

0xfa20,	// (0x0003a50e) ai2_gene_pane_g

0x806c,	// (0x00032b5a) scroll_pane_cp12

0x5de7,	// (0x000308d5) control_pane_t3_ParamLimits

0x5de7,	// (0x000308d5) control_pane_t3

0x8fbb,	// (0x00033aa9) status_small_pane_g8_ParamLimits

0x8fbb,	// (0x00033aa9) status_small_pane_g8

0x9244,	// (0x00033d32) popup_find_window_ParamLimits

0x947b,	// (0x00033f69) popup_note_image_window_ParamLimits

0x5e68,	// (0x00030956) list_double2_graphic_pane_vc_g1_ParamLimits

0x5e68,	// (0x00030956) list_double2_graphic_pane_vc_g1

0x5e74,	// (0x00030962) list_double2_graphic_pane_vc_g2_ParamLimits

0x5e74,	// (0x00030962) list_double2_graphic_pane_vc_g2

0x5e80,	// (0x0003096e) list_double2_graphic_pane_vc_g3_ParamLimits

0x5e80,	// (0x0003096e) list_double2_graphic_pane_vc_g3

0x0002,

0xf7fe,	// (0x0003a2ec) list_double2_graphic_pane_vc_g_ParamLimits

0xf7fe,	// (0x0003a2ec) list_double2_graphic_pane_vc_g

0x5e8c,	// (0x0003097a) list_double2_graphic_pane_vc_t1_ParamLimits

0x5e8c,	// (0x0003097a) list_double2_graphic_pane_vc_t1

0x5ef6,	// (0x000309e4) list_single_heading_pane_vc_g1_ParamLimits

0x5ef6,	// (0x000309e4) list_single_heading_pane_vc_g1

0x5f02,	// (0x000309f0) list_single_heading_pane_vc_g2_ParamLimits

0x5f02,	// (0x000309f0) list_single_heading_pane_vc_g2

0x0001,

0xf81f,	// (0x0003a30d) list_single_heading_pane_vc_g_ParamLimits

0xf81f,	// (0x0003a30d) list_single_heading_pane_vc_g

0x5f0e,	// (0x000309fc) list_single_heading_pane_vc_t1_ParamLimits

0x5f0e,	// (0x000309fc) list_single_heading_pane_vc_t1

0x5f24,	// (0x00030a12) list_single_heading_pane_vc_t2_ParamLimits

0x5f24,	// (0x00030a12) list_single_heading_pane_vc_t2

0x0001,

0xf824,	// (0x0003a312) list_single_heading_pane_vc_t_ParamLimits

0xf824,	// (0x0003a312) list_single_heading_pane_vc_t

0x9c4a,	// (0x00034738) list_setting_number_pane_vc_g1_ParamLimits

0x9c4a,	// (0x00034738) list_setting_number_pane_vc_g1

0x9c56,	// (0x00034744) list_setting_number_pane_vc_g2_ParamLimits

0x9c56,	// (0x00034744) list_setting_number_pane_vc_g2

0x0001,

0xf829,	// (0x0003a317) list_setting_number_pane_vc_g_ParamLimits

0xf829,	// (0x0003a317) list_setting_number_pane_vc_g

0x9c62,	// (0x00034750) list_setting_number_pane_vc_t1_ParamLimits

0x9c62,	// (0x00034750) list_setting_number_pane_vc_t1

0x9c76,	// (0x00034764) list_setting_number_pane_vc_t2_ParamLimits

0x9c76,	// (0x00034764) list_setting_number_pane_vc_t2

0x9c92,	// (0x00034780) list_setting_number_pane_vc_t3_ParamLimits

0x9c92,	// (0x00034780) list_setting_number_pane_vc_t3

0x0002,

0xf82e,	// (0x0003a31c) list_setting_number_pane_vc_t_ParamLimits

0xf82e,	// (0x0003a31c) list_setting_number_pane_vc_t

0x9cba,	// (0x000347a8) set_value_pane_vc_ParamLimits

0x9cba,	// (0x000347a8) set_value_pane_vc

0x62f8,	// (0x00030de6) list_double2_graphic_pane_vc_ParamLimits

0x62f8,	// (0x00030de6) list_double2_graphic_pane_vc

0xb1ee,	// (0x00035cdc) list_double2_large_graphic_pane_vc_ParamLimits

0xb1ee,	// (0x00035cdc) list_double2_large_graphic_pane_vc

0x62f8,	// (0x00030de6) list_double2_pane_vc_ParamLimits

0x62f8,	// (0x00030de6) list_double2_pane_vc

0x62f8,	// (0x00030de6) list_double_graphic_heading_pane_vc_ParamLimits

0x62f8,	// (0x00030de6) list_double_graphic_heading_pane_vc

0x62f8,	// (0x00030de6) list_double_graphic_pane_vc_ParamLimits

0x62f8,	// (0x00030de6) list_double_graphic_pane_vc

0x62f8,	// (0x00030de6) list_double_heading_pane_vc_ParamLimits

0x62f8,	// (0x00030de6) list_double_heading_pane_vc

0xb1ee,	// (0x00035cdc) list_double_large_graphic_pane_vc_ParamLimits

0xb1ee,	// (0x00035cdc) list_double_large_graphic_pane_vc

0x62f8,	// (0x00030de6) list_double_number_pane_vc_ParamLimits

0x62f8,	// (0x00030de6) list_double_number_pane_vc

0x62f8,	// (0x00030de6) list_double_pane_vc_ParamLimits

0x62f8,	// (0x00030de6) list_double_pane_vc

0x62f8,	// (0x00030de6) list_double_time_pane_vc_ParamLimits

0x62f8,	// (0x00030de6) list_double_time_pane_vc

0x62f8,	// (0x00030de6) list_setting_number_pane_vc_ParamLimits

0x62f8,	// (0x00030de6) list_setting_number_pane_vc

0x62f8,	// (0x00030de6) list_setting_pane_vc_ParamLimits

0x62f8,	// (0x00030de6) list_setting_pane_vc

0x62f8,	// (0x00030de6) list_single_graphic_heading_pane_vc_ParamLimits

0x62f8,	// (0x00030de6) list_single_graphic_heading_pane_vc

0x62f8,	// (0x00030de6) list_single_heading_pane_vc_ParamLimits

0x62f8,	// (0x00030de6) list_single_heading_pane_vc

0xb216,	// (0x00035d04) list_single_number_heading_pane_vc_ParamLimits

0xb216,	// (0x00035d04) list_single_number_heading_pane_vc

0x5e68,	// (0x00030956) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x5e68,	// (0x00030956) list_double_graphic_heading_pane_vc_g1

0x5ef6,	// (0x000309e4) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x5ef6,	// (0x000309e4) list_double_graphic_heading_pane_vc_g2

0x5f02,	// (0x000309f0) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x5f02,	// (0x000309f0) list_double_graphic_heading_pane_vc_g3

0x0002,

0xfa2c,	// (0x0003a51a) list_double_graphic_heading_pane_vc_g_ParamLimits

0xfa2c,	// (0x0003a51a) list_double_graphic_heading_pane_vc_g

0x6406,	// (0x00030ef4) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x6406,	// (0x00030ef4) list_double_graphic_heading_pane_vc_t1

0x5f0e,	// (0x000309fc) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x5f0e,	// (0x000309fc) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa33,	// (0x0003a521) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa33,	// (0x0003a521) list_double_graphic_heading_pane_vc_t

0x9c4a,	// (0x00034738) list_setting_pane_vc_g1_ParamLimits

0x9c4a,	// (0x00034738) list_setting_pane_vc_g1

0x9c56,	// (0x00034744) list_setting_pane_vc_g2_ParamLimits

0x9c56,	// (0x00034744) list_setting_pane_vc_g2

0x0001,

0xf829,	// (0x0003a317) list_setting_pane_vc_g_ParamLimits

0xf829,	// (0x0003a317) list_setting_pane_vc_g

0xb983,	// (0x00036471) list_setting_pane_vc_t1_ParamLimits

0xb983,	// (0x00036471) list_setting_pane_vc_t1

0xb997,	// (0x00036485) list_setting_pane_vc_t2_ParamLimits

0xb997,	// (0x00036485) list_setting_pane_vc_t2

0x0001,

0xfa61,	// (0x0003a54f) list_setting_pane_vc_t_ParamLimits

0xfa61,	// (0x0003a54f) list_setting_pane_vc_t

0x9cba,	// (0x000347a8) set_value_pane_cp_vc_ParamLimits

0x9cba,	// (0x000347a8) set_value_pane_cp_vc

0x5ef6,	// (0x000309e4) list_single_number_heading_pane_vc_g1_ParamLimits

0x5ef6,	// (0x000309e4) list_single_number_heading_pane_vc_g1

0x5f02,	// (0x000309f0) list_single_number_heading_pane_vc_g2_ParamLimits

0x5f02,	// (0x000309f0) list_single_number_heading_pane_vc_g2

0x0001,

0xf81f,	// (0x0003a30d) list_single_number_heading_pane_vc_g_ParamLimits

0xf81f,	// (0x0003a30d) list_single_number_heading_pane_vc_g

0x5f0e,	// (0x000309fc) list_single_number_heading_pane_vc_t1_ParamLimits

0x5f0e,	// (0x000309fc) list_single_number_heading_pane_vc_t1

0x641a,	// (0x00030f08) list_single_number_heading_pane_vc_t2_ParamLimits

0x641a,	// (0x00030f08) list_single_number_heading_pane_vc_t2

0x642e,	// (0x00030f1c) list_single_number_heading_pane_vc_t3_ParamLimits

0x642e,	// (0x00030f1c) list_single_number_heading_pane_vc_t3

0x0002,

0xfa66,	// (0x0003a554) list_single_number_heading_pane_vc_t_ParamLimits

0xfa66,	// (0x0003a554) list_single_number_heading_pane_vc_t

0x5e68,	// (0x00030956) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x5e68,	// (0x00030956) list_single_graphic_heading_pane_vc_g1

0x5ef6,	// (0x000309e4) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x5ef6,	// (0x000309e4) list_single_graphic_heading_pane_vc_g4

0x5f02,	// (0x000309f0) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x5f02,	// (0x000309f0) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa2c,	// (0x0003a51a) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa2c,	// (0x0003a51a) list_single_graphic_heading_pane_vc_g

0x5f0e,	// (0x000309fc) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x5f0e,	// (0x000309fc) list_single_graphic_heading_pane_vc_t1

0x6440,	// (0x00030f2e) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x6440,	// (0x00030f2e) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa6d,	// (0x0003a55b) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa6d,	// (0x0003a55b) list_single_graphic_heading_pane_vc_t

0x5ef6,	// (0x000309e4) list_double2_pane_vc_g1_ParamLimits

0x5ef6,	// (0x000309e4) list_double2_pane_vc_g1

0x5f02,	// (0x000309f0) list_double2_pane_vc_g2_ParamLimits

0x5f02,	// (0x000309f0) list_double2_pane_vc_g2

0x0001,

0xf81f,	// (0x0003a30d) list_double2_pane_vc_g_ParamLimits

0xf81f,	// (0x0003a30d) list_double2_pane_vc_g

0x6454,	// (0x00030f42) list_double2_pane_vc_t1_ParamLimits

0x6454,	// (0x00030f42) list_double2_pane_vc_t1

0x646a,	// (0x00030f58) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x646a,	// (0x00030f58) list_double2_large_graphic_pane_vc_g1

0x6476,	// (0x00030f64) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x6476,	// (0x00030f64) list_double2_large_graphic_pane_vc_g2

0x7702,	// (0x000321f0) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x7702,	// (0x000321f0) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa72,	// (0x0003a560) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa72,	// (0x0003a560) list_double2_large_graphic_pane_vc_g

0x770e,	// (0x000321fc) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x770e,	// (0x000321fc) list_double2_large_graphic_pane_vc_t1

0x7724,	// (0x00032212) list_double_time_pane_vc_g1_ParamLimits

0x7724,	// (0x00032212) list_double_time_pane_vc_g1

0x7730,	// (0x0003221e) list_double_time_pane_vc_g2_ParamLimits

0x7730,	// (0x0003221e) list_double_time_pane_vc_g2

0x0001,

0xfa79,	// (0x0003a567) list_double_time_pane_vc_g_ParamLimits

0xfa79,	// (0x0003a567) list_double_time_pane_vc_g

0x773c,	// (0x0003222a) list_double_time_pane_vc_t1_ParamLimits

0x773c,	// (0x0003222a) list_double_time_pane_vc_t1

0x7755,	// (0x00032243) list_double_time_pane_vc_t2_ParamLimits

0x7755,	// (0x00032243) list_double_time_pane_vc_t2

0x7795,	// (0x00032283) list_double_time_pane_vc_t3_ParamLimits

0x7795,	// (0x00032283) list_double_time_pane_vc_t3

0x77ad,	// (0x0003229b) list_double_time_pane_vc_t4_ParamLimits

0x77ad,	// (0x0003229b) list_double_time_pane_vc_t4

0x0003,

0xfa7e,	// (0x0003a56c) list_double_time_pane_vc_t_ParamLimits

0xfa7e,	// (0x0003a56c) list_double_time_pane_vc_t

0x5ef6,	// (0x000309e4) list_double_pane_vc_g1_ParamLimits

0x5ef6,	// (0x000309e4) list_double_pane_vc_g1

0x5f02,	// (0x000309f0) list_double_pane_vc_g2_ParamLimits

0x5f02,	// (0x000309f0) list_double_pane_vc_g2

0x0001,

0xf81f,	// (0x0003a30d) list_double_pane_vc_g_ParamLimits

0xf81f,	// (0x0003a30d) list_double_pane_vc_g

0x77c1,	// (0x000322af) list_double_pane_vc_t1_ParamLimits

0x77c1,	// (0x000322af) list_double_pane_vc_t1

0x77d3,	// (0x000322c1) list_double_pane_vc_t2_ParamLimits

0x77d3,	// (0x000322c1) list_double_pane_vc_t2

0x0001,

0xfa87,	// (0x0003a575) list_double_pane_vc_t_ParamLimits

0xfa87,	// (0x0003a575) list_double_pane_vc_t

0x5ef6,	// (0x000309e4) list_double_number_pane_vc_g1_ParamLimits

0x5ef6,	// (0x000309e4) list_double_number_pane_vc_g1

0x5f02,	// (0x000309f0) list_double_number_pane_vc_g2_ParamLimits

0x5f02,	// (0x000309f0) list_double_number_pane_vc_g2

0x0001,

0xf81f,	// (0x0003a30d) list_double_number_pane_vc_g_ParamLimits

0xf81f,	// (0x0003a30d) list_double_number_pane_vc_g

0x77eb,	// (0x000322d9) list_double_number_pane_vc_t1_ParamLimits

0x77eb,	// (0x000322d9) list_double_number_pane_vc_t1

0x77ff,	// (0x000322ed) list_double_number_pane_vc_t2_ParamLimits

0x77ff,	// (0x000322ed) list_double_number_pane_vc_t2

0x77d3,	// (0x000322c1) list_double_number_pane_vc_t3_ParamLimits

0x77d3,	// (0x000322c1) list_double_number_pane_vc_t3

0x0002,

0xfa8c,	// (0x0003a57a) list_double_number_pane_vc_t_ParamLimits

0xfa8c,	// (0x0003a57a) list_double_number_pane_vc_t

0x7811,	// (0x000322ff) list_double_large_graphic_pane_vc_g1_ParamLimits

0x7811,	// (0x000322ff) list_double_large_graphic_pane_vc_g1

0x781d,	// (0x0003230b) list_double_large_graphic_pane_vc_g2_ParamLimits

0x781d,	// (0x0003230b) list_double_large_graphic_pane_vc_g2

0x7702,	// (0x000321f0) list_double_large_graphic_pane_vc_g3_ParamLimits

0x7702,	// (0x000321f0) list_double_large_graphic_pane_vc_g3

0x782c,	// (0x0003231a) list_double_large_graphic_pane_vc_g4_ParamLimits

0x782c,	// (0x0003231a) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa93,	// (0x0003a581) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa93,	// (0x0003a581) list_double_large_graphic_pane_vc_g

0x7838,	// (0x00032326) list_double_large_graphic_pane_vc_t1_ParamLimits

0x7838,	// (0x00032326) list_double_large_graphic_pane_vc_t1

0x784a,	// (0x00032338) list_double_large_graphic_pane_vc_t2_ParamLimits

0x784a,	// (0x00032338) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa9c,	// (0x0003a58a) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa9c,	// (0x0003a58a) list_double_large_graphic_pane_vc_t

0x5ef6,	// (0x000309e4) list_double_heading_pane_vc_g1_ParamLimits

0x5ef6,	// (0x000309e4) list_double_heading_pane_vc_g1

0x5f02,	// (0x000309f0) list_double_heading_pane_vc_g2_ParamLimits

0x5f02,	// (0x000309f0) list_double_heading_pane_vc_g2

0x0001,

0xf81f,	// (0x0003a30d) list_double_heading_pane_vc_g_ParamLimits

0xf81f,	// (0x0003a30d) list_double_heading_pane_vc_g

0x7863,	// (0x00032351) list_double_heading_pane_vc_t1_ParamLimits

0x7863,	// (0x00032351) list_double_heading_pane_vc_t1

0x5f0e,	// (0x000309fc) list_double_heading_pane_vc_t2_ParamLimits

0x5f0e,	// (0x000309fc) list_double_heading_pane_vc_t2

0x0001,

0xfaa1,	// (0x0003a58f) list_double_heading_pane_vc_t_ParamLimits

0xfaa1,	// (0x0003a58f) list_double_heading_pane_vc_t

0x7877,	// (0x00032365) list_double_graphic_pane_vc_g1_ParamLimits

0x7877,	// (0x00032365) list_double_graphic_pane_vc_g1

0x7887,	// (0x00032375) list_double_graphic_pane_vc_g2_ParamLimits

0x7887,	// (0x00032375) list_double_graphic_pane_vc_g2

0x7896,	// (0x00032384) list_double_graphic_pane_vc_g3_ParamLimits

0x7896,	// (0x00032384) list_double_graphic_pane_vc_g3

0x0002,

0xfaa6,	// (0x0003a594) list_double_graphic_pane_vc_g_ParamLimits

0xfaa6,	// (0x0003a594) list_double_graphic_pane_vc_g

0x78a2,	// (0x00032390) list_double_graphic_pane_vc_t1_ParamLimits

0x78a2,	// (0x00032390) list_double_graphic_pane_vc_t1

0x77d3,	// (0x000322c1) list_double_graphic_pane_vc_t2_ParamLimits

0x77d3,	// (0x000322c1) list_double_graphic_pane_vc_t2

0x0001,

0xfaad,	// (0x0003a59b) list_double_graphic_pane_vc_t_ParamLimits

0xfaad,	// (0x0003a59b) list_double_graphic_pane_vc_t

0x4c1e,	// (0x0002f70c) aid_size_cell_fastswap

0x4c26,	// (0x0002f714) aid_size_cell_touch_ParamLimits

0x4c26,	// (0x0002f714) aid_size_cell_touch

0x4e91,	// (0x0002f97f) popup_fast_swap_wide_window_ParamLimits

0x4e91,	// (0x0002f97f) popup_fast_swap_wide_window

0x4fa7,	// (0x0002fa95) touch_pane_ParamLimits

0x4fa7,	// (0x0002fa95) touch_pane

0x80c2,	// (0x00032bb0) button_value_adjust_pane_cp2

0x80c2,	// (0x00032bb0) button_value_adjust_pane_cp4

0x5586,	// (0x00030074) form_field_data_pane_cp2

0x55ab,	// (0x00030099) form_field_data_wide_pane_cp2

0x855b,	// (0x00033049) bg_scroll_pane_ParamLimits

0x595f,	// (0x0003044d) scroll_handle_pane_ParamLimits

0x5973,	// (0x00030461) scroll_sc2_down_pane_ParamLimits

0x5973,	// (0x00030461) scroll_sc2_down_pane

0x858c,	// (0x0003307a) scroll_sc2_up_pane_ParamLimits

0x858c,	// (0x0003307a) scroll_sc2_up_pane

0xbde2,	// (0x000368d0) grid_wheel_folder_pane_g1_ParamLimits

0xbde2,	// (0x000368d0) grid_wheel_folder_pane_g1

0x5bc9,	// (0x000306b7) clock_nsta_pane_cp2_ParamLimits

0x5bc9,	// (0x000306b7) clock_nsta_pane_cp2

0x8d3c,	// (0x0003382a) listscroll_midp_pane_ParamLimits

0x8d48,	// (0x00033836) midp_canvas_pane

0x9036,	// (0x00033b24) nsta_clock_indic_pane

0x908c,	// (0x00033b7a) listscroll_form_pane_vc

0x90a8,	// (0x00033b96) listscroll_set_pane_vc_ParamLimits

0x90a8,	// (0x00033b96) listscroll_set_pane_vc

0x97cc,	// (0x000342ba) clock_nsta_pane

0x9849,	// (0x00034337) indicator_nsta_pane

0x9b40,	// (0x0003462e) bg_popup_sub_pane_cp2_ParamLimits

0x9b54,	// (0x00034642) find_pane_cp2_ParamLimits

0x9b54,	// (0x00034642) find_pane_cp2

0x9b6a,	// (0x00034658) grid_toobar_pane_ParamLimits

0x9cc8,	// (0x000347b6) list_form_gen_pane_vc_ParamLimits

0x9cc8,	// (0x000347b6) list_form_gen_pane_vc

0x9cde,	// (0x000347cc) scroll_pane_cp8_vc_ParamLimits

0x9cde,	// (0x000347cc) scroll_pane_cp8_vc

0x9d5a,	// (0x00034848) data_form_wide_pane_vc_ParamLimits

0x9d5a,	// (0x00034848) data_form_wide_pane_vc

0x9d66,	// (0x00034854) form_field_data_wide_pane_vc_g1

0x9d6e,	// (0x0003485c) form_field_data_wide_pane_vc_t1_ParamLimits

0x9d6e,	// (0x0003485c) form_field_data_wide_pane_vc_t1

0x80d6,	// (0x00032bc4) input_focus_pane_cp6_vc_ParamLimits

0x80d6,	// (0x00032bc4) input_focus_pane_cp6_vc

0xa048,	// (0x00034b36) list_midp_pane_ParamLimits

0xa054,	// (0x00034b42) scroll_pane_cp16_ParamLimits

0xa054,	// (0x00034b42) scroll_pane_cp16

0xa094,	// (0x00034b82) button_value_adjust_pane_ParamLimits

0xa094,	// (0x00034b82) button_value_adjust_pane

0xb01c,	// (0x00035b0a) button_value_adjust_pane_cp6_ParamLimits

0xb01c,	// (0x00035b0a) button_value_adjust_pane_cp6

0xb176,	// (0x00035c64) settings_code_pane_cp_ParamLimits

0xb176,	// (0x00035c64) settings_code_pane_cp

0x71ba,	// (0x00031ca8) cell_touch_pane_g1

0x71ba,	// (0x00031ca8) cell_touch_pane_g2

0x0001,

0xf747,	// (0x0003a235) cell_touch_pane_g

0xb759,	// (0x00036247) cell_touch_pane_cp_ParamLimits

0xb759,	// (0x00036247) cell_touch_pane_cp

0xb769,	// (0x00036257) cell_touch_pane_ParamLimits

0xb769,	// (0x00036257) cell_touch_pane

0x71ba,	// (0x00031ca8) scroll_sc2_down_pane_g1

0x71ba,	// (0x00031ca8) scroll_sc2_up_pane_g1

0x71c4,	// (0x00031cb2) bg_set_opt_pane_cp4_vc

0xb77a,	// (0x00036268) list_set_graphic_pane_vc_g1_ParamLimits

0xb77a,	// (0x00036268) list_set_graphic_pane_vc_g1

0xb786,	// (0x00036274) list_set_graphic_pane_vc_g2_ParamLimits

0xb786,	// (0x00036274) list_set_graphic_pane_vc_g2

0x0001,

0xfa38,	// (0x0003a526) list_set_graphic_pane_vc_g_ParamLimits

0xfa38,	// (0x0003a526) list_set_graphic_pane_vc_g

0xb792,	// (0x00036280) text_primary_small_cp13_vc_ParamLimits

0xb792,	// (0x00036280) text_primary_small_cp13_vc

0xb7aa,	// (0x00036298) list_set_graphic_pane_vc_ParamLimits

0xb7aa,	// (0x00036298) list_set_graphic_pane_vc

0x71c4,	// (0x00031cb2) input_focus_pane_cp2_vc

0x71ba,	// (0x00031ca8) setting_code_pane_vc_g1

0xb7be,	// (0x000362ac) setting_code_pane_vc_t1

0xb7cc,	// (0x000362ba) set_text_pane_vc_t1_ParamLimits

0xb7cc,	// (0x000362ba) set_text_pane_vc_t1

0x71c4,	// (0x00031cb2) input_focus_pane_cp1_vc

0xb7ea,	// (0x000362d8) list_set_text_pane_vc

0x71ba,	// (0x00031ca8) setting_text_pane_vc_g1

0x71c4,	// (0x00031cb2) bg_set_opt_pane_cp2_vc

0xb7f4,	// (0x000362e2) setting_slider_graphic_pane_vc_g1

0xb7fc,	// (0x000362ea) setting_slider_graphic_pane_vc_t1

0xb80a,	// (0x000362f8) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa3d,	// (0x0003a52b) setting_slider_graphic_pane_vc_t

0xb818,	// (0x00036306) slider_set_pane_cp_vc

0xb820,	// (0x0003630e) slider_set_pane_vc_g1

0xb829,	// (0x00036317) slider_set_pane_vc_g2

0x0006,

0xfa42,	// (0x0003a530) slider_set_pane_vc_g

0x813d,	// (0x00032c2b) set_opt_bg_pane_g1_copy1

0x8145,	// (0x00032c33) set_opt_bg_pane_g2_copy1

0xb855,	// (0x00036343) set_opt_bg_pane_g3_copy1

0x8155,	// (0x00032c43) set_opt_bg_pane_g4_copy1

0x815d,	// (0x00032c4b) set_opt_bg_pane_g5_copy1

0x8165,	// (0x00032c53) set_opt_bg_pane_g6_copy1

0xb85f,	// (0x0003634d) set_opt_bg_pane_g7_copy1

0xb869,	// (0x00036357) set_opt_bg_pane_g8_copy1

0xb873,	// (0x00036361) set_opt_bg_pane_g9_copy1

0x71c4,	// (0x00031cb2) bg_set_opt_pane_cp_vc

0xb87d,	// (0x0003636b) setting_slider_pane_vc_t1

0xb7fc,	// (0x000362ea) setting_slider_pane_vc_t2

0xb80a,	// (0x000362f8) setting_slider_pane_vc_t3

0x0002,

0xfa51,	// (0x0003a53f) setting_slider_pane_vc_t

0xb818,	// (0x00036306) slider_set_pane_vc

0x602f,	// (0x00030b1d) volume_set_pane_vc_g1

0x6038,	// (0x00030b26) volume_set_pane_vc_g2

0x6041,	// (0x00030b2f) volume_set_pane_vc_g3

0x604a,	// (0x00030b38) volume_set_pane_vc_g4

0x6053,	// (0x00030b41) volume_set_pane_vc_g5

0x605c,	// (0x00030b4a) volume_set_pane_vc_g6

0x6065,	// (0x00030b53) volume_set_pane_vc_g7

0x606e,	// (0x00030b5c) volume_set_pane_vc_g8

0x6077,	// (0x00030b65) volume_set_pane_vc_g9

0x6080,	// (0x00030b6e) volume_set_pane_vc_g10

0x0009,

0xf8ef,	// (0x0003a3dd) volume_set_pane_vc_g

0xb88c,	// (0x0003637a) volume_set_pane_vc

0xb894,	// (0x00036382) button_value_adjust_pane_cp1_vc

0xb89e,	// (0x0003638c) list_highlight_pane_cp2_vc

0xb8a7,	// (0x00036395) list_set_pane_vc_ParamLimits

0xb8a7,	// (0x00036395) list_set_pane_vc

0xb911,	// (0x000363ff) main_pane_set_vc_t1_ParamLimits

0xb911,	// (0x000363ff) main_pane_set_vc_t1

0xb926,	// (0x00036414) main_pane_set_vc_t2_ParamLimits

0xb926,	// (0x00036414) main_pane_set_vc_t2

0xb938,	// (0x00036426) main_pane_set_vc_t3_ParamLimits

0xb938,	// (0x00036426) main_pane_set_vc_t3

0xb94c,	// (0x0003643a) main_pane_set_vc_t4_ParamLimits

0xb94c,	// (0x0003643a) main_pane_set_vc_t4

0x0003,

0xfa58,	// (0x0003a546) main_pane_set_vc_t_ParamLimits

0xfa58,	// (0x0003a546) main_pane_set_vc_t

0xb960,	// (0x0003644e) setting_code_pane_vc_ParamLimits

0xb960,	// (0x0003644e) setting_code_pane_vc

0xb971,	// (0x0003645f) setting_slider_graphic_pane_vc

0xb971,	// (0x0003645f) setting_slider_pane_vc

0xb971,	// (0x0003645f) setting_text_pane_vc

0xb971,	// (0x0003645f) setting_volume_pane_vc

0xb97b,	// (0x00036469) scroll_pane_cp121_vc

0x80b0,	// (0x00032b9e) set_content_pane_vc

0xb9b9,	// (0x000364a7) button_value_adjust_pane_g1

0xb9c2,	// (0x000364b0) button_value_adjust_pane_g2

0x0001,

0xfab2,	// (0x0003a5a0) button_value_adjust_pane_g

0xb9cb,	// (0x000364b9) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb9cb,	// (0x000364b9) form_field_slider_wide_pane_vc_t1

0xb9df,	// (0x000364cd) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb9df,	// (0x000364cd) form_field_slider_wide_pane_vc_t2

0x0001,

0xfab7,	// (0x0003a5a5) form_field_slider_wide_pane_vc_t_ParamLimits

0xfab7,	// (0x0003a5a5) form_field_slider_wide_pane_vc_t

0x7520,	// (0x0003200e) input_focus_pane_cp10_vc_ParamLimits

0x7520,	// (0x0003200e) input_focus_pane_cp10_vc

0xb9f1,	// (0x000364df) slider_cont_pane_cp1_vc_ParamLimits

0xb9f1,	// (0x000364df) slider_cont_pane_cp1_vc

0xb820,	// (0x0003630e) slider_form_pane_g1_cp2

0xb829,	// (0x00036317) slider_form_pane_g2_cp2

0xba0a,	// (0x000364f8) form_field_slider_pane_vc_t3

0xba18,	// (0x00036506) form_field_slider_pane_vc_t4

0xba26,	// (0x00036514) slider_form_pane_vc_ParamLimits

0xba26,	// (0x00036514) slider_form_pane_vc

0xba33,	// (0x00036521) form_field_slider_pane_vc_t1_ParamLimits

0xba33,	// (0x00036521) form_field_slider_pane_vc_t1

0xb9df,	// (0x000364cd) form_field_slider_pane_vc_t2_ParamLimits

0xb9df,	// (0x000364cd) form_field_slider_pane_vc_t2

0x0001,

0xfac7,	// (0x0003a5b5) form_field_slider_pane_vc_t_ParamLimits

0xfac7,	// (0x0003a5b5) form_field_slider_pane_vc_t

0x7520,	// (0x0003200e) input_focus_pane_cp9_vc_ParamLimits

0x7520,	// (0x0003200e) input_focus_pane_cp9_vc

0xba4f,	// (0x0003653d) slider_cont_pane_vc_ParamLimits

0xba4f,	// (0x0003653d) slider_cont_pane_vc

0xba61,	// (0x0003654f) list_form_graphic_pane_cp_vc_ParamLimits

0xba61,	// (0x0003654f) list_form_graphic_pane_cp_vc

0x9d66,	// (0x00034854) form_field_popup_wide_pane_vc_g1

0xba76,	// (0x00036564) form_field_popup_wide_pane_vc_t1_ParamLimits

0xba76,	// (0x00036564) form_field_popup_wide_pane_vc_t1

0x80d6,	// (0x00032bc4) input_focus_pane_cp8_vc_ParamLimits

0x80d6,	// (0x00032bc4) input_focus_pane_cp8_vc

0xba8d,	// (0x0003657b) list_form_wide_pane_vc_ParamLimits

0xba8d,	// (0x0003657b) list_form_wide_pane_vc

0xba99,	// (0x00036587) list_form_graphic_pane_vc_g1

0xbaa1,	// (0x0003658f) list_form_graphic_pane_vc_t1_ParamLimits

0xbaa1,	// (0x0003658f) list_form_graphic_pane_vc_t1

0x72a4,	// (0x00031d92) list_highlight_pane_cp5_vc_ParamLimits

0x72a4,	// (0x00031d92) list_highlight_pane_cp5_vc

0xbabd,	// (0x000365ab) list_form_graphic_pane_vc_ParamLimits

0xbabd,	// (0x000365ab) list_form_graphic_pane_vc

0x9d66,	// (0x00034854) form_field_popup_pane_vc_g1

0xbad3,	// (0x000365c1) form_field_popup_pane_vc_t1_ParamLimits

0xbad3,	// (0x000365c1) form_field_popup_pane_vc_t1

0x80d6,	// (0x00032bc4) input_focus_pane_cp7_vc_ParamLimits

0x80d6,	// (0x00032bc4) input_focus_pane_cp7_vc

0xbaea,	// (0x000365d8) list_form_pane_vc_ParamLimits

0xbaea,	// (0x000365d8) list_form_pane_vc

0xbaf6,	// (0x000365e4) data_form_pane_vc_t1_ParamLimits

0xbaf6,	// (0x000365e4) data_form_pane_vc_t1

0x813d,	// (0x00032c2b) input_focus_pane_vc_g1

0x8145,	// (0x00032c33) input_focus_pane_vc_g2

0x814d,	// (0x00032c3b) input_focus_pane_vc_g3

0x8155,	// (0x00032c43) input_focus_pane_vc_g4

0x815d,	// (0x00032c4b) input_focus_pane_vc_g5

0x8165,	// (0x00032c53) input_focus_pane_vc_g6

0x816d,	// (0x00032c5b) input_focus_pane_vc_g7

0x8175,	// (0x00032c63) input_focus_pane_vc_g8

0x817d,	// (0x00032c6b) input_focus_pane_vc_g9

0x71ba,	// (0x00031ca8) input_focus_pane_vc_g10

0x0009,

0xf6d0,	// (0x0003a1be) input_focus_pane_vc_g

0x9d5a,	// (0x00034848) data_form_pane_vc_ParamLimits

0x9d5a,	// (0x00034848) data_form_pane_vc

0x9d66,	// (0x00034854) form_field_data_pane_vc_g1

0xbb13,	// (0x00036601) form_field_data_pane_vc_t1_ParamLimits

0xbb13,	// (0x00036601) form_field_data_pane_vc_t1

0x80d6,	// (0x00032bc4) input_focus_pane_vc_ParamLimits

0x80d6,	// (0x00032bc4) input_focus_pane_vc

0xbb2d,	// (0x0003661b) button_value_adjust_pane_cp3_vc

0xbb35,	// (0x00036623) button_value_adjust_pane_cp5_vc

0xbb3d,	// (0x0003662b) form_field_data_pane_vc_ParamLimits

0xbb3d,	// (0x0003662b) form_field_data_pane_vc

0xbb58,	// (0x00036646) form_field_data_pane_vc_cp2

0xbb60,	// (0x0003664e) form_field_data_wide_pane_vc_ParamLimits

0xbb60,	// (0x0003664e) form_field_data_wide_pane_vc

0xbb7a,	// (0x00036668) form_field_data_wide_pane_vc_cp2

0xbb82,	// (0x00036670) form_field_popup_pane_vc_ParamLimits

0xbb82,	// (0x00036670) form_field_popup_pane_vc

0xbb9d,	// (0x0003668b) form_field_popup_wide_pane_vc_ParamLimits

0xbb9d,	// (0x0003668b) form_field_popup_wide_pane_vc

0xbbb7,	// (0x000366a5) form_field_slider_pane_vc_ParamLimits

0xbbb7,	// (0x000366a5) form_field_slider_pane_vc

0xbbca,	// (0x000366b8) form_field_slider_wide_pane_vc_ParamLimits

0xbbca,	// (0x000366b8) form_field_slider_wide_pane_vc

0xbbdd,	// (0x000366cb) grid_touch_1_pane_ParamLimits

0xbbdd,	// (0x000366cb) grid_touch_1_pane

0xbbe9,	// (0x000366d7) grid_touch_2_pane_ParamLimits

0xbbe9,	// (0x000366d7) grid_touch_2_pane

0x9001,	// (0x00033aef) touch_pane_g1_ParamLimits

0x9001,	// (0x00033aef) touch_pane_g1

0xbc03,	// (0x000366f1) cell_app_pane_cp_wide_ParamLimits

0xbc03,	// (0x000366f1) cell_app_pane_cp_wide

0xbc14,	// (0x00036702) grid_popup_fast_wide_pane_ParamLimits

0xbc14,	// (0x00036702) grid_popup_fast_wide_pane

0xbc28,	// (0x00036716) scroll_pane_cp19_ParamLimits

0xbc28,	// (0x00036716) scroll_pane_cp19

0x71c4,	// (0x00031cb2) bg_popup_window_pane_cp20

0xbc3c,	// (0x0003672a) listscroll_popup_fast_wide_pane

0x72a4,	// (0x00031d92) grid_indicator_nsta_pane

0xbc44,	// (0x00036732) clock_nsta_pane_g1

0xbc4d,	// (0x0003673b) clock_nsta_pane_t1

0xbc69,	// (0x00036757) cell_indicator_nsta_pane_ParamLimits

0xbc69,	// (0x00036757) cell_indicator_nsta_pane

0xbca1,	// (0x0003678f) cell_indicator_nsta_pane_g1

0xbcaf,	// (0x0003679d) cell_indicator_nsta_pane_g2

0x0001,

0xfad1,	// (0x0003a5bf) cell_indicator_nsta_pane_g

0xbcc4,	// (0x000367b2) clock_nsta_pane_cp

0xbccc,	// (0x000367ba) indicator_nsta_pane_cp

0xbcd4,	// (0x000367c2) nsta_clock_indic_pane_g1

0x7370,	// (0x00031e5e) grid_indicator_pane

0x867e,	// (0x0003316c) scroll_pane_cp29

0x5b15,	// (0x00030603) indicator_nsta_pane_cp2_ParamLimits

0x5b15,	// (0x00030603) indicator_nsta_pane_cp2

0x72a4,	// (0x00031d92) main_apps_wheel_pane

0x9f25,	// (0x00034a13) form_midp_field_text_pane_ParamLimits

0xa074,	// (0x00034b62) scroll_bar_cp050_ParamLimits

0xbd0c,	// (0x000367fa) cell_indicator_pane_ParamLimits

0xbd0c,	// (0x000367fa) cell_indicator_pane

0xbd24,	// (0x00036812) cell_indicator_pane_g1

0xbd2e,	// (0x0003681c) grid_wheel_folder_pane_ParamLimits

0xbd2e,	// (0x0003681c) grid_wheel_folder_pane

0xbd42,	// (0x00036830) list_wheel_apps_pane_ParamLimits

0xbd42,	// (0x00036830) list_wheel_apps_pane

0xbd55,	// (0x00036843) main_apps_wheel_pane_g1_ParamLimits

0xbd55,	// (0x00036843) main_apps_wheel_pane_g1

0xbd71,	// (0x0003685f) main_apps_wheel_pane_g2_ParamLimits

0xbd71,	// (0x0003685f) main_apps_wheel_pane_g2

0x0001,

0xfae0,	// (0x0003a5ce) main_apps_wheel_pane_g_ParamLimits

0xfae0,	// (0x0003a5ce) main_apps_wheel_pane_g

0xbd8d,	// (0x0003687b) main_apps_wheel_pane_t1_ParamLimits

0xbd8d,	// (0x0003687b) main_apps_wheel_pane_t1

0xbdb6,	// (0x000368a4) list_wheel_apps_pane_g1

0xbdbe,	// (0x000368ac) list_wheel_apps_pane_g2

0xbdc6,	// (0x000368b4) list_wheel_apps_pane_g3

0xbdce,	// (0x000368bc) list_wheel_apps_pane_g4

0xbdd8,	// (0x000368c6) list_wheel_apps_pane_g5

0x0004,

0xfae5,	// (0x0003a5d3) list_wheel_apps_pane_g

0x8bb0,	// (0x0003369e) navi_icon_text_pane

0x96f9,	// (0x000341e7) aid_fill_nsta

0xbdf9,	// (0x000368e7) navi_icon_text_pane_g1

0xbe08,	// (0x000368f6) navi_icon_text_pane_t1

0x8a46,	// (0x00033534) list_set_graphic_pane_t1_ParamLimits

0x8a46,	// (0x00033534) list_set_graphic_pane_t1

0xa794,	// (0x00035282) popup_midp_note_alarm_window_t6_ParamLimits

0xa794,	// (0x00035282) popup_midp_note_alarm_window_t6

0xa7a6,	// (0x00035294) popup_midp_note_alarm_window_t7_ParamLimits

0xa7a6,	// (0x00035294) popup_midp_note_alarm_window_t7

0xa7b8,	// (0x000352a6) popup_midp_note_alarm_window_t8_ParamLimits

0xa7b8,	// (0x000352a6) popup_midp_note_alarm_window_t8

0xa7ca,	// (0x000352b8) popup_midp_note_alarm_window_t9_ParamLimits

0xa7ca,	// (0x000352b8) popup_midp_note_alarm_window_t9

0xa7dc,	// (0x000352ca) popup_midp_note_alarm_window_t10_ParamLimits

0xa7dc,	// (0x000352ca) popup_midp_note_alarm_window_t10

0xa7ee,	// (0x000352dc) popup_midp_note_alarm_window_t11_ParamLimits

0xa7ee,	// (0x000352dc) popup_midp_note_alarm_window_t11

0xa800,	// (0x000352ee) scroll_pane_cp17_ParamLimits

0xa800,	// (0x000352ee) scroll_pane_cp17

0x602f,	// (0x00030b1d) volume_small_pane_cp_g1

0x6482,	// (0x00030f70) volume_small_pane_cp_g2

0x648b,	// (0x00030f79) volume_small_pane_cp_g3

0x6494,	// (0x00030f82) volume_small_pane_cp_g4

0x649d,	// (0x00030f8b) volume_small_pane_cp_g5

0x64a6,	// (0x00030f94) volume_small_pane_cp_g6

0x64af,	// (0x00030f9d) volume_small_pane_cp_g7

0x64b8,	// (0x00030fa6) volume_small_pane_cp_g8

0x64c1,	// (0x00030faf) volume_small_pane_cp_g9

0x64ca,	// (0x00030fb8) volume_small_pane_cp_g10

0x8e11,	// (0x000338ff) midp_ticker_pane_g1_ParamLimits

0x8e1d,	// (0x0003390b) midp_ticker_pane_g2_ParamLimits

0xf798,	// (0x0003a286) midp_ticker_pane_g_ParamLimits

0x8e29,	// (0x00033917) midp_ticker_pane_t1_ParamLimits

0x970f,	// (0x000341fd) aid_fill_nsta_2

0xa060,	// (0x00034b4e) list_form2_midp_pane

0xb1bd,	// (0x00035cab) midp_editing_number_pane_ParamLimits

0xb1cc,	// (0x00035cba) midp_ticker_pane_ParamLimits

0xbe1d,	// (0x0003690b) form2_midp_field_pane

0xbe41,	// (0x0003692f) scroll_pane_cp51

0xbe61,	// (0x0003694f) form2_midp_button_pane_ParamLimits

0xbe61,	// (0x0003694f) form2_midp_button_pane

0xbe73,	// (0x00036961) form2_midp_content_pane_ParamLimits

0xbe73,	// (0x00036961) form2_midp_content_pane

0xbe8d,	// (0x0003697b) form2_midp_field_choice_group_pane

0xbe95,	// (0x00036983) form2_midp_field_pane_g1

0xbe9d,	// (0x0003698b) form2_midp_field_pane_g2

0xbea5,	// (0x00036993) form2_midp_field_pane_g3

0xbead,	// (0x0003699b) form2_midp_field_pane_g4

0x0003,

0xfb0a,	// (0x0003a5f8) form2_midp_field_pane_g

0xbeb5,	// (0x000369a3) form2_midp_gauge_slider_pane

0xbebd,	// (0x000369ab) form2_midp_gauge_wait_pane

0xbec5,	// (0x000369b3) form2_midp_image_pane_ParamLimits

0xbec5,	// (0x000369b3) form2_midp_image_pane

0xbee0,	// (0x000369ce) form2_midp_label_pane_ParamLimits

0xbee0,	// (0x000369ce) form2_midp_label_pane

0xbeff,	// (0x000369ed) form2_midp_label_pane_cp_ParamLimits

0xbeff,	// (0x000369ed) form2_midp_label_pane_cp

0xbf20,	// (0x00036a0e) form2_midp_string_pane_ParamLimits

0xbf20,	// (0x00036a0e) form2_midp_string_pane

0x78b4,	// (0x000323a2) form2_midp_text_pane_ParamLimits

0x78b4,	// (0x000323a2) form2_midp_text_pane

0xbf32,	// (0x00036a20) form2_midp_time_pane

0xbf42,	// (0x00036a30) input_focus_pane_cp51_ParamLimits

0xbf42,	// (0x00036a30) input_focus_pane_cp51

0xbf5a,	// (0x00036a48) form2_midp_label_pane_t1_ParamLimits

0xbf5a,	// (0x00036a48) form2_midp_label_pane_t1

0x78d5,	// (0x000323c3) form2_mdip_text_pane_t1_ParamLimits

0x78d5,	// (0x000323c3) form2_mdip_text_pane_t1

0x78f9,	// (0x000323e7) form2_midp_time_pane_t1

0xbfa8,	// (0x00036a96) form2_midp_gauge_slider_pane_t1

0xbfba,	// (0x00036aa8) form2_midp_gauge_slider_pane_t2

0xbfcc,	// (0x00036aba) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb13,	// (0x0003a601) form2_midp_gauge_slider_pane_t

0xbfde,	// (0x00036acc) form2_midp_slider_pane

0xbfea,	// (0x00036ad8) form2_midp_gauge_wait_pane_t1

0xbff8,	// (0x00036ae6) form2_midp_wait_pane_ParamLimits

0xbff8,	// (0x00036ae6) form2_midp_wait_pane

0x9d85,	// (0x00034873) list_single_2graphic_pane_cp4_ParamLimits

0x9d85,	// (0x00034873) list_single_2graphic_pane_cp4

0xc023,	// (0x00036b11) list_single_midp_graphic_pane_cp_ParamLimits

0xc023,	// (0x00036b11) list_single_midp_graphic_pane_cp

0x71c4,	// (0x00031cb2) list_highlight_pane_cp20

0xc047,	// (0x00036b35) list_single_2graphic_pane_g1_cp4

0xb65c,	// (0x0003614a) list_single_2graphic_pane_g2_cp4

0xc04f,	// (0x00036b3d) list_single_2graphic_pane_t1_cp4

0x72a4,	// (0x00031d92) list_highlight_pane_cp21

0xc0a0,	// (0x00036b8e) list_single_midp_graphic_pane_g4_cp

0xc0af,	// (0x00036b9d) list_single_midp_graphic_pane_t1_cp

0xc0c4,	// (0x00036bb2) form2_mdip_string_pane_t1_ParamLimits

0xc0c4,	// (0x00036bb2) form2_mdip_string_pane_t1

0x71c4,	// (0x00031cb2) bg_wml_button_pane_cp2

0x71ba,	// (0x00031ca8) form2_midp_image_pane_g1

0x5309,	// (0x0002fdf7) list_double_large_graphic_pane_g5_ParamLimits

0x5309,	// (0x0002fdf7) list_double_large_graphic_pane_g5

0x8d3c,	// (0x0003382a) midp_form_pane_ParamLimits

0x72a4,	// (0x00031d92) main_apps_wheel_pane_ParamLimits

0x94a3,	// (0x00033f91) popup_preview_window_ParamLimits

0x94a3,	// (0x00033f91) popup_preview_window

0x968a,	// (0x00034178) popup_touch_info_window_ParamLimits

0x968a,	// (0x00034178) popup_touch_info_window

0x96ac,	// (0x0003419a) popup_touch_menu_window_ParamLimits

0x96ac,	// (0x0003419a) popup_touch_menu_window

0x71b0,	// (0x00031c9e) bg_popup_sub_pane_cp6

0xc169,	// (0x00036c57) list_touch_menu_pane

0xc171,	// (0x00036c5f) list_single_touch_menu_pane_ParamLimits

0xc171,	// (0x00036c5f) list_single_touch_menu_pane

0xc18c,	// (0x00036c7a) list_single_touch_menu_pane_t1

0x72a4,	// (0x00031d92) bg_popup_sub_pane_cp7_ParamLimits

0x72a4,	// (0x00031d92) bg_popup_sub_pane_cp7

0xc19a,	// (0x00036c88) heading_sub_pane

0xc1a2,	// (0x00036c90) list_touch_info_pane_ParamLimits

0xc1a2,	// (0x00036c90) list_touch_info_pane

0xc1b1,	// (0x00036c9f) list_single_touch_info_pane_ParamLimits

0xc1b1,	// (0x00036c9f) list_single_touch_info_pane

0xc1c3,	// (0x00036cb1) list_single_touch_info_pane_t1

0xc1d1,	// (0x00036cbf) list_single_touch_info_pane_t2

0x0001,

0xfb21,	// (0x0003a60f) list_single_touch_info_pane_t

0x8d34,	// (0x00033822) bg_popup_heading_pane_cp

0xc1df,	// (0x00036ccd) heading_sub_pane_t1

0x9cf4,	// (0x000347e2) bg_popup_preview_window_pane_cp_ParamLimits

0x9cf4,	// (0x000347e2) bg_popup_preview_window_pane_cp

0xc19a,	// (0x00036c88) heading_preview_pane

0xc1a2,	// (0x00036c90) list_preview_pane_ParamLimits

0xc1a2,	// (0x00036c90) list_preview_pane

0xc1ed,	// (0x00036cdb) popup_preview_window_g1

0xc1b1,	// (0x00036c9f) list_single_preview_pane_ParamLimits

0xc1b1,	// (0x00036c9f) list_single_preview_pane

0xc1f5,	// (0x00036ce3) list_single_preview_pane_g1

0xc1fd,	// (0x00036ceb) list_single_preview_pane_t1

0xc1c3,	// (0x00036cb1) list_single_preview_pane_t2

0x0001,

0xfb26,	// (0x0003a614) list_single_preview_pane_t

0xc20b,	// (0x00036cf9) bg_popup_heading_pane_cp2_ParamLimits

0xc20b,	// (0x00036cf9) bg_popup_heading_pane_cp2

0xc221,	// (0x00036d0f) heading_preview_pane_g1

0xc229,	// (0x00036d17) heading_preview_pane_t1_ParamLimits

0xc229,	// (0x00036d17) heading_preview_pane_t1

0x7393,	// (0x00031e81) soft_indicator_pane_t1_ParamLimits

0x8049,	// (0x00032b37) scroll_pane_ParamLimits

0x857a,	// (0x00033068) scroll_sc2_left_pane

0x8583,	// (0x00033071) scroll_sc2_right_pane

0x85a2,	// (0x00033090) scroll_bg_pane_g1_ParamLimits

0x85b7,	// (0x000330a5) scroll_bg_pane_g2_ParamLimits

0x85cf,	// (0x000330bd) scroll_bg_pane_g3_ParamLimits

0xf727,	// (0x0003a215) scroll_bg_pane_g_ParamLimits

0x85a2,	// (0x00033090) scroll_handle_pane_g1_ParamLimits

0x85f1,	// (0x000330df) scroll_handle_pane_g2_ParamLimits

0x85cf,	// (0x000330bd) scroll_handle_pane_g3_ParamLimits

0xf72e,	// (0x0003a21c) scroll_handle_pane_g_ParamLimits

0x90e2,	// (0x00033bd0) popup_choice_list_window_ParamLimits

0x90e2,	// (0x00033bd0) popup_choice_list_window

0x9b4c,	// (0x0003463a) choice_list_pane

0x9bce,	// (0x000346bc) cell_toolbar_pane_t1

0x9bf6,	// (0x000346e4) toolbar_button_pane_ParamLimits

0xacd0,	// (0x000357be) ai_gene_pane_1_t2_ParamLimits

0xacd0,	// (0x000357be) ai_gene_pane_1_t2

0x0001,

0xf94b,	// (0x0003a439) ai_gene_pane_1_t_ParamLimits

0xf94b,	// (0x0003a439) ai_gene_pane_1_t

0xc246,	// (0x00036d34) scroll_sc2_left_pane_g1

0xc246,	// (0x00036d34) scroll_sc2_right_pane_g1

0x90ba,	// (0x00033ba8) bg_popup_sub_pane_cp10

0xc250,	// (0x00036d3e) list_choice_list_pane

0xc267,	// (0x00036d55) list_single_choice_list_pane_ParamLimits

0xc267,	// (0x00036d55) list_single_choice_list_pane

0xc27b,	// (0x00036d69) list_single_choice_list_pane_g1

0xc283,	// (0x00036d71) list_single_choice_list_pane_t1_ParamLimits

0xc283,	// (0x00036d71) list_single_choice_list_pane_t1

0xc298,	// (0x00036d86) choice_list_pane_g1

0xc2a0,	// (0x00036d8e) choice_list_pane_t1

0x71b0,	// (0x00031c9e) input_focus_pane_cp11

0x8454,	// (0x00032f42) title_pane_stacon_g2_ParamLimits

0x8454,	// (0x00032f42) title_pane_stacon_g2

0x0002,

0xf70d,	// (0x0003a1fb) title_pane_stacon_g_ParamLimits

0xf70d,	// (0x0003a1fb) title_pane_stacon_g

0x8d34,	// (0x00033822) cursor_press_pane

0x9198,	// (0x00033c86) popup_fep_hwr_window_ParamLimits

0x9198,	// (0x00033c86) popup_fep_hwr_window

0x9222,	// (0x00033d10) popup_fep_vkb_window_ParamLimits

0x9222,	// (0x00033d10) popup_fep_vkb_window

0xc2ae,	// (0x00036d9c) cursor_press_pane_g1

0x0002,

0xfb4f,	// (0x0003a63d) fep_vkb_side_pane_g_ParamLimits

0x650c,	// (0x00030ffa) fep_hwr_candidate_pane_ParamLimits

0x650c,	// (0x00030ffa) fep_hwr_candidate_pane

0x6536,	// (0x00031024) fep_hwr_side_pane_ParamLimits

0x6536,	// (0x00031024) fep_hwr_side_pane

0x6558,	// (0x00031046) fep_hwr_top_pane_ParamLimits

0x6558,	// (0x00031046) fep_hwr_top_pane

0x6570,	// (0x0003105e) fep_hwr_write_pane_ParamLimits

0x6570,	// (0x0003105e) fep_hwr_write_pane

0xfb4f,	// (0x0003a63d) fep_vkb_side_pane_g

0xc2b6,	// (0x00036da4) fep_hwr_top_pane_g1

0xc2c8,	// (0x00036db6) fep_hwr_top_pane_g2

0x65aa,	// (0x00031098) fep_hwr_top_pane_g3

0x0002,

0xfb2b,	// (0x0003a619) fep_hwr_top_pane_g

0x65bf,	// (0x000310ad) fep_hwr_top_text_pane

0x8746,	// (0x00033234) fep_hwr_top_text_pane_g1

0xc2fe,	// (0x00036dec) fep_hwr_top_text_pane_t1

0x66c9,	// (0x000311b7) fep_hwr_candidate_pane_g1

0xc549,	// (0x00037037) fep_vkb_keypad_pane_g3_ParamLimits

0xc549,	// (0x00037037) fep_vkb_keypad_pane_g3

0xc575,	// (0x00037063) fep_vkb_keypad_pane_g4_ParamLimits

0xc575,	// (0x00037063) fep_vkb_keypad_pane_g4

0xc5ec,	// (0x000370da) fep_vkb_bottom_pane_g2_ParamLimits

0xc5ec,	// (0x000370da) fep_vkb_bottom_pane_g2

0x0001,

0xfb56,	// (0x0003a644) fep_vkb_bottom_pane_g_ParamLimits

0xfb56,	// (0x0003a644) fep_vkb_bottom_pane_g

0xc246,	// (0x00036d34) cell_vkb_side_pane_g2

0x0001,

0xfb60,	// (0x0003a64e) cell_vkb_side_pane_g

0xc677,	// (0x00037165) cell_vkb_side_pane_t1

0xc685,	// (0x00037173) cell_vkb_side_pane_t1_copy1

0xc246,	// (0x00036d34) bg_fep_vkb_candidate_pane_g2

0xc7c9,	// (0x000372b7) cell_vkb_candidate_pane_ParamLimits

0xc30c,	// (0x00036dfa) aid_size_cell_vkb_ParamLimits

0xc30c,	// (0x00036dfa) aid_size_cell_vkb

0xc7c9,	// (0x000372b7) cell_vkb_candidate_pane

0x66f0,	// (0x000311de) bg_popup_fep_shadow_pane_g1

0xc39e,	// (0x00036e8c) fep_vkb_bottom_pane_ParamLimits

0xc39e,	// (0x00036e8c) fep_vkb_bottom_pane

0xc3db,	// (0x00036ec9) fep_vkb_candidate_pane_ParamLimits

0xc3db,	// (0x00036ec9) fep_vkb_candidate_pane

0xc3f7,	// (0x00036ee5) fep_vkb_keypad_pane_ParamLimits

0xc3f7,	// (0x00036ee5) fep_vkb_keypad_pane

0xc42a,	// (0x00036f18) fep_vkb_side_pane_ParamLimits

0xc42a,	// (0x00036f18) fep_vkb_side_pane

0xc466,	// (0x00036f54) fep_vkb_top_pane_ParamLimits

0xc466,	// (0x00036f54) fep_vkb_top_pane

0xc4a2,	// (0x00036f90) fep_vkb_top_pane_g1_ParamLimits

0xc4a2,	// (0x00036f90) fep_vkb_top_pane_g1

0xc4b1,	// (0x00036f9f) fep_vkb_top_pane_g2_ParamLimits

0xc4b1,	// (0x00036f9f) fep_vkb_top_pane_g2

0xc4c0,	// (0x00036fae) fep_vkb_top_pane_g3_ParamLimits

0xc4c0,	// (0x00036fae) fep_vkb_top_pane_g3

0x0003,

0xfb46,	// (0x0003a634) fep_vkb_top_pane_g_ParamLimits

0xfb46,	// (0x0003a634) fep_vkb_top_pane_g

0xc4de,	// (0x00036fcc) fep_vkb_top_text_pane_ParamLimits

0xc4de,	// (0x00036fcc) fep_vkb_top_text_pane

0xc4ef,	// (0x00036fdd) fep_vkb_side_pane_g1_ParamLimits

0xc4ef,	// (0x00036fdd) fep_vkb_side_pane_g1

0xc538,	// (0x00037026) grid_vkb_side_pane_ParamLimits

0xc538,	// (0x00037026) grid_vkb_side_pane

0x66f8,	// (0x000311e6) bg_popup_fep_shadow_pane_g2

0x6701,	// (0x000311ef) bg_popup_fep_shadow_pane_g3

0x6709,	// (0x000311f7) bg_popup_fep_shadow_pane_g4

0x6712,	// (0x00031200) bg_popup_fep_shadow_pane_g5

0x671c,	// (0x0003120a) bg_popup_fep_shadow_pane_g6

0x6724,	// (0x00031212) bg_popup_fep_shadow_pane_g7

0x8155,	// (0x00032c43) bg_popup_fep_shadow_pane_g8

0xc597,	// (0x00037085) grid_vkb_keypad_number_pane_ParamLimits

0xc597,	// (0x00037085) grid_vkb_keypad_number_pane

0xc5ab,	// (0x00037099) grid_vkb_keypad_pane_ParamLimits

0xc5ab,	// (0x00037099) grid_vkb_keypad_pane

0xc5d1,	// (0x000370bf) fep_vkb_bottom_pane_g1_ParamLimits

0xc5d1,	// (0x000370bf) fep_vkb_bottom_pane_g1

0xc5fa,	// (0x000370e8) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc5fa,	// (0x000370e8) grid_vkb_keypad_bottom_left_pane

0xc60f,	// (0x000370fd) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc60f,	// (0x000370fd) grid_vkb_keypad_bottom_right_pane

0xc624,	// (0x00037112) fep_vkb_top_text_pane_g1

0xc63f,	// (0x0003712d) fep_vkb_top_text_pane_t1

0xc654,	// (0x00037142) cell_vkb_side_pane_ParamLimits

0xc654,	// (0x00037142) cell_vkb_side_pane

0xc246,	// (0x00036d34) cell_vkb_side_pane_g1

0xc693,	// (0x00037181) cell_vkb_keypad_pane_ParamLimits

0xc693,	// (0x00037181) cell_vkb_keypad_pane

0xc720,	// (0x0003720e) cell_vkb_keypad_pane_g1

0x0008,

0xfb73,	// (0x0003a661) bg_popup_fep_shadow_pane_g

0x6736,	// (0x00031224) cell_hwr_side_pane_g1

0x6736,	// (0x00031224) cell_hwr_side_pane_g2

0xc72a,	// (0x00037218) cell_vkb_keypad_pane_t1

0xc738,	// (0x00037226) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc738,	// (0x00037226) cell_vkb_keypad_bottom_left_pane

0xc755,	// (0x00037243) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc755,	// (0x00037243) cell_vkb_keypad_bottom_right_pane

0xc246,	// (0x00036d34) cell_vkb_keypad_bottom_left_pane_g1

0xc246,	// (0x00036d34) cell_vkb_keypad_bottom_right_pane_g1

0xc78e,	// (0x0003727c) cell_vkb_keypad_number_pane_ParamLimits

0xc78e,	// (0x0003727c) cell_vkb_keypad_number_pane

0xc7ad,	// (0x0003729b) cell_vkb_keypad_number_pane_g1

0xc7b7,	// (0x000372a5) cell_vkb_keypad_number_pane_g2

0xc7c0,	// (0x000372ae) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb65,	// (0x0003a653) cell_vkb_keypad_number_pane_g

0xc72a,	// (0x00037218) cell_vkb_keypad_number_pane_t1

0xc7ea,	// (0x000372d8) fep_vkb_candidate_pane_g1

0x0001,

0xfb86,	// (0x0003a674) cell_hwr_side_pane_g

0xc803,	// (0x000372f1) cell_hwr_side_pane_t1

0x6740,	// (0x0003122e) cell_hwr_side_pane_t1_copy1

0x674e,	// (0x0003123c) cell_hwr_candidate_pane_g1

0x677d,	// (0x0003126b) cell_hwr_candidate_pane_t1

0xc246,	// (0x00036d34) cell_vkb_candidate_pane_g2

0xc847,	// (0x00037335) cell_vkb_candidate_pane_t1

0x64d3,	// (0x00030fc1) bg_popup_fep_shadow_pane_ParamLimits

0x64d3,	// (0x00030fc1) bg_popup_fep_shadow_pane

0x658a,	// (0x00031078) bg_fep_hwr_top_pane_g4

0xc2da,	// (0x00036dc8) bg_hwr_side_pane_g1_ParamLimits

0xc2da,	// (0x00036dc8) bg_hwr_side_pane_g1

0x65fd,	// (0x000310eb) cell_hwr_side_pane_ParamLimits

0x65fd,	// (0x000310eb) cell_hwr_side_pane

0x663a,	// (0x00031128) fep_hwr_write_pane_g1_ParamLimits

0x663a,	// (0x00031128) fep_hwr_write_pane_g1

0x6647,	// (0x00031135) fep_hwr_write_pane_g2_ParamLimits

0x6647,	// (0x00031135) fep_hwr_write_pane_g2

0x6654,	// (0x00031142) fep_hwr_write_pane_g3_ParamLimits

0x6654,	// (0x00031142) fep_hwr_write_pane_g3

0x6662,	// (0x00031150) fep_hwr_write_pane_g4_ParamLimits

0x6662,	// (0x00031150) fep_hwr_write_pane_g4

0x0005,

0xfb32,	// (0x0003a620) fep_hwr_write_pane_g_ParamLimits

0xfb32,	// (0x0003a620) fep_hwr_write_pane_g

0x658a,	// (0x00031078) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x658a,	// (0x00031078) bg_fep_hwr_candidate_pane_g2

0x6677,	// (0x00031165) cell_hwr_candidate_pane_ParamLimits

0x6677,	// (0x00031165) cell_hwr_candidate_pane

0x66c9,	// (0x000311b7) fep_hwr_candidate_pane_g1_ParamLimits

0xc33a,	// (0x00036e28) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc33a,	// (0x00036e28) bg_popup_fep_shadow_pane_cp2

0xc4d0,	// (0x00036fbe) fep_vkb_top_pane_g4_ParamLimits

0xc4d0,	// (0x00036fbe) fep_vkb_top_pane_g4

0xc516,	// (0x00037004) fep_vkb_side_pane_g2_ParamLimits

0xc516,	// (0x00037004) fep_vkb_side_pane_g2

0x5493,	// (0x0002ff81) list_setting_pane_t4_ParamLimits

0x5493,	// (0x0002ff81) list_setting_pane_t4

0x552f,	// (0x0003001d) list_setting_number_pane_t5_ParamLimits

0x552f,	// (0x0003001d) list_setting_number_pane_t5

0x8788,	// (0x00033276) list_double_heading_pane_cp2_ParamLimits

0x8788,	// (0x00033276) list_double_heading_pane_cp2

0x80f0,	// (0x00032bde) list_double_heading_pane_g1_cp2_ParamLimits

0x80f0,	// (0x00032bde) list_double_heading_pane_g1_cp2

0x80fc,	// (0x00032bea) list_double_heading_pane_g2_cp2_ParamLimits

0x80fc,	// (0x00032bea) list_double_heading_pane_g2_cp2

0xc855,	// (0x00037343) list_double_heading_pane_t1_cp2_ParamLimits

0xc855,	// (0x00037343) list_double_heading_pane_t1_cp2

0xc86b,	// (0x00037359) list_double_heading_pane_t2_cp2_ParamLimits

0xc86b,	// (0x00037359) list_double_heading_pane_t2_cp2

0x7198,	// (0x00031c86) aid_value_unit2

0x4eef,	// (0x0002f9dd) popup_preview_fixed_window

0x752e,	// (0x0003201c) bg_popup_preview_window_pane_cp02

0xc87d,	// (0x0003736b) list_preview_fixed_pane

0xc8c3,	// (0x000373b1) list_empty_pane_fp_ParamLimits

0xc8c3,	// (0x000373b1) list_empty_pane_fp

0xc8c3,	// (0x000373b1) list_single_cale_day_pane_fp_ParamLimits

0xc8c3,	// (0x000373b1) list_single_cale_day_pane_fp

0xc8c3,	// (0x000373b1) list_single_graphic_heading_pane_fp_ParamLimits

0xc8c3,	// (0x000373b1) list_single_graphic_heading_pane_fp

0xc8c3,	// (0x000373b1) list_single_graphic_pane_fp_ParamLimits

0xc8c3,	// (0x000373b1) list_single_graphic_pane_fp

0xc8c3,	// (0x000373b1) list_single_heading_pane_fp_ParamLimits

0xc8c3,	// (0x000373b1) list_single_heading_pane_fp

0xc8c3,	// (0x000373b1) list_single_pane_fp_ParamLimits

0xc8c3,	// (0x000373b1) list_single_pane_fp

0xc8dc,	// (0x000373ca) list_single_pane_fp_g1_ParamLimits

0xc8dc,	// (0x000373ca) list_single_pane_fp_g1

0x790c,	// (0x000323fa) list_single_pane_fp_g2_ParamLimits

0x790c,	// (0x000323fa) list_single_pane_fp_g2

0x7918,	// (0x00032406) list_single_pane_fp_g3_ParamLimits

0x7918,	// (0x00032406) list_single_pane_fp_g3

0xc8e8,	// (0x000373d6) list_single_pane_fp_g4_ParamLimits

0xc8e8,	// (0x000373d6) list_single_pane_fp_g4

0x0003,

0xfb99,	// (0x0003a687) list_single_pane_fp_g_ParamLimits

0xfb99,	// (0x0003a687) list_single_pane_fp_g

0x792c,	// (0x0003241a) list_single_pane_fp_t1_ParamLimits

0x792c,	// (0x0003241a) list_single_pane_fp_t1

0x7943,	// (0x00032431) list_single_graphic_pane_fp_g1_ParamLimits

0x7943,	// (0x00032431) list_single_graphic_pane_fp_g1

0xc8dc,	// (0x000373ca) list_single_graphic_pane_fp_g2_ParamLimits

0xc8dc,	// (0x000373ca) list_single_graphic_pane_fp_g2

0x790c,	// (0x000323fa) list_single_graphic_pane_fp_g3_ParamLimits

0x790c,	// (0x000323fa) list_single_graphic_pane_fp_g3

0x7918,	// (0x00032406) list_single_graphic_pane_fp_g4_ParamLimits

0x7918,	// (0x00032406) list_single_graphic_pane_fp_g4

0xc8e8,	// (0x000373d6) list_single_graphic_pane_fp_g5_ParamLimits

0xc8e8,	// (0x000373d6) list_single_graphic_pane_fp_g5

0x0004,

0xfba2,	// (0x0003a690) list_single_graphic_pane_fp_g_ParamLimits

0xfba2,	// (0x0003a690) list_single_graphic_pane_fp_g

0x794f,	// (0x0003243d) list_single_graphic_pane_fp_t1_ParamLimits

0x794f,	// (0x0003243d) list_single_graphic_pane_fp_t1

0x7943,	// (0x00032431) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x7943,	// (0x00032431) list_single_graphic_heading_pane_fp_g1

0xc8dc,	// (0x000373ca) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc8dc,	// (0x000373ca) list_single_graphic_heading_pane_fp_g2

0x790c,	// (0x000323fa) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x790c,	// (0x000323fa) list_single_graphic_heading_pane_fp_g3

0x7918,	// (0x00032406) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x7918,	// (0x00032406) list_single_graphic_heading_pane_fp_g4

0xc8e8,	// (0x000373d6) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc8e8,	// (0x000373d6) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfba2,	// (0x0003a690) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfba2,	// (0x0003a690) list_single_graphic_heading_pane_fp_g

0x7965,	// (0x00032453) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x7965,	// (0x00032453) list_single_graphic_heading_pane_fp_t1

0x797b,	// (0x00032469) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x797b,	// (0x00032469) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfbad,	// (0x0003a69b) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfbad,	// (0x0003a69b) list_single_graphic_heading_pane_fp_t

0x798d,	// (0x0003247b) list_single_cale_day_pane_fp_g1_ParamLimits

0x798d,	// (0x0003247b) list_single_cale_day_pane_fp_g1

0xc8f4,	// (0x000373e2) list_single_cale_day_pane_fp_g2_ParamLimits

0xc8f4,	// (0x000373e2) list_single_cale_day_pane_fp_g2

0x79c5,	// (0x000324b3) list_single_cale_day_pane_fp_g3_ParamLimits

0x79c5,	// (0x000324b3) list_single_cale_day_pane_fp_g3

0x79ed,	// (0x000324db) list_single_cale_day_pane_fp_g4_ParamLimits

0x79ed,	// (0x000324db) list_single_cale_day_pane_fp_g4

0x7a11,	// (0x000324ff) list_single_cale_day_pane_fp_g5_ParamLimits

0x7a11,	// (0x000324ff) list_single_cale_day_pane_fp_g5

0x0004,

0xfbb2,	// (0x0003a6a0) list_single_cale_day_pane_fp_g_ParamLimits

0xfbb2,	// (0x0003a6a0) list_single_cale_day_pane_fp_g

0x7a35,	// (0x00032523) list_single_cale_day_pane_fp_t1_ParamLimits

0x7a35,	// (0x00032523) list_single_cale_day_pane_fp_t1

0x7a5b,	// (0x00032549) list_single_cale_day_pane_fp_t2_ParamLimits

0x7a5b,	// (0x00032549) list_single_cale_day_pane_fp_t2

0x7a74,	// (0x00032562) list_single_cale_day_pane_fp_t3_ParamLimits

0x7a74,	// (0x00032562) list_single_cale_day_pane_fp_t3

0x0002,

0xfbbd,	// (0x0003a6ab) list_single_cale_day_pane_fp_t_ParamLimits

0xfbbd,	// (0x0003a6ab) list_single_cale_day_pane_fp_t

0xc8dc,	// (0x000373ca) list_empty_pane_fp_g1_ParamLimits

0xc8dc,	// (0x000373ca) list_empty_pane_fp_g1

0x7a8d,	// (0x0003257b) list_empty_pane_fp_t1

0x7a9b,	// (0x00032589) list_empty_pane_fp_t2

0x0001,

0xfbc4,	// (0x0003a6b2) list_empty_pane_fp_t

0xc8dc,	// (0x000373ca) list_single_heading_pane_fp_g1_ParamLimits

0xc8dc,	// (0x000373ca) list_single_heading_pane_fp_g1

0x790c,	// (0x000323fa) list_single_heading_pane_fp_g2_ParamLimits

0x790c,	// (0x000323fa) list_single_heading_pane_fp_g2

0x7918,	// (0x00032406) list_single_heading_pane_fp_g3_ParamLimits

0x7918,	// (0x00032406) list_single_heading_pane_fp_g3

0x0002,

0xfbc9,	// (0x0003a6b7) list_single_heading_pane_fp_g_ParamLimits

0xfbc9,	// (0x0003a6b7) list_single_heading_pane_fp_g

0x7aa9,	// (0x00032597) list_single_heading_pane_fp_t1_ParamLimits

0x7aa9,	// (0x00032597) list_single_heading_pane_fp_t1

0x7abb,	// (0x000325a9) list_single_heading_pane_fp_t2_ParamLimits

0x7abb,	// (0x000325a9) list_single_heading_pane_fp_t2

0x0001,

0xfbd0,	// (0x0003a6be) list_single_heading_pane_fp_t_ParamLimits

0xfbd0,	// (0x0003a6be) list_single_heading_pane_fp_t

0x82eb,	// (0x00032dd9) aid_size_cell_fast

0x74a0,	// (0x00031f8e) soft_indicator_pane_cp1_t1

0x8328,	// (0x00032e16) cell_app_pane_cp2_ParamLimits

0x8328,	// (0x00032e16) cell_app_pane_cp2

0x64f5,	// (0x00030fe3) fep_hwr_candidate_drop_down_list_pane

0x66e3,	// (0x000311d1) fep_hwr_candidate_pane_g3_ParamLimits

0x66e3,	// (0x000311d1) fep_hwr_candidate_pane_g3

0x39a3,	// (0x0002e491) fep_hwr_candidate_pane_g4_ParamLimits

0x39a3,	// (0x0002e491) fep_hwr_candidate_pane_g4

0x0002,

0xfb3f,	// (0x0003a62d) fep_hwr_candidate_pane_g_ParamLimits

0xfb3f,	// (0x0003a62d) fep_hwr_candidate_pane_g

0xc3ca,	// (0x00036eb8) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc3ca,	// (0x00036eb8) fep_vkb_candidate_drop_down_list_pane

0xc7f2,	// (0x000372e0) fep_vkb_candidate_pane_g3

0xc7fa,	// (0x000372e8) fep_vkb_candidate_pane_g4

0x0002,

0xfb6c,	// (0x0003a65a) fep_vkb_candidate_pane_g

0x674e,	// (0x0003123c) cell_hwr_candidate_pane_g1_ParamLimits

0x675c,	// (0x0003124a) cell_hwr_candidate_pane_g3_ParamLimits

0x675c,	// (0x0003124a) cell_hwr_candidate_pane_g3

0xe1f5,	// (0x00038ce3) cell_hwr_candidate_pane_g4_ParamLimits

0xe1f5,	// (0x00038ce3) cell_hwr_candidate_pane_g4

0x0002,

0xfb8b,	// (0x0003a679) cell_hwr_candidate_pane_g_ParamLimits

0xfb8b,	// (0x0003a679) cell_hwr_candidate_pane_g

0xc811,	// (0x000372ff) cell_vkb_candidate_pane_g3_ParamLimits

0xc811,	// (0x000372ff) cell_vkb_candidate_pane_g3

0xc82c,	// (0x0003731a) cell_vkb_candidate_pane_g4_ParamLimits

0xc82c,	// (0x0003731a) cell_vkb_candidate_pane_g4

0xc900,	// (0x000373ee) cell_app_pane_cp2_g1_ParamLimits

0xc900,	// (0x000373ee) cell_app_pane_cp2_g1

0xc91e,	// (0x0003740c) cell_app_pane_cp2_g2_ParamLimits

0xc91e,	// (0x0003740c) cell_app_pane_cp2_g2

0x0001,

0xfbd5,	// (0x0003a6c3) cell_app_pane_cp2_g_ParamLimits

0xfbd5,	// (0x0003a6c3) cell_app_pane_cp2_g

0xc92a,	// (0x00037418) cell_app_pane_cp2_t1_ParamLimits

0xc92a,	// (0x00037418) cell_app_pane_cp2_t1

0x80d6,	// (0x00032bc4) grid_highlight_pane_cp1_ParamLimits

0x80d6,	// (0x00032bc4) grid_highlight_pane_cp1

0x679b,	// (0x00031289) cell_hwr_candidate_pane_cp1_ParamLimits

0x679b,	// (0x00031289) cell_hwr_candidate_pane_cp1

0x674e,	// (0x0003123c) fep_hwr_candidate_drop_down_list_pane_g1

0x67bf,	// (0x000312ad) fep_hwr_candidate_drop_down_list_pane_g2

0x67cc,	// (0x000312ba) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbda,	// (0x0003a6c8) fep_hwr_candidate_drop_down_list_pane_g

0x67d9,	// (0x000312c7) fep_hwr_candidate_drop_down_list_scroll_pane

0x67e2,	// (0x000312d0) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x67e2,	// (0x000312d0) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x67ef,	// (0x000312dd) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x67ef,	// (0x000312dd) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x67fc,	// (0x000312ea) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x67fc,	// (0x000312ea) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6809,	// (0x000312f7) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6809,	// (0x000312f7) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x6824,	// (0x00031312) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6824,	// (0x00031312) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x683f,	// (0x0003132d) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x683f,	// (0x0003132d) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x685a,	// (0x00031348) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x685a,	// (0x00031348) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x6875,	// (0x00031363) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6875,	// (0x00031363) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe1,	// (0x0003a6cf) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe1,	// (0x0003a6cf) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc93c,	// (0x0003742a) cell_vkb_candidate_pane_cp1_ParamLimits

0xc93c,	// (0x0003742a) cell_vkb_candidate_pane_cp1

0xc4d0,	// (0x00036fbe) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc4d0,	// (0x00036fbe) fep_vkb_candidate_drop_down_list_pane_g1

0xc962,	// (0x00037450) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc962,	// (0x00037450) fep_vkb_candidate_drop_down_list_pane_g2

0xc96f,	// (0x0003745d) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc96f,	// (0x0003745d) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbf2,	// (0x0003a6e0) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbf2,	// (0x0003a6e0) fep_vkb_candidate_drop_down_list_pane_g

0xc97c,	// (0x0003746a) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc97c,	// (0x0003746a) fep_vkb_candidate_drop_down_list_scroll_pane

0xc989,	// (0x00037477) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc989,	// (0x00037477) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc996,	// (0x00037484) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc996,	// (0x00037484) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc9a2,	// (0x00037490) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc9a2,	// (0x00037490) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc9ae,	// (0x0003749c) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc9ae,	// (0x0003749c) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc9cf,	// (0x000374bd) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc9cf,	// (0x000374bd) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc9f0,	// (0x000374de) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc9f0,	// (0x000374de) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xca11,	// (0x000374ff) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xca11,	// (0x000374ff) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xca32,	// (0x00037520) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xca32,	// (0x00037520) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbf9,	// (0x0003a6e7) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbf9,	// (0x0003a6e7) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x71ce,	// (0x00031cbc) title_pane_g1_ParamLimits

0x71db,	// (0x00031cc9) title_pane_g2_ParamLimits

0xf592,	// (0x0003a080) title_pane_g_ParamLimits

0x8736,	// (0x00033224) aid_call2_pane

0x873e,	// (0x0003322c) aid_call_pane

0x8746,	// (0x00033234) popup_clock_analogue_window_g1

0x8746,	// (0x00033234) popup_clock_analogue_window_g2

0x5988,	// (0x00030476) popup_clock_analogue_window_g3

0x5991,	// (0x0003047f) popup_clock_analogue_window_g4

0x71ba,	// (0x00031ca8) popup_clock_analogue_window_g5

0x0004,

0xf73c,	// (0x0003a22a) popup_clock_analogue_window_g

0x5999,	// (0x00030487) popup_clock_analogue_window_t1

0x59a7,	// (0x00030495) clock_digital_number_pane_ParamLimits

0x59a7,	// (0x00030495) clock_digital_number_pane

0x59b3,	// (0x000304a1) clock_digital_number_pane_cp02_ParamLimits

0x59b3,	// (0x000304a1) clock_digital_number_pane_cp02

0x59bf,	// (0x000304ad) clock_digital_number_pane_cp03_ParamLimits

0x59bf,	// (0x000304ad) clock_digital_number_pane_cp03

0x59cb,	// (0x000304b9) clock_digital_number_pane_cp04_ParamLimits

0x59cb,	// (0x000304b9) clock_digital_number_pane_cp04

0x59d7,	// (0x000304c5) clock_digital_separator_pane_ParamLimits

0x59d7,	// (0x000304c5) clock_digital_separator_pane

0x59e3,	// (0x000304d1) popup_clock_digital_window_t1_ParamLimits

0x59e3,	// (0x000304d1) popup_clock_digital_window_t1

0x71ba,	// (0x00031ca8) clock_digital_number_pane_g1

0x71ba,	// (0x00031ca8) clock_digital_number_pane_g2

0x0001,

0xf747,	// (0x0003a235) clock_digital_number_pane_g

0x71ba,	// (0x00031ca8) clock_digital_separator_pane_g1

0x71ba,	// (0x00031ca8) clock_digital_separator_pane_g2

0x0001,

0xf747,	// (0x0003a235) clock_digital_separator_pane_g

0x96f9,	// (0x000341e7) aid_fill_nsta_ParamLimits

0x9849,	// (0x00034337) indicator_nsta_pane_ParamLimits

0x99d9,	// (0x000344c7) popup_clock_analogue_window

0x99d9,	// (0x000344c7) popup_clock_digital_window

0x72a4,	// (0x00031d92) grid_indicator_nsta_pane_ParamLimits

0xbc5b,	// (0x00036749) clock_nsta_pane_t2

0x0001,

0xfacc,	// (0x0003a5ba) clock_nsta_pane_t

0x594c,	// (0x0003043a) aid_size_max_handle

0x5956,	// (0x00030444) aid_size_min_handle

0x8d34,	// (0x00033822) editor_scroll_pane

0xca4d,	// (0x0003753b) ex_editor_pane

0x8258,	// (0x00032d46) scroll_pane_cp13

0x8075,	// (0x00032b63) scroll_pane_cp14

0x8770,	// (0x0003325e) scroll_pane_cp36

0x879e,	// (0x0003328c) list_single_graphic_hl_pane_cp2_ParamLimits

0x879e,	// (0x0003328c) list_single_graphic_hl_pane_cp2

0x630d,	// (0x00030dfb) list_single_graphic_hl_pane_ParamLimits

0x630d,	// (0x00030dfb) list_single_graphic_hl_pane

0x7ad1,	// (0x000325bf) aid_size_min_hl_cp1

0xca55,	// (0x00037543) list_highlight_pane_cp34_ParamLimits

0xca55,	// (0x00037543) list_highlight_pane_cp34

0xca66,	// (0x00037554) list_single_graphic_hl_pane_g1_ParamLimits

0xca66,	// (0x00037554) list_single_graphic_hl_pane_g1

0x7ada,	// (0x000325c8) list_single_graphic_hl_pane_g2_ParamLimits

0x7ada,	// (0x000325c8) list_single_graphic_hl_pane_g2

0x7ada,	// (0x000325c8) list_single_graphic_hl_pane_g3_ParamLimits

0x7ada,	// (0x000325c8) list_single_graphic_hl_pane_g3

0x5ef6,	// (0x000309e4) list_single_graphic_hl_pane_g4_ParamLimits

0x5ef6,	// (0x000309e4) list_single_graphic_hl_pane_g4

0x7ae6,	// (0x000325d4) list_single_graphic_hl_pane_g5_ParamLimits

0x7ae6,	// (0x000325d4) list_single_graphic_hl_pane_g5

0x0004,

0xfc0a,	// (0x0003a6f8) list_single_graphic_hl_pane_g_ParamLimits

0xfc0a,	// (0x0003a6f8) list_single_graphic_hl_pane_g

0x7afa,	// (0x000325e8) list_single_graphic_hl_pane_t1_ParamLimits

0x7afa,	// (0x000325e8) list_single_graphic_hl_pane_t1

0xca73,	// (0x00037561) aid_size_min_hl_cp2

0xca7c,	// (0x0003756a) list_highlight_pane_cp34_cp2_ParamLimits

0xca7c,	// (0x0003756a) list_highlight_pane_cp34_cp2

0xca66,	// (0x00037554) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xca66,	// (0x00037554) list_single_graphic_hl_pane_g1_cp2

0xca89,	// (0x00037577) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xca89,	// (0x00037577) list_single_graphic_hl_pane_g2_cp2

0xca95,	// (0x00037583) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xca95,	// (0x00037583) list_single_graphic_hl_pane_g3_cp2

0x9459,	// (0x00033f47) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x9459,	// (0x00033f47) list_single_graphic_hl_pane_g4_cp2

0xcaa3,	// (0x00037591) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xcaa3,	// (0x00037591) list_single_graphic_hl_pane_g5_cp2

0x5d28,	// (0x00030816) control_pane_g4_ParamLimits

0x5d28,	// (0x00030816) control_pane_g4

0x90ba,	// (0x00033ba8) bg_popup_sub_pane_cp10_ParamLimits

0xc250,	// (0x00036d3e) list_choice_list_pane_ParamLimits

0xc25f,	// (0x00036d4d) scroll_pane_cp23

0x752e,	// (0x0003201c) bg_popup_preview_window_pane_cp02_ParamLimits

0xc87d,	// (0x0003736b) list_preview_fixed_pane_ParamLimits

0xc893,	// (0x00037381) list_preview_fixed_pane_cp_ParamLimits

0xc893,	// (0x00037381) list_preview_fixed_pane_cp

0xc89f,	// (0x0003738d) popup_preview_fixed_window_g1_ParamLimits

0xc89f,	// (0x0003738d) popup_preview_fixed_window_g1

0xc8ab,	// (0x00037399) popup_preview_fixed_window_g2_ParamLimits

0xc8ab,	// (0x00037399) popup_preview_fixed_window_g2

0x0002,

0xfb92,	// (0x0003a680) popup_preview_fixed_window_g_ParamLimits

0xfb92,	// (0x0003a680) popup_preview_fixed_window_g

0x58be,	// (0x000303ac) aid_navi_side_left_pane_ParamLimits

0x58d3,	// (0x000303c1) aid_navi_side_right_pane_ParamLimits

0x58eb,	// (0x000303d9) navi_icon_pane_stacon_ParamLimits

0x58ff,	// (0x000303ed) navi_navi_pane_stacon_ParamLimits

0x58eb,	// (0x000303d9) navi_text_pane_stacon_ParamLimits

0x71b0,	// (0x00031c9e) main_text_info_pane

0xcacd,	// (0x000375bb) listscroll_text_info_pane

0xcad5,	// (0x000375c3) list_text_info_pane_ParamLimits

0xcad5,	// (0x000375c3) list_text_info_pane

0xcae4,	// (0x000375d2) scroll_pane_cp24_ParamLimits

0xcae4,	// (0x000375d2) scroll_pane_cp24

0xcb02,	// (0x000375f0) list_text_info_pane_t1_ParamLimits

0xcb02,	// (0x000375f0) list_text_info_pane_t1

0x9100,	// (0x00033bee) popup_fast_swap2_window_ParamLimits

0x9100,	// (0x00033bee) popup_fast_swap2_window

0xcb27,	// (0x00037615) aid_size_cell_fast2

0x71b0,	// (0x00031c9e) bg_popup_window_pane_cp17

0xa08c,	// (0x00034b7a) heading_pane_cp2

0x7d39,	// (0x00032827) listscroll_fast2_pane

0xcb31,	// (0x0003761f) grid_fast2_pane

0xcb3b,	// (0x00037629) listscroll_fast2_pane_g1

0xcb45,	// (0x00037633) listscroll_fast2_pane_g2

0x0001,

0xfc15,	// (0x0003a703) listscroll_fast2_pane_g

0x8258,	// (0x00032d46) scroll_pane_cp26

0xcb4f,	// (0x0003763d) cell_fast2_pane_ParamLimits

0xcb4f,	// (0x0003763d) cell_fast2_pane

0xcb66,	// (0x00037654) cell_fast2_pane_g1

0xcb6f,	// (0x0003765d) cell_fast2_pane_g2

0xcb78,	// (0x00037666) cell_fast2_pane_g3

0x0002,

0xfc1a,	// (0x0003a708) cell_fast2_pane_g

0x7e32,	// (0x00032920) grid_highlight_pane_cp9

0x7e47,	// (0x00032935) main_eswt_pane_ParamLimits

0x7e47,	// (0x00032935) main_eswt_pane

0xcaf9,	// (0x000375e7) list_single_text_info_pane

0xcb80,	// (0x0003766e) eswt_ctrl_button_pane

0xcb80,	// (0x0003766e) eswt_ctrl_canvas_pane

0xcb88,	// (0x00037676) eswt_ctrl_combo_pane

0xcb80,	// (0x0003766e) eswt_ctrl_default_pane

0xcb80,	// (0x0003766e) eswt_ctrl_label_pane

0xcb90,	// (0x0003767e) eswt_ctrl_wait_pane

0xcb98,	// (0x00037686) eswt_shell_pane

0x71b0,	// (0x00031c9e) listscroll_eswt_app_pane

0xcbc6,	// (0x000376b4) popup_eswt_tasktip_window_ParamLimits

0xcbc6,	// (0x000376b4) popup_eswt_tasktip_window

0x9cf4,	// (0x000347e2) bg_popup_window_pane_cp18

0xcbd7,	// (0x000376c5) eswt_control_pane_g1_ParamLimits

0xcbd7,	// (0x000376c5) eswt_control_pane_g1

0xcbe4,	// (0x000376d2) eswt_control_pane_g2_ParamLimits

0xcbe4,	// (0x000376d2) eswt_control_pane_g2

0xcbf1,	// (0x000376df) eswt_control_pane_g3_ParamLimits

0xcbf1,	// (0x000376df) eswt_control_pane_g3

0xcbfe,	// (0x000376ec) eswt_control_pane_g4_ParamLimits

0xcbfe,	// (0x000376ec) eswt_control_pane_g4

0x0003,

0xfc21,	// (0x0003a70f) eswt_control_pane_g_ParamLimits

0xfc21,	// (0x0003a70f) eswt_control_pane_g

0x80d6,	// (0x00032bc4) bg_button_pane_ParamLimits

0x80d6,	// (0x00032bc4) bg_button_pane

0x7e47,	// (0x00032935) common_borders_pane_copy2_ParamLimits

0x7e47,	// (0x00032935) common_borders_pane_copy2

0xcc0b,	// (0x000376f9) control_button_pane_g1_ParamLimits

0xcc0b,	// (0x000376f9) control_button_pane_g1

0xcc17,	// (0x00037705) control_button_pane_g2_ParamLimits

0xcc17,	// (0x00037705) control_button_pane_g2

0xcc23,	// (0x00037711) control_button_pane_g3_ParamLimits

0xcc23,	// (0x00037711) control_button_pane_g3

0x0002,

0xfc2a,	// (0x0003a718) control_button_pane_g_ParamLimits

0xfc2a,	// (0x0003a718) control_button_pane_g

0xcc37,	// (0x00037725) control_button_pane_t1

0xcc45,	// (0x00037733) control_button_pane_t2

0x0001,

0xfc31,	// (0x0003a71f) control_button_pane_t

0x9c02,	// (0x000346f0) bg_button_pane_g1

0x9c12,	// (0x00034700) bg_button_pane_g2

0x9c0a,	// (0x000346f8) bg_button_pane_g3

0x9c22,	// (0x00034710) bg_button_pane_g4

0x9c1a,	// (0x00034708) bg_button_pane_g5

0x9c2a,	// (0x00034718) bg_button_pane_g6

0x9c32,	// (0x00034720) bg_button_pane_g7

0x9c42,	// (0x00034730) bg_button_pane_g8

0x9c3a,	// (0x00034728) bg_button_pane_g9

0x0008,

0xf89f,	// (0x0003a38d) bg_button_pane_g

0xc20b,	// (0x00036cf9) common_borders_pane_ParamLimits

0xc20b,	// (0x00036cf9) common_borders_pane

0xcbd7,	// (0x000376c5) eswt_control_pane_g1_copy1_ParamLimits

0xcbd7,	// (0x000376c5) eswt_control_pane_g1_copy1

0xcbe4,	// (0x000376d2) eswt_control_pane_g2_copy1_ParamLimits

0xcbe4,	// (0x000376d2) eswt_control_pane_g2_copy1

0xcbf1,	// (0x000376df) eswt_control_pane_g3_copy1_ParamLimits

0xcbf1,	// (0x000376df) eswt_control_pane_g3_copy1

0xcbfe,	// (0x000376ec) eswt_control_pane_g4_copy1_ParamLimits

0xcbfe,	// (0x000376ec) eswt_control_pane_g4_copy1

0xc246,	// (0x00036d34) bg_eswt_ctrl_canvas_pane_g1

0xc20b,	// (0x00036cf9) common_borders_pane_cp2_ParamLimits

0xc20b,	// (0x00036cf9) common_borders_pane_cp2

0xc20b,	// (0x00036cf9) common_borders_pane_cp3_ParamLimits

0xc20b,	// (0x00036cf9) common_borders_pane_cp3

0xcc53,	// (0x00037741) separator_horizontal_pane

0xcc5b,	// (0x00037749) separator_vertical_pane

0xcbd7,	// (0x000376c5) eswt_control_pane_g1_copy2_ParamLimits

0xcbd7,	// (0x000376c5) eswt_control_pane_g1_copy2

0xcbe4,	// (0x000376d2) eswt_control_pane_g2_copy2_ParamLimits

0xcbe4,	// (0x000376d2) eswt_control_pane_g2_copy2

0xcbf1,	// (0x000376df) eswt_control_pane_g3_copy2_ParamLimits

0xcbf1,	// (0x000376df) eswt_control_pane_g3_copy2

0xcbfe,	// (0x000376ec) eswt_control_pane_g4_copy2_ParamLimits

0xcbfe,	// (0x000376ec) eswt_control_pane_g4_copy2

0x71b0,	// (0x00031c9e) common_borders_pane_cp4

0xcc64,	// (0x00037752) separator_horizontal_pane_g1

0xcc6d,	// (0x0003775b) separator_horizontal_pane_g2

0xcc76,	// (0x00037764) separator_horizontal_pane_g3

0x0002,

0xfc36,	// (0x0003a724) separator_horizontal_pane_g

0xcbd7,	// (0x000376c5) eswt_control_pane_g1_copy3_ParamLimits

0xcbd7,	// (0x000376c5) eswt_control_pane_g1_copy3

0xcbe4,	// (0x000376d2) eswt_control_pane_g2_copy3_ParamLimits

0xcbe4,	// (0x000376d2) eswt_control_pane_g2_copy3

0xcbf1,	// (0x000376df) eswt_control_pane_g3_copy3_ParamLimits

0xcbf1,	// (0x000376df) eswt_control_pane_g3_copy3

0xcbfe,	// (0x000376ec) eswt_control_pane_g4_copy3_ParamLimits

0xcbfe,	// (0x000376ec) eswt_control_pane_g4_copy3

0x71b0,	// (0x00031c9e) common_borders_pane_cp5

0xcc7f,	// (0x0003776d) separator_vertical_pane_g1

0xcc88,	// (0x00037776) separator_vertical_pane_g2

0xcc91,	// (0x0003777f) separator_vertical_pane_g3

0x0002,

0xfc3d,	// (0x0003a72b) separator_vertical_pane_g

0xcbd7,	// (0x000376c5) eswt_control_pane_g1_copy4_ParamLimits

0xcbd7,	// (0x000376c5) eswt_control_pane_g1_copy4

0xcbe4,	// (0x000376d2) eswt_control_pane_g2_copy4_ParamLimits

0xcbe4,	// (0x000376d2) eswt_control_pane_g2_copy4

0xcbf1,	// (0x000376df) eswt_control_pane_g3_copy4_ParamLimits

0xcbf1,	// (0x000376df) eswt_control_pane_g3_copy4

0xcbfe,	// (0x000376ec) eswt_control_pane_g4_copy4_ParamLimits

0xcbfe,	// (0x000376ec) eswt_control_pane_g4_copy4

0xcc9a,	// (0x00037788) eswt_ctrl_combo_button_pane

0xcca2,	// (0x00037790) eswt_ctrl_input_pane

0xccaa,	// (0x00037798) popup_choice_list_window_cp70

0xccb2,	// (0x000377a0) eswt_ctrl_input_pane_t1

0x71b0,	// (0x00031c9e) input_focus_pane_cp70

0xc20b,	// (0x00036cf9) bg_button_pane_cp70_ParamLimits

0xc20b,	// (0x00036cf9) bg_button_pane_cp70

0xccc0,	// (0x000377ae) eswt_ctrl_combo_button_pane_g1

0xccc8,	// (0x000377b6) wait_bar_pane_cp70

0x9cf4,	// (0x000347e2) bg_popup_window_pane_cp70_ParamLimits

0x9cf4,	// (0x000347e2) bg_popup_window_pane_cp70

0xccd0,	// (0x000377be) popup_eswt_tasktip_window_t1

0xcce6,	// (0x000377d4) wait_bar_pane_cp71_ParamLimits

0xcce6,	// (0x000377d4) wait_bar_pane_cp71

0xccf2,	// (0x000377e0) grid_eswt_app_pane

0x857a,	// (0x00033068) scroll_pane_cp70

0xccfb,	// (0x000377e9) cell_eswt_app_pane_ParamLimits

0xccfb,	// (0x000377e9) cell_eswt_app_pane

0xcd2d,	// (0x0003781b) cell_eswt_app_pane_g1_ParamLimits

0xcd2d,	// (0x0003781b) cell_eswt_app_pane_g1

0xcd5c,	// (0x0003784a) cell_eswt_app_pane_g2_ParamLimits

0xcd5c,	// (0x0003784a) cell_eswt_app_pane_g2

0x0001,

0xfc44,	// (0x0003a732) cell_eswt_app_pane_g_ParamLimits

0xfc44,	// (0x0003a732) cell_eswt_app_pane_g

0xcd85,	// (0x00037873) cell_eswt_app_pane_t1_ParamLimits

0xcd85,	// (0x00037873) cell_eswt_app_pane_t1

0xcdb7,	// (0x000378a5) grid_highlight_pane_cp70_ParamLimits

0xcdb7,	// (0x000378a5) grid_highlight_pane_cp70

0xb154,	// (0x00035c42) set_content_pane_g1

0x8fe4,	// (0x00033ad2) status_small_volume_pane

0x6890,	// (0x0003137e) status_small_volume_pane_g1

0x6898,	// (0x00031386) volume_small2_pane

0x68a1,	// (0x0003138f) volume_small2_pane_g1

0x68aa,	// (0x00031398) volume_small2_pane_g2

0x68b3,	// (0x000313a1) volume_small2_pane_g3

0x68bc,	// (0x000313aa) volume_small2_pane_g4

0x68c5,	// (0x000313b3) volume_small2_pane_g5

0x68ce,	// (0x000313bc) volume_small2_pane_g6

0x68d7,	// (0x000313c5) volume_small2_pane_g7

0x68e0,	// (0x000313ce) volume_small2_pane_g8

0x68e9,	// (0x000313d7) volume_small2_pane_g9

0x68f2,	// (0x000313e0) volume_small2_pane_g10

0x0009,

0xfc49,	// (0x0003a737) volume_small2_pane_g

0xc624,	// (0x00037112) fep_vkb_top_text_pane_g1_ParamLimits

0xc63f,	// (0x0003712d) fep_vkb_top_text_pane_t1_ParamLimits

0xc8b7,	// (0x000373a5) popup_preview_fixed_window_g3_ParamLimits

0xc8b7,	// (0x000373a5) popup_preview_fixed_window_g3

0x961d,	// (0x0003410b) popup_toolbar_trans_pane

0xaff9,	// (0x00035ae7) aid_height_set_list_ParamLimits

0xb00a,	// (0x00035af8) aid_size_parent_ParamLimits

0x90ba,	// (0x00033ba8) list_highlight_pane_cp2_ParamLimits

0xb154,	// (0x00035c42) set_content_pane_g1_ParamLimits

0xb25d,	// (0x00035d4b) list_single_image_pane_ParamLimits

0xb25d,	// (0x00035d4b) list_single_image_pane

0xcdc3,	// (0x000378b1) aid_size_cell_image_ParamLimits

0xcdc3,	// (0x000378b1) aid_size_cell_image

0xcdd0,	// (0x000378be) grid_single_image_pane_ParamLimits

0xcdd0,	// (0x000378be) grid_single_image_pane

0x80f0,	// (0x00032bde) list_single_image_pane_g1_ParamLimits

0x80f0,	// (0x00032bde) list_single_image_pane_g1

0x80fc,	// (0x00032bea) list_single_image_pane_g2_ParamLimits

0x80fc,	// (0x00032bea) list_single_image_pane_g2

0x0001,

0xfc5e,	// (0x0003a74c) list_single_image_pane_g_ParamLimits

0xfc5e,	// (0x0003a74c) list_single_image_pane_g

0xcdde,	// (0x000378cc) list_single_image_pane_t1_ParamLimits

0xcdde,	// (0x000378cc) list_single_image_pane_t1

0xcdf4,	// (0x000378e2) cell_image_list_pane_ParamLimits

0xcdf4,	// (0x000378e2) cell_image_list_pane

0xce0a,	// (0x000378f8) cell_image_list_pane_g1

0xce13,	// (0x00037901) cell_image_list_pane_g2

0x0001,

0xfc63,	// (0x0003a751) cell_image_list_pane_g

0xce1c,	// (0x0003790a) aid_size_cell_tb_trans_pane

0x80d6,	// (0x00032bc4) bg_tb_trans_pane

0xce2e,	// (0x0003791c) grid_tb_trans_pane

0x9c02,	// (0x000346f0) bg_tb_trans_pane_g1

0x9c12,	// (0x00034700) bg_tb_trans_pane_g2

0x9c0a,	// (0x000346f8) bg_tb_trans_pane_g3

0x9c22,	// (0x00034710) bg_tb_trans_pane_g4

0x9c1a,	// (0x00034708) bg_tb_trans_pane_g5

0x9c42,	// (0x00034730) bg_tb_trans_pane_g6

0x9c3a,	// (0x00034728) bg_tb_trans_pane_g7

0x9c2a,	// (0x00034718) bg_tb_trans_pane_g8

0x9c32,	// (0x00034720) bg_tb_trans_pane_g9

0x0008,

0xfc68,	// (0x0003a756) bg_tb_trans_pane_g

0xce42,	// (0x00037930) cell_toolbar_trans_pane_ParamLimits

0xce42,	// (0x00037930) cell_toolbar_trans_pane

0xc246,	// (0x00036d34) cell_toolbar_trans_pane_g1

0xbe25,	// (0x00036913) list_form2_midp_pane_t1

0xbe33,	// (0x00036921) list_form2_midp_pane_t2

0x0001,

0xfb05,	// (0x0003a5f3) list_form2_midp_pane_t

0xbe41,	// (0x0003692f) scroll_pane_cp51_ParamLimits

0xc008,	// (0x00036af6) form2_midp_wait_pane_g1

0xc011,	// (0x00036aff) form2_midp_wait_pane_g2

0xc01a,	// (0x00036b08) form2_midp_wait_pane_g3

0x0002,

0xfb1a,	// (0x0003a608) form2_midp_wait_pane_g

0x72a4,	// (0x00031d92) list_highlight_pane_cp21_ParamLimits

0xc0a0,	// (0x00036b8e) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xc0af,	// (0x00036b9d) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xb216,	// (0x00035d04) list_single_2graphic_im_pane_ParamLimits

0xb216,	// (0x00035d04) list_single_2graphic_im_pane

0xce68,	// (0x00037956) list_single_2graphic_im_pane_g1_ParamLimits

0xce68,	// (0x00037956) list_single_2graphic_im_pane_g1

0xce79,	// (0x00037967) list_single_2graphic_im_pane_g2_ParamLimits

0xce79,	// (0x00037967) list_single_2graphic_im_pane_g2

0xce85,	// (0x00037973) list_single_2graphic_im_pane_g3_ParamLimits

0xce85,	// (0x00037973) list_single_2graphic_im_pane_g3

0x0003,

0xfc7b,	// (0x0003a769) list_single_2graphic_im_pane_g_ParamLimits

0xfc7b,	// (0x0003a769) list_single_2graphic_im_pane_g

0xcea5,	// (0x00037993) list_single_2graphic_im_pane_t1_ParamLimits

0xcea5,	// (0x00037993) list_single_2graphic_im_pane_t1

0xc8c3,	// (0x000373b1) list_single_graphic_2heading_pane_fp_ParamLimits

0xc8c3,	// (0x000373b1) list_single_graphic_2heading_pane_fp

0x7943,	// (0x00032431) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x7943,	// (0x00032431) list_single_graphic_2heading_pane_fp_g1

0xc8dc,	// (0x000373ca) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc8dc,	// (0x000373ca) list_single_graphic_2heading_pane_fp_g2

0x790c,	// (0x000323fa) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x790c,	// (0x000323fa) list_single_graphic_2heading_pane_fp_g3

0x7918,	// (0x00032406) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x7918,	// (0x00032406) list_single_graphic_2heading_pane_fp_g4

0xc8e8,	// (0x000373d6) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc8e8,	// (0x000373d6) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfba2,	// (0x0003a690) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfba2,	// (0x0003a690) list_single_graphic_2heading_pane_fp_g

0x7b10,	// (0x000325fe) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x7b10,	// (0x000325fe) list_single_graphic_2heading_pane_fp_t1

0x797b,	// (0x00032469) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x797b,	// (0x00032469) list_single_graphic_2heading_pane_fp_t2

0x7b26,	// (0x00032614) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x7b26,	// (0x00032614) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc84,	// (0x0003a772) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc84,	// (0x0003a772) list_single_graphic_2heading_pane_fp_t

0xc2e6,	// (0x00036dd4) fep_hwr_write_pane_g5_ParamLimits

0xc2e6,	// (0x00036dd4) fep_hwr_write_pane_g5

0xc2f2,	// (0x00036de0) fep_hwr_write_pane_g6_ParamLimits

0xc2f2,	// (0x00036de0) fep_hwr_write_pane_g6

0xcb98,	// (0x00037686) eswt_shell_pane_ParamLimits

0x9cf4,	// (0x000347e2) bg_popup_window_pane_cp18_ParamLimits

0xaf50,	// (0x00035a3e) heading_pane_cp70

0xccd0,	// (0x000377be) popup_eswt_tasktip_window_t1_ParamLimits

0x9750,	// (0x0003423e) aid_touch_tab_arrow_left

0x975f,	// (0x0003424d) aid_touch_tab_arrow_right

0x71ec,	// (0x00031cda) title_pane_g3_ParamLimits

0x71ec,	// (0x00031cda) title_pane_g3

0x8095,	// (0x00032b83) set_value_pane_g1

0x961d,	// (0x0003410b) popup_toolbar_trans_pane_ParamLimits

0xce1c,	// (0x0003790a) aid_size_cell_tb_trans_pane_ParamLimits

0x80d6,	// (0x00032bc4) bg_tb_trans_pane_ParamLimits

0xce2e,	// (0x0003791c) grid_tb_trans_pane_ParamLimits

0x752e,	// (0x0003201c) cont_note_pane_ParamLimits

0x752e,	// (0x0003201c) cont_note_pane

0x7e47,	// (0x00032935) cont_snote2_single_text_pane_ParamLimits

0x7e47,	// (0x00032935) cont_snote2_single_text_pane

0x7e47,	// (0x00032935) cont_snote2_single_graphic_pane_ParamLimits

0x7e47,	// (0x00032935) cont_snote2_single_graphic_pane

0xa277,	// (0x00034d65) cont_note_wait_pane_ParamLimits

0xa277,	// (0x00034d65) cont_note_wait_pane

0xa277,	// (0x00034d65) cont_note_image_pane_ParamLimits

0xa277,	// (0x00034d65) cont_note_image_pane

0xced6,	// (0x000379c4) popup_note2_window_g1_ParamLimits

0xced6,	// (0x000379c4) popup_note2_window_g1

0xcf07,	// (0x000379f5) popup_note2_window_t1_ParamLimits

0xcf07,	// (0x000379f5) popup_note2_window_t1

0xcf4c,	// (0x00037a3a) popup_note2_window_t2_ParamLimits

0xcf4c,	// (0x00037a3a) popup_note2_window_t2

0xcf91,	// (0x00037a7f) popup_note2_window_t3_ParamLimits

0xcf91,	// (0x00037a7f) popup_note2_window_t3

0xcfd6,	// (0x00037ac4) popup_note2_window_t4_ParamLimits

0xcfd6,	// (0x00037ac4) popup_note2_window_t4

0x75b2,	// (0x000320a0) popup_note2_window_t5_ParamLimits

0x75b2,	// (0x000320a0) popup_note2_window_t5

0x0004,

0xfc90,	// (0x0003a77e) popup_note2_window_t_ParamLimits

0xfc90,	// (0x0003a77e) popup_note2_window_t

0xd005,	// (0x00037af3) popup_note2_image_window_g1_ParamLimits

0xd005,	// (0x00037af3) popup_note2_image_window_g1

0xd011,	// (0x00037aff) popup_note2_image_window_g2_ParamLimits

0xd011,	// (0x00037aff) popup_note2_image_window_g2

0x0001,

0xfc9b,	// (0x0003a789) popup_note2_image_window_g_ParamLimits

0xfc9b,	// (0x0003a789) popup_note2_image_window_g

0xd023,	// (0x00037b11) popup_note2_image_window_t1_ParamLimits

0xd023,	// (0x00037b11) popup_note2_image_window_t1

0xd03b,	// (0x00037b29) popup_note2_image_window_t2_ParamLimits

0xd03b,	// (0x00037b29) popup_note2_image_window_t2

0xd053,	// (0x00037b41) popup_note2_image_window_t3_ParamLimits

0xd053,	// (0x00037b41) popup_note2_image_window_t3

0x0002,

0xfca0,	// (0x0003a78e) popup_note2_image_window_t_ParamLimits

0xfca0,	// (0x0003a78e) popup_note2_image_window_t

0xa285,	// (0x00034d73) popup_note2_wait_window_g1_ParamLimits

0xa285,	// (0x00034d73) popup_note2_wait_window_g1

0xd06f,	// (0x00037b5d) popup_note2_wait_window_g2_ParamLimits

0xd06f,	// (0x00037b5d) popup_note2_wait_window_g2

0xa29d,	// (0x00034d8b) popup_note2_wait_window_g3_ParamLimits

0xa29d,	// (0x00034d8b) popup_note2_wait_window_g3

0x0002,

0xfca7,	// (0x0003a795) popup_note2_wait_window_g_ParamLimits

0xfca7,	// (0x0003a795) popup_note2_wait_window_g

0xd07b,	// (0x00037b69) popup_note2_wait_window_t1_ParamLimits

0xd07b,	// (0x00037b69) popup_note2_wait_window_t1

0xd099,	// (0x00037b87) popup_note2_wait_window_t2_ParamLimits

0xd099,	// (0x00037b87) popup_note2_wait_window_t2

0xd0b7,	// (0x00037ba5) popup_note2_wait_window_t3_ParamLimits

0xd0b7,	// (0x00037ba5) popup_note2_wait_window_t3

0xd0c9,	// (0x00037bb7) popup_note2_wait_window_t4_ParamLimits

0xd0c9,	// (0x00037bb7) popup_note2_wait_window_t4

0x0003,

0xfcae,	// (0x0003a79c) popup_note2_wait_window_t_ParamLimits

0xfcae,	// (0x0003a79c) popup_note2_wait_window_t

0xd0db,	// (0x00037bc9) wait_bar2_pane_ParamLimits

0xd0db,	// (0x00037bc9) wait_bar2_pane

0xd0f3,	// (0x00037be1) popup_snote2_single_text_window_g1_ParamLimits

0xd0f3,	// (0x00037be1) popup_snote2_single_text_window_g1

0xd11b,	// (0x00037c09) popup_snote2_single_text_window_t1_ParamLimits

0xd11b,	// (0x00037c09) popup_snote2_single_text_window_t1

0xd167,	// (0x00037c55) popup_snote2_single_text_window_t2_ParamLimits

0xd167,	// (0x00037c55) popup_snote2_single_text_window_t2

0xd1b3,	// (0x00037ca1) popup_snote2_single_text_window_t3_ParamLimits

0xd1b3,	// (0x00037ca1) popup_snote2_single_text_window_t3

0xd1f4,	// (0x00037ce2) popup_snote2_single_text_window_t4_ParamLimits

0xd1f4,	// (0x00037ce2) popup_snote2_single_text_window_t4

0xd22a,	// (0x00037d18) popup_snote2_single_text_window_t5_ParamLimits

0xd22a,	// (0x00037d18) popup_snote2_single_text_window_t5

0x0004,

0xfcb7,	// (0x0003a7a5) popup_snote2_single_text_window_t_ParamLimits

0xfcb7,	// (0x0003a7a5) popup_snote2_single_text_window_t

0xd255,	// (0x00037d43) popup_snote2_single_graphic_window_g1_ParamLimits

0xd255,	// (0x00037d43) popup_snote2_single_graphic_window_g1

0xd27d,	// (0x00037d6b) popup_snote2_single_graphic_window_g2_ParamLimits

0xd27d,	// (0x00037d6b) popup_snote2_single_graphic_window_g2

0x0001,

0xfcc2,	// (0x0003a7b0) popup_snote2_single_graphic_window_g_ParamLimits

0xfcc2,	// (0x0003a7b0) popup_snote2_single_graphic_window_g

0xd2a5,	// (0x00037d93) popup_snote2_single_graphic_window_t1_ParamLimits

0xd2a5,	// (0x00037d93) popup_snote2_single_graphic_window_t1

0xd2f1,	// (0x00037ddf) popup_snote2_single_graphic_window_t2_ParamLimits

0xd2f1,	// (0x00037ddf) popup_snote2_single_graphic_window_t2

0xd1b3,	// (0x00037ca1) popup_snote2_single_graphic_window_t3_ParamLimits

0xd1b3,	// (0x00037ca1) popup_snote2_single_graphic_window_t3

0xd1f4,	// (0x00037ce2) popup_snote2_single_graphic_window_t4_ParamLimits

0xd1f4,	// (0x00037ce2) popup_snote2_single_graphic_window_t4

0xd22a,	// (0x00037d18) popup_snote2_single_graphic_window_t5_ParamLimits

0xd22a,	// (0x00037d18) popup_snote2_single_graphic_window_t5

0x0004,

0xfcc7,	// (0x0003a7b5) popup_snote2_single_graphic_window_t_ParamLimits

0xfcc7,	// (0x0003a7b5) popup_snote2_single_graphic_window_t

0xbceb,	// (0x000367d9) clock_nsta_pane_cp2_t1

0xbceb,	// (0x000367d9) clock_nsta_pane_cp2_t2

0x0001,

0xfadb,	// (0x0003a5c9) clock_nsta_pane_cp2_t

0x5642,	// (0x00030130) form_field_data_wide_pane_g1_ParamLimits

0x80f0,	// (0x00032bde) form_field_data_wide_pane_g2_ParamLimits

0x80f0,	// (0x00032bde) form_field_data_wide_pane_g2

0x80fc,	// (0x00032bea) form_field_data_wide_pane_g3_ParamLimits

0x80fc,	// (0x00032bea) form_field_data_wide_pane_g3

0x0002,

0xf6bf,	// (0x0003a1ad) form_field_data_wide_pane_g_ParamLimits

0xf6bf,	// (0x0003a1ad) form_field_data_wide_pane_g

0xbbf7,	// (0x000366e5) grid_touch_3_pane_ParamLimits

0xbbf7,	// (0x000366e5) grid_touch_3_pane

0xd33d,	// (0x00037e2b) cell_touch_3_pane_ParamLimits

0xd33d,	// (0x00037e2b) cell_touch_3_pane

0xc246,	// (0x00036d34) cell_touch_3_pane_g1

0xc246,	// (0x00036d34) cell_touch_3_pane_g2

0x0001,

0xfb60,	// (0x0003a64e) cell_touch_3_pane_g

0x75e4,	// (0x000320d2) cont_query_data_pane

0x75ec,	// (0x000320da) cont_query_data_pane_cp1

0xd370,	// (0x00037e5e) button_value_adjust_pane_cp7

0xd378,	// (0x00037e66) query_popup_pane_cp3

0x8810,	// (0x000332fe) bg_popup_sub_pane_cp22_ParamLimits

0x5a02,	// (0x000304f0) navi_navi_volume_pane_cp2

0x5a1d,	// (0x0003050b) popup_side_volume_key_window_g2

0x5a2c,	// (0x0003051a) popup_side_volume_key_window_g3

0x0002,

0xf751,	// (0x0003a23f) popup_side_volume_key_window_g

0x5a49,	// (0x00030537) popup_side_volume_key_window_t2

0x0001,

0xf758,	// (0x0003a246) popup_side_volume_key_window_t

0x8acb,	// (0x000335b9) popup_side_volume_key_window_ParamLimits

0x523a,	// (0x0002fd28) list_double_graphic_pane_g4_ParamLimits

0x523a,	// (0x0002fd28) list_double_graphic_pane_g4

0xb245,	// (0x00035d33) list_single_2heading_msg_pane_ParamLimits

0xb245,	// (0x00035d33) list_single_2heading_msg_pane

0x7b46,	// (0x00032634) list_single_2heading_msg_pane_g1_ParamLimits

0x7b46,	// (0x00032634) list_single_2heading_msg_pane_g1

0x4213,	// (0x0002ed01) list_single_2heading_msg_pane_g2_ParamLimits

0x4213,	// (0x0002ed01) list_single_2heading_msg_pane_g2

0x7b52,	// (0x00032640) list_single_2heading_msg_pane_g3_ParamLimits

0x7b52,	// (0x00032640) list_single_2heading_msg_pane_g3

0x7b5e,	// (0x0003264c) list_single_2heading_msg_pane_g4_ParamLimits

0x7b5e,	// (0x0003264c) list_single_2heading_msg_pane_g4

0x0003,

0xfcd2,	// (0x0003a7c0) list_single_2heading_msg_pane_g_ParamLimits

0xfcd2,	// (0x0003a7c0) list_single_2heading_msg_pane_g

0x7b76,	// (0x00032664) list_single_2heading_msg_pane_t1_ParamLimits

0x7b76,	// (0x00032664) list_single_2heading_msg_pane_t1

0x7b9e,	// (0x0003268c) list_single_2heading_msg_pane_t2_ParamLimits

0x7b9e,	// (0x0003268c) list_single_2heading_msg_pane_t2

0x7bd2,	// (0x000326c0) list_single_2heading_msg_pane_t3_ParamLimits

0x7bd2,	// (0x000326c0) list_single_2heading_msg_pane_t3

0x7c0b,	// (0x000326f9) list_single_2heading_msg_pane_t4_ParamLimits

0x7c0b,	// (0x000326f9) list_single_2heading_msg_pane_t4

0x0003,

0xfcdb,	// (0x0003a7c9) list_single_2heading_msg_pane_t_ParamLimits

0xfcdb,	// (0x0003a7c9) list_single_2heading_msg_pane_t

0x71f8,	// (0x00031ce6) title_pane_g4_ParamLimits

0x71f8,	// (0x00031ce6) title_pane_g4

0x580e,	// (0x000302fc) title_pane_stacon_g3_ParamLimits

0x580e,	// (0x000302fc) title_pane_stacon_g3

0xce99,	// (0x00037987) list_single_2graphic_im_pane_g4_ParamLimits

0xce99,	// (0x00037987) list_single_2graphic_im_pane_g4

0xaced,	// (0x000357db) popup_side_volume_key_window_cp

0xb563,	// (0x00036051) main_idle_act2_pane_t1

0x5ea2,	// (0x00030990) toolbar_button_pane_g10

0x803f,	// (0x00032b2d) popup_toolbar_window_cp1

0xbcdc,	// (0x000367ca) clock_nsta_pane_cp_t1

0xbcdc,	// (0x000367ca) clock_nsta_pane_cp_t2

0x0001,

0xfad6,	// (0x0003a5c4) clock_nsta_pane_cp_t

0x5a02,	// (0x000304f0) navi_navi_volume_pane_cp2_ParamLimits

0x5a11,	// (0x000304ff) popup_side_volume_key_window_g1_ParamLimits

0x5a1d,	// (0x0003050b) popup_side_volume_key_window_g2_ParamLimits

0x5a2c,	// (0x0003051a) popup_side_volume_key_window_g3_ParamLimits

0xf751,	// (0x0003a23f) popup_side_volume_key_window_g_ParamLimits

0x64e1,	// (0x00030fcf) fep_hwr_aid_pane

0x658a,	// (0x00031078) bg_fep_hwr_top_pane_g4_ParamLimits

0xc2b6,	// (0x00036da4) fep_hwr_top_pane_g1_ParamLimits

0xc2c8,	// (0x00036db6) fep_hwr_top_pane_g2_ParamLimits

0x65aa,	// (0x00031098) fep_hwr_top_pane_g3_ParamLimits

0xfb2b,	// (0x0003a619) fep_hwr_top_pane_g_ParamLimits

0x65bf,	// (0x000310ad) fep_hwr_top_text_pane_ParamLimits

0xaaa2,	// (0x00035590) aid_touch_tab_arrow_arrow_2

0xaaab,	// (0x00035599) aid_touch_tab_arrow_left_2

0x64f5,	// (0x00030fe3) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x652c,	// (0x0003101a) fep_hwr_prediction_pane

0xc41e,	// (0x00036f0c) fep_vkb_prediction_pane

0xc524,	// (0x00037012) fep_vkb_side_pane_g3_ParamLimits

0xc524,	// (0x00037012) fep_vkb_side_pane_g3

0x674e,	// (0x0003123c) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x67bf,	// (0x000312ad) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x67cc,	// (0x000312ba) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbda,	// (0x0003a6c8) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x68fb,	// (0x000313e9) fep_hwr_prediction_pane_g1

0x6905,	// (0x000313f3) fep_hwr_prediction_pane_g2

0x690d,	// (0x000313fb) fep_hwr_prediction_pane_g3

0x6915,	// (0x00031403) fep_hwr_prediction_pane_g4

0x0003,

0xfce4,	// (0x0003a7d2) fep_hwr_prediction_pane_g

0xd39f,	// (0x00037e8d) fep_vkb_prediction_pane_g1

0xd3a9,	// (0x00037e97) fep_vkb_prediction_pane_g2

0xd3b1,	// (0x00037e9f) fep_vkb_prediction_pane_g3

0xd3b9,	// (0x00037ea7) fep_vkb_prediction_pane_g4

0x0003,

0xfced,	// (0x0003a7db) fep_vkb_prediction_pane_g

0x6247,	// (0x00030d35) slider_set_pane_g3

0x625b,	// (0x00030d49) slider_set_pane_g4

0x6273,	// (0x00030d61) slider_set_pane_g5

0x6247,	// (0x00030d35) slider_set_pane_g6

0x6289,	// (0x00030d77) slider_set_pane_g7

0xb19b,	// (0x00035c89) slider_form_pane_g3

0xb1a4,	// (0x00035c92) slider_form_pane_g4

0xb1ac,	// (0x00035c9a) slider_form_pane_g5

0xb19b,	// (0x00035c89) slider_form_pane_g6

0xb1b4,	// (0x00035ca2) slider_form_pane_g7

0xb831,	// (0x0003631f) slider_set_pane_vc_g3

0xb83a,	// (0x00036328) slider_set_pane_vc_g4

0xb843,	// (0x00036331) slider_set_pane_vc_g5

0xb831,	// (0x0003631f) slider_set_pane_vc_g6

0xb84c,	// (0x0003633a) slider_set_pane_vc_g7

0xb831,	// (0x0003631f) slider_form_pane_vc_g1

0xb83a,	// (0x00036328) slider_form_pane_vc_g2

0xb843,	// (0x00036331) slider_form_pane_vc_g3

0xb831,	// (0x0003631f) slider_form_pane_vc_g4

0xba01,	// (0x000364ef) slider_form_pane_vc_g5

0x0004,

0xfabc,	// (0x0003a5aa) slider_form_pane_vc_g

0x71b0,	// (0x00031c9e) main_idle_act3_pane

0xd3c1,	// (0x00037eaf) ai3_links_pane

0xd3ca,	// (0x00037eb8) popup_ai3_data_window_ParamLimits

0xd3ca,	// (0x00037eb8) popup_ai3_data_window

0x71b0,	// (0x00031c9e) grid_ai3_links_pane

0xd3e8,	// (0x00037ed6) cell_ai3_links_pane_ParamLimits

0xd3e8,	// (0x00037ed6) cell_ai3_links_pane

0xd402,	// (0x00037ef0) bg_popup_sub_pane_cp11

0xd40f,	// (0x00037efd) cell_ai3_links_pane_g1

0x71b0,	// (0x00031c9e) bg_popup_sub_pane_cp12

0xd434,	// (0x00037f22) heading_ai3_data_pane

0xd43c,	// (0x00037f2a) list_ai3_gene_pane

0xd448,	// (0x00037f36) popup_ai3_data_window_g1

0xd450,	// (0x00037f3e) heading_ai3_data_pane_g1

0xd458,	// (0x00037f46) heading_ai3_data_pane_t1

0xd466,	// (0x00037f54) list_double_ai3_gene_pane_ParamLimits

0xd466,	// (0x00037f54) list_double_ai3_gene_pane

0xd473,	// (0x00037f61) list_single_ai3_gene_pane_ParamLimits

0xd473,	// (0x00037f61) list_single_ai3_gene_pane

0xc20b,	// (0x00036cf9) list_highlight_pane_cp7_ParamLimits

0xc20b,	// (0x00036cf9) list_highlight_pane_cp7

0xd480,	// (0x00037f6e) list_single_a13_gene_pane_t1_ParamLimits

0xd480,	// (0x00037f6e) list_single_a13_gene_pane_t1

0xd497,	// (0x00037f85) list_single_ai3_gene_pane_g1

0xd4a0,	// (0x00037f8e) list_single_ai3_gene_pane_g2

0x0001,

0xfcf6,	// (0x0003a7e4) list_single_ai3_gene_pane_g

0xd4a8,	// (0x00037f96) list_double_ai3_gene_pane_g1_ParamLimits

0xd4a8,	// (0x00037f96) list_double_ai3_gene_pane_g1

0xd4b4,	// (0x00037fa2) list_double_ai3_gene_pane_t1_ParamLimits

0xd4b4,	// (0x00037fa2) list_double_ai3_gene_pane_t1

0xd4d0,	// (0x00037fbe) list_double_ai3_gene_pane_t2_ParamLimits

0xd4d0,	// (0x00037fbe) list_double_ai3_gene_pane_t2

0xd4e5,	// (0x00037fd3) list_double_ai3_gene_pane_t3_ParamLimits

0xd4e5,	// (0x00037fd3) list_double_ai3_gene_pane_t3

0x0002,

0xfcfb,	// (0x0003a7e9) list_double_ai3_gene_pane_t_ParamLimits

0xfcfb,	// (0x0003a7e9) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x7b3c,	// (0x0003262a) aid_size_min_col_2

0xd389,	// (0x00037e77) aid_size_min_msg_ParamLimits

0xd389,	// (0x00037e77) aid_size_min_msg

0xc630,	// (0x0003711e) fep_vkb_top_text_pane_g2_ParamLimits

0xc630,	// (0x0003711e) fep_vkb_top_text_pane_g2

0x0001,

0xfb5b,	// (0x0003a649) fep_vkb_top_text_pane_g_ParamLimits

0xfb5b,	// (0x0003a649) fep_vkb_top_text_pane_g

0x71b0,	// (0x00031c9e) main_hc_apps_shell_pane

0xd502,	// (0x00037ff0) grid_hc_apps_pane_ParamLimits

0xd502,	// (0x00037ff0) grid_hc_apps_pane

0xd511,	// (0x00037fff) list_hc_apps_pane

0xd519,	// (0x00038007) scroll_pane_cp37_ParamLimits

0xd519,	// (0x00038007) scroll_pane_cp37

0xd525,	// (0x00038013) cell_hc_apps_pane_ParamLimits

0xd525,	// (0x00038013) cell_hc_apps_pane

0xd5dd,	// (0x000380cb) cell_hc_apps_pane_g1_ParamLimits

0xd5dd,	// (0x000380cb) cell_hc_apps_pane_g1

0xd60e,	// (0x000380fc) cell_hc_apps_pane_g2_ParamLimits

0xd60e,	// (0x000380fc) cell_hc_apps_pane_g2

0xd62a,	// (0x00038118) cell_hc_apps_pane_g3_ParamLimits

0xd62a,	// (0x00038118) cell_hc_apps_pane_g3

0x0002,

0xfd02,	// (0x0003a7f0) cell_hc_apps_pane_g_ParamLimits

0xfd02,	// (0x0003a7f0) cell_hc_apps_pane_g

0xd64c,	// (0x0003813a) cell_hc_apps_pane_t1_ParamLimits

0xd64c,	// (0x0003813a) cell_hc_apps_pane_t1

0x752e,	// (0x0003201c) grid_highlight_pane_cp10_ParamLimits

0x752e,	// (0x0003201c) grid_highlight_pane_cp10

0xd68c,	// (0x0003817a) list_single_hc_apps_pane_ParamLimits

0xd68c,	// (0x0003817a) list_single_hc_apps_pane

0xd6cb,	// (0x000381b9) list_single_hc_apps_pane_g1

0x7c30,	// (0x0003271e) list_single_hc_apps_pane_g2

0x0001,

0xfd09,	// (0x0003a7f7) list_single_hc_apps_pane_g

0x7c49,	// (0x00032737) list_single_hc_apps_pane_g2_copy1

0x7c65,	// (0x00032753) list_single_hc_apps_pane_t1

0x72a4,	// (0x00031d92) bg_set_opt_pane_cp_ParamLimits

0x5011,	// (0x0002faff) setting_slider_pane_t1_ParamLimits

0x5027,	// (0x0002fb15) setting_slider_pane_t2_ParamLimits

0x5041,	// (0x0002fb2f) setting_slider_pane_t3_ParamLimits

0xf5a2,	// (0x0003a090) setting_slider_pane_t_ParamLimits

0x5059,	// (0x0002fb47) slider_set_pane_ParamLimits

0x5d34,	// (0x00030822) control_pane_g5_ParamLimits

0x5d34,	// (0x00030822) control_pane_g5

0xafbc,	// (0x00035aaa) slider_set_pane_g1_ParamLimits

0x623b,	// (0x00030d29) slider_set_pane_g2_ParamLimits

0x6247,	// (0x00030d35) slider_set_pane_g3_ParamLimits

0x625b,	// (0x00030d49) slider_set_pane_g4_ParamLimits

0x6273,	// (0x00030d61) slider_set_pane_g5_ParamLimits

0x6247,	// (0x00030d35) slider_set_pane_g6_ParamLimits

0x6289,	// (0x00030d77) slider_set_pane_g7_ParamLimits

0xf99d,	// (0x0003a48b) slider_set_pane_g_ParamLimits

0x8bb0,	// (0x0003369e) navi_icon_text_pane_ParamLimits

0x970f,	// (0x000341fd) aid_fill_nsta_2_ParamLimits

0x9750,	// (0x0003423e) aid_touch_tab_arrow_left_ParamLimits

0x975f,	// (0x0003424d) aid_touch_tab_arrow_right_ParamLimits

0x97cc,	// (0x000342ba) clock_nsta_pane_ParamLimits

0xaa7e,	// (0x0003556c) navi_icon_pane_g1_ParamLimits

0xaa8d,	// (0x0003557b) navi_text_pane_t1_ParamLimits

0xbdf9,	// (0x000368e7) navi_icon_text_pane_g1_ParamLimits

0xbe08,	// (0x000368f6) navi_icon_text_pane_t1_ParamLimits

0xd6cb,	// (0x000381b9) list_single_hc_apps_pane_g1_ParamLimits

0x7c30,	// (0x0003271e) list_single_hc_apps_pane_g2_ParamLimits

0xfd09,	// (0x0003a7f7) list_single_hc_apps_pane_g_ParamLimits

0x7c49,	// (0x00032737) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x7c65,	// (0x00032753) list_single_hc_apps_pane_t1_ParamLimits

0x4f1b,	// (0x0002fa09) popup_toolbar2_fixed_window_ParamLimits

0x4f1b,	// (0x0002fa09) popup_toolbar2_fixed_window

0x9613,	// (0x00034101) popup_toolbar2_float_window

0x71b0,	// (0x00031c9e) bg_popup_sub_pane_cp27

0xd6e4,	// (0x000381d2) grid_toolbar2_float_pane

0x71b0,	// (0x00031c9e) bg_popup_sub_pane_cp26

0xd6e4,	// (0x000381d2) grid_toolbar2_fixed_pane

0xd6ec,	// (0x000381da) cell_toolbar2_fixed_pane_ParamLimits

0xd6ec,	// (0x000381da) cell_toolbar2_fixed_pane

0xd6fc,	// (0x000381ea) cell_toolbar2_fixed_pane_g1

0xd705,	// (0x000381f3) toolbar2_fixed_button_pane

0x9c02,	// (0x000346f0) toolbar2_fixed_button_pane_g1

0x9c12,	// (0x00034700) toolbar2_fixed_button_pane_g2

0x9c0a,	// (0x000346f8) toolbar2_fixed_button_pane_g3

0x9c22,	// (0x00034710) toolbar2_fixed_button_pane_g4

0x9c1a,	// (0x00034708) toolbar2_fixed_button_pane_g5

0x9c2a,	// (0x00034718) toolbar2_fixed_button_pane_g6

0x9c32,	// (0x00034720) toolbar2_fixed_button_pane_g7

0x9c42,	// (0x00034730) toolbar2_fixed_button_pane_g8

0x9c3a,	// (0x00034728) toolbar2_fixed_button_pane_g9

0x0008,

0xf89f,	// (0x0003a38d) toolbar2_fixed_button_pane_g

0xd70d,	// (0x000381fb) cell_toolbar2_float_pane_ParamLimits

0xd70d,	// (0x000381fb) cell_toolbar2_float_pane

0xd71e,	// (0x0003820c) cell_toolbar2_float_pane_g1

0xd705,	// (0x000381f3) toolbar2_fixed_button_pane_cp

0xc38c,	// (0x00036e7a) fep_vkb_accented_list_pane_ParamLimits

0xc38c,	// (0x00036e7a) fep_vkb_accented_list_pane

0x672e,	// (0x0003121c) bg_popup_fep_shadow_pane_g9

0x8d34,	// (0x00033822) bg_popup_fep_shadow_pane_cp3

0x823f,	// (0x00032d2d) list_accented_list_pane

0xd727,	// (0x00038215) list_single_accented_list_pane_ParamLimits

0xd727,	// (0x00038215) list_single_accented_list_pane

0x8d34,	// (0x00033822) list_highlight_pane_cp10

0xd738,	// (0x00038226) list_single_accented_list_pane_t1

0x9559,	// (0x00034047) popup_slider_window_ParamLimits

0x9559,	// (0x00034047) popup_slider_window

0xd380,	// (0x00037e6e) aid_indentation_list_msg

0xd804,	// (0x000382f2) bg_popup_window_pane_cp19

0xd872,	// (0x00038360) popup_slider_window_g1

0xd88e,	// (0x0003837c) popup_slider_window_g2

0xd8aa,	// (0x00038398) popup_slider_window_g3

0x0005,

0xfd0e,	// (0x0003a7fc) popup_slider_window_g

0xd906,	// (0x000383f4) popup_slider_window_t1

0xd97a,	// (0x00038468) small_volume_slider_vertical_pane

0xc246,	// (0x00036d34) small_volume_slider_vertical_pane_g1

0xc246,	// (0x00036d34) small_volume_slider_vertical_pane_g2

0xd996,	// (0x00038484) small_volume_slider_vertical_pane_g3

0x0002,

0xfd20,	// (0x0003a80e) small_volume_slider_vertical_pane_g

0x4cc9,	// (0x0002f7b7) area_side_right_pane_ParamLimits

0x4cc9,	// (0x0002f7b7) area_side_right_pane

0x691d,	// (0x0003140b) aid_size_side_button_ParamLimits

0x691d,	// (0x0003140b) aid_size_side_button

0x6931,	// (0x0003141f) grid_sctrl_middle_pane_ParamLimits

0x6931,	// (0x0003141f) grid_sctrl_middle_pane

0x6951,	// (0x0003143f) sctrl_sk_bottom_pane

0x6962,	// (0x00031450) sctrl_sk_top_pane

0x6974,	// (0x00031462) aid_touch_sctrl_top

0x6981,	// (0x0003146f) bg_sctrl_sk_pane_ParamLimits

0x6981,	// (0x0003146f) bg_sctrl_sk_pane

0x698f,	// (0x0003147d) sctrl_sk_top_pane_g1

0x699c,	// (0x0003148a) sctrl_sk_top_pane_t1

0x6974,	// (0x00031462) aid_touch_sctrl_bottom

0x6981,	// (0x0003146f) bg_sctrl_sk_pane_cp_ParamLimits

0x6981,	// (0x0003146f) bg_sctrl_sk_pane_cp

0x69b7,	// (0x000314a5) sctrl_sk_bottom_pane_g1

0x699c,	// (0x0003148a) sctrl_sk_bottom_pane_t1

0x69c0,	// (0x000314ae) cell_sctrl_middle_pane_ParamLimits

0x69c0,	// (0x000314ae) cell_sctrl_middle_pane

0x69dd,	// (0x000314cb) aid_touch_sctrl_middle_ParamLimits

0x69dd,	// (0x000314cb) aid_touch_sctrl_middle

0x69ef,	// (0x000314dd) bg_sctrl_middle_pane_ParamLimits

0x69ef,	// (0x000314dd) bg_sctrl_middle_pane

0x674e,	// (0x0003123c) cell_sctrl_middle_pane_g1_ParamLimits

0x674e,	// (0x0003123c) cell_sctrl_middle_pane_g1

0x69fd,	// (0x000314eb) cell_sctrl_middle_pane_g2_ParamLimits

0x69fd,	// (0x000314eb) cell_sctrl_middle_pane_g2

0x0001,

0xfd2c,	// (0x0003a81a) cell_sctrl_middle_pane_g_ParamLimits

0xfd2c,	// (0x0003a81a) cell_sctrl_middle_pane_g

0x9c02,	// (0x000346f0) bg_sctrl_middle_pane_g1

0x9c0a,	// (0x000346f8) bg_sctrl_middle_pane_g2

0x9c12,	// (0x00034700) bg_sctrl_middle_pane_g3

0x9c1a,	// (0x00034708) bg_sctrl_middle_pane_g4

0x9c22,	// (0x00034710) bg_sctrl_middle_pane_g5

0x9c2a,	// (0x00034718) bg_sctrl_middle_pane_g6

0x9c32,	// (0x00034720) bg_sctrl_middle_pane_g7

0x9c3a,	// (0x00034728) bg_sctrl_middle_pane_g8

0x0007,

0xfd31,	// (0x0003a81f) bg_sctrl_middle_pane_g

0x9c42,	// (0x00034730) bg_sctrl_middle_pane_g8_copy1

0x9c02,	// (0x000346f0) bg_sctrl_sk_pane_g1

0x9c12,	// (0x00034700) bg_sctrl_sk_pane_g2

0x9c0a,	// (0x000346f8) bg_sctrl_sk_pane_g3

0x0008,

0xf89f,	// (0x0003a38d) bg_sctrl_sk_pane_g

0x8005,	// (0x00032af3) aid_size_touch_scroll_bar

0x9c22,	// (0x00034710) bg_sctrl_sk_pane_g4

0x9c1a,	// (0x00034708) bg_sctrl_sk_pane_g5

0x9c2a,	// (0x00034718) bg_sctrl_sk_pane_g6

0x9c32,	// (0x00034720) bg_sctrl_sk_pane_g7

0x9c42,	// (0x00034730) bg_sctrl_sk_pane_g8

0x9c3a,	// (0x00034728) bg_sctrl_sk_pane_g9

0x9164,	// (0x00033c52) popup_fep_china_hwr2_fs_candidate_window

0x916e,	// (0x00033c5c) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x916e,	// (0x00033c5c) popup_fep_china_hwr2_fs_control_window

0x674e,	// (0x0003123c) sctrl_sk_top_pane_g2

0x0001,

0xfd27,	// (0x0003a815) sctrl_sk_top_pane_g

0xd99f,	// (0x0003848d) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd99f,	// (0x0003848d) aid_fep_china_hwr2_fs_cell

0xd9b2,	// (0x000384a0) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd9b2,	// (0x000384a0) bg_popup_fep_shadow_pane_cp4

0xd9cb,	// (0x000384b9) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd9cb,	// (0x000384b9) bg_popup_fep_shadow_pane_cp5

0xd9dd,	// (0x000384cb) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd9dd,	// (0x000384cb) popup_fep_china_hwr2_fs_control_bar_grid

0xd9ed,	// (0x000384db) popup_fep_china_hwr2_fs_control_funtion_grid

0xd9f5,	// (0x000384e3) aid_fep_china_hwr2_fs_candi_cell

0x71b0,	// (0x00031c9e) bg_popup_fep_shadow_pane_cp6

0xd9ff,	// (0x000384ed) popup_fep_china_hwr2_fs_candidate_grid

0xda09,	// (0x000384f7) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xda09,	// (0x000384f7) cell_fep_china_hwr2_fs_funtion_grid

0xc246,	// (0x00036d34) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xda21,	// (0x0003850f) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xda21,	// (0x0003850f) cell_fep_china_hwr2_fs_funtion_grid_g1

0xda2f,	// (0x0003851d) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xda2f,	// (0x0003851d) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd42,	// (0x0003a830) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd42,	// (0x0003a830) cell_fep_china_hwr2_fs_funtion_grid_g

0xda45,	// (0x00038533) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xda45,	// (0x00038533) cell_fep_china_hwr2_fs_funtion_grid_t1

0xda5a,	// (0x00038548) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xda5a,	// (0x00038548) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd47,	// (0x0003a835) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd47,	// (0x0003a835) cell_fep_china_hwr2_fs_funtion_grid_t

0xda76,	// (0x00038564) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xda7e,	// (0x0003856c) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xda86,	// (0x00038574) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd4c,	// (0x0003a83a) popup_fep_china_hwr2_fs_control_bar_grid_g

0xda8e,	// (0x0003857c) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xda8e,	// (0x0003857c) cell_fep_china_hwr2_fs_candidate_grid

0xdaad,	// (0x0003859b) popup_fep_china_hwr2_fs_candidate_grid_g20

0xdab5,	// (0x000385a3) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc246,	// (0x00036d34) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc246,	// (0x00036d34) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb60,	// (0x0003a64e) cell_fep_china_hwr2_fs_candidate_grid_g

0xdabd,	// (0x000385ab) cell_fep_china_hwr2_fs_candidate_grid_t1

0x97df,	// (0x000342cd) clock_nsta_pane_cp_24_ParamLimits

0x97df,	// (0x000342cd) clock_nsta_pane_cp_24

0x985f,	// (0x0003434d) indicator_nsta_pane_cp_24_ParamLimits

0x985f,	// (0x0003434d) indicator_nsta_pane_cp_24

0xa8fa,	// (0x000353e8) heading_pane_g1

0x0001,

0xf904,	// (0x0003a3f2) heading_pane_g

0xb3aa,	// (0x00035e98) grid_sct_catagory_button_pane

0xb3dc,	// (0x00035eca) scroll_pane_cp5_ParamLimits

0xbe4d,	// (0x0003693b) button_value_adjust_pane_cp5_ParamLimits

0xbe4d,	// (0x0003693b) button_value_adjust_pane_cp5

0xbf32,	// (0x00036a20) form2_midp_time_pane_ParamLimits

0xdacb,	// (0x000385b9) cell_sct_catagory_button_pane_ParamLimits

0xdacb,	// (0x000385b9) cell_sct_catagory_button_pane

0xc20b,	// (0x00036cf9) bg_button_pane_cp01_ParamLimits

0xc20b,	// (0x00036cf9) bg_button_pane_cp01

0xc246,	// (0x00036d34) cell_sct_catagory_button_pane_g1

0x959a,	// (0x00034088) popup_tb_extension_window

0xdadd,	// (0x000385cb) aid_size_cell_ext_ParamLimits

0xdadd,	// (0x000385cb) aid_size_cell_ext

0x752e,	// (0x0003201c) bg_tb_trans_pane_cp1_ParamLimits

0x752e,	// (0x0003201c) bg_tb_trans_pane_cp1

0xdafd,	// (0x000385eb) grid_tb_ext_pane_ParamLimits

0xdafd,	// (0x000385eb) grid_tb_ext_pane

0xdb2d,	// (0x0003861b) cell_tb_ext_pane_ParamLimits

0xdb2d,	// (0x0003861b) cell_tb_ext_pane

0xdb44,	// (0x00038632) cell_tb_ext_pane_g1_ParamLimits

0xdb44,	// (0x00038632) cell_tb_ext_pane_g1

0xdb61,	// (0x0003864f) cell_tb_ext_pane_t1

0x752e,	// (0x0003201c) list_highlight_pane_cp11_ParamLimits

0x752e,	// (0x0003201c) list_highlight_pane_cp11

0x4f3a,	// (0x0002fa28) popup_uni_indicator_window_ParamLimits

0x4f3a,	// (0x0002fa28) popup_uni_indicator_window

0x80d6,	// (0x00032bc4) bg_popup_sub_pane_cp14

0xdb7c,	// (0x0003866a) list_uniindi_pane

0xdb88,	// (0x00038676) uniindi_top_pane

0x752e,	// (0x0003201c) bg_uniindi_top_pane

0xdba9,	// (0x00038697) uniindi_top_pane_g1

0xdbbf,	// (0x000386ad) uniindi_top_pane_g2

0x0003,

0xfd53,	// (0x0003a841) uniindi_top_pane_g

0xdbe9,	// (0x000386d7) uniindi_top_pane_t1

0xdc15,	// (0x00038703) list_single_uniindi_pane_ParamLimits

0xdc15,	// (0x00038703) list_single_uniindi_pane

0xc246,	// (0x00036d34) bg_uniindi_top_pane_g1

0xdc27,	// (0x00038715) list_single_uniindi_pane_g1

0xdc3a,	// (0x00038728) list_single_uniindi_pane_t1

0x4da6,	// (0x0002f894) control_bg_pane

0xdc5f,	// (0x0003874d) bg_sctrl_sk_pane_cp1

0xdc68,	// (0x00038756) bg_sctrl_sk_pane_cp2

0xdc71,	// (0x0003875f) control_bg_pane_g1

0xdc7a,	// (0x00038768) control_bg_pane_g2

0x0001,

0xfd5c,	// (0x0003a84a) control_bg_pane_g

0xbca1,	// (0x0003678f) cell_indicator_nsta_pane_g1_ParamLimits

0xbcaf,	// (0x0003679d) cell_indicator_nsta_pane_g2_ParamLimits

0xfad1,	// (0x0003a5bf) cell_indicator_nsta_pane_g_ParamLimits

0x78f9,	// (0x000323e7) form2_midp_time_pane_t1_ParamLimits

0x7e47,	// (0x00032935) main_idle_act4_pane_ParamLimits

0x7e47,	// (0x00032935) main_idle_act4_pane

0x959a,	// (0x00034088) popup_tb_extension_window_ParamLimits

0xdb1f,	// (0x0003860d) tb_ext_find_pane_ParamLimits

0xdb1f,	// (0x0003860d) tb_ext_find_pane

0xdc83,	// (0x00038771) ai_gene_pane_1_cp1

0x8e7d,	// (0x0003396b) ai_gene_pane_2_cp1

0xdc8b,	// (0x00038779) list_single_idle_plugin_calendar_pane

0xdc94,	// (0x00038782) list_single_idle_plugin_notification_pane

0xdc9d,	// (0x0003878b) list_single_idle_plugin_player_pane

0xdca6,	// (0x00038794) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdca6,	// (0x00038794) list_single_idle_plugin_shortcut_pane

0xdcc8,	// (0x000387b6) main_idle_act4_pane_t1

0xdcda,	// (0x000387c8) main_idle_act4_pane_t2

0x0001,

0xfd61,	// (0x0003a84f) main_idle_act4_pane_t

0xdcec,	// (0x000387da) middle_sk_idle_act4_pane_ParamLimits

0xdcec,	// (0x000387da) middle_sk_idle_act4_pane

0xdd02,	// (0x000387f0) popup_clock_digital_analogue_window_cp2

0xdd1c,	// (0x0003880a) shortcut_wheel_idle_act4_pane_ParamLimits

0xdd1c,	// (0x0003880a) shortcut_wheel_idle_act4_pane

0xc246,	// (0x00036d34) shortcut_wheel_idle_act4_pane_g1

0xc246,	// (0x00036d34) shortcut_wheel_idle_act4_pane_g2

0xc246,	// (0x00036d34) shortcut_wheel_idle_act4_pane_g3

0xc246,	// (0x00036d34) shortcut_wheel_idle_act4_pane_g4

0xc246,	// (0x00036d34) shortcut_wheel_idle_act4_pane_g5

0xdd30,	// (0x0003881e) shortcut_wheel_idle_act4_pane_g6

0xdd38,	// (0x00038826) shortcut_wheel_idle_act4_pane_g7

0xdd40,	// (0x0003882e) shortcut_wheel_idle_act4_pane_g8

0xdd48,	// (0x00038836) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd66,	// (0x0003a854) shortcut_wheel_idle_act4_pane_g

0xc4d0,	// (0x00036fbe) middle_sk_idle_act4_pane_g1_ParamLimits

0xc4d0,	// (0x00036fbe) middle_sk_idle_act4_pane_g1

0xddac,	// (0x0003889a) middle_sk_idle_act4_pane_g2_ParamLimits

0xddac,	// (0x0003889a) middle_sk_idle_act4_pane_g2

0x0001,

0xfd89,	// (0x0003a877) middle_sk_idle_act4_pane_g_ParamLimits

0xfd89,	// (0x0003a877) middle_sk_idle_act4_pane_g

0xddb8,	// (0x000388a6) middle_sk_idle_act4_pane_t1_ParamLimits

0xddb8,	// (0x000388a6) middle_sk_idle_act4_pane_t1

0xddd5,	// (0x000388c3) grid_ai_shortcut_pane_ParamLimits

0xddd5,	// (0x000388c3) grid_ai_shortcut_pane

0xddee,	// (0x000388dc) list_highlight_pane_cp16_ParamLimits

0xddee,	// (0x000388dc) list_highlight_pane_cp16

0xddfb,	// (0x000388e9) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xddfb,	// (0x000388e9) list_single_idle_plugin_shortcut_pane_g1

0xde07,	// (0x000388f5) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xde07,	// (0x000388f5) list_single_idle_plugin_shortcut_pane_g2

0xde21,	// (0x0003890f) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xde21,	// (0x0003890f) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd8e,	// (0x0003a87c) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd8e,	// (0x0003a87c) list_single_idle_plugin_shortcut_pane_g

0xde34,	// (0x00038922) cell_ai_shortcut_pane_ParamLimits

0xde34,	// (0x00038922) cell_ai_shortcut_pane

0xde57,	// (0x00038945) cell_ai_shortcut_pane_g1_ParamLimits

0xde57,	// (0x00038945) cell_ai_shortcut_pane_g1

0xdc83,	// (0x00038771) ai_gene_pane_1_cp2

0xde79,	// (0x00038967) ai_gene_pane_2_cp2

0xde81,	// (0x0003896f) list_highlight_pane_cp15

0xde8a,	// (0x00038978) list_single_idle_plugin_calendar_pane_g1

0xde81,	// (0x0003896f) list_highlight_pane_cp17

0xde92,	// (0x00038980) list_single_idle_plugin_calendar_pane_g1_copy1

0xde9a,	// (0x00038988) list_single_idle_plugin_player_pane_g1

0xb611,	// (0x000360ff) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd95,	// (0x0003a883) list_single_idle_plugin_player_pane_g

0xdea2,	// (0x00038990) list_single_idle_plugin_player_pane_t1

0xdeb0,	// (0x0003899e) list_single_idle_plugin_player_pane_t2

0xdebe,	// (0x000389ac) list_single_idle_plugin_player_pane_t3

0xdecc,	// (0x000389ba) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd9a,	// (0x0003a888) list_single_idle_plugin_player_pane_t

0xdeda,	// (0x000389c8) wait_bar_pane_cp15

0xdee2,	// (0x000389d0) grid_ai_notification_pane

0xb611,	// (0x000360ff) list_single_idle_plugin_notification_pane_g1

0xdeeb,	// (0x000389d9) cell_ai_notification_pane_ParamLimits

0xdeeb,	// (0x000389d9) cell_ai_notification_pane

0xdef8,	// (0x000389e6) cell_ai_notification_pane_g1

0xdf00,	// (0x000389ee) cell_ai_notification_pane_t1

0xdf0e,	// (0x000389fc) tb_ext_find_button_pane

0xdf16,	// (0x00038a04) tb_ext_find_pane_g1

0xdf1e,	// (0x00038a0c) tb_ext_find_pane_t1

0x8746,	// (0x00033234) tb_ext_find_button_pane_g1

0xdf2c,	// (0x00038a1a) tb_ext_find_button_pane_g2

0x0001,

0xfda3,	// (0x0003a891) tb_ext_find_button_pane_g

0xdcc8,	// (0x000387b6) main_idle_act4_pane_t1_ParamLimits

0xdcda,	// (0x000387c8) main_idle_act4_pane_t2_ParamLimits

0xfd61,	// (0x0003a84f) main_idle_act4_pane_t_ParamLimits

0xdd02,	// (0x000387f0) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdd10,	// (0x000387fe) sat_plugin_idle_act4_pane_ParamLimits

0xdd10,	// (0x000387fe) sat_plugin_idle_act4_pane

0xdf35,	// (0x00038a23) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdf35,	// (0x00038a23) sat_plugin_idle_act4_pane_t1

0xdf48,	// (0x00038a36) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdf48,	// (0x00038a36) sat_plugin_idle_act4_pane_t2

0xdf5b,	// (0x00038a49) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdf5b,	// (0x00038a49) sat_plugin_idle_act4_pane_t3

0xdf6e,	// (0x00038a5c) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdf6e,	// (0x00038a5c) sat_plugin_idle_act4_pane_t4

0x0003,

0xfda8,	// (0x0003a896) sat_plugin_idle_act4_pane_t_ParamLimits

0xfda8,	// (0x0003a896) sat_plugin_idle_act4_pane_t

0x4e6b,	// (0x0002f959) popup_battery_window_ParamLimits

0x4e6b,	// (0x0002f959) popup_battery_window

0x752e,	// (0x0003201c) bg_popup_sub_pane_cp25_ParamLimits

0x752e,	// (0x0003201c) bg_popup_sub_pane_cp25

0xdf81,	// (0x00038a6f) popup_battery_window_g1_ParamLimits

0xdf81,	// (0x00038a6f) popup_battery_window_g1

0xdf8d,	// (0x00038a7b) popup_battery_window_t1_ParamLimits

0xdf8d,	// (0x00038a7b) popup_battery_window_t1

0xdf9f,	// (0x00038a8d) popup_battery_window_t2_ParamLimits

0xdf9f,	// (0x00038a8d) popup_battery_window_t2

0x0001,

0xfdb1,	// (0x0003a89f) popup_battery_window_t_ParamLimits

0xfdb1,	// (0x0003a89f) popup_battery_window_t

0x8d48,	// (0x00033836) midp_canvas_pane_ParamLimits

0x8dbf,	// (0x000338ad) midp_keypad_pane_ParamLimits

0x8dbf,	// (0x000338ad) midp_keypad_pane

0x90ba,	// (0x00033ba8) main_midp_pane_ParamLimits

0xbcfa,	// (0x000367e8) signal_pane_g2_cp_ParamLimits

0xdfbc,	// (0x00038aaa) aid_size_cell_midp_keypad_ParamLimits

0xdfbc,	// (0x00038aaa) aid_size_cell_midp_keypad

0xdfd6,	// (0x00038ac4) midp_keyp_game_grid_pane_ParamLimits

0xdfd6,	// (0x00038ac4) midp_keyp_game_grid_pane

0xdff6,	// (0x00038ae4) midp_keyp_rocker_pane_ParamLimits

0xdff6,	// (0x00038ae4) midp_keyp_rocker_pane

0xe025,	// (0x00038b13) midp_keyp_sk_left_pane_ParamLimits

0xe025,	// (0x00038b13) midp_keyp_sk_left_pane

0xe07f,	// (0x00038b6d) midp_keyp_sk_right_pane_ParamLimits

0xe07f,	// (0x00038b6d) midp_keyp_sk_right_pane

0x71b0,	// (0x00031c9e) bg_button_pane_cp03

0xe0d9,	// (0x00038bc7) midp_keyp_sk_left_pane_g1

0x71b0,	// (0x00031c9e) bg_button_pane_cp04

0xe0d9,	// (0x00038bc7) midp_keyp_sk_right_pane_g1

0xc246,	// (0x00036d34) midp_keyp_rocker_pane_g1

0xe0e2,	// (0x00038bd0) keyp_game_cell_pane_ParamLimits

0xe0e2,	// (0x00038bd0) keyp_game_cell_pane

0x71b0,	// (0x00031c9e) bg_button_pane_cp02

0xe0f5,	// (0x00038be3) keyp_game_cell_pane_g1

0x4eb5,	// (0x0002f9a3) popup_fep_vkb2_window_ParamLimits

0x4eb5,	// (0x0002f9a3) popup_fep_vkb2_window

0x6a1f,	// (0x0003150d) aid_size_cell_vkb2_ParamLimits

0x6a1f,	// (0x0003150d) aid_size_cell_vkb2

0x6a6b,	// (0x00031559) popup_fep_vkb2_window_g1_ParamLimits

0x6a6b,	// (0x00031559) popup_fep_vkb2_window_g1

0x6ab3,	// (0x000315a1) vkb2_area_bottom_pane_ParamLimits

0x6ab3,	// (0x000315a1) vkb2_area_bottom_pane

0x6b07,	// (0x000315f5) vkb2_area_keypad_pane_ParamLimits

0x6b07,	// (0x000315f5) vkb2_area_keypad_pane

0x6b4d,	// (0x0003163b) vkb2_area_top_pane_ParamLimits

0x6b4d,	// (0x0003163b) vkb2_area_top_pane

0x6bc7,	// (0x000316b5) vkb2_top_entry_pane_ParamLimits

0x6bc7,	// (0x000316b5) vkb2_top_entry_pane

0x6bf1,	// (0x000316df) vkb2_top_grid_left_pane_ParamLimits

0x6bf1,	// (0x000316df) vkb2_top_grid_left_pane

0x6c0f,	// (0x000316fd) vkb2_top_grid_right_pane_ParamLimits

0x6c0f,	// (0x000316fd) vkb2_top_grid_right_pane

0x6c2d,	// (0x0003171b) vkb2_cell_keypad_pane_ParamLimits

0x6c2d,	// (0x0003171b) vkb2_cell_keypad_pane

0x6ce3,	// (0x000317d1) vkb2_area_bottom_grid_pane_ParamLimits

0x6ce3,	// (0x000317d1) vkb2_area_bottom_grid_pane

0x6d09,	// (0x000317f7) vkb2_area_bottom_pane_g1_ParamLimits

0x6d09,	// (0x000317f7) vkb2_area_bottom_pane_g1

0x6d2d,	// (0x0003181b) vkb2_area_bottom_pane_g2_ParamLimits

0x6d2d,	// (0x0003181b) vkb2_area_bottom_pane_g2

0x6d5b,	// (0x00031849) vkb2_area_bottom_pane_g3_ParamLimits

0x6d5b,	// (0x00031849) vkb2_area_bottom_pane_g3

0x0002,

0xfdb6,	// (0x0003a8a4) vkb2_area_bottom_pane_g_ParamLimits

0xfdb6,	// (0x0003a8a4) vkb2_area_bottom_pane_g

0x6dbc,	// (0x000318aa) vkb2_top_cell_left_pane_ParamLimits

0x6dbc,	// (0x000318aa) vkb2_top_cell_left_pane

0xe106,	// (0x00038bf4) vkb2_top_entry_pane_g1_ParamLimits

0xe106,	// (0x00038bf4) vkb2_top_entry_pane_g1

0xe114,	// (0x00038c02) vkb2_top_entry_pane_t1_ParamLimits

0xe114,	// (0x00038c02) vkb2_top_entry_pane_t1

0xe12c,	// (0x00038c1a) vkb2_top_entry_pane_t2_ParamLimits

0xe12c,	// (0x00038c1a) vkb2_top_entry_pane_t2

0xe144,	// (0x00038c32) vkb2_top_entry_pane_t3_ParamLimits

0xe144,	// (0x00038c32) vkb2_top_entry_pane_t3

0x0002,

0xfdbd,	// (0x0003a8ab) vkb2_top_entry_pane_t_ParamLimits

0xfdbd,	// (0x0003a8ab) vkb2_top_entry_pane_t

0x6e09,	// (0x000318f7) vkb2_top_grid_right_pane_g1_ParamLimits

0x6e09,	// (0x000318f7) vkb2_top_grid_right_pane_g1

0x6e1f,	// (0x0003190d) vkb2_top_grid_right_pane_g2_ParamLimits

0x6e1f,	// (0x0003190d) vkb2_top_grid_right_pane_g2

0x6e37,	// (0x00031925) vkb2_top_grid_right_pane_g3_ParamLimits

0x6e37,	// (0x00031925) vkb2_top_grid_right_pane_g3

0x6e4f,	// (0x0003193d) vkb2_top_grid_right_pane_g4_ParamLimits

0x6e4f,	// (0x0003193d) vkb2_top_grid_right_pane_g4

0x0003,

0xfdc4,	// (0x0003a8b2) vkb2_top_grid_right_pane_g_ParamLimits

0xfdc4,	// (0x0003a8b2) vkb2_top_grid_right_pane_g

0x6e65,	// (0x00031953) vkb2_top_cell_left_pane_g1

0x6e7c,	// (0x0003196a) vkb2_cell_keypad_pane_g1_ParamLimits

0x6e7c,	// (0x0003196a) vkb2_cell_keypad_pane_g1

0xe15a,	// (0x00038c48) vkb2_cell_keypad_pane_t1_ParamLimits

0xe15a,	// (0x00038c48) vkb2_cell_keypad_pane_t1

0x6ea0,	// (0x0003198e) vkb2_cell_bottom_grid_pane_ParamLimits

0x6ea0,	// (0x0003198e) vkb2_cell_bottom_grid_pane

0x6ed9,	// (0x000319c7) vkb2_cell_bottom_grid_pane_g1

0xdd50,	// (0x0003883e) aid_call2_pane_cp02

0xdd58,	// (0x00038846) aid_call_pane_cp02

0xdd60,	// (0x0003884e) clock_digital_number_pane_cp10

0xdd68,	// (0x00038856) clock_digital_number_pane_cp11

0xdd70,	// (0x0003885e) clock_digital_number_pane_cp12

0xdd78,	// (0x00038866) clock_digital_number_pane_cp13

0xdd80,	// (0x0003886e) clock_digital_separator_pane_cp10

0x8746,	// (0x00033234) popup_clock_digital_analogue_window_cp2_g1

0x8746,	// (0x00033234) popup_clock_digital_analogue_window_cp2_g2

0xdd88,	// (0x00038876) popup_clock_digital_analogue_window_cp2_g3

0x8746,	// (0x00033234) popup_clock_digital_analogue_window_cp2_g4

0xdd88,	// (0x00038876) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd79,	// (0x0003a867) popup_clock_digital_analogue_window_cp2_g

0xdd90,	// (0x0003887e) popup_clock_digital_analogue_window_cp2_t1

0xdd9e,	// (0x0003888c) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd84,	// (0x0003a872) popup_clock_digital_analogue_window_cp2_t

0xc246,	// (0x00036d34) clock_digital_number_pane_cp10_g1

0xc246,	// (0x00036d34) clock_digital_number_pane_cp10_g2

0x0001,

0xfb60,	// (0x0003a64e) clock_digital_number_pane_cp10_g

0xc246,	// (0x00036d34) clock_digital_separator_pane_cp10_g1

0xc246,	// (0x00036d34) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb60,	// (0x0003a64e) clock_digital_separator_pane_cp10_g

0xdbcb,	// (0x000386b9) uniindi_top_pane_g3

0xdbdc,	// (0x000386ca) uniindi_top_pane_g4

0x6c9d,	// (0x0003178b) vkb2_row_keypad_pane_ParamLimits

0x6c9d,	// (0x0003178b) vkb2_row_keypad_pane

0x6ef5,	// (0x000319e3) vkb2_cell_t_keypad_pane_ParamLimits

0x6ef5,	// (0x000319e3) vkb2_cell_t_keypad_pane

0x6f05,	// (0x000319f3) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x6f05,	// (0x000319f3) vkb2_cell_t_keypad_pane_cp08

0x6f1a,	// (0x00031a08) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x6f1a,	// (0x00031a08) vkb2_cell_t_keypad_pane_cp09

0x6f2e,	// (0x00031a1c) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x6f2e,	// (0x00031a1c) vkb2_cell_t_keypad_pane_cp01

0x6f3f,	// (0x00031a2d) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x6f3f,	// (0x00031a2d) vkb2_cell_t_keypad_pane_cp02

0x6f50,	// (0x00031a3e) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x6f50,	// (0x00031a3e) vkb2_cell_t_keypad_pane_cp03

0x6f61,	// (0x00031a4f) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x6f61,	// (0x00031a4f) vkb2_cell_t_keypad_pane_cp04

0x6f72,	// (0x00031a60) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x6f72,	// (0x00031a60) vkb2_cell_t_keypad_pane_cp05

0x6f83,	// (0x00031a71) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x6f83,	// (0x00031a71) vkb2_cell_t_keypad_pane_cp06

0x6f96,	// (0x00031a84) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x6f96,	// (0x00031a84) vkb2_cell_t_keypad_pane_cp07

0x6fab,	// (0x00031a99) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x6fab,	// (0x00031a99) vkb2_cell_t_keypad_pane_cp10

0x674e,	// (0x0003123c) vkb2_cell_t_keypad_pane_g1

0xe171,	// (0x00038c5f) vkb2_cell_t_keypad_pane_t1

0x4da6,	// (0x0002f894) popup_grid_graphic2_window

0xe183,	// (0x00038c71) aid_size_cell_graphic2_ParamLimits

0xe183,	// (0x00038c71) aid_size_cell_graphic2

0xcbb8,	// (0x000376a6) bg_popup_window_pane_cp21_ParamLimits

0xcbb8,	// (0x000376a6) bg_popup_window_pane_cp21

0xe1af,	// (0x00038c9d) graphic2_pages_pane_ParamLimits

0xe1af,	// (0x00038c9d) graphic2_pages_pane

0xe216,	// (0x00038d04) grid_graphic2_control_pane_ParamLimits

0xe216,	// (0x00038d04) grid_graphic2_control_pane

0xe244,	// (0x00038d32) grid_graphic2_pane_ParamLimits

0xe244,	// (0x00038d32) grid_graphic2_pane

0xe2a6,	// (0x00038d94) cell_graphic2_pane

0x71b0,	// (0x00031c9e) main_comp_mode_pane

0xd43c,	// (0x00037f2a) list_ai3_gene_pane_ParamLimits

0xd804,	// (0x000382f2) bg_popup_window_pane_cp19_ParamLimits

0xd810,	// (0x000382fe) bg_touch_area_indi_pane_ParamLimits

0xd810,	// (0x000382fe) bg_touch_area_indi_pane

0xd826,	// (0x00038314) bg_touch_area_indi_pane_cp01_ParamLimits

0xd826,	// (0x00038314) bg_touch_area_indi_pane_cp01

0xd83e,	// (0x0003832c) bg_touch_area_indi_pane_cp02_ParamLimits

0xd83e,	// (0x0003832c) bg_touch_area_indi_pane_cp02

0xd858,	// (0x00038346) bg_touch_area_indi_pane_cp03_ParamLimits

0xd858,	// (0x00038346) bg_touch_area_indi_pane_cp03

0xd872,	// (0x00038360) popup_slider_window_g1_ParamLimits

0xd88e,	// (0x0003837c) popup_slider_window_g2_ParamLimits

0xd8aa,	// (0x00038398) popup_slider_window_g3_ParamLimits

0xfd0e,	// (0x0003a7fc) popup_slider_window_g_ParamLimits

0xd906,	// (0x000383f4) popup_slider_window_t1_ParamLimits

0xd97a,	// (0x00038468) small_volume_slider_vertical_pane_ParamLimits

0xe2a6,	// (0x00038d94) cell_graphic2_pane_ParamLimits

0xe2fb,	// (0x00038de9) bg_button_pane_cp10_ParamLimits

0xe2fb,	// (0x00038de9) bg_button_pane_cp10

0xe310,	// (0x00038dfe) bg_button_pane_cp11_ParamLimits

0xe310,	// (0x00038dfe) bg_button_pane_cp11

0xe325,	// (0x00038e13) graphic2_pages_pane_g1_ParamLimits

0xe325,	// (0x00038e13) graphic2_pages_pane_g1

0xe340,	// (0x00038e2e) graphic2_pages_pane_g2_ParamLimits

0xe340,	// (0x00038e2e) graphic2_pages_pane_g2

0x0001,

0xfdd2,	// (0x0003a8c0) graphic2_pages_pane_g_ParamLimits

0xfdd2,	// (0x0003a8c0) graphic2_pages_pane_g

0xe358,	// (0x00038e46) graphic2_pages_pane_t1_ParamLimits

0xe358,	// (0x00038e46) graphic2_pages_pane_t1

0xe36e,	// (0x00038e5c) cell_graphic2_control_pane_ParamLimits

0xe36e,	// (0x00038e5c) cell_graphic2_control_pane

0xe388,	// (0x00038e76) cell_graphic2_pane_g1_ParamLimits

0xe388,	// (0x00038e76) cell_graphic2_pane_g1

0xe395,	// (0x00038e83) cell_graphic2_pane_g2_ParamLimits

0xe395,	// (0x00038e83) cell_graphic2_pane_g2

0xe3a2,	// (0x00038e90) cell_graphic2_pane_g3_ParamLimits

0xe3a2,	// (0x00038e90) cell_graphic2_pane_g3

0xe3af,	// (0x00038e9d) cell_graphic2_pane_g4_ParamLimits

0xe3af,	// (0x00038e9d) cell_graphic2_pane_g4

0xe3bc,	// (0x00038eaa) cell_graphic2_pane_g5_ParamLimits

0xe3bc,	// (0x00038eaa) cell_graphic2_pane_g5

0x0004,

0xfdd7,	// (0x0003a8c5) cell_graphic2_pane_g_ParamLimits

0xfdd7,	// (0x0003a8c5) cell_graphic2_pane_g

0xe3d7,	// (0x00038ec5) cell_graphic2_pane_t1_ParamLimits

0xe3d7,	// (0x00038ec5) cell_graphic2_pane_t1

0x9cf4,	// (0x000347e2) grid_highlight_pane_cp11_ParamLimits

0x9cf4,	// (0x000347e2) grid_highlight_pane_cp11

0x80d6,	// (0x00032bc4) bg_button_pane_cp05

0xe3ed,	// (0x00038edb) cell_graphic2_control_pane_g1

0xc246,	// (0x00036d34) bg_touch_area_indi_pane_g1

0xe3fa,	// (0x00038ee8) aid_cmod_rocker_key_size

0xe404,	// (0x00038ef2) aid_cmode_itu_key_size

0xe40e,	// (0x00038efc) main_cmode_video_pane

0xe418,	// (0x00038f06) main_comp_mode_itu_pane

0xe424,	// (0x00038f12) main_comp_mode_rocker_pane

0xe430,	// (0x00038f1e) cell_cmode_rocker_pane_ParamLimits

0xe430,	// (0x00038f1e) cell_cmode_rocker_pane

0xe444,	// (0x00038f32) cell_cmode_itu_pane_ParamLimits

0xe444,	// (0x00038f32) cell_cmode_itu_pane

0x80d6,	// (0x00032bc4) bg_button_pane_cp06_ParamLimits

0x80d6,	// (0x00032bc4) bg_button_pane_cp06

0xc4d0,	// (0x00036fbe) cell_cmode_rocker_pane_g1_ParamLimits

0xc4d0,	// (0x00036fbe) cell_cmode_rocker_pane_g1

0xda21,	// (0x0003850f) cell_cmode_rocker_pane_g2_ParamLimits

0xda21,	// (0x0003850f) cell_cmode_rocker_pane_g2

0x0001,

0xfde2,	// (0x0003a8d0) cell_cmode_rocker_pane_g_ParamLimits

0xfde2,	// (0x0003a8d0) cell_cmode_rocker_pane_g

0x71b0,	// (0x00031c9e) bg_button_pane_cp07

0xe45b,	// (0x00038f49) cell_cmode_itu_pane_g1

0xe464,	// (0x00038f52) cell_cmode_itu_pane_t1

0xe472,	// (0x00038f60) cell_cmode_itu_pane_t2

0x0001,

0xfde7,	// (0x0003a8d5) cell_cmode_itu_pane_t

0xdc4f,	// (0x0003873d) aid_touch_ctrl_left

0xdc57,	// (0x00038745) aid_touch_ctrl_right

0x71b0,	// (0x00031c9e) compa_mode_pane

0xe480,	// (0x00038f6e) aid_cmod_rocker_key_size_cp

0xe48a,	// (0x00038f78) aid_cmode_itu_key_size_cp

0xe494,	// (0x00038f82) compa_mode_pane_g1

0xe49c,	// (0x00038f8a) compa_mode_pane_g2

0xe4a4,	// (0x00038f92) compa_mode_pane_g3

0x0002,

0xfdec,	// (0x0003a8da) compa_mode_pane_g

0xe4ac,	// (0x00038f9a) main_comp_mode_itu_pane_cp

0xe4b4,	// (0x00038fa2) main_comp_mode_rocker_pane_cp

0xe4bc,	// (0x00038faa) cell_cmode_itu_pane_cp_ParamLimits

0xe4bc,	// (0x00038faa) cell_cmode_itu_pane_cp

0xe4d1,	// (0x00038fbf) cell_cmode_rocker_pane_cp_ParamLimits

0xe4d1,	// (0x00038fbf) cell_cmode_rocker_pane_cp

0x80d6,	// (0x00032bc4) bg_button_pane_cp06_cp_ParamLimits

0x80d6,	// (0x00032bc4) bg_button_pane_cp06_cp

0xc4d0,	// (0x00036fbe) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc4d0,	// (0x00036fbe) cell_cmode_rocker_pane_g1_cp

0xc246,	// (0x00036d34) cell_cmode_rocker_pane_g2_cp

0x71b0,	// (0x00031c9e) bg_button_pane_cp07_cp

0xe4e3,	// (0x00038fd1) cell_cmode_itu_pane_g1_cp

0xe4ec,	// (0x00038fda) cell_cmode_itu_pane_t1_cp

0xe4ec,	// (0x00038fda) cell_cmode_itu_pane_t2_cp

0xb18a,	// (0x00035c78) settings_code_pane_cp2

0x72a4,	// (0x00031d92) bg_popup_window_pane_cp3_ParamLimits

0x7cc7,	// (0x000327b5) heading_pane_cp3_ParamLimits

0x7cd3,	// (0x000327c1) listscroll_popup_graphic_pane_ParamLimits

0x64e1,	// (0x00030fcf) fep_hwr_aid_pane_ParamLimits

0x6974,	// (0x00031462) aid_touch_sctrl_top_ParamLimits

0x698f,	// (0x0003147d) sctrl_sk_top_pane_g1_ParamLimits

0x674e,	// (0x0003123c) sctrl_sk_top_pane_g2_ParamLimits

0xfd27,	// (0x0003a815) sctrl_sk_top_pane_g_ParamLimits

0x699c,	// (0x0003148a) sctrl_sk_top_pane_t1_ParamLimits

0x6974,	// (0x00031462) aid_touch_sctrl_bottom_ParamLimits

0x699c,	// (0x0003148a) sctrl_sk_bottom_pane_t1_ParamLimits

0xdb95,	// (0x00038683) aid_area_touch_clock

0x6b8f,	// (0x0003167d) aid_vkb2_area_top_pane_cell_ParamLimits

0x6b8f,	// (0x0003167d) aid_vkb2_area_top_pane_cell

0x6cbf,	// (0x000317ad) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x6cbf,	// (0x000317ad) aid_vkb2_area_bottom_pane_cell

0xe0fe,	// (0x00038bec) popup_char_count_window

0xe4fa,	// (0x00038fe8) popup_char_count_window_g1

0xe503,	// (0x00038ff1) popup_char_count_window_g2

0xe50c,	// (0x00038ffa) popup_char_count_window_g3

0x0002,

0xfdf3,	// (0x0003a8e1) popup_char_count_window_g

0xe515,	// (0x00039003) popup_char_count_window_t1

0x6a49,	// (0x00031537) popup_fep_char_preview_window_ParamLimits

0x6a49,	// (0x00031537) popup_fep_char_preview_window

0x6bad,	// (0x0003169b) vkb2_top_candi_pane_ParamLimits

0x6bad,	// (0x0003169b) vkb2_top_candi_pane

0xe523,	// (0x00039011) cell_vkb2_top_candi_pane_ParamLimits

0xe523,	// (0x00039011) cell_vkb2_top_candi_pane

0x6fc0,	// (0x00031aae) bg_popup_fep_char_preview_window_ParamLimits

0x6fc0,	// (0x00031aae) bg_popup_fep_char_preview_window

0x6fce,	// (0x00031abc) popup_fep_char_preview_window_t1_ParamLimits

0x6fce,	// (0x00031abc) popup_fep_char_preview_window_t1

0xe574,	// (0x00039062) bg_popup_fep_char_preview_window_g1

0xe57c,	// (0x0003906a) bg_popup_fep_char_preview_window_g2

0xe584,	// (0x00039072) bg_popup_fep_char_preview_window_g3

0xe58c,	// (0x0003907a) bg_popup_fep_char_preview_window_g4

0xe594,	// (0x00039082) bg_popup_fep_char_preview_window_g5

0x7008,	// (0x00031af6) bg_popup_fep_char_preview_window_g6

0xe59c,	// (0x0003908a) bg_popup_fep_char_preview_window_g7

0xe5a4,	// (0x00039092) bg_popup_fep_char_preview_window_g8

0xe5ac,	// (0x0003909a) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdfa,	// (0x0003a8e8) bg_popup_fep_char_preview_window_g

0x674e,	// (0x0003123c) cell_vkb2_top_candi_pane_g1_ParamLimits

0x674e,	// (0x0003123c) cell_vkb2_top_candi_pane_g1

0x675c,	// (0x0003124a) cell_vkb2_top_candi_pane_g2_ParamLimits

0x675c,	// (0x0003124a) cell_vkb2_top_candi_pane_g2

0xe1f5,	// (0x00038ce3) cell_vkb2_top_candi_pane_g3_ParamLimits

0xe1f5,	// (0x00038ce3) cell_vkb2_top_candi_pane_g3

0x7010,	// (0x00031afe) cell_vkb2_top_candi_pane_g4_ParamLimits

0x7010,	// (0x00031afe) cell_vkb2_top_candi_pane_g4

0xc9cf,	// (0x000374bd) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc9cf,	// (0x000374bd) cell_vkb2_top_candi_pane_g5

0x7031,	// (0x00031b1f) cell_vkb2_top_candi_pane_g6_ParamLimits

0x7031,	// (0x00031b1f) cell_vkb2_top_candi_pane_g6

0x0005,

0xfe0d,	// (0x0003a8fb) cell_vkb2_top_candi_pane_g_ParamLimits

0xfe0d,	// (0x0003a8fb) cell_vkb2_top_candi_pane_g

0x703f,	// (0x00031b2d) cell_vkb2_top_candi_pane_t1

0x6227,	// (0x00030d15) aid_size_touch_slider_mark_ParamLimits

0x6227,	// (0x00030d15) aid_size_touch_slider_mark

0xe1e5,	// (0x00038cd3) grid_graphic2_catg_pane_ParamLimits

0xe1e5,	// (0x00038cd3) grid_graphic2_catg_pane

0xe280,	// (0x00038d6e) popup_grid_graphic2_window_t1_ParamLimits

0xe280,	// (0x00038d6e) popup_grid_graphic2_window_t1

0xe292,	// (0x00038d80) popup_grid_graphic2_window_t2_ParamLimits

0xe292,	// (0x00038d80) popup_grid_graphic2_window_t2

0x0001,

0xfdcd,	// (0x0003a8bb) popup_grid_graphic2_window_t_ParamLimits

0xfdcd,	// (0x0003a8bb) popup_grid_graphic2_window_t

0x80d6,	// (0x00032bc4) bg_button_pane_cp05_ParamLimits

0xe3ed,	// (0x00038edb) cell_graphic2_control_pane_g1_ParamLimits

0xe5b4,	// (0x000390a2) cell_graphic2_catg_pane_ParamLimits

0xe5b4,	// (0x000390a2) cell_graphic2_catg_pane

0x71b0,	// (0x00031c9e) bg_button_pane_cp12

0xe5c6,	// (0x000390b4) cell_graphic2_catg_pane_g1

0xdb61,	// (0x0003864f) cell_tb_ext_pane_t1_ParamLimits

0x6ddc,	// (0x000318ca) vkb2_top_cell_right_narrow_pane_ParamLimits

0x6ddc,	// (0x000318ca) vkb2_top_cell_right_narrow_pane

0x6df4,	// (0x000318e2) vkb2_top_cell_right_wide_pane_ParamLimits

0x6df4,	// (0x000318e2) vkb2_top_cell_right_wide_pane

0x64d3,	// (0x00030fc1) bg_vkb2_func_pane_ParamLimits

0x64d3,	// (0x00030fc1) bg_vkb2_func_pane

0x6e65,	// (0x00031953) vkb2_top_cell_left_pane_g1_ParamLimits

0x64d3,	// (0x00030fc1) bg_vkb2_fuc_pane_cp03_ParamLimits

0x64d3,	// (0x00030fc1) bg_vkb2_fuc_pane_cp03

0x6ed9,	// (0x000319c7) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9c0a,	// (0x000346f8) bg_vkb2_func_pane_g1

0x9c12,	// (0x00034700) bg_vkb2_func_pane_g2

0x9c22,	// (0x00034710) bg_vkb2_func_pane_g3

0x9c1a,	// (0x00034708) bg_vkb2_func_pane_g4

0x9c2a,	// (0x00034718) bg_vkb2_func_pane_g5

0x9c32,	// (0x00034720) bg_vkb2_func_pane_g6

0x9c3a,	// (0x00034728) bg_vkb2_func_pane_g7

0x9c42,	// (0x00034730) bg_vkb2_func_pane_g8

0x9c02,	// (0x000346f0) bg_vkb2_func_pane_g9

0x0008,

0xfe1a,	// (0x0003a908) bg_vkb2_func_pane_g

0x64d3,	// (0x00030fc1) bg_vkb2_fuc_pane_cp01_ParamLimits

0x64d3,	// (0x00030fc1) bg_vkb2_fuc_pane_cp01

0x6e65,	// (0x00031953) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x6e65,	// (0x00031953) vkb2_top_cell_right_wide_pane_g1

0x64d3,	// (0x00030fc1) bg_vkb2_fuc_pane_cp02_ParamLimits

0x64d3,	// (0x00030fc1) bg_vkb2_fuc_pane_cp02

0x6ed9,	// (0x000319c7) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x6ed9,	// (0x000319c7) vkb2_top_cell_right_narrow_pane_g1

0xd782,	// (0x00038270) aid_touch_area_decrease_ParamLimits

0xd782,	// (0x00038270) aid_touch_area_decrease

0xd7a6,	// (0x00038294) aid_touch_area_increase_ParamLimits

0xd7a6,	// (0x00038294) aid_touch_area_increase

0xd7b2,	// (0x000382a0) aid_touch_area_mute_ParamLimits

0xd7b2,	// (0x000382a0) aid_touch_area_mute

0xd7d6,	// (0x000382c4) aid_touch_area_slider_ParamLimits

0xd7d6,	// (0x000382c4) aid_touch_area_slider

0xd8c6,	// (0x000383b4) popup_slider_window_g4_ParamLimits

0xd8c6,	// (0x000383b4) popup_slider_window_g4

0xd8d2,	// (0x000383c0) popup_slider_window_g5_ParamLimits

0xd8d2,	// (0x000383c0) popup_slider_window_g5

0xd8f4,	// (0x000383e2) popup_slider_window_g6_ParamLimits

0xd8f4,	// (0x000383e2) popup_slider_window_g6

0xd934,	// (0x00038422) popup_slider_window_t2_ParamLimits

0xd934,	// (0x00038422) popup_slider_window_t2

0x0001,

0xfd1b,	// (0x0003a809) popup_slider_window_t_ParamLimits

0xfd1b,	// (0x0003a809) popup_slider_window_t

0xd94c,	// (0x0003843a) slider_pane_ParamLimits

0xd94c,	// (0x0003843a) slider_pane

0xe5cf,	// (0x000390bd) slider_pane_g1_ParamLimits

0xe5cf,	// (0x000390bd) slider_pane_g1

0xe5e3,	// (0x000390d1) slider_pane_g2_ParamLimits

0xe5e3,	// (0x000390d1) slider_pane_g2

0xe5f9,	// (0x000390e7) slider_pane_g3_ParamLimits

0xe5f9,	// (0x000390e7) slider_pane_g3

0x0003,

0xfe2d,	// (0x0003a91b) slider_pane_g_ParamLimits

0xfe2d,	// (0x0003a91b) slider_pane_g

0x95fc,	// (0x000340ea) popup_tb_float_extension_window_ParamLimits

0x95fc,	// (0x000340ea) popup_tb_float_extension_window

0xe625,	// (0x00039113) aid_size_cell_tb_float_ext

0x71b0,	// (0x00031c9e) bg_popup_sub_window_cp28

0xe631,	// (0x0003911f) grid_tb_float_ext_pane

0xe63d,	// (0x0003912b) cell_tb_float_ext_pane_ParamLimits

0xe63d,	// (0x0003912b) cell_tb_float_ext_pane

0xe659,	// (0x00039147) cell_tb_float_ext_pane_g1

0xe662,	// (0x00039150) grid_highlight_pane_cp12

0x6628,	// (0x00031116) cell_last_hwr_side_pane_ParamLimits

0x6628,	// (0x00031116) cell_last_hwr_side_pane

0xc246,	// (0x00036d34) cell_last_hwr_side_pane_g1

0xe66b,	// (0x00039159) cell_last_hwr_side_pane_g2

0x0001,

0xfe36,	// (0x0003a924) cell_last_hwr_side_pane_g

0x6d8b,	// (0x00031879) vkb2_area_bottom_space_btn_pane_ParamLimits

0x6d8b,	// (0x00031879) vkb2_area_bottom_space_btn_pane

0x674e,	// (0x0003123c) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe171,	// (0x00038c5f) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x703f,	// (0x00031b2d) cell_vkb2_top_candi_pane_t1_ParamLimits

0x705d,	// (0x00031b4b) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x705d,	// (0x00031b4b) vkb2_area_bottom_space_btn_pane_g1

0x7097,	// (0x00031b85) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x7097,	// (0x00031b85) vkb2_area_bottom_space_btn_pane_g2

0x70cd,	// (0x00031bbb) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x70cd,	// (0x00031bbb) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe3b,	// (0x0003a929) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe3b,	// (0x0003a929) vkb2_area_bottom_space_btn_pane_g

0x6598,	// (0x00031086) cel_fep_hwr_func_pane_ParamLimits

0x6598,	// (0x00031086) cel_fep_hwr_func_pane

0x65d4,	// (0x000310c2) cell_hwr_side_button_pane_ParamLimits

0x65d4,	// (0x000310c2) cell_hwr_side_button_pane

0xdb95,	// (0x00038683) aid_area_touch_clock_ParamLimits

0x752e,	// (0x0003201c) bg_uniindi_top_pane_ParamLimits

0xdba9,	// (0x00038697) uniindi_top_pane_g1_ParamLimits

0xdbbf,	// (0x000386ad) uniindi_top_pane_g2_ParamLimits

0xdbcb,	// (0x000386b9) uniindi_top_pane_g3_ParamLimits

0xdbdc,	// (0x000386ca) uniindi_top_pane_g4_ParamLimits

0xfd53,	// (0x0003a841) uniindi_top_pane_g_ParamLimits

0xdbe9,	// (0x000386d7) uniindi_top_pane_t1_ParamLimits

0x752e,	// (0x0003201c) bg_vkb2_func_pane_cp01_ParamLimits

0x752e,	// (0x0003201c) bg_vkb2_func_pane_cp01

0xe674,	// (0x00039162) cel_fep_hwr_func_pane_g1_ParamLimits

0xe674,	// (0x00039162) cel_fep_hwr_func_pane_g1

0x752e,	// (0x0003201c) bg_vkb2_func_pane_cp02_ParamLimits

0x752e,	// (0x0003201c) bg_vkb2_func_pane_cp02

0xe674,	// (0x00039162) cell_hwr_side_button_pane_g1_ParamLimits

0xe674,	// (0x00039162) cell_hwr_side_button_pane_g1

0x9a83,	// (0x00034571) status_pane_g4_ParamLimits

0x9a83,	// (0x00034571) status_pane_g4

0x9a9d,	// (0x0003458b) status_pane_t1

0xbfa0,	// (0x00036a8e) form2_midp_gauge_slider_cont_pane

0xbfa8,	// (0x00036a96) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbfba,	// (0x00036aa8) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbfcc,	// (0x00036aba) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb13,	// (0x0003a601) form2_midp_gauge_slider_pane_t_ParamLimits

0xbfde,	// (0x00036acc) form2_midp_slider_pane_ParamLimits

0x6a11,	// (0x000314ff) aid_size_cell_func_vkb2_ParamLimits

0x6a11,	// (0x000314ff) aid_size_cell_func_vkb2

0xe611,	// (0x000390ff) slider_pane_g4_ParamLimits

0xe611,	// (0x000390ff) slider_pane_g4

0x7117,	// (0x00031c05) form2_midp_gauge_slider_pane_t2_cp01

0x7125,	// (0x00031c13) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x7125,	// (0x00031c13) form2_midp_gauge_slider_pane_t3_cp01

0x7142,	// (0x00031c30) form2_midp_slider_pane_cp01

0x71b0,	// (0x00031c9e) navi_smil_pane

0xe6ad,	// (0x0003919b) navi_smil_pane_g1

0xe6b5,	// (0x000391a3) navi_smil_pane_t1

0xe682,	// (0x00039170) form2_midp_slider_pane_g1

0xe68b,	// (0x00039179) form2_midp_slider_pane_g2

0xe693,	// (0x00039181) form2_midp_slider_pane_g3

0xe682,	// (0x00039170) form2_midp_slider_pane_g4

0xe69b,	// (0x00039189) form2_midp_slider_pane_g5

0x0004,

0xfe44,	// (0x0003a932) form2_midp_slider_pane_g

0x7107,	// (0x00031bf5) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x7107,	// (0x00031bf5) vkb2_area_bottom_space_btn_pane_g4

0x989b,	// (0x00034389) lc0_navi_pane_ParamLimits

0x989b,	// (0x00034389) lc0_navi_pane

0x9917,	// (0x00034405) lc0_stat_indi_pane_ParamLimits

0x9917,	// (0x00034405) lc0_stat_indi_pane

0x992e,	// (0x0003441c) ls0_title_pane_ParamLimits

0x992e,	// (0x0003441c) ls0_title_pane

0x80d6,	// (0x00032bc4) bg_popup_sub_pane_cp14_ParamLimits

0xdb7c,	// (0x0003866a) list_uniindi_pane_ParamLimits

0xdb88,	// (0x00038676) uniindi_top_pane_ParamLimits

0xdc27,	// (0x00038715) list_single_uniindi_pane_g1_ParamLimits

0xdc3a,	// (0x00038728) list_single_uniindi_pane_t1_ParamLimits

0x714b,	// (0x00031c39) lc0_stat_clock_pane_ParamLimits

0x714b,	// (0x00031c39) lc0_stat_clock_pane

0xe6c3,	// (0x000391b1) lc0_stat_indi_pane_g1_ParamLimits

0xe6c3,	// (0x000391b1) lc0_stat_indi_pane_g1

0xe6d0,	// (0x000391be) lc0_stat_indi_pane_g2_ParamLimits

0xe6d0,	// (0x000391be) lc0_stat_indi_pane_g2

0x0001,

0xfe4f,	// (0x0003a93d) lc0_stat_indi_pane_g_ParamLimits

0xfe4f,	// (0x0003a93d) lc0_stat_indi_pane_g

0x7158,	// (0x00031c46) lc0_uni_indicator_pane_ParamLimits

0x7158,	// (0x00031c46) lc0_uni_indicator_pane

0xe6dd,	// (0x000391cb) ls0_title_pane_g1_ParamLimits

0xe6dd,	// (0x000391cb) ls0_title_pane_g1

0xe6f1,	// (0x000391df) ls0_title_pane_t1_ParamLimits

0xe6f1,	// (0x000391df) ls0_title_pane_t1

0x7165,	// (0x00031c53) lc0_uni_indicator_pane_g1_ParamLimits

0x7165,	// (0x00031c53) lc0_uni_indicator_pane_g1

0xe727,	// (0x00039215) lc0_stat_clock_pane_t1

0x71b0,	// (0x00031c9e) main_ai5_pane

0xe735,	// (0x00039223) ai5_sk_pane_ParamLimits

0xe735,	// (0x00039223) ai5_sk_pane

0xe742,	// (0x00039230) cell_ai5_widget_pane_ParamLimits

0xe742,	// (0x00039230) cell_ai5_widget_pane

0xe7b8,	// (0x000392a6) aid_size_cell_widget_grid

0xe7cc,	// (0x000392ba) bg_ai5_widget_pane_ParamLimits

0xe7cc,	// (0x000392ba) bg_ai5_widget_pane

0xe7f4,	// (0x000392e2) cell_ai5_widget_pane_g2

0xe804,	// (0x000392f2) cell_ai5_widget_pane_g3

0xe818,	// (0x00039306) cell_ai5_widget_pane_g4

0xe824,	// (0x00039312) cell_ai5_widget_pane_g5

0xe830,	// (0x0003931e) cell_ai5_widget_pane_g6

0xe83e,	// (0x0003932c) cell_ai5_widget_pane_g7

0xe886,	// (0x00039374) cell_ai5_widget_pane_t1_ParamLimits

0xe886,	// (0x00039374) cell_ai5_widget_pane_t1

0xe8a3,	// (0x00039391) cell_ai5_widget_pane_t2_ParamLimits

0xe8a3,	// (0x00039391) cell_ai5_widget_pane_t2

0xe8bb,	// (0x000393a9) cell_ai5_widget_pane_t3_ParamLimits

0xe8bb,	// (0x000393a9) cell_ai5_widget_pane_t3

0xe8d3,	// (0x000393c1) cell_ai5_widget_pane_t4_ParamLimits

0xe8d3,	// (0x000393c1) cell_ai5_widget_pane_t4

0xe8ed,	// (0x000393db) cell_ai5_widget_pane_t5_ParamLimits

0xe8ed,	// (0x000393db) cell_ai5_widget_pane_t5

0xe90c,	// (0x000393fa) cell_ai5_widget_pane_t6_ParamLimits

0xe90c,	// (0x000393fa) cell_ai5_widget_pane_t6

0xe91e,	// (0x0003940c) cell_ai5_widget_pane_t7_ParamLimits

0xe91e,	// (0x0003940c) cell_ai5_widget_pane_t7

0xe937,	// (0x00039425) cell_ai5_widget_pane_t8_ParamLimits

0xe937,	// (0x00039425) cell_ai5_widget_pane_t8

0x0009,

0xfe69,	// (0x0003a957) cell_ai5_widget_pane_t_ParamLimits

0xfe69,	// (0x0003a957) cell_ai5_widget_pane_t

0xe97f,	// (0x0003946d) grid_ai5_widget_pane

0x80d6,	// (0x00032bc4) highlight_cell_ai5_widget_pane_ParamLimits

0x80d6,	// (0x00032bc4) highlight_cell_ai5_widget_pane

0xe996,	// (0x00039484) ai5_sk_left_pane

0xe9a0,	// (0x0003948e) ai5_sk_middle_pane

0xe9aa,	// (0x00039498) ai5_sk_right_pane

0xe9b4,	// (0x000394a2) bg_ai5_widget_pane_g1_ParamLimits

0xe9b4,	// (0x000394a2) bg_ai5_widget_pane_g1

0xe9c0,	// (0x000394ae) bg_ai5_widget_pane_g2_ParamLimits

0xe9c0,	// (0x000394ae) bg_ai5_widget_pane_g2

0xe9cc,	// (0x000394ba) bg_ai5_widget_pane_g3_ParamLimits

0xe9cc,	// (0x000394ba) bg_ai5_widget_pane_g3

0xe9d8,	// (0x000394c6) bg_ai5_widget_pane_g4_ParamLimits

0xe9d8,	// (0x000394c6) bg_ai5_widget_pane_g4

0xe9e4,	// (0x000394d2) bg_ai5_widget_pane_g5_ParamLimits

0xe9e4,	// (0x000394d2) bg_ai5_widget_pane_g5

0xe9f0,	// (0x000394de) bg_ai5_widget_pane_g6_ParamLimits

0xe9f0,	// (0x000394de) bg_ai5_widget_pane_g6

0xe9fc,	// (0x000394ea) bg_ai5_widget_pane_g7_ParamLimits

0xe9fc,	// (0x000394ea) bg_ai5_widget_pane_g7

0xea08,	// (0x000394f6) bg_ai5_widget_pane_g8_ParamLimits

0xea08,	// (0x000394f6) bg_ai5_widget_pane_g8

0xea14,	// (0x00039502) bg_ai5_widget_pane_g9_ParamLimits

0xea14,	// (0x00039502) bg_ai5_widget_pane_g9

0x0008,

0xfe7e,	// (0x0003a96c) bg_ai5_widget_pane_g_ParamLimits

0xfe7e,	// (0x0003a96c) bg_ai5_widget_pane_g

0xea39,	// (0x00039527) cell_shortcut_ai5_widget_pane_ParamLimits

0xea39,	// (0x00039527) cell_shortcut_ai5_widget_pane

0x7370,	// (0x00031e5e) bg_cell_shortcut_ai5_widget_pane

0xea4b,	// (0x00039539) cell_grid_ai5_widget_pane_g1

0xea54,	// (0x00039542) highlight_cell_shortcut_ai5_widget_pane

0x9c0a,	// (0x000346f8) ai5_sk_left_pane_g1

0xea5c,	// (0x0003954a) ai5_sk_left_pane_g2

0xea64,	// (0x00039552) ai5_sk_left_pane_g3

0xea6c,	// (0x0003955a) ai5_sk_left_pane_g4

0x0003,

0xfe91,	// (0x0003a97f) ai5_sk_left_pane_g

0xea74,	// (0x00039562) ai5_sk_left_pane_t1

0x9c12,	// (0x00034700) ai5_sk_right_pane_g1

0xea82,	// (0x00039570) ai5_sk_right_pane_g2

0xea8a,	// (0x00039578) ai5_sk_right_pane_g3

0xea92,	// (0x00039580) ai5_sk_right_pane_g4

0x0003,

0xfe9a,	// (0x0003a988) ai5_sk_right_pane_g

0xea9a,	// (0x00039588) ai5_sk_right_pane_t1

0x9c12,	// (0x00034700) ai5_sk_middle_pane_g1

0x9c0a,	// (0x000346f8) ai5_sk_middle_pane_g2

0x9c2a,	// (0x00034718) ai5_sk_middle_pane_g3

0xea8a,	// (0x00039578) ai5_sk_middle_pane_g4

0xea64,	// (0x00039552) ai5_sk_middle_pane_g5

0xeaa8,	// (0x00039596) ai5_sk_middle_pane_g6

0xeab0,	// (0x0003959e) ai5_sk_middle_pane_g7

0x0006,

0xfea3,	// (0x0003a991) ai5_sk_middle_pane_g

0x971d,	// (0x0003420b) aid_touch_area_size_lc0_ParamLimits

0x971d,	// (0x0003420b) aid_touch_area_size_lc0

0x677d,	// (0x0003126b) cell_hwr_candidate_pane_t1_ParamLimits

0x973b,	// (0x00034229) aid_touch_navi_pane

0x9a2d,	// (0x0003451b) status_dt_navi_pane_ParamLimits

0x9a2d,	// (0x0003451b) status_dt_navi_pane

0x9a3a,	// (0x00034528) status_dt_sta_pane_ParamLimits

0x9a3a,	// (0x00034528) status_dt_sta_pane

0xeab8,	// (0x000395a6) dt_sta_controll_pane

0xeac5,	// (0x000395b3) dt_sta_indi_pane

0xead6,	// (0x000395c4) dt_sta_title_pane

0x752e,	// (0x0003201c) bg_dt_sta_indi_pane_ParamLimits

0x752e,	// (0x0003201c) bg_dt_sta_indi_pane

0xeae9,	// (0x000395d7) dt_sta_battery_pane

0xeaf1,	// (0x000395df) dt_sta_indi_pane_g1

0xeafa,	// (0x000395e8) dt_sta_indi_pane_g2

0xeb03,	// (0x000395f1) dt_sta_indi_pane_g3

0x0002,

0xfeb2,	// (0x0003a9a0) dt_sta_indi_pane_g

0xeb0c,	// (0x000395fa) dt_sta_signal_pane

0x80d6,	// (0x00032bc4) bg_dt_sta_title_pane_ParamLimits

0x80d6,	// (0x00032bc4) bg_dt_sta_title_pane

0xeb15,	// (0x00039603) dt_sta_title_pane_g1

0xeb1d,	// (0x0003960b) dt_sta_title_pane_t1_ParamLimits

0xeb1d,	// (0x0003960b) dt_sta_title_pane_t1

0x71b0,	// (0x00031c9e) bg_dt_sta_control_pane

0xeb32,	// (0x00039620) dt_sta_controll_pane_g1

0xeb3b,	// (0x00039629) bg_dt_sta_title_pane_g1

0xeb44,	// (0x00039632) bg_dt_sta_title_pane_g2

0xeb4d,	// (0x0003963b) bg_dt_sta_title_pane_g3

0x0002,

0xfeb9,	// (0x0003a9a7) bg_dt_sta_title_pane_g

0xc246,	// (0x00036d34) bg_dt_sta_indi_pane_g1

0xeb56,	// (0x00039644) dt_sta_signal_pane_g1

0xeb5e,	// (0x0003964c) dt_sta_signal_pane_g2

0x0001,

0xfec0,	// (0x0003a9ae) dt_sta_signal_pane_g

0xeb66,	// (0x00039654) dt_sta_battery_pane_g1

0xeb6f,	// (0x0003965d) dt_sta_battery_pane_t1

0xc246,	// (0x00036d34) bg_dt_sta_control_pane_g1

0x8832,	// (0x00033320) fep_china_uni_eep_pane

0x883a,	// (0x00033328) fep_china_uni_entry_pane_ParamLimits

0x884a,	// (0x00033338) popup_fep_china_uni_window_g1_ParamLimits

0x885a,	// (0x00033348) popup_fep_china_uni_window_g2_ParamLimits

0x885a,	// (0x00033348) popup_fep_china_uni_window_g2

0x0001,

0xf75d,	// (0x0003a24b) popup_fep_china_uni_window_g_ParamLimits

0xf75d,	// (0x0003a24b) popup_fep_china_uni_window_g

0xeb7e,	// (0x0003966c) fep_china_uni_eep_pane_g1

0xeb86,	// (0x00039674) fep_china_uni_eep_pane_t1

0xe6a4,	// (0x00039192) aid_touch_area_size_smil_player

0x9893,	// (0x00034381) lc0_clock_pane

0x9a91,	// (0x0003457f) status_pane_g5_ParamLimits

0x9a91,	// (0x0003457f) status_pane_g5

0x9275,	// (0x00033d63) popup_keymap_window

0x9a4f,	// (0x0003453d) status_icon_pane

0xe804,	// (0x000392f2) cell_ai5_widget_pane_g3_ParamLimits

0xe818,	// (0x00039306) cell_ai5_widget_pane_g4_ParamLimits

0xe824,	// (0x00039312) cell_ai5_widget_pane_g5_ParamLimits

0xe84a,	// (0x00039338) cell_ai5_widget_pane_g8_ParamLimits

0xe84a,	// (0x00039338) cell_ai5_widget_pane_g8

0xe85e,	// (0x0003934c) cell_ai5_widget_pane_g9_ParamLimits

0xe85e,	// (0x0003934c) cell_ai5_widget_pane_g9

0xe872,	// (0x00039360) cell_ai5_widget_pane_g10_ParamLimits

0xe872,	// (0x00039360) cell_ai5_widget_pane_g10

0xeb95,	// (0x00039683) status_icon_pane_g1

0x71b0,	// (0x00031c9e) bg_popup_sub_pane_cp13

0xeb9d,	// (0x0003968b) popup_keymap_window_t1

0x900f,	// (0x00033afd) control_pane_g6_ParamLimits

0x900f,	// (0x00033afd) control_pane_g6

0x901c,	// (0x00033b0a) control_pane_g7_ParamLimits

0x901c,	// (0x00033b0a) control_pane_g7

0x9029,	// (0x00033b17) control_pane_g8_ParamLimits

0x9029,	// (0x00033b17) control_pane_g8

0xeab8,	// (0x000395a6) dt_sta_controll_pane_ParamLimits

0xeac5,	// (0x000395b3) dt_sta_indi_pane_ParamLimits

0xead6,	// (0x000395c4) dt_sta_title_pane_ParamLimits

0x800e,	// (0x00032afc) aid_size_touch_scroll_bar_cale

0x4e83,	// (0x0002f971) popup_discreet_window_ParamLimits

0x4e83,	// (0x0002f971) popup_discreet_window

0x4f11,	// (0x0002f9ff) popup_sk_window

0xa277,	// (0x00034d65) bg_popup_sub_pane_cp28_ParamLimits

0xa277,	// (0x00034d65) bg_popup_sub_pane_cp28

0xebab,	// (0x00039699) popup_discreet_window_g1_ParamLimits

0xebab,	// (0x00039699) popup_discreet_window_g1

0xebcb,	// (0x000396b9) popup_discreet_window_t1_ParamLimits

0xebcb,	// (0x000396b9) popup_discreet_window_t1

0xebe9,	// (0x000396d7) popup_discreet_window_t2_ParamLimits

0xebe9,	// (0x000396d7) popup_discreet_window_t2

0x0002,

0xfec5,	// (0x0003a9b3) popup_discreet_window_t_ParamLimits

0xfec5,	// (0x0003a9b3) popup_discreet_window_t

0x7178,	// (0x00031c66) popup_sk_window_g1

0x7182,	// (0x00031c70) popup_sk_window_g2

0x0001,

0xfecc,	// (0x0003a9ba) popup_sk_window_g

0xec3b,	// (0x00039729) popup_sk_window_t1

0xec49,	// (0x00039737) popup_sk_window_t1_copy1

0xe7f4,	// (0x000392e2) cell_ai5_widget_pane_g2_ParamLimits

0xe949,	// (0x00039437) cell_ai5_widget_pane_t9_ParamLimits

0xe949,	// (0x00039437) cell_ai5_widget_pane_t9

0x71b0,	// (0x00031c9e) main_fep_fshwr2_pane

0xec57,	// (0x00039745) aid_fshwr2_btn_pane

0xec5f,	// (0x0003974d) aid_fshwr2_syb_pane

0xec67,	// (0x00039755) aid_fshwr2_txt_pane

0xec6f,	// (0x0003975d) fshwr2_func_candi_pane

0xec79,	// (0x00039767) fshwr2_hwr_syb_pane

0xec83,	// (0x00039771) fshwr2_icf_pane

0x71b0,	// (0x00031c9e) fshwr2_icf_bg_pane

0xeca5,	// (0x00039793) fshwr2_icf_pane_t1_ParamLimits

0xeca5,	// (0x00039793) fshwr2_icf_pane_t1

0xc246,	// (0x00036d34) fshwr2_func_candi_pane_g1

0xecbc,	// (0x000397aa) fshwr2_func_candi_row_pane_ParamLimits

0xecbc,	// (0x000397aa) fshwr2_func_candi_row_pane

0xeccd,	// (0x000397bb) cell_fshwr2_syb_pane_ParamLimits

0xeccd,	// (0x000397bb) cell_fshwr2_syb_pane

0xc4d0,	// (0x00036fbe) fshwr2_hwr_syb_pane_g1_ParamLimits

0xc4d0,	// (0x00036fbe) fshwr2_hwr_syb_pane_g1

0x71b0,	// (0x00031c9e) bg_popup_call_pane_cp01

0xece7,	// (0x000397d5) fshwr2_func_candi_cell_pane_ParamLimits

0xece7,	// (0x000397d5) fshwr2_func_candi_cell_pane

0xed19,	// (0x00039807) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xed19,	// (0x00039807) fshwr2_func_candi_cell_bg_pane

0xed33,	// (0x00039821) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xed33,	// (0x00039821) fshwr2_func_candi_cell_pane_g1

0xed53,	// (0x00039841) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xed53,	// (0x00039841) fshwr2_func_candi_cell_pane_t1

0x71b0,	// (0x00031c9e) bg_button_pane_cp08

0x8d34,	// (0x00033822) cell_fshwr2_syb_bg_pane

0xed66,	// (0x00039854) cell_fshwr2_syb_bg_pane_g1

0xed6e,	// (0x0003985c) cell_fshwr2_syb_bg_pane_t1

0x80d6,	// (0x00032bc4) main_tmo_pane

0xada1,	// (0x0003588f) uni_indicator_pane_g1_ParamLimits

0xadb6,	// (0x000358a4) uni_indicator_pane_g2_ParamLimits

0xadcc,	// (0x000358ba) uni_indicator_pane_g3_ParamLimits

0xade2,	// (0x000358d0) uni_indicator_pane_g4_ParamLimits

0xade2,	// (0x000358d0) uni_indicator_pane_g4

0xadf6,	// (0x000358e4) uni_indicator_pane_g5_ParamLimits

0xadf6,	// (0x000358e4) uni_indicator_pane_g5

0xae0a,	// (0x000358f8) uni_indicator_pane_g6_ParamLimits

0xae0a,	// (0x000358f8) uni_indicator_pane_g6

0xf95a,	// (0x0003a448) uni_indicator_pane_g_ParamLimits

0xd752,	// (0x00038240) popup_tmo_note_window_ParamLimits

0xd752,	// (0x00038240) popup_tmo_note_window

0x71b0,	// (0x00031c9e) fshwr2_bg_pane

0xed44,	// (0x00039832) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xed44,	// (0x00039832) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfed1,	// (0x0003a9bf) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfed1,	// (0x0003a9bf) fshwr2_func_candi_cell_pane_g

0xc246,	// (0x00036d34) bg_popup_window_pane_cp01

0xed7d,	// (0x0003986b) bg_popup_window_pane_g1_cp01

0xed86,	// (0x00039874) bg_popup_window_pane_cp22_ParamLimits

0xed86,	// (0x00039874) bg_popup_window_pane_cp22

0xed94,	// (0x00039882) listscroll_tmo_link_pane_ParamLimits

0xed94,	// (0x00039882) listscroll_tmo_link_pane

0xedd4,	// (0x000398c2) popup_tmo_note_window_g1_ParamLimits

0xedd4,	// (0x000398c2) popup_tmo_note_window_g1

0xede1,	// (0x000398cf) tmo_note_info_pane_ParamLimits

0xede1,	// (0x000398cf) tmo_note_info_pane

0xedfb,	// (0x000398e9) list_tmo_note_info_pane_g1_ParamLimits

0xedfb,	// (0x000398e9) list_tmo_note_info_pane_g1

0xee12,	// (0x00039900) list_tmo_note_info_pane_g2_ParamLimits

0xee12,	// (0x00039900) list_tmo_note_info_pane_g2

0x0001,

0xfed6,	// (0x0003a9c4) list_tmo_note_info_pane_g_ParamLimits

0xfed6,	// (0x0003a9c4) list_tmo_note_info_pane_g

0xee2e,	// (0x0003991c) list_tmo_note_info_text_pane_ParamLimits

0xee2e,	// (0x0003991c) list_tmo_note_info_text_pane

0xeeb3,	// (0x000399a1) list_tmo_link_pane

0xeec0,	// (0x000399ae) scroll_pane_cp20

0xeecd,	// (0x000399bb) list_single_tmo_link_pane_ParamLimits

0xeecd,	// (0x000399bb) list_single_tmo_link_pane

0xeedd,	// (0x000399cb) list_single_tmo_link_pane_t1

0xeeeb,	// (0x000399d9) list_tmo_note_info_text_pane_t1_ParamLimits

0xeeeb,	// (0x000399d9) list_tmo_note_info_text_pane_t1

0x819c,	// (0x00032c8a) aid_size_touch_scroll_bar_cp01_ParamLimits

0x819c,	// (0x00032c8a) aid_size_touch_scroll_bar_cp01

0x56a7,	// (0x00030195) aid_size_touch_slider_marker

0x4ef9,	// (0x0002f9e7) popup_settings_window_ParamLimits

0x4ef9,	// (0x0002f9e7) popup_settings_window

0x5e30,	// (0x0003091e) popup_candi_list_indi_window

0x973b,	// (0x00034229) aid_touch_navi_pane_ParamLimits

0x6948,	// (0x00031436) rs_clock_indi_pane

0x6951,	// (0x0003143f) sctrl_sk_bottom_pane_ParamLimits

0x6962,	// (0x00031450) sctrl_sk_top_pane_ParamLimits

0x6a63,	// (0x00031551) popup_fep_tooltip_window

0xe7b8,	// (0x000392a6) aid_size_cell_widget_grid_ParamLimits

0xe7e8,	// (0x000392d6) cell_ai5_widget_pane_g1_ParamLimits

0xe7e8,	// (0x000392d6) cell_ai5_widget_pane_g1

0xe830,	// (0x0003931e) cell_ai5_widget_pane_g6_ParamLimits

0xe83e,	// (0x0003932c) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe54,	// (0x0003a942) cell_ai5_widget_pane_g_ParamLimits

0xfe54,	// (0x0003a942) cell_ai5_widget_pane_g

0xe96d,	// (0x0003945b) cell_ai5_widget_pane_t10_ParamLimits

0xe96d,	// (0x0003945b) cell_ai5_widget_pane_t10

0xe97f,	// (0x0003946d) grid_ai5_widget_pane_ParamLimits

0xea20,	// (0x0003950e) cell_contacts_ai5_widget_pane_ParamLimits

0xea20,	// (0x0003950e) cell_contacts_ai5_widget_pane

0xebfe,	// (0x000396ec) popup_discreet_window_t3_ParamLimits

0xebfe,	// (0x000396ec) popup_discreet_window_t3

0xec8d,	// (0x0003977b) popup_fshwr2_char_preview_window_ParamLimits

0xec8d,	// (0x0003977b) popup_fshwr2_char_preview_window

0xee4c,	// (0x0003993a) tmo_note_info_pane_t1

0xee61,	// (0x0003994f) tmo_note_info_pane_t2

0xee7a,	// (0x00039968) tmo_note_info_pane_t3

0xee8f,	// (0x0003997d) tmo_note_info_pane_t4

0xeea1,	// (0x0003998f) tmo_note_info_pane_t5

0x0004,

0xfedb,	// (0x0003a9c9) tmo_note_info_pane_t

0xeeb3,	// (0x000399a1) list_tmo_link_pane_ParamLimits

0xeec0,	// (0x000399ae) scroll_pane_cp20_ParamLimits

0x71b0,	// (0x00031c9e) bg_popup_fep_char_preview_window_cp01

0xef04,	// (0x000399f2) popup_fshwr2_char_preview_window_t1

0xef12,	// (0x00039a00) popup_candi_list_indi_window_g1

0xef1b,	// (0x00039a09) bg_cell_contacts_ai5_widget_pane

0xef27,	// (0x00039a15) cell_contacts_ai5_widget_pane_g1

0xef3b,	// (0x00039a29) cell_contacts_ai5_widget_pane_g2

0xef4a,	// (0x00039a38) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfee6,	// (0x0003a9d4) cell_contacts_ai5_widget_pane_g

0xef5d,	// (0x00039a4b) cell_contacts_ai5_widget_pane_t1

0x80d6,	// (0x00032bc4) highlight_cell_shortcut_ai5_widget_pane_cp01

0xefd7,	// (0x00039ac5) settings_container_pane

0x8d34,	// (0x00033822) listscroll_set_pane_copy1

0xb97b,	// (0x00036469) scroll_pane_cp121_copy1

0xefe3,	// (0x00039ad1) set_content_pane_copy1

0xefeb,	// (0x00039ad9) aid_height_set_list_copy1_ParamLimits

0xefeb,	// (0x00039ad9) aid_height_set_list_copy1

0xb00a,	// (0x00035af8) aid_size_parent_copy1_ParamLimits

0xb00a,	// (0x00035af8) aid_size_parent_copy1

0xeff7,	// (0x00039ae5) button_value_adjust_pane_cp6_copy1_ParamLimits

0xeff7,	// (0x00039ae5) button_value_adjust_pane_cp6_copy1

0x90ba,	// (0x00033ba8) list_highlight_pane_cp2_copy1_ParamLimits

0x90ba,	// (0x00033ba8) list_highlight_pane_cp2_copy1

0xf00b,	// (0x00039af9) list_set_pane_copy1_ParamLimits

0xf00b,	// (0x00039af9) list_set_pane_copy1

0xef72,	// (0x00039a60) main_pane_set_t1_copy1_ParamLimits

0xef72,	// (0x00039a60) main_pane_set_t1_copy1

0xefac,	// (0x00039a9a) main_pane_set_t2_copy1_ParamLimits

0xefac,	// (0x00039a9a) main_pane_set_t2_copy1

0xf0d2,	// (0x00039bc0) main_pane_set_t3_copy1

0xf0e0,	// (0x00039bce) main_pane_set_t4_copy1

0xefcb,	// (0x00039ab9) set_content_pane_g1_copy1_ParamLimits

0xefcb,	// (0x00039ab9) set_content_pane_g1_copy1

0xf0ee,	// (0x00039bdc) setting_code_pane_copy1

0xf0f8,	// (0x00039be6) setting_slider_graphic_pane_copy1

0xf0f8,	// (0x00039be6) setting_slider_pane_copy1

0xf102,	// (0x00039bf0) setting_text_pane_copy1

0xf10c,	// (0x00039bfa) setting_volume_pane_copy1

0xf115,	// (0x00039c03) settings_code_pane_cp2_copy1

0xf11d,	// (0x00039c0b) settings_code_pane_cp_copy1_ParamLimits

0xf11d,	// (0x00039c0b) settings_code_pane_cp_copy1

0xf131,	// (0x00039c1f) volume_set_pane_copy1

0xf13d,	// (0x00039c2b) volume_set_pane_g10_copy1

0xf149,	// (0x00039c37) volume_set_pane_g1_copy1

0xf153,	// (0x00039c41) volume_set_pane_g2_copy1

0xf15d,	// (0x00039c4b) volume_set_pane_g3_copy1

0xf167,	// (0x00039c55) volume_set_pane_g4_copy1

0xf171,	// (0x00039c5f) volume_set_pane_g5_copy1

0xf17b,	// (0x00039c69) volume_set_pane_g6_copy1

0xf185,	// (0x00039c73) volume_set_pane_g7_copy1

0xf18f,	// (0x00039c7d) volume_set_pane_g8_copy1

0xf199,	// (0x00039c87) volume_set_pane_g9_copy1

0x72a4,	// (0x00031d92) bg_set_opt_pane_cp_copy1_ParamLimits

0x72a4,	// (0x00031d92) bg_set_opt_pane_cp_copy1

0xf1a3,	// (0x00039c91) setting_slider_pane_t1_copy1_ParamLimits

0xf1a3,	// (0x00039c91) setting_slider_pane_t1_copy1

0xf1c1,	// (0x00039caf) setting_slider_pane_t2_copy1_ParamLimits

0xf1c1,	// (0x00039caf) setting_slider_pane_t2_copy1

0xf1db,	// (0x00039cc9) setting_slider_pane_t3_copy1_ParamLimits

0xf1db,	// (0x00039cc9) setting_slider_pane_t3_copy1

0xf1f3,	// (0x00039ce1) slider_set_pane_copy1_ParamLimits

0xf1f3,	// (0x00039ce1) slider_set_pane_copy1

0x813d,	// (0x00032c2b) set_opt_bg_pane_g1_copy2

0x8145,	// (0x00032c33) set_opt_bg_pane_g2_copy2

0xf209,	// (0x00039cf7) set_opt_bg_pane_g3_copy2

0x8155,	// (0x00032c43) set_opt_bg_pane_g4_copy2

0x815d,	// (0x00032c4b) set_opt_bg_pane_g5_copy2

0x8165,	// (0x00032c53) set_opt_bg_pane_g6_copy2

0xf213,	// (0x00039d01) set_opt_bg_pane_g7_copy2

0xf21d,	// (0x00039d0b) set_opt_bg_pane_g8_copy2

0xf227,	// (0x00039d15) set_opt_bg_pane_g9_copy2

0xf231,	// (0x00039d1f) aid_size_touch_slider_mark_copy1_ParamLimits

0xf231,	// (0x00039d1f) aid_size_touch_slider_mark_copy1

0xf245,	// (0x00039d33) slider_set_pane_g1_copy1

0xf24e,	// (0x00039d3c) slider_set_pane_g2_copy1

0xc05e,	// (0x00036b4c) slider_set_pane_g3_copy1_ParamLimits

0xc05e,	// (0x00036b4c) slider_set_pane_g3_copy1

0xc072,	// (0x00036b60) slider_set_pane_g4_copy1_ParamLimits

0xc072,	// (0x00036b60) slider_set_pane_g4_copy1

0xc08a,	// (0x00036b78) slider_set_pane_g5_copy1_ParamLimits

0xc08a,	// (0x00036b78) slider_set_pane_g5_copy1

0xc05e,	// (0x00036b4c) slider_set_pane_g6_copy1_ParamLimits

0xc05e,	// (0x00036b4c) slider_set_pane_g6_copy1

0xf256,	// (0x00039d44) slider_set_pane_g7_copy1_ParamLimits

0xf256,	// (0x00039d44) slider_set_pane_g7_copy1

0x71c4,	// (0x00031cb2) bg_set_opt_pane_cp2_copy1

0xf26c,	// (0x00039d5a) setting_slider_graphic_pane_g1_copy1

0xf275,	// (0x00039d63) setting_slider_graphic_pane_t1_copy1

0xf285,	// (0x00039d73) setting_slider_graphic_pane_t2_copy1

0xf295,	// (0x00039d83) slider_set_pane_cp_copy1

0xf2a5,	// (0x00039d93) input_focus_pane_cp1_copy1

0xf2ae,	// (0x00039d9c) list_set_text_pane_copy1

0xf2b6,	// (0x00039da4) setting_text_pane_g1_copy1

0x7c93,	// (0x00032781) set_text_pane_t1_copy1

0xf2a5,	// (0x00039d93) input_focus_pane_cp2_copy1

0xf2b6,	// (0x00039da4) setting_code_pane_g1_copy1

0xf2bf,	// (0x00039dad) setting_code_pane_t1_copy1

0xf2cd,	// (0x00039dbb) list_set_graphic_pane_copy1

0x71c4,	// (0x00031cb2) bg_set_opt_pane_cp4_copy1

0x8a2e,	// (0x0003351c) list_set_graphic_pane_g1_copy1_ParamLimits

0x8a2e,	// (0x0003351c) list_set_graphic_pane_g1_copy1

0xf2df,	// (0x00039dcd) list_set_graphic_pane_g2_copy1

0x8a46,	// (0x00033534) list_set_graphic_pane_t1_copy1_ParamLimits

0x8a46,	// (0x00033534) list_set_graphic_pane_t1_copy1

0xc246,	// (0x00036d34) rs_clock_indi_pane_g1

0xf2e7,	// (0x00039dd5) rs_clock_indi_pane_t1

0xf2f5,	// (0x00039de3) rs_indi_pane

0xf2fd,	// (0x00039deb) rs_indi_pane_g1

0xf306,	// (0x00039df4) rs_indi_pane_g2

0xf30f,	// (0x00039dfd) rs_indi_pane_g3

0x0002,

0xfeed,	// (0x0003a9db) rs_indi_pane_g

0x8d34,	// (0x00033822) bg_popup_preview_window_pane_cp03

0xf318,	// (0x00039e06) popup_fep_tooltip_window_t1

0xcefa,	// (0x000379e8) popup_note2_window_g2_ParamLimits

0xcefa,	// (0x000379e8) popup_note2_window_g2

0x0001,

0xfc8b,	// (0x0003a779) popup_note2_window_g_ParamLimits

0xfc8b,	// (0x0003a779) popup_note2_window_g

0xd402,	// (0x00037ef0) bg_popup_sub_pane_cp11_ParamLimits

0xd40f,	// (0x00037efd) cell_ai3_links_pane_g1_ParamLimits

0xd426,	// (0x00037f14) cell_ai3_links_pane_t1

0x7c93,	// (0x00032781) set_text_pane_t1_copy1_ParamLimits

0x8c41,	// (0x0003372f) cell_graphic_popup_pane_cp2_ParamLimits

0x8c41,	// (0x0003372f) cell_graphic_popup_pane_cp2

0xf326,	// (0x00039e14) cell_graphic_popup_pane_g1_cp2

0x7e21,	// (0x0003290f) cell_graphic_popup_pane_g2_cp2

0xf32e,	// (0x00039e1c) cell_graphic_popup_pane_g3_cp2

0xf336,	// (0x00039e24) cell_graphic_popup_pane_t2_cp2

0x7e32,	// (0x00032920) grid_highlight_pane_cp3_cp2

0x8489,	// (0x00032f77) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x80d6,	// (0x00032bc4) main_tmo_pane_ParamLimits

0xd746,	// (0x00038234) popup_tmo_big_image_note_window

0xe7d8,	// (0x000392c6) cell_ai5_widget_list_pane

0xe7e0,	// (0x000392ce) cell_ai5_widget_lrg_icon_pane

0xee4c,	// (0x0003993a) tmo_note_info_pane_t1_ParamLimits

0xee61,	// (0x0003994f) tmo_note_info_pane_t2_ParamLimits

0xee7a,	// (0x00039968) tmo_note_info_pane_t3_ParamLimits

0xee8f,	// (0x0003997d) tmo_note_info_pane_t4_ParamLimits

0xeea1,	// (0x0003998f) tmo_note_info_pane_t5_ParamLimits

0xfedb,	// (0x0003a9c9) tmo_note_info_pane_t_ParamLimits

0xefd7,	// (0x00039ac5) settings_container_pane_ParamLimits

0xf29d,	// (0x00039d8b) indicator_popup_pane_cp5

0xf29d,	// (0x00039d8b) indicator_popup_pane_cp6

0xf2cd,	// (0x00039dbb) list_set_graphic_pane_copy1_ParamLimits

0x71b0,	// (0x00031c9e) bg_popup_window_pane_cp23

0xf344,	// (0x00039e32) popup_tmo_big_image_note_window_g1

0xf350,	// (0x00039e3e) popup_tmo_big_image_note_window_t1

0xf360,	// (0x00039e4e) popup_tmo_big_image_note_window_t2

0xf370,	// (0x00039e5e) popup_tmo_big_image_note_window_t3

0x0002,

0xfef4,	// (0x0003a9e2) popup_tmo_big_image_note_window_t

0xf380,	// (0x00039e6e) cell_ai5_widget_lrg_icon_pane_g1

0xf388,	// (0x00039e76) cell_ai5_widget_lrg_icon_pane_t1

0xf396,	// (0x00039e84) cell_ai5_widget_list_row_pane_ParamLimits

0xf396,	// (0x00039e84) cell_ai5_widget_list_row_pane

0xf3af,	// (0x00039e9d) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf3af,	// (0x00039e9d) cell_ai5_widget_list_row_pane_g1

0xf3bc,	// (0x00039eaa) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf3bc,	// (0x00039eaa) cell_ai5_widget_list_row_pane_t1

0xf3d4,	// (0x00039ec2) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf3d4,	// (0x00039ec2) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfefb,	// (0x0003a9e9) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfefb,	// (0x0003a9e9) cell_ai5_widget_list_row_pane_t

0x4da6,	// (0x0002f894) main_fep_vtchi_ss_pane

0xf3e6,	// (0x00039ed4) popup_fep_char_pre_window

0xf3ee,	// (0x00039edc) popup_fep_ituss_window

0xf3f9,	// (0x00039ee7) popup_fep_vkbss_window

0xf404,	// (0x00039ef2) grid_vkbss_keypad_pane_ParamLimits

0xf404,	// (0x00039ef2) grid_vkbss_keypad_pane

0xf414,	// (0x00039f02) ituss_keypad_pane

0xf41c,	// (0x00039f0a) aid_vkbss_key_offset_ParamLimits

0xf41c,	// (0x00039f0a) aid_vkbss_key_offset

0xf42b,	// (0x00039f19) cell_vkbss_key_pane_ParamLimits

0xf42b,	// (0x00039f19) cell_vkbss_key_pane

0xf441,	// (0x00039f2f) bg_cell_vkbss_key_g1_ParamLimits

0xf441,	// (0x00039f2f) bg_cell_vkbss_key_g1

0xf44d,	// (0x00039f3b) cell_vkbss_key_3p_pane_ParamLimits

0xf44d,	// (0x00039f3b) cell_vkbss_key_3p_pane

0xf467,	// (0x00039f55) cell_vkbss_key_g1_ParamLimits

0xf467,	// (0x00039f55) cell_vkbss_key_g1

0xf481,	// (0x00039f6f) cell_vkbss_key_t1_ParamLimits

0xf481,	// (0x00039f6f) cell_vkbss_key_t1

0xf4ac,	// (0x00039f9a) cell_ituss_key_pane_ParamLimits

0xf4ac,	// (0x00039f9a) cell_ituss_key_pane

0xf4bb,	// (0x00039fa9) bg_cell_ituss_key_g1_ParamLimits

0xf4bb,	// (0x00039fa9) bg_cell_ituss_key_g1

0xf4c7,	// (0x00039fb5) cell_ituss_key_pane_g1_ParamLimits

0xf4c7,	// (0x00039fb5) cell_ituss_key_pane_g1

0xf4d3,	// (0x00039fc1) cell_ituss_key_pane_g2_ParamLimits

0xf4d3,	// (0x00039fc1) cell_ituss_key_pane_g2

0x0001,

0xff00,	// (0x0003a9ee) cell_ituss_key_pane_g_ParamLimits

0xff00,	// (0x0003a9ee) cell_ituss_key_pane_g

0xf4e7,	// (0x00039fd5) cell_ituss_key_t1_ParamLimits

0xf4e7,	// (0x00039fd5) cell_ituss_key_t1

0xf505,	// (0x00039ff3) cell_ituss_key_t2_ParamLimits

0xf505,	// (0x00039ff3) cell_ituss_key_t2

0xf524,	// (0x0003a012) cell_ituss_key_t3_ParamLimits

0xf524,	// (0x0003a012) cell_ituss_key_t3

0xf543,	// (0x0003a031) cell_ituss_key_t4_ParamLimits

0xf543,	// (0x0003a031) cell_ituss_key_t4

0x0003,

0xff05,	// (0x0003a9f3) cell_ituss_key_t_ParamLimits

0xff05,	// (0x0003a9f3) cell_ituss_key_t

0xf562,	// (0x0003a050) cell_vkbss_key_3p_pane_g1

0xf56a,	// (0x0003a058) cell_vkbss_key_3p_pane_g2

0xf572,	// (0x0003a060) cell_vkbss_key_3p_pane_g3

0x0002,

0xff0e,	// (0x0003a9fc) cell_vkbss_key_3p_pane_g

0x71b0,	// (0x00031c9e) bg_popup_fep_char_preview_window_cp02

0xf57a,	// (0x0003a068) popup_fep_char_pre_window_t1

0xe7ae,	// (0x0003929c) main_ai5_sk_pane

0xef1b,	// (0x00039a09) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xef27,	// (0x00039a15) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xef3b,	// (0x00039a29) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xef4a,	// (0x00039a38) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfee6,	// (0x0003a9d4) cell_contacts_ai5_widget_pane_g_ParamLimits

0xef5d,	// (0x00039a4b) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x80d6,	// (0x00032bc4) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf589,	// (0x0003a077) main_ai5_sk_pane_g1
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

} // end of namespace AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Small
