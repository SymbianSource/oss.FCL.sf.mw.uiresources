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

#include "aknlayoutscalable_elaf_pvl4_av_vga4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x00048bfd };

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
0x9ad3,	// (0x000526d0) Screen

0x9adf,	// (0x000526dc) application_window_ParamLimits

0x9adf,	// (0x000526dc) application_window

0x6bc7,	// (0x0004f7c4) screen_g1

0x9b17,	// (0x00052714) area_bottom_pane_ParamLimits

0x9b17,	// (0x00052714) area_bottom_pane

0xed02,	// (0x000578ff) area_top_pane_ParamLimits

0xed02,	// (0x000578ff) area_top_pane

0xed96,	// (0x00057993) main_pane_ParamLimits

0xed96,	// (0x00057993) main_pane

0x6bd1,	// (0x0004f7ce) misc_graphics

0xb95a,	// (0x00054557) battery_pane_ParamLimits

0xb95a,	// (0x00054557) battery_pane

0x305a,	// (0x0004bc57) bg_status_flat_pane_g8

0x3062,	// (0x0004bc5f) bg_status_flat_pane_g9

0x2464,	// (0x0004b061) context_pane_ParamLimits

0x2464,	// (0x0004b061) context_pane

0xbad1,	// (0x000546ce) navi_pane_ParamLimits

0xbad1,	// (0x000546ce) navi_pane

0xc4f3,	// (0x000550f0) signal_pane_ParamLimits

0xc4f3,	// (0x000550f0) signal_pane

0x0008,

0xf87f,	// (0x0005847c) bg_status_flat_pane_g

0xc583,	// (0x00055180) status_pane_g1_ParamLimits

0xc583,	// (0x00055180) status_pane_g1

0xc599,	// (0x00055196) status_pane_g2_ParamLimits

0xc599,	// (0x00055196) status_pane_g2

0x26a5,	// (0x0004b2a2) status_pane_g3_ParamLimits

0x26a5,	// (0x0004b2a2) status_pane_g3

0x0004,

0xf7ab,	// (0x000583a8) status_pane_g_ParamLimits

0xf7ab,	// (0x000583a8) status_pane_g

0xc5a5,	// (0x000551a2) title_pane_ParamLimits

0xc5a5,	// (0x000551a2) title_pane

0xc608,	// (0x00055205) uni_indicator_pane_ParamLimits

0xc608,	// (0x00055205) uni_indicator_pane

0x1c85,	// (0x0004a882) bg_list_pane_ParamLimits

0x1c85,	// (0x0004a882) bg_list_pane

0xb188,	// (0x00053d85) find_pane

0xb190,	// (0x00053d8d) listscroll_app_pane_ParamLimits

0xb190,	// (0x00053d8d) listscroll_app_pane

0x1cb9,	// (0x0004a8b6) listscroll_form_pane

0xb1a0,	// (0x00053d9d) listscroll_gen_pane_ParamLimits

0xb1a0,	// (0x00053d9d) listscroll_gen_pane

0x1cd5,	// (0x0004a8d2) listscroll_set_pane

0x3bfa,	// (0x0004c7f7) main_idle_act_pane

0xe847,	// (0x00057444) main_idle_trad_pane

0xe847,	// (0x00057444) main_list_empty_pane

0x1cef,	// (0x0004a8ec) main_midp_pane

0x1cfb,	// (0x0004a8f8) main_pane_g1_ParamLimits

0x1cfb,	// (0x0004a8f8) main_pane_g1

0xb1b4,	// (0x00053db1) popup_ai_message_window_ParamLimits

0xb1b4,	// (0x00053db1) popup_ai_message_window

0xb254,	// (0x00053e51) popup_fep_china_uni_window_ParamLimits

0xb254,	// (0x00053e51) popup_fep_china_uni_window

0x1e1d,	// (0x0004aa1a) popup_fep_japan_candidate_window_ParamLimits

0x1e1d,	// (0x0004aa1a) popup_fep_japan_candidate_window

0x1e47,	// (0x0004aa44) popup_fep_japan_predictive_window_ParamLimits

0x1e47,	// (0x0004aa44) popup_fep_japan_predictive_window

0xb2b4,	// (0x00053eb1) popup_find_window

0xb2d1,	// (0x00053ece) popup_grid_graphic_window_ParamLimits

0xb2d1,	// (0x00053ece) popup_grid_graphic_window

0x1eb8,	// (0x0004aab5) popup_large_graphic_colour_window

0xb375,	// (0x00053f72) popup_menu_window_ParamLimits

0xb375,	// (0x00053f72) popup_menu_window

0xb565,	// (0x00054162) popup_note_image_window

0xb525,	// (0x00054122) popup_note_wait_window_ParamLimits

0xb525,	// (0x00054122) popup_note_wait_window

0xb57d,	// (0x0005417a) popup_note_window_ParamLimits

0xb57d,	// (0x0005417a) popup_note_window

0xb62b,	// (0x00054228) popup_query_code_window_ParamLimits

0xb62b,	// (0x00054228) popup_query_code_window

0x2124,	// (0x0004ad21) popup_query_data_code_window_ParamLimits

0x2124,	// (0x0004ad21) popup_query_data_code_window

0xb66b,	// (0x00054268) popup_query_data_window_ParamLimits

0xb66b,	// (0x00054268) popup_query_data_window

0xb6ff,	// (0x000542fc) popup_query_sat_info_window_ParamLimits

0xb6ff,	// (0x000542fc) popup_query_sat_info_window

0xb7aa,	// (0x000543a7) popup_snote_single_graphic_window_ParamLimits

0xb7aa,	// (0x000543a7) popup_snote_single_graphic_window

0xb7aa,	// (0x000543a7) popup_snote_single_text_window_ParamLimits

0xb7aa,	// (0x000543a7) popup_snote_single_text_window

0x21bf,	// (0x0004adbc) popup_sub_window_general

0x2305,	// (0x0004af02) popup_window_general_ParamLimits

0x2305,	// (0x0004af02) popup_window_general

0x231e,	// (0x0004af1b) power_save_pane

0xaff6,	// (0x00053bf3) control_pane_g1_ParamLimits

0xaff6,	// (0x00053bf3) control_pane_g1

0xb01f,	// (0x00053c1c) control_pane_g2_ParamLimits

0xb01f,	// (0x00053c1c) control_pane_g2

0x07ae,	// (0x000493ab) control_pane_g3_ParamLimits

0x07ae,	// (0x000493ab) control_pane_g3

0x0007,

0xf793,	// (0x00058390) control_pane_g_ParamLimits

0xf793,	// (0x00058390) control_pane_g

0xb081,	// (0x00053c7e) control_pane_t1_ParamLimits

0xb081,	// (0x00053c7e) control_pane_t1

0xb0df,	// (0x00053cdc) control_pane_t2_ParamLimits

0xb0df,	// (0x00053cdc) control_pane_t2

0x0002,

0xf7a4,	// (0x000583a1) control_pane_t_ParamLimits

0xf7a4,	// (0x000583a1) control_pane_t

0x0681,	// (0x0004927e) navi_navi_volume_pane_cp1

0x068a,	// (0x00049287) status_small_icon_pane

0x0692,	// (0x0004928f) status_small_pane_g1_ParamLimits

0x0692,	// (0x0004928f) status_small_pane_g1

0x06c6,	// (0x000492c3) status_small_pane_g2_ParamLimits

0x06c6,	// (0x000492c3) status_small_pane_g2

0x06d2,	// (0x000492cf) status_small_pane_g3_ParamLimits

0x06d2,	// (0x000492cf) status_small_pane_g3

0x06de,	// (0x000492db) status_small_pane_g4_ParamLimits

0x06de,	// (0x000492db) status_small_pane_g4

0x06ea,	// (0x000492e7) status_small_pane_g5_ParamLimits

0x06ea,	// (0x000492e7) status_small_pane_g5

0x06f9,	// (0x000492f6) status_small_pane_g6_ParamLimits

0x06f9,	// (0x000492f6) status_small_pane_g6

0x0007,

0xf782,	// (0x0005837f) status_small_pane_g_ParamLimits

0xf782,	// (0x0005837f) status_small_pane_g

0x0729,	// (0x00049326) status_small_pane_t1

0x074c,	// (0x00049349) status_small_wait_pane_ParamLimits

0x074c,	// (0x00049349) status_small_wait_pane

0xad9d,	// (0x0005399a) aid_levels_signal_ParamLimits

0xad9d,	// (0x0005399a) aid_levels_signal

0xadb5,	// (0x000539b2) signal_pane_g1_ParamLimits

0xadb5,	// (0x000539b2) signal_pane_g1

0xadd0,	// (0x000539cd) signal_pane_g2_ParamLimits

0xadd0,	// (0x000539cd) signal_pane_g2

0x0003,

0xf713,	// (0x00058310) signal_pane_g_ParamLimits

0xf713,	// (0x00058310) signal_pane_g

0xc37a,	// (0x00054f77) context_pane_g1

0x9d03,	// (0x00052900) title_pane_g1

0x9d2e,	// (0x0005292b) title_pane_t1

0x6bf3,	// (0x0004f7f0) title_pane_t2

0x6c19,	// (0x0004f816) title_pane_t3

0x0002,

0xf55d,	// (0x0005815a) title_pane_t

0xc630,	// (0x0005522d) aid_levels_battery_ParamLimits

0xc630,	// (0x0005522d) aid_levels_battery

0xc64c,	// (0x00055249) battery_pane_g1_ParamLimits

0xc64c,	// (0x00055249) battery_pane_g1

0xc669,	// (0x00055266) battery_pane_g2_ParamLimits

0xc669,	// (0x00055266) battery_pane_g2

0x0001,

0xf7b6,	// (0x000583b3) battery_pane_g_ParamLimits

0xf7b6,	// (0x000583b3) battery_pane_g

0xc91f,	// (0x0005551c) uni_indicator_pane_g1

0xc936,	// (0x00055533) uni_indicator_pane_g2

0xc94c,	// (0x00055549) uni_indicator_pane_g3

0x0005,

0xf927,	// (0x00058524) uni_indicator_pane_g

0xe6e9,	// (0x000572e6) navi_icon_pane_ParamLimits

0xe6e9,	// (0x000572e6) navi_icon_pane

0xe66d,	// (0x0005726a) navi_midp_pane

0xe705,	// (0x00057302) navi_navi_pane

0xe70f,	// (0x0005730c) navi_text_pane_ParamLimits

0xe70f,	// (0x0005730c) navi_text_pane

0x6bc7,	// (0x0004f7c4) status_small_wait_pane_g1

0xa210,	// (0x00052e0d) status_small_wait_pane_g2

0x0001,

0xf922,	// (0x0005851f) status_small_wait_pane_g

0xc886,	// (0x00055483) navi_navi_icon_text_pane

0xc88e,	// (0x0005548b) navi_navi_pane_g1_ParamLimits

0xc88e,	// (0x0005548b) navi_navi_pane_g1

0xc8a0,	// (0x0005549d) navi_navi_pane_g2_ParamLimits

0xc8a0,	// (0x0005549d) navi_navi_pane_g2

0x0001,

0xf8f0,	// (0x000584ed) navi_navi_pane_g_ParamLimits

0xf8f0,	// (0x000584ed) navi_navi_pane_g

0x36e3,	// (0x0004c2e0) navi_navi_tabs_pane

0xc8b2,	// (0x000554af) navi_navi_text_pane

0xc886,	// (0x00055483) navi_navi_volume_pane

0xc874,	// (0x00055471) navi_text_pane_t1

0xc868,	// (0x00055465) navi_icon_pane_g1

0x35da,	// (0x0004c1d7) navi_navi_text_pane_t1

0xbd17,	// (0x00054914) navi_navi_volume_pane_g1

0xbd1f,	// (0x0005491c) volume_small_pane

0xc7b0,	// (0x000553ad) navi_navi_icon_text_pane_g1

0xc7b8,	// (0x000553b5) navi_navi_icon_text_pane_t1

0xe705,	// (0x00057302) navi_tabs_2_long_pane

0xe705,	// (0x00057302) navi_tabs_2_pane

0xe705,	// (0x00057302) navi_tabs_3_long_pane

0xe705,	// (0x00057302) navi_tabs_3_pane

0xe705,	// (0x00057302) navi_tabs_4_pane

0xbcf7,	// (0x000548f4) tabs_2_active_pane_ParamLimits

0xbcf7,	// (0x000548f4) tabs_2_active_pane

0xbd07,	// (0x00054904) tabs_2_passive_pane_ParamLimits

0xbd07,	// (0x00054904) tabs_2_passive_pane

0xbcc5,	// (0x000548c2) tabs_3_active_pane_ParamLimits

0xbcc5,	// (0x000548c2) tabs_3_active_pane

0xbcd5,	// (0x000548d2) tabs_3_passive_pane_ParamLimits

0xbcd5,	// (0x000548d2) tabs_3_passive_pane

0xbce6,	// (0x000548e3) tabs_3_passive_pane_cp_ParamLimits

0xbce6,	// (0x000548e3) tabs_3_passive_pane_cp

0xbc81,	// (0x0005487e) tabs_4_active_pane_ParamLimits

0xbc81,	// (0x0005487e) tabs_4_active_pane

0xbc92,	// (0x0005488f) tabs_4_passive_pane_ParamLimits

0xbc92,	// (0x0005488f) tabs_4_passive_pane

0xbca3,	// (0x000548a0) tabs_4_passive_pane_cp_ParamLimits

0xbca3,	// (0x000548a0) tabs_4_passive_pane_cp

0xbcb4,	// (0x000548b1) tabs_4_passive_pane_cp2_ParamLimits

0xbcb4,	// (0x000548b1) tabs_4_passive_pane_cp2

0xbc5d,	// (0x0005485a) tabs_2_long_active_pane_ParamLimits

0xbc5d,	// (0x0005485a) tabs_2_long_active_pane

0xbc6f,	// (0x0005486c) tabs_2_long_passive_pane_ParamLimits

0xbc6f,	// (0x0005486c) tabs_2_long_passive_pane

0xbc12,	// (0x0005480f) tabs_3_long_active_pane_ParamLimits

0xbc12,	// (0x0005480f) tabs_3_long_active_pane

0xbc2b,	// (0x00054828) tabs_3_long_passive_pane_ParamLimits

0xbc2b,	// (0x00054828) tabs_3_long_passive_pane

0xbc44,	// (0x00054841) tabs_3_long_passive_pane_cp_ParamLimits

0xbc44,	// (0x00054841) tabs_3_long_passive_pane_cp

0x0a38,	// (0x00049635) volume_small_pane_g1

0xbbc1,	// (0x000547be) volume_small_pane_g2

0xbbca,	// (0x000547c7) volume_small_pane_g3

0xbbd3,	// (0x000547d0) volume_small_pane_g4

0xbbdc,	// (0x000547d9) volume_small_pane_g5

0xbbe5,	// (0x000547e2) volume_small_pane_g6

0xbbee,	// (0x000547eb) volume_small_pane_g7

0xbbf7,	// (0x000547f4) volume_small_pane_g8

0xbc00,	// (0x000547fd) volume_small_pane_g9

0xbc09,	// (0x00054806) volume_small_pane_g10

0x0009,

0xf8bc,	// (0x000584b9) volume_small_pane_g

0x6c98,	// (0x0004f895) bg_active_tab_pane_cp2_ParamLimits

0x6c98,	// (0x0004f895) bg_active_tab_pane_cp2

0x9dba,	// (0x000529b7) tabs_3_active_pane_g1

0x9dc2,	// (0x000529bf) tabs_3_active_pane_t1

0x6c98,	// (0x0004f895) bg_passive_tab_pane_cp2_ParamLimits

0x6c98,	// (0x0004f895) bg_passive_tab_pane_cp2

0x9dba,	// (0x000529b7) tabs_3_passive_pane_g1

0x9dc2,	// (0x000529bf) tabs_3_passive_pane_t1

0x6c98,	// (0x0004f895) bg_active_tab_pane_cp3_ParamLimits

0x6c98,	// (0x0004f895) bg_active_tab_pane_cp3

0x9dd4,	// (0x000529d1) tabs_4_active_pane_g1

0x9ddc,	// (0x000529d9) tabs_4_active_pane_t1

0x6c98,	// (0x0004f895) bg_passive_tab_pane_cp3_ParamLimits

0x6c98,	// (0x0004f895) bg_passive_tab_pane_cp3

0x9dd4,	// (0x000529d1) tabs_4_1_passive_pane_g1

0x9ddc,	// (0x000529d9) tabs_4_1_passive_pane_t1

0x1cef,	// (0x0004a8ec) list_highlight_pane_cp2

0xc9e1,	// (0x000555de) list_set_pane_ParamLimits

0xc9e1,	// (0x000555de) list_set_pane

0xcaa9,	// (0x000556a6) main_pane_set_t1_ParamLimits

0xcaa9,	// (0x000556a6) main_pane_set_t1

0xcac9,	// (0x000556c6) main_pane_set_t2_ParamLimits

0xcac9,	// (0x000556c6) main_pane_set_t2

0xcadd,	// (0x000556da) main_pane_set_t3_ParamLimits

0xcadd,	// (0x000556da) main_pane_set_t3

0xcaf1,	// (0x000556ee) main_pane_set_t4_ParamLimits

0xcaf1,	// (0x000556ee) main_pane_set_t4

0x0003,

0xf98c,	// (0x00058589) main_pane_set_t_ParamLimits

0xf98c,	// (0x00058589) main_pane_set_t

0xcb05,	// (0x00055702) setting_code_pane

0x3d4e,	// (0x0004c94b) setting_slider_graphic_pane

0x3d4e,	// (0x0004c94b) setting_slider_pane

0x3d4e,	// (0x0004c94b) setting_text_pane

0x3d4e,	// (0x0004c94b) setting_volume_pane

0xf2eb,	// (0x00057ee8) volume_set_pane

0x6c2b,	// (0x0004f828) bg_set_opt_pane_cp

0xf2f5,	// (0x00057ef2) setting_slider_pane_t1

0xf30e,	// (0x00057f0b) setting_slider_pane_t2

0xf328,	// (0x00057f25) setting_slider_pane_t3

0x0002,

0xf564,	// (0x00058161) setting_slider_pane_t

0xf340,	// (0x00057f3d) slider_set_pane

0x6bd1,	// (0x0004f7ce) bg_set_opt_pane_cp2

0x6c39,	// (0x0004f836) setting_slider_graphic_pane_g1

0xf356,	// (0x00057f53) setting_slider_graphic_pane_t1

0xf366,	// (0x00057f63) setting_slider_graphic_pane_t2

0x0001,

0xf56b,	// (0x00058168) setting_slider_graphic_pane_t

0xf376,	// (0x00057f73) slider_set_pane_cp

0x6bd1,	// (0x0004f7ce) input_focus_pane_cp1

0x3be1,	// (0x0004c7de) list_set_text_pane

0x6bc7,	// (0x0004f7c4) setting_text_pane_g1

0x6bd1,	// (0x0004f7ce) input_focus_pane_cp2

0x6bc7,	// (0x0004f7c4) setting_code_pane_g1

0x6c42,	// (0x0004f83f) setting_code_pane_t1

0xe475,	// (0x00057072) set_text_pane_t1_ParamLimits

0xe475,	// (0x00057072) set_text_pane_t1

0xa71c,	// (0x00053319) set_opt_bg_pane_g1

0xa724,	// (0x00053321) set_opt_bg_pane_g2

0x3bb9,	// (0x0004c7b6) set_opt_bg_pane_g3

0xa734,	// (0x00053331) set_opt_bg_pane_g4

0xa73c,	// (0x00053339) set_opt_bg_pane_g5

0xa744,	// (0x00053341) set_opt_bg_pane_g6

0x3bc3,	// (0x0004c7c0) set_opt_bg_pane_g7

0x3bcd,	// (0x0004c7ca) set_opt_bg_pane_g8

0x3bd7,	// (0x0004c7d4) set_opt_bg_pane_g9

0x0008,

0xf979,	// (0x00058576) set_opt_bg_pane_g

0x3bac,	// (0x0004c7a9) slider_set_pane_g1

0x0c1c,	// (0x00049819) slider_set_pane_g2

0x0006,

0xf96a,	// (0x00058567) slider_set_pane_g

0x0ba4,	// (0x000497a1) volume_set_pane_g1

0x0bae,	// (0x000497ab) volume_set_pane_g2

0x0bb8,	// (0x000497b5) volume_set_pane_g3

0x0bc2,	// (0x000497bf) volume_set_pane_g4

0x0bcc,	// (0x000497c9) volume_set_pane_g5

0x0bd6,	// (0x000497d3) volume_set_pane_g6

0x0be0,	// (0x000497dd) volume_set_pane_g7

0x0bea,	// (0x000497e7) volume_set_pane_g8

0x0bf4,	// (0x000497f1) volume_set_pane_g9

0x0bfe,	// (0x000497fb) volume_set_pane_g10

0x0009,

0xf942,	// (0x0005853f) volume_set_pane_g

0x9dee,	// (0x000529eb) indicator_pane_ParamLimits

0x9dee,	// (0x000529eb) indicator_pane

0x9e1a,	// (0x00052a17) main_idle_pane_g2_ParamLimits

0x9e1a,	// (0x00052a17) main_idle_pane_g2

0x9e52,	// (0x00052a4f) main_pane_idle_g1_ParamLimits

0x9e52,	// (0x00052a4f) main_pane_idle_g1

0x6c50,	// (0x0004f84d) popup_clock_digital_analogue_window_ParamLimits

0x6c50,	// (0x0004f84d) popup_clock_digital_analogue_window

0x9e80,	// (0x00052a7d) soft_indicator_pane_ParamLimits

0x9e80,	// (0x00052a7d) soft_indicator_pane

0x9e9c,	// (0x00052a99) wallpaper_pane_ParamLimits

0x9e9c,	// (0x00052a99) wallpaper_pane

0x6bc7,	// (0x0004f7c4) wallpaper_pane_g1

0x9eae,	// (0x00052aab) indicator_pane_g1_ParamLimits

0x9eae,	// (0x00052aab) indicator_pane_g1

0x4008,	// (0x0004cc05) navi_navi_icon_text_pane_srt_g1

0x6c7e,	// (0x0004f87b) soft_indicator_pane_t1

0x9ec7,	// (0x00052ac4) aid_ps_area_pane

0x9ed8,	// (0x00052ad5) aid_ps_clock_pane

0x9ee6,	// (0x00052ae3) aid_ps_indicator_pane

0x9ef2,	// (0x00052aef) indicator_ps_pane_ParamLimits

0x9ef2,	// (0x00052aef) indicator_ps_pane

0x9f01,	// (0x00052afe) power_save_pane_g1_ParamLimits

0x9f01,	// (0x00052afe) power_save_pane_g1

0x9f0d,	// (0x00052b0a) power_save_pane_g2_ParamLimits

0x9f0d,	// (0x00052b0a) power_save_pane_g2

0xece2,	// (0x000578df) aid_navinavi_width_pane

0x9ec7,	// (0x00052ac4) aid_ps_area_pane_ParamLimits

0x0001,

0xf570,	// (0x0005816d) power_save_pane_g_ParamLimits

0xf570,	// (0x0005816d) power_save_pane_g

0x9f1b,	// (0x00052b18) power_save_pane_t1_ParamLimits

0x9f1b,	// (0x00052b18) power_save_pane_t1

0x9ed8,	// (0x00052ad5) aid_ps_clock_pane_ParamLimits

0x9ee6,	// (0x00052ae3) aid_ps_indicator_pane_ParamLimits

0x9f2d,	// (0x00052b2a) power_save_pane_t4_ParamLimits

0x9f2d,	// (0x00052b2a) power_save_pane_t4

0x0001,

0xf575,	// (0x00058172) power_save_pane_t_ParamLimits

0xf575,	// (0x00058172) power_save_pane_t

0x9f57,	// (0x00052b54) power_save_t3_ParamLimits

0x9f57,	// (0x00052b54) power_save_t3

0x9f42,	// (0x00052b3f) power_save_t2_ParamLimits

0x9f42,	// (0x00052b3f) power_save_t2

0x9f6c,	// (0x00052b69) indicator_ps_pane_g1

0x9f75,	// (0x00052b72) ai_gene_pane_ParamLimits

0x9f75,	// (0x00052b72) ai_gene_pane

0x9f8c,	// (0x00052b89) ai_links_pane_ParamLimits

0x9f8c,	// (0x00052b89) ai_links_pane

0x9fa4,	// (0x00052ba1) indicator_pane_cp1_ParamLimits

0x9fa4,	// (0x00052ba1) indicator_pane_cp1

0x9fb3,	// (0x00052bb0) main_pane_idle_g1_cp_ParamLimits

0x9fb3,	// (0x00052bb0) main_pane_idle_g1_cp

0x9fcb,	// (0x00052bc8) popup_ai_links_title_window

0x9fd4,	// (0x00052bd1) soft_indicator_pane_cp1_ParamLimits

0x9fd4,	// (0x00052bd1) soft_indicator_pane_cp1

0x3992,	// (0x0004c58f) ai_links_pane_g1

0x399b,	// (0x0004c598) grid_ai_links_pane

0xc916,	// (0x00055513) ai_gene_pane_1

0x3980,	// (0x0004c57d) ai_gene_pane_2

0x3989,	// (0x0004c586) list_highlight_pane_cp4

0xc8f2,	// (0x000554ef) cell_ai_link_pane_ParamLimits

0xc8f2,	// (0x000554ef) cell_ai_link_pane

0x394f,	// (0x0004c54c) cell_ai_link_pane_g1

0xa210,	// (0x00052e0d) cell_ai_link_pane_g2

0x0001,

0xf91d,	// (0x0005851a) cell_ai_link_pane_g

0x6bd1,	// (0x0004f7ce) grid_highlight_cp2

0x6bd1,	// (0x0004f7ce) bg_popup_sub_pane_cp1

0x9ff6,	// (0x00052bf3) popup_ai_links_title_window_t1

0x389b,	// (0x0004c498) ai_gene_pane_1_g1_ParamLimits

0x389b,	// (0x0004c498) ai_gene_pane_1_g1

0x38a7,	// (0x0004c4a4) ai_gene_pane_1_g2_ParamLimits

0x38a7,	// (0x0004c4a4) ai_gene_pane_1_g2

0x0001,

0xf913,	// (0x00058510) ai_gene_pane_1_g_ParamLimits

0xf913,	// (0x00058510) ai_gene_pane_1_g

0x38b4,	// (0x0004c4b1) ai_gene_pane_1_t1_ParamLimits

0x38b4,	// (0x0004c4b1) ai_gene_pane_1_t1

0x38e8,	// (0x0004c4e5) grid_ai_soft_ind_pane

0x3886,	// (0x0004c483) ai_gene_pane_2_t1_ParamLimits

0x3886,	// (0x0004c483) ai_gene_pane_2_t1

0xa005,	// (0x00052c02) main_pane_empty_t1_ParamLimits

0xa005,	// (0x00052c02) main_pane_empty_t1

0xa01d,	// (0x00052c1a) main_pane_empty_t2_ParamLimits

0xa01d,	// (0x00052c1a) main_pane_empty_t2

0xa032,	// (0x00052c2f) main_pane_empty_t3_ParamLimits

0xa032,	// (0x00052c2f) main_pane_empty_t3

0xa044,	// (0x00052c41) main_pane_empty_t4_ParamLimits

0xa044,	// (0x00052c41) main_pane_empty_t4

0xa056,	// (0x00052c53) main_pane_empty_t5_ParamLimits

0xa056,	// (0x00052c53) main_pane_empty_t5

0x0004,

0xf57a,	// (0x00058177) main_pane_empty_t_ParamLimits

0xf57a,	// (0x00058177) main_pane_empty_t

0xa76d,	// (0x0005336a) bg_popup_window_pane_ParamLimits

0xa76d,	// (0x0005336a) bg_popup_window_pane

0x35e8,	// (0x0004c1e5) find_popup_pane_cp2_ParamLimits

0x35e8,	// (0x0004c1e5) find_popup_pane_cp2

0x35f4,	// (0x0004c1f1) heading_pane_ParamLimits

0x35f4,	// (0x0004c1f1) heading_pane

0x6bd1,	// (0x0004f7ce) bg_popup_sub_pane

0xc7d5,	// (0x000553d2) bg_popup_window_pane_g1_ParamLimits

0xc7d5,	// (0x000553d2) bg_popup_window_pane_g1

0xc7e4,	// (0x000553e1) bg_popup_window_pane_g2_ParamLimits

0xc7e4,	// (0x000553e1) bg_popup_window_pane_g2

0xc7f0,	// (0x000553ed) bg_popup_window_pane_g3_ParamLimits

0xc7f0,	// (0x000553ed) bg_popup_window_pane_g3

0xc7fc,	// (0x000553f9) bg_popup_window_pane_g4_ParamLimits

0xc7fc,	// (0x000553f9) bg_popup_window_pane_g4

0xc80b,	// (0x00055408) bg_popup_window_pane_g5_ParamLimits

0xc80b,	// (0x00055408) bg_popup_window_pane_g5

0xc81b,	// (0x00055418) bg_popup_window_pane_g6_ParamLimits

0xc81b,	// (0x00055418) bg_popup_window_pane_g6

0xc827,	// (0x00055424) bg_popup_window_pane_g7_ParamLimits

0xc827,	// (0x00055424) bg_popup_window_pane_g7

0xc836,	// (0x00055433) bg_popup_window_pane_g8_ParamLimits

0xc836,	// (0x00055433) bg_popup_window_pane_g8

0xc845,	// (0x00055442) bg_popup_window_pane_g9_ParamLimits

0xc845,	// (0x00055442) bg_popup_window_pane_g9

0x35ce,	// (0x0004c1cb) bg_popup_window_pane_g10_ParamLimits

0x35ce,	// (0x0004c1cb) bg_popup_window_pane_g10

0x0009,

0xf8db,	// (0x000584d8) bg_popup_window_pane_g_ParamLimits

0xf8db,	// (0x000584d8) bg_popup_window_pane_g

0x34f7,	// (0x0004c0f4) bg_popup_heading_pane_ParamLimits

0x34f7,	// (0x0004c0f4) bg_popup_heading_pane

0x0ca2,	// (0x0004989f) tabs_4_passive_pane_cp_srt_ParamLimits

0x0ca2,	// (0x0004989f) tabs_4_passive_pane_cp_srt

0x0cb4,	// (0x000498b1) tabs_4_passive_pane_srt_ParamLimits

0x350b,	// (0x0004c108) heading_pane_g2

0x0cb4,	// (0x000498b1) tabs_4_passive_pane_srt

0x28a4,	// (0x0004b4a1) bg_passive_tab_pane_cp3_srt_ParamLimits

0x28a4,	// (0x0004b4a1) bg_passive_tab_pane_cp3_srt

0x3513,	// (0x0004c110) heading_pane_t1_ParamLimits

0x3513,	// (0x0004c110) heading_pane_t1

0x352a,	// (0x0004c127) heading_pane_t2_ParamLimits

0x352a,	// (0x0004c127) heading_pane_t2

0x0001,

0xf8d6,	// (0x000584d3) heading_pane_t_ParamLimits

0xf8d6,	// (0x000584d3) heading_pane_t

0x3022,	// (0x0004bc1f) bg_popup_heading_pane_g1

0x30d1,	// (0x0004bcce) bg_popup_heading_pane_g2

0x30db,	// (0x0004bcd8) bg_popup_heading_pane_g3

0x30e5,	// (0x0004bce2) bg_popup_heading_pane_g4

0x30ef,	// (0x0004bcec) bg_popup_heading_pane_g5

0x30f9,	// (0x0004bcf6) bg_popup_heading_pane_g6

0x3101,	// (0x0004bcfe) bg_popup_heading_pane_g7

0x3109,	// (0x0004bd06) bg_popup_heading_pane_g8

0x3113,	// (0x0004bd10) bg_popup_heading_pane_g9

0x0008,

0xf892,	// (0x0005848f) bg_popup_heading_pane_g

0x2830,	// (0x0004b42d) bg_popup_sub_pane_g1

0x2838,	// (0x0004b435) bg_popup_sub_pane_g2

0x2840,	// (0x0004b43d) bg_popup_sub_pane_g3

0x2848,	// (0x0004b445) bg_popup_sub_pane_g4

0x2850,	// (0x0004b44d) bg_popup_sub_pane_g5

0x2858,	// (0x0004b455) bg_popup_sub_pane_g6

0x2860,	// (0x0004b45d) bg_popup_sub_pane_g7

0x2868,	// (0x0004b465) bg_popup_sub_pane_g8

0x2870,	// (0x0004b46d) bg_popup_sub_pane_g9

0x0008,

0xf86c,	// (0x00058469) bg_popup_sub_pane_g

0x6c98,	// (0x0004f895) bg_popup_window_pane_cp5_ParamLimits

0x6c98,	// (0x0004f895) bg_popup_window_pane_cp5

0xa076,	// (0x00052c73) popup_note_window_g1_ParamLimits

0xa076,	// (0x00052c73) popup_note_window_g1

0xa082,	// (0x00052c7f) popup_note_window_t1_ParamLimits

0xa082,	// (0x00052c7f) popup_note_window_t1

0xa098,	// (0x00052c95) popup_note_window_t2_ParamLimits

0xa098,	// (0x00052c95) popup_note_window_t2

0xa0ae,	// (0x00052cab) popup_note_window_t3_ParamLimits

0xa0ae,	// (0x00052cab) popup_note_window_t3

0xa0c4,	// (0x00052cc1) popup_note_window_t4_ParamLimits

0xa0c4,	// (0x00052cc1) popup_note_window_t4

0xa0ec,	// (0x00052ce9) popup_note_window_t5_ParamLimits

0xa0ec,	// (0x00052ce9) popup_note_window_t5

0x0004,

0xf585,	// (0x00058182) popup_note_window_t_ParamLimits

0xf585,	// (0x00058182) popup_note_window_t

0xa110,	// (0x00052d0d) bg_popup_window_pane_cp6_ParamLimits

0xa110,	// (0x00052d0d) bg_popup_window_pane_cp6

0x2f9e,	// (0x0004bb9b) popup_note_image_window_g1_ParamLimits

0x2f9e,	// (0x0004bb9b) popup_note_image_window_g1

0x2faa,	// (0x0004bba7) popup_note_image_window_g2_ParamLimits

0x2faa,	// (0x0004bba7) popup_note_image_window_g2

0x0001,

0xf860,	// (0x0005845d) popup_note_image_window_g_ParamLimits

0xf860,	// (0x0005845d) popup_note_image_window_g

0x2fc3,	// (0x0004bbc0) popup_note_image_window_t1_ParamLimits

0x2fc3,	// (0x0004bbc0) popup_note_image_window_t1

0x2fdc,	// (0x0004bbd9) popup_note_image_window_t2_ParamLimits

0x2fdc,	// (0x0004bbd9) popup_note_image_window_t2

0x2ff5,	// (0x0004bbf2) popup_note_image_window_t3_ParamLimits

0x2ff5,	// (0x0004bbf2) popup_note_image_window_t3

0x0002,

0xf865,	// (0x00058462) popup_note_image_window_t_ParamLimits

0xf865,	// (0x00058462) popup_note_image_window_t

0x2e5e,	// (0x0004ba5b) bg_popup_window_pane_cp7_ParamLimits

0x2e5e,	// (0x0004ba5b) bg_popup_window_pane_cp7

0x2e8e,	// (0x0004ba8b) popup_note_wait_window_g1_ParamLimits

0x2e8e,	// (0x0004ba8b) popup_note_wait_window_g1

0x2e9a,	// (0x0004ba97) popup_note_wait_window_g2_ParamLimits

0x2e9a,	// (0x0004ba97) popup_note_wait_window_g2

0x0002,

0xf84e,	// (0x0005844b) popup_note_wait_window_g_ParamLimits

0xf84e,	// (0x0005844b) popup_note_wait_window_g

0x2eb2,	// (0x0004baaf) popup_note_wait_window_t1_ParamLimits

0x2eb2,	// (0x0004baaf) popup_note_wait_window_t1

0x2ed9,	// (0x0004bad6) popup_note_wait_window_t2_ParamLimits

0x2ed9,	// (0x0004bad6) popup_note_wait_window_t2

0x2ef7,	// (0x0004baf4) popup_note_wait_window_t3_ParamLimits

0x2ef7,	// (0x0004baf4) popup_note_wait_window_t3

0x2f0a,	// (0x0004bb07) popup_note_wait_window_t4_ParamLimits

0x2f0a,	// (0x0004bb07) popup_note_wait_window_t4

0x0004,

0xf855,	// (0x00058452) popup_note_wait_window_t_ParamLimits

0xf855,	// (0x00058452) popup_note_wait_window_t

0x2f2f,	// (0x0004bb2c) wait_bar_pane_ParamLimits

0x2f2f,	// (0x0004bb2c) wait_bar_pane

0x6bd1,	// (0x0004f7ce) wait_anim_pane

0x6bd1,	// (0x0004f7ce) wait_border_pane

0x6bc7,	// (0x0004f7c4) wait_anim_pane_g1

0x6bc7,	// (0x0004f7c4) wait_anim_pane_g2

0x0001,

0xf70e,	// (0x0005830b) wait_anim_pane_g

0x2e02,	// (0x0004b9ff) wait_border_pane_g1

0x2e0d,	// (0x0004ba0a) wait_border_pane_g2

0x2e16,	// (0x0004ba13) wait_border_pane_g3

0x0002,

0xf847,	// (0x00058444) wait_border_pane_g

0x2c6c,	// (0x0004b869) bg_popup_window_pane_cp16_ParamLimits

0x2c6c,	// (0x0004b869) bg_popup_window_pane_cp16

0x2d6c,	// (0x0004b969) indicator_popup_pane_cp4_ParamLimits

0x2d6c,	// (0x0004b969) indicator_popup_pane_cp4

0x2d80,	// (0x0004b97d) popup_query_data_window_t1_ParamLimits

0x2d80,	// (0x0004b97d) popup_query_data_window_t1

0x2d92,	// (0x0004b98f) popup_query_data_window_t2_ParamLimits

0x2d92,	// (0x0004b98f) popup_query_data_window_t2

0x2dab,	// (0x0004b9a8) popup_query_data_window_t3_ParamLimits

0x2dab,	// (0x0004b9a8) popup_query_data_window_t3

0x0002,

0xf840,	// (0x0005843d) popup_query_data_window_t_ParamLimits

0xf840,	// (0x0005843d) popup_query_data_window_t

0x2dc5,	// (0x0004b9c2) query_popup_data_pane_ParamLimits

0x2dc5,	// (0x0004b9c2) query_popup_data_pane

0x2dd9,	// (0x0004b9d6) query_popup_data_pane_cp1_ParamLimits

0x2dd9,	// (0x0004b9d6) query_popup_data_pane_cp1

0x2c6c,	// (0x0004b869) bg_popup_window_pane_cp10_ParamLimits

0x2c6c,	// (0x0004b869) bg_popup_window_pane_cp10

0x2c9e,	// (0x0004b89b) indicator_popup_pane_ParamLimits

0x2c9e,	// (0x0004b89b) indicator_popup_pane

0x2cc0,	// (0x0004b8bd) popup_query_code_window_t1_ParamLimits

0x2cc0,	// (0x0004b8bd) popup_query_code_window_t1

0x2cda,	// (0x0004b8d7) popup_query_code_window_t2_ParamLimits

0x2cda,	// (0x0004b8d7) popup_query_code_window_t2

0x2d23,	// (0x0004b920) popup_query_code_window_t3_ParamLimits

0x2d23,	// (0x0004b920) popup_query_code_window_t3

0x0002,

0xf839,	// (0x00058436) popup_query_code_window_t_ParamLimits

0xf839,	// (0x00058436) popup_query_code_window_t

0x2d52,	// (0x0004b94f) query_popup_pane_ParamLimits

0x2d52,	// (0x0004b94f) query_popup_pane

0xa110,	// (0x00052d0d) bg_popup_window_pane_cp15_ParamLimits

0xa110,	// (0x00052d0d) bg_popup_window_pane_cp15

0xa130,	// (0x00052d2d) indicator_popup_pane_cp1_ParamLimits

0xa130,	// (0x00052d2d) indicator_popup_pane_cp1

0xa143,	// (0x00052d40) indicator_popup_pane_cp2_ParamLimits

0xa143,	// (0x00052d40) indicator_popup_pane_cp2

0xa15e,	// (0x00052d5b) popup_query_data_code_window_g1_ParamLimits

0xa15e,	// (0x00052d5b) popup_query_data_code_window_g1

0xa171,	// (0x00052d6e) popup_query_data_code_window_t1_ParamLimits

0xa171,	// (0x00052d6e) popup_query_data_code_window_t1

0xa183,	// (0x00052d80) popup_query_data_code_window_t2_ParamLimits

0xa183,	// (0x00052d80) popup_query_data_code_window_t2

0xa195,	// (0x00052d92) popup_query_data_code_window_t3_ParamLimits

0xa195,	// (0x00052d92) popup_query_data_code_window_t3

0xa1ab,	// (0x00052da8) popup_query_data_code_window_t4_ParamLimits

0xa1ab,	// (0x00052da8) popup_query_data_code_window_t4

0x0003,

0xf590,	// (0x0005818d) popup_query_data_code_window_t_ParamLimits

0xf590,	// (0x0005818d) popup_query_data_code_window_t

0xe6b9,	// (0x000572b6) list_single_midp_graphic_pane_g3

0xa1c5,	// (0x00052dc2) query_popup_data_pane_cp2_ParamLimits

0xa1d8,	// (0x00052dd5) query_popup_pane_cp2_ParamLimits

0xa1d8,	// (0x00052dd5) query_popup_pane_cp2

0x6bd1,	// (0x0004f7ce) bg_popup_window_pane_cp11

0x2c64,	// (0x0004b861) heading_pane_cp5

0xa2c8,	// (0x00052ec5) listscroll_popup_info_pane

0x6bd1,	// (0x0004f7ce) input_focus_pane_cp3

0xa1f3,	// (0x00052df0) query_popup_pane_t1

0xa201,	// (0x00052dfe) list_popup_info_pane_ParamLimits

0xa201,	// (0x00052dfe) list_popup_info_pane

0xa210,	// (0x00052e0d) listscroll_popup_info_pane_g1

0xa218,	// (0x00052e15) scroll_pane_cp7

0xa222,	// (0x00052e1f) popup_info_list_pane_t1_ParamLimits

0xa222,	// (0x00052e1f) popup_info_list_pane_t1

0xa23c,	// (0x00052e39) popup_info_list_pane_t2_ParamLimits

0xa23c,	// (0x00052e39) popup_info_list_pane_t2

0x0001,

0xf599,	// (0x00058196) popup_info_list_pane_t_ParamLimits

0xf599,	// (0x00058196) popup_info_list_pane_t

0x6bd1,	// (0x0004f7ce) bg_popup_window_pane_cp12

0x4022,	// (0x0004cc1f) find_popup_pane

0x6c2b,	// (0x0004f828) bg_popup_window_pane_cp3

0xa256,	// (0x00052e53) heading_pane_cp3

0xa262,	// (0x00052e5f) listscroll_popup_graphic_pane

0x6bd1,	// (0x0004f7ce) bg_popup_window_pane_cp4

0xa2be,	// (0x00052ebb) heading_pane_cp4

0xa2c8,	// (0x00052ec5) listscroll_popup_colour_pane

0xa2d0,	// (0x00052ecd) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xa2d0,	// (0x00052ecd) cell_large_graphic_colour_none_popup_pane

0xa2e4,	// (0x00052ee1) grid_large_graphic_colour_popup_pane_ParamLimits

0xa2e4,	// (0x00052ee1) grid_large_graphic_colour_popup_pane

0xa308,	// (0x00052f05) listscroll_popup_colour_pane_g1_ParamLimits

0xa308,	// (0x00052f05) listscroll_popup_colour_pane_g1

0xa31f,	// (0x00052f1c) listscroll_popup_colour_pane_g2_ParamLimits

0xa31f,	// (0x00052f1c) listscroll_popup_colour_pane_g2

0xa336,	// (0x00052f33) listscroll_popup_colour_pane_g3_ParamLimits

0xa336,	// (0x00052f33) listscroll_popup_colour_pane_g3

0xa346,	// (0x00052f43) listscroll_popup_colour_pane_g4_ParamLimits

0xa346,	// (0x00052f43) listscroll_popup_colour_pane_g4

0x0003,

0xf59e,	// (0x0005819b) listscroll_popup_colour_pane_g_ParamLimits

0xf59e,	// (0x0005819b) listscroll_popup_colour_pane_g

0xa356,	// (0x00052f53) scroll_pane_cp6_ParamLimits

0xa356,	// (0x00052f53) scroll_pane_cp6

0xa368,	// (0x00052f65) cell_large_graphic_colour_popup_pane_ParamLimits

0xa368,	// (0x00052f65) cell_large_graphic_colour_popup_pane

0xa389,	// (0x00052f86) cell_large_graphic_colour_none_popup_pane_t1

0x6bd1,	// (0x0004f7ce) grid_highlight_pane_cp5

0xa398,	// (0x00052f95) cell_large_graphic_colour_popup_pane_g1

0xa3a0,	// (0x00052f9d) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a7,	// (0x000581a4) cell_large_graphic_colour_popup_pane_g

0xa3a8,	// (0x00052fa5) cell_large_graphic_colour_popup_pane_g2_copy1

0xa3b1,	// (0x00052fae) grid_highlight_pane_cp4

0xa3b9,	// (0x00052fb6) bg_popup_window_pane_cp8_ParamLimits

0xa3b9,	// (0x00052fb6) bg_popup_window_pane_cp8

0xa3d4,	// (0x00052fd1) popup_snote_single_text_window_g1_ParamLimits

0xa3d4,	// (0x00052fd1) popup_snote_single_text_window_g1

0xa3e6,	// (0x00052fe3) popup_snote_single_text_window_t1_ParamLimits

0xa3e6,	// (0x00052fe3) popup_snote_single_text_window_t1

0xa3f9,	// (0x00052ff6) popup_snote_single_text_window_t2_ParamLimits

0xa3f9,	// (0x00052ff6) popup_snote_single_text_window_t2

0xa40c,	// (0x00053009) popup_snote_single_text_window_t3_ParamLimits

0xa40c,	// (0x00053009) popup_snote_single_text_window_t3

0xa445,	// (0x00053042) popup_snote_single_text_window_t4_ParamLimits

0xa445,	// (0x00053042) popup_snote_single_text_window_t4

0xa479,	// (0x00053076) popup_snote_single_text_window_t5_ParamLimits

0xa479,	// (0x00053076) popup_snote_single_text_window_t5

0x0004,

0xf5ac,	// (0x000581a9) popup_snote_single_text_window_t_ParamLimits

0xf5ac,	// (0x000581a9) popup_snote_single_text_window_t

0xa4a8,	// (0x000530a5) bg_popup_window_pane_cp9_ParamLimits

0xa4a8,	// (0x000530a5) bg_popup_window_pane_cp9

0xa3d4,	// (0x00052fd1) popup_snote_single_graphic_window_g1_ParamLimits

0xa3d4,	// (0x00052fd1) popup_snote_single_graphic_window_g1

0xa4b6,	// (0x000530b3) popup_snote_single_graphic_window_g2_ParamLimits

0xa4b6,	// (0x000530b3) popup_snote_single_graphic_window_g2

0x0001,

0xf5b7,	// (0x000581b4) popup_snote_single_graphic_window_g_ParamLimits

0xf5b7,	// (0x000581b4) popup_snote_single_graphic_window_g

0xa4c2,	// (0x000530bf) popup_snote_single_graphic_window_t1_ParamLimits

0xa4c2,	// (0x000530bf) popup_snote_single_graphic_window_t1

0xa4d5,	// (0x000530d2) popup_snote_single_graphic_window_t2_ParamLimits

0xa4d5,	// (0x000530d2) popup_snote_single_graphic_window_t2

0xa4e8,	// (0x000530e5) popup_snote_single_graphic_window_t3_ParamLimits

0xa4e8,	// (0x000530e5) popup_snote_single_graphic_window_t3

0xa521,	// (0x0005311e) popup_snote_single_graphic_window_t4_ParamLimits

0xa521,	// (0x0005311e) popup_snote_single_graphic_window_t4

0xa555,	// (0x00053152) popup_snote_single_graphic_window_t5_ParamLimits

0xa555,	// (0x00053152) popup_snote_single_graphic_window_t5

0x0004,

0xf5bc,	// (0x000581b9) popup_snote_single_graphic_window_t_ParamLimits

0xf5bc,	// (0x000581b9) popup_snote_single_graphic_window_t

0x3f60,	// (0x0004cb5d) grid_graphic_popup_pane_ParamLimits

0x3f60,	// (0x0004cb5d) grid_graphic_popup_pane

0x3f8e,	// (0x0004cb8b) listscroll_popup_graphic_pane_g1_ParamLimits

0x3f8e,	// (0x0004cb8b) listscroll_popup_graphic_pane_g1

0xcc0a,	// (0x00055807) listscroll_popup_graphic_pane_g2_ParamLimits

0xcc0a,	// (0x00055807) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b6,	// (0x000585b3) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b6,	// (0x000585b3) listscroll_popup_graphic_pane_g

0x3fb6,	// (0x0004cbb3) scroll_pane_cp5

0xcbc9,	// (0x000557c6) cell_graphic_popup_pane_ParamLimits

0xcbc9,	// (0x000557c6) cell_graphic_popup_pane

0x3ee9,	// (0x0004cae6) cell_graphic_popup_pane_g1

0x3ef1,	// (0x0004caee) cell_graphic_popup_pane_g2

0xa3a8,	// (0x00052fa5) cell_graphic_popup_pane_g3

0x0002,

0xf9af,	// (0x000585ac) cell_graphic_popup_pane_g

0x3efa,	// (0x0004caf7) cell_graphic_popup_pane_t2

0xa3b1,	// (0x00052fae) grid_highlight_pane_cp3

0xa596,	// (0x00053193) list_gen_pane_ParamLimits

0xa596,	// (0x00053193) list_gen_pane

0xa5c8,	// (0x000531c5) scroll_pane

0xcb80,	// (0x0005577d) bg_list_pane_g1_ParamLimits

0xcb80,	// (0x0005577d) bg_list_pane_g1

0x3e5e,	// (0x0004ca5b) bg_list_pane_g2_ParamLimits

0x3e5e,	// (0x0004ca5b) bg_list_pane_g2

0x3e73,	// (0x0004ca70) bg_list_pane_g3_ParamLimits

0x3e73,	// (0x0004ca70) bg_list_pane_g3

0x3e87,	// (0x0004ca84) bg_list_pane_g4_ParamLimits

0x3e87,	// (0x0004ca84) bg_list_pane_g4

0xcb9d,	// (0x0005579a) bg_list_pane_g5_ParamLimits

0xcb9d,	// (0x0005579a) bg_list_pane_g5

0x0004,

0xf9a4,	// (0x000585a1) bg_list_pane_g_ParamLimits

0xf9a4,	// (0x000585a1) bg_list_pane_g

0xcb43,	// (0x00055740) list_double2_graphic_large_graphic_pane_ParamLimits

0xcb43,	// (0x00055740) list_double2_graphic_large_graphic_pane

0xcb43,	// (0x00055740) list_double2_graphic_pane_ParamLimits

0xcb43,	// (0x00055740) list_double2_graphic_pane

0xcb43,	// (0x00055740) list_double2_large_graphic_pane_ParamLimits

0xcb43,	// (0x00055740) list_double2_large_graphic_pane

0xcb43,	// (0x00055740) list_double2_pane_ParamLimits

0xcb43,	// (0x00055740) list_double2_pane

0xcb43,	// (0x00055740) list_double_graphic_heading_pane_ParamLimits

0xcb43,	// (0x00055740) list_double_graphic_heading_pane

0xcb43,	// (0x00055740) list_double_graphic_pane_ParamLimits

0xcb43,	// (0x00055740) list_double_graphic_pane

0xcb43,	// (0x00055740) list_double_heading_pane_ParamLimits

0xcb43,	// (0x00055740) list_double_heading_pane

0xcb43,	// (0x00055740) list_double_large_graphic_pane_ParamLimits

0xcb43,	// (0x00055740) list_double_large_graphic_pane

0xcb43,	// (0x00055740) list_double_number_pane_ParamLimits

0xcb43,	// (0x00055740) list_double_number_pane

0xcb43,	// (0x00055740) list_double_pane_ParamLimits

0xcb43,	// (0x00055740) list_double_pane

0xcb43,	// (0x00055740) list_double_time_pane_ParamLimits

0xcb43,	// (0x00055740) list_double_time_pane

0xcb43,	// (0x00055740) list_setting_number_pane_ParamLimits

0xcb43,	// (0x00055740) list_setting_number_pane

0xcb43,	// (0x00055740) list_setting_pane_ParamLimits

0xcb43,	// (0x00055740) list_setting_pane

0xcb57,	// (0x00055754) list_single_2graphic_pane_ParamLimits

0xcb57,	// (0x00055754) list_single_2graphic_pane

0xcb57,	// (0x00055754) list_single_graphic_heading_pane_ParamLimits

0xcb57,	// (0x00055754) list_single_graphic_heading_pane

0xcb57,	// (0x00055754) list_single_graphic_pane_ParamLimits

0xcb57,	// (0x00055754) list_single_graphic_pane

0xcb57,	// (0x00055754) list_single_heading_pane_ParamLimits

0xcb57,	// (0x00055754) list_single_heading_pane

0xcb57,	// (0x00055754) list_single_large_graphic_pane_ParamLimits

0xcb57,	// (0x00055754) list_single_large_graphic_pane

0xcb57,	// (0x00055754) list_single_number_heading_pane_ParamLimits

0xcb57,	// (0x00055754) list_single_number_heading_pane

0xcb57,	// (0x00055754) list_single_number_pane_ParamLimits

0xcb57,	// (0x00055754) list_single_number_pane

0xcb57,	// (0x00055754) list_single_pane_ParamLimits

0xcb57,	// (0x00055754) list_single_pane

0x6bd1,	// (0x0004f7ce) list_highlight_pane_cp1

0xe48e,	// (0x0005708b) list_single_pane_g1_ParamLimits

0xe48e,	// (0x0005708b) list_single_pane_g1

0x090f,	// (0x0004950c) list_single_pane_g2_ParamLimits

0x090f,	// (0x0004950c) list_single_pane_g2

0x0001,

0xf5d8,	// (0x000581d5) list_single_pane_g_ParamLimits

0xf5d8,	// (0x000581d5) list_single_pane_g

0xeec3,	// (0x00057ac0) list_single_pane_t1_ParamLimits

0xeec3,	// (0x00057ac0) list_single_pane_t1

0xe48e,	// (0x0005708b) list_single_number_pane_g1_ParamLimits

0xe48e,	// (0x0005708b) list_single_number_pane_g1

0x090f,	// (0x0004950c) list_single_number_pane_g2_ParamLimits

0x090f,	// (0x0004950c) list_single_number_pane_g2

0x0001,

0xf5d8,	// (0x000581d5) list_single_number_pane_g_ParamLimits

0xf5d8,	// (0x000581d5) list_single_number_pane_g

0xe91b,	// (0x00057518) list_single_number_pane_t1_ParamLimits

0xe91b,	// (0x00057518) list_single_number_pane_t1

0x992f,	// (0x0005252c) list_single_number_pane_t2_ParamLimits

0x992f,	// (0x0005252c) list_single_number_pane_t2

0x0001,

0xf965,	// (0x00058562) list_single_number_pane_t_ParamLimits

0xf965,	// (0x00058562) list_single_number_pane_t

0x92f2,	// (0x00051eef) list_single_graphic_pane_g1_ParamLimits

0x92f2,	// (0x00051eef) list_single_graphic_pane_g1

0xe48e,	// (0x0005708b) list_single_graphic_pane_g2_ParamLimits

0xe48e,	// (0x0005708b) list_single_graphic_pane_g2

0x090f,	// (0x0004950c) list_single_graphic_pane_g3_ParamLimits

0x090f,	// (0x0004950c) list_single_graphic_pane_g3

0x0002,

0xf5c7,	// (0x000581c4) list_single_graphic_pane_g_ParamLimits

0xf5c7,	// (0x000581c4) list_single_graphic_pane_g

0x92fe,	// (0x00051efb) list_single_graphic_pane_t1_ParamLimits

0x92fe,	// (0x00051efb) list_single_graphic_pane_t1

0x9314,	// (0x00051f11) list_single_heading_pane_g1_ParamLimits

0x9314,	// (0x00051f11) list_single_heading_pane_g1

0x090f,	// (0x0004950c) list_single_heading_pane_g2_ParamLimits

0x090f,	// (0x0004950c) list_single_heading_pane_g2

0x0001,

0xf5ce,	// (0x000581cb) list_single_heading_pane_g_ParamLimits

0xf5ce,	// (0x000581cb) list_single_heading_pane_g

0x9327,	// (0x00051f24) list_single_heading_pane_t1_ParamLimits

0x9327,	// (0x00051f24) list_single_heading_pane_t1

0xa5fc,	// (0x000531f9) list_single_heading_pane_t2_ParamLimits

0xa5fc,	// (0x000531f9) list_single_heading_pane_t2

0x0001,

0xf5d3,	// (0x000581d0) list_single_heading_pane_t_ParamLimits

0xf5d3,	// (0x000581d0) list_single_heading_pane_t

0xe48e,	// (0x0005708b) list_single_number_heading_pane_g1_ParamLimits

0xe48e,	// (0x0005708b) list_single_number_heading_pane_g1

0x090f,	// (0x0004950c) list_single_number_heading_pane_g2_ParamLimits

0x090f,	// (0x0004950c) list_single_number_heading_pane_g2

0x0001,

0xf5d8,	// (0x000581d5) list_single_number_heading_pane_g_ParamLimits

0xf5d8,	// (0x000581d5) list_single_number_heading_pane_g

0xee9b,	// (0x00057a98) list_single_number_heading_pane_t1_ParamLimits

0xee9b,	// (0x00057a98) list_single_number_heading_pane_t1

0x933d,	// (0x00051f3a) list_single_number_heading_pane_t2_ParamLimits

0x933d,	// (0x00051f3a) list_single_number_heading_pane_t2

0xeeb1,	// (0x00057aae) list_single_number_heading_pane_t3_ParamLimits

0xeeb1,	// (0x00057aae) list_single_number_heading_pane_t3

0x0002,

0xf5dd,	// (0x000581da) list_single_number_heading_pane_t_ParamLimits

0xf5dd,	// (0x000581da) list_single_number_heading_pane_t

0x934f,	// (0x00051f4c) list_single_graphic_heading_pane_g1_ParamLimits

0x934f,	// (0x00051f4c) list_single_graphic_heading_pane_g1

0xa60e,	// (0x0005320b) list_single_graphic_heading_pane_g4_ParamLimits

0xa60e,	// (0x0005320b) list_single_graphic_heading_pane_g4

0x090f,	// (0x0004950c) list_single_graphic_heading_pane_g5_ParamLimits

0x090f,	// (0x0004950c) list_single_graphic_heading_pane_g5

0x0002,

0xf5e4,	// (0x000581e1) list_single_graphic_heading_pane_g_ParamLimits

0xf5e4,	// (0x000581e1) list_single_graphic_heading_pane_g

0xee9b,	// (0x00057a98) list_single_graphic_heading_pane_t1_ParamLimits

0xee9b,	// (0x00057a98) list_single_graphic_heading_pane_t1

0x9367,	// (0x00051f64) list_single_graphic_heading_pane_t2_ParamLimits

0x9367,	// (0x00051f64) list_single_graphic_heading_pane_t2

0x0001,

0xf5eb,	// (0x000581e8) list_single_graphic_heading_pane_t_ParamLimits

0xf5eb,	// (0x000581e8) list_single_graphic_heading_pane_t

0x0d5f,	// (0x0004995c) list_single_large_graphic_pane_g1_ParamLimits

0x0d5f,	// (0x0004995c) list_single_large_graphic_pane_g1

0xe48e,	// (0x0005708b) list_single_large_graphic_pane_g2_ParamLimits

0xe48e,	// (0x0005708b) list_single_large_graphic_pane_g2

0x090f,	// (0x0004950c) list_single_large_graphic_pane_g3_ParamLimits

0x090f,	// (0x0004950c) list_single_large_graphic_pane_g3

0x0002,

0xf5f0,	// (0x000581ed) list_single_large_graphic_pane_g_ParamLimits

0xf5f0,	// (0x000581ed) list_single_large_graphic_pane_g

0x2e0d,	// (0x0004ba0a) wait_border_pane_g2_copy1

0xa61f,	// (0x0005321c) list_single_large_graphic_pane_g4_cp2

0xee9b,	// (0x00057a98) list_single_large_graphic_pane_t1_ParamLimits

0xee9b,	// (0x00057a98) list_single_large_graphic_pane_t1

0x549b,	// (0x0004e098) list_double_pane_g1_ParamLimits

0x549b,	// (0x0004e098) list_double_pane_g1

0xa627,	// (0x00053224) list_double_pane_g2_ParamLimits

0xa627,	// (0x00053224) list_double_pane_g2

0x0001,

0xf5f7,	// (0x000581f4) list_double_pane_g_ParamLimits

0xf5f7,	// (0x000581f4) list_double_pane_g

0x937f,	// (0x00051f7c) list_double_pane_t1_ParamLimits

0x937f,	// (0x00051f7c) list_double_pane_t1

0x9395,	// (0x00051f92) list_double_pane_t2_ParamLimits

0x9395,	// (0x00051f92) list_double_pane_t2

0x0001,

0xf5fc,	// (0x000581f9) list_double_pane_t_ParamLimits

0xf5fc,	// (0x000581f9) list_double_pane_t

0x93a7,	// (0x00051fa4) list_double2_pane_g1_ParamLimits

0x93a7,	// (0x00051fa4) list_double2_pane_g1

0x93b8,	// (0x00051fb5) list_double2_pane_g2_ParamLimits

0x93b8,	// (0x00051fb5) list_double2_pane_g2

0x0001,

0xf601,	// (0x000581fe) list_double2_pane_g_ParamLimits

0xf601,	// (0x000581fe) list_double2_pane_g

0x93c4,	// (0x00051fc1) list_double2_pane_t1_ParamLimits

0x93c4,	// (0x00051fc1) list_double2_pane_t1

0x93da,	// (0x00051fd7) list_double2_pane_t2_ParamLimits

0x93da,	// (0x00051fd7) list_double2_pane_t2

0x0001,

0xf606,	// (0x00058203) list_double2_pane_t_ParamLimits

0xf606,	// (0x00058203) list_double2_pane_t

0x549b,	// (0x0004e098) list_double_number_pane_g1_ParamLimits

0x549b,	// (0x0004e098) list_double_number_pane_g1

0xa627,	// (0x00053224) list_double_number_pane_g2_ParamLimits

0xa627,	// (0x00053224) list_double_number_pane_g2

0x0001,

0xf5f7,	// (0x000581f4) list_double_number_pane_g_ParamLimits

0xf5f7,	// (0x000581f4) list_double_number_pane_g

0x93ec,	// (0x00051fe9) list_double_number_pane_t1_ParamLimits

0x93ec,	// (0x00051fe9) list_double_number_pane_t1

0x93fe,	// (0x00051ffb) list_double_number_pane_t2_ParamLimits

0x93fe,	// (0x00051ffb) list_double_number_pane_t2

0x9414,	// (0x00052011) list_double_number_pane_t3_ParamLimits

0x9414,	// (0x00052011) list_double_number_pane_t3

0x0002,

0xf60b,	// (0x00058208) list_double_number_pane_t_ParamLimits

0xf60b,	// (0x00058208) list_double_number_pane_t

0x9426,	// (0x00052023) list_double_graphic_pane_g1_ParamLimits

0x9426,	// (0x00052023) list_double_graphic_pane_g1

0x9432,	// (0x0005202f) list_double_graphic_pane_g2_ParamLimits

0x9432,	// (0x0005202f) list_double_graphic_pane_g2

0x9441,	// (0x0005203e) list_double_graphic_pane_g3_ParamLimits

0x9441,	// (0x0005203e) list_double_graphic_pane_g3

0x0003,

0xf612,	// (0x0005820f) list_double_graphic_pane_g_ParamLimits

0xf612,	// (0x0005820f) list_double_graphic_pane_g

0x9459,	// (0x00052056) list_double_graphic_pane_t1_ParamLimits

0x9459,	// (0x00052056) list_double_graphic_pane_t1

0x946f,	// (0x0005206c) list_double_graphic_pane_t2_ParamLimits

0x946f,	// (0x0005206c) list_double_graphic_pane_t2

0x0001,

0xf61b,	// (0x00058218) list_double_graphic_pane_t_ParamLimits

0xf61b,	// (0x00058218) list_double_graphic_pane_t

0x9481,	// (0x0005207e) list_double2_graphic_pane_g1_ParamLimits

0x9481,	// (0x0005207e) list_double2_graphic_pane_g1

0xa633,	// (0x00053230) list_double2_graphic_pane_g2_ParamLimits

0xa633,	// (0x00053230) list_double2_graphic_pane_g2

0xa63f,	// (0x0005323c) list_double2_graphic_pane_g3_ParamLimits

0xa63f,	// (0x0005323c) list_double2_graphic_pane_g3

0x0002,

0xf620,	// (0x0005821d) list_double2_graphic_pane_g_ParamLimits

0xf620,	// (0x0005821d) list_double2_graphic_pane_g

0x948d,	// (0x0005208a) list_double2_graphic_pane_t1_ParamLimits

0x948d,	// (0x0005208a) list_double2_graphic_pane_t1

0x94a3,	// (0x000520a0) list_double2_graphic_pane_t2_ParamLimits

0x94a3,	// (0x000520a0) list_double2_graphic_pane_t2

0x0001,

0xf627,	// (0x00058224) list_double2_graphic_pane_t_ParamLimits

0xf627,	// (0x00058224) list_double2_graphic_pane_t

0x94b5,	// (0x000520b2) list_double_large_graphic_pane_g1_ParamLimits

0x94b5,	// (0x000520b2) list_double_large_graphic_pane_g1

0x94e0,	// (0x000520dd) list_double_large_graphic_pane_g2_ParamLimits

0x94e0,	// (0x000520dd) list_double_large_graphic_pane_g2

0xa627,	// (0x00053224) list_double_large_graphic_pane_g3_ParamLimits

0xa627,	// (0x00053224) list_double_large_graphic_pane_g3

0x94f6,	// (0x000520f3) list_double_large_graphic_pane_g4_ParamLimits

0x94f6,	// (0x000520f3) list_double_large_graphic_pane_g4

0x0004,

0xf62c,	// (0x00058229) list_double_large_graphic_pane_g_ParamLimits

0xf62c,	// (0x00058229) list_double_large_graphic_pane_g

0x9509,	// (0x00052106) list_double_large_graphic_pane_t1_ParamLimits

0x9509,	// (0x00052106) list_double_large_graphic_pane_t1

0x9522,	// (0x0005211f) list_double_large_graphic_pane_t2_ParamLimits

0x9522,	// (0x0005211f) list_double_large_graphic_pane_t2

0x0001,

0xf637,	// (0x00058234) list_double_large_graphic_pane_t_ParamLimits

0xf637,	// (0x00058234) list_double_large_graphic_pane_t

0xa64b,	// (0x00053248) list_double2_large_graphic_pane_g1_ParamLimits

0xa64b,	// (0x00053248) list_double2_large_graphic_pane_g1

0xa657,	// (0x00053254) list_double2_large_graphic_pane_g2_ParamLimits

0xa657,	// (0x00053254) list_double2_large_graphic_pane_g2

0xa63f,	// (0x0005323c) list_double2_large_graphic_pane_g3_ParamLimits

0xa63f,	// (0x0005323c) list_double2_large_graphic_pane_g3

0x0002,

0xf63c,	// (0x00058239) list_double2_large_graphic_pane_g_ParamLimits

0xf63c,	// (0x00058239) list_double2_large_graphic_pane_g

0x9534,	// (0x00052131) list_double2_large_graphic_pane_t1_ParamLimits

0x9534,	// (0x00052131) list_double2_large_graphic_pane_t1

0x954a,	// (0x00052147) list_double2_large_graphic_pane_t2_ParamLimits

0x954a,	// (0x00052147) list_double2_large_graphic_pane_t2

0x0001,

0xf643,	// (0x00058240) list_double2_large_graphic_pane_t_ParamLimits

0xf643,	// (0x00058240) list_double2_large_graphic_pane_t

0x955c,	// (0x00052159) list_double_heading_pane_g1_ParamLimits

0x955c,	// (0x00052159) list_double_heading_pane_g1

0x956d,	// (0x0005216a) list_double_heading_pane_g2_ParamLimits

0x956d,	// (0x0005216a) list_double_heading_pane_g2

0x0001,

0xf648,	// (0x00058245) list_double_heading_pane_g_ParamLimits

0xf648,	// (0x00058245) list_double_heading_pane_g

0x9579,	// (0x00052176) list_double_heading_pane_t1_ParamLimits

0x9579,	// (0x00052176) list_double_heading_pane_t1

0x958f,	// (0x0005218c) list_double_heading_pane_t2_ParamLimits

0x958f,	// (0x0005218c) list_double_heading_pane_t2

0x0001,

0xf64d,	// (0x0005824a) list_double_heading_pane_t_ParamLimits

0xf64d,	// (0x0005824a) list_double_heading_pane_t

0xe49a,	// (0x00057097) list_double_graphic_heading_pane_g1_ParamLimits

0xe49a,	// (0x00057097) list_double_graphic_heading_pane_g1

0x955c,	// (0x00052159) list_double_graphic_heading_pane_g2_ParamLimits

0x955c,	// (0x00052159) list_double_graphic_heading_pane_g2

0x956d,	// (0x0005216a) list_double_graphic_heading_pane_g3_ParamLimits

0x956d,	// (0x0005216a) list_double_graphic_heading_pane_g3

0x0002,

0xf652,	// (0x0005824f) list_double_graphic_heading_pane_g_ParamLimits

0xf652,	// (0x0005824f) list_double_graphic_heading_pane_g

0x95a1,	// (0x0005219e) list_double_graphic_heading_pane_t1_ParamLimits

0x95a1,	// (0x0005219e) list_double_graphic_heading_pane_t1

0x95b7,	// (0x000521b4) list_double_graphic_heading_pane_t2_ParamLimits

0x95b7,	// (0x000521b4) list_double_graphic_heading_pane_t2

0x0001,

0xf659,	// (0x00058256) list_double_graphic_heading_pane_t_ParamLimits

0xf659,	// (0x00058256) list_double_graphic_heading_pane_t

0x95c9,	// (0x000521c6) list_double_time_pane_g1_ParamLimits

0x95c9,	// (0x000521c6) list_double_time_pane_g1

0x95da,	// (0x000521d7) list_double_time_pane_g2_ParamLimits

0x95da,	// (0x000521d7) list_double_time_pane_g2

0x0001,

0xf65e,	// (0x0005825b) list_double_time_pane_g_ParamLimits

0xf65e,	// (0x0005825b) list_double_time_pane_g

0x95e6,	// (0x000521e3) list_double_time_pane_t1_ParamLimits

0x95e6,	// (0x000521e3) list_double_time_pane_t1

0x95fc,	// (0x000521f9) list_double_time_pane_t2_ParamLimits

0x95fc,	// (0x000521f9) list_double_time_pane_t2

0x960e,	// (0x0005220b) list_double_time_pane_t3_ParamLimits

0x960e,	// (0x0005220b) list_double_time_pane_t3

0x9620,	// (0x0005221d) list_double_time_pane_t4_ParamLimits

0x9620,	// (0x0005221d) list_double_time_pane_t4

0x0003,

0xf663,	// (0x00058260) list_double_time_pane_t_ParamLimits

0xf663,	// (0x00058260) list_double_time_pane_t

0x9632,	// (0x0005222f) list_setting_pane_g1_ParamLimits

0x9632,	// (0x0005222f) list_setting_pane_g1

0x963e,	// (0x0005223b) list_setting_pane_g2_ParamLimits

0x963e,	// (0x0005223b) list_setting_pane_g2

0x0001,

0xf66c,	// (0x00058269) list_setting_pane_g_ParamLimits

0xf66c,	// (0x00058269) list_setting_pane_g

0x964a,	// (0x00052247) list_setting_pane_t1_ParamLimits

0x964a,	// (0x00052247) list_setting_pane_t1

0x9664,	// (0x00052261) list_setting_pane_t2_ParamLimits

0x9664,	// (0x00052261) list_setting_pane_t2

0x0002,

0xf671,	// (0x0005826e) list_setting_pane_t_ParamLimits

0xf671,	// (0x0005826e) list_setting_pane_t

0x96a3,	// (0x000522a0) set_value_pane_cp_ParamLimits

0x96a3,	// (0x000522a0) set_value_pane_cp

0x96b1,	// (0x000522ae) list_setting_number_pane_g1_ParamLimits

0x96b1,	// (0x000522ae) list_setting_number_pane_g1

0x96bd,	// (0x000522ba) list_setting_number_pane_g2_ParamLimits

0x96bd,	// (0x000522ba) list_setting_number_pane_g2

0x0001,

0xf678,	// (0x00058275) list_setting_number_pane_g_ParamLimits

0xf678,	// (0x00058275) list_setting_number_pane_g

0x96c9,	// (0x000522c6) list_setting_number_pane_t1_ParamLimits

0x96c9,	// (0x000522c6) list_setting_number_pane_t1

0x96e2,	// (0x000522df) list_setting_number_pane_t2_ParamLimits

0x96e2,	// (0x000522df) list_setting_number_pane_t2

0x96fc,	// (0x000522f9) list_setting_number_pane_t3_ParamLimits

0x96fc,	// (0x000522f9) list_setting_number_pane_t3

0x0003,

0xf67d,	// (0x0005827a) list_setting_number_pane_t_ParamLimits

0xf67d,	// (0x0005827a) list_setting_number_pane_t

0x96a3,	// (0x000522a0) set_value_pane_ParamLimits

0x96a3,	// (0x000522a0) set_value_pane

0xa668,	// (0x00053265) bg_set_opt_pane_ParamLimits

0xa668,	// (0x00053265) bg_set_opt_pane

0xe4a6,	// (0x000570a3) set_value_pane_t1

0xa689,	// (0x00053286) slider_set_pane_cp3

0xa692,	// (0x0005328f) volume_small_pane_cp

0xa69b,	// (0x00053298) list_form_gen_pane

0xa6a4,	// (0x000532a1) scroll_pane_cp8

0x973f,	// (0x0005233c) form_field_data_pane_ParamLimits

0x973f,	// (0x0005233c) form_field_data_pane

0x975c,	// (0x00052359) form_field_data_wide_pane_ParamLimits

0x975c,	// (0x00052359) form_field_data_wide_pane

0x9780,	// (0x0005237d) form_field_popup_pane_ParamLimits

0x9780,	// (0x0005237d) form_field_popup_pane

0xe4c4,	// (0x000570c1) form_field_popup_wide_pane_ParamLimits

0xe4c4,	// (0x000570c1) form_field_popup_wide_pane

0xe4e5,	// (0x000570e2) form_field_slider_pane_ParamLimits

0xe4e5,	// (0x000570e2) form_field_slider_pane

0xe4f8,	// (0x000570f5) form_field_slider_wide_pane_ParamLimits

0xe4f8,	// (0x000570f5) form_field_slider_wide_pane

0xa6b5,	// (0x000532b2) data_form_pane

0x97ac,	// (0x000523a9) form_field_data_pane_t1

0xa6c1,	// (0x000532be) input_focus_pane

0xe50b,	// (0x00057108) data_form_wide_pane

0xe528,	// (0x00057125) form_field_data_wide_pane_t1

0xa3c6,	// (0x00052fc3) input_focus_pane_cp6

0x97c6,	// (0x000523c3) form_field_popup_pane_t1

0xa6c1,	// (0x000532be) input_focus_pane_cp7

0xa6ef,	// (0x000532ec) list_form_pane

0xe552,	// (0x0005714f) form_field_popup_wide_pane_t1

0xa6c1,	// (0x000532be) input_focus_pane_cp8

0xa6fb,	// (0x000532f8) list_form_wide_pane

0x97e8,	// (0x000523e5) form_field_slider_pane_t1_ParamLimits

0x97e8,	// (0x000523e5) form_field_slider_pane_t1

0x9800,	// (0x000523fd) form_field_slider_pane_t2_ParamLimits

0x9800,	// (0x000523fd) form_field_slider_pane_t2

0x0001,

0xf68d,	// (0x0005828a) form_field_slider_pane_t_ParamLimits

0xf68d,	// (0x0005828a) form_field_slider_pane_t

0x6c98,	// (0x0004f895) input_focus_pane_cp9_ParamLimits

0x6c98,	// (0x0004f895) input_focus_pane_cp9

0x9815,	// (0x00052412) slider_cont_pane_ParamLimits

0x9815,	// (0x00052412) slider_cont_pane

0xa70a,	// (0x00053307) form_field_slider_wide_pane_t1_ParamLimits

0xa70a,	// (0x00053307) form_field_slider_wide_pane_t1

0xe567,	// (0x00057164) form_field_slider_wide_pane_t2_ParamLimits

0xe567,	// (0x00057164) form_field_slider_wide_pane_t2

0x0001,

0xf692,	// (0x0005828f) form_field_slider_wide_pane_t_ParamLimits

0xf692,	// (0x0005828f) form_field_slider_wide_pane_t

0x6c98,	// (0x0004f895) input_focus_pane_cp10_ParamLimits

0x6c98,	// (0x0004f895) input_focus_pane_cp10

0x9829,	// (0x00052426) slider_cont_pane_cp1_ParamLimits

0x9829,	// (0x00052426) slider_cont_pane_cp1

0x983d,	// (0x0005243a) slider_form_pane_cp

0xa71c,	// (0x00053319) input_focus_pane_g1

0xa724,	// (0x00053321) input_focus_pane_g2

0xa72c,	// (0x00053329) input_focus_pane_g3

0xa734,	// (0x00053331) input_focus_pane_g4

0xa73c,	// (0x00053339) input_focus_pane_g5

0xa744,	// (0x00053341) input_focus_pane_g6

0xa74c,	// (0x00053349) input_focus_pane_g7

0xa754,	// (0x00053351) input_focus_pane_g8

0xa75c,	// (0x00053359) input_focus_pane_g9

0x6bc7,	// (0x0004f7c4) input_focus_pane_g10

0x0009,

0xf697,	// (0x00058294) input_focus_pane_g

0x2e16,	// (0x0004ba13) wait_border_pane_g3_copy1

0x9845,	// (0x00052442) data_form_pane_t1

0x6bc7,	// (0x0004f7c4) wait_anim_pane_g1_copy1

0x9941,	// (0x0005253e) data_form_wide_pane_t1

0xe579,	// (0x00057176) list_form_graphic_pane_cp_ParamLimits

0xe579,	// (0x00057176) list_form_graphic_pane_cp

0x3d76,	// (0x0004c973) slider_form_pane_g1

0x3d7f,	// (0x0004c97c) slider_form_pane_g2

0x0006,

0xf995,	// (0x00058592) slider_form_pane_g

0x9861,	// (0x0005245e) list_form_graphic_pane_ParamLimits

0x9861,	// (0x0005245e) list_form_graphic_pane

0xe58b,	// (0x00057188) list_form_graphic_pane_g1

0xe593,	// (0x00057190) list_form_graphic_pane_t1_ParamLimits

0xe593,	// (0x00057190) list_form_graphic_pane_t1

0x6c2b,	// (0x0004f828) list_highlight_pane_cp5_ParamLimits

0x6c2b,	// (0x0004f828) list_highlight_pane_cp5

0x9872,	// (0x0005246f) find_pane_g1

0xa764,	// (0x00053361) input_find_pane

0x987b,	// (0x00052478) input_find_pane_g1_ParamLimits

0x987b,	// (0x00052478) input_find_pane_g1

0x9887,	// (0x00052484) input_find_pane_t1_ParamLimits

0x9887,	// (0x00052484) input_find_pane_t1

0x989c,	// (0x00052499) input_find_pane_t2_ParamLimits

0x989c,	// (0x00052499) input_find_pane_t2

0x0001,

0xf6ac,	// (0x000582a9) input_find_pane_t_ParamLimits

0xf6ac,	// (0x000582a9) input_find_pane_t

0xa76d,	// (0x0005336a) input_focus_pane_cp5_ParamLimits

0xa76d,	// (0x0005336a) input_focus_pane_cp5

0xa787,	// (0x00053384) bg_popup_window_pane_cp2_ParamLimits

0xa787,	// (0x00053384) bg_popup_window_pane_cp2

0xa794,	// (0x00053391) listscroll_menu_pane_ParamLimits

0xa794,	// (0x00053391) listscroll_menu_pane

0xa7a0,	// (0x0005339d) popup_submenu_window_ParamLimits

0xa7a0,	// (0x0005339d) popup_submenu_window

0xa7d0,	// (0x000533cd) find_popup_pane_g1

0xa7d8,	// (0x000533d5) input_popup_find_pane_cp

0xa76d,	// (0x0005336a) input_focus_pane_cp4_ParamLimits

0xa76d,	// (0x0005336a) input_focus_pane_cp4

0xa7f0,	// (0x000533ed) input_popup_find_pane_t1_ParamLimits

0xa7f0,	// (0x000533ed) input_popup_find_pane_t1

0x6bd1,	// (0x0004f7ce) bg_popup_sub_pane_cp

0xa81e,	// (0x0005341b) listscroll_popup_sub_pane

0xa826,	// (0x00053423) list_submenu_pane_ParamLimits

0xa826,	// (0x00053423) list_submenu_pane

0xa837,	// (0x00053434) scroll_pane_cp4

0xa83f,	// (0x0005343c) list_single_popup_submenu_pane_ParamLimits

0xa83f,	// (0x0005343c) list_single_popup_submenu_pane

0xa854,	// (0x00053451) list_single_popup_submenu_pane_g1

0xa85c,	// (0x00053459) list_single_popup_submenu_pane_t1_ParamLimits

0xa85c,	// (0x00053459) list_single_popup_submenu_pane_t1

0x6c98,	// (0x0004f895) bg_active_tab_pane_cp1_ParamLimits

0x6c98,	// (0x0004f895) bg_active_tab_pane_cp1

0xa871,	// (0x0005346e) tabs_2_active_pane_g1

0xa879,	// (0x00053476) tabs_2_active_pane_t1

0x6c98,	// (0x0004f895) bg_passive_tab_pane_cp1_ParamLimits

0x6c98,	// (0x0004f895) bg_passive_tab_pane_cp1

0xa871,	// (0x0005346e) tabs_2_passive_pane_g1

0xa879,	// (0x00053476) tabs_2_passive_pane_t1

0x6c2b,	// (0x0004f828) bg_active_tab_pane_cp4

0xa88b,	// (0x00053488) tabs_2_long_active_pane_t1

0x1cef,	// (0x0004a8ec) bg_passive_tab_pane_cp4

0x0940,	// (0x0004953d) list_single_midp_graphic_pane_g4_ParamLimits

0x6c2b,	// (0x0004f828) bg_active_tab_pane_cp5

0xa89e,	// (0x0005349b) tabs_3_long_active_pane_t1

0x1cef,	// (0x0004a8ec) bg_passive_tab_pane_cp5

0x0940,	// (0x0004953d) list_single_midp_graphic_pane_g4

0x6c2b,	// (0x0004f828) bg_popup_window_pane_cp13_ParamLimits

0x6c2b,	// (0x0004f828) bg_popup_window_pane_cp13

0xa8b9,	// (0x000534b6) listscroll_popup_fast_pane_ParamLimits

0xa8b9,	// (0x000534b6) listscroll_popup_fast_pane

0xa8c8,	// (0x000534c5) grid_popup_fast_pane_ParamLimits

0xa8c8,	// (0x000534c5) grid_popup_fast_pane

0xa8da,	// (0x000534d7) scroll_pane_cp9_ParamLimits

0xa8da,	// (0x000534d7) scroll_pane_cp9

0x56db,	// (0x0004e2d8) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x56db,	// (0x0004e2d8) list_single_graphic_hl_pane_t1_cp2

0xa8fe,	// (0x000534fb) input_focus_pane_cp20_ParamLimits

0xa8fe,	// (0x000534fb) input_focus_pane_cp20

0xa90c,	// (0x00053509) query_popup_data_pane_t1_ParamLimits

0xa90c,	// (0x00053509) query_popup_data_pane_t1

0xa91f,	// (0x0005351c) query_popup_data_pane_t2_ParamLimits

0xa91f,	// (0x0005351c) query_popup_data_pane_t2

0xa965,	// (0x00053562) query_popup_data_pane_t3_ParamLimits

0xa965,	// (0x00053562) query_popup_data_pane_t3

0xa9a6,	// (0x000535a3) query_popup_data_pane_t4_ParamLimits

0xa9a6,	// (0x000535a3) query_popup_data_pane_t4

0xa9e2,	// (0x000535df) query_popup_data_pane_t5_ParamLimits

0xa9e2,	// (0x000535df) query_popup_data_pane_t5

0x0004,

0xf6b1,	// (0x000582ae) query_popup_data_pane_t_ParamLimits

0xf6b1,	// (0x000582ae) query_popup_data_pane_t

0xa71c,	// (0x00053319) bg_set_opt_pane_g1

0xa724,	// (0x00053321) bg_set_opt_pane_g2

0xa72c,	// (0x00053329) bg_set_opt_pane_g3

0xa734,	// (0x00053331) bg_set_opt_pane_g4

0xa73c,	// (0x00053339) bg_set_opt_pane_g5

0xa744,	// (0x00053341) bg_set_opt_pane_g6

0xa74c,	// (0x00053349) bg_set_opt_pane_g7

0xa754,	// (0x00053351) bg_set_opt_pane_g8

0xa75c,	// (0x00053359) bg_set_opt_pane_g9

0x0008,

0xf6bc,	// (0x000582b9) bg_set_opt_pane_g

0x022d,	// (0x00048e2a) control_top_pane_stacon_ParamLimits

0x022d,	// (0x00048e2a) control_top_pane_stacon

0x0280,	// (0x00048e7d) signal_pane_stacon_ParamLimits

0x0280,	// (0x00048e7d) signal_pane_stacon

0xe5b1,	// (0x000571ae) stacon_top_pane_g1_ParamLimits

0xe5b1,	// (0x000571ae) stacon_top_pane_g1

0x02a5,	// (0x00048ea2) title_pane_stacon_ParamLimits

0x02a5,	// (0x00048ea2) title_pane_stacon

0x02cf,	// (0x00048ecc) uni_indicator_pane_stacon_ParamLimits

0x02cf,	// (0x00048ecc) uni_indicator_pane_stacon

0x02e7,	// (0x00048ee4) battery_pane_stacon_ParamLimits

0x02e7,	// (0x00048ee4) battery_pane_stacon

0x032b,	// (0x00048f28) control_bottom_pane_stacon_ParamLimits

0x032b,	// (0x00048f28) control_bottom_pane_stacon

0x034e,	// (0x00048f4b) navi_pane_stacon_ParamLimits

0x034e,	// (0x00048f4b) navi_pane_stacon

0xe5d3,	// (0x000571d0) stacon_bottom_pane_g1_ParamLimits

0xe5d3,	// (0x000571d0) stacon_bottom_pane_g1

0xf393,	// (0x00057f90) aid_levels_signal_lsc_ParamLimits

0xf393,	// (0x00057f90) aid_levels_signal_lsc

0xf3aa,	// (0x00057fa7) signal_pane_stacon_g1_ParamLimits

0xf3aa,	// (0x00057fa7) signal_pane_stacon_g1

0xf3be,	// (0x00057fbb) signal_pane_stacon_g2_ParamLimits

0xf3be,	// (0x00057fbb) signal_pane_stacon_g2

0x0001,

0xf6cf,	// (0x000582cc) signal_pane_stacon_g_ParamLimits

0xf6cf,	// (0x000582cc) signal_pane_stacon_g

0xf3f3,	// (0x00057ff0) title_pane_stacon_t1_ParamLimits

0xf3f3,	// (0x00057ff0) title_pane_stacon_t1

0xaa26,	// (0x00053623) uni_indicator_pane_stacon_g1

0xaa30,	// (0x0005362d) uni_indicator_pane_stacon_g2

0xaa3a,	// (0x00053637) uni_indicator_pane_stacon_g3

0xaa44,	// (0x00053641) uni_indicator_pane_stacon_g4

0x0003,

0xf6db,	// (0x000582d8) uni_indicator_pane_stacon_g

0xf418,	// (0x00058015) control_top_pane_stacon_g1

0xf420,	// (0x0005801d) control_top_pane_stacon_t1_ParamLimits

0xf420,	// (0x0005801d) control_top_pane_stacon_t1

0xf457,	// (0x00058054) aid_levels_battery_lsc_ParamLimits

0xf457,	// (0x00058054) aid_levels_battery_lsc

0xf46f,	// (0x0005806c) battery_pane_stacon_g1_ParamLimits

0xf46f,	// (0x0005806c) battery_pane_stacon_g1

0xf482,	// (0x0005807f) battery_pane_stacon_g2_ParamLimits

0xf482,	// (0x0005807f) battery_pane_stacon_g2

0x0001,

0xf6e4,	// (0x000582e1) battery_pane_stacon_g_ParamLimits

0xf6e4,	// (0x000582e1) battery_pane_stacon_g

0xf4c0,	// (0x000580bd) navi_icon_pane_stacon

0xf4d4,	// (0x000580d1) navi_navi_pane_stacon

0xf4c0,	// (0x000580bd) navi_text_pane_stacon

0xf418,	// (0x00058015) control_bottom_pane_stacon_g1

0xf4ea,	// (0x000580e7) control_bottom_pane_stacon_t1_ParamLimits

0xf4ea,	// (0x000580e7) control_bottom_pane_stacon_t1

0xaa68,	// (0x00053665) grid_app_pane_ParamLimits

0xaa68,	// (0x00053665) grid_app_pane

0xaaa0,	// (0x0005369d) scroll_pane_cp15_ParamLimits

0xaaa0,	// (0x0005369d) scroll_pane_cp15

0xaab5,	// (0x000536b2) cell_app_pane_ParamLimits

0xaab5,	// (0x000536b2) cell_app_pane

0xab02,	// (0x000536ff) cell_app_pane_g1_ParamLimits

0xab02,	// (0x000536ff) cell_app_pane_g1

0xab22,	// (0x0005371f) cell_app_pane_g2_ParamLimits

0xab22,	// (0x0005371f) cell_app_pane_g2

0x0001,

0xf6e9,	// (0x000582e6) cell_app_pane_g_ParamLimits

0xf6e9,	// (0x000582e6) cell_app_pane_g

0xab2e,	// (0x0005372b) cell_app_pane_t1_ParamLimits

0xab2e,	// (0x0005372b) cell_app_pane_t1

0xab45,	// (0x00053742) grid_highlight_pane_ParamLimits

0xab45,	// (0x00053742) grid_highlight_pane

0xa71c,	// (0x00053319) cell_highlight_pane_g1

0xa724,	// (0x00053321) cell_highlight_pane_g2

0xa72c,	// (0x00053329) cell_highlight_pane_g3

0xa734,	// (0x00053331) cell_highlight_pane_g4

0xa73c,	// (0x00053339) cell_highlight_pane_g5

0xa744,	// (0x00053341) cell_highlight_pane_g6

0xa74c,	// (0x00053349) cell_highlight_pane_g7

0xa754,	// (0x00053351) cell_highlight_pane_g8

0xa75c,	// (0x00053359) cell_highlight_pane_g9

0x6bc7,	// (0x0004f7c4) cell_highlight_pane_g10

0x0009,

0xf697,	// (0x00058294) cell_highlight_pane_g

0xab5f,	// (0x0005375c) bg_scroll_pane

0xf52b,	// (0x00058128) scroll_handle_pane

0xaba6,	// (0x000537a3) scroll_bg_pane_g1

0xabbb,	// (0x000537b8) scroll_bg_pane_g2

0xabd3,	// (0x000537d0) scroll_bg_pane_g3

0x0002,

0xf6ee,	// (0x000582eb) scroll_bg_pane_g

0xabe8,	// (0x000537e5) scroll_handle_focus_pane_ParamLimits

0xabe8,	// (0x000537e5) scroll_handle_focus_pane

0xaba6,	// (0x000537a3) scroll_handle_pane_g1

0xabf5,	// (0x000537f2) scroll_handle_pane_g2

0xabd3,	// (0x000537d0) scroll_handle_pane_g3

0x0002,

0xf6f5,	// (0x000582f2) scroll_handle_pane_g

0xa76d,	// (0x0005336a) bg_popup_sub_pane_cp21_ParamLimits

0xa76d,	// (0x0005336a) bg_popup_sub_pane_cp21

0xac09,	// (0x00053806) popup_fep_japan_predictive_window_t1_ParamLimits

0xac09,	// (0x00053806) popup_fep_japan_predictive_window_t1

0xac20,	// (0x0005381d) popup_fep_japan_predictive_window_t2_ParamLimits

0xac20,	// (0x0005381d) popup_fep_japan_predictive_window_t2

0xac53,	// (0x00053850) popup_fep_japan_predictive_window_t3_ParamLimits

0xac53,	// (0x00053850) popup_fep_japan_predictive_window_t3

0x0002,

0xf6fc,	// (0x000582f9) popup_fep_japan_predictive_window_t_ParamLimits

0xf6fc,	// (0x000582f9) popup_fep_japan_predictive_window_t

0x6bd1,	// (0x0004f7ce) bg_popup_sub_pane_cp23

0xac8a,	// (0x00053887) listscroll_japin_cand_pane

0xac92,	// (0x0005388f) popup_fep_japan_candidate_window_t1

0xaca0,	// (0x0005389d) candidate_pane_ParamLimits

0xaca0,	// (0x0005389d) candidate_pane

0xacb2,	// (0x000538af) scroll_pane_cp30

0xacbc,	// (0x000538b9) list_single_popup_jap_candidate_pane_ParamLimits

0xacbc,	// (0x000538b9) list_single_popup_jap_candidate_pane

0x6bd1,	// (0x0004f7ce) list_highlight_pane_cp30

0xacd0,	// (0x000538cd) list_single_popup_jap_candidate_pane_t1

0xacdf,	// (0x000538dc) level_1_signal

0xacf1,	// (0x000538ee) level_2_signal

0xad04,	// (0x00053901) level_3_signal

0xad17,	// (0x00053914) level_4_signal

0xad2a,	// (0x00053927) level_5_signal

0xad3d,	// (0x0005393a) level_6_signal

0xad50,	// (0x0005394d) level_7_signal

0xacdf,	// (0x000538dc) level_1_battery

0xacf1,	// (0x000538ee) level_2_battery

0xad04,	// (0x00053901) level_3_battery

0xad17,	// (0x00053914) level_4_battery

0xad2a,	// (0x00053927) level_5_battery

0xad3d,	// (0x0005393a) level_6_battery

0xad50,	// (0x0005394d) level_7_battery

0xc32b,	// (0x00054f28) list_menu_pane_ParamLimits

0xc32b,	// (0x00054f28) list_menu_pane

0xc341,	// (0x00054f3e) scroll_pane_cp25_ParamLimits

0xc341,	// (0x00054f3e) scroll_pane_cp25

0xc35a,	// (0x00054f57) list_double2_graphic_pane_cp2_ParamLimits

0xc35a,	// (0x00054f57) list_double2_graphic_pane_cp2

0xc35a,	// (0x00054f57) list_double2_large_graphic_pane_cp2_ParamLimits

0xc35a,	// (0x00054f57) list_double2_large_graphic_pane_cp2

0xc35a,	// (0x00054f57) list_double2_pane_cp2_ParamLimits

0xc35a,	// (0x00054f57) list_double2_pane_cp2

0xc35a,	// (0x00054f57) list_double_graphic_pane_cp2_ParamLimits

0xc35a,	// (0x00054f57) list_double_graphic_pane_cp2

0xc35a,	// (0x00054f57) list_double_large_graphic_pane_cp2_ParamLimits

0xc35a,	// (0x00054f57) list_double_large_graphic_pane_cp2

0xc35a,	// (0x00054f57) list_double_number_pane_cp2_ParamLimits

0xc35a,	// (0x00054f57) list_double_number_pane_cp2

0xc35a,	// (0x00054f57) list_double_pane_cp2_ParamLimits

0xc35a,	// (0x00054f57) list_double_pane_cp2

0xad86,	// (0x00053983) list_single_2graphic_pane_cp2_ParamLimits

0xad86,	// (0x00053983) list_single_2graphic_pane_cp2

0xad86,	// (0x00053983) list_single_graphic_heading_pane_cp2_ParamLimits

0xad86,	// (0x00053983) list_single_graphic_heading_pane_cp2

0xad86,	// (0x00053983) list_single_graphic_pane_cp2_ParamLimits

0xad86,	// (0x00053983) list_single_graphic_pane_cp2

0xad86,	// (0x00053983) list_single_heading_pane_cp2_ParamLimits

0xad86,	// (0x00053983) list_single_heading_pane_cp2

0xc36a,	// (0x00054f67) list_single_large_graphic_pane_cp2_ParamLimits

0xc36a,	// (0x00054f67) list_single_large_graphic_pane_cp2

0xad86,	// (0x00053983) list_single_number_heading_pane_cp2_ParamLimits

0xad86,	// (0x00053983) list_single_number_heading_pane_cp2

0xad86,	// (0x00053983) list_single_number_pane_cp2_ParamLimits

0xad86,	// (0x00053983) list_single_number_pane_cp2

0xad86,	// (0x00053983) list_single_pane_cp2_ParamLimits

0xad86,	// (0x00053983) list_single_pane_cp2

0xc383,	// (0x00054f80) bg_popup_sub_pane_cp22

0x0173,	// (0x00048d70) popup_side_volume_key_window_g1

0x019d,	// (0x00048d9a) popup_side_volume_key_window_t1

0x01bb,	// (0x00048db8) volume_small_pane_cp1

0x6c98,	// (0x0004f895) bg_popup_sub_pane_cp24_ParamLimits

0x6c98,	// (0x0004f895) bg_popup_sub_pane_cp24

0xc399,	// (0x00054f96) fep_china_uni_candidate_pane_ParamLimits

0xc399,	// (0x00054f96) fep_china_uni_candidate_pane

0xc3ad,	// (0x00054faa) fep_china_uni_entry_pane

0xc3bd,	// (0x00054fba) popup_fep_china_uni_window_g1

0xc3d9,	// (0x00054fd6) fep_china_uni_entry_pane_g1

0xc3e3,	// (0x00054fe0) fep_china_uni_entry_pane_g2

0x0001,

0xf72d,	// (0x0005832a) fep_china_uni_entry_pane_g

0xc3ed,	// (0x00054fea) fep_entry_item_pane

0xc3f7,	// (0x00054ff4) fep_candidate_item_pane

0xc3ff,	// (0x00054ffc) fep_china_uni_candidate_pane_g1

0xc409,	// (0x00055006) fep_china_uni_candidate_pane_g2

0xc411,	// (0x0005500e) fep_china_uni_candidate_pane_g3

0xc419,	// (0x00055016) fep_china_uni_candidate_pane_g4

0x0003,

0xf732,	// (0x0005832f) fep_china_uni_candidate_pane_g

0x6bc7,	// (0x0004f7c4) fep_entry_item_pane_g1

0xc423,	// (0x00055020) fep_entry_item_pane_t1_ParamLimits

0xc423,	// (0x00055020) fep_entry_item_pane_t1

0xc439,	// (0x00055036) fep_candidate_item_pane_t1_ParamLimits

0xc439,	// (0x00055036) fep_candidate_item_pane_t1

0xc44e,	// (0x0005504b) fep_candidate_item_pane_t2_ParamLimits

0xc44e,	// (0x0005504b) fep_candidate_item_pane_t2

0x0001,

0xf73b,	// (0x00058338) fep_candidate_item_pane_t_ParamLimits

0xf73b,	// (0x00058338) fep_candidate_item_pane_t

0x6c2b,	// (0x0004f828) list_highlight_pane_cp31_ParamLimits

0x6c2b,	// (0x0004f828) list_highlight_pane_cp31

0xc460,	// (0x0005505d) level_1_signal_lsc

0xc469,	// (0x00055066) level_2_signal_lsc

0xc472,	// (0x0005506f) level_3_signal_lsc

0xc47b,	// (0x00055078) level_4_signal_lsc

0xc484,	// (0x00055081) level_5_signal_lsc

0xc48d,	// (0x0005508a) level_6_signal_lsc

0xc496,	// (0x00055093) level_7_signal_lsc

0xc496,	// (0x00055093) level_1_battery_lsc

0xc49f,	// (0x0005509c) level_2_battery_lsc

0xc4a8,	// (0x000550a5) level_3_battery_lsc

0xc4b1,	// (0x000550ae) level_4_battery_lsc

0xc4ba,	// (0x000550b7) level_5_battery_lsc

0xc4c3,	// (0x000550c0) level_6_battery_lsc

0xc460,	// (0x0005505d) level_7_battery_lsc

0xc4cc,	// (0x000550c9) scroll_handle_focus_pane_g1

0xc4d5,	// (0x000550d2) scroll_handle_focus_pane_g2

0xc4de,	// (0x000550db) scroll_handle_focus_pane_g3

0x0002,

0xf740,	// (0x0005833d) scroll_handle_focus_pane_g

0x98b1,	// (0x000524ae) list_single_2graphic_pane_g1_ParamLimits

0x98b1,	// (0x000524ae) list_single_2graphic_pane_g1

0xa60e,	// (0x0005320b) list_single_2graphic_pane_g2_ParamLimits

0xa60e,	// (0x0005320b) list_single_2graphic_pane_g2

0x090f,	// (0x0004950c) list_single_2graphic_pane_g3_ParamLimits

0x090f,	// (0x0004950c) list_single_2graphic_pane_g3

0xae18,	// (0x00053a15) list_single_2graphic_pane_g4_ParamLimits

0xae18,	// (0x00053a15) list_single_2graphic_pane_g4

0x0003,

0xf747,	// (0x00058344) list_single_2graphic_pane_g_ParamLimits

0xf747,	// (0x00058344) list_single_2graphic_pane_g

0x98bd,	// (0x000524ba) list_single_2graphic_pane_t1_ParamLimits

0x98bd,	// (0x000524ba) list_single_2graphic_pane_t1

0xae29,	// (0x00053a26) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xae29,	// (0x00053a26) list_double2_graphic_large_graphic_pane_g1

0xa657,	// (0x00053254) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xa657,	// (0x00053254) list_double2_graphic_large_graphic_pane_g2

0xa63f,	// (0x0005323c) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xa63f,	// (0x0005323c) list_double2_graphic_large_graphic_pane_g3

0xae3b,	// (0x00053a38) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xae3b,	// (0x00053a38) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf750,	// (0x0005834d) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf750,	// (0x0005834d) list_double2_graphic_large_graphic_pane_g

0x98eb,	// (0x000524e8) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x98eb,	// (0x000524e8) list_double2_graphic_large_graphic_pane_t1

0x9901,	// (0x000524fe) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x9901,	// (0x000524fe) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf759,	// (0x00058356) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf759,	// (0x00058356) list_double2_graphic_large_graphic_pane_t

0xe631,	// (0x0005722e) popup_fast_swap_window_ParamLimits

0xe631,	// (0x0005722e) popup_fast_swap_window

0xe64f,	// (0x0005724c) popup_side_volume_key_window

0xe66d,	// (0x0005726a) stacon_top_pane

0xe677,	// (0x00057274) status_pane_ParamLimits

0xe677,	// (0x00057274) status_pane

0xe66d,	// (0x0005726a) status_small_pane

0x6bd1,	// (0x0004f7ce) control_pane

0x6bd1,	// (0x0004f7ce) stacon_bottom_pane

0xa6a4,	// (0x000532a1) scroll_pane_cp121

0xa69b,	// (0x00053298) set_content_pane

0xae47,	// (0x00053a44) bg_active_tab_pane_g1_cp1

0xe5a8,	// (0x000571a5) bg_active_tab_pane_g2_cp1

0xae50,	// (0x00053a4d) bg_active_tab_pane_g3_cp1

0xae47,	// (0x00053a44) bg_passive_tab_pane_g1_cp1

0xe5a8,	// (0x000571a5) bg_passive_tab_pane_g2_cp1

0xae50,	// (0x00053a4d) bg_passive_tab_pane_g3_cp1

0xae59,	// (0x00053a56) bg_active_tab_pane_g1_cp2

0xe5a8,	// (0x000571a5) bg_active_tab_pane_g2_cp2

0xae62,	// (0x00053a5f) bg_active_tab_pane_g3_cp2

0xae59,	// (0x00053a56) bg_passive_tab_pane_g1_cp2

0xe5a8,	// (0x000571a5) bg_passive_tab_pane_g2_cp2

0xae62,	// (0x00053a5f) bg_passive_tab_pane_g3_cp2

0xae6b,	// (0x00053a68) bg_active_tab_pane_g1_cp3

0xe5a8,	// (0x000571a5) bg_active_tab_pane_g2_cp3

0xae74,	// (0x00053a71) bg_active_tab_pane_g3_cp3

0xae6b,	// (0x00053a68) bg_passive_tab_pane_g1_cp3

0xe5a8,	// (0x000571a5) bg_passive_tab_pane_g2_cp3

0xae74,	// (0x00053a71) bg_passive_tab_pane_g3_cp3

0xae7d,	// (0x00053a7a) bg_active_tab_pane_g1_cp4

0xe5a8,	// (0x000571a5) bg_active_tab_pane_g2_cp4

0xae86,	// (0x00053a83) bg_active_tab_pane_g3_cp4

0xae7d,	// (0x00053a7a) bg_passive_tab_pane_g1_cp4

0xe5a8,	// (0x000571a5) bg_passive_tab_pane_g2_cp4

0xae86,	// (0x00053a83) bg_passive_tab_pane_g3_cp4

0xe5ef,	// (0x000571ec) bg_active_tab_pane_g1_cp5

0xe5a8,	// (0x000571a5) bg_active_tab_pane_g2_cp5

0xe5f8,	// (0x000571f5) bg_active_tab_pane_g3_cp5

0xe5ef,	// (0x000571ec) bg_passive_tab_pane_g1_cp5

0xe5a8,	// (0x000571a5) bg_passive_tab_pane_g2_cp5

0xe5f8,	// (0x000571f5) bg_passive_tab_pane_g3_cp5

0x4378,	// (0x0004cf75) list_set_graphic_pane_ParamLimits

0x4378,	// (0x0004cf75) list_set_graphic_pane

0x6bd1,	// (0x0004f7ce) bg_set_opt_pane_cp4

0xae8f,	// (0x00053a8c) list_set_graphic_pane_g1_ParamLimits

0xae8f,	// (0x00053a8c) list_set_graphic_pane_g1

0xae9b,	// (0x00053a98) list_set_graphic_pane_g2_ParamLimits

0xae9b,	// (0x00053a98) list_set_graphic_pane_g2

0x0001,

0xf75e,	// (0x0005835b) list_set_graphic_pane_g_ParamLimits

0xf75e,	// (0x0005835b) list_set_graphic_pane_g

0x0009,

0xfae6,	// (0x000586e3) volume_small_pane_cp_g

0xaebf,	// (0x00053abc) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xaebf,	// (0x00053abc) list_double2_large_graphic_pane_g1_cp2

0xaecd,	// (0x00053aca) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xaecd,	// (0x00053aca) list_double2_large_graphic_pane_g2_cp2

0xe601,	// (0x000571fe) list_double2_large_graphic_pane_g3_cp2

0xe609,	// (0x00057206) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xe609,	// (0x00057206) list_double2_large_graphic_pane_t1_cp2

0xe61f,	// (0x0005721c) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xe61f,	// (0x0005721c) list_double2_large_graphic_pane_t2_cp2

0xc8ce,	// (0x000554cb) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xc8ce,	// (0x000554cb) list_double_large_graphic_pane_g1_cp2

0xc8e1,	// (0x000554de) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xc8e1,	// (0x000554de) list_double_large_graphic_pane_g2_cp2

0xe758,	// (0x00057355) list_double_large_graphic_pane_g3_cp2

0x391e,	// (0x0004c51b) list_double_large_graphic_pane_g4_cp

0x3926,	// (0x0004c523) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x3926,	// (0x0004c523) list_double_large_graphic_pane_t1_cp2

0x393d,	// (0x0004c53a) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x393d,	// (0x0004c53a) list_double_large_graphic_pane_t2_cp2

0xaede,	// (0x00053adb) list_double2_graphic_pane_g1_cp2_ParamLimits

0xaede,	// (0x00053adb) list_double2_graphic_pane_g1_cp2

0xaeec,	// (0x00053ae9) list_double2_graphic_pane_g2_cp2_ParamLimits

0xaeec,	// (0x00053ae9) list_double2_graphic_pane_g2_cp2

0xaefd,	// (0x00053afa) list_double2_graphic_pane_g3_cp2

0xe685,	// (0x00057282) list_double2_graphic_pane_t1_cp2_ParamLimits

0xe685,	// (0x00057282) list_double2_graphic_pane_t1_cp2

0xe69b,	// (0x00057298) list_double2_graphic_pane_t2_cp2_ParamLimits

0xe69b,	// (0x00057298) list_double2_graphic_pane_t2_cp2

0xe6ad,	// (0x000572aa) list_single_number_heading_pane_g1_cp2_ParamLimits

0xe6ad,	// (0x000572aa) list_single_number_heading_pane_g1_cp2

0xe6b9,	// (0x000572b6) list_single_number_heading_pane_g2_cp2

0xe6c1,	// (0x000572be) list_single_number_heading_pane_t1_cp2_ParamLimits

0xe6c1,	// (0x000572be) list_single_number_heading_pane_t1_cp2

0xaf07,	// (0x00053b04) list_single_number_heading_pane_t2_cp2_ParamLimits

0xaf07,	// (0x00053b04) list_single_number_heading_pane_t2_cp2

0xe6d7,	// (0x000572d4) list_single_number_heading_pane_t3_cp2_ParamLimits

0xe6d7,	// (0x000572d4) list_single_number_heading_pane_t3_cp2

0xe6ad,	// (0x000572aa) list_single_heading_pane_g1_cp2_ParamLimits

0xe6ad,	// (0x000572aa) list_single_heading_pane_g1_cp2

0xe6b9,	// (0x000572b6) list_single_heading_pane_g2_cp2

0xe6c1,	// (0x000572be) list_single_heading_pane_t1_cp2_ParamLimits

0xe6c1,	// (0x000572be) list_single_heading_pane_t1_cp2

0xc8ba,	// (0x000554b7) list_single_heading_pane_t2_cp2_ParamLimits

0xc8ba,	// (0x000554b7) list_single_heading_pane_t2_cp2

0x363c,	// (0x0004c239) list_double_graphic_pane_g1_cp2_ParamLimits

0x363c,	// (0x0004c239) list_double_graphic_pane_g1_cp2

0x3648,	// (0x0004c245) list_double_graphic_pane_g2_cp2_ParamLimits

0x3648,	// (0x0004c245) list_double_graphic_pane_g2_cp2

0x3657,	// (0x0004c254) list_double_graphic_pane_g3_cp2

0x365f,	// (0x0004c25c) list_double_graphic_pane_t1_cp2_ParamLimits

0x365f,	// (0x0004c25c) list_double_graphic_pane_t1_cp2

0x3675,	// (0x0004c272) list_double_graphic_pane_t2_cp2_ParamLimits

0x3675,	// (0x0004c272) list_double_graphic_pane_t2_cp2

0xe74c,	// (0x00057349) list_double_number_pane_g1_cp2_ParamLimits

0xe74c,	// (0x00057349) list_double_number_pane_g1_cp2

0xe758,	// (0x00057355) list_double_number_pane_g2_cp2

0xc854,	// (0x00055451) list_double_number_pane_t1_cp2_ParamLimits

0xc854,	// (0x00055451) list_double_number_pane_t1_cp2

0x3614,	// (0x0004c211) list_double_number_pane_t2_cp2_ParamLimits

0x3614,	// (0x0004c211) list_double_number_pane_t2_cp2

0x362a,	// (0x0004c227) list_double_number_pane_t3_cp2_ParamLimits

0x362a,	// (0x0004c227) list_double_number_pane_t3_cp2

0xc7a2,	// (0x0005539f) list_single_graphic_pane_g1_cp2_ParamLimits

0xc7a2,	// (0x0005539f) list_single_graphic_pane_g1_cp2

0xe798,	// (0x00057395) list_single_graphic_pane_g2_cp2_ParamLimits

0xe798,	// (0x00057395) list_single_graphic_pane_g2_cp2

0xe7a4,	// (0x000573a1) list_single_graphic_pane_g3_cp2

0x34bf,	// (0x0004c0bc) list_single_graphic_pane_t1_cp2_ParamLimits

0x34bf,	// (0x0004c0bc) list_single_graphic_pane_t1_cp2

0xe798,	// (0x00057395) list_single_number_pane_g1_cp2_ParamLimits

0xe798,	// (0x00057395) list_single_number_pane_g1_cp2

0xe7a4,	// (0x000573a1) list_single_number_pane_g2_cp2

0x34bf,	// (0x0004c0bc) list_single_number_pane_t1_cp2_ParamLimits

0x34bf,	// (0x0004c0bc) list_single_number_pane_t1_cp2

0xc78e,	// (0x0005538b) list_single_number_pane_t2_cp2_ParamLimits

0xc78e,	// (0x0005538b) list_single_number_pane_t2_cp2

0xaecd,	// (0x00053aca) list_double2_pane_g1_cp2_ParamLimits

0xaecd,	// (0x00053aca) list_double2_pane_g1_cp2

0xe601,	// (0x000571fe) list_double2_pane_g2_cp2

0xe724,	// (0x00057321) list_double2_pane_t1_cp2_ParamLimits

0xe724,	// (0x00057321) list_double2_pane_t1_cp2

0xe73a,	// (0x00057337) list_double2_pane_t2_cp2_ParamLimits

0xe73a,	// (0x00057337) list_double2_pane_t2_cp2

0xe74c,	// (0x00057349) list_double_pane_g1_cp2_ParamLimits

0xe74c,	// (0x00057349) list_double_pane_g1_cp2

0xe758,	// (0x00057355) list_double_pane_g2_cp2

0xe760,	// (0x0005735d) list_double_pane_t1_cp2_ParamLimits

0xe760,	// (0x0005735d) list_double_pane_t1_cp2

0xe776,	// (0x00057373) list_double_pane_t2_cp2_ParamLimits

0xe776,	// (0x00057373) list_double_pane_t2_cp2

0xe788,	// (0x00057385) list_single_pane_cp2_g3

0xe798,	// (0x00057395) list_single_pane_g1_cp2_ParamLimits

0xe798,	// (0x00057395) list_single_pane_g1_cp2

0xe7a4,	// (0x000573a1) list_single_pane_g2_cp2

0xe7ac,	// (0x000573a9) list_single_pane_t1_cp2_ParamLimits

0xe7ac,	// (0x000573a9) list_single_pane_t1_cp2

0xaf35,	// (0x00053b32) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xaf35,	// (0x00053b32) list_single_large_graphic_pane_g1_cp2

0xe48e,	// (0x0005708b) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xe48e,	// (0x0005708b) list_single_large_graphic_pane_g2_cp2

0xe7c4,	// (0x000573c1) list_single_large_graphic_pane_g3_cp2

0xe7cc,	// (0x000573c9) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xe7cc,	// (0x000573c9) list_single_large_graphic_pane_g4_cp1

0xe7e6,	// (0x000573e3) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xe7e6,	// (0x000573e3) list_single_large_graphic_pane_t1_cp2

0x3489,	// (0x0004c086) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x3489,	// (0x0004c086) list_single_graphic_heading_pane_g1_cp2

0xc769,	// (0x00055366) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xc769,	// (0x00055366) list_single_graphic_heading_pane_g4_cp2

0xe7a4,	// (0x000573a1) list_single_graphic_heading_pane_g5_cp2

0x3495,	// (0x0004c092) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x3495,	// (0x0004c092) list_single_graphic_heading_pane_t1_cp2

0xc77a,	// (0x00055377) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xc77a,	// (0x00055377) list_single_graphic_heading_pane_t2_cp2

0x344a,	// (0x0004c047) list_single_2graphic_pane_g1_cp2_ParamLimits

0x344a,	// (0x0004c047) list_single_2graphic_pane_g1_cp2

0xc769,	// (0x00055366) list_single_2graphic_pane_g2_cp2_ParamLimits

0xc769,	// (0x00055366) list_single_2graphic_pane_g2_cp2

0xe7a4,	// (0x000573a1) list_single_2graphic_pane_g3_cp2

0x3467,	// (0x0004c064) list_single_2graphic_pane_g4_cp2_ParamLimits

0x3467,	// (0x0004c064) list_single_2graphic_pane_g4_cp2

0x3473,	// (0x0004c070) list_single_2graphic_pane_t1_cp2_ParamLimits

0x3473,	// (0x0004c070) list_single_2graphic_pane_t1_cp2

0x6bc7,	// (0x0004f7c4) list_highlight_pane_g10_cp1

0x3022,	// (0x0004bc1f) list_highlight_pane_g1_cp1

0x302a,	// (0x0004bc27) list_highlight_pane_g2_cp1

0x3032,	// (0x0004bc2f) list_highlight_pane_g3_cp1

0x303a,	// (0x0004bc37) list_highlight_pane_g4_cp1

0x3042,	// (0x0004bc3f) list_highlight_pane_g5_cp1

0x304a,	// (0x0004bc47) list_highlight_pane_g6_cp1

0x3052,	// (0x0004bc4f) list_highlight_pane_g7_cp1

0x305a,	// (0x0004bc57) list_highlight_pane_g8_cp1

0x3062,	// (0x0004bc5f) list_highlight_pane_g9_cp1

0xc72f,	// (0x0005532c) form_field_slider_pane_t3

0xc73d,	// (0x0005533a) form_field_slider_pane_t4

0x2f5e,	// (0x0004bb5b) slider_form_pane_ParamLimits

0x2f5e,	// (0x0004bb5b) slider_form_pane

0x6bd1,	// (0x0004f7ce) control_abbreviations

0x6bd1,	// (0x0004f7ce) control_conventions

0x6bd1,	// (0x0004f7ce) control_definitions

0x6bd1,	// (0x0004f7ce) format_table_attribute

0x374a,	// (0x0004c347) bg_popup_preview_window_pane_g9

0x6bd1,	// (0x0004f7ce) format_table_data2

0x6bd1,	// (0x0004f7ce) format_table_data3

0x6bd1,	// (0x0004f7ce) format_table_data_example

0x0008,

0x6bd1,	// (0x0004f7ce) intro_purpose

0xf8f5,	// (0x000584f2) bg_popup_preview_window_pane_g

0x6bd1,	// (0x0004f7ce) texts_category

0x6bd1,	// (0x0004f7ce) texts_graphics

0xe7fc,	// (0x000573f9) text_digital

0xe80b,	// (0x00057408) text_primary

0xe81a,	// (0x00057417) text_primary_small

0xe829,	// (0x00057426) text_secondary

0xe838,	// (0x00057435) text_title

0x3ebd,	// (0x0004caba) bg_passive_tab_pane_g1_cp3_srt

0xe5a8,	// (0x000571a5) bg_passive_tab_pane_g2_cp3_srt

0x3ec6,	// (0x0004cac3) bg_passive_tab_pane_g3_cp3_srt

0x6c98,	// (0x0004f895) bg_active_tab_pane_cp3_srt_ParamLimits

0x6c98,	// (0x0004f895) bg_active_tab_pane_cp3_srt

0x3ecf,	// (0x0004cacc) tabs_4_active_pane_srt_g1

0xcbb3,	// (0x000557b0) tabs_4_active_pane_srt_t1_ParamLimits

0xcbb3,	// (0x000557b0) tabs_4_active_pane_srt_t1

0x3ebd,	// (0x0004caba) bg_active_tab_pane_g1_cp3_copy1

0xe5a8,	// (0x000571a5) bg_active_tab_pane_g2_cp3_copy1

0x3ec6,	// (0x0004cac3) bg_active_tab_pane_g3_cp3_copy1

0x6c2b,	// (0x0004f828) tabs_2_long_active_pane_srt_ParamLimits

0x6c2b,	// (0x0004f828) tabs_2_long_active_pane_srt

0x6c2b,	// (0x0004f828) tabs_2_long_passive_pane_srt_ParamLimits

0x6c2b,	// (0x0004f828) tabs_2_long_passive_pane_srt

0x1cef,	// (0x0004a8ec) bg_passive_tab_pane_cp4_srt_ParamLimits

0x1cef,	// (0x0004a8ec) bg_passive_tab_pane_cp4_srt

0x3b87,	// (0x0004c784) bg_passive_tab_pane_g1_cp4_srt

0xe5a8,	// (0x000571a5) bg_passive_tab_pane_g2_cp4_srt

0x3b90,	// (0x0004c78d) bg_passive_tab_pane_g3_cp4_srt

0x6c2b,	// (0x0004f828) bg_active_tab_pane_cp4_srt_ParamLimits

0x6c2b,	// (0x0004f828) bg_active_tab_pane_cp4_srt

0xc9a5,	// (0x000555a2) tabs_2_long_active_pane_srt_t1_ParamLimits

0xc9a5,	// (0x000555a2) tabs_2_long_active_pane_srt_t1

0x3b87,	// (0x0004c784) bg_active_tab_pane_g1_cp4_srt

0xe5a8,	// (0x000571a5) bg_active_tab_pane_g2_cp4_srt

0x3b90,	// (0x0004c78d) bg_active_tab_pane_g3_cp4_srt

0x6c98,	// (0x0004f895) tabs_3_long_active_pane_srt_ParamLimits

0x6c98,	// (0x0004f895) tabs_3_long_active_pane_srt

0x6c98,	// (0x0004f895) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x6c98,	// (0x0004f895) tabs_3_long_passive_pane_cp_srt

0x6c98,	// (0x0004f895) tabs_3_long_passive_pane_srt_ParamLimits

0x6c98,	// (0x0004f895) tabs_3_long_passive_pane_srt

0x1cef,	// (0x0004a8ec) bg_passive_tab_pane_cp5_srt_ParamLimits

0x1cef,	// (0x0004a8ec) bg_passive_tab_pane_cp5_srt

0xe5ef,	// (0x000571ec) bg_passive_tab_pane_g1_cp5_srt

0xe5a8,	// (0x000571a5) bg_passive_tab_pane_g2_cp5_srt

0xe5f8,	// (0x000571f5) bg_passive_tab_pane_g3_cp5_srt

0x6c2b,	// (0x0004f828) bg_active_tab_pane_cp5_srt_ParamLimits

0x6c2b,	// (0x0004f828) bg_active_tab_pane_cp5_srt

0xc98f,	// (0x0005558c) tabs_3_long_active_pane_srt_t1_ParamLimits

0xc98f,	// (0x0005558c) tabs_3_long_active_pane_srt_t1

0xe5ef,	// (0x000571ec) bg_active_tab_pane_g1_cp5_srt

0xe5a8,	// (0x000571a5) bg_active_tab_pane_g2_cp5_srt

0xe5f8,	// (0x000571f5) bg_active_tab_pane_g3_cp5_srt

0x3b67,	// (0x0004c764) navi_text_pane_srt_t1

0x3b5f,	// (0x0004c75c) navi_icon_pane_srt_g1

0x065b,	// (0x00049258) midp_editing_number_pane_srt

0xe847,	// (0x00057444) midp_ticker_pane_srt

0x0663,	// (0x00049260) midp_ticker_pane_srt_g1

0x066b,	// (0x00049268) midp_ticker_pane_srt_g2

0x0001,

0xf77d,	// (0x0005837a) midp_ticker_pane_srt_g

0x0673,	// (0x00049270) midp_ticker_pane_srt_t1

0x3b50,	// (0x0004c74d) midp_editing_number_pane_t1_copy1

0x1cef,	// (0x0004a8ec) listscroll_midp_pane

0x1cef,	// (0x0004a8ec) midp_form_pane

0xe84f,	// (0x0005744c) midp_info_popup_window_ParamLimits

0xe84f,	// (0x0005744c) midp_info_popup_window

0xa76d,	// (0x0005336a) bg_popup_sub_pane_cp50_ParamLimits

0xa76d,	// (0x0005336a) bg_popup_sub_pane_cp50

0x2c58,	// (0x0004b855) listscroll_midp_info_pane_ParamLimits

0x2c58,	// (0x0004b855) listscroll_midp_info_pane

0x2c40,	// (0x0004b83d) listscroll_form_midp_pane_ParamLimits

0x2c40,	// (0x0004b83d) listscroll_form_midp_pane

0x2c4c,	// (0x0004b849) scroll_bar_cp050

0xc723,	// (0x00055320) list_midp_pane

0x4958,	// (0x0004d555) signal_pane_g2_cp

0x2b5a,	// (0x0004b757) listscroll_midp_info_pane_t1_ParamLimits

0x2b5a,	// (0x0004b757) listscroll_midp_info_pane_t1

0x2b72,	// (0x0004b76f) listscroll_midp_info_pane_t2_ParamLimits

0x2b72,	// (0x0004b76f) listscroll_midp_info_pane_t2

0x2bb0,	// (0x0004b7ad) listscroll_midp_info_pane_t3_ParamLimits

0x2bb0,	// (0x0004b7ad) listscroll_midp_info_pane_t3

0x2bea,	// (0x0004b7e7) listscroll_midp_info_pane_t4_ParamLimits

0x2bea,	// (0x0004b7e7) listscroll_midp_info_pane_t4

0x0003,

0xf830,	// (0x0005842d) listscroll_midp_info_pane_t_ParamLimits

0xf830,	// (0x0005842d) listscroll_midp_info_pane_t

0xa837,	// (0x00053434) scroll_pane_cp21

0x2af4,	// (0x0004b6f1) form_midp_field_choice_group_pane

0x2afd,	// (0x0004b6fa) form_midp_field_text_pane

0x2b40,	// (0x0004b73d) form_midp_field_time_pane

0x2b48,	// (0x0004b745) form_midp_gauge_slider_pane

0x2b51,	// (0x0004b74e) form_midp_gauge_wait_pane

0x6bd1,	// (0x0004f7ce) form_midp_image_pane

0x9913,	// (0x00052510) list_single_midp_pane_ParamLimits

0x9913,	// (0x00052510) list_single_midp_pane

0xc6fb,	// (0x000552f8) form_midp_field_text_pane_t1

0x28a4,	// (0x0004b4a1) input_focus_pane_cp050

0x2ae3,	// (0x0004b6e0) list_midp_form_text_pane

0x2a87,	// (0x0004b684) form_midp_field_choice_group_pane_t1

0x2a95,	// (0x0004b692) input_focus_pane_cp051

0x2aa9,	// (0x0004b6a6) list_midp_choice_pane

0x6bd1,	// (0x0004f7ce) status_idle_pane

0x2a6b,	// (0x0004b668) form_midp_field_time_pane_t1

0x6bc7,	// (0x0004f7c4) wait_anim_pane_g2_copy1

0x2a79,	// (0x0004b676) form_midp_field_time_pane_t2

0x0001,

0x0510,	// (0x0004910d) aid_navinavi_width_2_pane

0xf82b,	// (0x00058428) form_midp_field_time_pane_t

0x6bd1,	// (0x0004f7ce) input_focus_pane_cp052

0x6bd1,	// (0x0004f7ce) bg_input_focus_pane_cp040

0x2a2b,	// (0x0004b628) form_midp_gauge_slider_pane_t1

0x2a39,	// (0x0004b636) form_midp_gauge_slider_pane_t2

0xc6df,	// (0x000552dc) form_midp_gauge_slider_pane_t3

0xc6ed,	// (0x000552ea) form_midp_gauge_slider_pane_t4

0x0003,

0xf822,	// (0x0005841f) form_midp_gauge_slider_pane_t

0x2a63,	// (0x0004b660) form_midp_slider_pane

0x6c2b,	// (0x0004f828) bg_input_focus_pane_cp041_ParamLimits

0x6c2b,	// (0x0004f828) bg_input_focus_pane_cp041

0x29f8,	// (0x0004b5f5) form_midp_gauge_wait_pane_t1_ParamLimits

0x29f8,	// (0x0004b5f5) form_midp_gauge_wait_pane_t1

0x2a0a,	// (0x0004b607) form_midp_gauge_wait_pane_t2_ParamLimits

0x2a0a,	// (0x0004b607) form_midp_gauge_wait_pane_t2

0x0001,

0xf81d,	// (0x0005841a) form_midp_gauge_wait_pane_t_ParamLimits

0xf81d,	// (0x0005841a) form_midp_gauge_wait_pane_t

0x2a1c,	// (0x0004b619) form_midp_wait_pane_ParamLimits

0x2a1c,	// (0x0004b619) form_midp_wait_pane

0x29c0,	// (0x0004b5bd) form_midp_image_pane_g1

0x29c9,	// (0x0004b5c6) form_midp_image_pane_t1

0x29d8,	// (0x0004b5d5) form_midp_image_pane_t2

0x29e7,	// (0x0004b5e4) form_midp_image_pane_t3

0x0002,

0xf816,	// (0x00058413) form_midp_image_pane_t

0x29b7,	// (0x0004b5b4) list_single_midp_pane_g1

0xe9cb,	// (0x000575c8) list_single_midp_pane_t1

0xc6c8,	// (0x000552c5) list_midp_form_item_pane_ParamLimits

0xc6c8,	// (0x000552c5) list_midp_form_item_pane

0xe864,	// (0x00057461) list_midp_form_item_pane_t1

0xe873,	// (0x00057470) midp_ticker_pane_g1

0xe87f,	// (0x0005747c) midp_ticker_pane_g2

0x0001,

0xf763,	// (0x00058360) midp_ticker_pane_g

0xafda,	// (0x00053bd7) midp_ticker_pane_t1

0xcb34,	// (0x00055731) midp_editing_number_pane_t1

0x3da1,	// (0x0004c99e) midp_editing_number_pane

0x3db0,	// (0x0004c9ad) midp_ticker_pane

0x3b40,	// (0x0004c73d) ai_message_heading_pane

0x6bd1,	// (0x0004f7ce) bg_popup_window_pane_cp14

0x3b48,	// (0x0004c745) listscroll_ai_message_pane

0x3ac6,	// (0x0004c6c3) ai_message_heading_pane_g1_ParamLimits

0x3ac6,	// (0x0004c6c3) ai_message_heading_pane_g1

0x3ad2,	// (0x0004c6cf) ai_message_heading_pane_g2_ParamLimits

0x3ad2,	// (0x0004c6cf) ai_message_heading_pane_g2

0x3ae0,	// (0x0004c6dd) ai_message_heading_pane_g3_ParamLimits

0x3ae0,	// (0x0004c6dd) ai_message_heading_pane_g3

0x3aec,	// (0x0004c6e9) ai_message_heading_pane_g4_ParamLimits

0x3aec,	// (0x0004c6e9) ai_message_heading_pane_g4

0x0003,

0xf957,	// (0x00058554) ai_message_heading_pane_g_ParamLimits

0xf957,	// (0x00058554) ai_message_heading_pane_g

0x3af8,	// (0x0004c6f5) ai_message_heading_pane_t1_ParamLimits

0x3af8,	// (0x0004c6f5) ai_message_heading_pane_t1

0x3b12,	// (0x0004c70f) ai_message_heading_pane_t2_ParamLimits

0x3b12,	// (0x0004c70f) ai_message_heading_pane_t2

0x0001,

0xf960,	// (0x0005855d) ai_message_heading_pane_t_ParamLimits

0xf960,	// (0x0005855d) ai_message_heading_pane_t

0x3b26,	// (0x0004c723) bg_popup_heading_pane_cp1_ParamLimits

0x3b26,	// (0x0004c723) bg_popup_heading_pane_cp1

0x3ab4,	// (0x0004c6b1) list_ai_message_pane_ParamLimits

0x3ab4,	// (0x0004c6b1) list_ai_message_pane

0xa837,	// (0x00053434) scroll_pane_cp10

0x3a50,	// (0x0004c64d) list_ai_message_pane_g1

0x3a58,	// (0x0004c655) list_ai_message_pane_g2

0x0001,

0xf934,	// (0x00058531) list_ai_message_pane_g

0x3a60,	// (0x0004c65d) list_ai_message_pane_t1_ParamLimits

0x3a60,	// (0x0004c65d) list_ai_message_pane_t1

0x3a75,	// (0x0004c672) list_ai_message_pane_t2_ParamLimits

0x3a75,	// (0x0004c672) list_ai_message_pane_t2

0x3a8a,	// (0x0004c687) list_ai_message_pane_t3_ParamLimits

0x3a8a,	// (0x0004c687) list_ai_message_pane_t3

0x3a9f,	// (0x0004c69c) list_ai_message_pane_t4_ParamLimits

0x3a9f,	// (0x0004c69c) list_ai_message_pane_t4

0x0003,

0xf939,	// (0x00058536) list_ai_message_pane_t_ParamLimits

0xf939,	// (0x00058536) list_ai_message_pane_t

0xc975,	// (0x00055572) cell_ai_soft_ind_pane_ParamLimits

0xc975,	// (0x00055572) cell_ai_soft_ind_pane

0x04f1,	// (0x000490ee) cell_ai_soft_ind_pane_g1_ParamLimits

0x04f1,	// (0x000490ee) cell_ai_soft_ind_pane_g1

0x6bd1,	// (0x0004f7ce) grid_highlight_cp1

0x04fe,	// (0x000490fb) text_secondary_cp56_ParamLimits

0x04fe,	// (0x000490fb) text_secondary_cp56

0x3a0e,	// (0x0004c60b) example_general_pane_ParamLimits

0x3a0e,	// (0x0004c60b) example_general_pane

0x3a1a,	// (0x0004c617) example_parent_pane_g1_ParamLimits

0x3a1a,	// (0x0004c617) example_parent_pane_g1

0x3a26,	// (0x0004c623) example_parent_pane_t1_ParamLimits

0x3a26,	// (0x0004c623) example_parent_pane_t1

0xb5b5,	// (0x000541b2) popup_preview_text_window_ParamLimits

0xb5b5,	// (0x000541b2) popup_preview_text_window

0xe790,	// (0x0005738d) list_single_pane_cp2_g4

0xa110,	// (0x00052d0d) bg_popup_preview_window_pane_ParamLimits

0xa110,	// (0x00052d0d) bg_popup_preview_window_pane

0x3754,	// (0x0004c351) popup_preview_text_window_t1_ParamLimits

0x3754,	// (0x0004c351) popup_preview_text_window_t1

0x3772,	// (0x0004c36f) popup_preview_text_window_t2_ParamLimits

0x3772,	// (0x0004c36f) popup_preview_text_window_t2

0x37bb,	// (0x0004c3b8) popup_preview_text_window_t3_ParamLimits

0x37bb,	// (0x0004c3b8) popup_preview_text_window_t3

0x3800,	// (0x0004c3fd) popup_preview_text_window_t4_ParamLimits

0x3800,	// (0x0004c3fd) popup_preview_text_window_t4

0x0004,

0xf908,	// (0x00058505) popup_preview_text_window_t_ParamLimits

0xf908,	// (0x00058505) popup_preview_text_window_t

0x387e,	// (0x0004c47b) scroll_pane_cp11

0x2830,	// (0x0004b42d) bg_popup_preview_window_pane_g1

0x3708,	// (0x0004c305) bg_popup_preview_window_pane_g2

0x3712,	// (0x0004c30f) bg_popup_preview_window_pane_g3

0x371c,	// (0x0004c319) bg_popup_preview_window_pane_g4

0x3726,	// (0x0004c323) bg_popup_preview_window_pane_g5

0x3730,	// (0x0004c32d) bg_popup_preview_window_pane_g6

0x3738,	// (0x0004c335) bg_popup_preview_window_pane_g7

0x3740,	// (0x0004c33d) bg_popup_preview_window_pane_g8

0xecee,	// (0x000578eb) aid_popup_width_pane

0xb525,	// (0x00054122) popup_midp_note_alarm_window_ParamLimits

0xb525,	// (0x00054122) popup_midp_note_alarm_window

0xa6b5,	// (0x000532b2) data_form_pane_ParamLimits

0x97a2,	// (0x0005239f) form_field_data_pane_g1

0x97ac,	// (0x000523a9) form_field_data_pane_t1_ParamLimits

0xa6c1,	// (0x000532be) input_focus_pane_ParamLimits

0xe50b,	// (0x00057108) data_form_wide_pane_ParamLimits

0xe51c,	// (0x00057119) form_field_data_wide_pane_g1

0xe528,	// (0x00057125) form_field_data_wide_pane_t1_ParamLimits

0xa3c6,	// (0x00052fc3) input_focus_pane_cp6_ParamLimits

0xa7e2,	// (0x000533df) input_popup_find_pane_g1_ParamLimits

0xa7e2,	// (0x000533df) input_popup_find_pane_g1

0xf493,	// (0x00058090) aid_navi_side_left_pane

0xf4a8,	// (0x000580a5) aid_navi_side_right_pane

0x311d,	// (0x0004bd1a) bg_popup_window_pane_cp30_ParamLimits

0x311d,	// (0x0004bd1a) bg_popup_window_pane_cp30

0x3197,	// (0x0004bd94) popup_midp_note_alarm_window_g1_ParamLimits

0x3197,	// (0x0004bd94) popup_midp_note_alarm_window_g1

0x31c7,	// (0x0004bdc4) popup_midp_note_alarm_window_t1_ParamLimits

0x31c7,	// (0x0004bdc4) popup_midp_note_alarm_window_t1

0x3268,	// (0x0004be65) popup_midp_note_alarm_window_t2_ParamLimits

0x3268,	// (0x0004be65) popup_midp_note_alarm_window_t2

0x3316,	// (0x0004bf13) popup_midp_note_alarm_window_t3_ParamLimits

0x3316,	// (0x0004bf13) popup_midp_note_alarm_window_t3

0x3348,	// (0x0004bf45) popup_midp_note_alarm_window_t4_ParamLimits

0x3348,	// (0x0004bf45) popup_midp_note_alarm_window_t4

0x336e,	// (0x0004bf6b) popup_midp_note_alarm_window_t5_ParamLimits

0x336e,	// (0x0004bf6b) popup_midp_note_alarm_window_t5

0x000a,

0xf8a5,	// (0x000584a2) popup_midp_note_alarm_window_t_ParamLimits

0xf8a5,	// (0x000584a2) popup_midp_note_alarm_window_t

0x341a,	// (0x0004c017) wait_bar_pane_cp1_ParamLimits

0x341a,	// (0x0004c017) wait_bar_pane_cp1

0x6bd1,	// (0x0004f7ce) wait_anim_pane_copy1

0x6bd1,	// (0x0004f7ce) wait_border_pane_copy1

0x2e02,	// (0x0004b9ff) wait_border_pane_g1_copy1

0xe542,	// (0x0005713f) form_field_popup_pane_g1

0x97c6,	// (0x000523c3) form_field_popup_pane_t1_ParamLimits

0xa6c1,	// (0x000532be) input_focus_pane_cp7_ParamLimits

0xa6ef,	// (0x000532ec) list_form_pane_ParamLimits

0xe54a,	// (0x00057147) form_field_popup_wide_pane_g1

0xe552,	// (0x0005714f) form_field_popup_wide_pane_t1_ParamLimits

0xa6c1,	// (0x000532be) input_focus_pane_cp8_ParamLimits

0xa6fb,	// (0x000532f8) list_form_wide_pane_ParamLimits

0x3f4a,	// (0x0004cb47) aid_size_cell_graphic_pane

0x9845,	// (0x00052442) data_form_pane_t1_ParamLimits

0x9941,	// (0x0005253e) data_form_wide_pane_t1_ParamLimits

0xb9b9,	// (0x000545b6) bg_status_flat_pane

0x9d2e,	// (0x0005292b) title_pane_t1_ParamLimits

0x6bf3,	// (0x0004f7f0) title_pane_t2_ParamLimits

0x6c19,	// (0x0004f816) title_pane_t3_ParamLimits

0xf55d,	// (0x0005815a) title_pane_t_ParamLimits

0xacdf,	// (0x000538dc) level_1_signal_ParamLimits

0xacf1,	// (0x000538ee) level_2_signal_ParamLimits

0xad04,	// (0x00053901) level_3_signal_ParamLimits

0xad17,	// (0x00053914) level_4_signal_ParamLimits

0xad2a,	// (0x00053927) level_5_signal_ParamLimits

0xad3d,	// (0x0005393a) level_6_signal_ParamLimits

0xad50,	// (0x0005394d) level_7_signal_ParamLimits

0xacdf,	// (0x000538dc) level_1_battery_ParamLimits

0xacf1,	// (0x000538ee) level_2_battery_ParamLimits

0xad04,	// (0x00053901) level_3_battery_ParamLimits

0xad17,	// (0x00053914) level_4_battery_ParamLimits

0xad2a,	// (0x00053927) level_5_battery_ParamLimits

0xad3d,	// (0x0005393a) level_6_battery_ParamLimits

0xad50,	// (0x0005394d) level_7_battery_ParamLimits

0x3022,	// (0x0004bc1f) bg_status_flat_pane_g1

0x302a,	// (0x0004bc27) bg_status_flat_pane_g2

0x3032,	// (0x0004bc2f) bg_status_flat_pane_g3

0x303a,	// (0x0004bc37) bg_status_flat_pane_g4

0x3042,	// (0x0004bc3f) bg_status_flat_pane_g5

0x304a,	// (0x0004bc47) bg_status_flat_pane_g6

0x3052,	// (0x0004bc4f) bg_status_flat_pane_g7

0x9dc2,	// (0x000529bf) tabs_3_active_pane_t1_ParamLimits

0x9dc2,	// (0x000529bf) tabs_3_passive_pane_t1_ParamLimits

0x9ddc,	// (0x000529d9) tabs_4_active_pane_t1_ParamLimits

0x9ddc,	// (0x000529d9) tabs_4_1_passive_pane_t1_ParamLimits

0xa879,	// (0x00053476) tabs_2_active_pane_t1_ParamLimits

0xa879,	// (0x00053476) tabs_2_passive_pane_t1_ParamLimits

0x6c2b,	// (0x0004f828) bg_active_tab_pane_cp4_ParamLimits

0xa88b,	// (0x00053488) tabs_2_long_active_pane_t1_ParamLimits

0x1cef,	// (0x0004a8ec) bg_passive_tab_pane_cp4_ParamLimits

0x0967,	// (0x00049564) list_single_midp_graphic_pane_t1_ParamLimits

0x6c2b,	// (0x0004f828) bg_active_tab_pane_cp5_ParamLimits

0xa89e,	// (0x0005349b) tabs_3_long_active_pane_t1_ParamLimits

0x1cef,	// (0x0004a8ec) bg_passive_tab_pane_cp5_ParamLimits

0x0967,	// (0x00049564) list_single_midp_graphic_pane_t1

0xb9b9,	// (0x000545b6) bg_status_flat_pane_ParamLimits

0x24a8,	// (0x0004b0a5) indicator_pane_cp2_ParamLimits

0x24a8,	// (0x0004b0a5) indicator_pane_cp2

0xc4e7,	// (0x000550e4) navi_pane_srt_ParamLimits

0xc4e7,	// (0x000550e4) navi_pane_srt

0x260f,	// (0x0004b20c) popup_clock_digital_analogue_window_cp1

0x6c6f,	// (0x0004f86c) indicator_pane_t1

0xe847,	// (0x00057444) copy_highlight_pane

0xe847,	// (0x00057444) cursor_graphics_pane

0xe847,	// (0x00057444) graphic_within_text_pane

0xe847,	// (0x00057444) link_highlight_pane

0x3841,	// (0x0004c43e) popup_preview_text_window_t5_ParamLimits

0x3841,	// (0x0004c43e) popup_preview_text_window_t5

0x051a,	// (0x00049117) cursor_digital_pane

0x051a,	// (0x00049117) cursor_primary_pane

0x052b,	// (0x00049128) cursor_primary_small_pane

0x0533,	// (0x00049130) cursor_secondary_pane

0x053b,	// (0x00049138) cursor_title_pane

0x051a,	// (0x00049117) link_highlight_digital_pane

0x0522,	// (0x0004911f) link_highlight_primary_pane

0x052b,	// (0x00049128) link_highlight_primary_small_pane

0x0533,	// (0x00049130) link_highlight_secondary_pane

0x053b,	// (0x00049138) link_highlight_title_pane

0x051a,	// (0x00049117) copy_highlight_digital_pane

0x051a,	// (0x00049117) copy_highlight_primary_pane

0x052b,	// (0x00049128) copy_highlight_primary_small_pane

0x0533,	// (0x00049130) copy_highlight_secondary_pane

0x053b,	// (0x00049138) copy_highlight_title_pane

0x0533,	// (0x00049130) graphic_text_digital_pane

0x30c0,	// (0x0004bcbd) graphic_text_primary_pane

0x30c9,	// (0x0004bcc6) graphic_text_primary_small_pane

0x052b,	// (0x00049128) graphic_text_secondary_pane

0x051a,	// (0x00049117) graphic_text_title_pane

0xafec,	// (0x00053be9) cursor_primary_pane_g1

0x30b2,	// (0x0004bcaf) cursor_text_primary_t1

0xc75f,	// (0x0005535c) cursor_primary_small_pane_g1

0x30a4,	// (0x0004bca1) cursor_text_primary_small_t1

0xc755,	// (0x00055352) cursor_primary_small_pane_g1_copy1

0x308c,	// (0x0004bc89) cursor_text_primary_small_t1_copy1

0x306a,	// (0x0004bc67) cursor_text_title_t1

0xc74b,	// (0x00055348) cursor_title_pane_g1

0xafec,	// (0x00053be9) cursor_digital_pane_g1

0x054d,	// (0x0004914a) cursor_text_digital_t1

0x055b,	// (0x00049158) link_highlight_primary_pane_g1

0x3013,	// (0x0004bc10) link_highlight_primary_pane_t1

0x055b,	// (0x00049158) link_highlight_primary_small_pane_g1

0x0563,	// (0x00049160) link_highlight_primary_small_pane_t1

0x0572,	// (0x0004916f) link_highlight_secondary_pane_g1

0x057a,	// (0x00049177) link_highlight_secondary_pane_t1

0x2f87,	// (0x0004bb84) link_highlight_title_pane_g1

0x2f8f,	// (0x0004bb8c) link_highlight_title_pane_t1

0x2f70,	// (0x0004bb6d) link_highlight_digital_pane_g1

0x2f78,	// (0x0004bb75) link_highlight_digital_pane_t1

0x2e38,	// (0x0004ba35) copy_highlight_primary_pane_g1

0x2e4f,	// (0x0004ba4c) copy_highlight_primary_pane_t1

0x2e38,	// (0x0004ba35) copy_highlight_primary_small_pane_g1

0x2e40,	// (0x0004ba3d) copy_highlight_primary_small_pane_t1

0x0589,	// (0x00049186) copy_highlight_secondary_pane_g1

0x0591,	// (0x0004918e) copy_highlight_secondary_pane_t1

0x2e21,	// (0x0004ba1e) copy_highlight_title_pane_g1

0x2e29,	// (0x0004ba26) copy_highlight_title_pane_t1

0x2e38,	// (0x0004ba35) copy_highlight_digital_pane_g1

0x411a,	// (0x0004cd17) copy_highlight_digital_pane_t1

0x406e,	// (0x0004cc6b) graphic_text_primary_pane_g1

0x40fe,	// (0x0004ccfb) graphic_text_primary_pane_t1

0x410c,	// (0x0004cd09) graphic_text_primary_pane_t2

0x0001,

0xf9d4,	// (0x000585d1) graphic_text_primary_pane_t

0x40da,	// (0x0004ccd7) graphic_text_primary_small_pane_g1

0x40e2,	// (0x0004ccdf) graphic_text_primary_small_pane_t1

0x40f0,	// (0x0004cced) graphic_text_primary_small_pane_t2

0x0001,

0xf9cf,	// (0x000585cc) graphic_text_primary_small_pane_t

0x40b6,	// (0x0004ccb3) graphic_text_secondary_pane_g1

0x40be,	// (0x0004ccbb) graphic_text_secondary_pane_t1

0x40cc,	// (0x0004ccc9) graphic_text_secondary_pane_t2

0x0001,

0xf9ca,	// (0x000585c7) graphic_text_secondary_pane_t

0x4092,	// (0x0004cc8f) graphic_text_title_pane_g1

0x409a,	// (0x0004cc97) graphic_text_title_pane_t1

0x40a8,	// (0x0004cca5) graphic_text_title_pane_t2

0x0001,

0xf9c5,	// (0x000585c2) graphic_text_title_pane_t

0x406e,	// (0x0004cc6b) graphic_text_digital_pane_g1

0x4076,	// (0x0004cc73) graphic_text_digital_pane_t1

0x4084,	// (0x0004cc81) graphic_text_digital_pane_t2

0x0001,

0xf9c0,	// (0x000585bd) graphic_text_digital_pane_t

0x6c2b,	// (0x0004f828) navi_icon_pane_srt_ParamLimits

0x6c2b,	// (0x0004f828) navi_icon_pane_srt

0x6bd1,	// (0x0004f7ce) navi_midp_pane_srt

0x6bd1,	// (0x0004f7ce) navi_navi_pane_srt

0x6c2b,	// (0x0004f828) navi_text_pane_srt_ParamLimits

0x6c2b,	// (0x0004f828) navi_text_pane_srt

0x4039,	// (0x0004cc36) navi_navi_icon_text_pane_srt

0x4041,	// (0x0004cc3e) navi_navi_pane_srt_g1_ParamLimits

0x4041,	// (0x0004cc3e) navi_navi_pane_srt_g1

0x4053,	// (0x0004cc50) navi_navi_pane_srt_g2_ParamLimits

0x4053,	// (0x0004cc50) navi_navi_pane_srt_g2

0x0001,

0xf9bb,	// (0x000585b8) navi_navi_pane_srt_g_ParamLimits

0xf9bb,	// (0x000585b8) navi_navi_pane_srt_g

0x4065,	// (0x0004cc62) navi_navi_tabs_pane_srt

0x4039,	// (0x0004cc36) navi_navi_text_pane_srt

0x4039,	// (0x0004cc36) navi_navi_volume_pane_srt

0x402a,	// (0x0004cc27) navi_navi_text_pane_srt_t1

0x0d19,	// (0x00049916) navi_navi_volume_pane_srt_g1

0x0d21,	// (0x0004991e) volume_small_pane_srt_ParamLimits

0x0d21,	// (0x0004991e) volume_small_pane_srt

0x05a0,	// (0x0004919d) volume_small_pane_srt_g1_ParamLimits

0x05a0,	// (0x0004919d) volume_small_pane_srt_g1

0x05b0,	// (0x000491ad) volume_small_pane_srt_g2_ParamLimits

0x05b0,	// (0x000491ad) volume_small_pane_srt_g2

0x05c1,	// (0x000491be) volume_small_pane_srt_g3_ParamLimits

0x05c1,	// (0x000491be) volume_small_pane_srt_g3

0x05d2,	// (0x000491cf) volume_small_pane_srt_g4_ParamLimits

0x05d2,	// (0x000491cf) volume_small_pane_srt_g4

0x05e3,	// (0x000491e0) volume_small_pane_srt_g5_ParamLimits

0x05e3,	// (0x000491e0) volume_small_pane_srt_g5

0x05f4,	// (0x000491f1) volume_small_pane_srt_g6_ParamLimits

0x05f4,	// (0x000491f1) volume_small_pane_srt_g6

0x0605,	// (0x00049202) volume_small_pane_srt_g7_ParamLimits

0x0605,	// (0x00049202) volume_small_pane_srt_g7

0x0616,	// (0x00049213) volume_small_pane_srt_g8_ParamLimits

0x0616,	// (0x00049213) volume_small_pane_srt_g8

0x0627,	// (0x00049224) volume_small_pane_srt_g9_ParamLimits

0x0627,	// (0x00049224) volume_small_pane_srt_g9

0x0638,	// (0x00049235) volume_small_pane_srt_g10_ParamLimits

0x0638,	// (0x00049235) volume_small_pane_srt_g10

0x0009,

0xf768,	// (0x00058365) volume_small_pane_srt_g_ParamLimits

0xf768,	// (0x00058365) volume_small_pane_srt_g

0xa1c5,	// (0x00052dc2) query_popup_data_pane_cp2

0x4010,	// (0x0004cc0d) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x4010,	// (0x0004cc0d) navi_navi_icon_text_pane_srt_t1

0x30c0,	// (0x0004bcbd) navi_tabs_2_long_pane_srt

0x30c0,	// (0x0004bcbd) navi_tabs_2_pane_srt

0x30c0,	// (0x0004bcbd) navi_tabs_3_long_pane_srt

0x30c0,	// (0x0004bcbd) navi_tabs_3_pane_srt

0x30c0,	// (0x0004bcbd) navi_tabs_4_pane_srt

0x0cf9,	// (0x000498f6) tabs_2_active_pane_srt_ParamLimits

0x0cf9,	// (0x000498f6) tabs_2_active_pane_srt

0x0d09,	// (0x00049906) tabs_2_passive_pane_srt_ParamLimits

0x0d09,	// (0x00049906) tabs_2_passive_pane_srt

0x28a4,	// (0x0004b4a1) bg_passive_tab_pane_cp1_srt_ParamLimits

0x28a4,	// (0x0004b4a1) bg_passive_tab_pane_cp1_srt

0x3fdc,	// (0x0004cbd9) bg_passive_tab_pane_g1_cp1_srt

0xe5a8,	// (0x000571a5) bg_passive_tab_pane_g2_cp1_srt

0x3fe5,	// (0x0004cbe2) bg_passive_tab_pane_g3_cp1_srt

0x6c98,	// (0x0004f895) bg_active_tab_pane_cp1_srt_ParamLimits

0x6c98,	// (0x0004f895) bg_active_tab_pane_cp1_srt

0x3fee,	// (0x0004cbeb) tabs_2_active_pane_srt_g1

0xcc34,	// (0x00055831) tabs_2_active_pane_srt_t1_ParamLimits

0xcc34,	// (0x00055831) tabs_2_active_pane_srt_t1

0x3fdc,	// (0x0004cbd9) bg_active_tab_pane_g1_cp1_srt

0xe5a8,	// (0x000571a5) bg_active_tab_pane_g2_cp1_srt

0x3fe5,	// (0x0004cbe2) bg_active_tab_pane_g3_cp1_srt

0x0cc6,	// (0x000498c3) tabs_3_active_pane_srt_ParamLimits

0x0cc6,	// (0x000498c3) tabs_3_active_pane_srt

0x0cd7,	// (0x000498d4) tabs_3_passive_pane_cp_srt_ParamLimits

0x0cd7,	// (0x000498d4) tabs_3_passive_pane_cp_srt

0x0ce8,	// (0x000498e5) tabs_3_passive_pane_srt_ParamLimits

0x0ce8,	// (0x000498e5) tabs_3_passive_pane_srt

0x28a4,	// (0x0004b4a1) bg_passive_tab_pane_cp2_srt_ParamLimits

0x28a4,	// (0x0004b4a1) bg_passive_tab_pane_cp2_srt

0x0649,	// (0x00049246) bg_passive_tab_pane_g1_cp2_srt

0xe5a8,	// (0x000571a5) bg_passive_tab_pane_g2_cp2_srt

0x0652,	// (0x0004924f) bg_passive_tab_pane_g3_cp2_srt

0x6c98,	// (0x0004f895) bg_active_tab_pane_cp2_srt_ParamLimits

0x6c98,	// (0x0004f895) bg_active_tab_pane_cp2_srt

0x3fc2,	// (0x0004cbbf) tabs_3_active_pane_srt_g1

0xcc1e,	// (0x0005581b) tabs_3_active_pane_srt_t1_ParamLimits

0xcc1e,	// (0x0005581b) tabs_3_active_pane_srt_t1

0x0649,	// (0x00049246) bg_active_tab_pane_g1_cp2_srt

0xe5a8,	// (0x000571a5) bg_active_tab_pane_g2_cp2_srt

0x0652,	// (0x0004924f) bg_active_tab_pane_g3_cp2_srt

0x0c7e,	// (0x0004987b) tabs_4_active_pane_srt_ParamLimits

0x0c7e,	// (0x0004987b) tabs_4_active_pane_srt

0x0c90,	// (0x0004988d) tabs_4_passive_pane_cp2_srt_ParamLimits

0x0c90,	// (0x0004988d) tabs_4_passive_pane_cp2_srt

0x1c7d,	// (0x0004a87a) aid_size_cell_toolbar

0x3bfa,	// (0x0004c7f7) main_idle_act_pane_ParamLimits

0x1eb8,	// (0x0004aab5) popup_large_graphic_colour_window_ParamLimits

0xb87b,	// (0x00054478) popup_toolbar_window_ParamLimits

0xb87b,	// (0x00054478) popup_toolbar_window

0x3dd2,	// (0x0004c9cf) list_single_graphic_2heading_pane_ParamLimits

0x3dd2,	// (0x0004c9cf) list_single_graphic_2heading_pane

0xaa4e,	// (0x0005364b) aid_size_cell_apps_grid_lsc_pane

0xaa60,	// (0x0005365d) aid_size_cell_apps_grid_prt_pane

0x1cef,	// (0x0004a8ec) bg_wml_button_pane_cp1_ParamLimits

0x1cef,	// (0x0004a8ec) bg_wml_button_pane_cp1

0xc6fb,	// (0x000552f8) form_midp_field_text_pane_t1_ParamLimits

0x28a4,	// (0x0004b4a1) input_focus_pane_cp050_ParamLimits

0x2ae3,	// (0x0004b6e0) list_midp_form_text_pane_ParamLimits

0x2a95,	// (0x0004b692) input_focus_pane_cp051_ParamLimits

0x2aa9,	// (0x0004b6a6) list_midp_choice_pane_ParamLimits

0xc6b2,	// (0x000552af) list_single_2graphic_pane_cp3_ParamLimits

0xc6b2,	// (0x000552af) list_single_2graphic_pane_cp3

0x4c7b,	// (0x0004d878) list_single_midp_graphic_pane_ParamLimits

0x4c7b,	// (0x0004d878) list_single_midp_graphic_pane

0xe8a3,	// (0x000574a0) list_single_graphic_2heading_pane_g1_ParamLimits

0xe8a3,	// (0x000574a0) list_single_graphic_2heading_pane_g1

0xe8af,	// (0x000574ac) list_single_graphic_2heading_pane_g4_ParamLimits

0xe8af,	// (0x000574ac) list_single_graphic_2heading_pane_g4

0xe8bb,	// (0x000574b8) list_single_graphic_2heading_pane_g5_ParamLimits

0xe8bb,	// (0x000574b8) list_single_graphic_2heading_pane_g5

0x0002,

0xf7bb,	// (0x000583b8) list_single_graphic_2heading_pane_g_ParamLimits

0xf7bb,	// (0x000583b8) list_single_graphic_2heading_pane_g

0xe8c7,	// (0x000574c4) list_single_graphic_2heading_pane_t1_ParamLimits

0xe8c7,	// (0x000574c4) list_single_graphic_2heading_pane_t1

0xe8db,	// (0x000574d8) list_single_graphic_2heading_pane_t2_ParamLimits

0xe8db,	// (0x000574d8) list_single_graphic_2heading_pane_t2

0xe8f7,	// (0x000574f4) list_single_graphic_2heading_pane_t3_ParamLimits

0xe8f7,	// (0x000574f4) list_single_graphic_2heading_pane_t3

0x0002,

0xf7c2,	// (0x000583bf) list_single_graphic_2heading_pane_t_ParamLimits

0xf7c2,	// (0x000583bf) list_single_graphic_2heading_pane_t

0x276e,	// (0x0004b36b) bg_popup_sub_pane_cp2

0x2798,	// (0x0004b395) grid_toobar_pane

0x08df,	// (0x000494dc) cell_toolbar_pane_ParamLimits

0x08df,	// (0x000494dc) cell_toolbar_pane

0x27d4,	// (0x0004b3d1) cell_toolbar_pane_g1_ParamLimits

0x27d4,	// (0x0004b3d1) cell_toolbar_pane_g1

0x27e8,	// (0x0004b3e5) cell_toolbar_pane_g2_ParamLimits

0x27e8,	// (0x0004b3e5) cell_toolbar_pane_g2

0x0001,

0xf7d0,	// (0x000583cd) cell_toolbar_pane_g_ParamLimits

0xf7d0,	// (0x000583cd) cell_toolbar_pane_g

0x280a,	// (0x0004b407) grid_highlight_pane_cp2_ParamLimits

0x280a,	// (0x0004b407) grid_highlight_pane_cp2

0x2824,	// (0x0004b421) toolbar_button_pane

0x2830,	// (0x0004b42d) toolbar_button_pane_g1

0x2838,	// (0x0004b435) toolbar_button_pane_g2

0x2840,	// (0x0004b43d) toolbar_button_pane_g3

0x2848,	// (0x0004b445) toolbar_button_pane_g4

0x2850,	// (0x0004b44d) toolbar_button_pane_g5

0x2858,	// (0x0004b455) toolbar_button_pane_g6

0x2860,	// (0x0004b45d) toolbar_button_pane_g7

0x2868,	// (0x0004b465) toolbar_button_pane_g8

0x2870,	// (0x0004b46d) toolbar_button_pane_g9

0x0009,

0xf7d5,	// (0x000583d2) toolbar_button_pane_g

0x0923,	// (0x00049520) list_single_2graphic_pane_g1_cp3_ParamLimits

0x0923,	// (0x00049520) list_single_2graphic_pane_g1_cp3

0xbb4f,	// (0x0005474c) list_single_2graphic_pane_g2_cp3_ParamLimits

0xbb4f,	// (0x0005474c) list_single_2graphic_pane_g2_cp3

0xe6b9,	// (0x000572b6) list_single_2graphic_pane_g3_cp3

0x0940,	// (0x0004953d) list_single_2graphic_pane_g4_cp3_ParamLimits

0x0940,	// (0x0004953d) list_single_2graphic_pane_g4_cp3

0x094c,	// (0x00049549) list_single_2graphic_pane_t1_cp3_ParamLimits

0x094c,	// (0x00049549) list_single_2graphic_pane_t1_cp3

0xe6ad,	// (0x000572aa) list_single_midp_graphic_pane_g2_ParamLimits

0xe6ad,	// (0x000572aa) list_single_midp_graphic_pane_g2

0xe88b,	// (0x00057488) aid_zoom_text_primary

0xe893,	// (0x00057490) aid_zoom_text_secondary

0x0706,	// (0x00049303) status_small_pane_g7_ParamLimits

0x0706,	// (0x00049303) status_small_pane_g7

0x0729,	// (0x00049326) status_small_pane_t1_ParamLimits

0x9d16,	// (0x00052913) title_pane_g2

0x0003,

0xf554,	// (0x00058151) title_pane_g

0xa26e,	// (0x00052e6b) aid_size_cell_colour_1_pane_ParamLimits

0xa26e,	// (0x00052e6b) aid_size_cell_colour_1_pane

0xa282,	// (0x00052e7f) aid_size_cell_colour_2_pane_ParamLimits

0xa282,	// (0x00052e7f) aid_size_cell_colour_2_pane

0xa296,	// (0x00052e93) aid_size_cell_colour_3_pane_ParamLimits

0xa296,	// (0x00052e93) aid_size_cell_colour_3_pane

0xa2aa,	// (0x00052ea7) aid_size_cell_colour_4_pane_ParamLimits

0xa2aa,	// (0x00052ea7) aid_size_cell_colour_4_pane

0xf3cf,	// (0x00057fcc) title_pane_stacon_g1_ParamLimits

0xf3cf,	// (0x00057fcc) title_pane_stacon_g1

0x2ea6,	// (0x0004baa3) popup_note_wait_window_g3_ParamLimits

0x2ea6,	// (0x0004baa3) popup_note_wait_window_g3

0x2f1d,	// (0x0004bb1a) popup_note_wait_window_t5_ParamLimits

0x2f1d,	// (0x0004bb1a) popup_note_wait_window_t5

0x6bd1,	// (0x0004f7ce) main_feb_china_hwr_fs_writing_pane

0xb212,	// (0x00053e0f) popup_feb_china_hwr_fs_window_ParamLimits

0xb212,	// (0x00053e0f) popup_feb_china_hwr_fs_window

0xbb60,	// (0x0005475d) aid_size_cell_hwr_fs_ParamLimits

0xbb60,	// (0x0005475d) aid_size_cell_hwr_fs

0x28a4,	// (0x0004b4a1) bg_popup_sub_pane_cp3_ParamLimits

0x28a4,	// (0x0004b4a1) bg_popup_sub_pane_cp3

0xbb75,	// (0x00054772) grid_hwr_fs_pane_ParamLimits

0xbb75,	// (0x00054772) grid_hwr_fs_pane

0x09c2,	// (0x000495bf) linegrid_hwr_fs_pane_ParamLimits

0x09c2,	// (0x000495bf) linegrid_hwr_fs_pane

0xbb8d,	// (0x0005478a) cell_hwr_fs_pane_ParamLimits

0xbb8d,	// (0x0005478a) cell_hwr_fs_pane

0x28b0,	// (0x0004b4ad) linegrid_hwr_fs_pane_g1_ParamLimits

0x28b0,	// (0x0004b4ad) linegrid_hwr_fs_pane_g1

0xc686,	// (0x00055283) linegrid_hwr_fs_pane_g2_ParamLimits

0xc686,	// (0x00055283) linegrid_hwr_fs_pane_g2

0x28ce,	// (0x0004b4cb) linegrid_hwr_fs_pane_g3_ParamLimits

0x28ce,	// (0x0004b4cb) linegrid_hwr_fs_pane_g3

0x09f6,	// (0x000495f3) linegrid_hwr_fs_pane_g4_ParamLimits

0x09f6,	// (0x000495f3) linegrid_hwr_fs_pane_g4

0x0a14,	// (0x00049611) linegrid_hwr_fs_pane_g5_ParamLimits

0x0a14,	// (0x00049611) linegrid_hwr_fs_pane_g5

0x0004,

0xf7fb,	// (0x000583f8) linegrid_hwr_fs_pane_g_ParamLimits

0xf7fb,	// (0x000583f8) linegrid_hwr_fs_pane_g

0x28da,	// (0x0004b4d7) cell_hwr_fs_pane_g1_ParamLimits

0x28da,	// (0x0004b4d7) cell_hwr_fs_pane_g1

0x26a5,	// (0x0004b2a2) cell_hwr_fs_pane_g2_ParamLimits

0x26a5,	// (0x0004b2a2) cell_hwr_fs_pane_g2

0xc698,	// (0x00055295) cell_hwr_fs_pane_g3_ParamLimits

0xc698,	// (0x00055295) cell_hwr_fs_pane_g3

0xc6a5,	// (0x000552a2) cell_hwr_fs_pane_g4_ParamLimits

0xc6a5,	// (0x000552a2) cell_hwr_fs_pane_g4

0x0003,

0xf806,	// (0x00058403) cell_hwr_fs_pane_g_ParamLimits

0xf806,	// (0x00058403) cell_hwr_fs_pane_g

0xbbb3,	// (0x000547b0) cell_hwr_fs_pane_t1

0x6bd1,	// (0x0004f7ce) grid_highlight_pane_cp6

0x6bd1,	// (0x0004f7ce) main_idle_act2_pane

0xa81e,	// (0x0005341b) aid_inside_area_popup_secondary

0xc7c6,	// (0x000553c3) aid_inside_area_window_primary_ParamLimits

0xc7c6,	// (0x000553c3) aid_inside_area_window_primary

0x4129,	// (0x0004cd26) ai2_news_ticker_pane

0x4131,	// (0x0004cd2e) aid_size_cell_ai1_link_ParamLimits

0x4131,	// (0x0004cd2e) aid_size_cell_ai1_link

0x414b,	// (0x0004cd48) popup_ai2_data_window_ParamLimits

0x414b,	// (0x0004cd48) popup_ai2_data_window

0x4169,	// (0x0004cd66) popup_ai2_link_window_ParamLimits

0x4169,	// (0x0004cd66) popup_ai2_link_window

0x28a4,	// (0x0004b4a1) bg_popup_sub_pane_cp4_ParamLimits

0x28a4,	// (0x0004b4a1) bg_popup_sub_pane_cp4

0x417f,	// (0x0004cd7c) grid_ai2_link_pane_ParamLimits

0x417f,	// (0x0004cd7c) grid_ai2_link_pane

0x4196,	// (0x0004cd93) popup_ai2_link_window_g1_ParamLimits

0x4196,	// (0x0004cd93) popup_ai2_link_window_g1

0x41a2,	// (0x0004cd9f) popup_ai2_link_window_g2_ParamLimits

0x41a2,	// (0x0004cd9f) popup_ai2_link_window_g2

0x0001,

0xf9d9,	// (0x000585d6) popup_ai2_link_window_g_ParamLimits

0xf9d9,	// (0x000585d6) popup_ai2_link_window_g

0x41b3,	// (0x0004cdb0) ai2_mp_button_pane

0x41bb,	// (0x0004cdb8) ai2_mp_volume_pane

0x2a95,	// (0x0004b692) bg_popup_sub_pane_cp5_ParamLimits

0x2a95,	// (0x0004b692) bg_popup_sub_pane_cp5

0x41c3,	// (0x0004cdc0) heading_ai2_gene_pane_ParamLimits

0x41c3,	// (0x0004cdc0) heading_ai2_gene_pane

0x41cf,	// (0x0004cdcc) list_ai2_gene_pane_ParamLimits

0x41cf,	// (0x0004cdcc) list_ai2_gene_pane

0x4217,	// (0x0004ce14) cell_ai2_link_pane_ParamLimits

0x4217,	// (0x0004ce14) cell_ai2_link_pane

0x422d,	// (0x0004ce2a) cell_ai2_link_pane_g1

0x6bd1,	// (0x0004f7ce) grid_highlight_pane_cp7

0x0d36,	// (0x00049933) ai2_mp_volume_pane_g1

0x4300,	// (0x0004cefd) ai2_mp_volume_pane_g2

0x4275,	// (0x0004ce72) list_ai2_gene_pane_t1

0x4308,	// (0x0004cf05) ai2_mp_volume_pane_g3

0x0002,

0xf9f2,	// (0x000585ef) ai2_mp_volume_pane_g

0x0d3e,	// (0x0004993b) volume_small_pane_cp3

0x4310,	// (0x0004cf0d) aid_size_cell_ai2_button

0x4318,	// (0x0004cf15) grid_ai2_button_pane

0x4321,	// (0x0004cf1e) cell_ai2_button_pane_ParamLimits

0x4321,	// (0x0004cf1e) cell_ai2_button_pane

0x6bc7,	// (0x0004f7c4) cell_ai2_button_pane_g1

0x6bd1,	// (0x0004f7ce) grid_highlight_pane_cp8

0x42c0,	// (0x0004cebd) ai2_gene_pane_t1_ParamLimits

0x42c0,	// (0x0004cebd) ai2_gene_pane_t1

0xb17e,	// (0x00053d7b) aid_height_parent_landscape

0xc9bc,	// (0x000555b9) aid_height_set_list

0x3bfa,	// (0x0004c7f7) aid_size_parent

0x3f4a,	// (0x0004cb47) aid_size_cell_graphic_pane_ParamLimits

0x41df,	// (0x0004cddc) popup_ai2_data_window_g1_ParamLimits

0x41df,	// (0x0004cddc) popup_ai2_data_window_g1

0x41eb,	// (0x0004cde8) ai2_news_ticker_pane_g1

0x41f3,	// (0x0004cdf0) ai2_news_ticker_pane_g2

0x0001,

0xf9de,	// (0x000585db) ai2_news_ticker_pane_g

0x41fb,	// (0x0004cdf8) ai2_news_ticker_pane_t1

0x4209,	// (0x0004ce06) ai2_news_ticker_pane_t2

0x0001,

0xf9e3,	// (0x000585e0) ai2_news_ticker_pane_t

0x4236,	// (0x0004ce33) heading_ai2_gene_pane_g1

0x423e,	// (0x0004ce3b) heading_ai2_gene_pane_t1_ParamLimits

0x423e,	// (0x0004ce3b) heading_ai2_gene_pane_t1

0x4253,	// (0x0004ce50) list_highlight_pane_cp6

0x425b,	// (0x0004ce58) ai2_gene_pane_ParamLimits

0x425b,	// (0x0004ce58) ai2_gene_pane

0x4283,	// (0x0004ce80) list_ai2_gene_pane_t2

0x0001,

0xf9e8,	// (0x000585e5) list_ai2_gene_pane_t

0x4291,	// (0x0004ce8e) list_highlight_pane_cp8_ParamLimits

0x4291,	// (0x0004ce8e) list_highlight_pane_cp8

0x42a2,	// (0x0004ce9f) ai2_gene_pane_g1_ParamLimits

0x42a2,	// (0x0004ce9f) ai2_gene_pane_g1

0x42b4,	// (0x0004ceb1) ai2_gene_pane_g2_ParamLimits

0x42b4,	// (0x0004ceb1) ai2_gene_pane_g2

0x0001,

0xf9ed,	// (0x000585ea) ai2_gene_pane_g_ParamLimits

0xf9ed,	// (0x000585ea) ai2_gene_pane_g

0xa5eb,	// (0x000531e8) scroll_pane_cp12

0xb13d,	// (0x00053d3a) control_pane_t3_ParamLimits

0xb13d,	// (0x00053d3a) control_pane_t3

0x071a,	// (0x00049317) status_small_pane_g8_ParamLimits

0x071a,	// (0x00049317) status_small_pane_g8

0xb2b4,	// (0x00053eb1) popup_find_window_ParamLimits

0xb565,	// (0x00054162) popup_note_image_window_ParamLimits

0xe90f,	// (0x0005750c) list_double2_graphic_pane_vc_g1_ParamLimits

0xe90f,	// (0x0005750c) list_double2_graphic_pane_vc_g1

0xe48e,	// (0x0005708b) list_double2_graphic_pane_vc_g2_ParamLimits

0xe48e,	// (0x0005708b) list_double2_graphic_pane_vc_g2

0x090f,	// (0x0004950c) list_double2_graphic_pane_vc_g3_ParamLimits

0x090f,	// (0x0004950c) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c9,	// (0x000583c6) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c9,	// (0x000583c6) list_double2_graphic_pane_vc_g

0xe91b,	// (0x00057518) list_double2_graphic_pane_vc_t1_ParamLimits

0xe91b,	// (0x00057518) list_double2_graphic_pane_vc_t1

0xe48e,	// (0x0005708b) list_single_heading_pane_vc_g1_ParamLimits

0xe48e,	// (0x0005708b) list_single_heading_pane_vc_g1

0x090f,	// (0x0004950c) list_single_heading_pane_vc_g2_ParamLimits

0x090f,	// (0x0004950c) list_single_heading_pane_vc_g2

0x0001,

0xf5d8,	// (0x000581d5) list_single_heading_pane_vc_g_ParamLimits

0xf5d8,	// (0x000581d5) list_single_heading_pane_vc_g

0xe931,	// (0x0005752e) list_single_heading_pane_vc_t1_ParamLimits

0xe931,	// (0x0005752e) list_single_heading_pane_vc_t1

0xe949,	// (0x00057546) list_single_heading_pane_vc_t2_ParamLimits

0xe949,	// (0x00057546) list_single_heading_pane_vc_t2

0x0001,

0xf7ea,	// (0x000583e7) list_single_heading_pane_vc_t_ParamLimits

0xf7ea,	// (0x000583e7) list_single_heading_pane_vc_t

0x097d,	// (0x0004957a) list_setting_number_pane_vc_g1_ParamLimits

0x097d,	// (0x0004957a) list_setting_number_pane_vc_g1

0x0989,	// (0x00049586) list_setting_number_pane_vc_g2_ParamLimits

0x0989,	// (0x00049586) list_setting_number_pane_vc_g2

0x0001,

0xf7ef,	// (0x000583ec) list_setting_number_pane_vc_g_ParamLimits

0xf7ef,	// (0x000583ec) list_setting_number_pane_vc_g

0xe95b,	// (0x00057558) list_setting_number_pane_vc_t1_ParamLimits

0xe95b,	// (0x00057558) list_setting_number_pane_vc_t1

0xe96f,	// (0x0005756c) list_setting_number_pane_vc_t2_ParamLimits

0xe96f,	// (0x0005756c) list_setting_number_pane_vc_t2

0xe98b,	// (0x00057588) list_setting_number_pane_vc_t3_ParamLimits

0xe98b,	// (0x00057588) list_setting_number_pane_vc_t3

0x0002,

0xf7f4,	// (0x000583f1) list_setting_number_pane_vc_t_ParamLimits

0xf7f4,	// (0x000583f1) list_setting_number_pane_vc_t

0xe9b9,	// (0x000575b6) set_value_pane_vc_ParamLimits

0xe9b9,	// (0x000575b6) set_value_pane_vc

0x3dd2,	// (0x0004c9cf) list_double2_graphic_pane_vc_ParamLimits

0x3dd2,	// (0x0004c9cf) list_double2_graphic_pane_vc

0x3dd2,	// (0x0004c9cf) list_double2_large_graphic_pane_vc_ParamLimits

0x3dd2,	// (0x0004c9cf) list_double2_large_graphic_pane_vc

0x3dd2,	// (0x0004c9cf) list_double2_pane_vc_ParamLimits

0x3dd2,	// (0x0004c9cf) list_double2_pane_vc

0x3dd2,	// (0x0004c9cf) list_double_graphic_heading_pane_vc_ParamLimits

0x3dd2,	// (0x0004c9cf) list_double_graphic_heading_pane_vc

0x3dd2,	// (0x0004c9cf) list_double_graphic_pane_vc_ParamLimits

0x3dd2,	// (0x0004c9cf) list_double_graphic_pane_vc

0x3dd2,	// (0x0004c9cf) list_double_heading_pane_vc_ParamLimits

0x3dd2,	// (0x0004c9cf) list_double_heading_pane_vc

0x3dd2,	// (0x0004c9cf) list_double_large_graphic_pane_vc_ParamLimits

0x3dd2,	// (0x0004c9cf) list_double_large_graphic_pane_vc

0x3dd2,	// (0x0004c9cf) list_double_number_pane_vc_ParamLimits

0x3dd2,	// (0x0004c9cf) list_double_number_pane_vc

0x3dd2,	// (0x0004c9cf) list_double_pane_vc_ParamLimits

0x3dd2,	// (0x0004c9cf) list_double_pane_vc

0x3dd2,	// (0x0004c9cf) list_double_time_pane_vc_ParamLimits

0x3dd2,	// (0x0004c9cf) list_double_time_pane_vc

0x3dd2,	// (0x0004c9cf) list_setting_number_pane_vc_ParamLimits

0x3dd2,	// (0x0004c9cf) list_setting_number_pane_vc

0x3dd2,	// (0x0004c9cf) list_setting_pane_vc_ParamLimits

0x3dd2,	// (0x0004c9cf) list_setting_pane_vc

0x3dd2,	// (0x0004c9cf) list_single_graphic_heading_pane_vc_ParamLimits

0x3dd2,	// (0x0004c9cf) list_single_graphic_heading_pane_vc

0x3dd2,	// (0x0004c9cf) list_single_heading_pane_vc_ParamLimits

0x3dd2,	// (0x0004c9cf) list_single_heading_pane_vc

0x3dd2,	// (0x0004c9cf) list_single_number_heading_pane_vc_ParamLimits

0x3dd2,	// (0x0004c9cf) list_single_number_heading_pane_vc

0xe90f,	// (0x0005750c) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xe90f,	// (0x0005750c) list_double_graphic_heading_pane_vc_g1

0x0d47,	// (0x00049944) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x0d47,	// (0x00049944) list_double_graphic_heading_pane_vc_g2

0x0d53,	// (0x00049950) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x0d53,	// (0x00049950) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9f9,	// (0x000585f6) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9f9,	// (0x000585f6) list_double_graphic_heading_pane_vc_g

0xeed9,	// (0x00057ad6) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xeed9,	// (0x00057ad6) list_double_graphic_heading_pane_vc_t1

0xeeef,	// (0x00057aec) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xeeef,	// (0x00057aec) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa00,	// (0x000585fd) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa00,	// (0x000585fd) list_double_graphic_heading_pane_vc_t

0x097d,	// (0x0004957a) list_setting_pane_vc_g1_ParamLimits

0x097d,	// (0x0004957a) list_setting_pane_vc_g1

0x0989,	// (0x00049586) list_setting_pane_vc_g2_ParamLimits

0x0989,	// (0x00049586) list_setting_pane_vc_g2

0x0001,

0xf7ef,	// (0x000583ec) list_setting_pane_vc_g_ParamLimits

0xf7ef,	// (0x000583ec) list_setting_pane_vc_g

0xef0d,	// (0x00057b0a) list_setting_pane_vc_t1_ParamLimits

0xef0d,	// (0x00057b0a) list_setting_pane_vc_t1

0xef29,	// (0x00057b26) list_setting_pane_vc_t2_ParamLimits

0xef29,	// (0x00057b26) list_setting_pane_vc_t2

0x0001,

0xfa43,	// (0x00058640) list_setting_pane_vc_t_ParamLimits

0xfa43,	// (0x00058640) list_setting_pane_vc_t

0xe9b9,	// (0x000575b6) set_value_pane_cp_vc_ParamLimits

0xe9b9,	// (0x000575b6) set_value_pane_cp_vc

0xe48e,	// (0x0005708b) list_single_number_heading_pane_vc_g1_ParamLimits

0xe48e,	// (0x0005708b) list_single_number_heading_pane_vc_g1

0x090f,	// (0x0004950c) list_single_number_heading_pane_vc_g2_ParamLimits

0x090f,	// (0x0004950c) list_single_number_heading_pane_vc_g2

0x0001,

0xf5d8,	// (0x000581d5) list_single_number_heading_pane_vc_g_ParamLimits

0xf5d8,	// (0x000581d5) list_single_number_heading_pane_vc_g

0xe931,	// (0x0005752e) list_single_number_heading_pane_vc_t1_ParamLimits

0xe931,	// (0x0005752e) list_single_number_heading_pane_vc_t1

0xef45,	// (0x00057b42) list_single_number_heading_pane_vc_t2_ParamLimits

0xef45,	// (0x00057b42) list_single_number_heading_pane_vc_t2

0xeeb1,	// (0x00057aae) list_single_number_heading_pane_vc_t3_ParamLimits

0xeeb1,	// (0x00057aae) list_single_number_heading_pane_vc_t3

0x0002,

0xfa48,	// (0x00058645) list_single_number_heading_pane_vc_t_ParamLimits

0xfa48,	// (0x00058645) list_single_number_heading_pane_vc_t

0xe90f,	// (0x0005750c) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xe90f,	// (0x0005750c) list_single_graphic_heading_pane_vc_g1

0xe48e,	// (0x0005708b) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xe48e,	// (0x0005708b) list_single_graphic_heading_pane_vc_g4

0x090f,	// (0x0004950c) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x090f,	// (0x0004950c) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c9,	// (0x000583c6) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c9,	// (0x000583c6) list_single_graphic_heading_pane_vc_g

0xe931,	// (0x0005752e) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xe931,	// (0x0005752e) list_single_graphic_heading_pane_vc_t1

0xef57,	// (0x00057b54) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xef57,	// (0x00057b54) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa4f,	// (0x0005864c) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa4f,	// (0x0005864c) list_single_graphic_heading_pane_vc_t

0xe48e,	// (0x0005708b) list_double2_pane_vc_g1_ParamLimits

0xe48e,	// (0x0005708b) list_double2_pane_vc_g1

0x090f,	// (0x0004950c) list_double2_pane_vc_g2_ParamLimits

0x090f,	// (0x0004950c) list_double2_pane_vc_g2

0x0001,

0xf5d8,	// (0x000581d5) list_double2_pane_vc_g_ParamLimits

0xf5d8,	// (0x000581d5) list_double2_pane_vc_g

0xeec3,	// (0x00057ac0) list_double2_pane_vc_t1_ParamLimits

0xeec3,	// (0x00057ac0) list_double2_pane_vc_t1

0x0d5f,	// (0x0004995c) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x0d5f,	// (0x0004995c) list_double2_large_graphic_pane_vc_g1

0xe48e,	// (0x0005708b) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xe48e,	// (0x0005708b) list_double2_large_graphic_pane_vc_g2

0x090f,	// (0x0004950c) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x090f,	// (0x0004950c) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5f0,	// (0x000581ed) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5f0,	// (0x000581ed) list_double2_large_graphic_pane_vc_g

0xee9b,	// (0x00057a98) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xee9b,	// (0x00057a98) list_double2_large_graphic_pane_vc_t1

0x0d6b,	// (0x00049968) list_double_time_pane_vc_g1_ParamLimits

0x0d6b,	// (0x00049968) list_double_time_pane_vc_g1

0x0d77,	// (0x00049974) list_double_time_pane_vc_g2_ParamLimits

0x0d77,	// (0x00049974) list_double_time_pane_vc_g2

0x0001,

0xfa54,	// (0x00058651) list_double_time_pane_vc_g_ParamLimits

0xfa54,	// (0x00058651) list_double_time_pane_vc_g

0xef69,	// (0x00057b66) list_double_time_pane_vc_t1_ParamLimits

0xef69,	// (0x00057b66) list_double_time_pane_vc_t1

0xef93,	// (0x00057b90) list_double_time_pane_vc_t2_ParamLimits

0xef93,	// (0x00057b90) list_double_time_pane_vc_t2

0xefdc,	// (0x00057bd9) list_double_time_pane_vc_t3_ParamLimits

0xefdc,	// (0x00057bd9) list_double_time_pane_vc_t3

0xefee,	// (0x00057beb) list_double_time_pane_vc_t4_ParamLimits

0xefee,	// (0x00057beb) list_double_time_pane_vc_t4

0x0003,

0xfa59,	// (0x00058656) list_double_time_pane_vc_t_ParamLimits

0xfa59,	// (0x00058656) list_double_time_pane_vc_t

0xe48e,	// (0x0005708b) list_double_pane_vc_g1_ParamLimits

0xe48e,	// (0x0005708b) list_double_pane_vc_g1

0x090f,	// (0x0004950c) list_double_pane_vc_g2_ParamLimits

0x090f,	// (0x0004950c) list_double_pane_vc_g2

0x0001,

0xf5d8,	// (0x000581d5) list_double_pane_vc_g_ParamLimits

0xf5d8,	// (0x000581d5) list_double_pane_vc_g

0xf013,	// (0x00057c10) list_double_pane_vc_t1_ParamLimits

0xf013,	// (0x00057c10) list_double_pane_vc_t1

0xf027,	// (0x00057c24) list_double_pane_vc_t2_ParamLimits

0xf027,	// (0x00057c24) list_double_pane_vc_t2

0x0001,

0xfa62,	// (0x0005865f) list_double_pane_vc_t_ParamLimits

0xfa62,	// (0x0005865f) list_double_pane_vc_t

0xe48e,	// (0x0005708b) list_double_number_pane_vc_g1_ParamLimits

0xe48e,	// (0x0005708b) list_double_number_pane_vc_g1

0x090f,	// (0x0004950c) list_double_number_pane_vc_g2_ParamLimits

0x090f,	// (0x0004950c) list_double_number_pane_vc_g2

0x0001,

0xf5d8,	// (0x000581d5) list_double_number_pane_vc_g_ParamLimits

0xf5d8,	// (0x000581d5) list_double_number_pane_vc_g

0xf03d,	// (0x00057c3a) list_double_number_pane_vc_t1_ParamLimits

0xf03d,	// (0x00057c3a) list_double_number_pane_vc_t1

0xf051,	// (0x00057c4e) list_double_number_pane_vc_t2_ParamLimits

0xf051,	// (0x00057c4e) list_double_number_pane_vc_t2

0xf065,	// (0x00057c62) list_double_number_pane_vc_t3_ParamLimits

0xf065,	// (0x00057c62) list_double_number_pane_vc_t3

0x0002,

0xfa67,	// (0x00058664) list_double_number_pane_vc_t_ParamLimits

0xfa67,	// (0x00058664) list_double_number_pane_vc_t

0x0d83,	// (0x00049980) list_double_large_graphic_pane_vc_g1_ParamLimits

0x0d83,	// (0x00049980) list_double_large_graphic_pane_vc_g1

0x0d94,	// (0x00049991) list_double_large_graphic_pane_vc_g2_ParamLimits

0x0d94,	// (0x00049991) list_double_large_graphic_pane_vc_g2

0x090f,	// (0x0004950c) list_double_large_graphic_pane_vc_g3_ParamLimits

0x090f,	// (0x0004950c) list_double_large_graphic_pane_vc_g3

0xf07b,	// (0x00057c78) list_double_large_graphic_pane_vc_g4_ParamLimits

0xf07b,	// (0x00057c78) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa6e,	// (0x0005866b) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa6e,	// (0x0005866b) list_double_large_graphic_pane_vc_g

0xf087,	// (0x00057c84) list_double_large_graphic_pane_vc_t1_ParamLimits

0xf087,	// (0x00057c84) list_double_large_graphic_pane_vc_t1

0xf0a0,	// (0x00057c9d) list_double_large_graphic_pane_vc_t2_ParamLimits

0xf0a0,	// (0x00057c9d) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa77,	// (0x00058674) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa77,	// (0x00058674) list_double_large_graphic_pane_vc_t

0x0d47,	// (0x00049944) list_double_heading_pane_vc_g1_ParamLimits

0x0d47,	// (0x00049944) list_double_heading_pane_vc_g1

0x0d53,	// (0x00049950) list_double_heading_pane_vc_g2_ParamLimits

0x0d53,	// (0x00049950) list_double_heading_pane_vc_g2

0x0001,

0xfa7c,	// (0x00058679) list_double_heading_pane_vc_g_ParamLimits

0xfa7c,	// (0x00058679) list_double_heading_pane_vc_g

0xf0b7,	// (0x00057cb4) list_double_heading_pane_vc_t1_ParamLimits

0xf0b7,	// (0x00057cb4) list_double_heading_pane_vc_t1

0xe931,	// (0x0005752e) list_double_heading_pane_vc_t2_ParamLimits

0xe931,	// (0x0005752e) list_double_heading_pane_vc_t2

0x0001,

0xfa81,	// (0x0005867e) list_double_heading_pane_vc_t_ParamLimits

0xfa81,	// (0x0005867e) list_double_heading_pane_vc_t

0xe90f,	// (0x0005750c) list_double_graphic_pane_vc_g1_ParamLimits

0xe90f,	// (0x0005750c) list_double_graphic_pane_vc_g1

0x0da3,	// (0x000499a0) list_double_graphic_pane_vc_g2_ParamLimits

0x0da3,	// (0x000499a0) list_double_graphic_pane_vc_g2

0x0db2,	// (0x000499af) list_double_graphic_pane_vc_g3_ParamLimits

0x0db2,	// (0x000499af) list_double_graphic_pane_vc_g3

0x0002,

0xfa86,	// (0x00058683) list_double_graphic_pane_vc_g_ParamLimits

0xfa86,	// (0x00058683) list_double_graphic_pane_vc_g

0xf0c9,	// (0x00057cc6) list_double_graphic_pane_vc_t1_ParamLimits

0xf0c9,	// (0x00057cc6) list_double_graphic_pane_vc_t1

0xf0dd,	// (0x00057cda) list_double_graphic_pane_vc_t2_ParamLimits

0xf0dd,	// (0x00057cda) list_double_graphic_pane_vc_t2

0x0001,

0xfa8d,	// (0x0005868a) list_double_graphic_pane_vc_t_ParamLimits

0xfa8d,	// (0x0005868a) list_double_graphic_pane_vc_t

0xecfa,	// (0x000578f7) aid_size_cell_fastswap

0x9aef,	// (0x000526ec) aid_size_cell_touch_ParamLimits

0x9aef,	// (0x000526ec) aid_size_cell_touch

0xee77,	// (0x00057a74) popup_fast_swap_wide_window_ParamLimits

0xee77,	// (0x00057a74) popup_fast_swap_wide_window

0x9cad,	// (0x000528aa) touch_pane_ParamLimits

0x9cad,	// (0x000528aa) touch_pane

0xa6ad,	// (0x000532aa) button_value_adjust_pane_cp2

0xe4b4,	// (0x000570b1) button_value_adjust_pane_cp4

0xe4bc,	// (0x000570b9) form_field_data_pane_cp2

0x9776,	// (0x00052373) form_field_data_wide_pane_cp2

0xab5f,	// (0x0005375c) bg_scroll_pane_ParamLimits

0xf52b,	// (0x00058128) scroll_handle_pane_ParamLimits

0xf53f,	// (0x0005813c) scroll_sc2_down_pane_ParamLimits

0xf53f,	// (0x0005813c) scroll_sc2_down_pane

0xab90,	// (0x0005378d) scroll_sc2_up_pane_ParamLimits

0xab90,	// (0x0005378d) scroll_sc2_up_pane

0xcd8f,	// (0x0005598c) grid_wheel_folder_pane_g1_ParamLimits

0xcd8f,	// (0x0005598c) grid_wheel_folder_pane_g1

0x0309,	// (0x00048f06) clock_nsta_pane_cp2_ParamLimits

0x0309,	// (0x00048f06) clock_nsta_pane_cp2

0x1cef,	// (0x0004a8ec) listscroll_midp_pane_ParamLimits

0xaf43,	// (0x00053b40) midp_canvas_pane

0x1c6b,	// (0x0004a868) nsta_clock_indic_pane

0x1cb9,	// (0x0004a8b6) listscroll_form_pane_vc

0x1cdd,	// (0x0004a8da) listscroll_set_pane_vc_ParamLimits

0x1cdd,	// (0x0004a8da) listscroll_set_pane_vc

0xb9e1,	// (0x000545de) clock_nsta_pane

0xba0b,	// (0x00054608) indicator_nsta_pane

0x276e,	// (0x0004b36b) bg_popup_sub_pane_cp2_ParamLimits

0x2782,	// (0x0004b37f) find_pane_cp2_ParamLimits

0x2782,	// (0x0004b37f) find_pane_cp2

0x2798,	// (0x0004b395) grid_toobar_pane_ParamLimits

0x2878,	// (0x0004b475) list_form_gen_pane_vc_ParamLimits

0x2878,	// (0x0004b475) list_form_gen_pane_vc

0x288e,	// (0x0004b48b) scroll_pane_cp8_vc_ParamLimits

0x288e,	// (0x0004b48b) scroll_pane_cp8_vc

0x290a,	// (0x0004b507) data_form_wide_pane_vc_ParamLimits

0x290a,	// (0x0004b507) data_form_wide_pane_vc

0x2916,	// (0x0004b513) form_field_data_wide_pane_vc_g1

0x291e,	// (0x0004b51b) form_field_data_wide_pane_vc_t1_ParamLimits

0x291e,	// (0x0004b51b) form_field_data_wide_pane_vc_t1

0xa6c1,	// (0x000532be) input_focus_pane_cp6_vc_ParamLimits

0xa6c1,	// (0x000532be) input_focus_pane_cp6_vc

0xc723,	// (0x00055320) list_midp_pane_ParamLimits

0x3fb6,	// (0x0004cbb3) scroll_pane_cp16_ParamLimits

0x3fb6,	// (0x0004cbb3) scroll_pane_cp16

0x2c7a,	// (0x0004b877) button_value_adjust_pane_ParamLimits

0x2c7a,	// (0x0004b877) button_value_adjust_pane

0xc9cd,	// (0x000555ca) button_value_adjust_pane_cp6_ParamLimits

0xc9cd,	// (0x000555ca) button_value_adjust_pane_cp6

0xcb0f,	// (0x0005570c) settings_code_pane_cp_ParamLimits

0xcb0f,	// (0x0005570c) settings_code_pane_cp

0x6bc7,	// (0x0004f7c4) cell_touch_pane_g1

0x6bc7,	// (0x0004f7c4) cell_touch_pane_g2

0x0001,

0xf70e,	// (0x0005830b) cell_touch_pane_g

0xcc4a,	// (0x00055847) cell_touch_pane_cp_ParamLimits

0xcc4a,	// (0x00055847) cell_touch_pane_cp

0xcc66,	// (0x00055863) cell_touch_pane_ParamLimits

0xcc66,	// (0x00055863) cell_touch_pane

0x6bc7,	// (0x0004f7c4) scroll_sc2_down_pane_g1

0x6bc7,	// (0x0004f7c4) scroll_sc2_up_pane_g1

0x6bd1,	// (0x0004f7ce) bg_set_opt_pane_cp4_vc

0x4354,	// (0x0004cf51) list_set_graphic_pane_vc_g1_ParamLimits

0x4354,	// (0x0004cf51) list_set_graphic_pane_vc_g1

0xcc84,	// (0x00055881) list_set_graphic_pane_vc_g2_ParamLimits

0xcc84,	// (0x00055881) list_set_graphic_pane_vc_g2

0x0001,

0xfa05,	// (0x00058602) list_set_graphic_pane_vc_g_ParamLimits

0xfa05,	// (0x00058602) list_set_graphic_pane_vc_g

0x4360,	// (0x0004cf5d) text_primary_small_cp13_vc_ParamLimits

0x4360,	// (0x0004cf5d) text_primary_small_cp13_vc

0x4378,	// (0x0004cf75) list_set_graphic_pane_vc_ParamLimits

0x4378,	// (0x0004cf75) list_set_graphic_pane_vc

0x6bd1,	// (0x0004f7ce) input_focus_pane_cp2_vc

0x6bc7,	// (0x0004f7c4) setting_code_pane_vc_g1

0x6c42,	// (0x0004f83f) setting_code_pane_vc_t1

0x438d,	// (0x0004cf8a) set_text_pane_vc_t1_ParamLimits

0x438d,	// (0x0004cf8a) set_text_pane_vc_t1

0x6bd1,	// (0x0004f7ce) input_focus_pane_cp1_vc

0x43ab,	// (0x0004cfa8) list_set_text_pane_vc

0x6bc7,	// (0x0004f7c4) setting_text_pane_vc_g1

0x6bd1,	// (0x0004f7ce) bg_set_opt_pane_cp2_vc

0x6c39,	// (0x0004f836) setting_slider_graphic_pane_vc_g1

0x43b5,	// (0x0004cfb2) setting_slider_graphic_pane_vc_t1

0x43c7,	// (0x0004cfc4) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa0a,	// (0x00058607) setting_slider_graphic_pane_vc_t

0x43d9,	// (0x0004cfd6) slider_set_pane_cp_vc

0x43e3,	// (0x0004cfe0) slider_set_pane_vc_g1

0x43ec,	// (0x0004cfe9) slider_set_pane_vc_g2

0x0006,

0xfa0f,	// (0x0005860c) slider_set_pane_vc_g

0xa71c,	// (0x00053319) set_opt_bg_pane_g1_copy1

0xa724,	// (0x00053321) set_opt_bg_pane_g2_copy1

0x4418,	// (0x0004d015) set_opt_bg_pane_g3_copy1

0xa734,	// (0x00053331) set_opt_bg_pane_g4_copy1

0xa73c,	// (0x00053339) set_opt_bg_pane_g5_copy1

0xa744,	// (0x00053341) set_opt_bg_pane_g6_copy1

0x4422,	// (0x0004d01f) set_opt_bg_pane_g7_copy1

0x442c,	// (0x0004d029) set_opt_bg_pane_g8_copy1

0x4436,	// (0x0004d033) set_opt_bg_pane_g9_copy1

0x6bd1,	// (0x0004f7ce) bg_set_opt_pane_cp_vc

0x4440,	// (0x0004d03d) setting_slider_pane_vc_t1

0x444f,	// (0x0004d04c) setting_slider_pane_vc_t2

0x4461,	// (0x0004d05e) setting_slider_pane_vc_t3

0x0002,

0xfa1e,	// (0x0005861b) setting_slider_pane_vc_t

0x4473,	// (0x0004d070) slider_set_pane_vc

0x0a38,	// (0x00049635) volume_set_pane_vc_g1

0x0a41,	// (0x0004963e) volume_set_pane_vc_g2

0x0a4a,	// (0x00049647) volume_set_pane_vc_g3

0x0a53,	// (0x00049650) volume_set_pane_vc_g4

0x0a5c,	// (0x00049659) volume_set_pane_vc_g5

0x0a65,	// (0x00049662) volume_set_pane_vc_g6

0x0a6e,	// (0x0004966b) volume_set_pane_vc_g7

0x0a77,	// (0x00049674) volume_set_pane_vc_g8

0x0a80,	// (0x0004967d) volume_set_pane_vc_g9

0x0a89,	// (0x00049686) volume_set_pane_vc_g10

0x0009,

0xfa25,	// (0x00058622) volume_set_pane_vc_g

0x447d,	// (0x0004d07a) volume_set_pane_vc

0x4487,	// (0x0004d084) button_value_adjust_pane_cp1_vc

0x4491,	// (0x0004d08e) list_highlight_pane_cp2_vc

0x449a,	// (0x0004d097) list_set_pane_vc_ParamLimits

0x449a,	// (0x0004d097) list_set_pane_vc

0x450a,	// (0x0004d107) main_pane_set_vc_t1_ParamLimits

0x450a,	// (0x0004d107) main_pane_set_vc_t1

0x451f,	// (0x0004d11c) main_pane_set_vc_t2_ParamLimits

0x451f,	// (0x0004d11c) main_pane_set_vc_t2

0x4531,	// (0x0004d12e) main_pane_set_vc_t3_ParamLimits

0x4531,	// (0x0004d12e) main_pane_set_vc_t3

0x4545,	// (0x0004d142) main_pane_set_vc_t4_ParamLimits

0x4545,	// (0x0004d142) main_pane_set_vc_t4

0x0003,

0xfa3a,	// (0x00058637) main_pane_set_vc_t_ParamLimits

0xfa3a,	// (0x00058637) main_pane_set_vc_t

0x4559,	// (0x0004d156) setting_code_pane_vc_ParamLimits

0x4559,	// (0x0004d156) setting_code_pane_vc

0x456a,	// (0x0004d167) setting_slider_graphic_pane_vc

0x456a,	// (0x0004d167) setting_slider_pane_vc

0x456a,	// (0x0004d167) setting_text_pane_vc

0x456a,	// (0x0004d167) setting_volume_pane_vc

0x4574,	// (0x0004d171) scroll_pane_cp121_vc

0xa69b,	// (0x00053298) set_content_pane_vc

0x457c,	// (0x0004d179) button_value_adjust_pane_g1

0x4585,	// (0x0004d182) button_value_adjust_pane_g2

0x0001,

0xfa92,	// (0x0005868f) button_value_adjust_pane_g

0x458e,	// (0x0004d18b) form_field_slider_wide_pane_vc_t1_ParamLimits

0x458e,	// (0x0004d18b) form_field_slider_wide_pane_vc_t1

0x45a0,	// (0x0004d19d) form_field_slider_wide_pane_vc_t2_ParamLimits

0x45a0,	// (0x0004d19d) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa97,	// (0x00058694) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa97,	// (0x00058694) form_field_slider_wide_pane_vc_t

0x6c98,	// (0x0004f895) input_focus_pane_cp10_vc_ParamLimits

0x6c98,	// (0x0004f895) input_focus_pane_cp10_vc

0x45cc,	// (0x0004d1c9) slider_cont_pane_cp1_vc_ParamLimits

0x45cc,	// (0x0004d1c9) slider_cont_pane_cp1_vc

0x45de,	// (0x0004d1db) slider_form_pane_g1_cp2

0x43ec,	// (0x0004cfe9) slider_form_pane_g2_cp2

0x460b,	// (0x0004d208) form_field_slider_pane_vc_t3

0x4619,	// (0x0004d216) form_field_slider_pane_vc_t4

0x4627,	// (0x0004d224) slider_form_pane_vc_ParamLimits

0x4627,	// (0x0004d224) slider_form_pane_vc

0x4634,	// (0x0004d231) form_field_slider_pane_vc_t1_ParamLimits

0x4634,	// (0x0004d231) form_field_slider_pane_vc_t1

0x45a0,	// (0x0004d19d) form_field_slider_pane_vc_t2_ParamLimits

0x45a0,	// (0x0004d19d) form_field_slider_pane_vc_t2

0x0001,

0xfaa9,	// (0x000586a6) form_field_slider_pane_vc_t_ParamLimits

0xfaa9,	// (0x000586a6) form_field_slider_pane_vc_t

0x6c98,	// (0x0004f895) input_focus_pane_cp9_vc_ParamLimits

0x6c98,	// (0x0004f895) input_focus_pane_cp9_vc

0x464a,	// (0x0004d247) slider_cont_pane_vc_ParamLimits

0x464a,	// (0x0004d247) slider_cont_pane_vc

0x465e,	// (0x0004d25b) list_form_graphic_pane_cp_vc_ParamLimits

0x465e,	// (0x0004d25b) list_form_graphic_pane_cp_vc

0x2916,	// (0x0004b513) form_field_popup_wide_pane_vc_g1

0x4673,	// (0x0004d270) form_field_popup_wide_pane_vc_t1_ParamLimits

0x4673,	// (0x0004d270) form_field_popup_wide_pane_vc_t1

0xa6c1,	// (0x000532be) input_focus_pane_cp8_vc_ParamLimits

0xa6c1,	// (0x000532be) input_focus_pane_cp8_vc

0x46b8,	// (0x0004d2b5) list_form_wide_pane_vc_ParamLimits

0x46b8,	// (0x0004d2b5) list_form_wide_pane_vc

0x46c4,	// (0x0004d2c1) list_form_graphic_pane_vc_g1

0x46cc,	// (0x0004d2c9) list_form_graphic_pane_vc_t1_ParamLimits

0x46cc,	// (0x0004d2c9) list_form_graphic_pane_vc_t1

0x6c2b,	// (0x0004f828) list_highlight_pane_cp5_vc_ParamLimits

0x6c2b,	// (0x0004f828) list_highlight_pane_cp5_vc

0x46e8,	// (0x0004d2e5) list_form_graphic_pane_vc_ParamLimits

0x46e8,	// (0x0004d2e5) list_form_graphic_pane_vc

0x2916,	// (0x0004b513) form_field_popup_pane_vc_g1

0x46fe,	// (0x0004d2fb) form_field_popup_pane_vc_t1_ParamLimits

0x46fe,	// (0x0004d2fb) form_field_popup_pane_vc_t1

0xa6c1,	// (0x000532be) input_focus_pane_cp7_vc_ParamLimits

0xa6c1,	// (0x000532be) input_focus_pane_cp7_vc

0x4715,	// (0x0004d312) list_form_pane_vc_ParamLimits

0x4715,	// (0x0004d312) list_form_pane_vc

0x4721,	// (0x0004d31e) data_form_pane_vc_t1_ParamLimits

0x4721,	// (0x0004d31e) data_form_pane_vc_t1

0xa71c,	// (0x00053319) input_focus_pane_vc_g1

0xa724,	// (0x00053321) input_focus_pane_vc_g2

0xa72c,	// (0x00053329) input_focus_pane_vc_g3

0xa734,	// (0x00053331) input_focus_pane_vc_g4

0xa73c,	// (0x00053339) input_focus_pane_vc_g5

0xa744,	// (0x00053341) input_focus_pane_vc_g6

0xa74c,	// (0x00053349) input_focus_pane_vc_g7

0xa754,	// (0x00053351) input_focus_pane_vc_g8

0xa75c,	// (0x00053359) input_focus_pane_vc_g9

0x6bc7,	// (0x0004f7c4) input_focus_pane_vc_g10

0x0009,

0xf697,	// (0x00058294) input_focus_pane_vc_g

0x290a,	// (0x0004b507) data_form_pane_vc_ParamLimits

0x290a,	// (0x0004b507) data_form_pane_vc

0x2916,	// (0x0004b513) form_field_data_pane_vc_g1

0x473e,	// (0x0004d33b) form_field_data_pane_vc_t1_ParamLimits

0x473e,	// (0x0004d33b) form_field_data_pane_vc_t1

0xa6c1,	// (0x000532be) input_focus_pane_vc_ParamLimits

0xa6c1,	// (0x000532be) input_focus_pane_vc

0x4758,	// (0x0004d355) button_value_adjust_pane_cp3_vc

0x4760,	// (0x0004d35d) button_value_adjust_pane_cp5_vc

0x4768,	// (0x0004d365) form_field_data_pane_vc_ParamLimits

0x4768,	// (0x0004d365) form_field_data_pane_vc

0x4783,	// (0x0004d380) form_field_data_pane_vc_cp2

0x478b,	// (0x0004d388) form_field_data_wide_pane_vc_ParamLimits

0x478b,	// (0x0004d388) form_field_data_wide_pane_vc

0x47a5,	// (0x0004d3a2) form_field_data_wide_pane_vc_cp2

0x47ad,	// (0x0004d3aa) form_field_popup_pane_vc_ParamLimits

0x47ad,	// (0x0004d3aa) form_field_popup_pane_vc

0x47c8,	// (0x0004d3c5) form_field_popup_wide_pane_vc_ParamLimits

0x47c8,	// (0x0004d3c5) form_field_popup_wide_pane_vc

0x47e2,	// (0x0004d3df) form_field_slider_pane_vc_ParamLimits

0x47e2,	// (0x0004d3df) form_field_slider_pane_vc

0x47f5,	// (0x0004d3f2) form_field_slider_wide_pane_vc_ParamLimits

0x47f5,	// (0x0004d3f2) form_field_slider_wide_pane_vc

0xcc90,	// (0x0005588d) grid_touch_1_pane_ParamLimits

0xcc90,	// (0x0005588d) grid_touch_1_pane

0xcca4,	// (0x000558a1) grid_touch_2_pane_ParamLimits

0xcca4,	// (0x000558a1) grid_touch_2_pane

0x48cc,	// (0x0004d4c9) touch_pane_g1_ParamLimits

0x48cc,	// (0x0004d4c9) touch_pane_g1

0x482e,	// (0x0004d42b) cell_app_pane_cp_wide_ParamLimits

0x482e,	// (0x0004d42b) cell_app_pane_cp_wide

0x483f,	// (0x0004d43c) grid_popup_fast_wide_pane_ParamLimits

0x483f,	// (0x0004d43c) grid_popup_fast_wide_pane

0x4853,	// (0x0004d450) scroll_pane_cp19_ParamLimits

0x4853,	// (0x0004d450) scroll_pane_cp19

0x6bd1,	// (0x0004f7ce) bg_popup_window_pane_cp20

0x4867,	// (0x0004d464) listscroll_popup_fast_wide_pane

0xccd0,	// (0x000558cd) grid_indicator_nsta_pane

0x486f,	// (0x0004d46c) clock_nsta_pane_g1

0x4878,	// (0x0004d475) clock_nsta_pane_t1

0xccde,	// (0x000558db) cell_indicator_nsta_pane_ParamLimits

0xccde,	// (0x000558db) cell_indicator_nsta_pane

0x48cc,	// (0x0004d4c9) cell_indicator_nsta_pane_g1

0xccfb,	// (0x000558f8) cell_indicator_nsta_pane_g2

0x0001,

0xfaba,	// (0x000586b7) cell_indicator_nsta_pane_g

0x48f0,	// (0x0004d4ed) clock_nsta_pane_cp

0x48f8,	// (0x0004d4f5) indicator_nsta_pane_cp

0x4901,	// (0x0004d4fe) nsta_clock_indic_pane_g1

0x6c67,	// (0x0004f864) grid_indicator_pane

0xac82,	// (0x0005387f) scroll_pane_cp29

0x0255,	// (0x00048e52) indicator_nsta_pane_cp2_ParamLimits

0x0255,	// (0x00048e52) indicator_nsta_pane_cp2

0x6c2b,	// (0x0004f828) main_apps_wheel_pane

0x2afd,	// (0x0004b6fa) form_midp_field_text_pane_ParamLimits

0x2c4c,	// (0x0004b849) scroll_bar_cp050_ParamLimits

0x496a,	// (0x0004d567) cell_indicator_pane_ParamLimits

0x496a,	// (0x0004d567) cell_indicator_pane

0x4982,	// (0x0004d57f) cell_indicator_pane_g1

0xcd11,	// (0x0005590e) grid_wheel_folder_pane_ParamLimits

0xcd11,	// (0x0005590e) grid_wheel_folder_pane

0xcd1f,	// (0x0005591c) list_wheel_apps_pane_ParamLimits

0xcd1f,	// (0x0005591c) list_wheel_apps_pane

0xcd2d,	// (0x0005592a) main_apps_wheel_pane_g1_ParamLimits

0xcd2d,	// (0x0005592a) main_apps_wheel_pane_g1

0xcd3d,	// (0x0005593a) main_apps_wheel_pane_g2_ParamLimits

0xcd3d,	// (0x0005593a) main_apps_wheel_pane_g2

0x0001,

0xfad6,	// (0x000586d3) main_apps_wheel_pane_g_ParamLimits

0xfad6,	// (0x000586d3) main_apps_wheel_pane_g

0xcd4d,	// (0x0005594a) main_apps_wheel_pane_t1_ParamLimits

0xcd4d,	// (0x0005594a) main_apps_wheel_pane_t1

0xcd65,	// (0x00055962) list_wheel_apps_pane_g1

0xcd6d,	// (0x0005596a) list_wheel_apps_pane_g2

0xcd75,	// (0x00055972) list_wheel_apps_pane_g3

0xcd7d,	// (0x0005597a) list_wheel_apps_pane_g4

0xcd85,	// (0x00055982) list_wheel_apps_pane_g5

0x0004,

0xfadb,	// (0x000586d8) list_wheel_apps_pane_g

0xe6f7,	// (0x000572f4) navi_icon_text_pane

0xb8d3,	// (0x000544d0) aid_fill_nsta

0xcda2,	// (0x0005599f) navi_icon_text_pane_g1

0xcdae,	// (0x000559ab) navi_icon_text_pane_t1

0xaea7,	// (0x00053aa4) list_set_graphic_pane_t1_ParamLimits

0xaea7,	// (0x00053aa4) list_set_graphic_pane_t1

0x339d,	// (0x0004bf9a) popup_midp_note_alarm_window_t6_ParamLimits

0x339d,	// (0x0004bf9a) popup_midp_note_alarm_window_t6

0x33af,	// (0x0004bfac) popup_midp_note_alarm_window_t7_ParamLimits

0x33af,	// (0x0004bfac) popup_midp_note_alarm_window_t7

0x33c1,	// (0x0004bfbe) popup_midp_note_alarm_window_t8_ParamLimits

0x33c1,	// (0x0004bfbe) popup_midp_note_alarm_window_t8

0x33d3,	// (0x0004bfd0) popup_midp_note_alarm_window_t9_ParamLimits

0x33d3,	// (0x0004bfd0) popup_midp_note_alarm_window_t9

0x33e5,	// (0x0004bfe2) popup_midp_note_alarm_window_t10_ParamLimits

0x33e5,	// (0x0004bfe2) popup_midp_note_alarm_window_t10

0x33f7,	// (0x0004bff4) popup_midp_note_alarm_window_t11_ParamLimits

0x33f7,	// (0x0004bff4) popup_midp_note_alarm_window_t11

0x3409,	// (0x0004c006) scroll_pane_cp17_ParamLimits

0x3409,	// (0x0004c006) scroll_pane_cp17

0x0a38,	// (0x00049635) volume_small_pane_cp_g1

0x0dbe,	// (0x000499bb) volume_small_pane_cp_g2

0x0dc7,	// (0x000499c4) volume_small_pane_cp_g3

0x0dd0,	// (0x000499cd) volume_small_pane_cp_g4

0x0dd9,	// (0x000499d6) volume_small_pane_cp_g5

0x0de2,	// (0x000499df) volume_small_pane_cp_g6

0x0deb,	// (0x000499e8) volume_small_pane_cp_g7

0x0df4,	// (0x000499f1) volume_small_pane_cp_g8

0x0dfd,	// (0x000499fa) volume_small_pane_cp_g9

0x0e06,	// (0x00049a03) volume_small_pane_cp_g10

0xe873,	// (0x00057470) midp_ticker_pane_g1_ParamLimits

0xe87f,	// (0x0005747c) midp_ticker_pane_g2_ParamLimits

0xf763,	// (0x00058360) midp_ticker_pane_g_ParamLimits

0xafda,	// (0x00053bd7) midp_ticker_pane_t1_ParamLimits

0xb8f7,	// (0x000544f4) aid_fill_nsta_2

0x2c38,	// (0x0004b835) list_form2_midp_pane

0x3da1,	// (0x0004c99e) midp_editing_number_pane_ParamLimits

0x3db0,	// (0x0004c9ad) midp_ticker_pane_ParamLimits

0x4a75,	// (0x0004d672) form2_midp_field_pane

0x4a99,	// (0x0004d696) scroll_pane_cp51

0x4ab9,	// (0x0004d6b6) form2_midp_button_pane_ParamLimits

0x4ab9,	// (0x0004d6b6) form2_midp_button_pane

0x4acb,	// (0x0004d6c8) form2_midp_content_pane_ParamLimits

0x4acb,	// (0x0004d6c8) form2_midp_content_pane

0x4ae5,	// (0x0004d6e2) form2_midp_field_choice_group_pane

0x4aed,	// (0x0004d6ea) form2_midp_field_pane_g1

0x4af5,	// (0x0004d6f2) form2_midp_field_pane_g2

0x4afd,	// (0x0004d6fa) form2_midp_field_pane_g3

0x4b05,	// (0x0004d702) form2_midp_field_pane_g4

0x0003,

0xfb00,	// (0x000586fd) form2_midp_field_pane_g

0x4b0d,	// (0x0004d70a) form2_midp_gauge_slider_pane

0x4b15,	// (0x0004d712) form2_midp_gauge_wait_pane

0x4b1d,	// (0x0004d71a) form2_midp_image_pane_ParamLimits

0x4b1d,	// (0x0004d71a) form2_midp_image_pane

0x4b38,	// (0x0004d735) form2_midp_label_pane_ParamLimits

0x4b38,	// (0x0004d735) form2_midp_label_pane

0xcddc,	// (0x000559d9) form2_midp_label_pane_cp_ParamLimits

0xcddc,	// (0x000559d9) form2_midp_label_pane_cp

0x4b78,	// (0x0004d775) form2_midp_string_pane_ParamLimits

0x4b78,	// (0x0004d775) form2_midp_string_pane

0xf0f3,	// (0x00057cf0) form2_midp_text_pane_ParamLimits

0xf0f3,	// (0x00057cf0) form2_midp_text_pane

0x4b8a,	// (0x0004d787) form2_midp_time_pane

0x4b9a,	// (0x0004d797) input_focus_pane_cp51_ParamLimits

0x4b9a,	// (0x0004d797) input_focus_pane_cp51

0x4bb2,	// (0x0004d7af) form2_midp_label_pane_t1_ParamLimits

0x4bb2,	// (0x0004d7af) form2_midp_label_pane_t1

0xf116,	// (0x00057d13) form2_mdip_text_pane_t1_ParamLimits

0xf116,	// (0x00057d13) form2_mdip_text_pane_t1

0xf135,	// (0x00057d32) form2_midp_time_pane_t1

0x4c00,	// (0x0004d7fd) form2_midp_gauge_slider_pane_t1

0xcdfd,	// (0x000559fa) form2_midp_gauge_slider_pane_t2

0xce0f,	// (0x00055a0c) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb09,	// (0x00058706) form2_midp_gauge_slider_pane_t

0x4c36,	// (0x0004d833) form2_midp_slider_pane

0x4c42,	// (0x0004d83f) form2_midp_gauge_wait_pane_t1

0x4c50,	// (0x0004d84d) form2_midp_wait_pane_ParamLimits

0x4c50,	// (0x0004d84d) form2_midp_wait_pane

0x295d,	// (0x0004b55a) list_single_2graphic_pane_cp4_ParamLimits

0x295d,	// (0x0004b55a) list_single_2graphic_pane_cp4

0x4c7b,	// (0x0004d878) list_single_midp_graphic_pane_cp_ParamLimits

0x4c7b,	// (0x0004d878) list_single_midp_graphic_pane_cp

0x6bd1,	// (0x0004f7ce) list_highlight_pane_cp20

0x4c9f,	// (0x0004d89c) list_single_2graphic_pane_g1_cp4

0x4236,	// (0x0004ce33) list_single_2graphic_pane_g2_cp4

0x4ca7,	// (0x0004d8a4) list_single_2graphic_pane_t1_cp4

0x6c2b,	// (0x0004f828) list_highlight_pane_cp21

0x4cb6,	// (0x0004d8b3) list_single_midp_graphic_pane_g4_cp

0x4cc5,	// (0x0004d8c2) list_single_midp_graphic_pane_t1_cp

0xce21,	// (0x00055a1e) form2_mdip_string_pane_t1_ParamLimits

0xce21,	// (0x00055a1e) form2_mdip_string_pane_t1

0x6bd1,	// (0x0004f7ce) bg_wml_button_pane_cp2

0x6bc7,	// (0x0004f7c4) form2_midp_image_pane_g1

0xf37e,	// (0x00057f7b) list_double_large_graphic_pane_g5_ParamLimits

0xf37e,	// (0x00057f7b) list_double_large_graphic_pane_g5

0x1cef,	// (0x0004a8ec) midp_form_pane_ParamLimits

0x6c2b,	// (0x0004f828) main_apps_wheel_pane_ParamLimits

0xb5eb,	// (0x000541e8) popup_preview_window_ParamLimits

0xb5eb,	// (0x000541e8) popup_preview_window

0x22b7,	// (0x0004aeb4) popup_touch_info_window_ParamLimits

0x22b7,	// (0x0004aeb4) popup_touch_info_window

0x22d9,	// (0x0004aed6) popup_touch_menu_window_ParamLimits

0x22d9,	// (0x0004aed6) popup_touch_menu_window

0x6bbd,	// (0x0004f7ba) bg_popup_sub_pane_cp6

0x4d7f,	// (0x0004d97c) list_touch_menu_pane

0x4d87,	// (0x0004d984) list_single_touch_menu_pane_ParamLimits

0x4d87,	// (0x0004d984) list_single_touch_menu_pane

0x4d9f,	// (0x0004d99c) list_single_touch_menu_pane_t1

0x6c2b,	// (0x0004f828) bg_popup_sub_pane_cp7_ParamLimits

0x6c2b,	// (0x0004f828) bg_popup_sub_pane_cp7

0x4dad,	// (0x0004d9aa) heading_sub_pane

0x4db5,	// (0x0004d9b2) list_touch_info_pane_ParamLimits

0x4db5,	// (0x0004d9b2) list_touch_info_pane

0x4dc4,	// (0x0004d9c1) list_single_touch_info_pane_ParamLimits

0x4dc4,	// (0x0004d9c1) list_single_touch_info_pane

0x4dd6,	// (0x0004d9d3) list_single_touch_info_pane_t1

0x4de4,	// (0x0004d9e1) list_single_touch_info_pane_t2

0x0001,

0xfb17,	// (0x00058714) list_single_touch_info_pane_t

0xe847,	// (0x00057444) bg_popup_heading_pane_cp

0x4df2,	// (0x0004d9ef) heading_sub_pane_t1

0x28a4,	// (0x0004b4a1) bg_popup_preview_window_pane_cp_ParamLimits

0x28a4,	// (0x0004b4a1) bg_popup_preview_window_pane_cp

0x4dad,	// (0x0004d9aa) heading_preview_pane

0x4db5,	// (0x0004d9b2) list_preview_pane_ParamLimits

0x4db5,	// (0x0004d9b2) list_preview_pane

0x4e00,	// (0x0004d9fd) popup_preview_window_g1

0x4dc4,	// (0x0004d9c1) list_single_preview_pane_ParamLimits

0x4dc4,	// (0x0004d9c1) list_single_preview_pane

0x4e08,	// (0x0004da05) list_single_preview_pane_g1

0x4e10,	// (0x0004da0d) list_single_preview_pane_t1

0x4dd6,	// (0x0004d9d3) list_single_preview_pane_t2

0x0001,

0xfb1c,	// (0x00058719) list_single_preview_pane_t

0x4e1e,	// (0x0004da1b) bg_popup_heading_pane_cp2_ParamLimits

0x4e1e,	// (0x0004da1b) bg_popup_heading_pane_cp2

0x4e34,	// (0x0004da31) heading_preview_pane_g1

0x4e3c,	// (0x0004da39) heading_preview_pane_t1_ParamLimits

0x4e3c,	// (0x0004da39) heading_preview_pane_t1

0x6c7e,	// (0x0004f87b) soft_indicator_pane_t1_ParamLimits

0xa5c8,	// (0x000531c5) scroll_pane_ParamLimits

0xab7e,	// (0x0005377b) scroll_sc2_left_pane

0xab87,	// (0x00053784) scroll_sc2_right_pane

0xaba6,	// (0x000537a3) scroll_bg_pane_g1_ParamLimits

0xabbb,	// (0x000537b8) scroll_bg_pane_g2_ParamLimits

0xabd3,	// (0x000537d0) scroll_bg_pane_g3_ParamLimits

0xf6ee,	// (0x000582eb) scroll_bg_pane_g_ParamLimits

0xaba6,	// (0x000537a3) scroll_handle_pane_g1_ParamLimits

0xabf5,	// (0x000537f2) scroll_handle_pane_g2_ParamLimits

0xabd3,	// (0x000537d0) scroll_handle_pane_g3_ParamLimits

0xf6f5,	// (0x000582f2) scroll_handle_pane_g_ParamLimits

0x1d17,	// (0x0004a914) popup_choice_list_window_ParamLimits

0x1d17,	// (0x0004a914) popup_choice_list_window

0x277a,	// (0x0004b377) choice_list_pane

0x27fc,	// (0x0004b3f9) cell_toolbar_pane_t1

0x2824,	// (0x0004b421) toolbar_button_pane_ParamLimits

0x38d3,	// (0x0004c4d0) ai_gene_pane_1_t2_ParamLimits

0x38d3,	// (0x0004c4d0) ai_gene_pane_1_t2

0x0001,

0xf918,	// (0x00058515) ai_gene_pane_1_t_ParamLimits

0xf918,	// (0x00058515) ai_gene_pane_1_t

0x4e59,	// (0x0004da56) scroll_sc2_left_pane_g1

0x4e59,	// (0x0004da56) scroll_sc2_right_pane_g1

0x1cef,	// (0x0004a8ec) bg_popup_sub_pane_cp10

0x4e63,	// (0x0004da60) list_choice_list_pane

0x4e7c,	// (0x0004da79) list_single_choice_list_pane_ParamLimits

0x4e7c,	// (0x0004da79) list_single_choice_list_pane

0x4e94,	// (0x0004da91) list_single_choice_list_pane_g1

0xa85c,	// (0x00053459) list_single_choice_list_pane_t1_ParamLimits

0xa85c,	// (0x00053459) list_single_choice_list_pane_t1

0x4e9c,	// (0x0004da99) choice_list_pane_g1

0x4ea4,	// (0x0004daa1) choice_list_pane_t1

0x6bbd,	// (0x0004f7ba) input_focus_pane_cp11

0xaa19,	// (0x00053616) title_pane_stacon_g2_ParamLimits

0xaa19,	// (0x00053616) title_pane_stacon_g2

0x0002,

0xf6d4,	// (0x000582d1) title_pane_stacon_g_ParamLimits

0xf6d4,	// (0x000582d1) title_pane_stacon_g

0xe847,	// (0x00057444) cursor_press_pane

0xb268,	// (0x00053e65) popup_fep_hwr_window_ParamLimits

0xb268,	// (0x00053e65) popup_fep_hwr_window

0x1e5b,	// (0x0004aa58) popup_fep_vkb_window_ParamLimits

0x1e5b,	// (0x0004aa58) popup_fep_vkb_window

0x4eb2,	// (0x0004daaf) cursor_press_pane_g1

0x0002,

0xfb45,	// (0x00058742) fep_vkb_side_pane_g_ParamLimits

0x0e3a,	// (0x00049a37) fep_hwr_candidate_pane_ParamLimits

0x0e3a,	// (0x00049a37) fep_hwr_candidate_pane

0x0e64,	// (0x00049a61) fep_hwr_side_pane_ParamLimits

0x0e64,	// (0x00049a61) fep_hwr_side_pane

0x0e86,	// (0x00049a83) fep_hwr_top_pane_ParamLimits

0x0e86,	// (0x00049a83) fep_hwr_top_pane

0x0e9e,	// (0x00049a9b) fep_hwr_write_pane_ParamLimits

0x0e9e,	// (0x00049a9b) fep_hwr_write_pane

0xfb45,	// (0x00058742) fep_vkb_side_pane_g

0x4eba,	// (0x0004dab7) fep_hwr_top_pane_g1

0x4ecc,	// (0x0004dac9) fep_hwr_top_pane_g2

0x0eca,	// (0x00049ac7) fep_hwr_top_pane_g3

0x0002,

0xfb21,	// (0x0005871e) fep_hwr_top_pane_g

0x0edf,	// (0x00049adc) fep_hwr_top_text_pane

0xc323,	// (0x00054f20) fep_hwr_top_text_pane_g1

0x4f02,	// (0x0004daff) fep_hwr_top_text_pane_t1

0x0fe9,	// (0x00049be6) fep_hwr_candidate_pane_g1

0x514d,	// (0x0004dd4a) fep_vkb_keypad_pane_g3_ParamLimits

0x514d,	// (0x0004dd4a) fep_vkb_keypad_pane_g3

0x5179,	// (0x0004dd76) fep_vkb_keypad_pane_g4_ParamLimits

0x5179,	// (0x0004dd76) fep_vkb_keypad_pane_g4

0x51f0,	// (0x0004dded) fep_vkb_bottom_pane_g2_ParamLimits

0x51f0,	// (0x0004dded) fep_vkb_bottom_pane_g2

0x0001,

0xfb4c,	// (0x00058749) fep_vkb_bottom_pane_g_ParamLimits

0xfb4c,	// (0x00058749) fep_vkb_bottom_pane_g

0x4e59,	// (0x0004da56) cell_vkb_side_pane_g2

0x0001,

0xfb56,	// (0x00058753) cell_vkb_side_pane_g

0x527b,	// (0x0004de78) cell_vkb_side_pane_t1

0x5289,	// (0x0004de86) cell_vkb_side_pane_t1_copy1

0x4e59,	// (0x0004da56) bg_fep_vkb_candidate_pane_g2

0x53cd,	// (0x0004dfca) cell_vkb_candidate_pane_ParamLimits

0x4f10,	// (0x0004db0d) aid_size_cell_vkb_ParamLimits

0x4f10,	// (0x0004db0d) aid_size_cell_vkb

0x53cd,	// (0x0004dfca) cell_vkb_candidate_pane

0x1003,	// (0x00049c00) bg_popup_fep_shadow_pane_g1

0xcef1,	// (0x00055aee) fep_vkb_bottom_pane_ParamLimits

0xcef1,	// (0x00055aee) fep_vkb_bottom_pane

0x4fdf,	// (0x0004dbdc) fep_vkb_candidate_pane_ParamLimits

0x4fdf,	// (0x0004dbdc) fep_vkb_candidate_pane

0xcf1d,	// (0x00055b1a) fep_vkb_keypad_pane_ParamLimits

0xcf1d,	// (0x00055b1a) fep_vkb_keypad_pane

0xcf44,	// (0x00055b41) fep_vkb_side_pane_ParamLimits

0xcf44,	// (0x00055b41) fep_vkb_side_pane

0xcf80,	// (0x00055b7d) fep_vkb_top_pane_ParamLimits

0xcf80,	// (0x00055b7d) fep_vkb_top_pane

0x50a6,	// (0x0004dca3) fep_vkb_top_pane_g1_ParamLimits

0x50a6,	// (0x0004dca3) fep_vkb_top_pane_g1

0x50b5,	// (0x0004dcb2) fep_vkb_top_pane_g2_ParamLimits

0x50b5,	// (0x0004dcb2) fep_vkb_top_pane_g2

0x50c4,	// (0x0004dcc1) fep_vkb_top_pane_g3_ParamLimits

0x50c4,	// (0x0004dcc1) fep_vkb_top_pane_g3

0x0003,

0xfb3c,	// (0x00058739) fep_vkb_top_pane_g_ParamLimits

0xfb3c,	// (0x00058739) fep_vkb_top_pane_g

0x50e2,	// (0x0004dcdf) fep_vkb_top_text_pane_ParamLimits

0x50e2,	// (0x0004dcdf) fep_vkb_top_text_pane

0xcfbc,	// (0x00055bb9) fep_vkb_side_pane_g1_ParamLimits

0xcfbc,	// (0x00055bb9) fep_vkb_side_pane_g1

0x513c,	// (0x0004dd39) grid_vkb_side_pane_ParamLimits

0x513c,	// (0x0004dd39) grid_vkb_side_pane

0x100b,	// (0x00049c08) bg_popup_fep_shadow_pane_g2

0x1014,	// (0x00049c11) bg_popup_fep_shadow_pane_g3

0x101c,	// (0x00049c19) bg_popup_fep_shadow_pane_g4

0x1025,	// (0x00049c22) bg_popup_fep_shadow_pane_g5

0x102f,	// (0x00049c2c) bg_popup_fep_shadow_pane_g6

0x1037,	// (0x00049c34) bg_popup_fep_shadow_pane_g7

0xa73c,	// (0x00053339) bg_popup_fep_shadow_pane_g8

0x519b,	// (0x0004dd98) grid_vkb_keypad_number_pane_ParamLimits

0x519b,	// (0x0004dd98) grid_vkb_keypad_number_pane

0x51af,	// (0x0004ddac) grid_vkb_keypad_pane_ParamLimits

0x51af,	// (0x0004ddac) grid_vkb_keypad_pane

0x51d5,	// (0x0004ddd2) fep_vkb_bottom_pane_g1_ParamLimits

0x51d5,	// (0x0004ddd2) fep_vkb_bottom_pane_g1

0x51fe,	// (0x0004ddfb) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x51fe,	// (0x0004ddfb) grid_vkb_keypad_bottom_left_pane

0x5213,	// (0x0004de10) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x5213,	// (0x0004de10) grid_vkb_keypad_bottom_right_pane

0x5228,	// (0x0004de25) fep_vkb_top_text_pane_g1

0xd003,	// (0x00055c00) fep_vkb_top_text_pane_t1

0xd015,	// (0x00055c12) cell_vkb_side_pane_ParamLimits

0xd015,	// (0x00055c12) cell_vkb_side_pane

0x4e59,	// (0x0004da56) cell_vkb_side_pane_g1

0x5297,	// (0x0004de94) cell_vkb_keypad_pane_ParamLimits

0x5297,	// (0x0004de94) cell_vkb_keypad_pane

0x5324,	// (0x0004df21) cell_vkb_keypad_pane_g1

0x0008,

0xfb69,	// (0x00058766) bg_popup_fep_shadow_pane_g

0x4e59,	// (0x0004da56) cell_hwr_side_pane_g1

0x4e59,	// (0x0004da56) cell_hwr_side_pane_g2

0x532e,	// (0x0004df2b) cell_vkb_keypad_pane_t1

0xd02b,	// (0x00055c28) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xd02b,	// (0x00055c28) cell_vkb_keypad_bottom_left_pane

0xd040,	// (0x00055c3d) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xd040,	// (0x00055c3d) cell_vkb_keypad_bottom_right_pane

0x4e59,	// (0x0004da56) cell_vkb_keypad_bottom_left_pane_g1

0x4e59,	// (0x0004da56) cell_vkb_keypad_bottom_right_pane_g1

0x5392,	// (0x0004df8f) cell_vkb_keypad_number_pane_ParamLimits

0x5392,	// (0x0004df8f) cell_vkb_keypad_number_pane

0x53b1,	// (0x0004dfae) cell_vkb_keypad_number_pane_g1

0x53bb,	// (0x0004dfb8) cell_vkb_keypad_number_pane_g2

0x53c4,	// (0x0004dfc1) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb5b,	// (0x00058758) cell_vkb_keypad_number_pane_g

0x532e,	// (0x0004df2b) cell_vkb_keypad_number_pane_t1

0x53ee,	// (0x0004dfeb) fep_vkb_candidate_pane_g1

0x0001,

0xfb56,	// (0x00058753) cell_hwr_side_pane_g

0x5407,	// (0x0004e004) cell_hwr_side_pane_t1

0x1049,	// (0x00049c46) cell_hwr_side_pane_t1_copy1

0x50d4,	// (0x0004dcd1) cell_hwr_candidate_pane_g1

0x1057,	// (0x00049c54) cell_hwr_candidate_pane_t1

0x4e59,	// (0x0004da56) cell_vkb_candidate_pane_g2

0x548d,	// (0x0004e08a) cell_vkb_candidate_pane_t1

0x8925,	// (0x00051522) bg_popup_fep_shadow_pane_ParamLimits

0x8925,	// (0x00051522) bg_popup_fep_shadow_pane

0xceb7,	// (0x00055ab4) bg_fep_hwr_top_pane_g4

0x4ede,	// (0x0004dadb) bg_hwr_side_pane_g1_ParamLimits

0x4ede,	// (0x0004dadb) bg_hwr_side_pane_g1

0xbd55,	// (0x00054952) cell_hwr_side_pane_ParamLimits

0xbd55,	// (0x00054952) cell_hwr_side_pane

0x0f5a,	// (0x00049b57) fep_hwr_write_pane_g1_ParamLimits

0x0f5a,	// (0x00049b57) fep_hwr_write_pane_g1

0x0f67,	// (0x00049b64) fep_hwr_write_pane_g2_ParamLimits

0x0f67,	// (0x00049b64) fep_hwr_write_pane_g2

0x0f74,	// (0x00049b71) fep_hwr_write_pane_g3_ParamLimits

0x0f74,	// (0x00049b71) fep_hwr_write_pane_g3

0xbd75,	// (0x00054972) fep_hwr_write_pane_g4_ParamLimits

0xbd75,	// (0x00054972) fep_hwr_write_pane_g4

0x0005,

0xfb28,	// (0x00058725) fep_hwr_write_pane_g_ParamLimits

0xfb28,	// (0x00058725) fep_hwr_write_pane_g

0xceb7,	// (0x00055ab4) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xceb7,	// (0x00055ab4) bg_fep_hwr_candidate_pane_g2

0x0f97,	// (0x00049b94) cell_hwr_candidate_pane_ParamLimits

0x0f97,	// (0x00049b94) cell_hwr_candidate_pane

0x0fe9,	// (0x00049be6) fep_hwr_candidate_pane_g1_ParamLimits

0x4f3e,	// (0x0004db3b) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x4f3e,	// (0x0004db3b) bg_popup_fep_shadow_pane_cp2

0x50d4,	// (0x0004dcd1) fep_vkb_top_pane_g4_ParamLimits

0x50d4,	// (0x0004dcd1) fep_vkb_top_pane_g4

0x511a,	// (0x0004dd17) fep_vkb_side_pane_g2_ParamLimits

0x511a,	// (0x0004dd17) fep_vkb_side_pane_g2

0x9678,	// (0x00052275) list_setting_pane_t4_ParamLimits

0x9678,	// (0x00052275) list_setting_pane_t4

0x9714,	// (0x00052311) list_setting_number_pane_t5_ParamLimits

0x9714,	// (0x00052311) list_setting_number_pane_t5

0xad73,	// (0x00053970) list_double_heading_pane_cp2_ParamLimits

0xad73,	// (0x00053970) list_double_heading_pane_cp2

0x549b,	// (0x0004e098) list_double_heading_pane_g1_cp2_ParamLimits

0x549b,	// (0x0004e098) list_double_heading_pane_g1_cp2

0x54a7,	// (0x0004e0a4) list_double_heading_pane_g2_cp2_ParamLimits

0x54a7,	// (0x0004e0a4) list_double_heading_pane_g2_cp2

0x54bb,	// (0x0004e0b8) list_double_heading_pane_t1_cp2_ParamLimits

0x54bb,	// (0x0004e0b8) list_double_heading_pane_t1_cp2

0x54d1,	// (0x0004e0ce) list_double_heading_pane_t2_cp2_ParamLimits

0x54d1,	// (0x0004e0ce) list_double_heading_pane_t2_cp2

0x6bb5,	// (0x0004f7b2) aid_value_unit2

0xf2e1,	// (0x00057ede) popup_preview_fixed_window

0xa068,	// (0x00052c65) bg_popup_preview_window_pane_cp02

0x54e3,	// (0x0004e0e0) list_preview_fixed_pane

0x5529,	// (0x0004e126) list_empty_pane_fp_ParamLimits

0x5529,	// (0x0004e126) list_empty_pane_fp

0x5529,	// (0x0004e126) list_single_cale_day_pane_fp_ParamLimits

0x5529,	// (0x0004e126) list_single_cale_day_pane_fp

0x5529,	// (0x0004e126) list_single_graphic_heading_pane_fp_ParamLimits

0x5529,	// (0x0004e126) list_single_graphic_heading_pane_fp

0x5529,	// (0x0004e126) list_single_graphic_pane_fp_ParamLimits

0x5529,	// (0x0004e126) list_single_graphic_pane_fp

0x5529,	// (0x0004e126) list_single_heading_pane_fp_ParamLimits

0x5529,	// (0x0004e126) list_single_heading_pane_fp

0x5529,	// (0x0004e126) list_single_pane_fp_ParamLimits

0x5529,	// (0x0004e126) list_single_pane_fp

0x5542,	// (0x0004e13f) list_single_pane_fp_g1_ParamLimits

0x5542,	// (0x0004e13f) list_single_pane_fp_g1

0x549b,	// (0x0004e098) list_single_pane_fp_g2_ParamLimits

0x549b,	// (0x0004e098) list_single_pane_fp_g2

0x54a7,	// (0x0004e0a4) list_single_pane_fp_g3_ParamLimits

0x54a7,	// (0x0004e0a4) list_single_pane_fp_g3

0x554e,	// (0x0004e14b) list_single_pane_fp_g4_ParamLimits

0x554e,	// (0x0004e14b) list_single_pane_fp_g4

0x0003,

0xfb8a,	// (0x00058787) list_single_pane_fp_g_ParamLimits

0xfb8a,	// (0x00058787) list_single_pane_fp_g

0xf148,	// (0x00057d45) list_single_pane_fp_t1_ParamLimits

0xf148,	// (0x00057d45) list_single_pane_fp_t1

0xf15f,	// (0x00057d5c) list_single_graphic_pane_fp_g1_ParamLimits

0xf15f,	// (0x00057d5c) list_single_graphic_pane_fp_g1

0x5542,	// (0x0004e13f) list_single_graphic_pane_fp_g2_ParamLimits

0x5542,	// (0x0004e13f) list_single_graphic_pane_fp_g2

0x549b,	// (0x0004e098) list_single_graphic_pane_fp_g3_ParamLimits

0x549b,	// (0x0004e098) list_single_graphic_pane_fp_g3

0x54a7,	// (0x0004e0a4) list_single_graphic_pane_fp_g4_ParamLimits

0x54a7,	// (0x0004e0a4) list_single_graphic_pane_fp_g4

0x554e,	// (0x0004e14b) list_single_graphic_pane_fp_g5_ParamLimits

0x554e,	// (0x0004e14b) list_single_graphic_pane_fp_g5

0x0004,

0xfb93,	// (0x00058790) list_single_graphic_pane_fp_g_ParamLimits

0xfb93,	// (0x00058790) list_single_graphic_pane_fp_g

0xf16b,	// (0x00057d68) list_single_graphic_pane_fp_t1_ParamLimits

0xf16b,	// (0x00057d68) list_single_graphic_pane_fp_t1

0xf15f,	// (0x00057d5c) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xf15f,	// (0x00057d5c) list_single_graphic_heading_pane_fp_g1

0x5542,	// (0x0004e13f) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x5542,	// (0x0004e13f) list_single_graphic_heading_pane_fp_g2

0x549b,	// (0x0004e098) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x549b,	// (0x0004e098) list_single_graphic_heading_pane_fp_g3

0x54a7,	// (0x0004e0a4) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x54a7,	// (0x0004e0a4) list_single_graphic_heading_pane_fp_g4

0x554e,	// (0x0004e14b) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x554e,	// (0x0004e14b) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb93,	// (0x00058790) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb93,	// (0x00058790) list_single_graphic_heading_pane_fp_g

0xf181,	// (0x00057d7e) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xf181,	// (0x00057d7e) list_single_graphic_heading_pane_fp_t1

0xf197,	// (0x00057d94) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xf197,	// (0x00057d94) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb9e,	// (0x0005879b) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb9e,	// (0x0005879b) list_single_graphic_heading_pane_fp_t

0xf1a9,	// (0x00057da6) list_single_cale_day_pane_fp_g1_ParamLimits

0xf1a9,	// (0x00057da6) list_single_cale_day_pane_fp_g1

0x555a,	// (0x0004e157) list_single_cale_day_pane_fp_g2_ParamLimits

0x555a,	// (0x0004e157) list_single_cale_day_pane_fp_g2

0x1075,	// (0x00049c72) list_single_cale_day_pane_fp_g3_ParamLimits

0x1075,	// (0x00049c72) list_single_cale_day_pane_fp_g3

0x109d,	// (0x00049c9a) list_single_cale_day_pane_fp_g4_ParamLimits

0x109d,	// (0x00049c9a) list_single_cale_day_pane_fp_g4

0x10c1,	// (0x00049cbe) list_single_cale_day_pane_fp_g5_ParamLimits

0x10c1,	// (0x00049cbe) list_single_cale_day_pane_fp_g5

0x0004,

0xfba3,	// (0x000587a0) list_single_cale_day_pane_fp_g_ParamLimits

0xfba3,	// (0x000587a0) list_single_cale_day_pane_fp_g

0xf1e1,	// (0x00057dde) list_single_cale_day_pane_fp_t1_ParamLimits

0xf1e1,	// (0x00057dde) list_single_cale_day_pane_fp_t1

0xf207,	// (0x00057e04) list_single_cale_day_pane_fp_t2_ParamLimits

0xf207,	// (0x00057e04) list_single_cale_day_pane_fp_t2

0xf220,	// (0x00057e1d) list_single_cale_day_pane_fp_t3_ParamLimits

0xf220,	// (0x00057e1d) list_single_cale_day_pane_fp_t3

0x0002,

0xfbae,	// (0x000587ab) list_single_cale_day_pane_fp_t_ParamLimits

0xfbae,	// (0x000587ab) list_single_cale_day_pane_fp_t

0x5542,	// (0x0004e13f) list_empty_pane_fp_g1_ParamLimits

0x5542,	// (0x0004e13f) list_empty_pane_fp_g1

0xf239,	// (0x00057e36) list_empty_pane_fp_t1

0xf247,	// (0x00057e44) list_empty_pane_fp_t2

0x0001,

0xfbb5,	// (0x000587b2) list_empty_pane_fp_t

0x5542,	// (0x0004e13f) list_single_heading_pane_fp_g1_ParamLimits

0x5542,	// (0x0004e13f) list_single_heading_pane_fp_g1

0x549b,	// (0x0004e098) list_single_heading_pane_fp_g2_ParamLimits

0x549b,	// (0x0004e098) list_single_heading_pane_fp_g2

0x54a7,	// (0x0004e0a4) list_single_heading_pane_fp_g3_ParamLimits

0x54a7,	// (0x0004e0a4) list_single_heading_pane_fp_g3

0x0002,

0xfbba,	// (0x000587b7) list_single_heading_pane_fp_g_ParamLimits

0xfbba,	// (0x000587b7) list_single_heading_pane_fp_g

0xf255,	// (0x00057e52) list_single_heading_pane_fp_t1_ParamLimits

0xf255,	// (0x00057e52) list_single_heading_pane_fp_t1

0xf267,	// (0x00057e64) list_single_heading_pane_fp_t2_ParamLimits

0xf267,	// (0x00057e64) list_single_heading_pane_fp_t2

0x0001,

0xfbc1,	// (0x000587be) list_single_heading_pane_fp_t_ParamLimits

0xfbc1,	// (0x000587be) list_single_heading_pane_fp_t

0xa8b0,	// (0x000534ad) aid_size_cell_fast

0x9fe8,	// (0x00052be5) soft_indicator_pane_cp1_t1

0xa8ed,	// (0x000534ea) cell_app_pane_cp2_ParamLimits

0xa8ed,	// (0x000534ea) cell_app_pane_cp2

0x0e23,	// (0x00049a20) fep_hwr_candidate_drop_down_list_pane

0xcec5,	// (0x00055ac2) fep_hwr_candidate_pane_g3_ParamLimits

0xcec5,	// (0x00055ac2) fep_hwr_candidate_pane_g3

0xced2,	// (0x00055acf) fep_hwr_candidate_pane_g4_ParamLimits

0xced2,	// (0x00055acf) fep_hwr_candidate_pane_g4

0x0002,

0xfb35,	// (0x00058732) fep_hwr_candidate_pane_g_ParamLimits

0xfb35,	// (0x00058732) fep_hwr_candidate_pane_g

0x4fce,	// (0x0004dbcb) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x4fce,	// (0x0004dbcb) fep_vkb_candidate_drop_down_list_pane

0x53f6,	// (0x0004dff3) fep_vkb_candidate_pane_g3

0x53fe,	// (0x0004dffb) fep_vkb_candidate_pane_g4

0x0002,

0xfb62,	// (0x0005875f) fep_vkb_candidate_pane_g

0x50d4,	// (0x0004dcd1) cell_hwr_candidate_pane_g1_ParamLimits

0x5415,	// (0x0004e012) cell_hwr_candidate_pane_g3_ParamLimits

0x5415,	// (0x0004e012) cell_hwr_candidate_pane_g3

0x5436,	// (0x0004e033) cell_hwr_candidate_pane_g4_ParamLimits

0x5436,	// (0x0004e033) cell_hwr_candidate_pane_g4

0x0002,

0xfb7c,	// (0x00058779) cell_hwr_candidate_pane_g_ParamLimits

0xfb7c,	// (0x00058779) cell_hwr_candidate_pane_g

0x5457,	// (0x0004e054) cell_vkb_candidate_pane_g3_ParamLimits

0x5457,	// (0x0004e054) cell_vkb_candidate_pane_g3

0x5472,	// (0x0004e06f) cell_vkb_candidate_pane_g4_ParamLimits

0x5472,	// (0x0004e06f) cell_vkb_candidate_pane_g4

0x5566,	// (0x0004e163) cell_app_pane_cp2_g1_ParamLimits

0x5566,	// (0x0004e163) cell_app_pane_cp2_g1

0x5584,	// (0x0004e181) cell_app_pane_cp2_g2_ParamLimits

0x5584,	// (0x0004e181) cell_app_pane_cp2_g2

0x0001,

0xfbc6,	// (0x000587c3) cell_app_pane_cp2_g_ParamLimits

0xfbc6,	// (0x000587c3) cell_app_pane_cp2_g

0x5590,	// (0x0004e18d) cell_app_pane_cp2_t1_ParamLimits

0x5590,	// (0x0004e18d) cell_app_pane_cp2_t1

0xa6c1,	// (0x000532be) grid_highlight_pane_cp1_ParamLimits

0xa6c1,	// (0x000532be) grid_highlight_pane_cp1

0x10e5,	// (0x00049ce2) cell_hwr_candidate_pane_cp1_ParamLimits

0x10e5,	// (0x00049ce2) cell_hwr_candidate_pane_cp1

0x50d4,	// (0x0004dcd1) fep_hwr_candidate_drop_down_list_pane_g1

0x55a2,	// (0x0004e19f) fep_hwr_candidate_drop_down_list_pane_g2

0x55af,	// (0x0004e1ac) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbcb,	// (0x000587c8) fep_hwr_candidate_drop_down_list_pane_g

0x1109,	// (0x00049d06) fep_hwr_candidate_drop_down_list_scroll_pane

0x1112,	// (0x00049d0f) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x1112,	// (0x00049d0f) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x111f,	// (0x00049d1c) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x111f,	// (0x00049d1c) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x112c,	// (0x00049d29) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x112c,	// (0x00049d29) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x5457,	// (0x0004e054) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x5457,	// (0x0004e054) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x5472,	// (0x0004e06f) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x5472,	// (0x0004e06f) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x1139,	// (0x00049d36) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x1139,	// (0x00049d36) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x1154,	// (0x00049d51) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x1154,	// (0x00049d51) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x116f,	// (0x00049d6c) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x116f,	// (0x00049d6c) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd2,	// (0x000587cf) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd2,	// (0x000587cf) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x55bc,	// (0x0004e1b9) cell_vkb_candidate_pane_cp1_ParamLimits

0x55bc,	// (0x0004e1b9) cell_vkb_candidate_pane_cp1

0x50d4,	// (0x0004dcd1) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x50d4,	// (0x0004dcd1) fep_vkb_candidate_drop_down_list_pane_g1

0x55a2,	// (0x0004e19f) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x55a2,	// (0x0004e19f) fep_vkb_candidate_drop_down_list_pane_g2

0x55af,	// (0x0004e1ac) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x55af,	// (0x0004e1ac) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbcb,	// (0x000587c8) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbcb,	// (0x000587c8) fep_vkb_candidate_drop_down_list_pane_g

0x55e2,	// (0x0004e1df) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x55e2,	// (0x0004e1df) fep_vkb_candidate_drop_down_list_scroll_pane

0x55ef,	// (0x0004e1ec) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x55ef,	// (0x0004e1ec) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x55fc,	// (0x0004e1f9) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x55fc,	// (0x0004e1f9) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x5608,	// (0x0004e205) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x5608,	// (0x0004e205) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x5415,	// (0x0004e012) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x5415,	// (0x0004e012) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x5436,	// (0x0004e033) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x5436,	// (0x0004e033) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x5614,	// (0x0004e211) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x5614,	// (0x0004e211) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x5635,	// (0x0004e232) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x5635,	// (0x0004e232) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x5656,	// (0x0004e253) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x5656,	// (0x0004e253) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe3,	// (0x000587e0) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe3,	// (0x000587e0) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x9d03,	// (0x00052900) title_pane_g1_ParamLimits

0x9d16,	// (0x00052913) title_pane_g2_ParamLimits

0xf554,	// (0x00058151) title_pane_g_ParamLimits

0xad63,	// (0x00053960) aid_call2_pane

0xad6b,	// (0x00053968) aid_call_pane

0xc323,	// (0x00054f20) popup_clock_analogue_window_g1

0xc323,	// (0x00054f20) popup_clock_analogue_window_g2

0x0055,	// (0x00048c52) popup_clock_analogue_window_g3

0x005e,	// (0x00048c5b) popup_clock_analogue_window_g4

0x6bc7,	// (0x0004f7c4) popup_clock_analogue_window_g5

0x0004,

0xf703,	// (0x00058300) popup_clock_analogue_window_g

0x0066,	// (0x00048c63) popup_clock_analogue_window_t1

0x00a7,	// (0x00048ca4) clock_digital_number_pane_ParamLimits

0x00a7,	// (0x00048ca4) clock_digital_number_pane

0x00b3,	// (0x00048cb0) clock_digital_number_pane_cp02_ParamLimits

0x00b3,	// (0x00048cb0) clock_digital_number_pane_cp02

0x00bf,	// (0x00048cbc) clock_digital_number_pane_cp03_ParamLimits

0x00bf,	// (0x00048cbc) clock_digital_number_pane_cp03

0x00cb,	// (0x00048cc8) clock_digital_number_pane_cp04_ParamLimits

0x00cb,	// (0x00048cc8) clock_digital_number_pane_cp04

0x00d7,	// (0x00048cd4) clock_digital_separator_pane_ParamLimits

0x00d7,	// (0x00048cd4) clock_digital_separator_pane

0x00e3,	// (0x00048ce0) popup_clock_digital_window_t1_ParamLimits

0x00e3,	// (0x00048ce0) popup_clock_digital_window_t1

0x6bc7,	// (0x0004f7c4) clock_digital_number_pane_g1

0x6bc7,	// (0x0004f7c4) clock_digital_number_pane_g2

0x0001,

0xf70e,	// (0x0005830b) clock_digital_number_pane_g

0x6bc7,	// (0x0004f7c4) clock_digital_separator_pane_g1

0x6bc7,	// (0x0004f7c4) clock_digital_separator_pane_g2

0x0001,

0xf70e,	// (0x0005830b) clock_digital_separator_pane_g

0xb8d3,	// (0x000544d0) aid_fill_nsta_ParamLimits

0xba0b,	// (0x00054608) indicator_nsta_pane_ParamLimits

0x2607,	// (0x0004b204) popup_clock_analogue_window

0x2607,	// (0x0004b204) popup_clock_digital_window

0xccd0,	// (0x000558cd) grid_indicator_nsta_pane_ParamLimits

0x4886,	// (0x0004d483) clock_nsta_pane_t2

0x0001,

0xfab5,	// (0x000586b2) clock_nsta_pane_t

0xf521,	// (0x0005811e) aid_size_max_handle

0xab56,	// (0x00053753) aid_size_min_handle

0xe847,	// (0x00057444) editor_scroll_pane

0x5671,	// (0x0004e26e) ex_editor_pane

0xa837,	// (0x00053434) scroll_pane_cp13

0xa5f4,	// (0x000531f1) scroll_pane_cp14

0xc352,	// (0x00054f4f) scroll_pane_cp36

0xad86,	// (0x00053983) list_single_graphic_hl_pane_cp2_ParamLimits

0xad86,	// (0x00053983) list_single_graphic_hl_pane_cp2

0xcb6c,	// (0x00055769) list_single_graphic_hl_pane_ParamLimits

0xcb6c,	// (0x00055769) list_single_graphic_hl_pane

0xf27d,	// (0x00057e7a) aid_size_min_hl_cp1

0x5679,	// (0x0004e276) list_highlight_pane_cp34_ParamLimits

0x5679,	// (0x0004e276) list_highlight_pane_cp34

0x568a,	// (0x0004e287) list_single_graphic_hl_pane_g1_ParamLimits

0x568a,	// (0x0004e287) list_single_graphic_hl_pane_g1

0x9982,	// (0x0005257f) list_single_graphic_hl_pane_g2_ParamLimits

0x9982,	// (0x0005257f) list_single_graphic_hl_pane_g2

0x9982,	// (0x0005257f) list_single_graphic_hl_pane_g3_ParamLimits

0x9982,	// (0x0005257f) list_single_graphic_hl_pane_g3

0xd05b,	// (0x00055c58) list_single_graphic_hl_pane_g4_ParamLimits

0xd05b,	// (0x00055c58) list_single_graphic_hl_pane_g4

0x56c7,	// (0x0004e2c4) list_single_graphic_hl_pane_g5_ParamLimits

0x56c7,	// (0x0004e2c4) list_single_graphic_hl_pane_g5

0x0004,

0xfbf4,	// (0x000587f1) list_single_graphic_hl_pane_g_ParamLimits

0xfbf4,	// (0x000587f1) list_single_graphic_hl_pane_g

0x998e,	// (0x0005258b) list_single_graphic_hl_pane_t1_ParamLimits

0x998e,	// (0x0005258b) list_single_graphic_hl_pane_t1

0x5697,	// (0x0004e294) aid_size_min_hl_cp2

0x56a0,	// (0x0004e29d) list_highlight_pane_cp34_cp2_ParamLimits

0x56a0,	// (0x0004e29d) list_highlight_pane_cp34_cp2

0x568a,	// (0x0004e287) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x568a,	// (0x0004e287) list_single_graphic_hl_pane_g1_cp2

0x56ad,	// (0x0004e2aa) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x56ad,	// (0x0004e2aa) list_single_graphic_hl_pane_g2_cp2

0xd067,	// (0x00055c64) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xd067,	// (0x00055c64) list_single_graphic_hl_pane_g3_cp2

0xd05b,	// (0x00055c58) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xd05b,	// (0x00055c58) list_single_graphic_hl_pane_g4_cp2

0x56c7,	// (0x0004e2c4) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x56c7,	// (0x0004e2c4) list_single_graphic_hl_pane_g5_cp2

0xb044,	// (0x00053c41) control_pane_g4_ParamLimits

0xb044,	// (0x00053c41) control_pane_g4

0x1cef,	// (0x0004a8ec) bg_popup_sub_pane_cp10_ParamLimits

0x4e63,	// (0x0004da60) list_choice_list_pane_ParamLimits

0x4e72,	// (0x0004da6f) scroll_pane_cp23

0xa068,	// (0x00052c65) bg_popup_preview_window_pane_cp02_ParamLimits

0x54e3,	// (0x0004e0e0) list_preview_fixed_pane_ParamLimits

0x54f9,	// (0x0004e0f6) list_preview_fixed_pane_cp_ParamLimits

0x54f9,	// (0x0004e0f6) list_preview_fixed_pane_cp

0x5505,	// (0x0004e102) popup_preview_fixed_window_g1_ParamLimits

0x5505,	// (0x0004e102) popup_preview_fixed_window_g1

0x5511,	// (0x0004e10e) popup_preview_fixed_window_g2_ParamLimits

0x5511,	// (0x0004e10e) popup_preview_fixed_window_g2

0x0002,

0xfb83,	// (0x00058780) popup_preview_fixed_window_g_ParamLimits

0xfb83,	// (0x00058780) popup_preview_fixed_window_g

0xf493,	// (0x00058090) aid_navi_side_left_pane_ParamLimits

0xf4a8,	// (0x000580a5) aid_navi_side_right_pane_ParamLimits

0xf4c0,	// (0x000580bd) navi_icon_pane_stacon_ParamLimits

0xf4d4,	// (0x000580d1) navi_navi_pane_stacon_ParamLimits

0xf4c0,	// (0x000580bd) navi_text_pane_stacon_ParamLimits

0x6bbd,	// (0x0004f7ba) main_text_info_pane

0x56f1,	// (0x0004e2ee) listscroll_text_info_pane

0x56f9,	// (0x0004e2f6) list_text_info_pane_ParamLimits

0x56f9,	// (0x0004e2f6) list_text_info_pane

0x5708,	// (0x0004e305) scroll_pane_cp24_ParamLimits

0x5708,	// (0x0004e305) scroll_pane_cp24

0xd075,	// (0x00055c72) list_text_info_pane_t1_ParamLimits

0xd075,	// (0x00055c72) list_text_info_pane_t1

0xb1cc,	// (0x00053dc9) popup_fast_swap2_window_ParamLimits

0xb1cc,	// (0x00053dc9) popup_fast_swap2_window

0x574b,	// (0x0004e348) aid_size_cell_fast2

0x6bbd,	// (0x0004f7ba) bg_popup_window_pane_cp17

0x2c64,	// (0x0004b861) heading_pane_cp2

0xa2c8,	// (0x00052ec5) listscroll_fast2_pane

0x5755,	// (0x0004e352) grid_fast2_pane

0x575f,	// (0x0004e35c) listscroll_fast2_pane_g1

0x5769,	// (0x0004e366) listscroll_fast2_pane_g2

0x0001,

0xfbff,	// (0x000587fc) listscroll_fast2_pane_g

0xa837,	// (0x00053434) scroll_pane_cp26

0x5773,	// (0x0004e370) cell_fast2_pane_ParamLimits

0x5773,	// (0x0004e370) cell_fast2_pane

0x578a,	// (0x0004e387) cell_fast2_pane_g1

0x5793,	// (0x0004e390) cell_fast2_pane_g2

0x579c,	// (0x0004e399) cell_fast2_pane_g3

0x0002,

0xfc04,	// (0x00058801) cell_fast2_pane_g

0xa3b1,	// (0x00052fae) grid_highlight_pane_cp9

0xa3c6,	// (0x00052fc3) main_eswt_pane_ParamLimits

0xa3c6,	// (0x00052fc3) main_eswt_pane

0x571d,	// (0x0004e31a) list_single_text_info_pane

0x57a4,	// (0x0004e3a1) eswt_ctrl_button_pane

0x57a4,	// (0x0004e3a1) eswt_ctrl_canvas_pane

0x57ac,	// (0x0004e3a9) eswt_ctrl_combo_pane

0x57a4,	// (0x0004e3a1) eswt_ctrl_default_pane

0x57a4,	// (0x0004e3a1) eswt_ctrl_label_pane

0x57b4,	// (0x0004e3b1) eswt_ctrl_wait_pane

0x57bc,	// (0x0004e3b9) eswt_shell_pane

0x6bbd,	// (0x0004f7ba) listscroll_eswt_app_pane

0x57dc,	// (0x0004e3d9) popup_eswt_tasktip_window_ParamLimits

0x57dc,	// (0x0004e3d9) popup_eswt_tasktip_window

0x28a4,	// (0x0004b4a1) bg_popup_window_pane_cp18

0x57ed,	// (0x0004e3ea) eswt_control_pane_g1_ParamLimits

0x57ed,	// (0x0004e3ea) eswt_control_pane_g1

0x57fa,	// (0x0004e3f7) eswt_control_pane_g2_ParamLimits

0x57fa,	// (0x0004e3f7) eswt_control_pane_g2

0x5807,	// (0x0004e404) eswt_control_pane_g3_ParamLimits

0x5807,	// (0x0004e404) eswt_control_pane_g3

0x5814,	// (0x0004e411) eswt_control_pane_g4_ParamLimits

0x5814,	// (0x0004e411) eswt_control_pane_g4

0x0003,

0xfc0b,	// (0x00058808) eswt_control_pane_g_ParamLimits

0xfc0b,	// (0x00058808) eswt_control_pane_g

0xa6c1,	// (0x000532be) bg_button_pane_ParamLimits

0xa6c1,	// (0x000532be) bg_button_pane

0xa3c6,	// (0x00052fc3) common_borders_pane_copy2_ParamLimits

0xa3c6,	// (0x00052fc3) common_borders_pane_copy2

0x5821,	// (0x0004e41e) control_button_pane_g1_ParamLimits

0x5821,	// (0x0004e41e) control_button_pane_g1

0x582d,	// (0x0004e42a) control_button_pane_g2_ParamLimits

0x582d,	// (0x0004e42a) control_button_pane_g2

0x5839,	// (0x0004e436) control_button_pane_g3_ParamLimits

0x5839,	// (0x0004e436) control_button_pane_g3

0x0002,

0xfc14,	// (0x00058811) control_button_pane_g_ParamLimits

0xfc14,	// (0x00058811) control_button_pane_g

0x584d,	// (0x0004e44a) control_button_pane_t1

0x585b,	// (0x0004e458) control_button_pane_t2

0x0001,

0xfc1b,	// (0x00058818) control_button_pane_t

0x2830,	// (0x0004b42d) bg_button_pane_g1

0x2838,	// (0x0004b435) bg_button_pane_g2

0x2840,	// (0x0004b43d) bg_button_pane_g3

0x2848,	// (0x0004b445) bg_button_pane_g4

0x2850,	// (0x0004b44d) bg_button_pane_g5

0x2858,	// (0x0004b455) bg_button_pane_g6

0x2860,	// (0x0004b45d) bg_button_pane_g7

0x2868,	// (0x0004b465) bg_button_pane_g8

0x2870,	// (0x0004b46d) bg_button_pane_g9

0x0008,

0xf86c,	// (0x00058469) bg_button_pane_g

0x4e1e,	// (0x0004da1b) common_borders_pane_ParamLimits

0x4e1e,	// (0x0004da1b) common_borders_pane

0x57ed,	// (0x0004e3ea) eswt_control_pane_g1_copy1_ParamLimits

0x57ed,	// (0x0004e3ea) eswt_control_pane_g1_copy1

0x57fa,	// (0x0004e3f7) eswt_control_pane_g2_copy1_ParamLimits

0x57fa,	// (0x0004e3f7) eswt_control_pane_g2_copy1

0x5807,	// (0x0004e404) eswt_control_pane_g3_copy1_ParamLimits

0x5807,	// (0x0004e404) eswt_control_pane_g3_copy1

0x5814,	// (0x0004e411) eswt_control_pane_g4_copy1_ParamLimits

0x5814,	// (0x0004e411) eswt_control_pane_g4_copy1

0x4e59,	// (0x0004da56) bg_eswt_ctrl_canvas_pane_g1

0x4e1e,	// (0x0004da1b) common_borders_pane_cp2_ParamLimits

0x4e1e,	// (0x0004da1b) common_borders_pane_cp2

0x4e1e,	// (0x0004da1b) common_borders_pane_cp3_ParamLimits

0x4e1e,	// (0x0004da1b) common_borders_pane_cp3

0x5869,	// (0x0004e466) separator_horizontal_pane

0x5871,	// (0x0004e46e) separator_vertical_pane

0x57ed,	// (0x0004e3ea) eswt_control_pane_g1_copy2_ParamLimits

0x57ed,	// (0x0004e3ea) eswt_control_pane_g1_copy2

0x57fa,	// (0x0004e3f7) eswt_control_pane_g2_copy2_ParamLimits

0x57fa,	// (0x0004e3f7) eswt_control_pane_g2_copy2

0x5807,	// (0x0004e404) eswt_control_pane_g3_copy2_ParamLimits

0x5807,	// (0x0004e404) eswt_control_pane_g3_copy2

0x5814,	// (0x0004e411) eswt_control_pane_g4_copy2_ParamLimits

0x5814,	// (0x0004e411) eswt_control_pane_g4_copy2

0x6bbd,	// (0x0004f7ba) common_borders_pane_cp4

0x587a,	// (0x0004e477) separator_horizontal_pane_g1

0x5883,	// (0x0004e480) separator_horizontal_pane_g2

0x588c,	// (0x0004e489) separator_horizontal_pane_g3

0x0002,

0xfc20,	// (0x0005881d) separator_horizontal_pane_g

0x57ed,	// (0x0004e3ea) eswt_control_pane_g1_copy3_ParamLimits

0x57ed,	// (0x0004e3ea) eswt_control_pane_g1_copy3

0x57fa,	// (0x0004e3f7) eswt_control_pane_g2_copy3_ParamLimits

0x57fa,	// (0x0004e3f7) eswt_control_pane_g2_copy3

0x5807,	// (0x0004e404) eswt_control_pane_g3_copy3_ParamLimits

0x5807,	// (0x0004e404) eswt_control_pane_g3_copy3

0x5814,	// (0x0004e411) eswt_control_pane_g4_copy3_ParamLimits

0x5814,	// (0x0004e411) eswt_control_pane_g4_copy3

0x6bbd,	// (0x0004f7ba) common_borders_pane_cp5

0x5895,	// (0x0004e492) separator_vertical_pane_g1

0x589e,	// (0x0004e49b) separator_vertical_pane_g2

0x58a7,	// (0x0004e4a4) separator_vertical_pane_g3

0x0002,

0xfc27,	// (0x00058824) separator_vertical_pane_g

0x57ed,	// (0x0004e3ea) eswt_control_pane_g1_copy4_ParamLimits

0x57ed,	// (0x0004e3ea) eswt_control_pane_g1_copy4

0x57fa,	// (0x0004e3f7) eswt_control_pane_g2_copy4_ParamLimits

0x57fa,	// (0x0004e3f7) eswt_control_pane_g2_copy4

0x5807,	// (0x0004e404) eswt_control_pane_g3_copy4_ParamLimits

0x5807,	// (0x0004e404) eswt_control_pane_g3_copy4

0x5814,	// (0x0004e411) eswt_control_pane_g4_copy4_ParamLimits

0x5814,	// (0x0004e411) eswt_control_pane_g4_copy4

0xd097,	// (0x00055c94) eswt_ctrl_combo_button_pane

0xd09f,	// (0x00055c9c) eswt_ctrl_input_pane

0xd0a7,	// (0x00055ca4) popup_choice_list_window_cp70

0xd0af,	// (0x00055cac) eswt_ctrl_input_pane_t1

0x6bbd,	// (0x0004f7ba) input_focus_pane_cp70

0x4e1e,	// (0x0004da1b) bg_button_pane_cp70_ParamLimits

0x4e1e,	// (0x0004da1b) bg_button_pane_cp70

0xd0bd,	// (0x00055cba) eswt_ctrl_combo_button_pane_g1

0x58de,	// (0x0004e4db) wait_bar_pane_cp70

0x28a4,	// (0x0004b4a1) bg_popup_window_pane_cp70_ParamLimits

0x28a4,	// (0x0004b4a1) bg_popup_window_pane_cp70

0x58e6,	// (0x0004e4e3) popup_eswt_tasktip_window_t1

0x58fc,	// (0x0004e4f9) wait_bar_pane_cp71_ParamLimits

0x58fc,	// (0x0004e4f9) wait_bar_pane_cp71

0x5908,	// (0x0004e505) grid_eswt_app_pane

0xab87,	// (0x00053784) scroll_pane_cp70

0xd0c5,	// (0x00055cc2) cell_eswt_app_pane_ParamLimits

0xd0c5,	// (0x00055cc2) cell_eswt_app_pane

0xd0f7,	// (0x00055cf4) cell_eswt_app_pane_g1_ParamLimits

0xd0f7,	// (0x00055cf4) cell_eswt_app_pane_g1

0xd126,	// (0x00055d23) cell_eswt_app_pane_g2_ParamLimits

0xd126,	// (0x00055d23) cell_eswt_app_pane_g2

0x0001,

0xfc2e,	// (0x0005882b) cell_eswt_app_pane_g_ParamLimits

0xfc2e,	// (0x0005882b) cell_eswt_app_pane_g

0xd14f,	// (0x00055d4c) cell_eswt_app_pane_t1_ParamLimits

0xd14f,	// (0x00055d4c) cell_eswt_app_pane_t1

0x59cd,	// (0x0004e5ca) grid_highlight_pane_cp70_ParamLimits

0x59cd,	// (0x0004e5ca) grid_highlight_pane_cp70

0xe74c,	// (0x00057349) set_content_pane_g1

0x0743,	// (0x00049340) status_small_volume_pane

0x119e,	// (0x00049d9b) status_small_volume_pane_g1

0x11a6,	// (0x00049da3) volume_small2_pane

0x11af,	// (0x00049dac) volume_small2_pane_g1

0x11b8,	// (0x00049db5) volume_small2_pane_g2

0x11c1,	// (0x00049dbe) volume_small2_pane_g3

0x11ca,	// (0x00049dc7) volume_small2_pane_g4

0x11d3,	// (0x00049dd0) volume_small2_pane_g5

0x11dc,	// (0x00049dd9) volume_small2_pane_g6

0x11e5,	// (0x00049de2) volume_small2_pane_g7

0x11ee,	// (0x00049deb) volume_small2_pane_g8

0x11f7,	// (0x00049df4) volume_small2_pane_g9

0x1200,	// (0x00049dfd) volume_small2_pane_g10

0x0009,

0xfc33,	// (0x00058830) volume_small2_pane_g

0x5228,	// (0x0004de25) fep_vkb_top_text_pane_g1_ParamLimits

0xd003,	// (0x00055c00) fep_vkb_top_text_pane_t1_ParamLimits

0x551d,	// (0x0004e11a) popup_preview_fixed_window_g3_ParamLimits

0x551d,	// (0x0004e11a) popup_preview_fixed_window_g3

0xb866,	// (0x00054463) popup_toolbar_trans_pane

0xc9bc,	// (0x000555b9) aid_height_set_list_ParamLimits

0x3bfa,	// (0x0004c7f7) aid_size_parent_ParamLimits

0x1cef,	// (0x0004a8ec) list_highlight_pane_cp2_ParamLimits

0xe74c,	// (0x00057349) set_content_pane_g1_ParamLimits

0x9971,	// (0x0005256e) list_single_image_pane_ParamLimits

0x9971,	// (0x0005256e) list_single_image_pane

0xd181,	// (0x00055d7e) aid_size_cell_image_ParamLimits

0xd181,	// (0x00055d7e) aid_size_cell_image

0xd18e,	// (0x00055d8b) grid_single_image_pane_ParamLimits

0xd18e,	// (0x00055d8b) grid_single_image_pane

0xa6cf,	// (0x000532cc) list_single_image_pane_g1_ParamLimits

0xa6cf,	// (0x000532cc) list_single_image_pane_g1

0xa6db,	// (0x000532d8) list_single_image_pane_g2_ParamLimits

0xa6db,	// (0x000532d8) list_single_image_pane_g2

0x0001,

0xfc48,	// (0x00058845) list_single_image_pane_g_ParamLimits

0xfc48,	// (0x00058845) list_single_image_pane_g

0x59f4,	// (0x0004e5f1) list_single_image_pane_t1_ParamLimits

0x59f4,	// (0x0004e5f1) list_single_image_pane_t1

0xd19c,	// (0x00055d99) cell_image_list_pane_ParamLimits

0xd19c,	// (0x00055d99) cell_image_list_pane

0xd1b0,	// (0x00055dad) cell_image_list_pane_g1

0xd1b9,	// (0x00055db6) cell_image_list_pane_g2

0x0001,

0xfc4d,	// (0x0005884a) cell_image_list_pane_g

0x5a32,	// (0x0004e62f) aid_size_cell_tb_trans_pane

0xa6c1,	// (0x000532be) bg_tb_trans_pane

0x5a44,	// (0x0004e641) grid_tb_trans_pane

0x2830,	// (0x0004b42d) bg_tb_trans_pane_g1

0x2838,	// (0x0004b435) bg_tb_trans_pane_g2

0x2840,	// (0x0004b43d) bg_tb_trans_pane_g3

0x2848,	// (0x0004b445) bg_tb_trans_pane_g4

0x2850,	// (0x0004b44d) bg_tb_trans_pane_g5

0x2868,	// (0x0004b465) bg_tb_trans_pane_g6

0x2870,	// (0x0004b46d) bg_tb_trans_pane_g7

0x2858,	// (0x0004b455) bg_tb_trans_pane_g8

0x2860,	// (0x0004b45d) bg_tb_trans_pane_g9

0x0008,

0xfc52,	// (0x0005884f) bg_tb_trans_pane_g

0x5a58,	// (0x0004e655) cell_toolbar_trans_pane_ParamLimits

0x5a58,	// (0x0004e655) cell_toolbar_trans_pane

0x4e59,	// (0x0004da56) cell_toolbar_trans_pane_g1

0xcdc0,	// (0x000559bd) list_form2_midp_pane_t1

0xcdce,	// (0x000559cb) list_form2_midp_pane_t2

0x0001,

0xfafb,	// (0x000586f8) list_form2_midp_pane_t

0x4a99,	// (0x0004d696) scroll_pane_cp51_ParamLimits

0x4c60,	// (0x0004d85d) form2_midp_wait_pane_g1

0x4c69,	// (0x0004d866) form2_midp_wait_pane_g2

0x4c72,	// (0x0004d86f) form2_midp_wait_pane_g3

0x0002,

0xfb10,	// (0x0005870d) form2_midp_wait_pane_g

0x6c2b,	// (0x0004f828) list_highlight_pane_cp21_ParamLimits

0x4cb6,	// (0x0004d8b3) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x4cc5,	// (0x0004d8c2) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x3dd2,	// (0x0004c9cf) list_single_2graphic_im_pane_ParamLimits

0x3dd2,	// (0x0004c9cf) list_single_2graphic_im_pane

0xd1c2,	// (0x00055dbf) list_single_2graphic_im_pane_g1_ParamLimits

0xd1c2,	// (0x00055dbf) list_single_2graphic_im_pane_g1

0xd1d3,	// (0x00055dd0) list_single_2graphic_im_pane_g2_ParamLimits

0xd1d3,	// (0x00055dd0) list_single_2graphic_im_pane_g2

0xd1df,	// (0x00055ddc) list_single_2graphic_im_pane_g3_ParamLimits

0xd1df,	// (0x00055ddc) list_single_2graphic_im_pane_g3

0x0003,

0xfc65,	// (0x00058862) list_single_2graphic_im_pane_g_ParamLimits

0xfc65,	// (0x00058862) list_single_2graphic_im_pane_g

0xd1f3,	// (0x00055df0) list_single_2graphic_im_pane_t1_ParamLimits

0xd1f3,	// (0x00055df0) list_single_2graphic_im_pane_t1

0x5529,	// (0x0004e126) list_single_graphic_2heading_pane_fp_ParamLimits

0x5529,	// (0x0004e126) list_single_graphic_2heading_pane_fp

0xf15f,	// (0x00057d5c) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xf15f,	// (0x00057d5c) list_single_graphic_2heading_pane_fp_g1

0x5542,	// (0x0004e13f) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x5542,	// (0x0004e13f) list_single_graphic_2heading_pane_fp_g2

0x549b,	// (0x0004e098) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x549b,	// (0x0004e098) list_single_graphic_2heading_pane_fp_g3

0x54a7,	// (0x0004e0a4) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x54a7,	// (0x0004e0a4) list_single_graphic_2heading_pane_fp_g4

0x554e,	// (0x0004e14b) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x554e,	// (0x0004e14b) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb93,	// (0x00058790) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb93,	// (0x00058790) list_single_graphic_2heading_pane_fp_g

0xf286,	// (0x00057e83) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xf286,	// (0x00057e83) list_single_graphic_2heading_pane_fp_t1

0xf197,	// (0x00057d94) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xf197,	// (0x00057d94) list_single_graphic_2heading_pane_fp_t2

0xf29c,	// (0x00057e99) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xf29c,	// (0x00057e99) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc6e,	// (0x0005886b) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc6e,	// (0x0005886b) list_single_graphic_2heading_pane_fp_t

0x4eea,	// (0x0004dae7) fep_hwr_write_pane_g5_ParamLimits

0x4eea,	// (0x0004dae7) fep_hwr_write_pane_g5

0x4ef6,	// (0x0004daf3) fep_hwr_write_pane_g6_ParamLimits

0x4ef6,	// (0x0004daf3) fep_hwr_write_pane_g6

0x57bc,	// (0x0004e3b9) eswt_shell_pane_ParamLimits

0x28a4,	// (0x0004b4a1) bg_popup_window_pane_cp18_ParamLimits

0x3b40,	// (0x0004c73d) heading_pane_cp70

0x58e6,	// (0x0004e4e3) popup_eswt_tasktip_window_t1_ParamLimits

0xb930,	// (0x0005452d) aid_touch_tab_arrow_left

0xb946,	// (0x00054543) aid_touch_tab_arrow_right

0x6bdb,	// (0x0004f7d8) title_pane_g3_ParamLimits

0x6bdb,	// (0x0004f7d8) title_pane_g3

0xa680,	// (0x0005327d) set_value_pane_g1

0xb866,	// (0x00054463) popup_toolbar_trans_pane_ParamLimits

0x5a32,	// (0x0004e62f) aid_size_cell_tb_trans_pane_ParamLimits

0xa6c1,	// (0x000532be) bg_tb_trans_pane_ParamLimits

0x5a44,	// (0x0004e641) grid_tb_trans_pane_ParamLimits

0xa068,	// (0x00052c65) cont_note_pane_ParamLimits

0xa068,	// (0x00052c65) cont_note_pane

0xa3c6,	// (0x00052fc3) cont_snote2_single_text_pane_ParamLimits

0xa3c6,	// (0x00052fc3) cont_snote2_single_text_pane

0xa3c6,	// (0x00052fc3) cont_snote2_single_graphic_pane_ParamLimits

0xa3c6,	// (0x00052fc3) cont_snote2_single_graphic_pane

0x2e80,	// (0x0004ba7d) cont_note_wait_pane_ParamLimits

0x2e80,	// (0x0004ba7d) cont_note_wait_pane

0x2e80,	// (0x0004ba7d) cont_note_image_pane_ParamLimits

0x2e80,	// (0x0004ba7d) cont_note_image_pane

0x5aec,	// (0x0004e6e9) popup_note2_window_g1_ParamLimits

0x5aec,	// (0x0004e6e9) popup_note2_window_g1

0x5b1d,	// (0x0004e71a) popup_note2_window_t1_ParamLimits

0x5b1d,	// (0x0004e71a) popup_note2_window_t1

0x5b62,	// (0x0004e75f) popup_note2_window_t2_ParamLimits

0x5b62,	// (0x0004e75f) popup_note2_window_t2

0x5ba7,	// (0x0004e7a4) popup_note2_window_t3_ParamLimits

0x5ba7,	// (0x0004e7a4) popup_note2_window_t3

0x5bec,	// (0x0004e7e9) popup_note2_window_t4_ParamLimits

0x5bec,	// (0x0004e7e9) popup_note2_window_t4

0xa0ec,	// (0x00052ce9) popup_note2_window_t5_ParamLimits

0xa0ec,	// (0x00052ce9) popup_note2_window_t5

0x0004,

0xfc7a,	// (0x00058877) popup_note2_window_t_ParamLimits

0xfc7a,	// (0x00058877) popup_note2_window_t

0x5c1b,	// (0x0004e818) popup_note2_image_window_g1_ParamLimits

0x5c1b,	// (0x0004e818) popup_note2_image_window_g1

0x5c27,	// (0x0004e824) popup_note2_image_window_g2_ParamLimits

0x5c27,	// (0x0004e824) popup_note2_image_window_g2

0x0001,

0xfc85,	// (0x00058882) popup_note2_image_window_g_ParamLimits

0xfc85,	// (0x00058882) popup_note2_image_window_g

0x5c39,	// (0x0004e836) popup_note2_image_window_t1_ParamLimits

0x5c39,	// (0x0004e836) popup_note2_image_window_t1

0x5c51,	// (0x0004e84e) popup_note2_image_window_t2_ParamLimits

0x5c51,	// (0x0004e84e) popup_note2_image_window_t2

0x5c69,	// (0x0004e866) popup_note2_image_window_t3_ParamLimits

0x5c69,	// (0x0004e866) popup_note2_image_window_t3

0x0002,

0xfc8a,	// (0x00058887) popup_note2_image_window_t_ParamLimits

0xfc8a,	// (0x00058887) popup_note2_image_window_t

0x2e8e,	// (0x0004ba8b) popup_note2_wait_window_g1_ParamLimits

0x2e8e,	// (0x0004ba8b) popup_note2_wait_window_g1

0x5c85,	// (0x0004e882) popup_note2_wait_window_g2_ParamLimits

0x5c85,	// (0x0004e882) popup_note2_wait_window_g2

0x2ea6,	// (0x0004baa3) popup_note2_wait_window_g3_ParamLimits

0x2ea6,	// (0x0004baa3) popup_note2_wait_window_g3

0x0002,

0xfc91,	// (0x0005888e) popup_note2_wait_window_g_ParamLimits

0xfc91,	// (0x0005888e) popup_note2_wait_window_g

0x5c91,	// (0x0004e88e) popup_note2_wait_window_t1_ParamLimits

0x5c91,	// (0x0004e88e) popup_note2_wait_window_t1

0x5caf,	// (0x0004e8ac) popup_note2_wait_window_t2_ParamLimits

0x5caf,	// (0x0004e8ac) popup_note2_wait_window_t2

0x5ccd,	// (0x0004e8ca) popup_note2_wait_window_t3_ParamLimits

0x5ccd,	// (0x0004e8ca) popup_note2_wait_window_t3

0x5cdf,	// (0x0004e8dc) popup_note2_wait_window_t4_ParamLimits

0x5cdf,	// (0x0004e8dc) popup_note2_wait_window_t4

0x0003,

0xfc98,	// (0x00058895) popup_note2_wait_window_t_ParamLimits

0xfc98,	// (0x00058895) popup_note2_wait_window_t

0x5cf1,	// (0x0004e8ee) wait_bar2_pane_ParamLimits

0x5cf1,	// (0x0004e8ee) wait_bar2_pane

0x5d09,	// (0x0004e906) popup_snote2_single_text_window_g1_ParamLimits

0x5d09,	// (0x0004e906) popup_snote2_single_text_window_g1

0x5d31,	// (0x0004e92e) popup_snote2_single_text_window_t1_ParamLimits

0x5d31,	// (0x0004e92e) popup_snote2_single_text_window_t1

0x5d7d,	// (0x0004e97a) popup_snote2_single_text_window_t2_ParamLimits

0x5d7d,	// (0x0004e97a) popup_snote2_single_text_window_t2

0x5dc9,	// (0x0004e9c6) popup_snote2_single_text_window_t3_ParamLimits

0x5dc9,	// (0x0004e9c6) popup_snote2_single_text_window_t3

0x5e0a,	// (0x0004ea07) popup_snote2_single_text_window_t4_ParamLimits

0x5e0a,	// (0x0004ea07) popup_snote2_single_text_window_t4

0x5e40,	// (0x0004ea3d) popup_snote2_single_text_window_t5_ParamLimits

0x5e40,	// (0x0004ea3d) popup_snote2_single_text_window_t5

0x0004,

0xfca1,	// (0x0005889e) popup_snote2_single_text_window_t_ParamLimits

0xfca1,	// (0x0005889e) popup_snote2_single_text_window_t

0x5e6b,	// (0x0004ea68) popup_snote2_single_graphic_window_g1_ParamLimits

0x5e6b,	// (0x0004ea68) popup_snote2_single_graphic_window_g1

0x5e93,	// (0x0004ea90) popup_snote2_single_graphic_window_g2_ParamLimits

0x5e93,	// (0x0004ea90) popup_snote2_single_graphic_window_g2

0x0001,

0xfcac,	// (0x000588a9) popup_snote2_single_graphic_window_g_ParamLimits

0xfcac,	// (0x000588a9) popup_snote2_single_graphic_window_g

0x5ebb,	// (0x0004eab8) popup_snote2_single_graphic_window_t1_ParamLimits

0x5ebb,	// (0x0004eab8) popup_snote2_single_graphic_window_t1

0x5f07,	// (0x0004eb04) popup_snote2_single_graphic_window_t2_ParamLimits

0x5f07,	// (0x0004eb04) popup_snote2_single_graphic_window_t2

0x5dc9,	// (0x0004e9c6) popup_snote2_single_graphic_window_t3_ParamLimits

0x5dc9,	// (0x0004e9c6) popup_snote2_single_graphic_window_t3

0x5e0a,	// (0x0004ea07) popup_snote2_single_graphic_window_t4_ParamLimits

0x5e0a,	// (0x0004ea07) popup_snote2_single_graphic_window_t4

0x5e40,	// (0x0004ea3d) popup_snote2_single_graphic_window_t5_ParamLimits

0x5e40,	// (0x0004ea3d) popup_snote2_single_graphic_window_t5

0x0004,

0xfcb1,	// (0x000588ae) popup_snote2_single_graphic_window_t_ParamLimits

0xfcb1,	// (0x000588ae) popup_snote2_single_graphic_window_t

0x4949,	// (0x0004d546) clock_nsta_pane_cp2_t1

0x4949,	// (0x0004d546) clock_nsta_pane_cp2_t2

0x0001,

0xfad1,	// (0x000586ce) clock_nsta_pane_cp2_t

0xe51c,	// (0x00057119) form_field_data_wide_pane_g1_ParamLimits

0xa6cf,	// (0x000532cc) form_field_data_wide_pane_g2_ParamLimits

0xa6cf,	// (0x000532cc) form_field_data_wide_pane_g2

0xa6db,	// (0x000532d8) form_field_data_wide_pane_g3_ParamLimits

0xa6db,	// (0x000532d8) form_field_data_wide_pane_g3

0x0002,

0xf686,	// (0x00058283) form_field_data_wide_pane_g_ParamLimits

0xf686,	// (0x00058283) form_field_data_wide_pane_g

0xccba,	// (0x000558b7) grid_touch_3_pane_ParamLimits

0xccba,	// (0x000558b7) grid_touch_3_pane

0xd224,	// (0x00055e21) cell_touch_3_pane_ParamLimits

0xd224,	// (0x00055e21) cell_touch_3_pane

0x4e59,	// (0x0004da56) cell_touch_3_pane_g1

0x4e59,	// (0x0004da56) cell_touch_3_pane_g2

0x0001,

0xfb56,	// (0x00058753) cell_touch_3_pane_g

0xa11e,	// (0x00052d1b) cont_query_data_pane

0xa126,	// (0x00052d23) cont_query_data_pane_cp1

0x5f86,	// (0x0004eb83) button_value_adjust_pane_cp7

0x5f8e,	// (0x0004eb8b) query_popup_pane_cp3

0xc383,	// (0x00054f80) bg_popup_sub_pane_cp22_ParamLimits

0x0164,	// (0x00048d61) navi_navi_volume_pane_cp2

0x017f,	// (0x00048d7c) popup_side_volume_key_window_g2

0x018e,	// (0x00048d8b) popup_side_volume_key_window_g3

0x0002,

0xf71c,	// (0x00058319) popup_side_volume_key_window_g

0x01ab,	// (0x00048da8) popup_side_volume_key_window_t2

0x0001,

0xf723,	// (0x00058320) popup_side_volume_key_window_t

0xe64f,	// (0x0005724c) popup_side_volume_key_window_ParamLimits

0x944d,	// (0x0005204a) list_double_graphic_pane_g4_ParamLimits

0x944d,	// (0x0005204a) list_double_graphic_pane_g4

0xbd28,	// (0x00054925) list_single_2heading_msg_pane_ParamLimits

0xbd28,	// (0x00054925) list_single_2heading_msg_pane

0xbd8a,	// (0x00054987) list_single_2heading_msg_pane_g1_ParamLimits

0xbd8a,	// (0x00054987) list_single_2heading_msg_pane_g1

0xbd96,	// (0x00054993) list_single_2heading_msg_pane_g2_ParamLimits

0xbd96,	// (0x00054993) list_single_2heading_msg_pane_g2

0xbda9,	// (0x000549a6) list_single_2heading_msg_pane_g3_ParamLimits

0xbda9,	// (0x000549a6) list_single_2heading_msg_pane_g3

0xbdb5,	// (0x000549b2) list_single_2heading_msg_pane_g4_ParamLimits

0xbdb5,	// (0x000549b2) list_single_2heading_msg_pane_g4

0x0003,

0xfcbc,	// (0x000588b9) list_single_2heading_msg_pane_g_ParamLimits

0xfcbc,	// (0x000588b9) list_single_2heading_msg_pane_g

0x99a4,	// (0x000525a1) list_single_2heading_msg_pane_t1_ParamLimits

0x99a4,	// (0x000525a1) list_single_2heading_msg_pane_t1

0x99cc,	// (0x000525c9) list_single_2heading_msg_pane_t2_ParamLimits

0x99cc,	// (0x000525c9) list_single_2heading_msg_pane_t2

0x9a37,	// (0x00052634) list_single_2heading_msg_pane_t3_ParamLimits

0x9a37,	// (0x00052634) list_single_2heading_msg_pane_t3

0xf2bc,	// (0x00057eb9) list_single_2heading_msg_pane_t4_ParamLimits

0xf2bc,	// (0x00057eb9) list_single_2heading_msg_pane_t4

0x0003,

0xfcc5,	// (0x000588c2) list_single_2heading_msg_pane_t_ParamLimits

0xfcc5,	// (0x000588c2) list_single_2heading_msg_pane_t

0x6be7,	// (0x0004f7e4) title_pane_g4_ParamLimits

0x6be7,	// (0x0004f7e4) title_pane_g4

0xf3e3,	// (0x00057fe0) title_pane_stacon_g3_ParamLimits

0xf3e3,	// (0x00057fe0) title_pane_stacon_g3

0x5aaf,	// (0x0004e6ac) list_single_2graphic_im_pane_g4_ParamLimits

0x5aaf,	// (0x0004e6ac) list_single_2graphic_im_pane_g4

0x38f0,	// (0x0004c4ed) popup_side_volume_key_window_cp

0x413d,	// (0x0004cd3a) main_idle_act2_pane_t1

0x091b,	// (0x00049518) toolbar_button_pane_g10

0xa5be,	// (0x000531bb) popup_toolbar_window_cp1

0x493a,	// (0x0004d537) clock_nsta_pane_cp_t1

0x493a,	// (0x0004d537) clock_nsta_pane_cp_t2

0x0001,

0xfacc,	// (0x000586c9) clock_nsta_pane_cp_t

0x0164,	// (0x00048d61) navi_navi_volume_pane_cp2_ParamLimits

0x0173,	// (0x00048d70) popup_side_volume_key_window_g1_ParamLimits

0x017f,	// (0x00048d7c) popup_side_volume_key_window_g2_ParamLimits

0x018e,	// (0x00048d8b) popup_side_volume_key_window_g3_ParamLimits

0xf71c,	// (0x00058319) popup_side_volume_key_window_g_ParamLimits

0x0e0f,	// (0x00049a0c) fep_hwr_aid_pane

0xceb7,	// (0x00055ab4) bg_fep_hwr_top_pane_g4_ParamLimits

0x4eba,	// (0x0004dab7) fep_hwr_top_pane_g1_ParamLimits

0x4ecc,	// (0x0004dac9) fep_hwr_top_pane_g2_ParamLimits

0x0eca,	// (0x00049ac7) fep_hwr_top_pane_g3_ParamLimits

0xfb21,	// (0x0005871e) fep_hwr_top_pane_g_ParamLimits

0x0edf,	// (0x00049adc) fep_hwr_top_text_pane_ParamLimits

0x36a5,	// (0x0004c2a2) aid_touch_tab_arrow_arrow_2

0x36ae,	// (0x0004c2ab) aid_touch_tab_arrow_left_2

0x0e23,	// (0x00049a20) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x0e5a,	// (0x00049a57) fep_hwr_prediction_pane

0x5022,	// (0x0004dc1f) fep_vkb_prediction_pane

0xcfe3,	// (0x00055be0) fep_vkb_side_pane_g3_ParamLimits

0xcfe3,	// (0x00055be0) fep_vkb_side_pane_g3

0x50d4,	// (0x0004dcd1) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x55a2,	// (0x0004e19f) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x55af,	// (0x0004e1ac) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbcb,	// (0x000587c8) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x5fb5,	// (0x0004ebb2) fep_hwr_prediction_pane_g1

0x1239,	// (0x00049e36) fep_hwr_prediction_pane_g2

0x1241,	// (0x00049e3e) fep_hwr_prediction_pane_g3

0x1249,	// (0x00049e46) fep_hwr_prediction_pane_g4

0x0003,

0xfcce,	// (0x000588cb) fep_hwr_prediction_pane_g

0x5fb5,	// (0x0004ebb2) fep_vkb_prediction_pane_g1

0x5fbf,	// (0x0004ebbc) fep_vkb_prediction_pane_g2

0x5fc7,	// (0x0004ebc4) fep_vkb_prediction_pane_g3

0x5fcf,	// (0x0004ebcc) fep_vkb_prediction_pane_g4

0x0003,

0xfcd7,	// (0x000588d4) fep_vkb_prediction_pane_g

0x6ca6,	// (0x0004f8a3) slider_set_pane_g3

0x6cba,	// (0x0004f8b7) slider_set_pane_g4

0x6cd2,	// (0x0004f8cf) slider_set_pane_g5

0x6ca6,	// (0x0004f8a3) slider_set_pane_g6

0x0c28,	// (0x00049825) slider_set_pane_g7

0x3d7f,	// (0x0004c97c) slider_form_pane_g3

0x3d88,	// (0x0004c985) slider_form_pane_g4

0x3d90,	// (0x0004c98d) slider_form_pane_g5

0x3d7f,	// (0x0004c97c) slider_form_pane_g6

0xcb2b,	// (0x00055728) slider_form_pane_g7

0x43f4,	// (0x0004cff1) slider_set_pane_vc_g3

0x43fd,	// (0x0004cffa) slider_set_pane_vc_g4

0x4406,	// (0x0004d003) slider_set_pane_vc_g5

0x43f4,	// (0x0004cff1) slider_set_pane_vc_g6

0x440f,	// (0x0004d00c) slider_set_pane_vc_g7

0x45e7,	// (0x0004d1e4) slider_form_pane_vc_g1

0x45f0,	// (0x0004d1ed) slider_form_pane_vc_g2

0x45f9,	// (0x0004d1f6) slider_form_pane_vc_g3

0x45e7,	// (0x0004d1e4) slider_form_pane_vc_g4

0x4602,	// (0x0004d1ff) slider_form_pane_vc_g5

0x0004,

0xfa9e,	// (0x0005869b) slider_form_pane_vc_g

0x6bbd,	// (0x0004f7ba) main_idle_act3_pane

0x5fd7,	// (0x0004ebd4) ai3_links_pane

0xd26e,	// (0x00055e6b) popup_ai3_data_window_ParamLimits

0xd26e,	// (0x00055e6b) popup_ai3_data_window

0x6bbd,	// (0x0004f7ba) grid_ai3_links_pane

0xd28c,	// (0x00055e89) cell_ai3_links_pane_ParamLimits

0xd28c,	// (0x00055e89) cell_ai3_links_pane

0x6018,	// (0x0004ec15) bg_popup_sub_pane_cp11

0x6025,	// (0x0004ec22) cell_ai3_links_pane_g1

0x6bbd,	// (0x0004f7ba) bg_popup_sub_pane_cp12

0x604a,	// (0x0004ec47) heading_ai3_data_pane

0x6052,	// (0x0004ec4f) list_ai3_gene_pane

0x605e,	// (0x0004ec5b) popup_ai3_data_window_g1

0x6066,	// (0x0004ec63) heading_ai3_data_pane_g1

0x606e,	// (0x0004ec6b) heading_ai3_data_pane_t1

0x607c,	// (0x0004ec79) list_double_ai3_gene_pane_ParamLimits

0x607c,	// (0x0004ec79) list_double_ai3_gene_pane

0x6089,	// (0x0004ec86) list_single_ai3_gene_pane_ParamLimits

0x6089,	// (0x0004ec86) list_single_ai3_gene_pane

0x4e1e,	// (0x0004da1b) list_highlight_pane_cp7_ParamLimits

0x4e1e,	// (0x0004da1b) list_highlight_pane_cp7

0x6096,	// (0x0004ec93) list_single_a13_gene_pane_t1_ParamLimits

0x6096,	// (0x0004ec93) list_single_a13_gene_pane_t1

0x60ad,	// (0x0004ecaa) list_single_ai3_gene_pane_g1

0x60b6,	// (0x0004ecb3) list_single_ai3_gene_pane_g2

0x0001,

0xfce0,	// (0x000588dd) list_single_ai3_gene_pane_g

0x60be,	// (0x0004ecbb) list_double_ai3_gene_pane_g1_ParamLimits

0x60be,	// (0x0004ecbb) list_double_ai3_gene_pane_g1

0x60ca,	// (0x0004ecc7) list_double_ai3_gene_pane_t1_ParamLimits

0x60ca,	// (0x0004ecc7) list_double_ai3_gene_pane_t1

0x60e6,	// (0x0004ece3) list_double_ai3_gene_pane_t2_ParamLimits

0x60e6,	// (0x0004ece3) list_double_ai3_gene_pane_t2

0x60fb,	// (0x0004ecf8) list_double_ai3_gene_pane_t3_ParamLimits

0x60fb,	// (0x0004ecf8) list_double_ai3_gene_pane_t3

0x0002,

0xfce5,	// (0x000588e2) list_double_ai3_gene_pane_t_ParamLimits

0xfce5,	// (0x000588e2) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xf2b2,	// (0x00057eaf) aid_size_min_col_2

0xd258,	// (0x00055e55) aid_size_min_msg_ParamLimits

0xd258,	// (0x00055e55) aid_size_min_msg

0xcff7,	// (0x00055bf4) fep_vkb_top_text_pane_g2_ParamLimits

0xcff7,	// (0x00055bf4) fep_vkb_top_text_pane_g2

0x0001,

0xfb51,	// (0x0005874e) fep_vkb_top_text_pane_g_ParamLimits

0xfb51,	// (0x0005874e) fep_vkb_top_text_pane_g

0x6bbd,	// (0x0004f7ba) main_hc_apps_shell_pane

0x6118,	// (0x0004ed15) grid_hc_apps_pane_ParamLimits

0x6118,	// (0x0004ed15) grid_hc_apps_pane

0x6127,	// (0x0004ed24) list_hc_apps_pane

0x612f,	// (0x0004ed2c) scroll_pane_cp37_ParamLimits

0x612f,	// (0x0004ed2c) scroll_pane_cp37

0xd2a6,	// (0x00055ea3) cell_hc_apps_pane_ParamLimits

0xd2a6,	// (0x00055ea3) cell_hc_apps_pane

0xd370,	// (0x00055f6d) cell_hc_apps_pane_g1_ParamLimits

0xd370,	// (0x00055f6d) cell_hc_apps_pane_g1

0x6224,	// (0x0004ee21) cell_hc_apps_pane_g2_ParamLimits

0x6224,	// (0x0004ee21) cell_hc_apps_pane_g2

0x6240,	// (0x0004ee3d) cell_hc_apps_pane_g3_ParamLimits

0x6240,	// (0x0004ee3d) cell_hc_apps_pane_g3

0x0002,

0xfcec,	// (0x000588e9) cell_hc_apps_pane_g_ParamLimits

0xfcec,	// (0x000588e9) cell_hc_apps_pane_g

0xd39d,	// (0x00055f9a) cell_hc_apps_pane_t1_ParamLimits

0xd39d,	// (0x00055f9a) cell_hc_apps_pane_t1

0xa068,	// (0x00052c65) grid_highlight_pane_cp10_ParamLimits

0xa068,	// (0x00052c65) grid_highlight_pane_cp10

0xd3dd,	// (0x00055fda) list_single_hc_apps_pane_ParamLimits

0xd3dd,	// (0x00055fda) list_single_hc_apps_pane

0xd417,	// (0x00056014) list_single_hc_apps_pane_g1

0xbdcd,	// (0x000549ca) list_single_hc_apps_pane_g2

0x0001,

0xfcf3,	// (0x000588f0) list_single_hc_apps_pane_g

0xbde6,	// (0x000549e3) list_single_hc_apps_pane_g2_copy1

0x9aa5,	// (0x000526a2) list_single_hc_apps_pane_t1

0x6c2b,	// (0x0004f828) bg_set_opt_pane_cp_ParamLimits

0xf2f5,	// (0x00057ef2) setting_slider_pane_t1_ParamLimits

0xf30e,	// (0x00057f0b) setting_slider_pane_t2_ParamLimits

0xf328,	// (0x00057f25) setting_slider_pane_t3_ParamLimits

0xf564,	// (0x00058161) setting_slider_pane_t_ParamLimits

0xf340,	// (0x00057f3d) slider_set_pane_ParamLimits

0x07d0,	// (0x000493cd) control_pane_g5_ParamLimits

0x07d0,	// (0x000493cd) control_pane_g5

0x3bac,	// (0x0004c7a9) slider_set_pane_g1_ParamLimits

0x0c1c,	// (0x00049819) slider_set_pane_g2_ParamLimits

0x6ca6,	// (0x0004f8a3) slider_set_pane_g3_ParamLimits

0x6cba,	// (0x0004f8b7) slider_set_pane_g4_ParamLimits

0x6cd2,	// (0x0004f8cf) slider_set_pane_g5_ParamLimits

0x6ca6,	// (0x0004f8a3) slider_set_pane_g6_ParamLimits

0x0c28,	// (0x00049825) slider_set_pane_g7_ParamLimits

0xf96a,	// (0x00058567) slider_set_pane_g_ParamLimits

0xe6f7,	// (0x000572f4) navi_icon_text_pane_ParamLimits

0xb8f7,	// (0x000544f4) aid_fill_nsta_2_ParamLimits

0xb930,	// (0x0005452d) aid_touch_tab_arrow_left_ParamLimits

0xb946,	// (0x00054543) aid_touch_tab_arrow_right_ParamLimits

0xb9e1,	// (0x000545de) clock_nsta_pane_ParamLimits

0xc868,	// (0x00055465) navi_icon_pane_g1_ParamLimits

0xc874,	// (0x00055471) navi_text_pane_t1_ParamLimits

0xcda2,	// (0x0005599f) navi_icon_text_pane_g1_ParamLimits

0xcdae,	// (0x000559ab) navi_icon_text_pane_t1_ParamLimits

0xd417,	// (0x00056014) list_single_hc_apps_pane_g1_ParamLimits

0xbdcd,	// (0x000549ca) list_single_hc_apps_pane_g2_ParamLimits

0xfcf3,	// (0x000588f0) list_single_hc_apps_pane_g_ParamLimits

0xbde6,	// (0x000549e3) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x9aa5,	// (0x000526a2) list_single_hc_apps_pane_t1_ParamLimits

0x9c29,	// (0x00052826) popup_toolbar2_fixed_window_ParamLimits

0x9c29,	// (0x00052826) popup_toolbar2_fixed_window

0xb85c,	// (0x00054459) popup_toolbar2_float_window

0x6bbd,	// (0x0004f7ba) bg_popup_sub_pane_cp27

0x62fa,	// (0x0004eef7) grid_toolbar2_float_pane

0x6bbd,	// (0x0004f7ba) bg_popup_sub_pane_cp26

0x62fa,	// (0x0004eef7) grid_toolbar2_fixed_pane

0xd430,	// (0x0005602d) cell_toolbar2_fixed_pane_ParamLimits

0xd430,	// (0x0005602d) cell_toolbar2_fixed_pane

0xd44d,	// (0x0005604a) cell_toolbar2_fixed_pane_g1

0x631b,	// (0x0004ef18) toolbar2_fixed_button_pane

0x2830,	// (0x0004b42d) toolbar2_fixed_button_pane_g1

0x2838,	// (0x0004b435) toolbar2_fixed_button_pane_g2

0x2840,	// (0x0004b43d) toolbar2_fixed_button_pane_g3

0x2848,	// (0x0004b445) toolbar2_fixed_button_pane_g4

0x2850,	// (0x0004b44d) toolbar2_fixed_button_pane_g5

0x2858,	// (0x0004b455) toolbar2_fixed_button_pane_g6

0x2860,	// (0x0004b45d) toolbar2_fixed_button_pane_g7

0x2868,	// (0x0004b465) toolbar2_fixed_button_pane_g8

0x2870,	// (0x0004b46d) toolbar2_fixed_button_pane_g9

0x0008,

0xf86c,	// (0x00058469) toolbar2_fixed_button_pane_g

0x6323,	// (0x0004ef20) cell_toolbar2_float_pane_ParamLimits

0x6323,	// (0x0004ef20) cell_toolbar2_float_pane

0x6334,	// (0x0004ef31) cell_toolbar2_float_pane_g1

0x631b,	// (0x0004ef18) toolbar2_fixed_button_pane_cp

0xcedf,	// (0x00055adc) fep_vkb_accented_list_pane_ParamLimits

0xcedf,	// (0x00055adc) fep_vkb_accented_list_pane

0x1041,	// (0x00049c3e) bg_popup_fep_shadow_pane_g9

0xe847,	// (0x00057444) bg_popup_fep_shadow_pane_cp3

0xa81e,	// (0x0005341b) list_accented_list_pane

0x633d,	// (0x0004ef3a) list_single_accented_list_pane_ParamLimits

0x633d,	// (0x0004ef3a) list_single_accented_list_pane

0xe847,	// (0x00057444) list_highlight_pane_cp10

0x634e,	// (0x0004ef4b) list_single_accented_list_pane_t1

0xb778,	// (0x00054375) popup_slider_window_ParamLimits

0xb778,	// (0x00054375) popup_slider_window

0x5f96,	// (0x0004eb93) aid_indentation_list_msg

0xd558,	// (0x00056155) bg_popup_window_pane_cp19

0x6488,	// (0x0004f085) popup_slider_window_g1

0x64a4,	// (0x0004f0a1) popup_slider_window_g2

0x64c0,	// (0x0004f0bd) popup_slider_window_g3

0x0005,

0xfcf8,	// (0x000588f5) popup_slider_window_g

0x651c,	// (0x0004f119) popup_slider_window_t1

0x6590,	// (0x0004f18d) small_volume_slider_vertical_pane

0x4e59,	// (0x0004da56) small_volume_slider_vertical_pane_g1

0x4e59,	// (0x0004da56) small_volume_slider_vertical_pane_g2

0x65ac,	// (0x0004f1a9) small_volume_slider_vertical_pane_g3

0x0002,

0xfd0a,	// (0x00058907) small_volume_slider_vertical_pane_g

0x9b93,	// (0x00052790) area_side_right_pane_ParamLimits

0x9b93,	// (0x00052790) area_side_right_pane

0xbe02,	// (0x000549ff) aid_size_side_button_ParamLimits

0xbe02,	// (0x000549ff) aid_size_side_button

0xbe1b,	// (0x00054a18) grid_sctrl_middle_pane_ParamLimits

0xbe1b,	// (0x00054a18) grid_sctrl_middle_pane

0x12ba,	// (0x00049eb7) sctrl_sk_bottom_pane

0x12cb,	// (0x00049ec8) sctrl_sk_top_pane

0x12dd,	// (0x00049eda) aid_touch_sctrl_top

0xa068,	// (0x00052c65) bg_sctrl_sk_pane_ParamLimits

0xa068,	// (0x00052c65) bg_sctrl_sk_pane

0x12ea,	// (0x00049ee7) sctrl_sk_top_pane_g1

0x12f7,	// (0x00049ef4) sctrl_sk_top_pane_t1

0x12dd,	// (0x00049eda) aid_touch_sctrl_bottom

0xa068,	// (0x00052c65) bg_sctrl_sk_pane_cp_ParamLimits

0xa068,	// (0x00052c65) bg_sctrl_sk_pane_cp

0x1312,	// (0x00049f0f) sctrl_sk_bottom_pane_g1

0x12f7,	// (0x00049ef4) sctrl_sk_bottom_pane_t1

0xbe35,	// (0x00054a32) cell_sctrl_middle_pane_ParamLimits

0xbe35,	// (0x00054a32) cell_sctrl_middle_pane

0xbe48,	// (0x00054a45) aid_touch_sctrl_middle_ParamLimits

0xbe48,	// (0x00054a45) aid_touch_sctrl_middle

0xbe55,	// (0x00054a52) bg_sctrl_middle_pane_ParamLimits

0xbe55,	// (0x00054a52) bg_sctrl_middle_pane

0x6637,	// (0x0004f234) cell_sctrl_middle_pane_g1_ParamLimits

0x6637,	// (0x0004f234) cell_sctrl_middle_pane_g1

0xbe63,	// (0x00054a60) cell_sctrl_middle_pane_g2_ParamLimits

0xbe63,	// (0x00054a60) cell_sctrl_middle_pane_g2

0x0001,

0xfd16,	// (0x00058913) cell_sctrl_middle_pane_g_ParamLimits

0xfd16,	// (0x00058913) cell_sctrl_middle_pane_g

0x2830,	// (0x0004b42d) bg_sctrl_middle_pane_g1

0x2838,	// (0x0004b435) bg_sctrl_middle_pane_g2

0x2840,	// (0x0004b43d) bg_sctrl_middle_pane_g3

0x2848,	// (0x0004b445) bg_sctrl_middle_pane_g4

0x2850,	// (0x0004b44d) bg_sctrl_middle_pane_g5

0x2858,	// (0x0004b455) bg_sctrl_middle_pane_g6

0x2860,	// (0x0004b45d) bg_sctrl_middle_pane_g7

0x2868,	// (0x0004b465) bg_sctrl_middle_pane_g8

0x0007,

0xfd1b,	// (0x00058918) bg_sctrl_middle_pane_g

0x2870,	// (0x0004b46d) bg_sctrl_middle_pane_g8_copy1

0x2830,	// (0x0004b42d) bg_sctrl_sk_pane_g1

0x2838,	// (0x0004b435) bg_sctrl_sk_pane_g2

0x2840,	// (0x0004b43d) bg_sctrl_sk_pane_g3

0x0008,

0xf86c,	// (0x00058469) bg_sctrl_sk_pane_g

0xa584,	// (0x00053181) aid_size_touch_scroll_bar

0x2848,	// (0x0004b445) bg_sctrl_sk_pane_g4

0x2850,	// (0x0004b44d) bg_sctrl_sk_pane_g5

0x2858,	// (0x0004b455) bg_sctrl_sk_pane_g6

0x2860,	// (0x0004b45d) bg_sctrl_sk_pane_g7

0x2868,	// (0x0004b465) bg_sctrl_sk_pane_g8

0x2870,	// (0x0004b46d) bg_sctrl_sk_pane_g9

0x1d9d,	// (0x0004a99a) popup_fep_china_hwr2_fs_candidate_window

0xb230,	// (0x00053e2d) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xb230,	// (0x00053e2d) popup_fep_china_hwr2_fs_control_window

0x50d4,	// (0x0004dcd1) sctrl_sk_top_pane_g2

0x0001,

0xfd11,	// (0x0005890e) sctrl_sk_top_pane_g

0xd610,	// (0x0005620d) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd610,	// (0x0005620d) aid_fep_china_hwr2_fs_cell

0xd626,	// (0x00056223) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd626,	// (0x00056223) bg_popup_fep_shadow_pane_cp4

0xd63d,	// (0x0005623a) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd63d,	// (0x0005623a) bg_popup_fep_shadow_pane_cp5

0xd64f,	// (0x0005624c) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd64f,	// (0x0005624c) popup_fep_china_hwr2_fs_control_bar_grid

0xd663,	// (0x00056260) popup_fep_china_hwr2_fs_control_funtion_grid

0x660b,	// (0x0004f208) aid_fep_china_hwr2_fs_candi_cell

0x6bbd,	// (0x0004f7ba) bg_popup_fep_shadow_pane_cp6

0x6615,	// (0x0004f212) popup_fep_china_hwr2_fs_candidate_grid

0xd66b,	// (0x00056268) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd66b,	// (0x00056268) cell_fep_china_hwr2_fs_funtion_grid

0x4e59,	// (0x0004da56) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x6637,	// (0x0004f234) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x6637,	// (0x0004f234) cell_fep_china_hwr2_fs_funtion_grid_g1

0x6645,	// (0x0004f242) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x6645,	// (0x0004f242) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd2c,	// (0x00058929) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd2c,	// (0x00058929) cell_fep_china_hwr2_fs_funtion_grid_g

0xd683,	// (0x00056280) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd683,	// (0x00056280) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd698,	// (0x00056295) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd698,	// (0x00056295) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd31,	// (0x0005892e) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd31,	// (0x0005892e) cell_fep_china_hwr2_fs_funtion_grid_t

0x668c,	// (0x0004f289) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x6694,	// (0x0004f291) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x669c,	// (0x0004f299) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd36,	// (0x00058933) popup_fep_china_hwr2_fs_control_bar_grid_g

0x66a4,	// (0x0004f2a1) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x66a4,	// (0x0004f2a1) cell_fep_china_hwr2_fs_candidate_grid

0x66c3,	// (0x0004f2c0) popup_fep_china_hwr2_fs_candidate_grid_g20

0x66cb,	// (0x0004f2c8) popup_fep_china_hwr2_fs_candidate_grid_g21

0x4e59,	// (0x0004da56) cell_fep_china_hwr2_fs_candidate_grid_g1

0x4e59,	// (0x0004da56) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb56,	// (0x00058753) cell_fep_china_hwr2_fs_candidate_grid_g

0x66d3,	// (0x0004f2d0) cell_fep_china_hwr2_fs_candidate_grid_t1

0x240c,	// (0x0004b009) clock_nsta_pane_cp_24_ParamLimits

0x240c,	// (0x0004b009) clock_nsta_pane_cp_24

0x248c,	// (0x0004b089) indicator_nsta_pane_cp_24_ParamLimits

0x248c,	// (0x0004b089) indicator_nsta_pane_cp_24

0x3503,	// (0x0004c100) heading_pane_g1

0x0001,

0xf8d1,	// (0x000584ce) heading_pane_g

0x3f84,	// (0x0004cb81) grid_sct_catagory_button_pane

0x3fb6,	// (0x0004cbb3) scroll_pane_cp5_ParamLimits

0x4aa5,	// (0x0004d6a2) button_value_adjust_pane_cp5_ParamLimits

0x4aa5,	// (0x0004d6a2) button_value_adjust_pane_cp5

0x4b8a,	// (0x0004d787) form2_midp_time_pane_ParamLimits

0x66e1,	// (0x0004f2de) cell_sct_catagory_button_pane_ParamLimits

0x66e1,	// (0x0004f2de) cell_sct_catagory_button_pane

0x4e1e,	// (0x0004da1b) bg_button_pane_cp01_ParamLimits

0x4e1e,	// (0x0004da1b) bg_button_pane_cp01

0x4e59,	// (0x0004da56) cell_sct_catagory_button_pane_g1

0xb7f9,	// (0x000543f6) popup_tb_extension_window

0xd6b4,	// (0x000562b1) aid_size_cell_ext_ParamLimits

0xd6b4,	// (0x000562b1) aid_size_cell_ext

0xa3c6,	// (0x00052fc3) bg_tb_trans_pane_cp1_ParamLimits

0xa3c6,	// (0x00052fc3) bg_tb_trans_pane_cp1

0xd6da,	// (0x000562d7) grid_tb_ext_pane_ParamLimits

0xd6da,	// (0x000562d7) grid_tb_ext_pane

0xd71a,	// (0x00056317) cell_tb_ext_pane_ParamLimits

0xd71a,	// (0x00056317) cell_tb_ext_pane

0xd742,	// (0x0005633f) cell_tb_ext_pane_g1_ParamLimits

0xd742,	// (0x0005633f) cell_tb_ext_pane_g1

0x6777,	// (0x0004f374) cell_tb_ext_pane_t1

0xa068,	// (0x00052c65) list_highlight_pane_cp11_ParamLimits

0xa068,	// (0x00052c65) list_highlight_pane_cp11

0x9c3e,	// (0x0005283b) popup_uni_indicator_window_ParamLimits

0x9c3e,	// (0x0005283b) popup_uni_indicator_window

0xa6c1,	// (0x000532be) bg_popup_sub_pane_cp14

0x6792,	// (0x0004f38f) list_uniindi_pane

0x679e,	// (0x0004f39b) uniindi_top_pane

0xa068,	// (0x00052c65) bg_uniindi_top_pane

0x67bf,	// (0x0004f3bc) uniindi_top_pane_g1

0x67d5,	// (0x0004f3d2) uniindi_top_pane_g2

0x0003,

0xfd3d,	// (0x0005893a) uniindi_top_pane_g

0x67ff,	// (0x0004f3fc) uniindi_top_pane_t1

0x682b,	// (0x0004f428) list_single_uniindi_pane_ParamLimits

0x682b,	// (0x0004f428) list_single_uniindi_pane

0x4e59,	// (0x0004da56) bg_uniindi_top_pane_g1

0x683d,	// (0x0004f43a) list_single_uniindi_pane_g1

0x6850,	// (0x0004f44d) list_single_uniindi_pane_t1

0x6bbd,	// (0x0004f7ba) control_bg_pane

0x6875,	// (0x0004f472) bg_sctrl_sk_pane_cp1

0x687e,	// (0x0004f47b) bg_sctrl_sk_pane_cp2

0x6887,	// (0x0004f484) control_bg_pane_g1

0x6890,	// (0x0004f48d) control_bg_pane_g2

0x0001,

0xfd46,	// (0x00058943) control_bg_pane_g

0x48cc,	// (0x0004d4c9) cell_indicator_nsta_pane_g1_ParamLimits

0xccfb,	// (0x000558f8) cell_indicator_nsta_pane_g2_ParamLimits

0xfaba,	// (0x000586b7) cell_indicator_nsta_pane_g_ParamLimits

0xf135,	// (0x00057d32) form2_midp_time_pane_t1_ParamLimits

0x8925,	// (0x00051522) main_idle_act4_pane_ParamLimits

0x8925,	// (0x00051522) main_idle_act4_pane

0xb7f9,	// (0x000543f6) popup_tb_extension_window_ParamLimits

0xd702,	// (0x000562ff) tb_ext_find_pane_ParamLimits

0xd702,	// (0x000562ff) tb_ext_find_pane

0x6899,	// (0x0004f496) ai_gene_pane_1_cp1

0x0533,	// (0x00049130) ai_gene_pane_2_cp1

0x68a1,	// (0x0004f49e) list_single_idle_plugin_calendar_pane

0x68aa,	// (0x0004f4a7) list_single_idle_plugin_notification_pane

0x68b3,	// (0x0004f4b0) list_single_idle_plugin_player_pane

0xd75f,	// (0x0005635c) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd75f,	// (0x0005635c) list_single_idle_plugin_shortcut_pane

0xd787,	// (0x00056384) main_idle_act4_pane_t1

0xd79f,	// (0x0005639c) main_idle_act4_pane_t2

0x0001,

0xfd4b,	// (0x00058948) main_idle_act4_pane_t

0xd7b7,	// (0x000563b4) middle_sk_idle_act4_pane_ParamLimits

0xd7b7,	// (0x000563b4) middle_sk_idle_act4_pane

0xd7d3,	// (0x000563d0) popup_clock_digital_analogue_window_cp2

0xd7fa,	// (0x000563f7) shortcut_wheel_idle_act4_pane_ParamLimits

0xd7fa,	// (0x000563f7) shortcut_wheel_idle_act4_pane

0x4e59,	// (0x0004da56) shortcut_wheel_idle_act4_pane_g1

0x4e59,	// (0x0004da56) shortcut_wheel_idle_act4_pane_g2

0x4e59,	// (0x0004da56) shortcut_wheel_idle_act4_pane_g3

0x4e59,	// (0x0004da56) shortcut_wheel_idle_act4_pane_g4

0x4e59,	// (0x0004da56) shortcut_wheel_idle_act4_pane_g5

0x6946,	// (0x0004f543) shortcut_wheel_idle_act4_pane_g6

0x694e,	// (0x0004f54b) shortcut_wheel_idle_act4_pane_g7

0x6956,	// (0x0004f553) shortcut_wheel_idle_act4_pane_g8

0x695e,	// (0x0004f55b) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd50,	// (0x0005894d) shortcut_wheel_idle_act4_pane_g

0xceb7,	// (0x00055ab4) middle_sk_idle_act4_pane_g1_ParamLimits

0xceb7,	// (0x00055ab4) middle_sk_idle_act4_pane_g1

0xd877,	// (0x00056474) middle_sk_idle_act4_pane_g2_ParamLimits

0xd877,	// (0x00056474) middle_sk_idle_act4_pane_g2

0x0001,

0xfd73,	// (0x00058970) middle_sk_idle_act4_pane_g_ParamLimits

0xfd73,	// (0x00058970) middle_sk_idle_act4_pane_g

0xd88f,	// (0x0005648c) middle_sk_idle_act4_pane_t1_ParamLimits

0xd88f,	// (0x0005648c) middle_sk_idle_act4_pane_t1

0xd8be,	// (0x000564bb) grid_ai_shortcut_pane_ParamLimits

0xd8be,	// (0x000564bb) grid_ai_shortcut_pane

0xd8db,	// (0x000564d8) list_highlight_pane_cp16_ParamLimits

0xd8db,	// (0x000564d8) list_highlight_pane_cp16

0xd8e8,	// (0x000564e5) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd8e8,	// (0x000564e5) list_single_idle_plugin_shortcut_pane_g1

0xd8f4,	// (0x000564f1) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd8f4,	// (0x000564f1) list_single_idle_plugin_shortcut_pane_g2

0xd912,	// (0x0005650f) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd912,	// (0x0005650f) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd78,	// (0x00058975) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd78,	// (0x00058975) list_single_idle_plugin_shortcut_pane_g

0xd927,	// (0x00056524) cell_ai_shortcut_pane_ParamLimits

0xd927,	// (0x00056524) cell_ai_shortcut_pane

0xd93d,	// (0x0005653a) cell_ai_shortcut_pane_g1_ParamLimits

0xd93d,	// (0x0005653a) cell_ai_shortcut_pane_g1

0x6899,	// (0x0004f496) ai_gene_pane_1_cp2

0x6a8f,	// (0x0004f68c) ai_gene_pane_2_cp2

0x6a97,	// (0x0004f694) list_highlight_pane_cp15

0x6aa0,	// (0x0004f69d) list_single_idle_plugin_calendar_pane_g1

0x6a97,	// (0x0004f694) list_highlight_pane_cp17

0x6aa8,	// (0x0004f6a5) list_single_idle_plugin_calendar_pane_g1_copy1

0x6ab0,	// (0x0004f6ad) list_single_idle_plugin_player_pane_g1

0x41eb,	// (0x0004cde8) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd7f,	// (0x0005897c) list_single_idle_plugin_player_pane_g

0x6ab8,	// (0x0004f6b5) list_single_idle_plugin_player_pane_t1

0x6ac6,	// (0x0004f6c3) list_single_idle_plugin_player_pane_t2

0x6ad4,	// (0x0004f6d1) list_single_idle_plugin_player_pane_t3

0x6ae2,	// (0x0004f6df) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd84,	// (0x00058981) list_single_idle_plugin_player_pane_t

0x6af0,	// (0x0004f6ed) wait_bar_pane_cp15

0x6af8,	// (0x0004f6f5) grid_ai_notification_pane

0x41eb,	// (0x0004cde8) list_single_idle_plugin_notification_pane_g1

0xd95f,	// (0x0005655c) cell_ai_notification_pane_ParamLimits

0xd95f,	// (0x0005655c) cell_ai_notification_pane

0x6b0e,	// (0x0004f70b) cell_ai_notification_pane_g1

0x6b16,	// (0x0004f713) cell_ai_notification_pane_t1

0xd96c,	// (0x00056569) tb_ext_find_button_pane

0xd974,	// (0x00056571) tb_ext_find_pane_g1

0xd97c,	// (0x00056579) tb_ext_find_pane_t1

0xc323,	// (0x00054f20) tb_ext_find_button_pane_g1

0x6b42,	// (0x0004f73f) tb_ext_find_button_pane_g2

0x0001,

0xfd8d,	// (0x0005898a) tb_ext_find_button_pane_g

0xd787,	// (0x00056384) main_idle_act4_pane_t1_ParamLimits

0xd79f,	// (0x0005639c) main_idle_act4_pane_t2_ParamLimits

0xfd4b,	// (0x00058948) main_idle_act4_pane_t_ParamLimits

0xd7d3,	// (0x000563d0) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd7ea,	// (0x000563e7) sat_plugin_idle_act4_pane_ParamLimits

0xd7ea,	// (0x000563e7) sat_plugin_idle_act4_pane

0xd98a,	// (0x00056587) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd98a,	// (0x00056587) sat_plugin_idle_act4_pane_t1

0xd9a2,	// (0x0005659f) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd9a2,	// (0x0005659f) sat_plugin_idle_act4_pane_t2

0xd9ba,	// (0x000565b7) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd9ba,	// (0x000565b7) sat_plugin_idle_act4_pane_t3

0xd9d2,	// (0x000565cf) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd9d2,	// (0x000565cf) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd92,	// (0x0005898f) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd92,	// (0x0005898f) sat_plugin_idle_act4_pane_t

0xee51,	// (0x00057a4e) popup_battery_window_ParamLimits

0xee51,	// (0x00057a4e) popup_battery_window

0xa068,	// (0x00052c65) bg_popup_sub_pane_cp25_ParamLimits

0xa068,	// (0x00052c65) bg_popup_sub_pane_cp25

0x6b97,	// (0x0004f794) popup_battery_window_g1_ParamLimits

0x6b97,	// (0x0004f794) popup_battery_window_g1

0x6ba3,	// (0x0004f7a0) popup_battery_window_t1_ParamLimits

0x6ba3,	// (0x0004f7a0) popup_battery_window_t1

0x6ce8,	// (0x0004f8e5) popup_battery_window_t2_ParamLimits

0x6ce8,	// (0x0004f8e5) popup_battery_window_t2

0x0001,

0xfd9b,	// (0x00058998) popup_battery_window_t_ParamLimits

0xfd9b,	// (0x00058998) popup_battery_window_t

0xaf43,	// (0x00053b40) midp_canvas_pane_ParamLimits

0xaf9e,	// (0x00053b9b) midp_keypad_pane_ParamLimits

0xaf9e,	// (0x00053b9b) midp_keypad_pane

0x1cef,	// (0x0004a8ec) main_midp_pane_ParamLimits

0x4958,	// (0x0004d555) signal_pane_g2_cp_ParamLimits

0xd9ea,	// (0x000565e7) aid_size_cell_midp_keypad_ParamLimits

0xd9ea,	// (0x000565e7) aid_size_cell_midp_keypad

0xda08,	// (0x00056605) midp_keyp_game_grid_pane_ParamLimits

0xda08,	// (0x00056605) midp_keyp_game_grid_pane

0xda2f,	// (0x0005662c) midp_keyp_rocker_pane_ParamLimits

0xda2f,	// (0x0005662c) midp_keyp_rocker_pane

0xda6e,	// (0x0005666b) midp_keyp_sk_left_pane_ParamLimits

0xda6e,	// (0x0005666b) midp_keyp_sk_left_pane

0xdac2,	// (0x000566bf) midp_keyp_sk_right_pane_ParamLimits

0xdac2,	// (0x000566bf) midp_keyp_sk_right_pane

0x6bbd,	// (0x0004f7ba) bg_button_pane_cp03

0xdb16,	// (0x00056713) midp_keyp_sk_left_pane_g1

0x6bbd,	// (0x0004f7ba) bg_button_pane_cp04

0xdb16,	// (0x00056713) midp_keyp_sk_right_pane_g1

0x4e59,	// (0x0004da56) midp_keyp_rocker_pane_g1

0xdb1f,	// (0x0005671c) keyp_game_cell_pane_ParamLimits

0xdb1f,	// (0x0005671c) keyp_game_cell_pane

0x6bbd,	// (0x0004f7ba) bg_button_pane_cp02

0xdb45,	// (0x00056742) keyp_game_cell_pane_g1

0x9bd5,	// (0x000527d2) popup_fep_vkb2_window_ParamLimits

0x9bd5,	// (0x000527d2) popup_fep_vkb2_window

0xbe6f,	// (0x00054a6c) aid_size_cell_vkb2_ParamLimits

0xbe6f,	// (0x00054a6c) aid_size_cell_vkb2

0xbea5,	// (0x00054aa2) popup_fep_vkb2_window_g1_ParamLimits

0xbea5,	// (0x00054aa2) popup_fep_vkb2_window_g1

0xbef5,	// (0x00054af2) vkb2_area_bottom_pane_ParamLimits

0xbef5,	// (0x00054af2) vkb2_area_bottom_pane

0xbf51,	// (0x00054b4e) vkb2_area_keypad_pane_ParamLimits

0xbf51,	// (0x00054b4e) vkb2_area_keypad_pane

0xbf9f,	// (0x00054b9c) vkb2_area_top_pane_ParamLimits

0xbf9f,	// (0x00054b9c) vkb2_area_top_pane

0xc025,	// (0x00054c22) vkb2_top_entry_pane_ParamLimits

0xc025,	// (0x00054c22) vkb2_top_entry_pane

0xc052,	// (0x00054c4f) vkb2_top_grid_left_pane_ParamLimits

0xc052,	// (0x00054c4f) vkb2_top_grid_left_pane

0xc072,	// (0x00054c6f) vkb2_top_grid_right_pane_ParamLimits

0xc072,	// (0x00054c6f) vkb2_top_grid_right_pane

0x157e,	// (0x0004a17b) vkb2_cell_keypad_pane_ParamLimits

0x157e,	// (0x0004a17b) vkb2_cell_keypad_pane

0xc0b8,	// (0x00054cb5) vkb2_area_bottom_grid_pane_ParamLimits

0xc0b8,	// (0x00054cb5) vkb2_area_bottom_grid_pane

0xc0e2,	// (0x00054cdf) vkb2_area_bottom_pane_g1_ParamLimits

0xc0e2,	// (0x00054cdf) vkb2_area_bottom_pane_g1

0xc108,	// (0x00054d05) vkb2_area_bottom_pane_g2_ParamLimits

0xc108,	// (0x00054d05) vkb2_area_bottom_pane_g2

0xc139,	// (0x00054d36) vkb2_area_bottom_pane_g3_ParamLimits

0xc139,	// (0x00054d36) vkb2_area_bottom_pane_g3

0x0002,

0xfda0,	// (0x0005899d) vkb2_area_bottom_pane_g_ParamLimits

0xfda0,	// (0x0005899d) vkb2_area_bottom_pane_g

0x1728,	// (0x0004a325) vkb2_top_cell_left_pane_ParamLimits

0x1728,	// (0x0004a325) vkb2_top_cell_left_pane

0xdb4e,	// (0x0005674b) vkb2_top_entry_pane_g1_ParamLimits

0xdb4e,	// (0x0005674b) vkb2_top_entry_pane_g1

0xdb5c,	// (0x00056759) vkb2_top_entry_pane_t1_ParamLimits

0xdb5c,	// (0x00056759) vkb2_top_entry_pane_t1

0x6e8b,	// (0x0004fa88) vkb2_top_entry_pane_t2_ParamLimits

0x6e8b,	// (0x0004fa88) vkb2_top_entry_pane_t2

0x6ebd,	// (0x0004faba) vkb2_top_entry_pane_t3_ParamLimits

0x6ebd,	// (0x0004faba) vkb2_top_entry_pane_t3

0x0002,

0xfda7,	// (0x000589a4) vkb2_top_entry_pane_t_ParamLimits

0xfda7,	// (0x000589a4) vkb2_top_entry_pane_t

0xc1a3,	// (0x00054da0) vkb2_top_grid_right_pane_g1_ParamLimits

0xc1a3,	// (0x00054da0) vkb2_top_grid_right_pane_g1

0x178b,	// (0x0004a388) vkb2_top_grid_right_pane_g2_ParamLimits

0x178b,	// (0x0004a388) vkb2_top_grid_right_pane_g2

0x17a3,	// (0x0004a3a0) vkb2_top_grid_right_pane_g3_ParamLimits

0x17a3,	// (0x0004a3a0) vkb2_top_grid_right_pane_g3

0xc1b9,	// (0x00054db6) vkb2_top_grid_right_pane_g4_ParamLimits

0xc1b9,	// (0x00054db6) vkb2_top_grid_right_pane_g4

0x0003,

0xfdae,	// (0x000589ab) vkb2_top_grid_right_pane_g_ParamLimits

0xfdae,	// (0x000589ab) vkb2_top_grid_right_pane_g

0x17d1,	// (0x0004a3ce) vkb2_top_cell_left_pane_g1

0x17e8,	// (0x0004a3e5) vkb2_cell_keypad_pane_g1_ParamLimits

0x17e8,	// (0x0004a3e5) vkb2_cell_keypad_pane_g1

0x6ee1,	// (0x0004fade) vkb2_cell_keypad_pane_t1_ParamLimits

0x6ee1,	// (0x0004fade) vkb2_cell_keypad_pane_t1

0x17f6,	// (0x0004a3f3) vkb2_cell_bottom_grid_pane_ParamLimits

0x17f6,	// (0x0004a3f3) vkb2_cell_bottom_grid_pane

0x182f,	// (0x0004a42c) vkb2_cell_bottom_grid_pane_g1

0xd81b,	// (0x00056418) aid_call2_pane_cp02

0xd823,	// (0x00056420) aid_call_pane_cp02

0xd82b,	// (0x00056428) clock_digital_number_pane_cp10

0xd833,	// (0x00056430) clock_digital_number_pane_cp11

0xd83b,	// (0x00056438) clock_digital_number_pane_cp12

0xd843,	// (0x00056440) clock_digital_number_pane_cp13

0xd84b,	// (0x00056448) clock_digital_separator_pane_cp10

0xc323,	// (0x00054f20) popup_clock_digital_analogue_window_cp2_g1

0xc323,	// (0x00054f20) popup_clock_digital_analogue_window_cp2_g2

0xd853,	// (0x00056450) popup_clock_digital_analogue_window_cp2_g3

0xc323,	// (0x00054f20) popup_clock_digital_analogue_window_cp2_g4

0xd853,	// (0x00056450) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd63,	// (0x00058960) popup_clock_digital_analogue_window_cp2_g

0xd85b,	// (0x00056458) popup_clock_digital_analogue_window_cp2_t1

0xd869,	// (0x00056466) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd6e,	// (0x0005896b) popup_clock_digital_analogue_window_cp2_t

0x4e59,	// (0x0004da56) clock_digital_number_pane_cp10_g1

0x4e59,	// (0x0004da56) clock_digital_number_pane_cp10_g2

0x0001,

0xfb56,	// (0x00058753) clock_digital_number_pane_cp10_g

0x4e59,	// (0x0004da56) clock_digital_separator_pane_cp10_g1

0x4e59,	// (0x0004da56) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb56,	// (0x00058753) clock_digital_separator_pane_cp10_g

0x67e1,	// (0x0004f3de) uniindi_top_pane_g3

0x67f2,	// (0x0004f3ef) uniindi_top_pane_g4

0x1609,	// (0x0004a206) vkb2_row_keypad_pane_ParamLimits

0x1609,	// (0x0004a206) vkb2_row_keypad_pane

0x184b,	// (0x0004a448) vkb2_cell_t_keypad_pane_ParamLimits

0x184b,	// (0x0004a448) vkb2_cell_t_keypad_pane

0x185b,	// (0x0004a458) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x185b,	// (0x0004a458) vkb2_cell_t_keypad_pane_cp08

0x1870,	// (0x0004a46d) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x1870,	// (0x0004a46d) vkb2_cell_t_keypad_pane_cp09

0x1884,	// (0x0004a481) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x1884,	// (0x0004a481) vkb2_cell_t_keypad_pane_cp01

0x1895,	// (0x0004a492) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x1895,	// (0x0004a492) vkb2_cell_t_keypad_pane_cp02

0x18a6,	// (0x0004a4a3) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x18a6,	// (0x0004a4a3) vkb2_cell_t_keypad_pane_cp03

0x18b7,	// (0x0004a4b4) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x18b7,	// (0x0004a4b4) vkb2_cell_t_keypad_pane_cp04

0x18c8,	// (0x0004a4c5) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x18c8,	// (0x0004a4c5) vkb2_cell_t_keypad_pane_cp05

0x18d9,	// (0x0004a4d6) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x18d9,	// (0x0004a4d6) vkb2_cell_t_keypad_pane_cp06

0x18ec,	// (0x0004a4e9) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x18ec,	// (0x0004a4e9) vkb2_cell_t_keypad_pane_cp07

0x1901,	// (0x0004a4fe) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x1901,	// (0x0004a4fe) vkb2_cell_t_keypad_pane_cp10

0x50d4,	// (0x0004dcd1) vkb2_cell_t_keypad_pane_g1

0x6ef8,	// (0x0004faf5) vkb2_cell_t_keypad_pane_t1

0x6bbd,	// (0x0004f7ba) popup_grid_graphic2_window

0xdb95,	// (0x00056792) aid_size_cell_graphic2_ParamLimits

0xdb95,	// (0x00056792) aid_size_cell_graphic2

0xdbd3,	// (0x000567d0) bg_popup_window_pane_cp21_ParamLimits

0xdbd3,	// (0x000567d0) bg_popup_window_pane_cp21

0xdbe1,	// (0x000567de) graphic2_pages_pane_ParamLimits

0xdbe1,	// (0x000567de) graphic2_pages_pane

0xdc39,	// (0x00056836) grid_graphic2_control_pane_ParamLimits

0xdc39,	// (0x00056836) grid_graphic2_control_pane

0xdc81,	// (0x0005687e) grid_graphic2_pane_ParamLimits

0xdc81,	// (0x0005687e) grid_graphic2_pane

0xdd0c,	// (0x00056909) cell_graphic2_pane

0x6bbd,	// (0x0004f7ba) main_comp_mode_pane

0x6052,	// (0x0004ec4f) list_ai3_gene_pane_ParamLimits

0xd558,	// (0x00056155) bg_popup_window_pane_cp19_ParamLimits

0x6426,	// (0x0004f023) bg_touch_area_indi_pane_ParamLimits

0x6426,	// (0x0004f023) bg_touch_area_indi_pane

0x643c,	// (0x0004f039) bg_touch_area_indi_pane_cp01_ParamLimits

0x643c,	// (0x0004f039) bg_touch_area_indi_pane_cp01

0x6454,	// (0x0004f051) bg_touch_area_indi_pane_cp02_ParamLimits

0x6454,	// (0x0004f051) bg_touch_area_indi_pane_cp02

0x646e,	// (0x0004f06b) bg_touch_area_indi_pane_cp03_ParamLimits

0x646e,	// (0x0004f06b) bg_touch_area_indi_pane_cp03

0x6488,	// (0x0004f085) popup_slider_window_g1_ParamLimits

0x64a4,	// (0x0004f0a1) popup_slider_window_g2_ParamLimits

0x64c0,	// (0x0004f0bd) popup_slider_window_g3_ParamLimits

0xfcf8,	// (0x000588f5) popup_slider_window_g_ParamLimits

0x651c,	// (0x0004f119) popup_slider_window_t1_ParamLimits

0x6590,	// (0x0004f18d) small_volume_slider_vertical_pane_ParamLimits

0xdd0c,	// (0x00056909) cell_graphic2_pane_ParamLimits

0xdd6f,	// (0x0005696c) bg_button_pane_cp10_ParamLimits

0xdd6f,	// (0x0005696c) bg_button_pane_cp10

0xdd82,	// (0x0005697f) bg_button_pane_cp11_ParamLimits

0xdd82,	// (0x0005697f) bg_button_pane_cp11

0xdd95,	// (0x00056992) graphic2_pages_pane_g1_ParamLimits

0xdd95,	// (0x00056992) graphic2_pages_pane_g1

0xddb0,	// (0x000569ad) graphic2_pages_pane_g2_ParamLimits

0xddb0,	// (0x000569ad) graphic2_pages_pane_g2

0x0001,

0xfdbc,	// (0x000589b9) graphic2_pages_pane_g_ParamLimits

0xfdbc,	// (0x000589b9) graphic2_pages_pane_g

0xddc8,	// (0x000569c5) graphic2_pages_pane_t1_ParamLimits

0xddc8,	// (0x000569c5) graphic2_pages_pane_t1

0xdde0,	// (0x000569dd) cell_graphic2_control_pane_ParamLimits

0xdde0,	// (0x000569dd) cell_graphic2_control_pane

0xde14,	// (0x00056a11) cell_graphic2_pane_g1_ParamLimits

0xde14,	// (0x00056a11) cell_graphic2_pane_g1

0xcec5,	// (0x00055ac2) cell_graphic2_pane_g2_ParamLimits

0xcec5,	// (0x00055ac2) cell_graphic2_pane_g2

0xde21,	// (0x00056a1e) cell_graphic2_pane_g3_ParamLimits

0xde21,	// (0x00056a1e) cell_graphic2_pane_g3

0xced2,	// (0x00055acf) cell_graphic2_pane_g4_ParamLimits

0xced2,	// (0x00055acf) cell_graphic2_pane_g4

0xde2e,	// (0x00056a2b) cell_graphic2_pane_g5_ParamLimits

0xde2e,	// (0x00056a2b) cell_graphic2_pane_g5

0x0004,

0xfdc1,	// (0x000589be) cell_graphic2_pane_g_ParamLimits

0xfdc1,	// (0x000589be) cell_graphic2_pane_g

0xde4e,	// (0x00056a4b) cell_graphic2_pane_t1_ParamLimits

0xde4e,	// (0x00056a4b) cell_graphic2_pane_t1

0x34f7,	// (0x0004c0f4) grid_highlight_pane_cp11_ParamLimits

0x34f7,	// (0x0004c0f4) grid_highlight_pane_cp11

0xa068,	// (0x00052c65) bg_button_pane_cp05

0xde83,	// (0x00056a80) cell_graphic2_control_pane_g1

0x4e59,	// (0x0004da56) bg_touch_area_indi_pane_g1

0x71d2,	// (0x0004fdcf) aid_cmod_rocker_key_size

0x71dc,	// (0x0004fdd9) aid_cmode_itu_key_size

0x71e6,	// (0x0004fde3) main_cmode_video_pane

0x71f0,	// (0x0004fded) main_comp_mode_itu_pane

0x71fc,	// (0x0004fdf9) main_comp_mode_rocker_pane

0x7208,	// (0x0004fe05) cell_cmode_rocker_pane_ParamLimits

0x7208,	// (0x0004fe05) cell_cmode_rocker_pane

0x721c,	// (0x0004fe19) cell_cmode_itu_pane_ParamLimits

0x721c,	// (0x0004fe19) cell_cmode_itu_pane

0xa6c1,	// (0x000532be) bg_button_pane_cp06_ParamLimits

0xa6c1,	// (0x000532be) bg_button_pane_cp06

0x50d4,	// (0x0004dcd1) cell_cmode_rocker_pane_g1_ParamLimits

0x50d4,	// (0x0004dcd1) cell_cmode_rocker_pane_g1

0x6637,	// (0x0004f234) cell_cmode_rocker_pane_g2_ParamLimits

0x6637,	// (0x0004f234) cell_cmode_rocker_pane_g2

0x0001,

0xfdd1,	// (0x000589ce) cell_cmode_rocker_pane_g_ParamLimits

0xfdd1,	// (0x000589ce) cell_cmode_rocker_pane_g

0x6bbd,	// (0x0004f7ba) bg_button_pane_cp07

0x7233,	// (0x0004fe30) cell_cmode_itu_pane_g1

0x723c,	// (0x0004fe39) cell_cmode_itu_pane_t1

0x724a,	// (0x0004fe47) cell_cmode_itu_pane_t2

0x0001,

0xfdd6,	// (0x000589d3) cell_cmode_itu_pane_t

0x6865,	// (0x0004f462) aid_touch_ctrl_left

0x686d,	// (0x0004f46a) aid_touch_ctrl_right

0x6bbd,	// (0x0004f7ba) compa_mode_pane

0xdea9,	// (0x00056aa6) aid_cmod_rocker_key_size_cp

0xdeb3,	// (0x00056ab0) aid_cmode_itu_key_size_cp

0x726c,	// (0x0004fe69) compa_mode_pane_g1

0x7274,	// (0x0004fe71) compa_mode_pane_g2

0x727c,	// (0x0004fe79) compa_mode_pane_g3

0x0002,

0xfddb,	// (0x000589d8) compa_mode_pane_g

0xdebd,	// (0x00056aba) main_comp_mode_itu_pane_cp

0xdec5,	// (0x00056ac2) main_comp_mode_rocker_pane_cp

0xdecd,	// (0x00056aca) cell_cmode_itu_pane_cp_ParamLimits

0xdecd,	// (0x00056aca) cell_cmode_itu_pane_cp

0xdee2,	// (0x00056adf) cell_cmode_rocker_pane_cp_ParamLimits

0xdee2,	// (0x00056adf) cell_cmode_rocker_pane_cp

0xa6c1,	// (0x000532be) bg_button_pane_cp06_cp_ParamLimits

0xa6c1,	// (0x000532be) bg_button_pane_cp06_cp

0x50d4,	// (0x0004dcd1) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x50d4,	// (0x0004dcd1) cell_cmode_rocker_pane_g1_cp

0x4e59,	// (0x0004da56) cell_cmode_rocker_pane_g2_cp

0x6bbd,	// (0x0004f7ba) bg_button_pane_cp07_cp

0xdef4,	// (0x00056af1) cell_cmode_itu_pane_g1_cp

0xdefd,	// (0x00056afa) cell_cmode_itu_pane_t1_cp

0xdefd,	// (0x00056afa) cell_cmode_itu_pane_t2_cp

0xcb23,	// (0x00055720) settings_code_pane_cp2

0x6c2b,	// (0x0004f828) bg_popup_window_pane_cp3_ParamLimits

0xa256,	// (0x00052e53) heading_pane_cp3_ParamLimits

0xa262,	// (0x00052e5f) listscroll_popup_graphic_pane_ParamLimits

0x0e0f,	// (0x00049a0c) fep_hwr_aid_pane_ParamLimits

0x12dd,	// (0x00049eda) aid_touch_sctrl_top_ParamLimits

0x12ea,	// (0x00049ee7) sctrl_sk_top_pane_g1_ParamLimits

0x50d4,	// (0x0004dcd1) sctrl_sk_top_pane_g2_ParamLimits

0xfd11,	// (0x0005890e) sctrl_sk_top_pane_g_ParamLimits

0x12f7,	// (0x00049ef4) sctrl_sk_top_pane_t1_ParamLimits

0x12dd,	// (0x00049eda) aid_touch_sctrl_bottom_ParamLimits

0x12f7,	// (0x00049ef4) sctrl_sk_bottom_pane_t1_ParamLimits

0x67ab,	// (0x0004f3a8) aid_area_touch_clock

0xbfe7,	// (0x00054be4) aid_vkb2_area_top_pane_cell_ParamLimits

0xbfe7,	// (0x00054be4) aid_vkb2_area_top_pane_cell

0xc092,	// (0x00054c8f) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xc092,	// (0x00054c8f) aid_vkb2_area_bottom_pane_cell

0x6e43,	// (0x0004fa40) popup_char_count_window

0x72d2,	// (0x0004fecf) popup_char_count_window_g1

0x72db,	// (0x0004fed8) popup_char_count_window_g2

0x72e4,	// (0x0004fee1) popup_char_count_window_g3

0x0002,

0xfde2,	// (0x000589df) popup_char_count_window_g

0x72ed,	// (0x0004feea) popup_char_count_window_t1

0x139a,	// (0x00049f97) popup_fep_char_preview_window_ParamLimits

0x139a,	// (0x00049f97) popup_fep_char_preview_window

0xc007,	// (0x00054c04) vkb2_top_candi_pane_ParamLimits

0xc007,	// (0x00054c04) vkb2_top_candi_pane

0xdf0b,	// (0x00056b08) cell_vkb2_top_candi_pane_ParamLimits

0xdf0b,	// (0x00056b08) cell_vkb2_top_candi_pane

0x2e80,	// (0x0004ba7d) bg_popup_fep_char_preview_window_ParamLimits

0x2e80,	// (0x0004ba7d) bg_popup_fep_char_preview_window

0x1916,	// (0x0004a513) popup_fep_char_preview_window_t1_ParamLimits

0x1916,	// (0x0004a513) popup_fep_char_preview_window_t1

0x734c,	// (0x0004ff49) bg_popup_fep_char_preview_window_g1

0x7354,	// (0x0004ff51) bg_popup_fep_char_preview_window_g2

0x735c,	// (0x0004ff59) bg_popup_fep_char_preview_window_g3

0x7364,	// (0x0004ff61) bg_popup_fep_char_preview_window_g4

0x736c,	// (0x0004ff69) bg_popup_fep_char_preview_window_g5

0x1950,	// (0x0004a54d) bg_popup_fep_char_preview_window_g6

0x7374,	// (0x0004ff71) bg_popup_fep_char_preview_window_g7

0x737c,	// (0x0004ff79) bg_popup_fep_char_preview_window_g8

0x7384,	// (0x0004ff81) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde9,	// (0x000589e6) bg_popup_fep_char_preview_window_g

0x50d4,	// (0x0004dcd1) cell_vkb2_top_candi_pane_g1_ParamLimits

0x50d4,	// (0x0004dcd1) cell_vkb2_top_candi_pane_g1

0x5415,	// (0x0004e012) cell_vkb2_top_candi_pane_g2_ParamLimits

0x5415,	// (0x0004e012) cell_vkb2_top_candi_pane_g2

0x5436,	// (0x0004e033) cell_vkb2_top_candi_pane_g3_ParamLimits

0x5436,	// (0x0004e033) cell_vkb2_top_candi_pane_g3

0x1958,	// (0x0004a555) cell_vkb2_top_candi_pane_g4_ParamLimits

0x1958,	// (0x0004a555) cell_vkb2_top_candi_pane_g4

0x738c,	// (0x0004ff89) cell_vkb2_top_candi_pane_g5_ParamLimits

0x738c,	// (0x0004ff89) cell_vkb2_top_candi_pane_g5

0x6637,	// (0x0004f234) cell_vkb2_top_candi_pane_g6_ParamLimits

0x6637,	// (0x0004f234) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdfc,	// (0x000589f9) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdfc,	// (0x000589f9) cell_vkb2_top_candi_pane_g

0x1979,	// (0x0004a576) cell_vkb2_top_candi_pane_t1

0x0c08,	// (0x00049805) aid_size_touch_slider_mark_ParamLimits

0x0c08,	// (0x00049805) aid_size_touch_slider_mark

0xdc1d,	// (0x0005681a) grid_graphic2_catg_pane_ParamLimits

0xdc1d,	// (0x0005681a) grid_graphic2_catg_pane

0xdcdb,	// (0x000568d8) popup_grid_graphic2_window_t1_ParamLimits

0xdcdb,	// (0x000568d8) popup_grid_graphic2_window_t1

0xdcf1,	// (0x000568ee) popup_grid_graphic2_window_t2_ParamLimits

0xdcf1,	// (0x000568ee) popup_grid_graphic2_window_t2

0x0001,

0xfdb7,	// (0x000589b4) popup_grid_graphic2_window_t_ParamLimits

0xfdb7,	// (0x000589b4) popup_grid_graphic2_window_t

0xa068,	// (0x00052c65) bg_button_pane_cp05_ParamLimits

0xde83,	// (0x00056a80) cell_graphic2_control_pane_g1_ParamLimits

0xdf75,	// (0x00056b72) cell_graphic2_catg_pane_ParamLimits

0xdf75,	// (0x00056b72) cell_graphic2_catg_pane

0x6bbd,	// (0x0004f7ba) bg_button_pane_cp12

0xdf87,	// (0x00056b84) cell_graphic2_catg_pane_g1

0x6777,	// (0x0004f374) cell_tb_ext_pane_t1_ParamLimits

0x1748,	// (0x0004a345) vkb2_top_cell_right_narrow_pane_ParamLimits

0x1748,	// (0x0004a345) vkb2_top_cell_right_narrow_pane

0x1760,	// (0x0004a35d) vkb2_top_cell_right_wide_pane_ParamLimits

0x1760,	// (0x0004a35d) vkb2_top_cell_right_wide_pane

0x8925,	// (0x00051522) bg_vkb2_func_pane_ParamLimits

0x8925,	// (0x00051522) bg_vkb2_func_pane

0x17d1,	// (0x0004a3ce) vkb2_top_cell_left_pane_g1_ParamLimits

0x8925,	// (0x00051522) bg_vkb2_fuc_pane_cp03_ParamLimits

0x8925,	// (0x00051522) bg_vkb2_fuc_pane_cp03

0x182f,	// (0x0004a42c) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x2838,	// (0x0004b435) bg_vkb2_func_pane_g1

0x2840,	// (0x0004b43d) bg_vkb2_func_pane_g2

0x2850,	// (0x0004b44d) bg_vkb2_func_pane_g3

0x2848,	// (0x0004b445) bg_vkb2_func_pane_g4

0x2858,	// (0x0004b455) bg_vkb2_func_pane_g5

0x2860,	// (0x0004b45d) bg_vkb2_func_pane_g6

0x2868,	// (0x0004b465) bg_vkb2_func_pane_g7

0x2870,	// (0x0004b46d) bg_vkb2_func_pane_g8

0x2830,	// (0x0004b42d) bg_vkb2_func_pane_g9

0x0008,

0xfe09,	// (0x00058a06) bg_vkb2_func_pane_g

0x8925,	// (0x00051522) bg_vkb2_fuc_pane_cp01_ParamLimits

0x8925,	// (0x00051522) bg_vkb2_fuc_pane_cp01

0x17d1,	// (0x0004a3ce) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x17d1,	// (0x0004a3ce) vkb2_top_cell_right_wide_pane_g1

0x8925,	// (0x00051522) bg_vkb2_fuc_pane_cp02_ParamLimits

0x8925,	// (0x00051522) bg_vkb2_fuc_pane_cp02

0x182f,	// (0x0004a42c) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x182f,	// (0x0004a42c) vkb2_top_cell_right_narrow_pane_g1

0xd492,	// (0x0005608f) aid_touch_area_decrease_ParamLimits

0xd492,	// (0x0005608f) aid_touch_area_decrease

0xd4cc,	// (0x000560c9) aid_touch_area_increase_ParamLimits

0xd4cc,	// (0x000560c9) aid_touch_area_increase

0xd4f4,	// (0x000560f1) aid_touch_area_mute_ParamLimits

0xd4f4,	// (0x000560f1) aid_touch_area_mute

0xd524,	// (0x00056121) aid_touch_area_slider_ParamLimits

0xd524,	// (0x00056121) aid_touch_area_slider

0xd564,	// (0x00056161) popup_slider_window_g4_ParamLimits

0xd564,	// (0x00056161) popup_slider_window_g4

0xd58c,	// (0x00056189) popup_slider_window_g5_ParamLimits

0xd58c,	// (0x00056189) popup_slider_window_g5

0xd5c0,	// (0x000561bd) popup_slider_window_g6_ParamLimits

0xd5c0,	// (0x000561bd) popup_slider_window_g6

0x654a,	// (0x0004f147) popup_slider_window_t2_ParamLimits

0x654a,	// (0x0004f147) popup_slider_window_t2

0x0001,

0xfd05,	// (0x00058902) popup_slider_window_t_ParamLimits

0xfd05,	// (0x00058902) popup_slider_window_t

0xd5dc,	// (0x000561d9) slider_pane_ParamLimits

0xd5dc,	// (0x000561d9) slider_pane

0x73c8,	// (0x0004ffc5) slider_pane_g1_ParamLimits

0x73c8,	// (0x0004ffc5) slider_pane_g1

0x73dc,	// (0x0004ffd9) slider_pane_g2_ParamLimits

0x73dc,	// (0x0004ffd9) slider_pane_g2

0x73f2,	// (0x0004ffef) slider_pane_g3_ParamLimits

0x73f2,	// (0x0004ffef) slider_pane_g3

0x0003,

0xfe1c,	// (0x00058a19) slider_pane_g_ParamLimits

0xfe1c,	// (0x00058a19) slider_pane_g

0xb845,	// (0x00054442) popup_tb_float_extension_window_ParamLimits

0xb845,	// (0x00054442) popup_tb_float_extension_window

0x741e,	// (0x0005001b) aid_size_cell_tb_float_ext

0x6bbd,	// (0x0004f7ba) bg_popup_sub_window_cp28

0x742a,	// (0x00050027) grid_tb_float_ext_pane

0x7436,	// (0x00050033) cell_tb_float_ext_pane_ParamLimits

0x7436,	// (0x00050033) cell_tb_float_ext_pane

0x7452,	// (0x0005004f) cell_tb_float_ext_pane_g1

0x745b,	// (0x00050058) grid_highlight_pane_cp12

0xbd68,	// (0x00054965) cell_last_hwr_side_pane_ParamLimits

0xbd68,	// (0x00054965) cell_last_hwr_side_pane

0x4e59,	// (0x0004da56) cell_last_hwr_side_pane_g1

0x7464,	// (0x00050061) cell_last_hwr_side_pane_g2

0x0001,

0xfe25,	// (0x00058a22) cell_last_hwr_side_pane_g

0xc16e,	// (0x00054d6b) vkb2_area_bottom_space_btn_pane_ParamLimits

0xc16e,	// (0x00054d6b) vkb2_area_bottom_space_btn_pane

0x50d4,	// (0x0004dcd1) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x6ef8,	// (0x0004faf5) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x1979,	// (0x0004a576) cell_vkb2_top_candi_pane_t1_ParamLimits

0x1997,	// (0x0004a594) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x1997,	// (0x0004a594) vkb2_area_bottom_space_btn_pane_g1

0x19d1,	// (0x0004a5ce) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x19d1,	// (0x0004a5ce) vkb2_area_bottom_space_btn_pane_g2

0x1a07,	// (0x0004a604) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x1a07,	// (0x0004a604) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe2a,	// (0x00058a27) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe2a,	// (0x00058a27) vkb2_area_bottom_space_btn_pane_g

0x0eb8,	// (0x00049ab5) cel_fep_hwr_func_pane_ParamLimits

0x0eb8,	// (0x00049ab5) cel_fep_hwr_func_pane

0xbd3d,	// (0x0005493a) cell_hwr_side_button_pane_ParamLimits

0xbd3d,	// (0x0005493a) cell_hwr_side_button_pane

0x67ab,	// (0x0004f3a8) aid_area_touch_clock_ParamLimits

0xa068,	// (0x00052c65) bg_uniindi_top_pane_ParamLimits

0x67bf,	// (0x0004f3bc) uniindi_top_pane_g1_ParamLimits

0x67d5,	// (0x0004f3d2) uniindi_top_pane_g2_ParamLimits

0x67e1,	// (0x0004f3de) uniindi_top_pane_g3_ParamLimits

0x67f2,	// (0x0004f3ef) uniindi_top_pane_g4_ParamLimits

0xfd3d,	// (0x0005893a) uniindi_top_pane_g_ParamLimits

0x67ff,	// (0x0004f3fc) uniindi_top_pane_t1_ParamLimits

0xa068,	// (0x00052c65) bg_vkb2_func_pane_cp01_ParamLimits

0xa068,	// (0x00052c65) bg_vkb2_func_pane_cp01

0x746d,	// (0x0005006a) cel_fep_hwr_func_pane_g1_ParamLimits

0x746d,	// (0x0005006a) cel_fep_hwr_func_pane_g1

0xa068,	// (0x00052c65) bg_vkb2_func_pane_cp02_ParamLimits

0xa068,	// (0x00052c65) bg_vkb2_func_pane_cp02

0x746d,	// (0x0005006a) cell_hwr_side_button_pane_g1_ParamLimits

0x746d,	// (0x0005006a) cell_hwr_side_button_pane_g1

0x26b1,	// (0x0004b2ae) status_pane_g4_ParamLimits

0x26b1,	// (0x0004b2ae) status_pane_g4

0x26cb,	// (0x0004b2c8) status_pane_t1

0x4bf8,	// (0x0004d7f5) form2_midp_gauge_slider_cont_pane

0x4c00,	// (0x0004d7fd) form2_midp_gauge_slider_pane_t1_ParamLimits

0xcdfd,	// (0x000559fa) form2_midp_gauge_slider_pane_t2_ParamLimits

0xce0f,	// (0x00055a0c) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb09,	// (0x00058706) form2_midp_gauge_slider_pane_t_ParamLimits

0x4c36,	// (0x0004d833) form2_midp_slider_pane_ParamLimits

0x135a,	// (0x00049f57) aid_size_cell_func_vkb2_ParamLimits

0x135a,	// (0x00049f57) aid_size_cell_func_vkb2

0x740a,	// (0x00050007) slider_pane_g4_ParamLimits

0x740a,	// (0x00050007) slider_pane_g4

0xc1cf,	// (0x00054dcc) form2_midp_gauge_slider_pane_t2_cp01

0xc1dd,	// (0x00054dda) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xc1dd,	// (0x00054dda) form2_midp_gauge_slider_pane_t3_cp01

0x1a7c,	// (0x0004a679) form2_midp_slider_pane_cp01

0x6bbd,	// (0x0004f7ba) navi_smil_pane

0x74a6,	// (0x000500a3) navi_smil_pane_g1

0x74ae,	// (0x000500ab) navi_smil_pane_t1

0x747b,	// (0x00050078) form2_midp_slider_pane_g1

0x7484,	// (0x00050081) form2_midp_slider_pane_g2

0x748c,	// (0x00050089) form2_midp_slider_pane_g3

0x747b,	// (0x00050078) form2_midp_slider_pane_g4

0xdf90,	// (0x00056b8d) form2_midp_slider_pane_g5

0x0004,

0xfe33,	// (0x00058a30) form2_midp_slider_pane_g

0x1a41,	// (0x0004a63e) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x1a41,	// (0x0004a63e) vkb2_area_bottom_space_btn_pane_g4

0xba2c,	// (0x00054629) lc0_navi_pane_ParamLimits

0xba2c,	// (0x00054629) lc0_navi_pane

0xba9c,	// (0x00054699) lc0_stat_indi_pane_ParamLimits

0xba9c,	// (0x00054699) lc0_stat_indi_pane

0xbab1,	// (0x000546ae) ls0_title_pane_ParamLimits

0xbab1,	// (0x000546ae) ls0_title_pane

0xa6c1,	// (0x000532be) bg_popup_sub_pane_cp14_ParamLimits

0x6792,	// (0x0004f38f) list_uniindi_pane_ParamLimits

0x679e,	// (0x0004f39b) uniindi_top_pane_ParamLimits

0x683d,	// (0x0004f43a) list_single_uniindi_pane_g1_ParamLimits

0x6850,	// (0x0004f44d) list_single_uniindi_pane_t1_ParamLimits

0xc1fa,	// (0x00054df7) lc0_stat_clock_pane_ParamLimits

0xc1fa,	// (0x00054df7) lc0_stat_clock_pane

0xdf99,	// (0x00056b96) lc0_stat_indi_pane_g1_ParamLimits

0xdf99,	// (0x00056b96) lc0_stat_indi_pane_g1

0xdfa6,	// (0x00056ba3) lc0_stat_indi_pane_g2_ParamLimits

0xdfa6,	// (0x00056ba3) lc0_stat_indi_pane_g2

0x0001,

0xfe3e,	// (0x00058a3b) lc0_stat_indi_pane_g_ParamLimits

0xfe3e,	// (0x00058a3b) lc0_stat_indi_pane_g

0xc207,	// (0x00054e04) lc0_uni_indicator_pane_ParamLimits

0xc207,	// (0x00054e04) lc0_uni_indicator_pane

0xdfb3,	// (0x00056bb0) ls0_title_pane_g1_ParamLimits

0xdfb3,	// (0x00056bb0) ls0_title_pane_g1

0xdfc7,	// (0x00056bc4) ls0_title_pane_t1_ParamLimits

0xdfc7,	// (0x00056bc4) ls0_title_pane_t1

0xc214,	// (0x00054e11) lc0_uni_indicator_pane_g1_ParamLimits

0xc214,	// (0x00054e11) lc0_uni_indicator_pane_g1

0x7520,	// (0x0005011d) lc0_stat_clock_pane_t1

0x6bbd,	// (0x0004f7ba) main_ai5_pane

0x752e,	// (0x0005012b) ai5_sk_pane_ParamLimits

0x752e,	// (0x0005012b) ai5_sk_pane

0xdff5,	// (0x00056bf2) cell_ai5_widget_pane_ParamLimits

0xdff5,	// (0x00056bf2) cell_ai5_widget_pane

0x7ad7,	// (0x000506d4) aid_size_cell_widget_grid

0x7ae5,	// (0x000506e2) bg_ai5_widget_pane_ParamLimits

0x7ae5,	// (0x000506e2) bg_ai5_widget_pane

0x7b59,	// (0x00050756) cell_ai5_widget_pane_g2

0x7b69,	// (0x00050766) cell_ai5_widget_pane_g3

0x7b80,	// (0x0005077d) cell_ai5_widget_pane_g4

0x7b8c,	// (0x00050789) cell_ai5_widget_pane_g5

0xe34c,	// (0x00056f49) cell_ai5_widget_pane_g6

0xe358,	// (0x00056f55) cell_ai5_widget_pane_g7

0x7bec,	// (0x000507e9) cell_ai5_widget_pane_t1_ParamLimits

0x7bec,	// (0x000507e9) cell_ai5_widget_pane_t1

0x7c09,	// (0x00050806) cell_ai5_widget_pane_t2_ParamLimits

0x7c09,	// (0x00050806) cell_ai5_widget_pane_t2

0x7c21,	// (0x0005081e) cell_ai5_widget_pane_t3_ParamLimits

0x7c21,	// (0x0005081e) cell_ai5_widget_pane_t3

0x7c39,	// (0x00050836) cell_ai5_widget_pane_t4_ParamLimits

0x7c39,	// (0x00050836) cell_ai5_widget_pane_t4

0x7c56,	// (0x00050853) cell_ai5_widget_pane_t5_ParamLimits

0x7c56,	// (0x00050853) cell_ai5_widget_pane_t5

0x7c75,	// (0x00050872) cell_ai5_widget_pane_t6_ParamLimits

0x7c75,	// (0x00050872) cell_ai5_widget_pane_t6

0x7c87,	// (0x00050884) cell_ai5_widget_pane_t7_ParamLimits

0x7c87,	// (0x00050884) cell_ai5_widget_pane_t7

0x7ca0,	// (0x0005089d) cell_ai5_widget_pane_t8_ParamLimits

0x7ca0,	// (0x0005089d) cell_ai5_widget_pane_t8

0x0009,

0xfe58,	// (0x00058a55) cell_ai5_widget_pane_t_ParamLimits

0xfe58,	// (0x00058a55) cell_ai5_widget_pane_t

0x7cf4,	// (0x000508f1) grid_ai5_widget_pane

0xa6c1,	// (0x000532be) highlight_cell_ai5_widget_pane_ParamLimits

0xa6c1,	// (0x000532be) highlight_cell_ai5_widget_pane

0xe364,	// (0x00056f61) ai5_sk_left_pane

0xe36e,	// (0x00056f6b) ai5_sk_middle_pane

0xe378,	// (0x00056f75) ai5_sk_right_pane

0x7d26,	// (0x00050923) bg_ai5_widget_pane_g1_ParamLimits

0x7d26,	// (0x00050923) bg_ai5_widget_pane_g1

0x7d32,	// (0x0005092f) bg_ai5_widget_pane_g2_ParamLimits

0x7d32,	// (0x0005092f) bg_ai5_widget_pane_g2

0x7d3e,	// (0x0005093b) bg_ai5_widget_pane_g3_ParamLimits

0x7d3e,	// (0x0005093b) bg_ai5_widget_pane_g3

0x7d4a,	// (0x00050947) bg_ai5_widget_pane_g4_ParamLimits

0x7d4a,	// (0x00050947) bg_ai5_widget_pane_g4

0x7d56,	// (0x00050953) bg_ai5_widget_pane_g5_ParamLimits

0x7d56,	// (0x00050953) bg_ai5_widget_pane_g5

0x7d62,	// (0x0005095f) bg_ai5_widget_pane_g6_ParamLimits

0x7d62,	// (0x0005095f) bg_ai5_widget_pane_g6

0x7d6e,	// (0x0005096b) bg_ai5_widget_pane_g7_ParamLimits

0x7d6e,	// (0x0005096b) bg_ai5_widget_pane_g7

0x7d7a,	// (0x00050977) bg_ai5_widget_pane_g8_ParamLimits

0x7d7a,	// (0x00050977) bg_ai5_widget_pane_g8

0x7d86,	// (0x00050983) bg_ai5_widget_pane_g9_ParamLimits

0x7d86,	// (0x00050983) bg_ai5_widget_pane_g9

0x0008,

0xfe6d,	// (0x00058a6a) bg_ai5_widget_pane_g_ParamLimits

0xfe6d,	// (0x00058a6a) bg_ai5_widget_pane_g

0x7dbc,	// (0x000509b9) cell_shortcut_ai5_widget_pane_ParamLimits

0x7dbc,	// (0x000509b9) cell_shortcut_ai5_widget_pane

0xe847,	// (0x00057444) bg_cell_shortcut_ai5_widget_pane

0x7dcf,	// (0x000509cc) cell_grid_ai5_widget_pane_g1

0x7dd8,	// (0x000509d5) highlight_cell_shortcut_ai5_widget_pane

0x2840,	// (0x0004b43d) ai5_sk_left_pane_g1

0x7de0,	// (0x000509dd) ai5_sk_left_pane_g2

0x7de8,	// (0x000509e5) ai5_sk_left_pane_g3

0x7df0,	// (0x000509ed) ai5_sk_left_pane_g4

0x0003,

0xfe80,	// (0x00058a7d) ai5_sk_left_pane_g

0x7df8,	// (0x000509f5) ai5_sk_left_pane_t1

0x2838,	// (0x0004b435) ai5_sk_right_pane_g1

0x7e06,	// (0x00050a03) ai5_sk_right_pane_g2

0x7e0e,	// (0x00050a0b) ai5_sk_right_pane_g3

0x7e16,	// (0x00050a13) ai5_sk_right_pane_g4

0x0003,

0xfe89,	// (0x00058a86) ai5_sk_right_pane_g

0x7e1e,	// (0x00050a1b) ai5_sk_right_pane_t1

0x2838,	// (0x0004b435) ai5_sk_middle_pane_g1

0x2840,	// (0x0004b43d) ai5_sk_middle_pane_g2

0x2858,	// (0x0004b455) ai5_sk_middle_pane_g3

0x7e0e,	// (0x00050a0b) ai5_sk_middle_pane_g4

0x7de8,	// (0x000509e5) ai5_sk_middle_pane_g5

0x7e2c,	// (0x00050a29) ai5_sk_middle_pane_g6

0xe382,	// (0x00056f7f) ai5_sk_middle_pane_g7

0x0006,

0xfe92,	// (0x00058a8f) ai5_sk_middle_pane_g

0xb916,	// (0x00054513) aid_touch_area_size_lc0_ParamLimits

0xb916,	// (0x00054513) aid_touch_area_size_lc0

0x1057,	// (0x00049c54) cell_hwr_candidate_pane_t1_ParamLimits

0x2368,	// (0x0004af65) aid_touch_navi_pane

0xc554,	// (0x00055151) status_dt_navi_pane_ParamLimits

0xc554,	// (0x00055151) status_dt_navi_pane

0xc56c,	// (0x00055169) status_dt_sta_pane_ParamLimits

0xc56c,	// (0x00055169) status_dt_sta_pane

0xe38a,	// (0x00056f87) dt_sta_controll_pane

0xe397,	// (0x00056f94) dt_sta_indi_pane

0xe3a4,	// (0x00056fa1) dt_sta_title_pane

0xa068,	// (0x00052c65) bg_dt_sta_indi_pane_ParamLimits

0xa068,	// (0x00052c65) bg_dt_sta_indi_pane

0xe3b6,	// (0x00056fb3) dt_sta_battery_pane

0xe3be,	// (0x00056fbb) dt_sta_indi_pane_g1

0xe3c7,	// (0x00056fc4) dt_sta_indi_pane_g2

0xe3d0,	// (0x00056fcd) dt_sta_indi_pane_g3

0x0002,

0xfea1,	// (0x00058a9e) dt_sta_indi_pane_g

0xe3d9,	// (0x00056fd6) dt_sta_signal_pane

0xa6c1,	// (0x000532be) bg_dt_sta_title_pane_ParamLimits

0xa6c1,	// (0x000532be) bg_dt_sta_title_pane

0xe3e2,	// (0x00056fdf) dt_sta_title_pane_g1

0xe3ea,	// (0x00056fe7) dt_sta_title_pane_t1_ParamLimits

0xe3ea,	// (0x00056fe7) dt_sta_title_pane_t1

0x6bbd,	// (0x0004f7ba) bg_dt_sta_control_pane

0xe3ff,	// (0x00056ffc) dt_sta_controll_pane_g1

0xe408,	// (0x00057005) bg_dt_sta_title_pane_g1

0xe411,	// (0x0005700e) bg_dt_sta_title_pane_g2

0xe41a,	// (0x00057017) bg_dt_sta_title_pane_g3

0x0002,

0xfea8,	// (0x00058aa5) bg_dt_sta_title_pane_g

0x4e59,	// (0x0004da56) bg_dt_sta_indi_pane_g1

0x7eda,	// (0x00050ad7) dt_sta_signal_pane_g1

0x7ee2,	// (0x00050adf) dt_sta_signal_pane_g2

0x0001,

0xfeaf,	// (0x00058aac) dt_sta_signal_pane_g

0x7eea,	// (0x00050ae7) dt_sta_battery_pane_g1

0x7ef3,	// (0x00050af0) dt_sta_battery_pane_t1

0x4e59,	// (0x0004da56) bg_dt_sta_control_pane_g1

0xc3a5,	// (0x00054fa2) fep_china_uni_eep_pane

0xc3ad,	// (0x00054faa) fep_china_uni_entry_pane_ParamLimits

0xc3bd,	// (0x00054fba) popup_fep_china_uni_window_g1_ParamLimits

0xc3cd,	// (0x00054fca) popup_fep_china_uni_window_g2_ParamLimits

0xc3cd,	// (0x00054fca) popup_fep_china_uni_window_g2

0x0001,

0xf728,	// (0x00058325) popup_fep_china_uni_window_g_ParamLimits

0xf728,	// (0x00058325) popup_fep_china_uni_window_g

0x7f02,	// (0x00050aff) fep_china_uni_eep_pane_g1

0x7f0a,	// (0x00050b07) fep_china_uni_eep_pane_t1

0x749d,	// (0x0005009a) aid_touch_area_size_smil_player

0x24c0,	// (0x0004b0bd) lc0_clock_pane

0x26bf,	// (0x0004b2bc) status_pane_g5_ParamLimits

0x26bf,	// (0x0004b2bc) status_pane_g5

0xb36b,	// (0x00053f68) popup_keymap_window

0x267d,	// (0x0004b27a) status_icon_pane

0x7b69,	// (0x00050766) cell_ai5_widget_pane_g3_ParamLimits

0x7b80,	// (0x0005077d) cell_ai5_widget_pane_g4_ParamLimits

0x7b8c,	// (0x00050789) cell_ai5_widget_pane_g5_ParamLimits

0x7bb0,	// (0x000507ad) cell_ai5_widget_pane_g8_ParamLimits

0x7bb0,	// (0x000507ad) cell_ai5_widget_pane_g8

0x7bc4,	// (0x000507c1) cell_ai5_widget_pane_g9_ParamLimits

0x7bc4,	// (0x000507c1) cell_ai5_widget_pane_g9

0x7bd8,	// (0x000507d5) cell_ai5_widget_pane_g10_ParamLimits

0x7bd8,	// (0x000507d5) cell_ai5_widget_pane_g10

0x7f19,	// (0x00050b16) status_icon_pane_g1

0x6bbd,	// (0x0004f7ba) bg_popup_sub_pane_cp13

0x7f21,	// (0x00050b1e) popup_keymap_window_t1

0xb05a,	// (0x00053c57) control_pane_g6_ParamLimits

0xb05a,	// (0x00053c57) control_pane_g6

0xb067,	// (0x00053c64) control_pane_g7_ParamLimits

0xb067,	// (0x00053c64) control_pane_g7

0xb074,	// (0x00053c71) control_pane_g8_ParamLimits

0xb074,	// (0x00053c71) control_pane_g8

0xe38a,	// (0x00056f87) dt_sta_controll_pane_ParamLimits

0xe397,	// (0x00056f94) dt_sta_indi_pane_ParamLimits

0xe3a4,	// (0x00056fa1) dt_sta_title_pane_ParamLimits

0xa58d,	// (0x0005318a) aid_size_touch_scroll_bar_cale

0xee69,	// (0x00057a66) popup_discreet_window_ParamLimits

0xee69,	// (0x00057a66) popup_discreet_window

0x9c1f,	// (0x0005281c) popup_sk_window

0x2e80,	// (0x0004ba7d) bg_popup_sub_pane_cp28_ParamLimits

0x2e80,	// (0x0004ba7d) bg_popup_sub_pane_cp28

0x7f2f,	// (0x00050b2c) popup_discreet_window_g1_ParamLimits

0x7f2f,	// (0x00050b2c) popup_discreet_window_g1

0x7f4f,	// (0x00050b4c) popup_discreet_window_t1_ParamLimits

0x7f4f,	// (0x00050b4c) popup_discreet_window_t1

0x7f6d,	// (0x00050b6a) popup_discreet_window_t2_ParamLimits

0x7f6d,	// (0x00050b6a) popup_discreet_window_t2

0x0002,

0xfeb4,	// (0x00058ab1) popup_discreet_window_t_ParamLimits

0xfeb4,	// (0x00058ab1) popup_discreet_window_t

0x1ab2,	// (0x0004a6af) popup_sk_window_g1

0x1abc,	// (0x0004a6b9) popup_sk_window_g2

0x0001,

0xfebb,	// (0x00058ab8) popup_sk_window_g

0x1ac6,	// (0x0004a6c3) popup_sk_window_t1

0x1ad6,	// (0x0004a6d3) popup_sk_window_t1_copy1

0x7b59,	// (0x00050756) cell_ai5_widget_pane_g2_ParamLimits

0x7cb2,	// (0x000508af) cell_ai5_widget_pane_t9_ParamLimits

0x7cb2,	// (0x000508af) cell_ai5_widget_pane_t9

0x6bbd,	// (0x0004f7ba) main_fep_fshwr2_pane

0xc233,	// (0x00054e30) aid_fshwr2_btn_pane

0xc244,	// (0x00054e41) aid_fshwr2_syb_pane

0xc255,	// (0x00054e52) aid_fshwr2_txt_pane

0xc261,	// (0x00054e5e) fshwr2_func_candi_pane

0xc282,	// (0x00054e7f) fshwr2_hwr_syb_pane

0xc29f,	// (0x00054e9c) fshwr2_icf_pane

0x6bbd,	// (0x0004f7ba) fshwr2_icf_bg_pane

0x7fbf,	// (0x00050bbc) fshwr2_icf_pane_t1_ParamLimits

0x7fbf,	// (0x00050bbc) fshwr2_icf_pane_t1

0xc323,	// (0x00054f20) fshwr2_func_candi_pane_g1

0xe423,	// (0x00057020) fshwr2_func_candi_row_pane_ParamLimits

0xe423,	// (0x00057020) fshwr2_func_candi_row_pane

0xe433,	// (0x00057030) cell_fshwr2_syb_pane_ParamLimits

0xe433,	// (0x00057030) cell_fshwr2_syb_pane

0x50d4,	// (0x0004dcd1) fshwr2_hwr_syb_pane_g1_ParamLimits

0x50d4,	// (0x0004dcd1) fshwr2_hwr_syb_pane_g1

0x6bbd,	// (0x0004f7ba) bg_popup_call_pane_cp01

0xe44d,	// (0x0005704a) fshwr2_func_candi_cell_pane_ParamLimits

0xe44d,	// (0x0005704a) fshwr2_func_candi_cell_pane

0x8029,	// (0x00050c26) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x8029,	// (0x00050c26) fshwr2_func_candi_cell_bg_pane

0xe9da,	// (0x000575d7) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xe9da,	// (0x000575d7) fshwr2_func_candi_cell_pane_g1

0x8055,	// (0x00050c52) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x8055,	// (0x00050c52) fshwr2_func_candi_cell_pane_t1

0x6bbd,	// (0x0004f7ba) bg_button_pane_cp08

0xe847,	// (0x00057444) cell_fshwr2_syb_bg_pane

0xe9fa,	// (0x000575f7) cell_fshwr2_syb_bg_pane_g1

0xea02,	// (0x000575ff) cell_fshwr2_syb_bg_pane_t1

0xa6c1,	// (0x000532be) main_tmo_pane

0xc91f,	// (0x0005551c) uni_indicator_pane_g1_ParamLimits

0xc936,	// (0x00055533) uni_indicator_pane_g2_ParamLimits

0xc94c,	// (0x00055549) uni_indicator_pane_g3_ParamLimits

0xc961,	// (0x0005555e) uni_indicator_pane_g4_ParamLimits

0xc961,	// (0x0005555e) uni_indicator_pane_g4

0x39fa,	// (0x0004c5f7) uni_indicator_pane_g5_ParamLimits

0x39fa,	// (0x0004c5f7) uni_indicator_pane_g5

0x39fa,	// (0x0004c5f7) uni_indicator_pane_g6_ParamLimits

0x39fa,	// (0x0004c5f7) uni_indicator_pane_g6

0xf927,	// (0x00058524) uni_indicator_pane_g_ParamLimits

0xd462,	// (0x0005605f) popup_tmo_note_window_ParamLimits

0xd462,	// (0x0005605f) popup_tmo_note_window

0xa6c1,	// (0x000532be) fshwr2_bg_pane

0xe9eb,	// (0x000575e8) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xe9eb,	// (0x000575e8) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfec0,	// (0x00058abd) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfec0,	// (0x00058abd) fshwr2_func_candi_cell_pane_g

0x4e59,	// (0x0004da56) bg_popup_window_pane_cp01

0x807f,	// (0x00050c7c) bg_popup_window_pane_g1_cp01

0x8088,	// (0x00050c85) bg_popup_window_pane_cp22_ParamLimits

0x8088,	// (0x00050c85) bg_popup_window_pane_cp22

0x8096,	// (0x00050c93) listscroll_tmo_link_pane_ParamLimits

0x8096,	// (0x00050c93) listscroll_tmo_link_pane

0x80d6,	// (0x00050cd3) popup_tmo_note_window_g1_ParamLimits

0x80d6,	// (0x00050cd3) popup_tmo_note_window_g1

0x80e3,	// (0x00050ce0) tmo_note_info_pane_ParamLimits

0x80e3,	// (0x00050ce0) tmo_note_info_pane

0xea11,	// (0x0005760e) list_tmo_note_info_pane_g1_ParamLimits

0xea11,	// (0x0005760e) list_tmo_note_info_pane_g1

0x8114,	// (0x00050d11) list_tmo_note_info_pane_g2_ParamLimits

0x8114,	// (0x00050d11) list_tmo_note_info_pane_g2

0x0001,

0xfec5,	// (0x00058ac2) list_tmo_note_info_pane_g_ParamLimits

0xfec5,	// (0x00058ac2) list_tmo_note_info_pane_g

0x8130,	// (0x00050d2d) list_tmo_note_info_text_pane_ParamLimits

0x8130,	// (0x00050d2d) list_tmo_note_info_text_pane

0x81b5,	// (0x00050db2) list_tmo_link_pane

0x81c2,	// (0x00050dbf) scroll_pane_cp20

0x81cf,	// (0x00050dcc) list_single_tmo_link_pane_ParamLimits

0x81cf,	// (0x00050dcc) list_single_tmo_link_pane

0x81df,	// (0x00050ddc) list_single_tmo_link_pane_t1

0x81ed,	// (0x00050dea) list_tmo_note_info_text_pane_t1_ParamLimits

0x81ed,	// (0x00050dea) list_tmo_note_info_text_pane_t1

0xa77b,	// (0x00053378) aid_size_touch_scroll_bar_cp01_ParamLimits

0xa77b,	// (0x00053378) aid_size_touch_scroll_bar_cp01

0x97e0,	// (0x000523dd) aid_size_touch_slider_marker

0x9c0f,	// (0x0005280c) popup_settings_window_ParamLimits

0x9c0f,	// (0x0005280c) popup_settings_window

0xe89b,	// (0x00057498) popup_candi_list_indi_window

0x2368,	// (0x0004af65) aid_touch_navi_pane_ParamLimits

0x12b1,	// (0x00049eae) rs_clock_indi_pane

0x12ba,	// (0x00049eb7) sctrl_sk_bottom_pane_ParamLimits

0x12cb,	// (0x00049ec8) sctrl_sk_top_pane_ParamLimits

0x13b4,	// (0x00049fb1) popup_fep_tooltip_window

0x7ad7,	// (0x000506d4) aid_size_cell_widget_grid_ParamLimits

0x7b44,	// (0x00050741) cell_ai5_widget_pane_g1_ParamLimits

0x7b44,	// (0x00050741) cell_ai5_widget_pane_g1

0xe34c,	// (0x00056f49) cell_ai5_widget_pane_g6_ParamLimits

0xe358,	// (0x00056f55) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe43,	// (0x00058a40) cell_ai5_widget_pane_g_ParamLimits

0xfe43,	// (0x00058a40) cell_ai5_widget_pane_g

0x7cd6,	// (0x000508d3) cell_ai5_widget_pane_t10_ParamLimits

0x7cd6,	// (0x000508d3) cell_ai5_widget_pane_t10

0x7cf4,	// (0x000508f1) grid_ai5_widget_pane_ParamLimits

0x7d92,	// (0x0005098f) cell_contacts_ai5_widget_pane_ParamLimits

0x7d92,	// (0x0005098f) cell_contacts_ai5_widget_pane

0x7f82,	// (0x00050b7f) popup_discreet_window_t3_ParamLimits

0x7f82,	// (0x00050b7f) popup_discreet_window_t3

0xc2b7,	// (0x00054eb4) popup_fshwr2_char_preview_window_ParamLimits

0xc2b7,	// (0x00054eb4) popup_fshwr2_char_preview_window

0xea28,	// (0x00057625) tmo_note_info_pane_t1

0xea3d,	// (0x0005763a) tmo_note_info_pane_t2

0xea56,	// (0x00057653) tmo_note_info_pane_t3

0x8191,	// (0x00050d8e) tmo_note_info_pane_t4

0x81a3,	// (0x00050da0) tmo_note_info_pane_t5

0x0004,

0xfeca,	// (0x00058ac7) tmo_note_info_pane_t

0x81b5,	// (0x00050db2) list_tmo_link_pane_ParamLimits

0x81c2,	// (0x00050dbf) scroll_pane_cp20_ParamLimits

0x6bbd,	// (0x0004f7ba) bg_popup_fep_char_preview_window_cp01

0x8206,	// (0x00050e03) popup_fshwr2_char_preview_window_t1

0x8214,	// (0x00050e11) popup_candi_list_indi_window_g1

0x821d,	// (0x00050e1a) bg_cell_contacts_ai5_widget_pane

0x8229,	// (0x00050e26) cell_contacts_ai5_widget_pane_g1

0x823d,	// (0x00050e3a) cell_contacts_ai5_widget_pane_g2

0x8249,	// (0x00050e46) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfed5,	// (0x00058ad2) cell_contacts_ai5_widget_pane_g

0x825c,	// (0x00050e59) cell_contacts_ai5_widget_pane_t1

0xa6c1,	// (0x000532be) highlight_cell_shortcut_ai5_widget_pane_cp01

0xead0,	// (0x000576cd) settings_container_pane

0xe847,	// (0x00057444) listscroll_set_pane_copy1

0x4574,	// (0x0004d171) scroll_pane_cp121_copy1

0x82e2,	// (0x00050edf) set_content_pane_copy1

0xeadc,	// (0x000576d9) aid_height_set_list_copy1_ParamLimits

0xeadc,	// (0x000576d9) aid_height_set_list_copy1

0x3bfa,	// (0x0004c7f7) aid_size_parent_copy1_ParamLimits

0x3bfa,	// (0x0004c7f7) aid_size_parent_copy1

0xeae8,	// (0x000576e5) button_value_adjust_pane_cp6_copy1_ParamLimits

0xeae8,	// (0x000576e5) button_value_adjust_pane_cp6_copy1

0x1cef,	// (0x0004a8ec) list_highlight_pane_cp2_copy1_ParamLimits

0x1cef,	// (0x0004a8ec) list_highlight_pane_cp2_copy1

0xeafc,	// (0x000576f9) list_set_pane_copy1_ParamLimits

0xeafc,	// (0x000576f9) list_set_pane_copy1

0xea6b,	// (0x00057668) main_pane_set_t1_copy1_ParamLimits

0xea6b,	// (0x00057668) main_pane_set_t1_copy1

0xeaa5,	// (0x000576a2) main_pane_set_t2_copy1_ParamLimits

0xeaa5,	// (0x000576a2) main_pane_set_t2_copy1

0xebc3,	// (0x000577c0) main_pane_set_t3_copy1

0xebd1,	// (0x000577ce) main_pane_set_t4_copy1

0xeac4,	// (0x000576c1) set_content_pane_g1_copy1_ParamLimits

0xeac4,	// (0x000576c1) set_content_pane_g1_copy1

0xebdf,	// (0x000577dc) setting_code_pane_copy1

0x83f5,	// (0x00050ff2) setting_slider_graphic_pane_copy1

0x83f5,	// (0x00050ff2) setting_slider_pane_copy1

0x83f5,	// (0x00050ff2) setting_text_pane_copy1

0x83f5,	// (0x00050ff2) setting_volume_pane_copy1

0xebdf,	// (0x000577dc) settings_code_pane_cp2_copy1

0xebe7,	// (0x000577e4) settings_code_pane_cp_copy1_ParamLimits

0xebe7,	// (0x000577e4) settings_code_pane_cp_copy1

0xc2cf,	// (0x00054ecc) volume_set_pane_copy1

0xebfb,	// (0x000577f8) volume_set_pane_g10_copy1

0xec07,	// (0x00057804) volume_set_pane_g1_copy1

0xec11,	// (0x0005780e) volume_set_pane_g2_copy1

0xec1b,	// (0x00057818) volume_set_pane_g3_copy1

0xec25,	// (0x00057822) volume_set_pane_g4_copy1

0xec2f,	// (0x0005782c) volume_set_pane_g5_copy1

0xec39,	// (0x00057836) volume_set_pane_g6_copy1

0xec43,	// (0x00057840) volume_set_pane_g7_copy1

0xec4d,	// (0x0005784a) volume_set_pane_g8_copy1

0xec57,	// (0x00057854) volume_set_pane_g9_copy1

0x6c2b,	// (0x0004f828) bg_set_opt_pane_cp_copy1_ParamLimits

0x6c2b,	// (0x0004f828) bg_set_opt_pane_cp_copy1

0x1b6d,	// (0x0004a76a) setting_slider_pane_t1_copy1_ParamLimits

0x1b6d,	// (0x0004a76a) setting_slider_pane_t1_copy1

0xc2db,	// (0x00054ed8) setting_slider_pane_t2_copy1_ParamLimits

0xc2db,	// (0x00054ed8) setting_slider_pane_t2_copy1

0xc2f5,	// (0x00054ef2) setting_slider_pane_t3_copy1_ParamLimits

0xc2f5,	// (0x00054ef2) setting_slider_pane_t3_copy1

0xc30d,	// (0x00054f0a) slider_set_pane_copy1_ParamLimits

0xc30d,	// (0x00054f0a) slider_set_pane_copy1

0xa71c,	// (0x00053319) set_opt_bg_pane_g1_copy2

0xa724,	// (0x00053321) set_opt_bg_pane_g2_copy2

0x8477,	// (0x00051074) set_opt_bg_pane_g3_copy2

0xa734,	// (0x00053331) set_opt_bg_pane_g4_copy2

0xa73c,	// (0x00053339) set_opt_bg_pane_g5_copy2

0xa744,	// (0x00053341) set_opt_bg_pane_g6_copy2

0xec61,	// (0x0005785e) set_opt_bg_pane_g7_copy2

0x848b,	// (0x00051088) set_opt_bg_pane_g8_copy2

0x8495,	// (0x00051092) set_opt_bg_pane_g9_copy2

0x849f,	// (0x0005109c) aid_size_touch_slider_mark_copy1_ParamLimits

0x849f,	// (0x0005109c) aid_size_touch_slider_mark_copy1

0x84b3,	// (0x000510b0) slider_set_pane_g1_copy1

0x84bc,	// (0x000510b9) slider_set_pane_g2_copy1

0x6ca6,	// (0x0004f8a3) slider_set_pane_g3_copy1_ParamLimits

0x6ca6,	// (0x0004f8a3) slider_set_pane_g3_copy1

0x6cba,	// (0x0004f8b7) slider_set_pane_g4_copy1_ParamLimits

0x6cba,	// (0x0004f8b7) slider_set_pane_g4_copy1

0x6cd2,	// (0x0004f8cf) slider_set_pane_g5_copy1_ParamLimits

0x6cd2,	// (0x0004f8cf) slider_set_pane_g5_copy1

0x6ca6,	// (0x0004f8a3) slider_set_pane_g6_copy1_ParamLimits

0x6ca6,	// (0x0004f8a3) slider_set_pane_g6_copy1

0xec6b,	// (0x00057868) slider_set_pane_g7_copy1_ParamLimits

0xec6b,	// (0x00057868) slider_set_pane_g7_copy1

0x6bd1,	// (0x0004f7ce) bg_set_opt_pane_cp2_copy1

0x84da,	// (0x000510d7) setting_slider_graphic_pane_g1_copy1

0xec81,	// (0x0005787e) setting_slider_graphic_pane_t1_copy1

0xec91,	// (0x0005788e) setting_slider_graphic_pane_t2_copy1

0xeca1,	// (0x0005789e) slider_set_pane_cp_copy1

0x8513,	// (0x00051110) input_focus_pane_cp1_copy1

0x851c,	// (0x00051119) list_set_text_pane_copy1

0x8524,	// (0x00051121) setting_text_pane_g1_copy1

0xe475,	// (0x00057072) set_text_pane_t1_copy1

0x8513,	// (0x00051110) input_focus_pane_cp2_copy1

0x8524,	// (0x00051121) setting_code_pane_g1_copy1

0xeca9,	// (0x000578a6) setting_code_pane_t1_copy1

0xecb7,	// (0x000578b4) list_set_graphic_pane_copy1

0x6bd1,	// (0x0004f7ce) bg_set_opt_pane_cp4_copy1

0xae8f,	// (0x00053a8c) list_set_graphic_pane_g1_copy1_ParamLimits

0xae8f,	// (0x00053a8c) list_set_graphic_pane_g1_copy1

0xecc9,	// (0x000578c6) list_set_graphic_pane_g2_copy1

0xaea7,	// (0x00053aa4) list_set_graphic_pane_t1_copy1_ParamLimits

0xaea7,	// (0x00053aa4) list_set_graphic_pane_t1_copy1

0x4e59,	// (0x0004da56) rs_clock_indi_pane_g1

0x8555,	// (0x00051152) rs_clock_indi_pane_t1

0x8563,	// (0x00051160) rs_indi_pane

0x856b,	// (0x00051168) rs_indi_pane_g1

0x8574,	// (0x00051171) rs_indi_pane_g2

0x857d,	// (0x0005117a) rs_indi_pane_g3

0x0002,

0xfedc,	// (0x00058ad9) rs_indi_pane_g

0xe847,	// (0x00057444) bg_popup_preview_window_pane_cp03

0x8586,	// (0x00051183) popup_fep_tooltip_window_t1

0x5b10,	// (0x0004e70d) popup_note2_window_g2_ParamLimits

0x5b10,	// (0x0004e70d) popup_note2_window_g2

0x0001,

0xfc75,	// (0x00058872) popup_note2_window_g_ParamLimits

0xfc75,	// (0x00058872) popup_note2_window_g

0x6018,	// (0x0004ec15) bg_popup_sub_pane_cp11_ParamLimits

0x6025,	// (0x0004ec22) cell_ai3_links_pane_g1_ParamLimits

0x603c,	// (0x0004ec39) cell_ai3_links_pane_t1

0xe475,	// (0x00057072) set_text_pane_t1_copy1_ParamLimits

0xaf1b,	// (0x00053b18) cell_graphic_popup_pane_cp2_ParamLimits

0xaf1b,	// (0x00053b18) cell_graphic_popup_pane_cp2

0xecd1,	// (0x000578ce) cell_graphic_popup_pane_g1_cp2

0xa3a0,	// (0x00052f9d) cell_graphic_popup_pane_g2_cp2

0x859c,	// (0x00051199) cell_graphic_popup_pane_g3_cp2

0x85a4,	// (0x000511a1) cell_graphic_popup_pane_t2_cp2

0xa3b1,	// (0x00052fae) grid_highlight_pane_cp3_cp2

0xaa4e,	// (0x0005364b) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xa6c1,	// (0x000532be) main_tmo_pane_ParamLimits

0xd456,	// (0x00056053) popup_tmo_big_image_note_window

0x7b33,	// (0x00050730) cell_ai5_widget_list_pane

0x7b3b,	// (0x00050738) cell_ai5_widget_lrg_icon_pane

0xea28,	// (0x00057625) tmo_note_info_pane_t1_ParamLimits

0xea3d,	// (0x0005763a) tmo_note_info_pane_t2_ParamLimits

0xea56,	// (0x00057653) tmo_note_info_pane_t3_ParamLimits

0x8191,	// (0x00050d8e) tmo_note_info_pane_t4_ParamLimits

0x81a3,	// (0x00050da0) tmo_note_info_pane_t5_ParamLimits

0xfeca,	// (0x00058ac7) tmo_note_info_pane_t_ParamLimits

0xead0,	// (0x000576cd) settings_container_pane_ParamLimits

0x850b,	// (0x00051108) indicator_popup_pane_cp5

0x850b,	// (0x00051108) indicator_popup_pane_cp6

0xecb7,	// (0x000578b4) list_set_graphic_pane_copy1_ParamLimits

0x6bbd,	// (0x0004f7ba) bg_popup_window_pane_cp23

0x85b2,	// (0x000511af) popup_tmo_big_image_note_window_g1

0x85be,	// (0x000511bb) popup_tmo_big_image_note_window_t1

0x85ce,	// (0x000511cb) popup_tmo_big_image_note_window_t2

0x85de,	// (0x000511db) popup_tmo_big_image_note_window_t3

0x0002,

0xfee3,	// (0x00058ae0) popup_tmo_big_image_note_window_t

0x4e59,	// (0x0004da56) cell_ai5_widget_lrg_icon_pane_g1

0x85ee,	// (0x000511eb) cell_ai5_widget_lrg_icon_pane_t1

0x85fc,	// (0x000511f9) cell_ai5_widget_list_row_pane_ParamLimits

0x85fc,	// (0x000511f9) cell_ai5_widget_list_row_pane

0x8615,	// (0x00051212) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x8615,	// (0x00051212) cell_ai5_widget_list_row_pane_g1

0x8622,	// (0x0005121f) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x8622,	// (0x0005121f) cell_ai5_widget_list_row_pane_t1

0x864d,	// (0x0005124a) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x864d,	// (0x0005124a) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeea,	// (0x00058ae7) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeea,	// (0x00058ae7) cell_ai5_widget_list_row_pane_t

0x6bbd,	// (0x0004f7ba) main_fep_vtchi_ss_pane

0x1be2,	// (0x0004a7df) popup_fep_char_pre_window

0x1bea,	// (0x0004a7e7) popup_fep_ituss_window

0x1c0b,	// (0x0004a808) popup_fep_vkbss_window

0x8675,	// (0x00051272) grid_vkbss_keypad_pane_ParamLimits

0x8675,	// (0x00051272) grid_vkbss_keypad_pane

0x8685,	// (0x00051282) ituss_keypad_pane

0x1c38,	// (0x0004a835) aid_vkbss_key_offset_ParamLimits

0x1c38,	// (0x0004a835) aid_vkbss_key_offset

0x1c44,	// (0x0004a841) cell_vkbss_key_pane_ParamLimits

0x1c44,	// (0x0004a841) cell_vkbss_key_pane

0x8695,	// (0x00051292) bg_cell_vkbss_key_g1_ParamLimits

0x8695,	// (0x00051292) bg_cell_vkbss_key_g1

0x86a1,	// (0x0005129e) cell_vkbss_key_3p_pane_ParamLimits

0x86a1,	// (0x0005129e) cell_vkbss_key_3p_pane

0x86bb,	// (0x000512b8) cell_vkbss_key_g1_ParamLimits

0x86bb,	// (0x000512b8) cell_vkbss_key_g1

0x86d5,	// (0x000512d2) cell_vkbss_key_t1_ParamLimits

0x86d5,	// (0x000512d2) cell_vkbss_key_t1

0x1c5a,	// (0x0004a857) cell_ituss_key_pane_ParamLimits

0x1c5a,	// (0x0004a857) cell_ituss_key_pane

0x8700,	// (0x000512fd) bg_cell_ituss_key_g1_ParamLimits

0x8700,	// (0x000512fd) bg_cell_ituss_key_g1

0x870c,	// (0x00051309) cell_ituss_key_pane_g1_ParamLimits

0x870c,	// (0x00051309) cell_ituss_key_pane_g1

0x8720,	// (0x0005131d) cell_ituss_key_pane_g2_ParamLimits

0x8720,	// (0x0005131d) cell_ituss_key_pane_g2

0x0001,

0xfef1,	// (0x00058aee) cell_ituss_key_pane_g_ParamLimits

0xfef1,	// (0x00058aee) cell_ituss_key_pane_g

0x8752,	// (0x0005134f) cell_ituss_key_t1_ParamLimits

0x8752,	// (0x0005134f) cell_ituss_key_t1

0x8790,	// (0x0005138d) cell_ituss_key_t2_ParamLimits

0x8790,	// (0x0005138d) cell_ituss_key_t2

0x87c1,	// (0x000513be) cell_ituss_key_t3_ParamLimits

0x87c1,	// (0x000513be) cell_ituss_key_t3

0x87f2,	// (0x000513ef) cell_ituss_key_t4_ParamLimits

0x87f2,	// (0x000513ef) cell_ituss_key_t4

0x0003,

0xfef6,	// (0x00058af3) cell_ituss_key_t_ParamLimits

0xfef6,	// (0x00058af3) cell_ituss_key_t

0x8823,	// (0x00051420) cell_vkbss_key_3p_pane_g1

0x882b,	// (0x00051428) cell_vkbss_key_3p_pane_g2

0x8833,	// (0x00051430) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeff,	// (0x00058afc) cell_vkbss_key_3p_pane_g

0x6bbd,	// (0x0004f7ba) bg_popup_fep_char_preview_window_cp02

0x883b,	// (0x00051438) popup_fep_char_pre_window_t1

0xe342,	// (0x00056f3f) main_ai5_sk_pane

0x821d,	// (0x00050e1a) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x8229,	// (0x00050e26) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x823d,	// (0x00050e3a) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x8249,	// (0x00050e46) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfed5,	// (0x00058ad2) cell_contacts_ai5_widget_pane_g_ParamLimits

0x825c,	// (0x00050e59) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xa6c1,	// (0x000532be) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xecd9,	// (0x000578d6) main_ai5_sk_pane_g1

0x2cb8,	// (0x0004b8b5) popup_query_code_window_g1

0x1c00,	// (0x0004a7fd) popup_fep_vkb_icf_pane

0x1c16,	// (0x0004a813) popup_fep_vtchi_icf_pane

0xa6c1,	// (0x000532be) bg_icf_pane

0x8853,	// (0x00051450) list_vkb_icf_pane

0xa6c1,	// (0x000532be) bg_icf_pane_cp01

0x885f,	// (0x0005145c) vtchi_icf_list_pane

0x8870,	// (0x0005146d) list_vkb_icf_pane_t1_ParamLimits

0x8870,	// (0x0005146d) list_vkb_icf_pane_t1

0x8886,	// (0x00051483) vtchi_icf_list_pane_t1_ParamLimits

0x8886,	// (0x00051483) vtchi_icf_list_pane_t1

0x1bea,	// (0x0004a7e7) popup_fep_ituss_window_ParamLimits

0x1c16,	// (0x0004a813) popup_fep_vtchi_icf_pane_ParamLimits

0x8685,	// (0x00051282) ituss_keypad_pane_ParamLimits

0x1c2c,	// (0x0004a829) ituss_sks_pane

0xa6c1,	// (0x000532be) bg_icf_pane_ParamLimits

0x1bd3,	// (0x0004a7d0) icf_edit_indi_pane_ParamLimits

0x1bd3,	// (0x0004a7d0) icf_edit_indi_pane

0x8853,	// (0x00051450) list_vkb_icf_pane_ParamLimits

0xa6c1,	// (0x000532be) bg_icf_pane_cp01_ParamLimits

0x1bd3,	// (0x0004a7d0) icf_edit_indi_pane_cp01_ParamLimits

0x1bd3,	// (0x0004a7d0) icf_edit_indi_pane_cp01

0x8867,	// (0x00051464) vtchi_query_pane

0x50d4,	// (0x0004dcd1) icf_edit_indi_pane_g1_ParamLimits

0x50d4,	// (0x0004dcd1) icf_edit_indi_pane_g1

0x8908,	// (0x00051505) icf_edit_indi_pane_g2_ParamLimits

0x8908,	// (0x00051505) icf_edit_indi_pane_g2

0x0001,

0xff17,	// (0x00058b14) icf_edit_indi_pane_g_ParamLimits

0xff17,	// (0x00058b14) icf_edit_indi_pane_g

0x8917,	// (0x00051514) icf_edit_indi_pane_t1

0x889e,	// (0x0005149b) bg_input_focus_pane_cp042

0xa584,	// (0x00053181) vtchi_button_pane

0x88a7,	// (0x000514a4) vtchi_query_pane_t1

0x88b5,	// (0x000514b2) vtchi_query_pane_t2

0x88c3,	// (0x000514c0) vtchi_query_pane_t3

0x0002,

0xff06,	// (0x00058b03) vtchi_query_pane_t

0x6bbd,	// (0x0004f7ba) bg_button_pane_cp13

0x88d1,	// (0x000514ce) vtchi_button_pane_g1

0x88d9,	// (0x000514d6) ituss_sks_pane_g1

0x88e4,	// (0x000514e1) ituss_sks_pane_g2

0x0001,

0xff0d,	// (0x00058b0a) ituss_sks_pane_g

0x88ec,	// (0x000514e9) ituss_sks_pane_t1

0x88fa,	// (0x000514f7) ituss_sks_pane_t2

0x0001,

0xff12,	// (0x00058b0f) ituss_sks_pane_t

0x4909,	// (0x0004d506) indicator_nsta_pane_cp_g1

0x4912,	// (0x0004d50f) indicator_nsta_pane_cp_g2

0x491a,	// (0x0004d517) indicator_nsta_pane_cp_g3

0x4922,	// (0x0004d51f) indicator_nsta_pane_cp_g4

0x492a,	// (0x0004d527) indicator_nsta_pane_cp_g5

0x4932,	// (0x0004d52f) indicator_nsta_pane_cp_g6

0x0005,

0xfabf,	// (0x000586bc) indicator_nsta_pane_cp_g

0xde65,	// (0x00056a62) cell_graphic2_pane_t2_ParamLimits

0xde65,	// (0x00056a62) cell_graphic2_pane_t2

0x0001,

0xfdcc,	// (0x000589c9) cell_graphic2_pane_t_ParamLimits

0xfdcc,	// (0x000589c9) cell_graphic2_pane_t

0xde9b,	// (0x00056a98) cell_graphic2_control_pane_t1

0xadec,	// (0x000539e9) signal_pane_g3_ParamLimits

0xadec,	// (0x000539e9) signal_pane_g3

0xae00,	// (0x000539fd) signal_pane_g4_ParamLimits

0xae00,	// (0x000539fd) signal_pane_g4

0x865f,	// (0x0005125c) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x865f,	// (0x0005125c) cell_ai5_widget_list_row_pane_t3

0x8740,	// (0x0005133d) cell_ituss_key_pane_t1_ParamLimits

0x8740,	// (0x0005133d) cell_ituss_key_pane_t1

0x2935,	// (0x0004b532) form_field_data_wide_pane_vc_t2_ParamLimits

0x2935,	// (0x0004b532) form_field_data_wide_pane_vc_t2

0x2949,	// (0x0004b546) form_field_data_wide_pane_vc_t3_ParamLimits

0x2949,	// (0x0004b546) form_field_data_wide_pane_vc_t3

0x0002,

0xf80f,	// (0x0005840c) form_field_data_wide_pane_vc_t_ParamLimits

0xf80f,	// (0x0005840c) form_field_data_wide_pane_vc_t

0x45b4,	// (0x0004d1b1) form_field_slider_wide_pane_vc_t3_ParamLimits

0x45b4,	// (0x0004d1b1) form_field_slider_wide_pane_vc_t3

0x468a,	// (0x0004d287) form_field_popup_wide_pane_vc_t2_ParamLimits

0x468a,	// (0x0004d287) form_field_popup_wide_pane_vc_t2

0x46a1,	// (0x0004d29e) form_field_popup_wide_pane_vc_t3_ParamLimits

0x46a1,	// (0x0004d29e) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaae,	// (0x000586ab) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaae,	// (0x000586ab) form_field_popup_wide_pane_vc_t

0xc233,	// (0x00054e30) aid_fshwr2_btn_pane_ParamLimits

0xc244,	// (0x00054e41) aid_fshwr2_syb_pane_ParamLimits

0xc255,	// (0x00054e52) aid_fshwr2_txt_pane_ParamLimits

0xa6c1,	// (0x000532be) fshwr2_bg_pane_ParamLimits

0xc261,	// (0x00054e5e) fshwr2_func_candi_pane_ParamLimits

0xc282,	// (0x00054e7f) fshwr2_hwr_syb_pane_ParamLimits

0xc29f,	// (0x00054e9c) fshwr2_icf_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Large
