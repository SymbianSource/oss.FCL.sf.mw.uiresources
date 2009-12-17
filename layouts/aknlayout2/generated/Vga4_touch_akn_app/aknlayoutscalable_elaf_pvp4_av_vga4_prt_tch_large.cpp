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

#include "aknlayoutscalable_elaf_pvp4_av_vga4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0003acfd };

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
0x773f,	// (0x0004243c) Screen

0x7753,	// (0x00042450) application_window_ParamLimits

0x7753,	// (0x00042450) application_window

0x776d,	// (0x0004246a) screen_g1

0x5a9e,	// (0x0004079b) area_bottom_pane_ParamLimits

0x5a9e,	// (0x0004079b) area_bottom_pane

0x5b5e,	// (0x0004085b) area_top_pane_ParamLimits

0x5b5e,	// (0x0004085b) area_top_pane

0x5bf2,	// (0x000408ef) main_pane_ParamLimits

0x5bf2,	// (0x000408ef) main_pane

0x7777,	// (0x00042474) misc_graphics

0x976f,	// (0x0004446c) battery_pane_ParamLimits

0x976f,	// (0x0004446c) battery_pane

0xa451,	// (0x0004514e) bg_status_flat_pane_g8

0xa459,	// (0x00045156) bg_status_flat_pane_g9

0x9837,	// (0x00044534) context_pane_ParamLimits

0x9837,	// (0x00044534) context_pane

0x995b,	// (0x00044658) navi_pane_ParamLimits

0x995b,	// (0x00044658) navi_pane

0x99ea,	// (0x000446e7) signal_pane_ParamLimits

0x99ea,	// (0x000446e7) signal_pane

0x0008,

0xf8b7,	// (0x0004a5b4) bg_status_flat_pane_g

0x9a57,	// (0x00044754) status_pane_g1_ParamLimits

0x9a57,	// (0x00044754) status_pane_g1

0x9a6b,	// (0x00044768) status_pane_g2_ParamLimits

0x9a6b,	// (0x00044768) status_pane_g2

0x9a77,	// (0x00044774) status_pane_g3_ParamLimits

0x9a77,	// (0x00044774) status_pane_g3

0x0004,

0xf7e5,	// (0x0004a4e2) status_pane_g_ParamLimits

0xf7e5,	// (0x0004a4e2) status_pane_g

0x9aab,	// (0x000447a8) title_pane_ParamLimits

0x9aab,	// (0x000447a8) title_pane

0x9ae8,	// (0x000447e5) uni_indicator_pane_ParamLimits

0x9ae8,	// (0x000447e5) uni_indicator_pane

0x9058,	// (0x00043d55) bg_list_pane_ParamLimits

0x9058,	// (0x00043d55) bg_list_pane

0x9084,	// (0x00043d81) find_pane

0x908c,	// (0x00043d89) listscroll_app_pane_ParamLimits

0x908c,	// (0x00043d89) listscroll_app_pane

0x9098,	// (0x00043d95) listscroll_form_pane

0x90a0,	// (0x00043d9d) listscroll_gen_pane_ParamLimits

0x90a0,	// (0x00043d9d) listscroll_gen_pane

0x9098,	// (0x00043d95) listscroll_set_pane

0x82d5,	// (0x00042fd2) main_idle_act_pane

0x8d3c,	// (0x00043a39) main_idle_trad_pane

0x8d3c,	// (0x00043a39) main_list_empty_pane

0x90c6,	// (0x00043dc3) main_midp_pane

0x90d2,	// (0x00043dcf) main_pane_g1_ParamLimits

0x90d2,	// (0x00043dcf) main_pane_g1

0x90e0,	// (0x00043ddd) popup_ai_message_window_ParamLimits

0x90e0,	// (0x00043ddd) popup_ai_message_window

0x9190,	// (0x00043e8d) popup_fep_china_uni_window_ParamLimits

0x9190,	// (0x00043e8d) popup_fep_china_uni_window

0x91f0,	// (0x00043eed) popup_fep_japan_candidate_window_ParamLimits

0x91f0,	// (0x00043eed) popup_fep_japan_candidate_window

0x921a,	// (0x00043f17) popup_fep_japan_predictive_window_ParamLimits

0x921a,	// (0x00043f17) popup_fep_japan_predictive_window

0x9250,	// (0x00043f4d) popup_find_window

0x925d,	// (0x00043f5a) popup_grid_graphic_window_ParamLimits

0x925d,	// (0x00043f5a) popup_grid_graphic_window

0x928b,	// (0x00043f88) popup_large_graphic_colour_window

0x92b1,	// (0x00043fae) popup_menu_window_ParamLimits

0x92b1,	// (0x00043fae) popup_menu_window

0x947b,	// (0x00044178) popup_note_image_window

0x9465,	// (0x00044162) popup_note_wait_window_ParamLimits

0x9465,	// (0x00044162) popup_note_wait_window

0x9465,	// (0x00044162) popup_note_window_ParamLimits

0x9465,	// (0x00044162) popup_note_window

0x94e1,	// (0x000441de) popup_query_code_window_ParamLimits

0x94e1,	// (0x000441de) popup_query_code_window

0x94f7,	// (0x000441f4) popup_query_data_code_window_ParamLimits

0x94f7,	// (0x000441f4) popup_query_data_code_window

0x951a,	// (0x00044217) popup_query_data_window_ParamLimits

0x951a,	// (0x00044217) popup_query_data_window

0x953c,	// (0x00044239) popup_query_sat_info_window_ParamLimits

0x953c,	// (0x00044239) popup_query_sat_info_window

0x957b,	// (0x00044278) popup_snote_single_graphic_window_ParamLimits

0x957b,	// (0x00044278) popup_snote_single_graphic_window

0x957b,	// (0x00044278) popup_snote_single_text_window_ParamLimits

0x957b,	// (0x00044278) popup_snote_single_text_window

0x9592,	// (0x0004428f) popup_sub_window_general

0x96d8,	// (0x000443d5) popup_window_general_ParamLimits

0x96d8,	// (0x000443d5) popup_window_general

0x96f1,	// (0x000443ee) power_save_pane

0x6430,	// (0x0004112d) control_pane_g1_ParamLimits

0x6430,	// (0x0004112d) control_pane_g1

0x6459,	// (0x00041156) control_pane_g2_ParamLimits

0x6459,	// (0x00041156) control_pane_g2

0x9009,	// (0x00043d06) control_pane_g3_ParamLimits

0x9009,	// (0x00043d06) control_pane_g3

0x0007,

0xf7cd,	// (0x0004a4ca) control_pane_g_ParamLimits

0xf7cd,	// (0x0004a4ca) control_pane_g

0x6499,	// (0x00041196) control_pane_t1_ParamLimits

0x6499,	// (0x00041196) control_pane_t1

0x64eb,	// (0x000411e8) control_pane_t2_ParamLimits

0x64eb,	// (0x000411e8) control_pane_t2

0x0002,

0xf7de,	// (0x0004a4db) control_pane_t_ParamLimits

0xf7de,	// (0x0004a4db) control_pane_t

0x8f2a,	// (0x00043c27) navi_navi_volume_pane_cp1

0x8f33,	// (0x00043c30) status_small_icon_pane

0x8f3b,	// (0x00043c38) status_small_pane_g1_ParamLimits

0x8f3b,	// (0x00043c38) status_small_pane_g1

0x8f6f,	// (0x00043c6c) status_small_pane_g2_ParamLimits

0x8f6f,	// (0x00043c6c) status_small_pane_g2

0x8f7b,	// (0x00043c78) status_small_pane_g3_ParamLimits

0x8f7b,	// (0x00043c78) status_small_pane_g3

0x8f87,	// (0x00043c84) status_small_pane_g4_ParamLimits

0x8f87,	// (0x00043c84) status_small_pane_g4

0x8f93,	// (0x00043c90) status_small_pane_g5_ParamLimits

0x8f93,	// (0x00043c90) status_small_pane_g5

0x8fa2,	// (0x00043c9f) status_small_pane_g6_ParamLimits

0x8fa2,	// (0x00043c9f) status_small_pane_g6

0x0007,

0xf7bc,	// (0x0004a4b9) status_small_pane_g_ParamLimits

0xf7bc,	// (0x0004a4b9) status_small_pane_g

0x8fd2,	// (0x00043ccf) status_small_pane_t1

0x8ff5,	// (0x00043cf2) status_small_wait_pane_ParamLimits

0x8ff5,	// (0x00043cf2) status_small_wait_pane

0x87d3,	// (0x000434d0) aid_levels_signal_ParamLimits

0x87d3,	// (0x000434d0) aid_levels_signal

0x87e5,	// (0x000434e2) signal_pane_g1_ParamLimits

0x87e5,	// (0x000434e2) signal_pane_g1

0x87fa,	// (0x000434f7) signal_pane_g2_ParamLimits

0x87fa,	// (0x000434f7) signal_pane_g2

0x0001,

0xf751,	// (0x0004a44e) signal_pane_g_ParamLimits

0xf751,	// (0x0004a44e) signal_pane_g

0x880f,	// (0x0004350c) context_pane_g1

0x7781,	// (0x0004247e) title_pane_g1

0x77b7,	// (0x000424b4) title_pane_t1

0x781f,	// (0x0004251c) title_pane_t2

0x7845,	// (0x00042542) title_pane_t3

0x0002,

0xf59b,	// (0x0004a298) title_pane_t

0x9b00,	// (0x000447fd) aid_levels_battery_ParamLimits

0x9b00,	// (0x000447fd) aid_levels_battery

0x9b14,	// (0x00044811) battery_pane_g1_ParamLimits

0x9b14,	// (0x00044811) battery_pane_g1

0x9b2a,	// (0x00044827) battery_pane_g2_ParamLimits

0x9b2a,	// (0x00044827) battery_pane_g2

0x0001,

0xf7f0,	// (0x0004a4ed) battery_pane_g_ParamLimits

0xf7f0,	// (0x0004a4ed) battery_pane_g

0xada1,	// (0x00045a9e) uni_indicator_pane_g1

0xadb6,	// (0x00045ab3) uni_indicator_pane_g2

0xadcc,	// (0x00045ac9) uni_indicator_pane_g3

0x0005,

0xf95f,	// (0x0004a65c) uni_indicator_pane_g

0x8baa,	// (0x000438a7) navi_icon_pane_ParamLimits

0x8baa,	// (0x000438a7) navi_icon_pane

0x8af1,	// (0x000437ee) navi_midp_pane

0x8bc6,	// (0x000438c3) navi_navi_pane

0x8bd0,	// (0x000438cd) navi_text_pane_ParamLimits

0x8bd0,	// (0x000438cd) navi_text_pane

0x776d,	// (0x0004246a) status_small_wait_pane_g1

0x7c89,	// (0x00042986) status_small_wait_pane_g2

0x0001,

0xf95a,	// (0x0004a657) status_small_wait_pane_g

0xaab4,	// (0x000457b1) navi_navi_icon_text_pane

0xaabc,	// (0x000457b9) navi_navi_pane_g1_ParamLimits

0xaabc,	// (0x000457b9) navi_navi_pane_g1

0xaace,	// (0x000457cb) navi_navi_pane_g2_ParamLimits

0xaace,	// (0x000457cb) navi_navi_pane_g2

0x0001,

0xf928,	// (0x0004a625) navi_navi_pane_g_ParamLimits

0xf928,	// (0x0004a625) navi_navi_pane_g

0xaae0,	// (0x000457dd) navi_navi_tabs_pane

0xaae9,	// (0x000457e6) navi_navi_text_pane

0xaab4,	// (0x000457b1) navi_navi_volume_pane

0xaa8d,	// (0x0004578a) navi_text_pane_t1

0xaa7e,	// (0x0004577b) navi_icon_pane_g1

0xa9d1,	// (0x000456ce) navi_navi_text_pane_t1

0x681a,	// (0x00041517) navi_navi_volume_pane_g1

0x6822,	// (0x0004151f) volume_small_pane

0xa937,	// (0x00045634) navi_navi_icon_text_pane_g1

0xa93f,	// (0x0004563c) navi_navi_icon_text_pane_t1

0x8bc6,	// (0x000438c3) navi_tabs_2_long_pane

0x8bc6,	// (0x000438c3) navi_tabs_2_pane

0x8bc6,	// (0x000438c3) navi_tabs_3_long_pane

0x8bc6,	// (0x000438c3) navi_tabs_3_pane

0x8bc6,	// (0x000438c3) navi_tabs_4_pane

0x67fa,	// (0x000414f7) tabs_2_active_pane_ParamLimits

0x67fa,	// (0x000414f7) tabs_2_active_pane

0x680a,	// (0x00041507) tabs_2_passive_pane_ParamLimits

0x680a,	// (0x00041507) tabs_2_passive_pane

0x67c8,	// (0x000414c5) tabs_3_active_pane_ParamLimits

0x67c8,	// (0x000414c5) tabs_3_active_pane

0x67d8,	// (0x000414d5) tabs_3_passive_pane_ParamLimits

0x67d8,	// (0x000414d5) tabs_3_passive_pane

0x67e9,	// (0x000414e6) tabs_3_passive_pane_cp_ParamLimits

0x67e9,	// (0x000414e6) tabs_3_passive_pane_cp

0x677c,	// (0x00041479) tabs_4_active_pane_ParamLimits

0x677c,	// (0x00041479) tabs_4_active_pane

0x678f,	// (0x0004148c) tabs_4_passive_pane_ParamLimits

0x678f,	// (0x0004148c) tabs_4_passive_pane

0x67a0,	// (0x0004149d) tabs_4_passive_pane_cp_ParamLimits

0x67a0,	// (0x0004149d) tabs_4_passive_pane_cp

0x67b1,	// (0x000414ae) tabs_4_passive_pane_cp2_ParamLimits

0x67b1,	// (0x000414ae) tabs_4_passive_pane_cp2

0x6758,	// (0x00041455) tabs_2_long_active_pane_ParamLimits

0x6758,	// (0x00041455) tabs_2_long_active_pane

0x676a,	// (0x00041467) tabs_2_long_passive_pane_ParamLimits

0x676a,	// (0x00041467) tabs_2_long_passive_pane

0x6719,	// (0x00041416) tabs_3_long_active_pane_ParamLimits

0x6719,	// (0x00041416) tabs_3_long_active_pane

0x672c,	// (0x00041429) tabs_3_long_passive_pane_ParamLimits

0x672c,	// (0x00041429) tabs_3_long_passive_pane

0x6745,	// (0x00041442) tabs_3_long_passive_pane_cp_ParamLimits

0x6745,	// (0x00041442) tabs_3_long_passive_pane_cp

0x66bf,	// (0x000413bc) volume_small_pane_g1

0x66c8,	// (0x000413c5) volume_small_pane_g2

0x66d1,	// (0x000413ce) volume_small_pane_g3

0x66da,	// (0x000413d7) volume_small_pane_g4

0x66e3,	// (0x000413e0) volume_small_pane_g5

0x66ec,	// (0x000413e9) volume_small_pane_g6

0x66f5,	// (0x000413f2) volume_small_pane_g7

0x66fe,	// (0x000413fb) volume_small_pane_g8

0x6707,	// (0x00041404) volume_small_pane_g9

0x6710,	// (0x0004140d) volume_small_pane_g10

0x0009,

0xf8f4,	// (0x0004a5f1) volume_small_pane_g

0x7857,	// (0x00042554) bg_active_tab_pane_cp2_ParamLimits

0x7857,	// (0x00042554) bg_active_tab_pane_cp2

0x7865,	// (0x00042562) tabs_3_active_pane_g1

0x786d,	// (0x0004256a) tabs_3_active_pane_t1

0x7857,	// (0x00042554) bg_passive_tab_pane_cp2_ParamLimits

0x7857,	// (0x00042554) bg_passive_tab_pane_cp2

0x7865,	// (0x00042562) tabs_3_passive_pane_g1

0x786d,	// (0x0004256a) tabs_3_passive_pane_t1

0x7857,	// (0x00042554) bg_active_tab_pane_cp3_ParamLimits

0x7857,	// (0x00042554) bg_active_tab_pane_cp3

0x787f,	// (0x0004257c) tabs_4_active_pane_g1

0x7887,	// (0x00042584) tabs_4_active_pane_t1

0x7857,	// (0x00042554) bg_passive_tab_pane_cp3_ParamLimits

0x7857,	// (0x00042554) bg_passive_tab_pane_cp3

0x787f,	// (0x0004257c) tabs_4_1_passive_pane_g1

0x7887,	// (0x00042584) tabs_4_1_passive_pane_t1

0x90c6,	// (0x00043dc3) list_highlight_pane_cp2

0xb030,	// (0x00045d2d) list_set_pane_ParamLimits

0xb030,	// (0x00045d2d) list_set_pane

0xb0f8,	// (0x00045df5) main_pane_set_t1_ParamLimits

0xb0f8,	// (0x00045df5) main_pane_set_t1

0xb118,	// (0x00045e15) main_pane_set_t2_ParamLimits

0xb118,	// (0x00045e15) main_pane_set_t2

0xb12c,	// (0x00045e29) main_pane_set_t3_ParamLimits

0xb12c,	// (0x00045e29) main_pane_set_t3

0xb140,	// (0x00045e3d) main_pane_set_t4_ParamLimits

0xb140,	// (0x00045e3d) main_pane_set_t4

0x0003,

0xf9c4,	// (0x0004a6c1) main_pane_set_t_ParamLimits

0xf9c4,	// (0x0004a6c1) main_pane_set_t

0xb160,	// (0x00045e5d) setting_code_pane

0xb16a,	// (0x00045e67) setting_slider_graphic_pane

0xb16a,	// (0x00045e67) setting_slider_pane

0xb16a,	// (0x00045e67) setting_text_pane

0xb16a,	// (0x00045e67) setting_volume_pane

0x5e49,	// (0x00040b46) volume_set_pane

0x7857,	// (0x00042554) bg_set_opt_pane_cp

0x5e53,	// (0x00040b50) setting_slider_pane_t1

0x5e69,	// (0x00040b66) setting_slider_pane_t2

0x5e83,	// (0x00040b80) setting_slider_pane_t3

0x0002,

0xf5a2,	// (0x0004a29f) setting_slider_pane_t

0x5e9b,	// (0x00040b98) slider_set_pane

0x7777,	// (0x00042474) bg_set_opt_pane_cp2

0x7899,	// (0x00042596) setting_slider_graphic_pane_g1

0x5eb1,	// (0x00040bae) setting_slider_graphic_pane_t1

0x5ec1,	// (0x00040bbe) setting_slider_graphic_pane_t2

0x0001,

0xf5a9,	// (0x0004a2a6) setting_slider_graphic_pane_t

0x5ed1,	// (0x00040bce) slider_set_pane_cp

0x7777,	// (0x00042474) input_focus_pane_cp1

0xaff1,	// (0x00045cee) list_set_text_pane

0x776d,	// (0x0004246a) setting_text_pane_g1

0x7777,	// (0x00042474) input_focus_pane_cp2

0x776d,	// (0x0004246a) setting_code_pane_g1

0x78a2,	// (0x0004259f) setting_code_pane_t1

0x4cd9,	// (0x0003f9d6) set_text_pane_t1_ParamLimits

0x4cd9,	// (0x0003f9d6) set_text_pane_t1

0x8145,	// (0x00042e42) set_opt_bg_pane_g1

0x814d,	// (0x00042e4a) set_opt_bg_pane_g2

0xafc9,	// (0x00045cc6) set_opt_bg_pane_g3

0x815d,	// (0x00042e5a) set_opt_bg_pane_g4

0x8165,	// (0x00042e62) set_opt_bg_pane_g5

0x816d,	// (0x00042e6a) set_opt_bg_pane_g6

0xafd3,	// (0x00045cd0) set_opt_bg_pane_g7

0xafdd,	// (0x00045cda) set_opt_bg_pane_g8

0xafe7,	// (0x00045ce4) set_opt_bg_pane_g9

0x0008,

0xf9b1,	// (0x0004a6ae) set_opt_bg_pane_g

0xafbc,	// (0x00045cb9) slider_set_pane_g1

0x68a3,	// (0x000415a0) slider_set_pane_g2

0x0006,

0xf9a2,	// (0x0004a69f) slider_set_pane_g

0x682b,	// (0x00041528) volume_set_pane_g1

0x6835,	// (0x00041532) volume_set_pane_g2

0x683f,	// (0x0004153c) volume_set_pane_g3

0x6849,	// (0x00041546) volume_set_pane_g4

0x6853,	// (0x00041550) volume_set_pane_g5

0x685d,	// (0x0004155a) volume_set_pane_g6

0x6867,	// (0x00041564) volume_set_pane_g7

0x6871,	// (0x0004156e) volume_set_pane_g8

0x687b,	// (0x00041578) volume_set_pane_g9

0x6885,	// (0x00041582) volume_set_pane_g10

0x0009,

0xf97a,	// (0x0004a677) volume_set_pane_g

0x78b0,	// (0x000425ad) indicator_pane_ParamLimits

0x78b0,	// (0x000425ad) indicator_pane

0x78bc,	// (0x000425b9) main_idle_pane_g2_ParamLimits

0x78bc,	// (0x000425b9) main_idle_pane_g2

0x78e4,	// (0x000425e1) main_pane_idle_g1_ParamLimits

0x78e4,	// (0x000425e1) main_pane_idle_g1

0x78f2,	// (0x000425ef) popup_clock_digital_analogue_window_ParamLimits

0x78f2,	// (0x000425ef) popup_clock_digital_analogue_window

0x7909,	// (0x00042606) soft_indicator_pane_ParamLimits

0x7909,	// (0x00042606) soft_indicator_pane

0x7917,	// (0x00042614) wallpaper_pane_ParamLimits

0x7917,	// (0x00042614) wallpaper_pane

0x776d,	// (0x0004246a) wallpaper_pane_g1

0x792b,	// (0x00042628) indicator_pane_g1_ParamLimits

0x792b,	// (0x00042628) indicator_pane_g1

0xb42e,	// (0x0004612b) navi_navi_icon_text_pane_srt_g1

0x7946,	// (0x00042643) soft_indicator_pane_t1

0x7960,	// (0x0004265d) aid_ps_area_pane

0x7971,	// (0x0004266e) aid_ps_clock_pane

0x797f,	// (0x0004267c) aid_ps_indicator_pane

0x798b,	// (0x00042688) indicator_ps_pane_ParamLimits

0x798b,	// (0x00042688) indicator_ps_pane

0x799a,	// (0x00042697) power_save_pane_g1_ParamLimits

0x799a,	// (0x00042697) power_save_pane_g1

0x79a6,	// (0x000426a3) power_save_pane_g2_ParamLimits

0x79a6,	// (0x000426a3) power_save_pane_g2

0x5a52,	// (0x0004074f) aid_navinavi_width_pane

0x7960,	// (0x0004265d) aid_ps_area_pane_ParamLimits

0x0001,

0xf5ae,	// (0x0004a2ab) power_save_pane_g_ParamLimits

0xf5ae,	// (0x0004a2ab) power_save_pane_g

0x79b4,	// (0x000426b1) power_save_pane_t1_ParamLimits

0x79b4,	// (0x000426b1) power_save_pane_t1

0x7971,	// (0x0004266e) aid_ps_clock_pane_ParamLimits

0x797f,	// (0x0004267c) aid_ps_indicator_pane_ParamLimits

0x79c6,	// (0x000426c3) power_save_pane_t4_ParamLimits

0x79c6,	// (0x000426c3) power_save_pane_t4

0x0001,

0xf5b3,	// (0x0004a2b0) power_save_pane_t_ParamLimits

0xf5b3,	// (0x0004a2b0) power_save_pane_t

0x79f0,	// (0x000426ed) power_save_t3_ParamLimits

0x79f0,	// (0x000426ed) power_save_t3

0x79db,	// (0x000426d8) power_save_t2_ParamLimits

0x79db,	// (0x000426d8) power_save_t2

0x7a05,	// (0x00042702) indicator_ps_pane_g1

0x7a0e,	// (0x0004270b) ai_gene_pane_ParamLimits

0x7a0e,	// (0x0004270b) ai_gene_pane

0x7a1a,	// (0x00042717) ai_links_pane_ParamLimits

0x7a1a,	// (0x00042717) ai_links_pane

0x7a26,	// (0x00042723) indicator_pane_cp1_ParamLimits

0x7a26,	// (0x00042723) indicator_pane_cp1

0x7a32,	// (0x0004272f) main_pane_idle_g1_cp_ParamLimits

0x7a32,	// (0x0004272f) main_pane_idle_g1_cp

0x7a3e,	// (0x0004273b) popup_ai_links_title_window

0x7a47,	// (0x00042744) soft_indicator_pane_cp1_ParamLimits

0x7a47,	// (0x00042744) soft_indicator_pane_cp1

0xad8f,	// (0x00045a8c) ai_links_pane_g1

0xad98,	// (0x00045a95) grid_ai_links_pane

0xad74,	// (0x00045a71) ai_gene_pane_1

0xad7d,	// (0x00045a7a) ai_gene_pane_2

0xad86,	// (0x00045a83) list_highlight_pane_cp4

0xad54,	// (0x00045a51) cell_ai_link_pane_ParamLimits

0xad54,	// (0x00045a51) cell_ai_link_pane

0xad4c,	// (0x00045a49) cell_ai_link_pane_g1

0x7c89,	// (0x00042986) cell_ai_link_pane_g2

0x0001,

0xf955,	// (0x0004a652) cell_ai_link_pane_g

0x7777,	// (0x00042474) grid_highlight_cp2

0x7777,	// (0x00042474) bg_popup_sub_pane_cp1

0x7a61,	// (0x0004275e) popup_ai_links_title_window_t1

0xac98,	// (0x00045995) ai_gene_pane_1_g1_ParamLimits

0xac98,	// (0x00045995) ai_gene_pane_1_g1

0xaca4,	// (0x000459a1) ai_gene_pane_1_g2_ParamLimits

0xaca4,	// (0x000459a1) ai_gene_pane_1_g2

0x0001,

0xf94b,	// (0x0004a648) ai_gene_pane_1_g_ParamLimits

0xf94b,	// (0x0004a648) ai_gene_pane_1_g

0xacb1,	// (0x000459ae) ai_gene_pane_1_t1_ParamLimits

0xacb1,	// (0x000459ae) ai_gene_pane_1_t1

0xace5,	// (0x000459e2) grid_ai_soft_ind_pane

0xac83,	// (0x00045980) ai_gene_pane_2_t1_ParamLimits

0xac83,	// (0x00045980) ai_gene_pane_2_t1

0x7a70,	// (0x0004276d) main_pane_empty_t1_ParamLimits

0x7a70,	// (0x0004276d) main_pane_empty_t1

0x7a88,	// (0x00042785) main_pane_empty_t2_ParamLimits

0x7a88,	// (0x00042785) main_pane_empty_t2

0x7a9d,	// (0x0004279a) main_pane_empty_t3_ParamLimits

0x7a9d,	// (0x0004279a) main_pane_empty_t3

0x7aaf,	// (0x000427ac) main_pane_empty_t4_ParamLimits

0x7aaf,	// (0x000427ac) main_pane_empty_t4

0x7ac1,	// (0x000427be) main_pane_empty_t5_ParamLimits

0x7ac1,	// (0x000427be) main_pane_empty_t5

0x0004,

0xf5b8,	// (0x0004a2b5) main_pane_empty_t_ParamLimits

0xf5b8,	// (0x0004a2b5) main_pane_empty_t

0x8196,	// (0x00042e93) bg_popup_window_pane_ParamLimits

0x8196,	// (0x00042e93) bg_popup_window_pane

0xa9df,	// (0x000456dc) find_popup_pane_cp2_ParamLimits

0xa9df,	// (0x000456dc) find_popup_pane_cp2

0xa9eb,	// (0x000456e8) heading_pane_ParamLimits

0xa9eb,	// (0x000456e8) heading_pane

0x7777,	// (0x00042474) bg_popup_sub_pane

0xa959,	// (0x00045656) bg_popup_window_pane_g1_ParamLimits

0xa959,	// (0x00045656) bg_popup_window_pane_g1

0xa965,	// (0x00045662) bg_popup_window_pane_g2_ParamLimits

0xa965,	// (0x00045662) bg_popup_window_pane_g2

0xa971,	// (0x0004566e) bg_popup_window_pane_g3_ParamLimits

0xa971,	// (0x0004566e) bg_popup_window_pane_g3

0xa97d,	// (0x0004567a) bg_popup_window_pane_g4_ParamLimits

0xa97d,	// (0x0004567a) bg_popup_window_pane_g4

0xa989,	// (0x00045686) bg_popup_window_pane_g5_ParamLimits

0xa989,	// (0x00045686) bg_popup_window_pane_g5

0xa995,	// (0x00045692) bg_popup_window_pane_g6_ParamLimits

0xa995,	// (0x00045692) bg_popup_window_pane_g6

0xa9a1,	// (0x0004569e) bg_popup_window_pane_g7_ParamLimits

0xa9a1,	// (0x0004569e) bg_popup_window_pane_g7

0xa9ad,	// (0x000456aa) bg_popup_window_pane_g8_ParamLimits

0xa9ad,	// (0x000456aa) bg_popup_window_pane_g8

0xa9b9,	// (0x000456b6) bg_popup_window_pane_g9_ParamLimits

0xa9b9,	// (0x000456b6) bg_popup_window_pane_g9

0xa9c5,	// (0x000456c2) bg_popup_window_pane_g10_ParamLimits

0xa9c5,	// (0x000456c2) bg_popup_window_pane_g10

0x0009,

0xf913,	// (0x0004a610) bg_popup_window_pane_g_ParamLimits

0xf913,	// (0x0004a610) bg_popup_window_pane_g

0xa8ee,	// (0x000455eb) bg_popup_heading_pane_ParamLimits

0xa8ee,	// (0x000455eb) bg_popup_heading_pane

0x6915,	// (0x00041612) tabs_4_passive_pane_cp_srt_ParamLimits

0x6915,	// (0x00041612) tabs_4_passive_pane_cp_srt

0x6927,	// (0x00041624) tabs_4_passive_pane_srt_ParamLimits

0xa902,	// (0x000455ff) heading_pane_g2

0x6927,	// (0x00041624) tabs_4_passive_pane_srt

0x90c6,	// (0x00043dc3) bg_passive_tab_pane_cp3_srt_ParamLimits

0x90c6,	// (0x00043dc3) bg_passive_tab_pane_cp3_srt

0xa90a,	// (0x00045607) heading_pane_t1_ParamLimits

0xa90a,	// (0x00045607) heading_pane_t1

0xa921,	// (0x0004561e) heading_pane_t2_ParamLimits

0xa921,	// (0x0004561e) heading_pane_t2

0x0001,

0xf90e,	// (0x0004a60b) heading_pane_t_ParamLimits

0xf90e,	// (0x0004a60b) heading_pane_t

0xa419,	// (0x00045116) bg_popup_heading_pane_g1

0xa4c8,	// (0x000451c5) bg_popup_heading_pane_g2

0xa4d2,	// (0x000451cf) bg_popup_heading_pane_g3

0xa4dc,	// (0x000451d9) bg_popup_heading_pane_g4

0xa4e6,	// (0x000451e3) bg_popup_heading_pane_g5

0xa4f0,	// (0x000451ed) bg_popup_heading_pane_g6

0xa4f8,	// (0x000451f5) bg_popup_heading_pane_g7

0xa500,	// (0x000451fd) bg_popup_heading_pane_g8

0xa50a,	// (0x00045207) bg_popup_heading_pane_g9

0x0008,

0xf8ca,	// (0x0004a5c7) bg_popup_heading_pane_g

0x9c02,	// (0x000448ff) bg_popup_sub_pane_g1

0x9c0a,	// (0x00044907) bg_popup_sub_pane_g2

0x9c12,	// (0x0004490f) bg_popup_sub_pane_g3

0x9c1a,	// (0x00044917) bg_popup_sub_pane_g4

0x9c22,	// (0x0004491f) bg_popup_sub_pane_g5

0x9c2a,	// (0x00044927) bg_popup_sub_pane_g6

0x9c32,	// (0x0004492f) bg_popup_sub_pane_g7

0x9c3a,	// (0x00044937) bg_popup_sub_pane_g8

0x9c42,	// (0x0004493f) bg_popup_sub_pane_g9

0x0008,

0xf8a4,	// (0x0004a5a1) bg_popup_sub_pane_g

0x7ad3,	// (0x000427d0) bg_popup_window_pane_cp5_ParamLimits

0x7ad3,	// (0x000427d0) bg_popup_window_pane_cp5

0x7aef,	// (0x000427ec) popup_note_window_g1_ParamLimits

0x7aef,	// (0x000427ec) popup_note_window_g1

0x7afb,	// (0x000427f8) popup_note_window_t1_ParamLimits

0x7afb,	// (0x000427f8) popup_note_window_t1

0x7b11,	// (0x0004280e) popup_note_window_t2_ParamLimits

0x7b11,	// (0x0004280e) popup_note_window_t2

0x7b27,	// (0x00042824) popup_note_window_t3_ParamLimits

0x7b27,	// (0x00042824) popup_note_window_t3

0x7b3d,	// (0x0004283a) popup_note_window_t4_ParamLimits

0x7b3d,	// (0x0004283a) popup_note_window_t4

0x7b65,	// (0x00042862) popup_note_window_t5_ParamLimits

0x7b65,	// (0x00042862) popup_note_window_t5

0x0004,

0xf5c3,	// (0x0004a2c0) popup_note_window_t_ParamLimits

0xf5c3,	// (0x0004a2c0) popup_note_window_t

0x7b89,	// (0x00042886) bg_popup_window_pane_cp6_ParamLimits

0x7b89,	// (0x00042886) bg_popup_window_pane_cp6

0xa395,	// (0x00045092) popup_note_image_window_g1_ParamLimits

0xa395,	// (0x00045092) popup_note_image_window_g1

0xa3a1,	// (0x0004509e) popup_note_image_window_g2_ParamLimits

0xa3a1,	// (0x0004509e) popup_note_image_window_g2

0x0001,

0xf898,	// (0x0004a595) popup_note_image_window_g_ParamLimits

0xf898,	// (0x0004a595) popup_note_image_window_g

0xa3ba,	// (0x000450b7) popup_note_image_window_t1_ParamLimits

0xa3ba,	// (0x000450b7) popup_note_image_window_t1

0xa3d3,	// (0x000450d0) popup_note_image_window_t2_ParamLimits

0xa3d3,	// (0x000450d0) popup_note_image_window_t2

0xa3ec,	// (0x000450e9) popup_note_image_window_t3_ParamLimits

0xa3ec,	// (0x000450e9) popup_note_image_window_t3

0x0002,

0xf89d,	// (0x0004a59a) popup_note_image_window_t_ParamLimits

0xf89d,	// (0x0004a59a) popup_note_image_window_t

0xa255,	// (0x00044f52) bg_popup_window_pane_cp7_ParamLimits

0xa255,	// (0x00044f52) bg_popup_window_pane_cp7

0xa285,	// (0x00044f82) popup_note_wait_window_g1_ParamLimits

0xa285,	// (0x00044f82) popup_note_wait_window_g1

0xa291,	// (0x00044f8e) popup_note_wait_window_g2_ParamLimits

0xa291,	// (0x00044f8e) popup_note_wait_window_g2

0x0002,

0xf886,	// (0x0004a583) popup_note_wait_window_g_ParamLimits

0xf886,	// (0x0004a583) popup_note_wait_window_g

0xa2a9,	// (0x00044fa6) popup_note_wait_window_t1_ParamLimits

0xa2a9,	// (0x00044fa6) popup_note_wait_window_t1

0xa2d0,	// (0x00044fcd) popup_note_wait_window_t2_ParamLimits

0xa2d0,	// (0x00044fcd) popup_note_wait_window_t2

0xa2ee,	// (0x00044feb) popup_note_wait_window_t3_ParamLimits

0xa2ee,	// (0x00044feb) popup_note_wait_window_t3

0xa301,	// (0x00044ffe) popup_note_wait_window_t4_ParamLimits

0xa301,	// (0x00044ffe) popup_note_wait_window_t4

0x0004,

0xf88d,	// (0x0004a58a) popup_note_wait_window_t_ParamLimits

0xf88d,	// (0x0004a58a) popup_note_wait_window_t

0xa326,	// (0x00045023) wait_bar_pane_ParamLimits

0xa326,	// (0x00045023) wait_bar_pane

0x7777,	// (0x00042474) wait_anim_pane

0x7777,	// (0x00042474) wait_border_pane

0x776d,	// (0x0004246a) wait_anim_pane_g1

0x776d,	// (0x0004246a) wait_anim_pane_g2

0x0001,

0xf74c,	// (0x0004a449) wait_anim_pane_g

0xa1f9,	// (0x00044ef6) wait_border_pane_g1

0xa204,	// (0x00044f01) wait_border_pane_g2

0xa20d,	// (0x00044f0a) wait_border_pane_g3

0x0002,

0xf87f,	// (0x0004a57c) wait_border_pane_g

0xa155,	// (0x00044e52) bg_popup_window_pane_cp16_ParamLimits

0xa155,	// (0x00044e52) bg_popup_window_pane_cp16

0xa163,	// (0x00044e60) indicator_popup_pane_cp4_ParamLimits

0xa163,	// (0x00044e60) indicator_popup_pane_cp4

0xa177,	// (0x00044e74) popup_query_data_window_t1_ParamLimits

0xa177,	// (0x00044e74) popup_query_data_window_t1

0xa189,	// (0x00044e86) popup_query_data_window_t2_ParamLimits

0xa189,	// (0x00044e86) popup_query_data_window_t2

0xa1a2,	// (0x00044e9f) popup_query_data_window_t3_ParamLimits

0xa1a2,	// (0x00044e9f) popup_query_data_window_t3

0x0002,

0xf878,	// (0x0004a575) popup_query_data_window_t_ParamLimits

0xf878,	// (0x0004a575) popup_query_data_window_t

0xa1bc,	// (0x00044eb9) query_popup_data_pane_ParamLimits

0xa1bc,	// (0x00044eb9) query_popup_data_pane

0xa1d0,	// (0x00044ecd) query_popup_data_pane_cp1_ParamLimits

0xa1d0,	// (0x00044ecd) query_popup_data_pane_cp1

0x7b89,	// (0x00042886) bg_popup_window_pane_cp10_ParamLimits

0x7b89,	// (0x00042886) bg_popup_window_pane_cp10

0xa0b8,	// (0x00044db5) indicator_popup_pane_ParamLimits

0xa0b8,	// (0x00044db5) indicator_popup_pane

0x7bea,	// (0x000428e7) popup_query_code_window_t1_ParamLimits

0x7bea,	// (0x000428e7) popup_query_code_window_t1

0xa0d0,	// (0x00044dcd) popup_query_code_window_t2_ParamLimits

0xa0d0,	// (0x00044dcd) popup_query_code_window_t2

0xa10e,	// (0x00044e0b) popup_query_code_window_t3_ParamLimits

0xa10e,	// (0x00044e0b) popup_query_code_window_t3

0x0002,

0xf871,	// (0x0004a56e) popup_query_code_window_t_ParamLimits

0xf871,	// (0x0004a56e) popup_query_code_window_t

0xa13d,	// (0x00044e3a) query_popup_pane_ParamLimits

0xa13d,	// (0x00044e3a) query_popup_pane

0x7b89,	// (0x00042886) bg_popup_window_pane_cp15_ParamLimits

0x7b89,	// (0x00042886) bg_popup_window_pane_cp15

0x7ba9,	// (0x000428a6) indicator_popup_pane_cp1_ParamLimits

0x7ba9,	// (0x000428a6) indicator_popup_pane_cp1

0x7bbc,	// (0x000428b9) indicator_popup_pane_cp2_ParamLimits

0x7bbc,	// (0x000428b9) indicator_popup_pane_cp2

0x7bd7,	// (0x000428d4) popup_query_data_code_window_g1_ParamLimits

0x7bd7,	// (0x000428d4) popup_query_data_code_window_g1

0x7bea,	// (0x000428e7) popup_query_data_code_window_t1_ParamLimits

0x7bea,	// (0x000428e7) popup_query_data_code_window_t1

0x7bfc,	// (0x000428f9) popup_query_data_code_window_t2_ParamLimits

0x7bfc,	// (0x000428f9) popup_query_data_code_window_t2

0x7c0e,	// (0x0004290b) popup_query_data_code_window_t3_ParamLimits

0x7c0e,	// (0x0004290b) popup_query_data_code_window_t3

0x7c24,	// (0x00042921) popup_query_data_code_window_t4_ParamLimits

0x7c24,	// (0x00042921) popup_query_data_code_window_t4

0x0003,

0xf5ce,	// (0x0004a2cb) popup_query_data_code_window_t_ParamLimits

0xf5ce,	// (0x0004a2cb) popup_query_data_code_window_t

0x8b66,	// (0x00043863) list_single_midp_graphic_pane_g3

0x7c3e,	// (0x0004293b) query_popup_data_pane_cp2_ParamLimits

0x7c51,	// (0x0004294e) query_popup_pane_cp2_ParamLimits

0x7c51,	// (0x0004294e) query_popup_pane_cp2

0x7777,	// (0x00042474) bg_popup_window_pane_cp11

0xa08c,	// (0x00044d89) heading_pane_cp5

0x7d41,	// (0x00042a3e) listscroll_popup_info_pane

0x7777,	// (0x00042474) input_focus_pane_cp3

0x7c6c,	// (0x00042969) query_popup_pane_t1

0x7c7a,	// (0x00042977) list_popup_info_pane_ParamLimits

0x7c7a,	// (0x00042977) list_popup_info_pane

0x7c89,	// (0x00042986) listscroll_popup_info_pane_g1

0x7c91,	// (0x0004298e) scroll_pane_cp7

0x7c9b,	// (0x00042998) popup_info_list_pane_t1_ParamLimits

0x7c9b,	// (0x00042998) popup_info_list_pane_t1

0x7cb5,	// (0x000429b2) popup_info_list_pane_t2_ParamLimits

0x7cb5,	// (0x000429b2) popup_info_list_pane_t2

0x0001,

0xf5d7,	// (0x0004a2d4) popup_info_list_pane_t_ParamLimits

0xf5d7,	// (0x0004a2d4) popup_info_list_pane_t

0x7777,	// (0x00042474) bg_popup_window_pane_cp12

0xb448,	// (0x00046145) find_popup_pane

0x7857,	// (0x00042554) bg_popup_window_pane_cp3

0x7ccf,	// (0x000429cc) heading_pane_cp3

0x7cdb,	// (0x000429d8) listscroll_popup_graphic_pane

0x7777,	// (0x00042474) bg_popup_window_pane_cp4

0x7d37,	// (0x00042a34) heading_pane_cp4

0x7d41,	// (0x00042a3e) listscroll_popup_colour_pane

0x7d49,	// (0x00042a46) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x7d49,	// (0x00042a46) cell_large_graphic_colour_none_popup_pane

0x7d5d,	// (0x00042a5a) grid_large_graphic_colour_popup_pane_ParamLimits

0x7d5d,	// (0x00042a5a) grid_large_graphic_colour_popup_pane

0x7d89,	// (0x00042a86) listscroll_popup_colour_pane_g1_ParamLimits

0x7d89,	// (0x00042a86) listscroll_popup_colour_pane_g1

0x7da0,	// (0x00042a9d) listscroll_popup_colour_pane_g2_ParamLimits

0x7da0,	// (0x00042a9d) listscroll_popup_colour_pane_g2

0x7db7,	// (0x00042ab4) listscroll_popup_colour_pane_g3_ParamLimits

0x7db7,	// (0x00042ab4) listscroll_popup_colour_pane_g3

0x7dc7,	// (0x00042ac4) listscroll_popup_colour_pane_g4_ParamLimits

0x7dc7,	// (0x00042ac4) listscroll_popup_colour_pane_g4

0x0003,

0xf5dc,	// (0x0004a2d9) listscroll_popup_colour_pane_g_ParamLimits

0xf5dc,	// (0x0004a2d9) listscroll_popup_colour_pane_g

0x7ddb,	// (0x00042ad8) scroll_pane_cp6_ParamLimits

0x7ddb,	// (0x00042ad8) scroll_pane_cp6

0x7ded,	// (0x00042aea) cell_large_graphic_colour_popup_pane_ParamLimits

0x7ded,	// (0x00042aea) cell_large_graphic_colour_popup_pane

0x7e12,	// (0x00042b0f) cell_large_graphic_colour_none_popup_pane_t1

0x7777,	// (0x00042474) grid_highlight_pane_cp5

0x7e21,	// (0x00042b1e) cell_large_graphic_colour_popup_pane_g1

0x7e29,	// (0x00042b26) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5e5,	// (0x0004a2e2) cell_large_graphic_colour_popup_pane_g

0x7e31,	// (0x00042b2e) cell_large_graphic_colour_popup_pane_g2_copy1

0x7e3a,	// (0x00042b37) grid_highlight_pane_cp4

0x7e42,	// (0x00042b3f) bg_popup_window_pane_cp8_ParamLimits

0x7e42,	// (0x00042b3f) bg_popup_window_pane_cp8

0x7e5d,	// (0x00042b5a) popup_snote_single_text_window_g1_ParamLimits

0x7e5d,	// (0x00042b5a) popup_snote_single_text_window_g1

0x7e6f,	// (0x00042b6c) popup_snote_single_text_window_t1_ParamLimits

0x7e6f,	// (0x00042b6c) popup_snote_single_text_window_t1

0x7e82,	// (0x00042b7f) popup_snote_single_text_window_t2_ParamLimits

0x7e82,	// (0x00042b7f) popup_snote_single_text_window_t2

0x7e95,	// (0x00042b92) popup_snote_single_text_window_t3_ParamLimits

0x7e95,	// (0x00042b92) popup_snote_single_text_window_t3

0x7ece,	// (0x00042bcb) popup_snote_single_text_window_t4_ParamLimits

0x7ece,	// (0x00042bcb) popup_snote_single_text_window_t4

0x7f02,	// (0x00042bff) popup_snote_single_text_window_t5_ParamLimits

0x7f02,	// (0x00042bff) popup_snote_single_text_window_t5

0x0004,

0xf5ea,	// (0x0004a2e7) popup_snote_single_text_window_t_ParamLimits

0xf5ea,	// (0x0004a2e7) popup_snote_single_text_window_t

0x7f31,	// (0x00042c2e) bg_popup_window_pane_cp9_ParamLimits

0x7f31,	// (0x00042c2e) bg_popup_window_pane_cp9

0x7e5d,	// (0x00042b5a) popup_snote_single_graphic_window_g1_ParamLimits

0x7e5d,	// (0x00042b5a) popup_snote_single_graphic_window_g1

0x7f3f,	// (0x00042c3c) popup_snote_single_graphic_window_g2_ParamLimits

0x7f3f,	// (0x00042c3c) popup_snote_single_graphic_window_g2

0x0001,

0xf5f5,	// (0x0004a2f2) popup_snote_single_graphic_window_g_ParamLimits

0xf5f5,	// (0x0004a2f2) popup_snote_single_graphic_window_g

0x7f4b,	// (0x00042c48) popup_snote_single_graphic_window_t1_ParamLimits

0x7f4b,	// (0x00042c48) popup_snote_single_graphic_window_t1

0x7f5e,	// (0x00042c5b) popup_snote_single_graphic_window_t2_ParamLimits

0x7f5e,	// (0x00042c5b) popup_snote_single_graphic_window_t2

0x7f71,	// (0x00042c6e) popup_snote_single_graphic_window_t3_ParamLimits

0x7f71,	// (0x00042c6e) popup_snote_single_graphic_window_t3

0x7faa,	// (0x00042ca7) popup_snote_single_graphic_window_t4_ParamLimits

0x7faa,	// (0x00042ca7) popup_snote_single_graphic_window_t4

0x7fde,	// (0x00042cdb) popup_snote_single_graphic_window_t5_ParamLimits

0x7fde,	// (0x00042cdb) popup_snote_single_graphic_window_t5

0x0004,

0xf5fa,	// (0x0004a2f7) popup_snote_single_graphic_window_t_ParamLimits

0xf5fa,	// (0x0004a2f7) popup_snote_single_graphic_window_t

0xb386,	// (0x00046083) grid_graphic_popup_pane_ParamLimits

0xb386,	// (0x00046083) grid_graphic_popup_pane

0xb3b4,	// (0x000460b1) listscroll_popup_graphic_pane_g1_ParamLimits

0xb3b4,	// (0x000460b1) listscroll_popup_graphic_pane_g1

0xb3c8,	// (0x000460c5) listscroll_popup_graphic_pane_g2_ParamLimits

0xb3c8,	// (0x000460c5) listscroll_popup_graphic_pane_g2

0x0001,

0xf9ee,	// (0x0004a6eb) listscroll_popup_graphic_pane_g_ParamLimits

0xf9ee,	// (0x0004a6eb) listscroll_popup_graphic_pane_g

0xb3dc,	// (0x000460d9) scroll_pane_cp5

0xb32e,	// (0x0004602b) cell_graphic_popup_pane_ParamLimits

0xb32e,	// (0x0004602b) cell_graphic_popup_pane

0xb30f,	// (0x0004600c) cell_graphic_popup_pane_g1

0xb317,	// (0x00046014) cell_graphic_popup_pane_g2

0x7e31,	// (0x00042b2e) cell_graphic_popup_pane_g3

0x0002,

0xf9e7,	// (0x0004a6e4) cell_graphic_popup_pane_g

0xb320,	// (0x0004601d) cell_graphic_popup_pane_t2

0x7e3a,	// (0x00042b37) grid_highlight_pane_cp3

0x801f,	// (0x00042d1c) list_gen_pane_ParamLimits

0x801f,	// (0x00042d1c) list_gen_pane

0x8051,	// (0x00042d4e) scroll_pane

0xb271,	// (0x00045f6e) bg_list_pane_g1_ParamLimits

0xb271,	// (0x00045f6e) bg_list_pane_g1

0xb28c,	// (0x00045f89) bg_list_pane_g2_ParamLimits

0xb28c,	// (0x00045f89) bg_list_pane_g2

0xb29f,	// (0x00045f9c) bg_list_pane_g3_ParamLimits

0xb29f,	// (0x00045f9c) bg_list_pane_g3

0xb2b1,	// (0x00045fae) bg_list_pane_g4_ParamLimits

0xb2b1,	// (0x00045fae) bg_list_pane_g4

0xb2c3,	// (0x00045fc0) bg_list_pane_g5_ParamLimits

0xb2c3,	// (0x00045fc0) bg_list_pane_g5

0x0004,

0xf9dc,	// (0x0004a6d9) bg_list_pane_g_ParamLimits

0xf9dc,	// (0x0004a6d9) bg_list_pane_g

0xb1ee,	// (0x00045eeb) list_double2_graphic_large_graphic_pane_ParamLimits

0xb1ee,	// (0x00045eeb) list_double2_graphic_large_graphic_pane

0xb1ee,	// (0x00045eeb) list_double2_graphic_pane_ParamLimits

0xb1ee,	// (0x00045eeb) list_double2_graphic_pane

0xb1ee,	// (0x00045eeb) list_double2_large_graphic_pane_ParamLimits

0xb1ee,	// (0x00045eeb) list_double2_large_graphic_pane

0xb1ee,	// (0x00045eeb) list_double2_pane_ParamLimits

0xb1ee,	// (0x00045eeb) list_double2_pane

0xb1ee,	// (0x00045eeb) list_double_graphic_heading_pane_ParamLimits

0xb1ee,	// (0x00045eeb) list_double_graphic_heading_pane

0xb1ee,	// (0x00045eeb) list_double_graphic_pane_ParamLimits

0xb1ee,	// (0x00045eeb) list_double_graphic_pane

0xb1ee,	// (0x00045eeb) list_double_heading_pane_ParamLimits

0xb1ee,	// (0x00045eeb) list_double_heading_pane

0xb1ee,	// (0x00045eeb) list_double_large_graphic_pane_ParamLimits

0xb1ee,	// (0x00045eeb) list_double_large_graphic_pane

0xb1ee,	// (0x00045eeb) list_double_number_pane_ParamLimits

0xb1ee,	// (0x00045eeb) list_double_number_pane

0xb1ee,	// (0x00045eeb) list_double_pane_ParamLimits

0xb1ee,	// (0x00045eeb) list_double_pane

0xb1ee,	// (0x00045eeb) list_double_time_pane_ParamLimits

0xb1ee,	// (0x00045eeb) list_double_time_pane

0xb1ee,	// (0x00045eeb) list_setting_number_pane_ParamLimits

0xb1ee,	// (0x00045eeb) list_setting_number_pane

0xb1ee,	// (0x00045eeb) list_setting_pane_ParamLimits

0xb1ee,	// (0x00045eeb) list_setting_pane

0xb22d,	// (0x00045f2a) list_single_2graphic_pane_ParamLimits

0xb22d,	// (0x00045f2a) list_single_2graphic_pane

0xb22d,	// (0x00045f2a) list_single_graphic_heading_pane_ParamLimits

0xb22d,	// (0x00045f2a) list_single_graphic_heading_pane

0xb22d,	// (0x00045f2a) list_single_graphic_pane_ParamLimits

0xb22d,	// (0x00045f2a) list_single_graphic_pane

0xb22d,	// (0x00045f2a) list_single_heading_pane_ParamLimits

0xb22d,	// (0x00045f2a) list_single_heading_pane

0x68d9,	// (0x000415d6) list_single_large_graphic_pane_ParamLimits

0x68d9,	// (0x000415d6) list_single_large_graphic_pane

0xb22d,	// (0x00045f2a) list_single_number_heading_pane_ParamLimits

0xb22d,	// (0x00045f2a) list_single_number_heading_pane

0xb22d,	// (0x00045f2a) list_single_number_pane_ParamLimits

0xb22d,	// (0x00045f2a) list_single_number_pane

0xb22d,	// (0x00045f2a) list_single_pane_ParamLimits

0xb22d,	// (0x00045f2a) list_single_pane

0x7777,	// (0x00042474) list_highlight_pane_cp1

0x9078,	// (0x00043d75) list_single_pane_g1_ParamLimits

0x9078,	// (0x00043d75) list_single_pane_g1

0x5ed9,	// (0x00040bd6) list_single_pane_g2_ParamLimits

0x5ed9,	// (0x00040bd6) list_single_pane_g2

0x0001,

0xf616,	// (0x0004a313) list_single_pane_g_ParamLimits

0xf616,	// (0x0004a313) list_single_pane_g

0x55c2,	// (0x000402bf) list_single_pane_t1_ParamLimits

0x55c2,	// (0x000402bf) list_single_pane_t1

0x9078,	// (0x00043d75) list_single_number_pane_g1_ParamLimits

0x9078,	// (0x00043d75) list_single_number_pane_g1

0x5ed9,	// (0x00040bd6) list_single_number_pane_g2_ParamLimits

0x5ed9,	// (0x00040bd6) list_single_number_pane_g2

0x0001,

0xf616,	// (0x0004a313) list_single_number_pane_g_ParamLimits

0xf616,	// (0x0004a313) list_single_number_pane_g

0x5564,	// (0x00040261) list_single_number_pane_t1_ParamLimits

0x5564,	// (0x00040261) list_single_number_pane_t1

0x557a,	// (0x00040277) list_single_number_pane_t2_ParamLimits

0x557a,	// (0x00040277) list_single_number_pane_t2

0x0001,

0xf99d,	// (0x0004a69a) list_single_number_pane_t_ParamLimits

0xf99d,	// (0x0004a69a) list_single_number_pane_t

0x4cf2,	// (0x0003f9ef) list_single_graphic_pane_g1_ParamLimits

0x4cf2,	// (0x0003f9ef) list_single_graphic_pane_g1

0x9078,	// (0x00043d75) list_single_graphic_pane_g2_ParamLimits

0x9078,	// (0x00043d75) list_single_graphic_pane_g2

0x5ed9,	// (0x00040bd6) list_single_graphic_pane_g3_ParamLimits

0x5ed9,	// (0x00040bd6) list_single_graphic_pane_g3

0x0002,

0xf605,	// (0x0004a302) list_single_graphic_pane_g_ParamLimits

0xf605,	// (0x0004a302) list_single_graphic_pane_g

0x4cfe,	// (0x0003f9fb) list_single_graphic_pane_t1_ParamLimits

0x4cfe,	// (0x0003f9fb) list_single_graphic_pane_t1

0x4d14,	// (0x0003fa11) list_single_heading_pane_g1_ParamLimits

0x4d14,	// (0x0003fa11) list_single_heading_pane_g1

0x5ed9,	// (0x00040bd6) list_single_heading_pane_g2_ParamLimits

0x5ed9,	// (0x00040bd6) list_single_heading_pane_g2

0x0001,

0xf60c,	// (0x0004a309) list_single_heading_pane_g_ParamLimits

0xf60c,	// (0x0004a309) list_single_heading_pane_g

0x4d27,	// (0x0003fa24) list_single_heading_pane_t1_ParamLimits

0x4d27,	// (0x0003fa24) list_single_heading_pane_t1

0x5ee5,	// (0x00040be2) list_single_heading_pane_t2_ParamLimits

0x5ee5,	// (0x00040be2) list_single_heading_pane_t2

0x0001,

0xf611,	// (0x0004a30e) list_single_heading_pane_t_ParamLimits

0xf611,	// (0x0004a30e) list_single_heading_pane_t

0x9078,	// (0x00043d75) list_single_number_heading_pane_g1_ParamLimits

0x9078,	// (0x00043d75) list_single_number_heading_pane_g1

0x5ed9,	// (0x00040bd6) list_single_number_heading_pane_g2_ParamLimits

0x5ed9,	// (0x00040bd6) list_single_number_heading_pane_g2

0x0001,

0xf616,	// (0x0004a313) list_single_number_heading_pane_g_ParamLimits

0xf616,	// (0x0004a313) list_single_number_heading_pane_g

0x4d3d,	// (0x0003fa3a) list_single_number_heading_pane_t1_ParamLimits

0x4d3d,	// (0x0003fa3a) list_single_number_heading_pane_t1

0x4d53,	// (0x0003fa50) list_single_number_heading_pane_t2_ParamLimits

0x4d53,	// (0x0003fa50) list_single_number_heading_pane_t2

0x4d65,	// (0x0003fa62) list_single_number_heading_pane_t3_ParamLimits

0x4d65,	// (0x0003fa62) list_single_number_heading_pane_t3

0x0002,

0xf61b,	// (0x0004a318) list_single_number_heading_pane_t_ParamLimits

0xf61b,	// (0x0004a318) list_single_number_heading_pane_t

0x4d77,	// (0x0003fa74) list_single_graphic_heading_pane_g1_ParamLimits

0x4d77,	// (0x0003fa74) list_single_graphic_heading_pane_g1

0x5ef7,	// (0x00040bf4) list_single_graphic_heading_pane_g4_ParamLimits

0x5ef7,	// (0x00040bf4) list_single_graphic_heading_pane_g4

0x5ed9,	// (0x00040bd6) list_single_graphic_heading_pane_g5_ParamLimits

0x5ed9,	// (0x00040bd6) list_single_graphic_heading_pane_g5

0x0002,

0xf622,	// (0x0004a31f) list_single_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x0004a31f) list_single_graphic_heading_pane_g

0x4d3d,	// (0x0003fa3a) list_single_graphic_heading_pane_t1_ParamLimits

0x4d3d,	// (0x0003fa3a) list_single_graphic_heading_pane_t1

0x4d8f,	// (0x0003fa8c) list_single_graphic_heading_pane_t2_ParamLimits

0x4d8f,	// (0x0003fa8c) list_single_graphic_heading_pane_t2

0x0001,

0xf629,	// (0x0004a326) list_single_graphic_heading_pane_t_ParamLimits

0xf629,	// (0x0004a326) list_single_graphic_heading_pane_t

0x5f08,	// (0x00040c05) list_single_large_graphic_pane_g1_ParamLimits

0x5f08,	// (0x00040c05) list_single_large_graphic_pane_g1

0x5f14,	// (0x00040c11) list_single_large_graphic_pane_g2_ParamLimits

0x5f14,	// (0x00040c11) list_single_large_graphic_pane_g2

0x5f20,	// (0x00040c1d) list_single_large_graphic_pane_g3_ParamLimits

0x5f20,	// (0x00040c1d) list_single_large_graphic_pane_g3

0x0002,

0xf62e,	// (0x0004a32b) list_single_large_graphic_pane_g_ParamLimits

0xf62e,	// (0x0004a32b) list_single_large_graphic_pane_g

0xa204,	// (0x00044f01) wait_border_pane_g2_copy1

0x5f2c,	// (0x00040c29) list_single_large_graphic_pane_g4_cp2

0x4da7,	// (0x0003faa4) list_single_large_graphic_pane_t1_ParamLimits

0x4da7,	// (0x0003faa4) list_single_large_graphic_pane_t1

0x5f34,	// (0x00040c31) list_double_pane_g1_ParamLimits

0x5f34,	// (0x00040c31) list_double_pane_g1

0x5f40,	// (0x00040c3d) list_double_pane_g2_ParamLimits

0x5f40,	// (0x00040c3d) list_double_pane_g2

0x0001,

0xf635,	// (0x0004a332) list_double_pane_g_ParamLimits

0xf635,	// (0x0004a332) list_double_pane_g

0x4dbd,	// (0x0003faba) list_double_pane_t1_ParamLimits

0x4dbd,	// (0x0003faba) list_double_pane_t1

0x4dd3,	// (0x0003fad0) list_double_pane_t2_ParamLimits

0x4dd3,	// (0x0003fad0) list_double_pane_t2

0x0001,

0xf63a,	// (0x0004a337) list_double_pane_t_ParamLimits

0xf63a,	// (0x0004a337) list_double_pane_t

0x4de5,	// (0x0003fae2) list_double2_pane_g1_ParamLimits

0x4de5,	// (0x0003fae2) list_double2_pane_g1

0x4df6,	// (0x0003faf3) list_double2_pane_g2_ParamLimits

0x4df6,	// (0x0003faf3) list_double2_pane_g2

0x0001,

0xf63f,	// (0x0004a33c) list_double2_pane_g_ParamLimits

0xf63f,	// (0x0004a33c) list_double2_pane_g

0x4e02,	// (0x0003faff) list_double2_pane_t1_ParamLimits

0x4e02,	// (0x0003faff) list_double2_pane_t1

0x4e18,	// (0x0003fb15) list_double2_pane_t2_ParamLimits

0x4e18,	// (0x0003fb15) list_double2_pane_t2

0x0001,

0xf644,	// (0x0004a341) list_double2_pane_t_ParamLimits

0xf644,	// (0x0004a341) list_double2_pane_t

0x5f34,	// (0x00040c31) list_double_number_pane_g1_ParamLimits

0x5f34,	// (0x00040c31) list_double_number_pane_g1

0x5f40,	// (0x00040c3d) list_double_number_pane_g2_ParamLimits

0x5f40,	// (0x00040c3d) list_double_number_pane_g2

0x0001,

0xf635,	// (0x0004a332) list_double_number_pane_g_ParamLimits

0xf635,	// (0x0004a332) list_double_number_pane_g

0x4e2a,	// (0x0003fb27) list_double_number_pane_t1_ParamLimits

0x4e2a,	// (0x0003fb27) list_double_number_pane_t1

0x4e3c,	// (0x0003fb39) list_double_number_pane_t2_ParamLimits

0x4e3c,	// (0x0003fb39) list_double_number_pane_t2

0x4e52,	// (0x0003fb4f) list_double_number_pane_t3_ParamLimits

0x4e52,	// (0x0003fb4f) list_double_number_pane_t3

0x0002,

0xf649,	// (0x0004a346) list_double_number_pane_t_ParamLimits

0xf649,	// (0x0004a346) list_double_number_pane_t

0x4e64,	// (0x0003fb61) list_double_graphic_pane_g1_ParamLimits

0x4e64,	// (0x0003fb61) list_double_graphic_pane_g1

0x4e70,	// (0x0003fb6d) list_double_graphic_pane_g2_ParamLimits

0x4e70,	// (0x0003fb6d) list_double_graphic_pane_g2

0x4e7f,	// (0x0003fb7c) list_double_graphic_pane_g3_ParamLimits

0x4e7f,	// (0x0003fb7c) list_double_graphic_pane_g3

0x0003,

0xf650,	// (0x0004a34d) list_double_graphic_pane_g_ParamLimits

0xf650,	// (0x0004a34d) list_double_graphic_pane_g

0x4e97,	// (0x0003fb94) list_double_graphic_pane_t1_ParamLimits

0x4e97,	// (0x0003fb94) list_double_graphic_pane_t1

0x4ead,	// (0x0003fbaa) list_double_graphic_pane_t2_ParamLimits

0x4ead,	// (0x0003fbaa) list_double_graphic_pane_t2

0x0001,

0xf659,	// (0x0004a356) list_double_graphic_pane_t_ParamLimits

0xf659,	// (0x0004a356) list_double_graphic_pane_t

0x4ebf,	// (0x0003fbbc) list_double2_graphic_pane_g1_ParamLimits

0x4ebf,	// (0x0003fbbc) list_double2_graphic_pane_g1

0x5f4c,	// (0x00040c49) list_double2_graphic_pane_g2_ParamLimits

0x5f4c,	// (0x00040c49) list_double2_graphic_pane_g2

0x4ecb,	// (0x0003fbc8) list_double2_graphic_pane_g3_ParamLimits

0x4ecb,	// (0x0003fbc8) list_double2_graphic_pane_g3

0x0002,

0xf65e,	// (0x0004a35b) list_double2_graphic_pane_g_ParamLimits

0xf65e,	// (0x0004a35b) list_double2_graphic_pane_g

0x4ed7,	// (0x0003fbd4) list_double2_graphic_pane_t1_ParamLimits

0x4ed7,	// (0x0003fbd4) list_double2_graphic_pane_t1

0x4eed,	// (0x0003fbea) list_double2_graphic_pane_t2_ParamLimits

0x4eed,	// (0x0003fbea) list_double2_graphic_pane_t2

0x0001,

0xf665,	// (0x0004a362) list_double2_graphic_pane_t_ParamLimits

0xf665,	// (0x0004a362) list_double2_graphic_pane_t

0x4eff,	// (0x0003fbfc) list_double_large_graphic_pane_g1_ParamLimits

0x4eff,	// (0x0003fbfc) list_double_large_graphic_pane_g1

0x4f2a,	// (0x0003fc27) list_double_large_graphic_pane_g2_ParamLimits

0x4f2a,	// (0x0003fc27) list_double_large_graphic_pane_g2

0x5f40,	// (0x00040c3d) list_double_large_graphic_pane_g3_ParamLimits

0x5f40,	// (0x00040c3d) list_double_large_graphic_pane_g3

0x4f40,	// (0x0003fc3d) list_double_large_graphic_pane_g4_ParamLimits

0x4f40,	// (0x0003fc3d) list_double_large_graphic_pane_g4

0x0004,

0xf66a,	// (0x0004a367) list_double_large_graphic_pane_g_ParamLimits

0xf66a,	// (0x0004a367) list_double_large_graphic_pane_g

0x4f53,	// (0x0003fc50) list_double_large_graphic_pane_t1_ParamLimits

0x4f53,	// (0x0003fc50) list_double_large_graphic_pane_t1

0x4f6c,	// (0x0003fc69) list_double_large_graphic_pane_t2_ParamLimits

0x4f6c,	// (0x0003fc69) list_double_large_graphic_pane_t2

0x0001,

0xf675,	// (0x0004a372) list_double_large_graphic_pane_t_ParamLimits

0xf675,	// (0x0004a372) list_double_large_graphic_pane_t

0x5f6d,	// (0x00040c6a) list_double2_large_graphic_pane_g1_ParamLimits

0x5f6d,	// (0x00040c6a) list_double2_large_graphic_pane_g1

0x4f7e,	// (0x0003fc7b) list_double2_large_graphic_pane_g2_ParamLimits

0x4f7e,	// (0x0003fc7b) list_double2_large_graphic_pane_g2

0x4ecb,	// (0x0003fbc8) list_double2_large_graphic_pane_g3_ParamLimits

0x4ecb,	// (0x0003fbc8) list_double2_large_graphic_pane_g3

0x0002,

0xf67a,	// (0x0004a377) list_double2_large_graphic_pane_g_ParamLimits

0xf67a,	// (0x0004a377) list_double2_large_graphic_pane_g

0x4f8f,	// (0x0003fc8c) list_double2_large_graphic_pane_t1_ParamLimits

0x4f8f,	// (0x0003fc8c) list_double2_large_graphic_pane_t1

0x4fa5,	// (0x0003fca2) list_double2_large_graphic_pane_t2_ParamLimits

0x4fa5,	// (0x0003fca2) list_double2_large_graphic_pane_t2

0x0001,

0xf681,	// (0x0004a37e) list_double2_large_graphic_pane_t_ParamLimits

0xf681,	// (0x0004a37e) list_double2_large_graphic_pane_t

0x4fb7,	// (0x0003fcb4) list_double_heading_pane_g1_ParamLimits

0x4fb7,	// (0x0003fcb4) list_double_heading_pane_g1

0x4fc8,	// (0x0003fcc5) list_double_heading_pane_g2_ParamLimits

0x4fc8,	// (0x0003fcc5) list_double_heading_pane_g2

0x0001,

0xf686,	// (0x0004a383) list_double_heading_pane_g_ParamLimits

0xf686,	// (0x0004a383) list_double_heading_pane_g

0x4fd4,	// (0x0003fcd1) list_double_heading_pane_t1_ParamLimits

0x4fd4,	// (0x0003fcd1) list_double_heading_pane_t1

0x4fea,	// (0x0003fce7) list_double_heading_pane_t2_ParamLimits

0x4fea,	// (0x0003fce7) list_double_heading_pane_t2

0x0001,

0xf68b,	// (0x0004a388) list_double_heading_pane_t_ParamLimits

0xf68b,	// (0x0004a388) list_double_heading_pane_t

0x4ffc,	// (0x0003fcf9) list_double_graphic_heading_pane_g1_ParamLimits

0x4ffc,	// (0x0003fcf9) list_double_graphic_heading_pane_g1

0x4fb7,	// (0x0003fcb4) list_double_graphic_heading_pane_g2_ParamLimits

0x4fb7,	// (0x0003fcb4) list_double_graphic_heading_pane_g2

0x4fc8,	// (0x0003fcc5) list_double_graphic_heading_pane_g3_ParamLimits

0x4fc8,	// (0x0003fcc5) list_double_graphic_heading_pane_g3

0x0002,

0xf690,	// (0x0004a38d) list_double_graphic_heading_pane_g_ParamLimits

0xf690,	// (0x0004a38d) list_double_graphic_heading_pane_g

0x5008,	// (0x0003fd05) list_double_graphic_heading_pane_t1_ParamLimits

0x5008,	// (0x0003fd05) list_double_graphic_heading_pane_t1

0x501e,	// (0x0003fd1b) list_double_graphic_heading_pane_t2_ParamLimits

0x501e,	// (0x0003fd1b) list_double_graphic_heading_pane_t2

0x0001,

0xf697,	// (0x0004a394) list_double_graphic_heading_pane_t_ParamLimits

0xf697,	// (0x0004a394) list_double_graphic_heading_pane_t

0x5030,	// (0x0003fd2d) list_double_time_pane_g1_ParamLimits

0x5030,	// (0x0003fd2d) list_double_time_pane_g1

0x5041,	// (0x0003fd3e) list_double_time_pane_g2_ParamLimits

0x5041,	// (0x0003fd3e) list_double_time_pane_g2

0x0001,

0xf69c,	// (0x0004a399) list_double_time_pane_g_ParamLimits

0xf69c,	// (0x0004a399) list_double_time_pane_g

0x504d,	// (0x0003fd4a) list_double_time_pane_t1_ParamLimits

0x504d,	// (0x0003fd4a) list_double_time_pane_t1

0x5063,	// (0x0003fd60) list_double_time_pane_t2_ParamLimits

0x5063,	// (0x0003fd60) list_double_time_pane_t2

0x5075,	// (0x0003fd72) list_double_time_pane_t3_ParamLimits

0x5075,	// (0x0003fd72) list_double_time_pane_t3

0x5087,	// (0x0003fd84) list_double_time_pane_t4_ParamLimits

0x5087,	// (0x0003fd84) list_double_time_pane_t4

0x0003,

0xf6a1,	// (0x0004a39e) list_double_time_pane_t_ParamLimits

0xf6a1,	// (0x0004a39e) list_double_time_pane_t

0x5099,	// (0x0003fd96) list_setting_pane_g1_ParamLimits

0x5099,	// (0x0003fd96) list_setting_pane_g1

0x50a5,	// (0x0003fda2) list_setting_pane_g2_ParamLimits

0x50a5,	// (0x0003fda2) list_setting_pane_g2

0x0001,

0xf6aa,	// (0x0004a3a7) list_setting_pane_g_ParamLimits

0xf6aa,	// (0x0004a3a7) list_setting_pane_g

0x50b1,	// (0x0003fdae) list_setting_pane_t1_ParamLimits

0x50b1,	// (0x0003fdae) list_setting_pane_t1

0x50cb,	// (0x0003fdc8) list_setting_pane_t2_ParamLimits

0x50cb,	// (0x0003fdc8) list_setting_pane_t2

0x0002,

0xf6af,	// (0x0004a3ac) list_setting_pane_t_ParamLimits

0xf6af,	// (0x0004a3ac) list_setting_pane_t

0x510a,	// (0x0003fe07) set_value_pane_cp_ParamLimits

0x510a,	// (0x0003fe07) set_value_pane_cp

0x5118,	// (0x0003fe15) list_setting_number_pane_g1_ParamLimits

0x5118,	// (0x0003fe15) list_setting_number_pane_g1

0x5124,	// (0x0003fe21) list_setting_number_pane_g2_ParamLimits

0x5124,	// (0x0003fe21) list_setting_number_pane_g2

0x0001,

0xf6b6,	// (0x0004a3b3) list_setting_number_pane_g_ParamLimits

0xf6b6,	// (0x0004a3b3) list_setting_number_pane_g

0x5130,	// (0x0003fe2d) list_setting_number_pane_t1_ParamLimits

0x5130,	// (0x0003fe2d) list_setting_number_pane_t1

0x5149,	// (0x0003fe46) list_setting_number_pane_t2_ParamLimits

0x5149,	// (0x0003fe46) list_setting_number_pane_t2

0x5163,	// (0x0003fe60) list_setting_number_pane_t3_ParamLimits

0x5163,	// (0x0003fe60) list_setting_number_pane_t3

0x0003,

0xf6bb,	// (0x0004a3b8) list_setting_number_pane_t_ParamLimits

0xf6bb,	// (0x0004a3b8) list_setting_number_pane_t

0x510a,	// (0x0003fe07) set_value_pane_ParamLimits

0x510a,	// (0x0003fe07) set_value_pane

0x8085,	// (0x00042d82) bg_set_opt_pane_ParamLimits

0x8085,	// (0x00042d82) bg_set_opt_pane

0x51a6,	// (0x0003fea3) set_value_pane_t1

0x80a6,	// (0x00042da3) slider_set_pane_cp3

0x80af,	// (0x00042dac) volume_small_pane_cp

0x80b8,	// (0x00042db5) list_form_gen_pane

0x80c1,	// (0x00042dbe) scroll_pane_cp8

0x51bc,	// (0x0003feb9) form_field_data_pane_ParamLimits

0x51bc,	// (0x0003feb9) form_field_data_pane

0x51e4,	// (0x0003fee1) form_field_data_wide_pane_ParamLimits

0x51e4,	// (0x0003fee1) form_field_data_wide_pane

0x520b,	// (0x0003ff08) form_field_popup_pane_ParamLimits

0x520b,	// (0x0003ff08) form_field_popup_pane

0x522d,	// (0x0003ff2a) form_field_popup_wide_pane_ParamLimits

0x522d,	// (0x0003ff2a) form_field_popup_wide_pane

0x524e,	// (0x0003ff4b) form_field_slider_pane_ParamLimits

0x524e,	// (0x0003ff4b) form_field_slider_pane

0x5261,	// (0x0003ff5e) form_field_slider_wide_pane_ParamLimits

0x5261,	// (0x0003ff5e) form_field_slider_wide_pane

0x80d2,	// (0x00042dcf) data_form_pane

0x527e,	// (0x0003ff7b) form_field_data_pane_t1

0x80de,	// (0x00042ddb) input_focus_pane

0x80ec,	// (0x00042de9) data_form_wide_pane

0x52a4,	// (0x0003ffa1) form_field_data_wide_pane_t1

0x7e4f,	// (0x00042b4c) input_focus_pane_cp6

0x52c6,	// (0x0003ffc3) form_field_popup_pane_t1

0x80de,	// (0x00042ddb) input_focus_pane_cp7

0x8118,	// (0x00042e15) list_form_pane

0x52e8,	// (0x0003ffe5) form_field_popup_wide_pane_t1

0x80de,	// (0x00042ddb) input_focus_pane_cp8

0x8124,	// (0x00042e21) list_form_wide_pane

0x5305,	// (0x00040002) form_field_slider_pane_t1_ParamLimits

0x5305,	// (0x00040002) form_field_slider_pane_t1

0x531d,	// (0x0004001a) form_field_slider_pane_t2_ParamLimits

0x531d,	// (0x0004001a) form_field_slider_pane_t2

0x0001,

0xf6cb,	// (0x0004a3c8) form_field_slider_pane_t_ParamLimits

0xf6cb,	// (0x0004a3c8) form_field_slider_pane_t

0x7ad3,	// (0x000427d0) input_focus_pane_cp9_ParamLimits

0x7ad3,	// (0x000427d0) input_focus_pane_cp9

0x5332,	// (0x0004002f) slider_cont_pane_ParamLimits

0x5332,	// (0x0004002f) slider_cont_pane

0x8133,	// (0x00042e30) form_field_slider_wide_pane_t1_ParamLimits

0x8133,	// (0x00042e30) form_field_slider_wide_pane_t1

0x5346,	// (0x00040043) form_field_slider_wide_pane_t2_ParamLimits

0x5346,	// (0x00040043) form_field_slider_wide_pane_t2

0x0001,

0xf6d0,	// (0x0004a3cd) form_field_slider_wide_pane_t_ParamLimits

0xf6d0,	// (0x0004a3cd) form_field_slider_wide_pane_t

0x7ad3,	// (0x000427d0) input_focus_pane_cp10_ParamLimits

0x7ad3,	// (0x000427d0) input_focus_pane_cp10

0x5358,	// (0x00040055) slider_cont_pane_cp1_ParamLimits

0x5358,	// (0x00040055) slider_cont_pane_cp1

0x536c,	// (0x00040069) slider_form_pane_cp

0x8145,	// (0x00042e42) input_focus_pane_g1

0x814d,	// (0x00042e4a) input_focus_pane_g2

0x8155,	// (0x00042e52) input_focus_pane_g3

0x815d,	// (0x00042e5a) input_focus_pane_g4

0x8165,	// (0x00042e62) input_focus_pane_g5

0x816d,	// (0x00042e6a) input_focus_pane_g6

0x8175,	// (0x00042e72) input_focus_pane_g7

0x817d,	// (0x00042e7a) input_focus_pane_g8

0x8185,	// (0x00042e82) input_focus_pane_g9

0x776d,	// (0x0004246a) input_focus_pane_g10

0x0009,

0xf6d5,	// (0x0004a3d2) input_focus_pane_g

0xa20d,	// (0x00044f0a) wait_border_pane_g3_copy1

0x5374,	// (0x00040071) data_form_pane_t1

0x776d,	// (0x0004246a) wait_anim_pane_g1_copy1

0x558c,	// (0x00040289) data_form_wide_pane_t1

0x5393,	// (0x00040090) list_form_graphic_pane_cp_ParamLimits

0x5393,	// (0x00040090) list_form_graphic_pane_cp

0xb192,	// (0x00045e8f) slider_form_pane_g1

0xb19b,	// (0x00045e98) slider_form_pane_g2

0x0006,

0xf9cd,	// (0x0004a6ca) slider_form_pane_g

0x5393,	// (0x00040090) list_form_graphic_pane_ParamLimits

0x5393,	// (0x00040090) list_form_graphic_pane

0x53a5,	// (0x000400a2) list_form_graphic_pane_g1

0x53ad,	// (0x000400aa) list_form_graphic_pane_t1_ParamLimits

0x53ad,	// (0x000400aa) list_form_graphic_pane_t1

0x7857,	// (0x00042554) list_highlight_pane_cp5_ParamLimits

0x7857,	// (0x00042554) list_highlight_pane_cp5

0x5f79,	// (0x00040c76) find_pane_g1

0x818d,	// (0x00042e8a) input_find_pane

0x53c2,	// (0x000400bf) input_find_pane_g1_ParamLimits

0x53c2,	// (0x000400bf) input_find_pane_g1

0x53ce,	// (0x000400cb) input_find_pane_t1_ParamLimits

0x53ce,	// (0x000400cb) input_find_pane_t1

0x53e3,	// (0x000400e0) input_find_pane_t2_ParamLimits

0x53e3,	// (0x000400e0) input_find_pane_t2

0x0001,

0xf6ea,	// (0x0004a3e7) input_find_pane_t_ParamLimits

0xf6ea,	// (0x0004a3e7) input_find_pane_t

0x8196,	// (0x00042e93) input_focus_pane_cp5_ParamLimits

0x8196,	// (0x00042e93) input_focus_pane_cp5

0x81b0,	// (0x00042ead) bg_popup_window_pane_cp2_ParamLimits

0x81b0,	// (0x00042ead) bg_popup_window_pane_cp2

0x81bd,	// (0x00042eba) listscroll_menu_pane_ParamLimits

0x81bd,	// (0x00042eba) listscroll_menu_pane

0x81c9,	// (0x00042ec6) popup_submenu_window_ParamLimits

0x81c9,	// (0x00042ec6) popup_submenu_window

0x81f9,	// (0x00042ef6) find_popup_pane_g1

0x8201,	// (0x00042efe) input_popup_find_pane_cp

0x8196,	// (0x00042e93) input_focus_pane_cp4_ParamLimits

0x8196,	// (0x00042e93) input_focus_pane_cp4

0x8219,	// (0x00042f16) input_popup_find_pane_t1_ParamLimits

0x8219,	// (0x00042f16) input_popup_find_pane_t1

0x7777,	// (0x00042474) bg_popup_sub_pane_cp

0x8247,	// (0x00042f44) listscroll_popup_sub_pane

0x824f,	// (0x00042f4c) list_submenu_pane_ParamLimits

0x824f,	// (0x00042f4c) list_submenu_pane

0x8260,	// (0x00042f5d) scroll_pane_cp4

0x8268,	// (0x00042f65) list_single_popup_submenu_pane_ParamLimits

0x8268,	// (0x00042f65) list_single_popup_submenu_pane

0x827d,	// (0x00042f7a) list_single_popup_submenu_pane_g1

0x8285,	// (0x00042f82) list_single_popup_submenu_pane_t1_ParamLimits

0x8285,	// (0x00042f82) list_single_popup_submenu_pane_t1

0x7857,	// (0x00042554) bg_active_tab_pane_cp1_ParamLimits

0x7857,	// (0x00042554) bg_active_tab_pane_cp1

0x829a,	// (0x00042f97) tabs_2_active_pane_g1

0x82a2,	// (0x00042f9f) tabs_2_active_pane_t1

0x7857,	// (0x00042554) bg_passive_tab_pane_cp1_ParamLimits

0x7857,	// (0x00042554) bg_passive_tab_pane_cp1

0x829a,	// (0x00042f97) tabs_2_passive_pane_g1

0x82a2,	// (0x00042f9f) tabs_2_passive_pane_t1

0x82b4,	// (0x00042fb1) bg_active_tab_pane_cp4

0x82c2,	// (0x00042fbf) tabs_2_long_active_pane_t1

0x82d5,	// (0x00042fd2) bg_passive_tab_pane_cp4

0x65df,	// (0x000412dc) list_single_midp_graphic_pane_g4_ParamLimits

0x82b4,	// (0x00042fb1) bg_active_tab_pane_cp5

0x82e1,	// (0x00042fde) tabs_3_long_active_pane_t1

0x82d5,	// (0x00042fd2) bg_passive_tab_pane_cp5

0x65df,	// (0x000412dc) list_single_midp_graphic_pane_g4

0x7857,	// (0x00042554) bg_popup_window_pane_cp13_ParamLimits

0x7857,	// (0x00042554) bg_popup_window_pane_cp13

0x82fc,	// (0x00042ff9) listscroll_popup_fast_pane_ParamLimits

0x82fc,	// (0x00042ff9) listscroll_popup_fast_pane

0x830b,	// (0x00043008) grid_popup_fast_pane_ParamLimits

0x830b,	// (0x00043008) grid_popup_fast_pane

0x831d,	// (0x0004301a) scroll_pane_cp9_ParamLimits

0x831d,	// (0x0004301a) scroll_pane_cp9

0xcac5,	// (0x000477c2) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xcac5,	// (0x000477c2) list_single_graphic_hl_pane_t1_cp2

0x8341,	// (0x0004303e) input_focus_pane_cp20_ParamLimits

0x8341,	// (0x0004303e) input_focus_pane_cp20

0x834f,	// (0x0004304c) query_popup_data_pane_t1_ParamLimits

0x834f,	// (0x0004304c) query_popup_data_pane_t1

0x8362,	// (0x0004305f) query_popup_data_pane_t2_ParamLimits

0x8362,	// (0x0004305f) query_popup_data_pane_t2

0x83a8,	// (0x000430a5) query_popup_data_pane_t3_ParamLimits

0x83a8,	// (0x000430a5) query_popup_data_pane_t3

0x83e9,	// (0x000430e6) query_popup_data_pane_t4_ParamLimits

0x83e9,	// (0x000430e6) query_popup_data_pane_t4

0x8425,	// (0x00043122) query_popup_data_pane_t5_ParamLimits

0x8425,	// (0x00043122) query_popup_data_pane_t5

0x0004,

0xf6ef,	// (0x0004a3ec) query_popup_data_pane_t_ParamLimits

0xf6ef,	// (0x0004a3ec) query_popup_data_pane_t

0x8145,	// (0x00042e42) bg_set_opt_pane_g1

0x814d,	// (0x00042e4a) bg_set_opt_pane_g2

0x8155,	// (0x00042e52) bg_set_opt_pane_g3

0x815d,	// (0x00042e5a) bg_set_opt_pane_g4

0x8165,	// (0x00042e62) bg_set_opt_pane_g5

0x816d,	// (0x00042e6a) bg_set_opt_pane_g6

0x8175,	// (0x00042e72) bg_set_opt_pane_g7

0x817d,	// (0x00042e7a) bg_set_opt_pane_g8

0x8185,	// (0x00042e82) bg_set_opt_pane_g9

0x0008,

0xf6fa,	// (0x0004a3f7) bg_set_opt_pane_g

0x6243,	// (0x00040f40) control_top_pane_stacon_ParamLimits

0x6243,	// (0x00040f40) control_top_pane_stacon

0x6296,	// (0x00040f93) signal_pane_stacon_ParamLimits

0x6296,	// (0x00040f93) signal_pane_stacon

0x89d1,	// (0x000436ce) stacon_top_pane_g1_ParamLimits

0x89d1,	// (0x000436ce) stacon_top_pane_g1

0x62bb,	// (0x00040fb8) title_pane_stacon_ParamLimits

0x62bb,	// (0x00040fb8) title_pane_stacon

0x62e5,	// (0x00040fe2) uni_indicator_pane_stacon_ParamLimits

0x62e5,	// (0x00040fe2) uni_indicator_pane_stacon

0x62fd,	// (0x00040ffa) battery_pane_stacon_ParamLimits

0x62fd,	// (0x00040ffa) battery_pane_stacon

0x6341,	// (0x0004103e) control_bottom_pane_stacon_ParamLimits

0x6341,	// (0x0004103e) control_bottom_pane_stacon

0x6364,	// (0x00041061) navi_pane_stacon_ParamLimits

0x6364,	// (0x00041061) navi_pane_stacon

0x89f3,	// (0x000436f0) stacon_bottom_pane_g1_ParamLimits

0x89f3,	// (0x000436f0) stacon_bottom_pane_g1

0x5f82,	// (0x00040c7f) aid_levels_signal_lsc_ParamLimits

0x5f82,	// (0x00040c7f) aid_levels_signal_lsc

0x5f99,	// (0x00040c96) signal_pane_stacon_g1_ParamLimits

0x5f99,	// (0x00040c96) signal_pane_stacon_g1

0x5fad,	// (0x00040caa) signal_pane_stacon_g2_ParamLimits

0x5fad,	// (0x00040caa) signal_pane_stacon_g2

0x0001,

0xf70d,	// (0x0004a40a) signal_pane_stacon_g_ParamLimits

0xf70d,	// (0x0004a40a) signal_pane_stacon_g

0x5fe2,	// (0x00040cdf) title_pane_stacon_t1_ParamLimits

0x5fe2,	// (0x00040cdf) title_pane_stacon_t1

0x8469,	// (0x00043166) uni_indicator_pane_stacon_g1

0x8473,	// (0x00043170) uni_indicator_pane_stacon_g2

0x847d,	// (0x0004317a) uni_indicator_pane_stacon_g3

0x8487,	// (0x00043184) uni_indicator_pane_stacon_g4

0x0003,

0xf719,	// (0x0004a416) uni_indicator_pane_stacon_g

0x6007,	// (0x00040d04) control_top_pane_stacon_g1

0x600f,	// (0x00040d0c) control_top_pane_stacon_t1_ParamLimits

0x600f,	// (0x00040d0c) control_top_pane_stacon_t1

0x6046,	// (0x00040d43) aid_levels_battery_lsc_ParamLimits

0x6046,	// (0x00040d43) aid_levels_battery_lsc

0x605e,	// (0x00040d5b) battery_pane_stacon_g1_ParamLimits

0x605e,	// (0x00040d5b) battery_pane_stacon_g1

0x6071,	// (0x00040d6e) battery_pane_stacon_g2_ParamLimits

0x6071,	// (0x00040d6e) battery_pane_stacon_g2

0x0001,

0xf722,	// (0x0004a41f) battery_pane_stacon_g_ParamLimits

0xf722,	// (0x0004a41f) battery_pane_stacon_g

0x60af,	// (0x00040dac) navi_icon_pane_stacon

0x60c3,	// (0x00040dc0) navi_navi_pane_stacon

0x60af,	// (0x00040dac) navi_text_pane_stacon

0x6007,	// (0x00040d04) control_bottom_pane_stacon_g1

0x60d9,	// (0x00040dd6) control_bottom_pane_stacon_t1_ParamLimits

0x60d9,	// (0x00040dd6) control_bottom_pane_stacon_t1

0x84ab,	// (0x000431a8) grid_app_pane_ParamLimits

0x84ab,	// (0x000431a8) grid_app_pane

0x84cf,	// (0x000431cc) scroll_pane_cp15_ParamLimits

0x84cf,	// (0x000431cc) scroll_pane_cp15

0x84e4,	// (0x000431e1) cell_app_pane_ParamLimits

0x84e4,	// (0x000431e1) cell_app_pane

0x8510,	// (0x0004320d) cell_app_pane_g1_ParamLimits

0x8510,	// (0x0004320d) cell_app_pane_g1

0x8534,	// (0x00043231) cell_app_pane_g2_ParamLimits

0x8534,	// (0x00043231) cell_app_pane_g2

0x0001,

0xf727,	// (0x0004a424) cell_app_pane_g_ParamLimits

0xf727,	// (0x0004a424) cell_app_pane_g

0x8540,	// (0x0004323d) cell_app_pane_t1_ParamLimits

0x8540,	// (0x0004323d) cell_app_pane_t1

0x8552,	// (0x0004324f) grid_highlight_pane_ParamLimits

0x8552,	// (0x0004324f) grid_highlight_pane

0x8145,	// (0x00042e42) cell_highlight_pane_g1

0x814d,	// (0x00042e4a) cell_highlight_pane_g2

0x8155,	// (0x00042e52) cell_highlight_pane_g3

0x815d,	// (0x00042e5a) cell_highlight_pane_g4

0x8165,	// (0x00042e62) cell_highlight_pane_g5

0x816d,	// (0x00042e6a) cell_highlight_pane_g6

0x8175,	// (0x00042e72) cell_highlight_pane_g7

0x817d,	// (0x00042e7a) cell_highlight_pane_g8

0x8185,	// (0x00042e82) cell_highlight_pane_g9

0x776d,	// (0x0004246a) cell_highlight_pane_g10

0x0009,

0xf6d5,	// (0x0004a3d2) cell_highlight_pane_g

0x8563,	// (0x00043260) bg_scroll_pane

0x6123,	// (0x00040e20) scroll_handle_pane

0x85aa,	// (0x000432a7) scroll_bg_pane_g1

0x85bf,	// (0x000432bc) scroll_bg_pane_g2

0x85d7,	// (0x000432d4) scroll_bg_pane_g3

0x0002,

0xf72c,	// (0x0004a429) scroll_bg_pane_g

0x85ec,	// (0x000432e9) scroll_handle_focus_pane_ParamLimits

0x85ec,	// (0x000432e9) scroll_handle_focus_pane

0x85aa,	// (0x000432a7) scroll_handle_pane_g1

0x85f9,	// (0x000432f6) scroll_handle_pane_g2

0x85d7,	// (0x000432d4) scroll_handle_pane_g3

0x0002,

0xf733,	// (0x0004a430) scroll_handle_pane_g

0x8196,	// (0x00042e93) bg_popup_sub_pane_cp21_ParamLimits

0x8196,	// (0x00042e93) bg_popup_sub_pane_cp21

0x860d,	// (0x0004330a) popup_fep_japan_predictive_window_t1_ParamLimits

0x860d,	// (0x0004330a) popup_fep_japan_predictive_window_t1

0x8624,	// (0x00043321) popup_fep_japan_predictive_window_t2_ParamLimits

0x8624,	// (0x00043321) popup_fep_japan_predictive_window_t2

0x8657,	// (0x00043354) popup_fep_japan_predictive_window_t3_ParamLimits

0x8657,	// (0x00043354) popup_fep_japan_predictive_window_t3

0x0002,

0xf73a,	// (0x0004a437) popup_fep_japan_predictive_window_t_ParamLimits

0xf73a,	// (0x0004a437) popup_fep_japan_predictive_window_t

0x7777,	// (0x00042474) bg_popup_sub_pane_cp23

0x868e,	// (0x0004338b) listscroll_japin_cand_pane

0x8696,	// (0x00043393) popup_fep_japan_candidate_window_t1

0x86a4,	// (0x000433a1) candidate_pane_ParamLimits

0x86a4,	// (0x000433a1) candidate_pane

0x86b6,	// (0x000433b3) scroll_pane_cp30

0x86c0,	// (0x000433bd) list_single_popup_jap_candidate_pane_ParamLimits

0x86c0,	// (0x000433bd) list_single_popup_jap_candidate_pane

0x7777,	// (0x00042474) list_highlight_pane_cp30

0x86d4,	// (0x000433d1) list_single_popup_jap_candidate_pane_t1

0x86e3,	// (0x000433e0) level_1_signal

0x86f0,	// (0x000433ed) level_2_signal

0x86fd,	// (0x000433fa) level_3_signal

0x870a,	// (0x00043407) level_4_signal

0x8717,	// (0x00043414) level_5_signal

0x8724,	// (0x00043421) level_6_signal

0x8731,	// (0x0004342e) level_7_signal

0x86e3,	// (0x000433e0) level_1_battery

0x86f0,	// (0x000433ed) level_2_battery

0x86fd,	// (0x000433fa) level_3_battery

0x870a,	// (0x00043407) level_4_battery

0x8717,	// (0x00043414) level_5_battery

0x8724,	// (0x00043421) level_6_battery

0x8731,	// (0x0004342e) level_7_battery

0x8756,	// (0x00043453) list_menu_pane_ParamLimits

0x8756,	// (0x00043453) list_menu_pane

0x8767,	// (0x00043464) scroll_pane_cp25_ParamLimits

0x8767,	// (0x00043464) scroll_pane_cp25

0x8780,	// (0x0004347d) list_double2_graphic_pane_cp2_ParamLimits

0x8780,	// (0x0004347d) list_double2_graphic_pane_cp2

0x8780,	// (0x0004347d) list_double2_large_graphic_pane_cp2_ParamLimits

0x8780,	// (0x0004347d) list_double2_large_graphic_pane_cp2

0x8780,	// (0x0004347d) list_double2_pane_cp2_ParamLimits

0x8780,	// (0x0004347d) list_double2_pane_cp2

0x8780,	// (0x0004347d) list_double_graphic_pane_cp2_ParamLimits

0x8780,	// (0x0004347d) list_double_graphic_pane_cp2

0x8780,	// (0x0004347d) list_double_large_graphic_pane_cp2_ParamLimits

0x8780,	// (0x0004347d) list_double_large_graphic_pane_cp2

0x8780,	// (0x0004347d) list_double_number_pane_cp2_ParamLimits

0x8780,	// (0x0004347d) list_double_number_pane_cp2

0x8780,	// (0x0004347d) list_double_pane_cp2_ParamLimits

0x8780,	// (0x0004347d) list_double_pane_cp2

0x87a6,	// (0x000434a3) list_single_2graphic_pane_cp2_ParamLimits

0x87a6,	// (0x000434a3) list_single_2graphic_pane_cp2

0x87a6,	// (0x000434a3) list_single_graphic_heading_pane_cp2_ParamLimits

0x87a6,	// (0x000434a3) list_single_graphic_heading_pane_cp2

0x87a6,	// (0x000434a3) list_single_graphic_pane_cp2_ParamLimits

0x87a6,	// (0x000434a3) list_single_graphic_pane_cp2

0x87a6,	// (0x000434a3) list_single_heading_pane_cp2_ParamLimits

0x87a6,	// (0x000434a3) list_single_heading_pane_cp2

0x87c3,	// (0x000434c0) list_single_large_graphic_pane_cp2_ParamLimits

0x87c3,	// (0x000434c0) list_single_large_graphic_pane_cp2

0x87a6,	// (0x000434a3) list_single_number_heading_pane_cp2_ParamLimits

0x87a6,	// (0x000434a3) list_single_number_heading_pane_cp2

0x87a6,	// (0x000434a3) list_single_number_pane_cp2_ParamLimits

0x87a6,	// (0x000434a3) list_single_number_pane_cp2

0x87a6,	// (0x000434a3) list_single_pane_cp2_ParamLimits

0x87a6,	// (0x000434a3) list_single_pane_cp2

0x8818,	// (0x00043515) bg_popup_sub_pane_cp22

0x61d5,	// (0x00040ed2) popup_side_volume_key_window_g1

0x61ff,	// (0x00040efc) popup_side_volume_key_window_t1

0x621d,	// (0x00040f1a) volume_small_pane_cp1

0x7ad3,	// (0x000427d0) bg_popup_sub_pane_cp24_ParamLimits

0x7ad3,	// (0x000427d0) bg_popup_sub_pane_cp24

0x882e,	// (0x0004352b) fep_china_uni_candidate_pane_ParamLimits

0x882e,	// (0x0004352b) fep_china_uni_candidate_pane

0x8842,	// (0x0004353f) fep_china_uni_entry_pane

0x8852,	// (0x0004354f) popup_fep_china_uni_window_g1

0x886e,	// (0x0004356b) fep_china_uni_entry_pane_g1

0x8878,	// (0x00043575) fep_china_uni_entry_pane_g2

0x0001,

0xf767,	// (0x0004a464) fep_china_uni_entry_pane_g

0x8882,	// (0x0004357f) fep_entry_item_pane

0x888c,	// (0x00043589) fep_candidate_item_pane

0x8894,	// (0x00043591) fep_china_uni_candidate_pane_g1

0x889e,	// (0x0004359b) fep_china_uni_candidate_pane_g2

0x88a6,	// (0x000435a3) fep_china_uni_candidate_pane_g3

0x88ae,	// (0x000435ab) fep_china_uni_candidate_pane_g4

0x0003,

0xf76c,	// (0x0004a469) fep_china_uni_candidate_pane_g

0x776d,	// (0x0004246a) fep_entry_item_pane_g1

0x88b8,	// (0x000435b5) fep_entry_item_pane_t1_ParamLimits

0x88b8,	// (0x000435b5) fep_entry_item_pane_t1

0x88ce,	// (0x000435cb) fep_candidate_item_pane_t1_ParamLimits

0x88ce,	// (0x000435cb) fep_candidate_item_pane_t1

0x88e3,	// (0x000435e0) fep_candidate_item_pane_t2_ParamLimits

0x88e3,	// (0x000435e0) fep_candidate_item_pane_t2

0x0001,

0xf775,	// (0x0004a472) fep_candidate_item_pane_t_ParamLimits

0xf775,	// (0x0004a472) fep_candidate_item_pane_t

0x7857,	// (0x00042554) list_highlight_pane_cp31_ParamLimits

0x7857,	// (0x00042554) list_highlight_pane_cp31

0x88f5,	// (0x000435f2) level_1_signal_lsc

0x88fe,	// (0x000435fb) level_2_signal_lsc

0x8907,	// (0x00043604) level_3_signal_lsc

0x8910,	// (0x0004360d) level_4_signal_lsc

0x8919,	// (0x00043616) level_5_signal_lsc

0x8922,	// (0x0004361f) level_6_signal_lsc

0x892b,	// (0x00043628) level_7_signal_lsc

0x892b,	// (0x00043628) level_1_battery_lsc

0x8934,	// (0x00043631) level_2_battery_lsc

0x893d,	// (0x0004363a) level_3_battery_lsc

0x8946,	// (0x00043643) level_4_battery_lsc

0x894f,	// (0x0004364c) level_5_battery_lsc

0x8958,	// (0x00043655) level_6_battery_lsc

0x88f5,	// (0x000435f2) level_7_battery_lsc

0x8961,	// (0x0004365e) scroll_handle_focus_pane_g1

0x896a,	// (0x00043667) scroll_handle_focus_pane_g2

0x8973,	// (0x00043670) scroll_handle_focus_pane_g3

0x0002,

0xf77a,	// (0x0004a477) scroll_handle_focus_pane_g

0x53f8,	// (0x000400f5) list_single_2graphic_pane_g1_ParamLimits

0x53f8,	// (0x000400f5) list_single_2graphic_pane_g1

0x5ef7,	// (0x00040bf4) list_single_2graphic_pane_g2_ParamLimits

0x5ef7,	// (0x00040bf4) list_single_2graphic_pane_g2

0x5ed9,	// (0x00040bd6) list_single_2graphic_pane_g3_ParamLimits

0x5ed9,	// (0x00040bd6) list_single_2graphic_pane_g3

0x6225,	// (0x00040f22) list_single_2graphic_pane_g4_ParamLimits

0x6225,	// (0x00040f22) list_single_2graphic_pane_g4

0x0003,

0xf781,	// (0x0004a47e) list_single_2graphic_pane_g_ParamLimits

0xf781,	// (0x0004a47e) list_single_2graphic_pane_g

0x5404,	// (0x00040101) list_single_2graphic_pane_t1_ParamLimits

0x5404,	// (0x00040101) list_single_2graphic_pane_t1

0x6231,	// (0x00040f2e) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x6231,	// (0x00040f2e) list_double2_graphic_large_graphic_pane_g1

0x4f7e,	// (0x0003fc7b) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x4f7e,	// (0x0003fc7b) list_double2_graphic_large_graphic_pane_g2

0x4ecb,	// (0x0003fbc8) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x4ecb,	// (0x0003fbc8) list_double2_graphic_large_graphic_pane_g3

0x5432,	// (0x0004012f) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x5432,	// (0x0004012f) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf78a,	// (0x0004a487) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf78a,	// (0x0004a487) list_double2_graphic_large_graphic_pane_g

0x543e,	// (0x0004013b) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x543e,	// (0x0004013b) list_double2_graphic_large_graphic_pane_t1

0x5454,	// (0x00040151) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x5454,	// (0x00040151) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf793,	// (0x0004a490) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf793,	// (0x0004a490) list_double2_graphic_large_graphic_pane_t

0x8ab5,	// (0x000437b2) popup_fast_swap_window_ParamLimits

0x8ab5,	// (0x000437b2) popup_fast_swap_window

0x8ad3,	// (0x000437d0) popup_side_volume_key_window

0x8af1,	// (0x000437ee) stacon_top_pane

0x8afb,	// (0x000437f8) status_pane_ParamLimits

0x8afb,	// (0x000437f8) status_pane

0x8af1,	// (0x000437ee) status_small_pane

0x7777,	// (0x00042474) control_pane

0x7777,	// (0x00042474) stacon_bottom_pane

0x80c1,	// (0x00042dbe) scroll_pane_cp121

0x80b8,	// (0x00042db5) set_content_pane

0x897c,	// (0x00043679) bg_active_tab_pane_g1_cp1

0x8985,	// (0x00043682) bg_active_tab_pane_g2_cp1

0x898e,	// (0x0004368b) bg_active_tab_pane_g3_cp1

0x897c,	// (0x00043679) bg_passive_tab_pane_g1_cp1

0x8985,	// (0x00043682) bg_passive_tab_pane_g2_cp1

0x898e,	// (0x0004368b) bg_passive_tab_pane_g3_cp1

0x8997,	// (0x00043694) bg_active_tab_pane_g1_cp2

0x8985,	// (0x00043682) bg_active_tab_pane_g2_cp2

0x89a0,	// (0x0004369d) bg_active_tab_pane_g3_cp2

0x8997,	// (0x00043694) bg_passive_tab_pane_g1_cp2

0x8985,	// (0x00043682) bg_passive_tab_pane_g2_cp2

0x89a0,	// (0x0004369d) bg_passive_tab_pane_g3_cp2

0x89a9,	// (0x000436a6) bg_active_tab_pane_g1_cp3

0x8985,	// (0x00043682) bg_active_tab_pane_g2_cp3

0x89b2,	// (0x000436af) bg_active_tab_pane_g3_cp3

0x89a9,	// (0x000436a6) bg_passive_tab_pane_g1_cp3

0x8985,	// (0x00043682) bg_passive_tab_pane_g2_cp3

0x89b2,	// (0x000436af) bg_passive_tab_pane_g3_cp3

0x89bb,	// (0x000436b8) bg_active_tab_pane_g1_cp4

0x8985,	// (0x00043682) bg_active_tab_pane_g2_cp4

0x89c6,	// (0x000436c3) bg_active_tab_pane_g3_cp4

0x89bb,	// (0x000436b8) bg_passive_tab_pane_g1_cp4

0x8985,	// (0x00043682) bg_passive_tab_pane_g2_cp4

0x89c6,	// (0x000436c3) bg_passive_tab_pane_g3_cp4

0x8a0f,	// (0x0004370c) bg_active_tab_pane_g1_cp5

0x8985,	// (0x00043682) bg_active_tab_pane_g2_cp5

0x8a18,	// (0x00043715) bg_active_tab_pane_g3_cp5

0x8a0f,	// (0x0004370c) bg_passive_tab_pane_g1_cp5

0x8985,	// (0x00043682) bg_passive_tab_pane_g2_cp5

0x8a18,	// (0x00043715) bg_passive_tab_pane_g3_cp5

0x8a21,	// (0x0004371e) list_set_graphic_pane_ParamLimits

0x8a21,	// (0x0004371e) list_set_graphic_pane

0x7777,	// (0x00042474) bg_set_opt_pane_cp4

0x8a36,	// (0x00043733) list_set_graphic_pane_g1_ParamLimits

0x8a36,	// (0x00043733) list_set_graphic_pane_g1

0x8a42,	// (0x0004373f) list_set_graphic_pane_g2_ParamLimits

0x8a42,	// (0x0004373f) list_set_graphic_pane_g2

0x0001,

0xf798,	// (0x0004a495) list_set_graphic_pane_g_ParamLimits

0xf798,	// (0x0004a495) list_set_graphic_pane_g

0x0009,

0xfafa,	// (0x0004a7f7) volume_small_pane_cp_g

0x8a66,	// (0x00043763) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x8a66,	// (0x00043763) list_double2_large_graphic_pane_g1_cp2

0x8a74,	// (0x00043771) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x8a74,	// (0x00043771) list_double2_large_graphic_pane_g2_cp2

0x8a85,	// (0x00043782) list_double2_large_graphic_pane_g3_cp2

0x8a8d,	// (0x0004378a) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x8a8d,	// (0x0004378a) list_double2_large_graphic_pane_t1_cp2

0x8aa3,	// (0x000437a0) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x8aa3,	// (0x000437a0) list_double2_large_graphic_pane_t2_cp2

0xacf7,	// (0x000459f4) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xacf7,	// (0x000459f4) list_double_large_graphic_pane_g1_cp2

0xad0a,	// (0x00045a07) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xad0a,	// (0x00045a07) list_double_large_graphic_pane_g2_cp2

0x8c19,	// (0x00043916) list_double_large_graphic_pane_g3_cp2

0xad1b,	// (0x00045a18) list_double_large_graphic_pane_g4_cp

0xad23,	// (0x00045a20) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xad23,	// (0x00045a20) list_double_large_graphic_pane_t1_cp2

0xad3a,	// (0x00045a37) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xad3a,	// (0x00045a37) list_double_large_graphic_pane_t2_cp2

0x8b09,	// (0x00043806) list_double2_graphic_pane_g1_cp2_ParamLimits

0x8b09,	// (0x00043806) list_double2_graphic_pane_g1_cp2

0x8b17,	// (0x00043814) list_double2_graphic_pane_g2_cp2_ParamLimits

0x8b17,	// (0x00043814) list_double2_graphic_pane_g2_cp2

0x8b28,	// (0x00043825) list_double2_graphic_pane_g3_cp2

0x8b32,	// (0x0004382f) list_double2_graphic_pane_t1_cp2_ParamLimits

0x8b32,	// (0x0004382f) list_double2_graphic_pane_t1_cp2

0x8b48,	// (0x00043845) list_double2_graphic_pane_t2_cp2_ParamLimits

0x8b48,	// (0x00043845) list_double2_graphic_pane_t2_cp2

0x8b5a,	// (0x00043857) list_single_number_heading_pane_g1_cp2_ParamLimits

0x8b5a,	// (0x00043857) list_single_number_heading_pane_g1_cp2

0x8b66,	// (0x00043863) list_single_number_heading_pane_g2_cp2

0x8b6e,	// (0x0004386b) list_single_number_heading_pane_t1_cp2_ParamLimits

0x8b6e,	// (0x0004386b) list_single_number_heading_pane_t1_cp2

0x8b84,	// (0x00043881) list_single_number_heading_pane_t2_cp2_ParamLimits

0x8b84,	// (0x00043881) list_single_number_heading_pane_t2_cp2

0x8b98,	// (0x00043895) list_single_number_heading_pane_t3_cp2_ParamLimits

0x8b98,	// (0x00043895) list_single_number_heading_pane_t3_cp2

0x8b5a,	// (0x00043857) list_single_heading_pane_g1_cp2_ParamLimits

0x8b5a,	// (0x00043857) list_single_heading_pane_g1_cp2

0x8b66,	// (0x00043863) list_single_heading_pane_g2_cp2

0x8b6e,	// (0x0004386b) list_single_heading_pane_t1_cp2_ParamLimits

0x8b6e,	// (0x0004386b) list_single_heading_pane_t1_cp2

0xaaf1,	// (0x000457ee) list_single_heading_pane_t2_cp2_ParamLimits

0xaaf1,	// (0x000457ee) list_single_heading_pane_t2_cp2

0xaa33,	// (0x00045730) list_double_graphic_pane_g1_cp2_ParamLimits

0xaa33,	// (0x00045730) list_double_graphic_pane_g1_cp2

0xaa3f,	// (0x0004573c) list_double_graphic_pane_g2_cp2_ParamLimits

0xaa3f,	// (0x0004573c) list_double_graphic_pane_g2_cp2

0xaa4e,	// (0x0004574b) list_double_graphic_pane_g3_cp2

0xaa56,	// (0x00045753) list_double_graphic_pane_t1_cp2_ParamLimits

0xaa56,	// (0x00045753) list_double_graphic_pane_t1_cp2

0xaa6c,	// (0x00045769) list_double_graphic_pane_t2_cp2_ParamLimits

0xaa6c,	// (0x00045769) list_double_graphic_pane_t2_cp2

0x8c0d,	// (0x0004390a) list_double_number_pane_g1_cp2_ParamLimits

0x8c0d,	// (0x0004390a) list_double_number_pane_g1_cp2

0x8c19,	// (0x00043916) list_double_number_pane_g2_cp2

0xa9f7,	// (0x000456f4) list_double_number_pane_t1_cp2_ParamLimits

0xa9f7,	// (0x000456f4) list_double_number_pane_t1_cp2

0xaa0b,	// (0x00045708) list_double_number_pane_t2_cp2_ParamLimits

0xaa0b,	// (0x00045708) list_double_number_pane_t2_cp2

0xaa21,	// (0x0004571e) list_double_number_pane_t3_cp2_ParamLimits

0xaa21,	// (0x0004571e) list_double_number_pane_t3_cp2

0xa8e0,	// (0x000455dd) list_single_graphic_pane_g1_cp2_ParamLimits

0xa8e0,	// (0x000455dd) list_single_graphic_pane_g1_cp2

0x8c73,	// (0x00043970) list_single_graphic_pane_g2_cp2_ParamLimits

0x8c73,	// (0x00043970) list_single_graphic_pane_g2_cp2

0x8c7f,	// (0x0004397c) list_single_graphic_pane_g3_cp2

0xa8b6,	// (0x000455b3) list_single_graphic_pane_t1_cp2_ParamLimits

0xa8b6,	// (0x000455b3) list_single_graphic_pane_t1_cp2

0x8c73,	// (0x00043970) list_single_number_pane_g1_cp2_ParamLimits

0x8c73,	// (0x00043970) list_single_number_pane_g1_cp2

0x8c7f,	// (0x0004397c) list_single_number_pane_g2_cp2

0xa8b6,	// (0x000455b3) list_single_number_pane_t1_cp2_ParamLimits

0xa8b6,	// (0x000455b3) list_single_number_pane_t1_cp2

0xa8cc,	// (0x000455c9) list_single_number_pane_t2_cp2_ParamLimits

0xa8cc,	// (0x000455c9) list_single_number_pane_t2_cp2

0x8a74,	// (0x00043771) list_double2_pane_g1_cp2_ParamLimits

0x8a74,	// (0x00043771) list_double2_pane_g1_cp2

0x8a85,	// (0x00043782) list_double2_pane_g2_cp2

0x8be5,	// (0x000438e2) list_double2_pane_t1_cp2_ParamLimits

0x8be5,	// (0x000438e2) list_double2_pane_t1_cp2

0x8bfb,	// (0x000438f8) list_double2_pane_t2_cp2_ParamLimits

0x8bfb,	// (0x000438f8) list_double2_pane_t2_cp2

0x8c0d,	// (0x0004390a) list_double_pane_g1_cp2_ParamLimits

0x8c0d,	// (0x0004390a) list_double_pane_g1_cp2

0x8c19,	// (0x00043916) list_double_pane_g2_cp2

0x8c21,	// (0x0004391e) list_double_pane_t1_cp2_ParamLimits

0x8c21,	// (0x0004391e) list_double_pane_t1_cp2

0x8c37,	// (0x00043934) list_double_pane_t2_cp2_ParamLimits

0x8c37,	// (0x00043934) list_double_pane_t2_cp2

0x8c63,	// (0x00043960) list_single_pane_cp2_g3

0x8c73,	// (0x00043970) list_single_pane_g1_cp2_ParamLimits

0x8c73,	// (0x00043970) list_single_pane_g1_cp2

0x8c7f,	// (0x0004397c) list_single_pane_g2_cp2

0x8c87,	// (0x00043984) list_single_pane_t1_cp2_ParamLimits

0x8c87,	// (0x00043984) list_single_pane_t1_cp2

0x8c9f,	// (0x0004399c) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x8c9f,	// (0x0004399c) list_single_large_graphic_pane_g1_cp2

0x8cad,	// (0x000439aa) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x8cad,	// (0x000439aa) list_single_large_graphic_pane_g2_cp2

0x8cb9,	// (0x000439b6) list_single_large_graphic_pane_g3_cp2

0x8cc1,	// (0x000439be) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x8cc1,	// (0x000439be) list_single_large_graphic_pane_g4_cp1

0x8cdb,	// (0x000439d8) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x8cdb,	// (0x000439d8) list_single_large_graphic_pane_t1_cp2

0xa880,	// (0x0004557d) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa880,	// (0x0004557d) list_single_graphic_heading_pane_g1_cp2

0xa84d,	// (0x0004554a) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa84d,	// (0x0004554a) list_single_graphic_heading_pane_g4_cp2

0x8c7f,	// (0x0004397c) list_single_graphic_heading_pane_g5_cp2

0xa88c,	// (0x00045589) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa88c,	// (0x00045589) list_single_graphic_heading_pane_t1_cp2

0xa8a2,	// (0x0004559f) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa8a2,	// (0x0004559f) list_single_graphic_heading_pane_t2_cp2

0xa841,	// (0x0004553e) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa841,	// (0x0004553e) list_single_2graphic_pane_g1_cp2

0xa84d,	// (0x0004554a) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa84d,	// (0x0004554a) list_single_2graphic_pane_g2_cp2

0x8c7f,	// (0x0004397c) list_single_2graphic_pane_g3_cp2

0xa85e,	// (0x0004555b) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa85e,	// (0x0004555b) list_single_2graphic_pane_g4_cp2

0xa86a,	// (0x00045567) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa86a,	// (0x00045567) list_single_2graphic_pane_t1_cp2

0x776d,	// (0x0004246a) list_highlight_pane_g10_cp1

0xa419,	// (0x00045116) list_highlight_pane_g1_cp1

0xa421,	// (0x0004511e) list_highlight_pane_g2_cp1

0xa429,	// (0x00045126) list_highlight_pane_g3_cp1

0xa431,	// (0x0004512e) list_highlight_pane_g4_cp1

0xa439,	// (0x00045136) list_highlight_pane_g5_cp1

0xa441,	// (0x0004513e) list_highlight_pane_g6_cp1

0xa449,	// (0x00045146) list_highlight_pane_g7_cp1

0xa451,	// (0x0004514e) list_highlight_pane_g8_cp1

0xa459,	// (0x00045156) list_highlight_pane_g9_cp1

0xa339,	// (0x00045036) form_field_slider_pane_t3

0xa347,	// (0x00045044) form_field_slider_pane_t4

0xa355,	// (0x00045052) slider_form_pane_ParamLimits

0xa355,	// (0x00045052) slider_form_pane

0x7777,	// (0x00042474) control_abbreviations

0x7777,	// (0x00042474) control_conventions

0x7777,	// (0x00042474) control_definitions

0x7777,	// (0x00042474) format_table_attribute

0xab47,	// (0x00045844) bg_popup_preview_window_pane_g9

0x7777,	// (0x00042474) format_table_data2

0x7777,	// (0x00042474) format_table_data3

0x7777,	// (0x00042474) format_table_data_example

0x0008,

0x7777,	// (0x00042474) intro_purpose

0xf92d,	// (0x0004a62a) bg_popup_preview_window_pane_g

0x7777,	// (0x00042474) texts_category

0x7777,	// (0x00042474) texts_graphics

0x8cf1,	// (0x000439ee) text_digital

0x8d00,	// (0x000439fd) text_primary

0x8d0f,	// (0x00043a0c) text_primary_small

0x8d1e,	// (0x00043a1b) text_secondary

0x8d2d,	// (0x00043a2a) text_title

0xb2e3,	// (0x00045fe0) bg_passive_tab_pane_g1_cp3_srt

0x8985,	// (0x00043682) bg_passive_tab_pane_g2_cp3_srt

0xb2ec,	// (0x00045fe9) bg_passive_tab_pane_g3_cp3_srt

0x7857,	// (0x00042554) bg_active_tab_pane_cp3_srt_ParamLimits

0x7857,	// (0x00042554) bg_active_tab_pane_cp3_srt

0xb2f5,	// (0x00045ff2) tabs_4_active_pane_srt_g1

0xb2fd,	// (0x00045ffa) tabs_4_active_pane_srt_t1_ParamLimits

0xb2fd,	// (0x00045ffa) tabs_4_active_pane_srt_t1

0xb2e3,	// (0x00045fe0) bg_active_tab_pane_g1_cp3_copy1

0x8985,	// (0x00043682) bg_active_tab_pane_g2_cp3_copy1

0xb2ec,	// (0x00045fe9) bg_active_tab_pane_g3_cp3_copy1

0x7857,	// (0x00042554) tabs_2_long_active_pane_srt_ParamLimits

0x7857,	// (0x00042554) tabs_2_long_active_pane_srt

0x7857,	// (0x00042554) tabs_2_long_passive_pane_srt_ParamLimits

0x7857,	// (0x00042554) tabs_2_long_passive_pane_srt

0x82d5,	// (0x00042fd2) bg_passive_tab_pane_cp4_srt_ParamLimits

0x82d5,	// (0x00042fd2) bg_passive_tab_pane_cp4_srt

0xaf97,	// (0x00045c94) bg_passive_tab_pane_g1_cp4_srt

0x8985,	// (0x00043682) bg_passive_tab_pane_g2_cp4_srt

0xafa0,	// (0x00045c9d) bg_passive_tab_pane_g3_cp4_srt

0x82b4,	// (0x00042fb1) bg_active_tab_pane_cp4_srt_ParamLimits

0x82b4,	// (0x00042fb1) bg_active_tab_pane_cp4_srt

0xafa9,	// (0x00045ca6) tabs_2_long_active_pane_srt_t1_ParamLimits

0xafa9,	// (0x00045ca6) tabs_2_long_active_pane_srt_t1

0xaf97,	// (0x00045c94) bg_active_tab_pane_g1_cp4_srt

0x8985,	// (0x00043682) bg_active_tab_pane_g2_cp4_srt

0xafa0,	// (0x00045c9d) bg_active_tab_pane_g3_cp4_srt

0x7ad3,	// (0x000427d0) tabs_3_long_active_pane_srt_ParamLimits

0x7ad3,	// (0x000427d0) tabs_3_long_active_pane_srt

0x7ad3,	// (0x000427d0) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x7ad3,	// (0x000427d0) tabs_3_long_passive_pane_cp_srt

0x7ad3,	// (0x000427d0) tabs_3_long_passive_pane_srt_ParamLimits

0x7ad3,	// (0x000427d0) tabs_3_long_passive_pane_srt

0x82d5,	// (0x00042fd2) bg_passive_tab_pane_cp5_srt_ParamLimits

0x82d5,	// (0x00042fd2) bg_passive_tab_pane_cp5_srt

0x8a0f,	// (0x0004370c) bg_passive_tab_pane_g1_cp5_srt

0x8985,	// (0x00043682) bg_passive_tab_pane_g2_cp5_srt

0x8a18,	// (0x00043715) bg_passive_tab_pane_g3_cp5_srt

0x82b4,	// (0x00042fb1) bg_active_tab_pane_cp5_srt_ParamLimits

0x82b4,	// (0x00042fb1) bg_active_tab_pane_cp5_srt

0xaf85,	// (0x00045c82) tabs_3_long_active_pane_srt_t1_ParamLimits

0xaf85,	// (0x00045c82) tabs_3_long_active_pane_srt_t1

0x8a0f,	// (0x0004370c) bg_active_tab_pane_g1_cp5_srt

0x8985,	// (0x00043682) bg_active_tab_pane_g2_cp5_srt

0x8a18,	// (0x00043715) bg_active_tab_pane_g3_cp5_srt

0xaf77,	// (0x00045c74) navi_text_pane_srt_t1

0xaf6f,	// (0x00045c6c) navi_icon_pane_srt_g1

0x8f04,	// (0x00043c01) midp_editing_number_pane_srt

0x8d3c,	// (0x00043a39) midp_ticker_pane_srt

0x8f0c,	// (0x00043c09) midp_ticker_pane_srt_g1

0x8f14,	// (0x00043c11) midp_ticker_pane_srt_g2

0x0001,

0xf7b7,	// (0x0004a4b4) midp_ticker_pane_srt_g

0x8f1c,	// (0x00043c19) midp_ticker_pane_srt_t1

0xaf60,	// (0x00045c5d) midp_editing_number_pane_t1_copy1

0x8d44,	// (0x00043a41) listscroll_midp_pane

0x8d44,	// (0x00043a41) midp_form_pane

0x8db2,	// (0x00043aaf) midp_info_popup_window_ParamLimits

0x8db2,	// (0x00043aaf) midp_info_popup_window

0x8196,	// (0x00042e93) bg_popup_sub_pane_cp50_ParamLimits

0x8196,	// (0x00042e93) bg_popup_sub_pane_cp50

0xa080,	// (0x00044d7d) listscroll_midp_info_pane_ParamLimits

0xa080,	// (0x00044d7d) listscroll_midp_info_pane

0xa068,	// (0x00044d65) listscroll_form_midp_pane_ParamLimits

0xa068,	// (0x00044d65) listscroll_form_midp_pane

0xa074,	// (0x00044d71) scroll_bar_cp050

0xa048,	// (0x00044d45) list_midp_pane

0xbd3c,	// (0x00046a39) signal_pane_g2_cp

0x9f82,	// (0x00044c7f) listscroll_midp_info_pane_t1_ParamLimits

0x9f82,	// (0x00044c7f) listscroll_midp_info_pane_t1

0x9f9a,	// (0x00044c97) listscroll_midp_info_pane_t2_ParamLimits

0x9f9a,	// (0x00044c97) listscroll_midp_info_pane_t2

0x9fd8,	// (0x00044cd5) listscroll_midp_info_pane_t3_ParamLimits

0x9fd8,	// (0x00044cd5) listscroll_midp_info_pane_t3

0xa012,	// (0x00044d0f) listscroll_midp_info_pane_t4_ParamLimits

0xa012,	// (0x00044d0f) listscroll_midp_info_pane_t4

0x0003,

0xf868,	// (0x0004a565) listscroll_midp_info_pane_t_ParamLimits

0xf868,	// (0x0004a565) listscroll_midp_info_pane_t

0x8260,	// (0x00042f5d) scroll_pane_cp21

0x9f1c,	// (0x00044c19) form_midp_field_choice_group_pane

0x9f25,	// (0x00044c22) form_midp_field_text_pane

0x9f68,	// (0x00044c65) form_midp_field_time_pane

0x9f70,	// (0x00044c6d) form_midp_gauge_slider_pane

0x9f79,	// (0x00044c76) form_midp_gauge_wait_pane

0x7777,	// (0x00042474) form_midp_image_pane

0x5545,	// (0x00040242) list_single_midp_pane_ParamLimits

0x5545,	// (0x00040242) list_single_midp_pane

0x9ee0,	// (0x00044bdd) form_midp_field_text_pane_t1

0x9cf4,	// (0x000449f1) input_focus_pane_cp050

0x9f0b,	// (0x00044c08) list_midp_form_text_pane

0x9eaf,	// (0x00044bac) form_midp_field_choice_group_pane_t1

0x9ebd,	// (0x00044bba) input_focus_pane_cp051

0x9ed1,	// (0x00044bce) list_midp_choice_pane

0x7777,	// (0x00042474) status_idle_pane

0x9e93,	// (0x00044b90) form_midp_field_time_pane_t1

0x776d,	// (0x0004246a) wait_anim_pane_g2_copy1

0x9ea1,	// (0x00044b9e) form_midp_field_time_pane_t2

0x0001,

0x8e62,	// (0x00043b5f) aid_navinavi_width_2_pane

0xf863,	// (0x0004a560) form_midp_field_time_pane_t

0x7777,	// (0x00042474) input_focus_pane_cp052

0x7777,	// (0x00042474) bg_input_focus_pane_cp040

0x9e53,	// (0x00044b50) form_midp_gauge_slider_pane_t1

0x9e61,	// (0x00044b5e) form_midp_gauge_slider_pane_t2

0x9e6f,	// (0x00044b6c) form_midp_gauge_slider_pane_t3

0x9e7d,	// (0x00044b7a) form_midp_gauge_slider_pane_t4

0x0003,

0xf85a,	// (0x0004a557) form_midp_gauge_slider_pane_t

0x9e8b,	// (0x00044b88) form_midp_slider_pane

0x7857,	// (0x00042554) bg_input_focus_pane_cp041_ParamLimits

0x7857,	// (0x00042554) bg_input_focus_pane_cp041

0x9e20,	// (0x00044b1d) form_midp_gauge_wait_pane_t1_ParamLimits

0x9e20,	// (0x00044b1d) form_midp_gauge_wait_pane_t1

0x9e32,	// (0x00044b2f) form_midp_gauge_wait_pane_t2_ParamLimits

0x9e32,	// (0x00044b2f) form_midp_gauge_wait_pane_t2

0x0001,

0xf855,	// (0x0004a552) form_midp_gauge_wait_pane_t_ParamLimits

0xf855,	// (0x0004a552) form_midp_gauge_wait_pane_t

0x9e44,	// (0x00044b41) form_midp_wait_pane_ParamLimits

0x9e44,	// (0x00044b41) form_midp_wait_pane

0x9de8,	// (0x00044ae5) form_midp_image_pane_g1

0x9df1,	// (0x00044aee) form_midp_image_pane_t1

0x9e00,	// (0x00044afd) form_midp_image_pane_t2

0x9e0f,	// (0x00044b0c) form_midp_image_pane_t3

0x0002,

0xf84e,	// (0x0004a54b) form_midp_image_pane_t

0x9ddf,	// (0x00044adc) list_single_midp_pane_g1

0x5536,	// (0x00040233) list_single_midp_pane_t1

0x9dc5,	// (0x00044ac2) list_midp_form_item_pane_ParamLimits

0x9dc5,	// (0x00044ac2) list_midp_form_item_pane

0x8e0a,	// (0x00043b07) list_midp_form_item_pane_t1

0x8e19,	// (0x00043b16) midp_ticker_pane_g1

0x8e25,	// (0x00043b22) midp_ticker_pane_g2

0x0001,

0xf79d,	// (0x0004a49a) midp_ticker_pane_g

0x8e31,	// (0x00043b2e) midp_ticker_pane_t1

0xb1df,	// (0x00045edc) midp_editing_number_pane_t1

0xb1bd,	// (0x00045eba) midp_editing_number_pane

0xb1cc,	// (0x00045ec9) midp_ticker_pane

0xaf50,	// (0x00045c4d) ai_message_heading_pane

0x7777,	// (0x00042474) bg_popup_window_pane_cp14

0xaf58,	// (0x00045c55) listscroll_ai_message_pane

0xaed6,	// (0x00045bd3) ai_message_heading_pane_g1_ParamLimits

0xaed6,	// (0x00045bd3) ai_message_heading_pane_g1

0xaee2,	// (0x00045bdf) ai_message_heading_pane_g2_ParamLimits

0xaee2,	// (0x00045bdf) ai_message_heading_pane_g2

0xaef0,	// (0x00045bed) ai_message_heading_pane_g3_ParamLimits

0xaef0,	// (0x00045bed) ai_message_heading_pane_g3

0xaefc,	// (0x00045bf9) ai_message_heading_pane_g4_ParamLimits

0xaefc,	// (0x00045bf9) ai_message_heading_pane_g4

0x0003,

0xf98f,	// (0x0004a68c) ai_message_heading_pane_g_ParamLimits

0xf98f,	// (0x0004a68c) ai_message_heading_pane_g

0xaf08,	// (0x00045c05) ai_message_heading_pane_t1_ParamLimits

0xaf08,	// (0x00045c05) ai_message_heading_pane_t1

0xaf22,	// (0x00045c1f) ai_message_heading_pane_t2_ParamLimits

0xaf22,	// (0x00045c1f) ai_message_heading_pane_t2

0x0001,

0xf998,	// (0x0004a695) ai_message_heading_pane_t_ParamLimits

0xf998,	// (0x0004a695) ai_message_heading_pane_t

0xaf36,	// (0x00045c33) bg_popup_heading_pane_cp1_ParamLimits

0xaf36,	// (0x00045c33) bg_popup_heading_pane_cp1

0xaec4,	// (0x00045bc1) list_ai_message_pane_ParamLimits

0xaec4,	// (0x00045bc1) list_ai_message_pane

0x8260,	// (0x00042f5d) scroll_pane_cp10

0xae60,	// (0x00045b5d) list_ai_message_pane_g1

0xae68,	// (0x00045b65) list_ai_message_pane_g2

0x0001,

0xf96c,	// (0x0004a669) list_ai_message_pane_g

0xae70,	// (0x00045b6d) list_ai_message_pane_t1_ParamLimits

0xae70,	// (0x00045b6d) list_ai_message_pane_t1

0xae85,	// (0x00045b82) list_ai_message_pane_t2_ParamLimits

0xae85,	// (0x00045b82) list_ai_message_pane_t2

0xae9a,	// (0x00045b97) list_ai_message_pane_t3_ParamLimits

0xae9a,	// (0x00045b97) list_ai_message_pane_t3

0xaeaf,	// (0x00045bac) list_ai_message_pane_t4_ParamLimits

0xaeaf,	// (0x00045bac) list_ai_message_pane_t4

0x0003,

0xf971,	// (0x0004a66e) list_ai_message_pane_t_ParamLimits

0xf971,	// (0x0004a66e) list_ai_message_pane_t

0xae49,	// (0x00045b46) cell_ai_soft_ind_pane_ParamLimits

0xae49,	// (0x00045b46) cell_ai_soft_ind_pane

0x8e43,	// (0x00043b40) cell_ai_soft_ind_pane_g1_ParamLimits

0x8e43,	// (0x00043b40) cell_ai_soft_ind_pane_g1

0x7777,	// (0x00042474) grid_highlight_cp1

0x8e50,	// (0x00043b4d) text_secondary_cp56_ParamLimits

0x8e50,	// (0x00043b4d) text_secondary_cp56

0xae1e,	// (0x00045b1b) example_general_pane_ParamLimits

0xae1e,	// (0x00045b1b) example_general_pane

0xae2a,	// (0x00045b27) example_parent_pane_g1_ParamLimits

0xae2a,	// (0x00045b27) example_parent_pane_g1

0xae36,	// (0x00045b33) example_parent_pane_t1_ParamLimits

0xae36,	// (0x00045b33) example_parent_pane_t1

0x9489,	// (0x00044186) popup_preview_text_window_ParamLimits

0x9489,	// (0x00044186) popup_preview_text_window

0x8c6b,	// (0x00043968) list_single_pane_cp2_g4

0x7b89,	// (0x00042886) bg_popup_preview_window_pane_ParamLimits

0x7b89,	// (0x00042886) bg_popup_preview_window_pane

0xab51,	// (0x0004584e) popup_preview_text_window_t1_ParamLimits

0xab51,	// (0x0004584e) popup_preview_text_window_t1

0xab6f,	// (0x0004586c) popup_preview_text_window_t2_ParamLimits

0xab6f,	// (0x0004586c) popup_preview_text_window_t2

0xabb8,	// (0x000458b5) popup_preview_text_window_t3_ParamLimits

0xabb8,	// (0x000458b5) popup_preview_text_window_t3

0xabfd,	// (0x000458fa) popup_preview_text_window_t4_ParamLimits

0xabfd,	// (0x000458fa) popup_preview_text_window_t4

0x0004,

0xf940,	// (0x0004a63d) popup_preview_text_window_t_ParamLimits

0xf940,	// (0x0004a63d) popup_preview_text_window_t

0xac7b,	// (0x00045978) scroll_pane_cp11

0x9c02,	// (0x000448ff) bg_popup_preview_window_pane_g1

0xab05,	// (0x00045802) bg_popup_preview_window_pane_g2

0xab0f,	// (0x0004580c) bg_popup_preview_window_pane_g3

0xab19,	// (0x00045816) bg_popup_preview_window_pane_g4

0xab23,	// (0x00045820) bg_popup_preview_window_pane_g5

0xab2d,	// (0x0004582a) bg_popup_preview_window_pane_g6

0xab35,	// (0x00045832) bg_popup_preview_window_pane_g7

0xab3d,	// (0x0004583a) bg_popup_preview_window_pane_g8

0x5a5e,	// (0x0004075b) aid_popup_width_pane

0x9465,	// (0x00044162) popup_midp_note_alarm_window_ParamLimits

0x9465,	// (0x00044162) popup_midp_note_alarm_window

0x80d2,	// (0x00042dcf) data_form_pane_ParamLimits

0x5274,	// (0x0003ff71) form_field_data_pane_g1

0x527e,	// (0x0003ff7b) form_field_data_pane_t1_ParamLimits

0x80de,	// (0x00042ddb) input_focus_pane_ParamLimits

0x80ec,	// (0x00042de9) data_form_wide_pane_ParamLimits

0x5298,	// (0x0003ff95) form_field_data_wide_pane_g1

0x52a4,	// (0x0003ffa1) form_field_data_wide_pane_t1_ParamLimits

0x7e4f,	// (0x00042b4c) input_focus_pane_cp6_ParamLimits

0x820b,	// (0x00042f08) input_popup_find_pane_g1_ParamLimits

0x820b,	// (0x00042f08) input_popup_find_pane_g1

0x6082,	// (0x00040d7f) aid_navi_side_left_pane

0x6097,	// (0x00040d94) aid_navi_side_right_pane

0xa514,	// (0x00045211) bg_popup_window_pane_cp30_ParamLimits

0xa514,	// (0x00045211) bg_popup_window_pane_cp30

0xa58e,	// (0x0004528b) popup_midp_note_alarm_window_g1_ParamLimits

0xa58e,	// (0x0004528b) popup_midp_note_alarm_window_g1

0xa5be,	// (0x000452bb) popup_midp_note_alarm_window_t1_ParamLimits

0xa5be,	// (0x000452bb) popup_midp_note_alarm_window_t1

0xa65f,	// (0x0004535c) popup_midp_note_alarm_window_t2_ParamLimits

0xa65f,	// (0x0004535c) popup_midp_note_alarm_window_t2

0xa70d,	// (0x0004540a) popup_midp_note_alarm_window_t3_ParamLimits

0xa70d,	// (0x0004540a) popup_midp_note_alarm_window_t3

0xa73f,	// (0x0004543c) popup_midp_note_alarm_window_t4_ParamLimits

0xa73f,	// (0x0004543c) popup_midp_note_alarm_window_t4

0xa765,	// (0x00045462) popup_midp_note_alarm_window_t5_ParamLimits

0xa765,	// (0x00045462) popup_midp_note_alarm_window_t5

0x000a,

0xf8dd,	// (0x0004a5da) popup_midp_note_alarm_window_t_ParamLimits

0xf8dd,	// (0x0004a5da) popup_midp_note_alarm_window_t

0xa811,	// (0x0004550e) wait_bar_pane_cp1_ParamLimits

0xa811,	// (0x0004550e) wait_bar_pane_cp1

0x7777,	// (0x00042474) wait_anim_pane_copy1

0x7777,	// (0x00042474) wait_border_pane_copy1

0xa1f9,	// (0x00044ef6) wait_border_pane_g1_copy1

0x52be,	// (0x0003ffbb) form_field_popup_pane_g1

0x52c6,	// (0x0003ffc3) form_field_popup_pane_t1_ParamLimits

0x80de,	// (0x00042ddb) input_focus_pane_cp7_ParamLimits

0x8118,	// (0x00042e15) list_form_pane_ParamLimits

0x52e0,	// (0x0003ffdd) form_field_popup_wide_pane_g1

0x52e8,	// (0x0003ffe5) form_field_popup_wide_pane_t1_ParamLimits

0x80de,	// (0x00042ddb) input_focus_pane_cp8_ParamLimits

0x8124,	// (0x00042e21) list_form_wide_pane_ParamLimits

0xb370,	// (0x0004606d) aid_size_cell_graphic_pane

0x5374,	// (0x00040071) data_form_pane_t1_ParamLimits

0x558c,	// (0x00040289) data_form_wide_pane_t1_ParamLimits

0x97b0,	// (0x000444ad) bg_status_flat_pane

0x77b7,	// (0x000424b4) title_pane_t1_ParamLimits

0x781f,	// (0x0004251c) title_pane_t2_ParamLimits

0x7845,	// (0x00042542) title_pane_t3_ParamLimits

0xf59b,	// (0x0004a298) title_pane_t_ParamLimits

0x86e3,	// (0x000433e0) level_1_signal_ParamLimits

0x86f0,	// (0x000433ed) level_2_signal_ParamLimits

0x86fd,	// (0x000433fa) level_3_signal_ParamLimits

0x870a,	// (0x00043407) level_4_signal_ParamLimits

0x8717,	// (0x00043414) level_5_signal_ParamLimits

0x8724,	// (0x00043421) level_6_signal_ParamLimits

0x8731,	// (0x0004342e) level_7_signal_ParamLimits

0x86e3,	// (0x000433e0) level_1_battery_ParamLimits

0x86f0,	// (0x000433ed) level_2_battery_ParamLimits

0x86fd,	// (0x000433fa) level_3_battery_ParamLimits

0x870a,	// (0x00043407) level_4_battery_ParamLimits

0x8717,	// (0x00043414) level_5_battery_ParamLimits

0x8724,	// (0x00043421) level_6_battery_ParamLimits

0x8731,	// (0x0004342e) level_7_battery_ParamLimits

0xa419,	// (0x00045116) bg_status_flat_pane_g1

0xa421,	// (0x0004511e) bg_status_flat_pane_g2

0xa429,	// (0x00045126) bg_status_flat_pane_g3

0xa431,	// (0x0004512e) bg_status_flat_pane_g4

0xa439,	// (0x00045136) bg_status_flat_pane_g5

0xa441,	// (0x0004513e) bg_status_flat_pane_g6

0xa449,	// (0x00045146) bg_status_flat_pane_g7

0x786d,	// (0x0004256a) tabs_3_active_pane_t1_ParamLimits

0x786d,	// (0x0004256a) tabs_3_passive_pane_t1_ParamLimits

0x7887,	// (0x00042584) tabs_4_active_pane_t1_ParamLimits

0x7887,	// (0x00042584) tabs_4_1_passive_pane_t1_ParamLimits

0x82a2,	// (0x00042f9f) tabs_2_active_pane_t1_ParamLimits

0x82a2,	// (0x00042f9f) tabs_2_passive_pane_t1_ParamLimits

0x82b4,	// (0x00042fb1) bg_active_tab_pane_cp4_ParamLimits

0x82c2,	// (0x00042fbf) tabs_2_long_active_pane_t1_ParamLimits

0x82d5,	// (0x00042fd2) bg_passive_tab_pane_cp4_ParamLimits

0x6606,	// (0x00041303) list_single_midp_graphic_pane_t1_ParamLimits

0x82b4,	// (0x00042fb1) bg_active_tab_pane_cp5_ParamLimits

0x82e1,	// (0x00042fde) tabs_3_long_active_pane_t1_ParamLimits

0x82d5,	// (0x00042fd2) bg_passive_tab_pane_cp5_ParamLimits

0x6606,	// (0x00041303) list_single_midp_graphic_pane_t1

0x97b0,	// (0x000444ad) bg_status_flat_pane_ParamLimits

0x987b,	// (0x00044578) indicator_pane_cp2_ParamLimits

0x987b,	// (0x00044578) indicator_pane_cp2

0x99bd,	// (0x000446ba) navi_pane_srt_ParamLimits

0x99bd,	// (0x000446ba) navi_pane_srt

0x99e1,	// (0x000446de) popup_clock_digital_analogue_window_cp1

0x7937,	// (0x00042634) indicator_pane_t1

0x8d3c,	// (0x00043a39) copy_highlight_pane

0x8d3c,	// (0x00043a39) cursor_graphics_pane

0x8d3c,	// (0x00043a39) graphic_within_text_pane

0x8d3c,	// (0x00043a39) link_highlight_pane

0xac3e,	// (0x0004593b) popup_preview_text_window_t5_ParamLimits

0xac3e,	// (0x0004593b) popup_preview_text_window_t5

0x8e6c,	// (0x00043b69) cursor_digital_pane

0x8e6c,	// (0x00043b69) cursor_primary_pane

0x8e7d,	// (0x00043b7a) cursor_primary_small_pane

0x8e85,	// (0x00043b82) cursor_secondary_pane

0x8e8d,	// (0x00043b8a) cursor_title_pane

0x8e6c,	// (0x00043b69) link_highlight_digital_pane

0x8e74,	// (0x00043b71) link_highlight_primary_pane

0x8e7d,	// (0x00043b7a) link_highlight_primary_small_pane

0x8e85,	// (0x00043b82) link_highlight_secondary_pane

0x8e8d,	// (0x00043b8a) link_highlight_title_pane

0x8e6c,	// (0x00043b69) copy_highlight_digital_pane

0x8e6c,	// (0x00043b69) copy_highlight_primary_pane

0x8e7d,	// (0x00043b7a) copy_highlight_primary_small_pane

0x8e85,	// (0x00043b82) copy_highlight_secondary_pane

0x8e8d,	// (0x00043b8a) copy_highlight_title_pane

0x8e85,	// (0x00043b82) graphic_text_digital_pane

0xa4b7,	// (0x000451b4) graphic_text_primary_pane

0xa4c0,	// (0x000451bd) graphic_text_primary_small_pane

0x8e7d,	// (0x00043b7a) graphic_text_secondary_pane

0x8e6c,	// (0x00043b69) graphic_text_title_pane

0x8e95,	// (0x00043b92) cursor_primary_pane_g1

0xa4a9,	// (0x000451a6) cursor_text_primary_t1

0xa491,	// (0x0004518e) cursor_primary_small_pane_g1

0xa49b,	// (0x00045198) cursor_text_primary_small_t1

0xa479,	// (0x00045176) cursor_primary_small_pane_g1_copy1

0xa483,	// (0x00045180) cursor_text_primary_small_t1_copy1

0xa461,	// (0x0004515e) cursor_text_title_t1

0xa46f,	// (0x0004516c) cursor_title_pane_g1

0x8e95,	// (0x00043b92) cursor_digital_pane_g1

0x8e9f,	// (0x00043b9c) cursor_text_digital_t1

0x8ead,	// (0x00043baa) link_highlight_primary_pane_g1

0xa40a,	// (0x00045107) link_highlight_primary_pane_t1

0x8ead,	// (0x00043baa) link_highlight_primary_small_pane_g1

0x8eb5,	// (0x00043bb2) link_highlight_primary_small_pane_t1

0x8ec4,	// (0x00043bc1) link_highlight_secondary_pane_g1

0x8ecc,	// (0x00043bc9) link_highlight_secondary_pane_t1

0xa37e,	// (0x0004507b) link_highlight_title_pane_g1

0xa386,	// (0x00045083) link_highlight_title_pane_t1

0xa367,	// (0x00045064) link_highlight_digital_pane_g1

0xa36f,	// (0x0004506c) link_highlight_digital_pane_t1

0xa22f,	// (0x00044f2c) copy_highlight_primary_pane_g1

0xa246,	// (0x00044f43) copy_highlight_primary_pane_t1

0xa22f,	// (0x00044f2c) copy_highlight_primary_small_pane_g1

0xa237,	// (0x00044f34) copy_highlight_primary_small_pane_t1

0x8edb,	// (0x00043bd8) copy_highlight_secondary_pane_g1

0x8ee3,	// (0x00043be0) copy_highlight_secondary_pane_t1

0xa218,	// (0x00044f15) copy_highlight_title_pane_g1

0xa220,	// (0x00044f1d) copy_highlight_title_pane_t1

0xa22f,	// (0x00044f2c) copy_highlight_digital_pane_g1

0xb540,	// (0x0004623d) copy_highlight_digital_pane_t1

0xb494,	// (0x00046191) graphic_text_primary_pane_g1

0xb524,	// (0x00046221) graphic_text_primary_pane_t1

0xb532,	// (0x0004622f) graphic_text_primary_pane_t2

0x0001,

0xfa0c,	// (0x0004a709) graphic_text_primary_pane_t

0xb500,	// (0x000461fd) graphic_text_primary_small_pane_g1

0xb508,	// (0x00046205) graphic_text_primary_small_pane_t1

0xb516,	// (0x00046213) graphic_text_primary_small_pane_t2

0x0001,

0xfa07,	// (0x0004a704) graphic_text_primary_small_pane_t

0xb4dc,	// (0x000461d9) graphic_text_secondary_pane_g1

0xb4e4,	// (0x000461e1) graphic_text_secondary_pane_t1

0xb4f2,	// (0x000461ef) graphic_text_secondary_pane_t2

0x0001,

0xfa02,	// (0x0004a6ff) graphic_text_secondary_pane_t

0xb4b8,	// (0x000461b5) graphic_text_title_pane_g1

0xb4c0,	// (0x000461bd) graphic_text_title_pane_t1

0xb4ce,	// (0x000461cb) graphic_text_title_pane_t2

0x0001,

0xf9fd,	// (0x0004a6fa) graphic_text_title_pane_t

0xb494,	// (0x00046191) graphic_text_digital_pane_g1

0xb49c,	// (0x00046199) graphic_text_digital_pane_t1

0xb4aa,	// (0x000461a7) graphic_text_digital_pane_t2

0x0001,

0xf9f8,	// (0x0004a6f5) graphic_text_digital_pane_t

0x7857,	// (0x00042554) navi_icon_pane_srt_ParamLimits

0x7857,	// (0x00042554) navi_icon_pane_srt

0x7777,	// (0x00042474) navi_midp_pane_srt

0x7777,	// (0x00042474) navi_navi_pane_srt

0x7857,	// (0x00042554) navi_text_pane_srt_ParamLimits

0x7857,	// (0x00042554) navi_text_pane_srt

0xb45f,	// (0x0004615c) navi_navi_icon_text_pane_srt

0xb467,	// (0x00046164) navi_navi_pane_srt_g1_ParamLimits

0xb467,	// (0x00046164) navi_navi_pane_srt_g1

0xb479,	// (0x00046176) navi_navi_pane_srt_g2_ParamLimits

0xb479,	// (0x00046176) navi_navi_pane_srt_g2

0x0001,

0xf9f3,	// (0x0004a6f0) navi_navi_pane_srt_g_ParamLimits

0xf9f3,	// (0x0004a6f0) navi_navi_pane_srt_g

0xb48b,	// (0x00046188) navi_navi_tabs_pane_srt

0xb45f,	// (0x0004615c) navi_navi_text_pane_srt

0xb45f,	// (0x0004615c) navi_navi_volume_pane_srt

0xb450,	// (0x0004614d) navi_navi_text_pane_srt_t1

0x698c,	// (0x00041689) navi_navi_volume_pane_srt_g1

0x6994,	// (0x00041691) volume_small_pane_srt_ParamLimits

0x6994,	// (0x00041691) volume_small_pane_srt

0x6387,	// (0x00041084) volume_small_pane_srt_g1_ParamLimits

0x6387,	// (0x00041084) volume_small_pane_srt_g1

0x6397,	// (0x00041094) volume_small_pane_srt_g2_ParamLimits

0x6397,	// (0x00041094) volume_small_pane_srt_g2

0x63a8,	// (0x000410a5) volume_small_pane_srt_g3_ParamLimits

0x63a8,	// (0x000410a5) volume_small_pane_srt_g3

0x63b9,	// (0x000410b6) volume_small_pane_srt_g4_ParamLimits

0x63b9,	// (0x000410b6) volume_small_pane_srt_g4

0x63ca,	// (0x000410c7) volume_small_pane_srt_g5_ParamLimits

0x63ca,	// (0x000410c7) volume_small_pane_srt_g5

0x63db,	// (0x000410d8) volume_small_pane_srt_g6_ParamLimits

0x63db,	// (0x000410d8) volume_small_pane_srt_g6

0x63ec,	// (0x000410e9) volume_small_pane_srt_g7_ParamLimits

0x63ec,	// (0x000410e9) volume_small_pane_srt_g7

0x63fd,	// (0x000410fa) volume_small_pane_srt_g8_ParamLimits

0x63fd,	// (0x000410fa) volume_small_pane_srt_g8

0x640e,	// (0x0004110b) volume_small_pane_srt_g9_ParamLimits

0x640e,	// (0x0004110b) volume_small_pane_srt_g9

0x641f,	// (0x0004111c) volume_small_pane_srt_g10_ParamLimits

0x641f,	// (0x0004111c) volume_small_pane_srt_g10

0x0009,

0xf7a2,	// (0x0004a49f) volume_small_pane_srt_g_ParamLimits

0xf7a2,	// (0x0004a49f) volume_small_pane_srt_g

0x7c3e,	// (0x0004293b) query_popup_data_pane_cp2

0xb436,	// (0x00046133) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb436,	// (0x00046133) navi_navi_icon_text_pane_srt_t1

0xa4b7,	// (0x000451b4) navi_tabs_2_long_pane_srt

0xa4b7,	// (0x000451b4) navi_tabs_2_pane_srt

0xa4b7,	// (0x000451b4) navi_tabs_3_long_pane_srt

0xa4b7,	// (0x000451b4) navi_tabs_3_pane_srt

0xa4b7,	// (0x000451b4) navi_tabs_4_pane_srt

0x696c,	// (0x00041669) tabs_2_active_pane_srt_ParamLimits

0x696c,	// (0x00041669) tabs_2_active_pane_srt

0x697c,	// (0x00041679) tabs_2_passive_pane_srt_ParamLimits

0x697c,	// (0x00041679) tabs_2_passive_pane_srt

0x90c6,	// (0x00043dc3) bg_passive_tab_pane_cp1_srt_ParamLimits

0x90c6,	// (0x00043dc3) bg_passive_tab_pane_cp1_srt

0xb402,	// (0x000460ff) bg_passive_tab_pane_g1_cp1_srt

0x8985,	// (0x00043682) bg_passive_tab_pane_g2_cp1_srt

0xb40b,	// (0x00046108) bg_passive_tab_pane_g3_cp1_srt

0x7857,	// (0x00042554) bg_active_tab_pane_cp1_srt_ParamLimits

0x7857,	// (0x00042554) bg_active_tab_pane_cp1_srt

0xb414,	// (0x00046111) tabs_2_active_pane_srt_g1

0xb41c,	// (0x00046119) tabs_2_active_pane_srt_t1_ParamLimits

0xb41c,	// (0x00046119) tabs_2_active_pane_srt_t1

0xb402,	// (0x000460ff) bg_active_tab_pane_g1_cp1_srt

0x8985,	// (0x00043682) bg_active_tab_pane_g2_cp1_srt

0xb40b,	// (0x00046108) bg_active_tab_pane_g3_cp1_srt

0x6939,	// (0x00041636) tabs_3_active_pane_srt_ParamLimits

0x6939,	// (0x00041636) tabs_3_active_pane_srt

0x694a,	// (0x00041647) tabs_3_passive_pane_cp_srt_ParamLimits

0x694a,	// (0x00041647) tabs_3_passive_pane_cp_srt

0x695b,	// (0x00041658) tabs_3_passive_pane_srt_ParamLimits

0x695b,	// (0x00041658) tabs_3_passive_pane_srt

0x90c6,	// (0x00043dc3) bg_passive_tab_pane_cp2_srt_ParamLimits

0x90c6,	// (0x00043dc3) bg_passive_tab_pane_cp2_srt

0x8ef2,	// (0x00043bef) bg_passive_tab_pane_g1_cp2_srt

0x8985,	// (0x00043682) bg_passive_tab_pane_g2_cp2_srt

0x8efb,	// (0x00043bf8) bg_passive_tab_pane_g3_cp2_srt

0x7857,	// (0x00042554) bg_active_tab_pane_cp2_srt_ParamLimits

0x7857,	// (0x00042554) bg_active_tab_pane_cp2_srt

0xb3e8,	// (0x000460e5) tabs_3_active_pane_srt_g1

0xb3f0,	// (0x000460ed) tabs_3_active_pane_srt_t1_ParamLimits

0xb3f0,	// (0x000460ed) tabs_3_active_pane_srt_t1

0x8ef2,	// (0x00043bef) bg_active_tab_pane_g1_cp2_srt

0x8985,	// (0x00043682) bg_active_tab_pane_g2_cp2_srt

0x8efb,	// (0x00043bf8) bg_active_tab_pane_g3_cp2_srt

0x68f1,	// (0x000415ee) tabs_4_active_pane_srt_ParamLimits

0x68f1,	// (0x000415ee) tabs_4_active_pane_srt

0x6903,	// (0x00041600) tabs_4_passive_pane_cp2_srt_ParamLimits

0x6903,	// (0x00041600) tabs_4_passive_pane_cp2_srt

0x9050,	// (0x00043d4d) aid_size_cell_toolbar

0x82d5,	// (0x00042fd2) main_idle_act_pane_ParamLimits

0x928b,	// (0x00043f88) popup_large_graphic_colour_window_ParamLimits

0x9632,	// (0x0004432f) popup_toolbar_window_ParamLimits

0x9632,	// (0x0004432f) popup_toolbar_window

0xb202,	// (0x00045eff) list_single_graphic_2heading_pane_ParamLimits

0xb202,	// (0x00045eff) list_single_graphic_2heading_pane

0x8491,	// (0x0004318e) aid_size_cell_apps_grid_lsc_pane

0x84a3,	// (0x000431a0) aid_size_cell_apps_grid_prt_pane

0x90c6,	// (0x00043dc3) bg_wml_button_pane_cp1_ParamLimits

0x90c6,	// (0x00043dc3) bg_wml_button_pane_cp1

0x9ee0,	// (0x00044bdd) form_midp_field_text_pane_t1_ParamLimits

0x9cf4,	// (0x000449f1) input_focus_pane_cp050_ParamLimits

0x9f0b,	// (0x00044c08) list_midp_form_text_pane_ParamLimits

0x9ebd,	// (0x00044bba) input_focus_pane_cp051_ParamLimits

0x9ed1,	// (0x00044bce) list_midp_choice_pane_ParamLimits

0x9d85,	// (0x00044a82) list_single_2graphic_pane_cp3_ParamLimits

0x9d85,	// (0x00044a82) list_single_2graphic_pane_cp3

0x9d9e,	// (0x00044a9b) list_single_midp_graphic_pane_ParamLimits

0x9d9e,	// (0x00044a9b) list_single_midp_graphic_pane

0x547e,	// (0x0004017b) list_single_graphic_2heading_pane_g1_ParamLimits

0x547e,	// (0x0004017b) list_single_graphic_2heading_pane_g1

0x548a,	// (0x00040187) list_single_graphic_2heading_pane_g4_ParamLimits

0x548a,	// (0x00040187) list_single_graphic_2heading_pane_g4

0x5496,	// (0x00040193) list_single_graphic_2heading_pane_g5_ParamLimits

0x5496,	// (0x00040193) list_single_graphic_2heading_pane_g5

0x0002,

0xf7f5,	// (0x0004a4f2) list_single_graphic_2heading_pane_g_ParamLimits

0xf7f5,	// (0x0004a4f2) list_single_graphic_2heading_pane_g

0x54a2,	// (0x0004019f) list_single_graphic_2heading_pane_t1_ParamLimits

0x54a2,	// (0x0004019f) list_single_graphic_2heading_pane_t1

0x54b6,	// (0x000401b3) list_single_graphic_2heading_pane_t2_ParamLimits

0x54b6,	// (0x000401b3) list_single_graphic_2heading_pane_t2

0x54d2,	// (0x000401cf) list_single_graphic_2heading_pane_t3_ParamLimits

0x54d2,	// (0x000401cf) list_single_graphic_2heading_pane_t3

0x0002,

0xf7fc,	// (0x0004a4f9) list_single_graphic_2heading_pane_t_ParamLimits

0xf7fc,	// (0x0004a4f9) list_single_graphic_2heading_pane_t

0x9b40,	// (0x0004483d) bg_popup_sub_pane_cp2

0x9b6a,	// (0x00044867) grid_toobar_pane

0x657e,	// (0x0004127b) cell_toolbar_pane_ParamLimits

0x657e,	// (0x0004127b) cell_toolbar_pane

0x9ba6,	// (0x000448a3) cell_toolbar_pane_g1_ParamLimits

0x9ba6,	// (0x000448a3) cell_toolbar_pane_g1

0x9bba,	// (0x000448b7) cell_toolbar_pane_g2_ParamLimits

0x9bba,	// (0x000448b7) cell_toolbar_pane_g2

0x0001,

0xf80a,	// (0x0004a507) cell_toolbar_pane_g_ParamLimits

0xf80a,	// (0x0004a507) cell_toolbar_pane_g

0x9bdc,	// (0x000448d9) grid_highlight_pane_cp2_ParamLimits

0x9bdc,	// (0x000448d9) grid_highlight_pane_cp2

0x9bf6,	// (0x000448f3) toolbar_button_pane

0x9c02,	// (0x000448ff) toolbar_button_pane_g1

0x9c0a,	// (0x00044907) toolbar_button_pane_g2

0x9c12,	// (0x0004490f) toolbar_button_pane_g3

0x9c1a,	// (0x00044917) toolbar_button_pane_g4

0x9c22,	// (0x0004491f) toolbar_button_pane_g5

0x9c2a,	// (0x00044927) toolbar_button_pane_g6

0x9c32,	// (0x0004492f) toolbar_button_pane_g7

0x9c3a,	// (0x00044937) toolbar_button_pane_g8

0x9c42,	// (0x0004493f) toolbar_button_pane_g9

0x0009,

0xf80f,	// (0x0004a50c) toolbar_button_pane_g

0x65c2,	// (0x000412bf) list_single_2graphic_pane_g1_cp3_ParamLimits

0x65c2,	// (0x000412bf) list_single_2graphic_pane_g1_cp3

0x65ce,	// (0x000412cb) list_single_2graphic_pane_g2_cp3_ParamLimits

0x65ce,	// (0x000412cb) list_single_2graphic_pane_g2_cp3

0x8b66,	// (0x00043863) list_single_2graphic_pane_g3_cp3

0x65df,	// (0x000412dc) list_single_2graphic_pane_g4_cp3_ParamLimits

0x65df,	// (0x000412dc) list_single_2graphic_pane_g4_cp3

0x65eb,	// (0x000412e8) list_single_2graphic_pane_t1_cp3_ParamLimits

0x65eb,	// (0x000412e8) list_single_2graphic_pane_t1_cp3

0x8b5a,	// (0x00043857) list_single_midp_graphic_pane_g2_ParamLimits

0x8b5a,	// (0x00043857) list_single_midp_graphic_pane_g2

0x5466,	// (0x00040163) aid_zoom_text_primary

0x546e,	// (0x0004016b) aid_zoom_text_secondary

0x8faf,	// (0x00043cac) status_small_pane_g7_ParamLimits

0x8faf,	// (0x00043cac) status_small_pane_g7

0x8fd2,	// (0x00043ccf) status_small_pane_t1_ParamLimits

0x778e,	// (0x0004248b) title_pane_g2

0x0003,

0xf592,	// (0x0004a28f) title_pane_g

0x7ce7,	// (0x000429e4) aid_size_cell_colour_1_pane_ParamLimits

0x7ce7,	// (0x000429e4) aid_size_cell_colour_1_pane

0x7cfb,	// (0x000429f8) aid_size_cell_colour_2_pane_ParamLimits

0x7cfb,	// (0x000429f8) aid_size_cell_colour_2_pane

0x7d0f,	// (0x00042a0c) aid_size_cell_colour_3_pane_ParamLimits

0x7d0f,	// (0x00042a0c) aid_size_cell_colour_3_pane

0x7d23,	// (0x00042a20) aid_size_cell_colour_4_pane_ParamLimits

0x7d23,	// (0x00042a20) aid_size_cell_colour_4_pane

0x5fbe,	// (0x00040cbb) title_pane_stacon_g1_ParamLimits

0x5fbe,	// (0x00040cbb) title_pane_stacon_g1

0xa29d,	// (0x00044f9a) popup_note_wait_window_g3_ParamLimits

0xa29d,	// (0x00044f9a) popup_note_wait_window_g3

0xa314,	// (0x00045011) popup_note_wait_window_t5_ParamLimits

0xa314,	// (0x00045011) popup_note_wait_window_t5

0x7777,	// (0x00042474) main_feb_china_hwr_fs_writing_pane

0x9152,	// (0x00043e4f) popup_feb_china_hwr_fs_window_ParamLimits

0x9152,	// (0x00043e4f) popup_feb_china_hwr_fs_window

0x661c,	// (0x00041319) aid_size_cell_hwr_fs_ParamLimits

0x661c,	// (0x00041319) aid_size_cell_hwr_fs

0x9cf4,	// (0x000449f1) bg_popup_sub_pane_cp3_ParamLimits

0x9cf4,	// (0x000449f1) bg_popup_sub_pane_cp3

0x6631,	// (0x0004132e) grid_hwr_fs_pane_ParamLimits

0x6631,	// (0x0004132e) grid_hwr_fs_pane

0x6649,	// (0x00041346) linegrid_hwr_fs_pane_ParamLimits

0x6649,	// (0x00041346) linegrid_hwr_fs_pane

0x6659,	// (0x00041356) cell_hwr_fs_pane_ParamLimits

0x6659,	// (0x00041356) cell_hwr_fs_pane

0x9d00,	// (0x000449fd) linegrid_hwr_fs_pane_g1_ParamLimits

0x9d00,	// (0x000449fd) linegrid_hwr_fs_pane_g1

0x9d0c,	// (0x00044a09) linegrid_hwr_fs_pane_g2_ParamLimits

0x9d0c,	// (0x00044a09) linegrid_hwr_fs_pane_g2

0x9d1e,	// (0x00044a1b) linegrid_hwr_fs_pane_g3_ParamLimits

0x9d1e,	// (0x00044a1b) linegrid_hwr_fs_pane_g3

0x667d,	// (0x0004137a) linegrid_hwr_fs_pane_g4_ParamLimits

0x667d,	// (0x0004137a) linegrid_hwr_fs_pane_g4

0x669b,	// (0x00041398) linegrid_hwr_fs_pane_g5_ParamLimits

0x669b,	// (0x00041398) linegrid_hwr_fs_pane_g5

0x0004,

0xf83a,	// (0x0004a537) linegrid_hwr_fs_pane_g_ParamLimits

0xf83a,	// (0x0004a537) linegrid_hwr_fs_pane_g

0x9d2a,	// (0x00044a27) cell_hwr_fs_pane_g1_ParamLimits

0x9d2a,	// (0x00044a27) cell_hwr_fs_pane_g1

0x9a77,	// (0x00044774) cell_hwr_fs_pane_g2_ParamLimits

0x9a77,	// (0x00044774) cell_hwr_fs_pane_g2

0x9d40,	// (0x00044a3d) cell_hwr_fs_pane_g3_ParamLimits

0x9d40,	// (0x00044a3d) cell_hwr_fs_pane_g3

0x9d4d,	// (0x00044a4a) cell_hwr_fs_pane_g4_ParamLimits

0x9d4d,	// (0x00044a4a) cell_hwr_fs_pane_g4

0x0003,

0xf845,	// (0x0004a542) cell_hwr_fs_pane_g_ParamLimits

0xf845,	// (0x0004a542) cell_hwr_fs_pane_g

0x66b1,	// (0x000413ae) cell_hwr_fs_pane_t1

0x7777,	// (0x00042474) grid_highlight_pane_cp6

0x7777,	// (0x00042474) main_idle_act2_pane

0x8247,	// (0x00042f44) aid_inside_area_popup_secondary

0xa94d,	// (0x0004564a) aid_inside_area_window_primary_ParamLimits

0xa94d,	// (0x0004564a) aid_inside_area_window_primary

0xb54f,	// (0x0004624c) ai2_news_ticker_pane

0xb557,	// (0x00046254) aid_size_cell_ai1_link_ParamLimits

0xb557,	// (0x00046254) aid_size_cell_ai1_link

0xb571,	// (0x0004626e) popup_ai2_data_window_ParamLimits

0xb571,	// (0x0004626e) popup_ai2_data_window

0xb58f,	// (0x0004628c) popup_ai2_link_window_ParamLimits

0xb58f,	// (0x0004628c) popup_ai2_link_window

0x9cf4,	// (0x000449f1) bg_popup_sub_pane_cp4_ParamLimits

0x9cf4,	// (0x000449f1) bg_popup_sub_pane_cp4

0xb5a5,	// (0x000462a2) grid_ai2_link_pane_ParamLimits

0xb5a5,	// (0x000462a2) grid_ai2_link_pane

0xb5bc,	// (0x000462b9) popup_ai2_link_window_g1_ParamLimits

0xb5bc,	// (0x000462b9) popup_ai2_link_window_g1

0xb5c8,	// (0x000462c5) popup_ai2_link_window_g2_ParamLimits

0xb5c8,	// (0x000462c5) popup_ai2_link_window_g2

0x0001,

0xfa11,	// (0x0004a70e) popup_ai2_link_window_g_ParamLimits

0xfa11,	// (0x0004a70e) popup_ai2_link_window_g

0xb5d9,	// (0x000462d6) ai2_mp_button_pane

0xb5e1,	// (0x000462de) ai2_mp_volume_pane

0x9ebd,	// (0x00044bba) bg_popup_sub_pane_cp5_ParamLimits

0x9ebd,	// (0x00044bba) bg_popup_sub_pane_cp5

0xb5e9,	// (0x000462e6) heading_ai2_gene_pane_ParamLimits

0xb5e9,	// (0x000462e6) heading_ai2_gene_pane

0xb5f5,	// (0x000462f2) list_ai2_gene_pane_ParamLimits

0xb5f5,	// (0x000462f2) list_ai2_gene_pane

0xb67f,	// (0x0004637c) cell_ai2_link_pane_ParamLimits

0xb67f,	// (0x0004637c) cell_ai2_link_pane

0xb695,	// (0x00046392) cell_ai2_link_pane_g1

0x7777,	// (0x00042474) grid_highlight_pane_cp7

0x69a9,	// (0x000416a6) ai2_mp_volume_pane_g1

0xb768,	// (0x00046465) ai2_mp_volume_pane_g2

0xb6dd,	// (0x000463da) list_ai2_gene_pane_t1

0xb770,	// (0x0004646d) ai2_mp_volume_pane_g3

0x0002,

0xfa2a,	// (0x0004a727) ai2_mp_volume_pane_g

0x69b1,	// (0x000416ae) volume_small_pane_cp3

0xb778,	// (0x00046475) aid_size_cell_ai2_button

0xb780,	// (0x0004647d) grid_ai2_button_pane

0xb789,	// (0x00046486) cell_ai2_button_pane_ParamLimits

0xb789,	// (0x00046486) cell_ai2_button_pane

0x776d,	// (0x0004246a) cell_ai2_button_pane_g1

0x7777,	// (0x00042474) grid_highlight_pane_cp8

0xb728,	// (0x00046425) ai2_gene_pane_t1_ParamLimits

0xb728,	// (0x00046425) ai2_gene_pane_t1

0x9046,	// (0x00043d43) aid_height_parent_landscape

0xaff9,	// (0x00045cf6) aid_height_set_list

0xb00a,	// (0x00045d07) aid_size_parent

0xb370,	// (0x0004606d) aid_size_cell_graphic_pane_ParamLimits

0xb647,	// (0x00046344) popup_ai2_data_window_g1_ParamLimits

0xb647,	// (0x00046344) popup_ai2_data_window_g1

0xb653,	// (0x00046350) ai2_news_ticker_pane_g1

0xb65b,	// (0x00046358) ai2_news_ticker_pane_g2

0x0001,

0xfa16,	// (0x0004a713) ai2_news_ticker_pane_g

0xb663,	// (0x00046360) ai2_news_ticker_pane_t1

0xb671,	// (0x0004636e) ai2_news_ticker_pane_t2

0x0001,

0xfa1b,	// (0x0004a718) ai2_news_ticker_pane_t

0xb69e,	// (0x0004639b) heading_ai2_gene_pane_g1

0xb6a6,	// (0x000463a3) heading_ai2_gene_pane_t1_ParamLimits

0xb6a6,	// (0x000463a3) heading_ai2_gene_pane_t1

0xb6bb,	// (0x000463b8) list_highlight_pane_cp6

0xb6c3,	// (0x000463c0) ai2_gene_pane_ParamLimits

0xb6c3,	// (0x000463c0) ai2_gene_pane

0xb6eb,	// (0x000463e8) list_ai2_gene_pane_t2

0x0001,

0xfa20,	// (0x0004a71d) list_ai2_gene_pane_t

0xb6f9,	// (0x000463f6) list_highlight_pane_cp8_ParamLimits

0xb6f9,	// (0x000463f6) list_highlight_pane_cp8

0xb70a,	// (0x00046407) ai2_gene_pane_g1_ParamLimits

0xb70a,	// (0x00046407) ai2_gene_pane_g1

0xb71c,	// (0x00046419) ai2_gene_pane_g2_ParamLimits

0xb71c,	// (0x00046419) ai2_gene_pane_g2

0x0001,

0xfa25,	// (0x0004a722) ai2_gene_pane_g_ParamLimits

0xfa25,	// (0x0004a722) ai2_gene_pane_g

0x8074,	// (0x00042d71) scroll_pane_cp12

0x653d,	// (0x0004123a) control_pane_t3_ParamLimits

0x653d,	// (0x0004123a) control_pane_t3

0x8fc3,	// (0x00043cc0) status_small_pane_g8_ParamLimits

0x8fc3,	// (0x00043cc0) status_small_pane_g8

0x9250,	// (0x00043f4d) popup_find_window_ParamLimits

0x947b,	// (0x00044178) popup_note_image_window_ParamLimits

0x54ea,	// (0x000401e7) list_double2_graphic_pane_vc_g1_ParamLimits

0x54ea,	// (0x000401e7) list_double2_graphic_pane_vc_g1

0x8cad,	// (0x000439aa) list_double2_graphic_pane_vc_g2_ParamLimits

0x8cad,	// (0x000439aa) list_double2_graphic_pane_vc_g2

0x65ae,	// (0x000412ab) list_double2_graphic_pane_vc_g3_ParamLimits

0x65ae,	// (0x000412ab) list_double2_graphic_pane_vc_g3

0x0002,

0xf803,	// (0x0004a500) list_double2_graphic_pane_vc_g_ParamLimits

0xf803,	// (0x0004a500) list_double2_graphic_pane_vc_g

0x54f6,	// (0x000401f3) list_double2_graphic_pane_vc_t1_ParamLimits

0x54f6,	// (0x000401f3) list_double2_graphic_pane_vc_t1

0x8cad,	// (0x000439aa) list_single_heading_pane_vc_g1_ParamLimits

0x8cad,	// (0x000439aa) list_single_heading_pane_vc_g1

0x65ae,	// (0x000412ab) list_single_heading_pane_vc_g2_ParamLimits

0x65ae,	// (0x000412ab) list_single_heading_pane_vc_g2

0x0001,

0xf824,	// (0x0004a521) list_single_heading_pane_vc_g_ParamLimits

0xf824,	// (0x0004a521) list_single_heading_pane_vc_g

0x550c,	// (0x00040209) list_single_heading_pane_vc_t1_ParamLimits

0x550c,	// (0x00040209) list_single_heading_pane_vc_t1

0x5522,	// (0x0004021f) list_single_heading_pane_vc_t2_ParamLimits

0x5522,	// (0x0004021f) list_single_heading_pane_vc_t2

0x0001,

0xf829,	// (0x0004a526) list_single_heading_pane_vc_t_ParamLimits

0xf829,	// (0x0004a526) list_single_heading_pane_vc_t

0x9c4a,	// (0x00044947) list_setting_number_pane_vc_g1_ParamLimits

0x9c4a,	// (0x00044947) list_setting_number_pane_vc_g1

0x9c56,	// (0x00044953) list_setting_number_pane_vc_g2_ParamLimits

0x9c56,	// (0x00044953) list_setting_number_pane_vc_g2

0x0001,

0xf82e,	// (0x0004a52b) list_setting_number_pane_vc_g_ParamLimits

0xf82e,	// (0x0004a52b) list_setting_number_pane_vc_g

0x9c62,	// (0x0004495f) list_setting_number_pane_vc_t1_ParamLimits

0x9c62,	// (0x0004495f) list_setting_number_pane_vc_t1

0x9c76,	// (0x00044973) list_setting_number_pane_vc_t2_ParamLimits

0x9c76,	// (0x00044973) list_setting_number_pane_vc_t2

0x9c92,	// (0x0004498f) list_setting_number_pane_vc_t3_ParamLimits

0x9c92,	// (0x0004498f) list_setting_number_pane_vc_t3

0x0002,

0xf833,	// (0x0004a530) list_setting_number_pane_vc_t_ParamLimits

0xf833,	// (0x0004a530) list_setting_number_pane_vc_t

0x9cba,	// (0x000449b7) set_value_pane_vc_ParamLimits

0x9cba,	// (0x000449b7) set_value_pane_vc

0xb202,	// (0x00045eff) list_double2_graphic_pane_vc_ParamLimits

0xb202,	// (0x00045eff) list_double2_graphic_pane_vc

0xb202,	// (0x00045eff) list_double2_large_graphic_pane_vc_ParamLimits

0xb202,	// (0x00045eff) list_double2_large_graphic_pane_vc

0xb202,	// (0x00045eff) list_double2_pane_vc_ParamLimits

0xb202,	// (0x00045eff) list_double2_pane_vc

0xb202,	// (0x00045eff) list_double_graphic_heading_pane_vc_ParamLimits

0xb202,	// (0x00045eff) list_double_graphic_heading_pane_vc

0xb202,	// (0x00045eff) list_double_graphic_pane_vc_ParamLimits

0xb202,	// (0x00045eff) list_double_graphic_pane_vc

0xb202,	// (0x00045eff) list_double_heading_pane_vc_ParamLimits

0xb202,	// (0x00045eff) list_double_heading_pane_vc

0xb202,	// (0x00045eff) list_double_large_graphic_pane_vc_ParamLimits

0xb202,	// (0x00045eff) list_double_large_graphic_pane_vc

0xb202,	// (0x00045eff) list_double_number_pane_vc_ParamLimits

0xb202,	// (0x00045eff) list_double_number_pane_vc

0xb202,	// (0x00045eff) list_double_pane_vc_ParamLimits

0xb202,	// (0x00045eff) list_double_pane_vc

0xb202,	// (0x00045eff) list_double_time_pane_vc_ParamLimits

0xb202,	// (0x00045eff) list_double_time_pane_vc

0xb202,	// (0x00045eff) list_setting_number_pane_vc_ParamLimits

0xb202,	// (0x00045eff) list_setting_number_pane_vc

0xb202,	// (0x00045eff) list_setting_pane_vc_ParamLimits

0xb202,	// (0x00045eff) list_setting_pane_vc

0xb202,	// (0x00045eff) list_single_graphic_heading_pane_vc_ParamLimits

0xb202,	// (0x00045eff) list_single_graphic_heading_pane_vc

0xb202,	// (0x00045eff) list_single_heading_pane_vc_ParamLimits

0xb202,	// (0x00045eff) list_single_heading_pane_vc

0xb216,	// (0x00045f13) list_single_number_heading_pane_vc_ParamLimits

0xb216,	// (0x00045f13) list_single_number_heading_pane_vc

0x54ea,	// (0x000401e7) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x54ea,	// (0x000401e7) list_double_graphic_heading_pane_vc_g1

0x69ba,	// (0x000416b7) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x69ba,	// (0x000416b7) list_double_graphic_heading_pane_vc_g2

0x69c6,	// (0x000416c3) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x69c6,	// (0x000416c3) list_double_graphic_heading_pane_vc_g3

0x0002,

0xfa31,	// (0x0004a72e) list_double_graphic_heading_pane_vc_g_ParamLimits

0xfa31,	// (0x0004a72e) list_double_graphic_heading_pane_vc_g

0x55d8,	// (0x000402d5) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x55d8,	// (0x000402d5) list_double_graphic_heading_pane_vc_t1

0x550c,	// (0x00040209) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x550c,	// (0x00040209) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa38,	// (0x0004a735) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa38,	// (0x0004a735) list_double_graphic_heading_pane_vc_t

0x9c4a,	// (0x00044947) list_setting_pane_vc_g1_ParamLimits

0x9c4a,	// (0x00044947) list_setting_pane_vc_g1

0x9c56,	// (0x00044953) list_setting_pane_vc_g2_ParamLimits

0x9c56,	// (0x00044953) list_setting_pane_vc_g2

0x0001,

0xf82e,	// (0x0004a52b) list_setting_pane_vc_g_ParamLimits

0xf82e,	// (0x0004a52b) list_setting_pane_vc_g

0xb9c5,	// (0x000466c2) list_setting_pane_vc_t1_ParamLimits

0xb9c5,	// (0x000466c2) list_setting_pane_vc_t1

0xb9d9,	// (0x000466d6) list_setting_pane_vc_t2_ParamLimits

0xb9d9,	// (0x000466d6) list_setting_pane_vc_t2

0x0001,

0xfa66,	// (0x0004a763) list_setting_pane_vc_t_ParamLimits

0xfa66,	// (0x0004a763) list_setting_pane_vc_t

0x9cba,	// (0x000449b7) set_value_pane_cp_vc_ParamLimits

0x9cba,	// (0x000449b7) set_value_pane_cp_vc

0x8cad,	// (0x000439aa) list_single_number_heading_pane_vc_g1_ParamLimits

0x8cad,	// (0x000439aa) list_single_number_heading_pane_vc_g1

0x65ae,	// (0x000412ab) list_single_number_heading_pane_vc_g2_ParamLimits

0x65ae,	// (0x000412ab) list_single_number_heading_pane_vc_g2

0x0001,

0xf824,	// (0x0004a521) list_single_number_heading_pane_vc_g_ParamLimits

0xf824,	// (0x0004a521) list_single_number_heading_pane_vc_g

0x550c,	// (0x00040209) list_single_number_heading_pane_vc_t1_ParamLimits

0x550c,	// (0x00040209) list_single_number_heading_pane_vc_t1

0x55ec,	// (0x000402e9) list_single_number_heading_pane_vc_t2_ParamLimits

0x55ec,	// (0x000402e9) list_single_number_heading_pane_vc_t2

0x5600,	// (0x000402fd) list_single_number_heading_pane_vc_t3_ParamLimits

0x5600,	// (0x000402fd) list_single_number_heading_pane_vc_t3

0x0002,

0xfa6b,	// (0x0004a768) list_single_number_heading_pane_vc_t_ParamLimits

0xfa6b,	// (0x0004a768) list_single_number_heading_pane_vc_t

0x54ea,	// (0x000401e7) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x54ea,	// (0x000401e7) list_single_graphic_heading_pane_vc_g1

0x8cad,	// (0x000439aa) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x8cad,	// (0x000439aa) list_single_graphic_heading_pane_vc_g4

0x65ae,	// (0x000412ab) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x65ae,	// (0x000412ab) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf803,	// (0x0004a500) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf803,	// (0x0004a500) list_single_graphic_heading_pane_vc_g

0x550c,	// (0x00040209) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x550c,	// (0x00040209) list_single_graphic_heading_pane_vc_t1

0x5612,	// (0x0004030f) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x5612,	// (0x0004030f) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa72,	// (0x0004a76f) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa72,	// (0x0004a76f) list_single_graphic_heading_pane_vc_t

0x8cad,	// (0x000439aa) list_double2_pane_vc_g1_ParamLimits

0x8cad,	// (0x000439aa) list_double2_pane_vc_g1

0x65ae,	// (0x000412ab) list_double2_pane_vc_g2_ParamLimits

0x65ae,	// (0x000412ab) list_double2_pane_vc_g2

0x0001,

0xf824,	// (0x0004a521) list_double2_pane_vc_g_ParamLimits

0xf824,	// (0x0004a521) list_double2_pane_vc_g

0x5626,	// (0x00040323) list_double2_pane_vc_t1_ParamLimits

0x5626,	// (0x00040323) list_double2_pane_vc_t1

0x69d2,	// (0x000416cf) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x69d2,	// (0x000416cf) list_double2_large_graphic_pane_vc_g1

0x8cad,	// (0x000439aa) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x8cad,	// (0x000439aa) list_double2_large_graphic_pane_vc_g2

0x65ae,	// (0x000412ab) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x65ae,	// (0x000412ab) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa77,	// (0x0004a774) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa77,	// (0x0004a774) list_double2_large_graphic_pane_vc_g

0x563c,	// (0x00040339) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x563c,	// (0x00040339) list_double2_large_graphic_pane_vc_t1

0x69de,	// (0x000416db) list_double_time_pane_vc_g1_ParamLimits

0x69de,	// (0x000416db) list_double_time_pane_vc_g1

0x69ea,	// (0x000416e7) list_double_time_pane_vc_g2_ParamLimits

0x69ea,	// (0x000416e7) list_double_time_pane_vc_g2

0x0001,

0xfa7e,	// (0x0004a77b) list_double_time_pane_vc_g_ParamLimits

0xfa7e,	// (0x0004a77b) list_double_time_pane_vc_g

0x5652,	// (0x0004034f) list_double_time_pane_vc_t1_ParamLimits

0x5652,	// (0x0004034f) list_double_time_pane_vc_t1

0x566b,	// (0x00040368) list_double_time_pane_vc_t2_ParamLimits

0x566b,	// (0x00040368) list_double_time_pane_vc_t2

0x56ab,	// (0x000403a8) list_double_time_pane_vc_t3_ParamLimits

0x56ab,	// (0x000403a8) list_double_time_pane_vc_t3

0x56c3,	// (0x000403c0) list_double_time_pane_vc_t4_ParamLimits

0x56c3,	// (0x000403c0) list_double_time_pane_vc_t4

0x0003,

0xfa83,	// (0x0004a780) list_double_time_pane_vc_t_ParamLimits

0xfa83,	// (0x0004a780) list_double_time_pane_vc_t

0x8cad,	// (0x000439aa) list_double_pane_vc_g1_ParamLimits

0x8cad,	// (0x000439aa) list_double_pane_vc_g1

0x65ae,	// (0x000412ab) list_double_pane_vc_g2_ParamLimits

0x65ae,	// (0x000412ab) list_double_pane_vc_g2

0x0001,

0xf824,	// (0x0004a521) list_double_pane_vc_g_ParamLimits

0xf824,	// (0x0004a521) list_double_pane_vc_g

0x56d7,	// (0x000403d4) list_double_pane_vc_t1_ParamLimits

0x56d7,	// (0x000403d4) list_double_pane_vc_t1

0x56e9,	// (0x000403e6) list_double_pane_vc_t2_ParamLimits

0x56e9,	// (0x000403e6) list_double_pane_vc_t2

0x0001,

0xfa8c,	// (0x0004a789) list_double_pane_vc_t_ParamLimits

0xfa8c,	// (0x0004a789) list_double_pane_vc_t

0x8cad,	// (0x000439aa) list_double_number_pane_vc_g1_ParamLimits

0x8cad,	// (0x000439aa) list_double_number_pane_vc_g1

0x65ae,	// (0x000412ab) list_double_number_pane_vc_g2_ParamLimits

0x65ae,	// (0x000412ab) list_double_number_pane_vc_g2

0x0001,

0xf824,	// (0x0004a521) list_double_number_pane_vc_g_ParamLimits

0xf824,	// (0x0004a521) list_double_number_pane_vc_g

0x5701,	// (0x000403fe) list_double_number_pane_vc_t1_ParamLimits

0x5701,	// (0x000403fe) list_double_number_pane_vc_t1

0x5715,	// (0x00040412) list_double_number_pane_vc_t2_ParamLimits

0x5715,	// (0x00040412) list_double_number_pane_vc_t2

0x56e9,	// (0x000403e6) list_double_number_pane_vc_t3_ParamLimits

0x56e9,	// (0x000403e6) list_double_number_pane_vc_t3

0x0002,

0xfa91,	// (0x0004a78e) list_double_number_pane_vc_t_ParamLimits

0xfa91,	// (0x0004a78e) list_double_number_pane_vc_t

0x69f6,	// (0x000416f3) list_double_large_graphic_pane_vc_g1_ParamLimits

0x69f6,	// (0x000416f3) list_double_large_graphic_pane_vc_g1

0x6a02,	// (0x000416ff) list_double_large_graphic_pane_vc_g2_ParamLimits

0x6a02,	// (0x000416ff) list_double_large_graphic_pane_vc_g2

0x65ae,	// (0x000412ab) list_double_large_graphic_pane_vc_g3_ParamLimits

0x65ae,	// (0x000412ab) list_double_large_graphic_pane_vc_g3

0x5727,	// (0x00040424) list_double_large_graphic_pane_vc_g4_ParamLimits

0x5727,	// (0x00040424) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa98,	// (0x0004a795) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa98,	// (0x0004a795) list_double_large_graphic_pane_vc_g

0x5733,	// (0x00040430) list_double_large_graphic_pane_vc_t1_ParamLimits

0x5733,	// (0x00040430) list_double_large_graphic_pane_vc_t1

0x5745,	// (0x00040442) list_double_large_graphic_pane_vc_t2_ParamLimits

0x5745,	// (0x00040442) list_double_large_graphic_pane_vc_t2

0x0001,

0xfaa1,	// (0x0004a79e) list_double_large_graphic_pane_vc_t_ParamLimits

0xfaa1,	// (0x0004a79e) list_double_large_graphic_pane_vc_t

0x69ba,	// (0x000416b7) list_double_heading_pane_vc_g1_ParamLimits

0x69ba,	// (0x000416b7) list_double_heading_pane_vc_g1

0x69c6,	// (0x000416c3) list_double_heading_pane_vc_g2_ParamLimits

0x69c6,	// (0x000416c3) list_double_heading_pane_vc_g2

0x0001,

0xfaa6,	// (0x0004a7a3) list_double_heading_pane_vc_g_ParamLimits

0xfaa6,	// (0x0004a7a3) list_double_heading_pane_vc_g

0x575e,	// (0x0004045b) list_double_heading_pane_vc_t1_ParamLimits

0x575e,	// (0x0004045b) list_double_heading_pane_vc_t1

0x550c,	// (0x00040209) list_double_heading_pane_vc_t2_ParamLimits

0x550c,	// (0x00040209) list_double_heading_pane_vc_t2

0x0001,

0xfaab,	// (0x0004a7a8) list_double_heading_pane_vc_t_ParamLimits

0xfaab,	// (0x0004a7a8) list_double_heading_pane_vc_t

0x54ea,	// (0x000401e7) list_double_graphic_pane_vc_g1_ParamLimits

0x54ea,	// (0x000401e7) list_double_graphic_pane_vc_g1

0x6a11,	// (0x0004170e) list_double_graphic_pane_vc_g2_ParamLimits

0x6a11,	// (0x0004170e) list_double_graphic_pane_vc_g2

0x6a20,	// (0x0004171d) list_double_graphic_pane_vc_g3_ParamLimits

0x6a20,	// (0x0004171d) list_double_graphic_pane_vc_g3

0x0002,

0xfab0,	// (0x0004a7ad) list_double_graphic_pane_vc_g_ParamLimits

0xfab0,	// (0x0004a7ad) list_double_graphic_pane_vc_g

0x5772,	// (0x0004046f) list_double_graphic_pane_vc_t1_ParamLimits

0x5772,	// (0x0004046f) list_double_graphic_pane_vc_t1

0x56e9,	// (0x000403e6) list_double_graphic_pane_vc_t2_ParamLimits

0x56e9,	// (0x000403e6) list_double_graphic_pane_vc_t2

0x0001,

0xfab7,	// (0x0004a7b4) list_double_graphic_pane_vc_t_ParamLimits

0xfab7,	// (0x0004a7b4) list_double_graphic_pane_vc_t

0x5a6a,	// (0x00040767) aid_size_cell_fastswap

0x5a72,	// (0x0004076f) aid_size_cell_touch_ParamLimits

0x5a72,	// (0x0004076f) aid_size_cell_touch

0x5cd3,	// (0x000409d0) popup_fast_swap_wide_window_ParamLimits

0x5cd3,	// (0x000409d0) popup_fast_swap_wide_window

0x5de9,	// (0x00040ae6) touch_pane_ParamLimits

0x5de9,	// (0x00040ae6) touch_pane

0x80ca,	// (0x00042dc7) button_value_adjust_pane_cp2

0x51b4,	// (0x0003feb1) button_value_adjust_pane_cp4

0x51dc,	// (0x0003fed9) form_field_data_pane_cp2

0x5201,	// (0x0003fefe) form_field_data_wide_pane_cp2

0x8563,	// (0x00043260) bg_scroll_pane_ParamLimits

0x6123,	// (0x00040e20) scroll_handle_pane_ParamLimits

0x6137,	// (0x00040e34) scroll_sc2_down_pane_ParamLimits

0x6137,	// (0x00040e34) scroll_sc2_down_pane

0x8594,	// (0x00043291) scroll_sc2_up_pane_ParamLimits

0x8594,	// (0x00043291) scroll_sc2_up_pane

0xbe24,	// (0x00046b21) grid_wheel_folder_pane_g1_ParamLimits

0xbe24,	// (0x00046b21) grid_wheel_folder_pane_g1

0x631f,	// (0x0004101c) clock_nsta_pane_cp2_ParamLimits

0x631f,	// (0x0004101c) clock_nsta_pane_cp2

0x8d44,	// (0x00043a41) listscroll_midp_pane_ParamLimits

0x8d50,	// (0x00043a4d) midp_canvas_pane

0x903e,	// (0x00043d3b) nsta_clock_indic_pane

0x9098,	// (0x00043d95) listscroll_form_pane_vc

0x90b4,	// (0x00043db1) listscroll_set_pane_vc_ParamLimits

0x90b4,	// (0x00043db1) listscroll_set_pane_vc

0x97cc,	// (0x000444c9) clock_nsta_pane

0x9849,	// (0x00044546) indicator_nsta_pane

0x9b40,	// (0x0004483d) bg_popup_sub_pane_cp2_ParamLimits

0x9b54,	// (0x00044851) find_pane_cp2_ParamLimits

0x9b54,	// (0x00044851) find_pane_cp2

0x9b6a,	// (0x00044867) grid_toobar_pane_ParamLimits

0x9cc8,	// (0x000449c5) list_form_gen_pane_vc_ParamLimits

0x9cc8,	// (0x000449c5) list_form_gen_pane_vc

0x9cde,	// (0x000449db) scroll_pane_cp8_vc_ParamLimits

0x9cde,	// (0x000449db) scroll_pane_cp8_vc

0x9d5a,	// (0x00044a57) data_form_wide_pane_vc_ParamLimits

0x9d5a,	// (0x00044a57) data_form_wide_pane_vc

0x9d66,	// (0x00044a63) form_field_data_wide_pane_vc_g1

0x9d6e,	// (0x00044a6b) form_field_data_wide_pane_vc_t1_ParamLimits

0x9d6e,	// (0x00044a6b) form_field_data_wide_pane_vc_t1

0x80de,	// (0x00042ddb) input_focus_pane_cp6_vc_ParamLimits

0x80de,	// (0x00042ddb) input_focus_pane_cp6_vc

0xa048,	// (0x00044d45) list_midp_pane_ParamLimits

0xa054,	// (0x00044d51) scroll_pane_cp16_ParamLimits

0xa054,	// (0x00044d51) scroll_pane_cp16

0xa094,	// (0x00044d91) button_value_adjust_pane_ParamLimits

0xa094,	// (0x00044d91) button_value_adjust_pane

0xb01c,	// (0x00045d19) button_value_adjust_pane_cp6_ParamLimits

0xb01c,	// (0x00045d19) button_value_adjust_pane_cp6

0xb176,	// (0x00045e73) settings_code_pane_cp_ParamLimits

0xb176,	// (0x00045e73) settings_code_pane_cp

0x776d,	// (0x0004246a) cell_touch_pane_g1

0x776d,	// (0x0004246a) cell_touch_pane_g2

0x0001,

0xf74c,	// (0x0004a449) cell_touch_pane_g

0xb79b,	// (0x00046498) cell_touch_pane_cp_ParamLimits

0xb79b,	// (0x00046498) cell_touch_pane_cp

0xb7ab,	// (0x000464a8) cell_touch_pane_ParamLimits

0xb7ab,	// (0x000464a8) cell_touch_pane

0x776d,	// (0x0004246a) scroll_sc2_down_pane_g1

0x776d,	// (0x0004246a) scroll_sc2_up_pane_g1

0x7777,	// (0x00042474) bg_set_opt_pane_cp4_vc

0xb7bc,	// (0x000464b9) list_set_graphic_pane_vc_g1_ParamLimits

0xb7bc,	// (0x000464b9) list_set_graphic_pane_vc_g1

0xb7c8,	// (0x000464c5) list_set_graphic_pane_vc_g2_ParamLimits

0xb7c8,	// (0x000464c5) list_set_graphic_pane_vc_g2

0x0001,

0xfa3d,	// (0x0004a73a) list_set_graphic_pane_vc_g_ParamLimits

0xfa3d,	// (0x0004a73a) list_set_graphic_pane_vc_g

0xb7d4,	// (0x000464d1) text_primary_small_cp13_vc_ParamLimits

0xb7d4,	// (0x000464d1) text_primary_small_cp13_vc

0xb7ec,	// (0x000464e9) list_set_graphic_pane_vc_ParamLimits

0xb7ec,	// (0x000464e9) list_set_graphic_pane_vc

0x7777,	// (0x00042474) input_focus_pane_cp2_vc

0x776d,	// (0x0004246a) setting_code_pane_vc_g1

0xb800,	// (0x000464fd) setting_code_pane_vc_t1

0xb80e,	// (0x0004650b) set_text_pane_vc_t1_ParamLimits

0xb80e,	// (0x0004650b) set_text_pane_vc_t1

0x7777,	// (0x00042474) input_focus_pane_cp1_vc

0xb82c,	// (0x00046529) list_set_text_pane_vc

0x776d,	// (0x0004246a) setting_text_pane_vc_g1

0x7777,	// (0x00042474) bg_set_opt_pane_cp2_vc

0xb836,	// (0x00046533) setting_slider_graphic_pane_vc_g1

0xb83e,	// (0x0004653b) setting_slider_graphic_pane_vc_t1

0xb84c,	// (0x00046549) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa42,	// (0x0004a73f) setting_slider_graphic_pane_vc_t

0xb85a,	// (0x00046557) slider_set_pane_cp_vc

0xb862,	// (0x0004655f) slider_set_pane_vc_g1

0xb86b,	// (0x00046568) slider_set_pane_vc_g2

0x0006,

0xfa47,	// (0x0004a744) slider_set_pane_vc_g

0x8145,	// (0x00042e42) set_opt_bg_pane_g1_copy1

0x814d,	// (0x00042e4a) set_opt_bg_pane_g2_copy1

0xb897,	// (0x00046594) set_opt_bg_pane_g3_copy1

0x815d,	// (0x00042e5a) set_opt_bg_pane_g4_copy1

0x8165,	// (0x00042e62) set_opt_bg_pane_g5_copy1

0x816d,	// (0x00042e6a) set_opt_bg_pane_g6_copy1

0xb8a1,	// (0x0004659e) set_opt_bg_pane_g7_copy1

0xb8ab,	// (0x000465a8) set_opt_bg_pane_g8_copy1

0xb8b5,	// (0x000465b2) set_opt_bg_pane_g9_copy1

0x7777,	// (0x00042474) bg_set_opt_pane_cp_vc

0xb8bf,	// (0x000465bc) setting_slider_pane_vc_t1

0xb83e,	// (0x0004653b) setting_slider_pane_vc_t2

0xb84c,	// (0x00046549) setting_slider_pane_vc_t3

0x0002,

0xfa56,	// (0x0004a753) setting_slider_pane_vc_t

0xb85a,	// (0x00046557) slider_set_pane_vc

0x66bf,	// (0x000413bc) volume_set_pane_vc_g1

0x66c8,	// (0x000413c5) volume_set_pane_vc_g2

0x66d1,	// (0x000413ce) volume_set_pane_vc_g3

0x66da,	// (0x000413d7) volume_set_pane_vc_g4

0x66e3,	// (0x000413e0) volume_set_pane_vc_g5

0x66ec,	// (0x000413e9) volume_set_pane_vc_g6

0x66f5,	// (0x000413f2) volume_set_pane_vc_g7

0x66fe,	// (0x000413fb) volume_set_pane_vc_g8

0x6707,	// (0x00041404) volume_set_pane_vc_g9

0x6710,	// (0x0004140d) volume_set_pane_vc_g10

0x0009,

0xf8f4,	// (0x0004a5f1) volume_set_pane_vc_g

0xb8ce,	// (0x000465cb) volume_set_pane_vc

0xb8d6,	// (0x000465d3) button_value_adjust_pane_cp1_vc

0xb8e0,	// (0x000465dd) list_highlight_pane_cp2_vc

0xb8e9,	// (0x000465e6) list_set_pane_vc_ParamLimits

0xb8e9,	// (0x000465e6) list_set_pane_vc

0xb953,	// (0x00046650) main_pane_set_vc_t1_ParamLimits

0xb953,	// (0x00046650) main_pane_set_vc_t1

0xb968,	// (0x00046665) main_pane_set_vc_t2_ParamLimits

0xb968,	// (0x00046665) main_pane_set_vc_t2

0xb97a,	// (0x00046677) main_pane_set_vc_t3_ParamLimits

0xb97a,	// (0x00046677) main_pane_set_vc_t3

0xb98e,	// (0x0004668b) main_pane_set_vc_t4_ParamLimits

0xb98e,	// (0x0004668b) main_pane_set_vc_t4

0x0003,

0xfa5d,	// (0x0004a75a) main_pane_set_vc_t_ParamLimits

0xfa5d,	// (0x0004a75a) main_pane_set_vc_t

0xb9a2,	// (0x0004669f) setting_code_pane_vc_ParamLimits

0xb9a2,	// (0x0004669f) setting_code_pane_vc

0xb9b3,	// (0x000466b0) setting_slider_graphic_pane_vc

0xb9b3,	// (0x000466b0) setting_slider_pane_vc

0xb9b3,	// (0x000466b0) setting_text_pane_vc

0xb9b3,	// (0x000466b0) setting_volume_pane_vc

0xb9bd,	// (0x000466ba) scroll_pane_cp121_vc

0x80b8,	// (0x00042db5) set_content_pane_vc

0xb9fb,	// (0x000466f8) button_value_adjust_pane_g1

0xba04,	// (0x00046701) button_value_adjust_pane_g2

0x0001,

0xfabc,	// (0x0004a7b9) button_value_adjust_pane_g

0xba0d,	// (0x0004670a) form_field_slider_wide_pane_vc_t1_ParamLimits

0xba0d,	// (0x0004670a) form_field_slider_wide_pane_vc_t1

0xba21,	// (0x0004671e) form_field_slider_wide_pane_vc_t2_ParamLimits

0xba21,	// (0x0004671e) form_field_slider_wide_pane_vc_t2

0x0001,

0xfac1,	// (0x0004a7be) form_field_slider_wide_pane_vc_t_ParamLimits

0xfac1,	// (0x0004a7be) form_field_slider_wide_pane_vc_t

0x7ad3,	// (0x000427d0) input_focus_pane_cp10_vc_ParamLimits

0x7ad3,	// (0x000427d0) input_focus_pane_cp10_vc

0xba33,	// (0x00046730) slider_cont_pane_cp1_vc_ParamLimits

0xba33,	// (0x00046730) slider_cont_pane_cp1_vc

0xb862,	// (0x0004655f) slider_form_pane_g1_cp2

0xb86b,	// (0x00046568) slider_form_pane_g2_cp2

0xba4c,	// (0x00046749) form_field_slider_pane_vc_t3

0xba5a,	// (0x00046757) form_field_slider_pane_vc_t4

0xba68,	// (0x00046765) slider_form_pane_vc_ParamLimits

0xba68,	// (0x00046765) slider_form_pane_vc

0xba75,	// (0x00046772) form_field_slider_pane_vc_t1_ParamLimits

0xba75,	// (0x00046772) form_field_slider_pane_vc_t1

0xba21,	// (0x0004671e) form_field_slider_pane_vc_t2_ParamLimits

0xba21,	// (0x0004671e) form_field_slider_pane_vc_t2

0x0001,

0xfad1,	// (0x0004a7ce) form_field_slider_pane_vc_t_ParamLimits

0xfad1,	// (0x0004a7ce) form_field_slider_pane_vc_t

0x7ad3,	// (0x000427d0) input_focus_pane_cp9_vc_ParamLimits

0x7ad3,	// (0x000427d0) input_focus_pane_cp9_vc

0xba91,	// (0x0004678e) slider_cont_pane_vc_ParamLimits

0xba91,	// (0x0004678e) slider_cont_pane_vc

0xbaa3,	// (0x000467a0) list_form_graphic_pane_cp_vc_ParamLimits

0xbaa3,	// (0x000467a0) list_form_graphic_pane_cp_vc

0x9d66,	// (0x00044a63) form_field_popup_wide_pane_vc_g1

0xbab8,	// (0x000467b5) form_field_popup_wide_pane_vc_t1_ParamLimits

0xbab8,	// (0x000467b5) form_field_popup_wide_pane_vc_t1

0x80de,	// (0x00042ddb) input_focus_pane_cp8_vc_ParamLimits

0x80de,	// (0x00042ddb) input_focus_pane_cp8_vc

0xbacf,	// (0x000467cc) list_form_wide_pane_vc_ParamLimits

0xbacf,	// (0x000467cc) list_form_wide_pane_vc

0xbadb,	// (0x000467d8) list_form_graphic_pane_vc_g1

0xbae3,	// (0x000467e0) list_form_graphic_pane_vc_t1_ParamLimits

0xbae3,	// (0x000467e0) list_form_graphic_pane_vc_t1

0x7857,	// (0x00042554) list_highlight_pane_cp5_vc_ParamLimits

0x7857,	// (0x00042554) list_highlight_pane_cp5_vc

0xbaff,	// (0x000467fc) list_form_graphic_pane_vc_ParamLimits

0xbaff,	// (0x000467fc) list_form_graphic_pane_vc

0x9d66,	// (0x00044a63) form_field_popup_pane_vc_g1

0xbb15,	// (0x00046812) form_field_popup_pane_vc_t1_ParamLimits

0xbb15,	// (0x00046812) form_field_popup_pane_vc_t1

0x80de,	// (0x00042ddb) input_focus_pane_cp7_vc_ParamLimits

0x80de,	// (0x00042ddb) input_focus_pane_cp7_vc

0xbb2c,	// (0x00046829) list_form_pane_vc_ParamLimits

0xbb2c,	// (0x00046829) list_form_pane_vc

0xbb38,	// (0x00046835) data_form_pane_vc_t1_ParamLimits

0xbb38,	// (0x00046835) data_form_pane_vc_t1

0x8145,	// (0x00042e42) input_focus_pane_vc_g1

0x814d,	// (0x00042e4a) input_focus_pane_vc_g2

0x8155,	// (0x00042e52) input_focus_pane_vc_g3

0x815d,	// (0x00042e5a) input_focus_pane_vc_g4

0x8165,	// (0x00042e62) input_focus_pane_vc_g5

0x816d,	// (0x00042e6a) input_focus_pane_vc_g6

0x8175,	// (0x00042e72) input_focus_pane_vc_g7

0x817d,	// (0x00042e7a) input_focus_pane_vc_g8

0x8185,	// (0x00042e82) input_focus_pane_vc_g9

0x776d,	// (0x0004246a) input_focus_pane_vc_g10

0x0009,

0xf6d5,	// (0x0004a3d2) input_focus_pane_vc_g

0x9d5a,	// (0x00044a57) data_form_pane_vc_ParamLimits

0x9d5a,	// (0x00044a57) data_form_pane_vc

0x9d66,	// (0x00044a63) form_field_data_pane_vc_g1

0xbb55,	// (0x00046852) form_field_data_pane_vc_t1_ParamLimits

0xbb55,	// (0x00046852) form_field_data_pane_vc_t1

0x80de,	// (0x00042ddb) input_focus_pane_vc_ParamLimits

0x80de,	// (0x00042ddb) input_focus_pane_vc

0xbb6f,	// (0x0004686c) button_value_adjust_pane_cp3_vc

0xbb77,	// (0x00046874) button_value_adjust_pane_cp5_vc

0xbb7f,	// (0x0004687c) form_field_data_pane_vc_ParamLimits

0xbb7f,	// (0x0004687c) form_field_data_pane_vc

0xbb9a,	// (0x00046897) form_field_data_pane_vc_cp2

0xbba2,	// (0x0004689f) form_field_data_wide_pane_vc_ParamLimits

0xbba2,	// (0x0004689f) form_field_data_wide_pane_vc

0xbbbc,	// (0x000468b9) form_field_data_wide_pane_vc_cp2

0xbbc4,	// (0x000468c1) form_field_popup_pane_vc_ParamLimits

0xbbc4,	// (0x000468c1) form_field_popup_pane_vc

0xbbdf,	// (0x000468dc) form_field_popup_wide_pane_vc_ParamLimits

0xbbdf,	// (0x000468dc) form_field_popup_wide_pane_vc

0xbbf9,	// (0x000468f6) form_field_slider_pane_vc_ParamLimits

0xbbf9,	// (0x000468f6) form_field_slider_pane_vc

0xbc0c,	// (0x00046909) form_field_slider_wide_pane_vc_ParamLimits

0xbc0c,	// (0x00046909) form_field_slider_wide_pane_vc

0xbc1f,	// (0x0004691c) grid_touch_1_pane_ParamLimits

0xbc1f,	// (0x0004691c) grid_touch_1_pane

0xbc2b,	// (0x00046928) grid_touch_2_pane_ParamLimits

0xbc2b,	// (0x00046928) grid_touch_2_pane

0x9009,	// (0x00043d06) touch_pane_g1_ParamLimits

0x9009,	// (0x00043d06) touch_pane_g1

0xbc45,	// (0x00046942) cell_app_pane_cp_wide_ParamLimits

0xbc45,	// (0x00046942) cell_app_pane_cp_wide

0xbc56,	// (0x00046953) grid_popup_fast_wide_pane_ParamLimits

0xbc56,	// (0x00046953) grid_popup_fast_wide_pane

0xbc6a,	// (0x00046967) scroll_pane_cp19_ParamLimits

0xbc6a,	// (0x00046967) scroll_pane_cp19

0x7777,	// (0x00042474) bg_popup_window_pane_cp20

0xbc7e,	// (0x0004697b) listscroll_popup_fast_wide_pane

0x7857,	// (0x00042554) grid_indicator_nsta_pane

0xbc86,	// (0x00046983) clock_nsta_pane_g1

0xbc8f,	// (0x0004698c) clock_nsta_pane_t1

0xbcab,	// (0x000469a8) cell_indicator_nsta_pane_ParamLimits

0xbcab,	// (0x000469a8) cell_indicator_nsta_pane

0xbce3,	// (0x000469e0) cell_indicator_nsta_pane_g1

0xbcf1,	// (0x000469ee) cell_indicator_nsta_pane_g2

0x0001,

0xfadb,	// (0x0004a7d8) cell_indicator_nsta_pane_g

0xbd06,	// (0x00046a03) clock_nsta_pane_cp

0xbd0e,	// (0x00046a0b) indicator_nsta_pane_cp

0xbd16,	// (0x00046a13) nsta_clock_indic_pane_g1

0x7923,	// (0x00042620) grid_indicator_pane

0x8686,	// (0x00043383) scroll_pane_cp29

0x626b,	// (0x00040f68) indicator_nsta_pane_cp2_ParamLimits

0x626b,	// (0x00040f68) indicator_nsta_pane_cp2

0x7857,	// (0x00042554) main_apps_wheel_pane

0x9f25,	// (0x00044c22) form_midp_field_text_pane_ParamLimits

0xa074,	// (0x00044d71) scroll_bar_cp050_ParamLimits

0xbd4e,	// (0x00046a4b) cell_indicator_pane_ParamLimits

0xbd4e,	// (0x00046a4b) cell_indicator_pane

0xbd66,	// (0x00046a63) cell_indicator_pane_g1

0xbd70,	// (0x00046a6d) grid_wheel_folder_pane_ParamLimits

0xbd70,	// (0x00046a6d) grid_wheel_folder_pane

0xbd84,	// (0x00046a81) list_wheel_apps_pane_ParamLimits

0xbd84,	// (0x00046a81) list_wheel_apps_pane

0xbd97,	// (0x00046a94) main_apps_wheel_pane_g1_ParamLimits

0xbd97,	// (0x00046a94) main_apps_wheel_pane_g1

0xbdb3,	// (0x00046ab0) main_apps_wheel_pane_g2_ParamLimits

0xbdb3,	// (0x00046ab0) main_apps_wheel_pane_g2

0x0001,

0xfaea,	// (0x0004a7e7) main_apps_wheel_pane_g_ParamLimits

0xfaea,	// (0x0004a7e7) main_apps_wheel_pane_g

0xbdcf,	// (0x00046acc) main_apps_wheel_pane_t1_ParamLimits

0xbdcf,	// (0x00046acc) main_apps_wheel_pane_t1

0xbdf8,	// (0x00046af5) list_wheel_apps_pane_g1

0xbe00,	// (0x00046afd) list_wheel_apps_pane_g2

0xbe08,	// (0x00046b05) list_wheel_apps_pane_g3

0xbe10,	// (0x00046b0d) list_wheel_apps_pane_g4

0xbe1a,	// (0x00046b17) list_wheel_apps_pane_g5

0x0004,

0xfaef,	// (0x0004a7ec) list_wheel_apps_pane_g

0x8bb8,	// (0x000438b5) navi_icon_text_pane

0x96f9,	// (0x000443f6) aid_fill_nsta

0xbe3b,	// (0x00046b38) navi_icon_text_pane_g1

0xbe4a,	// (0x00046b47) navi_icon_text_pane_t1

0x8a4e,	// (0x0004374b) list_set_graphic_pane_t1_ParamLimits

0x8a4e,	// (0x0004374b) list_set_graphic_pane_t1

0xa794,	// (0x00045491) popup_midp_note_alarm_window_t6_ParamLimits

0xa794,	// (0x00045491) popup_midp_note_alarm_window_t6

0xa7a6,	// (0x000454a3) popup_midp_note_alarm_window_t7_ParamLimits

0xa7a6,	// (0x000454a3) popup_midp_note_alarm_window_t7

0xa7b8,	// (0x000454b5) popup_midp_note_alarm_window_t8_ParamLimits

0xa7b8,	// (0x000454b5) popup_midp_note_alarm_window_t8

0xa7ca,	// (0x000454c7) popup_midp_note_alarm_window_t9_ParamLimits

0xa7ca,	// (0x000454c7) popup_midp_note_alarm_window_t9

0xa7dc,	// (0x000454d9) popup_midp_note_alarm_window_t10_ParamLimits

0xa7dc,	// (0x000454d9) popup_midp_note_alarm_window_t10

0xa7ee,	// (0x000454eb) popup_midp_note_alarm_window_t11_ParamLimits

0xa7ee,	// (0x000454eb) popup_midp_note_alarm_window_t11

0xa800,	// (0x000454fd) scroll_pane_cp17_ParamLimits

0xa800,	// (0x000454fd) scroll_pane_cp17

0x66bf,	// (0x000413bc) volume_small_pane_cp_g1

0x6a2c,	// (0x00041729) volume_small_pane_cp_g2

0x6a35,	// (0x00041732) volume_small_pane_cp_g3

0x6a3e,	// (0x0004173b) volume_small_pane_cp_g4

0x6a47,	// (0x00041744) volume_small_pane_cp_g5

0x6a50,	// (0x0004174d) volume_small_pane_cp_g6

0x6a59,	// (0x00041756) volume_small_pane_cp_g7

0x6a62,	// (0x0004175f) volume_small_pane_cp_g8

0x6a6b,	// (0x00041768) volume_small_pane_cp_g9

0x6a74,	// (0x00041771) volume_small_pane_cp_g10

0x8e19,	// (0x00043b16) midp_ticker_pane_g1_ParamLimits

0x8e25,	// (0x00043b22) midp_ticker_pane_g2_ParamLimits

0xf79d,	// (0x0004a49a) midp_ticker_pane_g_ParamLimits

0x8e31,	// (0x00043b2e) midp_ticker_pane_t1_ParamLimits

0x970f,	// (0x0004440c) aid_fill_nsta_2

0xa060,	// (0x00044d5d) list_form2_midp_pane

0xb1bd,	// (0x00045eba) midp_editing_number_pane_ParamLimits

0xb1cc,	// (0x00045ec9) midp_ticker_pane_ParamLimits

0xbe5f,	// (0x00046b5c) form2_midp_field_pane

0xbe83,	// (0x00046b80) scroll_pane_cp51

0xbea3,	// (0x00046ba0) form2_midp_button_pane_ParamLimits

0xbea3,	// (0x00046ba0) form2_midp_button_pane

0xbeb5,	// (0x00046bb2) form2_midp_content_pane_ParamLimits

0xbeb5,	// (0x00046bb2) form2_midp_content_pane

0xbecf,	// (0x00046bcc) form2_midp_field_choice_group_pane

0xbed7,	// (0x00046bd4) form2_midp_field_pane_g1

0xbedf,	// (0x00046bdc) form2_midp_field_pane_g2

0xbee7,	// (0x00046be4) form2_midp_field_pane_g3

0xbeef,	// (0x00046bec) form2_midp_field_pane_g4

0x0003,

0xfb14,	// (0x0004a811) form2_midp_field_pane_g

0xbef7,	// (0x00046bf4) form2_midp_gauge_slider_pane

0xbeff,	// (0x00046bfc) form2_midp_gauge_wait_pane

0xbf07,	// (0x00046c04) form2_midp_image_pane_ParamLimits

0xbf07,	// (0x00046c04) form2_midp_image_pane

0xbf22,	// (0x00046c1f) form2_midp_label_pane_ParamLimits

0xbf22,	// (0x00046c1f) form2_midp_label_pane

0xbf41,	// (0x00046c3e) form2_midp_label_pane_cp_ParamLimits

0xbf41,	// (0x00046c3e) form2_midp_label_pane_cp

0xbf62,	// (0x00046c5f) form2_midp_string_pane_ParamLimits

0xbf62,	// (0x00046c5f) form2_midp_string_pane

0x5784,	// (0x00040481) form2_midp_text_pane_ParamLimits

0x5784,	// (0x00040481) form2_midp_text_pane

0xbf74,	// (0x00046c71) form2_midp_time_pane

0xbf84,	// (0x00046c81) input_focus_pane_cp51_ParamLimits

0xbf84,	// (0x00046c81) input_focus_pane_cp51

0xbf9c,	// (0x00046c99) form2_midp_label_pane_t1_ParamLimits

0xbf9c,	// (0x00046c99) form2_midp_label_pane_t1

0x57a7,	// (0x000404a4) form2_mdip_text_pane_t1_ParamLimits

0x57a7,	// (0x000404a4) form2_mdip_text_pane_t1

0x57c6,	// (0x000404c3) form2_midp_time_pane_t1

0xbfea,	// (0x00046ce7) form2_midp_gauge_slider_pane_t1

0xbffc,	// (0x00046cf9) form2_midp_gauge_slider_pane_t2

0xc00e,	// (0x00046d0b) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb1d,	// (0x0004a81a) form2_midp_gauge_slider_pane_t

0xc020,	// (0x00046d1d) form2_midp_slider_pane

0xc02c,	// (0x00046d29) form2_midp_gauge_wait_pane_t1

0xc03a,	// (0x00046d37) form2_midp_wait_pane_ParamLimits

0xc03a,	// (0x00046d37) form2_midp_wait_pane

0x9d85,	// (0x00044a82) list_single_2graphic_pane_cp4_ParamLimits

0x9d85,	// (0x00044a82) list_single_2graphic_pane_cp4

0xc065,	// (0x00046d62) list_single_midp_graphic_pane_cp_ParamLimits

0xc065,	// (0x00046d62) list_single_midp_graphic_pane_cp

0x7777,	// (0x00042474) list_highlight_pane_cp20

0xc089,	// (0x00046d86) list_single_2graphic_pane_g1_cp4

0xb69e,	// (0x0004639b) list_single_2graphic_pane_g2_cp4

0xc091,	// (0x00046d8e) list_single_2graphic_pane_t1_cp4

0x7857,	// (0x00042554) list_highlight_pane_cp21

0xc0a0,	// (0x00046d9d) list_single_midp_graphic_pane_g4_cp

0xc0af,	// (0x00046dac) list_single_midp_graphic_pane_t1_cp

0xc0c4,	// (0x00046dc1) form2_mdip_string_pane_t1_ParamLimits

0xc0c4,	// (0x00046dc1) form2_mdip_string_pane_t1

0x7777,	// (0x00042474) bg_wml_button_pane_cp2

0x776d,	// (0x0004246a) form2_midp_image_pane_g1

0x5f58,	// (0x00040c55) list_double_large_graphic_pane_g5_ParamLimits

0x5f58,	// (0x00040c55) list_double_large_graphic_pane_g5

0x8d44,	// (0x00043a41) midp_form_pane_ParamLimits

0x7857,	// (0x00042554) main_apps_wheel_pane_ParamLimits

0x94a3,	// (0x000441a0) popup_preview_window_ParamLimits

0x94a3,	// (0x000441a0) popup_preview_window

0x968a,	// (0x00044387) popup_touch_info_window_ParamLimits

0x968a,	// (0x00044387) popup_touch_info_window

0x96ac,	// (0x000443a9) popup_touch_menu_window_ParamLimits

0x96ac,	// (0x000443a9) popup_touch_menu_window

0x7763,	// (0x00042460) bg_popup_sub_pane_cp6

0xc169,	// (0x00046e66) list_touch_menu_pane

0xc171,	// (0x00046e6e) list_single_touch_menu_pane_ParamLimits

0xc171,	// (0x00046e6e) list_single_touch_menu_pane

0xc18c,	// (0x00046e89) list_single_touch_menu_pane_t1

0x7857,	// (0x00042554) bg_popup_sub_pane_cp7_ParamLimits

0x7857,	// (0x00042554) bg_popup_sub_pane_cp7

0xc19a,	// (0x00046e97) heading_sub_pane

0xc1a2,	// (0x00046e9f) list_touch_info_pane_ParamLimits

0xc1a2,	// (0x00046e9f) list_touch_info_pane

0xc1b1,	// (0x00046eae) list_single_touch_info_pane_ParamLimits

0xc1b1,	// (0x00046eae) list_single_touch_info_pane

0xc1c3,	// (0x00046ec0) list_single_touch_info_pane_t1

0xc1d1,	// (0x00046ece) list_single_touch_info_pane_t2

0x0001,

0xfb2b,	// (0x0004a828) list_single_touch_info_pane_t

0x8d3c,	// (0x00043a39) bg_popup_heading_pane_cp

0xc1df,	// (0x00046edc) heading_sub_pane_t1

0x9cf4,	// (0x000449f1) bg_popup_preview_window_pane_cp_ParamLimits

0x9cf4,	// (0x000449f1) bg_popup_preview_window_pane_cp

0xc19a,	// (0x00046e97) heading_preview_pane

0xc1a2,	// (0x00046e9f) list_preview_pane_ParamLimits

0xc1a2,	// (0x00046e9f) list_preview_pane

0xc1ed,	// (0x00046eea) popup_preview_window_g1

0xc1b1,	// (0x00046eae) list_single_preview_pane_ParamLimits

0xc1b1,	// (0x00046eae) list_single_preview_pane

0xc1f5,	// (0x00046ef2) list_single_preview_pane_g1

0xc1fd,	// (0x00046efa) list_single_preview_pane_t1

0xc1c3,	// (0x00046ec0) list_single_preview_pane_t2

0x0001,

0xfb30,	// (0x0004a82d) list_single_preview_pane_t

0xc20b,	// (0x00046f08) bg_popup_heading_pane_cp2_ParamLimits

0xc20b,	// (0x00046f08) bg_popup_heading_pane_cp2

0xc221,	// (0x00046f1e) heading_preview_pane_g1

0xc229,	// (0x00046f26) heading_preview_pane_t1_ParamLimits

0xc229,	// (0x00046f26) heading_preview_pane_t1

0x7946,	// (0x00042643) soft_indicator_pane_t1_ParamLimits

0x8051,	// (0x00042d4e) scroll_pane_ParamLimits

0x8582,	// (0x0004327f) scroll_sc2_left_pane

0x858b,	// (0x00043288) scroll_sc2_right_pane

0x85aa,	// (0x000432a7) scroll_bg_pane_g1_ParamLimits

0x85bf,	// (0x000432bc) scroll_bg_pane_g2_ParamLimits

0x85d7,	// (0x000432d4) scroll_bg_pane_g3_ParamLimits

0xf72c,	// (0x0004a429) scroll_bg_pane_g_ParamLimits

0x85aa,	// (0x000432a7) scroll_handle_pane_g1_ParamLimits

0x85f9,	// (0x000432f6) scroll_handle_pane_g2_ParamLimits

0x85d7,	// (0x000432d4) scroll_handle_pane_g3_ParamLimits

0xf733,	// (0x0004a430) scroll_handle_pane_g_ParamLimits

0x90ee,	// (0x00043deb) popup_choice_list_window_ParamLimits

0x90ee,	// (0x00043deb) popup_choice_list_window

0x9b4c,	// (0x00044849) choice_list_pane

0x9bce,	// (0x000448cb) cell_toolbar_pane_t1

0x9bf6,	// (0x000448f3) toolbar_button_pane_ParamLimits

0xacd0,	// (0x000459cd) ai_gene_pane_1_t2_ParamLimits

0xacd0,	// (0x000459cd) ai_gene_pane_1_t2

0x0001,

0xf950,	// (0x0004a64d) ai_gene_pane_1_t_ParamLimits

0xf950,	// (0x0004a64d) ai_gene_pane_1_t

0xc246,	// (0x00046f43) scroll_sc2_left_pane_g1

0xc246,	// (0x00046f43) scroll_sc2_right_pane_g1

0x90c6,	// (0x00043dc3) bg_popup_sub_pane_cp10

0xc250,	// (0x00046f4d) list_choice_list_pane

0xc267,	// (0x00046f64) list_single_choice_list_pane_ParamLimits

0xc267,	// (0x00046f64) list_single_choice_list_pane

0xc27b,	// (0x00046f78) list_single_choice_list_pane_g1

0xc283,	// (0x00046f80) list_single_choice_list_pane_t1_ParamLimits

0xc283,	// (0x00046f80) list_single_choice_list_pane_t1

0xc298,	// (0x00046f95) choice_list_pane_g1

0xc2a0,	// (0x00046f9d) choice_list_pane_t1

0x7763,	// (0x00042460) input_focus_pane_cp11

0x845c,	// (0x00043159) title_pane_stacon_g2_ParamLimits

0x845c,	// (0x00043159) title_pane_stacon_g2

0x0002,

0xf712,	// (0x0004a40f) title_pane_stacon_g_ParamLimits

0xf712,	// (0x0004a40f) title_pane_stacon_g

0x8d3c,	// (0x00043a39) cursor_press_pane

0x91a4,	// (0x00043ea1) popup_fep_hwr_window_ParamLimits

0x91a4,	// (0x00043ea1) popup_fep_hwr_window

0x922e,	// (0x00043f2b) popup_fep_vkb_window_ParamLimits

0x922e,	// (0x00043f2b) popup_fep_vkb_window

0xc2ae,	// (0x00046fab) cursor_press_pane_g1

0x0002,

0xfb59,	// (0x0004a856) fep_vkb_side_pane_g_ParamLimits

0x6aa8,	// (0x000417a5) fep_hwr_candidate_pane_ParamLimits

0x6aa8,	// (0x000417a5) fep_hwr_candidate_pane

0x6ad2,	// (0x000417cf) fep_hwr_side_pane_ParamLimits

0x6ad2,	// (0x000417cf) fep_hwr_side_pane

0x6af4,	// (0x000417f1) fep_hwr_top_pane_ParamLimits

0x6af4,	// (0x000417f1) fep_hwr_top_pane

0x6b0c,	// (0x00041809) fep_hwr_write_pane_ParamLimits

0x6b0c,	// (0x00041809) fep_hwr_write_pane

0xfb59,	// (0x0004a856) fep_vkb_side_pane_g

0xc2c4,	// (0x00046fc1) fep_hwr_top_pane_g1

0xc2d6,	// (0x00046fd3) fep_hwr_top_pane_g2

0x6b38,	// (0x00041835) fep_hwr_top_pane_g3

0x0002,

0xfb35,	// (0x0004a832) fep_hwr_top_pane_g

0x6b4d,	// (0x0004184a) fep_hwr_top_text_pane

0x874e,	// (0x0004344b) fep_hwr_top_text_pane_g1

0xc30c,	// (0x00047009) fep_hwr_top_text_pane_t1

0x6c57,	// (0x00041954) fep_hwr_candidate_pane_g1

0xc557,	// (0x00047254) fep_vkb_keypad_pane_g3_ParamLimits

0xc557,	// (0x00047254) fep_vkb_keypad_pane_g3

0xc583,	// (0x00047280) fep_vkb_keypad_pane_g4_ParamLimits

0xc583,	// (0x00047280) fep_vkb_keypad_pane_g4

0xc5fa,	// (0x000472f7) fep_vkb_bottom_pane_g2_ParamLimits

0xc5fa,	// (0x000472f7) fep_vkb_bottom_pane_g2

0x0001,

0xfb60,	// (0x0004a85d) fep_vkb_bottom_pane_g_ParamLimits

0xfb60,	// (0x0004a85d) fep_vkb_bottom_pane_g

0xc246,	// (0x00046f43) cell_vkb_side_pane_g2

0x0001,

0xfb6a,	// (0x0004a867) cell_vkb_side_pane_g

0xc685,	// (0x00047382) cell_vkb_side_pane_t1

0xc693,	// (0x00047390) cell_vkb_side_pane_t1_copy1

0xc246,	// (0x00046f43) bg_fep_vkb_candidate_pane_g2

0xc7d7,	// (0x000474d4) cell_vkb_candidate_pane_ParamLimits

0xc31a,	// (0x00047017) aid_size_cell_vkb_ParamLimits

0xc31a,	// (0x00047017) aid_size_cell_vkb

0xc7d7,	// (0x000474d4) cell_vkb_candidate_pane

0x6c71,	// (0x0004196e) bg_popup_fep_shadow_pane_g1

0xc3ac,	// (0x000470a9) fep_vkb_bottom_pane_ParamLimits

0xc3ac,	// (0x000470a9) fep_vkb_bottom_pane

0xc3e9,	// (0x000470e6) fep_vkb_candidate_pane_ParamLimits

0xc3e9,	// (0x000470e6) fep_vkb_candidate_pane

0xc405,	// (0x00047102) fep_vkb_keypad_pane_ParamLimits

0xc405,	// (0x00047102) fep_vkb_keypad_pane

0xc438,	// (0x00047135) fep_vkb_side_pane_ParamLimits

0xc438,	// (0x00047135) fep_vkb_side_pane

0xc474,	// (0x00047171) fep_vkb_top_pane_ParamLimits

0xc474,	// (0x00047171) fep_vkb_top_pane

0xc4b0,	// (0x000471ad) fep_vkb_top_pane_g1_ParamLimits

0xc4b0,	// (0x000471ad) fep_vkb_top_pane_g1

0xc4bf,	// (0x000471bc) fep_vkb_top_pane_g2_ParamLimits

0xc4bf,	// (0x000471bc) fep_vkb_top_pane_g2

0xc4ce,	// (0x000471cb) fep_vkb_top_pane_g3_ParamLimits

0xc4ce,	// (0x000471cb) fep_vkb_top_pane_g3

0x0003,

0xfb50,	// (0x0004a84d) fep_vkb_top_pane_g_ParamLimits

0xfb50,	// (0x0004a84d) fep_vkb_top_pane_g

0xc4ec,	// (0x000471e9) fep_vkb_top_text_pane_ParamLimits

0xc4ec,	// (0x000471e9) fep_vkb_top_text_pane

0xc4fd,	// (0x000471fa) fep_vkb_side_pane_g1_ParamLimits

0xc4fd,	// (0x000471fa) fep_vkb_side_pane_g1

0xc546,	// (0x00047243) grid_vkb_side_pane_ParamLimits

0xc546,	// (0x00047243) grid_vkb_side_pane

0x6c79,	// (0x00041976) bg_popup_fep_shadow_pane_g2

0x6c82,	// (0x0004197f) bg_popup_fep_shadow_pane_g3

0x6c8a,	// (0x00041987) bg_popup_fep_shadow_pane_g4

0x6c93,	// (0x00041990) bg_popup_fep_shadow_pane_g5

0x6c9d,	// (0x0004199a) bg_popup_fep_shadow_pane_g6

0x6ca5,	// (0x000419a2) bg_popup_fep_shadow_pane_g7

0x8165,	// (0x00042e62) bg_popup_fep_shadow_pane_g8

0xc5a5,	// (0x000472a2) grid_vkb_keypad_number_pane_ParamLimits

0xc5a5,	// (0x000472a2) grid_vkb_keypad_number_pane

0xc5b9,	// (0x000472b6) grid_vkb_keypad_pane_ParamLimits

0xc5b9,	// (0x000472b6) grid_vkb_keypad_pane

0xc5df,	// (0x000472dc) fep_vkb_bottom_pane_g1_ParamLimits

0xc5df,	// (0x000472dc) fep_vkb_bottom_pane_g1

0xc608,	// (0x00047305) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc608,	// (0x00047305) grid_vkb_keypad_bottom_left_pane

0xc61d,	// (0x0004731a) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc61d,	// (0x0004731a) grid_vkb_keypad_bottom_right_pane

0xc632,	// (0x0004732f) fep_vkb_top_text_pane_g1

0xc64d,	// (0x0004734a) fep_vkb_top_text_pane_t1

0xc662,	// (0x0004735f) cell_vkb_side_pane_ParamLimits

0xc662,	// (0x0004735f) cell_vkb_side_pane

0xc246,	// (0x00046f43) cell_vkb_side_pane_g1

0xc6a1,	// (0x0004739e) cell_vkb_keypad_pane_ParamLimits

0xc6a1,	// (0x0004739e) cell_vkb_keypad_pane

0xc72e,	// (0x0004742b) cell_vkb_keypad_pane_g1

0x0008,

0xfb7d,	// (0x0004a87a) bg_popup_fep_shadow_pane_g

0xc246,	// (0x00046f43) cell_hwr_side_pane_g1

0xc246,	// (0x00046f43) cell_hwr_side_pane_g2

0xc738,	// (0x00047435) cell_vkb_keypad_pane_t1

0xc746,	// (0x00047443) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc746,	// (0x00047443) cell_vkb_keypad_bottom_left_pane

0xc763,	// (0x00047460) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc763,	// (0x00047460) cell_vkb_keypad_bottom_right_pane

0xc246,	// (0x00046f43) cell_vkb_keypad_bottom_left_pane_g1

0xc246,	// (0x00046f43) cell_vkb_keypad_bottom_right_pane_g1

0xc79c,	// (0x00047499) cell_vkb_keypad_number_pane_ParamLimits

0xc79c,	// (0x00047499) cell_vkb_keypad_number_pane

0xc7bb,	// (0x000474b8) cell_vkb_keypad_number_pane_g1

0xc7c5,	// (0x000474c2) cell_vkb_keypad_number_pane_g2

0xc7ce,	// (0x000474cb) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb6f,	// (0x0004a86c) cell_vkb_keypad_number_pane_g

0xc738,	// (0x00047435) cell_vkb_keypad_number_pane_t1

0xc7f8,	// (0x000474f5) fep_vkb_candidate_pane_g1

0x0001,

0xfb6a,	// (0x0004a867) cell_hwr_side_pane_g

0xc811,	// (0x0004750e) cell_hwr_side_pane_t1

0x6cb7,	// (0x000419b4) cell_hwr_side_pane_t1_copy1

0xc4de,	// (0x000471db) cell_hwr_candidate_pane_g1

0x6cc5,	// (0x000419c2) cell_hwr_candidate_pane_t1

0xc246,	// (0x00046f43) cell_vkb_candidate_pane_g2

0xc897,	// (0x00047594) cell_vkb_candidate_pane_t1

0xc2b6,	// (0x00046fb3) bg_popup_fep_shadow_pane_ParamLimits

0xc2b6,	// (0x00046fb3) bg_popup_fep_shadow_pane

0x25ec,	// (0x0003d2e9) bg_fep_hwr_top_pane_g4

0xc2e8,	// (0x00046fe5) bg_hwr_side_pane_g1_ParamLimits

0xc2e8,	// (0x00046fe5) bg_hwr_side_pane_g1

0x6b8b,	// (0x00041888) cell_hwr_side_pane_ParamLimits

0x6b8b,	// (0x00041888) cell_hwr_side_pane

0x6bc8,	// (0x000418c5) fep_hwr_write_pane_g1_ParamLimits

0x6bc8,	// (0x000418c5) fep_hwr_write_pane_g1

0x6bd5,	// (0x000418d2) fep_hwr_write_pane_g2_ParamLimits

0x6bd5,	// (0x000418d2) fep_hwr_write_pane_g2

0x6be2,	// (0x000418df) fep_hwr_write_pane_g3_ParamLimits

0x6be2,	// (0x000418df) fep_hwr_write_pane_g3

0x6bf0,	// (0x000418ed) fep_hwr_write_pane_g4_ParamLimits

0x6bf0,	// (0x000418ed) fep_hwr_write_pane_g4

0x0005,

0xfb3c,	// (0x0004a839) fep_hwr_write_pane_g_ParamLimits

0xfb3c,	// (0x0004a839) fep_hwr_write_pane_g

0x25ec,	// (0x0003d2e9) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x25ec,	// (0x0003d2e9) bg_fep_hwr_candidate_pane_g2

0x6c05,	// (0x00041902) cell_hwr_candidate_pane_ParamLimits

0x6c05,	// (0x00041902) cell_hwr_candidate_pane

0x6c57,	// (0x00041954) fep_hwr_candidate_pane_g1_ParamLimits

0xc348,	// (0x00047045) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc348,	// (0x00047045) bg_popup_fep_shadow_pane_cp2

0xc4de,	// (0x000471db) fep_vkb_top_pane_g4_ParamLimits

0xc4de,	// (0x000471db) fep_vkb_top_pane_g4

0xc524,	// (0x00047221) fep_vkb_side_pane_g2_ParamLimits

0xc524,	// (0x00047221) fep_vkb_side_pane_g2

0x50df,	// (0x0003fddc) list_setting_pane_t4_ParamLimits

0x50df,	// (0x0003fddc) list_setting_pane_t4

0x517b,	// (0x0003fe78) list_setting_number_pane_t5_ParamLimits

0x517b,	// (0x0003fe78) list_setting_number_pane_t5

0x8790,	// (0x0004348d) list_double_heading_pane_cp2_ParamLimits

0x8790,	// (0x0004348d) list_double_heading_pane_cp2

0x80f8,	// (0x00042df5) list_double_heading_pane_g1_cp2_ParamLimits

0x80f8,	// (0x00042df5) list_double_heading_pane_g1_cp2

0x8104,	// (0x00042e01) list_double_heading_pane_g2_cp2_ParamLimits

0x8104,	// (0x00042e01) list_double_heading_pane_g2_cp2

0xc8a5,	// (0x000475a2) list_double_heading_pane_t1_cp2_ParamLimits

0xc8a5,	// (0x000475a2) list_double_heading_pane_t1_cp2

0xc8bb,	// (0x000475b8) list_double_heading_pane_t2_cp2_ParamLimits

0xc8bb,	// (0x000475b8) list_double_heading_pane_t2_cp2

0x774b,	// (0x00042448) aid_value_unit2

0x5d31,	// (0x00040a2e) popup_preview_fixed_window

0x7ae1,	// (0x000427de) bg_popup_preview_window_pane_cp02

0xc8cd,	// (0x000475ca) list_preview_fixed_pane

0xc913,	// (0x00047610) list_empty_pane_fp_ParamLimits

0xc913,	// (0x00047610) list_empty_pane_fp

0xc913,	// (0x00047610) list_single_cale_day_pane_fp_ParamLimits

0xc913,	// (0x00047610) list_single_cale_day_pane_fp

0xc913,	// (0x00047610) list_single_graphic_heading_pane_fp_ParamLimits

0xc913,	// (0x00047610) list_single_graphic_heading_pane_fp

0xc913,	// (0x00047610) list_single_graphic_pane_fp_ParamLimits

0xc913,	// (0x00047610) list_single_graphic_pane_fp

0xc913,	// (0x00047610) list_single_heading_pane_fp_ParamLimits

0xc913,	// (0x00047610) list_single_heading_pane_fp

0xc913,	// (0x00047610) list_single_pane_fp_ParamLimits

0xc913,	// (0x00047610) list_single_pane_fp

0xc92c,	// (0x00047629) list_single_pane_fp_g1_ParamLimits

0xc92c,	// (0x00047629) list_single_pane_fp_g1

0x5f4c,	// (0x00040c49) list_single_pane_fp_g2_ParamLimits

0x5f4c,	// (0x00040c49) list_single_pane_fp_g2

0x6ce3,	// (0x000419e0) list_single_pane_fp_g3_ParamLimits

0x6ce3,	// (0x000419e0) list_single_pane_fp_g3

0xc938,	// (0x00047635) list_single_pane_fp_g4_ParamLimits

0xc938,	// (0x00047635) list_single_pane_fp_g4

0x0003,

0xfb9e,	// (0x0004a89b) list_single_pane_fp_g_ParamLimits

0xfb9e,	// (0x0004a89b) list_single_pane_fp_g

0x57d9,	// (0x000404d6) list_single_pane_fp_t1_ParamLimits

0x57d9,	// (0x000404d6) list_single_pane_fp_t1

0x57f0,	// (0x000404ed) list_single_graphic_pane_fp_g1_ParamLimits

0x57f0,	// (0x000404ed) list_single_graphic_pane_fp_g1

0xc92c,	// (0x00047629) list_single_graphic_pane_fp_g2_ParamLimits

0xc92c,	// (0x00047629) list_single_graphic_pane_fp_g2

0x5f4c,	// (0x00040c49) list_single_graphic_pane_fp_g3_ParamLimits

0x5f4c,	// (0x00040c49) list_single_graphic_pane_fp_g3

0x6ce3,	// (0x000419e0) list_single_graphic_pane_fp_g4_ParamLimits

0x6ce3,	// (0x000419e0) list_single_graphic_pane_fp_g4

0xc938,	// (0x00047635) list_single_graphic_pane_fp_g5_ParamLimits

0xc938,	// (0x00047635) list_single_graphic_pane_fp_g5

0x0004,

0xfba7,	// (0x0004a8a4) list_single_graphic_pane_fp_g_ParamLimits

0xfba7,	// (0x0004a8a4) list_single_graphic_pane_fp_g

0x57fc,	// (0x000404f9) list_single_graphic_pane_fp_t1_ParamLimits

0x57fc,	// (0x000404f9) list_single_graphic_pane_fp_t1

0x57f0,	// (0x000404ed) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x57f0,	// (0x000404ed) list_single_graphic_heading_pane_fp_g1

0xc92c,	// (0x00047629) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc92c,	// (0x00047629) list_single_graphic_heading_pane_fp_g2

0x5f4c,	// (0x00040c49) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x5f4c,	// (0x00040c49) list_single_graphic_heading_pane_fp_g3

0x6ce3,	// (0x000419e0) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x6ce3,	// (0x000419e0) list_single_graphic_heading_pane_fp_g4

0xc938,	// (0x00047635) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc938,	// (0x00047635) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfba7,	// (0x0004a8a4) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfba7,	// (0x0004a8a4) list_single_graphic_heading_pane_fp_g

0x5812,	// (0x0004050f) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x5812,	// (0x0004050f) list_single_graphic_heading_pane_fp_t1

0x5828,	// (0x00040525) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x5828,	// (0x00040525) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfbb2,	// (0x0004a8af) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfbb2,	// (0x0004a8af) list_single_graphic_heading_pane_fp_t

0x583a,	// (0x00040537) list_single_cale_day_pane_fp_g1_ParamLimits

0x583a,	// (0x00040537) list_single_cale_day_pane_fp_g1

0xc944,	// (0x00047641) list_single_cale_day_pane_fp_g2_ParamLimits

0xc944,	// (0x00047641) list_single_cale_day_pane_fp_g2

0x6cf7,	// (0x000419f4) list_single_cale_day_pane_fp_g3_ParamLimits

0x6cf7,	// (0x000419f4) list_single_cale_day_pane_fp_g3

0x6d1f,	// (0x00041a1c) list_single_cale_day_pane_fp_g4_ParamLimits

0x6d1f,	// (0x00041a1c) list_single_cale_day_pane_fp_g4

0x6d43,	// (0x00041a40) list_single_cale_day_pane_fp_g5_ParamLimits

0x6d43,	// (0x00041a40) list_single_cale_day_pane_fp_g5

0x0004,

0xfbb7,	// (0x0004a8b4) list_single_cale_day_pane_fp_g_ParamLimits

0xfbb7,	// (0x0004a8b4) list_single_cale_day_pane_fp_g

0x5872,	// (0x0004056f) list_single_cale_day_pane_fp_t1_ParamLimits

0x5872,	// (0x0004056f) list_single_cale_day_pane_fp_t1

0x5898,	// (0x00040595) list_single_cale_day_pane_fp_t2_ParamLimits

0x5898,	// (0x00040595) list_single_cale_day_pane_fp_t2

0x58b1,	// (0x000405ae) list_single_cale_day_pane_fp_t3_ParamLimits

0x58b1,	// (0x000405ae) list_single_cale_day_pane_fp_t3

0x0002,

0xfbc2,	// (0x0004a8bf) list_single_cale_day_pane_fp_t_ParamLimits

0xfbc2,	// (0x0004a8bf) list_single_cale_day_pane_fp_t

0xc92c,	// (0x00047629) list_empty_pane_fp_g1_ParamLimits

0xc92c,	// (0x00047629) list_empty_pane_fp_g1

0x58ca,	// (0x000405c7) list_empty_pane_fp_t1

0x58d8,	// (0x000405d5) list_empty_pane_fp_t2

0x0001,

0xfbc9,	// (0x0004a8c6) list_empty_pane_fp_t

0xc92c,	// (0x00047629) list_single_heading_pane_fp_g1_ParamLimits

0xc92c,	// (0x00047629) list_single_heading_pane_fp_g1

0x5f4c,	// (0x00040c49) list_single_heading_pane_fp_g2_ParamLimits

0x5f4c,	// (0x00040c49) list_single_heading_pane_fp_g2

0x6ce3,	// (0x000419e0) list_single_heading_pane_fp_g3_ParamLimits

0x6ce3,	// (0x000419e0) list_single_heading_pane_fp_g3

0x0002,

0xfbce,	// (0x0004a8cb) list_single_heading_pane_fp_g_ParamLimits

0xfbce,	// (0x0004a8cb) list_single_heading_pane_fp_g

0x58e6,	// (0x000405e3) list_single_heading_pane_fp_t1_ParamLimits

0x58e6,	// (0x000405e3) list_single_heading_pane_fp_t1

0x58f8,	// (0x000405f5) list_single_heading_pane_fp_t2_ParamLimits

0x58f8,	// (0x000405f5) list_single_heading_pane_fp_t2

0x0001,

0xfbd5,	// (0x0004a8d2) list_single_heading_pane_fp_t_ParamLimits

0xfbd5,	// (0x0004a8d2) list_single_heading_pane_fp_t

0x82f3,	// (0x00042ff0) aid_size_cell_fast

0x7a53,	// (0x00042750) soft_indicator_pane_cp1_t1

0x8330,	// (0x0004302d) cell_app_pane_cp2_ParamLimits

0x8330,	// (0x0004302d) cell_app_pane_cp2

0x6a91,	// (0x0004178e) fep_hwr_candidate_drop_down_list_pane

0x25fa,	// (0x0003d2f7) fep_hwr_candidate_pane_g3_ParamLimits

0x25fa,	// (0x0003d2f7) fep_hwr_candidate_pane_g3

0x2607,	// (0x0003d304) fep_hwr_candidate_pane_g4_ParamLimits

0x2607,	// (0x0003d304) fep_hwr_candidate_pane_g4

0x0002,

0xfb49,	// (0x0004a846) fep_hwr_candidate_pane_g_ParamLimits

0xfb49,	// (0x0004a846) fep_hwr_candidate_pane_g

0xc3d8,	// (0x000470d5) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc3d8,	// (0x000470d5) fep_vkb_candidate_drop_down_list_pane

0xc800,	// (0x000474fd) fep_vkb_candidate_pane_g3

0xc808,	// (0x00047505) fep_vkb_candidate_pane_g4

0x0002,

0xfb76,	// (0x0004a873) fep_vkb_candidate_pane_g

0xc4de,	// (0x000471db) cell_hwr_candidate_pane_g1_ParamLimits

0xc81f,	// (0x0004751c) cell_hwr_candidate_pane_g3_ParamLimits

0xc81f,	// (0x0004751c) cell_hwr_candidate_pane_g3

0xc840,	// (0x0004753d) cell_hwr_candidate_pane_g4_ParamLimits

0xc840,	// (0x0004753d) cell_hwr_candidate_pane_g4

0x0002,

0xfb90,	// (0x0004a88d) cell_hwr_candidate_pane_g_ParamLimits

0xfb90,	// (0x0004a88d) cell_hwr_candidate_pane_g

0xc861,	// (0x0004755e) cell_vkb_candidate_pane_g3_ParamLimits

0xc861,	// (0x0004755e) cell_vkb_candidate_pane_g3

0xc87c,	// (0x00047579) cell_vkb_candidate_pane_g4_ParamLimits

0xc87c,	// (0x00047579) cell_vkb_candidate_pane_g4

0xc950,	// (0x0004764d) cell_app_pane_cp2_g1_ParamLimits

0xc950,	// (0x0004764d) cell_app_pane_cp2_g1

0xc96e,	// (0x0004766b) cell_app_pane_cp2_g2_ParamLimits

0xc96e,	// (0x0004766b) cell_app_pane_cp2_g2

0x0001,

0xfbda,	// (0x0004a8d7) cell_app_pane_cp2_g_ParamLimits

0xfbda,	// (0x0004a8d7) cell_app_pane_cp2_g

0xc97a,	// (0x00047677) cell_app_pane_cp2_t1_ParamLimits

0xc97a,	// (0x00047677) cell_app_pane_cp2_t1

0x80de,	// (0x00042ddb) grid_highlight_pane_cp1_ParamLimits

0x80de,	// (0x00042ddb) grid_highlight_pane_cp1

0x6d67,	// (0x00041a64) cell_hwr_candidate_pane_cp1_ParamLimits

0x6d67,	// (0x00041a64) cell_hwr_candidate_pane_cp1

0xc4de,	// (0x000471db) fep_hwr_candidate_drop_down_list_pane_g1

0xc98c,	// (0x00047689) fep_hwr_candidate_drop_down_list_pane_g2

0xc999,	// (0x00047696) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbdf,	// (0x0004a8dc) fep_hwr_candidate_drop_down_list_pane_g

0x6d8b,	// (0x00041a88) fep_hwr_candidate_drop_down_list_scroll_pane

0x6d94,	// (0x00041a91) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6d94,	// (0x00041a91) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x6da1,	// (0x00041a9e) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6da1,	// (0x00041a9e) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x6dae,	// (0x00041aab) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6dae,	// (0x00041aab) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc861,	// (0x0004755e) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc861,	// (0x0004755e) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc87c,	// (0x00047579) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc87c,	// (0x00047579) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x6dbb,	// (0x00041ab8) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6dbb,	// (0x00041ab8) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x6dd6,	// (0x00041ad3) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6dd6,	// (0x00041ad3) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x6df1,	// (0x00041aee) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6df1,	// (0x00041aee) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe6,	// (0x0004a8e3) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe6,	// (0x0004a8e3) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc9a6,	// (0x000476a3) cell_vkb_candidate_pane_cp1_ParamLimits

0xc9a6,	// (0x000476a3) cell_vkb_candidate_pane_cp1

0xc4de,	// (0x000471db) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc4de,	// (0x000471db) fep_vkb_candidate_drop_down_list_pane_g1

0xc98c,	// (0x00047689) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc98c,	// (0x00047689) fep_vkb_candidate_drop_down_list_pane_g2

0xc999,	// (0x00047696) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc999,	// (0x00047696) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbdf,	// (0x0004a8dc) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbdf,	// (0x0004a8dc) fep_vkb_candidate_drop_down_list_pane_g

0xc9cc,	// (0x000476c9) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc9cc,	// (0x000476c9) fep_vkb_candidate_drop_down_list_scroll_pane

0xc9d9,	// (0x000476d6) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc9d9,	// (0x000476d6) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc9e6,	// (0x000476e3) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc9e6,	// (0x000476e3) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc9f2,	// (0x000476ef) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc9f2,	// (0x000476ef) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc81f,	// (0x0004751c) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc81f,	// (0x0004751c) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc840,	// (0x0004753d) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc840,	// (0x0004753d) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc9fe,	// (0x000476fb) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc9fe,	// (0x000476fb) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xca1f,	// (0x0004771c) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xca1f,	// (0x0004771c) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xca40,	// (0x0004773d) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xca40,	// (0x0004773d) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbf7,	// (0x0004a8f4) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbf7,	// (0x0004a8f4) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x7781,	// (0x0004247e) title_pane_g1_ParamLimits

0x778e,	// (0x0004248b) title_pane_g2_ParamLimits

0xf592,	// (0x0004a28f) title_pane_g_ParamLimits

0x873e,	// (0x0004343b) aid_call2_pane

0x8746,	// (0x00043443) aid_call_pane

0x874e,	// (0x0004344b) popup_clock_analogue_window_g1

0x874e,	// (0x0004344b) popup_clock_analogue_window_g2

0x614c,	// (0x00040e49) popup_clock_analogue_window_g3

0x6155,	// (0x00040e52) popup_clock_analogue_window_g4

0x776d,	// (0x0004246a) popup_clock_analogue_window_g5

0x0004,

0xf741,	// (0x0004a43e) popup_clock_analogue_window_g

0x615d,	// (0x00040e5a) popup_clock_analogue_window_t1

0x616b,	// (0x00040e68) clock_digital_number_pane_ParamLimits

0x616b,	// (0x00040e68) clock_digital_number_pane

0x6177,	// (0x00040e74) clock_digital_number_pane_cp02_ParamLimits

0x6177,	// (0x00040e74) clock_digital_number_pane_cp02

0x6183,	// (0x00040e80) clock_digital_number_pane_cp03_ParamLimits

0x6183,	// (0x00040e80) clock_digital_number_pane_cp03

0x618f,	// (0x00040e8c) clock_digital_number_pane_cp04_ParamLimits

0x618f,	// (0x00040e8c) clock_digital_number_pane_cp04

0x619b,	// (0x00040e98) clock_digital_separator_pane_ParamLimits

0x619b,	// (0x00040e98) clock_digital_separator_pane

0x61a7,	// (0x00040ea4) popup_clock_digital_window_t1_ParamLimits

0x61a7,	// (0x00040ea4) popup_clock_digital_window_t1

0x776d,	// (0x0004246a) clock_digital_number_pane_g1

0x776d,	// (0x0004246a) clock_digital_number_pane_g2

0x0001,

0xf74c,	// (0x0004a449) clock_digital_number_pane_g

0x776d,	// (0x0004246a) clock_digital_separator_pane_g1

0x776d,	// (0x0004246a) clock_digital_separator_pane_g2

0x0001,

0xf74c,	// (0x0004a449) clock_digital_separator_pane_g

0x96f9,	// (0x000443f6) aid_fill_nsta_ParamLimits

0x9849,	// (0x00044546) indicator_nsta_pane_ParamLimits

0x99d9,	// (0x000446d6) popup_clock_analogue_window

0x99d9,	// (0x000446d6) popup_clock_digital_window

0x7857,	// (0x00042554) grid_indicator_nsta_pane_ParamLimits

0xbc9d,	// (0x0004699a) clock_nsta_pane_t2

0x0001,

0xfad6,	// (0x0004a7d3) clock_nsta_pane_t

0x6110,	// (0x00040e0d) aid_size_max_handle

0x611a,	// (0x00040e17) aid_size_min_handle

0x8d3c,	// (0x00043a39) editor_scroll_pane

0xca5b,	// (0x00047758) ex_editor_pane

0x8260,	// (0x00042f5d) scroll_pane_cp13

0x807d,	// (0x00042d7a) scroll_pane_cp14

0x8778,	// (0x00043475) scroll_pane_cp36

0x87a6,	// (0x000434a3) list_single_graphic_hl_pane_cp2_ParamLimits

0x87a6,	// (0x000434a3) list_single_graphic_hl_pane_cp2

0x68c5,	// (0x000415c2) list_single_graphic_hl_pane_ParamLimits

0x68c5,	// (0x000415c2) list_single_graphic_hl_pane

0x590e,	// (0x0004060b) aid_size_min_hl_cp1

0xca63,	// (0x00047760) list_highlight_pane_cp34_ParamLimits

0xca63,	// (0x00047760) list_highlight_pane_cp34

0xca74,	// (0x00047771) list_single_graphic_hl_pane_g1_ParamLimits

0xca74,	// (0x00047771) list_single_graphic_hl_pane_g1

0x5917,	// (0x00040614) list_single_graphic_hl_pane_g2_ParamLimits

0x5917,	// (0x00040614) list_single_graphic_hl_pane_g2

0x5917,	// (0x00040614) list_single_graphic_hl_pane_g3_ParamLimits

0x5917,	// (0x00040614) list_single_graphic_hl_pane_g3

0x69ba,	// (0x000416b7) list_single_graphic_hl_pane_g4_ParamLimits

0x69ba,	// (0x000416b7) list_single_graphic_hl_pane_g4

0x6e0c,	// (0x00041b09) list_single_graphic_hl_pane_g5_ParamLimits

0x6e0c,	// (0x00041b09) list_single_graphic_hl_pane_g5

0x0004,

0xfc08,	// (0x0004a905) list_single_graphic_hl_pane_g_ParamLimits

0xfc08,	// (0x0004a905) list_single_graphic_hl_pane_g

0x5923,	// (0x00040620) list_single_graphic_hl_pane_t1_ParamLimits

0x5923,	// (0x00040620) list_single_graphic_hl_pane_t1

0xca81,	// (0x0004777e) aid_size_min_hl_cp2

0xca8a,	// (0x00047787) list_highlight_pane_cp34_cp2_ParamLimits

0xca8a,	// (0x00047787) list_highlight_pane_cp34_cp2

0xca74,	// (0x00047771) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xca74,	// (0x00047771) list_single_graphic_hl_pane_g1_cp2

0xca97,	// (0x00047794) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xca97,	// (0x00047794) list_single_graphic_hl_pane_g2_cp2

0xcaa3,	// (0x000477a0) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xcaa3,	// (0x000477a0) list_single_graphic_hl_pane_g3_cp2

0x9078,	// (0x00043d75) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x9078,	// (0x00043d75) list_single_graphic_hl_pane_g4_cp2

0xcab1,	// (0x000477ae) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xcab1,	// (0x000477ae) list_single_graphic_hl_pane_g5_cp2

0x647e,	// (0x0004117b) control_pane_g4_ParamLimits

0x647e,	// (0x0004117b) control_pane_g4

0x90c6,	// (0x00043dc3) bg_popup_sub_pane_cp10_ParamLimits

0xc250,	// (0x00046f4d) list_choice_list_pane_ParamLimits

0xc25f,	// (0x00046f5c) scroll_pane_cp23

0x7ae1,	// (0x000427de) bg_popup_preview_window_pane_cp02_ParamLimits

0xc8cd,	// (0x000475ca) list_preview_fixed_pane_ParamLimits

0xc8e3,	// (0x000475e0) list_preview_fixed_pane_cp_ParamLimits

0xc8e3,	// (0x000475e0) list_preview_fixed_pane_cp

0xc8ef,	// (0x000475ec) popup_preview_fixed_window_g1_ParamLimits

0xc8ef,	// (0x000475ec) popup_preview_fixed_window_g1

0xc8fb,	// (0x000475f8) popup_preview_fixed_window_g2_ParamLimits

0xc8fb,	// (0x000475f8) popup_preview_fixed_window_g2

0x0002,

0xfb97,	// (0x0004a894) popup_preview_fixed_window_g_ParamLimits

0xfb97,	// (0x0004a894) popup_preview_fixed_window_g

0x6082,	// (0x00040d7f) aid_navi_side_left_pane_ParamLimits

0x6097,	// (0x00040d94) aid_navi_side_right_pane_ParamLimits

0x60af,	// (0x00040dac) navi_icon_pane_stacon_ParamLimits

0x60c3,	// (0x00040dc0) navi_navi_pane_stacon_ParamLimits

0x60af,	// (0x00040dac) navi_text_pane_stacon_ParamLimits

0x7763,	// (0x00042460) main_text_info_pane

0xcadb,	// (0x000477d8) listscroll_text_info_pane

0xcae3,	// (0x000477e0) list_text_info_pane_ParamLimits

0xcae3,	// (0x000477e0) list_text_info_pane

0xcaf2,	// (0x000477ef) scroll_pane_cp24_ParamLimits

0xcaf2,	// (0x000477ef) scroll_pane_cp24

0xcb10,	// (0x0004780d) list_text_info_pane_t1_ParamLimits

0xcb10,	// (0x0004780d) list_text_info_pane_t1

0x910c,	// (0x00043e09) popup_fast_swap2_window_ParamLimits

0x910c,	// (0x00043e09) popup_fast_swap2_window

0xcb35,	// (0x00047832) aid_size_cell_fast2

0x7763,	// (0x00042460) bg_popup_window_pane_cp17

0xa08c,	// (0x00044d89) heading_pane_cp2

0x7d41,	// (0x00042a3e) listscroll_fast2_pane

0xcb3f,	// (0x0004783c) grid_fast2_pane

0xcb49,	// (0x00047846) listscroll_fast2_pane_g1

0xcb53,	// (0x00047850) listscroll_fast2_pane_g2

0x0001,

0xfc13,	// (0x0004a910) listscroll_fast2_pane_g

0x8260,	// (0x00042f5d) scroll_pane_cp26

0xcb5d,	// (0x0004785a) cell_fast2_pane_ParamLimits

0xcb5d,	// (0x0004785a) cell_fast2_pane

0xcb74,	// (0x00047871) cell_fast2_pane_g1

0xcb7d,	// (0x0004787a) cell_fast2_pane_g2

0xcb86,	// (0x00047883) cell_fast2_pane_g3

0x0002,

0xfc18,	// (0x0004a915) cell_fast2_pane_g

0x7e3a,	// (0x00042b37) grid_highlight_pane_cp9

0x7e4f,	// (0x00042b4c) main_eswt_pane_ParamLimits

0x7e4f,	// (0x00042b4c) main_eswt_pane

0xcb07,	// (0x00047804) list_single_text_info_pane

0xcb8e,	// (0x0004788b) eswt_ctrl_button_pane

0xcb8e,	// (0x0004788b) eswt_ctrl_canvas_pane

0xcb96,	// (0x00047893) eswt_ctrl_combo_pane

0xcb8e,	// (0x0004788b) eswt_ctrl_default_pane

0xcb8e,	// (0x0004788b) eswt_ctrl_label_pane

0xcb9e,	// (0x0004789b) eswt_ctrl_wait_pane

0xcba6,	// (0x000478a3) eswt_shell_pane

0x7763,	// (0x00042460) listscroll_eswt_app_pane

0xcbc6,	// (0x000478c3) popup_eswt_tasktip_window_ParamLimits

0xcbc6,	// (0x000478c3) popup_eswt_tasktip_window

0x9cf4,	// (0x000449f1) bg_popup_window_pane_cp18

0xcbd7,	// (0x000478d4) eswt_control_pane_g1_ParamLimits

0xcbd7,	// (0x000478d4) eswt_control_pane_g1

0xcbe4,	// (0x000478e1) eswt_control_pane_g2_ParamLimits

0xcbe4,	// (0x000478e1) eswt_control_pane_g2

0xcbf1,	// (0x000478ee) eswt_control_pane_g3_ParamLimits

0xcbf1,	// (0x000478ee) eswt_control_pane_g3

0xcbfe,	// (0x000478fb) eswt_control_pane_g4_ParamLimits

0xcbfe,	// (0x000478fb) eswt_control_pane_g4

0x0003,

0xfc1f,	// (0x0004a91c) eswt_control_pane_g_ParamLimits

0xfc1f,	// (0x0004a91c) eswt_control_pane_g

0x80de,	// (0x00042ddb) bg_button_pane_ParamLimits

0x80de,	// (0x00042ddb) bg_button_pane

0x7e4f,	// (0x00042b4c) common_borders_pane_copy2_ParamLimits

0x7e4f,	// (0x00042b4c) common_borders_pane_copy2

0xcc0b,	// (0x00047908) control_button_pane_g1_ParamLimits

0xcc0b,	// (0x00047908) control_button_pane_g1

0xcc17,	// (0x00047914) control_button_pane_g2_ParamLimits

0xcc17,	// (0x00047914) control_button_pane_g2

0xcc23,	// (0x00047920) control_button_pane_g3_ParamLimits

0xcc23,	// (0x00047920) control_button_pane_g3

0x0002,

0xfc28,	// (0x0004a925) control_button_pane_g_ParamLimits

0xfc28,	// (0x0004a925) control_button_pane_g

0xcc37,	// (0x00047934) control_button_pane_t1

0xcc45,	// (0x00047942) control_button_pane_t2

0x0001,

0xfc2f,	// (0x0004a92c) control_button_pane_t

0x9c02,	// (0x000448ff) bg_button_pane_g1

0x9c0a,	// (0x00044907) bg_button_pane_g2

0x9c12,	// (0x0004490f) bg_button_pane_g3

0x9c1a,	// (0x00044917) bg_button_pane_g4

0x9c22,	// (0x0004491f) bg_button_pane_g5

0x9c2a,	// (0x00044927) bg_button_pane_g6

0x9c32,	// (0x0004492f) bg_button_pane_g7

0x9c3a,	// (0x00044937) bg_button_pane_g8

0x9c42,	// (0x0004493f) bg_button_pane_g9

0x0008,

0xf8a4,	// (0x0004a5a1) bg_button_pane_g

0xc20b,	// (0x00046f08) common_borders_pane_ParamLimits

0xc20b,	// (0x00046f08) common_borders_pane

0xcbd7,	// (0x000478d4) eswt_control_pane_g1_copy1_ParamLimits

0xcbd7,	// (0x000478d4) eswt_control_pane_g1_copy1

0xcbe4,	// (0x000478e1) eswt_control_pane_g2_copy1_ParamLimits

0xcbe4,	// (0x000478e1) eswt_control_pane_g2_copy1

0xcbf1,	// (0x000478ee) eswt_control_pane_g3_copy1_ParamLimits

0xcbf1,	// (0x000478ee) eswt_control_pane_g3_copy1

0xcbfe,	// (0x000478fb) eswt_control_pane_g4_copy1_ParamLimits

0xcbfe,	// (0x000478fb) eswt_control_pane_g4_copy1

0xc246,	// (0x00046f43) bg_eswt_ctrl_canvas_pane_g1

0xc20b,	// (0x00046f08) common_borders_pane_cp2_ParamLimits

0xc20b,	// (0x00046f08) common_borders_pane_cp2

0xc20b,	// (0x00046f08) common_borders_pane_cp3_ParamLimits

0xc20b,	// (0x00046f08) common_borders_pane_cp3

0xcc53,	// (0x00047950) separator_horizontal_pane

0xcc5b,	// (0x00047958) separator_vertical_pane

0xcbd7,	// (0x000478d4) eswt_control_pane_g1_copy2_ParamLimits

0xcbd7,	// (0x000478d4) eswt_control_pane_g1_copy2

0xcbe4,	// (0x000478e1) eswt_control_pane_g2_copy2_ParamLimits

0xcbe4,	// (0x000478e1) eswt_control_pane_g2_copy2

0xcbf1,	// (0x000478ee) eswt_control_pane_g3_copy2_ParamLimits

0xcbf1,	// (0x000478ee) eswt_control_pane_g3_copy2

0xcbfe,	// (0x000478fb) eswt_control_pane_g4_copy2_ParamLimits

0xcbfe,	// (0x000478fb) eswt_control_pane_g4_copy2

0x7763,	// (0x00042460) common_borders_pane_cp4

0xcc64,	// (0x00047961) separator_horizontal_pane_g1

0xcc6d,	// (0x0004796a) separator_horizontal_pane_g2

0xcc76,	// (0x00047973) separator_horizontal_pane_g3

0x0002,

0xfc34,	// (0x0004a931) separator_horizontal_pane_g

0xcbd7,	// (0x000478d4) eswt_control_pane_g1_copy3_ParamLimits

0xcbd7,	// (0x000478d4) eswt_control_pane_g1_copy3

0xcbe4,	// (0x000478e1) eswt_control_pane_g2_copy3_ParamLimits

0xcbe4,	// (0x000478e1) eswt_control_pane_g2_copy3

0xcbf1,	// (0x000478ee) eswt_control_pane_g3_copy3_ParamLimits

0xcbf1,	// (0x000478ee) eswt_control_pane_g3_copy3

0xcbfe,	// (0x000478fb) eswt_control_pane_g4_copy3_ParamLimits

0xcbfe,	// (0x000478fb) eswt_control_pane_g4_copy3

0x7763,	// (0x00042460) common_borders_pane_cp5

0xcc7f,	// (0x0004797c) separator_vertical_pane_g1

0xcc88,	// (0x00047985) separator_vertical_pane_g2

0xcc91,	// (0x0004798e) separator_vertical_pane_g3

0x0002,

0xfc3b,	// (0x0004a938) separator_vertical_pane_g

0xcbd7,	// (0x000478d4) eswt_control_pane_g1_copy4_ParamLimits

0xcbd7,	// (0x000478d4) eswt_control_pane_g1_copy4

0xcbe4,	// (0x000478e1) eswt_control_pane_g2_copy4_ParamLimits

0xcbe4,	// (0x000478e1) eswt_control_pane_g2_copy4

0xcbf1,	// (0x000478ee) eswt_control_pane_g3_copy4_ParamLimits

0xcbf1,	// (0x000478ee) eswt_control_pane_g3_copy4

0xcbfe,	// (0x000478fb) eswt_control_pane_g4_copy4_ParamLimits

0xcbfe,	// (0x000478fb) eswt_control_pane_g4_copy4

0xcc9a,	// (0x00047997) eswt_ctrl_combo_button_pane

0xcca2,	// (0x0004799f) eswt_ctrl_input_pane

0xccaa,	// (0x000479a7) popup_choice_list_window_cp70

0xccb2,	// (0x000479af) eswt_ctrl_input_pane_t1

0x7763,	// (0x00042460) input_focus_pane_cp70

0xc20b,	// (0x00046f08) bg_button_pane_cp70_ParamLimits

0xc20b,	// (0x00046f08) bg_button_pane_cp70

0xccc0,	// (0x000479bd) eswt_ctrl_combo_button_pane_g1

0xccc8,	// (0x000479c5) wait_bar_pane_cp70

0x9cf4,	// (0x000449f1) bg_popup_window_pane_cp70_ParamLimits

0x9cf4,	// (0x000449f1) bg_popup_window_pane_cp70

0xccd0,	// (0x000479cd) popup_eswt_tasktip_window_t1

0xcce6,	// (0x000479e3) wait_bar_pane_cp71_ParamLimits

0xcce6,	// (0x000479e3) wait_bar_pane_cp71

0xccf2,	// (0x000479ef) grid_eswt_app_pane

0x858b,	// (0x00043288) scroll_pane_cp70

0xccfb,	// (0x000479f8) cell_eswt_app_pane_ParamLimits

0xccfb,	// (0x000479f8) cell_eswt_app_pane

0xcd2d,	// (0x00047a2a) cell_eswt_app_pane_g1_ParamLimits

0xcd2d,	// (0x00047a2a) cell_eswt_app_pane_g1

0xcd5c,	// (0x00047a59) cell_eswt_app_pane_g2_ParamLimits

0xcd5c,	// (0x00047a59) cell_eswt_app_pane_g2

0x0001,

0xfc42,	// (0x0004a93f) cell_eswt_app_pane_g_ParamLimits

0xfc42,	// (0x0004a93f) cell_eswt_app_pane_g

0xcd85,	// (0x00047a82) cell_eswt_app_pane_t1_ParamLimits

0xcd85,	// (0x00047a82) cell_eswt_app_pane_t1

0xcdb7,	// (0x00047ab4) grid_highlight_pane_cp70_ParamLimits

0xcdb7,	// (0x00047ab4) grid_highlight_pane_cp70

0xb154,	// (0x00045e51) set_content_pane_g1

0x8fec,	// (0x00043ce9) status_small_volume_pane

0x6e20,	// (0x00041b1d) status_small_volume_pane_g1

0x6e28,	// (0x00041b25) volume_small2_pane

0x6e31,	// (0x00041b2e) volume_small2_pane_g1

0x6e3a,	// (0x00041b37) volume_small2_pane_g2

0x6e43,	// (0x00041b40) volume_small2_pane_g3

0x6e4c,	// (0x00041b49) volume_small2_pane_g4

0x6e55,	// (0x00041b52) volume_small2_pane_g5

0x6e5e,	// (0x00041b5b) volume_small2_pane_g6

0x6e67,	// (0x00041b64) volume_small2_pane_g7

0x6e70,	// (0x00041b6d) volume_small2_pane_g8

0x6e79,	// (0x00041b76) volume_small2_pane_g9

0x6e82,	// (0x00041b7f) volume_small2_pane_g10

0x0009,

0xfc47,	// (0x0004a944) volume_small2_pane_g

0xc632,	// (0x0004732f) fep_vkb_top_text_pane_g1_ParamLimits

0xc64d,	// (0x0004734a) fep_vkb_top_text_pane_t1_ParamLimits

0xc907,	// (0x00047604) popup_preview_fixed_window_g3_ParamLimits

0xc907,	// (0x00047604) popup_preview_fixed_window_g3

0x961d,	// (0x0004431a) popup_toolbar_trans_pane

0xaff9,	// (0x00045cf6) aid_height_set_list_ParamLimits

0xb00a,	// (0x00045d07) aid_size_parent_ParamLimits

0x90c6,	// (0x00043dc3) list_highlight_pane_cp2_ParamLimits

0xb154,	// (0x00045e51) set_content_pane_g1_ParamLimits

0xb25d,	// (0x00045f5a) list_single_image_pane_ParamLimits

0xb25d,	// (0x00045f5a) list_single_image_pane

0xcdc3,	// (0x00047ac0) aid_size_cell_image_ParamLimits

0xcdc3,	// (0x00047ac0) aid_size_cell_image

0xcdd0,	// (0x00047acd) grid_single_image_pane_ParamLimits

0xcdd0,	// (0x00047acd) grid_single_image_pane

0x80f8,	// (0x00042df5) list_single_image_pane_g1_ParamLimits

0x80f8,	// (0x00042df5) list_single_image_pane_g1

0x8104,	// (0x00042e01) list_single_image_pane_g2_ParamLimits

0x8104,	// (0x00042e01) list_single_image_pane_g2

0x0001,

0xfc5c,	// (0x0004a959) list_single_image_pane_g_ParamLimits

0xfc5c,	// (0x0004a959) list_single_image_pane_g

0xcdde,	// (0x00047adb) list_single_image_pane_t1_ParamLimits

0xcdde,	// (0x00047adb) list_single_image_pane_t1

0xcdf4,	// (0x00047af1) cell_image_list_pane_ParamLimits

0xcdf4,	// (0x00047af1) cell_image_list_pane

0xce0a,	// (0x00047b07) cell_image_list_pane_g1

0xce13,	// (0x00047b10) cell_image_list_pane_g2

0x0001,

0xfc61,	// (0x0004a95e) cell_image_list_pane_g

0xce1c,	// (0x00047b19) aid_size_cell_tb_trans_pane

0x80de,	// (0x00042ddb) bg_tb_trans_pane

0xce2e,	// (0x00047b2b) grid_tb_trans_pane

0x9c02,	// (0x000448ff) bg_tb_trans_pane_g1

0x9c0a,	// (0x00044907) bg_tb_trans_pane_g2

0x9c12,	// (0x0004490f) bg_tb_trans_pane_g3

0x9c1a,	// (0x00044917) bg_tb_trans_pane_g4

0x9c22,	// (0x0004491f) bg_tb_trans_pane_g5

0x9c3a,	// (0x00044937) bg_tb_trans_pane_g6

0x9c42,	// (0x0004493f) bg_tb_trans_pane_g7

0x9c2a,	// (0x00044927) bg_tb_trans_pane_g8

0x9c32,	// (0x0004492f) bg_tb_trans_pane_g9

0x0008,

0xfc66,	// (0x0004a963) bg_tb_trans_pane_g

0xce42,	// (0x00047b3f) cell_toolbar_trans_pane_ParamLimits

0xce42,	// (0x00047b3f) cell_toolbar_trans_pane

0xc246,	// (0x00046f43) cell_toolbar_trans_pane_g1

0xbe67,	// (0x00046b64) list_form2_midp_pane_t1

0xbe75,	// (0x00046b72) list_form2_midp_pane_t2

0x0001,

0xfb0f,	// (0x0004a80c) list_form2_midp_pane_t

0xbe83,	// (0x00046b80) scroll_pane_cp51_ParamLimits

0xc04a,	// (0x00046d47) form2_midp_wait_pane_g1

0xc053,	// (0x00046d50) form2_midp_wait_pane_g2

0xc05c,	// (0x00046d59) form2_midp_wait_pane_g3

0x0002,

0xfb24,	// (0x0004a821) form2_midp_wait_pane_g

0x7857,	// (0x00042554) list_highlight_pane_cp21_ParamLimits

0xc0a0,	// (0x00046d9d) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xc0af,	// (0x00046dac) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xb216,	// (0x00045f13) list_single_2graphic_im_pane_ParamLimits

0xb216,	// (0x00045f13) list_single_2graphic_im_pane

0xce68,	// (0x00047b65) list_single_2graphic_im_pane_g1_ParamLimits

0xce68,	// (0x00047b65) list_single_2graphic_im_pane_g1

0xce79,	// (0x00047b76) list_single_2graphic_im_pane_g2_ParamLimits

0xce79,	// (0x00047b76) list_single_2graphic_im_pane_g2

0xce85,	// (0x00047b82) list_single_2graphic_im_pane_g3_ParamLimits

0xce85,	// (0x00047b82) list_single_2graphic_im_pane_g3

0x0003,

0xfc79,	// (0x0004a976) list_single_2graphic_im_pane_g_ParamLimits

0xfc79,	// (0x0004a976) list_single_2graphic_im_pane_g

0xcea5,	// (0x00047ba2) list_single_2graphic_im_pane_t1_ParamLimits

0xcea5,	// (0x00047ba2) list_single_2graphic_im_pane_t1

0xc913,	// (0x00047610) list_single_graphic_2heading_pane_fp_ParamLimits

0xc913,	// (0x00047610) list_single_graphic_2heading_pane_fp

0x57f0,	// (0x000404ed) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x57f0,	// (0x000404ed) list_single_graphic_2heading_pane_fp_g1

0xc92c,	// (0x00047629) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc92c,	// (0x00047629) list_single_graphic_2heading_pane_fp_g2

0x5f4c,	// (0x00040c49) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x5f4c,	// (0x00040c49) list_single_graphic_2heading_pane_fp_g3

0x6ce3,	// (0x000419e0) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x6ce3,	// (0x000419e0) list_single_graphic_2heading_pane_fp_g4

0xc938,	// (0x00047635) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc938,	// (0x00047635) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfba7,	// (0x0004a8a4) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfba7,	// (0x0004a8a4) list_single_graphic_2heading_pane_fp_g

0x5939,	// (0x00040636) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x5939,	// (0x00040636) list_single_graphic_2heading_pane_fp_t1

0x5828,	// (0x00040525) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x5828,	// (0x00040525) list_single_graphic_2heading_pane_fp_t2

0x594f,	// (0x0004064c) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x594f,	// (0x0004064c) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc82,	// (0x0004a97f) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc82,	// (0x0004a97f) list_single_graphic_2heading_pane_fp_t

0xc2f4,	// (0x00046ff1) fep_hwr_write_pane_g5_ParamLimits

0xc2f4,	// (0x00046ff1) fep_hwr_write_pane_g5

0xc300,	// (0x00046ffd) fep_hwr_write_pane_g6_ParamLimits

0xc300,	// (0x00046ffd) fep_hwr_write_pane_g6

0xcba6,	// (0x000478a3) eswt_shell_pane_ParamLimits

0x9cf4,	// (0x000449f1) bg_popup_window_pane_cp18_ParamLimits

0xaf50,	// (0x00045c4d) heading_pane_cp70

0xccd0,	// (0x000479cd) popup_eswt_tasktip_window_t1_ParamLimits

0x9750,	// (0x0004444d) aid_touch_tab_arrow_left

0x975f,	// (0x0004445c) aid_touch_tab_arrow_right

0x779f,	// (0x0004249c) title_pane_g3_ParamLimits

0x779f,	// (0x0004249c) title_pane_g3

0x809d,	// (0x00042d9a) set_value_pane_g1

0x961d,	// (0x0004431a) popup_toolbar_trans_pane_ParamLimits

0xce1c,	// (0x00047b19) aid_size_cell_tb_trans_pane_ParamLimits

0x80de,	// (0x00042ddb) bg_tb_trans_pane_ParamLimits

0xce2e,	// (0x00047b2b) grid_tb_trans_pane_ParamLimits

0x7ae1,	// (0x000427de) cont_note_pane_ParamLimits

0x7ae1,	// (0x000427de) cont_note_pane

0x7e4f,	// (0x00042b4c) cont_snote2_single_text_pane_ParamLimits

0x7e4f,	// (0x00042b4c) cont_snote2_single_text_pane

0x7e4f,	// (0x00042b4c) cont_snote2_single_graphic_pane_ParamLimits

0x7e4f,	// (0x00042b4c) cont_snote2_single_graphic_pane

0xa277,	// (0x00044f74) cont_note_wait_pane_ParamLimits

0xa277,	// (0x00044f74) cont_note_wait_pane

0xa277,	// (0x00044f74) cont_note_image_pane_ParamLimits

0xa277,	// (0x00044f74) cont_note_image_pane

0xced6,	// (0x00047bd3) popup_note2_window_g1_ParamLimits

0xced6,	// (0x00047bd3) popup_note2_window_g1

0xcf07,	// (0x00047c04) popup_note2_window_t1_ParamLimits

0xcf07,	// (0x00047c04) popup_note2_window_t1

0xcf4c,	// (0x00047c49) popup_note2_window_t2_ParamLimits

0xcf4c,	// (0x00047c49) popup_note2_window_t2

0xcf91,	// (0x00047c8e) popup_note2_window_t3_ParamLimits

0xcf91,	// (0x00047c8e) popup_note2_window_t3

0xcfd6,	// (0x00047cd3) popup_note2_window_t4_ParamLimits

0xcfd6,	// (0x00047cd3) popup_note2_window_t4

0x7b65,	// (0x00042862) popup_note2_window_t5_ParamLimits

0x7b65,	// (0x00042862) popup_note2_window_t5

0x0004,

0xfc8e,	// (0x0004a98b) popup_note2_window_t_ParamLimits

0xfc8e,	// (0x0004a98b) popup_note2_window_t

0xd005,	// (0x00047d02) popup_note2_image_window_g1_ParamLimits

0xd005,	// (0x00047d02) popup_note2_image_window_g1

0xd011,	// (0x00047d0e) popup_note2_image_window_g2_ParamLimits

0xd011,	// (0x00047d0e) popup_note2_image_window_g2

0x0001,

0xfc99,	// (0x0004a996) popup_note2_image_window_g_ParamLimits

0xfc99,	// (0x0004a996) popup_note2_image_window_g

0xd023,	// (0x00047d20) popup_note2_image_window_t1_ParamLimits

0xd023,	// (0x00047d20) popup_note2_image_window_t1

0xd03b,	// (0x00047d38) popup_note2_image_window_t2_ParamLimits

0xd03b,	// (0x00047d38) popup_note2_image_window_t2

0xd053,	// (0x00047d50) popup_note2_image_window_t3_ParamLimits

0xd053,	// (0x00047d50) popup_note2_image_window_t3

0x0002,

0xfc9e,	// (0x0004a99b) popup_note2_image_window_t_ParamLimits

0xfc9e,	// (0x0004a99b) popup_note2_image_window_t

0xa285,	// (0x00044f82) popup_note2_wait_window_g1_ParamLimits

0xa285,	// (0x00044f82) popup_note2_wait_window_g1

0xd06f,	// (0x00047d6c) popup_note2_wait_window_g2_ParamLimits

0xd06f,	// (0x00047d6c) popup_note2_wait_window_g2

0xa29d,	// (0x00044f9a) popup_note2_wait_window_g3_ParamLimits

0xa29d,	// (0x00044f9a) popup_note2_wait_window_g3

0x0002,

0xfca5,	// (0x0004a9a2) popup_note2_wait_window_g_ParamLimits

0xfca5,	// (0x0004a9a2) popup_note2_wait_window_g

0xd07b,	// (0x00047d78) popup_note2_wait_window_t1_ParamLimits

0xd07b,	// (0x00047d78) popup_note2_wait_window_t1

0xd099,	// (0x00047d96) popup_note2_wait_window_t2_ParamLimits

0xd099,	// (0x00047d96) popup_note2_wait_window_t2

0xd0b7,	// (0x00047db4) popup_note2_wait_window_t3_ParamLimits

0xd0b7,	// (0x00047db4) popup_note2_wait_window_t3

0xd0c9,	// (0x00047dc6) popup_note2_wait_window_t4_ParamLimits

0xd0c9,	// (0x00047dc6) popup_note2_wait_window_t4

0x0003,

0xfcac,	// (0x0004a9a9) popup_note2_wait_window_t_ParamLimits

0xfcac,	// (0x0004a9a9) popup_note2_wait_window_t

0xd0db,	// (0x00047dd8) wait_bar2_pane_ParamLimits

0xd0db,	// (0x00047dd8) wait_bar2_pane

0xd0f3,	// (0x00047df0) popup_snote2_single_text_window_g1_ParamLimits

0xd0f3,	// (0x00047df0) popup_snote2_single_text_window_g1

0xd11b,	// (0x00047e18) popup_snote2_single_text_window_t1_ParamLimits

0xd11b,	// (0x00047e18) popup_snote2_single_text_window_t1

0xd167,	// (0x00047e64) popup_snote2_single_text_window_t2_ParamLimits

0xd167,	// (0x00047e64) popup_snote2_single_text_window_t2

0xd1b3,	// (0x00047eb0) popup_snote2_single_text_window_t3_ParamLimits

0xd1b3,	// (0x00047eb0) popup_snote2_single_text_window_t3

0xd1f4,	// (0x00047ef1) popup_snote2_single_text_window_t4_ParamLimits

0xd1f4,	// (0x00047ef1) popup_snote2_single_text_window_t4

0xd22a,	// (0x00047f27) popup_snote2_single_text_window_t5_ParamLimits

0xd22a,	// (0x00047f27) popup_snote2_single_text_window_t5

0x0004,

0xfcb5,	// (0x0004a9b2) popup_snote2_single_text_window_t_ParamLimits

0xfcb5,	// (0x0004a9b2) popup_snote2_single_text_window_t

0xd255,	// (0x00047f52) popup_snote2_single_graphic_window_g1_ParamLimits

0xd255,	// (0x00047f52) popup_snote2_single_graphic_window_g1

0xd27d,	// (0x00047f7a) popup_snote2_single_graphic_window_g2_ParamLimits

0xd27d,	// (0x00047f7a) popup_snote2_single_graphic_window_g2

0x0001,

0xfcc0,	// (0x0004a9bd) popup_snote2_single_graphic_window_g_ParamLimits

0xfcc0,	// (0x0004a9bd) popup_snote2_single_graphic_window_g

0xd2a5,	// (0x00047fa2) popup_snote2_single_graphic_window_t1_ParamLimits

0xd2a5,	// (0x00047fa2) popup_snote2_single_graphic_window_t1

0xd2f1,	// (0x00047fee) popup_snote2_single_graphic_window_t2_ParamLimits

0xd2f1,	// (0x00047fee) popup_snote2_single_graphic_window_t2

0xd1b3,	// (0x00047eb0) popup_snote2_single_graphic_window_t3_ParamLimits

0xd1b3,	// (0x00047eb0) popup_snote2_single_graphic_window_t3

0xd1f4,	// (0x00047ef1) popup_snote2_single_graphic_window_t4_ParamLimits

0xd1f4,	// (0x00047ef1) popup_snote2_single_graphic_window_t4

0xd22a,	// (0x00047f27) popup_snote2_single_graphic_window_t5_ParamLimits

0xd22a,	// (0x00047f27) popup_snote2_single_graphic_window_t5

0x0004,

0xfcc5,	// (0x0004a9c2) popup_snote2_single_graphic_window_t_ParamLimits

0xfcc5,	// (0x0004a9c2) popup_snote2_single_graphic_window_t

0xbd2d,	// (0x00046a2a) clock_nsta_pane_cp2_t1

0xbd2d,	// (0x00046a2a) clock_nsta_pane_cp2_t2

0x0001,

0xfae5,	// (0x0004a7e2) clock_nsta_pane_cp2_t

0x5298,	// (0x0003ff95) form_field_data_wide_pane_g1_ParamLimits

0x80f8,	// (0x00042df5) form_field_data_wide_pane_g2_ParamLimits

0x80f8,	// (0x00042df5) form_field_data_wide_pane_g2

0x8104,	// (0x00042e01) form_field_data_wide_pane_g3_ParamLimits

0x8104,	// (0x00042e01) form_field_data_wide_pane_g3

0x0002,

0xf6c4,	// (0x0004a3c1) form_field_data_wide_pane_g_ParamLimits

0xf6c4,	// (0x0004a3c1) form_field_data_wide_pane_g

0xbc39,	// (0x00046936) grid_touch_3_pane_ParamLimits

0xbc39,	// (0x00046936) grid_touch_3_pane

0xd33d,	// (0x0004803a) cell_touch_3_pane_ParamLimits

0xd33d,	// (0x0004803a) cell_touch_3_pane

0xc246,	// (0x00046f43) cell_touch_3_pane_g1

0xc246,	// (0x00046f43) cell_touch_3_pane_g2

0x0001,

0xfb6a,	// (0x0004a867) cell_touch_3_pane_g

0x7b97,	// (0x00042894) cont_query_data_pane

0x7b9f,	// (0x0004289c) cont_query_data_pane_cp1

0xd370,	// (0x0004806d) button_value_adjust_pane_cp7

0xd378,	// (0x00048075) query_popup_pane_cp3

0x8818,	// (0x00043515) bg_popup_sub_pane_cp22_ParamLimits

0x61c6,	// (0x00040ec3) navi_navi_volume_pane_cp2

0x61e1,	// (0x00040ede) popup_side_volume_key_window_g2

0x61f0,	// (0x00040eed) popup_side_volume_key_window_g3

0x0002,

0xf756,	// (0x0004a453) popup_side_volume_key_window_g

0x620d,	// (0x00040f0a) popup_side_volume_key_window_t2

0x0001,

0xf75d,	// (0x0004a45a) popup_side_volume_key_window_t

0x8ad3,	// (0x000437d0) popup_side_volume_key_window_ParamLimits

0x4e8b,	// (0x0003fb88) list_double_graphic_pane_g4_ParamLimits

0x4e8b,	// (0x0003fb88) list_double_graphic_pane_g4

0xb245,	// (0x00045f42) list_single_2heading_msg_pane_ParamLimits

0xb245,	// (0x00045f42) list_single_2heading_msg_pane

0x6e8b,	// (0x00041b88) list_single_2heading_msg_pane_g1_ParamLimits

0x6e8b,	// (0x00041b88) list_single_2heading_msg_pane_g1

0x9078,	// (0x00043d75) list_single_2heading_msg_pane_g2_ParamLimits

0x9078,	// (0x00043d75) list_single_2heading_msg_pane_g2

0x6e97,	// (0x00041b94) list_single_2heading_msg_pane_g3_ParamLimits

0x6e97,	// (0x00041b94) list_single_2heading_msg_pane_g3

0x6ea3,	// (0x00041ba0) list_single_2heading_msg_pane_g4_ParamLimits

0x6ea3,	// (0x00041ba0) list_single_2heading_msg_pane_g4

0x0003,

0xfcd0,	// (0x0004a9cd) list_single_2heading_msg_pane_g_ParamLimits

0xfcd0,	// (0x0004a9cd) list_single_2heading_msg_pane_g

0x596f,	// (0x0004066c) list_single_2heading_msg_pane_t1_ParamLimits

0x596f,	// (0x0004066c) list_single_2heading_msg_pane_t1

0x5997,	// (0x00040694) list_single_2heading_msg_pane_t2_ParamLimits

0x5997,	// (0x00040694) list_single_2heading_msg_pane_t2

0x59c6,	// (0x000406c3) list_single_2heading_msg_pane_t3_ParamLimits

0x59c6,	// (0x000406c3) list_single_2heading_msg_pane_t3

0x59ff,	// (0x000406fc) list_single_2heading_msg_pane_t4_ParamLimits

0x59ff,	// (0x000406fc) list_single_2heading_msg_pane_t4

0x0003,

0xfcd9,	// (0x0004a9d6) list_single_2heading_msg_pane_t_ParamLimits

0xfcd9,	// (0x0004a9d6) list_single_2heading_msg_pane_t

0x77ab,	// (0x000424a8) title_pane_g4_ParamLimits

0x77ab,	// (0x000424a8) title_pane_g4

0x5fd2,	// (0x00040ccf) title_pane_stacon_g3_ParamLimits

0x5fd2,	// (0x00040ccf) title_pane_stacon_g3

0xce99,	// (0x00047b96) list_single_2graphic_im_pane_g4_ParamLimits

0xce99,	// (0x00047b96) list_single_2graphic_im_pane_g4

0xaced,	// (0x000459ea) popup_side_volume_key_window_cp

0xb563,	// (0x00046260) main_idle_act2_pane_t1

0x65ba,	// (0x000412b7) toolbar_button_pane_g10

0x8047,	// (0x00042d44) popup_toolbar_window_cp1

0xbd1e,	// (0x00046a1b) clock_nsta_pane_cp_t1

0xbd1e,	// (0x00046a1b) clock_nsta_pane_cp_t2

0x0001,

0xfae0,	// (0x0004a7dd) clock_nsta_pane_cp_t

0x61c6,	// (0x00040ec3) navi_navi_volume_pane_cp2_ParamLimits

0x61d5,	// (0x00040ed2) popup_side_volume_key_window_g1_ParamLimits

0x61e1,	// (0x00040ede) popup_side_volume_key_window_g2_ParamLimits

0x61f0,	// (0x00040eed) popup_side_volume_key_window_g3_ParamLimits

0xf756,	// (0x0004a453) popup_side_volume_key_window_g_ParamLimits

0x6a7d,	// (0x0004177a) fep_hwr_aid_pane

0x25ec,	// (0x0003d2e9) bg_fep_hwr_top_pane_g4_ParamLimits

0xc2c4,	// (0x00046fc1) fep_hwr_top_pane_g1_ParamLimits

0xc2d6,	// (0x00046fd3) fep_hwr_top_pane_g2_ParamLimits

0x6b38,	// (0x00041835) fep_hwr_top_pane_g3_ParamLimits

0xfb35,	// (0x0004a832) fep_hwr_top_pane_g_ParamLimits

0x6b4d,	// (0x0004184a) fep_hwr_top_text_pane_ParamLimits

0xaaa2,	// (0x0004579f) aid_touch_tab_arrow_arrow_2

0xaaab,	// (0x000457a8) aid_touch_tab_arrow_left_2

0x6a91,	// (0x0004178e) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6ac8,	// (0x000417c5) fep_hwr_prediction_pane

0xc42c,	// (0x00047129) fep_vkb_prediction_pane

0xc532,	// (0x0004722f) fep_vkb_side_pane_g3_ParamLimits

0xc532,	// (0x0004722f) fep_vkb_side_pane_g3

0xc4de,	// (0x000471db) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc98c,	// (0x00047689) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xc999,	// (0x00047696) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbdf,	// (0x0004a8dc) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xd39f,	// (0x0004809c) fep_hwr_prediction_pane_g1

0x6ebb,	// (0x00041bb8) fep_hwr_prediction_pane_g2

0x6ec3,	// (0x00041bc0) fep_hwr_prediction_pane_g3

0x6ecb,	// (0x00041bc8) fep_hwr_prediction_pane_g4

0x0003,

0xfce2,	// (0x0004a9df) fep_hwr_prediction_pane_g

0xd39f,	// (0x0004809c) fep_vkb_prediction_pane_g1

0xd3a9,	// (0x000480a6) fep_vkb_prediction_pane_g2

0xd3b1,	// (0x000480ae) fep_vkb_prediction_pane_g3

0xd3b9,	// (0x000480b6) fep_vkb_prediction_pane_g4

0x0003,

0xfceb,	// (0x0004a9e8) fep_vkb_prediction_pane_g

0xb605,	// (0x00046302) slider_set_pane_g3

0xb619,	// (0x00046316) slider_set_pane_g4

0xb631,	// (0x0004632e) slider_set_pane_g5

0xb605,	// (0x00046302) slider_set_pane_g6

0x68af,	// (0x000415ac) slider_set_pane_g7

0xb19b,	// (0x00045e98) slider_form_pane_g3

0xb1a4,	// (0x00045ea1) slider_form_pane_g4

0xb1ac,	// (0x00045ea9) slider_form_pane_g5

0xb19b,	// (0x00045e98) slider_form_pane_g6

0xb1b4,	// (0x00045eb1) slider_form_pane_g7

0xb873,	// (0x00046570) slider_set_pane_vc_g3

0xb87c,	// (0x00046579) slider_set_pane_vc_g4

0xb885,	// (0x00046582) slider_set_pane_vc_g5

0xb873,	// (0x00046570) slider_set_pane_vc_g6

0xb88e,	// (0x0004658b) slider_set_pane_vc_g7

0xb873,	// (0x00046570) slider_form_pane_vc_g1

0xb87c,	// (0x00046579) slider_form_pane_vc_g2

0xb885,	// (0x00046582) slider_form_pane_vc_g3

0xb873,	// (0x00046570) slider_form_pane_vc_g4

0xba43,	// (0x00046740) slider_form_pane_vc_g5

0x0004,

0xfac6,	// (0x0004a7c3) slider_form_pane_vc_g

0x7763,	// (0x00042460) main_idle_act3_pane

0xd3c1,	// (0x000480be) ai3_links_pane

0xd3ca,	// (0x000480c7) popup_ai3_data_window_ParamLimits

0xd3ca,	// (0x000480c7) popup_ai3_data_window

0x7763,	// (0x00042460) grid_ai3_links_pane

0xd3e8,	// (0x000480e5) cell_ai3_links_pane_ParamLimits

0xd3e8,	// (0x000480e5) cell_ai3_links_pane

0xd402,	// (0x000480ff) bg_popup_sub_pane_cp11

0xd40f,	// (0x0004810c) cell_ai3_links_pane_g1

0x7763,	// (0x00042460) bg_popup_sub_pane_cp12

0xd434,	// (0x00048131) heading_ai3_data_pane

0xd43c,	// (0x00048139) list_ai3_gene_pane

0xd448,	// (0x00048145) popup_ai3_data_window_g1

0xd450,	// (0x0004814d) heading_ai3_data_pane_g1

0xd458,	// (0x00048155) heading_ai3_data_pane_t1

0xd466,	// (0x00048163) list_double_ai3_gene_pane_ParamLimits

0xd466,	// (0x00048163) list_double_ai3_gene_pane

0xd473,	// (0x00048170) list_single_ai3_gene_pane_ParamLimits

0xd473,	// (0x00048170) list_single_ai3_gene_pane

0xc20b,	// (0x00046f08) list_highlight_pane_cp7_ParamLimits

0xc20b,	// (0x00046f08) list_highlight_pane_cp7

0xd480,	// (0x0004817d) list_single_a13_gene_pane_t1_ParamLimits

0xd480,	// (0x0004817d) list_single_a13_gene_pane_t1

0xd497,	// (0x00048194) list_single_ai3_gene_pane_g1

0xd4a0,	// (0x0004819d) list_single_ai3_gene_pane_g2

0x0001,

0xfcf4,	// (0x0004a9f1) list_single_ai3_gene_pane_g

0xd4a8,	// (0x000481a5) list_double_ai3_gene_pane_g1_ParamLimits

0xd4a8,	// (0x000481a5) list_double_ai3_gene_pane_g1

0xd4b4,	// (0x000481b1) list_double_ai3_gene_pane_t1_ParamLimits

0xd4b4,	// (0x000481b1) list_double_ai3_gene_pane_t1

0xd4d0,	// (0x000481cd) list_double_ai3_gene_pane_t2_ParamLimits

0xd4d0,	// (0x000481cd) list_double_ai3_gene_pane_t2

0xd4e5,	// (0x000481e2) list_double_ai3_gene_pane_t3_ParamLimits

0xd4e5,	// (0x000481e2) list_double_ai3_gene_pane_t3

0x0002,

0xfcf9,	// (0x0004a9f6) list_double_ai3_gene_pane_t_ParamLimits

0xfcf9,	// (0x0004a9f6) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x5965,	// (0x00040662) aid_size_min_col_2

0xd389,	// (0x00048086) aid_size_min_msg_ParamLimits

0xd389,	// (0x00048086) aid_size_min_msg

0xc63e,	// (0x0004733b) fep_vkb_top_text_pane_g2_ParamLimits

0xc63e,	// (0x0004733b) fep_vkb_top_text_pane_g2

0x0001,

0xfb65,	// (0x0004a862) fep_vkb_top_text_pane_g_ParamLimits

0xfb65,	// (0x0004a862) fep_vkb_top_text_pane_g

0x7763,	// (0x00042460) main_hc_apps_shell_pane

0xd502,	// (0x000481ff) grid_hc_apps_pane_ParamLimits

0xd502,	// (0x000481ff) grid_hc_apps_pane

0xd511,	// (0x0004820e) list_hc_apps_pane

0xd519,	// (0x00048216) scroll_pane_cp37_ParamLimits

0xd519,	// (0x00048216) scroll_pane_cp37

0xd525,	// (0x00048222) cell_hc_apps_pane_ParamLimits

0xd525,	// (0x00048222) cell_hc_apps_pane

0xd5dd,	// (0x000482da) cell_hc_apps_pane_g1_ParamLimits

0xd5dd,	// (0x000482da) cell_hc_apps_pane_g1

0xd60e,	// (0x0004830b) cell_hc_apps_pane_g2_ParamLimits

0xd60e,	// (0x0004830b) cell_hc_apps_pane_g2

0xd62a,	// (0x00048327) cell_hc_apps_pane_g3_ParamLimits

0xd62a,	// (0x00048327) cell_hc_apps_pane_g3

0x0002,

0xfd00,	// (0x0004a9fd) cell_hc_apps_pane_g_ParamLimits

0xfd00,	// (0x0004a9fd) cell_hc_apps_pane_g

0xd64c,	// (0x00048349) cell_hc_apps_pane_t1_ParamLimits

0xd64c,	// (0x00048349) cell_hc_apps_pane_t1

0x7ae1,	// (0x000427de) grid_highlight_pane_cp10_ParamLimits

0x7ae1,	// (0x000427de) grid_highlight_pane_cp10

0xd68c,	// (0x00048389) list_single_hc_apps_pane_ParamLimits

0xd68c,	// (0x00048389) list_single_hc_apps_pane

0xd6cb,	// (0x000483c8) list_single_hc_apps_pane_g1

0x6ed3,	// (0x00041bd0) list_single_hc_apps_pane_g2

0x0001,

0xfd07,	// (0x0004aa04) list_single_hc_apps_pane_g

0x6eec,	// (0x00041be9) list_single_hc_apps_pane_g2_copy1

0x5a24,	// (0x00040721) list_single_hc_apps_pane_t1

0x7857,	// (0x00042554) bg_set_opt_pane_cp_ParamLimits

0x5e53,	// (0x00040b50) setting_slider_pane_t1_ParamLimits

0x5e69,	// (0x00040b66) setting_slider_pane_t2_ParamLimits

0x5e83,	// (0x00040b80) setting_slider_pane_t3_ParamLimits

0xf5a2,	// (0x0004a29f) setting_slider_pane_t_ParamLimits

0x5e9b,	// (0x00040b98) slider_set_pane_ParamLimits

0x648a,	// (0x00041187) control_pane_g5_ParamLimits

0x648a,	// (0x00041187) control_pane_g5

0xafbc,	// (0x00045cb9) slider_set_pane_g1_ParamLimits

0x68a3,	// (0x000415a0) slider_set_pane_g2_ParamLimits

0xb605,	// (0x00046302) slider_set_pane_g3_ParamLimits

0xb619,	// (0x00046316) slider_set_pane_g4_ParamLimits

0xb631,	// (0x0004632e) slider_set_pane_g5_ParamLimits

0xb605,	// (0x00046302) slider_set_pane_g6_ParamLimits

0x68af,	// (0x000415ac) slider_set_pane_g7_ParamLimits

0xf9a2,	// (0x0004a69f) slider_set_pane_g_ParamLimits

0x8bb8,	// (0x000438b5) navi_icon_text_pane_ParamLimits

0x970f,	// (0x0004440c) aid_fill_nsta_2_ParamLimits

0x9750,	// (0x0004444d) aid_touch_tab_arrow_left_ParamLimits

0x975f,	// (0x0004445c) aid_touch_tab_arrow_right_ParamLimits

0x97cc,	// (0x000444c9) clock_nsta_pane_ParamLimits

0xaa7e,	// (0x0004577b) navi_icon_pane_g1_ParamLimits

0xaa8d,	// (0x0004578a) navi_text_pane_t1_ParamLimits

0xbe3b,	// (0x00046b38) navi_icon_text_pane_g1_ParamLimits

0xbe4a,	// (0x00046b47) navi_icon_text_pane_t1_ParamLimits

0xd6cb,	// (0x000483c8) list_single_hc_apps_pane_g1_ParamLimits

0x6ed3,	// (0x00041bd0) list_single_hc_apps_pane_g2_ParamLimits

0xfd07,	// (0x0004aa04) list_single_hc_apps_pane_g_ParamLimits

0x6eec,	// (0x00041be9) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x5a24,	// (0x00040721) list_single_hc_apps_pane_t1_ParamLimits

0x5d5d,	// (0x00040a5a) popup_toolbar2_fixed_window_ParamLimits

0x5d5d,	// (0x00040a5a) popup_toolbar2_fixed_window

0x9613,	// (0x00044310) popup_toolbar2_float_window

0x7763,	// (0x00042460) bg_popup_sub_pane_cp27

0xd6e4,	// (0x000483e1) grid_toolbar2_float_pane

0x7763,	// (0x00042460) bg_popup_sub_pane_cp26

0xd6e4,	// (0x000483e1) grid_toolbar2_fixed_pane

0xd6ec,	// (0x000483e9) cell_toolbar2_fixed_pane_ParamLimits

0xd6ec,	// (0x000483e9) cell_toolbar2_fixed_pane

0xd6fc,	// (0x000483f9) cell_toolbar2_fixed_pane_g1

0xd705,	// (0x00048402) toolbar2_fixed_button_pane

0x9c02,	// (0x000448ff) toolbar2_fixed_button_pane_g1

0x9c0a,	// (0x00044907) toolbar2_fixed_button_pane_g2

0x9c12,	// (0x0004490f) toolbar2_fixed_button_pane_g3

0x9c1a,	// (0x00044917) toolbar2_fixed_button_pane_g4

0x9c22,	// (0x0004491f) toolbar2_fixed_button_pane_g5

0x9c2a,	// (0x00044927) toolbar2_fixed_button_pane_g6

0x9c32,	// (0x0004492f) toolbar2_fixed_button_pane_g7

0x9c3a,	// (0x00044937) toolbar2_fixed_button_pane_g8

0x9c42,	// (0x0004493f) toolbar2_fixed_button_pane_g9

0x0008,

0xf8a4,	// (0x0004a5a1) toolbar2_fixed_button_pane_g

0xd70d,	// (0x0004840a) cell_toolbar2_float_pane_ParamLimits

0xd70d,	// (0x0004840a) cell_toolbar2_float_pane

0xd71e,	// (0x0004841b) cell_toolbar2_float_pane_g1

0xd705,	// (0x00048402) toolbar2_fixed_button_pane_cp

0xc39a,	// (0x00047097) fep_vkb_accented_list_pane_ParamLimits

0xc39a,	// (0x00047097) fep_vkb_accented_list_pane

0x6caf,	// (0x000419ac) bg_popup_fep_shadow_pane_g9

0x8d3c,	// (0x00043a39) bg_popup_fep_shadow_pane_cp3

0x8247,	// (0x00042f44) list_accented_list_pane

0xd727,	// (0x00048424) list_single_accented_list_pane_ParamLimits

0xd727,	// (0x00048424) list_single_accented_list_pane

0x8d3c,	// (0x00043a39) list_highlight_pane_cp10

0xd738,	// (0x00048435) list_single_accented_list_pane_t1

0x9559,	// (0x00044256) popup_slider_window_ParamLimits

0x9559,	// (0x00044256) popup_slider_window

0xd380,	// (0x0004807d) aid_indentation_list_msg

0xd804,	// (0x00048501) bg_popup_window_pane_cp19

0xd872,	// (0x0004856f) popup_slider_window_g1

0xd88e,	// (0x0004858b) popup_slider_window_g2

0xd8aa,	// (0x000485a7) popup_slider_window_g3

0x0005,

0xfd0c,	// (0x0004aa09) popup_slider_window_g

0xd906,	// (0x00048603) popup_slider_window_t1

0xd97a,	// (0x00048677) small_volume_slider_vertical_pane

0xc246,	// (0x00046f43) small_volume_slider_vertical_pane_g1

0xc246,	// (0x00046f43) small_volume_slider_vertical_pane_g2

0xd996,	// (0x00048693) small_volume_slider_vertical_pane_g3

0x0002,

0xfd1e,	// (0x0004aa1b) small_volume_slider_vertical_pane_g

0x5b15,	// (0x00040812) area_side_right_pane_ParamLimits

0x5b15,	// (0x00040812) area_side_right_pane

0x6f08,	// (0x00041c05) aid_size_side_button_ParamLimits

0x6f08,	// (0x00041c05) aid_size_side_button

0x6f1c,	// (0x00041c19) grid_sctrl_middle_pane_ParamLimits

0x6f1c,	// (0x00041c19) grid_sctrl_middle_pane

0x6f3c,	// (0x00041c39) sctrl_sk_bottom_pane

0x6f4d,	// (0x00041c4a) sctrl_sk_top_pane

0x6f5f,	// (0x00041c5c) aid_touch_sctrl_top

0x7ae1,	// (0x000427de) bg_sctrl_sk_pane_ParamLimits

0x7ae1,	// (0x000427de) bg_sctrl_sk_pane

0x6f6c,	// (0x00041c69) sctrl_sk_top_pane_g1

0x6f79,	// (0x00041c76) sctrl_sk_top_pane_t1

0x6f5f,	// (0x00041c5c) aid_touch_sctrl_bottom

0x7ae1,	// (0x000427de) bg_sctrl_sk_pane_cp_ParamLimits

0x7ae1,	// (0x000427de) bg_sctrl_sk_pane_cp

0x6f94,	// (0x00041c91) sctrl_sk_bottom_pane_g1

0x6f79,	// (0x00041c76) sctrl_sk_bottom_pane_t1

0x6f9d,	// (0x00041c9a) cell_sctrl_middle_pane_ParamLimits

0x6f9d,	// (0x00041c9a) cell_sctrl_middle_pane

0x6fba,	// (0x00041cb7) aid_touch_sctrl_middle_ParamLimits

0x6fba,	// (0x00041cb7) aid_touch_sctrl_middle

0x80de,	// (0x00042ddb) bg_sctrl_middle_pane_ParamLimits

0x80de,	// (0x00042ddb) bg_sctrl_middle_pane

0xc4de,	// (0x000471db) cell_sctrl_middle_pane_g1_ParamLimits

0xc4de,	// (0x000471db) cell_sctrl_middle_pane_g1

0x6fcc,	// (0x00041cc9) cell_sctrl_middle_pane_g2_ParamLimits

0x6fcc,	// (0x00041cc9) cell_sctrl_middle_pane_g2

0x0001,

0xfd2a,	// (0x0004aa27) cell_sctrl_middle_pane_g_ParamLimits

0xfd2a,	// (0x0004aa27) cell_sctrl_middle_pane_g

0x9c02,	// (0x000448ff) bg_sctrl_middle_pane_g1

0x9c0a,	// (0x00044907) bg_sctrl_middle_pane_g2

0x9c12,	// (0x0004490f) bg_sctrl_middle_pane_g3

0x9c1a,	// (0x00044917) bg_sctrl_middle_pane_g4

0x9c22,	// (0x0004491f) bg_sctrl_middle_pane_g5

0x9c2a,	// (0x00044927) bg_sctrl_middle_pane_g6

0x9c32,	// (0x0004492f) bg_sctrl_middle_pane_g7

0x9c3a,	// (0x00044937) bg_sctrl_middle_pane_g8

0x0007,

0xfd2f,	// (0x0004aa2c) bg_sctrl_middle_pane_g

0x9c42,	// (0x0004493f) bg_sctrl_middle_pane_g8_copy1

0x9c02,	// (0x000448ff) bg_sctrl_sk_pane_g1

0x9c0a,	// (0x00044907) bg_sctrl_sk_pane_g2

0x9c12,	// (0x0004490f) bg_sctrl_sk_pane_g3

0x0008,

0xf8a4,	// (0x0004a5a1) bg_sctrl_sk_pane_g

0x800d,	// (0x00042d0a) aid_size_touch_scroll_bar

0x9c1a,	// (0x00044917) bg_sctrl_sk_pane_g4

0x9c22,	// (0x0004491f) bg_sctrl_sk_pane_g5

0x9c2a,	// (0x00044927) bg_sctrl_sk_pane_g6

0x9c32,	// (0x0004492f) bg_sctrl_sk_pane_g7

0x9c3a,	// (0x00044937) bg_sctrl_sk_pane_g8

0x9c42,	// (0x0004493f) bg_sctrl_sk_pane_g9

0x9170,	// (0x00043e6d) popup_fep_china_hwr2_fs_candidate_window

0x917a,	// (0x00043e77) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x917a,	// (0x00043e77) popup_fep_china_hwr2_fs_control_window

0xc4de,	// (0x000471db) sctrl_sk_top_pane_g2

0x0001,

0xfd25,	// (0x0004aa22) sctrl_sk_top_pane_g

0xd99f,	// (0x0004869c) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd99f,	// (0x0004869c) aid_fep_china_hwr2_fs_cell

0xd9b2,	// (0x000486af) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd9b2,	// (0x000486af) bg_popup_fep_shadow_pane_cp4

0xd9cb,	// (0x000486c8) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd9cb,	// (0x000486c8) bg_popup_fep_shadow_pane_cp5

0xd9dd,	// (0x000486da) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd9dd,	// (0x000486da) popup_fep_china_hwr2_fs_control_bar_grid

0xd9ed,	// (0x000486ea) popup_fep_china_hwr2_fs_control_funtion_grid

0xd9f5,	// (0x000486f2) aid_fep_china_hwr2_fs_candi_cell

0x7763,	// (0x00042460) bg_popup_fep_shadow_pane_cp6

0xd9ff,	// (0x000486fc) popup_fep_china_hwr2_fs_candidate_grid

0xda09,	// (0x00048706) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xda09,	// (0x00048706) cell_fep_china_hwr2_fs_funtion_grid

0xc246,	// (0x00046f43) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xda21,	// (0x0004871e) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xda21,	// (0x0004871e) cell_fep_china_hwr2_fs_funtion_grid_g1

0xda2f,	// (0x0004872c) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xda2f,	// (0x0004872c) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd40,	// (0x0004aa3d) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd40,	// (0x0004aa3d) cell_fep_china_hwr2_fs_funtion_grid_g

0xda45,	// (0x00048742) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xda45,	// (0x00048742) cell_fep_china_hwr2_fs_funtion_grid_t1

0xda5a,	// (0x00048757) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xda5a,	// (0x00048757) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd45,	// (0x0004aa42) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd45,	// (0x0004aa42) cell_fep_china_hwr2_fs_funtion_grid_t

0xda76,	// (0x00048773) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xda7e,	// (0x0004877b) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xda86,	// (0x00048783) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd4a,	// (0x0004aa47) popup_fep_china_hwr2_fs_control_bar_grid_g

0xda8e,	// (0x0004878b) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xda8e,	// (0x0004878b) cell_fep_china_hwr2_fs_candidate_grid

0xdaad,	// (0x000487aa) popup_fep_china_hwr2_fs_candidate_grid_g20

0xdab5,	// (0x000487b2) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc246,	// (0x00046f43) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc246,	// (0x00046f43) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb6a,	// (0x0004a867) cell_fep_china_hwr2_fs_candidate_grid_g

0xdabd,	// (0x000487ba) cell_fep_china_hwr2_fs_candidate_grid_t1

0x97df,	// (0x000444dc) clock_nsta_pane_cp_24_ParamLimits

0x97df,	// (0x000444dc) clock_nsta_pane_cp_24

0x985f,	// (0x0004455c) indicator_nsta_pane_cp_24_ParamLimits

0x985f,	// (0x0004455c) indicator_nsta_pane_cp_24

0xa8fa,	// (0x000455f7) heading_pane_g1

0x0001,

0xf909,	// (0x0004a606) heading_pane_g

0xb3aa,	// (0x000460a7) grid_sct_catagory_button_pane

0xb3dc,	// (0x000460d9) scroll_pane_cp5_ParamLimits

0xbe8f,	// (0x00046b8c) button_value_adjust_pane_cp5_ParamLimits

0xbe8f,	// (0x00046b8c) button_value_adjust_pane_cp5

0xbf74,	// (0x00046c71) form2_midp_time_pane_ParamLimits

0xdacb,	// (0x000487c8) cell_sct_catagory_button_pane_ParamLimits

0xdacb,	// (0x000487c8) cell_sct_catagory_button_pane

0xc20b,	// (0x00046f08) bg_button_pane_cp01_ParamLimits

0xc20b,	// (0x00046f08) bg_button_pane_cp01

0xc246,	// (0x00046f43) cell_sct_catagory_button_pane_g1

0x959a,	// (0x00044297) popup_tb_extension_window

0xdadd,	// (0x000487da) aid_size_cell_ext_ParamLimits

0xdadd,	// (0x000487da) aid_size_cell_ext

0x7ae1,	// (0x000427de) bg_tb_trans_pane_cp1_ParamLimits

0x7ae1,	// (0x000427de) bg_tb_trans_pane_cp1

0xdafd,	// (0x000487fa) grid_tb_ext_pane_ParamLimits

0xdafd,	// (0x000487fa) grid_tb_ext_pane

0xdb2d,	// (0x0004882a) cell_tb_ext_pane_ParamLimits

0xdb2d,	// (0x0004882a) cell_tb_ext_pane

0xdb44,	// (0x00048841) cell_tb_ext_pane_g1_ParamLimits

0xdb44,	// (0x00048841) cell_tb_ext_pane_g1

0xdb61,	// (0x0004885e) cell_tb_ext_pane_t1

0x7ae1,	// (0x000427de) list_highlight_pane_cp11_ParamLimits

0x7ae1,	// (0x000427de) list_highlight_pane_cp11

0x5d7c,	// (0x00040a79) popup_uni_indicator_window_ParamLimits

0x5d7c,	// (0x00040a79) popup_uni_indicator_window

0x80de,	// (0x00042ddb) bg_popup_sub_pane_cp14

0xdb7c,	// (0x00048879) list_uniindi_pane

0xdb88,	// (0x00048885) uniindi_top_pane

0x7ae1,	// (0x000427de) bg_uniindi_top_pane

0xdba9,	// (0x000488a6) uniindi_top_pane_g1

0xdbbf,	// (0x000488bc) uniindi_top_pane_g2

0x0003,

0xfd51,	// (0x0004aa4e) uniindi_top_pane_g

0xdbe9,	// (0x000488e6) uniindi_top_pane_t1

0xdc15,	// (0x00048912) list_single_uniindi_pane_ParamLimits

0xdc15,	// (0x00048912) list_single_uniindi_pane

0xc246,	// (0x00046f43) bg_uniindi_top_pane_g1

0xdc27,	// (0x00048924) list_single_uniindi_pane_g1

0xdc3a,	// (0x00048937) list_single_uniindi_pane_t1

0x7763,	// (0x00042460) control_bg_pane

0xdc5f,	// (0x0004895c) bg_sctrl_sk_pane_cp1

0xdc68,	// (0x00048965) bg_sctrl_sk_pane_cp2

0xdc71,	// (0x0004896e) control_bg_pane_g1

0xdc7a,	// (0x00048977) control_bg_pane_g2

0x0001,

0xfd5a,	// (0x0004aa57) control_bg_pane_g

0xbce3,	// (0x000469e0) cell_indicator_nsta_pane_g1_ParamLimits

0xbcf1,	// (0x000469ee) cell_indicator_nsta_pane_g2_ParamLimits

0xfadb,	// (0x0004a7d8) cell_indicator_nsta_pane_g_ParamLimits

0x57c6,	// (0x000404c3) form2_midp_time_pane_t1_ParamLimits

0x7e4f,	// (0x00042b4c) main_idle_act4_pane_ParamLimits

0x7e4f,	// (0x00042b4c) main_idle_act4_pane

0x959a,	// (0x00044297) popup_tb_extension_window_ParamLimits

0xdb1f,	// (0x0004881c) tb_ext_find_pane_ParamLimits

0xdb1f,	// (0x0004881c) tb_ext_find_pane

0xdc83,	// (0x00048980) ai_gene_pane_1_cp1

0x8e85,	// (0x00043b82) ai_gene_pane_2_cp1

0xdc8b,	// (0x00048988) list_single_idle_plugin_calendar_pane

0xdc94,	// (0x00048991) list_single_idle_plugin_notification_pane

0xdc9d,	// (0x0004899a) list_single_idle_plugin_player_pane

0xdca6,	// (0x000489a3) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdca6,	// (0x000489a3) list_single_idle_plugin_shortcut_pane

0xdcc8,	// (0x000489c5) main_idle_act4_pane_t1

0xdcda,	// (0x000489d7) main_idle_act4_pane_t2

0x0001,

0xfd5f,	// (0x0004aa5c) main_idle_act4_pane_t

0xdcec,	// (0x000489e9) middle_sk_idle_act4_pane_ParamLimits

0xdcec,	// (0x000489e9) middle_sk_idle_act4_pane

0xdd02,	// (0x000489ff) popup_clock_digital_analogue_window_cp2

0xdd1c,	// (0x00048a19) shortcut_wheel_idle_act4_pane_ParamLimits

0xdd1c,	// (0x00048a19) shortcut_wheel_idle_act4_pane

0xc246,	// (0x00046f43) shortcut_wheel_idle_act4_pane_g1

0xc246,	// (0x00046f43) shortcut_wheel_idle_act4_pane_g2

0xc246,	// (0x00046f43) shortcut_wheel_idle_act4_pane_g3

0xc246,	// (0x00046f43) shortcut_wheel_idle_act4_pane_g4

0xc246,	// (0x00046f43) shortcut_wheel_idle_act4_pane_g5

0xdd30,	// (0x00048a2d) shortcut_wheel_idle_act4_pane_g6

0xdd38,	// (0x00048a35) shortcut_wheel_idle_act4_pane_g7

0xdd40,	// (0x00048a3d) shortcut_wheel_idle_act4_pane_g8

0xdd48,	// (0x00048a45) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd64,	// (0x0004aa61) shortcut_wheel_idle_act4_pane_g

0xc4de,	// (0x000471db) middle_sk_idle_act4_pane_g1_ParamLimits

0xc4de,	// (0x000471db) middle_sk_idle_act4_pane_g1

0xddac,	// (0x00048aa9) middle_sk_idle_act4_pane_g2_ParamLimits

0xddac,	// (0x00048aa9) middle_sk_idle_act4_pane_g2

0x0001,

0xfd87,	// (0x0004aa84) middle_sk_idle_act4_pane_g_ParamLimits

0xfd87,	// (0x0004aa84) middle_sk_idle_act4_pane_g

0xddb8,	// (0x00048ab5) middle_sk_idle_act4_pane_t1_ParamLimits

0xddb8,	// (0x00048ab5) middle_sk_idle_act4_pane_t1

0xddd5,	// (0x00048ad2) grid_ai_shortcut_pane_ParamLimits

0xddd5,	// (0x00048ad2) grid_ai_shortcut_pane

0xddee,	// (0x00048aeb) list_highlight_pane_cp16_ParamLimits

0xddee,	// (0x00048aeb) list_highlight_pane_cp16

0xddfb,	// (0x00048af8) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xddfb,	// (0x00048af8) list_single_idle_plugin_shortcut_pane_g1

0xde07,	// (0x00048b04) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xde07,	// (0x00048b04) list_single_idle_plugin_shortcut_pane_g2

0xde21,	// (0x00048b1e) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xde21,	// (0x00048b1e) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd8c,	// (0x0004aa89) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd8c,	// (0x0004aa89) list_single_idle_plugin_shortcut_pane_g

0xde34,	// (0x00048b31) cell_ai_shortcut_pane_ParamLimits

0xde34,	// (0x00048b31) cell_ai_shortcut_pane

0xde57,	// (0x00048b54) cell_ai_shortcut_pane_g1_ParamLimits

0xde57,	// (0x00048b54) cell_ai_shortcut_pane_g1

0xdc83,	// (0x00048980) ai_gene_pane_1_cp2

0xde79,	// (0x00048b76) ai_gene_pane_2_cp2

0xde81,	// (0x00048b7e) list_highlight_pane_cp15

0xde8a,	// (0x00048b87) list_single_idle_plugin_calendar_pane_g1

0xde81,	// (0x00048b7e) list_highlight_pane_cp17

0xde92,	// (0x00048b8f) list_single_idle_plugin_calendar_pane_g1_copy1

0xde9a,	// (0x00048b97) list_single_idle_plugin_player_pane_g1

0xb653,	// (0x00046350) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd93,	// (0x0004aa90) list_single_idle_plugin_player_pane_g

0xdea2,	// (0x00048b9f) list_single_idle_plugin_player_pane_t1

0xdeb0,	// (0x00048bad) list_single_idle_plugin_player_pane_t2

0xdebe,	// (0x00048bbb) list_single_idle_plugin_player_pane_t3

0xdecc,	// (0x00048bc9) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd98,	// (0x0004aa95) list_single_idle_plugin_player_pane_t

0xdeda,	// (0x00048bd7) wait_bar_pane_cp15

0xdee2,	// (0x00048bdf) grid_ai_notification_pane

0xb653,	// (0x00046350) list_single_idle_plugin_notification_pane_g1

0xdeeb,	// (0x00048be8) cell_ai_notification_pane_ParamLimits

0xdeeb,	// (0x00048be8) cell_ai_notification_pane

0xdef8,	// (0x00048bf5) cell_ai_notification_pane_g1

0xdf00,	// (0x00048bfd) cell_ai_notification_pane_t1

0xdf0e,	// (0x00048c0b) tb_ext_find_button_pane

0xdf16,	// (0x00048c13) tb_ext_find_pane_g1

0xdf1e,	// (0x00048c1b) tb_ext_find_pane_t1

0x874e,	// (0x0004344b) tb_ext_find_button_pane_g1

0xdf2c,	// (0x00048c29) tb_ext_find_button_pane_g2

0x0001,

0xfda1,	// (0x0004aa9e) tb_ext_find_button_pane_g

0xdcc8,	// (0x000489c5) main_idle_act4_pane_t1_ParamLimits

0xdcda,	// (0x000489d7) main_idle_act4_pane_t2_ParamLimits

0xfd5f,	// (0x0004aa5c) main_idle_act4_pane_t_ParamLimits

0xdd02,	// (0x000489ff) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdd10,	// (0x00048a0d) sat_plugin_idle_act4_pane_ParamLimits

0xdd10,	// (0x00048a0d) sat_plugin_idle_act4_pane

0xdf35,	// (0x00048c32) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdf35,	// (0x00048c32) sat_plugin_idle_act4_pane_t1

0xdf48,	// (0x00048c45) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdf48,	// (0x00048c45) sat_plugin_idle_act4_pane_t2

0xdf5b,	// (0x00048c58) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdf5b,	// (0x00048c58) sat_plugin_idle_act4_pane_t3

0xdf6e,	// (0x00048c6b) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdf6e,	// (0x00048c6b) sat_plugin_idle_act4_pane_t4

0x0003,

0xfda6,	// (0x0004aaa3) sat_plugin_idle_act4_pane_t_ParamLimits

0xfda6,	// (0x0004aaa3) sat_plugin_idle_act4_pane_t

0x5cad,	// (0x000409aa) popup_battery_window_ParamLimits

0x5cad,	// (0x000409aa) popup_battery_window

0x7ae1,	// (0x000427de) bg_popup_sub_pane_cp25_ParamLimits

0x7ae1,	// (0x000427de) bg_popup_sub_pane_cp25

0xdf81,	// (0x00048c7e) popup_battery_window_g1_ParamLimits

0xdf81,	// (0x00048c7e) popup_battery_window_g1

0xdf8d,	// (0x00048c8a) popup_battery_window_t1_ParamLimits

0xdf8d,	// (0x00048c8a) popup_battery_window_t1

0xdf9f,	// (0x00048c9c) popup_battery_window_t2_ParamLimits

0xdf9f,	// (0x00048c9c) popup_battery_window_t2

0x0001,

0xfdaf,	// (0x0004aaac) popup_battery_window_t_ParamLimits

0xfdaf,	// (0x0004aaac) popup_battery_window_t

0x8d50,	// (0x00043a4d) midp_canvas_pane_ParamLimits

0x8dc7,	// (0x00043ac4) midp_keypad_pane_ParamLimits

0x8dc7,	// (0x00043ac4) midp_keypad_pane

0x90c6,	// (0x00043dc3) main_midp_pane_ParamLimits

0xbd3c,	// (0x00046a39) signal_pane_g2_cp_ParamLimits

0xdfbc,	// (0x00048cb9) aid_size_cell_midp_keypad_ParamLimits

0xdfbc,	// (0x00048cb9) aid_size_cell_midp_keypad

0xdfd6,	// (0x00048cd3) midp_keyp_game_grid_pane_ParamLimits

0xdfd6,	// (0x00048cd3) midp_keyp_game_grid_pane

0xdff6,	// (0x00048cf3) midp_keyp_rocker_pane_ParamLimits

0xdff6,	// (0x00048cf3) midp_keyp_rocker_pane

0xe025,	// (0x00048d22) midp_keyp_sk_left_pane_ParamLimits

0xe025,	// (0x00048d22) midp_keyp_sk_left_pane

0xe07f,	// (0x00048d7c) midp_keyp_sk_right_pane_ParamLimits

0xe07f,	// (0x00048d7c) midp_keyp_sk_right_pane

0x7763,	// (0x00042460) bg_button_pane_cp03

0xe0d9,	// (0x00048dd6) midp_keyp_sk_left_pane_g1

0x7763,	// (0x00042460) bg_button_pane_cp04

0xe0d9,	// (0x00048dd6) midp_keyp_sk_right_pane_g1

0xc246,	// (0x00046f43) midp_keyp_rocker_pane_g1

0xe0e2,	// (0x00048ddf) keyp_game_cell_pane_ParamLimits

0xe0e2,	// (0x00048ddf) keyp_game_cell_pane

0x7763,	// (0x00042460) bg_button_pane_cp02

0xe0f5,	// (0x00048df2) keyp_game_cell_pane_g1

0x5cf7,	// (0x000409f4) popup_fep_vkb2_window_ParamLimits

0x5cf7,	// (0x000409f4) popup_fep_vkb2_window

0x6fee,	// (0x00041ceb) aid_size_cell_vkb2_ParamLimits

0x6fee,	// (0x00041ceb) aid_size_cell_vkb2

0x703a,	// (0x00041d37) popup_fep_vkb2_window_g1_ParamLimits

0x703a,	// (0x00041d37) popup_fep_vkb2_window_g1

0x7082,	// (0x00041d7f) vkb2_area_bottom_pane_ParamLimits

0x7082,	// (0x00041d7f) vkb2_area_bottom_pane

0x70d6,	// (0x00041dd3) vkb2_area_keypad_pane_ParamLimits

0x70d6,	// (0x00041dd3) vkb2_area_keypad_pane

0x711c,	// (0x00041e19) vkb2_area_top_pane_ParamLimits

0x711c,	// (0x00041e19) vkb2_area_top_pane

0x7196,	// (0x00041e93) vkb2_top_entry_pane_ParamLimits

0x7196,	// (0x00041e93) vkb2_top_entry_pane

0x71c0,	// (0x00041ebd) vkb2_top_grid_left_pane_ParamLimits

0x71c0,	// (0x00041ebd) vkb2_top_grid_left_pane

0x71de,	// (0x00041edb) vkb2_top_grid_right_pane_ParamLimits

0x71de,	// (0x00041edb) vkb2_top_grid_right_pane

0x71fc,	// (0x00041ef9) vkb2_cell_keypad_pane_ParamLimits

0x71fc,	// (0x00041ef9) vkb2_cell_keypad_pane

0x72b2,	// (0x00041faf) vkb2_area_bottom_grid_pane_ParamLimits

0x72b2,	// (0x00041faf) vkb2_area_bottom_grid_pane

0x72d8,	// (0x00041fd5) vkb2_area_bottom_pane_g1_ParamLimits

0x72d8,	// (0x00041fd5) vkb2_area_bottom_pane_g1

0x72fc,	// (0x00041ff9) vkb2_area_bottom_pane_g2_ParamLimits

0x72fc,	// (0x00041ff9) vkb2_area_bottom_pane_g2

0x732a,	// (0x00042027) vkb2_area_bottom_pane_g3_ParamLimits

0x732a,	// (0x00042027) vkb2_area_bottom_pane_g3

0x0002,

0xfdb4,	// (0x0004aab1) vkb2_area_bottom_pane_g_ParamLimits

0xfdb4,	// (0x0004aab1) vkb2_area_bottom_pane_g

0x738b,	// (0x00042088) vkb2_top_cell_left_pane_ParamLimits

0x738b,	// (0x00042088) vkb2_top_cell_left_pane

0xe106,	// (0x00048e03) vkb2_top_entry_pane_g1_ParamLimits

0xe106,	// (0x00048e03) vkb2_top_entry_pane_g1

0xe114,	// (0x00048e11) vkb2_top_entry_pane_t1_ParamLimits

0xe114,	// (0x00048e11) vkb2_top_entry_pane_t1

0xe12c,	// (0x00048e29) vkb2_top_entry_pane_t2_ParamLimits

0xe12c,	// (0x00048e29) vkb2_top_entry_pane_t2

0xe144,	// (0x00048e41) vkb2_top_entry_pane_t3_ParamLimits

0xe144,	// (0x00048e41) vkb2_top_entry_pane_t3

0x0002,

0xfdbb,	// (0x0004aab8) vkb2_top_entry_pane_t_ParamLimits

0xfdbb,	// (0x0004aab8) vkb2_top_entry_pane_t

0x73d8,	// (0x000420d5) vkb2_top_grid_right_pane_g1_ParamLimits

0x73d8,	// (0x000420d5) vkb2_top_grid_right_pane_g1

0x73ee,	// (0x000420eb) vkb2_top_grid_right_pane_g2_ParamLimits

0x73ee,	// (0x000420eb) vkb2_top_grid_right_pane_g2

0x7406,	// (0x00042103) vkb2_top_grid_right_pane_g3_ParamLimits

0x7406,	// (0x00042103) vkb2_top_grid_right_pane_g3

0x741e,	// (0x0004211b) vkb2_top_grid_right_pane_g4_ParamLimits

0x741e,	// (0x0004211b) vkb2_top_grid_right_pane_g4

0x0003,

0xfdc2,	// (0x0004aabf) vkb2_top_grid_right_pane_g_ParamLimits

0xfdc2,	// (0x0004aabf) vkb2_top_grid_right_pane_g

0x7434,	// (0x00042131) vkb2_top_cell_left_pane_g1

0x744b,	// (0x00042148) vkb2_cell_keypad_pane_g1_ParamLimits

0x744b,	// (0x00042148) vkb2_cell_keypad_pane_g1

0xe15a,	// (0x00048e57) vkb2_cell_keypad_pane_t1_ParamLimits

0xe15a,	// (0x00048e57) vkb2_cell_keypad_pane_t1

0x746f,	// (0x0004216c) vkb2_cell_bottom_grid_pane_ParamLimits

0x746f,	// (0x0004216c) vkb2_cell_bottom_grid_pane

0x74a8,	// (0x000421a5) vkb2_cell_bottom_grid_pane_g1

0xdd50,	// (0x00048a4d) aid_call2_pane_cp02

0xdd58,	// (0x00048a55) aid_call_pane_cp02

0xdd60,	// (0x00048a5d) clock_digital_number_pane_cp10

0xdd68,	// (0x00048a65) clock_digital_number_pane_cp11

0xdd70,	// (0x00048a6d) clock_digital_number_pane_cp12

0xdd78,	// (0x00048a75) clock_digital_number_pane_cp13

0xdd80,	// (0x00048a7d) clock_digital_separator_pane_cp10

0x874e,	// (0x0004344b) popup_clock_digital_analogue_window_cp2_g1

0x874e,	// (0x0004344b) popup_clock_digital_analogue_window_cp2_g2

0xdd88,	// (0x00048a85) popup_clock_digital_analogue_window_cp2_g3

0x874e,	// (0x0004344b) popup_clock_digital_analogue_window_cp2_g4

0xdd88,	// (0x00048a85) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd77,	// (0x0004aa74) popup_clock_digital_analogue_window_cp2_g

0xdd90,	// (0x00048a8d) popup_clock_digital_analogue_window_cp2_t1

0xdd9e,	// (0x00048a9b) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd82,	// (0x0004aa7f) popup_clock_digital_analogue_window_cp2_t

0xc246,	// (0x00046f43) clock_digital_number_pane_cp10_g1

0xc246,	// (0x00046f43) clock_digital_number_pane_cp10_g2

0x0001,

0xfb6a,	// (0x0004a867) clock_digital_number_pane_cp10_g

0xc246,	// (0x00046f43) clock_digital_separator_pane_cp10_g1

0xc246,	// (0x00046f43) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb6a,	// (0x0004a867) clock_digital_separator_pane_cp10_g

0xdbcb,	// (0x000488c8) uniindi_top_pane_g3

0xdbdc,	// (0x000488d9) uniindi_top_pane_g4

0x726c,	// (0x00041f69) vkb2_row_keypad_pane_ParamLimits

0x726c,	// (0x00041f69) vkb2_row_keypad_pane

0x74c4,	// (0x000421c1) vkb2_cell_t_keypad_pane_ParamLimits

0x74c4,	// (0x000421c1) vkb2_cell_t_keypad_pane

0x74d4,	// (0x000421d1) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x74d4,	// (0x000421d1) vkb2_cell_t_keypad_pane_cp08

0x74e9,	// (0x000421e6) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x74e9,	// (0x000421e6) vkb2_cell_t_keypad_pane_cp09

0x74fd,	// (0x000421fa) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x74fd,	// (0x000421fa) vkb2_cell_t_keypad_pane_cp01

0x750e,	// (0x0004220b) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x750e,	// (0x0004220b) vkb2_cell_t_keypad_pane_cp02

0x751f,	// (0x0004221c) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x751f,	// (0x0004221c) vkb2_cell_t_keypad_pane_cp03

0x7530,	// (0x0004222d) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x7530,	// (0x0004222d) vkb2_cell_t_keypad_pane_cp04

0x7541,	// (0x0004223e) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x7541,	// (0x0004223e) vkb2_cell_t_keypad_pane_cp05

0x7552,	// (0x0004224f) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x7552,	// (0x0004224f) vkb2_cell_t_keypad_pane_cp06

0x7565,	// (0x00042262) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x7565,	// (0x00042262) vkb2_cell_t_keypad_pane_cp07

0x757a,	// (0x00042277) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x757a,	// (0x00042277) vkb2_cell_t_keypad_pane_cp10

0xc4de,	// (0x000471db) vkb2_cell_t_keypad_pane_g1

0xe171,	// (0x00048e6e) vkb2_cell_t_keypad_pane_t1

0x7763,	// (0x00042460) popup_grid_graphic2_window

0xe183,	// (0x00048e80) aid_size_cell_graphic2_ParamLimits

0xe183,	// (0x00048e80) aid_size_cell_graphic2

0xc2b6,	// (0x00046fb3) bg_popup_window_pane_cp21_ParamLimits

0xc2b6,	// (0x00046fb3) bg_popup_window_pane_cp21

0xe1af,	// (0x00048eac) graphic2_pages_pane_ParamLimits

0xe1af,	// (0x00048eac) graphic2_pages_pane

0xe1f5,	// (0x00048ef2) grid_graphic2_control_pane_ParamLimits

0xe1f5,	// (0x00048ef2) grid_graphic2_control_pane

0xe223,	// (0x00048f20) grid_graphic2_pane_ParamLimits

0xe223,	// (0x00048f20) grid_graphic2_pane

0xe285,	// (0x00048f82) cell_graphic2_pane

0x7763,	// (0x00042460) main_comp_mode_pane

0xd43c,	// (0x00048139) list_ai3_gene_pane_ParamLimits

0xd804,	// (0x00048501) bg_popup_window_pane_cp19_ParamLimits

0xd810,	// (0x0004850d) bg_touch_area_indi_pane_ParamLimits

0xd810,	// (0x0004850d) bg_touch_area_indi_pane

0xd826,	// (0x00048523) bg_touch_area_indi_pane_cp01_ParamLimits

0xd826,	// (0x00048523) bg_touch_area_indi_pane_cp01

0xd83e,	// (0x0004853b) bg_touch_area_indi_pane_cp02_ParamLimits

0xd83e,	// (0x0004853b) bg_touch_area_indi_pane_cp02

0xd858,	// (0x00048555) bg_touch_area_indi_pane_cp03_ParamLimits

0xd858,	// (0x00048555) bg_touch_area_indi_pane_cp03

0xd872,	// (0x0004856f) popup_slider_window_g1_ParamLimits

0xd88e,	// (0x0004858b) popup_slider_window_g2_ParamLimits

0xd8aa,	// (0x000485a7) popup_slider_window_g3_ParamLimits

0xfd0c,	// (0x0004aa09) popup_slider_window_g_ParamLimits

0xd906,	// (0x00048603) popup_slider_window_t1_ParamLimits

0xd97a,	// (0x00048677) small_volume_slider_vertical_pane_ParamLimits

0xe285,	// (0x00048f82) cell_graphic2_pane_ParamLimits

0xe2da,	// (0x00048fd7) bg_button_pane_cp10_ParamLimits

0xe2da,	// (0x00048fd7) bg_button_pane_cp10

0xe2ef,	// (0x00048fec) bg_button_pane_cp11_ParamLimits

0xe2ef,	// (0x00048fec) bg_button_pane_cp11

0xe304,	// (0x00049001) graphic2_pages_pane_g1_ParamLimits

0xe304,	// (0x00049001) graphic2_pages_pane_g1

0xe31f,	// (0x0004901c) graphic2_pages_pane_g2_ParamLimits

0xe31f,	// (0x0004901c) graphic2_pages_pane_g2

0x0001,

0xfdd0,	// (0x0004aacd) graphic2_pages_pane_g_ParamLimits

0xfdd0,	// (0x0004aacd) graphic2_pages_pane_g

0xe337,	// (0x00049034) graphic2_pages_pane_t1_ParamLimits

0xe337,	// (0x00049034) graphic2_pages_pane_t1

0xe34d,	// (0x0004904a) cell_graphic2_control_pane_ParamLimits

0xe34d,	// (0x0004904a) cell_graphic2_control_pane

0xe367,	// (0x00049064) cell_graphic2_pane_g1_ParamLimits

0xe367,	// (0x00049064) cell_graphic2_pane_g1

0xe374,	// (0x00049071) cell_graphic2_pane_g2_ParamLimits

0xe374,	// (0x00049071) cell_graphic2_pane_g2

0xe381,	// (0x0004907e) cell_graphic2_pane_g3_ParamLimits

0xe381,	// (0x0004907e) cell_graphic2_pane_g3

0xe38e,	// (0x0004908b) cell_graphic2_pane_g4_ParamLimits

0xe38e,	// (0x0004908b) cell_graphic2_pane_g4

0xe39b,	// (0x00049098) cell_graphic2_pane_g5_ParamLimits

0xe39b,	// (0x00049098) cell_graphic2_pane_g5

0x0004,

0xfdd5,	// (0x0004aad2) cell_graphic2_pane_g_ParamLimits

0xfdd5,	// (0x0004aad2) cell_graphic2_pane_g

0xe3b6,	// (0x000490b3) cell_graphic2_pane_t1_ParamLimits

0xe3b6,	// (0x000490b3) cell_graphic2_pane_t1

0x9cf4,	// (0x000449f1) grid_highlight_pane_cp11_ParamLimits

0x9cf4,	// (0x000449f1) grid_highlight_pane_cp11

0x80de,	// (0x00042ddb) bg_button_pane_cp05

0xe3cc,	// (0x000490c9) cell_graphic2_control_pane_g1

0xc246,	// (0x00046f43) bg_touch_area_indi_pane_g1

0xe3d9,	// (0x000490d6) aid_cmod_rocker_key_size

0xe3e3,	// (0x000490e0) aid_cmode_itu_key_size

0xe3ed,	// (0x000490ea) main_cmode_video_pane

0xe3f7,	// (0x000490f4) main_comp_mode_itu_pane

0xe403,	// (0x00049100) main_comp_mode_rocker_pane

0xe40f,	// (0x0004910c) cell_cmode_rocker_pane_ParamLimits

0xe40f,	// (0x0004910c) cell_cmode_rocker_pane

0xe423,	// (0x00049120) cell_cmode_itu_pane_ParamLimits

0xe423,	// (0x00049120) cell_cmode_itu_pane

0x80de,	// (0x00042ddb) bg_button_pane_cp06_ParamLimits

0x80de,	// (0x00042ddb) bg_button_pane_cp06

0xc4de,	// (0x000471db) cell_cmode_rocker_pane_g1_ParamLimits

0xc4de,	// (0x000471db) cell_cmode_rocker_pane_g1

0xda21,	// (0x0004871e) cell_cmode_rocker_pane_g2_ParamLimits

0xda21,	// (0x0004871e) cell_cmode_rocker_pane_g2

0x0001,

0xfde0,	// (0x0004aadd) cell_cmode_rocker_pane_g_ParamLimits

0xfde0,	// (0x0004aadd) cell_cmode_rocker_pane_g

0x7763,	// (0x00042460) bg_button_pane_cp07

0xe43a,	// (0x00049137) cell_cmode_itu_pane_g1

0xe443,	// (0x00049140) cell_cmode_itu_pane_t1

0xe451,	// (0x0004914e) cell_cmode_itu_pane_t2

0x0001,

0xfde5,	// (0x0004aae2) cell_cmode_itu_pane_t

0xdc4f,	// (0x0004894c) aid_touch_ctrl_left

0xdc57,	// (0x00048954) aid_touch_ctrl_right

0x7763,	// (0x00042460) compa_mode_pane

0xe45f,	// (0x0004915c) aid_cmod_rocker_key_size_cp

0xe469,	// (0x00049166) aid_cmode_itu_key_size_cp

0xe473,	// (0x00049170) compa_mode_pane_g1

0xe47b,	// (0x00049178) compa_mode_pane_g2

0xe483,	// (0x00049180) compa_mode_pane_g3

0x0002,

0xfdea,	// (0x0004aae7) compa_mode_pane_g

0xe48b,	// (0x00049188) main_comp_mode_itu_pane_cp

0xe493,	// (0x00049190) main_comp_mode_rocker_pane_cp

0xe49b,	// (0x00049198) cell_cmode_itu_pane_cp_ParamLimits

0xe49b,	// (0x00049198) cell_cmode_itu_pane_cp

0xe4b0,	// (0x000491ad) cell_cmode_rocker_pane_cp_ParamLimits

0xe4b0,	// (0x000491ad) cell_cmode_rocker_pane_cp

0x80de,	// (0x00042ddb) bg_button_pane_cp06_cp_ParamLimits

0x80de,	// (0x00042ddb) bg_button_pane_cp06_cp

0xc4de,	// (0x000471db) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc4de,	// (0x000471db) cell_cmode_rocker_pane_g1_cp

0xc246,	// (0x00046f43) cell_cmode_rocker_pane_g2_cp

0x7763,	// (0x00042460) bg_button_pane_cp07_cp

0xe4c2,	// (0x000491bf) cell_cmode_itu_pane_g1_cp

0xe4cb,	// (0x000491c8) cell_cmode_itu_pane_t1_cp

0xe4cb,	// (0x000491c8) cell_cmode_itu_pane_t2_cp

0xb18a,	// (0x00045e87) settings_code_pane_cp2

0x7857,	// (0x00042554) bg_popup_window_pane_cp3_ParamLimits

0x7ccf,	// (0x000429cc) heading_pane_cp3_ParamLimits

0x7cdb,	// (0x000429d8) listscroll_popup_graphic_pane_ParamLimits

0x6a7d,	// (0x0004177a) fep_hwr_aid_pane_ParamLimits

0x6f5f,	// (0x00041c5c) aid_touch_sctrl_top_ParamLimits

0x6f6c,	// (0x00041c69) sctrl_sk_top_pane_g1_ParamLimits

0xc4de,	// (0x000471db) sctrl_sk_top_pane_g2_ParamLimits

0xfd25,	// (0x0004aa22) sctrl_sk_top_pane_g_ParamLimits

0x6f79,	// (0x00041c76) sctrl_sk_top_pane_t1_ParamLimits

0x6f5f,	// (0x00041c5c) aid_touch_sctrl_bottom_ParamLimits

0x6f79,	// (0x00041c76) sctrl_sk_bottom_pane_t1_ParamLimits

0xdb95,	// (0x00048892) aid_area_touch_clock

0x715e,	// (0x00041e5b) aid_vkb2_area_top_pane_cell_ParamLimits

0x715e,	// (0x00041e5b) aid_vkb2_area_top_pane_cell

0x728e,	// (0x00041f8b) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x728e,	// (0x00041f8b) aid_vkb2_area_bottom_pane_cell

0xe0fe,	// (0x00048dfb) popup_char_count_window

0xe4d9,	// (0x000491d6) popup_char_count_window_g1

0xe4e2,	// (0x000491df) popup_char_count_window_g2

0xe4eb,	// (0x000491e8) popup_char_count_window_g3

0x0002,

0xfdf1,	// (0x0004aaee) popup_char_count_window_g

0xe4f4,	// (0x000491f1) popup_char_count_window_t1

0x7018,	// (0x00041d15) popup_fep_char_preview_window_ParamLimits

0x7018,	// (0x00041d15) popup_fep_char_preview_window

0x717c,	// (0x00041e79) vkb2_top_candi_pane_ParamLimits

0x717c,	// (0x00041e79) vkb2_top_candi_pane

0xe502,	// (0x000491ff) cell_vkb2_top_candi_pane_ParamLimits

0xe502,	// (0x000491ff) cell_vkb2_top_candi_pane

0xa277,	// (0x00044f74) bg_popup_fep_char_preview_window_ParamLimits

0xa277,	// (0x00044f74) bg_popup_fep_char_preview_window

0x758f,	// (0x0004228c) popup_fep_char_preview_window_t1_ParamLimits

0x758f,	// (0x0004228c) popup_fep_char_preview_window_t1

0xe553,	// (0x00049250) bg_popup_fep_char_preview_window_g1

0xe55b,	// (0x00049258) bg_popup_fep_char_preview_window_g2

0xe563,	// (0x00049260) bg_popup_fep_char_preview_window_g3

0xe56b,	// (0x00049268) bg_popup_fep_char_preview_window_g4

0xe573,	// (0x00049270) bg_popup_fep_char_preview_window_g5

0x75c9,	// (0x000422c6) bg_popup_fep_char_preview_window_g6

0xe57b,	// (0x00049278) bg_popup_fep_char_preview_window_g7

0xe583,	// (0x00049280) bg_popup_fep_char_preview_window_g8

0xe58b,	// (0x00049288) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdf8,	// (0x0004aaf5) bg_popup_fep_char_preview_window_g

0xc4de,	// (0x000471db) cell_vkb2_top_candi_pane_g1_ParamLimits

0xc4de,	// (0x000471db) cell_vkb2_top_candi_pane_g1

0xc81f,	// (0x0004751c) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc81f,	// (0x0004751c) cell_vkb2_top_candi_pane_g2

0xc840,	// (0x0004753d) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc840,	// (0x0004753d) cell_vkb2_top_candi_pane_g3

0x75d1,	// (0x000422ce) cell_vkb2_top_candi_pane_g4_ParamLimits

0x75d1,	// (0x000422ce) cell_vkb2_top_candi_pane_g4

0xe593,	// (0x00049290) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe593,	// (0x00049290) cell_vkb2_top_candi_pane_g5

0xda21,	// (0x0004871e) cell_vkb2_top_candi_pane_g6_ParamLimits

0xda21,	// (0x0004871e) cell_vkb2_top_candi_pane_g6

0x0005,

0xfe0b,	// (0x0004ab08) cell_vkb2_top_candi_pane_g_ParamLimits

0xfe0b,	// (0x0004ab08) cell_vkb2_top_candi_pane_g

0x75f2,	// (0x000422ef) cell_vkb2_top_candi_pane_t1

0x688f,	// (0x0004158c) aid_size_touch_slider_mark_ParamLimits

0x688f,	// (0x0004158c) aid_size_touch_slider_mark

0xe1e5,	// (0x00048ee2) grid_graphic2_catg_pane_ParamLimits

0xe1e5,	// (0x00048ee2) grid_graphic2_catg_pane

0xe25f,	// (0x00048f5c) popup_grid_graphic2_window_t1_ParamLimits

0xe25f,	// (0x00048f5c) popup_grid_graphic2_window_t1

0xe271,	// (0x00048f6e) popup_grid_graphic2_window_t2_ParamLimits

0xe271,	// (0x00048f6e) popup_grid_graphic2_window_t2

0x0001,

0xfdcb,	// (0x0004aac8) popup_grid_graphic2_window_t_ParamLimits

0xfdcb,	// (0x0004aac8) popup_grid_graphic2_window_t

0x80de,	// (0x00042ddb) bg_button_pane_cp05_ParamLimits

0xe3cc,	// (0x000490c9) cell_graphic2_control_pane_g1_ParamLimits

0xe5b4,	// (0x000492b1) cell_graphic2_catg_pane_ParamLimits

0xe5b4,	// (0x000492b1) cell_graphic2_catg_pane

0x7763,	// (0x00042460) bg_button_pane_cp12

0xe5c6,	// (0x000492c3) cell_graphic2_catg_pane_g1

0xdb61,	// (0x0004885e) cell_tb_ext_pane_t1_ParamLimits

0x73ab,	// (0x000420a8) vkb2_top_cell_right_narrow_pane_ParamLimits

0x73ab,	// (0x000420a8) vkb2_top_cell_right_narrow_pane

0x73c3,	// (0x000420c0) vkb2_top_cell_right_wide_pane_ParamLimits

0x73c3,	// (0x000420c0) vkb2_top_cell_right_wide_pane

0xc2b6,	// (0x00046fb3) bg_vkb2_func_pane_ParamLimits

0xc2b6,	// (0x00046fb3) bg_vkb2_func_pane

0x7434,	// (0x00042131) vkb2_top_cell_left_pane_g1_ParamLimits

0xc2b6,	// (0x00046fb3) bg_vkb2_fuc_pane_cp03_ParamLimits

0xc2b6,	// (0x00046fb3) bg_vkb2_fuc_pane_cp03

0x74a8,	// (0x000421a5) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9c0a,	// (0x00044907) bg_vkb2_func_pane_g1

0x9c12,	// (0x0004490f) bg_vkb2_func_pane_g2

0x9c22,	// (0x0004491f) bg_vkb2_func_pane_g3

0x9c1a,	// (0x00044917) bg_vkb2_func_pane_g4

0x9c2a,	// (0x00044927) bg_vkb2_func_pane_g5

0x9c32,	// (0x0004492f) bg_vkb2_func_pane_g6

0x9c3a,	// (0x00044937) bg_vkb2_func_pane_g7

0x9c42,	// (0x0004493f) bg_vkb2_func_pane_g8

0x9c02,	// (0x000448ff) bg_vkb2_func_pane_g9

0x0008,

0xfe18,	// (0x0004ab15) bg_vkb2_func_pane_g

0xc2b6,	// (0x00046fb3) bg_vkb2_fuc_pane_cp01_ParamLimits

0xc2b6,	// (0x00046fb3) bg_vkb2_fuc_pane_cp01

0x7434,	// (0x00042131) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x7434,	// (0x00042131) vkb2_top_cell_right_wide_pane_g1

0xc2b6,	// (0x00046fb3) bg_vkb2_fuc_pane_cp02_ParamLimits

0xc2b6,	// (0x00046fb3) bg_vkb2_fuc_pane_cp02

0x74a8,	// (0x000421a5) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x74a8,	// (0x000421a5) vkb2_top_cell_right_narrow_pane_g1

0xd782,	// (0x0004847f) aid_touch_area_decrease_ParamLimits

0xd782,	// (0x0004847f) aid_touch_area_decrease

0xd7a6,	// (0x000484a3) aid_touch_area_increase_ParamLimits

0xd7a6,	// (0x000484a3) aid_touch_area_increase

0xd7b2,	// (0x000484af) aid_touch_area_mute_ParamLimits

0xd7b2,	// (0x000484af) aid_touch_area_mute

0xd7d6,	// (0x000484d3) aid_touch_area_slider_ParamLimits

0xd7d6,	// (0x000484d3) aid_touch_area_slider

0xd8c6,	// (0x000485c3) popup_slider_window_g4_ParamLimits

0xd8c6,	// (0x000485c3) popup_slider_window_g4

0xd8d2,	// (0x000485cf) popup_slider_window_g5_ParamLimits

0xd8d2,	// (0x000485cf) popup_slider_window_g5

0xd8f4,	// (0x000485f1) popup_slider_window_g6_ParamLimits

0xd8f4,	// (0x000485f1) popup_slider_window_g6

0xd934,	// (0x00048631) popup_slider_window_t2_ParamLimits

0xd934,	// (0x00048631) popup_slider_window_t2

0x0001,

0xfd19,	// (0x0004aa16) popup_slider_window_t_ParamLimits

0xfd19,	// (0x0004aa16) popup_slider_window_t

0xd94c,	// (0x00048649) slider_pane_ParamLimits

0xd94c,	// (0x00048649) slider_pane

0xe5cf,	// (0x000492cc) slider_pane_g1_ParamLimits

0xe5cf,	// (0x000492cc) slider_pane_g1

0xe5e3,	// (0x000492e0) slider_pane_g2_ParamLimits

0xe5e3,	// (0x000492e0) slider_pane_g2

0xe5f9,	// (0x000492f6) slider_pane_g3_ParamLimits

0xe5f9,	// (0x000492f6) slider_pane_g3

0x0003,

0xfe2b,	// (0x0004ab28) slider_pane_g_ParamLimits

0xfe2b,	// (0x0004ab28) slider_pane_g

0x95fc,	// (0x000442f9) popup_tb_float_extension_window_ParamLimits

0x95fc,	// (0x000442f9) popup_tb_float_extension_window

0xe625,	// (0x00049322) aid_size_cell_tb_float_ext

0x7763,	// (0x00042460) bg_popup_sub_window_cp28

0xe631,	// (0x0004932e) grid_tb_float_ext_pane

0xe63d,	// (0x0004933a) cell_tb_float_ext_pane_ParamLimits

0xe63d,	// (0x0004933a) cell_tb_float_ext_pane

0xe659,	// (0x00049356) cell_tb_float_ext_pane_g1

0xe662,	// (0x0004935f) grid_highlight_pane_cp12

0x6bb6,	// (0x000418b3) cell_last_hwr_side_pane_ParamLimits

0x6bb6,	// (0x000418b3) cell_last_hwr_side_pane

0xc246,	// (0x00046f43) cell_last_hwr_side_pane_g1

0xe66b,	// (0x00049368) cell_last_hwr_side_pane_g2

0x0001,

0xfe34,	// (0x0004ab31) cell_last_hwr_side_pane_g

0x735a,	// (0x00042057) vkb2_area_bottom_space_btn_pane_ParamLimits

0x735a,	// (0x00042057) vkb2_area_bottom_space_btn_pane

0xc4de,	// (0x000471db) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe171,	// (0x00048e6e) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x75f2,	// (0x000422ef) cell_vkb2_top_candi_pane_t1_ParamLimits

0x7610,	// (0x0004230d) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x7610,	// (0x0004230d) vkb2_area_bottom_space_btn_pane_g1

0x764a,	// (0x00042347) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x764a,	// (0x00042347) vkb2_area_bottom_space_btn_pane_g2

0x7680,	// (0x0004237d) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x7680,	// (0x0004237d) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe39,	// (0x0004ab36) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe39,	// (0x0004ab36) vkb2_area_bottom_space_btn_pane_g

0x6b26,	// (0x00041823) cel_fep_hwr_func_pane_ParamLimits

0x6b26,	// (0x00041823) cel_fep_hwr_func_pane

0x6b62,	// (0x0004185f) cell_hwr_side_button_pane_ParamLimits

0x6b62,	// (0x0004185f) cell_hwr_side_button_pane

0xdb95,	// (0x00048892) aid_area_touch_clock_ParamLimits

0x7ae1,	// (0x000427de) bg_uniindi_top_pane_ParamLimits

0xdba9,	// (0x000488a6) uniindi_top_pane_g1_ParamLimits

0xdbbf,	// (0x000488bc) uniindi_top_pane_g2_ParamLimits

0xdbcb,	// (0x000488c8) uniindi_top_pane_g3_ParamLimits

0xdbdc,	// (0x000488d9) uniindi_top_pane_g4_ParamLimits

0xfd51,	// (0x0004aa4e) uniindi_top_pane_g_ParamLimits

0xdbe9,	// (0x000488e6) uniindi_top_pane_t1_ParamLimits

0x7ae1,	// (0x000427de) bg_vkb2_func_pane_cp01_ParamLimits

0x7ae1,	// (0x000427de) bg_vkb2_func_pane_cp01

0xe674,	// (0x00049371) cel_fep_hwr_func_pane_g1_ParamLimits

0xe674,	// (0x00049371) cel_fep_hwr_func_pane_g1

0x7ae1,	// (0x000427de) bg_vkb2_func_pane_cp02_ParamLimits

0x7ae1,	// (0x000427de) bg_vkb2_func_pane_cp02

0xe674,	// (0x00049371) cell_hwr_side_button_pane_g1_ParamLimits

0xe674,	// (0x00049371) cell_hwr_side_button_pane_g1

0x9a83,	// (0x00044780) status_pane_g4_ParamLimits

0x9a83,	// (0x00044780) status_pane_g4

0x9a9d,	// (0x0004479a) status_pane_t1

0xbfe2,	// (0x00046cdf) form2_midp_gauge_slider_cont_pane

0xbfea,	// (0x00046ce7) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbffc,	// (0x00046cf9) form2_midp_gauge_slider_pane_t2_ParamLimits

0xc00e,	// (0x00046d0b) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb1d,	// (0x0004a81a) form2_midp_gauge_slider_pane_t_ParamLimits

0xc020,	// (0x00046d1d) form2_midp_slider_pane_ParamLimits

0x6fe0,	// (0x00041cdd) aid_size_cell_func_vkb2_ParamLimits

0x6fe0,	// (0x00041cdd) aid_size_cell_func_vkb2

0xe611,	// (0x0004930e) slider_pane_g4_ParamLimits

0xe611,	// (0x0004930e) slider_pane_g4

0x76ca,	// (0x000423c7) form2_midp_gauge_slider_pane_t2_cp01

0x76d8,	// (0x000423d5) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x76d8,	// (0x000423d5) form2_midp_gauge_slider_pane_t3_cp01

0x76f5,	// (0x000423f2) form2_midp_slider_pane_cp01

0x7763,	// (0x00042460) navi_smil_pane

0xe6ad,	// (0x000493aa) navi_smil_pane_g1

0xe6b5,	// (0x000493b2) navi_smil_pane_t1

0xe682,	// (0x0004937f) form2_midp_slider_pane_g1

0xe68b,	// (0x00049388) form2_midp_slider_pane_g2

0xe693,	// (0x00049390) form2_midp_slider_pane_g3

0xe682,	// (0x0004937f) form2_midp_slider_pane_g4

0xe69b,	// (0x00049398) form2_midp_slider_pane_g5

0x0004,

0xfe42,	// (0x0004ab3f) form2_midp_slider_pane_g

0x76ba,	// (0x000423b7) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x76ba,	// (0x000423b7) vkb2_area_bottom_space_btn_pane_g4

0x989b,	// (0x00044598) lc0_navi_pane_ParamLimits

0x989b,	// (0x00044598) lc0_navi_pane

0x9917,	// (0x00044614) lc0_stat_indi_pane_ParamLimits

0x9917,	// (0x00044614) lc0_stat_indi_pane

0x992e,	// (0x0004462b) ls0_title_pane_ParamLimits

0x992e,	// (0x0004462b) ls0_title_pane

0x80de,	// (0x00042ddb) bg_popup_sub_pane_cp14_ParamLimits

0xdb7c,	// (0x00048879) list_uniindi_pane_ParamLimits

0xdb88,	// (0x00048885) uniindi_top_pane_ParamLimits

0xdc27,	// (0x00048924) list_single_uniindi_pane_g1_ParamLimits

0xdc3a,	// (0x00048937) list_single_uniindi_pane_t1_ParamLimits

0x76fe,	// (0x000423fb) lc0_stat_clock_pane_ParamLimits

0x76fe,	// (0x000423fb) lc0_stat_clock_pane

0xe6c3,	// (0x000493c0) lc0_stat_indi_pane_g1_ParamLimits

0xe6c3,	// (0x000493c0) lc0_stat_indi_pane_g1

0xe6d0,	// (0x000493cd) lc0_stat_indi_pane_g2_ParamLimits

0xe6d0,	// (0x000493cd) lc0_stat_indi_pane_g2

0x0001,

0xfe4d,	// (0x0004ab4a) lc0_stat_indi_pane_g_ParamLimits

0xfe4d,	// (0x0004ab4a) lc0_stat_indi_pane_g

0x770b,	// (0x00042408) lc0_uni_indicator_pane_ParamLimits

0x770b,	// (0x00042408) lc0_uni_indicator_pane

0xe6dd,	// (0x000493da) ls0_title_pane_g1_ParamLimits

0xe6dd,	// (0x000493da) ls0_title_pane_g1

0xe6f1,	// (0x000493ee) ls0_title_pane_t1_ParamLimits

0xe6f1,	// (0x000493ee) ls0_title_pane_t1

0x7718,	// (0x00042415) lc0_uni_indicator_pane_g1_ParamLimits

0x7718,	// (0x00042415) lc0_uni_indicator_pane_g1

0xe727,	// (0x00049424) lc0_stat_clock_pane_t1

0x7763,	// (0x00042460) main_ai5_pane

0xe735,	// (0x00049432) ai5_sk_pane_ParamLimits

0xe735,	// (0x00049432) ai5_sk_pane

0xe742,	// (0x0004943f) cell_ai5_widget_pane_ParamLimits

0xe742,	// (0x0004943f) cell_ai5_widget_pane

0xe7b8,	// (0x000494b5) aid_size_cell_widget_grid

0xe7cc,	// (0x000494c9) bg_ai5_widget_pane_ParamLimits

0xe7cc,	// (0x000494c9) bg_ai5_widget_pane

0xe7f4,	// (0x000494f1) cell_ai5_widget_pane_g2

0xe804,	// (0x00049501) cell_ai5_widget_pane_g3

0xe818,	// (0x00049515) cell_ai5_widget_pane_g4

0xe824,	// (0x00049521) cell_ai5_widget_pane_g5

0xe830,	// (0x0004952d) cell_ai5_widget_pane_g6

0xe83e,	// (0x0004953b) cell_ai5_widget_pane_g7

0xe886,	// (0x00049583) cell_ai5_widget_pane_t1_ParamLimits

0xe886,	// (0x00049583) cell_ai5_widget_pane_t1

0xe8a3,	// (0x000495a0) cell_ai5_widget_pane_t2_ParamLimits

0xe8a3,	// (0x000495a0) cell_ai5_widget_pane_t2

0xe8bb,	// (0x000495b8) cell_ai5_widget_pane_t3_ParamLimits

0xe8bb,	// (0x000495b8) cell_ai5_widget_pane_t3

0xe8d3,	// (0x000495d0) cell_ai5_widget_pane_t4_ParamLimits

0xe8d3,	// (0x000495d0) cell_ai5_widget_pane_t4

0xe8ed,	// (0x000495ea) cell_ai5_widget_pane_t5_ParamLimits

0xe8ed,	// (0x000495ea) cell_ai5_widget_pane_t5

0xe90c,	// (0x00049609) cell_ai5_widget_pane_t6_ParamLimits

0xe90c,	// (0x00049609) cell_ai5_widget_pane_t6

0xe91e,	// (0x0004961b) cell_ai5_widget_pane_t7_ParamLimits

0xe91e,	// (0x0004961b) cell_ai5_widget_pane_t7

0xe937,	// (0x00049634) cell_ai5_widget_pane_t8_ParamLimits

0xe937,	// (0x00049634) cell_ai5_widget_pane_t8

0x0009,

0xfe67,	// (0x0004ab64) cell_ai5_widget_pane_t_ParamLimits

0xfe67,	// (0x0004ab64) cell_ai5_widget_pane_t

0xe97f,	// (0x0004967c) grid_ai5_widget_pane

0x80de,	// (0x00042ddb) highlight_cell_ai5_widget_pane_ParamLimits

0x80de,	// (0x00042ddb) highlight_cell_ai5_widget_pane

0xe996,	// (0x00049693) ai5_sk_left_pane

0xe9a0,	// (0x0004969d) ai5_sk_middle_pane

0xe9aa,	// (0x000496a7) ai5_sk_right_pane

0xe9b4,	// (0x000496b1) bg_ai5_widget_pane_g1_ParamLimits

0xe9b4,	// (0x000496b1) bg_ai5_widget_pane_g1

0xe9c0,	// (0x000496bd) bg_ai5_widget_pane_g2_ParamLimits

0xe9c0,	// (0x000496bd) bg_ai5_widget_pane_g2

0xe9cc,	// (0x000496c9) bg_ai5_widget_pane_g3_ParamLimits

0xe9cc,	// (0x000496c9) bg_ai5_widget_pane_g3

0xe9d8,	// (0x000496d5) bg_ai5_widget_pane_g4_ParamLimits

0xe9d8,	// (0x000496d5) bg_ai5_widget_pane_g4

0xe9e4,	// (0x000496e1) bg_ai5_widget_pane_g5_ParamLimits

0xe9e4,	// (0x000496e1) bg_ai5_widget_pane_g5

0xe9f0,	// (0x000496ed) bg_ai5_widget_pane_g6_ParamLimits

0xe9f0,	// (0x000496ed) bg_ai5_widget_pane_g6

0xe9fc,	// (0x000496f9) bg_ai5_widget_pane_g7_ParamLimits

0xe9fc,	// (0x000496f9) bg_ai5_widget_pane_g7

0xea08,	// (0x00049705) bg_ai5_widget_pane_g8_ParamLimits

0xea08,	// (0x00049705) bg_ai5_widget_pane_g8

0xea14,	// (0x00049711) bg_ai5_widget_pane_g9_ParamLimits

0xea14,	// (0x00049711) bg_ai5_widget_pane_g9

0x0008,

0xfe7c,	// (0x0004ab79) bg_ai5_widget_pane_g_ParamLimits

0xfe7c,	// (0x0004ab79) bg_ai5_widget_pane_g

0xea39,	// (0x00049736) cell_shortcut_ai5_widget_pane_ParamLimits

0xea39,	// (0x00049736) cell_shortcut_ai5_widget_pane

0x7923,	// (0x00042620) bg_cell_shortcut_ai5_widget_pane

0xea4b,	// (0x00049748) cell_grid_ai5_widget_pane_g1

0xea54,	// (0x00049751) highlight_cell_shortcut_ai5_widget_pane

0x9c12,	// (0x0004490f) ai5_sk_left_pane_g1

0xea5c,	// (0x00049759) ai5_sk_left_pane_g2

0xea64,	// (0x00049761) ai5_sk_left_pane_g3

0xea6c,	// (0x00049769) ai5_sk_left_pane_g4

0x0003,

0xfe8f,	// (0x0004ab8c) ai5_sk_left_pane_g

0xea74,	// (0x00049771) ai5_sk_left_pane_t1

0x9c0a,	// (0x00044907) ai5_sk_right_pane_g1

0xea82,	// (0x0004977f) ai5_sk_right_pane_g2

0xea8a,	// (0x00049787) ai5_sk_right_pane_g3

0xea92,	// (0x0004978f) ai5_sk_right_pane_g4

0x0003,

0xfe98,	// (0x0004ab95) ai5_sk_right_pane_g

0xea9a,	// (0x00049797) ai5_sk_right_pane_t1

0x9c0a,	// (0x00044907) ai5_sk_middle_pane_g1

0x9c12,	// (0x0004490f) ai5_sk_middle_pane_g2

0x9c2a,	// (0x00044927) ai5_sk_middle_pane_g3

0xea8a,	// (0x00049787) ai5_sk_middle_pane_g4

0xea64,	// (0x00049761) ai5_sk_middle_pane_g5

0xeaa8,	// (0x000497a5) ai5_sk_middle_pane_g6

0xeab0,	// (0x000497ad) ai5_sk_middle_pane_g7

0x0006,

0xfea1,	// (0x0004ab9e) ai5_sk_middle_pane_g

0x971d,	// (0x0004441a) aid_touch_area_size_lc0_ParamLimits

0x971d,	// (0x0004441a) aid_touch_area_size_lc0

0x6cc5,	// (0x000419c2) cell_hwr_candidate_pane_t1_ParamLimits

0x973b,	// (0x00044438) aid_touch_navi_pane

0x9a2d,	// (0x0004472a) status_dt_navi_pane_ParamLimits

0x9a2d,	// (0x0004472a) status_dt_navi_pane

0x9a3a,	// (0x00044737) status_dt_sta_pane_ParamLimits

0x9a3a,	// (0x00044737) status_dt_sta_pane

0xeab8,	// (0x000497b5) dt_sta_controll_pane

0xeac5,	// (0x000497c2) dt_sta_indi_pane

0xead6,	// (0x000497d3) dt_sta_title_pane

0x7ae1,	// (0x000427de) bg_dt_sta_indi_pane_ParamLimits

0x7ae1,	// (0x000427de) bg_dt_sta_indi_pane

0xeae9,	// (0x000497e6) dt_sta_battery_pane

0xeaf1,	// (0x000497ee) dt_sta_indi_pane_g1

0xeafa,	// (0x000497f7) dt_sta_indi_pane_g2

0xeb03,	// (0x00049800) dt_sta_indi_pane_g3

0x0002,

0xfeb0,	// (0x0004abad) dt_sta_indi_pane_g

0xeb0c,	// (0x00049809) dt_sta_signal_pane

0x80de,	// (0x00042ddb) bg_dt_sta_title_pane_ParamLimits

0x80de,	// (0x00042ddb) bg_dt_sta_title_pane

0xeb15,	// (0x00049812) dt_sta_title_pane_g1

0xeb1d,	// (0x0004981a) dt_sta_title_pane_t1_ParamLimits

0xeb1d,	// (0x0004981a) dt_sta_title_pane_t1

0x7763,	// (0x00042460) bg_dt_sta_control_pane

0xeb32,	// (0x0004982f) dt_sta_controll_pane_g1

0xeb3b,	// (0x00049838) bg_dt_sta_title_pane_g1

0xeb44,	// (0x00049841) bg_dt_sta_title_pane_g2

0xeb4d,	// (0x0004984a) bg_dt_sta_title_pane_g3

0x0002,

0xfeb7,	// (0x0004abb4) bg_dt_sta_title_pane_g

0xc246,	// (0x00046f43) bg_dt_sta_indi_pane_g1

0xeb56,	// (0x00049853) dt_sta_signal_pane_g1

0xeb5e,	// (0x0004985b) dt_sta_signal_pane_g2

0x0001,

0xfebe,	// (0x0004abbb) dt_sta_signal_pane_g

0xeb66,	// (0x00049863) dt_sta_battery_pane_g1

0xeb6f,	// (0x0004986c) dt_sta_battery_pane_t1

0xc246,	// (0x00046f43) bg_dt_sta_control_pane_g1

0x883a,	// (0x00043537) fep_china_uni_eep_pane

0x8842,	// (0x0004353f) fep_china_uni_entry_pane_ParamLimits

0x8852,	// (0x0004354f) popup_fep_china_uni_window_g1_ParamLimits

0x8862,	// (0x0004355f) popup_fep_china_uni_window_g2_ParamLimits

0x8862,	// (0x0004355f) popup_fep_china_uni_window_g2

0x0001,

0xf762,	// (0x0004a45f) popup_fep_china_uni_window_g_ParamLimits

0xf762,	// (0x0004a45f) popup_fep_china_uni_window_g

0xeb7e,	// (0x0004987b) fep_china_uni_eep_pane_g1

0xeb86,	// (0x00049883) fep_china_uni_eep_pane_t1

0xe6a4,	// (0x000493a1) aid_touch_area_size_smil_player

0x9893,	// (0x00044590) lc0_clock_pane

0x9a91,	// (0x0004478e) status_pane_g5_ParamLimits

0x9a91,	// (0x0004478e) status_pane_g5

0x9281,	// (0x00043f7e) popup_keymap_window

0x9a4f,	// (0x0004474c) status_icon_pane

0xe804,	// (0x00049501) cell_ai5_widget_pane_g3_ParamLimits

0xe818,	// (0x00049515) cell_ai5_widget_pane_g4_ParamLimits

0xe824,	// (0x00049521) cell_ai5_widget_pane_g5_ParamLimits

0xe84a,	// (0x00049547) cell_ai5_widget_pane_g8_ParamLimits

0xe84a,	// (0x00049547) cell_ai5_widget_pane_g8

0xe85e,	// (0x0004955b) cell_ai5_widget_pane_g9_ParamLimits

0xe85e,	// (0x0004955b) cell_ai5_widget_pane_g9

0xe872,	// (0x0004956f) cell_ai5_widget_pane_g10_ParamLimits

0xe872,	// (0x0004956f) cell_ai5_widget_pane_g10

0xeb95,	// (0x00049892) status_icon_pane_g1

0x7763,	// (0x00042460) bg_popup_sub_pane_cp13

0xeb9d,	// (0x0004989a) popup_keymap_window_t1

0x9017,	// (0x00043d14) control_pane_g6_ParamLimits

0x9017,	// (0x00043d14) control_pane_g6

0x9024,	// (0x00043d21) control_pane_g7_ParamLimits

0x9024,	// (0x00043d21) control_pane_g7

0x9031,	// (0x00043d2e) control_pane_g8_ParamLimits

0x9031,	// (0x00043d2e) control_pane_g8

0xeab8,	// (0x000497b5) dt_sta_controll_pane_ParamLimits

0xeac5,	// (0x000497c2) dt_sta_indi_pane_ParamLimits

0xead6,	// (0x000497d3) dt_sta_title_pane_ParamLimits

0x8016,	// (0x00042d13) aid_size_touch_scroll_bar_cale

0x5cc5,	// (0x000409c2) popup_discreet_window_ParamLimits

0x5cc5,	// (0x000409c2) popup_discreet_window

0x5d53,	// (0x00040a50) popup_sk_window

0xa277,	// (0x00044f74) bg_popup_sub_pane_cp28_ParamLimits

0xa277,	// (0x00044f74) bg_popup_sub_pane_cp28

0xebab,	// (0x000498a8) popup_discreet_window_g1_ParamLimits

0xebab,	// (0x000498a8) popup_discreet_window_g1

0xebcb,	// (0x000498c8) popup_discreet_window_t1_ParamLimits

0xebcb,	// (0x000498c8) popup_discreet_window_t1

0xebe9,	// (0x000498e6) popup_discreet_window_t2_ParamLimits

0xebe9,	// (0x000498e6) popup_discreet_window_t2

0x0002,

0xfec3,	// (0x0004abc0) popup_discreet_window_t_ParamLimits

0xfec3,	// (0x0004abc0) popup_discreet_window_t

0x772b,	// (0x00042428) popup_sk_window_g1

0x7735,	// (0x00042432) popup_sk_window_g2

0x0001,

0xfeca,	// (0x0004abc7) popup_sk_window_g

0xec3b,	// (0x00049938) popup_sk_window_t1

0xec49,	// (0x00049946) popup_sk_window_t1_copy1

0xe7f4,	// (0x000494f1) cell_ai5_widget_pane_g2_ParamLimits

0xe949,	// (0x00049646) cell_ai5_widget_pane_t9_ParamLimits

0xe949,	// (0x00049646) cell_ai5_widget_pane_t9

0x7763,	// (0x00042460) main_fep_fshwr2_pane

0xec57,	// (0x00049954) aid_fshwr2_btn_pane

0xec5f,	// (0x0004995c) aid_fshwr2_syb_pane

0xec67,	// (0x00049964) aid_fshwr2_txt_pane

0xec6f,	// (0x0004996c) fshwr2_func_candi_pane

0xec79,	// (0x00049976) fshwr2_hwr_syb_pane

0xec83,	// (0x00049980) fshwr2_icf_pane

0x7763,	// (0x00042460) fshwr2_icf_bg_pane

0xeca5,	// (0x000499a2) fshwr2_icf_pane_t1_ParamLimits

0xeca5,	// (0x000499a2) fshwr2_icf_pane_t1

0xc246,	// (0x00046f43) fshwr2_func_candi_pane_g1

0xecbc,	// (0x000499b9) fshwr2_func_candi_row_pane_ParamLimits

0xecbc,	// (0x000499b9) fshwr2_func_candi_row_pane

0xeccd,	// (0x000499ca) cell_fshwr2_syb_pane_ParamLimits

0xeccd,	// (0x000499ca) cell_fshwr2_syb_pane

0xc4de,	// (0x000471db) fshwr2_hwr_syb_pane_g1_ParamLimits

0xc4de,	// (0x000471db) fshwr2_hwr_syb_pane_g1

0x7763,	// (0x00042460) bg_popup_call_pane_cp01

0xece7,	// (0x000499e4) fshwr2_func_candi_cell_pane_ParamLimits

0xece7,	// (0x000499e4) fshwr2_func_candi_cell_pane

0xed19,	// (0x00049a16) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xed19,	// (0x00049a16) fshwr2_func_candi_cell_bg_pane

0xed33,	// (0x00049a30) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xed33,	// (0x00049a30) fshwr2_func_candi_cell_pane_g1

0xed53,	// (0x00049a50) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xed53,	// (0x00049a50) fshwr2_func_candi_cell_pane_t1

0x7763,	// (0x00042460) bg_button_pane_cp08

0x8d3c,	// (0x00043a39) cell_fshwr2_syb_bg_pane

0xed66,	// (0x00049a63) cell_fshwr2_syb_bg_pane_g1

0xed6e,	// (0x00049a6b) cell_fshwr2_syb_bg_pane_t1

0x80de,	// (0x00042ddb) main_tmo_pane

0xada1,	// (0x00045a9e) uni_indicator_pane_g1_ParamLimits

0xadb6,	// (0x00045ab3) uni_indicator_pane_g2_ParamLimits

0xadcc,	// (0x00045ac9) uni_indicator_pane_g3_ParamLimits

0xade2,	// (0x00045adf) uni_indicator_pane_g4_ParamLimits

0xade2,	// (0x00045adf) uni_indicator_pane_g4

0xadf6,	// (0x00045af3) uni_indicator_pane_g5_ParamLimits

0xadf6,	// (0x00045af3) uni_indicator_pane_g5

0xae0a,	// (0x00045b07) uni_indicator_pane_g6_ParamLimits

0xae0a,	// (0x00045b07) uni_indicator_pane_g6

0xf95f,	// (0x0004a65c) uni_indicator_pane_g_ParamLimits

0xd752,	// (0x0004844f) popup_tmo_note_window_ParamLimits

0xd752,	// (0x0004844f) popup_tmo_note_window

0x7763,	// (0x00042460) fshwr2_bg_pane

0xed44,	// (0x00049a41) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xed44,	// (0x00049a41) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfecf,	// (0x0004abcc) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfecf,	// (0x0004abcc) fshwr2_func_candi_cell_pane_g

0xc246,	// (0x00046f43) bg_popup_window_pane_cp01

0xed7d,	// (0x00049a7a) bg_popup_window_pane_g1_cp01

0xed86,	// (0x00049a83) bg_popup_window_pane_cp22_ParamLimits

0xed86,	// (0x00049a83) bg_popup_window_pane_cp22

0xed94,	// (0x00049a91) listscroll_tmo_link_pane_ParamLimits

0xed94,	// (0x00049a91) listscroll_tmo_link_pane

0xedd4,	// (0x00049ad1) popup_tmo_note_window_g1_ParamLimits

0xedd4,	// (0x00049ad1) popup_tmo_note_window_g1

0xede1,	// (0x00049ade) tmo_note_info_pane_ParamLimits

0xede1,	// (0x00049ade) tmo_note_info_pane

0xedfb,	// (0x00049af8) list_tmo_note_info_pane_g1_ParamLimits

0xedfb,	// (0x00049af8) list_tmo_note_info_pane_g1

0xee12,	// (0x00049b0f) list_tmo_note_info_pane_g2_ParamLimits

0xee12,	// (0x00049b0f) list_tmo_note_info_pane_g2

0x0001,

0xfed4,	// (0x0004abd1) list_tmo_note_info_pane_g_ParamLimits

0xfed4,	// (0x0004abd1) list_tmo_note_info_pane_g

0xee2e,	// (0x00049b2b) list_tmo_note_info_text_pane_ParamLimits

0xee2e,	// (0x00049b2b) list_tmo_note_info_text_pane

0xeeb3,	// (0x00049bb0) list_tmo_link_pane

0xeec0,	// (0x00049bbd) scroll_pane_cp20

0xeecd,	// (0x00049bca) list_single_tmo_link_pane_ParamLimits

0xeecd,	// (0x00049bca) list_single_tmo_link_pane

0xeedd,	// (0x00049bda) list_single_tmo_link_pane_t1

0xeeeb,	// (0x00049be8) list_tmo_note_info_text_pane_t1_ParamLimits

0xeeeb,	// (0x00049be8) list_tmo_note_info_text_pane_t1

0x81a4,	// (0x00042ea1) aid_size_touch_scroll_bar_cp01_ParamLimits

0x81a4,	// (0x00042ea1) aid_size_touch_scroll_bar_cp01

0x52fd,	// (0x0003fffa) aid_size_touch_slider_marker

0x5d3b,	// (0x00040a38) popup_settings_window_ParamLimits

0x5d3b,	// (0x00040a38) popup_settings_window

0x5476,	// (0x00040173) popup_candi_list_indi_window

0x973b,	// (0x00044438) aid_touch_navi_pane_ParamLimits

0x6f33,	// (0x00041c30) rs_clock_indi_pane

0x6f3c,	// (0x00041c39) sctrl_sk_bottom_pane_ParamLimits

0x6f4d,	// (0x00041c4a) sctrl_sk_top_pane_ParamLimits

0x7032,	// (0x00041d2f) popup_fep_tooltip_window

0xe7b8,	// (0x000494b5) aid_size_cell_widget_grid_ParamLimits

0xe7e8,	// (0x000494e5) cell_ai5_widget_pane_g1_ParamLimits

0xe7e8,	// (0x000494e5) cell_ai5_widget_pane_g1

0xe830,	// (0x0004952d) cell_ai5_widget_pane_g6_ParamLimits

0xe83e,	// (0x0004953b) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe52,	// (0x0004ab4f) cell_ai5_widget_pane_g_ParamLimits

0xfe52,	// (0x0004ab4f) cell_ai5_widget_pane_g

0xe96d,	// (0x0004966a) cell_ai5_widget_pane_t10_ParamLimits

0xe96d,	// (0x0004966a) cell_ai5_widget_pane_t10

0xe97f,	// (0x0004967c) grid_ai5_widget_pane_ParamLimits

0xea20,	// (0x0004971d) cell_contacts_ai5_widget_pane_ParamLimits

0xea20,	// (0x0004971d) cell_contacts_ai5_widget_pane

0xebfe,	// (0x000498fb) popup_discreet_window_t3_ParamLimits

0xebfe,	// (0x000498fb) popup_discreet_window_t3

0xec8d,	// (0x0004998a) popup_fshwr2_char_preview_window_ParamLimits

0xec8d,	// (0x0004998a) popup_fshwr2_char_preview_window

0xee4c,	// (0x00049b49) tmo_note_info_pane_t1

0xee61,	// (0x00049b5e) tmo_note_info_pane_t2

0xee7a,	// (0x00049b77) tmo_note_info_pane_t3

0xee8f,	// (0x00049b8c) tmo_note_info_pane_t4

0xeea1,	// (0x00049b9e) tmo_note_info_pane_t5

0x0004,

0xfed9,	// (0x0004abd6) tmo_note_info_pane_t

0xeeb3,	// (0x00049bb0) list_tmo_link_pane_ParamLimits

0xeec0,	// (0x00049bbd) scroll_pane_cp20_ParamLimits

0x7763,	// (0x00042460) bg_popup_fep_char_preview_window_cp01

0xef04,	// (0x00049c01) popup_fshwr2_char_preview_window_t1

0xef12,	// (0x00049c0f) popup_candi_list_indi_window_g1

0xef1b,	// (0x00049c18) bg_cell_contacts_ai5_widget_pane

0xef27,	// (0x00049c24) cell_contacts_ai5_widget_pane_g1

0xef3b,	// (0x00049c38) cell_contacts_ai5_widget_pane_g2

0xef4a,	// (0x00049c47) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfee4,	// (0x0004abe1) cell_contacts_ai5_widget_pane_g

0xef5d,	// (0x00049c5a) cell_contacts_ai5_widget_pane_t1

0x80de,	// (0x00042ddb) highlight_cell_shortcut_ai5_widget_pane_cp01

0xefd7,	// (0x00049cd4) settings_container_pane

0x8d3c,	// (0x00043a39) listscroll_set_pane_copy1

0xb9bd,	// (0x000466ba) scroll_pane_cp121_copy1

0xefe3,	// (0x00049ce0) set_content_pane_copy1

0xefeb,	// (0x00049ce8) aid_height_set_list_copy1_ParamLimits

0xefeb,	// (0x00049ce8) aid_height_set_list_copy1

0xb00a,	// (0x00045d07) aid_size_parent_copy1_ParamLimits

0xb00a,	// (0x00045d07) aid_size_parent_copy1

0xeff7,	// (0x00049cf4) button_value_adjust_pane_cp6_copy1_ParamLimits

0xeff7,	// (0x00049cf4) button_value_adjust_pane_cp6_copy1

0x90c6,	// (0x00043dc3) list_highlight_pane_cp2_copy1_ParamLimits

0x90c6,	// (0x00043dc3) list_highlight_pane_cp2_copy1

0xf00b,	// (0x00049d08) list_set_pane_copy1_ParamLimits

0xf00b,	// (0x00049d08) list_set_pane_copy1

0xef72,	// (0x00049c6f) main_pane_set_t1_copy1_ParamLimits

0xef72,	// (0x00049c6f) main_pane_set_t1_copy1

0xefac,	// (0x00049ca9) main_pane_set_t2_copy1_ParamLimits

0xefac,	// (0x00049ca9) main_pane_set_t2_copy1

0xf0d2,	// (0x00049dcf) main_pane_set_t3_copy1

0xf0e0,	// (0x00049ddd) main_pane_set_t4_copy1

0xefcb,	// (0x00049cc8) set_content_pane_g1_copy1_ParamLimits

0xefcb,	// (0x00049cc8) set_content_pane_g1_copy1

0xf0ee,	// (0x00049deb) setting_code_pane_copy1

0xf0f8,	// (0x00049df5) setting_slider_graphic_pane_copy1

0xf0f8,	// (0x00049df5) setting_slider_pane_copy1

0xf102,	// (0x00049dff) setting_text_pane_copy1

0xf10c,	// (0x00049e09) setting_volume_pane_copy1

0xf115,	// (0x00049e12) settings_code_pane_cp2_copy1

0xf11d,	// (0x00049e1a) settings_code_pane_cp_copy1_ParamLimits

0xf11d,	// (0x00049e1a) settings_code_pane_cp_copy1

0xf131,	// (0x00049e2e) volume_set_pane_copy1

0xf13d,	// (0x00049e3a) volume_set_pane_g10_copy1

0xf149,	// (0x00049e46) volume_set_pane_g1_copy1

0xf153,	// (0x00049e50) volume_set_pane_g2_copy1

0xf15d,	// (0x00049e5a) volume_set_pane_g3_copy1

0xf167,	// (0x00049e64) volume_set_pane_g4_copy1

0xf171,	// (0x00049e6e) volume_set_pane_g5_copy1

0xf17b,	// (0x00049e78) volume_set_pane_g6_copy1

0xf185,	// (0x00049e82) volume_set_pane_g7_copy1

0xf18f,	// (0x00049e8c) volume_set_pane_g8_copy1

0xf199,	// (0x00049e96) volume_set_pane_g9_copy1

0x7857,	// (0x00042554) bg_set_opt_pane_cp_copy1_ParamLimits

0x7857,	// (0x00042554) bg_set_opt_pane_cp_copy1

0xf1a3,	// (0x00049ea0) setting_slider_pane_t1_copy1_ParamLimits

0xf1a3,	// (0x00049ea0) setting_slider_pane_t1_copy1

0xf1c1,	// (0x00049ebe) setting_slider_pane_t2_copy1_ParamLimits

0xf1c1,	// (0x00049ebe) setting_slider_pane_t2_copy1

0xf1db,	// (0x00049ed8) setting_slider_pane_t3_copy1_ParamLimits

0xf1db,	// (0x00049ed8) setting_slider_pane_t3_copy1

0xf1f3,	// (0x00049ef0) slider_set_pane_copy1_ParamLimits

0xf1f3,	// (0x00049ef0) slider_set_pane_copy1

0x8145,	// (0x00042e42) set_opt_bg_pane_g1_copy2

0x814d,	// (0x00042e4a) set_opt_bg_pane_g2_copy2

0xf209,	// (0x00049f06) set_opt_bg_pane_g3_copy2

0x815d,	// (0x00042e5a) set_opt_bg_pane_g4_copy2

0x8165,	// (0x00042e62) set_opt_bg_pane_g5_copy2

0x816d,	// (0x00042e6a) set_opt_bg_pane_g6_copy2

0xf213,	// (0x00049f10) set_opt_bg_pane_g7_copy2

0xf21d,	// (0x00049f1a) set_opt_bg_pane_g8_copy2

0xf227,	// (0x00049f24) set_opt_bg_pane_g9_copy2

0xf231,	// (0x00049f2e) aid_size_touch_slider_mark_copy1_ParamLimits

0xf231,	// (0x00049f2e) aid_size_touch_slider_mark_copy1

0xf245,	// (0x00049f42) slider_set_pane_g1_copy1

0xf24e,	// (0x00049f4b) slider_set_pane_g2_copy1

0xb605,	// (0x00046302) slider_set_pane_g3_copy1_ParamLimits

0xb605,	// (0x00046302) slider_set_pane_g3_copy1

0xb619,	// (0x00046316) slider_set_pane_g4_copy1_ParamLimits

0xb619,	// (0x00046316) slider_set_pane_g4_copy1

0xb631,	// (0x0004632e) slider_set_pane_g5_copy1_ParamLimits

0xb631,	// (0x0004632e) slider_set_pane_g5_copy1

0xb605,	// (0x00046302) slider_set_pane_g6_copy1_ParamLimits

0xb605,	// (0x00046302) slider_set_pane_g6_copy1

0xf256,	// (0x00049f53) slider_set_pane_g7_copy1_ParamLimits

0xf256,	// (0x00049f53) slider_set_pane_g7_copy1

0x7777,	// (0x00042474) bg_set_opt_pane_cp2_copy1

0xf26c,	// (0x00049f69) setting_slider_graphic_pane_g1_copy1

0xf275,	// (0x00049f72) setting_slider_graphic_pane_t1_copy1

0xf285,	// (0x00049f82) setting_slider_graphic_pane_t2_copy1

0xf295,	// (0x00049f92) slider_set_pane_cp_copy1

0xf2a5,	// (0x00049fa2) input_focus_pane_cp1_copy1

0xf2ae,	// (0x00049fab) list_set_text_pane_copy1

0xf2b6,	// (0x00049fb3) setting_text_pane_g1_copy1

0x4cd9,	// (0x0003f9d6) set_text_pane_t1_copy1

0xf2a5,	// (0x00049fa2) input_focus_pane_cp2_copy1

0xf2b6,	// (0x00049fb3) setting_code_pane_g1_copy1

0xf2bf,	// (0x00049fbc) setting_code_pane_t1_copy1

0xf2cd,	// (0x00049fca) list_set_graphic_pane_copy1

0x7777,	// (0x00042474) bg_set_opt_pane_cp4_copy1

0x8a36,	// (0x00043733) list_set_graphic_pane_g1_copy1_ParamLimits

0x8a36,	// (0x00043733) list_set_graphic_pane_g1_copy1

0xf2df,	// (0x00049fdc) list_set_graphic_pane_g2_copy1

0x8a4e,	// (0x0004374b) list_set_graphic_pane_t1_copy1_ParamLimits

0x8a4e,	// (0x0004374b) list_set_graphic_pane_t1_copy1

0xc246,	// (0x00046f43) rs_clock_indi_pane_g1

0xf2e7,	// (0x00049fe4) rs_clock_indi_pane_t1

0xf2f5,	// (0x00049ff2) rs_indi_pane

0xf2fd,	// (0x00049ffa) rs_indi_pane_g1

0xf306,	// (0x0004a003) rs_indi_pane_g2

0xf30f,	// (0x0004a00c) rs_indi_pane_g3

0x0002,

0xfeeb,	// (0x0004abe8) rs_indi_pane_g

0x8d3c,	// (0x00043a39) bg_popup_preview_window_pane_cp03

0xf318,	// (0x0004a015) popup_fep_tooltip_window_t1

0xcefa,	// (0x00047bf7) popup_note2_window_g2_ParamLimits

0xcefa,	// (0x00047bf7) popup_note2_window_g2

0x0001,

0xfc89,	// (0x0004a986) popup_note2_window_g_ParamLimits

0xfc89,	// (0x0004a986) popup_note2_window_g

0xd402,	// (0x000480ff) bg_popup_sub_pane_cp11_ParamLimits

0xd40f,	// (0x0004810c) cell_ai3_links_pane_g1_ParamLimits

0xd426,	// (0x00048123) cell_ai3_links_pane_t1

0x4cd9,	// (0x0003f9d6) set_text_pane_t1_copy1_ParamLimits

0x8c49,	// (0x00043946) cell_graphic_popup_pane_cp2_ParamLimits

0x8c49,	// (0x00043946) cell_graphic_popup_pane_cp2

0xf326,	// (0x0004a023) cell_graphic_popup_pane_g1_cp2

0x7e29,	// (0x00042b26) cell_graphic_popup_pane_g2_cp2

0xf32e,	// (0x0004a02b) cell_graphic_popup_pane_g3_cp2

0xf336,	// (0x0004a033) cell_graphic_popup_pane_t2_cp2

0x7e3a,	// (0x00042b37) grid_highlight_pane_cp3_cp2

0x8491,	// (0x0004318e) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x80de,	// (0x00042ddb) main_tmo_pane_ParamLimits

0xd746,	// (0x00048443) popup_tmo_big_image_note_window

0xe7d8,	// (0x000494d5) cell_ai5_widget_list_pane

0xe7e0,	// (0x000494dd) cell_ai5_widget_lrg_icon_pane

0xee4c,	// (0x00049b49) tmo_note_info_pane_t1_ParamLimits

0xee61,	// (0x00049b5e) tmo_note_info_pane_t2_ParamLimits

0xee7a,	// (0x00049b77) tmo_note_info_pane_t3_ParamLimits

0xee8f,	// (0x00049b8c) tmo_note_info_pane_t4_ParamLimits

0xeea1,	// (0x00049b9e) tmo_note_info_pane_t5_ParamLimits

0xfed9,	// (0x0004abd6) tmo_note_info_pane_t_ParamLimits

0xefd7,	// (0x00049cd4) settings_container_pane_ParamLimits

0xf29d,	// (0x00049f9a) indicator_popup_pane_cp5

0xf29d,	// (0x00049f9a) indicator_popup_pane_cp6

0xf2cd,	// (0x00049fca) list_set_graphic_pane_copy1_ParamLimits

0x7763,	// (0x00042460) bg_popup_window_pane_cp23

0xf344,	// (0x0004a041) popup_tmo_big_image_note_window_g1

0xf350,	// (0x0004a04d) popup_tmo_big_image_note_window_t1

0xf360,	// (0x0004a05d) popup_tmo_big_image_note_window_t2

0xf370,	// (0x0004a06d) popup_tmo_big_image_note_window_t3

0x0002,

0xfef2,	// (0x0004abef) popup_tmo_big_image_note_window_t

0xf380,	// (0x0004a07d) cell_ai5_widget_lrg_icon_pane_g1

0xf388,	// (0x0004a085) cell_ai5_widget_lrg_icon_pane_t1

0xf396,	// (0x0004a093) cell_ai5_widget_list_row_pane_ParamLimits

0xf396,	// (0x0004a093) cell_ai5_widget_list_row_pane

0xf3af,	// (0x0004a0ac) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf3af,	// (0x0004a0ac) cell_ai5_widget_list_row_pane_g1

0xf3bc,	// (0x0004a0b9) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf3bc,	// (0x0004a0b9) cell_ai5_widget_list_row_pane_t1

0xf3d4,	// (0x0004a0d1) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf3d4,	// (0x0004a0d1) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfef9,	// (0x0004abf6) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfef9,	// (0x0004abf6) cell_ai5_widget_list_row_pane_t

0x7763,	// (0x00042460) main_fep_vtchi_ss_pane

0xf3e6,	// (0x0004a0e3) popup_fep_char_pre_window

0xf3ee,	// (0x0004a0eb) popup_fep_ituss_window

0xf3f9,	// (0x0004a0f6) popup_fep_vkbss_window

0xf404,	// (0x0004a101) grid_vkbss_keypad_pane_ParamLimits

0xf404,	// (0x0004a101) grid_vkbss_keypad_pane

0xf414,	// (0x0004a111) ituss_keypad_pane

0xf41c,	// (0x0004a119) aid_vkbss_key_offset_ParamLimits

0xf41c,	// (0x0004a119) aid_vkbss_key_offset

0xf42b,	// (0x0004a128) cell_vkbss_key_pane_ParamLimits

0xf42b,	// (0x0004a128) cell_vkbss_key_pane

0xf441,	// (0x0004a13e) bg_cell_vkbss_key_g1_ParamLimits

0xf441,	// (0x0004a13e) bg_cell_vkbss_key_g1

0xf44d,	// (0x0004a14a) cell_vkbss_key_3p_pane_ParamLimits

0xf44d,	// (0x0004a14a) cell_vkbss_key_3p_pane

0xf467,	// (0x0004a164) cell_vkbss_key_g1_ParamLimits

0xf467,	// (0x0004a164) cell_vkbss_key_g1

0xf481,	// (0x0004a17e) cell_vkbss_key_t1_ParamLimits

0xf481,	// (0x0004a17e) cell_vkbss_key_t1

0xf4ac,	// (0x0004a1a9) cell_ituss_key_pane_ParamLimits

0xf4ac,	// (0x0004a1a9) cell_ituss_key_pane

0xf4bb,	// (0x0004a1b8) bg_cell_ituss_key_g1_ParamLimits

0xf4bb,	// (0x0004a1b8) bg_cell_ituss_key_g1

0xf4c7,	// (0x0004a1c4) cell_ituss_key_pane_g1_ParamLimits

0xf4c7,	// (0x0004a1c4) cell_ituss_key_pane_g1

0xf4d3,	// (0x0004a1d0) cell_ituss_key_pane_g2_ParamLimits

0xf4d3,	// (0x0004a1d0) cell_ituss_key_pane_g2

0x0001,

0xfefe,	// (0x0004abfb) cell_ituss_key_pane_g_ParamLimits

0xfefe,	// (0x0004abfb) cell_ituss_key_pane_g

0xf4e7,	// (0x0004a1e4) cell_ituss_key_t1_ParamLimits

0xf4e7,	// (0x0004a1e4) cell_ituss_key_t1

0xf505,	// (0x0004a202) cell_ituss_key_t2_ParamLimits

0xf505,	// (0x0004a202) cell_ituss_key_t2

0xf524,	// (0x0004a221) cell_ituss_key_t3_ParamLimits

0xf524,	// (0x0004a221) cell_ituss_key_t3

0xf543,	// (0x0004a240) cell_ituss_key_t4_ParamLimits

0xf543,	// (0x0004a240) cell_ituss_key_t4

0x0003,

0xff03,	// (0x0004ac00) cell_ituss_key_t_ParamLimits

0xff03,	// (0x0004ac00) cell_ituss_key_t

0xf562,	// (0x0004a25f) cell_vkbss_key_3p_pane_g1

0xf56a,	// (0x0004a267) cell_vkbss_key_3p_pane_g2

0xf572,	// (0x0004a26f) cell_vkbss_key_3p_pane_g3

0x0002,

0xff0c,	// (0x0004ac09) cell_vkbss_key_3p_pane_g

0x7763,	// (0x00042460) bg_popup_fep_char_preview_window_cp02

0xf57a,	// (0x0004a277) popup_fep_char_pre_window_t1

0xe7ae,	// (0x000494ab) main_ai5_sk_pane

0xef1b,	// (0x00049c18) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xef27,	// (0x00049c24) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xef3b,	// (0x00049c38) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xef4a,	// (0x00049c47) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfee4,	// (0x0004abe1) cell_contacts_ai5_widget_pane_g_ParamLimits

0xef5d,	// (0x00049c5a) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x80de,	// (0x00042ddb) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf589,	// (0x0004a286) main_ai5_sk_pane_g1
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

} // end of namespace AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch_Large
