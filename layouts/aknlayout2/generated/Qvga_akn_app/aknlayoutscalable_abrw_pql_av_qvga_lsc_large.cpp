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

#include "aknlayoutscalable_abrw_pql_av_qvga_lsc_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt[]; }

namespace AknLayoutScalable_Abrw_pql_av_qvga_lsc_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt + 0x0003a1a9 };

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
0x85bd,	// (0x00042766) Screen

0x85c7,	// (0x00042770) application_window_ParamLimits

0x85c7,	// (0x00042770) application_window

0x7b29,	// (0x00041cd2) screen_g1

0x85f5,	// (0x0004279e) area_bottom_pane_ParamLimits

0x85f5,	// (0x0004279e) area_bottom_pane

0x7b33,	// (0x00041cdc) area_top_pane_ParamLimits

0x7b33,	// (0x00041cdc) area_top_pane

0x4240,	// (0x0003e3e9) main_pane_ParamLimits

0x4240,	// (0x0003e3e9) main_pane

0x7bf1,	// (0x00041d9a) misc_graphics

0x9f3b,	// (0x000440e4) battery_pane_ParamLimits

0x9f3b,	// (0x000440e4) battery_pane

0xcd6c,	// (0x00046f15) bg_status_flat_pane_g8

0xcd74,	// (0x00046f1d) bg_status_flat_pane_g9

0xc4a3,	// (0x0004664c) context_pane_ParamLimits

0xc4a3,	// (0x0004664c) context_pane

0xa095,	// (0x0004423e) navi_pane_ParamLimits

0xa095,	// (0x0004423e) navi_pane

0xa10a,	// (0x000442b3) signal_pane_ParamLimits

0xa10a,	// (0x000442b3) signal_pane

0x0008,

0xf872,	// (0x00049a1b) bg_status_flat_pane_g

0xa196,	// (0x0004433f) status_pane_g1_ParamLimits

0xa196,	// (0x0004433f) status_pane_g1

0xa1a2,	// (0x0004434b) status_pane_g2_ParamLimits

0xa1a2,	// (0x0004434b) status_pane_g2

0xc509,	// (0x000466b2) status_pane_g3_ParamLimits

0xc509,	// (0x000466b2) status_pane_g3

0x0004,

0xf7a5,	// (0x0004994e) status_pane_g_ParamLimits

0xf7a5,	// (0x0004994e) status_pane_g

0xa1ae,	// (0x00044357) title_pane_ParamLimits

0xa1ae,	// (0x00044357) title_pane

0xa209,	// (0x000443b2) uni_indicator_pane_ParamLimits

0xa209,	// (0x000443b2) uni_indicator_pane

0xc3fa,	// (0x000465a3) bg_list_pane_ParamLimits

0xc3fa,	// (0x000465a3) bg_list_pane

0x13c6,	// (0x0003b56f) find_pane

0x991c,	// (0x00043ac5) listscroll_app_pane_ParamLimits

0x991c,	// (0x00043ac5) listscroll_app_pane

0xc41a,	// (0x000465c3) listscroll_form_pane

0x13de,	// (0x0003b587) listscroll_gen_pane_ParamLimits

0x13de,	// (0x0003b587) listscroll_gen_pane

0x4a37,	// (0x0003ebe0) listscroll_set_pane

0x992c,	// (0x00043ad5) main_idle_act_pane

0xc265,	// (0x0004640e) main_idle_trad_pane

0xc265,	// (0x0004640e) main_list_empty_pane

0xbafc,	// (0x00045ca5) main_midp_pane

0xc434,	// (0x000465dd) main_pane_g1_ParamLimits

0xc434,	// (0x000465dd) main_pane_g1

0x993f,	// (0x00043ae8) popup_ai_message_window_ParamLimits

0x993f,	// (0x00043ae8) popup_ai_message_window

0x99c3,	// (0x00043b6c) popup_fep_china_uni_window_ParamLimits

0x99c3,	// (0x00043b6c) popup_fep_china_uni_window

0x4b21,	// (0x0003ecca) popup_fep_japan_candidate_window_ParamLimits

0x4b21,	// (0x0003ecca) popup_fep_japan_candidate_window

0x4b3f,	// (0x0003ece8) popup_fep_japan_predictive_window_ParamLimits

0x4b3f,	// (0x0003ece8) popup_fep_japan_predictive_window

0x9a01,	// (0x00043baa) popup_find_window

0x9a1a,	// (0x00043bc3) popup_grid_graphic_window_ParamLimits

0x9a1a,	// (0x00043bc3) popup_grid_graphic_window

0x4b96,	// (0x0003ed3f) popup_large_graphic_colour_window

0x9a96,	// (0x00043c3f) popup_menu_window_ParamLimits

0x9a96,	// (0x00043c3f) popup_menu_window

0x9bf4,	// (0x00043d9d) popup_note_image_window

0x9bbc,	// (0x00043d65) popup_note_wait_window_ParamLimits

0x9bbc,	// (0x00043d65) popup_note_wait_window

0x9c0a,	// (0x00043db3) popup_note_window_ParamLimits

0x9c0a,	// (0x00043db3) popup_note_window

0x9c9e,	// (0x00043e47) popup_query_code_window_ParamLimits

0x9c9e,	// (0x00043e47) popup_query_code_window

0x4d53,	// (0x0003eefc) popup_query_data_code_window_ParamLimits

0x4d53,	// (0x0003eefc) popup_query_data_code_window

0x9cd6,	// (0x00043e7f) popup_query_data_window_ParamLimits

0x9cd6,	// (0x00043e7f) popup_query_data_window

0x9d4a,	// (0x00043ef3) popup_query_sat_info_window_ParamLimits

0x9d4a,	// (0x00043ef3) popup_query_sat_info_window

0x9dd7,	// (0x00043f80) popup_snote_single_graphic_window_ParamLimits

0x9dd7,	// (0x00043f80) popup_snote_single_graphic_window

0x9dd7,	// (0x00043f80) popup_snote_single_text_window_ParamLimits

0x9dd7,	// (0x00043f80) popup_snote_single_text_window

0x4dc2,	// (0x0003ef6b) popup_sub_window_general

0x4ec6,	// (0x0003f06f) popup_window_general_ParamLimits

0x4ec6,	// (0x0003f06f) popup_window_general

0xc442,	// (0x000465eb) power_save_pane

0x97c6,	// (0x0004396f) control_pane_g1_ParamLimits

0x97c6,	// (0x0004396f) control_pane_g1

0x48f4,	// (0x0003ea9d) control_pane_g2_ParamLimits

0x48f4,	// (0x0003ea9d) control_pane_g2

0xc3ec,	// (0x00046595) control_pane_g3_ParamLimits

0xc3ec,	// (0x00046595) control_pane_g3

0x0007,

0xf78d,	// (0x00049936) control_pane_g_ParamLimits

0xf78d,	// (0x00049936) control_pane_g

0x9822,	// (0x000439cb) control_pane_t1_ParamLimits

0x9822,	// (0x000439cb) control_pane_t1

0x987e,	// (0x00043a27) control_pane_t2_ParamLimits

0x987e,	// (0x00043a27) control_pane_t2

0x0002,

0xf79e,	// (0x00049947) control_pane_t_ParamLimits

0xf79e,	// (0x00049947) control_pane_t

0xc394,	// (0x0004653d) navi_navi_volume_pane_cp1

0xc39c,	// (0x00046545) status_small_icon_pane

0xc3a4,	// (0x0004654d) status_small_pane_g1_ParamLimits

0xc3a4,	// (0x0004654d) status_small_pane_g1

0x9745,	// (0x000438ee) status_small_pane_g2_ParamLimits

0x9745,	// (0x000438ee) status_small_pane_g2

0x9751,	// (0x000438fa) status_small_pane_g3_ParamLimits

0x9751,	// (0x000438fa) status_small_pane_g3

0x975d,	// (0x00043906) status_small_pane_g4_ParamLimits

0x975d,	// (0x00043906) status_small_pane_g4

0x9769,	// (0x00043912) status_small_pane_g5_ParamLimits

0x9769,	// (0x00043912) status_small_pane_g5

0xc3d8,	// (0x00046581) status_small_pane_g6_ParamLimits

0xc3d8,	// (0x00046581) status_small_pane_g6

0x0007,

0xf77c,	// (0x00049925) status_small_pane_g_ParamLimits

0xf77c,	// (0x00049925) status_small_pane_g

0x9798,	// (0x00043941) status_small_pane_t1

0x97b2,	// (0x0004395b) status_small_wait_pane_ParamLimits

0x97b2,	// (0x0004395b) status_small_wait_pane

0x95d7,	// (0x00043780) aid_levels_signal_ParamLimits

0x95d7,	// (0x00043780) aid_levels_signal

0x95eb,	// (0x00043794) signal_pane_g1_ParamLimits

0x95eb,	// (0x00043794) signal_pane_g1

0x9605,	// (0x000437ae) signal_pane_g2_ParamLimits

0x9605,	// (0x000437ae) signal_pane_g2

0x0003,

0xf70d,	// (0x000498b6) signal_pane_g_ParamLimits

0xf70d,	// (0x000498b6) signal_pane_g

0xbe0a,	// (0x00045fb3) context_pane_g1

0x878c,	// (0x00042935) title_pane_g1

0x87da,	// (0x00042983) title_pane_t1

0x8867,	// (0x00042a10) title_pane_t2

0x888d,	// (0x00042a36) title_pane_t3

0x0002,

0xf557,	// (0x00049700) title_pane_t

0xa22f,	// (0x000443d8) aid_levels_battery_ParamLimits

0xa22f,	// (0x000443d8) aid_levels_battery

0xa247,	// (0x000443f0) battery_pane_g1_ParamLimits

0xa247,	// (0x000443f0) battery_pane_g1

0xa262,	// (0x0004440b) battery_pane_g2_ParamLimits

0xa262,	// (0x0004440b) battery_pane_g2

0x0001,

0xf7b0,	// (0x00049959) battery_pane_g_ParamLimits

0xf7b0,	// (0x00049959) battery_pane_g

0xa56a,	// (0x00044713) uni_indicator_pane_g1

0xa580,	// (0x00044729) uni_indicator_pane_g2

0xa596,	// (0x0004473f) uni_indicator_pane_g3

0x0005,

0xf91a,	// (0x00049ac3) uni_indicator_pane_g

0x9277,	// (0x00043420) navi_icon_pane_ParamLimits

0x9277,	// (0x00043420) navi_icon_pane

0x7bf1,	// (0x00041d9a) navi_midp_pane

0x7bf1,	// (0x00041d9a) navi_navi_pane

0x9277,	// (0x00043420) navi_text_pane_ParamLimits

0x9277,	// (0x00043420) navi_text_pane

0x7b29,	// (0x00041cd2) status_small_wait_pane_g1

0x8dcc,	// (0x00042f75) status_small_wait_pane_g2

0x0001,

0xf915,	// (0x00049abe) status_small_wait_pane_g

0xa510,	// (0x000446b9) navi_navi_icon_text_pane

0xa518,	// (0x000446c1) navi_navi_pane_g1_ParamLimits

0xa518,	// (0x000446c1) navi_navi_pane_g1

0xa52a,	// (0x000446d3) navi_navi_pane_g2_ParamLimits

0xa52a,	// (0x000446d3) navi_navi_pane_g2

0x0001,

0xf8e3,	// (0x00049a8c) navi_navi_pane_g_ParamLimits

0xf8e3,	// (0x00049a8c) navi_navi_pane_g

0xa53c,	// (0x000446e5) navi_navi_tabs_pane

0xa510,	// (0x000446b9) navi_navi_text_pane

0xa510,	// (0x000446b9) navi_navi_volume_pane

0xd439,	// (0x000475e2) navi_text_pane_t1

0xd42d,	// (0x000475d6) navi_icon_pane_g1

0xd381,	// (0x0004752a) navi_navi_text_pane_t1

0x514d,	// (0x0003f2f6) navi_navi_volume_pane_g1

0xa507,	// (0x000446b0) volume_small_pane

0xa463,	// (0x0004460c) navi_navi_icon_text_pane_g1

0xa46b,	// (0x00044614) navi_navi_icon_text_pane_t1

0xcdb4,	// (0x00046f5d) navi_tabs_2_long_pane

0xcdb4,	// (0x00046f5d) navi_tabs_2_pane

0xcdb4,	// (0x00046f5d) navi_tabs_3_long_pane

0xcdb4,	// (0x00046f5d) navi_tabs_3_pane

0xcdb4,	// (0x00046f5d) navi_tabs_4_pane

0xa443,	// (0x000445ec) tabs_2_active_pane_ParamLimits

0xa443,	// (0x000445ec) tabs_2_active_pane

0xa453,	// (0x000445fc) tabs_2_passive_pane_ParamLimits

0xa453,	// (0x000445fc) tabs_2_passive_pane

0xa411,	// (0x000445ba) tabs_3_active_pane_ParamLimits

0xa411,	// (0x000445ba) tabs_3_active_pane

0xa421,	// (0x000445ca) tabs_3_passive_pane_ParamLimits

0xa421,	// (0x000445ca) tabs_3_passive_pane

0xa432,	// (0x000445db) tabs_3_passive_pane_cp_ParamLimits

0xa432,	// (0x000445db) tabs_3_passive_pane_cp

0xa3cd,	// (0x00044576) tabs_4_active_pane_ParamLimits

0xa3cd,	// (0x00044576) tabs_4_active_pane

0xa3de,	// (0x00044587) tabs_4_passive_pane_ParamLimits

0xa3de,	// (0x00044587) tabs_4_passive_pane

0xa3ef,	// (0x00044598) tabs_4_passive_pane_cp_ParamLimits

0xa3ef,	// (0x00044598) tabs_4_passive_pane_cp

0xa400,	// (0x000445a9) tabs_4_passive_pane_cp2_ParamLimits

0xa400,	// (0x000445a9) tabs_4_passive_pane_cp2

0xa3ad,	// (0x00044556) tabs_2_long_active_pane_ParamLimits

0xa3ad,	// (0x00044556) tabs_2_long_active_pane

0xa3bd,	// (0x00044566) tabs_2_long_passive_pane_ParamLimits

0xa3bd,	// (0x00044566) tabs_2_long_passive_pane

0xa376,	// (0x0004451f) tabs_3_long_active_pane_ParamLimits

0xa376,	// (0x0004451f) tabs_3_long_active_pane

0xa389,	// (0x00044532) tabs_3_long_passive_pane_ParamLimits

0xa389,	// (0x00044532) tabs_3_long_passive_pane

0xa39a,	// (0x00044543) tabs_3_long_passive_pane_cp_ParamLimits

0xa39a,	// (0x00044543) tabs_3_long_passive_pane_cp

0x5008,	// (0x0003f1b1) volume_small_pane_g1

0x5011,	// (0x0003f1ba) volume_small_pane_g2

0x501a,	// (0x0003f1c3) volume_small_pane_g3

0x5023,	// (0x0003f1cc) volume_small_pane_g4

0x502c,	// (0x0003f1d5) volume_small_pane_g5

0x5035,	// (0x0003f1de) volume_small_pane_g6

0x503e,	// (0x0003f1e7) volume_small_pane_g7

0x5047,	// (0x0003f1f0) volume_small_pane_g8

0x5050,	// (0x0003f1f9) volume_small_pane_g9

0x5059,	// (0x0003f202) volume_small_pane_g10

0x0009,

0xf8af,	// (0x00049a58) volume_small_pane_g

0x889f,	// (0x00042a48) bg_active_tab_pane_cp2_ParamLimits

0x889f,	// (0x00042a48) bg_active_tab_pane_cp2

0x88ad,	// (0x00042a56) tabs_3_active_pane_g1

0x88b5,	// (0x00042a5e) tabs_3_active_pane_t1

0x889f,	// (0x00042a48) bg_passive_tab_pane_cp2_ParamLimits

0x889f,	// (0x00042a48) bg_passive_tab_pane_cp2

0x88ad,	// (0x00042a56) tabs_3_passive_pane_g1

0x88b5,	// (0x00042a5e) tabs_3_passive_pane_t1

0x889f,	// (0x00042a48) bg_active_tab_pane_cp3_ParamLimits

0x889f,	// (0x00042a48) bg_active_tab_pane_cp3

0xd157,	// (0x00047300) tabs_4_active_pane_g1

0x88cb,	// (0x00042a74) tabs_4_active_pane_t1

0x889f,	// (0x00042a48) bg_passive_tab_pane_cp3_ParamLimits

0x889f,	// (0x00042a48) bg_passive_tab_pane_cp3

0xd157,	// (0x00047300) tabs_4_1_passive_pane_g1

0x88cb,	// (0x00042a74) tabs_4_1_passive_pane_t1

0xbafc,	// (0x00045ca5) list_highlight_pane_cp2

0xa651,	// (0x000447fa) list_set_pane_ParamLimits

0xa651,	// (0x000447fa) list_set_pane

0xa6df,	// (0x00044888) main_pane_set_t1_ParamLimits

0xa6df,	// (0x00044888) main_pane_set_t1

0xa6ff,	// (0x000448a8) main_pane_set_t2_ParamLimits

0xa6ff,	// (0x000448a8) main_pane_set_t2

0xa713,	// (0x000448bc) main_pane_set_t3_ParamLimits

0xa713,	// (0x000448bc) main_pane_set_t3

0xa725,	// (0x000448ce) main_pane_set_t4_ParamLimits

0xa725,	// (0x000448ce) main_pane_set_t4

0x0003,

0xf97f,	// (0x00049b28) main_pane_set_t_ParamLimits

0xf97f,	// (0x00049b28) main_pane_set_t

0xa737,	// (0x000448e0) setting_code_pane

0xa73f,	// (0x000448e8) setting_slider_graphic_pane

0xa73f,	// (0x000448e8) setting_slider_pane

0xa73f,	// (0x000448e8) setting_text_pane

0xa73f,	// (0x000448e8) setting_volume_pane

0x88e1,	// (0x00042a8a) volume_set_pane

0x88e9,	// (0x00042a92) bg_set_opt_pane_cp

0x4447,	// (0x0003e5f0) setting_slider_pane_t1

0x88f7,	// (0x00042aa0) setting_slider_pane_t2

0x8910,	// (0x00042ab9) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x00049707) setting_slider_pane_t

0x448d,	// (0x0003e636) slider_set_pane

0x7bf1,	// (0x00041d9a) bg_set_opt_pane_cp2

0x8927,	// (0x00042ad0) setting_slider_graphic_pane_g1

0x8930,	// (0x00042ad9) setting_slider_graphic_pane_t1

0x893f,	// (0x00042ae8) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0004970e) setting_slider_graphic_pane_t

0x894e,	// (0x00042af7) slider_set_pane_cp

0x7bf1,	// (0x00041d9a) input_focus_pane_cp1

0xd875,	// (0x00047a1e) list_set_text_pane

0x7b29,	// (0x00041cd2) setting_text_pane_g1

0x7bf1,	// (0x00041d9a) input_focus_pane_cp2

0x7b29,	// (0x00041cd2) setting_code_pane_g1

0x8956,	// (0x00042aff) setting_code_pane_t1

0x08c9,	// (0x0003aa72) set_text_pane_t1_ParamLimits

0x08c9,	// (0x0003aa72) set_text_pane_t1

0x9226,	// (0x000433cf) set_opt_bg_pane_g1

0x922e,	// (0x000433d7) set_opt_bg_pane_g2

0xa611,	// (0x000447ba) set_opt_bg_pane_g3

0x923e,	// (0x000433e7) set_opt_bg_pane_g4

0x9246,	// (0x000433ef) set_opt_bg_pane_g5

0x924e,	// (0x000433f7) set_opt_bg_pane_g6

0xa619,	// (0x000447c2) set_opt_bg_pane_g7

0xa621,	// (0x000447ca) set_opt_bg_pane_g8

0xa629,	// (0x000447d2) set_opt_bg_pane_g9

0x0008,

0xf96c,	// (0x00049b15) set_opt_bg_pane_g

0xd868,	// (0x00047a11) slider_set_pane_g1

0x51c2,	// (0x0003f36b) slider_set_pane_g2

0x0006,

0xf95d,	// (0x00049b06) slider_set_pane_g

0xa5ab,	// (0x00044754) volume_set_pane_g1

0xa5b3,	// (0x0004475c) volume_set_pane_g2

0xa5bb,	// (0x00044764) volume_set_pane_g3

0xa5c3,	// (0x0004476c) volume_set_pane_g4

0xa5cb,	// (0x00044774) volume_set_pane_g5

0xa5d3,	// (0x0004477c) volume_set_pane_g6

0xa5db,	// (0x00044784) volume_set_pane_g7

0xa5e3,	// (0x0004478c) volume_set_pane_g8

0xa5eb,	// (0x00044794) volume_set_pane_g9

0xa5f3,	// (0x0004479c) volume_set_pane_g10

0x0009,

0xf935,	// (0x00049ade) volume_set_pane_g

0x8964,	// (0x00042b0d) indicator_pane_ParamLimits

0x8964,	// (0x00042b0d) indicator_pane

0x898c,	// (0x00042b35) main_idle_pane_g2_ParamLimits

0x898c,	// (0x00042b35) main_idle_pane_g2

0x89bc,	// (0x00042b65) main_pane_idle_g1_ParamLimits

0x89bc,	// (0x00042b65) main_pane_idle_g1

0x89e1,	// (0x00042b8a) popup_clock_digital_analogue_window_ParamLimits

0x89e1,	// (0x00042b8a) popup_clock_digital_analogue_window

0x89f8,	// (0x00042ba1) soft_indicator_pane_ParamLimits

0x89f8,	// (0x00042ba1) soft_indicator_pane

0x8a12,	// (0x00042bbb) wallpaper_pane_ParamLimits

0x8a12,	// (0x00042bbb) wallpaper_pane

0x7b29,	// (0x00041cd2) wallpaper_pane_g1

0x8a2c,	// (0x00042bd5) indicator_pane_g1_ParamLimits

0x8a2c,	// (0x00042bd5) indicator_pane_g1

0xd96f,	// (0x00047b18) navi_navi_icon_text_pane_srt_g1

0x8a54,	// (0x00042bfd) soft_indicator_pane_t1

0x8a6e,	// (0x00042c17) aid_ps_area_pane

0x8a7f,	// (0x00042c28) aid_ps_clock_pane

0x8a8b,	// (0x00042c34) aid_ps_indicator_pane

0x8a97,	// (0x00042c40) indicator_ps_pane_ParamLimits

0x8a97,	// (0x00042c40) indicator_ps_pane

0x8aa6,	// (0x00042c4f) power_save_pane_g1_ParamLimits

0x8aa6,	// (0x00042c4f) power_save_pane_g1

0x8ab2,	// (0x00042c5b) power_save_pane_g2_ParamLimits

0x8ab2,	// (0x00042c5b) power_save_pane_g2

0x41b2,	// (0x0003e35b) aid_navinavi_width_pane

0x8a6e,	// (0x00042c17) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x00049713) power_save_pane_g_ParamLimits

0xf56a,	// (0x00049713) power_save_pane_g

0x8ac0,	// (0x00042c69) power_save_pane_t1_ParamLimits

0x8ac0,	// (0x00042c69) power_save_pane_t1

0x8a7f,	// (0x00042c28) aid_ps_clock_pane_ParamLimits

0x8a8b,	// (0x00042c34) aid_ps_indicator_pane_ParamLimits

0x8ad2,	// (0x00042c7b) power_save_pane_t4_ParamLimits

0x8ad2,	// (0x00042c7b) power_save_pane_t4

0x0001,

0xf56f,	// (0x00049718) power_save_pane_t_ParamLimits

0xf56f,	// (0x00049718) power_save_pane_t

0x8afc,	// (0x00042ca5) power_save_t3_ParamLimits

0x8afc,	// (0x00042ca5) power_save_t3

0x8ae7,	// (0x00042c90) power_save_t2_ParamLimits

0x8ae7,	// (0x00042c90) power_save_t2

0x8b11,	// (0x00042cba) indicator_ps_pane_g1

0x8b1a,	// (0x00042cc3) ai_gene_pane_ParamLimits

0x8b1a,	// (0x00042cc3) ai_gene_pane

0x8b31,	// (0x00042cda) ai_links_pane_ParamLimits

0x8b31,	// (0x00042cda) ai_links_pane

0x8b43,	// (0x00042cec) indicator_pane_cp1_ParamLimits

0x8b43,	// (0x00042cec) indicator_pane_cp1

0x8b52,	// (0x00042cfb) main_pane_idle_g1_cp_ParamLimits

0x8b52,	// (0x00042cfb) main_pane_idle_g1_cp

0x8b6a,	// (0x00042d13) popup_ai_links_title_window

0x8b73,	// (0x00042d1c) soft_indicator_pane_cp1_ParamLimits

0x8b73,	// (0x00042d1c) soft_indicator_pane_cp1

0xd6be,	// (0x00047867) ai_links_pane_g1

0xd6c7,	// (0x00047870) grid_ai_links_pane

0xa561,	// (0x0004470a) ai_gene_pane_1

0xd6ac,	// (0x00047855) ai_gene_pane_2

0xd6b5,	// (0x0004785e) list_highlight_pane_cp4

0xa545,	// (0x000446ee) cell_ai_link_pane_ParamLimits

0xa545,	// (0x000446ee) cell_ai_link_pane

0xd6a4,	// (0x0004784d) cell_ai_link_pane_g1

0x8dcc,	// (0x00042f75) cell_ai_link_pane_g2

0x0001,

0xf910,	// (0x00049ab9) cell_ai_link_pane_g

0x7bf1,	// (0x00041d9a) grid_highlight_cp2

0x7bf1,	// (0x00041d9a) bg_popup_sub_pane_cp1

0x8b95,	// (0x00042d3e) popup_ai_links_title_window_t1

0xd5f6,	// (0x0004779f) ai_gene_pane_1_g1_ParamLimits

0xd5f6,	// (0x0004779f) ai_gene_pane_1_g1

0xd602,	// (0x000477ab) ai_gene_pane_1_g2_ParamLimits

0xd602,	// (0x000477ab) ai_gene_pane_1_g2

0x0001,

0xf906,	// (0x00049aaf) ai_gene_pane_1_g_ParamLimits

0xf906,	// (0x00049aaf) ai_gene_pane_1_g

0xd60f,	// (0x000477b8) ai_gene_pane_1_t1_ParamLimits

0xd60f,	// (0x000477b8) ai_gene_pane_1_t1

0xd643,	// (0x000477ec) grid_ai_soft_ind_pane

0xd5e1,	// (0x0004778a) ai_gene_pane_2_t1_ParamLimits

0xd5e1,	// (0x0004778a) ai_gene_pane_2_t1

0x8ba4,	// (0x00042d4d) main_pane_empty_t1_ParamLimits

0x8ba4,	// (0x00042d4d) main_pane_empty_t1

0x8bc1,	// (0x00042d6a) main_pane_empty_t2_ParamLimits

0x8bc1,	// (0x00042d6a) main_pane_empty_t2

0x8bd9,	// (0x00042d82) main_pane_empty_t3_ParamLimits

0x8bd9,	// (0x00042d82) main_pane_empty_t3

0x8bec,	// (0x00042d95) main_pane_empty_t4_ParamLimits

0x8bec,	// (0x00042d95) main_pane_empty_t4

0x8bff,	// (0x00042da8) main_pane_empty_t5_ParamLimits

0x8bff,	// (0x00042da8) main_pane_empty_t5

0x0004,

0xf574,	// (0x0004971d) main_pane_empty_t_ParamLimits

0xf574,	// (0x0004971d) main_pane_empty_t

0x9277,	// (0x00043420) bg_popup_window_pane_ParamLimits

0x9277,	// (0x00043420) bg_popup_window_pane

0xd390,	// (0x00047539) find_popup_pane_cp2_ParamLimits

0xd390,	// (0x00047539) find_popup_pane_cp2

0xd39c,	// (0x00047545) heading_pane_ParamLimits

0xd39c,	// (0x00047545) heading_pane

0x7bf1,	// (0x00041d9a) bg_popup_sub_pane

0xa488,	// (0x00044631) bg_popup_window_pane_g1_ParamLimits

0xa488,	// (0x00044631) bg_popup_window_pane_g1

0xa497,	// (0x00044640) bg_popup_window_pane_g2_ParamLimits

0xa497,	// (0x00044640) bg_popup_window_pane_g2

0xa4a3,	// (0x0004464c) bg_popup_window_pane_g3_ParamLimits

0xa4a3,	// (0x0004464c) bg_popup_window_pane_g3

0xa4af,	// (0x00044658) bg_popup_window_pane_g4_ParamLimits

0xa4af,	// (0x00044658) bg_popup_window_pane_g4

0xa4be,	// (0x00044667) bg_popup_window_pane_g5_ParamLimits

0xa4be,	// (0x00044667) bg_popup_window_pane_g5

0xa4ce,	// (0x00044677) bg_popup_window_pane_g6_ParamLimits

0xa4ce,	// (0x00044677) bg_popup_window_pane_g6

0xa4da,	// (0x00044683) bg_popup_window_pane_g7_ParamLimits

0xa4da,	// (0x00044683) bg_popup_window_pane_g7

0xa4e9,	// (0x00044692) bg_popup_window_pane_g8_ParamLimits

0xa4e9,	// (0x00044692) bg_popup_window_pane_g8

0xa4f8,	// (0x000446a1) bg_popup_window_pane_g9_ParamLimits

0xa4f8,	// (0x000446a1) bg_popup_window_pane_g9

0xd375,	// (0x0004751e) bg_popup_window_pane_g10_ParamLimits

0xd375,	// (0x0004751e) bg_popup_window_pane_g10

0x0009,

0xf8ce,	// (0x00049a77) bg_popup_window_pane_g_ParamLimits

0xf8ce,	// (0x00049a77) bg_popup_window_pane_g

0xd32c,	// (0x000474d5) bg_popup_heading_pane_ParamLimits

0xd32c,	// (0x000474d5) bg_popup_heading_pane

0x524a,	// (0x0003f3f3) tabs_4_passive_pane_cp_srt_ParamLimits

0x524a,	// (0x0003f3f3) tabs_4_passive_pane_cp_srt

0x525c,	// (0x0003f405) tabs_4_passive_pane_srt_ParamLimits

0xd340,	// (0x000474e9) heading_pane_g2

0x525c,	// (0x0003f405) tabs_4_passive_pane_srt

0xc67d,	// (0x00046826) bg_passive_tab_pane_cp3_srt_ParamLimits

0xc67d,	// (0x00046826) bg_passive_tab_pane_cp3_srt

0xd348,	// (0x000474f1) heading_pane_t1_ParamLimits

0xd348,	// (0x000474f1) heading_pane_t1

0xd35f,	// (0x00047508) heading_pane_t2_ParamLimits

0xd35f,	// (0x00047508) heading_pane_t2

0x0001,

0xf8c9,	// (0x00049a72) heading_pane_t_ParamLimits

0xf8c9,	// (0x00049a72) heading_pane_t

0xcd34,	// (0x00046edd) bg_popup_heading_pane_g1

0xcdc5,	// (0x00046f6e) bg_popup_heading_pane_g2

0xcdcd,	// (0x00046f76) bg_popup_heading_pane_g3

0xcdd5,	// (0x00046f7e) bg_popup_heading_pane_g4

0xcddd,	// (0x00046f86) bg_popup_heading_pane_g5

0xcde5,	// (0x00046f8e) bg_popup_heading_pane_g6

0xcded,	// (0x00046f96) bg_popup_heading_pane_g7

0xcdf5,	// (0x00046f9e) bg_popup_heading_pane_g8

0xcdfd,	// (0x00046fa6) bg_popup_heading_pane_g9

0x0008,

0xf885,	// (0x00049a2e) bg_popup_heading_pane_g

0xc5f1,	// (0x0004679a) bg_popup_sub_pane_g1

0xc601,	// (0x000467aa) bg_popup_sub_pane_g2

0xc5f9,	// (0x000467a2) bg_popup_sub_pane_g3

0xc611,	// (0x000467ba) bg_popup_sub_pane_g4

0xc609,	// (0x000467b2) bg_popup_sub_pane_g5

0xc619,	// (0x000467c2) bg_popup_sub_pane_g6

0xc621,	// (0x000467ca) bg_popup_sub_pane_g7

0xc631,	// (0x000467da) bg_popup_sub_pane_g8

0xc629,	// (0x000467d2) bg_popup_sub_pane_g9

0x0008,

0xf85f,	// (0x00049a08) bg_popup_sub_pane_g

0x889f,	// (0x00042a48) bg_popup_window_pane_cp5_ParamLimits

0x889f,	// (0x00042a48) bg_popup_window_pane_cp5

0x8c20,	// (0x00042dc9) popup_note_window_g1_ParamLimits

0x8c20,	// (0x00042dc9) popup_note_window_g1

0x8c2c,	// (0x00042dd5) popup_note_window_t1_ParamLimits

0x8c2c,	// (0x00042dd5) popup_note_window_t1

0x8c42,	// (0x00042deb) popup_note_window_t2_ParamLimits

0x8c42,	// (0x00042deb) popup_note_window_t2

0x8c58,	// (0x00042e01) popup_note_window_t3_ParamLimits

0x8c58,	// (0x00042e01) popup_note_window_t3

0x8c6e,	// (0x00042e17) popup_note_window_t4_ParamLimits

0x8c6e,	// (0x00042e17) popup_note_window_t4

0x8c96,	// (0x00042e3f) popup_note_window_t5_ParamLimits

0x8c96,	// (0x00042e3f) popup_note_window_t5

0x0004,

0xf57f,	// (0x00049728) popup_note_window_t_ParamLimits

0xf57f,	// (0x00049728) popup_note_window_t

0x8ce0,	// (0x00042e89) bg_popup_window_pane_cp6_ParamLimits

0x8ce0,	// (0x00042e89) bg_popup_window_pane_cp6

0xccb0,	// (0x00046e59) popup_note_image_window_g1_ParamLimits

0xccb0,	// (0x00046e59) popup_note_image_window_g1

0xccbc,	// (0x00046e65) popup_note_image_window_g2_ParamLimits

0xccbc,	// (0x00046e65) popup_note_image_window_g2

0x0001,

0xf853,	// (0x000499fc) popup_note_image_window_g_ParamLimits

0xf853,	// (0x000499fc) popup_note_image_window_g

0xccd5,	// (0x00046e7e) popup_note_image_window_t1_ParamLimits

0xccd5,	// (0x00046e7e) popup_note_image_window_t1

0xccee,	// (0x00046e97) popup_note_image_window_t2_ParamLimits

0xccee,	// (0x00046e97) popup_note_image_window_t2

0xcd07,	// (0x00046eb0) popup_note_image_window_t3_ParamLimits

0xcd07,	// (0x00046eb0) popup_note_image_window_t3

0x0002,

0xf858,	// (0x00049a01) popup_note_image_window_t_ParamLimits

0xf858,	// (0x00049a01) popup_note_image_window_t

0xcb9b,	// (0x00046d44) bg_popup_window_pane_cp7_ParamLimits

0xcb9b,	// (0x00046d44) bg_popup_window_pane_cp7

0xcbcb,	// (0x00046d74) popup_note_wait_window_g1_ParamLimits

0xcbcb,	// (0x00046d74) popup_note_wait_window_g1

0xcbd7,	// (0x00046d80) popup_note_wait_window_g2_ParamLimits

0xcbd7,	// (0x00046d80) popup_note_wait_window_g2

0x0002,

0xf841,	// (0x000499ea) popup_note_wait_window_g_ParamLimits

0xf841,	// (0x000499ea) popup_note_wait_window_g

0xcbef,	// (0x00046d98) popup_note_wait_window_t1_ParamLimits

0xcbef,	// (0x00046d98) popup_note_wait_window_t1

0xcc16,	// (0x00046dbf) popup_note_wait_window_t2_ParamLimits

0xcc16,	// (0x00046dbf) popup_note_wait_window_t2

0xcc33,	// (0x00046ddc) popup_note_wait_window_t3_ParamLimits

0xcc33,	// (0x00046ddc) popup_note_wait_window_t3

0xcc46,	// (0x00046def) popup_note_wait_window_t4_ParamLimits

0xcc46,	// (0x00046def) popup_note_wait_window_t4

0x0004,

0xf848,	// (0x000499f1) popup_note_wait_window_t_ParamLimits

0xf848,	// (0x000499f1) popup_note_wait_window_t

0xcc6b,	// (0x00046e14) wait_bar_pane_ParamLimits

0xcc6b,	// (0x00046e14) wait_bar_pane

0x7bf1,	// (0x00041d9a) wait_anim_pane

0x7bf1,	// (0x00041d9a) wait_border_pane

0x7b29,	// (0x00041cd2) wait_anim_pane_g1

0x7b29,	// (0x00041cd2) wait_anim_pane_g2

0x0001,

0xf708,	// (0x000498b1) wait_anim_pane_g

0xcb4b,	// (0x00046cf4) wait_border_pane_g1

0xcb54,	// (0x00046cfd) wait_border_pane_g2

0xcb5d,	// (0x00046d06) wait_border_pane_g3

0x0002,

0xf83a,	// (0x000499e3) wait_border_pane_g

0xc9bb,	// (0x00046b64) bg_popup_window_pane_cp16_ParamLimits

0xc9bb,	// (0x00046b64) bg_popup_window_pane_cp16

0xcabb,	// (0x00046c64) indicator_popup_pane_cp4_ParamLimits

0xcabb,	// (0x00046c64) indicator_popup_pane_cp4

0xcacf,	// (0x00046c78) popup_query_data_window_t1_ParamLimits

0xcacf,	// (0x00046c78) popup_query_data_window_t1

0xcae1,	// (0x00046c8a) popup_query_data_window_t2_ParamLimits

0xcae1,	// (0x00046c8a) popup_query_data_window_t2

0xcafa,	// (0x00046ca3) popup_query_data_window_t3_ParamLimits

0xcafa,	// (0x00046ca3) popup_query_data_window_t3

0x0002,

0xf833,	// (0x000499dc) popup_query_data_window_t_ParamLimits

0xf833,	// (0x000499dc) popup_query_data_window_t

0xcb14,	// (0x00046cbd) query_popup_data_pane_ParamLimits

0xcb14,	// (0x00046cbd) query_popup_data_pane

0xcb28,	// (0x00046cd1) query_popup_data_pane_cp1_ParamLimits

0xcb28,	// (0x00046cd1) query_popup_data_pane_cp1

0xc9bb,	// (0x00046b64) bg_popup_window_pane_cp10_ParamLimits

0xc9bb,	// (0x00046b64) bg_popup_window_pane_cp10

0xc9ed,	// (0x00046b96) indicator_popup_pane_ParamLimits

0xc9ed,	// (0x00046b96) indicator_popup_pane

0xca0f,	// (0x00046bb8) popup_query_code_window_t1_ParamLimits

0xca0f,	// (0x00046bb8) popup_query_code_window_t1

0xca29,	// (0x00046bd2) popup_query_code_window_t2_ParamLimits

0xca29,	// (0x00046bd2) popup_query_code_window_t2

0xca72,	// (0x00046c1b) popup_query_code_window_t3_ParamLimits

0xca72,	// (0x00046c1b) popup_query_code_window_t3

0x0002,

0xf82c,	// (0x000499d5) popup_query_code_window_t_ParamLimits

0xf82c,	// (0x000499d5) popup_query_code_window_t

0xcaa1,	// (0x00046c4a) query_popup_pane_ParamLimits

0xcaa1,	// (0x00046c4a) query_popup_pane

0x8ce0,	// (0x00042e89) bg_popup_window_pane_cp15_ParamLimits

0x8ce0,	// (0x00042e89) bg_popup_window_pane_cp15

0x8cfe,	// (0x00042ea7) indicator_popup_pane_cp1_ParamLimits

0x8cfe,	// (0x00042ea7) indicator_popup_pane_cp1

0x8d11,	// (0x00042eba) indicator_popup_pane_cp2_ParamLimits

0x8d11,	// (0x00042eba) indicator_popup_pane_cp2

0x8d24,	// (0x00042ecd) popup_query_data_code_window_g1_ParamLimits

0x8d24,	// (0x00042ecd) popup_query_data_code_window_g1

0x8d37,	// (0x00042ee0) popup_query_data_code_window_t1_ParamLimits

0x8d37,	// (0x00042ee0) popup_query_data_code_window_t1

0x8d49,	// (0x00042ef2) popup_query_data_code_window_t2_ParamLimits

0x8d49,	// (0x00042ef2) popup_query_data_code_window_t2

0x8d5b,	// (0x00042f04) popup_query_data_code_window_t3_ParamLimits

0x8d5b,	// (0x00042f04) popup_query_data_code_window_t3

0x8d71,	// (0x00042f1a) popup_query_data_code_window_t4_ParamLimits

0x8d71,	// (0x00042f1a) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x00049733) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x00049733) popup_query_data_code_window_t

0x4f23,	// (0x0003f0cc) list_single_midp_graphic_pane_g3

0x8d89,	// (0x00042f32) query_popup_data_pane_cp2_ParamLimits

0x8d9c,	// (0x00042f45) query_popup_pane_cp2_ParamLimits

0x8d9c,	// (0x00042f45) query_popup_pane_cp2

0x7bf1,	// (0x00041d9a) bg_popup_window_pane_cp11

0xc9a7,	// (0x00046b50) heading_pane_cp5

0x8e80,	// (0x00043029) listscroll_popup_info_pane

0x7bf1,	// (0x00041d9a) input_focus_pane_cp3

0x8daf,	// (0x00042f58) query_popup_pane_t1

0x8dbd,	// (0x00042f66) list_popup_info_pane_ParamLimits

0x8dbd,	// (0x00042f66) list_popup_info_pane

0x8dcc,	// (0x00042f75) listscroll_popup_info_pane_g1

0x8dd4,	// (0x00042f7d) scroll_pane_cp7

0x8ddc,	// (0x00042f85) popup_info_list_pane_t1_ParamLimits

0x8ddc,	// (0x00042f85) popup_info_list_pane_t1

0x8df6,	// (0x00042f9f) popup_info_list_pane_t2_ParamLimits

0x8df6,	// (0x00042f9f) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0004973c) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0004973c) popup_info_list_pane_t

0x7bf1,	// (0x00041d9a) bg_popup_window_pane_cp12

0xd989,	// (0x00047b32) find_popup_pane

0x88e9,	// (0x00042a92) bg_popup_window_pane_cp3

0x8e10,	// (0x00042fb9) heading_pane_cp3

0x8e1c,	// (0x00042fc5) listscroll_popup_graphic_pane

0x7bf1,	// (0x00041d9a) bg_popup_window_pane_cp4

0x8e78,	// (0x00043021) heading_pane_cp4

0x8e80,	// (0x00043029) listscroll_popup_colour_pane

0x8e88,	// (0x00043031) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x8e88,	// (0x00043031) cell_large_graphic_colour_none_popup_pane

0x8e98,	// (0x00043041) grid_large_graphic_colour_popup_pane_ParamLimits

0x8e98,	// (0x00043041) grid_large_graphic_colour_popup_pane

0x8eb4,	// (0x0004305d) listscroll_popup_colour_pane_g1_ParamLimits

0x8eb4,	// (0x0004305d) listscroll_popup_colour_pane_g1

0x8ecb,	// (0x00043074) listscroll_popup_colour_pane_g2_ParamLimits

0x8ecb,	// (0x00043074) listscroll_popup_colour_pane_g2

0x8edf,	// (0x00043088) listscroll_popup_colour_pane_g3_ParamLimits

0x8edf,	// (0x00043088) listscroll_popup_colour_pane_g3

0x8eef,	// (0x00043098) listscroll_popup_colour_pane_g4_ParamLimits

0x8eef,	// (0x00043098) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x00049741) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x00049741) listscroll_popup_colour_pane_g

0x8efe,	// (0x000430a7) scroll_pane_cp6_ParamLimits

0x8efe,	// (0x000430a7) scroll_pane_cp6

0x8f10,	// (0x000430b9) cell_large_graphic_colour_popup_pane_ParamLimits

0x8f10,	// (0x000430b9) cell_large_graphic_colour_popup_pane

0x8f2f,	// (0x000430d8) cell_large_graphic_colour_none_popup_pane_t1

0x7bf1,	// (0x00041d9a) grid_highlight_pane_cp5

0x8f3e,	// (0x000430e7) cell_large_graphic_colour_popup_pane_g1

0x8f46,	// (0x000430ef) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0004974a) cell_large_graphic_colour_popup_pane_g

0x8f4e,	// (0x000430f7) cell_large_graphic_colour_popup_pane_g2_copy1

0x8f57,	// (0x00043100) grid_highlight_pane_cp4

0x8f5f,	// (0x00043108) bg_popup_window_pane_cp8_ParamLimits

0x8f5f,	// (0x00043108) bg_popup_window_pane_cp8

0x8f7a,	// (0x00043123) popup_snote_single_text_window_g1_ParamLimits

0x8f7a,	// (0x00043123) popup_snote_single_text_window_g1

0x8f8c,	// (0x00043135) popup_snote_single_text_window_t1_ParamLimits

0x8f8c,	// (0x00043135) popup_snote_single_text_window_t1

0x8f9f,	// (0x00043148) popup_snote_single_text_window_t2_ParamLimits

0x8f9f,	// (0x00043148) popup_snote_single_text_window_t2

0x8fb2,	// (0x0004315b) popup_snote_single_text_window_t3_ParamLimits

0x8fb2,	// (0x0004315b) popup_snote_single_text_window_t3

0x8feb,	// (0x00043194) popup_snote_single_text_window_t4_ParamLimits

0x8feb,	// (0x00043194) popup_snote_single_text_window_t4

0x901f,	// (0x000431c8) popup_snote_single_text_window_t5_ParamLimits

0x901f,	// (0x000431c8) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0004974f) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0004974f) popup_snote_single_text_window_t

0x904e,	// (0x000431f7) bg_popup_window_pane_cp9_ParamLimits

0x904e,	// (0x000431f7) bg_popup_window_pane_cp9

0x8f7a,	// (0x00043123) popup_snote_single_graphic_window_g1_ParamLimits

0x8f7a,	// (0x00043123) popup_snote_single_graphic_window_g1

0x905c,	// (0x00043205) popup_snote_single_graphic_window_g2_ParamLimits

0x905c,	// (0x00043205) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0004975a) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0004975a) popup_snote_single_graphic_window_g

0x9068,	// (0x00043211) popup_snote_single_graphic_window_t1_ParamLimits

0x9068,	// (0x00043211) popup_snote_single_graphic_window_t1

0x907b,	// (0x00043224) popup_snote_single_graphic_window_t2_ParamLimits

0x907b,	// (0x00043224) popup_snote_single_graphic_window_t2

0x8fb2,	// (0x0004315b) popup_snote_single_graphic_window_t3_ParamLimits

0x8fb2,	// (0x0004315b) popup_snote_single_graphic_window_t3

0x8feb,	// (0x00043194) popup_snote_single_graphic_window_t4_ParamLimits

0x8feb,	// (0x00043194) popup_snote_single_graphic_window_t4

0x901f,	// (0x000431c8) popup_snote_single_graphic_window_t5_ParamLimits

0x901f,	// (0x000431c8) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0004975f) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0004975f) popup_snote_single_graphic_window_t

0xa825,	// (0x000449ce) grid_graphic_popup_pane_ParamLimits

0xa825,	// (0x000449ce) grid_graphic_popup_pane

0xa848,	// (0x000449f1) listscroll_popup_graphic_pane_g1_ParamLimits

0xa848,	// (0x000449f1) listscroll_popup_graphic_pane_g1

0xa85c,	// (0x00044a05) listscroll_popup_graphic_pane_g2_ParamLimits

0xa85c,	// (0x00044a05) listscroll_popup_graphic_pane_g2

0x0001,

0xf9a9,	// (0x00049b52) listscroll_popup_graphic_pane_g_ParamLimits

0xf9a9,	// (0x00049b52) listscroll_popup_graphic_pane_g

0xd179,	// (0x00047322) scroll_pane_cp5

0xa7e0,	// (0x00044989) cell_graphic_popup_pane_ParamLimits

0xa7e0,	// (0x00044989) cell_graphic_popup_pane

0xd932,	// (0x00047adb) cell_graphic_popup_pane_g1

0xd93a,	// (0x00047ae3) cell_graphic_popup_pane_g2

0x8f4e,	// (0x000430f7) cell_graphic_popup_pane_g3

0x0002,

0xf9a2,	// (0x00049b4b) cell_graphic_popup_pane_g

0xd943,	// (0x00047aec) cell_graphic_popup_pane_t2

0x8f57,	// (0x00043100) grid_highlight_pane_cp3

0x90a0,	// (0x00043249) list_gen_pane_ParamLimits

0x90a0,	// (0x00043249) list_gen_pane

0x90d1,	// (0x0004327a) scroll_pane

0xa7b3,	// (0x0004495c) bg_list_pane_g1_ParamLimits

0xa7b3,	// (0x0004495c) bg_list_pane_g1

0xd8e9,	// (0x00047a92) bg_list_pane_g2_ParamLimits

0xd8e9,	// (0x00047a92) bg_list_pane_g2

0xd8fc,	// (0x00047aa5) bg_list_pane_g3_ParamLimits

0xd8fc,	// (0x00047aa5) bg_list_pane_g3

0xd90e,	// (0x00047ab7) bg_list_pane_g4_ParamLimits

0xd90e,	// (0x00047ab7) bg_list_pane_g4

0xa7ce,	// (0x00044977) bg_list_pane_g5_ParamLimits

0xa7ce,	// (0x00044977) bg_list_pane_g5

0x0004,

0xf997,	// (0x00049b40) bg_list_pane_g_ParamLimits

0xf997,	// (0x00049b40) bg_list_pane_g

0xa76c,	// (0x00044915) list_double2_graphic_large_graphic_pane_ParamLimits

0xa76c,	// (0x00044915) list_double2_graphic_large_graphic_pane

0xa76c,	// (0x00044915) list_double2_graphic_pane_ParamLimits

0xa76c,	// (0x00044915) list_double2_graphic_pane

0xa76c,	// (0x00044915) list_double2_large_graphic_pane_ParamLimits

0xa76c,	// (0x00044915) list_double2_large_graphic_pane

0xa76c,	// (0x00044915) list_double2_pane_ParamLimits

0xa76c,	// (0x00044915) list_double2_pane

0xa76c,	// (0x00044915) list_double_graphic_heading_pane_ParamLimits

0xa76c,	// (0x00044915) list_double_graphic_heading_pane

0xa76c,	// (0x00044915) list_double_graphic_pane_ParamLimits

0xa76c,	// (0x00044915) list_double_graphic_pane

0xa76c,	// (0x00044915) list_double_heading_pane_ParamLimits

0xa76c,	// (0x00044915) list_double_heading_pane

0xa76c,	// (0x00044915) list_double_large_graphic_pane_ParamLimits

0xa76c,	// (0x00044915) list_double_large_graphic_pane

0xa76c,	// (0x00044915) list_double_number_pane_ParamLimits

0xa76c,	// (0x00044915) list_double_number_pane

0xa76c,	// (0x00044915) list_double_pane_ParamLimits

0xa76c,	// (0x00044915) list_double_pane

0xa76c,	// (0x00044915) list_double_time_pane_ParamLimits

0xa76c,	// (0x00044915) list_double_time_pane

0xa76c,	// (0x00044915) list_setting_number_pane_ParamLimits

0xa76c,	// (0x00044915) list_setting_number_pane

0xa76c,	// (0x00044915) list_setting_pane_ParamLimits

0xa76c,	// (0x00044915) list_setting_pane

0x1b5b,	// (0x0003bd04) list_single_2graphic_pane_ParamLimits

0x1b5b,	// (0x0003bd04) list_single_2graphic_pane

0x1b5b,	// (0x0003bd04) list_single_graphic_heading_pane_ParamLimits

0x1b5b,	// (0x0003bd04) list_single_graphic_heading_pane

0x1b5b,	// (0x0003bd04) list_single_graphic_pane_ParamLimits

0x1b5b,	// (0x0003bd04) list_single_graphic_pane

0x1b5b,	// (0x0003bd04) list_single_heading_pane_ParamLimits

0x1b5b,	// (0x0003bd04) list_single_heading_pane

0xa7a1,	// (0x0004494a) list_single_large_graphic_pane_ParamLimits

0xa7a1,	// (0x0004494a) list_single_large_graphic_pane

0x1b5b,	// (0x0003bd04) list_single_number_heading_pane_ParamLimits

0x1b5b,	// (0x0003bd04) list_single_number_heading_pane

0x1b5b,	// (0x0003bd04) list_single_number_pane_ParamLimits

0x1b5b,	// (0x0003bd04) list_single_number_pane

0x1b5b,	// (0x0003bd04) list_single_pane_ParamLimits

0x1b5b,	// (0x0003bd04) list_single_pane

0x7bf1,	// (0x00041d9a) list_highlight_pane_cp1

0x9106,	// (0x000432af) list_single_pane_g1_ParamLimits

0x9106,	// (0x000432af) list_single_pane_g1

0x9112,	// (0x000432bb) list_single_pane_g2_ParamLimits

0x9112,	// (0x000432bb) list_single_pane_g2

0x0001,

0xf5d2,	// (0x0004977b) list_single_pane_g_ParamLimits

0xf5d2,	// (0x0004977b) list_single_pane_g

0x6ea2,	// (0x0004104b) list_single_pane_t1_ParamLimits

0x6ea2,	// (0x0004104b) list_single_pane_t1

0x9106,	// (0x000432af) list_single_number_pane_g1_ParamLimits

0x9106,	// (0x000432af) list_single_number_pane_g1

0x9112,	// (0x000432bb) list_single_number_pane_g2_ParamLimits

0x9112,	// (0x000432bb) list_single_number_pane_g2

0x0001,

0xf5d2,	// (0x0004977b) list_single_number_pane_g_ParamLimits

0xf5d2,	// (0x0004977b) list_single_number_pane_g

0x6f1f,	// (0x000410c8) list_single_number_pane_t1_ParamLimits

0x6f1f,	// (0x000410c8) list_single_number_pane_t1

0x0e83,	// (0x0003b02c) list_single_number_pane_t2_ParamLimits

0x0e83,	// (0x0003b02c) list_single_number_pane_t2

0x0001,

0xf958,	// (0x00049b01) list_single_number_pane_t_ParamLimits

0xf958,	// (0x00049b01) list_single_number_pane_t

0x6f47,	// (0x000410f0) list_single_graphic_pane_g1_ParamLimits

0x6f47,	// (0x000410f0) list_single_graphic_pane_g1

0x9106,	// (0x000432af) list_single_graphic_pane_g2_ParamLimits

0x9106,	// (0x000432af) list_single_graphic_pane_g2

0x9112,	// (0x000432bb) list_single_graphic_pane_g3_ParamLimits

0x9112,	// (0x000432bb) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0004976a) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0004976a) list_single_graphic_pane_g

0x6f1f,	// (0x000410c8) list_single_graphic_pane_t1_ParamLimits

0x6f1f,	// (0x000410c8) list_single_graphic_pane_t1

0x08e2,	// (0x0003aa8b) list_single_heading_pane_g1_ParamLimits

0x08e2,	// (0x0003aa8b) list_single_heading_pane_g1

0x9112,	// (0x000432bb) list_single_heading_pane_g2_ParamLimits

0x9112,	// (0x000432bb) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x00049771) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x00049771) list_single_heading_pane_g

0x08f5,	// (0x0003aa9e) list_single_heading_pane_t1_ParamLimits

0x08f5,	// (0x0003aa9e) list_single_heading_pane_t1

0x1210,	// (0x0003b3b9) list_single_heading_pane_t2_ParamLimits

0x1210,	// (0x0003b3b9) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x00049776) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x00049776) list_single_heading_pane_t

0x9106,	// (0x000432af) list_single_number_heading_pane_g1_ParamLimits

0x9106,	// (0x000432af) list_single_number_heading_pane_g1

0x9112,	// (0x000432bb) list_single_number_heading_pane_g2_ParamLimits

0x9112,	// (0x000432bb) list_single_number_heading_pane_g2

0x0001,

0xf5d2,	// (0x0004977b) list_single_number_heading_pane_g_ParamLimits

0xf5d2,	// (0x0004977b) list_single_number_heading_pane_g

0x090b,	// (0x0003aab4) list_single_number_heading_pane_t1_ParamLimits

0x090b,	// (0x0003aab4) list_single_number_heading_pane_t1

0x0921,	// (0x0003aaca) list_single_number_heading_pane_t2_ParamLimits

0x0921,	// (0x0003aaca) list_single_number_heading_pane_t2

0x76bd,	// (0x00041866) list_single_number_heading_pane_t3_ParamLimits

0x76bd,	// (0x00041866) list_single_number_heading_pane_t3

0x0002,

0xf5d7,	// (0x00049780) list_single_number_heading_pane_t_ParamLimits

0xf5d7,	// (0x00049780) list_single_number_heading_pane_t

0x0933,	// (0x0003aadc) list_single_graphic_heading_pane_g1_ParamLimits

0x0933,	// (0x0003aadc) list_single_graphic_heading_pane_g1

0x1222,	// (0x0003b3cb) list_single_graphic_heading_pane_g4_ParamLimits

0x1222,	// (0x0003b3cb) list_single_graphic_heading_pane_g4

0x9112,	// (0x000432bb) list_single_graphic_heading_pane_g5_ParamLimits

0x9112,	// (0x000432bb) list_single_graphic_heading_pane_g5

0x0002,

0xf5de,	// (0x00049787) list_single_graphic_heading_pane_g_ParamLimits

0xf5de,	// (0x00049787) list_single_graphic_heading_pane_g

0x090b,	// (0x0003aab4) list_single_graphic_heading_pane_t1_ParamLimits

0x090b,	// (0x0003aab4) list_single_graphic_heading_pane_t1

0x0949,	// (0x0003aaf2) list_single_graphic_heading_pane_t2_ParamLimits

0x0949,	// (0x0003aaf2) list_single_graphic_heading_pane_t2

0x0001,

0xf5e5,	// (0x0004978e) list_single_graphic_heading_pane_t_ParamLimits

0xf5e5,	// (0x0004978e) list_single_graphic_heading_pane_t

0x911e,	// (0x000432c7) list_single_large_graphic_pane_g1_ParamLimits

0x911e,	// (0x000432c7) list_single_large_graphic_pane_g1

0x912a,	// (0x000432d3) list_single_large_graphic_pane_g2_ParamLimits

0x912a,	// (0x000432d3) list_single_large_graphic_pane_g2

0x9136,	// (0x000432df) list_single_large_graphic_pane_g3_ParamLimits

0x9136,	// (0x000432df) list_single_large_graphic_pane_g3

0x0002,

0xf5ea,	// (0x00049793) list_single_large_graphic_pane_g_ParamLimits

0xf5ea,	// (0x00049793) list_single_large_graphic_pane_g

0xcb54,	// (0x00046cfd) wait_border_pane_g2_copy1

0x9142,	// (0x000432eb) list_single_large_graphic_pane_g4_cp2

0x6e8c,	// (0x00041035) list_single_large_graphic_pane_t1_ParamLimits

0x6e8c,	// (0x00041035) list_single_large_graphic_pane_t1

0x1233,	// (0x0003b3dc) list_double_pane_g1_ParamLimits

0x1233,	// (0x0003b3dc) list_double_pane_g1

0x123f,	// (0x0003b3e8) list_double_pane_g2_ParamLimits

0x123f,	// (0x0003b3e8) list_double_pane_g2

0x0001,

0xf5f1,	// (0x0004979a) list_double_pane_g_ParamLimits

0xf5f1,	// (0x0004979a) list_double_pane_g

0x0961,	// (0x0003ab0a) list_double_pane_t1_ParamLimits

0x0961,	// (0x0003ab0a) list_double_pane_t1

0x0977,	// (0x0003ab20) list_double_pane_t2_ParamLimits

0x0977,	// (0x0003ab20) list_double_pane_t2

0x0001,

0xf5f6,	// (0x0004979f) list_double_pane_t_ParamLimits

0xf5f6,	// (0x0004979f) list_double_pane_t

0x0989,	// (0x0003ab32) list_double2_pane_g1_ParamLimits

0x0989,	// (0x0003ab32) list_double2_pane_g1

0x099a,	// (0x0003ab43) list_double2_pane_g2_ParamLimits

0x099a,	// (0x0003ab43) list_double2_pane_g2

0x0001,

0xf5fb,	// (0x000497a4) list_double2_pane_g_ParamLimits

0xf5fb,	// (0x000497a4) list_double2_pane_g

0x09a6,	// (0x0003ab4f) list_double2_pane_t1_ParamLimits

0x09a6,	// (0x0003ab4f) list_double2_pane_t1

0x09bc,	// (0x0003ab65) list_double2_pane_t2_ParamLimits

0x09bc,	// (0x0003ab65) list_double2_pane_t2

0x0001,

0xf600,	// (0x000497a9) list_double2_pane_t_ParamLimits

0xf600,	// (0x000497a9) list_double2_pane_t

0x1233,	// (0x0003b3dc) list_double_number_pane_g1_ParamLimits

0x1233,	// (0x0003b3dc) list_double_number_pane_g1

0x123f,	// (0x0003b3e8) list_double_number_pane_g2_ParamLimits

0x123f,	// (0x0003b3e8) list_double_number_pane_g2

0x0001,

0xf5f1,	// (0x0004979a) list_double_number_pane_g_ParamLimits

0xf5f1,	// (0x0004979a) list_double_number_pane_g

0x09ce,	// (0x0003ab77) list_double_number_pane_t1_ParamLimits

0x09ce,	// (0x0003ab77) list_double_number_pane_t1

0x09e0,	// (0x0003ab89) list_double_number_pane_t2_ParamLimits

0x09e0,	// (0x0003ab89) list_double_number_pane_t2

0x09f6,	// (0x0003ab9f) list_double_number_pane_t3_ParamLimits

0x09f6,	// (0x0003ab9f) list_double_number_pane_t3

0x0002,

0xf605,	// (0x000497ae) list_double_number_pane_t_ParamLimits

0xf605,	// (0x000497ae) list_double_number_pane_t

0x7090,	// (0x00041239) list_double_graphic_pane_g1_ParamLimits

0x7090,	// (0x00041239) list_double_graphic_pane_g1

0x124b,	// (0x0003b3f4) list_double_graphic_pane_g2_ParamLimits

0x124b,	// (0x0003b3f4) list_double_graphic_pane_g2

0x125a,	// (0x0003b403) list_double_graphic_pane_g3_ParamLimits

0x125a,	// (0x0003b403) list_double_graphic_pane_g3

0x0003,

0xf60c,	// (0x000497b5) list_double_graphic_pane_g_ParamLimits

0xf60c,	// (0x000497b5) list_double_graphic_pane_g

0x0a14,	// (0x0003abbd) list_double_graphic_pane_t1_ParamLimits

0x0a14,	// (0x0003abbd) list_double_graphic_pane_t1

0x0a2a,	// (0x0003abd3) list_double_graphic_pane_t2_ParamLimits

0x0a2a,	// (0x0003abd3) list_double_graphic_pane_t2

0x0001,

0xf615,	// (0x000497be) list_double_graphic_pane_t_ParamLimits

0xf615,	// (0x000497be) list_double_graphic_pane_t

0x6dc9,	// (0x00040f72) list_double2_graphic_pane_g1_ParamLimits

0x6dc9,	// (0x00040f72) list_double2_graphic_pane_g1

0x914a,	// (0x000432f3) list_double2_graphic_pane_g2_ParamLimits

0x914a,	// (0x000432f3) list_double2_graphic_pane_g2

0x9156,	// (0x000432ff) list_double2_graphic_pane_g3_ParamLimits

0x9156,	// (0x000432ff) list_double2_graphic_pane_g3

0x0002,

0xf61a,	// (0x000497c3) list_double2_graphic_pane_g_ParamLimits

0xf61a,	// (0x000497c3) list_double2_graphic_pane_g

0x6dd5,	// (0x00040f7e) list_double2_graphic_pane_t1_ParamLimits

0x6dd5,	// (0x00040f7e) list_double2_graphic_pane_t1

0x0a3c,	// (0x0003abe5) list_double2_graphic_pane_t2_ParamLimits

0x0a3c,	// (0x0003abe5) list_double2_graphic_pane_t2

0x0001,

0xf621,	// (0x000497ca) list_double2_graphic_pane_t_ParamLimits

0xf621,	// (0x000497ca) list_double2_graphic_pane_t

0x0a4e,	// (0x0003abf7) list_double_large_graphic_pane_g1_ParamLimits

0x0a4e,	// (0x0003abf7) list_double_large_graphic_pane_g1

0x0a72,	// (0x0003ac1b) list_double_large_graphic_pane_g2_ParamLimits

0x0a72,	// (0x0003ac1b) list_double_large_graphic_pane_g2

0x123f,	// (0x0003b3e8) list_double_large_graphic_pane_g3_ParamLimits

0x123f,	// (0x0003b3e8) list_double_large_graphic_pane_g3

0x0a88,	// (0x0003ac31) list_double_large_graphic_pane_g4_ParamLimits

0x0a88,	// (0x0003ac31) list_double_large_graphic_pane_g4

0x0004,

0xf626,	// (0x000497cf) list_double_large_graphic_pane_g_ParamLimits

0xf626,	// (0x000497cf) list_double_large_graphic_pane_g

0x0a99,	// (0x0003ac42) list_double_large_graphic_pane_t1_ParamLimits

0x0a99,	// (0x0003ac42) list_double_large_graphic_pane_t1

0x0ab2,	// (0x0003ac5b) list_double_large_graphic_pane_t2_ParamLimits

0x0ab2,	// (0x0003ac5b) list_double_large_graphic_pane_t2

0x0001,

0xf631,	// (0x000497da) list_double_large_graphic_pane_t_ParamLimits

0xf631,	// (0x000497da) list_double_large_graphic_pane_t

0x1266,	// (0x0003b40f) list_double2_large_graphic_pane_g1_ParamLimits

0x1266,	// (0x0003b40f) list_double2_large_graphic_pane_g1

0x0ac4,	// (0x0003ac6d) list_double2_large_graphic_pane_g2_ParamLimits

0x0ac4,	// (0x0003ac6d) list_double2_large_graphic_pane_g2

0x9156,	// (0x000432ff) list_double2_large_graphic_pane_g3_ParamLimits

0x9156,	// (0x000432ff) list_double2_large_graphic_pane_g3

0x0002,

0xf636,	// (0x000497df) list_double2_large_graphic_pane_g_ParamLimits

0xf636,	// (0x000497df) list_double2_large_graphic_pane_g

0x6e26,	// (0x00040fcf) list_double2_large_graphic_pane_t1_ParamLimits

0x6e26,	// (0x00040fcf) list_double2_large_graphic_pane_t1

0x0ad5,	// (0x0003ac7e) list_double2_large_graphic_pane_t2_ParamLimits

0x0ad5,	// (0x0003ac7e) list_double2_large_graphic_pane_t2

0x0001,

0xf63d,	// (0x000497e6) list_double2_large_graphic_pane_t_ParamLimits

0xf63d,	// (0x000497e6) list_double2_large_graphic_pane_t

0x0ae7,	// (0x0003ac90) list_double_heading_pane_g1_ParamLimits

0x0ae7,	// (0x0003ac90) list_double_heading_pane_g1

0x1272,	// (0x0003b41b) list_double_heading_pane_g2_ParamLimits

0x1272,	// (0x0003b41b) list_double_heading_pane_g2

0x0001,

0xf642,	// (0x000497eb) list_double_heading_pane_g_ParamLimits

0xf642,	// (0x000497eb) list_double_heading_pane_g

0x0af8,	// (0x0003aca1) list_double_heading_pane_t1_ParamLimits

0x0af8,	// (0x0003aca1) list_double_heading_pane_t1

0x09bc,	// (0x0003ab65) list_double_heading_pane_t2_ParamLimits

0x09bc,	// (0x0003ab65) list_double_heading_pane_t2

0x0001,

0xf647,	// (0x000497f0) list_double_heading_pane_t_ParamLimits

0xf647,	// (0x000497f0) list_double_heading_pane_t

0x7090,	// (0x00041239) list_double_graphic_heading_pane_g1_ParamLimits

0x7090,	// (0x00041239) list_double_graphic_heading_pane_g1

0x0ae7,	// (0x0003ac90) list_double_graphic_heading_pane_g2_ParamLimits

0x0ae7,	// (0x0003ac90) list_double_graphic_heading_pane_g2

0x1272,	// (0x0003b41b) list_double_graphic_heading_pane_g3_ParamLimits

0x1272,	// (0x0003b41b) list_double_graphic_heading_pane_g3

0x0002,

0xf64c,	// (0x000497f5) list_double_graphic_heading_pane_g_ParamLimits

0xf64c,	// (0x000497f5) list_double_graphic_heading_pane_g

0x0b0e,	// (0x0003acb7) list_double_graphic_heading_pane_t1_ParamLimits

0x0b0e,	// (0x0003acb7) list_double_graphic_heading_pane_t1

0x0a3c,	// (0x0003abe5) list_double_graphic_heading_pane_t2_ParamLimits

0x0a3c,	// (0x0003abe5) list_double_graphic_heading_pane_t2

0x0001,

0xf653,	// (0x000497fc) list_double_graphic_heading_pane_t_ParamLimits

0xf653,	// (0x000497fc) list_double_graphic_heading_pane_t

0x0b24,	// (0x0003accd) list_double_time_pane_g1_ParamLimits

0x0b24,	// (0x0003accd) list_double_time_pane_g1

0x0b35,	// (0x0003acde) list_double_time_pane_g2_ParamLimits

0x0b35,	// (0x0003acde) list_double_time_pane_g2

0x0001,

0xf658,	// (0x00049801) list_double_time_pane_g_ParamLimits

0xf658,	// (0x00049801) list_double_time_pane_g

0x0b41,	// (0x0003acea) list_double_time_pane_t1_ParamLimits

0x0b41,	// (0x0003acea) list_double_time_pane_t1

0x0b57,	// (0x0003ad00) list_double_time_pane_t2_ParamLimits

0x0b57,	// (0x0003ad00) list_double_time_pane_t2

0x0b69,	// (0x0003ad12) list_double_time_pane_t3_ParamLimits

0x0b69,	// (0x0003ad12) list_double_time_pane_t3

0x0b7b,	// (0x0003ad24) list_double_time_pane_t4_ParamLimits

0x0b7b,	// (0x0003ad24) list_double_time_pane_t4

0x0003,

0xf65d,	// (0x00049806) list_double_time_pane_t_ParamLimits

0xf65d,	// (0x00049806) list_double_time_pane_t

0x9177,	// (0x00043320) list_setting_pane_g1_ParamLimits

0x9177,	// (0x00043320) list_setting_pane_g1

0x70c1,	// (0x0004126a) list_setting_pane_g2_ParamLimits

0x70c1,	// (0x0004126a) list_setting_pane_g2

0x0001,

0xf666,	// (0x0004980f) list_setting_pane_g_ParamLimits

0xf666,	// (0x0004980f) list_setting_pane_g

0x0b8d,	// (0x0003ad36) list_setting_pane_t1_ParamLimits

0x0b8d,	// (0x0003ad36) list_setting_pane_t1

0x0ba7,	// (0x0003ad50) list_setting_pane_t2_ParamLimits

0x0ba7,	// (0x0003ad50) list_setting_pane_t2

0x0002,

0xf66b,	// (0x00049814) list_setting_pane_t_ParamLimits

0xf66b,	// (0x00049814) list_setting_pane_t

0x0be4,	// (0x0003ad8d) set_value_pane_cp_ParamLimits

0x0be4,	// (0x0003ad8d) set_value_pane_cp

0x0bf0,	// (0x0003ad99) list_setting_number_pane_g1_ParamLimits

0x0bf0,	// (0x0003ad99) list_setting_number_pane_g1

0x0bfc,	// (0x0003ada5) list_setting_number_pane_g2_ParamLimits

0x0bfc,	// (0x0003ada5) list_setting_number_pane_g2

0x0001,

0xf672,	// (0x0004981b) list_setting_number_pane_g_ParamLimits

0xf672,	// (0x0004981b) list_setting_number_pane_g

0x0c08,	// (0x0003adb1) list_setting_number_pane_t1_ParamLimits

0x0c08,	// (0x0003adb1) list_setting_number_pane_t1

0x0c21,	// (0x0003adca) list_setting_number_pane_t2_ParamLimits

0x0c21,	// (0x0003adca) list_setting_number_pane_t2

0x0c3b,	// (0x0003ade4) list_setting_number_pane_t3_ParamLimits

0x0c3b,	// (0x0003ade4) list_setting_number_pane_t3

0x0003,

0xf677,	// (0x00049820) list_setting_number_pane_t_ParamLimits

0xf677,	// (0x00049820) list_setting_number_pane_t

0x0be4,	// (0x0003ad8d) set_value_pane_ParamLimits

0x0be4,	// (0x0003ad8d) set_value_pane

0x9183,	// (0x0004332c) bg_set_opt_pane_ParamLimits

0x9183,	// (0x0004332c) bg_set_opt_pane

0x7212,	// (0x000413bb) set_value_pane_t1

0x91a4,	// (0x0004334d) slider_set_pane_cp3

0x91ad,	// (0x00043356) volume_small_pane_cp

0x91b6,	// (0x0004335f) list_form_gen_pane

0x90f5,	// (0x0004329e) scroll_pane_cp8

0x0c7e,	// (0x0003ae27) form_field_data_pane_ParamLimits

0x0c7e,	// (0x0003ae27) form_field_data_pane

0x0c95,	// (0x0003ae3e) form_field_data_wide_pane_ParamLimits

0x0c95,	// (0x0003ae3e) form_field_data_wide_pane

0x0cb5,	// (0x0003ae5e) form_field_popup_pane_ParamLimits

0x0cb5,	// (0x0003ae5e) form_field_popup_pane

0x0ccd,	// (0x0003ae76) form_field_popup_wide_pane_ParamLimits

0x0ccd,	// (0x0003ae76) form_field_popup_wide_pane

0x729e,	// (0x00041447) form_field_slider_pane_ParamLimits

0x729e,	// (0x00041447) form_field_slider_pane

0x72b1,	// (0x0004145a) form_field_slider_wide_pane_ParamLimits

0x72b1,	// (0x0004145a) form_field_slider_wide_pane

0x91bf,	// (0x00043368) data_form_pane

0x0cee,	// (0x0003ae97) form_field_data_pane_t1

0x91cb,	// (0x00043374) input_focus_pane

0x91d9,	// (0x00043382) data_form_wide_pane

0x72f0,	// (0x00041499) form_field_data_wide_pane_t1

0x8f6c,	// (0x00043115) input_focus_pane_cp6

0x0d06,	// (0x0003aeaf) form_field_popup_pane_t1

0x91cb,	// (0x00043374) input_focus_pane_cp7

0x91bf,	// (0x00043368) list_form_pane

0x7332,	// (0x000414db) form_field_popup_wide_pane_t1

0x91cb,	// (0x00043374) input_focus_pane_cp8

0x9205,	// (0x000433ae) list_form_wide_pane

0x0d26,	// (0x0003aecf) form_field_slider_pane_t1_ParamLimits

0x0d26,	// (0x0003aecf) form_field_slider_pane_t1

0x0d3c,	// (0x0003aee5) form_field_slider_pane_t2_ParamLimits

0x0d3c,	// (0x0003aee5) form_field_slider_pane_t2

0x0001,

0xf687,	// (0x00049830) form_field_slider_pane_t_ParamLimits

0xf687,	// (0x00049830) form_field_slider_pane_t

0x889f,	// (0x00042a48) input_focus_pane_cp9_ParamLimits

0x889f,	// (0x00042a48) input_focus_pane_cp9

0x0d51,	// (0x0003aefa) slider_cont_pane_ParamLimits

0x0d51,	// (0x0003aefa) slider_cont_pane

0x9214,	// (0x000433bd) form_field_slider_wide_pane_t1_ParamLimits

0x9214,	// (0x000433bd) form_field_slider_wide_pane_t1

0x738e,	// (0x00041537) form_field_slider_wide_pane_t2_ParamLimits

0x738e,	// (0x00041537) form_field_slider_wide_pane_t2

0x0001,

0xf68c,	// (0x00049835) form_field_slider_wide_pane_t_ParamLimits

0xf68c,	// (0x00049835) form_field_slider_wide_pane_t

0x889f,	// (0x00042a48) input_focus_pane_cp10_ParamLimits

0x889f,	// (0x00042a48) input_focus_pane_cp10

0x0d65,	// (0x0003af0e) slider_cont_pane_cp1_ParamLimits

0x0d65,	// (0x0003af0e) slider_cont_pane_cp1

0x0d7b,	// (0x0003af24) slider_form_pane_cp

0x9226,	// (0x000433cf) input_focus_pane_g1

0x922e,	// (0x000433d7) input_focus_pane_g2

0x9236,	// (0x000433df) input_focus_pane_g3

0x923e,	// (0x000433e7) input_focus_pane_g4

0x9246,	// (0x000433ef) input_focus_pane_g5

0x924e,	// (0x000433f7) input_focus_pane_g6

0x9256,	// (0x000433ff) input_focus_pane_g7

0x925e,	// (0x00043407) input_focus_pane_g8

0x9266,	// (0x0004340f) input_focus_pane_g9

0x7b29,	// (0x00041cd2) input_focus_pane_g10

0x0009,

0xf691,	// (0x0004983a) input_focus_pane_g

0xcb5d,	// (0x00046d06) wait_border_pane_g3_copy1

0x0d83,	// (0x0003af2c) data_form_pane_t1

0x7b29,	// (0x00041cd2) wait_anim_pane_g1_copy1

0x0e95,	// (0x0003b03e) data_form_wide_pane_t1

0x0d9b,	// (0x0003af44) list_form_graphic_pane_cp_ParamLimits

0x0d9b,	// (0x0003af44) list_form_graphic_pane_cp

0xd88f,	// (0x00047a38) slider_form_pane_g1

0xd898,	// (0x00047a41) slider_form_pane_g2

0x0006,

0xf988,	// (0x00049b31) slider_form_pane_g

0x73d8,	// (0x00041581) list_form_graphic_pane_ParamLimits

0x73d8,	// (0x00041581) list_form_graphic_pane

0x7402,	// (0x000415ab) list_form_graphic_pane_g1

0x740a,	// (0x000415b3) list_form_graphic_pane_t1_ParamLimits

0x740a,	// (0x000415b3) list_form_graphic_pane_t1

0x88e9,	// (0x00042a92) list_highlight_pane_cp5_ParamLimits

0x88e9,	// (0x00042a92) list_highlight_pane_cp5

0x0dae,	// (0x0003af57) find_pane_g1

0x926e,	// (0x00043417) input_find_pane

0x0db9,	// (0x0003af62) input_find_pane_g1_ParamLimits

0x0db9,	// (0x0003af62) input_find_pane_g1

0x0dc5,	// (0x0003af6e) input_find_pane_t1_ParamLimits

0x0dc5,	// (0x0003af6e) input_find_pane_t1

0x0dda,	// (0x0003af83) input_find_pane_t2_ParamLimits

0x0dda,	// (0x0003af83) input_find_pane_t2

0x0001,

0xf6a6,	// (0x0004984f) input_find_pane_t_ParamLimits

0xf6a6,	// (0x0004984f) input_find_pane_t

0x9277,	// (0x00043420) input_focus_pane_cp5_ParamLimits

0x9277,	// (0x00043420) input_focus_pane_cp5

0x889f,	// (0x00042a48) bg_popup_window_pane_cp2_ParamLimits

0x889f,	// (0x00042a48) bg_popup_window_pane_cp2

0x9291,	// (0x0004343a) listscroll_menu_pane_ParamLimits

0x9291,	// (0x0004343a) listscroll_menu_pane

0x929d,	// (0x00043446) popup_submenu_window_ParamLimits

0x929d,	// (0x00043446) popup_submenu_window

0x92c1,	// (0x0004346a) find_popup_pane_g1

0x92c9,	// (0x00043472) input_popup_find_pane_cp

0x9277,	// (0x00043420) input_focus_pane_cp4_ParamLimits

0x9277,	// (0x00043420) input_focus_pane_cp4

0x92df,	// (0x00043488) input_popup_find_pane_t1_ParamLimits

0x92df,	// (0x00043488) input_popup_find_pane_t1

0x7bf1,	// (0x00041d9a) bg_popup_sub_pane_cp

0x930d,	// (0x000434b6) listscroll_popup_sub_pane

0x9315,	// (0x000434be) list_submenu_pane_ParamLimits

0x9315,	// (0x000434be) list_submenu_pane

0x9326,	// (0x000434cf) scroll_pane_cp4

0x932e,	// (0x000434d7) list_single_popup_submenu_pane_ParamLimits

0x932e,	// (0x000434d7) list_single_popup_submenu_pane

0x9340,	// (0x000434e9) list_single_popup_submenu_pane_g1

0x9348,	// (0x000434f1) list_single_popup_submenu_pane_t1_ParamLimits

0x9348,	// (0x000434f1) list_single_popup_submenu_pane_t1

0x889f,	// (0x00042a48) bg_active_tab_pane_cp1_ParamLimits

0x889f,	// (0x00042a48) bg_active_tab_pane_cp1

0xd15f,	// (0x00047308) tabs_2_active_pane_g1

0x935d,	// (0x00043506) tabs_2_active_pane_t1

0x889f,	// (0x00042a48) bg_passive_tab_pane_cp1_ParamLimits

0x889f,	// (0x00042a48) bg_passive_tab_pane_cp1

0xd15f,	// (0x00047308) tabs_2_passive_pane_g1

0x935d,	// (0x00043506) tabs_2_passive_pane_t1

0x88e9,	// (0x00042a92) bg_active_tab_pane_cp4

0x9373,	// (0x0004351c) tabs_2_long_active_pane_t1

0xbafc,	// (0x00045ca5) bg_passive_tab_pane_cp4

0x4f2b,	// (0x0003f0d4) list_single_midp_graphic_pane_g4_ParamLimits

0x88e9,	// (0x00042a92) bg_active_tab_pane_cp5

0x938a,	// (0x00043533) tabs_3_long_active_pane_t1

0xbafc,	// (0x00045ca5) bg_passive_tab_pane_cp5

0x4f2b,	// (0x0003f0d4) list_single_midp_graphic_pane_g4

0x88e9,	// (0x00042a92) bg_popup_window_pane_cp13_ParamLimits

0x88e9,	// (0x00042a92) bg_popup_window_pane_cp13

0x93a9,	// (0x00043552) listscroll_popup_fast_pane_ParamLimits

0x93a9,	// (0x00043552) listscroll_popup_fast_pane

0x93b8,	// (0x00043561) grid_popup_fast_pane_ParamLimits

0x93b8,	// (0x00043561) grid_popup_fast_pane

0x93ca,	// (0x00043573) scroll_pane_cp9_ParamLimits

0x93ca,	// (0x00043573) scroll_pane_cp9

0xeba7,	// (0x00048d50) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xeba7,	// (0x00048d50) list_single_graphic_hl_pane_t1_cp2

0x93ee,	// (0x00043597) input_focus_pane_cp20_ParamLimits

0x93ee,	// (0x00043597) input_focus_pane_cp20

0x93fc,	// (0x000435a5) query_popup_data_pane_t1_ParamLimits

0x93fc,	// (0x000435a5) query_popup_data_pane_t1

0x940f,	// (0x000435b8) query_popup_data_pane_t2_ParamLimits

0x940f,	// (0x000435b8) query_popup_data_pane_t2

0xbb08,	// (0x00045cb1) query_popup_data_pane_t3_ParamLimits

0xbb08,	// (0x00045cb1) query_popup_data_pane_t3

0xbb49,	// (0x00045cf2) query_popup_data_pane_t4_ParamLimits

0xbb49,	// (0x00045cf2) query_popup_data_pane_t4

0xbb85,	// (0x00045d2e) query_popup_data_pane_t5_ParamLimits

0xbb85,	// (0x00045d2e) query_popup_data_pane_t5

0x0004,

0xf6ab,	// (0x00049854) query_popup_data_pane_t_ParamLimits

0xf6ab,	// (0x00049854) query_popup_data_pane_t

0x9226,	// (0x000433cf) bg_set_opt_pane_g1

0x922e,	// (0x000433d7) bg_set_opt_pane_g2

0x9236,	// (0x000433df) bg_set_opt_pane_g3

0x923e,	// (0x000433e7) bg_set_opt_pane_g4

0x9246,	// (0x000433ef) bg_set_opt_pane_g5

0x924e,	// (0x000433f7) bg_set_opt_pane_g6

0x9256,	// (0x000433ff) bg_set_opt_pane_g7

0x925e,	// (0x00043407) bg_set_opt_pane_g8

0x9266,	// (0x0004340f) bg_set_opt_pane_g9

0x0008,

0xf6b6,	// (0x0004985f) bg_set_opt_pane_g

0x46fd,	// (0x0003e8a6) control_top_pane_stacon_ParamLimits

0x46fd,	// (0x0003e8a6) control_top_pane_stacon

0x4750,	// (0x0003e8f9) signal_pane_stacon_ParamLimits

0x4750,	// (0x0003e8f9) signal_pane_stacon

0xbf78,	// (0x00046121) stacon_top_pane_g1_ParamLimits

0xbf78,	// (0x00046121) stacon_top_pane_g1

0x4775,	// (0x0003e91e) title_pane_stacon_ParamLimits

0x4775,	// (0x0003e91e) title_pane_stacon

0x4797,	// (0x0003e940) uni_indicator_pane_stacon_ParamLimits

0x4797,	// (0x0003e940) uni_indicator_pane_stacon

0x47ac,	// (0x0003e955) battery_pane_stacon_ParamLimits

0x47ac,	// (0x0003e955) battery_pane_stacon

0x47ec,	// (0x0003e995) control_bottom_pane_stacon_ParamLimits

0x47ec,	// (0x0003e995) control_bottom_pane_stacon

0x480b,	// (0x0003e9b4) navi_pane_stacon_ParamLimits

0x480b,	// (0x0003e9b4) navi_pane_stacon

0xbf9a,	// (0x00046143) stacon_bottom_pane_g1_ParamLimits

0xbf9a,	// (0x00046143) stacon_bottom_pane_g1

0xbbbc,	// (0x00045d65) aid_levels_signal_lsc_ParamLimits

0xbbbc,	// (0x00045d65) aid_levels_signal_lsc

0x44c9,	// (0x0003e672) signal_pane_stacon_g1_ParamLimits

0x44c9,	// (0x0003e672) signal_pane_stacon_g1

0x44d5,	// (0x0003e67e) signal_pane_stacon_g2_ParamLimits

0x44d5,	// (0x0003e67e) signal_pane_stacon_g2

0x0001,

0xf6c9,	// (0x00049872) signal_pane_stacon_g_ParamLimits

0xf6c9,	// (0x00049872) signal_pane_stacon_g

0x4509,	// (0x0003e6b2) title_pane_stacon_t1_ParamLimits

0x4509,	// (0x0003e6b2) title_pane_stacon_t1

0xbbd6,	// (0x00045d7f) uni_indicator_pane_stacon_g1

0xbbe0,	// (0x00045d89) uni_indicator_pane_stacon_g2

0xbbea,	// (0x00045d93) uni_indicator_pane_stacon_g3

0xbbf4,	// (0x00045d9d) uni_indicator_pane_stacon_g4

0x0003,

0xf6d5,	// (0x0004987e) uni_indicator_pane_stacon_g

0x452e,	// (0x0003e6d7) control_top_pane_stacon_g1

0x4536,	// (0x0003e6df) control_top_pane_stacon_t1_ParamLimits

0x4536,	// (0x0003e6df) control_top_pane_stacon_t1

0xbbfe,	// (0x00045da7) aid_levels_battery_lsc_ParamLimits

0xbbfe,	// (0x00045da7) aid_levels_battery_lsc

0x4567,	// (0x0003e710) battery_pane_stacon_g1_ParamLimits

0x4567,	// (0x0003e710) battery_pane_stacon_g1

0x4573,	// (0x0003e71c) battery_pane_stacon_g2_ParamLimits

0x4573,	// (0x0003e71c) battery_pane_stacon_g2

0x0001,

0xf6de,	// (0x00049887) battery_pane_stacon_g_ParamLimits

0xf6de,	// (0x00049887) battery_pane_stacon_g

0x45a2,	// (0x0003e74b) navi_icon_pane_stacon

0x45b2,	// (0x0003e75b) navi_navi_pane_stacon

0x45a2,	// (0x0003e74b) navi_text_pane_stacon

0x452e,	// (0x0003e6d7) control_bottom_pane_stacon_g1

0x45c2,	// (0x0003e76b) control_bottom_pane_stacon_t1_ParamLimits

0x45c2,	// (0x0003e76b) control_bottom_pane_stacon_t1

0x9455,	// (0x000435fe) grid_app_pane_ParamLimits

0x9455,	// (0x000435fe) grid_app_pane

0x9483,	// (0x0004362c) scroll_pane_cp15_ParamLimits

0x9483,	// (0x0004362c) scroll_pane_cp15

0x9496,	// (0x0004363f) cell_app_pane_ParamLimits

0x9496,	// (0x0004363f) cell_app_pane

0x94d3,	// (0x0004367c) cell_app_pane_g1_ParamLimits

0x94d3,	// (0x0004367c) cell_app_pane_g1

0xbc26,	// (0x00045dcf) cell_app_pane_g2_ParamLimits

0xbc26,	// (0x00045dcf) cell_app_pane_g2

0x0001,

0xf6e3,	// (0x0004988c) cell_app_pane_g_ParamLimits

0xf6e3,	// (0x0004988c) cell_app_pane_g

0x94f7,	// (0x000436a0) cell_app_pane_t1_ParamLimits

0x94f7,	// (0x000436a0) cell_app_pane_t1

0xbc32,	// (0x00045ddb) grid_highlight_pane_ParamLimits

0xbc32,	// (0x00045ddb) grid_highlight_pane

0x9226,	// (0x000433cf) cell_highlight_pane_g1

0x922e,	// (0x000433d7) cell_highlight_pane_g2

0x9236,	// (0x000433df) cell_highlight_pane_g3

0x923e,	// (0x000433e7) cell_highlight_pane_g4

0x9246,	// (0x000433ef) cell_highlight_pane_g5

0x924e,	// (0x000433f7) cell_highlight_pane_g6

0x9256,	// (0x000433ff) cell_highlight_pane_g7

0x925e,	// (0x00043407) cell_highlight_pane_g8

0x9266,	// (0x0004340f) cell_highlight_pane_g9

0x7b29,	// (0x00041cd2) cell_highlight_pane_g10

0x0009,

0xf691,	// (0x0004983a) cell_highlight_pane_g

0xbc43,	// (0x00045dec) bg_scroll_pane

0x4606,	// (0x0003e7af) scroll_handle_pane

0xbc8a,	// (0x00045e33) scroll_bg_pane_g1

0xbc9f,	// (0x00045e48) scroll_bg_pane_g2

0xbcb7,	// (0x00045e60) scroll_bg_pane_g3

0x0002,

0xf6e8,	// (0x00049891) scroll_bg_pane_g

0xbccc,	// (0x00045e75) scroll_handle_focus_pane_ParamLimits

0xbccc,	// (0x00045e75) scroll_handle_focus_pane

0xbc8a,	// (0x00045e33) scroll_handle_pane_g1

0xbcd9,	// (0x00045e82) scroll_handle_pane_g2

0xbcb7,	// (0x00045e60) scroll_handle_pane_g3

0x0002,

0xf6ef,	// (0x00049898) scroll_handle_pane_g

0x9277,	// (0x00043420) bg_popup_sub_pane_cp21_ParamLimits

0x9277,	// (0x00043420) bg_popup_sub_pane_cp21

0xbced,	// (0x00045e96) popup_fep_japan_predictive_window_t1_ParamLimits

0xbced,	// (0x00045e96) popup_fep_japan_predictive_window_t1

0xbd04,	// (0x00045ead) popup_fep_japan_predictive_window_t2_ParamLimits

0xbd04,	// (0x00045ead) popup_fep_japan_predictive_window_t2

0xbd37,	// (0x00045ee0) popup_fep_japan_predictive_window_t3_ParamLimits

0xbd37,	// (0x00045ee0) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f6,	// (0x0004989f) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f6,	// (0x0004989f) popup_fep_japan_predictive_window_t

0x7bf1,	// (0x00041d9a) bg_popup_sub_pane_cp23

0xbd6e,	// (0x00045f17) listscroll_japin_cand_pane

0xbd76,	// (0x00045f1f) popup_fep_japan_candidate_window_t1

0xbd84,	// (0x00045f2d) candidate_pane_ParamLimits

0xbd84,	// (0x00045f2d) candidate_pane

0xbd97,	// (0x00045f40) scroll_pane_cp30

0xbd9f,	// (0x00045f48) list_single_popup_jap_candidate_pane_ParamLimits

0xbd9f,	// (0x00045f48) list_single_popup_jap_candidate_pane

0x7bf1,	// (0x00041d9a) list_highlight_pane_cp30

0xbdb4,	// (0x00045f5d) list_single_popup_jap_candidate_pane_t1

0x9517,	// (0x000436c0) level_1_signal

0x9529,	// (0x000436d2) level_2_signal

0x953c,	// (0x000436e5) level_3_signal

0x954f,	// (0x000436f8) level_4_signal

0x9562,	// (0x0004370b) level_5_signal

0x9575,	// (0x0004371e) level_6_signal

0x9588,	// (0x00043731) level_7_signal

0x9517,	// (0x000436c0) level_1_battery

0x9529,	// (0x000436d2) level_2_battery

0x953c,	// (0x000436e5) level_3_battery

0x954f,	// (0x000436f8) level_4_battery

0x9562,	// (0x0004370b) level_5_battery

0x9575,	// (0x0004371e) level_6_battery

0x9588,	// (0x00043731) level_7_battery

0xbddb,	// (0x00045f84) list_menu_pane_ParamLimits

0xbddb,	// (0x00045f84) list_menu_pane

0xbdf1,	// (0x00045f9a) scroll_pane_cp25_ParamLimits

0xbdf1,	// (0x00045f9a) scroll_pane_cp25

0x959b,	// (0x00043744) list_double2_graphic_pane_cp2_ParamLimits

0x959b,	// (0x00043744) list_double2_graphic_pane_cp2

0x959b,	// (0x00043744) list_double2_large_graphic_pane_cp2_ParamLimits

0x959b,	// (0x00043744) list_double2_large_graphic_pane_cp2

0x959b,	// (0x00043744) list_double2_pane_cp2_ParamLimits

0x959b,	// (0x00043744) list_double2_pane_cp2

0x959b,	// (0x00043744) list_double_graphic_pane_cp2_ParamLimits

0x959b,	// (0x00043744) list_double_graphic_pane_cp2

0x959b,	// (0x00043744) list_double_large_graphic_pane_cp2_ParamLimits

0x959b,	// (0x00043744) list_double_large_graphic_pane_cp2

0x959b,	// (0x00043744) list_double_number_pane_cp2_ParamLimits

0x959b,	// (0x00043744) list_double_number_pane_cp2

0x959b,	// (0x00043744) list_double_pane_cp2_ParamLimits

0x959b,	// (0x00043744) list_double_pane_cp2

0x95b6,	// (0x0004375f) list_single_2graphic_pane_cp2_ParamLimits

0x95b6,	// (0x0004375f) list_single_2graphic_pane_cp2

0x95b6,	// (0x0004375f) list_single_graphic_heading_pane_cp2_ParamLimits

0x95b6,	// (0x0004375f) list_single_graphic_heading_pane_cp2

0x95b6,	// (0x0004375f) list_single_graphic_pane_cp2_ParamLimits

0x95b6,	// (0x0004375f) list_single_graphic_pane_cp2

0x95b6,	// (0x0004375f) list_single_heading_pane_cp2_ParamLimits

0x95b6,	// (0x0004375f) list_single_heading_pane_cp2

0x95c7,	// (0x00043770) list_single_large_graphic_pane_cp2_ParamLimits

0x95c7,	// (0x00043770) list_single_large_graphic_pane_cp2

0x95b6,	// (0x0004375f) list_single_number_heading_pane_cp2_ParamLimits

0x95b6,	// (0x0004375f) list_single_number_heading_pane_cp2

0x95b6,	// (0x0004375f) list_single_number_pane_cp2_ParamLimits

0x95b6,	// (0x0004375f) list_single_number_pane_cp2

0x95b6,	// (0x0004375f) list_single_pane_cp2_ParamLimits

0x95b6,	// (0x0004375f) list_single_pane_cp2

0xbe13,	// (0x00045fbc) bg_popup_sub_pane_cp22

0x46b5,	// (0x0003e85e) popup_side_volume_key_window_g1

0x46d9,	// (0x0003e882) popup_side_volume_key_window_t1

0x46f5,	// (0x0003e89e) volume_small_pane_cp1

0x889f,	// (0x00042a48) bg_popup_sub_pane_cp24_ParamLimits

0x889f,	// (0x00042a48) bg_popup_sub_pane_cp24

0xbe29,	// (0x00045fd2) fep_china_uni_candidate_pane_ParamLimits

0xbe29,	// (0x00045fd2) fep_china_uni_candidate_pane

0xbe3d,	// (0x00045fe6) fep_china_uni_entry_pane

0xbe4d,	// (0x00045ff6) popup_fep_china_uni_window_g1

0xbe69,	// (0x00046012) fep_china_uni_entry_pane_g1

0xbe71,	// (0x0004601a) fep_china_uni_entry_pane_g2

0x0001,

0xf727,	// (0x000498d0) fep_china_uni_entry_pane_g

0xbe79,	// (0x00046022) fep_entry_item_pane

0xbe83,	// (0x0004602c) fep_candidate_item_pane

0xbe8b,	// (0x00046034) fep_china_uni_candidate_pane_g1

0xbe93,	// (0x0004603c) fep_china_uni_candidate_pane_g2

0xbe9b,	// (0x00046044) fep_china_uni_candidate_pane_g3

0xbea3,	// (0x0004604c) fep_china_uni_candidate_pane_g4

0x0003,

0xf72c,	// (0x000498d5) fep_china_uni_candidate_pane_g

0x7b29,	// (0x00041cd2) fep_entry_item_pane_g1

0xbeab,	// (0x00046054) fep_entry_item_pane_t1_ParamLimits

0xbeab,	// (0x00046054) fep_entry_item_pane_t1

0xbec1,	// (0x0004606a) fep_candidate_item_pane_t1_ParamLimits

0xbec1,	// (0x0004606a) fep_candidate_item_pane_t1

0xbed6,	// (0x0004607f) fep_candidate_item_pane_t2_ParamLimits

0xbed6,	// (0x0004607f) fep_candidate_item_pane_t2

0x0001,

0xf735,	// (0x000498de) fep_candidate_item_pane_t_ParamLimits

0xf735,	// (0x000498de) fep_candidate_item_pane_t

0x88e9,	// (0x00042a92) list_highlight_pane_cp31_ParamLimits

0x88e9,	// (0x00042a92) list_highlight_pane_cp31

0xbee8,	// (0x00046091) level_1_signal_lsc

0xbef1,	// (0x0004609a) level_2_signal_lsc

0xbefa,	// (0x000460a3) level_3_signal_lsc

0xbf03,	// (0x000460ac) level_4_signal_lsc

0xbf0c,	// (0x000460b5) level_5_signal_lsc

0xbf15,	// (0x000460be) level_6_signal_lsc

0xbf1e,	// (0x000460c7) level_7_signal_lsc

0xbf1e,	// (0x000460c7) level_1_battery_lsc

0xbf27,	// (0x000460d0) level_2_battery_lsc

0xbf30,	// (0x000460d9) level_3_battery_lsc

0xbf39,	// (0x000460e2) level_4_battery_lsc

0xbf42,	// (0x000460eb) level_5_battery_lsc

0xbf4b,	// (0x000460f4) level_6_battery_lsc

0xbee8,	// (0x00046091) level_7_battery_lsc

0xbf54,	// (0x000460fd) scroll_handle_focus_pane_g1

0xbf5d,	// (0x00046106) scroll_handle_focus_pane_g2

0xbf66,	// (0x0004610f) scroll_handle_focus_pane_g3

0x0002,

0xf73a,	// (0x000498e3) scroll_handle_focus_pane_g

0x0def,	// (0x0003af98) list_single_2graphic_pane_g1_ParamLimits

0x0def,	// (0x0003af98) list_single_2graphic_pane_g1

0x1222,	// (0x0003b3cb) list_single_2graphic_pane_g2_ParamLimits

0x1222,	// (0x0003b3cb) list_single_2graphic_pane_g2

0x9112,	// (0x000432bb) list_single_2graphic_pane_g3_ParamLimits

0x9112,	// (0x000432bb) list_single_2graphic_pane_g3

0x0dfb,	// (0x0003afa4) list_single_2graphic_pane_g4_ParamLimits

0x0dfb,	// (0x0003afa4) list_single_2graphic_pane_g4

0x0003,

0xf741,	// (0x000498ea) list_single_2graphic_pane_g_ParamLimits

0xf741,	// (0x000498ea) list_single_2graphic_pane_g

0x0e0c,	// (0x0003afb5) list_single_2graphic_pane_t1_ParamLimits

0x0e0c,	// (0x0003afb5) list_single_2graphic_pane_t1

0x1287,	// (0x0003b430) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x1287,	// (0x0003b430) list_double2_graphic_large_graphic_pane_g1

0x0ac4,	// (0x0003ac6d) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x0ac4,	// (0x0003ac6d) list_double2_graphic_large_graphic_pane_g2

0x9156,	// (0x000432ff) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x9156,	// (0x000432ff) list_double2_graphic_large_graphic_pane_g3

0x0e3a,	// (0x0003afe3) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x0e3a,	// (0x0003afe3) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74a,	// (0x000498f3) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74a,	// (0x000498f3) list_double2_graphic_large_graphic_pane_g

0x0e46,	// (0x0003afef) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x0e46,	// (0x0003afef) list_double2_graphic_large_graphic_pane_t1

0x0e5c,	// (0x0003b005) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x0e5c,	// (0x0003b005) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf753,	// (0x000498fc) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf753,	// (0x000498fc) list_double2_graphic_large_graphic_pane_t

0xc041,	// (0x000461ea) popup_fast_swap_window_ParamLimits

0xc041,	// (0x000461ea) popup_fast_swap_window

0xc05d,	// (0x00046206) popup_side_volume_key_window

0xc077,	// (0x00046220) stacon_top_pane

0xc081,	// (0x0004622a) status_pane_ParamLimits

0xc081,	// (0x0004622a) status_pane

0x9696,	// (0x0004383f) status_small_pane

0x7bf1,	// (0x00041d9a) control_pane

0x7bf1,	// (0x00041d9a) stacon_bottom_pane

0x90f5,	// (0x0004329e) scroll_pane_cp121

0x91b6,	// (0x0004335f) set_content_pane

0xd167,	// (0x00047310) bg_active_tab_pane_g1_cp1

0xbf6f,	// (0x00046118) bg_active_tab_pane_g2_cp1

0xd170,	// (0x00047319) bg_active_tab_pane_g3_cp1

0xd167,	// (0x00047310) bg_passive_tab_pane_g1_cp1

0xbf6f,	// (0x00046118) bg_passive_tab_pane_g2_cp1

0xd170,	// (0x00047319) bg_passive_tab_pane_g3_cp1

0x964c,	// (0x000437f5) bg_active_tab_pane_g1_cp2

0xbf6f,	// (0x00046118) bg_active_tab_pane_g2_cp2

0x9655,	// (0x000437fe) bg_active_tab_pane_g3_cp2

0x964c,	// (0x000437f5) bg_passive_tab_pane_g1_cp2

0xbf6f,	// (0x00046118) bg_passive_tab_pane_g2_cp2

0x9655,	// (0x000437fe) bg_passive_tab_pane_g3_cp2

0x965e,	// (0x00043807) bg_active_tab_pane_g1_cp3

0xbf6f,	// (0x00046118) bg_active_tab_pane_g2_cp3

0x9667,	// (0x00043810) bg_active_tab_pane_g3_cp3

0x965e,	// (0x00043807) bg_passive_tab_pane_g1_cp3

0xbf6f,	// (0x00046118) bg_passive_tab_pane_g2_cp3

0x9667,	// (0x00043810) bg_passive_tab_pane_g3_cp3

0x9670,	// (0x00043819) bg_active_tab_pane_g1_cp4

0xbf6f,	// (0x00046118) bg_active_tab_pane_g2_cp4

0x9679,	// (0x00043822) bg_active_tab_pane_g3_cp4

0x9670,	// (0x00043819) bg_passive_tab_pane_g1_cp4

0xbf6f,	// (0x00046118) bg_passive_tab_pane_g2_cp4

0x9679,	// (0x00043822) bg_passive_tab_pane_g3_cp4

0xbfb6,	// (0x0004615f) bg_active_tab_pane_g1_cp5

0xbf6f,	// (0x00046118) bg_active_tab_pane_g2_cp5

0xbfbf,	// (0x00046168) bg_active_tab_pane_g3_cp5

0xbfb6,	// (0x0004615f) bg_passive_tab_pane_g1_cp5

0xbf6f,	// (0x00046118) bg_passive_tab_pane_g2_cp5

0xbfbf,	// (0x00046168) bg_passive_tab_pane_g3_cp5

0x9682,	// (0x0004382b) list_set_graphic_pane_ParamLimits

0x9682,	// (0x0004382b) list_set_graphic_pane

0x7bf1,	// (0x00041d9a) bg_set_opt_pane_cp4

0xbfc8,	// (0x00046171) list_set_graphic_pane_g1_ParamLimits

0xbfc8,	// (0x00046171) list_set_graphic_pane_g1

0xbfd4,	// (0x0004617d) list_set_graphic_pane_g2_ParamLimits

0xbfd4,	// (0x0004617d) list_set_graphic_pane_g2

0x0001,

0xf758,	// (0x00049901) list_set_graphic_pane_g_ParamLimits

0xf758,	// (0x00049901) list_set_graphic_pane_g

0x0009,

0xfacf,	// (0x00049c78) volume_small_pane_cp_g

0xbff6,	// (0x0004619f) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xbff6,	// (0x0004619f) list_double2_large_graphic_pane_g1_cp2

0xc002,	// (0x000461ab) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xc002,	// (0x000461ab) list_double2_large_graphic_pane_g2_cp2

0xc011,	// (0x000461ba) list_double2_large_graphic_pane_g3_cp2

0xc019,	// (0x000461c2) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xc019,	// (0x000461c2) list_double2_large_graphic_pane_t1_cp2

0xc02f,	// (0x000461d8) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xc02f,	// (0x000461d8) list_double2_large_graphic_pane_t2_cp2

0xd653,	// (0x000477fc) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xd653,	// (0x000477fc) list_double_large_graphic_pane_g1_cp2

0xd664,	// (0x0004780d) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xd664,	// (0x0004780d) list_double_large_graphic_pane_g2_cp2

0xc15c,	// (0x00046305) list_double_large_graphic_pane_g3_cp2

0xd673,	// (0x0004781c) list_double_large_graphic_pane_g4_cp

0xd67b,	// (0x00047824) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xd67b,	// (0x00047824) list_double_large_graphic_pane_t1_cp2

0xd692,	// (0x0004783b) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xd692,	// (0x0004783b) list_double_large_graphic_pane_t2_cp2

0xc08f,	// (0x00046238) list_double2_graphic_pane_g1_cp2_ParamLimits

0xc08f,	// (0x00046238) list_double2_graphic_pane_g1_cp2

0xc09b,	// (0x00046244) list_double2_graphic_pane_g2_cp2_ParamLimits

0xc09b,	// (0x00046244) list_double2_graphic_pane_g2_cp2

0xc0aa,	// (0x00046253) list_double2_graphic_pane_g3_cp2

0xc0b2,	// (0x0004625b) list_double2_graphic_pane_t1_cp2_ParamLimits

0xc0b2,	// (0x0004625b) list_double2_graphic_pane_t1_cp2

0xc0c8,	// (0x00046271) list_double2_graphic_pane_t2_cp2_ParamLimits

0xc0c8,	// (0x00046271) list_double2_graphic_pane_t2_cp2

0xc0da,	// (0x00046283) list_single_number_heading_pane_g1_cp2_ParamLimits

0xc0da,	// (0x00046283) list_single_number_heading_pane_g1_cp2

0xc0e6,	// (0x0004628f) list_single_number_heading_pane_g2_cp2

0xc0ee,	// (0x00046297) list_single_number_heading_pane_t1_cp2_ParamLimits

0xc0ee,	// (0x00046297) list_single_number_heading_pane_t1_cp2

0xc104,	// (0x000462ad) list_single_number_heading_pane_t2_cp2_ParamLimits

0xc104,	// (0x000462ad) list_single_number_heading_pane_t2_cp2

0xc116,	// (0x000462bf) list_single_number_heading_pane_t3_cp2_ParamLimits

0xc116,	// (0x000462bf) list_single_number_heading_pane_t3_cp2

0xc0da,	// (0x00046283) list_single_heading_pane_g1_cp2_ParamLimits

0xc0da,	// (0x00046283) list_single_heading_pane_g1_cp2

0xc0e6,	// (0x0004628f) list_single_heading_pane_g2_cp2

0xc0ee,	// (0x00046297) list_single_heading_pane_t1_cp2_ParamLimits

0xc0ee,	// (0x00046297) list_single_heading_pane_t1_cp2

0xd45d,	// (0x00047606) list_single_heading_pane_t2_cp2_ParamLimits

0xd45d,	// (0x00047606) list_single_heading_pane_t2_cp2

0xd3e2,	// (0x0004758b) list_double_graphic_pane_g1_cp2_ParamLimits

0xd3e2,	// (0x0004758b) list_double_graphic_pane_g1_cp2

0xd3ee,	// (0x00047597) list_double_graphic_pane_g2_cp2_ParamLimits

0xd3ee,	// (0x00047597) list_double_graphic_pane_g2_cp2

0xd3fd,	// (0x000475a6) list_double_graphic_pane_g3_cp2

0xd405,	// (0x000475ae) list_double_graphic_pane_t1_cp2_ParamLimits

0xd405,	// (0x000475ae) list_double_graphic_pane_t1_cp2

0xd41b,	// (0x000475c4) list_double_graphic_pane_t2_cp2_ParamLimits

0xd41b,	// (0x000475c4) list_double_graphic_pane_t2_cp2

0xc150,	// (0x000462f9) list_double_number_pane_g1_cp2_ParamLimits

0xc150,	// (0x000462f9) list_double_number_pane_g1_cp2

0xc15c,	// (0x00046305) list_double_number_pane_g2_cp2

0xd3a8,	// (0x00047551) list_double_number_pane_t1_cp2_ParamLimits

0xd3a8,	// (0x00047551) list_double_number_pane_t1_cp2

0xd3ba,	// (0x00047563) list_double_number_pane_t2_cp2_ParamLimits

0xd3ba,	// (0x00047563) list_double_number_pane_t2_cp2

0xd3d0,	// (0x00047579) list_double_number_pane_t3_cp2_ParamLimits

0xd3d0,	// (0x00047579) list_double_number_pane_t3_cp2

0xd320,	// (0x000474c9) list_single_graphic_pane_g1_cp2_ParamLimits

0xd320,	// (0x000474c9) list_single_graphic_pane_g1_cp2

0xc0da,	// (0x00046283) list_single_graphic_pane_g2_cp2_ParamLimits

0xc0da,	// (0x00046283) list_single_graphic_pane_g2_cp2

0xc0e6,	// (0x0004628f) list_single_graphic_pane_g3_cp2

0xd2f8,	// (0x000474a1) list_single_graphic_pane_t1_cp2_ParamLimits

0xd2f8,	// (0x000474a1) list_single_graphic_pane_t1_cp2

0xc0da,	// (0x00046283) list_single_number_pane_g1_cp2_ParamLimits

0xc0da,	// (0x00046283) list_single_number_pane_g1_cp2

0xc0e6,	// (0x0004628f) list_single_number_pane_g2_cp2

0xd2f8,	// (0x000474a1) list_single_number_pane_t1_cp2_ParamLimits

0xd2f8,	// (0x000474a1) list_single_number_pane_t1_cp2

0xd30e,	// (0x000474b7) list_single_number_pane_t2_cp2_ParamLimits

0xd30e,	// (0x000474b7) list_single_number_pane_t2_cp2

0xc002,	// (0x000461ab) list_double2_pane_g1_cp2_ParamLimits

0xc002,	// (0x000461ab) list_double2_pane_g1_cp2

0xc011,	// (0x000461ba) list_double2_pane_g2_cp2

0xc128,	// (0x000462d1) list_double2_pane_t1_cp2_ParamLimits

0xc128,	// (0x000462d1) list_double2_pane_t1_cp2

0xc13e,	// (0x000462e7) list_double2_pane_t2_cp2_ParamLimits

0xc13e,	// (0x000462e7) list_double2_pane_t2_cp2

0xc150,	// (0x000462f9) list_double_pane_g1_cp2_ParamLimits

0xc150,	// (0x000462f9) list_double_pane_g1_cp2

0xc15c,	// (0x00046305) list_double_pane_g2_cp2

0xc164,	// (0x0004630d) list_double_pane_t1_cp2_ParamLimits

0xc164,	// (0x0004630d) list_double_pane_t1_cp2

0xc17a,	// (0x00046323) list_double_pane_t2_cp2_ParamLimits

0xc17a,	// (0x00046323) list_double_pane_t2_cp2

0xc1a2,	// (0x0004634b) list_single_pane_cp2_g3

0xc0da,	// (0x00046283) list_single_pane_g1_cp2_ParamLimits

0xc0da,	// (0x00046283) list_single_pane_g1_cp2

0xc0e6,	// (0x0004628f) list_single_pane_g2_cp2

0xc1b2,	// (0x0004635b) list_single_pane_t1_cp2_ParamLimits

0xc1b2,	// (0x0004635b) list_single_pane_t1_cp2

0xc1ca,	// (0x00046373) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xc1ca,	// (0x00046373) list_single_large_graphic_pane_g1_cp2

0xc1d6,	// (0x0004637f) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xc1d6,	// (0x0004637f) list_single_large_graphic_pane_g2_cp2

0xc1e2,	// (0x0004638b) list_single_large_graphic_pane_g3_cp2

0xc1ea,	// (0x00046393) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xc1ea,	// (0x00046393) list_single_large_graphic_pane_g4_cp1

0xc204,	// (0x000463ad) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xc204,	// (0x000463ad) list_single_large_graphic_pane_t1_cp2

0xd2da,	// (0x00047483) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xd2da,	// (0x00047483) list_single_graphic_heading_pane_g1_cp2

0xd2b5,	// (0x0004745e) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xd2b5,	// (0x0004745e) list_single_graphic_heading_pane_g4_cp2

0xc0e6,	// (0x0004628f) list_single_graphic_heading_pane_g5_cp2

0xc0ee,	// (0x00046297) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xc0ee,	// (0x00046297) list_single_graphic_heading_pane_t1_cp2

0xd2e6,	// (0x0004748f) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xd2e6,	// (0x0004748f) list_single_graphic_heading_pane_t2_cp2

0xd2a9,	// (0x00047452) list_single_2graphic_pane_g1_cp2_ParamLimits

0xd2a9,	// (0x00047452) list_single_2graphic_pane_g1_cp2

0xd2b5,	// (0x0004745e) list_single_2graphic_pane_g2_cp2_ParamLimits

0xd2b5,	// (0x0004745e) list_single_2graphic_pane_g2_cp2

0xc0e6,	// (0x0004628f) list_single_2graphic_pane_g3_cp2

0xcffe,	// (0x000471a7) list_single_2graphic_pane_g4_cp2_ParamLimits

0xcffe,	// (0x000471a7) list_single_2graphic_pane_g4_cp2

0xd2c4,	// (0x0004746d) list_single_2graphic_pane_t1_cp2_ParamLimits

0xd2c4,	// (0x0004746d) list_single_2graphic_pane_t1_cp2

0x7b29,	// (0x00041cd2) list_highlight_pane_g10_cp1

0xcd34,	// (0x00046edd) list_highlight_pane_g1_cp1

0xcd3c,	// (0x00046ee5) list_highlight_pane_g2_cp1

0xcd44,	// (0x00046eed) list_highlight_pane_g3_cp1

0xcd4c,	// (0x00046ef5) list_highlight_pane_g4_cp1

0xcd54,	// (0x00046efd) list_highlight_pane_g5_cp1

0xcd5c,	// (0x00046f05) list_highlight_pane_g6_cp1

0xcd64,	// (0x00046f0d) list_highlight_pane_g7_cp1

0xcd6c,	// (0x00046f15) list_highlight_pane_g8_cp1

0xcd74,	// (0x00046f1d) list_highlight_pane_g9_cp1

0xa33c,	// (0x000444e5) form_field_slider_pane_t3

0xa34a,	// (0x000444f3) form_field_slider_pane_t4

0xcc7e,	// (0x00046e27) slider_form_pane_ParamLimits

0xcc7e,	// (0x00046e27) slider_form_pane

0x7bf1,	// (0x00041d9a) control_abbreviations

0x7bf1,	// (0x00041d9a) control_conventions

0x7bf1,	// (0x00041d9a) control_definitions

0x7bf1,	// (0x00041d9a) format_table_attribute

0xd4a7,	// (0x00047650) bg_popup_preview_window_pane_g9

0x7bf1,	// (0x00041d9a) format_table_data2

0x7bf1,	// (0x00041d9a) format_table_data3

0x7bf1,	// (0x00041d9a) format_table_data_example

0x0008,

0x7bf1,	// (0x00041d9a) intro_purpose

0xf8e8,	// (0x00049a91) bg_popup_preview_window_pane_g

0x7bf1,	// (0x00041d9a) texts_category

0x7bf1,	// (0x00041d9a) texts_graphics

0xc21a,	// (0x000463c3) text_digital

0xc229,	// (0x000463d2) text_primary

0xc238,	// (0x000463e1) text_primary_small

0xc247,	// (0x000463f0) text_secondary

0xc256,	// (0x000463ff) text_title

0xd920,	// (0x00047ac9) bg_passive_tab_pane_g1_cp3_srt

0xbf6f,	// (0x00046118) bg_passive_tab_pane_g2_cp3_srt

0xd929,	// (0x00047ad2) bg_passive_tab_pane_g3_cp3_srt

0x889f,	// (0x00042a48) bg_active_tab_pane_cp3_srt_ParamLimits

0x889f,	// (0x00042a48) bg_active_tab_pane_cp3_srt

0xd157,	// (0x00047300) tabs_4_active_pane_srt_g1

0x88cb,	// (0x00042a74) tabs_4_active_pane_srt_t1_ParamLimits

0x88cb,	// (0x00042a74) tabs_4_active_pane_srt_t1

0xd920,	// (0x00047ac9) bg_active_tab_pane_g1_cp3_copy1

0xbf6f,	// (0x00046118) bg_active_tab_pane_g2_cp3_copy1

0xd929,	// (0x00047ad2) bg_active_tab_pane_g3_cp3_copy1

0x88e9,	// (0x00042a92) tabs_2_long_active_pane_srt_ParamLimits

0x88e9,	// (0x00042a92) tabs_2_long_active_pane_srt

0x88e9,	// (0x00042a92) tabs_2_long_passive_pane_srt_ParamLimits

0x88e9,	// (0x00042a92) tabs_2_long_passive_pane_srt

0xbafc,	// (0x00045ca5) bg_passive_tab_pane_cp4_srt_ParamLimits

0xbafc,	// (0x00045ca5) bg_passive_tab_pane_cp4_srt

0xd856,	// (0x000479ff) bg_passive_tab_pane_g1_cp4_srt

0xbf6f,	// (0x00046118) bg_passive_tab_pane_g2_cp4_srt

0xd85f,	// (0x00047a08) bg_passive_tab_pane_g3_cp4_srt

0x88e9,	// (0x00042a92) bg_active_tab_pane_cp4_srt_ParamLimits

0x88e9,	// (0x00042a92) bg_active_tab_pane_cp4_srt

0x9373,	// (0x0004351c) tabs_2_long_active_pane_srt_t1_ParamLimits

0x9373,	// (0x0004351c) tabs_2_long_active_pane_srt_t1

0xd856,	// (0x000479ff) bg_active_tab_pane_g1_cp4_srt

0xbf6f,	// (0x00046118) bg_active_tab_pane_g2_cp4_srt

0xd85f,	// (0x00047a08) bg_active_tab_pane_g3_cp4_srt

0x889f,	// (0x00042a48) tabs_3_long_active_pane_srt_ParamLimits

0x889f,	// (0x00042a48) tabs_3_long_active_pane_srt

0x889f,	// (0x00042a48) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x889f,	// (0x00042a48) tabs_3_long_passive_pane_cp_srt

0x889f,	// (0x00042a48) tabs_3_long_passive_pane_srt_ParamLimits

0x889f,	// (0x00042a48) tabs_3_long_passive_pane_srt

0xbafc,	// (0x00045ca5) bg_passive_tab_pane_cp5_srt_ParamLimits

0xbafc,	// (0x00045ca5) bg_passive_tab_pane_cp5_srt

0xbfb6,	// (0x0004615f) bg_passive_tab_pane_g1_cp5_srt

0xbf6f,	// (0x00046118) bg_passive_tab_pane_g2_cp5_srt

0xbfbf,	// (0x00046168) bg_passive_tab_pane_g3_cp5_srt

0x88e9,	// (0x00042a92) bg_active_tab_pane_cp5_srt_ParamLimits

0x88e9,	// (0x00042a92) bg_active_tab_pane_cp5_srt

0x938a,	// (0x00043533) tabs_3_long_active_pane_srt_t1_ParamLimits

0x938a,	// (0x00043533) tabs_3_long_active_pane_srt_t1

0xbfb6,	// (0x0004615f) bg_active_tab_pane_g1_cp5_srt

0xbf6f,	// (0x00046118) bg_active_tab_pane_g2_cp5_srt

0xbfbf,	// (0x00046168) bg_active_tab_pane_g3_cp5_srt

0xd848,	// (0x000479f1) navi_text_pane_srt_t1

0xd840,	// (0x000479e9) navi_icon_pane_srt_g1

0xc36e,	// (0x00046517) midp_editing_number_pane_srt

0xc265,	// (0x0004640e) midp_ticker_pane_srt

0xc376,	// (0x0004651f) midp_ticker_pane_srt_g1

0xc37e,	// (0x00046527) midp_ticker_pane_srt_g2

0x0001,

0xf777,	// (0x00049920) midp_ticker_pane_srt_g

0xc386,	// (0x0004652f) midp_ticker_pane_srt_t1

0xd831,	// (0x000479da) midp_editing_number_pane_t1_copy1

0x969f,	// (0x00043848) listscroll_midp_pane

0x969f,	// (0x00043848) midp_form_pane

0xc26d,	// (0x00046416) midp_info_popup_window_ParamLimits

0xc26d,	// (0x00046416) midp_info_popup_window

0x9277,	// (0x00043420) bg_popup_sub_pane_cp50_ParamLimits

0x9277,	// (0x00043420) bg_popup_sub_pane_cp50

0xc99b,	// (0x00046b44) listscroll_midp_info_pane_ParamLimits

0xc99b,	// (0x00046b44) listscroll_midp_info_pane

0xc983,	// (0x00046b2c) listscroll_form_midp_pane_ParamLimits

0xc983,	// (0x00046b2c) listscroll_form_midp_pane

0xc98f,	// (0x00046b38) scroll_bar_cp050

0xa330,	// (0x000444d9) list_midp_pane

0xe14f,	// (0x000482f8) signal_pane_g2_cp

0xc8b5,	// (0x00046a5e) listscroll_midp_info_pane_t1_ParamLimits

0xc8b5,	// (0x00046a5e) listscroll_midp_info_pane_t1

0xc8cd,	// (0x00046a76) listscroll_midp_info_pane_t2_ParamLimits

0xc8cd,	// (0x00046a76) listscroll_midp_info_pane_t2

0xc90b,	// (0x00046ab4) listscroll_midp_info_pane_t3_ParamLimits

0xc90b,	// (0x00046ab4) listscroll_midp_info_pane_t3

0xc945,	// (0x00046aee) listscroll_midp_info_pane_t4_ParamLimits

0xc945,	// (0x00046aee) listscroll_midp_info_pane_t4

0x0003,

0xf823,	// (0x000499cc) listscroll_midp_info_pane_t_ParamLimits

0xf823,	// (0x000499cc) listscroll_midp_info_pane_t

0x9326,	// (0x000434cf) scroll_pane_cp21

0xc859,	// (0x00046a02) form_midp_field_choice_group_pane

0xc862,	// (0x00046a0b) form_midp_field_text_pane

0xc89b,	// (0x00046a44) form_midp_field_time_pane

0xc8a3,	// (0x00046a4c) form_midp_gauge_slider_pane

0xc8ac,	// (0x00046a55) form_midp_gauge_wait_pane

0x7bf1,	// (0x00041d9a) form_midp_image_pane

0x0e6e,	// (0x0003b017) list_single_midp_pane_ParamLimits

0x0e6e,	// (0x0003b017) list_single_midp_pane

0xc827,	// (0x000469d0) form_midp_field_text_pane_t1

0xc67d,	// (0x00046826) input_focus_pane_cp050

0xc848,	// (0x000469f1) list_midp_form_text_pane

0xc7f6,	// (0x0004699f) form_midp_field_choice_group_pane_t1

0xc804,	// (0x000469ad) input_focus_pane_cp051

0xc818,	// (0x000469c1) list_midp_choice_pane

0x7bf1,	// (0x00041d9a) status_idle_pane

0xc7da,	// (0x00046983) form_midp_field_time_pane_t1

0x7b29,	// (0x00041cd2) wait_anim_pane_g2_copy1

0xc7e8,	// (0x00046991) form_midp_field_time_pane_t2

0x0001,

0xc2d8,	// (0x00046481) aid_navinavi_width_2_pane

0xf81e,	// (0x000499c7) form_midp_field_time_pane_t

0x7bf1,	// (0x00041d9a) input_focus_pane_cp052

0x7bf1,	// (0x00041d9a) bg_input_focus_pane_cp040

0xc7b6,	// (0x0004695f) form_midp_gauge_slider_pane_t1

0xc7c4,	// (0x0004696d) form_midp_gauge_slider_pane_t2

0xa314,	// (0x000444bd) form_midp_gauge_slider_pane_t3

0xa322,	// (0x000444cb) form_midp_gauge_slider_pane_t4

0x0003,

0xf815,	// (0x000499be) form_midp_gauge_slider_pane_t

0xc7d2,	// (0x0004697b) form_midp_slider_pane

0x88e9,	// (0x00042a92) bg_input_focus_pane_cp041_ParamLimits

0x88e9,	// (0x00042a92) bg_input_focus_pane_cp041

0xc786,	// (0x0004692f) form_midp_gauge_wait_pane_t1_ParamLimits

0xc786,	// (0x0004692f) form_midp_gauge_wait_pane_t1

0xc798,	// (0x00046941) form_midp_gauge_wait_pane_t2_ParamLimits

0xc798,	// (0x00046941) form_midp_gauge_wait_pane_t2

0x0001,

0xf810,	// (0x000499b9) form_midp_gauge_wait_pane_t_ParamLimits

0xf810,	// (0x000499b9) form_midp_gauge_wait_pane_t

0xc7aa,	// (0x00046953) form_midp_wait_pane_ParamLimits

0xc7aa,	// (0x00046953) form_midp_wait_pane

0xc750,	// (0x000468f9) form_midp_image_pane_g1

0xc759,	// (0x00046902) form_midp_image_pane_t1

0xc768,	// (0x00046911) form_midp_image_pane_t2

0xc777,	// (0x00046920) form_midp_image_pane_t3

0x0002,

0xf809,	// (0x000499b2) form_midp_image_pane_t

0xc747,	// (0x000468f0) list_single_midp_pane_g1

0x7587,	// (0x00041730) list_single_midp_pane_t1

0xc733,	// (0x000468dc) list_midp_form_item_pane_ParamLimits

0xc733,	// (0x000468dc) list_midp_form_item_pane

0xc280,	// (0x00046429) list_midp_form_item_pane_t1

0xc28f,	// (0x00046438) midp_ticker_pane_g1

0xc29b,	// (0x00046444) midp_ticker_pane_g2

0x0001,

0xf75d,	// (0x00049906) midp_ticker_pane_g

0xc2a7,	// (0x00046450) midp_ticker_pane_t1

0xd831,	// (0x000479da) midp_editing_number_pane_t1

0xd8b9,	// (0x00047a62) midp_editing_number_pane

0xd8c5,	// (0x00047a6e) midp_ticker_pane

0xd821,	// (0x000479ca) ai_message_heading_pane

0x7bf1,	// (0x00041d9a) bg_popup_window_pane_cp14

0xd829,	// (0x000479d2) listscroll_ai_message_pane

0xd7ab,	// (0x00047954) ai_message_heading_pane_g1_ParamLimits

0xd7ab,	// (0x00047954) ai_message_heading_pane_g1

0xd7b7,	// (0x00047960) ai_message_heading_pane_g2_ParamLimits

0xd7b7,	// (0x00047960) ai_message_heading_pane_g2

0xd7c3,	// (0x0004796c) ai_message_heading_pane_g3_ParamLimits

0xd7c3,	// (0x0004796c) ai_message_heading_pane_g3

0xd7cf,	// (0x00047978) ai_message_heading_pane_g4_ParamLimits

0xd7cf,	// (0x00047978) ai_message_heading_pane_g4

0x0003,

0xf94a,	// (0x00049af3) ai_message_heading_pane_g_ParamLimits

0xf94a,	// (0x00049af3) ai_message_heading_pane_g

0xd7db,	// (0x00047984) ai_message_heading_pane_t1_ParamLimits

0xd7db,	// (0x00047984) ai_message_heading_pane_t1

0xd7f5,	// (0x0004799e) ai_message_heading_pane_t2_ParamLimits

0xd7f5,	// (0x0004799e) ai_message_heading_pane_t2

0x0001,

0xf953,	// (0x00049afc) ai_message_heading_pane_t_ParamLimits

0xf953,	// (0x00049afc) ai_message_heading_pane_t

0xd807,	// (0x000479b0) bg_popup_heading_pane_cp1_ParamLimits

0xd807,	// (0x000479b0) bg_popup_heading_pane_cp1

0xd799,	// (0x00047942) list_ai_message_pane_ParamLimits

0xd799,	// (0x00047942) list_ai_message_pane

0x9326,	// (0x000434cf) scroll_pane_cp10

0xd735,	// (0x000478de) list_ai_message_pane_g1

0xd73d,	// (0x000478e6) list_ai_message_pane_g2

0x0001,

0xf927,	// (0x00049ad0) list_ai_message_pane_g

0xd745,	// (0x000478ee) list_ai_message_pane_t1_ParamLimits

0xd745,	// (0x000478ee) list_ai_message_pane_t1

0xd75a,	// (0x00047903) list_ai_message_pane_t2_ParamLimits

0xd75a,	// (0x00047903) list_ai_message_pane_t2

0xd76f,	// (0x00047918) list_ai_message_pane_t3_ParamLimits

0xd76f,	// (0x00047918) list_ai_message_pane_t3

0xd784,	// (0x0004792d) list_ai_message_pane_t4_ParamLimits

0xd784,	// (0x0004792d) list_ai_message_pane_t4

0x0003,

0xf92c,	// (0x00049ad5) list_ai_message_pane_t_ParamLimits

0xf92c,	// (0x00049ad5) list_ai_message_pane_t

0xd723,	// (0x000478cc) cell_ai_soft_ind_pane_ParamLimits

0xd723,	// (0x000478cc) cell_ai_soft_ind_pane

0xc2b9,	// (0x00046462) cell_ai_soft_ind_pane_g1_ParamLimits

0xc2b9,	// (0x00046462) cell_ai_soft_ind_pane_g1

0x7bf1,	// (0x00041d9a) grid_highlight_cp1

0xc2c6,	// (0x0004646f) text_secondary_cp56_ParamLimits

0xc2c6,	// (0x0004646f) text_secondary_cp56

0xd6f8,	// (0x000478a1) example_general_pane_ParamLimits

0xd6f8,	// (0x000478a1) example_general_pane

0xd704,	// (0x000478ad) example_parent_pane_g1_ParamLimits

0xd704,	// (0x000478ad) example_parent_pane_g1

0xd710,	// (0x000478b9) example_parent_pane_t1_ParamLimits

0xd710,	// (0x000478b9) example_parent_pane_t1

0x9c3a,	// (0x00043de3) popup_preview_text_window_ParamLimits

0x9c3a,	// (0x00043de3) popup_preview_text_window

0xc1aa,	// (0x00046353) list_single_pane_cp2_g4

0x8ce0,	// (0x00042e89) bg_popup_preview_window_pane_ParamLimits

0x8ce0,	// (0x00042e89) bg_popup_preview_window_pane

0xd4af,	// (0x00047658) popup_preview_text_window_t1_ParamLimits

0xd4af,	// (0x00047658) popup_preview_text_window_t1

0xd4cd,	// (0x00047676) popup_preview_text_window_t2_ParamLimits

0xd4cd,	// (0x00047676) popup_preview_text_window_t2

0xd516,	// (0x000476bf) popup_preview_text_window_t3_ParamLimits

0xd516,	// (0x000476bf) popup_preview_text_window_t3

0xd55b,	// (0x00047704) popup_preview_text_window_t4_ParamLimits

0xd55b,	// (0x00047704) popup_preview_text_window_t4

0x0004,

0xf8fb,	// (0x00049aa4) popup_preview_text_window_t_ParamLimits

0xf8fb,	// (0x00049aa4) popup_preview_text_window_t

0xd5d9,	// (0x00047782) scroll_pane_cp11

0xc5f1,	// (0x0004679a) bg_popup_preview_window_pane_g1

0xd46f,	// (0x00047618) bg_popup_preview_window_pane_g2

0xd477,	// (0x00047620) bg_popup_preview_window_pane_g3

0xd47f,	// (0x00047628) bg_popup_preview_window_pane_g4

0xd487,	// (0x00047630) bg_popup_preview_window_pane_g5

0xd48f,	// (0x00047638) bg_popup_preview_window_pane_g6

0xd497,	// (0x00047640) bg_popup_preview_window_pane_g7

0xd49f,	// (0x00047648) bg_popup_preview_window_pane_g8

0x41ba,	// (0x0003e363) aid_popup_width_pane

0x9bbc,	// (0x00043d65) popup_midp_note_alarm_window_ParamLimits

0x9bbc,	// (0x00043d65) popup_midp_note_alarm_window

0x91bf,	// (0x00043368) data_form_pane_ParamLimits

0x0ce4,	// (0x0003ae8d) form_field_data_pane_g1

0x0cee,	// (0x0003ae97) form_field_data_pane_t1_ParamLimits

0x91cb,	// (0x00043374) input_focus_pane_ParamLimits

0x91d9,	// (0x00043382) data_form_wide_pane_ParamLimits

0x72e4,	// (0x0004148d) form_field_data_wide_pane_g1

0x72f0,	// (0x00041499) form_field_data_wide_pane_t1_ParamLimits

0x8f6c,	// (0x00043115) input_focus_pane_cp6_ParamLimits

0x92d3,	// (0x0004347c) input_popup_find_pane_g1_ParamLimits

0x92d3,	// (0x0004347c) input_popup_find_pane_g1

0x4583,	// (0x0003e72c) aid_navi_side_left_pane

0x4593,	// (0x0003e73c) aid_navi_side_right_pane

0xce05,	// (0x00046fae) bg_popup_window_pane_cp30_ParamLimits

0xce05,	// (0x00046fae) bg_popup_window_pane_cp30

0xce7f,	// (0x00047028) popup_midp_note_alarm_window_g1_ParamLimits

0xce7f,	// (0x00047028) popup_midp_note_alarm_window_g1

0xceaf,	// (0x00047058) popup_midp_note_alarm_window_t1_ParamLimits

0xceaf,	// (0x00047058) popup_midp_note_alarm_window_t1

0xcf50,	// (0x000470f9) popup_midp_note_alarm_window_t2_ParamLimits

0xcf50,	// (0x000470f9) popup_midp_note_alarm_window_t2

0xd185,	// (0x0004732e) popup_midp_note_alarm_window_t3_ParamLimits

0xd185,	// (0x0004732e) popup_midp_note_alarm_window_t3

0xd1ad,	// (0x00047356) popup_midp_note_alarm_window_t4_ParamLimits

0xd1ad,	// (0x00047356) popup_midp_note_alarm_window_t4

0xd1cd,	// (0x00047376) popup_midp_note_alarm_window_t5_ParamLimits

0xd1cd,	// (0x00047376) popup_midp_note_alarm_window_t5

0x000a,

0xf898,	// (0x00049a41) popup_midp_note_alarm_window_t_ParamLimits

0xf898,	// (0x00049a41) popup_midp_note_alarm_window_t

0xd279,	// (0x00047422) wait_bar_pane_cp1_ParamLimits

0xd279,	// (0x00047422) wait_bar_pane_cp1

0x7bf1,	// (0x00041d9a) wait_anim_pane_copy1

0x7bf1,	// (0x00041d9a) wait_border_pane_copy1

0xcb4b,	// (0x00046cf4) wait_border_pane_g1_copy1

0x730a,	// (0x000414b3) form_field_popup_pane_g1

0x0d06,	// (0x0003aeaf) form_field_popup_pane_t1_ParamLimits

0x91cb,	// (0x00043374) input_focus_pane_cp7_ParamLimits

0x91bf,	// (0x00043368) list_form_pane_ParamLimits

0x732a,	// (0x000414d3) form_field_popup_wide_pane_g1

0x7332,	// (0x000414db) form_field_popup_wide_pane_t1_ParamLimits

0x91cb,	// (0x00043374) input_focus_pane_cp8_ParamLimits

0x9205,	// (0x000433ae) list_form_wide_pane_ParamLimits

0xd951,	// (0x00047afa) aid_size_cell_graphic_pane

0x0d83,	// (0x0003af2c) data_form_pane_t1_ParamLimits

0x0e95,	// (0x0003b03e) data_form_wide_pane_t1_ParamLimits

0x9f98,	// (0x00044141) bg_status_flat_pane

0x87da,	// (0x00042983) title_pane_t1_ParamLimits

0x8867,	// (0x00042a10) title_pane_t2_ParamLimits

0x888d,	// (0x00042a36) title_pane_t3_ParamLimits

0xf557,	// (0x00049700) title_pane_t_ParamLimits

0x9517,	// (0x000436c0) level_1_signal_ParamLimits

0x9529,	// (0x000436d2) level_2_signal_ParamLimits

0x953c,	// (0x000436e5) level_3_signal_ParamLimits

0x954f,	// (0x000436f8) level_4_signal_ParamLimits

0x9562,	// (0x0004370b) level_5_signal_ParamLimits

0x9575,	// (0x0004371e) level_6_signal_ParamLimits

0x9588,	// (0x00043731) level_7_signal_ParamLimits

0x9517,	// (0x000436c0) level_1_battery_ParamLimits

0x9529,	// (0x000436d2) level_2_battery_ParamLimits

0x953c,	// (0x000436e5) level_3_battery_ParamLimits

0x954f,	// (0x000436f8) level_4_battery_ParamLimits

0x9562,	// (0x0004370b) level_5_battery_ParamLimits

0x9575,	// (0x0004371e) level_6_battery_ParamLimits

0x9588,	// (0x00043731) level_7_battery_ParamLimits

0xcd34,	// (0x00046edd) bg_status_flat_pane_g1

0xcd3c,	// (0x00046ee5) bg_status_flat_pane_g2

0xcd44,	// (0x00046eed) bg_status_flat_pane_g3

0xcd4c,	// (0x00046ef5) bg_status_flat_pane_g4

0xcd54,	// (0x00046efd) bg_status_flat_pane_g5

0xcd5c,	// (0x00046f05) bg_status_flat_pane_g6

0xcd64,	// (0x00046f0d) bg_status_flat_pane_g7

0x88b5,	// (0x00042a5e) tabs_3_active_pane_t1_ParamLimits

0x88b5,	// (0x00042a5e) tabs_3_passive_pane_t1_ParamLimits

0x88cb,	// (0x00042a74) tabs_4_active_pane_t1_ParamLimits

0x88cb,	// (0x00042a74) tabs_4_1_passive_pane_t1_ParamLimits

0x935d,	// (0x00043506) tabs_2_active_pane_t1_ParamLimits

0x935d,	// (0x00043506) tabs_2_passive_pane_t1_ParamLimits

0x88e9,	// (0x00042a92) bg_active_tab_pane_cp4_ParamLimits

0x9373,	// (0x0004351c) tabs_2_long_active_pane_t1_ParamLimits

0xbafc,	// (0x00045ca5) bg_passive_tab_pane_cp4_ParamLimits

0x4f5d,	// (0x0003f106) list_single_midp_graphic_pane_t1_ParamLimits

0x88e9,	// (0x00042a92) bg_active_tab_pane_cp5_ParamLimits

0x938a,	// (0x00043533) tabs_3_long_active_pane_t1_ParamLimits

0xbafc,	// (0x00045ca5) bg_passive_tab_pane_cp5_ParamLimits

0x4f5d,	// (0x0003f106) list_single_midp_graphic_pane_t1

0x9f98,	// (0x00044141) bg_status_flat_pane_ParamLimits

0xc4d0,	// (0x00046679) indicator_pane_cp2_ParamLimits

0xc4d0,	// (0x00046679) indicator_pane_cp2

0xa0fe,	// (0x000442a7) navi_pane_srt_ParamLimits

0xa0fe,	// (0x000442a7) navi_pane_srt

0xc4f8,	// (0x000466a1) popup_clock_digital_analogue_window_cp1

0x8a45,	// (0x00042bee) indicator_pane_t1

0xc265,	// (0x0004640e) copy_highlight_pane

0xc265,	// (0x0004640e) cursor_graphics_pane

0xc265,	// (0x0004640e) graphic_within_text_pane

0xc265,	// (0x0004640e) link_highlight_pane

0xd59c,	// (0x00047745) popup_preview_text_window_t5_ParamLimits

0xd59c,	// (0x00047745) popup_preview_text_window_t5

0xc2e0,	// (0x00046489) cursor_digital_pane

0xc2e0,	// (0x00046489) cursor_primary_pane

0xc2f1,	// (0x0004649a) cursor_primary_small_pane

0xc2f9,	// (0x000464a2) cursor_secondary_pane

0xc301,	// (0x000464aa) cursor_title_pane

0xc2e0,	// (0x00046489) link_highlight_digital_pane

0xc2e8,	// (0x00046491) link_highlight_primary_pane

0xc2f1,	// (0x0004649a) link_highlight_primary_small_pane

0xc2f9,	// (0x000464a2) link_highlight_secondary_pane

0xc301,	// (0x000464aa) link_highlight_title_pane

0xc2e0,	// (0x00046489) copy_highlight_digital_pane

0xc2e0,	// (0x00046489) copy_highlight_primary_pane

0xc2f1,	// (0x0004649a) copy_highlight_primary_small_pane

0xc2f9,	// (0x000464a2) copy_highlight_secondary_pane

0xc301,	// (0x000464aa) copy_highlight_title_pane

0xc2f9,	// (0x000464a2) graphic_text_digital_pane

0xcdb4,	// (0x00046f5d) graphic_text_primary_pane

0xcdbd,	// (0x00046f66) graphic_text_primary_small_pane

0xc2f1,	// (0x0004649a) graphic_text_secondary_pane

0xc2e0,	// (0x00046489) graphic_text_title_pane

0x973b,	// (0x000438e4) cursor_primary_pane_g1

0xcda6,	// (0x00046f4f) cursor_text_primary_t1

0xa36c,	// (0x00044515) cursor_primary_small_pane_g1

0xcd98,	// (0x00046f41) cursor_text_primary_small_t1

0xa362,	// (0x0004450b) cursor_primary_small_pane_g1_copy1

0xcd8a,	// (0x00046f33) cursor_text_primary_small_t1_copy1

0xcd7c,	// (0x00046f25) cursor_text_title_t1

0xa358,	// (0x00044501) cursor_title_pane_g1

0x973b,	// (0x000438e4) cursor_digital_pane_g1

0xc309,	// (0x000464b2) cursor_text_digital_t1

0xc317,	// (0x000464c0) link_highlight_primary_pane_g1

0xcd25,	// (0x00046ece) link_highlight_primary_pane_t1

0xc317,	// (0x000464c0) link_highlight_primary_small_pane_g1

0xc31f,	// (0x000464c8) link_highlight_primary_small_pane_t1

0xc32e,	// (0x000464d7) link_highlight_secondary_pane_g1

0xc336,	// (0x000464df) link_highlight_secondary_pane_t1

0xcc8a,	// (0x00046e33) link_highlight_title_pane_g1

0xcca1,	// (0x00046e4a) link_highlight_title_pane_t1

0xcc8a,	// (0x00046e33) link_highlight_digital_pane_g1

0xcc92,	// (0x00046e3b) link_highlight_digital_pane_t1

0xcb66,	// (0x00046d0f) copy_highlight_primary_pane_g1

0xcb8c,	// (0x00046d35) copy_highlight_primary_pane_t1

0xcb66,	// (0x00046d0f) copy_highlight_primary_small_pane_g1

0xcb7d,	// (0x00046d26) copy_highlight_primary_small_pane_t1

0xc345,	// (0x000464ee) copy_highlight_secondary_pane_g1

0xc34d,	// (0x000464f6) copy_highlight_secondary_pane_t1

0xcb66,	// (0x00046d0f) copy_highlight_title_pane_g1

0xcb6e,	// (0x00046d17) copy_highlight_title_pane_t1

0xcb66,	// (0x00046d0f) copy_highlight_digital_pane_g1

0xda81,	// (0x00047c2a) copy_highlight_digital_pane_t1

0xd9d5,	// (0x00047b7e) graphic_text_primary_pane_g1

0xda65,	// (0x00047c0e) graphic_text_primary_pane_t1

0xda73,	// (0x00047c1c) graphic_text_primary_pane_t2

0x0001,

0xf9c7,	// (0x00049b70) graphic_text_primary_pane_t

0xda41,	// (0x00047bea) graphic_text_primary_small_pane_g1

0xda49,	// (0x00047bf2) graphic_text_primary_small_pane_t1

0xda57,	// (0x00047c00) graphic_text_primary_small_pane_t2

0x0001,

0xf9c2,	// (0x00049b6b) graphic_text_primary_small_pane_t

0xda1d,	// (0x00047bc6) graphic_text_secondary_pane_g1

0xda25,	// (0x00047bce) graphic_text_secondary_pane_t1

0xda33,	// (0x00047bdc) graphic_text_secondary_pane_t2

0x0001,

0xf9bd,	// (0x00049b66) graphic_text_secondary_pane_t

0xd9f9,	// (0x00047ba2) graphic_text_title_pane_g1

0xda01,	// (0x00047baa) graphic_text_title_pane_t1

0xda0f,	// (0x00047bb8) graphic_text_title_pane_t2

0x0001,

0xf9b8,	// (0x00049b61) graphic_text_title_pane_t

0xd9d5,	// (0x00047b7e) graphic_text_digital_pane_g1

0xd9dd,	// (0x00047b86) graphic_text_digital_pane_t1

0xd9eb,	// (0x00047b94) graphic_text_digital_pane_t2

0x0001,

0xf9b3,	// (0x00049b5c) graphic_text_digital_pane_t

0x88e9,	// (0x00042a92) navi_icon_pane_srt_ParamLimits

0x88e9,	// (0x00042a92) navi_icon_pane_srt

0x7bf1,	// (0x00041d9a) navi_midp_pane_srt

0x7bf1,	// (0x00041d9a) navi_navi_pane_srt

0x88e9,	// (0x00042a92) navi_text_pane_srt_ParamLimits

0x88e9,	// (0x00042a92) navi_text_pane_srt

0xd9a0,	// (0x00047b49) navi_navi_icon_text_pane_srt

0xd9a8,	// (0x00047b51) navi_navi_pane_srt_g1_ParamLimits

0xd9a8,	// (0x00047b51) navi_navi_pane_srt_g1

0xd9ba,	// (0x00047b63) navi_navi_pane_srt_g2_ParamLimits

0xd9ba,	// (0x00047b63) navi_navi_pane_srt_g2

0x0001,

0xf9ae,	// (0x00049b57) navi_navi_pane_srt_g_ParamLimits

0xf9ae,	// (0x00049b57) navi_navi_pane_srt_g

0xd9cc,	// (0x00047b75) navi_navi_tabs_pane_srt

0xd9a0,	// (0x00047b49) navi_navi_text_pane_srt

0xd9a0,	// (0x00047b49) navi_navi_volume_pane_srt

0xd991,	// (0x00047b3a) navi_navi_text_pane_srt_t1

0x52c1,	// (0x0003f46a) navi_navi_volume_pane_srt_g1

0x52c9,	// (0x0003f472) volume_small_pane_srt_ParamLimits

0x52c9,	// (0x0003f472) volume_small_pane_srt

0x482a,	// (0x0003e9d3) volume_small_pane_srt_g1_ParamLimits

0x482a,	// (0x0003e9d3) volume_small_pane_srt_g1

0x483a,	// (0x0003e9e3) volume_small_pane_srt_g2_ParamLimits

0x483a,	// (0x0003e9e3) volume_small_pane_srt_g2

0x484b,	// (0x0003e9f4) volume_small_pane_srt_g3_ParamLimits

0x484b,	// (0x0003e9f4) volume_small_pane_srt_g3

0x485c,	// (0x0003ea05) volume_small_pane_srt_g4_ParamLimits

0x485c,	// (0x0003ea05) volume_small_pane_srt_g4

0x486d,	// (0x0003ea16) volume_small_pane_srt_g5_ParamLimits

0x486d,	// (0x0003ea16) volume_small_pane_srt_g5

0x487e,	// (0x0003ea27) volume_small_pane_srt_g6_ParamLimits

0x487e,	// (0x0003ea27) volume_small_pane_srt_g6

0x488f,	// (0x0003ea38) volume_small_pane_srt_g7_ParamLimits

0x488f,	// (0x0003ea38) volume_small_pane_srt_g7

0x48a0,	// (0x0003ea49) volume_small_pane_srt_g8_ParamLimits

0x48a0,	// (0x0003ea49) volume_small_pane_srt_g8

0x48b1,	// (0x0003ea5a) volume_small_pane_srt_g9_ParamLimits

0x48b1,	// (0x0003ea5a) volume_small_pane_srt_g9

0x48c2,	// (0x0003ea6b) volume_small_pane_srt_g10_ParamLimits

0x48c2,	// (0x0003ea6b) volume_small_pane_srt_g10

0x0009,

0xf762,	// (0x0004990b) volume_small_pane_srt_g_ParamLimits

0xf762,	// (0x0004990b) volume_small_pane_srt_g

0x8d89,	// (0x00042f32) query_popup_data_pane_cp2

0xd977,	// (0x00047b20) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xd977,	// (0x00047b20) navi_navi_icon_text_pane_srt_t1

0xcdb4,	// (0x00046f5d) navi_tabs_2_long_pane_srt

0xcdb4,	// (0x00046f5d) navi_tabs_2_pane_srt

0xcdb4,	// (0x00046f5d) navi_tabs_3_long_pane_srt

0xcdb4,	// (0x00046f5d) navi_tabs_3_pane_srt

0xcdb4,	// (0x00046f5d) navi_tabs_4_pane_srt

0x52a1,	// (0x0003f44a) tabs_2_active_pane_srt_ParamLimits

0x52a1,	// (0x0003f44a) tabs_2_active_pane_srt

0x52b1,	// (0x0003f45a) tabs_2_passive_pane_srt_ParamLimits

0x52b1,	// (0x0003f45a) tabs_2_passive_pane_srt

0xc67d,	// (0x00046826) bg_passive_tab_pane_cp1_srt_ParamLimits

0xc67d,	// (0x00046826) bg_passive_tab_pane_cp1_srt

0xd167,	// (0x00047310) bg_passive_tab_pane_g1_cp1_srt

0xbf6f,	// (0x00046118) bg_passive_tab_pane_g2_cp1_srt

0xd170,	// (0x00047319) bg_passive_tab_pane_g3_cp1_srt

0x889f,	// (0x00042a48) bg_active_tab_pane_cp1_srt_ParamLimits

0x889f,	// (0x00042a48) bg_active_tab_pane_cp1_srt

0xd15f,	// (0x00047308) tabs_2_active_pane_srt_g1

0x935d,	// (0x00043506) tabs_2_active_pane_srt_t1_ParamLimits

0x935d,	// (0x00043506) tabs_2_active_pane_srt_t1

0xd167,	// (0x00047310) bg_active_tab_pane_g1_cp1_srt

0xbf6f,	// (0x00046118) bg_active_tab_pane_g2_cp1_srt

0xd170,	// (0x00047319) bg_active_tab_pane_g3_cp1_srt

0x526e,	// (0x0003f417) tabs_3_active_pane_srt_ParamLimits

0x526e,	// (0x0003f417) tabs_3_active_pane_srt

0x527f,	// (0x0003f428) tabs_3_passive_pane_cp_srt_ParamLimits

0x527f,	// (0x0003f428) tabs_3_passive_pane_cp_srt

0x5290,	// (0x0003f439) tabs_3_passive_pane_srt_ParamLimits

0x5290,	// (0x0003f439) tabs_3_passive_pane_srt

0xc67d,	// (0x00046826) bg_passive_tab_pane_cp2_srt_ParamLimits

0xc67d,	// (0x00046826) bg_passive_tab_pane_cp2_srt

0xc35c,	// (0x00046505) bg_passive_tab_pane_g1_cp2_srt

0xbf6f,	// (0x00046118) bg_passive_tab_pane_g2_cp2_srt

0xc365,	// (0x0004650e) bg_passive_tab_pane_g3_cp2_srt

0x889f,	// (0x00042a48) bg_active_tab_pane_cp2_srt_ParamLimits

0x889f,	// (0x00042a48) bg_active_tab_pane_cp2_srt

0xd967,	// (0x00047b10) tabs_3_active_pane_srt_g1

0x88b5,	// (0x00042a5e) tabs_3_active_pane_srt_t1_ParamLimits

0x88b5,	// (0x00042a5e) tabs_3_active_pane_srt_t1

0xc35c,	// (0x00046505) bg_active_tab_pane_g1_cp2_srt

0xbf6f,	// (0x00046118) bg_active_tab_pane_g2_cp2_srt

0xc365,	// (0x0004650e) bg_active_tab_pane_g3_cp2_srt

0x5226,	// (0x0003f3cf) tabs_4_active_pane_srt_ParamLimits

0x5226,	// (0x0003f3cf) tabs_4_active_pane_srt

0x5238,	// (0x0003f3e1) tabs_4_passive_pane_cp2_srt_ParamLimits

0x5238,	// (0x0003f3e1) tabs_4_passive_pane_cp2_srt

0x4a27,	// (0x0003ebd0) aid_size_cell_toolbar

0x992c,	// (0x00043ad5) main_idle_act_pane_ParamLimits

0x4b96,	// (0x0003ed3f) popup_large_graphic_colour_window_ParamLimits

0x9e8a,	// (0x00044033) popup_toolbar_window_ParamLimits

0x9e8a,	// (0x00044033) popup_toolbar_window

0xd00a,	// (0x000471b3) list_single_graphic_2heading_pane_ParamLimits

0xd00a,	// (0x000471b3) list_single_graphic_2heading_pane

0xbc0c,	// (0x00045db5) aid_size_cell_apps_grid_lsc_pane

0xbc1e,	// (0x00045dc7) aid_size_cell_apps_grid_prt_pane

0xbafc,	// (0x00045ca5) bg_wml_button_pane_cp1_ParamLimits

0xbafc,	// (0x00045ca5) bg_wml_button_pane_cp1

0xc827,	// (0x000469d0) form_midp_field_text_pane_t1_ParamLimits

0xc67d,	// (0x00046826) input_focus_pane_cp050_ParamLimits

0xc848,	// (0x000469f1) list_midp_form_text_pane_ParamLimits

0xc804,	// (0x000469ad) input_focus_pane_cp051_ParamLimits

0xc818,	// (0x000469c1) list_midp_choice_pane_ParamLimits

0xc701,	// (0x000468aa) list_single_2graphic_pane_cp3_ParamLimits

0xc701,	// (0x000468aa) list_single_2graphic_pane_cp3

0xc714,	// (0x000468bd) list_single_midp_graphic_pane_ParamLimits

0xc714,	// (0x000468bd) list_single_midp_graphic_pane

0x4148,	// (0x0003e2f1) list_single_graphic_2heading_pane_g1_ParamLimits

0x4148,	// (0x0003e2f1) list_single_graphic_2heading_pane_g1

0x4154,	// (0x0003e2fd) list_single_graphic_2heading_pane_g4_ParamLimits

0x4154,	// (0x0003e2fd) list_single_graphic_2heading_pane_g4

0x4160,	// (0x0003e309) list_single_graphic_2heading_pane_g5_ParamLimits

0x4160,	// (0x0003e309) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b5,	// (0x0004995e) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b5,	// (0x0004995e) list_single_graphic_2heading_pane_g

0x416c,	// (0x0003e315) list_single_graphic_2heading_pane_t1_ParamLimits

0x416c,	// (0x0003e315) list_single_graphic_2heading_pane_t1

0x4180,	// (0x0003e329) list_single_graphic_2heading_pane_t2_ParamLimits

0x4180,	// (0x0003e329) list_single_graphic_2heading_pane_t2

0x419a,	// (0x0003e343) list_single_graphic_2heading_pane_t3_ParamLimits

0x419a,	// (0x0003e343) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bc,	// (0x00049965) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bc,	// (0x00049965) list_single_graphic_2heading_pane_t

0xc53b,	// (0x000466e4) bg_popup_sub_pane_cp2

0xc561,	// (0x0004670a) grid_toobar_pane

0x4ed9,	// (0x0003f082) cell_toolbar_pane_ParamLimits

0x4ed9,	// (0x0003f082) cell_toolbar_pane

0xc597,	// (0x00046740) cell_toolbar_pane_g1_ParamLimits

0xc597,	// (0x00046740) cell_toolbar_pane_g1

0xc5a9,	// (0x00046752) cell_toolbar_pane_g2_ParamLimits

0xc5a9,	// (0x00046752) cell_toolbar_pane_g2

0x0001,

0xf7c3,	// (0x0004996c) cell_toolbar_pane_g_ParamLimits

0xf7c3,	// (0x0004996c) cell_toolbar_pane_g

0xc5cb,	// (0x00046774) grid_highlight_pane_cp2_ParamLimits

0xc5cb,	// (0x00046774) grid_highlight_pane_cp2

0xc5e5,	// (0x0004678e) toolbar_button_pane

0xc5f1,	// (0x0004679a) toolbar_button_pane_g1

0xc5f9,	// (0x000467a2) toolbar_button_pane_g2

0xc601,	// (0x000467aa) toolbar_button_pane_g3

0xc609,	// (0x000467b2) toolbar_button_pane_g4

0xc611,	// (0x000467ba) toolbar_button_pane_g5

0xc619,	// (0x000467c2) toolbar_button_pane_g6

0xc621,	// (0x000467ca) toolbar_button_pane_g7

0xc629,	// (0x000467d2) toolbar_button_pane_g8

0xc631,	// (0x000467da) toolbar_button_pane_g9

0x0009,

0xf7c8,	// (0x00049971) toolbar_button_pane_g

0x4f08,	// (0x0003f0b1) list_single_2graphic_pane_g1_cp3_ParamLimits

0x4f08,	// (0x0003f0b1) list_single_2graphic_pane_g1_cp3

0xa27c,	// (0x00044425) list_single_2graphic_pane_g2_cp3_ParamLimits

0xa27c,	// (0x00044425) list_single_2graphic_pane_g2_cp3

0x4f23,	// (0x0003f0cc) list_single_2graphic_pane_g3_cp3

0x4f2b,	// (0x0003f0d4) list_single_2graphic_pane_g4_cp3_ParamLimits

0x4f2b,	// (0x0003f0d4) list_single_2graphic_pane_g4_cp3

0x4f37,	// (0x0003f0e0) list_single_2graphic_pane_t1_cp3_ParamLimits

0x4f37,	// (0x0003f0e0) list_single_2graphic_pane_t1_cp3

0x4f51,	// (0x0003f0fa) list_single_midp_graphic_pane_g2_ParamLimits

0x4f51,	// (0x0003f0fa) list_single_midp_graphic_pane_g2

0x4140,	// (0x0003e2e9) aid_zoom_text_primary

0x4a2f,	// (0x0003ebd8) aid_zoom_text_secondary

0x9775,	// (0x0004391e) status_small_pane_g7_ParamLimits

0x9775,	// (0x0004391e) status_small_pane_g7

0x9798,	// (0x00043941) status_small_pane_t1_ParamLimits

0x87a3,	// (0x0004294c) title_pane_g2

0x0003,

0xf54e,	// (0x000496f7) title_pane_g

0x8e28,	// (0x00042fd1) aid_size_cell_colour_1_pane_ParamLimits

0x8e28,	// (0x00042fd1) aid_size_cell_colour_1_pane

0x8e3c,	// (0x00042fe5) aid_size_cell_colour_2_pane_ParamLimits

0x8e3c,	// (0x00042fe5) aid_size_cell_colour_2_pane

0x8e50,	// (0x00042ff9) aid_size_cell_colour_3_pane_ParamLimits

0x8e50,	// (0x00042ff9) aid_size_cell_colour_3_pane

0x8e64,	// (0x0004300d) aid_size_cell_colour_4_pane_ParamLimits

0x8e64,	// (0x0004300d) aid_size_cell_colour_4_pane

0x44e5,	// (0x0003e68e) title_pane_stacon_g1_ParamLimits

0x44e5,	// (0x0003e68e) title_pane_stacon_g1

0xcbe3,	// (0x00046d8c) popup_note_wait_window_g3_ParamLimits

0xcbe3,	// (0x00046d8c) popup_note_wait_window_g3

0xcc59,	// (0x00046e02) popup_note_wait_window_t5_ParamLimits

0xcc59,	// (0x00046e02) popup_note_wait_window_t5

0x7bf1,	// (0x00041d9a) main_feb_china_hwr_fs_writing_pane

0x998d,	// (0x00043b36) popup_feb_china_hwr_fs_window_ParamLimits

0x998d,	// (0x00043b36) popup_feb_china_hwr_fs_window

0xa28d,	// (0x00044436) aid_size_cell_hwr_fs_ParamLimits

0xa28d,	// (0x00044436) aid_size_cell_hwr_fs

0xc67d,	// (0x00046826) bg_popup_sub_pane_cp3_ParamLimits

0xc67d,	// (0x00046826) bg_popup_sub_pane_cp3

0xa2a2,	// (0x0004444b) grid_hwr_fs_pane_ParamLimits

0xa2a2,	// (0x0004444b) grid_hwr_fs_pane

0x4f9c,	// (0x0003f145) linegrid_hwr_fs_pane_ParamLimits

0x4f9c,	// (0x0003f145) linegrid_hwr_fs_pane

0xa2ba,	// (0x00044463) cell_hwr_fs_pane_ParamLimits

0xa2ba,	// (0x00044463) cell_hwr_fs_pane

0xc689,	// (0x00046832) linegrid_hwr_fs_pane_g1_ParamLimits

0xc689,	// (0x00046832) linegrid_hwr_fs_pane_g1

0xa2da,	// (0x00044483) linegrid_hwr_fs_pane_g2_ParamLimits

0xa2da,	// (0x00044483) linegrid_hwr_fs_pane_g2

0xc695,	// (0x0004683e) linegrid_hwr_fs_pane_g3_ParamLimits

0xc695,	// (0x0004683e) linegrid_hwr_fs_pane_g3

0x4fca,	// (0x0003f173) linegrid_hwr_fs_pane_g4_ParamLimits

0x4fca,	// (0x0003f173) linegrid_hwr_fs_pane_g4

0x4fe4,	// (0x0003f18d) linegrid_hwr_fs_pane_g5_ParamLimits

0x4fe4,	// (0x0003f18d) linegrid_hwr_fs_pane_g5

0x0004,

0xf7ee,	// (0x00049997) linegrid_hwr_fs_pane_g_ParamLimits

0xf7ee,	// (0x00049997) linegrid_hwr_fs_pane_g

0xc6a1,	// (0x0004684a) cell_hwr_fs_pane_g1_ParamLimits

0xc6a1,	// (0x0004684a) cell_hwr_fs_pane_g1

0xc509,	// (0x000466b2) cell_hwr_fs_pane_g2_ParamLimits

0xc509,	// (0x000466b2) cell_hwr_fs_pane_g2

0xa2ec,	// (0x00044495) cell_hwr_fs_pane_g3_ParamLimits

0xa2ec,	// (0x00044495) cell_hwr_fs_pane_g3

0xa2f9,	// (0x000444a2) cell_hwr_fs_pane_g4_ParamLimits

0xa2f9,	// (0x000444a2) cell_hwr_fs_pane_g4

0x0003,

0xf7f9,	// (0x000499a2) cell_hwr_fs_pane_g_ParamLimits

0xf7f9,	// (0x000499a2) cell_hwr_fs_pane_g

0xa306,	// (0x000444af) cell_hwr_fs_pane_t1

0x7bf1,	// (0x00041d9a) grid_highlight_pane_cp6

0x7bf1,	// (0x00041d9a) main_idle_act2_pane

0x930d,	// (0x000434b6) aid_inside_area_popup_secondary

0xa479,	// (0x00044622) aid_inside_area_window_primary_ParamLimits

0xa479,	// (0x00044622) aid_inside_area_window_primary

0xda90,	// (0x00047c39) ai2_news_ticker_pane

0xda98,	// (0x00047c41) aid_size_cell_ai1_link_ParamLimits

0xda98,	// (0x00047c41) aid_size_cell_ai1_link

0xa870,	// (0x00044a19) popup_ai2_data_window_ParamLimits

0xa870,	// (0x00044a19) popup_ai2_data_window

0xdab2,	// (0x00047c5b) popup_ai2_link_window_ParamLimits

0xdab2,	// (0x00047c5b) popup_ai2_link_window

0xc67d,	// (0x00046826) bg_popup_sub_pane_cp4_ParamLimits

0xc67d,	// (0x00046826) bg_popup_sub_pane_cp4

0xdac6,	// (0x00047c6f) grid_ai2_link_pane_ParamLimits

0xdac6,	// (0x00047c6f) grid_ai2_link_pane

0xdadd,	// (0x00047c86) popup_ai2_link_window_g1_ParamLimits

0xdadd,	// (0x00047c86) popup_ai2_link_window_g1

0xdae9,	// (0x00047c92) popup_ai2_link_window_g2_ParamLimits

0xdae9,	// (0x00047c92) popup_ai2_link_window_g2

0x0001,

0xf9cc,	// (0x00049b75) popup_ai2_link_window_g_ParamLimits

0xf9cc,	// (0x00049b75) popup_ai2_link_window_g

0xdaf8,	// (0x00047ca1) ai2_mp_button_pane

0xdb00,	// (0x00047ca9) ai2_mp_volume_pane

0xc804,	// (0x000469ad) bg_popup_sub_pane_cp5_ParamLimits

0xc804,	// (0x000469ad) bg_popup_sub_pane_cp5

0xdb08,	// (0x00047cb1) heading_ai2_gene_pane_ParamLimits

0xdb08,	// (0x00047cb1) heading_ai2_gene_pane

0xdb14,	// (0x00047cbd) list_ai2_gene_pane_ParamLimits

0xdb14,	// (0x00047cbd) list_ai2_gene_pane

0xdb5c,	// (0x00047d05) cell_ai2_link_pane_ParamLimits

0xdb5c,	// (0x00047d05) cell_ai2_link_pane

0xdb72,	// (0x00047d1b) cell_ai2_link_pane_g1

0x7bf1,	// (0x00041d9a) grid_highlight_pane_cp7

0x52de,	// (0x0003f487) ai2_mp_volume_pane_g1

0xdc07,	// (0x00047db0) ai2_mp_volume_pane_g2

0xa89a,	// (0x00044a43) list_ai2_gene_pane_t1

0xdc0f,	// (0x00047db8) ai2_mp_volume_pane_g3

0x0002,

0xf9e5,	// (0x00049b8e) ai2_mp_volume_pane_g

0x52e6,	// (0x0003f48f) volume_small_pane_cp3

0xdc17,	// (0x00047dc0) aid_size_cell_ai2_button

0xdc1f,	// (0x00047dc8) grid_ai2_button_pane

0xdc28,	// (0x00047dd1) cell_ai2_button_pane_ParamLimits

0xdc28,	// (0x00047dd1) cell_ai2_button_pane

0x7b29,	// (0x00041cd2) cell_ai2_button_pane_g1

0x7bf1,	// (0x00041d9a) grid_highlight_pane_cp8

0xdbc7,	// (0x00047d70) ai2_gene_pane_t1_ParamLimits

0xdbc7,	// (0x00047d70) ai2_gene_pane_t1

0x9914,	// (0x00043abd) aid_height_parent_landscape

0xa631,	// (0x000447da) aid_height_set_list

0xd87d,	// (0x00047a26) aid_size_parent

0xd951,	// (0x00047afa) aid_size_cell_graphic_pane_ParamLimits

0xdb24,	// (0x00047ccd) popup_ai2_data_window_g1_ParamLimits

0xdb24,	// (0x00047ccd) popup_ai2_data_window_g1

0xdb30,	// (0x00047cd9) ai2_news_ticker_pane_g1

0xdb38,	// (0x00047ce1) ai2_news_ticker_pane_g2

0x0001,

0xf9d1,	// (0x00049b7a) ai2_news_ticker_pane_g

0xdb40,	// (0x00047ce9) ai2_news_ticker_pane_t1

0xdb4e,	// (0x00047cf7) ai2_news_ticker_pane_t2

0x0001,

0xf9d6,	// (0x00049b7f) ai2_news_ticker_pane_t

0xd932,	// (0x00047adb) heading_ai2_gene_pane_g1

0xdb7b,	// (0x00047d24) heading_ai2_gene_pane_t1_ParamLimits

0xdb7b,	// (0x00047d24) heading_ai2_gene_pane_t1

0xdb90,	// (0x00047d39) list_highlight_pane_cp6

0xa884,	// (0x00044a2d) ai2_gene_pane_ParamLimits

0xa884,	// (0x00044a2d) ai2_gene_pane

0xa8a8,	// (0x00044a51) list_ai2_gene_pane_t2

0x0001,

0xf9db,	// (0x00049b84) list_ai2_gene_pane_t

0xdb98,	// (0x00047d41) list_highlight_pane_cp8_ParamLimits

0xdb98,	// (0x00047d41) list_highlight_pane_cp8

0xdba9,	// (0x00047d52) ai2_gene_pane_g1_ParamLimits

0xdba9,	// (0x00047d52) ai2_gene_pane_g1

0xdbbb,	// (0x00047d64) ai2_gene_pane_g2_ParamLimits

0xdbbb,	// (0x00047d64) ai2_gene_pane_g2

0x0001,

0xf9e0,	// (0x00049b89) ai2_gene_pane_g_ParamLimits

0xf9e0,	// (0x00049b89) ai2_gene_pane_g

0x90f5,	// (0x0004329e) scroll_pane_cp12

0x98d3,	// (0x00043a7c) control_pane_t3_ParamLimits

0x98d3,	// (0x00043a7c) control_pane_t3

0x9789,	// (0x00043932) status_small_pane_g8_ParamLimits

0x9789,	// (0x00043932) status_small_pane_g8

0x9a01,	// (0x00043baa) popup_find_window_ParamLimits

0x9bf4,	// (0x00043d9d) popup_note_image_window_ParamLimits

0x6f47,	// (0x000410f0) list_double2_graphic_pane_vc_g1_ParamLimits

0x6f47,	// (0x000410f0) list_double2_graphic_pane_vc_g1

0x9106,	// (0x000432af) list_double2_graphic_pane_vc_g2_ParamLimits

0x9106,	// (0x000432af) list_double2_graphic_pane_vc_g2

0x9112,	// (0x000432bb) list_double2_graphic_pane_vc_g3_ParamLimits

0x9112,	// (0x000432bb) list_double2_graphic_pane_vc_g3

0x0002,

0xf5c1,	// (0x0004976a) list_double2_graphic_pane_vc_g_ParamLimits

0xf5c1,	// (0x0004976a) list_double2_graphic_pane_vc_g

0x6f1f,	// (0x000410c8) list_double2_graphic_pane_vc_t1_ParamLimits

0x6f1f,	// (0x000410c8) list_double2_graphic_pane_vc_t1

0x9106,	// (0x000432af) list_single_heading_pane_vc_g1_ParamLimits

0x9106,	// (0x000432af) list_single_heading_pane_vc_g1

0x9112,	// (0x000432bb) list_single_heading_pane_vc_g2_ParamLimits

0x9112,	// (0x000432bb) list_single_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x0004977b) list_single_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x0004977b) list_single_heading_pane_vc_g

0x74fd,	// (0x000416a6) list_single_heading_pane_vc_t1_ParamLimits

0x74fd,	// (0x000416a6) list_single_heading_pane_vc_t1

0x7513,	// (0x000416bc) list_single_heading_pane_vc_t2_ParamLimits

0x7513,	// (0x000416bc) list_single_heading_pane_vc_t2

0x0001,

0xf7dd,	// (0x00049986) list_single_heading_pane_vc_t_ParamLimits

0xf7dd,	// (0x00049986) list_single_heading_pane_vc_t

0xc639,	// (0x000467e2) list_setting_number_pane_vc_g1_ParamLimits

0xc639,	// (0x000467e2) list_setting_number_pane_vc_g1

0xc645,	// (0x000467ee) list_setting_number_pane_vc_g2_ParamLimits

0xc645,	// (0x000467ee) list_setting_number_pane_vc_g2

0x0001,

0xf7e2,	// (0x0004998b) list_setting_number_pane_vc_g_ParamLimits

0xf7e2,	// (0x0004998b) list_setting_number_pane_vc_g

0x7525,	// (0x000416ce) list_setting_number_pane_vc_t1_ParamLimits

0x7525,	// (0x000416ce) list_setting_number_pane_vc_t1

0x7539,	// (0x000416e2) list_setting_number_pane_vc_t2_ParamLimits

0x7539,	// (0x000416e2) list_setting_number_pane_vc_t2

0x7555,	// (0x000416fe) list_setting_number_pane_vc_t3_ParamLimits

0x7555,	// (0x000416fe) list_setting_number_pane_vc_t3

0x0002,

0xf7e7,	// (0x00049990) list_setting_number_pane_vc_t_ParamLimits

0xf7e7,	// (0x00049990) list_setting_number_pane_vc_t

0x757b,	// (0x00041724) set_value_pane_vc_ParamLimits

0x757b,	// (0x00041724) set_value_pane_vc

0xd00a,	// (0x000471b3) list_double2_graphic_pane_vc_ParamLimits

0xd00a,	// (0x000471b3) list_double2_graphic_pane_vc

0xd8d8,	// (0x00047a81) list_double2_large_graphic_pane_vc_ParamLimits

0xd8d8,	// (0x00047a81) list_double2_large_graphic_pane_vc

0xd00a,	// (0x000471b3) list_double2_pane_vc_ParamLimits

0xd00a,	// (0x000471b3) list_double2_pane_vc

0xd00a,	// (0x000471b3) list_double_graphic_heading_pane_vc_ParamLimits

0xd00a,	// (0x000471b3) list_double_graphic_heading_pane_vc

0xd00a,	// (0x000471b3) list_double_graphic_pane_vc_ParamLimits

0xd00a,	// (0x000471b3) list_double_graphic_pane_vc

0xd00a,	// (0x000471b3) list_double_heading_pane_vc_ParamLimits

0xd00a,	// (0x000471b3) list_double_heading_pane_vc

0xd01d,	// (0x000471c6) list_double_large_graphic_pane_vc_ParamLimits

0xd01d,	// (0x000471c6) list_double_large_graphic_pane_vc

0xd00a,	// (0x000471b3) list_double_number_pane_vc_ParamLimits

0xd00a,	// (0x000471b3) list_double_number_pane_vc

0xd00a,	// (0x000471b3) list_double_pane_vc_ParamLimits

0xd00a,	// (0x000471b3) list_double_pane_vc

0xd00a,	// (0x000471b3) list_double_time_pane_vc_ParamLimits

0xd00a,	// (0x000471b3) list_double_time_pane_vc

0xd00a,	// (0x000471b3) list_setting_number_pane_vc_ParamLimits

0xd00a,	// (0x000471b3) list_setting_number_pane_vc

0xd00a,	// (0x000471b3) list_setting_pane_vc_ParamLimits

0xd00a,	// (0x000471b3) list_setting_pane_vc

0xd00a,	// (0x000471b3) list_single_graphic_heading_pane_vc_ParamLimits

0xd00a,	// (0x000471b3) list_single_graphic_heading_pane_vc

0xd00a,	// (0x000471b3) list_single_heading_pane_vc_ParamLimits

0xd00a,	// (0x000471b3) list_single_heading_pane_vc

0xd00a,	// (0x000471b3) list_single_number_heading_pane_vc_ParamLimits

0xd00a,	// (0x000471b3) list_single_number_heading_pane_vc

0x6f47,	// (0x000410f0) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x6f47,	// (0x000410f0) list_double_graphic_heading_pane_vc_g1

0x9106,	// (0x000432af) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x9106,	// (0x000432af) list_double_graphic_heading_pane_vc_g2

0x9112,	// (0x000432bb) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x9112,	// (0x000432bb) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf5c1,	// (0x0004976a) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf5c1,	// (0x0004976a) list_double_graphic_heading_pane_vc_g

0x7655,	// (0x000417fe) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x7655,	// (0x000417fe) list_double_graphic_heading_pane_vc_t1

0x766b,	// (0x00041814) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x766b,	// (0x00041814) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9ec,	// (0x00049b95) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9ec,	// (0x00049b95) list_double_graphic_heading_pane_vc_t

0xc639,	// (0x000467e2) list_setting_pane_vc_g1_ParamLimits

0xc639,	// (0x000467e2) list_setting_pane_vc_g1

0xc645,	// (0x000467ee) list_setting_pane_vc_g2_ParamLimits

0xc645,	// (0x000467ee) list_setting_pane_vc_g2

0x0001,

0xf7e2,	// (0x0004998b) list_setting_pane_vc_g_ParamLimits

0xf7e2,	// (0x0004998b) list_setting_pane_vc_g

0x7683,	// (0x0004182c) list_setting_pane_vc_t1_ParamLimits

0x7683,	// (0x0004182c) list_setting_pane_vc_t1

0x7697,	// (0x00041840) list_setting_pane_vc_t2_ParamLimits

0x7697,	// (0x00041840) list_setting_pane_vc_t2

0x0001,

0xfa2f,	// (0x00049bd8) list_setting_pane_vc_t_ParamLimits

0xfa2f,	// (0x00049bd8) list_setting_pane_vc_t

0x757b,	// (0x00041724) set_value_pane_cp_vc_ParamLimits

0x757b,	// (0x00041724) set_value_pane_cp_vc

0x9106,	// (0x000432af) list_single_number_heading_pane_vc_g1_ParamLimits

0x9106,	// (0x000432af) list_single_number_heading_pane_vc_g1

0x9112,	// (0x000432bb) list_single_number_heading_pane_vc_g2_ParamLimits

0x9112,	// (0x000432bb) list_single_number_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x0004977b) list_single_number_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x0004977b) list_single_number_heading_pane_vc_g

0x74fd,	// (0x000416a6) list_single_number_heading_pane_vc_t1_ParamLimits

0x74fd,	// (0x000416a6) list_single_number_heading_pane_vc_t1

0x76ab,	// (0x00041854) list_single_number_heading_pane_vc_t2_ParamLimits

0x76ab,	// (0x00041854) list_single_number_heading_pane_vc_t2

0x76bd,	// (0x00041866) list_single_number_heading_pane_vc_t3_ParamLimits

0x76bd,	// (0x00041866) list_single_number_heading_pane_vc_t3

0x0002,

0xfa34,	// (0x00049bdd) list_single_number_heading_pane_vc_t_ParamLimits

0xfa34,	// (0x00049bdd) list_single_number_heading_pane_vc_t

0x6f47,	// (0x000410f0) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x6f47,	// (0x000410f0) list_single_graphic_heading_pane_vc_g1

0x9106,	// (0x000432af) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x9106,	// (0x000432af) list_single_graphic_heading_pane_vc_g4

0x9112,	// (0x000432bb) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x9112,	// (0x000432bb) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf5c1,	// (0x0004976a) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf5c1,	// (0x0004976a) list_single_graphic_heading_pane_vc_g

0x74fd,	// (0x000416a6) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x74fd,	// (0x000416a6) list_single_graphic_heading_pane_vc_t1

0x76cf,	// (0x00041878) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x76cf,	// (0x00041878) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa3b,	// (0x00049be4) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa3b,	// (0x00049be4) list_single_graphic_heading_pane_vc_t

0x9106,	// (0x000432af) list_double2_pane_vc_g1_ParamLimits

0x9106,	// (0x000432af) list_double2_pane_vc_g1

0x9112,	// (0x000432bb) list_double2_pane_vc_g2_ParamLimits

0x9112,	// (0x000432bb) list_double2_pane_vc_g2

0x0001,

0xf5d2,	// (0x0004977b) list_double2_pane_vc_g_ParamLimits

0xf5d2,	// (0x0004977b) list_double2_pane_vc_g

0x6ea2,	// (0x0004104b) list_double2_pane_vc_t1_ParamLimits

0x6ea2,	// (0x0004104b) list_double2_pane_vc_t1

0x911e,	// (0x000432c7) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x911e,	// (0x000432c7) list_double2_large_graphic_pane_vc_g1

0x912a,	// (0x000432d3) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x912a,	// (0x000432d3) list_double2_large_graphic_pane_vc_g2

0x9136,	// (0x000432df) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x9136,	// (0x000432df) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5ea,	// (0x00049793) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5ea,	// (0x00049793) list_double2_large_graphic_pane_vc_g

0x6e8c,	// (0x00041035) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x6e8c,	// (0x00041035) list_double2_large_graphic_pane_vc_t1

0xd039,	// (0x000471e2) list_double_time_pane_vc_g1_ParamLimits

0xd039,	// (0x000471e2) list_double_time_pane_vc_g1

0xd045,	// (0x000471ee) list_double_time_pane_vc_g2_ParamLimits

0xd045,	// (0x000471ee) list_double_time_pane_vc_g2

0x0001,

0xfa40,	// (0x00049be9) list_double_time_pane_vc_g_ParamLimits

0xfa40,	// (0x00049be9) list_double_time_pane_vc_g

0x76e1,	// (0x0004188a) list_double_time_pane_vc_t1_ParamLimits

0x76e1,	// (0x0004188a) list_double_time_pane_vc_t1

0x76ff,	// (0x000418a8) list_double_time_pane_vc_t2_ParamLimits

0x76ff,	// (0x000418a8) list_double_time_pane_vc_t2

0x7743,	// (0x000418ec) list_double_time_pane_vc_t3_ParamLimits

0x7743,	// (0x000418ec) list_double_time_pane_vc_t3

0x7755,	// (0x000418fe) list_double_time_pane_vc_t4_ParamLimits

0x7755,	// (0x000418fe) list_double_time_pane_vc_t4

0x0003,

0xfa45,	// (0x00049bee) list_double_time_pane_vc_t_ParamLimits

0xfa45,	// (0x00049bee) list_double_time_pane_vc_t

0x9106,	// (0x000432af) list_double_pane_vc_g1_ParamLimits

0x9106,	// (0x000432af) list_double_pane_vc_g1

0x9112,	// (0x000432bb) list_double_pane_vc_g2_ParamLimits

0x9112,	// (0x000432bb) list_double_pane_vc_g2

0x0001,

0xf5d2,	// (0x0004977b) list_double_pane_vc_g_ParamLimits

0xf5d2,	// (0x0004977b) list_double_pane_vc_g

0x7767,	// (0x00041910) list_double_pane_vc_t1_ParamLimits

0x7767,	// (0x00041910) list_double_pane_vc_t1

0x7779,	// (0x00041922) list_double_pane_vc_t2_ParamLimits

0x7779,	// (0x00041922) list_double_pane_vc_t2

0x0001,

0xfa4e,	// (0x00049bf7) list_double_pane_vc_t_ParamLimits

0xfa4e,	// (0x00049bf7) list_double_pane_vc_t

0x9106,	// (0x000432af) list_double_number_pane_vc_g1_ParamLimits

0x9106,	// (0x000432af) list_double_number_pane_vc_g1

0x9112,	// (0x000432bb) list_double_number_pane_vc_g2_ParamLimits

0x9112,	// (0x000432bb) list_double_number_pane_vc_g2

0x0001,

0xf5d2,	// (0x0004977b) list_double_number_pane_vc_g_ParamLimits

0xf5d2,	// (0x0004977b) list_double_number_pane_vc_g

0x778f,	// (0x00041938) list_double_number_pane_vc_t1_ParamLimits

0x778f,	// (0x00041938) list_double_number_pane_vc_t1

0x77a3,	// (0x0004194c) list_double_number_pane_vc_t2_ParamLimits

0x77a3,	// (0x0004194c) list_double_number_pane_vc_t2

0x77b5,	// (0x0004195e) list_double_number_pane_vc_t3_ParamLimits

0x77b5,	// (0x0004195e) list_double_number_pane_vc_t3

0x0002,

0xfa53,	// (0x00049bfc) list_double_number_pane_vc_t_ParamLimits

0xfa53,	// (0x00049bfc) list_double_number_pane_vc_t

0xd051,	// (0x000471fa) list_double_large_graphic_pane_vc_g1_ParamLimits

0xd051,	// (0x000471fa) list_double_large_graphic_pane_vc_g1

0xd079,	// (0x00047222) list_double_large_graphic_pane_vc_g2_ParamLimits

0xd079,	// (0x00047222) list_double_large_graphic_pane_vc_g2

0xd08d,	// (0x00047236) list_double_large_graphic_pane_vc_g3_ParamLimits

0xd08d,	// (0x00047236) list_double_large_graphic_pane_vc_g3

0x77cb,	// (0x00041974) list_double_large_graphic_pane_vc_g4_ParamLimits

0x77cb,	// (0x00041974) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa5a,	// (0x00049c03) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa5a,	// (0x00049c03) list_double_large_graphic_pane_vc_g

0x77db,	// (0x00041984) list_double_large_graphic_pane_vc_t1_ParamLimits

0x77db,	// (0x00041984) list_double_large_graphic_pane_vc_t1

0x77f5,	// (0x0004199e) list_double_large_graphic_pane_vc_t2_ParamLimits

0x77f5,	// (0x0004199e) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa63,	// (0x00049c0c) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa63,	// (0x00049c0c) list_double_large_graphic_pane_vc_t

0x9106,	// (0x000432af) list_double_heading_pane_vc_g1_ParamLimits

0x9106,	// (0x000432af) list_double_heading_pane_vc_g1

0x9112,	// (0x000432bb) list_double_heading_pane_vc_g2_ParamLimits

0x9112,	// (0x000432bb) list_double_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x0004977b) list_double_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x0004977b) list_double_heading_pane_vc_g

0x7815,	// (0x000419be) list_double_heading_pane_vc_t1_ParamLimits

0x7815,	// (0x000419be) list_double_heading_pane_vc_t1

0x74fd,	// (0x000416a6) list_double_heading_pane_vc_t2_ParamLimits

0x74fd,	// (0x000416a6) list_double_heading_pane_vc_t2

0x0001,

0xfa68,	// (0x00049c11) list_double_heading_pane_vc_t_ParamLimits

0xfa68,	// (0x00049c11) list_double_heading_pane_vc_t

0x7827,	// (0x000419d0) list_double_graphic_pane_vc_g1_ParamLimits

0x7827,	// (0x000419d0) list_double_graphic_pane_vc_g1

0xd09c,	// (0x00047245) list_double_graphic_pane_vc_g2_ParamLimits

0xd09c,	// (0x00047245) list_double_graphic_pane_vc_g2

0x9106,	// (0x000432af) list_double_graphic_pane_vc_g3_ParamLimits

0x9106,	// (0x000432af) list_double_graphic_pane_vc_g3

0x0003,

0xfa6d,	// (0x00049c16) list_double_graphic_pane_vc_g_ParamLimits

0xfa6d,	// (0x00049c16) list_double_graphic_pane_vc_g

0x7833,	// (0x000419dc) list_double_graphic_pane_vc_t1_ParamLimits

0x7833,	// (0x000419dc) list_double_graphic_pane_vc_t1

0x7851,	// (0x000419fa) list_double_graphic_pane_vc_t2_ParamLimits

0x7851,	// (0x000419fa) list_double_graphic_pane_vc_t2

0x0001,

0xfa76,	// (0x00049c1f) list_double_graphic_pane_vc_t_ParamLimits

0xfa76,	// (0x00049c1f) list_double_graphic_pane_vc_t

0x41c2,	// (0x0003e36b) aid_size_cell_fastswap

0x85d5,	// (0x0004277e) aid_size_cell_touch_ParamLimits

0x85d5,	// (0x0004277e) aid_size_cell_touch

0x4319,	// (0x0003e4c2) popup_fast_swap_wide_window_ParamLimits

0x4319,	// (0x0003e4c2) popup_fast_swap_wide_window

0x8736,	// (0x000428df) touch_pane_ParamLimits

0x8736,	// (0x000428df) touch_pane

0x7220,	// (0x000413c9) button_value_adjust_pane_cp2

0x7228,	// (0x000413d1) button_value_adjust_pane_cp4

0x7248,	// (0x000413f1) form_field_data_pane_cp2

0x0cab,	// (0x0003ae54) form_field_data_wide_pane_cp2

0xbc43,	// (0x00045dec) bg_scroll_pane_ParamLimits

0x4606,	// (0x0003e7af) scroll_handle_pane_ParamLimits

0x461a,	// (0x0003e7c3) scroll_sc2_down_pane_ParamLimits

0x461a,	// (0x0003e7c3) scroll_sc2_down_pane

0xbc74,	// (0x00045e1d) scroll_sc2_up_pane_ParamLimits

0xbc74,	// (0x00045e1d) scroll_sc2_up_pane

0xa9be,	// (0x00044b67) grid_wheel_folder_pane_g1_ParamLimits

0xa9be,	// (0x00044b67) grid_wheel_folder_pane_g1

0x47ce,	// (0x0003e977) clock_nsta_pane_cp2_ParamLimits

0x47ce,	// (0x0003e977) clock_nsta_pane_cp2

0x969f,	// (0x00043848) listscroll_midp_pane_ParamLimits

0x96ae,	// (0x00043857) midp_canvas_pane

0x4a15,	// (0x0003ebbe) nsta_clock_indic_pane

0xc41a,	// (0x000465c3) listscroll_form_pane_vc

0xc422,	// (0x000465cb) listscroll_set_pane_vc_ParamLimits

0xc422,	// (0x000465cb) listscroll_set_pane_vc

0x9fc0,	// (0x00044169) clock_nsta_pane

0x9fe3,	// (0x0004418c) indicator_nsta_pane

0xc53b,	// (0x000466e4) bg_popup_sub_pane_cp2_ParamLimits

0xc54f,	// (0x000466f8) find_pane_cp2_ParamLimits

0xc54f,	// (0x000466f8) find_pane_cp2

0xc561,	// (0x0004670a) grid_toobar_pane_ParamLimits

0xc651,	// (0x000467fa) list_form_gen_pane_vc_ParamLimits

0xc651,	// (0x000467fa) list_form_gen_pane_vc

0xc667,	// (0x00046810) scroll_pane_cp8_vc_ParamLimits

0xc667,	// (0x00046810) scroll_pane_cp8_vc

0xc6b7,	// (0x00046860) data_form_wide_pane_vc_ParamLimits

0xc6b7,	// (0x00046860) data_form_wide_pane_vc

0xc6c3,	// (0x0004686c) form_field_data_wide_pane_vc_g1

0xc6cb,	// (0x00046874) form_field_data_wide_pane_vc_t1_ParamLimits

0xc6cb,	// (0x00046874) form_field_data_wide_pane_vc_t1

0x91cb,	// (0x00043374) input_focus_pane_cp6_vc_ParamLimits

0x91cb,	// (0x00043374) input_focus_pane_cp6_vc

0xa330,	// (0x000444d9) list_midp_pane_ParamLimits

0xd179,	// (0x00047322) scroll_pane_cp16_ParamLimits

0xd179,	// (0x00047322) scroll_pane_cp16

0xc9c9,	// (0x00046b72) button_value_adjust_pane_ParamLimits

0xc9c9,	// (0x00046b72) button_value_adjust_pane

0xa63d,	// (0x000447e6) button_value_adjust_pane_cp6_ParamLimits

0xa63d,	// (0x000447e6) button_value_adjust_pane_cp6

0xa747,	// (0x000448f0) settings_code_pane_cp_ParamLimits

0xa747,	// (0x000448f0) settings_code_pane_cp

0x7b29,	// (0x00041cd2) cell_touch_pane_g1

0x7b29,	// (0x00041cd2) cell_touch_pane_g2

0x0001,

0xf708,	// (0x000498b1) cell_touch_pane_g

0xa8b6,	// (0x00044a5f) cell_touch_pane_cp_ParamLimits

0xa8b6,	// (0x00044a5f) cell_touch_pane_cp

0xa8d2,	// (0x00044a7b) cell_touch_pane_ParamLimits

0xa8d2,	// (0x00044a7b) cell_touch_pane

0x7b29,	// (0x00041cd2) scroll_sc2_down_pane_g1

0x7b29,	// (0x00041cd2) scroll_sc2_up_pane_g1

0x7bf1,	// (0x00041d9a) bg_set_opt_pane_cp4_vc

0xdc3a,	// (0x00047de3) list_set_graphic_pane_vc_g1_ParamLimits

0xdc3a,	// (0x00047de3) list_set_graphic_pane_vc_g1

0xdc46,	// (0x00047def) list_set_graphic_pane_vc_g2_ParamLimits

0xdc46,	// (0x00047def) list_set_graphic_pane_vc_g2

0x0001,

0xf9f1,	// (0x00049b9a) list_set_graphic_pane_vc_g_ParamLimits

0xf9f1,	// (0x00049b9a) list_set_graphic_pane_vc_g

0xdc52,	// (0x00047dfb) text_primary_small_cp13_vc_ParamLimits

0xdc52,	// (0x00047dfb) text_primary_small_cp13_vc

0xdc6a,	// (0x00047e13) list_set_graphic_pane_vc_ParamLimits

0xdc6a,	// (0x00047e13) list_set_graphic_pane_vc

0x7bf1,	// (0x00041d9a) input_focus_pane_cp2_vc

0x7b29,	// (0x00041cd2) setting_code_pane_vc_g1

0xdc7d,	// (0x00047e26) setting_code_pane_vc_t1

0xdc8b,	// (0x00047e34) set_text_pane_vc_t1_ParamLimits

0xdc8b,	// (0x00047e34) set_text_pane_vc_t1

0x7bf1,	// (0x00041d9a) input_focus_pane_cp1_vc

0xdca6,	// (0x00047e4f) list_set_text_pane_vc

0x7b29,	// (0x00041cd2) setting_text_pane_vc_g1

0x7bf1,	// (0x00041d9a) bg_set_opt_pane_cp2_vc

0xdcb0,	// (0x00047e59) setting_slider_graphic_pane_vc_g1

0xdcb8,	// (0x00047e61) setting_slider_graphic_pane_vc_t1

0xdcc6,	// (0x00047e6f) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9f6,	// (0x00049b9f) setting_slider_graphic_pane_vc_t

0xdcd4,	// (0x00047e7d) slider_set_pane_cp_vc

0xdcdc,	// (0x00047e85) slider_set_pane_vc_g1

0xdce5,	// (0x00047e8e) slider_set_pane_vc_g2

0x0006,

0xf9fb,	// (0x00049ba4) slider_set_pane_vc_g

0x9226,	// (0x000433cf) set_opt_bg_pane_g1_copy1

0x922e,	// (0x000433d7) set_opt_bg_pane_g2_copy1

0xdd11,	// (0x00047eba) set_opt_bg_pane_g3_copy1

0x923e,	// (0x000433e7) set_opt_bg_pane_g4_copy1

0x9246,	// (0x000433ef) set_opt_bg_pane_g5_copy1

0x924e,	// (0x000433f7) set_opt_bg_pane_g6_copy1

0xdd19,	// (0x00047ec2) set_opt_bg_pane_g7_copy1

0xdd21,	// (0x00047eca) set_opt_bg_pane_g8_copy1

0xdd29,	// (0x00047ed2) set_opt_bg_pane_g9_copy1

0x7bf1,	// (0x00041d9a) bg_set_opt_pane_cp_vc

0xdd31,	// (0x00047eda) setting_slider_pane_vc_t1

0xdcb8,	// (0x00047e61) setting_slider_pane_vc_t2

0xdcc6,	// (0x00047e6f) setting_slider_pane_vc_t3

0x0002,

0xfa0a,	// (0x00049bb3) setting_slider_pane_vc_t

0xdcd4,	// (0x00047e7d) slider_set_pane_vc

0x5008,	// (0x0003f1b1) volume_set_pane_vc_g1

0x52ef,	// (0x0003f498) volume_set_pane_vc_g2

0x52f8,	// (0x0003f4a1) volume_set_pane_vc_g3

0x5301,	// (0x0003f4aa) volume_set_pane_vc_g4

0x530a,	// (0x0003f4b3) volume_set_pane_vc_g5

0x5313,	// (0x0003f4bc) volume_set_pane_vc_g6

0x531c,	// (0x0003f4c5) volume_set_pane_vc_g7

0x5325,	// (0x0003f4ce) volume_set_pane_vc_g8

0x532e,	// (0x0003f4d7) volume_set_pane_vc_g9

0x5337,	// (0x0003f4e0) volume_set_pane_vc_g10

0x0009,

0xfa11,	// (0x00049bba) volume_set_pane_vc_g

0xdd40,	// (0x00047ee9) volume_set_pane_vc

0xdd48,	// (0x00047ef1) button_value_adjust_pane_cp1_vc

0xdd52,	// (0x00047efb) list_highlight_pane_cp2_vc

0xdd5b,	// (0x00047f04) list_set_pane_vc_ParamLimits

0xdd5b,	// (0x00047f04) list_set_pane_vc

0xddad,	// (0x00047f56) main_pane_set_vc_t1_ParamLimits

0xddad,	// (0x00047f56) main_pane_set_vc_t1

0xddc2,	// (0x00047f6b) main_pane_set_vc_t2_ParamLimits

0xddc2,	// (0x00047f6b) main_pane_set_vc_t2

0xddd4,	// (0x00047f7d) main_pane_set_vc_t3_ParamLimits

0xddd4,	// (0x00047f7d) main_pane_set_vc_t3

0xdde6,	// (0x00047f8f) main_pane_set_vc_t4_ParamLimits

0xdde6,	// (0x00047f8f) main_pane_set_vc_t4

0x0003,

0xfa26,	// (0x00049bcf) main_pane_set_vc_t_ParamLimits

0xfa26,	// (0x00049bcf) main_pane_set_vc_t

0xddf8,	// (0x00047fa1) setting_code_pane_vc_ParamLimits

0xddf8,	// (0x00047fa1) setting_code_pane_vc

0xde07,	// (0x00047fb0) setting_slider_graphic_pane_vc

0xde07,	// (0x00047fb0) setting_slider_pane_vc

0xde07,	// (0x00047fb0) setting_text_pane_vc

0xde07,	// (0x00047fb0) setting_volume_pane_vc

0xde0f,	// (0x00047fb8) scroll_pane_cp121_vc

0x91b6,	// (0x0004335f) set_content_pane_vc

0xde17,	// (0x00047fc0) button_value_adjust_pane_g1

0xde20,	// (0x00047fc9) button_value_adjust_pane_g2

0x0001,

0xfa7b,	// (0x00049c24) button_value_adjust_pane_g

0xde29,	// (0x00047fd2) form_field_slider_wide_pane_vc_t1_ParamLimits

0xde29,	// (0x00047fd2) form_field_slider_wide_pane_vc_t1

0xde3f,	// (0x00047fe8) form_field_slider_wide_pane_vc_t2_ParamLimits

0xde3f,	// (0x00047fe8) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa80,	// (0x00049c29) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa80,	// (0x00049c29) form_field_slider_wide_pane_vc_t

0x889f,	// (0x00042a48) input_focus_pane_cp10_vc_ParamLimits

0x889f,	// (0x00042a48) input_focus_pane_cp10_vc

0xde6a,	// (0x00048013) slider_cont_pane_cp1_vc_ParamLimits

0xde6a,	// (0x00048013) slider_cont_pane_cp1_vc

0xdcdc,	// (0x00047e85) slider_form_pane_g1_cp2

0xdce5,	// (0x00047e8e) slider_form_pane_g2_cp2

0xde85,	// (0x0004802e) form_field_slider_pane_vc_t3

0xde93,	// (0x0004803c) form_field_slider_pane_vc_t4

0xdea1,	// (0x0004804a) slider_form_pane_vc_ParamLimits

0xdea1,	// (0x0004804a) slider_form_pane_vc

0xdeae,	// (0x00048057) form_field_slider_pane_vc_t1_ParamLimits

0xdeae,	// (0x00048057) form_field_slider_pane_vc_t1

0xdec4,	// (0x0004806d) form_field_slider_pane_vc_t2_ParamLimits

0xdec4,	// (0x0004806d) form_field_slider_pane_vc_t2

0x0001,

0xfa92,	// (0x00049c3b) form_field_slider_pane_vc_t_ParamLimits

0xfa92,	// (0x00049c3b) form_field_slider_pane_vc_t

0x889f,	// (0x00042a48) input_focus_pane_cp9_vc_ParamLimits

0x889f,	// (0x00042a48) input_focus_pane_cp9_vc

0xded6,	// (0x0004807f) slider_cont_pane_vc_ParamLimits

0xded6,	// (0x0004807f) slider_cont_pane_vc

0xdee8,	// (0x00048091) list_form_graphic_pane_cp_vc_ParamLimits

0xdee8,	// (0x00048091) list_form_graphic_pane_cp_vc

0xc6c3,	// (0x0004686c) form_field_popup_wide_pane_vc_g1

0xdefd,	// (0x000480a6) form_field_popup_wide_pane_vc_t1_ParamLimits

0xdefd,	// (0x000480a6) form_field_popup_wide_pane_vc_t1

0x91cb,	// (0x00043374) input_focus_pane_cp8_vc_ParamLimits

0x91cb,	// (0x00043374) input_focus_pane_cp8_vc

0xdf3c,	// (0x000480e5) list_form_wide_pane_vc_ParamLimits

0xdf3c,	// (0x000480e5) list_form_wide_pane_vc

0xdf48,	// (0x000480f1) list_form_graphic_pane_vc_g1

0xdf50,	// (0x000480f9) list_form_graphic_pane_vc_t1_ParamLimits

0xdf50,	// (0x000480f9) list_form_graphic_pane_vc_t1

0x88e9,	// (0x00042a92) list_highlight_pane_cp5_vc_ParamLimits

0x88e9,	// (0x00042a92) list_highlight_pane_cp5_vc

0xdf6c,	// (0x00048115) list_form_graphic_pane_vc_ParamLimits

0xdf6c,	// (0x00048115) list_form_graphic_pane_vc

0xc6c3,	// (0x0004686c) form_field_popup_pane_vc_g1

0xdf82,	// (0x0004812b) form_field_popup_pane_vc_t1_ParamLimits

0xdf82,	// (0x0004812b) form_field_popup_pane_vc_t1

0x91cb,	// (0x00043374) input_focus_pane_cp7_vc_ParamLimits

0x91cb,	// (0x00043374) input_focus_pane_cp7_vc

0xdf97,	// (0x00048140) list_form_pane_vc_ParamLimits

0xdf97,	// (0x00048140) list_form_pane_vc

0xdfa3,	// (0x0004814c) data_form_pane_vc_t1_ParamLimits

0xdfa3,	// (0x0004814c) data_form_pane_vc_t1

0x9226,	// (0x000433cf) input_focus_pane_vc_g1

0x922e,	// (0x000433d7) input_focus_pane_vc_g2

0x9236,	// (0x000433df) input_focus_pane_vc_g3

0x923e,	// (0x000433e7) input_focus_pane_vc_g4

0x9246,	// (0x000433ef) input_focus_pane_vc_g5

0x924e,	// (0x000433f7) input_focus_pane_vc_g6

0x9256,	// (0x000433ff) input_focus_pane_vc_g7

0x925e,	// (0x00043407) input_focus_pane_vc_g8

0x9266,	// (0x0004340f) input_focus_pane_vc_g9

0x7b29,	// (0x00041cd2) input_focus_pane_vc_g10

0x0009,

0xf691,	// (0x0004983a) input_focus_pane_vc_g

0xc6b7,	// (0x00046860) data_form_pane_vc_ParamLimits

0xc6b7,	// (0x00046860) data_form_pane_vc

0xc6c3,	// (0x0004686c) form_field_data_pane_vc_g1

0xdfbe,	// (0x00048167) form_field_data_pane_vc_t1_ParamLimits

0xdfbe,	// (0x00048167) form_field_data_pane_vc_t1

0x91cb,	// (0x00043374) input_focus_pane_vc_ParamLimits

0x91cb,	// (0x00043374) input_focus_pane_vc

0xdfd4,	// (0x0004817d) button_value_adjust_pane_cp3_vc

0xdfdc,	// (0x00048185) button_value_adjust_pane_cp5_vc

0xdfe4,	// (0x0004818d) form_field_data_pane_vc_ParamLimits

0xdfe4,	// (0x0004818d) form_field_data_pane_vc

0xdffb,	// (0x000481a4) form_field_data_pane_vc_cp2

0xe003,	// (0x000481ac) form_field_data_wide_pane_vc_ParamLimits

0xe003,	// (0x000481ac) form_field_data_wide_pane_vc

0xe019,	// (0x000481c2) form_field_data_wide_pane_vc_cp2

0xe021,	// (0x000481ca) form_field_popup_pane_vc_ParamLimits

0xe021,	// (0x000481ca) form_field_popup_pane_vc

0xe038,	// (0x000481e1) form_field_popup_wide_pane_vc_ParamLimits

0xe038,	// (0x000481e1) form_field_popup_wide_pane_vc

0xe04e,	// (0x000481f7) form_field_slider_pane_vc_ParamLimits

0xe04e,	// (0x000481f7) form_field_slider_pane_vc

0xe061,	// (0x0004820a) form_field_slider_wide_pane_vc_ParamLimits

0xe061,	// (0x0004820a) form_field_slider_wide_pane_vc

0xa8f0,	// (0x00044a99) grid_touch_1_pane_ParamLimits

0xa8f0,	// (0x00044a99) grid_touch_1_pane

0xa904,	// (0x00044aad) grid_touch_2_pane_ParamLimits

0xa904,	// (0x00044aad) grid_touch_2_pane

0xe074,	// (0x0004821d) touch_pane_g1_ParamLimits

0xe074,	// (0x0004821d) touch_pane_g1

0xe082,	// (0x0004822b) cell_app_pane_cp_wide_ParamLimits

0xe082,	// (0x0004822b) cell_app_pane_cp_wide

0xe092,	// (0x0004823b) grid_popup_fast_wide_pane_ParamLimits

0xe092,	// (0x0004823b) grid_popup_fast_wide_pane

0xe0a6,	// (0x0004824f) scroll_pane_cp19_ParamLimits

0xe0a6,	// (0x0004824f) scroll_pane_cp19

0x7bf1,	// (0x00041d9a) bg_popup_window_pane_cp20

0xe0ba,	// (0x00048263) listscroll_popup_fast_wide_pane

0xd0b9,	// (0x00047262) grid_indicator_nsta_pane

0xe0c2,	// (0x0004826b) clock_nsta_pane_g1

0xe0cb,	// (0x00048274) clock_nsta_pane_t1

0xa92e,	// (0x00044ad7) cell_indicator_nsta_pane_ParamLimits

0xa92e,	// (0x00044ad7) cell_indicator_nsta_pane

0xe074,	// (0x0004821d) cell_indicator_nsta_pane_g1

0xa945,	// (0x00044aee) cell_indicator_nsta_pane_g2

0x0001,

0xfaa3,	// (0x00049c4c) cell_indicator_nsta_pane_g

0xe0e7,	// (0x00048290) clock_nsta_pane_cp

0xe0ef,	// (0x00048298) indicator_nsta_pane_cp

0xe0f8,	// (0x000482a1) nsta_clock_indic_pane_g1

0x8a24,	// (0x00042bcd) grid_indicator_pane

0xbd66,	// (0x00045f0f) scroll_pane_cp29

0x4725,	// (0x0003e8ce) indicator_nsta_pane_cp2_ParamLimits

0x4725,	// (0x0003e8ce) indicator_nsta_pane_cp2

0x88e9,	// (0x00042a92) main_apps_wheel_pane

0xc862,	// (0x00046a0b) form_midp_field_text_pane_ParamLimits

0xc98f,	// (0x00046b38) scroll_bar_cp050_ParamLimits

0xe161,	// (0x0004830a) cell_indicator_pane_ParamLimits

0xe161,	// (0x0004830a) cell_indicator_pane

0xe177,	// (0x00048320) cell_indicator_pane_g1

0xa952,	// (0x00044afb) grid_wheel_folder_pane_ParamLimits

0xa952,	// (0x00044afb) grid_wheel_folder_pane

0xa960,	// (0x00044b09) list_wheel_apps_pane_ParamLimits

0xa960,	// (0x00044b09) list_wheel_apps_pane

0xa96c,	// (0x00044b15) main_apps_wheel_pane_g1_ParamLimits

0xa96c,	// (0x00044b15) main_apps_wheel_pane_g1

0xa978,	// (0x00044b21) main_apps_wheel_pane_g2_ParamLimits

0xa978,	// (0x00044b21) main_apps_wheel_pane_g2

0x0001,

0xfabf,	// (0x00049c68) main_apps_wheel_pane_g_ParamLimits

0xfabf,	// (0x00049c68) main_apps_wheel_pane_g

0xa984,	// (0x00044b2d) main_apps_wheel_pane_t1_ParamLimits

0xa984,	// (0x00044b2d) main_apps_wheel_pane_t1

0xa996,	// (0x00044b3f) list_wheel_apps_pane_g1

0xa99e,	// (0x00044b47) list_wheel_apps_pane_g2

0xa9a6,	// (0x00044b4f) list_wheel_apps_pane_g3

0xa9ae,	// (0x00044b57) list_wheel_apps_pane_g4

0xa9b6,	// (0x00044b5f) list_wheel_apps_pane_g5

0x0004,

0xfac4,	// (0x00049c6d) list_wheel_apps_pane_g

0x88e9,	// (0x00042a92) navi_icon_text_pane

0x9ecc,	// (0x00044075) aid_fill_nsta

0xe181,	// (0x0004832a) navi_icon_text_pane_g1

0xe18d,	// (0x00048336) navi_icon_text_pane_t1

0xbfe0,	// (0x00046189) list_set_graphic_pane_t1_ParamLimits

0xbfe0,	// (0x00046189) list_set_graphic_pane_t1

0xd1fc,	// (0x000473a5) popup_midp_note_alarm_window_t6_ParamLimits

0xd1fc,	// (0x000473a5) popup_midp_note_alarm_window_t6

0xd20e,	// (0x000473b7) popup_midp_note_alarm_window_t7_ParamLimits

0xd20e,	// (0x000473b7) popup_midp_note_alarm_window_t7

0xd220,	// (0x000473c9) popup_midp_note_alarm_window_t8_ParamLimits

0xd220,	// (0x000473c9) popup_midp_note_alarm_window_t8

0xd232,	// (0x000473db) popup_midp_note_alarm_window_t9_ParamLimits

0xd232,	// (0x000473db) popup_midp_note_alarm_window_t9

0xd244,	// (0x000473ed) popup_midp_note_alarm_window_t10_ParamLimits

0xd244,	// (0x000473ed) popup_midp_note_alarm_window_t10

0xd256,	// (0x000473ff) popup_midp_note_alarm_window_t11_ParamLimits

0xd256,	// (0x000473ff) popup_midp_note_alarm_window_t11

0xd268,	// (0x00047411) scroll_pane_cp17_ParamLimits

0xd268,	// (0x00047411) scroll_pane_cp17

0x5008,	// (0x0003f1b1) volume_small_pane_cp_g1

0x5340,	// (0x0003f4e9) volume_small_pane_cp_g2

0x5349,	// (0x0003f4f2) volume_small_pane_cp_g3

0x5352,	// (0x0003f4fb) volume_small_pane_cp_g4

0x5035,	// (0x0003f1de) volume_small_pane_cp_g5

0x535b,	// (0x0003f504) volume_small_pane_cp_g6

0x5364,	// (0x0003f50d) volume_small_pane_cp_g7

0x536d,	// (0x0003f516) volume_small_pane_cp_g8

0x5376,	// (0x0003f51f) volume_small_pane_cp_g9

0x537f,	// (0x0003f528) volume_small_pane_cp_g10

0xc28f,	// (0x00046438) midp_ticker_pane_g1_ParamLimits

0xc29b,	// (0x00046444) midp_ticker_pane_g2_ParamLimits

0xf75d,	// (0x00049906) midp_ticker_pane_g_ParamLimits

0xc2a7,	// (0x00046450) midp_ticker_pane_t1_ParamLimits

0x9ee2,	// (0x0004408b) aid_fill_nsta_2

0xc97b,	// (0x00046b24) list_form2_midp_pane

0xd8b9,	// (0x00047a62) midp_editing_number_pane_ParamLimits

0xd8c5,	// (0x00047a6e) midp_ticker_pane_ParamLimits

0xe19f,	// (0x00048348) form2_midp_field_pane

0xe1a7,	// (0x00048350) scroll_pane_cp51

0xe1c7,	// (0x00048370) form2_midp_button_pane_ParamLimits

0xe1c7,	// (0x00048370) form2_midp_button_pane

0xe1d9,	// (0x00048382) form2_midp_content_pane_ParamLimits

0xe1d9,	// (0x00048382) form2_midp_content_pane

0xe1f3,	// (0x0004839c) form2_midp_field_choice_group_pane

0xe1fb,	// (0x000483a4) form2_midp_field_pane_g1

0xe203,	// (0x000483ac) form2_midp_field_pane_g2

0xe20b,	// (0x000483b4) form2_midp_field_pane_g3

0xe213,	// (0x000483bc) form2_midp_field_pane_g4

0x0003,

0xfae9,	// (0x00049c92) form2_midp_field_pane_g

0xe21b,	// (0x000483c4) form2_midp_gauge_slider_pane

0xe223,	// (0x000483cc) form2_midp_gauge_wait_pane

0xe22b,	// (0x000483d4) form2_midp_image_pane_ParamLimits

0xe22b,	// (0x000483d4) form2_midp_image_pane

0xe246,	// (0x000483ef) form2_midp_label_pane_ParamLimits

0xe246,	// (0x000483ef) form2_midp_label_pane

0xa9eb,	// (0x00044b94) form2_midp_label_pane_cp_ParamLimits

0xa9eb,	// (0x00044b94) form2_midp_label_pane_cp

0xe25f,	// (0x00048408) form2_midp_string_pane_ParamLimits

0xe25f,	// (0x00048408) form2_midp_string_pane

0x786f,	// (0x00041a18) form2_midp_text_pane_ParamLimits

0x786f,	// (0x00041a18) form2_midp_text_pane

0xe271,	// (0x0004841a) form2_midp_time_pane

0xe281,	// (0x0004842a) input_focus_pane_cp51_ParamLimits

0xe281,	// (0x0004842a) input_focus_pane_cp51

0xe299,	// (0x00048442) form2_midp_label_pane_t1_ParamLimits

0xe299,	// (0x00048442) form2_midp_label_pane_t1

0x7888,	// (0x00041a31) form2_mdip_text_pane_t1_ParamLimits

0x7888,	// (0x00041a31) form2_mdip_text_pane_t1

0x78a1,	// (0x00041a4a) form2_midp_time_pane_t1

0xe2e1,	// (0x0004848a) form2_midp_gauge_slider_pane_t1

0xaa0a,	// (0x00044bb3) form2_midp_gauge_slider_pane_t2

0xaa1c,	// (0x00044bc5) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf2,	// (0x00049c9b) form2_midp_gauge_slider_pane_t

0xe2f3,	// (0x0004849c) form2_midp_slider_pane

0xe2ff,	// (0x000484a8) form2_midp_gauge_wait_pane_t1

0xe30d,	// (0x000484b6) form2_midp_wait_pane_ParamLimits

0xe30d,	// (0x000484b6) form2_midp_wait_pane

0xc701,	// (0x000468aa) list_single_2graphic_pane_cp4_ParamLimits

0xc701,	// (0x000468aa) list_single_2graphic_pane_cp4

0xe338,	// (0x000484e1) list_single_midp_graphic_pane_cp_ParamLimits

0xe338,	// (0x000484e1) list_single_midp_graphic_pane_cp

0x7bf1,	// (0x00041d9a) list_highlight_pane_cp20

0xe356,	// (0x000484ff) list_single_2graphic_pane_g1_cp4

0xd932,	// (0x00047adb) list_single_2graphic_pane_g2_cp4

0xe35e,	// (0x00048507) list_single_2graphic_pane_t1_cp4

0x88e9,	// (0x00042a92) list_highlight_pane_cp21

0xe36d,	// (0x00048516) list_single_midp_graphic_pane_g4_cp

0xe37c,	// (0x00048525) list_single_midp_graphic_pane_t1_cp

0xe391,	// (0x0004853a) form2_mdip_string_pane_t1_ParamLimits

0xe391,	// (0x0004853a) form2_mdip_string_pane_t1

0x7bf1,	// (0x00041d9a) bg_wml_button_pane_cp2

0x7b29,	// (0x00041cd2) form2_midp_image_pane_g1

0x9162,	// (0x0004330b) list_double_large_graphic_pane_g5_ParamLimits

0x9162,	// (0x0004330b) list_double_large_graphic_pane_g5

0x969f,	// (0x00043848) midp_form_pane_ParamLimits

0x88e9,	// (0x00042a92) main_apps_wheel_pane_ParamLimits

0x9c6e,	// (0x00043e17) popup_preview_window_ParamLimits

0x9c6e,	// (0x00043e17) popup_preview_window

0x4e8c,	// (0x0003f035) popup_touch_info_window_ParamLimits

0x4e8c,	// (0x0003f035) popup_touch_info_window

0x4eaa,	// (0x0003f053) popup_touch_menu_window_ParamLimits

0x4eaa,	// (0x0003f053) popup_touch_menu_window

0x7b1f,	// (0x00041cc8) bg_popup_sub_pane_cp6

0xe3fb,	// (0x000485a4) list_touch_menu_pane

0xe403,	// (0x000485ac) list_single_touch_menu_pane_ParamLimits

0xe403,	// (0x000485ac) list_single_touch_menu_pane

0xe41a,	// (0x000485c3) list_single_touch_menu_pane_t1

0x88e9,	// (0x00042a92) bg_popup_sub_pane_cp7_ParamLimits

0x88e9,	// (0x00042a92) bg_popup_sub_pane_cp7

0xe428,	// (0x000485d1) heading_sub_pane

0xe430,	// (0x000485d9) list_touch_info_pane_ParamLimits

0xe430,	// (0x000485d9) list_touch_info_pane

0xe43f,	// (0x000485e8) list_single_touch_info_pane_ParamLimits

0xe43f,	// (0x000485e8) list_single_touch_info_pane

0xe450,	// (0x000485f9) list_single_touch_info_pane_t1

0xe45e,	// (0x00048607) list_single_touch_info_pane_t2

0x0001,

0xfb00,	// (0x00049ca9) list_single_touch_info_pane_t

0xc265,	// (0x0004640e) bg_popup_heading_pane_cp

0xe46c,	// (0x00048615) heading_sub_pane_t1

0xc67d,	// (0x00046826) bg_popup_preview_window_pane_cp_ParamLimits

0xc67d,	// (0x00046826) bg_popup_preview_window_pane_cp

0xe428,	// (0x000485d1) heading_preview_pane

0xe430,	// (0x000485d9) list_preview_pane_ParamLimits

0xe430,	// (0x000485d9) list_preview_pane

0xe47a,	// (0x00048623) popup_preview_window_g1

0xe43f,	// (0x000485e8) list_single_preview_pane_ParamLimits

0xe43f,	// (0x000485e8) list_single_preview_pane

0xe482,	// (0x0004862b) list_single_preview_pane_g1

0xe48a,	// (0x00048633) list_single_preview_pane_t1

0xe450,	// (0x000485f9) list_single_preview_pane_t2

0x0001,

0xfb05,	// (0x00049cae) list_single_preview_pane_t

0xe498,	// (0x00048641) bg_popup_heading_pane_cp2_ParamLimits

0xe498,	// (0x00048641) bg_popup_heading_pane_cp2

0xe4ae,	// (0x00048657) heading_preview_pane_g1

0xe4b6,	// (0x0004865f) heading_preview_pane_t1_ParamLimits

0xe4b6,	// (0x0004865f) heading_preview_pane_t1

0x8a54,	// (0x00042bfd) soft_indicator_pane_t1_ParamLimits

0x90d1,	// (0x0004327a) scroll_pane_ParamLimits

0xbc62,	// (0x00045e0b) scroll_sc2_left_pane

0xbc6b,	// (0x00045e14) scroll_sc2_right_pane

0xbc8a,	// (0x00045e33) scroll_bg_pane_g1_ParamLimits

0xbc9f,	// (0x00045e48) scroll_bg_pane_g2_ParamLimits

0xbcb7,	// (0x00045e60) scroll_bg_pane_g3_ParamLimits

0xf6e8,	// (0x00049891) scroll_bg_pane_g_ParamLimits

0xbc8a,	// (0x00045e33) scroll_handle_pane_g1_ParamLimits

0xbcd9,	// (0x00045e82) scroll_handle_pane_g2_ParamLimits

0xbcb7,	// (0x00045e60) scroll_handle_pane_g3_ParamLimits

0xf6ef,	// (0x00049898) scroll_handle_pane_g_ParamLimits

0x4a59,	// (0x0003ec02) popup_choice_list_window_ParamLimits

0x4a59,	// (0x0003ec02) popup_choice_list_window

0xc547,	// (0x000466f0) choice_list_pane

0xc5bd,	// (0x00046766) cell_toolbar_pane_t1

0xc5e5,	// (0x0004678e) toolbar_button_pane_ParamLimits

0xd62e,	// (0x000477d7) ai_gene_pane_1_t2_ParamLimits

0xd62e,	// (0x000477d7) ai_gene_pane_1_t2

0x0001,

0xf90b,	// (0x00049ab4) ai_gene_pane_1_t_ParamLimits

0xf90b,	// (0x00049ab4) ai_gene_pane_1_t

0xe4d3,	// (0x0004867c) scroll_sc2_left_pane_g1

0xe4d3,	// (0x0004867c) scroll_sc2_right_pane_g1

0xbafc,	// (0x00045ca5) bg_popup_sub_pane_cp10

0xe4dd,	// (0x00048686) list_choice_list_pane

0xe4f4,	// (0x0004869d) list_single_choice_list_pane_ParamLimits

0xe4f4,	// (0x0004869d) list_single_choice_list_pane

0xe506,	// (0x000486af) list_single_choice_list_pane_g1

0x9348,	// (0x000434f1) list_single_choice_list_pane_t1_ParamLimits

0x9348,	// (0x000434f1) list_single_choice_list_pane_t1

0xe50e,	// (0x000486b7) choice_list_pane_g1

0xe516,	// (0x000486bf) choice_list_pane_t1

0x7b1f,	// (0x00041cc8) input_focus_pane_cp11

0xbbc9,	// (0x00045d72) title_pane_stacon_g2_ParamLimits

0xbbc9,	// (0x00045d72) title_pane_stacon_g2

0x0002,

0xf6ce,	// (0x00049877) title_pane_stacon_g_ParamLimits

0xf6ce,	// (0x00049877) title_pane_stacon_g

0xc265,	// (0x0004640e) cursor_press_pane

0x99d5,	// (0x00043b7e) popup_fep_hwr_window_ParamLimits

0x99d5,	// (0x00043b7e) popup_fep_hwr_window

0x4b51,	// (0x0003ecfa) popup_fep_vkb_window_ParamLimits

0x4b51,	// (0x0003ecfa) popup_fep_vkb_window

0xe524,	// (0x000486cd) cursor_press_pane_g1

0x0002,

0xfb2e,	// (0x00049cd7) fep_vkb_side_pane_g_ParamLimits

0x53bd,	// (0x0003f566) fep_hwr_candidate_pane_ParamLimits

0x53bd,	// (0x0003f566) fep_hwr_candidate_pane

0x53e5,	// (0x0003f58e) fep_hwr_side_pane_ParamLimits

0x53e5,	// (0x0003f58e) fep_hwr_side_pane

0x5405,	// (0x0003f5ae) fep_hwr_top_pane_ParamLimits

0x5405,	// (0x0003f5ae) fep_hwr_top_pane

0x541d,	// (0x0003f5c6) fep_hwr_write_pane_ParamLimits

0x541d,	// (0x0003f5c6) fep_hwr_write_pane

0xfb2e,	// (0x00049cd7) fep_vkb_side_pane_g

0xe52c,	// (0x000486d5) fep_hwr_top_pane_g1

0xe53e,	// (0x000486e7) fep_hwr_top_pane_g2

0x5457,	// (0x0003f600) fep_hwr_top_pane_g3

0x0002,

0xfb0a,	// (0x00049cb3) fep_hwr_top_pane_g

0x546c,	// (0x0003f615) fep_hwr_top_text_pane

0xbdd3,	// (0x00045f7c) fep_hwr_top_text_pane_g1

0xe574,	// (0x0004871d) fep_hwr_top_text_pane_t1

0x555a,	// (0x0003f703) fep_hwr_candidate_pane_g1

0xe73d,	// (0x000488e6) fep_vkb_keypad_pane_g3_ParamLimits

0xe73d,	// (0x000488e6) fep_vkb_keypad_pane_g3

0xe75f,	// (0x00048908) fep_vkb_keypad_pane_g4_ParamLimits

0xe75f,	// (0x00048908) fep_vkb_keypad_pane_g4

0xe7ce,	// (0x00048977) fep_vkb_bottom_pane_g2_ParamLimits

0xe7ce,	// (0x00048977) fep_vkb_bottom_pane_g2

0x0001,

0xfb35,	// (0x00049cde) fep_vkb_bottom_pane_g_ParamLimits

0xfb35,	// (0x00049cde) fep_vkb_bottom_pane_g

0xe4d3,	// (0x0004867c) cell_vkb_side_pane_g2

0x0001,

0xfb3f,	// (0x00049ce8) cell_vkb_side_pane_g

0xe812,	// (0x000489bb) cell_vkb_side_pane_t1

0xe820,	// (0x000489c9) cell_vkb_side_pane_t1_copy1

0xe4d3,	// (0x0004867c) bg_fep_vkb_candidate_pane_g2

0xe8ee,	// (0x00048a97) cell_vkb_candidate_pane_ParamLimits

0xe582,	// (0x0004872b) aid_size_cell_vkb_ParamLimits

0xe582,	// (0x0004872b) aid_size_cell_vkb

0xe8ee,	// (0x00048a97) cell_vkb_candidate_pane

0x5581,	// (0x0003f72a) bg_popup_fep_shadow_pane_g1

0xe5ec,	// (0x00048795) fep_vkb_bottom_pane_ParamLimits

0xe5ec,	// (0x00048795) fep_vkb_bottom_pane

0xe629,	// (0x000487d2) fep_vkb_candidate_pane_ParamLimits

0xe629,	// (0x000487d2) fep_vkb_candidate_pane

0xe645,	// (0x000487ee) fep_vkb_keypad_pane_ParamLimits

0xe645,	// (0x000487ee) fep_vkb_keypad_pane

0xe679,	// (0x00048822) fep_vkb_side_pane_ParamLimits

0xe679,	// (0x00048822) fep_vkb_side_pane

0xe6a5,	// (0x0004884e) fep_vkb_top_pane_ParamLimits

0xe6a5,	// (0x0004884e) fep_vkb_top_pane

0xe6d1,	// (0x0004887a) fep_vkb_top_pane_g1_ParamLimits

0xe6d1,	// (0x0004887a) fep_vkb_top_pane_g1

0xe6e0,	// (0x00048889) fep_vkb_top_pane_g2_ParamLimits

0xe6e0,	// (0x00048889) fep_vkb_top_pane_g2

0xe6ef,	// (0x00048898) fep_vkb_top_pane_g3_ParamLimits

0xe6ef,	// (0x00048898) fep_vkb_top_pane_g3

0x0003,

0xfb25,	// (0x00049cce) fep_vkb_top_pane_g_ParamLimits

0xfb25,	// (0x00049cce) fep_vkb_top_pane_g

0xe70d,	// (0x000488b6) fep_vkb_top_text_pane_ParamLimits

0xe70d,	// (0x000488b6) fep_vkb_top_text_pane

0xaa8b,	// (0x00044c34) fep_vkb_side_pane_g1_ParamLimits

0xaa8b,	// (0x00044c34) fep_vkb_side_pane_g1

0xe72c,	// (0x000488d5) grid_vkb_side_pane_ParamLimits

0xe72c,	// (0x000488d5) grid_vkb_side_pane

0x5589,	// (0x0003f732) bg_popup_fep_shadow_pane_g2

0x5592,	// (0x0003f73b) bg_popup_fep_shadow_pane_g3

0x559a,	// (0x0003f743) bg_popup_fep_shadow_pane_g4

0x55a3,	// (0x0003f74c) bg_popup_fep_shadow_pane_g5

0x55ab,	// (0x0003f754) bg_popup_fep_shadow_pane_g6

0x55b3,	// (0x0003f75c) bg_popup_fep_shadow_pane_g7

0x923e,	// (0x000433e7) bg_popup_fep_shadow_pane_g8

0xe77d,	// (0x00048926) grid_vkb_keypad_number_pane_ParamLimits

0xe77d,	// (0x00048926) grid_vkb_keypad_number_pane

0xe78d,	// (0x00048936) grid_vkb_keypad_pane_ParamLimits

0xe78d,	// (0x00048936) grid_vkb_keypad_pane

0xe7b3,	// (0x0004895c) fep_vkb_bottom_pane_g1_ParamLimits

0xe7b3,	// (0x0004895c) fep_vkb_bottom_pane_g1

0xe7dc,	// (0x00048985) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xe7dc,	// (0x00048985) grid_vkb_keypad_bottom_left_pane

0xe7f1,	// (0x0004899a) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xe7f1,	// (0x0004899a) grid_vkb_keypad_bottom_right_pane

0xe806,	// (0x000489af) fep_vkb_top_text_pane_g1

0xaad2,	// (0x00044c7b) fep_vkb_top_text_pane_t1

0xaae4,	// (0x00044c8d) cell_vkb_side_pane_ParamLimits

0xaae4,	// (0x00044c8d) cell_vkb_side_pane

0xe4d3,	// (0x0004867c) cell_vkb_side_pane_g1

0xe82e,	// (0x000489d7) cell_vkb_keypad_pane_ParamLimits

0xe82e,	// (0x000489d7) cell_vkb_keypad_pane

0xe89b,	// (0x00048a44) cell_vkb_keypad_pane_g1

0x0008,

0xfb52,	// (0x00049cfb) bg_popup_fep_shadow_pane_g

0x55c3,	// (0x0003f76c) cell_hwr_side_pane_g1

0x55c3,	// (0x0003f76c) cell_hwr_side_pane_g2

0xe8a5,	// (0x00048a4e) cell_vkb_keypad_pane_t1

0xaafa,	// (0x00044ca3) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xaafa,	// (0x00044ca3) cell_vkb_keypad_bottom_left_pane

0xab0f,	// (0x00044cb8) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xab0f,	// (0x00044cb8) cell_vkb_keypad_bottom_right_pane

0xe4d3,	// (0x0004867c) cell_vkb_keypad_bottom_left_pane_g1

0xe4d3,	// (0x0004867c) cell_vkb_keypad_bottom_right_pane_g1

0xe8b3,	// (0x00048a5c) cell_vkb_keypad_number_pane_ParamLimits

0xe8b3,	// (0x00048a5c) cell_vkb_keypad_number_pane

0xe8d2,	// (0x00048a7b) cell_vkb_keypad_number_pane_g1

0xe8dc,	// (0x00048a85) cell_vkb_keypad_number_pane_g2

0xe8e5,	// (0x00048a8e) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb44,	// (0x00049ced) cell_vkb_keypad_number_pane_g

0xe8a5,	// (0x00048a4e) cell_vkb_keypad_number_pane_t1

0xe907,	// (0x00048ab0) fep_vkb_candidate_pane_g1

0x0001,

0xfb65,	// (0x00049d0e) cell_hwr_side_pane_g

0xe920,	// (0x00048ac9) cell_hwr_side_pane_t1

0x55cd,	// (0x0003f776) cell_hwr_side_pane_t1_copy1

0x55db,	// (0x0003f784) cell_hwr_candidate_pane_g1

0x560a,	// (0x0003f7b3) cell_hwr_candidate_pane_t1

0xe4d3,	// (0x0004867c) cell_vkb_candidate_pane_g2

0xe964,	// (0x00048b0d) cell_vkb_candidate_pane_t1

0x5388,	// (0x0003f531) bg_popup_fep_shadow_pane_ParamLimits

0x5388,	// (0x0003f531) bg_popup_fep_shadow_pane

0x5437,	// (0x0003f5e0) bg_fep_hwr_top_pane_g4

0xe550,	// (0x000486f9) bg_hwr_side_pane_g1_ParamLimits

0xe550,	// (0x000486f9) bg_hwr_side_pane_g1

0xaa46,	// (0x00044bef) cell_hwr_side_pane_ParamLimits

0xaa46,	// (0x00044bef) cell_hwr_side_pane

0x54e3,	// (0x0003f68c) fep_hwr_write_pane_g1_ParamLimits

0x54e3,	// (0x0003f68c) fep_hwr_write_pane_g1

0x54f0,	// (0x0003f699) fep_hwr_write_pane_g2_ParamLimits

0x54f0,	// (0x0003f699) fep_hwr_write_pane_g2

0x54fd,	// (0x0003f6a6) fep_hwr_write_pane_g3_ParamLimits

0x54fd,	// (0x0003f6a6) fep_hwr_write_pane_g3

0xaa66,	// (0x00044c0f) fep_hwr_write_pane_g4_ParamLimits

0xaa66,	// (0x00044c0f) fep_hwr_write_pane_g4

0x0005,

0xfb11,	// (0x00049cba) fep_hwr_write_pane_g_ParamLimits

0xfb11,	// (0x00049cba) fep_hwr_write_pane_g

0x5437,	// (0x0003f5e0) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x5437,	// (0x0003f5e0) bg_fep_hwr_candidate_pane_g2

0x5520,	// (0x0003f6c9) cell_hwr_candidate_pane_ParamLimits

0x5520,	// (0x0003f6c9) cell_hwr_candidate_pane

0x555a,	// (0x0003f703) fep_hwr_candidate_pane_g1_ParamLimits

0xe5b0,	// (0x00048759) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xe5b0,	// (0x00048759) bg_popup_fep_shadow_pane_cp2

0xe6ff,	// (0x000488a8) fep_vkb_top_pane_g4_ParamLimits

0xe6ff,	// (0x000488a8) fep_vkb_top_pane_g4

0xe71e,	// (0x000488c7) fep_vkb_side_pane_g2_ParamLimits

0xe71e,	// (0x000488c7) fep_vkb_side_pane_g2

0x0bb9,	// (0x0003ad62) list_setting_pane_t4_ParamLimits

0x0bb9,	// (0x0003ad62) list_setting_pane_t4

0x0c53,	// (0x0003adfc) list_setting_number_pane_t5_ParamLimits

0x0c53,	// (0x0003adfc) list_setting_number_pane_t5

0x95aa,	// (0x00043753) list_double_heading_pane_cp2_ParamLimits

0x95aa,	// (0x00043753) list_double_heading_pane_cp2

0xc0da,	// (0x00046283) list_double_heading_pane_g1_cp2_ParamLimits

0xc0da,	// (0x00046283) list_double_heading_pane_g1_cp2

0xe972,	// (0x00048b1b) list_double_heading_pane_g2_cp2_ParamLimits

0xe972,	// (0x00048b1b) list_double_heading_pane_g2_cp2

0xe986,	// (0x00048b2f) list_double_heading_pane_t1_cp2_ParamLimits

0xe986,	// (0x00048b2f) list_double_heading_pane_t1_cp2

0xe99c,	// (0x00048b45) list_double_heading_pane_t2_cp2_ParamLimits

0xe99c,	// (0x00048b45) list_double_heading_pane_t2_cp2

0x7b17,	// (0x00041cc0) aid_value_unit2

0x4355,	// (0x0003e4fe) popup_preview_fixed_window

0x8c12,	// (0x00042dbb) bg_popup_preview_window_pane_cp02

0xe9ae,	// (0x00048b57) list_preview_fixed_pane

0xe9f4,	// (0x00048b9d) list_empty_pane_fp_ParamLimits

0xe9f4,	// (0x00048b9d) list_empty_pane_fp

0xe9f4,	// (0x00048b9d) list_single_cale_day_pane_fp_ParamLimits

0xe9f4,	// (0x00048b9d) list_single_cale_day_pane_fp

0xe9f4,	// (0x00048b9d) list_single_graphic_heading_pane_fp_ParamLimits

0xe9f4,	// (0x00048b9d) list_single_graphic_heading_pane_fp

0xe9f4,	// (0x00048b9d) list_single_graphic_pane_fp_ParamLimits

0xe9f4,	// (0x00048b9d) list_single_graphic_pane_fp

0xe9f4,	// (0x00048b9d) list_single_heading_pane_fp_ParamLimits

0xe9f4,	// (0x00048b9d) list_single_heading_pane_fp

0xe9f4,	// (0x00048b9d) list_single_pane_fp_ParamLimits

0xe9f4,	// (0x00048b9d) list_single_pane_fp

0xea08,	// (0x00048bb1) list_single_pane_fp_g1_ParamLimits

0xea08,	// (0x00048bb1) list_single_pane_fp_g1

0x9106,	// (0x000432af) list_single_pane_fp_g2_ParamLimits

0x9106,	// (0x000432af) list_single_pane_fp_g2

0xd0c7,	// (0x00047270) list_single_pane_fp_g3_ParamLimits

0xd0c7,	// (0x00047270) list_single_pane_fp_g3

0xea14,	// (0x00048bbd) list_single_pane_fp_g4_ParamLimits

0xea14,	// (0x00048bbd) list_single_pane_fp_g4

0x0003,

0xfb78,	// (0x00049d21) list_single_pane_fp_g_ParamLimits

0xfb78,	// (0x00049d21) list_single_pane_fp_g

0x78b4,	// (0x00041a5d) list_single_pane_fp_t1_ParamLimits

0x78b4,	// (0x00041a5d) list_single_pane_fp_t1

0x78cb,	// (0x00041a74) list_single_graphic_pane_fp_g1_ParamLimits

0x78cb,	// (0x00041a74) list_single_graphic_pane_fp_g1

0xea08,	// (0x00048bb1) list_single_graphic_pane_fp_g2_ParamLimits

0xea08,	// (0x00048bb1) list_single_graphic_pane_fp_g2

0x9106,	// (0x000432af) list_single_graphic_pane_fp_g3_ParamLimits

0x9106,	// (0x000432af) list_single_graphic_pane_fp_g3

0xd0c7,	// (0x00047270) list_single_graphic_pane_fp_g4_ParamLimits

0xd0c7,	// (0x00047270) list_single_graphic_pane_fp_g4

0xea14,	// (0x00048bbd) list_single_graphic_pane_fp_g5_ParamLimits

0xea14,	// (0x00048bbd) list_single_graphic_pane_fp_g5

0x0004,

0xfb81,	// (0x00049d2a) list_single_graphic_pane_fp_g_ParamLimits

0xfb81,	// (0x00049d2a) list_single_graphic_pane_fp_g

0x78d7,	// (0x00041a80) list_single_graphic_pane_fp_t1_ParamLimits

0x78d7,	// (0x00041a80) list_single_graphic_pane_fp_t1

0x78cb,	// (0x00041a74) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x78cb,	// (0x00041a74) list_single_graphic_heading_pane_fp_g1

0xea08,	// (0x00048bb1) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xea08,	// (0x00048bb1) list_single_graphic_heading_pane_fp_g2

0x9106,	// (0x000432af) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x9106,	// (0x000432af) list_single_graphic_heading_pane_fp_g3

0xd0c7,	// (0x00047270) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xd0c7,	// (0x00047270) list_single_graphic_heading_pane_fp_g4

0xea14,	// (0x00048bbd) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xea14,	// (0x00048bbd) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb81,	// (0x00049d2a) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb81,	// (0x00049d2a) list_single_graphic_heading_pane_fp_g

0x78ed,	// (0x00041a96) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x78ed,	// (0x00041a96) list_single_graphic_heading_pane_fp_t1

0x7903,	// (0x00041aac) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x7903,	// (0x00041aac) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb8c,	// (0x00049d35) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb8c,	// (0x00049d35) list_single_graphic_heading_pane_fp_t

0x7915,	// (0x00041abe) list_single_cale_day_pane_fp_g1_ParamLimits

0x7915,	// (0x00041abe) list_single_cale_day_pane_fp_g1

0xea20,	// (0x00048bc9) list_single_cale_day_pane_fp_g2_ParamLimits

0xea20,	// (0x00048bc9) list_single_cale_day_pane_fp_g2

0xd0db,	// (0x00047284) list_single_cale_day_pane_fp_g3_ParamLimits

0xd0db,	// (0x00047284) list_single_cale_day_pane_fp_g3

0xd103,	// (0x000472ac) list_single_cale_day_pane_fp_g4_ParamLimits

0xd103,	// (0x000472ac) list_single_cale_day_pane_fp_g4

0xd127,	// (0x000472d0) list_single_cale_day_pane_fp_g5_ParamLimits

0xd127,	// (0x000472d0) list_single_cale_day_pane_fp_g5

0x0004,

0xfb91,	// (0x00049d3a) list_single_cale_day_pane_fp_g_ParamLimits

0xfb91,	// (0x00049d3a) list_single_cale_day_pane_fp_g

0x794d,	// (0x00041af6) list_single_cale_day_pane_fp_t1_ParamLimits

0x794d,	// (0x00041af6) list_single_cale_day_pane_fp_t1

0x7973,	// (0x00041b1c) list_single_cale_day_pane_fp_t2_ParamLimits

0x7973,	// (0x00041b1c) list_single_cale_day_pane_fp_t2

0x798c,	// (0x00041b35) list_single_cale_day_pane_fp_t3_ParamLimits

0x798c,	// (0x00041b35) list_single_cale_day_pane_fp_t3

0x0002,

0xfb9c,	// (0x00049d45) list_single_cale_day_pane_fp_t_ParamLimits

0xfb9c,	// (0x00049d45) list_single_cale_day_pane_fp_t

0xea08,	// (0x00048bb1) list_empty_pane_fp_g1_ParamLimits

0xea08,	// (0x00048bb1) list_empty_pane_fp_g1

0x79a5,	// (0x00041b4e) list_empty_pane_fp_t1

0x79b3,	// (0x00041b5c) list_empty_pane_fp_t2

0x0001,

0xfba3,	// (0x00049d4c) list_empty_pane_fp_t

0xea08,	// (0x00048bb1) list_single_heading_pane_fp_g1_ParamLimits

0xea08,	// (0x00048bb1) list_single_heading_pane_fp_g1

0x9106,	// (0x000432af) list_single_heading_pane_fp_g2_ParamLimits

0x9106,	// (0x000432af) list_single_heading_pane_fp_g2

0xd0c7,	// (0x00047270) list_single_heading_pane_fp_g3_ParamLimits

0xd0c7,	// (0x00047270) list_single_heading_pane_fp_g3

0x0002,

0xfba8,	// (0x00049d51) list_single_heading_pane_fp_g_ParamLimits

0xfba8,	// (0x00049d51) list_single_heading_pane_fp_g

0x79c1,	// (0x00041b6a) list_single_heading_pane_fp_t1_ParamLimits

0x79c1,	// (0x00041b6a) list_single_heading_pane_fp_t1

0x79d3,	// (0x00041b7c) list_single_heading_pane_fp_t2_ParamLimits

0x79d3,	// (0x00041b7c) list_single_heading_pane_fp_t2

0x0001,

0xfbaf,	// (0x00049d58) list_single_heading_pane_fp_t_ParamLimits

0xfbaf,	// (0x00049d58) list_single_heading_pane_fp_t

0x93a0,	// (0x00043549) aid_size_cell_fast

0x8b87,	// (0x00042d30) soft_indicator_pane_cp1_t1

0x93dd,	// (0x00043586) cell_app_pane_cp2_ParamLimits

0x93dd,	// (0x00043586) cell_app_pane_cp2

0x53aa,	// (0x0003f553) fep_hwr_candidate_drop_down_list_pane

0x5574,	// (0x0003f71d) fep_hwr_candidate_pane_g3_ParamLimits

0x5574,	// (0x0003f71d) fep_hwr_candidate_pane_g3

0x251e,	// (0x0003c6c7) fep_hwr_candidate_pane_g4_ParamLimits

0x251e,	// (0x0003c6c7) fep_hwr_candidate_pane_g4

0x0002,

0xfb1e,	// (0x00049cc7) fep_hwr_candidate_pane_g_ParamLimits

0xfb1e,	// (0x00049cc7) fep_hwr_candidate_pane_g

0xe618,	// (0x000487c1) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xe618,	// (0x000487c1) fep_vkb_candidate_drop_down_list_pane

0xe90f,	// (0x00048ab8) fep_vkb_candidate_pane_g3

0xe917,	// (0x00048ac0) fep_vkb_candidate_pane_g4

0x0002,

0xfb4b,	// (0x00049cf4) fep_vkb_candidate_pane_g

0x55db,	// (0x0003f784) cell_hwr_candidate_pane_g1_ParamLimits

0x55e9,	// (0x0003f792) cell_hwr_candidate_pane_g3_ParamLimits

0x55e9,	// (0x0003f792) cell_hwr_candidate_pane_g3

0x2761,	// (0x0003c90a) cell_hwr_candidate_pane_g4_ParamLimits

0x2761,	// (0x0003c90a) cell_hwr_candidate_pane_g4

0x0002,

0xfb6a,	// (0x00049d13) cell_hwr_candidate_pane_g_ParamLimits

0xfb6a,	// (0x00049d13) cell_hwr_candidate_pane_g

0xe92e,	// (0x00048ad7) cell_vkb_candidate_pane_g3_ParamLimits

0xe92e,	// (0x00048ad7) cell_vkb_candidate_pane_g3

0xe949,	// (0x00048af2) cell_vkb_candidate_pane_g4_ParamLimits

0xe949,	// (0x00048af2) cell_vkb_candidate_pane_g4

0xea2c,	// (0x00048bd5) cell_app_pane_cp2_g1_ParamLimits

0xea2c,	// (0x00048bd5) cell_app_pane_cp2_g1

0xea4a,	// (0x00048bf3) cell_app_pane_cp2_g2_ParamLimits

0xea4a,	// (0x00048bf3) cell_app_pane_cp2_g2

0x0001,

0xfbb4,	// (0x00049d5d) cell_app_pane_cp2_g_ParamLimits

0xfbb4,	// (0x00049d5d) cell_app_pane_cp2_g

0xea56,	// (0x00048bff) cell_app_pane_cp2_t1_ParamLimits

0xea56,	// (0x00048bff) cell_app_pane_cp2_t1

0x91cb,	// (0x00043374) grid_highlight_pane_cp1_ParamLimits

0x91cb,	// (0x00043374) grid_highlight_pane_cp1

0x5627,	// (0x0003f7d0) cell_hwr_candidate_pane_cp1_ParamLimits

0x5627,	// (0x0003f7d0) cell_hwr_candidate_pane_cp1

0x55db,	// (0x0003f784) fep_hwr_candidate_drop_down_list_pane_g1

0x5645,	// (0x0003f7ee) fep_hwr_candidate_drop_down_list_pane_g2

0x5652,	// (0x0003f7fb) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb9,	// (0x00049d62) fep_hwr_candidate_drop_down_list_pane_g

0x565f,	// (0x0003f808) fep_hwr_candidate_drop_down_list_scroll_pane

0x5668,	// (0x0003f811) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x5668,	// (0x0003f811) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x5675,	// (0x0003f81e) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x5675,	// (0x0003f81e) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x5682,	// (0x0003f82b) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x5682,	// (0x0003f82b) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x568f,	// (0x0003f838) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x568f,	// (0x0003f838) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x56aa,	// (0x0003f853) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x56aa,	// (0x0003f853) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x56c5,	// (0x0003f86e) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x56c5,	// (0x0003f86e) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x56e0,	// (0x0003f889) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x56e0,	// (0x0003f889) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x56fb,	// (0x0003f8a4) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x56fb,	// (0x0003f8a4) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc0,	// (0x00049d69) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc0,	// (0x00049d69) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xab2a,	// (0x00044cd3) cell_vkb_candidate_pane_cp1_ParamLimits

0xab2a,	// (0x00044cd3) cell_vkb_candidate_pane_cp1

0xe6ff,	// (0x000488a8) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xe6ff,	// (0x000488a8) fep_vkb_candidate_drop_down_list_pane_g1

0xea68,	// (0x00048c11) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xea68,	// (0x00048c11) fep_vkb_candidate_drop_down_list_pane_g2

0xea75,	// (0x00048c1e) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xea75,	// (0x00048c1e) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbd1,	// (0x00049d7a) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbd1,	// (0x00049d7a) fep_vkb_candidate_drop_down_list_pane_g

0xea82,	// (0x00048c2b) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xea82,	// (0x00048c2b) fep_vkb_candidate_drop_down_list_scroll_pane

0xea8f,	// (0x00048c38) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xea8f,	// (0x00048c38) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xea9c,	// (0x00048c45) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xea9c,	// (0x00048c45) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xeaa8,	// (0x00048c51) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xeaa8,	// (0x00048c51) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xeab4,	// (0x00048c5d) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xeab4,	// (0x00048c5d) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xead5,	// (0x00048c7e) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xead5,	// (0x00048c7e) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xeaf6,	// (0x00048c9f) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xeaf6,	// (0x00048c9f) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xeb17,	// (0x00048cc0) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xeb17,	// (0x00048cc0) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xeb38,	// (0x00048ce1) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xeb38,	// (0x00048ce1) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd8,	// (0x00049d81) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd8,	// (0x00049d81) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x878c,	// (0x00042935) title_pane_g1_ParamLimits

0x87a3,	// (0x0004294c) title_pane_g2_ParamLimits

0xf54e,	// (0x000496f7) title_pane_g_ParamLimits

0xbdc3,	// (0x00045f6c) aid_call2_pane

0xbdcb,	// (0x00045f74) aid_call_pane

0xbdd3,	// (0x00045f7c) popup_clock_analogue_window_g1

0xbdd3,	// (0x00045f7c) popup_clock_analogue_window_g2

0x462f,	// (0x0003e7d8) popup_clock_analogue_window_g3

0x4638,	// (0x0003e7e1) popup_clock_analogue_window_g4

0x7b29,	// (0x00041cd2) popup_clock_analogue_window_g5

0x0004,

0xf6fd,	// (0x000498a6) popup_clock_analogue_window_g

0x4640,	// (0x0003e7e9) popup_clock_analogue_window_t1

0x464e,	// (0x0003e7f7) clock_digital_number_pane_ParamLimits

0x464e,	// (0x0003e7f7) clock_digital_number_pane

0x465a,	// (0x0003e803) clock_digital_number_pane_cp02_ParamLimits

0x465a,	// (0x0003e803) clock_digital_number_pane_cp02

0x4666,	// (0x0003e80f) clock_digital_number_pane_cp03_ParamLimits

0x4666,	// (0x0003e80f) clock_digital_number_pane_cp03

0x4672,	// (0x0003e81b) clock_digital_number_pane_cp04_ParamLimits

0x4672,	// (0x0003e81b) clock_digital_number_pane_cp04

0x467e,	// (0x0003e827) clock_digital_separator_pane_ParamLimits

0x467e,	// (0x0003e827) clock_digital_separator_pane

0x468a,	// (0x0003e833) popup_clock_digital_window_t1_ParamLimits

0x468a,	// (0x0003e833) popup_clock_digital_window_t1

0x7b29,	// (0x00041cd2) clock_digital_number_pane_g1

0x7b29,	// (0x00041cd2) clock_digital_number_pane_g2

0x0001,

0xf708,	// (0x000498b1) clock_digital_number_pane_g

0x7b29,	// (0x00041cd2) clock_digital_separator_pane_g1

0x7b29,	// (0x00041cd2) clock_digital_separator_pane_g2

0x0001,

0xf708,	// (0x000498b1) clock_digital_separator_pane_g

0x9ecc,	// (0x00044075) aid_fill_nsta_ParamLimits

0x9fe3,	// (0x0004418c) indicator_nsta_pane_ParamLimits

0xc4f0,	// (0x00046699) popup_clock_analogue_window

0xc4f0,	// (0x00046699) popup_clock_digital_window

0xd0b9,	// (0x00047262) grid_indicator_nsta_pane_ParamLimits

0xe0d9,	// (0x00048282) clock_nsta_pane_t2

0x0001,

0xfa9e,	// (0x00049c47) clock_nsta_pane_t

0x45f3,	// (0x0003e79c) aid_size_max_handle

0x950e,	// (0x000436b7) aid_size_min_handle

0xc265,	// (0x0004640e) editor_scroll_pane

0xeb53,	// (0x00048cfc) ex_editor_pane

0x9326,	// (0x000434cf) scroll_pane_cp13

0x90fe,	// (0x000432a7) scroll_pane_cp14

0xbe02,	// (0x00045fab) scroll_pane_cp36

0x95b6,	// (0x0004375f) list_single_graphic_hl_pane_cp2_ParamLimits

0x95b6,	// (0x0004375f) list_single_graphic_hl_pane_cp2

0xa77d,	// (0x00044926) list_single_graphic_hl_pane_ParamLimits

0xa77d,	// (0x00044926) list_single_graphic_hl_pane

0x79e9,	// (0x00041b92) aid_size_min_hl_cp1

0xeb5b,	// (0x00048d04) list_highlight_pane_cp34_ParamLimits

0xeb5b,	// (0x00048d04) list_highlight_pane_cp34

0xeb6c,	// (0x00048d15) list_single_graphic_hl_pane_g1_ParamLimits

0xeb6c,	// (0x00048d15) list_single_graphic_hl_pane_g1

0x0ed0,	// (0x0003b079) list_single_graphic_hl_pane_g2_ParamLimits

0x0ed0,	// (0x0003b079) list_single_graphic_hl_pane_g2

0x0ed0,	// (0x0003b079) list_single_graphic_hl_pane_g3_ParamLimits

0x0ed0,	// (0x0003b079) list_single_graphic_hl_pane_g3

0x91e5,	// (0x0004338e) list_single_graphic_hl_pane_g4_ParamLimits

0x91e5,	// (0x0004338e) list_single_graphic_hl_pane_g4

0x91f1,	// (0x0004339a) list_single_graphic_hl_pane_g5_ParamLimits

0x91f1,	// (0x0004339a) list_single_graphic_hl_pane_g5

0x0004,

0xfbe9,	// (0x00049d92) list_single_graphic_hl_pane_g_ParamLimits

0xfbe9,	// (0x00049d92) list_single_graphic_hl_pane_g

0x0edc,	// (0x0003b085) list_single_graphic_hl_pane_t1_ParamLimits

0x0edc,	// (0x0003b085) list_single_graphic_hl_pane_t1

0xeb79,	// (0x00048d22) aid_size_min_hl_cp2

0xeb82,	// (0x00048d2b) list_highlight_pane_cp34_cp2_ParamLimits

0xeb82,	// (0x00048d2b) list_highlight_pane_cp34_cp2

0xeb6c,	// (0x00048d15) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xeb6c,	// (0x00048d15) list_single_graphic_hl_pane_g1_cp2

0xeb8f,	// (0x00048d38) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xeb8f,	// (0x00048d38) list_single_graphic_hl_pane_g2_cp2

0xeb9b,	// (0x00048d44) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xeb9b,	// (0x00048d44) list_single_graphic_hl_pane_g3_cp2

0xc0da,	// (0x00046283) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc0da,	// (0x00046283) list_single_graphic_hl_pane_g4_cp2

0xe972,	// (0x00048b1b) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xe972,	// (0x00048b1b) list_single_graphic_hl_pane_g5_cp2

0x97e7,	// (0x00043990) control_pane_g4_ParamLimits

0x97e7,	// (0x00043990) control_pane_g4

0xbafc,	// (0x00045ca5) bg_popup_sub_pane_cp10_ParamLimits

0xe4dd,	// (0x00048686) list_choice_list_pane_ParamLimits

0xe4ec,	// (0x00048695) scroll_pane_cp23

0x8c12,	// (0x00042dbb) bg_popup_preview_window_pane_cp02_ParamLimits

0xe9ae,	// (0x00048b57) list_preview_fixed_pane_ParamLimits

0xe9c4,	// (0x00048b6d) list_preview_fixed_pane_cp_ParamLimits

0xe9c4,	// (0x00048b6d) list_preview_fixed_pane_cp

0xe9d0,	// (0x00048b79) popup_preview_fixed_window_g1_ParamLimits

0xe9d0,	// (0x00048b79) popup_preview_fixed_window_g1

0xe9dc,	// (0x00048b85) popup_preview_fixed_window_g2_ParamLimits

0xe9dc,	// (0x00048b85) popup_preview_fixed_window_g2

0x0002,

0xfb71,	// (0x00049d1a) popup_preview_fixed_window_g_ParamLimits

0xfb71,	// (0x00049d1a) popup_preview_fixed_window_g

0x4583,	// (0x0003e72c) aid_navi_side_left_pane_ParamLimits

0x4593,	// (0x0003e73c) aid_navi_side_right_pane_ParamLimits

0x45a2,	// (0x0003e74b) navi_icon_pane_stacon_ParamLimits

0x45b2,	// (0x0003e75b) navi_navi_pane_stacon_ParamLimits

0x45a2,	// (0x0003e74b) navi_text_pane_stacon_ParamLimits

0x4236,	// (0x0003e3df) main_text_info_pane

0xebbd,	// (0x00048d66) listscroll_text_info_pane

0xebc5,	// (0x00048d6e) list_text_info_pane_ParamLimits

0xebc5,	// (0x00048d6e) list_text_info_pane

0xebd4,	// (0x00048d7d) scroll_pane_cp24_ParamLimits

0xebd4,	// (0x00048d7d) scroll_pane_cp24

0xab4a,	// (0x00044cf3) list_text_info_pane_t1_ParamLimits

0xab4a,	// (0x00044cf3) list_text_info_pane_t1

0x9955,	// (0x00043afe) popup_fast_swap2_window_ParamLimits

0x9955,	// (0x00043afe) popup_fast_swap2_window

0xebf2,	// (0x00048d9b) aid_size_cell_fast2

0x7b1f,	// (0x00041cc8) bg_popup_window_pane_cp17

0xc9a7,	// (0x00046b50) heading_pane_cp2

0x8e80,	// (0x00043029) listscroll_fast2_pane

0xebfc,	// (0x00048da5) grid_fast2_pane

0xec04,	// (0x00048dad) listscroll_fast2_pane_g1

0xec0c,	// (0x00048db5) listscroll_fast2_pane_g2

0x0001,

0xfbf4,	// (0x00049d9d) listscroll_fast2_pane_g

0x9326,	// (0x000434cf) scroll_pane_cp26

0xec14,	// (0x00048dbd) cell_fast2_pane_ParamLimits

0xec14,	// (0x00048dbd) cell_fast2_pane

0xec2a,	// (0x00048dd3) cell_fast2_pane_g1

0xec33,	// (0x00048ddc) cell_fast2_pane_g2

0xec3c,	// (0x00048de5) cell_fast2_pane_g3

0x0002,

0xfbf9,	// (0x00049da2) cell_fast2_pane_g

0x8f57,	// (0x00043100) grid_highlight_pane_cp9

0x4a3f,	// (0x0003ebe8) main_eswt_pane_ParamLimits

0x4a3f,	// (0x0003ebe8) main_eswt_pane

0xebe9,	// (0x00048d92) list_single_text_info_pane

0xec44,	// (0x00048ded) eswt_ctrl_button_pane

0xec44,	// (0x00048ded) eswt_ctrl_canvas_pane

0xec4c,	// (0x00048df5) eswt_ctrl_combo_pane

0xec44,	// (0x00048ded) eswt_ctrl_default_pane

0xec44,	// (0x00048ded) eswt_ctrl_label_pane

0xec54,	// (0x00048dfd) eswt_ctrl_wait_pane

0xec5c,	// (0x00048e05) eswt_shell_pane

0x7b1f,	// (0x00041cc8) listscroll_eswt_app_pane

0xec78,	// (0x00048e21) popup_eswt_tasktip_window_ParamLimits

0xec78,	// (0x00048e21) popup_eswt_tasktip_window

0xc67d,	// (0x00046826) bg_popup_window_pane_cp18

0xec89,	// (0x00048e32) eswt_control_pane_g1_ParamLimits

0xec89,	// (0x00048e32) eswt_control_pane_g1

0xec96,	// (0x00048e3f) eswt_control_pane_g2_ParamLimits

0xec96,	// (0x00048e3f) eswt_control_pane_g2

0xeca3,	// (0x00048e4c) eswt_control_pane_g3_ParamLimits

0xeca3,	// (0x00048e4c) eswt_control_pane_g3

0xecb0,	// (0x00048e59) eswt_control_pane_g4_ParamLimits

0xecb0,	// (0x00048e59) eswt_control_pane_g4

0x0003,

0xfc00,	// (0x00049da9) eswt_control_pane_g_ParamLimits

0xfc00,	// (0x00049da9) eswt_control_pane_g

0x91cb,	// (0x00043374) bg_button_pane_ParamLimits

0x91cb,	// (0x00043374) bg_button_pane

0x8f6c,	// (0x00043115) common_borders_pane_copy2_ParamLimits

0x8f6c,	// (0x00043115) common_borders_pane_copy2

0xecbd,	// (0x00048e66) control_button_pane_g1_ParamLimits

0xecbd,	// (0x00048e66) control_button_pane_g1

0xecc9,	// (0x00048e72) control_button_pane_g2_ParamLimits

0xecc9,	// (0x00048e72) control_button_pane_g2

0xecd5,	// (0x00048e7e) control_button_pane_g3_ParamLimits

0xecd5,	// (0x00048e7e) control_button_pane_g3

0x0002,

0xfc09,	// (0x00049db2) control_button_pane_g_ParamLimits

0xfc09,	// (0x00049db2) control_button_pane_g

0xece9,	// (0x00048e92) control_button_pane_t1

0xecf7,	// (0x00048ea0) control_button_pane_t2

0x0001,

0xfc10,	// (0x00049db9) control_button_pane_t

0xc5f1,	// (0x0004679a) bg_button_pane_g1

0xc601,	// (0x000467aa) bg_button_pane_g2

0xc5f9,	// (0x000467a2) bg_button_pane_g3

0xc611,	// (0x000467ba) bg_button_pane_g4

0xc609,	// (0x000467b2) bg_button_pane_g5

0xc619,	// (0x000467c2) bg_button_pane_g6

0xc621,	// (0x000467ca) bg_button_pane_g7

0xc631,	// (0x000467da) bg_button_pane_g8

0xc629,	// (0x000467d2) bg_button_pane_g9

0x0008,

0xf85f,	// (0x00049a08) bg_button_pane_g

0xe498,	// (0x00048641) common_borders_pane_ParamLimits

0xe498,	// (0x00048641) common_borders_pane

0xec89,	// (0x00048e32) eswt_control_pane_g1_copy1_ParamLimits

0xec89,	// (0x00048e32) eswt_control_pane_g1_copy1

0xec96,	// (0x00048e3f) eswt_control_pane_g2_copy1_ParamLimits

0xec96,	// (0x00048e3f) eswt_control_pane_g2_copy1

0xeca3,	// (0x00048e4c) eswt_control_pane_g3_copy1_ParamLimits

0xeca3,	// (0x00048e4c) eswt_control_pane_g3_copy1

0xecb0,	// (0x00048e59) eswt_control_pane_g4_copy1_ParamLimits

0xecb0,	// (0x00048e59) eswt_control_pane_g4_copy1

0xe4d3,	// (0x0004867c) bg_eswt_ctrl_canvas_pane_g1

0xe498,	// (0x00048641) common_borders_pane_cp2_ParamLimits

0xe498,	// (0x00048641) common_borders_pane_cp2

0xe498,	// (0x00048641) common_borders_pane_cp3_ParamLimits

0xe498,	// (0x00048641) common_borders_pane_cp3

0xed05,	// (0x00048eae) separator_horizontal_pane

0xbc6b,	// (0x00045e14) separator_vertical_pane

0xec89,	// (0x00048e32) eswt_control_pane_g1_copy2_ParamLimits

0xec89,	// (0x00048e32) eswt_control_pane_g1_copy2

0xec96,	// (0x00048e3f) eswt_control_pane_g2_copy2_ParamLimits

0xec96,	// (0x00048e3f) eswt_control_pane_g2_copy2

0xeca3,	// (0x00048e4c) eswt_control_pane_g3_copy2_ParamLimits

0xeca3,	// (0x00048e4c) eswt_control_pane_g3_copy2

0xecb0,	// (0x00048e59) eswt_control_pane_g4_copy2_ParamLimits

0xecb0,	// (0x00048e59) eswt_control_pane_g4_copy2

0x7b1f,	// (0x00041cc8) common_borders_pane_cp4

0xed0d,	// (0x00048eb6) separator_horizontal_pane_g1

0xed16,	// (0x00048ebf) separator_horizontal_pane_g2

0xed1f,	// (0x00048ec8) separator_horizontal_pane_g3

0x0002,

0xfc15,	// (0x00049dbe) separator_horizontal_pane_g

0xec89,	// (0x00048e32) eswt_control_pane_g1_copy3_ParamLimits

0xec89,	// (0x00048e32) eswt_control_pane_g1_copy3

0xec96,	// (0x00048e3f) eswt_control_pane_g2_copy3_ParamLimits

0xec96,	// (0x00048e3f) eswt_control_pane_g2_copy3

0xeca3,	// (0x00048e4c) eswt_control_pane_g3_copy3_ParamLimits

0xeca3,	// (0x00048e4c) eswt_control_pane_g3_copy3

0xecb0,	// (0x00048e59) eswt_control_pane_g4_copy3_ParamLimits

0xecb0,	// (0x00048e59) eswt_control_pane_g4_copy3

0x7b1f,	// (0x00041cc8) common_borders_pane_cp5

0xed28,	// (0x00048ed1) separator_vertical_pane_g1

0xed31,	// (0x00048eda) separator_vertical_pane_g2

0xed3a,	// (0x00048ee3) separator_vertical_pane_g3

0x0002,

0xfc1c,	// (0x00049dc5) separator_vertical_pane_g

0xec89,	// (0x00048e32) eswt_control_pane_g1_copy4_ParamLimits

0xec89,	// (0x00048e32) eswt_control_pane_g1_copy4

0xec96,	// (0x00048e3f) eswt_control_pane_g2_copy4_ParamLimits

0xec96,	// (0x00048e3f) eswt_control_pane_g2_copy4

0xeca3,	// (0x00048e4c) eswt_control_pane_g3_copy4_ParamLimits

0xeca3,	// (0x00048e4c) eswt_control_pane_g3_copy4

0xecb0,	// (0x00048e59) eswt_control_pane_g4_copy4_ParamLimits

0xecb0,	// (0x00048e59) eswt_control_pane_g4_copy4

0xab65,	// (0x00044d0e) eswt_ctrl_combo_button_pane

0xab6d,	// (0x00044d16) eswt_ctrl_input_pane

0xab75,	// (0x00044d1e) popup_choice_list_window_cp70

0xab7d,	// (0x00044d26) eswt_ctrl_input_pane_t1

0x7b1f,	// (0x00041cc8) input_focus_pane_cp70

0xe498,	// (0x00048641) bg_button_pane_cp70_ParamLimits

0xe498,	// (0x00048641) bg_button_pane_cp70

0xab8b,	// (0x00044d34) eswt_ctrl_combo_button_pane_g1

0xed43,	// (0x00048eec) wait_bar_pane_cp70

0xc67d,	// (0x00046826) bg_popup_window_pane_cp70_ParamLimits

0xc67d,	// (0x00046826) bg_popup_window_pane_cp70

0xed4b,	// (0x00048ef4) popup_eswt_tasktip_window_t1

0xed61,	// (0x00048f0a) wait_bar_pane_cp71_ParamLimits

0xed61,	// (0x00048f0a) wait_bar_pane_cp71

0xed6d,	// (0x00048f16) grid_eswt_app_pane

0xbc62,	// (0x00045e0b) scroll_pane_cp70

0xab93,	// (0x00044d3c) cell_eswt_app_pane_ParamLimits

0xab93,	// (0x00044d3c) cell_eswt_app_pane

0xabbb,	// (0x00044d64) cell_eswt_app_pane_g1_ParamLimits

0xabbb,	// (0x00044d64) cell_eswt_app_pane_g1

0xabea,	// (0x00044d93) cell_eswt_app_pane_g2_ParamLimits

0xabea,	// (0x00044d93) cell_eswt_app_pane_g2

0x0001,

0xfc23,	// (0x00049dcc) cell_eswt_app_pane_g_ParamLimits

0xfc23,	// (0x00049dcc) cell_eswt_app_pane_g

0xac13,	// (0x00044dbc) cell_eswt_app_pane_t1_ParamLimits

0xac13,	// (0x00044dbc) cell_eswt_app_pane_t1

0xed76,	// (0x00048f1f) grid_highlight_pane_cp70_ParamLimits

0xed76,	// (0x00048f1f) grid_highlight_pane_cp70

0x91e5,	// (0x0004338e) set_content_pane_g1

0xc3e4,	// (0x0004658d) status_small_volume_pane

0x5716,	// (0x0003f8bf) status_small_volume_pane_g1

0x571e,	// (0x0003f8c7) volume_small2_pane

0x5727,	// (0x0003f8d0) volume_small2_pane_g1

0x5730,	// (0x0003f8d9) volume_small2_pane_g2

0x5739,	// (0x0003f8e2) volume_small2_pane_g3

0x5742,	// (0x0003f8eb) volume_small2_pane_g4

0x574b,	// (0x0003f8f4) volume_small2_pane_g5

0x5754,	// (0x0003f8fd) volume_small2_pane_g6

0x575d,	// (0x0003f906) volume_small2_pane_g7

0x5766,	// (0x0003f90f) volume_small2_pane_g8

0x576f,	// (0x0003f918) volume_small2_pane_g9

0x5778,	// (0x0003f921) volume_small2_pane_g10

0x0009,

0xfc28,	// (0x00049dd1) volume_small2_pane_g

0xe806,	// (0x000489af) fep_vkb_top_text_pane_g1_ParamLimits

0xaad2,	// (0x00044c7b) fep_vkb_top_text_pane_t1_ParamLimits

0xe9e8,	// (0x00048b91) popup_preview_fixed_window_g3_ParamLimits

0xe9e8,	// (0x00048b91) popup_preview_fixed_window_g3

0x9e75,	// (0x0004401e) popup_toolbar_trans_pane

0xa631,	// (0x000447da) aid_height_set_list_ParamLimits

0xd87d,	// (0x00047a26) aid_size_parent_ParamLimits

0xbafc,	// (0x00045ca5) list_highlight_pane_cp2_ParamLimits

0x91e5,	// (0x0004338e) set_content_pane_g1_ParamLimits

0xa790,	// (0x00044939) list_single_image_pane_ParamLimits

0xa790,	// (0x00044939) list_single_image_pane

0xac45,	// (0x00044dee) aid_size_cell_image_ParamLimits

0xac45,	// (0x00044dee) aid_size_cell_image

0xac52,	// (0x00044dfb) grid_single_image_pane_ParamLimits

0xac52,	// (0x00044dfb) grid_single_image_pane

0x91e5,	// (0x0004338e) list_single_image_pane_g1_ParamLimits

0x91e5,	// (0x0004338e) list_single_image_pane_g1

0x91f1,	// (0x0004339a) list_single_image_pane_g2_ParamLimits

0x91f1,	// (0x0004339a) list_single_image_pane_g2

0x0001,

0xfc3d,	// (0x00049de6) list_single_image_pane_g_ParamLimits

0xfc3d,	// (0x00049de6) list_single_image_pane_g

0xed82,	// (0x00048f2b) list_single_image_pane_t1_ParamLimits

0xed82,	// (0x00048f2b) list_single_image_pane_t1

0xac5e,	// (0x00044e07) cell_image_list_pane_ParamLimits

0xac5e,	// (0x00044e07) cell_image_list_pane

0xac72,	// (0x00044e1b) cell_image_list_pane_g1

0xac7b,	// (0x00044e24) cell_image_list_pane_g2

0x0001,

0xfc42,	// (0x00049deb) cell_image_list_pane_g

0xed98,	// (0x00048f41) aid_size_cell_tb_trans_pane

0x91cb,	// (0x00043374) bg_tb_trans_pane

0xedaa,	// (0x00048f53) grid_tb_trans_pane

0xc5f1,	// (0x0004679a) bg_tb_trans_pane_g1

0xc601,	// (0x000467aa) bg_tb_trans_pane_g2

0xc5f9,	// (0x000467a2) bg_tb_trans_pane_g3

0xc611,	// (0x000467ba) bg_tb_trans_pane_g4

0xc609,	// (0x000467b2) bg_tb_trans_pane_g5

0xc631,	// (0x000467da) bg_tb_trans_pane_g6

0xc629,	// (0x000467d2) bg_tb_trans_pane_g7

0xc619,	// (0x000467c2) bg_tb_trans_pane_g8

0xc621,	// (0x000467ca) bg_tb_trans_pane_g9

0x0008,

0xfc47,	// (0x00049df0) bg_tb_trans_pane_g

0xedbe,	// (0x00048f67) cell_toolbar_trans_pane_ParamLimits

0xedbe,	// (0x00048f67) cell_toolbar_trans_pane

0xe4d3,	// (0x0004867c) cell_toolbar_trans_pane_g1

0xa9cf,	// (0x00044b78) list_form2_midp_pane_t1

0xa9dd,	// (0x00044b86) list_form2_midp_pane_t2

0x0001,

0xfae4,	// (0x00049c8d) list_form2_midp_pane_t

0xe1a7,	// (0x00048350) scroll_pane_cp51_ParamLimits

0xe31d,	// (0x000484c6) form2_midp_wait_pane_g1

0xe326,	// (0x000484cf) form2_midp_wait_pane_g2

0xe32f,	// (0x000484d8) form2_midp_wait_pane_g3

0x0002,

0xfaf9,	// (0x00049ca2) form2_midp_wait_pane_g

0x88e9,	// (0x00042a92) list_highlight_pane_cp21_ParamLimits

0xe36d,	// (0x00048516) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xe37c,	// (0x00048525) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xd00a,	// (0x000471b3) list_single_2graphic_im_pane_ParamLimits

0xd00a,	// (0x000471b3) list_single_2graphic_im_pane

0xac84,	// (0x00044e2d) list_single_2graphic_im_pane_g1_ParamLimits

0xac84,	// (0x00044e2d) list_single_2graphic_im_pane_g1

0xac95,	// (0x00044e3e) list_single_2graphic_im_pane_g2_ParamLimits

0xac95,	// (0x00044e3e) list_single_2graphic_im_pane_g2

0xaca1,	// (0x00044e4a) list_single_2graphic_im_pane_g3_ParamLimits

0xaca1,	// (0x00044e4a) list_single_2graphic_im_pane_g3

0x0003,

0xfc5a,	// (0x00049e03) list_single_2graphic_im_pane_g_ParamLimits

0xfc5a,	// (0x00049e03) list_single_2graphic_im_pane_g

0xacb5,	// (0x00044e5e) list_single_2graphic_im_pane_t1_ParamLimits

0xacb5,	// (0x00044e5e) list_single_2graphic_im_pane_t1

0xe9f4,	// (0x00048b9d) list_single_graphic_2heading_pane_fp_ParamLimits

0xe9f4,	// (0x00048b9d) list_single_graphic_2heading_pane_fp

0x78cb,	// (0x00041a74) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x78cb,	// (0x00041a74) list_single_graphic_2heading_pane_fp_g1

0xea08,	// (0x00048bb1) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xea08,	// (0x00048bb1) list_single_graphic_2heading_pane_fp_g2

0x9106,	// (0x000432af) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x9106,	// (0x000432af) list_single_graphic_2heading_pane_fp_g3

0xd0c7,	// (0x00047270) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xd0c7,	// (0x00047270) list_single_graphic_2heading_pane_fp_g4

0xea14,	// (0x00048bbd) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xea14,	// (0x00048bbd) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb81,	// (0x00049d2a) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb81,	// (0x00049d2a) list_single_graphic_2heading_pane_fp_g

0x79fe,	// (0x00041ba7) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x79fe,	// (0x00041ba7) list_single_graphic_2heading_pane_fp_t1

0x7903,	// (0x00041aac) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x7903,	// (0x00041aac) list_single_graphic_2heading_pane_fp_t2

0x7a14,	// (0x00041bbd) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x7a14,	// (0x00041bbd) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc63,	// (0x00049e0c) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc63,	// (0x00049e0c) list_single_graphic_2heading_pane_fp_t

0xe55c,	// (0x00048705) fep_hwr_write_pane_g5_ParamLimits

0xe55c,	// (0x00048705) fep_hwr_write_pane_g5

0xe568,	// (0x00048711) fep_hwr_write_pane_g6_ParamLimits

0xe568,	// (0x00048711) fep_hwr_write_pane_g6

0xec5c,	// (0x00048e05) eswt_shell_pane_ParamLimits

0xc67d,	// (0x00046826) bg_popup_window_pane_cp18_ParamLimits

0xd821,	// (0x000479ca) heading_pane_cp70

0xed4b,	// (0x00048ef4) popup_eswt_tasktip_window_t1_ParamLimits

0x9f10,	// (0x000440b9) aid_touch_tab_arrow_left

0x9f24,	// (0x000440cd) aid_touch_tab_arrow_right

0x87c2,	// (0x0004296b) title_pane_g3_ParamLimits

0x87c2,	// (0x0004296b) title_pane_g3

0x919b,	// (0x00043344) set_value_pane_g1

0x9e75,	// (0x0004401e) popup_toolbar_trans_pane_ParamLimits

0xed98,	// (0x00048f41) aid_size_cell_tb_trans_pane_ParamLimits

0x91cb,	// (0x00043374) bg_tb_trans_pane_ParamLimits

0xedaa,	// (0x00048f53) grid_tb_trans_pane_ParamLimits

0x8c12,	// (0x00042dbb) cont_note_pane_ParamLimits

0x8c12,	// (0x00042dbb) cont_note_pane

0x8f6c,	// (0x00043115) cont_snote2_single_text_pane_ParamLimits

0x8f6c,	// (0x00043115) cont_snote2_single_text_pane

0x8f6c,	// (0x00043115) cont_snote2_single_graphic_pane_ParamLimits

0x8f6c,	// (0x00043115) cont_snote2_single_graphic_pane

0xcbbd,	// (0x00046d66) cont_note_wait_pane_ParamLimits

0xcbbd,	// (0x00046d66) cont_note_wait_pane

0xcbbd,	// (0x00046d66) cont_note_image_pane_ParamLimits

0xcbbd,	// (0x00046d66) cont_note_image_pane

0xedf0,	// (0x00048f99) popup_note2_window_g1_ParamLimits

0xedf0,	// (0x00048f99) popup_note2_window_g1

0xee21,	// (0x00048fca) popup_note2_window_t1_ParamLimits

0xee21,	// (0x00048fca) popup_note2_window_t1

0xee66,	// (0x0004900f) popup_note2_window_t2_ParamLimits

0xee66,	// (0x0004900f) popup_note2_window_t2

0xeeab,	// (0x00049054) popup_note2_window_t3_ParamLimits

0xeeab,	// (0x00049054) popup_note2_window_t3

0xeef0,	// (0x00049099) popup_note2_window_t4_ParamLimits

0xeef0,	// (0x00049099) popup_note2_window_t4

0x8c96,	// (0x00042e3f) popup_note2_window_t5_ParamLimits

0x8c96,	// (0x00042e3f) popup_note2_window_t5

0x0004,

0xfc6f,	// (0x00049e18) popup_note2_window_t_ParamLimits

0xfc6f,	// (0x00049e18) popup_note2_window_t

0xef1f,	// (0x000490c8) popup_note2_image_window_g1_ParamLimits

0xef1f,	// (0x000490c8) popup_note2_image_window_g1

0xef2b,	// (0x000490d4) popup_note2_image_window_g2_ParamLimits

0xef2b,	// (0x000490d4) popup_note2_image_window_g2

0x0001,

0xfc7a,	// (0x00049e23) popup_note2_image_window_g_ParamLimits

0xfc7a,	// (0x00049e23) popup_note2_image_window_g

0xef3d,	// (0x000490e6) popup_note2_image_window_t1_ParamLimits

0xef3d,	// (0x000490e6) popup_note2_image_window_t1

0xef55,	// (0x000490fe) popup_note2_image_window_t2_ParamLimits

0xef55,	// (0x000490fe) popup_note2_image_window_t2

0xef6d,	// (0x00049116) popup_note2_image_window_t3_ParamLimits

0xef6d,	// (0x00049116) popup_note2_image_window_t3

0x0002,

0xfc7f,	// (0x00049e28) popup_note2_image_window_t_ParamLimits

0xfc7f,	// (0x00049e28) popup_note2_image_window_t

0xcbcb,	// (0x00046d74) popup_note2_wait_window_g1_ParamLimits

0xcbcb,	// (0x00046d74) popup_note2_wait_window_g1

0xcbd7,	// (0x00046d80) popup_note2_wait_window_g2_ParamLimits

0xcbd7,	// (0x00046d80) popup_note2_wait_window_g2

0xcbe3,	// (0x00046d8c) popup_note2_wait_window_g3_ParamLimits

0xcbe3,	// (0x00046d8c) popup_note2_wait_window_g3

0x0002,

0xf841,	// (0x000499ea) popup_note2_wait_window_g_ParamLimits

0xf841,	// (0x000499ea) popup_note2_wait_window_g

0xef89,	// (0x00049132) popup_note2_wait_window_t1_ParamLimits

0xef89,	// (0x00049132) popup_note2_wait_window_t1

0xefa7,	// (0x00049150) popup_note2_wait_window_t2_ParamLimits

0xefa7,	// (0x00049150) popup_note2_wait_window_t2

0xefc5,	// (0x0004916e) popup_note2_wait_window_t3_ParamLimits

0xefc5,	// (0x0004916e) popup_note2_wait_window_t3

0xefd7,	// (0x00049180) popup_note2_wait_window_t4_ParamLimits

0xefd7,	// (0x00049180) popup_note2_wait_window_t4

0x0003,

0xfc86,	// (0x00049e2f) popup_note2_wait_window_t_ParamLimits

0xfc86,	// (0x00049e2f) popup_note2_wait_window_t

0xefe9,	// (0x00049192) wait_bar2_pane_ParamLimits

0xefe9,	// (0x00049192) wait_bar2_pane

0xf001,	// (0x000491aa) popup_snote2_single_text_window_g1_ParamLimits

0xf001,	// (0x000491aa) popup_snote2_single_text_window_g1

0xf029,	// (0x000491d2) popup_snote2_single_text_window_t1_ParamLimits

0xf029,	// (0x000491d2) popup_snote2_single_text_window_t1

0xf075,	// (0x0004921e) popup_snote2_single_text_window_t2_ParamLimits

0xf075,	// (0x0004921e) popup_snote2_single_text_window_t2

0xf0c1,	// (0x0004926a) popup_snote2_single_text_window_t3_ParamLimits

0xf0c1,	// (0x0004926a) popup_snote2_single_text_window_t3

0xf102,	// (0x000492ab) popup_snote2_single_text_window_t4_ParamLimits

0xf102,	// (0x000492ab) popup_snote2_single_text_window_t4

0xf138,	// (0x000492e1) popup_snote2_single_text_window_t5_ParamLimits

0xf138,	// (0x000492e1) popup_snote2_single_text_window_t5

0x0004,

0xfc8f,	// (0x00049e38) popup_snote2_single_text_window_t_ParamLimits

0xfc8f,	// (0x00049e38) popup_snote2_single_text_window_t

0xf163,	// (0x0004930c) popup_snote2_single_graphic_window_g1_ParamLimits

0xf163,	// (0x0004930c) popup_snote2_single_graphic_window_g1

0xf18b,	// (0x00049334) popup_snote2_single_graphic_window_g2_ParamLimits

0xf18b,	// (0x00049334) popup_snote2_single_graphic_window_g2

0x0001,

0xfc9a,	// (0x00049e43) popup_snote2_single_graphic_window_g_ParamLimits

0xfc9a,	// (0x00049e43) popup_snote2_single_graphic_window_g

0xf1b3,	// (0x0004935c) popup_snote2_single_graphic_window_t1_ParamLimits

0xf1b3,	// (0x0004935c) popup_snote2_single_graphic_window_t1

0xf1ff,	// (0x000493a8) popup_snote2_single_graphic_window_t2_ParamLimits

0xf1ff,	// (0x000493a8) popup_snote2_single_graphic_window_t2

0xf0c1,	// (0x0004926a) popup_snote2_single_graphic_window_t3_ParamLimits

0xf0c1,	// (0x0004926a) popup_snote2_single_graphic_window_t3

0xf102,	// (0x000492ab) popup_snote2_single_graphic_window_t4_ParamLimits

0xf102,	// (0x000492ab) popup_snote2_single_graphic_window_t4

0xf138,	// (0x000492e1) popup_snote2_single_graphic_window_t5_ParamLimits

0xf138,	// (0x000492e1) popup_snote2_single_graphic_window_t5

0x0004,

0xfc9f,	// (0x00049e48) popup_snote2_single_graphic_window_t_ParamLimits

0xfc9f,	// (0x00049e48) popup_snote2_single_graphic_window_t

0xe140,	// (0x000482e9) clock_nsta_pane_cp2_t1

0xe140,	// (0x000482e9) clock_nsta_pane_cp2_t2

0x0001,

0xfaba,	// (0x00049c63) clock_nsta_pane_cp2_t

0x72e4,	// (0x0004148d) form_field_data_wide_pane_g1_ParamLimits

0x91e5,	// (0x0004338e) form_field_data_wide_pane_g2_ParamLimits

0x91e5,	// (0x0004338e) form_field_data_wide_pane_g2

0x91f1,	// (0x0004339a) form_field_data_wide_pane_g3_ParamLimits

0x91f1,	// (0x0004339a) form_field_data_wide_pane_g3

0x0002,

0xf680,	// (0x00049829) form_field_data_wide_pane_g_ParamLimits

0xf680,	// (0x00049829) form_field_data_wide_pane_g

0xa918,	// (0x00044ac1) grid_touch_3_pane_ParamLimits

0xa918,	// (0x00044ac1) grid_touch_3_pane

0xace6,	// (0x00044e8f) cell_touch_3_pane_ParamLimits

0xace6,	// (0x00044e8f) cell_touch_3_pane

0xe4d3,	// (0x0004867c) cell_touch_3_pane_g1

0xe4d3,	// (0x0004867c) cell_touch_3_pane_g2

0x0001,

0xfb3f,	// (0x00049ce8) cell_touch_3_pane_g

0x8cee,	// (0x00042e97) cont_query_data_pane

0x8cf6,	// (0x00042e9f) cont_query_data_pane_cp1

0xf24b,	// (0x000493f4) button_value_adjust_pane_cp7

0xf253,	// (0x000493fc) query_popup_pane_cp3

0xbe13,	// (0x00045fbc) bg_popup_sub_pane_cp22_ParamLimits

0x46a9,	// (0x0003e852) navi_navi_volume_pane_cp2

0x46c1,	// (0x0003e86a) popup_side_volume_key_window_g2

0x46cd,	// (0x0003e876) popup_side_volume_key_window_g3

0x0002,

0xf716,	// (0x000498bf) popup_side_volume_key_window_g

0x46e7,	// (0x0003e890) popup_side_volume_key_window_t2

0x0001,

0xf71d,	// (0x000498c6) popup_side_volume_key_window_t

0xc05d,	// (0x00046206) popup_side_volume_key_window_ParamLimits

0x0a08,	// (0x0003abb1) list_double_graphic_pane_g4_ParamLimits

0x0a08,	// (0x0003abb1) list_double_graphic_pane_g4

0x0ebc,	// (0x0003b065) list_single_2heading_msg_pane_ParamLimits

0x0ebc,	// (0x0003b065) list_single_2heading_msg_pane

0x0ef2,	// (0x0003b09b) list_single_2heading_msg_pane_g1_ParamLimits

0x0ef2,	// (0x0003b09b) list_single_2heading_msg_pane_g1

0x0efe,	// (0x0003b0a7) list_single_2heading_msg_pane_g2_ParamLimits

0x0efe,	// (0x0003b0a7) list_single_2heading_msg_pane_g2

0x0f11,	// (0x0003b0ba) list_single_2heading_msg_pane_g3_ParamLimits

0x0f11,	// (0x0003b0ba) list_single_2heading_msg_pane_g3

0x0f1d,	// (0x0003b0c6) list_single_2heading_msg_pane_g4_ParamLimits

0x0f1d,	// (0x0003b0c6) list_single_2heading_msg_pane_g4

0x0003,

0xfcaa,	// (0x00049e53) list_single_2heading_msg_pane_g_ParamLimits

0xfcaa,	// (0x00049e53) list_single_2heading_msg_pane_g

0x0f35,	// (0x0003b0de) list_single_2heading_msg_pane_t1_ParamLimits

0x0f35,	// (0x0003b0de) list_single_2heading_msg_pane_t1

0x0f5d,	// (0x0003b106) list_single_2heading_msg_pane_t2_ParamLimits

0x0f5d,	// (0x0003b106) list_single_2heading_msg_pane_t2

0x0fc8,	// (0x0003b171) list_single_2heading_msg_pane_t3_ParamLimits

0x0fc8,	// (0x0003b171) list_single_2heading_msg_pane_t3

0x7af2,	// (0x00041c9b) list_single_2heading_msg_pane_t4_ParamLimits

0x7af2,	// (0x00041c9b) list_single_2heading_msg_pane_t4

0x0003,

0xfcb3,	// (0x00049e5c) list_single_2heading_msg_pane_t_ParamLimits

0xfcb3,	// (0x00049e5c) list_single_2heading_msg_pane_t

0x87ce,	// (0x00042977) title_pane_g4_ParamLimits

0x87ce,	// (0x00042977) title_pane_g4

0x44f9,	// (0x0003e6a2) title_pane_stacon_g3_ParamLimits

0x44f9,	// (0x0003e6a2) title_pane_stacon_g3

0xede4,	// (0x00048f8d) list_single_2graphic_im_pane_g4_ParamLimits

0xede4,	// (0x00048f8d) list_single_2graphic_im_pane_g4

0xd64b,	// (0x000477f4) popup_side_volume_key_window_cp

0xdaa4,	// (0x00047c4d) main_idle_act2_pane_t1

0x4f00,	// (0x0003f0a9) toolbar_button_pane_g10

0x90c9,	// (0x00043272) popup_toolbar_window_cp1

0xe131,	// (0x000482da) clock_nsta_pane_cp_t1

0xe131,	// (0x000482da) clock_nsta_pane_cp_t2

0x0001,

0xfab5,	// (0x00049c5e) clock_nsta_pane_cp_t

0x46a9,	// (0x0003e852) navi_navi_volume_pane_cp2_ParamLimits

0x46b5,	// (0x0003e85e) popup_side_volume_key_window_g1_ParamLimits

0x46c1,	// (0x0003e86a) popup_side_volume_key_window_g2_ParamLimits

0x46cd,	// (0x0003e876) popup_side_volume_key_window_g3_ParamLimits

0xf716,	// (0x000498bf) popup_side_volume_key_window_g_ParamLimits

0x5396,	// (0x0003f53f) fep_hwr_aid_pane

0x5437,	// (0x0003f5e0) bg_fep_hwr_top_pane_g4_ParamLimits

0xe52c,	// (0x000486d5) fep_hwr_top_pane_g1_ParamLimits

0xe53e,	// (0x000486e7) fep_hwr_top_pane_g2_ParamLimits

0x5457,	// (0x0003f600) fep_hwr_top_pane_g3_ParamLimits

0xfb0a,	// (0x00049cb3) fep_hwr_top_pane_g_ParamLimits

0x546c,	// (0x0003f615) fep_hwr_top_text_pane_ParamLimits

0xd44b,	// (0x000475f4) aid_touch_tab_arrow_arrow_2

0xd454,	// (0x000475fd) aid_touch_tab_arrow_left_2

0x53aa,	// (0x0003f553) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x53dd,	// (0x0003f586) fep_hwr_prediction_pane

0xe671,	// (0x0004881a) fep_vkb_prediction_pane

0xaab2,	// (0x00044c5b) fep_vkb_side_pane_g3_ParamLimits

0xaab2,	// (0x00044c5b) fep_vkb_side_pane_g3

0x55db,	// (0x0003f784) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x5645,	// (0x0003f7ee) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x5652,	// (0x0003f7fb) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb9,	// (0x00049d62) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x5781,	// (0x0003f92a) fep_hwr_prediction_pane_g1

0x578b,	// (0x0003f934) fep_hwr_prediction_pane_g2

0x5793,	// (0x0003f93c) fep_hwr_prediction_pane_g3

0x579b,	// (0x0003f944) fep_hwr_prediction_pane_g4

0x0003,

0xfcbc,	// (0x00049e65) fep_hwr_prediction_pane_g

0xf264,	// (0x0004940d) fep_vkb_prediction_pane_g1

0xf26e,	// (0x00049417) fep_vkb_prediction_pane_g2

0xf276,	// (0x0004941f) fep_vkb_prediction_pane_g3

0xf27e,	// (0x00049427) fep_vkb_prediction_pane_g4

0x0003,

0xfcc5,	// (0x00049e6e) fep_vkb_prediction_pane_g

0x51ce,	// (0x0003f377) slider_set_pane_g3

0x51e2,	// (0x0003f38b) slider_set_pane_g4

0x51fa,	// (0x0003f3a3) slider_set_pane_g5

0x51ce,	// (0x0003f377) slider_set_pane_g6

0xa5fb,	// (0x000447a4) slider_set_pane_g7

0xd8a0,	// (0x00047a49) slider_form_pane_g3

0xd8a9,	// (0x00047a52) slider_form_pane_g4

0xd8b1,	// (0x00047a5a) slider_form_pane_g5

0xd8a0,	// (0x00047a49) slider_form_pane_g6

0xa763,	// (0x0004490c) slider_form_pane_g7

0xdced,	// (0x00047e96) slider_set_pane_vc_g3

0xdcf6,	// (0x00047e9f) slider_set_pane_vc_g4

0xdcff,	// (0x00047ea8) slider_set_pane_vc_g5

0xdced,	// (0x00047e96) slider_set_pane_vc_g6

0xdd08,	// (0x00047eb1) slider_set_pane_vc_g7

0xdced,	// (0x00047e96) slider_form_pane_vc_g1

0xdcf6,	// (0x00047e9f) slider_form_pane_vc_g2

0xdcff,	// (0x00047ea8) slider_form_pane_vc_g3

0xdced,	// (0x00047e96) slider_form_pane_vc_g4

0xde7c,	// (0x00048025) slider_form_pane_vc_g5

0x0004,

0xfa87,	// (0x00049c30) slider_form_pane_vc_g

0x4236,	// (0x0003e3df) main_idle_act3_pane

0xf286,	// (0x0004942f) ai3_links_pane

0xad2d,	// (0x00044ed6) popup_ai3_data_window_ParamLimits

0xad2d,	// (0x00044ed6) popup_ai3_data_window

0x7b1f,	// (0x00041cc8) grid_ai3_links_pane

0xad45,	// (0x00044eee) cell_ai3_links_pane_ParamLimits

0xad45,	// (0x00044eee) cell_ai3_links_pane

0xf28f,	// (0x00049438) bg_popup_sub_pane_cp11

0xf29c,	// (0x00049445) cell_ai3_links_pane_g1

0x7b1f,	// (0x00041cc8) bg_popup_sub_pane_cp12

0xf2c1,	// (0x0004946a) heading_ai3_data_pane

0xf2c9,	// (0x00049472) list_ai3_gene_pane

0xf2d5,	// (0x0004947e) popup_ai3_data_window_g1

0xf2dd,	// (0x00049486) heading_ai3_data_pane_g1

0xf2e5,	// (0x0004948e) heading_ai3_data_pane_t1

0xf2f3,	// (0x0004949c) list_double_ai3_gene_pane_ParamLimits

0xf2f3,	// (0x0004949c) list_double_ai3_gene_pane

0xf300,	// (0x000494a9) list_single_ai3_gene_pane_ParamLimits

0xf300,	// (0x000494a9) list_single_ai3_gene_pane

0xe498,	// (0x00048641) list_highlight_pane_cp7_ParamLimits

0xe498,	// (0x00048641) list_highlight_pane_cp7

0xf30d,	// (0x000494b6) list_single_a13_gene_pane_t1_ParamLimits

0xf30d,	// (0x000494b6) list_single_a13_gene_pane_t1

0xf324,	// (0x000494cd) list_single_ai3_gene_pane_g1

0xf32d,	// (0x000494d6) list_single_ai3_gene_pane_g2

0x0001,

0xfcce,	// (0x00049e77) list_single_ai3_gene_pane_g

0xf335,	// (0x000494de) list_double_ai3_gene_pane_g1_ParamLimits

0xf335,	// (0x000494de) list_double_ai3_gene_pane_g1

0xf341,	// (0x000494ea) list_double_ai3_gene_pane_t1_ParamLimits

0xf341,	// (0x000494ea) list_double_ai3_gene_pane_t1

0xf35d,	// (0x00049506) list_double_ai3_gene_pane_t2_ParamLimits

0xf35d,	// (0x00049506) list_double_ai3_gene_pane_t2

0xf372,	// (0x0004951b) list_double_ai3_gene_pane_t3_ParamLimits

0xf372,	// (0x0004951b) list_double_ai3_gene_pane_t3

0x0002,

0xfcd3,	// (0x00049e7c) list_double_ai3_gene_pane_t_ParamLimits

0xfcd3,	// (0x00049e7c) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x7a2a,	// (0x00041bd3) aid_size_min_col_2

0xad19,	// (0x00044ec2) aid_size_min_msg_ParamLimits

0xad19,	// (0x00044ec2) aid_size_min_msg

0xaac6,	// (0x00044c6f) fep_vkb_top_text_pane_g2_ParamLimits

0xaac6,	// (0x00044c6f) fep_vkb_top_text_pane_g2

0x0001,

0xfb3a,	// (0x00049ce3) fep_vkb_top_text_pane_g_ParamLimits

0xfb3a,	// (0x00049ce3) fep_vkb_top_text_pane_g

0x4236,	// (0x0003e3df) main_hc_apps_shell_pane

0xf38f,	// (0x00049538) grid_hc_apps_pane_ParamLimits

0xf38f,	// (0x00049538) grid_hc_apps_pane

0xf39e,	// (0x00049547) list_hc_apps_pane

0xf3a6,	// (0x0004954f) scroll_pane_cp37_ParamLimits

0xf3a6,	// (0x0004954f) scroll_pane_cp37

0xad5b,	// (0x00044f04) cell_hc_apps_pane_ParamLimits

0xad5b,	// (0x00044f04) cell_hc_apps_pane

0xadf5,	// (0x00044f9e) cell_hc_apps_pane_g1_ParamLimits

0xadf5,	// (0x00044f9e) cell_hc_apps_pane_g1

0xf3b2,	// (0x0004955b) cell_hc_apps_pane_g2_ParamLimits

0xf3b2,	// (0x0004955b) cell_hc_apps_pane_g2

0xf3ce,	// (0x00049577) cell_hc_apps_pane_g3_ParamLimits

0xf3ce,	// (0x00049577) cell_hc_apps_pane_g3

0x0002,

0xfcda,	// (0x00049e83) cell_hc_apps_pane_g_ParamLimits

0xfcda,	// (0x00049e83) cell_hc_apps_pane_g

0xae22,	// (0x00044fcb) cell_hc_apps_pane_t1_ParamLimits

0xae22,	// (0x00044fcb) cell_hc_apps_pane_t1

0x8c12,	// (0x00042dbb) grid_highlight_pane_cp10_ParamLimits

0x8c12,	// (0x00042dbb) grid_highlight_pane_cp10

0xae60,	// (0x00045009) list_single_hc_apps_pane_ParamLimits

0xae60,	// (0x00045009) list_single_hc_apps_pane

0xae8c,	// (0x00045035) list_single_hc_apps_pane_g1

0x1bbc,	// (0x0003bd65) list_single_hc_apps_pane_g2

0x0001,

0xfce1,	// (0x00049e8a) list_single_hc_apps_pane_g

0x1bd5,	// (0x0003bd7e) list_single_hc_apps_pane_g2_copy1

0x1036,	// (0x0003b1df) list_single_hc_apps_pane_t1

0x88e9,	// (0x00042a92) bg_set_opt_pane_cp_ParamLimits

0x4447,	// (0x0003e5f0) setting_slider_pane_t1_ParamLimits

0x88f7,	// (0x00042aa0) setting_slider_pane_t2_ParamLimits

0x8910,	// (0x00042ab9) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x00049707) setting_slider_pane_t_ParamLimits

0x448d,	// (0x0003e636) slider_set_pane_ParamLimits

0x4929,	// (0x0003ead2) control_pane_g5_ParamLimits

0x4929,	// (0x0003ead2) control_pane_g5

0xd868,	// (0x00047a11) slider_set_pane_g1_ParamLimits

0x51c2,	// (0x0003f36b) slider_set_pane_g2_ParamLimits

0x51ce,	// (0x0003f377) slider_set_pane_g3_ParamLimits

0x51e2,	// (0x0003f38b) slider_set_pane_g4_ParamLimits

0x51fa,	// (0x0003f3a3) slider_set_pane_g5_ParamLimits

0x51ce,	// (0x0003f377) slider_set_pane_g6_ParamLimits

0xa5fb,	// (0x000447a4) slider_set_pane_g7_ParamLimits

0xf95d,	// (0x00049b06) slider_set_pane_g_ParamLimits

0x88e9,	// (0x00042a92) navi_icon_text_pane_ParamLimits

0x9ee2,	// (0x0004408b) aid_fill_nsta_2_ParamLimits

0x9f10,	// (0x000440b9) aid_touch_tab_arrow_left_ParamLimits

0x9f24,	// (0x000440cd) aid_touch_tab_arrow_right_ParamLimits

0x9fc0,	// (0x00044169) clock_nsta_pane_ParamLimits

0xd42d,	// (0x000475d6) navi_icon_pane_g1_ParamLimits

0xd439,	// (0x000475e2) navi_text_pane_t1_ParamLimits

0xe181,	// (0x0004832a) navi_icon_text_pane_g1_ParamLimits

0xe18d,	// (0x00048336) navi_icon_text_pane_t1_ParamLimits

0xae8c,	// (0x00045035) list_single_hc_apps_pane_g1_ParamLimits

0x1bbc,	// (0x0003bd65) list_single_hc_apps_pane_g2_ParamLimits

0xfce1,	// (0x00049e8a) list_single_hc_apps_pane_g_ParamLimits

0x1bd5,	// (0x0003bd7e) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x1036,	// (0x0003b1df) list_single_hc_apps_pane_t1_ParamLimits

0x86da,	// (0x00042883) popup_toolbar2_fixed_window_ParamLimits

0x86da,	// (0x00042883) popup_toolbar2_fixed_window

0x9e6d,	// (0x00044016) popup_toolbar2_float_window

0x7b1f,	// (0x00041cc8) bg_popup_sub_pane_cp27

0xf3f0,	// (0x00049599) grid_toolbar2_float_pane

0x7b1f,	// (0x00041cc8) bg_popup_sub_pane_cp26

0xf3f0,	// (0x00049599) grid_toolbar2_fixed_pane

0xaea5,	// (0x0004504e) cell_toolbar2_fixed_pane_ParamLimits

0xaea5,	// (0x0004504e) cell_toolbar2_fixed_pane

0xaec0,	// (0x00045069) cell_toolbar2_fixed_pane_g1

0xf3f8,	// (0x000495a1) toolbar2_fixed_button_pane

0xc5f1,	// (0x0004679a) toolbar2_fixed_button_pane_g1

0xc601,	// (0x000467aa) toolbar2_fixed_button_pane_g2

0xc5f9,	// (0x000467a2) toolbar2_fixed_button_pane_g3

0xc611,	// (0x000467ba) toolbar2_fixed_button_pane_g4

0xc609,	// (0x000467b2) toolbar2_fixed_button_pane_g5

0xc619,	// (0x000467c2) toolbar2_fixed_button_pane_g6

0xc621,	// (0x000467ca) toolbar2_fixed_button_pane_g7

0xc631,	// (0x000467da) toolbar2_fixed_button_pane_g8

0xc629,	// (0x000467d2) toolbar2_fixed_button_pane_g9

0x0008,

0xf85f,	// (0x00049a08) toolbar2_fixed_button_pane_g

0xf400,	// (0x000495a9) cell_toolbar2_float_pane_ParamLimits

0xf400,	// (0x000495a9) cell_toolbar2_float_pane

0xf411,	// (0x000495ba) cell_toolbar2_float_pane_g1

0xf3f8,	// (0x000495a1) toolbar2_fixed_button_pane_cp

0xaa7b,	// (0x00044c24) fep_vkb_accented_list_pane_ParamLimits

0xaa7b,	// (0x00044c24) fep_vkb_accented_list_pane

0x55bb,	// (0x0003f764) bg_popup_fep_shadow_pane_g9

0xc265,	// (0x0004640e) bg_popup_fep_shadow_pane_cp3

0x930d,	// (0x000434b6) list_accented_list_pane

0xf41a,	// (0x000495c3) list_single_accented_list_pane_ParamLimits

0xf41a,	// (0x000495c3) list_single_accented_list_pane

0xc265,	// (0x0004640e) list_highlight_pane_cp10

0xf42b,	// (0x000495d4) list_single_accented_list_pane_t1

0x9daf,	// (0x00043f58) popup_slider_window_ParamLimits

0x9daf,	// (0x00043f58) popup_slider_window

0xf25b,	// (0x00049404) aid_indentation_list_msg

0xaf9f,	// (0x00045148) bg_popup_window_pane_cp19

0xf491,	// (0x0004963a) popup_slider_window_g1

0xf4ad,	// (0x00049656) popup_slider_window_g2

0xf4c9,	// (0x00049672) popup_slider_window_g3

0x0005,

0xfce6,	// (0x00049e8f) popup_slider_window_g

0xf4e5,	// (0x0004968e) popup_slider_window_t1

0xf529,	// (0x000496d2) small_volume_slider_vertical_pane

0xe4d3,	// (0x0004867c) small_volume_slider_vertical_pane_g1

0xe4d3,	// (0x0004867c) small_volume_slider_vertical_pane_g2

0xf545,	// (0x000496ee) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf8,	// (0x00049ea1) small_volume_slider_vertical_pane_g

0x865e,	// (0x00042807) area_side_right_pane_ParamLimits

0x865e,	// (0x00042807) area_side_right_pane

0xb057,	// (0x00045200) aid_size_side_button_ParamLimits

0xb057,	// (0x00045200) aid_size_side_button

0xb070,	// (0x00045219) grid_sctrl_middle_pane_ParamLimits

0xb070,	// (0x00045219) grid_sctrl_middle_pane

0x57d3,	// (0x0003f97c) sctrl_sk_bottom_pane

0x57e4,	// (0x0003f98d) sctrl_sk_top_pane

0x57f6,	// (0x0003f99f) aid_touch_sctrl_top

0x5803,	// (0x0003f9ac) bg_sctrl_sk_pane_ParamLimits

0x5803,	// (0x0003f9ac) bg_sctrl_sk_pane

0x5811,	// (0x0003f9ba) sctrl_sk_top_pane_g1

0x581e,	// (0x0003f9c7) sctrl_sk_top_pane_t1

0x57f6,	// (0x0003f99f) aid_touch_sctrl_bottom

0x5803,	// (0x0003f9ac) bg_sctrl_sk_pane_cp_ParamLimits

0x5803,	// (0x0003f9ac) bg_sctrl_sk_pane_cp

0x5839,	// (0x0003f9e2) sctrl_sk_bottom_pane_g1

0x581e,	// (0x0003f9c7) sctrl_sk_bottom_pane_t1

0xb086,	// (0x0004522f) cell_sctrl_middle_pane_ParamLimits

0xb086,	// (0x0004522f) cell_sctrl_middle_pane

0xb097,	// (0x00045240) aid_touch_sctrl_middle_ParamLimits

0xb097,	// (0x00045240) aid_touch_sctrl_middle

0xb0a4,	// (0x0004524d) bg_sctrl_middle_pane_ParamLimits

0xb0a4,	// (0x0004524d) bg_sctrl_middle_pane

0x6603,	// (0x000407ac) cell_sctrl_middle_pane_g1_ParamLimits

0x6603,	// (0x000407ac) cell_sctrl_middle_pane_g1

0xb0b2,	// (0x0004525b) cell_sctrl_middle_pane_g2_ParamLimits

0xb0b2,	// (0x0004525b) cell_sctrl_middle_pane_g2

0x0001,

0xfd04,	// (0x00049ead) cell_sctrl_middle_pane_g_ParamLimits

0xfd04,	// (0x00049ead) cell_sctrl_middle_pane_g

0xc5f1,	// (0x0004679a) bg_sctrl_middle_pane_g1

0xc5f9,	// (0x000467a2) bg_sctrl_middle_pane_g2

0xc601,	// (0x000467aa) bg_sctrl_middle_pane_g3

0xc609,	// (0x000467b2) bg_sctrl_middle_pane_g4

0xc611,	// (0x000467ba) bg_sctrl_middle_pane_g5

0xc619,	// (0x000467c2) bg_sctrl_middle_pane_g6

0xc621,	// (0x000467ca) bg_sctrl_middle_pane_g7

0xc629,	// (0x000467d2) bg_sctrl_middle_pane_g8

0x0007,

0xfd09,	// (0x00049eb2) bg_sctrl_middle_pane_g

0xc631,	// (0x000467da) bg_sctrl_middle_pane_g8_copy1

0xc5f1,	// (0x0004679a) bg_sctrl_sk_pane_g1

0xc601,	// (0x000467aa) bg_sctrl_sk_pane_g2

0xc5f9,	// (0x000467a2) bg_sctrl_sk_pane_g3

0x0008,

0xf85f,	// (0x00049a08) bg_sctrl_sk_pane_g

0x908e,	// (0x00043237) aid_size_touch_scroll_bar

0xc611,	// (0x000467ba) bg_sctrl_sk_pane_g4

0xc609,	// (0x000467b2) bg_sctrl_sk_pane_g5

0xc619,	// (0x000467c2) bg_sctrl_sk_pane_g6

0xc621,	// (0x000467ca) bg_sctrl_sk_pane_g7

0xc631,	// (0x000467da) bg_sctrl_sk_pane_g8

0xc629,	// (0x000467d2) bg_sctrl_sk_pane_g9

0x4ac9,	// (0x0003ec72) popup_fep_china_hwr2_fs_candidate_window

0x99aa,	// (0x00043b53) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x99aa,	// (0x00043b53) popup_fep_china_hwr2_fs_control_window

0x55db,	// (0x0003f784) sctrl_sk_top_pane_g2

0x0001,

0xfcff,	// (0x00049ea8) sctrl_sk_top_pane_g

0xb0bf,	// (0x00045268) aid_fep_china_hwr2_fs_cell_ParamLimits

0xb0bf,	// (0x00045268) aid_fep_china_hwr2_fs_cell

0xb0d3,	// (0x0004527c) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xb0d3,	// (0x0004527c) bg_popup_fep_shadow_pane_cp4

0xb0ea,	// (0x00045293) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xb0ea,	// (0x00045293) bg_popup_fep_shadow_pane_cp5

0xb0fc,	// (0x000452a5) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xb0fc,	// (0x000452a5) popup_fep_china_hwr2_fs_control_bar_grid

0xb110,	// (0x000452b9) popup_fep_china_hwr2_fs_control_funtion_grid

0x1c67,	// (0x0003be10) aid_fep_china_hwr2_fs_candi_cell

0x7b1f,	// (0x00041cc8) bg_popup_fep_shadow_pane_cp6

0x1c71,	// (0x0003be1a) popup_fep_china_hwr2_fs_candidate_grid

0xb118,	// (0x000452c1) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xb118,	// (0x000452c1) cell_fep_china_hwr2_fs_funtion_grid

0xe4d3,	// (0x0004867c) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x1c4c,	// (0x0003bdf5) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x1c4c,	// (0x0003bdf5) cell_fep_china_hwr2_fs_funtion_grid_g1

0x1c79,	// (0x0003be22) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x1c79,	// (0x0003be22) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd1a,	// (0x00049ec3) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd1a,	// (0x00049ec3) cell_fep_china_hwr2_fs_funtion_grid_g

0xb130,	// (0x000452d9) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xb130,	// (0x000452d9) cell_fep_china_hwr2_fs_funtion_grid_t1

0xb145,	// (0x000452ee) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xb145,	// (0x000452ee) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd1f,	// (0x00049ec8) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd1f,	// (0x00049ec8) cell_fep_china_hwr2_fs_funtion_grid_t

0x1c8f,	// (0x0003be38) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x1c97,	// (0x0003be40) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x1c9f,	// (0x0003be48) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd24,	// (0x00049ecd) popup_fep_china_hwr2_fs_control_bar_grid_g

0x1ca7,	// (0x0003be50) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x1ca7,	// (0x0003be50) cell_fep_china_hwr2_fs_candidate_grid

0x1cc0,	// (0x0003be69) popup_fep_china_hwr2_fs_candidate_grid_g20

0x1cc8,	// (0x0003be71) popup_fep_china_hwr2_fs_candidate_grid_g21

0xe4d3,	// (0x0004867c) cell_fep_china_hwr2_fs_candidate_grid_g1

0xe4d3,	// (0x0004867c) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb3f,	// (0x00049ce8) cell_fep_china_hwr2_fs_candidate_grid_g

0x1cd0,	// (0x0003be79) cell_fep_china_hwr2_fs_candidate_grid_t1

0xc456,	// (0x000465ff) clock_nsta_pane_cp_24_ParamLimits

0xc456,	// (0x000465ff) clock_nsta_pane_cp_24

0xc4b3,	// (0x0004665c) indicator_nsta_pane_cp_24_ParamLimits

0xc4b3,	// (0x0004665c) indicator_nsta_pane_cp_24

0xd338,	// (0x000474e1) heading_pane_g1

0x0001,

0xf8c4,	// (0x00049a6d) heading_pane_g

0xa840,	// (0x000449e9) grid_sct_catagory_button_pane

0xd179,	// (0x00047322) scroll_pane_cp5_ParamLimits

0xe1b3,	// (0x0004835c) button_value_adjust_pane_cp5_ParamLimits

0xe1b3,	// (0x0004835c) button_value_adjust_pane_cp5

0xe271,	// (0x0004841a) form2_midp_time_pane_ParamLimits

0x1cde,	// (0x0003be87) cell_sct_catagory_button_pane_ParamLimits

0x1cde,	// (0x0003be87) cell_sct_catagory_button_pane

0xe498,	// (0x00048641) bg_button_pane_cp01_ParamLimits

0xe498,	// (0x00048641) bg_button_pane_cp01

0xe4d3,	// (0x0004867c) cell_sct_catagory_button_pane_g1

0x9e1e,	// (0x00043fc7) popup_tb_extension_window

0xb161,	// (0x0004530a) aid_size_cell_ext_ParamLimits

0xb161,	// (0x0004530a) aid_size_cell_ext

0x8f6c,	// (0x00043115) bg_tb_trans_pane_cp1_ParamLimits

0x8f6c,	// (0x00043115) bg_tb_trans_pane_cp1

0xb187,	// (0x00045330) grid_tb_ext_pane_ParamLimits

0xb187,	// (0x00045330) grid_tb_ext_pane

0xb1bd,	// (0x00045366) cell_tb_ext_pane_ParamLimits

0xb1bd,	// (0x00045366) cell_tb_ext_pane

0xb1e1,	// (0x0004538a) cell_tb_ext_pane_g1_ParamLimits

0xb1e1,	// (0x0004538a) cell_tb_ext_pane_g1

0x1cf0,	// (0x0003be99) cell_tb_ext_pane_t1

0x8c12,	// (0x00042dbb) list_highlight_pane_cp11_ParamLimits

0x8c12,	// (0x00042dbb) list_highlight_pane_cp11

0x86ef,	// (0x00042898) popup_uni_indicator_window_ParamLimits

0x86ef,	// (0x00042898) popup_uni_indicator_window

0x91cb,	// (0x00043374) bg_popup_sub_pane_cp14

0x1d0b,	// (0x0003beb4) list_uniindi_pane

0x1d17,	// (0x0003bec0) uniindi_top_pane

0x8c12,	// (0x00042dbb) bg_uniindi_top_pane

0x1d36,	// (0x0003bedf) uniindi_top_pane_g1

0x1d4c,	// (0x0003bef5) uniindi_top_pane_g2

0x0003,

0xfd2b,	// (0x00049ed4) uniindi_top_pane_g

0x1d76,	// (0x0003bf1f) uniindi_top_pane_t1

0x1da0,	// (0x0003bf49) list_single_uniindi_pane_ParamLimits

0x1da0,	// (0x0003bf49) list_single_uniindi_pane

0xe4d3,	// (0x0004867c) bg_uniindi_top_pane_g1

0x1db2,	// (0x0003bf5b) list_single_uniindi_pane_g1

0x1dc5,	// (0x0003bf6e) list_single_uniindi_pane_t1

0x4236,	// (0x0003e3df) control_bg_pane

0x1dea,	// (0x0003bf93) bg_sctrl_sk_pane_cp1

0x1df3,	// (0x0003bf9c) bg_sctrl_sk_pane_cp2

0x1dfc,	// (0x0003bfa5) control_bg_pane_g1

0x1e05,	// (0x0003bfae) control_bg_pane_g2

0x0001,

0xfd34,	// (0x00049edd) control_bg_pane_g

0xe074,	// (0x0004821d) cell_indicator_nsta_pane_g1_ParamLimits

0xa945,	// (0x00044aee) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa3,	// (0x00049c4c) cell_indicator_nsta_pane_g_ParamLimits

0x78a1,	// (0x00041a4a) form2_midp_time_pane_t1_ParamLimits

0x5388,	// (0x0003f531) main_idle_act4_pane_ParamLimits

0x5388,	// (0x0003f531) main_idle_act4_pane

0x9e1e,	// (0x00043fc7) popup_tb_extension_window_ParamLimits

0xb1a7,	// (0x00045350) tb_ext_find_pane_ParamLimits

0xb1a7,	// (0x00045350) tb_ext_find_pane

0x1e0e,	// (0x0003bfb7) ai_gene_pane_1_cp1

0xc2f9,	// (0x000464a2) ai_gene_pane_2_cp1

0x1e16,	// (0x0003bfbf) list_single_idle_plugin_calendar_pane

0x1e1f,	// (0x0003bfc8) list_single_idle_plugin_notification_pane

0x1e28,	// (0x0003bfd1) list_single_idle_plugin_player_pane

0xb1fe,	// (0x000453a7) list_single_idle_plugin_shortcut_pane_ParamLimits

0xb1fe,	// (0x000453a7) list_single_idle_plugin_shortcut_pane

0xb226,	// (0x000453cf) main_idle_act4_pane_t1

0xb23c,	// (0x000453e5) main_idle_act4_pane_t2

0x0001,

0xfd39,	// (0x00049ee2) main_idle_act4_pane_t

0xb252,	// (0x000453fb) middle_sk_idle_act4_pane_ParamLimits

0xb252,	// (0x000453fb) middle_sk_idle_act4_pane

0xb26e,	// (0x00045417) popup_clock_digital_analogue_window_cp2

0xb294,	// (0x0004543d) shortcut_wheel_idle_act4_pane_ParamLimits

0xb294,	// (0x0004543d) shortcut_wheel_idle_act4_pane

0xe4d3,	// (0x0004867c) shortcut_wheel_idle_act4_pane_g1

0xe4d3,	// (0x0004867c) shortcut_wheel_idle_act4_pane_g2

0xe4d3,	// (0x0004867c) shortcut_wheel_idle_act4_pane_g3

0xe4d3,	// (0x0004867c) shortcut_wheel_idle_act4_pane_g4

0xe4d3,	// (0x0004867c) shortcut_wheel_idle_act4_pane_g5

0x1e31,	// (0x0003bfda) shortcut_wheel_idle_act4_pane_g6

0x1e39,	// (0x0003bfe2) shortcut_wheel_idle_act4_pane_g7

0x1e41,	// (0x0003bfea) shortcut_wheel_idle_act4_pane_g8

0x1e49,	// (0x0003bff2) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd3e,	// (0x00049ee7) shortcut_wheel_idle_act4_pane_g

0xb30f,	// (0x000454b8) middle_sk_idle_act4_pane_g1_ParamLimits

0xb30f,	// (0x000454b8) middle_sk_idle_act4_pane_g1

0xb31d,	// (0x000454c6) middle_sk_idle_act4_pane_g2_ParamLimits

0xb31d,	// (0x000454c6) middle_sk_idle_act4_pane_g2

0x0001,

0xfd61,	// (0x00049f0a) middle_sk_idle_act4_pane_g_ParamLimits

0xfd61,	// (0x00049f0a) middle_sk_idle_act4_pane_g

0xb335,	// (0x000454de) middle_sk_idle_act4_pane_t1_ParamLimits

0xb335,	// (0x000454de) middle_sk_idle_act4_pane_t1

0xb364,	// (0x0004550d) grid_ai_shortcut_pane_ParamLimits

0xb364,	// (0x0004550d) grid_ai_shortcut_pane

0xb381,	// (0x0004552a) list_highlight_pane_cp16_ParamLimits

0xb381,	// (0x0004552a) list_highlight_pane_cp16

0xb38e,	// (0x00045537) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xb38e,	// (0x00045537) list_single_idle_plugin_shortcut_pane_g1

0xb39a,	// (0x00045543) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xb39a,	// (0x00045543) list_single_idle_plugin_shortcut_pane_g2

0xb3b6,	// (0x0004555f) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xb3b6,	// (0x0004555f) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd66,	// (0x00049f0f) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd66,	// (0x00049f0f) list_single_idle_plugin_shortcut_pane_g

0xb3cb,	// (0x00045574) cell_ai_shortcut_pane_ParamLimits

0xb3cb,	// (0x00045574) cell_ai_shortcut_pane

0xb3e1,	// (0x0004558a) cell_ai_shortcut_pane_g1_ParamLimits

0xb3e1,	// (0x0004558a) cell_ai_shortcut_pane_g1

0x1e0e,	// (0x0003bfb7) ai_gene_pane_1_cp2

0x1e51,	// (0x0003bffa) ai_gene_pane_2_cp2

0x1e59,	// (0x0003c002) list_highlight_pane_cp15

0x1e62,	// (0x0003c00b) list_single_idle_plugin_calendar_pane_g1

0x1e59,	// (0x0003c002) list_highlight_pane_cp17

0x1e6a,	// (0x0003c013) list_single_idle_plugin_calendar_pane_g1_copy1

0x1e72,	// (0x0003c01b) list_single_idle_plugin_player_pane_g1

0xdb30,	// (0x00047cd9) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd6d,	// (0x00049f16) list_single_idle_plugin_player_pane_g

0x1e7a,	// (0x0003c023) list_single_idle_plugin_player_pane_t1

0x1e88,	// (0x0003c031) list_single_idle_plugin_player_pane_t2

0x1e96,	// (0x0003c03f) list_single_idle_plugin_player_pane_t3

0x1ea4,	// (0x0003c04d) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd72,	// (0x00049f1b) list_single_idle_plugin_player_pane_t

0x1eb2,	// (0x0003c05b) wait_bar_pane_cp15

0x1eba,	// (0x0003c063) grid_ai_notification_pane

0xdb30,	// (0x00047cd9) list_single_idle_plugin_notification_pane_g1

0xb403,	// (0x000455ac) cell_ai_notification_pane_ParamLimits

0xb403,	// (0x000455ac) cell_ai_notification_pane

0x1ec3,	// (0x0003c06c) cell_ai_notification_pane_g1

0x1ecb,	// (0x0003c074) cell_ai_notification_pane_t1

0xb410,	// (0x000455b9) tb_ext_find_button_pane

0xb418,	// (0x000455c1) tb_ext_find_pane_g1

0xb420,	// (0x000455c9) tb_ext_find_pane_t1

0xbdd3,	// (0x00045f7c) tb_ext_find_button_pane_g1

0x1ed9,	// (0x0003c082) tb_ext_find_button_pane_g2

0x0001,

0xfd7b,	// (0x00049f24) tb_ext_find_button_pane_g

0xb226,	// (0x000453cf) main_idle_act4_pane_t1_ParamLimits

0xb23c,	// (0x000453e5) main_idle_act4_pane_t2_ParamLimits

0xfd39,	// (0x00049ee2) main_idle_act4_pane_t_ParamLimits

0xb26e,	// (0x00045417) popup_clock_digital_analogue_window_cp2_ParamLimits

0xb284,	// (0x0004542d) sat_plugin_idle_act4_pane_ParamLimits

0xb284,	// (0x0004542d) sat_plugin_idle_act4_pane

0xb42e,	// (0x000455d7) sat_plugin_idle_act4_pane_t1_ParamLimits

0xb42e,	// (0x000455d7) sat_plugin_idle_act4_pane_t1

0xb446,	// (0x000455ef) sat_plugin_idle_act4_pane_t2_ParamLimits

0xb446,	// (0x000455ef) sat_plugin_idle_act4_pane_t2

0xb45e,	// (0x00045607) sat_plugin_idle_act4_pane_t3_ParamLimits

0xb45e,	// (0x00045607) sat_plugin_idle_act4_pane_t3

0xb476,	// (0x0004561f) sat_plugin_idle_act4_pane_t4_ParamLimits

0xb476,	// (0x0004561f) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd80,	// (0x00049f29) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd80,	// (0x00049f29) sat_plugin_idle_act4_pane_t

0x42f9,	// (0x0003e4a2) popup_battery_window_ParamLimits

0x42f9,	// (0x0003e4a2) popup_battery_window

0x8c12,	// (0x00042dbb) bg_popup_sub_pane_cp25_ParamLimits

0x8c12,	// (0x00042dbb) bg_popup_sub_pane_cp25

0x1ee2,	// (0x0003c08b) popup_battery_window_g1_ParamLimits

0x1ee2,	// (0x0003c08b) popup_battery_window_g1

0x1eee,	// (0x0003c097) popup_battery_window_t1_ParamLimits

0x1eee,	// (0x0003c097) popup_battery_window_t1

0x1f00,	// (0x0003c0a9) popup_battery_window_t2_ParamLimits

0x1f00,	// (0x0003c0a9) popup_battery_window_t2

0x0001,

0xfd89,	// (0x00049f32) popup_battery_window_t_ParamLimits

0xfd89,	// (0x00049f32) popup_battery_window_t

0x96ae,	// (0x00043857) midp_canvas_pane_ParamLimits

0x9703,	// (0x000438ac) midp_keypad_pane_ParamLimits

0x9703,	// (0x000438ac) midp_keypad_pane

0xbafc,	// (0x00045ca5) main_midp_pane_ParamLimits

0xe14f,	// (0x000482f8) signal_pane_g2_cp_ParamLimits

0xb48e,	// (0x00045637) aid_size_cell_midp_keypad_ParamLimits

0xb48e,	// (0x00045637) aid_size_cell_midp_keypad

0xb4ac,	// (0x00045655) midp_keyp_game_grid_pane_ParamLimits

0xb4ac,	// (0x00045655) midp_keyp_game_grid_pane

0xb4cb,	// (0x00045674) midp_keyp_rocker_pane_ParamLimits

0xb4cb,	// (0x00045674) midp_keyp_rocker_pane

0xb50c,	// (0x000456b5) midp_keyp_sk_left_pane_ParamLimits

0xb50c,	// (0x000456b5) midp_keyp_sk_left_pane

0xb55e,	// (0x00045707) midp_keyp_sk_right_pane_ParamLimits

0xb55e,	// (0x00045707) midp_keyp_sk_right_pane

0x7b1f,	// (0x00041cc8) bg_button_pane_cp03

0xb5aa,	// (0x00045753) midp_keyp_sk_left_pane_g1

0x7b1f,	// (0x00041cc8) bg_button_pane_cp04

0xb5aa,	// (0x00045753) midp_keyp_sk_right_pane_g1

0xe4d3,	// (0x0004867c) midp_keyp_rocker_pane_g1

0xb5b3,	// (0x0004575c) keyp_game_cell_pane_ParamLimits

0xb5b3,	// (0x0004575c) keyp_game_cell_pane

0x7b1f,	// (0x00041cc8) bg_button_pane_cp02

0xb5d5,	// (0x0004577e) keyp_game_cell_pane_g1

0x86a0,	// (0x00042849) popup_fep_vkb2_window_ParamLimits

0x86a0,	// (0x00042849) popup_fep_vkb2_window

0xb5de,	// (0x00045787) aid_size_cell_vkb2_ParamLimits

0xb5de,	// (0x00045787) aid_size_cell_vkb2

0xb614,	// (0x000457bd) popup_fep_vkb2_window_g1_ParamLimits

0xb614,	// (0x000457bd) popup_fep_vkb2_window_g1

0xb664,	// (0x0004580d) vkb2_area_bottom_pane_ParamLimits

0xb664,	// (0x0004580d) vkb2_area_bottom_pane

0xb6a2,	// (0x0004584b) vkb2_area_keypad_pane_ParamLimits

0xb6a2,	// (0x0004584b) vkb2_area_keypad_pane

0xb6e0,	// (0x00045889) vkb2_area_top_pane_ParamLimits

0xb6e0,	// (0x00045889) vkb2_area_top_pane

0xb75c,	// (0x00045905) vkb2_top_entry_pane_ParamLimits

0xb75c,	// (0x00045905) vkb2_top_entry_pane

0xb789,	// (0x00045932) vkb2_top_grid_left_pane_ParamLimits

0xb789,	// (0x00045932) vkb2_top_grid_left_pane

0xb7a9,	// (0x00045952) vkb2_top_grid_right_pane_ParamLimits

0xb7a9,	// (0x00045952) vkb2_top_grid_right_pane

0x5ee9,	// (0x00040092) vkb2_cell_keypad_pane_ParamLimits

0x5ee9,	// (0x00040092) vkb2_cell_keypad_pane

0xb7ef,	// (0x00045998) vkb2_area_bottom_grid_pane_ParamLimits

0xb7ef,	// (0x00045998) vkb2_area_bottom_grid_pane

0xb815,	// (0x000459be) vkb2_area_bottom_pane_g1_ParamLimits

0xb815,	// (0x000459be) vkb2_area_bottom_pane_g1

0xb83b,	// (0x000459e4) vkb2_area_bottom_pane_g2_ParamLimits

0xb83b,	// (0x000459e4) vkb2_area_bottom_pane_g2

0xb86c,	// (0x00045a15) vkb2_area_bottom_pane_g3_ParamLimits

0xb86c,	// (0x00045a15) vkb2_area_bottom_pane_g3

0x0002,

0xfd8e,	// (0x00049f37) vkb2_area_bottom_pane_g_ParamLimits

0xfd8e,	// (0x00049f37) vkb2_area_bottom_pane_g

0x6061,	// (0x0004020a) vkb2_top_cell_left_pane_ParamLimits

0x6061,	// (0x0004020a) vkb2_top_cell_left_pane

0x2209,	// (0x0003c3b2) vkb2_top_entry_pane_g1_ParamLimits

0x2209,	// (0x0003c3b2) vkb2_top_entry_pane_g1

0x2217,	// (0x0003c3c0) vkb2_top_entry_pane_t1_ParamLimits

0x2217,	// (0x0003c3c0) vkb2_top_entry_pane_t1

0x2250,	// (0x0003c3f9) vkb2_top_entry_pane_t2_ParamLimits

0x2250,	// (0x0003c3f9) vkb2_top_entry_pane_t2

0x2282,	// (0x0003c42b) vkb2_top_entry_pane_t3_ParamLimits

0x2282,	// (0x0003c42b) vkb2_top_entry_pane_t3

0x0002,

0xfd95,	// (0x00049f3e) vkb2_top_entry_pane_t_ParamLimits

0xfd95,	// (0x00049f3e) vkb2_top_entry_pane_t

0xb8c2,	// (0x00045a6b) vkb2_top_grid_right_pane_g1_ParamLimits

0xb8c2,	// (0x00045a6b) vkb2_top_grid_right_pane_g1

0x6104,	// (0x000402ad) vkb2_top_grid_right_pane_g2_ParamLimits

0x6104,	// (0x000402ad) vkb2_top_grid_right_pane_g2

0x611c,	// (0x000402c5) vkb2_top_grid_right_pane_g3_ParamLimits

0x611c,	// (0x000402c5) vkb2_top_grid_right_pane_g3

0xb8d8,	// (0x00045a81) vkb2_top_grid_right_pane_g4_ParamLimits

0xb8d8,	// (0x00045a81) vkb2_top_grid_right_pane_g4

0x0003,

0xfd9c,	// (0x00049f45) vkb2_top_grid_right_pane_g_ParamLimits

0xfd9c,	// (0x00049f45) vkb2_top_grid_right_pane_g

0x614a,	// (0x000402f3) vkb2_top_cell_left_pane_g1

0x6161,	// (0x0004030a) vkb2_cell_keypad_pane_g1_ParamLimits

0x6161,	// (0x0004030a) vkb2_cell_keypad_pane_g1

0x22c4,	// (0x0003c46d) vkb2_cell_keypad_pane_t1_ParamLimits

0x22c4,	// (0x0003c46d) vkb2_cell_keypad_pane_t1

0x616f,	// (0x00040318) vkb2_cell_bottom_grid_pane_ParamLimits

0x616f,	// (0x00040318) vkb2_cell_bottom_grid_pane

0x61a8,	// (0x00040351) vkb2_cell_bottom_grid_pane_g1

0xb2b3,	// (0x0004545c) aid_call2_pane_cp02

0xb2bb,	// (0x00045464) aid_call_pane_cp02

0xb2c3,	// (0x0004546c) clock_digital_number_pane_cp10

0xb2cb,	// (0x00045474) clock_digital_number_pane_cp11

0xb2d3,	// (0x0004547c) clock_digital_number_pane_cp12

0xb2db,	// (0x00045484) clock_digital_number_pane_cp13

0xb2e3,	// (0x0004548c) clock_digital_separator_pane_cp10

0xbdd3,	// (0x00045f7c) popup_clock_digital_analogue_window_cp2_g1

0xbdd3,	// (0x00045f7c) popup_clock_digital_analogue_window_cp2_g2

0xb2eb,	// (0x00045494) popup_clock_digital_analogue_window_cp2_g3

0xbdd3,	// (0x00045f7c) popup_clock_digital_analogue_window_cp2_g4

0xb2eb,	// (0x00045494) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd51,	// (0x00049efa) popup_clock_digital_analogue_window_cp2_g

0xb2f3,	// (0x0004549c) popup_clock_digital_analogue_window_cp2_t1

0xb301,	// (0x000454aa) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd5c,	// (0x00049f05) popup_clock_digital_analogue_window_cp2_t

0xe4d3,	// (0x0004867c) clock_digital_number_pane_cp10_g1

0xe4d3,	// (0x0004867c) clock_digital_number_pane_cp10_g2

0x0001,

0xfb3f,	// (0x00049ce8) clock_digital_number_pane_cp10_g

0xe4d3,	// (0x0004867c) clock_digital_separator_pane_cp10_g1

0xe4d3,	// (0x0004867c) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb3f,	// (0x00049ce8) clock_digital_separator_pane_cp10_g

0x1d58,	// (0x0003bf01) uniindi_top_pane_g3

0x1d69,	// (0x0003bf12) uniindi_top_pane_g4

0x5f54,	// (0x000400fd) vkb2_row_keypad_pane_ParamLimits

0x5f54,	// (0x000400fd) vkb2_row_keypad_pane

0x61c4,	// (0x0004036d) vkb2_cell_t_keypad_pane_ParamLimits

0x61c4,	// (0x0004036d) vkb2_cell_t_keypad_pane

0x61d1,	// (0x0004037a) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x61d1,	// (0x0004037a) vkb2_cell_t_keypad_pane_cp08

0x61e1,	// (0x0004038a) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x61e1,	// (0x0004038a) vkb2_cell_t_keypad_pane_cp09

0x61f2,	// (0x0004039b) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x61f2,	// (0x0004039b) vkb2_cell_t_keypad_pane_cp01

0x6202,	// (0x000403ab) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x6202,	// (0x000403ab) vkb2_cell_t_keypad_pane_cp02

0x6212,	// (0x000403bb) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x6212,	// (0x000403bb) vkb2_cell_t_keypad_pane_cp03

0x6222,	// (0x000403cb) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x6222,	// (0x000403cb) vkb2_cell_t_keypad_pane_cp04

0x6232,	// (0x000403db) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x6232,	// (0x000403db) vkb2_cell_t_keypad_pane_cp05

0x6242,	// (0x000403eb) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x6242,	// (0x000403eb) vkb2_cell_t_keypad_pane_cp06

0x6252,	// (0x000403fb) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x6252,	// (0x000403fb) vkb2_cell_t_keypad_pane_cp07

0x6262,	// (0x0004040b) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x6262,	// (0x0004040b) vkb2_cell_t_keypad_pane_cp10

0x55db,	// (0x0003f784) vkb2_cell_t_keypad_pane_g1

0x22db,	// (0x0003c484) vkb2_cell_t_keypad_pane_t1

0x4236,	// (0x0003e3df) popup_grid_graphic2_window

0x22ed,	// (0x0003c496) aid_size_cell_graphic2_ParamLimits

0x22ed,	// (0x0003c496) aid_size_cell_graphic2

0x232b,	// (0x0003c4d4) bg_popup_window_pane_cp21_ParamLimits

0x232b,	// (0x0003c4d4) bg_popup_window_pane_cp21

0x2339,	// (0x0003c4e2) graphic2_pages_pane_ParamLimits

0x2339,	// (0x0003c4e2) graphic2_pages_pane

0x2382,	// (0x0003c52b) grid_graphic2_control_pane_ParamLimits

0x2382,	// (0x0003c52b) grid_graphic2_control_pane

0x23c0,	// (0x0003c569) grid_graphic2_pane_ParamLimits

0x23c0,	// (0x0003c569) grid_graphic2_pane

0x242f,	// (0x0003c5d8) cell_graphic2_pane

0x4236,	// (0x0003e3df) main_comp_mode_pane

0xf2c9,	// (0x00049472) list_ai3_gene_pane_ParamLimits

0xaf9f,	// (0x00045148) bg_popup_window_pane_cp19_ParamLimits

0xf439,	// (0x000495e2) bg_touch_area_indi_pane_ParamLimits

0xf439,	// (0x000495e2) bg_touch_area_indi_pane

0xf44f,	// (0x000495f8) bg_touch_area_indi_pane_cp01_ParamLimits

0xf44f,	// (0x000495f8) bg_touch_area_indi_pane_cp01

0xf465,	// (0x0004960e) bg_touch_area_indi_pane_cp02_ParamLimits

0xf465,	// (0x0004960e) bg_touch_area_indi_pane_cp02

0xf47b,	// (0x00049624) bg_touch_area_indi_pane_cp03_ParamLimits

0xf47b,	// (0x00049624) bg_touch_area_indi_pane_cp03

0xf491,	// (0x0004963a) popup_slider_window_g1_ParamLimits

0xf4ad,	// (0x00049656) popup_slider_window_g2_ParamLimits

0xf4c9,	// (0x00049672) popup_slider_window_g3_ParamLimits

0xfce6,	// (0x00049e8f) popup_slider_window_g_ParamLimits

0xf4e5,	// (0x0004968e) popup_slider_window_t1_ParamLimits

0xf529,	// (0x000496d2) small_volume_slider_vertical_pane_ParamLimits

0x242f,	// (0x0003c5d8) cell_graphic2_pane_ParamLimits

0x247a,	// (0x0003c623) bg_button_pane_cp10_ParamLimits

0x247a,	// (0x0003c623) bg_button_pane_cp10

0x248b,	// (0x0003c634) bg_button_pane_cp11_ParamLimits

0x248b,	// (0x0003c634) bg_button_pane_cp11

0x249c,	// (0x0003c645) graphic2_pages_pane_g1_ParamLimits

0x249c,	// (0x0003c645) graphic2_pages_pane_g1

0x24b7,	// (0x0003c660) graphic2_pages_pane_g2_ParamLimits

0x24b7,	// (0x0003c660) graphic2_pages_pane_g2

0x0001,

0xfdaa,	// (0x00049f53) graphic2_pages_pane_g_ParamLimits

0xfdaa,	// (0x00049f53) graphic2_pages_pane_g

0x24cf,	// (0x0003c678) graphic2_pages_pane_t1_ParamLimits

0x24cf,	// (0x0003c678) graphic2_pages_pane_t1

0x24e7,	// (0x0003c690) cell_graphic2_control_pane_ParamLimits

0x24e7,	// (0x0003c690) cell_graphic2_control_pane

0x2511,	// (0x0003c6ba) cell_graphic2_pane_g1_ParamLimits

0x2511,	// (0x0003c6ba) cell_graphic2_pane_g1

0xb8ee,	// (0x00045a97) cell_graphic2_pane_g2_ParamLimits

0xb8ee,	// (0x00045a97) cell_graphic2_pane_g2

0x251e,	// (0x0003c6c7) cell_graphic2_pane_g3_ParamLimits

0x251e,	// (0x0003c6c7) cell_graphic2_pane_g3

0xb8fb,	// (0x00045aa4) cell_graphic2_pane_g4_ParamLimits

0xb8fb,	// (0x00045aa4) cell_graphic2_pane_g4

0x252b,	// (0x0003c6d4) cell_graphic2_pane_g5_ParamLimits

0x252b,	// (0x0003c6d4) cell_graphic2_pane_g5

0x0004,

0xfdaf,	// (0x00049f58) cell_graphic2_pane_g_ParamLimits

0xfdaf,	// (0x00049f58) cell_graphic2_pane_g

0x254b,	// (0x0003c6f4) cell_graphic2_pane_t1_ParamLimits

0x254b,	// (0x0003c6f4) cell_graphic2_pane_t1

0xd32c,	// (0x000474d5) grid_highlight_pane_cp11_ParamLimits

0xd32c,	// (0x000474d5) grid_highlight_pane_cp11

0x8c12,	// (0x00042dbb) bg_button_pane_cp05

0x2580,	// (0x0003c729) cell_graphic2_control_pane_g1

0xe4d3,	// (0x0004867c) bg_touch_area_indi_pane_g1

0x25a8,	// (0x0003c751) aid_cmod_rocker_key_size

0x25b2,	// (0x0003c75b) aid_cmode_itu_key_size

0x25bc,	// (0x0003c765) main_cmode_video_pane

0x25c4,	// (0x0003c76d) main_comp_mode_itu_pane

0x25ce,	// (0x0003c777) main_comp_mode_rocker_pane

0x25d6,	// (0x0003c77f) cell_cmode_rocker_pane_ParamLimits

0x25d6,	// (0x0003c77f) cell_cmode_rocker_pane

0x25e8,	// (0x0003c791) cell_cmode_itu_pane_ParamLimits

0x25e8,	// (0x0003c791) cell_cmode_itu_pane

0x91cb,	// (0x00043374) bg_button_pane_cp06_ParamLimits

0x91cb,	// (0x00043374) bg_button_pane_cp06

0xe6ff,	// (0x000488a8) cell_cmode_rocker_pane_g1_ParamLimits

0xe6ff,	// (0x000488a8) cell_cmode_rocker_pane_g1

0x1c4c,	// (0x0003bdf5) cell_cmode_rocker_pane_g2_ParamLimits

0x1c4c,	// (0x0003bdf5) cell_cmode_rocker_pane_g2

0x0001,

0xfdbf,	// (0x00049f68) cell_cmode_rocker_pane_g_ParamLimits

0xfdbf,	// (0x00049f68) cell_cmode_rocker_pane_g

0x7b1f,	// (0x00041cc8) bg_button_pane_cp07

0x25fd,	// (0x0003c7a6) cell_cmode_itu_pane_g1

0x2606,	// (0x0003c7af) cell_cmode_itu_pane_t1

0x2614,	// (0x0003c7bd) cell_cmode_itu_pane_t2

0x0001,

0xfdc4,	// (0x00049f6d) cell_cmode_itu_pane_t

0x1dda,	// (0x0003bf83) aid_touch_ctrl_left

0x1de2,	// (0x0003bf8b) aid_touch_ctrl_right

0x7b1f,	// (0x00041cc8) compa_mode_pane

0x2622,	// (0x0003c7cb) aid_cmod_rocker_key_size_cp

0x262c,	// (0x0003c7d5) aid_cmode_itu_key_size_cp

0x2636,	// (0x0003c7df) compa_mode_pane_g1

0x263e,	// (0x0003c7e7) compa_mode_pane_g2

0x2646,	// (0x0003c7ef) compa_mode_pane_g3

0x0002,

0xfdc9,	// (0x00049f72) compa_mode_pane_g

0x264e,	// (0x0003c7f7) main_comp_mode_itu_pane_cp

0x2658,	// (0x0003c801) main_comp_mode_rocker_pane_cp

0x2662,	// (0x0003c80b) cell_cmode_itu_pane_cp_ParamLimits

0x2662,	// (0x0003c80b) cell_cmode_itu_pane_cp

0x2677,	// (0x0003c820) cell_cmode_rocker_pane_cp_ParamLimits

0x2677,	// (0x0003c820) cell_cmode_rocker_pane_cp

0x91cb,	// (0x00043374) bg_button_pane_cp06_cp_ParamLimits

0x91cb,	// (0x00043374) bg_button_pane_cp06_cp

0xe6ff,	// (0x000488a8) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xe6ff,	// (0x000488a8) cell_cmode_rocker_pane_g1_cp

0xe4d3,	// (0x0004867c) cell_cmode_rocker_pane_g2_cp

0x7b1f,	// (0x00041cc8) bg_button_pane_cp07_cp

0x2689,	// (0x0003c832) cell_cmode_itu_pane_g1_cp

0x2692,	// (0x0003c83b) cell_cmode_itu_pane_t1_cp

0x26a0,	// (0x0003c849) cell_cmode_itu_pane_t2_cp

0xa75b,	// (0x00044904) settings_code_pane_cp2

0x88e9,	// (0x00042a92) bg_popup_window_pane_cp3_ParamLimits

0x8e10,	// (0x00042fb9) heading_pane_cp3_ParamLimits

0x8e1c,	// (0x00042fc5) listscroll_popup_graphic_pane_ParamLimits

0x5396,	// (0x0003f53f) fep_hwr_aid_pane_ParamLimits

0x57f6,	// (0x0003f99f) aid_touch_sctrl_top_ParamLimits

0x5811,	// (0x0003f9ba) sctrl_sk_top_pane_g1_ParamLimits

0x55db,	// (0x0003f784) sctrl_sk_top_pane_g2_ParamLimits

0xfcff,	// (0x00049ea8) sctrl_sk_top_pane_g_ParamLimits

0x581e,	// (0x0003f9c7) sctrl_sk_top_pane_t1_ParamLimits

0x57f6,	// (0x0003f99f) aid_touch_sctrl_bottom_ParamLimits

0x581e,	// (0x0003f9c7) sctrl_sk_bottom_pane_t1_ParamLimits

0x1d24,	// (0x0003becd) aid_area_touch_clock

0xb71e,	// (0x000458c7) aid_vkb2_area_top_pane_cell_ParamLimits

0xb71e,	// (0x000458c7) aid_vkb2_area_top_pane_cell

0xb7c9,	// (0x00045972) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xb7c9,	// (0x00045972) aid_vkb2_area_bottom_pane_cell

0x2201,	// (0x0003c3aa) popup_char_count_window

0x26ae,	// (0x0003c857) popup_char_count_window_g1

0x26b7,	// (0x0003c860) popup_char_count_window_g2

0x26c0,	// (0x0003c869) popup_char_count_window_g3

0x0002,

0xfdd0,	// (0x00049f79) popup_char_count_window_g

0x26c9,	// (0x0003c872) popup_char_count_window_t1

0x5d39,	// (0x0003fee2) popup_fep_char_preview_window_ParamLimits

0x5d39,	// (0x0003fee2) popup_fep_char_preview_window

0xb73e,	// (0x000458e7) vkb2_top_candi_pane_ParamLimits

0xb73e,	// (0x000458e7) vkb2_top_candi_pane

0x26d7,	// (0x0003c880) cell_vkb2_top_candi_pane_ParamLimits

0x26d7,	// (0x0003c880) cell_vkb2_top_candi_pane

0x6592,	// (0x0004073b) bg_popup_fep_char_preview_window_ParamLimits

0x6592,	// (0x0004073b) bg_popup_fep_char_preview_window

0x65a0,	// (0x00040749) popup_fep_char_preview_window_t1_ParamLimits

0x65a0,	// (0x00040749) popup_fep_char_preview_window_t1

0x2731,	// (0x0003c8da) bg_popup_fep_char_preview_window_g1

0x2729,	// (0x0003c8d2) bg_popup_fep_char_preview_window_g2

0x2721,	// (0x0003c8ca) bg_popup_fep_char_preview_window_g3

0x2751,	// (0x0003c8fa) bg_popup_fep_char_preview_window_g4

0x2749,	// (0x0003c8f2) bg_popup_fep_char_preview_window_g5

0x65da,	// (0x00040783) bg_popup_fep_char_preview_window_g6

0x2741,	// (0x0003c8ea) bg_popup_fep_char_preview_window_g7

0x2739,	// (0x0003c8e2) bg_popup_fep_char_preview_window_g8

0x2759,	// (0x0003c902) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdd7,	// (0x00049f80) bg_popup_fep_char_preview_window_g

0x55db,	// (0x0003f784) cell_vkb2_top_candi_pane_g1_ParamLimits

0x55db,	// (0x0003f784) cell_vkb2_top_candi_pane_g1

0x55e9,	// (0x0003f792) cell_vkb2_top_candi_pane_g2_ParamLimits

0x55e9,	// (0x0003f792) cell_vkb2_top_candi_pane_g2

0x2761,	// (0x0003c90a) cell_vkb2_top_candi_pane_g3_ParamLimits

0x2761,	// (0x0003c90a) cell_vkb2_top_candi_pane_g3

0x65e2,	// (0x0004078b) cell_vkb2_top_candi_pane_g4_ParamLimits

0x65e2,	// (0x0004078b) cell_vkb2_top_candi_pane_g4

0xead5,	// (0x00048c7e) cell_vkb2_top_candi_pane_g5_ParamLimits

0xead5,	// (0x00048c7e) cell_vkb2_top_candi_pane_g5

0x6603,	// (0x000407ac) cell_vkb2_top_candi_pane_g6_ParamLimits

0x6603,	// (0x000407ac) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdea,	// (0x00049f93) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdea,	// (0x00049f93) cell_vkb2_top_candi_pane_g

0x6611,	// (0x000407ba) cell_vkb2_top_candi_pane_t1

0x51ae,	// (0x0003f357) aid_size_touch_slider_mark_ParamLimits

0x51ae,	// (0x0003f357) aid_size_touch_slider_mark

0x236d,	// (0x0003c516) grid_graphic2_catg_pane_ParamLimits

0x236d,	// (0x0003c516) grid_graphic2_catg_pane

0x2404,	// (0x0003c5ad) popup_grid_graphic2_window_t1_ParamLimits

0x2404,	// (0x0003c5ad) popup_grid_graphic2_window_t1

0x2419,	// (0x0003c5c2) popup_grid_graphic2_window_t2_ParamLimits

0x2419,	// (0x0003c5c2) popup_grid_graphic2_window_t2

0x0001,

0xfda5,	// (0x00049f4e) popup_grid_graphic2_window_t_ParamLimits

0xfda5,	// (0x00049f4e) popup_grid_graphic2_window_t

0x8c12,	// (0x00042dbb) bg_button_pane_cp05_ParamLimits

0x2580,	// (0x0003c729) cell_graphic2_control_pane_g1_ParamLimits

0x1da0,	// (0x0003bf49) cell_graphic2_catg_pane_ParamLimits

0x1da0,	// (0x0003bf49) cell_graphic2_catg_pane

0x7b1f,	// (0x00041cc8) bg_button_pane_cp12

0x2782,	// (0x0003c92b) cell_graphic2_catg_pane_g1

0x1cf0,	// (0x0003be99) cell_tb_ext_pane_t1_ParamLimits

0x60c1,	// (0x0004026a) vkb2_top_cell_right_narrow_pane_ParamLimits

0x60c1,	// (0x0004026a) vkb2_top_cell_right_narrow_pane

0x60d9,	// (0x00040282) vkb2_top_cell_right_wide_pane_ParamLimits

0x60d9,	// (0x00040282) vkb2_top_cell_right_wide_pane

0x5388,	// (0x0003f531) bg_vkb2_func_pane_ParamLimits

0x5388,	// (0x0003f531) bg_vkb2_func_pane

0x614a,	// (0x000402f3) vkb2_top_cell_left_pane_g1_ParamLimits

0x5388,	// (0x0003f531) bg_vkb2_fuc_pane_cp03_ParamLimits

0x5388,	// (0x0003f531) bg_vkb2_fuc_pane_cp03

0x61a8,	// (0x00040351) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0xc5f9,	// (0x000467a2) bg_vkb2_func_pane_g1

0xc601,	// (0x000467aa) bg_vkb2_func_pane_g2

0xc611,	// (0x000467ba) bg_vkb2_func_pane_g3

0xc609,	// (0x000467b2) bg_vkb2_func_pane_g4

0xc619,	// (0x000467c2) bg_vkb2_func_pane_g5

0xc621,	// (0x000467ca) bg_vkb2_func_pane_g6

0xc629,	// (0x000467d2) bg_vkb2_func_pane_g7

0xc631,	// (0x000467da) bg_vkb2_func_pane_g8

0xc5f1,	// (0x0004679a) bg_vkb2_func_pane_g9

0x0008,

0xfdf7,	// (0x00049fa0) bg_vkb2_func_pane_g

0x5388,	// (0x0003f531) bg_vkb2_fuc_pane_cp01_ParamLimits

0x5388,	// (0x0003f531) bg_vkb2_fuc_pane_cp01

0x614a,	// (0x000402f3) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x614a,	// (0x000402f3) vkb2_top_cell_right_wide_pane_g1

0x5388,	// (0x0003f531) bg_vkb2_fuc_pane_cp02_ParamLimits

0x5388,	// (0x0003f531) bg_vkb2_fuc_pane_cp02

0x61a8,	// (0x00040351) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x61a8,	// (0x00040351) vkb2_top_cell_right_narrow_pane_g1

0xaeed,	// (0x00045096) aid_touch_area_decrease_ParamLimits

0xaeed,	// (0x00045096) aid_touch_area_decrease

0xaf1b,	// (0x000450c4) aid_touch_area_increase_ParamLimits

0xaf1b,	// (0x000450c4) aid_touch_area_increase

0xaf43,	// (0x000450ec) aid_touch_area_mute_ParamLimits

0xaf43,	// (0x000450ec) aid_touch_area_mute

0xaf6b,	// (0x00045114) aid_touch_area_slider_ParamLimits

0xaf6b,	// (0x00045114) aid_touch_area_slider

0xafab,	// (0x00045154) popup_slider_window_g4_ParamLimits

0xafab,	// (0x00045154) popup_slider_window_g4

0xafd3,	// (0x0004517c) popup_slider_window_g5_ParamLimits

0xafd3,	// (0x0004517c) popup_slider_window_g5

0xb007,	// (0x000451b0) popup_slider_window_g6_ParamLimits

0xb007,	// (0x000451b0) popup_slider_window_g6

0xf511,	// (0x000496ba) popup_slider_window_t2_ParamLimits

0xf511,	// (0x000496ba) popup_slider_window_t2

0x0001,

0xfcf3,	// (0x00049e9c) popup_slider_window_t_ParamLimits

0xfcf3,	// (0x00049e9c) popup_slider_window_t

0xb023,	// (0x000451cc) slider_pane_ParamLimits

0xb023,	// (0x000451cc) slider_pane

0x278b,	// (0x0003c934) slider_pane_g1_ParamLimits

0x278b,	// (0x0003c934) slider_pane_g1

0x279f,	// (0x0003c948) slider_pane_g2_ParamLimits

0x279f,	// (0x0003c948) slider_pane_g2

0x27b5,	// (0x0003c95e) slider_pane_g3_ParamLimits

0x27b5,	// (0x0003c95e) slider_pane_g3

0x0003,

0xfe0a,	// (0x00049fb3) slider_pane_g_ParamLimits

0xfe0a,	// (0x00049fb3) slider_pane_g

0x9e5a,	// (0x00044003) popup_tb_float_extension_window_ParamLimits

0x9e5a,	// (0x00044003) popup_tb_float_extension_window

0x27e1,	// (0x0003c98a) aid_size_cell_tb_float_ext

0x7b1f,	// (0x00041cc8) bg_popup_sub_window_cp28

0x27ec,	// (0x0003c995) grid_tb_float_ext_pane

0x27f4,	// (0x0003c99d) cell_tb_float_ext_pane_ParamLimits

0x27f4,	// (0x0003c99d) cell_tb_float_ext_pane

0x280c,	// (0x0003c9b5) cell_tb_float_ext_pane_g1

0x2815,	// (0x0003c9be) grid_highlight_pane_cp12

0xaa59,	// (0x00044c02) cell_last_hwr_side_pane_ParamLimits

0xaa59,	// (0x00044c02) cell_last_hwr_side_pane

0xe4d3,	// (0x0004867c) cell_last_hwr_side_pane_g1

0x281e,	// (0x0003c9c7) cell_last_hwr_side_pane_g2

0x0001,

0xfe13,	// (0x00049fbc) cell_last_hwr_side_pane_g

0xb89d,	// (0x00045a46) vkb2_area_bottom_space_btn_pane_ParamLimits

0xb89d,	// (0x00045a46) vkb2_area_bottom_space_btn_pane

0x55db,	// (0x0003f784) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x22db,	// (0x0003c484) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x6611,	// (0x000407ba) cell_vkb2_top_candi_pane_t1_ParamLimits

0x6642,	// (0x000407eb) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x6642,	// (0x000407eb) vkb2_area_bottom_space_btn_pane_g1

0x6678,	// (0x00040821) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x6678,	// (0x00040821) vkb2_area_bottom_space_btn_pane_g2

0x66ae,	// (0x00040857) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x66ae,	// (0x00040857) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe18,	// (0x00049fc1) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe18,	// (0x00049fc1) vkb2_area_bottom_space_btn_pane_g

0x5445,	// (0x0003f5ee) cel_fep_hwr_func_pane_ParamLimits

0x5445,	// (0x0003f5ee) cel_fep_hwr_func_pane

0xaa2e,	// (0x00044bd7) cell_hwr_side_button_pane_ParamLimits

0xaa2e,	// (0x00044bd7) cell_hwr_side_button_pane

0x1d24,	// (0x0003becd) aid_area_touch_clock_ParamLimits

0x8c12,	// (0x00042dbb) bg_uniindi_top_pane_ParamLimits

0x1d36,	// (0x0003bedf) uniindi_top_pane_g1_ParamLimits

0x1d4c,	// (0x0003bef5) uniindi_top_pane_g2_ParamLimits

0x1d58,	// (0x0003bf01) uniindi_top_pane_g3_ParamLimits

0x1d69,	// (0x0003bf12) uniindi_top_pane_g4_ParamLimits

0xfd2b,	// (0x00049ed4) uniindi_top_pane_g_ParamLimits

0x1d76,	// (0x0003bf1f) uniindi_top_pane_t1_ParamLimits

0x8c12,	// (0x00042dbb) bg_vkb2_func_pane_cp01_ParamLimits

0x8c12,	// (0x00042dbb) bg_vkb2_func_pane_cp01

0x2827,	// (0x0003c9d0) cel_fep_hwr_func_pane_g1_ParamLimits

0x2827,	// (0x0003c9d0) cel_fep_hwr_func_pane_g1

0x8c12,	// (0x00042dbb) bg_vkb2_func_pane_cp02_ParamLimits

0x8c12,	// (0x00042dbb) bg_vkb2_func_pane_cp02

0x2827,	// (0x0003c9d0) cell_hwr_side_button_pane_g1_ParamLimits

0x2827,	// (0x0003c9d0) cell_hwr_side_button_pane_g1

0xc515,	// (0x000466be) status_pane_g4_ParamLimits

0xc515,	// (0x000466be) status_pane_g4

0xc52d,	// (0x000466d6) status_pane_t1

0xe2d9,	// (0x00048482) form2_midp_gauge_slider_cont_pane

0xe2e1,	// (0x0004848a) form2_midp_gauge_slider_pane_t1_ParamLimits

0xaa0a,	// (0x00044bb3) form2_midp_gauge_slider_pane_t2_ParamLimits

0xaa1c,	// (0x00044bc5) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf2,	// (0x00049c9b) form2_midp_gauge_slider_pane_t_ParamLimits

0xe2f3,	// (0x0004849c) form2_midp_slider_pane_ParamLimits

0x5cf9,	// (0x0003fea2) aid_size_cell_func_vkb2_ParamLimits

0x5cf9,	// (0x0003fea2) aid_size_cell_func_vkb2

0x27cd,	// (0x0003c976) slider_pane_g4_ParamLimits

0x27cd,	// (0x0003c976) slider_pane_g4

0xb908,	// (0x00045ab1) form2_midp_gauge_slider_pane_t2_cp01

0xb916,	// (0x00045abf) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xb916,	// (0x00045abf) form2_midp_gauge_slider_pane_t3_cp01

0x671f,	// (0x000408c8) form2_midp_slider_pane_cp01

0x7b1f,	// (0x00041cc8) navi_smil_pane

0x288b,	// (0x0003ca34) navi_smil_pane_g1

0x2893,	// (0x0003ca3c) navi_smil_pane_t1

0x2860,	// (0x0003ca09) form2_midp_slider_pane_g1

0x2869,	// (0x0003ca12) form2_midp_slider_pane_g2

0x2871,	// (0x0003ca1a) form2_midp_slider_pane_g3

0x2860,	// (0x0003ca09) form2_midp_slider_pane_g4

0x2879,	// (0x0003ca22) form2_midp_slider_pane_g5

0x0004,

0xfe21,	// (0x00049fca) form2_midp_slider_pane_g

0x66e4,	// (0x0004088d) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x66e4,	// (0x0004088d) vkb2_area_bottom_space_btn_pane_g4

0x9ffc,	// (0x000441a5) lc0_navi_pane_ParamLimits

0x9ffc,	// (0x000441a5) lc0_navi_pane

0xa066,	// (0x0004420f) lc0_stat_indi_pane_ParamLimits

0xa066,	// (0x0004420f) lc0_stat_indi_pane

0xa07b,	// (0x00044224) ls0_title_pane_ParamLimits

0xa07b,	// (0x00044224) ls0_title_pane

0x91cb,	// (0x00043374) bg_popup_sub_pane_cp14_ParamLimits

0x1d0b,	// (0x0003beb4) list_uniindi_pane_ParamLimits

0x1d17,	// (0x0003bec0) uniindi_top_pane_ParamLimits

0x1db2,	// (0x0003bf5b) list_single_uniindi_pane_g1_ParamLimits

0x1dc5,	// (0x0003bf6e) list_single_uniindi_pane_t1_ParamLimits

0xb933,	// (0x00045adc) lc0_stat_clock_pane_ParamLimits

0xb933,	// (0x00045adc) lc0_stat_clock_pane

0x28bb,	// (0x0003ca64) lc0_stat_indi_pane_g1_ParamLimits

0x28bb,	// (0x0003ca64) lc0_stat_indi_pane_g1

0x28ae,	// (0x0003ca57) lc0_stat_indi_pane_g2_ParamLimits

0x28ae,	// (0x0003ca57) lc0_stat_indi_pane_g2

0x0001,

0xfe2c,	// (0x00049fd5) lc0_stat_indi_pane_g_ParamLimits

0xfe2c,	// (0x00049fd5) lc0_stat_indi_pane_g

0xb940,	// (0x00045ae9) lc0_uni_indicator_pane_ParamLimits

0xb940,	// (0x00045ae9) lc0_uni_indicator_pane

0x28d5,	// (0x0003ca7e) ls0_title_pane_g1_ParamLimits

0x28d5,	// (0x0003ca7e) ls0_title_pane_g1

0x28e9,	// (0x0003ca92) ls0_title_pane_t1_ParamLimits

0x28e9,	// (0x0003ca92) ls0_title_pane_t1

0xb94d,	// (0x00045af6) lc0_uni_indicator_pane_g1_ParamLimits

0xb94d,	// (0x00045af6) lc0_uni_indicator_pane_g1

0x3050,	// (0x0003d1f9) lc0_stat_clock_pane_t1

0x4236,	// (0x0003e3df) main_ai5_pane

0x305e,	// (0x0003d207) ai5_sk_pane_ParamLimits

0x305e,	// (0x0003d207) ai5_sk_pane

0x292c,	// (0x0003cad5) cell_ai5_widget_pane_ParamLimits

0x292c,	// (0x0003cad5) cell_ai5_widget_pane

0x306b,	// (0x0003d214) aid_size_cell_widget_grid

0x3078,	// (0x0003d221) bg_ai5_widget_pane_ParamLimits

0x3078,	// (0x0003d221) bg_ai5_widget_pane

0x29b9,	// (0x0003cb62) cell_ai5_widget_pane_g2

0x29cd,	// (0x0003cb76) cell_ai5_widget_pane_g3

0x29e7,	// (0x0003cb90) cell_ai5_widget_pane_g4

0x29f7,	// (0x0003cba0) cell_ai5_widget_pane_g5

0x2a07,	// (0x0003cbb0) cell_ai5_widget_pane_g6

0x2a13,	// (0x0003cbbc) cell_ai5_widget_pane_g7

0x2a5b,	// (0x0003cc04) cell_ai5_widget_pane_t1_ParamLimits

0x2a5b,	// (0x0003cc04) cell_ai5_widget_pane_t1

0x2a78,	// (0x0003cc21) cell_ai5_widget_pane_t2_ParamLimits

0x2a78,	// (0x0003cc21) cell_ai5_widget_pane_t2

0x2a90,	// (0x0003cc39) cell_ai5_widget_pane_t3_ParamLimits

0x2a90,	// (0x0003cc39) cell_ai5_widget_pane_t3

0x2aa8,	// (0x0003cc51) cell_ai5_widget_pane_t4_ParamLimits

0x2aa8,	// (0x0003cc51) cell_ai5_widget_pane_t4

0x2ace,	// (0x0003cc77) cell_ai5_widget_pane_t5_ParamLimits

0x2ace,	// (0x0003cc77) cell_ai5_widget_pane_t5

0x30b0,	// (0x0003d259) cell_ai5_widget_pane_t6_ParamLimits

0x30b0,	// (0x0003d259) cell_ai5_widget_pane_t6

0x30c2,	// (0x0003d26b) cell_ai5_widget_pane_t7_ParamLimits

0x30c2,	// (0x0003d26b) cell_ai5_widget_pane_t7

0x2aed,	// (0x0003cc96) cell_ai5_widget_pane_t8_ParamLimits

0x2aed,	// (0x0003cc96) cell_ai5_widget_pane_t8

0x0009,

0xfe46,	// (0x00049fef) cell_ai5_widget_pane_t_ParamLimits

0xfe46,	// (0x00049fef) cell_ai5_widget_pane_t

0x2b4c,	// (0x0003ccf5) grid_ai5_widget_pane

0x91cb,	// (0x00043374) highlight_cell_ai5_widget_pane_ParamLimits

0x91cb,	// (0x00043374) highlight_cell_ai5_widget_pane

0x2b58,	// (0x0003cd01) ai5_sk_left_pane

0x2b62,	// (0x0003cd0b) ai5_sk_middle_pane

0x2b6c,	// (0x0003cd15) ai5_sk_right_pane

0x30db,	// (0x0003d284) bg_ai5_widget_pane_g1_ParamLimits

0x30db,	// (0x0003d284) bg_ai5_widget_pane_g1

0x30e7,	// (0x0003d290) bg_ai5_widget_pane_g2_ParamLimits

0x30e7,	// (0x0003d290) bg_ai5_widget_pane_g2

0x30f3,	// (0x0003d29c) bg_ai5_widget_pane_g3_ParamLimits

0x30f3,	// (0x0003d29c) bg_ai5_widget_pane_g3

0x30ff,	// (0x0003d2a8) bg_ai5_widget_pane_g4_ParamLimits

0x30ff,	// (0x0003d2a8) bg_ai5_widget_pane_g4

0x310b,	// (0x0003d2b4) bg_ai5_widget_pane_g5_ParamLimits

0x310b,	// (0x0003d2b4) bg_ai5_widget_pane_g5

0x3117,	// (0x0003d2c0) bg_ai5_widget_pane_g6_ParamLimits

0x3117,	// (0x0003d2c0) bg_ai5_widget_pane_g6

0x3123,	// (0x0003d2cc) bg_ai5_widget_pane_g7_ParamLimits

0x3123,	// (0x0003d2cc) bg_ai5_widget_pane_g7

0x312f,	// (0x0003d2d8) bg_ai5_widget_pane_g8_ParamLimits

0x312f,	// (0x0003d2d8) bg_ai5_widget_pane_g8

0x313b,	// (0x0003d2e4) bg_ai5_widget_pane_g9_ParamLimits

0x313b,	// (0x0003d2e4) bg_ai5_widget_pane_g9

0x0008,

0xfe5b,	// (0x0004a004) bg_ai5_widget_pane_g_ParamLimits

0xfe5b,	// (0x0004a004) bg_ai5_widget_pane_g

0x316b,	// (0x0003d314) cell_shortcut_ai5_widget_pane_ParamLimits

0x316b,	// (0x0003d314) cell_shortcut_ai5_widget_pane

0x317c,	// (0x0003d325) bg_cell_shortcut_ai5_widget_pane

0x8dcc,	// (0x00042f75) cell_grid_ai5_widget_pane_g1

0xc265,	// (0x0004640e) highlight_cell_shortcut_ai5_widget_pane

0xc5f9,	// (0x000467a2) ai5_sk_left_pane_g1

0x3184,	// (0x0003d32d) ai5_sk_left_pane_g2

0x318c,	// (0x0003d335) ai5_sk_left_pane_g3

0x3194,	// (0x0003d33d) ai5_sk_left_pane_g4

0x0003,

0xfe6e,	// (0x0004a017) ai5_sk_left_pane_g

0x319c,	// (0x0003d345) ai5_sk_left_pane_t1

0xc601,	// (0x000467aa) ai5_sk_right_pane_g1

0x31aa,	// (0x0003d353) ai5_sk_right_pane_g2

0x31b2,	// (0x0003d35b) ai5_sk_right_pane_g3

0x31ba,	// (0x0003d363) ai5_sk_right_pane_g4

0x0003,

0xfe77,	// (0x0004a020) ai5_sk_right_pane_g

0x31c2,	// (0x0003d36b) ai5_sk_right_pane_t1

0xc601,	// (0x000467aa) ai5_sk_middle_pane_g1

0xc5f9,	// (0x000467a2) ai5_sk_middle_pane_g2

0xc619,	// (0x000467c2) ai5_sk_middle_pane_g3

0x31b2,	// (0x0003d35b) ai5_sk_middle_pane_g4

0x318c,	// (0x0003d335) ai5_sk_middle_pane_g5

0x31d0,	// (0x0003d379) ai5_sk_middle_pane_g6

0x2b76,	// (0x0003cd1f) ai5_sk_middle_pane_g7

0x0006,

0xfe80,	// (0x0004a029) ai5_sk_middle_pane_g

0x9efa,	// (0x000440a3) aid_touch_area_size_lc0_ParamLimits

0x9efa,	// (0x000440a3) aid_touch_area_size_lc0

0x560a,	// (0x0003f7b3) cell_hwr_candidate_pane_t1_ParamLimits

0xc44a,	// (0x000465f3) aid_touch_navi_pane

0xa167,	// (0x00044310) status_dt_navi_pane_ParamLimits

0xa167,	// (0x00044310) status_dt_navi_pane

0xa17f,	// (0x00044328) status_dt_sta_pane_ParamLimits

0xa17f,	// (0x00044328) status_dt_sta_pane

0x2b7e,	// (0x0003cd27) dt_sta_controll_pane

0x2b8b,	// (0x0003cd34) dt_sta_indi_pane

0x2b98,	// (0x0003cd41) dt_sta_title_pane

0x8c12,	// (0x00042dbb) bg_dt_sta_indi_pane_ParamLimits

0x8c12,	// (0x00042dbb) bg_dt_sta_indi_pane

0x2baa,	// (0x0003cd53) dt_sta_battery_pane

0x2bb2,	// (0x0003cd5b) dt_sta_indi_pane_g1

0x2bbb,	// (0x0003cd64) dt_sta_indi_pane_g2

0x2bc4,	// (0x0003cd6d) dt_sta_indi_pane_g3

0x0002,

0xfe8f,	// (0x0004a038) dt_sta_indi_pane_g

0x2bcd,	// (0x0003cd76) dt_sta_signal_pane

0x91cb,	// (0x00043374) bg_dt_sta_title_pane_ParamLimits

0x91cb,	// (0x00043374) bg_dt_sta_title_pane

0x2bd6,	// (0x0003cd7f) dt_sta_title_pane_g1

0x2bde,	// (0x0003cd87) dt_sta_title_pane_t1_ParamLimits

0x2bde,	// (0x0003cd87) dt_sta_title_pane_t1

0x7b1f,	// (0x00041cc8) bg_dt_sta_control_pane

0x2bf3,	// (0x0003cd9c) dt_sta_controll_pane_g1

0x2bfc,	// (0x0003cda5) bg_dt_sta_title_pane_g1

0x2c05,	// (0x0003cdae) bg_dt_sta_title_pane_g2

0x2c0e,	// (0x0003cdb7) bg_dt_sta_title_pane_g3

0x0002,

0xfe96,	// (0x0004a03f) bg_dt_sta_title_pane_g

0xe4d3,	// (0x0004867c) bg_dt_sta_indi_pane_g1

0x2c17,	// (0x0003cdc0) dt_sta_signal_pane_g1

0x2c1f,	// (0x0003cdc8) dt_sta_signal_pane_g2

0x0001,

0xfe9d,	// (0x0004a046) dt_sta_signal_pane_g

0x31d8,	// (0x0003d381) dt_sta_battery_pane_g1

0x31e1,	// (0x0003d38a) dt_sta_battery_pane_t1

0xe4d3,	// (0x0004867c) bg_dt_sta_control_pane_g1

0xbe35,	// (0x00045fde) fep_china_uni_eep_pane

0xbe3d,	// (0x00045fe6) fep_china_uni_entry_pane_ParamLimits

0xbe4d,	// (0x00045ff6) popup_fep_china_uni_window_g1_ParamLimits

0xbe5d,	// (0x00046006) popup_fep_china_uni_window_g2_ParamLimits

0xbe5d,	// (0x00046006) popup_fep_china_uni_window_g2

0x0001,

0xf722,	// (0x000498cb) popup_fep_china_uni_window_g_ParamLimits

0xf722,	// (0x000498cb) popup_fep_china_uni_window_g

0x31f0,	// (0x0003d399) fep_china_uni_eep_pane_g1

0x31f8,	// (0x0003d3a1) fep_china_uni_eep_pane_t1

0x2882,	// (0x0003ca2b) aid_touch_area_size_smil_player

0xc4e8,	// (0x00046691) lc0_clock_pane

0xc521,	// (0x000466ca) status_pane_g5_ParamLimits

0xc521,	// (0x000466ca) status_pane_g5

0x9a8e,	// (0x00043c37) popup_keymap_window

0xc501,	// (0x000466aa) status_icon_pane

0x29cd,	// (0x0003cb76) cell_ai5_widget_pane_g3_ParamLimits

0x29e7,	// (0x0003cb90) cell_ai5_widget_pane_g4_ParamLimits

0x29f7,	// (0x0003cba0) cell_ai5_widget_pane_g5_ParamLimits

0x2a1f,	// (0x0003cbc8) cell_ai5_widget_pane_g8_ParamLimits

0x2a1f,	// (0x0003cbc8) cell_ai5_widget_pane_g8

0x2a33,	// (0x0003cbdc) cell_ai5_widget_pane_g9_ParamLimits

0x2a33,	// (0x0003cbdc) cell_ai5_widget_pane_g9

0x2a47,	// (0x0003cbf0) cell_ai5_widget_pane_g10_ParamLimits

0x2a47,	// (0x0003cbf0) cell_ai5_widget_pane_g10

0x3207,	// (0x0003d3b0) status_icon_pane_g1

0x7b1f,	// (0x00041cc8) bg_popup_sub_pane_cp13

0x320f,	// (0x0003d3b8) popup_keymap_window_t1

0x97fb,	// (0x000439a4) control_pane_g6_ParamLimits

0x97fb,	// (0x000439a4) control_pane_g6

0x9808,	// (0x000439b1) control_pane_g7_ParamLimits

0x9808,	// (0x000439b1) control_pane_g7

0x9815,	// (0x000439be) control_pane_g8_ParamLimits

0x9815,	// (0x000439be) control_pane_g8

0x2b7e,	// (0x0003cd27) dt_sta_controll_pane_ParamLimits

0x2b8b,	// (0x0003cd34) dt_sta_indi_pane_ParamLimits

0x2b98,	// (0x0003cd41) dt_sta_title_pane_ParamLimits

0x9097,	// (0x00043240) aid_size_touch_scroll_bar_cale

0x430d,	// (0x0003e4b6) popup_discreet_window_ParamLimits

0x430d,	// (0x0003e4b6) popup_discreet_window

0x86d2,	// (0x0004287b) popup_sk_window

0xcbbd,	// (0x00046d66) bg_popup_sub_pane_cp28_ParamLimits

0xcbbd,	// (0x00046d66) bg_popup_sub_pane_cp28

0x321d,	// (0x0003d3c6) popup_discreet_window_g1_ParamLimits

0x321d,	// (0x0003d3c6) popup_discreet_window_g1

0x323d,	// (0x0003d3e6) popup_discreet_window_t1_ParamLimits

0x323d,	// (0x0003d3e6) popup_discreet_window_t1

0x325b,	// (0x0003d404) popup_discreet_window_t2_ParamLimits

0x325b,	// (0x0003d404) popup_discreet_window_t2

0x0002,

0xfea2,	// (0x0004a04b) popup_discreet_window_t_ParamLimits

0xfea2,	// (0x0004a04b) popup_discreet_window_t

0x6ab3,	// (0x00040c5c) popup_sk_window_g1

0x6abc,	// (0x00040c65) popup_sk_window_g2

0x0001,

0xfea9,	// (0x0004a052) popup_sk_window_g

0x6ac5,	// (0x00040c6e) popup_sk_window_t1

0x6ad3,	// (0x00040c7c) popup_sk_window_t1_copy1

0x29b9,	// (0x0003cb62) cell_ai5_widget_pane_g2_ParamLimits

0x2aff,	// (0x0003cca8) cell_ai5_widget_pane_t9_ParamLimits

0x2aff,	// (0x0003cca8) cell_ai5_widget_pane_t9

0x7b1f,	// (0x00041cc8) main_fep_fshwr2_pane

0xb962,	// (0x00045b0b) aid_fshwr2_btn_pane

0xb973,	// (0x00045b1c) aid_fshwr2_syb_pane

0xb984,	// (0x00045b2d) aid_fshwr2_txt_pane

0xb990,	// (0x00045b39) fshwr2_func_candi_pane

0xb9aa,	// (0x00045b53) fshwr2_hwr_syb_pane

0xb9bf,	// (0x00045b68) fshwr2_icf_pane

0x4236,	// (0x0003e3df) fshwr2_icf_bg_pane

0xb9e5,	// (0x00045b8e) fshwr2_icf_pane_t1_ParamLimits

0xb9e5,	// (0x00045b8e) fshwr2_icf_pane_t1

0xbdd3,	// (0x00045f7c) fshwr2_func_candi_pane_g1

0x2cc1,	// (0x0003ce6a) fshwr2_func_candi_row_pane_ParamLimits

0x2cc1,	// (0x0003ce6a) fshwr2_func_candi_row_pane

0xb9fc,	// (0x00045ba5) cell_fshwr2_syb_pane_ParamLimits

0xb9fc,	// (0x00045ba5) cell_fshwr2_syb_pane

0x55db,	// (0x0003f784) fshwr2_hwr_syb_pane_g1_ParamLimits

0x55db,	// (0x0003f784) fshwr2_hwr_syb_pane_g1

0x4236,	// (0x0003e3df) bg_popup_call_pane_cp01

0xba10,	// (0x00045bb9) fshwr2_func_candi_cell_pane_ParamLimits

0xba10,	// (0x00045bb9) fshwr2_func_candi_cell_pane

0xc9af,	// (0x00046b58) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xc9af,	// (0x00046b58) fshwr2_func_candi_cell_bg_pane

0xba4f,	// (0x00045bf8) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xba4f,	// (0x00045bf8) fshwr2_func_candi_cell_pane_g1

0xba86,	// (0x00045c2f) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xba86,	// (0x00045c2f) fshwr2_func_candi_cell_pane_t1

0x4236,	// (0x0003e3df) bg_button_pane_cp08

0xc265,	// (0x0004640e) cell_fshwr2_syb_bg_pane

0xbaa1,	// (0x00045c4a) cell_fshwr2_syb_bg_pane_g1

0xbaa9,	// (0x00045c52) cell_fshwr2_syb_bg_pane_t1

0x91cb,	// (0x00043374) main_tmo_pane

0xa56a,	// (0x00044713) uni_indicator_pane_g1_ParamLimits

0xa580,	// (0x00044729) uni_indicator_pane_g2_ParamLimits

0xa596,	// (0x0004473f) uni_indicator_pane_g3_ParamLimits

0xd6d0,	// (0x00047879) uni_indicator_pane_g4_ParamLimits

0xd6d0,	// (0x00047879) uni_indicator_pane_g4

0xd6e4,	// (0x0004788d) uni_indicator_pane_g5_ParamLimits

0xd6e4,	// (0x0004788d) uni_indicator_pane_g5

0xd6e4,	// (0x0004788d) uni_indicator_pane_g6_ParamLimits

0xd6e4,	// (0x0004788d) uni_indicator_pane_g6

0xf91a,	// (0x00049ac3) uni_indicator_pane_g_ParamLimits

0xaed1,	// (0x0004507a) popup_tmo_note_window_ParamLimits

0xaed1,	// (0x0004507a) popup_tmo_note_window

0x586e,	// (0x0003fa17) fshwr2_bg_pane

0xba77,	// (0x00045c20) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xba77,	// (0x00045c20) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeae,	// (0x0004a057) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeae,	// (0x0004a057) fshwr2_func_candi_cell_pane_g

0x55c3,	// (0x0003f76c) bg_popup_window_pane_cp01

0x6c0c,	// (0x00040db5) bg_popup_window_pane_g1_cp01

0x32ad,	// (0x0003d456) bg_popup_window_pane_cp22_ParamLimits

0x32ad,	// (0x0003d456) bg_popup_window_pane_cp22

0x32bb,	// (0x0003d464) listscroll_tmo_link_pane_ParamLimits

0x32bb,	// (0x0003d464) listscroll_tmo_link_pane

0x32fb,	// (0x0003d4a4) popup_tmo_note_window_g1_ParamLimits

0x32fb,	// (0x0003d4a4) popup_tmo_note_window_g1

0x3308,	// (0x0003d4b1) tmo_note_info_pane_ParamLimits

0x3308,	// (0x0003d4b1) tmo_note_info_pane

0x2da0,	// (0x0003cf49) list_tmo_note_info_pane_g1_ParamLimits

0x2da0,	// (0x0003cf49) list_tmo_note_info_pane_g1

0x3322,	// (0x0003d4cb) list_tmo_note_info_pane_g2_ParamLimits

0x3322,	// (0x0003d4cb) list_tmo_note_info_pane_g2

0x0001,

0xfeb3,	// (0x0004a05c) list_tmo_note_info_pane_g_ParamLimits

0xfeb3,	// (0x0004a05c) list_tmo_note_info_pane_g

0x333e,	// (0x0003d4e7) list_tmo_note_info_text_pane_ParamLimits

0x333e,	// (0x0003d4e7) list_tmo_note_info_text_pane

0x3380,	// (0x0003d529) list_tmo_link_pane

0x338d,	// (0x0003d536) scroll_pane_cp20

0x339a,	// (0x0003d543) list_single_tmo_link_pane_ParamLimits

0x339a,	// (0x0003d543) list_single_tmo_link_pane

0x33aa,	// (0x0003d553) list_single_tmo_link_pane_t1

0x33b8,	// (0x0003d561) list_tmo_note_info_text_pane_t1_ParamLimits

0x33b8,	// (0x0003d561) list_tmo_note_info_text_pane_t1

0x9285,	// (0x0004342e) aid_size_touch_scroll_bar_cp01_ParamLimits

0x9285,	// (0x0004342e) aid_size_touch_scroll_bar_cp01

0x0d1e,	// (0x0003aec7) aid_size_touch_slider_marker

0x86c6,	// (0x0004286f) popup_settings_window_ParamLimits

0x86c6,	// (0x0004286f) popup_settings_window

0x74f5,	// (0x0004169e) popup_candi_list_indi_window

0xc44a,	// (0x000465f3) aid_touch_navi_pane_ParamLimits

0x57ca,	// (0x0003f973) rs_clock_indi_pane

0x57d3,	// (0x0003f97c) sctrl_sk_bottom_pane_ParamLimits

0x57e4,	// (0x0003f98d) sctrl_sk_top_pane_ParamLimits

0x5d53,	// (0x0003fefc) popup_fep_tooltip_window

0x306b,	// (0x0003d214) aid_size_cell_widget_grid_ParamLimits

0x29a5,	// (0x0003cb4e) cell_ai5_widget_pane_g1_ParamLimits

0x29a5,	// (0x0003cb4e) cell_ai5_widget_pane_g1

0x2a07,	// (0x0003cbb0) cell_ai5_widget_pane_g6_ParamLimits

0x2a13,	// (0x0003cbbc) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe31,	// (0x00049fda) cell_ai5_widget_pane_g_ParamLimits

0xfe31,	// (0x00049fda) cell_ai5_widget_pane_g

0x2b2e,	// (0x0003ccd7) cell_ai5_widget_pane_t10_ParamLimits

0x2b2e,	// (0x0003ccd7) cell_ai5_widget_pane_t10

0x2b4c,	// (0x0003ccf5) grid_ai5_widget_pane_ParamLimits

0x3147,	// (0x0003d2f0) cell_contacts_ai5_widget_pane_ParamLimits

0x3147,	// (0x0003d2f0) cell_contacts_ai5_widget_pane

0x3270,	// (0x0003d419) popup_discreet_window_t3_ParamLimits

0x3270,	// (0x0003d419) popup_discreet_window_t3

0xb9d3,	// (0x00045b7c) popup_fshwr2_char_preview_window_ParamLimits

0xb9d3,	// (0x00045b7c) popup_fshwr2_char_preview_window

0x2db7,	// (0x0003cf60) tmo_note_info_pane_t1

0x2dcc,	// (0x0003cf75) tmo_note_info_pane_t2

0x2de1,	// (0x0003cf8a) tmo_note_info_pane_t3

0x335c,	// (0x0003d505) tmo_note_info_pane_t4

0x336e,	// (0x0003d517) tmo_note_info_pane_t5

0x0004,

0xfeb8,	// (0x0004a061) tmo_note_info_pane_t

0x3380,	// (0x0003d529) list_tmo_link_pane_ParamLimits

0x338d,	// (0x0003d536) scroll_pane_cp20_ParamLimits

0x4236,	// (0x0003e3df) bg_popup_fep_char_preview_window_cp01

0x33d1,	// (0x0003d57a) popup_fshwr2_char_preview_window_t1

0x33df,	// (0x0003d588) popup_candi_list_indi_window_g1

0x33e8,	// (0x0003d591) bg_cell_contacts_ai5_widget_pane

0x33f4,	// (0x0003d59d) cell_contacts_ai5_widget_pane_g1

0x3409,	// (0x0003d5b2) cell_contacts_ai5_widget_pane_g2

0x3415,	// (0x0003d5be) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec3,	// (0x0004a06c) cell_contacts_ai5_widget_pane_g

0x3421,	// (0x0003d5ca) cell_contacts_ai5_widget_pane_t1

0x91cb,	// (0x00043374) highlight_cell_shortcut_ai5_widget_pane_cp01

0x2e59,	// (0x0003d002) settings_container_pane

0xc265,	// (0x0004640e) listscroll_set_pane_copy1

0xde0f,	// (0x00047fb8) scroll_pane_cp121_copy1

0x3433,	// (0x0003d5dc) set_content_pane_copy1

0x343b,	// (0x0003d5e4) aid_height_set_list_copy1_ParamLimits

0x343b,	// (0x0003d5e4) aid_height_set_list_copy1

0xd87d,	// (0x00047a26) aid_size_parent_copy1_ParamLimits

0xd87d,	// (0x00047a26) aid_size_parent_copy1

0x3447,	// (0x0003d5f0) button_value_adjust_pane_cp6_copy1_ParamLimits

0x3447,	// (0x0003d5f0) button_value_adjust_pane_cp6_copy1

0xbafc,	// (0x00045ca5) list_highlight_pane_cp2_copy1_ParamLimits

0xbafc,	// (0x00045ca5) list_highlight_pane_cp2_copy1

0x2e65,	// (0x0003d00e) list_set_pane_copy1_ParamLimits

0x2e65,	// (0x0003d00e) list_set_pane_copy1

0x2df6,	// (0x0003cf9f) main_pane_set_t1_copy1_ParamLimits

0x2df6,	// (0x0003cf9f) main_pane_set_t1_copy1

0x2e30,	// (0x0003cfd9) main_pane_set_t2_copy1_ParamLimits

0x2e30,	// (0x0003cfd9) main_pane_set_t2_copy1

0x345b,	// (0x0003d604) main_pane_set_t3_copy1

0x3469,	// (0x0003d612) main_pane_set_t4_copy1

0x2e4d,	// (0x0003cff6) set_content_pane_g1_copy1_ParamLimits

0x2e4d,	// (0x0003cff6) set_content_pane_g1_copy1

0x3477,	// (0x0003d620) setting_code_pane_copy1

0x347f,	// (0x0003d628) setting_slider_graphic_pane_copy1

0x347f,	// (0x0003d628) setting_slider_pane_copy1

0x347f,	// (0x0003d628) setting_text_pane_copy1

0x347f,	// (0x0003d628) setting_volume_pane_copy1

0x3487,	// (0x0003d630) settings_code_pane_cp2_copy1

0x348f,	// (0x0003d638) settings_code_pane_cp_copy1_ParamLimits

0x348f,	// (0x0003d638) settings_code_pane_cp_copy1

0xbab8,	// (0x00045c61) volume_set_pane_copy1

0x2efb,	// (0x0003d0a4) volume_set_pane_g10_copy1

0x2f03,	// (0x0003d0ac) volume_set_pane_g1_copy1

0x2f0b,	// (0x0003d0b4) volume_set_pane_g2_copy1

0x2f13,	// (0x0003d0bc) volume_set_pane_g3_copy1

0x2f1b,	// (0x0003d0c4) volume_set_pane_g4_copy1

0x2f23,	// (0x0003d0cc) volume_set_pane_g5_copy1

0x2f2b,	// (0x0003d0d4) volume_set_pane_g6_copy1

0x2f33,	// (0x0003d0dc) volume_set_pane_g7_copy1

0x2f3b,	// (0x0003d0e4) volume_set_pane_g8_copy1

0x2f43,	// (0x0003d0ec) volume_set_pane_g9_copy1

0x88e9,	// (0x00042a92) bg_set_opt_pane_cp_copy1_ParamLimits

0x88e9,	// (0x00042a92) bg_set_opt_pane_cp_copy1

0x4447,	// (0x0003e5f0) setting_slider_pane_t1_copy1_ParamLimits

0x4447,	// (0x0003e5f0) setting_slider_pane_t1_copy1

0x6c1d,	// (0x00040dc6) setting_slider_pane_t2_copy1_ParamLimits

0x6c1d,	// (0x00040dc6) setting_slider_pane_t2_copy1

0x6c36,	// (0x00040ddf) setting_slider_pane_t3_copy1_ParamLimits

0x6c36,	// (0x00040ddf) setting_slider_pane_t3_copy1

0x448d,	// (0x0003e636) slider_set_pane_copy1_ParamLimits

0x448d,	// (0x0003e636) slider_set_pane_copy1

0x9226,	// (0x000433cf) set_opt_bg_pane_g1_copy2

0x922e,	// (0x000433d7) set_opt_bg_pane_g2_copy2

0x34a3,	// (0x0003d64c) set_opt_bg_pane_g3_copy2

0x923e,	// (0x000433e7) set_opt_bg_pane_g4_copy2

0x9246,	// (0x000433ef) set_opt_bg_pane_g5_copy2

0x924e,	// (0x000433f7) set_opt_bg_pane_g6_copy2

0x2f4b,	// (0x0003d0f4) set_opt_bg_pane_g7_copy2

0x34ab,	// (0x0003d654) set_opt_bg_pane_g8_copy2

0x34b3,	// (0x0003d65c) set_opt_bg_pane_g9_copy2

0x51ae,	// (0x0003f357) aid_size_touch_slider_mark_copy1_ParamLimits

0x51ae,	// (0x0003f357) aid_size_touch_slider_mark_copy1

0xd88f,	// (0x00047a38) slider_set_pane_g1_copy1

0xd8b1,	// (0x00047a5a) slider_set_pane_g2_copy1

0x51ce,	// (0x0003f377) slider_set_pane_g3_copy1_ParamLimits

0x51ce,	// (0x0003f377) slider_set_pane_g3_copy1

0x51e2,	// (0x0003f38b) slider_set_pane_g4_copy1_ParamLimits

0x51e2,	// (0x0003f38b) slider_set_pane_g4_copy1

0x51fa,	// (0x0003f3a3) slider_set_pane_g5_copy1_ParamLimits

0x51fa,	// (0x0003f3a3) slider_set_pane_g5_copy1

0x51ce,	// (0x0003f377) slider_set_pane_g6_copy1_ParamLimits

0x51ce,	// (0x0003f377) slider_set_pane_g6_copy1

0xbac0,	// (0x00045c69) slider_set_pane_g7_copy1_ParamLimits

0xbac0,	// (0x00045c69) slider_set_pane_g7_copy1

0x7bf1,	// (0x00041d9a) bg_set_opt_pane_cp2_copy1

0x8927,	// (0x00042ad0) setting_slider_graphic_pane_g1_copy1

0xbad6,	// (0x00045c7f) setting_slider_graphic_pane_t1_copy1

0xbae5,	// (0x00045c8e) setting_slider_graphic_pane_t2_copy1

0xbaf4,	// (0x00045c9d) slider_set_pane_cp_copy1

0x34c3,	// (0x0003d66c) input_focus_pane_cp1_copy1

0x34cc,	// (0x0003d675) list_set_text_pane_copy1

0x34d4,	// (0x0003d67d) setting_text_pane_g1_copy1

0x7bd9,	// (0x00041d82) set_text_pane_t1_copy1

0x34c3,	// (0x0003d66c) input_focus_pane_cp2_copy1

0x34d4,	// (0x0003d67d) setting_code_pane_g1_copy1

0x34dd,	// (0x0003d686) setting_code_pane_t1_copy1

0x9682,	// (0x0004382b) list_set_graphic_pane_copy1

0x7bf1,	// (0x00041d9a) bg_set_opt_pane_cp4_copy1

0x34eb,	// (0x0003d694) list_set_graphic_pane_g1_copy1_ParamLimits

0x34eb,	// (0x0003d694) list_set_graphic_pane_g1_copy1

0x34f7,	// (0x0003d6a0) list_set_graphic_pane_g2_copy1

0xbfe0,	// (0x00046189) list_set_graphic_pane_t1_copy1_ParamLimits

0xbfe0,	// (0x00046189) list_set_graphic_pane_t1_copy1

0xe4d3,	// (0x0004867c) rs_clock_indi_pane_g1

0x34ff,	// (0x0003d6a8) rs_clock_indi_pane_t1

0x350d,	// (0x0003d6b6) rs_indi_pane

0x3515,	// (0x0003d6be) rs_indi_pane_g1

0x351e,	// (0x0003d6c7) rs_indi_pane_g2

0x33df,	// (0x0003d588) rs_indi_pane_g3

0x0002,

0xfeca,	// (0x0004a073) rs_indi_pane_g

0xc265,	// (0x0004640e) bg_popup_preview_window_pane_cp03

0x3527,	// (0x0003d6d0) popup_fep_tooltip_window_t1

0xee14,	// (0x00048fbd) popup_note2_window_g2_ParamLimits

0xee14,	// (0x00048fbd) popup_note2_window_g2

0x0001,

0xfc6a,	// (0x00049e13) popup_note2_window_g_ParamLimits

0xfc6a,	// (0x00049e13) popup_note2_window_g

0xf28f,	// (0x00049438) bg_popup_sub_pane_cp11_ParamLimits

0xf29c,	// (0x00049445) cell_ai3_links_pane_g1_ParamLimits

0xf2b3,	// (0x0004945c) cell_ai3_links_pane_t1

0x7bd9,	// (0x00041d82) set_text_pane_t1_copy1_ParamLimits

0xc18c,	// (0x00046335) cell_graphic_popup_pane_cp2_ParamLimits

0xc18c,	// (0x00046335) cell_graphic_popup_pane_cp2

0x3535,	// (0x0003d6de) cell_graphic_popup_pane_g1_cp2

0x8f46,	// (0x000430ef) cell_graphic_popup_pane_g2_cp2

0x353d,	// (0x0003d6e6) cell_graphic_popup_pane_g3_cp2

0x3545,	// (0x0003d6ee) cell_graphic_popup_pane_t2_cp2

0x8f57,	// (0x00043100) grid_highlight_pane_cp3_cp2

0xbc0c,	// (0x00045db5) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x91cb,	// (0x00043374) main_tmo_pane_ParamLimits

0xaec9,	// (0x00045072) popup_tmo_big_image_note_window

0x30a8,	// (0x0003d251) cell_ai5_widget_list_pane

0x299c,	// (0x0003cb45) cell_ai5_widget_lrg_icon_pane

0x2db7,	// (0x0003cf60) tmo_note_info_pane_t1_ParamLimits

0x2dcc,	// (0x0003cf75) tmo_note_info_pane_t2_ParamLimits

0x2de1,	// (0x0003cf8a) tmo_note_info_pane_t3_ParamLimits

0x335c,	// (0x0003d505) tmo_note_info_pane_t4_ParamLimits

0x336e,	// (0x0003d517) tmo_note_info_pane_t5_ParamLimits

0xfeb8,	// (0x0004a061) tmo_note_info_pane_t_ParamLimits

0x2e59,	// (0x0003d002) settings_container_pane_ParamLimits

0x34bb,	// (0x0003d664) indicator_popup_pane_cp5

0x34bb,	// (0x0003d664) indicator_popup_pane_cp6

0x9682,	// (0x0004382b) list_set_graphic_pane_copy1_ParamLimits

0x7b1f,	// (0x00041cc8) bg_popup_window_pane_cp23

0x3553,	// (0x0003d6fc) popup_tmo_big_image_note_window_g1

0x355c,	// (0x0003d705) popup_tmo_big_image_note_window_t1

0x356a,	// (0x0003d713) popup_tmo_big_image_note_window_t2

0x3578,	// (0x0003d721) popup_tmo_big_image_note_window_t3

0x0002,

0xfed1,	// (0x0004a07a) popup_tmo_big_image_note_window_t

0xe4d3,	// (0x0004867c) cell_ai5_widget_lrg_icon_pane_g1

0x3586,	// (0x0003d72f) cell_ai5_widget_lrg_icon_pane_t1

0x2f8f,	// (0x0003d138) cell_ai5_widget_list_row_pane_ParamLimits

0x2f8f,	// (0x0003d138) cell_ai5_widget_list_row_pane

0x2fa6,	// (0x0003d14f) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x2fa6,	// (0x0003d14f) cell_ai5_widget_list_row_pane_g1

0x2fb3,	// (0x0003d15c) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x2fb3,	// (0x0003d15c) cell_ai5_widget_list_row_pane_t1

0x2fe4,	// (0x0003d18d) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x2fe4,	// (0x0003d18d) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfed8,	// (0x0004a081) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed8,	// (0x0004a081) cell_ai5_widget_list_row_pane_t

0x4236,	// (0x0003e3df) main_fep_vtchi_ss_pane

0x35b4,	// (0x0003d75d) popup_fep_char_pre_window

0x35bc,	// (0x0003d765) popup_fep_ituss_window

0x300c,	// (0x0003d1b5) popup_fep_vkbss_window

0x35ef,	// (0x0003d798) grid_vkbss_keypad_pane_ParamLimits

0x35ef,	// (0x0003d798) grid_vkbss_keypad_pane

0x35ff,	// (0x0003d7a8) ituss_keypad_pane

0x6c93,	// (0x00040e3c) aid_vkbss_key_offset_ParamLimits

0x6c93,	// (0x00040e3c) aid_vkbss_key_offset

0x6c9f,	// (0x00040e48) cell_vkbss_key_pane_ParamLimits

0x6c9f,	// (0x00040e48) cell_vkbss_key_pane

0xd14b,	// (0x000472f4) bg_cell_vkbss_key_g1_ParamLimits

0xd14b,	// (0x000472f4) bg_cell_vkbss_key_g1

0x360e,	// (0x0003d7b7) cell_vkbss_key_3p_pane_ParamLimits

0x360e,	// (0x0003d7b7) cell_vkbss_key_3p_pane

0x3628,	// (0x0003d7d1) cell_vkbss_key_g1_ParamLimits

0x3628,	// (0x0003d7d1) cell_vkbss_key_g1

0x3642,	// (0x0003d7eb) cell_vkbss_key_t1_ParamLimits

0x3642,	// (0x0003d7eb) cell_vkbss_key_t1

0x6cb5,	// (0x00040e5e) cell_ituss_key_pane_ParamLimits

0x6cb5,	// (0x00040e5e) cell_ituss_key_pane

0x366d,	// (0x0003d816) bg_cell_ituss_key_g1_ParamLimits

0x366d,	// (0x0003d816) bg_cell_ituss_key_g1

0x3679,	// (0x0003d822) cell_ituss_key_pane_g1_ParamLimits

0x3679,	// (0x0003d822) cell_ituss_key_pane_g1

0x6cc6,	// (0x00040e6f) cell_ituss_key_pane_g2_ParamLimits

0x6cc6,	// (0x00040e6f) cell_ituss_key_pane_g2

0x0002,

0xfedf,	// (0x0004a088) cell_ituss_key_pane_g_ParamLimits

0xfedf,	// (0x0004a088) cell_ituss_key_pane_g

0x6cee,	// (0x00040e97) cell_ituss_key_t1_ParamLimits

0x6cee,	// (0x00040e97) cell_ituss_key_t1

0x6d28,	// (0x00040ed1) cell_ituss_key_t2_ParamLimits

0x6d28,	// (0x00040ed1) cell_ituss_key_t2

0x6d59,	// (0x00040f02) cell_ituss_key_t3_ParamLimits

0x6d59,	// (0x00040f02) cell_ituss_key_t3

0x6d28,	// (0x00040ed1) cell_ituss_key_t4_ParamLimits

0x6d28,	// (0x00040ed1) cell_ituss_key_t4

0x0004,

0xfee6,	// (0x0004a08f) cell_ituss_key_t_ParamLimits

0xfee6,	// (0x0004a08f) cell_ituss_key_t

0x36af,	// (0x0003d858) cell_vkbss_key_3p_pane_g1

0x36a7,	// (0x0003d850) cell_vkbss_key_3p_pane_g2

0x369f,	// (0x0003d848) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef1,	// (0x0004a09a) cell_vkbss_key_3p_pane_g

0xc265,	// (0x0004640e) bg_popup_fep_char_preview_window_cp02

0x36b7,	// (0x0003d860) popup_fep_char_pre_window_t1

0x2989,	// (0x0003cb32) main_ai5_sk_pane

0x33e8,	// (0x0003d591) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x33f4,	// (0x0003d59d) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x3409,	// (0x0003d5b2) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x3415,	// (0x0003d5be) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec3,	// (0x0004a06c) cell_contacts_ai5_widget_pane_g_ParamLimits

0x3421,	// (0x0003d5ca) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x91cb,	// (0x00043374) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0x3019,	// (0x0003d1c2) main_ai5_sk_pane_g1

0xca07,	// (0x00046bb0) popup_query_code_window_g1

0x35ce,	// (0x0003d777) popup_fep_vkb_icf_pane

0x35d9,	// (0x0003d782) popup_fep_vtchi_icf_pane

0x36c5,	// (0x0003d86e) bg_icf_pane

0x36d1,	// (0x0003d87a) list_vkb_icf_pane

0x36dd,	// (0x0003d886) bg_icf_pane_cp01

0x36f0,	// (0x0003d899) vtchi_icf_list_pane

0x3700,	// (0x0003d8a9) list_vkb_icf_pane_t1_ParamLimits

0x3700,	// (0x0003d8a9) list_vkb_icf_pane_t1

0x3715,	// (0x0003d8be) vtchi_icf_list_pane_t1_ParamLimits

0x3715,	// (0x0003d8be) vtchi_icf_list_pane_t1

0x35bc,	// (0x0003d765) popup_fep_ituss_window_ParamLimits

0x35d9,	// (0x0003d782) popup_fep_vtchi_icf_pane_ParamLimits

0x35ff,	// (0x0003d7a8) ituss_keypad_pane_ParamLimits

0x6c89,	// (0x00040e32) ituss_sks_pane

0x36c5,	// (0x0003d86e) bg_icf_pane_ParamLimits

0x3594,	// (0x0003d73d) icf_edit_indi_pane_ParamLimits

0x3594,	// (0x0003d73d) icf_edit_indi_pane

0x36d1,	// (0x0003d87a) list_vkb_icf_pane_ParamLimits

0x36dd,	// (0x0003d886) bg_icf_pane_cp01_ParamLimits

0x35a7,	// (0x0003d750) icf_edit_indi_pane_cp01_ParamLimits

0x35a7,	// (0x0003d750) icf_edit_indi_pane_cp01

0x36f8,	// (0x0003d8a1) vtchi_query_pane

0x2827,	// (0x0003c9d0) icf_edit_indi_pane_g1_ParamLimits

0x2827,	// (0x0003c9d0) icf_edit_indi_pane_g1

0x3022,	// (0x0003d1cb) icf_edit_indi_pane_g2_ParamLimits

0x3022,	// (0x0003d1cb) icf_edit_indi_pane_g2

0x0001,

0xff09,	// (0x0004a0b2) icf_edit_indi_pane_g_ParamLimits

0xff09,	// (0x0004a0b2) icf_edit_indi_pane_g

0x3032,	// (0x0003d1db) icf_edit_indi_pane_t1

0x372c,	// (0x0003d8d5) bg_input_focus_pane_cp042

0x3735,	// (0x0003d8de) vtchi_button_pane

0x373e,	// (0x0003d8e7) vtchi_query_pane_t1

0x374c,	// (0x0003d8f5) vtchi_query_pane_t2

0x375a,	// (0x0003d903) vtchi_query_pane_t3

0x0002,

0xfef8,	// (0x0004a0a1) vtchi_query_pane_t

0x4236,	// (0x0003e3df) bg_button_pane_cp13

0x3768,	// (0x0003d911) vtchi_button_pane_g1

0x6d9c,	// (0x00040f45) ituss_sks_pane_g1

0x6da5,	// (0x00040f4e) ituss_sks_pane_g2

0x0001,

0xfeff,	// (0x0004a0a8) ituss_sks_pane_g

0x377e,	// (0x0003d927) ituss_sks_pane_t1

0x3770,	// (0x0003d919) ituss_sks_pane_t2

0x0001,

0xff04,	// (0x0004a0ad) ituss_sks_pane_t

0xe100,	// (0x000482a9) indicator_nsta_pane_cp_g1

0xe109,	// (0x000482b2) indicator_nsta_pane_cp_g2

0xe111,	// (0x000482ba) indicator_nsta_pane_cp_g3

0xe119,	// (0x000482c2) indicator_nsta_pane_cp_g4

0xe121,	// (0x000482ca) indicator_nsta_pane_cp_g5

0xe129,	// (0x000482d2) indicator_nsta_pane_cp_g6

0x0005,

0xfaa8,	// (0x00049c51) indicator_nsta_pane_cp_g

0x2562,	// (0x0003c70b) cell_graphic2_pane_t2_ParamLimits

0x2562,	// (0x0003c70b) cell_graphic2_pane_t2

0x0001,

0xfdba,	// (0x00049f63) cell_graphic2_pane_t_ParamLimits

0xfdba,	// (0x00049f63) cell_graphic2_pane_t

0x259a,	// (0x0003c743) cell_graphic2_control_pane_t1

0x9620,	// (0x000437c9) signal_pane_g3_ParamLimits

0x9620,	// (0x000437c9) signal_pane_g3

0x9634,	// (0x000437dd) signal_pane_g4_ParamLimits

0x9634,	// (0x000437dd) signal_pane_g4

0x2ff6,	// (0x0003d19f) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x2ff6,	// (0x0003d19f) cell_ai5_widget_list_row_pane_t3

0x368d,	// (0x0003d836) cell_ituss_key_pane_t1_ParamLimits

0x368d,	// (0x0003d836) cell_ituss_key_pane_t1

0xc6dd,	// (0x00046886) form_field_data_wide_pane_vc_t2_ParamLimits

0xc6dd,	// (0x00046886) form_field_data_wide_pane_vc_t2

0xc6ef,	// (0x00046898) form_field_data_wide_pane_vc_t3_ParamLimits

0xc6ef,	// (0x00046898) form_field_data_wide_pane_vc_t3

0x0002,

0xf802,	// (0x000499ab) form_field_data_wide_pane_vc_t_ParamLimits

0xf802,	// (0x000499ab) form_field_data_wide_pane_vc_t

0xde54,	// (0x00047ffd) form_field_slider_wide_pane_vc_t3_ParamLimits

0xde54,	// (0x00047ffd) form_field_slider_wide_pane_vc_t3

0xdf12,	// (0x000480bb) form_field_popup_wide_pane_vc_t2_ParamLimits

0xdf12,	// (0x000480bb) form_field_popup_wide_pane_vc_t2

0xdf27,	// (0x000480d0) form_field_popup_wide_pane_vc_t3_ParamLimits

0xdf27,	// (0x000480d0) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa97,	// (0x00049c40) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa97,	// (0x00049c40) form_field_popup_wide_pane_vc_t

0xb962,	// (0x00045b0b) aid_fshwr2_btn_pane_ParamLimits

0xb973,	// (0x00045b1c) aid_fshwr2_syb_pane_ParamLimits

0xb984,	// (0x00045b2d) aid_fshwr2_txt_pane_ParamLimits

0x586e,	// (0x0003fa17) fshwr2_bg_pane_ParamLimits

0xb990,	// (0x00045b39) fshwr2_func_candi_pane_ParamLimits

0xb9aa,	// (0x00045b53) fshwr2_hwr_syb_pane_ParamLimits

0xb9bf,	// (0x00045b68) fshwr2_icf_pane_ParamLimits

0xd0ad,	// (0x00047256) list_double_graphic_pane_vc_g4_ParamLimits

0xd0ad,	// (0x00047256) list_double_graphic_pane_vc_g4

0x6ce2,	// (0x00040e8b) cell_ituss_key_pane_g3_ParamLimits

0x6ce2,	// (0x00040e8b) cell_ituss_key_pane_g3

0x6d8a,	// (0x00040f33) cell_ituss_key_t5_ParamLimits

0x6d8a,	// (0x00040f33) cell_ituss_key_t5

0x300c,	// (0x0003d1b5) popup_fep_vkbss_window_ParamLimits

0x2993,	// (0x0003cb3c) aid_cell_ai5_quarter

0x3032,	// (0x0003d1db) icf_edit_indi_pane_t1_ParamLimits

0x8cba,	// (0x00042e63) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x8cba,	// (0x00042e63) aid_tch_indicator_popup_pane_cp2

0x8ccd,	// (0x00042e76) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x8ccd,	// (0x00042e76) aid_tch_query_popup_data_pane_cp2

0xc9af,	// (0x00046b58) aid_tch_query_popup_pane_ParamLimits

0xc9af,	// (0x00046b58) aid_tch_query_popup_pane

0xc9af,	// (0x00046b58) aid_tch_query_popup_data_pane_cp1_ParamLimits

0xc9af,	// (0x00046b58) aid_tch_query_popup_data_pane_cp1
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
	};

} // end of namespace AknLayoutScalable_Abrw_pql_av_qvga_lsc_Large
