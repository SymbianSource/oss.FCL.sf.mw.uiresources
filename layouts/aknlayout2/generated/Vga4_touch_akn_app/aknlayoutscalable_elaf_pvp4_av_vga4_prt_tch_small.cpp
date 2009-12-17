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

#include "aknlayoutscalable_elaf_pvp4_av_vga4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0001aa52 };

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
0x7737,	// (0x00022189) Screen

0x774b,	// (0x0002219d) application_window_ParamLimits

0x774b,	// (0x0002219d) application_window

0x7765,	// (0x000221b7) screen_g1

0x5d10,	// (0x00020762) area_bottom_pane_ParamLimits

0x5d10,	// (0x00020762) area_bottom_pane

0x5dd0,	// (0x00020822) area_top_pane_ParamLimits

0x5dd0,	// (0x00020822) area_top_pane

0x5e64,	// (0x000208b6) main_pane_ParamLimits

0x5e64,	// (0x000208b6) main_pane

0x776f,	// (0x000221c1) misc_graphics

0x976f,	// (0x000241c1) battery_pane_ParamLimits

0x976f,	// (0x000241c1) battery_pane

0xa451,	// (0x00024ea3) bg_status_flat_pane_g8

0xa459,	// (0x00024eab) bg_status_flat_pane_g9

0x9837,	// (0x00024289) context_pane_ParamLimits

0x9837,	// (0x00024289) context_pane

0x995b,	// (0x000243ad) navi_pane_ParamLimits

0x995b,	// (0x000243ad) navi_pane

0x99ea,	// (0x0002443c) signal_pane_ParamLimits

0x99ea,	// (0x0002443c) signal_pane

0x0008,

0xf8b2,	// (0x0002a304) bg_status_flat_pane_g

0x9a57,	// (0x000244a9) status_pane_g1_ParamLimits

0x9a57,	// (0x000244a9) status_pane_g1

0x9a6b,	// (0x000244bd) status_pane_g2_ParamLimits

0x9a6b,	// (0x000244bd) status_pane_g2

0x9a77,	// (0x000244c9) status_pane_g3_ParamLimits

0x9a77,	// (0x000244c9) status_pane_g3

0x0004,

0xf7e0,	// (0x0002a232) status_pane_g_ParamLimits

0xf7e0,	// (0x0002a232) status_pane_g

0x9aab,	// (0x000244fd) title_pane_ParamLimits

0x9aab,	// (0x000244fd) title_pane

0x9ae8,	// (0x0002453a) uni_indicator_pane_ParamLimits

0x9ae8,	// (0x0002453a) uni_indicator_pane

0x9064,	// (0x00023ab6) bg_list_pane_ParamLimits

0x9064,	// (0x00023ab6) bg_list_pane

0x9084,	// (0x00023ad6) find_pane

0x908c,	// (0x00023ade) listscroll_app_pane_ParamLimits

0x908c,	// (0x00023ade) listscroll_app_pane

0x9098,	// (0x00023aea) listscroll_form_pane

0x90a0,	// (0x00023af2) listscroll_gen_pane_ParamLimits

0x90a0,	// (0x00023af2) listscroll_gen_pane

0x9098,	// (0x00023aea) listscroll_set_pane

0x82cd,	// (0x00022d1f) main_idle_act_pane

0x8d40,	// (0x00023792) main_idle_trad_pane

0x8d40,	// (0x00023792) main_list_empty_pane

0x90c6,	// (0x00023b18) main_midp_pane

0x90d2,	// (0x00023b24) main_pane_g1_ParamLimits

0x90d2,	// (0x00023b24) main_pane_g1

0x90e0,	// (0x00023b32) popup_ai_message_window_ParamLimits

0x90e0,	// (0x00023b32) popup_ai_message_window

0x9190,	// (0x00023be2) popup_fep_china_uni_window_ParamLimits

0x9190,	// (0x00023be2) popup_fep_china_uni_window

0x91f0,	// (0x00023c42) popup_fep_japan_candidate_window_ParamLimits

0x91f0,	// (0x00023c42) popup_fep_japan_candidate_window

0x921a,	// (0x00023c6c) popup_fep_japan_predictive_window_ParamLimits

0x921a,	// (0x00023c6c) popup_fep_japan_predictive_window

0x9250,	// (0x00023ca2) popup_find_window

0x925d,	// (0x00023caf) popup_grid_graphic_window_ParamLimits

0x925d,	// (0x00023caf) popup_grid_graphic_window

0x928b,	// (0x00023cdd) popup_large_graphic_colour_window

0x92b1,	// (0x00023d03) popup_menu_window_ParamLimits

0x92b1,	// (0x00023d03) popup_menu_window

0x947b,	// (0x00023ecd) popup_note_image_window

0x9465,	// (0x00023eb7) popup_note_wait_window_ParamLimits

0x9465,	// (0x00023eb7) popup_note_wait_window

0x9465,	// (0x00023eb7) popup_note_window_ParamLimits

0x9465,	// (0x00023eb7) popup_note_window

0x94e1,	// (0x00023f33) popup_query_code_window_ParamLimits

0x94e1,	// (0x00023f33) popup_query_code_window

0x94f7,	// (0x00023f49) popup_query_data_code_window_ParamLimits

0x94f7,	// (0x00023f49) popup_query_data_code_window

0x951a,	// (0x00023f6c) popup_query_data_window_ParamLimits

0x951a,	// (0x00023f6c) popup_query_data_window

0x953c,	// (0x00023f8e) popup_query_sat_info_window_ParamLimits

0x953c,	// (0x00023f8e) popup_query_sat_info_window

0x957b,	// (0x00023fcd) popup_snote_single_graphic_window_ParamLimits

0x957b,	// (0x00023fcd) popup_snote_single_graphic_window

0x957b,	// (0x00023fcd) popup_snote_single_text_window_ParamLimits

0x957b,	// (0x00023fcd) popup_snote_single_text_window

0x9592,	// (0x00023fe4) popup_sub_window_general

0x96d8,	// (0x0002412a) popup_window_general_ParamLimits

0x96d8,	// (0x0002412a) popup_window_general

0x96f1,	// (0x00024143) power_save_pane

0x65db,	// (0x0002102d) control_pane_g1_ParamLimits

0x65db,	// (0x0002102d) control_pane_g1

0x6604,	// (0x00021056) control_pane_g2_ParamLimits

0x6604,	// (0x00021056) control_pane_g2

0x900d,	// (0x00023a5f) control_pane_g3_ParamLimits

0x900d,	// (0x00023a5f) control_pane_g3

0x0007,

0xf7c8,	// (0x0002a21a) control_pane_g_ParamLimits

0xf7c8,	// (0x0002a21a) control_pane_g

0x6644,	// (0x00021096) control_pane_t1_ParamLimits

0x6644,	// (0x00021096) control_pane_t1

0x6696,	// (0x000210e8) control_pane_t2_ParamLimits

0x6696,	// (0x000210e8) control_pane_t2

0x0002,

0xf7d9,	// (0x0002a22b) control_pane_t_ParamLimits

0xf7d9,	// (0x0002a22b) control_pane_t

0x8f2e,	// (0x00023980) navi_navi_volume_pane_cp1

0x8f37,	// (0x00023989) status_small_icon_pane

0x8f3f,	// (0x00023991) status_small_pane_g1_ParamLimits

0x8f3f,	// (0x00023991) status_small_pane_g1

0x8f73,	// (0x000239c5) status_small_pane_g2_ParamLimits

0x8f73,	// (0x000239c5) status_small_pane_g2

0x8f7f,	// (0x000239d1) status_small_pane_g3_ParamLimits

0x8f7f,	// (0x000239d1) status_small_pane_g3

0x8f8b,	// (0x000239dd) status_small_pane_g4_ParamLimits

0x8f8b,	// (0x000239dd) status_small_pane_g4

0x8f97,	// (0x000239e9) status_small_pane_g5_ParamLimits

0x8f97,	// (0x000239e9) status_small_pane_g5

0x8fa6,	// (0x000239f8) status_small_pane_g6_ParamLimits

0x8fa6,	// (0x000239f8) status_small_pane_g6

0x0007,

0xf7b7,	// (0x0002a209) status_small_pane_g_ParamLimits

0xf7b7,	// (0x0002a209) status_small_pane_g

0x8fd6,	// (0x00023a28) status_small_pane_t1

0x8ff9,	// (0x00023a4b) status_small_wait_pane_ParamLimits

0x8ff9,	// (0x00023a4b) status_small_wait_pane

0x87cb,	// (0x0002321d) aid_levels_signal_ParamLimits

0x87cb,	// (0x0002321d) aid_levels_signal

0x87dd,	// (0x0002322f) signal_pane_g1_ParamLimits

0x87dd,	// (0x0002322f) signal_pane_g1

0x87f2,	// (0x00023244) signal_pane_g2_ParamLimits

0x87f2,	// (0x00023244) signal_pane_g2

0x0001,

0xf74c,	// (0x0002a19e) signal_pane_g_ParamLimits

0xf74c,	// (0x0002a19e) signal_pane_g

0x8807,	// (0x00023259) context_pane_g1

0x7779,	// (0x000221cb) title_pane_g1

0x77af,	// (0x00022201) title_pane_t1

0x7817,	// (0x00022269) title_pane_t2

0x783d,	// (0x0002228f) title_pane_t3

0x0002,

0xf59b,	// (0x00029fed) title_pane_t

0x9b00,	// (0x00024552) aid_levels_battery_ParamLimits

0x9b00,	// (0x00024552) aid_levels_battery

0x9b14,	// (0x00024566) battery_pane_g1_ParamLimits

0x9b14,	// (0x00024566) battery_pane_g1

0x9b2a,	// (0x0002457c) battery_pane_g2_ParamLimits

0x9b2a,	// (0x0002457c) battery_pane_g2

0x0001,

0xf7eb,	// (0x0002a23d) battery_pane_g_ParamLimits

0xf7eb,	// (0x0002a23d) battery_pane_g

0xada1,	// (0x000257f3) uni_indicator_pane_g1

0xadb6,	// (0x00025808) uni_indicator_pane_g2

0xadcc,	// (0x0002581e) uni_indicator_pane_g3

0x0005,

0xf95a,	// (0x0002a3ac) uni_indicator_pane_g

0x8bae,	// (0x00023600) navi_icon_pane_ParamLimits

0x8bae,	// (0x00023600) navi_icon_pane

0x8af5,	// (0x00023547) navi_midp_pane

0x8bca,	// (0x0002361c) navi_navi_pane

0x8bd4,	// (0x00023626) navi_text_pane_ParamLimits

0x8bd4,	// (0x00023626) navi_text_pane

0x7765,	// (0x000221b7) status_small_wait_pane_g1

0x7c81,	// (0x000226d3) status_small_wait_pane_g2

0x0001,

0xf955,	// (0x0002a3a7) status_small_wait_pane_g

0xaab4,	// (0x00025506) navi_navi_icon_text_pane

0xaabc,	// (0x0002550e) navi_navi_pane_g1_ParamLimits

0xaabc,	// (0x0002550e) navi_navi_pane_g1

0xaace,	// (0x00025520) navi_navi_pane_g2_ParamLimits

0xaace,	// (0x00025520) navi_navi_pane_g2

0x0001,

0xf923,	// (0x0002a375) navi_navi_pane_g_ParamLimits

0xf923,	// (0x0002a375) navi_navi_pane_g

0xaae0,	// (0x00025532) navi_navi_tabs_pane

0xaae9,	// (0x0002553b) navi_navi_text_pane

0xaab4,	// (0x00025506) navi_navi_volume_pane

0xaa8d,	// (0x000254df) navi_text_pane_t1

0xaa7e,	// (0x000254d0) navi_icon_pane_g1

0xa9d1,	// (0x00025423) navi_navi_text_pane_t1

0x69ad,	// (0x000213ff) navi_navi_volume_pane_g1

0x69b5,	// (0x00021407) volume_small_pane

0xa937,	// (0x00025389) navi_navi_icon_text_pane_g1

0xa93f,	// (0x00025391) navi_navi_icon_text_pane_t1

0x8bca,	// (0x0002361c) navi_tabs_2_long_pane

0x8bca,	// (0x0002361c) navi_tabs_2_pane

0x8bca,	// (0x0002361c) navi_tabs_3_long_pane

0x8bca,	// (0x0002361c) navi_tabs_3_pane

0x8bca,	// (0x0002361c) navi_tabs_4_pane

0x698d,	// (0x000213df) tabs_2_active_pane_ParamLimits

0x698d,	// (0x000213df) tabs_2_active_pane

0x699d,	// (0x000213ef) tabs_2_passive_pane_ParamLimits

0x699d,	// (0x000213ef) tabs_2_passive_pane

0x695b,	// (0x000213ad) tabs_3_active_pane_ParamLimits

0x695b,	// (0x000213ad) tabs_3_active_pane

0x696b,	// (0x000213bd) tabs_3_passive_pane_ParamLimits

0x696b,	// (0x000213bd) tabs_3_passive_pane

0x697c,	// (0x000213ce) tabs_3_passive_pane_cp_ParamLimits

0x697c,	// (0x000213ce) tabs_3_passive_pane_cp

0x690f,	// (0x00021361) tabs_4_active_pane_ParamLimits

0x690f,	// (0x00021361) tabs_4_active_pane

0x6922,	// (0x00021374) tabs_4_passive_pane_ParamLimits

0x6922,	// (0x00021374) tabs_4_passive_pane

0x6933,	// (0x00021385) tabs_4_passive_pane_cp_ParamLimits

0x6933,	// (0x00021385) tabs_4_passive_pane_cp

0x6944,	// (0x00021396) tabs_4_passive_pane_cp2_ParamLimits

0x6944,	// (0x00021396) tabs_4_passive_pane_cp2

0x68eb,	// (0x0002133d) tabs_2_long_active_pane_ParamLimits

0x68eb,	// (0x0002133d) tabs_2_long_active_pane

0x68fd,	// (0x0002134f) tabs_2_long_passive_pane_ParamLimits

0x68fd,	// (0x0002134f) tabs_2_long_passive_pane

0x68ac,	// (0x000212fe) tabs_3_long_active_pane_ParamLimits

0x68ac,	// (0x000212fe) tabs_3_long_active_pane

0x68bf,	// (0x00021311) tabs_3_long_passive_pane_ParamLimits

0x68bf,	// (0x00021311) tabs_3_long_passive_pane

0x68d8,	// (0x0002132a) tabs_3_long_passive_pane_cp_ParamLimits

0x68d8,	// (0x0002132a) tabs_3_long_passive_pane_cp

0x6852,	// (0x000212a4) volume_small_pane_g1

0x685b,	// (0x000212ad) volume_small_pane_g2

0x6864,	// (0x000212b6) volume_small_pane_g3

0x686d,	// (0x000212bf) volume_small_pane_g4

0x6876,	// (0x000212c8) volume_small_pane_g5

0x687f,	// (0x000212d1) volume_small_pane_g6

0x6888,	// (0x000212da) volume_small_pane_g7

0x6891,	// (0x000212e3) volume_small_pane_g8

0x689a,	// (0x000212ec) volume_small_pane_g9

0x68a3,	// (0x000212f5) volume_small_pane_g10

0x0009,

0xf8ef,	// (0x0002a341) volume_small_pane_g

0x784f,	// (0x000222a1) bg_active_tab_pane_cp2_ParamLimits

0x784f,	// (0x000222a1) bg_active_tab_pane_cp2

0x785d,	// (0x000222af) tabs_3_active_pane_g1

0x7865,	// (0x000222b7) tabs_3_active_pane_t1

0x784f,	// (0x000222a1) bg_passive_tab_pane_cp2_ParamLimits

0x784f,	// (0x000222a1) bg_passive_tab_pane_cp2

0x785d,	// (0x000222af) tabs_3_passive_pane_g1

0x7865,	// (0x000222b7) tabs_3_passive_pane_t1

0x784f,	// (0x000222a1) bg_active_tab_pane_cp3_ParamLimits

0x784f,	// (0x000222a1) bg_active_tab_pane_cp3

0x7877,	// (0x000222c9) tabs_4_active_pane_g1

0x787f,	// (0x000222d1) tabs_4_active_pane_t1

0x784f,	// (0x000222a1) bg_passive_tab_pane_cp3_ParamLimits

0x784f,	// (0x000222a1) bg_passive_tab_pane_cp3

0x7877,	// (0x000222c9) tabs_4_1_passive_pane_g1

0x787f,	// (0x000222d1) tabs_4_1_passive_pane_t1

0x90c6,	// (0x00023b18) list_highlight_pane_cp2

0xb030,	// (0x00025a82) list_set_pane_ParamLimits

0xb030,	// (0x00025a82) list_set_pane

0xb0f8,	// (0x00025b4a) main_pane_set_t1_ParamLimits

0xb0f8,	// (0x00025b4a) main_pane_set_t1

0xb118,	// (0x00025b6a) main_pane_set_t2_ParamLimits

0xb118,	// (0x00025b6a) main_pane_set_t2

0xb12c,	// (0x00025b7e) main_pane_set_t3_ParamLimits

0xb12c,	// (0x00025b7e) main_pane_set_t3

0xb140,	// (0x00025b92) main_pane_set_t4_ParamLimits

0xb140,	// (0x00025b92) main_pane_set_t4

0x0003,

0xf9bf,	// (0x0002a411) main_pane_set_t_ParamLimits

0xf9bf,	// (0x0002a411) main_pane_set_t

0xb160,	// (0x00025bb2) setting_code_pane

0xb16a,	// (0x00025bbc) setting_slider_graphic_pane

0xb16a,	// (0x00025bbc) setting_slider_pane

0xb16a,	// (0x00025bbc) setting_text_pane

0xb16a,	// (0x00025bbc) setting_volume_pane

0x60bb,	// (0x00020b0d) volume_set_pane

0x784f,	// (0x000222a1) bg_set_opt_pane_cp

0x60c5,	// (0x00020b17) setting_slider_pane_t1

0x60db,	// (0x00020b2d) setting_slider_pane_t2

0x60f5,	// (0x00020b47) setting_slider_pane_t3

0x0002,

0xf5a2,	// (0x00029ff4) setting_slider_pane_t

0x610d,	// (0x00020b5f) slider_set_pane

0x776f,	// (0x000221c1) bg_set_opt_pane_cp2

0x7891,	// (0x000222e3) setting_slider_graphic_pane_g1

0x6123,	// (0x00020b75) setting_slider_graphic_pane_t1

0x6133,	// (0x00020b85) setting_slider_graphic_pane_t2

0x0001,

0xf5a9,	// (0x00029ffb) setting_slider_graphic_pane_t

0x6143,	// (0x00020b95) slider_set_pane_cp

0x776f,	// (0x000221c1) input_focus_pane_cp1

0xaff1,	// (0x00025a43) list_set_text_pane

0x7765,	// (0x000221b7) setting_text_pane_g1

0x776f,	// (0x000221c1) input_focus_pane_cp2

0x7765,	// (0x000221b7) setting_code_pane_g1

0x789a,	// (0x000222ec) setting_code_pane_t1

0x4ceb,	// (0x0001f73d) set_text_pane_t1_ParamLimits

0x4ceb,	// (0x0001f73d) set_text_pane_t1

0x813d,	// (0x00022b8f) set_opt_bg_pane_g1

0x8145,	// (0x00022b97) set_opt_bg_pane_g2

0xafc9,	// (0x00025a1b) set_opt_bg_pane_g3

0x8155,	// (0x00022ba7) set_opt_bg_pane_g4

0x815d,	// (0x00022baf) set_opt_bg_pane_g5

0x8165,	// (0x00022bb7) set_opt_bg_pane_g6

0xafd3,	// (0x00025a25) set_opt_bg_pane_g7

0xafdd,	// (0x00025a2f) set_opt_bg_pane_g8

0xafe7,	// (0x00025a39) set_opt_bg_pane_g9

0x0008,

0xf9ac,	// (0x0002a3fe) set_opt_bg_pane_g

0xafbc,	// (0x00025a0e) slider_set_pane_g1

0x6a36,	// (0x00021488) slider_set_pane_g2

0x0006,

0xf99d,	// (0x0002a3ef) slider_set_pane_g

0x69be,	// (0x00021410) volume_set_pane_g1

0x69c8,	// (0x0002141a) volume_set_pane_g2

0x69d2,	// (0x00021424) volume_set_pane_g3

0x69dc,	// (0x0002142e) volume_set_pane_g4

0x69e6,	// (0x00021438) volume_set_pane_g5

0x69f0,	// (0x00021442) volume_set_pane_g6

0x69fa,	// (0x0002144c) volume_set_pane_g7

0x6a04,	// (0x00021456) volume_set_pane_g8

0x6a0e,	// (0x00021460) volume_set_pane_g9

0x6a18,	// (0x0002146a) volume_set_pane_g10

0x0009,

0xf975,	// (0x0002a3c7) volume_set_pane_g

0x78a8,	// (0x000222fa) indicator_pane_ParamLimits

0x78a8,	// (0x000222fa) indicator_pane

0x78b4,	// (0x00022306) main_idle_pane_g2_ParamLimits

0x78b4,	// (0x00022306) main_idle_pane_g2

0x78dc,	// (0x0002232e) main_pane_idle_g1_ParamLimits

0x78dc,	// (0x0002232e) main_pane_idle_g1

0x78ea,	// (0x0002233c) popup_clock_digital_analogue_window_ParamLimits

0x78ea,	// (0x0002233c) popup_clock_digital_analogue_window

0x7901,	// (0x00022353) soft_indicator_pane_ParamLimits

0x7901,	// (0x00022353) soft_indicator_pane

0x790f,	// (0x00022361) wallpaper_pane_ParamLimits

0x790f,	// (0x00022361) wallpaper_pane

0x7765,	// (0x000221b7) wallpaper_pane_g1

0x7923,	// (0x00022375) indicator_pane_g1_ParamLimits

0x7923,	// (0x00022375) indicator_pane_g1

0xb42e,	// (0x00025e80) navi_navi_icon_text_pane_srt_g1

0x793e,	// (0x00022390) soft_indicator_pane_t1

0x7958,	// (0x000223aa) aid_ps_area_pane

0x7969,	// (0x000223bb) aid_ps_clock_pane

0x7977,	// (0x000223c9) aid_ps_indicator_pane

0x7983,	// (0x000223d5) indicator_ps_pane_ParamLimits

0x7983,	// (0x000223d5) indicator_ps_pane

0x7992,	// (0x000223e4) power_save_pane_g1_ParamLimits

0x7992,	// (0x000223e4) power_save_pane_g1

0x799e,	// (0x000223f0) power_save_pane_g2_ParamLimits

0x799e,	// (0x000223f0) power_save_pane_g2

0x5cc4,	// (0x00020716) aid_navinavi_width_pane

0x7958,	// (0x000223aa) aid_ps_area_pane_ParamLimits

0x0001,

0xf5ae,	// (0x0002a000) power_save_pane_g_ParamLimits

0xf5ae,	// (0x0002a000) power_save_pane_g

0x79ac,	// (0x000223fe) power_save_pane_t1_ParamLimits

0x79ac,	// (0x000223fe) power_save_pane_t1

0x7969,	// (0x000223bb) aid_ps_clock_pane_ParamLimits

0x7977,	// (0x000223c9) aid_ps_indicator_pane_ParamLimits

0x79be,	// (0x00022410) power_save_pane_t4_ParamLimits

0x79be,	// (0x00022410) power_save_pane_t4

0x0001,

0xf5b3,	// (0x0002a005) power_save_pane_t_ParamLimits

0xf5b3,	// (0x0002a005) power_save_pane_t

0x79e8,	// (0x0002243a) power_save_t3_ParamLimits

0x79e8,	// (0x0002243a) power_save_t3

0x79d3,	// (0x00022425) power_save_t2_ParamLimits

0x79d3,	// (0x00022425) power_save_t2

0x79fd,	// (0x0002244f) indicator_ps_pane_g1

0x7a06,	// (0x00022458) ai_gene_pane_ParamLimits

0x7a06,	// (0x00022458) ai_gene_pane

0x7a12,	// (0x00022464) ai_links_pane_ParamLimits

0x7a12,	// (0x00022464) ai_links_pane

0x7a1e,	// (0x00022470) indicator_pane_cp1_ParamLimits

0x7a1e,	// (0x00022470) indicator_pane_cp1

0x7a2a,	// (0x0002247c) main_pane_idle_g1_cp_ParamLimits

0x7a2a,	// (0x0002247c) main_pane_idle_g1_cp

0x7a36,	// (0x00022488) popup_ai_links_title_window

0x7a3f,	// (0x00022491) soft_indicator_pane_cp1_ParamLimits

0x7a3f,	// (0x00022491) soft_indicator_pane_cp1

0xad8f,	// (0x000257e1) ai_links_pane_g1

0xad98,	// (0x000257ea) grid_ai_links_pane

0xad74,	// (0x000257c6) ai_gene_pane_1

0xad7d,	// (0x000257cf) ai_gene_pane_2

0xad86,	// (0x000257d8) list_highlight_pane_cp4

0xad54,	// (0x000257a6) cell_ai_link_pane_ParamLimits

0xad54,	// (0x000257a6) cell_ai_link_pane

0xad4c,	// (0x0002579e) cell_ai_link_pane_g1

0x7c81,	// (0x000226d3) cell_ai_link_pane_g2

0x0001,

0xf950,	// (0x0002a3a2) cell_ai_link_pane_g

0x776f,	// (0x000221c1) grid_highlight_cp2

0x776f,	// (0x000221c1) bg_popup_sub_pane_cp1

0x7a59,	// (0x000224ab) popup_ai_links_title_window_t1

0xac98,	// (0x000256ea) ai_gene_pane_1_g1_ParamLimits

0xac98,	// (0x000256ea) ai_gene_pane_1_g1

0xaca4,	// (0x000256f6) ai_gene_pane_1_g2_ParamLimits

0xaca4,	// (0x000256f6) ai_gene_pane_1_g2

0x0001,

0xf946,	// (0x0002a398) ai_gene_pane_1_g_ParamLimits

0xf946,	// (0x0002a398) ai_gene_pane_1_g

0xacb1,	// (0x00025703) ai_gene_pane_1_t1_ParamLimits

0xacb1,	// (0x00025703) ai_gene_pane_1_t1

0xace5,	// (0x00025737) grid_ai_soft_ind_pane

0xac83,	// (0x000256d5) ai_gene_pane_2_t1_ParamLimits

0xac83,	// (0x000256d5) ai_gene_pane_2_t1

0x7a68,	// (0x000224ba) main_pane_empty_t1_ParamLimits

0x7a68,	// (0x000224ba) main_pane_empty_t1

0x7a80,	// (0x000224d2) main_pane_empty_t2_ParamLimits

0x7a80,	// (0x000224d2) main_pane_empty_t2

0x7a95,	// (0x000224e7) main_pane_empty_t3_ParamLimits

0x7a95,	// (0x000224e7) main_pane_empty_t3

0x7aa7,	// (0x000224f9) main_pane_empty_t4_ParamLimits

0x7aa7,	// (0x000224f9) main_pane_empty_t4

0x7ab9,	// (0x0002250b) main_pane_empty_t5_ParamLimits

0x7ab9,	// (0x0002250b) main_pane_empty_t5

0x0004,

0xf5b8,	// (0x0002a00a) main_pane_empty_t_ParamLimits

0xf5b8,	// (0x0002a00a) main_pane_empty_t

0x818e,	// (0x00022be0) bg_popup_window_pane_ParamLimits

0x818e,	// (0x00022be0) bg_popup_window_pane

0xa9df,	// (0x00025431) find_popup_pane_cp2_ParamLimits

0xa9df,	// (0x00025431) find_popup_pane_cp2

0xa9eb,	// (0x0002543d) heading_pane_ParamLimits

0xa9eb,	// (0x0002543d) heading_pane

0x776f,	// (0x000221c1) bg_popup_sub_pane

0xa959,	// (0x000253ab) bg_popup_window_pane_g1_ParamLimits

0xa959,	// (0x000253ab) bg_popup_window_pane_g1

0xa965,	// (0x000253b7) bg_popup_window_pane_g2_ParamLimits

0xa965,	// (0x000253b7) bg_popup_window_pane_g2

0xa971,	// (0x000253c3) bg_popup_window_pane_g3_ParamLimits

0xa971,	// (0x000253c3) bg_popup_window_pane_g3

0xa97d,	// (0x000253cf) bg_popup_window_pane_g4_ParamLimits

0xa97d,	// (0x000253cf) bg_popup_window_pane_g4

0xa989,	// (0x000253db) bg_popup_window_pane_g5_ParamLimits

0xa989,	// (0x000253db) bg_popup_window_pane_g5

0xa995,	// (0x000253e7) bg_popup_window_pane_g6_ParamLimits

0xa995,	// (0x000253e7) bg_popup_window_pane_g6

0xa9a1,	// (0x000253f3) bg_popup_window_pane_g7_ParamLimits

0xa9a1,	// (0x000253f3) bg_popup_window_pane_g7

0xa9ad,	// (0x000253ff) bg_popup_window_pane_g8_ParamLimits

0xa9ad,	// (0x000253ff) bg_popup_window_pane_g8

0xa9b9,	// (0x0002540b) bg_popup_window_pane_g9_ParamLimits

0xa9b9,	// (0x0002540b) bg_popup_window_pane_g9

0xa9c5,	// (0x00025417) bg_popup_window_pane_g10_ParamLimits

0xa9c5,	// (0x00025417) bg_popup_window_pane_g10

0x0009,

0xf90e,	// (0x0002a360) bg_popup_window_pane_g_ParamLimits

0xf90e,	// (0x0002a360) bg_popup_window_pane_g

0xa8ee,	// (0x00025340) bg_popup_heading_pane_ParamLimits

0xa8ee,	// (0x00025340) bg_popup_heading_pane

0x6a7c,	// (0x000214ce) tabs_4_passive_pane_cp_srt_ParamLimits

0x6a7c,	// (0x000214ce) tabs_4_passive_pane_cp_srt

0x6a8e,	// (0x000214e0) tabs_4_passive_pane_srt_ParamLimits

0xa902,	// (0x00025354) heading_pane_g2

0x6a8e,	// (0x000214e0) tabs_4_passive_pane_srt

0x90c6,	// (0x00023b18) bg_passive_tab_pane_cp3_srt_ParamLimits

0x90c6,	// (0x00023b18) bg_passive_tab_pane_cp3_srt

0xa90a,	// (0x0002535c) heading_pane_t1_ParamLimits

0xa90a,	// (0x0002535c) heading_pane_t1

0xa921,	// (0x00025373) heading_pane_t2_ParamLimits

0xa921,	// (0x00025373) heading_pane_t2

0x0001,

0xf909,	// (0x0002a35b) heading_pane_t_ParamLimits

0xf909,	// (0x0002a35b) heading_pane_t

0xa419,	// (0x00024e6b) bg_popup_heading_pane_g1

0xa4c8,	// (0x00024f1a) bg_popup_heading_pane_g2

0xa4d2,	// (0x00024f24) bg_popup_heading_pane_g3

0xa4dc,	// (0x00024f2e) bg_popup_heading_pane_g4

0xa4e6,	// (0x00024f38) bg_popup_heading_pane_g5

0xa4f0,	// (0x00024f42) bg_popup_heading_pane_g6

0xa4f8,	// (0x00024f4a) bg_popup_heading_pane_g7

0xa500,	// (0x00024f52) bg_popup_heading_pane_g8

0xa50a,	// (0x00024f5c) bg_popup_heading_pane_g9

0x0008,

0xf8c5,	// (0x0002a317) bg_popup_heading_pane_g

0x9c02,	// (0x00024654) bg_popup_sub_pane_g1

0x9c0a,	// (0x0002465c) bg_popup_sub_pane_g2

0x9c12,	// (0x00024664) bg_popup_sub_pane_g3

0x9c1a,	// (0x0002466c) bg_popup_sub_pane_g4

0x9c22,	// (0x00024674) bg_popup_sub_pane_g5

0x9c2a,	// (0x0002467c) bg_popup_sub_pane_g6

0x9c32,	// (0x00024684) bg_popup_sub_pane_g7

0x9c3a,	// (0x0002468c) bg_popup_sub_pane_g8

0x9c42,	// (0x00024694) bg_popup_sub_pane_g9

0x0008,

0xf89f,	// (0x0002a2f1) bg_popup_sub_pane_g

0x7acb,	// (0x0002251d) bg_popup_window_pane_cp5_ParamLimits

0x7acb,	// (0x0002251d) bg_popup_window_pane_cp5

0x7ae7,	// (0x00022539) popup_note_window_g1_ParamLimits

0x7ae7,	// (0x00022539) popup_note_window_g1

0x7af3,	// (0x00022545) popup_note_window_t1_ParamLimits

0x7af3,	// (0x00022545) popup_note_window_t1

0x7b09,	// (0x0002255b) popup_note_window_t2_ParamLimits

0x7b09,	// (0x0002255b) popup_note_window_t2

0x7b1f,	// (0x00022571) popup_note_window_t3_ParamLimits

0x7b1f,	// (0x00022571) popup_note_window_t3

0x7b35,	// (0x00022587) popup_note_window_t4_ParamLimits

0x7b35,	// (0x00022587) popup_note_window_t4

0x7b5d,	// (0x000225af) popup_note_window_t5_ParamLimits

0x7b5d,	// (0x000225af) popup_note_window_t5

0x0004,

0xf5c3,	// (0x0002a015) popup_note_window_t_ParamLimits

0xf5c3,	// (0x0002a015) popup_note_window_t

0x7b81,	// (0x000225d3) bg_popup_window_pane_cp6_ParamLimits

0x7b81,	// (0x000225d3) bg_popup_window_pane_cp6

0xa395,	// (0x00024de7) popup_note_image_window_g1_ParamLimits

0xa395,	// (0x00024de7) popup_note_image_window_g1

0xa3a1,	// (0x00024df3) popup_note_image_window_g2_ParamLimits

0xa3a1,	// (0x00024df3) popup_note_image_window_g2

0x0001,

0xf893,	// (0x0002a2e5) popup_note_image_window_g_ParamLimits

0xf893,	// (0x0002a2e5) popup_note_image_window_g

0xa3ba,	// (0x00024e0c) popup_note_image_window_t1_ParamLimits

0xa3ba,	// (0x00024e0c) popup_note_image_window_t1

0xa3d3,	// (0x00024e25) popup_note_image_window_t2_ParamLimits

0xa3d3,	// (0x00024e25) popup_note_image_window_t2

0xa3ec,	// (0x00024e3e) popup_note_image_window_t3_ParamLimits

0xa3ec,	// (0x00024e3e) popup_note_image_window_t3

0x0002,

0xf898,	// (0x0002a2ea) popup_note_image_window_t_ParamLimits

0xf898,	// (0x0002a2ea) popup_note_image_window_t

0xa255,	// (0x00024ca7) bg_popup_window_pane_cp7_ParamLimits

0xa255,	// (0x00024ca7) bg_popup_window_pane_cp7

0xa285,	// (0x00024cd7) popup_note_wait_window_g1_ParamLimits

0xa285,	// (0x00024cd7) popup_note_wait_window_g1

0xa291,	// (0x00024ce3) popup_note_wait_window_g2_ParamLimits

0xa291,	// (0x00024ce3) popup_note_wait_window_g2

0x0002,

0xf881,	// (0x0002a2d3) popup_note_wait_window_g_ParamLimits

0xf881,	// (0x0002a2d3) popup_note_wait_window_g

0xa2a9,	// (0x00024cfb) popup_note_wait_window_t1_ParamLimits

0xa2a9,	// (0x00024cfb) popup_note_wait_window_t1

0xa2d0,	// (0x00024d22) popup_note_wait_window_t2_ParamLimits

0xa2d0,	// (0x00024d22) popup_note_wait_window_t2

0xa2ee,	// (0x00024d40) popup_note_wait_window_t3_ParamLimits

0xa2ee,	// (0x00024d40) popup_note_wait_window_t3

0xa301,	// (0x00024d53) popup_note_wait_window_t4_ParamLimits

0xa301,	// (0x00024d53) popup_note_wait_window_t4

0x0004,

0xf888,	// (0x0002a2da) popup_note_wait_window_t_ParamLimits

0xf888,	// (0x0002a2da) popup_note_wait_window_t

0xa326,	// (0x00024d78) wait_bar_pane_ParamLimits

0xa326,	// (0x00024d78) wait_bar_pane

0x776f,	// (0x000221c1) wait_anim_pane

0x776f,	// (0x000221c1) wait_border_pane

0x7765,	// (0x000221b7) wait_anim_pane_g1

0x7765,	// (0x000221b7) wait_anim_pane_g2

0x0001,

0xf747,	// (0x0002a199) wait_anim_pane_g

0xa1f9,	// (0x00024c4b) wait_border_pane_g1

0xa204,	// (0x00024c56) wait_border_pane_g2

0xa20d,	// (0x00024c5f) wait_border_pane_g3

0x0002,

0xf87a,	// (0x0002a2cc) wait_border_pane_g

0xa155,	// (0x00024ba7) bg_popup_window_pane_cp16_ParamLimits

0xa155,	// (0x00024ba7) bg_popup_window_pane_cp16

0xa163,	// (0x00024bb5) indicator_popup_pane_cp4_ParamLimits

0xa163,	// (0x00024bb5) indicator_popup_pane_cp4

0xa177,	// (0x00024bc9) popup_query_data_window_t1_ParamLimits

0xa177,	// (0x00024bc9) popup_query_data_window_t1

0xa189,	// (0x00024bdb) popup_query_data_window_t2_ParamLimits

0xa189,	// (0x00024bdb) popup_query_data_window_t2

0xa1a2,	// (0x00024bf4) popup_query_data_window_t3_ParamLimits

0xa1a2,	// (0x00024bf4) popup_query_data_window_t3

0x0002,

0xf873,	// (0x0002a2c5) popup_query_data_window_t_ParamLimits

0xf873,	// (0x0002a2c5) popup_query_data_window_t

0xa1bc,	// (0x00024c0e) query_popup_data_pane_ParamLimits

0xa1bc,	// (0x00024c0e) query_popup_data_pane

0xa1d0,	// (0x00024c22) query_popup_data_pane_cp1_ParamLimits

0xa1d0,	// (0x00024c22) query_popup_data_pane_cp1

0x7b81,	// (0x000225d3) bg_popup_window_pane_cp10_ParamLimits

0x7b81,	// (0x000225d3) bg_popup_window_pane_cp10

0xa0b8,	// (0x00024b0a) indicator_popup_pane_ParamLimits

0xa0b8,	// (0x00024b0a) indicator_popup_pane

0x7be2,	// (0x00022634) popup_query_code_window_t1_ParamLimits

0x7be2,	// (0x00022634) popup_query_code_window_t1

0xa0d0,	// (0x00024b22) popup_query_code_window_t2_ParamLimits

0xa0d0,	// (0x00024b22) popup_query_code_window_t2

0xa10e,	// (0x00024b60) popup_query_code_window_t3_ParamLimits

0xa10e,	// (0x00024b60) popup_query_code_window_t3

0x0002,

0xf86c,	// (0x0002a2be) popup_query_code_window_t_ParamLimits

0xf86c,	// (0x0002a2be) popup_query_code_window_t

0xa13d,	// (0x00024b8f) query_popup_pane_ParamLimits

0xa13d,	// (0x00024b8f) query_popup_pane

0x7b81,	// (0x000225d3) bg_popup_window_pane_cp15_ParamLimits

0x7b81,	// (0x000225d3) bg_popup_window_pane_cp15

0x7ba1,	// (0x000225f3) indicator_popup_pane_cp1_ParamLimits

0x7ba1,	// (0x000225f3) indicator_popup_pane_cp1

0x7bb4,	// (0x00022606) indicator_popup_pane_cp2_ParamLimits

0x7bb4,	// (0x00022606) indicator_popup_pane_cp2

0x7bcf,	// (0x00022621) popup_query_data_code_window_g1_ParamLimits

0x7bcf,	// (0x00022621) popup_query_data_code_window_g1

0x7be2,	// (0x00022634) popup_query_data_code_window_t1_ParamLimits

0x7be2,	// (0x00022634) popup_query_data_code_window_t1

0x7bf4,	// (0x00022646) popup_query_data_code_window_t2_ParamLimits

0x7bf4,	// (0x00022646) popup_query_data_code_window_t2

0x7c06,	// (0x00022658) popup_query_data_code_window_t3_ParamLimits

0x7c06,	// (0x00022658) popup_query_data_code_window_t3

0x7c1c,	// (0x0002266e) popup_query_data_code_window_t4_ParamLimits

0x7c1c,	// (0x0002266e) popup_query_data_code_window_t4

0x0003,

0xf5ce,	// (0x0002a020) popup_query_data_code_window_t_ParamLimits

0xf5ce,	// (0x0002a020) popup_query_data_code_window_t

0x8b6a,	// (0x000235bc) list_single_midp_graphic_pane_g3

0x7c36,	// (0x00022688) query_popup_data_pane_cp2_ParamLimits

0x7c49,	// (0x0002269b) query_popup_pane_cp2_ParamLimits

0x7c49,	// (0x0002269b) query_popup_pane_cp2

0x776f,	// (0x000221c1) bg_popup_window_pane_cp11

0xa08c,	// (0x00024ade) heading_pane_cp5

0x7d39,	// (0x0002278b) listscroll_popup_info_pane

0x776f,	// (0x000221c1) input_focus_pane_cp3

0x7c64,	// (0x000226b6) query_popup_pane_t1

0x7c72,	// (0x000226c4) list_popup_info_pane_ParamLimits

0x7c72,	// (0x000226c4) list_popup_info_pane

0x7c81,	// (0x000226d3) listscroll_popup_info_pane_g1

0x7c89,	// (0x000226db) scroll_pane_cp7

0x7c93,	// (0x000226e5) popup_info_list_pane_t1_ParamLimits

0x7c93,	// (0x000226e5) popup_info_list_pane_t1

0x7cad,	// (0x000226ff) popup_info_list_pane_t2_ParamLimits

0x7cad,	// (0x000226ff) popup_info_list_pane_t2

0x0001,

0xf5d7,	// (0x0002a029) popup_info_list_pane_t_ParamLimits

0xf5d7,	// (0x0002a029) popup_info_list_pane_t

0x776f,	// (0x000221c1) bg_popup_window_pane_cp12

0xb448,	// (0x00025e9a) find_popup_pane

0x784f,	// (0x000222a1) bg_popup_window_pane_cp3

0x7cc7,	// (0x00022719) heading_pane_cp3

0x7cd3,	// (0x00022725) listscroll_popup_graphic_pane

0x776f,	// (0x000221c1) bg_popup_window_pane_cp4

0x7d2f,	// (0x00022781) heading_pane_cp4

0x7d39,	// (0x0002278b) listscroll_popup_colour_pane

0x7d41,	// (0x00022793) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x7d41,	// (0x00022793) cell_large_graphic_colour_none_popup_pane

0x7d55,	// (0x000227a7) grid_large_graphic_colour_popup_pane_ParamLimits

0x7d55,	// (0x000227a7) grid_large_graphic_colour_popup_pane

0x7d81,	// (0x000227d3) listscroll_popup_colour_pane_g1_ParamLimits

0x7d81,	// (0x000227d3) listscroll_popup_colour_pane_g1

0x7d98,	// (0x000227ea) listscroll_popup_colour_pane_g2_ParamLimits

0x7d98,	// (0x000227ea) listscroll_popup_colour_pane_g2

0x7daf,	// (0x00022801) listscroll_popup_colour_pane_g3_ParamLimits

0x7daf,	// (0x00022801) listscroll_popup_colour_pane_g3

0x7dbf,	// (0x00022811) listscroll_popup_colour_pane_g4_ParamLimits

0x7dbf,	// (0x00022811) listscroll_popup_colour_pane_g4

0x0003,

0xf5dc,	// (0x0002a02e) listscroll_popup_colour_pane_g_ParamLimits

0xf5dc,	// (0x0002a02e) listscroll_popup_colour_pane_g

0x7dd3,	// (0x00022825) scroll_pane_cp6_ParamLimits

0x7dd3,	// (0x00022825) scroll_pane_cp6

0x7de5,	// (0x00022837) cell_large_graphic_colour_popup_pane_ParamLimits

0x7de5,	// (0x00022837) cell_large_graphic_colour_popup_pane

0x7e0a,	// (0x0002285c) cell_large_graphic_colour_none_popup_pane_t1

0x776f,	// (0x000221c1) grid_highlight_pane_cp5

0x7e19,	// (0x0002286b) cell_large_graphic_colour_popup_pane_g1

0x7e21,	// (0x00022873) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5e5,	// (0x0002a037) cell_large_graphic_colour_popup_pane_g

0x7e29,	// (0x0002287b) cell_large_graphic_colour_popup_pane_g2_copy1

0x7e32,	// (0x00022884) grid_highlight_pane_cp4

0x7e3a,	// (0x0002288c) bg_popup_window_pane_cp8_ParamLimits

0x7e3a,	// (0x0002288c) bg_popup_window_pane_cp8

0x7e55,	// (0x000228a7) popup_snote_single_text_window_g1_ParamLimits

0x7e55,	// (0x000228a7) popup_snote_single_text_window_g1

0x7e67,	// (0x000228b9) popup_snote_single_text_window_t1_ParamLimits

0x7e67,	// (0x000228b9) popup_snote_single_text_window_t1

0x7e7a,	// (0x000228cc) popup_snote_single_text_window_t2_ParamLimits

0x7e7a,	// (0x000228cc) popup_snote_single_text_window_t2

0x7e8d,	// (0x000228df) popup_snote_single_text_window_t3_ParamLimits

0x7e8d,	// (0x000228df) popup_snote_single_text_window_t3

0x7ec6,	// (0x00022918) popup_snote_single_text_window_t4_ParamLimits

0x7ec6,	// (0x00022918) popup_snote_single_text_window_t4

0x7efa,	// (0x0002294c) popup_snote_single_text_window_t5_ParamLimits

0x7efa,	// (0x0002294c) popup_snote_single_text_window_t5

0x0004,

0xf5ea,	// (0x0002a03c) popup_snote_single_text_window_t_ParamLimits

0xf5ea,	// (0x0002a03c) popup_snote_single_text_window_t

0x7f29,	// (0x0002297b) bg_popup_window_pane_cp9_ParamLimits

0x7f29,	// (0x0002297b) bg_popup_window_pane_cp9

0x7e55,	// (0x000228a7) popup_snote_single_graphic_window_g1_ParamLimits

0x7e55,	// (0x000228a7) popup_snote_single_graphic_window_g1

0x7f37,	// (0x00022989) popup_snote_single_graphic_window_g2_ParamLimits

0x7f37,	// (0x00022989) popup_snote_single_graphic_window_g2

0x0001,

0xf5f5,	// (0x0002a047) popup_snote_single_graphic_window_g_ParamLimits

0xf5f5,	// (0x0002a047) popup_snote_single_graphic_window_g

0x7f43,	// (0x00022995) popup_snote_single_graphic_window_t1_ParamLimits

0x7f43,	// (0x00022995) popup_snote_single_graphic_window_t1

0x7f56,	// (0x000229a8) popup_snote_single_graphic_window_t2_ParamLimits

0x7f56,	// (0x000229a8) popup_snote_single_graphic_window_t2

0x7f69,	// (0x000229bb) popup_snote_single_graphic_window_t3_ParamLimits

0x7f69,	// (0x000229bb) popup_snote_single_graphic_window_t3

0x7fa2,	// (0x000229f4) popup_snote_single_graphic_window_t4_ParamLimits

0x7fa2,	// (0x000229f4) popup_snote_single_graphic_window_t4

0x7fd6,	// (0x00022a28) popup_snote_single_graphic_window_t5_ParamLimits

0x7fd6,	// (0x00022a28) popup_snote_single_graphic_window_t5

0x0004,

0xf5fa,	// (0x0002a04c) popup_snote_single_graphic_window_t_ParamLimits

0xf5fa,	// (0x0002a04c) popup_snote_single_graphic_window_t

0xb386,	// (0x00025dd8) grid_graphic_popup_pane_ParamLimits

0xb386,	// (0x00025dd8) grid_graphic_popup_pane

0xb3b4,	// (0x00025e06) listscroll_popup_graphic_pane_g1_ParamLimits

0xb3b4,	// (0x00025e06) listscroll_popup_graphic_pane_g1

0xb3c8,	// (0x00025e1a) listscroll_popup_graphic_pane_g2_ParamLimits

0xb3c8,	// (0x00025e1a) listscroll_popup_graphic_pane_g2

0x0001,

0xf9e9,	// (0x0002a43b) listscroll_popup_graphic_pane_g_ParamLimits

0xf9e9,	// (0x0002a43b) listscroll_popup_graphic_pane_g

0xb3dc,	// (0x00025e2e) scroll_pane_cp5

0xb32e,	// (0x00025d80) cell_graphic_popup_pane_ParamLimits

0xb32e,	// (0x00025d80) cell_graphic_popup_pane

0xb30f,	// (0x00025d61) cell_graphic_popup_pane_g1

0xb317,	// (0x00025d69) cell_graphic_popup_pane_g2

0x7e29,	// (0x0002287b) cell_graphic_popup_pane_g3

0x0002,

0xf9e2,	// (0x0002a434) cell_graphic_popup_pane_g

0xb320,	// (0x00025d72) cell_graphic_popup_pane_t2

0x7e32,	// (0x00022884) grid_highlight_pane_cp3

0x8017,	// (0x00022a69) list_gen_pane_ParamLimits

0x8017,	// (0x00022a69) list_gen_pane

0x8049,	// (0x00022a9b) scroll_pane

0xb271,	// (0x00025cc3) bg_list_pane_g1_ParamLimits

0xb271,	// (0x00025cc3) bg_list_pane_g1

0xb28c,	// (0x00025cde) bg_list_pane_g2_ParamLimits

0xb28c,	// (0x00025cde) bg_list_pane_g2

0xb29f,	// (0x00025cf1) bg_list_pane_g3_ParamLimits

0xb29f,	// (0x00025cf1) bg_list_pane_g3

0xb2b1,	// (0x00025d03) bg_list_pane_g4_ParamLimits

0xb2b1,	// (0x00025d03) bg_list_pane_g4

0xb2c3,	// (0x00025d15) bg_list_pane_g5_ParamLimits

0xb2c3,	// (0x00025d15) bg_list_pane_g5

0x0004,

0xf9d7,	// (0x0002a429) bg_list_pane_g_ParamLimits

0xf9d7,	// (0x0002a429) bg_list_pane_g

0x5643,	// (0x00020095) list_double2_graphic_large_graphic_pane_ParamLimits

0x5643,	// (0x00020095) list_double2_graphic_large_graphic_pane

0x5643,	// (0x00020095) list_double2_graphic_pane_ParamLimits

0x5643,	// (0x00020095) list_double2_graphic_pane

0x5643,	// (0x00020095) list_double2_large_graphic_pane_ParamLimits

0x5643,	// (0x00020095) list_double2_large_graphic_pane

0xb202,	// (0x00025c54) list_double2_pane_ParamLimits

0xb202,	// (0x00025c54) list_double2_pane

0x5643,	// (0x00020095) list_double_graphic_heading_pane_ParamLimits

0x5643,	// (0x00020095) list_double_graphic_heading_pane

0x5643,	// (0x00020095) list_double_graphic_pane_ParamLimits

0x5643,	// (0x00020095) list_double_graphic_pane

0x5643,	// (0x00020095) list_double_heading_pane_ParamLimits

0x5643,	// (0x00020095) list_double_heading_pane

0x5643,	// (0x00020095) list_double_large_graphic_pane_ParamLimits

0x5643,	// (0x00020095) list_double_large_graphic_pane

0x5643,	// (0x00020095) list_double_number_pane_ParamLimits

0x5643,	// (0x00020095) list_double_number_pane

0x5643,	// (0x00020095) list_double_pane_ParamLimits

0x5643,	// (0x00020095) list_double_pane

0x5643,	// (0x00020095) list_double_time_pane_ParamLimits

0x5643,	// (0x00020095) list_double_time_pane

0x5643,	// (0x00020095) list_setting_number_pane_ParamLimits

0x5643,	// (0x00020095) list_setting_number_pane

0x5643,	// (0x00020095) list_setting_pane_ParamLimits

0x5643,	// (0x00020095) list_setting_pane

0xb22d,	// (0x00025c7f) list_single_2graphic_pane_ParamLimits

0xb22d,	// (0x00025c7f) list_single_2graphic_pane

0xb22d,	// (0x00025c7f) list_single_graphic_heading_pane_ParamLimits

0xb22d,	// (0x00025c7f) list_single_graphic_heading_pane

0xb22d,	// (0x00025c7f) list_single_graphic_pane_ParamLimits

0xb22d,	// (0x00025c7f) list_single_graphic_pane

0xb22d,	// (0x00025c7f) list_single_heading_pane_ParamLimits

0xb22d,	// (0x00025c7f) list_single_heading_pane

0x5682,	// (0x000200d4) list_single_large_graphic_pane_ParamLimits

0x5682,	// (0x000200d4) list_single_large_graphic_pane

0xb22d,	// (0x00025c7f) list_single_number_heading_pane_ParamLimits

0xb22d,	// (0x00025c7f) list_single_number_heading_pane

0xb22d,	// (0x00025c7f) list_single_number_pane_ParamLimits

0xb22d,	// (0x00025c7f) list_single_number_pane

0xb22d,	// (0x00025c7f) list_single_pane_ParamLimits

0xb22d,	// (0x00025c7f) list_single_pane

0x776f,	// (0x000221c1) list_highlight_pane_cp1

0x4d12,	// (0x0001f764) list_single_pane_g1_ParamLimits

0x4d12,	// (0x0001f764) list_single_pane_g1

0x4d1e,	// (0x0001f770) list_single_pane_g2_ParamLimits

0x4d1e,	// (0x0001f770) list_single_pane_g2

0x0001,

0xf60c,	// (0x0002a05e) list_single_pane_g_ParamLimits

0xf60c,	// (0x0002a05e) list_single_pane_g

0x562d,	// (0x0002007f) list_single_pane_t1_ParamLimits

0x562d,	// (0x0002007f) list_single_pane_t1

0x4d12,	// (0x0001f764) list_single_number_pane_g1_ParamLimits

0x4d12,	// (0x0001f764) list_single_number_pane_g1

0x4d1e,	// (0x0001f770) list_single_number_pane_g2_ParamLimits

0x4d1e,	// (0x0001f770) list_single_number_pane_g2

0x0001,

0xf60c,	// (0x0002a05e) list_single_number_pane_g_ParamLimits

0xf60c,	// (0x0002a05e) list_single_number_pane_g

0x55d7,	// (0x00020029) list_single_number_pane_t1_ParamLimits

0x55d7,	// (0x00020029) list_single_number_pane_t1

0x55ed,	// (0x0002003f) list_single_number_pane_t2_ParamLimits

0x55ed,	// (0x0002003f) list_single_number_pane_t2

0x0001,

0xf998,	// (0x0002a3ea) list_single_number_pane_t_ParamLimits

0xf998,	// (0x0002a3ea) list_single_number_pane_t

0x4d06,	// (0x0001f758) list_single_graphic_pane_g1_ParamLimits

0x4d06,	// (0x0001f758) list_single_graphic_pane_g1

0x4d12,	// (0x0001f764) list_single_graphic_pane_g2_ParamLimits

0x4d12,	// (0x0001f764) list_single_graphic_pane_g2

0x4d1e,	// (0x0001f770) list_single_graphic_pane_g3_ParamLimits

0x4d1e,	// (0x0001f770) list_single_graphic_pane_g3

0x0002,

0xf605,	// (0x0002a057) list_single_graphic_pane_g_ParamLimits

0xf605,	// (0x0002a057) list_single_graphic_pane_g

0x4d2a,	// (0x0001f77c) list_single_graphic_pane_t1_ParamLimits

0x4d2a,	// (0x0001f77c) list_single_graphic_pane_t1

0x4d12,	// (0x0001f764) list_single_heading_pane_g1_ParamLimits

0x4d12,	// (0x0001f764) list_single_heading_pane_g1

0x4d1e,	// (0x0001f770) list_single_heading_pane_g2_ParamLimits

0x4d1e,	// (0x0001f770) list_single_heading_pane_g2

0x0001,

0xf60c,	// (0x0002a05e) list_single_heading_pane_g_ParamLimits

0xf60c,	// (0x0002a05e) list_single_heading_pane_g

0x4d40,	// (0x0001f792) list_single_heading_pane_t1_ParamLimits

0x4d40,	// (0x0001f792) list_single_heading_pane_t1

0x4d56,	// (0x0001f7a8) list_single_heading_pane_t2_ParamLimits

0x4d56,	// (0x0001f7a8) list_single_heading_pane_t2

0x0001,

0xf611,	// (0x0002a063) list_single_heading_pane_t_ParamLimits

0xf611,	// (0x0002a063) list_single_heading_pane_t

0x4d12,	// (0x0001f764) list_single_number_heading_pane_g1_ParamLimits

0x4d12,	// (0x0001f764) list_single_number_heading_pane_g1

0x4d1e,	// (0x0001f770) list_single_number_heading_pane_g2_ParamLimits

0x4d1e,	// (0x0001f770) list_single_number_heading_pane_g2

0x0001,

0xf60c,	// (0x0002a05e) list_single_number_heading_pane_g_ParamLimits

0xf60c,	// (0x0002a05e) list_single_number_heading_pane_g

0x4d40,	// (0x0001f792) list_single_number_heading_pane_t1_ParamLimits

0x4d40,	// (0x0001f792) list_single_number_heading_pane_t1

0x4d68,	// (0x0001f7ba) list_single_number_heading_pane_t2_ParamLimits

0x4d68,	// (0x0001f7ba) list_single_number_heading_pane_t2

0x4d7a,	// (0x0001f7cc) list_single_number_heading_pane_t3_ParamLimits

0x4d7a,	// (0x0001f7cc) list_single_number_heading_pane_t3

0x0002,

0xf616,	// (0x0002a068) list_single_number_heading_pane_t_ParamLimits

0xf616,	// (0x0002a068) list_single_number_heading_pane_t

0x4d8c,	// (0x0001f7de) list_single_graphic_heading_pane_g1_ParamLimits

0x4d8c,	// (0x0001f7de) list_single_graphic_heading_pane_g1

0x4d98,	// (0x0001f7ea) list_single_graphic_heading_pane_g4_ParamLimits

0x4d98,	// (0x0001f7ea) list_single_graphic_heading_pane_g4

0x4d1e,	// (0x0001f770) list_single_graphic_heading_pane_g5_ParamLimits

0x4d1e,	// (0x0001f770) list_single_graphic_heading_pane_g5

0x0002,

0xf61d,	// (0x0002a06f) list_single_graphic_heading_pane_g_ParamLimits

0xf61d,	// (0x0002a06f) list_single_graphic_heading_pane_g

0x4d40,	// (0x0001f792) list_single_graphic_heading_pane_t1_ParamLimits

0x4d40,	// (0x0001f792) list_single_graphic_heading_pane_t1

0x4da9,	// (0x0001f7fb) list_single_graphic_heading_pane_t2_ParamLimits

0x4da9,	// (0x0001f7fb) list_single_graphic_heading_pane_t2

0x0001,

0xf624,	// (0x0002a076) list_single_graphic_heading_pane_t_ParamLimits

0xf624,	// (0x0002a076) list_single_graphic_heading_pane_t

0x4dbb,	// (0x0001f80d) list_single_large_graphic_pane_g1_ParamLimits

0x4dbb,	// (0x0001f80d) list_single_large_graphic_pane_g1

0x4d12,	// (0x0001f764) list_single_large_graphic_pane_g2_ParamLimits

0x4d12,	// (0x0001f764) list_single_large_graphic_pane_g2

0x4d1e,	// (0x0001f770) list_single_large_graphic_pane_g3_ParamLimits

0x4d1e,	// (0x0001f770) list_single_large_graphic_pane_g3

0x0002,

0xf629,	// (0x0002a07b) list_single_large_graphic_pane_g_ParamLimits

0xf629,	// (0x0002a07b) list_single_large_graphic_pane_g

0xa204,	// (0x00024c56) wait_border_pane_g2_copy1

0x4dc7,	// (0x0001f819) list_single_large_graphic_pane_g4_cp2

0x4d40,	// (0x0001f792) list_single_large_graphic_pane_t1_ParamLimits

0x4d40,	// (0x0001f792) list_single_large_graphic_pane_t1

0x4dcf,	// (0x0001f821) list_double_pane_g1_ParamLimits

0x4dcf,	// (0x0001f821) list_double_pane_g1

0x4ddb,	// (0x0001f82d) list_double_pane_g2_ParamLimits

0x4ddb,	// (0x0001f82d) list_double_pane_g2

0x0001,

0xf630,	// (0x0002a082) list_double_pane_g_ParamLimits

0xf630,	// (0x0002a082) list_double_pane_g

0x4de7,	// (0x0001f839) list_double_pane_t1_ParamLimits

0x4de7,	// (0x0001f839) list_double_pane_t1

0x4dfd,	// (0x0001f84f) list_double_pane_t2_ParamLimits

0x4dfd,	// (0x0001f84f) list_double_pane_t2

0x0001,

0xf635,	// (0x0002a087) list_double_pane_t_ParamLimits

0xf635,	// (0x0002a087) list_double_pane_t

0x4e0f,	// (0x0001f861) list_double2_pane_g1_ParamLimits

0x4e0f,	// (0x0001f861) list_double2_pane_g1

0x4e20,	// (0x0001f872) list_double2_pane_g2_ParamLimits

0x4e20,	// (0x0001f872) list_double2_pane_g2

0x0001,

0xf63a,	// (0x0002a08c) list_double2_pane_g_ParamLimits

0xf63a,	// (0x0002a08c) list_double2_pane_g

0x4e2c,	// (0x0001f87e) list_double2_pane_t1_ParamLimits

0x4e2c,	// (0x0001f87e) list_double2_pane_t1

0x4e42,	// (0x0001f894) list_double2_pane_t2_ParamLimits

0x4e42,	// (0x0001f894) list_double2_pane_t2

0x0001,

0xf63f,	// (0x0002a091) list_double2_pane_t_ParamLimits

0xf63f,	// (0x0002a091) list_double2_pane_t

0x4dcf,	// (0x0001f821) list_double_number_pane_g1_ParamLimits

0x4dcf,	// (0x0001f821) list_double_number_pane_g1

0x4ddb,	// (0x0001f82d) list_double_number_pane_g2_ParamLimits

0x4ddb,	// (0x0001f82d) list_double_number_pane_g2

0x0001,

0xf630,	// (0x0002a082) list_double_number_pane_g_ParamLimits

0xf630,	// (0x0002a082) list_double_number_pane_g

0x4e54,	// (0x0001f8a6) list_double_number_pane_t1_ParamLimits

0x4e54,	// (0x0001f8a6) list_double_number_pane_t1

0x4e66,	// (0x0001f8b8) list_double_number_pane_t2_ParamLimits

0x4e66,	// (0x0001f8b8) list_double_number_pane_t2

0x4e7c,	// (0x0001f8ce) list_double_number_pane_t3_ParamLimits

0x4e7c,	// (0x0001f8ce) list_double_number_pane_t3

0x0002,

0xf644,	// (0x0002a096) list_double_number_pane_t_ParamLimits

0xf644,	// (0x0002a096) list_double_number_pane_t

0x4e8e,	// (0x0001f8e0) list_double_graphic_pane_g1_ParamLimits

0x4e8e,	// (0x0001f8e0) list_double_graphic_pane_g1

0x4e9a,	// (0x0001f8ec) list_double_graphic_pane_g2_ParamLimits

0x4e9a,	// (0x0001f8ec) list_double_graphic_pane_g2

0x4ea9,	// (0x0001f8fb) list_double_graphic_pane_g3_ParamLimits

0x4ea9,	// (0x0001f8fb) list_double_graphic_pane_g3

0x0003,

0xf64b,	// (0x0002a09d) list_double_graphic_pane_g_ParamLimits

0xf64b,	// (0x0002a09d) list_double_graphic_pane_g

0x4ec1,	// (0x0001f913) list_double_graphic_pane_t1_ParamLimits

0x4ec1,	// (0x0001f913) list_double_graphic_pane_t1

0x4ed7,	// (0x0001f929) list_double_graphic_pane_t2_ParamLimits

0x4ed7,	// (0x0001f929) list_double_graphic_pane_t2

0x0001,

0xf654,	// (0x0002a0a6) list_double_graphic_pane_t_ParamLimits

0xf654,	// (0x0002a0a6) list_double_graphic_pane_t

0x4ee9,	// (0x0001f93b) list_double2_graphic_pane_g1_ParamLimits

0x4ee9,	// (0x0001f93b) list_double2_graphic_pane_g1

0x4ef5,	// (0x0001f947) list_double2_graphic_pane_g2_ParamLimits

0x4ef5,	// (0x0001f947) list_double2_graphic_pane_g2

0x4f01,	// (0x0001f953) list_double2_graphic_pane_g3_ParamLimits

0x4f01,	// (0x0001f953) list_double2_graphic_pane_g3

0x0002,

0xf659,	// (0x0002a0ab) list_double2_graphic_pane_g_ParamLimits

0xf659,	// (0x0002a0ab) list_double2_graphic_pane_g

0x4f0d,	// (0x0001f95f) list_double2_graphic_pane_t1_ParamLimits

0x4f0d,	// (0x0001f95f) list_double2_graphic_pane_t1

0x4f23,	// (0x0001f975) list_double2_graphic_pane_t2_ParamLimits

0x4f23,	// (0x0001f975) list_double2_graphic_pane_t2

0x0001,

0xf660,	// (0x0002a0b2) list_double2_graphic_pane_t_ParamLimits

0xf660,	// (0x0002a0b2) list_double2_graphic_pane_t

0x4f35,	// (0x0001f987) list_double_large_graphic_pane_g1_ParamLimits

0x4f35,	// (0x0001f987) list_double_large_graphic_pane_g1

0x4f60,	// (0x0001f9b2) list_double_large_graphic_pane_g2_ParamLimits

0x4f60,	// (0x0001f9b2) list_double_large_graphic_pane_g2

0x4ddb,	// (0x0001f82d) list_double_large_graphic_pane_g3_ParamLimits

0x4ddb,	// (0x0001f82d) list_double_large_graphic_pane_g3

0x4f71,	// (0x0001f9c3) list_double_large_graphic_pane_g4_ParamLimits

0x4f71,	// (0x0001f9c3) list_double_large_graphic_pane_g4

0x0004,

0xf665,	// (0x0002a0b7) list_double_large_graphic_pane_g_ParamLimits

0xf665,	// (0x0002a0b7) list_double_large_graphic_pane_g

0x4f99,	// (0x0001f9eb) list_double_large_graphic_pane_t1_ParamLimits

0x4f99,	// (0x0001f9eb) list_double_large_graphic_pane_t1

0x4fb2,	// (0x0001fa04) list_double_large_graphic_pane_t2_ParamLimits

0x4fb2,	// (0x0001fa04) list_double_large_graphic_pane_t2

0x0001,

0xf670,	// (0x0002a0c2) list_double_large_graphic_pane_t_ParamLimits

0xf670,	// (0x0002a0c2) list_double_large_graphic_pane_t

0x4fc4,	// (0x0001fa16) list_double2_large_graphic_pane_g1_ParamLimits

0x4fc4,	// (0x0001fa16) list_double2_large_graphic_pane_g1

0x4fd0,	// (0x0001fa22) list_double2_large_graphic_pane_g2_ParamLimits

0x4fd0,	// (0x0001fa22) list_double2_large_graphic_pane_g2

0x4fe1,	// (0x0001fa33) list_double2_large_graphic_pane_g3_ParamLimits

0x4fe1,	// (0x0001fa33) list_double2_large_graphic_pane_g3

0x0002,

0xf675,	// (0x0002a0c7) list_double2_large_graphic_pane_g_ParamLimits

0xf675,	// (0x0002a0c7) list_double2_large_graphic_pane_g

0x4fed,	// (0x0001fa3f) list_double2_large_graphic_pane_t1_ParamLimits

0x4fed,	// (0x0001fa3f) list_double2_large_graphic_pane_t1

0x5003,	// (0x0001fa55) list_double2_large_graphic_pane_t2_ParamLimits

0x5003,	// (0x0001fa55) list_double2_large_graphic_pane_t2

0x0001,

0xf67c,	// (0x0002a0ce) list_double2_large_graphic_pane_t_ParamLimits

0xf67c,	// (0x0002a0ce) list_double2_large_graphic_pane_t

0x5015,	// (0x0001fa67) list_double_heading_pane_g1_ParamLimits

0x5015,	// (0x0001fa67) list_double_heading_pane_g1

0x5026,	// (0x0001fa78) list_double_heading_pane_g2_ParamLimits

0x5026,	// (0x0001fa78) list_double_heading_pane_g2

0x0001,

0xf681,	// (0x0002a0d3) list_double_heading_pane_g_ParamLimits

0xf681,	// (0x0002a0d3) list_double_heading_pane_g

0x5032,	// (0x0001fa84) list_double_heading_pane_t1_ParamLimits

0x5032,	// (0x0001fa84) list_double_heading_pane_t1

0x5048,	// (0x0001fa9a) list_double_heading_pane_t2_ParamLimits

0x5048,	// (0x0001fa9a) list_double_heading_pane_t2

0x0001,

0xf686,	// (0x0002a0d8) list_double_heading_pane_t_ParamLimits

0xf686,	// (0x0002a0d8) list_double_heading_pane_t

0x505a,	// (0x0001faac) list_double_graphic_heading_pane_g1_ParamLimits

0x505a,	// (0x0001faac) list_double_graphic_heading_pane_g1

0x5015,	// (0x0001fa67) list_double_graphic_heading_pane_g2_ParamLimits

0x5015,	// (0x0001fa67) list_double_graphic_heading_pane_g2

0x5026,	// (0x0001fa78) list_double_graphic_heading_pane_g3_ParamLimits

0x5026,	// (0x0001fa78) list_double_graphic_heading_pane_g3

0x0002,

0xf68b,	// (0x0002a0dd) list_double_graphic_heading_pane_g_ParamLimits

0xf68b,	// (0x0002a0dd) list_double_graphic_heading_pane_g

0x5066,	// (0x0001fab8) list_double_graphic_heading_pane_t1_ParamLimits

0x5066,	// (0x0001fab8) list_double_graphic_heading_pane_t1

0x4f23,	// (0x0001f975) list_double_graphic_heading_pane_t2_ParamLimits

0x4f23,	// (0x0001f975) list_double_graphic_heading_pane_t2

0x0001,

0xf692,	// (0x0002a0e4) list_double_graphic_heading_pane_t_ParamLimits

0xf692,	// (0x0002a0e4) list_double_graphic_heading_pane_t

0x4f60,	// (0x0001f9b2) list_double_time_pane_g1_ParamLimits

0x4f60,	// (0x0001f9b2) list_double_time_pane_g1

0x4ddb,	// (0x0001f82d) list_double_time_pane_g2_ParamLimits

0x4ddb,	// (0x0001f82d) list_double_time_pane_g2

0x0001,

0xf697,	// (0x0002a0e9) list_double_time_pane_g_ParamLimits

0xf697,	// (0x0002a0e9) list_double_time_pane_g

0x507c,	// (0x0001face) list_double_time_pane_t1_ParamLimits

0x507c,	// (0x0001face) list_double_time_pane_t1

0x5092,	// (0x0001fae4) list_double_time_pane_t2_ParamLimits

0x5092,	// (0x0001fae4) list_double_time_pane_t2

0x50a4,	// (0x0001faf6) list_double_time_pane_t3_ParamLimits

0x50a4,	// (0x0001faf6) list_double_time_pane_t3

0x50b6,	// (0x0001fb08) list_double_time_pane_t4_ParamLimits

0x50b6,	// (0x0001fb08) list_double_time_pane_t4

0x0003,

0xf69c,	// (0x0002a0ee) list_double_time_pane_t_ParamLimits

0xf69c,	// (0x0002a0ee) list_double_time_pane_t

0x50c8,	// (0x0001fb1a) list_setting_pane_g1_ParamLimits

0x50c8,	// (0x0001fb1a) list_setting_pane_g1

0x50d4,	// (0x0001fb26) list_setting_pane_g2_ParamLimits

0x50d4,	// (0x0001fb26) list_setting_pane_g2

0x0001,

0xf6a5,	// (0x0002a0f7) list_setting_pane_g_ParamLimits

0xf6a5,	// (0x0002a0f7) list_setting_pane_g

0x50e0,	// (0x0001fb32) list_setting_pane_t1_ParamLimits

0x50e0,	// (0x0001fb32) list_setting_pane_t1

0x50fa,	// (0x0001fb4c) list_setting_pane_t2_ParamLimits

0x50fa,	// (0x0001fb4c) list_setting_pane_t2

0x0002,

0xf6aa,	// (0x0002a0fc) list_setting_pane_t_ParamLimits

0xf6aa,	// (0x0002a0fc) list_setting_pane_t

0x5139,	// (0x0001fb8b) set_value_pane_cp_ParamLimits

0x5139,	// (0x0001fb8b) set_value_pane_cp

0x5147,	// (0x0001fb99) list_setting_number_pane_g1_ParamLimits

0x5147,	// (0x0001fb99) list_setting_number_pane_g1

0x5153,	// (0x0001fba5) list_setting_number_pane_g2_ParamLimits

0x5153,	// (0x0001fba5) list_setting_number_pane_g2

0x0001,

0xf6b1,	// (0x0002a103) list_setting_number_pane_g_ParamLimits

0xf6b1,	// (0x0002a103) list_setting_number_pane_g

0x515f,	// (0x0001fbb1) list_setting_number_pane_t1_ParamLimits

0x515f,	// (0x0001fbb1) list_setting_number_pane_t1

0x5178,	// (0x0001fbca) list_setting_number_pane_t2_ParamLimits

0x5178,	// (0x0001fbca) list_setting_number_pane_t2

0x5192,	// (0x0001fbe4) list_setting_number_pane_t3_ParamLimits

0x5192,	// (0x0001fbe4) list_setting_number_pane_t3

0x0003,

0xf6b6,	// (0x0002a108) list_setting_number_pane_t_ParamLimits

0xf6b6,	// (0x0002a108) list_setting_number_pane_t

0x5139,	// (0x0001fb8b) set_value_pane_ParamLimits

0x5139,	// (0x0001fb8b) set_value_pane

0x807d,	// (0x00022acf) bg_set_opt_pane_ParamLimits

0x807d,	// (0x00022acf) bg_set_opt_pane

0x51d5,	// (0x0001fc27) set_value_pane_t1

0x809e,	// (0x00022af0) slider_set_pane_cp3

0x80a7,	// (0x00022af9) volume_small_pane_cp

0x80b0,	// (0x00022b02) list_form_gen_pane

0x80b9,	// (0x00022b0b) scroll_pane_cp8

0x51e3,	// (0x0001fc35) form_field_data_pane_ParamLimits

0x51e3,	// (0x0001fc35) form_field_data_pane

0x5209,	// (0x0001fc5b) form_field_data_wide_pane_ParamLimits

0x5209,	// (0x0001fc5b) form_field_data_wide_pane

0x5230,	// (0x0001fc82) form_field_popup_pane_ParamLimits

0x5230,	// (0x0001fc82) form_field_popup_pane

0x5252,	// (0x0001fca4) form_field_popup_wide_pane_ParamLimits

0x5252,	// (0x0001fca4) form_field_popup_wide_pane

0x5273,	// (0x0001fcc5) form_field_slider_pane_ParamLimits

0x5273,	// (0x0001fcc5) form_field_slider_pane

0x5286,	// (0x0001fcd8) form_field_slider_wide_pane_ParamLimits

0x5286,	// (0x0001fcd8) form_field_slider_wide_pane

0x80ca,	// (0x00022b1c) data_form_pane

0x52a3,	// (0x0001fcf5) form_field_data_pane_t1

0x80d6,	// (0x00022b28) input_focus_pane

0x80e4,	// (0x00022b36) data_form_wide_pane

0x52c9,	// (0x0001fd1b) form_field_data_wide_pane_t1

0x7e47,	// (0x00022899) input_focus_pane_cp6

0x52eb,	// (0x0001fd3d) form_field_popup_pane_t1

0x80d6,	// (0x00022b28) input_focus_pane_cp7

0x8110,	// (0x00022b62) list_form_pane

0x530d,	// (0x0001fd5f) form_field_popup_wide_pane_t1

0x80d6,	// (0x00022b28) input_focus_pane_cp8

0x811c,	// (0x00022b6e) list_form_wide_pane

0x532a,	// (0x0001fd7c) form_field_slider_pane_t1_ParamLimits

0x532a,	// (0x0001fd7c) form_field_slider_pane_t1

0x5342,	// (0x0001fd94) form_field_slider_pane_t2_ParamLimits

0x5342,	// (0x0001fd94) form_field_slider_pane_t2

0x0001,

0xf6c6,	// (0x0002a118) form_field_slider_pane_t_ParamLimits

0xf6c6,	// (0x0002a118) form_field_slider_pane_t

0x7acb,	// (0x0002251d) input_focus_pane_cp9_ParamLimits

0x7acb,	// (0x0002251d) input_focus_pane_cp9

0x5357,	// (0x0001fda9) slider_cont_pane_ParamLimits

0x5357,	// (0x0001fda9) slider_cont_pane

0x812b,	// (0x00022b7d) form_field_slider_wide_pane_t1_ParamLimits

0x812b,	// (0x00022b7d) form_field_slider_wide_pane_t1

0x536b,	// (0x0001fdbd) form_field_slider_wide_pane_t2_ParamLimits

0x536b,	// (0x0001fdbd) form_field_slider_wide_pane_t2

0x0001,

0xf6cb,	// (0x0002a11d) form_field_slider_wide_pane_t_ParamLimits

0xf6cb,	// (0x0002a11d) form_field_slider_wide_pane_t

0x7acb,	// (0x0002251d) input_focus_pane_cp10_ParamLimits

0x7acb,	// (0x0002251d) input_focus_pane_cp10

0x537d,	// (0x0001fdcf) slider_cont_pane_cp1_ParamLimits

0x537d,	// (0x0001fdcf) slider_cont_pane_cp1

0x5391,	// (0x0001fde3) slider_form_pane_cp

0x813d,	// (0x00022b8f) input_focus_pane_g1

0x8145,	// (0x00022b97) input_focus_pane_g2

0x814d,	// (0x00022b9f) input_focus_pane_g3

0x8155,	// (0x00022ba7) input_focus_pane_g4

0x815d,	// (0x00022baf) input_focus_pane_g5

0x8165,	// (0x00022bb7) input_focus_pane_g6

0x816d,	// (0x00022bbf) input_focus_pane_g7

0x8175,	// (0x00022bc7) input_focus_pane_g8

0x817d,	// (0x00022bcf) input_focus_pane_g9

0x7765,	// (0x000221b7) input_focus_pane_g10

0x0009,

0xf6d0,	// (0x0002a122) input_focus_pane_g

0xa20d,	// (0x00024c5f) wait_border_pane_g3_copy1

0x5399,	// (0x0001fdeb) data_form_pane_t1

0x7765,	// (0x000221b7) wait_anim_pane_g1_copy1

0x55ff,	// (0x00020051) data_form_wide_pane_t1

0x53b6,	// (0x0001fe08) list_form_graphic_pane_cp_ParamLimits

0x53b6,	// (0x0001fe08) list_form_graphic_pane_cp

0xb192,	// (0x00025be4) slider_form_pane_g1

0xb19b,	// (0x00025bed) slider_form_pane_g2

0x0006,

0xf9c8,	// (0x0002a41a) slider_form_pane_g

0x53cb,	// (0x0001fe1d) list_form_graphic_pane_ParamLimits

0x53cb,	// (0x0001fe1d) list_form_graphic_pane

0x53dd,	// (0x0001fe2f) list_form_graphic_pane_g1

0x53e5,	// (0x0001fe37) list_form_graphic_pane_t1_ParamLimits

0x53e5,	// (0x0001fe37) list_form_graphic_pane_t1

0x784f,	// (0x000222a1) list_highlight_pane_cp5_ParamLimits

0x784f,	// (0x000222a1) list_highlight_pane_cp5

0x53fa,	// (0x0001fe4c) find_pane_g1

0x8185,	// (0x00022bd7) input_find_pane

0x5403,	// (0x0001fe55) input_find_pane_g1_ParamLimits

0x5403,	// (0x0001fe55) input_find_pane_g1

0x540f,	// (0x0001fe61) input_find_pane_t1_ParamLimits

0x540f,	// (0x0001fe61) input_find_pane_t1

0x5424,	// (0x0001fe76) input_find_pane_t2_ParamLimits

0x5424,	// (0x0001fe76) input_find_pane_t2

0x0001,

0xf6e5,	// (0x0002a137) input_find_pane_t_ParamLimits

0xf6e5,	// (0x0002a137) input_find_pane_t

0x818e,	// (0x00022be0) input_focus_pane_cp5_ParamLimits

0x818e,	// (0x00022be0) input_focus_pane_cp5

0x81a8,	// (0x00022bfa) bg_popup_window_pane_cp2_ParamLimits

0x81a8,	// (0x00022bfa) bg_popup_window_pane_cp2

0x81b5,	// (0x00022c07) listscroll_menu_pane_ParamLimits

0x81b5,	// (0x00022c07) listscroll_menu_pane

0x81c1,	// (0x00022c13) popup_submenu_window_ParamLimits

0x81c1,	// (0x00022c13) popup_submenu_window

0x81f1,	// (0x00022c43) find_popup_pane_g1

0x81f9,	// (0x00022c4b) input_popup_find_pane_cp

0x818e,	// (0x00022be0) input_focus_pane_cp4_ParamLimits

0x818e,	// (0x00022be0) input_focus_pane_cp4

0x8211,	// (0x00022c63) input_popup_find_pane_t1_ParamLimits

0x8211,	// (0x00022c63) input_popup_find_pane_t1

0x776f,	// (0x000221c1) bg_popup_sub_pane_cp

0x823f,	// (0x00022c91) listscroll_popup_sub_pane

0x8247,	// (0x00022c99) list_submenu_pane_ParamLimits

0x8247,	// (0x00022c99) list_submenu_pane

0x8258,	// (0x00022caa) scroll_pane_cp4

0x8260,	// (0x00022cb2) list_single_popup_submenu_pane_ParamLimits

0x8260,	// (0x00022cb2) list_single_popup_submenu_pane

0x8275,	// (0x00022cc7) list_single_popup_submenu_pane_g1

0x827d,	// (0x00022ccf) list_single_popup_submenu_pane_t1_ParamLimits

0x827d,	// (0x00022ccf) list_single_popup_submenu_pane_t1

0x784f,	// (0x000222a1) bg_active_tab_pane_cp1_ParamLimits

0x784f,	// (0x000222a1) bg_active_tab_pane_cp1

0x8292,	// (0x00022ce4) tabs_2_active_pane_g1

0x829a,	// (0x00022cec) tabs_2_active_pane_t1

0x784f,	// (0x000222a1) bg_passive_tab_pane_cp1_ParamLimits

0x784f,	// (0x000222a1) bg_passive_tab_pane_cp1

0x8292,	// (0x00022ce4) tabs_2_passive_pane_g1

0x829a,	// (0x00022cec) tabs_2_passive_pane_t1

0x82ac,	// (0x00022cfe) bg_active_tab_pane_cp4

0x82ba,	// (0x00022d0c) tabs_2_long_active_pane_t1

0x82cd,	// (0x00022d1f) bg_passive_tab_pane_cp4

0x13d6,	// (0x0001be28) list_single_midp_graphic_pane_g4_ParamLimits

0x82ac,	// (0x00022cfe) bg_active_tab_pane_cp5

0x82d9,	// (0x00022d2b) tabs_3_long_active_pane_t1

0x82cd,	// (0x00022d1f) bg_passive_tab_pane_cp5

0x13d6,	// (0x0001be28) list_single_midp_graphic_pane_g4

0x784f,	// (0x000222a1) bg_popup_window_pane_cp13_ParamLimits

0x784f,	// (0x000222a1) bg_popup_window_pane_cp13

0x82f4,	// (0x00022d46) listscroll_popup_fast_pane_ParamLimits

0x82f4,	// (0x00022d46) listscroll_popup_fast_pane

0x8303,	// (0x00022d55) grid_popup_fast_pane_ParamLimits

0x8303,	// (0x00022d55) grid_popup_fast_pane

0x8315,	// (0x00022d67) scroll_pane_cp9_ParamLimits

0x8315,	// (0x00022d67) scroll_pane_cp9

0xcac5,	// (0x00027517) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xcac5,	// (0x00027517) list_single_graphic_hl_pane_t1_cp2

0x8339,	// (0x00022d8b) input_focus_pane_cp20_ParamLimits

0x8339,	// (0x00022d8b) input_focus_pane_cp20

0x8347,	// (0x00022d99) query_popup_data_pane_t1_ParamLimits

0x8347,	// (0x00022d99) query_popup_data_pane_t1

0x835a,	// (0x00022dac) query_popup_data_pane_t2_ParamLimits

0x835a,	// (0x00022dac) query_popup_data_pane_t2

0x83a0,	// (0x00022df2) query_popup_data_pane_t3_ParamLimits

0x83a0,	// (0x00022df2) query_popup_data_pane_t3

0x83e1,	// (0x00022e33) query_popup_data_pane_t4_ParamLimits

0x83e1,	// (0x00022e33) query_popup_data_pane_t4

0x841d,	// (0x00022e6f) query_popup_data_pane_t5_ParamLimits

0x841d,	// (0x00022e6f) query_popup_data_pane_t5

0x0004,

0xf6ea,	// (0x0002a13c) query_popup_data_pane_t_ParamLimits

0xf6ea,	// (0x0002a13c) query_popup_data_pane_t

0x813d,	// (0x00022b8f) bg_set_opt_pane_g1

0x8145,	// (0x00022b97) bg_set_opt_pane_g2

0x814d,	// (0x00022b9f) bg_set_opt_pane_g3

0x8155,	// (0x00022ba7) bg_set_opt_pane_g4

0x815d,	// (0x00022baf) bg_set_opt_pane_g5

0x8165,	// (0x00022bb7) bg_set_opt_pane_g6

0x816d,	// (0x00022bbf) bg_set_opt_pane_g7

0x8175,	// (0x00022bc7) bg_set_opt_pane_g8

0x817d,	// (0x00022bcf) bg_set_opt_pane_g9

0x0008,

0xf6f5,	// (0x0002a147) bg_set_opt_pane_g

0x63ee,	// (0x00020e40) control_top_pane_stacon_ParamLimits

0x63ee,	// (0x00020e40) control_top_pane_stacon

0x6441,	// (0x00020e93) signal_pane_stacon_ParamLimits

0x6441,	// (0x00020e93) signal_pane_stacon

0x89d5,	// (0x00023427) stacon_top_pane_g1_ParamLimits

0x89d5,	// (0x00023427) stacon_top_pane_g1

0x6466,	// (0x00020eb8) title_pane_stacon_ParamLimits

0x6466,	// (0x00020eb8) title_pane_stacon

0x6490,	// (0x00020ee2) uni_indicator_pane_stacon_ParamLimits

0x6490,	// (0x00020ee2) uni_indicator_pane_stacon

0x64a8,	// (0x00020efa) battery_pane_stacon_ParamLimits

0x64a8,	// (0x00020efa) battery_pane_stacon

0x64ec,	// (0x00020f3e) control_bottom_pane_stacon_ParamLimits

0x64ec,	// (0x00020f3e) control_bottom_pane_stacon

0x650f,	// (0x00020f61) navi_pane_stacon_ParamLimits

0x650f,	// (0x00020f61) navi_pane_stacon

0x89f7,	// (0x00023449) stacon_bottom_pane_g1_ParamLimits

0x89f7,	// (0x00023449) stacon_bottom_pane_g1

0x614b,	// (0x00020b9d) aid_levels_signal_lsc_ParamLimits

0x614b,	// (0x00020b9d) aid_levels_signal_lsc

0x6162,	// (0x00020bb4) signal_pane_stacon_g1_ParamLimits

0x6162,	// (0x00020bb4) signal_pane_stacon_g1

0x6176,	// (0x00020bc8) signal_pane_stacon_g2_ParamLimits

0x6176,	// (0x00020bc8) signal_pane_stacon_g2

0x0001,

0xf708,	// (0x0002a15a) signal_pane_stacon_g_ParamLimits

0xf708,	// (0x0002a15a) signal_pane_stacon_g

0x61ab,	// (0x00020bfd) title_pane_stacon_t1_ParamLimits

0x61ab,	// (0x00020bfd) title_pane_stacon_t1

0x8461,	// (0x00022eb3) uni_indicator_pane_stacon_g1

0x846b,	// (0x00022ebd) uni_indicator_pane_stacon_g2

0x8475,	// (0x00022ec7) uni_indicator_pane_stacon_g3

0x847f,	// (0x00022ed1) uni_indicator_pane_stacon_g4

0x0003,

0xf714,	// (0x0002a166) uni_indicator_pane_stacon_g

0x61d0,	// (0x00020c22) control_top_pane_stacon_g1

0x61d8,	// (0x00020c2a) control_top_pane_stacon_t1_ParamLimits

0x61d8,	// (0x00020c2a) control_top_pane_stacon_t1

0x620f,	// (0x00020c61) aid_levels_battery_lsc_ParamLimits

0x620f,	// (0x00020c61) aid_levels_battery_lsc

0x6227,	// (0x00020c79) battery_pane_stacon_g1_ParamLimits

0x6227,	// (0x00020c79) battery_pane_stacon_g1

0x623a,	// (0x00020c8c) battery_pane_stacon_g2_ParamLimits

0x623a,	// (0x00020c8c) battery_pane_stacon_g2

0x0001,

0xf71d,	// (0x0002a16f) battery_pane_stacon_g_ParamLimits

0xf71d,	// (0x0002a16f) battery_pane_stacon_g

0x6278,	// (0x00020cca) navi_icon_pane_stacon

0x628c,	// (0x00020cde) navi_navi_pane_stacon

0x6278,	// (0x00020cca) navi_text_pane_stacon

0x61d0,	// (0x00020c22) control_bottom_pane_stacon_g1

0x62a2,	// (0x00020cf4) control_bottom_pane_stacon_t1_ParamLimits

0x62a2,	// (0x00020cf4) control_bottom_pane_stacon_t1

0x84a3,	// (0x00022ef5) grid_app_pane_ParamLimits

0x84a3,	// (0x00022ef5) grid_app_pane

0x84c7,	// (0x00022f19) scroll_pane_cp15_ParamLimits

0x84c7,	// (0x00022f19) scroll_pane_cp15

0x84dc,	// (0x00022f2e) cell_app_pane_ParamLimits

0x84dc,	// (0x00022f2e) cell_app_pane

0x8508,	// (0x00022f5a) cell_app_pane_g1_ParamLimits

0x8508,	// (0x00022f5a) cell_app_pane_g1

0x852c,	// (0x00022f7e) cell_app_pane_g2_ParamLimits

0x852c,	// (0x00022f7e) cell_app_pane_g2

0x0001,

0xf722,	// (0x0002a174) cell_app_pane_g_ParamLimits

0xf722,	// (0x0002a174) cell_app_pane_g

0x8538,	// (0x00022f8a) cell_app_pane_t1_ParamLimits

0x8538,	// (0x00022f8a) cell_app_pane_t1

0x854a,	// (0x00022f9c) grid_highlight_pane_ParamLimits

0x854a,	// (0x00022f9c) grid_highlight_pane

0x813d,	// (0x00022b8f) cell_highlight_pane_g1

0x8145,	// (0x00022b97) cell_highlight_pane_g2

0x814d,	// (0x00022b9f) cell_highlight_pane_g3

0x8155,	// (0x00022ba7) cell_highlight_pane_g4

0x815d,	// (0x00022baf) cell_highlight_pane_g5

0x8165,	// (0x00022bb7) cell_highlight_pane_g6

0x816d,	// (0x00022bbf) cell_highlight_pane_g7

0x8175,	// (0x00022bc7) cell_highlight_pane_g8

0x817d,	// (0x00022bcf) cell_highlight_pane_g9

0x7765,	// (0x000221b7) cell_highlight_pane_g10

0x0009,

0xf6d0,	// (0x0002a122) cell_highlight_pane_g

0x855b,	// (0x00022fad) bg_scroll_pane

0x62ec,	// (0x00020d3e) scroll_handle_pane

0x85a2,	// (0x00022ff4) scroll_bg_pane_g1

0x85b7,	// (0x00023009) scroll_bg_pane_g2

0x85cf,	// (0x00023021) scroll_bg_pane_g3

0x0002,

0xf727,	// (0x0002a179) scroll_bg_pane_g

0x85e4,	// (0x00023036) scroll_handle_focus_pane_ParamLimits

0x85e4,	// (0x00023036) scroll_handle_focus_pane

0x85a2,	// (0x00022ff4) scroll_handle_pane_g1

0x85f1,	// (0x00023043) scroll_handle_pane_g2

0x85cf,	// (0x00023021) scroll_handle_pane_g3

0x0002,

0xf72e,	// (0x0002a180) scroll_handle_pane_g

0x818e,	// (0x00022be0) bg_popup_sub_pane_cp21_ParamLimits

0x818e,	// (0x00022be0) bg_popup_sub_pane_cp21

0x8605,	// (0x00023057) popup_fep_japan_predictive_window_t1_ParamLimits

0x8605,	// (0x00023057) popup_fep_japan_predictive_window_t1

0x861c,	// (0x0002306e) popup_fep_japan_predictive_window_t2_ParamLimits

0x861c,	// (0x0002306e) popup_fep_japan_predictive_window_t2

0x864f,	// (0x000230a1) popup_fep_japan_predictive_window_t3_ParamLimits

0x864f,	// (0x000230a1) popup_fep_japan_predictive_window_t3

0x0002,

0xf735,	// (0x0002a187) popup_fep_japan_predictive_window_t_ParamLimits

0xf735,	// (0x0002a187) popup_fep_japan_predictive_window_t

0x776f,	// (0x000221c1) bg_popup_sub_pane_cp23

0x8686,	// (0x000230d8) listscroll_japin_cand_pane

0x868e,	// (0x000230e0) popup_fep_japan_candidate_window_t1

0x869c,	// (0x000230ee) candidate_pane_ParamLimits

0x869c,	// (0x000230ee) candidate_pane

0x86ae,	// (0x00023100) scroll_pane_cp30

0x86b8,	// (0x0002310a) list_single_popup_jap_candidate_pane_ParamLimits

0x86b8,	// (0x0002310a) list_single_popup_jap_candidate_pane

0x776f,	// (0x000221c1) list_highlight_pane_cp30

0x86cc,	// (0x0002311e) list_single_popup_jap_candidate_pane_t1

0x86db,	// (0x0002312d) level_1_signal

0x86e8,	// (0x0002313a) level_2_signal

0x86f5,	// (0x00023147) level_3_signal

0x8702,	// (0x00023154) level_4_signal

0x870f,	// (0x00023161) level_5_signal

0x871c,	// (0x0002316e) level_6_signal

0x8729,	// (0x0002317b) level_7_signal

0x86db,	// (0x0002312d) level_1_battery

0x86e8,	// (0x0002313a) level_2_battery

0x86f5,	// (0x00023147) level_3_battery

0x8702,	// (0x00023154) level_4_battery

0x870f,	// (0x00023161) level_5_battery

0x871c,	// (0x0002316e) level_6_battery

0x8729,	// (0x0002317b) level_7_battery

0x874e,	// (0x000231a0) list_menu_pane_ParamLimits

0x874e,	// (0x000231a0) list_menu_pane

0x875f,	// (0x000231b1) scroll_pane_cp25_ParamLimits

0x875f,	// (0x000231b1) scroll_pane_cp25

0x8778,	// (0x000231ca) list_double2_graphic_pane_cp2_ParamLimits

0x8778,	// (0x000231ca) list_double2_graphic_pane_cp2

0x8778,	// (0x000231ca) list_double2_large_graphic_pane_cp2_ParamLimits

0x8778,	// (0x000231ca) list_double2_large_graphic_pane_cp2

0x8778,	// (0x000231ca) list_double2_pane_cp2_ParamLimits

0x8778,	// (0x000231ca) list_double2_pane_cp2

0x8778,	// (0x000231ca) list_double_graphic_pane_cp2_ParamLimits

0x8778,	// (0x000231ca) list_double_graphic_pane_cp2

0x8778,	// (0x000231ca) list_double_large_graphic_pane_cp2_ParamLimits

0x8778,	// (0x000231ca) list_double_large_graphic_pane_cp2

0x8778,	// (0x000231ca) list_double_number_pane_cp2_ParamLimits

0x8778,	// (0x000231ca) list_double_number_pane_cp2

0x8778,	// (0x000231ca) list_double_pane_cp2_ParamLimits

0x8778,	// (0x000231ca) list_double_pane_cp2

0x879e,	// (0x000231f0) list_single_2graphic_pane_cp2_ParamLimits

0x879e,	// (0x000231f0) list_single_2graphic_pane_cp2

0x879e,	// (0x000231f0) list_single_graphic_heading_pane_cp2_ParamLimits

0x879e,	// (0x000231f0) list_single_graphic_heading_pane_cp2

0x879e,	// (0x000231f0) list_single_graphic_pane_cp2_ParamLimits

0x879e,	// (0x000231f0) list_single_graphic_pane_cp2

0x879e,	// (0x000231f0) list_single_heading_pane_cp2_ParamLimits

0x879e,	// (0x000231f0) list_single_heading_pane_cp2

0x87bb,	// (0x0002320d) list_single_large_graphic_pane_cp2_ParamLimits

0x87bb,	// (0x0002320d) list_single_large_graphic_pane_cp2

0x879e,	// (0x000231f0) list_single_number_heading_pane_cp2_ParamLimits

0x879e,	// (0x000231f0) list_single_number_heading_pane_cp2

0x879e,	// (0x000231f0) list_single_number_pane_cp2_ParamLimits

0x879e,	// (0x000231f0) list_single_number_pane_cp2

0x879e,	// (0x000231f0) list_single_pane_cp2_ParamLimits

0x879e,	// (0x000231f0) list_single_pane_cp2

0x8810,	// (0x00023262) bg_popup_sub_pane_cp22

0x639e,	// (0x00020df0) popup_side_volume_key_window_g1

0x63c8,	// (0x00020e1a) popup_side_volume_key_window_t1

0x63e6,	// (0x00020e38) volume_small_pane_cp1

0x7acb,	// (0x0002251d) bg_popup_sub_pane_cp24_ParamLimits

0x7acb,	// (0x0002251d) bg_popup_sub_pane_cp24

0x8826,	// (0x00023278) fep_china_uni_candidate_pane_ParamLimits

0x8826,	// (0x00023278) fep_china_uni_candidate_pane

0x883a,	// (0x0002328c) fep_china_uni_entry_pane

0x884a,	// (0x0002329c) popup_fep_china_uni_window_g1

0x8872,	// (0x000232c4) fep_china_uni_entry_pane_g1

0x887c,	// (0x000232ce) fep_china_uni_entry_pane_g2

0x0001,

0xf762,	// (0x0002a1b4) fep_china_uni_entry_pane_g

0x8886,	// (0x000232d8) fep_entry_item_pane

0x8890,	// (0x000232e2) fep_candidate_item_pane

0x8898,	// (0x000232ea) fep_china_uni_candidate_pane_g1

0x88a2,	// (0x000232f4) fep_china_uni_candidate_pane_g2

0x88aa,	// (0x000232fc) fep_china_uni_candidate_pane_g3

0x88b2,	// (0x00023304) fep_china_uni_candidate_pane_g4

0x0003,

0xf767,	// (0x0002a1b9) fep_china_uni_candidate_pane_g

0x7765,	// (0x000221b7) fep_entry_item_pane_g1

0x88bc,	// (0x0002330e) fep_entry_item_pane_t1_ParamLimits

0x88bc,	// (0x0002330e) fep_entry_item_pane_t1

0x88d2,	// (0x00023324) fep_candidate_item_pane_t1_ParamLimits

0x88d2,	// (0x00023324) fep_candidate_item_pane_t1

0x88e7,	// (0x00023339) fep_candidate_item_pane_t2_ParamLimits

0x88e7,	// (0x00023339) fep_candidate_item_pane_t2

0x0001,

0xf770,	// (0x0002a1c2) fep_candidate_item_pane_t_ParamLimits

0xf770,	// (0x0002a1c2) fep_candidate_item_pane_t

0x784f,	// (0x000222a1) list_highlight_pane_cp31_ParamLimits

0x784f,	// (0x000222a1) list_highlight_pane_cp31

0x88f9,	// (0x0002334b) level_1_signal_lsc

0x8902,	// (0x00023354) level_2_signal_lsc

0x890b,	// (0x0002335d) level_3_signal_lsc

0x8914,	// (0x00023366) level_4_signal_lsc

0x891d,	// (0x0002336f) level_5_signal_lsc

0x8926,	// (0x00023378) level_6_signal_lsc

0x892f,	// (0x00023381) level_7_signal_lsc

0x892f,	// (0x00023381) level_1_battery_lsc

0x8938,	// (0x0002338a) level_2_battery_lsc

0x8941,	// (0x00023393) level_3_battery_lsc

0x894a,	// (0x0002339c) level_4_battery_lsc

0x8953,	// (0x000233a5) level_5_battery_lsc

0x895c,	// (0x000233ae) level_6_battery_lsc

0x88f9,	// (0x0002334b) level_7_battery_lsc

0x8965,	// (0x000233b7) scroll_handle_focus_pane_g1

0x896e,	// (0x000233c0) scroll_handle_focus_pane_g2

0x8977,	// (0x000233c9) scroll_handle_focus_pane_g3

0x0002,

0xf775,	// (0x0002a1c7) scroll_handle_focus_pane_g

0x5439,	// (0x0001fe8b) list_single_2graphic_pane_g1_ParamLimits

0x5439,	// (0x0001fe8b) list_single_2graphic_pane_g1

0x4d98,	// (0x0001f7ea) list_single_2graphic_pane_g2_ParamLimits

0x4d98,	// (0x0001f7ea) list_single_2graphic_pane_g2

0x4d1e,	// (0x0001f770) list_single_2graphic_pane_g3_ParamLimits

0x4d1e,	// (0x0001f770) list_single_2graphic_pane_g3

0x5445,	// (0x0001fe97) list_single_2graphic_pane_g4_ParamLimits

0x5445,	// (0x0001fe97) list_single_2graphic_pane_g4

0x0003,

0xf77c,	// (0x0002a1ce) list_single_2graphic_pane_g_ParamLimits

0xf77c,	// (0x0002a1ce) list_single_2graphic_pane_g

0x5451,	// (0x0001fea3) list_single_2graphic_pane_t1_ParamLimits

0x5451,	// (0x0001fea3) list_single_2graphic_pane_t1

0x547f,	// (0x0001fed1) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x547f,	// (0x0001fed1) list_double2_graphic_large_graphic_pane_g1

0x4fd0,	// (0x0001fa22) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x4fd0,	// (0x0001fa22) list_double2_graphic_large_graphic_pane_g2

0x4fe1,	// (0x0001fa33) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x4fe1,	// (0x0001fa33) list_double2_graphic_large_graphic_pane_g3

0x5491,	// (0x0001fee3) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x5491,	// (0x0001fee3) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf785,	// (0x0002a1d7) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf785,	// (0x0002a1d7) list_double2_graphic_large_graphic_pane_g

0x549d,	// (0x0001feef) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x549d,	// (0x0001feef) list_double2_graphic_large_graphic_pane_t1

0x54b3,	// (0x0001ff05) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x54b3,	// (0x0001ff05) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf78e,	// (0x0002a1e0) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf78e,	// (0x0002a1e0) list_double2_graphic_large_graphic_pane_t

0x8ab9,	// (0x0002350b) popup_fast_swap_window_ParamLimits

0x8ab9,	// (0x0002350b) popup_fast_swap_window

0x8ad7,	// (0x00023529) popup_side_volume_key_window

0x8af5,	// (0x00023547) stacon_top_pane

0x8aff,	// (0x00023551) status_pane_ParamLimits

0x8aff,	// (0x00023551) status_pane

0x8af5,	// (0x00023547) status_small_pane

0x776f,	// (0x000221c1) control_pane

0x776f,	// (0x000221c1) stacon_bottom_pane

0x80b9,	// (0x00022b0b) scroll_pane_cp121

0x80b0,	// (0x00022b02) set_content_pane

0x8980,	// (0x000233d2) bg_active_tab_pane_g1_cp1

0x8989,	// (0x000233db) bg_active_tab_pane_g2_cp1

0x8992,	// (0x000233e4) bg_active_tab_pane_g3_cp1

0x8980,	// (0x000233d2) bg_passive_tab_pane_g1_cp1

0x8989,	// (0x000233db) bg_passive_tab_pane_g2_cp1

0x8992,	// (0x000233e4) bg_passive_tab_pane_g3_cp1

0x899b,	// (0x000233ed) bg_active_tab_pane_g1_cp2

0x8989,	// (0x000233db) bg_active_tab_pane_g2_cp2

0x89a4,	// (0x000233f6) bg_active_tab_pane_g3_cp2

0x899b,	// (0x000233ed) bg_passive_tab_pane_g1_cp2

0x8989,	// (0x000233db) bg_passive_tab_pane_g2_cp2

0x89a4,	// (0x000233f6) bg_passive_tab_pane_g3_cp2

0x89ad,	// (0x000233ff) bg_active_tab_pane_g1_cp3

0x8989,	// (0x000233db) bg_active_tab_pane_g2_cp3

0x89b6,	// (0x00023408) bg_active_tab_pane_g3_cp3

0x89ad,	// (0x000233ff) bg_passive_tab_pane_g1_cp3

0x8989,	// (0x000233db) bg_passive_tab_pane_g2_cp3

0x89b6,	// (0x00023408) bg_passive_tab_pane_g3_cp3

0x89bf,	// (0x00023411) bg_active_tab_pane_g1_cp4

0x8989,	// (0x000233db) bg_active_tab_pane_g2_cp4

0x89ca,	// (0x0002341c) bg_active_tab_pane_g3_cp4

0x89bf,	// (0x00023411) bg_passive_tab_pane_g1_cp4

0x8989,	// (0x000233db) bg_passive_tab_pane_g2_cp4

0x89ca,	// (0x0002341c) bg_passive_tab_pane_g3_cp4

0x8a13,	// (0x00023465) bg_active_tab_pane_g1_cp5

0x8989,	// (0x000233db) bg_active_tab_pane_g2_cp5

0x8a1c,	// (0x0002346e) bg_active_tab_pane_g3_cp5

0x8a13,	// (0x00023465) bg_passive_tab_pane_g1_cp5

0x8989,	// (0x000233db) bg_passive_tab_pane_g2_cp5

0x8a1c,	// (0x0002346e) bg_passive_tab_pane_g3_cp5

0x8a25,	// (0x00023477) list_set_graphic_pane_ParamLimits

0x8a25,	// (0x00023477) list_set_graphic_pane

0x776f,	// (0x000221c1) bg_set_opt_pane_cp4

0x8a3a,	// (0x0002348c) list_set_graphic_pane_g1_ParamLimits

0x8a3a,	// (0x0002348c) list_set_graphic_pane_g1

0x8a46,	// (0x00023498) list_set_graphic_pane_g2_ParamLimits

0x8a46,	// (0x00023498) list_set_graphic_pane_g2

0x0001,

0xf793,	// (0x0002a1e5) list_set_graphic_pane_g_ParamLimits

0xf793,	// (0x0002a1e5) list_set_graphic_pane_g

0x0009,

0xfaf0,	// (0x0002a542) volume_small_pane_cp_g

0x8a6a,	// (0x000234bc) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x8a6a,	// (0x000234bc) list_double2_large_graphic_pane_g1_cp2

0x8a78,	// (0x000234ca) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x8a78,	// (0x000234ca) list_double2_large_graphic_pane_g2_cp2

0x8a89,	// (0x000234db) list_double2_large_graphic_pane_g3_cp2

0x8a91,	// (0x000234e3) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x8a91,	// (0x000234e3) list_double2_large_graphic_pane_t1_cp2

0x8aa7,	// (0x000234f9) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x8aa7,	// (0x000234f9) list_double2_large_graphic_pane_t2_cp2

0xacf7,	// (0x00025749) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xacf7,	// (0x00025749) list_double_large_graphic_pane_g1_cp2

0xad0a,	// (0x0002575c) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xad0a,	// (0x0002575c) list_double_large_graphic_pane_g2_cp2

0x8c1d,	// (0x0002366f) list_double_large_graphic_pane_g3_cp2

0xad1b,	// (0x0002576d) list_double_large_graphic_pane_g4_cp

0xad23,	// (0x00025775) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xad23,	// (0x00025775) list_double_large_graphic_pane_t1_cp2

0xad3a,	// (0x0002578c) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xad3a,	// (0x0002578c) list_double_large_graphic_pane_t2_cp2

0x8b0d,	// (0x0002355f) list_double2_graphic_pane_g1_cp2_ParamLimits

0x8b0d,	// (0x0002355f) list_double2_graphic_pane_g1_cp2

0x8b1b,	// (0x0002356d) list_double2_graphic_pane_g2_cp2_ParamLimits

0x8b1b,	// (0x0002356d) list_double2_graphic_pane_g2_cp2

0x8b2c,	// (0x0002357e) list_double2_graphic_pane_g3_cp2

0x8b36,	// (0x00023588) list_double2_graphic_pane_t1_cp2_ParamLimits

0x8b36,	// (0x00023588) list_double2_graphic_pane_t1_cp2

0x8b4c,	// (0x0002359e) list_double2_graphic_pane_t2_cp2_ParamLimits

0x8b4c,	// (0x0002359e) list_double2_graphic_pane_t2_cp2

0x8b5e,	// (0x000235b0) list_single_number_heading_pane_g1_cp2_ParamLimits

0x8b5e,	// (0x000235b0) list_single_number_heading_pane_g1_cp2

0x8b6a,	// (0x000235bc) list_single_number_heading_pane_g2_cp2

0x8b72,	// (0x000235c4) list_single_number_heading_pane_t1_cp2_ParamLimits

0x8b72,	// (0x000235c4) list_single_number_heading_pane_t1_cp2

0x8b88,	// (0x000235da) list_single_number_heading_pane_t2_cp2_ParamLimits

0x8b88,	// (0x000235da) list_single_number_heading_pane_t2_cp2

0x8b9c,	// (0x000235ee) list_single_number_heading_pane_t3_cp2_ParamLimits

0x8b9c,	// (0x000235ee) list_single_number_heading_pane_t3_cp2

0x8b5e,	// (0x000235b0) list_single_heading_pane_g1_cp2_ParamLimits

0x8b5e,	// (0x000235b0) list_single_heading_pane_g1_cp2

0x8b6a,	// (0x000235bc) list_single_heading_pane_g2_cp2

0x8b72,	// (0x000235c4) list_single_heading_pane_t1_cp2_ParamLimits

0x8b72,	// (0x000235c4) list_single_heading_pane_t1_cp2

0xaaf1,	// (0x00025543) list_single_heading_pane_t2_cp2_ParamLimits

0xaaf1,	// (0x00025543) list_single_heading_pane_t2_cp2

0xaa33,	// (0x00025485) list_double_graphic_pane_g1_cp2_ParamLimits

0xaa33,	// (0x00025485) list_double_graphic_pane_g1_cp2

0xaa3f,	// (0x00025491) list_double_graphic_pane_g2_cp2_ParamLimits

0xaa3f,	// (0x00025491) list_double_graphic_pane_g2_cp2

0xaa4e,	// (0x000254a0) list_double_graphic_pane_g3_cp2

0xaa56,	// (0x000254a8) list_double_graphic_pane_t1_cp2_ParamLimits

0xaa56,	// (0x000254a8) list_double_graphic_pane_t1_cp2

0xaa6c,	// (0x000254be) list_double_graphic_pane_t2_cp2_ParamLimits

0xaa6c,	// (0x000254be) list_double_graphic_pane_t2_cp2

0x8c11,	// (0x00023663) list_double_number_pane_g1_cp2_ParamLimits

0x8c11,	// (0x00023663) list_double_number_pane_g1_cp2

0x8c1d,	// (0x0002366f) list_double_number_pane_g2_cp2

0xa9f7,	// (0x00025449) list_double_number_pane_t1_cp2_ParamLimits

0xa9f7,	// (0x00025449) list_double_number_pane_t1_cp2

0xaa0b,	// (0x0002545d) list_double_number_pane_t2_cp2_ParamLimits

0xaa0b,	// (0x0002545d) list_double_number_pane_t2_cp2

0xaa21,	// (0x00025473) list_double_number_pane_t3_cp2_ParamLimits

0xaa21,	// (0x00025473) list_double_number_pane_t3_cp2

0xa8e0,	// (0x00025332) list_single_graphic_pane_g1_cp2_ParamLimits

0xa8e0,	// (0x00025332) list_single_graphic_pane_g1_cp2

0x8c77,	// (0x000236c9) list_single_graphic_pane_g2_cp2_ParamLimits

0x8c77,	// (0x000236c9) list_single_graphic_pane_g2_cp2

0x8c83,	// (0x000236d5) list_single_graphic_pane_g3_cp2

0xa8b6,	// (0x00025308) list_single_graphic_pane_t1_cp2_ParamLimits

0xa8b6,	// (0x00025308) list_single_graphic_pane_t1_cp2

0x8c77,	// (0x000236c9) list_single_number_pane_g1_cp2_ParamLimits

0x8c77,	// (0x000236c9) list_single_number_pane_g1_cp2

0x8c83,	// (0x000236d5) list_single_number_pane_g2_cp2

0xa8b6,	// (0x00025308) list_single_number_pane_t1_cp2_ParamLimits

0xa8b6,	// (0x00025308) list_single_number_pane_t1_cp2

0xa8cc,	// (0x0002531e) list_single_number_pane_t2_cp2_ParamLimits

0xa8cc,	// (0x0002531e) list_single_number_pane_t2_cp2

0x8a78,	// (0x000234ca) list_double2_pane_g1_cp2_ParamLimits

0x8a78,	// (0x000234ca) list_double2_pane_g1_cp2

0x8a89,	// (0x000234db) list_double2_pane_g2_cp2

0x8be9,	// (0x0002363b) list_double2_pane_t1_cp2_ParamLimits

0x8be9,	// (0x0002363b) list_double2_pane_t1_cp2

0x8bff,	// (0x00023651) list_double2_pane_t2_cp2_ParamLimits

0x8bff,	// (0x00023651) list_double2_pane_t2_cp2

0x8c11,	// (0x00023663) list_double_pane_g1_cp2_ParamLimits

0x8c11,	// (0x00023663) list_double_pane_g1_cp2

0x8c1d,	// (0x0002366f) list_double_pane_g2_cp2

0x8c25,	// (0x00023677) list_double_pane_t1_cp2_ParamLimits

0x8c25,	// (0x00023677) list_double_pane_t1_cp2

0x8c3b,	// (0x0002368d) list_double_pane_t2_cp2_ParamLimits

0x8c3b,	// (0x0002368d) list_double_pane_t2_cp2

0x8c67,	// (0x000236b9) list_single_pane_cp2_g3

0x8c77,	// (0x000236c9) list_single_pane_g1_cp2_ParamLimits

0x8c77,	// (0x000236c9) list_single_pane_g1_cp2

0x8c83,	// (0x000236d5) list_single_pane_g2_cp2

0x8c8b,	// (0x000236dd) list_single_pane_t1_cp2_ParamLimits

0x8c8b,	// (0x000236dd) list_single_pane_t1_cp2

0x8ca3,	// (0x000236f5) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x8ca3,	// (0x000236f5) list_single_large_graphic_pane_g1_cp2

0x8cb1,	// (0x00023703) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x8cb1,	// (0x00023703) list_single_large_graphic_pane_g2_cp2

0x8cbd,	// (0x0002370f) list_single_large_graphic_pane_g3_cp2

0x8cc5,	// (0x00023717) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x8cc5,	// (0x00023717) list_single_large_graphic_pane_g4_cp1

0x8cdf,	// (0x00023731) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x8cdf,	// (0x00023731) list_single_large_graphic_pane_t1_cp2

0xa880,	// (0x000252d2) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa880,	// (0x000252d2) list_single_graphic_heading_pane_g1_cp2

0xa84d,	// (0x0002529f) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa84d,	// (0x0002529f) list_single_graphic_heading_pane_g4_cp2

0x8c83,	// (0x000236d5) list_single_graphic_heading_pane_g5_cp2

0xa88c,	// (0x000252de) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa88c,	// (0x000252de) list_single_graphic_heading_pane_t1_cp2

0xa8a2,	// (0x000252f4) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa8a2,	// (0x000252f4) list_single_graphic_heading_pane_t2_cp2

0xa841,	// (0x00025293) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa841,	// (0x00025293) list_single_2graphic_pane_g1_cp2

0xa84d,	// (0x0002529f) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa84d,	// (0x0002529f) list_single_2graphic_pane_g2_cp2

0x8c83,	// (0x000236d5) list_single_2graphic_pane_g3_cp2

0xa85e,	// (0x000252b0) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa85e,	// (0x000252b0) list_single_2graphic_pane_g4_cp2

0xa86a,	// (0x000252bc) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa86a,	// (0x000252bc) list_single_2graphic_pane_t1_cp2

0x7765,	// (0x000221b7) list_highlight_pane_g10_cp1

0xa419,	// (0x00024e6b) list_highlight_pane_g1_cp1

0xa421,	// (0x00024e73) list_highlight_pane_g2_cp1

0xa429,	// (0x00024e7b) list_highlight_pane_g3_cp1

0xa431,	// (0x00024e83) list_highlight_pane_g4_cp1

0xa439,	// (0x00024e8b) list_highlight_pane_g5_cp1

0xa441,	// (0x00024e93) list_highlight_pane_g6_cp1

0xa449,	// (0x00024e9b) list_highlight_pane_g7_cp1

0xa451,	// (0x00024ea3) list_highlight_pane_g8_cp1

0xa459,	// (0x00024eab) list_highlight_pane_g9_cp1

0xa339,	// (0x00024d8b) form_field_slider_pane_t3

0xa347,	// (0x00024d99) form_field_slider_pane_t4

0xa355,	// (0x00024da7) slider_form_pane_ParamLimits

0xa355,	// (0x00024da7) slider_form_pane

0x776f,	// (0x000221c1) control_abbreviations

0x776f,	// (0x000221c1) control_conventions

0x776f,	// (0x000221c1) control_definitions

0x776f,	// (0x000221c1) format_table_attribute

0xab47,	// (0x00025599) bg_popup_preview_window_pane_g9

0x776f,	// (0x000221c1) format_table_data2

0x776f,	// (0x000221c1) format_table_data3

0x776f,	// (0x000221c1) format_table_data_example

0x0008,

0x776f,	// (0x000221c1) intro_purpose

0xf928,	// (0x0002a37a) bg_popup_preview_window_pane_g

0x776f,	// (0x000221c1) texts_category

0x776f,	// (0x000221c1) texts_graphics

0x8cf5,	// (0x00023747) text_digital

0x8d04,	// (0x00023756) text_primary

0x8d13,	// (0x00023765) text_primary_small

0x8d22,	// (0x00023774) text_secondary

0x8d31,	// (0x00023783) text_title

0xb2e3,	// (0x00025d35) bg_passive_tab_pane_g1_cp3_srt

0x8989,	// (0x000233db) bg_passive_tab_pane_g2_cp3_srt

0xb2ec,	// (0x00025d3e) bg_passive_tab_pane_g3_cp3_srt

0x784f,	// (0x000222a1) bg_active_tab_pane_cp3_srt_ParamLimits

0x784f,	// (0x000222a1) bg_active_tab_pane_cp3_srt

0xb2f5,	// (0x00025d47) tabs_4_active_pane_srt_g1

0xb2fd,	// (0x00025d4f) tabs_4_active_pane_srt_t1_ParamLimits

0xb2fd,	// (0x00025d4f) tabs_4_active_pane_srt_t1

0xb2e3,	// (0x00025d35) bg_active_tab_pane_g1_cp3_copy1

0x8989,	// (0x000233db) bg_active_tab_pane_g2_cp3_copy1

0xb2ec,	// (0x00025d3e) bg_active_tab_pane_g3_cp3_copy1

0x784f,	// (0x000222a1) tabs_2_long_active_pane_srt_ParamLimits

0x784f,	// (0x000222a1) tabs_2_long_active_pane_srt

0x784f,	// (0x000222a1) tabs_2_long_passive_pane_srt_ParamLimits

0x784f,	// (0x000222a1) tabs_2_long_passive_pane_srt

0x82cd,	// (0x00022d1f) bg_passive_tab_pane_cp4_srt_ParamLimits

0x82cd,	// (0x00022d1f) bg_passive_tab_pane_cp4_srt

0xaf97,	// (0x000259e9) bg_passive_tab_pane_g1_cp4_srt

0x8989,	// (0x000233db) bg_passive_tab_pane_g2_cp4_srt

0xafa0,	// (0x000259f2) bg_passive_tab_pane_g3_cp4_srt

0x82ac,	// (0x00022cfe) bg_active_tab_pane_cp4_srt_ParamLimits

0x82ac,	// (0x00022cfe) bg_active_tab_pane_cp4_srt

0xafa9,	// (0x000259fb) tabs_2_long_active_pane_srt_t1_ParamLimits

0xafa9,	// (0x000259fb) tabs_2_long_active_pane_srt_t1

0xaf97,	// (0x000259e9) bg_active_tab_pane_g1_cp4_srt

0x8989,	// (0x000233db) bg_active_tab_pane_g2_cp4_srt

0xafa0,	// (0x000259f2) bg_active_tab_pane_g3_cp4_srt

0x7acb,	// (0x0002251d) tabs_3_long_active_pane_srt_ParamLimits

0x7acb,	// (0x0002251d) tabs_3_long_active_pane_srt

0x7acb,	// (0x0002251d) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x7acb,	// (0x0002251d) tabs_3_long_passive_pane_cp_srt

0x7acb,	// (0x0002251d) tabs_3_long_passive_pane_srt_ParamLimits

0x7acb,	// (0x0002251d) tabs_3_long_passive_pane_srt

0x82cd,	// (0x00022d1f) bg_passive_tab_pane_cp5_srt_ParamLimits

0x82cd,	// (0x00022d1f) bg_passive_tab_pane_cp5_srt

0x8a13,	// (0x00023465) bg_passive_tab_pane_g1_cp5_srt

0x8989,	// (0x000233db) bg_passive_tab_pane_g2_cp5_srt

0x8a1c,	// (0x0002346e) bg_passive_tab_pane_g3_cp5_srt

0x82ac,	// (0x00022cfe) bg_active_tab_pane_cp5_srt_ParamLimits

0x82ac,	// (0x00022cfe) bg_active_tab_pane_cp5_srt

0xaf85,	// (0x000259d7) tabs_3_long_active_pane_srt_t1_ParamLimits

0xaf85,	// (0x000259d7) tabs_3_long_active_pane_srt_t1

0x8a13,	// (0x00023465) bg_active_tab_pane_g1_cp5_srt

0x8989,	// (0x000233db) bg_active_tab_pane_g2_cp5_srt

0x8a1c,	// (0x0002346e) bg_active_tab_pane_g3_cp5_srt

0xaf77,	// (0x000259c9) navi_text_pane_srt_t1

0xaf6f,	// (0x000259c1) navi_icon_pane_srt_g1

0x8f08,	// (0x0002395a) midp_editing_number_pane_srt

0x8d40,	// (0x00023792) midp_ticker_pane_srt

0x8f10,	// (0x00023962) midp_ticker_pane_srt_g1

0x8f18,	// (0x0002396a) midp_ticker_pane_srt_g2

0x0001,

0xf7b2,	// (0x0002a204) midp_ticker_pane_srt_g

0x8f20,	// (0x00023972) midp_ticker_pane_srt_t1

0xaf60,	// (0x000259b2) midp_editing_number_pane_t1_copy1

0x8d48,	// (0x0002379a) listscroll_midp_pane

0x8d48,	// (0x0002379a) midp_form_pane

0x8db6,	// (0x00023808) midp_info_popup_window_ParamLimits

0x8db6,	// (0x00023808) midp_info_popup_window

0x818e,	// (0x00022be0) bg_popup_sub_pane_cp50_ParamLimits

0x818e,	// (0x00022be0) bg_popup_sub_pane_cp50

0xa080,	// (0x00024ad2) listscroll_midp_info_pane_ParamLimits

0xa080,	// (0x00024ad2) listscroll_midp_info_pane

0xa068,	// (0x00024aba) listscroll_form_midp_pane_ParamLimits

0xa068,	// (0x00024aba) listscroll_form_midp_pane

0xa074,	// (0x00024ac6) scroll_bar_cp050

0xa048,	// (0x00024a9a) list_midp_pane

0xbd3c,	// (0x0002678e) signal_pane_g2_cp

0x9f82,	// (0x000249d4) listscroll_midp_info_pane_t1_ParamLimits

0x9f82,	// (0x000249d4) listscroll_midp_info_pane_t1

0x9f9a,	// (0x000249ec) listscroll_midp_info_pane_t2_ParamLimits

0x9f9a,	// (0x000249ec) listscroll_midp_info_pane_t2

0x9fd8,	// (0x00024a2a) listscroll_midp_info_pane_t3_ParamLimits

0x9fd8,	// (0x00024a2a) listscroll_midp_info_pane_t3

0xa012,	// (0x00024a64) listscroll_midp_info_pane_t4_ParamLimits

0xa012,	// (0x00024a64) listscroll_midp_info_pane_t4

0x0003,

0xf863,	// (0x0002a2b5) listscroll_midp_info_pane_t_ParamLimits

0xf863,	// (0x0002a2b5) listscroll_midp_info_pane_t

0x8258,	// (0x00022caa) scroll_pane_cp21

0x9f1c,	// (0x0002496e) form_midp_field_choice_group_pane

0x9f25,	// (0x00024977) form_midp_field_text_pane

0x9f68,	// (0x000249ba) form_midp_field_time_pane

0x9f70,	// (0x000249c2) form_midp_gauge_slider_pane

0x9f79,	// (0x000249cb) form_midp_gauge_wait_pane

0x776f,	// (0x000221c1) form_midp_image_pane

0x55b4,	// (0x00020006) list_single_midp_pane_ParamLimits

0x55b4,	// (0x00020006) list_single_midp_pane

0x9ee0,	// (0x00024932) form_midp_field_text_pane_t1

0x9cf4,	// (0x00024746) input_focus_pane_cp050

0x9f0b,	// (0x0002495d) list_midp_form_text_pane

0x9eaf,	// (0x00024901) form_midp_field_choice_group_pane_t1

0x9ebd,	// (0x0002490f) input_focus_pane_cp051

0x9ed1,	// (0x00024923) list_midp_choice_pane

0x776f,	// (0x000221c1) status_idle_pane

0x9e93,	// (0x000248e5) form_midp_field_time_pane_t1

0x7765,	// (0x000221b7) wait_anim_pane_g2_copy1

0x9ea1,	// (0x000248f3) form_midp_field_time_pane_t2

0x0001,

0x8e66,	// (0x000238b8) aid_navinavi_width_2_pane

0xf85e,	// (0x0002a2b0) form_midp_field_time_pane_t

0x776f,	// (0x000221c1) input_focus_pane_cp052

0x776f,	// (0x000221c1) bg_input_focus_pane_cp040

0x9e53,	// (0x000248a5) form_midp_gauge_slider_pane_t1

0x9e61,	// (0x000248b3) form_midp_gauge_slider_pane_t2

0x9e6f,	// (0x000248c1) form_midp_gauge_slider_pane_t3

0x9e7d,	// (0x000248cf) form_midp_gauge_slider_pane_t4

0x0003,

0xf855,	// (0x0002a2a7) form_midp_gauge_slider_pane_t

0x9e8b,	// (0x000248dd) form_midp_slider_pane

0x784f,	// (0x000222a1) bg_input_focus_pane_cp041_ParamLimits

0x784f,	// (0x000222a1) bg_input_focus_pane_cp041

0x9e20,	// (0x00024872) form_midp_gauge_wait_pane_t1_ParamLimits

0x9e20,	// (0x00024872) form_midp_gauge_wait_pane_t1

0x9e32,	// (0x00024884) form_midp_gauge_wait_pane_t2_ParamLimits

0x9e32,	// (0x00024884) form_midp_gauge_wait_pane_t2

0x0001,

0xf850,	// (0x0002a2a2) form_midp_gauge_wait_pane_t_ParamLimits

0xf850,	// (0x0002a2a2) form_midp_gauge_wait_pane_t

0x9e44,	// (0x00024896) form_midp_wait_pane_ParamLimits

0x9e44,	// (0x00024896) form_midp_wait_pane

0x9de8,	// (0x0002483a) form_midp_image_pane_g1

0x9df1,	// (0x00024843) form_midp_image_pane_t1

0x9e00,	// (0x00024852) form_midp_image_pane_t2

0x9e0f,	// (0x00024861) form_midp_image_pane_t3

0x0002,

0xf849,	// (0x0002a29b) form_midp_image_pane_t

0x9ddf,	// (0x00024831) list_single_midp_pane_g1

0x55a5,	// (0x0001fff7) list_single_midp_pane_t1

0x9dc5,	// (0x00024817) list_midp_form_item_pane_ParamLimits

0x9dc5,	// (0x00024817) list_midp_form_item_pane

0x8e0e,	// (0x00023860) list_midp_form_item_pane_t1

0x8e1d,	// (0x0002386f) midp_ticker_pane_g1

0x8e29,	// (0x0002387b) midp_ticker_pane_g2

0x0001,

0xf798,	// (0x0002a1ea) midp_ticker_pane_g

0x8e35,	// (0x00023887) midp_ticker_pane_t1

0xb1df,	// (0x00025c31) midp_editing_number_pane_t1

0xb1bd,	// (0x00025c0f) midp_editing_number_pane

0xb1cc,	// (0x00025c1e) midp_ticker_pane

0xaf50,	// (0x000259a2) ai_message_heading_pane

0x776f,	// (0x000221c1) bg_popup_window_pane_cp14

0xaf58,	// (0x000259aa) listscroll_ai_message_pane

0xaed6,	// (0x00025928) ai_message_heading_pane_g1_ParamLimits

0xaed6,	// (0x00025928) ai_message_heading_pane_g1

0xaee2,	// (0x00025934) ai_message_heading_pane_g2_ParamLimits

0xaee2,	// (0x00025934) ai_message_heading_pane_g2

0xaef0,	// (0x00025942) ai_message_heading_pane_g3_ParamLimits

0xaef0,	// (0x00025942) ai_message_heading_pane_g3

0xaefc,	// (0x0002594e) ai_message_heading_pane_g4_ParamLimits

0xaefc,	// (0x0002594e) ai_message_heading_pane_g4

0x0003,

0xf98a,	// (0x0002a3dc) ai_message_heading_pane_g_ParamLimits

0xf98a,	// (0x0002a3dc) ai_message_heading_pane_g

0xaf08,	// (0x0002595a) ai_message_heading_pane_t1_ParamLimits

0xaf08,	// (0x0002595a) ai_message_heading_pane_t1

0xaf22,	// (0x00025974) ai_message_heading_pane_t2_ParamLimits

0xaf22,	// (0x00025974) ai_message_heading_pane_t2

0x0001,

0xf993,	// (0x0002a3e5) ai_message_heading_pane_t_ParamLimits

0xf993,	// (0x0002a3e5) ai_message_heading_pane_t

0xaf36,	// (0x00025988) bg_popup_heading_pane_cp1_ParamLimits

0xaf36,	// (0x00025988) bg_popup_heading_pane_cp1

0xaec4,	// (0x00025916) list_ai_message_pane_ParamLimits

0xaec4,	// (0x00025916) list_ai_message_pane

0x8258,	// (0x00022caa) scroll_pane_cp10

0xae60,	// (0x000258b2) list_ai_message_pane_g1

0xae68,	// (0x000258ba) list_ai_message_pane_g2

0x0001,

0xf967,	// (0x0002a3b9) list_ai_message_pane_g

0xae70,	// (0x000258c2) list_ai_message_pane_t1_ParamLimits

0xae70,	// (0x000258c2) list_ai_message_pane_t1

0xae85,	// (0x000258d7) list_ai_message_pane_t2_ParamLimits

0xae85,	// (0x000258d7) list_ai_message_pane_t2

0xae9a,	// (0x000258ec) list_ai_message_pane_t3_ParamLimits

0xae9a,	// (0x000258ec) list_ai_message_pane_t3

0xaeaf,	// (0x00025901) list_ai_message_pane_t4_ParamLimits

0xaeaf,	// (0x00025901) list_ai_message_pane_t4

0x0003,

0xf96c,	// (0x0002a3be) list_ai_message_pane_t_ParamLimits

0xf96c,	// (0x0002a3be) list_ai_message_pane_t

0xae49,	// (0x0002589b) cell_ai_soft_ind_pane_ParamLimits

0xae49,	// (0x0002589b) cell_ai_soft_ind_pane

0x8e47,	// (0x00023899) cell_ai_soft_ind_pane_g1_ParamLimits

0x8e47,	// (0x00023899) cell_ai_soft_ind_pane_g1

0x776f,	// (0x000221c1) grid_highlight_cp1

0x8e54,	// (0x000238a6) text_secondary_cp56_ParamLimits

0x8e54,	// (0x000238a6) text_secondary_cp56

0xae1e,	// (0x00025870) example_general_pane_ParamLimits

0xae1e,	// (0x00025870) example_general_pane

0xae2a,	// (0x0002587c) example_parent_pane_g1_ParamLimits

0xae2a,	// (0x0002587c) example_parent_pane_g1

0xae36,	// (0x00025888) example_parent_pane_t1_ParamLimits

0xae36,	// (0x00025888) example_parent_pane_t1

0x9489,	// (0x00023edb) popup_preview_text_window_ParamLimits

0x9489,	// (0x00023edb) popup_preview_text_window

0x8c6f,	// (0x000236c1) list_single_pane_cp2_g4

0x7b81,	// (0x000225d3) bg_popup_preview_window_pane_ParamLimits

0x7b81,	// (0x000225d3) bg_popup_preview_window_pane

0xab51,	// (0x000255a3) popup_preview_text_window_t1_ParamLimits

0xab51,	// (0x000255a3) popup_preview_text_window_t1

0xab6f,	// (0x000255c1) popup_preview_text_window_t2_ParamLimits

0xab6f,	// (0x000255c1) popup_preview_text_window_t2

0xabb8,	// (0x0002560a) popup_preview_text_window_t3_ParamLimits

0xabb8,	// (0x0002560a) popup_preview_text_window_t3

0xabfd,	// (0x0002564f) popup_preview_text_window_t4_ParamLimits

0xabfd,	// (0x0002564f) popup_preview_text_window_t4

0x0004,

0xf93b,	// (0x0002a38d) popup_preview_text_window_t_ParamLimits

0xf93b,	// (0x0002a38d) popup_preview_text_window_t

0xac7b,	// (0x000256cd) scroll_pane_cp11

0x9c02,	// (0x00024654) bg_popup_preview_window_pane_g1

0xab05,	// (0x00025557) bg_popup_preview_window_pane_g2

0xab0f,	// (0x00025561) bg_popup_preview_window_pane_g3

0xab19,	// (0x0002556b) bg_popup_preview_window_pane_g4

0xab23,	// (0x00025575) bg_popup_preview_window_pane_g5

0xab2d,	// (0x0002557f) bg_popup_preview_window_pane_g6

0xab35,	// (0x00025587) bg_popup_preview_window_pane_g7

0xab3d,	// (0x0002558f) bg_popup_preview_window_pane_g8

0x5cd0,	// (0x00020722) aid_popup_width_pane

0x9465,	// (0x00023eb7) popup_midp_note_alarm_window_ParamLimits

0x9465,	// (0x00023eb7) popup_midp_note_alarm_window

0x80ca,	// (0x00022b1c) data_form_pane_ParamLimits

0x5299,	// (0x0001fceb) form_field_data_pane_g1

0x52a3,	// (0x0001fcf5) form_field_data_pane_t1_ParamLimits

0x80d6,	// (0x00022b28) input_focus_pane_ParamLimits

0x80e4,	// (0x00022b36) data_form_wide_pane_ParamLimits

0x52bd,	// (0x0001fd0f) form_field_data_wide_pane_g1

0x52c9,	// (0x0001fd1b) form_field_data_wide_pane_t1_ParamLimits

0x7e47,	// (0x00022899) input_focus_pane_cp6_ParamLimits

0x8203,	// (0x00022c55) input_popup_find_pane_g1_ParamLimits

0x8203,	// (0x00022c55) input_popup_find_pane_g1

0x624b,	// (0x00020c9d) aid_navi_side_left_pane

0x6260,	// (0x00020cb2) aid_navi_side_right_pane

0xa514,	// (0x00024f66) bg_popup_window_pane_cp30_ParamLimits

0xa514,	// (0x00024f66) bg_popup_window_pane_cp30

0xa58e,	// (0x00024fe0) popup_midp_note_alarm_window_g1_ParamLimits

0xa58e,	// (0x00024fe0) popup_midp_note_alarm_window_g1

0xa5be,	// (0x00025010) popup_midp_note_alarm_window_t1_ParamLimits

0xa5be,	// (0x00025010) popup_midp_note_alarm_window_t1

0xa65f,	// (0x000250b1) popup_midp_note_alarm_window_t2_ParamLimits

0xa65f,	// (0x000250b1) popup_midp_note_alarm_window_t2

0xa70d,	// (0x0002515f) popup_midp_note_alarm_window_t3_ParamLimits

0xa70d,	// (0x0002515f) popup_midp_note_alarm_window_t3

0xa73f,	// (0x00025191) popup_midp_note_alarm_window_t4_ParamLimits

0xa73f,	// (0x00025191) popup_midp_note_alarm_window_t4

0xa765,	// (0x000251b7) popup_midp_note_alarm_window_t5_ParamLimits

0xa765,	// (0x000251b7) popup_midp_note_alarm_window_t5

0x000a,

0xf8d8,	// (0x0002a32a) popup_midp_note_alarm_window_t_ParamLimits

0xf8d8,	// (0x0002a32a) popup_midp_note_alarm_window_t

0xa811,	// (0x00025263) wait_bar_pane_cp1_ParamLimits

0xa811,	// (0x00025263) wait_bar_pane_cp1

0x776f,	// (0x000221c1) wait_anim_pane_copy1

0x776f,	// (0x000221c1) wait_border_pane_copy1

0xa1f9,	// (0x00024c4b) wait_border_pane_g1_copy1

0x52e3,	// (0x0001fd35) form_field_popup_pane_g1

0x52eb,	// (0x0001fd3d) form_field_popup_pane_t1_ParamLimits

0x80d6,	// (0x00022b28) input_focus_pane_cp7_ParamLimits

0x8110,	// (0x00022b62) list_form_pane_ParamLimits

0x5305,	// (0x0001fd57) form_field_popup_wide_pane_g1

0x530d,	// (0x0001fd5f) form_field_popup_wide_pane_t1_ParamLimits

0x80d6,	// (0x00022b28) input_focus_pane_cp8_ParamLimits

0x811c,	// (0x00022b6e) list_form_wide_pane_ParamLimits

0xb370,	// (0x00025dc2) aid_size_cell_graphic_pane

0x5399,	// (0x0001fdeb) data_form_pane_t1_ParamLimits

0x55ff,	// (0x00020051) data_form_wide_pane_t1_ParamLimits

0x97b0,	// (0x00024202) bg_status_flat_pane

0x77af,	// (0x00022201) title_pane_t1_ParamLimits

0x7817,	// (0x00022269) title_pane_t2_ParamLimits

0x783d,	// (0x0002228f) title_pane_t3_ParamLimits

0xf59b,	// (0x00029fed) title_pane_t_ParamLimits

0x86db,	// (0x0002312d) level_1_signal_ParamLimits

0x86e8,	// (0x0002313a) level_2_signal_ParamLimits

0x86f5,	// (0x00023147) level_3_signal_ParamLimits

0x8702,	// (0x00023154) level_4_signal_ParamLimits

0x870f,	// (0x00023161) level_5_signal_ParamLimits

0x871c,	// (0x0002316e) level_6_signal_ParamLimits

0x8729,	// (0x0002317b) level_7_signal_ParamLimits

0x86db,	// (0x0002312d) level_1_battery_ParamLimits

0x86e8,	// (0x0002313a) level_2_battery_ParamLimits

0x86f5,	// (0x00023147) level_3_battery_ParamLimits

0x8702,	// (0x00023154) level_4_battery_ParamLimits

0x870f,	// (0x00023161) level_5_battery_ParamLimits

0x871c,	// (0x0002316e) level_6_battery_ParamLimits

0x8729,	// (0x0002317b) level_7_battery_ParamLimits

0xa419,	// (0x00024e6b) bg_status_flat_pane_g1

0xa421,	// (0x00024e73) bg_status_flat_pane_g2

0xa429,	// (0x00024e7b) bg_status_flat_pane_g3

0xa431,	// (0x00024e83) bg_status_flat_pane_g4

0xa439,	// (0x00024e8b) bg_status_flat_pane_g5

0xa441,	// (0x00024e93) bg_status_flat_pane_g6

0xa449,	// (0x00024e9b) bg_status_flat_pane_g7

0x7865,	// (0x000222b7) tabs_3_active_pane_t1_ParamLimits

0x7865,	// (0x000222b7) tabs_3_passive_pane_t1_ParamLimits

0x787f,	// (0x000222d1) tabs_4_active_pane_t1_ParamLimits

0x787f,	// (0x000222d1) tabs_4_1_passive_pane_t1_ParamLimits

0x829a,	// (0x00022cec) tabs_2_active_pane_t1_ParamLimits

0x829a,	// (0x00022cec) tabs_2_passive_pane_t1_ParamLimits

0x82ac,	// (0x00022cfe) bg_active_tab_pane_cp4_ParamLimits

0x82ba,	// (0x00022d0c) tabs_2_long_active_pane_t1_ParamLimits

0x82cd,	// (0x00022d1f) bg_passive_tab_pane_cp4_ParamLimits

0x6799,	// (0x000211eb) list_single_midp_graphic_pane_t1_ParamLimits

0x82ac,	// (0x00022cfe) bg_active_tab_pane_cp5_ParamLimits

0x82d9,	// (0x00022d2b) tabs_3_long_active_pane_t1_ParamLimits

0x82cd,	// (0x00022d1f) bg_passive_tab_pane_cp5_ParamLimits

0x6799,	// (0x000211eb) list_single_midp_graphic_pane_t1

0x97b0,	// (0x00024202) bg_status_flat_pane_ParamLimits

0x987b,	// (0x000242cd) indicator_pane_cp2_ParamLimits

0x987b,	// (0x000242cd) indicator_pane_cp2

0x99bd,	// (0x0002440f) navi_pane_srt_ParamLimits

0x99bd,	// (0x0002440f) navi_pane_srt

0x99e1,	// (0x00024433) popup_clock_digital_analogue_window_cp1

0x792f,	// (0x00022381) indicator_pane_t1

0x8d40,	// (0x00023792) copy_highlight_pane

0x8d40,	// (0x00023792) cursor_graphics_pane

0x8d40,	// (0x00023792) graphic_within_text_pane

0x8d40,	// (0x00023792) link_highlight_pane

0xac3e,	// (0x00025690) popup_preview_text_window_t5_ParamLimits

0xac3e,	// (0x00025690) popup_preview_text_window_t5

0x8e70,	// (0x000238c2) cursor_digital_pane

0x8e70,	// (0x000238c2) cursor_primary_pane

0x8e81,	// (0x000238d3) cursor_primary_small_pane

0x8e89,	// (0x000238db) cursor_secondary_pane

0x8e91,	// (0x000238e3) cursor_title_pane

0x8e70,	// (0x000238c2) link_highlight_digital_pane

0x8e78,	// (0x000238ca) link_highlight_primary_pane

0x8e81,	// (0x000238d3) link_highlight_primary_small_pane

0x8e89,	// (0x000238db) link_highlight_secondary_pane

0x8e91,	// (0x000238e3) link_highlight_title_pane

0x8e70,	// (0x000238c2) copy_highlight_digital_pane

0x8e70,	// (0x000238c2) copy_highlight_primary_pane

0x8e81,	// (0x000238d3) copy_highlight_primary_small_pane

0x8e89,	// (0x000238db) copy_highlight_secondary_pane

0x8e91,	// (0x000238e3) copy_highlight_title_pane

0x8e89,	// (0x000238db) graphic_text_digital_pane

0xa4b7,	// (0x00024f09) graphic_text_primary_pane

0xa4c0,	// (0x00024f12) graphic_text_primary_small_pane

0x8e81,	// (0x000238d3) graphic_text_secondary_pane

0x8e70,	// (0x000238c2) graphic_text_title_pane

0x8e99,	// (0x000238eb) cursor_primary_pane_g1

0xa4a9,	// (0x00024efb) cursor_text_primary_t1

0xa491,	// (0x00024ee3) cursor_primary_small_pane_g1

0xa49b,	// (0x00024eed) cursor_text_primary_small_t1

0xa479,	// (0x00024ecb) cursor_primary_small_pane_g1_copy1

0xa483,	// (0x00024ed5) cursor_text_primary_small_t1_copy1

0xa461,	// (0x00024eb3) cursor_text_title_t1

0xa46f,	// (0x00024ec1) cursor_title_pane_g1

0x8e99,	// (0x000238eb) cursor_digital_pane_g1

0x8ea3,	// (0x000238f5) cursor_text_digital_t1

0x8eb1,	// (0x00023903) link_highlight_primary_pane_g1

0xa40a,	// (0x00024e5c) link_highlight_primary_pane_t1

0x8eb1,	// (0x00023903) link_highlight_primary_small_pane_g1

0x8eb9,	// (0x0002390b) link_highlight_primary_small_pane_t1

0x8ec8,	// (0x0002391a) link_highlight_secondary_pane_g1

0x8ed0,	// (0x00023922) link_highlight_secondary_pane_t1

0xa37e,	// (0x00024dd0) link_highlight_title_pane_g1

0xa386,	// (0x00024dd8) link_highlight_title_pane_t1

0xa367,	// (0x00024db9) link_highlight_digital_pane_g1

0xa36f,	// (0x00024dc1) link_highlight_digital_pane_t1

0xa22f,	// (0x00024c81) copy_highlight_primary_pane_g1

0xa246,	// (0x00024c98) copy_highlight_primary_pane_t1

0xa22f,	// (0x00024c81) copy_highlight_primary_small_pane_g1

0xa237,	// (0x00024c89) copy_highlight_primary_small_pane_t1

0x8edf,	// (0x00023931) copy_highlight_secondary_pane_g1

0x8ee7,	// (0x00023939) copy_highlight_secondary_pane_t1

0xa218,	// (0x00024c6a) copy_highlight_title_pane_g1

0xa220,	// (0x00024c72) copy_highlight_title_pane_t1

0xa22f,	// (0x00024c81) copy_highlight_digital_pane_g1

0xb540,	// (0x00025f92) copy_highlight_digital_pane_t1

0xb494,	// (0x00025ee6) graphic_text_primary_pane_g1

0xb524,	// (0x00025f76) graphic_text_primary_pane_t1

0xb532,	// (0x00025f84) graphic_text_primary_pane_t2

0x0001,

0xfa07,	// (0x0002a459) graphic_text_primary_pane_t

0xb500,	// (0x00025f52) graphic_text_primary_small_pane_g1

0xb508,	// (0x00025f5a) graphic_text_primary_small_pane_t1

0xb516,	// (0x00025f68) graphic_text_primary_small_pane_t2

0x0001,

0xfa02,	// (0x0002a454) graphic_text_primary_small_pane_t

0xb4dc,	// (0x00025f2e) graphic_text_secondary_pane_g1

0xb4e4,	// (0x00025f36) graphic_text_secondary_pane_t1

0xb4f2,	// (0x00025f44) graphic_text_secondary_pane_t2

0x0001,

0xf9fd,	// (0x0002a44f) graphic_text_secondary_pane_t

0xb4b8,	// (0x00025f0a) graphic_text_title_pane_g1

0xb4c0,	// (0x00025f12) graphic_text_title_pane_t1

0xb4ce,	// (0x00025f20) graphic_text_title_pane_t2

0x0001,

0xf9f8,	// (0x0002a44a) graphic_text_title_pane_t

0xb494,	// (0x00025ee6) graphic_text_digital_pane_g1

0xb49c,	// (0x00025eee) graphic_text_digital_pane_t1

0xb4aa,	// (0x00025efc) graphic_text_digital_pane_t2

0x0001,

0xf9f3,	// (0x0002a445) graphic_text_digital_pane_t

0x784f,	// (0x000222a1) navi_icon_pane_srt_ParamLimits

0x784f,	// (0x000222a1) navi_icon_pane_srt

0x776f,	// (0x000221c1) navi_midp_pane_srt

0x776f,	// (0x000221c1) navi_navi_pane_srt

0x784f,	// (0x000222a1) navi_text_pane_srt_ParamLimits

0x784f,	// (0x000222a1) navi_text_pane_srt

0xb45f,	// (0x00025eb1) navi_navi_icon_text_pane_srt

0xb467,	// (0x00025eb9) navi_navi_pane_srt_g1_ParamLimits

0xb467,	// (0x00025eb9) navi_navi_pane_srt_g1

0xb479,	// (0x00025ecb) navi_navi_pane_srt_g2_ParamLimits

0xb479,	// (0x00025ecb) navi_navi_pane_srt_g2

0x0001,

0xf9ee,	// (0x0002a440) navi_navi_pane_srt_g_ParamLimits

0xf9ee,	// (0x0002a440) navi_navi_pane_srt_g

0xb48b,	// (0x00025edd) navi_navi_tabs_pane_srt

0xb45f,	// (0x00025eb1) navi_navi_text_pane_srt

0xb45f,	// (0x00025eb1) navi_navi_volume_pane_srt

0xb450,	// (0x00025ea2) navi_navi_text_pane_srt_t1

0x6af3,	// (0x00021545) navi_navi_volume_pane_srt_g1

0x6afb,	// (0x0002154d) volume_small_pane_srt_ParamLimits

0x6afb,	// (0x0002154d) volume_small_pane_srt

0x6532,	// (0x00020f84) volume_small_pane_srt_g1_ParamLimits

0x6532,	// (0x00020f84) volume_small_pane_srt_g1

0x6542,	// (0x00020f94) volume_small_pane_srt_g2_ParamLimits

0x6542,	// (0x00020f94) volume_small_pane_srt_g2

0x6553,	// (0x00020fa5) volume_small_pane_srt_g3_ParamLimits

0x6553,	// (0x00020fa5) volume_small_pane_srt_g3

0x6564,	// (0x00020fb6) volume_small_pane_srt_g4_ParamLimits

0x6564,	// (0x00020fb6) volume_small_pane_srt_g4

0x6575,	// (0x00020fc7) volume_small_pane_srt_g5_ParamLimits

0x6575,	// (0x00020fc7) volume_small_pane_srt_g5

0x6586,	// (0x00020fd8) volume_small_pane_srt_g6_ParamLimits

0x6586,	// (0x00020fd8) volume_small_pane_srt_g6

0x6597,	// (0x00020fe9) volume_small_pane_srt_g7_ParamLimits

0x6597,	// (0x00020fe9) volume_small_pane_srt_g7

0x65a8,	// (0x00020ffa) volume_small_pane_srt_g8_ParamLimits

0x65a8,	// (0x00020ffa) volume_small_pane_srt_g8

0x65b9,	// (0x0002100b) volume_small_pane_srt_g9_ParamLimits

0x65b9,	// (0x0002100b) volume_small_pane_srt_g9

0x65ca,	// (0x0002101c) volume_small_pane_srt_g10_ParamLimits

0x65ca,	// (0x0002101c) volume_small_pane_srt_g10

0x0009,

0xf79d,	// (0x0002a1ef) volume_small_pane_srt_g_ParamLimits

0xf79d,	// (0x0002a1ef) volume_small_pane_srt_g

0x7c36,	// (0x00022688) query_popup_data_pane_cp2

0xb436,	// (0x00025e88) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb436,	// (0x00025e88) navi_navi_icon_text_pane_srt_t1

0xa4b7,	// (0x00024f09) navi_tabs_2_long_pane_srt

0xa4b7,	// (0x00024f09) navi_tabs_2_pane_srt

0xa4b7,	// (0x00024f09) navi_tabs_3_long_pane_srt

0xa4b7,	// (0x00024f09) navi_tabs_3_pane_srt

0xa4b7,	// (0x00024f09) navi_tabs_4_pane_srt

0x6ad3,	// (0x00021525) tabs_2_active_pane_srt_ParamLimits

0x6ad3,	// (0x00021525) tabs_2_active_pane_srt

0x6ae3,	// (0x00021535) tabs_2_passive_pane_srt_ParamLimits

0x6ae3,	// (0x00021535) tabs_2_passive_pane_srt

0x90c6,	// (0x00023b18) bg_passive_tab_pane_cp1_srt_ParamLimits

0x90c6,	// (0x00023b18) bg_passive_tab_pane_cp1_srt

0xb402,	// (0x00025e54) bg_passive_tab_pane_g1_cp1_srt

0x8989,	// (0x000233db) bg_passive_tab_pane_g2_cp1_srt

0xb40b,	// (0x00025e5d) bg_passive_tab_pane_g3_cp1_srt

0x784f,	// (0x000222a1) bg_active_tab_pane_cp1_srt_ParamLimits

0x784f,	// (0x000222a1) bg_active_tab_pane_cp1_srt

0xb414,	// (0x00025e66) tabs_2_active_pane_srt_g1

0xb41c,	// (0x00025e6e) tabs_2_active_pane_srt_t1_ParamLimits

0xb41c,	// (0x00025e6e) tabs_2_active_pane_srt_t1

0xb402,	// (0x00025e54) bg_active_tab_pane_g1_cp1_srt

0x8989,	// (0x000233db) bg_active_tab_pane_g2_cp1_srt

0xb40b,	// (0x00025e5d) bg_active_tab_pane_g3_cp1_srt

0x6aa0,	// (0x000214f2) tabs_3_active_pane_srt_ParamLimits

0x6aa0,	// (0x000214f2) tabs_3_active_pane_srt

0x6ab1,	// (0x00021503) tabs_3_passive_pane_cp_srt_ParamLimits

0x6ab1,	// (0x00021503) tabs_3_passive_pane_cp_srt

0x6ac2,	// (0x00021514) tabs_3_passive_pane_srt_ParamLimits

0x6ac2,	// (0x00021514) tabs_3_passive_pane_srt

0x90c6,	// (0x00023b18) bg_passive_tab_pane_cp2_srt_ParamLimits

0x90c6,	// (0x00023b18) bg_passive_tab_pane_cp2_srt

0x8ef6,	// (0x00023948) bg_passive_tab_pane_g1_cp2_srt

0x8989,	// (0x000233db) bg_passive_tab_pane_g2_cp2_srt

0x8eff,	// (0x00023951) bg_passive_tab_pane_g3_cp2_srt

0x784f,	// (0x000222a1) bg_active_tab_pane_cp2_srt_ParamLimits

0x784f,	// (0x000222a1) bg_active_tab_pane_cp2_srt

0xb3e8,	// (0x00025e3a) tabs_3_active_pane_srt_g1

0xb3f0,	// (0x00025e42) tabs_3_active_pane_srt_t1_ParamLimits

0xb3f0,	// (0x00025e42) tabs_3_active_pane_srt_t1

0x8ef6,	// (0x00023948) bg_active_tab_pane_g1_cp2_srt

0x8989,	// (0x000233db) bg_active_tab_pane_g2_cp2_srt

0x8eff,	// (0x00023951) bg_active_tab_pane_g3_cp2_srt

0x6a58,	// (0x000214aa) tabs_4_active_pane_srt_ParamLimits

0x6a58,	// (0x000214aa) tabs_4_active_pane_srt

0x6a6a,	// (0x000214bc) tabs_4_passive_pane_cp2_srt_ParamLimits

0x6a6a,	// (0x000214bc) tabs_4_passive_pane_cp2_srt

0x9054,	// (0x00023aa6) aid_size_cell_toolbar

0x82cd,	// (0x00022d1f) main_idle_act_pane_ParamLimits

0x928b,	// (0x00023cdd) popup_large_graphic_colour_window_ParamLimits

0x9632,	// (0x00024084) popup_toolbar_window_ParamLimits

0x9632,	// (0x00024084) popup_toolbar_window

0x5658,	// (0x000200aa) list_single_graphic_2heading_pane_ParamLimits

0x5658,	// (0x000200aa) list_single_graphic_2heading_pane

0x8489,	// (0x00022edb) aid_size_cell_apps_grid_lsc_pane

0x849b,	// (0x00022eed) aid_size_cell_apps_grid_prt_pane

0x90c6,	// (0x00023b18) bg_wml_button_pane_cp1_ParamLimits

0x90c6,	// (0x00023b18) bg_wml_button_pane_cp1

0x9ee0,	// (0x00024932) form_midp_field_text_pane_t1_ParamLimits

0x9cf4,	// (0x00024746) input_focus_pane_cp050_ParamLimits

0x9f0b,	// (0x0002495d) list_midp_form_text_pane_ParamLimits

0x9ebd,	// (0x0002490f) input_focus_pane_cp051_ParamLimits

0x9ed1,	// (0x00024923) list_midp_choice_pane_ParamLimits

0x9d85,	// (0x000247d7) list_single_2graphic_pane_cp3_ParamLimits

0x9d85,	// (0x000247d7) list_single_2graphic_pane_cp3

0x9d9e,	// (0x000247f0) list_single_midp_graphic_pane_ParamLimits

0x9d9e,	// (0x000247f0) list_single_midp_graphic_pane

0x54d5,	// (0x0001ff27) list_single_graphic_2heading_pane_g1_ParamLimits

0x54d5,	// (0x0001ff27) list_single_graphic_2heading_pane_g1

0x54e1,	// (0x0001ff33) list_single_graphic_2heading_pane_g4_ParamLimits

0x54e1,	// (0x0001ff33) list_single_graphic_2heading_pane_g4

0x54ed,	// (0x0001ff3f) list_single_graphic_2heading_pane_g5_ParamLimits

0x54ed,	// (0x0001ff3f) list_single_graphic_2heading_pane_g5

0x0002,

0xf7f0,	// (0x0002a242) list_single_graphic_2heading_pane_g_ParamLimits

0xf7f0,	// (0x0002a242) list_single_graphic_2heading_pane_g

0x54f9,	// (0x0001ff4b) list_single_graphic_2heading_pane_t1_ParamLimits

0x54f9,	// (0x0001ff4b) list_single_graphic_2heading_pane_t1

0x550d,	// (0x0001ff5f) list_single_graphic_2heading_pane_t2_ParamLimits

0x550d,	// (0x0001ff5f) list_single_graphic_2heading_pane_t2

0x5529,	// (0x0001ff7b) list_single_graphic_2heading_pane_t3_ParamLimits

0x5529,	// (0x0001ff7b) list_single_graphic_2heading_pane_t3

0x0002,

0xf7f7,	// (0x0002a249) list_single_graphic_2heading_pane_t_ParamLimits

0xf7f7,	// (0x0002a249) list_single_graphic_2heading_pane_t

0x9b40,	// (0x00024592) bg_popup_sub_pane_cp2

0x9b6a,	// (0x000245bc) grid_toobar_pane

0x6729,	// (0x0002117b) cell_toolbar_pane_ParamLimits

0x6729,	// (0x0002117b) cell_toolbar_pane

0x9ba6,	// (0x000245f8) cell_toolbar_pane_g1_ParamLimits

0x9ba6,	// (0x000245f8) cell_toolbar_pane_g1

0x9bba,	// (0x0002460c) cell_toolbar_pane_g2_ParamLimits

0x9bba,	// (0x0002460c) cell_toolbar_pane_g2

0x0001,

0xf805,	// (0x0002a257) cell_toolbar_pane_g_ParamLimits

0xf805,	// (0x0002a257) cell_toolbar_pane_g

0x9bdc,	// (0x0002462e) grid_highlight_pane_cp2_ParamLimits

0x9bdc,	// (0x0002462e) grid_highlight_pane_cp2

0x9bf6,	// (0x00024648) toolbar_button_pane

0x9c02,	// (0x00024654) toolbar_button_pane_g1

0x9c0a,	// (0x0002465c) toolbar_button_pane_g2

0x9c12,	// (0x00024664) toolbar_button_pane_g3

0x9c1a,	// (0x0002466c) toolbar_button_pane_g4

0x9c22,	// (0x00024674) toolbar_button_pane_g5

0x9c2a,	// (0x0002467c) toolbar_button_pane_g6

0x9c32,	// (0x00024684) toolbar_button_pane_g7

0x9c3a,	// (0x0002468c) toolbar_button_pane_g8

0x9c42,	// (0x00024694) toolbar_button_pane_g9

0x0009,

0xf80a,	// (0x0002a25c) toolbar_button_pane_g

0x6761,	// (0x000211b3) list_single_2graphic_pane_g1_cp3_ParamLimits

0x6761,	// (0x000211b3) list_single_2graphic_pane_g1_cp3

0x676d,	// (0x000211bf) list_single_2graphic_pane_g2_cp3_ParamLimits

0x676d,	// (0x000211bf) list_single_2graphic_pane_g2_cp3

0x8b6a,	// (0x000235bc) list_single_2graphic_pane_g3_cp3

0x13d6,	// (0x0001be28) list_single_2graphic_pane_g4_cp3_ParamLimits

0x13d6,	// (0x0001be28) list_single_2graphic_pane_g4_cp3

0x677e,	// (0x000211d0) list_single_2graphic_pane_t1_cp3_ParamLimits

0x677e,	// (0x000211d0) list_single_2graphic_pane_t1_cp3

0x8b5e,	// (0x000235b0) list_single_midp_graphic_pane_g2_ParamLimits

0x8b5e,	// (0x000235b0) list_single_midp_graphic_pane_g2

0x905c,	// (0x00023aae) aid_zoom_text_primary

0x54c5,	// (0x0001ff17) aid_zoom_text_secondary

0x8fb3,	// (0x00023a05) status_small_pane_g7_ParamLimits

0x8fb3,	// (0x00023a05) status_small_pane_g7

0x8fd6,	// (0x00023a28) status_small_pane_t1_ParamLimits

0x7786,	// (0x000221d8) title_pane_g2

0x0003,

0xf592,	// (0x00029fe4) title_pane_g

0x7cdf,	// (0x00022731) aid_size_cell_colour_1_pane_ParamLimits

0x7cdf,	// (0x00022731) aid_size_cell_colour_1_pane

0x7cf3,	// (0x00022745) aid_size_cell_colour_2_pane_ParamLimits

0x7cf3,	// (0x00022745) aid_size_cell_colour_2_pane

0x7d07,	// (0x00022759) aid_size_cell_colour_3_pane_ParamLimits

0x7d07,	// (0x00022759) aid_size_cell_colour_3_pane

0x7d1b,	// (0x0002276d) aid_size_cell_colour_4_pane_ParamLimits

0x7d1b,	// (0x0002276d) aid_size_cell_colour_4_pane

0x6187,	// (0x00020bd9) title_pane_stacon_g1_ParamLimits

0x6187,	// (0x00020bd9) title_pane_stacon_g1

0xa29d,	// (0x00024cef) popup_note_wait_window_g3_ParamLimits

0xa29d,	// (0x00024cef) popup_note_wait_window_g3

0xa314,	// (0x00024d66) popup_note_wait_window_t5_ParamLimits

0xa314,	// (0x00024d66) popup_note_wait_window_t5

0x776f,	// (0x000221c1) main_feb_china_hwr_fs_writing_pane

0x9152,	// (0x00023ba4) popup_feb_china_hwr_fs_window_ParamLimits

0x9152,	// (0x00023ba4) popup_feb_china_hwr_fs_window

0x67af,	// (0x00021201) aid_size_cell_hwr_fs_ParamLimits

0x67af,	// (0x00021201) aid_size_cell_hwr_fs

0x9cf4,	// (0x00024746) bg_popup_sub_pane_cp3_ParamLimits

0x9cf4,	// (0x00024746) bg_popup_sub_pane_cp3

0x67c4,	// (0x00021216) grid_hwr_fs_pane_ParamLimits

0x67c4,	// (0x00021216) grid_hwr_fs_pane

0x67dc,	// (0x0002122e) linegrid_hwr_fs_pane_ParamLimits

0x67dc,	// (0x0002122e) linegrid_hwr_fs_pane

0x67ec,	// (0x0002123e) cell_hwr_fs_pane_ParamLimits

0x67ec,	// (0x0002123e) cell_hwr_fs_pane

0x9d00,	// (0x00024752) linegrid_hwr_fs_pane_g1_ParamLimits

0x9d00,	// (0x00024752) linegrid_hwr_fs_pane_g1

0x9d0c,	// (0x0002475e) linegrid_hwr_fs_pane_g2_ParamLimits

0x9d0c,	// (0x0002475e) linegrid_hwr_fs_pane_g2

0x9d1e,	// (0x00024770) linegrid_hwr_fs_pane_g3_ParamLimits

0x9d1e,	// (0x00024770) linegrid_hwr_fs_pane_g3

0x6810,	// (0x00021262) linegrid_hwr_fs_pane_g4_ParamLimits

0x6810,	// (0x00021262) linegrid_hwr_fs_pane_g4

0x682e,	// (0x00021280) linegrid_hwr_fs_pane_g5_ParamLimits

0x682e,	// (0x00021280) linegrid_hwr_fs_pane_g5

0x0004,

0xf835,	// (0x0002a287) linegrid_hwr_fs_pane_g_ParamLimits

0xf835,	// (0x0002a287) linegrid_hwr_fs_pane_g

0x9d2a,	// (0x0002477c) cell_hwr_fs_pane_g1_ParamLimits

0x9d2a,	// (0x0002477c) cell_hwr_fs_pane_g1

0x9a77,	// (0x000244c9) cell_hwr_fs_pane_g2_ParamLimits

0x9a77,	// (0x000244c9) cell_hwr_fs_pane_g2

0x9d40,	// (0x00024792) cell_hwr_fs_pane_g3_ParamLimits

0x9d40,	// (0x00024792) cell_hwr_fs_pane_g3

0x9d4d,	// (0x0002479f) cell_hwr_fs_pane_g4_ParamLimits

0x9d4d,	// (0x0002479f) cell_hwr_fs_pane_g4

0x0003,

0xf840,	// (0x0002a292) cell_hwr_fs_pane_g_ParamLimits

0xf840,	// (0x0002a292) cell_hwr_fs_pane_g

0x6844,	// (0x00021296) cell_hwr_fs_pane_t1

0x776f,	// (0x000221c1) grid_highlight_pane_cp6

0x776f,	// (0x000221c1) main_idle_act2_pane

0x823f,	// (0x00022c91) aid_inside_area_popup_secondary

0xa94d,	// (0x0002539f) aid_inside_area_window_primary_ParamLimits

0xa94d,	// (0x0002539f) aid_inside_area_window_primary

0xb54f,	// (0x00025fa1) ai2_news_ticker_pane

0xb557,	// (0x00025fa9) aid_size_cell_ai1_link_ParamLimits

0xb557,	// (0x00025fa9) aid_size_cell_ai1_link

0xb571,	// (0x00025fc3) popup_ai2_data_window_ParamLimits

0xb571,	// (0x00025fc3) popup_ai2_data_window

0xb58f,	// (0x00025fe1) popup_ai2_link_window_ParamLimits

0xb58f,	// (0x00025fe1) popup_ai2_link_window

0x9cf4,	// (0x00024746) bg_popup_sub_pane_cp4_ParamLimits

0x9cf4,	// (0x00024746) bg_popup_sub_pane_cp4

0xb5a5,	// (0x00025ff7) grid_ai2_link_pane_ParamLimits

0xb5a5,	// (0x00025ff7) grid_ai2_link_pane

0xb5bc,	// (0x0002600e) popup_ai2_link_window_g1_ParamLimits

0xb5bc,	// (0x0002600e) popup_ai2_link_window_g1

0xb5c8,	// (0x0002601a) popup_ai2_link_window_g2_ParamLimits

0xb5c8,	// (0x0002601a) popup_ai2_link_window_g2

0x0001,

0xfa0c,	// (0x0002a45e) popup_ai2_link_window_g_ParamLimits

0xfa0c,	// (0x0002a45e) popup_ai2_link_window_g

0xb5d9,	// (0x0002602b) ai2_mp_button_pane

0xb5e1,	// (0x00026033) ai2_mp_volume_pane

0x9ebd,	// (0x0002490f) bg_popup_sub_pane_cp5_ParamLimits

0x9ebd,	// (0x0002490f) bg_popup_sub_pane_cp5

0xb5e9,	// (0x0002603b) heading_ai2_gene_pane_ParamLimits

0xb5e9,	// (0x0002603b) heading_ai2_gene_pane

0xb5f5,	// (0x00026047) list_ai2_gene_pane_ParamLimits

0xb5f5,	// (0x00026047) list_ai2_gene_pane

0xb63d,	// (0x0002608f) cell_ai2_link_pane_ParamLimits

0xb63d,	// (0x0002608f) cell_ai2_link_pane

0xb653,	// (0x000260a5) cell_ai2_link_pane_g1

0x776f,	// (0x000221c1) grid_highlight_pane_cp7

0x6b10,	// (0x00021562) ai2_mp_volume_pane_g1

0xb726,	// (0x00026178) ai2_mp_volume_pane_g2

0xb69b,	// (0x000260ed) list_ai2_gene_pane_t1

0xb72e,	// (0x00026180) ai2_mp_volume_pane_g3

0x0002,

0xfa25,	// (0x0002a477) ai2_mp_volume_pane_g

0x6b18,	// (0x0002156a) volume_small_pane_cp3

0xb736,	// (0x00026188) aid_size_cell_ai2_button

0xb73e,	// (0x00026190) grid_ai2_button_pane

0xb747,	// (0x00026199) cell_ai2_button_pane_ParamLimits

0xb747,	// (0x00026199) cell_ai2_button_pane

0x7765,	// (0x000221b7) cell_ai2_button_pane_g1

0x776f,	// (0x000221c1) grid_highlight_pane_cp8

0xb6e6,	// (0x00026138) ai2_gene_pane_t1_ParamLimits

0xb6e6,	// (0x00026138) ai2_gene_pane_t1

0x904a,	// (0x00023a9c) aid_height_parent_landscape

0xaff9,	// (0x00025a4b) aid_height_set_list

0xb00a,	// (0x00025a5c) aid_size_parent

0xb370,	// (0x00025dc2) aid_size_cell_graphic_pane_ParamLimits

0xb605,	// (0x00026057) popup_ai2_data_window_g1_ParamLimits

0xb605,	// (0x00026057) popup_ai2_data_window_g1

0xb611,	// (0x00026063) ai2_news_ticker_pane_g1

0xb619,	// (0x0002606b) ai2_news_ticker_pane_g2

0x0001,

0xfa11,	// (0x0002a463) ai2_news_ticker_pane_g

0xb621,	// (0x00026073) ai2_news_ticker_pane_t1

0xb62f,	// (0x00026081) ai2_news_ticker_pane_t2

0x0001,

0xfa16,	// (0x0002a468) ai2_news_ticker_pane_t

0xb65c,	// (0x000260ae) heading_ai2_gene_pane_g1

0xb664,	// (0x000260b6) heading_ai2_gene_pane_t1_ParamLimits

0xb664,	// (0x000260b6) heading_ai2_gene_pane_t1

0xb679,	// (0x000260cb) list_highlight_pane_cp6

0xb681,	// (0x000260d3) ai2_gene_pane_ParamLimits

0xb681,	// (0x000260d3) ai2_gene_pane

0xb6a9,	// (0x000260fb) list_ai2_gene_pane_t2

0x0001,

0xfa1b,	// (0x0002a46d) list_ai2_gene_pane_t

0xb6b7,	// (0x00026109) list_highlight_pane_cp8_ParamLimits

0xb6b7,	// (0x00026109) list_highlight_pane_cp8

0xb6c8,	// (0x0002611a) ai2_gene_pane_g1_ParamLimits

0xb6c8,	// (0x0002611a) ai2_gene_pane_g1

0xb6da,	// (0x0002612c) ai2_gene_pane_g2_ParamLimits

0xb6da,	// (0x0002612c) ai2_gene_pane_g2

0x0001,

0xfa20,	// (0x0002a472) ai2_gene_pane_g_ParamLimits

0xfa20,	// (0x0002a472) ai2_gene_pane_g

0x806c,	// (0x00022abe) scroll_pane_cp12

0x66e8,	// (0x0002113a) control_pane_t3_ParamLimits

0x66e8,	// (0x0002113a) control_pane_t3

0x8fc7,	// (0x00023a19) status_small_pane_g8_ParamLimits

0x8fc7,	// (0x00023a19) status_small_pane_g8

0x9250,	// (0x00023ca2) popup_find_window_ParamLimits

0x947b,	// (0x00023ecd) popup_note_image_window_ParamLimits

0x5541,	// (0x0001ff93) list_double2_graphic_pane_vc_g1_ParamLimits

0x5541,	// (0x0001ff93) list_double2_graphic_pane_vc_g1

0x554d,	// (0x0001ff9f) list_double2_graphic_pane_vc_g2_ParamLimits

0x554d,	// (0x0001ff9f) list_double2_graphic_pane_vc_g2

0x5559,	// (0x0001ffab) list_double2_graphic_pane_vc_g3_ParamLimits

0x5559,	// (0x0001ffab) list_double2_graphic_pane_vc_g3

0x0002,

0xf7fe,	// (0x0002a250) list_double2_graphic_pane_vc_g_ParamLimits

0xf7fe,	// (0x0002a250) list_double2_graphic_pane_vc_g

0x5565,	// (0x0001ffb7) list_double2_graphic_pane_vc_t1_ParamLimits

0x5565,	// (0x0001ffb7) list_double2_graphic_pane_vc_t1

0x54e1,	// (0x0001ff33) list_single_heading_pane_vc_g1_ParamLimits

0x54e1,	// (0x0001ff33) list_single_heading_pane_vc_g1

0x54ed,	// (0x0001ff3f) list_single_heading_pane_vc_g2_ParamLimits

0x54ed,	// (0x0001ff3f) list_single_heading_pane_vc_g2

0x0001,

0xf81f,	// (0x0002a271) list_single_heading_pane_vc_g_ParamLimits

0xf81f,	// (0x0002a271) list_single_heading_pane_vc_g

0x557b,	// (0x0001ffcd) list_single_heading_pane_vc_t1_ParamLimits

0x557b,	// (0x0001ffcd) list_single_heading_pane_vc_t1

0x5591,	// (0x0001ffe3) list_single_heading_pane_vc_t2_ParamLimits

0x5591,	// (0x0001ffe3) list_single_heading_pane_vc_t2

0x0001,

0xf824,	// (0x0002a276) list_single_heading_pane_vc_t_ParamLimits

0xf824,	// (0x0002a276) list_single_heading_pane_vc_t

0x9c4a,	// (0x0002469c) list_setting_number_pane_vc_g1_ParamLimits

0x9c4a,	// (0x0002469c) list_setting_number_pane_vc_g1

0x9c56,	// (0x000246a8) list_setting_number_pane_vc_g2_ParamLimits

0x9c56,	// (0x000246a8) list_setting_number_pane_vc_g2

0x0001,

0xf829,	// (0x0002a27b) list_setting_number_pane_vc_g_ParamLimits

0xf829,	// (0x0002a27b) list_setting_number_pane_vc_g

0x9c62,	// (0x000246b4) list_setting_number_pane_vc_t1_ParamLimits

0x9c62,	// (0x000246b4) list_setting_number_pane_vc_t1

0x9c76,	// (0x000246c8) list_setting_number_pane_vc_t2_ParamLimits

0x9c76,	// (0x000246c8) list_setting_number_pane_vc_t2

0x9c92,	// (0x000246e4) list_setting_number_pane_vc_t3_ParamLimits

0x9c92,	// (0x000246e4) list_setting_number_pane_vc_t3

0x0002,

0xf82e,	// (0x0002a280) list_setting_number_pane_vc_t_ParamLimits

0xf82e,	// (0x0002a280) list_setting_number_pane_vc_t

0x9cba,	// (0x0002470c) set_value_pane_vc_ParamLimits

0x9cba,	// (0x0002470c) set_value_pane_vc

0x5658,	// (0x000200aa) list_double2_graphic_pane_vc_ParamLimits

0x5658,	// (0x000200aa) list_double2_graphic_pane_vc

0xb1ee,	// (0x00025c40) list_double2_large_graphic_pane_vc_ParamLimits

0xb1ee,	// (0x00025c40) list_double2_large_graphic_pane_vc

0x5658,	// (0x000200aa) list_double2_pane_vc_ParamLimits

0x5658,	// (0x000200aa) list_double2_pane_vc

0x5658,	// (0x000200aa) list_double_graphic_heading_pane_vc_ParamLimits

0x5658,	// (0x000200aa) list_double_graphic_heading_pane_vc

0x5658,	// (0x000200aa) list_double_graphic_pane_vc_ParamLimits

0x5658,	// (0x000200aa) list_double_graphic_pane_vc

0x5658,	// (0x000200aa) list_double_heading_pane_vc_ParamLimits

0x5658,	// (0x000200aa) list_double_heading_pane_vc

0xb1ee,	// (0x00025c40) list_double_large_graphic_pane_vc_ParamLimits

0xb1ee,	// (0x00025c40) list_double_large_graphic_pane_vc

0x5658,	// (0x000200aa) list_double_number_pane_vc_ParamLimits

0x5658,	// (0x000200aa) list_double_number_pane_vc

0x5658,	// (0x000200aa) list_double_pane_vc_ParamLimits

0x5658,	// (0x000200aa) list_double_pane_vc

0x5658,	// (0x000200aa) list_double_time_pane_vc_ParamLimits

0x5658,	// (0x000200aa) list_double_time_pane_vc

0x5658,	// (0x000200aa) list_setting_number_pane_vc_ParamLimits

0x5658,	// (0x000200aa) list_setting_number_pane_vc

0x5658,	// (0x000200aa) list_setting_pane_vc_ParamLimits

0x5658,	// (0x000200aa) list_setting_pane_vc

0x5658,	// (0x000200aa) list_single_graphic_heading_pane_vc_ParamLimits

0x5658,	// (0x000200aa) list_single_graphic_heading_pane_vc

0x5658,	// (0x000200aa) list_single_heading_pane_vc_ParamLimits

0x5658,	// (0x000200aa) list_single_heading_pane_vc

0xb216,	// (0x00025c68) list_single_number_heading_pane_vc_ParamLimits

0xb216,	// (0x00025c68) list_single_number_heading_pane_vc

0x5541,	// (0x0001ff93) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x5541,	// (0x0001ff93) list_double_graphic_heading_pane_vc_g1

0x54e1,	// (0x0001ff33) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x54e1,	// (0x0001ff33) list_double_graphic_heading_pane_vc_g2

0x54ed,	// (0x0001ff3f) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x54ed,	// (0x0001ff3f) list_double_graphic_heading_pane_vc_g3

0x0002,

0xfa2c,	// (0x0002a47e) list_double_graphic_heading_pane_vc_g_ParamLimits

0xfa2c,	// (0x0002a47e) list_double_graphic_heading_pane_vc_g

0x569d,	// (0x000200ef) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x569d,	// (0x000200ef) list_double_graphic_heading_pane_vc_t1

0x557b,	// (0x0001ffcd) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x557b,	// (0x0001ffcd) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa33,	// (0x0002a485) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa33,	// (0x0002a485) list_double_graphic_heading_pane_vc_t

0x9c4a,	// (0x0002469c) list_setting_pane_vc_g1_ParamLimits

0x9c4a,	// (0x0002469c) list_setting_pane_vc_g1

0x9c56,	// (0x000246a8) list_setting_pane_vc_g2_ParamLimits

0x9c56,	// (0x000246a8) list_setting_pane_vc_g2

0x0001,

0xf829,	// (0x0002a27b) list_setting_pane_vc_g_ParamLimits

0xf829,	// (0x0002a27b) list_setting_pane_vc_g

0xb9c5,	// (0x00026417) list_setting_pane_vc_t1_ParamLimits

0xb9c5,	// (0x00026417) list_setting_pane_vc_t1

0xb9d9,	// (0x0002642b) list_setting_pane_vc_t2_ParamLimits

0xb9d9,	// (0x0002642b) list_setting_pane_vc_t2

0x0001,

0xfa61,	// (0x0002a4b3) list_setting_pane_vc_t_ParamLimits

0xfa61,	// (0x0002a4b3) list_setting_pane_vc_t

0x9cba,	// (0x0002470c) set_value_pane_cp_vc_ParamLimits

0x9cba,	// (0x0002470c) set_value_pane_cp_vc

0x54e1,	// (0x0001ff33) list_single_number_heading_pane_vc_g1_ParamLimits

0x54e1,	// (0x0001ff33) list_single_number_heading_pane_vc_g1

0x54ed,	// (0x0001ff3f) list_single_number_heading_pane_vc_g2_ParamLimits

0x54ed,	// (0x0001ff3f) list_single_number_heading_pane_vc_g2

0x0001,

0xf81f,	// (0x0002a271) list_single_number_heading_pane_vc_g_ParamLimits

0xf81f,	// (0x0002a271) list_single_number_heading_pane_vc_g

0x557b,	// (0x0001ffcd) list_single_number_heading_pane_vc_t1_ParamLimits

0x557b,	// (0x0001ffcd) list_single_number_heading_pane_vc_t1

0x56b1,	// (0x00020103) list_single_number_heading_pane_vc_t2_ParamLimits

0x56b1,	// (0x00020103) list_single_number_heading_pane_vc_t2

0x56c5,	// (0x00020117) list_single_number_heading_pane_vc_t3_ParamLimits

0x56c5,	// (0x00020117) list_single_number_heading_pane_vc_t3

0x0002,

0xfa66,	// (0x0002a4b8) list_single_number_heading_pane_vc_t_ParamLimits

0xfa66,	// (0x0002a4b8) list_single_number_heading_pane_vc_t

0x5541,	// (0x0001ff93) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x5541,	// (0x0001ff93) list_single_graphic_heading_pane_vc_g1

0x54e1,	// (0x0001ff33) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x54e1,	// (0x0001ff33) list_single_graphic_heading_pane_vc_g4

0x54ed,	// (0x0001ff3f) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x54ed,	// (0x0001ff3f) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa2c,	// (0x0002a47e) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa2c,	// (0x0002a47e) list_single_graphic_heading_pane_vc_g

0x557b,	// (0x0001ffcd) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x557b,	// (0x0001ffcd) list_single_graphic_heading_pane_vc_t1

0x56d7,	// (0x00020129) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x56d7,	// (0x00020129) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa6d,	// (0x0002a4bf) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa6d,	// (0x0002a4bf) list_single_graphic_heading_pane_vc_t

0x54e1,	// (0x0001ff33) list_double2_pane_vc_g1_ParamLimits

0x54e1,	// (0x0001ff33) list_double2_pane_vc_g1

0x54ed,	// (0x0001ff3f) list_double2_pane_vc_g2_ParamLimits

0x54ed,	// (0x0001ff3f) list_double2_pane_vc_g2

0x0001,

0xf81f,	// (0x0002a271) list_double2_pane_vc_g_ParamLimits

0xf81f,	// (0x0002a271) list_double2_pane_vc_g

0x56eb,	// (0x0002013d) list_double2_pane_vc_t1_ParamLimits

0x56eb,	// (0x0002013d) list_double2_pane_vc_t1

0x5701,	// (0x00020153) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x5701,	// (0x00020153) list_double2_large_graphic_pane_vc_g1

0x570d,	// (0x0002015f) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x570d,	// (0x0002015f) list_double2_large_graphic_pane_vc_g2

0x5719,	// (0x0002016b) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x5719,	// (0x0002016b) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa72,	// (0x0002a4c4) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa72,	// (0x0002a4c4) list_double2_large_graphic_pane_vc_g

0x5725,	// (0x00020177) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x5725,	// (0x00020177) list_double2_large_graphic_pane_vc_t1

0x573b,	// (0x0002018d) list_double_time_pane_vc_g1_ParamLimits

0x573b,	// (0x0002018d) list_double_time_pane_vc_g1

0x5747,	// (0x00020199) list_double_time_pane_vc_g2_ParamLimits

0x5747,	// (0x00020199) list_double_time_pane_vc_g2

0x0001,

0xfa79,	// (0x0002a4cb) list_double_time_pane_vc_g_ParamLimits

0xfa79,	// (0x0002a4cb) list_double_time_pane_vc_g

0x5753,	// (0x000201a5) list_double_time_pane_vc_t1_ParamLimits

0x5753,	// (0x000201a5) list_double_time_pane_vc_t1

0x576c,	// (0x000201be) list_double_time_pane_vc_t2_ParamLimits

0x576c,	// (0x000201be) list_double_time_pane_vc_t2

0x57ac,	// (0x000201fe) list_double_time_pane_vc_t3_ParamLimits

0x57ac,	// (0x000201fe) list_double_time_pane_vc_t3

0x57c4,	// (0x00020216) list_double_time_pane_vc_t4_ParamLimits

0x57c4,	// (0x00020216) list_double_time_pane_vc_t4

0x0003,

0xfa7e,	// (0x0002a4d0) list_double_time_pane_vc_t_ParamLimits

0xfa7e,	// (0x0002a4d0) list_double_time_pane_vc_t

0x54e1,	// (0x0001ff33) list_double_pane_vc_g1_ParamLimits

0x54e1,	// (0x0001ff33) list_double_pane_vc_g1

0x54ed,	// (0x0001ff3f) list_double_pane_vc_g2_ParamLimits

0x54ed,	// (0x0001ff3f) list_double_pane_vc_g2

0x0001,

0xf81f,	// (0x0002a271) list_double_pane_vc_g_ParamLimits

0xf81f,	// (0x0002a271) list_double_pane_vc_g

0x57d8,	// (0x0002022a) list_double_pane_vc_t1_ParamLimits

0x57d8,	// (0x0002022a) list_double_pane_vc_t1

0x57ea,	// (0x0002023c) list_double_pane_vc_t2_ParamLimits

0x57ea,	// (0x0002023c) list_double_pane_vc_t2

0x0001,

0xfa87,	// (0x0002a4d9) list_double_pane_vc_t_ParamLimits

0xfa87,	// (0x0002a4d9) list_double_pane_vc_t

0x54e1,	// (0x0001ff33) list_double_number_pane_vc_g1_ParamLimits

0x54e1,	// (0x0001ff33) list_double_number_pane_vc_g1

0x54ed,	// (0x0001ff3f) list_double_number_pane_vc_g2_ParamLimits

0x54ed,	// (0x0001ff3f) list_double_number_pane_vc_g2

0x0001,

0xf81f,	// (0x0002a271) list_double_number_pane_vc_g_ParamLimits

0xf81f,	// (0x0002a271) list_double_number_pane_vc_g

0x5802,	// (0x00020254) list_double_number_pane_vc_t1_ParamLimits

0x5802,	// (0x00020254) list_double_number_pane_vc_t1

0x5816,	// (0x00020268) list_double_number_pane_vc_t2_ParamLimits

0x5816,	// (0x00020268) list_double_number_pane_vc_t2

0x57ea,	// (0x0002023c) list_double_number_pane_vc_t3_ParamLimits

0x57ea,	// (0x0002023c) list_double_number_pane_vc_t3

0x0002,

0xfa8c,	// (0x0002a4de) list_double_number_pane_vc_t_ParamLimits

0xfa8c,	// (0x0002a4de) list_double_number_pane_vc_t

0x5828,	// (0x0002027a) list_double_large_graphic_pane_vc_g1_ParamLimits

0x5828,	// (0x0002027a) list_double_large_graphic_pane_vc_g1

0x5834,	// (0x00020286) list_double_large_graphic_pane_vc_g2_ParamLimits

0x5834,	// (0x00020286) list_double_large_graphic_pane_vc_g2

0x5719,	// (0x0002016b) list_double_large_graphic_pane_vc_g3_ParamLimits

0x5719,	// (0x0002016b) list_double_large_graphic_pane_vc_g3

0x5843,	// (0x00020295) list_double_large_graphic_pane_vc_g4_ParamLimits

0x5843,	// (0x00020295) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa93,	// (0x0002a4e5) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa93,	// (0x0002a4e5) list_double_large_graphic_pane_vc_g

0x584f,	// (0x000202a1) list_double_large_graphic_pane_vc_t1_ParamLimits

0x584f,	// (0x000202a1) list_double_large_graphic_pane_vc_t1

0x5861,	// (0x000202b3) list_double_large_graphic_pane_vc_t2_ParamLimits

0x5861,	// (0x000202b3) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa9c,	// (0x0002a4ee) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa9c,	// (0x0002a4ee) list_double_large_graphic_pane_vc_t

0x54e1,	// (0x0001ff33) list_double_heading_pane_vc_g1_ParamLimits

0x54e1,	// (0x0001ff33) list_double_heading_pane_vc_g1

0x54ed,	// (0x0001ff3f) list_double_heading_pane_vc_g2_ParamLimits

0x54ed,	// (0x0001ff3f) list_double_heading_pane_vc_g2

0x0001,

0xf81f,	// (0x0002a271) list_double_heading_pane_vc_g_ParamLimits

0xf81f,	// (0x0002a271) list_double_heading_pane_vc_g

0x587a,	// (0x000202cc) list_double_heading_pane_vc_t1_ParamLimits

0x587a,	// (0x000202cc) list_double_heading_pane_vc_t1

0x557b,	// (0x0001ffcd) list_double_heading_pane_vc_t2_ParamLimits

0x557b,	// (0x0001ffcd) list_double_heading_pane_vc_t2

0x0001,

0xfaa1,	// (0x0002a4f3) list_double_heading_pane_vc_t_ParamLimits

0xfaa1,	// (0x0002a4f3) list_double_heading_pane_vc_t

0x588e,	// (0x000202e0) list_double_graphic_pane_vc_g1_ParamLimits

0x588e,	// (0x000202e0) list_double_graphic_pane_vc_g1

0x589e,	// (0x000202f0) list_double_graphic_pane_vc_g2_ParamLimits

0x589e,	// (0x000202f0) list_double_graphic_pane_vc_g2

0x58ad,	// (0x000202ff) list_double_graphic_pane_vc_g3_ParamLimits

0x58ad,	// (0x000202ff) list_double_graphic_pane_vc_g3

0x0002,

0xfaa6,	// (0x0002a4f8) list_double_graphic_pane_vc_g_ParamLimits

0xfaa6,	// (0x0002a4f8) list_double_graphic_pane_vc_g

0x58b9,	// (0x0002030b) list_double_graphic_pane_vc_t1_ParamLimits

0x58b9,	// (0x0002030b) list_double_graphic_pane_vc_t1

0x57ea,	// (0x0002023c) list_double_graphic_pane_vc_t2_ParamLimits

0x57ea,	// (0x0002023c) list_double_graphic_pane_vc_t2

0x0001,

0xfaad,	// (0x0002a4ff) list_double_graphic_pane_vc_t_ParamLimits

0xfaad,	// (0x0002a4ff) list_double_graphic_pane_vc_t

0x5cdc,	// (0x0002072e) aid_size_cell_fastswap

0x5ce4,	// (0x00020736) aid_size_cell_touch_ParamLimits

0x5ce4,	// (0x00020736) aid_size_cell_touch

0x5f45,	// (0x00020997) popup_fast_swap_wide_window_ParamLimits

0x5f45,	// (0x00020997) popup_fast_swap_wide_window

0x605b,	// (0x00020aad) touch_pane_ParamLimits

0x605b,	// (0x00020aad) touch_pane

0x80c2,	// (0x00022b14) button_value_adjust_pane_cp2

0x80c2,	// (0x00022b14) button_value_adjust_pane_cp4

0x5201,	// (0x0001fc53) form_field_data_pane_cp2

0x5226,	// (0x0001fc78) form_field_data_wide_pane_cp2

0x855b,	// (0x00022fad) bg_scroll_pane_ParamLimits

0x62ec,	// (0x00020d3e) scroll_handle_pane_ParamLimits

0x6300,	// (0x00020d52) scroll_sc2_down_pane_ParamLimits

0x6300,	// (0x00020d52) scroll_sc2_down_pane

0x858c,	// (0x00022fde) scroll_sc2_up_pane_ParamLimits

0x858c,	// (0x00022fde) scroll_sc2_up_pane

0xbe24,	// (0x00026876) grid_wheel_folder_pane_g1_ParamLimits

0xbe24,	// (0x00026876) grid_wheel_folder_pane_g1

0x64ca,	// (0x00020f1c) clock_nsta_pane_cp2_ParamLimits

0x64ca,	// (0x00020f1c) clock_nsta_pane_cp2

0x8d48,	// (0x0002379a) listscroll_midp_pane_ParamLimits

0x8d54,	// (0x000237a6) midp_canvas_pane

0x9042,	// (0x00023a94) nsta_clock_indic_pane

0x9098,	// (0x00023aea) listscroll_form_pane_vc

0x90b4,	// (0x00023b06) listscroll_set_pane_vc_ParamLimits

0x90b4,	// (0x00023b06) listscroll_set_pane_vc

0x97cc,	// (0x0002421e) clock_nsta_pane

0x9849,	// (0x0002429b) indicator_nsta_pane

0x9b40,	// (0x00024592) bg_popup_sub_pane_cp2_ParamLimits

0x9b54,	// (0x000245a6) find_pane_cp2_ParamLimits

0x9b54,	// (0x000245a6) find_pane_cp2

0x9b6a,	// (0x000245bc) grid_toobar_pane_ParamLimits

0x9cc8,	// (0x0002471a) list_form_gen_pane_vc_ParamLimits

0x9cc8,	// (0x0002471a) list_form_gen_pane_vc

0x9cde,	// (0x00024730) scroll_pane_cp8_vc_ParamLimits

0x9cde,	// (0x00024730) scroll_pane_cp8_vc

0x9d5a,	// (0x000247ac) data_form_wide_pane_vc_ParamLimits

0x9d5a,	// (0x000247ac) data_form_wide_pane_vc

0x9d66,	// (0x000247b8) form_field_data_wide_pane_vc_g1

0x9d6e,	// (0x000247c0) form_field_data_wide_pane_vc_t1_ParamLimits

0x9d6e,	// (0x000247c0) form_field_data_wide_pane_vc_t1

0x80d6,	// (0x00022b28) input_focus_pane_cp6_vc_ParamLimits

0x80d6,	// (0x00022b28) input_focus_pane_cp6_vc

0xa048,	// (0x00024a9a) list_midp_pane_ParamLimits

0xa054,	// (0x00024aa6) scroll_pane_cp16_ParamLimits

0xa054,	// (0x00024aa6) scroll_pane_cp16

0xa094,	// (0x00024ae6) button_value_adjust_pane_ParamLimits

0xa094,	// (0x00024ae6) button_value_adjust_pane

0xb01c,	// (0x00025a6e) button_value_adjust_pane_cp6_ParamLimits

0xb01c,	// (0x00025a6e) button_value_adjust_pane_cp6

0xb176,	// (0x00025bc8) settings_code_pane_cp_ParamLimits

0xb176,	// (0x00025bc8) settings_code_pane_cp

0x7765,	// (0x000221b7) cell_touch_pane_g1

0x7765,	// (0x000221b7) cell_touch_pane_g2

0x0001,

0xf747,	// (0x0002a199) cell_touch_pane_g

0xb759,	// (0x000261ab) cell_touch_pane_cp_ParamLimits

0xb759,	// (0x000261ab) cell_touch_pane_cp

0xb769,	// (0x000261bb) cell_touch_pane_ParamLimits

0xb769,	// (0x000261bb) cell_touch_pane

0x7765,	// (0x000221b7) scroll_sc2_down_pane_g1

0x7765,	// (0x000221b7) scroll_sc2_up_pane_g1

0x776f,	// (0x000221c1) bg_set_opt_pane_cp4_vc

0xb77a,	// (0x000261cc) list_set_graphic_pane_vc_g1_ParamLimits

0xb77a,	// (0x000261cc) list_set_graphic_pane_vc_g1

0xb786,	// (0x000261d8) list_set_graphic_pane_vc_g2_ParamLimits

0xb786,	// (0x000261d8) list_set_graphic_pane_vc_g2

0x0001,

0xfa38,	// (0x0002a48a) list_set_graphic_pane_vc_g_ParamLimits

0xfa38,	// (0x0002a48a) list_set_graphic_pane_vc_g

0xb792,	// (0x000261e4) text_primary_small_cp13_vc_ParamLimits

0xb792,	// (0x000261e4) text_primary_small_cp13_vc

0xb7aa,	// (0x000261fc) list_set_graphic_pane_vc_ParamLimits

0xb7aa,	// (0x000261fc) list_set_graphic_pane_vc

0x776f,	// (0x000221c1) input_focus_pane_cp2_vc

0x7765,	// (0x000221b7) setting_code_pane_vc_g1

0xb7be,	// (0x00026210) setting_code_pane_vc_t1

0xb7cc,	// (0x0002621e) set_text_pane_vc_t1_ParamLimits

0xb7cc,	// (0x0002621e) set_text_pane_vc_t1

0x776f,	// (0x000221c1) input_focus_pane_cp1_vc

0xb7ea,	// (0x0002623c) list_set_text_pane_vc

0x7765,	// (0x000221b7) setting_text_pane_vc_g1

0x776f,	// (0x000221c1) bg_set_opt_pane_cp2_vc

0xb7f4,	// (0x00026246) setting_slider_graphic_pane_vc_g1

0xb7fc,	// (0x0002624e) setting_slider_graphic_pane_vc_t1

0xb80a,	// (0x0002625c) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa3d,	// (0x0002a48f) setting_slider_graphic_pane_vc_t

0xb818,	// (0x0002626a) slider_set_pane_cp_vc

0xb820,	// (0x00026272) slider_set_pane_vc_g1

0xb829,	// (0x0002627b) slider_set_pane_vc_g2

0x0006,

0xfa42,	// (0x0002a494) slider_set_pane_vc_g

0x813d,	// (0x00022b8f) set_opt_bg_pane_g1_copy1

0x8145,	// (0x00022b97) set_opt_bg_pane_g2_copy1

0xb855,	// (0x000262a7) set_opt_bg_pane_g3_copy1

0x8155,	// (0x00022ba7) set_opt_bg_pane_g4_copy1

0x815d,	// (0x00022baf) set_opt_bg_pane_g5_copy1

0x8165,	// (0x00022bb7) set_opt_bg_pane_g6_copy1

0xb85f,	// (0x000262b1) set_opt_bg_pane_g7_copy1

0xb869,	// (0x000262bb) set_opt_bg_pane_g8_copy1

0xb873,	// (0x000262c5) set_opt_bg_pane_g9_copy1

0x776f,	// (0x000221c1) bg_set_opt_pane_cp_vc

0xb87d,	// (0x000262cf) setting_slider_pane_vc_t1

0xb7fc,	// (0x0002624e) setting_slider_pane_vc_t2

0xb80a,	// (0x0002625c) setting_slider_pane_vc_t3

0x0002,

0xfa51,	// (0x0002a4a3) setting_slider_pane_vc_t

0xb818,	// (0x0002626a) slider_set_pane_vc

0x6852,	// (0x000212a4) volume_set_pane_vc_g1

0x685b,	// (0x000212ad) volume_set_pane_vc_g2

0x6864,	// (0x000212b6) volume_set_pane_vc_g3

0x686d,	// (0x000212bf) volume_set_pane_vc_g4

0x6876,	// (0x000212c8) volume_set_pane_vc_g5

0x687f,	// (0x000212d1) volume_set_pane_vc_g6

0x6888,	// (0x000212da) volume_set_pane_vc_g7

0x6891,	// (0x000212e3) volume_set_pane_vc_g8

0x689a,	// (0x000212ec) volume_set_pane_vc_g9

0x68a3,	// (0x000212f5) volume_set_pane_vc_g10

0x0009,

0xf8ef,	// (0x0002a341) volume_set_pane_vc_g

0xb88c,	// (0x000262de) volume_set_pane_vc

0xb8d6,	// (0x00026328) button_value_adjust_pane_cp1_vc

0xb8e0,	// (0x00026332) list_highlight_pane_cp2_vc

0xb8e9,	// (0x0002633b) list_set_pane_vc_ParamLimits

0xb8e9,	// (0x0002633b) list_set_pane_vc

0xb953,	// (0x000263a5) main_pane_set_vc_t1_ParamLimits

0xb953,	// (0x000263a5) main_pane_set_vc_t1

0xb968,	// (0x000263ba) main_pane_set_vc_t2_ParamLimits

0xb968,	// (0x000263ba) main_pane_set_vc_t2

0xb97a,	// (0x000263cc) main_pane_set_vc_t3_ParamLimits

0xb97a,	// (0x000263cc) main_pane_set_vc_t3

0xb98e,	// (0x000263e0) main_pane_set_vc_t4_ParamLimits

0xb98e,	// (0x000263e0) main_pane_set_vc_t4

0x0003,

0xfa58,	// (0x0002a4aa) main_pane_set_vc_t_ParamLimits

0xfa58,	// (0x0002a4aa) main_pane_set_vc_t

0xb9a2,	// (0x000263f4) setting_code_pane_vc_ParamLimits

0xb9a2,	// (0x000263f4) setting_code_pane_vc

0xb9b3,	// (0x00026405) setting_slider_graphic_pane_vc

0xb9b3,	// (0x00026405) setting_slider_pane_vc

0xb9b3,	// (0x00026405) setting_text_pane_vc

0xb9b3,	// (0x00026405) setting_volume_pane_vc

0xb9bd,	// (0x0002640f) scroll_pane_cp121_vc

0x80b0,	// (0x00022b02) set_content_pane_vc

0xb9fb,	// (0x0002644d) button_value_adjust_pane_g1

0xba04,	// (0x00026456) button_value_adjust_pane_g2

0x0001,

0xfab2,	// (0x0002a504) button_value_adjust_pane_g

0xba0d,	// (0x0002645f) form_field_slider_wide_pane_vc_t1_ParamLimits

0xba0d,	// (0x0002645f) form_field_slider_wide_pane_vc_t1

0xba21,	// (0x00026473) form_field_slider_wide_pane_vc_t2_ParamLimits

0xba21,	// (0x00026473) form_field_slider_wide_pane_vc_t2

0x0001,

0xfab7,	// (0x0002a509) form_field_slider_wide_pane_vc_t_ParamLimits

0xfab7,	// (0x0002a509) form_field_slider_wide_pane_vc_t

0x7acb,	// (0x0002251d) input_focus_pane_cp10_vc_ParamLimits

0x7acb,	// (0x0002251d) input_focus_pane_cp10_vc

0xba33,	// (0x00026485) slider_cont_pane_cp1_vc_ParamLimits

0xba33,	// (0x00026485) slider_cont_pane_cp1_vc

0xb820,	// (0x00026272) slider_form_pane_g1_cp2

0xb829,	// (0x0002627b) slider_form_pane_g2_cp2

0xba4c,	// (0x0002649e) form_field_slider_pane_vc_t3

0xba5a,	// (0x000264ac) form_field_slider_pane_vc_t4

0xba68,	// (0x000264ba) slider_form_pane_vc_ParamLimits

0xba68,	// (0x000264ba) slider_form_pane_vc

0xba75,	// (0x000264c7) form_field_slider_pane_vc_t1_ParamLimits

0xba75,	// (0x000264c7) form_field_slider_pane_vc_t1

0xba21,	// (0x00026473) form_field_slider_pane_vc_t2_ParamLimits

0xba21,	// (0x00026473) form_field_slider_pane_vc_t2

0x0001,

0xfac7,	// (0x0002a519) form_field_slider_pane_vc_t_ParamLimits

0xfac7,	// (0x0002a519) form_field_slider_pane_vc_t

0x7acb,	// (0x0002251d) input_focus_pane_cp9_vc_ParamLimits

0x7acb,	// (0x0002251d) input_focus_pane_cp9_vc

0xba91,	// (0x000264e3) slider_cont_pane_vc_ParamLimits

0xba91,	// (0x000264e3) slider_cont_pane_vc

0xbaa3,	// (0x000264f5) list_form_graphic_pane_cp_vc_ParamLimits

0xbaa3,	// (0x000264f5) list_form_graphic_pane_cp_vc

0x9d66,	// (0x000247b8) form_field_popup_wide_pane_vc_g1

0xbab8,	// (0x0002650a) form_field_popup_wide_pane_vc_t1_ParamLimits

0xbab8,	// (0x0002650a) form_field_popup_wide_pane_vc_t1

0x80d6,	// (0x00022b28) input_focus_pane_cp8_vc_ParamLimits

0x80d6,	// (0x00022b28) input_focus_pane_cp8_vc

0xbacf,	// (0x00026521) list_form_wide_pane_vc_ParamLimits

0xbacf,	// (0x00026521) list_form_wide_pane_vc

0xbadb,	// (0x0002652d) list_form_graphic_pane_vc_g1

0xbae3,	// (0x00026535) list_form_graphic_pane_vc_t1_ParamLimits

0xbae3,	// (0x00026535) list_form_graphic_pane_vc_t1

0x784f,	// (0x000222a1) list_highlight_pane_cp5_vc_ParamLimits

0x784f,	// (0x000222a1) list_highlight_pane_cp5_vc

0xbaff,	// (0x00026551) list_form_graphic_pane_vc_ParamLimits

0xbaff,	// (0x00026551) list_form_graphic_pane_vc

0x9d66,	// (0x000247b8) form_field_popup_pane_vc_g1

0xbb15,	// (0x00026567) form_field_popup_pane_vc_t1_ParamLimits

0xbb15,	// (0x00026567) form_field_popup_pane_vc_t1

0x80d6,	// (0x00022b28) input_focus_pane_cp7_vc_ParamLimits

0x80d6,	// (0x00022b28) input_focus_pane_cp7_vc

0xbb2c,	// (0x0002657e) list_form_pane_vc_ParamLimits

0xbb2c,	// (0x0002657e) list_form_pane_vc

0xbb38,	// (0x0002658a) data_form_pane_vc_t1_ParamLimits

0xbb38,	// (0x0002658a) data_form_pane_vc_t1

0x813d,	// (0x00022b8f) input_focus_pane_vc_g1

0x8145,	// (0x00022b97) input_focus_pane_vc_g2

0x814d,	// (0x00022b9f) input_focus_pane_vc_g3

0x8155,	// (0x00022ba7) input_focus_pane_vc_g4

0x815d,	// (0x00022baf) input_focus_pane_vc_g5

0x8165,	// (0x00022bb7) input_focus_pane_vc_g6

0x816d,	// (0x00022bbf) input_focus_pane_vc_g7

0x8175,	// (0x00022bc7) input_focus_pane_vc_g8

0x817d,	// (0x00022bcf) input_focus_pane_vc_g9

0x7765,	// (0x000221b7) input_focus_pane_vc_g10

0x0009,

0xf6d0,	// (0x0002a122) input_focus_pane_vc_g

0x9d5a,	// (0x000247ac) data_form_pane_vc_ParamLimits

0x9d5a,	// (0x000247ac) data_form_pane_vc

0x9d66,	// (0x000247b8) form_field_data_pane_vc_g1

0xbb55,	// (0x000265a7) form_field_data_pane_vc_t1_ParamLimits

0xbb55,	// (0x000265a7) form_field_data_pane_vc_t1

0x80d6,	// (0x00022b28) input_focus_pane_vc_ParamLimits

0x80d6,	// (0x00022b28) input_focus_pane_vc

0xbb6f,	// (0x000265c1) button_value_adjust_pane_cp3_vc

0xbb77,	// (0x000265c9) button_value_adjust_pane_cp5_vc

0xbb7f,	// (0x000265d1) form_field_data_pane_vc_ParamLimits

0xbb7f,	// (0x000265d1) form_field_data_pane_vc

0xbb9a,	// (0x000265ec) form_field_data_pane_vc_cp2

0xbba2,	// (0x000265f4) form_field_data_wide_pane_vc_ParamLimits

0xbba2,	// (0x000265f4) form_field_data_wide_pane_vc

0xbbbc,	// (0x0002660e) form_field_data_wide_pane_vc_cp2

0xbbc4,	// (0x00026616) form_field_popup_pane_vc_ParamLimits

0xbbc4,	// (0x00026616) form_field_popup_pane_vc

0xbbdf,	// (0x00026631) form_field_popup_wide_pane_vc_ParamLimits

0xbbdf,	// (0x00026631) form_field_popup_wide_pane_vc

0xbbf9,	// (0x0002664b) form_field_slider_pane_vc_ParamLimits

0xbbf9,	// (0x0002664b) form_field_slider_pane_vc

0xbc0c,	// (0x0002665e) form_field_slider_wide_pane_vc_ParamLimits

0xbc0c,	// (0x0002665e) form_field_slider_wide_pane_vc

0xbc1f,	// (0x00026671) grid_touch_1_pane_ParamLimits

0xbc1f,	// (0x00026671) grid_touch_1_pane

0xbc2b,	// (0x0002667d) grid_touch_2_pane_ParamLimits

0xbc2b,	// (0x0002667d) grid_touch_2_pane

0x900d,	// (0x00023a5f) touch_pane_g1_ParamLimits

0x900d,	// (0x00023a5f) touch_pane_g1

0xbc45,	// (0x00026697) cell_app_pane_cp_wide_ParamLimits

0xbc45,	// (0x00026697) cell_app_pane_cp_wide

0xbc56,	// (0x000266a8) grid_popup_fast_wide_pane_ParamLimits

0xbc56,	// (0x000266a8) grid_popup_fast_wide_pane

0xbc6a,	// (0x000266bc) scroll_pane_cp19_ParamLimits

0xbc6a,	// (0x000266bc) scroll_pane_cp19

0x776f,	// (0x000221c1) bg_popup_window_pane_cp20

0xbc7e,	// (0x000266d0) listscroll_popup_fast_wide_pane

0x784f,	// (0x000222a1) grid_indicator_nsta_pane

0xbc86,	// (0x000266d8) clock_nsta_pane_g1

0xbc8f,	// (0x000266e1) clock_nsta_pane_t1

0xbcab,	// (0x000266fd) cell_indicator_nsta_pane_ParamLimits

0xbcab,	// (0x000266fd) cell_indicator_nsta_pane

0xbce3,	// (0x00026735) cell_indicator_nsta_pane_g1

0xbcf1,	// (0x00026743) cell_indicator_nsta_pane_g2

0x0001,

0xfad1,	// (0x0002a523) cell_indicator_nsta_pane_g

0xbd06,	// (0x00026758) clock_nsta_pane_cp

0xbd0e,	// (0x00026760) indicator_nsta_pane_cp

0xbd16,	// (0x00026768) nsta_clock_indic_pane_g1

0x791b,	// (0x0002236d) grid_indicator_pane

0x867e,	// (0x000230d0) scroll_pane_cp29

0x6416,	// (0x00020e68) indicator_nsta_pane_cp2_ParamLimits

0x6416,	// (0x00020e68) indicator_nsta_pane_cp2

0x784f,	// (0x000222a1) main_apps_wheel_pane

0x9f25,	// (0x00024977) form_midp_field_text_pane_ParamLimits

0xa074,	// (0x00024ac6) scroll_bar_cp050_ParamLimits

0xbd4e,	// (0x000267a0) cell_indicator_pane_ParamLimits

0xbd4e,	// (0x000267a0) cell_indicator_pane

0xbd66,	// (0x000267b8) cell_indicator_pane_g1

0xbd70,	// (0x000267c2) grid_wheel_folder_pane_ParamLimits

0xbd70,	// (0x000267c2) grid_wheel_folder_pane

0xbd84,	// (0x000267d6) list_wheel_apps_pane_ParamLimits

0xbd84,	// (0x000267d6) list_wheel_apps_pane

0xbd97,	// (0x000267e9) main_apps_wheel_pane_g1_ParamLimits

0xbd97,	// (0x000267e9) main_apps_wheel_pane_g1

0xbdb3,	// (0x00026805) main_apps_wheel_pane_g2_ParamLimits

0xbdb3,	// (0x00026805) main_apps_wheel_pane_g2

0x0001,

0xfae0,	// (0x0002a532) main_apps_wheel_pane_g_ParamLimits

0xfae0,	// (0x0002a532) main_apps_wheel_pane_g

0xbdcf,	// (0x00026821) main_apps_wheel_pane_t1_ParamLimits

0xbdcf,	// (0x00026821) main_apps_wheel_pane_t1

0xbdf8,	// (0x0002684a) list_wheel_apps_pane_g1

0xbe00,	// (0x00026852) list_wheel_apps_pane_g2

0xbe08,	// (0x0002685a) list_wheel_apps_pane_g3

0xbe10,	// (0x00026862) list_wheel_apps_pane_g4

0xbe1a,	// (0x0002686c) list_wheel_apps_pane_g5

0x0004,

0xfae5,	// (0x0002a537) list_wheel_apps_pane_g

0x8bbc,	// (0x0002360e) navi_icon_text_pane

0x96f9,	// (0x0002414b) aid_fill_nsta

0xbe3b,	// (0x0002688d) navi_icon_text_pane_g1

0xbe4a,	// (0x0002689c) navi_icon_text_pane_t1

0x8a52,	// (0x000234a4) list_set_graphic_pane_t1_ParamLimits

0x8a52,	// (0x000234a4) list_set_graphic_pane_t1

0xa794,	// (0x000251e6) popup_midp_note_alarm_window_t6_ParamLimits

0xa794,	// (0x000251e6) popup_midp_note_alarm_window_t6

0xa7a6,	// (0x000251f8) popup_midp_note_alarm_window_t7_ParamLimits

0xa7a6,	// (0x000251f8) popup_midp_note_alarm_window_t7

0xa7b8,	// (0x0002520a) popup_midp_note_alarm_window_t8_ParamLimits

0xa7b8,	// (0x0002520a) popup_midp_note_alarm_window_t8

0xa7ca,	// (0x0002521c) popup_midp_note_alarm_window_t9_ParamLimits

0xa7ca,	// (0x0002521c) popup_midp_note_alarm_window_t9

0xa7dc,	// (0x0002522e) popup_midp_note_alarm_window_t10_ParamLimits

0xa7dc,	// (0x0002522e) popup_midp_note_alarm_window_t10

0xa7ee,	// (0x00025240) popup_midp_note_alarm_window_t11_ParamLimits

0xa7ee,	// (0x00025240) popup_midp_note_alarm_window_t11

0xa800,	// (0x00025252) scroll_pane_cp17_ParamLimits

0xa800,	// (0x00025252) scroll_pane_cp17

0x6852,	// (0x000212a4) volume_small_pane_cp_g1

0x6b21,	// (0x00021573) volume_small_pane_cp_g2

0x6b2a,	// (0x0002157c) volume_small_pane_cp_g3

0x6b33,	// (0x00021585) volume_small_pane_cp_g4

0x6b3c,	// (0x0002158e) volume_small_pane_cp_g5

0x6b45,	// (0x00021597) volume_small_pane_cp_g6

0x6b4e,	// (0x000215a0) volume_small_pane_cp_g7

0x6b57,	// (0x000215a9) volume_small_pane_cp_g8

0x6b60,	// (0x000215b2) volume_small_pane_cp_g9

0x6b69,	// (0x000215bb) volume_small_pane_cp_g10

0x8e1d,	// (0x0002386f) midp_ticker_pane_g1_ParamLimits

0x8e29,	// (0x0002387b) midp_ticker_pane_g2_ParamLimits

0xf798,	// (0x0002a1ea) midp_ticker_pane_g_ParamLimits

0x8e35,	// (0x00023887) midp_ticker_pane_t1_ParamLimits

0x970f,	// (0x00024161) aid_fill_nsta_2

0xa060,	// (0x00024ab2) list_form2_midp_pane

0xb1bd,	// (0x00025c0f) midp_editing_number_pane_ParamLimits

0xb1cc,	// (0x00025c1e) midp_ticker_pane_ParamLimits

0xbe5f,	// (0x000268b1) form2_midp_field_pane

0xbe83,	// (0x000268d5) scroll_pane_cp51

0xbea3,	// (0x000268f5) form2_midp_button_pane_ParamLimits

0xbea3,	// (0x000268f5) form2_midp_button_pane

0xbeb5,	// (0x00026907) form2_midp_content_pane_ParamLimits

0xbeb5,	// (0x00026907) form2_midp_content_pane

0xbecf,	// (0x00026921) form2_midp_field_choice_group_pane

0xbed7,	// (0x00026929) form2_midp_field_pane_g1

0xbedf,	// (0x00026931) form2_midp_field_pane_g2

0xbee7,	// (0x00026939) form2_midp_field_pane_g3

0xbeef,	// (0x00026941) form2_midp_field_pane_g4

0x0003,

0xfb0a,	// (0x0002a55c) form2_midp_field_pane_g

0xbef7,	// (0x00026949) form2_midp_gauge_slider_pane

0xbeff,	// (0x00026951) form2_midp_gauge_wait_pane

0xbf07,	// (0x00026959) form2_midp_image_pane_ParamLimits

0xbf07,	// (0x00026959) form2_midp_image_pane

0xbf22,	// (0x00026974) form2_midp_label_pane_ParamLimits

0xbf22,	// (0x00026974) form2_midp_label_pane

0xbf41,	// (0x00026993) form2_midp_label_pane_cp_ParamLimits

0xbf41,	// (0x00026993) form2_midp_label_pane_cp

0xbf62,	// (0x000269b4) form2_midp_string_pane_ParamLimits

0xbf62,	// (0x000269b4) form2_midp_string_pane

0x58cb,	// (0x0002031d) form2_midp_text_pane_ParamLimits

0x58cb,	// (0x0002031d) form2_midp_text_pane

0xbf74,	// (0x000269c6) form2_midp_time_pane

0xbf84,	// (0x000269d6) input_focus_pane_cp51_ParamLimits

0xbf84,	// (0x000269d6) input_focus_pane_cp51

0xbf9c,	// (0x000269ee) form2_midp_label_pane_t1_ParamLimits

0xbf9c,	// (0x000269ee) form2_midp_label_pane_t1

0x58ec,	// (0x0002033e) form2_mdip_text_pane_t1_ParamLimits

0x58ec,	// (0x0002033e) form2_mdip_text_pane_t1

0x5910,	// (0x00020362) form2_midp_time_pane_t1

0xbfea,	// (0x00026a3c) form2_midp_gauge_slider_pane_t1

0xbffc,	// (0x00026a4e) form2_midp_gauge_slider_pane_t2

0xc00e,	// (0x00026a60) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb13,	// (0x0002a565) form2_midp_gauge_slider_pane_t

0xc020,	// (0x00026a72) form2_midp_slider_pane

0xc02c,	// (0x00026a7e) form2_midp_gauge_wait_pane_t1

0xc03a,	// (0x00026a8c) form2_midp_wait_pane_ParamLimits

0xc03a,	// (0x00026a8c) form2_midp_wait_pane

0x9d85,	// (0x000247d7) list_single_2graphic_pane_cp4_ParamLimits

0x9d85,	// (0x000247d7) list_single_2graphic_pane_cp4

0xc065,	// (0x00026ab7) list_single_midp_graphic_pane_cp_ParamLimits

0xc065,	// (0x00026ab7) list_single_midp_graphic_pane_cp

0x776f,	// (0x000221c1) list_highlight_pane_cp20

0xc089,	// (0x00026adb) list_single_2graphic_pane_g1_cp4

0xb65c,	// (0x000260ae) list_single_2graphic_pane_g2_cp4

0xc091,	// (0x00026ae3) list_single_2graphic_pane_t1_cp4

0x784f,	// (0x000222a1) list_highlight_pane_cp21

0xc0a0,	// (0x00026af2) list_single_midp_graphic_pane_g4_cp

0xc0af,	// (0x00026b01) list_single_midp_graphic_pane_t1_cp

0xc0c4,	// (0x00026b16) form2_mdip_string_pane_t1_ParamLimits

0xc0c4,	// (0x00026b16) form2_mdip_string_pane_t1

0x776f,	// (0x000221c1) bg_wml_button_pane_cp2

0x7765,	// (0x000221b7) form2_midp_image_pane_g1

0x4f84,	// (0x0001f9d6) list_double_large_graphic_pane_g5_ParamLimits

0x4f84,	// (0x0001f9d6) list_double_large_graphic_pane_g5

0x8d48,	// (0x0002379a) midp_form_pane_ParamLimits

0x784f,	// (0x000222a1) main_apps_wheel_pane_ParamLimits

0x94a3,	// (0x00023ef5) popup_preview_window_ParamLimits

0x94a3,	// (0x00023ef5) popup_preview_window

0x968a,	// (0x000240dc) popup_touch_info_window_ParamLimits

0x968a,	// (0x000240dc) popup_touch_info_window

0x96ac,	// (0x000240fe) popup_touch_menu_window_ParamLimits

0x96ac,	// (0x000240fe) popup_touch_menu_window

0x775b,	// (0x000221ad) bg_popup_sub_pane_cp6

0xc169,	// (0x00026bbb) list_touch_menu_pane

0xc171,	// (0x00026bc3) list_single_touch_menu_pane_ParamLimits

0xc171,	// (0x00026bc3) list_single_touch_menu_pane

0xc18c,	// (0x00026bde) list_single_touch_menu_pane_t1

0x784f,	// (0x000222a1) bg_popup_sub_pane_cp7_ParamLimits

0x784f,	// (0x000222a1) bg_popup_sub_pane_cp7

0xc19a,	// (0x00026bec) heading_sub_pane

0xc1a2,	// (0x00026bf4) list_touch_info_pane_ParamLimits

0xc1a2,	// (0x00026bf4) list_touch_info_pane

0xc1b1,	// (0x00026c03) list_single_touch_info_pane_ParamLimits

0xc1b1,	// (0x00026c03) list_single_touch_info_pane

0xc1c3,	// (0x00026c15) list_single_touch_info_pane_t1

0xc1d1,	// (0x00026c23) list_single_touch_info_pane_t2

0x0001,

0xfb21,	// (0x0002a573) list_single_touch_info_pane_t

0x8d40,	// (0x00023792) bg_popup_heading_pane_cp

0xc1df,	// (0x00026c31) heading_sub_pane_t1

0x9cf4,	// (0x00024746) bg_popup_preview_window_pane_cp_ParamLimits

0x9cf4,	// (0x00024746) bg_popup_preview_window_pane_cp

0xc19a,	// (0x00026bec) heading_preview_pane

0xc1a2,	// (0x00026bf4) list_preview_pane_ParamLimits

0xc1a2,	// (0x00026bf4) list_preview_pane

0xc1ed,	// (0x00026c3f) popup_preview_window_g1

0xc1b1,	// (0x00026c03) list_single_preview_pane_ParamLimits

0xc1b1,	// (0x00026c03) list_single_preview_pane

0xc1f5,	// (0x00026c47) list_single_preview_pane_g1

0xc1fd,	// (0x00026c4f) list_single_preview_pane_t1

0xc1c3,	// (0x00026c15) list_single_preview_pane_t2

0x0001,

0xfb26,	// (0x0002a578) list_single_preview_pane_t

0xc20b,	// (0x00026c5d) bg_popup_heading_pane_cp2_ParamLimits

0xc20b,	// (0x00026c5d) bg_popup_heading_pane_cp2

0xc221,	// (0x00026c73) heading_preview_pane_g1

0xc229,	// (0x00026c7b) heading_preview_pane_t1_ParamLimits

0xc229,	// (0x00026c7b) heading_preview_pane_t1

0x793e,	// (0x00022390) soft_indicator_pane_t1_ParamLimits

0x8049,	// (0x00022a9b) scroll_pane_ParamLimits

0x857a,	// (0x00022fcc) scroll_sc2_left_pane

0x8583,	// (0x00022fd5) scroll_sc2_right_pane

0x85a2,	// (0x00022ff4) scroll_bg_pane_g1_ParamLimits

0x85b7,	// (0x00023009) scroll_bg_pane_g2_ParamLimits

0x85cf,	// (0x00023021) scroll_bg_pane_g3_ParamLimits

0xf727,	// (0x0002a179) scroll_bg_pane_g_ParamLimits

0x85a2,	// (0x00022ff4) scroll_handle_pane_g1_ParamLimits

0x85f1,	// (0x00023043) scroll_handle_pane_g2_ParamLimits

0x85cf,	// (0x00023021) scroll_handle_pane_g3_ParamLimits

0xf72e,	// (0x0002a180) scroll_handle_pane_g_ParamLimits

0x90ee,	// (0x00023b40) popup_choice_list_window_ParamLimits

0x90ee,	// (0x00023b40) popup_choice_list_window

0x9b4c,	// (0x0002459e) choice_list_pane

0x9bce,	// (0x00024620) cell_toolbar_pane_t1

0x9bf6,	// (0x00024648) toolbar_button_pane_ParamLimits

0xacd0,	// (0x00025722) ai_gene_pane_1_t2_ParamLimits

0xacd0,	// (0x00025722) ai_gene_pane_1_t2

0x0001,

0xf94b,	// (0x0002a39d) ai_gene_pane_1_t_ParamLimits

0xf94b,	// (0x0002a39d) ai_gene_pane_1_t

0xc246,	// (0x00026c98) scroll_sc2_left_pane_g1

0xc246,	// (0x00026c98) scroll_sc2_right_pane_g1

0x90c6,	// (0x00023b18) bg_popup_sub_pane_cp10

0xc250,	// (0x00026ca2) list_choice_list_pane

0xc267,	// (0x00026cb9) list_single_choice_list_pane_ParamLimits

0xc267,	// (0x00026cb9) list_single_choice_list_pane

0xc27b,	// (0x00026ccd) list_single_choice_list_pane_g1

0xc283,	// (0x00026cd5) list_single_choice_list_pane_t1_ParamLimits

0xc283,	// (0x00026cd5) list_single_choice_list_pane_t1

0xc298,	// (0x00026cea) choice_list_pane_g1

0xc2a0,	// (0x00026cf2) choice_list_pane_t1

0x775b,	// (0x000221ad) input_focus_pane_cp11

0x8454,	// (0x00022ea6) title_pane_stacon_g2_ParamLimits

0x8454,	// (0x00022ea6) title_pane_stacon_g2

0x0002,

0xf70d,	// (0x0002a15f) title_pane_stacon_g_ParamLimits

0xf70d,	// (0x0002a15f) title_pane_stacon_g

0x8d40,	// (0x00023792) cursor_press_pane

0x91a4,	// (0x00023bf6) popup_fep_hwr_window_ParamLimits

0x91a4,	// (0x00023bf6) popup_fep_hwr_window

0x922e,	// (0x00023c80) popup_fep_vkb_window_ParamLimits

0x922e,	// (0x00023c80) popup_fep_vkb_window

0xc2ae,	// (0x00026d00) cursor_press_pane_g1

0x0002,

0xfb4f,	// (0x0002a5a1) fep_vkb_side_pane_g_ParamLimits

0x6b9d,	// (0x000215ef) fep_hwr_candidate_pane_ParamLimits

0x6b9d,	// (0x000215ef) fep_hwr_candidate_pane

0x6bc7,	// (0x00021619) fep_hwr_side_pane_ParamLimits

0x6bc7,	// (0x00021619) fep_hwr_side_pane

0x6be9,	// (0x0002163b) fep_hwr_top_pane_ParamLimits

0x6be9,	// (0x0002163b) fep_hwr_top_pane

0x6c01,	// (0x00021653) fep_hwr_write_pane_ParamLimits

0x6c01,	// (0x00021653) fep_hwr_write_pane

0xfb4f,	// (0x0002a5a1) fep_vkb_side_pane_g

0xc2c4,	// (0x00026d16) fep_hwr_top_pane_g1

0xc2d6,	// (0x00026d28) fep_hwr_top_pane_g2

0x6c2d,	// (0x0002167f) fep_hwr_top_pane_g3

0x0002,

0xfb2b,	// (0x0002a57d) fep_hwr_top_pane_g

0x6c42,	// (0x00021694) fep_hwr_top_text_pane

0x8746,	// (0x00023198) fep_hwr_top_text_pane_g1

0xc30c,	// (0x00026d5e) fep_hwr_top_text_pane_t1

0x6d4c,	// (0x0002179e) fep_hwr_candidate_pane_g1

0xc557,	// (0x00026fa9) fep_vkb_keypad_pane_g3_ParamLimits

0xc557,	// (0x00026fa9) fep_vkb_keypad_pane_g3

0xc583,	// (0x00026fd5) fep_vkb_keypad_pane_g4_ParamLimits

0xc583,	// (0x00026fd5) fep_vkb_keypad_pane_g4

0xc5fa,	// (0x0002704c) fep_vkb_bottom_pane_g2_ParamLimits

0xc5fa,	// (0x0002704c) fep_vkb_bottom_pane_g2

0x0001,

0xfb56,	// (0x0002a5a8) fep_vkb_bottom_pane_g_ParamLimits

0xfb56,	// (0x0002a5a8) fep_vkb_bottom_pane_g

0xc246,	// (0x00026c98) cell_vkb_side_pane_g2

0x0001,

0xfb60,	// (0x0002a5b2) cell_vkb_side_pane_g

0xc685,	// (0x000270d7) cell_vkb_side_pane_t1

0xc693,	// (0x000270e5) cell_vkb_side_pane_t1_copy1

0xc246,	// (0x00026c98) bg_fep_vkb_candidate_pane_g2

0xc7d7,	// (0x00027229) cell_vkb_candidate_pane_ParamLimits

0xc31a,	// (0x00026d6c) aid_size_cell_vkb_ParamLimits

0xc31a,	// (0x00026d6c) aid_size_cell_vkb

0xc7d7,	// (0x00027229) cell_vkb_candidate_pane

0x6d66,	// (0x000217b8) bg_popup_fep_shadow_pane_g1

0xc3ac,	// (0x00026dfe) fep_vkb_bottom_pane_ParamLimits

0xc3ac,	// (0x00026dfe) fep_vkb_bottom_pane

0xc3e9,	// (0x00026e3b) fep_vkb_candidate_pane_ParamLimits

0xc3e9,	// (0x00026e3b) fep_vkb_candidate_pane

0xc405,	// (0x00026e57) fep_vkb_keypad_pane_ParamLimits

0xc405,	// (0x00026e57) fep_vkb_keypad_pane

0xc438,	// (0x00026e8a) fep_vkb_side_pane_ParamLimits

0xc438,	// (0x00026e8a) fep_vkb_side_pane

0xc474,	// (0x00026ec6) fep_vkb_top_pane_ParamLimits

0xc474,	// (0x00026ec6) fep_vkb_top_pane

0xc4b0,	// (0x00026f02) fep_vkb_top_pane_g1_ParamLimits

0xc4b0,	// (0x00026f02) fep_vkb_top_pane_g1

0xc4bf,	// (0x00026f11) fep_vkb_top_pane_g2_ParamLimits

0xc4bf,	// (0x00026f11) fep_vkb_top_pane_g2

0xc4ce,	// (0x00026f20) fep_vkb_top_pane_g3_ParamLimits

0xc4ce,	// (0x00026f20) fep_vkb_top_pane_g3

0x0003,

0xfb46,	// (0x0002a598) fep_vkb_top_pane_g_ParamLimits

0xfb46,	// (0x0002a598) fep_vkb_top_pane_g

0xc4ec,	// (0x00026f3e) fep_vkb_top_text_pane_ParamLimits

0xc4ec,	// (0x00026f3e) fep_vkb_top_text_pane

0xc4fd,	// (0x00026f4f) fep_vkb_side_pane_g1_ParamLimits

0xc4fd,	// (0x00026f4f) fep_vkb_side_pane_g1

0xc546,	// (0x00026f98) grid_vkb_side_pane_ParamLimits

0xc546,	// (0x00026f98) grid_vkb_side_pane

0x6d6e,	// (0x000217c0) bg_popup_fep_shadow_pane_g2

0x6d77,	// (0x000217c9) bg_popup_fep_shadow_pane_g3

0x6d7f,	// (0x000217d1) bg_popup_fep_shadow_pane_g4

0x6d88,	// (0x000217da) bg_popup_fep_shadow_pane_g5

0x6d92,	// (0x000217e4) bg_popup_fep_shadow_pane_g6

0x6d9a,	// (0x000217ec) bg_popup_fep_shadow_pane_g7

0x815d,	// (0x00022baf) bg_popup_fep_shadow_pane_g8

0xc5a5,	// (0x00026ff7) grid_vkb_keypad_number_pane_ParamLimits

0xc5a5,	// (0x00026ff7) grid_vkb_keypad_number_pane

0xc5b9,	// (0x0002700b) grid_vkb_keypad_pane_ParamLimits

0xc5b9,	// (0x0002700b) grid_vkb_keypad_pane

0xc5df,	// (0x00027031) fep_vkb_bottom_pane_g1_ParamLimits

0xc5df,	// (0x00027031) fep_vkb_bottom_pane_g1

0xc608,	// (0x0002705a) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc608,	// (0x0002705a) grid_vkb_keypad_bottom_left_pane

0xc61d,	// (0x0002706f) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc61d,	// (0x0002706f) grid_vkb_keypad_bottom_right_pane

0xc632,	// (0x00027084) fep_vkb_top_text_pane_g1

0xc64d,	// (0x0002709f) fep_vkb_top_text_pane_t1

0xc662,	// (0x000270b4) cell_vkb_side_pane_ParamLimits

0xc662,	// (0x000270b4) cell_vkb_side_pane

0xc246,	// (0x00026c98) cell_vkb_side_pane_g1

0xc6a1,	// (0x000270f3) cell_vkb_keypad_pane_ParamLimits

0xc6a1,	// (0x000270f3) cell_vkb_keypad_pane

0xc72e,	// (0x00027180) cell_vkb_keypad_pane_g1

0x0008,

0xfb73,	// (0x0002a5c5) bg_popup_fep_shadow_pane_g

0xc246,	// (0x00026c98) cell_hwr_side_pane_g1

0xc246,	// (0x00026c98) cell_hwr_side_pane_g2

0xc738,	// (0x0002718a) cell_vkb_keypad_pane_t1

0xc746,	// (0x00027198) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc746,	// (0x00027198) cell_vkb_keypad_bottom_left_pane

0xc763,	// (0x000271b5) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc763,	// (0x000271b5) cell_vkb_keypad_bottom_right_pane

0xc246,	// (0x00026c98) cell_vkb_keypad_bottom_left_pane_g1

0xc246,	// (0x00026c98) cell_vkb_keypad_bottom_right_pane_g1

0xc79c,	// (0x000271ee) cell_vkb_keypad_number_pane_ParamLimits

0xc79c,	// (0x000271ee) cell_vkb_keypad_number_pane

0xc7bb,	// (0x0002720d) cell_vkb_keypad_number_pane_g1

0xc7c5,	// (0x00027217) cell_vkb_keypad_number_pane_g2

0xc7ce,	// (0x00027220) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb65,	// (0x0002a5b7) cell_vkb_keypad_number_pane_g

0xc738,	// (0x0002718a) cell_vkb_keypad_number_pane_t1

0xc7f8,	// (0x0002724a) fep_vkb_candidate_pane_g1

0x0001,

0xfb60,	// (0x0002a5b2) cell_hwr_side_pane_g

0xc811,	// (0x00027263) cell_hwr_side_pane_t1

0x6dac,	// (0x000217fe) cell_hwr_side_pane_t1_copy1

0xc4de,	// (0x00026f30) cell_hwr_candidate_pane_g1

0x6dba,	// (0x0002180c) cell_hwr_candidate_pane_t1

0xc246,	// (0x00026c98) cell_vkb_candidate_pane_g2

0xc897,	// (0x000272e9) cell_vkb_candidate_pane_t1

0xc2b6,	// (0x00026d08) bg_popup_fep_shadow_pane_ParamLimits

0xc2b6,	// (0x00026d08) bg_popup_fep_shadow_pane

0x13e2,	// (0x0001be34) bg_fep_hwr_top_pane_g4

0xc2e8,	// (0x00026d3a) bg_hwr_side_pane_g1_ParamLimits

0xc2e8,	// (0x00026d3a) bg_hwr_side_pane_g1

0x6c80,	// (0x000216d2) cell_hwr_side_pane_ParamLimits

0x6c80,	// (0x000216d2) cell_hwr_side_pane

0x6cbd,	// (0x0002170f) fep_hwr_write_pane_g1_ParamLimits

0x6cbd,	// (0x0002170f) fep_hwr_write_pane_g1

0x6cca,	// (0x0002171c) fep_hwr_write_pane_g2_ParamLimits

0x6cca,	// (0x0002171c) fep_hwr_write_pane_g2

0x6cd7,	// (0x00021729) fep_hwr_write_pane_g3_ParamLimits

0x6cd7,	// (0x00021729) fep_hwr_write_pane_g3

0x6ce5,	// (0x00021737) fep_hwr_write_pane_g4_ParamLimits

0x6ce5,	// (0x00021737) fep_hwr_write_pane_g4

0x0005,

0xfb32,	// (0x0002a584) fep_hwr_write_pane_g_ParamLimits

0xfb32,	// (0x0002a584) fep_hwr_write_pane_g

0x13e2,	// (0x0001be34) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x13e2,	// (0x0001be34) bg_fep_hwr_candidate_pane_g2

0x6cfa,	// (0x0002174c) cell_hwr_candidate_pane_ParamLimits

0x6cfa,	// (0x0002174c) cell_hwr_candidate_pane

0x6d4c,	// (0x0002179e) fep_hwr_candidate_pane_g1_ParamLimits

0xc348,	// (0x00026d9a) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc348,	// (0x00026d9a) bg_popup_fep_shadow_pane_cp2

0xc4de,	// (0x00026f30) fep_vkb_top_pane_g4_ParamLimits

0xc4de,	// (0x00026f30) fep_vkb_top_pane_g4

0xc524,	// (0x00026f76) fep_vkb_side_pane_g2_ParamLimits

0xc524,	// (0x00026f76) fep_vkb_side_pane_g2

0x510e,	// (0x0001fb60) list_setting_pane_t4_ParamLimits

0x510e,	// (0x0001fb60) list_setting_pane_t4

0x51aa,	// (0x0001fbfc) list_setting_number_pane_t5_ParamLimits

0x51aa,	// (0x0001fbfc) list_setting_number_pane_t5

0x8788,	// (0x000231da) list_double_heading_pane_cp2_ParamLimits

0x8788,	// (0x000231da) list_double_heading_pane_cp2

0x80f0,	// (0x00022b42) list_double_heading_pane_g1_cp2_ParamLimits

0x80f0,	// (0x00022b42) list_double_heading_pane_g1_cp2

0x80fc,	// (0x00022b4e) list_double_heading_pane_g2_cp2_ParamLimits

0x80fc,	// (0x00022b4e) list_double_heading_pane_g2_cp2

0xc8a5,	// (0x000272f7) list_double_heading_pane_t1_cp2_ParamLimits

0xc8a5,	// (0x000272f7) list_double_heading_pane_t1_cp2

0xc8bb,	// (0x0002730d) list_double_heading_pane_t2_cp2_ParamLimits

0xc8bb,	// (0x0002730d) list_double_heading_pane_t2_cp2

0x7743,	// (0x00022195) aid_value_unit2

0x5fa3,	// (0x000209f5) popup_preview_fixed_window

0x7ad9,	// (0x0002252b) bg_popup_preview_window_pane_cp02

0xc8cd,	// (0x0002731f) list_preview_fixed_pane

0xc913,	// (0x00027365) list_empty_pane_fp_ParamLimits

0xc913,	// (0x00027365) list_empty_pane_fp

0xc913,	// (0x00027365) list_single_cale_day_pane_fp_ParamLimits

0xc913,	// (0x00027365) list_single_cale_day_pane_fp

0xc913,	// (0x00027365) list_single_graphic_heading_pane_fp_ParamLimits

0xc913,	// (0x00027365) list_single_graphic_heading_pane_fp

0xc913,	// (0x00027365) list_single_graphic_pane_fp_ParamLimits

0xc913,	// (0x00027365) list_single_graphic_pane_fp

0xc913,	// (0x00027365) list_single_heading_pane_fp_ParamLimits

0xc913,	// (0x00027365) list_single_heading_pane_fp

0xc913,	// (0x00027365) list_single_pane_fp_ParamLimits

0xc913,	// (0x00027365) list_single_pane_fp

0xc92c,	// (0x0002737e) list_single_pane_fp_g1_ParamLimits

0xc92c,	// (0x0002737e) list_single_pane_fp_g1

0x5923,	// (0x00020375) list_single_pane_fp_g2_ParamLimits

0x5923,	// (0x00020375) list_single_pane_fp_g2

0x592f,	// (0x00020381) list_single_pane_fp_g3_ParamLimits

0x592f,	// (0x00020381) list_single_pane_fp_g3

0xc938,	// (0x0002738a) list_single_pane_fp_g4_ParamLimits

0xc938,	// (0x0002738a) list_single_pane_fp_g4

0x0003,

0xfb94,	// (0x0002a5e6) list_single_pane_fp_g_ParamLimits

0xfb94,	// (0x0002a5e6) list_single_pane_fp_g

0x5943,	// (0x00020395) list_single_pane_fp_t1_ParamLimits

0x5943,	// (0x00020395) list_single_pane_fp_t1

0x595a,	// (0x000203ac) list_single_graphic_pane_fp_g1_ParamLimits

0x595a,	// (0x000203ac) list_single_graphic_pane_fp_g1

0xc92c,	// (0x0002737e) list_single_graphic_pane_fp_g2_ParamLimits

0xc92c,	// (0x0002737e) list_single_graphic_pane_fp_g2

0x5923,	// (0x00020375) list_single_graphic_pane_fp_g3_ParamLimits

0x5923,	// (0x00020375) list_single_graphic_pane_fp_g3

0x592f,	// (0x00020381) list_single_graphic_pane_fp_g4_ParamLimits

0x592f,	// (0x00020381) list_single_graphic_pane_fp_g4

0xc938,	// (0x0002738a) list_single_graphic_pane_fp_g5_ParamLimits

0xc938,	// (0x0002738a) list_single_graphic_pane_fp_g5

0x0004,

0xfb9d,	// (0x0002a5ef) list_single_graphic_pane_fp_g_ParamLimits

0xfb9d,	// (0x0002a5ef) list_single_graphic_pane_fp_g

0x5966,	// (0x000203b8) list_single_graphic_pane_fp_t1_ParamLimits

0x5966,	// (0x000203b8) list_single_graphic_pane_fp_t1

0x595a,	// (0x000203ac) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x595a,	// (0x000203ac) list_single_graphic_heading_pane_fp_g1

0xc92c,	// (0x0002737e) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc92c,	// (0x0002737e) list_single_graphic_heading_pane_fp_g2

0x5923,	// (0x00020375) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x5923,	// (0x00020375) list_single_graphic_heading_pane_fp_g3

0x592f,	// (0x00020381) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x592f,	// (0x00020381) list_single_graphic_heading_pane_fp_g4

0xc938,	// (0x0002738a) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc938,	// (0x0002738a) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb9d,	// (0x0002a5ef) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb9d,	// (0x0002a5ef) list_single_graphic_heading_pane_fp_g

0x597c,	// (0x000203ce) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x597c,	// (0x000203ce) list_single_graphic_heading_pane_fp_t1

0x5992,	// (0x000203e4) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x5992,	// (0x000203e4) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfba8,	// (0x0002a5fa) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfba8,	// (0x0002a5fa) list_single_graphic_heading_pane_fp_t

0x59a4,	// (0x000203f6) list_single_cale_day_pane_fp_g1_ParamLimits

0x59a4,	// (0x000203f6) list_single_cale_day_pane_fp_g1

0xc944,	// (0x00027396) list_single_cale_day_pane_fp_g2_ParamLimits

0xc944,	// (0x00027396) list_single_cale_day_pane_fp_g2

0x59dc,	// (0x0002042e) list_single_cale_day_pane_fp_g3_ParamLimits

0x59dc,	// (0x0002042e) list_single_cale_day_pane_fp_g3

0x5a04,	// (0x00020456) list_single_cale_day_pane_fp_g4_ParamLimits

0x5a04,	// (0x00020456) list_single_cale_day_pane_fp_g4

0x5a28,	// (0x0002047a) list_single_cale_day_pane_fp_g5_ParamLimits

0x5a28,	// (0x0002047a) list_single_cale_day_pane_fp_g5

0x0004,

0xfbad,	// (0x0002a5ff) list_single_cale_day_pane_fp_g_ParamLimits

0xfbad,	// (0x0002a5ff) list_single_cale_day_pane_fp_g

0x5a4c,	// (0x0002049e) list_single_cale_day_pane_fp_t1_ParamLimits

0x5a4c,	// (0x0002049e) list_single_cale_day_pane_fp_t1

0x5a72,	// (0x000204c4) list_single_cale_day_pane_fp_t2_ParamLimits

0x5a72,	// (0x000204c4) list_single_cale_day_pane_fp_t2

0x5a8b,	// (0x000204dd) list_single_cale_day_pane_fp_t3_ParamLimits

0x5a8b,	// (0x000204dd) list_single_cale_day_pane_fp_t3

0x0002,

0xfbb8,	// (0x0002a60a) list_single_cale_day_pane_fp_t_ParamLimits

0xfbb8,	// (0x0002a60a) list_single_cale_day_pane_fp_t

0xc92c,	// (0x0002737e) list_empty_pane_fp_g1_ParamLimits

0xc92c,	// (0x0002737e) list_empty_pane_fp_g1

0x5aa4,	// (0x000204f6) list_empty_pane_fp_t1

0x5ab2,	// (0x00020504) list_empty_pane_fp_t2

0x0001,

0xfbbf,	// (0x0002a611) list_empty_pane_fp_t

0xc92c,	// (0x0002737e) list_single_heading_pane_fp_g1_ParamLimits

0xc92c,	// (0x0002737e) list_single_heading_pane_fp_g1

0x5923,	// (0x00020375) list_single_heading_pane_fp_g2_ParamLimits

0x5923,	// (0x00020375) list_single_heading_pane_fp_g2

0x592f,	// (0x00020381) list_single_heading_pane_fp_g3_ParamLimits

0x592f,	// (0x00020381) list_single_heading_pane_fp_g3

0x0002,

0xfbc4,	// (0x0002a616) list_single_heading_pane_fp_g_ParamLimits

0xfbc4,	// (0x0002a616) list_single_heading_pane_fp_g

0x5ac0,	// (0x00020512) list_single_heading_pane_fp_t1_ParamLimits

0x5ac0,	// (0x00020512) list_single_heading_pane_fp_t1

0x5ad2,	// (0x00020524) list_single_heading_pane_fp_t2_ParamLimits

0x5ad2,	// (0x00020524) list_single_heading_pane_fp_t2

0x0001,

0xfbcb,	// (0x0002a61d) list_single_heading_pane_fp_t_ParamLimits

0xfbcb,	// (0x0002a61d) list_single_heading_pane_fp_t

0x82eb,	// (0x00022d3d) aid_size_cell_fast

0x7a4b,	// (0x0002249d) soft_indicator_pane_cp1_t1

0x8328,	// (0x00022d7a) cell_app_pane_cp2_ParamLimits

0x8328,	// (0x00022d7a) cell_app_pane_cp2

0x6b86,	// (0x000215d8) fep_hwr_candidate_drop_down_list_pane

0x13f0,	// (0x0001be42) fep_hwr_candidate_pane_g3_ParamLimits

0x13f0,	// (0x0001be42) fep_hwr_candidate_pane_g3

0x13fd,	// (0x0001be4f) fep_hwr_candidate_pane_g4_ParamLimits

0x13fd,	// (0x0001be4f) fep_hwr_candidate_pane_g4

0x0002,

0xfb3f,	// (0x0002a591) fep_hwr_candidate_pane_g_ParamLimits

0xfb3f,	// (0x0002a591) fep_hwr_candidate_pane_g

0xc3d8,	// (0x00026e2a) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc3d8,	// (0x00026e2a) fep_vkb_candidate_drop_down_list_pane

0xc800,	// (0x00027252) fep_vkb_candidate_pane_g3

0xc808,	// (0x0002725a) fep_vkb_candidate_pane_g4

0x0002,

0xfb6c,	// (0x0002a5be) fep_vkb_candidate_pane_g

0xc4de,	// (0x00026f30) cell_hwr_candidate_pane_g1_ParamLimits

0xc81f,	// (0x00027271) cell_hwr_candidate_pane_g3_ParamLimits

0xc81f,	// (0x00027271) cell_hwr_candidate_pane_g3

0xc840,	// (0x00027292) cell_hwr_candidate_pane_g4_ParamLimits

0xc840,	// (0x00027292) cell_hwr_candidate_pane_g4

0x0002,

0xfb86,	// (0x0002a5d8) cell_hwr_candidate_pane_g_ParamLimits

0xfb86,	// (0x0002a5d8) cell_hwr_candidate_pane_g

0xc861,	// (0x000272b3) cell_vkb_candidate_pane_g3_ParamLimits

0xc861,	// (0x000272b3) cell_vkb_candidate_pane_g3

0xc87c,	// (0x000272ce) cell_vkb_candidate_pane_g4_ParamLimits

0xc87c,	// (0x000272ce) cell_vkb_candidate_pane_g4

0xc950,	// (0x000273a2) cell_app_pane_cp2_g1_ParamLimits

0xc950,	// (0x000273a2) cell_app_pane_cp2_g1

0xc96e,	// (0x000273c0) cell_app_pane_cp2_g2_ParamLimits

0xc96e,	// (0x000273c0) cell_app_pane_cp2_g2

0x0001,

0xfbd0,	// (0x0002a622) cell_app_pane_cp2_g_ParamLimits

0xfbd0,	// (0x0002a622) cell_app_pane_cp2_g

0xc97a,	// (0x000273cc) cell_app_pane_cp2_t1_ParamLimits

0xc97a,	// (0x000273cc) cell_app_pane_cp2_t1

0x80d6,	// (0x00022b28) grid_highlight_pane_cp1_ParamLimits

0x80d6,	// (0x00022b28) grid_highlight_pane_cp1

0x6dd8,	// (0x0002182a) cell_hwr_candidate_pane_cp1_ParamLimits

0x6dd8,	// (0x0002182a) cell_hwr_candidate_pane_cp1

0xc4de,	// (0x00026f30) fep_hwr_candidate_drop_down_list_pane_g1

0xc98c,	// (0x000273de) fep_hwr_candidate_drop_down_list_pane_g2

0xc999,	// (0x000273eb) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbd5,	// (0x0002a627) fep_hwr_candidate_drop_down_list_pane_g

0x6dfc,	// (0x0002184e) fep_hwr_candidate_drop_down_list_scroll_pane

0x6e05,	// (0x00021857) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6e05,	// (0x00021857) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x6e12,	// (0x00021864) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6e12,	// (0x00021864) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x6e1f,	// (0x00021871) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6e1f,	// (0x00021871) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc861,	// (0x000272b3) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc861,	// (0x000272b3) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc87c,	// (0x000272ce) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc87c,	// (0x000272ce) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x6e2c,	// (0x0002187e) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6e2c,	// (0x0002187e) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x6e47,	// (0x00021899) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6e47,	// (0x00021899) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x6e62,	// (0x000218b4) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6e62,	// (0x000218b4) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbdc,	// (0x0002a62e) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbdc,	// (0x0002a62e) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc9a6,	// (0x000273f8) cell_vkb_candidate_pane_cp1_ParamLimits

0xc9a6,	// (0x000273f8) cell_vkb_candidate_pane_cp1

0xc4de,	// (0x00026f30) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc4de,	// (0x00026f30) fep_vkb_candidate_drop_down_list_pane_g1

0xc98c,	// (0x000273de) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc98c,	// (0x000273de) fep_vkb_candidate_drop_down_list_pane_g2

0xc999,	// (0x000273eb) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc999,	// (0x000273eb) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbd5,	// (0x0002a627) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbd5,	// (0x0002a627) fep_vkb_candidate_drop_down_list_pane_g

0xc9cc,	// (0x0002741e) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc9cc,	// (0x0002741e) fep_vkb_candidate_drop_down_list_scroll_pane

0xc9d9,	// (0x0002742b) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc9d9,	// (0x0002742b) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc9e6,	// (0x00027438) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc9e6,	// (0x00027438) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc9f2,	// (0x00027444) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc9f2,	// (0x00027444) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc81f,	// (0x00027271) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc81f,	// (0x00027271) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc840,	// (0x00027292) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc840,	// (0x00027292) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc9fe,	// (0x00027450) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc9fe,	// (0x00027450) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xca1f,	// (0x00027471) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xca1f,	// (0x00027471) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xca40,	// (0x00027492) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xca40,	// (0x00027492) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbed,	// (0x0002a63f) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbed,	// (0x0002a63f) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x7779,	// (0x000221cb) title_pane_g1_ParamLimits

0x7786,	// (0x000221d8) title_pane_g2_ParamLimits

0xf592,	// (0x00029fe4) title_pane_g_ParamLimits

0x8736,	// (0x00023188) aid_call2_pane

0x873e,	// (0x00023190) aid_call_pane

0x8746,	// (0x00023198) popup_clock_analogue_window_g1

0x8746,	// (0x00023198) popup_clock_analogue_window_g2

0x6315,	// (0x00020d67) popup_clock_analogue_window_g3

0x631e,	// (0x00020d70) popup_clock_analogue_window_g4

0x7765,	// (0x000221b7) popup_clock_analogue_window_g5

0x0004,

0xf73c,	// (0x0002a18e) popup_clock_analogue_window_g

0x6326,	// (0x00020d78) popup_clock_analogue_window_t1

0x6334,	// (0x00020d86) clock_digital_number_pane_ParamLimits

0x6334,	// (0x00020d86) clock_digital_number_pane

0x6340,	// (0x00020d92) clock_digital_number_pane_cp02_ParamLimits

0x6340,	// (0x00020d92) clock_digital_number_pane_cp02

0x634c,	// (0x00020d9e) clock_digital_number_pane_cp03_ParamLimits

0x634c,	// (0x00020d9e) clock_digital_number_pane_cp03

0x6358,	// (0x00020daa) clock_digital_number_pane_cp04_ParamLimits

0x6358,	// (0x00020daa) clock_digital_number_pane_cp04

0x6364,	// (0x00020db6) clock_digital_separator_pane_ParamLimits

0x6364,	// (0x00020db6) clock_digital_separator_pane

0x6370,	// (0x00020dc2) popup_clock_digital_window_t1_ParamLimits

0x6370,	// (0x00020dc2) popup_clock_digital_window_t1

0x7765,	// (0x000221b7) clock_digital_number_pane_g1

0x7765,	// (0x000221b7) clock_digital_number_pane_g2

0x0001,

0xf747,	// (0x0002a199) clock_digital_number_pane_g

0x7765,	// (0x000221b7) clock_digital_separator_pane_g1

0x7765,	// (0x000221b7) clock_digital_separator_pane_g2

0x0001,

0xf747,	// (0x0002a199) clock_digital_separator_pane_g

0x96f9,	// (0x0002414b) aid_fill_nsta_ParamLimits

0x9849,	// (0x0002429b) indicator_nsta_pane_ParamLimits

0x99d9,	// (0x0002442b) popup_clock_analogue_window

0x99d9,	// (0x0002442b) popup_clock_digital_window

0x784f,	// (0x000222a1) grid_indicator_nsta_pane_ParamLimits

0xbc9d,	// (0x000266ef) clock_nsta_pane_t2

0x0001,

0xfacc,	// (0x0002a51e) clock_nsta_pane_t

0x62d9,	// (0x00020d2b) aid_size_max_handle

0x62e3,	// (0x00020d35) aid_size_min_handle

0x8d40,	// (0x00023792) editor_scroll_pane

0xca5b,	// (0x000274ad) ex_editor_pane

0x8258,	// (0x00022caa) scroll_pane_cp13

0x8075,	// (0x00022ac7) scroll_pane_cp14

0x8770,	// (0x000231c2) scroll_pane_cp36

0x879e,	// (0x000231f0) list_single_graphic_hl_pane_cp2_ParamLimits

0x879e,	// (0x000231f0) list_single_graphic_hl_pane_cp2

0x566d,	// (0x000200bf) list_single_graphic_hl_pane_ParamLimits

0x566d,	// (0x000200bf) list_single_graphic_hl_pane

0x5ae8,	// (0x0002053a) aid_size_min_hl_cp1

0xca63,	// (0x000274b5) list_highlight_pane_cp34_ParamLimits

0xca63,	// (0x000274b5) list_highlight_pane_cp34

0xca74,	// (0x000274c6) list_single_graphic_hl_pane_g1_ParamLimits

0xca74,	// (0x000274c6) list_single_graphic_hl_pane_g1

0x5af1,	// (0x00020543) list_single_graphic_hl_pane_g2_ParamLimits

0x5af1,	// (0x00020543) list_single_graphic_hl_pane_g2

0x5af1,	// (0x00020543) list_single_graphic_hl_pane_g3_ParamLimits

0x5af1,	// (0x00020543) list_single_graphic_hl_pane_g3

0x54e1,	// (0x0001ff33) list_single_graphic_hl_pane_g4_ParamLimits

0x54e1,	// (0x0001ff33) list_single_graphic_hl_pane_g4

0x5afd,	// (0x0002054f) list_single_graphic_hl_pane_g5_ParamLimits

0x5afd,	// (0x0002054f) list_single_graphic_hl_pane_g5

0x0004,

0xfbfe,	// (0x0002a650) list_single_graphic_hl_pane_g_ParamLimits

0xfbfe,	// (0x0002a650) list_single_graphic_hl_pane_g

0x5b11,	// (0x00020563) list_single_graphic_hl_pane_t1_ParamLimits

0x5b11,	// (0x00020563) list_single_graphic_hl_pane_t1

0xca81,	// (0x000274d3) aid_size_min_hl_cp2

0xca8a,	// (0x000274dc) list_highlight_pane_cp34_cp2_ParamLimits

0xca8a,	// (0x000274dc) list_highlight_pane_cp34_cp2

0xca74,	// (0x000274c6) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xca74,	// (0x000274c6) list_single_graphic_hl_pane_g1_cp2

0xca97,	// (0x000274e9) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xca97,	// (0x000274e9) list_single_graphic_hl_pane_g2_cp2

0xcaa3,	// (0x000274f5) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xcaa3,	// (0x000274f5) list_single_graphic_hl_pane_g3_cp2

0x8866,	// (0x000232b8) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x8866,	// (0x000232b8) list_single_graphic_hl_pane_g4_cp2

0xcab1,	// (0x00027503) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xcab1,	// (0x00027503) list_single_graphic_hl_pane_g5_cp2

0x6629,	// (0x0002107b) control_pane_g4_ParamLimits

0x6629,	// (0x0002107b) control_pane_g4

0x90c6,	// (0x00023b18) bg_popup_sub_pane_cp10_ParamLimits

0xc250,	// (0x00026ca2) list_choice_list_pane_ParamLimits

0xc25f,	// (0x00026cb1) scroll_pane_cp23

0x7ad9,	// (0x0002252b) bg_popup_preview_window_pane_cp02_ParamLimits

0xc8cd,	// (0x0002731f) list_preview_fixed_pane_ParamLimits

0xc8e3,	// (0x00027335) list_preview_fixed_pane_cp_ParamLimits

0xc8e3,	// (0x00027335) list_preview_fixed_pane_cp

0xc8ef,	// (0x00027341) popup_preview_fixed_window_g1_ParamLimits

0xc8ef,	// (0x00027341) popup_preview_fixed_window_g1

0xc8fb,	// (0x0002734d) popup_preview_fixed_window_g2_ParamLimits

0xc8fb,	// (0x0002734d) popup_preview_fixed_window_g2

0x0002,

0xfb8d,	// (0x0002a5df) popup_preview_fixed_window_g_ParamLimits

0xfb8d,	// (0x0002a5df) popup_preview_fixed_window_g

0x624b,	// (0x00020c9d) aid_navi_side_left_pane_ParamLimits

0x6260,	// (0x00020cb2) aid_navi_side_right_pane_ParamLimits

0x6278,	// (0x00020cca) navi_icon_pane_stacon_ParamLimits

0x628c,	// (0x00020cde) navi_navi_pane_stacon_ParamLimits

0x6278,	// (0x00020cca) navi_text_pane_stacon_ParamLimits

0x775b,	// (0x000221ad) main_text_info_pane

0xcadb,	// (0x0002752d) listscroll_text_info_pane

0xcae3,	// (0x00027535) list_text_info_pane_ParamLimits

0xcae3,	// (0x00027535) list_text_info_pane

0xcaf2,	// (0x00027544) scroll_pane_cp24_ParamLimits

0xcaf2,	// (0x00027544) scroll_pane_cp24

0xcb10,	// (0x00027562) list_text_info_pane_t1_ParamLimits

0xcb10,	// (0x00027562) list_text_info_pane_t1

0x910c,	// (0x00023b5e) popup_fast_swap2_window_ParamLimits

0x910c,	// (0x00023b5e) popup_fast_swap2_window

0xcb35,	// (0x00027587) aid_size_cell_fast2

0x775b,	// (0x000221ad) bg_popup_window_pane_cp17

0xa08c,	// (0x00024ade) heading_pane_cp2

0x7d39,	// (0x0002278b) listscroll_fast2_pane

0xcb3f,	// (0x00027591) grid_fast2_pane

0xcb49,	// (0x0002759b) listscroll_fast2_pane_g1

0xcb53,	// (0x000275a5) listscroll_fast2_pane_g2

0x0001,

0xfc09,	// (0x0002a65b) listscroll_fast2_pane_g

0x8258,	// (0x00022caa) scroll_pane_cp26

0xcb5d,	// (0x000275af) cell_fast2_pane_ParamLimits

0xcb5d,	// (0x000275af) cell_fast2_pane

0xcb74,	// (0x000275c6) cell_fast2_pane_g1

0xcb7d,	// (0x000275cf) cell_fast2_pane_g2

0xcb86,	// (0x000275d8) cell_fast2_pane_g3

0x0002,

0xfc0e,	// (0x0002a660) cell_fast2_pane_g

0x7e32,	// (0x00022884) grid_highlight_pane_cp9

0x7e47,	// (0x00022899) main_eswt_pane_ParamLimits

0x7e47,	// (0x00022899) main_eswt_pane

0xcb07,	// (0x00027559) list_single_text_info_pane

0xcb8e,	// (0x000275e0) eswt_ctrl_button_pane

0xcb8e,	// (0x000275e0) eswt_ctrl_canvas_pane

0xcb96,	// (0x000275e8) eswt_ctrl_combo_pane

0xcb8e,	// (0x000275e0) eswt_ctrl_default_pane

0xcb8e,	// (0x000275e0) eswt_ctrl_label_pane

0xcb9e,	// (0x000275f0) eswt_ctrl_wait_pane

0xcba6,	// (0x000275f8) eswt_shell_pane

0x775b,	// (0x000221ad) listscroll_eswt_app_pane

0xcbc6,	// (0x00027618) popup_eswt_tasktip_window_ParamLimits

0xcbc6,	// (0x00027618) popup_eswt_tasktip_window

0x9cf4,	// (0x00024746) bg_popup_window_pane_cp18

0xcbd7,	// (0x00027629) eswt_control_pane_g1_ParamLimits

0xcbd7,	// (0x00027629) eswt_control_pane_g1

0xcbe4,	// (0x00027636) eswt_control_pane_g2_ParamLimits

0xcbe4,	// (0x00027636) eswt_control_pane_g2

0xcbf1,	// (0x00027643) eswt_control_pane_g3_ParamLimits

0xcbf1,	// (0x00027643) eswt_control_pane_g3

0xcbfe,	// (0x00027650) eswt_control_pane_g4_ParamLimits

0xcbfe,	// (0x00027650) eswt_control_pane_g4

0x0003,

0xfc15,	// (0x0002a667) eswt_control_pane_g_ParamLimits

0xfc15,	// (0x0002a667) eswt_control_pane_g

0x80d6,	// (0x00022b28) bg_button_pane_ParamLimits

0x80d6,	// (0x00022b28) bg_button_pane

0x7e47,	// (0x00022899) common_borders_pane_copy2_ParamLimits

0x7e47,	// (0x00022899) common_borders_pane_copy2

0xcc0b,	// (0x0002765d) control_button_pane_g1_ParamLimits

0xcc0b,	// (0x0002765d) control_button_pane_g1

0xcc17,	// (0x00027669) control_button_pane_g2_ParamLimits

0xcc17,	// (0x00027669) control_button_pane_g2

0xcc23,	// (0x00027675) control_button_pane_g3_ParamLimits

0xcc23,	// (0x00027675) control_button_pane_g3

0x0002,

0xfc1e,	// (0x0002a670) control_button_pane_g_ParamLimits

0xfc1e,	// (0x0002a670) control_button_pane_g

0xcc37,	// (0x00027689) control_button_pane_t1

0xcc45,	// (0x00027697) control_button_pane_t2

0x0001,

0xfc25,	// (0x0002a677) control_button_pane_t

0x9c02,	// (0x00024654) bg_button_pane_g1

0x9c0a,	// (0x0002465c) bg_button_pane_g2

0x9c12,	// (0x00024664) bg_button_pane_g3

0x9c1a,	// (0x0002466c) bg_button_pane_g4

0x9c22,	// (0x00024674) bg_button_pane_g5

0x9c2a,	// (0x0002467c) bg_button_pane_g6

0x9c32,	// (0x00024684) bg_button_pane_g7

0x9c3a,	// (0x0002468c) bg_button_pane_g8

0x9c42,	// (0x00024694) bg_button_pane_g9

0x0008,

0xf89f,	// (0x0002a2f1) bg_button_pane_g

0xc20b,	// (0x00026c5d) common_borders_pane_ParamLimits

0xc20b,	// (0x00026c5d) common_borders_pane

0xcbd7,	// (0x00027629) eswt_control_pane_g1_copy1_ParamLimits

0xcbd7,	// (0x00027629) eswt_control_pane_g1_copy1

0xcbe4,	// (0x00027636) eswt_control_pane_g2_copy1_ParamLimits

0xcbe4,	// (0x00027636) eswt_control_pane_g2_copy1

0xcbf1,	// (0x00027643) eswt_control_pane_g3_copy1_ParamLimits

0xcbf1,	// (0x00027643) eswt_control_pane_g3_copy1

0xcbfe,	// (0x00027650) eswt_control_pane_g4_copy1_ParamLimits

0xcbfe,	// (0x00027650) eswt_control_pane_g4_copy1

0xc246,	// (0x00026c98) bg_eswt_ctrl_canvas_pane_g1

0xc20b,	// (0x00026c5d) common_borders_pane_cp2_ParamLimits

0xc20b,	// (0x00026c5d) common_borders_pane_cp2

0xc20b,	// (0x00026c5d) common_borders_pane_cp3_ParamLimits

0xc20b,	// (0x00026c5d) common_borders_pane_cp3

0xcc53,	// (0x000276a5) separator_horizontal_pane

0xcc5b,	// (0x000276ad) separator_vertical_pane

0xcbd7,	// (0x00027629) eswt_control_pane_g1_copy2_ParamLimits

0xcbd7,	// (0x00027629) eswt_control_pane_g1_copy2

0xcbe4,	// (0x00027636) eswt_control_pane_g2_copy2_ParamLimits

0xcbe4,	// (0x00027636) eswt_control_pane_g2_copy2

0xcbf1,	// (0x00027643) eswt_control_pane_g3_copy2_ParamLimits

0xcbf1,	// (0x00027643) eswt_control_pane_g3_copy2

0xcbfe,	// (0x00027650) eswt_control_pane_g4_copy2_ParamLimits

0xcbfe,	// (0x00027650) eswt_control_pane_g4_copy2

0x775b,	// (0x000221ad) common_borders_pane_cp4

0xcc64,	// (0x000276b6) separator_horizontal_pane_g1

0xcc6d,	// (0x000276bf) separator_horizontal_pane_g2

0xcc76,	// (0x000276c8) separator_horizontal_pane_g3

0x0002,

0xfc2a,	// (0x0002a67c) separator_horizontal_pane_g

0xcbd7,	// (0x00027629) eswt_control_pane_g1_copy3_ParamLimits

0xcbd7,	// (0x00027629) eswt_control_pane_g1_copy3

0xcbe4,	// (0x00027636) eswt_control_pane_g2_copy3_ParamLimits

0xcbe4,	// (0x00027636) eswt_control_pane_g2_copy3

0xcbf1,	// (0x00027643) eswt_control_pane_g3_copy3_ParamLimits

0xcbf1,	// (0x00027643) eswt_control_pane_g3_copy3

0xcbfe,	// (0x00027650) eswt_control_pane_g4_copy3_ParamLimits

0xcbfe,	// (0x00027650) eswt_control_pane_g4_copy3

0x775b,	// (0x000221ad) common_borders_pane_cp5

0xcc7f,	// (0x000276d1) separator_vertical_pane_g1

0xcc88,	// (0x000276da) separator_vertical_pane_g2

0xcc91,	// (0x000276e3) separator_vertical_pane_g3

0x0002,

0xfc31,	// (0x0002a683) separator_vertical_pane_g

0xcbd7,	// (0x00027629) eswt_control_pane_g1_copy4_ParamLimits

0xcbd7,	// (0x00027629) eswt_control_pane_g1_copy4

0xcbe4,	// (0x00027636) eswt_control_pane_g2_copy4_ParamLimits

0xcbe4,	// (0x00027636) eswt_control_pane_g2_copy4

0xcbf1,	// (0x00027643) eswt_control_pane_g3_copy4_ParamLimits

0xcbf1,	// (0x00027643) eswt_control_pane_g3_copy4

0xcbfe,	// (0x00027650) eswt_control_pane_g4_copy4_ParamLimits

0xcbfe,	// (0x00027650) eswt_control_pane_g4_copy4

0xcc9a,	// (0x000276ec) eswt_ctrl_combo_button_pane

0xcca2,	// (0x000276f4) eswt_ctrl_input_pane

0xccaa,	// (0x000276fc) popup_choice_list_window_cp70

0xccb2,	// (0x00027704) eswt_ctrl_input_pane_t1

0x775b,	// (0x000221ad) input_focus_pane_cp70

0xc20b,	// (0x00026c5d) bg_button_pane_cp70_ParamLimits

0xc20b,	// (0x00026c5d) bg_button_pane_cp70

0xccc0,	// (0x00027712) eswt_ctrl_combo_button_pane_g1

0xccc8,	// (0x0002771a) wait_bar_pane_cp70

0x9cf4,	// (0x00024746) bg_popup_window_pane_cp70_ParamLimits

0x9cf4,	// (0x00024746) bg_popup_window_pane_cp70

0xccd0,	// (0x00027722) popup_eswt_tasktip_window_t1

0xcce6,	// (0x00027738) wait_bar_pane_cp71_ParamLimits

0xcce6,	// (0x00027738) wait_bar_pane_cp71

0xccf2,	// (0x00027744) grid_eswt_app_pane

0x8583,	// (0x00022fd5) scroll_pane_cp70

0xccfb,	// (0x0002774d) cell_eswt_app_pane_ParamLimits

0xccfb,	// (0x0002774d) cell_eswt_app_pane

0xcd2d,	// (0x0002777f) cell_eswt_app_pane_g1_ParamLimits

0xcd2d,	// (0x0002777f) cell_eswt_app_pane_g1

0xcd5c,	// (0x000277ae) cell_eswt_app_pane_g2_ParamLimits

0xcd5c,	// (0x000277ae) cell_eswt_app_pane_g2

0x0001,

0xfc38,	// (0x0002a68a) cell_eswt_app_pane_g_ParamLimits

0xfc38,	// (0x0002a68a) cell_eswt_app_pane_g

0xcd85,	// (0x000277d7) cell_eswt_app_pane_t1_ParamLimits

0xcd85,	// (0x000277d7) cell_eswt_app_pane_t1

0xcdb7,	// (0x00027809) grid_highlight_pane_cp70_ParamLimits

0xcdb7,	// (0x00027809) grid_highlight_pane_cp70

0xb154,	// (0x00025ba6) set_content_pane_g1

0x8ff0,	// (0x00023a42) status_small_volume_pane

0x6e7d,	// (0x000218cf) status_small_volume_pane_g1

0x6e85,	// (0x000218d7) volume_small2_pane

0x6e8e,	// (0x000218e0) volume_small2_pane_g1

0x6e97,	// (0x000218e9) volume_small2_pane_g2

0x6ea0,	// (0x000218f2) volume_small2_pane_g3

0x6ea9,	// (0x000218fb) volume_small2_pane_g4

0x6eb2,	// (0x00021904) volume_small2_pane_g5

0x6ebb,	// (0x0002190d) volume_small2_pane_g6

0x6ec4,	// (0x00021916) volume_small2_pane_g7

0x6ecd,	// (0x0002191f) volume_small2_pane_g8

0x6ed6,	// (0x00021928) volume_small2_pane_g9

0x6edf,	// (0x00021931) volume_small2_pane_g10

0x0009,

0xfc3d,	// (0x0002a68f) volume_small2_pane_g

0xc632,	// (0x00027084) fep_vkb_top_text_pane_g1_ParamLimits

0xc64d,	// (0x0002709f) fep_vkb_top_text_pane_t1_ParamLimits

0xc907,	// (0x00027359) popup_preview_fixed_window_g3_ParamLimits

0xc907,	// (0x00027359) popup_preview_fixed_window_g3

0x961d,	// (0x0002406f) popup_toolbar_trans_pane

0xaff9,	// (0x00025a4b) aid_height_set_list_ParamLimits

0xb00a,	// (0x00025a5c) aid_size_parent_ParamLimits

0x90c6,	// (0x00023b18) list_highlight_pane_cp2_ParamLimits

0xb154,	// (0x00025ba6) set_content_pane_g1_ParamLimits

0xb25d,	// (0x00025caf) list_single_image_pane_ParamLimits

0xb25d,	// (0x00025caf) list_single_image_pane

0xcdc3,	// (0x00027815) aid_size_cell_image_ParamLimits

0xcdc3,	// (0x00027815) aid_size_cell_image

0xcdd0,	// (0x00027822) grid_single_image_pane_ParamLimits

0xcdd0,	// (0x00027822) grid_single_image_pane

0x80f0,	// (0x00022b42) list_single_image_pane_g1_ParamLimits

0x80f0,	// (0x00022b42) list_single_image_pane_g1

0x80fc,	// (0x00022b4e) list_single_image_pane_g2_ParamLimits

0x80fc,	// (0x00022b4e) list_single_image_pane_g2

0x0001,

0xfc52,	// (0x0002a6a4) list_single_image_pane_g_ParamLimits

0xfc52,	// (0x0002a6a4) list_single_image_pane_g

0xcdde,	// (0x00027830) list_single_image_pane_t1_ParamLimits

0xcdde,	// (0x00027830) list_single_image_pane_t1

0xcdf4,	// (0x00027846) cell_image_list_pane_ParamLimits

0xcdf4,	// (0x00027846) cell_image_list_pane

0xce0a,	// (0x0002785c) cell_image_list_pane_g1

0xce13,	// (0x00027865) cell_image_list_pane_g2

0x0001,

0xfc57,	// (0x0002a6a9) cell_image_list_pane_g

0xce1c,	// (0x0002786e) aid_size_cell_tb_trans_pane

0x80d6,	// (0x00022b28) bg_tb_trans_pane

0xce2e,	// (0x00027880) grid_tb_trans_pane

0x9c02,	// (0x00024654) bg_tb_trans_pane_g1

0x9c0a,	// (0x0002465c) bg_tb_trans_pane_g2

0x9c12,	// (0x00024664) bg_tb_trans_pane_g3

0x9c1a,	// (0x0002466c) bg_tb_trans_pane_g4

0x9c22,	// (0x00024674) bg_tb_trans_pane_g5

0x9c3a,	// (0x0002468c) bg_tb_trans_pane_g6

0x9c42,	// (0x00024694) bg_tb_trans_pane_g7

0x9c2a,	// (0x0002467c) bg_tb_trans_pane_g8

0x9c32,	// (0x00024684) bg_tb_trans_pane_g9

0x0008,

0xfc5c,	// (0x0002a6ae) bg_tb_trans_pane_g

0xce42,	// (0x00027894) cell_toolbar_trans_pane_ParamLimits

0xce42,	// (0x00027894) cell_toolbar_trans_pane

0xc246,	// (0x00026c98) cell_toolbar_trans_pane_g1

0xbe67,	// (0x000268b9) list_form2_midp_pane_t1

0xbe75,	// (0x000268c7) list_form2_midp_pane_t2

0x0001,

0xfb05,	// (0x0002a557) list_form2_midp_pane_t

0xbe83,	// (0x000268d5) scroll_pane_cp51_ParamLimits

0xc04a,	// (0x00026a9c) form2_midp_wait_pane_g1

0xc053,	// (0x00026aa5) form2_midp_wait_pane_g2

0xc05c,	// (0x00026aae) form2_midp_wait_pane_g3

0x0002,

0xfb1a,	// (0x0002a56c) form2_midp_wait_pane_g

0x784f,	// (0x000222a1) list_highlight_pane_cp21_ParamLimits

0xc0a0,	// (0x00026af2) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xc0af,	// (0x00026b01) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xb216,	// (0x00025c68) list_single_2graphic_im_pane_ParamLimits

0xb216,	// (0x00025c68) list_single_2graphic_im_pane

0xce68,	// (0x000278ba) list_single_2graphic_im_pane_g1_ParamLimits

0xce68,	// (0x000278ba) list_single_2graphic_im_pane_g1

0xce79,	// (0x000278cb) list_single_2graphic_im_pane_g2_ParamLimits

0xce79,	// (0x000278cb) list_single_2graphic_im_pane_g2

0xce85,	// (0x000278d7) list_single_2graphic_im_pane_g3_ParamLimits

0xce85,	// (0x000278d7) list_single_2graphic_im_pane_g3

0x0003,

0xfc6f,	// (0x0002a6c1) list_single_2graphic_im_pane_g_ParamLimits

0xfc6f,	// (0x0002a6c1) list_single_2graphic_im_pane_g

0xcea5,	// (0x000278f7) list_single_2graphic_im_pane_t1_ParamLimits

0xcea5,	// (0x000278f7) list_single_2graphic_im_pane_t1

0xc913,	// (0x00027365) list_single_graphic_2heading_pane_fp_ParamLimits

0xc913,	// (0x00027365) list_single_graphic_2heading_pane_fp

0x595a,	// (0x000203ac) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x595a,	// (0x000203ac) list_single_graphic_2heading_pane_fp_g1

0xc92c,	// (0x0002737e) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc92c,	// (0x0002737e) list_single_graphic_2heading_pane_fp_g2

0x5923,	// (0x00020375) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x5923,	// (0x00020375) list_single_graphic_2heading_pane_fp_g3

0x592f,	// (0x00020381) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x592f,	// (0x00020381) list_single_graphic_2heading_pane_fp_g4

0xc938,	// (0x0002738a) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc938,	// (0x0002738a) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb9d,	// (0x0002a5ef) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb9d,	// (0x0002a5ef) list_single_graphic_2heading_pane_fp_g

0x5b27,	// (0x00020579) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x5b27,	// (0x00020579) list_single_graphic_2heading_pane_fp_t1

0x5992,	// (0x000203e4) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x5992,	// (0x000203e4) list_single_graphic_2heading_pane_fp_t2

0x5b3d,	// (0x0002058f) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x5b3d,	// (0x0002058f) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc78,	// (0x0002a6ca) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc78,	// (0x0002a6ca) list_single_graphic_2heading_pane_fp_t

0xc2f4,	// (0x00026d46) fep_hwr_write_pane_g5_ParamLimits

0xc2f4,	// (0x00026d46) fep_hwr_write_pane_g5

0xc300,	// (0x00026d52) fep_hwr_write_pane_g6_ParamLimits

0xc300,	// (0x00026d52) fep_hwr_write_pane_g6

0xcba6,	// (0x000275f8) eswt_shell_pane_ParamLimits

0x9cf4,	// (0x00024746) bg_popup_window_pane_cp18_ParamLimits

0xaf50,	// (0x000259a2) heading_pane_cp70

0xccd0,	// (0x00027722) popup_eswt_tasktip_window_t1_ParamLimits

0x9750,	// (0x000241a2) aid_touch_tab_arrow_left

0x975f,	// (0x000241b1) aid_touch_tab_arrow_right

0x7797,	// (0x000221e9) title_pane_g3_ParamLimits

0x7797,	// (0x000221e9) title_pane_g3

0x8095,	// (0x00022ae7) set_value_pane_g1

0x961d,	// (0x0002406f) popup_toolbar_trans_pane_ParamLimits

0xce1c,	// (0x0002786e) aid_size_cell_tb_trans_pane_ParamLimits

0x80d6,	// (0x00022b28) bg_tb_trans_pane_ParamLimits

0xce2e,	// (0x00027880) grid_tb_trans_pane_ParamLimits

0x7ad9,	// (0x0002252b) cont_note_pane_ParamLimits

0x7ad9,	// (0x0002252b) cont_note_pane

0x7e47,	// (0x00022899) cont_snote2_single_text_pane_ParamLimits

0x7e47,	// (0x00022899) cont_snote2_single_text_pane

0x7e47,	// (0x00022899) cont_snote2_single_graphic_pane_ParamLimits

0x7e47,	// (0x00022899) cont_snote2_single_graphic_pane

0xa277,	// (0x00024cc9) cont_note_wait_pane_ParamLimits

0xa277,	// (0x00024cc9) cont_note_wait_pane

0xa277,	// (0x00024cc9) cont_note_image_pane_ParamLimits

0xa277,	// (0x00024cc9) cont_note_image_pane

0xced6,	// (0x00027928) popup_note2_window_g1_ParamLimits

0xced6,	// (0x00027928) popup_note2_window_g1

0xcf07,	// (0x00027959) popup_note2_window_t1_ParamLimits

0xcf07,	// (0x00027959) popup_note2_window_t1

0xcf4c,	// (0x0002799e) popup_note2_window_t2_ParamLimits

0xcf4c,	// (0x0002799e) popup_note2_window_t2

0xcf91,	// (0x000279e3) popup_note2_window_t3_ParamLimits

0xcf91,	// (0x000279e3) popup_note2_window_t3

0xcfd6,	// (0x00027a28) popup_note2_window_t4_ParamLimits

0xcfd6,	// (0x00027a28) popup_note2_window_t4

0x7b5d,	// (0x000225af) popup_note2_window_t5_ParamLimits

0x7b5d,	// (0x000225af) popup_note2_window_t5

0x0004,

0xfc84,	// (0x0002a6d6) popup_note2_window_t_ParamLimits

0xfc84,	// (0x0002a6d6) popup_note2_window_t

0xd005,	// (0x00027a57) popup_note2_image_window_g1_ParamLimits

0xd005,	// (0x00027a57) popup_note2_image_window_g1

0xd011,	// (0x00027a63) popup_note2_image_window_g2_ParamLimits

0xd011,	// (0x00027a63) popup_note2_image_window_g2

0x0001,

0xfc8f,	// (0x0002a6e1) popup_note2_image_window_g_ParamLimits

0xfc8f,	// (0x0002a6e1) popup_note2_image_window_g

0xd023,	// (0x00027a75) popup_note2_image_window_t1_ParamLimits

0xd023,	// (0x00027a75) popup_note2_image_window_t1

0xd03b,	// (0x00027a8d) popup_note2_image_window_t2_ParamLimits

0xd03b,	// (0x00027a8d) popup_note2_image_window_t2

0xd053,	// (0x00027aa5) popup_note2_image_window_t3_ParamLimits

0xd053,	// (0x00027aa5) popup_note2_image_window_t3

0x0002,

0xfc94,	// (0x0002a6e6) popup_note2_image_window_t_ParamLimits

0xfc94,	// (0x0002a6e6) popup_note2_image_window_t

0xa285,	// (0x00024cd7) popup_note2_wait_window_g1_ParamLimits

0xa285,	// (0x00024cd7) popup_note2_wait_window_g1

0xd06f,	// (0x00027ac1) popup_note2_wait_window_g2_ParamLimits

0xd06f,	// (0x00027ac1) popup_note2_wait_window_g2

0xa29d,	// (0x00024cef) popup_note2_wait_window_g3_ParamLimits

0xa29d,	// (0x00024cef) popup_note2_wait_window_g3

0x0002,

0xfc9b,	// (0x0002a6ed) popup_note2_wait_window_g_ParamLimits

0xfc9b,	// (0x0002a6ed) popup_note2_wait_window_g

0xd07b,	// (0x00027acd) popup_note2_wait_window_t1_ParamLimits

0xd07b,	// (0x00027acd) popup_note2_wait_window_t1

0xd099,	// (0x00027aeb) popup_note2_wait_window_t2_ParamLimits

0xd099,	// (0x00027aeb) popup_note2_wait_window_t2

0xd0b7,	// (0x00027b09) popup_note2_wait_window_t3_ParamLimits

0xd0b7,	// (0x00027b09) popup_note2_wait_window_t3

0xd0c9,	// (0x00027b1b) popup_note2_wait_window_t4_ParamLimits

0xd0c9,	// (0x00027b1b) popup_note2_wait_window_t4

0x0003,

0xfca2,	// (0x0002a6f4) popup_note2_wait_window_t_ParamLimits

0xfca2,	// (0x0002a6f4) popup_note2_wait_window_t

0xd0db,	// (0x00027b2d) wait_bar2_pane_ParamLimits

0xd0db,	// (0x00027b2d) wait_bar2_pane

0xd0f3,	// (0x00027b45) popup_snote2_single_text_window_g1_ParamLimits

0xd0f3,	// (0x00027b45) popup_snote2_single_text_window_g1

0xd11b,	// (0x00027b6d) popup_snote2_single_text_window_t1_ParamLimits

0xd11b,	// (0x00027b6d) popup_snote2_single_text_window_t1

0xd167,	// (0x00027bb9) popup_snote2_single_text_window_t2_ParamLimits

0xd167,	// (0x00027bb9) popup_snote2_single_text_window_t2

0xd1b3,	// (0x00027c05) popup_snote2_single_text_window_t3_ParamLimits

0xd1b3,	// (0x00027c05) popup_snote2_single_text_window_t3

0xd1f4,	// (0x00027c46) popup_snote2_single_text_window_t4_ParamLimits

0xd1f4,	// (0x00027c46) popup_snote2_single_text_window_t4

0xd22a,	// (0x00027c7c) popup_snote2_single_text_window_t5_ParamLimits

0xd22a,	// (0x00027c7c) popup_snote2_single_text_window_t5

0x0004,

0xfcab,	// (0x0002a6fd) popup_snote2_single_text_window_t_ParamLimits

0xfcab,	// (0x0002a6fd) popup_snote2_single_text_window_t

0xd255,	// (0x00027ca7) popup_snote2_single_graphic_window_g1_ParamLimits

0xd255,	// (0x00027ca7) popup_snote2_single_graphic_window_g1

0xd27d,	// (0x00027ccf) popup_snote2_single_graphic_window_g2_ParamLimits

0xd27d,	// (0x00027ccf) popup_snote2_single_graphic_window_g2

0x0001,

0xfcb6,	// (0x0002a708) popup_snote2_single_graphic_window_g_ParamLimits

0xfcb6,	// (0x0002a708) popup_snote2_single_graphic_window_g

0xd2a5,	// (0x00027cf7) popup_snote2_single_graphic_window_t1_ParamLimits

0xd2a5,	// (0x00027cf7) popup_snote2_single_graphic_window_t1

0xd2f1,	// (0x00027d43) popup_snote2_single_graphic_window_t2_ParamLimits

0xd2f1,	// (0x00027d43) popup_snote2_single_graphic_window_t2

0xd1b3,	// (0x00027c05) popup_snote2_single_graphic_window_t3_ParamLimits

0xd1b3,	// (0x00027c05) popup_snote2_single_graphic_window_t3

0xd1f4,	// (0x00027c46) popup_snote2_single_graphic_window_t4_ParamLimits

0xd1f4,	// (0x00027c46) popup_snote2_single_graphic_window_t4

0xd22a,	// (0x00027c7c) popup_snote2_single_graphic_window_t5_ParamLimits

0xd22a,	// (0x00027c7c) popup_snote2_single_graphic_window_t5

0x0004,

0xfcbb,	// (0x0002a70d) popup_snote2_single_graphic_window_t_ParamLimits

0xfcbb,	// (0x0002a70d) popup_snote2_single_graphic_window_t

0xbd2d,	// (0x0002677f) clock_nsta_pane_cp2_t1

0xbd2d,	// (0x0002677f) clock_nsta_pane_cp2_t2

0x0001,

0xfadb,	// (0x0002a52d) clock_nsta_pane_cp2_t

0x52bd,	// (0x0001fd0f) form_field_data_wide_pane_g1_ParamLimits

0x80f0,	// (0x00022b42) form_field_data_wide_pane_g2_ParamLimits

0x80f0,	// (0x00022b42) form_field_data_wide_pane_g2

0x80fc,	// (0x00022b4e) form_field_data_wide_pane_g3_ParamLimits

0x80fc,	// (0x00022b4e) form_field_data_wide_pane_g3

0x0002,

0xf6bf,	// (0x0002a111) form_field_data_wide_pane_g_ParamLimits

0xf6bf,	// (0x0002a111) form_field_data_wide_pane_g

0xbc39,	// (0x0002668b) grid_touch_3_pane_ParamLimits

0xbc39,	// (0x0002668b) grid_touch_3_pane

0xd33d,	// (0x00027d8f) cell_touch_3_pane_ParamLimits

0xd33d,	// (0x00027d8f) cell_touch_3_pane

0xc246,	// (0x00026c98) cell_touch_3_pane_g1

0xc246,	// (0x00026c98) cell_touch_3_pane_g2

0x0001,

0xfb60,	// (0x0002a5b2) cell_touch_3_pane_g

0x7b8f,	// (0x000225e1) cont_query_data_pane

0x7b97,	// (0x000225e9) cont_query_data_pane_cp1

0xd370,	// (0x00027dc2) button_value_adjust_pane_cp7

0xd378,	// (0x00027dca) query_popup_pane_cp3

0x8810,	// (0x00023262) bg_popup_sub_pane_cp22_ParamLimits

0x638f,	// (0x00020de1) navi_navi_volume_pane_cp2

0x63aa,	// (0x00020dfc) popup_side_volume_key_window_g2

0x63b9,	// (0x00020e0b) popup_side_volume_key_window_g3

0x0002,

0xf751,	// (0x0002a1a3) popup_side_volume_key_window_g

0x63d6,	// (0x00020e28) popup_side_volume_key_window_t2

0x0001,

0xf758,	// (0x0002a1aa) popup_side_volume_key_window_t

0x8ad7,	// (0x00023529) popup_side_volume_key_window_ParamLimits

0x4eb5,	// (0x0001f907) list_double_graphic_pane_g4_ParamLimits

0x4eb5,	// (0x0001f907) list_double_graphic_pane_g4

0xb245,	// (0x00025c97) list_single_2heading_msg_pane_ParamLimits

0xb245,	// (0x00025c97) list_single_2heading_msg_pane

0x5b5d,	// (0x000205af) list_single_2heading_msg_pane_g1_ParamLimits

0x5b5d,	// (0x000205af) list_single_2heading_msg_pane_g1

0x4d12,	// (0x0001f764) list_single_2heading_msg_pane_g2_ParamLimits

0x4d12,	// (0x0001f764) list_single_2heading_msg_pane_g2

0x5b69,	// (0x000205bb) list_single_2heading_msg_pane_g3_ParamLimits

0x5b69,	// (0x000205bb) list_single_2heading_msg_pane_g3

0x5b75,	// (0x000205c7) list_single_2heading_msg_pane_g4_ParamLimits

0x5b75,	// (0x000205c7) list_single_2heading_msg_pane_g4

0x0003,

0xfcc6,	// (0x0002a718) list_single_2heading_msg_pane_g_ParamLimits

0xfcc6,	// (0x0002a718) list_single_2heading_msg_pane_g

0x5b8d,	// (0x000205df) list_single_2heading_msg_pane_t1_ParamLimits

0x5b8d,	// (0x000205df) list_single_2heading_msg_pane_t1

0x5bb5,	// (0x00020607) list_single_2heading_msg_pane_t2_ParamLimits

0x5bb5,	// (0x00020607) list_single_2heading_msg_pane_t2

0x5be9,	// (0x0002063b) list_single_2heading_msg_pane_t3_ParamLimits

0x5be9,	// (0x0002063b) list_single_2heading_msg_pane_t3

0x5c22,	// (0x00020674) list_single_2heading_msg_pane_t4_ParamLimits

0x5c22,	// (0x00020674) list_single_2heading_msg_pane_t4

0x0003,

0xfccf,	// (0x0002a721) list_single_2heading_msg_pane_t_ParamLimits

0xfccf,	// (0x0002a721) list_single_2heading_msg_pane_t

0x77a3,	// (0x000221f5) title_pane_g4_ParamLimits

0x77a3,	// (0x000221f5) title_pane_g4

0x619b,	// (0x00020bed) title_pane_stacon_g3_ParamLimits

0x619b,	// (0x00020bed) title_pane_stacon_g3

0xce99,	// (0x000278eb) list_single_2graphic_im_pane_g4_ParamLimits

0xce99,	// (0x000278eb) list_single_2graphic_im_pane_g4

0xaced,	// (0x0002573f) popup_side_volume_key_window_cp

0xb563,	// (0x00025fb5) main_idle_act2_pane_t1

0x6759,	// (0x000211ab) toolbar_button_pane_g10

0x803f,	// (0x00022a91) popup_toolbar_window_cp1

0xbd1e,	// (0x00026770) clock_nsta_pane_cp_t1

0xbd1e,	// (0x00026770) clock_nsta_pane_cp_t2

0x0001,

0xfad6,	// (0x0002a528) clock_nsta_pane_cp_t

0x638f,	// (0x00020de1) navi_navi_volume_pane_cp2_ParamLimits

0x639e,	// (0x00020df0) popup_side_volume_key_window_g1_ParamLimits

0x63aa,	// (0x00020dfc) popup_side_volume_key_window_g2_ParamLimits

0x63b9,	// (0x00020e0b) popup_side_volume_key_window_g3_ParamLimits

0xf751,	// (0x0002a1a3) popup_side_volume_key_window_g_ParamLimits

0x6b72,	// (0x000215c4) fep_hwr_aid_pane

0x13e2,	// (0x0001be34) bg_fep_hwr_top_pane_g4_ParamLimits

0xc2c4,	// (0x00026d16) fep_hwr_top_pane_g1_ParamLimits

0xc2d6,	// (0x00026d28) fep_hwr_top_pane_g2_ParamLimits

0x6c2d,	// (0x0002167f) fep_hwr_top_pane_g3_ParamLimits

0xfb2b,	// (0x0002a57d) fep_hwr_top_pane_g_ParamLimits

0x6c42,	// (0x00021694) fep_hwr_top_text_pane_ParamLimits

0xaaa2,	// (0x000254f4) aid_touch_tab_arrow_arrow_2

0xaaab,	// (0x000254fd) aid_touch_tab_arrow_left_2

0x6b86,	// (0x000215d8) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6bbd,	// (0x0002160f) fep_hwr_prediction_pane

0xc42c,	// (0x00026e7e) fep_vkb_prediction_pane

0xc532,	// (0x00026f84) fep_vkb_side_pane_g3_ParamLimits

0xc532,	// (0x00026f84) fep_vkb_side_pane_g3

0xc4de,	// (0x00026f30) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc98c,	// (0x000273de) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xc999,	// (0x000273eb) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbd5,	// (0x0002a627) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xd39f,	// (0x00027df1) fep_hwr_prediction_pane_g1

0x6ee8,	// (0x0002193a) fep_hwr_prediction_pane_g2

0x6ef0,	// (0x00021942) fep_hwr_prediction_pane_g3

0x6ef8,	// (0x0002194a) fep_hwr_prediction_pane_g4

0x0003,

0xfcd8,	// (0x0002a72a) fep_hwr_prediction_pane_g

0xd39f,	// (0x00027df1) fep_vkb_prediction_pane_g1

0xd3a9,	// (0x00027dfb) fep_vkb_prediction_pane_g2

0xd3b1,	// (0x00027e03) fep_vkb_prediction_pane_g3

0xd3b9,	// (0x00027e0b) fep_vkb_prediction_pane_g4

0x0003,

0xfce1,	// (0x0002a733) fep_vkb_prediction_pane_g

0xb894,	// (0x000262e6) slider_set_pane_g3

0xb8a8,	// (0x000262fa) slider_set_pane_g4

0xb8c0,	// (0x00026312) slider_set_pane_g5

0xb894,	// (0x000262e6) slider_set_pane_g6

0x6a42,	// (0x00021494) slider_set_pane_g7

0xb19b,	// (0x00025bed) slider_form_pane_g3

0xb1a4,	// (0x00025bf6) slider_form_pane_g4

0xb1ac,	// (0x00025bfe) slider_form_pane_g5

0xb19b,	// (0x00025bed) slider_form_pane_g6

0xb1b4,	// (0x00025c06) slider_form_pane_g7

0xb831,	// (0x00026283) slider_set_pane_vc_g3

0xb83a,	// (0x0002628c) slider_set_pane_vc_g4

0xb843,	// (0x00026295) slider_set_pane_vc_g5

0xb831,	// (0x00026283) slider_set_pane_vc_g6

0xb84c,	// (0x0002629e) slider_set_pane_vc_g7

0xb831,	// (0x00026283) slider_form_pane_vc_g1

0xb83a,	// (0x0002628c) slider_form_pane_vc_g2

0xb843,	// (0x00026295) slider_form_pane_vc_g3

0xb831,	// (0x00026283) slider_form_pane_vc_g4

0xba43,	// (0x00026495) slider_form_pane_vc_g5

0x0004,

0xfabc,	// (0x0002a50e) slider_form_pane_vc_g

0x775b,	// (0x000221ad) main_idle_act3_pane

0xd3c1,	// (0x00027e13) ai3_links_pane

0xd3ca,	// (0x00027e1c) popup_ai3_data_window_ParamLimits

0xd3ca,	// (0x00027e1c) popup_ai3_data_window

0x775b,	// (0x000221ad) grid_ai3_links_pane

0xd3e8,	// (0x00027e3a) cell_ai3_links_pane_ParamLimits

0xd3e8,	// (0x00027e3a) cell_ai3_links_pane

0xd402,	// (0x00027e54) bg_popup_sub_pane_cp11

0xd40f,	// (0x00027e61) cell_ai3_links_pane_g1

0x775b,	// (0x000221ad) bg_popup_sub_pane_cp12

0xd434,	// (0x00027e86) heading_ai3_data_pane

0xd43c,	// (0x00027e8e) list_ai3_gene_pane

0xd448,	// (0x00027e9a) popup_ai3_data_window_g1

0xd450,	// (0x00027ea2) heading_ai3_data_pane_g1

0xd458,	// (0x00027eaa) heading_ai3_data_pane_t1

0xd466,	// (0x00027eb8) list_double_ai3_gene_pane_ParamLimits

0xd466,	// (0x00027eb8) list_double_ai3_gene_pane

0xd473,	// (0x00027ec5) list_single_ai3_gene_pane_ParamLimits

0xd473,	// (0x00027ec5) list_single_ai3_gene_pane

0xc20b,	// (0x00026c5d) list_highlight_pane_cp7_ParamLimits

0xc20b,	// (0x00026c5d) list_highlight_pane_cp7

0xd480,	// (0x00027ed2) list_single_a13_gene_pane_t1_ParamLimits

0xd480,	// (0x00027ed2) list_single_a13_gene_pane_t1

0xd497,	// (0x00027ee9) list_single_ai3_gene_pane_g1

0xd4a0,	// (0x00027ef2) list_single_ai3_gene_pane_g2

0x0001,

0xfcea,	// (0x0002a73c) list_single_ai3_gene_pane_g

0xd4a8,	// (0x00027efa) list_double_ai3_gene_pane_g1_ParamLimits

0xd4a8,	// (0x00027efa) list_double_ai3_gene_pane_g1

0xd4b4,	// (0x00027f06) list_double_ai3_gene_pane_t1_ParamLimits

0xd4b4,	// (0x00027f06) list_double_ai3_gene_pane_t1

0xd4d0,	// (0x00027f22) list_double_ai3_gene_pane_t2_ParamLimits

0xd4d0,	// (0x00027f22) list_double_ai3_gene_pane_t2

0xd4e5,	// (0x00027f37) list_double_ai3_gene_pane_t3_ParamLimits

0xd4e5,	// (0x00027f37) list_double_ai3_gene_pane_t3

0x0002,

0xfcef,	// (0x0002a741) list_double_ai3_gene_pane_t_ParamLimits

0xfcef,	// (0x0002a741) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x5b53,	// (0x000205a5) aid_size_min_col_2

0xd389,	// (0x00027ddb) aid_size_min_msg_ParamLimits

0xd389,	// (0x00027ddb) aid_size_min_msg

0xc63e,	// (0x00027090) fep_vkb_top_text_pane_g2_ParamLimits

0xc63e,	// (0x00027090) fep_vkb_top_text_pane_g2

0x0001,

0xfb5b,	// (0x0002a5ad) fep_vkb_top_text_pane_g_ParamLimits

0xfb5b,	// (0x0002a5ad) fep_vkb_top_text_pane_g

0x775b,	// (0x000221ad) main_hc_apps_shell_pane

0xd502,	// (0x00027f54) grid_hc_apps_pane_ParamLimits

0xd502,	// (0x00027f54) grid_hc_apps_pane

0xd511,	// (0x00027f63) list_hc_apps_pane

0xd519,	// (0x00027f6b) scroll_pane_cp37_ParamLimits

0xd519,	// (0x00027f6b) scroll_pane_cp37

0xd525,	// (0x00027f77) cell_hc_apps_pane_ParamLimits

0xd525,	// (0x00027f77) cell_hc_apps_pane

0xd5dd,	// (0x0002802f) cell_hc_apps_pane_g1_ParamLimits

0xd5dd,	// (0x0002802f) cell_hc_apps_pane_g1

0xd60e,	// (0x00028060) cell_hc_apps_pane_g2_ParamLimits

0xd60e,	// (0x00028060) cell_hc_apps_pane_g2

0xd62a,	// (0x0002807c) cell_hc_apps_pane_g3_ParamLimits

0xd62a,	// (0x0002807c) cell_hc_apps_pane_g3

0x0002,

0xfcf6,	// (0x0002a748) cell_hc_apps_pane_g_ParamLimits

0xfcf6,	// (0x0002a748) cell_hc_apps_pane_g

0xd64c,	// (0x0002809e) cell_hc_apps_pane_t1_ParamLimits

0xd64c,	// (0x0002809e) cell_hc_apps_pane_t1

0x7ad9,	// (0x0002252b) grid_highlight_pane_cp10_ParamLimits

0x7ad9,	// (0x0002252b) grid_highlight_pane_cp10

0xd68c,	// (0x000280de) list_single_hc_apps_pane_ParamLimits

0xd68c,	// (0x000280de) list_single_hc_apps_pane

0xd6cb,	// (0x0002811d) list_single_hc_apps_pane_g1

0x5c47,	// (0x00020699) list_single_hc_apps_pane_g2

0x0001,

0xfcfd,	// (0x0002a74f) list_single_hc_apps_pane_g

0x5c60,	// (0x000206b2) list_single_hc_apps_pane_g2_copy1

0x5c7c,	// (0x000206ce) list_single_hc_apps_pane_t1

0x784f,	// (0x000222a1) bg_set_opt_pane_cp_ParamLimits

0x60c5,	// (0x00020b17) setting_slider_pane_t1_ParamLimits

0x60db,	// (0x00020b2d) setting_slider_pane_t2_ParamLimits

0x60f5,	// (0x00020b47) setting_slider_pane_t3_ParamLimits

0xf5a2,	// (0x00029ff4) setting_slider_pane_t_ParamLimits

0x610d,	// (0x00020b5f) slider_set_pane_ParamLimits

0x6635,	// (0x00021087) control_pane_g5_ParamLimits

0x6635,	// (0x00021087) control_pane_g5

0xafbc,	// (0x00025a0e) slider_set_pane_g1_ParamLimits

0x6a36,	// (0x00021488) slider_set_pane_g2_ParamLimits

0xb894,	// (0x000262e6) slider_set_pane_g3_ParamLimits

0xb8a8,	// (0x000262fa) slider_set_pane_g4_ParamLimits

0xb8c0,	// (0x00026312) slider_set_pane_g5_ParamLimits

0xb894,	// (0x000262e6) slider_set_pane_g6_ParamLimits

0x6a42,	// (0x00021494) slider_set_pane_g7_ParamLimits

0xf99d,	// (0x0002a3ef) slider_set_pane_g_ParamLimits

0x8bbc,	// (0x0002360e) navi_icon_text_pane_ParamLimits

0x970f,	// (0x00024161) aid_fill_nsta_2_ParamLimits

0x9750,	// (0x000241a2) aid_touch_tab_arrow_left_ParamLimits

0x975f,	// (0x000241b1) aid_touch_tab_arrow_right_ParamLimits

0x97cc,	// (0x0002421e) clock_nsta_pane_ParamLimits

0xaa7e,	// (0x000254d0) navi_icon_pane_g1_ParamLimits

0xaa8d,	// (0x000254df) navi_text_pane_t1_ParamLimits

0xbe3b,	// (0x0002688d) navi_icon_text_pane_g1_ParamLimits

0xbe4a,	// (0x0002689c) navi_icon_text_pane_t1_ParamLimits

0xd6cb,	// (0x0002811d) list_single_hc_apps_pane_g1_ParamLimits

0x5c47,	// (0x00020699) list_single_hc_apps_pane_g2_ParamLimits

0xfcfd,	// (0x0002a74f) list_single_hc_apps_pane_g_ParamLimits

0x5c60,	// (0x000206b2) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x5c7c,	// (0x000206ce) list_single_hc_apps_pane_t1_ParamLimits

0x5fcf,	// (0x00020a21) popup_toolbar2_fixed_window_ParamLimits

0x5fcf,	// (0x00020a21) popup_toolbar2_fixed_window

0x9613,	// (0x00024065) popup_toolbar2_float_window

0x775b,	// (0x000221ad) bg_popup_sub_pane_cp27

0xd6e4,	// (0x00028136) grid_toolbar2_float_pane

0x775b,	// (0x000221ad) bg_popup_sub_pane_cp26

0xd6e4,	// (0x00028136) grid_toolbar2_fixed_pane

0xd6ec,	// (0x0002813e) cell_toolbar2_fixed_pane_ParamLimits

0xd6ec,	// (0x0002813e) cell_toolbar2_fixed_pane

0xd6fc,	// (0x0002814e) cell_toolbar2_fixed_pane_g1

0xd705,	// (0x00028157) toolbar2_fixed_button_pane

0x9c02,	// (0x00024654) toolbar2_fixed_button_pane_g1

0x9c0a,	// (0x0002465c) toolbar2_fixed_button_pane_g2

0x9c12,	// (0x00024664) toolbar2_fixed_button_pane_g3

0x9c1a,	// (0x0002466c) toolbar2_fixed_button_pane_g4

0x9c22,	// (0x00024674) toolbar2_fixed_button_pane_g5

0x9c2a,	// (0x0002467c) toolbar2_fixed_button_pane_g6

0x9c32,	// (0x00024684) toolbar2_fixed_button_pane_g7

0x9c3a,	// (0x0002468c) toolbar2_fixed_button_pane_g8

0x9c42,	// (0x00024694) toolbar2_fixed_button_pane_g9

0x0008,

0xf89f,	// (0x0002a2f1) toolbar2_fixed_button_pane_g

0xd70d,	// (0x0002815f) cell_toolbar2_float_pane_ParamLimits

0xd70d,	// (0x0002815f) cell_toolbar2_float_pane

0xd71e,	// (0x00028170) cell_toolbar2_float_pane_g1

0xd705,	// (0x00028157) toolbar2_fixed_button_pane_cp

0xc39a,	// (0x00026dec) fep_vkb_accented_list_pane_ParamLimits

0xc39a,	// (0x00026dec) fep_vkb_accented_list_pane

0x6da4,	// (0x000217f6) bg_popup_fep_shadow_pane_g9

0x8d40,	// (0x00023792) bg_popup_fep_shadow_pane_cp3

0x823f,	// (0x00022c91) list_accented_list_pane

0xd727,	// (0x00028179) list_single_accented_list_pane_ParamLimits

0xd727,	// (0x00028179) list_single_accented_list_pane

0x8d40,	// (0x00023792) list_highlight_pane_cp10

0xd738,	// (0x0002818a) list_single_accented_list_pane_t1

0x9559,	// (0x00023fab) popup_slider_window_ParamLimits

0x9559,	// (0x00023fab) popup_slider_window

0xd380,	// (0x00027dd2) aid_indentation_list_msg

0xd804,	// (0x00028256) bg_popup_window_pane_cp19

0xd872,	// (0x000282c4) popup_slider_window_g1

0xd88e,	// (0x000282e0) popup_slider_window_g2

0xd8aa,	// (0x000282fc) popup_slider_window_g3

0x0005,

0xfd02,	// (0x0002a754) popup_slider_window_g

0xd906,	// (0x00028358) popup_slider_window_t1

0xd97a,	// (0x000283cc) small_volume_slider_vertical_pane

0xc246,	// (0x00026c98) small_volume_slider_vertical_pane_g1

0xc246,	// (0x00026c98) small_volume_slider_vertical_pane_g2

0xd996,	// (0x000283e8) small_volume_slider_vertical_pane_g3

0x0002,

0xfd14,	// (0x0002a766) small_volume_slider_vertical_pane_g

0x5d87,	// (0x000207d9) area_side_right_pane_ParamLimits

0x5d87,	// (0x000207d9) area_side_right_pane

0x6f00,	// (0x00021952) aid_size_side_button_ParamLimits

0x6f00,	// (0x00021952) aid_size_side_button

0x6f14,	// (0x00021966) grid_sctrl_middle_pane_ParamLimits

0x6f14,	// (0x00021966) grid_sctrl_middle_pane

0x6f34,	// (0x00021986) sctrl_sk_bottom_pane

0x6f45,	// (0x00021997) sctrl_sk_top_pane

0x6f57,	// (0x000219a9) aid_touch_sctrl_top

0x7ad9,	// (0x0002252b) bg_sctrl_sk_pane_ParamLimits

0x7ad9,	// (0x0002252b) bg_sctrl_sk_pane

0x6f64,	// (0x000219b6) sctrl_sk_top_pane_g1

0x6f71,	// (0x000219c3) sctrl_sk_top_pane_t1

0x6f57,	// (0x000219a9) aid_touch_sctrl_bottom

0x7ad9,	// (0x0002252b) bg_sctrl_sk_pane_cp_ParamLimits

0x7ad9,	// (0x0002252b) bg_sctrl_sk_pane_cp

0x6f8c,	// (0x000219de) sctrl_sk_bottom_pane_g1

0x6f71,	// (0x000219c3) sctrl_sk_bottom_pane_t1

0x6f95,	// (0x000219e7) cell_sctrl_middle_pane_ParamLimits

0x6f95,	// (0x000219e7) cell_sctrl_middle_pane

0x6fb2,	// (0x00021a04) aid_touch_sctrl_middle_ParamLimits

0x6fb2,	// (0x00021a04) aid_touch_sctrl_middle

0x80d6,	// (0x00022b28) bg_sctrl_middle_pane_ParamLimits

0x80d6,	// (0x00022b28) bg_sctrl_middle_pane

0xc4de,	// (0x00026f30) cell_sctrl_middle_pane_g1_ParamLimits

0xc4de,	// (0x00026f30) cell_sctrl_middle_pane_g1

0x6fc4,	// (0x00021a16) cell_sctrl_middle_pane_g2_ParamLimits

0x6fc4,	// (0x00021a16) cell_sctrl_middle_pane_g2

0x0001,

0xfd20,	// (0x0002a772) cell_sctrl_middle_pane_g_ParamLimits

0xfd20,	// (0x0002a772) cell_sctrl_middle_pane_g

0x9c02,	// (0x00024654) bg_sctrl_middle_pane_g1

0x9c0a,	// (0x0002465c) bg_sctrl_middle_pane_g2

0x9c12,	// (0x00024664) bg_sctrl_middle_pane_g3

0x9c1a,	// (0x0002466c) bg_sctrl_middle_pane_g4

0x9c22,	// (0x00024674) bg_sctrl_middle_pane_g5

0x9c2a,	// (0x0002467c) bg_sctrl_middle_pane_g6

0x9c32,	// (0x00024684) bg_sctrl_middle_pane_g7

0x9c3a,	// (0x0002468c) bg_sctrl_middle_pane_g8

0x0007,

0xfd25,	// (0x0002a777) bg_sctrl_middle_pane_g

0x9c42,	// (0x00024694) bg_sctrl_middle_pane_g8_copy1

0x9c02,	// (0x00024654) bg_sctrl_sk_pane_g1

0x9c0a,	// (0x0002465c) bg_sctrl_sk_pane_g2

0x9c12,	// (0x00024664) bg_sctrl_sk_pane_g3

0x0008,

0xf89f,	// (0x0002a2f1) bg_sctrl_sk_pane_g

0x8005,	// (0x00022a57) aid_size_touch_scroll_bar

0x9c1a,	// (0x0002466c) bg_sctrl_sk_pane_g4

0x9c22,	// (0x00024674) bg_sctrl_sk_pane_g5

0x9c2a,	// (0x0002467c) bg_sctrl_sk_pane_g6

0x9c32,	// (0x00024684) bg_sctrl_sk_pane_g7

0x9c3a,	// (0x0002468c) bg_sctrl_sk_pane_g8

0x9c42,	// (0x00024694) bg_sctrl_sk_pane_g9

0x9170,	// (0x00023bc2) popup_fep_china_hwr2_fs_candidate_window

0x917a,	// (0x00023bcc) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x917a,	// (0x00023bcc) popup_fep_china_hwr2_fs_control_window

0xc4de,	// (0x00026f30) sctrl_sk_top_pane_g2

0x0001,

0xfd1b,	// (0x0002a76d) sctrl_sk_top_pane_g

0xd99f,	// (0x000283f1) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd99f,	// (0x000283f1) aid_fep_china_hwr2_fs_cell

0xd9b2,	// (0x00028404) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd9b2,	// (0x00028404) bg_popup_fep_shadow_pane_cp4

0xd9cb,	// (0x0002841d) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd9cb,	// (0x0002841d) bg_popup_fep_shadow_pane_cp5

0xd9dd,	// (0x0002842f) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd9dd,	// (0x0002842f) popup_fep_china_hwr2_fs_control_bar_grid

0xd9ed,	// (0x0002843f) popup_fep_china_hwr2_fs_control_funtion_grid

0xd9f5,	// (0x00028447) aid_fep_china_hwr2_fs_candi_cell

0x775b,	// (0x000221ad) bg_popup_fep_shadow_pane_cp6

0xd9ff,	// (0x00028451) popup_fep_china_hwr2_fs_candidate_grid

0xda09,	// (0x0002845b) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xda09,	// (0x0002845b) cell_fep_china_hwr2_fs_funtion_grid

0xc246,	// (0x00026c98) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xda21,	// (0x00028473) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xda21,	// (0x00028473) cell_fep_china_hwr2_fs_funtion_grid_g1

0xda2f,	// (0x00028481) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xda2f,	// (0x00028481) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd36,	// (0x0002a788) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd36,	// (0x0002a788) cell_fep_china_hwr2_fs_funtion_grid_g

0xda45,	// (0x00028497) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xda45,	// (0x00028497) cell_fep_china_hwr2_fs_funtion_grid_t1

0xda5a,	// (0x000284ac) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xda5a,	// (0x000284ac) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd3b,	// (0x0002a78d) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd3b,	// (0x0002a78d) cell_fep_china_hwr2_fs_funtion_grid_t

0xda76,	// (0x000284c8) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xda7e,	// (0x000284d0) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xda86,	// (0x000284d8) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd40,	// (0x0002a792) popup_fep_china_hwr2_fs_control_bar_grid_g

0xda8e,	// (0x000284e0) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xda8e,	// (0x000284e0) cell_fep_china_hwr2_fs_candidate_grid

0xdaad,	// (0x000284ff) popup_fep_china_hwr2_fs_candidate_grid_g20

0xdab5,	// (0x00028507) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc246,	// (0x00026c98) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc246,	// (0x00026c98) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb60,	// (0x0002a5b2) cell_fep_china_hwr2_fs_candidate_grid_g

0xdabd,	// (0x0002850f) cell_fep_china_hwr2_fs_candidate_grid_t1

0x97df,	// (0x00024231) clock_nsta_pane_cp_24_ParamLimits

0x97df,	// (0x00024231) clock_nsta_pane_cp_24

0x985f,	// (0x000242b1) indicator_nsta_pane_cp_24_ParamLimits

0x985f,	// (0x000242b1) indicator_nsta_pane_cp_24

0xa8fa,	// (0x0002534c) heading_pane_g1

0x0001,

0xf904,	// (0x0002a356) heading_pane_g

0xb3aa,	// (0x00025dfc) grid_sct_catagory_button_pane

0xb3dc,	// (0x00025e2e) scroll_pane_cp5_ParamLimits

0xbe8f,	// (0x000268e1) button_value_adjust_pane_cp5_ParamLimits

0xbe8f,	// (0x000268e1) button_value_adjust_pane_cp5

0xbf74,	// (0x000269c6) form2_midp_time_pane_ParamLimits

0xdacb,	// (0x0002851d) cell_sct_catagory_button_pane_ParamLimits

0xdacb,	// (0x0002851d) cell_sct_catagory_button_pane

0xc20b,	// (0x00026c5d) bg_button_pane_cp01_ParamLimits

0xc20b,	// (0x00026c5d) bg_button_pane_cp01

0xc246,	// (0x00026c98) cell_sct_catagory_button_pane_g1

0x959a,	// (0x00023fec) popup_tb_extension_window

0xdadd,	// (0x0002852f) aid_size_cell_ext_ParamLimits

0xdadd,	// (0x0002852f) aid_size_cell_ext

0x7ad9,	// (0x0002252b) bg_tb_trans_pane_cp1_ParamLimits

0x7ad9,	// (0x0002252b) bg_tb_trans_pane_cp1

0xdafd,	// (0x0002854f) grid_tb_ext_pane_ParamLimits

0xdafd,	// (0x0002854f) grid_tb_ext_pane

0xdb2d,	// (0x0002857f) cell_tb_ext_pane_ParamLimits

0xdb2d,	// (0x0002857f) cell_tb_ext_pane

0xdb44,	// (0x00028596) cell_tb_ext_pane_g1_ParamLimits

0xdb44,	// (0x00028596) cell_tb_ext_pane_g1

0xdb61,	// (0x000285b3) cell_tb_ext_pane_t1

0x7ad9,	// (0x0002252b) list_highlight_pane_cp11_ParamLimits

0x7ad9,	// (0x0002252b) list_highlight_pane_cp11

0x5fee,	// (0x00020a40) popup_uni_indicator_window_ParamLimits

0x5fee,	// (0x00020a40) popup_uni_indicator_window

0x80d6,	// (0x00022b28) bg_popup_sub_pane_cp14

0xdb7c,	// (0x000285ce) list_uniindi_pane

0xdb88,	// (0x000285da) uniindi_top_pane

0x7ad9,	// (0x0002252b) bg_uniindi_top_pane

0xdba9,	// (0x000285fb) uniindi_top_pane_g1

0xdbbf,	// (0x00028611) uniindi_top_pane_g2

0x0003,

0xfd47,	// (0x0002a799) uniindi_top_pane_g

0xdbe9,	// (0x0002863b) uniindi_top_pane_t1

0xdc15,	// (0x00028667) list_single_uniindi_pane_ParamLimits

0xdc15,	// (0x00028667) list_single_uniindi_pane

0xc246,	// (0x00026c98) bg_uniindi_top_pane_g1

0xdc27,	// (0x00028679) list_single_uniindi_pane_g1

0xdc3a,	// (0x0002868c) list_single_uniindi_pane_t1

0x775b,	// (0x000221ad) control_bg_pane

0xdc5f,	// (0x000286b1) bg_sctrl_sk_pane_cp1

0xdc68,	// (0x000286ba) bg_sctrl_sk_pane_cp2

0xdc71,	// (0x000286c3) control_bg_pane_g1

0xdc7a,	// (0x000286cc) control_bg_pane_g2

0x0001,

0xfd50,	// (0x0002a7a2) control_bg_pane_g

0xbce3,	// (0x00026735) cell_indicator_nsta_pane_g1_ParamLimits

0xbcf1,	// (0x00026743) cell_indicator_nsta_pane_g2_ParamLimits

0xfad1,	// (0x0002a523) cell_indicator_nsta_pane_g_ParamLimits

0x5910,	// (0x00020362) form2_midp_time_pane_t1_ParamLimits

0x7e47,	// (0x00022899) main_idle_act4_pane_ParamLimits

0x7e47,	// (0x00022899) main_idle_act4_pane

0x959a,	// (0x00023fec) popup_tb_extension_window_ParamLimits

0xdb1f,	// (0x00028571) tb_ext_find_pane_ParamLimits

0xdb1f,	// (0x00028571) tb_ext_find_pane

0xdc83,	// (0x000286d5) ai_gene_pane_1_cp1

0x8e89,	// (0x000238db) ai_gene_pane_2_cp1

0xdc8b,	// (0x000286dd) list_single_idle_plugin_calendar_pane

0xdc94,	// (0x000286e6) list_single_idle_plugin_notification_pane

0xdc9d,	// (0x000286ef) list_single_idle_plugin_player_pane

0xdca6,	// (0x000286f8) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdca6,	// (0x000286f8) list_single_idle_plugin_shortcut_pane

0xdcc8,	// (0x0002871a) main_idle_act4_pane_t1

0xdcda,	// (0x0002872c) main_idle_act4_pane_t2

0x0001,

0xfd55,	// (0x0002a7a7) main_idle_act4_pane_t

0xdcec,	// (0x0002873e) middle_sk_idle_act4_pane_ParamLimits

0xdcec,	// (0x0002873e) middle_sk_idle_act4_pane

0xdd02,	// (0x00028754) popup_clock_digital_analogue_window_cp2

0xdd1c,	// (0x0002876e) shortcut_wheel_idle_act4_pane_ParamLimits

0xdd1c,	// (0x0002876e) shortcut_wheel_idle_act4_pane

0xc246,	// (0x00026c98) shortcut_wheel_idle_act4_pane_g1

0xc246,	// (0x00026c98) shortcut_wheel_idle_act4_pane_g2

0xc246,	// (0x00026c98) shortcut_wheel_idle_act4_pane_g3

0xc246,	// (0x00026c98) shortcut_wheel_idle_act4_pane_g4

0xc246,	// (0x00026c98) shortcut_wheel_idle_act4_pane_g5

0xdd30,	// (0x00028782) shortcut_wheel_idle_act4_pane_g6

0xdd38,	// (0x0002878a) shortcut_wheel_idle_act4_pane_g7

0xdd40,	// (0x00028792) shortcut_wheel_idle_act4_pane_g8

0xdd48,	// (0x0002879a) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd5a,	// (0x0002a7ac) shortcut_wheel_idle_act4_pane_g

0xc4de,	// (0x00026f30) middle_sk_idle_act4_pane_g1_ParamLimits

0xc4de,	// (0x00026f30) middle_sk_idle_act4_pane_g1

0xddac,	// (0x000287fe) middle_sk_idle_act4_pane_g2_ParamLimits

0xddac,	// (0x000287fe) middle_sk_idle_act4_pane_g2

0x0001,

0xfd7d,	// (0x0002a7cf) middle_sk_idle_act4_pane_g_ParamLimits

0xfd7d,	// (0x0002a7cf) middle_sk_idle_act4_pane_g

0xddb8,	// (0x0002880a) middle_sk_idle_act4_pane_t1_ParamLimits

0xddb8,	// (0x0002880a) middle_sk_idle_act4_pane_t1

0xddd5,	// (0x00028827) grid_ai_shortcut_pane_ParamLimits

0xddd5,	// (0x00028827) grid_ai_shortcut_pane

0xddee,	// (0x00028840) list_highlight_pane_cp16_ParamLimits

0xddee,	// (0x00028840) list_highlight_pane_cp16

0xddfb,	// (0x0002884d) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xddfb,	// (0x0002884d) list_single_idle_plugin_shortcut_pane_g1

0xde07,	// (0x00028859) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xde07,	// (0x00028859) list_single_idle_plugin_shortcut_pane_g2

0xde21,	// (0x00028873) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xde21,	// (0x00028873) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd82,	// (0x0002a7d4) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd82,	// (0x0002a7d4) list_single_idle_plugin_shortcut_pane_g

0xde34,	// (0x00028886) cell_ai_shortcut_pane_ParamLimits

0xde34,	// (0x00028886) cell_ai_shortcut_pane

0xde57,	// (0x000288a9) cell_ai_shortcut_pane_g1_ParamLimits

0xde57,	// (0x000288a9) cell_ai_shortcut_pane_g1

0xdc83,	// (0x000286d5) ai_gene_pane_1_cp2

0xde79,	// (0x000288cb) ai_gene_pane_2_cp2

0xde81,	// (0x000288d3) list_highlight_pane_cp15

0xde8a,	// (0x000288dc) list_single_idle_plugin_calendar_pane_g1

0xde81,	// (0x000288d3) list_highlight_pane_cp17

0xde92,	// (0x000288e4) list_single_idle_plugin_calendar_pane_g1_copy1

0xde9a,	// (0x000288ec) list_single_idle_plugin_player_pane_g1

0xb611,	// (0x00026063) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd89,	// (0x0002a7db) list_single_idle_plugin_player_pane_g

0xdea2,	// (0x000288f4) list_single_idle_plugin_player_pane_t1

0xdeb0,	// (0x00028902) list_single_idle_plugin_player_pane_t2

0xdebe,	// (0x00028910) list_single_idle_plugin_player_pane_t3

0xdecc,	// (0x0002891e) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd8e,	// (0x0002a7e0) list_single_idle_plugin_player_pane_t

0xdeda,	// (0x0002892c) wait_bar_pane_cp15

0xdee2,	// (0x00028934) grid_ai_notification_pane

0xb611,	// (0x00026063) list_single_idle_plugin_notification_pane_g1

0xdeeb,	// (0x0002893d) cell_ai_notification_pane_ParamLimits

0xdeeb,	// (0x0002893d) cell_ai_notification_pane

0xdef8,	// (0x0002894a) cell_ai_notification_pane_g1

0xdf00,	// (0x00028952) cell_ai_notification_pane_t1

0xdf0e,	// (0x00028960) tb_ext_find_button_pane

0xdf16,	// (0x00028968) tb_ext_find_pane_g1

0xdf1e,	// (0x00028970) tb_ext_find_pane_t1

0x8746,	// (0x00023198) tb_ext_find_button_pane_g1

0xdf2c,	// (0x0002897e) tb_ext_find_button_pane_g2

0x0001,

0xfd97,	// (0x0002a7e9) tb_ext_find_button_pane_g

0xdcc8,	// (0x0002871a) main_idle_act4_pane_t1_ParamLimits

0xdcda,	// (0x0002872c) main_idle_act4_pane_t2_ParamLimits

0xfd55,	// (0x0002a7a7) main_idle_act4_pane_t_ParamLimits

0xdd02,	// (0x00028754) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdd10,	// (0x00028762) sat_plugin_idle_act4_pane_ParamLimits

0xdd10,	// (0x00028762) sat_plugin_idle_act4_pane

0xdf35,	// (0x00028987) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdf35,	// (0x00028987) sat_plugin_idle_act4_pane_t1

0xdf48,	// (0x0002899a) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdf48,	// (0x0002899a) sat_plugin_idle_act4_pane_t2

0xdf5b,	// (0x000289ad) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdf5b,	// (0x000289ad) sat_plugin_idle_act4_pane_t3

0xdf6e,	// (0x000289c0) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdf6e,	// (0x000289c0) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd9c,	// (0x0002a7ee) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd9c,	// (0x0002a7ee) sat_plugin_idle_act4_pane_t

0x5f1f,	// (0x00020971) popup_battery_window_ParamLimits

0x5f1f,	// (0x00020971) popup_battery_window

0x7ad9,	// (0x0002252b) bg_popup_sub_pane_cp25_ParamLimits

0x7ad9,	// (0x0002252b) bg_popup_sub_pane_cp25

0xdf81,	// (0x000289d3) popup_battery_window_g1_ParamLimits

0xdf81,	// (0x000289d3) popup_battery_window_g1

0xdf8d,	// (0x000289df) popup_battery_window_t1_ParamLimits

0xdf8d,	// (0x000289df) popup_battery_window_t1

0xdf9f,	// (0x000289f1) popup_battery_window_t2_ParamLimits

0xdf9f,	// (0x000289f1) popup_battery_window_t2

0x0001,

0xfda5,	// (0x0002a7f7) popup_battery_window_t_ParamLimits

0xfda5,	// (0x0002a7f7) popup_battery_window_t

0x8d54,	// (0x000237a6) midp_canvas_pane_ParamLimits

0x8dcb,	// (0x0002381d) midp_keypad_pane_ParamLimits

0x8dcb,	// (0x0002381d) midp_keypad_pane

0x90c6,	// (0x00023b18) main_midp_pane_ParamLimits

0xbd3c,	// (0x0002678e) signal_pane_g2_cp_ParamLimits

0xdfbc,	// (0x00028a0e) aid_size_cell_midp_keypad_ParamLimits

0xdfbc,	// (0x00028a0e) aid_size_cell_midp_keypad

0xdfd6,	// (0x00028a28) midp_keyp_game_grid_pane_ParamLimits

0xdfd6,	// (0x00028a28) midp_keyp_game_grid_pane

0xdff6,	// (0x00028a48) midp_keyp_rocker_pane_ParamLimits

0xdff6,	// (0x00028a48) midp_keyp_rocker_pane

0xe025,	// (0x00028a77) midp_keyp_sk_left_pane_ParamLimits

0xe025,	// (0x00028a77) midp_keyp_sk_left_pane

0xe07f,	// (0x00028ad1) midp_keyp_sk_right_pane_ParamLimits

0xe07f,	// (0x00028ad1) midp_keyp_sk_right_pane

0x775b,	// (0x000221ad) bg_button_pane_cp03

0xe0d9,	// (0x00028b2b) midp_keyp_sk_left_pane_g1

0x775b,	// (0x000221ad) bg_button_pane_cp04

0xe0d9,	// (0x00028b2b) midp_keyp_sk_right_pane_g1

0xc246,	// (0x00026c98) midp_keyp_rocker_pane_g1

0xe0e2,	// (0x00028b34) keyp_game_cell_pane_ParamLimits

0xe0e2,	// (0x00028b34) keyp_game_cell_pane

0x775b,	// (0x000221ad) bg_button_pane_cp02

0xe0f5,	// (0x00028b47) keyp_game_cell_pane_g1

0x5f69,	// (0x000209bb) popup_fep_vkb2_window_ParamLimits

0x5f69,	// (0x000209bb) popup_fep_vkb2_window

0x6fe6,	// (0x00021a38) aid_size_cell_vkb2_ParamLimits

0x6fe6,	// (0x00021a38) aid_size_cell_vkb2

0x7032,	// (0x00021a84) popup_fep_vkb2_window_g1_ParamLimits

0x7032,	// (0x00021a84) popup_fep_vkb2_window_g1

0x707a,	// (0x00021acc) vkb2_area_bottom_pane_ParamLimits

0x707a,	// (0x00021acc) vkb2_area_bottom_pane

0x70ce,	// (0x00021b20) vkb2_area_keypad_pane_ParamLimits

0x70ce,	// (0x00021b20) vkb2_area_keypad_pane

0x7114,	// (0x00021b66) vkb2_area_top_pane_ParamLimits

0x7114,	// (0x00021b66) vkb2_area_top_pane

0x718e,	// (0x00021be0) vkb2_top_entry_pane_ParamLimits

0x718e,	// (0x00021be0) vkb2_top_entry_pane

0x71b8,	// (0x00021c0a) vkb2_top_grid_left_pane_ParamLimits

0x71b8,	// (0x00021c0a) vkb2_top_grid_left_pane

0x71d6,	// (0x00021c28) vkb2_top_grid_right_pane_ParamLimits

0x71d6,	// (0x00021c28) vkb2_top_grid_right_pane

0x71f4,	// (0x00021c46) vkb2_cell_keypad_pane_ParamLimits

0x71f4,	// (0x00021c46) vkb2_cell_keypad_pane

0x72aa,	// (0x00021cfc) vkb2_area_bottom_grid_pane_ParamLimits

0x72aa,	// (0x00021cfc) vkb2_area_bottom_grid_pane

0x72d0,	// (0x00021d22) vkb2_area_bottom_pane_g1_ParamLimits

0x72d0,	// (0x00021d22) vkb2_area_bottom_pane_g1

0x72f4,	// (0x00021d46) vkb2_area_bottom_pane_g2_ParamLimits

0x72f4,	// (0x00021d46) vkb2_area_bottom_pane_g2

0x7322,	// (0x00021d74) vkb2_area_bottom_pane_g3_ParamLimits

0x7322,	// (0x00021d74) vkb2_area_bottom_pane_g3

0x0002,

0xfdaa,	// (0x0002a7fc) vkb2_area_bottom_pane_g_ParamLimits

0xfdaa,	// (0x0002a7fc) vkb2_area_bottom_pane_g

0x7383,	// (0x00021dd5) vkb2_top_cell_left_pane_ParamLimits

0x7383,	// (0x00021dd5) vkb2_top_cell_left_pane

0xe106,	// (0x00028b58) vkb2_top_entry_pane_g1_ParamLimits

0xe106,	// (0x00028b58) vkb2_top_entry_pane_g1

0xe114,	// (0x00028b66) vkb2_top_entry_pane_t1_ParamLimits

0xe114,	// (0x00028b66) vkb2_top_entry_pane_t1

0xe12c,	// (0x00028b7e) vkb2_top_entry_pane_t2_ParamLimits

0xe12c,	// (0x00028b7e) vkb2_top_entry_pane_t2

0xe144,	// (0x00028b96) vkb2_top_entry_pane_t3_ParamLimits

0xe144,	// (0x00028b96) vkb2_top_entry_pane_t3

0x0002,

0xfdb1,	// (0x0002a803) vkb2_top_entry_pane_t_ParamLimits

0xfdb1,	// (0x0002a803) vkb2_top_entry_pane_t

0x73d0,	// (0x00021e22) vkb2_top_grid_right_pane_g1_ParamLimits

0x73d0,	// (0x00021e22) vkb2_top_grid_right_pane_g1

0x73e6,	// (0x00021e38) vkb2_top_grid_right_pane_g2_ParamLimits

0x73e6,	// (0x00021e38) vkb2_top_grid_right_pane_g2

0x73fe,	// (0x00021e50) vkb2_top_grid_right_pane_g3_ParamLimits

0x73fe,	// (0x00021e50) vkb2_top_grid_right_pane_g3

0x7416,	// (0x00021e68) vkb2_top_grid_right_pane_g4_ParamLimits

0x7416,	// (0x00021e68) vkb2_top_grid_right_pane_g4

0x0003,

0xfdb8,	// (0x0002a80a) vkb2_top_grid_right_pane_g_ParamLimits

0xfdb8,	// (0x0002a80a) vkb2_top_grid_right_pane_g

0x742c,	// (0x00021e7e) vkb2_top_cell_left_pane_g1

0x7443,	// (0x00021e95) vkb2_cell_keypad_pane_g1_ParamLimits

0x7443,	// (0x00021e95) vkb2_cell_keypad_pane_g1

0xe15a,	// (0x00028bac) vkb2_cell_keypad_pane_t1_ParamLimits

0xe15a,	// (0x00028bac) vkb2_cell_keypad_pane_t1

0x7467,	// (0x00021eb9) vkb2_cell_bottom_grid_pane_ParamLimits

0x7467,	// (0x00021eb9) vkb2_cell_bottom_grid_pane

0x74a0,	// (0x00021ef2) vkb2_cell_bottom_grid_pane_g1

0xdd50,	// (0x000287a2) aid_call2_pane_cp02

0xdd58,	// (0x000287aa) aid_call_pane_cp02

0xdd60,	// (0x000287b2) clock_digital_number_pane_cp10

0xdd68,	// (0x000287ba) clock_digital_number_pane_cp11

0xdd70,	// (0x000287c2) clock_digital_number_pane_cp12

0xdd78,	// (0x000287ca) clock_digital_number_pane_cp13

0xdd80,	// (0x000287d2) clock_digital_separator_pane_cp10

0x8746,	// (0x00023198) popup_clock_digital_analogue_window_cp2_g1

0x8746,	// (0x00023198) popup_clock_digital_analogue_window_cp2_g2

0xdd88,	// (0x000287da) popup_clock_digital_analogue_window_cp2_g3

0x8746,	// (0x00023198) popup_clock_digital_analogue_window_cp2_g4

0xdd88,	// (0x000287da) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd6d,	// (0x0002a7bf) popup_clock_digital_analogue_window_cp2_g

0xdd90,	// (0x000287e2) popup_clock_digital_analogue_window_cp2_t1

0xdd9e,	// (0x000287f0) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd78,	// (0x0002a7ca) popup_clock_digital_analogue_window_cp2_t

0xc246,	// (0x00026c98) clock_digital_number_pane_cp10_g1

0xc246,	// (0x00026c98) clock_digital_number_pane_cp10_g2

0x0001,

0xfb60,	// (0x0002a5b2) clock_digital_number_pane_cp10_g

0xc246,	// (0x00026c98) clock_digital_separator_pane_cp10_g1

0xc246,	// (0x00026c98) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb60,	// (0x0002a5b2) clock_digital_separator_pane_cp10_g

0xdbcb,	// (0x0002861d) uniindi_top_pane_g3

0xdbdc,	// (0x0002862e) uniindi_top_pane_g4

0x7264,	// (0x00021cb6) vkb2_row_keypad_pane_ParamLimits

0x7264,	// (0x00021cb6) vkb2_row_keypad_pane

0x74bc,	// (0x00021f0e) vkb2_cell_t_keypad_pane_ParamLimits

0x74bc,	// (0x00021f0e) vkb2_cell_t_keypad_pane

0x74cc,	// (0x00021f1e) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x74cc,	// (0x00021f1e) vkb2_cell_t_keypad_pane_cp08

0x74e1,	// (0x00021f33) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x74e1,	// (0x00021f33) vkb2_cell_t_keypad_pane_cp09

0x74f5,	// (0x00021f47) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x74f5,	// (0x00021f47) vkb2_cell_t_keypad_pane_cp01

0x7506,	// (0x00021f58) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x7506,	// (0x00021f58) vkb2_cell_t_keypad_pane_cp02

0x7517,	// (0x00021f69) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x7517,	// (0x00021f69) vkb2_cell_t_keypad_pane_cp03

0x7528,	// (0x00021f7a) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x7528,	// (0x00021f7a) vkb2_cell_t_keypad_pane_cp04

0x7539,	// (0x00021f8b) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x7539,	// (0x00021f8b) vkb2_cell_t_keypad_pane_cp05

0x754a,	// (0x00021f9c) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x754a,	// (0x00021f9c) vkb2_cell_t_keypad_pane_cp06

0x755d,	// (0x00021faf) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x755d,	// (0x00021faf) vkb2_cell_t_keypad_pane_cp07

0x7572,	// (0x00021fc4) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x7572,	// (0x00021fc4) vkb2_cell_t_keypad_pane_cp10

0xc4de,	// (0x00026f30) vkb2_cell_t_keypad_pane_g1

0xe171,	// (0x00028bc3) vkb2_cell_t_keypad_pane_t1

0x775b,	// (0x000221ad) popup_grid_graphic2_window

0xe183,	// (0x00028bd5) aid_size_cell_graphic2_ParamLimits

0xe183,	// (0x00028bd5) aid_size_cell_graphic2

0xc2b6,	// (0x00026d08) bg_popup_window_pane_cp21_ParamLimits

0xc2b6,	// (0x00026d08) bg_popup_window_pane_cp21

0xe1af,	// (0x00028c01) graphic2_pages_pane_ParamLimits

0xe1af,	// (0x00028c01) graphic2_pages_pane

0xe1f5,	// (0x00028c47) grid_graphic2_control_pane_ParamLimits

0xe1f5,	// (0x00028c47) grid_graphic2_control_pane

0xe223,	// (0x00028c75) grid_graphic2_pane_ParamLimits

0xe223,	// (0x00028c75) grid_graphic2_pane

0xe285,	// (0x00028cd7) cell_graphic2_pane

0x775b,	// (0x000221ad) main_comp_mode_pane

0xd43c,	// (0x00027e8e) list_ai3_gene_pane_ParamLimits

0xd804,	// (0x00028256) bg_popup_window_pane_cp19_ParamLimits

0xd810,	// (0x00028262) bg_touch_area_indi_pane_ParamLimits

0xd810,	// (0x00028262) bg_touch_area_indi_pane

0xd826,	// (0x00028278) bg_touch_area_indi_pane_cp01_ParamLimits

0xd826,	// (0x00028278) bg_touch_area_indi_pane_cp01

0xd83e,	// (0x00028290) bg_touch_area_indi_pane_cp02_ParamLimits

0xd83e,	// (0x00028290) bg_touch_area_indi_pane_cp02

0xd858,	// (0x000282aa) bg_touch_area_indi_pane_cp03_ParamLimits

0xd858,	// (0x000282aa) bg_touch_area_indi_pane_cp03

0xd872,	// (0x000282c4) popup_slider_window_g1_ParamLimits

0xd88e,	// (0x000282e0) popup_slider_window_g2_ParamLimits

0xd8aa,	// (0x000282fc) popup_slider_window_g3_ParamLimits

0xfd02,	// (0x0002a754) popup_slider_window_g_ParamLimits

0xd906,	// (0x00028358) popup_slider_window_t1_ParamLimits

0xd97a,	// (0x000283cc) small_volume_slider_vertical_pane_ParamLimits

0xe285,	// (0x00028cd7) cell_graphic2_pane_ParamLimits

0xe2da,	// (0x00028d2c) bg_button_pane_cp10_ParamLimits

0xe2da,	// (0x00028d2c) bg_button_pane_cp10

0xe2ef,	// (0x00028d41) bg_button_pane_cp11_ParamLimits

0xe2ef,	// (0x00028d41) bg_button_pane_cp11

0xe304,	// (0x00028d56) graphic2_pages_pane_g1_ParamLimits

0xe304,	// (0x00028d56) graphic2_pages_pane_g1

0xe31f,	// (0x00028d71) graphic2_pages_pane_g2_ParamLimits

0xe31f,	// (0x00028d71) graphic2_pages_pane_g2

0x0001,

0xfdc6,	// (0x0002a818) graphic2_pages_pane_g_ParamLimits

0xfdc6,	// (0x0002a818) graphic2_pages_pane_g

0xe337,	// (0x00028d89) graphic2_pages_pane_t1_ParamLimits

0xe337,	// (0x00028d89) graphic2_pages_pane_t1

0xe34d,	// (0x00028d9f) cell_graphic2_control_pane_ParamLimits

0xe34d,	// (0x00028d9f) cell_graphic2_control_pane

0xe367,	// (0x00028db9) cell_graphic2_pane_g1_ParamLimits

0xe367,	// (0x00028db9) cell_graphic2_pane_g1

0xe374,	// (0x00028dc6) cell_graphic2_pane_g2_ParamLimits

0xe374,	// (0x00028dc6) cell_graphic2_pane_g2

0xe381,	// (0x00028dd3) cell_graphic2_pane_g3_ParamLimits

0xe381,	// (0x00028dd3) cell_graphic2_pane_g3

0xe38e,	// (0x00028de0) cell_graphic2_pane_g4_ParamLimits

0xe38e,	// (0x00028de0) cell_graphic2_pane_g4

0xe39b,	// (0x00028ded) cell_graphic2_pane_g5_ParamLimits

0xe39b,	// (0x00028ded) cell_graphic2_pane_g5

0x0004,

0xfdcb,	// (0x0002a81d) cell_graphic2_pane_g_ParamLimits

0xfdcb,	// (0x0002a81d) cell_graphic2_pane_g

0xe3b6,	// (0x00028e08) cell_graphic2_pane_t1_ParamLimits

0xe3b6,	// (0x00028e08) cell_graphic2_pane_t1

0x9cf4,	// (0x00024746) grid_highlight_pane_cp11_ParamLimits

0x9cf4,	// (0x00024746) grid_highlight_pane_cp11

0x80d6,	// (0x00022b28) bg_button_pane_cp05

0xe3cc,	// (0x00028e1e) cell_graphic2_control_pane_g1

0xc246,	// (0x00026c98) bg_touch_area_indi_pane_g1

0xe3d9,	// (0x00028e2b) aid_cmod_rocker_key_size

0xe3e3,	// (0x00028e35) aid_cmode_itu_key_size

0xe3ed,	// (0x00028e3f) main_cmode_video_pane

0xe3f7,	// (0x00028e49) main_comp_mode_itu_pane

0xe403,	// (0x00028e55) main_comp_mode_rocker_pane

0xe40f,	// (0x00028e61) cell_cmode_rocker_pane_ParamLimits

0xe40f,	// (0x00028e61) cell_cmode_rocker_pane

0xe423,	// (0x00028e75) cell_cmode_itu_pane_ParamLimits

0xe423,	// (0x00028e75) cell_cmode_itu_pane

0x80d6,	// (0x00022b28) bg_button_pane_cp06_ParamLimits

0x80d6,	// (0x00022b28) bg_button_pane_cp06

0xc4de,	// (0x00026f30) cell_cmode_rocker_pane_g1_ParamLimits

0xc4de,	// (0x00026f30) cell_cmode_rocker_pane_g1

0xda21,	// (0x00028473) cell_cmode_rocker_pane_g2_ParamLimits

0xda21,	// (0x00028473) cell_cmode_rocker_pane_g2

0x0001,

0xfdd6,	// (0x0002a828) cell_cmode_rocker_pane_g_ParamLimits

0xfdd6,	// (0x0002a828) cell_cmode_rocker_pane_g

0x775b,	// (0x000221ad) bg_button_pane_cp07

0xe43a,	// (0x00028e8c) cell_cmode_itu_pane_g1

0xe443,	// (0x00028e95) cell_cmode_itu_pane_t1

0xe451,	// (0x00028ea3) cell_cmode_itu_pane_t2

0x0001,

0xfddb,	// (0x0002a82d) cell_cmode_itu_pane_t

0xdc4f,	// (0x000286a1) aid_touch_ctrl_left

0xdc57,	// (0x000286a9) aid_touch_ctrl_right

0x775b,	// (0x000221ad) compa_mode_pane

0xe45f,	// (0x00028eb1) aid_cmod_rocker_key_size_cp

0xe469,	// (0x00028ebb) aid_cmode_itu_key_size_cp

0xe473,	// (0x00028ec5) compa_mode_pane_g1

0xe47b,	// (0x00028ecd) compa_mode_pane_g2

0xe483,	// (0x00028ed5) compa_mode_pane_g3

0x0002,

0xfde0,	// (0x0002a832) compa_mode_pane_g

0xe48b,	// (0x00028edd) main_comp_mode_itu_pane_cp

0xe493,	// (0x00028ee5) main_comp_mode_rocker_pane_cp

0xe49b,	// (0x00028eed) cell_cmode_itu_pane_cp_ParamLimits

0xe49b,	// (0x00028eed) cell_cmode_itu_pane_cp

0xe4b0,	// (0x00028f02) cell_cmode_rocker_pane_cp_ParamLimits

0xe4b0,	// (0x00028f02) cell_cmode_rocker_pane_cp

0x80d6,	// (0x00022b28) bg_button_pane_cp06_cp_ParamLimits

0x80d6,	// (0x00022b28) bg_button_pane_cp06_cp

0xc4de,	// (0x00026f30) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc4de,	// (0x00026f30) cell_cmode_rocker_pane_g1_cp

0xc246,	// (0x00026c98) cell_cmode_rocker_pane_g2_cp

0x775b,	// (0x000221ad) bg_button_pane_cp07_cp

0xe4c2,	// (0x00028f14) cell_cmode_itu_pane_g1_cp

0xe4cb,	// (0x00028f1d) cell_cmode_itu_pane_t1_cp

0xe4cb,	// (0x00028f1d) cell_cmode_itu_pane_t2_cp

0xb18a,	// (0x00025bdc) settings_code_pane_cp2

0x784f,	// (0x000222a1) bg_popup_window_pane_cp3_ParamLimits

0x7cc7,	// (0x00022719) heading_pane_cp3_ParamLimits

0x7cd3,	// (0x00022725) listscroll_popup_graphic_pane_ParamLimits

0x6b72,	// (0x000215c4) fep_hwr_aid_pane_ParamLimits

0x6f57,	// (0x000219a9) aid_touch_sctrl_top_ParamLimits

0x6f64,	// (0x000219b6) sctrl_sk_top_pane_g1_ParamLimits

0xc4de,	// (0x00026f30) sctrl_sk_top_pane_g2_ParamLimits

0xfd1b,	// (0x0002a76d) sctrl_sk_top_pane_g_ParamLimits

0x6f71,	// (0x000219c3) sctrl_sk_top_pane_t1_ParamLimits

0x6f57,	// (0x000219a9) aid_touch_sctrl_bottom_ParamLimits

0x6f71,	// (0x000219c3) sctrl_sk_bottom_pane_t1_ParamLimits

0xdb95,	// (0x000285e7) aid_area_touch_clock

0x7156,	// (0x00021ba8) aid_vkb2_area_top_pane_cell_ParamLimits

0x7156,	// (0x00021ba8) aid_vkb2_area_top_pane_cell

0x7286,	// (0x00021cd8) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x7286,	// (0x00021cd8) aid_vkb2_area_bottom_pane_cell

0xe0fe,	// (0x00028b50) popup_char_count_window

0xe4d9,	// (0x00028f2b) popup_char_count_window_g1

0xe4e2,	// (0x00028f34) popup_char_count_window_g2

0xe4eb,	// (0x00028f3d) popup_char_count_window_g3

0x0002,

0xfde7,	// (0x0002a839) popup_char_count_window_g

0xe4f4,	// (0x00028f46) popup_char_count_window_t1

0x7010,	// (0x00021a62) popup_fep_char_preview_window_ParamLimits

0x7010,	// (0x00021a62) popup_fep_char_preview_window

0x7174,	// (0x00021bc6) vkb2_top_candi_pane_ParamLimits

0x7174,	// (0x00021bc6) vkb2_top_candi_pane

0xe502,	// (0x00028f54) cell_vkb2_top_candi_pane_ParamLimits

0xe502,	// (0x00028f54) cell_vkb2_top_candi_pane

0xa277,	// (0x00024cc9) bg_popup_fep_char_preview_window_ParamLimits

0xa277,	// (0x00024cc9) bg_popup_fep_char_preview_window

0x7587,	// (0x00021fd9) popup_fep_char_preview_window_t1_ParamLimits

0x7587,	// (0x00021fd9) popup_fep_char_preview_window_t1

0xe553,	// (0x00028fa5) bg_popup_fep_char_preview_window_g1

0xe55b,	// (0x00028fad) bg_popup_fep_char_preview_window_g2

0xe563,	// (0x00028fb5) bg_popup_fep_char_preview_window_g3

0xe56b,	// (0x00028fbd) bg_popup_fep_char_preview_window_g4

0xe573,	// (0x00028fc5) bg_popup_fep_char_preview_window_g5

0x75c1,	// (0x00022013) bg_popup_fep_char_preview_window_g6

0xe57b,	// (0x00028fcd) bg_popup_fep_char_preview_window_g7

0xe583,	// (0x00028fd5) bg_popup_fep_char_preview_window_g8

0xe58b,	// (0x00028fdd) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdee,	// (0x0002a840) bg_popup_fep_char_preview_window_g

0xc4de,	// (0x00026f30) cell_vkb2_top_candi_pane_g1_ParamLimits

0xc4de,	// (0x00026f30) cell_vkb2_top_candi_pane_g1

0xc81f,	// (0x00027271) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc81f,	// (0x00027271) cell_vkb2_top_candi_pane_g2

0xc840,	// (0x00027292) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc840,	// (0x00027292) cell_vkb2_top_candi_pane_g3

0x75c9,	// (0x0002201b) cell_vkb2_top_candi_pane_g4_ParamLimits

0x75c9,	// (0x0002201b) cell_vkb2_top_candi_pane_g4

0xe593,	// (0x00028fe5) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe593,	// (0x00028fe5) cell_vkb2_top_candi_pane_g5

0xda21,	// (0x00028473) cell_vkb2_top_candi_pane_g6_ParamLimits

0xda21,	// (0x00028473) cell_vkb2_top_candi_pane_g6

0x0005,

0xfe01,	// (0x0002a853) cell_vkb2_top_candi_pane_g_ParamLimits

0xfe01,	// (0x0002a853) cell_vkb2_top_candi_pane_g

0x75ea,	// (0x0002203c) cell_vkb2_top_candi_pane_t1

0x6a22,	// (0x00021474) aid_size_touch_slider_mark_ParamLimits

0x6a22,	// (0x00021474) aid_size_touch_slider_mark

0xe1e5,	// (0x00028c37) grid_graphic2_catg_pane_ParamLimits

0xe1e5,	// (0x00028c37) grid_graphic2_catg_pane

0xe25f,	// (0x00028cb1) popup_grid_graphic2_window_t1_ParamLimits

0xe25f,	// (0x00028cb1) popup_grid_graphic2_window_t1

0xe271,	// (0x00028cc3) popup_grid_graphic2_window_t2_ParamLimits

0xe271,	// (0x00028cc3) popup_grid_graphic2_window_t2

0x0001,

0xfdc1,	// (0x0002a813) popup_grid_graphic2_window_t_ParamLimits

0xfdc1,	// (0x0002a813) popup_grid_graphic2_window_t

0x80d6,	// (0x00022b28) bg_button_pane_cp05_ParamLimits

0xe3cc,	// (0x00028e1e) cell_graphic2_control_pane_g1_ParamLimits

0xe5b4,	// (0x00029006) cell_graphic2_catg_pane_ParamLimits

0xe5b4,	// (0x00029006) cell_graphic2_catg_pane

0x775b,	// (0x000221ad) bg_button_pane_cp12

0xe5c6,	// (0x00029018) cell_graphic2_catg_pane_g1

0xdb61,	// (0x000285b3) cell_tb_ext_pane_t1_ParamLimits

0x73a3,	// (0x00021df5) vkb2_top_cell_right_narrow_pane_ParamLimits

0x73a3,	// (0x00021df5) vkb2_top_cell_right_narrow_pane

0x73bb,	// (0x00021e0d) vkb2_top_cell_right_wide_pane_ParamLimits

0x73bb,	// (0x00021e0d) vkb2_top_cell_right_wide_pane

0xc2b6,	// (0x00026d08) bg_vkb2_func_pane_ParamLimits

0xc2b6,	// (0x00026d08) bg_vkb2_func_pane

0x742c,	// (0x00021e7e) vkb2_top_cell_left_pane_g1_ParamLimits

0xc2b6,	// (0x00026d08) bg_vkb2_fuc_pane_cp03_ParamLimits

0xc2b6,	// (0x00026d08) bg_vkb2_fuc_pane_cp03

0x74a0,	// (0x00021ef2) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9c0a,	// (0x0002465c) bg_vkb2_func_pane_g1

0x9c12,	// (0x00024664) bg_vkb2_func_pane_g2

0x9c22,	// (0x00024674) bg_vkb2_func_pane_g3

0x9c1a,	// (0x0002466c) bg_vkb2_func_pane_g4

0x9c2a,	// (0x0002467c) bg_vkb2_func_pane_g5

0x9c32,	// (0x00024684) bg_vkb2_func_pane_g6

0x9c3a,	// (0x0002468c) bg_vkb2_func_pane_g7

0x9c42,	// (0x00024694) bg_vkb2_func_pane_g8

0x9c02,	// (0x00024654) bg_vkb2_func_pane_g9

0x0008,

0xfe0e,	// (0x0002a860) bg_vkb2_func_pane_g

0xc2b6,	// (0x00026d08) bg_vkb2_fuc_pane_cp01_ParamLimits

0xc2b6,	// (0x00026d08) bg_vkb2_fuc_pane_cp01

0x742c,	// (0x00021e7e) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x742c,	// (0x00021e7e) vkb2_top_cell_right_wide_pane_g1

0xc2b6,	// (0x00026d08) bg_vkb2_fuc_pane_cp02_ParamLimits

0xc2b6,	// (0x00026d08) bg_vkb2_fuc_pane_cp02

0x74a0,	// (0x00021ef2) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x74a0,	// (0x00021ef2) vkb2_top_cell_right_narrow_pane_g1

0xd782,	// (0x000281d4) aid_touch_area_decrease_ParamLimits

0xd782,	// (0x000281d4) aid_touch_area_decrease

0xd7a6,	// (0x000281f8) aid_touch_area_increase_ParamLimits

0xd7a6,	// (0x000281f8) aid_touch_area_increase

0xd7b2,	// (0x00028204) aid_touch_area_mute_ParamLimits

0xd7b2,	// (0x00028204) aid_touch_area_mute

0xd7d6,	// (0x00028228) aid_touch_area_slider_ParamLimits

0xd7d6,	// (0x00028228) aid_touch_area_slider

0xd8c6,	// (0x00028318) popup_slider_window_g4_ParamLimits

0xd8c6,	// (0x00028318) popup_slider_window_g4

0xd8d2,	// (0x00028324) popup_slider_window_g5_ParamLimits

0xd8d2,	// (0x00028324) popup_slider_window_g5

0xd8f4,	// (0x00028346) popup_slider_window_g6_ParamLimits

0xd8f4,	// (0x00028346) popup_slider_window_g6

0xd934,	// (0x00028386) popup_slider_window_t2_ParamLimits

0xd934,	// (0x00028386) popup_slider_window_t2

0x0001,

0xfd0f,	// (0x0002a761) popup_slider_window_t_ParamLimits

0xfd0f,	// (0x0002a761) popup_slider_window_t

0xd94c,	// (0x0002839e) slider_pane_ParamLimits

0xd94c,	// (0x0002839e) slider_pane

0xe5cf,	// (0x00029021) slider_pane_g1_ParamLimits

0xe5cf,	// (0x00029021) slider_pane_g1

0xe5e3,	// (0x00029035) slider_pane_g2_ParamLimits

0xe5e3,	// (0x00029035) slider_pane_g2

0xe5f9,	// (0x0002904b) slider_pane_g3_ParamLimits

0xe5f9,	// (0x0002904b) slider_pane_g3

0x0003,

0xfe21,	// (0x0002a873) slider_pane_g_ParamLimits

0xfe21,	// (0x0002a873) slider_pane_g

0x95fc,	// (0x0002404e) popup_tb_float_extension_window_ParamLimits

0x95fc,	// (0x0002404e) popup_tb_float_extension_window

0xe625,	// (0x00029077) aid_size_cell_tb_float_ext

0x775b,	// (0x000221ad) bg_popup_sub_window_cp28

0xe631,	// (0x00029083) grid_tb_float_ext_pane

0xe63d,	// (0x0002908f) cell_tb_float_ext_pane_ParamLimits

0xe63d,	// (0x0002908f) cell_tb_float_ext_pane

0xe659,	// (0x000290ab) cell_tb_float_ext_pane_g1

0xe662,	// (0x000290b4) grid_highlight_pane_cp12

0x6cab,	// (0x000216fd) cell_last_hwr_side_pane_ParamLimits

0x6cab,	// (0x000216fd) cell_last_hwr_side_pane

0xc246,	// (0x00026c98) cell_last_hwr_side_pane_g1

0xe66b,	// (0x000290bd) cell_last_hwr_side_pane_g2

0x0001,

0xfe2a,	// (0x0002a87c) cell_last_hwr_side_pane_g

0x7352,	// (0x00021da4) vkb2_area_bottom_space_btn_pane_ParamLimits

0x7352,	// (0x00021da4) vkb2_area_bottom_space_btn_pane

0xc4de,	// (0x00026f30) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe171,	// (0x00028bc3) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x75ea,	// (0x0002203c) cell_vkb2_top_candi_pane_t1_ParamLimits

0x7608,	// (0x0002205a) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x7608,	// (0x0002205a) vkb2_area_bottom_space_btn_pane_g1

0x7642,	// (0x00022094) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x7642,	// (0x00022094) vkb2_area_bottom_space_btn_pane_g2

0x7678,	// (0x000220ca) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x7678,	// (0x000220ca) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe2f,	// (0x0002a881) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe2f,	// (0x0002a881) vkb2_area_bottom_space_btn_pane_g

0x6c1b,	// (0x0002166d) cel_fep_hwr_func_pane_ParamLimits

0x6c1b,	// (0x0002166d) cel_fep_hwr_func_pane

0x6c57,	// (0x000216a9) cell_hwr_side_button_pane_ParamLimits

0x6c57,	// (0x000216a9) cell_hwr_side_button_pane

0xdb95,	// (0x000285e7) aid_area_touch_clock_ParamLimits

0x7ad9,	// (0x0002252b) bg_uniindi_top_pane_ParamLimits

0xdba9,	// (0x000285fb) uniindi_top_pane_g1_ParamLimits

0xdbbf,	// (0x00028611) uniindi_top_pane_g2_ParamLimits

0xdbcb,	// (0x0002861d) uniindi_top_pane_g3_ParamLimits

0xdbdc,	// (0x0002862e) uniindi_top_pane_g4_ParamLimits

0xfd47,	// (0x0002a799) uniindi_top_pane_g_ParamLimits

0xdbe9,	// (0x0002863b) uniindi_top_pane_t1_ParamLimits

0x7ad9,	// (0x0002252b) bg_vkb2_func_pane_cp01_ParamLimits

0x7ad9,	// (0x0002252b) bg_vkb2_func_pane_cp01

0xe674,	// (0x000290c6) cel_fep_hwr_func_pane_g1_ParamLimits

0xe674,	// (0x000290c6) cel_fep_hwr_func_pane_g1

0x7ad9,	// (0x0002252b) bg_vkb2_func_pane_cp02_ParamLimits

0x7ad9,	// (0x0002252b) bg_vkb2_func_pane_cp02

0xe674,	// (0x000290c6) cell_hwr_side_button_pane_g1_ParamLimits

0xe674,	// (0x000290c6) cell_hwr_side_button_pane_g1

0x9a83,	// (0x000244d5) status_pane_g4_ParamLimits

0x9a83,	// (0x000244d5) status_pane_g4

0x9a9d,	// (0x000244ef) status_pane_t1

0xbfe2,	// (0x00026a34) form2_midp_gauge_slider_cont_pane

0xbfea,	// (0x00026a3c) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbffc,	// (0x00026a4e) form2_midp_gauge_slider_pane_t2_ParamLimits

0xc00e,	// (0x00026a60) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb13,	// (0x0002a565) form2_midp_gauge_slider_pane_t_ParamLimits

0xc020,	// (0x00026a72) form2_midp_slider_pane_ParamLimits

0x6fd8,	// (0x00021a2a) aid_size_cell_func_vkb2_ParamLimits

0x6fd8,	// (0x00021a2a) aid_size_cell_func_vkb2

0xe611,	// (0x00029063) slider_pane_g4_ParamLimits

0xe611,	// (0x00029063) slider_pane_g4

0x76c2,	// (0x00022114) form2_midp_gauge_slider_pane_t2_cp01

0x76d0,	// (0x00022122) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x76d0,	// (0x00022122) form2_midp_gauge_slider_pane_t3_cp01

0x76ed,	// (0x0002213f) form2_midp_slider_pane_cp01

0x775b,	// (0x000221ad) navi_smil_pane

0xe6ad,	// (0x000290ff) navi_smil_pane_g1

0xe6b5,	// (0x00029107) navi_smil_pane_t1

0xe682,	// (0x000290d4) form2_midp_slider_pane_g1

0xe68b,	// (0x000290dd) form2_midp_slider_pane_g2

0xe693,	// (0x000290e5) form2_midp_slider_pane_g3

0xe682,	// (0x000290d4) form2_midp_slider_pane_g4

0xe69b,	// (0x000290ed) form2_midp_slider_pane_g5

0x0004,

0xfe38,	// (0x0002a88a) form2_midp_slider_pane_g

0x76b2,	// (0x00022104) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x76b2,	// (0x00022104) vkb2_area_bottom_space_btn_pane_g4

0x989b,	// (0x000242ed) lc0_navi_pane_ParamLimits

0x989b,	// (0x000242ed) lc0_navi_pane

0x9917,	// (0x00024369) lc0_stat_indi_pane_ParamLimits

0x9917,	// (0x00024369) lc0_stat_indi_pane

0x992e,	// (0x00024380) ls0_title_pane_ParamLimits

0x992e,	// (0x00024380) ls0_title_pane

0x80d6,	// (0x00022b28) bg_popup_sub_pane_cp14_ParamLimits

0xdb7c,	// (0x000285ce) list_uniindi_pane_ParamLimits

0xdb88,	// (0x000285da) uniindi_top_pane_ParamLimits

0xdc27,	// (0x00028679) list_single_uniindi_pane_g1_ParamLimits

0xdc3a,	// (0x0002868c) list_single_uniindi_pane_t1_ParamLimits

0x76f6,	// (0x00022148) lc0_stat_clock_pane_ParamLimits

0x76f6,	// (0x00022148) lc0_stat_clock_pane

0xe6c3,	// (0x00029115) lc0_stat_indi_pane_g1_ParamLimits

0xe6c3,	// (0x00029115) lc0_stat_indi_pane_g1

0xe6d0,	// (0x00029122) lc0_stat_indi_pane_g2_ParamLimits

0xe6d0,	// (0x00029122) lc0_stat_indi_pane_g2

0x0001,

0xfe43,	// (0x0002a895) lc0_stat_indi_pane_g_ParamLimits

0xfe43,	// (0x0002a895) lc0_stat_indi_pane_g

0x7703,	// (0x00022155) lc0_uni_indicator_pane_ParamLimits

0x7703,	// (0x00022155) lc0_uni_indicator_pane

0xe6dd,	// (0x0002912f) ls0_title_pane_g1_ParamLimits

0xe6dd,	// (0x0002912f) ls0_title_pane_g1

0xe6f1,	// (0x00029143) ls0_title_pane_t1_ParamLimits

0xe6f1,	// (0x00029143) ls0_title_pane_t1

0x7710,	// (0x00022162) lc0_uni_indicator_pane_g1_ParamLimits

0x7710,	// (0x00022162) lc0_uni_indicator_pane_g1

0xe727,	// (0x00029179) lc0_stat_clock_pane_t1

0x775b,	// (0x000221ad) main_ai5_pane

0xe735,	// (0x00029187) ai5_sk_pane_ParamLimits

0xe735,	// (0x00029187) ai5_sk_pane

0xe742,	// (0x00029194) cell_ai5_widget_pane_ParamLimits

0xe742,	// (0x00029194) cell_ai5_widget_pane

0xe7b8,	// (0x0002920a) aid_size_cell_widget_grid

0xe7cc,	// (0x0002921e) bg_ai5_widget_pane_ParamLimits

0xe7cc,	// (0x0002921e) bg_ai5_widget_pane

0xe7f4,	// (0x00029246) cell_ai5_widget_pane_g2

0xe804,	// (0x00029256) cell_ai5_widget_pane_g3

0xe818,	// (0x0002926a) cell_ai5_widget_pane_g4

0xe824,	// (0x00029276) cell_ai5_widget_pane_g5

0xe830,	// (0x00029282) cell_ai5_widget_pane_g6

0xe83e,	// (0x00029290) cell_ai5_widget_pane_g7

0xe886,	// (0x000292d8) cell_ai5_widget_pane_t1_ParamLimits

0xe886,	// (0x000292d8) cell_ai5_widget_pane_t1

0xe8a3,	// (0x000292f5) cell_ai5_widget_pane_t2_ParamLimits

0xe8a3,	// (0x000292f5) cell_ai5_widget_pane_t2

0xe8bb,	// (0x0002930d) cell_ai5_widget_pane_t3_ParamLimits

0xe8bb,	// (0x0002930d) cell_ai5_widget_pane_t3

0xe8d3,	// (0x00029325) cell_ai5_widget_pane_t4_ParamLimits

0xe8d3,	// (0x00029325) cell_ai5_widget_pane_t4

0xe8ed,	// (0x0002933f) cell_ai5_widget_pane_t5_ParamLimits

0xe8ed,	// (0x0002933f) cell_ai5_widget_pane_t5

0xe90c,	// (0x0002935e) cell_ai5_widget_pane_t6_ParamLimits

0xe90c,	// (0x0002935e) cell_ai5_widget_pane_t6

0xe91e,	// (0x00029370) cell_ai5_widget_pane_t7_ParamLimits

0xe91e,	// (0x00029370) cell_ai5_widget_pane_t7

0xe937,	// (0x00029389) cell_ai5_widget_pane_t8_ParamLimits

0xe937,	// (0x00029389) cell_ai5_widget_pane_t8

0x0009,

0xfe5d,	// (0x0002a8af) cell_ai5_widget_pane_t_ParamLimits

0xfe5d,	// (0x0002a8af) cell_ai5_widget_pane_t

0xe97f,	// (0x000293d1) grid_ai5_widget_pane

0x80d6,	// (0x00022b28) highlight_cell_ai5_widget_pane_ParamLimits

0x80d6,	// (0x00022b28) highlight_cell_ai5_widget_pane

0xe996,	// (0x000293e8) ai5_sk_left_pane

0xe9a0,	// (0x000293f2) ai5_sk_middle_pane

0xe9aa,	// (0x000293fc) ai5_sk_right_pane

0xe9b4,	// (0x00029406) bg_ai5_widget_pane_g1_ParamLimits

0xe9b4,	// (0x00029406) bg_ai5_widget_pane_g1

0xe9c0,	// (0x00029412) bg_ai5_widget_pane_g2_ParamLimits

0xe9c0,	// (0x00029412) bg_ai5_widget_pane_g2

0xe9cc,	// (0x0002941e) bg_ai5_widget_pane_g3_ParamLimits

0xe9cc,	// (0x0002941e) bg_ai5_widget_pane_g3

0xe9d8,	// (0x0002942a) bg_ai5_widget_pane_g4_ParamLimits

0xe9d8,	// (0x0002942a) bg_ai5_widget_pane_g4

0xe9e4,	// (0x00029436) bg_ai5_widget_pane_g5_ParamLimits

0xe9e4,	// (0x00029436) bg_ai5_widget_pane_g5

0xe9f0,	// (0x00029442) bg_ai5_widget_pane_g6_ParamLimits

0xe9f0,	// (0x00029442) bg_ai5_widget_pane_g6

0xe9fc,	// (0x0002944e) bg_ai5_widget_pane_g7_ParamLimits

0xe9fc,	// (0x0002944e) bg_ai5_widget_pane_g7

0xea08,	// (0x0002945a) bg_ai5_widget_pane_g8_ParamLimits

0xea08,	// (0x0002945a) bg_ai5_widget_pane_g8

0xea14,	// (0x00029466) bg_ai5_widget_pane_g9_ParamLimits

0xea14,	// (0x00029466) bg_ai5_widget_pane_g9

0x0008,

0xfe72,	// (0x0002a8c4) bg_ai5_widget_pane_g_ParamLimits

0xfe72,	// (0x0002a8c4) bg_ai5_widget_pane_g

0xea39,	// (0x0002948b) cell_shortcut_ai5_widget_pane_ParamLimits

0xea39,	// (0x0002948b) cell_shortcut_ai5_widget_pane

0x791b,	// (0x0002236d) bg_cell_shortcut_ai5_widget_pane

0xea4b,	// (0x0002949d) cell_grid_ai5_widget_pane_g1

0xea54,	// (0x000294a6) highlight_cell_shortcut_ai5_widget_pane

0x9c12,	// (0x00024664) ai5_sk_left_pane_g1

0xea5c,	// (0x000294ae) ai5_sk_left_pane_g2

0xea64,	// (0x000294b6) ai5_sk_left_pane_g3

0xea6c,	// (0x000294be) ai5_sk_left_pane_g4

0x0003,

0xfe85,	// (0x0002a8d7) ai5_sk_left_pane_g

0xea74,	// (0x000294c6) ai5_sk_left_pane_t1

0x9c0a,	// (0x0002465c) ai5_sk_right_pane_g1

0xea82,	// (0x000294d4) ai5_sk_right_pane_g2

0xea8a,	// (0x000294dc) ai5_sk_right_pane_g3

0xea92,	// (0x000294e4) ai5_sk_right_pane_g4

0x0003,

0xfe8e,	// (0x0002a8e0) ai5_sk_right_pane_g

0xea9a,	// (0x000294ec) ai5_sk_right_pane_t1

0x9c0a,	// (0x0002465c) ai5_sk_middle_pane_g1

0x9c12,	// (0x00024664) ai5_sk_middle_pane_g2

0x9c2a,	// (0x0002467c) ai5_sk_middle_pane_g3

0xea8a,	// (0x000294dc) ai5_sk_middle_pane_g4

0xea64,	// (0x000294b6) ai5_sk_middle_pane_g5

0xeaa8,	// (0x000294fa) ai5_sk_middle_pane_g6

0xeab0,	// (0x00029502) ai5_sk_middle_pane_g7

0x0006,

0xfe97,	// (0x0002a8e9) ai5_sk_middle_pane_g

0x971d,	// (0x0002416f) aid_touch_area_size_lc0_ParamLimits

0x971d,	// (0x0002416f) aid_touch_area_size_lc0

0x6dba,	// (0x0002180c) cell_hwr_candidate_pane_t1_ParamLimits

0x973b,	// (0x0002418d) aid_touch_navi_pane

0x9a2d,	// (0x0002447f) status_dt_navi_pane_ParamLimits

0x9a2d,	// (0x0002447f) status_dt_navi_pane

0x9a3a,	// (0x0002448c) status_dt_sta_pane_ParamLimits

0x9a3a,	// (0x0002448c) status_dt_sta_pane

0xeab8,	// (0x0002950a) dt_sta_controll_pane

0xeac5,	// (0x00029517) dt_sta_indi_pane

0xead6,	// (0x00029528) dt_sta_title_pane

0x7ad9,	// (0x0002252b) bg_dt_sta_indi_pane_ParamLimits

0x7ad9,	// (0x0002252b) bg_dt_sta_indi_pane

0xeae9,	// (0x0002953b) dt_sta_battery_pane

0xeaf1,	// (0x00029543) dt_sta_indi_pane_g1

0xeafa,	// (0x0002954c) dt_sta_indi_pane_g2

0xeb03,	// (0x00029555) dt_sta_indi_pane_g3

0x0002,

0xfea6,	// (0x0002a8f8) dt_sta_indi_pane_g

0xeb0c,	// (0x0002955e) dt_sta_signal_pane

0x80d6,	// (0x00022b28) bg_dt_sta_title_pane_ParamLimits

0x80d6,	// (0x00022b28) bg_dt_sta_title_pane

0xeb15,	// (0x00029567) dt_sta_title_pane_g1

0xeb1d,	// (0x0002956f) dt_sta_title_pane_t1_ParamLimits

0xeb1d,	// (0x0002956f) dt_sta_title_pane_t1

0x775b,	// (0x000221ad) bg_dt_sta_control_pane

0xeb32,	// (0x00029584) dt_sta_controll_pane_g1

0xeb3b,	// (0x0002958d) bg_dt_sta_title_pane_g1

0xeb44,	// (0x00029596) bg_dt_sta_title_pane_g2

0xeb4d,	// (0x0002959f) bg_dt_sta_title_pane_g3

0x0002,

0xfead,	// (0x0002a8ff) bg_dt_sta_title_pane_g

0xc246,	// (0x00026c98) bg_dt_sta_indi_pane_g1

0xeb56,	// (0x000295a8) dt_sta_signal_pane_g1

0xeb5e,	// (0x000295b0) dt_sta_signal_pane_g2

0x0001,

0xfeb4,	// (0x0002a906) dt_sta_signal_pane_g

0xeb66,	// (0x000295b8) dt_sta_battery_pane_g1

0xeb6f,	// (0x000295c1) dt_sta_battery_pane_t1

0xc246,	// (0x00026c98) bg_dt_sta_control_pane_g1

0x8832,	// (0x00023284) fep_china_uni_eep_pane

0x883a,	// (0x0002328c) fep_china_uni_entry_pane_ParamLimits

0x884a,	// (0x0002329c) popup_fep_china_uni_window_g1_ParamLimits

0x885a,	// (0x000232ac) popup_fep_china_uni_window_g2_ParamLimits

0x885a,	// (0x000232ac) popup_fep_china_uni_window_g2

0x0001,

0xf75d,	// (0x0002a1af) popup_fep_china_uni_window_g_ParamLimits

0xf75d,	// (0x0002a1af) popup_fep_china_uni_window_g

0xeb7e,	// (0x000295d0) fep_china_uni_eep_pane_g1

0xeb86,	// (0x000295d8) fep_china_uni_eep_pane_t1

0xe6a4,	// (0x000290f6) aid_touch_area_size_smil_player

0x9893,	// (0x000242e5) lc0_clock_pane

0x9a91,	// (0x000244e3) status_pane_g5_ParamLimits

0x9a91,	// (0x000244e3) status_pane_g5

0x9281,	// (0x00023cd3) popup_keymap_window

0x9a4f,	// (0x000244a1) status_icon_pane

0xe804,	// (0x00029256) cell_ai5_widget_pane_g3_ParamLimits

0xe818,	// (0x0002926a) cell_ai5_widget_pane_g4_ParamLimits

0xe824,	// (0x00029276) cell_ai5_widget_pane_g5_ParamLimits

0xe84a,	// (0x0002929c) cell_ai5_widget_pane_g8_ParamLimits

0xe84a,	// (0x0002929c) cell_ai5_widget_pane_g8

0xe85e,	// (0x000292b0) cell_ai5_widget_pane_g9_ParamLimits

0xe85e,	// (0x000292b0) cell_ai5_widget_pane_g9

0xe872,	// (0x000292c4) cell_ai5_widget_pane_g10_ParamLimits

0xe872,	// (0x000292c4) cell_ai5_widget_pane_g10

0xeb95,	// (0x000295e7) status_icon_pane_g1

0x775b,	// (0x000221ad) bg_popup_sub_pane_cp13

0xeb9d,	// (0x000295ef) popup_keymap_window_t1

0x901b,	// (0x00023a6d) control_pane_g6_ParamLimits

0x901b,	// (0x00023a6d) control_pane_g6

0x9028,	// (0x00023a7a) control_pane_g7_ParamLimits

0x9028,	// (0x00023a7a) control_pane_g7

0x9035,	// (0x00023a87) control_pane_g8_ParamLimits

0x9035,	// (0x00023a87) control_pane_g8

0xeab8,	// (0x0002950a) dt_sta_controll_pane_ParamLimits

0xeac5,	// (0x00029517) dt_sta_indi_pane_ParamLimits

0xead6,	// (0x00029528) dt_sta_title_pane_ParamLimits

0x800e,	// (0x00022a60) aid_size_touch_scroll_bar_cale

0x5f37,	// (0x00020989) popup_discreet_window_ParamLimits

0x5f37,	// (0x00020989) popup_discreet_window

0x5fc5,	// (0x00020a17) popup_sk_window

0xa277,	// (0x00024cc9) bg_popup_sub_pane_cp28_ParamLimits

0xa277,	// (0x00024cc9) bg_popup_sub_pane_cp28

0xebab,	// (0x000295fd) popup_discreet_window_g1_ParamLimits

0xebab,	// (0x000295fd) popup_discreet_window_g1

0xebcb,	// (0x0002961d) popup_discreet_window_t1_ParamLimits

0xebcb,	// (0x0002961d) popup_discreet_window_t1

0xebe9,	// (0x0002963b) popup_discreet_window_t2_ParamLimits

0xebe9,	// (0x0002963b) popup_discreet_window_t2

0x0002,

0xfeb9,	// (0x0002a90b) popup_discreet_window_t_ParamLimits

0xfeb9,	// (0x0002a90b) popup_discreet_window_t

0x7723,	// (0x00022175) popup_sk_window_g1

0x772d,	// (0x0002217f) popup_sk_window_g2

0x0001,

0xfec0,	// (0x0002a912) popup_sk_window_g

0xec3b,	// (0x0002968d) popup_sk_window_t1

0xec49,	// (0x0002969b) popup_sk_window_t1_copy1

0xe7f4,	// (0x00029246) cell_ai5_widget_pane_g2_ParamLimits

0xe949,	// (0x0002939b) cell_ai5_widget_pane_t9_ParamLimits

0xe949,	// (0x0002939b) cell_ai5_widget_pane_t9

0x775b,	// (0x000221ad) main_fep_fshwr2_pane

0xec57,	// (0x000296a9) aid_fshwr2_btn_pane

0xec5f,	// (0x000296b1) aid_fshwr2_syb_pane

0xec67,	// (0x000296b9) aid_fshwr2_txt_pane

0xec6f,	// (0x000296c1) fshwr2_func_candi_pane

0xec79,	// (0x000296cb) fshwr2_hwr_syb_pane

0xec83,	// (0x000296d5) fshwr2_icf_pane

0x775b,	// (0x000221ad) fshwr2_icf_bg_pane

0xeca5,	// (0x000296f7) fshwr2_icf_pane_t1_ParamLimits

0xeca5,	// (0x000296f7) fshwr2_icf_pane_t1

0xc246,	// (0x00026c98) fshwr2_func_candi_pane_g1

0xecbc,	// (0x0002970e) fshwr2_func_candi_row_pane_ParamLimits

0xecbc,	// (0x0002970e) fshwr2_func_candi_row_pane

0xeccd,	// (0x0002971f) cell_fshwr2_syb_pane_ParamLimits

0xeccd,	// (0x0002971f) cell_fshwr2_syb_pane

0xc4de,	// (0x00026f30) fshwr2_hwr_syb_pane_g1_ParamLimits

0xc4de,	// (0x00026f30) fshwr2_hwr_syb_pane_g1

0x775b,	// (0x000221ad) bg_popup_call_pane_cp01

0xece7,	// (0x00029739) fshwr2_func_candi_cell_pane_ParamLimits

0xece7,	// (0x00029739) fshwr2_func_candi_cell_pane

0xed19,	// (0x0002976b) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xed19,	// (0x0002976b) fshwr2_func_candi_cell_bg_pane

0xed33,	// (0x00029785) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xed33,	// (0x00029785) fshwr2_func_candi_cell_pane_g1

0xed53,	// (0x000297a5) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xed53,	// (0x000297a5) fshwr2_func_candi_cell_pane_t1

0x775b,	// (0x000221ad) bg_button_pane_cp08

0x8d40,	// (0x00023792) cell_fshwr2_syb_bg_pane

0xed66,	// (0x000297b8) cell_fshwr2_syb_bg_pane_g1

0xed6e,	// (0x000297c0) cell_fshwr2_syb_bg_pane_t1

0x80d6,	// (0x00022b28) main_tmo_pane

0xada1,	// (0x000257f3) uni_indicator_pane_g1_ParamLimits

0xadb6,	// (0x00025808) uni_indicator_pane_g2_ParamLimits

0xadcc,	// (0x0002581e) uni_indicator_pane_g3_ParamLimits

0xade2,	// (0x00025834) uni_indicator_pane_g4_ParamLimits

0xade2,	// (0x00025834) uni_indicator_pane_g4

0xadf6,	// (0x00025848) uni_indicator_pane_g5_ParamLimits

0xadf6,	// (0x00025848) uni_indicator_pane_g5

0xae0a,	// (0x0002585c) uni_indicator_pane_g6_ParamLimits

0xae0a,	// (0x0002585c) uni_indicator_pane_g6

0xf95a,	// (0x0002a3ac) uni_indicator_pane_g_ParamLimits

0xd752,	// (0x000281a4) popup_tmo_note_window_ParamLimits

0xd752,	// (0x000281a4) popup_tmo_note_window

0x775b,	// (0x000221ad) fshwr2_bg_pane

0xed44,	// (0x00029796) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xed44,	// (0x00029796) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfec5,	// (0x0002a917) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfec5,	// (0x0002a917) fshwr2_func_candi_cell_pane_g

0xc246,	// (0x00026c98) bg_popup_window_pane_cp01

0xed7d,	// (0x000297cf) bg_popup_window_pane_g1_cp01

0xed86,	// (0x000297d8) bg_popup_window_pane_cp22_ParamLimits

0xed86,	// (0x000297d8) bg_popup_window_pane_cp22

0xed94,	// (0x000297e6) listscroll_tmo_link_pane_ParamLimits

0xed94,	// (0x000297e6) listscroll_tmo_link_pane

0xedd4,	// (0x00029826) popup_tmo_note_window_g1_ParamLimits

0xedd4,	// (0x00029826) popup_tmo_note_window_g1

0xede1,	// (0x00029833) tmo_note_info_pane_ParamLimits

0xede1,	// (0x00029833) tmo_note_info_pane

0xedfb,	// (0x0002984d) list_tmo_note_info_pane_g1_ParamLimits

0xedfb,	// (0x0002984d) list_tmo_note_info_pane_g1

0xee12,	// (0x00029864) list_tmo_note_info_pane_g2_ParamLimits

0xee12,	// (0x00029864) list_tmo_note_info_pane_g2

0x0001,

0xfeca,	// (0x0002a91c) list_tmo_note_info_pane_g_ParamLimits

0xfeca,	// (0x0002a91c) list_tmo_note_info_pane_g

0xee2e,	// (0x00029880) list_tmo_note_info_text_pane_ParamLimits

0xee2e,	// (0x00029880) list_tmo_note_info_text_pane

0xeeb3,	// (0x00029905) list_tmo_link_pane

0xeec0,	// (0x00029912) scroll_pane_cp20

0xeecd,	// (0x0002991f) list_single_tmo_link_pane_ParamLimits

0xeecd,	// (0x0002991f) list_single_tmo_link_pane

0xeedd,	// (0x0002992f) list_single_tmo_link_pane_t1

0xeeeb,	// (0x0002993d) list_tmo_note_info_text_pane_t1_ParamLimits

0xeeeb,	// (0x0002993d) list_tmo_note_info_text_pane_t1

0x819c,	// (0x00022bee) aid_size_touch_scroll_bar_cp01_ParamLimits

0x819c,	// (0x00022bee) aid_size_touch_scroll_bar_cp01

0x5322,	// (0x0001fd74) aid_size_touch_slider_marker

0x5fad,	// (0x000209ff) popup_settings_window_ParamLimits

0x5fad,	// (0x000209ff) popup_settings_window

0x54cd,	// (0x0001ff1f) popup_candi_list_indi_window

0x973b,	// (0x0002418d) aid_touch_navi_pane_ParamLimits

0x6f2b,	// (0x0002197d) rs_clock_indi_pane

0x6f34,	// (0x00021986) sctrl_sk_bottom_pane_ParamLimits

0x6f45,	// (0x00021997) sctrl_sk_top_pane_ParamLimits

0x702a,	// (0x00021a7c) popup_fep_tooltip_window

0xe7b8,	// (0x0002920a) aid_size_cell_widget_grid_ParamLimits

0xe7e8,	// (0x0002923a) cell_ai5_widget_pane_g1_ParamLimits

0xe7e8,	// (0x0002923a) cell_ai5_widget_pane_g1

0xe830,	// (0x00029282) cell_ai5_widget_pane_g6_ParamLimits

0xe83e,	// (0x00029290) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe48,	// (0x0002a89a) cell_ai5_widget_pane_g_ParamLimits

0xfe48,	// (0x0002a89a) cell_ai5_widget_pane_g

0xe96d,	// (0x000293bf) cell_ai5_widget_pane_t10_ParamLimits

0xe96d,	// (0x000293bf) cell_ai5_widget_pane_t10

0xe97f,	// (0x000293d1) grid_ai5_widget_pane_ParamLimits

0xea20,	// (0x00029472) cell_contacts_ai5_widget_pane_ParamLimits

0xea20,	// (0x00029472) cell_contacts_ai5_widget_pane

0xebfe,	// (0x00029650) popup_discreet_window_t3_ParamLimits

0xebfe,	// (0x00029650) popup_discreet_window_t3

0xec8d,	// (0x000296df) popup_fshwr2_char_preview_window_ParamLimits

0xec8d,	// (0x000296df) popup_fshwr2_char_preview_window

0xee4c,	// (0x0002989e) tmo_note_info_pane_t1

0xee61,	// (0x000298b3) tmo_note_info_pane_t2

0xee7a,	// (0x000298cc) tmo_note_info_pane_t3

0xee8f,	// (0x000298e1) tmo_note_info_pane_t4

0xeea1,	// (0x000298f3) tmo_note_info_pane_t5

0x0004,

0xfecf,	// (0x0002a921) tmo_note_info_pane_t

0xeeb3,	// (0x00029905) list_tmo_link_pane_ParamLimits

0xeec0,	// (0x00029912) scroll_pane_cp20_ParamLimits

0x775b,	// (0x000221ad) bg_popup_fep_char_preview_window_cp01

0xef04,	// (0x00029956) popup_fshwr2_char_preview_window_t1

0xef12,	// (0x00029964) popup_candi_list_indi_window_g1

0xef1b,	// (0x0002996d) bg_cell_contacts_ai5_widget_pane

0xef27,	// (0x00029979) cell_contacts_ai5_widget_pane_g1

0xef3b,	// (0x0002998d) cell_contacts_ai5_widget_pane_g2

0xef4a,	// (0x0002999c) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeda,	// (0x0002a92c) cell_contacts_ai5_widget_pane_g

0xef5d,	// (0x000299af) cell_contacts_ai5_widget_pane_t1

0x80d6,	// (0x00022b28) highlight_cell_shortcut_ai5_widget_pane_cp01

0xefd7,	// (0x00029a29) settings_container_pane

0x8d40,	// (0x00023792) listscroll_set_pane_copy1

0xb9bd,	// (0x0002640f) scroll_pane_cp121_copy1

0xefe3,	// (0x00029a35) set_content_pane_copy1

0xefeb,	// (0x00029a3d) aid_height_set_list_copy1_ParamLimits

0xefeb,	// (0x00029a3d) aid_height_set_list_copy1

0xb00a,	// (0x00025a5c) aid_size_parent_copy1_ParamLimits

0xb00a,	// (0x00025a5c) aid_size_parent_copy1

0xeff7,	// (0x00029a49) button_value_adjust_pane_cp6_copy1_ParamLimits

0xeff7,	// (0x00029a49) button_value_adjust_pane_cp6_copy1

0x90c6,	// (0x00023b18) list_highlight_pane_cp2_copy1_ParamLimits

0x90c6,	// (0x00023b18) list_highlight_pane_cp2_copy1

0xf00b,	// (0x00029a5d) list_set_pane_copy1_ParamLimits

0xf00b,	// (0x00029a5d) list_set_pane_copy1

0xef72,	// (0x000299c4) main_pane_set_t1_copy1_ParamLimits

0xef72,	// (0x000299c4) main_pane_set_t1_copy1

0xefac,	// (0x000299fe) main_pane_set_t2_copy1_ParamLimits

0xefac,	// (0x000299fe) main_pane_set_t2_copy1

0xf0d2,	// (0x00029b24) main_pane_set_t3_copy1

0xf0e0,	// (0x00029b32) main_pane_set_t4_copy1

0xefcb,	// (0x00029a1d) set_content_pane_g1_copy1_ParamLimits

0xefcb,	// (0x00029a1d) set_content_pane_g1_copy1

0xf0ee,	// (0x00029b40) setting_code_pane_copy1

0xf0f8,	// (0x00029b4a) setting_slider_graphic_pane_copy1

0xf0f8,	// (0x00029b4a) setting_slider_pane_copy1

0xf102,	// (0x00029b54) setting_text_pane_copy1

0xf10c,	// (0x00029b5e) setting_volume_pane_copy1

0xf115,	// (0x00029b67) settings_code_pane_cp2_copy1

0xf11d,	// (0x00029b6f) settings_code_pane_cp_copy1_ParamLimits

0xf11d,	// (0x00029b6f) settings_code_pane_cp_copy1

0xf131,	// (0x00029b83) volume_set_pane_copy1

0xf13d,	// (0x00029b8f) volume_set_pane_g10_copy1

0xf149,	// (0x00029b9b) volume_set_pane_g1_copy1

0xf153,	// (0x00029ba5) volume_set_pane_g2_copy1

0xf15d,	// (0x00029baf) volume_set_pane_g3_copy1

0xf167,	// (0x00029bb9) volume_set_pane_g4_copy1

0xf171,	// (0x00029bc3) volume_set_pane_g5_copy1

0xf17b,	// (0x00029bcd) volume_set_pane_g6_copy1

0xf185,	// (0x00029bd7) volume_set_pane_g7_copy1

0xf18f,	// (0x00029be1) volume_set_pane_g8_copy1

0xf199,	// (0x00029beb) volume_set_pane_g9_copy1

0x784f,	// (0x000222a1) bg_set_opt_pane_cp_copy1_ParamLimits

0x784f,	// (0x000222a1) bg_set_opt_pane_cp_copy1

0xf1a3,	// (0x00029bf5) setting_slider_pane_t1_copy1_ParamLimits

0xf1a3,	// (0x00029bf5) setting_slider_pane_t1_copy1

0xf1c1,	// (0x00029c13) setting_slider_pane_t2_copy1_ParamLimits

0xf1c1,	// (0x00029c13) setting_slider_pane_t2_copy1

0xf1db,	// (0x00029c2d) setting_slider_pane_t3_copy1_ParamLimits

0xf1db,	// (0x00029c2d) setting_slider_pane_t3_copy1

0xf1f3,	// (0x00029c45) slider_set_pane_copy1_ParamLimits

0xf1f3,	// (0x00029c45) slider_set_pane_copy1

0x813d,	// (0x00022b8f) set_opt_bg_pane_g1_copy2

0x8145,	// (0x00022b97) set_opt_bg_pane_g2_copy2

0xf209,	// (0x00029c5b) set_opt_bg_pane_g3_copy2

0x8155,	// (0x00022ba7) set_opt_bg_pane_g4_copy2

0x815d,	// (0x00022baf) set_opt_bg_pane_g5_copy2

0x8165,	// (0x00022bb7) set_opt_bg_pane_g6_copy2

0xf213,	// (0x00029c65) set_opt_bg_pane_g7_copy2

0xf21d,	// (0x00029c6f) set_opt_bg_pane_g8_copy2

0xf227,	// (0x00029c79) set_opt_bg_pane_g9_copy2

0xf231,	// (0x00029c83) aid_size_touch_slider_mark_copy1_ParamLimits

0xf231,	// (0x00029c83) aid_size_touch_slider_mark_copy1

0xf245,	// (0x00029c97) slider_set_pane_g1_copy1

0xf24e,	// (0x00029ca0) slider_set_pane_g2_copy1

0xb894,	// (0x000262e6) slider_set_pane_g3_copy1_ParamLimits

0xb894,	// (0x000262e6) slider_set_pane_g3_copy1

0xb8a8,	// (0x000262fa) slider_set_pane_g4_copy1_ParamLimits

0xb8a8,	// (0x000262fa) slider_set_pane_g4_copy1

0xb8c0,	// (0x00026312) slider_set_pane_g5_copy1_ParamLimits

0xb8c0,	// (0x00026312) slider_set_pane_g5_copy1

0xb894,	// (0x000262e6) slider_set_pane_g6_copy1_ParamLimits

0xb894,	// (0x000262e6) slider_set_pane_g6_copy1

0xf256,	// (0x00029ca8) slider_set_pane_g7_copy1_ParamLimits

0xf256,	// (0x00029ca8) slider_set_pane_g7_copy1

0x776f,	// (0x000221c1) bg_set_opt_pane_cp2_copy1

0xf26c,	// (0x00029cbe) setting_slider_graphic_pane_g1_copy1

0xf275,	// (0x00029cc7) setting_slider_graphic_pane_t1_copy1

0xf285,	// (0x00029cd7) setting_slider_graphic_pane_t2_copy1

0xf295,	// (0x00029ce7) slider_set_pane_cp_copy1

0xf2a5,	// (0x00029cf7) input_focus_pane_cp1_copy1

0xf2ae,	// (0x00029d00) list_set_text_pane_copy1

0xf2b6,	// (0x00029d08) setting_text_pane_g1_copy1

0x5caa,	// (0x000206fc) set_text_pane_t1_copy1

0xf2a5,	// (0x00029cf7) input_focus_pane_cp2_copy1

0xf2b6,	// (0x00029d08) setting_code_pane_g1_copy1

0xf2bf,	// (0x00029d11) setting_code_pane_t1_copy1

0xf2cd,	// (0x00029d1f) list_set_graphic_pane_copy1

0x776f,	// (0x000221c1) bg_set_opt_pane_cp4_copy1

0x8a3a,	// (0x0002348c) list_set_graphic_pane_g1_copy1_ParamLimits

0x8a3a,	// (0x0002348c) list_set_graphic_pane_g1_copy1

0xf2df,	// (0x00029d31) list_set_graphic_pane_g2_copy1

0x8a52,	// (0x000234a4) list_set_graphic_pane_t1_copy1_ParamLimits

0x8a52,	// (0x000234a4) list_set_graphic_pane_t1_copy1

0xc246,	// (0x00026c98) rs_clock_indi_pane_g1

0xf2e7,	// (0x00029d39) rs_clock_indi_pane_t1

0xf2f5,	// (0x00029d47) rs_indi_pane

0xf2fd,	// (0x00029d4f) rs_indi_pane_g1

0xf306,	// (0x00029d58) rs_indi_pane_g2

0xf30f,	// (0x00029d61) rs_indi_pane_g3

0x0002,

0xfee1,	// (0x0002a933) rs_indi_pane_g

0x8d40,	// (0x00023792) bg_popup_preview_window_pane_cp03

0xf318,	// (0x00029d6a) popup_fep_tooltip_window_t1

0xcefa,	// (0x0002794c) popup_note2_window_g2_ParamLimits

0xcefa,	// (0x0002794c) popup_note2_window_g2

0x0001,

0xfc7f,	// (0x0002a6d1) popup_note2_window_g_ParamLimits

0xfc7f,	// (0x0002a6d1) popup_note2_window_g

0xd402,	// (0x00027e54) bg_popup_sub_pane_cp11_ParamLimits

0xd40f,	// (0x00027e61) cell_ai3_links_pane_g1_ParamLimits

0xd426,	// (0x00027e78) cell_ai3_links_pane_t1

0x5caa,	// (0x000206fc) set_text_pane_t1_copy1_ParamLimits

0x8c4d,	// (0x0002369f) cell_graphic_popup_pane_cp2_ParamLimits

0x8c4d,	// (0x0002369f) cell_graphic_popup_pane_cp2

0xf326,	// (0x00029d78) cell_graphic_popup_pane_g1_cp2

0x7e21,	// (0x00022873) cell_graphic_popup_pane_g2_cp2

0xf32e,	// (0x00029d80) cell_graphic_popup_pane_g3_cp2

0xf336,	// (0x00029d88) cell_graphic_popup_pane_t2_cp2

0x7e32,	// (0x00022884) grid_highlight_pane_cp3_cp2

0x8489,	// (0x00022edb) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x80d6,	// (0x00022b28) main_tmo_pane_ParamLimits

0xd746,	// (0x00028198) popup_tmo_big_image_note_window

0xe7d8,	// (0x0002922a) cell_ai5_widget_list_pane

0xe7e0,	// (0x00029232) cell_ai5_widget_lrg_icon_pane

0xee4c,	// (0x0002989e) tmo_note_info_pane_t1_ParamLimits

0xee61,	// (0x000298b3) tmo_note_info_pane_t2_ParamLimits

0xee7a,	// (0x000298cc) tmo_note_info_pane_t3_ParamLimits

0xee8f,	// (0x000298e1) tmo_note_info_pane_t4_ParamLimits

0xeea1,	// (0x000298f3) tmo_note_info_pane_t5_ParamLimits

0xfecf,	// (0x0002a921) tmo_note_info_pane_t_ParamLimits

0xefd7,	// (0x00029a29) settings_container_pane_ParamLimits

0xf29d,	// (0x00029cef) indicator_popup_pane_cp5

0xf29d,	// (0x00029cef) indicator_popup_pane_cp6

0xf2cd,	// (0x00029d1f) list_set_graphic_pane_copy1_ParamLimits

0x775b,	// (0x000221ad) bg_popup_window_pane_cp23

0xf344,	// (0x00029d96) popup_tmo_big_image_note_window_g1

0xf350,	// (0x00029da2) popup_tmo_big_image_note_window_t1

0xf360,	// (0x00029db2) popup_tmo_big_image_note_window_t2

0xf370,	// (0x00029dc2) popup_tmo_big_image_note_window_t3

0x0002,

0xfee8,	// (0x0002a93a) popup_tmo_big_image_note_window_t

0xf380,	// (0x00029dd2) cell_ai5_widget_lrg_icon_pane_g1

0xf388,	// (0x00029dda) cell_ai5_widget_lrg_icon_pane_t1

0xf396,	// (0x00029de8) cell_ai5_widget_list_row_pane_ParamLimits

0xf396,	// (0x00029de8) cell_ai5_widget_list_row_pane

0xf3af,	// (0x00029e01) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf3af,	// (0x00029e01) cell_ai5_widget_list_row_pane_g1

0xf3bc,	// (0x00029e0e) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf3bc,	// (0x00029e0e) cell_ai5_widget_list_row_pane_t1

0xf3d4,	// (0x00029e26) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf3d4,	// (0x00029e26) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfeef,	// (0x0002a941) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeef,	// (0x0002a941) cell_ai5_widget_list_row_pane_t

0x775b,	// (0x000221ad) main_fep_vtchi_ss_pane

0xf3e6,	// (0x00029e38) popup_fep_char_pre_window

0xf3ee,	// (0x00029e40) popup_fep_ituss_window

0xf3f9,	// (0x00029e4b) popup_fep_vkbss_window

0xf404,	// (0x00029e56) grid_vkbss_keypad_pane_ParamLimits

0xf404,	// (0x00029e56) grid_vkbss_keypad_pane

0xf414,	// (0x00029e66) ituss_keypad_pane

0xf41c,	// (0x00029e6e) aid_vkbss_key_offset_ParamLimits

0xf41c,	// (0x00029e6e) aid_vkbss_key_offset

0xf42b,	// (0x00029e7d) cell_vkbss_key_pane_ParamLimits

0xf42b,	// (0x00029e7d) cell_vkbss_key_pane

0xf441,	// (0x00029e93) bg_cell_vkbss_key_g1_ParamLimits

0xf441,	// (0x00029e93) bg_cell_vkbss_key_g1

0xf44d,	// (0x00029e9f) cell_vkbss_key_3p_pane_ParamLimits

0xf44d,	// (0x00029e9f) cell_vkbss_key_3p_pane

0xf467,	// (0x00029eb9) cell_vkbss_key_g1_ParamLimits

0xf467,	// (0x00029eb9) cell_vkbss_key_g1

0xf481,	// (0x00029ed3) cell_vkbss_key_t1_ParamLimits

0xf481,	// (0x00029ed3) cell_vkbss_key_t1

0xf4ac,	// (0x00029efe) cell_ituss_key_pane_ParamLimits

0xf4ac,	// (0x00029efe) cell_ituss_key_pane

0xf4bb,	// (0x00029f0d) bg_cell_ituss_key_g1_ParamLimits

0xf4bb,	// (0x00029f0d) bg_cell_ituss_key_g1

0xf4c7,	// (0x00029f19) cell_ituss_key_pane_g1_ParamLimits

0xf4c7,	// (0x00029f19) cell_ituss_key_pane_g1

0xf4d3,	// (0x00029f25) cell_ituss_key_pane_g2_ParamLimits

0xf4d3,	// (0x00029f25) cell_ituss_key_pane_g2

0x0001,

0xfef4,	// (0x0002a946) cell_ituss_key_pane_g_ParamLimits

0xfef4,	// (0x0002a946) cell_ituss_key_pane_g

0xf4e7,	// (0x00029f39) cell_ituss_key_t1_ParamLimits

0xf4e7,	// (0x00029f39) cell_ituss_key_t1

0xf505,	// (0x00029f57) cell_ituss_key_t2_ParamLimits

0xf505,	// (0x00029f57) cell_ituss_key_t2

0xf524,	// (0x00029f76) cell_ituss_key_t3_ParamLimits

0xf524,	// (0x00029f76) cell_ituss_key_t3

0xf543,	// (0x00029f95) cell_ituss_key_t4_ParamLimits

0xf543,	// (0x00029f95) cell_ituss_key_t4

0x0003,

0xfef9,	// (0x0002a94b) cell_ituss_key_t_ParamLimits

0xfef9,	// (0x0002a94b) cell_ituss_key_t

0xf562,	// (0x00029fb4) cell_vkbss_key_3p_pane_g1

0xf56a,	// (0x00029fbc) cell_vkbss_key_3p_pane_g2

0xf572,	// (0x00029fc4) cell_vkbss_key_3p_pane_g3

0x0002,

0xff02,	// (0x0002a954) cell_vkbss_key_3p_pane_g

0x775b,	// (0x000221ad) bg_popup_fep_char_preview_window_cp02

0xf57a,	// (0x00029fcc) popup_fep_char_pre_window_t1

0xe7ae,	// (0x00029200) main_ai5_sk_pane

0xef1b,	// (0x0002996d) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xef27,	// (0x00029979) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xef3b,	// (0x0002998d) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xef4a,	// (0x0002999c) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeda,	// (0x0002a92c) cell_contacts_ai5_widget_pane_g_ParamLimits

0xef5d,	// (0x000299af) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x80d6,	// (0x00022b28) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf589,	// (0x00029fdb) main_ai5_sk_pane_g1
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

} // end of namespace AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch_Small
