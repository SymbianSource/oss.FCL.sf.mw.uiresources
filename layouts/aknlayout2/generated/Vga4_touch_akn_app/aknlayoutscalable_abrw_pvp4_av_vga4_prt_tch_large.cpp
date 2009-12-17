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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0004ae2b };

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
0x7245,	// (0x00052070) Screen

0x7259,	// (0x00052084) application_window_ParamLimits

0x7259,	// (0x00052084) application_window

0x7273,	// (0x0005209e) screen_g1

0x4c6c,	// (0x0004fa97) area_bottom_pane_ParamLimits

0x4c6c,	// (0x0004fa97) area_bottom_pane

0x4d2c,	// (0x0004fb57) area_top_pane_ParamLimits

0x4d2c,	// (0x0004fb57) area_top_pane

0x4dca,	// (0x0004fbf5) main_pane_ParamLimits

0x4dca,	// (0x0004fbf5) main_pane

0x727d,	// (0x000520a8) misc_graphics

0x976f,	// (0x0005459a) battery_pane_ParamLimits

0x976f,	// (0x0005459a) battery_pane

0xa451,	// (0x0005527c) bg_status_flat_pane_g8

0xa459,	// (0x00055284) bg_status_flat_pane_g9

0x9837,	// (0x00054662) context_pane_ParamLimits

0x9837,	// (0x00054662) context_pane

0x995b,	// (0x00054786) navi_pane_ParamLimits

0x995b,	// (0x00054786) navi_pane

0x99ea,	// (0x00054815) signal_pane_ParamLimits

0x99ea,	// (0x00054815) signal_pane

0x0008,

0xf8b7,	// (0x0005a6e2) bg_status_flat_pane_g

0x9a57,	// (0x00054882) status_pane_g1_ParamLimits

0x9a57,	// (0x00054882) status_pane_g1

0x9a6b,	// (0x00054896) status_pane_g2_ParamLimits

0x9a6b,	// (0x00054896) status_pane_g2

0x9a77,	// (0x000548a2) status_pane_g3_ParamLimits

0x9a77,	// (0x000548a2) status_pane_g3

0x0004,

0xf7e5,	// (0x0005a610) status_pane_g_ParamLimits

0xf7e5,	// (0x0005a610) status_pane_g

0x9aab,	// (0x000548d6) title_pane_ParamLimits

0x9aab,	// (0x000548d6) title_pane

0x9ae8,	// (0x00054913) uni_indicator_pane_ParamLimits

0x9ae8,	// (0x00054913) uni_indicator_pane

0x9064,	// (0x00053e8f) bg_list_pane_ParamLimits

0x9064,	// (0x00053e8f) bg_list_pane

0x9084,	// (0x00053eaf) find_pane

0x908c,	// (0x00053eb7) listscroll_app_pane_ParamLimits

0x908c,	// (0x00053eb7) listscroll_app_pane

0x9098,	// (0x00053ec3) listscroll_form_pane

0x90a0,	// (0x00053ecb) listscroll_gen_pane_ParamLimits

0x90a0,	// (0x00053ecb) listscroll_gen_pane

0x9098,	// (0x00053ec3) listscroll_set_pane

0x82d5,	// (0x00053100) main_idle_act_pane

0x8d48,	// (0x00053b73) main_idle_trad_pane

0x8d48,	// (0x00053b73) main_list_empty_pane

0x90c6,	// (0x00053ef1) main_midp_pane

0x90d2,	// (0x00053efd) main_pane_g1_ParamLimits

0x90d2,	// (0x00053efd) main_pane_g1

0x90e0,	// (0x00053f0b) popup_ai_message_window_ParamLimits

0x90e0,	// (0x00053f0b) popup_ai_message_window

0x9190,	// (0x00053fbb) popup_fep_china_uni_window_ParamLimits

0x9190,	// (0x00053fbb) popup_fep_china_uni_window

0x91f0,	// (0x0005401b) popup_fep_japan_candidate_window_ParamLimits

0x91f0,	// (0x0005401b) popup_fep_japan_candidate_window

0x921a,	// (0x00054045) popup_fep_japan_predictive_window_ParamLimits

0x921a,	// (0x00054045) popup_fep_japan_predictive_window

0x9250,	// (0x0005407b) popup_find_window

0x925d,	// (0x00054088) popup_grid_graphic_window_ParamLimits

0x925d,	// (0x00054088) popup_grid_graphic_window

0x928b,	// (0x000540b6) popup_large_graphic_colour_window

0x92b1,	// (0x000540dc) popup_menu_window_ParamLimits

0x92b1,	// (0x000540dc) popup_menu_window

0x947b,	// (0x000542a6) popup_note_image_window

0x9465,	// (0x00054290) popup_note_wait_window_ParamLimits

0x9465,	// (0x00054290) popup_note_wait_window

0x9465,	// (0x00054290) popup_note_window_ParamLimits

0x9465,	// (0x00054290) popup_note_window

0x94e1,	// (0x0005430c) popup_query_code_window_ParamLimits

0x94e1,	// (0x0005430c) popup_query_code_window

0x94f7,	// (0x00054322) popup_query_data_code_window_ParamLimits

0x94f7,	// (0x00054322) popup_query_data_code_window

0x951a,	// (0x00054345) popup_query_data_window_ParamLimits

0x951a,	// (0x00054345) popup_query_data_window

0x953c,	// (0x00054367) popup_query_sat_info_window_ParamLimits

0x953c,	// (0x00054367) popup_query_sat_info_window

0x957b,	// (0x000543a6) popup_snote_single_graphic_window_ParamLimits

0x957b,	// (0x000543a6) popup_snote_single_graphic_window

0x957b,	// (0x000543a6) popup_snote_single_text_window_ParamLimits

0x957b,	// (0x000543a6) popup_snote_single_text_window

0x9592,	// (0x000543bd) popup_sub_window_general

0x96d8,	// (0x00054503) popup_window_general_ParamLimits

0x96d8,	// (0x00054503) popup_window_general

0x96f1,	// (0x0005451c) power_save_pane

0x5c9f,	// (0x00050aca) control_pane_g1_ParamLimits

0x5c9f,	// (0x00050aca) control_pane_g1

0x5cc8,	// (0x00050af3) control_pane_g2_ParamLimits

0x5cc8,	// (0x00050af3) control_pane_g2

0x9015,	// (0x00053e40) control_pane_g3_ParamLimits

0x9015,	// (0x00053e40) control_pane_g3

0x0007,

0xf7cd,	// (0x0005a5f8) control_pane_g_ParamLimits

0xf7cd,	// (0x0005a5f8) control_pane_g

0x5d08,	// (0x00050b33) control_pane_t1_ParamLimits

0x5d08,	// (0x00050b33) control_pane_t1

0x5d5a,	// (0x00050b85) control_pane_t2_ParamLimits

0x5d5a,	// (0x00050b85) control_pane_t2

0x0002,

0xf7de,	// (0x0005a609) control_pane_t_ParamLimits

0xf7de,	// (0x0005a609) control_pane_t

0x8f36,	// (0x00053d61) navi_navi_volume_pane_cp1

0x8f3f,	// (0x00053d6a) status_small_icon_pane

0x8f47,	// (0x00053d72) status_small_pane_g1_ParamLimits

0x8f47,	// (0x00053d72) status_small_pane_g1

0x8f7b,	// (0x00053da6) status_small_pane_g2_ParamLimits

0x8f7b,	// (0x00053da6) status_small_pane_g2

0x8f87,	// (0x00053db2) status_small_pane_g3_ParamLimits

0x8f87,	// (0x00053db2) status_small_pane_g3

0x8f93,	// (0x00053dbe) status_small_pane_g4_ParamLimits

0x8f93,	// (0x00053dbe) status_small_pane_g4

0x8f9f,	// (0x00053dca) status_small_pane_g5_ParamLimits

0x8f9f,	// (0x00053dca) status_small_pane_g5

0x8fae,	// (0x00053dd9) status_small_pane_g6_ParamLimits

0x8fae,	// (0x00053dd9) status_small_pane_g6

0x0007,

0xf7bc,	// (0x0005a5e7) status_small_pane_g_ParamLimits

0xf7bc,	// (0x0005a5e7) status_small_pane_g

0x8fde,	// (0x00053e09) status_small_pane_t1

0x9001,	// (0x00053e2c) status_small_wait_pane_ParamLimits

0x9001,	// (0x00053e2c) status_small_wait_pane

0x87d3,	// (0x000535fe) aid_levels_signal_ParamLimits

0x87d3,	// (0x000535fe) aid_levels_signal

0x87e5,	// (0x00053610) signal_pane_g1_ParamLimits

0x87e5,	// (0x00053610) signal_pane_g1

0x87fa,	// (0x00053625) signal_pane_g2_ParamLimits

0x87fa,	// (0x00053625) signal_pane_g2

0x0001,

0xf751,	// (0x0005a57c) signal_pane_g_ParamLimits

0xf751,	// (0x0005a57c) signal_pane_g

0x880f,	// (0x0005363a) context_pane_g1

0x7287,	// (0x000520b2) title_pane_g1

0x72bd,	// (0x000520e8) title_pane_t1

0x7325,	// (0x00052150) title_pane_t2

0x734b,	// (0x00052176) title_pane_t3

0x0002,

0xf59b,	// (0x0005a3c6) title_pane_t

0x9b00,	// (0x0005492b) aid_levels_battery_ParamLimits

0x9b00,	// (0x0005492b) aid_levels_battery

0x9b14,	// (0x0005493f) battery_pane_g1_ParamLimits

0x9b14,	// (0x0005493f) battery_pane_g1

0x9b2a,	// (0x00054955) battery_pane_g2_ParamLimits

0x9b2a,	// (0x00054955) battery_pane_g2

0x0001,

0xf7f0,	// (0x0005a61b) battery_pane_g_ParamLimits

0xf7f0,	// (0x0005a61b) battery_pane_g

0xada1,	// (0x00055bcc) uni_indicator_pane_g1

0xadb6,	// (0x00055be1) uni_indicator_pane_g2

0xadcc,	// (0x00055bf7) uni_indicator_pane_g3

0x0005,

0xf95f,	// (0x0005a78a) uni_indicator_pane_g

0x8bb6,	// (0x000539e1) navi_icon_pane_ParamLimits

0x8bb6,	// (0x000539e1) navi_icon_pane

0x8afd,	// (0x00053928) navi_midp_pane

0x8bd2,	// (0x000539fd) navi_navi_pane

0x8bdc,	// (0x00053a07) navi_text_pane_ParamLimits

0x8bdc,	// (0x00053a07) navi_text_pane

0x7273,	// (0x0005209e) status_small_wait_pane_g1

0x778f,	// (0x000525ba) status_small_wait_pane_g2

0x0001,

0xf95a,	// (0x0005a785) status_small_wait_pane_g

0xaab4,	// (0x000558df) navi_navi_icon_text_pane

0xaabc,	// (0x000558e7) navi_navi_pane_g1_ParamLimits

0xaabc,	// (0x000558e7) navi_navi_pane_g1

0xaace,	// (0x000558f9) navi_navi_pane_g2_ParamLimits

0xaace,	// (0x000558f9) navi_navi_pane_g2

0x0001,

0xf928,	// (0x0005a753) navi_navi_pane_g_ParamLimits

0xf928,	// (0x0005a753) navi_navi_pane_g

0xaae0,	// (0x0005590b) navi_navi_tabs_pane

0xaae9,	// (0x00055914) navi_navi_text_pane

0xaab4,	// (0x000558df) navi_navi_volume_pane

0xaa8d,	// (0x000558b8) navi_text_pane_t1

0xaa7e,	// (0x000558a9) navi_icon_pane_g1

0xa9d1,	// (0x000557fc) navi_navi_text_pane_t1

0x6123,	// (0x00050f4e) navi_navi_volume_pane_g1

0x612b,	// (0x00050f56) volume_small_pane

0xa937,	// (0x00055762) navi_navi_icon_text_pane_g1

0xa93f,	// (0x0005576a) navi_navi_icon_text_pane_t1

0x8bd2,	// (0x000539fd) navi_tabs_2_long_pane

0x8bd2,	// (0x000539fd) navi_tabs_2_pane

0x8bd2,	// (0x000539fd) navi_tabs_3_long_pane

0x8bd2,	// (0x000539fd) navi_tabs_3_pane

0x8bd2,	// (0x000539fd) navi_tabs_4_pane

0x6103,	// (0x00050f2e) tabs_2_active_pane_ParamLimits

0x6103,	// (0x00050f2e) tabs_2_active_pane

0x6113,	// (0x00050f3e) tabs_2_passive_pane_ParamLimits

0x6113,	// (0x00050f3e) tabs_2_passive_pane

0x60d1,	// (0x00050efc) tabs_3_active_pane_ParamLimits

0x60d1,	// (0x00050efc) tabs_3_active_pane

0x60e1,	// (0x00050f0c) tabs_3_passive_pane_ParamLimits

0x60e1,	// (0x00050f0c) tabs_3_passive_pane

0x60f2,	// (0x00050f1d) tabs_3_passive_pane_cp_ParamLimits

0x60f2,	// (0x00050f1d) tabs_3_passive_pane_cp

0x6085,	// (0x00050eb0) tabs_4_active_pane_ParamLimits

0x6085,	// (0x00050eb0) tabs_4_active_pane

0x6098,	// (0x00050ec3) tabs_4_passive_pane_ParamLimits

0x6098,	// (0x00050ec3) tabs_4_passive_pane

0x60a9,	// (0x00050ed4) tabs_4_passive_pane_cp_ParamLimits

0x60a9,	// (0x00050ed4) tabs_4_passive_pane_cp

0x60ba,	// (0x00050ee5) tabs_4_passive_pane_cp2_ParamLimits

0x60ba,	// (0x00050ee5) tabs_4_passive_pane_cp2

0x6061,	// (0x00050e8c) tabs_2_long_active_pane_ParamLimits

0x6061,	// (0x00050e8c) tabs_2_long_active_pane

0x6073,	// (0x00050e9e) tabs_2_long_passive_pane_ParamLimits

0x6073,	// (0x00050e9e) tabs_2_long_passive_pane

0x6022,	// (0x00050e4d) tabs_3_long_active_pane_ParamLimits

0x6022,	// (0x00050e4d) tabs_3_long_active_pane

0x6035,	// (0x00050e60) tabs_3_long_passive_pane_ParamLimits

0x6035,	// (0x00050e60) tabs_3_long_passive_pane

0x604e,	// (0x00050e79) tabs_3_long_passive_pane_cp_ParamLimits

0x604e,	// (0x00050e79) tabs_3_long_passive_pane_cp

0x5fc8,	// (0x00050df3) volume_small_pane_g1

0x5fd1,	// (0x00050dfc) volume_small_pane_g2

0x5fda,	// (0x00050e05) volume_small_pane_g3

0x5fe3,	// (0x00050e0e) volume_small_pane_g4

0x5fec,	// (0x00050e17) volume_small_pane_g5

0x5ff5,	// (0x00050e20) volume_small_pane_g6

0x5ffe,	// (0x00050e29) volume_small_pane_g7

0x6007,	// (0x00050e32) volume_small_pane_g8

0x6010,	// (0x00050e3b) volume_small_pane_g9

0x6019,	// (0x00050e44) volume_small_pane_g10

0x0009,

0xf8f4,	// (0x0005a71f) volume_small_pane_g

0x735d,	// (0x00052188) bg_active_tab_pane_cp2_ParamLimits

0x735d,	// (0x00052188) bg_active_tab_pane_cp2

0x736b,	// (0x00052196) tabs_3_active_pane_g1

0x7373,	// (0x0005219e) tabs_3_active_pane_t1

0x735d,	// (0x00052188) bg_passive_tab_pane_cp2_ParamLimits

0x735d,	// (0x00052188) bg_passive_tab_pane_cp2

0x736b,	// (0x00052196) tabs_3_passive_pane_g1

0x7373,	// (0x0005219e) tabs_3_passive_pane_t1

0x735d,	// (0x00052188) bg_active_tab_pane_cp3_ParamLimits

0x735d,	// (0x00052188) bg_active_tab_pane_cp3

0x7385,	// (0x000521b0) tabs_4_active_pane_g1

0x738d,	// (0x000521b8) tabs_4_active_pane_t1

0x735d,	// (0x00052188) bg_passive_tab_pane_cp3_ParamLimits

0x735d,	// (0x00052188) bg_passive_tab_pane_cp3

0x7385,	// (0x000521b0) tabs_4_1_passive_pane_g1

0x738d,	// (0x000521b8) tabs_4_1_passive_pane_t1

0x90c6,	// (0x00053ef1) list_highlight_pane_cp2

0xb030,	// (0x00055e5b) list_set_pane_ParamLimits

0xb030,	// (0x00055e5b) list_set_pane

0xb0f8,	// (0x00055f23) main_pane_set_t1_ParamLimits

0xb0f8,	// (0x00055f23) main_pane_set_t1

0xb118,	// (0x00055f43) main_pane_set_t2_ParamLimits

0xb118,	// (0x00055f43) main_pane_set_t2

0xb12c,	// (0x00055f57) main_pane_set_t3_ParamLimits

0xb12c,	// (0x00055f57) main_pane_set_t3

0xb140,	// (0x00055f6b) main_pane_set_t4_ParamLimits

0xb140,	// (0x00055f6b) main_pane_set_t4

0x0003,

0xf9c4,	// (0x0005a7ef) main_pane_set_t_ParamLimits

0xf9c4,	// (0x0005a7ef) main_pane_set_t

0xb160,	// (0x00055f8b) setting_code_pane

0xb16a,	// (0x00055f95) setting_slider_graphic_pane

0xb16a,	// (0x00055f95) setting_slider_pane

0xb16a,	// (0x00055f95) setting_text_pane

0xb16a,	// (0x00055f95) setting_volume_pane

0x5021,	// (0x0004fe4c) volume_set_pane

0x735d,	// (0x00052188) bg_set_opt_pane_cp

0x502b,	// (0x0004fe56) setting_slider_pane_t1

0x5041,	// (0x0004fe6c) setting_slider_pane_t2

0x505b,	// (0x0004fe86) setting_slider_pane_t3

0x0002,

0xf5a2,	// (0x0005a3cd) setting_slider_pane_t

0x5073,	// (0x0004fe9e) slider_set_pane

0x727d,	// (0x000520a8) bg_set_opt_pane_cp2

0x739f,	// (0x000521ca) setting_slider_graphic_pane_g1

0x5089,	// (0x0004feb4) setting_slider_graphic_pane_t1

0x5099,	// (0x0004fec4) setting_slider_graphic_pane_t2

0x0001,

0xf5a9,	// (0x0005a3d4) setting_slider_graphic_pane_t

0x50a9,	// (0x0004fed4) slider_set_pane_cp

0x727d,	// (0x000520a8) input_focus_pane_cp1

0xaff1,	// (0x00055e1c) list_set_text_pane

0x7273,	// (0x0005209e) setting_text_pane_g1

0x727d,	// (0x000520a8) input_focus_pane_cp2

0x7273,	// (0x0005209e) setting_code_pane_g1

0x73a8,	// (0x000521d3) setting_code_pane_t1

0x41fb,	// (0x0004f026) set_text_pane_t1_ParamLimits

0x41fb,	// (0x0004f026) set_text_pane_t1

0x8145,	// (0x00052f70) set_opt_bg_pane_g1

0x814d,	// (0x00052f78) set_opt_bg_pane_g2

0xafc9,	// (0x00055df4) set_opt_bg_pane_g3

0x815d,	// (0x00052f88) set_opt_bg_pane_g4

0x8165,	// (0x00052f90) set_opt_bg_pane_g5

0x816d,	// (0x00052f98) set_opt_bg_pane_g6

0xafd3,	// (0x00055dfe) set_opt_bg_pane_g7

0xafdd,	// (0x00055e08) set_opt_bg_pane_g8

0xafe7,	// (0x00055e12) set_opt_bg_pane_g9

0x0008,

0xf9b1,	// (0x0005a7dc) set_opt_bg_pane_g

0xafbc,	// (0x00055de7) slider_set_pane_g1

0x61d4,	// (0x00050fff) slider_set_pane_g2

0x0006,

0xf9a2,	// (0x0005a7cd) slider_set_pane_g

0x6134,	// (0x00050f5f) volume_set_pane_g1

0x613e,	// (0x00050f69) volume_set_pane_g2

0x6148,	// (0x00050f73) volume_set_pane_g3

0x6152,	// (0x00050f7d) volume_set_pane_g4

0x615c,	// (0x00050f87) volume_set_pane_g5

0x6166,	// (0x00050f91) volume_set_pane_g6

0x6170,	// (0x00050f9b) volume_set_pane_g7

0x617a,	// (0x00050fa5) volume_set_pane_g8

0x6184,	// (0x00050faf) volume_set_pane_g9

0x618e,	// (0x00050fb9) volume_set_pane_g10

0x0009,

0xf97a,	// (0x0005a7a5) volume_set_pane_g

0x73b6,	// (0x000521e1) indicator_pane_ParamLimits

0x73b6,	// (0x000521e1) indicator_pane

0x73c2,	// (0x000521ed) main_idle_pane_g2_ParamLimits

0x73c2,	// (0x000521ed) main_idle_pane_g2

0x73ea,	// (0x00052215) main_pane_idle_g1_ParamLimits

0x73ea,	// (0x00052215) main_pane_idle_g1

0x73f8,	// (0x00052223) popup_clock_digital_analogue_window_ParamLimits

0x73f8,	// (0x00052223) popup_clock_digital_analogue_window

0x740f,	// (0x0005223a) soft_indicator_pane_ParamLimits

0x740f,	// (0x0005223a) soft_indicator_pane

0x741d,	// (0x00052248) wallpaper_pane_ParamLimits

0x741d,	// (0x00052248) wallpaper_pane

0x7273,	// (0x0005209e) wallpaper_pane_g1

0x7431,	// (0x0005225c) indicator_pane_g1_ParamLimits

0x7431,	// (0x0005225c) indicator_pane_g1

0xb42e,	// (0x00056259) navi_navi_icon_text_pane_srt_g1

0x744c,	// (0x00052277) soft_indicator_pane_t1

0x7466,	// (0x00052291) aid_ps_area_pane

0x7477,	// (0x000522a2) aid_ps_clock_pane

0x7485,	// (0x000522b0) aid_ps_indicator_pane

0x7491,	// (0x000522bc) indicator_ps_pane_ParamLimits

0x7491,	// (0x000522bc) indicator_ps_pane

0x74a0,	// (0x000522cb) power_save_pane_g1_ParamLimits

0x74a0,	// (0x000522cb) power_save_pane_g1

0x74ac,	// (0x000522d7) power_save_pane_g2_ParamLimits

0x74ac,	// (0x000522d7) power_save_pane_g2

0x4c20,	// (0x0004fa4b) aid_navinavi_width_pane

0x7466,	// (0x00052291) aid_ps_area_pane_ParamLimits

0x0001,

0xf5ae,	// (0x0005a3d9) power_save_pane_g_ParamLimits

0xf5ae,	// (0x0005a3d9) power_save_pane_g

0x74ba,	// (0x000522e5) power_save_pane_t1_ParamLimits

0x74ba,	// (0x000522e5) power_save_pane_t1

0x7477,	// (0x000522a2) aid_ps_clock_pane_ParamLimits

0x7485,	// (0x000522b0) aid_ps_indicator_pane_ParamLimits

0x74cc,	// (0x000522f7) power_save_pane_t4_ParamLimits

0x74cc,	// (0x000522f7) power_save_pane_t4

0x0001,

0xf5b3,	// (0x0005a3de) power_save_pane_t_ParamLimits

0xf5b3,	// (0x0005a3de) power_save_pane_t

0x74f6,	// (0x00052321) power_save_t3_ParamLimits

0x74f6,	// (0x00052321) power_save_t3

0x74e1,	// (0x0005230c) power_save_t2_ParamLimits

0x74e1,	// (0x0005230c) power_save_t2

0x750b,	// (0x00052336) indicator_ps_pane_g1

0x7514,	// (0x0005233f) ai_gene_pane_ParamLimits

0x7514,	// (0x0005233f) ai_gene_pane

0x7520,	// (0x0005234b) ai_links_pane_ParamLimits

0x7520,	// (0x0005234b) ai_links_pane

0x752c,	// (0x00052357) indicator_pane_cp1_ParamLimits

0x752c,	// (0x00052357) indicator_pane_cp1

0x7538,	// (0x00052363) main_pane_idle_g1_cp_ParamLimits

0x7538,	// (0x00052363) main_pane_idle_g1_cp

0x7544,	// (0x0005236f) popup_ai_links_title_window

0x754d,	// (0x00052378) soft_indicator_pane_cp1_ParamLimits

0x754d,	// (0x00052378) soft_indicator_pane_cp1

0xad8f,	// (0x00055bba) ai_links_pane_g1

0xad98,	// (0x00055bc3) grid_ai_links_pane

0xad74,	// (0x00055b9f) ai_gene_pane_1

0xad7d,	// (0x00055ba8) ai_gene_pane_2

0xad86,	// (0x00055bb1) list_highlight_pane_cp4

0xad54,	// (0x00055b7f) cell_ai_link_pane_ParamLimits

0xad54,	// (0x00055b7f) cell_ai_link_pane

0xad4c,	// (0x00055b77) cell_ai_link_pane_g1

0x778f,	// (0x000525ba) cell_ai_link_pane_g2

0x0001,

0xf955,	// (0x0005a780) cell_ai_link_pane_g

0x727d,	// (0x000520a8) grid_highlight_cp2

0x727d,	// (0x000520a8) bg_popup_sub_pane_cp1

0x7567,	// (0x00052392) popup_ai_links_title_window_t1

0xac98,	// (0x00055ac3) ai_gene_pane_1_g1_ParamLimits

0xac98,	// (0x00055ac3) ai_gene_pane_1_g1

0xaca4,	// (0x00055acf) ai_gene_pane_1_g2_ParamLimits

0xaca4,	// (0x00055acf) ai_gene_pane_1_g2

0x0001,

0xf94b,	// (0x0005a776) ai_gene_pane_1_g_ParamLimits

0xf94b,	// (0x0005a776) ai_gene_pane_1_g

0xacb1,	// (0x00055adc) ai_gene_pane_1_t1_ParamLimits

0xacb1,	// (0x00055adc) ai_gene_pane_1_t1

0xace5,	// (0x00055b10) grid_ai_soft_ind_pane

0xac83,	// (0x00055aae) ai_gene_pane_2_t1_ParamLimits

0xac83,	// (0x00055aae) ai_gene_pane_2_t1

0x7576,	// (0x000523a1) main_pane_empty_t1_ParamLimits

0x7576,	// (0x000523a1) main_pane_empty_t1

0x758e,	// (0x000523b9) main_pane_empty_t2_ParamLimits

0x758e,	// (0x000523b9) main_pane_empty_t2

0x75a3,	// (0x000523ce) main_pane_empty_t3_ParamLimits

0x75a3,	// (0x000523ce) main_pane_empty_t3

0x75b5,	// (0x000523e0) main_pane_empty_t4_ParamLimits

0x75b5,	// (0x000523e0) main_pane_empty_t4

0x75c7,	// (0x000523f2) main_pane_empty_t5_ParamLimits

0x75c7,	// (0x000523f2) main_pane_empty_t5

0x0004,

0xf5b8,	// (0x0005a3e3) main_pane_empty_t_ParamLimits

0xf5b8,	// (0x0005a3e3) main_pane_empty_t

0x8196,	// (0x00052fc1) bg_popup_window_pane_ParamLimits

0x8196,	// (0x00052fc1) bg_popup_window_pane

0xa9df,	// (0x0005580a) find_popup_pane_cp2_ParamLimits

0xa9df,	// (0x0005580a) find_popup_pane_cp2

0xa9eb,	// (0x00055816) heading_pane_ParamLimits

0xa9eb,	// (0x00055816) heading_pane

0x727d,	// (0x000520a8) bg_popup_sub_pane

0xa959,	// (0x00055784) bg_popup_window_pane_g1_ParamLimits

0xa959,	// (0x00055784) bg_popup_window_pane_g1

0xa965,	// (0x00055790) bg_popup_window_pane_g2_ParamLimits

0xa965,	// (0x00055790) bg_popup_window_pane_g2

0xa971,	// (0x0005579c) bg_popup_window_pane_g3_ParamLimits

0xa971,	// (0x0005579c) bg_popup_window_pane_g3

0xa97d,	// (0x000557a8) bg_popup_window_pane_g4_ParamLimits

0xa97d,	// (0x000557a8) bg_popup_window_pane_g4

0xa989,	// (0x000557b4) bg_popup_window_pane_g5_ParamLimits

0xa989,	// (0x000557b4) bg_popup_window_pane_g5

0xa995,	// (0x000557c0) bg_popup_window_pane_g6_ParamLimits

0xa995,	// (0x000557c0) bg_popup_window_pane_g6

0xa9a1,	// (0x000557cc) bg_popup_window_pane_g7_ParamLimits

0xa9a1,	// (0x000557cc) bg_popup_window_pane_g7

0xa9ad,	// (0x000557d8) bg_popup_window_pane_g8_ParamLimits

0xa9ad,	// (0x000557d8) bg_popup_window_pane_g8

0xa9b9,	// (0x000557e4) bg_popup_window_pane_g9_ParamLimits

0xa9b9,	// (0x000557e4) bg_popup_window_pane_g9

0xa9c5,	// (0x000557f0) bg_popup_window_pane_g10_ParamLimits

0xa9c5,	// (0x000557f0) bg_popup_window_pane_g10

0x0009,

0xf913,	// (0x0005a73e) bg_popup_window_pane_g_ParamLimits

0xf913,	// (0x0005a73e) bg_popup_window_pane_g

0xa8ee,	// (0x00055719) bg_popup_heading_pane_ParamLimits

0xa8ee,	// (0x00055719) bg_popup_heading_pane

0x62a8,	// (0x000510d3) tabs_4_passive_pane_cp_srt_ParamLimits

0x62a8,	// (0x000510d3) tabs_4_passive_pane_cp_srt

0x62ba,	// (0x000510e5) tabs_4_passive_pane_srt_ParamLimits

0xa902,	// (0x0005572d) heading_pane_g2

0x62ba,	// (0x000510e5) tabs_4_passive_pane_srt

0x90c6,	// (0x00053ef1) bg_passive_tab_pane_cp3_srt_ParamLimits

0x90c6,	// (0x00053ef1) bg_passive_tab_pane_cp3_srt

0xa90a,	// (0x00055735) heading_pane_t1_ParamLimits

0xa90a,	// (0x00055735) heading_pane_t1

0xa921,	// (0x0005574c) heading_pane_t2_ParamLimits

0xa921,	// (0x0005574c) heading_pane_t2

0x0001,

0xf90e,	// (0x0005a739) heading_pane_t_ParamLimits

0xf90e,	// (0x0005a739) heading_pane_t

0xa419,	// (0x00055244) bg_popup_heading_pane_g1

0xa4c8,	// (0x000552f3) bg_popup_heading_pane_g2

0xa4d2,	// (0x000552fd) bg_popup_heading_pane_g3

0xa4dc,	// (0x00055307) bg_popup_heading_pane_g4

0xa4e6,	// (0x00055311) bg_popup_heading_pane_g5

0xa4f0,	// (0x0005531b) bg_popup_heading_pane_g6

0xa4f8,	// (0x00055323) bg_popup_heading_pane_g7

0xa500,	// (0x0005532b) bg_popup_heading_pane_g8

0xa50a,	// (0x00055335) bg_popup_heading_pane_g9

0x0008,

0xf8ca,	// (0x0005a6f5) bg_popup_heading_pane_g

0x9c02,	// (0x00054a2d) bg_popup_sub_pane_g1

0x9c12,	// (0x00054a3d) bg_popup_sub_pane_g2

0x9c0a,	// (0x00054a35) bg_popup_sub_pane_g3

0x9c22,	// (0x00054a4d) bg_popup_sub_pane_g4

0x9c1a,	// (0x00054a45) bg_popup_sub_pane_g5

0x9c2a,	// (0x00054a55) bg_popup_sub_pane_g6

0x9c32,	// (0x00054a5d) bg_popup_sub_pane_g7

0x9c42,	// (0x00054a6d) bg_popup_sub_pane_g8

0x9c3a,	// (0x00054a65) bg_popup_sub_pane_g9

0x0008,

0xf8a4,	// (0x0005a6cf) bg_popup_sub_pane_g

0x75d9,	// (0x00052404) bg_popup_window_pane_cp5_ParamLimits

0x75d9,	// (0x00052404) bg_popup_window_pane_cp5

0x75f5,	// (0x00052420) popup_note_window_g1_ParamLimits

0x75f5,	// (0x00052420) popup_note_window_g1

0x7601,	// (0x0005242c) popup_note_window_t1_ParamLimits

0x7601,	// (0x0005242c) popup_note_window_t1

0x7617,	// (0x00052442) popup_note_window_t2_ParamLimits

0x7617,	// (0x00052442) popup_note_window_t2

0x762d,	// (0x00052458) popup_note_window_t3_ParamLimits

0x762d,	// (0x00052458) popup_note_window_t3

0x7643,	// (0x0005246e) popup_note_window_t4_ParamLimits

0x7643,	// (0x0005246e) popup_note_window_t4

0x766b,	// (0x00052496) popup_note_window_t5_ParamLimits

0x766b,	// (0x00052496) popup_note_window_t5

0x0004,

0xf5c3,	// (0x0005a3ee) popup_note_window_t_ParamLimits

0xf5c3,	// (0x0005a3ee) popup_note_window_t

0x768f,	// (0x000524ba) bg_popup_window_pane_cp6_ParamLimits

0x768f,	// (0x000524ba) bg_popup_window_pane_cp6

0xa395,	// (0x000551c0) popup_note_image_window_g1_ParamLimits

0xa395,	// (0x000551c0) popup_note_image_window_g1

0xa3a1,	// (0x000551cc) popup_note_image_window_g2_ParamLimits

0xa3a1,	// (0x000551cc) popup_note_image_window_g2

0x0001,

0xf898,	// (0x0005a6c3) popup_note_image_window_g_ParamLimits

0xf898,	// (0x0005a6c3) popup_note_image_window_g

0xa3ba,	// (0x000551e5) popup_note_image_window_t1_ParamLimits

0xa3ba,	// (0x000551e5) popup_note_image_window_t1

0xa3d3,	// (0x000551fe) popup_note_image_window_t2_ParamLimits

0xa3d3,	// (0x000551fe) popup_note_image_window_t2

0xa3ec,	// (0x00055217) popup_note_image_window_t3_ParamLimits

0xa3ec,	// (0x00055217) popup_note_image_window_t3

0x0002,

0xf89d,	// (0x0005a6c8) popup_note_image_window_t_ParamLimits

0xf89d,	// (0x0005a6c8) popup_note_image_window_t

0xa255,	// (0x00055080) bg_popup_window_pane_cp7_ParamLimits

0xa255,	// (0x00055080) bg_popup_window_pane_cp7

0xa285,	// (0x000550b0) popup_note_wait_window_g1_ParamLimits

0xa285,	// (0x000550b0) popup_note_wait_window_g1

0xa291,	// (0x000550bc) popup_note_wait_window_g2_ParamLimits

0xa291,	// (0x000550bc) popup_note_wait_window_g2

0x0002,

0xf886,	// (0x0005a6b1) popup_note_wait_window_g_ParamLimits

0xf886,	// (0x0005a6b1) popup_note_wait_window_g

0xa2a9,	// (0x000550d4) popup_note_wait_window_t1_ParamLimits

0xa2a9,	// (0x000550d4) popup_note_wait_window_t1

0xa2d0,	// (0x000550fb) popup_note_wait_window_t2_ParamLimits

0xa2d0,	// (0x000550fb) popup_note_wait_window_t2

0xa2ee,	// (0x00055119) popup_note_wait_window_t3_ParamLimits

0xa2ee,	// (0x00055119) popup_note_wait_window_t3

0xa301,	// (0x0005512c) popup_note_wait_window_t4_ParamLimits

0xa301,	// (0x0005512c) popup_note_wait_window_t4

0x0004,

0xf88d,	// (0x0005a6b8) popup_note_wait_window_t_ParamLimits

0xf88d,	// (0x0005a6b8) popup_note_wait_window_t

0xa326,	// (0x00055151) wait_bar_pane_ParamLimits

0xa326,	// (0x00055151) wait_bar_pane

0x727d,	// (0x000520a8) wait_anim_pane

0x727d,	// (0x000520a8) wait_border_pane

0x7273,	// (0x0005209e) wait_anim_pane_g1

0x7273,	// (0x0005209e) wait_anim_pane_g2

0x0001,

0xf74c,	// (0x0005a577) wait_anim_pane_g

0xa1f9,	// (0x00055024) wait_border_pane_g1

0xa204,	// (0x0005502f) wait_border_pane_g2

0xa20d,	// (0x00055038) wait_border_pane_g3

0x0002,

0xf87f,	// (0x0005a6aa) wait_border_pane_g

0xa155,	// (0x00054f80) bg_popup_window_pane_cp16_ParamLimits

0xa155,	// (0x00054f80) bg_popup_window_pane_cp16

0xa163,	// (0x00054f8e) indicator_popup_pane_cp4_ParamLimits

0xa163,	// (0x00054f8e) indicator_popup_pane_cp4

0xa177,	// (0x00054fa2) popup_query_data_window_t1_ParamLimits

0xa177,	// (0x00054fa2) popup_query_data_window_t1

0xa189,	// (0x00054fb4) popup_query_data_window_t2_ParamLimits

0xa189,	// (0x00054fb4) popup_query_data_window_t2

0xa1a2,	// (0x00054fcd) popup_query_data_window_t3_ParamLimits

0xa1a2,	// (0x00054fcd) popup_query_data_window_t3

0x0002,

0xf878,	// (0x0005a6a3) popup_query_data_window_t_ParamLimits

0xf878,	// (0x0005a6a3) popup_query_data_window_t

0xa1bc,	// (0x00054fe7) query_popup_data_pane_ParamLimits

0xa1bc,	// (0x00054fe7) query_popup_data_pane

0xa1d0,	// (0x00054ffb) query_popup_data_pane_cp1_ParamLimits

0xa1d0,	// (0x00054ffb) query_popup_data_pane_cp1

0x768f,	// (0x000524ba) bg_popup_window_pane_cp10_ParamLimits

0x768f,	// (0x000524ba) bg_popup_window_pane_cp10

0xa0b8,	// (0x00054ee3) indicator_popup_pane_ParamLimits

0xa0b8,	// (0x00054ee3) indicator_popup_pane

0x76f0,	// (0x0005251b) popup_query_code_window_t1_ParamLimits

0x76f0,	// (0x0005251b) popup_query_code_window_t1

0xa0d0,	// (0x00054efb) popup_query_code_window_t2_ParamLimits

0xa0d0,	// (0x00054efb) popup_query_code_window_t2

0xa10e,	// (0x00054f39) popup_query_code_window_t3_ParamLimits

0xa10e,	// (0x00054f39) popup_query_code_window_t3

0x0002,

0xf871,	// (0x0005a69c) popup_query_code_window_t_ParamLimits

0xf871,	// (0x0005a69c) popup_query_code_window_t

0xa13d,	// (0x00054f68) query_popup_pane_ParamLimits

0xa13d,	// (0x00054f68) query_popup_pane

0x768f,	// (0x000524ba) bg_popup_window_pane_cp15_ParamLimits

0x768f,	// (0x000524ba) bg_popup_window_pane_cp15

0x76af,	// (0x000524da) indicator_popup_pane_cp1_ParamLimits

0x76af,	// (0x000524da) indicator_popup_pane_cp1

0x76c2,	// (0x000524ed) indicator_popup_pane_cp2_ParamLimits

0x76c2,	// (0x000524ed) indicator_popup_pane_cp2

0x76dd,	// (0x00052508) popup_query_data_code_window_g1_ParamLimits

0x76dd,	// (0x00052508) popup_query_data_code_window_g1

0x76f0,	// (0x0005251b) popup_query_data_code_window_t1_ParamLimits

0x76f0,	// (0x0005251b) popup_query_data_code_window_t1

0x7702,	// (0x0005252d) popup_query_data_code_window_t2_ParamLimits

0x7702,	// (0x0005252d) popup_query_data_code_window_t2

0x7714,	// (0x0005253f) popup_query_data_code_window_t3_ParamLimits

0x7714,	// (0x0005253f) popup_query_data_code_window_t3

0x772a,	// (0x00052555) popup_query_data_code_window_t4_ParamLimits

0x772a,	// (0x00052555) popup_query_data_code_window_t4

0x0003,

0xf5ce,	// (0x0005a3f9) popup_query_data_code_window_t_ParamLimits

0xf5ce,	// (0x0005a3f9) popup_query_data_code_window_t

0x5e7c,	// (0x00050ca7) list_single_midp_graphic_pane_g3

0x7744,	// (0x0005256f) query_popup_data_pane_cp2_ParamLimits

0x7757,	// (0x00052582) query_popup_pane_cp2_ParamLimits

0x7757,	// (0x00052582) query_popup_pane_cp2

0x727d,	// (0x000520a8) bg_popup_window_pane_cp11

0xa08c,	// (0x00054eb7) heading_pane_cp5

0x7847,	// (0x00052672) listscroll_popup_info_pane

0x727d,	// (0x000520a8) input_focus_pane_cp3

0x7772,	// (0x0005259d) query_popup_pane_t1

0x7780,	// (0x000525ab) list_popup_info_pane_ParamLimits

0x7780,	// (0x000525ab) list_popup_info_pane

0x778f,	// (0x000525ba) listscroll_popup_info_pane_g1

0x7797,	// (0x000525c2) scroll_pane_cp7

0x77a1,	// (0x000525cc) popup_info_list_pane_t1_ParamLimits

0x77a1,	// (0x000525cc) popup_info_list_pane_t1

0x77bb,	// (0x000525e6) popup_info_list_pane_t2_ParamLimits

0x77bb,	// (0x000525e6) popup_info_list_pane_t2

0x0001,

0xf5d7,	// (0x0005a402) popup_info_list_pane_t_ParamLimits

0xf5d7,	// (0x0005a402) popup_info_list_pane_t

0x727d,	// (0x000520a8) bg_popup_window_pane_cp12

0xb448,	// (0x00056273) find_popup_pane

0x735d,	// (0x00052188) bg_popup_window_pane_cp3

0x77d5,	// (0x00052600) heading_pane_cp3

0x77e1,	// (0x0005260c) listscroll_popup_graphic_pane

0x727d,	// (0x000520a8) bg_popup_window_pane_cp4

0x783d,	// (0x00052668) heading_pane_cp4

0x7847,	// (0x00052672) listscroll_popup_colour_pane

0x784f,	// (0x0005267a) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x784f,	// (0x0005267a) cell_large_graphic_colour_none_popup_pane

0x7863,	// (0x0005268e) grid_large_graphic_colour_popup_pane_ParamLimits

0x7863,	// (0x0005268e) grid_large_graphic_colour_popup_pane

0x788f,	// (0x000526ba) listscroll_popup_colour_pane_g1_ParamLimits

0x788f,	// (0x000526ba) listscroll_popup_colour_pane_g1

0x78a6,	// (0x000526d1) listscroll_popup_colour_pane_g2_ParamLimits

0x78a6,	// (0x000526d1) listscroll_popup_colour_pane_g2

0x78bd,	// (0x000526e8) listscroll_popup_colour_pane_g3_ParamLimits

0x78bd,	// (0x000526e8) listscroll_popup_colour_pane_g3

0x78cd,	// (0x000526f8) listscroll_popup_colour_pane_g4_ParamLimits

0x78cd,	// (0x000526f8) listscroll_popup_colour_pane_g4

0x0003,

0xf5dc,	// (0x0005a407) listscroll_popup_colour_pane_g_ParamLimits

0xf5dc,	// (0x0005a407) listscroll_popup_colour_pane_g

0x78e1,	// (0x0005270c) scroll_pane_cp6_ParamLimits

0x78e1,	// (0x0005270c) scroll_pane_cp6

0x7ded,	// (0x00052c18) cell_large_graphic_colour_popup_pane_ParamLimits

0x7ded,	// (0x00052c18) cell_large_graphic_colour_popup_pane

0x7e12,	// (0x00052c3d) cell_large_graphic_colour_none_popup_pane_t1

0x727d,	// (0x000520a8) grid_highlight_pane_cp5

0x7e21,	// (0x00052c4c) cell_large_graphic_colour_popup_pane_g1

0x7e29,	// (0x00052c54) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5e5,	// (0x0005a410) cell_large_graphic_colour_popup_pane_g

0x7e31,	// (0x00052c5c) cell_large_graphic_colour_popup_pane_g2_copy1

0x7e3a,	// (0x00052c65) grid_highlight_pane_cp4

0x7e42,	// (0x00052c6d) bg_popup_window_pane_cp8_ParamLimits

0x7e42,	// (0x00052c6d) bg_popup_window_pane_cp8

0x7e5d,	// (0x00052c88) popup_snote_single_text_window_g1_ParamLimits

0x7e5d,	// (0x00052c88) popup_snote_single_text_window_g1

0x7e6f,	// (0x00052c9a) popup_snote_single_text_window_t1_ParamLimits

0x7e6f,	// (0x00052c9a) popup_snote_single_text_window_t1

0x7e82,	// (0x00052cad) popup_snote_single_text_window_t2_ParamLimits

0x7e82,	// (0x00052cad) popup_snote_single_text_window_t2

0x7e95,	// (0x00052cc0) popup_snote_single_text_window_t3_ParamLimits

0x7e95,	// (0x00052cc0) popup_snote_single_text_window_t3

0x7ece,	// (0x00052cf9) popup_snote_single_text_window_t4_ParamLimits

0x7ece,	// (0x00052cf9) popup_snote_single_text_window_t4

0x7f02,	// (0x00052d2d) popup_snote_single_text_window_t5_ParamLimits

0x7f02,	// (0x00052d2d) popup_snote_single_text_window_t5

0x0004,

0xf5ea,	// (0x0005a415) popup_snote_single_text_window_t_ParamLimits

0xf5ea,	// (0x0005a415) popup_snote_single_text_window_t

0x7f31,	// (0x00052d5c) bg_popup_window_pane_cp9_ParamLimits

0x7f31,	// (0x00052d5c) bg_popup_window_pane_cp9

0x7e5d,	// (0x00052c88) popup_snote_single_graphic_window_g1_ParamLimits

0x7e5d,	// (0x00052c88) popup_snote_single_graphic_window_g1

0x7f3f,	// (0x00052d6a) popup_snote_single_graphic_window_g2_ParamLimits

0x7f3f,	// (0x00052d6a) popup_snote_single_graphic_window_g2

0x0001,

0xf5f5,	// (0x0005a420) popup_snote_single_graphic_window_g_ParamLimits

0xf5f5,	// (0x0005a420) popup_snote_single_graphic_window_g

0x7f4b,	// (0x00052d76) popup_snote_single_graphic_window_t1_ParamLimits

0x7f4b,	// (0x00052d76) popup_snote_single_graphic_window_t1

0x7f5e,	// (0x00052d89) popup_snote_single_graphic_window_t2_ParamLimits

0x7f5e,	// (0x00052d89) popup_snote_single_graphic_window_t2

0x7f71,	// (0x00052d9c) popup_snote_single_graphic_window_t3_ParamLimits

0x7f71,	// (0x00052d9c) popup_snote_single_graphic_window_t3

0x7faa,	// (0x00052dd5) popup_snote_single_graphic_window_t4_ParamLimits

0x7faa,	// (0x00052dd5) popup_snote_single_graphic_window_t4

0x7fde,	// (0x00052e09) popup_snote_single_graphic_window_t5_ParamLimits

0x7fde,	// (0x00052e09) popup_snote_single_graphic_window_t5

0x0004,

0xf5fa,	// (0x0005a425) popup_snote_single_graphic_window_t_ParamLimits

0xf5fa,	// (0x0005a425) popup_snote_single_graphic_window_t

0xb386,	// (0x000561b1) grid_graphic_popup_pane_ParamLimits

0xb386,	// (0x000561b1) grid_graphic_popup_pane

0xb3b4,	// (0x000561df) listscroll_popup_graphic_pane_g1_ParamLimits

0xb3b4,	// (0x000561df) listscroll_popup_graphic_pane_g1

0xb3c8,	// (0x000561f3) listscroll_popup_graphic_pane_g2_ParamLimits

0xb3c8,	// (0x000561f3) listscroll_popup_graphic_pane_g2

0x0001,

0xf9ee,	// (0x0005a819) listscroll_popup_graphic_pane_g_ParamLimits

0xf9ee,	// (0x0005a819) listscroll_popup_graphic_pane_g

0xb3dc,	// (0x00056207) scroll_pane_cp5

0xb32e,	// (0x00056159) cell_graphic_popup_pane_ParamLimits

0xb32e,	// (0x00056159) cell_graphic_popup_pane

0xb30f,	// (0x0005613a) cell_graphic_popup_pane_g1

0xb317,	// (0x00056142) cell_graphic_popup_pane_g2

0x7e31,	// (0x00052c5c) cell_graphic_popup_pane_g3

0x0002,

0xf9e7,	// (0x0005a812) cell_graphic_popup_pane_g

0xb320,	// (0x0005614b) cell_graphic_popup_pane_t2

0x7e3a,	// (0x00052c65) grid_highlight_pane_cp3

0x801f,	// (0x00052e4a) list_gen_pane_ParamLimits

0x801f,	// (0x00052e4a) list_gen_pane

0x8051,	// (0x00052e7c) scroll_pane

0xb271,	// (0x0005609c) bg_list_pane_g1_ParamLimits

0xb271,	// (0x0005609c) bg_list_pane_g1

0xb28c,	// (0x000560b7) bg_list_pane_g2_ParamLimits

0xb28c,	// (0x000560b7) bg_list_pane_g2

0xb29f,	// (0x000560ca) bg_list_pane_g3_ParamLimits

0xb29f,	// (0x000560ca) bg_list_pane_g3

0xb2b1,	// (0x000560dc) bg_list_pane_g4_ParamLimits

0xb2b1,	// (0x000560dc) bg_list_pane_g4

0xb2c3,	// (0x000560ee) bg_list_pane_g5_ParamLimits

0xb2c3,	// (0x000560ee) bg_list_pane_g5

0x0004,

0xf9dc,	// (0x0005a807) bg_list_pane_g_ParamLimits

0xf9dc,	// (0x0005a807) bg_list_pane_g

0xb1ee,	// (0x00056019) list_double2_graphic_large_graphic_pane_ParamLimits

0xb1ee,	// (0x00056019) list_double2_graphic_large_graphic_pane

0xb1ee,	// (0x00056019) list_double2_graphic_pane_ParamLimits

0xb1ee,	// (0x00056019) list_double2_graphic_pane

0xb1ee,	// (0x00056019) list_double2_large_graphic_pane_ParamLimits

0xb1ee,	// (0x00056019) list_double2_large_graphic_pane

0xb1ee,	// (0x00056019) list_double2_pane_ParamLimits

0xb1ee,	// (0x00056019) list_double2_pane

0xb1ee,	// (0x00056019) list_double_graphic_heading_pane_ParamLimits

0xb1ee,	// (0x00056019) list_double_graphic_heading_pane

0xb1ee,	// (0x00056019) list_double_graphic_pane_ParamLimits

0xb1ee,	// (0x00056019) list_double_graphic_pane

0xb1ee,	// (0x00056019) list_double_heading_pane_ParamLimits

0xb1ee,	// (0x00056019) list_double_heading_pane

0xb1ee,	// (0x00056019) list_double_large_graphic_pane_ParamLimits

0xb1ee,	// (0x00056019) list_double_large_graphic_pane

0xb1ee,	// (0x00056019) list_double_number_pane_ParamLimits

0xb1ee,	// (0x00056019) list_double_number_pane

0xb1ee,	// (0x00056019) list_double_pane_ParamLimits

0xb1ee,	// (0x00056019) list_double_pane

0xb1ee,	// (0x00056019) list_double_time_pane_ParamLimits

0xb1ee,	// (0x00056019) list_double_time_pane

0xb1ee,	// (0x00056019) list_setting_number_pane_ParamLimits

0xb1ee,	// (0x00056019) list_setting_number_pane

0xb1ee,	// (0x00056019) list_setting_pane_ParamLimits

0xb1ee,	// (0x00056019) list_setting_pane

0xb22d,	// (0x00056058) list_single_2graphic_pane_ParamLimits

0xb22d,	// (0x00056058) list_single_2graphic_pane

0xb22d,	// (0x00056058) list_single_graphic_heading_pane_ParamLimits

0xb22d,	// (0x00056058) list_single_graphic_heading_pane

0xb22d,	// (0x00056058) list_single_graphic_pane_ParamLimits

0xb22d,	// (0x00056058) list_single_graphic_pane

0xb22d,	// (0x00056058) list_single_heading_pane_ParamLimits

0xb22d,	// (0x00056058) list_single_heading_pane

0x79da,	// (0x00052805) list_single_large_graphic_pane_ParamLimits

0x79da,	// (0x00052805) list_single_large_graphic_pane

0xb22d,	// (0x00056058) list_single_number_heading_pane_ParamLimits

0xb22d,	// (0x00056058) list_single_number_heading_pane

0xb22d,	// (0x00056058) list_single_number_pane_ParamLimits

0xb22d,	// (0x00056058) list_single_number_pane

0xb22d,	// (0x00056058) list_single_pane_ParamLimits

0xb22d,	// (0x00056058) list_single_pane

0x727d,	// (0x000520a8) list_highlight_pane_cp1

0x898e,	// (0x000537b9) list_single_pane_g1_ParamLimits

0x898e,	// (0x000537b9) list_single_pane_g1

0x78f3,	// (0x0005271e) list_single_pane_g2_ParamLimits

0x78f3,	// (0x0005271e) list_single_pane_g2

0x0001,

0xf616,	// (0x0005a441) list_single_pane_g_ParamLimits

0xf616,	// (0x0005a441) list_single_pane_g

0x626e,	// (0x00051099) list_single_pane_t1_ParamLimits

0x626e,	// (0x00051099) list_single_pane_t1

0x898e,	// (0x000537b9) list_single_number_pane_g1_ParamLimits

0x898e,	// (0x000537b9) list_single_number_pane_g1

0x78f3,	// (0x0005271e) list_single_number_pane_g2_ParamLimits

0x78f3,	// (0x0005271e) list_single_number_pane_g2

0x0001,

0xf616,	// (0x0005a441) list_single_number_pane_g_ParamLimits

0xf616,	// (0x0005a441) list_single_number_pane_g

0x6198,	// (0x00050fc3) list_single_number_pane_t1_ParamLimits

0x6198,	// (0x00050fc3) list_single_number_pane_t1

0x61ae,	// (0x00050fd9) list_single_number_pane_t2_ParamLimits

0x61ae,	// (0x00050fd9) list_single_number_pane_t2

0x0001,

0xf99d,	// (0x0005a7c8) list_single_number_pane_t_ParamLimits

0xf99d,	// (0x0005a7c8) list_single_number_pane_t

0x50b1,	// (0x0004fedc) list_single_graphic_pane_g1_ParamLimits

0x50b1,	// (0x0004fedc) list_single_graphic_pane_g1

0x898e,	// (0x000537b9) list_single_graphic_pane_g2_ParamLimits

0x898e,	// (0x000537b9) list_single_graphic_pane_g2

0x78f3,	// (0x0005271e) list_single_graphic_pane_g3_ParamLimits

0x78f3,	// (0x0005271e) list_single_graphic_pane_g3

0x0002,

0xf605,	// (0x0005a430) list_single_graphic_pane_g_ParamLimits

0xf605,	// (0x0005a430) list_single_graphic_pane_g

0x4214,	// (0x0004f03f) list_single_graphic_pane_t1_ParamLimits

0x4214,	// (0x0004f03f) list_single_graphic_pane_t1

0x50bd,	// (0x0004fee8) list_single_heading_pane_g1_ParamLimits

0x50bd,	// (0x0004fee8) list_single_heading_pane_g1

0x78f3,	// (0x0005271e) list_single_heading_pane_g2_ParamLimits

0x78f3,	// (0x0005271e) list_single_heading_pane_g2

0x0001,

0xf60c,	// (0x0005a437) list_single_heading_pane_g_ParamLimits

0xf60c,	// (0x0005a437) list_single_heading_pane_g

0x50d0,	// (0x0004fefb) list_single_heading_pane_t1_ParamLimits

0x50d0,	// (0x0004fefb) list_single_heading_pane_t1

0x78ff,	// (0x0005272a) list_single_heading_pane_t2_ParamLimits

0x78ff,	// (0x0005272a) list_single_heading_pane_t2

0x0001,

0xf611,	// (0x0005a43c) list_single_heading_pane_t_ParamLimits

0xf611,	// (0x0005a43c) list_single_heading_pane_t

0x898e,	// (0x000537b9) list_single_number_heading_pane_g1_ParamLimits

0x898e,	// (0x000537b9) list_single_number_heading_pane_g1

0x78f3,	// (0x0005271e) list_single_number_heading_pane_g2_ParamLimits

0x78f3,	// (0x0005271e) list_single_number_heading_pane_g2

0x0001,

0xf616,	// (0x0005a441) list_single_number_heading_pane_g_ParamLimits

0xf616,	// (0x0005a441) list_single_number_heading_pane_g

0x50e6,	// (0x0004ff11) list_single_number_heading_pane_t1_ParamLimits

0x50e6,	// (0x0004ff11) list_single_number_heading_pane_t1

0x50fc,	// (0x0004ff27) list_single_number_heading_pane_t2_ParamLimits

0x50fc,	// (0x0004ff27) list_single_number_heading_pane_t2

0x510e,	// (0x0004ff39) list_single_number_heading_pane_t3_ParamLimits

0x510e,	// (0x0004ff39) list_single_number_heading_pane_t3

0x0002,

0xf61b,	// (0x0005a446) list_single_number_heading_pane_t_ParamLimits

0xf61b,	// (0x0005a446) list_single_number_heading_pane_t

0x5120,	// (0x0004ff4b) list_single_graphic_heading_pane_g1_ParamLimits

0x5120,	// (0x0004ff4b) list_single_graphic_heading_pane_g1

0x7911,	// (0x0005273c) list_single_graphic_heading_pane_g4_ParamLimits

0x7911,	// (0x0005273c) list_single_graphic_heading_pane_g4

0x78f3,	// (0x0005271e) list_single_graphic_heading_pane_g5_ParamLimits

0x78f3,	// (0x0005271e) list_single_graphic_heading_pane_g5

0x0002,

0xf622,	// (0x0005a44d) list_single_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x0005a44d) list_single_graphic_heading_pane_g

0x50e6,	// (0x0004ff11) list_single_graphic_heading_pane_t1_ParamLimits

0x50e6,	// (0x0004ff11) list_single_graphic_heading_pane_t1

0x5138,	// (0x0004ff63) list_single_graphic_heading_pane_t2_ParamLimits

0x5138,	// (0x0004ff63) list_single_graphic_heading_pane_t2

0x0001,

0xf629,	// (0x0005a454) list_single_graphic_heading_pane_t_ParamLimits

0xf629,	// (0x0005a454) list_single_graphic_heading_pane_t

0x7922,	// (0x0005274d) list_single_large_graphic_pane_g1_ParamLimits

0x7922,	// (0x0005274d) list_single_large_graphic_pane_g1

0x792e,	// (0x00052759) list_single_large_graphic_pane_g2_ParamLimits

0x792e,	// (0x00052759) list_single_large_graphic_pane_g2

0x793a,	// (0x00052765) list_single_large_graphic_pane_g3_ParamLimits

0x793a,	// (0x00052765) list_single_large_graphic_pane_g3

0x0002,

0xf62e,	// (0x0005a459) list_single_large_graphic_pane_g_ParamLimits

0xf62e,	// (0x0005a459) list_single_large_graphic_pane_g

0xa204,	// (0x0005502f) wait_border_pane_g2_copy1

0x7946,	// (0x00052771) list_single_large_graphic_pane_g4_cp2

0x5150,	// (0x0004ff7b) list_single_large_graphic_pane_t1_ParamLimits

0x5150,	// (0x0004ff7b) list_single_large_graphic_pane_t1

0x794e,	// (0x00052779) list_double_pane_g1_ParamLimits

0x794e,	// (0x00052779) list_double_pane_g1

0x795a,	// (0x00052785) list_double_pane_g2_ParamLimits

0x795a,	// (0x00052785) list_double_pane_g2

0x0001,

0xf635,	// (0x0005a460) list_double_pane_g_ParamLimits

0xf635,	// (0x0005a460) list_double_pane_g

0x5166,	// (0x0004ff91) list_double_pane_t1_ParamLimits

0x5166,	// (0x0004ff91) list_double_pane_t1

0x517c,	// (0x0004ffa7) list_double_pane_t2_ParamLimits

0x517c,	// (0x0004ffa7) list_double_pane_t2

0x0001,

0xf63a,	// (0x0005a465) list_double_pane_t_ParamLimits

0xf63a,	// (0x0005a465) list_double_pane_t

0x518e,	// (0x0004ffb9) list_double2_pane_g1_ParamLimits

0x518e,	// (0x0004ffb9) list_double2_pane_g1

0x519f,	// (0x0004ffca) list_double2_pane_g2_ParamLimits

0x519f,	// (0x0004ffca) list_double2_pane_g2

0x0001,

0xf63f,	// (0x0005a46a) list_double2_pane_g_ParamLimits

0xf63f,	// (0x0005a46a) list_double2_pane_g

0x51ab,	// (0x0004ffd6) list_double2_pane_t1_ParamLimits

0x51ab,	// (0x0004ffd6) list_double2_pane_t1

0x51c1,	// (0x0004ffec) list_double2_pane_t2_ParamLimits

0x51c1,	// (0x0004ffec) list_double2_pane_t2

0x0001,

0xf644,	// (0x0005a46f) list_double2_pane_t_ParamLimits

0xf644,	// (0x0005a46f) list_double2_pane_t

0x794e,	// (0x00052779) list_double_number_pane_g1_ParamLimits

0x794e,	// (0x00052779) list_double_number_pane_g1

0x795a,	// (0x00052785) list_double_number_pane_g2_ParamLimits

0x795a,	// (0x00052785) list_double_number_pane_g2

0x0001,

0xf635,	// (0x0005a460) list_double_number_pane_g_ParamLimits

0xf635,	// (0x0005a460) list_double_number_pane_g

0x51d3,	// (0x0004fffe) list_double_number_pane_t1_ParamLimits

0x51d3,	// (0x0004fffe) list_double_number_pane_t1

0x51e5,	// (0x00050010) list_double_number_pane_t2_ParamLimits

0x51e5,	// (0x00050010) list_double_number_pane_t2

0x51fb,	// (0x00050026) list_double_number_pane_t3_ParamLimits

0x51fb,	// (0x00050026) list_double_number_pane_t3

0x0002,

0xf649,	// (0x0005a474) list_double_number_pane_t_ParamLimits

0xf649,	// (0x0005a474) list_double_number_pane_t

0x520d,	// (0x00050038) list_double_graphic_pane_g1_ParamLimits

0x520d,	// (0x00050038) list_double_graphic_pane_g1

0x5219,	// (0x00050044) list_double_graphic_pane_g2_ParamLimits

0x5219,	// (0x00050044) list_double_graphic_pane_g2

0x5228,	// (0x00050053) list_double_graphic_pane_g3_ParamLimits

0x5228,	// (0x00050053) list_double_graphic_pane_g3

0x0003,

0xf650,	// (0x0005a47b) list_double_graphic_pane_g_ParamLimits

0xf650,	// (0x0005a47b) list_double_graphic_pane_g

0x5240,	// (0x0005006b) list_double_graphic_pane_t1_ParamLimits

0x5240,	// (0x0005006b) list_double_graphic_pane_t1

0x5256,	// (0x00050081) list_double_graphic_pane_t2_ParamLimits

0x5256,	// (0x00050081) list_double_graphic_pane_t2

0x0001,

0xf659,	// (0x0005a484) list_double_graphic_pane_t_ParamLimits

0xf659,	// (0x0005a484) list_double_graphic_pane_t

0x5268,	// (0x00050093) list_double2_graphic_pane_g1_ParamLimits

0x5268,	// (0x00050093) list_double2_graphic_pane_g1

0x7966,	// (0x00052791) list_double2_graphic_pane_g2_ParamLimits

0x7966,	// (0x00052791) list_double2_graphic_pane_g2

0x5274,	// (0x0005009f) list_double2_graphic_pane_g3_ParamLimits

0x5274,	// (0x0005009f) list_double2_graphic_pane_g3

0x0002,

0xf65e,	// (0x0005a489) list_double2_graphic_pane_g_ParamLimits

0xf65e,	// (0x0005a489) list_double2_graphic_pane_g

0x5280,	// (0x000500ab) list_double2_graphic_pane_t1_ParamLimits

0x5280,	// (0x000500ab) list_double2_graphic_pane_t1

0x5296,	// (0x000500c1) list_double2_graphic_pane_t2_ParamLimits

0x5296,	// (0x000500c1) list_double2_graphic_pane_t2

0x0001,

0xf665,	// (0x0005a490) list_double2_graphic_pane_t_ParamLimits

0xf665,	// (0x0005a490) list_double2_graphic_pane_t

0x52a8,	// (0x000500d3) list_double_large_graphic_pane_g1_ParamLimits

0x52a8,	// (0x000500d3) list_double_large_graphic_pane_g1

0x52d3,	// (0x000500fe) list_double_large_graphic_pane_g2_ParamLimits

0x52d3,	// (0x000500fe) list_double_large_graphic_pane_g2

0x795a,	// (0x00052785) list_double_large_graphic_pane_g3_ParamLimits

0x795a,	// (0x00052785) list_double_large_graphic_pane_g3

0x52e9,	// (0x00050114) list_double_large_graphic_pane_g4_ParamLimits

0x52e9,	// (0x00050114) list_double_large_graphic_pane_g4

0x0004,

0xf66a,	// (0x0005a495) list_double_large_graphic_pane_g_ParamLimits

0xf66a,	// (0x0005a495) list_double_large_graphic_pane_g

0x52fc,	// (0x00050127) list_double_large_graphic_pane_t1_ParamLimits

0x52fc,	// (0x00050127) list_double_large_graphic_pane_t1

0x5315,	// (0x00050140) list_double_large_graphic_pane_t2_ParamLimits

0x5315,	// (0x00050140) list_double_large_graphic_pane_t2

0x0001,

0xf675,	// (0x0005a4a0) list_double_large_graphic_pane_t_ParamLimits

0xf675,	// (0x0005a4a0) list_double_large_graphic_pane_t

0x7987,	// (0x000527b2) list_double2_large_graphic_pane_g1_ParamLimits

0x7987,	// (0x000527b2) list_double2_large_graphic_pane_g1

0x5327,	// (0x00050152) list_double2_large_graphic_pane_g2_ParamLimits

0x5327,	// (0x00050152) list_double2_large_graphic_pane_g2

0x5274,	// (0x0005009f) list_double2_large_graphic_pane_g3_ParamLimits

0x5274,	// (0x0005009f) list_double2_large_graphic_pane_g3

0x0002,

0xf67a,	// (0x0005a4a5) list_double2_large_graphic_pane_g_ParamLimits

0xf67a,	// (0x0005a4a5) list_double2_large_graphic_pane_g

0x5338,	// (0x00050163) list_double2_large_graphic_pane_t1_ParamLimits

0x5338,	// (0x00050163) list_double2_large_graphic_pane_t1

0x534e,	// (0x00050179) list_double2_large_graphic_pane_t2_ParamLimits

0x534e,	// (0x00050179) list_double2_large_graphic_pane_t2

0x0001,

0xf681,	// (0x0005a4ac) list_double2_large_graphic_pane_t_ParamLimits

0xf681,	// (0x0005a4ac) list_double2_large_graphic_pane_t

0x5360,	// (0x0005018b) list_double_heading_pane_g1_ParamLimits

0x5360,	// (0x0005018b) list_double_heading_pane_g1

0x5371,	// (0x0005019c) list_double_heading_pane_g2_ParamLimits

0x5371,	// (0x0005019c) list_double_heading_pane_g2

0x0001,

0xf686,	// (0x0005a4b1) list_double_heading_pane_g_ParamLimits

0xf686,	// (0x0005a4b1) list_double_heading_pane_g

0x537d,	// (0x000501a8) list_double_heading_pane_t1_ParamLimits

0x537d,	// (0x000501a8) list_double_heading_pane_t1

0x5393,	// (0x000501be) list_double_heading_pane_t2_ParamLimits

0x5393,	// (0x000501be) list_double_heading_pane_t2

0x0001,

0xf68b,	// (0x0005a4b6) list_double_heading_pane_t_ParamLimits

0xf68b,	// (0x0005a4b6) list_double_heading_pane_t

0x53a5,	// (0x000501d0) list_double_graphic_heading_pane_g1_ParamLimits

0x53a5,	// (0x000501d0) list_double_graphic_heading_pane_g1

0x5360,	// (0x0005018b) list_double_graphic_heading_pane_g2_ParamLimits

0x5360,	// (0x0005018b) list_double_graphic_heading_pane_g2

0x5371,	// (0x0005019c) list_double_graphic_heading_pane_g3_ParamLimits

0x5371,	// (0x0005019c) list_double_graphic_heading_pane_g3

0x0002,

0xf690,	// (0x0005a4bb) list_double_graphic_heading_pane_g_ParamLimits

0xf690,	// (0x0005a4bb) list_double_graphic_heading_pane_g

0x53b1,	// (0x000501dc) list_double_graphic_heading_pane_t1_ParamLimits

0x53b1,	// (0x000501dc) list_double_graphic_heading_pane_t1

0x53c7,	// (0x000501f2) list_double_graphic_heading_pane_t2_ParamLimits

0x53c7,	// (0x000501f2) list_double_graphic_heading_pane_t2

0x0001,

0xf697,	// (0x0005a4c2) list_double_graphic_heading_pane_t_ParamLimits

0xf697,	// (0x0005a4c2) list_double_graphic_heading_pane_t

0x53d9,	// (0x00050204) list_double_time_pane_g1_ParamLimits

0x53d9,	// (0x00050204) list_double_time_pane_g1

0x53ea,	// (0x00050215) list_double_time_pane_g2_ParamLimits

0x53ea,	// (0x00050215) list_double_time_pane_g2

0x0001,

0xf69c,	// (0x0005a4c7) list_double_time_pane_g_ParamLimits

0xf69c,	// (0x0005a4c7) list_double_time_pane_g

0x53f6,	// (0x00050221) list_double_time_pane_t1_ParamLimits

0x53f6,	// (0x00050221) list_double_time_pane_t1

0x540c,	// (0x00050237) list_double_time_pane_t2_ParamLimits

0x540c,	// (0x00050237) list_double_time_pane_t2

0x541e,	// (0x00050249) list_double_time_pane_t3_ParamLimits

0x541e,	// (0x00050249) list_double_time_pane_t3

0x5430,	// (0x0005025b) list_double_time_pane_t4_ParamLimits

0x5430,	// (0x0005025b) list_double_time_pane_t4

0x0003,

0xf6a1,	// (0x0005a4cc) list_double_time_pane_t_ParamLimits

0xf6a1,	// (0x0005a4cc) list_double_time_pane_t

0x5442,	// (0x0005026d) list_setting_pane_g1_ParamLimits

0x5442,	// (0x0005026d) list_setting_pane_g1

0x544e,	// (0x00050279) list_setting_pane_g2_ParamLimits

0x544e,	// (0x00050279) list_setting_pane_g2

0x0001,

0xf6aa,	// (0x0005a4d5) list_setting_pane_g_ParamLimits

0xf6aa,	// (0x0005a4d5) list_setting_pane_g

0x545a,	// (0x00050285) list_setting_pane_t1_ParamLimits

0x545a,	// (0x00050285) list_setting_pane_t1

0x5474,	// (0x0005029f) list_setting_pane_t2_ParamLimits

0x5474,	// (0x0005029f) list_setting_pane_t2

0x0002,

0xf6af,	// (0x0005a4da) list_setting_pane_t_ParamLimits

0xf6af,	// (0x0005a4da) list_setting_pane_t

0x54b3,	// (0x000502de) set_value_pane_cp_ParamLimits

0x54b3,	// (0x000502de) set_value_pane_cp

0x54c1,	// (0x000502ec) list_setting_number_pane_g1_ParamLimits

0x54c1,	// (0x000502ec) list_setting_number_pane_g1

0x54cd,	// (0x000502f8) list_setting_number_pane_g2_ParamLimits

0x54cd,	// (0x000502f8) list_setting_number_pane_g2

0x0001,

0xf6b6,	// (0x0005a4e1) list_setting_number_pane_g_ParamLimits

0xf6b6,	// (0x0005a4e1) list_setting_number_pane_g

0x54d9,	// (0x00050304) list_setting_number_pane_t1_ParamLimits

0x54d9,	// (0x00050304) list_setting_number_pane_t1

0x54f2,	// (0x0005031d) list_setting_number_pane_t2_ParamLimits

0x54f2,	// (0x0005031d) list_setting_number_pane_t2

0x550c,	// (0x00050337) list_setting_number_pane_t3_ParamLimits

0x550c,	// (0x00050337) list_setting_number_pane_t3

0x0003,

0xf6bb,	// (0x0005a4e6) list_setting_number_pane_t_ParamLimits

0xf6bb,	// (0x0005a4e6) list_setting_number_pane_t

0x54b3,	// (0x000502de) set_value_pane_ParamLimits

0x54b3,	// (0x000502de) set_value_pane

0x8085,	// (0x00052eb0) bg_set_opt_pane_ParamLimits

0x8085,	// (0x00052eb0) bg_set_opt_pane

0x554f,	// (0x0005037a) set_value_pane_t1

0x80a6,	// (0x00052ed1) slider_set_pane_cp3

0x80af,	// (0x00052eda) volume_small_pane_cp

0x80b8,	// (0x00052ee3) list_form_gen_pane

0x80c1,	// (0x00052eec) scroll_pane_cp8

0x5565,	// (0x00050390) form_field_data_pane_ParamLimits

0x5565,	// (0x00050390) form_field_data_pane

0x558d,	// (0x000503b8) form_field_data_wide_pane_ParamLimits

0x558d,	// (0x000503b8) form_field_data_wide_pane

0x55b4,	// (0x000503df) form_field_popup_pane_ParamLimits

0x55b4,	// (0x000503df) form_field_popup_pane

0x55d6,	// (0x00050401) form_field_popup_wide_pane_ParamLimits

0x55d6,	// (0x00050401) form_field_popup_wide_pane

0x55f7,	// (0x00050422) form_field_slider_pane_ParamLimits

0x55f7,	// (0x00050422) form_field_slider_pane

0x560a,	// (0x00050435) form_field_slider_wide_pane_ParamLimits

0x560a,	// (0x00050435) form_field_slider_wide_pane

0x80d2,	// (0x00052efd) data_form_pane

0x5627,	// (0x00050452) form_field_data_pane_t1

0x80de,	// (0x00052f09) input_focus_pane

0x80ec,	// (0x00052f17) data_form_wide_pane

0x564d,	// (0x00050478) form_field_data_wide_pane_t1

0x7e4f,	// (0x00052c7a) input_focus_pane_cp6

0x566f,	// (0x0005049a) form_field_popup_pane_t1

0x80de,	// (0x00052f09) input_focus_pane_cp7

0x8118,	// (0x00052f43) list_form_pane

0x5691,	// (0x000504bc) form_field_popup_wide_pane_t1

0x80de,	// (0x00052f09) input_focus_pane_cp8

0x8124,	// (0x00052f4f) list_form_wide_pane

0x56ae,	// (0x000504d9) form_field_slider_pane_t1_ParamLimits

0x56ae,	// (0x000504d9) form_field_slider_pane_t1

0x56c6,	// (0x000504f1) form_field_slider_pane_t2_ParamLimits

0x56c6,	// (0x000504f1) form_field_slider_pane_t2

0x0001,

0xf6cb,	// (0x0005a4f6) form_field_slider_pane_t_ParamLimits

0xf6cb,	// (0x0005a4f6) form_field_slider_pane_t

0x75d9,	// (0x00052404) input_focus_pane_cp9_ParamLimits

0x75d9,	// (0x00052404) input_focus_pane_cp9

0x56db,	// (0x00050506) slider_cont_pane_ParamLimits

0x56db,	// (0x00050506) slider_cont_pane

0x8133,	// (0x00052f5e) form_field_slider_wide_pane_t1_ParamLimits

0x8133,	// (0x00052f5e) form_field_slider_wide_pane_t1

0x56ef,	// (0x0005051a) form_field_slider_wide_pane_t2_ParamLimits

0x56ef,	// (0x0005051a) form_field_slider_wide_pane_t2

0x0001,

0xf6d0,	// (0x0005a4fb) form_field_slider_wide_pane_t_ParamLimits

0xf6d0,	// (0x0005a4fb) form_field_slider_wide_pane_t

0x75d9,	// (0x00052404) input_focus_pane_cp10_ParamLimits

0x75d9,	// (0x00052404) input_focus_pane_cp10

0x5701,	// (0x0005052c) slider_cont_pane_cp1_ParamLimits

0x5701,	// (0x0005052c) slider_cont_pane_cp1

0x5715,	// (0x00050540) slider_form_pane_cp

0x8145,	// (0x00052f70) input_focus_pane_g1

0x814d,	// (0x00052f78) input_focus_pane_g2

0x8155,	// (0x00052f80) input_focus_pane_g3

0x815d,	// (0x00052f88) input_focus_pane_g4

0x8165,	// (0x00052f90) input_focus_pane_g5

0x816d,	// (0x00052f98) input_focus_pane_g6

0x8175,	// (0x00052fa0) input_focus_pane_g7

0x817d,	// (0x00052fa8) input_focus_pane_g8

0x8185,	// (0x00052fb0) input_focus_pane_g9

0x7273,	// (0x0005209e) input_focus_pane_g10

0x0009,

0xf6d5,	// (0x0005a500) input_focus_pane_g

0xa20d,	// (0x00055038) wait_border_pane_g3_copy1

0x571d,	// (0x00050548) data_form_pane_t1

0x7273,	// (0x0005209e) wait_anim_pane_g1_copy1

0x6238,	// (0x00051063) data_form_wide_pane_t1

0x573c,	// (0x00050567) list_form_graphic_pane_cp_ParamLimits

0x573c,	// (0x00050567) list_form_graphic_pane_cp

0xb192,	// (0x00055fbd) slider_form_pane_g1

0xb19b,	// (0x00055fc6) slider_form_pane_g2

0x0006,

0xf9cd,	// (0x0005a7f8) slider_form_pane_g

0x573c,	// (0x00050567) list_form_graphic_pane_ParamLimits

0x573c,	// (0x00050567) list_form_graphic_pane

0x574e,	// (0x00050579) list_form_graphic_pane_g1

0x5756,	// (0x00050581) list_form_graphic_pane_t1_ParamLimits

0x5756,	// (0x00050581) list_form_graphic_pane_t1

0x735d,	// (0x00052188) list_highlight_pane_cp5_ParamLimits

0x735d,	// (0x00052188) list_highlight_pane_cp5

0x7993,	// (0x000527be) find_pane_g1

0x818d,	// (0x00052fb8) input_find_pane

0x576b,	// (0x00050596) input_find_pane_g1_ParamLimits

0x576b,	// (0x00050596) input_find_pane_g1

0x5777,	// (0x000505a2) input_find_pane_t1_ParamLimits

0x5777,	// (0x000505a2) input_find_pane_t1

0x578c,	// (0x000505b7) input_find_pane_t2_ParamLimits

0x578c,	// (0x000505b7) input_find_pane_t2

0x0001,

0xf6ea,	// (0x0005a515) input_find_pane_t_ParamLimits

0xf6ea,	// (0x0005a515) input_find_pane_t

0x8196,	// (0x00052fc1) input_focus_pane_cp5_ParamLimits

0x8196,	// (0x00052fc1) input_focus_pane_cp5

0x81b0,	// (0x00052fdb) bg_popup_window_pane_cp2_ParamLimits

0x81b0,	// (0x00052fdb) bg_popup_window_pane_cp2

0x81bd,	// (0x00052fe8) listscroll_menu_pane_ParamLimits

0x81bd,	// (0x00052fe8) listscroll_menu_pane

0x81c9,	// (0x00052ff4) popup_submenu_window_ParamLimits

0x81c9,	// (0x00052ff4) popup_submenu_window

0x81f9,	// (0x00053024) find_popup_pane_g1

0x8201,	// (0x0005302c) input_popup_find_pane_cp

0x8196,	// (0x00052fc1) input_focus_pane_cp4_ParamLimits

0x8196,	// (0x00052fc1) input_focus_pane_cp4

0x8219,	// (0x00053044) input_popup_find_pane_t1_ParamLimits

0x8219,	// (0x00053044) input_popup_find_pane_t1

0x727d,	// (0x000520a8) bg_popup_sub_pane_cp

0x8247,	// (0x00053072) listscroll_popup_sub_pane

0x824f,	// (0x0005307a) list_submenu_pane_ParamLimits

0x824f,	// (0x0005307a) list_submenu_pane

0x8260,	// (0x0005308b) scroll_pane_cp4

0x8268,	// (0x00053093) list_single_popup_submenu_pane_ParamLimits

0x8268,	// (0x00053093) list_single_popup_submenu_pane

0x827d,	// (0x000530a8) list_single_popup_submenu_pane_g1

0x8285,	// (0x000530b0) list_single_popup_submenu_pane_t1_ParamLimits

0x8285,	// (0x000530b0) list_single_popup_submenu_pane_t1

0x735d,	// (0x00052188) bg_active_tab_pane_cp1_ParamLimits

0x735d,	// (0x00052188) bg_active_tab_pane_cp1

0x829a,	// (0x000530c5) tabs_2_active_pane_g1

0x82a2,	// (0x000530cd) tabs_2_active_pane_t1

0x735d,	// (0x00052188) bg_passive_tab_pane_cp1_ParamLimits

0x735d,	// (0x00052188) bg_passive_tab_pane_cp1

0x829a,	// (0x000530c5) tabs_2_passive_pane_g1

0x82a2,	// (0x000530cd) tabs_2_passive_pane_t1

0x82b4,	// (0x000530df) bg_active_tab_pane_cp4

0x82c2,	// (0x000530ed) tabs_2_long_active_pane_t1

0x82d5,	// (0x00053100) bg_passive_tab_pane_cp4

0x5e84,	// (0x00050caf) list_single_midp_graphic_pane_g4_ParamLimits

0x82b4,	// (0x000530df) bg_active_tab_pane_cp5

0x82e1,	// (0x0005310c) tabs_3_long_active_pane_t1

0x82d5,	// (0x00053100) bg_passive_tab_pane_cp5

0x5e84,	// (0x00050caf) list_single_midp_graphic_pane_g4

0x735d,	// (0x00052188) bg_popup_window_pane_cp13_ParamLimits

0x735d,	// (0x00052188) bg_popup_window_pane_cp13

0x82fc,	// (0x00053127) listscroll_popup_fast_pane_ParamLimits

0x82fc,	// (0x00053127) listscroll_popup_fast_pane

0x830b,	// (0x00053136) grid_popup_fast_pane_ParamLimits

0x830b,	// (0x00053136) grid_popup_fast_pane

0x831d,	// (0x00053148) scroll_pane_cp9_ParamLimits

0x831d,	// (0x00053148) scroll_pane_cp9

0xcac5,	// (0x000578f0) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xcac5,	// (0x000578f0) list_single_graphic_hl_pane_t1_cp2

0x8341,	// (0x0005316c) input_focus_pane_cp20_ParamLimits

0x8341,	// (0x0005316c) input_focus_pane_cp20

0x834f,	// (0x0005317a) query_popup_data_pane_t1_ParamLimits

0x834f,	// (0x0005317a) query_popup_data_pane_t1

0x8362,	// (0x0005318d) query_popup_data_pane_t2_ParamLimits

0x8362,	// (0x0005318d) query_popup_data_pane_t2

0x83a8,	// (0x000531d3) query_popup_data_pane_t3_ParamLimits

0x83a8,	// (0x000531d3) query_popup_data_pane_t3

0x83e9,	// (0x00053214) query_popup_data_pane_t4_ParamLimits

0x83e9,	// (0x00053214) query_popup_data_pane_t4

0x8425,	// (0x00053250) query_popup_data_pane_t5_ParamLimits

0x8425,	// (0x00053250) query_popup_data_pane_t5

0x0004,

0xf6ef,	// (0x0005a51a) query_popup_data_pane_t_ParamLimits

0xf6ef,	// (0x0005a51a) query_popup_data_pane_t

0x8145,	// (0x00052f70) bg_set_opt_pane_g1

0x814d,	// (0x00052f78) bg_set_opt_pane_g2

0x8155,	// (0x00052f80) bg_set_opt_pane_g3

0x815d,	// (0x00052f88) bg_set_opt_pane_g4

0x8165,	// (0x00052f90) bg_set_opt_pane_g5

0x816d,	// (0x00052f98) bg_set_opt_pane_g6

0x8175,	// (0x00052fa0) bg_set_opt_pane_g7

0x817d,	// (0x00052fa8) bg_set_opt_pane_g8

0x8185,	// (0x00052fb0) bg_set_opt_pane_g9

0x0008,

0xf6fa,	// (0x0005a525) bg_set_opt_pane_g

0x5ab2,	// (0x000508dd) control_top_pane_stacon_ParamLimits

0x5ab2,	// (0x000508dd) control_top_pane_stacon

0x5b05,	// (0x00050930) signal_pane_stacon_ParamLimits

0x5b05,	// (0x00050930) signal_pane_stacon

0x89dd,	// (0x00053808) stacon_top_pane_g1_ParamLimits

0x89dd,	// (0x00053808) stacon_top_pane_g1

0x5b2a,	// (0x00050955) title_pane_stacon_ParamLimits

0x5b2a,	// (0x00050955) title_pane_stacon

0x5b54,	// (0x0005097f) uni_indicator_pane_stacon_ParamLimits

0x5b54,	// (0x0005097f) uni_indicator_pane_stacon

0x5b6c,	// (0x00050997) battery_pane_stacon_ParamLimits

0x5b6c,	// (0x00050997) battery_pane_stacon

0x5bb0,	// (0x000509db) control_bottom_pane_stacon_ParamLimits

0x5bb0,	// (0x000509db) control_bottom_pane_stacon

0x5bd3,	// (0x000509fe) navi_pane_stacon_ParamLimits

0x5bd3,	// (0x000509fe) navi_pane_stacon

0x89ff,	// (0x0005382a) stacon_bottom_pane_g1_ParamLimits

0x89ff,	// (0x0005382a) stacon_bottom_pane_g1

0x57a1,	// (0x000505cc) aid_levels_signal_lsc_ParamLimits

0x57a1,	// (0x000505cc) aid_levels_signal_lsc

0x57b8,	// (0x000505e3) signal_pane_stacon_g1_ParamLimits

0x57b8,	// (0x000505e3) signal_pane_stacon_g1

0x57cc,	// (0x000505f7) signal_pane_stacon_g2_ParamLimits

0x57cc,	// (0x000505f7) signal_pane_stacon_g2

0x0001,

0xf70d,	// (0x0005a538) signal_pane_stacon_g_ParamLimits

0xf70d,	// (0x0005a538) signal_pane_stacon_g

0x5801,	// (0x0005062c) title_pane_stacon_t1_ParamLimits

0x5801,	// (0x0005062c) title_pane_stacon_t1

0x8469,	// (0x00053294) uni_indicator_pane_stacon_g1

0x8473,	// (0x0005329e) uni_indicator_pane_stacon_g2

0x847d,	// (0x000532a8) uni_indicator_pane_stacon_g3

0x8487,	// (0x000532b2) uni_indicator_pane_stacon_g4

0x0003,

0xf719,	// (0x0005a544) uni_indicator_pane_stacon_g

0x5826,	// (0x00050651) control_top_pane_stacon_g1

0x582e,	// (0x00050659) control_top_pane_stacon_t1_ParamLimits

0x582e,	// (0x00050659) control_top_pane_stacon_t1

0x5865,	// (0x00050690) aid_levels_battery_lsc_ParamLimits

0x5865,	// (0x00050690) aid_levels_battery_lsc

0x587d,	// (0x000506a8) battery_pane_stacon_g1_ParamLimits

0x587d,	// (0x000506a8) battery_pane_stacon_g1

0x5890,	// (0x000506bb) battery_pane_stacon_g2_ParamLimits

0x5890,	// (0x000506bb) battery_pane_stacon_g2

0x0001,

0xf722,	// (0x0005a54d) battery_pane_stacon_g_ParamLimits

0xf722,	// (0x0005a54d) battery_pane_stacon_g

0x58ce,	// (0x000506f9) navi_icon_pane_stacon

0x58e2,	// (0x0005070d) navi_navi_pane_stacon

0x58ce,	// (0x000506f9) navi_text_pane_stacon

0x5826,	// (0x00050651) control_bottom_pane_stacon_g1

0x58f8,	// (0x00050723) control_bottom_pane_stacon_t1_ParamLimits

0x58f8,	// (0x00050723) control_bottom_pane_stacon_t1

0x84ab,	// (0x000532d6) grid_app_pane_ParamLimits

0x84ab,	// (0x000532d6) grid_app_pane

0x84cf,	// (0x000532fa) scroll_pane_cp15_ParamLimits

0x84cf,	// (0x000532fa) scroll_pane_cp15

0x84e4,	// (0x0005330f) cell_app_pane_ParamLimits

0x84e4,	// (0x0005330f) cell_app_pane

0x8510,	// (0x0005333b) cell_app_pane_g1_ParamLimits

0x8510,	// (0x0005333b) cell_app_pane_g1

0x8534,	// (0x0005335f) cell_app_pane_g2_ParamLimits

0x8534,	// (0x0005335f) cell_app_pane_g2

0x0001,

0xf727,	// (0x0005a552) cell_app_pane_g_ParamLimits

0xf727,	// (0x0005a552) cell_app_pane_g

0x8540,	// (0x0005336b) cell_app_pane_t1_ParamLimits

0x8540,	// (0x0005336b) cell_app_pane_t1

0x8552,	// (0x0005337d) grid_highlight_pane_ParamLimits

0x8552,	// (0x0005337d) grid_highlight_pane

0x8145,	// (0x00052f70) cell_highlight_pane_g1

0x814d,	// (0x00052f78) cell_highlight_pane_g2

0x8155,	// (0x00052f80) cell_highlight_pane_g3

0x815d,	// (0x00052f88) cell_highlight_pane_g4

0x8165,	// (0x00052f90) cell_highlight_pane_g5

0x816d,	// (0x00052f98) cell_highlight_pane_g6

0x8175,	// (0x00052fa0) cell_highlight_pane_g7

0x817d,	// (0x00052fa8) cell_highlight_pane_g8

0x8185,	// (0x00052fb0) cell_highlight_pane_g9

0x7273,	// (0x0005209e) cell_highlight_pane_g10

0x0009,

0xf6d5,	// (0x0005a500) cell_highlight_pane_g

0x8563,	// (0x0005338e) bg_scroll_pane

0x5942,	// (0x0005076d) scroll_handle_pane

0x85aa,	// (0x000533d5) scroll_bg_pane_g1

0x85bf,	// (0x000533ea) scroll_bg_pane_g2

0x85d7,	// (0x00053402) scroll_bg_pane_g3

0x0002,

0xf72c,	// (0x0005a557) scroll_bg_pane_g

0x85ec,	// (0x00053417) scroll_handle_focus_pane_ParamLimits

0x85ec,	// (0x00053417) scroll_handle_focus_pane

0x85aa,	// (0x000533d5) scroll_handle_pane_g1

0x85f9,	// (0x00053424) scroll_handle_pane_g2

0x85d7,	// (0x00053402) scroll_handle_pane_g3

0x0002,

0xf733,	// (0x0005a55e) scroll_handle_pane_g

0x8196,	// (0x00052fc1) bg_popup_sub_pane_cp21_ParamLimits

0x8196,	// (0x00052fc1) bg_popup_sub_pane_cp21

0x860d,	// (0x00053438) popup_fep_japan_predictive_window_t1_ParamLimits

0x860d,	// (0x00053438) popup_fep_japan_predictive_window_t1

0x8624,	// (0x0005344f) popup_fep_japan_predictive_window_t2_ParamLimits

0x8624,	// (0x0005344f) popup_fep_japan_predictive_window_t2

0x8657,	// (0x00053482) popup_fep_japan_predictive_window_t3_ParamLimits

0x8657,	// (0x00053482) popup_fep_japan_predictive_window_t3

0x0002,

0xf73a,	// (0x0005a565) popup_fep_japan_predictive_window_t_ParamLimits

0xf73a,	// (0x0005a565) popup_fep_japan_predictive_window_t

0x727d,	// (0x000520a8) bg_popup_sub_pane_cp23

0x868e,	// (0x000534b9) listscroll_japin_cand_pane

0x8696,	// (0x000534c1) popup_fep_japan_candidate_window_t1

0x86a4,	// (0x000534cf) candidate_pane_ParamLimits

0x86a4,	// (0x000534cf) candidate_pane

0x86b6,	// (0x000534e1) scroll_pane_cp30

0x86c0,	// (0x000534eb) list_single_popup_jap_candidate_pane_ParamLimits

0x86c0,	// (0x000534eb) list_single_popup_jap_candidate_pane

0x727d,	// (0x000520a8) list_highlight_pane_cp30

0x86d4,	// (0x000534ff) list_single_popup_jap_candidate_pane_t1

0x86e3,	// (0x0005350e) level_1_signal

0x86f0,	// (0x0005351b) level_2_signal

0x86fd,	// (0x00053528) level_3_signal

0x870a,	// (0x00053535) level_4_signal

0x8717,	// (0x00053542) level_5_signal

0x8724,	// (0x0005354f) level_6_signal

0x8731,	// (0x0005355c) level_7_signal

0x86e3,	// (0x0005350e) level_1_battery

0x86f0,	// (0x0005351b) level_2_battery

0x86fd,	// (0x00053528) level_3_battery

0x870a,	// (0x00053535) level_4_battery

0x8717,	// (0x00053542) level_5_battery

0x8724,	// (0x0005354f) level_6_battery

0x8731,	// (0x0005355c) level_7_battery

0x8756,	// (0x00053581) list_menu_pane_ParamLimits

0x8756,	// (0x00053581) list_menu_pane

0x8767,	// (0x00053592) scroll_pane_cp25_ParamLimits

0x8767,	// (0x00053592) scroll_pane_cp25

0x8780,	// (0x000535ab) list_double2_graphic_pane_cp2_ParamLimits

0x8780,	// (0x000535ab) list_double2_graphic_pane_cp2

0x8780,	// (0x000535ab) list_double2_large_graphic_pane_cp2_ParamLimits

0x8780,	// (0x000535ab) list_double2_large_graphic_pane_cp2

0x8780,	// (0x000535ab) list_double2_pane_cp2_ParamLimits

0x8780,	// (0x000535ab) list_double2_pane_cp2

0x8780,	// (0x000535ab) list_double_graphic_pane_cp2_ParamLimits

0x8780,	// (0x000535ab) list_double_graphic_pane_cp2

0x8780,	// (0x000535ab) list_double_large_graphic_pane_cp2_ParamLimits

0x8780,	// (0x000535ab) list_double_large_graphic_pane_cp2

0x8780,	// (0x000535ab) list_double_number_pane_cp2_ParamLimits

0x8780,	// (0x000535ab) list_double_number_pane_cp2

0x8780,	// (0x000535ab) list_double_pane_cp2_ParamLimits

0x8780,	// (0x000535ab) list_double_pane_cp2

0x87a6,	// (0x000535d1) list_single_2graphic_pane_cp2_ParamLimits

0x87a6,	// (0x000535d1) list_single_2graphic_pane_cp2

0x87a6,	// (0x000535d1) list_single_graphic_heading_pane_cp2_ParamLimits

0x87a6,	// (0x000535d1) list_single_graphic_heading_pane_cp2

0x87a6,	// (0x000535d1) list_single_graphic_pane_cp2_ParamLimits

0x87a6,	// (0x000535d1) list_single_graphic_pane_cp2

0x87a6,	// (0x000535d1) list_single_heading_pane_cp2_ParamLimits

0x87a6,	// (0x000535d1) list_single_heading_pane_cp2

0x87c3,	// (0x000535ee) list_single_large_graphic_pane_cp2_ParamLimits

0x87c3,	// (0x000535ee) list_single_large_graphic_pane_cp2

0x87a6,	// (0x000535d1) list_single_number_heading_pane_cp2_ParamLimits

0x87a6,	// (0x000535d1) list_single_number_heading_pane_cp2

0x87a6,	// (0x000535d1) list_single_number_pane_cp2_ParamLimits

0x87a6,	// (0x000535d1) list_single_number_pane_cp2

0x87a6,	// (0x000535d1) list_single_pane_cp2_ParamLimits

0x87a6,	// (0x000535d1) list_single_pane_cp2

0x8818,	// (0x00053643) bg_popup_sub_pane_cp22

0x59f4,	// (0x0005081f) popup_side_volume_key_window_g1

0x5a1e,	// (0x00050849) popup_side_volume_key_window_t1

0x5a3c,	// (0x00050867) volume_small_pane_cp1

0x75d9,	// (0x00052404) bg_popup_sub_pane_cp24_ParamLimits

0x75d9,	// (0x00052404) bg_popup_sub_pane_cp24

0x882e,	// (0x00053659) fep_china_uni_candidate_pane_ParamLimits

0x882e,	// (0x00053659) fep_china_uni_candidate_pane

0x8842,	// (0x0005366d) fep_china_uni_entry_pane

0x8852,	// (0x0005367d) popup_fep_china_uni_window_g1

0x886e,	// (0x00053699) fep_china_uni_entry_pane_g1

0x8878,	// (0x000536a3) fep_china_uni_entry_pane_g2

0x0001,

0xf767,	// (0x0005a592) fep_china_uni_entry_pane_g

0x8882,	// (0x000536ad) fep_entry_item_pane

0x888c,	// (0x000536b7) fep_candidate_item_pane

0x8894,	// (0x000536bf) fep_china_uni_candidate_pane_g1

0x889e,	// (0x000536c9) fep_china_uni_candidate_pane_g2

0x88a6,	// (0x000536d1) fep_china_uni_candidate_pane_g3

0x88ae,	// (0x000536d9) fep_china_uni_candidate_pane_g4

0x0003,

0xf76c,	// (0x0005a597) fep_china_uni_candidate_pane_g

0x7273,	// (0x0005209e) fep_entry_item_pane_g1

0x88b8,	// (0x000536e3) fep_entry_item_pane_t1_ParamLimits

0x88b8,	// (0x000536e3) fep_entry_item_pane_t1

0x88ce,	// (0x000536f9) fep_candidate_item_pane_t1_ParamLimits

0x88ce,	// (0x000536f9) fep_candidate_item_pane_t1

0x88e3,	// (0x0005370e) fep_candidate_item_pane_t2_ParamLimits

0x88e3,	// (0x0005370e) fep_candidate_item_pane_t2

0x0001,

0xf775,	// (0x0005a5a0) fep_candidate_item_pane_t_ParamLimits

0xf775,	// (0x0005a5a0) fep_candidate_item_pane_t

0x735d,	// (0x00052188) list_highlight_pane_cp31_ParamLimits

0x735d,	// (0x00052188) list_highlight_pane_cp31

0x88f5,	// (0x00053720) level_1_signal_lsc

0x88fe,	// (0x00053729) level_2_signal_lsc

0x8907,	// (0x00053732) level_3_signal_lsc

0x8910,	// (0x0005373b) level_4_signal_lsc

0x8919,	// (0x00053744) level_5_signal_lsc

0x8922,	// (0x0005374d) level_6_signal_lsc

0x892b,	// (0x00053756) level_7_signal_lsc

0x892b,	// (0x00053756) level_1_battery_lsc

0x8934,	// (0x0005375f) level_2_battery_lsc

0x893d,	// (0x00053768) level_3_battery_lsc

0x8946,	// (0x00053771) level_4_battery_lsc

0x894f,	// (0x0005377a) level_5_battery_lsc

0x8958,	// (0x00053783) level_6_battery_lsc

0x88f5,	// (0x00053720) level_7_battery_lsc

0x8961,	// (0x0005378c) scroll_handle_focus_pane_g1

0x896a,	// (0x00053795) scroll_handle_focus_pane_g2

0x8973,	// (0x0005379e) scroll_handle_focus_pane_g3

0x0002,

0xf77a,	// (0x0005a5a5) scroll_handle_focus_pane_g

0x5a44,	// (0x0005086f) list_single_2graphic_pane_g1_ParamLimits

0x5a44,	// (0x0005086f) list_single_2graphic_pane_g1

0x7911,	// (0x0005273c) list_single_2graphic_pane_g2_ParamLimits

0x7911,	// (0x0005273c) list_single_2graphic_pane_g2

0x78f3,	// (0x0005271e) list_single_2graphic_pane_g3_ParamLimits

0x78f3,	// (0x0005271e) list_single_2graphic_pane_g3

0x799c,	// (0x000527c7) list_single_2graphic_pane_g4_ParamLimits

0x799c,	// (0x000527c7) list_single_2graphic_pane_g4

0x0003,

0xf781,	// (0x0005a5ac) list_single_2graphic_pane_g_ParamLimits

0xf781,	// (0x0005a5ac) list_single_2graphic_pane_g

0x5a50,	// (0x0005087b) list_single_2graphic_pane_t1_ParamLimits

0x5a50,	// (0x0005087b) list_single_2graphic_pane_t1

0x79a8,	// (0x000527d3) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x79a8,	// (0x000527d3) list_double2_graphic_large_graphic_pane_g1

0x5327,	// (0x00050152) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x5327,	// (0x00050152) list_double2_graphic_large_graphic_pane_g2

0x5274,	// (0x0005009f) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x5274,	// (0x0005009f) list_double2_graphic_large_graphic_pane_g3

0x5a7e,	// (0x000508a9) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x5a7e,	// (0x000508a9) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf78a,	// (0x0005a5b5) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf78a,	// (0x0005a5b5) list_double2_graphic_large_graphic_pane_g

0x5a8a,	// (0x000508b5) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x5a8a,	// (0x000508b5) list_double2_graphic_large_graphic_pane_t1

0x5aa0,	// (0x000508cb) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x5aa0,	// (0x000508cb) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf793,	// (0x0005a5be) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf793,	// (0x0005a5be) list_double2_graphic_large_graphic_pane_t

0x8ac1,	// (0x000538ec) popup_fast_swap_window_ParamLimits

0x8ac1,	// (0x000538ec) popup_fast_swap_window

0x8adf,	// (0x0005390a) popup_side_volume_key_window

0x8afd,	// (0x00053928) stacon_top_pane

0x8b07,	// (0x00053932) status_pane_ParamLimits

0x8b07,	// (0x00053932) status_pane

0x8afd,	// (0x00053928) status_small_pane

0x727d,	// (0x000520a8) control_pane

0x727d,	// (0x000520a8) stacon_bottom_pane

0x80c1,	// (0x00052eec) scroll_pane_cp121

0x80b8,	// (0x00052ee3) set_content_pane

0x899a,	// (0x000537c5) bg_active_tab_pane_g1_cp1

0x897c,	// (0x000537a7) bg_active_tab_pane_g2_cp1

0x8985,	// (0x000537b0) bg_active_tab_pane_g3_cp1

0x899a,	// (0x000537c5) bg_passive_tab_pane_g1_cp1

0x897c,	// (0x000537a7) bg_passive_tab_pane_g2_cp1

0x8985,	// (0x000537b0) bg_passive_tab_pane_g3_cp1

0x89a3,	// (0x000537ce) bg_active_tab_pane_g1_cp2

0x897c,	// (0x000537a7) bg_active_tab_pane_g2_cp2

0x89ac,	// (0x000537d7) bg_active_tab_pane_g3_cp2

0x89a3,	// (0x000537ce) bg_passive_tab_pane_g1_cp2

0x897c,	// (0x000537a7) bg_passive_tab_pane_g2_cp2

0x89ac,	// (0x000537d7) bg_passive_tab_pane_g3_cp2

0x89b5,	// (0x000537e0) bg_active_tab_pane_g1_cp3

0x897c,	// (0x000537a7) bg_active_tab_pane_g2_cp3

0x89be,	// (0x000537e9) bg_active_tab_pane_g3_cp3

0x89b5,	// (0x000537e0) bg_passive_tab_pane_g1_cp3

0x897c,	// (0x000537a7) bg_passive_tab_pane_g2_cp3

0x89be,	// (0x000537e9) bg_passive_tab_pane_g3_cp3

0x89c7,	// (0x000537f2) bg_active_tab_pane_g1_cp4

0x897c,	// (0x000537a7) bg_active_tab_pane_g2_cp4

0x89d2,	// (0x000537fd) bg_active_tab_pane_g3_cp4

0x89c7,	// (0x000537f2) bg_passive_tab_pane_g1_cp4

0x897c,	// (0x000537a7) bg_passive_tab_pane_g2_cp4

0x89d2,	// (0x000537fd) bg_passive_tab_pane_g3_cp4

0x8a1b,	// (0x00053846) bg_active_tab_pane_g1_cp5

0x897c,	// (0x000537a7) bg_active_tab_pane_g2_cp5

0x8a24,	// (0x0005384f) bg_active_tab_pane_g3_cp5

0x8a1b,	// (0x00053846) bg_passive_tab_pane_g1_cp5

0x897c,	// (0x000537a7) bg_passive_tab_pane_g2_cp5

0x8a24,	// (0x0005384f) bg_passive_tab_pane_g3_cp5

0x8a2d,	// (0x00053858) list_set_graphic_pane_ParamLimits

0x8a2d,	// (0x00053858) list_set_graphic_pane

0x727d,	// (0x000520a8) bg_set_opt_pane_cp4

0x8a42,	// (0x0005386d) list_set_graphic_pane_g1_ParamLimits

0x8a42,	// (0x0005386d) list_set_graphic_pane_g1

0x8a4e,	// (0x00053879) list_set_graphic_pane_g2_ParamLimits

0x8a4e,	// (0x00053879) list_set_graphic_pane_g2

0x0001,

0xf798,	// (0x0005a5c3) list_set_graphic_pane_g_ParamLimits

0xf798,	// (0x0005a5c3) list_set_graphic_pane_g

0x0009,

0xfafa,	// (0x0005a925) volume_small_pane_cp_g

0x8a72,	// (0x0005389d) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x8a72,	// (0x0005389d) list_double2_large_graphic_pane_g1_cp2

0x8a80,	// (0x000538ab) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x8a80,	// (0x000538ab) list_double2_large_graphic_pane_g2_cp2

0x8a91,	// (0x000538bc) list_double2_large_graphic_pane_g3_cp2

0x8a99,	// (0x000538c4) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x8a99,	// (0x000538c4) list_double2_large_graphic_pane_t1_cp2

0x8aaf,	// (0x000538da) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x8aaf,	// (0x000538da) list_double2_large_graphic_pane_t2_cp2

0xacf7,	// (0x00055b22) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xacf7,	// (0x00055b22) list_double_large_graphic_pane_g1_cp2

0xad0a,	// (0x00055b35) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xad0a,	// (0x00055b35) list_double_large_graphic_pane_g2_cp2

0x8c25,	// (0x00053a50) list_double_large_graphic_pane_g3_cp2

0xad1b,	// (0x00055b46) list_double_large_graphic_pane_g4_cp

0xad23,	// (0x00055b4e) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xad23,	// (0x00055b4e) list_double_large_graphic_pane_t1_cp2

0xad3a,	// (0x00055b65) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xad3a,	// (0x00055b65) list_double_large_graphic_pane_t2_cp2

0x8b15,	// (0x00053940) list_double2_graphic_pane_g1_cp2_ParamLimits

0x8b15,	// (0x00053940) list_double2_graphic_pane_g1_cp2

0x8b23,	// (0x0005394e) list_double2_graphic_pane_g2_cp2_ParamLimits

0x8b23,	// (0x0005394e) list_double2_graphic_pane_g2_cp2

0x8b34,	// (0x0005395f) list_double2_graphic_pane_g3_cp2

0x8b3e,	// (0x00053969) list_double2_graphic_pane_t1_cp2_ParamLimits

0x8b3e,	// (0x00053969) list_double2_graphic_pane_t1_cp2

0x8b54,	// (0x0005397f) list_double2_graphic_pane_t2_cp2_ParamLimits

0x8b54,	// (0x0005397f) list_double2_graphic_pane_t2_cp2

0x8b66,	// (0x00053991) list_single_number_heading_pane_g1_cp2_ParamLimits

0x8b66,	// (0x00053991) list_single_number_heading_pane_g1_cp2

0x8b72,	// (0x0005399d) list_single_number_heading_pane_g2_cp2

0x8b7a,	// (0x000539a5) list_single_number_heading_pane_t1_cp2_ParamLimits

0x8b7a,	// (0x000539a5) list_single_number_heading_pane_t1_cp2

0x8b90,	// (0x000539bb) list_single_number_heading_pane_t2_cp2_ParamLimits

0x8b90,	// (0x000539bb) list_single_number_heading_pane_t2_cp2

0x8ba4,	// (0x000539cf) list_single_number_heading_pane_t3_cp2_ParamLimits

0x8ba4,	// (0x000539cf) list_single_number_heading_pane_t3_cp2

0x8b66,	// (0x00053991) list_single_heading_pane_g1_cp2_ParamLimits

0x8b66,	// (0x00053991) list_single_heading_pane_g1_cp2

0x8b72,	// (0x0005399d) list_single_heading_pane_g2_cp2

0x8b7a,	// (0x000539a5) list_single_heading_pane_t1_cp2_ParamLimits

0x8b7a,	// (0x000539a5) list_single_heading_pane_t1_cp2

0xaaf1,	// (0x0005591c) list_single_heading_pane_t2_cp2_ParamLimits

0xaaf1,	// (0x0005591c) list_single_heading_pane_t2_cp2

0xaa33,	// (0x0005585e) list_double_graphic_pane_g1_cp2_ParamLimits

0xaa33,	// (0x0005585e) list_double_graphic_pane_g1_cp2

0xaa3f,	// (0x0005586a) list_double_graphic_pane_g2_cp2_ParamLimits

0xaa3f,	// (0x0005586a) list_double_graphic_pane_g2_cp2

0xaa4e,	// (0x00055879) list_double_graphic_pane_g3_cp2

0xaa56,	// (0x00055881) list_double_graphic_pane_t1_cp2_ParamLimits

0xaa56,	// (0x00055881) list_double_graphic_pane_t1_cp2

0xaa6c,	// (0x00055897) list_double_graphic_pane_t2_cp2_ParamLimits

0xaa6c,	// (0x00055897) list_double_graphic_pane_t2_cp2

0x8c19,	// (0x00053a44) list_double_number_pane_g1_cp2_ParamLimits

0x8c19,	// (0x00053a44) list_double_number_pane_g1_cp2

0x8c25,	// (0x00053a50) list_double_number_pane_g2_cp2

0xa9f7,	// (0x00055822) list_double_number_pane_t1_cp2_ParamLimits

0xa9f7,	// (0x00055822) list_double_number_pane_t1_cp2

0xaa0b,	// (0x00055836) list_double_number_pane_t2_cp2_ParamLimits

0xaa0b,	// (0x00055836) list_double_number_pane_t2_cp2

0xaa21,	// (0x0005584c) list_double_number_pane_t3_cp2_ParamLimits

0xaa21,	// (0x0005584c) list_double_number_pane_t3_cp2

0xa8e0,	// (0x0005570b) list_single_graphic_pane_g1_cp2_ParamLimits

0xa8e0,	// (0x0005570b) list_single_graphic_pane_g1_cp2

0x8c7f,	// (0x00053aaa) list_single_graphic_pane_g2_cp2_ParamLimits

0x8c7f,	// (0x00053aaa) list_single_graphic_pane_g2_cp2

0x8c8b,	// (0x00053ab6) list_single_graphic_pane_g3_cp2

0xa8b6,	// (0x000556e1) list_single_graphic_pane_t1_cp2_ParamLimits

0xa8b6,	// (0x000556e1) list_single_graphic_pane_t1_cp2

0x8c7f,	// (0x00053aaa) list_single_number_pane_g1_cp2_ParamLimits

0x8c7f,	// (0x00053aaa) list_single_number_pane_g1_cp2

0x8c8b,	// (0x00053ab6) list_single_number_pane_g2_cp2

0xa8b6,	// (0x000556e1) list_single_number_pane_t1_cp2_ParamLimits

0xa8b6,	// (0x000556e1) list_single_number_pane_t1_cp2

0xa8cc,	// (0x000556f7) list_single_number_pane_t2_cp2_ParamLimits

0xa8cc,	// (0x000556f7) list_single_number_pane_t2_cp2

0x8a80,	// (0x000538ab) list_double2_pane_g1_cp2_ParamLimits

0x8a80,	// (0x000538ab) list_double2_pane_g1_cp2

0x8a91,	// (0x000538bc) list_double2_pane_g2_cp2

0x8bf1,	// (0x00053a1c) list_double2_pane_t1_cp2_ParamLimits

0x8bf1,	// (0x00053a1c) list_double2_pane_t1_cp2

0x8c07,	// (0x00053a32) list_double2_pane_t2_cp2_ParamLimits

0x8c07,	// (0x00053a32) list_double2_pane_t2_cp2

0x8c19,	// (0x00053a44) list_double_pane_g1_cp2_ParamLimits

0x8c19,	// (0x00053a44) list_double_pane_g1_cp2

0x8c25,	// (0x00053a50) list_double_pane_g2_cp2

0x8c2d,	// (0x00053a58) list_double_pane_t1_cp2_ParamLimits

0x8c2d,	// (0x00053a58) list_double_pane_t1_cp2

0x8c43,	// (0x00053a6e) list_double_pane_t2_cp2_ParamLimits

0x8c43,	// (0x00053a6e) list_double_pane_t2_cp2

0x8c6f,	// (0x00053a9a) list_single_pane_cp2_g3

0x8c7f,	// (0x00053aaa) list_single_pane_g1_cp2_ParamLimits

0x8c7f,	// (0x00053aaa) list_single_pane_g1_cp2

0x8c8b,	// (0x00053ab6) list_single_pane_g2_cp2

0x8c93,	// (0x00053abe) list_single_pane_t1_cp2_ParamLimits

0x8c93,	// (0x00053abe) list_single_pane_t1_cp2

0x8cab,	// (0x00053ad6) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x8cab,	// (0x00053ad6) list_single_large_graphic_pane_g1_cp2

0x8cb9,	// (0x00053ae4) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x8cb9,	// (0x00053ae4) list_single_large_graphic_pane_g2_cp2

0x8cc5,	// (0x00053af0) list_single_large_graphic_pane_g3_cp2

0x8ccd,	// (0x00053af8) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x8ccd,	// (0x00053af8) list_single_large_graphic_pane_g4_cp1

0x8ce7,	// (0x00053b12) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x8ce7,	// (0x00053b12) list_single_large_graphic_pane_t1_cp2

0xa880,	// (0x000556ab) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa880,	// (0x000556ab) list_single_graphic_heading_pane_g1_cp2

0xa84d,	// (0x00055678) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa84d,	// (0x00055678) list_single_graphic_heading_pane_g4_cp2

0x8c8b,	// (0x00053ab6) list_single_graphic_heading_pane_g5_cp2

0xa88c,	// (0x000556b7) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa88c,	// (0x000556b7) list_single_graphic_heading_pane_t1_cp2

0xa8a2,	// (0x000556cd) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa8a2,	// (0x000556cd) list_single_graphic_heading_pane_t2_cp2

0xa841,	// (0x0005566c) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa841,	// (0x0005566c) list_single_2graphic_pane_g1_cp2

0xa84d,	// (0x00055678) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa84d,	// (0x00055678) list_single_2graphic_pane_g2_cp2

0x8c8b,	// (0x00053ab6) list_single_2graphic_pane_g3_cp2

0xa85e,	// (0x00055689) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa85e,	// (0x00055689) list_single_2graphic_pane_g4_cp2

0xa86a,	// (0x00055695) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa86a,	// (0x00055695) list_single_2graphic_pane_t1_cp2

0x7273,	// (0x0005209e) list_highlight_pane_g10_cp1

0xa419,	// (0x00055244) list_highlight_pane_g1_cp1

0xa421,	// (0x0005524c) list_highlight_pane_g2_cp1

0xa429,	// (0x00055254) list_highlight_pane_g3_cp1

0xa431,	// (0x0005525c) list_highlight_pane_g4_cp1

0xa439,	// (0x00055264) list_highlight_pane_g5_cp1

0xa441,	// (0x0005526c) list_highlight_pane_g6_cp1

0xa449,	// (0x00055274) list_highlight_pane_g7_cp1

0xa451,	// (0x0005527c) list_highlight_pane_g8_cp1

0xa459,	// (0x00055284) list_highlight_pane_g9_cp1

0xa339,	// (0x00055164) form_field_slider_pane_t3

0xa347,	// (0x00055172) form_field_slider_pane_t4

0xa355,	// (0x00055180) slider_form_pane_ParamLimits

0xa355,	// (0x00055180) slider_form_pane

0x727d,	// (0x000520a8) control_abbreviations

0x727d,	// (0x000520a8) control_conventions

0x727d,	// (0x000520a8) control_definitions

0x727d,	// (0x000520a8) format_table_attribute

0xab47,	// (0x00055972) bg_popup_preview_window_pane_g9

0x727d,	// (0x000520a8) format_table_data2

0x727d,	// (0x000520a8) format_table_data3

0x727d,	// (0x000520a8) format_table_data_example

0x0008,

0x727d,	// (0x000520a8) intro_purpose

0xf92d,	// (0x0005a758) bg_popup_preview_window_pane_g

0x727d,	// (0x000520a8) texts_category

0x727d,	// (0x000520a8) texts_graphics

0x8cfd,	// (0x00053b28) text_digital

0x8d0c,	// (0x00053b37) text_primary

0x8d1b,	// (0x00053b46) text_primary_small

0x8d2a,	// (0x00053b55) text_secondary

0x8d39,	// (0x00053b64) text_title

0xb2e3,	// (0x0005610e) bg_passive_tab_pane_g1_cp3_srt

0x897c,	// (0x000537a7) bg_passive_tab_pane_g2_cp3_srt

0xb2ec,	// (0x00056117) bg_passive_tab_pane_g3_cp3_srt

0x735d,	// (0x00052188) bg_active_tab_pane_cp3_srt_ParamLimits

0x735d,	// (0x00052188) bg_active_tab_pane_cp3_srt

0xb2f5,	// (0x00056120) tabs_4_active_pane_srt_g1

0xb2fd,	// (0x00056128) tabs_4_active_pane_srt_t1_ParamLimits

0xb2fd,	// (0x00056128) tabs_4_active_pane_srt_t1

0xb2e3,	// (0x0005610e) bg_active_tab_pane_g1_cp3_copy1

0x897c,	// (0x000537a7) bg_active_tab_pane_g2_cp3_copy1

0xb2ec,	// (0x00056117) bg_active_tab_pane_g3_cp3_copy1

0x735d,	// (0x00052188) tabs_2_long_active_pane_srt_ParamLimits

0x735d,	// (0x00052188) tabs_2_long_active_pane_srt

0x735d,	// (0x00052188) tabs_2_long_passive_pane_srt_ParamLimits

0x735d,	// (0x00052188) tabs_2_long_passive_pane_srt

0x82d5,	// (0x00053100) bg_passive_tab_pane_cp4_srt_ParamLimits

0x82d5,	// (0x00053100) bg_passive_tab_pane_cp4_srt

0xaf97,	// (0x00055dc2) bg_passive_tab_pane_g1_cp4_srt

0x897c,	// (0x000537a7) bg_passive_tab_pane_g2_cp4_srt

0xafa0,	// (0x00055dcb) bg_passive_tab_pane_g3_cp4_srt

0x82b4,	// (0x000530df) bg_active_tab_pane_cp4_srt_ParamLimits

0x82b4,	// (0x000530df) bg_active_tab_pane_cp4_srt

0xafa9,	// (0x00055dd4) tabs_2_long_active_pane_srt_t1_ParamLimits

0xafa9,	// (0x00055dd4) tabs_2_long_active_pane_srt_t1

0xaf97,	// (0x00055dc2) bg_active_tab_pane_g1_cp4_srt

0x897c,	// (0x000537a7) bg_active_tab_pane_g2_cp4_srt

0xafa0,	// (0x00055dcb) bg_active_tab_pane_g3_cp4_srt

0x75d9,	// (0x00052404) tabs_3_long_active_pane_srt_ParamLimits

0x75d9,	// (0x00052404) tabs_3_long_active_pane_srt

0x75d9,	// (0x00052404) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x75d9,	// (0x00052404) tabs_3_long_passive_pane_cp_srt

0x75d9,	// (0x00052404) tabs_3_long_passive_pane_srt_ParamLimits

0x75d9,	// (0x00052404) tabs_3_long_passive_pane_srt

0x82d5,	// (0x00053100) bg_passive_tab_pane_cp5_srt_ParamLimits

0x82d5,	// (0x00053100) bg_passive_tab_pane_cp5_srt

0x8a1b,	// (0x00053846) bg_passive_tab_pane_g1_cp5_srt

0x897c,	// (0x000537a7) bg_passive_tab_pane_g2_cp5_srt

0x8a24,	// (0x0005384f) bg_passive_tab_pane_g3_cp5_srt

0x82b4,	// (0x000530df) bg_active_tab_pane_cp5_srt_ParamLimits

0x82b4,	// (0x000530df) bg_active_tab_pane_cp5_srt

0xaf85,	// (0x00055db0) tabs_3_long_active_pane_srt_t1_ParamLimits

0xaf85,	// (0x00055db0) tabs_3_long_active_pane_srt_t1

0x8a1b,	// (0x00053846) bg_active_tab_pane_g1_cp5_srt

0x897c,	// (0x000537a7) bg_active_tab_pane_g2_cp5_srt

0x8a24,	// (0x0005384f) bg_active_tab_pane_g3_cp5_srt

0xaf77,	// (0x00055da2) navi_text_pane_srt_t1

0xaf6f,	// (0x00055d9a) navi_icon_pane_srt_g1

0x8f10,	// (0x00053d3b) midp_editing_number_pane_srt

0x8d48,	// (0x00053b73) midp_ticker_pane_srt

0x8f18,	// (0x00053d43) midp_ticker_pane_srt_g1

0x8f20,	// (0x00053d4b) midp_ticker_pane_srt_g2

0x0001,

0xf7b7,	// (0x0005a5e2) midp_ticker_pane_srt_g

0x8f28,	// (0x00053d53) midp_ticker_pane_srt_t1

0xaf60,	// (0x00055d8b) midp_editing_number_pane_t1_copy1

0x8d50,	// (0x00053b7b) listscroll_midp_pane

0x8d50,	// (0x00053b7b) midp_form_pane

0x8dbe,	// (0x00053be9) midp_info_popup_window_ParamLimits

0x8dbe,	// (0x00053be9) midp_info_popup_window

0x8196,	// (0x00052fc1) bg_popup_sub_pane_cp50_ParamLimits

0x8196,	// (0x00052fc1) bg_popup_sub_pane_cp50

0xa080,	// (0x00054eab) listscroll_midp_info_pane_ParamLimits

0xa080,	// (0x00054eab) listscroll_midp_info_pane

0xa068,	// (0x00054e93) listscroll_form_midp_pane_ParamLimits

0xa068,	// (0x00054e93) listscroll_form_midp_pane

0xa074,	// (0x00054e9f) scroll_bar_cp050

0xa048,	// (0x00054e73) list_midp_pane

0xbd3c,	// (0x00056b67) signal_pane_g2_cp

0x9f82,	// (0x00054dad) listscroll_midp_info_pane_t1_ParamLimits

0x9f82,	// (0x00054dad) listscroll_midp_info_pane_t1

0x9f9a,	// (0x00054dc5) listscroll_midp_info_pane_t2_ParamLimits

0x9f9a,	// (0x00054dc5) listscroll_midp_info_pane_t2

0x9fd8,	// (0x00054e03) listscroll_midp_info_pane_t3_ParamLimits

0x9fd8,	// (0x00054e03) listscroll_midp_info_pane_t3

0xa012,	// (0x00054e3d) listscroll_midp_info_pane_t4_ParamLimits

0xa012,	// (0x00054e3d) listscroll_midp_info_pane_t4

0x0003,

0xf868,	// (0x0005a693) listscroll_midp_info_pane_t_ParamLimits

0xf868,	// (0x0005a693) listscroll_midp_info_pane_t

0x8260,	// (0x0005308b) scroll_pane_cp21

0x9f1c,	// (0x00054d47) form_midp_field_choice_group_pane

0x9f25,	// (0x00054d50) form_midp_field_text_pane

0x9f68,	// (0x00054d93) form_midp_field_time_pane

0x9f70,	// (0x00054d9b) form_midp_gauge_slider_pane

0x9f79,	// (0x00054da4) form_midp_gauge_wait_pane

0x727d,	// (0x000520a8) form_midp_image_pane

0x5fa9,	// (0x00050dd4) list_single_midp_pane_ParamLimits

0x5fa9,	// (0x00050dd4) list_single_midp_pane

0x9ee0,	// (0x00054d0b) form_midp_field_text_pane_t1

0x9cf4,	// (0x00054b1f) input_focus_pane_cp050

0x9f0b,	// (0x00054d36) list_midp_form_text_pane

0x9eaf,	// (0x00054cda) form_midp_field_choice_group_pane_t1

0x9ebd,	// (0x00054ce8) input_focus_pane_cp051

0x9ed1,	// (0x00054cfc) list_midp_choice_pane

0x727d,	// (0x000520a8) status_idle_pane

0x9e93,	// (0x00054cbe) form_midp_field_time_pane_t1

0x7273,	// (0x0005209e) wait_anim_pane_g2_copy1

0x9ea1,	// (0x00054ccc) form_midp_field_time_pane_t2

0x0001,

0x8e6e,	// (0x00053c99) aid_navinavi_width_2_pane

0xf863,	// (0x0005a68e) form_midp_field_time_pane_t

0x727d,	// (0x000520a8) input_focus_pane_cp052

0x727d,	// (0x000520a8) bg_input_focus_pane_cp040

0x9e53,	// (0x00054c7e) form_midp_gauge_slider_pane_t1

0x9e61,	// (0x00054c8c) form_midp_gauge_slider_pane_t2

0x9e6f,	// (0x00054c9a) form_midp_gauge_slider_pane_t3

0x9e7d,	// (0x00054ca8) form_midp_gauge_slider_pane_t4

0x0003,

0xf85a,	// (0x0005a685) form_midp_gauge_slider_pane_t

0x9e8b,	// (0x00054cb6) form_midp_slider_pane

0x735d,	// (0x00052188) bg_input_focus_pane_cp041_ParamLimits

0x735d,	// (0x00052188) bg_input_focus_pane_cp041

0x9e20,	// (0x00054c4b) form_midp_gauge_wait_pane_t1_ParamLimits

0x9e20,	// (0x00054c4b) form_midp_gauge_wait_pane_t1

0x9e32,	// (0x00054c5d) form_midp_gauge_wait_pane_t2_ParamLimits

0x9e32,	// (0x00054c5d) form_midp_gauge_wait_pane_t2

0x0001,

0xf855,	// (0x0005a680) form_midp_gauge_wait_pane_t_ParamLimits

0xf855,	// (0x0005a680) form_midp_gauge_wait_pane_t

0x9e44,	// (0x00054c6f) form_midp_wait_pane_ParamLimits

0x9e44,	// (0x00054c6f) form_midp_wait_pane

0x9de8,	// (0x00054c13) form_midp_image_pane_g1

0x9df1,	// (0x00054c1c) form_midp_image_pane_t1

0x9e00,	// (0x00054c2b) form_midp_image_pane_t2

0x9e0f,	// (0x00054c3a) form_midp_image_pane_t3

0x0002,

0xf84e,	// (0x0005a679) form_midp_image_pane_t

0x9ddf,	// (0x00054c0a) list_single_midp_pane_g1

0x5f9a,	// (0x00050dc5) list_single_midp_pane_t1

0x9dc5,	// (0x00054bf0) list_midp_form_item_pane_ParamLimits

0x9dc5,	// (0x00054bf0) list_midp_form_item_pane

0x8e16,	// (0x00053c41) list_midp_form_item_pane_t1

0x8e25,	// (0x00053c50) midp_ticker_pane_g1

0x8e31,	// (0x00053c5c) midp_ticker_pane_g2

0x0001,

0xf79d,	// (0x0005a5c8) midp_ticker_pane_g

0x8e3d,	// (0x00053c68) midp_ticker_pane_t1

0xb1df,	// (0x0005600a) midp_editing_number_pane_t1

0xb1bd,	// (0x00055fe8) midp_editing_number_pane

0xb1cc,	// (0x00055ff7) midp_ticker_pane

0xaf50,	// (0x00055d7b) ai_message_heading_pane

0x727d,	// (0x000520a8) bg_popup_window_pane_cp14

0xaf58,	// (0x00055d83) listscroll_ai_message_pane

0xaed6,	// (0x00055d01) ai_message_heading_pane_g1_ParamLimits

0xaed6,	// (0x00055d01) ai_message_heading_pane_g1

0xaee2,	// (0x00055d0d) ai_message_heading_pane_g2_ParamLimits

0xaee2,	// (0x00055d0d) ai_message_heading_pane_g2

0xaef0,	// (0x00055d1b) ai_message_heading_pane_g3_ParamLimits

0xaef0,	// (0x00055d1b) ai_message_heading_pane_g3

0xaefc,	// (0x00055d27) ai_message_heading_pane_g4_ParamLimits

0xaefc,	// (0x00055d27) ai_message_heading_pane_g4

0x0003,

0xf98f,	// (0x0005a7ba) ai_message_heading_pane_g_ParamLimits

0xf98f,	// (0x0005a7ba) ai_message_heading_pane_g

0xaf08,	// (0x00055d33) ai_message_heading_pane_t1_ParamLimits

0xaf08,	// (0x00055d33) ai_message_heading_pane_t1

0xaf22,	// (0x00055d4d) ai_message_heading_pane_t2_ParamLimits

0xaf22,	// (0x00055d4d) ai_message_heading_pane_t2

0x0001,

0xf998,	// (0x0005a7c3) ai_message_heading_pane_t_ParamLimits

0xf998,	// (0x0005a7c3) ai_message_heading_pane_t

0xaf36,	// (0x00055d61) bg_popup_heading_pane_cp1_ParamLimits

0xaf36,	// (0x00055d61) bg_popup_heading_pane_cp1

0xaec4,	// (0x00055cef) list_ai_message_pane_ParamLimits

0xaec4,	// (0x00055cef) list_ai_message_pane

0x8260,	// (0x0005308b) scroll_pane_cp10

0xae60,	// (0x00055c8b) list_ai_message_pane_g1

0xae68,	// (0x00055c93) list_ai_message_pane_g2

0x0001,

0xf96c,	// (0x0005a797) list_ai_message_pane_g

0xae70,	// (0x00055c9b) list_ai_message_pane_t1_ParamLimits

0xae70,	// (0x00055c9b) list_ai_message_pane_t1

0xae85,	// (0x00055cb0) list_ai_message_pane_t2_ParamLimits

0xae85,	// (0x00055cb0) list_ai_message_pane_t2

0xae9a,	// (0x00055cc5) list_ai_message_pane_t3_ParamLimits

0xae9a,	// (0x00055cc5) list_ai_message_pane_t3

0xaeaf,	// (0x00055cda) list_ai_message_pane_t4_ParamLimits

0xaeaf,	// (0x00055cda) list_ai_message_pane_t4

0x0003,

0xf971,	// (0x0005a79c) list_ai_message_pane_t_ParamLimits

0xf971,	// (0x0005a79c) list_ai_message_pane_t

0xae49,	// (0x00055c74) cell_ai_soft_ind_pane_ParamLimits

0xae49,	// (0x00055c74) cell_ai_soft_ind_pane

0x8e4f,	// (0x00053c7a) cell_ai_soft_ind_pane_g1_ParamLimits

0x8e4f,	// (0x00053c7a) cell_ai_soft_ind_pane_g1

0x727d,	// (0x000520a8) grid_highlight_cp1

0x8e5c,	// (0x00053c87) text_secondary_cp56_ParamLimits

0x8e5c,	// (0x00053c87) text_secondary_cp56

0xae1e,	// (0x00055c49) example_general_pane_ParamLimits

0xae1e,	// (0x00055c49) example_general_pane

0xae2a,	// (0x00055c55) example_parent_pane_g1_ParamLimits

0xae2a,	// (0x00055c55) example_parent_pane_g1

0xae36,	// (0x00055c61) example_parent_pane_t1_ParamLimits

0xae36,	// (0x00055c61) example_parent_pane_t1

0x9489,	// (0x000542b4) popup_preview_text_window_ParamLimits

0x9489,	// (0x000542b4) popup_preview_text_window

0x8c77,	// (0x00053aa2) list_single_pane_cp2_g4

0x768f,	// (0x000524ba) bg_popup_preview_window_pane_ParamLimits

0x768f,	// (0x000524ba) bg_popup_preview_window_pane

0xab51,	// (0x0005597c) popup_preview_text_window_t1_ParamLimits

0xab51,	// (0x0005597c) popup_preview_text_window_t1

0xab6f,	// (0x0005599a) popup_preview_text_window_t2_ParamLimits

0xab6f,	// (0x0005599a) popup_preview_text_window_t2

0xabb8,	// (0x000559e3) popup_preview_text_window_t3_ParamLimits

0xabb8,	// (0x000559e3) popup_preview_text_window_t3

0xabfd,	// (0x00055a28) popup_preview_text_window_t4_ParamLimits

0xabfd,	// (0x00055a28) popup_preview_text_window_t4

0x0004,

0xf940,	// (0x0005a76b) popup_preview_text_window_t_ParamLimits

0xf940,	// (0x0005a76b) popup_preview_text_window_t

0xac7b,	// (0x00055aa6) scroll_pane_cp11

0x9c02,	// (0x00054a2d) bg_popup_preview_window_pane_g1

0xab05,	// (0x00055930) bg_popup_preview_window_pane_g2

0xab0f,	// (0x0005593a) bg_popup_preview_window_pane_g3

0xab19,	// (0x00055944) bg_popup_preview_window_pane_g4

0xab23,	// (0x0005594e) bg_popup_preview_window_pane_g5

0xab2d,	// (0x00055958) bg_popup_preview_window_pane_g6

0xab35,	// (0x00055960) bg_popup_preview_window_pane_g7

0xab3d,	// (0x00055968) bg_popup_preview_window_pane_g8

0x4c2c,	// (0x0004fa57) aid_popup_width_pane

0x9465,	// (0x00054290) popup_midp_note_alarm_window_ParamLimits

0x9465,	// (0x00054290) popup_midp_note_alarm_window

0x80d2,	// (0x00052efd) data_form_pane_ParamLimits

0x561d,	// (0x00050448) form_field_data_pane_g1

0x5627,	// (0x00050452) form_field_data_pane_t1_ParamLimits

0x80de,	// (0x00052f09) input_focus_pane_ParamLimits

0x80ec,	// (0x00052f17) data_form_wide_pane_ParamLimits

0x5641,	// (0x0005046c) form_field_data_wide_pane_g1

0x564d,	// (0x00050478) form_field_data_wide_pane_t1_ParamLimits

0x7e4f,	// (0x00052c7a) input_focus_pane_cp6_ParamLimits

0x820b,	// (0x00053036) input_popup_find_pane_g1_ParamLimits

0x820b,	// (0x00053036) input_popup_find_pane_g1

0x58a1,	// (0x000506cc) aid_navi_side_left_pane

0x58b6,	// (0x000506e1) aid_navi_side_right_pane

0xa514,	// (0x0005533f) bg_popup_window_pane_cp30_ParamLimits

0xa514,	// (0x0005533f) bg_popup_window_pane_cp30

0xa58e,	// (0x000553b9) popup_midp_note_alarm_window_g1_ParamLimits

0xa58e,	// (0x000553b9) popup_midp_note_alarm_window_g1

0xa5be,	// (0x000553e9) popup_midp_note_alarm_window_t1_ParamLimits

0xa5be,	// (0x000553e9) popup_midp_note_alarm_window_t1

0xa65f,	// (0x0005548a) popup_midp_note_alarm_window_t2_ParamLimits

0xa65f,	// (0x0005548a) popup_midp_note_alarm_window_t2

0xa70d,	// (0x00055538) popup_midp_note_alarm_window_t3_ParamLimits

0xa70d,	// (0x00055538) popup_midp_note_alarm_window_t3

0xa73f,	// (0x0005556a) popup_midp_note_alarm_window_t4_ParamLimits

0xa73f,	// (0x0005556a) popup_midp_note_alarm_window_t4

0xa765,	// (0x00055590) popup_midp_note_alarm_window_t5_ParamLimits

0xa765,	// (0x00055590) popup_midp_note_alarm_window_t5

0x000a,

0xf8dd,	// (0x0005a708) popup_midp_note_alarm_window_t_ParamLimits

0xf8dd,	// (0x0005a708) popup_midp_note_alarm_window_t

0xa811,	// (0x0005563c) wait_bar_pane_cp1_ParamLimits

0xa811,	// (0x0005563c) wait_bar_pane_cp1

0x727d,	// (0x000520a8) wait_anim_pane_copy1

0x727d,	// (0x000520a8) wait_border_pane_copy1

0xa1f9,	// (0x00055024) wait_border_pane_g1_copy1

0x5667,	// (0x00050492) form_field_popup_pane_g1

0x566f,	// (0x0005049a) form_field_popup_pane_t1_ParamLimits

0x80de,	// (0x00052f09) input_focus_pane_cp7_ParamLimits

0x8118,	// (0x00052f43) list_form_pane_ParamLimits

0x5689,	// (0x000504b4) form_field_popup_wide_pane_g1

0x5691,	// (0x000504bc) form_field_popup_wide_pane_t1_ParamLimits

0x80de,	// (0x00052f09) input_focus_pane_cp8_ParamLimits

0x8124,	// (0x00052f4f) list_form_wide_pane_ParamLimits

0xb370,	// (0x0005619b) aid_size_cell_graphic_pane

0x571d,	// (0x00050548) data_form_pane_t1_ParamLimits

0x6238,	// (0x00051063) data_form_wide_pane_t1_ParamLimits

0x97b0,	// (0x000545db) bg_status_flat_pane

0x72bd,	// (0x000520e8) title_pane_t1_ParamLimits

0x7325,	// (0x00052150) title_pane_t2_ParamLimits

0x734b,	// (0x00052176) title_pane_t3_ParamLimits

0xf59b,	// (0x0005a3c6) title_pane_t_ParamLimits

0x86e3,	// (0x0005350e) level_1_signal_ParamLimits

0x86f0,	// (0x0005351b) level_2_signal_ParamLimits

0x86fd,	// (0x00053528) level_3_signal_ParamLimits

0x870a,	// (0x00053535) level_4_signal_ParamLimits

0x8717,	// (0x00053542) level_5_signal_ParamLimits

0x8724,	// (0x0005354f) level_6_signal_ParamLimits

0x8731,	// (0x0005355c) level_7_signal_ParamLimits

0x86e3,	// (0x0005350e) level_1_battery_ParamLimits

0x86f0,	// (0x0005351b) level_2_battery_ParamLimits

0x86fd,	// (0x00053528) level_3_battery_ParamLimits

0x870a,	// (0x00053535) level_4_battery_ParamLimits

0x8717,	// (0x00053542) level_5_battery_ParamLimits

0x8724,	// (0x0005354f) level_6_battery_ParamLimits

0x8731,	// (0x0005355c) level_7_battery_ParamLimits

0xa419,	// (0x00055244) bg_status_flat_pane_g1

0xa421,	// (0x0005524c) bg_status_flat_pane_g2

0xa429,	// (0x00055254) bg_status_flat_pane_g3

0xa431,	// (0x0005525c) bg_status_flat_pane_g4

0xa439,	// (0x00055264) bg_status_flat_pane_g5

0xa441,	// (0x0005526c) bg_status_flat_pane_g6

0xa449,	// (0x00055274) bg_status_flat_pane_g7

0x7373,	// (0x0005219e) tabs_3_active_pane_t1_ParamLimits

0x7373,	// (0x0005219e) tabs_3_passive_pane_t1_ParamLimits

0x738d,	// (0x000521b8) tabs_4_active_pane_t1_ParamLimits

0x738d,	// (0x000521b8) tabs_4_1_passive_pane_t1_ParamLimits

0x82a2,	// (0x000530cd) tabs_2_active_pane_t1_ParamLimits

0x82a2,	// (0x000530cd) tabs_2_passive_pane_t1_ParamLimits

0x82b4,	// (0x000530df) bg_active_tab_pane_cp4_ParamLimits

0x82c2,	// (0x000530ed) tabs_2_long_active_pane_t1_ParamLimits

0x82d5,	// (0x00053100) bg_passive_tab_pane_cp4_ParamLimits

0x5ee1,	// (0x00050d0c) list_single_midp_graphic_pane_t1_ParamLimits

0x82b4,	// (0x000530df) bg_active_tab_pane_cp5_ParamLimits

0x82e1,	// (0x0005310c) tabs_3_long_active_pane_t1_ParamLimits

0x82d5,	// (0x00053100) bg_passive_tab_pane_cp5_ParamLimits

0x5ee1,	// (0x00050d0c) list_single_midp_graphic_pane_t1

0x97b0,	// (0x000545db) bg_status_flat_pane_ParamLimits

0x987b,	// (0x000546a6) indicator_pane_cp2_ParamLimits

0x987b,	// (0x000546a6) indicator_pane_cp2

0x99bd,	// (0x000547e8) navi_pane_srt_ParamLimits

0x99bd,	// (0x000547e8) navi_pane_srt

0x99e1,	// (0x0005480c) popup_clock_digital_analogue_window_cp1

0x743d,	// (0x00052268) indicator_pane_t1

0x8d48,	// (0x00053b73) copy_highlight_pane

0x8d48,	// (0x00053b73) cursor_graphics_pane

0x8d48,	// (0x00053b73) graphic_within_text_pane

0x8d48,	// (0x00053b73) link_highlight_pane

0xac3e,	// (0x00055a69) popup_preview_text_window_t5_ParamLimits

0xac3e,	// (0x00055a69) popup_preview_text_window_t5

0x8e78,	// (0x00053ca3) cursor_digital_pane

0x8e78,	// (0x00053ca3) cursor_primary_pane

0x8e89,	// (0x00053cb4) cursor_primary_small_pane

0x8e91,	// (0x00053cbc) cursor_secondary_pane

0x8e99,	// (0x00053cc4) cursor_title_pane

0x8e78,	// (0x00053ca3) link_highlight_digital_pane

0x8e80,	// (0x00053cab) link_highlight_primary_pane

0x8e89,	// (0x00053cb4) link_highlight_primary_small_pane

0x8e91,	// (0x00053cbc) link_highlight_secondary_pane

0x8e99,	// (0x00053cc4) link_highlight_title_pane

0x8e78,	// (0x00053ca3) copy_highlight_digital_pane

0x8e78,	// (0x00053ca3) copy_highlight_primary_pane

0x8e89,	// (0x00053cb4) copy_highlight_primary_small_pane

0x8e91,	// (0x00053cbc) copy_highlight_secondary_pane

0x8e99,	// (0x00053cc4) copy_highlight_title_pane

0x8e91,	// (0x00053cbc) graphic_text_digital_pane

0xa4b7,	// (0x000552e2) graphic_text_primary_pane

0xa4c0,	// (0x000552eb) graphic_text_primary_small_pane

0x8e89,	// (0x00053cb4) graphic_text_secondary_pane

0x8e78,	// (0x00053ca3) graphic_text_title_pane

0x8ea1,	// (0x00053ccc) cursor_primary_pane_g1

0xa4a9,	// (0x000552d4) cursor_text_primary_t1

0xa491,	// (0x000552bc) cursor_primary_small_pane_g1

0xa49b,	// (0x000552c6) cursor_text_primary_small_t1

0xa479,	// (0x000552a4) cursor_primary_small_pane_g1_copy1

0xa483,	// (0x000552ae) cursor_text_primary_small_t1_copy1

0xa461,	// (0x0005528c) cursor_text_title_t1

0xa46f,	// (0x0005529a) cursor_title_pane_g1

0x8ea1,	// (0x00053ccc) cursor_digital_pane_g1

0x8eab,	// (0x00053cd6) cursor_text_digital_t1

0x8eb9,	// (0x00053ce4) link_highlight_primary_pane_g1

0xa40a,	// (0x00055235) link_highlight_primary_pane_t1

0x8eb9,	// (0x00053ce4) link_highlight_primary_small_pane_g1

0x8ec1,	// (0x00053cec) link_highlight_primary_small_pane_t1

0x8ed0,	// (0x00053cfb) link_highlight_secondary_pane_g1

0x8ed8,	// (0x00053d03) link_highlight_secondary_pane_t1

0xa37e,	// (0x000551a9) link_highlight_title_pane_g1

0xa386,	// (0x000551b1) link_highlight_title_pane_t1

0xa367,	// (0x00055192) link_highlight_digital_pane_g1

0xa36f,	// (0x0005519a) link_highlight_digital_pane_t1

0xa22f,	// (0x0005505a) copy_highlight_primary_pane_g1

0xa246,	// (0x00055071) copy_highlight_primary_pane_t1

0xa22f,	// (0x0005505a) copy_highlight_primary_small_pane_g1

0xa237,	// (0x00055062) copy_highlight_primary_small_pane_t1

0x8ee7,	// (0x00053d12) copy_highlight_secondary_pane_g1

0x8eef,	// (0x00053d1a) copy_highlight_secondary_pane_t1

0xa218,	// (0x00055043) copy_highlight_title_pane_g1

0xa220,	// (0x0005504b) copy_highlight_title_pane_t1

0xa22f,	// (0x0005505a) copy_highlight_digital_pane_g1

0xb540,	// (0x0005636b) copy_highlight_digital_pane_t1

0xb494,	// (0x000562bf) graphic_text_primary_pane_g1

0xb524,	// (0x0005634f) graphic_text_primary_pane_t1

0xb532,	// (0x0005635d) graphic_text_primary_pane_t2

0x0001,

0xfa0c,	// (0x0005a837) graphic_text_primary_pane_t

0xb500,	// (0x0005632b) graphic_text_primary_small_pane_g1

0xb508,	// (0x00056333) graphic_text_primary_small_pane_t1

0xb516,	// (0x00056341) graphic_text_primary_small_pane_t2

0x0001,

0xfa07,	// (0x0005a832) graphic_text_primary_small_pane_t

0xb4dc,	// (0x00056307) graphic_text_secondary_pane_g1

0xb4e4,	// (0x0005630f) graphic_text_secondary_pane_t1

0xb4f2,	// (0x0005631d) graphic_text_secondary_pane_t2

0x0001,

0xfa02,	// (0x0005a82d) graphic_text_secondary_pane_t

0xb4b8,	// (0x000562e3) graphic_text_title_pane_g1

0xb4c0,	// (0x000562eb) graphic_text_title_pane_t1

0xb4ce,	// (0x000562f9) graphic_text_title_pane_t2

0x0001,

0xf9fd,	// (0x0005a828) graphic_text_title_pane_t

0xb494,	// (0x000562bf) graphic_text_digital_pane_g1

0xb49c,	// (0x000562c7) graphic_text_digital_pane_t1

0xb4aa,	// (0x000562d5) graphic_text_digital_pane_t2

0x0001,

0xf9f8,	// (0x0005a823) graphic_text_digital_pane_t

0x735d,	// (0x00052188) navi_icon_pane_srt_ParamLimits

0x735d,	// (0x00052188) navi_icon_pane_srt

0x727d,	// (0x000520a8) navi_midp_pane_srt

0x727d,	// (0x000520a8) navi_navi_pane_srt

0x735d,	// (0x00052188) navi_text_pane_srt_ParamLimits

0x735d,	// (0x00052188) navi_text_pane_srt

0xb45f,	// (0x0005628a) navi_navi_icon_text_pane_srt

0xb467,	// (0x00056292) navi_navi_pane_srt_g1_ParamLimits

0xb467,	// (0x00056292) navi_navi_pane_srt_g1

0xb479,	// (0x000562a4) navi_navi_pane_srt_g2_ParamLimits

0xb479,	// (0x000562a4) navi_navi_pane_srt_g2

0x0001,

0xf9f3,	// (0x0005a81e) navi_navi_pane_srt_g_ParamLimits

0xf9f3,	// (0x0005a81e) navi_navi_pane_srt_g

0xb48b,	// (0x000562b6) navi_navi_tabs_pane_srt

0xb45f,	// (0x0005628a) navi_navi_text_pane_srt

0xb45f,	// (0x0005628a) navi_navi_volume_pane_srt

0xb450,	// (0x0005627b) navi_navi_text_pane_srt_t1

0x631f,	// (0x0005114a) navi_navi_volume_pane_srt_g1

0x6327,	// (0x00051152) volume_small_pane_srt_ParamLimits

0x6327,	// (0x00051152) volume_small_pane_srt

0x5bf6,	// (0x00050a21) volume_small_pane_srt_g1_ParamLimits

0x5bf6,	// (0x00050a21) volume_small_pane_srt_g1

0x5c06,	// (0x00050a31) volume_small_pane_srt_g2_ParamLimits

0x5c06,	// (0x00050a31) volume_small_pane_srt_g2

0x5c17,	// (0x00050a42) volume_small_pane_srt_g3_ParamLimits

0x5c17,	// (0x00050a42) volume_small_pane_srt_g3

0x5c28,	// (0x00050a53) volume_small_pane_srt_g4_ParamLimits

0x5c28,	// (0x00050a53) volume_small_pane_srt_g4

0x5c39,	// (0x00050a64) volume_small_pane_srt_g5_ParamLimits

0x5c39,	// (0x00050a64) volume_small_pane_srt_g5

0x5c4a,	// (0x00050a75) volume_small_pane_srt_g6_ParamLimits

0x5c4a,	// (0x00050a75) volume_small_pane_srt_g6

0x5c5b,	// (0x00050a86) volume_small_pane_srt_g7_ParamLimits

0x5c5b,	// (0x00050a86) volume_small_pane_srt_g7

0x5c6c,	// (0x00050a97) volume_small_pane_srt_g8_ParamLimits

0x5c6c,	// (0x00050a97) volume_small_pane_srt_g8

0x5c7d,	// (0x00050aa8) volume_small_pane_srt_g9_ParamLimits

0x5c7d,	// (0x00050aa8) volume_small_pane_srt_g9

0x5c8e,	// (0x00050ab9) volume_small_pane_srt_g10_ParamLimits

0x5c8e,	// (0x00050ab9) volume_small_pane_srt_g10

0x0009,

0xf7a2,	// (0x0005a5cd) volume_small_pane_srt_g_ParamLimits

0xf7a2,	// (0x0005a5cd) volume_small_pane_srt_g

0x7744,	// (0x0005256f) query_popup_data_pane_cp2

0xb436,	// (0x00056261) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb436,	// (0x00056261) navi_navi_icon_text_pane_srt_t1

0xa4b7,	// (0x000552e2) navi_tabs_2_long_pane_srt

0xa4b7,	// (0x000552e2) navi_tabs_2_pane_srt

0xa4b7,	// (0x000552e2) navi_tabs_3_long_pane_srt

0xa4b7,	// (0x000552e2) navi_tabs_3_pane_srt

0xa4b7,	// (0x000552e2) navi_tabs_4_pane_srt

0x62ff,	// (0x0005112a) tabs_2_active_pane_srt_ParamLimits

0x62ff,	// (0x0005112a) tabs_2_active_pane_srt

0x630f,	// (0x0005113a) tabs_2_passive_pane_srt_ParamLimits

0x630f,	// (0x0005113a) tabs_2_passive_pane_srt

0x90c6,	// (0x00053ef1) bg_passive_tab_pane_cp1_srt_ParamLimits

0x90c6,	// (0x00053ef1) bg_passive_tab_pane_cp1_srt

0xb402,	// (0x0005622d) bg_passive_tab_pane_g1_cp1_srt

0x897c,	// (0x000537a7) bg_passive_tab_pane_g2_cp1_srt

0xb40b,	// (0x00056236) bg_passive_tab_pane_g3_cp1_srt

0x735d,	// (0x00052188) bg_active_tab_pane_cp1_srt_ParamLimits

0x735d,	// (0x00052188) bg_active_tab_pane_cp1_srt

0xb414,	// (0x0005623f) tabs_2_active_pane_srt_g1

0xb41c,	// (0x00056247) tabs_2_active_pane_srt_t1_ParamLimits

0xb41c,	// (0x00056247) tabs_2_active_pane_srt_t1

0xb402,	// (0x0005622d) bg_active_tab_pane_g1_cp1_srt

0x897c,	// (0x000537a7) bg_active_tab_pane_g2_cp1_srt

0xb40b,	// (0x00056236) bg_active_tab_pane_g3_cp1_srt

0x62cc,	// (0x000510f7) tabs_3_active_pane_srt_ParamLimits

0x62cc,	// (0x000510f7) tabs_3_active_pane_srt

0x62dd,	// (0x00051108) tabs_3_passive_pane_cp_srt_ParamLimits

0x62dd,	// (0x00051108) tabs_3_passive_pane_cp_srt

0x62ee,	// (0x00051119) tabs_3_passive_pane_srt_ParamLimits

0x62ee,	// (0x00051119) tabs_3_passive_pane_srt

0x90c6,	// (0x00053ef1) bg_passive_tab_pane_cp2_srt_ParamLimits

0x90c6,	// (0x00053ef1) bg_passive_tab_pane_cp2_srt

0x8efe,	// (0x00053d29) bg_passive_tab_pane_g1_cp2_srt

0x897c,	// (0x000537a7) bg_passive_tab_pane_g2_cp2_srt

0x8f07,	// (0x00053d32) bg_passive_tab_pane_g3_cp2_srt

0x735d,	// (0x00052188) bg_active_tab_pane_cp2_srt_ParamLimits

0x735d,	// (0x00052188) bg_active_tab_pane_cp2_srt

0xb3e8,	// (0x00056213) tabs_3_active_pane_srt_g1

0xb3f0,	// (0x0005621b) tabs_3_active_pane_srt_t1_ParamLimits

0xb3f0,	// (0x0005621b) tabs_3_active_pane_srt_t1

0x8efe,	// (0x00053d29) bg_active_tab_pane_g1_cp2_srt

0x897c,	// (0x000537a7) bg_active_tab_pane_g2_cp2_srt

0x8f07,	// (0x00053d32) bg_active_tab_pane_g3_cp2_srt

0x6284,	// (0x000510af) tabs_4_active_pane_srt_ParamLimits

0x6284,	// (0x000510af) tabs_4_active_pane_srt

0x6296,	// (0x000510c1) tabs_4_passive_pane_cp2_srt_ParamLimits

0x6296,	// (0x000510c1) tabs_4_passive_pane_cp2_srt

0x905c,	// (0x00053e87) aid_size_cell_toolbar

0x82d5,	// (0x00053100) main_idle_act_pane_ParamLimits

0x928b,	// (0x000540b6) popup_large_graphic_colour_window_ParamLimits

0x9632,	// (0x0005445d) popup_toolbar_window_ParamLimits

0x9632,	// (0x0005445d) popup_toolbar_window

0xb202,	// (0x0005602d) list_single_graphic_2heading_pane_ParamLimits

0xb202,	// (0x0005602d) list_single_graphic_2heading_pane

0x8491,	// (0x000532bc) aid_size_cell_apps_grid_lsc_pane

0x84a3,	// (0x000532ce) aid_size_cell_apps_grid_prt_pane

0x90c6,	// (0x00053ef1) bg_wml_button_pane_cp1_ParamLimits

0x90c6,	// (0x00053ef1) bg_wml_button_pane_cp1

0x9ee0,	// (0x00054d0b) form_midp_field_text_pane_t1_ParamLimits

0x9cf4,	// (0x00054b1f) input_focus_pane_cp050_ParamLimits

0x9f0b,	// (0x00054d36) list_midp_form_text_pane_ParamLimits

0x9ebd,	// (0x00054ce8) input_focus_pane_cp051_ParamLimits

0x9ed1,	// (0x00054cfc) list_midp_choice_pane_ParamLimits

0x9d85,	// (0x00054bb0) list_single_2graphic_pane_cp3_ParamLimits

0x9d85,	// (0x00054bb0) list_single_2graphic_pane_cp3

0x9d9e,	// (0x00054bc9) list_single_midp_graphic_pane_ParamLimits

0x9d9e,	// (0x00054bc9) list_single_midp_graphic_pane

0x4bb4,	// (0x0004f9df) list_single_graphic_2heading_pane_g1_ParamLimits

0x4bb4,	// (0x0004f9df) list_single_graphic_2heading_pane_g1

0x4bc0,	// (0x0004f9eb) list_single_graphic_2heading_pane_g4_ParamLimits

0x4bc0,	// (0x0004f9eb) list_single_graphic_2heading_pane_g4

0x4bcc,	// (0x0004f9f7) list_single_graphic_2heading_pane_g5_ParamLimits

0x4bcc,	// (0x0004f9f7) list_single_graphic_2heading_pane_g5

0x0002,

0xf7f5,	// (0x0005a620) list_single_graphic_2heading_pane_g_ParamLimits

0xf7f5,	// (0x0005a620) list_single_graphic_2heading_pane_g

0x4bd8,	// (0x0004fa03) list_single_graphic_2heading_pane_t1_ParamLimits

0x4bd8,	// (0x0004fa03) list_single_graphic_2heading_pane_t1

0x4bec,	// (0x0004fa17) list_single_graphic_2heading_pane_t2_ParamLimits

0x4bec,	// (0x0004fa17) list_single_graphic_2heading_pane_t2

0x4c08,	// (0x0004fa33) list_single_graphic_2heading_pane_t3_ParamLimits

0x4c08,	// (0x0004fa33) list_single_graphic_2heading_pane_t3

0x0002,

0xf7fc,	// (0x0005a627) list_single_graphic_2heading_pane_t_ParamLimits

0xf7fc,	// (0x0005a627) list_single_graphic_2heading_pane_t

0x9b40,	// (0x0005496b) bg_popup_sub_pane_cp2

0x9b6a,	// (0x00054995) grid_toobar_pane

0x5e05,	// (0x00050c30) cell_toolbar_pane_ParamLimits

0x5e05,	// (0x00050c30) cell_toolbar_pane

0x9ba6,	// (0x000549d1) cell_toolbar_pane_g1_ParamLimits

0x9ba6,	// (0x000549d1) cell_toolbar_pane_g1

0x9bba,	// (0x000549e5) cell_toolbar_pane_g2_ParamLimits

0x9bba,	// (0x000549e5) cell_toolbar_pane_g2

0x0001,

0xf80a,	// (0x0005a635) cell_toolbar_pane_g_ParamLimits

0xf80a,	// (0x0005a635) cell_toolbar_pane_g

0x9bdc,	// (0x00054a07) grid_highlight_pane_cp2_ParamLimits

0x9bdc,	// (0x00054a07) grid_highlight_pane_cp2

0x9bf6,	// (0x00054a21) toolbar_button_pane

0x9c02,	// (0x00054a2d) toolbar_button_pane_g1

0x9c0a,	// (0x00054a35) toolbar_button_pane_g2

0x9c12,	// (0x00054a3d) toolbar_button_pane_g3

0x9c1a,	// (0x00054a45) toolbar_button_pane_g4

0x9c22,	// (0x00054a4d) toolbar_button_pane_g5

0x9c2a,	// (0x00054a55) toolbar_button_pane_g6

0x9c32,	// (0x00054a5d) toolbar_button_pane_g7

0x9c3a,	// (0x00054a65) toolbar_button_pane_g8

0x9c42,	// (0x00054a6d) toolbar_button_pane_g9

0x0009,

0xf80f,	// (0x0005a63a) toolbar_button_pane_g

0x5e5f,	// (0x00050c8a) list_single_2graphic_pane_g1_cp3_ParamLimits

0x5e5f,	// (0x00050c8a) list_single_2graphic_pane_g1_cp3

0x5e6b,	// (0x00050c96) list_single_2graphic_pane_g2_cp3_ParamLimits

0x5e6b,	// (0x00050c96) list_single_2graphic_pane_g2_cp3

0x5e7c,	// (0x00050ca7) list_single_2graphic_pane_g3_cp3

0x5e84,	// (0x00050caf) list_single_2graphic_pane_g4_cp3_ParamLimits

0x5e84,	// (0x00050caf) list_single_2graphic_pane_g4_cp3

0x5e90,	// (0x00050cbb) list_single_2graphic_pane_t1_cp3_ParamLimits

0x5e90,	// (0x00050cbb) list_single_2graphic_pane_t1_cp3

0x5ed5,	// (0x00050d00) list_single_midp_graphic_pane_g2_ParamLimits

0x5ed5,	// (0x00050d00) list_single_midp_graphic_pane_g2

0x5ded,	// (0x00050c18) aid_zoom_text_primary

0x5df5,	// (0x00050c20) aid_zoom_text_secondary

0x8fbb,	// (0x00053de6) status_small_pane_g7_ParamLimits

0x8fbb,	// (0x00053de6) status_small_pane_g7

0x8fde,	// (0x00053e09) status_small_pane_t1_ParamLimits

0x7294,	// (0x000520bf) title_pane_g2

0x0003,

0xf592,	// (0x0005a3bd) title_pane_g

0x77ed,	// (0x00052618) aid_size_cell_colour_1_pane_ParamLimits

0x77ed,	// (0x00052618) aid_size_cell_colour_1_pane

0x7801,	// (0x0005262c) aid_size_cell_colour_2_pane_ParamLimits

0x7801,	// (0x0005262c) aid_size_cell_colour_2_pane

0x7815,	// (0x00052640) aid_size_cell_colour_3_pane_ParamLimits

0x7815,	// (0x00052640) aid_size_cell_colour_3_pane

0x7829,	// (0x00052654) aid_size_cell_colour_4_pane_ParamLimits

0x7829,	// (0x00052654) aid_size_cell_colour_4_pane

0x57dd,	// (0x00050608) title_pane_stacon_g1_ParamLimits

0x57dd,	// (0x00050608) title_pane_stacon_g1

0xa29d,	// (0x000550c8) popup_note_wait_window_g3_ParamLimits

0xa29d,	// (0x000550c8) popup_note_wait_window_g3

0xa314,	// (0x0005513f) popup_note_wait_window_t5_ParamLimits

0xa314,	// (0x0005513f) popup_note_wait_window_t5

0x727d,	// (0x000520a8) main_feb_china_hwr_fs_writing_pane

0x9152,	// (0x00053f7d) popup_feb_china_hwr_fs_window_ParamLimits

0x9152,	// (0x00053f7d) popup_feb_china_hwr_fs_window

0x5ef7,	// (0x00050d22) aid_size_cell_hwr_fs_ParamLimits

0x5ef7,	// (0x00050d22) aid_size_cell_hwr_fs

0x9cf4,	// (0x00054b1f) bg_popup_sub_pane_cp3_ParamLimits

0x9cf4,	// (0x00054b1f) bg_popup_sub_pane_cp3

0x5f0c,	// (0x00050d37) grid_hwr_fs_pane_ParamLimits

0x5f0c,	// (0x00050d37) grid_hwr_fs_pane

0x5f24,	// (0x00050d4f) linegrid_hwr_fs_pane_ParamLimits

0x5f24,	// (0x00050d4f) linegrid_hwr_fs_pane

0x5f34,	// (0x00050d5f) cell_hwr_fs_pane_ParamLimits

0x5f34,	// (0x00050d5f) cell_hwr_fs_pane

0x9d00,	// (0x00054b2b) linegrid_hwr_fs_pane_g1_ParamLimits

0x9d00,	// (0x00054b2b) linegrid_hwr_fs_pane_g1

0x9d0c,	// (0x00054b37) linegrid_hwr_fs_pane_g2_ParamLimits

0x9d0c,	// (0x00054b37) linegrid_hwr_fs_pane_g2

0x9d1e,	// (0x00054b49) linegrid_hwr_fs_pane_g3_ParamLimits

0x9d1e,	// (0x00054b49) linegrid_hwr_fs_pane_g3

0x5f58,	// (0x00050d83) linegrid_hwr_fs_pane_g4_ParamLimits

0x5f58,	// (0x00050d83) linegrid_hwr_fs_pane_g4

0x5f76,	// (0x00050da1) linegrid_hwr_fs_pane_g5_ParamLimits

0x5f76,	// (0x00050da1) linegrid_hwr_fs_pane_g5

0x0004,

0xf83a,	// (0x0005a665) linegrid_hwr_fs_pane_g_ParamLimits

0xf83a,	// (0x0005a665) linegrid_hwr_fs_pane_g

0x9d2a,	// (0x00054b55) cell_hwr_fs_pane_g1_ParamLimits

0x9d2a,	// (0x00054b55) cell_hwr_fs_pane_g1

0x9a77,	// (0x000548a2) cell_hwr_fs_pane_g2_ParamLimits

0x9a77,	// (0x000548a2) cell_hwr_fs_pane_g2

0x9d40,	// (0x00054b6b) cell_hwr_fs_pane_g3_ParamLimits

0x9d40,	// (0x00054b6b) cell_hwr_fs_pane_g3

0x9d4d,	// (0x00054b78) cell_hwr_fs_pane_g4_ParamLimits

0x9d4d,	// (0x00054b78) cell_hwr_fs_pane_g4

0x0003,

0xf845,	// (0x0005a670) cell_hwr_fs_pane_g_ParamLimits

0xf845,	// (0x0005a670) cell_hwr_fs_pane_g

0x5f8c,	// (0x00050db7) cell_hwr_fs_pane_t1

0x727d,	// (0x000520a8) grid_highlight_pane_cp6

0x727d,	// (0x000520a8) main_idle_act2_pane

0x8247,	// (0x00053072) aid_inside_area_popup_secondary

0xa94d,	// (0x00055778) aid_inside_area_window_primary_ParamLimits

0xa94d,	// (0x00055778) aid_inside_area_window_primary

0xb54f,	// (0x0005637a) ai2_news_ticker_pane

0xb557,	// (0x00056382) aid_size_cell_ai1_link_ParamLimits

0xb557,	// (0x00056382) aid_size_cell_ai1_link

0xb571,	// (0x0005639c) popup_ai2_data_window_ParamLimits

0xb571,	// (0x0005639c) popup_ai2_data_window

0xb58f,	// (0x000563ba) popup_ai2_link_window_ParamLimits

0xb58f,	// (0x000563ba) popup_ai2_link_window

0x9cf4,	// (0x00054b1f) bg_popup_sub_pane_cp4_ParamLimits

0x9cf4,	// (0x00054b1f) bg_popup_sub_pane_cp4

0xb5a5,	// (0x000563d0) grid_ai2_link_pane_ParamLimits

0xb5a5,	// (0x000563d0) grid_ai2_link_pane

0xb5bc,	// (0x000563e7) popup_ai2_link_window_g1_ParamLimits

0xb5bc,	// (0x000563e7) popup_ai2_link_window_g1

0xb5c8,	// (0x000563f3) popup_ai2_link_window_g2_ParamLimits

0xb5c8,	// (0x000563f3) popup_ai2_link_window_g2

0x0001,

0xfa11,	// (0x0005a83c) popup_ai2_link_window_g_ParamLimits

0xfa11,	// (0x0005a83c) popup_ai2_link_window_g

0xb5d9,	// (0x00056404) ai2_mp_button_pane

0xb5e1,	// (0x0005640c) ai2_mp_volume_pane

0x9ebd,	// (0x00054ce8) bg_popup_sub_pane_cp5_ParamLimits

0x9ebd,	// (0x00054ce8) bg_popup_sub_pane_cp5

0xb5e9,	// (0x00056414) heading_ai2_gene_pane_ParamLimits

0xb5e9,	// (0x00056414) heading_ai2_gene_pane

0xb5f5,	// (0x00056420) list_ai2_gene_pane_ParamLimits

0xb5f5,	// (0x00056420) list_ai2_gene_pane

0xb63d,	// (0x00056468) cell_ai2_link_pane_ParamLimits

0xb63d,	// (0x00056468) cell_ai2_link_pane

0xb653,	// (0x0005647e) cell_ai2_link_pane_g1

0x727d,	// (0x000520a8) grid_highlight_pane_cp7

0x633c,	// (0x00051167) ai2_mp_volume_pane_g1

0xb726,	// (0x00056551) ai2_mp_volume_pane_g2

0xb69b,	// (0x000564c6) list_ai2_gene_pane_t1

0xb72e,	// (0x00056559) ai2_mp_volume_pane_g3

0x0002,

0xfa2a,	// (0x0005a855) ai2_mp_volume_pane_g

0x6344,	// (0x0005116f) volume_small_pane_cp3

0xb736,	// (0x00056561) aid_size_cell_ai2_button

0xb73e,	// (0x00056569) grid_ai2_button_pane

0xb747,	// (0x00056572) cell_ai2_button_pane_ParamLimits

0xb747,	// (0x00056572) cell_ai2_button_pane

0x7273,	// (0x0005209e) cell_ai2_button_pane_g1

0x727d,	// (0x000520a8) grid_highlight_pane_cp8

0xb6e6,	// (0x00056511) ai2_gene_pane_t1_ParamLimits

0xb6e6,	// (0x00056511) ai2_gene_pane_t1

0x9052,	// (0x00053e7d) aid_height_parent_landscape

0xaff9,	// (0x00055e24) aid_height_set_list

0xb00a,	// (0x00055e35) aid_size_parent

0xb370,	// (0x0005619b) aid_size_cell_graphic_pane_ParamLimits

0xb605,	// (0x00056430) popup_ai2_data_window_g1_ParamLimits

0xb605,	// (0x00056430) popup_ai2_data_window_g1

0xb611,	// (0x0005643c) ai2_news_ticker_pane_g1

0xb619,	// (0x00056444) ai2_news_ticker_pane_g2

0x0001,

0xfa16,	// (0x0005a841) ai2_news_ticker_pane_g

0xb621,	// (0x0005644c) ai2_news_ticker_pane_t1

0xb62f,	// (0x0005645a) ai2_news_ticker_pane_t2

0x0001,

0xfa1b,	// (0x0005a846) ai2_news_ticker_pane_t

0xb65c,	// (0x00056487) heading_ai2_gene_pane_g1

0xb664,	// (0x0005648f) heading_ai2_gene_pane_t1_ParamLimits

0xb664,	// (0x0005648f) heading_ai2_gene_pane_t1

0xb679,	// (0x000564a4) list_highlight_pane_cp6

0xb681,	// (0x000564ac) ai2_gene_pane_ParamLimits

0xb681,	// (0x000564ac) ai2_gene_pane

0xb6a9,	// (0x000564d4) list_ai2_gene_pane_t2

0x0001,

0xfa20,	// (0x0005a84b) list_ai2_gene_pane_t

0xb6b7,	// (0x000564e2) list_highlight_pane_cp8_ParamLimits

0xb6b7,	// (0x000564e2) list_highlight_pane_cp8

0xb6c8,	// (0x000564f3) ai2_gene_pane_g1_ParamLimits

0xb6c8,	// (0x000564f3) ai2_gene_pane_g1

0xb6da,	// (0x00056505) ai2_gene_pane_g2_ParamLimits

0xb6da,	// (0x00056505) ai2_gene_pane_g2

0x0001,

0xfa25,	// (0x0005a850) ai2_gene_pane_g_ParamLimits

0xfa25,	// (0x0005a850) ai2_gene_pane_g

0x8074,	// (0x00052e9f) scroll_pane_cp12

0x5dac,	// (0x00050bd7) control_pane_t3_ParamLimits

0x5dac,	// (0x00050bd7) control_pane_t3

0x8fcf,	// (0x00053dfa) status_small_pane_g8_ParamLimits

0x8fcf,	// (0x00053dfa) status_small_pane_g8

0x9250,	// (0x0005407b) popup_find_window_ParamLimits

0x947b,	// (0x000542a6) popup_note_image_window_ParamLimits

0x5e35,	// (0x00050c60) list_double2_graphic_pane_vc_g1_ParamLimits

0x5e35,	// (0x00050c60) list_double2_graphic_pane_vc_g1

0x8cb9,	// (0x00053ae4) list_double2_graphic_pane_vc_g2_ParamLimits

0x8cb9,	// (0x00053ae4) list_double2_graphic_pane_vc_g2

0x79ba,	// (0x000527e5) list_double2_graphic_pane_vc_g3_ParamLimits

0x79ba,	// (0x000527e5) list_double2_graphic_pane_vc_g3

0x0002,

0xf803,	// (0x0005a62e) list_double2_graphic_pane_vc_g_ParamLimits

0xf803,	// (0x0005a62e) list_double2_graphic_pane_vc_g

0x5e41,	// (0x00050c6c) list_double2_graphic_pane_vc_t1_ParamLimits

0x5e41,	// (0x00050c6c) list_double2_graphic_pane_vc_t1

0x8cb9,	// (0x00053ae4) list_single_heading_pane_vc_g1_ParamLimits

0x8cb9,	// (0x00053ae4) list_single_heading_pane_vc_g1

0x79ba,	// (0x000527e5) list_single_heading_pane_vc_g2_ParamLimits

0x79ba,	// (0x000527e5) list_single_heading_pane_vc_g2

0x0001,

0xf824,	// (0x0005a64f) list_single_heading_pane_vc_g_ParamLimits

0xf824,	// (0x0005a64f) list_single_heading_pane_vc_g

0x5eab,	// (0x00050cd6) list_single_heading_pane_vc_t1_ParamLimits

0x5eab,	// (0x00050cd6) list_single_heading_pane_vc_t1

0x5ec1,	// (0x00050cec) list_single_heading_pane_vc_t2_ParamLimits

0x5ec1,	// (0x00050cec) list_single_heading_pane_vc_t2

0x0001,

0xf829,	// (0x0005a654) list_single_heading_pane_vc_t_ParamLimits

0xf829,	// (0x0005a654) list_single_heading_pane_vc_t

0x9c4a,	// (0x00054a75) list_setting_number_pane_vc_g1_ParamLimits

0x9c4a,	// (0x00054a75) list_setting_number_pane_vc_g1

0x9c56,	// (0x00054a81) list_setting_number_pane_vc_g2_ParamLimits

0x9c56,	// (0x00054a81) list_setting_number_pane_vc_g2

0x0001,

0xf82e,	// (0x0005a659) list_setting_number_pane_vc_g_ParamLimits

0xf82e,	// (0x0005a659) list_setting_number_pane_vc_g

0x9c62,	// (0x00054a8d) list_setting_number_pane_vc_t1_ParamLimits

0x9c62,	// (0x00054a8d) list_setting_number_pane_vc_t1

0x9c76,	// (0x00054aa1) list_setting_number_pane_vc_t2_ParamLimits

0x9c76,	// (0x00054aa1) list_setting_number_pane_vc_t2

0x9c92,	// (0x00054abd) list_setting_number_pane_vc_t3_ParamLimits

0x9c92,	// (0x00054abd) list_setting_number_pane_vc_t3

0x0002,

0xf833,	// (0x0005a65e) list_setting_number_pane_vc_t_ParamLimits

0xf833,	// (0x0005a65e) list_setting_number_pane_vc_t

0x9cba,	// (0x00054ae5) set_value_pane_vc_ParamLimits

0x9cba,	// (0x00054ae5) set_value_pane_vc

0xb202,	// (0x0005602d) list_double2_graphic_pane_vc_ParamLimits

0xb202,	// (0x0005602d) list_double2_graphic_pane_vc

0xb202,	// (0x0005602d) list_double2_large_graphic_pane_vc_ParamLimits

0xb202,	// (0x0005602d) list_double2_large_graphic_pane_vc

0xb202,	// (0x0005602d) list_double2_pane_vc_ParamLimits

0xb202,	// (0x0005602d) list_double2_pane_vc

0xb202,	// (0x0005602d) list_double_graphic_heading_pane_vc_ParamLimits

0xb202,	// (0x0005602d) list_double_graphic_heading_pane_vc

0xb202,	// (0x0005602d) list_double_graphic_pane_vc_ParamLimits

0xb202,	// (0x0005602d) list_double_graphic_pane_vc

0xb202,	// (0x0005602d) list_double_heading_pane_vc_ParamLimits

0xb202,	// (0x0005602d) list_double_heading_pane_vc

0xb202,	// (0x0005602d) list_double_large_graphic_pane_vc_ParamLimits

0xb202,	// (0x0005602d) list_double_large_graphic_pane_vc

0xb202,	// (0x0005602d) list_double_number_pane_vc_ParamLimits

0xb202,	// (0x0005602d) list_double_number_pane_vc

0xb202,	// (0x0005602d) list_double_pane_vc_ParamLimits

0xb202,	// (0x0005602d) list_double_pane_vc

0xb202,	// (0x0005602d) list_double_time_pane_vc_ParamLimits

0xb202,	// (0x0005602d) list_double_time_pane_vc

0xb202,	// (0x0005602d) list_setting_number_pane_vc_ParamLimits

0xb202,	// (0x0005602d) list_setting_number_pane_vc

0xb202,	// (0x0005602d) list_setting_pane_vc_ParamLimits

0xb202,	// (0x0005602d) list_setting_pane_vc

0xb202,	// (0x0005602d) list_single_graphic_heading_pane_vc_ParamLimits

0xb202,	// (0x0005602d) list_single_graphic_heading_pane_vc

0xb202,	// (0x0005602d) list_single_heading_pane_vc_ParamLimits

0xb202,	// (0x0005602d) list_single_heading_pane_vc

0xb216,	// (0x00056041) list_single_number_heading_pane_vc_ParamLimits

0xb216,	// (0x00056041) list_single_number_heading_pane_vc

0x5e35,	// (0x00050c60) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x5e35,	// (0x00050c60) list_double_graphic_heading_pane_vc_g1

0x79f2,	// (0x0005281d) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x79f2,	// (0x0005281d) list_double_graphic_heading_pane_vc_g2

0x79fe,	// (0x00052829) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x79fe,	// (0x00052829) list_double_graphic_heading_pane_vc_g3

0x0002,

0xfa31,	// (0x0005a85c) list_double_graphic_heading_pane_vc_g_ParamLimits

0xfa31,	// (0x0005a85c) list_double_graphic_heading_pane_vc_g

0x634d,	// (0x00051178) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x634d,	// (0x00051178) list_double_graphic_heading_pane_vc_t1

0x5eab,	// (0x00050cd6) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x5eab,	// (0x00050cd6) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa38,	// (0x0005a863) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa38,	// (0x0005a863) list_double_graphic_heading_pane_vc_t

0x9c4a,	// (0x00054a75) list_setting_pane_vc_g1_ParamLimits

0x9c4a,	// (0x00054a75) list_setting_pane_vc_g1

0x9c56,	// (0x00054a81) list_setting_pane_vc_g2_ParamLimits

0x9c56,	// (0x00054a81) list_setting_pane_vc_g2

0x0001,

0xf82e,	// (0x0005a659) list_setting_pane_vc_g_ParamLimits

0xf82e,	// (0x0005a659) list_setting_pane_vc_g

0xb9c5,	// (0x000567f0) list_setting_pane_vc_t1_ParamLimits

0xb9c5,	// (0x000567f0) list_setting_pane_vc_t1

0xb9d9,	// (0x00056804) list_setting_pane_vc_t2_ParamLimits

0xb9d9,	// (0x00056804) list_setting_pane_vc_t2

0x0001,

0xfa66,	// (0x0005a891) list_setting_pane_vc_t_ParamLimits

0xfa66,	// (0x0005a891) list_setting_pane_vc_t

0x9cba,	// (0x00054ae5) set_value_pane_cp_vc_ParamLimits

0x9cba,	// (0x00054ae5) set_value_pane_cp_vc

0x8cb9,	// (0x00053ae4) list_single_number_heading_pane_vc_g1_ParamLimits

0x8cb9,	// (0x00053ae4) list_single_number_heading_pane_vc_g1

0x79ba,	// (0x000527e5) list_single_number_heading_pane_vc_g2_ParamLimits

0x79ba,	// (0x000527e5) list_single_number_heading_pane_vc_g2

0x0001,

0xf824,	// (0x0005a64f) list_single_number_heading_pane_vc_g_ParamLimits

0xf824,	// (0x0005a64f) list_single_number_heading_pane_vc_g

0x5eab,	// (0x00050cd6) list_single_number_heading_pane_vc_t1_ParamLimits

0x5eab,	// (0x00050cd6) list_single_number_heading_pane_vc_t1

0x6361,	// (0x0005118c) list_single_number_heading_pane_vc_t2_ParamLimits

0x6361,	// (0x0005118c) list_single_number_heading_pane_vc_t2

0x6375,	// (0x000511a0) list_single_number_heading_pane_vc_t3_ParamLimits

0x6375,	// (0x000511a0) list_single_number_heading_pane_vc_t3

0x0002,

0xfa6b,	// (0x0005a896) list_single_number_heading_pane_vc_t_ParamLimits

0xfa6b,	// (0x0005a896) list_single_number_heading_pane_vc_t

0x5e35,	// (0x00050c60) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x5e35,	// (0x00050c60) list_single_graphic_heading_pane_vc_g1

0x8cb9,	// (0x00053ae4) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x8cb9,	// (0x00053ae4) list_single_graphic_heading_pane_vc_g4

0x79ba,	// (0x000527e5) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x79ba,	// (0x000527e5) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf803,	// (0x0005a62e) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf803,	// (0x0005a62e) list_single_graphic_heading_pane_vc_g

0x5eab,	// (0x00050cd6) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x5eab,	// (0x00050cd6) list_single_graphic_heading_pane_vc_t1

0x6387,	// (0x000511b2) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x6387,	// (0x000511b2) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa72,	// (0x0005a89d) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa72,	// (0x0005a89d) list_single_graphic_heading_pane_vc_t

0x8cb9,	// (0x00053ae4) list_double2_pane_vc_g1_ParamLimits

0x8cb9,	// (0x00053ae4) list_double2_pane_vc_g1

0x79ba,	// (0x000527e5) list_double2_pane_vc_g2_ParamLimits

0x79ba,	// (0x000527e5) list_double2_pane_vc_g2

0x0001,

0xf824,	// (0x0005a64f) list_double2_pane_vc_g_ParamLimits

0xf824,	// (0x0005a64f) list_double2_pane_vc_g

0x639b,	// (0x000511c6) list_double2_pane_vc_t1_ParamLimits

0x639b,	// (0x000511c6) list_double2_pane_vc_t1

0x7a0a,	// (0x00052835) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x7a0a,	// (0x00052835) list_double2_large_graphic_pane_vc_g1

0x8cb9,	// (0x00053ae4) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x8cb9,	// (0x00053ae4) list_double2_large_graphic_pane_vc_g2

0x79ba,	// (0x000527e5) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x79ba,	// (0x000527e5) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa77,	// (0x0005a8a2) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa77,	// (0x0005a8a2) list_double2_large_graphic_pane_vc_g

0x63b1,	// (0x000511dc) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x63b1,	// (0x000511dc) list_double2_large_graphic_pane_vc_t1

0x7a16,	// (0x00052841) list_double_time_pane_vc_g1_ParamLimits

0x7a16,	// (0x00052841) list_double_time_pane_vc_g1

0x7a22,	// (0x0005284d) list_double_time_pane_vc_g2_ParamLimits

0x7a22,	// (0x0005284d) list_double_time_pane_vc_g2

0x0001,

0xfa7e,	// (0x0005a8a9) list_double_time_pane_vc_g_ParamLimits

0xfa7e,	// (0x0005a8a9) list_double_time_pane_vc_g

0x63c7,	// (0x000511f2) list_double_time_pane_vc_t1_ParamLimits

0x63c7,	// (0x000511f2) list_double_time_pane_vc_t1

0x63e0,	// (0x0005120b) list_double_time_pane_vc_t2_ParamLimits

0x63e0,	// (0x0005120b) list_double_time_pane_vc_t2

0x6420,	// (0x0005124b) list_double_time_pane_vc_t3_ParamLimits

0x6420,	// (0x0005124b) list_double_time_pane_vc_t3

0x6438,	// (0x00051263) list_double_time_pane_vc_t4_ParamLimits

0x6438,	// (0x00051263) list_double_time_pane_vc_t4

0x0003,

0xfa83,	// (0x0005a8ae) list_double_time_pane_vc_t_ParamLimits

0xfa83,	// (0x0005a8ae) list_double_time_pane_vc_t

0x8cb9,	// (0x00053ae4) list_double_pane_vc_g1_ParamLimits

0x8cb9,	// (0x00053ae4) list_double_pane_vc_g1

0x79ba,	// (0x000527e5) list_double_pane_vc_g2_ParamLimits

0x79ba,	// (0x000527e5) list_double_pane_vc_g2

0x0001,

0xf824,	// (0x0005a64f) list_double_pane_vc_g_ParamLimits

0xf824,	// (0x0005a64f) list_double_pane_vc_g

0x644c,	// (0x00051277) list_double_pane_vc_t1_ParamLimits

0x644c,	// (0x00051277) list_double_pane_vc_t1

0x645e,	// (0x00051289) list_double_pane_vc_t2_ParamLimits

0x645e,	// (0x00051289) list_double_pane_vc_t2

0x0001,

0xfa8c,	// (0x0005a8b7) list_double_pane_vc_t_ParamLimits

0xfa8c,	// (0x0005a8b7) list_double_pane_vc_t

0x8cb9,	// (0x00053ae4) list_double_number_pane_vc_g1_ParamLimits

0x8cb9,	// (0x00053ae4) list_double_number_pane_vc_g1

0x79ba,	// (0x000527e5) list_double_number_pane_vc_g2_ParamLimits

0x79ba,	// (0x000527e5) list_double_number_pane_vc_g2

0x0001,

0xf824,	// (0x0005a64f) list_double_number_pane_vc_g_ParamLimits

0xf824,	// (0x0005a64f) list_double_number_pane_vc_g

0x6476,	// (0x000512a1) list_double_number_pane_vc_t1_ParamLimits

0x6476,	// (0x000512a1) list_double_number_pane_vc_t1

0x648a,	// (0x000512b5) list_double_number_pane_vc_t2_ParamLimits

0x648a,	// (0x000512b5) list_double_number_pane_vc_t2

0x645e,	// (0x00051289) list_double_number_pane_vc_t3_ParamLimits

0x645e,	// (0x00051289) list_double_number_pane_vc_t3

0x0002,

0xfa91,	// (0x0005a8bc) list_double_number_pane_vc_t_ParamLimits

0xfa91,	// (0x0005a8bc) list_double_number_pane_vc_t

0x7a2e,	// (0x00052859) list_double_large_graphic_pane_vc_g1_ParamLimits

0x7a2e,	// (0x00052859) list_double_large_graphic_pane_vc_g1

0x7a3a,	// (0x00052865) list_double_large_graphic_pane_vc_g2_ParamLimits

0x7a3a,	// (0x00052865) list_double_large_graphic_pane_vc_g2

0x79ba,	// (0x000527e5) list_double_large_graphic_pane_vc_g3_ParamLimits

0x79ba,	// (0x000527e5) list_double_large_graphic_pane_vc_g3

0x649c,	// (0x000512c7) list_double_large_graphic_pane_vc_g4_ParamLimits

0x649c,	// (0x000512c7) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa98,	// (0x0005a8c3) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa98,	// (0x0005a8c3) list_double_large_graphic_pane_vc_g

0x64a8,	// (0x000512d3) list_double_large_graphic_pane_vc_t1_ParamLimits

0x64a8,	// (0x000512d3) list_double_large_graphic_pane_vc_t1

0x64ba,	// (0x000512e5) list_double_large_graphic_pane_vc_t2_ParamLimits

0x64ba,	// (0x000512e5) list_double_large_graphic_pane_vc_t2

0x0001,

0xfaa1,	// (0x0005a8cc) list_double_large_graphic_pane_vc_t_ParamLimits

0xfaa1,	// (0x0005a8cc) list_double_large_graphic_pane_vc_t

0x79f2,	// (0x0005281d) list_double_heading_pane_vc_g1_ParamLimits

0x79f2,	// (0x0005281d) list_double_heading_pane_vc_g1

0x79fe,	// (0x00052829) list_double_heading_pane_vc_g2_ParamLimits

0x79fe,	// (0x00052829) list_double_heading_pane_vc_g2

0x0001,

0xfaa6,	// (0x0005a8d1) list_double_heading_pane_vc_g_ParamLimits

0xfaa6,	// (0x0005a8d1) list_double_heading_pane_vc_g

0x64d3,	// (0x000512fe) list_double_heading_pane_vc_t1_ParamLimits

0x64d3,	// (0x000512fe) list_double_heading_pane_vc_t1

0x5eab,	// (0x00050cd6) list_double_heading_pane_vc_t2_ParamLimits

0x5eab,	// (0x00050cd6) list_double_heading_pane_vc_t2

0x0001,

0xfaab,	// (0x0005a8d6) list_double_heading_pane_vc_t_ParamLimits

0xfaab,	// (0x0005a8d6) list_double_heading_pane_vc_t

0x5e35,	// (0x00050c60) list_double_graphic_pane_vc_g1_ParamLimits

0x5e35,	// (0x00050c60) list_double_graphic_pane_vc_g1

0x7a49,	// (0x00052874) list_double_graphic_pane_vc_g2_ParamLimits

0x7a49,	// (0x00052874) list_double_graphic_pane_vc_g2

0x7a58,	// (0x00052883) list_double_graphic_pane_vc_g3_ParamLimits

0x7a58,	// (0x00052883) list_double_graphic_pane_vc_g3

0x0002,

0xfab0,	// (0x0005a8db) list_double_graphic_pane_vc_g_ParamLimits

0xfab0,	// (0x0005a8db) list_double_graphic_pane_vc_g

0x64e7,	// (0x00051312) list_double_graphic_pane_vc_t1_ParamLimits

0x64e7,	// (0x00051312) list_double_graphic_pane_vc_t1

0x645e,	// (0x00051289) list_double_graphic_pane_vc_t2_ParamLimits

0x645e,	// (0x00051289) list_double_graphic_pane_vc_t2

0x0001,

0xfab7,	// (0x0005a8e2) list_double_graphic_pane_vc_t_ParamLimits

0xfab7,	// (0x0005a8e2) list_double_graphic_pane_vc_t

0x4c38,	// (0x0004fa63) aid_size_cell_fastswap

0x4c40,	// (0x0004fa6b) aid_size_cell_touch_ParamLimits

0x4c40,	// (0x0004fa6b) aid_size_cell_touch

0x4eab,	// (0x0004fcd6) popup_fast_swap_wide_window_ParamLimits

0x4eab,	// (0x0004fcd6) popup_fast_swap_wide_window

0x4fc1,	// (0x0004fdec) touch_pane_ParamLimits

0x4fc1,	// (0x0004fdec) touch_pane

0x80ca,	// (0x00052ef5) button_value_adjust_pane_cp2

0x555d,	// (0x00050388) button_value_adjust_pane_cp4

0x5585,	// (0x000503b0) form_field_data_pane_cp2

0x55aa,	// (0x000503d5) form_field_data_wide_pane_cp2

0x8563,	// (0x0005338e) bg_scroll_pane_ParamLimits

0x5942,	// (0x0005076d) scroll_handle_pane_ParamLimits

0x5956,	// (0x00050781) scroll_sc2_down_pane_ParamLimits

0x5956,	// (0x00050781) scroll_sc2_down_pane

0x8594,	// (0x000533bf) scroll_sc2_up_pane_ParamLimits

0x8594,	// (0x000533bf) scroll_sc2_up_pane

0xbe24,	// (0x00056c4f) grid_wheel_folder_pane_g1_ParamLimits

0xbe24,	// (0x00056c4f) grid_wheel_folder_pane_g1

0x5b8e,	// (0x000509b9) clock_nsta_pane_cp2_ParamLimits

0x5b8e,	// (0x000509b9) clock_nsta_pane_cp2

0x8d50,	// (0x00053b7b) listscroll_midp_pane_ParamLimits

0x8d5c,	// (0x00053b87) midp_canvas_pane

0x904a,	// (0x00053e75) nsta_clock_indic_pane

0x9098,	// (0x00053ec3) listscroll_form_pane_vc

0x90b4,	// (0x00053edf) listscroll_set_pane_vc_ParamLimits

0x90b4,	// (0x00053edf) listscroll_set_pane_vc

0x97cc,	// (0x000545f7) clock_nsta_pane

0x9849,	// (0x00054674) indicator_nsta_pane

0x9b40,	// (0x0005496b) bg_popup_sub_pane_cp2_ParamLimits

0x9b54,	// (0x0005497f) find_pane_cp2_ParamLimits

0x9b54,	// (0x0005497f) find_pane_cp2

0x9b6a,	// (0x00054995) grid_toobar_pane_ParamLimits

0x9cc8,	// (0x00054af3) list_form_gen_pane_vc_ParamLimits

0x9cc8,	// (0x00054af3) list_form_gen_pane_vc

0x9cde,	// (0x00054b09) scroll_pane_cp8_vc_ParamLimits

0x9cde,	// (0x00054b09) scroll_pane_cp8_vc

0x9d5a,	// (0x00054b85) data_form_wide_pane_vc_ParamLimits

0x9d5a,	// (0x00054b85) data_form_wide_pane_vc

0x9d66,	// (0x00054b91) form_field_data_wide_pane_vc_g1

0x9d6e,	// (0x00054b99) form_field_data_wide_pane_vc_t1_ParamLimits

0x9d6e,	// (0x00054b99) form_field_data_wide_pane_vc_t1

0x80de,	// (0x00052f09) input_focus_pane_cp6_vc_ParamLimits

0x80de,	// (0x00052f09) input_focus_pane_cp6_vc

0xa048,	// (0x00054e73) list_midp_pane_ParamLimits

0xa054,	// (0x00054e7f) scroll_pane_cp16_ParamLimits

0xa054,	// (0x00054e7f) scroll_pane_cp16

0xa094,	// (0x00054ebf) button_value_adjust_pane_ParamLimits

0xa094,	// (0x00054ebf) button_value_adjust_pane

0xb01c,	// (0x00055e47) button_value_adjust_pane_cp6_ParamLimits

0xb01c,	// (0x00055e47) button_value_adjust_pane_cp6

0xb176,	// (0x00055fa1) settings_code_pane_cp_ParamLimits

0xb176,	// (0x00055fa1) settings_code_pane_cp

0x7273,	// (0x0005209e) cell_touch_pane_g1

0x7273,	// (0x0005209e) cell_touch_pane_g2

0x0001,

0xf74c,	// (0x0005a577) cell_touch_pane_g

0xb759,	// (0x00056584) cell_touch_pane_cp_ParamLimits

0xb759,	// (0x00056584) cell_touch_pane_cp

0xb769,	// (0x00056594) cell_touch_pane_ParamLimits

0xb769,	// (0x00056594) cell_touch_pane

0x7273,	// (0x0005209e) scroll_sc2_down_pane_g1

0x7273,	// (0x0005209e) scroll_sc2_up_pane_g1

0x727d,	// (0x000520a8) bg_set_opt_pane_cp4_vc

0xb77a,	// (0x000565a5) list_set_graphic_pane_vc_g1_ParamLimits

0xb77a,	// (0x000565a5) list_set_graphic_pane_vc_g1

0xb786,	// (0x000565b1) list_set_graphic_pane_vc_g2_ParamLimits

0xb786,	// (0x000565b1) list_set_graphic_pane_vc_g2

0x0001,

0xfa3d,	// (0x0005a868) list_set_graphic_pane_vc_g_ParamLimits

0xfa3d,	// (0x0005a868) list_set_graphic_pane_vc_g

0xb792,	// (0x000565bd) text_primary_small_cp13_vc_ParamLimits

0xb792,	// (0x000565bd) text_primary_small_cp13_vc

0xb7aa,	// (0x000565d5) list_set_graphic_pane_vc_ParamLimits

0xb7aa,	// (0x000565d5) list_set_graphic_pane_vc

0x727d,	// (0x000520a8) input_focus_pane_cp2_vc

0x7273,	// (0x0005209e) setting_code_pane_vc_g1

0xb7be,	// (0x000565e9) setting_code_pane_vc_t1

0xb7cc,	// (0x000565f7) set_text_pane_vc_t1_ParamLimits

0xb7cc,	// (0x000565f7) set_text_pane_vc_t1

0x727d,	// (0x000520a8) input_focus_pane_cp1_vc

0xb7ea,	// (0x00056615) list_set_text_pane_vc

0x7273,	// (0x0005209e) setting_text_pane_vc_g1

0x727d,	// (0x000520a8) bg_set_opt_pane_cp2_vc

0xb7f4,	// (0x0005661f) setting_slider_graphic_pane_vc_g1

0xb7fc,	// (0x00056627) setting_slider_graphic_pane_vc_t1

0xb80a,	// (0x00056635) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa42,	// (0x0005a86d) setting_slider_graphic_pane_vc_t

0xb85a,	// (0x00056685) slider_set_pane_cp_vc

0xb862,	// (0x0005668d) slider_set_pane_vc_g1

0xb86b,	// (0x00056696) slider_set_pane_vc_g2

0x0006,

0xfa47,	// (0x0005a872) slider_set_pane_vc_g

0x8145,	// (0x00052f70) set_opt_bg_pane_g1_copy1

0x814d,	// (0x00052f78) set_opt_bg_pane_g2_copy1

0xb897,	// (0x000566c2) set_opt_bg_pane_g3_copy1

0x815d,	// (0x00052f88) set_opt_bg_pane_g4_copy1

0x8165,	// (0x00052f90) set_opt_bg_pane_g5_copy1

0x816d,	// (0x00052f98) set_opt_bg_pane_g6_copy1

0xb8a1,	// (0x000566cc) set_opt_bg_pane_g7_copy1

0xb8ab,	// (0x000566d6) set_opt_bg_pane_g8_copy1

0xb8b5,	// (0x000566e0) set_opt_bg_pane_g9_copy1

0x727d,	// (0x000520a8) bg_set_opt_pane_cp_vc

0xb8bf,	// (0x000566ea) setting_slider_pane_vc_t1

0xb7fc,	// (0x00056627) setting_slider_pane_vc_t2

0xb80a,	// (0x00056635) setting_slider_pane_vc_t3

0x0002,

0xfa56,	// (0x0005a881) setting_slider_pane_vc_t

0xb85a,	// (0x00056685) slider_set_pane_vc

0x5fc8,	// (0x00050df3) volume_set_pane_vc_g1

0x5fd1,	// (0x00050dfc) volume_set_pane_vc_g2

0x5fda,	// (0x00050e05) volume_set_pane_vc_g3

0x5fe3,	// (0x00050e0e) volume_set_pane_vc_g4

0x5fec,	// (0x00050e17) volume_set_pane_vc_g5

0x5ff5,	// (0x00050e20) volume_set_pane_vc_g6

0x5ffe,	// (0x00050e29) volume_set_pane_vc_g7

0x6007,	// (0x00050e32) volume_set_pane_vc_g8

0x6010,	// (0x00050e3b) volume_set_pane_vc_g9

0x6019,	// (0x00050e44) volume_set_pane_vc_g10

0x0009,

0xf8f4,	// (0x0005a71f) volume_set_pane_vc_g

0xb8ce,	// (0x000566f9) volume_set_pane_vc

0xb8d6,	// (0x00056701) button_value_adjust_pane_cp1_vc

0xb8e0,	// (0x0005670b) list_highlight_pane_cp2_vc

0xb8e9,	// (0x00056714) list_set_pane_vc_ParamLimits

0xb8e9,	// (0x00056714) list_set_pane_vc

0xb953,	// (0x0005677e) main_pane_set_vc_t1_ParamLimits

0xb953,	// (0x0005677e) main_pane_set_vc_t1

0xb968,	// (0x00056793) main_pane_set_vc_t2_ParamLimits

0xb968,	// (0x00056793) main_pane_set_vc_t2

0xb97a,	// (0x000567a5) main_pane_set_vc_t3_ParamLimits

0xb97a,	// (0x000567a5) main_pane_set_vc_t3

0xb98e,	// (0x000567b9) main_pane_set_vc_t4_ParamLimits

0xb98e,	// (0x000567b9) main_pane_set_vc_t4

0x0003,

0xfa5d,	// (0x0005a888) main_pane_set_vc_t_ParamLimits

0xfa5d,	// (0x0005a888) main_pane_set_vc_t

0xb9a2,	// (0x000567cd) setting_code_pane_vc_ParamLimits

0xb9a2,	// (0x000567cd) setting_code_pane_vc

0xb9b3,	// (0x000567de) setting_slider_graphic_pane_vc

0xb9b3,	// (0x000567de) setting_slider_pane_vc

0xb9b3,	// (0x000567de) setting_text_pane_vc

0xb9b3,	// (0x000567de) setting_volume_pane_vc

0xb9bd,	// (0x000567e8) scroll_pane_cp121_vc

0x80b8,	// (0x00052ee3) set_content_pane_vc

0xb9fb,	// (0x00056826) button_value_adjust_pane_g1

0xba04,	// (0x0005682f) button_value_adjust_pane_g2

0x0001,

0xfabc,	// (0x0005a8e7) button_value_adjust_pane_g

0xba0d,	// (0x00056838) form_field_slider_wide_pane_vc_t1_ParamLimits

0xba0d,	// (0x00056838) form_field_slider_wide_pane_vc_t1

0xba21,	// (0x0005684c) form_field_slider_wide_pane_vc_t2_ParamLimits

0xba21,	// (0x0005684c) form_field_slider_wide_pane_vc_t2

0x0001,

0xfac1,	// (0x0005a8ec) form_field_slider_wide_pane_vc_t_ParamLimits

0xfac1,	// (0x0005a8ec) form_field_slider_wide_pane_vc_t

0x75d9,	// (0x00052404) input_focus_pane_cp10_vc_ParamLimits

0x75d9,	// (0x00052404) input_focus_pane_cp10_vc

0xba33,	// (0x0005685e) slider_cont_pane_cp1_vc_ParamLimits

0xba33,	// (0x0005685e) slider_cont_pane_cp1_vc

0xb862,	// (0x0005668d) slider_form_pane_g1_cp2

0xb86b,	// (0x00056696) slider_form_pane_g2_cp2

0xba4c,	// (0x00056877) form_field_slider_pane_vc_t3

0xba5a,	// (0x00056885) form_field_slider_pane_vc_t4

0xba68,	// (0x00056893) slider_form_pane_vc_ParamLimits

0xba68,	// (0x00056893) slider_form_pane_vc

0xba75,	// (0x000568a0) form_field_slider_pane_vc_t1_ParamLimits

0xba75,	// (0x000568a0) form_field_slider_pane_vc_t1

0xba21,	// (0x0005684c) form_field_slider_pane_vc_t2_ParamLimits

0xba21,	// (0x0005684c) form_field_slider_pane_vc_t2

0x0001,

0xfad1,	// (0x0005a8fc) form_field_slider_pane_vc_t_ParamLimits

0xfad1,	// (0x0005a8fc) form_field_slider_pane_vc_t

0x75d9,	// (0x00052404) input_focus_pane_cp9_vc_ParamLimits

0x75d9,	// (0x00052404) input_focus_pane_cp9_vc

0xba91,	// (0x000568bc) slider_cont_pane_vc_ParamLimits

0xba91,	// (0x000568bc) slider_cont_pane_vc

0xbaa3,	// (0x000568ce) list_form_graphic_pane_cp_vc_ParamLimits

0xbaa3,	// (0x000568ce) list_form_graphic_pane_cp_vc

0x9d66,	// (0x00054b91) form_field_popup_wide_pane_vc_g1

0xbab8,	// (0x000568e3) form_field_popup_wide_pane_vc_t1_ParamLimits

0xbab8,	// (0x000568e3) form_field_popup_wide_pane_vc_t1

0x80de,	// (0x00052f09) input_focus_pane_cp8_vc_ParamLimits

0x80de,	// (0x00052f09) input_focus_pane_cp8_vc

0xbacf,	// (0x000568fa) list_form_wide_pane_vc_ParamLimits

0xbacf,	// (0x000568fa) list_form_wide_pane_vc

0xbadb,	// (0x00056906) list_form_graphic_pane_vc_g1

0xbae3,	// (0x0005690e) list_form_graphic_pane_vc_t1_ParamLimits

0xbae3,	// (0x0005690e) list_form_graphic_pane_vc_t1

0x735d,	// (0x00052188) list_highlight_pane_cp5_vc_ParamLimits

0x735d,	// (0x00052188) list_highlight_pane_cp5_vc

0xbaff,	// (0x0005692a) list_form_graphic_pane_vc_ParamLimits

0xbaff,	// (0x0005692a) list_form_graphic_pane_vc

0x9d66,	// (0x00054b91) form_field_popup_pane_vc_g1

0xbb15,	// (0x00056940) form_field_popup_pane_vc_t1_ParamLimits

0xbb15,	// (0x00056940) form_field_popup_pane_vc_t1

0x80de,	// (0x00052f09) input_focus_pane_cp7_vc_ParamLimits

0x80de,	// (0x00052f09) input_focus_pane_cp7_vc

0xbb2c,	// (0x00056957) list_form_pane_vc_ParamLimits

0xbb2c,	// (0x00056957) list_form_pane_vc

0xbb38,	// (0x00056963) data_form_pane_vc_t1_ParamLimits

0xbb38,	// (0x00056963) data_form_pane_vc_t1

0x8145,	// (0x00052f70) input_focus_pane_vc_g1

0x814d,	// (0x00052f78) input_focus_pane_vc_g2

0x8155,	// (0x00052f80) input_focus_pane_vc_g3

0x815d,	// (0x00052f88) input_focus_pane_vc_g4

0x8165,	// (0x00052f90) input_focus_pane_vc_g5

0x816d,	// (0x00052f98) input_focus_pane_vc_g6

0x8175,	// (0x00052fa0) input_focus_pane_vc_g7

0x817d,	// (0x00052fa8) input_focus_pane_vc_g8

0x8185,	// (0x00052fb0) input_focus_pane_vc_g9

0x7273,	// (0x0005209e) input_focus_pane_vc_g10

0x0009,

0xf6d5,	// (0x0005a500) input_focus_pane_vc_g

0x9d5a,	// (0x00054b85) data_form_pane_vc_ParamLimits

0x9d5a,	// (0x00054b85) data_form_pane_vc

0x9d66,	// (0x00054b91) form_field_data_pane_vc_g1

0xbb55,	// (0x00056980) form_field_data_pane_vc_t1_ParamLimits

0xbb55,	// (0x00056980) form_field_data_pane_vc_t1

0x80de,	// (0x00052f09) input_focus_pane_vc_ParamLimits

0x80de,	// (0x00052f09) input_focus_pane_vc

0xbb6f,	// (0x0005699a) button_value_adjust_pane_cp3_vc

0xbb77,	// (0x000569a2) button_value_adjust_pane_cp5_vc

0xbb7f,	// (0x000569aa) form_field_data_pane_vc_ParamLimits

0xbb7f,	// (0x000569aa) form_field_data_pane_vc

0xbb9a,	// (0x000569c5) form_field_data_pane_vc_cp2

0xbba2,	// (0x000569cd) form_field_data_wide_pane_vc_ParamLimits

0xbba2,	// (0x000569cd) form_field_data_wide_pane_vc

0xbbbc,	// (0x000569e7) form_field_data_wide_pane_vc_cp2

0xbbc4,	// (0x000569ef) form_field_popup_pane_vc_ParamLimits

0xbbc4,	// (0x000569ef) form_field_popup_pane_vc

0xbbdf,	// (0x00056a0a) form_field_popup_wide_pane_vc_ParamLimits

0xbbdf,	// (0x00056a0a) form_field_popup_wide_pane_vc

0xbbf9,	// (0x00056a24) form_field_slider_pane_vc_ParamLimits

0xbbf9,	// (0x00056a24) form_field_slider_pane_vc

0xbc0c,	// (0x00056a37) form_field_slider_wide_pane_vc_ParamLimits

0xbc0c,	// (0x00056a37) form_field_slider_wide_pane_vc

0xbc1f,	// (0x00056a4a) grid_touch_1_pane_ParamLimits

0xbc1f,	// (0x00056a4a) grid_touch_1_pane

0xbc2b,	// (0x00056a56) grid_touch_2_pane_ParamLimits

0xbc2b,	// (0x00056a56) grid_touch_2_pane

0x9015,	// (0x00053e40) touch_pane_g1_ParamLimits

0x9015,	// (0x00053e40) touch_pane_g1

0xbc45,	// (0x00056a70) cell_app_pane_cp_wide_ParamLimits

0xbc45,	// (0x00056a70) cell_app_pane_cp_wide

0xbc56,	// (0x00056a81) grid_popup_fast_wide_pane_ParamLimits

0xbc56,	// (0x00056a81) grid_popup_fast_wide_pane

0xbc6a,	// (0x00056a95) scroll_pane_cp19_ParamLimits

0xbc6a,	// (0x00056a95) scroll_pane_cp19

0x727d,	// (0x000520a8) bg_popup_window_pane_cp20

0xbc7e,	// (0x00056aa9) listscroll_popup_fast_wide_pane

0x735d,	// (0x00052188) grid_indicator_nsta_pane

0xbc86,	// (0x00056ab1) clock_nsta_pane_g1

0xbc8f,	// (0x00056aba) clock_nsta_pane_t1

0xbcab,	// (0x00056ad6) cell_indicator_nsta_pane_ParamLimits

0xbcab,	// (0x00056ad6) cell_indicator_nsta_pane

0xbce3,	// (0x00056b0e) cell_indicator_nsta_pane_g1

0xbcf1,	// (0x00056b1c) cell_indicator_nsta_pane_g2

0x0001,

0xfadb,	// (0x0005a906) cell_indicator_nsta_pane_g

0xbd06,	// (0x00056b31) clock_nsta_pane_cp

0xbd0e,	// (0x00056b39) indicator_nsta_pane_cp

0xbd16,	// (0x00056b41) nsta_clock_indic_pane_g1

0x7429,	// (0x00052254) grid_indicator_pane

0x8686,	// (0x000534b1) scroll_pane_cp29

0x5ada,	// (0x00050905) indicator_nsta_pane_cp2_ParamLimits

0x5ada,	// (0x00050905) indicator_nsta_pane_cp2

0x735d,	// (0x00052188) main_apps_wheel_pane

0x9f25,	// (0x00054d50) form_midp_field_text_pane_ParamLimits

0xa074,	// (0x00054e9f) scroll_bar_cp050_ParamLimits

0xbd4e,	// (0x00056b79) cell_indicator_pane_ParamLimits

0xbd4e,	// (0x00056b79) cell_indicator_pane

0xbd66,	// (0x00056b91) cell_indicator_pane_g1

0xbd70,	// (0x00056b9b) grid_wheel_folder_pane_ParamLimits

0xbd70,	// (0x00056b9b) grid_wheel_folder_pane

0xbd84,	// (0x00056baf) list_wheel_apps_pane_ParamLimits

0xbd84,	// (0x00056baf) list_wheel_apps_pane

0xbd97,	// (0x00056bc2) main_apps_wheel_pane_g1_ParamLimits

0xbd97,	// (0x00056bc2) main_apps_wheel_pane_g1

0xbdb3,	// (0x00056bde) main_apps_wheel_pane_g2_ParamLimits

0xbdb3,	// (0x00056bde) main_apps_wheel_pane_g2

0x0001,

0xfaea,	// (0x0005a915) main_apps_wheel_pane_g_ParamLimits

0xfaea,	// (0x0005a915) main_apps_wheel_pane_g

0xbdcf,	// (0x00056bfa) main_apps_wheel_pane_t1_ParamLimits

0xbdcf,	// (0x00056bfa) main_apps_wheel_pane_t1

0xbdf8,	// (0x00056c23) list_wheel_apps_pane_g1

0xbe00,	// (0x00056c2b) list_wheel_apps_pane_g2

0xbe08,	// (0x00056c33) list_wheel_apps_pane_g3

0xbe10,	// (0x00056c3b) list_wheel_apps_pane_g4

0xbe1a,	// (0x00056c45) list_wheel_apps_pane_g5

0x0004,

0xfaef,	// (0x0005a91a) list_wheel_apps_pane_g

0x8bc4,	// (0x000539ef) navi_icon_text_pane

0x96f9,	// (0x00054524) aid_fill_nsta

0xbe3b,	// (0x00056c66) navi_icon_text_pane_g1

0xbe4a,	// (0x00056c75) navi_icon_text_pane_t1

0x8a5a,	// (0x00053885) list_set_graphic_pane_t1_ParamLimits

0x8a5a,	// (0x00053885) list_set_graphic_pane_t1

0xa794,	// (0x000555bf) popup_midp_note_alarm_window_t6_ParamLimits

0xa794,	// (0x000555bf) popup_midp_note_alarm_window_t6

0xa7a6,	// (0x000555d1) popup_midp_note_alarm_window_t7_ParamLimits

0xa7a6,	// (0x000555d1) popup_midp_note_alarm_window_t7

0xa7b8,	// (0x000555e3) popup_midp_note_alarm_window_t8_ParamLimits

0xa7b8,	// (0x000555e3) popup_midp_note_alarm_window_t8

0xa7ca,	// (0x000555f5) popup_midp_note_alarm_window_t9_ParamLimits

0xa7ca,	// (0x000555f5) popup_midp_note_alarm_window_t9

0xa7dc,	// (0x00055607) popup_midp_note_alarm_window_t10_ParamLimits

0xa7dc,	// (0x00055607) popup_midp_note_alarm_window_t10

0xa7ee,	// (0x00055619) popup_midp_note_alarm_window_t11_ParamLimits

0xa7ee,	// (0x00055619) popup_midp_note_alarm_window_t11

0xa800,	// (0x0005562b) scroll_pane_cp17_ParamLimits

0xa800,	// (0x0005562b) scroll_pane_cp17

0x5fc8,	// (0x00050df3) volume_small_pane_cp_g1

0x64f9,	// (0x00051324) volume_small_pane_cp_g2

0x6502,	// (0x0005132d) volume_small_pane_cp_g3

0x650b,	// (0x00051336) volume_small_pane_cp_g4

0x6514,	// (0x0005133f) volume_small_pane_cp_g5

0x651d,	// (0x00051348) volume_small_pane_cp_g6

0x6526,	// (0x00051351) volume_small_pane_cp_g7

0x652f,	// (0x0005135a) volume_small_pane_cp_g8

0x6538,	// (0x00051363) volume_small_pane_cp_g9

0x6541,	// (0x0005136c) volume_small_pane_cp_g10

0x8e25,	// (0x00053c50) midp_ticker_pane_g1_ParamLimits

0x8e31,	// (0x00053c5c) midp_ticker_pane_g2_ParamLimits

0xf79d,	// (0x0005a5c8) midp_ticker_pane_g_ParamLimits

0x8e3d,	// (0x00053c68) midp_ticker_pane_t1_ParamLimits

0x970f,	// (0x0005453a) aid_fill_nsta_2

0xa060,	// (0x00054e8b) list_form2_midp_pane

0xb1bd,	// (0x00055fe8) midp_editing_number_pane_ParamLimits

0xb1cc,	// (0x00055ff7) midp_ticker_pane_ParamLimits

0xbe5f,	// (0x00056c8a) form2_midp_field_pane

0xbe83,	// (0x00056cae) scroll_pane_cp51

0xbea3,	// (0x00056cce) form2_midp_button_pane_ParamLimits

0xbea3,	// (0x00056cce) form2_midp_button_pane

0xbeb5,	// (0x00056ce0) form2_midp_content_pane_ParamLimits

0xbeb5,	// (0x00056ce0) form2_midp_content_pane

0xbecf,	// (0x00056cfa) form2_midp_field_choice_group_pane

0xbed7,	// (0x00056d02) form2_midp_field_pane_g1

0xbedf,	// (0x00056d0a) form2_midp_field_pane_g2

0xbee7,	// (0x00056d12) form2_midp_field_pane_g3

0xbeef,	// (0x00056d1a) form2_midp_field_pane_g4

0x0003,

0xfb14,	// (0x0005a93f) form2_midp_field_pane_g

0xbef7,	// (0x00056d22) form2_midp_gauge_slider_pane

0xbeff,	// (0x00056d2a) form2_midp_gauge_wait_pane

0xbf07,	// (0x00056d32) form2_midp_image_pane_ParamLimits

0xbf07,	// (0x00056d32) form2_midp_image_pane

0xbf22,	// (0x00056d4d) form2_midp_label_pane_ParamLimits

0xbf22,	// (0x00056d4d) form2_midp_label_pane

0xbf41,	// (0x00056d6c) form2_midp_label_pane_cp_ParamLimits

0xbf41,	// (0x00056d6c) form2_midp_label_pane_cp

0xbf62,	// (0x00056d8d) form2_midp_string_pane_ParamLimits

0xbf62,	// (0x00056d8d) form2_midp_string_pane

0x654a,	// (0x00051375) form2_midp_text_pane_ParamLimits

0x654a,	// (0x00051375) form2_midp_text_pane

0xbf74,	// (0x00056d9f) form2_midp_time_pane

0xbf84,	// (0x00056daf) input_focus_pane_cp51_ParamLimits

0xbf84,	// (0x00056daf) input_focus_pane_cp51

0xbf9c,	// (0x00056dc7) form2_midp_label_pane_t1_ParamLimits

0xbf9c,	// (0x00056dc7) form2_midp_label_pane_t1

0x656d,	// (0x00051398) form2_mdip_text_pane_t1_ParamLimits

0x656d,	// (0x00051398) form2_mdip_text_pane_t1

0x7a64,	// (0x0005288f) form2_midp_time_pane_t1

0xbfea,	// (0x00056e15) form2_midp_gauge_slider_pane_t1

0xbffc,	// (0x00056e27) form2_midp_gauge_slider_pane_t2

0xc00e,	// (0x00056e39) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb1d,	// (0x0005a948) form2_midp_gauge_slider_pane_t

0xc020,	// (0x00056e4b) form2_midp_slider_pane

0xc02c,	// (0x00056e57) form2_midp_gauge_wait_pane_t1

0xc03a,	// (0x00056e65) form2_midp_wait_pane_ParamLimits

0xc03a,	// (0x00056e65) form2_midp_wait_pane

0x9d85,	// (0x00054bb0) list_single_2graphic_pane_cp4_ParamLimits

0x9d85,	// (0x00054bb0) list_single_2graphic_pane_cp4

0xc065,	// (0x00056e90) list_single_midp_graphic_pane_cp_ParamLimits

0xc065,	// (0x00056e90) list_single_midp_graphic_pane_cp

0x727d,	// (0x000520a8) list_highlight_pane_cp20

0xc089,	// (0x00056eb4) list_single_2graphic_pane_g1_cp4

0xb65c,	// (0x00056487) list_single_2graphic_pane_g2_cp4

0xc091,	// (0x00056ebc) list_single_2graphic_pane_t1_cp4

0x735d,	// (0x00052188) list_highlight_pane_cp21

0xc0a0,	// (0x00056ecb) list_single_midp_graphic_pane_g4_cp

0xc0af,	// (0x00056eda) list_single_midp_graphic_pane_t1_cp

0xc0c4,	// (0x00056eef) form2_mdip_string_pane_t1_ParamLimits

0xc0c4,	// (0x00056eef) form2_mdip_string_pane_t1

0x727d,	// (0x000520a8) bg_wml_button_pane_cp2

0x7273,	// (0x0005209e) form2_midp_image_pane_g1

0x7972,	// (0x0005279d) list_double_large_graphic_pane_g5_ParamLimits

0x7972,	// (0x0005279d) list_double_large_graphic_pane_g5

0x8d50,	// (0x00053b7b) midp_form_pane_ParamLimits

0x735d,	// (0x00052188) main_apps_wheel_pane_ParamLimits

0x94a3,	// (0x000542ce) popup_preview_window_ParamLimits

0x94a3,	// (0x000542ce) popup_preview_window

0x968a,	// (0x000544b5) popup_touch_info_window_ParamLimits

0x968a,	// (0x000544b5) popup_touch_info_window

0x96ac,	// (0x000544d7) popup_touch_menu_window_ParamLimits

0x96ac,	// (0x000544d7) popup_touch_menu_window

0x7269,	// (0x00052094) bg_popup_sub_pane_cp6

0xc169,	// (0x00056f94) list_touch_menu_pane

0xc171,	// (0x00056f9c) list_single_touch_menu_pane_ParamLimits

0xc171,	// (0x00056f9c) list_single_touch_menu_pane

0xc18c,	// (0x00056fb7) list_single_touch_menu_pane_t1

0x735d,	// (0x00052188) bg_popup_sub_pane_cp7_ParamLimits

0x735d,	// (0x00052188) bg_popup_sub_pane_cp7

0xc19a,	// (0x00056fc5) heading_sub_pane

0xc1a2,	// (0x00056fcd) list_touch_info_pane_ParamLimits

0xc1a2,	// (0x00056fcd) list_touch_info_pane

0xc1b1,	// (0x00056fdc) list_single_touch_info_pane_ParamLimits

0xc1b1,	// (0x00056fdc) list_single_touch_info_pane

0xc1c3,	// (0x00056fee) list_single_touch_info_pane_t1

0xc1d1,	// (0x00056ffc) list_single_touch_info_pane_t2

0x0001,

0xfb2b,	// (0x0005a956) list_single_touch_info_pane_t

0x8d48,	// (0x00053b73) bg_popup_heading_pane_cp

0xc1df,	// (0x0005700a) heading_sub_pane_t1

0x9cf4,	// (0x00054b1f) bg_popup_preview_window_pane_cp_ParamLimits

0x9cf4,	// (0x00054b1f) bg_popup_preview_window_pane_cp

0xc19a,	// (0x00056fc5) heading_preview_pane

0xc1a2,	// (0x00056fcd) list_preview_pane_ParamLimits

0xc1a2,	// (0x00056fcd) list_preview_pane

0xc1ed,	// (0x00057018) popup_preview_window_g1

0xc1b1,	// (0x00056fdc) list_single_preview_pane_ParamLimits

0xc1b1,	// (0x00056fdc) list_single_preview_pane

0xc1f5,	// (0x00057020) list_single_preview_pane_g1

0xc1fd,	// (0x00057028) list_single_preview_pane_t1

0xc1c3,	// (0x00056fee) list_single_preview_pane_t2

0x0001,

0xfb30,	// (0x0005a95b) list_single_preview_pane_t

0xc20b,	// (0x00057036) bg_popup_heading_pane_cp2_ParamLimits

0xc20b,	// (0x00057036) bg_popup_heading_pane_cp2

0xc221,	// (0x0005704c) heading_preview_pane_g1

0xc229,	// (0x00057054) heading_preview_pane_t1_ParamLimits

0xc229,	// (0x00057054) heading_preview_pane_t1

0x744c,	// (0x00052277) soft_indicator_pane_t1_ParamLimits

0x8051,	// (0x00052e7c) scroll_pane_ParamLimits

0x8582,	// (0x000533ad) scroll_sc2_left_pane

0x858b,	// (0x000533b6) scroll_sc2_right_pane

0x85aa,	// (0x000533d5) scroll_bg_pane_g1_ParamLimits

0x85bf,	// (0x000533ea) scroll_bg_pane_g2_ParamLimits

0x85d7,	// (0x00053402) scroll_bg_pane_g3_ParamLimits

0xf72c,	// (0x0005a557) scroll_bg_pane_g_ParamLimits

0x85aa,	// (0x000533d5) scroll_handle_pane_g1_ParamLimits

0x85f9,	// (0x00053424) scroll_handle_pane_g2_ParamLimits

0x85d7,	// (0x00053402) scroll_handle_pane_g3_ParamLimits

0xf733,	// (0x0005a55e) scroll_handle_pane_g_ParamLimits

0x90ee,	// (0x00053f19) popup_choice_list_window_ParamLimits

0x90ee,	// (0x00053f19) popup_choice_list_window

0x9b4c,	// (0x00054977) choice_list_pane

0x9bce,	// (0x000549f9) cell_toolbar_pane_t1

0x9bf6,	// (0x00054a21) toolbar_button_pane_ParamLimits

0xacd0,	// (0x00055afb) ai_gene_pane_1_t2_ParamLimits

0xacd0,	// (0x00055afb) ai_gene_pane_1_t2

0x0001,

0xf950,	// (0x0005a77b) ai_gene_pane_1_t_ParamLimits

0xf950,	// (0x0005a77b) ai_gene_pane_1_t

0xc246,	// (0x00057071) scroll_sc2_left_pane_g1

0xc246,	// (0x00057071) scroll_sc2_right_pane_g1

0x90c6,	// (0x00053ef1) bg_popup_sub_pane_cp10

0xc250,	// (0x0005707b) list_choice_list_pane

0xc267,	// (0x00057092) list_single_choice_list_pane_ParamLimits

0xc267,	// (0x00057092) list_single_choice_list_pane

0xc27b,	// (0x000570a6) list_single_choice_list_pane_g1

0xc283,	// (0x000570ae) list_single_choice_list_pane_t1_ParamLimits

0xc283,	// (0x000570ae) list_single_choice_list_pane_t1

0xc298,	// (0x000570c3) choice_list_pane_g1

0xc2a0,	// (0x000570cb) choice_list_pane_t1

0x7269,	// (0x00052094) input_focus_pane_cp11

0x845c,	// (0x00053287) title_pane_stacon_g2_ParamLimits

0x845c,	// (0x00053287) title_pane_stacon_g2

0x0002,

0xf712,	// (0x0005a53d) title_pane_stacon_g_ParamLimits

0xf712,	// (0x0005a53d) title_pane_stacon_g

0x8d48,	// (0x00053b73) cursor_press_pane

0x91a4,	// (0x00053fcf) popup_fep_hwr_window_ParamLimits

0x91a4,	// (0x00053fcf) popup_fep_hwr_window

0x922e,	// (0x00054059) popup_fep_vkb_window_ParamLimits

0x922e,	// (0x00054059) popup_fep_vkb_window

0xc2ae,	// (0x000570d9) cursor_press_pane_g1

0x0002,

0xfb59,	// (0x0005a984) fep_vkb_side_pane_g_ParamLimits

0x65c5,	// (0x000513f0) fep_hwr_candidate_pane_ParamLimits

0x65c5,	// (0x000513f0) fep_hwr_candidate_pane

0x65ef,	// (0x0005141a) fep_hwr_side_pane_ParamLimits

0x65ef,	// (0x0005141a) fep_hwr_side_pane

0x6611,	// (0x0005143c) fep_hwr_top_pane_ParamLimits

0x6611,	// (0x0005143c) fep_hwr_top_pane

0x6629,	// (0x00051454) fep_hwr_write_pane_ParamLimits

0x6629,	// (0x00051454) fep_hwr_write_pane

0xfb59,	// (0x0005a984) fep_vkb_side_pane_g

0xc2b6,	// (0x000570e1) fep_hwr_top_pane_g1

0xc2c8,	// (0x000570f3) fep_hwr_top_pane_g2

0x6663,	// (0x0005148e) fep_hwr_top_pane_g3

0x0002,

0xfb35,	// (0x0005a960) fep_hwr_top_pane_g

0x6678,	// (0x000514a3) fep_hwr_top_text_pane

0x874e,	// (0x00053579) fep_hwr_top_text_pane_g1

0xc2fe,	// (0x00057129) fep_hwr_top_text_pane_t1

0x6782,	// (0x000515ad) fep_hwr_candidate_pane_g1

0xc557,	// (0x00057382) fep_vkb_keypad_pane_g3_ParamLimits

0xc557,	// (0x00057382) fep_vkb_keypad_pane_g3

0xc583,	// (0x000573ae) fep_vkb_keypad_pane_g4_ParamLimits

0xc583,	// (0x000573ae) fep_vkb_keypad_pane_g4

0xc5fa,	// (0x00057425) fep_vkb_bottom_pane_g2_ParamLimits

0xc5fa,	// (0x00057425) fep_vkb_bottom_pane_g2

0x0001,

0xfb60,	// (0x0005a98b) fep_vkb_bottom_pane_g_ParamLimits

0xfb60,	// (0x0005a98b) fep_vkb_bottom_pane_g

0xc246,	// (0x00057071) cell_vkb_side_pane_g2

0x0001,

0xfb6a,	// (0x0005a995) cell_vkb_side_pane_g

0xc685,	// (0x000574b0) cell_vkb_side_pane_t1

0xc693,	// (0x000574be) cell_vkb_side_pane_t1_copy1

0xc246,	// (0x00057071) bg_fep_vkb_candidate_pane_g2

0xc7d7,	// (0x00057602) cell_vkb_candidate_pane_ParamLimits

0xc30c,	// (0x00057137) aid_size_cell_vkb_ParamLimits

0xc30c,	// (0x00057137) aid_size_cell_vkb

0xc7d7,	// (0x00057602) cell_vkb_candidate_pane

0x67a9,	// (0x000515d4) bg_popup_fep_shadow_pane_g1

0xc39e,	// (0x000571c9) fep_vkb_bottom_pane_ParamLimits

0xc39e,	// (0x000571c9) fep_vkb_bottom_pane

0xc3db,	// (0x00057206) fep_vkb_candidate_pane_ParamLimits

0xc3db,	// (0x00057206) fep_vkb_candidate_pane

0xc405,	// (0x00057230) fep_vkb_keypad_pane_ParamLimits

0xc405,	// (0x00057230) fep_vkb_keypad_pane

0xc438,	// (0x00057263) fep_vkb_side_pane_ParamLimits

0xc438,	// (0x00057263) fep_vkb_side_pane

0xc474,	// (0x0005729f) fep_vkb_top_pane_ParamLimits

0xc474,	// (0x0005729f) fep_vkb_top_pane

0xc4b0,	// (0x000572db) fep_vkb_top_pane_g1_ParamLimits

0xc4b0,	// (0x000572db) fep_vkb_top_pane_g1

0xc4bf,	// (0x000572ea) fep_vkb_top_pane_g2_ParamLimits

0xc4bf,	// (0x000572ea) fep_vkb_top_pane_g2

0xc4ce,	// (0x000572f9) fep_vkb_top_pane_g3_ParamLimits

0xc4ce,	// (0x000572f9) fep_vkb_top_pane_g3

0x0003,

0xfb50,	// (0x0005a97b) fep_vkb_top_pane_g_ParamLimits

0xfb50,	// (0x0005a97b) fep_vkb_top_pane_g

0xc4ec,	// (0x00057317) fep_vkb_top_text_pane_ParamLimits

0xc4ec,	// (0x00057317) fep_vkb_top_text_pane

0xc4fd,	// (0x00057328) fep_vkb_side_pane_g1_ParamLimits

0xc4fd,	// (0x00057328) fep_vkb_side_pane_g1

0xc546,	// (0x00057371) grid_vkb_side_pane_ParamLimits

0xc546,	// (0x00057371) grid_vkb_side_pane

0x67b1,	// (0x000515dc) bg_popup_fep_shadow_pane_g2

0x67ba,	// (0x000515e5) bg_popup_fep_shadow_pane_g3

0x67c2,	// (0x000515ed) bg_popup_fep_shadow_pane_g4

0x67cb,	// (0x000515f6) bg_popup_fep_shadow_pane_g5

0x67d5,	// (0x00051600) bg_popup_fep_shadow_pane_g6

0x67dd,	// (0x00051608) bg_popup_fep_shadow_pane_g7

0x815d,	// (0x00052f88) bg_popup_fep_shadow_pane_g8

0xc5a5,	// (0x000573d0) grid_vkb_keypad_number_pane_ParamLimits

0xc5a5,	// (0x000573d0) grid_vkb_keypad_number_pane

0xc5b9,	// (0x000573e4) grid_vkb_keypad_pane_ParamLimits

0xc5b9,	// (0x000573e4) grid_vkb_keypad_pane

0xc5df,	// (0x0005740a) fep_vkb_bottom_pane_g1_ParamLimits

0xc5df,	// (0x0005740a) fep_vkb_bottom_pane_g1

0xc608,	// (0x00057433) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc608,	// (0x00057433) grid_vkb_keypad_bottom_left_pane

0xc61d,	// (0x00057448) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc61d,	// (0x00057448) grid_vkb_keypad_bottom_right_pane

0xc632,	// (0x0005745d) fep_vkb_top_text_pane_g1

0xc64d,	// (0x00057478) fep_vkb_top_text_pane_t1

0xc662,	// (0x0005748d) cell_vkb_side_pane_ParamLimits

0xc662,	// (0x0005748d) cell_vkb_side_pane

0xc246,	// (0x00057071) cell_vkb_side_pane_g1

0xc6a1,	// (0x000574cc) cell_vkb_keypad_pane_ParamLimits

0xc6a1,	// (0x000574cc) cell_vkb_keypad_pane

0xc72e,	// (0x00057559) cell_vkb_keypad_pane_g1

0x0008,

0xfb7d,	// (0x0005a9a8) bg_popup_fep_shadow_pane_g

0x67ef,	// (0x0005161a) cell_hwr_side_pane_g1

0x67ef,	// (0x0005161a) cell_hwr_side_pane_g2

0xc738,	// (0x00057563) cell_vkb_keypad_pane_t1

0xc746,	// (0x00057571) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc746,	// (0x00057571) cell_vkb_keypad_bottom_left_pane

0xc763,	// (0x0005758e) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc763,	// (0x0005758e) cell_vkb_keypad_bottom_right_pane

0xc246,	// (0x00057071) cell_vkb_keypad_bottom_left_pane_g1

0xc246,	// (0x00057071) cell_vkb_keypad_bottom_right_pane_g1

0xc79c,	// (0x000575c7) cell_vkb_keypad_number_pane_ParamLimits

0xc79c,	// (0x000575c7) cell_vkb_keypad_number_pane

0xc7bb,	// (0x000575e6) cell_vkb_keypad_number_pane_g1

0xc7c5,	// (0x000575f0) cell_vkb_keypad_number_pane_g2

0xc7ce,	// (0x000575f9) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb6f,	// (0x0005a99a) cell_vkb_keypad_number_pane_g

0xc738,	// (0x00057563) cell_vkb_keypad_number_pane_t1

0xc7f8,	// (0x00057623) fep_vkb_candidate_pane_g1

0x0001,

0xfb90,	// (0x0005a9bb) cell_hwr_side_pane_g

0xc811,	// (0x0005763c) cell_hwr_side_pane_t1

0x67f9,	// (0x00051624) cell_hwr_side_pane_t1_copy1

0x6807,	// (0x00051632) cell_hwr_candidate_pane_g1

0x6836,	// (0x00051661) cell_hwr_candidate_pane_t1

0xc246,	// (0x00057071) cell_vkb_candidate_pane_g2

0xc855,	// (0x00057680) cell_vkb_candidate_pane_t1

0x658c,	// (0x000513b7) bg_popup_fep_shadow_pane_ParamLimits

0x658c,	// (0x000513b7) bg_popup_fep_shadow_pane

0x6643,	// (0x0005146e) bg_fep_hwr_top_pane_g4

0xc2da,	// (0x00057105) bg_hwr_side_pane_g1_ParamLimits

0xc2da,	// (0x00057105) bg_hwr_side_pane_g1

0x66b6,	// (0x000514e1) cell_hwr_side_pane_ParamLimits

0x66b6,	// (0x000514e1) cell_hwr_side_pane

0x66f3,	// (0x0005151e) fep_hwr_write_pane_g1_ParamLimits

0x66f3,	// (0x0005151e) fep_hwr_write_pane_g1

0x6700,	// (0x0005152b) fep_hwr_write_pane_g2_ParamLimits

0x6700,	// (0x0005152b) fep_hwr_write_pane_g2

0x670d,	// (0x00051538) fep_hwr_write_pane_g3_ParamLimits

0x670d,	// (0x00051538) fep_hwr_write_pane_g3

0x671b,	// (0x00051546) fep_hwr_write_pane_g4_ParamLimits

0x671b,	// (0x00051546) fep_hwr_write_pane_g4

0x0005,

0xfb3c,	// (0x0005a967) fep_hwr_write_pane_g_ParamLimits

0xfb3c,	// (0x0005a967) fep_hwr_write_pane_g

0x6643,	// (0x0005146e) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x6643,	// (0x0005146e) bg_fep_hwr_candidate_pane_g2

0x6730,	// (0x0005155b) cell_hwr_candidate_pane_ParamLimits

0x6730,	// (0x0005155b) cell_hwr_candidate_pane

0x6782,	// (0x000515ad) fep_hwr_candidate_pane_g1_ParamLimits

0xc33a,	// (0x00057165) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc33a,	// (0x00057165) bg_popup_fep_shadow_pane_cp2

0xc4de,	// (0x00057309) fep_vkb_top_pane_g4_ParamLimits

0xc4de,	// (0x00057309) fep_vkb_top_pane_g4

0xc524,	// (0x0005734f) fep_vkb_side_pane_g2_ParamLimits

0xc524,	// (0x0005734f) fep_vkb_side_pane_g2

0x5488,	// (0x000502b3) list_setting_pane_t4_ParamLimits

0x5488,	// (0x000502b3) list_setting_pane_t4

0x5524,	// (0x0005034f) list_setting_number_pane_t5_ParamLimits

0x5524,	// (0x0005034f) list_setting_number_pane_t5

0x8790,	// (0x000535bb) list_double_heading_pane_cp2_ParamLimits

0x8790,	// (0x000535bb) list_double_heading_pane_cp2

0x80f8,	// (0x00052f23) list_double_heading_pane_g1_cp2_ParamLimits

0x80f8,	// (0x00052f23) list_double_heading_pane_g1_cp2

0x8104,	// (0x00052f2f) list_double_heading_pane_g2_cp2_ParamLimits

0x8104,	// (0x00052f2f) list_double_heading_pane_g2_cp2

0xc863,	// (0x0005768e) list_double_heading_pane_t1_cp2_ParamLimits

0xc863,	// (0x0005768e) list_double_heading_pane_t1_cp2

0xc879,	// (0x000576a4) list_double_heading_pane_t2_cp2_ParamLimits

0xc879,	// (0x000576a4) list_double_heading_pane_t2_cp2

0x7251,	// (0x0005207c) aid_value_unit2

0x4f09,	// (0x0004fd34) popup_preview_fixed_window

0x75e7,	// (0x00052412) bg_popup_preview_window_pane_cp02

0xc88b,	// (0x000576b6) list_preview_fixed_pane

0xc8d1,	// (0x000576fc) list_empty_pane_fp_ParamLimits

0xc8d1,	// (0x000576fc) list_empty_pane_fp

0xc8d1,	// (0x000576fc) list_single_cale_day_pane_fp_ParamLimits

0xc8d1,	// (0x000576fc) list_single_cale_day_pane_fp

0xc8d1,	// (0x000576fc) list_single_graphic_heading_pane_fp_ParamLimits

0xc8d1,	// (0x000576fc) list_single_graphic_heading_pane_fp

0xc8d1,	// (0x000576fc) list_single_graphic_pane_fp_ParamLimits

0xc8d1,	// (0x000576fc) list_single_graphic_pane_fp

0xc8d1,	// (0x000576fc) list_single_heading_pane_fp_ParamLimits

0xc8d1,	// (0x000576fc) list_single_heading_pane_fp

0xc8d1,	// (0x000576fc) list_single_pane_fp_ParamLimits

0xc8d1,	// (0x000576fc) list_single_pane_fp

0xc8ea,	// (0x00057715) list_single_pane_fp_g1_ParamLimits

0xc8ea,	// (0x00057715) list_single_pane_fp_g1

0x7966,	// (0x00052791) list_single_pane_fp_g2_ParamLimits

0x7966,	// (0x00052791) list_single_pane_fp_g2

0x7a77,	// (0x000528a2) list_single_pane_fp_g3_ParamLimits

0x7a77,	// (0x000528a2) list_single_pane_fp_g3

0xc8f6,	// (0x00057721) list_single_pane_fp_g4_ParamLimits

0xc8f6,	// (0x00057721) list_single_pane_fp_g4

0x0003,

0xfba3,	// (0x0005a9ce) list_single_pane_fp_g_ParamLimits

0xfba3,	// (0x0005a9ce) list_single_pane_fp_g

0x7a8b,	// (0x000528b6) list_single_pane_fp_t1_ParamLimits

0x7a8b,	// (0x000528b6) list_single_pane_fp_t1

0x7aa2,	// (0x000528cd) list_single_graphic_pane_fp_g1_ParamLimits

0x7aa2,	// (0x000528cd) list_single_graphic_pane_fp_g1

0xc8ea,	// (0x00057715) list_single_graphic_pane_fp_g2_ParamLimits

0xc8ea,	// (0x00057715) list_single_graphic_pane_fp_g2

0x7966,	// (0x00052791) list_single_graphic_pane_fp_g3_ParamLimits

0x7966,	// (0x00052791) list_single_graphic_pane_fp_g3

0x7a77,	// (0x000528a2) list_single_graphic_pane_fp_g4_ParamLimits

0x7a77,	// (0x000528a2) list_single_graphic_pane_fp_g4

0xc8f6,	// (0x00057721) list_single_graphic_pane_fp_g5_ParamLimits

0xc8f6,	// (0x00057721) list_single_graphic_pane_fp_g5

0x0004,

0xfbac,	// (0x0005a9d7) list_single_graphic_pane_fp_g_ParamLimits

0xfbac,	// (0x0005a9d7) list_single_graphic_pane_fp_g

0x7aae,	// (0x000528d9) list_single_graphic_pane_fp_t1_ParamLimits

0x7aae,	// (0x000528d9) list_single_graphic_pane_fp_t1

0x7aa2,	// (0x000528cd) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x7aa2,	// (0x000528cd) list_single_graphic_heading_pane_fp_g1

0xc8ea,	// (0x00057715) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc8ea,	// (0x00057715) list_single_graphic_heading_pane_fp_g2

0x7966,	// (0x00052791) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x7966,	// (0x00052791) list_single_graphic_heading_pane_fp_g3

0x7a77,	// (0x000528a2) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x7a77,	// (0x000528a2) list_single_graphic_heading_pane_fp_g4

0xc8f6,	// (0x00057721) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc8f6,	// (0x00057721) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfbac,	// (0x0005a9d7) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfbac,	// (0x0005a9d7) list_single_graphic_heading_pane_fp_g

0x7ac4,	// (0x000528ef) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x7ac4,	// (0x000528ef) list_single_graphic_heading_pane_fp_t1

0x7ada,	// (0x00052905) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x7ada,	// (0x00052905) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfbb7,	// (0x0005a9e2) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfbb7,	// (0x0005a9e2) list_single_graphic_heading_pane_fp_t

0x7aec,	// (0x00052917) list_single_cale_day_pane_fp_g1_ParamLimits

0x7aec,	// (0x00052917) list_single_cale_day_pane_fp_g1

0xc902,	// (0x0005772d) list_single_cale_day_pane_fp_g2_ParamLimits

0xc902,	// (0x0005772d) list_single_cale_day_pane_fp_g2

0x7b24,	// (0x0005294f) list_single_cale_day_pane_fp_g3_ParamLimits

0x7b24,	// (0x0005294f) list_single_cale_day_pane_fp_g3

0x7b4c,	// (0x00052977) list_single_cale_day_pane_fp_g4_ParamLimits

0x7b4c,	// (0x00052977) list_single_cale_day_pane_fp_g4

0x7b70,	// (0x0005299b) list_single_cale_day_pane_fp_g5_ParamLimits

0x7b70,	// (0x0005299b) list_single_cale_day_pane_fp_g5

0x0004,

0xfbbc,	// (0x0005a9e7) list_single_cale_day_pane_fp_g_ParamLimits

0xfbbc,	// (0x0005a9e7) list_single_cale_day_pane_fp_g

0x7b94,	// (0x000529bf) list_single_cale_day_pane_fp_t1_ParamLimits

0x7b94,	// (0x000529bf) list_single_cale_day_pane_fp_t1

0x7bba,	// (0x000529e5) list_single_cale_day_pane_fp_t2_ParamLimits

0x7bba,	// (0x000529e5) list_single_cale_day_pane_fp_t2

0x7bd3,	// (0x000529fe) list_single_cale_day_pane_fp_t3_ParamLimits

0x7bd3,	// (0x000529fe) list_single_cale_day_pane_fp_t3

0x0002,

0xfbc7,	// (0x0005a9f2) list_single_cale_day_pane_fp_t_ParamLimits

0xfbc7,	// (0x0005a9f2) list_single_cale_day_pane_fp_t

0xc8ea,	// (0x00057715) list_empty_pane_fp_g1_ParamLimits

0xc8ea,	// (0x00057715) list_empty_pane_fp_g1

0x7bec,	// (0x00052a17) list_empty_pane_fp_t1

0x7bfa,	// (0x00052a25) list_empty_pane_fp_t2

0x0001,

0xfbce,	// (0x0005a9f9) list_empty_pane_fp_t

0xc8ea,	// (0x00057715) list_single_heading_pane_fp_g1_ParamLimits

0xc8ea,	// (0x00057715) list_single_heading_pane_fp_g1

0x7966,	// (0x00052791) list_single_heading_pane_fp_g2_ParamLimits

0x7966,	// (0x00052791) list_single_heading_pane_fp_g2

0x7a77,	// (0x000528a2) list_single_heading_pane_fp_g3_ParamLimits

0x7a77,	// (0x000528a2) list_single_heading_pane_fp_g3

0x0002,

0xfbd3,	// (0x0005a9fe) list_single_heading_pane_fp_g_ParamLimits

0xfbd3,	// (0x0005a9fe) list_single_heading_pane_fp_g

0x7c08,	// (0x00052a33) list_single_heading_pane_fp_t1_ParamLimits

0x7c08,	// (0x00052a33) list_single_heading_pane_fp_t1

0x7c1a,	// (0x00052a45) list_single_heading_pane_fp_t2_ParamLimits

0x7c1a,	// (0x00052a45) list_single_heading_pane_fp_t2

0x0001,

0xfbda,	// (0x0005aa05) list_single_heading_pane_fp_t_ParamLimits

0xfbda,	// (0x0005aa05) list_single_heading_pane_fp_t

0x82f3,	// (0x0005311e) aid_size_cell_fast

0x7559,	// (0x00052384) soft_indicator_pane_cp1_t1

0x8330,	// (0x0005315b) cell_app_pane_cp2_ParamLimits

0x8330,	// (0x0005315b) cell_app_pane_cp2

0x65ae,	// (0x000513d9) fep_hwr_candidate_drop_down_list_pane

0x679c,	// (0x000515c7) fep_hwr_candidate_pane_g3_ParamLimits

0x679c,	// (0x000515c7) fep_hwr_candidate_pane_g3

0x39a6,	// (0x0004e7d1) fep_hwr_candidate_pane_g4_ParamLimits

0x39a6,	// (0x0004e7d1) fep_hwr_candidate_pane_g4

0x0002,

0xfb49,	// (0x0005a974) fep_hwr_candidate_pane_g_ParamLimits

0xfb49,	// (0x0005a974) fep_hwr_candidate_pane_g

0xc3ca,	// (0x000571f5) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc3ca,	// (0x000571f5) fep_vkb_candidate_drop_down_list_pane

0xc800,	// (0x0005762b) fep_vkb_candidate_pane_g3

0xc808,	// (0x00057633) fep_vkb_candidate_pane_g4

0x0002,

0xfb76,	// (0x0005a9a1) fep_vkb_candidate_pane_g

0x6807,	// (0x00051632) cell_hwr_candidate_pane_g1_ParamLimits

0x6815,	// (0x00051640) cell_hwr_candidate_pane_g3_ParamLimits

0x6815,	// (0x00051640) cell_hwr_candidate_pane_g3

0xdb7c,	// (0x000589a7) cell_hwr_candidate_pane_g4_ParamLimits

0xdb7c,	// (0x000589a7) cell_hwr_candidate_pane_g4

0x0002,

0xfb95,	// (0x0005a9c0) cell_hwr_candidate_pane_g_ParamLimits

0xfb95,	// (0x0005a9c0) cell_hwr_candidate_pane_g

0xc81f,	// (0x0005764a) cell_vkb_candidate_pane_g3_ParamLimits

0xc81f,	// (0x0005764a) cell_vkb_candidate_pane_g3

0xc83a,	// (0x00057665) cell_vkb_candidate_pane_g4_ParamLimits

0xc83a,	// (0x00057665) cell_vkb_candidate_pane_g4

0xc90e,	// (0x00057739) cell_app_pane_cp2_g1_ParamLimits

0xc90e,	// (0x00057739) cell_app_pane_cp2_g1

0xc92c,	// (0x00057757) cell_app_pane_cp2_g2_ParamLimits

0xc92c,	// (0x00057757) cell_app_pane_cp2_g2

0x0001,

0xfbdf,	// (0x0005aa0a) cell_app_pane_cp2_g_ParamLimits

0xfbdf,	// (0x0005aa0a) cell_app_pane_cp2_g

0xc938,	// (0x00057763) cell_app_pane_cp2_t1_ParamLimits

0xc938,	// (0x00057763) cell_app_pane_cp2_t1

0x80de,	// (0x00052f09) grid_highlight_pane_cp1_ParamLimits

0x80de,	// (0x00052f09) grid_highlight_pane_cp1

0x6854,	// (0x0005167f) cell_hwr_candidate_pane_cp1_ParamLimits

0x6854,	// (0x0005167f) cell_hwr_candidate_pane_cp1

0x6807,	// (0x00051632) fep_hwr_candidate_drop_down_list_pane_g1

0x6878,	// (0x000516a3) fep_hwr_candidate_drop_down_list_pane_g2

0x6885,	// (0x000516b0) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbe4,	// (0x0005aa0f) fep_hwr_candidate_drop_down_list_pane_g

0x6892,	// (0x000516bd) fep_hwr_candidate_drop_down_list_scroll_pane

0x689b,	// (0x000516c6) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x689b,	// (0x000516c6) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x68a8,	// (0x000516d3) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x68a8,	// (0x000516d3) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x68b5,	// (0x000516e0) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x68b5,	// (0x000516e0) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x68c2,	// (0x000516ed) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x68c2,	// (0x000516ed) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x68dd,	// (0x00051708) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x68dd,	// (0x00051708) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x68f8,	// (0x00051723) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x68f8,	// (0x00051723) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x6913,	// (0x0005173e) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6913,	// (0x0005173e) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x692e,	// (0x00051759) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x692e,	// (0x00051759) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbeb,	// (0x0005aa16) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbeb,	// (0x0005aa16) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc94a,	// (0x00057775) cell_vkb_candidate_pane_cp1_ParamLimits

0xc94a,	// (0x00057775) cell_vkb_candidate_pane_cp1

0xc4de,	// (0x00057309) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc4de,	// (0x00057309) fep_vkb_candidate_drop_down_list_pane_g1

0xc970,	// (0x0005779b) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc970,	// (0x0005779b) fep_vkb_candidate_drop_down_list_pane_g2

0xc97d,	// (0x000577a8) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc97d,	// (0x000577a8) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbfc,	// (0x0005aa27) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbfc,	// (0x0005aa27) fep_vkb_candidate_drop_down_list_pane_g

0xc98a,	// (0x000577b5) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc98a,	// (0x000577b5) fep_vkb_candidate_drop_down_list_scroll_pane

0xc997,	// (0x000577c2) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc997,	// (0x000577c2) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc9a4,	// (0x000577cf) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc9a4,	// (0x000577cf) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc9b0,	// (0x000577db) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc9b0,	// (0x000577db) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc9bc,	// (0x000577e7) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc9bc,	// (0x000577e7) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc9dd,	// (0x00057808) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc9dd,	// (0x00057808) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc9fe,	// (0x00057829) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc9fe,	// (0x00057829) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xca1f,	// (0x0005784a) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xca1f,	// (0x0005784a) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xca40,	// (0x0005786b) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xca40,	// (0x0005786b) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfc03,	// (0x0005aa2e) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfc03,	// (0x0005aa2e) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x7287,	// (0x000520b2) title_pane_g1_ParamLimits

0x7294,	// (0x000520bf) title_pane_g2_ParamLimits

0xf592,	// (0x0005a3bd) title_pane_g_ParamLimits

0x873e,	// (0x00053569) aid_call2_pane

0x8746,	// (0x00053571) aid_call_pane

0x874e,	// (0x00053579) popup_clock_analogue_window_g1

0x874e,	// (0x00053579) popup_clock_analogue_window_g2

0x596b,	// (0x00050796) popup_clock_analogue_window_g3

0x5974,	// (0x0005079f) popup_clock_analogue_window_g4

0x7273,	// (0x0005209e) popup_clock_analogue_window_g5

0x0004,

0xf741,	// (0x0005a56c) popup_clock_analogue_window_g

0x597c,	// (0x000507a7) popup_clock_analogue_window_t1

0x598a,	// (0x000507b5) clock_digital_number_pane_ParamLimits

0x598a,	// (0x000507b5) clock_digital_number_pane

0x5996,	// (0x000507c1) clock_digital_number_pane_cp02_ParamLimits

0x5996,	// (0x000507c1) clock_digital_number_pane_cp02

0x59a2,	// (0x000507cd) clock_digital_number_pane_cp03_ParamLimits

0x59a2,	// (0x000507cd) clock_digital_number_pane_cp03

0x59ae,	// (0x000507d9) clock_digital_number_pane_cp04_ParamLimits

0x59ae,	// (0x000507d9) clock_digital_number_pane_cp04

0x59ba,	// (0x000507e5) clock_digital_separator_pane_ParamLimits

0x59ba,	// (0x000507e5) clock_digital_separator_pane

0x59c6,	// (0x000507f1) popup_clock_digital_window_t1_ParamLimits

0x59c6,	// (0x000507f1) popup_clock_digital_window_t1

0x7273,	// (0x0005209e) clock_digital_number_pane_g1

0x7273,	// (0x0005209e) clock_digital_number_pane_g2

0x0001,

0xf74c,	// (0x0005a577) clock_digital_number_pane_g

0x7273,	// (0x0005209e) clock_digital_separator_pane_g1

0x7273,	// (0x0005209e) clock_digital_separator_pane_g2

0x0001,

0xf74c,	// (0x0005a577) clock_digital_separator_pane_g

0x96f9,	// (0x00054524) aid_fill_nsta_ParamLimits

0x9849,	// (0x00054674) indicator_nsta_pane_ParamLimits

0x99d9,	// (0x00054804) popup_clock_analogue_window

0x99d9,	// (0x00054804) popup_clock_digital_window

0x735d,	// (0x00052188) grid_indicator_nsta_pane_ParamLimits

0xbc9d,	// (0x00056ac8) clock_nsta_pane_t2

0x0001,

0xfad6,	// (0x0005a901) clock_nsta_pane_t

0x592f,	// (0x0005075a) aid_size_max_handle

0x5939,	// (0x00050764) aid_size_min_handle

0x8d48,	// (0x00053b73) editor_scroll_pane

0xca5b,	// (0x00057886) ex_editor_pane

0x8260,	// (0x0005308b) scroll_pane_cp13

0x807d,	// (0x00052ea8) scroll_pane_cp14

0x8778,	// (0x000535a3) scroll_pane_cp36

0x87a6,	// (0x000535d1) list_single_graphic_hl_pane_cp2_ParamLimits

0x87a6,	// (0x000535d1) list_single_graphic_hl_pane_cp2

0x79c6,	// (0x000527f1) list_single_graphic_hl_pane_ParamLimits

0x79c6,	// (0x000527f1) list_single_graphic_hl_pane

0x7c30,	// (0x00052a5b) aid_size_min_hl_cp1

0xca63,	// (0x0005788e) list_highlight_pane_cp34_ParamLimits

0xca63,	// (0x0005788e) list_highlight_pane_cp34

0xca74,	// (0x0005789f) list_single_graphic_hl_pane_g1_ParamLimits

0xca74,	// (0x0005789f) list_single_graphic_hl_pane_g1

0x7c39,	// (0x00052a64) list_single_graphic_hl_pane_g2_ParamLimits

0x7c39,	// (0x00052a64) list_single_graphic_hl_pane_g2

0x7c39,	// (0x00052a64) list_single_graphic_hl_pane_g3_ParamLimits

0x7c39,	// (0x00052a64) list_single_graphic_hl_pane_g3

0x79f2,	// (0x0005281d) list_single_graphic_hl_pane_g4_ParamLimits

0x79f2,	// (0x0005281d) list_single_graphic_hl_pane_g4

0x7c45,	// (0x00052a70) list_single_graphic_hl_pane_g5_ParamLimits

0x7c45,	// (0x00052a70) list_single_graphic_hl_pane_g5

0x0004,

0xfc14,	// (0x0005aa3f) list_single_graphic_hl_pane_g_ParamLimits

0xfc14,	// (0x0005aa3f) list_single_graphic_hl_pane_g

0x7c59,	// (0x00052a84) list_single_graphic_hl_pane_t1_ParamLimits

0x7c59,	// (0x00052a84) list_single_graphic_hl_pane_t1

0xca81,	// (0x000578ac) aid_size_min_hl_cp2

0xca8a,	// (0x000578b5) list_highlight_pane_cp34_cp2_ParamLimits

0xca8a,	// (0x000578b5) list_highlight_pane_cp34_cp2

0xca74,	// (0x0005789f) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xca74,	// (0x0005789f) list_single_graphic_hl_pane_g1_cp2

0xca97,	// (0x000578c2) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xca97,	// (0x000578c2) list_single_graphic_hl_pane_g2_cp2

0xcaa3,	// (0x000578ce) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xcaa3,	// (0x000578ce) list_single_graphic_hl_pane_g3_cp2

0x898e,	// (0x000537b9) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x898e,	// (0x000537b9) list_single_graphic_hl_pane_g4_cp2

0xcab1,	// (0x000578dc) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xcab1,	// (0x000578dc) list_single_graphic_hl_pane_g5_cp2

0x5ced,	// (0x00050b18) control_pane_g4_ParamLimits

0x5ced,	// (0x00050b18) control_pane_g4

0x90c6,	// (0x00053ef1) bg_popup_sub_pane_cp10_ParamLimits

0xc250,	// (0x0005707b) list_choice_list_pane_ParamLimits

0xc25f,	// (0x0005708a) scroll_pane_cp23

0x75e7,	// (0x00052412) bg_popup_preview_window_pane_cp02_ParamLimits

0xc88b,	// (0x000576b6) list_preview_fixed_pane_ParamLimits

0xc8a1,	// (0x000576cc) list_preview_fixed_pane_cp_ParamLimits

0xc8a1,	// (0x000576cc) list_preview_fixed_pane_cp

0xc8ad,	// (0x000576d8) popup_preview_fixed_window_g1_ParamLimits

0xc8ad,	// (0x000576d8) popup_preview_fixed_window_g1

0xc8b9,	// (0x000576e4) popup_preview_fixed_window_g2_ParamLimits

0xc8b9,	// (0x000576e4) popup_preview_fixed_window_g2

0x0002,

0xfb9c,	// (0x0005a9c7) popup_preview_fixed_window_g_ParamLimits

0xfb9c,	// (0x0005a9c7) popup_preview_fixed_window_g

0x58a1,	// (0x000506cc) aid_navi_side_left_pane_ParamLimits

0x58b6,	// (0x000506e1) aid_navi_side_right_pane_ParamLimits

0x58ce,	// (0x000506f9) navi_icon_pane_stacon_ParamLimits

0x58e2,	// (0x0005070d) navi_navi_pane_stacon_ParamLimits

0x58ce,	// (0x000506f9) navi_text_pane_stacon_ParamLimits

0x7269,	// (0x00052094) main_text_info_pane

0xcadb,	// (0x00057906) listscroll_text_info_pane

0xcae3,	// (0x0005790e) list_text_info_pane_ParamLimits

0xcae3,	// (0x0005790e) list_text_info_pane

0xcaf2,	// (0x0005791d) scroll_pane_cp24_ParamLimits

0xcaf2,	// (0x0005791d) scroll_pane_cp24

0xcb10,	// (0x0005793b) list_text_info_pane_t1_ParamLimits

0xcb10,	// (0x0005793b) list_text_info_pane_t1

0x910c,	// (0x00053f37) popup_fast_swap2_window_ParamLimits

0x910c,	// (0x00053f37) popup_fast_swap2_window

0xcb35,	// (0x00057960) aid_size_cell_fast2

0x7269,	// (0x00052094) bg_popup_window_pane_cp17

0xa08c,	// (0x00054eb7) heading_pane_cp2

0x7847,	// (0x00052672) listscroll_fast2_pane

0xcb3f,	// (0x0005796a) grid_fast2_pane

0xcb49,	// (0x00057974) listscroll_fast2_pane_g1

0xcb53,	// (0x0005797e) listscroll_fast2_pane_g2

0x0001,

0xfc1f,	// (0x0005aa4a) listscroll_fast2_pane_g

0x8260,	// (0x0005308b) scroll_pane_cp26

0xcb5d,	// (0x00057988) cell_fast2_pane_ParamLimits

0xcb5d,	// (0x00057988) cell_fast2_pane

0xcb74,	// (0x0005799f) cell_fast2_pane_g1

0xcb7d,	// (0x000579a8) cell_fast2_pane_g2

0xcb86,	// (0x000579b1) cell_fast2_pane_g3

0x0002,

0xfc24,	// (0x0005aa4f) cell_fast2_pane_g

0x7e3a,	// (0x00052c65) grid_highlight_pane_cp9

0x7e4f,	// (0x00052c7a) main_eswt_pane_ParamLimits

0x7e4f,	// (0x00052c7a) main_eswt_pane

0xcb07,	// (0x00057932) list_single_text_info_pane

0xcb8e,	// (0x000579b9) eswt_ctrl_button_pane

0xcb8e,	// (0x000579b9) eswt_ctrl_canvas_pane

0xcb96,	// (0x000579c1) eswt_ctrl_combo_pane

0xcb8e,	// (0x000579b9) eswt_ctrl_default_pane

0xcb8e,	// (0x000579b9) eswt_ctrl_label_pane

0xcb9e,	// (0x000579c9) eswt_ctrl_wait_pane

0xcba6,	// (0x000579d1) eswt_shell_pane

0x7269,	// (0x00052094) listscroll_eswt_app_pane

0xcbc6,	// (0x000579f1) popup_eswt_tasktip_window_ParamLimits

0xcbc6,	// (0x000579f1) popup_eswt_tasktip_window

0x9cf4,	// (0x00054b1f) bg_popup_window_pane_cp18

0xcbd7,	// (0x00057a02) eswt_control_pane_g1_ParamLimits

0xcbd7,	// (0x00057a02) eswt_control_pane_g1

0xcbe4,	// (0x00057a0f) eswt_control_pane_g2_ParamLimits

0xcbe4,	// (0x00057a0f) eswt_control_pane_g2

0xcbf1,	// (0x00057a1c) eswt_control_pane_g3_ParamLimits

0xcbf1,	// (0x00057a1c) eswt_control_pane_g3

0xcbfe,	// (0x00057a29) eswt_control_pane_g4_ParamLimits

0xcbfe,	// (0x00057a29) eswt_control_pane_g4

0x0003,

0xfc2b,	// (0x0005aa56) eswt_control_pane_g_ParamLimits

0xfc2b,	// (0x0005aa56) eswt_control_pane_g

0x80de,	// (0x00052f09) bg_button_pane_ParamLimits

0x80de,	// (0x00052f09) bg_button_pane

0x7e4f,	// (0x00052c7a) common_borders_pane_copy2_ParamLimits

0x7e4f,	// (0x00052c7a) common_borders_pane_copy2

0xcc0b,	// (0x00057a36) control_button_pane_g1_ParamLimits

0xcc0b,	// (0x00057a36) control_button_pane_g1

0xcc17,	// (0x00057a42) control_button_pane_g2_ParamLimits

0xcc17,	// (0x00057a42) control_button_pane_g2

0xcc23,	// (0x00057a4e) control_button_pane_g3_ParamLimits

0xcc23,	// (0x00057a4e) control_button_pane_g3

0x0002,

0xfc34,	// (0x0005aa5f) control_button_pane_g_ParamLimits

0xfc34,	// (0x0005aa5f) control_button_pane_g

0xcc37,	// (0x00057a62) control_button_pane_t1

0xcc45,	// (0x00057a70) control_button_pane_t2

0x0001,

0xfc3b,	// (0x0005aa66) control_button_pane_t

0x9c02,	// (0x00054a2d) bg_button_pane_g1

0x9c12,	// (0x00054a3d) bg_button_pane_g2

0x9c0a,	// (0x00054a35) bg_button_pane_g3

0x9c22,	// (0x00054a4d) bg_button_pane_g4

0x9c1a,	// (0x00054a45) bg_button_pane_g5

0x9c2a,	// (0x00054a55) bg_button_pane_g6

0x9c32,	// (0x00054a5d) bg_button_pane_g7

0x9c42,	// (0x00054a6d) bg_button_pane_g8

0x9c3a,	// (0x00054a65) bg_button_pane_g9

0x0008,

0xf8a4,	// (0x0005a6cf) bg_button_pane_g

0xc20b,	// (0x00057036) common_borders_pane_ParamLimits

0xc20b,	// (0x00057036) common_borders_pane

0xcbd7,	// (0x00057a02) eswt_control_pane_g1_copy1_ParamLimits

0xcbd7,	// (0x00057a02) eswt_control_pane_g1_copy1

0xcbe4,	// (0x00057a0f) eswt_control_pane_g2_copy1_ParamLimits

0xcbe4,	// (0x00057a0f) eswt_control_pane_g2_copy1

0xcbf1,	// (0x00057a1c) eswt_control_pane_g3_copy1_ParamLimits

0xcbf1,	// (0x00057a1c) eswt_control_pane_g3_copy1

0xcbfe,	// (0x00057a29) eswt_control_pane_g4_copy1_ParamLimits

0xcbfe,	// (0x00057a29) eswt_control_pane_g4_copy1

0xc246,	// (0x00057071) bg_eswt_ctrl_canvas_pane_g1

0xc20b,	// (0x00057036) common_borders_pane_cp2_ParamLimits

0xc20b,	// (0x00057036) common_borders_pane_cp2

0xc20b,	// (0x00057036) common_borders_pane_cp3_ParamLimits

0xc20b,	// (0x00057036) common_borders_pane_cp3

0xcc53,	// (0x00057a7e) separator_horizontal_pane

0xcc5b,	// (0x00057a86) separator_vertical_pane

0xcbd7,	// (0x00057a02) eswt_control_pane_g1_copy2_ParamLimits

0xcbd7,	// (0x00057a02) eswt_control_pane_g1_copy2

0xcbe4,	// (0x00057a0f) eswt_control_pane_g2_copy2_ParamLimits

0xcbe4,	// (0x00057a0f) eswt_control_pane_g2_copy2

0xcbf1,	// (0x00057a1c) eswt_control_pane_g3_copy2_ParamLimits

0xcbf1,	// (0x00057a1c) eswt_control_pane_g3_copy2

0xcbfe,	// (0x00057a29) eswt_control_pane_g4_copy2_ParamLimits

0xcbfe,	// (0x00057a29) eswt_control_pane_g4_copy2

0x7269,	// (0x00052094) common_borders_pane_cp4

0xcc64,	// (0x00057a8f) separator_horizontal_pane_g1

0xcc6d,	// (0x00057a98) separator_horizontal_pane_g2

0xcc76,	// (0x00057aa1) separator_horizontal_pane_g3

0x0002,

0xfc40,	// (0x0005aa6b) separator_horizontal_pane_g

0xcbd7,	// (0x00057a02) eswt_control_pane_g1_copy3_ParamLimits

0xcbd7,	// (0x00057a02) eswt_control_pane_g1_copy3

0xcbe4,	// (0x00057a0f) eswt_control_pane_g2_copy3_ParamLimits

0xcbe4,	// (0x00057a0f) eswt_control_pane_g2_copy3

0xcbf1,	// (0x00057a1c) eswt_control_pane_g3_copy3_ParamLimits

0xcbf1,	// (0x00057a1c) eswt_control_pane_g3_copy3

0xcbfe,	// (0x00057a29) eswt_control_pane_g4_copy3_ParamLimits

0xcbfe,	// (0x00057a29) eswt_control_pane_g4_copy3

0x7269,	// (0x00052094) common_borders_pane_cp5

0xcc7f,	// (0x00057aaa) separator_vertical_pane_g1

0xcc88,	// (0x00057ab3) separator_vertical_pane_g2

0xcc91,	// (0x00057abc) separator_vertical_pane_g3

0x0002,

0xfc47,	// (0x0005aa72) separator_vertical_pane_g

0xcbd7,	// (0x00057a02) eswt_control_pane_g1_copy4_ParamLimits

0xcbd7,	// (0x00057a02) eswt_control_pane_g1_copy4

0xcbe4,	// (0x00057a0f) eswt_control_pane_g2_copy4_ParamLimits

0xcbe4,	// (0x00057a0f) eswt_control_pane_g2_copy4

0xcbf1,	// (0x00057a1c) eswt_control_pane_g3_copy4_ParamLimits

0xcbf1,	// (0x00057a1c) eswt_control_pane_g3_copy4

0xcbfe,	// (0x00057a29) eswt_control_pane_g4_copy4_ParamLimits

0xcbfe,	// (0x00057a29) eswt_control_pane_g4_copy4

0xcc9a,	// (0x00057ac5) eswt_ctrl_combo_button_pane

0xcca2,	// (0x00057acd) eswt_ctrl_input_pane

0xccaa,	// (0x00057ad5) popup_choice_list_window_cp70

0xccb2,	// (0x00057add) eswt_ctrl_input_pane_t1

0x7269,	// (0x00052094) input_focus_pane_cp70

0xc20b,	// (0x00057036) bg_button_pane_cp70_ParamLimits

0xc20b,	// (0x00057036) bg_button_pane_cp70

0xccc0,	// (0x00057aeb) eswt_ctrl_combo_button_pane_g1

0xccc8,	// (0x00057af3) wait_bar_pane_cp70

0x9cf4,	// (0x00054b1f) bg_popup_window_pane_cp70_ParamLimits

0x9cf4,	// (0x00054b1f) bg_popup_window_pane_cp70

0xccd0,	// (0x00057afb) popup_eswt_tasktip_window_t1

0xcce6,	// (0x00057b11) wait_bar_pane_cp71_ParamLimits

0xcce6,	// (0x00057b11) wait_bar_pane_cp71

0xccf2,	// (0x00057b1d) grid_eswt_app_pane

0x8582,	// (0x000533ad) scroll_pane_cp70

0xccfb,	// (0x00057b26) cell_eswt_app_pane_ParamLimits

0xccfb,	// (0x00057b26) cell_eswt_app_pane

0xcd2d,	// (0x00057b58) cell_eswt_app_pane_g1_ParamLimits

0xcd2d,	// (0x00057b58) cell_eswt_app_pane_g1

0xcd5c,	// (0x00057b87) cell_eswt_app_pane_g2_ParamLimits

0xcd5c,	// (0x00057b87) cell_eswt_app_pane_g2

0x0001,

0xfc4e,	// (0x0005aa79) cell_eswt_app_pane_g_ParamLimits

0xfc4e,	// (0x0005aa79) cell_eswt_app_pane_g

0xcd85,	// (0x00057bb0) cell_eswt_app_pane_t1_ParamLimits

0xcd85,	// (0x00057bb0) cell_eswt_app_pane_t1

0xcdb7,	// (0x00057be2) grid_highlight_pane_cp70_ParamLimits

0xcdb7,	// (0x00057be2) grid_highlight_pane_cp70

0xb154,	// (0x00055f7f) set_content_pane_g1

0x8ff8,	// (0x00053e23) status_small_volume_pane

0x6949,	// (0x00051774) status_small_volume_pane_g1

0x6951,	// (0x0005177c) volume_small2_pane

0x695a,	// (0x00051785) volume_small2_pane_g1

0x6963,	// (0x0005178e) volume_small2_pane_g2

0x696c,	// (0x00051797) volume_small2_pane_g3

0x6975,	// (0x000517a0) volume_small2_pane_g4

0x697e,	// (0x000517a9) volume_small2_pane_g5

0x6987,	// (0x000517b2) volume_small2_pane_g6

0x6990,	// (0x000517bb) volume_small2_pane_g7

0x6999,	// (0x000517c4) volume_small2_pane_g8

0x69a2,	// (0x000517cd) volume_small2_pane_g9

0x69ab,	// (0x000517d6) volume_small2_pane_g10

0x0009,

0xfc53,	// (0x0005aa7e) volume_small2_pane_g

0xc632,	// (0x0005745d) fep_vkb_top_text_pane_g1_ParamLimits

0xc64d,	// (0x00057478) fep_vkb_top_text_pane_t1_ParamLimits

0xc8c5,	// (0x000576f0) popup_preview_fixed_window_g3_ParamLimits

0xc8c5,	// (0x000576f0) popup_preview_fixed_window_g3

0x961d,	// (0x00054448) popup_toolbar_trans_pane

0xaff9,	// (0x00055e24) aid_height_set_list_ParamLimits

0xb00a,	// (0x00055e35) aid_size_parent_ParamLimits

0x90c6,	// (0x00053ef1) list_highlight_pane_cp2_ParamLimits

0xb154,	// (0x00055f7f) set_content_pane_g1_ParamLimits

0xb25d,	// (0x00056088) list_single_image_pane_ParamLimits

0xb25d,	// (0x00056088) list_single_image_pane

0xcdc3,	// (0x00057bee) aid_size_cell_image_ParamLimits

0xcdc3,	// (0x00057bee) aid_size_cell_image

0xcdd0,	// (0x00057bfb) grid_single_image_pane_ParamLimits

0xcdd0,	// (0x00057bfb) grid_single_image_pane

0x80f8,	// (0x00052f23) list_single_image_pane_g1_ParamLimits

0x80f8,	// (0x00052f23) list_single_image_pane_g1

0x8104,	// (0x00052f2f) list_single_image_pane_g2_ParamLimits

0x8104,	// (0x00052f2f) list_single_image_pane_g2

0x0001,

0xfc68,	// (0x0005aa93) list_single_image_pane_g_ParamLimits

0xfc68,	// (0x0005aa93) list_single_image_pane_g

0xcdde,	// (0x00057c09) list_single_image_pane_t1_ParamLimits

0xcdde,	// (0x00057c09) list_single_image_pane_t1

0xcdf4,	// (0x00057c1f) cell_image_list_pane_ParamLimits

0xcdf4,	// (0x00057c1f) cell_image_list_pane

0xce0a,	// (0x00057c35) cell_image_list_pane_g1

0xce13,	// (0x00057c3e) cell_image_list_pane_g2

0x0001,

0xfc6d,	// (0x0005aa98) cell_image_list_pane_g

0xce1c,	// (0x00057c47) aid_size_cell_tb_trans_pane

0x80de,	// (0x00052f09) bg_tb_trans_pane

0xce2e,	// (0x00057c59) grid_tb_trans_pane

0x9c02,	// (0x00054a2d) bg_tb_trans_pane_g1

0x9c12,	// (0x00054a3d) bg_tb_trans_pane_g2

0x9c0a,	// (0x00054a35) bg_tb_trans_pane_g3

0x9c22,	// (0x00054a4d) bg_tb_trans_pane_g4

0x9c1a,	// (0x00054a45) bg_tb_trans_pane_g5

0x9c42,	// (0x00054a6d) bg_tb_trans_pane_g6

0x9c3a,	// (0x00054a65) bg_tb_trans_pane_g7

0x9c2a,	// (0x00054a55) bg_tb_trans_pane_g8

0x9c32,	// (0x00054a5d) bg_tb_trans_pane_g9

0x0008,

0xfc72,	// (0x0005aa9d) bg_tb_trans_pane_g

0xce42,	// (0x00057c6d) cell_toolbar_trans_pane_ParamLimits

0xce42,	// (0x00057c6d) cell_toolbar_trans_pane

0xc246,	// (0x00057071) cell_toolbar_trans_pane_g1

0xbe67,	// (0x00056c92) list_form2_midp_pane_t1

0xbe75,	// (0x00056ca0) list_form2_midp_pane_t2

0x0001,

0xfb0f,	// (0x0005a93a) list_form2_midp_pane_t

0xbe83,	// (0x00056cae) scroll_pane_cp51_ParamLimits

0xc04a,	// (0x00056e75) form2_midp_wait_pane_g1

0xc053,	// (0x00056e7e) form2_midp_wait_pane_g2

0xc05c,	// (0x00056e87) form2_midp_wait_pane_g3

0x0002,

0xfb24,	// (0x0005a94f) form2_midp_wait_pane_g

0x735d,	// (0x00052188) list_highlight_pane_cp21_ParamLimits

0xc0a0,	// (0x00056ecb) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xc0af,	// (0x00056eda) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xb216,	// (0x00056041) list_single_2graphic_im_pane_ParamLimits

0xb216,	// (0x00056041) list_single_2graphic_im_pane

0xce68,	// (0x00057c93) list_single_2graphic_im_pane_g1_ParamLimits

0xce68,	// (0x00057c93) list_single_2graphic_im_pane_g1

0xce79,	// (0x00057ca4) list_single_2graphic_im_pane_g2_ParamLimits

0xce79,	// (0x00057ca4) list_single_2graphic_im_pane_g2

0xce85,	// (0x00057cb0) list_single_2graphic_im_pane_g3_ParamLimits

0xce85,	// (0x00057cb0) list_single_2graphic_im_pane_g3

0x0003,

0xfc85,	// (0x0005aab0) list_single_2graphic_im_pane_g_ParamLimits

0xfc85,	// (0x0005aab0) list_single_2graphic_im_pane_g

0xcea5,	// (0x00057cd0) list_single_2graphic_im_pane_t1_ParamLimits

0xcea5,	// (0x00057cd0) list_single_2graphic_im_pane_t1

0xc8d1,	// (0x000576fc) list_single_graphic_2heading_pane_fp_ParamLimits

0xc8d1,	// (0x000576fc) list_single_graphic_2heading_pane_fp

0x7aa2,	// (0x000528cd) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x7aa2,	// (0x000528cd) list_single_graphic_2heading_pane_fp_g1

0xc8ea,	// (0x00057715) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc8ea,	// (0x00057715) list_single_graphic_2heading_pane_fp_g2

0x7966,	// (0x00052791) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x7966,	// (0x00052791) list_single_graphic_2heading_pane_fp_g3

0x7a77,	// (0x000528a2) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x7a77,	// (0x000528a2) list_single_graphic_2heading_pane_fp_g4

0xc8f6,	// (0x00057721) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc8f6,	// (0x00057721) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfbac,	// (0x0005a9d7) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfbac,	// (0x0005a9d7) list_single_graphic_2heading_pane_fp_g

0x7c6f,	// (0x00052a9a) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x7c6f,	// (0x00052a9a) list_single_graphic_2heading_pane_fp_t1

0x7ada,	// (0x00052905) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x7ada,	// (0x00052905) list_single_graphic_2heading_pane_fp_t2

0x7c85,	// (0x00052ab0) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x7c85,	// (0x00052ab0) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc8e,	// (0x0005aab9) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc8e,	// (0x0005aab9) list_single_graphic_2heading_pane_fp_t

0xc2e6,	// (0x00057111) fep_hwr_write_pane_g5_ParamLimits

0xc2e6,	// (0x00057111) fep_hwr_write_pane_g5

0xc2f2,	// (0x0005711d) fep_hwr_write_pane_g6_ParamLimits

0xc2f2,	// (0x0005711d) fep_hwr_write_pane_g6

0xcba6,	// (0x000579d1) eswt_shell_pane_ParamLimits

0x9cf4,	// (0x00054b1f) bg_popup_window_pane_cp18_ParamLimits

0xaf50,	// (0x00055d7b) heading_pane_cp70

0xccd0,	// (0x00057afb) popup_eswt_tasktip_window_t1_ParamLimits

0x9750,	// (0x0005457b) aid_touch_tab_arrow_left

0x975f,	// (0x0005458a) aid_touch_tab_arrow_right

0x72a5,	// (0x000520d0) title_pane_g3_ParamLimits

0x72a5,	// (0x000520d0) title_pane_g3

0x809d,	// (0x00052ec8) set_value_pane_g1

0x961d,	// (0x00054448) popup_toolbar_trans_pane_ParamLimits

0xce1c,	// (0x00057c47) aid_size_cell_tb_trans_pane_ParamLimits

0x80de,	// (0x00052f09) bg_tb_trans_pane_ParamLimits

0xce2e,	// (0x00057c59) grid_tb_trans_pane_ParamLimits

0x75e7,	// (0x00052412) cont_note_pane_ParamLimits

0x75e7,	// (0x00052412) cont_note_pane

0x7e4f,	// (0x00052c7a) cont_snote2_single_text_pane_ParamLimits

0x7e4f,	// (0x00052c7a) cont_snote2_single_text_pane

0x7e4f,	// (0x00052c7a) cont_snote2_single_graphic_pane_ParamLimits

0x7e4f,	// (0x00052c7a) cont_snote2_single_graphic_pane

0xa277,	// (0x000550a2) cont_note_wait_pane_ParamLimits

0xa277,	// (0x000550a2) cont_note_wait_pane

0xa277,	// (0x000550a2) cont_note_image_pane_ParamLimits

0xa277,	// (0x000550a2) cont_note_image_pane

0xced6,	// (0x00057d01) popup_note2_window_g1_ParamLimits

0xced6,	// (0x00057d01) popup_note2_window_g1

0xcf07,	// (0x00057d32) popup_note2_window_t1_ParamLimits

0xcf07,	// (0x00057d32) popup_note2_window_t1

0xcf4c,	// (0x00057d77) popup_note2_window_t2_ParamLimits

0xcf4c,	// (0x00057d77) popup_note2_window_t2

0xcf91,	// (0x00057dbc) popup_note2_window_t3_ParamLimits

0xcf91,	// (0x00057dbc) popup_note2_window_t3

0xcfd6,	// (0x00057e01) popup_note2_window_t4_ParamLimits

0xcfd6,	// (0x00057e01) popup_note2_window_t4

0x766b,	// (0x00052496) popup_note2_window_t5_ParamLimits

0x766b,	// (0x00052496) popup_note2_window_t5

0x0004,

0xfc9a,	// (0x0005aac5) popup_note2_window_t_ParamLimits

0xfc9a,	// (0x0005aac5) popup_note2_window_t

0xd005,	// (0x00057e30) popup_note2_image_window_g1_ParamLimits

0xd005,	// (0x00057e30) popup_note2_image_window_g1

0xd011,	// (0x00057e3c) popup_note2_image_window_g2_ParamLimits

0xd011,	// (0x00057e3c) popup_note2_image_window_g2

0x0001,

0xfca5,	// (0x0005aad0) popup_note2_image_window_g_ParamLimits

0xfca5,	// (0x0005aad0) popup_note2_image_window_g

0xd023,	// (0x00057e4e) popup_note2_image_window_t1_ParamLimits

0xd023,	// (0x00057e4e) popup_note2_image_window_t1

0xd03b,	// (0x00057e66) popup_note2_image_window_t2_ParamLimits

0xd03b,	// (0x00057e66) popup_note2_image_window_t2

0xd053,	// (0x00057e7e) popup_note2_image_window_t3_ParamLimits

0xd053,	// (0x00057e7e) popup_note2_image_window_t3

0x0002,

0xfcaa,	// (0x0005aad5) popup_note2_image_window_t_ParamLimits

0xfcaa,	// (0x0005aad5) popup_note2_image_window_t

0xa285,	// (0x000550b0) popup_note2_wait_window_g1_ParamLimits

0xa285,	// (0x000550b0) popup_note2_wait_window_g1

0xd06f,	// (0x00057e9a) popup_note2_wait_window_g2_ParamLimits

0xd06f,	// (0x00057e9a) popup_note2_wait_window_g2

0xa29d,	// (0x000550c8) popup_note2_wait_window_g3_ParamLimits

0xa29d,	// (0x000550c8) popup_note2_wait_window_g3

0x0002,

0xfcb1,	// (0x0005aadc) popup_note2_wait_window_g_ParamLimits

0xfcb1,	// (0x0005aadc) popup_note2_wait_window_g

0xd07b,	// (0x00057ea6) popup_note2_wait_window_t1_ParamLimits

0xd07b,	// (0x00057ea6) popup_note2_wait_window_t1

0xd099,	// (0x00057ec4) popup_note2_wait_window_t2_ParamLimits

0xd099,	// (0x00057ec4) popup_note2_wait_window_t2

0xd0b7,	// (0x00057ee2) popup_note2_wait_window_t3_ParamLimits

0xd0b7,	// (0x00057ee2) popup_note2_wait_window_t3

0xd0c9,	// (0x00057ef4) popup_note2_wait_window_t4_ParamLimits

0xd0c9,	// (0x00057ef4) popup_note2_wait_window_t4

0x0003,

0xfcb8,	// (0x0005aae3) popup_note2_wait_window_t_ParamLimits

0xfcb8,	// (0x0005aae3) popup_note2_wait_window_t

0xd0db,	// (0x00057f06) wait_bar2_pane_ParamLimits

0xd0db,	// (0x00057f06) wait_bar2_pane

0xd0f3,	// (0x00057f1e) popup_snote2_single_text_window_g1_ParamLimits

0xd0f3,	// (0x00057f1e) popup_snote2_single_text_window_g1

0xd11b,	// (0x00057f46) popup_snote2_single_text_window_t1_ParamLimits

0xd11b,	// (0x00057f46) popup_snote2_single_text_window_t1

0xd167,	// (0x00057f92) popup_snote2_single_text_window_t2_ParamLimits

0xd167,	// (0x00057f92) popup_snote2_single_text_window_t2

0xd1b3,	// (0x00057fde) popup_snote2_single_text_window_t3_ParamLimits

0xd1b3,	// (0x00057fde) popup_snote2_single_text_window_t3

0xd1f4,	// (0x0005801f) popup_snote2_single_text_window_t4_ParamLimits

0xd1f4,	// (0x0005801f) popup_snote2_single_text_window_t4

0xd22a,	// (0x00058055) popup_snote2_single_text_window_t5_ParamLimits

0xd22a,	// (0x00058055) popup_snote2_single_text_window_t5

0x0004,

0xfcc1,	// (0x0005aaec) popup_snote2_single_text_window_t_ParamLimits

0xfcc1,	// (0x0005aaec) popup_snote2_single_text_window_t

0xd255,	// (0x00058080) popup_snote2_single_graphic_window_g1_ParamLimits

0xd255,	// (0x00058080) popup_snote2_single_graphic_window_g1

0xd27d,	// (0x000580a8) popup_snote2_single_graphic_window_g2_ParamLimits

0xd27d,	// (0x000580a8) popup_snote2_single_graphic_window_g2

0x0001,

0xfccc,	// (0x0005aaf7) popup_snote2_single_graphic_window_g_ParamLimits

0xfccc,	// (0x0005aaf7) popup_snote2_single_graphic_window_g

0xd2a5,	// (0x000580d0) popup_snote2_single_graphic_window_t1_ParamLimits

0xd2a5,	// (0x000580d0) popup_snote2_single_graphic_window_t1

0xd2f1,	// (0x0005811c) popup_snote2_single_graphic_window_t2_ParamLimits

0xd2f1,	// (0x0005811c) popup_snote2_single_graphic_window_t2

0xd1b3,	// (0x00057fde) popup_snote2_single_graphic_window_t3_ParamLimits

0xd1b3,	// (0x00057fde) popup_snote2_single_graphic_window_t3

0xd1f4,	// (0x0005801f) popup_snote2_single_graphic_window_t4_ParamLimits

0xd1f4,	// (0x0005801f) popup_snote2_single_graphic_window_t4

0xd22a,	// (0x00058055) popup_snote2_single_graphic_window_t5_ParamLimits

0xd22a,	// (0x00058055) popup_snote2_single_graphic_window_t5

0x0004,

0xfcd1,	// (0x0005aafc) popup_snote2_single_graphic_window_t_ParamLimits

0xfcd1,	// (0x0005aafc) popup_snote2_single_graphic_window_t

0xbd2d,	// (0x00056b58) clock_nsta_pane_cp2_t1

0xbd2d,	// (0x00056b58) clock_nsta_pane_cp2_t2

0x0001,

0xfae5,	// (0x0005a910) clock_nsta_pane_cp2_t

0x5641,	// (0x0005046c) form_field_data_wide_pane_g1_ParamLimits

0x80f8,	// (0x00052f23) form_field_data_wide_pane_g2_ParamLimits

0x80f8,	// (0x00052f23) form_field_data_wide_pane_g2

0x8104,	// (0x00052f2f) form_field_data_wide_pane_g3_ParamLimits

0x8104,	// (0x00052f2f) form_field_data_wide_pane_g3

0x0002,

0xf6c4,	// (0x0005a4ef) form_field_data_wide_pane_g_ParamLimits

0xf6c4,	// (0x0005a4ef) form_field_data_wide_pane_g

0xbc39,	// (0x00056a64) grid_touch_3_pane_ParamLimits

0xbc39,	// (0x00056a64) grid_touch_3_pane

0xd33d,	// (0x00058168) cell_touch_3_pane_ParamLimits

0xd33d,	// (0x00058168) cell_touch_3_pane

0xc246,	// (0x00057071) cell_touch_3_pane_g1

0xc246,	// (0x00057071) cell_touch_3_pane_g2

0x0001,

0xfb6a,	// (0x0005a995) cell_touch_3_pane_g

0x769d,	// (0x000524c8) cont_query_data_pane

0x76a5,	// (0x000524d0) cont_query_data_pane_cp1

0xd370,	// (0x0005819b) button_value_adjust_pane_cp7

0xd378,	// (0x000581a3) query_popup_pane_cp3

0x8818,	// (0x00053643) bg_popup_sub_pane_cp22_ParamLimits

0x59e5,	// (0x00050810) navi_navi_volume_pane_cp2

0x5a00,	// (0x0005082b) popup_side_volume_key_window_g2

0x5a0f,	// (0x0005083a) popup_side_volume_key_window_g3

0x0002,

0xf756,	// (0x0005a581) popup_side_volume_key_window_g

0x5a2c,	// (0x00050857) popup_side_volume_key_window_t2

0x0001,

0xf75d,	// (0x0005a588) popup_side_volume_key_window_t

0x8adf,	// (0x0005390a) popup_side_volume_key_window_ParamLimits

0x5234,	// (0x0005005f) list_double_graphic_pane_g4_ParamLimits

0x5234,	// (0x0005005f) list_double_graphic_pane_g4

0xb245,	// (0x00056070) list_single_2heading_msg_pane_ParamLimits

0xb245,	// (0x00056070) list_single_2heading_msg_pane

0x7ca5,	// (0x00052ad0) list_single_2heading_msg_pane_g1_ParamLimits

0x7ca5,	// (0x00052ad0) list_single_2heading_msg_pane_g1

0x898e,	// (0x000537b9) list_single_2heading_msg_pane_g2_ParamLimits

0x898e,	// (0x000537b9) list_single_2heading_msg_pane_g2

0x7cb1,	// (0x00052adc) list_single_2heading_msg_pane_g3_ParamLimits

0x7cb1,	// (0x00052adc) list_single_2heading_msg_pane_g3

0x7cbd,	// (0x00052ae8) list_single_2heading_msg_pane_g4_ParamLimits

0x7cbd,	// (0x00052ae8) list_single_2heading_msg_pane_g4

0x0003,

0xfcdc,	// (0x0005ab07) list_single_2heading_msg_pane_g_ParamLimits

0xfcdc,	// (0x0005ab07) list_single_2heading_msg_pane_g

0x7cd5,	// (0x00052b00) list_single_2heading_msg_pane_t1_ParamLimits

0x7cd5,	// (0x00052b00) list_single_2heading_msg_pane_t1

0x7cfd,	// (0x00052b28) list_single_2heading_msg_pane_t2_ParamLimits

0x7cfd,	// (0x00052b28) list_single_2heading_msg_pane_t2

0x7d2c,	// (0x00052b57) list_single_2heading_msg_pane_t3_ParamLimits

0x7d2c,	// (0x00052b57) list_single_2heading_msg_pane_t3

0x7d65,	// (0x00052b90) list_single_2heading_msg_pane_t4_ParamLimits

0x7d65,	// (0x00052b90) list_single_2heading_msg_pane_t4

0x0003,

0xfce5,	// (0x0005ab10) list_single_2heading_msg_pane_t_ParamLimits

0xfce5,	// (0x0005ab10) list_single_2heading_msg_pane_t

0x72b1,	// (0x000520dc) title_pane_g4_ParamLimits

0x72b1,	// (0x000520dc) title_pane_g4

0x57f1,	// (0x0005061c) title_pane_stacon_g3_ParamLimits

0x57f1,	// (0x0005061c) title_pane_stacon_g3

0xce99,	// (0x00057cc4) list_single_2graphic_im_pane_g4_ParamLimits

0xce99,	// (0x00057cc4) list_single_2graphic_im_pane_g4

0xaced,	// (0x00055b18) popup_side_volume_key_window_cp

0xb563,	// (0x0005638e) main_idle_act2_pane_t1

0x5e57,	// (0x00050c82) toolbar_button_pane_g10

0x8047,	// (0x00052e72) popup_toolbar_window_cp1

0xbd1e,	// (0x00056b49) clock_nsta_pane_cp_t1

0xbd1e,	// (0x00056b49) clock_nsta_pane_cp_t2

0x0001,

0xfae0,	// (0x0005a90b) clock_nsta_pane_cp_t

0x59e5,	// (0x00050810) navi_navi_volume_pane_cp2_ParamLimits

0x59f4,	// (0x0005081f) popup_side_volume_key_window_g1_ParamLimits

0x5a00,	// (0x0005082b) popup_side_volume_key_window_g2_ParamLimits

0x5a0f,	// (0x0005083a) popup_side_volume_key_window_g3_ParamLimits

0xf756,	// (0x0005a581) popup_side_volume_key_window_g_ParamLimits

0x659a,	// (0x000513c5) fep_hwr_aid_pane

0x6643,	// (0x0005146e) bg_fep_hwr_top_pane_g4_ParamLimits

0xc2b6,	// (0x000570e1) fep_hwr_top_pane_g1_ParamLimits

0xc2c8,	// (0x000570f3) fep_hwr_top_pane_g2_ParamLimits

0x6663,	// (0x0005148e) fep_hwr_top_pane_g3_ParamLimits

0xfb35,	// (0x0005a960) fep_hwr_top_pane_g_ParamLimits

0x6678,	// (0x000514a3) fep_hwr_top_text_pane_ParamLimits

0xaaa2,	// (0x000558cd) aid_touch_tab_arrow_arrow_2

0xaaab,	// (0x000558d6) aid_touch_tab_arrow_left_2

0x65ae,	// (0x000513d9) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x65e5,	// (0x00051410) fep_hwr_prediction_pane

0xc42c,	// (0x00057257) fep_vkb_prediction_pane

0xc532,	// (0x0005735d) fep_vkb_side_pane_g3_ParamLimits

0xc532,	// (0x0005735d) fep_vkb_side_pane_g3

0x6807,	// (0x00051632) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x6878,	// (0x000516a3) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x6885,	// (0x000516b0) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbe4,	// (0x0005aa0f) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x69b4,	// (0x000517df) fep_hwr_prediction_pane_g1

0x69be,	// (0x000517e9) fep_hwr_prediction_pane_g2

0x69c6,	// (0x000517f1) fep_hwr_prediction_pane_g3

0x69ce,	// (0x000517f9) fep_hwr_prediction_pane_g4

0x0003,

0xfcee,	// (0x0005ab19) fep_hwr_prediction_pane_g

0xd39f,	// (0x000581ca) fep_vkb_prediction_pane_g1

0xd3a9,	// (0x000581d4) fep_vkb_prediction_pane_g2

0xd3b1,	// (0x000581dc) fep_vkb_prediction_pane_g3

0xd3b9,	// (0x000581e4) fep_vkb_prediction_pane_g4

0x0003,

0xfcf7,	// (0x0005ab22) fep_vkb_prediction_pane_g

0x61e0,	// (0x0005100b) slider_set_pane_g3

0x61f4,	// (0x0005101f) slider_set_pane_g4

0x620c,	// (0x00051037) slider_set_pane_g5

0x61e0,	// (0x0005100b) slider_set_pane_g6

0x6222,	// (0x0005104d) slider_set_pane_g7

0xb19b,	// (0x00055fc6) slider_form_pane_g3

0xb1a4,	// (0x00055fcf) slider_form_pane_g4

0xb1ac,	// (0x00055fd7) slider_form_pane_g5

0xb19b,	// (0x00055fc6) slider_form_pane_g6

0xb1b4,	// (0x00055fdf) slider_form_pane_g7

0xb873,	// (0x0005669e) slider_set_pane_vc_g3

0xb87c,	// (0x000566a7) slider_set_pane_vc_g4

0xb885,	// (0x000566b0) slider_set_pane_vc_g5

0xb873,	// (0x0005669e) slider_set_pane_vc_g6

0xb88e,	// (0x000566b9) slider_set_pane_vc_g7

0xb873,	// (0x0005669e) slider_form_pane_vc_g1

0xb87c,	// (0x000566a7) slider_form_pane_vc_g2

0xb885,	// (0x000566b0) slider_form_pane_vc_g3

0xb873,	// (0x0005669e) slider_form_pane_vc_g4

0xba43,	// (0x0005686e) slider_form_pane_vc_g5

0x0004,

0xfac6,	// (0x0005a8f1) slider_form_pane_vc_g

0x7269,	// (0x00052094) main_idle_act3_pane

0xd3c1,	// (0x000581ec) ai3_links_pane

0xd3ca,	// (0x000581f5) popup_ai3_data_window_ParamLimits

0xd3ca,	// (0x000581f5) popup_ai3_data_window

0x7269,	// (0x00052094) grid_ai3_links_pane

0xd3e8,	// (0x00058213) cell_ai3_links_pane_ParamLimits

0xd3e8,	// (0x00058213) cell_ai3_links_pane

0xd402,	// (0x0005822d) bg_popup_sub_pane_cp11

0xd40f,	// (0x0005823a) cell_ai3_links_pane_g1

0x7269,	// (0x00052094) bg_popup_sub_pane_cp12

0xd434,	// (0x0005825f) heading_ai3_data_pane

0xd43c,	// (0x00058267) list_ai3_gene_pane

0xd448,	// (0x00058273) popup_ai3_data_window_g1

0xd450,	// (0x0005827b) heading_ai3_data_pane_g1

0xd458,	// (0x00058283) heading_ai3_data_pane_t1

0xd466,	// (0x00058291) list_double_ai3_gene_pane_ParamLimits

0xd466,	// (0x00058291) list_double_ai3_gene_pane

0xd473,	// (0x0005829e) list_single_ai3_gene_pane_ParamLimits

0xd473,	// (0x0005829e) list_single_ai3_gene_pane

0xc20b,	// (0x00057036) list_highlight_pane_cp7_ParamLimits

0xc20b,	// (0x00057036) list_highlight_pane_cp7

0xd480,	// (0x000582ab) list_single_a13_gene_pane_t1_ParamLimits

0xd480,	// (0x000582ab) list_single_a13_gene_pane_t1

0xd497,	// (0x000582c2) list_single_ai3_gene_pane_g1

0xd4a0,	// (0x000582cb) list_single_ai3_gene_pane_g2

0x0001,

0xfd00,	// (0x0005ab2b) list_single_ai3_gene_pane_g

0xd4a8,	// (0x000582d3) list_double_ai3_gene_pane_g1_ParamLimits

0xd4a8,	// (0x000582d3) list_double_ai3_gene_pane_g1

0xd4b4,	// (0x000582df) list_double_ai3_gene_pane_t1_ParamLimits

0xd4b4,	// (0x000582df) list_double_ai3_gene_pane_t1

0xd4d0,	// (0x000582fb) list_double_ai3_gene_pane_t2_ParamLimits

0xd4d0,	// (0x000582fb) list_double_ai3_gene_pane_t2

0xd4e5,	// (0x00058310) list_double_ai3_gene_pane_t3_ParamLimits

0xd4e5,	// (0x00058310) list_double_ai3_gene_pane_t3

0x0002,

0xfd05,	// (0x0005ab30) list_double_ai3_gene_pane_t_ParamLimits

0xfd05,	// (0x0005ab30) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x7c9b,	// (0x00052ac6) aid_size_min_col_2

0xd389,	// (0x000581b4) aid_size_min_msg_ParamLimits

0xd389,	// (0x000581b4) aid_size_min_msg

0xc63e,	// (0x00057469) fep_vkb_top_text_pane_g2_ParamLimits

0xc63e,	// (0x00057469) fep_vkb_top_text_pane_g2

0x0001,

0xfb65,	// (0x0005a990) fep_vkb_top_text_pane_g_ParamLimits

0xfb65,	// (0x0005a990) fep_vkb_top_text_pane_g

0x7269,	// (0x00052094) main_hc_apps_shell_pane

0xd502,	// (0x0005832d) grid_hc_apps_pane_ParamLimits

0xd502,	// (0x0005832d) grid_hc_apps_pane

0xd511,	// (0x0005833c) list_hc_apps_pane

0xd519,	// (0x00058344) scroll_pane_cp37_ParamLimits

0xd519,	// (0x00058344) scroll_pane_cp37

0xd525,	// (0x00058350) cell_hc_apps_pane_ParamLimits

0xd525,	// (0x00058350) cell_hc_apps_pane

0xd5dd,	// (0x00058408) cell_hc_apps_pane_g1_ParamLimits

0xd5dd,	// (0x00058408) cell_hc_apps_pane_g1

0xd60e,	// (0x00058439) cell_hc_apps_pane_g2_ParamLimits

0xd60e,	// (0x00058439) cell_hc_apps_pane_g2

0xd62a,	// (0x00058455) cell_hc_apps_pane_g3_ParamLimits

0xd62a,	// (0x00058455) cell_hc_apps_pane_g3

0x0002,

0xfd0c,	// (0x0005ab37) cell_hc_apps_pane_g_ParamLimits

0xfd0c,	// (0x0005ab37) cell_hc_apps_pane_g

0xd64c,	// (0x00058477) cell_hc_apps_pane_t1_ParamLimits

0xd64c,	// (0x00058477) cell_hc_apps_pane_t1

0x75e7,	// (0x00052412) grid_highlight_pane_cp10_ParamLimits

0x75e7,	// (0x00052412) grid_highlight_pane_cp10

0xd68c,	// (0x000584b7) list_single_hc_apps_pane_ParamLimits

0xd68c,	// (0x000584b7) list_single_hc_apps_pane

0xd6cb,	// (0x000584f6) list_single_hc_apps_pane_g1

0x7d8a,	// (0x00052bb5) list_single_hc_apps_pane_g2

0x0001,

0xfd13,	// (0x0005ab3e) list_single_hc_apps_pane_g

0x7da3,	// (0x00052bce) list_single_hc_apps_pane_g2_copy1

0x7dbf,	// (0x00052bea) list_single_hc_apps_pane_t1

0x735d,	// (0x00052188) bg_set_opt_pane_cp_ParamLimits

0x502b,	// (0x0004fe56) setting_slider_pane_t1_ParamLimits

0x5041,	// (0x0004fe6c) setting_slider_pane_t2_ParamLimits

0x505b,	// (0x0004fe86) setting_slider_pane_t3_ParamLimits

0xf5a2,	// (0x0005a3cd) setting_slider_pane_t_ParamLimits

0x5073,	// (0x0004fe9e) slider_set_pane_ParamLimits

0x5cf9,	// (0x00050b24) control_pane_g5_ParamLimits

0x5cf9,	// (0x00050b24) control_pane_g5

0xafbc,	// (0x00055de7) slider_set_pane_g1_ParamLimits

0x61d4,	// (0x00050fff) slider_set_pane_g2_ParamLimits

0x61e0,	// (0x0005100b) slider_set_pane_g3_ParamLimits

0x61f4,	// (0x0005101f) slider_set_pane_g4_ParamLimits

0x620c,	// (0x00051037) slider_set_pane_g5_ParamLimits

0x61e0,	// (0x0005100b) slider_set_pane_g6_ParamLimits

0x6222,	// (0x0005104d) slider_set_pane_g7_ParamLimits

0xf9a2,	// (0x0005a7cd) slider_set_pane_g_ParamLimits

0x8bc4,	// (0x000539ef) navi_icon_text_pane_ParamLimits

0x970f,	// (0x0005453a) aid_fill_nsta_2_ParamLimits

0x9750,	// (0x0005457b) aid_touch_tab_arrow_left_ParamLimits

0x975f,	// (0x0005458a) aid_touch_tab_arrow_right_ParamLimits

0x97cc,	// (0x000545f7) clock_nsta_pane_ParamLimits

0xaa7e,	// (0x000558a9) navi_icon_pane_g1_ParamLimits

0xaa8d,	// (0x000558b8) navi_text_pane_t1_ParamLimits

0xbe3b,	// (0x00056c66) navi_icon_text_pane_g1_ParamLimits

0xbe4a,	// (0x00056c75) navi_icon_text_pane_t1_ParamLimits

0xd6cb,	// (0x000584f6) list_single_hc_apps_pane_g1_ParamLimits

0x7d8a,	// (0x00052bb5) list_single_hc_apps_pane_g2_ParamLimits

0xfd13,	// (0x0005ab3e) list_single_hc_apps_pane_g_ParamLimits

0x7da3,	// (0x00052bce) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x7dbf,	// (0x00052bea) list_single_hc_apps_pane_t1_ParamLimits

0x4f35,	// (0x0004fd60) popup_toolbar2_fixed_window_ParamLimits

0x4f35,	// (0x0004fd60) popup_toolbar2_fixed_window

0x9613,	// (0x0005443e) popup_toolbar2_float_window

0x7269,	// (0x00052094) bg_popup_sub_pane_cp27

0xd6e4,	// (0x0005850f) grid_toolbar2_float_pane

0x7269,	// (0x00052094) bg_popup_sub_pane_cp26

0xd6e4,	// (0x0005850f) grid_toolbar2_fixed_pane

0xd6ec,	// (0x00058517) cell_toolbar2_fixed_pane_ParamLimits

0xd6ec,	// (0x00058517) cell_toolbar2_fixed_pane

0xd6fc,	// (0x00058527) cell_toolbar2_fixed_pane_g1

0xd705,	// (0x00058530) toolbar2_fixed_button_pane

0x9c02,	// (0x00054a2d) toolbar2_fixed_button_pane_g1

0x9c12,	// (0x00054a3d) toolbar2_fixed_button_pane_g2

0x9c0a,	// (0x00054a35) toolbar2_fixed_button_pane_g3

0x9c22,	// (0x00054a4d) toolbar2_fixed_button_pane_g4

0x9c1a,	// (0x00054a45) toolbar2_fixed_button_pane_g5

0x9c2a,	// (0x00054a55) toolbar2_fixed_button_pane_g6

0x9c32,	// (0x00054a5d) toolbar2_fixed_button_pane_g7

0x9c42,	// (0x00054a6d) toolbar2_fixed_button_pane_g8

0x9c3a,	// (0x00054a65) toolbar2_fixed_button_pane_g9

0x0008,

0xf8a4,	// (0x0005a6cf) toolbar2_fixed_button_pane_g

0xd70d,	// (0x00058538) cell_toolbar2_float_pane_ParamLimits

0xd70d,	// (0x00058538) cell_toolbar2_float_pane

0xd71e,	// (0x00058549) cell_toolbar2_float_pane_g1

0xd705,	// (0x00058530) toolbar2_fixed_button_pane_cp

0xc38c,	// (0x000571b7) fep_vkb_accented_list_pane_ParamLimits

0xc38c,	// (0x000571b7) fep_vkb_accented_list_pane

0x67e7,	// (0x00051612) bg_popup_fep_shadow_pane_g9

0x8d48,	// (0x00053b73) bg_popup_fep_shadow_pane_cp3

0x8247,	// (0x00053072) list_accented_list_pane

0xd727,	// (0x00058552) list_single_accented_list_pane_ParamLimits

0xd727,	// (0x00058552) list_single_accented_list_pane

0x8d48,	// (0x00053b73) list_highlight_pane_cp10

0xd738,	// (0x00058563) list_single_accented_list_pane_t1

0x9559,	// (0x00054384) popup_slider_window_ParamLimits

0x9559,	// (0x00054384) popup_slider_window

0xd380,	// (0x000581ab) aid_indentation_list_msg

0xd804,	// (0x0005862f) bg_popup_window_pane_cp19

0xd872,	// (0x0005869d) popup_slider_window_g1

0xd88e,	// (0x000586b9) popup_slider_window_g2

0xd8aa,	// (0x000586d5) popup_slider_window_g3

0x0005,

0xfd18,	// (0x0005ab43) popup_slider_window_g

0xd906,	// (0x00058731) popup_slider_window_t1

0xd97a,	// (0x000587a5) small_volume_slider_vertical_pane

0xc246,	// (0x00057071) small_volume_slider_vertical_pane_g1

0xc246,	// (0x00057071) small_volume_slider_vertical_pane_g2

0xd996,	// (0x000587c1) small_volume_slider_vertical_pane_g3

0x0002,

0xfd2a,	// (0x0005ab55) small_volume_slider_vertical_pane_g

0x4ce3,	// (0x0004fb0e) area_side_right_pane_ParamLimits

0x4ce3,	// (0x0004fb0e) area_side_right_pane

0x69d6,	// (0x00051801) aid_size_side_button_ParamLimits

0x69d6,	// (0x00051801) aid_size_side_button

0x69ea,	// (0x00051815) grid_sctrl_middle_pane_ParamLimits

0x69ea,	// (0x00051815) grid_sctrl_middle_pane

0x6a0a,	// (0x00051835) sctrl_sk_bottom_pane

0x6a1b,	// (0x00051846) sctrl_sk_top_pane

0x6a2d,	// (0x00051858) aid_touch_sctrl_top

0x6a3a,	// (0x00051865) bg_sctrl_sk_pane_ParamLimits

0x6a3a,	// (0x00051865) bg_sctrl_sk_pane

0x6a48,	// (0x00051873) sctrl_sk_top_pane_g1

0x6a55,	// (0x00051880) sctrl_sk_top_pane_t1

0x6a2d,	// (0x00051858) aid_touch_sctrl_bottom

0x6a3a,	// (0x00051865) bg_sctrl_sk_pane_cp_ParamLimits

0x6a3a,	// (0x00051865) bg_sctrl_sk_pane_cp

0x6a70,	// (0x0005189b) sctrl_sk_bottom_pane_g1

0x6a55,	// (0x00051880) sctrl_sk_bottom_pane_t1

0x6a79,	// (0x000518a4) cell_sctrl_middle_pane_ParamLimits

0x6a79,	// (0x000518a4) cell_sctrl_middle_pane

0x6a96,	// (0x000518c1) aid_touch_sctrl_middle_ParamLimits

0x6a96,	// (0x000518c1) aid_touch_sctrl_middle

0x6aa8,	// (0x000518d3) bg_sctrl_middle_pane_ParamLimits

0x6aa8,	// (0x000518d3) bg_sctrl_middle_pane

0x6807,	// (0x00051632) cell_sctrl_middle_pane_g1_ParamLimits

0x6807,	// (0x00051632) cell_sctrl_middle_pane_g1

0x6ab6,	// (0x000518e1) cell_sctrl_middle_pane_g2_ParamLimits

0x6ab6,	// (0x000518e1) cell_sctrl_middle_pane_g2

0x0001,

0xfd36,	// (0x0005ab61) cell_sctrl_middle_pane_g_ParamLimits

0xfd36,	// (0x0005ab61) cell_sctrl_middle_pane_g

0x9c02,	// (0x00054a2d) bg_sctrl_middle_pane_g1

0x9c0a,	// (0x00054a35) bg_sctrl_middle_pane_g2

0x9c12,	// (0x00054a3d) bg_sctrl_middle_pane_g3

0x9c1a,	// (0x00054a45) bg_sctrl_middle_pane_g4

0x9c22,	// (0x00054a4d) bg_sctrl_middle_pane_g5

0x9c2a,	// (0x00054a55) bg_sctrl_middle_pane_g6

0x9c32,	// (0x00054a5d) bg_sctrl_middle_pane_g7

0x9c3a,	// (0x00054a65) bg_sctrl_middle_pane_g8

0x0007,

0xfd3b,	// (0x0005ab66) bg_sctrl_middle_pane_g

0x9c42,	// (0x00054a6d) bg_sctrl_middle_pane_g8_copy1

0x9c02,	// (0x00054a2d) bg_sctrl_sk_pane_g1

0x9c12,	// (0x00054a3d) bg_sctrl_sk_pane_g2

0x9c0a,	// (0x00054a35) bg_sctrl_sk_pane_g3

0x0008,

0xf8a4,	// (0x0005a6cf) bg_sctrl_sk_pane_g

0x800d,	// (0x00052e38) aid_size_touch_scroll_bar

0x9c22,	// (0x00054a4d) bg_sctrl_sk_pane_g4

0x9c1a,	// (0x00054a45) bg_sctrl_sk_pane_g5

0x9c2a,	// (0x00054a55) bg_sctrl_sk_pane_g6

0x9c32,	// (0x00054a5d) bg_sctrl_sk_pane_g7

0x9c42,	// (0x00054a6d) bg_sctrl_sk_pane_g8

0x9c3a,	// (0x00054a65) bg_sctrl_sk_pane_g9

0x9170,	// (0x00053f9b) popup_fep_china_hwr2_fs_candidate_window

0x917a,	// (0x00053fa5) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x917a,	// (0x00053fa5) popup_fep_china_hwr2_fs_control_window

0x6807,	// (0x00051632) sctrl_sk_top_pane_g2

0x0001,

0xfd31,	// (0x0005ab5c) sctrl_sk_top_pane_g

0xd99f,	// (0x000587ca) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd99f,	// (0x000587ca) aid_fep_china_hwr2_fs_cell

0xd9b2,	// (0x000587dd) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd9b2,	// (0x000587dd) bg_popup_fep_shadow_pane_cp4

0xd9cb,	// (0x000587f6) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd9cb,	// (0x000587f6) bg_popup_fep_shadow_pane_cp5

0xd9dd,	// (0x00058808) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd9dd,	// (0x00058808) popup_fep_china_hwr2_fs_control_bar_grid

0xd9ed,	// (0x00058818) popup_fep_china_hwr2_fs_control_funtion_grid

0xd9f5,	// (0x00058820) aid_fep_china_hwr2_fs_candi_cell

0x7269,	// (0x00052094) bg_popup_fep_shadow_pane_cp6

0xd9ff,	// (0x0005882a) popup_fep_china_hwr2_fs_candidate_grid

0xda09,	// (0x00058834) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xda09,	// (0x00058834) cell_fep_china_hwr2_fs_funtion_grid

0xc246,	// (0x00057071) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xda21,	// (0x0005884c) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xda21,	// (0x0005884c) cell_fep_china_hwr2_fs_funtion_grid_g1

0xda2f,	// (0x0005885a) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xda2f,	// (0x0005885a) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd4c,	// (0x0005ab77) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd4c,	// (0x0005ab77) cell_fep_china_hwr2_fs_funtion_grid_g

0xda45,	// (0x00058870) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xda45,	// (0x00058870) cell_fep_china_hwr2_fs_funtion_grid_t1

0xda5a,	// (0x00058885) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xda5a,	// (0x00058885) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd51,	// (0x0005ab7c) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd51,	// (0x0005ab7c) cell_fep_china_hwr2_fs_funtion_grid_t

0xda76,	// (0x000588a1) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xda7e,	// (0x000588a9) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xda86,	// (0x000588b1) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd56,	// (0x0005ab81) popup_fep_china_hwr2_fs_control_bar_grid_g

0xda8e,	// (0x000588b9) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xda8e,	// (0x000588b9) cell_fep_china_hwr2_fs_candidate_grid

0xdaad,	// (0x000588d8) popup_fep_china_hwr2_fs_candidate_grid_g20

0xdab5,	// (0x000588e0) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc246,	// (0x00057071) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc246,	// (0x00057071) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb6a,	// (0x0005a995) cell_fep_china_hwr2_fs_candidate_grid_g

0xdabd,	// (0x000588e8) cell_fep_china_hwr2_fs_candidate_grid_t1

0x97df,	// (0x0005460a) clock_nsta_pane_cp_24_ParamLimits

0x97df,	// (0x0005460a) clock_nsta_pane_cp_24

0x985f,	// (0x0005468a) indicator_nsta_pane_cp_24_ParamLimits

0x985f,	// (0x0005468a) indicator_nsta_pane_cp_24

0xa8fa,	// (0x00055725) heading_pane_g1

0x0001,

0xf909,	// (0x0005a734) heading_pane_g

0xb3aa,	// (0x000561d5) grid_sct_catagory_button_pane

0xb3dc,	// (0x00056207) scroll_pane_cp5_ParamLimits

0xbe8f,	// (0x00056cba) button_value_adjust_pane_cp5_ParamLimits

0xbe8f,	// (0x00056cba) button_value_adjust_pane_cp5

0xbf74,	// (0x00056d9f) form2_midp_time_pane_ParamLimits

0xdacb,	// (0x000588f6) cell_sct_catagory_button_pane_ParamLimits

0xdacb,	// (0x000588f6) cell_sct_catagory_button_pane

0xc20b,	// (0x00057036) bg_button_pane_cp01_ParamLimits

0xc20b,	// (0x00057036) bg_button_pane_cp01

0xc246,	// (0x00057071) cell_sct_catagory_button_pane_g1

0x959a,	// (0x000543c5) popup_tb_extension_window

0xdadd,	// (0x00058908) aid_size_cell_ext_ParamLimits

0xdadd,	// (0x00058908) aid_size_cell_ext

0x75e7,	// (0x00052412) bg_tb_trans_pane_cp1_ParamLimits

0x75e7,	// (0x00052412) bg_tb_trans_pane_cp1

0xdafd,	// (0x00058928) grid_tb_ext_pane_ParamLimits

0xdafd,	// (0x00058928) grid_tb_ext_pane

0xdb2d,	// (0x00058958) cell_tb_ext_pane_ParamLimits

0xdb2d,	// (0x00058958) cell_tb_ext_pane

0xdb44,	// (0x0005896f) cell_tb_ext_pane_g1_ParamLimits

0xdb44,	// (0x0005896f) cell_tb_ext_pane_g1

0xdb61,	// (0x0005898c) cell_tb_ext_pane_t1

0x75e7,	// (0x00052412) list_highlight_pane_cp11_ParamLimits

0x75e7,	// (0x00052412) list_highlight_pane_cp11

0x4f54,	// (0x0004fd7f) popup_uni_indicator_window_ParamLimits

0x4f54,	// (0x0004fd7f) popup_uni_indicator_window

0x80de,	// (0x00052f09) bg_popup_sub_pane_cp14

0xdb9d,	// (0x000589c8) list_uniindi_pane

0xdba9,	// (0x000589d4) uniindi_top_pane

0x75e7,	// (0x00052412) bg_uniindi_top_pane

0xdbca,	// (0x000589f5) uniindi_top_pane_g1

0xdbe0,	// (0x00058a0b) uniindi_top_pane_g2

0x0003,

0xfd5d,	// (0x0005ab88) uniindi_top_pane_g

0xdc0a,	// (0x00058a35) uniindi_top_pane_t1

0xdc36,	// (0x00058a61) list_single_uniindi_pane_ParamLimits

0xdc36,	// (0x00058a61) list_single_uniindi_pane

0xc246,	// (0x00057071) bg_uniindi_top_pane_g1

0xdc48,	// (0x00058a73) list_single_uniindi_pane_g1

0xdc5b,	// (0x00058a86) list_single_uniindi_pane_t1

0x4dc0,	// (0x0004fbeb) control_bg_pane

0xdc80,	// (0x00058aab) bg_sctrl_sk_pane_cp1

0xdc89,	// (0x00058ab4) bg_sctrl_sk_pane_cp2

0xdc92,	// (0x00058abd) control_bg_pane_g1

0xdc9b,	// (0x00058ac6) control_bg_pane_g2

0x0001,

0xfd66,	// (0x0005ab91) control_bg_pane_g

0xbce3,	// (0x00056b0e) cell_indicator_nsta_pane_g1_ParamLimits

0xbcf1,	// (0x00056b1c) cell_indicator_nsta_pane_g2_ParamLimits

0xfadb,	// (0x0005a906) cell_indicator_nsta_pane_g_ParamLimits

0x7a64,	// (0x0005288f) form2_midp_time_pane_t1_ParamLimits

0x7e4f,	// (0x00052c7a) main_idle_act4_pane_ParamLimits

0x7e4f,	// (0x00052c7a) main_idle_act4_pane

0x959a,	// (0x000543c5) popup_tb_extension_window_ParamLimits

0xdb1f,	// (0x0005894a) tb_ext_find_pane_ParamLimits

0xdb1f,	// (0x0005894a) tb_ext_find_pane

0xdca4,	// (0x00058acf) ai_gene_pane_1_cp1

0x8e91,	// (0x00053cbc) ai_gene_pane_2_cp1

0xdcac,	// (0x00058ad7) list_single_idle_plugin_calendar_pane

0xdcb5,	// (0x00058ae0) list_single_idle_plugin_notification_pane

0xdcbe,	// (0x00058ae9) list_single_idle_plugin_player_pane

0xdcc7,	// (0x00058af2) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdcc7,	// (0x00058af2) list_single_idle_plugin_shortcut_pane

0xdce9,	// (0x00058b14) main_idle_act4_pane_t1

0xdcfb,	// (0x00058b26) main_idle_act4_pane_t2

0x0001,

0xfd6b,	// (0x0005ab96) main_idle_act4_pane_t

0xdd0d,	// (0x00058b38) middle_sk_idle_act4_pane_ParamLimits

0xdd0d,	// (0x00058b38) middle_sk_idle_act4_pane

0xdd23,	// (0x00058b4e) popup_clock_digital_analogue_window_cp2

0xdd3d,	// (0x00058b68) shortcut_wheel_idle_act4_pane_ParamLimits

0xdd3d,	// (0x00058b68) shortcut_wheel_idle_act4_pane

0xc246,	// (0x00057071) shortcut_wheel_idle_act4_pane_g1

0xc246,	// (0x00057071) shortcut_wheel_idle_act4_pane_g2

0xc246,	// (0x00057071) shortcut_wheel_idle_act4_pane_g3

0xc246,	// (0x00057071) shortcut_wheel_idle_act4_pane_g4

0xc246,	// (0x00057071) shortcut_wheel_idle_act4_pane_g5

0xdd51,	// (0x00058b7c) shortcut_wheel_idle_act4_pane_g6

0xdd59,	// (0x00058b84) shortcut_wheel_idle_act4_pane_g7

0xdd61,	// (0x00058b8c) shortcut_wheel_idle_act4_pane_g8

0xdd69,	// (0x00058b94) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd70,	// (0x0005ab9b) shortcut_wheel_idle_act4_pane_g

0xc4de,	// (0x00057309) middle_sk_idle_act4_pane_g1_ParamLimits

0xc4de,	// (0x00057309) middle_sk_idle_act4_pane_g1

0xddcd,	// (0x00058bf8) middle_sk_idle_act4_pane_g2_ParamLimits

0xddcd,	// (0x00058bf8) middle_sk_idle_act4_pane_g2

0x0001,

0xfd93,	// (0x0005abbe) middle_sk_idle_act4_pane_g_ParamLimits

0xfd93,	// (0x0005abbe) middle_sk_idle_act4_pane_g

0xddd9,	// (0x00058c04) middle_sk_idle_act4_pane_t1_ParamLimits

0xddd9,	// (0x00058c04) middle_sk_idle_act4_pane_t1

0xddf6,	// (0x00058c21) grid_ai_shortcut_pane_ParamLimits

0xddf6,	// (0x00058c21) grid_ai_shortcut_pane

0xde0f,	// (0x00058c3a) list_highlight_pane_cp16_ParamLimits

0xde0f,	// (0x00058c3a) list_highlight_pane_cp16

0xde1c,	// (0x00058c47) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xde1c,	// (0x00058c47) list_single_idle_plugin_shortcut_pane_g1

0xde28,	// (0x00058c53) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xde28,	// (0x00058c53) list_single_idle_plugin_shortcut_pane_g2

0xde42,	// (0x00058c6d) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xde42,	// (0x00058c6d) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd98,	// (0x0005abc3) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd98,	// (0x0005abc3) list_single_idle_plugin_shortcut_pane_g

0xde55,	// (0x00058c80) cell_ai_shortcut_pane_ParamLimits

0xde55,	// (0x00058c80) cell_ai_shortcut_pane

0xde78,	// (0x00058ca3) cell_ai_shortcut_pane_g1_ParamLimits

0xde78,	// (0x00058ca3) cell_ai_shortcut_pane_g1

0xdca4,	// (0x00058acf) ai_gene_pane_1_cp2

0xde9a,	// (0x00058cc5) ai_gene_pane_2_cp2

0xdea2,	// (0x00058ccd) list_highlight_pane_cp15

0xdeab,	// (0x00058cd6) list_single_idle_plugin_calendar_pane_g1

0xdea2,	// (0x00058ccd) list_highlight_pane_cp17

0xdeb3,	// (0x00058cde) list_single_idle_plugin_calendar_pane_g1_copy1

0xdebb,	// (0x00058ce6) list_single_idle_plugin_player_pane_g1

0xb611,	// (0x0005643c) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd9f,	// (0x0005abca) list_single_idle_plugin_player_pane_g

0xdec3,	// (0x00058cee) list_single_idle_plugin_player_pane_t1

0xded1,	// (0x00058cfc) list_single_idle_plugin_player_pane_t2

0xdedf,	// (0x00058d0a) list_single_idle_plugin_player_pane_t3

0xdeed,	// (0x00058d18) list_single_idle_plugin_player_pane_t4

0x0003,

0xfda4,	// (0x0005abcf) list_single_idle_plugin_player_pane_t

0xdefb,	// (0x00058d26) wait_bar_pane_cp15

0xdf03,	// (0x00058d2e) grid_ai_notification_pane

0xb611,	// (0x0005643c) list_single_idle_plugin_notification_pane_g1

0xdf0c,	// (0x00058d37) cell_ai_notification_pane_ParamLimits

0xdf0c,	// (0x00058d37) cell_ai_notification_pane

0xdf19,	// (0x00058d44) cell_ai_notification_pane_g1

0xdf21,	// (0x00058d4c) cell_ai_notification_pane_t1

0xdf2f,	// (0x00058d5a) tb_ext_find_button_pane

0xdf37,	// (0x00058d62) tb_ext_find_pane_g1

0xdf3f,	// (0x00058d6a) tb_ext_find_pane_t1

0x874e,	// (0x00053579) tb_ext_find_button_pane_g1

0xdf4d,	// (0x00058d78) tb_ext_find_button_pane_g2

0x0001,

0xfdad,	// (0x0005abd8) tb_ext_find_button_pane_g

0xdce9,	// (0x00058b14) main_idle_act4_pane_t1_ParamLimits

0xdcfb,	// (0x00058b26) main_idle_act4_pane_t2_ParamLimits

0xfd6b,	// (0x0005ab96) main_idle_act4_pane_t_ParamLimits

0xdd23,	// (0x00058b4e) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdd31,	// (0x00058b5c) sat_plugin_idle_act4_pane_ParamLimits

0xdd31,	// (0x00058b5c) sat_plugin_idle_act4_pane

0xdf56,	// (0x00058d81) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdf56,	// (0x00058d81) sat_plugin_idle_act4_pane_t1

0xdf69,	// (0x00058d94) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdf69,	// (0x00058d94) sat_plugin_idle_act4_pane_t2

0xdf7c,	// (0x00058da7) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdf7c,	// (0x00058da7) sat_plugin_idle_act4_pane_t3

0xdf8f,	// (0x00058dba) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdf8f,	// (0x00058dba) sat_plugin_idle_act4_pane_t4

0x0003,

0xfdb2,	// (0x0005abdd) sat_plugin_idle_act4_pane_t_ParamLimits

0xfdb2,	// (0x0005abdd) sat_plugin_idle_act4_pane_t

0x4e85,	// (0x0004fcb0) popup_battery_window_ParamLimits

0x4e85,	// (0x0004fcb0) popup_battery_window

0x75e7,	// (0x00052412) bg_popup_sub_pane_cp25_ParamLimits

0x75e7,	// (0x00052412) bg_popup_sub_pane_cp25

0xdfa2,	// (0x00058dcd) popup_battery_window_g1_ParamLimits

0xdfa2,	// (0x00058dcd) popup_battery_window_g1

0xdfae,	// (0x00058dd9) popup_battery_window_t1_ParamLimits

0xdfae,	// (0x00058dd9) popup_battery_window_t1

0xdfc0,	// (0x00058deb) popup_battery_window_t2_ParamLimits

0xdfc0,	// (0x00058deb) popup_battery_window_t2

0x0001,

0xfdbb,	// (0x0005abe6) popup_battery_window_t_ParamLimits

0xfdbb,	// (0x0005abe6) popup_battery_window_t

0x8d5c,	// (0x00053b87) midp_canvas_pane_ParamLimits

0x8dd3,	// (0x00053bfe) midp_keypad_pane_ParamLimits

0x8dd3,	// (0x00053bfe) midp_keypad_pane

0x90c6,	// (0x00053ef1) main_midp_pane_ParamLimits

0xbd3c,	// (0x00056b67) signal_pane_g2_cp_ParamLimits

0xdfdd,	// (0x00058e08) aid_size_cell_midp_keypad_ParamLimits

0xdfdd,	// (0x00058e08) aid_size_cell_midp_keypad

0xdff7,	// (0x00058e22) midp_keyp_game_grid_pane_ParamLimits

0xdff7,	// (0x00058e22) midp_keyp_game_grid_pane

0xe017,	// (0x00058e42) midp_keyp_rocker_pane_ParamLimits

0xe017,	// (0x00058e42) midp_keyp_rocker_pane

0xe046,	// (0x00058e71) midp_keyp_sk_left_pane_ParamLimits

0xe046,	// (0x00058e71) midp_keyp_sk_left_pane

0xe0a0,	// (0x00058ecb) midp_keyp_sk_right_pane_ParamLimits

0xe0a0,	// (0x00058ecb) midp_keyp_sk_right_pane

0x7269,	// (0x00052094) bg_button_pane_cp03

0xe0fa,	// (0x00058f25) midp_keyp_sk_left_pane_g1

0x7269,	// (0x00052094) bg_button_pane_cp04

0xe0fa,	// (0x00058f25) midp_keyp_sk_right_pane_g1

0xc246,	// (0x00057071) midp_keyp_rocker_pane_g1

0xe103,	// (0x00058f2e) keyp_game_cell_pane_ParamLimits

0xe103,	// (0x00058f2e) keyp_game_cell_pane

0x7269,	// (0x00052094) bg_button_pane_cp02

0xe116,	// (0x00058f41) keyp_game_cell_pane_g1

0x4ecf,	// (0x0004fcfa) popup_fep_vkb2_window_ParamLimits

0x4ecf,	// (0x0004fcfa) popup_fep_vkb2_window

0x6ad8,	// (0x00051903) aid_size_cell_vkb2_ParamLimits

0x6ad8,	// (0x00051903) aid_size_cell_vkb2

0x6b24,	// (0x0005194f) popup_fep_vkb2_window_g1_ParamLimits

0x6b24,	// (0x0005194f) popup_fep_vkb2_window_g1

0x6b6c,	// (0x00051997) vkb2_area_bottom_pane_ParamLimits

0x6b6c,	// (0x00051997) vkb2_area_bottom_pane

0x6bc0,	// (0x000519eb) vkb2_area_keypad_pane_ParamLimits

0x6bc0,	// (0x000519eb) vkb2_area_keypad_pane

0x6c06,	// (0x00051a31) vkb2_area_top_pane_ParamLimits

0x6c06,	// (0x00051a31) vkb2_area_top_pane

0x6c80,	// (0x00051aab) vkb2_top_entry_pane_ParamLimits

0x6c80,	// (0x00051aab) vkb2_top_entry_pane

0x6caa,	// (0x00051ad5) vkb2_top_grid_left_pane_ParamLimits

0x6caa,	// (0x00051ad5) vkb2_top_grid_left_pane

0x6cc8,	// (0x00051af3) vkb2_top_grid_right_pane_ParamLimits

0x6cc8,	// (0x00051af3) vkb2_top_grid_right_pane

0x6ce6,	// (0x00051b11) vkb2_cell_keypad_pane_ParamLimits

0x6ce6,	// (0x00051b11) vkb2_cell_keypad_pane

0x6d9c,	// (0x00051bc7) vkb2_area_bottom_grid_pane_ParamLimits

0x6d9c,	// (0x00051bc7) vkb2_area_bottom_grid_pane

0x6dc2,	// (0x00051bed) vkb2_area_bottom_pane_g1_ParamLimits

0x6dc2,	// (0x00051bed) vkb2_area_bottom_pane_g1

0x6de6,	// (0x00051c11) vkb2_area_bottom_pane_g2_ParamLimits

0x6de6,	// (0x00051c11) vkb2_area_bottom_pane_g2

0x6e14,	// (0x00051c3f) vkb2_area_bottom_pane_g3_ParamLimits

0x6e14,	// (0x00051c3f) vkb2_area_bottom_pane_g3

0x0002,

0xfdc0,	// (0x0005abeb) vkb2_area_bottom_pane_g_ParamLimits

0xfdc0,	// (0x0005abeb) vkb2_area_bottom_pane_g

0x6e75,	// (0x00051ca0) vkb2_top_cell_left_pane_ParamLimits

0x6e75,	// (0x00051ca0) vkb2_top_cell_left_pane

0xe127,	// (0x00058f52) vkb2_top_entry_pane_g1_ParamLimits

0xe127,	// (0x00058f52) vkb2_top_entry_pane_g1

0xe135,	// (0x00058f60) vkb2_top_entry_pane_t1_ParamLimits

0xe135,	// (0x00058f60) vkb2_top_entry_pane_t1

0xe14d,	// (0x00058f78) vkb2_top_entry_pane_t2_ParamLimits

0xe14d,	// (0x00058f78) vkb2_top_entry_pane_t2

0xe165,	// (0x00058f90) vkb2_top_entry_pane_t3_ParamLimits

0xe165,	// (0x00058f90) vkb2_top_entry_pane_t3

0x0002,

0xfdc7,	// (0x0005abf2) vkb2_top_entry_pane_t_ParamLimits

0xfdc7,	// (0x0005abf2) vkb2_top_entry_pane_t

0x6ec2,	// (0x00051ced) vkb2_top_grid_right_pane_g1_ParamLimits

0x6ec2,	// (0x00051ced) vkb2_top_grid_right_pane_g1

0x6ed8,	// (0x00051d03) vkb2_top_grid_right_pane_g2_ParamLimits

0x6ed8,	// (0x00051d03) vkb2_top_grid_right_pane_g2

0x6ef0,	// (0x00051d1b) vkb2_top_grid_right_pane_g3_ParamLimits

0x6ef0,	// (0x00051d1b) vkb2_top_grid_right_pane_g3

0x6f08,	// (0x00051d33) vkb2_top_grid_right_pane_g4_ParamLimits

0x6f08,	// (0x00051d33) vkb2_top_grid_right_pane_g4

0x0003,

0xfdce,	// (0x0005abf9) vkb2_top_grid_right_pane_g_ParamLimits

0xfdce,	// (0x0005abf9) vkb2_top_grid_right_pane_g

0x6f1e,	// (0x00051d49) vkb2_top_cell_left_pane_g1

0x6f35,	// (0x00051d60) vkb2_cell_keypad_pane_g1_ParamLimits

0x6f35,	// (0x00051d60) vkb2_cell_keypad_pane_g1

0xe17b,	// (0x00058fa6) vkb2_cell_keypad_pane_t1_ParamLimits

0xe17b,	// (0x00058fa6) vkb2_cell_keypad_pane_t1

0x6f59,	// (0x00051d84) vkb2_cell_bottom_grid_pane_ParamLimits

0x6f59,	// (0x00051d84) vkb2_cell_bottom_grid_pane

0x6f92,	// (0x00051dbd) vkb2_cell_bottom_grid_pane_g1

0xdd71,	// (0x00058b9c) aid_call2_pane_cp02

0xdd79,	// (0x00058ba4) aid_call_pane_cp02

0xdd81,	// (0x00058bac) clock_digital_number_pane_cp10

0xdd89,	// (0x00058bb4) clock_digital_number_pane_cp11

0xdd91,	// (0x00058bbc) clock_digital_number_pane_cp12

0xdd99,	// (0x00058bc4) clock_digital_number_pane_cp13

0xdda1,	// (0x00058bcc) clock_digital_separator_pane_cp10

0x874e,	// (0x00053579) popup_clock_digital_analogue_window_cp2_g1

0x874e,	// (0x00053579) popup_clock_digital_analogue_window_cp2_g2

0xdda9,	// (0x00058bd4) popup_clock_digital_analogue_window_cp2_g3

0x874e,	// (0x00053579) popup_clock_digital_analogue_window_cp2_g4

0xdda9,	// (0x00058bd4) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd83,	// (0x0005abae) popup_clock_digital_analogue_window_cp2_g

0xddb1,	// (0x00058bdc) popup_clock_digital_analogue_window_cp2_t1

0xddbf,	// (0x00058bea) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd8e,	// (0x0005abb9) popup_clock_digital_analogue_window_cp2_t

0xc246,	// (0x00057071) clock_digital_number_pane_cp10_g1

0xc246,	// (0x00057071) clock_digital_number_pane_cp10_g2

0x0001,

0xfb6a,	// (0x0005a995) clock_digital_number_pane_cp10_g

0xc246,	// (0x00057071) clock_digital_separator_pane_cp10_g1

0xc246,	// (0x00057071) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb6a,	// (0x0005a995) clock_digital_separator_pane_cp10_g

0xdbec,	// (0x00058a17) uniindi_top_pane_g3

0xdbfd,	// (0x00058a28) uniindi_top_pane_g4

0x6d56,	// (0x00051b81) vkb2_row_keypad_pane_ParamLimits

0x6d56,	// (0x00051b81) vkb2_row_keypad_pane

0x6fae,	// (0x00051dd9) vkb2_cell_t_keypad_pane_ParamLimits

0x6fae,	// (0x00051dd9) vkb2_cell_t_keypad_pane

0x6fbe,	// (0x00051de9) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x6fbe,	// (0x00051de9) vkb2_cell_t_keypad_pane_cp08

0x6fd3,	// (0x00051dfe) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x6fd3,	// (0x00051dfe) vkb2_cell_t_keypad_pane_cp09

0x6fe7,	// (0x00051e12) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x6fe7,	// (0x00051e12) vkb2_cell_t_keypad_pane_cp01

0x6ff8,	// (0x00051e23) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x6ff8,	// (0x00051e23) vkb2_cell_t_keypad_pane_cp02

0x7009,	// (0x00051e34) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x7009,	// (0x00051e34) vkb2_cell_t_keypad_pane_cp03

0x701a,	// (0x00051e45) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x701a,	// (0x00051e45) vkb2_cell_t_keypad_pane_cp04

0x702b,	// (0x00051e56) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x702b,	// (0x00051e56) vkb2_cell_t_keypad_pane_cp05

0x703c,	// (0x00051e67) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x703c,	// (0x00051e67) vkb2_cell_t_keypad_pane_cp06

0x704f,	// (0x00051e7a) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x704f,	// (0x00051e7a) vkb2_cell_t_keypad_pane_cp07

0x7064,	// (0x00051e8f) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x7064,	// (0x00051e8f) vkb2_cell_t_keypad_pane_cp10

0x6807,	// (0x00051632) vkb2_cell_t_keypad_pane_g1

0xe192,	// (0x00058fbd) vkb2_cell_t_keypad_pane_t1

0x4dc0,	// (0x0004fbeb) popup_grid_graphic2_window

0xe1a4,	// (0x00058fcf) aid_size_cell_graphic2_ParamLimits

0xe1a4,	// (0x00058fcf) aid_size_cell_graphic2

0xc3f7,	// (0x00057222) bg_popup_window_pane_cp21_ParamLimits

0xc3f7,	// (0x00057222) bg_popup_window_pane_cp21

0xe1d0,	// (0x00058ffb) graphic2_pages_pane_ParamLimits

0xe1d0,	// (0x00058ffb) graphic2_pages_pane

0xe216,	// (0x00059041) grid_graphic2_control_pane_ParamLimits

0xe216,	// (0x00059041) grid_graphic2_control_pane

0xe244,	// (0x0005906f) grid_graphic2_pane_ParamLimits

0xe244,	// (0x0005906f) grid_graphic2_pane

0xe2a6,	// (0x000590d1) cell_graphic2_pane

0x7269,	// (0x00052094) main_comp_mode_pane

0xd43c,	// (0x00058267) list_ai3_gene_pane_ParamLimits

0xd804,	// (0x0005862f) bg_popup_window_pane_cp19_ParamLimits

0xd810,	// (0x0005863b) bg_touch_area_indi_pane_ParamLimits

0xd810,	// (0x0005863b) bg_touch_area_indi_pane

0xd826,	// (0x00058651) bg_touch_area_indi_pane_cp01_ParamLimits

0xd826,	// (0x00058651) bg_touch_area_indi_pane_cp01

0xd83e,	// (0x00058669) bg_touch_area_indi_pane_cp02_ParamLimits

0xd83e,	// (0x00058669) bg_touch_area_indi_pane_cp02

0xd858,	// (0x00058683) bg_touch_area_indi_pane_cp03_ParamLimits

0xd858,	// (0x00058683) bg_touch_area_indi_pane_cp03

0xd872,	// (0x0005869d) popup_slider_window_g1_ParamLimits

0xd88e,	// (0x000586b9) popup_slider_window_g2_ParamLimits

0xd8aa,	// (0x000586d5) popup_slider_window_g3_ParamLimits

0xfd18,	// (0x0005ab43) popup_slider_window_g_ParamLimits

0xd906,	// (0x00058731) popup_slider_window_t1_ParamLimits

0xd97a,	// (0x000587a5) small_volume_slider_vertical_pane_ParamLimits

0xe2a6,	// (0x000590d1) cell_graphic2_pane_ParamLimits

0xe2fb,	// (0x00059126) bg_button_pane_cp10_ParamLimits

0xe2fb,	// (0x00059126) bg_button_pane_cp10

0xe310,	// (0x0005913b) bg_button_pane_cp11_ParamLimits

0xe310,	// (0x0005913b) bg_button_pane_cp11

0xe325,	// (0x00059150) graphic2_pages_pane_g1_ParamLimits

0xe325,	// (0x00059150) graphic2_pages_pane_g1

0xe340,	// (0x0005916b) graphic2_pages_pane_g2_ParamLimits

0xe340,	// (0x0005916b) graphic2_pages_pane_g2

0x0001,

0xfddc,	// (0x0005ac07) graphic2_pages_pane_g_ParamLimits

0xfddc,	// (0x0005ac07) graphic2_pages_pane_g

0xe358,	// (0x00059183) graphic2_pages_pane_t1_ParamLimits

0xe358,	// (0x00059183) graphic2_pages_pane_t1

0xe36e,	// (0x00059199) cell_graphic2_control_pane_ParamLimits

0xe36e,	// (0x00059199) cell_graphic2_control_pane

0xe388,	// (0x000591b3) cell_graphic2_pane_g1_ParamLimits

0xe388,	// (0x000591b3) cell_graphic2_pane_g1

0xe395,	// (0x000591c0) cell_graphic2_pane_g2_ParamLimits

0xe395,	// (0x000591c0) cell_graphic2_pane_g2

0xe3a2,	// (0x000591cd) cell_graphic2_pane_g3_ParamLimits

0xe3a2,	// (0x000591cd) cell_graphic2_pane_g3

0xe3af,	// (0x000591da) cell_graphic2_pane_g4_ParamLimits

0xe3af,	// (0x000591da) cell_graphic2_pane_g4

0xe3bc,	// (0x000591e7) cell_graphic2_pane_g5_ParamLimits

0xe3bc,	// (0x000591e7) cell_graphic2_pane_g5

0x0004,

0xfde1,	// (0x0005ac0c) cell_graphic2_pane_g_ParamLimits

0xfde1,	// (0x0005ac0c) cell_graphic2_pane_g

0xe3d7,	// (0x00059202) cell_graphic2_pane_t1_ParamLimits

0xe3d7,	// (0x00059202) cell_graphic2_pane_t1

0x9cf4,	// (0x00054b1f) grid_highlight_pane_cp11_ParamLimits

0x9cf4,	// (0x00054b1f) grid_highlight_pane_cp11

0x80de,	// (0x00052f09) bg_button_pane_cp05

0xe3ed,	// (0x00059218) cell_graphic2_control_pane_g1

0xc246,	// (0x00057071) bg_touch_area_indi_pane_g1

0xe3fa,	// (0x00059225) aid_cmod_rocker_key_size

0xe404,	// (0x0005922f) aid_cmode_itu_key_size

0xe40e,	// (0x00059239) main_cmode_video_pane

0xe418,	// (0x00059243) main_comp_mode_itu_pane

0xe424,	// (0x0005924f) main_comp_mode_rocker_pane

0xe430,	// (0x0005925b) cell_cmode_rocker_pane_ParamLimits

0xe430,	// (0x0005925b) cell_cmode_rocker_pane

0xe444,	// (0x0005926f) cell_cmode_itu_pane_ParamLimits

0xe444,	// (0x0005926f) cell_cmode_itu_pane

0x80de,	// (0x00052f09) bg_button_pane_cp06_ParamLimits

0x80de,	// (0x00052f09) bg_button_pane_cp06

0xc4de,	// (0x00057309) cell_cmode_rocker_pane_g1_ParamLimits

0xc4de,	// (0x00057309) cell_cmode_rocker_pane_g1

0xda21,	// (0x0005884c) cell_cmode_rocker_pane_g2_ParamLimits

0xda21,	// (0x0005884c) cell_cmode_rocker_pane_g2

0x0001,

0xfdec,	// (0x0005ac17) cell_cmode_rocker_pane_g_ParamLimits

0xfdec,	// (0x0005ac17) cell_cmode_rocker_pane_g

0x7269,	// (0x00052094) bg_button_pane_cp07

0xe45b,	// (0x00059286) cell_cmode_itu_pane_g1

0xe464,	// (0x0005928f) cell_cmode_itu_pane_t1

0xe472,	// (0x0005929d) cell_cmode_itu_pane_t2

0x0001,

0xfdf1,	// (0x0005ac1c) cell_cmode_itu_pane_t

0xdc70,	// (0x00058a9b) aid_touch_ctrl_left

0xdc78,	// (0x00058aa3) aid_touch_ctrl_right

0x7269,	// (0x00052094) compa_mode_pane

0xe480,	// (0x000592ab) aid_cmod_rocker_key_size_cp

0xe48a,	// (0x000592b5) aid_cmode_itu_key_size_cp

0xe494,	// (0x000592bf) compa_mode_pane_g1

0xe49c,	// (0x000592c7) compa_mode_pane_g2

0xe4a4,	// (0x000592cf) compa_mode_pane_g3

0x0002,

0xfdf6,	// (0x0005ac21) compa_mode_pane_g

0xe4ac,	// (0x000592d7) main_comp_mode_itu_pane_cp

0xe4b4,	// (0x000592df) main_comp_mode_rocker_pane_cp

0xe4bc,	// (0x000592e7) cell_cmode_itu_pane_cp_ParamLimits

0xe4bc,	// (0x000592e7) cell_cmode_itu_pane_cp

0xe4d1,	// (0x000592fc) cell_cmode_rocker_pane_cp_ParamLimits

0xe4d1,	// (0x000592fc) cell_cmode_rocker_pane_cp

0x80de,	// (0x00052f09) bg_button_pane_cp06_cp_ParamLimits

0x80de,	// (0x00052f09) bg_button_pane_cp06_cp

0xc4de,	// (0x00057309) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc4de,	// (0x00057309) cell_cmode_rocker_pane_g1_cp

0xc246,	// (0x00057071) cell_cmode_rocker_pane_g2_cp

0x7269,	// (0x00052094) bg_button_pane_cp07_cp

0xe4e3,	// (0x0005930e) cell_cmode_itu_pane_g1_cp

0xe4ec,	// (0x00059317) cell_cmode_itu_pane_t1_cp

0xe4ec,	// (0x00059317) cell_cmode_itu_pane_t2_cp

0xb18a,	// (0x00055fb5) settings_code_pane_cp2

0x735d,	// (0x00052188) bg_popup_window_pane_cp3_ParamLimits

0x77d5,	// (0x00052600) heading_pane_cp3_ParamLimits

0x77e1,	// (0x0005260c) listscroll_popup_graphic_pane_ParamLimits

0x659a,	// (0x000513c5) fep_hwr_aid_pane_ParamLimits

0x6a2d,	// (0x00051858) aid_touch_sctrl_top_ParamLimits

0x6a48,	// (0x00051873) sctrl_sk_top_pane_g1_ParamLimits

0x6807,	// (0x00051632) sctrl_sk_top_pane_g2_ParamLimits

0xfd31,	// (0x0005ab5c) sctrl_sk_top_pane_g_ParamLimits

0x6a55,	// (0x00051880) sctrl_sk_top_pane_t1_ParamLimits

0x6a2d,	// (0x00051858) aid_touch_sctrl_bottom_ParamLimits

0x6a55,	// (0x00051880) sctrl_sk_bottom_pane_t1_ParamLimits

0xdbb6,	// (0x000589e1) aid_area_touch_clock

0x6c48,	// (0x00051a73) aid_vkb2_area_top_pane_cell_ParamLimits

0x6c48,	// (0x00051a73) aid_vkb2_area_top_pane_cell

0x6d78,	// (0x00051ba3) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x6d78,	// (0x00051ba3) aid_vkb2_area_bottom_pane_cell

0xe11f,	// (0x00058f4a) popup_char_count_window

0xe4fa,	// (0x00059325) popup_char_count_window_g1

0xe503,	// (0x0005932e) popup_char_count_window_g2

0xe50c,	// (0x00059337) popup_char_count_window_g3

0x0002,

0xfdfd,	// (0x0005ac28) popup_char_count_window_g

0xe515,	// (0x00059340) popup_char_count_window_t1

0x6b02,	// (0x0005192d) popup_fep_char_preview_window_ParamLimits

0x6b02,	// (0x0005192d) popup_fep_char_preview_window

0x6c66,	// (0x00051a91) vkb2_top_candi_pane_ParamLimits

0x6c66,	// (0x00051a91) vkb2_top_candi_pane

0xe523,	// (0x0005934e) cell_vkb2_top_candi_pane_ParamLimits

0xe523,	// (0x0005934e) cell_vkb2_top_candi_pane

0x7079,	// (0x00051ea4) bg_popup_fep_char_preview_window_ParamLimits

0x7079,	// (0x00051ea4) bg_popup_fep_char_preview_window

0x7087,	// (0x00051eb2) popup_fep_char_preview_window_t1_ParamLimits

0x7087,	// (0x00051eb2) popup_fep_char_preview_window_t1

0xe574,	// (0x0005939f) bg_popup_fep_char_preview_window_g1

0xe57c,	// (0x000593a7) bg_popup_fep_char_preview_window_g2

0xe584,	// (0x000593af) bg_popup_fep_char_preview_window_g3

0xe58c,	// (0x000593b7) bg_popup_fep_char_preview_window_g4

0xe594,	// (0x000593bf) bg_popup_fep_char_preview_window_g5

0x70c1,	// (0x00051eec) bg_popup_fep_char_preview_window_g6

0xe59c,	// (0x000593c7) bg_popup_fep_char_preview_window_g7

0xe5a4,	// (0x000593cf) bg_popup_fep_char_preview_window_g8

0xe5ac,	// (0x000593d7) bg_popup_fep_char_preview_window_g9

0x0008,

0xfe04,	// (0x0005ac2f) bg_popup_fep_char_preview_window_g

0x6807,	// (0x00051632) cell_vkb2_top_candi_pane_g1_ParamLimits

0x6807,	// (0x00051632) cell_vkb2_top_candi_pane_g1

0x6815,	// (0x00051640) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6815,	// (0x00051640) cell_vkb2_top_candi_pane_g2

0xdb7c,	// (0x000589a7) cell_vkb2_top_candi_pane_g3_ParamLimits

0xdb7c,	// (0x000589a7) cell_vkb2_top_candi_pane_g3

0x70c9,	// (0x00051ef4) cell_vkb2_top_candi_pane_g4_ParamLimits

0x70c9,	// (0x00051ef4) cell_vkb2_top_candi_pane_g4

0xc9dd,	// (0x00057808) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc9dd,	// (0x00057808) cell_vkb2_top_candi_pane_g5

0x70ea,	// (0x00051f15) cell_vkb2_top_candi_pane_g6_ParamLimits

0x70ea,	// (0x00051f15) cell_vkb2_top_candi_pane_g6

0x0005,

0xfe17,	// (0x0005ac42) cell_vkb2_top_candi_pane_g_ParamLimits

0xfe17,	// (0x0005ac42) cell_vkb2_top_candi_pane_g

0x70f8,	// (0x00051f23) cell_vkb2_top_candi_pane_t1

0x61c0,	// (0x00050feb) aid_size_touch_slider_mark_ParamLimits

0x61c0,	// (0x00050feb) aid_size_touch_slider_mark

0xe206,	// (0x00059031) grid_graphic2_catg_pane_ParamLimits

0xe206,	// (0x00059031) grid_graphic2_catg_pane

0xe280,	// (0x000590ab) popup_grid_graphic2_window_t1_ParamLimits

0xe280,	// (0x000590ab) popup_grid_graphic2_window_t1

0xe292,	// (0x000590bd) popup_grid_graphic2_window_t2_ParamLimits

0xe292,	// (0x000590bd) popup_grid_graphic2_window_t2

0x0001,

0xfdd7,	// (0x0005ac02) popup_grid_graphic2_window_t_ParamLimits

0xfdd7,	// (0x0005ac02) popup_grid_graphic2_window_t

0x80de,	// (0x00052f09) bg_button_pane_cp05_ParamLimits

0xe3ed,	// (0x00059218) cell_graphic2_control_pane_g1_ParamLimits

0xe5b4,	// (0x000593df) cell_graphic2_catg_pane_ParamLimits

0xe5b4,	// (0x000593df) cell_graphic2_catg_pane

0x7269,	// (0x00052094) bg_button_pane_cp12

0xe5c6,	// (0x000593f1) cell_graphic2_catg_pane_g1

0xdb61,	// (0x0005898c) cell_tb_ext_pane_t1_ParamLimits

0x6e95,	// (0x00051cc0) vkb2_top_cell_right_narrow_pane_ParamLimits

0x6e95,	// (0x00051cc0) vkb2_top_cell_right_narrow_pane

0x6ead,	// (0x00051cd8) vkb2_top_cell_right_wide_pane_ParamLimits

0x6ead,	// (0x00051cd8) vkb2_top_cell_right_wide_pane

0x658c,	// (0x000513b7) bg_vkb2_func_pane_ParamLimits

0x658c,	// (0x000513b7) bg_vkb2_func_pane

0x6f1e,	// (0x00051d49) vkb2_top_cell_left_pane_g1_ParamLimits

0x658c,	// (0x000513b7) bg_vkb2_fuc_pane_cp03_ParamLimits

0x658c,	// (0x000513b7) bg_vkb2_fuc_pane_cp03

0x6f92,	// (0x00051dbd) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9c0a,	// (0x00054a35) bg_vkb2_func_pane_g1

0x9c12,	// (0x00054a3d) bg_vkb2_func_pane_g2

0x9c22,	// (0x00054a4d) bg_vkb2_func_pane_g3

0x9c1a,	// (0x00054a45) bg_vkb2_func_pane_g4

0x9c2a,	// (0x00054a55) bg_vkb2_func_pane_g5

0x9c32,	// (0x00054a5d) bg_vkb2_func_pane_g6

0x9c3a,	// (0x00054a65) bg_vkb2_func_pane_g7

0x9c42,	// (0x00054a6d) bg_vkb2_func_pane_g8

0x9c02,	// (0x00054a2d) bg_vkb2_func_pane_g9

0x0008,

0xfe24,	// (0x0005ac4f) bg_vkb2_func_pane_g

0x658c,	// (0x000513b7) bg_vkb2_fuc_pane_cp01_ParamLimits

0x658c,	// (0x000513b7) bg_vkb2_fuc_pane_cp01

0x6f1e,	// (0x00051d49) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x6f1e,	// (0x00051d49) vkb2_top_cell_right_wide_pane_g1

0x658c,	// (0x000513b7) bg_vkb2_fuc_pane_cp02_ParamLimits

0x658c,	// (0x000513b7) bg_vkb2_fuc_pane_cp02

0x6f92,	// (0x00051dbd) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x6f92,	// (0x00051dbd) vkb2_top_cell_right_narrow_pane_g1

0xd782,	// (0x000585ad) aid_touch_area_decrease_ParamLimits

0xd782,	// (0x000585ad) aid_touch_area_decrease

0xd7a6,	// (0x000585d1) aid_touch_area_increase_ParamLimits

0xd7a6,	// (0x000585d1) aid_touch_area_increase

0xd7b2,	// (0x000585dd) aid_touch_area_mute_ParamLimits

0xd7b2,	// (0x000585dd) aid_touch_area_mute

0xd7d6,	// (0x00058601) aid_touch_area_slider_ParamLimits

0xd7d6,	// (0x00058601) aid_touch_area_slider

0xd8c6,	// (0x000586f1) popup_slider_window_g4_ParamLimits

0xd8c6,	// (0x000586f1) popup_slider_window_g4

0xd8d2,	// (0x000586fd) popup_slider_window_g5_ParamLimits

0xd8d2,	// (0x000586fd) popup_slider_window_g5

0xd8f4,	// (0x0005871f) popup_slider_window_g6_ParamLimits

0xd8f4,	// (0x0005871f) popup_slider_window_g6

0xd934,	// (0x0005875f) popup_slider_window_t2_ParamLimits

0xd934,	// (0x0005875f) popup_slider_window_t2

0x0001,

0xfd25,	// (0x0005ab50) popup_slider_window_t_ParamLimits

0xfd25,	// (0x0005ab50) popup_slider_window_t

0xd94c,	// (0x00058777) slider_pane_ParamLimits

0xd94c,	// (0x00058777) slider_pane

0xe5cf,	// (0x000593fa) slider_pane_g1_ParamLimits

0xe5cf,	// (0x000593fa) slider_pane_g1

0xe5e3,	// (0x0005940e) slider_pane_g2_ParamLimits

0xe5e3,	// (0x0005940e) slider_pane_g2

0xe5f9,	// (0x00059424) slider_pane_g3_ParamLimits

0xe5f9,	// (0x00059424) slider_pane_g3

0x0003,

0xfe37,	// (0x0005ac62) slider_pane_g_ParamLimits

0xfe37,	// (0x0005ac62) slider_pane_g

0x95fc,	// (0x00054427) popup_tb_float_extension_window_ParamLimits

0x95fc,	// (0x00054427) popup_tb_float_extension_window

0xe625,	// (0x00059450) aid_size_cell_tb_float_ext

0x7269,	// (0x00052094) bg_popup_sub_window_cp28

0xe631,	// (0x0005945c) grid_tb_float_ext_pane

0xe63d,	// (0x00059468) cell_tb_float_ext_pane_ParamLimits

0xe63d,	// (0x00059468) cell_tb_float_ext_pane

0xe659,	// (0x00059484) cell_tb_float_ext_pane_g1

0xe662,	// (0x0005948d) grid_highlight_pane_cp12

0x66e1,	// (0x0005150c) cell_last_hwr_side_pane_ParamLimits

0x66e1,	// (0x0005150c) cell_last_hwr_side_pane

0xc246,	// (0x00057071) cell_last_hwr_side_pane_g1

0xe66b,	// (0x00059496) cell_last_hwr_side_pane_g2

0x0001,

0xfe40,	// (0x0005ac6b) cell_last_hwr_side_pane_g

0x6e44,	// (0x00051c6f) vkb2_area_bottom_space_btn_pane_ParamLimits

0x6e44,	// (0x00051c6f) vkb2_area_bottom_space_btn_pane

0x6807,	// (0x00051632) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe192,	// (0x00058fbd) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x70f8,	// (0x00051f23) cell_vkb2_top_candi_pane_t1_ParamLimits

0x7116,	// (0x00051f41) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x7116,	// (0x00051f41) vkb2_area_bottom_space_btn_pane_g1

0x7150,	// (0x00051f7b) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x7150,	// (0x00051f7b) vkb2_area_bottom_space_btn_pane_g2

0x7186,	// (0x00051fb1) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x7186,	// (0x00051fb1) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe45,	// (0x0005ac70) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe45,	// (0x0005ac70) vkb2_area_bottom_space_btn_pane_g

0x6651,	// (0x0005147c) cel_fep_hwr_func_pane_ParamLimits

0x6651,	// (0x0005147c) cel_fep_hwr_func_pane

0x668d,	// (0x000514b8) cell_hwr_side_button_pane_ParamLimits

0x668d,	// (0x000514b8) cell_hwr_side_button_pane

0xdbb6,	// (0x000589e1) aid_area_touch_clock_ParamLimits

0x75e7,	// (0x00052412) bg_uniindi_top_pane_ParamLimits

0xdbca,	// (0x000589f5) uniindi_top_pane_g1_ParamLimits

0xdbe0,	// (0x00058a0b) uniindi_top_pane_g2_ParamLimits

0xdbec,	// (0x00058a17) uniindi_top_pane_g3_ParamLimits

0xdbfd,	// (0x00058a28) uniindi_top_pane_g4_ParamLimits

0xfd5d,	// (0x0005ab88) uniindi_top_pane_g_ParamLimits

0xdc0a,	// (0x00058a35) uniindi_top_pane_t1_ParamLimits

0x75e7,	// (0x00052412) bg_vkb2_func_pane_cp01_ParamLimits

0x75e7,	// (0x00052412) bg_vkb2_func_pane_cp01

0xe674,	// (0x0005949f) cel_fep_hwr_func_pane_g1_ParamLimits

0xe674,	// (0x0005949f) cel_fep_hwr_func_pane_g1

0x75e7,	// (0x00052412) bg_vkb2_func_pane_cp02_ParamLimits

0x75e7,	// (0x00052412) bg_vkb2_func_pane_cp02

0xe674,	// (0x0005949f) cell_hwr_side_button_pane_g1_ParamLimits

0xe674,	// (0x0005949f) cell_hwr_side_button_pane_g1

0x9a83,	// (0x000548ae) status_pane_g4_ParamLimits

0x9a83,	// (0x000548ae) status_pane_g4

0x9a9d,	// (0x000548c8) status_pane_t1

0xbfe2,	// (0x00056e0d) form2_midp_gauge_slider_cont_pane

0xbfea,	// (0x00056e15) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbffc,	// (0x00056e27) form2_midp_gauge_slider_pane_t2_ParamLimits

0xc00e,	// (0x00056e39) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb1d,	// (0x0005a948) form2_midp_gauge_slider_pane_t_ParamLimits

0xc020,	// (0x00056e4b) form2_midp_slider_pane_ParamLimits

0x6aca,	// (0x000518f5) aid_size_cell_func_vkb2_ParamLimits

0x6aca,	// (0x000518f5) aid_size_cell_func_vkb2

0xe611,	// (0x0005943c) slider_pane_g4_ParamLimits

0xe611,	// (0x0005943c) slider_pane_g4

0x71d0,	// (0x00051ffb) form2_midp_gauge_slider_pane_t2_cp01

0x71de,	// (0x00052009) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x71de,	// (0x00052009) form2_midp_gauge_slider_pane_t3_cp01

0x71fb,	// (0x00052026) form2_midp_slider_pane_cp01

0x7269,	// (0x00052094) navi_smil_pane

0xe6ad,	// (0x000594d8) navi_smil_pane_g1

0xe6b5,	// (0x000594e0) navi_smil_pane_t1

0xe682,	// (0x000594ad) form2_midp_slider_pane_g1

0xe68b,	// (0x000594b6) form2_midp_slider_pane_g2

0xe693,	// (0x000594be) form2_midp_slider_pane_g3

0xe682,	// (0x000594ad) form2_midp_slider_pane_g4

0xe69b,	// (0x000594c6) form2_midp_slider_pane_g5

0x0004,

0xfe4e,	// (0x0005ac79) form2_midp_slider_pane_g

0x71c0,	// (0x00051feb) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x71c0,	// (0x00051feb) vkb2_area_bottom_space_btn_pane_g4

0x989b,	// (0x000546c6) lc0_navi_pane_ParamLimits

0x989b,	// (0x000546c6) lc0_navi_pane

0x9917,	// (0x00054742) lc0_stat_indi_pane_ParamLimits

0x9917,	// (0x00054742) lc0_stat_indi_pane

0x992e,	// (0x00054759) ls0_title_pane_ParamLimits

0x992e,	// (0x00054759) ls0_title_pane

0x80de,	// (0x00052f09) bg_popup_sub_pane_cp14_ParamLimits

0xdb9d,	// (0x000589c8) list_uniindi_pane_ParamLimits

0xdba9,	// (0x000589d4) uniindi_top_pane_ParamLimits

0xdc48,	// (0x00058a73) list_single_uniindi_pane_g1_ParamLimits

0xdc5b,	// (0x00058a86) list_single_uniindi_pane_t1_ParamLimits

0x7204,	// (0x0005202f) lc0_stat_clock_pane_ParamLimits

0x7204,	// (0x0005202f) lc0_stat_clock_pane

0xe6c3,	// (0x000594ee) lc0_stat_indi_pane_g1_ParamLimits

0xe6c3,	// (0x000594ee) lc0_stat_indi_pane_g1

0xe6d0,	// (0x000594fb) lc0_stat_indi_pane_g2_ParamLimits

0xe6d0,	// (0x000594fb) lc0_stat_indi_pane_g2

0x0001,

0xfe59,	// (0x0005ac84) lc0_stat_indi_pane_g_ParamLimits

0xfe59,	// (0x0005ac84) lc0_stat_indi_pane_g

0x7211,	// (0x0005203c) lc0_uni_indicator_pane_ParamLimits

0x7211,	// (0x0005203c) lc0_uni_indicator_pane

0xe6dd,	// (0x00059508) ls0_title_pane_g1_ParamLimits

0xe6dd,	// (0x00059508) ls0_title_pane_g1

0xe6f1,	// (0x0005951c) ls0_title_pane_t1_ParamLimits

0xe6f1,	// (0x0005951c) ls0_title_pane_t1

0x721e,	// (0x00052049) lc0_uni_indicator_pane_g1_ParamLimits

0x721e,	// (0x00052049) lc0_uni_indicator_pane_g1

0xe727,	// (0x00059552) lc0_stat_clock_pane_t1

0x7269,	// (0x00052094) main_ai5_pane

0xe735,	// (0x00059560) ai5_sk_pane_ParamLimits

0xe735,	// (0x00059560) ai5_sk_pane

0xe742,	// (0x0005956d) cell_ai5_widget_pane_ParamLimits

0xe742,	// (0x0005956d) cell_ai5_widget_pane

0xe7b8,	// (0x000595e3) aid_size_cell_widget_grid

0xe7cc,	// (0x000595f7) bg_ai5_widget_pane_ParamLimits

0xe7cc,	// (0x000595f7) bg_ai5_widget_pane

0xe7f4,	// (0x0005961f) cell_ai5_widget_pane_g2

0xe804,	// (0x0005962f) cell_ai5_widget_pane_g3

0xe818,	// (0x00059643) cell_ai5_widget_pane_g4

0xe824,	// (0x0005964f) cell_ai5_widget_pane_g5

0xe830,	// (0x0005965b) cell_ai5_widget_pane_g6

0xe83e,	// (0x00059669) cell_ai5_widget_pane_g7

0xe886,	// (0x000596b1) cell_ai5_widget_pane_t1_ParamLimits

0xe886,	// (0x000596b1) cell_ai5_widget_pane_t1

0xe8a3,	// (0x000596ce) cell_ai5_widget_pane_t2_ParamLimits

0xe8a3,	// (0x000596ce) cell_ai5_widget_pane_t2

0xe8bb,	// (0x000596e6) cell_ai5_widget_pane_t3_ParamLimits

0xe8bb,	// (0x000596e6) cell_ai5_widget_pane_t3

0xe8d3,	// (0x000596fe) cell_ai5_widget_pane_t4_ParamLimits

0xe8d3,	// (0x000596fe) cell_ai5_widget_pane_t4

0xe8ed,	// (0x00059718) cell_ai5_widget_pane_t5_ParamLimits

0xe8ed,	// (0x00059718) cell_ai5_widget_pane_t5

0xe90c,	// (0x00059737) cell_ai5_widget_pane_t6_ParamLimits

0xe90c,	// (0x00059737) cell_ai5_widget_pane_t6

0xe91e,	// (0x00059749) cell_ai5_widget_pane_t7_ParamLimits

0xe91e,	// (0x00059749) cell_ai5_widget_pane_t7

0xe937,	// (0x00059762) cell_ai5_widget_pane_t8_ParamLimits

0xe937,	// (0x00059762) cell_ai5_widget_pane_t8

0x0009,

0xfe73,	// (0x0005ac9e) cell_ai5_widget_pane_t_ParamLimits

0xfe73,	// (0x0005ac9e) cell_ai5_widget_pane_t

0xe97f,	// (0x000597aa) grid_ai5_widget_pane

0x80de,	// (0x00052f09) highlight_cell_ai5_widget_pane_ParamLimits

0x80de,	// (0x00052f09) highlight_cell_ai5_widget_pane

0xe996,	// (0x000597c1) ai5_sk_left_pane

0xe9a0,	// (0x000597cb) ai5_sk_middle_pane

0xe9aa,	// (0x000597d5) ai5_sk_right_pane

0xe9b4,	// (0x000597df) bg_ai5_widget_pane_g1_ParamLimits

0xe9b4,	// (0x000597df) bg_ai5_widget_pane_g1

0xe9c0,	// (0x000597eb) bg_ai5_widget_pane_g2_ParamLimits

0xe9c0,	// (0x000597eb) bg_ai5_widget_pane_g2

0xe9cc,	// (0x000597f7) bg_ai5_widget_pane_g3_ParamLimits

0xe9cc,	// (0x000597f7) bg_ai5_widget_pane_g3

0xe9d8,	// (0x00059803) bg_ai5_widget_pane_g4_ParamLimits

0xe9d8,	// (0x00059803) bg_ai5_widget_pane_g4

0xe9e4,	// (0x0005980f) bg_ai5_widget_pane_g5_ParamLimits

0xe9e4,	// (0x0005980f) bg_ai5_widget_pane_g5

0xe9f0,	// (0x0005981b) bg_ai5_widget_pane_g6_ParamLimits

0xe9f0,	// (0x0005981b) bg_ai5_widget_pane_g6

0xe9fc,	// (0x00059827) bg_ai5_widget_pane_g7_ParamLimits

0xe9fc,	// (0x00059827) bg_ai5_widget_pane_g7

0xea08,	// (0x00059833) bg_ai5_widget_pane_g8_ParamLimits

0xea08,	// (0x00059833) bg_ai5_widget_pane_g8

0xea14,	// (0x0005983f) bg_ai5_widget_pane_g9_ParamLimits

0xea14,	// (0x0005983f) bg_ai5_widget_pane_g9

0x0008,

0xfe88,	// (0x0005acb3) bg_ai5_widget_pane_g_ParamLimits

0xfe88,	// (0x0005acb3) bg_ai5_widget_pane_g

0xea39,	// (0x00059864) cell_shortcut_ai5_widget_pane_ParamLimits

0xea39,	// (0x00059864) cell_shortcut_ai5_widget_pane

0x7429,	// (0x00052254) bg_cell_shortcut_ai5_widget_pane

0xea4b,	// (0x00059876) cell_grid_ai5_widget_pane_g1

0xea54,	// (0x0005987f) highlight_cell_shortcut_ai5_widget_pane

0x9c0a,	// (0x00054a35) ai5_sk_left_pane_g1

0xea5c,	// (0x00059887) ai5_sk_left_pane_g2

0xea64,	// (0x0005988f) ai5_sk_left_pane_g3

0xea6c,	// (0x00059897) ai5_sk_left_pane_g4

0x0003,

0xfe9b,	// (0x0005acc6) ai5_sk_left_pane_g

0xea74,	// (0x0005989f) ai5_sk_left_pane_t1

0x9c12,	// (0x00054a3d) ai5_sk_right_pane_g1

0xea82,	// (0x000598ad) ai5_sk_right_pane_g2

0xea8a,	// (0x000598b5) ai5_sk_right_pane_g3

0xea92,	// (0x000598bd) ai5_sk_right_pane_g4

0x0003,

0xfea4,	// (0x0005accf) ai5_sk_right_pane_g

0xea9a,	// (0x000598c5) ai5_sk_right_pane_t1

0x9c12,	// (0x00054a3d) ai5_sk_middle_pane_g1

0x9c0a,	// (0x00054a35) ai5_sk_middle_pane_g2

0x9c2a,	// (0x00054a55) ai5_sk_middle_pane_g3

0xea8a,	// (0x000598b5) ai5_sk_middle_pane_g4

0xea64,	// (0x0005988f) ai5_sk_middle_pane_g5

0xeaa8,	// (0x000598d3) ai5_sk_middle_pane_g6

0xeab0,	// (0x000598db) ai5_sk_middle_pane_g7

0x0006,

0xfead,	// (0x0005acd8) ai5_sk_middle_pane_g

0x971d,	// (0x00054548) aid_touch_area_size_lc0_ParamLimits

0x971d,	// (0x00054548) aid_touch_area_size_lc0

0x6836,	// (0x00051661) cell_hwr_candidate_pane_t1_ParamLimits

0x973b,	// (0x00054566) aid_touch_navi_pane

0x9a2d,	// (0x00054858) status_dt_navi_pane_ParamLimits

0x9a2d,	// (0x00054858) status_dt_navi_pane

0x9a3a,	// (0x00054865) status_dt_sta_pane_ParamLimits

0x9a3a,	// (0x00054865) status_dt_sta_pane

0xeab8,	// (0x000598e3) dt_sta_controll_pane

0xeac5,	// (0x000598f0) dt_sta_indi_pane

0xead6,	// (0x00059901) dt_sta_title_pane

0x75e7,	// (0x00052412) bg_dt_sta_indi_pane_ParamLimits

0x75e7,	// (0x00052412) bg_dt_sta_indi_pane

0xeae9,	// (0x00059914) dt_sta_battery_pane

0xeaf1,	// (0x0005991c) dt_sta_indi_pane_g1

0xeafa,	// (0x00059925) dt_sta_indi_pane_g2

0xeb03,	// (0x0005992e) dt_sta_indi_pane_g3

0x0002,

0xfebc,	// (0x0005ace7) dt_sta_indi_pane_g

0xeb0c,	// (0x00059937) dt_sta_signal_pane

0x80de,	// (0x00052f09) bg_dt_sta_title_pane_ParamLimits

0x80de,	// (0x00052f09) bg_dt_sta_title_pane

0xeb15,	// (0x00059940) dt_sta_title_pane_g1

0xeb1d,	// (0x00059948) dt_sta_title_pane_t1_ParamLimits

0xeb1d,	// (0x00059948) dt_sta_title_pane_t1

0x7269,	// (0x00052094) bg_dt_sta_control_pane

0xeb32,	// (0x0005995d) dt_sta_controll_pane_g1

0xeb3b,	// (0x00059966) bg_dt_sta_title_pane_g1

0xeb44,	// (0x0005996f) bg_dt_sta_title_pane_g2

0xeb4d,	// (0x00059978) bg_dt_sta_title_pane_g3

0x0002,

0xfec3,	// (0x0005acee) bg_dt_sta_title_pane_g

0xc246,	// (0x00057071) bg_dt_sta_indi_pane_g1

0xeb56,	// (0x00059981) dt_sta_signal_pane_g1

0xeb5e,	// (0x00059989) dt_sta_signal_pane_g2

0x0001,

0xfeca,	// (0x0005acf5) dt_sta_signal_pane_g

0xeb66,	// (0x00059991) dt_sta_battery_pane_g1

0xeb6f,	// (0x0005999a) dt_sta_battery_pane_t1

0xc246,	// (0x00057071) bg_dt_sta_control_pane_g1

0x883a,	// (0x00053665) fep_china_uni_eep_pane

0x8842,	// (0x0005366d) fep_china_uni_entry_pane_ParamLimits

0x8852,	// (0x0005367d) popup_fep_china_uni_window_g1_ParamLimits

0x8862,	// (0x0005368d) popup_fep_china_uni_window_g2_ParamLimits

0x8862,	// (0x0005368d) popup_fep_china_uni_window_g2

0x0001,

0xf762,	// (0x0005a58d) popup_fep_china_uni_window_g_ParamLimits

0xf762,	// (0x0005a58d) popup_fep_china_uni_window_g

0xeb7e,	// (0x000599a9) fep_china_uni_eep_pane_g1

0xeb86,	// (0x000599b1) fep_china_uni_eep_pane_t1

0xe6a4,	// (0x000594cf) aid_touch_area_size_smil_player

0x9893,	// (0x000546be) lc0_clock_pane

0x9a91,	// (0x000548bc) status_pane_g5_ParamLimits

0x9a91,	// (0x000548bc) status_pane_g5

0x9281,	// (0x000540ac) popup_keymap_window

0x9a4f,	// (0x0005487a) status_icon_pane

0xe804,	// (0x0005962f) cell_ai5_widget_pane_g3_ParamLimits

0xe818,	// (0x00059643) cell_ai5_widget_pane_g4_ParamLimits

0xe824,	// (0x0005964f) cell_ai5_widget_pane_g5_ParamLimits

0xe84a,	// (0x00059675) cell_ai5_widget_pane_g8_ParamLimits

0xe84a,	// (0x00059675) cell_ai5_widget_pane_g8

0xe85e,	// (0x00059689) cell_ai5_widget_pane_g9_ParamLimits

0xe85e,	// (0x00059689) cell_ai5_widget_pane_g9

0xe872,	// (0x0005969d) cell_ai5_widget_pane_g10_ParamLimits

0xe872,	// (0x0005969d) cell_ai5_widget_pane_g10

0xeb95,	// (0x000599c0) status_icon_pane_g1

0x7269,	// (0x00052094) bg_popup_sub_pane_cp13

0xeb9d,	// (0x000599c8) popup_keymap_window_t1

0x9023,	// (0x00053e4e) control_pane_g6_ParamLimits

0x9023,	// (0x00053e4e) control_pane_g6

0x9030,	// (0x00053e5b) control_pane_g7_ParamLimits

0x9030,	// (0x00053e5b) control_pane_g7

0x903d,	// (0x00053e68) control_pane_g8_ParamLimits

0x903d,	// (0x00053e68) control_pane_g8

0xeab8,	// (0x000598e3) dt_sta_controll_pane_ParamLimits

0xeac5,	// (0x000598f0) dt_sta_indi_pane_ParamLimits

0xead6,	// (0x00059901) dt_sta_title_pane_ParamLimits

0x8016,	// (0x00052e41) aid_size_touch_scroll_bar_cale

0x4e9d,	// (0x0004fcc8) popup_discreet_window_ParamLimits

0x4e9d,	// (0x0004fcc8) popup_discreet_window

0x4f2b,	// (0x0004fd56) popup_sk_window

0xa277,	// (0x000550a2) bg_popup_sub_pane_cp28_ParamLimits

0xa277,	// (0x000550a2) bg_popup_sub_pane_cp28

0xebab,	// (0x000599d6) popup_discreet_window_g1_ParamLimits

0xebab,	// (0x000599d6) popup_discreet_window_g1

0xebcb,	// (0x000599f6) popup_discreet_window_t1_ParamLimits

0xebcb,	// (0x000599f6) popup_discreet_window_t1

0xebe9,	// (0x00059a14) popup_discreet_window_t2_ParamLimits

0xebe9,	// (0x00059a14) popup_discreet_window_t2

0x0002,

0xfecf,	// (0x0005acfa) popup_discreet_window_t_ParamLimits

0xfecf,	// (0x0005acfa) popup_discreet_window_t

0x7231,	// (0x0005205c) popup_sk_window_g1

0x723b,	// (0x00052066) popup_sk_window_g2

0x0001,

0xfed6,	// (0x0005ad01) popup_sk_window_g

0xec3b,	// (0x00059a66) popup_sk_window_t1

0xec49,	// (0x00059a74) popup_sk_window_t1_copy1

0xe7f4,	// (0x0005961f) cell_ai5_widget_pane_g2_ParamLimits

0xe949,	// (0x00059774) cell_ai5_widget_pane_t9_ParamLimits

0xe949,	// (0x00059774) cell_ai5_widget_pane_t9

0x7269,	// (0x00052094) main_fep_fshwr2_pane

0xec57,	// (0x00059a82) aid_fshwr2_btn_pane

0xec5f,	// (0x00059a8a) aid_fshwr2_syb_pane

0xec67,	// (0x00059a92) aid_fshwr2_txt_pane

0xec6f,	// (0x00059a9a) fshwr2_func_candi_pane

0xec79,	// (0x00059aa4) fshwr2_hwr_syb_pane

0xec83,	// (0x00059aae) fshwr2_icf_pane

0x7269,	// (0x00052094) fshwr2_icf_bg_pane

0xeca5,	// (0x00059ad0) fshwr2_icf_pane_t1_ParamLimits

0xeca5,	// (0x00059ad0) fshwr2_icf_pane_t1

0xc246,	// (0x00057071) fshwr2_func_candi_pane_g1

0xecbc,	// (0x00059ae7) fshwr2_func_candi_row_pane_ParamLimits

0xecbc,	// (0x00059ae7) fshwr2_func_candi_row_pane

0xeccd,	// (0x00059af8) cell_fshwr2_syb_pane_ParamLimits

0xeccd,	// (0x00059af8) cell_fshwr2_syb_pane

0xc4de,	// (0x00057309) fshwr2_hwr_syb_pane_g1_ParamLimits

0xc4de,	// (0x00057309) fshwr2_hwr_syb_pane_g1

0x7269,	// (0x00052094) bg_popup_call_pane_cp01

0xece7,	// (0x00059b12) fshwr2_func_candi_cell_pane_ParamLimits

0xece7,	// (0x00059b12) fshwr2_func_candi_cell_pane

0xed19,	// (0x00059b44) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xed19,	// (0x00059b44) fshwr2_func_candi_cell_bg_pane

0xed33,	// (0x00059b5e) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xed33,	// (0x00059b5e) fshwr2_func_candi_cell_pane_g1

0xed53,	// (0x00059b7e) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xed53,	// (0x00059b7e) fshwr2_func_candi_cell_pane_t1

0x7269,	// (0x00052094) bg_button_pane_cp08

0x8d48,	// (0x00053b73) cell_fshwr2_syb_bg_pane

0xed66,	// (0x00059b91) cell_fshwr2_syb_bg_pane_g1

0xed6e,	// (0x00059b99) cell_fshwr2_syb_bg_pane_t1

0x80de,	// (0x00052f09) main_tmo_pane

0xada1,	// (0x00055bcc) uni_indicator_pane_g1_ParamLimits

0xadb6,	// (0x00055be1) uni_indicator_pane_g2_ParamLimits

0xadcc,	// (0x00055bf7) uni_indicator_pane_g3_ParamLimits

0xade2,	// (0x00055c0d) uni_indicator_pane_g4_ParamLimits

0xade2,	// (0x00055c0d) uni_indicator_pane_g4

0xadf6,	// (0x00055c21) uni_indicator_pane_g5_ParamLimits

0xadf6,	// (0x00055c21) uni_indicator_pane_g5

0xae0a,	// (0x00055c35) uni_indicator_pane_g6_ParamLimits

0xae0a,	// (0x00055c35) uni_indicator_pane_g6

0xf95f,	// (0x0005a78a) uni_indicator_pane_g_ParamLimits

0xd752,	// (0x0005857d) popup_tmo_note_window_ParamLimits

0xd752,	// (0x0005857d) popup_tmo_note_window

0x7269,	// (0x00052094) fshwr2_bg_pane

0xed44,	// (0x00059b6f) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xed44,	// (0x00059b6f) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfedb,	// (0x0005ad06) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfedb,	// (0x0005ad06) fshwr2_func_candi_cell_pane_g

0xc246,	// (0x00057071) bg_popup_window_pane_cp01

0xed7d,	// (0x00059ba8) bg_popup_window_pane_g1_cp01

0xed86,	// (0x00059bb1) bg_popup_window_pane_cp22_ParamLimits

0xed86,	// (0x00059bb1) bg_popup_window_pane_cp22

0xed94,	// (0x00059bbf) listscroll_tmo_link_pane_ParamLimits

0xed94,	// (0x00059bbf) listscroll_tmo_link_pane

0xedd4,	// (0x00059bff) popup_tmo_note_window_g1_ParamLimits

0xedd4,	// (0x00059bff) popup_tmo_note_window_g1

0xede1,	// (0x00059c0c) tmo_note_info_pane_ParamLimits

0xede1,	// (0x00059c0c) tmo_note_info_pane

0xedfb,	// (0x00059c26) list_tmo_note_info_pane_g1_ParamLimits

0xedfb,	// (0x00059c26) list_tmo_note_info_pane_g1

0xee12,	// (0x00059c3d) list_tmo_note_info_pane_g2_ParamLimits

0xee12,	// (0x00059c3d) list_tmo_note_info_pane_g2

0x0001,

0xfee0,	// (0x0005ad0b) list_tmo_note_info_pane_g_ParamLimits

0xfee0,	// (0x0005ad0b) list_tmo_note_info_pane_g

0xee2e,	// (0x00059c59) list_tmo_note_info_text_pane_ParamLimits

0xee2e,	// (0x00059c59) list_tmo_note_info_text_pane

0xeeb3,	// (0x00059cde) list_tmo_link_pane

0xeec0,	// (0x00059ceb) scroll_pane_cp20

0xeecd,	// (0x00059cf8) list_single_tmo_link_pane_ParamLimits

0xeecd,	// (0x00059cf8) list_single_tmo_link_pane

0xeedd,	// (0x00059d08) list_single_tmo_link_pane_t1

0xeeeb,	// (0x00059d16) list_tmo_note_info_text_pane_t1_ParamLimits

0xeeeb,	// (0x00059d16) list_tmo_note_info_text_pane_t1

0x81a4,	// (0x00052fcf) aid_size_touch_scroll_bar_cp01_ParamLimits

0x81a4,	// (0x00052fcf) aid_size_touch_scroll_bar_cp01

0x56a6,	// (0x000504d1) aid_size_touch_slider_marker

0x4f13,	// (0x0004fd3e) popup_settings_window_ParamLimits

0x4f13,	// (0x0004fd3e) popup_settings_window

0x5dfd,	// (0x00050c28) popup_candi_list_indi_window

0x973b,	// (0x00054566) aid_touch_navi_pane_ParamLimits

0x6a01,	// (0x0005182c) rs_clock_indi_pane

0x6a0a,	// (0x00051835) sctrl_sk_bottom_pane_ParamLimits

0x6a1b,	// (0x00051846) sctrl_sk_top_pane_ParamLimits

0x6b1c,	// (0x00051947) popup_fep_tooltip_window

0xe7b8,	// (0x000595e3) aid_size_cell_widget_grid_ParamLimits

0xe7e8,	// (0x00059613) cell_ai5_widget_pane_g1_ParamLimits

0xe7e8,	// (0x00059613) cell_ai5_widget_pane_g1

0xe830,	// (0x0005965b) cell_ai5_widget_pane_g6_ParamLimits

0xe83e,	// (0x00059669) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe5e,	// (0x0005ac89) cell_ai5_widget_pane_g_ParamLimits

0xfe5e,	// (0x0005ac89) cell_ai5_widget_pane_g

0xe96d,	// (0x00059798) cell_ai5_widget_pane_t10_ParamLimits

0xe96d,	// (0x00059798) cell_ai5_widget_pane_t10

0xe97f,	// (0x000597aa) grid_ai5_widget_pane_ParamLimits

0xea20,	// (0x0005984b) cell_contacts_ai5_widget_pane_ParamLimits

0xea20,	// (0x0005984b) cell_contacts_ai5_widget_pane

0xebfe,	// (0x00059a29) popup_discreet_window_t3_ParamLimits

0xebfe,	// (0x00059a29) popup_discreet_window_t3

0xec8d,	// (0x00059ab8) popup_fshwr2_char_preview_window_ParamLimits

0xec8d,	// (0x00059ab8) popup_fshwr2_char_preview_window

0xee4c,	// (0x00059c77) tmo_note_info_pane_t1

0xee61,	// (0x00059c8c) tmo_note_info_pane_t2

0xee7a,	// (0x00059ca5) tmo_note_info_pane_t3

0xee8f,	// (0x00059cba) tmo_note_info_pane_t4

0xeea1,	// (0x00059ccc) tmo_note_info_pane_t5

0x0004,

0xfee5,	// (0x0005ad10) tmo_note_info_pane_t

0xeeb3,	// (0x00059cde) list_tmo_link_pane_ParamLimits

0xeec0,	// (0x00059ceb) scroll_pane_cp20_ParamLimits

0x7269,	// (0x00052094) bg_popup_fep_char_preview_window_cp01

0xef04,	// (0x00059d2f) popup_fshwr2_char_preview_window_t1

0xef12,	// (0x00059d3d) popup_candi_list_indi_window_g1

0xef1b,	// (0x00059d46) bg_cell_contacts_ai5_widget_pane

0xef27,	// (0x00059d52) cell_contacts_ai5_widget_pane_g1

0xef3b,	// (0x00059d66) cell_contacts_ai5_widget_pane_g2

0xef4a,	// (0x00059d75) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfef0,	// (0x0005ad1b) cell_contacts_ai5_widget_pane_g

0xef5d,	// (0x00059d88) cell_contacts_ai5_widget_pane_t1

0x80de,	// (0x00052f09) highlight_cell_shortcut_ai5_widget_pane_cp01

0xefd7,	// (0x00059e02) settings_container_pane

0x8d48,	// (0x00053b73) listscroll_set_pane_copy1

0xb9bd,	// (0x000567e8) scroll_pane_cp121_copy1

0xefe3,	// (0x00059e0e) set_content_pane_copy1

0xefeb,	// (0x00059e16) aid_height_set_list_copy1_ParamLimits

0xefeb,	// (0x00059e16) aid_height_set_list_copy1

0xb00a,	// (0x00055e35) aid_size_parent_copy1_ParamLimits

0xb00a,	// (0x00055e35) aid_size_parent_copy1

0xeff7,	// (0x00059e22) button_value_adjust_pane_cp6_copy1_ParamLimits

0xeff7,	// (0x00059e22) button_value_adjust_pane_cp6_copy1

0x90c6,	// (0x00053ef1) list_highlight_pane_cp2_copy1_ParamLimits

0x90c6,	// (0x00053ef1) list_highlight_pane_cp2_copy1

0xf00b,	// (0x00059e36) list_set_pane_copy1_ParamLimits

0xf00b,	// (0x00059e36) list_set_pane_copy1

0xef72,	// (0x00059d9d) main_pane_set_t1_copy1_ParamLimits

0xef72,	// (0x00059d9d) main_pane_set_t1_copy1

0xefac,	// (0x00059dd7) main_pane_set_t2_copy1_ParamLimits

0xefac,	// (0x00059dd7) main_pane_set_t2_copy1

0xf0d2,	// (0x00059efd) main_pane_set_t3_copy1

0xf0e0,	// (0x00059f0b) main_pane_set_t4_copy1

0xefcb,	// (0x00059df6) set_content_pane_g1_copy1_ParamLimits

0xefcb,	// (0x00059df6) set_content_pane_g1_copy1

0xf0ee,	// (0x00059f19) setting_code_pane_copy1

0xf0f8,	// (0x00059f23) setting_slider_graphic_pane_copy1

0xf0f8,	// (0x00059f23) setting_slider_pane_copy1

0xf102,	// (0x00059f2d) setting_text_pane_copy1

0xf10c,	// (0x00059f37) setting_volume_pane_copy1

0xf115,	// (0x00059f40) settings_code_pane_cp2_copy1

0xf11d,	// (0x00059f48) settings_code_pane_cp_copy1_ParamLimits

0xf11d,	// (0x00059f48) settings_code_pane_cp_copy1

0xf131,	// (0x00059f5c) volume_set_pane_copy1

0xf13d,	// (0x00059f68) volume_set_pane_g10_copy1

0xf149,	// (0x00059f74) volume_set_pane_g1_copy1

0xf153,	// (0x00059f7e) volume_set_pane_g2_copy1

0xf15d,	// (0x00059f88) volume_set_pane_g3_copy1

0xf167,	// (0x00059f92) volume_set_pane_g4_copy1

0xf171,	// (0x00059f9c) volume_set_pane_g5_copy1

0xf17b,	// (0x00059fa6) volume_set_pane_g6_copy1

0xf185,	// (0x00059fb0) volume_set_pane_g7_copy1

0xf18f,	// (0x00059fba) volume_set_pane_g8_copy1

0xf199,	// (0x00059fc4) volume_set_pane_g9_copy1

0x735d,	// (0x00052188) bg_set_opt_pane_cp_copy1_ParamLimits

0x735d,	// (0x00052188) bg_set_opt_pane_cp_copy1

0xf1a3,	// (0x00059fce) setting_slider_pane_t1_copy1_ParamLimits

0xf1a3,	// (0x00059fce) setting_slider_pane_t1_copy1

0xf1c1,	// (0x00059fec) setting_slider_pane_t2_copy1_ParamLimits

0xf1c1,	// (0x00059fec) setting_slider_pane_t2_copy1

0xf1db,	// (0x0005a006) setting_slider_pane_t3_copy1_ParamLimits

0xf1db,	// (0x0005a006) setting_slider_pane_t3_copy1

0xf1f3,	// (0x0005a01e) slider_set_pane_copy1_ParamLimits

0xf1f3,	// (0x0005a01e) slider_set_pane_copy1

0x8145,	// (0x00052f70) set_opt_bg_pane_g1_copy2

0x814d,	// (0x00052f78) set_opt_bg_pane_g2_copy2

0xf209,	// (0x0005a034) set_opt_bg_pane_g3_copy2

0x815d,	// (0x00052f88) set_opt_bg_pane_g4_copy2

0x8165,	// (0x00052f90) set_opt_bg_pane_g5_copy2

0x816d,	// (0x00052f98) set_opt_bg_pane_g6_copy2

0xf213,	// (0x0005a03e) set_opt_bg_pane_g7_copy2

0xf21d,	// (0x0005a048) set_opt_bg_pane_g8_copy2

0xf227,	// (0x0005a052) set_opt_bg_pane_g9_copy2

0xf231,	// (0x0005a05c) aid_size_touch_slider_mark_copy1_ParamLimits

0xf231,	// (0x0005a05c) aid_size_touch_slider_mark_copy1

0xf245,	// (0x0005a070) slider_set_pane_g1_copy1

0xf24e,	// (0x0005a079) slider_set_pane_g2_copy1

0xb818,	// (0x00056643) slider_set_pane_g3_copy1_ParamLimits

0xb818,	// (0x00056643) slider_set_pane_g3_copy1

0xb82c,	// (0x00056657) slider_set_pane_g4_copy1_ParamLimits

0xb82c,	// (0x00056657) slider_set_pane_g4_copy1

0xb844,	// (0x0005666f) slider_set_pane_g5_copy1_ParamLimits

0xb844,	// (0x0005666f) slider_set_pane_g5_copy1

0xb818,	// (0x00056643) slider_set_pane_g6_copy1_ParamLimits

0xb818,	// (0x00056643) slider_set_pane_g6_copy1

0xf256,	// (0x0005a081) slider_set_pane_g7_copy1_ParamLimits

0xf256,	// (0x0005a081) slider_set_pane_g7_copy1

0x727d,	// (0x000520a8) bg_set_opt_pane_cp2_copy1

0xf26c,	// (0x0005a097) setting_slider_graphic_pane_g1_copy1

0xf275,	// (0x0005a0a0) setting_slider_graphic_pane_t1_copy1

0xf285,	// (0x0005a0b0) setting_slider_graphic_pane_t2_copy1

0xf295,	// (0x0005a0c0) slider_set_pane_cp_copy1

0xf2a5,	// (0x0005a0d0) input_focus_pane_cp1_copy1

0xf2ae,	// (0x0005a0d9) list_set_text_pane_copy1

0xf2b6,	// (0x0005a0e1) setting_text_pane_g1_copy1

0x41fb,	// (0x0004f026) set_text_pane_t1_copy1

0xf2a5,	// (0x0005a0d0) input_focus_pane_cp2_copy1

0xf2b6,	// (0x0005a0e1) setting_code_pane_g1_copy1

0xf2bf,	// (0x0005a0ea) setting_code_pane_t1_copy1

0xf2cd,	// (0x0005a0f8) list_set_graphic_pane_copy1

0x727d,	// (0x000520a8) bg_set_opt_pane_cp4_copy1

0x8a42,	// (0x0005386d) list_set_graphic_pane_g1_copy1_ParamLimits

0x8a42,	// (0x0005386d) list_set_graphic_pane_g1_copy1

0xf2df,	// (0x0005a10a) list_set_graphic_pane_g2_copy1

0x8a5a,	// (0x00053885) list_set_graphic_pane_t1_copy1_ParamLimits

0x8a5a,	// (0x00053885) list_set_graphic_pane_t1_copy1

0xc246,	// (0x00057071) rs_clock_indi_pane_g1

0xf2e7,	// (0x0005a112) rs_clock_indi_pane_t1

0xf2f5,	// (0x0005a120) rs_indi_pane

0xf2fd,	// (0x0005a128) rs_indi_pane_g1

0xf306,	// (0x0005a131) rs_indi_pane_g2

0xf30f,	// (0x0005a13a) rs_indi_pane_g3

0x0002,

0xfef7,	// (0x0005ad22) rs_indi_pane_g

0x8d48,	// (0x00053b73) bg_popup_preview_window_pane_cp03

0xf318,	// (0x0005a143) popup_fep_tooltip_window_t1

0xcefa,	// (0x00057d25) popup_note2_window_g2_ParamLimits

0xcefa,	// (0x00057d25) popup_note2_window_g2

0x0001,

0xfc95,	// (0x0005aac0) popup_note2_window_g_ParamLimits

0xfc95,	// (0x0005aac0) popup_note2_window_g

0xd402,	// (0x0005822d) bg_popup_sub_pane_cp11_ParamLimits

0xd40f,	// (0x0005823a) cell_ai3_links_pane_g1_ParamLimits

0xd426,	// (0x00058251) cell_ai3_links_pane_t1

0x41fb,	// (0x0004f026) set_text_pane_t1_copy1_ParamLimits

0x8c55,	// (0x00053a80) cell_graphic_popup_pane_cp2_ParamLimits

0x8c55,	// (0x00053a80) cell_graphic_popup_pane_cp2

0xf326,	// (0x0005a151) cell_graphic_popup_pane_g1_cp2

0x7e29,	// (0x00052c54) cell_graphic_popup_pane_g2_cp2

0xf32e,	// (0x0005a159) cell_graphic_popup_pane_g3_cp2

0xf336,	// (0x0005a161) cell_graphic_popup_pane_t2_cp2

0x7e3a,	// (0x00052c65) grid_highlight_pane_cp3_cp2

0x8491,	// (0x000532bc) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x80de,	// (0x00052f09) main_tmo_pane_ParamLimits

0xd746,	// (0x00058571) popup_tmo_big_image_note_window

0xe7d8,	// (0x00059603) cell_ai5_widget_list_pane

0xe7e0,	// (0x0005960b) cell_ai5_widget_lrg_icon_pane

0xee4c,	// (0x00059c77) tmo_note_info_pane_t1_ParamLimits

0xee61,	// (0x00059c8c) tmo_note_info_pane_t2_ParamLimits

0xee7a,	// (0x00059ca5) tmo_note_info_pane_t3_ParamLimits

0xee8f,	// (0x00059cba) tmo_note_info_pane_t4_ParamLimits

0xeea1,	// (0x00059ccc) tmo_note_info_pane_t5_ParamLimits

0xfee5,	// (0x0005ad10) tmo_note_info_pane_t_ParamLimits

0xefd7,	// (0x00059e02) settings_container_pane_ParamLimits

0xf29d,	// (0x0005a0c8) indicator_popup_pane_cp5

0xf29d,	// (0x0005a0c8) indicator_popup_pane_cp6

0xf2cd,	// (0x0005a0f8) list_set_graphic_pane_copy1_ParamLimits

0x7269,	// (0x00052094) bg_popup_window_pane_cp23

0xf344,	// (0x0005a16f) popup_tmo_big_image_note_window_g1

0xf350,	// (0x0005a17b) popup_tmo_big_image_note_window_t1

0xf360,	// (0x0005a18b) popup_tmo_big_image_note_window_t2

0xf370,	// (0x0005a19b) popup_tmo_big_image_note_window_t3

0x0002,

0xfefe,	// (0x0005ad29) popup_tmo_big_image_note_window_t

0xf380,	// (0x0005a1ab) cell_ai5_widget_lrg_icon_pane_g1

0xf388,	// (0x0005a1b3) cell_ai5_widget_lrg_icon_pane_t1

0xf396,	// (0x0005a1c1) cell_ai5_widget_list_row_pane_ParamLimits

0xf396,	// (0x0005a1c1) cell_ai5_widget_list_row_pane

0xf3af,	// (0x0005a1da) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf3af,	// (0x0005a1da) cell_ai5_widget_list_row_pane_g1

0xf3bc,	// (0x0005a1e7) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf3bc,	// (0x0005a1e7) cell_ai5_widget_list_row_pane_t1

0xf3d4,	// (0x0005a1ff) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf3d4,	// (0x0005a1ff) cell_ai5_widget_list_row_pane_t2

0x0001,

0xff05,	// (0x0005ad30) cell_ai5_widget_list_row_pane_t_ParamLimits

0xff05,	// (0x0005ad30) cell_ai5_widget_list_row_pane_t

0x4dc0,	// (0x0004fbeb) main_fep_vtchi_ss_pane

0xf3e6,	// (0x0005a211) popup_fep_char_pre_window

0xf3ee,	// (0x0005a219) popup_fep_ituss_window

0xf3f9,	// (0x0005a224) popup_fep_vkbss_window

0xf404,	// (0x0005a22f) grid_vkbss_keypad_pane_ParamLimits

0xf404,	// (0x0005a22f) grid_vkbss_keypad_pane

0xf414,	// (0x0005a23f) ituss_keypad_pane

0xf41c,	// (0x0005a247) aid_vkbss_key_offset_ParamLimits

0xf41c,	// (0x0005a247) aid_vkbss_key_offset

0xf42b,	// (0x0005a256) cell_vkbss_key_pane_ParamLimits

0xf42b,	// (0x0005a256) cell_vkbss_key_pane

0xf441,	// (0x0005a26c) bg_cell_vkbss_key_g1_ParamLimits

0xf441,	// (0x0005a26c) bg_cell_vkbss_key_g1

0xf44d,	// (0x0005a278) cell_vkbss_key_3p_pane_ParamLimits

0xf44d,	// (0x0005a278) cell_vkbss_key_3p_pane

0xf467,	// (0x0005a292) cell_vkbss_key_g1_ParamLimits

0xf467,	// (0x0005a292) cell_vkbss_key_g1

0xf481,	// (0x0005a2ac) cell_vkbss_key_t1_ParamLimits

0xf481,	// (0x0005a2ac) cell_vkbss_key_t1

0xf4ac,	// (0x0005a2d7) cell_ituss_key_pane_ParamLimits

0xf4ac,	// (0x0005a2d7) cell_ituss_key_pane

0xf4bb,	// (0x0005a2e6) bg_cell_ituss_key_g1_ParamLimits

0xf4bb,	// (0x0005a2e6) bg_cell_ituss_key_g1

0xf4c7,	// (0x0005a2f2) cell_ituss_key_pane_g1_ParamLimits

0xf4c7,	// (0x0005a2f2) cell_ituss_key_pane_g1

0xf4d3,	// (0x0005a2fe) cell_ituss_key_pane_g2_ParamLimits

0xf4d3,	// (0x0005a2fe) cell_ituss_key_pane_g2

0x0001,

0xff0a,	// (0x0005ad35) cell_ituss_key_pane_g_ParamLimits

0xff0a,	// (0x0005ad35) cell_ituss_key_pane_g

0xf4e7,	// (0x0005a312) cell_ituss_key_t1_ParamLimits

0xf4e7,	// (0x0005a312) cell_ituss_key_t1

0xf505,	// (0x0005a330) cell_ituss_key_t2_ParamLimits

0xf505,	// (0x0005a330) cell_ituss_key_t2

0xf524,	// (0x0005a34f) cell_ituss_key_t3_ParamLimits

0xf524,	// (0x0005a34f) cell_ituss_key_t3

0xf543,	// (0x0005a36e) cell_ituss_key_t4_ParamLimits

0xf543,	// (0x0005a36e) cell_ituss_key_t4

0x0003,

0xff0f,	// (0x0005ad3a) cell_ituss_key_t_ParamLimits

0xff0f,	// (0x0005ad3a) cell_ituss_key_t

0xf562,	// (0x0005a38d) cell_vkbss_key_3p_pane_g1

0xf56a,	// (0x0005a395) cell_vkbss_key_3p_pane_g2

0xf572,	// (0x0005a39d) cell_vkbss_key_3p_pane_g3

0x0002,

0xff18,	// (0x0005ad43) cell_vkbss_key_3p_pane_g

0x7269,	// (0x00052094) bg_popup_fep_char_preview_window_cp02

0xf57a,	// (0x0005a3a5) popup_fep_char_pre_window_t1

0xe7ae,	// (0x000595d9) main_ai5_sk_pane

0xef1b,	// (0x00059d46) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xef27,	// (0x00059d52) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xef3b,	// (0x00059d66) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xef4a,	// (0x00059d75) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfef0,	// (0x0005ad1b) cell_contacts_ai5_widget_pane_g_ParamLimits

0xef5d,	// (0x00059d88) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x80de,	// (0x00052f09) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf589,	// (0x0005a3b4) main_ai5_sk_pane_g1
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

} // end of namespace AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Large
