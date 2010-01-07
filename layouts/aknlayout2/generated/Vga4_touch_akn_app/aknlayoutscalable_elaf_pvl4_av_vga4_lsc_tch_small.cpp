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

#include "aknlayoutscalable_elaf_pvl4_av_vga4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0001f7c3 };

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
0xba52,	// (0x0002b215) Screen

0xba5e,	// (0x0002b221) application_window_ParamLimits

0xba5e,	// (0x0002b221) application_window

0x2a2f,	// (0x000221f2) screen_g1

0xba96,	// (0x0002b259) area_bottom_pane_ParamLimits

0xba96,	// (0x0002b259) area_bottom_pane

0x108f,	// (0x00020852) area_top_pane_ParamLimits

0x108f,	// (0x00020852) area_top_pane

0x1123,	// (0x000208e6) main_pane_ParamLimits

0x1123,	// (0x000208e6) main_pane

0x2a39,	// (0x000221fc) misc_graphics

0xd2c1,	// (0x0002ca84) battery_pane_ParamLimits

0xd2c1,	// (0x0002ca84) battery_pane

0x571b,	// (0x00024ede) bg_status_flat_pane_g8

0x5723,	// (0x00024ee6) bg_status_flat_pane_g9

0x4b01,	// (0x000242c4) context_pane_ParamLimits

0x4b01,	// (0x000242c4) context_pane

0xd46c,	// (0x0002cc2f) navi_pane_ParamLimits

0xd46c,	// (0x0002cc2f) navi_pane

0xd4f5,	// (0x0002ccb8) signal_pane_ParamLimits

0xd4f5,	// (0x0002ccb8) signal_pane

0x0008,

0xf8a8,	// (0x0002f06b) bg_status_flat_pane_g

0xd585,	// (0x0002cd48) status_pane_g1_ParamLimits

0xd585,	// (0x0002cd48) status_pane_g1

0xd59b,	// (0x0002cd5e) status_pane_g2_ParamLimits

0xd59b,	// (0x0002cd5e) status_pane_g2

0x4d41,	// (0x00024504) status_pane_g3_ParamLimits

0x4d41,	// (0x00024504) status_pane_g3

0x0004,

0xf7db,	// (0x0002ef9e) status_pane_g_ParamLimits

0xf7db,	// (0x0002ef9e) status_pane_g

0xd5a7,	// (0x0002cd6a) title_pane_ParamLimits

0xd5a7,	// (0x0002cd6a) title_pane

0xd604,	// (0x0002cdc7) uni_indicator_pane_ParamLimits

0xd604,	// (0x0002cdc7) uni_indicator_pane

0x432e,	// (0x00023af1) bg_list_pane_ParamLimits

0x432e,	// (0x00023af1) bg_list_pane

0xb7be,	// (0x0002af81) find_pane

0xcb1a,	// (0x0002c2dd) listscroll_app_pane_ParamLimits

0xcb1a,	// (0x0002c2dd) listscroll_app_pane

0x4362,	// (0x00023b25) listscroll_form_pane

0xb7c6,	// (0x0002af89) listscroll_gen_pane_ParamLimits

0xb7c6,	// (0x0002af89) listscroll_gen_pane

0x4362,	// (0x00023b25) listscroll_set_pane

0x62d4,	// (0x00025a97) main_idle_act_pane

0x400a,	// (0x000237cd) main_idle_trad_pane

0x400a,	// (0x000237cd) main_list_empty_pane

0x4390,	// (0x00023b53) main_midp_pane

0x439c,	// (0x00023b5f) main_pane_g1_ParamLimits

0x439c,	// (0x00023b5f) main_pane_g1

0xcb26,	// (0x0002c2e9) popup_ai_message_window_ParamLimits

0xcb26,	// (0x0002c2e9) popup_ai_message_window

0xcbc6,	// (0x0002c389) popup_fep_china_uni_window_ParamLimits

0xcbc6,	// (0x0002c389) popup_fep_china_uni_window

0x44ba,	// (0x00023c7d) popup_fep_japan_candidate_window_ParamLimits

0x44ba,	// (0x00023c7d) popup_fep_japan_candidate_window

0x44e4,	// (0x00023ca7) popup_fep_japan_predictive_window_ParamLimits

0x44e4,	// (0x00023ca7) popup_fep_japan_predictive_window

0xcc26,	// (0x0002c3e9) popup_find_window

0xcc43,	// (0x0002c406) popup_grid_graphic_window_ParamLimits

0xcc43,	// (0x0002c406) popup_grid_graphic_window

0x4555,	// (0x00023d18) popup_large_graphic_colour_window

0xcce7,	// (0x0002c4aa) popup_menu_window_ParamLimits

0xcce7,	// (0x0002c4aa) popup_menu_window

0xced3,	// (0x0002c696) popup_note_image_window

0xce93,	// (0x0002c656) popup_note_wait_window_ParamLimits

0xce93,	// (0x0002c656) popup_note_wait_window

0xceeb,	// (0x0002c6ae) popup_note_window_ParamLimits

0xceeb,	// (0x0002c6ae) popup_note_window

0xcf99,	// (0x0002c75c) popup_query_code_window_ParamLimits

0xcf99,	// (0x0002c75c) popup_query_code_window

0x47c1,	// (0x00023f84) popup_query_data_code_window_ParamLimits

0x47c1,	// (0x00023f84) popup_query_data_code_window

0xcfd9,	// (0x0002c79c) popup_query_data_window_ParamLimits

0xcfd9,	// (0x0002c79c) popup_query_data_window

0xd06d,	// (0x0002c830) popup_query_sat_info_window_ParamLimits

0xd06d,	// (0x0002c830) popup_query_sat_info_window

0xd118,	// (0x0002c8db) popup_snote_single_graphic_window_ParamLimits

0xd118,	// (0x0002c8db) popup_snote_single_graphic_window

0xd118,	// (0x0002c8db) popup_snote_single_text_window_ParamLimits

0xd118,	// (0x0002c8db) popup_snote_single_text_window

0x485c,	// (0x0002401f) popup_sub_window_general

0x49a2,	// (0x00024165) popup_window_general_ParamLimits

0x49a2,	// (0x00024165) popup_window_general

0x49bb,	// (0x0002417e) power_save_pane

0xbfdc,	// (0x0002b79f) control_pane_g1_ParamLimits

0xbfdc,	// (0x0002b79f) control_pane_g1

0x18c3,	// (0x00021086) control_pane_g2_ParamLimits

0x18c3,	// (0x00021086) control_pane_g2

0x42d7,	// (0x00023a9a) control_pane_g3_ParamLimits

0x42d7,	// (0x00023a9a) control_pane_g3

0x0007,

0xf7c3,	// (0x0002ef86) control_pane_g_ParamLimits

0xf7c3,	// (0x0002ef86) control_pane_g

0xc01e,	// (0x0002b7e1) control_pane_t1_ParamLimits

0xc01e,	// (0x0002b7e1) control_pane_t1

0xc07c,	// (0x0002b83f) control_pane_t2_ParamLimits

0xc07c,	// (0x0002b83f) control_pane_t2

0x0002,

0xf7d4,	// (0x0002ef97) control_pane_t_ParamLimits

0xf7d4,	// (0x0002ef97) control_pane_t

0x41f8,	// (0x000239bb) navi_navi_volume_pane_cp1

0x4201,	// (0x000239c4) status_small_icon_pane

0x4209,	// (0x000239cc) status_small_pane_g1_ParamLimits

0x4209,	// (0x000239cc) status_small_pane_g1

0x423d,	// (0x00023a00) status_small_pane_g2_ParamLimits

0x423d,	// (0x00023a00) status_small_pane_g2

0x4249,	// (0x00023a0c) status_small_pane_g3_ParamLimits

0x4249,	// (0x00023a0c) status_small_pane_g3

0x4255,	// (0x00023a18) status_small_pane_g4_ParamLimits

0x4255,	// (0x00023a18) status_small_pane_g4

0x4261,	// (0x00023a24) status_small_pane_g5_ParamLimits

0x4261,	// (0x00023a24) status_small_pane_g5

0x4270,	// (0x00023a33) status_small_pane_g6_ParamLimits

0x4270,	// (0x00023a33) status_small_pane_g6

0x0007,

0xf7b2,	// (0x0002ef75) status_small_pane_g_ParamLimits

0xf7b2,	// (0x0002ef75) status_small_pane_g

0x42a0,	// (0x00023a63) status_small_pane_t1

0x42c3,	// (0x00023a86) status_small_wait_pane_ParamLimits

0x42c3,	// (0x00023a86) status_small_wait_pane

0xc95e,	// (0x0002c121) aid_levels_signal_ParamLimits

0xc95e,	// (0x0002c121) aid_levels_signal

0xc976,	// (0x0002c139) signal_pane_g1_ParamLimits

0xc976,	// (0x0002c139) signal_pane_g1

0xc991,	// (0x0002c154) signal_pane_g2_ParamLimits

0xc991,	// (0x0002c154) signal_pane_g2

0x0001,

0xf747,	// (0x0002ef0a) signal_pane_g_ParamLimits

0xf747,	// (0x0002ef0a) signal_pane_g

0x3ad1,	// (0x00023294) context_pane_g1

0xbc13,	// (0x0002b3d6) title_pane_g1

0xbc48,	// (0x0002b40b) title_pane_t1

0x2ae1,	// (0x000222a4) title_pane_t2

0x2b07,	// (0x000222ca) title_pane_t3

0x0002,

0xf59b,	// (0x0002ed5e) title_pane_t

0xd62c,	// (0x0002cdef) aid_levels_battery_ParamLimits

0xd62c,	// (0x0002cdef) aid_levels_battery

0xd648,	// (0x0002ce0b) battery_pane_g1_ParamLimits

0xd648,	// (0x0002ce0b) battery_pane_g1

0xd665,	// (0x0002ce28) battery_pane_g2_ParamLimits

0xd665,	// (0x0002ce28) battery_pane_g2

0x0001,

0xf7e6,	// (0x0002efa9) battery_pane_g_ParamLimits

0xf7e6,	// (0x0002efa9) battery_pane_g

0xd888,	// (0x0002d04b) uni_indicator_pane_g1

0xd89d,	// (0x0002d060) uni_indicator_pane_g2

0xd8b2,	// (0x0002d075) uni_indicator_pane_g3

0x0005,

0xf950,	// (0x0002f113) uni_indicator_pane_g

0x3e78,	// (0x0002363b) navi_icon_pane_ParamLimits

0x3e78,	// (0x0002363b) navi_icon_pane

0x3dbf,	// (0x00023582) navi_midp_pane

0x3e94,	// (0x00023657) navi_navi_pane

0x3e9e,	// (0x00023661) navi_text_pane_ParamLimits

0x3e9e,	// (0x00023661) navi_text_pane

0x2a2f,	// (0x000221f2) status_small_wait_pane_g1

0x2f4b,	// (0x0002270e) status_small_wait_pane_g2

0x0001,

0xf94b,	// (0x0002f10e) status_small_wait_pane_g

0xd827,	// (0x0002cfea) navi_navi_icon_text_pane

0xd82f,	// (0x0002cff2) navi_navi_pane_g1_ParamLimits

0xd82f,	// (0x0002cff2) navi_navi_pane_g1

0xd841,	// (0x0002d004) navi_navi_pane_g2_ParamLimits

0xd841,	// (0x0002d004) navi_navi_pane_g2

0x0001,

0xf919,	// (0x0002f0dc) navi_navi_pane_g_ParamLimits

0xf919,	// (0x0002f0dc) navi_navi_pane_g

0x5daa,	// (0x0002556d) navi_navi_tabs_pane

0xd853,	// (0x0002d016) navi_navi_text_pane

0xd827,	// (0x0002cfea) navi_navi_volume_pane

0xd815,	// (0x0002cfd8) navi_text_pane_t1

0xd809,	// (0x0002cfcc) navi_icon_pane_g1

0x5c9b,	// (0x0002545e) navi_navi_text_pane_t1

0xc2e3,	// (0x0002baa6) navi_navi_volume_pane_g1

0xc2eb,	// (0x0002baae) volume_small_pane

0xd765,	// (0x0002cf28) navi_navi_icon_text_pane_g1

0xd76d,	// (0x0002cf30) navi_navi_icon_text_pane_t1

0x3e94,	// (0x00023657) navi_tabs_2_long_pane

0x3e94,	// (0x00023657) navi_tabs_2_pane

0x3e94,	// (0x00023657) navi_tabs_3_long_pane

0x3e94,	// (0x00023657) navi_tabs_3_pane

0x3e94,	// (0x00023657) navi_tabs_4_pane

0xc2c3,	// (0x0002ba86) tabs_2_active_pane_ParamLimits

0xc2c3,	// (0x0002ba86) tabs_2_active_pane

0xc2d3,	// (0x0002ba96) tabs_2_passive_pane_ParamLimits

0xc2d3,	// (0x0002ba96) tabs_2_passive_pane

0xc291,	// (0x0002ba54) tabs_3_active_pane_ParamLimits

0xc291,	// (0x0002ba54) tabs_3_active_pane

0xc2a1,	// (0x0002ba64) tabs_3_passive_pane_ParamLimits

0xc2a1,	// (0x0002ba64) tabs_3_passive_pane

0xc2b2,	// (0x0002ba75) tabs_3_passive_pane_cp_ParamLimits

0xc2b2,	// (0x0002ba75) tabs_3_passive_pane_cp

0xc24d,	// (0x0002ba10) tabs_4_active_pane_ParamLimits

0xc24d,	// (0x0002ba10) tabs_4_active_pane

0xc25e,	// (0x0002ba21) tabs_4_passive_pane_ParamLimits

0xc25e,	// (0x0002ba21) tabs_4_passive_pane

0xc26f,	// (0x0002ba32) tabs_4_passive_pane_cp_ParamLimits

0xc26f,	// (0x0002ba32) tabs_4_passive_pane_cp

0xc280,	// (0x0002ba43) tabs_4_passive_pane_cp2_ParamLimits

0xc280,	// (0x0002ba43) tabs_4_passive_pane_cp2

0xc229,	// (0x0002b9ec) tabs_2_long_active_pane_ParamLimits

0xc229,	// (0x0002b9ec) tabs_2_long_active_pane

0xc23b,	// (0x0002b9fe) tabs_2_long_passive_pane_ParamLimits

0xc23b,	// (0x0002b9fe) tabs_2_long_passive_pane

0xc1de,	// (0x0002b9a1) tabs_3_long_active_pane_ParamLimits

0xc1de,	// (0x0002b9a1) tabs_3_long_active_pane

0xc1f7,	// (0x0002b9ba) tabs_3_long_passive_pane_ParamLimits

0xc1f7,	// (0x0002b9ba) tabs_3_long_passive_pane

0xc210,	// (0x0002b9d3) tabs_3_long_passive_pane_cp_ParamLimits

0xc210,	// (0x0002b9d3) tabs_3_long_passive_pane_cp

0x1b1c,	// (0x000212df) volume_small_pane_g1

0xc18d,	// (0x0002b950) volume_small_pane_g2

0xc196,	// (0x0002b959) volume_small_pane_g3

0xc19f,	// (0x0002b962) volume_small_pane_g4

0xc1a8,	// (0x0002b96b) volume_small_pane_g5

0xc1b1,	// (0x0002b974) volume_small_pane_g6

0xc1ba,	// (0x0002b97d) volume_small_pane_g7

0xc1c3,	// (0x0002b986) volume_small_pane_g8

0xc1cc,	// (0x0002b98f) volume_small_pane_g9

0xc1d5,	// (0x0002b998) volume_small_pane_g10

0x0009,

0xf8e5,	// (0x0002f0a8) volume_small_pane_g

0x2d95,	// (0x00022558) bg_active_tab_pane_cp2_ParamLimits

0x2d95,	// (0x00022558) bg_active_tab_pane_cp2

0xbcd4,	// (0x0002b497) tabs_3_active_pane_g1

0xbcdc,	// (0x0002b49f) tabs_3_active_pane_t1

0x2d95,	// (0x00022558) bg_passive_tab_pane_cp2_ParamLimits

0x2d95,	// (0x00022558) bg_passive_tab_pane_cp2

0xbcd4,	// (0x0002b497) tabs_3_passive_pane_g1

0xbcdc,	// (0x0002b49f) tabs_3_passive_pane_t1

0x2d95,	// (0x00022558) bg_active_tab_pane_cp3_ParamLimits

0x2d95,	// (0x00022558) bg_active_tab_pane_cp3

0xbcee,	// (0x0002b4b1) tabs_4_active_pane_g1

0xbcf6,	// (0x0002b4b9) tabs_4_active_pane_t1

0x2d95,	// (0x00022558) bg_passive_tab_pane_cp3_ParamLimits

0x2d95,	// (0x00022558) bg_passive_tab_pane_cp3

0xbcee,	// (0x0002b4b1) tabs_4_1_passive_pane_g1

0xbcf6,	// (0x0002b4b9) tabs_4_1_passive_pane_t1

0x4390,	// (0x00023b53) list_highlight_pane_cp2

0xd970,	// (0x0002d133) list_set_pane_ParamLimits

0xd970,	// (0x0002d133) list_set_pane

0xda38,	// (0x0002d1fb) main_pane_set_t1_ParamLimits

0xda38,	// (0x0002d1fb) main_pane_set_t1

0xda58,	// (0x0002d21b) main_pane_set_t2_ParamLimits

0xda58,	// (0x0002d21b) main_pane_set_t2

0xda6c,	// (0x0002d22f) main_pane_set_t3_ParamLimits

0xda6c,	// (0x0002d22f) main_pane_set_t3

0xda80,	// (0x0002d243) main_pane_set_t4_ParamLimits

0xda80,	// (0x0002d243) main_pane_set_t4

0x0003,

0xf9b5,	// (0x0002f178) main_pane_set_t_ParamLimits

0xf9b5,	// (0x0002f178) main_pane_set_t

0xda94,	// (0x0002d257) setting_code_pane

0x6434,	// (0x00025bf7) setting_slider_graphic_pane

0x6434,	// (0x00025bf7) setting_slider_pane

0x6434,	// (0x00025bf7) setting_text_pane

0x6434,	// (0x00025bf7) setting_volume_pane

0x137a,	// (0x00020b3d) volume_set_pane

0x2b19,	// (0x000222dc) bg_set_opt_pane_cp

0x1384,	// (0x00020b47) setting_slider_pane_t1

0x139a,	// (0x00020b5d) setting_slider_pane_t2

0x13b4,	// (0x00020b77) setting_slider_pane_t3

0x0002,

0xf5a2,	// (0x0002ed65) setting_slider_pane_t

0x13cc,	// (0x00020b8f) slider_set_pane

0x2a39,	// (0x000221fc) bg_set_opt_pane_cp2

0x2b5b,	// (0x0002231e) setting_slider_graphic_pane_g1

0x13e2,	// (0x00020ba5) setting_slider_graphic_pane_t1

0x13f2,	// (0x00020bb5) setting_slider_graphic_pane_t2

0x0001,

0xf5a9,	// (0x0002ed6c) setting_slider_graphic_pane_t

0x1402,	// (0x00020bc5) slider_set_pane_cp

0x2a39,	// (0x000221fc) input_focus_pane_cp1

0x62bb,	// (0x00025a7e) list_set_text_pane

0x2a2f,	// (0x000221f2) setting_text_pane_g1

0x2a39,	// (0x000221fc) input_focus_pane_cp2

0x2a2f,	// (0x000221f2) setting_code_pane_g1

0x2b64,	// (0x00022327) setting_code_pane_t1

0xf56b,	// (0x0002ed2e) set_text_pane_t1_ParamLimits

0xf56b,	// (0x0002ed2e) set_text_pane_t1

0x3407,	// (0x00022bca) set_opt_bg_pane_g1

0x340f,	// (0x00022bd2) set_opt_bg_pane_g2

0x6293,	// (0x00025a56) set_opt_bg_pane_g3

0x341f,	// (0x00022be2) set_opt_bg_pane_g4

0x3427,	// (0x00022bea) set_opt_bg_pane_g5

0x342f,	// (0x00022bf2) set_opt_bg_pane_g6

0x629d,	// (0x00025a60) set_opt_bg_pane_g7

0x62a7,	// (0x00025a6a) set_opt_bg_pane_g8

0x62b1,	// (0x00025a74) set_opt_bg_pane_g9

0x0008,

0xf9a2,	// (0x0002f165) set_opt_bg_pane_g

0x6286,	// (0x00025a49) slider_set_pane_g1

0x1d00,	// (0x000214c3) slider_set_pane_g2

0x0006,

0xf993,	// (0x0002f156) slider_set_pane_g

0x1c88,	// (0x0002144b) volume_set_pane_g1

0x1c92,	// (0x00021455) volume_set_pane_g2

0x1c9c,	// (0x0002145f) volume_set_pane_g3

0x1ca6,	// (0x00021469) volume_set_pane_g4

0x1cb0,	// (0x00021473) volume_set_pane_g5

0x1cba,	// (0x0002147d) volume_set_pane_g6

0x1cc4,	// (0x00021487) volume_set_pane_g7

0x1cce,	// (0x00021491) volume_set_pane_g8

0x1cd8,	// (0x0002149b) volume_set_pane_g9

0x1ce2,	// (0x000214a5) volume_set_pane_g10

0x0009,

0xf96b,	// (0x0002f12e) volume_set_pane_g

0xbd08,	// (0x0002b4cb) indicator_pane_ParamLimits

0xbd08,	// (0x0002b4cb) indicator_pane

0xbd34,	// (0x0002b4f7) main_idle_pane_g2_ParamLimits

0xbd34,	// (0x0002b4f7) main_idle_pane_g2

0xbd6c,	// (0x0002b52f) main_pane_idle_g1_ParamLimits

0xbd6c,	// (0x0002b52f) main_pane_idle_g1

0x2bb4,	// (0x00022377) popup_clock_digital_analogue_window_ParamLimits

0x2bb4,	// (0x00022377) popup_clock_digital_analogue_window

0xbd9a,	// (0x0002b55d) soft_indicator_pane_ParamLimits

0xbd9a,	// (0x0002b55d) soft_indicator_pane

0xbdb6,	// (0x0002b579) wallpaper_pane_ParamLimits

0xbdb6,	// (0x0002b579) wallpaper_pane

0x2a2f,	// (0x000221f2) wallpaper_pane_g1

0xbdc8,	// (0x0002b58b) indicator_pane_g1_ParamLimits

0xbdc8,	// (0x0002b58b) indicator_pane_g1

0x66f8,	// (0x00025ebb) navi_navi_icon_text_pane_srt_g1

0x2c08,	// (0x000223cb) soft_indicator_pane_t1

0x2c22,	// (0x000223e5) aid_ps_area_pane

0xbde1,	// (0x0002b5a4) aid_ps_clock_pane

0x2c41,	// (0x00022404) aid_ps_indicator_pane

0x2c4d,	// (0x00022410) indicator_ps_pane_ParamLimits

0x2c4d,	// (0x00022410) indicator_ps_pane

0x2c5c,	// (0x0002241f) power_save_pane_g1_ParamLimits

0x2c5c,	// (0x0002241f) power_save_pane_g1

0x2c68,	// (0x0002242b) power_save_pane_g2_ParamLimits

0x2c68,	// (0x0002242b) power_save_pane_g2

0x0f83,	// (0x00020746) aid_navinavi_width_pane

0x2c22,	// (0x000223e5) aid_ps_area_pane_ParamLimits

0x0001,

0xf5ae,	// (0x0002ed71) power_save_pane_g_ParamLimits

0xf5ae,	// (0x0002ed71) power_save_pane_g

0x2c76,	// (0x00022439) power_save_pane_t1_ParamLimits

0x2c76,	// (0x00022439) power_save_pane_t1

0xbde1,	// (0x0002b5a4) aid_ps_clock_pane_ParamLimits

0x2c41,	// (0x00022404) aid_ps_indicator_pane_ParamLimits

0x2c88,	// (0x0002244b) power_save_pane_t4_ParamLimits

0x2c88,	// (0x0002244b) power_save_pane_t4

0x0001,

0xf5b3,	// (0x0002ed76) power_save_pane_t_ParamLimits

0xf5b3,	// (0x0002ed76) power_save_pane_t

0x2cb2,	// (0x00022475) power_save_t3_ParamLimits

0x2cb2,	// (0x00022475) power_save_t3

0x2c9d,	// (0x00022460) power_save_t2_ParamLimits

0x2c9d,	// (0x00022460) power_save_t2

0x2cc7,	// (0x0002248a) indicator_ps_pane_g1

0xbdef,	// (0x0002b5b2) ai_gene_pane_ParamLimits

0xbdef,	// (0x0002b5b2) ai_gene_pane

0xbe06,	// (0x0002b5c9) ai_links_pane_ParamLimits

0xbe06,	// (0x0002b5c9) ai_links_pane

0xbe1e,	// (0x0002b5e1) indicator_pane_cp1_ParamLimits

0xbe1e,	// (0x0002b5e1) indicator_pane_cp1

0xbe2d,	// (0x0002b5f0) main_pane_idle_g1_cp_ParamLimits

0xbe2d,	// (0x0002b5f0) main_pane_idle_g1_cp

0x2d00,	// (0x000224c3) popup_ai_links_title_window

0xbe45,	// (0x0002b608) soft_indicator_pane_cp1_ParamLimits

0xbe45,	// (0x0002b608) soft_indicator_pane_cp1

0x6059,	// (0x0002581c) ai_links_pane_g1

0x6062,	// (0x00025825) grid_ai_links_pane

0xd87f,	// (0x0002d042) ai_gene_pane_1

0x6047,	// (0x0002580a) ai_gene_pane_2

0x6050,	// (0x00025813) list_highlight_pane_cp4

0xd85b,	// (0x0002d01e) cell_ai_link_pane_ParamLimits

0xd85b,	// (0x0002d01e) cell_ai_link_pane

0x6016,	// (0x000257d9) cell_ai_link_pane_g1

0x2f4b,	// (0x0002270e) cell_ai_link_pane_g2

0x0001,

0xf946,	// (0x0002f109) cell_ai_link_pane_g

0x2a39,	// (0x000221fc) grid_highlight_cp2

0x2a39,	// (0x000221fc) bg_popup_sub_pane_cp1

0x2d23,	// (0x000224e6) popup_ai_links_title_window_t1

0x5f62,	// (0x00025725) ai_gene_pane_1_g1_ParamLimits

0x5f62,	// (0x00025725) ai_gene_pane_1_g1

0x5f6e,	// (0x00025731) ai_gene_pane_1_g2_ParamLimits

0x5f6e,	// (0x00025731) ai_gene_pane_1_g2

0x0001,

0xf93c,	// (0x0002f0ff) ai_gene_pane_1_g_ParamLimits

0xf93c,	// (0x0002f0ff) ai_gene_pane_1_g

0x5f7b,	// (0x0002573e) ai_gene_pane_1_t1_ParamLimits

0x5f7b,	// (0x0002573e) ai_gene_pane_1_t1

0x5faf,	// (0x00025772) grid_ai_soft_ind_pane

0x5f4d,	// (0x00025710) ai_gene_pane_2_t1_ParamLimits

0x5f4d,	// (0x00025710) ai_gene_pane_2_t1

0xbe59,	// (0x0002b61c) main_pane_empty_t1_ParamLimits

0xbe59,	// (0x0002b61c) main_pane_empty_t1

0xbe71,	// (0x0002b634) main_pane_empty_t2_ParamLimits

0xbe71,	// (0x0002b634) main_pane_empty_t2

0xbe86,	// (0x0002b649) main_pane_empty_t3_ParamLimits

0xbe86,	// (0x0002b649) main_pane_empty_t3

0xbe98,	// (0x0002b65b) main_pane_empty_t4_ParamLimits

0xbe98,	// (0x0002b65b) main_pane_empty_t4

0xbeaa,	// (0x0002b66d) main_pane_empty_t5_ParamLimits

0xbeaa,	// (0x0002b66d) main_pane_empty_t5

0x0004,

0xf5b8,	// (0x0002ed7b) main_pane_empty_t_ParamLimits

0xf5b8,	// (0x0002ed7b) main_pane_empty_t

0x3458,	// (0x00022c1b) bg_popup_window_pane_ParamLimits

0x3458,	// (0x00022c1b) bg_popup_window_pane

0x5ca9,	// (0x0002546c) find_popup_pane_cp2_ParamLimits

0x5ca9,	// (0x0002546c) find_popup_pane_cp2

0x5cb5,	// (0x00025478) heading_pane_ParamLimits

0x5cb5,	// (0x00025478) heading_pane

0x2a39,	// (0x000221fc) bg_popup_sub_pane

0xd78a,	// (0x0002cf4d) bg_popup_window_pane_g1_ParamLimits

0xd78a,	// (0x0002cf4d) bg_popup_window_pane_g1

0xd799,	// (0x0002cf5c) bg_popup_window_pane_g2_ParamLimits

0xd799,	// (0x0002cf5c) bg_popup_window_pane_g2

0xd7a5,	// (0x0002cf68) bg_popup_window_pane_g3_ParamLimits

0xd7a5,	// (0x0002cf68) bg_popup_window_pane_g3

0xd7b1,	// (0x0002cf74) bg_popup_window_pane_g4_ParamLimits

0xd7b1,	// (0x0002cf74) bg_popup_window_pane_g4

0xd7c0,	// (0x0002cf83) bg_popup_window_pane_g5_ParamLimits

0xd7c0,	// (0x0002cf83) bg_popup_window_pane_g5

0xd7d0,	// (0x0002cf93) bg_popup_window_pane_g6_ParamLimits

0xd7d0,	// (0x0002cf93) bg_popup_window_pane_g6

0xd7dc,	// (0x0002cf9f) bg_popup_window_pane_g7_ParamLimits

0xd7dc,	// (0x0002cf9f) bg_popup_window_pane_g7

0xd7eb,	// (0x0002cfae) bg_popup_window_pane_g8_ParamLimits

0xd7eb,	// (0x0002cfae) bg_popup_window_pane_g8

0xd7fa,	// (0x0002cfbd) bg_popup_window_pane_g9_ParamLimits

0xd7fa,	// (0x0002cfbd) bg_popup_window_pane_g9

0x5c8f,	// (0x00025452) bg_popup_window_pane_g10_ParamLimits

0x5c8f,	// (0x00025452) bg_popup_window_pane_g10

0x0009,

0xf904,	// (0x0002f0c7) bg_popup_window_pane_g_ParamLimits

0xf904,	// (0x0002f0c7) bg_popup_window_pane_g

0x5bb8,	// (0x0002537b) bg_popup_heading_pane_ParamLimits

0x5bb8,	// (0x0002537b) bg_popup_heading_pane

0x1d46,	// (0x00021509) tabs_4_passive_pane_cp_srt_ParamLimits

0x1d46,	// (0x00021509) tabs_4_passive_pane_cp_srt

0x1d58,	// (0x0002151b) tabs_4_passive_pane_srt_ParamLimits

0x5bcc,	// (0x0002538f) heading_pane_g2

0x1d58,	// (0x0002151b) tabs_4_passive_pane_srt

0x4fbe,	// (0x00024781) bg_passive_tab_pane_cp3_srt_ParamLimits

0x4fbe,	// (0x00024781) bg_passive_tab_pane_cp3_srt

0x5bd4,	// (0x00025397) heading_pane_t1_ParamLimits

0x5bd4,	// (0x00025397) heading_pane_t1

0x5beb,	// (0x000253ae) heading_pane_t2_ParamLimits

0x5beb,	// (0x000253ae) heading_pane_t2

0x0001,

0xf8ff,	// (0x0002f0c2) heading_pane_t_ParamLimits

0xf8ff,	// (0x0002f0c2) heading_pane_t

0x56e3,	// (0x00024ea6) bg_popup_heading_pane_g1

0x5792,	// (0x00024f55) bg_popup_heading_pane_g2

0x579c,	// (0x00024f5f) bg_popup_heading_pane_g3

0x57a6,	// (0x00024f69) bg_popup_heading_pane_g4

0x57b0,	// (0x00024f73) bg_popup_heading_pane_g5

0x57ba,	// (0x00024f7d) bg_popup_heading_pane_g6

0x57c2,	// (0x00024f85) bg_popup_heading_pane_g7

0x57ca,	// (0x00024f8d) bg_popup_heading_pane_g8

0x57d4,	// (0x00024f97) bg_popup_heading_pane_g9

0x0008,

0xf8bb,	// (0x0002f07e) bg_popup_heading_pane_g

0x4ecc,	// (0x0002468f) bg_popup_sub_pane_g1

0x4ed4,	// (0x00024697) bg_popup_sub_pane_g2

0x4edc,	// (0x0002469f) bg_popup_sub_pane_g3

0x4ee4,	// (0x000246a7) bg_popup_sub_pane_g4

0x4eec,	// (0x000246af) bg_popup_sub_pane_g5

0x4ef4,	// (0x000246b7) bg_popup_sub_pane_g6

0x4efc,	// (0x000246bf) bg_popup_sub_pane_g7

0x4f04,	// (0x000246c7) bg_popup_sub_pane_g8

0x4f0c,	// (0x000246cf) bg_popup_sub_pane_g9

0x0008,

0xf895,	// (0x0002f058) bg_popup_sub_pane_g

0x2d95,	// (0x00022558) bg_popup_window_pane_cp5_ParamLimits

0x2d95,	// (0x00022558) bg_popup_window_pane_cp5

0x2db1,	// (0x00022574) popup_note_window_g1_ParamLimits

0x2db1,	// (0x00022574) popup_note_window_g1

0x2dbd,	// (0x00022580) popup_note_window_t1_ParamLimits

0x2dbd,	// (0x00022580) popup_note_window_t1

0x2dd3,	// (0x00022596) popup_note_window_t2_ParamLimits

0x2dd3,	// (0x00022596) popup_note_window_t2

0x2de9,	// (0x000225ac) popup_note_window_t3_ParamLimits

0x2de9,	// (0x000225ac) popup_note_window_t3

0x2dff,	// (0x000225c2) popup_note_window_t4_ParamLimits

0x2dff,	// (0x000225c2) popup_note_window_t4

0x2e27,	// (0x000225ea) popup_note_window_t5_ParamLimits

0x2e27,	// (0x000225ea) popup_note_window_t5

0x0004,

0xf5c3,	// (0x0002ed86) popup_note_window_t_ParamLimits

0xf5c3,	// (0x0002ed86) popup_note_window_t

0x2e4b,	// (0x0002260e) bg_popup_window_pane_cp6_ParamLimits

0x2e4b,	// (0x0002260e) bg_popup_window_pane_cp6

0x565f,	// (0x00024e22) popup_note_image_window_g1_ParamLimits

0x565f,	// (0x00024e22) popup_note_image_window_g1

0x566b,	// (0x00024e2e) popup_note_image_window_g2_ParamLimits

0x566b,	// (0x00024e2e) popup_note_image_window_g2

0x0001,

0xf889,	// (0x0002f04c) popup_note_image_window_g_ParamLimits

0xf889,	// (0x0002f04c) popup_note_image_window_g

0x5684,	// (0x00024e47) popup_note_image_window_t1_ParamLimits

0x5684,	// (0x00024e47) popup_note_image_window_t1

0x569d,	// (0x00024e60) popup_note_image_window_t2_ParamLimits

0x569d,	// (0x00024e60) popup_note_image_window_t2

0x56b6,	// (0x00024e79) popup_note_image_window_t3_ParamLimits

0x56b6,	// (0x00024e79) popup_note_image_window_t3

0x0002,

0xf88e,	// (0x0002f051) popup_note_image_window_t_ParamLimits

0xf88e,	// (0x0002f051) popup_note_image_window_t

0x551f,	// (0x00024ce2) bg_popup_window_pane_cp7_ParamLimits

0x551f,	// (0x00024ce2) bg_popup_window_pane_cp7

0x554f,	// (0x00024d12) popup_note_wait_window_g1_ParamLimits

0x554f,	// (0x00024d12) popup_note_wait_window_g1

0x555b,	// (0x00024d1e) popup_note_wait_window_g2_ParamLimits

0x555b,	// (0x00024d1e) popup_note_wait_window_g2

0x0002,

0xf877,	// (0x0002f03a) popup_note_wait_window_g_ParamLimits

0xf877,	// (0x0002f03a) popup_note_wait_window_g

0x5573,	// (0x00024d36) popup_note_wait_window_t1_ParamLimits

0x5573,	// (0x00024d36) popup_note_wait_window_t1

0x559a,	// (0x00024d5d) popup_note_wait_window_t2_ParamLimits

0x559a,	// (0x00024d5d) popup_note_wait_window_t2

0x55b8,	// (0x00024d7b) popup_note_wait_window_t3_ParamLimits

0x55b8,	// (0x00024d7b) popup_note_wait_window_t3

0x55cb,	// (0x00024d8e) popup_note_wait_window_t4_ParamLimits

0x55cb,	// (0x00024d8e) popup_note_wait_window_t4

0x0004,

0xf87e,	// (0x0002f041) popup_note_wait_window_t_ParamLimits

0xf87e,	// (0x0002f041) popup_note_wait_window_t

0x55f0,	// (0x00024db3) wait_bar_pane_ParamLimits

0x55f0,	// (0x00024db3) wait_bar_pane

0x2a39,	// (0x000221fc) wait_anim_pane

0x2a39,	// (0x000221fc) wait_border_pane

0x2a2f,	// (0x000221f2) wait_anim_pane_g1

0x2a2f,	// (0x000221f2) wait_anim_pane_g2

0x0001,

0xf742,	// (0x0002ef05) wait_anim_pane_g

0x54c3,	// (0x00024c86) wait_border_pane_g1

0x54ce,	// (0x00024c91) wait_border_pane_g2

0x54d7,	// (0x00024c9a) wait_border_pane_g3

0x0002,

0xf870,	// (0x0002f033) wait_border_pane_g

0x541f,	// (0x00024be2) bg_popup_window_pane_cp16_ParamLimits

0x541f,	// (0x00024be2) bg_popup_window_pane_cp16

0x542d,	// (0x00024bf0) indicator_popup_pane_cp4_ParamLimits

0x542d,	// (0x00024bf0) indicator_popup_pane_cp4

0x5441,	// (0x00024c04) popup_query_data_window_t1_ParamLimits

0x5441,	// (0x00024c04) popup_query_data_window_t1

0x5453,	// (0x00024c16) popup_query_data_window_t2_ParamLimits

0x5453,	// (0x00024c16) popup_query_data_window_t2

0x546c,	// (0x00024c2f) popup_query_data_window_t3_ParamLimits

0x546c,	// (0x00024c2f) popup_query_data_window_t3

0x0002,

0xf869,	// (0x0002f02c) popup_query_data_window_t_ParamLimits

0xf869,	// (0x0002f02c) popup_query_data_window_t

0x5486,	// (0x00024c49) query_popup_data_pane_ParamLimits

0x5486,	// (0x00024c49) query_popup_data_pane

0x549a,	// (0x00024c5d) query_popup_data_pane_cp1_ParamLimits

0x549a,	// (0x00024c5d) query_popup_data_pane_cp1

0x2e4b,	// (0x0002260e) bg_popup_window_pane_cp10_ParamLimits

0x2e4b,	// (0x0002260e) bg_popup_window_pane_cp10

0x5382,	// (0x00024b45) indicator_popup_pane_ParamLimits

0x5382,	// (0x00024b45) indicator_popup_pane

0x2eac,	// (0x0002266f) popup_query_code_window_t1_ParamLimits

0x2eac,	// (0x0002266f) popup_query_code_window_t1

0x539a,	// (0x00024b5d) popup_query_code_window_t2_ParamLimits

0x539a,	// (0x00024b5d) popup_query_code_window_t2

0x53d8,	// (0x00024b9b) popup_query_code_window_t3_ParamLimits

0x53d8,	// (0x00024b9b) popup_query_code_window_t3

0x0002,

0xf862,	// (0x0002f025) popup_query_code_window_t_ParamLimits

0xf862,	// (0x0002f025) popup_query_code_window_t

0x5407,	// (0x00024bca) query_popup_pane_ParamLimits

0x5407,	// (0x00024bca) query_popup_pane

0x2e4b,	// (0x0002260e) bg_popup_window_pane_cp15_ParamLimits

0x2e4b,	// (0x0002260e) bg_popup_window_pane_cp15

0x2e6b,	// (0x0002262e) indicator_popup_pane_cp1_ParamLimits

0x2e6b,	// (0x0002262e) indicator_popup_pane_cp1

0x2e7e,	// (0x00022641) indicator_popup_pane_cp2_ParamLimits

0x2e7e,	// (0x00022641) indicator_popup_pane_cp2

0x2e99,	// (0x0002265c) popup_query_data_code_window_g1_ParamLimits

0x2e99,	// (0x0002265c) popup_query_data_code_window_g1

0x2eac,	// (0x0002266f) popup_query_data_code_window_t1_ParamLimits

0x2eac,	// (0x0002266f) popup_query_data_code_window_t1

0x2ebe,	// (0x00022681) popup_query_data_code_window_t2_ParamLimits

0x2ebe,	// (0x00022681) popup_query_data_code_window_t2

0x2ed0,	// (0x00022693) popup_query_data_code_window_t3_ParamLimits

0x2ed0,	// (0x00022693) popup_query_data_code_window_t3

0x2ee6,	// (0x000226a9) popup_query_data_code_window_t4_ParamLimits

0x2ee6,	// (0x000226a9) popup_query_data_code_window_t4

0x0003,

0xf5ce,	// (0x0002ed91) popup_query_data_code_window_t_ParamLimits

0xf5ce,	// (0x0002ed91) popup_query_data_code_window_t

0x3e34,	// (0x000235f7) list_single_midp_graphic_pane_g3

0x2f00,	// (0x000226c3) query_popup_data_pane_cp2_ParamLimits

0x2f13,	// (0x000226d6) query_popup_pane_cp2_ParamLimits

0x2f13,	// (0x000226d6) query_popup_pane_cp2

0x2a39,	// (0x000221fc) bg_popup_window_pane_cp11

0x5356,	// (0x00024b19) heading_pane_cp5

0x3003,	// (0x000227c6) listscroll_popup_info_pane

0x2a39,	// (0x000221fc) input_focus_pane_cp3

0x2f2e,	// (0x000226f1) query_popup_pane_t1

0x2f3c,	// (0x000226ff) list_popup_info_pane_ParamLimits

0x2f3c,	// (0x000226ff) list_popup_info_pane

0x2f4b,	// (0x0002270e) listscroll_popup_info_pane_g1

0x2f53,	// (0x00022716) scroll_pane_cp7

0x2f5d,	// (0x00022720) popup_info_list_pane_t1_ParamLimits

0x2f5d,	// (0x00022720) popup_info_list_pane_t1

0x2f77,	// (0x0002273a) popup_info_list_pane_t2_ParamLimits

0x2f77,	// (0x0002273a) popup_info_list_pane_t2

0x0001,

0xf5d7,	// (0x0002ed9a) popup_info_list_pane_t_ParamLimits

0xf5d7,	// (0x0002ed9a) popup_info_list_pane_t

0x2a39,	// (0x000221fc) bg_popup_window_pane_cp12

0x6712,	// (0x00025ed5) find_popup_pane

0x2b19,	// (0x000222dc) bg_popup_window_pane_cp3

0x2f91,	// (0x00022754) heading_pane_cp3

0x2f9d,	// (0x00022760) listscroll_popup_graphic_pane

0x2a39,	// (0x000221fc) bg_popup_window_pane_cp4

0xbf0c,	// (0x0002b6cf) heading_pane_cp4

0x3003,	// (0x000227c6) listscroll_popup_colour_pane

0xbf16,	// (0x0002b6d9) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xbf16,	// (0x0002b6d9) cell_large_graphic_colour_none_popup_pane

0xbf2a,	// (0x0002b6ed) grid_large_graphic_colour_popup_pane_ParamLimits

0xbf2a,	// (0x0002b6ed) grid_large_graphic_colour_popup_pane

0xbf56,	// (0x0002b719) listscroll_popup_colour_pane_g1_ParamLimits

0xbf56,	// (0x0002b719) listscroll_popup_colour_pane_g1

0xbf6d,	// (0x0002b730) listscroll_popup_colour_pane_g2_ParamLimits

0xbf6d,	// (0x0002b730) listscroll_popup_colour_pane_g2

0xbf84,	// (0x0002b747) listscroll_popup_colour_pane_g3_ParamLimits

0xbf84,	// (0x0002b747) listscroll_popup_colour_pane_g3

0xbf94,	// (0x0002b757) listscroll_popup_colour_pane_g4_ParamLimits

0xbf94,	// (0x0002b757) listscroll_popup_colour_pane_g4

0x0003,

0xf5dc,	// (0x0002ed9f) listscroll_popup_colour_pane_g_ParamLimits

0xf5dc,	// (0x0002ed9f) listscroll_popup_colour_pane_g

0x309d,	// (0x00022860) scroll_pane_cp6_ParamLimits

0x309d,	// (0x00022860) scroll_pane_cp6

0xbfa8,	// (0x0002b76b) cell_large_graphic_colour_popup_pane_ParamLimits

0xbfa8,	// (0x0002b76b) cell_large_graphic_colour_popup_pane

0x30d4,	// (0x00022897) cell_large_graphic_colour_none_popup_pane_t1

0x2a39,	// (0x000221fc) grid_highlight_pane_cp5

0x30e3,	// (0x000228a6) cell_large_graphic_colour_popup_pane_g1

0x30eb,	// (0x000228ae) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5e5,	// (0x0002eda8) cell_large_graphic_colour_popup_pane_g

0x30f3,	// (0x000228b6) cell_large_graphic_colour_popup_pane_g2_copy1

0x30fc,	// (0x000228bf) grid_highlight_pane_cp4

0x3104,	// (0x000228c7) bg_popup_window_pane_cp8_ParamLimits

0x3104,	// (0x000228c7) bg_popup_window_pane_cp8

0x311f,	// (0x000228e2) popup_snote_single_text_window_g1_ParamLimits

0x311f,	// (0x000228e2) popup_snote_single_text_window_g1

0x3131,	// (0x000228f4) popup_snote_single_text_window_t1_ParamLimits

0x3131,	// (0x000228f4) popup_snote_single_text_window_t1

0x3144,	// (0x00022907) popup_snote_single_text_window_t2_ParamLimits

0x3144,	// (0x00022907) popup_snote_single_text_window_t2

0x3157,	// (0x0002291a) popup_snote_single_text_window_t3_ParamLimits

0x3157,	// (0x0002291a) popup_snote_single_text_window_t3

0x3190,	// (0x00022953) popup_snote_single_text_window_t4_ParamLimits

0x3190,	// (0x00022953) popup_snote_single_text_window_t4

0x31c4,	// (0x00022987) popup_snote_single_text_window_t5_ParamLimits

0x31c4,	// (0x00022987) popup_snote_single_text_window_t5

0x0004,

0xf5ea,	// (0x0002edad) popup_snote_single_text_window_t_ParamLimits

0xf5ea,	// (0x0002edad) popup_snote_single_text_window_t

0x31f3,	// (0x000229b6) bg_popup_window_pane_cp9_ParamLimits

0x31f3,	// (0x000229b6) bg_popup_window_pane_cp9

0x311f,	// (0x000228e2) popup_snote_single_graphic_window_g1_ParamLimits

0x311f,	// (0x000228e2) popup_snote_single_graphic_window_g1

0x3201,	// (0x000229c4) popup_snote_single_graphic_window_g2_ParamLimits

0x3201,	// (0x000229c4) popup_snote_single_graphic_window_g2

0x0001,

0xf5f5,	// (0x0002edb8) popup_snote_single_graphic_window_g_ParamLimits

0xf5f5,	// (0x0002edb8) popup_snote_single_graphic_window_g

0x320d,	// (0x000229d0) popup_snote_single_graphic_window_t1_ParamLimits

0x320d,	// (0x000229d0) popup_snote_single_graphic_window_t1

0x3220,	// (0x000229e3) popup_snote_single_graphic_window_t2_ParamLimits

0x3220,	// (0x000229e3) popup_snote_single_graphic_window_t2

0x3233,	// (0x000229f6) popup_snote_single_graphic_window_t3_ParamLimits

0x3233,	// (0x000229f6) popup_snote_single_graphic_window_t3

0x326c,	// (0x00022a2f) popup_snote_single_graphic_window_t4_ParamLimits

0x326c,	// (0x00022a2f) popup_snote_single_graphic_window_t4

0x32a0,	// (0x00022a63) popup_snote_single_graphic_window_t5_ParamLimits

0x32a0,	// (0x00022a63) popup_snote_single_graphic_window_t5

0x0004,

0xf5fa,	// (0x0002edbd) popup_snote_single_graphic_window_t_ParamLimits

0xf5fa,	// (0x0002edbd) popup_snote_single_graphic_window_t

0x6650,	// (0x00025e13) grid_graphic_popup_pane_ParamLimits

0x6650,	// (0x00025e13) grid_graphic_popup_pane

0x667e,	// (0x00025e41) listscroll_popup_graphic_pane_g1_ParamLimits

0x667e,	// (0x00025e41) listscroll_popup_graphic_pane_g1

0xdb94,	// (0x0002d357) listscroll_popup_graphic_pane_g2_ParamLimits

0xdb94,	// (0x0002d357) listscroll_popup_graphic_pane_g2

0x0001,

0xf9df,	// (0x0002f1a2) listscroll_popup_graphic_pane_g_ParamLimits

0xf9df,	// (0x0002f1a2) listscroll_popup_graphic_pane_g

0x66a6,	// (0x00025e69) scroll_pane_cp5

0xdb54,	// (0x0002d317) cell_graphic_popup_pane_ParamLimits

0xdb54,	// (0x0002d317) cell_graphic_popup_pane

0x65d9,	// (0x00025d9c) cell_graphic_popup_pane_g1

0x65e1,	// (0x00025da4) cell_graphic_popup_pane_g2

0x30f3,	// (0x000228b6) cell_graphic_popup_pane_g3

0x0002,

0xf9d8,	// (0x0002f19b) cell_graphic_popup_pane_g

0x65ea,	// (0x00025dad) cell_graphic_popup_pane_t2

0x30fc,	// (0x000228bf) grid_highlight_pane_cp3

0x32e1,	// (0x00022aa4) list_gen_pane_ParamLimits

0x32e1,	// (0x00022aa4) list_gen_pane

0x3313,	// (0x00022ad6) scroll_pane

0xdb0f,	// (0x0002d2d2) bg_list_pane_g1_ParamLimits

0xdb0f,	// (0x0002d2d2) bg_list_pane_g1

0x6556,	// (0x00025d19) bg_list_pane_g2_ParamLimits

0x6556,	// (0x00025d19) bg_list_pane_g2

0x6569,	// (0x00025d2c) bg_list_pane_g3_ParamLimits

0x6569,	// (0x00025d2c) bg_list_pane_g3

0x657b,	// (0x00025d3e) bg_list_pane_g4_ParamLimits

0x657b,	// (0x00025d3e) bg_list_pane_g4

0xdb2a,	// (0x0002d2ed) bg_list_pane_g5_ParamLimits

0xdb2a,	// (0x0002d2ed) bg_list_pane_g5

0x0004,

0xf9cd,	// (0x0002f190) bg_list_pane_g_ParamLimits

0xf9cd,	// (0x0002f190) bg_list_pane_g

0xdad2,	// (0x0002d295) list_double2_graphic_large_graphic_pane_ParamLimits

0xdad2,	// (0x0002d295) list_double2_graphic_large_graphic_pane

0xdad2,	// (0x0002d295) list_double2_graphic_pane_ParamLimits

0xdad2,	// (0x0002d295) list_double2_graphic_pane

0xdad2,	// (0x0002d295) list_double2_large_graphic_pane_ParamLimits

0xdad2,	// (0x0002d295) list_double2_large_graphic_pane

0xdad2,	// (0x0002d295) list_double2_pane_ParamLimits

0xdad2,	// (0x0002d295) list_double2_pane

0xdad2,	// (0x0002d295) list_double_graphic_heading_pane_ParamLimits

0xdad2,	// (0x0002d295) list_double_graphic_heading_pane

0xdad2,	// (0x0002d295) list_double_graphic_pane_ParamLimits

0xdad2,	// (0x0002d295) list_double_graphic_pane

0xdad2,	// (0x0002d295) list_double_heading_pane_ParamLimits

0xdad2,	// (0x0002d295) list_double_heading_pane

0xdad2,	// (0x0002d295) list_double_large_graphic_pane_ParamLimits

0xdad2,	// (0x0002d295) list_double_large_graphic_pane

0xdad2,	// (0x0002d295) list_double_number_pane_ParamLimits

0xdad2,	// (0x0002d295) list_double_number_pane

0xdad2,	// (0x0002d295) list_double_pane_ParamLimits

0xdad2,	// (0x0002d295) list_double_pane

0xdad2,	// (0x0002d295) list_double_time_pane_ParamLimits

0xdad2,	// (0x0002d295) list_double_time_pane

0xdad2,	// (0x0002d295) list_setting_number_pane_ParamLimits

0xdad2,	// (0x0002d295) list_setting_number_pane

0xdad2,	// (0x0002d295) list_setting_pane_ParamLimits

0xdad2,	// (0x0002d295) list_setting_pane

0xb835,	// (0x0002aff8) list_single_2graphic_pane_ParamLimits

0xb835,	// (0x0002aff8) list_single_2graphic_pane

0xb835,	// (0x0002aff8) list_single_graphic_heading_pane_ParamLimits

0xb835,	// (0x0002aff8) list_single_graphic_heading_pane

0xb835,	// (0x0002aff8) list_single_graphic_pane_ParamLimits

0xb835,	// (0x0002aff8) list_single_graphic_pane

0xb835,	// (0x0002aff8) list_single_heading_pane_ParamLimits

0xb835,	// (0x0002aff8) list_single_heading_pane

0xdafa,	// (0x0002d2bd) list_single_large_graphic_pane_ParamLimits

0xdafa,	// (0x0002d2bd) list_single_large_graphic_pane

0xb835,	// (0x0002aff8) list_single_number_heading_pane_ParamLimits

0xb835,	// (0x0002aff8) list_single_number_heading_pane

0xb835,	// (0x0002aff8) list_single_number_pane_ParamLimits

0xb835,	// (0x0002aff8) list_single_number_pane

0xb835,	// (0x0002aff8) list_single_pane_ParamLimits

0xb835,	// (0x0002aff8) list_single_pane

0x2a39,	// (0x000221fc) list_highlight_pane_cp1

0x07a0,	// (0x0001ff63) list_single_pane_g1_ParamLimits

0x07a0,	// (0x0001ff63) list_single_pane_g1

0x07ac,	// (0x0001ff6f) list_single_pane_g2_ParamLimits

0x07ac,	// (0x0001ff6f) list_single_pane_g2

0x0001,

0xf60c,	// (0x0002edcf) list_single_pane_g_ParamLimits

0xf60c,	// (0x0002edcf) list_single_pane_g

0x09aa,	// (0x0002016d) list_single_pane_t1_ParamLimits

0x09aa,	// (0x0002016d) list_single_pane_t1

0x07a0,	// (0x0001ff63) list_single_number_pane_g1_ParamLimits

0x07a0,	// (0x0001ff63) list_single_number_pane_g1

0x07ac,	// (0x0001ff6f) list_single_number_pane_g2_ParamLimits

0x07ac,	// (0x0001ff6f) list_single_number_pane_g2

0x0001,

0xf60c,	// (0x0002edcf) list_single_number_pane_g_ParamLimits

0xf60c,	// (0x0002edcf) list_single_number_pane_g

0x0824,	// (0x0001ffe7) list_single_number_pane_t1_ParamLimits

0x0824,	// (0x0001ffe7) list_single_number_pane_t1

0xb7f7,	// (0x0002afba) list_single_number_pane_t2_ParamLimits

0xb7f7,	// (0x0002afba) list_single_number_pane_t2

0x0001,

0xf98e,	// (0x0002f151) list_single_number_pane_t_ParamLimits

0xf98e,	// (0x0002f151) list_single_number_pane_t

0xb1d5,	// (0x0002a998) list_single_graphic_pane_g1_ParamLimits

0xb1d5,	// (0x0002a998) list_single_graphic_pane_g1

0x07a0,	// (0x0001ff63) list_single_graphic_pane_g2_ParamLimits

0x07a0,	// (0x0001ff63) list_single_graphic_pane_g2

0x07ac,	// (0x0001ff6f) list_single_graphic_pane_g3_ParamLimits

0x07ac,	// (0x0001ff6f) list_single_graphic_pane_g3

0x0002,

0xf605,	// (0x0002edc8) list_single_graphic_pane_g_ParamLimits

0xf605,	// (0x0002edc8) list_single_graphic_pane_g

0xb1e1,	// (0x0002a9a4) list_single_graphic_pane_t1_ParamLimits

0xb1e1,	// (0x0002a9a4) list_single_graphic_pane_t1

0x07a0,	// (0x0001ff63) list_single_heading_pane_g1_ParamLimits

0x07a0,	// (0x0001ff63) list_single_heading_pane_g1

0x07ac,	// (0x0001ff6f) list_single_heading_pane_g2_ParamLimits

0x07ac,	// (0x0001ff6f) list_single_heading_pane_g2

0x0001,

0xf60c,	// (0x0002edcf) list_single_heading_pane_g_ParamLimits

0xf60c,	// (0x0002edcf) list_single_heading_pane_g

0xb1f7,	// (0x0002a9ba) list_single_heading_pane_t1_ParamLimits

0xb1f7,	// (0x0002a9ba) list_single_heading_pane_t1

0xb20d,	// (0x0002a9d0) list_single_heading_pane_t2_ParamLimits

0xb20d,	// (0x0002a9d0) list_single_heading_pane_t2

0x0001,

0xf611,	// (0x0002edd4) list_single_heading_pane_t_ParamLimits

0xf611,	// (0x0002edd4) list_single_heading_pane_t

0x07a0,	// (0x0001ff63) list_single_number_heading_pane_g1_ParamLimits

0x07a0,	// (0x0001ff63) list_single_number_heading_pane_g1

0x07ac,	// (0x0001ff6f) list_single_number_heading_pane_g2_ParamLimits

0x07ac,	// (0x0001ff6f) list_single_number_heading_pane_g2

0x0001,

0xf60c,	// (0x0002edcf) list_single_number_heading_pane_g_ParamLimits

0xf60c,	// (0x0002edcf) list_single_number_heading_pane_g

0xb1f7,	// (0x0002a9ba) list_single_number_heading_pane_t1_ParamLimits

0xb1f7,	// (0x0002a9ba) list_single_number_heading_pane_t1

0xb21f,	// (0x0002a9e2) list_single_number_heading_pane_t2_ParamLimits

0xb21f,	// (0x0002a9e2) list_single_number_heading_pane_t2

0x0984,	// (0x00020147) list_single_number_heading_pane_t3_ParamLimits

0x0984,	// (0x00020147) list_single_number_heading_pane_t3

0x0002,

0xf616,	// (0x0002edd9) list_single_number_heading_pane_t_ParamLimits

0xf616,	// (0x0002edd9) list_single_number_heading_pane_t

0x0800,	// (0x0001ffc3) list_single_graphic_heading_pane_g1_ParamLimits

0x0800,	// (0x0001ffc3) list_single_graphic_heading_pane_g1

0xb231,	// (0x0002a9f4) list_single_graphic_heading_pane_g4_ParamLimits

0xb231,	// (0x0002a9f4) list_single_graphic_heading_pane_g4

0x07ac,	// (0x0001ff6f) list_single_graphic_heading_pane_g5_ParamLimits

0x07ac,	// (0x0001ff6f) list_single_graphic_heading_pane_g5

0x0002,

0xf61d,	// (0x0002ede0) list_single_graphic_heading_pane_g_ParamLimits

0xf61d,	// (0x0002ede0) list_single_graphic_heading_pane_g

0xb1f7,	// (0x0002a9ba) list_single_graphic_heading_pane_t1_ParamLimits

0xb1f7,	// (0x0002a9ba) list_single_graphic_heading_pane_t1

0xb242,	// (0x0002aa05) list_single_graphic_heading_pane_t2_ParamLimits

0xb242,	// (0x0002aa05) list_single_graphic_heading_pane_t2

0x0001,

0xf624,	// (0x0002ede7) list_single_graphic_heading_pane_t_ParamLimits

0xf624,	// (0x0002ede7) list_single_graphic_heading_pane_t

0x09c0,	// (0x00020183) list_single_large_graphic_pane_g1_ParamLimits

0x09c0,	// (0x00020183) list_single_large_graphic_pane_g1

0x09cc,	// (0x0002018f) list_single_large_graphic_pane_g2_ParamLimits

0x09cc,	// (0x0002018f) list_single_large_graphic_pane_g2

0x09d8,	// (0x0002019b) list_single_large_graphic_pane_g3_ParamLimits

0x09d8,	// (0x0002019b) list_single_large_graphic_pane_g3

0x0002,

0xf629,	// (0x0002edec) list_single_large_graphic_pane_g_ParamLimits

0xf629,	// (0x0002edec) list_single_large_graphic_pane_g

0x54ce,	// (0x00024c91) wait_border_pane_g2_copy1

0xb254,	// (0x0002aa17) list_single_large_graphic_pane_g4_cp2

0x09e4,	// (0x000201a7) list_single_large_graphic_pane_t1_ParamLimits

0x09e4,	// (0x000201a7) list_single_large_graphic_pane_t1

0xb25c,	// (0x0002aa1f) list_double_pane_g1_ParamLimits

0xb25c,	// (0x0002aa1f) list_double_pane_g1

0xb268,	// (0x0002aa2b) list_double_pane_g2_ParamLimits

0xb268,	// (0x0002aa2b) list_double_pane_g2

0x0001,

0xf630,	// (0x0002edf3) list_double_pane_g_ParamLimits

0xf630,	// (0x0002edf3) list_double_pane_g

0xb274,	// (0x0002aa37) list_double_pane_t1_ParamLimits

0xb274,	// (0x0002aa37) list_double_pane_t1

0xb28a,	// (0x0002aa4d) list_double_pane_t2_ParamLimits

0xb28a,	// (0x0002aa4d) list_double_pane_t2

0x0001,

0xf635,	// (0x0002edf8) list_double_pane_t_ParamLimits

0xf635,	// (0x0002edf8) list_double_pane_t

0xb29c,	// (0x0002aa5f) list_double2_pane_g1_ParamLimits

0xb29c,	// (0x0002aa5f) list_double2_pane_g1

0xb268,	// (0x0002aa2b) list_double2_pane_g2_ParamLimits

0xb268,	// (0x0002aa2b) list_double2_pane_g2

0x0001,

0xf63a,	// (0x0002edfd) list_double2_pane_g_ParamLimits

0xf63a,	// (0x0002edfd) list_double2_pane_g

0xb274,	// (0x0002aa37) list_double2_pane_t1_ParamLimits

0xb274,	// (0x0002aa37) list_double2_pane_t1

0xb2ad,	// (0x0002aa70) list_double2_pane_t2_ParamLimits

0xb2ad,	// (0x0002aa70) list_double2_pane_t2

0x0001,

0xf63f,	// (0x0002ee02) list_double2_pane_t_ParamLimits

0xf63f,	// (0x0002ee02) list_double2_pane_t

0xb25c,	// (0x0002aa1f) list_double_number_pane_g1_ParamLimits

0xb25c,	// (0x0002aa1f) list_double_number_pane_g1

0xb268,	// (0x0002aa2b) list_double_number_pane_g2_ParamLimits

0xb268,	// (0x0002aa2b) list_double_number_pane_g2

0x0001,

0xf630,	// (0x0002edf3) list_double_number_pane_g_ParamLimits

0xf630,	// (0x0002edf3) list_double_number_pane_g

0xb2bf,	// (0x0002aa82) list_double_number_pane_t1_ParamLimits

0xb2bf,	// (0x0002aa82) list_double_number_pane_t1

0xb2d1,	// (0x0002aa94) list_double_number_pane_t2_ParamLimits

0xb2d1,	// (0x0002aa94) list_double_number_pane_t2

0xb2e7,	// (0x0002aaaa) list_double_number_pane_t3_ParamLimits

0xb2e7,	// (0x0002aaaa) list_double_number_pane_t3

0x0002,

0xf644,	// (0x0002ee07) list_double_number_pane_t_ParamLimits

0xf644,	// (0x0002ee07) list_double_number_pane_t

0xb2f9,	// (0x0002aabc) list_double_graphic_pane_g1_ParamLimits

0xb2f9,	// (0x0002aabc) list_double_graphic_pane_g1

0xb305,	// (0x0002aac8) list_double_graphic_pane_g2_ParamLimits

0xb305,	// (0x0002aac8) list_double_graphic_pane_g2

0xb314,	// (0x0002aad7) list_double_graphic_pane_g3_ParamLimits

0xb314,	// (0x0002aad7) list_double_graphic_pane_g3

0x0003,

0xf64b,	// (0x0002ee0e) list_double_graphic_pane_g_ParamLimits

0xf64b,	// (0x0002ee0e) list_double_graphic_pane_g

0xb32c,	// (0x0002aaef) list_double_graphic_pane_t1_ParamLimits

0xb32c,	// (0x0002aaef) list_double_graphic_pane_t1

0xb342,	// (0x0002ab05) list_double_graphic_pane_t2_ParamLimits

0xb342,	// (0x0002ab05) list_double_graphic_pane_t2

0x0001,

0xf654,	// (0x0002ee17) list_double_graphic_pane_t_ParamLimits

0xf654,	// (0x0002ee17) list_double_graphic_pane_t

0xb2f9,	// (0x0002aabc) list_double2_graphic_pane_g1_ParamLimits

0xb2f9,	// (0x0002aabc) list_double2_graphic_pane_g1

0xb354,	// (0x0002ab17) list_double2_graphic_pane_g2_ParamLimits

0xb354,	// (0x0002ab17) list_double2_graphic_pane_g2

0xb360,	// (0x0002ab23) list_double2_graphic_pane_g3_ParamLimits

0xb360,	// (0x0002ab23) list_double2_graphic_pane_g3

0x0002,

0xf659,	// (0x0002ee1c) list_double2_graphic_pane_g_ParamLimits

0xf659,	// (0x0002ee1c) list_double2_graphic_pane_g

0xb2d1,	// (0x0002aa94) list_double2_graphic_pane_t1_ParamLimits

0xb2d1,	// (0x0002aa94) list_double2_graphic_pane_t1

0xb36c,	// (0x0002ab2f) list_double2_graphic_pane_t2_ParamLimits

0xb36c,	// (0x0002ab2f) list_double2_graphic_pane_t2

0x0001,

0xf660,	// (0x0002ee23) list_double2_graphic_pane_t_ParamLimits

0xf660,	// (0x0002ee23) list_double2_graphic_pane_t

0xb37e,	// (0x0002ab41) list_double_large_graphic_pane_g1_ParamLimits

0xb37e,	// (0x0002ab41) list_double_large_graphic_pane_g1

0xb29c,	// (0x0002aa5f) list_double_large_graphic_pane_g2_ParamLimits

0xb29c,	// (0x0002aa5f) list_double_large_graphic_pane_g2

0xb268,	// (0x0002aa2b) list_double_large_graphic_pane_g3_ParamLimits

0xb268,	// (0x0002aa2b) list_double_large_graphic_pane_g3

0xb3a9,	// (0x0002ab6c) list_double_large_graphic_pane_g4_ParamLimits

0xb3a9,	// (0x0002ab6c) list_double_large_graphic_pane_g4

0x0004,

0xf665,	// (0x0002ee28) list_double_large_graphic_pane_g_ParamLimits

0xf665,	// (0x0002ee28) list_double_large_graphic_pane_g

0xb3bb,	// (0x0002ab7e) list_double_large_graphic_pane_t1_ParamLimits

0xb3bb,	// (0x0002ab7e) list_double_large_graphic_pane_t1

0xb3d4,	// (0x0002ab97) list_double_large_graphic_pane_t2_ParamLimits

0xb3d4,	// (0x0002ab97) list_double_large_graphic_pane_t2

0x0001,

0xf670,	// (0x0002ee33) list_double_large_graphic_pane_t_ParamLimits

0xf670,	// (0x0002ee33) list_double_large_graphic_pane_t

0xb3e6,	// (0x0002aba9) list_double2_large_graphic_pane_g1_ParamLimits

0xb3e6,	// (0x0002aba9) list_double2_large_graphic_pane_g1

0xb29c,	// (0x0002aa5f) list_double2_large_graphic_pane_g2_ParamLimits

0xb29c,	// (0x0002aa5f) list_double2_large_graphic_pane_g2

0xb268,	// (0x0002aa2b) list_double2_large_graphic_pane_g3_ParamLimits

0xb268,	// (0x0002aa2b) list_double2_large_graphic_pane_g3

0x0002,

0xf675,	// (0x0002ee38) list_double2_large_graphic_pane_g_ParamLimits

0xf675,	// (0x0002ee38) list_double2_large_graphic_pane_g

0xb3f2,	// (0x0002abb5) list_double2_large_graphic_pane_t1_ParamLimits

0xb3f2,	// (0x0002abb5) list_double2_large_graphic_pane_t1

0xb408,	// (0x0002abcb) list_double2_large_graphic_pane_t2_ParamLimits

0xb408,	// (0x0002abcb) list_double2_large_graphic_pane_t2

0x0001,

0xf67c,	// (0x0002ee3f) list_double2_large_graphic_pane_t_ParamLimits

0xf67c,	// (0x0002ee3f) list_double2_large_graphic_pane_t

0xb41a,	// (0x0002abdd) list_double_heading_pane_g1_ParamLimits

0xb41a,	// (0x0002abdd) list_double_heading_pane_g1

0xb42b,	// (0x0002abee) list_double_heading_pane_g2_ParamLimits

0xb42b,	// (0x0002abee) list_double_heading_pane_g2

0x0001,

0xf681,	// (0x0002ee44) list_double_heading_pane_g_ParamLimits

0xf681,	// (0x0002ee44) list_double_heading_pane_g

0xb437,	// (0x0002abfa) list_double_heading_pane_t1_ParamLimits

0xb437,	// (0x0002abfa) list_double_heading_pane_t1

0xb44d,	// (0x0002ac10) list_double_heading_pane_t2_ParamLimits

0xb44d,	// (0x0002ac10) list_double_heading_pane_t2

0x0001,

0xf686,	// (0x0002ee49) list_double_heading_pane_t_ParamLimits

0xf686,	// (0x0002ee49) list_double_heading_pane_t

0xb45f,	// (0x0002ac22) list_double_graphic_heading_pane_g1_ParamLimits

0xb45f,	// (0x0002ac22) list_double_graphic_heading_pane_g1

0xb41a,	// (0x0002abdd) list_double_graphic_heading_pane_g2_ParamLimits

0xb41a,	// (0x0002abdd) list_double_graphic_heading_pane_g2

0xb42b,	// (0x0002abee) list_double_graphic_heading_pane_g3_ParamLimits

0xb42b,	// (0x0002abee) list_double_graphic_heading_pane_g3

0x0002,

0xf68b,	// (0x0002ee4e) list_double_graphic_heading_pane_g_ParamLimits

0xf68b,	// (0x0002ee4e) list_double_graphic_heading_pane_g

0xb46b,	// (0x0002ac2e) list_double_graphic_heading_pane_t1_ParamLimits

0xb46b,	// (0x0002ac2e) list_double_graphic_heading_pane_t1

0xb481,	// (0x0002ac44) list_double_graphic_heading_pane_t2_ParamLimits

0xb481,	// (0x0002ac44) list_double_graphic_heading_pane_t2

0x0001,

0xf692,	// (0x0002ee55) list_double_graphic_heading_pane_t_ParamLimits

0xf692,	// (0x0002ee55) list_double_graphic_heading_pane_t

0xb29c,	// (0x0002aa5f) list_double_time_pane_g1_ParamLimits

0xb29c,	// (0x0002aa5f) list_double_time_pane_g1

0xb268,	// (0x0002aa2b) list_double_time_pane_g2_ParamLimits

0xb268,	// (0x0002aa2b) list_double_time_pane_g2

0x0001,

0xf63a,	// (0x0002edfd) list_double_time_pane_g_ParamLimits

0xf63a,	// (0x0002edfd) list_double_time_pane_g

0xb3f2,	// (0x0002abb5) list_double_time_pane_t1_ParamLimits

0xb3f2,	// (0x0002abb5) list_double_time_pane_t1

0xb493,	// (0x0002ac56) list_double_time_pane_t2_ParamLimits

0xb493,	// (0x0002ac56) list_double_time_pane_t2

0xb4a5,	// (0x0002ac68) list_double_time_pane_t3_ParamLimits

0xb4a5,	// (0x0002ac68) list_double_time_pane_t3

0xb4b7,	// (0x0002ac7a) list_double_time_pane_t4_ParamLimits

0xb4b7,	// (0x0002ac7a) list_double_time_pane_t4

0x0003,

0xf697,	// (0x0002ee5a) list_double_time_pane_t_ParamLimits

0xf697,	// (0x0002ee5a) list_double_time_pane_t

0xb4c9,	// (0x0002ac8c) list_setting_pane_g1_ParamLimits

0xb4c9,	// (0x0002ac8c) list_setting_pane_g1

0xb4d5,	// (0x0002ac98) list_setting_pane_g2_ParamLimits

0xb4d5,	// (0x0002ac98) list_setting_pane_g2

0x0001,

0xf6a0,	// (0x0002ee63) list_setting_pane_g_ParamLimits

0xf6a0,	// (0x0002ee63) list_setting_pane_g

0xb4e1,	// (0x0002aca4) list_setting_pane_t1_ParamLimits

0xb4e1,	// (0x0002aca4) list_setting_pane_t1

0xb4fb,	// (0x0002acbe) list_setting_pane_t2_ParamLimits

0xb4fb,	// (0x0002acbe) list_setting_pane_t2

0x0002,

0xf6a5,	// (0x0002ee68) list_setting_pane_t_ParamLimits

0xf6a5,	// (0x0002ee68) list_setting_pane_t

0xb53a,	// (0x0002acfd) set_value_pane_cp_ParamLimits

0xb53a,	// (0x0002acfd) set_value_pane_cp

0xb548,	// (0x0002ad0b) list_setting_number_pane_g1_ParamLimits

0xb548,	// (0x0002ad0b) list_setting_number_pane_g1

0xb554,	// (0x0002ad17) list_setting_number_pane_g2_ParamLimits

0xb554,	// (0x0002ad17) list_setting_number_pane_g2

0x0001,

0xf6ac,	// (0x0002ee6f) list_setting_number_pane_g_ParamLimits

0xf6ac,	// (0x0002ee6f) list_setting_number_pane_g

0xb560,	// (0x0002ad23) list_setting_number_pane_t1_ParamLimits

0xb560,	// (0x0002ad23) list_setting_number_pane_t1

0xb579,	// (0x0002ad3c) list_setting_number_pane_t2_ParamLimits

0xb579,	// (0x0002ad3c) list_setting_number_pane_t2

0xb593,	// (0x0002ad56) list_setting_number_pane_t3_ParamLimits

0xb593,	// (0x0002ad56) list_setting_number_pane_t3

0x0003,

0xf6b1,	// (0x0002ee74) list_setting_number_pane_t_ParamLimits

0xf6b1,	// (0x0002ee74) list_setting_number_pane_t

0xb53a,	// (0x0002acfd) set_value_pane_ParamLimits

0xb53a,	// (0x0002acfd) set_value_pane

0x3347,	// (0x00022b0a) bg_set_opt_pane_ParamLimits

0x3347,	// (0x00022b0a) bg_set_opt_pane

0x0494,	// (0x0001fc57) set_value_pane_t1

0x3368,	// (0x00022b2b) slider_set_pane_cp3

0x3371,	// (0x00022b34) volume_small_pane_cp

0x337a,	// (0x00022b3d) list_form_gen_pane

0x3383,	// (0x00022b46) scroll_pane_cp8

0xb5d6,	// (0x0002ad99) form_field_data_pane_ParamLimits

0xb5d6,	// (0x0002ad99) form_field_data_pane

0xb5f1,	// (0x0002adb4) form_field_data_wide_pane_ParamLimits

0xb5f1,	// (0x0002adb4) form_field_data_wide_pane

0x04ef,	// (0x0001fcb2) form_field_popup_pane_ParamLimits

0x04ef,	// (0x0001fcb2) form_field_popup_pane

0xb615,	// (0x0002add8) form_field_popup_wide_pane_ParamLimits

0xb615,	// (0x0002add8) form_field_popup_wide_pane

0x0532,	// (0x0001fcf5) form_field_slider_pane_ParamLimits

0x0532,	// (0x0001fcf5) form_field_slider_pane

0x0545,	// (0x0001fd08) form_field_slider_wide_pane_ParamLimits

0x0545,	// (0x0001fd08) form_field_slider_wide_pane

0x3394,	// (0x00022b57) data_form_pane

0xb640,	// (0x0002ae03) form_field_data_pane_t1

0x33a0,	// (0x00022b63) input_focus_pane

0x33ae,	// (0x00022b71) data_form_wide_pane

0x0588,	// (0x0001fd4b) form_field_data_wide_pane_t1

0x3111,	// (0x000228d4) input_focus_pane_cp6

0xb65a,	// (0x0002ae1d) form_field_popup_pane_t1

0x33a0,	// (0x00022b63) input_focus_pane_cp7

0x33da,	// (0x00022b9d) list_form_pane

0x05cc,	// (0x0001fd8f) form_field_popup_wide_pane_t1

0x33a0,	// (0x00022b63) input_focus_pane_cp8

0x33e6,	// (0x00022ba9) list_form_wide_pane

0xb67c,	// (0x0002ae3f) form_field_slider_pane_t1_ParamLimits

0xb67c,	// (0x0002ae3f) form_field_slider_pane_t1

0xb694,	// (0x0002ae57) form_field_slider_pane_t2_ParamLimits

0xb694,	// (0x0002ae57) form_field_slider_pane_t2

0x0001,

0xf6c1,	// (0x0002ee84) form_field_slider_pane_t_ParamLimits

0xf6c1,	// (0x0002ee84) form_field_slider_pane_t

0x2d95,	// (0x00022558) input_focus_pane_cp9_ParamLimits

0x2d95,	// (0x00022558) input_focus_pane_cp9

0xb6a9,	// (0x0002ae6c) slider_cont_pane_ParamLimits

0xb6a9,	// (0x0002ae6c) slider_cont_pane

0x33f5,	// (0x00022bb8) form_field_slider_wide_pane_t1_ParamLimits

0x33f5,	// (0x00022bb8) form_field_slider_wide_pane_t1

0x062a,	// (0x0001fded) form_field_slider_wide_pane_t2_ParamLimits

0x062a,	// (0x0001fded) form_field_slider_wide_pane_t2

0x0001,

0xf6c6,	// (0x0002ee89) form_field_slider_wide_pane_t_ParamLimits

0xf6c6,	// (0x0002ee89) form_field_slider_wide_pane_t

0x2d95,	// (0x00022558) input_focus_pane_cp10_ParamLimits

0x2d95,	// (0x00022558) input_focus_pane_cp10

0xb6bd,	// (0x0002ae80) slider_cont_pane_cp1_ParamLimits

0xb6bd,	// (0x0002ae80) slider_cont_pane_cp1

0xb6d1,	// (0x0002ae94) slider_form_pane_cp

0x3407,	// (0x00022bca) input_focus_pane_g1

0x340f,	// (0x00022bd2) input_focus_pane_g2

0x3417,	// (0x00022bda) input_focus_pane_g3

0x341f,	// (0x00022be2) input_focus_pane_g4

0x3427,	// (0x00022bea) input_focus_pane_g5

0x342f,	// (0x00022bf2) input_focus_pane_g6

0x3437,	// (0x00022bfa) input_focus_pane_g7

0x343f,	// (0x00022c02) input_focus_pane_g8

0x3447,	// (0x00022c0a) input_focus_pane_g9

0x2a2f,	// (0x000221f2) input_focus_pane_g10

0x0009,

0xf6cb,	// (0x0002ee8e) input_focus_pane_g

0x54d7,	// (0x00024c9a) wait_border_pane_g3_copy1

0xb6d9,	// (0x0002ae9c) data_form_pane_t1

0x2a2f,	// (0x000221f2) wait_anim_pane_g1_copy1

0xb809,	// (0x0002afcc) data_form_wide_pane_t1

0x068a,	// (0x0001fe4d) list_form_graphic_pane_cp_ParamLimits

0x068a,	// (0x0001fe4d) list_form_graphic_pane_cp

0x645c,	// (0x00025c1f) slider_form_pane_g1

0x6465,	// (0x00025c28) slider_form_pane_g2

0x0006,

0xf9be,	// (0x0002f181) slider_form_pane_g

0x068a,	// (0x0001fe4d) list_form_graphic_pane_ParamLimits

0x068a,	// (0x0001fe4d) list_form_graphic_pane

0x069c,	// (0x0001fe5f) list_form_graphic_pane_g1

0x06a4,	// (0x0001fe67) list_form_graphic_pane_t1_ParamLimits

0x06a4,	// (0x0001fe67) list_form_graphic_pane_t1

0x2b19,	// (0x000222dc) list_highlight_pane_cp5_ParamLimits

0x2b19,	// (0x000222dc) list_highlight_pane_cp5

0xb6f3,	// (0x0002aeb6) find_pane_g1

0x344f,	// (0x00022c12) input_find_pane

0xb6fc,	// (0x0002aebf) input_find_pane_g1_ParamLimits

0xb6fc,	// (0x0002aebf) input_find_pane_g1

0xb708,	// (0x0002aecb) input_find_pane_t1_ParamLimits

0xb708,	// (0x0002aecb) input_find_pane_t1

0xb71d,	// (0x0002aee0) input_find_pane_t2_ParamLimits

0xb71d,	// (0x0002aee0) input_find_pane_t2

0x0001,

0xf6e0,	// (0x0002eea3) input_find_pane_t_ParamLimits

0xf6e0,	// (0x0002eea3) input_find_pane_t

0x3458,	// (0x00022c1b) input_focus_pane_cp5_ParamLimits

0x3458,	// (0x00022c1b) input_focus_pane_cp5

0xc776,	// (0x0002bf39) bg_popup_window_pane_cp2_ParamLimits

0xc776,	// (0x0002bf39) bg_popup_window_pane_cp2

0xc783,	// (0x0002bf46) listscroll_menu_pane_ParamLimits

0xc783,	// (0x0002bf46) listscroll_menu_pane

0xc78f,	// (0x0002bf52) popup_submenu_window_ParamLimits

0xc78f,	// (0x0002bf52) popup_submenu_window

0x34bb,	// (0x00022c7e) find_popup_pane_g1

0x34c3,	// (0x00022c86) input_popup_find_pane_cp

0x3458,	// (0x00022c1b) input_focus_pane_cp4_ParamLimits

0x3458,	// (0x00022c1b) input_focus_pane_cp4

0x34db,	// (0x00022c9e) input_popup_find_pane_t1_ParamLimits

0x34db,	// (0x00022c9e) input_popup_find_pane_t1

0x2a39,	// (0x000221fc) bg_popup_sub_pane_cp

0x3509,	// (0x00022ccc) listscroll_popup_sub_pane

0x3511,	// (0x00022cd4) list_submenu_pane_ParamLimits

0x3511,	// (0x00022cd4) list_submenu_pane

0x3522,	// (0x00022ce5) scroll_pane_cp4

0x352a,	// (0x00022ced) list_single_popup_submenu_pane_ParamLimits

0x352a,	// (0x00022ced) list_single_popup_submenu_pane

0x353f,	// (0x00022d02) list_single_popup_submenu_pane_g1

0x3547,	// (0x00022d0a) list_single_popup_submenu_pane_t1_ParamLimits

0x3547,	// (0x00022d0a) list_single_popup_submenu_pane_t1

0x2d95,	// (0x00022558) bg_active_tab_pane_cp1_ParamLimits

0x2d95,	// (0x00022558) bg_active_tab_pane_cp1

0xc7cd,	// (0x0002bf90) tabs_2_active_pane_g1

0xc7d5,	// (0x0002bf98) tabs_2_active_pane_t1

0x2d95,	// (0x00022558) bg_passive_tab_pane_cp1_ParamLimits

0x2d95,	// (0x00022558) bg_passive_tab_pane_cp1

0xc7cd,	// (0x0002bf90) tabs_2_passive_pane_g1

0xc7d5,	// (0x0002bf98) tabs_2_passive_pane_t1

0x2b19,	// (0x000222dc) bg_active_tab_pane_cp4

0xc7e7,	// (0x0002bfaa) tabs_2_long_active_pane_t1

0x4390,	// (0x00023b53) bg_passive_tab_pane_cp4

0xd393,	// (0x0002cb56) list_single_midp_graphic_pane_g4_ParamLimits

0x2b19,	// (0x000222dc) bg_active_tab_pane_cp5

0xc7fa,	// (0x0002bfbd) tabs_3_long_active_pane_t1

0x4390,	// (0x00023b53) bg_passive_tab_pane_cp5

0xd393,	// (0x0002cb56) list_single_midp_graphic_pane_g4

0x2b19,	// (0x000222dc) bg_popup_window_pane_cp13_ParamLimits

0x2b19,	// (0x000222dc) bg_popup_window_pane_cp13

0x35be,	// (0x00022d81) listscroll_popup_fast_pane_ParamLimits

0x35be,	// (0x00022d81) listscroll_popup_fast_pane

0x35cd,	// (0x00022d90) grid_popup_fast_pane_ParamLimits

0x35cd,	// (0x00022d90) grid_popup_fast_pane

0x35df,	// (0x00022da2) scroll_pane_cp9_ParamLimits

0x35df,	// (0x00022da2) scroll_pane_cp9

0x7d8f,	// (0x00027552) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x7d8f,	// (0x00027552) list_single_graphic_hl_pane_t1_cp2

0x3603,	// (0x00022dc6) input_focus_pane_cp20_ParamLimits

0x3603,	// (0x00022dc6) input_focus_pane_cp20

0x3611,	// (0x00022dd4) query_popup_data_pane_t1_ParamLimits

0x3611,	// (0x00022dd4) query_popup_data_pane_t1

0x3624,	// (0x00022de7) query_popup_data_pane_t2_ParamLimits

0x3624,	// (0x00022de7) query_popup_data_pane_t2

0x366a,	// (0x00022e2d) query_popup_data_pane_t3_ParamLimits

0x366a,	// (0x00022e2d) query_popup_data_pane_t3

0x36ab,	// (0x00022e6e) query_popup_data_pane_t4_ParamLimits

0x36ab,	// (0x00022e6e) query_popup_data_pane_t4

0x36e7,	// (0x00022eaa) query_popup_data_pane_t5_ParamLimits

0x36e7,	// (0x00022eaa) query_popup_data_pane_t5

0x0004,

0xf6e5,	// (0x0002eea8) query_popup_data_pane_t_ParamLimits

0xf6e5,	// (0x0002eea8) query_popup_data_pane_t

0x3407,	// (0x00022bca) bg_set_opt_pane_g1

0x340f,	// (0x00022bd2) bg_set_opt_pane_g2

0x3417,	// (0x00022bda) bg_set_opt_pane_g3

0x341f,	// (0x00022be2) bg_set_opt_pane_g4

0x3427,	// (0x00022bea) bg_set_opt_pane_g5

0x342f,	// (0x00022bf2) bg_set_opt_pane_g6

0x3437,	// (0x00022bfa) bg_set_opt_pane_g7

0x343f,	// (0x00022c02) bg_set_opt_pane_g8

0x3447,	// (0x00022c0a) bg_set_opt_pane_g9

0x0008,

0xf6f0,	// (0x0002eeb3) bg_set_opt_pane_g

0x16ad,	// (0x00020e70) control_top_pane_stacon_ParamLimits

0x16ad,	// (0x00020e70) control_top_pane_stacon

0x1700,	// (0x00020ec3) signal_pane_stacon_ParamLimits

0x1700,	// (0x00020ec3) signal_pane_stacon

0x3c9f,	// (0x00023462) stacon_top_pane_g1_ParamLimits

0x3c9f,	// (0x00023462) stacon_top_pane_g1

0x1725,	// (0x00020ee8) title_pane_stacon_ParamLimits

0x1725,	// (0x00020ee8) title_pane_stacon

0x174f,	// (0x00020f12) uni_indicator_pane_stacon_ParamLimits

0x174f,	// (0x00020f12) uni_indicator_pane_stacon

0x1767,	// (0x00020f2a) battery_pane_stacon_ParamLimits

0x1767,	// (0x00020f2a) battery_pane_stacon

0x17ab,	// (0x00020f6e) control_bottom_pane_stacon_ParamLimits

0x17ab,	// (0x00020f6e) control_bottom_pane_stacon

0x17ce,	// (0x00020f91) navi_pane_stacon_ParamLimits

0x17ce,	// (0x00020f91) navi_pane_stacon

0x3cc1,	// (0x00023484) stacon_bottom_pane_g1_ParamLimits

0x3cc1,	// (0x00023484) stacon_bottom_pane_g1

0x140a,	// (0x00020bcd) aid_levels_signal_lsc_ParamLimits

0x140a,	// (0x00020bcd) aid_levels_signal_lsc

0x1421,	// (0x00020be4) signal_pane_stacon_g1_ParamLimits

0x1421,	// (0x00020be4) signal_pane_stacon_g1

0x1435,	// (0x00020bf8) signal_pane_stacon_g2_ParamLimits

0x1435,	// (0x00020bf8) signal_pane_stacon_g2

0x0001,

0xf703,	// (0x0002eec6) signal_pane_stacon_g_ParamLimits

0xf703,	// (0x0002eec6) signal_pane_stacon_g

0x146a,	// (0x00020c2d) title_pane_stacon_t1_ParamLimits

0x146a,	// (0x00020c2d) title_pane_stacon_t1

0x372b,	// (0x00022eee) uni_indicator_pane_stacon_g1

0x3735,	// (0x00022ef8) uni_indicator_pane_stacon_g2

0x373f,	// (0x00022f02) uni_indicator_pane_stacon_g3

0x3749,	// (0x00022f0c) uni_indicator_pane_stacon_g4

0x0003,

0xf70f,	// (0x0002eed2) uni_indicator_pane_stacon_g

0x148f,	// (0x00020c52) control_top_pane_stacon_g1

0x1497,	// (0x00020c5a) control_top_pane_stacon_t1_ParamLimits

0x1497,	// (0x00020c5a) control_top_pane_stacon_t1

0x14ce,	// (0x00020c91) aid_levels_battery_lsc_ParamLimits

0x14ce,	// (0x00020c91) aid_levels_battery_lsc

0x14e6,	// (0x00020ca9) battery_pane_stacon_g1_ParamLimits

0x14e6,	// (0x00020ca9) battery_pane_stacon_g1

0x14f9,	// (0x00020cbc) battery_pane_stacon_g2_ParamLimits

0x14f9,	// (0x00020cbc) battery_pane_stacon_g2

0x0001,

0xf718,	// (0x0002eedb) battery_pane_stacon_g_ParamLimits

0xf718,	// (0x0002eedb) battery_pane_stacon_g

0x1537,	// (0x00020cfa) navi_icon_pane_stacon

0x154b,	// (0x00020d0e) navi_navi_pane_stacon

0x1537,	// (0x00020cfa) navi_text_pane_stacon

0x148f,	// (0x00020c52) control_bottom_pane_stacon_g1

0x1561,	// (0x00020d24) control_bottom_pane_stacon_t1_ParamLimits

0x1561,	// (0x00020d24) control_bottom_pane_stacon_t1

0xc80c,	// (0x0002bfcf) grid_app_pane_ParamLimits

0xc80c,	// (0x0002bfcf) grid_app_pane

0xc844,	// (0x0002c007) scroll_pane_cp15_ParamLimits

0xc844,	// (0x0002c007) scroll_pane_cp15

0xc861,	// (0x0002c024) cell_app_pane_ParamLimits

0xc861,	// (0x0002c024) cell_app_pane

0xc8a2,	// (0x0002c065) cell_app_pane_g1_ParamLimits

0xc8a2,	// (0x0002c065) cell_app_pane_g1

0x37f6,	// (0x00022fb9) cell_app_pane_g2_ParamLimits

0x37f6,	// (0x00022fb9) cell_app_pane_g2

0x0001,

0xf71d,	// (0x0002eee0) cell_app_pane_g_ParamLimits

0xf71d,	// (0x0002eee0) cell_app_pane_g

0x3802,	// (0x00022fc5) cell_app_pane_t1_ParamLimits

0x3802,	// (0x00022fc5) cell_app_pane_t1

0x3814,	// (0x00022fd7) grid_highlight_pane_ParamLimits

0x3814,	// (0x00022fd7) grid_highlight_pane

0x3407,	// (0x00022bca) cell_highlight_pane_g1

0x340f,	// (0x00022bd2) cell_highlight_pane_g2

0x3417,	// (0x00022bda) cell_highlight_pane_g3

0x341f,	// (0x00022be2) cell_highlight_pane_g4

0x3427,	// (0x00022bea) cell_highlight_pane_g5

0x342f,	// (0x00022bf2) cell_highlight_pane_g6

0x3437,	// (0x00022bfa) cell_highlight_pane_g7

0x343f,	// (0x00022c02) cell_highlight_pane_g8

0x3447,	// (0x00022c0a) cell_highlight_pane_g9

0x2a2f,	// (0x000221f2) cell_highlight_pane_g10

0x0009,

0xf6cb,	// (0x0002ee8e) cell_highlight_pane_g

0x3825,	// (0x00022fe8) bg_scroll_pane

0x15ab,	// (0x00020d6e) scroll_handle_pane

0x386c,	// (0x0002302f) scroll_bg_pane_g1

0x3881,	// (0x00023044) scroll_bg_pane_g2

0x3899,	// (0x0002305c) scroll_bg_pane_g3

0x0002,

0xf722,	// (0x0002eee5) scroll_bg_pane_g

0x38ae,	// (0x00023071) scroll_handle_focus_pane_ParamLimits

0x38ae,	// (0x00023071) scroll_handle_focus_pane

0x386c,	// (0x0002302f) scroll_handle_pane_g1

0x38bb,	// (0x0002307e) scroll_handle_pane_g2

0x3899,	// (0x0002305c) scroll_handle_pane_g3

0x0002,

0xf729,	// (0x0002eeec) scroll_handle_pane_g

0x3458,	// (0x00022c1b) bg_popup_sub_pane_cp21_ParamLimits

0x3458,	// (0x00022c1b) bg_popup_sub_pane_cp21

0x38cf,	// (0x00023092) popup_fep_japan_predictive_window_t1_ParamLimits

0x38cf,	// (0x00023092) popup_fep_japan_predictive_window_t1

0x38e6,	// (0x000230a9) popup_fep_japan_predictive_window_t2_ParamLimits

0x38e6,	// (0x000230a9) popup_fep_japan_predictive_window_t2

0x3919,	// (0x000230dc) popup_fep_japan_predictive_window_t3_ParamLimits

0x3919,	// (0x000230dc) popup_fep_japan_predictive_window_t3

0x0002,

0xf730,	// (0x0002eef3) popup_fep_japan_predictive_window_t_ParamLimits

0xf730,	// (0x0002eef3) popup_fep_japan_predictive_window_t

0x2a39,	// (0x000221fc) bg_popup_sub_pane_cp23

0x3950,	// (0x00023113) listscroll_japin_cand_pane

0x3958,	// (0x0002311b) popup_fep_japan_candidate_window_t1

0x3966,	// (0x00023129) candidate_pane_ParamLimits

0x3966,	// (0x00023129) candidate_pane

0x3978,	// (0x0002313b) scroll_pane_cp30

0x3982,	// (0x00023145) list_single_popup_jap_candidate_pane_ParamLimits

0x3982,	// (0x00023145) list_single_popup_jap_candidate_pane

0x2a39,	// (0x000221fc) list_highlight_pane_cp30

0x3996,	// (0x00023159) list_single_popup_jap_candidate_pane_t1

0xc8c6,	// (0x0002c089) level_1_signal

0xc8d8,	// (0x0002c09b) level_2_signal

0xc8eb,	// (0x0002c0ae) level_3_signal

0xc8fe,	// (0x0002c0c1) level_4_signal

0xc911,	// (0x0002c0d4) level_5_signal

0xc924,	// (0x0002c0e7) level_6_signal

0xc937,	// (0x0002c0fa) level_7_signal

0xc8c6,	// (0x0002c089) level_1_battery

0xc8d8,	// (0x0002c09b) level_2_battery

0xc8eb,	// (0x0002c0ae) level_3_battery

0xc8fe,	// (0x0002c0c1) level_4_battery

0xc911,	// (0x0002c0d4) level_5_battery

0xc924,	// (0x0002c0e7) level_6_battery

0xc937,	// (0x0002c0fa) level_7_battery

0x3a18,	// (0x000231db) list_menu_pane_ParamLimits

0x3a18,	// (0x000231db) list_menu_pane

0x3a29,	// (0x000231ec) scroll_pane_cp25_ParamLimits

0x3a29,	// (0x000231ec) scroll_pane_cp25

0x3a42,	// (0x00023205) list_double2_graphic_pane_cp2_ParamLimits

0x3a42,	// (0x00023205) list_double2_graphic_pane_cp2

0x3a42,	// (0x00023205) list_double2_large_graphic_pane_cp2_ParamLimits

0x3a42,	// (0x00023205) list_double2_large_graphic_pane_cp2

0x3a42,	// (0x00023205) list_double2_pane_cp2_ParamLimits

0x3a42,	// (0x00023205) list_double2_pane_cp2

0x3a42,	// (0x00023205) list_double_graphic_pane_cp2_ParamLimits

0x3a42,	// (0x00023205) list_double_graphic_pane_cp2

0x3a42,	// (0x00023205) list_double_large_graphic_pane_cp2_ParamLimits

0x3a42,	// (0x00023205) list_double_large_graphic_pane_cp2

0x3a42,	// (0x00023205) list_double_number_pane_cp2_ParamLimits

0x3a42,	// (0x00023205) list_double_number_pane_cp2

0x3a42,	// (0x00023205) list_double_pane_cp2_ParamLimits

0x3a42,	// (0x00023205) list_double_pane_cp2

0xc94a,	// (0x0002c10d) list_single_2graphic_pane_cp2_ParamLimits

0xc94a,	// (0x0002c10d) list_single_2graphic_pane_cp2

0xc94a,	// (0x0002c10d) list_single_graphic_heading_pane_cp2_ParamLimits

0xc94a,	// (0x0002c10d) list_single_graphic_heading_pane_cp2

0xc94a,	// (0x0002c10d) list_single_graphic_pane_cp2_ParamLimits

0xc94a,	// (0x0002c10d) list_single_graphic_pane_cp2

0xc94a,	// (0x0002c10d) list_single_heading_pane_cp2_ParamLimits

0xc94a,	// (0x0002c10d) list_single_heading_pane_cp2

0x3a85,	// (0x00023248) list_single_large_graphic_pane_cp2_ParamLimits

0x3a85,	// (0x00023248) list_single_large_graphic_pane_cp2

0xc94a,	// (0x0002c10d) list_single_number_heading_pane_cp2_ParamLimits

0xc94a,	// (0x0002c10d) list_single_number_heading_pane_cp2

0xc94a,	// (0x0002c10d) list_single_number_pane_cp2_ParamLimits

0xc94a,	// (0x0002c10d) list_single_number_pane_cp2

0xc94a,	// (0x0002c10d) list_single_pane_cp2_ParamLimits

0xc94a,	// (0x0002c10d) list_single_pane_cp2

0x3ada,	// (0x0002329d) bg_popup_sub_pane_cp22

0x165d,	// (0x00020e20) popup_side_volume_key_window_g1

0x1687,	// (0x00020e4a) popup_side_volume_key_window_t1

0x16a5,	// (0x00020e68) volume_small_pane_cp1

0x2d95,	// (0x00022558) bg_popup_sub_pane_cp24_ParamLimits

0x2d95,	// (0x00022558) bg_popup_sub_pane_cp24

0x3af0,	// (0x000232b3) fep_china_uni_candidate_pane_ParamLimits

0x3af0,	// (0x000232b3) fep_china_uni_candidate_pane

0x3b04,	// (0x000232c7) fep_china_uni_entry_pane

0x3b14,	// (0x000232d7) popup_fep_china_uni_window_g1

0x3b30,	// (0x000232f3) fep_china_uni_entry_pane_g1

0x3b3a,	// (0x000232fd) fep_china_uni_entry_pane_g2

0x0001,

0xf75d,	// (0x0002ef20) fep_china_uni_entry_pane_g

0x3b50,	// (0x00023313) fep_entry_item_pane

0x3b5a,	// (0x0002331d) fep_candidate_item_pane

0x3b62,	// (0x00023325) fep_china_uni_candidate_pane_g1

0x3b6c,	// (0x0002332f) fep_china_uni_candidate_pane_g2

0x3b74,	// (0x00023337) fep_china_uni_candidate_pane_g3

0x3b7c,	// (0x0002333f) fep_china_uni_candidate_pane_g4

0x0003,

0xf762,	// (0x0002ef25) fep_china_uni_candidate_pane_g

0x2a2f,	// (0x000221f2) fep_entry_item_pane_g1

0x3b86,	// (0x00023349) fep_entry_item_pane_t1_ParamLimits

0x3b86,	// (0x00023349) fep_entry_item_pane_t1

0x3b9c,	// (0x0002335f) fep_candidate_item_pane_t1_ParamLimits

0x3b9c,	// (0x0002335f) fep_candidate_item_pane_t1

0x3bb1,	// (0x00023374) fep_candidate_item_pane_t2_ParamLimits

0x3bb1,	// (0x00023374) fep_candidate_item_pane_t2

0x0001,

0xf76b,	// (0x0002ef2e) fep_candidate_item_pane_t_ParamLimits

0xf76b,	// (0x0002ef2e) fep_candidate_item_pane_t

0x2b19,	// (0x000222dc) list_highlight_pane_cp31_ParamLimits

0x2b19,	// (0x000222dc) list_highlight_pane_cp31

0x3bc3,	// (0x00023386) level_1_signal_lsc

0x3bcc,	// (0x0002338f) level_2_signal_lsc

0x3bd5,	// (0x00023398) level_3_signal_lsc

0x3bde,	// (0x000233a1) level_4_signal_lsc

0x3be7,	// (0x000233aa) level_5_signal_lsc

0x3bf0,	// (0x000233b3) level_6_signal_lsc

0x3bf9,	// (0x000233bc) level_7_signal_lsc

0x3bf9,	// (0x000233bc) level_1_battery_lsc

0x3c02,	// (0x000233c5) level_2_battery_lsc

0x3c0b,	// (0x000233ce) level_3_battery_lsc

0x3c14,	// (0x000233d7) level_4_battery_lsc

0x3c1d,	// (0x000233e0) level_5_battery_lsc

0x3c26,	// (0x000233e9) level_6_battery_lsc

0x3bc3,	// (0x00023386) level_7_battery_lsc

0x3c2f,	// (0x000233f2) scroll_handle_focus_pane_g1

0x3c38,	// (0x000233fb) scroll_handle_focus_pane_g2

0x3c41,	// (0x00023404) scroll_handle_focus_pane_g3

0x0002,

0xf770,	// (0x0002ef33) scroll_handle_focus_pane_g

0xb732,	// (0x0002aef5) list_single_2graphic_pane_g1_ParamLimits

0xb732,	// (0x0002aef5) list_single_2graphic_pane_g1

0xb231,	// (0x0002a9f4) list_single_2graphic_pane_g2_ParamLimits

0xb231,	// (0x0002a9f4) list_single_2graphic_pane_g2

0x07ac,	// (0x0001ff6f) list_single_2graphic_pane_g3_ParamLimits

0x07ac,	// (0x0001ff6f) list_single_2graphic_pane_g3

0xb73e,	// (0x0002af01) list_single_2graphic_pane_g4_ParamLimits

0xb73e,	// (0x0002af01) list_single_2graphic_pane_g4

0x0003,

0xf777,	// (0x0002ef3a) list_single_2graphic_pane_g_ParamLimits

0xf777,	// (0x0002ef3a) list_single_2graphic_pane_g

0xb74a,	// (0x0002af0d) list_single_2graphic_pane_t1_ParamLimits

0xb74a,	// (0x0002af0d) list_single_2graphic_pane_t1

0xb778,	// (0x0002af3b) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xb778,	// (0x0002af3b) list_double2_graphic_large_graphic_pane_g1

0xb29c,	// (0x0002aa5f) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb29c,	// (0x0002aa5f) list_double2_graphic_large_graphic_pane_g2

0xb268,	// (0x0002aa2b) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xb268,	// (0x0002aa2b) list_double2_graphic_large_graphic_pane_g3

0xb78a,	// (0x0002af4d) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xb78a,	// (0x0002af4d) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf780,	// (0x0002ef43) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf780,	// (0x0002ef43) list_double2_graphic_large_graphic_pane_g

0xb796,	// (0x0002af59) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xb796,	// (0x0002af59) list_double2_graphic_large_graphic_pane_t1

0xb7ac,	// (0x0002af6f) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xb7ac,	// (0x0002af6f) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf789,	// (0x0002ef4c) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf789,	// (0x0002ef4c) list_double2_graphic_large_graphic_pane_t

0x3d83,	// (0x00023546) popup_fast_swap_window_ParamLimits

0x3d83,	// (0x00023546) popup_fast_swap_window

0x3da1,	// (0x00023564) popup_side_volume_key_window

0x3dbf,	// (0x00023582) stacon_top_pane

0x3dc9,	// (0x0002358c) status_pane_ParamLimits

0x3dc9,	// (0x0002358c) status_pane

0x3dbf,	// (0x00023582) status_small_pane

0x2a39,	// (0x000221fc) control_pane

0x2a39,	// (0x000221fc) stacon_bottom_pane

0x3383,	// (0x00022b46) scroll_pane_cp121

0x337a,	// (0x00022b3d) set_content_pane

0xc9ad,	// (0x0002c170) bg_active_tab_pane_g1_cp1

0x3c53,	// (0x00023416) bg_active_tab_pane_g2_cp1

0xc9b6,	// (0x0002c179) bg_active_tab_pane_g3_cp1

0xc9ad,	// (0x0002c170) bg_passive_tab_pane_g1_cp1

0x3c53,	// (0x00023416) bg_passive_tab_pane_g2_cp1

0xc9b6,	// (0x0002c179) bg_passive_tab_pane_g3_cp1

0xc9bf,	// (0x0002c182) bg_active_tab_pane_g1_cp2

0x3c53,	// (0x00023416) bg_active_tab_pane_g2_cp2

0xc9c8,	// (0x0002c18b) bg_active_tab_pane_g3_cp2

0xc9bf,	// (0x0002c182) bg_passive_tab_pane_g1_cp2

0x3c53,	// (0x00023416) bg_passive_tab_pane_g2_cp2

0xc9c8,	// (0x0002c18b) bg_passive_tab_pane_g3_cp2

0xc9d1,	// (0x0002c194) bg_active_tab_pane_g1_cp3

0x3c53,	// (0x00023416) bg_active_tab_pane_g2_cp3

0xc9da,	// (0x0002c19d) bg_active_tab_pane_g3_cp3

0xc9d1,	// (0x0002c194) bg_passive_tab_pane_g1_cp3

0x3c53,	// (0x00023416) bg_passive_tab_pane_g2_cp3

0xc9da,	// (0x0002c19d) bg_passive_tab_pane_g3_cp3

0xc9e3,	// (0x0002c1a6) bg_active_tab_pane_g1_cp4

0x3c53,	// (0x00023416) bg_active_tab_pane_g2_cp4

0xc9ec,	// (0x0002c1af) bg_active_tab_pane_g3_cp4

0xc9e3,	// (0x0002c1a6) bg_passive_tab_pane_g1_cp4

0x3c53,	// (0x00023416) bg_passive_tab_pane_g2_cp4

0xc9ec,	// (0x0002c1af) bg_passive_tab_pane_g3_cp4

0x3cdd,	// (0x000234a0) bg_active_tab_pane_g1_cp5

0x3c53,	// (0x00023416) bg_active_tab_pane_g2_cp5

0x3ce6,	// (0x000234a9) bg_active_tab_pane_g3_cp5

0x3cdd,	// (0x000234a0) bg_passive_tab_pane_g1_cp5

0x3c53,	// (0x00023416) bg_passive_tab_pane_g2_cp5

0x3ce6,	// (0x000234a9) bg_passive_tab_pane_g3_cp5

0x352a,	// (0x00022ced) list_set_graphic_pane_ParamLimits

0x352a,	// (0x00022ced) list_set_graphic_pane

0x2a39,	// (0x000221fc) bg_set_opt_pane_cp4

0xc9f5,	// (0x0002c1b8) list_set_graphic_pane_g1_ParamLimits

0xc9f5,	// (0x0002c1b8) list_set_graphic_pane_g1

0xca01,	// (0x0002c1c4) list_set_graphic_pane_g2_ParamLimits

0xca01,	// (0x0002c1c4) list_set_graphic_pane_g2

0x0001,

0xf78e,	// (0x0002ef51) list_set_graphic_pane_g_ParamLimits

0xf78e,	// (0x0002ef51) list_set_graphic_pane_g

0x0009,

0xfaf4,	// (0x0002f2b7) volume_small_pane_cp_g

0x3d34,	// (0x000234f7) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x3d34,	// (0x000234f7) list_double2_large_graphic_pane_g1_cp2

0x3d42,	// (0x00023505) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x3d42,	// (0x00023505) list_double2_large_graphic_pane_g2_cp2

0x3d53,	// (0x00023516) list_double2_large_graphic_pane_g3_cp2

0x3d5b,	// (0x0002351e) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x3d5b,	// (0x0002351e) list_double2_large_graphic_pane_t1_cp2

0x3d71,	// (0x00023534) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x3d71,	// (0x00023534) list_double2_large_graphic_pane_t2_cp2

0x5fc1,	// (0x00025784) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x5fc1,	// (0x00025784) list_double_large_graphic_pane_g1_cp2

0x5fd4,	// (0x00025797) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x5fd4,	// (0x00025797) list_double_large_graphic_pane_g2_cp2

0x3ee7,	// (0x000236aa) list_double_large_graphic_pane_g3_cp2

0x5fe5,	// (0x000257a8) list_double_large_graphic_pane_g4_cp

0x5fed,	// (0x000257b0) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x5fed,	// (0x000257b0) list_double_large_graphic_pane_t1_cp2

0x6004,	// (0x000257c7) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x6004,	// (0x000257c7) list_double_large_graphic_pane_t2_cp2

0x3dd7,	// (0x0002359a) list_double2_graphic_pane_g1_cp2_ParamLimits

0x3dd7,	// (0x0002359a) list_double2_graphic_pane_g1_cp2

0x3de5,	// (0x000235a8) list_double2_graphic_pane_g2_cp2_ParamLimits

0x3de5,	// (0x000235a8) list_double2_graphic_pane_g2_cp2

0x3df6,	// (0x000235b9) list_double2_graphic_pane_g3_cp2

0x3e00,	// (0x000235c3) list_double2_graphic_pane_t1_cp2_ParamLimits

0x3e00,	// (0x000235c3) list_double2_graphic_pane_t1_cp2

0x3e16,	// (0x000235d9) list_double2_graphic_pane_t2_cp2_ParamLimits

0x3e16,	// (0x000235d9) list_double2_graphic_pane_t2_cp2

0x3e28,	// (0x000235eb) list_single_number_heading_pane_g1_cp2_ParamLimits

0x3e28,	// (0x000235eb) list_single_number_heading_pane_g1_cp2

0x3e34,	// (0x000235f7) list_single_number_heading_pane_g2_cp2

0x3e3c,	// (0x000235ff) list_single_number_heading_pane_t1_cp2_ParamLimits

0x3e3c,	// (0x000235ff) list_single_number_heading_pane_t1_cp2

0x3e52,	// (0x00023615) list_single_number_heading_pane_t2_cp2_ParamLimits

0x3e52,	// (0x00023615) list_single_number_heading_pane_t2_cp2

0x3e66,	// (0x00023629) list_single_number_heading_pane_t3_cp2_ParamLimits

0x3e66,	// (0x00023629) list_single_number_heading_pane_t3_cp2

0x3e28,	// (0x000235eb) list_single_heading_pane_g1_cp2_ParamLimits

0x3e28,	// (0x000235eb) list_single_heading_pane_g1_cp2

0x3e34,	// (0x000235f7) list_single_heading_pane_g2_cp2

0x3e3c,	// (0x000235ff) list_single_heading_pane_t1_cp2_ParamLimits

0x3e3c,	// (0x000235ff) list_single_heading_pane_t1_cp2

0x5dbb,	// (0x0002557e) list_single_heading_pane_t2_cp2_ParamLimits

0x5dbb,	// (0x0002557e) list_single_heading_pane_t2_cp2

0x5cfd,	// (0x000254c0) list_double_graphic_pane_g1_cp2_ParamLimits

0x5cfd,	// (0x000254c0) list_double_graphic_pane_g1_cp2

0x5d09,	// (0x000254cc) list_double_graphic_pane_g2_cp2_ParamLimits

0x5d09,	// (0x000254cc) list_double_graphic_pane_g2_cp2

0x5d18,	// (0x000254db) list_double_graphic_pane_g3_cp2

0x5d20,	// (0x000254e3) list_double_graphic_pane_t1_cp2_ParamLimits

0x5d20,	// (0x000254e3) list_double_graphic_pane_t1_cp2

0x5d36,	// (0x000254f9) list_double_graphic_pane_t2_cp2_ParamLimits

0x5d36,	// (0x000254f9) list_double_graphic_pane_t2_cp2

0x3edb,	// (0x0002369e) list_double_number_pane_g1_cp2_ParamLimits

0x3edb,	// (0x0002369e) list_double_number_pane_g1_cp2

0x3ee7,	// (0x000236aa) list_double_number_pane_g2_cp2

0x5cc1,	// (0x00025484) list_double_number_pane_t1_cp2_ParamLimits

0x5cc1,	// (0x00025484) list_double_number_pane_t1_cp2

0x5cd5,	// (0x00025498) list_double_number_pane_t2_cp2_ParamLimits

0x5cd5,	// (0x00025498) list_double_number_pane_t2_cp2

0x5ceb,	// (0x000254ae) list_double_number_pane_t3_cp2_ParamLimits

0x5ceb,	// (0x000254ae) list_double_number_pane_t3_cp2

0x5baa,	// (0x0002536d) list_single_graphic_pane_g1_cp2_ParamLimits

0x5baa,	// (0x0002536d) list_single_graphic_pane_g1_cp2

0x3f41,	// (0x00023704) list_single_graphic_pane_g2_cp2_ParamLimits

0x3f41,	// (0x00023704) list_single_graphic_pane_g2_cp2

0x3f4d,	// (0x00023710) list_single_graphic_pane_g3_cp2

0x5b80,	// (0x00025343) list_single_graphic_pane_t1_cp2_ParamLimits

0x5b80,	// (0x00025343) list_single_graphic_pane_t1_cp2

0x3f41,	// (0x00023704) list_single_number_pane_g1_cp2_ParamLimits

0x3f41,	// (0x00023704) list_single_number_pane_g1_cp2

0x3f4d,	// (0x00023710) list_single_number_pane_g2_cp2

0x5b80,	// (0x00025343) list_single_number_pane_t1_cp2_ParamLimits

0x5b80,	// (0x00025343) list_single_number_pane_t1_cp2

0x5b96,	// (0x00025359) list_single_number_pane_t2_cp2_ParamLimits

0x5b96,	// (0x00025359) list_single_number_pane_t2_cp2

0x3d42,	// (0x00023505) list_double2_pane_g1_cp2_ParamLimits

0x3d42,	// (0x00023505) list_double2_pane_g1_cp2

0x3d53,	// (0x00023516) list_double2_pane_g2_cp2

0x3eb3,	// (0x00023676) list_double2_pane_t1_cp2_ParamLimits

0x3eb3,	// (0x00023676) list_double2_pane_t1_cp2

0x3ec9,	// (0x0002368c) list_double2_pane_t2_cp2_ParamLimits

0x3ec9,	// (0x0002368c) list_double2_pane_t2_cp2

0x3edb,	// (0x0002369e) list_double_pane_g1_cp2_ParamLimits

0x3edb,	// (0x0002369e) list_double_pane_g1_cp2

0x3ee7,	// (0x000236aa) list_double_pane_g2_cp2

0x3eef,	// (0x000236b2) list_double_pane_t1_cp2_ParamLimits

0x3eef,	// (0x000236b2) list_double_pane_t1_cp2

0x3f05,	// (0x000236c8) list_double_pane_t2_cp2_ParamLimits

0x3f05,	// (0x000236c8) list_double_pane_t2_cp2

0x3f31,	// (0x000236f4) list_single_pane_cp2_g3

0x3f41,	// (0x00023704) list_single_pane_g1_cp2_ParamLimits

0x3f41,	// (0x00023704) list_single_pane_g1_cp2

0x3f4d,	// (0x00023710) list_single_pane_g2_cp2

0x3f55,	// (0x00023718) list_single_pane_t1_cp2_ParamLimits

0x3f55,	// (0x00023718) list_single_pane_t1_cp2

0x3f6d,	// (0x00023730) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x3f6d,	// (0x00023730) list_single_large_graphic_pane_g1_cp2

0x3f7b,	// (0x0002373e) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x3f7b,	// (0x0002373e) list_single_large_graphic_pane_g2_cp2

0x3f87,	// (0x0002374a) list_single_large_graphic_pane_g3_cp2

0x3f8f,	// (0x00023752) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x3f8f,	// (0x00023752) list_single_large_graphic_pane_g4_cp1

0x3fa9,	// (0x0002376c) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x3fa9,	// (0x0002376c) list_single_large_graphic_pane_t1_cp2

0x5b4a,	// (0x0002530d) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x5b4a,	// (0x0002530d) list_single_graphic_heading_pane_g1_cp2

0x5b17,	// (0x000252da) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x5b17,	// (0x000252da) list_single_graphic_heading_pane_g4_cp2

0x3f4d,	// (0x00023710) list_single_graphic_heading_pane_g5_cp2

0x5b56,	// (0x00025319) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x5b56,	// (0x00025319) list_single_graphic_heading_pane_t1_cp2

0x5b6c,	// (0x0002532f) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x5b6c,	// (0x0002532f) list_single_graphic_heading_pane_t2_cp2

0x5b0b,	// (0x000252ce) list_single_2graphic_pane_g1_cp2_ParamLimits

0x5b0b,	// (0x000252ce) list_single_2graphic_pane_g1_cp2

0x5b17,	// (0x000252da) list_single_2graphic_pane_g2_cp2_ParamLimits

0x5b17,	// (0x000252da) list_single_2graphic_pane_g2_cp2

0x3f4d,	// (0x00023710) list_single_2graphic_pane_g3_cp2

0x5b28,	// (0x000252eb) list_single_2graphic_pane_g4_cp2_ParamLimits

0x5b28,	// (0x000252eb) list_single_2graphic_pane_g4_cp2

0x5b34,	// (0x000252f7) list_single_2graphic_pane_t1_cp2_ParamLimits

0x5b34,	// (0x000252f7) list_single_2graphic_pane_t1_cp2

0x2a2f,	// (0x000221f2) list_highlight_pane_g10_cp1

0x56e3,	// (0x00024ea6) list_highlight_pane_g1_cp1

0x56eb,	// (0x00024eae) list_highlight_pane_g2_cp1

0x56f3,	// (0x00024eb6) list_highlight_pane_g3_cp1

0x56fb,	// (0x00024ebe) list_highlight_pane_g4_cp1

0x5703,	// (0x00024ec6) list_highlight_pane_g5_cp1

0x570b,	// (0x00024ece) list_highlight_pane_g6_cp1

0x5713,	// (0x00024ed6) list_highlight_pane_g7_cp1

0x571b,	// (0x00024ede) list_highlight_pane_g8_cp1

0x5723,	// (0x00024ee6) list_highlight_pane_g9_cp1

0xd72b,	// (0x0002ceee) form_field_slider_pane_t3

0xd739,	// (0x0002cefc) form_field_slider_pane_t4

0x561f,	// (0x00024de2) slider_form_pane_ParamLimits

0x561f,	// (0x00024de2) slider_form_pane

0x2a39,	// (0x000221fc) control_abbreviations

0x2a39,	// (0x000221fc) control_conventions

0x2a39,	// (0x000221fc) control_definitions

0x2a39,	// (0x000221fc) format_table_attribute

0x5e11,	// (0x000255d4) bg_popup_preview_window_pane_g9

0x2a39,	// (0x000221fc) format_table_data2

0x2a39,	// (0x000221fc) format_table_data3

0x2a39,	// (0x000221fc) format_table_data_example

0x0008,

0x2a39,	// (0x000221fc) intro_purpose

0xf91e,	// (0x0002f0e1) bg_popup_preview_window_pane_g

0x2a39,	// (0x000221fc) texts_category

0x2a39,	// (0x000221fc) texts_graphics

0x3fbf,	// (0x00023782) text_digital

0x3fce,	// (0x00023791) text_primary

0x3fdd,	// (0x000237a0) text_primary_small

0x3fec,	// (0x000237af) text_secondary

0x3ffb,	// (0x000237be) text_title

0x65ad,	// (0x00025d70) bg_passive_tab_pane_g1_cp3_srt

0x3c53,	// (0x00023416) bg_passive_tab_pane_g2_cp3_srt

0x65b6,	// (0x00025d79) bg_passive_tab_pane_g3_cp3_srt

0x2d95,	// (0x00022558) bg_active_tab_pane_cp3_srt_ParamLimits

0x2d95,	// (0x00022558) bg_active_tab_pane_cp3_srt

0x65bf,	// (0x00025d82) tabs_4_active_pane_srt_g1

0xdb3e,	// (0x0002d301) tabs_4_active_pane_srt_t1_ParamLimits

0xdb3e,	// (0x0002d301) tabs_4_active_pane_srt_t1

0x65ad,	// (0x00025d70) bg_active_tab_pane_g1_cp3_copy1

0x3c53,	// (0x00023416) bg_active_tab_pane_g2_cp3_copy1

0x65b6,	// (0x00025d79) bg_active_tab_pane_g3_cp3_copy1

0x2b19,	// (0x000222dc) tabs_2_long_active_pane_srt_ParamLimits

0x2b19,	// (0x000222dc) tabs_2_long_active_pane_srt

0x2b19,	// (0x000222dc) tabs_2_long_passive_pane_srt_ParamLimits

0x2b19,	// (0x000222dc) tabs_2_long_passive_pane_srt

0x4390,	// (0x00023b53) bg_passive_tab_pane_cp4_srt_ParamLimits

0x4390,	// (0x00023b53) bg_passive_tab_pane_cp4_srt

0x6261,	// (0x00025a24) bg_passive_tab_pane_g1_cp4_srt

0x3c53,	// (0x00023416) bg_passive_tab_pane_g2_cp4_srt

0x626a,	// (0x00025a2d) bg_passive_tab_pane_g3_cp4_srt

0x2b19,	// (0x000222dc) bg_active_tab_pane_cp4_srt_ParamLimits

0x2b19,	// (0x000222dc) bg_active_tab_pane_cp4_srt

0xd934,	// (0x0002d0f7) tabs_2_long_active_pane_srt_t1_ParamLimits

0xd934,	// (0x0002d0f7) tabs_2_long_active_pane_srt_t1

0x6261,	// (0x00025a24) bg_active_tab_pane_g1_cp4_srt

0x3c53,	// (0x00023416) bg_active_tab_pane_g2_cp4_srt

0x626a,	// (0x00025a2d) bg_active_tab_pane_g3_cp4_srt

0x2d95,	// (0x00022558) tabs_3_long_active_pane_srt_ParamLimits

0x2d95,	// (0x00022558) tabs_3_long_active_pane_srt

0x2d95,	// (0x00022558) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x2d95,	// (0x00022558) tabs_3_long_passive_pane_cp_srt

0x2d95,	// (0x00022558) tabs_3_long_passive_pane_srt_ParamLimits

0x2d95,	// (0x00022558) tabs_3_long_passive_pane_srt

0x4390,	// (0x00023b53) bg_passive_tab_pane_cp5_srt_ParamLimits

0x4390,	// (0x00023b53) bg_passive_tab_pane_cp5_srt

0x3cdd,	// (0x000234a0) bg_passive_tab_pane_g1_cp5_srt

0x3c53,	// (0x00023416) bg_passive_tab_pane_g2_cp5_srt

0x3ce6,	// (0x000234a9) bg_passive_tab_pane_g3_cp5_srt

0x2b19,	// (0x000222dc) bg_active_tab_pane_cp5_srt_ParamLimits

0x2b19,	// (0x000222dc) bg_active_tab_pane_cp5_srt

0xd91e,	// (0x0002d0e1) tabs_3_long_active_pane_srt_t1_ParamLimits

0xd91e,	// (0x0002d0e1) tabs_3_long_active_pane_srt_t1

0x3cdd,	// (0x000234a0) bg_active_tab_pane_g1_cp5_srt

0x3c53,	// (0x00023416) bg_active_tab_pane_g2_cp5_srt

0x3ce6,	// (0x000234a9) bg_active_tab_pane_g3_cp5_srt

0x6241,	// (0x00025a04) navi_text_pane_srt_t1

0x6239,	// (0x000259fc) navi_icon_pane_srt_g1

0x41d2,	// (0x00023995) midp_editing_number_pane_srt

0x400a,	// (0x000237cd) midp_ticker_pane_srt

0x41da,	// (0x0002399d) midp_ticker_pane_srt_g1

0x41e2,	// (0x000239a5) midp_ticker_pane_srt_g2

0x0001,

0xf7ad,	// (0x0002ef70) midp_ticker_pane_srt_g

0x41ea,	// (0x000239ad) midp_ticker_pane_srt_t1

0x622a,	// (0x000259ed) midp_editing_number_pane_t1_copy1

0xca25,	// (0x0002c1e8) listscroll_midp_pane

0xca25,	// (0x0002c1e8) midp_form_pane

0x4080,	// (0x00023843) midp_info_popup_window_ParamLimits

0x4080,	// (0x00023843) midp_info_popup_window

0x3458,	// (0x00022c1b) bg_popup_sub_pane_cp50_ParamLimits

0x3458,	// (0x00022c1b) bg_popup_sub_pane_cp50

0x534a,	// (0x00024b0d) listscroll_midp_info_pane_ParamLimits

0x534a,	// (0x00024b0d) listscroll_midp_info_pane

0x5332,	// (0x00024af5) listscroll_form_midp_pane_ParamLimits

0x5332,	// (0x00024af5) listscroll_form_midp_pane

0x533e,	// (0x00024b01) scroll_bar_cp050

0xd71f,	// (0x0002cee2) list_midp_pane

0x7006,	// (0x000267c9) signal_pane_g2_cp

0x524c,	// (0x00024a0f) listscroll_midp_info_pane_t1_ParamLimits

0x524c,	// (0x00024a0f) listscroll_midp_info_pane_t1

0x5264,	// (0x00024a27) listscroll_midp_info_pane_t2_ParamLimits

0x5264,	// (0x00024a27) listscroll_midp_info_pane_t2

0x52a2,	// (0x00024a65) listscroll_midp_info_pane_t3_ParamLimits

0x52a2,	// (0x00024a65) listscroll_midp_info_pane_t3

0x52dc,	// (0x00024a9f) listscroll_midp_info_pane_t4_ParamLimits

0x52dc,	// (0x00024a9f) listscroll_midp_info_pane_t4

0x0003,

0xf859,	// (0x0002f01c) listscroll_midp_info_pane_t_ParamLimits

0xf859,	// (0x0002f01c) listscroll_midp_info_pane_t

0x3522,	// (0x00022ce5) scroll_pane_cp21

0x51e6,	// (0x000249a9) form_midp_field_choice_group_pane

0x51ef,	// (0x000249b2) form_midp_field_text_pane

0x5232,	// (0x000249f5) form_midp_field_time_pane

0x523a,	// (0x000249fd) form_midp_gauge_slider_pane

0x5243,	// (0x00024a06) form_midp_gauge_wait_pane

0x2a39,	// (0x000221fc) form_midp_image_pane

0xb7da,	// (0x0002af9d) list_single_midp_pane_ParamLimits

0xb7da,	// (0x0002af9d) list_single_midp_pane

0xd6f7,	// (0x0002ceba) form_midp_field_text_pane_t1

0x4fbe,	// (0x00024781) input_focus_pane_cp050

0x51d5,	// (0x00024998) list_midp_form_text_pane

0x5179,	// (0x0002493c) form_midp_field_choice_group_pane_t1

0x5187,	// (0x0002494a) input_focus_pane_cp051

0x519b,	// (0x0002495e) list_midp_choice_pane

0x2a39,	// (0x000221fc) status_idle_pane

0x515d,	// (0x00024920) form_midp_field_time_pane_t1

0x2a2f,	// (0x000221f2) wait_anim_pane_g2_copy1

0x516b,	// (0x0002492e) form_midp_field_time_pane_t2

0x0001,

0x4130,	// (0x000238f3) aid_navinavi_width_2_pane

0xf854,	// (0x0002f017) form_midp_field_time_pane_t

0x2a39,	// (0x000221fc) input_focus_pane_cp052

0x2a39,	// (0x000221fc) bg_input_focus_pane_cp040

0x511d,	// (0x000248e0) form_midp_gauge_slider_pane_t1

0x512b,	// (0x000248ee) form_midp_gauge_slider_pane_t2

0xd6db,	// (0x0002ce9e) form_midp_gauge_slider_pane_t3

0xd6e9,	// (0x0002ceac) form_midp_gauge_slider_pane_t4

0x0003,

0xf84b,	// (0x0002f00e) form_midp_gauge_slider_pane_t

0x5155,	// (0x00024918) form_midp_slider_pane

0x2b19,	// (0x000222dc) bg_input_focus_pane_cp041_ParamLimits

0x2b19,	// (0x000222dc) bg_input_focus_pane_cp041

0x50ea,	// (0x000248ad) form_midp_gauge_wait_pane_t1_ParamLimits

0x50ea,	// (0x000248ad) form_midp_gauge_wait_pane_t1

0x50fc,	// (0x000248bf) form_midp_gauge_wait_pane_t2_ParamLimits

0x50fc,	// (0x000248bf) form_midp_gauge_wait_pane_t2

0x0001,

0xf846,	// (0x0002f009) form_midp_gauge_wait_pane_t_ParamLimits

0xf846,	// (0x0002f009) form_midp_gauge_wait_pane_t

0x510e,	// (0x000248d1) form_midp_wait_pane_ParamLimits

0x510e,	// (0x000248d1) form_midp_wait_pane

0x50b2,	// (0x00024875) form_midp_image_pane_g1

0x50bb,	// (0x0002487e) form_midp_image_pane_t1

0x50ca,	// (0x0002488d) form_midp_image_pane_t2

0x50d9,	// (0x0002489c) form_midp_image_pane_t3

0x0002,

0xf83f,	// (0x0002f002) form_midp_image_pane_t

0x50a9,	// (0x0002486c) list_single_midp_pane_g1

0x0864,	// (0x00020027) list_single_midp_pane_t1

0xd6c4,	// (0x0002ce87) list_midp_form_item_pane_ParamLimits

0xd6c4,	// (0x0002ce87) list_midp_form_item_pane

0x40d8,	// (0x0002389b) list_midp_form_item_pane_t1

0x40e7,	// (0x000238aa) midp_ticker_pane_g1

0x40f3,	// (0x000238b6) midp_ticker_pane_g2

0x0001,

0xf793,	// (0x0002ef56) midp_ticker_pane_g

0xcacd,	// (0x0002c290) midp_ticker_pane_t1

0xdac3,	// (0x0002d286) midp_editing_number_pane_t1

0x6487,	// (0x00025c4a) midp_editing_number_pane

0x6496,	// (0x00025c59) midp_ticker_pane

0x621a,	// (0x000259dd) ai_message_heading_pane

0x2a39,	// (0x000221fc) bg_popup_window_pane_cp14

0x6222,	// (0x000259e5) listscroll_ai_message_pane

0x61a0,	// (0x00025963) ai_message_heading_pane_g1_ParamLimits

0x61a0,	// (0x00025963) ai_message_heading_pane_g1

0x61ac,	// (0x0002596f) ai_message_heading_pane_g2_ParamLimits

0x61ac,	// (0x0002596f) ai_message_heading_pane_g2

0x61ba,	// (0x0002597d) ai_message_heading_pane_g3_ParamLimits

0x61ba,	// (0x0002597d) ai_message_heading_pane_g3

0x61c6,	// (0x00025989) ai_message_heading_pane_g4_ParamLimits

0x61c6,	// (0x00025989) ai_message_heading_pane_g4

0x0003,

0xf980,	// (0x0002f143) ai_message_heading_pane_g_ParamLimits

0xf980,	// (0x0002f143) ai_message_heading_pane_g

0x61d2,	// (0x00025995) ai_message_heading_pane_t1_ParamLimits

0x61d2,	// (0x00025995) ai_message_heading_pane_t1

0x61ec,	// (0x000259af) ai_message_heading_pane_t2_ParamLimits

0x61ec,	// (0x000259af) ai_message_heading_pane_t2

0x0001,

0xf989,	// (0x0002f14c) ai_message_heading_pane_t_ParamLimits

0xf989,	// (0x0002f14c) ai_message_heading_pane_t

0x6200,	// (0x000259c3) bg_popup_heading_pane_cp1_ParamLimits

0x6200,	// (0x000259c3) bg_popup_heading_pane_cp1

0x618e,	// (0x00025951) list_ai_message_pane_ParamLimits

0x618e,	// (0x00025951) list_ai_message_pane

0x3522,	// (0x00022ce5) scroll_pane_cp10

0x612a,	// (0x000258ed) list_ai_message_pane_g1

0x6132,	// (0x000258f5) list_ai_message_pane_g2

0x0001,

0xf95d,	// (0x0002f120) list_ai_message_pane_g

0x613a,	// (0x000258fd) list_ai_message_pane_t1_ParamLimits

0x613a,	// (0x000258fd) list_ai_message_pane_t1

0x614f,	// (0x00025912) list_ai_message_pane_t2_ParamLimits

0x614f,	// (0x00025912) list_ai_message_pane_t2

0x6164,	// (0x00025927) list_ai_message_pane_t3_ParamLimits

0x6164,	// (0x00025927) list_ai_message_pane_t3

0x6179,	// (0x0002593c) list_ai_message_pane_t4_ParamLimits

0x6179,	// (0x0002593c) list_ai_message_pane_t4

0x0003,

0xf962,	// (0x0002f125) list_ai_message_pane_t_ParamLimits

0xf962,	// (0x0002f125) list_ai_message_pane_t

0xd904,	// (0x0002d0c7) cell_ai_soft_ind_pane_ParamLimits

0xd904,	// (0x0002d0c7) cell_ai_soft_ind_pane

0x4111,	// (0x000238d4) cell_ai_soft_ind_pane_g1_ParamLimits

0x4111,	// (0x000238d4) cell_ai_soft_ind_pane_g1

0x2a39,	// (0x000221fc) grid_highlight_cp1

0x411e,	// (0x000238e1) text_secondary_cp56_ParamLimits

0x411e,	// (0x000238e1) text_secondary_cp56

0x60e8,	// (0x000258ab) example_general_pane_ParamLimits

0x60e8,	// (0x000258ab) example_general_pane

0x60f4,	// (0x000258b7) example_parent_pane_g1_ParamLimits

0x60f4,	// (0x000258b7) example_parent_pane_g1

0x6100,	// (0x000258c3) example_parent_pane_t1_ParamLimits

0x6100,	// (0x000258c3) example_parent_pane_t1

0xcf23,	// (0x0002c6e6) popup_preview_text_window_ParamLimits

0xcf23,	// (0x0002c6e6) popup_preview_text_window

0x3f39,	// (0x000236fc) list_single_pane_cp2_g4

0x2e4b,	// (0x0002260e) bg_popup_preview_window_pane_ParamLimits

0x2e4b,	// (0x0002260e) bg_popup_preview_window_pane

0x5e1b,	// (0x000255de) popup_preview_text_window_t1_ParamLimits

0x5e1b,	// (0x000255de) popup_preview_text_window_t1

0x5e39,	// (0x000255fc) popup_preview_text_window_t2_ParamLimits

0x5e39,	// (0x000255fc) popup_preview_text_window_t2

0x5e82,	// (0x00025645) popup_preview_text_window_t3_ParamLimits

0x5e82,	// (0x00025645) popup_preview_text_window_t3

0x5ec7,	// (0x0002568a) popup_preview_text_window_t4_ParamLimits

0x5ec7,	// (0x0002568a) popup_preview_text_window_t4

0x0004,

0xf931,	// (0x0002f0f4) popup_preview_text_window_t_ParamLimits

0xf931,	// (0x0002f0f4) popup_preview_text_window_t

0x5f45,	// (0x00025708) scroll_pane_cp11

0x4ecc,	// (0x0002468f) bg_popup_preview_window_pane_g1

0x5dcf,	// (0x00025592) bg_popup_preview_window_pane_g2

0x5dd9,	// (0x0002559c) bg_popup_preview_window_pane_g3

0x5de3,	// (0x000255a6) bg_popup_preview_window_pane_g4

0x5ded,	// (0x000255b0) bg_popup_preview_window_pane_g5

0x5df7,	// (0x000255ba) bg_popup_preview_window_pane_g6

0x5dff,	// (0x000255c2) bg_popup_preview_window_pane_g7

0x5e07,	// (0x000255ca) bg_popup_preview_window_pane_g8

0x0f8f,	// (0x00020752) aid_popup_width_pane

0xce93,	// (0x0002c656) popup_midp_note_alarm_window_ParamLimits

0xce93,	// (0x0002c656) popup_midp_note_alarm_window

0x3394,	// (0x00022b57) data_form_pane_ParamLimits

0xb636,	// (0x0002adf9) form_field_data_pane_g1

0xb640,	// (0x0002ae03) form_field_data_pane_t1_ParamLimits

0x33a0,	// (0x00022b63) input_focus_pane_ParamLimits

0x33ae,	// (0x00022b71) data_form_wide_pane_ParamLimits

0x057c,	// (0x0001fd3f) form_field_data_wide_pane_g1

0x0588,	// (0x0001fd4b) form_field_data_wide_pane_t1_ParamLimits

0x3111,	// (0x000228d4) input_focus_pane_cp6_ParamLimits

0xc7bf,	// (0x0002bf82) input_popup_find_pane_g1_ParamLimits

0xc7bf,	// (0x0002bf82) input_popup_find_pane_g1

0x150a,	// (0x00020ccd) aid_navi_side_left_pane

0x151f,	// (0x00020ce2) aid_navi_side_right_pane

0x57de,	// (0x00024fa1) bg_popup_window_pane_cp30_ParamLimits

0x57de,	// (0x00024fa1) bg_popup_window_pane_cp30

0x5858,	// (0x0002501b) popup_midp_note_alarm_window_g1_ParamLimits

0x5858,	// (0x0002501b) popup_midp_note_alarm_window_g1

0x5888,	// (0x0002504b) popup_midp_note_alarm_window_t1_ParamLimits

0x5888,	// (0x0002504b) popup_midp_note_alarm_window_t1

0x5929,	// (0x000250ec) popup_midp_note_alarm_window_t2_ParamLimits

0x5929,	// (0x000250ec) popup_midp_note_alarm_window_t2

0x59d7,	// (0x0002519a) popup_midp_note_alarm_window_t3_ParamLimits

0x59d7,	// (0x0002519a) popup_midp_note_alarm_window_t3

0x5a09,	// (0x000251cc) popup_midp_note_alarm_window_t4_ParamLimits

0x5a09,	// (0x000251cc) popup_midp_note_alarm_window_t4

0x5a2f,	// (0x000251f2) popup_midp_note_alarm_window_t5_ParamLimits

0x5a2f,	// (0x000251f2) popup_midp_note_alarm_window_t5

0x000a,

0xf8ce,	// (0x0002f091) popup_midp_note_alarm_window_t_ParamLimits

0xf8ce,	// (0x0002f091) popup_midp_note_alarm_window_t

0x5adb,	// (0x0002529e) wait_bar_pane_cp1_ParamLimits

0x5adb,	// (0x0002529e) wait_bar_pane_cp1

0x2a39,	// (0x000221fc) wait_anim_pane_copy1

0x2a39,	// (0x000221fc) wait_border_pane_copy1

0x54c3,	// (0x00024c86) wait_border_pane_g1_copy1

0x05a2,	// (0x0001fd65) form_field_popup_pane_g1

0xb65a,	// (0x0002ae1d) form_field_popup_pane_t1_ParamLimits

0x33a0,	// (0x00022b63) input_focus_pane_cp7_ParamLimits

0x33da,	// (0x00022b9d) list_form_pane_ParamLimits

0x05c4,	// (0x0001fd87) form_field_popup_wide_pane_g1

0x05cc,	// (0x0001fd8f) form_field_popup_wide_pane_t1_ParamLimits

0x33a0,	// (0x00022b63) input_focus_pane_cp8_ParamLimits

0x33e6,	// (0x00022ba9) list_form_wide_pane_ParamLimits

0x663a,	// (0x00025dfd) aid_size_cell_graphic_pane

0xb6d9,	// (0x0002ae9c) data_form_pane_t1_ParamLimits

0xb809,	// (0x0002afcc) data_form_wide_pane_t1_ParamLimits

0xd320,	// (0x0002cae3) bg_status_flat_pane

0xbc48,	// (0x0002b40b) title_pane_t1_ParamLimits

0x2ae1,	// (0x000222a4) title_pane_t2_ParamLimits

0x2b07,	// (0x000222ca) title_pane_t3_ParamLimits

0xf59b,	// (0x0002ed5e) title_pane_t_ParamLimits

0xc8c6,	// (0x0002c089) level_1_signal_ParamLimits

0xc8d8,	// (0x0002c09b) level_2_signal_ParamLimits

0xc8eb,	// (0x0002c0ae) level_3_signal_ParamLimits

0xc8fe,	// (0x0002c0c1) level_4_signal_ParamLimits

0xc911,	// (0x0002c0d4) level_5_signal_ParamLimits

0xc924,	// (0x0002c0e7) level_6_signal_ParamLimits

0xc937,	// (0x0002c0fa) level_7_signal_ParamLimits

0xc8c6,	// (0x0002c089) level_1_battery_ParamLimits

0xc8d8,	// (0x0002c09b) level_2_battery_ParamLimits

0xc8eb,	// (0x0002c0ae) level_3_battery_ParamLimits

0xc8fe,	// (0x0002c0c1) level_4_battery_ParamLimits

0xc911,	// (0x0002c0d4) level_5_battery_ParamLimits

0xc924,	// (0x0002c0e7) level_6_battery_ParamLimits

0xc937,	// (0x0002c0fa) level_7_battery_ParamLimits

0x56e3,	// (0x00024ea6) bg_status_flat_pane_g1

0x56eb,	// (0x00024eae) bg_status_flat_pane_g2

0x56f3,	// (0x00024eb6) bg_status_flat_pane_g3

0x56fb,	// (0x00024ebe) bg_status_flat_pane_g4

0x5703,	// (0x00024ec6) bg_status_flat_pane_g5

0x570b,	// (0x00024ece) bg_status_flat_pane_g6

0x5713,	// (0x00024ed6) bg_status_flat_pane_g7

0xbcdc,	// (0x0002b49f) tabs_3_active_pane_t1_ParamLimits

0xbcdc,	// (0x0002b49f) tabs_3_passive_pane_t1_ParamLimits

0xbcf6,	// (0x0002b4b9) tabs_4_active_pane_t1_ParamLimits

0xbcf6,	// (0x0002b4b9) tabs_4_1_passive_pane_t1_ParamLimits

0xc7d5,	// (0x0002bf98) tabs_2_active_pane_t1_ParamLimits

0xc7d5,	// (0x0002bf98) tabs_2_passive_pane_t1_ParamLimits

0x2b19,	// (0x000222dc) bg_active_tab_pane_cp4_ParamLimits

0xc7e7,	// (0x0002bfaa) tabs_2_long_active_pane_t1_ParamLimits

0x4390,	// (0x00023b53) bg_passive_tab_pane_cp4_ParamLimits

0x1a63,	// (0x00021226) list_single_midp_graphic_pane_t1_ParamLimits

0x2b19,	// (0x000222dc) bg_active_tab_pane_cp5_ParamLimits

0xc7fa,	// (0x0002bfbd) tabs_3_long_active_pane_t1_ParamLimits

0x4390,	// (0x00023b53) bg_passive_tab_pane_cp5_ParamLimits

0x1a63,	// (0x00021226) list_single_midp_graphic_pane_t1

0xd320,	// (0x0002cae3) bg_status_flat_pane_ParamLimits

0x4b45,	// (0x00024308) indicator_pane_cp2_ParamLimits

0x4b45,	// (0x00024308) indicator_pane_cp2

0xd4e9,	// (0x0002ccac) navi_pane_srt_ParamLimits

0xd4e9,	// (0x0002ccac) navi_pane_srt

0x4cab,	// (0x0002446e) popup_clock_digital_analogue_window_cp1

0x2bf9,	// (0x000223bc) indicator_pane_t1

0x400a,	// (0x000237cd) copy_highlight_pane

0x400a,	// (0x000237cd) cursor_graphics_pane

0x400a,	// (0x000237cd) graphic_within_text_pane

0x400a,	// (0x000237cd) link_highlight_pane

0x5f08,	// (0x000256cb) popup_preview_text_window_t5_ParamLimits

0x5f08,	// (0x000256cb) popup_preview_text_window_t5

0x413a,	// (0x000238fd) cursor_digital_pane

0x413a,	// (0x000238fd) cursor_primary_pane

0x414b,	// (0x0002390e) cursor_primary_small_pane

0x4153,	// (0x00023916) cursor_secondary_pane

0x415b,	// (0x0002391e) cursor_title_pane

0x413a,	// (0x000238fd) link_highlight_digital_pane

0x4142,	// (0x00023905) link_highlight_primary_pane

0x414b,	// (0x0002390e) link_highlight_primary_small_pane

0x4153,	// (0x00023916) link_highlight_secondary_pane

0x415b,	// (0x0002391e) link_highlight_title_pane

0x413a,	// (0x000238fd) copy_highlight_digital_pane

0x413a,	// (0x000238fd) copy_highlight_primary_pane

0x414b,	// (0x0002390e) copy_highlight_primary_small_pane

0x4153,	// (0x00023916) copy_highlight_secondary_pane

0x415b,	// (0x0002391e) copy_highlight_title_pane

0x4153,	// (0x00023916) graphic_text_digital_pane

0x5781,	// (0x00024f44) graphic_text_primary_pane

0x578a,	// (0x00024f4d) graphic_text_primary_small_pane

0x414b,	// (0x0002390e) graphic_text_secondary_pane

0x413a,	// (0x000238fd) graphic_text_title_pane

0xcadf,	// (0x0002c2a2) cursor_primary_pane_g1

0x5773,	// (0x00024f36) cursor_text_primary_t1

0xd75b,	// (0x0002cf1e) cursor_primary_small_pane_g1

0x5765,	// (0x00024f28) cursor_text_primary_small_t1

0xd751,	// (0x0002cf14) cursor_primary_small_pane_g1_copy1

0x574d,	// (0x00024f10) cursor_text_primary_small_t1_copy1

0x572b,	// (0x00024eee) cursor_text_title_t1

0xd747,	// (0x0002cf0a) cursor_title_pane_g1

0xcadf,	// (0x0002c2a2) cursor_digital_pane_g1

0x416d,	// (0x00023930) cursor_text_digital_t1

0x417b,	// (0x0002393e) link_highlight_primary_pane_g1

0x56d4,	// (0x00024e97) link_highlight_primary_pane_t1

0x417b,	// (0x0002393e) link_highlight_primary_small_pane_g1

0x4183,	// (0x00023946) link_highlight_primary_small_pane_t1

0x4192,	// (0x00023955) link_highlight_secondary_pane_g1

0x419a,	// (0x0002395d) link_highlight_secondary_pane_t1

0x5648,	// (0x00024e0b) link_highlight_title_pane_g1

0x5650,	// (0x00024e13) link_highlight_title_pane_t1

0x5631,	// (0x00024df4) link_highlight_digital_pane_g1

0x5639,	// (0x00024dfc) link_highlight_digital_pane_t1

0x54f9,	// (0x00024cbc) copy_highlight_primary_pane_g1

0x5510,	// (0x00024cd3) copy_highlight_primary_pane_t1

0x54f9,	// (0x00024cbc) copy_highlight_primary_small_pane_g1

0x5501,	// (0x00024cc4) copy_highlight_primary_small_pane_t1

0x41a9,	// (0x0002396c) copy_highlight_secondary_pane_g1

0x41b1,	// (0x00023974) copy_highlight_secondary_pane_t1

0x54e2,	// (0x00024ca5) copy_highlight_title_pane_g1

0x54ea,	// (0x00024cad) copy_highlight_title_pane_t1

0x54f9,	// (0x00024cbc) copy_highlight_digital_pane_g1

0x680a,	// (0x00025fcd) copy_highlight_digital_pane_t1

0x675e,	// (0x00025f21) graphic_text_primary_pane_g1

0x67ee,	// (0x00025fb1) graphic_text_primary_pane_t1

0x67fc,	// (0x00025fbf) graphic_text_primary_pane_t2

0x0001,

0xf9fd,	// (0x0002f1c0) graphic_text_primary_pane_t

0x67ca,	// (0x00025f8d) graphic_text_primary_small_pane_g1

0x67d2,	// (0x00025f95) graphic_text_primary_small_pane_t1

0x67e0,	// (0x00025fa3) graphic_text_primary_small_pane_t2

0x0001,

0xf9f8,	// (0x0002f1bb) graphic_text_primary_small_pane_t

0x67a6,	// (0x00025f69) graphic_text_secondary_pane_g1

0x67ae,	// (0x00025f71) graphic_text_secondary_pane_t1

0x67bc,	// (0x00025f7f) graphic_text_secondary_pane_t2

0x0001,

0xf9f3,	// (0x0002f1b6) graphic_text_secondary_pane_t

0x6782,	// (0x00025f45) graphic_text_title_pane_g1

0x678a,	// (0x00025f4d) graphic_text_title_pane_t1

0x6798,	// (0x00025f5b) graphic_text_title_pane_t2

0x0001,

0xf9ee,	// (0x0002f1b1) graphic_text_title_pane_t

0x675e,	// (0x00025f21) graphic_text_digital_pane_g1

0x6766,	// (0x00025f29) graphic_text_digital_pane_t1

0x6774,	// (0x00025f37) graphic_text_digital_pane_t2

0x0001,

0xf9e9,	// (0x0002f1ac) graphic_text_digital_pane_t

0x2b19,	// (0x000222dc) navi_icon_pane_srt_ParamLimits

0x2b19,	// (0x000222dc) navi_icon_pane_srt

0x2a39,	// (0x000221fc) navi_midp_pane_srt

0x2a39,	// (0x000221fc) navi_navi_pane_srt

0x2b19,	// (0x000222dc) navi_text_pane_srt_ParamLimits

0x2b19,	// (0x000222dc) navi_text_pane_srt

0x6729,	// (0x00025eec) navi_navi_icon_text_pane_srt

0x6731,	// (0x00025ef4) navi_navi_pane_srt_g1_ParamLimits

0x6731,	// (0x00025ef4) navi_navi_pane_srt_g1

0x6743,	// (0x00025f06) navi_navi_pane_srt_g2_ParamLimits

0x6743,	// (0x00025f06) navi_navi_pane_srt_g2

0x0001,

0xf9e4,	// (0x0002f1a7) navi_navi_pane_srt_g_ParamLimits

0xf9e4,	// (0x0002f1a7) navi_navi_pane_srt_g

0x6755,	// (0x00025f18) navi_navi_tabs_pane_srt

0x6729,	// (0x00025eec) navi_navi_text_pane_srt

0x6729,	// (0x00025eec) navi_navi_volume_pane_srt

0x671a,	// (0x00025edd) navi_navi_text_pane_srt_t1

0x1dbd,	// (0x00021580) navi_navi_volume_pane_srt_g1

0x1dc5,	// (0x00021588) volume_small_pane_srt_ParamLimits

0x1dc5,	// (0x00021588) volume_small_pane_srt

0x17f1,	// (0x00020fb4) volume_small_pane_srt_g1_ParamLimits

0x17f1,	// (0x00020fb4) volume_small_pane_srt_g1

0x1801,	// (0x00020fc4) volume_small_pane_srt_g2_ParamLimits

0x1801,	// (0x00020fc4) volume_small_pane_srt_g2

0x1812,	// (0x00020fd5) volume_small_pane_srt_g3_ParamLimits

0x1812,	// (0x00020fd5) volume_small_pane_srt_g3

0x1823,	// (0x00020fe6) volume_small_pane_srt_g4_ParamLimits

0x1823,	// (0x00020fe6) volume_small_pane_srt_g4

0x1834,	// (0x00020ff7) volume_small_pane_srt_g5_ParamLimits

0x1834,	// (0x00020ff7) volume_small_pane_srt_g5

0x1845,	// (0x00021008) volume_small_pane_srt_g6_ParamLimits

0x1845,	// (0x00021008) volume_small_pane_srt_g6

0x1856,	// (0x00021019) volume_small_pane_srt_g7_ParamLimits

0x1856,	// (0x00021019) volume_small_pane_srt_g7

0x1867,	// (0x0002102a) volume_small_pane_srt_g8_ParamLimits

0x1867,	// (0x0002102a) volume_small_pane_srt_g8

0x1878,	// (0x0002103b) volume_small_pane_srt_g9_ParamLimits

0x1878,	// (0x0002103b) volume_small_pane_srt_g9

0x1889,	// (0x0002104c) volume_small_pane_srt_g10_ParamLimits

0x1889,	// (0x0002104c) volume_small_pane_srt_g10

0x0009,

0xf798,	// (0x0002ef5b) volume_small_pane_srt_g_ParamLimits

0xf798,	// (0x0002ef5b) volume_small_pane_srt_g

0x2f00,	// (0x000226c3) query_popup_data_pane_cp2

0x6700,	// (0x00025ec3) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6700,	// (0x00025ec3) navi_navi_icon_text_pane_srt_t1

0x5781,	// (0x00024f44) navi_tabs_2_long_pane_srt

0x5781,	// (0x00024f44) navi_tabs_2_pane_srt

0x5781,	// (0x00024f44) navi_tabs_3_long_pane_srt

0x5781,	// (0x00024f44) navi_tabs_3_pane_srt

0x5781,	// (0x00024f44) navi_tabs_4_pane_srt

0x1d9d,	// (0x00021560) tabs_2_active_pane_srt_ParamLimits

0x1d9d,	// (0x00021560) tabs_2_active_pane_srt

0x1dad,	// (0x00021570) tabs_2_passive_pane_srt_ParamLimits

0x1dad,	// (0x00021570) tabs_2_passive_pane_srt

0x4fbe,	// (0x00024781) bg_passive_tab_pane_cp1_srt_ParamLimits

0x4fbe,	// (0x00024781) bg_passive_tab_pane_cp1_srt

0x66cc,	// (0x00025e8f) bg_passive_tab_pane_g1_cp1_srt

0x3c53,	// (0x00023416) bg_passive_tab_pane_g2_cp1_srt

0x66d5,	// (0x00025e98) bg_passive_tab_pane_g3_cp1_srt

0x2d95,	// (0x00022558) bg_active_tab_pane_cp1_srt_ParamLimits

0x2d95,	// (0x00022558) bg_active_tab_pane_cp1_srt

0x66de,	// (0x00025ea1) tabs_2_active_pane_srt_g1

0xdbbe,	// (0x0002d381) tabs_2_active_pane_srt_t1_ParamLimits

0xdbbe,	// (0x0002d381) tabs_2_active_pane_srt_t1

0x66cc,	// (0x00025e8f) bg_active_tab_pane_g1_cp1_srt

0x3c53,	// (0x00023416) bg_active_tab_pane_g2_cp1_srt

0x66d5,	// (0x00025e98) bg_active_tab_pane_g3_cp1_srt

0x1d6a,	// (0x0002152d) tabs_3_active_pane_srt_ParamLimits

0x1d6a,	// (0x0002152d) tabs_3_active_pane_srt

0x1d7b,	// (0x0002153e) tabs_3_passive_pane_cp_srt_ParamLimits

0x1d7b,	// (0x0002153e) tabs_3_passive_pane_cp_srt

0x1d8c,	// (0x0002154f) tabs_3_passive_pane_srt_ParamLimits

0x1d8c,	// (0x0002154f) tabs_3_passive_pane_srt

0x4fbe,	// (0x00024781) bg_passive_tab_pane_cp2_srt_ParamLimits

0x4fbe,	// (0x00024781) bg_passive_tab_pane_cp2_srt

0x41c0,	// (0x00023983) bg_passive_tab_pane_g1_cp2_srt

0x3c53,	// (0x00023416) bg_passive_tab_pane_g2_cp2_srt

0x41c9,	// (0x0002398c) bg_passive_tab_pane_g3_cp2_srt

0x2d95,	// (0x00022558) bg_active_tab_pane_cp2_srt_ParamLimits

0x2d95,	// (0x00022558) bg_active_tab_pane_cp2_srt

0x66b2,	// (0x00025e75) tabs_3_active_pane_srt_g1

0xdba8,	// (0x0002d36b) tabs_3_active_pane_srt_t1_ParamLimits

0xdba8,	// (0x0002d36b) tabs_3_active_pane_srt_t1

0x41c0,	// (0x00023983) bg_active_tab_pane_g1_cp2_srt

0x3c53,	// (0x00023416) bg_active_tab_pane_g2_cp2_srt

0x41c9,	// (0x0002398c) bg_active_tab_pane_g3_cp2_srt

0x1d22,	// (0x000214e5) tabs_4_active_pane_srt_ParamLimits

0x1d22,	// (0x000214e5) tabs_4_active_pane_srt

0x1d34,	// (0x000214f7) tabs_4_passive_pane_cp2_srt_ParamLimits

0x1d34,	// (0x000214f7) tabs_4_passive_pane_cp2_srt

0x431e,	// (0x00023ae1) aid_size_cell_toolbar

0x62d4,	// (0x00025a97) main_idle_act_pane_ParamLimits

0x4555,	// (0x00023d18) popup_large_graphic_colour_window_ParamLimits

0xd1e9,	// (0x0002c9ac) popup_toolbar_window_ParamLimits

0xd1e9,	// (0x0002c9ac) popup_toolbar_window

0x0917,	// (0x000200da) list_single_graphic_2heading_pane_ParamLimits

0x0917,	// (0x000200da) list_single_graphic_2heading_pane

0x3753,	// (0x00022f16) aid_size_cell_apps_grid_lsc_pane

0x3765,	// (0x00022f28) aid_size_cell_apps_grid_prt_pane

0x4390,	// (0x00023b53) bg_wml_button_pane_cp1_ParamLimits

0x4390,	// (0x00023b53) bg_wml_button_pane_cp1

0xd6f7,	// (0x0002ceba) form_midp_field_text_pane_t1_ParamLimits

0x4fbe,	// (0x00024781) input_focus_pane_cp050_ParamLimits

0x51d5,	// (0x00024998) list_midp_form_text_pane_ParamLimits

0x5187,	// (0x0002494a) input_focus_pane_cp051_ParamLimits

0x519b,	// (0x0002495e) list_midp_choice_pane_ParamLimits

0xd6ae,	// (0x0002ce71) list_single_2graphic_pane_cp3_ParamLimits

0xd6ae,	// (0x0002ce71) list_single_2graphic_pane_cp3

0x732f,	// (0x00026af2) list_single_midp_graphic_pane_ParamLimits

0x732f,	// (0x00026af2) list_single_midp_graphic_pane

0x0794,	// (0x0001ff57) list_single_graphic_2heading_pane_g1_ParamLimits

0x0794,	// (0x0001ff57) list_single_graphic_2heading_pane_g1

0x07a0,	// (0x0001ff63) list_single_graphic_2heading_pane_g4_ParamLimits

0x07a0,	// (0x0001ff63) list_single_graphic_2heading_pane_g4

0x07ac,	// (0x0001ff6f) list_single_graphic_2heading_pane_g5_ParamLimits

0x07ac,	// (0x0001ff6f) list_single_graphic_2heading_pane_g5

0x0002,

0xf7eb,	// (0x0002efae) list_single_graphic_2heading_pane_g_ParamLimits

0xf7eb,	// (0x0002efae) list_single_graphic_2heading_pane_g

0x07b8,	// (0x0001ff7b) list_single_graphic_2heading_pane_t1_ParamLimits

0x07b8,	// (0x0001ff7b) list_single_graphic_2heading_pane_t1

0x07cc,	// (0x0001ff8f) list_single_graphic_2heading_pane_t2_ParamLimits

0x07cc,	// (0x0001ff8f) list_single_graphic_2heading_pane_t2

0x07e8,	// (0x0001ffab) list_single_graphic_2heading_pane_t3_ParamLimits

0x07e8,	// (0x0001ffab) list_single_graphic_2heading_pane_t3

0x0002,

0xf7f2,	// (0x0002efb5) list_single_graphic_2heading_pane_t_ParamLimits

0xf7f2,	// (0x0002efb5) list_single_graphic_2heading_pane_t

0x4e0a,	// (0x000245cd) bg_popup_sub_pane_cp2

0x4e34,	// (0x000245f7) grid_toobar_pane

0x19f3,	// (0x000211b6) cell_toolbar_pane_ParamLimits

0x19f3,	// (0x000211b6) cell_toolbar_pane

0x4e70,	// (0x00024633) cell_toolbar_pane_g1_ParamLimits

0x4e70,	// (0x00024633) cell_toolbar_pane_g1

0x4e84,	// (0x00024647) cell_toolbar_pane_g2_ParamLimits

0x4e84,	// (0x00024647) cell_toolbar_pane_g2

0x0001,

0xf800,	// (0x0002efc3) cell_toolbar_pane_g_ParamLimits

0xf800,	// (0x0002efc3) cell_toolbar_pane_g

0x4ea6,	// (0x00024669) grid_highlight_pane_cp2_ParamLimits

0x4ea6,	// (0x00024669) grid_highlight_pane_cp2

0x4ec0,	// (0x00024683) toolbar_button_pane

0x4ecc,	// (0x0002468f) toolbar_button_pane_g1

0x4ed4,	// (0x00024697) toolbar_button_pane_g2

0x4edc,	// (0x0002469f) toolbar_button_pane_g3

0x4ee4,	// (0x000246a7) toolbar_button_pane_g4

0x4eec,	// (0x000246af) toolbar_button_pane_g5

0x4ef4,	// (0x000246b7) toolbar_button_pane_g6

0x4efc,	// (0x000246bf) toolbar_button_pane_g7

0x4f04,	// (0x000246c7) toolbar_button_pane_g8

0x4f0c,	// (0x000246cf) toolbar_button_pane_g9

0x0009,

0xf805,	// (0x0002efc8) toolbar_button_pane_g

0x1a2b,	// (0x000211ee) list_single_2graphic_pane_g1_cp3_ParamLimits

0x1a2b,	// (0x000211ee) list_single_2graphic_pane_g1_cp3

0xc11b,	// (0x0002b8de) list_single_2graphic_pane_g2_cp3_ParamLimits

0xc11b,	// (0x0002b8de) list_single_2graphic_pane_g2_cp3

0x3e34,	// (0x000235f7) list_single_2graphic_pane_g3_cp3

0xd393,	// (0x0002cb56) list_single_2graphic_pane_g4_cp3_ParamLimits

0xd393,	// (0x0002cb56) list_single_2graphic_pane_g4_cp3

0x1a48,	// (0x0002120b) list_single_2graphic_pane_t1_cp3_ParamLimits

0x1a48,	// (0x0002120b) list_single_2graphic_pane_t1_cp3

0x3e28,	// (0x000235eb) list_single_midp_graphic_pane_g2_ParamLimits

0x3e28,	// (0x000235eb) list_single_midp_graphic_pane_g2

0x4326,	// (0x00023ae9) aid_zoom_text_primary

0x0784,	// (0x0001ff47) aid_zoom_text_secondary

0x427d,	// (0x00023a40) status_small_pane_g7_ParamLimits

0x427d,	// (0x00023a40) status_small_pane_g7

0x42a0,	// (0x00023a63) status_small_pane_t1_ParamLimits

0xbc24,	// (0x0002b3e7) title_pane_g2

0x0003,

0xf592,	// (0x0002ed55) title_pane_g

0xbebc,	// (0x0002b67f) aid_size_cell_colour_1_pane_ParamLimits

0xbebc,	// (0x0002b67f) aid_size_cell_colour_1_pane

0xbed0,	// (0x0002b693) aid_size_cell_colour_2_pane_ParamLimits

0xbed0,	// (0x0002b693) aid_size_cell_colour_2_pane

0xbee4,	// (0x0002b6a7) aid_size_cell_colour_3_pane_ParamLimits

0xbee4,	// (0x0002b6a7) aid_size_cell_colour_3_pane

0xbef8,	// (0x0002b6bb) aid_size_cell_colour_4_pane_ParamLimits

0xbef8,	// (0x0002b6bb) aid_size_cell_colour_4_pane

0x1446,	// (0x00020c09) title_pane_stacon_g1_ParamLimits

0x1446,	// (0x00020c09) title_pane_stacon_g1

0x5567,	// (0x00024d2a) popup_note_wait_window_g3_ParamLimits

0x5567,	// (0x00024d2a) popup_note_wait_window_g3

0x55de,	// (0x00024da1) popup_note_wait_window_t5_ParamLimits

0x55de,	// (0x00024da1) popup_note_wait_window_t5

0x2a39,	// (0x000221fc) main_feb_china_hwr_fs_writing_pane

0xcb84,	// (0x0002c347) popup_feb_china_hwr_fs_window_ParamLimits

0xcb84,	// (0x0002c347) popup_feb_china_hwr_fs_window

0xc12c,	// (0x0002b8ef) aid_size_cell_hwr_fs_ParamLimits

0xc12c,	// (0x0002b8ef) aid_size_cell_hwr_fs

0x4fbe,	// (0x00024781) bg_popup_sub_pane_cp3_ParamLimits

0x4fbe,	// (0x00024781) bg_popup_sub_pane_cp3

0xc141,	// (0x0002b904) grid_hwr_fs_pane_ParamLimits

0xc141,	// (0x0002b904) grid_hwr_fs_pane

0x1aa6,	// (0x00021269) linegrid_hwr_fs_pane_ParamLimits

0x1aa6,	// (0x00021269) linegrid_hwr_fs_pane

0xc159,	// (0x0002b91c) cell_hwr_fs_pane_ParamLimits

0xc159,	// (0x0002b91c) cell_hwr_fs_pane

0x4fca,	// (0x0002478d) linegrid_hwr_fs_pane_g1_ParamLimits

0x4fca,	// (0x0002478d) linegrid_hwr_fs_pane_g1

0xd682,	// (0x0002ce45) linegrid_hwr_fs_pane_g2_ParamLimits

0xd682,	// (0x0002ce45) linegrid_hwr_fs_pane_g2

0x4fe8,	// (0x000247ab) linegrid_hwr_fs_pane_g3_ParamLimits

0x4fe8,	// (0x000247ab) linegrid_hwr_fs_pane_g3

0x1ada,	// (0x0002129d) linegrid_hwr_fs_pane_g4_ParamLimits

0x1ada,	// (0x0002129d) linegrid_hwr_fs_pane_g4

0x1af8,	// (0x000212bb) linegrid_hwr_fs_pane_g5_ParamLimits

0x1af8,	// (0x000212bb) linegrid_hwr_fs_pane_g5

0x0004,

0xf82b,	// (0x0002efee) linegrid_hwr_fs_pane_g_ParamLimits

0xf82b,	// (0x0002efee) linegrid_hwr_fs_pane_g

0x4ff4,	// (0x000247b7) cell_hwr_fs_pane_g1_ParamLimits

0x4ff4,	// (0x000247b7) cell_hwr_fs_pane_g1

0x4d41,	// (0x00024504) cell_hwr_fs_pane_g2_ParamLimits

0x4d41,	// (0x00024504) cell_hwr_fs_pane_g2

0xd694,	// (0x0002ce57) cell_hwr_fs_pane_g3_ParamLimits

0xd694,	// (0x0002ce57) cell_hwr_fs_pane_g3

0xd6a1,	// (0x0002ce64) cell_hwr_fs_pane_g4_ParamLimits

0xd6a1,	// (0x0002ce64) cell_hwr_fs_pane_g4

0x0003,

0xf836,	// (0x0002eff9) cell_hwr_fs_pane_g_ParamLimits

0xf836,	// (0x0002eff9) cell_hwr_fs_pane_g

0xc17f,	// (0x0002b942) cell_hwr_fs_pane_t1

0x2a39,	// (0x000221fc) grid_highlight_pane_cp6

0x2a39,	// (0x000221fc) main_idle_act2_pane

0x3509,	// (0x00022ccc) aid_inside_area_popup_secondary

0xd77b,	// (0x0002cf3e) aid_inside_area_window_primary_ParamLimits

0xd77b,	// (0x0002cf3e) aid_inside_area_window_primary

0x6819,	// (0x00025fdc) ai2_news_ticker_pane

0x6821,	// (0x00025fe4) aid_size_cell_ai1_link_ParamLimits

0x6821,	// (0x00025fe4) aid_size_cell_ai1_link

0x683b,	// (0x00025ffe) popup_ai2_data_window_ParamLimits

0x683b,	// (0x00025ffe) popup_ai2_data_window

0x6859,	// (0x0002601c) popup_ai2_link_window_ParamLimits

0x6859,	// (0x0002601c) popup_ai2_link_window

0x4fbe,	// (0x00024781) bg_popup_sub_pane_cp4_ParamLimits

0x4fbe,	// (0x00024781) bg_popup_sub_pane_cp4

0x686f,	// (0x00026032) grid_ai2_link_pane_ParamLimits

0x686f,	// (0x00026032) grid_ai2_link_pane

0x6886,	// (0x00026049) popup_ai2_link_window_g1_ParamLimits

0x6886,	// (0x00026049) popup_ai2_link_window_g1

0x6892,	// (0x00026055) popup_ai2_link_window_g2_ParamLimits

0x6892,	// (0x00026055) popup_ai2_link_window_g2

0x0001,

0xfa02,	// (0x0002f1c5) popup_ai2_link_window_g_ParamLimits

0xfa02,	// (0x0002f1c5) popup_ai2_link_window_g

0x68a3,	// (0x00026066) ai2_mp_button_pane

0x68ab,	// (0x0002606e) ai2_mp_volume_pane

0x5187,	// (0x0002494a) bg_popup_sub_pane_cp5_ParamLimits

0x5187,	// (0x0002494a) bg_popup_sub_pane_cp5

0x68b3,	// (0x00026076) heading_ai2_gene_pane_ParamLimits

0x68b3,	// (0x00026076) heading_ai2_gene_pane

0x68bf,	// (0x00026082) list_ai2_gene_pane_ParamLimits

0x68bf,	// (0x00026082) list_ai2_gene_pane

0x6907,	// (0x000260ca) cell_ai2_link_pane_ParamLimits

0x6907,	// (0x000260ca) cell_ai2_link_pane

0x691d,	// (0x000260e0) cell_ai2_link_pane_g1

0x2a39,	// (0x000221fc) grid_highlight_pane_cp7

0x1dda,	// (0x0002159d) ai2_mp_volume_pane_g1

0x69f0,	// (0x000261b3) ai2_mp_volume_pane_g2

0x6965,	// (0x00026128) list_ai2_gene_pane_t1

0x69f8,	// (0x000261bb) ai2_mp_volume_pane_g3

0x0002,

0xfa1b,	// (0x0002f1de) ai2_mp_volume_pane_g

0x1de2,	// (0x000215a5) volume_small_pane_cp3

0x6a00,	// (0x000261c3) aid_size_cell_ai2_button

0x6a08,	// (0x000261cb) grid_ai2_button_pane

0x6a11,	// (0x000261d4) cell_ai2_button_pane_ParamLimits

0x6a11,	// (0x000261d4) cell_ai2_button_pane

0x2a2f,	// (0x000221f2) cell_ai2_button_pane_g1

0x2a39,	// (0x000221fc) grid_highlight_pane_cp8

0x69b0,	// (0x00026173) ai2_gene_pane_t1_ParamLimits

0x69b0,	// (0x00026173) ai2_gene_pane_t1

0xcb10,	// (0x0002c2d3) aid_height_parent_landscape

0xd94b,	// (0x0002d10e) aid_height_set_list

0x62d4,	// (0x00025a97) aid_size_parent

0x663a,	// (0x00025dfd) aid_size_cell_graphic_pane_ParamLimits

0x68cf,	// (0x00026092) popup_ai2_data_window_g1_ParamLimits

0x68cf,	// (0x00026092) popup_ai2_data_window_g1

0x68db,	// (0x0002609e) ai2_news_ticker_pane_g1

0x68e3,	// (0x000260a6) ai2_news_ticker_pane_g2

0x0001,

0xfa07,	// (0x0002f1ca) ai2_news_ticker_pane_g

0x68eb,	// (0x000260ae) ai2_news_ticker_pane_t1

0x68f9,	// (0x000260bc) ai2_news_ticker_pane_t2

0x0001,

0xfa0c,	// (0x0002f1cf) ai2_news_ticker_pane_t

0x6926,	// (0x000260e9) heading_ai2_gene_pane_g1

0x692e,	// (0x000260f1) heading_ai2_gene_pane_t1_ParamLimits

0x692e,	// (0x000260f1) heading_ai2_gene_pane_t1

0x6943,	// (0x00026106) list_highlight_pane_cp6

0x694b,	// (0x0002610e) ai2_gene_pane_ParamLimits

0x694b,	// (0x0002610e) ai2_gene_pane

0x6973,	// (0x00026136) list_ai2_gene_pane_t2

0x0001,

0xfa11,	// (0x0002f1d4) list_ai2_gene_pane_t

0x6981,	// (0x00026144) list_highlight_pane_cp8_ParamLimits

0x6981,	// (0x00026144) list_highlight_pane_cp8

0x6992,	// (0x00026155) ai2_gene_pane_g1_ParamLimits

0x6992,	// (0x00026155) ai2_gene_pane_g1

0x69a4,	// (0x00026167) ai2_gene_pane_g2_ParamLimits

0x69a4,	// (0x00026167) ai2_gene_pane_g2

0x0001,

0xfa16,	// (0x0002f1d9) ai2_gene_pane_g_ParamLimits

0xfa16,	// (0x0002f1d9) ai2_gene_pane_g

0x3336,	// (0x00022af9) scroll_pane_cp12

0xc0da,	// (0x0002b89d) control_pane_t3_ParamLimits

0xc0da,	// (0x0002b89d) control_pane_t3

0x4291,	// (0x00023a54) status_small_pane_g8_ParamLimits

0x4291,	// (0x00023a54) status_small_pane_g8

0xcc26,	// (0x0002c3e9) popup_find_window_ParamLimits

0xced3,	// (0x0002c696) popup_note_image_window_ParamLimits

0x0800,	// (0x0001ffc3) list_double2_graphic_pane_vc_g1_ParamLimits

0x0800,	// (0x0001ffc3) list_double2_graphic_pane_vc_g1

0x080c,	// (0x0001ffcf) list_double2_graphic_pane_vc_g2_ParamLimits

0x080c,	// (0x0001ffcf) list_double2_graphic_pane_vc_g2

0x0818,	// (0x0001ffdb) list_double2_graphic_pane_vc_g3_ParamLimits

0x0818,	// (0x0001ffdb) list_double2_graphic_pane_vc_g3

0x0002,

0xf7f9,	// (0x0002efbc) list_double2_graphic_pane_vc_g_ParamLimits

0xf7f9,	// (0x0002efbc) list_double2_graphic_pane_vc_g

0x0824,	// (0x0001ffe7) list_double2_graphic_pane_vc_t1_ParamLimits

0x0824,	// (0x0001ffe7) list_double2_graphic_pane_vc_t1

0x07a0,	// (0x0001ff63) list_single_heading_pane_vc_g1_ParamLimits

0x07a0,	// (0x0001ff63) list_single_heading_pane_vc_g1

0x07ac,	// (0x0001ff6f) list_single_heading_pane_vc_g2_ParamLimits

0x07ac,	// (0x0001ff6f) list_single_heading_pane_vc_g2

0x0001,

0xf60c,	// (0x0002edcf) list_single_heading_pane_vc_g_ParamLimits

0xf60c,	// (0x0002edcf) list_single_heading_pane_vc_g

0x083a,	// (0x0001fffd) list_single_heading_pane_vc_t1_ParamLimits

0x083a,	// (0x0001fffd) list_single_heading_pane_vc_t1

0x0850,	// (0x00020013) list_single_heading_pane_vc_t2_ParamLimits

0x0850,	// (0x00020013) list_single_heading_pane_vc_t2

0x0001,

0xf81a,	// (0x0002efdd) list_single_heading_pane_vc_t_ParamLimits

0xf81a,	// (0x0002efdd) list_single_heading_pane_vc_t

0x4f14,	// (0x000246d7) list_setting_number_pane_vc_g1_ParamLimits

0x4f14,	// (0x000246d7) list_setting_number_pane_vc_g1

0x4f20,	// (0x000246e3) list_setting_number_pane_vc_g2_ParamLimits

0x4f20,	// (0x000246e3) list_setting_number_pane_vc_g2

0x0001,

0xf81f,	// (0x0002efe2) list_setting_number_pane_vc_g_ParamLimits

0xf81f,	// (0x0002efe2) list_setting_number_pane_vc_g

0x4f2c,	// (0x000246ef) list_setting_number_pane_vc_t1_ParamLimits

0x4f2c,	// (0x000246ef) list_setting_number_pane_vc_t1

0x4f40,	// (0x00024703) list_setting_number_pane_vc_t2_ParamLimits

0x4f40,	// (0x00024703) list_setting_number_pane_vc_t2

0x4f5c,	// (0x0002471f) list_setting_number_pane_vc_t3_ParamLimits

0x4f5c,	// (0x0002471f) list_setting_number_pane_vc_t3

0x0002,

0xf824,	// (0x0002efe7) list_setting_number_pane_vc_t_ParamLimits

0xf824,	// (0x0002efe7) list_setting_number_pane_vc_t

0x4f84,	// (0x00024747) set_value_pane_vc_ParamLimits

0x4f84,	// (0x00024747) set_value_pane_vc

0x0917,	// (0x000200da) list_double2_graphic_pane_vc_ParamLimits

0x0917,	// (0x000200da) list_double2_graphic_pane_vc

0x64b8,	// (0x00025c7b) list_double2_large_graphic_pane_vc_ParamLimits

0x64b8,	// (0x00025c7b) list_double2_large_graphic_pane_vc

0x0917,	// (0x000200da) list_double2_pane_vc_ParamLimits

0x0917,	// (0x000200da) list_double2_pane_vc

0x0917,	// (0x000200da) list_double_graphic_heading_pane_vc_ParamLimits

0x0917,	// (0x000200da) list_double_graphic_heading_pane_vc

0x0917,	// (0x000200da) list_double_graphic_pane_vc_ParamLimits

0x0917,	// (0x000200da) list_double_graphic_pane_vc

0x0917,	// (0x000200da) list_double_heading_pane_vc_ParamLimits

0x0917,	// (0x000200da) list_double_heading_pane_vc

0x64b8,	// (0x00025c7b) list_double_large_graphic_pane_vc_ParamLimits

0x64b8,	// (0x00025c7b) list_double_large_graphic_pane_vc

0x0917,	// (0x000200da) list_double_number_pane_vc_ParamLimits

0x0917,	// (0x000200da) list_double_number_pane_vc

0x0917,	// (0x000200da) list_double_pane_vc_ParamLimits

0x0917,	// (0x000200da) list_double_pane_vc

0x0917,	// (0x000200da) list_double_time_pane_vc_ParamLimits

0x0917,	// (0x000200da) list_double_time_pane_vc

0x0917,	// (0x000200da) list_setting_number_pane_vc_ParamLimits

0x0917,	// (0x000200da) list_setting_number_pane_vc

0x0917,	// (0x000200da) list_setting_pane_vc_ParamLimits

0x0917,	// (0x000200da) list_setting_pane_vc

0x0917,	// (0x000200da) list_single_graphic_heading_pane_vc_ParamLimits

0x0917,	// (0x000200da) list_single_graphic_heading_pane_vc

0x0917,	// (0x000200da) list_single_heading_pane_vc_ParamLimits

0x0917,	// (0x000200da) list_single_heading_pane_vc

0x0917,	// (0x000200da) list_single_number_heading_pane_vc_ParamLimits

0x0917,	// (0x000200da) list_single_number_heading_pane_vc

0x0800,	// (0x0001ffc3) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x0800,	// (0x0001ffc3) list_double_graphic_heading_pane_vc_g1

0x07a0,	// (0x0001ff63) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x07a0,	// (0x0001ff63) list_double_graphic_heading_pane_vc_g2

0x07ac,	// (0x0001ff6f) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x07ac,	// (0x0001ff6f) list_double_graphic_heading_pane_vc_g3

0x0002,

0xfa22,	// (0x0002f1e5) list_double_graphic_heading_pane_vc_g_ParamLimits

0xfa22,	// (0x0002f1e5) list_double_graphic_heading_pane_vc_g

0x095c,	// (0x0002011f) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x095c,	// (0x0002011f) list_double_graphic_heading_pane_vc_t1

0x083a,	// (0x0001fffd) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x083a,	// (0x0001fffd) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa29,	// (0x0002f1ec) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa29,	// (0x0002f1ec) list_double_graphic_heading_pane_vc_t

0x4f14,	// (0x000246d7) list_setting_pane_vc_g1_ParamLimits

0x4f14,	// (0x000246d7) list_setting_pane_vc_g1

0x4f20,	// (0x000246e3) list_setting_pane_vc_g2_ParamLimits

0x4f20,	// (0x000246e3) list_setting_pane_vc_g2

0x0001,

0xf81f,	// (0x0002efe2) list_setting_pane_vc_g_ParamLimits

0xf81f,	// (0x0002efe2) list_setting_pane_vc_g

0x6c8f,	// (0x00026452) list_setting_pane_vc_t1_ParamLimits

0x6c8f,	// (0x00026452) list_setting_pane_vc_t1

0x6ca3,	// (0x00026466) list_setting_pane_vc_t2_ParamLimits

0x6ca3,	// (0x00026466) list_setting_pane_vc_t2

0x0001,

0xfa6c,	// (0x0002f22f) list_setting_pane_vc_t_ParamLimits

0xfa6c,	// (0x0002f22f) list_setting_pane_vc_t

0x4f84,	// (0x00024747) set_value_pane_cp_vc_ParamLimits

0x4f84,	// (0x00024747) set_value_pane_cp_vc

0x07a0,	// (0x0001ff63) list_single_number_heading_pane_vc_g1_ParamLimits

0x07a0,	// (0x0001ff63) list_single_number_heading_pane_vc_g1

0x07ac,	// (0x0001ff6f) list_single_number_heading_pane_vc_g2_ParamLimits

0x07ac,	// (0x0001ff6f) list_single_number_heading_pane_vc_g2

0x0001,

0xf60c,	// (0x0002edcf) list_single_number_heading_pane_vc_g_ParamLimits

0xf60c,	// (0x0002edcf) list_single_number_heading_pane_vc_g

0x083a,	// (0x0001fffd) list_single_number_heading_pane_vc_t1_ParamLimits

0x083a,	// (0x0001fffd) list_single_number_heading_pane_vc_t1

0x0970,	// (0x00020133) list_single_number_heading_pane_vc_t2_ParamLimits

0x0970,	// (0x00020133) list_single_number_heading_pane_vc_t2

0x0984,	// (0x00020147) list_single_number_heading_pane_vc_t3_ParamLimits

0x0984,	// (0x00020147) list_single_number_heading_pane_vc_t3

0x0002,

0xfa71,	// (0x0002f234) list_single_number_heading_pane_vc_t_ParamLimits

0xfa71,	// (0x0002f234) list_single_number_heading_pane_vc_t

0x0800,	// (0x0001ffc3) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x0800,	// (0x0001ffc3) list_single_graphic_heading_pane_vc_g1

0x07a0,	// (0x0001ff63) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x07a0,	// (0x0001ff63) list_single_graphic_heading_pane_vc_g4

0x07ac,	// (0x0001ff6f) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x07ac,	// (0x0001ff6f) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa22,	// (0x0002f1e5) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa22,	// (0x0002f1e5) list_single_graphic_heading_pane_vc_g

0x083a,	// (0x0001fffd) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x083a,	// (0x0001fffd) list_single_graphic_heading_pane_vc_t1

0x0996,	// (0x00020159) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x0996,	// (0x00020159) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa78,	// (0x0002f23b) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa78,	// (0x0002f23b) list_single_graphic_heading_pane_vc_t

0x07a0,	// (0x0001ff63) list_double2_pane_vc_g1_ParamLimits

0x07a0,	// (0x0001ff63) list_double2_pane_vc_g1

0x07ac,	// (0x0001ff6f) list_double2_pane_vc_g2_ParamLimits

0x07ac,	// (0x0001ff6f) list_double2_pane_vc_g2

0x0001,

0xf60c,	// (0x0002edcf) list_double2_pane_vc_g_ParamLimits

0xf60c,	// (0x0002edcf) list_double2_pane_vc_g

0x09aa,	// (0x0002016d) list_double2_pane_vc_t1_ParamLimits

0x09aa,	// (0x0002016d) list_double2_pane_vc_t1

0x09c0,	// (0x00020183) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x09c0,	// (0x00020183) list_double2_large_graphic_pane_vc_g1

0x09cc,	// (0x0002018f) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x09cc,	// (0x0002018f) list_double2_large_graphic_pane_vc_g2

0x09d8,	// (0x0002019b) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x09d8,	// (0x0002019b) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf629,	// (0x0002edec) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf629,	// (0x0002edec) list_double2_large_graphic_pane_vc_g

0x09e4,	// (0x000201a7) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x09e4,	// (0x000201a7) list_double2_large_graphic_pane_vc_t1

0x09fa,	// (0x000201bd) list_double_time_pane_vc_g1_ParamLimits

0x09fa,	// (0x000201bd) list_double_time_pane_vc_g1

0x0a06,	// (0x000201c9) list_double_time_pane_vc_g2_ParamLimits

0x0a06,	// (0x000201c9) list_double_time_pane_vc_g2

0x0001,

0xfa7d,	// (0x0002f240) list_double_time_pane_vc_g_ParamLimits

0xfa7d,	// (0x0002f240) list_double_time_pane_vc_g

0x0a12,	// (0x000201d5) list_double_time_pane_vc_t1_ParamLimits

0x0a12,	// (0x000201d5) list_double_time_pane_vc_t1

0x0a2b,	// (0x000201ee) list_double_time_pane_vc_t2_ParamLimits

0x0a2b,	// (0x000201ee) list_double_time_pane_vc_t2

0x0a6b,	// (0x0002022e) list_double_time_pane_vc_t3_ParamLimits

0x0a6b,	// (0x0002022e) list_double_time_pane_vc_t3

0x0a83,	// (0x00020246) list_double_time_pane_vc_t4_ParamLimits

0x0a83,	// (0x00020246) list_double_time_pane_vc_t4

0x0003,

0xfa82,	// (0x0002f245) list_double_time_pane_vc_t_ParamLimits

0xfa82,	// (0x0002f245) list_double_time_pane_vc_t

0x07a0,	// (0x0001ff63) list_double_pane_vc_g1_ParamLimits

0x07a0,	// (0x0001ff63) list_double_pane_vc_g1

0x07ac,	// (0x0001ff6f) list_double_pane_vc_g2_ParamLimits

0x07ac,	// (0x0001ff6f) list_double_pane_vc_g2

0x0001,

0xf60c,	// (0x0002edcf) list_double_pane_vc_g_ParamLimits

0xf60c,	// (0x0002edcf) list_double_pane_vc_g

0x0a97,	// (0x0002025a) list_double_pane_vc_t1_ParamLimits

0x0a97,	// (0x0002025a) list_double_pane_vc_t1

0x0aa9,	// (0x0002026c) list_double_pane_vc_t2_ParamLimits

0x0aa9,	// (0x0002026c) list_double_pane_vc_t2

0x0001,

0xfa8b,	// (0x0002f24e) list_double_pane_vc_t_ParamLimits

0xfa8b,	// (0x0002f24e) list_double_pane_vc_t

0x07a0,	// (0x0001ff63) list_double_number_pane_vc_g1_ParamLimits

0x07a0,	// (0x0001ff63) list_double_number_pane_vc_g1

0x07ac,	// (0x0001ff6f) list_double_number_pane_vc_g2_ParamLimits

0x07ac,	// (0x0001ff6f) list_double_number_pane_vc_g2

0x0001,

0xf60c,	// (0x0002edcf) list_double_number_pane_vc_g_ParamLimits

0xf60c,	// (0x0002edcf) list_double_number_pane_vc_g

0x0ac1,	// (0x00020284) list_double_number_pane_vc_t1_ParamLimits

0x0ac1,	// (0x00020284) list_double_number_pane_vc_t1

0x0ad5,	// (0x00020298) list_double_number_pane_vc_t2_ParamLimits

0x0ad5,	// (0x00020298) list_double_number_pane_vc_t2

0x0aa9,	// (0x0002026c) list_double_number_pane_vc_t3_ParamLimits

0x0aa9,	// (0x0002026c) list_double_number_pane_vc_t3

0x0002,

0xfa90,	// (0x0002f253) list_double_number_pane_vc_t_ParamLimits

0xfa90,	// (0x0002f253) list_double_number_pane_vc_t

0x0ae7,	// (0x000202aa) list_double_large_graphic_pane_vc_g1_ParamLimits

0x0ae7,	// (0x000202aa) list_double_large_graphic_pane_vc_g1

0x0af3,	// (0x000202b6) list_double_large_graphic_pane_vc_g2_ParamLimits

0x0af3,	// (0x000202b6) list_double_large_graphic_pane_vc_g2

0x09d8,	// (0x0002019b) list_double_large_graphic_pane_vc_g3_ParamLimits

0x09d8,	// (0x0002019b) list_double_large_graphic_pane_vc_g3

0x0b02,	// (0x000202c5) list_double_large_graphic_pane_vc_g4_ParamLimits

0x0b02,	// (0x000202c5) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa97,	// (0x0002f25a) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa97,	// (0x0002f25a) list_double_large_graphic_pane_vc_g

0x0b0e,	// (0x000202d1) list_double_large_graphic_pane_vc_t1_ParamLimits

0x0b0e,	// (0x000202d1) list_double_large_graphic_pane_vc_t1

0x0b20,	// (0x000202e3) list_double_large_graphic_pane_vc_t2_ParamLimits

0x0b20,	// (0x000202e3) list_double_large_graphic_pane_vc_t2

0x0001,

0xfaa0,	// (0x0002f263) list_double_large_graphic_pane_vc_t_ParamLimits

0xfaa0,	// (0x0002f263) list_double_large_graphic_pane_vc_t

0x07a0,	// (0x0001ff63) list_double_heading_pane_vc_g1_ParamLimits

0x07a0,	// (0x0001ff63) list_double_heading_pane_vc_g1

0x07ac,	// (0x0001ff6f) list_double_heading_pane_vc_g2_ParamLimits

0x07ac,	// (0x0001ff6f) list_double_heading_pane_vc_g2

0x0001,

0xf60c,	// (0x0002edcf) list_double_heading_pane_vc_g_ParamLimits

0xf60c,	// (0x0002edcf) list_double_heading_pane_vc_g

0x0b39,	// (0x000202fc) list_double_heading_pane_vc_t1_ParamLimits

0x0b39,	// (0x000202fc) list_double_heading_pane_vc_t1

0x083a,	// (0x0001fffd) list_double_heading_pane_vc_t2_ParamLimits

0x083a,	// (0x0001fffd) list_double_heading_pane_vc_t2

0x0001,

0xfaa5,	// (0x0002f268) list_double_heading_pane_vc_t_ParamLimits

0xfaa5,	// (0x0002f268) list_double_heading_pane_vc_t

0x0b4d,	// (0x00020310) list_double_graphic_pane_vc_g1_ParamLimits

0x0b4d,	// (0x00020310) list_double_graphic_pane_vc_g1

0x0b5d,	// (0x00020320) list_double_graphic_pane_vc_g2_ParamLimits

0x0b5d,	// (0x00020320) list_double_graphic_pane_vc_g2

0x0b6c,	// (0x0002032f) list_double_graphic_pane_vc_g3_ParamLimits

0x0b6c,	// (0x0002032f) list_double_graphic_pane_vc_g3

0x0002,

0xfaaa,	// (0x0002f26d) list_double_graphic_pane_vc_g_ParamLimits

0xfaaa,	// (0x0002f26d) list_double_graphic_pane_vc_g

0x0b78,	// (0x0002033b) list_double_graphic_pane_vc_t1_ParamLimits

0x0b78,	// (0x0002033b) list_double_graphic_pane_vc_t1

0x0aa9,	// (0x0002026c) list_double_graphic_pane_vc_t2_ParamLimits

0x0aa9,	// (0x0002026c) list_double_graphic_pane_vc_t2

0x0001,

0xfab1,	// (0x0002f274) list_double_graphic_pane_vc_t_ParamLimits

0xfab1,	// (0x0002f274) list_double_graphic_pane_vc_t

0x0f9b,	// (0x0002075e) aid_size_cell_fastswap

0xba6e,	// (0x0002b231) aid_size_cell_touch_ParamLimits

0xba6e,	// (0x0002b231) aid_size_cell_touch

0x1204,	// (0x000209c7) popup_fast_swap_wide_window_ParamLimits

0x1204,	// (0x000209c7) popup_fast_swap_wide_window

0xbbbd,	// (0x0002b380) touch_pane_ParamLimits

0xbbbd,	// (0x0002b380) touch_pane

0x338c,	// (0x00022b4f) button_value_adjust_pane_cp2

0x338c,	// (0x00022b4f) button_value_adjust_pane_cp4

0x04c0,	// (0x0001fc83) form_field_data_pane_cp2

0xb60b,	// (0x0002adce) form_field_data_wide_pane_cp2

0x3825,	// (0x00022fe8) bg_scroll_pane_ParamLimits

0x15ab,	// (0x00020d6e) scroll_handle_pane_ParamLimits

0x15bf,	// (0x00020d82) scroll_sc2_down_pane_ParamLimits

0x15bf,	// (0x00020d82) scroll_sc2_down_pane

0x3856,	// (0x00023019) scroll_sc2_up_pane_ParamLimits

0x3856,	// (0x00023019) scroll_sc2_up_pane

0xdcff,	// (0x0002d4c2) grid_wheel_folder_pane_g1_ParamLimits

0xdcff,	// (0x0002d4c2) grid_wheel_folder_pane_g1

0x1789,	// (0x00020f4c) clock_nsta_pane_cp2_ParamLimits

0x1789,	// (0x00020f4c) clock_nsta_pane_cp2

0xca25,	// (0x0002c1e8) listscroll_midp_pane_ParamLimits

0xca36,	// (0x0002c1f9) midp_canvas_pane

0x430c,	// (0x00023acf) nsta_clock_indic_pane

0x4362,	// (0x00023b25) listscroll_form_pane_vc

0x437e,	// (0x00023b41) listscroll_set_pane_vc_ParamLimits

0x437e,	// (0x00023b41) listscroll_set_pane_vc

0xd348,	// (0x0002cb0b) clock_nsta_pane

0xd372,	// (0x0002cb35) indicator_nsta_pane

0x4e0a,	// (0x000245cd) bg_popup_sub_pane_cp2_ParamLimits

0x4e1e,	// (0x000245e1) find_pane_cp2_ParamLimits

0x4e1e,	// (0x000245e1) find_pane_cp2

0x4e34,	// (0x000245f7) grid_toobar_pane_ParamLimits

0x4f92,	// (0x00024755) list_form_gen_pane_vc_ParamLimits

0x4f92,	// (0x00024755) list_form_gen_pane_vc

0x4fa8,	// (0x0002476b) scroll_pane_cp8_vc_ParamLimits

0x4fa8,	// (0x0002476b) scroll_pane_cp8_vc

0x5024,	// (0x000247e7) data_form_wide_pane_vc_ParamLimits

0x5024,	// (0x000247e7) data_form_wide_pane_vc

0x5030,	// (0x000247f3) form_field_data_wide_pane_vc_g1

0x5038,	// (0x000247fb) form_field_data_wide_pane_vc_t1_ParamLimits

0x5038,	// (0x000247fb) form_field_data_wide_pane_vc_t1

0x33a0,	// (0x00022b63) input_focus_pane_cp6_vc_ParamLimits

0x33a0,	// (0x00022b63) input_focus_pane_cp6_vc

0xd71f,	// (0x0002cee2) list_midp_pane_ParamLimits

0x66a6,	// (0x00025e69) scroll_pane_cp16_ParamLimits

0x66a6,	// (0x00025e69) scroll_pane_cp16

0x535e,	// (0x00024b21) button_value_adjust_pane_ParamLimits

0x535e,	// (0x00024b21) button_value_adjust_pane

0xd95c,	// (0x0002d11f) button_value_adjust_pane_cp6_ParamLimits

0xd95c,	// (0x0002d11f) button_value_adjust_pane_cp6

0xda9e,	// (0x0002d261) settings_code_pane_cp_ParamLimits

0xda9e,	// (0x0002d261) settings_code_pane_cp

0x2a2f,	// (0x000221f2) cell_touch_pane_g1

0x2a2f,	// (0x000221f2) cell_touch_pane_g2

0x0001,

0xf742,	// (0x0002ef05) cell_touch_pane_g

0xdbd4,	// (0x0002d397) cell_touch_pane_cp_ParamLimits

0xdbd4,	// (0x0002d397) cell_touch_pane_cp

0xdbf0,	// (0x0002d3b3) cell_touch_pane_ParamLimits

0xdbf0,	// (0x0002d3b3) cell_touch_pane

0x2a2f,	// (0x000221f2) scroll_sc2_down_pane_g1

0x2a2f,	// (0x000221f2) scroll_sc2_up_pane_g1

0x2a39,	// (0x000221fc) bg_set_opt_pane_cp4_vc

0x6a44,	// (0x00026207) list_set_graphic_pane_vc_g1_ParamLimits

0x6a44,	// (0x00026207) list_set_graphic_pane_vc_g1

0x6a50,	// (0x00026213) list_set_graphic_pane_vc_g2_ParamLimits

0x6a50,	// (0x00026213) list_set_graphic_pane_vc_g2

0x0001,

0xfa2e,	// (0x0002f1f1) list_set_graphic_pane_vc_g_ParamLimits

0xfa2e,	// (0x0002f1f1) list_set_graphic_pane_vc_g

0x6a5c,	// (0x0002621f) text_primary_small_cp13_vc_ParamLimits

0x6a5c,	// (0x0002621f) text_primary_small_cp13_vc

0x6a74,	// (0x00026237) list_set_graphic_pane_vc_ParamLimits

0x6a74,	// (0x00026237) list_set_graphic_pane_vc

0x2a39,	// (0x000221fc) input_focus_pane_cp2_vc

0x2a2f,	// (0x000221f2) setting_code_pane_vc_g1

0x6a88,	// (0x0002624b) setting_code_pane_vc_t1

0x6a96,	// (0x00026259) set_text_pane_vc_t1_ParamLimits

0x6a96,	// (0x00026259) set_text_pane_vc_t1

0x2a39,	// (0x000221fc) input_focus_pane_cp1_vc

0x6ab4,	// (0x00026277) list_set_text_pane_vc

0x2a2f,	// (0x000221f2) setting_text_pane_vc_g1

0x2a39,	// (0x000221fc) bg_set_opt_pane_cp2_vc

0x6abe,	// (0x00026281) setting_slider_graphic_pane_vc_g1

0x6ac6,	// (0x00026289) setting_slider_graphic_pane_vc_t1

0x6ad4,	// (0x00026297) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa33,	// (0x0002f1f6) setting_slider_graphic_pane_vc_t

0x6ae2,	// (0x000262a5) slider_set_pane_cp_vc

0x6aea,	// (0x000262ad) slider_set_pane_vc_g1

0x6af3,	// (0x000262b6) slider_set_pane_vc_g2

0x0006,

0xfa38,	// (0x0002f1fb) slider_set_pane_vc_g

0x3407,	// (0x00022bca) set_opt_bg_pane_g1_copy1

0x340f,	// (0x00022bd2) set_opt_bg_pane_g2_copy1

0x6b1f,	// (0x000262e2) set_opt_bg_pane_g3_copy1

0x341f,	// (0x00022be2) set_opt_bg_pane_g4_copy1

0x3427,	// (0x00022bea) set_opt_bg_pane_g5_copy1

0x342f,	// (0x00022bf2) set_opt_bg_pane_g6_copy1

0x6b29,	// (0x000262ec) set_opt_bg_pane_g7_copy1

0x6b33,	// (0x000262f6) set_opt_bg_pane_g8_copy1

0x6b3d,	// (0x00026300) set_opt_bg_pane_g9_copy1

0x2a39,	// (0x000221fc) bg_set_opt_pane_cp_vc

0x6b47,	// (0x0002630a) setting_slider_pane_vc_t1

0x6ac6,	// (0x00026289) setting_slider_pane_vc_t2

0x6ad4,	// (0x00026297) setting_slider_pane_vc_t3

0x0002,

0xfa47,	// (0x0002f20a) setting_slider_pane_vc_t

0x6ae2,	// (0x000262a5) slider_set_pane_vc

0x1b1c,	// (0x000212df) volume_set_pane_vc_g1

0x1b25,	// (0x000212e8) volume_set_pane_vc_g2

0x1b2e,	// (0x000212f1) volume_set_pane_vc_g3

0x1b37,	// (0x000212fa) volume_set_pane_vc_g4

0x1b40,	// (0x00021303) volume_set_pane_vc_g5

0x1b49,	// (0x0002130c) volume_set_pane_vc_g6

0x1b52,	// (0x00021315) volume_set_pane_vc_g7

0x1b5b,	// (0x0002131e) volume_set_pane_vc_g8

0x1b64,	// (0x00021327) volume_set_pane_vc_g9

0x1b6d,	// (0x00021330) volume_set_pane_vc_g10

0x0009,

0xfa4e,	// (0x0002f211) volume_set_pane_vc_g

0x6b56,	// (0x00026319) volume_set_pane_vc

0x6b5e,	// (0x00026321) button_value_adjust_pane_cp1_vc

0x6b68,	// (0x0002632b) list_highlight_pane_cp2_vc

0x6b71,	// (0x00026334) list_set_pane_vc_ParamLimits

0x6b71,	// (0x00026334) list_set_pane_vc

0x6c1d,	// (0x000263e0) main_pane_set_vc_t1_ParamLimits

0x6c1d,	// (0x000263e0) main_pane_set_vc_t1

0x6c32,	// (0x000263f5) main_pane_set_vc_t2_ParamLimits

0x6c32,	// (0x000263f5) main_pane_set_vc_t2

0x6c44,	// (0x00026407) main_pane_set_vc_t3_ParamLimits

0x6c44,	// (0x00026407) main_pane_set_vc_t3

0x6c58,	// (0x0002641b) main_pane_set_vc_t4_ParamLimits

0x6c58,	// (0x0002641b) main_pane_set_vc_t4

0x0003,

0xfa63,	// (0x0002f226) main_pane_set_vc_t_ParamLimits

0xfa63,	// (0x0002f226) main_pane_set_vc_t

0x6c6c,	// (0x0002642f) setting_code_pane_vc_ParamLimits

0x6c6c,	// (0x0002642f) setting_code_pane_vc

0x6c7d,	// (0x00026440) setting_slider_graphic_pane_vc

0x6c7d,	// (0x00026440) setting_slider_pane_vc

0x6c7d,	// (0x00026440) setting_text_pane_vc

0x6c7d,	// (0x00026440) setting_volume_pane_vc

0x6c87,	// (0x0002644a) scroll_pane_cp121_vc

0x337a,	// (0x00022b3d) set_content_pane_vc

0x6cc5,	// (0x00026488) button_value_adjust_pane_g1

0x6cce,	// (0x00026491) button_value_adjust_pane_g2

0x0001,

0xfab6,	// (0x0002f279) button_value_adjust_pane_g

0x6cd7,	// (0x0002649a) form_field_slider_wide_pane_vc_t1_ParamLimits

0x6cd7,	// (0x0002649a) form_field_slider_wide_pane_vc_t1

0x6ceb,	// (0x000264ae) form_field_slider_wide_pane_vc_t2_ParamLimits

0x6ceb,	// (0x000264ae) form_field_slider_wide_pane_vc_t2

0x0001,

0xfabb,	// (0x0002f27e) form_field_slider_wide_pane_vc_t_ParamLimits

0xfabb,	// (0x0002f27e) form_field_slider_wide_pane_vc_t

0x2d95,	// (0x00022558) input_focus_pane_cp10_vc_ParamLimits

0x2d95,	// (0x00022558) input_focus_pane_cp10_vc

0x6cfd,	// (0x000264c0) slider_cont_pane_cp1_vc_ParamLimits

0x6cfd,	// (0x000264c0) slider_cont_pane_cp1_vc

0x6aea,	// (0x000262ad) slider_form_pane_g1_cp2

0x6af3,	// (0x000262b6) slider_form_pane_g2_cp2

0x6d16,	// (0x000264d9) form_field_slider_pane_vc_t3

0x6d24,	// (0x000264e7) form_field_slider_pane_vc_t4

0x6d32,	// (0x000264f5) slider_form_pane_vc_ParamLimits

0x6d32,	// (0x000264f5) slider_form_pane_vc

0x6d3f,	// (0x00026502) form_field_slider_pane_vc_t1_ParamLimits

0x6d3f,	// (0x00026502) form_field_slider_pane_vc_t1

0x6ceb,	// (0x000264ae) form_field_slider_pane_vc_t2_ParamLimits

0x6ceb,	// (0x000264ae) form_field_slider_pane_vc_t2

0x0001,

0xfacb,	// (0x0002f28e) form_field_slider_pane_vc_t_ParamLimits

0xfacb,	// (0x0002f28e) form_field_slider_pane_vc_t

0x2d95,	// (0x00022558) input_focus_pane_cp9_vc_ParamLimits

0x2d95,	// (0x00022558) input_focus_pane_cp9_vc

0x6d5b,	// (0x0002651e) slider_cont_pane_vc_ParamLimits

0x6d5b,	// (0x0002651e) slider_cont_pane_vc

0x6d6d,	// (0x00026530) list_form_graphic_pane_cp_vc_ParamLimits

0x6d6d,	// (0x00026530) list_form_graphic_pane_cp_vc

0x5030,	// (0x000247f3) form_field_popup_wide_pane_vc_g1

0x6d82,	// (0x00026545) form_field_popup_wide_pane_vc_t1_ParamLimits

0x6d82,	// (0x00026545) form_field_popup_wide_pane_vc_t1

0x33a0,	// (0x00022b63) input_focus_pane_cp8_vc_ParamLimits

0x33a0,	// (0x00022b63) input_focus_pane_cp8_vc

0x6d99,	// (0x0002655c) list_form_wide_pane_vc_ParamLimits

0x6d99,	// (0x0002655c) list_form_wide_pane_vc

0x6da5,	// (0x00026568) list_form_graphic_pane_vc_g1

0x6dad,	// (0x00026570) list_form_graphic_pane_vc_t1_ParamLimits

0x6dad,	// (0x00026570) list_form_graphic_pane_vc_t1

0x2b19,	// (0x000222dc) list_highlight_pane_cp5_vc_ParamLimits

0x2b19,	// (0x000222dc) list_highlight_pane_cp5_vc

0x6dc9,	// (0x0002658c) list_form_graphic_pane_vc_ParamLimits

0x6dc9,	// (0x0002658c) list_form_graphic_pane_vc

0x5030,	// (0x000247f3) form_field_popup_pane_vc_g1

0x6ddf,	// (0x000265a2) form_field_popup_pane_vc_t1_ParamLimits

0x6ddf,	// (0x000265a2) form_field_popup_pane_vc_t1

0x33a0,	// (0x00022b63) input_focus_pane_cp7_vc_ParamLimits

0x33a0,	// (0x00022b63) input_focus_pane_cp7_vc

0x6df6,	// (0x000265b9) list_form_pane_vc_ParamLimits

0x6df6,	// (0x000265b9) list_form_pane_vc

0x6e02,	// (0x000265c5) data_form_pane_vc_t1_ParamLimits

0x6e02,	// (0x000265c5) data_form_pane_vc_t1

0x3407,	// (0x00022bca) input_focus_pane_vc_g1

0x340f,	// (0x00022bd2) input_focus_pane_vc_g2

0x3417,	// (0x00022bda) input_focus_pane_vc_g3

0x341f,	// (0x00022be2) input_focus_pane_vc_g4

0x3427,	// (0x00022bea) input_focus_pane_vc_g5

0x342f,	// (0x00022bf2) input_focus_pane_vc_g6

0x3437,	// (0x00022bfa) input_focus_pane_vc_g7

0x343f,	// (0x00022c02) input_focus_pane_vc_g8

0x3447,	// (0x00022c0a) input_focus_pane_vc_g9

0x2a2f,	// (0x000221f2) input_focus_pane_vc_g10

0x0009,

0xf6cb,	// (0x0002ee8e) input_focus_pane_vc_g

0x5024,	// (0x000247e7) data_form_pane_vc_ParamLimits

0x5024,	// (0x000247e7) data_form_pane_vc

0x5030,	// (0x000247f3) form_field_data_pane_vc_g1

0x6e1f,	// (0x000265e2) form_field_data_pane_vc_t1_ParamLimits

0x6e1f,	// (0x000265e2) form_field_data_pane_vc_t1

0x33a0,	// (0x00022b63) input_focus_pane_vc_ParamLimits

0x33a0,	// (0x00022b63) input_focus_pane_vc

0x6e39,	// (0x000265fc) button_value_adjust_pane_cp3_vc

0x6e41,	// (0x00026604) button_value_adjust_pane_cp5_vc

0x6e49,	// (0x0002660c) form_field_data_pane_vc_ParamLimits

0x6e49,	// (0x0002660c) form_field_data_pane_vc

0x6e64,	// (0x00026627) form_field_data_pane_vc_cp2

0x6e6c,	// (0x0002662f) form_field_data_wide_pane_vc_ParamLimits

0x6e6c,	// (0x0002662f) form_field_data_wide_pane_vc

0x6e86,	// (0x00026649) form_field_data_wide_pane_vc_cp2

0x6e8e,	// (0x00026651) form_field_popup_pane_vc_ParamLimits

0x6e8e,	// (0x00026651) form_field_popup_pane_vc

0x6ea9,	// (0x0002666c) form_field_popup_wide_pane_vc_ParamLimits

0x6ea9,	// (0x0002666c) form_field_popup_wide_pane_vc

0x6ec3,	// (0x00026686) form_field_slider_pane_vc_ParamLimits

0x6ec3,	// (0x00026686) form_field_slider_pane_vc

0x6ed6,	// (0x00026699) form_field_slider_wide_pane_vc_ParamLimits

0x6ed6,	// (0x00026699) form_field_slider_wide_pane_vc

0xdc0e,	// (0x0002d3d1) grid_touch_1_pane_ParamLimits

0xdc0e,	// (0x0002d3d1) grid_touch_1_pane

0xdc22,	// (0x0002d3e5) grid_touch_2_pane_ParamLimits

0xdc22,	// (0x0002d3e5) grid_touch_2_pane

0x6fad,	// (0x00026770) touch_pane_g1_ParamLimits

0x6fad,	// (0x00026770) touch_pane_g1

0x6f0f,	// (0x000266d2) cell_app_pane_cp_wide_ParamLimits

0x6f0f,	// (0x000266d2) cell_app_pane_cp_wide

0x6f20,	// (0x000266e3) grid_popup_fast_wide_pane_ParamLimits

0x6f20,	// (0x000266e3) grid_popup_fast_wide_pane

0x6f34,	// (0x000266f7) scroll_pane_cp19_ParamLimits

0x6f34,	// (0x000266f7) scroll_pane_cp19

0x2a39,	// (0x000221fc) bg_popup_window_pane_cp20

0x6f48,	// (0x0002670b) listscroll_popup_fast_wide_pane

0x3576,	// (0x00022d39) grid_indicator_nsta_pane

0x6f50,	// (0x00026713) clock_nsta_pane_g1

0x6f59,	// (0x0002671c) clock_nsta_pane_t1

0xdc4e,	// (0x0002d411) cell_indicator_nsta_pane_ParamLimits

0xdc4e,	// (0x0002d411) cell_indicator_nsta_pane

0x6fad,	// (0x00026770) cell_indicator_nsta_pane_g1

0xdc6b,	// (0x0002d42e) cell_indicator_nsta_pane_g2

0x0001,

0xfad5,	// (0x0002f298) cell_indicator_nsta_pane_g

0x6fd0,	// (0x00026793) clock_nsta_pane_cp

0x6fd8,	// (0x0002679b) indicator_nsta_pane_cp

0x6fe0,	// (0x000267a3) nsta_clock_indic_pane_g1

0x2be5,	// (0x000223a8) grid_indicator_pane

0x3948,	// (0x0002310b) scroll_pane_cp29

0x16d5,	// (0x00020e98) indicator_nsta_pane_cp2_ParamLimits

0x16d5,	// (0x00020e98) indicator_nsta_pane_cp2

0x2b19,	// (0x000222dc) main_apps_wheel_pane

0x51ef,	// (0x000249b2) form_midp_field_text_pane_ParamLimits

0x533e,	// (0x00024b01) scroll_bar_cp050_ParamLimits

0x7018,	// (0x000267db) cell_indicator_pane_ParamLimits

0x7018,	// (0x000267db) cell_indicator_pane

0x7030,	// (0x000267f3) cell_indicator_pane_g1

0xdc81,	// (0x0002d444) grid_wheel_folder_pane_ParamLimits

0xdc81,	// (0x0002d444) grid_wheel_folder_pane

0xdc8f,	// (0x0002d452) list_wheel_apps_pane_ParamLimits

0xdc8f,	// (0x0002d452) list_wheel_apps_pane

0xdc9d,	// (0x0002d460) main_apps_wheel_pane_g1_ParamLimits

0xdc9d,	// (0x0002d460) main_apps_wheel_pane_g1

0xdcad,	// (0x0002d470) main_apps_wheel_pane_g2_ParamLimits

0xdcad,	// (0x0002d470) main_apps_wheel_pane_g2

0x0001,

0xfae4,	// (0x0002f2a7) main_apps_wheel_pane_g_ParamLimits

0xfae4,	// (0x0002f2a7) main_apps_wheel_pane_g

0xdcbd,	// (0x0002d480) main_apps_wheel_pane_t1_ParamLimits

0xdcbd,	// (0x0002d480) main_apps_wheel_pane_t1

0xdcd5,	// (0x0002d498) list_wheel_apps_pane_g1

0xdcdd,	// (0x0002d4a0) list_wheel_apps_pane_g2

0xdce5,	// (0x0002d4a8) list_wheel_apps_pane_g3

0xdced,	// (0x0002d4b0) list_wheel_apps_pane_g4

0xdcf5,	// (0x0002d4b8) list_wheel_apps_pane_g5

0x0004,

0xfae9,	// (0x0002f2ac) list_wheel_apps_pane_g

0x3e86,	// (0x00023649) navi_icon_text_pane

0xd241,	// (0x0002ca04) aid_fill_nsta

0xdd12,	// (0x0002d4d5) navi_icon_text_pane_g1

0xdd1e,	// (0x0002d4e1) navi_icon_text_pane_t1

0xca0d,	// (0x0002c1d0) list_set_graphic_pane_t1_ParamLimits

0xca0d,	// (0x0002c1d0) list_set_graphic_pane_t1

0x5a5e,	// (0x00025221) popup_midp_note_alarm_window_t6_ParamLimits

0x5a5e,	// (0x00025221) popup_midp_note_alarm_window_t6

0x5a70,	// (0x00025233) popup_midp_note_alarm_window_t7_ParamLimits

0x5a70,	// (0x00025233) popup_midp_note_alarm_window_t7

0x5a82,	// (0x00025245) popup_midp_note_alarm_window_t8_ParamLimits

0x5a82,	// (0x00025245) popup_midp_note_alarm_window_t8

0x5a94,	// (0x00025257) popup_midp_note_alarm_window_t9_ParamLimits

0x5a94,	// (0x00025257) popup_midp_note_alarm_window_t9

0x5aa6,	// (0x00025269) popup_midp_note_alarm_window_t10_ParamLimits

0x5aa6,	// (0x00025269) popup_midp_note_alarm_window_t10

0x5ab8,	// (0x0002527b) popup_midp_note_alarm_window_t11_ParamLimits

0x5ab8,	// (0x0002527b) popup_midp_note_alarm_window_t11

0x5aca,	// (0x0002528d) scroll_pane_cp17_ParamLimits

0x5aca,	// (0x0002528d) scroll_pane_cp17

0x1b1c,	// (0x000212df) volume_small_pane_cp_g1

0x1deb,	// (0x000215ae) volume_small_pane_cp_g2

0x1df4,	// (0x000215b7) volume_small_pane_cp_g3

0x1dfd,	// (0x000215c0) volume_small_pane_cp_g4

0x1e06,	// (0x000215c9) volume_small_pane_cp_g5

0x1e0f,	// (0x000215d2) volume_small_pane_cp_g6

0x1e18,	// (0x000215db) volume_small_pane_cp_g7

0x1e21,	// (0x000215e4) volume_small_pane_cp_g8

0x1e2a,	// (0x000215ed) volume_small_pane_cp_g9

0x1e33,	// (0x000215f6) volume_small_pane_cp_g10

0x40e7,	// (0x000238aa) midp_ticker_pane_g1_ParamLimits

0x40f3,	// (0x000238b6) midp_ticker_pane_g2_ParamLimits

0xf793,	// (0x0002ef56) midp_ticker_pane_g_ParamLimits

0xcacd,	// (0x0002c290) midp_ticker_pane_t1_ParamLimits

0xd261,	// (0x0002ca24) aid_fill_nsta_2

0x532a,	// (0x00024aed) list_form2_midp_pane

0x6487,	// (0x00025c4a) midp_editing_number_pane_ParamLimits

0x6496,	// (0x00025c59) midp_ticker_pane_ParamLimits

0x7129,	// (0x000268ec) form2_midp_field_pane

0x714d,	// (0x00026910) scroll_pane_cp51

0x716d,	// (0x00026930) form2_midp_button_pane_ParamLimits

0x716d,	// (0x00026930) form2_midp_button_pane

0x717f,	// (0x00026942) form2_midp_content_pane_ParamLimits

0x717f,	// (0x00026942) form2_midp_content_pane

0x7199,	// (0x0002695c) form2_midp_field_choice_group_pane

0x71a1,	// (0x00026964) form2_midp_field_pane_g1

0x71a9,	// (0x0002696c) form2_midp_field_pane_g2

0x71b1,	// (0x00026974) form2_midp_field_pane_g3

0x71b9,	// (0x0002697c) form2_midp_field_pane_g4

0x0003,

0xfb0e,	// (0x0002f2d1) form2_midp_field_pane_g

0x71c1,	// (0x00026984) form2_midp_gauge_slider_pane

0x71c9,	// (0x0002698c) form2_midp_gauge_wait_pane

0x71d1,	// (0x00026994) form2_midp_image_pane_ParamLimits

0x71d1,	// (0x00026994) form2_midp_image_pane

0x71ec,	// (0x000269af) form2_midp_label_pane_ParamLimits

0x71ec,	// (0x000269af) form2_midp_label_pane

0xdd4c,	// (0x0002d50f) form2_midp_label_pane_cp_ParamLimits

0xdd4c,	// (0x0002d50f) form2_midp_label_pane_cp

0x722c,	// (0x000269ef) form2_midp_string_pane_ParamLimits

0x722c,	// (0x000269ef) form2_midp_string_pane

0x0b8a,	// (0x0002034d) form2_midp_text_pane_ParamLimits

0x0b8a,	// (0x0002034d) form2_midp_text_pane

0x723e,	// (0x00026a01) form2_midp_time_pane

0x724e,	// (0x00026a11) input_focus_pane_cp51_ParamLimits

0x724e,	// (0x00026a11) input_focus_pane_cp51

0x7266,	// (0x00026a29) form2_midp_label_pane_t1_ParamLimits

0x7266,	// (0x00026a29) form2_midp_label_pane_t1

0x0bab,	// (0x0002036e) form2_mdip_text_pane_t1_ParamLimits

0x0bab,	// (0x0002036e) form2_mdip_text_pane_t1

0x0bcf,	// (0x00020392) form2_midp_time_pane_t1

0x72b4,	// (0x00026a77) form2_midp_gauge_slider_pane_t1

0xdd6d,	// (0x0002d530) form2_midp_gauge_slider_pane_t2

0xdd7f,	// (0x0002d542) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb17,	// (0x0002f2da) form2_midp_gauge_slider_pane_t

0x72ea,	// (0x00026aad) form2_midp_slider_pane

0x72f6,	// (0x00026ab9) form2_midp_gauge_wait_pane_t1

0x7304,	// (0x00026ac7) form2_midp_wait_pane_ParamLimits

0x7304,	// (0x00026ac7) form2_midp_wait_pane

0xd6ae,	// (0x0002ce71) list_single_2graphic_pane_cp4_ParamLimits

0xd6ae,	// (0x0002ce71) list_single_2graphic_pane_cp4

0xdd91,	// (0x0002d554) list_single_midp_graphic_pane_cp_ParamLimits

0xdd91,	// (0x0002d554) list_single_midp_graphic_pane_cp

0x2a39,	// (0x000221fc) list_highlight_pane_cp20

0x7353,	// (0x00026b16) list_single_2graphic_pane_g1_cp4

0x6926,	// (0x000260e9) list_single_2graphic_pane_g2_cp4

0x735b,	// (0x00026b1e) list_single_2graphic_pane_t1_cp4

0x2b19,	// (0x000222dc) list_highlight_pane_cp21

0x736a,	// (0x00026b2d) list_single_midp_graphic_pane_g4_cp

0x7379,	// (0x00026b3c) list_single_midp_graphic_pane_t1_cp

0xddb2,	// (0x0002d575) form2_mdip_string_pane_t1_ParamLimits

0xddb2,	// (0x0002d575) form2_mdip_string_pane_t1

0x2a39,	// (0x000221fc) bg_wml_button_pane_cp2

0x2a2f,	// (0x000221f2) form2_midp_image_pane_g1

0x0243,	// (0x0001fa06) list_double_large_graphic_pane_g5_ParamLimits

0x0243,	// (0x0001fa06) list_double_large_graphic_pane_g5

0xca25,	// (0x0002c1e8) midp_form_pane_ParamLimits

0x2b19,	// (0x000222dc) main_apps_wheel_pane_ParamLimits

0xcf59,	// (0x0002c71c) popup_preview_window_ParamLimits

0xcf59,	// (0x0002c71c) popup_preview_window

0x4954,	// (0x00024117) popup_touch_info_window_ParamLimits

0x4954,	// (0x00024117) popup_touch_info_window

0x4976,	// (0x00024139) popup_touch_menu_window_ParamLimits

0x4976,	// (0x00024139) popup_touch_menu_window

0x2a25,	// (0x000221e8) bg_popup_sub_pane_cp6

0x7433,	// (0x00026bf6) list_touch_menu_pane

0x743b,	// (0x00026bfe) list_single_touch_menu_pane_ParamLimits

0x743b,	// (0x00026bfe) list_single_touch_menu_pane

0x7456,	// (0x00026c19) list_single_touch_menu_pane_t1

0x2b19,	// (0x000222dc) bg_popup_sub_pane_cp7_ParamLimits

0x2b19,	// (0x000222dc) bg_popup_sub_pane_cp7

0x7464,	// (0x00026c27) heading_sub_pane

0x746c,	// (0x00026c2f) list_touch_info_pane_ParamLimits

0x746c,	// (0x00026c2f) list_touch_info_pane

0x747b,	// (0x00026c3e) list_single_touch_info_pane_ParamLimits

0x747b,	// (0x00026c3e) list_single_touch_info_pane

0x748d,	// (0x00026c50) list_single_touch_info_pane_t1

0x749b,	// (0x00026c5e) list_single_touch_info_pane_t2

0x0001,

0xfb25,	// (0x0002f2e8) list_single_touch_info_pane_t

0x400a,	// (0x000237cd) bg_popup_heading_pane_cp

0x74a9,	// (0x00026c6c) heading_sub_pane_t1

0x4fbe,	// (0x00024781) bg_popup_preview_window_pane_cp_ParamLimits

0x4fbe,	// (0x00024781) bg_popup_preview_window_pane_cp

0x7464,	// (0x00026c27) heading_preview_pane

0x746c,	// (0x00026c2f) list_preview_pane_ParamLimits

0x746c,	// (0x00026c2f) list_preview_pane

0x74b7,	// (0x00026c7a) popup_preview_window_g1

0x747b,	// (0x00026c3e) list_single_preview_pane_ParamLimits

0x747b,	// (0x00026c3e) list_single_preview_pane

0x74bf,	// (0x00026c82) list_single_preview_pane_g1

0x74c7,	// (0x00026c8a) list_single_preview_pane_t1

0x748d,	// (0x00026c50) list_single_preview_pane_t2

0x0001,

0xfb2a,	// (0x0002f2ed) list_single_preview_pane_t

0x74d5,	// (0x00026c98) bg_popup_heading_pane_cp2_ParamLimits

0x74d5,	// (0x00026c98) bg_popup_heading_pane_cp2

0x74eb,	// (0x00026cae) heading_preview_pane_g1

0x74f3,	// (0x00026cb6) heading_preview_pane_t1_ParamLimits

0x74f3,	// (0x00026cb6) heading_preview_pane_t1

0x2c08,	// (0x000223cb) soft_indicator_pane_t1_ParamLimits

0x3313,	// (0x00022ad6) scroll_pane_ParamLimits

0x3844,	// (0x00023007) scroll_sc2_left_pane

0x384d,	// (0x00023010) scroll_sc2_right_pane

0x386c,	// (0x0002302f) scroll_bg_pane_g1_ParamLimits

0x3881,	// (0x00023044) scroll_bg_pane_g2_ParamLimits

0x3899,	// (0x0002305c) scroll_bg_pane_g3_ParamLimits

0xf722,	// (0x0002eee5) scroll_bg_pane_g_ParamLimits

0x386c,	// (0x0002302f) scroll_handle_pane_g1_ParamLimits

0x38bb,	// (0x0002307e) scroll_handle_pane_g2_ParamLimits

0x3899,	// (0x0002305c) scroll_handle_pane_g3_ParamLimits

0xf729,	// (0x0002eeec) scroll_handle_pane_g_ParamLimits

0x43b8,	// (0x00023b7b) popup_choice_list_window_ParamLimits

0x43b8,	// (0x00023b7b) popup_choice_list_window

0x4e16,	// (0x000245d9) choice_list_pane

0x4e98,	// (0x0002465b) cell_toolbar_pane_t1

0x4ec0,	// (0x00024683) toolbar_button_pane_ParamLimits

0x5f9a,	// (0x0002575d) ai_gene_pane_1_t2_ParamLimits

0x5f9a,	// (0x0002575d) ai_gene_pane_1_t2

0x0001,

0xf941,	// (0x0002f104) ai_gene_pane_1_t_ParamLimits

0xf941,	// (0x0002f104) ai_gene_pane_1_t

0x7510,	// (0x00026cd3) scroll_sc2_left_pane_g1

0x7510,	// (0x00026cd3) scroll_sc2_right_pane_g1

0x4390,	// (0x00023b53) bg_popup_sub_pane_cp10

0x751a,	// (0x00026cdd) list_choice_list_pane

0x7531,	// (0x00026cf4) list_single_choice_list_pane_ParamLimits

0x7531,	// (0x00026cf4) list_single_choice_list_pane

0x7545,	// (0x00026d08) list_single_choice_list_pane_g1

0x754d,	// (0x00026d10) list_single_choice_list_pane_t1_ParamLimits

0x754d,	// (0x00026d10) list_single_choice_list_pane_t1

0x7562,	// (0x00026d25) choice_list_pane_g1

0x756a,	// (0x00026d2d) choice_list_pane_t1

0x2a25,	// (0x000221e8) input_focus_pane_cp11

0x371e,	// (0x00022ee1) title_pane_stacon_g2_ParamLimits

0x371e,	// (0x00022ee1) title_pane_stacon_g2

0x0002,

0xf708,	// (0x0002eecb) title_pane_stacon_g_ParamLimits

0xf708,	// (0x0002eecb) title_pane_stacon_g

0x400a,	// (0x000237cd) cursor_press_pane

0xcbda,	// (0x0002c39d) popup_fep_hwr_window_ParamLimits

0xcbda,	// (0x0002c39d) popup_fep_hwr_window

0x44f8,	// (0x00023cbb) popup_fep_vkb_window_ParamLimits

0x44f8,	// (0x00023cbb) popup_fep_vkb_window

0x7578,	// (0x00026d3b) cursor_press_pane_g1

0x0002,

0xfb53,	// (0x0002f316) fep_vkb_side_pane_g_ParamLimits

0x1e67,	// (0x0002162a) fep_hwr_candidate_pane_ParamLimits

0x1e67,	// (0x0002162a) fep_hwr_candidate_pane

0x1e91,	// (0x00021654) fep_hwr_side_pane_ParamLimits

0x1e91,	// (0x00021654) fep_hwr_side_pane

0x1eb3,	// (0x00021676) fep_hwr_top_pane_ParamLimits

0x1eb3,	// (0x00021676) fep_hwr_top_pane

0x1ecb,	// (0x0002168e) fep_hwr_write_pane_ParamLimits

0x1ecb,	// (0x0002168e) fep_hwr_write_pane

0xfb53,	// (0x0002f316) fep_vkb_side_pane_g

0x758e,	// (0x00026d51) fep_hwr_top_pane_g1

0x75a0,	// (0x00026d63) fep_hwr_top_pane_g2

0x1ef7,	// (0x000216ba) fep_hwr_top_pane_g3

0x0002,

0xfb2f,	// (0x0002f2f2) fep_hwr_top_pane_g

0x1f0c,	// (0x000216cf) fep_hwr_top_text_pane

0x3a10,	// (0x000231d3) fep_hwr_top_text_pane_g1

0x75d6,	// (0x00026d99) fep_hwr_top_text_pane_t1

0x2016,	// (0x000217d9) fep_hwr_candidate_pane_g1

0x7821,	// (0x00026fe4) fep_vkb_keypad_pane_g3_ParamLimits

0x7821,	// (0x00026fe4) fep_vkb_keypad_pane_g3

0x784d,	// (0x00027010) fep_vkb_keypad_pane_g4_ParamLimits

0x784d,	// (0x00027010) fep_vkb_keypad_pane_g4

0x78c4,	// (0x00027087) fep_vkb_bottom_pane_g2_ParamLimits

0x78c4,	// (0x00027087) fep_vkb_bottom_pane_g2

0x0001,

0xfb5a,	// (0x0002f31d) fep_vkb_bottom_pane_g_ParamLimits

0xfb5a,	// (0x0002f31d) fep_vkb_bottom_pane_g

0x7510,	// (0x00026cd3) cell_vkb_side_pane_g2

0x0001,

0xfb64,	// (0x0002f327) cell_vkb_side_pane_g

0x794f,	// (0x00027112) cell_vkb_side_pane_t1

0x795d,	// (0x00027120) cell_vkb_side_pane_t1_copy1

0x7510,	// (0x00026cd3) bg_fep_vkb_candidate_pane_g2

0x7aa1,	// (0x00027264) cell_vkb_candidate_pane_ParamLimits

0x75e4,	// (0x00026da7) aid_size_cell_vkb_ParamLimits

0x75e4,	// (0x00026da7) aid_size_cell_vkb

0x7aa1,	// (0x00027264) cell_vkb_candidate_pane

0x2030,	// (0x000217f3) bg_popup_fep_shadow_pane_g1

0xde4e,	// (0x0002d611) fep_vkb_bottom_pane_ParamLimits

0xde4e,	// (0x0002d611) fep_vkb_bottom_pane

0x76b3,	// (0x00026e76) fep_vkb_candidate_pane_ParamLimits

0x76b3,	// (0x00026e76) fep_vkb_candidate_pane

0xde7a,	// (0x0002d63d) fep_vkb_keypad_pane_ParamLimits

0xde7a,	// (0x0002d63d) fep_vkb_keypad_pane

0xdea1,	// (0x0002d664) fep_vkb_side_pane_ParamLimits

0xdea1,	// (0x0002d664) fep_vkb_side_pane

0xdedd,	// (0x0002d6a0) fep_vkb_top_pane_ParamLimits

0xdedd,	// (0x0002d6a0) fep_vkb_top_pane

0x777a,	// (0x00026f3d) fep_vkb_top_pane_g1_ParamLimits

0x777a,	// (0x00026f3d) fep_vkb_top_pane_g1

0x7789,	// (0x00026f4c) fep_vkb_top_pane_g2_ParamLimits

0x7789,	// (0x00026f4c) fep_vkb_top_pane_g2

0x7798,	// (0x00026f5b) fep_vkb_top_pane_g3_ParamLimits

0x7798,	// (0x00026f5b) fep_vkb_top_pane_g3

0x0003,

0xfb4a,	// (0x0002f30d) fep_vkb_top_pane_g_ParamLimits

0xfb4a,	// (0x0002f30d) fep_vkb_top_pane_g

0x77b6,	// (0x00026f79) fep_vkb_top_text_pane_ParamLimits

0x77b6,	// (0x00026f79) fep_vkb_top_text_pane

0xdf19,	// (0x0002d6dc) fep_vkb_side_pane_g1_ParamLimits

0xdf19,	// (0x0002d6dc) fep_vkb_side_pane_g1

0x7810,	// (0x00026fd3) grid_vkb_side_pane_ParamLimits

0x7810,	// (0x00026fd3) grid_vkb_side_pane

0x2038,	// (0x000217fb) bg_popup_fep_shadow_pane_g2

0x2041,	// (0x00021804) bg_popup_fep_shadow_pane_g3

0x2049,	// (0x0002180c) bg_popup_fep_shadow_pane_g4

0x2052,	// (0x00021815) bg_popup_fep_shadow_pane_g5

0x205c,	// (0x0002181f) bg_popup_fep_shadow_pane_g6

0x2064,	// (0x00021827) bg_popup_fep_shadow_pane_g7

0x3427,	// (0x00022bea) bg_popup_fep_shadow_pane_g8

0x786f,	// (0x00027032) grid_vkb_keypad_number_pane_ParamLimits

0x786f,	// (0x00027032) grid_vkb_keypad_number_pane

0x7883,	// (0x00027046) grid_vkb_keypad_pane_ParamLimits

0x7883,	// (0x00027046) grid_vkb_keypad_pane

0x78a9,	// (0x0002706c) fep_vkb_bottom_pane_g1_ParamLimits

0x78a9,	// (0x0002706c) fep_vkb_bottom_pane_g1

0x78d2,	// (0x00027095) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x78d2,	// (0x00027095) grid_vkb_keypad_bottom_left_pane

0x78e7,	// (0x000270aa) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x78e7,	// (0x000270aa) grid_vkb_keypad_bottom_right_pane

0x78fc,	// (0x000270bf) fep_vkb_top_text_pane_g1

0xdf60,	// (0x0002d723) fep_vkb_top_text_pane_t1

0xdf72,	// (0x0002d735) cell_vkb_side_pane_ParamLimits

0xdf72,	// (0x0002d735) cell_vkb_side_pane

0x7510,	// (0x00026cd3) cell_vkb_side_pane_g1

0x796b,	// (0x0002712e) cell_vkb_keypad_pane_ParamLimits

0x796b,	// (0x0002712e) cell_vkb_keypad_pane

0x79f8,	// (0x000271bb) cell_vkb_keypad_pane_g1

0x0008,

0xfb77,	// (0x0002f33a) bg_popup_fep_shadow_pane_g

0x7510,	// (0x00026cd3) cell_hwr_side_pane_g1

0x7510,	// (0x00026cd3) cell_hwr_side_pane_g2

0x7a02,	// (0x000271c5) cell_vkb_keypad_pane_t1

0xdf88,	// (0x0002d74b) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xdf88,	// (0x0002d74b) cell_vkb_keypad_bottom_left_pane

0xdf9d,	// (0x0002d760) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xdf9d,	// (0x0002d760) cell_vkb_keypad_bottom_right_pane

0x7510,	// (0x00026cd3) cell_vkb_keypad_bottom_left_pane_g1

0x7510,	// (0x00026cd3) cell_vkb_keypad_bottom_right_pane_g1

0x7a66,	// (0x00027229) cell_vkb_keypad_number_pane_ParamLimits

0x7a66,	// (0x00027229) cell_vkb_keypad_number_pane

0x7a85,	// (0x00027248) cell_vkb_keypad_number_pane_g1

0x7a8f,	// (0x00027252) cell_vkb_keypad_number_pane_g2

0x7a98,	// (0x0002725b) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb69,	// (0x0002f32c) cell_vkb_keypad_number_pane_g

0x7a02,	// (0x000271c5) cell_vkb_keypad_number_pane_t1

0x7ac2,	// (0x00027285) fep_vkb_candidate_pane_g1

0x0001,

0xfb64,	// (0x0002f327) cell_hwr_side_pane_g

0x7adb,	// (0x0002729e) cell_hwr_side_pane_t1

0x2076,	// (0x00021839) cell_hwr_side_pane_t1_copy1

0x77a8,	// (0x00026f6b) cell_hwr_candidate_pane_g1

0x2084,	// (0x00021847) cell_hwr_candidate_pane_t1

0x7510,	// (0x00026cd3) cell_vkb_candidate_pane_g2

0x7b61,	// (0x00027324) cell_vkb_candidate_pane_t1

0x7580,	// (0x00026d43) bg_popup_fep_shadow_pane_ParamLimits

0x7580,	// (0x00026d43) bg_popup_fep_shadow_pane

0xd39f,	// (0x0002cb62) bg_fep_hwr_top_pane_g4

0x75b2,	// (0x00026d75) bg_hwr_side_pane_g1_ParamLimits

0x75b2,	// (0x00026d75) bg_hwr_side_pane_g1

0xc30c,	// (0x0002bacf) cell_hwr_side_pane_ParamLimits

0xc30c,	// (0x0002bacf) cell_hwr_side_pane

0x1f87,	// (0x0002174a) fep_hwr_write_pane_g1_ParamLimits

0x1f87,	// (0x0002174a) fep_hwr_write_pane_g1

0x1f94,	// (0x00021757) fep_hwr_write_pane_g2_ParamLimits

0x1f94,	// (0x00021757) fep_hwr_write_pane_g2

0x1fa1,	// (0x00021764) fep_hwr_write_pane_g3_ParamLimits

0x1fa1,	// (0x00021764) fep_hwr_write_pane_g3

0xc32c,	// (0x0002baef) fep_hwr_write_pane_g4_ParamLimits

0xc32c,	// (0x0002baef) fep_hwr_write_pane_g4

0x0005,

0xfb36,	// (0x0002f2f9) fep_hwr_write_pane_g_ParamLimits

0xfb36,	// (0x0002f2f9) fep_hwr_write_pane_g

0xd39f,	// (0x0002cb62) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xd39f,	// (0x0002cb62) bg_fep_hwr_candidate_pane_g2

0x1fc4,	// (0x00021787) cell_hwr_candidate_pane_ParamLimits

0x1fc4,	// (0x00021787) cell_hwr_candidate_pane

0x2016,	// (0x000217d9) fep_hwr_candidate_pane_g1_ParamLimits

0x7612,	// (0x00026dd5) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x7612,	// (0x00026dd5) bg_popup_fep_shadow_pane_cp2

0x77a8,	// (0x00026f6b) fep_vkb_top_pane_g4_ParamLimits

0x77a8,	// (0x00026f6b) fep_vkb_top_pane_g4

0x77ee,	// (0x00026fb1) fep_vkb_side_pane_g2_ParamLimits

0x77ee,	// (0x00026fb1) fep_vkb_side_pane_g2

0xb50f,	// (0x0002acd2) list_setting_pane_t4_ParamLimits

0xb50f,	// (0x0002acd2) list_setting_pane_t4

0xb5ab,	// (0x0002ad6e) list_setting_number_pane_t5_ParamLimits

0xb5ab,	// (0x0002ad6e) list_setting_number_pane_t5

0x3a42,	// (0x00023205) list_double_heading_pane_cp2_ParamLimits

0x3a42,	// (0x00023205) list_double_heading_pane_cp2

0x33ba,	// (0x00022b7d) list_double_heading_pane_g1_cp2_ParamLimits

0x33ba,	// (0x00022b7d) list_double_heading_pane_g1_cp2

0x33c6,	// (0x00022b89) list_double_heading_pane_g2_cp2_ParamLimits

0x33c6,	// (0x00022b89) list_double_heading_pane_g2_cp2

0x7b6f,	// (0x00027332) list_double_heading_pane_t1_cp2_ParamLimits

0x7b6f,	// (0x00027332) list_double_heading_pane_t1_cp2

0x7b85,	// (0x00027348) list_double_heading_pane_t2_cp2_ParamLimits

0x7b85,	// (0x00027348) list_double_heading_pane_t2_cp2

0x2a0d,	// (0x000221d0) aid_value_unit2

0x1262,	// (0x00020a25) popup_preview_fixed_window

0x2da3,	// (0x00022566) bg_popup_preview_window_pane_cp02

0x7b97,	// (0x0002735a) list_preview_fixed_pane

0x7bdd,	// (0x000273a0) list_empty_pane_fp_ParamLimits

0x7bdd,	// (0x000273a0) list_empty_pane_fp

0x7bdd,	// (0x000273a0) list_single_cale_day_pane_fp_ParamLimits

0x7bdd,	// (0x000273a0) list_single_cale_day_pane_fp

0x7bdd,	// (0x000273a0) list_single_graphic_heading_pane_fp_ParamLimits

0x7bdd,	// (0x000273a0) list_single_graphic_heading_pane_fp

0x7bdd,	// (0x000273a0) list_single_graphic_pane_fp_ParamLimits

0x7bdd,	// (0x000273a0) list_single_graphic_pane_fp

0x7bdd,	// (0x000273a0) list_single_heading_pane_fp_ParamLimits

0x7bdd,	// (0x000273a0) list_single_heading_pane_fp

0x7bdd,	// (0x000273a0) list_single_pane_fp_ParamLimits

0x7bdd,	// (0x000273a0) list_single_pane_fp

0x7bf6,	// (0x000273b9) list_single_pane_fp_g1_ParamLimits

0x7bf6,	// (0x000273b9) list_single_pane_fp_g1

0x0be2,	// (0x000203a5) list_single_pane_fp_g2_ParamLimits

0x0be2,	// (0x000203a5) list_single_pane_fp_g2

0x0bee,	// (0x000203b1) list_single_pane_fp_g3_ParamLimits

0x0bee,	// (0x000203b1) list_single_pane_fp_g3

0x7c02,	// (0x000273c5) list_single_pane_fp_g4_ParamLimits

0x7c02,	// (0x000273c5) list_single_pane_fp_g4

0x0003,

0xfb98,	// (0x0002f35b) list_single_pane_fp_g_ParamLimits

0xfb98,	// (0x0002f35b) list_single_pane_fp_g

0x0c02,	// (0x000203c5) list_single_pane_fp_t1_ParamLimits

0x0c02,	// (0x000203c5) list_single_pane_fp_t1

0x0c19,	// (0x000203dc) list_single_graphic_pane_fp_g1_ParamLimits

0x0c19,	// (0x000203dc) list_single_graphic_pane_fp_g1

0x7bf6,	// (0x000273b9) list_single_graphic_pane_fp_g2_ParamLimits

0x7bf6,	// (0x000273b9) list_single_graphic_pane_fp_g2

0x0be2,	// (0x000203a5) list_single_graphic_pane_fp_g3_ParamLimits

0x0be2,	// (0x000203a5) list_single_graphic_pane_fp_g3

0x0bee,	// (0x000203b1) list_single_graphic_pane_fp_g4_ParamLimits

0x0bee,	// (0x000203b1) list_single_graphic_pane_fp_g4

0x7c02,	// (0x000273c5) list_single_graphic_pane_fp_g5_ParamLimits

0x7c02,	// (0x000273c5) list_single_graphic_pane_fp_g5

0x0004,

0xfba1,	// (0x0002f364) list_single_graphic_pane_fp_g_ParamLimits

0xfba1,	// (0x0002f364) list_single_graphic_pane_fp_g

0x0c25,	// (0x000203e8) list_single_graphic_pane_fp_t1_ParamLimits

0x0c25,	// (0x000203e8) list_single_graphic_pane_fp_t1

0x0c19,	// (0x000203dc) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x0c19,	// (0x000203dc) list_single_graphic_heading_pane_fp_g1

0x7bf6,	// (0x000273b9) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7bf6,	// (0x000273b9) list_single_graphic_heading_pane_fp_g2

0x0be2,	// (0x000203a5) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x0be2,	// (0x000203a5) list_single_graphic_heading_pane_fp_g3

0x0bee,	// (0x000203b1) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x0bee,	// (0x000203b1) list_single_graphic_heading_pane_fp_g4

0x7c02,	// (0x000273c5) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7c02,	// (0x000273c5) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfba1,	// (0x0002f364) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfba1,	// (0x0002f364) list_single_graphic_heading_pane_fp_g

0x0c3b,	// (0x000203fe) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x0c3b,	// (0x000203fe) list_single_graphic_heading_pane_fp_t1

0x0c51,	// (0x00020414) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x0c51,	// (0x00020414) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfbac,	// (0x0002f36f) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfbac,	// (0x0002f36f) list_single_graphic_heading_pane_fp_t

0x0c63,	// (0x00020426) list_single_cale_day_pane_fp_g1_ParamLimits

0x0c63,	// (0x00020426) list_single_cale_day_pane_fp_g1

0x7c0e,	// (0x000273d1) list_single_cale_day_pane_fp_g2_ParamLimits

0x7c0e,	// (0x000273d1) list_single_cale_day_pane_fp_g2

0x0c9b,	// (0x0002045e) list_single_cale_day_pane_fp_g3_ParamLimits

0x0c9b,	// (0x0002045e) list_single_cale_day_pane_fp_g3

0x0cc3,	// (0x00020486) list_single_cale_day_pane_fp_g4_ParamLimits

0x0cc3,	// (0x00020486) list_single_cale_day_pane_fp_g4

0x0ce7,	// (0x000204aa) list_single_cale_day_pane_fp_g5_ParamLimits

0x0ce7,	// (0x000204aa) list_single_cale_day_pane_fp_g5

0x0004,

0xfbb1,	// (0x0002f374) list_single_cale_day_pane_fp_g_ParamLimits

0xfbb1,	// (0x0002f374) list_single_cale_day_pane_fp_g

0x0d0b,	// (0x000204ce) list_single_cale_day_pane_fp_t1_ParamLimits

0x0d0b,	// (0x000204ce) list_single_cale_day_pane_fp_t1

0x0d31,	// (0x000204f4) list_single_cale_day_pane_fp_t2_ParamLimits

0x0d31,	// (0x000204f4) list_single_cale_day_pane_fp_t2

0x0d4a,	// (0x0002050d) list_single_cale_day_pane_fp_t3_ParamLimits

0x0d4a,	// (0x0002050d) list_single_cale_day_pane_fp_t3

0x0002,

0xfbbc,	// (0x0002f37f) list_single_cale_day_pane_fp_t_ParamLimits

0xfbbc,	// (0x0002f37f) list_single_cale_day_pane_fp_t

0x7bf6,	// (0x000273b9) list_empty_pane_fp_g1_ParamLimits

0x7bf6,	// (0x000273b9) list_empty_pane_fp_g1

0x0d63,	// (0x00020526) list_empty_pane_fp_t1

0x0d71,	// (0x00020534) list_empty_pane_fp_t2

0x0001,

0xfbc3,	// (0x0002f386) list_empty_pane_fp_t

0x7bf6,	// (0x000273b9) list_single_heading_pane_fp_g1_ParamLimits

0x7bf6,	// (0x000273b9) list_single_heading_pane_fp_g1

0x0be2,	// (0x000203a5) list_single_heading_pane_fp_g2_ParamLimits

0x0be2,	// (0x000203a5) list_single_heading_pane_fp_g2

0x0bee,	// (0x000203b1) list_single_heading_pane_fp_g3_ParamLimits

0x0bee,	// (0x000203b1) list_single_heading_pane_fp_g3

0x0002,

0xfbc8,	// (0x0002f38b) list_single_heading_pane_fp_g_ParamLimits

0xfbc8,	// (0x0002f38b) list_single_heading_pane_fp_g

0x0d7f,	// (0x00020542) list_single_heading_pane_fp_t1_ParamLimits

0x0d7f,	// (0x00020542) list_single_heading_pane_fp_t1

0x0d91,	// (0x00020554) list_single_heading_pane_fp_t2_ParamLimits

0x0d91,	// (0x00020554) list_single_heading_pane_fp_t2

0x0001,

0xfbcf,	// (0x0002f392) list_single_heading_pane_fp_t_ParamLimits

0xfbcf,	// (0x0002f392) list_single_heading_pane_fp_t

0x35b5,	// (0x00022d78) aid_size_cell_fast

0x2d15,	// (0x000224d8) soft_indicator_pane_cp1_t1

0x35f2,	// (0x00022db5) cell_app_pane_cp2_ParamLimits

0x35f2,	// (0x00022db5) cell_app_pane_cp2

0x1e50,	// (0x00021613) fep_hwr_candidate_drop_down_list_pane

0xd3ad,	// (0x0002cb70) fep_hwr_candidate_pane_g3_ParamLimits

0xd3ad,	// (0x0002cb70) fep_hwr_candidate_pane_g3

0xd3ba,	// (0x0002cb7d) fep_hwr_candidate_pane_g4_ParamLimits

0xd3ba,	// (0x0002cb7d) fep_hwr_candidate_pane_g4

0x0002,

0xfb43,	// (0x0002f306) fep_hwr_candidate_pane_g_ParamLimits

0xfb43,	// (0x0002f306) fep_hwr_candidate_pane_g

0x76a2,	// (0x00026e65) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x76a2,	// (0x00026e65) fep_vkb_candidate_drop_down_list_pane

0x7aca,	// (0x0002728d) fep_vkb_candidate_pane_g3

0x7ad2,	// (0x00027295) fep_vkb_candidate_pane_g4

0x0002,

0xfb70,	// (0x0002f333) fep_vkb_candidate_pane_g

0x77a8,	// (0x00026f6b) cell_hwr_candidate_pane_g1_ParamLimits

0x7ae9,	// (0x000272ac) cell_hwr_candidate_pane_g3_ParamLimits

0x7ae9,	// (0x000272ac) cell_hwr_candidate_pane_g3

0x7b0a,	// (0x000272cd) cell_hwr_candidate_pane_g4_ParamLimits

0x7b0a,	// (0x000272cd) cell_hwr_candidate_pane_g4

0x0002,

0xfb8a,	// (0x0002f34d) cell_hwr_candidate_pane_g_ParamLimits

0xfb8a,	// (0x0002f34d) cell_hwr_candidate_pane_g

0x7b2b,	// (0x000272ee) cell_vkb_candidate_pane_g3_ParamLimits

0x7b2b,	// (0x000272ee) cell_vkb_candidate_pane_g3

0x7b46,	// (0x00027309) cell_vkb_candidate_pane_g4_ParamLimits

0x7b46,	// (0x00027309) cell_vkb_candidate_pane_g4

0x7c1a,	// (0x000273dd) cell_app_pane_cp2_g1_ParamLimits

0x7c1a,	// (0x000273dd) cell_app_pane_cp2_g1

0x7c38,	// (0x000273fb) cell_app_pane_cp2_g2_ParamLimits

0x7c38,	// (0x000273fb) cell_app_pane_cp2_g2

0x0001,

0xfbd4,	// (0x0002f397) cell_app_pane_cp2_g_ParamLimits

0xfbd4,	// (0x0002f397) cell_app_pane_cp2_g

0x7c44,	// (0x00027407) cell_app_pane_cp2_t1_ParamLimits

0x7c44,	// (0x00027407) cell_app_pane_cp2_t1

0x33a0,	// (0x00022b63) grid_highlight_pane_cp1_ParamLimits

0x33a0,	// (0x00022b63) grid_highlight_pane_cp1

0x20a2,	// (0x00021865) cell_hwr_candidate_pane_cp1_ParamLimits

0x20a2,	// (0x00021865) cell_hwr_candidate_pane_cp1

0x77a8,	// (0x00026f6b) fep_hwr_candidate_drop_down_list_pane_g1

0x7c56,	// (0x00027419) fep_hwr_candidate_drop_down_list_pane_g2

0x7c63,	// (0x00027426) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbd9,	// (0x0002f39c) fep_hwr_candidate_drop_down_list_pane_g

0x20c6,	// (0x00021889) fep_hwr_candidate_drop_down_list_scroll_pane

0x20cf,	// (0x00021892) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x20cf,	// (0x00021892) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x20dc,	// (0x0002189f) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x20dc,	// (0x0002189f) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x20e9,	// (0x000218ac) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x20e9,	// (0x000218ac) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x7b2b,	// (0x000272ee) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7b2b,	// (0x000272ee) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x7b46,	// (0x00027309) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7b46,	// (0x00027309) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x20f6,	// (0x000218b9) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x20f6,	// (0x000218b9) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x2111,	// (0x000218d4) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x2111,	// (0x000218d4) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x212c,	// (0x000218ef) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x212c,	// (0x000218ef) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe0,	// (0x0002f3a3) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe0,	// (0x0002f3a3) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7c70,	// (0x00027433) cell_vkb_candidate_pane_cp1_ParamLimits

0x7c70,	// (0x00027433) cell_vkb_candidate_pane_cp1

0x77a8,	// (0x00026f6b) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x77a8,	// (0x00026f6b) fep_vkb_candidate_drop_down_list_pane_g1

0x7c56,	// (0x00027419) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7c56,	// (0x00027419) fep_vkb_candidate_drop_down_list_pane_g2

0x7c63,	// (0x00027426) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7c63,	// (0x00027426) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbd9,	// (0x0002f39c) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbd9,	// (0x0002f39c) fep_vkb_candidate_drop_down_list_pane_g

0x7c96,	// (0x00027459) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x7c96,	// (0x00027459) fep_vkb_candidate_drop_down_list_scroll_pane

0x7ca3,	// (0x00027466) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7ca3,	// (0x00027466) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7cb0,	// (0x00027473) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7cb0,	// (0x00027473) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x7cbc,	// (0x0002747f) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7cbc,	// (0x0002747f) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x7ae9,	// (0x000272ac) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7ae9,	// (0x000272ac) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x7b0a,	// (0x000272cd) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7b0a,	// (0x000272cd) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x7cc8,	// (0x0002748b) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7cc8,	// (0x0002748b) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x7ce9,	// (0x000274ac) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7ce9,	// (0x000274ac) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7d0a,	// (0x000274cd) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7d0a,	// (0x000274cd) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbf1,	// (0x0002f3b4) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbf1,	// (0x0002f3b4) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xbc13,	// (0x0002b3d6) title_pane_g1_ParamLimits

0xbc24,	// (0x0002b3e7) title_pane_g2_ParamLimits

0xf592,	// (0x0002ed55) title_pane_g_ParamLimits

0x3a00,	// (0x000231c3) aid_call2_pane

0x3a08,	// (0x000231cb) aid_call_pane

0x3a10,	// (0x000231d3) popup_clock_analogue_window_g1

0x3a10,	// (0x000231d3) popup_clock_analogue_window_g2

0x15d4,	// (0x00020d97) popup_clock_analogue_window_g3

0x15dd,	// (0x00020da0) popup_clock_analogue_window_g4

0x2a2f,	// (0x000221f2) popup_clock_analogue_window_g5

0x0004,

0xf737,	// (0x0002eefa) popup_clock_analogue_window_g

0x15e5,	// (0x00020da8) popup_clock_analogue_window_t1

0x15f3,	// (0x00020db6) clock_digital_number_pane_ParamLimits

0x15f3,	// (0x00020db6) clock_digital_number_pane

0x15ff,	// (0x00020dc2) clock_digital_number_pane_cp02_ParamLimits

0x15ff,	// (0x00020dc2) clock_digital_number_pane_cp02

0x160b,	// (0x00020dce) clock_digital_number_pane_cp03_ParamLimits

0x160b,	// (0x00020dce) clock_digital_number_pane_cp03

0x1617,	// (0x00020dda) clock_digital_number_pane_cp04_ParamLimits

0x1617,	// (0x00020dda) clock_digital_number_pane_cp04

0x1623,	// (0x00020de6) clock_digital_separator_pane_ParamLimits

0x1623,	// (0x00020de6) clock_digital_separator_pane

0x162f,	// (0x00020df2) popup_clock_digital_window_t1_ParamLimits

0x162f,	// (0x00020df2) popup_clock_digital_window_t1

0x2a2f,	// (0x000221f2) clock_digital_number_pane_g1

0x2a2f,	// (0x000221f2) clock_digital_number_pane_g2

0x0001,

0xf742,	// (0x0002ef05) clock_digital_number_pane_g

0x2a2f,	// (0x000221f2) clock_digital_separator_pane_g1

0x2a2f,	// (0x000221f2) clock_digital_separator_pane_g2

0x0001,

0xf742,	// (0x0002ef05) clock_digital_separator_pane_g

0xd241,	// (0x0002ca04) aid_fill_nsta_ParamLimits

0xd372,	// (0x0002cb35) indicator_nsta_pane_ParamLimits

0x4ca3,	// (0x00024466) popup_clock_analogue_window

0x4ca3,	// (0x00024466) popup_clock_digital_window

0x3576,	// (0x00022d39) grid_indicator_nsta_pane_ParamLimits

0x6f67,	// (0x0002672a) clock_nsta_pane_t2

0x0001,

0xfad0,	// (0x0002f293) clock_nsta_pane_t

0x1598,	// (0x00020d5b) aid_size_max_handle

0xbfd3,	// (0x0002b796) aid_size_min_handle

0x400a,	// (0x000237cd) editor_scroll_pane

0x7d25,	// (0x000274e8) ex_editor_pane

0x3522,	// (0x00022ce5) scroll_pane_cp13

0x333f,	// (0x00022b02) scroll_pane_cp14

0x3a3a,	// (0x000231fd) scroll_pane_cp36

0xc94a,	// (0x0002c10d) list_single_graphic_hl_pane_cp2_ParamLimits

0xc94a,	// (0x0002c10d) list_single_graphic_hl_pane_cp2

0xdae6,	// (0x0002d2a9) list_single_graphic_hl_pane_ParamLimits

0xdae6,	// (0x0002d2a9) list_single_graphic_hl_pane

0x0da7,	// (0x0002056a) aid_size_min_hl_cp1

0x7d2d,	// (0x000274f0) list_highlight_pane_cp34_ParamLimits

0x7d2d,	// (0x000274f0) list_highlight_pane_cp34

0x7d3e,	// (0x00027501) list_single_graphic_hl_pane_g1_ParamLimits

0x7d3e,	// (0x00027501) list_single_graphic_hl_pane_g1

0xb875,	// (0x0002b038) list_single_graphic_hl_pane_g2_ParamLimits

0xb875,	// (0x0002b038) list_single_graphic_hl_pane_g2

0xb875,	// (0x0002b038) list_single_graphic_hl_pane_g3_ParamLimits

0xb875,	// (0x0002b038) list_single_graphic_hl_pane_g3

0xf586,	// (0x0002ed49) list_single_graphic_hl_pane_g4_ParamLimits

0xf586,	// (0x0002ed49) list_single_graphic_hl_pane_g4

0xb881,	// (0x0002b044) list_single_graphic_hl_pane_g5_ParamLimits

0xb881,	// (0x0002b044) list_single_graphic_hl_pane_g5

0x0004,

0xfc02,	// (0x0002f3c5) list_single_graphic_hl_pane_g_ParamLimits

0xfc02,	// (0x0002f3c5) list_single_graphic_hl_pane_g

0xb895,	// (0x0002b058) list_single_graphic_hl_pane_t1_ParamLimits

0xb895,	// (0x0002b058) list_single_graphic_hl_pane_t1

0x7d4b,	// (0x0002750e) aid_size_min_hl_cp2

0x7d54,	// (0x00027517) list_highlight_pane_cp34_cp2_ParamLimits

0x7d54,	// (0x00027517) list_highlight_pane_cp34_cp2

0x7d3e,	// (0x00027501) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7d3e,	// (0x00027501) list_single_graphic_hl_pane_g1_cp2

0x7d61,	// (0x00027524) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x7d61,	// (0x00027524) list_single_graphic_hl_pane_g2_cp2

0x7d6d,	// (0x00027530) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x7d6d,	// (0x00027530) list_single_graphic_hl_pane_g3_cp2

0x3b44,	// (0x00023307) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x3b44,	// (0x00023307) list_single_graphic_hl_pane_g4_cp2

0x7d7b,	// (0x0002753e) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x7d7b,	// (0x0002753e) list_single_graphic_hl_pane_g5_cp2

0xc005,	// (0x0002b7c8) control_pane_g4_ParamLimits

0xc005,	// (0x0002b7c8) control_pane_g4

0x4390,	// (0x00023b53) bg_popup_sub_pane_cp10_ParamLimits

0x751a,	// (0x00026cdd) list_choice_list_pane_ParamLimits

0x7529,	// (0x00026cec) scroll_pane_cp23

0x2da3,	// (0x00022566) bg_popup_preview_window_pane_cp02_ParamLimits

0x7b97,	// (0x0002735a) list_preview_fixed_pane_ParamLimits

0x7bad,	// (0x00027370) list_preview_fixed_pane_cp_ParamLimits

0x7bad,	// (0x00027370) list_preview_fixed_pane_cp

0x7bb9,	// (0x0002737c) popup_preview_fixed_window_g1_ParamLimits

0x7bb9,	// (0x0002737c) popup_preview_fixed_window_g1

0x7bc5,	// (0x00027388) popup_preview_fixed_window_g2_ParamLimits

0x7bc5,	// (0x00027388) popup_preview_fixed_window_g2

0x0002,

0xfb91,	// (0x0002f354) popup_preview_fixed_window_g_ParamLimits

0xfb91,	// (0x0002f354) popup_preview_fixed_window_g

0x150a,	// (0x00020ccd) aid_navi_side_left_pane_ParamLimits

0x151f,	// (0x00020ce2) aid_navi_side_right_pane_ParamLimits

0x1537,	// (0x00020cfa) navi_icon_pane_stacon_ParamLimits

0x154b,	// (0x00020d0e) navi_navi_pane_stacon_ParamLimits

0x1537,	// (0x00020cfa) navi_text_pane_stacon_ParamLimits

0x2a25,	// (0x000221e8) main_text_info_pane

0x7da5,	// (0x00027568) listscroll_text_info_pane

0x7dad,	// (0x00027570) list_text_info_pane_ParamLimits

0x7dad,	// (0x00027570) list_text_info_pane

0x7dbc,	// (0x0002757f) scroll_pane_cp24_ParamLimits

0x7dbc,	// (0x0002757f) scroll_pane_cp24

0xdfb8,	// (0x0002d77b) list_text_info_pane_t1_ParamLimits

0xdfb8,	// (0x0002d77b) list_text_info_pane_t1

0xcb3e,	// (0x0002c301) popup_fast_swap2_window_ParamLimits

0xcb3e,	// (0x0002c301) popup_fast_swap2_window

0x7dff,	// (0x000275c2) aid_size_cell_fast2

0x2a25,	// (0x000221e8) bg_popup_window_pane_cp17

0x5356,	// (0x00024b19) heading_pane_cp2

0x3003,	// (0x000227c6) listscroll_fast2_pane

0x7e09,	// (0x000275cc) grid_fast2_pane

0x7e13,	// (0x000275d6) listscroll_fast2_pane_g1

0x7e1d,	// (0x000275e0) listscroll_fast2_pane_g2

0x0001,

0xfc0d,	// (0x0002f3d0) listscroll_fast2_pane_g

0x3522,	// (0x00022ce5) scroll_pane_cp26

0x7e27,	// (0x000275ea) cell_fast2_pane_ParamLimits

0x7e27,	// (0x000275ea) cell_fast2_pane

0x7e3e,	// (0x00027601) cell_fast2_pane_g1

0x7e47,	// (0x0002760a) cell_fast2_pane_g2

0x7e50,	// (0x00027613) cell_fast2_pane_g3

0x0002,

0xfc12,	// (0x0002f3d5) cell_fast2_pane_g

0x30fc,	// (0x000228bf) grid_highlight_pane_cp9

0x3111,	// (0x000228d4) main_eswt_pane_ParamLimits

0x3111,	// (0x000228d4) main_eswt_pane

0x7dd1,	// (0x00027594) list_single_text_info_pane

0x7e58,	// (0x0002761b) eswt_ctrl_button_pane

0x7e58,	// (0x0002761b) eswt_ctrl_canvas_pane

0x7e60,	// (0x00027623) eswt_ctrl_combo_pane

0x7e58,	// (0x0002761b) eswt_ctrl_default_pane

0x7e58,	// (0x0002761b) eswt_ctrl_label_pane

0x7e68,	// (0x0002762b) eswt_ctrl_wait_pane

0x7e70,	// (0x00027633) eswt_shell_pane

0x2a25,	// (0x000221e8) listscroll_eswt_app_pane

0x7e90,	// (0x00027653) popup_eswt_tasktip_window_ParamLimits

0x7e90,	// (0x00027653) popup_eswt_tasktip_window

0x4fbe,	// (0x00024781) bg_popup_window_pane_cp18

0x7ea1,	// (0x00027664) eswt_control_pane_g1_ParamLimits

0x7ea1,	// (0x00027664) eswt_control_pane_g1

0x7eae,	// (0x00027671) eswt_control_pane_g2_ParamLimits

0x7eae,	// (0x00027671) eswt_control_pane_g2

0x7ebb,	// (0x0002767e) eswt_control_pane_g3_ParamLimits

0x7ebb,	// (0x0002767e) eswt_control_pane_g3

0x7ec8,	// (0x0002768b) eswt_control_pane_g4_ParamLimits

0x7ec8,	// (0x0002768b) eswt_control_pane_g4

0x0003,

0xfc19,	// (0x0002f3dc) eswt_control_pane_g_ParamLimits

0xfc19,	// (0x0002f3dc) eswt_control_pane_g

0x33a0,	// (0x00022b63) bg_button_pane_ParamLimits

0x33a0,	// (0x00022b63) bg_button_pane

0x3111,	// (0x000228d4) common_borders_pane_copy2_ParamLimits

0x3111,	// (0x000228d4) common_borders_pane_copy2

0x7ed5,	// (0x00027698) control_button_pane_g1_ParamLimits

0x7ed5,	// (0x00027698) control_button_pane_g1

0x7ee1,	// (0x000276a4) control_button_pane_g2_ParamLimits

0x7ee1,	// (0x000276a4) control_button_pane_g2

0x7eed,	// (0x000276b0) control_button_pane_g3_ParamLimits

0x7eed,	// (0x000276b0) control_button_pane_g3

0x0002,

0xfc22,	// (0x0002f3e5) control_button_pane_g_ParamLimits

0xfc22,	// (0x0002f3e5) control_button_pane_g

0x7f01,	// (0x000276c4) control_button_pane_t1

0x7f0f,	// (0x000276d2) control_button_pane_t2

0x0001,

0xfc29,	// (0x0002f3ec) control_button_pane_t

0x4ecc,	// (0x0002468f) bg_button_pane_g1

0x4ed4,	// (0x00024697) bg_button_pane_g2

0x4edc,	// (0x0002469f) bg_button_pane_g3

0x4ee4,	// (0x000246a7) bg_button_pane_g4

0x4eec,	// (0x000246af) bg_button_pane_g5

0x4ef4,	// (0x000246b7) bg_button_pane_g6

0x4efc,	// (0x000246bf) bg_button_pane_g7

0x4f04,	// (0x000246c7) bg_button_pane_g8

0x4f0c,	// (0x000246cf) bg_button_pane_g9

0x0008,

0xf895,	// (0x0002f058) bg_button_pane_g

0x74d5,	// (0x00026c98) common_borders_pane_ParamLimits

0x74d5,	// (0x00026c98) common_borders_pane

0x7ea1,	// (0x00027664) eswt_control_pane_g1_copy1_ParamLimits

0x7ea1,	// (0x00027664) eswt_control_pane_g1_copy1

0x7eae,	// (0x00027671) eswt_control_pane_g2_copy1_ParamLimits

0x7eae,	// (0x00027671) eswt_control_pane_g2_copy1

0x7ebb,	// (0x0002767e) eswt_control_pane_g3_copy1_ParamLimits

0x7ebb,	// (0x0002767e) eswt_control_pane_g3_copy1

0x7ec8,	// (0x0002768b) eswt_control_pane_g4_copy1_ParamLimits

0x7ec8,	// (0x0002768b) eswt_control_pane_g4_copy1

0x7510,	// (0x00026cd3) bg_eswt_ctrl_canvas_pane_g1

0x74d5,	// (0x00026c98) common_borders_pane_cp2_ParamLimits

0x74d5,	// (0x00026c98) common_borders_pane_cp2

0x74d5,	// (0x00026c98) common_borders_pane_cp3_ParamLimits

0x74d5,	// (0x00026c98) common_borders_pane_cp3

0x7f1d,	// (0x000276e0) separator_horizontal_pane

0x7f25,	// (0x000276e8) separator_vertical_pane

0x7ea1,	// (0x00027664) eswt_control_pane_g1_copy2_ParamLimits

0x7ea1,	// (0x00027664) eswt_control_pane_g1_copy2

0x7eae,	// (0x00027671) eswt_control_pane_g2_copy2_ParamLimits

0x7eae,	// (0x00027671) eswt_control_pane_g2_copy2

0x7ebb,	// (0x0002767e) eswt_control_pane_g3_copy2_ParamLimits

0x7ebb,	// (0x0002767e) eswt_control_pane_g3_copy2

0x7ec8,	// (0x0002768b) eswt_control_pane_g4_copy2_ParamLimits

0x7ec8,	// (0x0002768b) eswt_control_pane_g4_copy2

0x2a25,	// (0x000221e8) common_borders_pane_cp4

0x7f2e,	// (0x000276f1) separator_horizontal_pane_g1

0x7f37,	// (0x000276fa) separator_horizontal_pane_g2

0x7f40,	// (0x00027703) separator_horizontal_pane_g3

0x0002,

0xfc2e,	// (0x0002f3f1) separator_horizontal_pane_g

0x7ea1,	// (0x00027664) eswt_control_pane_g1_copy3_ParamLimits

0x7ea1,	// (0x00027664) eswt_control_pane_g1_copy3

0x7eae,	// (0x00027671) eswt_control_pane_g2_copy3_ParamLimits

0x7eae,	// (0x00027671) eswt_control_pane_g2_copy3

0x7ebb,	// (0x0002767e) eswt_control_pane_g3_copy3_ParamLimits

0x7ebb,	// (0x0002767e) eswt_control_pane_g3_copy3

0x7ec8,	// (0x0002768b) eswt_control_pane_g4_copy3_ParamLimits

0x7ec8,	// (0x0002768b) eswt_control_pane_g4_copy3

0x2a25,	// (0x000221e8) common_borders_pane_cp5

0x7f49,	// (0x0002770c) separator_vertical_pane_g1

0x7f52,	// (0x00027715) separator_vertical_pane_g2

0x7f5b,	// (0x0002771e) separator_vertical_pane_g3

0x0002,

0xfc35,	// (0x0002f3f8) separator_vertical_pane_g

0x7ea1,	// (0x00027664) eswt_control_pane_g1_copy4_ParamLimits

0x7ea1,	// (0x00027664) eswt_control_pane_g1_copy4

0x7eae,	// (0x00027671) eswt_control_pane_g2_copy4_ParamLimits

0x7eae,	// (0x00027671) eswt_control_pane_g2_copy4

0x7ebb,	// (0x0002767e) eswt_control_pane_g3_copy4_ParamLimits

0x7ebb,	// (0x0002767e) eswt_control_pane_g3_copy4

0x7ec8,	// (0x0002768b) eswt_control_pane_g4_copy4_ParamLimits

0x7ec8,	// (0x0002768b) eswt_control_pane_g4_copy4

0xdfda,	// (0x0002d79d) eswt_ctrl_combo_button_pane

0xdfe2,	// (0x0002d7a5) eswt_ctrl_input_pane

0xdfea,	// (0x0002d7ad) popup_choice_list_window_cp70

0xdff2,	// (0x0002d7b5) eswt_ctrl_input_pane_t1

0x2a25,	// (0x000221e8) input_focus_pane_cp70

0x74d5,	// (0x00026c98) bg_button_pane_cp70_ParamLimits

0x74d5,	// (0x00026c98) bg_button_pane_cp70

0xe000,	// (0x0002d7c3) eswt_ctrl_combo_button_pane_g1

0x7f92,	// (0x00027755) wait_bar_pane_cp70

0x4fbe,	// (0x00024781) bg_popup_window_pane_cp70_ParamLimits

0x4fbe,	// (0x00024781) bg_popup_window_pane_cp70

0x7f9a,	// (0x0002775d) popup_eswt_tasktip_window_t1

0x7fb0,	// (0x00027773) wait_bar_pane_cp71_ParamLimits

0x7fb0,	// (0x00027773) wait_bar_pane_cp71

0x7fbc,	// (0x0002777f) grid_eswt_app_pane

0x384d,	// (0x00023010) scroll_pane_cp70

0xe008,	// (0x0002d7cb) cell_eswt_app_pane_ParamLimits

0xe008,	// (0x0002d7cb) cell_eswt_app_pane

0xe03a,	// (0x0002d7fd) cell_eswt_app_pane_g1_ParamLimits

0xe03a,	// (0x0002d7fd) cell_eswt_app_pane_g1

0xe069,	// (0x0002d82c) cell_eswt_app_pane_g2_ParamLimits

0xe069,	// (0x0002d82c) cell_eswt_app_pane_g2

0x0001,

0xfc3c,	// (0x0002f3ff) cell_eswt_app_pane_g_ParamLimits

0xfc3c,	// (0x0002f3ff) cell_eswt_app_pane_g

0xe092,	// (0x0002d855) cell_eswt_app_pane_t1_ParamLimits

0xe092,	// (0x0002d855) cell_eswt_app_pane_t1

0x8081,	// (0x00027844) grid_highlight_pane_cp70_ParamLimits

0x8081,	// (0x00027844) grid_highlight_pane_cp70

0x641e,	// (0x00025be1) set_content_pane_g1

0x42ba,	// (0x00023a7d) status_small_volume_pane

0x2147,	// (0x0002190a) status_small_volume_pane_g1

0x214f,	// (0x00021912) volume_small2_pane

0x2158,	// (0x0002191b) volume_small2_pane_g1

0x2161,	// (0x00021924) volume_small2_pane_g2

0x216a,	// (0x0002192d) volume_small2_pane_g3

0x2173,	// (0x00021936) volume_small2_pane_g4

0x217c,	// (0x0002193f) volume_small2_pane_g5

0x2185,	// (0x00021948) volume_small2_pane_g6

0x218e,	// (0x00021951) volume_small2_pane_g7

0x2197,	// (0x0002195a) volume_small2_pane_g8

0x21a0,	// (0x00021963) volume_small2_pane_g9

0x21a9,	// (0x0002196c) volume_small2_pane_g10

0x0009,

0xfc41,	// (0x0002f404) volume_small2_pane_g

0x78fc,	// (0x000270bf) fep_vkb_top_text_pane_g1_ParamLimits

0xdf60,	// (0x0002d723) fep_vkb_top_text_pane_t1_ParamLimits

0x7bd1,	// (0x00027394) popup_preview_fixed_window_g3_ParamLimits

0x7bd1,	// (0x00027394) popup_preview_fixed_window_g3

0xd1d4,	// (0x0002c997) popup_toolbar_trans_pane

0xd94b,	// (0x0002d10e) aid_height_set_list_ParamLimits

0x62d4,	// (0x00025a97) aid_size_parent_ParamLimits

0x4390,	// (0x00023b53) list_highlight_pane_cp2_ParamLimits

0x641e,	// (0x00025be1) set_content_pane_g1_ParamLimits

0xb861,	// (0x0002b024) list_single_image_pane_ParamLimits

0xb861,	// (0x0002b024) list_single_image_pane

0xe0c4,	// (0x0002d887) aid_size_cell_image_ParamLimits

0xe0c4,	// (0x0002d887) aid_size_cell_image

0xe0d1,	// (0x0002d894) grid_single_image_pane_ParamLimits

0xe0d1,	// (0x0002d894) grid_single_image_pane

0x33ba,	// (0x00022b7d) list_single_image_pane_g1_ParamLimits

0x33ba,	// (0x00022b7d) list_single_image_pane_g1

0x33c6,	// (0x00022b89) list_single_image_pane_g2_ParamLimits

0x33c6,	// (0x00022b89) list_single_image_pane_g2

0x0001,

0xfc56,	// (0x0002f419) list_single_image_pane_g_ParamLimits

0xfc56,	// (0x0002f419) list_single_image_pane_g

0x80a8,	// (0x0002786b) list_single_image_pane_t1_ParamLimits

0x80a8,	// (0x0002786b) list_single_image_pane_t1

0xe0df,	// (0x0002d8a2) cell_image_list_pane_ParamLimits

0xe0df,	// (0x0002d8a2) cell_image_list_pane

0xe0f9,	// (0x0002d8bc) cell_image_list_pane_g1

0xe102,	// (0x0002d8c5) cell_image_list_pane_g2

0x0001,

0xfc5b,	// (0x0002f41e) cell_image_list_pane_g

0x80e6,	// (0x000278a9) aid_size_cell_tb_trans_pane

0x33a0,	// (0x00022b63) bg_tb_trans_pane

0x80f8,	// (0x000278bb) grid_tb_trans_pane

0x4ecc,	// (0x0002468f) bg_tb_trans_pane_g1

0x4ed4,	// (0x00024697) bg_tb_trans_pane_g2

0x4edc,	// (0x0002469f) bg_tb_trans_pane_g3

0x4ee4,	// (0x000246a7) bg_tb_trans_pane_g4

0x4eec,	// (0x000246af) bg_tb_trans_pane_g5

0x4f04,	// (0x000246c7) bg_tb_trans_pane_g6

0x4f0c,	// (0x000246cf) bg_tb_trans_pane_g7

0x4ef4,	// (0x000246b7) bg_tb_trans_pane_g8

0x4efc,	// (0x000246bf) bg_tb_trans_pane_g9

0x0008,

0xfc60,	// (0x0002f423) bg_tb_trans_pane_g

0x810c,	// (0x000278cf) cell_toolbar_trans_pane_ParamLimits

0x810c,	// (0x000278cf) cell_toolbar_trans_pane

0x7510,	// (0x00026cd3) cell_toolbar_trans_pane_g1

0xdd30,	// (0x0002d4f3) list_form2_midp_pane_t1

0xdd3e,	// (0x0002d501) list_form2_midp_pane_t2

0x0001,

0xfb09,	// (0x0002f2cc) list_form2_midp_pane_t

0x714d,	// (0x00026910) scroll_pane_cp51_ParamLimits

0x7314,	// (0x00026ad7) form2_midp_wait_pane_g1

0x731d,	// (0x00026ae0) form2_midp_wait_pane_g2

0x7326,	// (0x00026ae9) form2_midp_wait_pane_g3

0x0002,

0xfb1e,	// (0x0002f2e1) form2_midp_wait_pane_g

0x2b19,	// (0x000222dc) list_highlight_pane_cp21_ParamLimits

0x736a,	// (0x00026b2d) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x7379,	// (0x00026b3c) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x0917,	// (0x000200da) list_single_2graphic_im_pane_ParamLimits

0x0917,	// (0x000200da) list_single_2graphic_im_pane

0xe10b,	// (0x0002d8ce) list_single_2graphic_im_pane_g1_ParamLimits

0xe10b,	// (0x0002d8ce) list_single_2graphic_im_pane_g1

0xe11c,	// (0x0002d8df) list_single_2graphic_im_pane_g2_ParamLimits

0xe11c,	// (0x0002d8df) list_single_2graphic_im_pane_g2

0xe128,	// (0x0002d8eb) list_single_2graphic_im_pane_g3_ParamLimits

0xe128,	// (0x0002d8eb) list_single_2graphic_im_pane_g3

0x0003,

0xfc73,	// (0x0002f436) list_single_2graphic_im_pane_g_ParamLimits

0xfc73,	// (0x0002f436) list_single_2graphic_im_pane_g

0xe13c,	// (0x0002d8ff) list_single_2graphic_im_pane_t1_ParamLimits

0xe13c,	// (0x0002d8ff) list_single_2graphic_im_pane_t1

0x7bdd,	// (0x000273a0) list_single_graphic_2heading_pane_fp_ParamLimits

0x7bdd,	// (0x000273a0) list_single_graphic_2heading_pane_fp

0x0c19,	// (0x000203dc) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x0c19,	// (0x000203dc) list_single_graphic_2heading_pane_fp_g1

0x7bf6,	// (0x000273b9) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7bf6,	// (0x000273b9) list_single_graphic_2heading_pane_fp_g2

0x0be2,	// (0x000203a5) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x0be2,	// (0x000203a5) list_single_graphic_2heading_pane_fp_g3

0x0bee,	// (0x000203b1) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x0bee,	// (0x000203b1) list_single_graphic_2heading_pane_fp_g4

0x7c02,	// (0x000273c5) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7c02,	// (0x000273c5) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfba1,	// (0x0002f364) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfba1,	// (0x0002f364) list_single_graphic_2heading_pane_fp_g

0x0de6,	// (0x000205a9) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x0de6,	// (0x000205a9) list_single_graphic_2heading_pane_fp_t1

0x0c51,	// (0x00020414) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x0c51,	// (0x00020414) list_single_graphic_2heading_pane_fp_t2

0x0dfc,	// (0x000205bf) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x0dfc,	// (0x000205bf) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc7c,	// (0x0002f43f) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc7c,	// (0x0002f43f) list_single_graphic_2heading_pane_fp_t

0x75be,	// (0x00026d81) fep_hwr_write_pane_g5_ParamLimits

0x75be,	// (0x00026d81) fep_hwr_write_pane_g5

0x75ca,	// (0x00026d8d) fep_hwr_write_pane_g6_ParamLimits

0x75ca,	// (0x00026d8d) fep_hwr_write_pane_g6

0x7e70,	// (0x00027633) eswt_shell_pane_ParamLimits

0x4fbe,	// (0x00024781) bg_popup_window_pane_cp18_ParamLimits

0x621a,	// (0x000259dd) heading_pane_cp70

0x7f9a,	// (0x0002775d) popup_eswt_tasktip_window_t1_ParamLimits

0xd297,	// (0x0002ca5a) aid_touch_tab_arrow_left

0xd2ad,	// (0x0002ca70) aid_touch_tab_arrow_right

0xbc3c,	// (0x0002b3ff) title_pane_g3_ParamLimits

0xbc3c,	// (0x0002b3ff) title_pane_g3

0x335f,	// (0x00022b22) set_value_pane_g1

0xd1d4,	// (0x0002c997) popup_toolbar_trans_pane_ParamLimits

0x80e6,	// (0x000278a9) aid_size_cell_tb_trans_pane_ParamLimits

0x33a0,	// (0x00022b63) bg_tb_trans_pane_ParamLimits

0x80f8,	// (0x000278bb) grid_tb_trans_pane_ParamLimits

0x2da3,	// (0x00022566) cont_note_pane_ParamLimits

0x2da3,	// (0x00022566) cont_note_pane

0x3111,	// (0x000228d4) cont_snote2_single_text_pane_ParamLimits

0x3111,	// (0x000228d4) cont_snote2_single_text_pane

0x3111,	// (0x000228d4) cont_snote2_single_graphic_pane_ParamLimits

0x3111,	// (0x000228d4) cont_snote2_single_graphic_pane

0x5541,	// (0x00024d04) cont_note_wait_pane_ParamLimits

0x5541,	// (0x00024d04) cont_note_wait_pane

0x5541,	// (0x00024d04) cont_note_image_pane_ParamLimits

0x5541,	// (0x00024d04) cont_note_image_pane

0x81a0,	// (0x00027963) popup_note2_window_g1_ParamLimits

0x81a0,	// (0x00027963) popup_note2_window_g1

0x81d1,	// (0x00027994) popup_note2_window_t1_ParamLimits

0x81d1,	// (0x00027994) popup_note2_window_t1

0x8216,	// (0x000279d9) popup_note2_window_t2_ParamLimits

0x8216,	// (0x000279d9) popup_note2_window_t2

0x825b,	// (0x00027a1e) popup_note2_window_t3_ParamLimits

0x825b,	// (0x00027a1e) popup_note2_window_t3

0x82a0,	// (0x00027a63) popup_note2_window_t4_ParamLimits

0x82a0,	// (0x00027a63) popup_note2_window_t4

0x2e27,	// (0x000225ea) popup_note2_window_t5_ParamLimits

0x2e27,	// (0x000225ea) popup_note2_window_t5

0x0004,

0xfc88,	// (0x0002f44b) popup_note2_window_t_ParamLimits

0xfc88,	// (0x0002f44b) popup_note2_window_t

0x82cf,	// (0x00027a92) popup_note2_image_window_g1_ParamLimits

0x82cf,	// (0x00027a92) popup_note2_image_window_g1

0x82db,	// (0x00027a9e) popup_note2_image_window_g2_ParamLimits

0x82db,	// (0x00027a9e) popup_note2_image_window_g2

0x0001,

0xfc93,	// (0x0002f456) popup_note2_image_window_g_ParamLimits

0xfc93,	// (0x0002f456) popup_note2_image_window_g

0x82ed,	// (0x00027ab0) popup_note2_image_window_t1_ParamLimits

0x82ed,	// (0x00027ab0) popup_note2_image_window_t1

0x8305,	// (0x00027ac8) popup_note2_image_window_t2_ParamLimits

0x8305,	// (0x00027ac8) popup_note2_image_window_t2

0x831d,	// (0x00027ae0) popup_note2_image_window_t3_ParamLimits

0x831d,	// (0x00027ae0) popup_note2_image_window_t3

0x0002,

0xfc98,	// (0x0002f45b) popup_note2_image_window_t_ParamLimits

0xfc98,	// (0x0002f45b) popup_note2_image_window_t

0x554f,	// (0x00024d12) popup_note2_wait_window_g1_ParamLimits

0x554f,	// (0x00024d12) popup_note2_wait_window_g1

0x8339,	// (0x00027afc) popup_note2_wait_window_g2_ParamLimits

0x8339,	// (0x00027afc) popup_note2_wait_window_g2

0x5567,	// (0x00024d2a) popup_note2_wait_window_g3_ParamLimits

0x5567,	// (0x00024d2a) popup_note2_wait_window_g3

0x0002,

0xfc9f,	// (0x0002f462) popup_note2_wait_window_g_ParamLimits

0xfc9f,	// (0x0002f462) popup_note2_wait_window_g

0x8345,	// (0x00027b08) popup_note2_wait_window_t1_ParamLimits

0x8345,	// (0x00027b08) popup_note2_wait_window_t1

0x8363,	// (0x00027b26) popup_note2_wait_window_t2_ParamLimits

0x8363,	// (0x00027b26) popup_note2_wait_window_t2

0x8381,	// (0x00027b44) popup_note2_wait_window_t3_ParamLimits

0x8381,	// (0x00027b44) popup_note2_wait_window_t3

0x8393,	// (0x00027b56) popup_note2_wait_window_t4_ParamLimits

0x8393,	// (0x00027b56) popup_note2_wait_window_t4

0x0003,

0xfca6,	// (0x0002f469) popup_note2_wait_window_t_ParamLimits

0xfca6,	// (0x0002f469) popup_note2_wait_window_t

0x83a5,	// (0x00027b68) wait_bar2_pane_ParamLimits

0x83a5,	// (0x00027b68) wait_bar2_pane

0x83bd,	// (0x00027b80) popup_snote2_single_text_window_g1_ParamLimits

0x83bd,	// (0x00027b80) popup_snote2_single_text_window_g1

0x83e5,	// (0x00027ba8) popup_snote2_single_text_window_t1_ParamLimits

0x83e5,	// (0x00027ba8) popup_snote2_single_text_window_t1

0x8431,	// (0x00027bf4) popup_snote2_single_text_window_t2_ParamLimits

0x8431,	// (0x00027bf4) popup_snote2_single_text_window_t2

0x847d,	// (0x00027c40) popup_snote2_single_text_window_t3_ParamLimits

0x847d,	// (0x00027c40) popup_snote2_single_text_window_t3

0x84be,	// (0x00027c81) popup_snote2_single_text_window_t4_ParamLimits

0x84be,	// (0x00027c81) popup_snote2_single_text_window_t4

0x84f4,	// (0x00027cb7) popup_snote2_single_text_window_t5_ParamLimits

0x84f4,	// (0x00027cb7) popup_snote2_single_text_window_t5

0x0004,

0xfcaf,	// (0x0002f472) popup_snote2_single_text_window_t_ParamLimits

0xfcaf,	// (0x0002f472) popup_snote2_single_text_window_t

0x851f,	// (0x00027ce2) popup_snote2_single_graphic_window_g1_ParamLimits

0x851f,	// (0x00027ce2) popup_snote2_single_graphic_window_g1

0x8547,	// (0x00027d0a) popup_snote2_single_graphic_window_g2_ParamLimits

0x8547,	// (0x00027d0a) popup_snote2_single_graphic_window_g2

0x0001,

0xfcba,	// (0x0002f47d) popup_snote2_single_graphic_window_g_ParamLimits

0xfcba,	// (0x0002f47d) popup_snote2_single_graphic_window_g

0x856f,	// (0x00027d32) popup_snote2_single_graphic_window_t1_ParamLimits

0x856f,	// (0x00027d32) popup_snote2_single_graphic_window_t1

0x85bb,	// (0x00027d7e) popup_snote2_single_graphic_window_t2_ParamLimits

0x85bb,	// (0x00027d7e) popup_snote2_single_graphic_window_t2

0x847d,	// (0x00027c40) popup_snote2_single_graphic_window_t3_ParamLimits

0x847d,	// (0x00027c40) popup_snote2_single_graphic_window_t3

0x84be,	// (0x00027c81) popup_snote2_single_graphic_window_t4_ParamLimits

0x84be,	// (0x00027c81) popup_snote2_single_graphic_window_t4

0x84f4,	// (0x00027cb7) popup_snote2_single_graphic_window_t5_ParamLimits

0x84f4,	// (0x00027cb7) popup_snote2_single_graphic_window_t5

0x0004,

0xfcbf,	// (0x0002f482) popup_snote2_single_graphic_window_t_ParamLimits

0xfcbf,	// (0x0002f482) popup_snote2_single_graphic_window_t

0x6ff7,	// (0x000267ba) clock_nsta_pane_cp2_t1

0x6ff7,	// (0x000267ba) clock_nsta_pane_cp2_t2

0x0001,

0xfadf,	// (0x0002f2a2) clock_nsta_pane_cp2_t

0x057c,	// (0x0001fd3f) form_field_data_wide_pane_g1_ParamLimits

0x33ba,	// (0x00022b7d) form_field_data_wide_pane_g2_ParamLimits

0x33ba,	// (0x00022b7d) form_field_data_wide_pane_g2

0x33c6,	// (0x00022b89) form_field_data_wide_pane_g3_ParamLimits

0x33c6,	// (0x00022b89) form_field_data_wide_pane_g3

0x0002,

0xf6ba,	// (0x0002ee7d) form_field_data_wide_pane_g_ParamLimits

0xf6ba,	// (0x0002ee7d) form_field_data_wide_pane_g

0xdc38,	// (0x0002d3fb) grid_touch_3_pane_ParamLimits

0xdc38,	// (0x0002d3fb) grid_touch_3_pane

0xe16d,	// (0x0002d930) cell_touch_3_pane_ParamLimits

0xe16d,	// (0x0002d930) cell_touch_3_pane

0x7510,	// (0x00026cd3) cell_touch_3_pane_g1

0x7510,	// (0x00026cd3) cell_touch_3_pane_g2

0x0001,

0xfb64,	// (0x0002f327) cell_touch_3_pane_g

0x2e59,	// (0x0002261c) cont_query_data_pane

0x2e61,	// (0x00022624) cont_query_data_pane_cp1

0x863a,	// (0x00027dfd) button_value_adjust_pane_cp7

0x8642,	// (0x00027e05) query_popup_pane_cp3

0x3ada,	// (0x0002329d) bg_popup_sub_pane_cp22_ParamLimits

0x164e,	// (0x00020e11) navi_navi_volume_pane_cp2

0x1669,	// (0x00020e2c) popup_side_volume_key_window_g2

0x1678,	// (0x00020e3b) popup_side_volume_key_window_g3

0x0002,

0xf74c,	// (0x0002ef0f) popup_side_volume_key_window_g

0x1695,	// (0x00020e58) popup_side_volume_key_window_t2

0x0001,

0xf753,	// (0x0002ef16) popup_side_volume_key_window_t

0x3da1,	// (0x00023564) popup_side_volume_key_window_ParamLimits

0xb320,	// (0x0002aae3) list_double_graphic_pane_g4_ParamLimits

0xb320,	// (0x0002aae3) list_double_graphic_pane_g4

0xb84b,	// (0x0002b00e) list_single_2heading_msg_pane_ParamLimits

0xb84b,	// (0x0002b00e) list_single_2heading_msg_pane

0xb8ab,	// (0x0002b06e) list_single_2heading_msg_pane_g1_ParamLimits

0xb8ab,	// (0x0002b06e) list_single_2heading_msg_pane_g1

0xb8b7,	// (0x0002b07a) list_single_2heading_msg_pane_g2_ParamLimits

0xb8b7,	// (0x0002b07a) list_single_2heading_msg_pane_g2

0xb8ca,	// (0x0002b08d) list_single_2heading_msg_pane_g3_ParamLimits

0xb8ca,	// (0x0002b08d) list_single_2heading_msg_pane_g3

0xb8d6,	// (0x0002b099) list_single_2heading_msg_pane_g4_ParamLimits

0xb8d6,	// (0x0002b099) list_single_2heading_msg_pane_g4

0x0003,

0xfcca,	// (0x0002f48d) list_single_2heading_msg_pane_g_ParamLimits

0xfcca,	// (0x0002f48d) list_single_2heading_msg_pane_g

0xb8ee,	// (0x0002b0b1) list_single_2heading_msg_pane_t1_ParamLimits

0xb8ee,	// (0x0002b0b1) list_single_2heading_msg_pane_t1

0xb916,	// (0x0002b0d9) list_single_2heading_msg_pane_t2_ParamLimits

0xb916,	// (0x0002b0d9) list_single_2heading_msg_pane_t2

0xb981,	// (0x0002b144) list_single_2heading_msg_pane_t3_ParamLimits

0xb981,	// (0x0002b144) list_single_2heading_msg_pane_t3

0x0ee1,	// (0x000206a4) list_single_2heading_msg_pane_t4_ParamLimits

0x0ee1,	// (0x000206a4) list_single_2heading_msg_pane_t4

0x0003,

0xfcd3,	// (0x0002f496) list_single_2heading_msg_pane_t_ParamLimits

0xfcd3,	// (0x0002f496) list_single_2heading_msg_pane_t

0x2a6d,	// (0x00022230) title_pane_g4_ParamLimits

0x2a6d,	// (0x00022230) title_pane_g4

0x145a,	// (0x00020c1d) title_pane_stacon_g3_ParamLimits

0x145a,	// (0x00020c1d) title_pane_stacon_g3

0x8163,	// (0x00027926) list_single_2graphic_im_pane_g4_ParamLimits

0x8163,	// (0x00027926) list_single_2graphic_im_pane_g4

0x5fb7,	// (0x0002577a) popup_side_volume_key_window_cp

0x682d,	// (0x00025ff0) main_idle_act2_pane_t1

0x1a23,	// (0x000211e6) toolbar_button_pane_g10

0xbfc9,	// (0x0002b78c) popup_toolbar_window_cp1

0x6fe8,	// (0x000267ab) clock_nsta_pane_cp_t1

0x6fe8,	// (0x000267ab) clock_nsta_pane_cp_t2

0x0001,

0xfada,	// (0x0002f29d) clock_nsta_pane_cp_t

0x164e,	// (0x00020e11) navi_navi_volume_pane_cp2_ParamLimits

0x165d,	// (0x00020e20) popup_side_volume_key_window_g1_ParamLimits

0x1669,	// (0x00020e2c) popup_side_volume_key_window_g2_ParamLimits

0x1678,	// (0x00020e3b) popup_side_volume_key_window_g3_ParamLimits

0xf74c,	// (0x0002ef0f) popup_side_volume_key_window_g_ParamLimits

0x1e3c,	// (0x000215ff) fep_hwr_aid_pane

0xd39f,	// (0x0002cb62) bg_fep_hwr_top_pane_g4_ParamLimits

0x758e,	// (0x00026d51) fep_hwr_top_pane_g1_ParamLimits

0x75a0,	// (0x00026d63) fep_hwr_top_pane_g2_ParamLimits

0x1ef7,	// (0x000216ba) fep_hwr_top_pane_g3_ParamLimits

0xfb2f,	// (0x0002f2f2) fep_hwr_top_pane_g_ParamLimits

0x1f0c,	// (0x000216cf) fep_hwr_top_text_pane_ParamLimits

0x5d6c,	// (0x0002552f) aid_touch_tab_arrow_arrow_2

0x5d75,	// (0x00025538) aid_touch_tab_arrow_left_2

0x1e50,	// (0x00021613) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x1e87,	// (0x0002164a) fep_hwr_prediction_pane

0x76f6,	// (0x00026eb9) fep_vkb_prediction_pane

0xdf40,	// (0x0002d703) fep_vkb_side_pane_g3_ParamLimits

0xdf40,	// (0x0002d703) fep_vkb_side_pane_g3

0x77a8,	// (0x00026f6b) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x7c56,	// (0x00027419) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x7c63,	// (0x00027426) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbd9,	// (0x0002f39c) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x8669,	// (0x00027e2c) fep_hwr_prediction_pane_g1

0x21b2,	// (0x00021975) fep_hwr_prediction_pane_g2

0x21ba,	// (0x0002197d) fep_hwr_prediction_pane_g3

0x21c2,	// (0x00021985) fep_hwr_prediction_pane_g4

0x0003,

0xfcdc,	// (0x0002f49f) fep_hwr_prediction_pane_g

0x8669,	// (0x00027e2c) fep_vkb_prediction_pane_g1

0x8673,	// (0x00027e36) fep_vkb_prediction_pane_g2

0x867b,	// (0x00027e3e) fep_vkb_prediction_pane_g3

0x8683,	// (0x00027e46) fep_vkb_prediction_pane_g4

0x0003,

0xfce5,	// (0x0002f4a8) fep_vkb_prediction_pane_g

0x6bdb,	// (0x0002639e) slider_set_pane_g3

0x6bef,	// (0x000263b2) slider_set_pane_g4

0x6c07,	// (0x000263ca) slider_set_pane_g5

0x6bdb,	// (0x0002639e) slider_set_pane_g6

0x1d0c,	// (0x000214cf) slider_set_pane_g7

0x6465,	// (0x00025c28) slider_form_pane_g3

0x646e,	// (0x00025c31) slider_form_pane_g4

0x6476,	// (0x00025c39) slider_form_pane_g5

0x6465,	// (0x00025c28) slider_form_pane_g6

0xdaba,	// (0x0002d27d) slider_form_pane_g7

0x6afb,	// (0x000262be) slider_set_pane_vc_g3

0x6b04,	// (0x000262c7) slider_set_pane_vc_g4

0x6b0d,	// (0x000262d0) slider_set_pane_vc_g5

0x6afb,	// (0x000262be) slider_set_pane_vc_g6

0x6b16,	// (0x000262d9) slider_set_pane_vc_g7

0x6afb,	// (0x000262be) slider_form_pane_vc_g1

0x6b04,	// (0x000262c7) slider_form_pane_vc_g2

0x6b0d,	// (0x000262d0) slider_form_pane_vc_g3

0x6afb,	// (0x000262be) slider_form_pane_vc_g4

0x6d0d,	// (0x000264d0) slider_form_pane_vc_g5

0x0004,

0xfac0,	// (0x0002f283) slider_form_pane_vc_g

0x2a25,	// (0x000221e8) main_idle_act3_pane

0x868b,	// (0x00027e4e) ai3_links_pane

0xe1b7,	// (0x0002d97a) popup_ai3_data_window_ParamLimits

0xe1b7,	// (0x0002d97a) popup_ai3_data_window

0x2a25,	// (0x000221e8) grid_ai3_links_pane

0xe1d5,	// (0x0002d998) cell_ai3_links_pane_ParamLimits

0xe1d5,	// (0x0002d998) cell_ai3_links_pane

0x86cc,	// (0x00027e8f) bg_popup_sub_pane_cp11

0x86d9,	// (0x00027e9c) cell_ai3_links_pane_g1

0x2a25,	// (0x000221e8) bg_popup_sub_pane_cp12

0x86fe,	// (0x00027ec1) heading_ai3_data_pane

0x8706,	// (0x00027ec9) list_ai3_gene_pane

0x8712,	// (0x00027ed5) popup_ai3_data_window_g1

0x871a,	// (0x00027edd) heading_ai3_data_pane_g1

0x8722,	// (0x00027ee5) heading_ai3_data_pane_t1

0x8730,	// (0x00027ef3) list_double_ai3_gene_pane_ParamLimits

0x8730,	// (0x00027ef3) list_double_ai3_gene_pane

0x873d,	// (0x00027f00) list_single_ai3_gene_pane_ParamLimits

0x873d,	// (0x00027f00) list_single_ai3_gene_pane

0x74d5,	// (0x00026c98) list_highlight_pane_cp7_ParamLimits

0x74d5,	// (0x00026c98) list_highlight_pane_cp7

0x874a,	// (0x00027f0d) list_single_a13_gene_pane_t1_ParamLimits

0x874a,	// (0x00027f0d) list_single_a13_gene_pane_t1

0x8761,	// (0x00027f24) list_single_ai3_gene_pane_g1

0x876a,	// (0x00027f2d) list_single_ai3_gene_pane_g2

0x0001,

0xfcee,	// (0x0002f4b1) list_single_ai3_gene_pane_g

0x8772,	// (0x00027f35) list_double_ai3_gene_pane_g1_ParamLimits

0x8772,	// (0x00027f35) list_double_ai3_gene_pane_g1

0x877e,	// (0x00027f41) list_double_ai3_gene_pane_t1_ParamLimits

0x877e,	// (0x00027f41) list_double_ai3_gene_pane_t1

0x879a,	// (0x00027f5d) list_double_ai3_gene_pane_t2_ParamLimits

0x879a,	// (0x00027f5d) list_double_ai3_gene_pane_t2

0x87af,	// (0x00027f72) list_double_ai3_gene_pane_t3_ParamLimits

0x87af,	// (0x00027f72) list_double_ai3_gene_pane_t3

0x0002,

0xfcf3,	// (0x0002f4b6) list_double_ai3_gene_pane_t_ParamLimits

0xfcf3,	// (0x0002f4b6) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0e12,	// (0x000205d5) aid_size_min_col_2

0xe1a1,	// (0x0002d964) aid_size_min_msg_ParamLimits

0xe1a1,	// (0x0002d964) aid_size_min_msg

0xdf54,	// (0x0002d717) fep_vkb_top_text_pane_g2_ParamLimits

0xdf54,	// (0x0002d717) fep_vkb_top_text_pane_g2

0x0001,

0xfb5f,	// (0x0002f322) fep_vkb_top_text_pane_g_ParamLimits

0xfb5f,	// (0x0002f322) fep_vkb_top_text_pane_g

0x2a25,	// (0x000221e8) main_hc_apps_shell_pane

0x87cc,	// (0x00027f8f) grid_hc_apps_pane_ParamLimits

0x87cc,	// (0x00027f8f) grid_hc_apps_pane

0x87db,	// (0x00027f9e) list_hc_apps_pane

0x87e3,	// (0x00027fa6) scroll_pane_cp37_ParamLimits

0x87e3,	// (0x00027fa6) scroll_pane_cp37

0xe1ef,	// (0x0002d9b2) cell_hc_apps_pane_ParamLimits

0xe1ef,	// (0x0002d9b2) cell_hc_apps_pane

0xe2b9,	// (0x0002da7c) cell_hc_apps_pane_g1_ParamLimits

0xe2b9,	// (0x0002da7c) cell_hc_apps_pane_g1

0x88d8,	// (0x0002809b) cell_hc_apps_pane_g2_ParamLimits

0x88d8,	// (0x0002809b) cell_hc_apps_pane_g2

0x88f4,	// (0x000280b7) cell_hc_apps_pane_g3_ParamLimits

0x88f4,	// (0x000280b7) cell_hc_apps_pane_g3

0x0002,

0xfcfa,	// (0x0002f4bd) cell_hc_apps_pane_g_ParamLimits

0xfcfa,	// (0x0002f4bd) cell_hc_apps_pane_g

0xe2e6,	// (0x0002daa9) cell_hc_apps_pane_t1_ParamLimits

0xe2e6,	// (0x0002daa9) cell_hc_apps_pane_t1

0x2da3,	// (0x00022566) grid_highlight_pane_cp10_ParamLimits

0x2da3,	// (0x00022566) grid_highlight_pane_cp10

0xe326,	// (0x0002dae9) list_single_hc_apps_pane_ParamLimits

0xe326,	// (0x0002dae9) list_single_hc_apps_pane

0xe360,	// (0x0002db23) list_single_hc_apps_pane_g1

0xb9ef,	// (0x0002b1b2) list_single_hc_apps_pane_g2

0x0001,

0xfd01,	// (0x0002f4c4) list_single_hc_apps_pane_g

0xba08,	// (0x0002b1cb) list_single_hc_apps_pane_g2_copy1

0xba24,	// (0x0002b1e7) list_single_hc_apps_pane_t1

0x2b19,	// (0x000222dc) bg_set_opt_pane_cp_ParamLimits

0x1384,	// (0x00020b47) setting_slider_pane_t1_ParamLimits

0x139a,	// (0x00020b5d) setting_slider_pane_t2_ParamLimits

0x13b4,	// (0x00020b77) setting_slider_pane_t3_ParamLimits

0xf5a2,	// (0x0002ed65) setting_slider_pane_t_ParamLimits

0x13cc,	// (0x00020b8f) slider_set_pane_ParamLimits

0x18ff,	// (0x000210c2) control_pane_g5_ParamLimits

0x18ff,	// (0x000210c2) control_pane_g5

0x6286,	// (0x00025a49) slider_set_pane_g1_ParamLimits

0x1d00,	// (0x000214c3) slider_set_pane_g2_ParamLimits

0x6bdb,	// (0x0002639e) slider_set_pane_g3_ParamLimits

0x6bef,	// (0x000263b2) slider_set_pane_g4_ParamLimits

0x6c07,	// (0x000263ca) slider_set_pane_g5_ParamLimits

0x6bdb,	// (0x0002639e) slider_set_pane_g6_ParamLimits

0x1d0c,	// (0x000214cf) slider_set_pane_g7_ParamLimits

0xf993,	// (0x0002f156) slider_set_pane_g_ParamLimits

0x3e86,	// (0x00023649) navi_icon_text_pane_ParamLimits

0xd261,	// (0x0002ca24) aid_fill_nsta_2_ParamLimits

0xd297,	// (0x0002ca5a) aid_touch_tab_arrow_left_ParamLimits

0xd2ad,	// (0x0002ca70) aid_touch_tab_arrow_right_ParamLimits

0xd348,	// (0x0002cb0b) clock_nsta_pane_ParamLimits

0xd809,	// (0x0002cfcc) navi_icon_pane_g1_ParamLimits

0xd815,	// (0x0002cfd8) navi_text_pane_t1_ParamLimits

0xdd12,	// (0x0002d4d5) navi_icon_text_pane_g1_ParamLimits

0xdd1e,	// (0x0002d4e1) navi_icon_text_pane_t1_ParamLimits

0xe360,	// (0x0002db23) list_single_hc_apps_pane_g1_ParamLimits

0xb9ef,	// (0x0002b1b2) list_single_hc_apps_pane_g2_ParamLimits

0xfd01,	// (0x0002f4c4) list_single_hc_apps_pane_g_ParamLimits

0xba08,	// (0x0002b1cb) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xba24,	// (0x0002b1e7) list_single_hc_apps_pane_t1_ParamLimits

0xbba8,	// (0x0002b36b) popup_toolbar2_fixed_window_ParamLimits

0xbba8,	// (0x0002b36b) popup_toolbar2_fixed_window

0xd1ca,	// (0x0002c98d) popup_toolbar2_float_window

0x2a25,	// (0x000221e8) bg_popup_sub_pane_cp27

0x89ae,	// (0x00028171) grid_toolbar2_float_pane

0x2a25,	// (0x000221e8) bg_popup_sub_pane_cp26

0x89ae,	// (0x00028171) grid_toolbar2_fixed_pane

0xe379,	// (0x0002db3c) cell_toolbar2_fixed_pane_ParamLimits

0xe379,	// (0x0002db3c) cell_toolbar2_fixed_pane

0xe396,	// (0x0002db59) cell_toolbar2_fixed_pane_g1

0x89cf,	// (0x00028192) toolbar2_fixed_button_pane

0x4ecc,	// (0x0002468f) toolbar2_fixed_button_pane_g1

0x4ed4,	// (0x00024697) toolbar2_fixed_button_pane_g2

0x4edc,	// (0x0002469f) toolbar2_fixed_button_pane_g3

0x4ee4,	// (0x000246a7) toolbar2_fixed_button_pane_g4

0x4eec,	// (0x000246af) toolbar2_fixed_button_pane_g5

0x4ef4,	// (0x000246b7) toolbar2_fixed_button_pane_g6

0x4efc,	// (0x000246bf) toolbar2_fixed_button_pane_g7

0x4f04,	// (0x000246c7) toolbar2_fixed_button_pane_g8

0x4f0c,	// (0x000246cf) toolbar2_fixed_button_pane_g9

0x0008,

0xf895,	// (0x0002f058) toolbar2_fixed_button_pane_g

0x89d7,	// (0x0002819a) cell_toolbar2_float_pane_ParamLimits

0x89d7,	// (0x0002819a) cell_toolbar2_float_pane

0x89e8,	// (0x000281ab) cell_toolbar2_float_pane_g1

0x89cf,	// (0x00028192) toolbar2_fixed_button_pane_cp

0xde3c,	// (0x0002d5ff) fep_vkb_accented_list_pane_ParamLimits

0xde3c,	// (0x0002d5ff) fep_vkb_accented_list_pane

0x206e,	// (0x00021831) bg_popup_fep_shadow_pane_g9

0x400a,	// (0x000237cd) bg_popup_fep_shadow_pane_cp3

0x3509,	// (0x00022ccc) list_accented_list_pane

0x89f1,	// (0x000281b4) list_single_accented_list_pane_ParamLimits

0x89f1,	// (0x000281b4) list_single_accented_list_pane

0x400a,	// (0x000237cd) list_highlight_pane_cp10

0x8a02,	// (0x000281c5) list_single_accented_list_pane_t1

0xd0e6,	// (0x0002c8a9) popup_slider_window_ParamLimits

0xd0e6,	// (0x0002c8a9) popup_slider_window

0x864a,	// (0x00027e0d) aid_indentation_list_msg

0xe4a1,	// (0x0002dc64) bg_popup_window_pane_cp19

0x8b3c,	// (0x000282ff) popup_slider_window_g1

0x8b58,	// (0x0002831b) popup_slider_window_g2

0x8b74,	// (0x00028337) popup_slider_window_g3

0x0005,

0xfd06,	// (0x0002f4c9) popup_slider_window_g

0x8bd0,	// (0x00028393) popup_slider_window_t1

0x8c44,	// (0x00028407) small_volume_slider_vertical_pane

0x7510,	// (0x00026cd3) small_volume_slider_vertical_pane_g1

0x7510,	// (0x00026cd3) small_volume_slider_vertical_pane_g2

0x8c60,	// (0x00028423) small_volume_slider_vertical_pane_g3

0x0002,

0xfd18,	// (0x0002f4db) small_volume_slider_vertical_pane_g

0xbb12,	// (0x0002b2d5) area_side_right_pane_ParamLimits

0xbb12,	// (0x0002b2d5) area_side_right_pane

0xc341,	// (0x0002bb04) aid_size_side_button_ParamLimits

0xc341,	// (0x0002bb04) aid_size_side_button

0xc35a,	// (0x0002bb1d) grid_sctrl_middle_pane_ParamLimits

0xc35a,	// (0x0002bb1d) grid_sctrl_middle_pane

0x21fe,	// (0x000219c1) sctrl_sk_bottom_pane

0x220f,	// (0x000219d2) sctrl_sk_top_pane

0x2221,	// (0x000219e4) aid_touch_sctrl_top

0x2da3,	// (0x00022566) bg_sctrl_sk_pane_ParamLimits

0x2da3,	// (0x00022566) bg_sctrl_sk_pane

0x222e,	// (0x000219f1) sctrl_sk_top_pane_g1

0x223b,	// (0x000219fe) sctrl_sk_top_pane_t1

0x2221,	// (0x000219e4) aid_touch_sctrl_bottom

0x2da3,	// (0x00022566) bg_sctrl_sk_pane_cp_ParamLimits

0x2da3,	// (0x00022566) bg_sctrl_sk_pane_cp

0x2256,	// (0x00021a19) sctrl_sk_bottom_pane_g1

0x223b,	// (0x000219fe) sctrl_sk_bottom_pane_t1

0xc374,	// (0x0002bb37) cell_sctrl_middle_pane_ParamLimits

0xc374,	// (0x0002bb37) cell_sctrl_middle_pane

0xc387,	// (0x0002bb4a) aid_touch_sctrl_middle_ParamLimits

0xc387,	// (0x0002bb4a) aid_touch_sctrl_middle

0xc394,	// (0x0002bb57) bg_sctrl_middle_pane_ParamLimits

0xc394,	// (0x0002bb57) bg_sctrl_middle_pane

0x8ceb,	// (0x000284ae) cell_sctrl_middle_pane_g1_ParamLimits

0x8ceb,	// (0x000284ae) cell_sctrl_middle_pane_g1

0xc3a2,	// (0x0002bb65) cell_sctrl_middle_pane_g2_ParamLimits

0xc3a2,	// (0x0002bb65) cell_sctrl_middle_pane_g2

0x0001,

0xfd24,	// (0x0002f4e7) cell_sctrl_middle_pane_g_ParamLimits

0xfd24,	// (0x0002f4e7) cell_sctrl_middle_pane_g

0x4ecc,	// (0x0002468f) bg_sctrl_middle_pane_g1

0x4ed4,	// (0x00024697) bg_sctrl_middle_pane_g2

0x4edc,	// (0x0002469f) bg_sctrl_middle_pane_g3

0x4ee4,	// (0x000246a7) bg_sctrl_middle_pane_g4

0x4eec,	// (0x000246af) bg_sctrl_middle_pane_g5

0x4ef4,	// (0x000246b7) bg_sctrl_middle_pane_g6

0x4efc,	// (0x000246bf) bg_sctrl_middle_pane_g7

0x4f04,	// (0x000246c7) bg_sctrl_middle_pane_g8

0x0007,

0xfd29,	// (0x0002f4ec) bg_sctrl_middle_pane_g

0x4f0c,	// (0x000246cf) bg_sctrl_middle_pane_g8_copy1

0x4ecc,	// (0x0002468f) bg_sctrl_sk_pane_g1

0x4ed4,	// (0x00024697) bg_sctrl_sk_pane_g2

0x4edc,	// (0x0002469f) bg_sctrl_sk_pane_g3

0x0008,

0xf895,	// (0x0002f058) bg_sctrl_sk_pane_g

0x32cf,	// (0x00022a92) aid_size_touch_scroll_bar

0x4ee4,	// (0x000246a7) bg_sctrl_sk_pane_g4

0x4eec,	// (0x000246af) bg_sctrl_sk_pane_g5

0x4ef4,	// (0x000246b7) bg_sctrl_sk_pane_g6

0x4efc,	// (0x000246bf) bg_sctrl_sk_pane_g7

0x4f04,	// (0x000246c7) bg_sctrl_sk_pane_g8

0x4f0c,	// (0x000246cf) bg_sctrl_sk_pane_g9

0x443a,	// (0x00023bfd) popup_fep_china_hwr2_fs_candidate_window

0xcba2,	// (0x0002c365) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xcba2,	// (0x0002c365) popup_fep_china_hwr2_fs_control_window

0x77a8,	// (0x00026f6b) sctrl_sk_top_pane_g2

0x0001,

0xfd1f,	// (0x0002f4e2) sctrl_sk_top_pane_g

0xe559,	// (0x0002dd1c) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe559,	// (0x0002dd1c) aid_fep_china_hwr2_fs_cell

0xe56f,	// (0x0002dd32) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe56f,	// (0x0002dd32) bg_popup_fep_shadow_pane_cp4

0xe586,	// (0x0002dd49) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe586,	// (0x0002dd49) bg_popup_fep_shadow_pane_cp5

0xe598,	// (0x0002dd5b) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe598,	// (0x0002dd5b) popup_fep_china_hwr2_fs_control_bar_grid

0xe5ac,	// (0x0002dd6f) popup_fep_china_hwr2_fs_control_funtion_grid

0x8cbf,	// (0x00028482) aid_fep_china_hwr2_fs_candi_cell

0x2a25,	// (0x000221e8) bg_popup_fep_shadow_pane_cp6

0x8cc9,	// (0x0002848c) popup_fep_china_hwr2_fs_candidate_grid

0xe5b4,	// (0x0002dd77) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe5b4,	// (0x0002dd77) cell_fep_china_hwr2_fs_funtion_grid

0x7510,	// (0x00026cd3) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x8ceb,	// (0x000284ae) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x8ceb,	// (0x000284ae) cell_fep_china_hwr2_fs_funtion_grid_g1

0x8cf9,	// (0x000284bc) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x8cf9,	// (0x000284bc) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd3a,	// (0x0002f4fd) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd3a,	// (0x0002f4fd) cell_fep_china_hwr2_fs_funtion_grid_g

0xe5cc,	// (0x0002dd8f) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe5cc,	// (0x0002dd8f) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe5e1,	// (0x0002dda4) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe5e1,	// (0x0002dda4) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd3f,	// (0x0002f502) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd3f,	// (0x0002f502) cell_fep_china_hwr2_fs_funtion_grid_t

0x8d40,	// (0x00028503) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x8d48,	// (0x0002850b) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x8d50,	// (0x00028513) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd44,	// (0x0002f507) popup_fep_china_hwr2_fs_control_bar_grid_g

0x8d58,	// (0x0002851b) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x8d58,	// (0x0002851b) cell_fep_china_hwr2_fs_candidate_grid

0x8d77,	// (0x0002853a) popup_fep_china_hwr2_fs_candidate_grid_g20

0x8d7f,	// (0x00028542) popup_fep_china_hwr2_fs_candidate_grid_g21

0x7510,	// (0x00026cd3) cell_fep_china_hwr2_fs_candidate_grid_g1

0x7510,	// (0x00026cd3) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb64,	// (0x0002f327) cell_fep_china_hwr2_fs_candidate_grid_g

0x8d87,	// (0x0002854a) cell_fep_china_hwr2_fs_candidate_grid_t1

0x4aa9,	// (0x0002426c) clock_nsta_pane_cp_24_ParamLimits

0x4aa9,	// (0x0002426c) clock_nsta_pane_cp_24

0x4b29,	// (0x000242ec) indicator_nsta_pane_cp_24_ParamLimits

0x4b29,	// (0x000242ec) indicator_nsta_pane_cp_24

0x5bc4,	// (0x00025387) heading_pane_g1

0x0001,

0xf8fa,	// (0x0002f0bd) heading_pane_g

0x6674,	// (0x00025e37) grid_sct_catagory_button_pane

0x66a6,	// (0x00025e69) scroll_pane_cp5_ParamLimits

0x7159,	// (0x0002691c) button_value_adjust_pane_cp5_ParamLimits

0x7159,	// (0x0002691c) button_value_adjust_pane_cp5

0x723e,	// (0x00026a01) form2_midp_time_pane_ParamLimits

0x8d95,	// (0x00028558) cell_sct_catagory_button_pane_ParamLimits

0x8d95,	// (0x00028558) cell_sct_catagory_button_pane

0x74d5,	// (0x00026c98) bg_button_pane_cp01_ParamLimits

0x74d5,	// (0x00026c98) bg_button_pane_cp01

0x7510,	// (0x00026cd3) cell_sct_catagory_button_pane_g1

0xd167,	// (0x0002c92a) popup_tb_extension_window

0xe5fd,	// (0x0002ddc0) aid_size_cell_ext_ParamLimits

0xe5fd,	// (0x0002ddc0) aid_size_cell_ext

0x3111,	// (0x000228d4) bg_tb_trans_pane_cp1_ParamLimits

0x3111,	// (0x000228d4) bg_tb_trans_pane_cp1

0xe623,	// (0x0002dde6) grid_tb_ext_pane_ParamLimits

0xe623,	// (0x0002dde6) grid_tb_ext_pane

0xe663,	// (0x0002de26) cell_tb_ext_pane_ParamLimits

0xe663,	// (0x0002de26) cell_tb_ext_pane

0xe68d,	// (0x0002de50) cell_tb_ext_pane_g1_ParamLimits

0xe68d,	// (0x0002de50) cell_tb_ext_pane_g1

0x8e2b,	// (0x000285ee) cell_tb_ext_pane_t1

0x2da3,	// (0x00022566) list_highlight_pane_cp11_ParamLimits

0x2da3,	// (0x00022566) list_highlight_pane_cp11

0x12ad,	// (0x00020a70) popup_uni_indicator_window_ParamLimits

0x12ad,	// (0x00020a70) popup_uni_indicator_window

0x33a0,	// (0x00022b63) bg_popup_sub_pane_cp14

0x8e46,	// (0x00028609) list_uniindi_pane

0x8e52,	// (0x00028615) uniindi_top_pane

0x2da3,	// (0x00022566) bg_uniindi_top_pane

0x8e73,	// (0x00028636) uniindi_top_pane_g1

0x8e89,	// (0x0002864c) uniindi_top_pane_g2

0x0003,

0xfd4b,	// (0x0002f50e) uniindi_top_pane_g

0x8eb3,	// (0x00028676) uniindi_top_pane_t1

0x8edf,	// (0x000286a2) list_single_uniindi_pane_ParamLimits

0x8edf,	// (0x000286a2) list_single_uniindi_pane

0x7510,	// (0x00026cd3) bg_uniindi_top_pane_g1

0x8ef1,	// (0x000286b4) list_single_uniindi_pane_g1

0x8f04,	// (0x000286c7) list_single_uniindi_pane_t1

0x2a25,	// (0x000221e8) control_bg_pane

0x8f29,	// (0x000286ec) bg_sctrl_sk_pane_cp1

0x8f32,	// (0x000286f5) bg_sctrl_sk_pane_cp2

0x8f3b,	// (0x000286fe) control_bg_pane_g1

0x8f44,	// (0x00028707) control_bg_pane_g2

0x0001,

0xfd54,	// (0x0002f517) control_bg_pane_g

0x6fad,	// (0x00026770) cell_indicator_nsta_pane_g1_ParamLimits

0xdc6b,	// (0x0002d42e) cell_indicator_nsta_pane_g2_ParamLimits

0xfad5,	// (0x0002f298) cell_indicator_nsta_pane_g_ParamLimits

0x0bcf,	// (0x00020392) form2_midp_time_pane_t1_ParamLimits

0x7580,	// (0x00026d43) main_idle_act4_pane_ParamLimits

0x7580,	// (0x00026d43) main_idle_act4_pane

0xd167,	// (0x0002c92a) popup_tb_extension_window_ParamLimits

0xe64b,	// (0x0002de0e) tb_ext_find_pane_ParamLimits

0xe64b,	// (0x0002de0e) tb_ext_find_pane

0x8f4d,	// (0x00028710) ai_gene_pane_1_cp1

0x4153,	// (0x00023916) ai_gene_pane_2_cp1

0x8f55,	// (0x00028718) list_single_idle_plugin_calendar_pane

0x8f5e,	// (0x00028721) list_single_idle_plugin_notification_pane

0x8f67,	// (0x0002872a) list_single_idle_plugin_player_pane

0xe6aa,	// (0x0002de6d) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe6aa,	// (0x0002de6d) list_single_idle_plugin_shortcut_pane

0xe6d2,	// (0x0002de95) main_idle_act4_pane_t1

0xe6ea,	// (0x0002dead) main_idle_act4_pane_t2

0x0001,

0xfd59,	// (0x0002f51c) main_idle_act4_pane_t

0xe702,	// (0x0002dec5) middle_sk_idle_act4_pane_ParamLimits

0xe702,	// (0x0002dec5) middle_sk_idle_act4_pane

0xe71e,	// (0x0002dee1) popup_clock_digital_analogue_window_cp2

0xe745,	// (0x0002df08) shortcut_wheel_idle_act4_pane_ParamLimits

0xe745,	// (0x0002df08) shortcut_wheel_idle_act4_pane

0x7510,	// (0x00026cd3) shortcut_wheel_idle_act4_pane_g1

0x7510,	// (0x00026cd3) shortcut_wheel_idle_act4_pane_g2

0x7510,	// (0x00026cd3) shortcut_wheel_idle_act4_pane_g3

0x7510,	// (0x00026cd3) shortcut_wheel_idle_act4_pane_g4

0x7510,	// (0x00026cd3) shortcut_wheel_idle_act4_pane_g5

0x8ffa,	// (0x000287bd) shortcut_wheel_idle_act4_pane_g6

0x9002,	// (0x000287c5) shortcut_wheel_idle_act4_pane_g7

0x900a,	// (0x000287cd) shortcut_wheel_idle_act4_pane_g8

0x9012,	// (0x000287d5) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd5e,	// (0x0002f521) shortcut_wheel_idle_act4_pane_g

0xd39f,	// (0x0002cb62) middle_sk_idle_act4_pane_g1_ParamLimits

0xd39f,	// (0x0002cb62) middle_sk_idle_act4_pane_g1

0xe7c2,	// (0x0002df85) middle_sk_idle_act4_pane_g2_ParamLimits

0xe7c2,	// (0x0002df85) middle_sk_idle_act4_pane_g2

0x0001,

0xfd81,	// (0x0002f544) middle_sk_idle_act4_pane_g_ParamLimits

0xfd81,	// (0x0002f544) middle_sk_idle_act4_pane_g

0xe7da,	// (0x0002df9d) middle_sk_idle_act4_pane_t1_ParamLimits

0xe7da,	// (0x0002df9d) middle_sk_idle_act4_pane_t1

0xe809,	// (0x0002dfcc) grid_ai_shortcut_pane_ParamLimits

0xe809,	// (0x0002dfcc) grid_ai_shortcut_pane

0xe826,	// (0x0002dfe9) list_highlight_pane_cp16_ParamLimits

0xe826,	// (0x0002dfe9) list_highlight_pane_cp16

0xe833,	// (0x0002dff6) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe833,	// (0x0002dff6) list_single_idle_plugin_shortcut_pane_g1

0xe83f,	// (0x0002e002) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe83f,	// (0x0002e002) list_single_idle_plugin_shortcut_pane_g2

0xe85d,	// (0x0002e020) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe85d,	// (0x0002e020) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd86,	// (0x0002f549) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd86,	// (0x0002f549) list_single_idle_plugin_shortcut_pane_g

0xe872,	// (0x0002e035) cell_ai_shortcut_pane_ParamLimits

0xe872,	// (0x0002e035) cell_ai_shortcut_pane

0xe888,	// (0x0002e04b) cell_ai_shortcut_pane_g1_ParamLimits

0xe888,	// (0x0002e04b) cell_ai_shortcut_pane_g1

0x8f4d,	// (0x00028710) ai_gene_pane_1_cp2

0x9143,	// (0x00028906) ai_gene_pane_2_cp2

0x914b,	// (0x0002890e) list_highlight_pane_cp15

0x9154,	// (0x00028917) list_single_idle_plugin_calendar_pane_g1

0x914b,	// (0x0002890e) list_highlight_pane_cp17

0x915c,	// (0x0002891f) list_single_idle_plugin_calendar_pane_g1_copy1

0x9164,	// (0x00028927) list_single_idle_plugin_player_pane_g1

0x68db,	// (0x0002609e) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd8d,	// (0x0002f550) list_single_idle_plugin_player_pane_g

0x916c,	// (0x0002892f) list_single_idle_plugin_player_pane_t1

0x917a,	// (0x0002893d) list_single_idle_plugin_player_pane_t2

0x9188,	// (0x0002894b) list_single_idle_plugin_player_pane_t3

0x9196,	// (0x00028959) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd92,	// (0x0002f555) list_single_idle_plugin_player_pane_t

0x91a4,	// (0x00028967) wait_bar_pane_cp15

0x91ac,	// (0x0002896f) grid_ai_notification_pane

0x68db,	// (0x0002609e) list_single_idle_plugin_notification_pane_g1

0xe8aa,	// (0x0002e06d) cell_ai_notification_pane_ParamLimits

0xe8aa,	// (0x0002e06d) cell_ai_notification_pane

0x91c2,	// (0x00028985) cell_ai_notification_pane_g1

0x91ca,	// (0x0002898d) cell_ai_notification_pane_t1

0xe8b7,	// (0x0002e07a) tb_ext_find_button_pane

0xe8bf,	// (0x0002e082) tb_ext_find_pane_g1

0xe8c7,	// (0x0002e08a) tb_ext_find_pane_t1

0x3a10,	// (0x000231d3) tb_ext_find_button_pane_g1

0x91f6,	// (0x000289b9) tb_ext_find_button_pane_g2

0x0001,

0xfd9b,	// (0x0002f55e) tb_ext_find_button_pane_g

0xe6d2,	// (0x0002de95) main_idle_act4_pane_t1_ParamLimits

0xe6ea,	// (0x0002dead) main_idle_act4_pane_t2_ParamLimits

0xfd59,	// (0x0002f51c) main_idle_act4_pane_t_ParamLimits

0xe71e,	// (0x0002dee1) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe735,	// (0x0002def8) sat_plugin_idle_act4_pane_ParamLimits

0xe735,	// (0x0002def8) sat_plugin_idle_act4_pane

0xe8d5,	// (0x0002e098) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe8d5,	// (0x0002e098) sat_plugin_idle_act4_pane_t1

0xe8ed,	// (0x0002e0b0) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe8ed,	// (0x0002e0b0) sat_plugin_idle_act4_pane_t2

0xe905,	// (0x0002e0c8) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe905,	// (0x0002e0c8) sat_plugin_idle_act4_pane_t3

0xe91d,	// (0x0002e0e0) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe91d,	// (0x0002e0e0) sat_plugin_idle_act4_pane_t4

0x0003,

0xfda0,	// (0x0002f563) sat_plugin_idle_act4_pane_t_ParamLimits

0xfda0,	// (0x0002f563) sat_plugin_idle_act4_pane_t

0x11de,	// (0x000209a1) popup_battery_window_ParamLimits

0x11de,	// (0x000209a1) popup_battery_window

0x2da3,	// (0x00022566) bg_popup_sub_pane_cp25_ParamLimits

0x2da3,	// (0x00022566) bg_popup_sub_pane_cp25

0x924b,	// (0x00028a0e) popup_battery_window_g1_ParamLimits

0x924b,	// (0x00028a0e) popup_battery_window_g1

0x9257,	// (0x00028a1a) popup_battery_window_t1_ParamLimits

0x9257,	// (0x00028a1a) popup_battery_window_t1

0x9269,	// (0x00028a2c) popup_battery_window_t2_ParamLimits

0x9269,	// (0x00028a2c) popup_battery_window_t2

0x0001,

0xfda9,	// (0x0002f56c) popup_battery_window_t_ParamLimits

0xfda9,	// (0x0002f56c) popup_battery_window_t

0xca36,	// (0x0002c1f9) midp_canvas_pane_ParamLimits

0xca91,	// (0x0002c254) midp_keypad_pane_ParamLimits

0xca91,	// (0x0002c254) midp_keypad_pane

0x4390,	// (0x00023b53) main_midp_pane_ParamLimits

0x7006,	// (0x000267c9) signal_pane_g2_cp_ParamLimits

0xe935,	// (0x0002e0f8) aid_size_cell_midp_keypad_ParamLimits

0xe935,	// (0x0002e0f8) aid_size_cell_midp_keypad

0xe953,	// (0x0002e116) midp_keyp_game_grid_pane_ParamLimits

0xe953,	// (0x0002e116) midp_keyp_game_grid_pane

0xe97a,	// (0x0002e13d) midp_keyp_rocker_pane_ParamLimits

0xe97a,	// (0x0002e13d) midp_keyp_rocker_pane

0xe9bf,	// (0x0002e182) midp_keyp_sk_left_pane_ParamLimits

0xe9bf,	// (0x0002e182) midp_keyp_sk_left_pane

0xea13,	// (0x0002e1d6) midp_keyp_sk_right_pane_ParamLimits

0xea13,	// (0x0002e1d6) midp_keyp_sk_right_pane

0x2a25,	// (0x000221e8) bg_button_pane_cp03

0xea67,	// (0x0002e22a) midp_keyp_sk_left_pane_g1

0x2a25,	// (0x000221e8) bg_button_pane_cp04

0xea67,	// (0x0002e22a) midp_keyp_sk_right_pane_g1

0x7510,	// (0x00026cd3) midp_keyp_rocker_pane_g1

0xea70,	// (0x0002e233) keyp_game_cell_pane_ParamLimits

0xea70,	// (0x0002e233) keyp_game_cell_pane

0x2a25,	// (0x000221e8) bg_button_pane_cp02

0xea96,	// (0x0002e259) keyp_game_cell_pane_g1

0xbb54,	// (0x0002b317) popup_fep_vkb2_window_ParamLimits

0xbb54,	// (0x0002b317) popup_fep_vkb2_window

0xc3ae,	// (0x0002bb71) aid_size_cell_vkb2_ParamLimits

0xc3ae,	// (0x0002bb71) aid_size_cell_vkb2

0xc3dc,	// (0x0002bb9f) popup_fep_vkb2_window_g1_ParamLimits

0xc3dc,	// (0x0002bb9f) popup_fep_vkb2_window_g1

0xc42c,	// (0x0002bbef) vkb2_area_bottom_pane_ParamLimits

0xc42c,	// (0x0002bbef) vkb2_area_bottom_pane

0xc488,	// (0x0002bc4b) vkb2_area_keypad_pane_ParamLimits

0xc488,	// (0x0002bc4b) vkb2_area_keypad_pane

0xc4d6,	// (0x0002bc99) vkb2_area_top_pane_ParamLimits

0xc4d6,	// (0x0002bc99) vkb2_area_top_pane

0xc55c,	// (0x0002bd1f) vkb2_top_entry_pane_ParamLimits

0xc55c,	// (0x0002bd1f) vkb2_top_entry_pane

0xc589,	// (0x0002bd4c) vkb2_top_grid_left_pane_ParamLimits

0xc589,	// (0x0002bd4c) vkb2_top_grid_left_pane

0xc5a9,	// (0x0002bd6c) vkb2_top_grid_right_pane_ParamLimits

0xc5a9,	// (0x0002bd6c) vkb2_top_grid_right_pane

0x24be,	// (0x00021c81) vkb2_cell_keypad_pane_ParamLimits

0x24be,	// (0x00021c81) vkb2_cell_keypad_pane

0xc5ef,	// (0x0002bdb2) vkb2_area_bottom_grid_pane_ParamLimits

0xc5ef,	// (0x0002bdb2) vkb2_area_bottom_grid_pane

0xc619,	// (0x0002bddc) vkb2_area_bottom_pane_g1_ParamLimits

0xc619,	// (0x0002bddc) vkb2_area_bottom_pane_g1

0xc63f,	// (0x0002be02) vkb2_area_bottom_pane_g2_ParamLimits

0xc63f,	// (0x0002be02) vkb2_area_bottom_pane_g2

0xc670,	// (0x0002be33) vkb2_area_bottom_pane_g3_ParamLimits

0xc670,	// (0x0002be33) vkb2_area_bottom_pane_g3

0x0002,

0xfdae,	// (0x0002f571) vkb2_area_bottom_pane_g_ParamLimits

0xfdae,	// (0x0002f571) vkb2_area_bottom_pane_g

0x264d,	// (0x00021e10) vkb2_top_cell_left_pane_ParamLimits

0x264d,	// (0x00021e10) vkb2_top_cell_left_pane

0xea9f,	// (0x0002e262) vkb2_top_entry_pane_g1_ParamLimits

0xea9f,	// (0x0002e262) vkb2_top_entry_pane_g1

0xeaad,	// (0x0002e270) vkb2_top_entry_pane_t1_ParamLimits

0xeaad,	// (0x0002e270) vkb2_top_entry_pane_t1

0x93f6,	// (0x00028bb9) vkb2_top_entry_pane_t2_ParamLimits

0x93f6,	// (0x00028bb9) vkb2_top_entry_pane_t2

0x940e,	// (0x00028bd1) vkb2_top_entry_pane_t3_ParamLimits

0x940e,	// (0x00028bd1) vkb2_top_entry_pane_t3

0x0002,

0xfdb5,	// (0x0002f578) vkb2_top_entry_pane_t_ParamLimits

0xfdb5,	// (0x0002f578) vkb2_top_entry_pane_t

0xc6da,	// (0x0002be9d) vkb2_top_grid_right_pane_g1_ParamLimits

0xc6da,	// (0x0002be9d) vkb2_top_grid_right_pane_g1

0x26b0,	// (0x00021e73) vkb2_top_grid_right_pane_g2_ParamLimits

0x26b0,	// (0x00021e73) vkb2_top_grid_right_pane_g2

0x26c8,	// (0x00021e8b) vkb2_top_grid_right_pane_g3_ParamLimits

0x26c8,	// (0x00021e8b) vkb2_top_grid_right_pane_g3

0xc6f0,	// (0x0002beb3) vkb2_top_grid_right_pane_g4_ParamLimits

0xc6f0,	// (0x0002beb3) vkb2_top_grid_right_pane_g4

0x0003,

0xfdbc,	// (0x0002f57f) vkb2_top_grid_right_pane_g_ParamLimits

0xfdbc,	// (0x0002f57f) vkb2_top_grid_right_pane_g

0x26f6,	// (0x00021eb9) vkb2_top_cell_left_pane_g1

0x270d,	// (0x00021ed0) vkb2_cell_keypad_pane_g1_ParamLimits

0x270d,	// (0x00021ed0) vkb2_cell_keypad_pane_g1

0x9424,	// (0x00028be7) vkb2_cell_keypad_pane_t1_ParamLimits

0x9424,	// (0x00028be7) vkb2_cell_keypad_pane_t1

0x2731,	// (0x00021ef4) vkb2_cell_bottom_grid_pane_ParamLimits

0x2731,	// (0x00021ef4) vkb2_cell_bottom_grid_pane

0x276a,	// (0x00021f2d) vkb2_cell_bottom_grid_pane_g1

0xe766,	// (0x0002df29) aid_call2_pane_cp02

0xe76e,	// (0x0002df31) aid_call_pane_cp02

0xe776,	// (0x0002df39) clock_digital_number_pane_cp10

0xe77e,	// (0x0002df41) clock_digital_number_pane_cp11

0xe786,	// (0x0002df49) clock_digital_number_pane_cp12

0xe78e,	// (0x0002df51) clock_digital_number_pane_cp13

0xe796,	// (0x0002df59) clock_digital_separator_pane_cp10

0x3a10,	// (0x000231d3) popup_clock_digital_analogue_window_cp2_g1

0x3a10,	// (0x000231d3) popup_clock_digital_analogue_window_cp2_g2

0xe79e,	// (0x0002df61) popup_clock_digital_analogue_window_cp2_g3

0x3a10,	// (0x000231d3) popup_clock_digital_analogue_window_cp2_g4

0xe79e,	// (0x0002df61) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd71,	// (0x0002f534) popup_clock_digital_analogue_window_cp2_g

0xe7a6,	// (0x0002df69) popup_clock_digital_analogue_window_cp2_t1

0xe7b4,	// (0x0002df77) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd7c,	// (0x0002f53f) popup_clock_digital_analogue_window_cp2_t

0x7510,	// (0x00026cd3) clock_digital_number_pane_cp10_g1

0x7510,	// (0x00026cd3) clock_digital_number_pane_cp10_g2

0x0001,

0xfb64,	// (0x0002f327) clock_digital_number_pane_cp10_g

0x7510,	// (0x00026cd3) clock_digital_separator_pane_cp10_g1

0x7510,	// (0x00026cd3) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb64,	// (0x0002f327) clock_digital_separator_pane_cp10_g

0x8e95,	// (0x00028658) uniindi_top_pane_g3

0x8ea6,	// (0x00028669) uniindi_top_pane_g4

0x252e,	// (0x00021cf1) vkb2_row_keypad_pane_ParamLimits

0x252e,	// (0x00021cf1) vkb2_row_keypad_pane

0x2786,	// (0x00021f49) vkb2_cell_t_keypad_pane_ParamLimits

0x2786,	// (0x00021f49) vkb2_cell_t_keypad_pane

0x2796,	// (0x00021f59) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x2796,	// (0x00021f59) vkb2_cell_t_keypad_pane_cp08

0x27ab,	// (0x00021f6e) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x27ab,	// (0x00021f6e) vkb2_cell_t_keypad_pane_cp09

0x27bf,	// (0x00021f82) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x27bf,	// (0x00021f82) vkb2_cell_t_keypad_pane_cp01

0x27d0,	// (0x00021f93) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x27d0,	// (0x00021f93) vkb2_cell_t_keypad_pane_cp02

0x27e1,	// (0x00021fa4) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x27e1,	// (0x00021fa4) vkb2_cell_t_keypad_pane_cp03

0x27f2,	// (0x00021fb5) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x27f2,	// (0x00021fb5) vkb2_cell_t_keypad_pane_cp04

0x2803,	// (0x00021fc6) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x2803,	// (0x00021fc6) vkb2_cell_t_keypad_pane_cp05

0x2814,	// (0x00021fd7) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x2814,	// (0x00021fd7) vkb2_cell_t_keypad_pane_cp06

0x2827,	// (0x00021fea) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x2827,	// (0x00021fea) vkb2_cell_t_keypad_pane_cp07

0x283c,	// (0x00021fff) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x283c,	// (0x00021fff) vkb2_cell_t_keypad_pane_cp10

0x77a8,	// (0x00026f6b) vkb2_cell_t_keypad_pane_g1

0x943b,	// (0x00028bfe) vkb2_cell_t_keypad_pane_t1

0x2a25,	// (0x000221e8) popup_grid_graphic2_window

0xeae6,	// (0x0002e2a9) aid_size_cell_graphic2_ParamLimits

0xeae6,	// (0x0002e2a9) aid_size_cell_graphic2

0x5541,	// (0x00024d04) bg_popup_window_pane_cp21_ParamLimits

0x5541,	// (0x00024d04) bg_popup_window_pane_cp21

0xeb18,	// (0x0002e2db) graphic2_pages_pane_ParamLimits

0xeb18,	// (0x0002e2db) graphic2_pages_pane

0xeb70,	// (0x0002e333) grid_graphic2_control_pane_ParamLimits

0xeb70,	// (0x0002e333) grid_graphic2_control_pane

0xeba4,	// (0x0002e367) grid_graphic2_pane_ParamLimits

0xeba4,	// (0x0002e367) grid_graphic2_pane

0xec1b,	// (0x0002e3de) cell_graphic2_pane

0x2a25,	// (0x000221e8) main_comp_mode_pane

0x8706,	// (0x00027ec9) list_ai3_gene_pane_ParamLimits

0xe4a1,	// (0x0002dc64) bg_popup_window_pane_cp19_ParamLimits

0x8ada,	// (0x0002829d) bg_touch_area_indi_pane_ParamLimits

0x8ada,	// (0x0002829d) bg_touch_area_indi_pane

0x8af0,	// (0x000282b3) bg_touch_area_indi_pane_cp01_ParamLimits

0x8af0,	// (0x000282b3) bg_touch_area_indi_pane_cp01

0x8b08,	// (0x000282cb) bg_touch_area_indi_pane_cp02_ParamLimits

0x8b08,	// (0x000282cb) bg_touch_area_indi_pane_cp02

0x8b22,	// (0x000282e5) bg_touch_area_indi_pane_cp03_ParamLimits

0x8b22,	// (0x000282e5) bg_touch_area_indi_pane_cp03

0x8b3c,	// (0x000282ff) popup_slider_window_g1_ParamLimits

0x8b58,	// (0x0002831b) popup_slider_window_g2_ParamLimits

0x8b74,	// (0x00028337) popup_slider_window_g3_ParamLimits

0xfd06,	// (0x0002f4c9) popup_slider_window_g_ParamLimits

0x8bd0,	// (0x00028393) popup_slider_window_t1_ParamLimits

0x8c44,	// (0x00028407) small_volume_slider_vertical_pane_ParamLimits

0xec1b,	// (0x0002e3de) cell_graphic2_pane_ParamLimits

0xec7e,	// (0x0002e441) bg_button_pane_cp10_ParamLimits

0xec7e,	// (0x0002e441) bg_button_pane_cp10

0xec91,	// (0x0002e454) bg_button_pane_cp11_ParamLimits

0xec91,	// (0x0002e454) bg_button_pane_cp11

0xeca4,	// (0x0002e467) graphic2_pages_pane_g1_ParamLimits

0xeca4,	// (0x0002e467) graphic2_pages_pane_g1

0xecbf,	// (0x0002e482) graphic2_pages_pane_g2_ParamLimits

0xecbf,	// (0x0002e482) graphic2_pages_pane_g2

0x0001,

0xfdca,	// (0x0002f58d) graphic2_pages_pane_g_ParamLimits

0xfdca,	// (0x0002f58d) graphic2_pages_pane_g

0xecd7,	// (0x0002e49a) graphic2_pages_pane_t1_ParamLimits

0xecd7,	// (0x0002e49a) graphic2_pages_pane_t1

0xecef,	// (0x0002e4b2) cell_graphic2_control_pane_ParamLimits

0xecef,	// (0x0002e4b2) cell_graphic2_control_pane

0xed09,	// (0x0002e4cc) cell_graphic2_pane_g1_ParamLimits

0xed09,	// (0x0002e4cc) cell_graphic2_pane_g1

0xd3ad,	// (0x0002cb70) cell_graphic2_pane_g2_ParamLimits

0xd3ad,	// (0x0002cb70) cell_graphic2_pane_g2

0xed16,	// (0x0002e4d9) cell_graphic2_pane_g3_ParamLimits

0xed16,	// (0x0002e4d9) cell_graphic2_pane_g3

0xd3ba,	// (0x0002cb7d) cell_graphic2_pane_g4_ParamLimits

0xd3ba,	// (0x0002cb7d) cell_graphic2_pane_g4

0xed23,	// (0x0002e4e6) cell_graphic2_pane_g5_ParamLimits

0xed23,	// (0x0002e4e6) cell_graphic2_pane_g5

0x0004,

0xfdcf,	// (0x0002f592) cell_graphic2_pane_g_ParamLimits

0xfdcf,	// (0x0002f592) cell_graphic2_pane_g

0xed43,	// (0x0002e506) cell_graphic2_pane_t1_ParamLimits

0xed43,	// (0x0002e506) cell_graphic2_pane_t1

0x5bb8,	// (0x0002537b) grid_highlight_pane_cp11_ParamLimits

0x5bb8,	// (0x0002537b) grid_highlight_pane_cp11

0x33a0,	// (0x00022b63) bg_button_pane_cp05

0xed5a,	// (0x0002e51d) cell_graphic2_control_pane_g1

0x7510,	// (0x00026cd3) bg_touch_area_indi_pane_g1

0x96a3,	// (0x00028e66) aid_cmod_rocker_key_size

0x96ad,	// (0x00028e70) aid_cmode_itu_key_size

0x96b7,	// (0x00028e7a) main_cmode_video_pane

0x96c1,	// (0x00028e84) main_comp_mode_itu_pane

0x96cd,	// (0x00028e90) main_comp_mode_rocker_pane

0x96d9,	// (0x00028e9c) cell_cmode_rocker_pane_ParamLimits

0x96d9,	// (0x00028e9c) cell_cmode_rocker_pane

0x96ed,	// (0x00028eb0) cell_cmode_itu_pane_ParamLimits

0x96ed,	// (0x00028eb0) cell_cmode_itu_pane

0x33a0,	// (0x00022b63) bg_button_pane_cp06_ParamLimits

0x33a0,	// (0x00022b63) bg_button_pane_cp06

0x77a8,	// (0x00026f6b) cell_cmode_rocker_pane_g1_ParamLimits

0x77a8,	// (0x00026f6b) cell_cmode_rocker_pane_g1

0x8ceb,	// (0x000284ae) cell_cmode_rocker_pane_g2_ParamLimits

0x8ceb,	// (0x000284ae) cell_cmode_rocker_pane_g2

0x0001,

0xfdda,	// (0x0002f59d) cell_cmode_rocker_pane_g_ParamLimits

0xfdda,	// (0x0002f59d) cell_cmode_rocker_pane_g

0x2a25,	// (0x000221e8) bg_button_pane_cp07

0x9704,	// (0x00028ec7) cell_cmode_itu_pane_g1

0x970d,	// (0x00028ed0) cell_cmode_itu_pane_t1

0x971b,	// (0x00028ede) cell_cmode_itu_pane_t2

0x0001,

0xfddf,	// (0x0002f5a2) cell_cmode_itu_pane_t

0x8f19,	// (0x000286dc) aid_touch_ctrl_left

0x8f21,	// (0x000286e4) aid_touch_ctrl_right

0x2a25,	// (0x000221e8) compa_mode_pane

0xed67,	// (0x0002e52a) aid_cmod_rocker_key_size_cp

0xed71,	// (0x0002e534) aid_cmode_itu_key_size_cp

0x973d,	// (0x00028f00) compa_mode_pane_g1

0x9745,	// (0x00028f08) compa_mode_pane_g2

0x974d,	// (0x00028f10) compa_mode_pane_g3

0x0002,

0xfde4,	// (0x0002f5a7) compa_mode_pane_g

0xed7b,	// (0x0002e53e) main_comp_mode_itu_pane_cp

0xed83,	// (0x0002e546) main_comp_mode_rocker_pane_cp

0xed8b,	// (0x0002e54e) cell_cmode_itu_pane_cp_ParamLimits

0xed8b,	// (0x0002e54e) cell_cmode_itu_pane_cp

0xeda0,	// (0x0002e563) cell_cmode_rocker_pane_cp_ParamLimits

0xeda0,	// (0x0002e563) cell_cmode_rocker_pane_cp

0x33a0,	// (0x00022b63) bg_button_pane_cp06_cp_ParamLimits

0x33a0,	// (0x00022b63) bg_button_pane_cp06_cp

0x77a8,	// (0x00026f6b) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x77a8,	// (0x00026f6b) cell_cmode_rocker_pane_g1_cp

0x7510,	// (0x00026cd3) cell_cmode_rocker_pane_g2_cp

0x2a25,	// (0x000221e8) bg_button_pane_cp07_cp

0xedb2,	// (0x0002e575) cell_cmode_itu_pane_g1_cp

0xedbb,	// (0x0002e57e) cell_cmode_itu_pane_t1_cp

0xedbb,	// (0x0002e57e) cell_cmode_itu_pane_t2_cp

0xdab2,	// (0x0002d275) settings_code_pane_cp2

0x2b19,	// (0x000222dc) bg_popup_window_pane_cp3_ParamLimits

0x2f91,	// (0x00022754) heading_pane_cp3_ParamLimits

0x2f9d,	// (0x00022760) listscroll_popup_graphic_pane_ParamLimits

0x1e3c,	// (0x000215ff) fep_hwr_aid_pane_ParamLimits

0x2221,	// (0x000219e4) aid_touch_sctrl_top_ParamLimits

0x222e,	// (0x000219f1) sctrl_sk_top_pane_g1_ParamLimits

0x77a8,	// (0x00026f6b) sctrl_sk_top_pane_g2_ParamLimits

0xfd1f,	// (0x0002f4e2) sctrl_sk_top_pane_g_ParamLimits

0x223b,	// (0x000219fe) sctrl_sk_top_pane_t1_ParamLimits

0x2221,	// (0x000219e4) aid_touch_sctrl_bottom_ParamLimits

0x223b,	// (0x000219fe) sctrl_sk_bottom_pane_t1_ParamLimits

0x8e5f,	// (0x00028622) aid_area_touch_clock

0xc51e,	// (0x0002bce1) aid_vkb2_area_top_pane_cell_ParamLimits

0xc51e,	// (0x0002bce1) aid_vkb2_area_top_pane_cell

0xc5c9,	// (0x0002bd8c) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xc5c9,	// (0x0002bd8c) aid_vkb2_area_bottom_pane_cell

0x93c8,	// (0x00028b8b) popup_char_count_window

0x97a3,	// (0x00028f66) popup_char_count_window_g1

0x97ac,	// (0x00028f6f) popup_char_count_window_g2

0x97b5,	// (0x00028f78) popup_char_count_window_g3

0x0002,

0xfdeb,	// (0x0002f5ae) popup_char_count_window_g

0x97be,	// (0x00028f81) popup_char_count_window_t1

0x22da,	// (0x00021a9d) popup_fep_char_preview_window_ParamLimits

0x22da,	// (0x00021a9d) popup_fep_char_preview_window

0xc53e,	// (0x0002bd01) vkb2_top_candi_pane_ParamLimits

0xc53e,	// (0x0002bd01) vkb2_top_candi_pane

0xedc9,	// (0x0002e58c) cell_vkb2_top_candi_pane_ParamLimits

0xedc9,	// (0x0002e58c) cell_vkb2_top_candi_pane

0x5541,	// (0x00024d04) bg_popup_fep_char_preview_window_ParamLimits

0x5541,	// (0x00024d04) bg_popup_fep_char_preview_window

0x2851,	// (0x00022014) popup_fep_char_preview_window_t1_ParamLimits

0x2851,	// (0x00022014) popup_fep_char_preview_window_t1

0x983e,	// (0x00029001) bg_popup_fep_char_preview_window_g1

0x9846,	// (0x00029009) bg_popup_fep_char_preview_window_g2

0x984e,	// (0x00029011) bg_popup_fep_char_preview_window_g3

0x9856,	// (0x00029019) bg_popup_fep_char_preview_window_g4

0x985e,	// (0x00029021) bg_popup_fep_char_preview_window_g5

0x288b,	// (0x0002204e) bg_popup_fep_char_preview_window_g6

0x9866,	// (0x00029029) bg_popup_fep_char_preview_window_g7

0x986e,	// (0x00029031) bg_popup_fep_char_preview_window_g8

0x9876,	// (0x00029039) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdf2,	// (0x0002f5b5) bg_popup_fep_char_preview_window_g

0x77a8,	// (0x00026f6b) cell_vkb2_top_candi_pane_g1_ParamLimits

0x77a8,	// (0x00026f6b) cell_vkb2_top_candi_pane_g1

0x7ae9,	// (0x000272ac) cell_vkb2_top_candi_pane_g2_ParamLimits

0x7ae9,	// (0x000272ac) cell_vkb2_top_candi_pane_g2

0x7b0a,	// (0x000272cd) cell_vkb2_top_candi_pane_g3_ParamLimits

0x7b0a,	// (0x000272cd) cell_vkb2_top_candi_pane_g3

0x2893,	// (0x00022056) cell_vkb2_top_candi_pane_g4_ParamLimits

0x2893,	// (0x00022056) cell_vkb2_top_candi_pane_g4

0x981d,	// (0x00028fe0) cell_vkb2_top_candi_pane_g5_ParamLimits

0x981d,	// (0x00028fe0) cell_vkb2_top_candi_pane_g5

0x8ceb,	// (0x000284ae) cell_vkb2_top_candi_pane_g6_ParamLimits

0x8ceb,	// (0x000284ae) cell_vkb2_top_candi_pane_g6

0x0005,

0xfe05,	// (0x0002f5c8) cell_vkb2_top_candi_pane_g_ParamLimits

0xfe05,	// (0x0002f5c8) cell_vkb2_top_candi_pane_g

0x28b4,	// (0x00022077) cell_vkb2_top_candi_pane_t1

0x1cec,	// (0x000214af) aid_size_touch_slider_mark_ParamLimits

0x1cec,	// (0x000214af) aid_size_touch_slider_mark

0xeb54,	// (0x0002e317) grid_graphic2_catg_pane_ParamLimits

0xeb54,	// (0x0002e317) grid_graphic2_catg_pane

0xebea,	// (0x0002e3ad) popup_grid_graphic2_window_t1_ParamLimits

0xebea,	// (0x0002e3ad) popup_grid_graphic2_window_t1

0xec00,	// (0x0002e3c3) popup_grid_graphic2_window_t2_ParamLimits

0xec00,	// (0x0002e3c3) popup_grid_graphic2_window_t2

0x0001,

0xfdc5,	// (0x0002f588) popup_grid_graphic2_window_t_ParamLimits

0xfdc5,	// (0x0002f588) popup_grid_graphic2_window_t

0x33a0,	// (0x00022b63) bg_button_pane_cp05_ParamLimits

0xed5a,	// (0x0002e51d) cell_graphic2_control_pane_g1_ParamLimits

0xee1d,	// (0x0002e5e0) cell_graphic2_catg_pane_ParamLimits

0xee1d,	// (0x0002e5e0) cell_graphic2_catg_pane

0x2a25,	// (0x000221e8) bg_button_pane_cp12

0xee2f,	// (0x0002e5f2) cell_graphic2_catg_pane_g1

0x8e2b,	// (0x000285ee) cell_tb_ext_pane_t1_ParamLimits

0x266d,	// (0x00021e30) vkb2_top_cell_right_narrow_pane_ParamLimits

0x266d,	// (0x00021e30) vkb2_top_cell_right_narrow_pane

0x2685,	// (0x00021e48) vkb2_top_cell_right_wide_pane_ParamLimits

0x2685,	// (0x00021e48) vkb2_top_cell_right_wide_pane

0x7580,	// (0x00026d43) bg_vkb2_func_pane_ParamLimits

0x7580,	// (0x00026d43) bg_vkb2_func_pane

0x26f6,	// (0x00021eb9) vkb2_top_cell_left_pane_g1_ParamLimits

0x7580,	// (0x00026d43) bg_vkb2_fuc_pane_cp03_ParamLimits

0x7580,	// (0x00026d43) bg_vkb2_fuc_pane_cp03

0x276a,	// (0x00021f2d) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x4ed4,	// (0x00024697) bg_vkb2_func_pane_g1

0x4edc,	// (0x0002469f) bg_vkb2_func_pane_g2

0x4eec,	// (0x000246af) bg_vkb2_func_pane_g3

0x4ee4,	// (0x000246a7) bg_vkb2_func_pane_g4

0x4ef4,	// (0x000246b7) bg_vkb2_func_pane_g5

0x4efc,	// (0x000246bf) bg_vkb2_func_pane_g6

0x4f04,	// (0x000246c7) bg_vkb2_func_pane_g7

0x4f0c,	// (0x000246cf) bg_vkb2_func_pane_g8

0x4ecc,	// (0x0002468f) bg_vkb2_func_pane_g9

0x0008,

0xfe12,	// (0x0002f5d5) bg_vkb2_func_pane_g

0x7580,	// (0x00026d43) bg_vkb2_fuc_pane_cp01_ParamLimits

0x7580,	// (0x00026d43) bg_vkb2_fuc_pane_cp01

0x26f6,	// (0x00021eb9) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x26f6,	// (0x00021eb9) vkb2_top_cell_right_wide_pane_g1

0x7580,	// (0x00026d43) bg_vkb2_fuc_pane_cp02_ParamLimits

0x7580,	// (0x00026d43) bg_vkb2_fuc_pane_cp02

0x276a,	// (0x00021f2d) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x276a,	// (0x00021f2d) vkb2_top_cell_right_narrow_pane_g1

0xe3db,	// (0x0002db9e) aid_touch_area_decrease_ParamLimits

0xe3db,	// (0x0002db9e) aid_touch_area_decrease

0xe415,	// (0x0002dbd8) aid_touch_area_increase_ParamLimits

0xe415,	// (0x0002dbd8) aid_touch_area_increase

0xe43d,	// (0x0002dc00) aid_touch_area_mute_ParamLimits

0xe43d,	// (0x0002dc00) aid_touch_area_mute

0xe46d,	// (0x0002dc30) aid_touch_area_slider_ParamLimits

0xe46d,	// (0x0002dc30) aid_touch_area_slider

0xe4ad,	// (0x0002dc70) popup_slider_window_g4_ParamLimits

0xe4ad,	// (0x0002dc70) popup_slider_window_g4

0xe4d5,	// (0x0002dc98) popup_slider_window_g5_ParamLimits

0xe4d5,	// (0x0002dc98) popup_slider_window_g5

0xe509,	// (0x0002dccc) popup_slider_window_g6_ParamLimits

0xe509,	// (0x0002dccc) popup_slider_window_g6

0x8bfe,	// (0x000283c1) popup_slider_window_t2_ParamLimits

0x8bfe,	// (0x000283c1) popup_slider_window_t2

0x0001,

0xfd13,	// (0x0002f4d6) popup_slider_window_t_ParamLimits

0xfd13,	// (0x0002f4d6) popup_slider_window_t

0xe525,	// (0x0002dce8) slider_pane_ParamLimits

0xe525,	// (0x0002dce8) slider_pane

0x9899,	// (0x0002905c) slider_pane_g1_ParamLimits

0x9899,	// (0x0002905c) slider_pane_g1

0x98ad,	// (0x00029070) slider_pane_g2_ParamLimits

0x98ad,	// (0x00029070) slider_pane_g2

0x98c3,	// (0x00029086) slider_pane_g3_ParamLimits

0x98c3,	// (0x00029086) slider_pane_g3

0x0003,

0xfe25,	// (0x0002f5e8) slider_pane_g_ParamLimits

0xfe25,	// (0x0002f5e8) slider_pane_g

0xd1b3,	// (0x0002c976) popup_tb_float_extension_window_ParamLimits

0xd1b3,	// (0x0002c976) popup_tb_float_extension_window

0x98ef,	// (0x000290b2) aid_size_cell_tb_float_ext

0x2a25,	// (0x000221e8) bg_popup_sub_window_cp28

0x98fb,	// (0x000290be) grid_tb_float_ext_pane

0x9907,	// (0x000290ca) cell_tb_float_ext_pane_ParamLimits

0x9907,	// (0x000290ca) cell_tb_float_ext_pane

0x9923,	// (0x000290e6) cell_tb_float_ext_pane_g1

0x992c,	// (0x000290ef) grid_highlight_pane_cp12

0xc31f,	// (0x0002bae2) cell_last_hwr_side_pane_ParamLimits

0xc31f,	// (0x0002bae2) cell_last_hwr_side_pane

0x7510,	// (0x00026cd3) cell_last_hwr_side_pane_g1

0x9935,	// (0x000290f8) cell_last_hwr_side_pane_g2

0x0001,

0xfe2e,	// (0x0002f5f1) cell_last_hwr_side_pane_g

0xc6a5,	// (0x0002be68) vkb2_area_bottom_space_btn_pane_ParamLimits

0xc6a5,	// (0x0002be68) vkb2_area_bottom_space_btn_pane

0x77a8,	// (0x00026f6b) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x943b,	// (0x00028bfe) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x28b4,	// (0x00022077) cell_vkb2_top_candi_pane_t1_ParamLimits

0x28d2,	// (0x00022095) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x28d2,	// (0x00022095) vkb2_area_bottom_space_btn_pane_g1

0x290c,	// (0x000220cf) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x290c,	// (0x000220cf) vkb2_area_bottom_space_btn_pane_g2

0x2942,	// (0x00022105) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x2942,	// (0x00022105) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe33,	// (0x0002f5f6) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe33,	// (0x0002f5f6) vkb2_area_bottom_space_btn_pane_g

0x1ee5,	// (0x000216a8) cel_fep_hwr_func_pane_ParamLimits

0x1ee5,	// (0x000216a8) cel_fep_hwr_func_pane

0xc2f4,	// (0x0002bab7) cell_hwr_side_button_pane_ParamLimits

0xc2f4,	// (0x0002bab7) cell_hwr_side_button_pane

0x8e5f,	// (0x00028622) aid_area_touch_clock_ParamLimits

0x2da3,	// (0x00022566) bg_uniindi_top_pane_ParamLimits

0x8e73,	// (0x00028636) uniindi_top_pane_g1_ParamLimits

0x8e89,	// (0x0002864c) uniindi_top_pane_g2_ParamLimits

0x8e95,	// (0x00028658) uniindi_top_pane_g3_ParamLimits

0x8ea6,	// (0x00028669) uniindi_top_pane_g4_ParamLimits

0xfd4b,	// (0x0002f50e) uniindi_top_pane_g_ParamLimits

0x8eb3,	// (0x00028676) uniindi_top_pane_t1_ParamLimits

0x2da3,	// (0x00022566) bg_vkb2_func_pane_cp01_ParamLimits

0x2da3,	// (0x00022566) bg_vkb2_func_pane_cp01

0x993e,	// (0x00029101) cel_fep_hwr_func_pane_g1_ParamLimits

0x993e,	// (0x00029101) cel_fep_hwr_func_pane_g1

0x2da3,	// (0x00022566) bg_vkb2_func_pane_cp02_ParamLimits

0x2da3,	// (0x00022566) bg_vkb2_func_pane_cp02

0x993e,	// (0x00029101) cell_hwr_side_button_pane_g1_ParamLimits

0x993e,	// (0x00029101) cell_hwr_side_button_pane_g1

0x4d4d,	// (0x00024510) status_pane_g4_ParamLimits

0x4d4d,	// (0x00024510) status_pane_g4

0x4d67,	// (0x0002452a) status_pane_t1

0x72ac,	// (0x00026a6f) form2_midp_gauge_slider_cont_pane

0x72b4,	// (0x00026a77) form2_midp_gauge_slider_pane_t1_ParamLimits

0xdd6d,	// (0x0002d530) form2_midp_gauge_slider_pane_t2_ParamLimits

0xdd7f,	// (0x0002d542) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb17,	// (0x0002f2da) form2_midp_gauge_slider_pane_t_ParamLimits

0x72ea,	// (0x00026aad) form2_midp_slider_pane_ParamLimits

0x22a2,	// (0x00021a65) aid_size_cell_func_vkb2_ParamLimits

0x22a2,	// (0x00021a65) aid_size_cell_func_vkb2

0x98db,	// (0x0002909e) slider_pane_g4_ParamLimits

0x98db,	// (0x0002909e) slider_pane_g4

0xc706,	// (0x0002bec9) form2_midp_gauge_slider_pane_t2_cp01

0xc714,	// (0x0002bed7) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xc714,	// (0x0002bed7) form2_midp_gauge_slider_pane_t3_cp01

0x29b7,	// (0x0002217a) form2_midp_slider_pane_cp01

0x2a25,	// (0x000221e8) navi_smil_pane

0x9977,	// (0x0002913a) navi_smil_pane_g1

0x997f,	// (0x00029142) navi_smil_pane_t1

0x994c,	// (0x0002910f) form2_midp_slider_pane_g1

0x9955,	// (0x00029118) form2_midp_slider_pane_g2

0x995d,	// (0x00029120) form2_midp_slider_pane_g3

0x994c,	// (0x0002910f) form2_midp_slider_pane_g4

0xee38,	// (0x0002e5fb) form2_midp_slider_pane_g5

0x0004,

0xfe3c,	// (0x0002f5ff) form2_midp_slider_pane_g

0x297c,	// (0x0002213f) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x297c,	// (0x0002213f) vkb2_area_bottom_space_btn_pane_g4

0xd3c7,	// (0x0002cb8a) lc0_navi_pane_ParamLimits

0xd3c7,	// (0x0002cb8a) lc0_navi_pane

0xd437,	// (0x0002cbfa) lc0_stat_indi_pane_ParamLimits

0xd437,	// (0x0002cbfa) lc0_stat_indi_pane

0xd44c,	// (0x0002cc0f) ls0_title_pane_ParamLimits

0xd44c,	// (0x0002cc0f) ls0_title_pane

0x33a0,	// (0x00022b63) bg_popup_sub_pane_cp14_ParamLimits

0x8e46,	// (0x00028609) list_uniindi_pane_ParamLimits

0x8e52,	// (0x00028615) uniindi_top_pane_ParamLimits

0x8ef1,	// (0x000286b4) list_single_uniindi_pane_g1_ParamLimits

0x8f04,	// (0x000286c7) list_single_uniindi_pane_t1_ParamLimits

0xc731,	// (0x0002bef4) lc0_stat_clock_pane_ParamLimits

0xc731,	// (0x0002bef4) lc0_stat_clock_pane

0xee41,	// (0x0002e604) lc0_stat_indi_pane_g1_ParamLimits

0xee41,	// (0x0002e604) lc0_stat_indi_pane_g1

0xee4e,	// (0x0002e611) lc0_stat_indi_pane_g2_ParamLimits

0xee4e,	// (0x0002e611) lc0_stat_indi_pane_g2

0x0001,

0xfe47,	// (0x0002f60a) lc0_stat_indi_pane_g_ParamLimits

0xfe47,	// (0x0002f60a) lc0_stat_indi_pane_g

0xc73e,	// (0x0002bf01) lc0_uni_indicator_pane_ParamLimits

0xc73e,	// (0x0002bf01) lc0_uni_indicator_pane

0xee5b,	// (0x0002e61e) ls0_title_pane_g1_ParamLimits

0xee5b,	// (0x0002e61e) ls0_title_pane_g1

0xee6f,	// (0x0002e632) ls0_title_pane_t1_ParamLimits

0xee6f,	// (0x0002e632) ls0_title_pane_t1

0xc74b,	// (0x0002bf0e) lc0_uni_indicator_pane_g1_ParamLimits

0xc74b,	// (0x0002bf0e) lc0_uni_indicator_pane_g1

0x99f1,	// (0x000291b4) lc0_stat_clock_pane_t1

0x2a25,	// (0x000221e8) main_ai5_pane

0x99ff,	// (0x000291c2) ai5_sk_pane_ParamLimits

0x99ff,	// (0x000291c2) ai5_sk_pane

0xee9d,	// (0x0002e660) cell_ai5_widget_pane_ParamLimits

0xee9d,	// (0x0002e660) cell_ai5_widget_pane

0x9a82,	// (0x00029245) aid_size_cell_widget_grid

0x9a96,	// (0x00029259) bg_ai5_widget_pane_ParamLimits

0x9a96,	// (0x00029259) bg_ai5_widget_pane

0xef2a,	// (0x0002e6ed) cell_ai5_widget_pane_g2

0xef3a,	// (0x0002e6fd) cell_ai5_widget_pane_g3

0xef4e,	// (0x0002e711) cell_ai5_widget_pane_g4

0xef5a,	// (0x0002e71d) cell_ai5_widget_pane_g5

0xef66,	// (0x0002e729) cell_ai5_widget_pane_g6

0xef72,	// (0x0002e735) cell_ai5_widget_pane_g7

0xefba,	// (0x0002e77d) cell_ai5_widget_pane_t1_ParamLimits

0xefba,	// (0x0002e77d) cell_ai5_widget_pane_t1

0xefd7,	// (0x0002e79a) cell_ai5_widget_pane_t2_ParamLimits

0xefd7,	// (0x0002e79a) cell_ai5_widget_pane_t2

0xefef,	// (0x0002e7b2) cell_ai5_widget_pane_t3_ParamLimits

0xefef,	// (0x0002e7b2) cell_ai5_widget_pane_t3

0xf007,	// (0x0002e7ca) cell_ai5_widget_pane_t4_ParamLimits

0xf007,	// (0x0002e7ca) cell_ai5_widget_pane_t4

0xf021,	// (0x0002e7e4) cell_ai5_widget_pane_t5_ParamLimits

0xf021,	// (0x0002e7e4) cell_ai5_widget_pane_t5

0x9bd6,	// (0x00029399) cell_ai5_widget_pane_t6_ParamLimits

0x9bd6,	// (0x00029399) cell_ai5_widget_pane_t6

0x9be8,	// (0x000293ab) cell_ai5_widget_pane_t7_ParamLimits

0x9be8,	// (0x000293ab) cell_ai5_widget_pane_t7

0xf040,	// (0x0002e803) cell_ai5_widget_pane_t8_ParamLimits

0xf040,	// (0x0002e803) cell_ai5_widget_pane_t8

0x0009,

0xfe61,	// (0x0002f624) cell_ai5_widget_pane_t_ParamLimits

0xfe61,	// (0x0002f624) cell_ai5_widget_pane_t

0xf088,	// (0x0002e84b) grid_ai5_widget_pane

0x33a0,	// (0x00022b63) highlight_cell_ai5_widget_pane_ParamLimits

0x33a0,	// (0x00022b63) highlight_cell_ai5_widget_pane

0xf09f,	// (0x0002e862) ai5_sk_left_pane

0xf0a9,	// (0x0002e86c) ai5_sk_middle_pane

0xf0b3,	// (0x0002e876) ai5_sk_right_pane

0x9c7e,	// (0x00029441) bg_ai5_widget_pane_g1_ParamLimits

0x9c7e,	// (0x00029441) bg_ai5_widget_pane_g1

0x9c8a,	// (0x0002944d) bg_ai5_widget_pane_g2_ParamLimits

0x9c8a,	// (0x0002944d) bg_ai5_widget_pane_g2

0x9c96,	// (0x00029459) bg_ai5_widget_pane_g3_ParamLimits

0x9c96,	// (0x00029459) bg_ai5_widget_pane_g3

0x9ca2,	// (0x00029465) bg_ai5_widget_pane_g4_ParamLimits

0x9ca2,	// (0x00029465) bg_ai5_widget_pane_g4

0x9cae,	// (0x00029471) bg_ai5_widget_pane_g5_ParamLimits

0x9cae,	// (0x00029471) bg_ai5_widget_pane_g5

0x9cba,	// (0x0002947d) bg_ai5_widget_pane_g6_ParamLimits

0x9cba,	// (0x0002947d) bg_ai5_widget_pane_g6

0x9cc6,	// (0x00029489) bg_ai5_widget_pane_g7_ParamLimits

0x9cc6,	// (0x00029489) bg_ai5_widget_pane_g7

0x9cd2,	// (0x00029495) bg_ai5_widget_pane_g8_ParamLimits

0x9cd2,	// (0x00029495) bg_ai5_widget_pane_g8

0x9cde,	// (0x000294a1) bg_ai5_widget_pane_g9_ParamLimits

0x9cde,	// (0x000294a1) bg_ai5_widget_pane_g9

0x0008,

0xfe76,	// (0x0002f639) bg_ai5_widget_pane_g_ParamLimits

0xfe76,	// (0x0002f639) bg_ai5_widget_pane_g

0x9d05,	// (0x000294c8) cell_shortcut_ai5_widget_pane_ParamLimits

0x9d05,	// (0x000294c8) cell_shortcut_ai5_widget_pane

0x2be5,	// (0x000223a8) bg_cell_shortcut_ai5_widget_pane

0x9d17,	// (0x000294da) cell_grid_ai5_widget_pane_g1

0x9d20,	// (0x000294e3) highlight_cell_shortcut_ai5_widget_pane

0x4edc,	// (0x0002469f) ai5_sk_left_pane_g1

0x9d28,	// (0x000294eb) ai5_sk_left_pane_g2

0x9d30,	// (0x000294f3) ai5_sk_left_pane_g3

0x9d38,	// (0x000294fb) ai5_sk_left_pane_g4

0x0003,

0xfe89,	// (0x0002f64c) ai5_sk_left_pane_g

0x9d40,	// (0x00029503) ai5_sk_left_pane_t1

0x4ed4,	// (0x00024697) ai5_sk_right_pane_g1

0x9d4e,	// (0x00029511) ai5_sk_right_pane_g2

0x9d56,	// (0x00029519) ai5_sk_right_pane_g3

0x9d5e,	// (0x00029521) ai5_sk_right_pane_g4

0x0003,

0xfe92,	// (0x0002f655) ai5_sk_right_pane_g

0x9d66,	// (0x00029529) ai5_sk_right_pane_t1

0x4ed4,	// (0x00024697) ai5_sk_middle_pane_g1

0x4edc,	// (0x0002469f) ai5_sk_middle_pane_g2

0x4ef4,	// (0x000246b7) ai5_sk_middle_pane_g3

0x9d56,	// (0x00029519) ai5_sk_middle_pane_g4

0x9d30,	// (0x000294f3) ai5_sk_middle_pane_g5

0x9d74,	// (0x00029537) ai5_sk_middle_pane_g6

0xf0bd,	// (0x0002e880) ai5_sk_middle_pane_g7

0x0006,

0xfe9b,	// (0x0002f65e) ai5_sk_middle_pane_g

0xd27d,	// (0x0002ca40) aid_touch_area_size_lc0_ParamLimits

0xd27d,	// (0x0002ca40) aid_touch_area_size_lc0

0x2084,	// (0x00021847) cell_hwr_candidate_pane_t1_ParamLimits

0x4a05,	// (0x000241c8) aid_touch_navi_pane

0xd556,	// (0x0002cd19) status_dt_navi_pane_ParamLimits

0xd556,	// (0x0002cd19) status_dt_navi_pane

0xd56e,	// (0x0002cd31) status_dt_sta_pane_ParamLimits

0xd56e,	// (0x0002cd31) status_dt_sta_pane

0xf0c5,	// (0x0002e888) dt_sta_controll_pane

0xf0d2,	// (0x0002e895) dt_sta_indi_pane

0xf0df,	// (0x0002e8a2) dt_sta_title_pane

0x2da3,	// (0x00022566) bg_dt_sta_indi_pane_ParamLimits

0x2da3,	// (0x00022566) bg_dt_sta_indi_pane

0xf0f1,	// (0x0002e8b4) dt_sta_battery_pane

0xf0f9,	// (0x0002e8bc) dt_sta_indi_pane_g1

0xf102,	// (0x0002e8c5) dt_sta_indi_pane_g2

0xf10b,	// (0x0002e8ce) dt_sta_indi_pane_g3

0x0002,

0xfeaa,	// (0x0002f66d) dt_sta_indi_pane_g

0xf114,	// (0x0002e8d7) dt_sta_signal_pane

0x33a0,	// (0x00022b63) bg_dt_sta_title_pane_ParamLimits

0x33a0,	// (0x00022b63) bg_dt_sta_title_pane

0xf11d,	// (0x0002e8e0) dt_sta_title_pane_g1

0xf125,	// (0x0002e8e8) dt_sta_title_pane_t1_ParamLimits

0xf125,	// (0x0002e8e8) dt_sta_title_pane_t1

0x2a25,	// (0x000221e8) bg_dt_sta_control_pane

0xf13a,	// (0x0002e8fd) dt_sta_controll_pane_g1

0xf143,	// (0x0002e906) bg_dt_sta_title_pane_g1

0xf14c,	// (0x0002e90f) bg_dt_sta_title_pane_g2

0xf155,	// (0x0002e918) bg_dt_sta_title_pane_g3

0x0002,

0xfeb1,	// (0x0002f674) bg_dt_sta_title_pane_g

0x7510,	// (0x00026cd3) bg_dt_sta_indi_pane_g1

0x9e22,	// (0x000295e5) dt_sta_signal_pane_g1

0x9e2a,	// (0x000295ed) dt_sta_signal_pane_g2

0x0001,

0xfeb8,	// (0x0002f67b) dt_sta_signal_pane_g

0x9e32,	// (0x000295f5) dt_sta_battery_pane_g1

0x9e3b,	// (0x000295fe) dt_sta_battery_pane_t1

0x7510,	// (0x00026cd3) bg_dt_sta_control_pane_g1

0x3afc,	// (0x000232bf) fep_china_uni_eep_pane

0x3b04,	// (0x000232c7) fep_china_uni_entry_pane_ParamLimits

0x3b14,	// (0x000232d7) popup_fep_china_uni_window_g1_ParamLimits

0x3b24,	// (0x000232e7) popup_fep_china_uni_window_g2_ParamLimits

0x3b24,	// (0x000232e7) popup_fep_china_uni_window_g2

0x0001,

0xf758,	// (0x0002ef1b) popup_fep_china_uni_window_g_ParamLimits

0xf758,	// (0x0002ef1b) popup_fep_china_uni_window_g

0x9e4a,	// (0x0002960d) fep_china_uni_eep_pane_g1

0x9e52,	// (0x00029615) fep_china_uni_eep_pane_t1

0x996e,	// (0x00029131) aid_touch_area_size_smil_player

0x4b5d,	// (0x00024320) lc0_clock_pane

0x4d5b,	// (0x0002451e) status_pane_g5_ParamLimits

0x4d5b,	// (0x0002451e) status_pane_g5

0xccdd,	// (0x0002c4a0) popup_keymap_window

0x4d19,	// (0x000244dc) status_icon_pane

0xef3a,	// (0x0002e6fd) cell_ai5_widget_pane_g3_ParamLimits

0xef4e,	// (0x0002e711) cell_ai5_widget_pane_g4_ParamLimits

0xef5a,	// (0x0002e71d) cell_ai5_widget_pane_g5_ParamLimits

0xef7e,	// (0x0002e741) cell_ai5_widget_pane_g8_ParamLimits

0xef7e,	// (0x0002e741) cell_ai5_widget_pane_g8

0xef92,	// (0x0002e755) cell_ai5_widget_pane_g9_ParamLimits

0xef92,	// (0x0002e755) cell_ai5_widget_pane_g9

0xefa6,	// (0x0002e769) cell_ai5_widget_pane_g10_ParamLimits

0xefa6,	// (0x0002e769) cell_ai5_widget_pane_g10

0x9e61,	// (0x00029624) status_icon_pane_g1

0x2a25,	// (0x000221e8) bg_popup_sub_pane_cp13

0x9e69,	// (0x0002962c) popup_keymap_window_t1

0xcae9,	// (0x0002c2ac) control_pane_g6_ParamLimits

0xcae9,	// (0x0002c2ac) control_pane_g6

0xcaf6,	// (0x0002c2b9) control_pane_g7_ParamLimits

0xcaf6,	// (0x0002c2b9) control_pane_g7

0xcb03,	// (0x0002c2c6) control_pane_g8_ParamLimits

0xcb03,	// (0x0002c2c6) control_pane_g8

0xf0c5,	// (0x0002e888) dt_sta_controll_pane_ParamLimits

0xf0d2,	// (0x0002e895) dt_sta_indi_pane_ParamLimits

0xf0df,	// (0x0002e8a2) dt_sta_title_pane_ParamLimits

0x32d8,	// (0x00022a9b) aid_size_touch_scroll_bar_cale

0x11f6,	// (0x000209b9) popup_discreet_window_ParamLimits

0x11f6,	// (0x000209b9) popup_discreet_window

0xbb9e,	// (0x0002b361) popup_sk_window

0x5541,	// (0x00024d04) bg_popup_sub_pane_cp28_ParamLimits

0x5541,	// (0x00024d04) bg_popup_sub_pane_cp28

0x9e77,	// (0x0002963a) popup_discreet_window_g1_ParamLimits

0x9e77,	// (0x0002963a) popup_discreet_window_g1

0x9e97,	// (0x0002965a) popup_discreet_window_t1_ParamLimits

0x9e97,	// (0x0002965a) popup_discreet_window_t1

0x9eb5,	// (0x00029678) popup_discreet_window_t2_ParamLimits

0x9eb5,	// (0x00029678) popup_discreet_window_t2

0x0002,

0xfebd,	// (0x0002f680) popup_discreet_window_t_ParamLimits

0xfebd,	// (0x0002f680) popup_discreet_window_t

0x29ed,	// (0x000221b0) popup_sk_window_g1

0x29f7,	// (0x000221ba) popup_sk_window_g2

0x0001,

0xfec4,	// (0x0002f687) popup_sk_window_g

0x9f07,	// (0x000296ca) popup_sk_window_t1

0x9f15,	// (0x000296d8) popup_sk_window_t1_copy1

0xef2a,	// (0x0002e6ed) cell_ai5_widget_pane_g2_ParamLimits

0xf052,	// (0x0002e815) cell_ai5_widget_pane_t9_ParamLimits

0xf052,	// (0x0002e815) cell_ai5_widget_pane_t9

0x2a25,	// (0x000221e8) main_fep_fshwr2_pane

0xf15e,	// (0x0002e921) aid_fshwr2_btn_pane

0xf166,	// (0x0002e929) aid_fshwr2_syb_pane

0xf16e,	// (0x0002e931) aid_fshwr2_txt_pane

0xf176,	// (0x0002e939) fshwr2_func_candi_pane

0xf180,	// (0x0002e943) fshwr2_hwr_syb_pane

0xf18c,	// (0x0002e94f) fshwr2_icf_pane

0x2a25,	// (0x000221e8) fshwr2_icf_bg_pane

0xf196,	// (0x0002e959) fshwr2_icf_pane_t1_ParamLimits

0xf196,	// (0x0002e959) fshwr2_icf_pane_t1

0x7510,	// (0x00026cd3) fshwr2_func_candi_pane_g1

0x9f88,	// (0x0002974b) fshwr2_func_candi_row_pane_ParamLimits

0x9f88,	// (0x0002974b) fshwr2_func_candi_row_pane

0xf1ae,	// (0x0002e971) cell_fshwr2_syb_pane_ParamLimits

0xf1ae,	// (0x0002e971) cell_fshwr2_syb_pane

0x77a8,	// (0x00026f6b) fshwr2_hwr_syb_pane_g1_ParamLimits

0x77a8,	// (0x00026f6b) fshwr2_hwr_syb_pane_g1

0x2a25,	// (0x000221e8) bg_popup_call_pane_cp01

0x9fb3,	// (0x00029776) fshwr2_func_candi_cell_pane_ParamLimits

0x9fb3,	// (0x00029776) fshwr2_func_candi_cell_pane

0x9fe5,	// (0x000297a8) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x9fe5,	// (0x000297a8) fshwr2_func_candi_cell_bg_pane

0x9fff,	// (0x000297c2) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x9fff,	// (0x000297c2) fshwr2_func_candi_cell_pane_g1

0xa01f,	// (0x000297e2) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xa01f,	// (0x000297e2) fshwr2_func_candi_cell_pane_t1

0x2a25,	// (0x000221e8) bg_button_pane_cp08

0x400a,	// (0x000237cd) cell_fshwr2_syb_bg_pane

0xf1c7,	// (0x0002e98a) cell_fshwr2_syb_bg_pane_g1

0xf1cf,	// (0x0002e992) cell_fshwr2_syb_bg_pane_t1

0x33a0,	// (0x00022b63) main_tmo_pane

0xd888,	// (0x0002d04b) uni_indicator_pane_g1_ParamLimits

0xd89d,	// (0x0002d060) uni_indicator_pane_g2_ParamLimits

0xd8b2,	// (0x0002d075) uni_indicator_pane_g3_ParamLimits

0xd8c8,	// (0x0002d08b) uni_indicator_pane_g4_ParamLimits

0xd8c8,	// (0x0002d08b) uni_indicator_pane_g4

0xd8dc,	// (0x0002d09f) uni_indicator_pane_g5_ParamLimits

0xd8dc,	// (0x0002d09f) uni_indicator_pane_g5

0xd8f0,	// (0x0002d0b3) uni_indicator_pane_g6_ParamLimits

0xd8f0,	// (0x0002d0b3) uni_indicator_pane_g6

0xf950,	// (0x0002f113) uni_indicator_pane_g_ParamLimits

0xe3ab,	// (0x0002db6e) popup_tmo_note_window_ParamLimits

0xe3ab,	// (0x0002db6e) popup_tmo_note_window

0x2a25,	// (0x000221e8) fshwr2_bg_pane

0xa010,	// (0x000297d3) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xa010,	// (0x000297d3) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfec9,	// (0x0002f68c) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfec9,	// (0x0002f68c) fshwr2_func_candi_cell_pane_g

0x7510,	// (0x00026cd3) bg_popup_window_pane_cp01

0xa049,	// (0x0002980c) bg_popup_window_pane_g1_cp01

0xa052,	// (0x00029815) bg_popup_window_pane_cp22_ParamLimits

0xa052,	// (0x00029815) bg_popup_window_pane_cp22

0xa060,	// (0x00029823) listscroll_tmo_link_pane_ParamLimits

0xa060,	// (0x00029823) listscroll_tmo_link_pane

0xa0a0,	// (0x00029863) popup_tmo_note_window_g1_ParamLimits

0xa0a0,	// (0x00029863) popup_tmo_note_window_g1

0xa0ad,	// (0x00029870) tmo_note_info_pane_ParamLimits

0xa0ad,	// (0x00029870) tmo_note_info_pane

0xf1de,	// (0x0002e9a1) list_tmo_note_info_pane_g1_ParamLimits

0xf1de,	// (0x0002e9a1) list_tmo_note_info_pane_g1

0xa0de,	// (0x000298a1) list_tmo_note_info_pane_g2_ParamLimits

0xa0de,	// (0x000298a1) list_tmo_note_info_pane_g2

0x0001,

0xfece,	// (0x0002f691) list_tmo_note_info_pane_g_ParamLimits

0xfece,	// (0x0002f691) list_tmo_note_info_pane_g

0xa0fa,	// (0x000298bd) list_tmo_note_info_text_pane_ParamLimits

0xa0fa,	// (0x000298bd) list_tmo_note_info_text_pane

0xa17f,	// (0x00029942) list_tmo_link_pane

0xa18c,	// (0x0002994f) scroll_pane_cp20

0xa199,	// (0x0002995c) list_single_tmo_link_pane_ParamLimits

0xa199,	// (0x0002995c) list_single_tmo_link_pane

0xa1a9,	// (0x0002996c) list_single_tmo_link_pane_t1

0xa1b7,	// (0x0002997a) list_tmo_note_info_text_pane_t1_ParamLimits

0xa1b7,	// (0x0002997a) list_tmo_note_info_text_pane_t1

0xc76a,	// (0x0002bf2d) aid_size_touch_scroll_bar_cp01_ParamLimits

0xc76a,	// (0x0002bf2d) aid_size_touch_scroll_bar_cp01

0xb674,	// (0x0002ae37) aid_size_touch_slider_marker

0xbb8e,	// (0x0002b351) popup_settings_window_ParamLimits

0xbb8e,	// (0x0002b351) popup_settings_window

0x078c,	// (0x0001ff4f) popup_candi_list_indi_window

0x4a05,	// (0x000241c8) aid_touch_navi_pane_ParamLimits

0x21f5,	// (0x000219b8) rs_clock_indi_pane

0x21fe,	// (0x000219c1) sctrl_sk_bottom_pane_ParamLimits

0x220f,	// (0x000219d2) sctrl_sk_top_pane_ParamLimits

0x22f4,	// (0x00021ab7) popup_fep_tooltip_window

0x9a82,	// (0x00029245) aid_size_cell_widget_grid_ParamLimits

0xef1e,	// (0x0002e6e1) cell_ai5_widget_pane_g1_ParamLimits

0xef1e,	// (0x0002e6e1) cell_ai5_widget_pane_g1

0xef66,	// (0x0002e729) cell_ai5_widget_pane_g6_ParamLimits

0xef72,	// (0x0002e735) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe4c,	// (0x0002f60f) cell_ai5_widget_pane_g_ParamLimits

0xfe4c,	// (0x0002f60f) cell_ai5_widget_pane_g

0xf076,	// (0x0002e839) cell_ai5_widget_pane_t10_ParamLimits

0xf076,	// (0x0002e839) cell_ai5_widget_pane_t10

0xf088,	// (0x0002e84b) grid_ai5_widget_pane_ParamLimits

0x9cea,	// (0x000294ad) cell_contacts_ai5_widget_pane_ParamLimits

0x9cea,	// (0x000294ad) cell_contacts_ai5_widget_pane

0x9eca,	// (0x0002968d) popup_discreet_window_t3_ParamLimits

0x9eca,	// (0x0002968d) popup_discreet_window_t3

0x9f59,	// (0x0002971c) popup_fshwr2_char_preview_window_ParamLimits

0x9f59,	// (0x0002971c) popup_fshwr2_char_preview_window

0xf1f5,	// (0x0002e9b8) tmo_note_info_pane_t1

0xf20a,	// (0x0002e9cd) tmo_note_info_pane_t2

0xf223,	// (0x0002e9e6) tmo_note_info_pane_t3

0xa15b,	// (0x0002991e) tmo_note_info_pane_t4

0xa16d,	// (0x00029930) tmo_note_info_pane_t5

0x0004,

0xfed3,	// (0x0002f696) tmo_note_info_pane_t

0xa17f,	// (0x00029942) list_tmo_link_pane_ParamLimits

0xa18c,	// (0x0002994f) scroll_pane_cp20_ParamLimits

0x2a25,	// (0x000221e8) bg_popup_fep_char_preview_window_cp01

0xa1d0,	// (0x00029993) popup_fshwr2_char_preview_window_t1

0xa1de,	// (0x000299a1) popup_candi_list_indi_window_g1

0xa1e7,	// (0x000299aa) bg_cell_contacts_ai5_widget_pane

0xa1f3,	// (0x000299b6) cell_contacts_ai5_widget_pane_g1

0xa207,	// (0x000299ca) cell_contacts_ai5_widget_pane_g2

0xa216,	// (0x000299d9) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfede,	// (0x0002f6a1) cell_contacts_ai5_widget_pane_g

0xa229,	// (0x000299ec) cell_contacts_ai5_widget_pane_t1

0x33a0,	// (0x00022b63) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf29d,	// (0x0002ea60) settings_container_pane

0x400a,	// (0x000237cd) listscroll_set_pane_copy1

0x6c87,	// (0x0002644a) scroll_pane_cp121_copy1

0xa2af,	// (0x00029a72) set_content_pane_copy1

0xf2a9,	// (0x0002ea6c) aid_height_set_list_copy1_ParamLimits

0xf2a9,	// (0x0002ea6c) aid_height_set_list_copy1

0x62d4,	// (0x00025a97) aid_size_parent_copy1_ParamLimits

0x62d4,	// (0x00025a97) aid_size_parent_copy1

0xf2b5,	// (0x0002ea78) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf2b5,	// (0x0002ea78) button_value_adjust_pane_cp6_copy1

0x4390,	// (0x00023b53) list_highlight_pane_cp2_copy1_ParamLimits

0x4390,	// (0x00023b53) list_highlight_pane_cp2_copy1

0xf2c9,	// (0x0002ea8c) list_set_pane_copy1_ParamLimits

0xf2c9,	// (0x0002ea8c) list_set_pane_copy1

0xf238,	// (0x0002e9fb) main_pane_set_t1_copy1_ParamLimits

0xf238,	// (0x0002e9fb) main_pane_set_t1_copy1

0xf272,	// (0x0002ea35) main_pane_set_t2_copy1_ParamLimits

0xf272,	// (0x0002ea35) main_pane_set_t2_copy1

0xf390,	// (0x0002eb53) main_pane_set_t3_copy1

0xf39e,	// (0x0002eb61) main_pane_set_t4_copy1

0xf291,	// (0x0002ea54) set_content_pane_g1_copy1_ParamLimits

0xf291,	// (0x0002ea54) set_content_pane_g1_copy1

0xf3ac,	// (0x0002eb6f) setting_code_pane_copy1

0xa3c4,	// (0x00029b87) setting_slider_graphic_pane_copy1

0xa3c4,	// (0x00029b87) setting_slider_pane_copy1

0xa3ce,	// (0x00029b91) setting_text_pane_copy1

0xa3d8,	// (0x00029b9b) setting_volume_pane_copy1

0xf3b6,	// (0x0002eb79) settings_code_pane_cp2_copy1

0xf3be,	// (0x0002eb81) settings_code_pane_cp_copy1_ParamLimits

0xf3be,	// (0x0002eb81) settings_code_pane_cp_copy1

0xf3d2,	// (0x0002eb95) volume_set_pane_copy1

0xf3de,	// (0x0002eba1) volume_set_pane_g10_copy1

0xf3ea,	// (0x0002ebad) volume_set_pane_g1_copy1

0xf3f4,	// (0x0002ebb7) volume_set_pane_g2_copy1

0xf3fe,	// (0x0002ebc1) volume_set_pane_g3_copy1

0xf408,	// (0x0002ebcb) volume_set_pane_g4_copy1

0xf412,	// (0x0002ebd5) volume_set_pane_g5_copy1

0xf41c,	// (0x0002ebdf) volume_set_pane_g6_copy1

0xf426,	// (0x0002ebe9) volume_set_pane_g7_copy1

0xf430,	// (0x0002ebf3) volume_set_pane_g8_copy1

0xf43a,	// (0x0002ebfd) volume_set_pane_g9_copy1

0x2b19,	// (0x000222dc) bg_set_opt_pane_cp_copy1_ParamLimits

0x2b19,	// (0x000222dc) bg_set_opt_pane_cp_copy1

0xa46f,	// (0x00029c32) setting_slider_pane_t1_copy1_ParamLimits

0xa46f,	// (0x00029c32) setting_slider_pane_t1_copy1

0xf444,	// (0x0002ec07) setting_slider_pane_t2_copy1_ParamLimits

0xf444,	// (0x0002ec07) setting_slider_pane_t2_copy1

0xf45e,	// (0x0002ec21) setting_slider_pane_t3_copy1_ParamLimits

0xf45e,	// (0x0002ec21) setting_slider_pane_t3_copy1

0xf476,	// (0x0002ec39) slider_set_pane_copy1_ParamLimits

0xf476,	// (0x0002ec39) slider_set_pane_copy1

0x3407,	// (0x00022bca) set_opt_bg_pane_g1_copy2

0x340f,	// (0x00022bd2) set_opt_bg_pane_g2_copy2

0xa4d5,	// (0x00029c98) set_opt_bg_pane_g3_copy2

0x341f,	// (0x00022be2) set_opt_bg_pane_g4_copy2

0x3427,	// (0x00022bea) set_opt_bg_pane_g5_copy2

0x342f,	// (0x00022bf2) set_opt_bg_pane_g6_copy2

0xf48c,	// (0x0002ec4f) set_opt_bg_pane_g7_copy2

0xa4e9,	// (0x00029cac) set_opt_bg_pane_g8_copy2

0xa4f3,	// (0x00029cb6) set_opt_bg_pane_g9_copy2

0xa4fd,	// (0x00029cc0) aid_size_touch_slider_mark_copy1_ParamLimits

0xa4fd,	// (0x00029cc0) aid_size_touch_slider_mark_copy1

0xa511,	// (0x00029cd4) slider_set_pane_g1_copy1

0xa51a,	// (0x00029cdd) slider_set_pane_g2_copy1

0x6bdb,	// (0x0002639e) slider_set_pane_g3_copy1_ParamLimits

0x6bdb,	// (0x0002639e) slider_set_pane_g3_copy1

0x6bef,	// (0x000263b2) slider_set_pane_g4_copy1_ParamLimits

0x6bef,	// (0x000263b2) slider_set_pane_g4_copy1

0x6c07,	// (0x000263ca) slider_set_pane_g5_copy1_ParamLimits

0x6c07,	// (0x000263ca) slider_set_pane_g5_copy1

0x6bdb,	// (0x0002639e) slider_set_pane_g6_copy1_ParamLimits

0x6bdb,	// (0x0002639e) slider_set_pane_g6_copy1

0xf496,	// (0x0002ec59) slider_set_pane_g7_copy1_ParamLimits

0xf496,	// (0x0002ec59) slider_set_pane_g7_copy1

0x2a39,	// (0x000221fc) bg_set_opt_pane_cp2_copy1

0xa538,	// (0x00029cfb) setting_slider_graphic_pane_g1_copy1

0xf4ac,	// (0x0002ec6f) setting_slider_graphic_pane_t1_copy1

0xf4bc,	// (0x0002ec7f) setting_slider_graphic_pane_t2_copy1

0xf4cc,	// (0x0002ec8f) slider_set_pane_cp_copy1

0xa571,	// (0x00029d34) input_focus_pane_cp1_copy1

0xa57a,	// (0x00029d3d) list_set_text_pane_copy1

0xa582,	// (0x00029d45) setting_text_pane_g1_copy1

0xf56b,	// (0x0002ed2e) set_text_pane_t1_copy1

0xa571,	// (0x00029d34) input_focus_pane_cp2_copy1

0xa582,	// (0x00029d45) setting_code_pane_g1_copy1

0xf4d4,	// (0x0002ec97) setting_code_pane_t1_copy1

0xf4e2,	// (0x0002eca5) list_set_graphic_pane_copy1

0x2a39,	// (0x000221fc) bg_set_opt_pane_cp4_copy1

0xc9f5,	// (0x0002c1b8) list_set_graphic_pane_g1_copy1_ParamLimits

0xc9f5,	// (0x0002c1b8) list_set_graphic_pane_g1_copy1

0xf4f4,	// (0x0002ecb7) list_set_graphic_pane_g2_copy1

0xca0d,	// (0x0002c1d0) list_set_graphic_pane_t1_copy1_ParamLimits

0xca0d,	// (0x0002c1d0) list_set_graphic_pane_t1_copy1

0x7510,	// (0x00026cd3) rs_clock_indi_pane_g1

0xa5b3,	// (0x00029d76) rs_clock_indi_pane_t1

0xa5c1,	// (0x00029d84) rs_indi_pane

0xa5c9,	// (0x00029d8c) rs_indi_pane_g1

0xa5d2,	// (0x00029d95) rs_indi_pane_g2

0xa5db,	// (0x00029d9e) rs_indi_pane_g3

0x0002,

0xfee5,	// (0x0002f6a8) rs_indi_pane_g

0x400a,	// (0x000237cd) bg_popup_preview_window_pane_cp03

0xa5e4,	// (0x00029da7) popup_fep_tooltip_window_t1

0x81c4,	// (0x00027987) popup_note2_window_g2_ParamLimits

0x81c4,	// (0x00027987) popup_note2_window_g2

0x0001,

0xfc83,	// (0x0002f446) popup_note2_window_g_ParamLimits

0xfc83,	// (0x0002f446) popup_note2_window_g

0x86cc,	// (0x00027e8f) bg_popup_sub_pane_cp11_ParamLimits

0x86d9,	// (0x00027e9c) cell_ai3_links_pane_g1_ParamLimits

0x86f0,	// (0x00027eb3) cell_ai3_links_pane_t1

0xf56b,	// (0x0002ed2e) set_text_pane_t1_copy1_ParamLimits

0x3f17,	// (0x000236da) cell_graphic_popup_pane_cp2_ParamLimits

0x3f17,	// (0x000236da) cell_graphic_popup_pane_cp2

0xa5f2,	// (0x00029db5) cell_graphic_popup_pane_g1_cp2

0x30eb,	// (0x000228ae) cell_graphic_popup_pane_g2_cp2

0xa5fa,	// (0x00029dbd) cell_graphic_popup_pane_g3_cp2

0xa602,	// (0x00029dc5) cell_graphic_popup_pane_t2_cp2

0x30fc,	// (0x000228bf) grid_highlight_pane_cp3_cp2

0x3753,	// (0x00022f16) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x33a0,	// (0x00022b63) main_tmo_pane_ParamLimits

0xe39f,	// (0x0002db62) popup_tmo_big_image_note_window

0xef0e,	// (0x0002e6d1) cell_ai5_widget_list_pane

0xef16,	// (0x0002e6d9) cell_ai5_widget_lrg_icon_pane

0xf1f5,	// (0x0002e9b8) tmo_note_info_pane_t1_ParamLimits

0xf20a,	// (0x0002e9cd) tmo_note_info_pane_t2_ParamLimits

0xf223,	// (0x0002e9e6) tmo_note_info_pane_t3_ParamLimits

0xa15b,	// (0x0002991e) tmo_note_info_pane_t4_ParamLimits

0xa16d,	// (0x00029930) tmo_note_info_pane_t5_ParamLimits

0xfed3,	// (0x0002f696) tmo_note_info_pane_t_ParamLimits

0xf29d,	// (0x0002ea60) settings_container_pane_ParamLimits

0xa569,	// (0x00029d2c) indicator_popup_pane_cp5

0xa569,	// (0x00029d2c) indicator_popup_pane_cp6

0xf4e2,	// (0x0002eca5) list_set_graphic_pane_copy1_ParamLimits

0x2a25,	// (0x000221e8) bg_popup_window_pane_cp23

0xa610,	// (0x00029dd3) popup_tmo_big_image_note_window_g1

0xa61c,	// (0x00029ddf) popup_tmo_big_image_note_window_t1

0xa62c,	// (0x00029def) popup_tmo_big_image_note_window_t2

0xa63c,	// (0x00029dff) popup_tmo_big_image_note_window_t3

0x0002,

0xfeec,	// (0x0002f6af) popup_tmo_big_image_note_window_t

0xf4fc,	// (0x0002ecbf) cell_ai5_widget_lrg_icon_pane_g1

0xf504,	// (0x0002ecc7) cell_ai5_widget_lrg_icon_pane_t1

0xf512,	// (0x0002ecd5) cell_ai5_widget_list_row_pane_ParamLimits

0xf512,	// (0x0002ecd5) cell_ai5_widget_list_row_pane

0xf52b,	// (0x0002ecee) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf52b,	// (0x0002ecee) cell_ai5_widget_list_row_pane_g1

0xf538,	// (0x0002ecfb) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf538,	// (0x0002ecfb) cell_ai5_widget_list_row_pane_t1

0xf550,	// (0x0002ed13) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf550,	// (0x0002ed13) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfef3,	// (0x0002f6b6) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfef3,	// (0x0002f6b6) cell_ai5_widget_list_row_pane_t

0x2a25,	// (0x000221e8) main_fep_vtchi_ss_pane

0xa6b2,	// (0x00029e75) popup_fep_char_pre_window

0xa6ba,	// (0x00029e7d) popup_fep_ituss_window

0xa6c5,	// (0x00029e88) popup_fep_vkbss_window

0xa6d0,	// (0x00029e93) grid_vkbss_keypad_pane_ParamLimits

0xa6d0,	// (0x00029e93) grid_vkbss_keypad_pane

0xa6e0,	// (0x00029ea3) ituss_keypad_pane

0xa6e8,	// (0x00029eab) aid_vkbss_key_offset_ParamLimits

0xa6e8,	// (0x00029eab) aid_vkbss_key_offset

0xa6f7,	// (0x00029eba) cell_vkbss_key_pane_ParamLimits

0xa6f7,	// (0x00029eba) cell_vkbss_key_pane

0xa70d,	// (0x00029ed0) bg_cell_vkbss_key_g1_ParamLimits

0xa70d,	// (0x00029ed0) bg_cell_vkbss_key_g1

0xa719,	// (0x00029edc) cell_vkbss_key_3p_pane_ParamLimits

0xa719,	// (0x00029edc) cell_vkbss_key_3p_pane

0xa733,	// (0x00029ef6) cell_vkbss_key_g1_ParamLimits

0xa733,	// (0x00029ef6) cell_vkbss_key_g1

0xa74d,	// (0x00029f10) cell_vkbss_key_t1_ParamLimits

0xa74d,	// (0x00029f10) cell_vkbss_key_t1

0xa778,	// (0x00029f3b) cell_ituss_key_pane_ParamLimits

0xa778,	// (0x00029f3b) cell_ituss_key_pane

0xa787,	// (0x00029f4a) bg_cell_ituss_key_g1_ParamLimits

0xa787,	// (0x00029f4a) bg_cell_ituss_key_g1

0xa793,	// (0x00029f56) cell_ituss_key_pane_g1_ParamLimits

0xa793,	// (0x00029f56) cell_ituss_key_pane_g1

0xa79f,	// (0x00029f62) cell_ituss_key_pane_g2_ParamLimits

0xa79f,	// (0x00029f62) cell_ituss_key_pane_g2

0x0001,

0xfef8,	// (0x0002f6bb) cell_ituss_key_pane_g_ParamLimits

0xfef8,	// (0x0002f6bb) cell_ituss_key_pane_g

0xa7b3,	// (0x00029f76) cell_ituss_key_t1_ParamLimits

0xa7b3,	// (0x00029f76) cell_ituss_key_t1

0xa7d1,	// (0x00029f94) cell_ituss_key_t2_ParamLimits

0xa7d1,	// (0x00029f94) cell_ituss_key_t2

0xa7f0,	// (0x00029fb3) cell_ituss_key_t3_ParamLimits

0xa7f0,	// (0x00029fb3) cell_ituss_key_t3

0xa80f,	// (0x00029fd2) cell_ituss_key_t4_ParamLimits

0xa80f,	// (0x00029fd2) cell_ituss_key_t4

0x0003,

0xfefd,	// (0x0002f6c0) cell_ituss_key_t_ParamLimits

0xfefd,	// (0x0002f6c0) cell_ituss_key_t

0xa82e,	// (0x00029ff1) cell_vkbss_key_3p_pane_g1

0xa836,	// (0x00029ff9) cell_vkbss_key_3p_pane_g2

0xa83e,	// (0x0002a001) cell_vkbss_key_3p_pane_g3

0x0002,

0xff06,	// (0x0002f6c9) cell_vkbss_key_3p_pane_g

0x2a25,	// (0x000221e8) bg_popup_fep_char_preview_window_cp02

0xa846,	// (0x0002a009) popup_fep_char_pre_window_t1

0xef04,	// (0x0002e6c7) main_ai5_sk_pane

0xa1e7,	// (0x000299aa) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa1f3,	// (0x000299b6) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xa207,	// (0x000299ca) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa216,	// (0x000299d9) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfede,	// (0x0002f6a1) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa229,	// (0x000299ec) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x33a0,	// (0x00022b63) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf562,	// (0x0002ed25) main_ai5_sk_pane_g1
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

} // end of namespace AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Small
