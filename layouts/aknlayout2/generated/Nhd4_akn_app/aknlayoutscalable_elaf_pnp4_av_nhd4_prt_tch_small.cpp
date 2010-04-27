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

#include "aknlayoutscalable_elaf_pnp4_av_nhd4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0001a82b };

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
0x7ecc,	// (0x000226f7) Screen

0x7ee0,	// (0x0002270b) application_window_ParamLimits

0x7ee0,	// (0x0002270b) application_window

0x7efa,	// (0x00022725) screen_g1

0x5bc9,	// (0x000203f4) area_bottom_pane_ParamLimits

0x5bc9,	// (0x000203f4) area_bottom_pane

0x5c89,	// (0x000204b4) area_top_pane_ParamLimits

0x5c89,	// (0x000204b4) area_top_pane

0x5d1d,	// (0x00020548) main_pane_ParamLimits

0x5d1d,	// (0x00020548) main_pane

0x7f04,	// (0x0002272f) misc_graphics

0x9876,	// (0x000240a1) battery_pane_ParamLimits

0x9876,	// (0x000240a1) battery_pane

0xa549,	// (0x00024d74) bg_status_flat_pane_g8

0xa551,	// (0x00024d7c) bg_status_flat_pane_g9

0x9938,	// (0x00024163) context_pane_ParamLimits

0x9938,	// (0x00024163) context_pane

0x9a4e,	// (0x00024279) navi_pane_ParamLimits

0x9a4e,	// (0x00024279) navi_pane

0x9ad2,	// (0x000242fd) signal_pane_ParamLimits

0x9ad2,	// (0x000242fd) signal_pane

0x0008,

0xf872,	// (0x0002a09d) bg_status_flat_pane_g

0x9b3f,	// (0x0002436a) status_pane_g1_ParamLimits

0x9b3f,	// (0x0002436a) status_pane_g1

0x9b4b,	// (0x00024376) status_pane_g2_ParamLimits

0x9b4b,	// (0x00024376) status_pane_g2

0x9b57,	// (0x00024382) status_pane_g3_ParamLimits

0x9b57,	// (0x00024382) status_pane_g3

0x0004,

0xf7a0,	// (0x00029fcb) status_pane_g_ParamLimits

0xf7a0,	// (0x00029fcb) status_pane_g

0x9b8b,	// (0x000243b6) title_pane_ParamLimits

0x9b8b,	// (0x000243b6) title_pane

0x9bc8,	// (0x000243f3) uni_indicator_pane_ParamLimits

0x9bc8,	// (0x000243f3) uni_indicator_pane

0x979e,	// (0x00023fc9) bg_list_pane_ParamLimits

0x979e,	// (0x00023fc9) bg_list_pane

0x5195,	// (0x0001f9c0) find_pane

0x97be,	// (0x00023fe9) listscroll_app_pane_ParamLimits

0x97be,	// (0x00023fe9) listscroll_app_pane

0x97ca,	// (0x00023ff5) listscroll_form_pane

0x519d,	// (0x0001f9c8) listscroll_gen_pane_ParamLimits

0x519d,	// (0x0001f9c8) listscroll_gen_pane

0x65d1,	// (0x00020dfc) listscroll_set_pane

0x8a20,	// (0x0002324b) main_idle_act_pane

0x94aa,	// (0x00023cd5) main_idle_trad_pane

0x94aa,	// (0x00023cd5) main_list_empty_pane

0x97e4,	// (0x0002400f) main_midp_pane

0x97f0,	// (0x0002401b) main_pane_g1_ParamLimits

0x97f0,	// (0x0002401b) main_pane_g1

0x65d9,	// (0x00020e04) popup_ai_message_window_ParamLimits

0x65d9,	// (0x00020e04) popup_ai_message_window

0x667d,	// (0x00020ea8) popup_fep_china_uni_window_ParamLimits

0x667d,	// (0x00020ea8) popup_fep_china_uni_window

0x66d7,	// (0x00020f02) popup_fep_japan_candidate_window_ParamLimits

0x66d7,	// (0x00020f02) popup_fep_japan_candidate_window

0x66f5,	// (0x00020f20) popup_fep_japan_predictive_window_ParamLimits

0x66f5,	// (0x00020f20) popup_fep_japan_predictive_window

0x6725,	// (0x00020f50) popup_find_window

0x6732,	// (0x00020f5d) popup_grid_graphic_window_ParamLimits

0x6732,	// (0x00020f5d) popup_grid_graphic_window

0x675a,	// (0x00020f85) popup_large_graphic_colour_window

0x6780,	// (0x00020fab) popup_menu_window_ParamLimits

0x6780,	// (0x00020fab) popup_menu_window

0x693a,	// (0x00021165) popup_note_image_window

0x6926,	// (0x00021151) popup_note_wait_window_ParamLimits

0x6926,	// (0x00021151) popup_note_wait_window

0x6926,	// (0x00021151) popup_note_window_ParamLimits

0x6926,	// (0x00021151) popup_note_window

0x6990,	// (0x000211bb) popup_query_code_window_ParamLimits

0x6990,	// (0x000211bb) popup_query_code_window

0x69a4,	// (0x000211cf) popup_query_data_code_window_ParamLimits

0x69a4,	// (0x000211cf) popup_query_data_code_window

0x69bf,	// (0x000211ea) popup_query_data_window_ParamLimits

0x69bf,	// (0x000211ea) popup_query_data_window

0x69d9,	// (0x00021204) popup_query_sat_info_window_ParamLimits

0x69d9,	// (0x00021204) popup_query_sat_info_window

0x6a12,	// (0x0002123d) popup_snote_single_graphic_window_ParamLimits

0x6a12,	// (0x0002123d) popup_snote_single_graphic_window

0x6a12,	// (0x0002123d) popup_snote_single_text_window_ParamLimits

0x6a12,	// (0x0002123d) popup_snote_single_text_window

0x6a27,	// (0x00021252) popup_sub_window_general

0x6b55,	// (0x00021380) popup_window_general_ParamLimits

0x6b55,	// (0x00021380) popup_window_general

0x97fe,	// (0x00024029) power_save_pane

0x646f,	// (0x00020c9a) control_pane_g1_ParamLimits

0x646f,	// (0x00020c9a) control_pane_g1

0x6496,	// (0x00020cc1) control_pane_g2_ParamLimits

0x6496,	// (0x00020cc1) control_pane_g2

0x9761,	// (0x00023f8c) control_pane_g3_ParamLimits

0x9761,	// (0x00023f8c) control_pane_g3

0x0007,

0xf788,	// (0x00029fb3) control_pane_g_ParamLimits

0xf788,	// (0x00029fb3) control_pane_g

0x64de,	// (0x00020d09) control_pane_t1_ParamLimits

0x64de,	// (0x00020d09) control_pane_t1

0x652a,	// (0x00020d55) control_pane_t2_ParamLimits

0x652a,	// (0x00020d55) control_pane_t2

0x0002,

0xf799,	// (0x00029fc4) control_pane_t_ParamLimits

0xf799,	// (0x00029fc4) control_pane_t

0x9686,	// (0x00023eb1) navi_navi_volume_pane_cp1

0x968e,	// (0x00023eb9) status_small_icon_pane

0x9696,	// (0x00023ec1) status_small_pane_g1_ParamLimits

0x9696,	// (0x00023ec1) status_small_pane_g1

0x96ca,	// (0x00023ef5) status_small_pane_g2_ParamLimits

0x96ca,	// (0x00023ef5) status_small_pane_g2

0x96d6,	// (0x00023f01) status_small_pane_g3_ParamLimits

0x96d6,	// (0x00023f01) status_small_pane_g3

0x96e2,	// (0x00023f0d) status_small_pane_g4_ParamLimits

0x96e2,	// (0x00023f0d) status_small_pane_g4

0x96ee,	// (0x00023f19) status_small_pane_g5_ParamLimits

0x96ee,	// (0x00023f19) status_small_pane_g5

0x96fc,	// (0x00023f27) status_small_pane_g6_ParamLimits

0x96fc,	// (0x00023f27) status_small_pane_g6

0x0007,

0xf777,	// (0x00029fa2) status_small_pane_g_ParamLimits

0xf777,	// (0x00029fa2) status_small_pane_g

0x972b,	// (0x00023f56) status_small_pane_t1

0x974d,	// (0x00023f78) status_small_wait_pane_ParamLimits

0x974d,	// (0x00023f78) status_small_wait_pane

0x8f14,	// (0x0002373f) aid_levels_signal_ParamLimits

0x8f14,	// (0x0002373f) aid_levels_signal

0x8f26,	// (0x00023751) signal_pane_g1_ParamLimits

0x8f26,	// (0x00023751) signal_pane_g1

0x8f3b,	// (0x00023766) signal_pane_g2_ParamLimits

0x8f3b,	// (0x00023766) signal_pane_g2

0x0003,

0xf708,	// (0x00029f33) signal_pane_g_ParamLimits

0xf708,	// (0x00029f33) signal_pane_g

0x8f75,	// (0x000237a0) context_pane_g1

0x7f0e,	// (0x00022739) title_pane_g1

0x7f44,	// (0x0002276f) title_pane_t1

0x7fac,	// (0x000227d7) title_pane_t2

0x7fd2,	// (0x000227fd) title_pane_t3

0x0002,

0xf557,	// (0x00029d82) title_pane_t

0x9be0,	// (0x0002440b) aid_levels_battery_ParamLimits

0x9be0,	// (0x0002440b) aid_levels_battery

0x9bf4,	// (0x0002441f) battery_pane_g1_ParamLimits

0x9bf4,	// (0x0002441f) battery_pane_g1

0x9c0a,	// (0x00024435) battery_pane_g2_ParamLimits

0x9c0a,	// (0x00024435) battery_pane_g2

0x0001,

0xf7ab,	// (0x00029fd6) battery_pane_g_ParamLimits

0xf7ab,	// (0x00029fd6) battery_pane_g

0xae7d,	// (0x000256a8) uni_indicator_pane_g1

0xae93,	// (0x000256be) uni_indicator_pane_g2

0xaea9,	// (0x000256d4) uni_indicator_pane_g3

0x0005,

0xf91a,	// (0x0002a145) uni_indicator_pane_g

0x9328,	// (0x00023b53) navi_icon_pane_ParamLimits

0x9328,	// (0x00023b53) navi_icon_pane

0x9266,	// (0x00023a91) navi_midp_pane

0x9344,	// (0x00023b6f) navi_navi_pane

0x934e,	// (0x00023b79) navi_text_pane_ParamLimits

0x934e,	// (0x00023b79) navi_text_pane

0x7efa,	// (0x00022725) status_small_wait_pane_g1

0x83f5,	// (0x00022c20) status_small_wait_pane_g2

0x0001,

0xf915,	// (0x0002a140) status_small_wait_pane_g

0xaba4,	// (0x000253cf) navi_navi_icon_text_pane

0xabac,	// (0x000253d7) navi_navi_pane_g1_ParamLimits

0xabac,	// (0x000253d7) navi_navi_pane_g1

0xabbe,	// (0x000253e9) navi_navi_pane_g2_ParamLimits

0xabbe,	// (0x000253e9) navi_navi_pane_g2

0x0001,

0xf8e3,	// (0x0002a10e) navi_navi_pane_g_ParamLimits

0xf8e3,	// (0x0002a10e) navi_navi_pane_g

0xabd0,	// (0x000253fb) navi_navi_tabs_pane

0xabd9,	// (0x00025404) navi_navi_text_pane

0xaba4,	// (0x000253cf) navi_navi_volume_pane

0xab80,	// (0x000253ab) navi_text_pane_t1

0xab74,	// (0x0002539f) navi_icon_pane_g1

0xaac7,	// (0x000252f2) navi_navi_text_pane_t1

0x6de5,	// (0x00021610) navi_navi_volume_pane_g1

0x6ded,	// (0x00021618) volume_small_pane

0xaa2d,	// (0x00025258) navi_navi_icon_text_pane_g1

0xaa35,	// (0x00025260) navi_navi_icon_text_pane_t1

0x9344,	// (0x00023b6f) navi_tabs_2_long_pane

0x9344,	// (0x00023b6f) navi_tabs_2_pane

0x9344,	// (0x00023b6f) navi_tabs_3_long_pane

0x9344,	// (0x00023b6f) navi_tabs_3_pane

0x9344,	// (0x00023b6f) navi_tabs_4_pane

0x6dc5,	// (0x000215f0) tabs_2_active_pane_ParamLimits

0x6dc5,	// (0x000215f0) tabs_2_active_pane

0x6dd5,	// (0x00021600) tabs_2_passive_pane_ParamLimits

0x6dd5,	// (0x00021600) tabs_2_passive_pane

0x6d93,	// (0x000215be) tabs_3_active_pane_ParamLimits

0x6d93,	// (0x000215be) tabs_3_active_pane

0x6da3,	// (0x000215ce) tabs_3_passive_pane_ParamLimits

0x6da3,	// (0x000215ce) tabs_3_passive_pane

0x6db4,	// (0x000215df) tabs_3_passive_pane_cp_ParamLimits

0x6db4,	// (0x000215df) tabs_3_passive_pane_cp

0x6d4f,	// (0x0002157a) tabs_4_active_pane_ParamLimits

0x6d4f,	// (0x0002157a) tabs_4_active_pane

0x6d60,	// (0x0002158b) tabs_4_passive_pane_ParamLimits

0x6d60,	// (0x0002158b) tabs_4_passive_pane

0x6d71,	// (0x0002159c) tabs_4_passive_pane_cp_ParamLimits

0x6d71,	// (0x0002159c) tabs_4_passive_pane_cp

0x6d82,	// (0x000215ad) tabs_4_passive_pane_cp2_ParamLimits

0x6d82,	// (0x000215ad) tabs_4_passive_pane_cp2

0x6d2b,	// (0x00021556) tabs_2_long_active_pane_ParamLimits

0x6d2b,	// (0x00021556) tabs_2_long_active_pane

0x6d3d,	// (0x00021568) tabs_2_long_passive_pane_ParamLimits

0x6d3d,	// (0x00021568) tabs_2_long_passive_pane

0x6cf2,	// (0x0002151d) tabs_3_long_active_pane_ParamLimits

0x6cf2,	// (0x0002151d) tabs_3_long_active_pane

0x6d05,	// (0x00021530) tabs_3_long_passive_pane_ParamLimits

0x6d05,	// (0x00021530) tabs_3_long_passive_pane

0x6d18,	// (0x00021543) tabs_3_long_passive_pane_cp_ParamLimits

0x6d18,	// (0x00021543) tabs_3_long_passive_pane_cp

0x6c98,	// (0x000214c3) volume_small_pane_g1

0x6ca1,	// (0x000214cc) volume_small_pane_g2

0x6caa,	// (0x000214d5) volume_small_pane_g3

0x6cb3,	// (0x000214de) volume_small_pane_g4

0x6cbc,	// (0x000214e7) volume_small_pane_g5

0x6cc5,	// (0x000214f0) volume_small_pane_g6

0x6cce,	// (0x000214f9) volume_small_pane_g7

0x6cd7,	// (0x00021502) volume_small_pane_g8

0x6ce0,	// (0x0002150b) volume_small_pane_g9

0x6ce9,	// (0x00021514) volume_small_pane_g10

0x0009,

0xf8af,	// (0x0002a0da) volume_small_pane_g

0x7fe4,	// (0x0002280f) bg_active_tab_pane_cp2_ParamLimits

0x7fe4,	// (0x0002280f) bg_active_tab_pane_cp2

0x7ff2,	// (0x0002281d) tabs_3_active_pane_g1

0x7ffa,	// (0x00022825) tabs_3_active_pane_t1

0x7fe4,	// (0x0002280f) bg_passive_tab_pane_cp2_ParamLimits

0x7fe4,	// (0x0002280f) bg_passive_tab_pane_cp2

0x7ff2,	// (0x0002281d) tabs_3_passive_pane_g1

0x7ffa,	// (0x00022825) tabs_3_passive_pane_t1

0x7fe4,	// (0x0002280f) bg_active_tab_pane_cp3_ParamLimits

0x7fe4,	// (0x0002280f) bg_active_tab_pane_cp3

0x800c,	// (0x00022837) tabs_4_active_pane_g1

0x8014,	// (0x0002283f) tabs_4_active_pane_t1

0x7fe4,	// (0x0002280f) bg_passive_tab_pane_cp3_ParamLimits

0x7fe4,	// (0x0002280f) bg_passive_tab_pane_cp3

0x800c,	// (0x00022837) tabs_4_1_passive_pane_g1

0x8014,	// (0x0002283f) tabs_4_1_passive_pane_t1

0x97e4,	// (0x0002400f) list_highlight_pane_cp2

0xb0ed,	// (0x00025918) list_set_pane_ParamLimits

0xb0ed,	// (0x00025918) list_set_pane

0xb18f,	// (0x000259ba) main_pane_set_t1_ParamLimits

0xb18f,	// (0x000259ba) main_pane_set_t1

0xb1af,	// (0x000259da) main_pane_set_t2_ParamLimits

0xb1af,	// (0x000259da) main_pane_set_t2

0xb1c3,	// (0x000259ee) main_pane_set_t3_ParamLimits

0xb1c3,	// (0x000259ee) main_pane_set_t3

0xb1d5,	// (0x00025a00) main_pane_set_t4_ParamLimits

0xb1d5,	// (0x00025a00) main_pane_set_t4

0x0003,

0xf97f,	// (0x0002a1aa) main_pane_set_t_ParamLimits

0xf97f,	// (0x0002a1aa) main_pane_set_t

0xb1e7,	// (0x00025a12) setting_code_pane

0xb1f1,	// (0x00025a1c) setting_slider_graphic_pane

0xb1f1,	// (0x00025a1c) setting_slider_pane

0xb1f1,	// (0x00025a1c) setting_text_pane

0xb1f1,	// (0x00025a1c) setting_volume_pane

0x5f5e,	// (0x00020789) volume_set_pane

0x7fe4,	// (0x0002280f) bg_set_opt_pane_cp

0x5f66,	// (0x00020791) setting_slider_pane_t1

0x5f7f,	// (0x000207aa) setting_slider_pane_t2

0x5f99,	// (0x000207c4) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x00029d89) setting_slider_pane_t

0x5fb1,	// (0x000207dc) slider_set_pane

0x7f04,	// (0x0002272f) bg_set_opt_pane_cp2

0x8026,	// (0x00022851) setting_slider_graphic_pane_g1

0x5fc7,	// (0x000207f2) setting_slider_graphic_pane_t1

0x5fd7,	// (0x00020802) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x00029d90) setting_slider_graphic_pane_t

0x5fe7,	// (0x00020812) slider_set_pane_cp

0x7f04,	// (0x0002272f) input_focus_pane_cp1

0xb0ac,	// (0x000258d7) list_set_text_pane

0x7efa,	// (0x00022725) setting_text_pane_g1

0x7f04,	// (0x0002272f) input_focus_pane_cp2

0x7efa,	// (0x00022725) setting_code_pane_g1

0x802f,	// (0x0002285a) setting_code_pane_t1

0x4a14,	// (0x0001f23f) set_text_pane_t1_ParamLimits

0x4a14,	// (0x0001f23f) set_text_pane_t1

0x8899,	// (0x000230c4) set_opt_bg_pane_g1

0x88a1,	// (0x000230cc) set_opt_bg_pane_g2

0xb08c,	// (0x000258b7) set_opt_bg_pane_g3

0x88b1,	// (0x000230dc) set_opt_bg_pane_g4

0x88b9,	// (0x000230e4) set_opt_bg_pane_g5

0x88c1,	// (0x000230ec) set_opt_bg_pane_g6

0xb094,	// (0x000258bf) set_opt_bg_pane_g7

0xb09c,	// (0x000258c7) set_opt_bg_pane_g8

0xb0a4,	// (0x000258cf) set_opt_bg_pane_g9

0x0008,

0xf96c,	// (0x0002a197) set_opt_bg_pane_g

0xb07f,	// (0x000258aa) slider_set_pane_g1

0x6e5a,	// (0x00021685) slider_set_pane_g2

0x0006,

0xf95d,	// (0x0002a188) slider_set_pane_g

0x6df6,	// (0x00021621) volume_set_pane_g1

0x6dfe,	// (0x00021629) volume_set_pane_g2

0x6e06,	// (0x00021631) volume_set_pane_g3

0x6e0e,	// (0x00021639) volume_set_pane_g4

0x6e16,	// (0x00021641) volume_set_pane_g5

0x6e1e,	// (0x00021649) volume_set_pane_g6

0x6e26,	// (0x00021651) volume_set_pane_g7

0x6e2e,	// (0x00021659) volume_set_pane_g8

0x6e36,	// (0x00021661) volume_set_pane_g9

0x6e3e,	// (0x00021669) volume_set_pane_g10

0x0009,

0xf935,	// (0x0002a160) volume_set_pane_g

0x803d,	// (0x00022868) indicator_pane_ParamLimits

0x803d,	// (0x00022868) indicator_pane

0x8049,	// (0x00022874) main_idle_pane_g2_ParamLimits

0x8049,	// (0x00022874) main_idle_pane_g2

0x8071,	// (0x0002289c) main_pane_idle_g1_ParamLimits

0x8071,	// (0x0002289c) main_pane_idle_g1

0x807e,	// (0x000228a9) popup_clock_digital_analogue_window_ParamLimits

0x807e,	// (0x000228a9) popup_clock_digital_analogue_window

0x8095,	// (0x000228c0) soft_indicator_pane_ParamLimits

0x8095,	// (0x000228c0) soft_indicator_pane

0x80a1,	// (0x000228cc) wallpaper_pane_ParamLimits

0x80a1,	// (0x000228cc) wallpaper_pane

0x7efa,	// (0x00022725) wallpaper_pane_g1

0x80b5,	// (0x000228e0) indicator_pane_g1_ParamLimits

0x80b5,	// (0x000228e0) indicator_pane_g1

0xb447,	// (0x00025c72) navi_navi_icon_text_pane_srt_g1

0x80d0,	// (0x000228fb) soft_indicator_pane_t1

0x80ea,	// (0x00022915) aid_ps_area_pane

0x80fb,	// (0x00022926) aid_ps_clock_pane

0x8109,	// (0x00022934) aid_ps_indicator_pane

0x8115,	// (0x00022940) indicator_ps_pane_ParamLimits

0x8115,	// (0x00022940) indicator_ps_pane

0x8124,	// (0x0002294f) power_save_pane_g1_ParamLimits

0x8124,	// (0x0002294f) power_save_pane_g1

0x8130,	// (0x0002295b) power_save_pane_g2_ParamLimits

0x8130,	// (0x0002295b) power_save_pane_g2

0x5b7d,	// (0x000203a8) aid_navinavi_width_pane

0x80ea,	// (0x00022915) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x00029d95) power_save_pane_g_ParamLimits

0xf56a,	// (0x00029d95) power_save_pane_g

0x813e,	// (0x00022969) power_save_pane_t1_ParamLimits

0x813e,	// (0x00022969) power_save_pane_t1

0x80fb,	// (0x00022926) aid_ps_clock_pane_ParamLimits

0x8109,	// (0x00022934) aid_ps_indicator_pane_ParamLimits

0x8150,	// (0x0002297b) power_save_pane_t4_ParamLimits

0x8150,	// (0x0002297b) power_save_pane_t4

0x0001,

0xf56f,	// (0x00029d9a) power_save_pane_t_ParamLimits

0xf56f,	// (0x00029d9a) power_save_pane_t

0x817a,	// (0x000229a5) power_save_t3_ParamLimits

0x817a,	// (0x000229a5) power_save_t3

0x8165,	// (0x00022990) power_save_t2_ParamLimits

0x8165,	// (0x00022990) power_save_t2

0x818f,	// (0x000229ba) indicator_ps_pane_g1

0x8198,	// (0x000229c3) ai_gene_pane_ParamLimits

0x8198,	// (0x000229c3) ai_gene_pane

0x81a4,	// (0x000229cf) ai_links_pane_ParamLimits

0x81a4,	// (0x000229cf) ai_links_pane

0x81b0,	// (0x000229db) indicator_pane_cp1_ParamLimits

0x81b0,	// (0x000229db) indicator_pane_cp1

0x81bc,	// (0x000229e7) main_pane_idle_g1_cp_ParamLimits

0x81bc,	// (0x000229e7) main_pane_idle_g1_cp

0x81c8,	// (0x000229f3) popup_ai_links_title_window

0x81d1,	// (0x000229fc) soft_indicator_pane_cp1_ParamLimits

0x81d1,	// (0x000229fc) soft_indicator_pane_cp1

0xae6b,	// (0x00025696) ai_links_pane_g1

0xae74,	// (0x0002569f) grid_ai_links_pane

0xae4e,	// (0x00025679) ai_gene_pane_1

0xae59,	// (0x00025684) ai_gene_pane_2

0xae62,	// (0x0002568d) list_highlight_pane_cp4

0xae32,	// (0x0002565d) cell_ai_link_pane_ParamLimits

0xae32,	// (0x0002565d) cell_ai_link_pane

0xae2a,	// (0x00025655) cell_ai_link_pane_g1

0x83f5,	// (0x00022c20) cell_ai_link_pane_g2

0x0001,

0xf910,	// (0x0002a13b) cell_ai_link_pane_g

0x7f04,	// (0x0002272f) grid_highlight_cp2

0x7f04,	// (0x0002272f) bg_popup_sub_pane_cp1

0x81eb,	// (0x00022a16) popup_ai_links_title_window_t1

0xad7a,	// (0x000255a5) ai_gene_pane_1_g1_ParamLimits

0xad7a,	// (0x000255a5) ai_gene_pane_1_g1

0xad86,	// (0x000255b1) ai_gene_pane_1_g2_ParamLimits

0xad86,	// (0x000255b1) ai_gene_pane_1_g2

0x0001,

0xf906,	// (0x0002a131) ai_gene_pane_1_g_ParamLimits

0xf906,	// (0x0002a131) ai_gene_pane_1_g

0xad93,	// (0x000255be) ai_gene_pane_1_t1_ParamLimits

0xad93,	// (0x000255be) ai_gene_pane_1_t1

0xadc7,	// (0x000255f2) grid_ai_soft_ind_pane

0xad65,	// (0x00025590) ai_gene_pane_2_t1_ParamLimits

0xad65,	// (0x00025590) ai_gene_pane_2_t1

0x81fa,	// (0x00022a25) main_pane_empty_t1_ParamLimits

0x81fa,	// (0x00022a25) main_pane_empty_t1

0x8212,	// (0x00022a3d) main_pane_empty_t2_ParamLimits

0x8212,	// (0x00022a3d) main_pane_empty_t2

0x8227,	// (0x00022a52) main_pane_empty_t3_ParamLimits

0x8227,	// (0x00022a52) main_pane_empty_t3

0x8239,	// (0x00022a64) main_pane_empty_t4_ParamLimits

0x8239,	// (0x00022a64) main_pane_empty_t4

0x824b,	// (0x00022a76) main_pane_empty_t5_ParamLimits

0x824b,	// (0x00022a76) main_pane_empty_t5

0x0004,

0xf574,	// (0x00029d9f) main_pane_empty_t_ParamLimits

0xf574,	// (0x00029d9f) main_pane_empty_t

0x88ea,	// (0x00023115) bg_popup_window_pane_ParamLimits

0x88ea,	// (0x00023115) bg_popup_window_pane

0xaad5,	// (0x00025300) find_popup_pane_cp2_ParamLimits

0xaad5,	// (0x00025300) find_popup_pane_cp2

0xaae1,	// (0x0002530c) heading_pane_ParamLimits

0xaae1,	// (0x0002530c) heading_pane

0x7f04,	// (0x0002272f) bg_popup_sub_pane

0xaa4f,	// (0x0002527a) bg_popup_window_pane_g1_ParamLimits

0xaa4f,	// (0x0002527a) bg_popup_window_pane_g1

0xaa5b,	// (0x00025286) bg_popup_window_pane_g2_ParamLimits

0xaa5b,	// (0x00025286) bg_popup_window_pane_g2

0xaa67,	// (0x00025292) bg_popup_window_pane_g3_ParamLimits

0xaa67,	// (0x00025292) bg_popup_window_pane_g3

0xaa73,	// (0x0002529e) bg_popup_window_pane_g4_ParamLimits

0xaa73,	// (0x0002529e) bg_popup_window_pane_g4

0xaa7f,	// (0x000252aa) bg_popup_window_pane_g5_ParamLimits

0xaa7f,	// (0x000252aa) bg_popup_window_pane_g5

0xaa8b,	// (0x000252b6) bg_popup_window_pane_g6_ParamLimits

0xaa8b,	// (0x000252b6) bg_popup_window_pane_g6

0xaa97,	// (0x000252c2) bg_popup_window_pane_g7_ParamLimits

0xaa97,	// (0x000252c2) bg_popup_window_pane_g7

0xaaa3,	// (0x000252ce) bg_popup_window_pane_g8_ParamLimits

0xaaa3,	// (0x000252ce) bg_popup_window_pane_g8

0xaaaf,	// (0x000252da) bg_popup_window_pane_g9_ParamLimits

0xaaaf,	// (0x000252da) bg_popup_window_pane_g9

0xaabb,	// (0x000252e6) bg_popup_window_pane_g10_ParamLimits

0xaabb,	// (0x000252e6) bg_popup_window_pane_g10

0x0009,

0xf8ce,	// (0x0002a0f9) bg_popup_window_pane_g_ParamLimits

0xf8ce,	// (0x0002a0f9) bg_popup_window_pane_g

0xa9e4,	// (0x0002520f) bg_popup_heading_pane_ParamLimits

0xa9e4,	// (0x0002520f) bg_popup_heading_pane

0x6ee2,	// (0x0002170d) tabs_4_passive_pane_cp_srt_ParamLimits

0x6ee2,	// (0x0002170d) tabs_4_passive_pane_cp_srt

0x6ef4,	// (0x0002171f) tabs_4_passive_pane_srt_ParamLimits

0xa9f8,	// (0x00025223) heading_pane_g2

0x6ef4,	// (0x0002171f) tabs_4_passive_pane_srt

0x97e4,	// (0x0002400f) bg_passive_tab_pane_cp3_srt_ParamLimits

0x97e4,	// (0x0002400f) bg_passive_tab_pane_cp3_srt

0xaa00,	// (0x0002522b) heading_pane_t1_ParamLimits

0xaa00,	// (0x0002522b) heading_pane_t1

0xaa17,	// (0x00025242) heading_pane_t2_ParamLimits

0xaa17,	// (0x00025242) heading_pane_t2

0x0001,

0xf8c9,	// (0x0002a0f4) heading_pane_t_ParamLimits

0xf8c9,	// (0x0002a0f4) heading_pane_t

0xa511,	// (0x00024d3c) bg_popup_heading_pane_g1

0xa5c0,	// (0x00024deb) bg_popup_heading_pane_g2

0xa5ca,	// (0x00024df5) bg_popup_heading_pane_g3

0xa5d4,	// (0x00024dff) bg_popup_heading_pane_g4

0xa5de,	// (0x00024e09) bg_popup_heading_pane_g5

0xa5e8,	// (0x00024e13) bg_popup_heading_pane_g6

0xa5f0,	// (0x00024e1b) bg_popup_heading_pane_g7

0xa5f8,	// (0x00024e23) bg_popup_heading_pane_g8

0xa602,	// (0x00024e2d) bg_popup_heading_pane_g9

0x0008,

0xf885,	// (0x0002a0b0) bg_popup_heading_pane_g

0x9ce2,	// (0x0002450d) bg_popup_sub_pane_g1

0x9cea,	// (0x00024515) bg_popup_sub_pane_g2

0x9cf2,	// (0x0002451d) bg_popup_sub_pane_g3

0x9cfa,	// (0x00024525) bg_popup_sub_pane_g4

0x9d02,	// (0x0002452d) bg_popup_sub_pane_g5

0x9d0a,	// (0x00024535) bg_popup_sub_pane_g6

0x9d12,	// (0x0002453d) bg_popup_sub_pane_g7

0x9d1a,	// (0x00024545) bg_popup_sub_pane_g8

0x9d22,	// (0x0002454d) bg_popup_sub_pane_g9

0x0008,

0xf85f,	// (0x0002a08a) bg_popup_sub_pane_g

0x825f,	// (0x00022a8a) bg_popup_window_pane_cp5_ParamLimits

0x825f,	// (0x00022a8a) bg_popup_window_pane_cp5

0x827b,	// (0x00022aa6) popup_note_window_g1_ParamLimits

0x827b,	// (0x00022aa6) popup_note_window_g1

0x8287,	// (0x00022ab2) popup_note_window_t1_ParamLimits

0x8287,	// (0x00022ab2) popup_note_window_t1

0x8299,	// (0x00022ac4) popup_note_window_t2_ParamLimits

0x8299,	// (0x00022ac4) popup_note_window_t2

0x82ab,	// (0x00022ad6) popup_note_window_t3_ParamLimits

0x82ab,	// (0x00022ad6) popup_note_window_t3

0x82bd,	// (0x00022ae8) popup_note_window_t4_ParamLimits

0x82bd,	// (0x00022ae8) popup_note_window_t4

0x82e5,	// (0x00022b10) popup_note_window_t5_ParamLimits

0x82e5,	// (0x00022b10) popup_note_window_t5

0x0004,

0xf57f,	// (0x00029daa) popup_note_window_t_ParamLimits

0xf57f,	// (0x00029daa) popup_note_window_t

0x8309,	// (0x00022b34) bg_popup_window_pane_cp6_ParamLimits

0x8309,	// (0x00022b34) bg_popup_window_pane_cp6

0xa485,	// (0x00024cb0) popup_note_image_window_g1_ParamLimits

0xa485,	// (0x00024cb0) popup_note_image_window_g1

0xa491,	// (0x00024cbc) popup_note_image_window_g2_ParamLimits

0xa491,	// (0x00024cbc) popup_note_image_window_g2

0x0001,

0xf853,	// (0x0002a07e) popup_note_image_window_g_ParamLimits

0xf853,	// (0x0002a07e) popup_note_image_window_g

0xa4aa,	// (0x00024cd5) popup_note_image_window_t1_ParamLimits

0xa4aa,	// (0x00024cd5) popup_note_image_window_t1

0xa4c3,	// (0x00024cee) popup_note_image_window_t2_ParamLimits

0xa4c3,	// (0x00024cee) popup_note_image_window_t2

0xa4dc,	// (0x00024d07) popup_note_image_window_t3_ParamLimits

0xa4dc,	// (0x00024d07) popup_note_image_window_t3

0x0002,

0xf858,	// (0x0002a083) popup_note_image_window_t_ParamLimits

0xf858,	// (0x0002a083) popup_note_image_window_t

0xa346,	// (0x00024b71) bg_popup_window_pane_cp7_ParamLimits

0xa346,	// (0x00024b71) bg_popup_window_pane_cp7

0xa376,	// (0x00024ba1) popup_note_wait_window_g1_ParamLimits

0xa376,	// (0x00024ba1) popup_note_wait_window_g1

0xa382,	// (0x00024bad) popup_note_wait_window_g2_ParamLimits

0xa382,	// (0x00024bad) popup_note_wait_window_g2

0x0002,

0xf841,	// (0x0002a06c) popup_note_wait_window_g_ParamLimits

0xf841,	// (0x0002a06c) popup_note_wait_window_g

0xa39a,	// (0x00024bc5) popup_note_wait_window_t1_ParamLimits

0xa39a,	// (0x00024bc5) popup_note_wait_window_t1

0xa3c1,	// (0x00024bec) popup_note_wait_window_t2_ParamLimits

0xa3c1,	// (0x00024bec) popup_note_wait_window_t2

0xa3de,	// (0x00024c09) popup_note_wait_window_t3_ParamLimits

0xa3de,	// (0x00024c09) popup_note_wait_window_t3

0xa3f1,	// (0x00024c1c) popup_note_wait_window_t4_ParamLimits

0xa3f1,	// (0x00024c1c) popup_note_wait_window_t4

0x0004,

0xf848,	// (0x0002a073) popup_note_wait_window_t_ParamLimits

0xf848,	// (0x0002a073) popup_note_wait_window_t

0xa416,	// (0x00024c41) wait_bar_pane_ParamLimits

0xa416,	// (0x00024c41) wait_bar_pane

0x7f04,	// (0x0002272f) wait_anim_pane

0x7f04,	// (0x0002272f) wait_border_pane

0x7efa,	// (0x00022725) wait_anim_pane_g1

0x7efa,	// (0x00022725) wait_anim_pane_g2

0x0001,

0xf703,	// (0x00029f2e) wait_anim_pane_g

0xa2ea,	// (0x00024b15) wait_border_pane_g1

0xa2f5,	// (0x00024b20) wait_border_pane_g2

0xa2fe,	// (0x00024b29) wait_border_pane_g3

0x0002,

0xf83a,	// (0x0002a065) wait_border_pane_g

0xa15a,	// (0x00024985) bg_popup_window_pane_cp16_ParamLimits

0xa15a,	// (0x00024985) bg_popup_window_pane_cp16

0xa25a,	// (0x00024a85) indicator_popup_pane_cp4_ParamLimits

0xa25a,	// (0x00024a85) indicator_popup_pane_cp4

0xa26e,	// (0x00024a99) popup_query_data_window_t1_ParamLimits

0xa26e,	// (0x00024a99) popup_query_data_window_t1

0xa280,	// (0x00024aab) popup_query_data_window_t2_ParamLimits

0xa280,	// (0x00024aab) popup_query_data_window_t2

0xa299,	// (0x00024ac4) popup_query_data_window_t3_ParamLimits

0xa299,	// (0x00024ac4) popup_query_data_window_t3

0x0002,

0xf833,	// (0x0002a05e) popup_query_data_window_t_ParamLimits

0xf833,	// (0x0002a05e) popup_query_data_window_t

0xa2b3,	// (0x00024ade) query_popup_data_pane_ParamLimits

0xa2b3,	// (0x00024ade) query_popup_data_pane

0xa2c7,	// (0x00024af2) query_popup_data_pane_cp1_ParamLimits

0xa2c7,	// (0x00024af2) query_popup_data_pane_cp1

0xa15a,	// (0x00024985) bg_popup_window_pane_cp10_ParamLimits

0xa15a,	// (0x00024985) bg_popup_window_pane_cp10

0xa18c,	// (0x000249b7) indicator_popup_pane_ParamLimits

0xa18c,	// (0x000249b7) indicator_popup_pane

0xa1ae,	// (0x000249d9) popup_query_code_window_t1_ParamLimits

0xa1ae,	// (0x000249d9) popup_query_code_window_t1

0xa1c8,	// (0x000249f3) popup_query_code_window_t2_ParamLimits

0xa1c8,	// (0x000249f3) popup_query_code_window_t2

0xa211,	// (0x00024a3c) popup_query_code_window_t3_ParamLimits

0xa211,	// (0x00024a3c) popup_query_code_window_t3

0x0002,

0xf82c,	// (0x0002a057) popup_query_code_window_t_ParamLimits

0xf82c,	// (0x0002a057) popup_query_code_window_t

0xa240,	// (0x00024a6b) query_popup_pane_ParamLimits

0xa240,	// (0x00024a6b) query_popup_pane

0x8309,	// (0x00022b34) bg_popup_window_pane_cp15_ParamLimits

0x8309,	// (0x00022b34) bg_popup_window_pane_cp15

0x8327,	// (0x00022b52) indicator_popup_pane_cp1_ParamLimits

0x8327,	// (0x00022b52) indicator_popup_pane_cp1

0x833a,	// (0x00022b65) indicator_popup_pane_cp2_ParamLimits

0x833a,	// (0x00022b65) indicator_popup_pane_cp2

0x834d,	// (0x00022b78) popup_query_data_code_window_g1_ParamLimits

0x834d,	// (0x00022b78) popup_query_data_code_window_g1

0x8360,	// (0x00022b8b) popup_query_data_code_window_t1_ParamLimits

0x8360,	// (0x00022b8b) popup_query_data_code_window_t1

0x8372,	// (0x00022b9d) popup_query_data_code_window_t2_ParamLimits

0x8372,	// (0x00022b9d) popup_query_data_code_window_t2

0x8384,	// (0x00022baf) popup_query_data_code_window_t3_ParamLimits

0x8384,	// (0x00022baf) popup_query_data_code_window_t3

0x839a,	// (0x00022bc5) popup_query_data_code_window_t4_ParamLimits

0x839a,	// (0x00022bc5) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x00029db5) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x00029db5) popup_query_data_code_window_t

0x92e6,	// (0x00023b11) list_single_midp_graphic_pane_g3

0x83b2,	// (0x00022bdd) query_popup_data_pane_cp2_ParamLimits

0x83c5,	// (0x00022bf0) query_popup_pane_cp2_ParamLimits

0x83c5,	// (0x00022bf0) query_popup_pane_cp2

0x7f04,	// (0x0002272f) bg_popup_window_pane_cp11

0xa152,	// (0x0002497d) heading_pane_cp5

0x84b0,	// (0x00022cdb) listscroll_popup_info_pane

0x7f04,	// (0x0002272f) input_focus_pane_cp3

0x83d8,	// (0x00022c03) query_popup_pane_t1

0x83e6,	// (0x00022c11) list_popup_info_pane_ParamLimits

0x83e6,	// (0x00022c11) list_popup_info_pane

0x83f5,	// (0x00022c20) listscroll_popup_info_pane_g1

0x83fd,	// (0x00022c28) scroll_pane_cp7

0x8407,	// (0x00022c32) popup_info_list_pane_t1_ParamLimits

0x8407,	// (0x00022c32) popup_info_list_pane_t1

0x8421,	// (0x00022c4c) popup_info_list_pane_t2_ParamLimits

0x8421,	// (0x00022c4c) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x00029dbe) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x00029dbe) popup_info_list_pane_t

0x7f04,	// (0x0002272f) bg_popup_window_pane_cp12

0xb461,	// (0x00025c8c) find_popup_pane

0x7fe4,	// (0x0002280f) bg_popup_window_pane_cp3

0x843b,	// (0x00022c66) heading_pane_cp3

0x8447,	// (0x00022c72) listscroll_popup_graphic_pane

0x7f04,	// (0x0002272f) bg_popup_window_pane_cp4

0x84a6,	// (0x00022cd1) heading_pane_cp4

0x84b0,	// (0x00022cdb) listscroll_popup_colour_pane

0x84b8,	// (0x00022ce3) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x84b8,	// (0x00022ce3) cell_large_graphic_colour_none_popup_pane

0x84cc,	// (0x00022cf7) grid_large_graphic_colour_popup_pane_ParamLimits

0x84cc,	// (0x00022cf7) grid_large_graphic_colour_popup_pane

0x84f4,	// (0x00022d1f) listscroll_popup_colour_pane_g1_ParamLimits

0x84f4,	// (0x00022d1f) listscroll_popup_colour_pane_g1

0x850b,	// (0x00022d36) listscroll_popup_colour_pane_g2_ParamLimits

0x850b,	// (0x00022d36) listscroll_popup_colour_pane_g2

0x8522,	// (0x00022d4d) listscroll_popup_colour_pane_g3_ParamLimits

0x8522,	// (0x00022d4d) listscroll_popup_colour_pane_g3

0x8532,	// (0x00022d5d) listscroll_popup_colour_pane_g4_ParamLimits

0x8532,	// (0x00022d5d) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x00029dc3) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x00029dc3) listscroll_popup_colour_pane_g

0x8541,	// (0x00022d6c) scroll_pane_cp6_ParamLimits

0x8541,	// (0x00022d6c) scroll_pane_cp6

0x8553,	// (0x00022d7e) cell_large_graphic_colour_popup_pane_ParamLimits

0x8553,	// (0x00022d7e) cell_large_graphic_colour_popup_pane

0x8572,	// (0x00022d9d) cell_large_graphic_colour_none_popup_pane_t1

0x7f04,	// (0x0002272f) grid_highlight_pane_cp5

0x8581,	// (0x00022dac) cell_large_graphic_colour_popup_pane_g1

0x8589,	// (0x00022db4) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x00029dcc) cell_large_graphic_colour_popup_pane_g

0x8591,	// (0x00022dbc) cell_large_graphic_colour_popup_pane_g2_copy1

0x859a,	// (0x00022dc5) grid_highlight_pane_cp4

0x85a2,	// (0x00022dcd) bg_popup_window_pane_cp8_ParamLimits

0x85a2,	// (0x00022dcd) bg_popup_window_pane_cp8

0x85bd,	// (0x00022de8) popup_snote_single_text_window_g1_ParamLimits

0x85bd,	// (0x00022de8) popup_snote_single_text_window_g1

0x85cf,	// (0x00022dfa) popup_snote_single_text_window_t1_ParamLimits

0x85cf,	// (0x00022dfa) popup_snote_single_text_window_t1

0x85e2,	// (0x00022e0d) popup_snote_single_text_window_t2_ParamLimits

0x85e2,	// (0x00022e0d) popup_snote_single_text_window_t2

0x85f5,	// (0x00022e20) popup_snote_single_text_window_t3_ParamLimits

0x85f5,	// (0x00022e20) popup_snote_single_text_window_t3

0x862e,	// (0x00022e59) popup_snote_single_text_window_t4_ParamLimits

0x862e,	// (0x00022e59) popup_snote_single_text_window_t4

0x8662,	// (0x00022e8d) popup_snote_single_text_window_t5_ParamLimits

0x8662,	// (0x00022e8d) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x00029dd1) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x00029dd1) popup_snote_single_text_window_t

0x8691,	// (0x00022ebc) bg_popup_window_pane_cp9_ParamLimits

0x8691,	// (0x00022ebc) bg_popup_window_pane_cp9

0x85bd,	// (0x00022de8) popup_snote_single_graphic_window_g1_ParamLimits

0x85bd,	// (0x00022de8) popup_snote_single_graphic_window_g1

0x869f,	// (0x00022eca) popup_snote_single_graphic_window_g2_ParamLimits

0x869f,	// (0x00022eca) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x00029ddc) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x00029ddc) popup_snote_single_graphic_window_g

0x86ab,	// (0x00022ed6) popup_snote_single_graphic_window_t1_ParamLimits

0x86ab,	// (0x00022ed6) popup_snote_single_graphic_window_t1

0x86be,	// (0x00022ee9) popup_snote_single_graphic_window_t2_ParamLimits

0x86be,	// (0x00022ee9) popup_snote_single_graphic_window_t2

0x86d1,	// (0x00022efc) popup_snote_single_graphic_window_t3_ParamLimits

0x86d1,	// (0x00022efc) popup_snote_single_graphic_window_t3

0x870a,	// (0x00022f35) popup_snote_single_graphic_window_t4_ParamLimits

0x870a,	// (0x00022f35) popup_snote_single_graphic_window_t4

0x873e,	// (0x00022f69) popup_snote_single_graphic_window_t5_ParamLimits

0x873e,	// (0x00022f69) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x00029de1) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x00029de1) popup_snote_single_graphic_window_t

0xb3a5,	// (0x00025bd0) grid_graphic_popup_pane_ParamLimits

0xb3a5,	// (0x00025bd0) grid_graphic_popup_pane

0xb3cd,	// (0x00025bf8) listscroll_popup_graphic_pane_g1_ParamLimits

0xb3cd,	// (0x00025bf8) listscroll_popup_graphic_pane_g1

0xb3e1,	// (0x00025c0c) listscroll_popup_graphic_pane_g2_ParamLimits

0xb3e1,	// (0x00025c0c) listscroll_popup_graphic_pane_g2

0x0001,

0xf9a9,	// (0x0002a1d4) listscroll_popup_graphic_pane_g_ParamLimits

0xf9a9,	// (0x0002a1d4) listscroll_popup_graphic_pane_g

0xb3f5,	// (0x00025c20) scroll_pane_cp5

0xb345,	// (0x00025b70) cell_graphic_popup_pane_ParamLimits

0xb345,	// (0x00025b70) cell_graphic_popup_pane

0xb326,	// (0x00025b51) cell_graphic_popup_pane_g1

0xb32e,	// (0x00025b59) cell_graphic_popup_pane_g2

0x8591,	// (0x00022dbc) cell_graphic_popup_pane_g3

0x0002,

0xf9a2,	// (0x0002a1cd) cell_graphic_popup_pane_g

0xb337,	// (0x00025b62) cell_graphic_popup_pane_t2

0x859a,	// (0x00022dc5) grid_highlight_pane_cp3

0x877f,	// (0x00022faa) list_gen_pane_ParamLimits

0x877f,	// (0x00022faa) list_gen_pane

0x87b1,	// (0x00022fdc) scroll_pane

0xb288,	// (0x00025ab3) bg_list_pane_g1_ParamLimits

0xb288,	// (0x00025ab3) bg_list_pane_g1

0xb2a3,	// (0x00025ace) bg_list_pane_g2_ParamLimits

0xb2a3,	// (0x00025ace) bg_list_pane_g2

0xb2b6,	// (0x00025ae1) bg_list_pane_g3_ParamLimits

0xb2b6,	// (0x00025ae1) bg_list_pane_g3

0xb2c8,	// (0x00025af3) bg_list_pane_g4_ParamLimits

0xb2c8,	// (0x00025af3) bg_list_pane_g4

0xb2da,	// (0x00025b05) bg_list_pane_g5_ParamLimits

0xb2da,	// (0x00025b05) bg_list_pane_g5

0x0004,

0xf997,	// (0x0002a1c2) bg_list_pane_g_ParamLimits

0xf997,	// (0x0002a1c2) bg_list_pane_g

0x5378,	// (0x0001fba3) list_double2_graphic_large_graphic_pane_ParamLimits

0x5378,	// (0x0001fba3) list_double2_graphic_large_graphic_pane

0x5378,	// (0x0001fba3) list_double2_graphic_pane_ParamLimits

0x5378,	// (0x0001fba3) list_double2_graphic_pane

0x5378,	// (0x0001fba3) list_double2_large_graphic_pane_ParamLimits

0x5378,	// (0x0001fba3) list_double2_large_graphic_pane

0x5378,	// (0x0001fba3) list_double2_pane_ParamLimits

0x5378,	// (0x0001fba3) list_double2_pane

0x5378,	// (0x0001fba3) list_double_graphic_heading_pane_ParamLimits

0x5378,	// (0x0001fba3) list_double_graphic_heading_pane

0x5378,	// (0x0001fba3) list_double_graphic_pane_ParamLimits

0x5378,	// (0x0001fba3) list_double_graphic_pane

0x5378,	// (0x0001fba3) list_double_heading_pane_ParamLimits

0x5378,	// (0x0001fba3) list_double_heading_pane

0x5378,	// (0x0001fba3) list_double_large_graphic_pane_ParamLimits

0x5378,	// (0x0001fba3) list_double_large_graphic_pane

0x5378,	// (0x0001fba3) list_double_number_pane_ParamLimits

0x5378,	// (0x0001fba3) list_double_number_pane

0x5378,	// (0x0001fba3) list_double_pane_ParamLimits

0x5378,	// (0x0001fba3) list_double_pane

0x5378,	// (0x0001fba3) list_double_time_pane_ParamLimits

0x5378,	// (0x0001fba3) list_double_time_pane

0x5378,	// (0x0001fba3) list_setting_number_pane_ParamLimits

0x5378,	// (0x0001fba3) list_setting_number_pane

0x5378,	// (0x0001fba3) list_setting_pane_ParamLimits

0x5378,	// (0x0001fba3) list_setting_pane

0x53da,	// (0x0001fc05) list_single_2graphic_pane_ParamLimits

0x53da,	// (0x0001fc05) list_single_2graphic_pane

0x53da,	// (0x0001fc05) list_single_graphic_heading_pane_ParamLimits

0x53da,	// (0x0001fc05) list_single_graphic_heading_pane

0x53da,	// (0x0001fc05) list_single_graphic_pane_ParamLimits

0x53da,	// (0x0001fc05) list_single_graphic_pane

0x53da,	// (0x0001fc05) list_single_heading_pane_ParamLimits

0x53da,	// (0x0001fc05) list_single_heading_pane

0x5463,	// (0x0001fc8e) list_single_large_graphic_pane_ParamLimits

0x5463,	// (0x0001fc8e) list_single_large_graphic_pane

0x53da,	// (0x0001fc05) list_single_number_heading_pane_ParamLimits

0x53da,	// (0x0001fc05) list_single_number_heading_pane

0x53da,	// (0x0001fc05) list_single_number_pane_ParamLimits

0x53da,	// (0x0001fc05) list_single_number_pane

0x53da,	// (0x0001fc05) list_single_pane_ParamLimits

0x53da,	// (0x0001fc05) list_single_pane

0x7f04,	// (0x0002272f) list_highlight_pane_cp1

0x4a3a,	// (0x0001f265) list_single_pane_g1_ParamLimits

0x4a3a,	// (0x0001f265) list_single_pane_g1

0x4a46,	// (0x0001f271) list_single_pane_g2_ParamLimits

0x4a46,	// (0x0001f271) list_single_pane_g2

0x0001,

0xf5c8,	// (0x00029df3) list_single_pane_g_ParamLimits

0xf5c8,	// (0x00029df3) list_single_pane_g

0x5362,	// (0x0001fb8d) list_single_pane_t1_ParamLimits

0x5362,	// (0x0001fb8d) list_single_pane_t1

0x4a3a,	// (0x0001f265) list_single_number_pane_g1_ParamLimits

0x4a3a,	// (0x0001f265) list_single_number_pane_g1

0x4a46,	// (0x0001f271) list_single_number_pane_g2_ParamLimits

0x4a46,	// (0x0001f271) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x00029df3) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x00029df3) list_single_number_pane_g

0x530c,	// (0x0001fb37) list_single_number_pane_t1_ParamLimits

0x530c,	// (0x0001fb37) list_single_number_pane_t1

0x5322,	// (0x0001fb4d) list_single_number_pane_t2_ParamLimits

0x5322,	// (0x0001fb4d) list_single_number_pane_t2

0x0001,

0xf958,	// (0x0002a183) list_single_number_pane_t_ParamLimits

0xf958,	// (0x0002a183) list_single_number_pane_t

0x4a2e,	// (0x0001f259) list_single_graphic_pane_g1_ParamLimits

0x4a2e,	// (0x0001f259) list_single_graphic_pane_g1

0x4a3a,	// (0x0001f265) list_single_graphic_pane_g2_ParamLimits

0x4a3a,	// (0x0001f265) list_single_graphic_pane_g2

0x4a46,	// (0x0001f271) list_single_graphic_pane_g3_ParamLimits

0x4a46,	// (0x0001f271) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x00029dec) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x00029dec) list_single_graphic_pane_g

0x4a52,	// (0x0001f27d) list_single_graphic_pane_t1_ParamLimits

0x4a52,	// (0x0001f27d) list_single_graphic_pane_t1

0x4a3a,	// (0x0001f265) list_single_heading_pane_g1_ParamLimits

0x4a3a,	// (0x0001f265) list_single_heading_pane_g1

0x4a46,	// (0x0001f271) list_single_heading_pane_g2_ParamLimits

0x4a46,	// (0x0001f271) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x00029df3) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x00029df3) list_single_heading_pane_g

0x4a68,	// (0x0001f293) list_single_heading_pane_t1_ParamLimits

0x4a68,	// (0x0001f293) list_single_heading_pane_t1

0x4a7e,	// (0x0001f2a9) list_single_heading_pane_t2_ParamLimits

0x4a7e,	// (0x0001f2a9) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x00029df8) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x00029df8) list_single_heading_pane_t

0x4a3a,	// (0x0001f265) list_single_number_heading_pane_g1_ParamLimits

0x4a3a,	// (0x0001f265) list_single_number_heading_pane_g1

0x4a46,	// (0x0001f271) list_single_number_heading_pane_g2_ParamLimits

0x4a46,	// (0x0001f271) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x00029df3) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x00029df3) list_single_number_heading_pane_g

0x4a68,	// (0x0001f293) list_single_number_heading_pane_t1_ParamLimits

0x4a68,	// (0x0001f293) list_single_number_heading_pane_t1

0x4a90,	// (0x0001f2bb) list_single_number_heading_pane_t2_ParamLimits

0x4a90,	// (0x0001f2bb) list_single_number_heading_pane_t2

0x4aa2,	// (0x0001f2cd) list_single_number_heading_pane_t3_ParamLimits

0x4aa2,	// (0x0001f2cd) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x00029dfd) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x00029dfd) list_single_number_heading_pane_t

0x4ab4,	// (0x0001f2df) list_single_graphic_heading_pane_g1_ParamLimits

0x4ab4,	// (0x0001f2df) list_single_graphic_heading_pane_g1

0x4ac0,	// (0x0001f2eb) list_single_graphic_heading_pane_g4_ParamLimits

0x4ac0,	// (0x0001f2eb) list_single_graphic_heading_pane_g4

0x4a46,	// (0x0001f271) list_single_graphic_heading_pane_g5_ParamLimits

0x4a46,	// (0x0001f271) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x00029e04) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x00029e04) list_single_graphic_heading_pane_g

0x4a68,	// (0x0001f293) list_single_graphic_heading_pane_t1_ParamLimits

0x4a68,	// (0x0001f293) list_single_graphic_heading_pane_t1

0x4ad1,	// (0x0001f2fc) list_single_graphic_heading_pane_t2_ParamLimits

0x4ad1,	// (0x0001f2fc) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x00029e0b) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x00029e0b) list_single_graphic_heading_pane_t

0x4ae3,	// (0x0001f30e) list_single_large_graphic_pane_g1_ParamLimits

0x4ae3,	// (0x0001f30e) list_single_large_graphic_pane_g1

0x4aef,	// (0x0001f31a) list_single_large_graphic_pane_g2_ParamLimits

0x4aef,	// (0x0001f31a) list_single_large_graphic_pane_g2

0x4afb,	// (0x0001f326) list_single_large_graphic_pane_g3_ParamLimits

0x4afb,	// (0x0001f326) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x00029e10) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x00029e10) list_single_large_graphic_pane_g

0xa2f5,	// (0x00024b20) wait_border_pane_g2_copy1

0x4b07,	// (0x0001f332) list_single_large_graphic_pane_g4_cp2

0x4b0f,	// (0x0001f33a) list_single_large_graphic_pane_t1_ParamLimits

0x4b0f,	// (0x0001f33a) list_single_large_graphic_pane_t1

0x4b25,	// (0x0001f350) list_double_pane_g1_ParamLimits

0x4b25,	// (0x0001f350) list_double_pane_g1

0x4b31,	// (0x0001f35c) list_double_pane_g2_ParamLimits

0x4b31,	// (0x0001f35c) list_double_pane_g2

0x0001,

0xf5ec,	// (0x00029e17) list_double_pane_g_ParamLimits

0xf5ec,	// (0x00029e17) list_double_pane_g

0x4b3d,	// (0x0001f368) list_double_pane_t1_ParamLimits

0x4b3d,	// (0x0001f368) list_double_pane_t1

0x4b53,	// (0x0001f37e) list_double_pane_t2_ParamLimits

0x4b53,	// (0x0001f37e) list_double_pane_t2

0x0001,

0xf5f1,	// (0x00029e1c) list_double_pane_t_ParamLimits

0xf5f1,	// (0x00029e1c) list_double_pane_t

0x4b65,	// (0x0001f390) list_double2_pane_g1_ParamLimits

0x4b65,	// (0x0001f390) list_double2_pane_g1

0x4b76,	// (0x0001f3a1) list_double2_pane_g2_ParamLimits

0x4b76,	// (0x0001f3a1) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x00029e21) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x00029e21) list_double2_pane_g

0x4b82,	// (0x0001f3ad) list_double2_pane_t1_ParamLimits

0x4b82,	// (0x0001f3ad) list_double2_pane_t1

0x4b98,	// (0x0001f3c3) list_double2_pane_t2_ParamLimits

0x4b98,	// (0x0001f3c3) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x00029e26) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x00029e26) list_double2_pane_t

0x4b25,	// (0x0001f350) list_double_number_pane_g1_ParamLimits

0x4b25,	// (0x0001f350) list_double_number_pane_g1

0x4b31,	// (0x0001f35c) list_double_number_pane_g2_ParamLimits

0x4b31,	// (0x0001f35c) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x00029e17) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x00029e17) list_double_number_pane_g

0x4baa,	// (0x0001f3d5) list_double_number_pane_t1_ParamLimits

0x4baa,	// (0x0001f3d5) list_double_number_pane_t1

0x4bbc,	// (0x0001f3e7) list_double_number_pane_t2_ParamLimits

0x4bbc,	// (0x0001f3e7) list_double_number_pane_t2

0x4bd2,	// (0x0001f3fd) list_double_number_pane_t3_ParamLimits

0x4bd2,	// (0x0001f3fd) list_double_number_pane_t3

0x0002,

0xf600,	// (0x00029e2b) list_double_number_pane_t_ParamLimits

0xf600,	// (0x00029e2b) list_double_number_pane_t

0x4be4,	// (0x0001f40f) list_double_graphic_pane_g1_ParamLimits

0x4be4,	// (0x0001f40f) list_double_graphic_pane_g1

0x4bf0,	// (0x0001f41b) list_double_graphic_pane_g2_ParamLimits

0x4bf0,	// (0x0001f41b) list_double_graphic_pane_g2

0x4bff,	// (0x0001f42a) list_double_graphic_pane_g3_ParamLimits

0x4bff,	// (0x0001f42a) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x00029e32) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x00029e32) list_double_graphic_pane_g

0x4c17,	// (0x0001f442) list_double_graphic_pane_t1_ParamLimits

0x4c17,	// (0x0001f442) list_double_graphic_pane_t1

0x4c2d,	// (0x0001f458) list_double_graphic_pane_t2_ParamLimits

0x4c2d,	// (0x0001f458) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x00029e3b) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x00029e3b) list_double_graphic_pane_t

0x4c3f,	// (0x0001f46a) list_double2_graphic_pane_g1_ParamLimits

0x4c3f,	// (0x0001f46a) list_double2_graphic_pane_g1

0x4b25,	// (0x0001f350) list_double2_graphic_pane_g2_ParamLimits

0x4b25,	// (0x0001f350) list_double2_graphic_pane_g2

0x4b31,	// (0x0001f35c) list_double2_graphic_pane_g3_ParamLimits

0x4b31,	// (0x0001f35c) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x00029e40) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x00029e40) list_double2_graphic_pane_g

0x4c4b,	// (0x0001f476) list_double2_graphic_pane_t1_ParamLimits

0x4c4b,	// (0x0001f476) list_double2_graphic_pane_t1

0x4c61,	// (0x0001f48c) list_double2_graphic_pane_t2_ParamLimits

0x4c61,	// (0x0001f48c) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x00029e47) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x00029e47) list_double2_graphic_pane_t

0x4c73,	// (0x0001f49e) list_double_large_graphic_pane_g1_ParamLimits

0x4c73,	// (0x0001f49e) list_double_large_graphic_pane_g1

0x4c92,	// (0x0001f4bd) list_double_large_graphic_pane_g2_ParamLimits

0x4c92,	// (0x0001f4bd) list_double_large_graphic_pane_g2

0x4b31,	// (0x0001f35c) list_double_large_graphic_pane_g3_ParamLimits

0x4b31,	// (0x0001f35c) list_double_large_graphic_pane_g3

0x4ca3,	// (0x0001f4ce) list_double_large_graphic_pane_g4_ParamLimits

0x4ca3,	// (0x0001f4ce) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x00029e4c) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x00029e4c) list_double_large_graphic_pane_g

0x4ccb,	// (0x0001f4f6) list_double_large_graphic_pane_t1_ParamLimits

0x4ccb,	// (0x0001f4f6) list_double_large_graphic_pane_t1

0x4ce4,	// (0x0001f50f) list_double_large_graphic_pane_t2_ParamLimits

0x4ce4,	// (0x0001f50f) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x00029e57) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x00029e57) list_double_large_graphic_pane_t

0x4cf6,	// (0x0001f521) list_double2_large_graphic_pane_g1_ParamLimits

0x4cf6,	// (0x0001f521) list_double2_large_graphic_pane_g1

0x4b65,	// (0x0001f390) list_double2_large_graphic_pane_g2_ParamLimits

0x4b65,	// (0x0001f390) list_double2_large_graphic_pane_g2

0x4b76,	// (0x0001f3a1) list_double2_large_graphic_pane_g3_ParamLimits

0x4b76,	// (0x0001f3a1) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x00029e5c) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x00029e5c) list_double2_large_graphic_pane_g

0x4d02,	// (0x0001f52d) list_double2_large_graphic_pane_t1_ParamLimits

0x4d02,	// (0x0001f52d) list_double2_large_graphic_pane_t1

0x4d18,	// (0x0001f543) list_double2_large_graphic_pane_t2_ParamLimits

0x4d18,	// (0x0001f543) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x00029e63) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x00029e63) list_double2_large_graphic_pane_t

0x4d2a,	// (0x0001f555) list_double_heading_pane_g1_ParamLimits

0x4d2a,	// (0x0001f555) list_double_heading_pane_g1

0x4d3b,	// (0x0001f566) list_double_heading_pane_g2_ParamLimits

0x4d3b,	// (0x0001f566) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x00029e68) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x00029e68) list_double_heading_pane_g

0x4d47,	// (0x0001f572) list_double_heading_pane_t1_ParamLimits

0x4d47,	// (0x0001f572) list_double_heading_pane_t1

0x4b98,	// (0x0001f3c3) list_double_heading_pane_t2_ParamLimits

0x4b98,	// (0x0001f3c3) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x00029e6d) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x00029e6d) list_double_heading_pane_t

0x4c3f,	// (0x0001f46a) list_double_graphic_heading_pane_g1_ParamLimits

0x4c3f,	// (0x0001f46a) list_double_graphic_heading_pane_g1

0x4d2a,	// (0x0001f555) list_double_graphic_heading_pane_g2_ParamLimits

0x4d2a,	// (0x0001f555) list_double_graphic_heading_pane_g2

0x4d3b,	// (0x0001f566) list_double_graphic_heading_pane_g3_ParamLimits

0x4d3b,	// (0x0001f566) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x00029e72) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x00029e72) list_double_graphic_heading_pane_g

0x4d5d,	// (0x0001f588) list_double_graphic_heading_pane_t1_ParamLimits

0x4d5d,	// (0x0001f588) list_double_graphic_heading_pane_t1

0x4c61,	// (0x0001f48c) list_double_graphic_heading_pane_t2_ParamLimits

0x4c61,	// (0x0001f48c) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x00029e79) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x00029e79) list_double_graphic_heading_pane_t

0x4c92,	// (0x0001f4bd) list_double_time_pane_g1_ParamLimits

0x4c92,	// (0x0001f4bd) list_double_time_pane_g1

0x4b31,	// (0x0001f35c) list_double_time_pane_g2_ParamLimits

0x4b31,	// (0x0001f35c) list_double_time_pane_g2

0x0001,

0xf653,	// (0x00029e7e) list_double_time_pane_g_ParamLimits

0xf653,	// (0x00029e7e) list_double_time_pane_g

0x4d73,	// (0x0001f59e) list_double_time_pane_t1_ParamLimits

0x4d73,	// (0x0001f59e) list_double_time_pane_t1

0x4d89,	// (0x0001f5b4) list_double_time_pane_t2_ParamLimits

0x4d89,	// (0x0001f5b4) list_double_time_pane_t2

0x4d9b,	// (0x0001f5c6) list_double_time_pane_t3_ParamLimits

0x4d9b,	// (0x0001f5c6) list_double_time_pane_t3

0x4dad,	// (0x0001f5d8) list_double_time_pane_t4_ParamLimits

0x4dad,	// (0x0001f5d8) list_double_time_pane_t4

0x0003,

0xf658,	// (0x00029e83) list_double_time_pane_t_ParamLimits

0xf658,	// (0x00029e83) list_double_time_pane_t

0x4dbf,	// (0x0001f5ea) list_setting_pane_g1_ParamLimits

0x4dbf,	// (0x0001f5ea) list_setting_pane_g1

0x4d3b,	// (0x0001f566) list_setting_pane_g2_ParamLimits

0x4d3b,	// (0x0001f566) list_setting_pane_g2

0x0001,

0xf661,	// (0x00029e8c) list_setting_pane_g_ParamLimits

0xf661,	// (0x00029e8c) list_setting_pane_g

0x4dcb,	// (0x0001f5f6) list_setting_pane_t1_ParamLimits

0x4dcb,	// (0x0001f5f6) list_setting_pane_t1

0x4de2,	// (0x0001f60d) list_setting_pane_t2_ParamLimits

0x4de2,	// (0x0001f60d) list_setting_pane_t2

0x0002,

0xf666,	// (0x00029e91) list_setting_pane_t_ParamLimits

0xf666,	// (0x00029e91) list_setting_pane_t

0x4e1f,	// (0x0001f64a) set_value_pane_cp_ParamLimits

0x4e1f,	// (0x0001f64a) set_value_pane_cp

0x4e2b,	// (0x0001f656) list_setting_number_pane_g1_ParamLimits

0x4e2b,	// (0x0001f656) list_setting_number_pane_g1

0x4e37,	// (0x0001f662) list_setting_number_pane_g2_ParamLimits

0x4e37,	// (0x0001f662) list_setting_number_pane_g2

0x0001,

0xf66d,	// (0x00029e98) list_setting_number_pane_g_ParamLimits

0xf66d,	// (0x00029e98) list_setting_number_pane_g

0x4e43,	// (0x0001f66e) list_setting_number_pane_t1_ParamLimits

0x4e43,	// (0x0001f66e) list_setting_number_pane_t1

0x4e57,	// (0x0001f682) list_setting_number_pane_t2_ParamLimits

0x4e57,	// (0x0001f682) list_setting_number_pane_t2

0x4e6e,	// (0x0001f699) list_setting_number_pane_t3_ParamLimits

0x4e6e,	// (0x0001f699) list_setting_number_pane_t3

0x0003,

0xf672,	// (0x00029e9d) list_setting_number_pane_t_ParamLimits

0xf672,	// (0x00029e9d) list_setting_number_pane_t

0x4e1f,	// (0x0001f64a) set_value_pane_ParamLimits

0x4e1f,	// (0x0001f64a) set_value_pane

0x87e5,	// (0x00023010) bg_set_opt_pane_ParamLimits

0x87e5,	// (0x00023010) bg_set_opt_pane

0x4eb1,	// (0x0001f6dc) set_value_pane_t1

0x8806,	// (0x00023031) slider_set_pane_cp3

0x880f,	// (0x0002303a) volume_small_pane_cp

0x8818,	// (0x00023043) list_form_gen_pane

0x8821,	// (0x0002304c) scroll_pane_cp8

0x4ec7,	// (0x0001f6f2) form_field_data_pane_ParamLimits

0x4ec7,	// (0x0001f6f2) form_field_data_pane

0x4ee7,	// (0x0001f712) form_field_data_wide_pane_ParamLimits

0x4ee7,	// (0x0001f712) form_field_data_wide_pane

0x4f08,	// (0x0001f733) form_field_popup_pane_ParamLimits

0x4f08,	// (0x0001f733) form_field_popup_pane

0x4f26,	// (0x0001f751) form_field_popup_wide_pane_ParamLimits

0x4f26,	// (0x0001f751) form_field_popup_wide_pane

0x4f43,	// (0x0001f76e) form_field_slider_pane_ParamLimits

0x4f43,	// (0x0001f76e) form_field_slider_pane

0x4f56,	// (0x0001f781) form_field_slider_wide_pane_ParamLimits

0x4f56,	// (0x0001f781) form_field_slider_wide_pane

0x8832,	// (0x0002305d) data_form_pane

0x4f73,	// (0x0001f79e) form_field_data_pane_t1

0x883e,	// (0x00023069) input_focus_pane

0x4f8d,	// (0x0001f7b8) data_form_wide_pane

0x4faa,	// (0x0001f7d5) form_field_data_wide_pane_t1

0x85af,	// (0x00022dda) input_focus_pane_cp6

0x4fcc,	// (0x0001f7f7) form_field_popup_pane_t1

0x883e,	// (0x00023069) input_focus_pane_cp7

0x886c,	// (0x00023097) list_form_pane

0x4fee,	// (0x0001f819) form_field_popup_wide_pane_t1

0x883e,	// (0x00023069) input_focus_pane_cp8

0x8878,	// (0x000230a3) list_form_wide_pane

0x500b,	// (0x0001f836) form_field_slider_pane_t1_ParamLimits

0x500b,	// (0x0001f836) form_field_slider_pane_t1

0x501f,	// (0x0001f84a) form_field_slider_pane_t2_ParamLimits

0x501f,	// (0x0001f84a) form_field_slider_pane_t2

0x0001,

0xf682,	// (0x00029ead) form_field_slider_pane_t_ParamLimits

0xf682,	// (0x00029ead) form_field_slider_pane_t

0x825f,	// (0x00022a8a) input_focus_pane_cp9_ParamLimits

0x825f,	// (0x00022a8a) input_focus_pane_cp9

0x5031,	// (0x0001f85c) slider_cont_pane_ParamLimits

0x5031,	// (0x0001f85c) slider_cont_pane

0x8887,	// (0x000230b2) form_field_slider_wide_pane_t1_ParamLimits

0x8887,	// (0x000230b2) form_field_slider_wide_pane_t1

0x5045,	// (0x0001f870) form_field_slider_wide_pane_t2_ParamLimits

0x5045,	// (0x0001f870) form_field_slider_wide_pane_t2

0x0001,

0xf687,	// (0x00029eb2) form_field_slider_wide_pane_t_ParamLimits

0xf687,	// (0x00029eb2) form_field_slider_wide_pane_t

0x825f,	// (0x00022a8a) input_focus_pane_cp10_ParamLimits

0x825f,	// (0x00022a8a) input_focus_pane_cp10

0x5057,	// (0x0001f882) slider_cont_pane_cp1_ParamLimits

0x5057,	// (0x0001f882) slider_cont_pane_cp1

0x506b,	// (0x0001f896) slider_form_pane_cp

0x8899,	// (0x000230c4) input_focus_pane_g1

0x88a1,	// (0x000230cc) input_focus_pane_g2

0x88a9,	// (0x000230d4) input_focus_pane_g3

0x88b1,	// (0x000230dc) input_focus_pane_g4

0x88b9,	// (0x000230e4) input_focus_pane_g5

0x88c1,	// (0x000230ec) input_focus_pane_g6

0x88c9,	// (0x000230f4) input_focus_pane_g7

0x88d1,	// (0x000230fc) input_focus_pane_g8

0x88d9,	// (0x00023104) input_focus_pane_g9

0x7efa,	// (0x00022725) input_focus_pane_g10

0x0009,

0xf68c,	// (0x00029eb7) input_focus_pane_g

0xa2fe,	// (0x00024b29) wait_border_pane_g3_copy1

0x5073,	// (0x0001f89e) data_form_pane_t1

0x7efa,	// (0x00022725) wait_anim_pane_g1_copy1

0x5334,	// (0x0001fb5f) data_form_wide_pane_t1

0x508e,	// (0x0001f8b9) list_form_graphic_pane_cp_ParamLimits

0x508e,	// (0x0001f8b9) list_form_graphic_pane_cp

0xb219,	// (0x00025a44) slider_form_pane_g1

0xb222,	// (0x00025a4d) slider_form_pane_g2

0x0006,

0xf988,	// (0x0002a1b3) slider_form_pane_g

0x508e,	// (0x0001f8b9) list_form_graphic_pane_ParamLimits

0x508e,	// (0x0001f8b9) list_form_graphic_pane

0x50a5,	// (0x0001f8d0) list_form_graphic_pane_g1

0x50ad,	// (0x0001f8d8) list_form_graphic_pane_t1_ParamLimits

0x50ad,	// (0x0001f8d8) list_form_graphic_pane_t1

0x7fe4,	// (0x0002280f) list_highlight_pane_cp5_ParamLimits

0x7fe4,	// (0x0002280f) list_highlight_pane_cp5

0x50c2,	// (0x0001f8ed) find_pane_g1

0x88e1,	// (0x0002310c) input_find_pane

0x50cb,	// (0x0001f8f6) input_find_pane_g1_ParamLimits

0x50cb,	// (0x0001f8f6) input_find_pane_g1

0x50d7,	// (0x0001f902) input_find_pane_t1_ParamLimits

0x50d7,	// (0x0001f902) input_find_pane_t1

0x50ec,	// (0x0001f917) input_find_pane_t2_ParamLimits

0x50ec,	// (0x0001f917) input_find_pane_t2

0x0001,

0xf6a1,	// (0x00029ecc) input_find_pane_t_ParamLimits

0xf6a1,	// (0x00029ecc) input_find_pane_t

0x88ea,	// (0x00023115) input_focus_pane_cp5_ParamLimits

0x88ea,	// (0x00023115) input_focus_pane_cp5

0x8904,	// (0x0002312f) bg_popup_window_pane_cp2_ParamLimits

0x8904,	// (0x0002312f) bg_popup_window_pane_cp2

0x8911,	// (0x0002313c) listscroll_menu_pane_ParamLimits

0x8911,	// (0x0002313c) listscroll_menu_pane

0x891d,	// (0x00023148) popup_submenu_window_ParamLimits

0x891d,	// (0x00023148) popup_submenu_window

0x8945,	// (0x00023170) find_popup_pane_g1

0x894d,	// (0x00023178) input_popup_find_pane_cp

0x88ea,	// (0x00023115) input_focus_pane_cp4_ParamLimits

0x88ea,	// (0x00023115) input_focus_pane_cp4

0x8965,	// (0x00023190) input_popup_find_pane_t1_ParamLimits

0x8965,	// (0x00023190) input_popup_find_pane_t1

0x7f04,	// (0x0002272f) bg_popup_sub_pane_cp

0x8993,	// (0x000231be) listscroll_popup_sub_pane

0x899b,	// (0x000231c6) list_submenu_pane_ParamLimits

0x899b,	// (0x000231c6) list_submenu_pane

0x89ac,	// (0x000231d7) scroll_pane_cp4

0x89b4,	// (0x000231df) list_single_popup_submenu_pane_ParamLimits

0x89b4,	// (0x000231df) list_single_popup_submenu_pane

0x89c8,	// (0x000231f3) list_single_popup_submenu_pane_g1

0x89d0,	// (0x000231fb) list_single_popup_submenu_pane_t1_ParamLimits

0x89d0,	// (0x000231fb) list_single_popup_submenu_pane_t1

0x7fe4,	// (0x0002280f) bg_active_tab_pane_cp1_ParamLimits

0x7fe4,	// (0x0002280f) bg_active_tab_pane_cp1

0x89e5,	// (0x00023210) tabs_2_active_pane_g1

0x89ed,	// (0x00023218) tabs_2_active_pane_t1

0x7fe4,	// (0x0002280f) bg_passive_tab_pane_cp1_ParamLimits

0x7fe4,	// (0x0002280f) bg_passive_tab_pane_cp1

0x89e5,	// (0x00023210) tabs_2_passive_pane_g1

0x89ed,	// (0x00023218) tabs_2_passive_pane_t1

0x89ff,	// (0x0002322a) bg_active_tab_pane_cp4

0x8a0d,	// (0x00023238) tabs_2_long_active_pane_t1

0x8a20,	// (0x0002324b) bg_passive_tab_pane_cp4

0x6bbf,	// (0x000213ea) list_single_midp_graphic_pane_g4_ParamLimits

0x89ff,	// (0x0002322a) bg_active_tab_pane_cp5

0x8a2c,	// (0x00023257) tabs_3_long_active_pane_t1

0x8a20,	// (0x0002324b) bg_passive_tab_pane_cp5

0x6bbf,	// (0x000213ea) list_single_midp_graphic_pane_g4

0x7fe4,	// (0x0002280f) bg_popup_window_pane_cp13_ParamLimits

0x7fe4,	// (0x0002280f) bg_popup_window_pane_cp13

0x8a47,	// (0x00023272) listscroll_popup_fast_pane_ParamLimits

0x8a47,	// (0x00023272) listscroll_popup_fast_pane

0x8a53,	// (0x0002327e) grid_popup_fast_pane_ParamLimits

0x8a53,	// (0x0002327e) grid_popup_fast_pane

0x8a65,	// (0x00023290) scroll_pane_cp9_ParamLimits

0x8a65,	// (0x00023290) scroll_pane_cp9

0xcabf,	// (0x000272ea) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xcabf,	// (0x000272ea) list_single_graphic_hl_pane_t1_cp2

0x8a89,	// (0x000232b4) input_focus_pane_cp20_ParamLimits

0x8a89,	// (0x000232b4) input_focus_pane_cp20

0x8a97,	// (0x000232c2) query_popup_data_pane_t1_ParamLimits

0x8a97,	// (0x000232c2) query_popup_data_pane_t1

0x8aaa,	// (0x000232d5) query_popup_data_pane_t2_ParamLimits

0x8aaa,	// (0x000232d5) query_popup_data_pane_t2

0x8af0,	// (0x0002331b) query_popup_data_pane_t3_ParamLimits

0x8af0,	// (0x0002331b) query_popup_data_pane_t3

0x8b31,	// (0x0002335c) query_popup_data_pane_t4_ParamLimits

0x8b31,	// (0x0002335c) query_popup_data_pane_t4

0x8b6d,	// (0x00023398) query_popup_data_pane_t5_ParamLimits

0x8b6d,	// (0x00023398) query_popup_data_pane_t5

0x0004,

0xf6a6,	// (0x00029ed1) query_popup_data_pane_t_ParamLimits

0xf6a6,	// (0x00029ed1) query_popup_data_pane_t

0x8899,	// (0x000230c4) bg_set_opt_pane_g1

0x88a1,	// (0x000230cc) bg_set_opt_pane_g2

0x88a9,	// (0x000230d4) bg_set_opt_pane_g3

0x88b1,	// (0x000230dc) bg_set_opt_pane_g4

0x88b9,	// (0x000230e4) bg_set_opt_pane_g5

0x88c1,	// (0x000230ec) bg_set_opt_pane_g6

0x88c9,	// (0x000230f4) bg_set_opt_pane_g7

0x88d1,	// (0x000230fc) bg_set_opt_pane_g8

0x88d9,	// (0x00023104) bg_set_opt_pane_g9

0x0008,

0xf6b1,	// (0x00029edc) bg_set_opt_pane_g

0x6285,	// (0x00020ab0) control_top_pane_stacon_ParamLimits

0x6285,	// (0x00020ab0) control_top_pane_stacon

0x62d8,	// (0x00020b03) signal_pane_stacon_ParamLimits

0x62d8,	// (0x00020b03) signal_pane_stacon

0x9147,	// (0x00023972) stacon_top_pane_g1_ParamLimits

0x9147,	// (0x00023972) stacon_top_pane_g1

0x62fd,	// (0x00020b28) title_pane_stacon_ParamLimits

0x62fd,	// (0x00020b28) title_pane_stacon

0x6327,	// (0x00020b52) uni_indicator_pane_stacon_ParamLimits

0x6327,	// (0x00020b52) uni_indicator_pane_stacon

0x633c,	// (0x00020b67) battery_pane_stacon_ParamLimits

0x633c,	// (0x00020b67) battery_pane_stacon

0x6380,	// (0x00020bab) control_bottom_pane_stacon_ParamLimits

0x6380,	// (0x00020bab) control_bottom_pane_stacon

0x63a3,	// (0x00020bce) navi_pane_stacon_ParamLimits

0x63a3,	// (0x00020bce) navi_pane_stacon

0x9169,	// (0x00023994) stacon_bottom_pane_g1_ParamLimits

0x9169,	// (0x00023994) stacon_bottom_pane_g1

0x5fef,	// (0x0002081a) aid_levels_signal_lsc_ParamLimits

0x5fef,	// (0x0002081a) aid_levels_signal_lsc

0x6006,	// (0x00020831) signal_pane_stacon_g1_ParamLimits

0x6006,	// (0x00020831) signal_pane_stacon_g1

0x601a,	// (0x00020845) signal_pane_stacon_g2_ParamLimits

0x601a,	// (0x00020845) signal_pane_stacon_g2

0x0001,

0xf6c4,	// (0x00029eef) signal_pane_stacon_g_ParamLimits

0xf6c4,	// (0x00029eef) signal_pane_stacon_g

0x604f,	// (0x0002087a) title_pane_stacon_t1_ParamLimits

0x604f,	// (0x0002087a) title_pane_stacon_t1

0x8bb1,	// (0x000233dc) uni_indicator_pane_stacon_g1

0x8bbb,	// (0x000233e6) uni_indicator_pane_stacon_g2

0x8bc5,	// (0x000233f0) uni_indicator_pane_stacon_g3

0x8bcf,	// (0x000233fa) uni_indicator_pane_stacon_g4

0x0003,

0xf6d0,	// (0x00029efb) uni_indicator_pane_stacon_g

0x6074,	// (0x0002089f) control_top_pane_stacon_g1

0x607c,	// (0x000208a7) control_top_pane_stacon_t1_ParamLimits

0x607c,	// (0x000208a7) control_top_pane_stacon_t1

0x60b3,	// (0x000208de) aid_levels_battery_lsc_ParamLimits

0x60b3,	// (0x000208de) aid_levels_battery_lsc

0x60cb,	// (0x000208f6) battery_pane_stacon_g1_ParamLimits

0x60cb,	// (0x000208f6) battery_pane_stacon_g1

0x60de,	// (0x00020909) battery_pane_stacon_g2_ParamLimits

0x60de,	// (0x00020909) battery_pane_stacon_g2

0x0001,

0xf6d9,	// (0x00029f04) battery_pane_stacon_g_ParamLimits

0xf6d9,	// (0x00029f04) battery_pane_stacon_g

0x611c,	// (0x00020947) navi_icon_pane_stacon

0x6130,	// (0x0002095b) navi_navi_pane_stacon

0x611c,	// (0x00020947) navi_text_pane_stacon

0x6074,	// (0x0002089f) control_bottom_pane_stacon_g1

0x6144,	// (0x0002096f) control_bottom_pane_stacon_t1_ParamLimits

0x6144,	// (0x0002096f) control_bottom_pane_stacon_t1

0x8bf3,	// (0x0002341e) grid_app_pane_ParamLimits

0x8bf3,	// (0x0002341e) grid_app_pane

0x8c15,	// (0x00023440) scroll_pane_cp15_ParamLimits

0x8c15,	// (0x00023440) scroll_pane_cp15

0x8c28,	// (0x00023453) cell_app_pane_ParamLimits

0x8c28,	// (0x00023453) cell_app_pane

0x8c4e,	// (0x00023479) cell_app_pane_g1_ParamLimits

0x8c4e,	// (0x00023479) cell_app_pane_g1

0x8c72,	// (0x0002349d) cell_app_pane_g2_ParamLimits

0x8c72,	// (0x0002349d) cell_app_pane_g2

0x0001,

0xf6de,	// (0x00029f09) cell_app_pane_g_ParamLimits

0xf6de,	// (0x00029f09) cell_app_pane_g

0x8c7e,	// (0x000234a9) cell_app_pane_t1_ParamLimits

0x8c7e,	// (0x000234a9) cell_app_pane_t1

0x8c95,	// (0x000234c0) grid_highlight_pane_ParamLimits

0x8c95,	// (0x000234c0) grid_highlight_pane

0x8899,	// (0x000230c4) cell_highlight_pane_g1

0x88a1,	// (0x000230cc) cell_highlight_pane_g2

0x88a9,	// (0x000230d4) cell_highlight_pane_g3

0x88b1,	// (0x000230dc) cell_highlight_pane_g4

0x88b9,	// (0x000230e4) cell_highlight_pane_g5

0x88c1,	// (0x000230ec) cell_highlight_pane_g6

0x88c9,	// (0x000230f4) cell_highlight_pane_g7

0x88d1,	// (0x000230fc) cell_highlight_pane_g8

0x88d9,	// (0x00023104) cell_highlight_pane_g9

0x7efa,	// (0x00022725) cell_highlight_pane_g10

0x0009,

0xf68c,	// (0x00029eb7) cell_highlight_pane_g

0x8ca6,	// (0x000234d1) bg_scroll_pane

0x618e,	// (0x000209b9) scroll_handle_pane

0x8ced,	// (0x00023518) scroll_bg_pane_g1

0x8d02,	// (0x0002352d) scroll_bg_pane_g2

0x8d1a,	// (0x00023545) scroll_bg_pane_g3

0x0002,

0xf6e3,	// (0x00029f0e) scroll_bg_pane_g

0x8d2f,	// (0x0002355a) scroll_handle_focus_pane_ParamLimits

0x8d2f,	// (0x0002355a) scroll_handle_focus_pane

0x8ced,	// (0x00023518) scroll_handle_pane_g1

0x8d3c,	// (0x00023567) scroll_handle_pane_g2

0x8d1a,	// (0x00023545) scroll_handle_pane_g3

0x0002,

0xf6ea,	// (0x00029f15) scroll_handle_pane_g

0x88ea,	// (0x00023115) bg_popup_sub_pane_cp21_ParamLimits

0x88ea,	// (0x00023115) bg_popup_sub_pane_cp21

0x8d50,	// (0x0002357b) popup_fep_japan_predictive_window_t1_ParamLimits

0x8d50,	// (0x0002357b) popup_fep_japan_predictive_window_t1

0x8d6a,	// (0x00023595) popup_fep_japan_predictive_window_t2_ParamLimits

0x8d6a,	// (0x00023595) popup_fep_japan_predictive_window_t2

0x8d9d,	// (0x000235c8) popup_fep_japan_predictive_window_t3_ParamLimits

0x8d9d,	// (0x000235c8) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f1,	// (0x00029f1c) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f1,	// (0x00029f1c) popup_fep_japan_predictive_window_t

0x7f04,	// (0x0002272f) bg_popup_sub_pane_cp23

0x8dd4,	// (0x000235ff) listscroll_japin_cand_pane

0x8ddc,	// (0x00023607) popup_fep_japan_candidate_window_t1

0x8dea,	// (0x00023615) candidate_pane_ParamLimits

0x8dea,	// (0x00023615) candidate_pane

0x8dfc,	// (0x00023627) scroll_pane_cp30

0x8e04,	// (0x0002362f) list_single_popup_jap_candidate_pane_ParamLimits

0x8e04,	// (0x0002362f) list_single_popup_jap_candidate_pane

0x7f04,	// (0x0002272f) list_highlight_pane_cp30

0x8e18,	// (0x00023643) list_single_popup_jap_candidate_pane_t1

0x8e27,	// (0x00023652) level_1_signal

0x8e34,	// (0x0002365f) level_2_signal

0x8e41,	// (0x0002366c) level_3_signal

0x8e4e,	// (0x00023679) level_4_signal

0x8e5b,	// (0x00023686) level_5_signal

0x8e68,	// (0x00023693) level_6_signal

0x8e75,	// (0x000236a0) level_7_signal

0x8e27,	// (0x00023652) level_1_battery

0x8e34,	// (0x0002365f) level_2_battery

0x8e41,	// (0x0002366c) level_3_battery

0x8e4e,	// (0x00023679) level_4_battery

0x8e5b,	// (0x00023686) level_5_battery

0x8e68,	// (0x00023693) level_6_battery

0x8e75,	// (0x000236a0) level_7_battery

0x8e9a,	// (0x000236c5) list_menu_pane_ParamLimits

0x8e9a,	// (0x000236c5) list_menu_pane

0x8eb0,	// (0x000236db) scroll_pane_cp25_ParamLimits

0x8eb0,	// (0x000236db) scroll_pane_cp25

0x8ec9,	// (0x000236f4) list_double2_graphic_pane_cp2_ParamLimits

0x8ec9,	// (0x000236f4) list_double2_graphic_pane_cp2

0x8ec9,	// (0x000236f4) list_double2_large_graphic_pane_cp2_ParamLimits

0x8ec9,	// (0x000236f4) list_double2_large_graphic_pane_cp2

0x8ec9,	// (0x000236f4) list_double2_pane_cp2_ParamLimits

0x8ec9,	// (0x000236f4) list_double2_pane_cp2

0x8ec9,	// (0x000236f4) list_double_graphic_pane_cp2_ParamLimits

0x8ec9,	// (0x000236f4) list_double_graphic_pane_cp2

0x8ec9,	// (0x000236f4) list_double_large_graphic_pane_cp2_ParamLimits

0x8ec9,	// (0x000236f4) list_double_large_graphic_pane_cp2

0x8ec9,	// (0x000236f4) list_double_number_pane_cp2_ParamLimits

0x8ec9,	// (0x000236f4) list_double_number_pane_cp2

0x8ec9,	// (0x000236f4) list_double_pane_cp2_ParamLimits

0x8ec9,	// (0x000236f4) list_double_pane_cp2

0x8eed,	// (0x00023718) list_single_2graphic_pane_cp2_ParamLimits

0x8eed,	// (0x00023718) list_single_2graphic_pane_cp2

0x8eed,	// (0x00023718) list_single_graphic_heading_pane_cp2_ParamLimits

0x8eed,	// (0x00023718) list_single_graphic_heading_pane_cp2

0x8eed,	// (0x00023718) list_single_graphic_pane_cp2_ParamLimits

0x8eed,	// (0x00023718) list_single_graphic_pane_cp2

0x8eed,	// (0x00023718) list_single_heading_pane_cp2_ParamLimits

0x8eed,	// (0x00023718) list_single_heading_pane_cp2

0x8f03,	// (0x0002372e) list_single_large_graphic_pane_cp2_ParamLimits

0x8f03,	// (0x0002372e) list_single_large_graphic_pane_cp2

0x8eed,	// (0x00023718) list_single_number_heading_pane_cp2_ParamLimits

0x8eed,	// (0x00023718) list_single_number_heading_pane_cp2

0x8eed,	// (0x00023718) list_single_number_pane_cp2_ParamLimits

0x8eed,	// (0x00023718) list_single_number_pane_cp2

0x8eed,	// (0x00023718) list_single_pane_cp2_ParamLimits

0x8eed,	// (0x00023718) list_single_pane_cp2

0x8f7e,	// (0x000237a9) bg_popup_sub_pane_cp22

0x623d,	// (0x00020a68) popup_side_volume_key_window_g1

0x6261,	// (0x00020a8c) popup_side_volume_key_window_t1

0x627d,	// (0x00020aa8) volume_small_pane_cp1

0x825f,	// (0x00022a8a) bg_popup_sub_pane_cp24_ParamLimits

0x825f,	// (0x00022a8a) bg_popup_sub_pane_cp24

0x8f94,	// (0x000237bf) fep_china_uni_candidate_pane_ParamLimits

0x8f94,	// (0x000237bf) fep_china_uni_candidate_pane

0x8fa8,	// (0x000237d3) fep_china_uni_entry_pane

0x8fb8,	// (0x000237e3) popup_fep_china_uni_window_g1

0x8fd4,	// (0x000237ff) fep_china_uni_entry_pane_g1

0x8fdc,	// (0x00023807) fep_china_uni_entry_pane_g2

0x0001,

0xf722,	// (0x00029f4d) fep_china_uni_entry_pane_g

0x8fe4,	// (0x0002380f) fep_entry_item_pane

0x9006,	// (0x00023831) fep_candidate_item_pane

0x900e,	// (0x00023839) fep_china_uni_candidate_pane_g1

0x9016,	// (0x00023841) fep_china_uni_candidate_pane_g2

0x901e,	// (0x00023849) fep_china_uni_candidate_pane_g3

0x9026,	// (0x00023851) fep_china_uni_candidate_pane_g4

0x0003,

0xf727,	// (0x00029f52) fep_china_uni_candidate_pane_g

0x7efa,	// (0x00022725) fep_entry_item_pane_g1

0x902e,	// (0x00023859) fep_entry_item_pane_t1_ParamLimits

0x902e,	// (0x00023859) fep_entry_item_pane_t1

0x9044,	// (0x0002386f) fep_candidate_item_pane_t1_ParamLimits

0x9044,	// (0x0002386f) fep_candidate_item_pane_t1

0x9059,	// (0x00023884) fep_candidate_item_pane_t2_ParamLimits

0x9059,	// (0x00023884) fep_candidate_item_pane_t2

0x0001,

0xf730,	// (0x00029f5b) fep_candidate_item_pane_t_ParamLimits

0xf730,	// (0x00029f5b) fep_candidate_item_pane_t

0x7fe4,	// (0x0002280f) list_highlight_pane_cp31_ParamLimits

0x7fe4,	// (0x0002280f) list_highlight_pane_cp31

0x906b,	// (0x00023896) level_1_signal_lsc

0x9074,	// (0x0002389f) level_2_signal_lsc

0x907d,	// (0x000238a8) level_3_signal_lsc

0x9086,	// (0x000238b1) level_4_signal_lsc

0x908f,	// (0x000238ba) level_5_signal_lsc

0x9098,	// (0x000238c3) level_6_signal_lsc

0x90a1,	// (0x000238cc) level_7_signal_lsc

0x90a1,	// (0x000238cc) level_1_battery_lsc

0x90aa,	// (0x000238d5) level_2_battery_lsc

0x90b3,	// (0x000238de) level_3_battery_lsc

0x90bc,	// (0x000238e7) level_4_battery_lsc

0x90c5,	// (0x000238f0) level_5_battery_lsc

0x90ce,	// (0x000238f9) level_6_battery_lsc

0x906b,	// (0x00023896) level_7_battery_lsc

0x90d7,	// (0x00023902) scroll_handle_focus_pane_g1

0x90e0,	// (0x0002390b) scroll_handle_focus_pane_g2

0x90e9,	// (0x00023914) scroll_handle_focus_pane_g3

0x0002,

0xf735,	// (0x00029f60) scroll_handle_focus_pane_g

0x5101,	// (0x0001f92c) list_single_2graphic_pane_g1_ParamLimits

0x5101,	// (0x0001f92c) list_single_2graphic_pane_g1

0x4ac0,	// (0x0001f2eb) list_single_2graphic_pane_g2_ParamLimits

0x4ac0,	// (0x0001f2eb) list_single_2graphic_pane_g2

0x4a46,	// (0x0001f271) list_single_2graphic_pane_g3_ParamLimits

0x4a46,	// (0x0001f271) list_single_2graphic_pane_g3

0x510d,	// (0x0001f938) list_single_2graphic_pane_g4_ParamLimits

0x510d,	// (0x0001f938) list_single_2graphic_pane_g4

0x0003,

0xf73c,	// (0x00029f67) list_single_2graphic_pane_g_ParamLimits

0xf73c,	// (0x00029f67) list_single_2graphic_pane_g

0x5119,	// (0x0001f944) list_single_2graphic_pane_t1_ParamLimits

0x5119,	// (0x0001f944) list_single_2graphic_pane_t1

0x5147,	// (0x0001f972) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x5147,	// (0x0001f972) list_double2_graphic_large_graphic_pane_g1

0x4b65,	// (0x0001f390) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x4b65,	// (0x0001f390) list_double2_graphic_large_graphic_pane_g2

0x4b76,	// (0x0001f3a1) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x4b76,	// (0x0001f3a1) list_double2_graphic_large_graphic_pane_g3

0x5159,	// (0x0001f984) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x5159,	// (0x0001f984) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf745,	// (0x00029f70) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf745,	// (0x00029f70) list_double2_graphic_large_graphic_pane_g

0x5165,	// (0x0001f990) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x5165,	// (0x0001f990) list_double2_graphic_large_graphic_pane_t1

0x517b,	// (0x0001f9a6) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x517b,	// (0x0001f9a6) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf74e,	// (0x00029f79) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf74e,	// (0x00029f79) list_double2_graphic_large_graphic_pane_t

0x9230,	// (0x00023a5b) popup_fast_swap_window_ParamLimits

0x9230,	// (0x00023a5b) popup_fast_swap_window

0x924c,	// (0x00023a77) popup_side_volume_key_window

0x9266,	// (0x00023a91) stacon_top_pane

0x9270,	// (0x00023a9b) status_pane_ParamLimits

0x9270,	// (0x00023a9b) status_pane

0x927e,	// (0x00023aa9) status_small_pane

0x7f04,	// (0x0002272f) control_pane

0x7f04,	// (0x0002272f) stacon_bottom_pane

0x8821,	// (0x0002304c) scroll_pane_cp121

0x8818,	// (0x00023043) set_content_pane

0x90f2,	// (0x0002391d) bg_active_tab_pane_g1_cp1

0x90fb,	// (0x00023926) bg_active_tab_pane_g2_cp1

0x9104,	// (0x0002392f) bg_active_tab_pane_g3_cp1

0x90f2,	// (0x0002391d) bg_passive_tab_pane_g1_cp1

0x90fb,	// (0x00023926) bg_passive_tab_pane_g2_cp1

0x9104,	// (0x0002392f) bg_passive_tab_pane_g3_cp1

0x910d,	// (0x00023938) bg_active_tab_pane_g1_cp2

0x90fb,	// (0x00023926) bg_active_tab_pane_g2_cp2

0x9116,	// (0x00023941) bg_active_tab_pane_g3_cp2

0x910d,	// (0x00023938) bg_passive_tab_pane_g1_cp2

0x90fb,	// (0x00023926) bg_passive_tab_pane_g2_cp2

0x9116,	// (0x00023941) bg_passive_tab_pane_g3_cp2

0x911f,	// (0x0002394a) bg_active_tab_pane_g1_cp3

0x90fb,	// (0x00023926) bg_active_tab_pane_g2_cp3

0x9128,	// (0x00023953) bg_active_tab_pane_g3_cp3

0x911f,	// (0x0002394a) bg_passive_tab_pane_g1_cp3

0x90fb,	// (0x00023926) bg_passive_tab_pane_g2_cp3

0x9128,	// (0x00023953) bg_passive_tab_pane_g3_cp3

0x9131,	// (0x0002395c) bg_active_tab_pane_g1_cp4

0x90fb,	// (0x00023926) bg_active_tab_pane_g2_cp4

0x913c,	// (0x00023967) bg_active_tab_pane_g3_cp4

0x9131,	// (0x0002395c) bg_passive_tab_pane_g1_cp4

0x90fb,	// (0x00023926) bg_passive_tab_pane_g2_cp4

0x913c,	// (0x00023967) bg_passive_tab_pane_g3_cp4

0x9185,	// (0x000239b0) bg_active_tab_pane_g1_cp5

0x90fb,	// (0x00023926) bg_active_tab_pane_g2_cp5

0x918e,	// (0x000239b9) bg_active_tab_pane_g3_cp5

0x9185,	// (0x000239b0) bg_passive_tab_pane_g1_cp5

0x90fb,	// (0x00023926) bg_passive_tab_pane_g2_cp5

0x918e,	// (0x000239b9) bg_passive_tab_pane_g3_cp5

0x9197,	// (0x000239c2) list_set_graphic_pane_ParamLimits

0x9197,	// (0x000239c2) list_set_graphic_pane

0x7f04,	// (0x0002272f) bg_set_opt_pane_cp4

0x91b5,	// (0x000239e0) list_set_graphic_pane_g1_ParamLimits

0x91b5,	// (0x000239e0) list_set_graphic_pane_g1

0x91c1,	// (0x000239ec) list_set_graphic_pane_g2_ParamLimits

0x91c1,	// (0x000239ec) list_set_graphic_pane_g2

0x0001,

0xf753,	// (0x00029f7e) list_set_graphic_pane_g_ParamLimits

0xf753,	// (0x00029f7e) list_set_graphic_pane_g

0x0009,

0xfadd,	// (0x0002a308) volume_small_pane_cp_g

0x91e3,	// (0x00023a0e) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x91e3,	// (0x00023a0e) list_double2_large_graphic_pane_g1_cp2

0x91ef,	// (0x00023a1a) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x91ef,	// (0x00023a1a) list_double2_large_graphic_pane_g2_cp2

0x9200,	// (0x00023a2b) list_double2_large_graphic_pane_g3_cp2

0x9208,	// (0x00023a33) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x9208,	// (0x00023a33) list_double2_large_graphic_pane_t1_cp2

0x921e,	// (0x00023a49) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x921e,	// (0x00023a49) list_double2_large_graphic_pane_t2_cp2

0xadd7,	// (0x00025602) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xadd7,	// (0x00025602) list_double_large_graphic_pane_g1_cp2

0xade8,	// (0x00025613) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xade8,	// (0x00025613) list_double_large_graphic_pane_g2_cp2

0x9397,	// (0x00023bc2) list_double_large_graphic_pane_g3_cp2

0xadf9,	// (0x00025624) list_double_large_graphic_pane_g4_cp

0xae01,	// (0x0002562c) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xae01,	// (0x0002562c) list_double_large_graphic_pane_t1_cp2

0xae18,	// (0x00025643) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xae18,	// (0x00025643) list_double_large_graphic_pane_t2_cp2

0x9289,	// (0x00023ab4) list_double2_graphic_pane_g1_cp2_ParamLimits

0x9289,	// (0x00023ab4) list_double2_graphic_pane_g1_cp2

0x9297,	// (0x00023ac2) list_double2_graphic_pane_g2_cp2_ParamLimits

0x9297,	// (0x00023ac2) list_double2_graphic_pane_g2_cp2

0x92a8,	// (0x00023ad3) list_double2_graphic_pane_g3_cp2

0x92b2,	// (0x00023add) list_double2_graphic_pane_t1_cp2_ParamLimits

0x92b2,	// (0x00023add) list_double2_graphic_pane_t1_cp2

0x92c8,	// (0x00023af3) list_double2_graphic_pane_t2_cp2_ParamLimits

0x92c8,	// (0x00023af3) list_double2_graphic_pane_t2_cp2

0x92da,	// (0x00023b05) list_single_number_heading_pane_g1_cp2_ParamLimits

0x92da,	// (0x00023b05) list_single_number_heading_pane_g1_cp2

0x92e6,	// (0x00023b11) list_single_number_heading_pane_g2_cp2

0x92ee,	// (0x00023b19) list_single_number_heading_pane_t1_cp2_ParamLimits

0x92ee,	// (0x00023b19) list_single_number_heading_pane_t1_cp2

0x9304,	// (0x00023b2f) list_single_number_heading_pane_t2_cp2_ParamLimits

0x9304,	// (0x00023b2f) list_single_number_heading_pane_t2_cp2

0x9316,	// (0x00023b41) list_single_number_heading_pane_t3_cp2_ParamLimits

0x9316,	// (0x00023b41) list_single_number_heading_pane_t3_cp2

0x92da,	// (0x00023b05) list_single_heading_pane_g1_cp2_ParamLimits

0x92da,	// (0x00023b05) list_single_heading_pane_g1_cp2

0x92e6,	// (0x00023b11) list_single_heading_pane_g2_cp2

0x92ee,	// (0x00023b19) list_single_heading_pane_t1_cp2_ParamLimits

0x92ee,	// (0x00023b19) list_single_heading_pane_t1_cp2

0xabe1,	// (0x0002540c) list_single_heading_pane_t2_cp2_ParamLimits

0xabe1,	// (0x0002540c) list_single_heading_pane_t2_cp2

0xab29,	// (0x00025354) list_double_graphic_pane_g1_cp2_ParamLimits

0xab29,	// (0x00025354) list_double_graphic_pane_g1_cp2

0xab35,	// (0x00025360) list_double_graphic_pane_g2_cp2_ParamLimits

0xab35,	// (0x00025360) list_double_graphic_pane_g2_cp2

0xab44,	// (0x0002536f) list_double_graphic_pane_g3_cp2

0xab4c,	// (0x00025377) list_double_graphic_pane_t1_cp2_ParamLimits

0xab4c,	// (0x00025377) list_double_graphic_pane_t1_cp2

0xab62,	// (0x0002538d) list_double_graphic_pane_t2_cp2_ParamLimits

0xab62,	// (0x0002538d) list_double_graphic_pane_t2_cp2

0x938b,	// (0x00023bb6) list_double_number_pane_g1_cp2_ParamLimits

0x938b,	// (0x00023bb6) list_double_number_pane_g1_cp2

0x9397,	// (0x00023bc2) list_double_number_pane_g2_cp2

0xaaed,	// (0x00025318) list_double_number_pane_t1_cp2_ParamLimits

0xaaed,	// (0x00025318) list_double_number_pane_t1_cp2

0xab01,	// (0x0002532c) list_double_number_pane_t2_cp2_ParamLimits

0xab01,	// (0x0002532c) list_double_number_pane_t2_cp2

0xab17,	// (0x00025342) list_double_number_pane_t3_cp2_ParamLimits

0xab17,	// (0x00025342) list_double_number_pane_t3_cp2

0xa9d6,	// (0x00025201) list_single_graphic_pane_g1_cp2_ParamLimits

0xa9d6,	// (0x00025201) list_single_graphic_pane_g1_cp2

0x8fee,	// (0x00023819) list_single_graphic_pane_g2_cp2_ParamLimits

0x8fee,	// (0x00023819) list_single_graphic_pane_g2_cp2

0x93ef,	// (0x00023c1a) list_single_graphic_pane_g3_cp2

0xa9ac,	// (0x000251d7) list_single_graphic_pane_t1_cp2_ParamLimits

0xa9ac,	// (0x000251d7) list_single_graphic_pane_t1_cp2

0x8fee,	// (0x00023819) list_single_number_pane_g1_cp2_ParamLimits

0x8fee,	// (0x00023819) list_single_number_pane_g1_cp2

0x93ef,	// (0x00023c1a) list_single_number_pane_g2_cp2

0xa9ac,	// (0x000251d7) list_single_number_pane_t1_cp2_ParamLimits

0xa9ac,	// (0x000251d7) list_single_number_pane_t1_cp2

0xa9c2,	// (0x000251ed) list_single_number_pane_t2_cp2_ParamLimits

0xa9c2,	// (0x000251ed) list_single_number_pane_t2_cp2

0x91ef,	// (0x00023a1a) list_double2_pane_g1_cp2_ParamLimits

0x91ef,	// (0x00023a1a) list_double2_pane_g1_cp2

0x9200,	// (0x00023a2b) list_double2_pane_g2_cp2

0x9363,	// (0x00023b8e) list_double2_pane_t1_cp2_ParamLimits

0x9363,	// (0x00023b8e) list_double2_pane_t1_cp2

0x9379,	// (0x00023ba4) list_double2_pane_t2_cp2_ParamLimits

0x9379,	// (0x00023ba4) list_double2_pane_t2_cp2

0x938b,	// (0x00023bb6) list_double_pane_g1_cp2_ParamLimits

0x938b,	// (0x00023bb6) list_double_pane_g1_cp2

0x9397,	// (0x00023bc2) list_double_pane_g2_cp2

0x939f,	// (0x00023bca) list_double_pane_t1_cp2_ParamLimits

0x939f,	// (0x00023bca) list_double_pane_t1_cp2

0x93b5,	// (0x00023be0) list_double_pane_t2_cp2_ParamLimits

0x93b5,	// (0x00023be0) list_double_pane_t2_cp2

0x93df,	// (0x00023c0a) list_single_pane_cp2_g3

0x8fee,	// (0x00023819) list_single_pane_g1_cp2_ParamLimits

0x8fee,	// (0x00023819) list_single_pane_g1_cp2

0x93ef,	// (0x00023c1a) list_single_pane_g2_cp2

0x93f7,	// (0x00023c22) list_single_pane_t1_cp2_ParamLimits

0x93f7,	// (0x00023c22) list_single_pane_t1_cp2

0x940f,	// (0x00023c3a) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x940f,	// (0x00023c3a) list_single_large_graphic_pane_g1_cp2

0x941b,	// (0x00023c46) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x941b,	// (0x00023c46) list_single_large_graphic_pane_g2_cp2

0x9427,	// (0x00023c52) list_single_large_graphic_pane_g3_cp2

0x942f,	// (0x00023c5a) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x942f,	// (0x00023c5a) list_single_large_graphic_pane_g4_cp1

0x9449,	// (0x00023c74) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x9449,	// (0x00023c74) list_single_large_graphic_pane_t1_cp2

0xa978,	// (0x000251a3) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa978,	// (0x000251a3) list_single_graphic_heading_pane_g1_cp2

0xa945,	// (0x00025170) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa945,	// (0x00025170) list_single_graphic_heading_pane_g4_cp2

0x93ef,	// (0x00023c1a) list_single_graphic_heading_pane_g5_cp2

0xa984,	// (0x000251af) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa984,	// (0x000251af) list_single_graphic_heading_pane_t1_cp2

0xa99a,	// (0x000251c5) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa99a,	// (0x000251c5) list_single_graphic_heading_pane_t2_cp2

0xa939,	// (0x00025164) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa939,	// (0x00025164) list_single_2graphic_pane_g1_cp2

0xa945,	// (0x00025170) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa945,	// (0x00025170) list_single_2graphic_pane_g2_cp2

0x93ef,	// (0x00023c1a) list_single_2graphic_pane_g3_cp2

0xa956,	// (0x00025181) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa956,	// (0x00025181) list_single_2graphic_pane_g4_cp2

0xa962,	// (0x0002518d) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa962,	// (0x0002518d) list_single_2graphic_pane_t1_cp2

0x7efa,	// (0x00022725) list_highlight_pane_g10_cp1

0xa511,	// (0x00024d3c) list_highlight_pane_g1_cp1

0xa519,	// (0x00024d44) list_highlight_pane_g2_cp1

0xa521,	// (0x00024d4c) list_highlight_pane_g3_cp1

0xa529,	// (0x00024d54) list_highlight_pane_g4_cp1

0xa531,	// (0x00024d5c) list_highlight_pane_g5_cp1

0xa539,	// (0x00024d64) list_highlight_pane_g6_cp1

0xa541,	// (0x00024d6c) list_highlight_pane_g7_cp1

0xa549,	// (0x00024d74) list_highlight_pane_g8_cp1

0xa551,	// (0x00024d7c) list_highlight_pane_g9_cp1

0xa429,	// (0x00024c54) form_field_slider_pane_t3

0xa437,	// (0x00024c62) form_field_slider_pane_t4

0xa445,	// (0x00024c70) slider_form_pane_ParamLimits

0xa445,	// (0x00024c70) slider_form_pane

0x7f04,	// (0x0002272f) control_abbreviations

0x7f04,	// (0x0002272f) control_conventions

0x7f04,	// (0x0002272f) control_definitions

0x7f04,	// (0x0002272f) format_table_attribute

0xac2b,	// (0x00025456) bg_popup_preview_window_pane_g9

0x7f04,	// (0x0002272f) format_table_data2

0x7f04,	// (0x0002272f) format_table_data3

0x7f04,	// (0x0002272f) format_table_data_example

0x0008,

0x7f04,	// (0x0002272f) intro_purpose

0xf8e8,	// (0x0002a113) bg_popup_preview_window_pane_g

0x7f04,	// (0x0002272f) texts_category

0x7f04,	// (0x0002272f) texts_graphics

0x945f,	// (0x00023c8a) text_digital

0x946e,	// (0x00023c99) text_primary

0x947d,	// (0x00023ca8) text_primary_small

0x948c,	// (0x00023cb7) text_secondary

0x949b,	// (0x00023cc6) text_title

0xb2fa,	// (0x00025b25) bg_passive_tab_pane_g1_cp3_srt

0x90fb,	// (0x00023926) bg_passive_tab_pane_g2_cp3_srt

0xb303,	// (0x00025b2e) bg_passive_tab_pane_g3_cp3_srt

0x7fe4,	// (0x0002280f) bg_active_tab_pane_cp3_srt_ParamLimits

0x7fe4,	// (0x0002280f) bg_active_tab_pane_cp3_srt

0xb30c,	// (0x00025b37) tabs_4_active_pane_srt_g1

0xb314,	// (0x00025b3f) tabs_4_active_pane_srt_t1_ParamLimits

0xb314,	// (0x00025b3f) tabs_4_active_pane_srt_t1

0xb2fa,	// (0x00025b25) bg_active_tab_pane_g1_cp3_copy1

0x90fb,	// (0x00023926) bg_active_tab_pane_g2_cp3_copy1

0xb303,	// (0x00025b2e) bg_active_tab_pane_g3_cp3_copy1

0x7fe4,	// (0x0002280f) tabs_2_long_active_pane_srt_ParamLimits

0x7fe4,	// (0x0002280f) tabs_2_long_active_pane_srt

0x7fe4,	// (0x0002280f) tabs_2_long_passive_pane_srt_ParamLimits

0x7fe4,	// (0x0002280f) tabs_2_long_passive_pane_srt

0x8a20,	// (0x0002324b) bg_passive_tab_pane_cp4_srt_ParamLimits

0x8a20,	// (0x0002324b) bg_passive_tab_pane_cp4_srt

0xb05a,	// (0x00025885) bg_passive_tab_pane_g1_cp4_srt

0x90fb,	// (0x00023926) bg_passive_tab_pane_g2_cp4_srt

0xb063,	// (0x0002588e) bg_passive_tab_pane_g3_cp4_srt

0x89ff,	// (0x0002322a) bg_active_tab_pane_cp4_srt_ParamLimits

0x89ff,	// (0x0002322a) bg_active_tab_pane_cp4_srt

0xb06c,	// (0x00025897) tabs_2_long_active_pane_srt_t1_ParamLimits

0xb06c,	// (0x00025897) tabs_2_long_active_pane_srt_t1

0xb05a,	// (0x00025885) bg_active_tab_pane_g1_cp4_srt

0x90fb,	// (0x00023926) bg_active_tab_pane_g2_cp4_srt

0xb063,	// (0x0002588e) bg_active_tab_pane_g3_cp4_srt

0x825f,	// (0x00022a8a) tabs_3_long_active_pane_srt_ParamLimits

0x825f,	// (0x00022a8a) tabs_3_long_active_pane_srt

0x825f,	// (0x00022a8a) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x825f,	// (0x00022a8a) tabs_3_long_passive_pane_cp_srt

0x825f,	// (0x00022a8a) tabs_3_long_passive_pane_srt_ParamLimits

0x825f,	// (0x00022a8a) tabs_3_long_passive_pane_srt

0x8a20,	// (0x0002324b) bg_passive_tab_pane_cp5_srt_ParamLimits

0x8a20,	// (0x0002324b) bg_passive_tab_pane_cp5_srt

0x9185,	// (0x000239b0) bg_passive_tab_pane_g1_cp5_srt

0x90fb,	// (0x00023926) bg_passive_tab_pane_g2_cp5_srt

0x918e,	// (0x000239b9) bg_passive_tab_pane_g3_cp5_srt

0x89ff,	// (0x0002322a) bg_active_tab_pane_cp5_srt_ParamLimits

0x89ff,	// (0x0002322a) bg_active_tab_pane_cp5_srt

0xb048,	// (0x00025873) tabs_3_long_active_pane_srt_t1_ParamLimits

0xb048,	// (0x00025873) tabs_3_long_active_pane_srt_t1

0x9185,	// (0x000239b0) bg_active_tab_pane_g1_cp5_srt

0x90fb,	// (0x00023926) bg_active_tab_pane_g2_cp5_srt

0x918e,	// (0x000239b9) bg_active_tab_pane_g3_cp5_srt

0xb03a,	// (0x00025865) navi_text_pane_srt_t1

0xb032,	// (0x0002585d) navi_icon_pane_srt_g1

0x9660,	// (0x00023e8b) midp_editing_number_pane_srt

0x94aa,	// (0x00023cd5) midp_ticker_pane_srt

0x9668,	// (0x00023e93) midp_ticker_pane_srt_g1

0x9670,	// (0x00023e9b) midp_ticker_pane_srt_g2

0x0001,

0xf772,	// (0x00029f9d) midp_ticker_pane_srt_g

0x9678,	// (0x00023ea3) midp_ticker_pane_srt_t1

0xb023,	// (0x0002584e) midp_editing_number_pane_t1_copy1

0x8a20,	// (0x0002324b) listscroll_midp_pane

0x8a20,	// (0x0002324b) midp_form_pane

0x9518,	// (0x00023d43) midp_info_popup_window_ParamLimits

0x9518,	// (0x00023d43) midp_info_popup_window

0x88ea,	// (0x00023115) bg_popup_sub_pane_cp50_ParamLimits

0x88ea,	// (0x00023115) bg_popup_sub_pane_cp50

0xa146,	// (0x00024971) listscroll_midp_info_pane_ParamLimits

0xa146,	// (0x00024971) listscroll_midp_info_pane

0xa12e,	// (0x00024959) listscroll_form_midp_pane_ParamLimits

0xa12e,	// (0x00024959) listscroll_form_midp_pane

0xa13a,	// (0x00024965) scroll_bar_cp050

0xa10e,	// (0x00024939) list_midp_pane

0xbd2e,	// (0x00026559) signal_pane_g2_cp

0xa048,	// (0x00024873) listscroll_midp_info_pane_t1_ParamLimits

0xa048,	// (0x00024873) listscroll_midp_info_pane_t1

0xa060,	// (0x0002488b) listscroll_midp_info_pane_t2_ParamLimits

0xa060,	// (0x0002488b) listscroll_midp_info_pane_t2

0xa09e,	// (0x000248c9) listscroll_midp_info_pane_t3_ParamLimits

0xa09e,	// (0x000248c9) listscroll_midp_info_pane_t3

0xa0d8,	// (0x00024903) listscroll_midp_info_pane_t4_ParamLimits

0xa0d8,	// (0x00024903) listscroll_midp_info_pane_t4

0x0003,

0xf823,	// (0x0002a04e) listscroll_midp_info_pane_t_ParamLimits

0xf823,	// (0x0002a04e) listscroll_midp_info_pane_t

0x89ac,	// (0x000231d7) scroll_pane_cp21

0x9fea,	// (0x00024815) form_midp_field_choice_group_pane

0x9ff3,	// (0x0002481e) form_midp_field_text_pane

0xa02e,	// (0x00024859) form_midp_field_time_pane

0xa036,	// (0x00024861) form_midp_gauge_slider_pane

0xa03f,	// (0x0002486a) form_midp_gauge_wait_pane

0x7f04,	// (0x0002272f) form_midp_image_pane

0x52d2,	// (0x0001fafd) list_single_midp_pane_ParamLimits

0x52d2,	// (0x0001fafd) list_single_midp_pane

0x9f9e,	// (0x000247c9) form_midp_field_text_pane_t1

0x9d56,	// (0x00024581) input_focus_pane_cp050

0x9fd9,	// (0x00024804) list_midp_form_text_pane

0x9f6d,	// (0x00024798) form_midp_field_choice_group_pane_t1

0x9f7b,	// (0x000247a6) input_focus_pane_cp051

0x9f8f,	// (0x000247ba) list_midp_choice_pane

0x7f04,	// (0x0002272f) status_idle_pane

0x9f51,	// (0x0002477c) form_midp_field_time_pane_t1

0x7efa,	// (0x00022725) wait_anim_pane_g2_copy1

0x9f5f,	// (0x0002478a) form_midp_field_time_pane_t2

0x0001,

0x95c8,	// (0x00023df3) aid_navinavi_width_2_pane

0xf81e,	// (0x0002a049) form_midp_field_time_pane_t

0x7f04,	// (0x0002272f) input_focus_pane_cp052

0x7f04,	// (0x0002272f) bg_input_focus_pane_cp040

0x9f11,	// (0x0002473c) form_midp_gauge_slider_pane_t1

0x9f1f,	// (0x0002474a) form_midp_gauge_slider_pane_t2

0x9f2d,	// (0x00024758) form_midp_gauge_slider_pane_t3

0x9f3b,	// (0x00024766) form_midp_gauge_slider_pane_t4

0x0003,

0xf815,	// (0x0002a040) form_midp_gauge_slider_pane_t

0x9f49,	// (0x00024774) form_midp_slider_pane

0x7fe4,	// (0x0002280f) bg_input_focus_pane_cp041_ParamLimits

0x7fe4,	// (0x0002280f) bg_input_focus_pane_cp041

0x9ede,	// (0x00024709) form_midp_gauge_wait_pane_t1_ParamLimits

0x9ede,	// (0x00024709) form_midp_gauge_wait_pane_t1

0x9ef0,	// (0x0002471b) form_midp_gauge_wait_pane_t2_ParamLimits

0x9ef0,	// (0x0002471b) form_midp_gauge_wait_pane_t2

0x0001,

0xf810,	// (0x0002a03b) form_midp_gauge_wait_pane_t_ParamLimits

0xf810,	// (0x0002a03b) form_midp_gauge_wait_pane_t

0x9f02,	// (0x0002472d) form_midp_wait_pane_ParamLimits

0x9f02,	// (0x0002472d) form_midp_wait_pane

0x9ea8,	// (0x000246d3) form_midp_image_pane_g1

0x9eb1,	// (0x000246dc) form_midp_image_pane_t1

0x9ec0,	// (0x000246eb) form_midp_image_pane_t2

0x9ecf,	// (0x000246fa) form_midp_image_pane_t3

0x0002,

0xf809,	// (0x0002a034) form_midp_image_pane_t

0x9e9f,	// (0x000246ca) list_single_midp_pane_g1

0x52c3,	// (0x0001faee) list_single_midp_pane_t1

0x9e70,	// (0x0002469b) list_midp_form_item_pane_ParamLimits

0x9e70,	// (0x0002469b) list_midp_form_item_pane

0x9570,	// (0x00023d9b) list_midp_form_item_pane_t1

0x957f,	// (0x00023daa) midp_ticker_pane_g1

0x958b,	// (0x00023db6) midp_ticker_pane_g2

0x0001,

0xf758,	// (0x00029f83) midp_ticker_pane_g

0x9597,	// (0x00023dc2) midp_ticker_pane_t1

0xb266,	// (0x00025a91) midp_editing_number_pane_t1

0xb244,	// (0x00025a6f) midp_editing_number_pane

0xb253,	// (0x00025a7e) midp_ticker_pane

0xb013,	// (0x0002583e) ai_message_heading_pane

0x7f04,	// (0x0002272f) bg_popup_window_pane_cp14

0xb01b,	// (0x00025846) listscroll_ai_message_pane

0xaf9d,	// (0x000257c8) ai_message_heading_pane_g1_ParamLimits

0xaf9d,	// (0x000257c8) ai_message_heading_pane_g1

0xafa9,	// (0x000257d4) ai_message_heading_pane_g2_ParamLimits

0xafa9,	// (0x000257d4) ai_message_heading_pane_g2

0xafb5,	// (0x000257e0) ai_message_heading_pane_g3_ParamLimits

0xafb5,	// (0x000257e0) ai_message_heading_pane_g3

0xafc1,	// (0x000257ec) ai_message_heading_pane_g4_ParamLimits

0xafc1,	// (0x000257ec) ai_message_heading_pane_g4

0x0003,

0xf94a,	// (0x0002a175) ai_message_heading_pane_g_ParamLimits

0xf94a,	// (0x0002a175) ai_message_heading_pane_g

0xafcd,	// (0x000257f8) ai_message_heading_pane_t1_ParamLimits

0xafcd,	// (0x000257f8) ai_message_heading_pane_t1

0xafe7,	// (0x00025812) ai_message_heading_pane_t2_ParamLimits

0xafe7,	// (0x00025812) ai_message_heading_pane_t2

0x0001,

0xf953,	// (0x0002a17e) ai_message_heading_pane_t_ParamLimits

0xf953,	// (0x0002a17e) ai_message_heading_pane_t

0xaff9,	// (0x00025824) bg_popup_heading_pane_cp1_ParamLimits

0xaff9,	// (0x00025824) bg_popup_heading_pane_cp1

0xaf8b,	// (0x000257b6) list_ai_message_pane_ParamLimits

0xaf8b,	// (0x000257b6) list_ai_message_pane

0x89ac,	// (0x000231d7) scroll_pane_cp10

0xaf27,	// (0x00025752) list_ai_message_pane_g1

0xaf2f,	// (0x0002575a) list_ai_message_pane_g2

0x0001,

0xf927,	// (0x0002a152) list_ai_message_pane_g

0xaf37,	// (0x00025762) list_ai_message_pane_t1_ParamLimits

0xaf37,	// (0x00025762) list_ai_message_pane_t1

0xaf4c,	// (0x00025777) list_ai_message_pane_t2_ParamLimits

0xaf4c,	// (0x00025777) list_ai_message_pane_t2

0xaf61,	// (0x0002578c) list_ai_message_pane_t3_ParamLimits

0xaf61,	// (0x0002578c) list_ai_message_pane_t3

0xaf76,	// (0x000257a1) list_ai_message_pane_t4_ParamLimits

0xaf76,	// (0x000257a1) list_ai_message_pane_t4

0x0003,

0xf92c,	// (0x0002a157) list_ai_message_pane_t_ParamLimits

0xf92c,	// (0x0002a157) list_ai_message_pane_t

0xaf11,	// (0x0002573c) cell_ai_soft_ind_pane_ParamLimits

0xaf11,	// (0x0002573c) cell_ai_soft_ind_pane

0x95a9,	// (0x00023dd4) cell_ai_soft_ind_pane_g1_ParamLimits

0x95a9,	// (0x00023dd4) cell_ai_soft_ind_pane_g1

0x7f04,	// (0x0002272f) grid_highlight_cp1

0x95b6,	// (0x00023de1) text_secondary_cp56_ParamLimits

0x95b6,	// (0x00023de1) text_secondary_cp56

0xaee6,	// (0x00025711) example_general_pane_ParamLimits

0xaee6,	// (0x00025711) example_general_pane

0xaef2,	// (0x0002571d) example_parent_pane_g1_ParamLimits

0xaef2,	// (0x0002571d) example_parent_pane_g1

0xaefe,	// (0x00025729) example_parent_pane_t1_ParamLimits

0xaefe,	// (0x00025729) example_parent_pane_t1

0x6948,	// (0x00021173) popup_preview_text_window_ParamLimits

0x6948,	// (0x00021173) popup_preview_text_window

0x93e7,	// (0x00023c12) list_single_pane_cp2_g4

0x8309,	// (0x00022b34) bg_popup_preview_window_pane_ParamLimits

0x8309,	// (0x00022b34) bg_popup_preview_window_pane

0xac33,	// (0x0002545e) popup_preview_text_window_t1_ParamLimits

0xac33,	// (0x0002545e) popup_preview_text_window_t1

0xac51,	// (0x0002547c) popup_preview_text_window_t2_ParamLimits

0xac51,	// (0x0002547c) popup_preview_text_window_t2

0xac9a,	// (0x000254c5) popup_preview_text_window_t3_ParamLimits

0xac9a,	// (0x000254c5) popup_preview_text_window_t3

0xacdf,	// (0x0002550a) popup_preview_text_window_t4_ParamLimits

0xacdf,	// (0x0002550a) popup_preview_text_window_t4

0x0004,

0xf8fb,	// (0x0002a126) popup_preview_text_window_t_ParamLimits

0xf8fb,	// (0x0002a126) popup_preview_text_window_t

0xad5d,	// (0x00025588) scroll_pane_cp11

0x9ce2,	// (0x0002450d) bg_popup_preview_window_pane_g1

0xabf3,	// (0x0002541e) bg_popup_preview_window_pane_g2

0xabfb,	// (0x00025426) bg_popup_preview_window_pane_g3

0xac03,	// (0x0002542e) bg_popup_preview_window_pane_g4

0xac0b,	// (0x00025436) bg_popup_preview_window_pane_g5

0xac13,	// (0x0002543e) bg_popup_preview_window_pane_g6

0xac1b,	// (0x00025446) bg_popup_preview_window_pane_g7

0xac23,	// (0x0002544e) bg_popup_preview_window_pane_g8

0x5b89,	// (0x000203b4) aid_popup_width_pane

0x6926,	// (0x00021151) popup_midp_note_alarm_window_ParamLimits

0x6926,	// (0x00021151) popup_midp_note_alarm_window

0x8832,	// (0x0002305d) data_form_pane_ParamLimits

0x4f69,	// (0x0001f794) form_field_data_pane_g1

0x4f73,	// (0x0001f79e) form_field_data_pane_t1_ParamLimits

0x883e,	// (0x00023069) input_focus_pane_ParamLimits

0x4f8d,	// (0x0001f7b8) data_form_wide_pane_ParamLimits

0x4f9e,	// (0x0001f7c9) form_field_data_wide_pane_g1

0x4faa,	// (0x0001f7d5) form_field_data_wide_pane_t1_ParamLimits

0x85af,	// (0x00022dda) input_focus_pane_cp6_ParamLimits

0x8957,	// (0x00023182) input_popup_find_pane_g1_ParamLimits

0x8957,	// (0x00023182) input_popup_find_pane_g1

0x60ef,	// (0x0002091a) aid_navi_side_left_pane

0x6104,	// (0x0002092f) aid_navi_side_right_pane

0xa60c,	// (0x00024e37) bg_popup_window_pane_cp30_ParamLimits

0xa60c,	// (0x00024e37) bg_popup_window_pane_cp30

0xa686,	// (0x00024eb1) popup_midp_note_alarm_window_g1_ParamLimits

0xa686,	// (0x00024eb1) popup_midp_note_alarm_window_g1

0xa6b6,	// (0x00024ee1) popup_midp_note_alarm_window_t1_ParamLimits

0xa6b6,	// (0x00024ee1) popup_midp_note_alarm_window_t1

0xa757,	// (0x00024f82) popup_midp_note_alarm_window_t2_ParamLimits

0xa757,	// (0x00024f82) popup_midp_note_alarm_window_t2

0xa805,	// (0x00025030) popup_midp_note_alarm_window_t3_ParamLimits

0xa805,	// (0x00025030) popup_midp_note_alarm_window_t3

0xa837,	// (0x00025062) popup_midp_note_alarm_window_t4_ParamLimits

0xa837,	// (0x00025062) popup_midp_note_alarm_window_t4

0xa85d,	// (0x00025088) popup_midp_note_alarm_window_t5_ParamLimits

0xa85d,	// (0x00025088) popup_midp_note_alarm_window_t5

0x000a,

0xf898,	// (0x0002a0c3) popup_midp_note_alarm_window_t_ParamLimits

0xf898,	// (0x0002a0c3) popup_midp_note_alarm_window_t

0xa909,	// (0x00025134) wait_bar_pane_cp1_ParamLimits

0xa909,	// (0x00025134) wait_bar_pane_cp1

0x7f04,	// (0x0002272f) wait_anim_pane_copy1

0x7f04,	// (0x0002272f) wait_border_pane_copy1

0xa2ea,	// (0x00024b15) wait_border_pane_g1_copy1

0x4fc4,	// (0x0001f7ef) form_field_popup_pane_g1

0x4fcc,	// (0x0001f7f7) form_field_popup_pane_t1_ParamLimits

0x883e,	// (0x00023069) input_focus_pane_cp7_ParamLimits

0x886c,	// (0x00023097) list_form_pane_ParamLimits

0x4fe6,	// (0x0001f811) form_field_popup_wide_pane_g1

0x4fee,	// (0x0001f819) form_field_popup_wide_pane_t1_ParamLimits

0x883e,	// (0x00023069) input_focus_pane_cp8_ParamLimits

0x8878,	// (0x000230a3) list_form_wide_pane_ParamLimits

0xb38f,	// (0x00025bba) aid_size_cell_graphic_pane

0x5073,	// (0x0001f89e) data_form_pane_t1_ParamLimits

0x5334,	// (0x0001fb5f) data_form_wide_pane_t1_ParamLimits

0x98b7,	// (0x000240e2) bg_status_flat_pane

0x7f44,	// (0x0002276f) title_pane_t1_ParamLimits

0x7fac,	// (0x000227d7) title_pane_t2_ParamLimits

0x7fd2,	// (0x000227fd) title_pane_t3_ParamLimits

0xf557,	// (0x00029d82) title_pane_t_ParamLimits

0x8e27,	// (0x00023652) level_1_signal_ParamLimits

0x8e34,	// (0x0002365f) level_2_signal_ParamLimits

0x8e41,	// (0x0002366c) level_3_signal_ParamLimits

0x8e4e,	// (0x00023679) level_4_signal_ParamLimits

0x8e5b,	// (0x00023686) level_5_signal_ParamLimits

0x8e68,	// (0x00023693) level_6_signal_ParamLimits

0x8e75,	// (0x000236a0) level_7_signal_ParamLimits

0x8e27,	// (0x00023652) level_1_battery_ParamLimits

0x8e34,	// (0x0002365f) level_2_battery_ParamLimits

0x8e41,	// (0x0002366c) level_3_battery_ParamLimits

0x8e4e,	// (0x00023679) level_4_battery_ParamLimits

0x8e5b,	// (0x00023686) level_5_battery_ParamLimits

0x8e68,	// (0x00023693) level_6_battery_ParamLimits

0x8e75,	// (0x000236a0) level_7_battery_ParamLimits

0xa511,	// (0x00024d3c) bg_status_flat_pane_g1

0xa519,	// (0x00024d44) bg_status_flat_pane_g2

0xa521,	// (0x00024d4c) bg_status_flat_pane_g3

0xa529,	// (0x00024d54) bg_status_flat_pane_g4

0xa531,	// (0x00024d5c) bg_status_flat_pane_g5

0xa539,	// (0x00024d64) bg_status_flat_pane_g6

0xa541,	// (0x00024d6c) bg_status_flat_pane_g7

0x7ffa,	// (0x00022825) tabs_3_active_pane_t1_ParamLimits

0x7ffa,	// (0x00022825) tabs_3_passive_pane_t1_ParamLimits

0x8014,	// (0x0002283f) tabs_4_active_pane_t1_ParamLimits

0x8014,	// (0x0002283f) tabs_4_1_passive_pane_t1_ParamLimits

0x89ed,	// (0x00023218) tabs_2_active_pane_t1_ParamLimits

0x89ed,	// (0x00023218) tabs_2_passive_pane_t1_ParamLimits

0x89ff,	// (0x0002322a) bg_active_tab_pane_cp4_ParamLimits

0x8a0d,	// (0x00023238) tabs_2_long_active_pane_t1_ParamLimits

0x8a20,	// (0x0002324b) bg_passive_tab_pane_cp4_ParamLimits

0x6be5,	// (0x00021410) list_single_midp_graphic_pane_t1_ParamLimits

0x89ff,	// (0x0002322a) bg_active_tab_pane_cp5_ParamLimits

0x8a2c,	// (0x00023257) tabs_3_long_active_pane_t1_ParamLimits

0x8a20,	// (0x0002324b) bg_passive_tab_pane_cp5_ParamLimits

0x6be5,	// (0x00021410) list_single_midp_graphic_pane_t1

0x98b7,	// (0x000240e2) bg_status_flat_pane_ParamLimits

0x997a,	// (0x000241a5) indicator_pane_cp2_ParamLimits

0x997a,	// (0x000241a5) indicator_pane_cp2

0x9aa5,	// (0x000242d0) navi_pane_srt_ParamLimits

0x9aa5,	// (0x000242d0) navi_pane_srt

0x9ac9,	// (0x000242f4) popup_clock_digital_analogue_window_cp1

0x80c1,	// (0x000228ec) indicator_pane_t1

0x94aa,	// (0x00023cd5) copy_highlight_pane

0x94aa,	// (0x00023cd5) cursor_graphics_pane

0x94aa,	// (0x00023cd5) graphic_within_text_pane

0x94aa,	// (0x00023cd5) link_highlight_pane

0xad20,	// (0x0002554b) popup_preview_text_window_t5_ParamLimits

0xad20,	// (0x0002554b) popup_preview_text_window_t5

0x95d0,	// (0x00023dfb) cursor_digital_pane

0x95d0,	// (0x00023dfb) cursor_primary_pane

0x95e1,	// (0x00023e0c) cursor_primary_small_pane

0x95e9,	// (0x00023e14) cursor_secondary_pane

0x95f1,	// (0x00023e1c) cursor_title_pane

0x95d0,	// (0x00023dfb) link_highlight_digital_pane

0x95d8,	// (0x00023e03) link_highlight_primary_pane

0x95e1,	// (0x00023e0c) link_highlight_primary_small_pane

0x95e9,	// (0x00023e14) link_highlight_secondary_pane

0x95f1,	// (0x00023e1c) link_highlight_title_pane

0x95d0,	// (0x00023dfb) copy_highlight_digital_pane

0x95d0,	// (0x00023dfb) copy_highlight_primary_pane

0x95e1,	// (0x00023e0c) copy_highlight_primary_small_pane

0x95e9,	// (0x00023e14) copy_highlight_secondary_pane

0x95f1,	// (0x00023e1c) copy_highlight_title_pane

0x95e9,	// (0x00023e14) graphic_text_digital_pane

0xa5af,	// (0x00024dda) graphic_text_primary_pane

0xa5b8,	// (0x00024de3) graphic_text_primary_small_pane

0x95e1,	// (0x00023e0c) graphic_text_secondary_pane

0x95d0,	// (0x00023dfb) graphic_text_title_pane

0x95f9,	// (0x00023e24) cursor_primary_pane_g1

0xa5a1,	// (0x00024dcc) cursor_text_primary_t1

0xa589,	// (0x00024db4) cursor_primary_small_pane_g1

0xa593,	// (0x00024dbe) cursor_text_primary_small_t1

0xa571,	// (0x00024d9c) cursor_primary_small_pane_g1_copy1

0xa57b,	// (0x00024da6) cursor_text_primary_small_t1_copy1

0xa559,	// (0x00024d84) cursor_text_title_t1

0xa567,	// (0x00024d92) cursor_title_pane_g1

0x95f9,	// (0x00023e24) cursor_digital_pane_g1

0x9603,	// (0x00023e2e) cursor_text_digital_t1

0xa4fa,	// (0x00024d25) link_highlight_primary_pane_g1

0xa502,	// (0x00024d2d) link_highlight_primary_pane_t1

0x9611,	// (0x00023e3c) link_highlight_primary_small_pane_g1

0x9619,	// (0x00023e44) link_highlight_primary_small_pane_t1

0x9611,	// (0x00023e3c) link_highlight_secondary_pane_g1

0x9628,	// (0x00023e53) link_highlight_secondary_pane_t1

0xa46e,	// (0x00024c99) link_highlight_title_pane_g1

0xa476,	// (0x00024ca1) link_highlight_title_pane_t1

0xa457,	// (0x00024c82) link_highlight_digital_pane_g1

0xa45f,	// (0x00024c8a) link_highlight_digital_pane_t1

0xa32f,	// (0x00024b5a) copy_highlight_primary_pane_g1

0xa337,	// (0x00024b62) copy_highlight_primary_pane_t1

0xa309,	// (0x00024b34) copy_highlight_primary_small_pane_g1

0xa320,	// (0x00024b4b) copy_highlight_primary_small_pane_t1

0x9637,	// (0x00023e62) copy_highlight_secondary_pane_g1

0x963f,	// (0x00023e6a) copy_highlight_secondary_pane_t1

0xa309,	// (0x00024b34) copy_highlight_title_pane_g1

0xa311,	// (0x00024b3c) copy_highlight_title_pane_t1

0xa32f,	// (0x00024b5a) copy_highlight_digital_pane_g1

0xb559,	// (0x00025d84) copy_highlight_digital_pane_t1

0xb4ad,	// (0x00025cd8) graphic_text_primary_pane_g1

0xb53d,	// (0x00025d68) graphic_text_primary_pane_t1

0xb54b,	// (0x00025d76) graphic_text_primary_pane_t2

0x0001,

0xf9c7,	// (0x0002a1f2) graphic_text_primary_pane_t

0xb519,	// (0x00025d44) graphic_text_primary_small_pane_g1

0xb521,	// (0x00025d4c) graphic_text_primary_small_pane_t1

0xb52f,	// (0x00025d5a) graphic_text_primary_small_pane_t2

0x0001,

0xf9c2,	// (0x0002a1ed) graphic_text_primary_small_pane_t

0xb4f5,	// (0x00025d20) graphic_text_secondary_pane_g1

0xb4fd,	// (0x00025d28) graphic_text_secondary_pane_t1

0xb50b,	// (0x00025d36) graphic_text_secondary_pane_t2

0x0001,

0xf9bd,	// (0x0002a1e8) graphic_text_secondary_pane_t

0xb4d1,	// (0x00025cfc) graphic_text_title_pane_g1

0xb4d9,	// (0x00025d04) graphic_text_title_pane_t1

0xb4e7,	// (0x00025d12) graphic_text_title_pane_t2

0x0001,

0xf9b8,	// (0x0002a1e3) graphic_text_title_pane_t

0xb4ad,	// (0x00025cd8) graphic_text_digital_pane_g1

0xb4b5,	// (0x00025ce0) graphic_text_digital_pane_t1

0xb4c3,	// (0x00025cee) graphic_text_digital_pane_t2

0x0001,

0xf9b3,	// (0x0002a1de) graphic_text_digital_pane_t

0x7fe4,	// (0x0002280f) navi_icon_pane_srt_ParamLimits

0x7fe4,	// (0x0002280f) navi_icon_pane_srt

0x7f04,	// (0x0002272f) navi_midp_pane_srt

0x7f04,	// (0x0002272f) navi_navi_pane_srt

0x7fe4,	// (0x0002280f) navi_text_pane_srt_ParamLimits

0x7fe4,	// (0x0002280f) navi_text_pane_srt

0xb478,	// (0x00025ca3) navi_navi_icon_text_pane_srt

0xb480,	// (0x00025cab) navi_navi_pane_srt_g1_ParamLimits

0xb480,	// (0x00025cab) navi_navi_pane_srt_g1

0xb492,	// (0x00025cbd) navi_navi_pane_srt_g2_ParamLimits

0xb492,	// (0x00025cbd) navi_navi_pane_srt_g2

0x0001,

0xf9ae,	// (0x0002a1d9) navi_navi_pane_srt_g_ParamLimits

0xf9ae,	// (0x0002a1d9) navi_navi_pane_srt_g

0xb4a4,	// (0x00025ccf) navi_navi_tabs_pane_srt

0xb478,	// (0x00025ca3) navi_navi_text_pane_srt

0xb478,	// (0x00025ca3) navi_navi_volume_pane_srt

0xb469,	// (0x00025c94) navi_navi_text_pane_srt_t1

0x6f59,	// (0x00021784) navi_navi_volume_pane_srt_g1

0x6f61,	// (0x0002178c) volume_small_pane_srt_ParamLimits

0x6f61,	// (0x0002178c) volume_small_pane_srt

0x63c6,	// (0x00020bf1) volume_small_pane_srt_g1_ParamLimits

0x63c6,	// (0x00020bf1) volume_small_pane_srt_g1

0x63d6,	// (0x00020c01) volume_small_pane_srt_g2_ParamLimits

0x63d6,	// (0x00020c01) volume_small_pane_srt_g2

0x63e7,	// (0x00020c12) volume_small_pane_srt_g3_ParamLimits

0x63e7,	// (0x00020c12) volume_small_pane_srt_g3

0x63f8,	// (0x00020c23) volume_small_pane_srt_g4_ParamLimits

0x63f8,	// (0x00020c23) volume_small_pane_srt_g4

0x6409,	// (0x00020c34) volume_small_pane_srt_g5_ParamLimits

0x6409,	// (0x00020c34) volume_small_pane_srt_g5

0x641a,	// (0x00020c45) volume_small_pane_srt_g6_ParamLimits

0x641a,	// (0x00020c45) volume_small_pane_srt_g6

0x642b,	// (0x00020c56) volume_small_pane_srt_g7_ParamLimits

0x642b,	// (0x00020c56) volume_small_pane_srt_g7

0x643c,	// (0x00020c67) volume_small_pane_srt_g8_ParamLimits

0x643c,	// (0x00020c67) volume_small_pane_srt_g8

0x644d,	// (0x00020c78) volume_small_pane_srt_g9_ParamLimits

0x644d,	// (0x00020c78) volume_small_pane_srt_g9

0x645e,	// (0x00020c89) volume_small_pane_srt_g10_ParamLimits

0x645e,	// (0x00020c89) volume_small_pane_srt_g10

0x0009,

0xf75d,	// (0x00029f88) volume_small_pane_srt_g_ParamLimits

0xf75d,	// (0x00029f88) volume_small_pane_srt_g

0x83b2,	// (0x00022bdd) query_popup_data_pane_cp2

0xb44f,	// (0x00025c7a) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb44f,	// (0x00025c7a) navi_navi_icon_text_pane_srt_t1

0xa5af,	// (0x00024dda) navi_tabs_2_long_pane_srt

0xa5af,	// (0x00024dda) navi_tabs_2_pane_srt

0xa5af,	// (0x00024dda) navi_tabs_3_long_pane_srt

0xa5af,	// (0x00024dda) navi_tabs_3_pane_srt

0xa5af,	// (0x00024dda) navi_tabs_4_pane_srt

0x6f39,	// (0x00021764) tabs_2_active_pane_srt_ParamLimits

0x6f39,	// (0x00021764) tabs_2_active_pane_srt

0x6f49,	// (0x00021774) tabs_2_passive_pane_srt_ParamLimits

0x6f49,	// (0x00021774) tabs_2_passive_pane_srt

0x97e4,	// (0x0002400f) bg_passive_tab_pane_cp1_srt_ParamLimits

0x97e4,	// (0x0002400f) bg_passive_tab_pane_cp1_srt

0xb41b,	// (0x00025c46) bg_passive_tab_pane_g1_cp1_srt

0x90fb,	// (0x00023926) bg_passive_tab_pane_g2_cp1_srt

0xb424,	// (0x00025c4f) bg_passive_tab_pane_g3_cp1_srt

0x7fe4,	// (0x0002280f) bg_active_tab_pane_cp1_srt_ParamLimits

0x7fe4,	// (0x0002280f) bg_active_tab_pane_cp1_srt

0xb42d,	// (0x00025c58) tabs_2_active_pane_srt_g1

0xb435,	// (0x00025c60) tabs_2_active_pane_srt_t1_ParamLimits

0xb435,	// (0x00025c60) tabs_2_active_pane_srt_t1

0xb41b,	// (0x00025c46) bg_active_tab_pane_g1_cp1_srt

0x90fb,	// (0x00023926) bg_active_tab_pane_g2_cp1_srt

0xb424,	// (0x00025c4f) bg_active_tab_pane_g3_cp1_srt

0x6f06,	// (0x00021731) tabs_3_active_pane_srt_ParamLimits

0x6f06,	// (0x00021731) tabs_3_active_pane_srt

0x6f17,	// (0x00021742) tabs_3_passive_pane_cp_srt_ParamLimits

0x6f17,	// (0x00021742) tabs_3_passive_pane_cp_srt

0x6f28,	// (0x00021753) tabs_3_passive_pane_srt_ParamLimits

0x6f28,	// (0x00021753) tabs_3_passive_pane_srt

0x97e4,	// (0x0002400f) bg_passive_tab_pane_cp2_srt_ParamLimits

0x97e4,	// (0x0002400f) bg_passive_tab_pane_cp2_srt

0x964e,	// (0x00023e79) bg_passive_tab_pane_g1_cp2_srt

0x90fb,	// (0x00023926) bg_passive_tab_pane_g2_cp2_srt

0x9657,	// (0x00023e82) bg_passive_tab_pane_g3_cp2_srt

0x7fe4,	// (0x0002280f) bg_active_tab_pane_cp2_srt_ParamLimits

0x7fe4,	// (0x0002280f) bg_active_tab_pane_cp2_srt

0xb401,	// (0x00025c2c) tabs_3_active_pane_srt_g1

0xb409,	// (0x00025c34) tabs_3_active_pane_srt_t1_ParamLimits

0xb409,	// (0x00025c34) tabs_3_active_pane_srt_t1

0x964e,	// (0x00023e79) bg_active_tab_pane_g1_cp2_srt

0x90fb,	// (0x00023926) bg_active_tab_pane_g2_cp2_srt

0x9657,	// (0x00023e82) bg_active_tab_pane_g3_cp2_srt

0x6ebe,	// (0x000216e9) tabs_4_active_pane_srt_ParamLimits

0x6ebe,	// (0x000216e9) tabs_4_active_pane_srt

0x6ed0,	// (0x000216fb) tabs_4_passive_pane_cp2_srt_ParamLimits

0x6ed0,	// (0x000216fb) tabs_4_passive_pane_cp2_srt

0x65c1,	// (0x00020dec) aid_size_cell_toolbar

0x8a20,	// (0x0002324b) main_idle_act_pane_ParamLimits

0x675a,	// (0x00020f85) popup_large_graphic_colour_window_ParamLimits

0x6abf,	// (0x000212ea) popup_toolbar_window_ParamLimits

0x6abf,	// (0x000212ea) popup_toolbar_window

0xb275,	// (0x00025aa0) list_single_graphic_2heading_pane_ParamLimits

0xb275,	// (0x00025aa0) list_single_graphic_2heading_pane

0x8bd9,	// (0x00023404) aid_size_cell_apps_grid_lsc_pane

0x8beb,	// (0x00023416) aid_size_cell_apps_grid_prt_pane

0x97e4,	// (0x0002400f) bg_wml_button_pane_cp1_ParamLimits

0x97e4,	// (0x0002400f) bg_wml_button_pane_cp1

0x9f9e,	// (0x000247c9) form_midp_field_text_pane_t1_ParamLimits

0x9d56,	// (0x00024581) input_focus_pane_cp050_ParamLimits

0x9fd9,	// (0x00024804) list_midp_form_text_pane_ParamLimits

0x9f7b,	// (0x000247a6) input_focus_pane_cp051_ParamLimits

0x9f8f,	// (0x000247ba) list_midp_choice_pane_ParamLimits

0x9e0c,	// (0x00024637) list_single_2graphic_pane_cp3_ParamLimits

0x9e0c,	// (0x00024637) list_single_2graphic_pane_cp3

0x9e37,	// (0x00024662) list_single_midp_graphic_pane_ParamLimits

0x9e37,	// (0x00024662) list_single_midp_graphic_pane

0x51b9,	// (0x0001f9e4) list_single_graphic_2heading_pane_g1_ParamLimits

0x51b9,	// (0x0001f9e4) list_single_graphic_2heading_pane_g1

0x4aef,	// (0x0001f31a) list_single_graphic_2heading_pane_g4_ParamLimits

0x4aef,	// (0x0001f31a) list_single_graphic_2heading_pane_g4

0x4afb,	// (0x0001f326) list_single_graphic_2heading_pane_g5_ParamLimits

0x4afb,	// (0x0001f326) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b0,	// (0x00029fdb) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b0,	// (0x00029fdb) list_single_graphic_2heading_pane_g

0x51c5,	// (0x0001f9f0) list_single_graphic_2heading_pane_t1_ParamLimits

0x51c5,	// (0x0001f9f0) list_single_graphic_2heading_pane_t1

0x51d9,	// (0x0001fa04) list_single_graphic_2heading_pane_t2_ParamLimits

0x51d9,	// (0x0001fa04) list_single_graphic_2heading_pane_t2

0x51f3,	// (0x0001fa1e) list_single_graphic_2heading_pane_t3_ParamLimits

0x51f3,	// (0x0001fa1e) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b7,	// (0x00029fe2) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b7,	// (0x00029fe2) list_single_graphic_2heading_pane_t

0x9c20,	// (0x0002444b) bg_popup_sub_pane_cp2

0x9c4a,	// (0x00024475) grid_toobar_pane

0x6b6a,	// (0x00021395) cell_toolbar_pane_ParamLimits

0x6b6a,	// (0x00021395) cell_toolbar_pane

0x9c86,	// (0x000244b1) cell_toolbar_pane_g1_ParamLimits

0x9c86,	// (0x000244b1) cell_toolbar_pane_g1

0x9c9a,	// (0x000244c5) cell_toolbar_pane_g2_ParamLimits

0x9c9a,	// (0x000244c5) cell_toolbar_pane_g2

0x0001,

0xf7be,	// (0x00029fe9) cell_toolbar_pane_g_ParamLimits

0xf7be,	// (0x00029fe9) cell_toolbar_pane_g

0x9cbc,	// (0x000244e7) grid_highlight_pane_cp2_ParamLimits

0x9cbc,	// (0x000244e7) grid_highlight_pane_cp2

0x9cd6,	// (0x00024501) toolbar_button_pane

0x9ce2,	// (0x0002450d) toolbar_button_pane_g1

0x9cea,	// (0x00024515) toolbar_button_pane_g2

0x9cf2,	// (0x0002451d) toolbar_button_pane_g3

0x9cfa,	// (0x00024525) toolbar_button_pane_g4

0x9d02,	// (0x0002452d) toolbar_button_pane_g5

0x9d0a,	// (0x00024535) toolbar_button_pane_g6

0x9d12,	// (0x0002453d) toolbar_button_pane_g7

0x9d1a,	// (0x00024545) toolbar_button_pane_g8

0x9d22,	// (0x0002454d) toolbar_button_pane_g9

0x0009,

0xf7c3,	// (0x00029fee) toolbar_button_pane_g

0x6ba2,	// (0x000213cd) list_single_2graphic_pane_g1_cp3_ParamLimits

0x6ba2,	// (0x000213cd) list_single_2graphic_pane_g1_cp3

0x6bae,	// (0x000213d9) list_single_2graphic_pane_g2_cp3_ParamLimits

0x6bae,	// (0x000213d9) list_single_2graphic_pane_g2_cp3

0x92e6,	// (0x00023b11) list_single_2graphic_pane_g3_cp3

0x6bbf,	// (0x000213ea) list_single_2graphic_pane_g4_cp3_ParamLimits

0x6bbf,	// (0x000213ea) list_single_2graphic_pane_g4_cp3

0x6bcb,	// (0x000213f6) list_single_2graphic_pane_t1_cp3_ParamLimits

0x6bcb,	// (0x000213f6) list_single_2graphic_pane_t1_cp3

0x92da,	// (0x00023b05) list_single_midp_graphic_pane_g2_ParamLimits

0x92da,	// (0x00023b05) list_single_midp_graphic_pane_g2

0x65c9,	// (0x00020df4) aid_zoom_text_primary

0x518d,	// (0x0001f9b8) aid_zoom_text_secondary

0x9708,	// (0x00023f33) status_small_pane_g7_ParamLimits

0x9708,	// (0x00023f33) status_small_pane_g7

0x972b,	// (0x00023f56) status_small_pane_t1_ParamLimits

0x7f1b,	// (0x00022746) title_pane_g2

0x0003,

0xf54e,	// (0x00029d79) title_pane_g

0x8456,	// (0x00022c81) aid_size_cell_colour_1_pane_ParamLimits

0x8456,	// (0x00022c81) aid_size_cell_colour_1_pane

0x846a,	// (0x00022c95) aid_size_cell_colour_2_pane_ParamLimits

0x846a,	// (0x00022c95) aid_size_cell_colour_2_pane

0x847e,	// (0x00022ca9) aid_size_cell_colour_3_pane_ParamLimits

0x847e,	// (0x00022ca9) aid_size_cell_colour_3_pane

0x8492,	// (0x00022cbd) aid_size_cell_colour_4_pane_ParamLimits

0x8492,	// (0x00022cbd) aid_size_cell_colour_4_pane

0x602b,	// (0x00020856) title_pane_stacon_g1_ParamLimits

0x602b,	// (0x00020856) title_pane_stacon_g1

0xa38e,	// (0x00024bb9) popup_note_wait_window_g3_ParamLimits

0xa38e,	// (0x00024bb9) popup_note_wait_window_g3

0xa404,	// (0x00024c2f) popup_note_wait_window_t5_ParamLimits

0xa404,	// (0x00024c2f) popup_note_wait_window_t5

0x7f04,	// (0x0002272f) main_feb_china_hwr_fs_writing_pane

0x6643,	// (0x00020e6e) popup_feb_china_hwr_fs_window_ParamLimits

0x6643,	// (0x00020e6e) popup_feb_china_hwr_fs_window

0x6bfb,	// (0x00021426) aid_size_cell_hwr_fs_ParamLimits

0x6bfb,	// (0x00021426) aid_size_cell_hwr_fs

0x9d56,	// (0x00024581) bg_popup_sub_pane_cp3_ParamLimits

0x9d56,	// (0x00024581) bg_popup_sub_pane_cp3

0x6c10,	// (0x0002143b) grid_hwr_fs_pane_ParamLimits

0x6c10,	// (0x0002143b) grid_hwr_fs_pane

0x6c28,	// (0x00021453) linegrid_hwr_fs_pane_ParamLimits

0x6c28,	// (0x00021453) linegrid_hwr_fs_pane

0x6c38,	// (0x00021463) cell_hwr_fs_pane_ParamLimits

0x6c38,	// (0x00021463) cell_hwr_fs_pane

0x9d62,	// (0x0002458d) linegrid_hwr_fs_pane_g1_ParamLimits

0x9d62,	// (0x0002458d) linegrid_hwr_fs_pane_g1

0x9d6e,	// (0x00024599) linegrid_hwr_fs_pane_g2_ParamLimits

0x9d6e,	// (0x00024599) linegrid_hwr_fs_pane_g2

0x9d80,	// (0x000245ab) linegrid_hwr_fs_pane_g3_ParamLimits

0x9d80,	// (0x000245ab) linegrid_hwr_fs_pane_g3

0x6c5a,	// (0x00021485) linegrid_hwr_fs_pane_g4_ParamLimits

0x6c5a,	// (0x00021485) linegrid_hwr_fs_pane_g4

0x6c74,	// (0x0002149f) linegrid_hwr_fs_pane_g5_ParamLimits

0x6c74,	// (0x0002149f) linegrid_hwr_fs_pane_g5

0x0004,

0xf7ee,	// (0x0002a019) linegrid_hwr_fs_pane_g_ParamLimits

0xf7ee,	// (0x0002a019) linegrid_hwr_fs_pane_g

0x9d8c,	// (0x000245b7) cell_hwr_fs_pane_g1_ParamLimits

0x9d8c,	// (0x000245b7) cell_hwr_fs_pane_g1

0x9b57,	// (0x00024382) cell_hwr_fs_pane_g2_ParamLimits

0x9b57,	// (0x00024382) cell_hwr_fs_pane_g2

0x9da2,	// (0x000245cd) cell_hwr_fs_pane_g3_ParamLimits

0x9da2,	// (0x000245cd) cell_hwr_fs_pane_g3

0x9daf,	// (0x000245da) cell_hwr_fs_pane_g4_ParamLimits

0x9daf,	// (0x000245da) cell_hwr_fs_pane_g4

0x0003,

0xf7f9,	// (0x0002a024) cell_hwr_fs_pane_g_ParamLimits

0xf7f9,	// (0x0002a024) cell_hwr_fs_pane_g

0x6c8a,	// (0x000214b5) cell_hwr_fs_pane_t1

0x7f04,	// (0x0002272f) grid_highlight_pane_cp6

0x7f04,	// (0x0002272f) main_idle_act2_pane

0x8993,	// (0x000231be) aid_inside_area_popup_secondary

0xaa43,	// (0x0002526e) aid_inside_area_window_primary_ParamLimits

0xaa43,	// (0x0002526e) aid_inside_area_window_primary

0xb568,	// (0x00025d93) ai2_news_ticker_pane

0xb570,	// (0x00025d9b) aid_size_cell_ai1_link_ParamLimits

0xb570,	// (0x00025d9b) aid_size_cell_ai1_link

0xb58a,	// (0x00025db5) popup_ai2_data_window_ParamLimits

0xb58a,	// (0x00025db5) popup_ai2_data_window

0xb59e,	// (0x00025dc9) popup_ai2_link_window_ParamLimits

0xb59e,	// (0x00025dc9) popup_ai2_link_window

0x9d56,	// (0x00024581) bg_popup_sub_pane_cp4_ParamLimits

0x9d56,	// (0x00024581) bg_popup_sub_pane_cp4

0xb5b2,	// (0x00025ddd) grid_ai2_link_pane_ParamLimits

0xb5b2,	// (0x00025ddd) grid_ai2_link_pane

0xb5c9,	// (0x00025df4) popup_ai2_link_window_g1_ParamLimits

0xb5c9,	// (0x00025df4) popup_ai2_link_window_g1

0xb5d5,	// (0x00025e00) popup_ai2_link_window_g2_ParamLimits

0xb5d5,	// (0x00025e00) popup_ai2_link_window_g2

0x0001,

0xf9cc,	// (0x0002a1f7) popup_ai2_link_window_g_ParamLimits

0xf9cc,	// (0x0002a1f7) popup_ai2_link_window_g

0xb5e4,	// (0x00025e0f) ai2_mp_button_pane

0xb5ec,	// (0x00025e17) ai2_mp_volume_pane

0x9f7b,	// (0x000247a6) bg_popup_sub_pane_cp5_ParamLimits

0x9f7b,	// (0x000247a6) bg_popup_sub_pane_cp5

0xb5f4,	// (0x00025e1f) heading_ai2_gene_pane_ParamLimits

0xb5f4,	// (0x00025e1f) heading_ai2_gene_pane

0xb600,	// (0x00025e2b) list_ai2_gene_pane_ParamLimits

0xb600,	// (0x00025e2b) list_ai2_gene_pane

0xb648,	// (0x00025e73) cell_ai2_link_pane_ParamLimits

0xb648,	// (0x00025e73) cell_ai2_link_pane

0xb65e,	// (0x00025e89) cell_ai2_link_pane_g1

0x7f04,	// (0x0002272f) grid_highlight_pane_cp7

0x6f76,	// (0x000217a1) ai2_mp_volume_pane_g1

0xb72f,	// (0x00025f5a) ai2_mp_volume_pane_g2

0xb6a4,	// (0x00025ecf) list_ai2_gene_pane_t1

0xb737,	// (0x00025f62) ai2_mp_volume_pane_g3

0x0002,

0xf9e5,	// (0x0002a210) ai2_mp_volume_pane_g

0x6f7e,	// (0x000217a9) volume_small_pane_cp3

0xb73f,	// (0x00025f6a) aid_size_cell_ai2_button

0xb747,	// (0x00025f72) grid_ai2_button_pane

0xb750,	// (0x00025f7b) cell_ai2_button_pane_ParamLimits

0xb750,	// (0x00025f7b) cell_ai2_button_pane

0x7efa,	// (0x00022725) cell_ai2_button_pane_g1

0x7f04,	// (0x0002272f) grid_highlight_pane_cp8

0xb6ef,	// (0x00025f1a) ai2_gene_pane_t1_ParamLimits

0xb6ef,	// (0x00025f1a) ai2_gene_pane_t1

0x65b7,	// (0x00020de2) aid_height_parent_landscape

0xb0b4,	// (0x000258df) aid_height_set_list

0xb0c5,	// (0x000258f0) aid_size_parent

0xb38f,	// (0x00025bba) aid_size_cell_graphic_pane_ParamLimits

0xb610,	// (0x00025e3b) popup_ai2_data_window_g1_ParamLimits

0xb610,	// (0x00025e3b) popup_ai2_data_window_g1

0xb61c,	// (0x00025e47) ai2_news_ticker_pane_g1

0xb624,	// (0x00025e4f) ai2_news_ticker_pane_g2

0x0001,

0xf9d1,	// (0x0002a1fc) ai2_news_ticker_pane_g

0xb62c,	// (0x00025e57) ai2_news_ticker_pane_t1

0xb63a,	// (0x00025e65) ai2_news_ticker_pane_t2

0x0001,

0xf9d6,	// (0x0002a201) ai2_news_ticker_pane_t

0xb667,	// (0x00025e92) heading_ai2_gene_pane_g1

0xb66f,	// (0x00025e9a) heading_ai2_gene_pane_t1_ParamLimits

0xb66f,	// (0x00025e9a) heading_ai2_gene_pane_t1

0xb684,	// (0x00025eaf) list_highlight_pane_cp6

0xb68c,	// (0x00025eb7) ai2_gene_pane_ParamLimits

0xb68c,	// (0x00025eb7) ai2_gene_pane

0xb6b2,	// (0x00025edd) list_ai2_gene_pane_t2

0x0001,

0xf9db,	// (0x0002a206) list_ai2_gene_pane_t

0xb6c0,	// (0x00025eeb) list_highlight_pane_cp8_ParamLimits

0xb6c0,	// (0x00025eeb) list_highlight_pane_cp8

0xb6d1,	// (0x00025efc) ai2_gene_pane_g1_ParamLimits

0xb6d1,	// (0x00025efc) ai2_gene_pane_g1

0xb6e3,	// (0x00025f0e) ai2_gene_pane_g2_ParamLimits

0xb6e3,	// (0x00025f0e) ai2_gene_pane_g2

0x0001,

0xf9e0,	// (0x0002a20b) ai2_gene_pane_g_ParamLimits

0xf9e0,	// (0x0002a20b) ai2_gene_pane_g

0x87d4,	// (0x00022fff) scroll_pane_cp12

0x6576,	// (0x00020da1) control_pane_t3_ParamLimits

0x6576,	// (0x00020da1) control_pane_t3

0x971c,	// (0x00023f47) status_small_pane_g8_ParamLimits

0x971c,	// (0x00023f47) status_small_pane_g8

0x6725,	// (0x00020f50) popup_find_window_ParamLimits

0x693a,	// (0x00021165) popup_note_image_window_ParamLimits

0x51b9,	// (0x0001f9e4) list_double2_graphic_pane_vc_g1_ParamLimits

0x51b9,	// (0x0001f9e4) list_double2_graphic_pane_vc_g1

0x4aef,	// (0x0001f31a) list_double2_graphic_pane_vc_g2_ParamLimits

0x4aef,	// (0x0001f31a) list_double2_graphic_pane_vc_g2

0x4afb,	// (0x0001f326) list_double2_graphic_pane_vc_g3_ParamLimits

0x4afb,	// (0x0001f326) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b0,	// (0x00029fdb) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b0,	// (0x00029fdb) list_double2_graphic_pane_vc_g

0x520b,	// (0x0001fa36) list_double2_graphic_pane_vc_t1_ParamLimits

0x520b,	// (0x0001fa36) list_double2_graphic_pane_vc_t1

0x4aef,	// (0x0001f31a) list_single_heading_pane_vc_g1_ParamLimits

0x4aef,	// (0x0001f31a) list_single_heading_pane_vc_g1

0x4afb,	// (0x0001f326) list_single_heading_pane_vc_g2_ParamLimits

0x4afb,	// (0x0001f326) list_single_heading_pane_vc_g2

0x0001,

0xf7d8,	// (0x0002a003) list_single_heading_pane_vc_g_ParamLimits

0xf7d8,	// (0x0002a003) list_single_heading_pane_vc_g

0x5221,	// (0x0001fa4c) list_single_heading_pane_vc_t1_ParamLimits

0x5221,	// (0x0001fa4c) list_single_heading_pane_vc_t1

0x5237,	// (0x0001fa62) list_single_heading_pane_vc_t2_ParamLimits

0x5237,	// (0x0001fa62) list_single_heading_pane_vc_t2

0x0001,

0xf7dd,	// (0x0002a008) list_single_heading_pane_vc_t_ParamLimits

0xf7dd,	// (0x0002a008) list_single_heading_pane_vc_t

0x5253,	// (0x0001fa7e) list_setting_number_pane_vc_g1_ParamLimits

0x5253,	// (0x0001fa7e) list_setting_number_pane_vc_g1

0x525f,	// (0x0001fa8a) list_setting_number_pane_vc_g2_ParamLimits

0x525f,	// (0x0001fa8a) list_setting_number_pane_vc_g2

0x0001,

0xf7e2,	// (0x0002a00d) list_setting_number_pane_vc_g_ParamLimits

0xf7e2,	// (0x0002a00d) list_setting_number_pane_vc_g

0x526b,	// (0x0001fa96) list_setting_number_pane_vc_t1_ParamLimits

0x526b,	// (0x0001fa96) list_setting_number_pane_vc_t1

0x527f,	// (0x0001faaa) list_setting_number_pane_vc_t2_ParamLimits

0x527f,	// (0x0001faaa) list_setting_number_pane_vc_t2

0x5299,	// (0x0001fac4) list_setting_number_pane_vc_t3_ParamLimits

0x5299,	// (0x0001fac4) list_setting_number_pane_vc_t3

0x0002,

0xf7e7,	// (0x0002a012) list_setting_number_pane_vc_t_ParamLimits

0xf7e7,	// (0x0002a012) list_setting_number_pane_vc_t

0x52b3,	// (0x0001fade) set_value_pane_vc_ParamLimits

0x52b3,	// (0x0001fade) set_value_pane_vc

0xb275,	// (0x00025aa0) list_double2_graphic_pane_vc_ParamLimits

0xb275,	// (0x00025aa0) list_double2_graphic_pane_vc

0xb275,	// (0x00025aa0) list_double2_large_graphic_pane_vc_ParamLimits

0xb275,	// (0x00025aa0) list_double2_large_graphic_pane_vc

0xb275,	// (0x00025aa0) list_double2_pane_vc_ParamLimits

0xb275,	// (0x00025aa0) list_double2_pane_vc

0xb275,	// (0x00025aa0) list_double_graphic_heading_pane_vc_ParamLimits

0xb275,	// (0x00025aa0) list_double_graphic_heading_pane_vc

0xb275,	// (0x00025aa0) list_double_graphic_pane_vc_ParamLimits

0xb275,	// (0x00025aa0) list_double_graphic_pane_vc

0xb275,	// (0x00025aa0) list_double_heading_pane_vc_ParamLimits

0xb275,	// (0x00025aa0) list_double_heading_pane_vc

0x5397,	// (0x0001fbc2) list_double_large_graphic_pane_vc_ParamLimits

0x5397,	// (0x0001fbc2) list_double_large_graphic_pane_vc

0xb275,	// (0x00025aa0) list_double_number_pane_vc_ParamLimits

0xb275,	// (0x00025aa0) list_double_number_pane_vc

0xb275,	// (0x00025aa0) list_double_pane_vc_ParamLimits

0xb275,	// (0x00025aa0) list_double_pane_vc

0xb275,	// (0x00025aa0) list_double_time_pane_vc_ParamLimits

0xb275,	// (0x00025aa0) list_double_time_pane_vc

0xb275,	// (0x00025aa0) list_setting_number_pane_vc_ParamLimits

0xb275,	// (0x00025aa0) list_setting_number_pane_vc

0xb275,	// (0x00025aa0) list_setting_pane_vc_ParamLimits

0xb275,	// (0x00025aa0) list_setting_pane_vc

0xb275,	// (0x00025aa0) list_single_graphic_heading_pane_vc_ParamLimits

0xb275,	// (0x00025aa0) list_single_graphic_heading_pane_vc

0xb275,	// (0x00025aa0) list_single_heading_pane_vc_ParamLimits

0xb275,	// (0x00025aa0) list_single_heading_pane_vc

0x53b7,	// (0x0001fbe2) list_single_number_heading_pane_vc_ParamLimits

0x53b7,	// (0x0001fbe2) list_single_number_heading_pane_vc

0x5489,	// (0x0001fcb4) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x5489,	// (0x0001fcb4) list_double_graphic_heading_pane_vc_g1

0x4aef,	// (0x0001f31a) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x4aef,	// (0x0001f31a) list_double_graphic_heading_pane_vc_g2

0x4afb,	// (0x0001f326) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x4afb,	// (0x0001f326) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ec,	// (0x0002a217) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ec,	// (0x0002a217) list_double_graphic_heading_pane_vc_g

0x5495,	// (0x0001fcc0) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x5495,	// (0x0001fcc0) list_double_graphic_heading_pane_vc_t1

0x54b1,	// (0x0001fcdc) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x54b1,	// (0x0001fcdc) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f3,	// (0x0002a21e) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f3,	// (0x0002a21e) list_double_graphic_heading_pane_vc_t

0x5253,	// (0x0001fa7e) list_setting_pane_vc_g1_ParamLimits

0x5253,	// (0x0001fa7e) list_setting_pane_vc_g1

0x525f,	// (0x0001fa8a) list_setting_pane_vc_g2_ParamLimits

0x525f,	// (0x0001fa8a) list_setting_pane_vc_g2

0x0001,

0xf7e2,	// (0x0002a00d) list_setting_pane_vc_g_ParamLimits

0xf7e2,	// (0x0002a00d) list_setting_pane_vc_g

0x54c9,	// (0x0001fcf4) list_setting_pane_vc_t1_ParamLimits

0x54c9,	// (0x0001fcf4) list_setting_pane_vc_t1

0x54e3,	// (0x0001fd0e) list_setting_pane_vc_t2_ParamLimits

0x54e3,	// (0x0001fd0e) list_setting_pane_vc_t2

0x0001,

0xfa36,	// (0x0002a261) list_setting_pane_vc_t_ParamLimits

0xfa36,	// (0x0002a261) list_setting_pane_vc_t

0x52b3,	// (0x0001fade) set_value_pane_cp_vc_ParamLimits

0x52b3,	// (0x0001fade) set_value_pane_cp_vc

0x4aef,	// (0x0001f31a) list_single_number_heading_pane_vc_g1_ParamLimits

0x4aef,	// (0x0001f31a) list_single_number_heading_pane_vc_g1

0x4afb,	// (0x0001f326) list_single_number_heading_pane_vc_g2_ParamLimits

0x4afb,	// (0x0001f326) list_single_number_heading_pane_vc_g2

0x0001,

0xf7d8,	// (0x0002a003) list_single_number_heading_pane_vc_g_ParamLimits

0xf7d8,	// (0x0002a003) list_single_number_heading_pane_vc_g

0x5221,	// (0x0001fa4c) list_single_number_heading_pane_vc_t1_ParamLimits

0x5221,	// (0x0001fa4c) list_single_number_heading_pane_vc_t1

0x54fb,	// (0x0001fd26) list_single_number_heading_pane_vc_t2_ParamLimits

0x54fb,	// (0x0001fd26) list_single_number_heading_pane_vc_t2

0x550f,	// (0x0001fd3a) list_single_number_heading_pane_vc_t3_ParamLimits

0x550f,	// (0x0001fd3a) list_single_number_heading_pane_vc_t3

0x0002,

0xfa3b,	// (0x0002a266) list_single_number_heading_pane_vc_t_ParamLimits

0xfa3b,	// (0x0002a266) list_single_number_heading_pane_vc_t

0x51b9,	// (0x0001f9e4) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x51b9,	// (0x0001f9e4) list_single_graphic_heading_pane_vc_g1

0x4aef,	// (0x0001f31a) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x4aef,	// (0x0001f31a) list_single_graphic_heading_pane_vc_g4

0x4afb,	// (0x0001f326) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x4afb,	// (0x0001f326) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7b0,	// (0x00029fdb) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7b0,	// (0x00029fdb) list_single_graphic_heading_pane_vc_g

0x5221,	// (0x0001fa4c) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x5221,	// (0x0001fa4c) list_single_graphic_heading_pane_vc_t1

0x5521,	// (0x0001fd4c) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x5521,	// (0x0001fd4c) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa42,	// (0x0002a26d) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa42,	// (0x0002a26d) list_single_graphic_heading_pane_vc_t

0x4aef,	// (0x0001f31a) list_double2_pane_vc_g1_ParamLimits

0x4aef,	// (0x0001f31a) list_double2_pane_vc_g1

0x4afb,	// (0x0001f326) list_double2_pane_vc_g2_ParamLimits

0x4afb,	// (0x0001f326) list_double2_pane_vc_g2

0x0001,

0xf7d8,	// (0x0002a003) list_double2_pane_vc_g_ParamLimits

0xf7d8,	// (0x0002a003) list_double2_pane_vc_g

0x5535,	// (0x0001fd60) list_double2_pane_vc_t1_ParamLimits

0x5535,	// (0x0001fd60) list_double2_pane_vc_t1

0x554b,	// (0x0001fd76) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x554b,	// (0x0001fd76) list_double2_large_graphic_pane_vc_g1

0x4aef,	// (0x0001f31a) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x4aef,	// (0x0001f31a) list_double2_large_graphic_pane_vc_g2

0x4afb,	// (0x0001f326) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x4afb,	// (0x0001f326) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa47,	// (0x0002a272) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa47,	// (0x0002a272) list_double2_large_graphic_pane_vc_g

0x5557,	// (0x0001fd82) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x5557,	// (0x0001fd82) list_double2_large_graphic_pane_vc_t1

0x556d,	// (0x0001fd98) list_double_time_pane_vc_g1_ParamLimits

0x556d,	// (0x0001fd98) list_double_time_pane_vc_g1

0x5579,	// (0x0001fda4) list_double_time_pane_vc_g2_ParamLimits

0x5579,	// (0x0001fda4) list_double_time_pane_vc_g2

0x0001,

0xfa4e,	// (0x0002a279) list_double_time_pane_vc_g_ParamLimits

0xfa4e,	// (0x0002a279) list_double_time_pane_vc_g

0x5585,	// (0x0001fdb0) list_double_time_pane_vc_t1_ParamLimits

0x5585,	// (0x0001fdb0) list_double_time_pane_vc_t1

0x55a3,	// (0x0001fdce) list_double_time_pane_vc_t2_ParamLimits

0x55a3,	// (0x0001fdce) list_double_time_pane_vc_t2

0x55ed,	// (0x0001fe18) list_double_time_pane_vc_t3_ParamLimits

0x55ed,	// (0x0001fe18) list_double_time_pane_vc_t3

0x55ff,	// (0x0001fe2a) list_double_time_pane_vc_t4_ParamLimits

0x55ff,	// (0x0001fe2a) list_double_time_pane_vc_t4

0x0003,

0xfa53,	// (0x0002a27e) list_double_time_pane_vc_t_ParamLimits

0xfa53,	// (0x0002a27e) list_double_time_pane_vc_t

0x4aef,	// (0x0001f31a) list_double_pane_vc_g1_ParamLimits

0x4aef,	// (0x0001f31a) list_double_pane_vc_g1

0x4afb,	// (0x0001f326) list_double_pane_vc_g2_ParamLimits

0x4afb,	// (0x0001f326) list_double_pane_vc_g2

0x0001,

0xf7d8,	// (0x0002a003) list_double_pane_vc_g_ParamLimits

0xf7d8,	// (0x0002a003) list_double_pane_vc_g

0x5613,	// (0x0001fe3e) list_double_pane_vc_t1_ParamLimits

0x5613,	// (0x0001fe3e) list_double_pane_vc_t1

0x5625,	// (0x0001fe50) list_double_pane_vc_t2_ParamLimits

0x5625,	// (0x0001fe50) list_double_pane_vc_t2

0x0001,

0xfa5c,	// (0x0002a287) list_double_pane_vc_t_ParamLimits

0xfa5c,	// (0x0002a287) list_double_pane_vc_t

0x4aef,	// (0x0001f31a) list_double_number_pane_vc_g1_ParamLimits

0x4aef,	// (0x0001f31a) list_double_number_pane_vc_g1

0x4afb,	// (0x0001f326) list_double_number_pane_vc_g2_ParamLimits

0x4afb,	// (0x0001f326) list_double_number_pane_vc_g2

0x0001,

0xf7d8,	// (0x0002a003) list_double_number_pane_vc_g_ParamLimits

0xf7d8,	// (0x0002a003) list_double_number_pane_vc_g

0x563d,	// (0x0001fe68) list_double_number_pane_vc_t1_ParamLimits

0x563d,	// (0x0001fe68) list_double_number_pane_vc_t1

0x564f,	// (0x0001fe7a) list_double_number_pane_vc_t2_ParamLimits

0x564f,	// (0x0001fe7a) list_double_number_pane_vc_t2

0x5661,	// (0x0001fe8c) list_double_number_pane_vc_t3_ParamLimits

0x5661,	// (0x0001fe8c) list_double_number_pane_vc_t3

0x0002,

0xfa61,	// (0x0002a28c) list_double_number_pane_vc_t_ParamLimits

0xfa61,	// (0x0002a28c) list_double_number_pane_vc_t

0x5679,	// (0x0001fea4) list_double_large_graphic_pane_vc_g1_ParamLimits

0x5679,	// (0x0001fea4) list_double_large_graphic_pane_vc_g1

0x5695,	// (0x0001fec0) list_double_large_graphic_pane_vc_g2_ParamLimits

0x5695,	// (0x0001fec0) list_double_large_graphic_pane_vc_g2

0x56a9,	// (0x0001fed4) list_double_large_graphic_pane_vc_g3_ParamLimits

0x56a9,	// (0x0001fed4) list_double_large_graphic_pane_vc_g3

0x56b8,	// (0x0001fee3) list_double_large_graphic_pane_vc_g4_ParamLimits

0x56b8,	// (0x0001fee3) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa68,	// (0x0002a293) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa68,	// (0x0002a293) list_double_large_graphic_pane_vc_g

0x56c7,	// (0x0001fef2) list_double_large_graphic_pane_vc_t1_ParamLimits

0x56c7,	// (0x0001fef2) list_double_large_graphic_pane_vc_t1

0x56e1,	// (0x0001ff0c) list_double_large_graphic_pane_vc_t2_ParamLimits

0x56e1,	// (0x0001ff0c) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa71,	// (0x0002a29c) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa71,	// (0x0002a29c) list_double_large_graphic_pane_vc_t

0x4aef,	// (0x0001f31a) list_double_heading_pane_vc_g1_ParamLimits

0x4aef,	// (0x0001f31a) list_double_heading_pane_vc_g1

0x4afb,	// (0x0001f326) list_double_heading_pane_vc_g2_ParamLimits

0x4afb,	// (0x0001f326) list_double_heading_pane_vc_g2

0x0001,

0xf7d8,	// (0x0002a003) list_double_heading_pane_vc_g_ParamLimits

0xf7d8,	// (0x0002a003) list_double_heading_pane_vc_g

0x5703,	// (0x0001ff2e) list_double_heading_pane_vc_t1_ParamLimits

0x5703,	// (0x0001ff2e) list_double_heading_pane_vc_t1

0x5221,	// (0x0001fa4c) list_double_heading_pane_vc_t2_ParamLimits

0x5221,	// (0x0001fa4c) list_double_heading_pane_vc_t2

0x0001,

0xfa76,	// (0x0002a2a1) list_double_heading_pane_vc_t_ParamLimits

0xfa76,	// (0x0002a2a1) list_double_heading_pane_vc_t

0x5717,	// (0x0001ff42) list_double_graphic_pane_vc_g1_ParamLimits

0x5717,	// (0x0001ff42) list_double_graphic_pane_vc_g1

0x572a,	// (0x0001ff55) list_double_graphic_pane_vc_g2_ParamLimits

0x572a,	// (0x0001ff55) list_double_graphic_pane_vc_g2

0x4aef,	// (0x0001f31a) list_double_graphic_pane_vc_g3_ParamLimits

0x4aef,	// (0x0001f31a) list_double_graphic_pane_vc_g3

0x0003,

0xfa7b,	// (0x0002a2a6) list_double_graphic_pane_vc_g_ParamLimits

0xfa7b,	// (0x0002a2a6) list_double_graphic_pane_vc_g

0x5747,	// (0x0001ff72) list_double_graphic_pane_vc_t1_ParamLimits

0x5747,	// (0x0001ff72) list_double_graphic_pane_vc_t1

0x5765,	// (0x0001ff90) list_double_graphic_pane_vc_t2_ParamLimits

0x5765,	// (0x0001ff90) list_double_graphic_pane_vc_t2

0x0001,

0xfa84,	// (0x0002a2af) list_double_graphic_pane_vc_t_ParamLimits

0xfa84,	// (0x0002a2af) list_double_graphic_pane_vc_t

0x5b95,	// (0x000203c0) aid_size_cell_fastswap

0x5b9d,	// (0x000203c8) aid_size_cell_touch_ParamLimits

0x5b9d,	// (0x000203c8) aid_size_cell_touch

0x5df8,	// (0x00020623) popup_fast_swap_wide_window_ParamLimits

0x5df8,	// (0x00020623) popup_fast_swap_wide_window

0x5efe,	// (0x00020729) touch_pane_ParamLimits

0x5efe,	// (0x00020729) touch_pane

0x882a,	// (0x00023055) button_value_adjust_pane_cp2

0x4ebf,	// (0x0001f6ea) button_value_adjust_pane_cp4

0x4edf,	// (0x0001f70a) form_field_data_pane_cp2

0x4efe,	// (0x0001f729) form_field_data_wide_pane_cp2

0x8ca6,	// (0x000234d1) bg_scroll_pane_ParamLimits

0x618e,	// (0x000209b9) scroll_handle_pane_ParamLimits

0x61a2,	// (0x000209cd) scroll_sc2_down_pane_ParamLimits

0x61a2,	// (0x000209cd) scroll_sc2_down_pane

0x8cd7,	// (0x00023502) scroll_sc2_up_pane_ParamLimits

0x8cd7,	// (0x00023502) scroll_sc2_up_pane

0xbe09,	// (0x00026634) grid_wheel_folder_pane_g1_ParamLimits

0xbe09,	// (0x00026634) grid_wheel_folder_pane_g1

0x635e,	// (0x00020b89) clock_nsta_pane_cp2_ParamLimits

0x635e,	// (0x00020b89) clock_nsta_pane_cp2

0x8a20,	// (0x0002324b) listscroll_midp_pane_ParamLimits

0x94b2,	// (0x00023cdd) midp_canvas_pane

0x9796,	// (0x00023fc1) nsta_clock_indic_pane

0x97ca,	// (0x00023ff5) listscroll_form_pane_vc

0x97d2,	// (0x00023ffd) listscroll_set_pane_vc_ParamLimits

0x97d2,	// (0x00023ffd) listscroll_set_pane_vc

0x98d3,	// (0x000240fe) clock_nsta_pane

0x9948,	// (0x00024173) indicator_nsta_pane

0x9c20,	// (0x0002444b) bg_popup_sub_pane_cp2_ParamLimits

0x9c34,	// (0x0002445f) find_pane_cp2_ParamLimits

0x9c34,	// (0x0002445f) find_pane_cp2

0x9c4a,	// (0x00024475) grid_toobar_pane_ParamLimits

0x9d2a,	// (0x00024555) list_form_gen_pane_vc_ParamLimits

0x9d2a,	// (0x00024555) list_form_gen_pane_vc

0x9d40,	// (0x0002456b) scroll_pane_cp8_vc_ParamLimits

0x9d40,	// (0x0002456b) scroll_pane_cp8_vc

0x9dbc,	// (0x000245e7) data_form_wide_pane_vc_ParamLimits

0x9dbc,	// (0x000245e7) data_form_wide_pane_vc

0x9dc8,	// (0x000245f3) form_field_data_wide_pane_vc_g1

0x9dd0,	// (0x000245fb) form_field_data_wide_pane_vc_t1_ParamLimits

0x9dd0,	// (0x000245fb) form_field_data_wide_pane_vc_t1

0x883e,	// (0x00023069) input_focus_pane_cp6_vc_ParamLimits

0x883e,	// (0x00023069) input_focus_pane_cp6_vc

0xa10e,	// (0x00024939) list_midp_pane_ParamLimits

0xa11a,	// (0x00024945) scroll_pane_cp16_ParamLimits

0xa11a,	// (0x00024945) scroll_pane_cp16

0xa168,	// (0x00024993) button_value_adjust_pane_ParamLimits

0xa168,	// (0x00024993) button_value_adjust_pane

0xb0d7,	// (0x00025902) button_value_adjust_pane_cp6_ParamLimits

0xb0d7,	// (0x00025902) button_value_adjust_pane_cp6

0xb1f9,	// (0x00025a24) settings_code_pane_cp_ParamLimits

0xb1f9,	// (0x00025a24) settings_code_pane_cp

0x7efa,	// (0x00022725) cell_touch_pane_g1

0x7efa,	// (0x00022725) cell_touch_pane_g2

0x0001,

0xf703,	// (0x00029f2e) cell_touch_pane_g

0xb762,	// (0x00025f8d) cell_touch_pane_cp_ParamLimits

0xb762,	// (0x00025f8d) cell_touch_pane_cp

0xb772,	// (0x00025f9d) cell_touch_pane_ParamLimits

0xb772,	// (0x00025f9d) cell_touch_pane

0x7efa,	// (0x00022725) scroll_sc2_down_pane_g1

0x7efa,	// (0x00022725) scroll_sc2_up_pane_g1

0x7f04,	// (0x0002272f) bg_set_opt_pane_cp4_vc

0xb783,	// (0x00025fae) list_set_graphic_pane_vc_g1_ParamLimits

0xb783,	// (0x00025fae) list_set_graphic_pane_vc_g1

0x8ffa,	// (0x00023825) list_set_graphic_pane_vc_g2_ParamLimits

0x8ffa,	// (0x00023825) list_set_graphic_pane_vc_g2

0x0001,

0xf9f8,	// (0x0002a223) list_set_graphic_pane_vc_g_ParamLimits

0xf9f8,	// (0x0002a223) list_set_graphic_pane_vc_g

0xb78f,	// (0x00025fba) text_primary_small_cp13_vc_ParamLimits

0xb78f,	// (0x00025fba) text_primary_small_cp13_vc

0xb7a7,	// (0x00025fd2) list_set_graphic_pane_vc_ParamLimits

0xb7a7,	// (0x00025fd2) list_set_graphic_pane_vc

0x7f04,	// (0x0002272f) input_focus_pane_cp2_vc

0x7efa,	// (0x00022725) setting_code_pane_vc_g1

0x802f,	// (0x0002285a) setting_code_pane_vc_t1

0xb7bb,	// (0x00025fe6) set_text_pane_vc_t1_ParamLimits

0xb7bb,	// (0x00025fe6) set_text_pane_vc_t1

0x7f04,	// (0x0002272f) input_focus_pane_cp1_vc

0xb7d8,	// (0x00026003) list_set_text_pane_vc

0x7efa,	// (0x00022725) setting_text_pane_vc_g1

0x7f04,	// (0x0002272f) bg_set_opt_pane_cp2_vc

0x8026,	// (0x00022851) setting_slider_graphic_pane_vc_g1

0xb7e2,	// (0x0002600d) setting_slider_graphic_pane_vc_t1

0xb7f2,	// (0x0002601d) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9fd,	// (0x0002a228) setting_slider_graphic_pane_vc_t

0xb802,	// (0x0002602d) slider_set_pane_cp_vc

0xb80a,	// (0x00026035) slider_set_pane_vc_g1

0xb813,	// (0x0002603e) slider_set_pane_vc_g2

0x0006,

0xfa02,	// (0x0002a22d) slider_set_pane_vc_g

0x8899,	// (0x000230c4) set_opt_bg_pane_g1_copy1

0x88a1,	// (0x000230cc) set_opt_bg_pane_g2_copy1

0xb83f,	// (0x0002606a) set_opt_bg_pane_g3_copy1

0x88b1,	// (0x000230dc) set_opt_bg_pane_g4_copy1

0x88b9,	// (0x000230e4) set_opt_bg_pane_g5_copy1

0x88c1,	// (0x000230ec) set_opt_bg_pane_g6_copy1

0xb847,	// (0x00026072) set_opt_bg_pane_g7_copy1

0xb851,	// (0x0002607c) set_opt_bg_pane_g8_copy1

0xb859,	// (0x00026084) set_opt_bg_pane_g9_copy1

0x7f04,	// (0x0002272f) bg_set_opt_pane_cp_vc

0xb861,	// (0x0002608c) setting_slider_pane_vc_t1

0xb870,	// (0x0002609b) setting_slider_pane_vc_t2

0xb880,	// (0x000260ab) setting_slider_pane_vc_t3

0x0002,

0xfa11,	// (0x0002a23c) setting_slider_pane_vc_t

0xb890,	// (0x000260bb) slider_set_pane_vc

0x6c98,	// (0x000214c3) volume_set_pane_vc_g1

0x6f87,	// (0x000217b2) volume_set_pane_vc_g2

0x6f90,	// (0x000217bb) volume_set_pane_vc_g3

0x6f99,	// (0x000217c4) volume_set_pane_vc_g4

0x6fa2,	// (0x000217cd) volume_set_pane_vc_g5

0x6fab,	// (0x000217d6) volume_set_pane_vc_g6

0x6cc5,	// (0x000214f0) volume_set_pane_vc_g7

0x6fb4,	// (0x000217df) volume_set_pane_vc_g8

0x6fbd,	// (0x000217e8) volume_set_pane_vc_g9

0x6fc6,	// (0x000217f1) volume_set_pane_vc_g10

0x0009,

0xfa18,	// (0x0002a243) volume_set_pane_vc_g

0xb898,	// (0x000260c3) volume_set_pane_vc

0xb8a0,	// (0x000260cb) button_value_adjust_pane_cp1_vc

0xb8aa,	// (0x000260d5) list_highlight_pane_cp2_vc

0xb8b3,	// (0x000260de) list_set_pane_vc_ParamLimits

0xb8b3,	// (0x000260de) list_set_pane_vc

0xb911,	// (0x0002613c) main_pane_set_vc_t1_ParamLimits

0xb911,	// (0x0002613c) main_pane_set_vc_t1

0xb926,	// (0x00026151) main_pane_set_vc_t2_ParamLimits

0xb926,	// (0x00026151) main_pane_set_vc_t2

0xb938,	// (0x00026163) main_pane_set_vc_t3_ParamLimits

0xb938,	// (0x00026163) main_pane_set_vc_t3

0xb94a,	// (0x00026175) main_pane_set_vc_t4_ParamLimits

0xb94a,	// (0x00026175) main_pane_set_vc_t4

0x0003,

0xfa2d,	// (0x0002a258) main_pane_set_vc_t_ParamLimits

0xfa2d,	// (0x0002a258) main_pane_set_vc_t

0xb95c,	// (0x00026187) setting_code_pane_vc_ParamLimits

0xb95c,	// (0x00026187) setting_code_pane_vc

0xb96b,	// (0x00026196) setting_slider_graphic_pane_vc

0xb96b,	// (0x00026196) setting_slider_pane_vc

0xb96b,	// (0x00026196) setting_text_pane_vc

0xb96b,	// (0x00026196) setting_volume_pane_vc

0xb973,	// (0x0002619e) scroll_pane_cp121_vc

0x8818,	// (0x00023043) set_content_pane_vc

0xb97b,	// (0x000261a6) button_value_adjust_pane_g1

0xb984,	// (0x000261af) button_value_adjust_pane_g2

0x0001,

0xfa89,	// (0x0002a2b4) button_value_adjust_pane_g

0xb98d,	// (0x000261b8) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb98d,	// (0x000261b8) form_field_slider_wide_pane_vc_t1

0xb9a1,	// (0x000261cc) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb9a1,	// (0x000261cc) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa8e,	// (0x0002a2b9) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa8e,	// (0x0002a2b9) form_field_slider_wide_pane_vc_t

0x825f,	// (0x00022a8a) input_focus_pane_cp10_vc_ParamLimits

0x825f,	// (0x00022a8a) input_focus_pane_cp10_vc

0xb9cd,	// (0x000261f8) slider_cont_pane_cp1_vc_ParamLimits

0xb9cd,	// (0x000261f8) slider_cont_pane_cp1_vc

0xb9dd,	// (0x00026208) slider_form_pane_g1_cp2

0xb813,	// (0x0002603e) slider_form_pane_g2_cp2

0xba0a,	// (0x00026235) form_field_slider_pane_vc_t3

0xba18,	// (0x00026243) form_field_slider_pane_vc_t4

0xba26,	// (0x00026251) slider_form_pane_vc_ParamLimits

0xba26,	// (0x00026251) slider_form_pane_vc

0xba33,	// (0x0002625e) form_field_slider_pane_vc_t1_ParamLimits

0xba33,	// (0x0002625e) form_field_slider_pane_vc_t1

0xb9a1,	// (0x000261cc) form_field_slider_pane_vc_t2_ParamLimits

0xb9a1,	// (0x000261cc) form_field_slider_pane_vc_t2

0x0001,

0xfaa0,	// (0x0002a2cb) form_field_slider_pane_vc_t_ParamLimits

0xfaa0,	// (0x0002a2cb) form_field_slider_pane_vc_t

0x825f,	// (0x00022a8a) input_focus_pane_cp9_vc_ParamLimits

0x825f,	// (0x00022a8a) input_focus_pane_cp9_vc

0xba4f,	// (0x0002627a) slider_cont_pane_vc_ParamLimits

0xba4f,	// (0x0002627a) slider_cont_pane_vc

0xba61,	// (0x0002628c) list_form_graphic_pane_cp_vc_ParamLimits

0xba61,	// (0x0002628c) list_form_graphic_pane_cp_vc

0x9dc8,	// (0x000245f3) form_field_popup_wide_pane_vc_g1

0xba76,	// (0x000262a1) form_field_popup_wide_pane_vc_t1_ParamLimits

0xba76,	// (0x000262a1) form_field_popup_wide_pane_vc_t1

0x883e,	// (0x00023069) input_focus_pane_cp8_vc_ParamLimits

0x883e,	// (0x00023069) input_focus_pane_cp8_vc

0xbabb,	// (0x000262e6) list_form_wide_pane_vc_ParamLimits

0xbabb,	// (0x000262e6) list_form_wide_pane_vc

0xbac7,	// (0x000262f2) list_form_graphic_pane_vc_g1

0xbacf,	// (0x000262fa) list_form_graphic_pane_vc_t1_ParamLimits

0xbacf,	// (0x000262fa) list_form_graphic_pane_vc_t1

0x7fe4,	// (0x0002280f) list_highlight_pane_cp5_vc_ParamLimits

0x7fe4,	// (0x0002280f) list_highlight_pane_cp5_vc

0xbaeb,	// (0x00026316) list_form_graphic_pane_vc_ParamLimits

0xbaeb,	// (0x00026316) list_form_graphic_pane_vc

0x9dc8,	// (0x000245f3) form_field_popup_pane_vc_g1

0xbb01,	// (0x0002632c) form_field_popup_pane_vc_t1_ParamLimits

0xbb01,	// (0x0002632c) form_field_popup_pane_vc_t1

0x883e,	// (0x00023069) input_focus_pane_cp7_vc_ParamLimits

0x883e,	// (0x00023069) input_focus_pane_cp7_vc

0xbb18,	// (0x00026343) list_form_pane_vc_ParamLimits

0xbb18,	// (0x00026343) list_form_pane_vc

0xbb24,	// (0x0002634f) data_form_pane_vc_t1_ParamLimits

0xbb24,	// (0x0002634f) data_form_pane_vc_t1

0x8899,	// (0x000230c4) input_focus_pane_vc_g1

0x88a1,	// (0x000230cc) input_focus_pane_vc_g2

0x88a9,	// (0x000230d4) input_focus_pane_vc_g3

0x88b1,	// (0x000230dc) input_focus_pane_vc_g4

0x88b9,	// (0x000230e4) input_focus_pane_vc_g5

0x88c1,	// (0x000230ec) input_focus_pane_vc_g6

0x88c9,	// (0x000230f4) input_focus_pane_vc_g7

0x88d1,	// (0x000230fc) input_focus_pane_vc_g8

0x88d9,	// (0x00023104) input_focus_pane_vc_g9

0x7efa,	// (0x00022725) input_focus_pane_vc_g10

0x0009,

0xf68c,	// (0x00029eb7) input_focus_pane_vc_g

0x9dbc,	// (0x000245e7) data_form_pane_vc_ParamLimits

0x9dbc,	// (0x000245e7) data_form_pane_vc

0x9dc8,	// (0x000245f3) form_field_data_pane_vc_g1

0xbb3f,	// (0x0002636a) form_field_data_pane_vc_t1_ParamLimits

0xbb3f,	// (0x0002636a) form_field_data_pane_vc_t1

0x883e,	// (0x00023069) input_focus_pane_vc_ParamLimits

0x883e,	// (0x00023069) input_focus_pane_vc

0xbb59,	// (0x00026384) button_value_adjust_pane_cp3_vc

0xbb61,	// (0x0002638c) button_value_adjust_pane_cp5_vc

0xbb69,	// (0x00026394) form_field_data_pane_vc_ParamLimits

0xbb69,	// (0x00026394) form_field_data_pane_vc

0xbb80,	// (0x000263ab) form_field_data_pane_vc_cp2

0xbb88,	// (0x000263b3) form_field_data_wide_pane_vc_ParamLimits

0xbb88,	// (0x000263b3) form_field_data_wide_pane_vc

0xbb9e,	// (0x000263c9) form_field_data_wide_pane_vc_cp2

0xbba6,	// (0x000263d1) form_field_popup_pane_vc_ParamLimits

0xbba6,	// (0x000263d1) form_field_popup_pane_vc

0xbbbd,	// (0x000263e8) form_field_popup_wide_pane_vc_ParamLimits

0xbbbd,	// (0x000263e8) form_field_popup_wide_pane_vc

0xbbd3,	// (0x000263fe) form_field_slider_pane_vc_ParamLimits

0xbbd3,	// (0x000263fe) form_field_slider_pane_vc

0xbbe6,	// (0x00026411) form_field_slider_wide_pane_vc_ParamLimits

0xbbe6,	// (0x00026411) form_field_slider_wide_pane_vc

0xbbf9,	// (0x00026424) grid_touch_1_pane_ParamLimits

0xbbf9,	// (0x00026424) grid_touch_1_pane

0xbc05,	// (0x00026430) grid_touch_2_pane_ParamLimits

0xbc05,	// (0x00026430) grid_touch_2_pane

0x9761,	// (0x00023f8c) touch_pane_g1_ParamLimits

0x9761,	// (0x00023f8c) touch_pane_g1

0xbc1d,	// (0x00026448) cell_app_pane_cp_wide_ParamLimits

0xbc1d,	// (0x00026448) cell_app_pane_cp_wide

0xbc2e,	// (0x00026459) grid_popup_fast_wide_pane_ParamLimits

0xbc2e,	// (0x00026459) grid_popup_fast_wide_pane

0xbc42,	// (0x0002646d) scroll_pane_cp19_ParamLimits

0xbc42,	// (0x0002646d) scroll_pane_cp19

0x7f04,	// (0x0002272f) bg_popup_window_pane_cp20

0xbc56,	// (0x00026481) listscroll_popup_fast_wide_pane

0x7fe4,	// (0x0002280f) grid_indicator_nsta_pane

0xbc5e,	// (0x00026489) clock_nsta_pane_g1

0xbc67,	// (0x00026492) clock_nsta_pane_t1

0xbc83,	// (0x000264ae) cell_indicator_nsta_pane_ParamLimits

0xbc83,	// (0x000264ae) cell_indicator_nsta_pane

0xbcb4,	// (0x000264df) cell_indicator_nsta_pane_g1

0xbcc2,	// (0x000264ed) cell_indicator_nsta_pane_g2

0x0001,

0xfab1,	// (0x0002a2dc) cell_indicator_nsta_pane_g

0xbccf,	// (0x000264fa) clock_nsta_pane_cp

0xbcd7,	// (0x00026502) indicator_nsta_pane_cp

0xbcdf,	// (0x0002650a) nsta_clock_indic_pane_g1

0x80ad,	// (0x000228d8) grid_indicator_pane

0x8dcc,	// (0x000235f7) scroll_pane_cp29

0x62ad,	// (0x00020ad8) indicator_nsta_pane_cp2_ParamLimits

0x62ad,	// (0x00020ad8) indicator_nsta_pane_cp2

0x7fe4,	// (0x0002280f) main_apps_wheel_pane

0x9ff3,	// (0x0002481e) form_midp_field_text_pane_ParamLimits

0xa13a,	// (0x00024965) scroll_bar_cp050_ParamLimits

0xbd40,	// (0x0002656b) cell_indicator_pane_ParamLimits

0xbd40,	// (0x0002656b) cell_indicator_pane

0xbd5b,	// (0x00026586) cell_indicator_pane_g1

0xbd65,	// (0x00026590) grid_wheel_folder_pane_ParamLimits

0xbd65,	// (0x00026590) grid_wheel_folder_pane

0xbd7b,	// (0x000265a6) list_wheel_apps_pane_ParamLimits

0xbd7b,	// (0x000265a6) list_wheel_apps_pane

0xbd8c,	// (0x000265b7) main_apps_wheel_pane_g1_ParamLimits

0xbd8c,	// (0x000265b7) main_apps_wheel_pane_g1

0xbda0,	// (0x000265cb) main_apps_wheel_pane_g2_ParamLimits

0xbda0,	// (0x000265cb) main_apps_wheel_pane_g2

0x0001,

0xfacd,	// (0x0002a2f8) main_apps_wheel_pane_g_ParamLimits

0xfacd,	// (0x0002a2f8) main_apps_wheel_pane_g

0xbdb8,	// (0x000265e3) main_apps_wheel_pane_t1_ParamLimits

0xbdb8,	// (0x000265e3) main_apps_wheel_pane_t1

0xbddb,	// (0x00026606) list_wheel_apps_pane_g1

0xbde3,	// (0x0002660e) list_wheel_apps_pane_g2

0xbdeb,	// (0x00026616) list_wheel_apps_pane_g3

0xbdf5,	// (0x00026620) list_wheel_apps_pane_g4

0xbdff,	// (0x0002662a) list_wheel_apps_pane_g5

0x0004,

0xfad2,	// (0x0002a2fd) list_wheel_apps_pane_g

0x9336,	// (0x00023b61) navi_icon_text_pane

0x9806,	// (0x00024031) aid_fill_nsta

0xbe22,	// (0x0002664d) navi_icon_text_pane_g1

0xbe2e,	// (0x00026659) navi_icon_text_pane_t1

0x91cd,	// (0x000239f8) list_set_graphic_pane_t1_ParamLimits

0x91cd,	// (0x000239f8) list_set_graphic_pane_t1

0xa88c,	// (0x000250b7) popup_midp_note_alarm_window_t6_ParamLimits

0xa88c,	// (0x000250b7) popup_midp_note_alarm_window_t6

0xa89e,	// (0x000250c9) popup_midp_note_alarm_window_t7_ParamLimits

0xa89e,	// (0x000250c9) popup_midp_note_alarm_window_t7

0xa8b0,	// (0x000250db) popup_midp_note_alarm_window_t8_ParamLimits

0xa8b0,	// (0x000250db) popup_midp_note_alarm_window_t8

0xa8c2,	// (0x000250ed) popup_midp_note_alarm_window_t9_ParamLimits

0xa8c2,	// (0x000250ed) popup_midp_note_alarm_window_t9

0xa8d4,	// (0x000250ff) popup_midp_note_alarm_window_t10_ParamLimits

0xa8d4,	// (0x000250ff) popup_midp_note_alarm_window_t10

0xa8e6,	// (0x00025111) popup_midp_note_alarm_window_t11_ParamLimits

0xa8e6,	// (0x00025111) popup_midp_note_alarm_window_t11

0xa8f8,	// (0x00025123) scroll_pane_cp17_ParamLimits

0xa8f8,	// (0x00025123) scroll_pane_cp17

0x6c98,	// (0x000214c3) volume_small_pane_cp_g1

0x6fcf,	// (0x000217fa) volume_small_pane_cp_g2

0x6fd8,	// (0x00021803) volume_small_pane_cp_g3

0x6caa,	// (0x000214d5) volume_small_pane_cp_g4

0x6fe1,	// (0x0002180c) volume_small_pane_cp_g5

0x6fa2,	// (0x000217cd) volume_small_pane_cp_g6

0x6cbc,	// (0x000214e7) volume_small_pane_cp_g7

0x6fea,	// (0x00021815) volume_small_pane_cp_g8

0x6ff3,	// (0x0002181e) volume_small_pane_cp_g9

0x6cce,	// (0x000214f9) volume_small_pane_cp_g10

0x957f,	// (0x00023daa) midp_ticker_pane_g1_ParamLimits

0x958b,	// (0x00023db6) midp_ticker_pane_g2_ParamLimits

0xf758,	// (0x00029f83) midp_ticker_pane_g_ParamLimits

0x9597,	// (0x00023dc2) midp_ticker_pane_t1_ParamLimits

0x981c,	// (0x00024047) aid_fill_nsta_2

0xa126,	// (0x00024951) list_form2_midp_pane

0xb244,	// (0x00025a6f) midp_editing_number_pane_ParamLimits

0xb253,	// (0x00025a7e) midp_ticker_pane_ParamLimits

0xbe40,	// (0x0002666b) form2_midp_field_pane

0xbe64,	// (0x0002668f) scroll_pane_cp51

0xbe84,	// (0x000266af) form2_midp_button_pane_ParamLimits

0xbe84,	// (0x000266af) form2_midp_button_pane

0xbe96,	// (0x000266c1) form2_midp_content_pane_ParamLimits

0xbe96,	// (0x000266c1) form2_midp_content_pane

0xbeb0,	// (0x000266db) form2_midp_field_choice_group_pane

0xbeb8,	// (0x000266e3) form2_midp_field_pane_g1

0xbec0,	// (0x000266eb) form2_midp_field_pane_g2

0xbec8,	// (0x000266f3) form2_midp_field_pane_g3

0xbed0,	// (0x000266fb) form2_midp_field_pane_g4

0x0003,

0xfaf7,	// (0x0002a322) form2_midp_field_pane_g

0xbed8,	// (0x00026703) form2_midp_gauge_slider_pane

0xbee0,	// (0x0002670b) form2_midp_gauge_wait_pane

0xbee8,	// (0x00026713) form2_midp_image_pane_ParamLimits

0xbee8,	// (0x00026713) form2_midp_image_pane

0xbf03,	// (0x0002672e) form2_midp_label_pane_ParamLimits

0xbf03,	// (0x0002672e) form2_midp_label_pane

0xbf1c,	// (0x00026747) form2_midp_label_pane_cp_ParamLimits

0xbf1c,	// (0x00026747) form2_midp_label_pane_cp

0xbf3d,	// (0x00026768) form2_midp_string_pane_ParamLimits

0xbf3d,	// (0x00026768) form2_midp_string_pane

0x578f,	// (0x0001ffba) form2_midp_text_pane_ParamLimits

0x578f,	// (0x0001ffba) form2_midp_text_pane

0xbf4f,	// (0x0002677a) form2_midp_time_pane

0xbf5f,	// (0x0002678a) input_focus_pane_cp51_ParamLimits

0xbf5f,	// (0x0002678a) input_focus_pane_cp51

0xbf77,	// (0x000267a2) form2_midp_label_pane_t1_ParamLimits

0xbf77,	// (0x000267a2) form2_midp_label_pane_t1

0x57a8,	// (0x0001ffd3) form2_mdip_text_pane_t1_ParamLimits

0x57a8,	// (0x0001ffd3) form2_mdip_text_pane_t1

0x57c6,	// (0x0001fff1) form2_midp_time_pane_t1

0xbfbf,	// (0x000267ea) form2_midp_gauge_slider_pane_t1

0xbfd1,	// (0x000267fc) form2_midp_gauge_slider_pane_t2

0xbfe3,	// (0x0002680e) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb00,	// (0x0002a32b) form2_midp_gauge_slider_pane_t

0xbff5,	// (0x00026820) form2_midp_slider_pane

0xc001,	// (0x0002682c) form2_midp_gauge_wait_pane_t1

0xc00f,	// (0x0002683a) form2_midp_wait_pane_ParamLimits

0xc00f,	// (0x0002683a) form2_midp_wait_pane

0xc03b,	// (0x00026866) list_single_2graphic_pane_cp4_ParamLimits

0xc03b,	// (0x00026866) list_single_2graphic_pane_cp4

0x9e37,	// (0x00024662) list_single_midp_graphic_pane_cp_ParamLimits

0x9e37,	// (0x00024662) list_single_midp_graphic_pane_cp

0x7f04,	// (0x0002272f) list_highlight_pane_cp20

0xc069,	// (0x00026894) list_single_2graphic_pane_g1_cp4

0xb667,	// (0x00025e92) list_single_2graphic_pane_g2_cp4

0xc071,	// (0x0002689c) list_single_2graphic_pane_t1_cp4

0x7fe4,	// (0x0002280f) list_highlight_pane_cp21

0xc080,	// (0x000268ab) list_single_midp_graphic_pane_g4_cp

0xc08f,	// (0x000268ba) list_single_midp_graphic_pane_t1_cp

0xc0a4,	// (0x000268cf) form2_mdip_string_pane_t1_ParamLimits

0xc0a4,	// (0x000268cf) form2_mdip_string_pane_t1

0x7f04,	// (0x0002272f) bg_wml_button_pane_cp2

0x7efa,	// (0x00022725) form2_midp_image_pane_g1

0x4cb6,	// (0x0001f4e1) list_double_large_graphic_pane_g5_ParamLimits

0x4cb6,	// (0x0001f4e1) list_double_large_graphic_pane_g5

0x8a20,	// (0x0002324b) midp_form_pane_ParamLimits

0x7fe4,	// (0x0002280f) main_apps_wheel_pane_ParamLimits

0x6960,	// (0x0002118b) popup_preview_window_ParamLimits

0x6960,	// (0x0002118b) popup_preview_window

0x6b17,	// (0x00021342) popup_touch_info_window_ParamLimits

0x6b17,	// (0x00021342) popup_touch_info_window

0x6b35,	// (0x00021360) popup_touch_menu_window_ParamLimits

0x6b35,	// (0x00021360) popup_touch_menu_window

0x7ef0,	// (0x0002271b) bg_popup_sub_pane_cp6

0xc1c7,	// (0x000269f2) list_touch_menu_pane

0xc1cf,	// (0x000269fa) list_single_touch_menu_pane_ParamLimits

0xc1cf,	// (0x000269fa) list_single_touch_menu_pane

0xc1e3,	// (0x00026a0e) list_single_touch_menu_pane_t1

0x7fe4,	// (0x0002280f) bg_popup_sub_pane_cp7_ParamLimits

0x7fe4,	// (0x0002280f) bg_popup_sub_pane_cp7

0xc1f1,	// (0x00026a1c) heading_sub_pane

0xc1f9,	// (0x00026a24) list_touch_info_pane_ParamLimits

0xc1f9,	// (0x00026a24) list_touch_info_pane

0xc208,	// (0x00026a33) list_single_touch_info_pane_ParamLimits

0xc208,	// (0x00026a33) list_single_touch_info_pane

0xc21a,	// (0x00026a45) list_single_touch_info_pane_t1

0xc228,	// (0x00026a53) list_single_touch_info_pane_t2

0x0001,

0xfb0e,	// (0x0002a339) list_single_touch_info_pane_t

0x94aa,	// (0x00023cd5) bg_popup_heading_pane_cp

0xc236,	// (0x00026a61) heading_sub_pane_t1

0x9d56,	// (0x00024581) bg_popup_preview_window_pane_cp_ParamLimits

0x9d56,	// (0x00024581) bg_popup_preview_window_pane_cp

0xc1f1,	// (0x00026a1c) heading_preview_pane

0xc1f9,	// (0x00026a24) list_preview_pane_ParamLimits

0xc1f9,	// (0x00026a24) list_preview_pane

0xc244,	// (0x00026a6f) popup_preview_window_g1

0xc208,	// (0x00026a33) list_single_preview_pane_ParamLimits

0xc208,	// (0x00026a33) list_single_preview_pane

0xc24c,	// (0x00026a77) list_single_preview_pane_g1

0xc254,	// (0x00026a7f) list_single_preview_pane_t1

0xc21a,	// (0x00026a45) list_single_preview_pane_t2

0x0001,

0xfb13,	// (0x0002a33e) list_single_preview_pane_t

0xc262,	// (0x00026a8d) bg_popup_heading_pane_cp2_ParamLimits

0xc262,	// (0x00026a8d) bg_popup_heading_pane_cp2

0xc278,	// (0x00026aa3) heading_preview_pane_g1

0xc280,	// (0x00026aab) heading_preview_pane_t1_ParamLimits

0xc280,	// (0x00026aab) heading_preview_pane_t1

0x80d0,	// (0x000228fb) soft_indicator_pane_t1_ParamLimits

0x87b1,	// (0x00022fdc) scroll_pane_ParamLimits

0x8cc5,	// (0x000234f0) scroll_sc2_left_pane

0x8cce,	// (0x000234f9) scroll_sc2_right_pane

0x8ced,	// (0x00023518) scroll_bg_pane_g1_ParamLimits

0x8d02,	// (0x0002352d) scroll_bg_pane_g2_ParamLimits

0x8d1a,	// (0x00023545) scroll_bg_pane_g3_ParamLimits

0xf6e3,	// (0x00029f0e) scroll_bg_pane_g_ParamLimits

0x8ced,	// (0x00023518) scroll_handle_pane_g1_ParamLimits

0x8d3c,	// (0x00023567) scroll_handle_pane_g2_ParamLimits

0x8d1a,	// (0x00023545) scroll_handle_pane_g3_ParamLimits

0xf6ea,	// (0x00029f15) scroll_handle_pane_g_ParamLimits

0x65e7,	// (0x00020e12) popup_choice_list_window_ParamLimits

0x65e7,	// (0x00020e12) popup_choice_list_window

0x9c2c,	// (0x00024457) choice_list_pane

0x9cae,	// (0x000244d9) cell_toolbar_pane_t1

0x9cd6,	// (0x00024501) toolbar_button_pane_ParamLimits

0xadb2,	// (0x000255dd) ai_gene_pane_1_t2_ParamLimits

0xadb2,	// (0x000255dd) ai_gene_pane_1_t2

0x0001,

0xf90b,	// (0x0002a136) ai_gene_pane_1_t_ParamLimits

0xf90b,	// (0x0002a136) ai_gene_pane_1_t

0xc29d,	// (0x00026ac8) scroll_sc2_left_pane_g1

0xc29d,	// (0x00026ac8) scroll_sc2_right_pane_g1

0x97e4,	// (0x0002400f) bg_popup_sub_pane_cp10

0xc2a7,	// (0x00026ad2) list_choice_list_pane

0xc2c0,	// (0x00026aeb) list_single_choice_list_pane_ParamLimits

0xc2c0,	// (0x00026aeb) list_single_choice_list_pane

0xc2d3,	// (0x00026afe) list_single_choice_list_pane_g1

0x89d0,	// (0x000231fb) list_single_choice_list_pane_t1_ParamLimits

0x89d0,	// (0x000231fb) list_single_choice_list_pane_t1

0xc2db,	// (0x00026b06) choice_list_pane_g1

0xc2e3,	// (0x00026b0e) choice_list_pane_t1

0x7ef0,	// (0x0002271b) input_focus_pane_cp11

0x8ba4,	// (0x000233cf) title_pane_stacon_g2_ParamLimits

0x8ba4,	// (0x000233cf) title_pane_stacon_g2

0x0002,

0xf6c9,	// (0x00029ef4) title_pane_stacon_g_ParamLimits

0xf6c9,	// (0x00029ef4) title_pane_stacon_g

0x94aa,	// (0x00023cd5) cursor_press_pane

0x668f,	// (0x00020eba) popup_fep_hwr_window_ParamLimits

0x668f,	// (0x00020eba) popup_fep_hwr_window

0x6707,	// (0x00020f32) popup_fep_vkb_window_ParamLimits

0x6707,	// (0x00020f32) popup_fep_vkb_window

0xc2f1,	// (0x00026b1c) cursor_press_pane_g1

0x0002,

0xfb3c,	// (0x0002a367) fep_vkb_side_pane_g_ParamLimits

0x7035,	// (0x00021860) fep_hwr_candidate_pane_ParamLimits

0x7035,	// (0x00021860) fep_hwr_candidate_pane

0x705f,	// (0x0002188a) fep_hwr_side_pane_ParamLimits

0x705f,	// (0x0002188a) fep_hwr_side_pane

0x707f,	// (0x000218aa) fep_hwr_top_pane_ParamLimits

0x707f,	// (0x000218aa) fep_hwr_top_pane

0x7097,	// (0x000218c2) fep_hwr_write_pane_ParamLimits

0x7097,	// (0x000218c2) fep_hwr_write_pane

0xfb3c,	// (0x0002a367) fep_vkb_side_pane_g

0xc2f9,	// (0x00026b24) fep_hwr_top_pane_g1

0xc30b,	// (0x00026b36) fep_hwr_top_pane_g2

0x70c3,	// (0x000218ee) fep_hwr_top_pane_g3

0x0002,

0xfb18,	// (0x0002a343) fep_hwr_top_pane_g

0x70d8,	// (0x00021903) fep_hwr_top_text_pane

0x8e92,	// (0x000236bd) fep_hwr_top_text_pane_g1

0xc341,	// (0x00026b6c) fep_hwr_top_text_pane_t1

0x71ce,	// (0x000219f9) fep_hwr_candidate_pane_g1

0xc584,	// (0x00026daf) fep_vkb_keypad_pane_g3_ParamLimits

0xc584,	// (0x00026daf) fep_vkb_keypad_pane_g3

0xc5ac,	// (0x00026dd7) fep_vkb_keypad_pane_g4_ParamLimits

0xc5ac,	// (0x00026dd7) fep_vkb_keypad_pane_g4

0xc61b,	// (0x00026e46) fep_vkb_bottom_pane_g2_ParamLimits

0xc61b,	// (0x00026e46) fep_vkb_bottom_pane_g2

0x0001,

0xfb43,	// (0x0002a36e) fep_vkb_bottom_pane_g_ParamLimits

0xfb43,	// (0x0002a36e) fep_vkb_bottom_pane_g

0xc29d,	// (0x00026ac8) cell_vkb_side_pane_g2

0x0001,

0xfb4d,	// (0x0002a378) cell_vkb_side_pane_g

0xc6a6,	// (0x00026ed1) cell_vkb_side_pane_t1

0xc6b4,	// (0x00026edf) cell_vkb_side_pane_t1_copy1

0xc29d,	// (0x00026ac8) bg_fep_vkb_candidate_pane_g2

0xc7e0,	// (0x0002700b) cell_vkb_candidate_pane_ParamLimits

0xc34f,	// (0x00026b7a) aid_size_cell_vkb_ParamLimits

0xc34f,	// (0x00026b7a) aid_size_cell_vkb

0xc7e0,	// (0x0002700b) cell_vkb_candidate_pane

0x71e8,	// (0x00021a13) bg_popup_fep_shadow_pane_g1

0xc3db,	// (0x00026c06) fep_vkb_bottom_pane_ParamLimits

0xc3db,	// (0x00026c06) fep_vkb_bottom_pane

0xc411,	// (0x00026c3c) fep_vkb_candidate_pane_ParamLimits

0xc411,	// (0x00026c3c) fep_vkb_candidate_pane

0xc42d,	// (0x00026c58) fep_vkb_keypad_pane_ParamLimits

0xc42d,	// (0x00026c58) fep_vkb_keypad_pane

0xc46c,	// (0x00026c97) fep_vkb_side_pane_ParamLimits

0xc46c,	// (0x00026c97) fep_vkb_side_pane

0xc4a8,	// (0x00026cd3) fep_vkb_top_pane_ParamLimits

0xc4a8,	// (0x00026cd3) fep_vkb_top_pane

0xc4dd,	// (0x00026d08) fep_vkb_top_pane_g1_ParamLimits

0xc4dd,	// (0x00026d08) fep_vkb_top_pane_g1

0xc4ec,	// (0x00026d17) fep_vkb_top_pane_g2_ParamLimits

0xc4ec,	// (0x00026d17) fep_vkb_top_pane_g2

0xc4fb,	// (0x00026d26) fep_vkb_top_pane_g3_ParamLimits

0xc4fb,	// (0x00026d26) fep_vkb_top_pane_g3

0x0003,

0xfb33,	// (0x0002a35e) fep_vkb_top_pane_g_ParamLimits

0xfb33,	// (0x0002a35e) fep_vkb_top_pane_g

0xc519,	// (0x00026d44) fep_vkb_top_text_pane_ParamLimits

0xc519,	// (0x00026d44) fep_vkb_top_text_pane

0xc52a,	// (0x00026d55) fep_vkb_side_pane_g1_ParamLimits

0xc52a,	// (0x00026d55) fep_vkb_side_pane_g1

0xc573,	// (0x00026d9e) grid_vkb_side_pane_ParamLimits

0xc573,	// (0x00026d9e) grid_vkb_side_pane

0x71f0,	// (0x00021a1b) bg_popup_fep_shadow_pane_g2

0x71f9,	// (0x00021a24) bg_popup_fep_shadow_pane_g3

0x7201,	// (0x00021a2c) bg_popup_fep_shadow_pane_g4

0x720a,	// (0x00021a35) bg_popup_fep_shadow_pane_g5

0x7214,	// (0x00021a3f) bg_popup_fep_shadow_pane_g6

0x721c,	// (0x00021a47) bg_popup_fep_shadow_pane_g7

0x88b9,	// (0x000230e4) bg_popup_fep_shadow_pane_g8

0xc5ca,	// (0x00026df5) grid_vkb_keypad_number_pane_ParamLimits

0xc5ca,	// (0x00026df5) grid_vkb_keypad_number_pane

0xc5da,	// (0x00026e05) grid_vkb_keypad_pane_ParamLimits

0xc5da,	// (0x00026e05) grid_vkb_keypad_pane

0xc600,	// (0x00026e2b) fep_vkb_bottom_pane_g1_ParamLimits

0xc600,	// (0x00026e2b) fep_vkb_bottom_pane_g1

0xc629,	// (0x00026e54) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc629,	// (0x00026e54) grid_vkb_keypad_bottom_left_pane

0xc63e,	// (0x00026e69) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc63e,	// (0x00026e69) grid_vkb_keypad_bottom_right_pane

0xc653,	// (0x00026e7e) fep_vkb_top_text_pane_g1

0xc66e,	// (0x00026e99) fep_vkb_top_text_pane_t1

0xc683,	// (0x00026eae) cell_vkb_side_pane_ParamLimits

0xc683,	// (0x00026eae) cell_vkb_side_pane

0xc29d,	// (0x00026ac8) cell_vkb_side_pane_g1

0xc6c2,	// (0x00026eed) cell_vkb_keypad_pane_ParamLimits

0xc6c2,	// (0x00026eed) cell_vkb_keypad_pane

0xc737,	// (0x00026f62) cell_vkb_keypad_pane_g1

0x0008,

0xfb60,	// (0x0002a38b) bg_popup_fep_shadow_pane_g

0xc29d,	// (0x00026ac8) cell_hwr_side_pane_g1

0xc29d,	// (0x00026ac8) cell_hwr_side_pane_g2

0xc741,	// (0x00026f6c) cell_vkb_keypad_pane_t1

0xc74f,	// (0x00026f7a) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc74f,	// (0x00026f7a) cell_vkb_keypad_bottom_left_pane

0xc76c,	// (0x00026f97) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc76c,	// (0x00026f97) cell_vkb_keypad_bottom_right_pane

0xc29d,	// (0x00026ac8) cell_vkb_keypad_bottom_left_pane_g1

0xc29d,	// (0x00026ac8) cell_vkb_keypad_bottom_right_pane_g1

0xc7a5,	// (0x00026fd0) cell_vkb_keypad_number_pane_ParamLimits

0xc7a5,	// (0x00026fd0) cell_vkb_keypad_number_pane

0xc7c4,	// (0x00026fef) cell_vkb_keypad_number_pane_g1

0xc7ce,	// (0x00026ff9) cell_vkb_keypad_number_pane_g2

0xc7d7,	// (0x00027002) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb52,	// (0x0002a37d) cell_vkb_keypad_number_pane_g

0xc741,	// (0x00026f6c) cell_vkb_keypad_number_pane_t1

0xc7fb,	// (0x00027026) fep_vkb_candidate_pane_g1

0x0001,

0xfb4d,	// (0x0002a378) cell_hwr_side_pane_g

0xc814,	// (0x0002703f) cell_hwr_side_pane_t1

0x722e,	// (0x00021a59) cell_hwr_side_pane_t1_copy1

0xc50b,	// (0x00026d36) cell_hwr_candidate_pane_g1

0x723c,	// (0x00021a67) cell_hwr_candidate_pane_t1

0xc29d,	// (0x00026ac8) cell_vkb_candidate_pane_g2

0xc89a,	// (0x000270c5) cell_vkb_candidate_pane_t1

0x6ffc,	// (0x00021827) bg_popup_fep_shadow_pane_ParamLimits

0x6ffc,	// (0x00021827) bg_popup_fep_shadow_pane

0x2024,	// (0x0001c84f) bg_fep_hwr_top_pane_g4

0xc31d,	// (0x00026b48) bg_hwr_side_pane_g1_ParamLimits

0xc31d,	// (0x00026b48) bg_hwr_side_pane_g1

0x7114,	// (0x0002193f) cell_hwr_side_pane_ParamLimits

0x7114,	// (0x0002193f) cell_hwr_side_pane

0x714f,	// (0x0002197a) fep_hwr_write_pane_g1_ParamLimits

0x714f,	// (0x0002197a) fep_hwr_write_pane_g1

0x715c,	// (0x00021987) fep_hwr_write_pane_g2_ParamLimits

0x715c,	// (0x00021987) fep_hwr_write_pane_g2

0x7169,	// (0x00021994) fep_hwr_write_pane_g3_ParamLimits

0x7169,	// (0x00021994) fep_hwr_write_pane_g3

0x7177,	// (0x000219a2) fep_hwr_write_pane_g4_ParamLimits

0x7177,	// (0x000219a2) fep_hwr_write_pane_g4

0x0005,

0xfb1f,	// (0x0002a34a) fep_hwr_write_pane_g_ParamLimits

0xfb1f,	// (0x0002a34a) fep_hwr_write_pane_g

0x2024,	// (0x0001c84f) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x2024,	// (0x0001c84f) bg_fep_hwr_candidate_pane_g2

0x718c,	// (0x000219b7) cell_hwr_candidate_pane_ParamLimits

0x718c,	// (0x000219b7) cell_hwr_candidate_pane

0x71ce,	// (0x000219f9) fep_hwr_candidate_pane_g1_ParamLimits

0xc37d,	// (0x00026ba8) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc37d,	// (0x00026ba8) bg_popup_fep_shadow_pane_cp2

0xc50b,	// (0x00026d36) fep_vkb_top_pane_g4_ParamLimits

0xc50b,	// (0x00026d36) fep_vkb_top_pane_g4

0xc551,	// (0x00026d7c) fep_vkb_side_pane_g2_ParamLimits

0xc551,	// (0x00026d7c) fep_vkb_side_pane_g2

0x4df4,	// (0x0001f61f) list_setting_pane_t4_ParamLimits

0x4df4,	// (0x0001f61f) list_setting_pane_t4

0x4e86,	// (0x0001f6b1) list_setting_number_pane_t5_ParamLimits

0x4e86,	// (0x0001f6b1) list_setting_number_pane_t5

0x8ed9,	// (0x00023704) list_double_heading_pane_cp2_ParamLimits

0x8ed9,	// (0x00023704) list_double_heading_pane_cp2

0x884c,	// (0x00023077) list_double_heading_pane_g1_cp2_ParamLimits

0x884c,	// (0x00023077) list_double_heading_pane_g1_cp2

0x8858,	// (0x00023083) list_double_heading_pane_g2_cp2_ParamLimits

0x8858,	// (0x00023083) list_double_heading_pane_g2_cp2

0xc8a8,	// (0x000270d3) list_double_heading_pane_t1_cp2_ParamLimits

0xc8a8,	// (0x000270d3) list_double_heading_pane_t1_cp2

0xc8be,	// (0x000270e9) list_double_heading_pane_t2_cp2_ParamLimits

0xc8be,	// (0x000270e9) list_double_heading_pane_t2_cp2

0x7ed8,	// (0x00022703) aid_value_unit2

0x5e44,	// (0x0002066f) popup_preview_fixed_window

0x826d,	// (0x00022a98) bg_popup_preview_window_pane_cp02

0xc8d0,	// (0x000270fb) list_preview_fixed_pane

0xc916,	// (0x00027141) list_empty_pane_fp_ParamLimits

0xc916,	// (0x00027141) list_empty_pane_fp

0xc916,	// (0x00027141) list_single_cale_day_pane_fp_ParamLimits

0xc916,	// (0x00027141) list_single_cale_day_pane_fp

0xc916,	// (0x00027141) list_single_graphic_heading_pane_fp_ParamLimits

0xc916,	// (0x00027141) list_single_graphic_heading_pane_fp

0xc916,	// (0x00027141) list_single_graphic_pane_fp_ParamLimits

0xc916,	// (0x00027141) list_single_graphic_pane_fp

0xc916,	// (0x00027141) list_single_heading_pane_fp_ParamLimits

0xc916,	// (0x00027141) list_single_heading_pane_fp

0xc916,	// (0x00027141) list_single_pane_fp_ParamLimits

0xc916,	// (0x00027141) list_single_pane_fp

0xc92c,	// (0x00027157) list_single_pane_fp_g1_ParamLimits

0xc92c,	// (0x00027157) list_single_pane_fp_g1

0x4b25,	// (0x0001f350) list_single_pane_fp_g2_ParamLimits

0x4b25,	// (0x0001f350) list_single_pane_fp_g2

0x57d9,	// (0x00020004) list_single_pane_fp_g3_ParamLimits

0x57d9,	// (0x00020004) list_single_pane_fp_g3

0xc938,	// (0x00027163) list_single_pane_fp_g4_ParamLimits

0xc938,	// (0x00027163) list_single_pane_fp_g4

0x0003,

0xfb81,	// (0x0002a3ac) list_single_pane_fp_g_ParamLimits

0xfb81,	// (0x0002a3ac) list_single_pane_fp_g

0x57ed,	// (0x00020018) list_single_pane_fp_t1_ParamLimits

0x57ed,	// (0x00020018) list_single_pane_fp_t1

0x5804,	// (0x0002002f) list_single_graphic_pane_fp_g1_ParamLimits

0x5804,	// (0x0002002f) list_single_graphic_pane_fp_g1

0xc92c,	// (0x00027157) list_single_graphic_pane_fp_g2_ParamLimits

0xc92c,	// (0x00027157) list_single_graphic_pane_fp_g2

0x4b25,	// (0x0001f350) list_single_graphic_pane_fp_g3_ParamLimits

0x4b25,	// (0x0001f350) list_single_graphic_pane_fp_g3

0x57d9,	// (0x00020004) list_single_graphic_pane_fp_g4_ParamLimits

0x57d9,	// (0x00020004) list_single_graphic_pane_fp_g4

0xc938,	// (0x00027163) list_single_graphic_pane_fp_g5_ParamLimits

0xc938,	// (0x00027163) list_single_graphic_pane_fp_g5

0x0004,

0xfb8a,	// (0x0002a3b5) list_single_graphic_pane_fp_g_ParamLimits

0xfb8a,	// (0x0002a3b5) list_single_graphic_pane_fp_g

0x5810,	// (0x0002003b) list_single_graphic_pane_fp_t1_ParamLimits

0x5810,	// (0x0002003b) list_single_graphic_pane_fp_t1

0x5804,	// (0x0002002f) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x5804,	// (0x0002002f) list_single_graphic_heading_pane_fp_g1

0xc92c,	// (0x00027157) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc92c,	// (0x00027157) list_single_graphic_heading_pane_fp_g2

0x4b25,	// (0x0001f350) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x4b25,	// (0x0001f350) list_single_graphic_heading_pane_fp_g3

0x57d9,	// (0x00020004) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x57d9,	// (0x00020004) list_single_graphic_heading_pane_fp_g4

0xc938,	// (0x00027163) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc938,	// (0x00027163) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb8a,	// (0x0002a3b5) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb8a,	// (0x0002a3b5) list_single_graphic_heading_pane_fp_g

0x5826,	// (0x00020051) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x5826,	// (0x00020051) list_single_graphic_heading_pane_fp_t1

0x583c,	// (0x00020067) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x583c,	// (0x00020067) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb95,	// (0x0002a3c0) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb95,	// (0x0002a3c0) list_single_graphic_heading_pane_fp_t

0x584e,	// (0x00020079) list_single_cale_day_pane_fp_g1_ParamLimits

0x584e,	// (0x00020079) list_single_cale_day_pane_fp_g1

0xc944,	// (0x0002716f) list_single_cale_day_pane_fp_g2_ParamLimits

0xc944,	// (0x0002716f) list_single_cale_day_pane_fp_g2

0x5886,	// (0x000200b1) list_single_cale_day_pane_fp_g3_ParamLimits

0x5886,	// (0x000200b1) list_single_cale_day_pane_fp_g3

0x58ae,	// (0x000200d9) list_single_cale_day_pane_fp_g4_ParamLimits

0x58ae,	// (0x000200d9) list_single_cale_day_pane_fp_g4

0x58d2,	// (0x000200fd) list_single_cale_day_pane_fp_g5_ParamLimits

0x58d2,	// (0x000200fd) list_single_cale_day_pane_fp_g5

0x0004,

0xfb9a,	// (0x0002a3c5) list_single_cale_day_pane_fp_g_ParamLimits

0xfb9a,	// (0x0002a3c5) list_single_cale_day_pane_fp_g

0x58f6,	// (0x00020121) list_single_cale_day_pane_fp_t1_ParamLimits

0x58f6,	// (0x00020121) list_single_cale_day_pane_fp_t1

0x591c,	// (0x00020147) list_single_cale_day_pane_fp_t2_ParamLimits

0x591c,	// (0x00020147) list_single_cale_day_pane_fp_t2

0x5935,	// (0x00020160) list_single_cale_day_pane_fp_t3_ParamLimits

0x5935,	// (0x00020160) list_single_cale_day_pane_fp_t3

0x0002,

0xfba5,	// (0x0002a3d0) list_single_cale_day_pane_fp_t_ParamLimits

0xfba5,	// (0x0002a3d0) list_single_cale_day_pane_fp_t

0xc92c,	// (0x00027157) list_empty_pane_fp_g1_ParamLimits

0xc92c,	// (0x00027157) list_empty_pane_fp_g1

0x594e,	// (0x00020179) list_empty_pane_fp_t1

0x595c,	// (0x00020187) list_empty_pane_fp_t2

0x0001,

0xfbac,	// (0x0002a3d7) list_empty_pane_fp_t

0xc92c,	// (0x00027157) list_single_heading_pane_fp_g1_ParamLimits

0xc92c,	// (0x00027157) list_single_heading_pane_fp_g1

0x4b25,	// (0x0001f350) list_single_heading_pane_fp_g2_ParamLimits

0x4b25,	// (0x0001f350) list_single_heading_pane_fp_g2

0x57d9,	// (0x00020004) list_single_heading_pane_fp_g3_ParamLimits

0x57d9,	// (0x00020004) list_single_heading_pane_fp_g3

0x0002,

0xfbb1,	// (0x0002a3dc) list_single_heading_pane_fp_g_ParamLimits

0xfbb1,	// (0x0002a3dc) list_single_heading_pane_fp_g

0x596a,	// (0x00020195) list_single_heading_pane_fp_t1_ParamLimits

0x596a,	// (0x00020195) list_single_heading_pane_fp_t1

0x597c,	// (0x000201a7) list_single_heading_pane_fp_t2_ParamLimits

0x597c,	// (0x000201a7) list_single_heading_pane_fp_t2

0x0001,

0xfbb8,	// (0x0002a3e3) list_single_heading_pane_fp_t_ParamLimits

0xfbb8,	// (0x0002a3e3) list_single_heading_pane_fp_t

0x8a3e,	// (0x00023269) aid_size_cell_fast

0x81dd,	// (0x00022a08) soft_indicator_pane_cp1_t1

0x8a78,	// (0x000232a3) cell_app_pane_cp2_ParamLimits

0x8a78,	// (0x000232a3) cell_app_pane_cp2

0x701e,	// (0x00021849) fep_hwr_candidate_drop_down_list_pane

0x2032,	// (0x0001c85d) fep_hwr_candidate_pane_g3_ParamLimits

0x2032,	// (0x0001c85d) fep_hwr_candidate_pane_g3

0x203f,	// (0x0001c86a) fep_hwr_candidate_pane_g4_ParamLimits

0x203f,	// (0x0001c86a) fep_hwr_candidate_pane_g4

0x0002,

0xfb2c,	// (0x0002a357) fep_hwr_candidate_pane_g_ParamLimits

0xfb2c,	// (0x0002a357) fep_hwr_candidate_pane_g

0xc400,	// (0x00026c2b) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc400,	// (0x00026c2b) fep_vkb_candidate_drop_down_list_pane

0xc803,	// (0x0002702e) fep_vkb_candidate_pane_g3

0xc80b,	// (0x00027036) fep_vkb_candidate_pane_g4

0x0002,

0xfb59,	// (0x0002a384) fep_vkb_candidate_pane_g

0xc50b,	// (0x00026d36) cell_hwr_candidate_pane_g1_ParamLimits

0xc822,	// (0x0002704d) cell_hwr_candidate_pane_g3_ParamLimits

0xc822,	// (0x0002704d) cell_hwr_candidate_pane_g3

0xc843,	// (0x0002706e) cell_hwr_candidate_pane_g4_ParamLimits

0xc843,	// (0x0002706e) cell_hwr_candidate_pane_g4

0x0002,

0xfb73,	// (0x0002a39e) cell_hwr_candidate_pane_g_ParamLimits

0xfb73,	// (0x0002a39e) cell_hwr_candidate_pane_g

0xc864,	// (0x0002708f) cell_vkb_candidate_pane_g3_ParamLimits

0xc864,	// (0x0002708f) cell_vkb_candidate_pane_g3

0xc87f,	// (0x000270aa) cell_vkb_candidate_pane_g4_ParamLimits

0xc87f,	// (0x000270aa) cell_vkb_candidate_pane_g4

0xc950,	// (0x0002717b) cell_app_pane_cp2_g1_ParamLimits

0xc950,	// (0x0002717b) cell_app_pane_cp2_g1

0xc96e,	// (0x00027199) cell_app_pane_cp2_g2_ParamLimits

0xc96e,	// (0x00027199) cell_app_pane_cp2_g2

0x0001,

0xfbbd,	// (0x0002a3e8) cell_app_pane_cp2_g_ParamLimits

0xfbbd,	// (0x0002a3e8) cell_app_pane_cp2_g

0xc97a,	// (0x000271a5) cell_app_pane_cp2_t1_ParamLimits

0xc97a,	// (0x000271a5) cell_app_pane_cp2_t1

0x883e,	// (0x00023069) grid_highlight_pane_cp1_ParamLimits

0x883e,	// (0x00023069) grid_highlight_pane_cp1

0x725a,	// (0x00021a85) cell_hwr_candidate_pane_cp1_ParamLimits

0x725a,	// (0x00021a85) cell_hwr_candidate_pane_cp1

0xc50b,	// (0x00026d36) fep_hwr_candidate_drop_down_list_pane_g1

0xc98c,	// (0x000271b7) fep_hwr_candidate_drop_down_list_pane_g2

0xc999,	// (0x000271c4) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc2,	// (0x0002a3ed) fep_hwr_candidate_drop_down_list_pane_g

0x7279,	// (0x00021aa4) fep_hwr_candidate_drop_down_list_scroll_pane

0x7282,	// (0x00021aad) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7282,	// (0x00021aad) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x728f,	// (0x00021aba) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x728f,	// (0x00021aba) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x729c,	// (0x00021ac7) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x729c,	// (0x00021ac7) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc864,	// (0x0002708f) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc864,	// (0x0002708f) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc87f,	// (0x000270aa) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc87f,	// (0x000270aa) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x72a9,	// (0x00021ad4) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x72a9,	// (0x00021ad4) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x72c4,	// (0x00021aef) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x72c4,	// (0x00021aef) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x72df,	// (0x00021b0a) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x72df,	// (0x00021b0a) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc9,	// (0x0002a3f4) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc9,	// (0x0002a3f4) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc9a6,	// (0x000271d1) cell_vkb_candidate_pane_cp1_ParamLimits

0xc9a6,	// (0x000271d1) cell_vkb_candidate_pane_cp1

0xc50b,	// (0x00026d36) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc50b,	// (0x00026d36) fep_vkb_candidate_drop_down_list_pane_g1

0xc98c,	// (0x000271b7) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc98c,	// (0x000271b7) fep_vkb_candidate_drop_down_list_pane_g2

0xc999,	// (0x000271c4) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc999,	// (0x000271c4) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbc2,	// (0x0002a3ed) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbc2,	// (0x0002a3ed) fep_vkb_candidate_drop_down_list_pane_g

0xc9c6,	// (0x000271f1) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc9c6,	// (0x000271f1) fep_vkb_candidate_drop_down_list_scroll_pane

0xc9d3,	// (0x000271fe) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc9d3,	// (0x000271fe) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc9e0,	// (0x0002720b) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc9e0,	// (0x0002720b) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc9ec,	// (0x00027217) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc9ec,	// (0x00027217) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc822,	// (0x0002704d) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc822,	// (0x0002704d) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc843,	// (0x0002706e) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc843,	// (0x0002706e) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc9f8,	// (0x00027223) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc9f8,	// (0x00027223) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xca19,	// (0x00027244) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xca19,	// (0x00027244) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xca3a,	// (0x00027265) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xca3a,	// (0x00027265) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbda,	// (0x0002a405) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbda,	// (0x0002a405) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x7f0e,	// (0x00022739) title_pane_g1_ParamLimits

0x7f1b,	// (0x00022746) title_pane_g2_ParamLimits

0xf54e,	// (0x00029d79) title_pane_g_ParamLimits

0x8e82,	// (0x000236ad) aid_call2_pane

0x8e8a,	// (0x000236b5) aid_call_pane

0x8e92,	// (0x000236bd) popup_clock_analogue_window_g1

0x8e92,	// (0x000236bd) popup_clock_analogue_window_g2

0x61b7,	// (0x000209e2) popup_clock_analogue_window_g3

0x61c0,	// (0x000209eb) popup_clock_analogue_window_g4

0x7efa,	// (0x00022725) popup_clock_analogue_window_g5

0x0004,

0xf6f8,	// (0x00029f23) popup_clock_analogue_window_g

0x61c8,	// (0x000209f3) popup_clock_analogue_window_t1

0x61d6,	// (0x00020a01) clock_digital_number_pane_ParamLimits

0x61d6,	// (0x00020a01) clock_digital_number_pane

0x61e2,	// (0x00020a0d) clock_digital_number_pane_cp02_ParamLimits

0x61e2,	// (0x00020a0d) clock_digital_number_pane_cp02

0x61ee,	// (0x00020a19) clock_digital_number_pane_cp03_ParamLimits

0x61ee,	// (0x00020a19) clock_digital_number_pane_cp03

0x61fa,	// (0x00020a25) clock_digital_number_pane_cp04_ParamLimits

0x61fa,	// (0x00020a25) clock_digital_number_pane_cp04

0x6206,	// (0x00020a31) clock_digital_separator_pane_ParamLimits

0x6206,	// (0x00020a31) clock_digital_separator_pane

0x6212,	// (0x00020a3d) popup_clock_digital_window_t1_ParamLimits

0x6212,	// (0x00020a3d) popup_clock_digital_window_t1

0x7efa,	// (0x00022725) clock_digital_number_pane_g1

0x7efa,	// (0x00022725) clock_digital_number_pane_g2

0x0001,

0xf703,	// (0x00029f2e) clock_digital_number_pane_g

0x7efa,	// (0x00022725) clock_digital_separator_pane_g1

0x7efa,	// (0x00022725) clock_digital_separator_pane_g2

0x0001,

0xf703,	// (0x00029f2e) clock_digital_separator_pane_g

0x9806,	// (0x00024031) aid_fill_nsta_ParamLimits

0x9948,	// (0x00024173) indicator_nsta_pane_ParamLimits

0x9ac1,	// (0x000242ec) popup_clock_analogue_window

0x9ac1,	// (0x000242ec) popup_clock_digital_window

0x7fe4,	// (0x0002280f) grid_indicator_nsta_pane_ParamLimits

0xbc75,	// (0x000264a0) clock_nsta_pane_t2

0x0001,

0xfaac,	// (0x0002a2d7) clock_nsta_pane_t

0x617b,	// (0x000209a6) aid_size_max_handle

0x6185,	// (0x000209b0) aid_size_min_handle

0x94aa,	// (0x00023cd5) editor_scroll_pane

0xca55,	// (0x00027280) ex_editor_pane

0x89ac,	// (0x000231d7) scroll_pane_cp13

0x87dd,	// (0x00023008) scroll_pane_cp14

0x8ec1,	// (0x000236ec) scroll_pane_cp36

0x8eed,	// (0x00023718) list_single_graphic_hl_pane_cp2_ParamLimits

0x8eed,	// (0x00023718) list_single_graphic_hl_pane_cp2

0x5422,	// (0x0001fc4d) list_single_graphic_hl_pane_ParamLimits

0x5422,	// (0x0001fc4d) list_single_graphic_hl_pane

0x5992,	// (0x000201bd) aid_size_min_hl_cp1

0xca5d,	// (0x00027288) list_highlight_pane_cp34_ParamLimits

0xca5d,	// (0x00027288) list_highlight_pane_cp34

0xca6e,	// (0x00027299) list_single_graphic_hl_pane_g1_ParamLimits

0xca6e,	// (0x00027299) list_single_graphic_hl_pane_g1

0x599b,	// (0x000201c6) list_single_graphic_hl_pane_g2_ParamLimits

0x599b,	// (0x000201c6) list_single_graphic_hl_pane_g2

0x599b,	// (0x000201c6) list_single_graphic_hl_pane_g3_ParamLimits

0x599b,	// (0x000201c6) list_single_graphic_hl_pane_g3

0x59a7,	// (0x000201d2) list_single_graphic_hl_pane_g4_ParamLimits

0x59a7,	// (0x000201d2) list_single_graphic_hl_pane_g4

0x59b3,	// (0x000201de) list_single_graphic_hl_pane_g5_ParamLimits

0x59b3,	// (0x000201de) list_single_graphic_hl_pane_g5

0x0004,

0xfbeb,	// (0x0002a416) list_single_graphic_hl_pane_g_ParamLimits

0xfbeb,	// (0x0002a416) list_single_graphic_hl_pane_g

0x59c7,	// (0x000201f2) list_single_graphic_hl_pane_t1_ParamLimits

0x59c7,	// (0x000201f2) list_single_graphic_hl_pane_t1

0xca7b,	// (0x000272a6) aid_size_min_hl_cp2

0xca84,	// (0x000272af) list_highlight_pane_cp34_cp2_ParamLimits

0xca84,	// (0x000272af) list_highlight_pane_cp34_cp2

0xca6e,	// (0x00027299) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xca6e,	// (0x00027299) list_single_graphic_hl_pane_g1_cp2

0xca91,	// (0x000272bc) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xca91,	// (0x000272bc) list_single_graphic_hl_pane_g2_cp2

0xca9d,	// (0x000272c8) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xca9d,	// (0x000272c8) list_single_graphic_hl_pane_g3_cp2

0x8fee,	// (0x00023819) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x8fee,	// (0x00023819) list_single_graphic_hl_pane_g4_cp2

0xcaab,	// (0x000272d6) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xcaab,	// (0x000272d6) list_single_graphic_hl_pane_g5_cp2

0x64bd,	// (0x00020ce8) control_pane_g4_ParamLimits

0x64bd,	// (0x00020ce8) control_pane_g4

0x97e4,	// (0x0002400f) bg_popup_sub_pane_cp10_ParamLimits

0xc2a7,	// (0x00026ad2) list_choice_list_pane_ParamLimits

0xc2b6,	// (0x00026ae1) scroll_pane_cp23

0x826d,	// (0x00022a98) bg_popup_preview_window_pane_cp02_ParamLimits

0xc8d0,	// (0x000270fb) list_preview_fixed_pane_ParamLimits

0xc8e6,	// (0x00027111) list_preview_fixed_pane_cp_ParamLimits

0xc8e6,	// (0x00027111) list_preview_fixed_pane_cp

0xc8f2,	// (0x0002711d) popup_preview_fixed_window_g1_ParamLimits

0xc8f2,	// (0x0002711d) popup_preview_fixed_window_g1

0xc8fe,	// (0x00027129) popup_preview_fixed_window_g2_ParamLimits

0xc8fe,	// (0x00027129) popup_preview_fixed_window_g2

0x0002,

0xfb7a,	// (0x0002a3a5) popup_preview_fixed_window_g_ParamLimits

0xfb7a,	// (0x0002a3a5) popup_preview_fixed_window_g

0x60ef,	// (0x0002091a) aid_navi_side_left_pane_ParamLimits

0x6104,	// (0x0002092f) aid_navi_side_right_pane_ParamLimits

0x611c,	// (0x00020947) navi_icon_pane_stacon_ParamLimits

0x6130,	// (0x0002095b) navi_navi_pane_stacon_ParamLimits

0x611c,	// (0x00020947) navi_text_pane_stacon_ParamLimits

0x7ef0,	// (0x0002271b) main_text_info_pane

0xcad5,	// (0x00027300) listscroll_text_info_pane

0xcadd,	// (0x00027308) list_text_info_pane_ParamLimits

0xcadd,	// (0x00027308) list_text_info_pane

0xcaec,	// (0x00027317) scroll_pane_cp24_ParamLimits

0xcaec,	// (0x00027317) scroll_pane_cp24

0xcb0a,	// (0x00027335) list_text_info_pane_t1_ParamLimits

0xcb0a,	// (0x00027335) list_text_info_pane_t1

0x6603,	// (0x00020e2e) popup_fast_swap2_window_ParamLimits

0x6603,	// (0x00020e2e) popup_fast_swap2_window

0xcb3f,	// (0x0002736a) aid_size_cell_fast2

0x7ef0,	// (0x0002271b) bg_popup_window_pane_cp17

0xa152,	// (0x0002497d) heading_pane_cp2

0x84b0,	// (0x00022cdb) listscroll_fast2_pane

0xcb49,	// (0x00027374) grid_fast2_pane

0xcb53,	// (0x0002737e) listscroll_fast2_pane_g1

0xcb5b,	// (0x00027386) listscroll_fast2_pane_g2

0x0001,

0xfbf6,	// (0x0002a421) listscroll_fast2_pane_g

0x89ac,	// (0x000231d7) scroll_pane_cp26

0xcb65,	// (0x00027390) cell_fast2_pane_ParamLimits

0xcb65,	// (0x00027390) cell_fast2_pane

0xcb7a,	// (0x000273a5) cell_fast2_pane_g1

0xcb83,	// (0x000273ae) cell_fast2_pane_g2

0xcb8c,	// (0x000273b7) cell_fast2_pane_g3

0x0002,

0xfbfb,	// (0x0002a426) cell_fast2_pane_g

0x859a,	// (0x00022dc5) grid_highlight_pane_cp9

0x85af,	// (0x00022dda) main_eswt_pane_ParamLimits

0x85af,	// (0x00022dda) main_eswt_pane

0xcb01,	// (0x0002732c) list_single_text_info_pane

0xcb94,	// (0x000273bf) eswt_ctrl_button_pane

0xcb94,	// (0x000273bf) eswt_ctrl_canvas_pane

0xcb9c,	// (0x000273c7) eswt_ctrl_combo_pane

0xcb94,	// (0x000273bf) eswt_ctrl_default_pane

0xcb94,	// (0x000273bf) eswt_ctrl_label_pane

0xcba4,	// (0x000273cf) eswt_ctrl_wait_pane

0xcbac,	// (0x000273d7) eswt_shell_pane

0x7ef0,	// (0x0002271b) listscroll_eswt_app_pane

0xcbcc,	// (0x000273f7) popup_eswt_tasktip_window_ParamLimits

0xcbcc,	// (0x000273f7) popup_eswt_tasktip_window

0x9d56,	// (0x00024581) bg_popup_window_pane_cp18

0xcbdd,	// (0x00027408) eswt_control_pane_g1_ParamLimits

0xcbdd,	// (0x00027408) eswt_control_pane_g1

0xcbea,	// (0x00027415) eswt_control_pane_g2_ParamLimits

0xcbea,	// (0x00027415) eswt_control_pane_g2

0xcbf7,	// (0x00027422) eswt_control_pane_g3_ParamLimits

0xcbf7,	// (0x00027422) eswt_control_pane_g3

0xcc04,	// (0x0002742f) eswt_control_pane_g4_ParamLimits

0xcc04,	// (0x0002742f) eswt_control_pane_g4

0x0003,

0xfc02,	// (0x0002a42d) eswt_control_pane_g_ParamLimits

0xfc02,	// (0x0002a42d) eswt_control_pane_g

0x883e,	// (0x00023069) bg_button_pane_ParamLimits

0x883e,	// (0x00023069) bg_button_pane

0x85af,	// (0x00022dda) common_borders_pane_copy2_ParamLimits

0x85af,	// (0x00022dda) common_borders_pane_copy2

0xcc11,	// (0x0002743c) control_button_pane_g1_ParamLimits

0xcc11,	// (0x0002743c) control_button_pane_g1

0xcc1d,	// (0x00027448) control_button_pane_g2_ParamLimits

0xcc1d,	// (0x00027448) control_button_pane_g2

0xcc29,	// (0x00027454) control_button_pane_g3_ParamLimits

0xcc29,	// (0x00027454) control_button_pane_g3

0x0002,

0xfc0b,	// (0x0002a436) control_button_pane_g_ParamLimits

0xfc0b,	// (0x0002a436) control_button_pane_g

0xcc3d,	// (0x00027468) control_button_pane_t1

0xcc4b,	// (0x00027476) control_button_pane_t2

0x0001,

0xfc12,	// (0x0002a43d) control_button_pane_t

0x9ce2,	// (0x0002450d) bg_button_pane_g1

0x9cea,	// (0x00024515) bg_button_pane_g2

0x9cf2,	// (0x0002451d) bg_button_pane_g3

0x9cfa,	// (0x00024525) bg_button_pane_g4

0x9d02,	// (0x0002452d) bg_button_pane_g5

0x9d0a,	// (0x00024535) bg_button_pane_g6

0x9d12,	// (0x0002453d) bg_button_pane_g7

0x9d1a,	// (0x00024545) bg_button_pane_g8

0x9d22,	// (0x0002454d) bg_button_pane_g9

0x0008,

0xf85f,	// (0x0002a08a) bg_button_pane_g

0xc262,	// (0x00026a8d) common_borders_pane_ParamLimits

0xc262,	// (0x00026a8d) common_borders_pane

0xcbdd,	// (0x00027408) eswt_control_pane_g1_copy1_ParamLimits

0xcbdd,	// (0x00027408) eswt_control_pane_g1_copy1

0xcbea,	// (0x00027415) eswt_control_pane_g2_copy1_ParamLimits

0xcbea,	// (0x00027415) eswt_control_pane_g2_copy1

0xcbf7,	// (0x00027422) eswt_control_pane_g3_copy1_ParamLimits

0xcbf7,	// (0x00027422) eswt_control_pane_g3_copy1

0xcc04,	// (0x0002742f) eswt_control_pane_g4_copy1_ParamLimits

0xcc04,	// (0x0002742f) eswt_control_pane_g4_copy1

0xc29d,	// (0x00026ac8) bg_eswt_ctrl_canvas_pane_g1

0xc262,	// (0x00026a8d) common_borders_pane_cp2_ParamLimits

0xc262,	// (0x00026a8d) common_borders_pane_cp2

0xc262,	// (0x00026a8d) common_borders_pane_cp3_ParamLimits

0xc262,	// (0x00026a8d) common_borders_pane_cp3

0xcc59,	// (0x00027484) separator_horizontal_pane

0xcc61,	// (0x0002748c) separator_vertical_pane

0xcbdd,	// (0x00027408) eswt_control_pane_g1_copy2_ParamLimits

0xcbdd,	// (0x00027408) eswt_control_pane_g1_copy2

0xcbea,	// (0x00027415) eswt_control_pane_g2_copy2_ParamLimits

0xcbea,	// (0x00027415) eswt_control_pane_g2_copy2

0xcbf7,	// (0x00027422) eswt_control_pane_g3_copy2_ParamLimits

0xcbf7,	// (0x00027422) eswt_control_pane_g3_copy2

0xcc04,	// (0x0002742f) eswt_control_pane_g4_copy2_ParamLimits

0xcc04,	// (0x0002742f) eswt_control_pane_g4_copy2

0x7ef0,	// (0x0002271b) common_borders_pane_cp4

0xcc6a,	// (0x00027495) separator_horizontal_pane_g1

0xcc73,	// (0x0002749e) separator_horizontal_pane_g2

0xcc7c,	// (0x000274a7) separator_horizontal_pane_g3

0x0002,

0xfc17,	// (0x0002a442) separator_horizontal_pane_g

0xcbdd,	// (0x00027408) eswt_control_pane_g1_copy3_ParamLimits

0xcbdd,	// (0x00027408) eswt_control_pane_g1_copy3

0xcbea,	// (0x00027415) eswt_control_pane_g2_copy3_ParamLimits

0xcbea,	// (0x00027415) eswt_control_pane_g2_copy3

0xcbf7,	// (0x00027422) eswt_control_pane_g3_copy3_ParamLimits

0xcbf7,	// (0x00027422) eswt_control_pane_g3_copy3

0xcc04,	// (0x0002742f) eswt_control_pane_g4_copy3_ParamLimits

0xcc04,	// (0x0002742f) eswt_control_pane_g4_copy3

0x7ef0,	// (0x0002271b) common_borders_pane_cp5

0xcc85,	// (0x000274b0) separator_vertical_pane_g1

0xcc8e,	// (0x000274b9) separator_vertical_pane_g2

0xcc97,	// (0x000274c2) separator_vertical_pane_g3

0x0002,

0xfc1e,	// (0x0002a449) separator_vertical_pane_g

0xcbdd,	// (0x00027408) eswt_control_pane_g1_copy4_ParamLimits

0xcbdd,	// (0x00027408) eswt_control_pane_g1_copy4

0xcbea,	// (0x00027415) eswt_control_pane_g2_copy4_ParamLimits

0xcbea,	// (0x00027415) eswt_control_pane_g2_copy4

0xcbf7,	// (0x00027422) eswt_control_pane_g3_copy4_ParamLimits

0xcbf7,	// (0x00027422) eswt_control_pane_g3_copy4

0xcc04,	// (0x0002742f) eswt_control_pane_g4_copy4_ParamLimits

0xcc04,	// (0x0002742f) eswt_control_pane_g4_copy4

0xcca0,	// (0x000274cb) eswt_ctrl_combo_button_pane

0xcca8,	// (0x000274d3) eswt_ctrl_input_pane

0xccb0,	// (0x000274db) popup_choice_list_window_cp70

0xccb8,	// (0x000274e3) eswt_ctrl_input_pane_t1

0x7ef0,	// (0x0002271b) input_focus_pane_cp70

0xc262,	// (0x00026a8d) bg_button_pane_cp70_ParamLimits

0xc262,	// (0x00026a8d) bg_button_pane_cp70

0xccc6,	// (0x000274f1) eswt_ctrl_combo_button_pane_g1

0xccce,	// (0x000274f9) wait_bar_pane_cp70

0x9d56,	// (0x00024581) bg_popup_window_pane_cp70_ParamLimits

0x9d56,	// (0x00024581) bg_popup_window_pane_cp70

0xccd6,	// (0x00027501) popup_eswt_tasktip_window_t1

0xccec,	// (0x00027517) wait_bar_pane_cp71_ParamLimits

0xccec,	// (0x00027517) wait_bar_pane_cp71

0xccf8,	// (0x00027523) grid_eswt_app_pane

0x8cce,	// (0x000234f9) scroll_pane_cp70

0xcd01,	// (0x0002752c) cell_eswt_app_pane_ParamLimits

0xcd01,	// (0x0002752c) cell_eswt_app_pane

0xcd35,	// (0x00027560) cell_eswt_app_pane_g1_ParamLimits

0xcd35,	// (0x00027560) cell_eswt_app_pane_g1

0xcd64,	// (0x0002758f) cell_eswt_app_pane_g2_ParamLimits

0xcd64,	// (0x0002758f) cell_eswt_app_pane_g2

0x0001,

0xfc25,	// (0x0002a450) cell_eswt_app_pane_g_ParamLimits

0xfc25,	// (0x0002a450) cell_eswt_app_pane_g

0xcd88,	// (0x000275b3) cell_eswt_app_pane_t1_ParamLimits

0xcd88,	// (0x000275b3) cell_eswt_app_pane_t1

0xcdba,	// (0x000275e5) grid_highlight_pane_cp70_ParamLimits

0xcdba,	// (0x000275e5) grid_highlight_pane_cp70

0x938b,	// (0x00023bb6) set_content_pane_g1

0x9745,	// (0x00023f70) status_small_volume_pane

0x72fa,	// (0x00021b25) status_small_volume_pane_g1

0x7302,	// (0x00021b2d) volume_small2_pane

0x730b,	// (0x00021b36) volume_small2_pane_g1

0x7314,	// (0x00021b3f) volume_small2_pane_g2

0x731d,	// (0x00021b48) volume_small2_pane_g3

0x7326,	// (0x00021b51) volume_small2_pane_g4

0x732f,	// (0x00021b5a) volume_small2_pane_g5

0x7338,	// (0x00021b63) volume_small2_pane_g6

0x7341,	// (0x00021b6c) volume_small2_pane_g7

0x734a,	// (0x00021b75) volume_small2_pane_g8

0x7353,	// (0x00021b7e) volume_small2_pane_g9

0x735c,	// (0x00021b87) volume_small2_pane_g10

0x0009,

0xfc2a,	// (0x0002a455) volume_small2_pane_g

0xc653,	// (0x00026e7e) fep_vkb_top_text_pane_g1_ParamLimits

0xc66e,	// (0x00026e99) fep_vkb_top_text_pane_t1_ParamLimits

0xc90a,	// (0x00027135) popup_preview_fixed_window_g3_ParamLimits

0xc90a,	// (0x00027135) popup_preview_fixed_window_g3

0x6aaa,	// (0x000212d5) popup_toolbar_trans_pane

0xb0b4,	// (0x000258df) aid_height_set_list_ParamLimits

0xb0c5,	// (0x000258f0) aid_size_parent_ParamLimits

0x97e4,	// (0x0002400f) list_highlight_pane_cp2_ParamLimits

0x938b,	// (0x00023bb6) set_content_pane_g1_ParamLimits

0x5444,	// (0x0001fc6f) list_single_image_pane_ParamLimits

0x5444,	// (0x0001fc6f) list_single_image_pane

0xcdc6,	// (0x000275f1) aid_size_cell_image_ParamLimits

0xcdc6,	// (0x000275f1) aid_size_cell_image

0xcdd3,	// (0x000275fe) grid_single_image_pane_ParamLimits

0xcdd3,	// (0x000275fe) grid_single_image_pane

0xcddf,	// (0x0002760a) list_single_image_pane_g1_ParamLimits

0xcddf,	// (0x0002760a) list_single_image_pane_g1

0xcdeb,	// (0x00027616) list_single_image_pane_g2_ParamLimits

0xcdeb,	// (0x00027616) list_single_image_pane_g2

0x0001,

0xfc3f,	// (0x0002a46a) list_single_image_pane_g_ParamLimits

0xfc3f,	// (0x0002a46a) list_single_image_pane_g

0xcdff,	// (0x0002762a) list_single_image_pane_t1_ParamLimits

0xcdff,	// (0x0002762a) list_single_image_pane_t1

0xce15,	// (0x00027640) cell_image_list_pane_ParamLimits

0xce15,	// (0x00027640) cell_image_list_pane

0xce29,	// (0x00027654) cell_image_list_pane_g1

0xce32,	// (0x0002765d) cell_image_list_pane_g2

0x0001,

0xfc44,	// (0x0002a46f) cell_image_list_pane_g

0xce3b,	// (0x00027666) aid_size_cell_tb_trans_pane

0x883e,	// (0x00023069) bg_tb_trans_pane

0xce4d,	// (0x00027678) grid_tb_trans_pane

0x9ce2,	// (0x0002450d) bg_tb_trans_pane_g1

0x9cea,	// (0x00024515) bg_tb_trans_pane_g2

0x9cf2,	// (0x0002451d) bg_tb_trans_pane_g3

0x9cfa,	// (0x00024525) bg_tb_trans_pane_g4

0x9d02,	// (0x0002452d) bg_tb_trans_pane_g5

0x9d1a,	// (0x00024545) bg_tb_trans_pane_g6

0x9d22,	// (0x0002454d) bg_tb_trans_pane_g7

0x9d0a,	// (0x00024535) bg_tb_trans_pane_g8

0x9d12,	// (0x0002453d) bg_tb_trans_pane_g9

0x0008,

0xfc49,	// (0x0002a474) bg_tb_trans_pane_g

0xce61,	// (0x0002768c) cell_toolbar_trans_pane_ParamLimits

0xce61,	// (0x0002768c) cell_toolbar_trans_pane

0xc29d,	// (0x00026ac8) cell_toolbar_trans_pane_g1

0xbe48,	// (0x00026673) list_form2_midp_pane_t1

0xbe56,	// (0x00026681) list_form2_midp_pane_t2

0x0001,

0xfaf2,	// (0x0002a31d) list_form2_midp_pane_t

0xbe64,	// (0x0002668f) scroll_pane_cp51_ParamLimits

0xc020,	// (0x0002684b) form2_midp_wait_pane_g1

0xc029,	// (0x00026854) form2_midp_wait_pane_g2

0xc032,	// (0x0002685d) form2_midp_wait_pane_g3

0x0002,

0xfb07,	// (0x0002a332) form2_midp_wait_pane_g

0x7fe4,	// (0x0002280f) list_highlight_pane_cp21_ParamLimits

0xc080,	// (0x000268ab) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xc08f,	// (0x000268ba) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x53b7,	// (0x0001fbe2) list_single_2graphic_im_pane_ParamLimits

0x53b7,	// (0x0001fbe2) list_single_2graphic_im_pane

0xce87,	// (0x000276b2) list_single_2graphic_im_pane_g1_ParamLimits

0xce87,	// (0x000276b2) list_single_2graphic_im_pane_g1

0xce98,	// (0x000276c3) list_single_2graphic_im_pane_g2_ParamLimits

0xce98,	// (0x000276c3) list_single_2graphic_im_pane_g2

0xcea4,	// (0x000276cf) list_single_2graphic_im_pane_g3_ParamLimits

0xcea4,	// (0x000276cf) list_single_2graphic_im_pane_g3

0x0003,

0xfc5c,	// (0x0002a487) list_single_2graphic_im_pane_g_ParamLimits

0xfc5c,	// (0x0002a487) list_single_2graphic_im_pane_g

0xcec4,	// (0x000276ef) list_single_2graphic_im_pane_t1_ParamLimits

0xcec4,	// (0x000276ef) list_single_2graphic_im_pane_t1

0xc916,	// (0x00027141) list_single_graphic_2heading_pane_fp_ParamLimits

0xc916,	// (0x00027141) list_single_graphic_2heading_pane_fp

0x5804,	// (0x0002002f) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x5804,	// (0x0002002f) list_single_graphic_2heading_pane_fp_g1

0xc92c,	// (0x00027157) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc92c,	// (0x00027157) list_single_graphic_2heading_pane_fp_g2

0x4b25,	// (0x0001f350) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x4b25,	// (0x0001f350) list_single_graphic_2heading_pane_fp_g3

0x57d9,	// (0x00020004) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x57d9,	// (0x00020004) list_single_graphic_2heading_pane_fp_g4

0xc938,	// (0x00027163) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc938,	// (0x00027163) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb8a,	// (0x0002a3b5) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb8a,	// (0x0002a3b5) list_single_graphic_2heading_pane_fp_g

0x59dd,	// (0x00020208) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x59dd,	// (0x00020208) list_single_graphic_2heading_pane_fp_t1

0x583c,	// (0x00020067) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x583c,	// (0x00020067) list_single_graphic_2heading_pane_fp_t2

0x59f3,	// (0x0002021e) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x59f3,	// (0x0002021e) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc65,	// (0x0002a490) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc65,	// (0x0002a490) list_single_graphic_2heading_pane_fp_t

0xc329,	// (0x00026b54) fep_hwr_write_pane_g5_ParamLimits

0xc329,	// (0x00026b54) fep_hwr_write_pane_g5

0xc335,	// (0x00026b60) fep_hwr_write_pane_g6_ParamLimits

0xc335,	// (0x00026b60) fep_hwr_write_pane_g6

0xcbac,	// (0x000273d7) eswt_shell_pane_ParamLimits

0x9d56,	// (0x00024581) bg_popup_window_pane_cp18_ParamLimits

0xb013,	// (0x0002583e) heading_pane_cp70

0xccd6,	// (0x00027501) popup_eswt_tasktip_window_t1_ParamLimits

0x985b,	// (0x00024086) aid_touch_tab_arrow_left

0x9867,	// (0x00024092) aid_touch_tab_arrow_right

0x7f2c,	// (0x00022757) title_pane_g3_ParamLimits

0x7f2c,	// (0x00022757) title_pane_g3

0x87fd,	// (0x00023028) set_value_pane_g1

0x6aaa,	// (0x000212d5) popup_toolbar_trans_pane_ParamLimits

0xce3b,	// (0x00027666) aid_size_cell_tb_trans_pane_ParamLimits

0x883e,	// (0x00023069) bg_tb_trans_pane_ParamLimits

0xce4d,	// (0x00027678) grid_tb_trans_pane_ParamLimits

0x826d,	// (0x00022a98) cont_note_pane_ParamLimits

0x826d,	// (0x00022a98) cont_note_pane

0x85af,	// (0x00022dda) cont_snote2_single_text_pane_ParamLimits

0x85af,	// (0x00022dda) cont_snote2_single_text_pane

0x85af,	// (0x00022dda) cont_snote2_single_graphic_pane_ParamLimits

0x85af,	// (0x00022dda) cont_snote2_single_graphic_pane

0xa368,	// (0x00024b93) cont_note_wait_pane_ParamLimits

0xa368,	// (0x00024b93) cont_note_wait_pane

0xa368,	// (0x00024b93) cont_note_image_pane_ParamLimits

0xa368,	// (0x00024b93) cont_note_image_pane

0xcef5,	// (0x00027720) popup_note2_window_g1_ParamLimits

0xcef5,	// (0x00027720) popup_note2_window_g1

0xcf26,	// (0x00027751) popup_note2_window_t1_ParamLimits

0xcf26,	// (0x00027751) popup_note2_window_t1

0xcf6b,	// (0x00027796) popup_note2_window_t2_ParamLimits

0xcf6b,	// (0x00027796) popup_note2_window_t2

0xcfb0,	// (0x000277db) popup_note2_window_t3_ParamLimits

0xcfb0,	// (0x000277db) popup_note2_window_t3

0xcff5,	// (0x00027820) popup_note2_window_t4_ParamLimits

0xcff5,	// (0x00027820) popup_note2_window_t4

0x82e5,	// (0x00022b10) popup_note2_window_t5_ParamLimits

0x82e5,	// (0x00022b10) popup_note2_window_t5

0x0004,

0xfc71,	// (0x0002a49c) popup_note2_window_t_ParamLimits

0xfc71,	// (0x0002a49c) popup_note2_window_t

0xd024,	// (0x0002784f) popup_note2_image_window_g1_ParamLimits

0xd024,	// (0x0002784f) popup_note2_image_window_g1

0xd030,	// (0x0002785b) popup_note2_image_window_g2_ParamLimits

0xd030,	// (0x0002785b) popup_note2_image_window_g2

0x0001,

0xfc7c,	// (0x0002a4a7) popup_note2_image_window_g_ParamLimits

0xfc7c,	// (0x0002a4a7) popup_note2_image_window_g

0xd042,	// (0x0002786d) popup_note2_image_window_t1_ParamLimits

0xd042,	// (0x0002786d) popup_note2_image_window_t1

0xd05a,	// (0x00027885) popup_note2_image_window_t2_ParamLimits

0xd05a,	// (0x00027885) popup_note2_image_window_t2

0xd072,	// (0x0002789d) popup_note2_image_window_t3_ParamLimits

0xd072,	// (0x0002789d) popup_note2_image_window_t3

0x0002,

0xfc81,	// (0x0002a4ac) popup_note2_image_window_t_ParamLimits

0xfc81,	// (0x0002a4ac) popup_note2_image_window_t

0xa376,	// (0x00024ba1) popup_note2_wait_window_g1_ParamLimits

0xa376,	// (0x00024ba1) popup_note2_wait_window_g1

0xd08e,	// (0x000278b9) popup_note2_wait_window_g2_ParamLimits

0xd08e,	// (0x000278b9) popup_note2_wait_window_g2

0xa38e,	// (0x00024bb9) popup_note2_wait_window_g3_ParamLimits

0xa38e,	// (0x00024bb9) popup_note2_wait_window_g3

0x0002,

0xfc88,	// (0x0002a4b3) popup_note2_wait_window_g_ParamLimits

0xfc88,	// (0x0002a4b3) popup_note2_wait_window_g

0xd09a,	// (0x000278c5) popup_note2_wait_window_t1_ParamLimits

0xd09a,	// (0x000278c5) popup_note2_wait_window_t1

0xd0b8,	// (0x000278e3) popup_note2_wait_window_t2_ParamLimits

0xd0b8,	// (0x000278e3) popup_note2_wait_window_t2

0xd0d6,	// (0x00027901) popup_note2_wait_window_t3_ParamLimits

0xd0d6,	// (0x00027901) popup_note2_wait_window_t3

0xd0e8,	// (0x00027913) popup_note2_wait_window_t4_ParamLimits

0xd0e8,	// (0x00027913) popup_note2_wait_window_t4

0x0003,

0xfc8f,	// (0x0002a4ba) popup_note2_wait_window_t_ParamLimits

0xfc8f,	// (0x0002a4ba) popup_note2_wait_window_t

0xd0fa,	// (0x00027925) wait_bar2_pane_ParamLimits

0xd0fa,	// (0x00027925) wait_bar2_pane

0xd112,	// (0x0002793d) popup_snote2_single_text_window_g1_ParamLimits

0xd112,	// (0x0002793d) popup_snote2_single_text_window_g1

0xd13a,	// (0x00027965) popup_snote2_single_text_window_t1_ParamLimits

0xd13a,	// (0x00027965) popup_snote2_single_text_window_t1

0xd186,	// (0x000279b1) popup_snote2_single_text_window_t2_ParamLimits

0xd186,	// (0x000279b1) popup_snote2_single_text_window_t2

0xd1d2,	// (0x000279fd) popup_snote2_single_text_window_t3_ParamLimits

0xd1d2,	// (0x000279fd) popup_snote2_single_text_window_t3

0xd213,	// (0x00027a3e) popup_snote2_single_text_window_t4_ParamLimits

0xd213,	// (0x00027a3e) popup_snote2_single_text_window_t4

0xd249,	// (0x00027a74) popup_snote2_single_text_window_t5_ParamLimits

0xd249,	// (0x00027a74) popup_snote2_single_text_window_t5

0x0004,

0xfc98,	// (0x0002a4c3) popup_snote2_single_text_window_t_ParamLimits

0xfc98,	// (0x0002a4c3) popup_snote2_single_text_window_t

0xd274,	// (0x00027a9f) popup_snote2_single_graphic_window_g1_ParamLimits

0xd274,	// (0x00027a9f) popup_snote2_single_graphic_window_g1

0xd29c,	// (0x00027ac7) popup_snote2_single_graphic_window_g2_ParamLimits

0xd29c,	// (0x00027ac7) popup_snote2_single_graphic_window_g2

0x0001,

0xfca3,	// (0x0002a4ce) popup_snote2_single_graphic_window_g_ParamLimits

0xfca3,	// (0x0002a4ce) popup_snote2_single_graphic_window_g

0xd2c4,	// (0x00027aef) popup_snote2_single_graphic_window_t1_ParamLimits

0xd2c4,	// (0x00027aef) popup_snote2_single_graphic_window_t1

0xd310,	// (0x00027b3b) popup_snote2_single_graphic_window_t2_ParamLimits

0xd310,	// (0x00027b3b) popup_snote2_single_graphic_window_t2

0xd1d2,	// (0x000279fd) popup_snote2_single_graphic_window_t3_ParamLimits

0xd1d2,	// (0x000279fd) popup_snote2_single_graphic_window_t3

0xd213,	// (0x00027a3e) popup_snote2_single_graphic_window_t4_ParamLimits

0xd213,	// (0x00027a3e) popup_snote2_single_graphic_window_t4

0xd249,	// (0x00027a74) popup_snote2_single_graphic_window_t5_ParamLimits

0xd249,	// (0x00027a74) popup_snote2_single_graphic_window_t5

0x0004,

0xfca8,	// (0x0002a4d3) popup_snote2_single_graphic_window_t_ParamLimits

0xfca8,	// (0x0002a4d3) popup_snote2_single_graphic_window_t

0xbd1f,	// (0x0002654a) clock_nsta_pane_cp2_t1

0xbd1f,	// (0x0002654a) clock_nsta_pane_cp2_t2

0x0001,

0xfac8,	// (0x0002a2f3) clock_nsta_pane_cp2_t

0x4f9e,	// (0x0001f7c9) form_field_data_wide_pane_g1_ParamLimits

0x884c,	// (0x00023077) form_field_data_wide_pane_g2_ParamLimits

0x884c,	// (0x00023077) form_field_data_wide_pane_g2

0x8858,	// (0x00023083) form_field_data_wide_pane_g3_ParamLimits

0x8858,	// (0x00023083) form_field_data_wide_pane_g3

0x0002,

0xf67b,	// (0x00029ea6) form_field_data_wide_pane_g_ParamLimits

0xf67b,	// (0x00029ea6) form_field_data_wide_pane_g

0xbc11,	// (0x0002643c) grid_touch_3_pane_ParamLimits

0xbc11,	// (0x0002643c) grid_touch_3_pane

0xd35c,	// (0x00027b87) cell_touch_3_pane_ParamLimits

0xd35c,	// (0x00027b87) cell_touch_3_pane

0xc29d,	// (0x00026ac8) cell_touch_3_pane_g1

0xc29d,	// (0x00026ac8) cell_touch_3_pane_g2

0x0001,

0xfb4d,	// (0x0002a378) cell_touch_3_pane_g

0x8317,	// (0x00022b42) cont_query_data_pane

0x831f,	// (0x00022b4a) cont_query_data_pane_cp1

0xd38d,	// (0x00027bb8) button_value_adjust_pane_cp7

0xd395,	// (0x00027bc0) query_popup_pane_cp3

0x8f7e,	// (0x000237a9) bg_popup_sub_pane_cp22_ParamLimits

0x6231,	// (0x00020a5c) navi_navi_volume_pane_cp2

0x6249,	// (0x00020a74) popup_side_volume_key_window_g2

0x6255,	// (0x00020a80) popup_side_volume_key_window_g3

0x0002,

0xf711,	// (0x00029f3c) popup_side_volume_key_window_g

0x626f,	// (0x00020a9a) popup_side_volume_key_window_t2

0x0001,

0xf718,	// (0x00029f43) popup_side_volume_key_window_t

0x924c,	// (0x00023a77) popup_side_volume_key_window_ParamLimits

0x4c0b,	// (0x0001f436) list_double_graphic_pane_g4_ParamLimits

0x4c0b,	// (0x0001f436) list_double_graphic_pane_g4

0x53fe,	// (0x0001fc29) list_single_2heading_msg_pane_ParamLimits

0x53fe,	// (0x0001fc29) list_single_2heading_msg_pane

0x5a13,	// (0x0002023e) list_single_2heading_msg_pane_g1_ParamLimits

0x5a13,	// (0x0002023e) list_single_2heading_msg_pane_g1

0x4a3a,	// (0x0001f265) list_single_2heading_msg_pane_g2_ParamLimits

0x4a3a,	// (0x0001f265) list_single_2heading_msg_pane_g2

0x5a1f,	// (0x0002024a) list_single_2heading_msg_pane_g3_ParamLimits

0x5a1f,	// (0x0002024a) list_single_2heading_msg_pane_g3

0x5a2b,	// (0x00020256) list_single_2heading_msg_pane_g4_ParamLimits

0x5a2b,	// (0x00020256) list_single_2heading_msg_pane_g4

0x0003,

0xfcb3,	// (0x0002a4de) list_single_2heading_msg_pane_g_ParamLimits

0xfcb3,	// (0x0002a4de) list_single_2heading_msg_pane_g

0x5a43,	// (0x0002026e) list_single_2heading_msg_pane_t1_ParamLimits

0x5a43,	// (0x0002026e) list_single_2heading_msg_pane_t1

0x5a6b,	// (0x00020296) list_single_2heading_msg_pane_t2_ParamLimits

0x5a6b,	// (0x00020296) list_single_2heading_msg_pane_t2

0x5a9f,	// (0x000202ca) list_single_2heading_msg_pane_t3_ParamLimits

0x5a9f,	// (0x000202ca) list_single_2heading_msg_pane_t3

0x5ad8,	// (0x00020303) list_single_2heading_msg_pane_t4_ParamLimits

0x5ad8,	// (0x00020303) list_single_2heading_msg_pane_t4

0x0003,

0xfcbc,	// (0x0002a4e7) list_single_2heading_msg_pane_t_ParamLimits

0xfcbc,	// (0x0002a4e7) list_single_2heading_msg_pane_t

0x7f38,	// (0x00022763) title_pane_g4_ParamLimits

0x7f38,	// (0x00022763) title_pane_g4

0x603f,	// (0x0002086a) title_pane_stacon_g3_ParamLimits

0x603f,	// (0x0002086a) title_pane_stacon_g3

0xceb8,	// (0x000276e3) list_single_2graphic_im_pane_g4_ParamLimits

0xceb8,	// (0x000276e3) list_single_2graphic_im_pane_g4

0xadcf,	// (0x000255fa) popup_side_volume_key_window_cp

0xb57c,	// (0x00025da7) main_idle_act2_pane_t1

0x6b9a,	// (0x000213c5) toolbar_button_pane_g10

0x87a7,	// (0x00022fd2) popup_toolbar_window_cp1

0xbd10,	// (0x0002653b) clock_nsta_pane_cp_t1

0xbd10,	// (0x0002653b) clock_nsta_pane_cp_t2

0x0001,

0xfac3,	// (0x0002a2ee) clock_nsta_pane_cp_t

0x6231,	// (0x00020a5c) navi_navi_volume_pane_cp2_ParamLimits

0x623d,	// (0x00020a68) popup_side_volume_key_window_g1_ParamLimits

0x6249,	// (0x00020a74) popup_side_volume_key_window_g2_ParamLimits

0x6255,	// (0x00020a80) popup_side_volume_key_window_g3_ParamLimits

0xf711,	// (0x00029f3c) popup_side_volume_key_window_g_ParamLimits

0x700a,	// (0x00021835) fep_hwr_aid_pane

0x2024,	// (0x0001c84f) bg_fep_hwr_top_pane_g4_ParamLimits

0xc2f9,	// (0x00026b24) fep_hwr_top_pane_g1_ParamLimits

0xc30b,	// (0x00026b36) fep_hwr_top_pane_g2_ParamLimits

0x70c3,	// (0x000218ee) fep_hwr_top_pane_g3_ParamLimits

0xfb18,	// (0x0002a343) fep_hwr_top_pane_g_ParamLimits

0x70d8,	// (0x00021903) fep_hwr_top_text_pane_ParamLimits

0xab92,	// (0x000253bd) aid_touch_tab_arrow_arrow_2

0xab9b,	// (0x000253c6) aid_touch_tab_arrow_left_2

0x701e,	// (0x00021849) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x7055,	// (0x00021880) fep_hwr_prediction_pane

0xc462,	// (0x00026c8d) fep_vkb_prediction_pane

0xc55f,	// (0x00026d8a) fep_vkb_side_pane_g3_ParamLimits

0xc55f,	// (0x00026d8a) fep_vkb_side_pane_g3

0xc50b,	// (0x00026d36) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc98c,	// (0x000271b7) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xc999,	// (0x000271c4) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc2,	// (0x0002a3ed) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xd3ba,	// (0x00027be5) fep_hwr_prediction_pane_g1

0x7365,	// (0x00021b90) fep_hwr_prediction_pane_g2

0x736d,	// (0x00021b98) fep_hwr_prediction_pane_g3

0x7375,	// (0x00021ba0) fep_hwr_prediction_pane_g4

0x0003,

0xfcc5,	// (0x0002a4f0) fep_hwr_prediction_pane_g

0xd3ba,	// (0x00027be5) fep_vkb_prediction_pane_g1

0xd3c4,	// (0x00027bef) fep_vkb_prediction_pane_g2

0xd3cc,	// (0x00027bf7) fep_vkb_prediction_pane_g3

0xd3d4,	// (0x00027bff) fep_vkb_prediction_pane_g4

0x0003,

0xfcce,	// (0x0002a4f9) fep_vkb_prediction_pane_g

0x6e66,	// (0x00021691) slider_set_pane_g3

0x6e7a,	// (0x000216a5) slider_set_pane_g4

0x6e92,	// (0x000216bd) slider_set_pane_g5

0x6e66,	// (0x00021691) slider_set_pane_g6

0x6ea8,	// (0x000216d3) slider_set_pane_g7

0xb222,	// (0x00025a4d) slider_form_pane_g3

0xb22b,	// (0x00025a56) slider_form_pane_g4

0xb233,	// (0x00025a5e) slider_form_pane_g5

0xb222,	// (0x00025a4d) slider_form_pane_g6

0xb23b,	// (0x00025a66) slider_form_pane_g7

0xb81b,	// (0x00026046) slider_set_pane_vc_g3

0xb824,	// (0x0002604f) slider_set_pane_vc_g4

0xb82d,	// (0x00026058) slider_set_pane_vc_g5

0xb81b,	// (0x00026046) slider_set_pane_vc_g6

0xb836,	// (0x00026061) slider_set_pane_vc_g7

0xb9e6,	// (0x00026211) slider_form_pane_vc_g1

0xb9ef,	// (0x0002621a) slider_form_pane_vc_g2

0xb9f8,	// (0x00026223) slider_form_pane_vc_g3

0xb9e6,	// (0x00026211) slider_form_pane_vc_g4

0xba01,	// (0x0002622c) slider_form_pane_vc_g5

0x0004,

0xfa95,	// (0x0002a2c0) slider_form_pane_vc_g

0x7ef0,	// (0x0002271b) main_idle_act3_pane

0xd3dc,	// (0x00027c07) ai3_links_pane

0xd3e5,	// (0x00027c10) popup_ai3_data_window_ParamLimits

0xd3e5,	// (0x00027c10) popup_ai3_data_window

0x7ef0,	// (0x0002271b) grid_ai3_links_pane

0xd3fd,	// (0x00027c28) cell_ai3_links_pane_ParamLimits

0xd3fd,	// (0x00027c28) cell_ai3_links_pane

0xd415,	// (0x00027c40) bg_popup_sub_pane_cp11

0xd422,	// (0x00027c4d) cell_ai3_links_pane_g1

0x7ef0,	// (0x0002271b) bg_popup_sub_pane_cp12

0xd447,	// (0x00027c72) heading_ai3_data_pane

0xd44f,	// (0x00027c7a) list_ai3_gene_pane

0xd45b,	// (0x00027c86) popup_ai3_data_window_g1

0xd463,	// (0x00027c8e) heading_ai3_data_pane_g1

0xd46b,	// (0x00027c96) heading_ai3_data_pane_t1

0xd479,	// (0x00027ca4) list_double_ai3_gene_pane_ParamLimits

0xd479,	// (0x00027ca4) list_double_ai3_gene_pane

0xd486,	// (0x00027cb1) list_single_ai3_gene_pane_ParamLimits

0xd486,	// (0x00027cb1) list_single_ai3_gene_pane

0xc262,	// (0x00026a8d) list_highlight_pane_cp7_ParamLimits

0xc262,	// (0x00026a8d) list_highlight_pane_cp7

0xd493,	// (0x00027cbe) list_single_a13_gene_pane_t1_ParamLimits

0xd493,	// (0x00027cbe) list_single_a13_gene_pane_t1

0xd4aa,	// (0x00027cd5) list_single_ai3_gene_pane_g1

0xd4b3,	// (0x00027cde) list_single_ai3_gene_pane_g2

0x0001,

0xfcd7,	// (0x0002a502) list_single_ai3_gene_pane_g

0xd4bb,	// (0x00027ce6) list_double_ai3_gene_pane_g1_ParamLimits

0xd4bb,	// (0x00027ce6) list_double_ai3_gene_pane_g1

0xd4c7,	// (0x00027cf2) list_double_ai3_gene_pane_t1_ParamLimits

0xd4c7,	// (0x00027cf2) list_double_ai3_gene_pane_t1

0xd4e3,	// (0x00027d0e) list_double_ai3_gene_pane_t2_ParamLimits

0xd4e3,	// (0x00027d0e) list_double_ai3_gene_pane_t2

0xd4f8,	// (0x00027d23) list_double_ai3_gene_pane_t3_ParamLimits

0xd4f8,	// (0x00027d23) list_double_ai3_gene_pane_t3

0x0002,

0xfcdc,	// (0x0002a507) list_double_ai3_gene_pane_t_ParamLimits

0xfcdc,	// (0x0002a507) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x5a09,	// (0x00020234) aid_size_min_col_2

0xd3a6,	// (0x00027bd1) aid_size_min_msg_ParamLimits

0xd3a6,	// (0x00027bd1) aid_size_min_msg

0xc65f,	// (0x00026e8a) fep_vkb_top_text_pane_g2_ParamLimits

0xc65f,	// (0x00026e8a) fep_vkb_top_text_pane_g2

0x0001,

0xfb48,	// (0x0002a373) fep_vkb_top_text_pane_g_ParamLimits

0xfb48,	// (0x0002a373) fep_vkb_top_text_pane_g

0x7ef0,	// (0x0002271b) main_hc_apps_shell_pane

0xd515,	// (0x00027d40) grid_hc_apps_pane_ParamLimits

0xd515,	// (0x00027d40) grid_hc_apps_pane

0xd524,	// (0x00027d4f) list_hc_apps_pane

0xd52c,	// (0x00027d57) scroll_pane_cp37_ParamLimits

0xd52c,	// (0x00027d57) scroll_pane_cp37

0xd538,	// (0x00027d63) cell_hc_apps_pane_ParamLimits

0xd538,	// (0x00027d63) cell_hc_apps_pane

0xd5e6,	// (0x00027e11) cell_hc_apps_pane_g1_ParamLimits

0xd5e6,	// (0x00027e11) cell_hc_apps_pane_g1

0xd617,	// (0x00027e42) cell_hc_apps_pane_g2_ParamLimits

0xd617,	// (0x00027e42) cell_hc_apps_pane_g2

0xd633,	// (0x00027e5e) cell_hc_apps_pane_g3_ParamLimits

0xd633,	// (0x00027e5e) cell_hc_apps_pane_g3

0x0002,

0xfce3,	// (0x0002a50e) cell_hc_apps_pane_g_ParamLimits

0xfce3,	// (0x0002a50e) cell_hc_apps_pane_g

0xd655,	// (0x00027e80) cell_hc_apps_pane_t1_ParamLimits

0xd655,	// (0x00027e80) cell_hc_apps_pane_t1

0x826d,	// (0x00022a98) grid_highlight_pane_cp10_ParamLimits

0x826d,	// (0x00022a98) grid_highlight_pane_cp10

0xd695,	// (0x00027ec0) list_single_hc_apps_pane_ParamLimits

0xd695,	// (0x00027ec0) list_single_hc_apps_pane

0xd6fd,	// (0x00027f28) list_single_hc_apps_pane_g1

0x5afd,	// (0x00020328) list_single_hc_apps_pane_g2

0x0001,

0xfcea,	// (0x0002a515) list_single_hc_apps_pane_g

0x5b16,	// (0x00020341) list_single_hc_apps_pane_g2_copy1

0x5b32,	// (0x0002035d) list_single_hc_apps_pane_t1

0x7fe4,	// (0x0002280f) bg_set_opt_pane_cp_ParamLimits

0x5f66,	// (0x00020791) setting_slider_pane_t1_ParamLimits

0x5f7f,	// (0x000207aa) setting_slider_pane_t2_ParamLimits

0x5f99,	// (0x000207c4) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x00029d89) setting_slider_pane_t_ParamLimits

0x5fb1,	// (0x000207dc) slider_set_pane_ParamLimits

0x64d1,	// (0x00020cfc) control_pane_g5_ParamLimits

0x64d1,	// (0x00020cfc) control_pane_g5

0xb07f,	// (0x000258aa) slider_set_pane_g1_ParamLimits

0x6e5a,	// (0x00021685) slider_set_pane_g2_ParamLimits

0x6e66,	// (0x00021691) slider_set_pane_g3_ParamLimits

0x6e7a,	// (0x000216a5) slider_set_pane_g4_ParamLimits

0x6e92,	// (0x000216bd) slider_set_pane_g5_ParamLimits

0x6e66,	// (0x00021691) slider_set_pane_g6_ParamLimits

0x6ea8,	// (0x000216d3) slider_set_pane_g7_ParamLimits

0xf95d,	// (0x0002a188) slider_set_pane_g_ParamLimits

0x9336,	// (0x00023b61) navi_icon_text_pane_ParamLimits

0x981c,	// (0x00024047) aid_fill_nsta_2_ParamLimits

0x985b,	// (0x00024086) aid_touch_tab_arrow_left_ParamLimits

0x9867,	// (0x00024092) aid_touch_tab_arrow_right_ParamLimits

0x98d3,	// (0x000240fe) clock_nsta_pane_ParamLimits

0xab74,	// (0x0002539f) navi_icon_pane_g1_ParamLimits

0xab80,	// (0x000253ab) navi_text_pane_t1_ParamLimits

0xbe22,	// (0x0002664d) navi_icon_text_pane_g1_ParamLimits

0xbe2e,	// (0x00026659) navi_icon_text_pane_t1_ParamLimits

0xd6fd,	// (0x00027f28) list_single_hc_apps_pane_g1_ParamLimits

0x5afd,	// (0x00020328) list_single_hc_apps_pane_g2_ParamLimits

0xfcea,	// (0x0002a515) list_single_hc_apps_pane_g_ParamLimits

0x5b16,	// (0x00020341) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x5b32,	// (0x0002035d) list_single_hc_apps_pane_t1_ParamLimits

0x5e70,	// (0x0002069b) popup_toolbar2_fixed_window_ParamLimits

0x5e70,	// (0x0002069b) popup_toolbar2_fixed_window

0x6aa0,	// (0x000212cb) popup_toolbar2_float_window

0x7ef0,	// (0x0002271b) bg_popup_sub_pane_cp27

0xd716,	// (0x00027f41) grid_toolbar2_float_pane

0x7ef0,	// (0x0002271b) bg_popup_sub_pane_cp26

0xd716,	// (0x00027f41) grid_toolbar2_fixed_pane

0xd71e,	// (0x00027f49) cell_toolbar2_fixed_pane_ParamLimits

0xd71e,	// (0x00027f49) cell_toolbar2_fixed_pane

0xd72f,	// (0x00027f5a) cell_toolbar2_fixed_pane_g1

0x09d4,	// (0x0001b1ff) toolbar2_fixed_button_pane

0x9ce2,	// (0x0002450d) toolbar2_fixed_button_pane_g1

0x9cea,	// (0x00024515) toolbar2_fixed_button_pane_g2

0x9cf2,	// (0x0002451d) toolbar2_fixed_button_pane_g3

0x9cfa,	// (0x00024525) toolbar2_fixed_button_pane_g4

0x9d02,	// (0x0002452d) toolbar2_fixed_button_pane_g5

0x9d0a,	// (0x00024535) toolbar2_fixed_button_pane_g6

0x9d12,	// (0x0002453d) toolbar2_fixed_button_pane_g7

0x9d1a,	// (0x00024545) toolbar2_fixed_button_pane_g8

0x9d22,	// (0x0002454d) toolbar2_fixed_button_pane_g9

0x0008,

0xf85f,	// (0x0002a08a) toolbar2_fixed_button_pane_g

0xd738,	// (0x00027f63) cell_toolbar2_float_pane_ParamLimits

0xd738,	// (0x00027f63) cell_toolbar2_float_pane

0xd74c,	// (0x00027f77) cell_toolbar2_float_pane_g1

0x09d4,	// (0x0001b1ff) toolbar2_fixed_button_pane_cp

0xc3c9,	// (0x00026bf4) fep_vkb_accented_list_pane_ParamLimits

0xc3c9,	// (0x00026bf4) fep_vkb_accented_list_pane

0x7226,	// (0x00021a51) bg_popup_fep_shadow_pane_g9

0x94aa,	// (0x00023cd5) bg_popup_fep_shadow_pane_cp3

0x8993,	// (0x000231be) list_accented_list_pane

0xd755,	// (0x00027f80) list_single_accented_list_pane_ParamLimits

0xd755,	// (0x00027f80) list_single_accented_list_pane

0x94aa,	// (0x00023cd5) list_highlight_pane_cp10

0xd766,	// (0x00027f91) list_single_accented_list_pane_t1

0x69f0,	// (0x0002121b) popup_slider_window_ParamLimits

0x69f0,	// (0x0002121b) popup_slider_window

0xd39d,	// (0x00027bc8) aid_indentation_list_msg

0xd820,	// (0x0002804b) bg_popup_window_pane_cp19

0xd88a,	// (0x000280b5) popup_slider_window_g1

0xd8a6,	// (0x000280d1) popup_slider_window_g2

0xd8c2,	// (0x000280ed) popup_slider_window_g3

0x0005,

0xfcef,	// (0x0002a51a) popup_slider_window_g

0xd91e,	// (0x00028149) popup_slider_window_t1

0xd992,	// (0x000281bd) small_volume_slider_vertical_pane

0xc29d,	// (0x00026ac8) small_volume_slider_vertical_pane_g1

0xc29d,	// (0x00026ac8) small_volume_slider_vertical_pane_g2

0xd9ae,	// (0x000281d9) small_volume_slider_vertical_pane_g3

0x0002,

0xfd01,	// (0x0002a52c) small_volume_slider_vertical_pane_g

0x5c40,	// (0x0002046b) area_side_right_pane_ParamLimits

0x5c40,	// (0x0002046b) area_side_right_pane

0x737d,	// (0x00021ba8) aid_size_side_button_ParamLimits

0x737d,	// (0x00021ba8) aid_size_side_button

0x7391,	// (0x00021bbc) grid_sctrl_middle_pane_ParamLimits

0x7391,	// (0x00021bbc) grid_sctrl_middle_pane

0x73b0,	// (0x00021bdb) sctrl_sk_bottom_pane

0x73c1,	// (0x00021bec) sctrl_sk_top_pane

0x73d3,	// (0x00021bfe) aid_touch_sctrl_top

0x826d,	// (0x00022a98) bg_sctrl_sk_pane_ParamLimits

0x826d,	// (0x00022a98) bg_sctrl_sk_pane

0x73e0,	// (0x00021c0b) sctrl_sk_top_pane_g1

0x73ed,	// (0x00021c18) sctrl_sk_top_pane_t1

0x73d3,	// (0x00021bfe) aid_touch_sctrl_bottom

0x826d,	// (0x00022a98) bg_sctrl_sk_pane_cp_ParamLimits

0x826d,	// (0x00022a98) bg_sctrl_sk_pane_cp

0x7408,	// (0x00021c33) sctrl_sk_bottom_pane_g1

0x73ed,	// (0x00021c18) sctrl_sk_bottom_pane_t1

0x7411,	// (0x00021c3c) cell_sctrl_middle_pane_ParamLimits

0x7411,	// (0x00021c3c) cell_sctrl_middle_pane

0x742c,	// (0x00021c57) aid_touch_sctrl_middle_ParamLimits

0x742c,	// (0x00021c57) aid_touch_sctrl_middle

0x883e,	// (0x00023069) bg_sctrl_middle_pane_ParamLimits

0x883e,	// (0x00023069) bg_sctrl_middle_pane

0xc50b,	// (0x00026d36) cell_sctrl_middle_pane_g1_ParamLimits

0xc50b,	// (0x00026d36) cell_sctrl_middle_pane_g1

0x743e,	// (0x00021c69) cell_sctrl_middle_pane_g2_ParamLimits

0x743e,	// (0x00021c69) cell_sctrl_middle_pane_g2

0x0001,

0xfd0d,	// (0x0002a538) cell_sctrl_middle_pane_g_ParamLimits

0xfd0d,	// (0x0002a538) cell_sctrl_middle_pane_g

0x9ce2,	// (0x0002450d) bg_sctrl_middle_pane_g1

0x9cea,	// (0x00024515) bg_sctrl_middle_pane_g2

0x9cf2,	// (0x0002451d) bg_sctrl_middle_pane_g3

0x9cfa,	// (0x00024525) bg_sctrl_middle_pane_g4

0x9d02,	// (0x0002452d) bg_sctrl_middle_pane_g5

0x9d0a,	// (0x00024535) bg_sctrl_middle_pane_g6

0x9d12,	// (0x0002453d) bg_sctrl_middle_pane_g7

0x9d1a,	// (0x00024545) bg_sctrl_middle_pane_g8

0x0007,

0xfd12,	// (0x0002a53d) bg_sctrl_middle_pane_g

0x9d22,	// (0x0002454d) bg_sctrl_middle_pane_g8_copy1

0x9ce2,	// (0x0002450d) bg_sctrl_sk_pane_g1

0x9cea,	// (0x00024515) bg_sctrl_sk_pane_g2

0x9cf2,	// (0x0002451d) bg_sctrl_sk_pane_g3

0x0008,

0xf85f,	// (0x0002a08a) bg_sctrl_sk_pane_g

0x876d,	// (0x00022f98) aid_size_touch_scroll_bar

0x9cfa,	// (0x00024525) bg_sctrl_sk_pane_g4

0x9d02,	// (0x0002452d) bg_sctrl_sk_pane_g5

0x9d0a,	// (0x00024535) bg_sctrl_sk_pane_g6

0x9d12,	// (0x0002453d) bg_sctrl_sk_pane_g7

0x9d1a,	// (0x00024545) bg_sctrl_sk_pane_g8

0x9d22,	// (0x0002454d) bg_sctrl_sk_pane_g9

0x6661,	// (0x00020e8c) popup_fep_china_hwr2_fs_candidate_window

0x666b,	// (0x00020e96) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x666b,	// (0x00020e96) popup_fep_china_hwr2_fs_control_window

0xc50b,	// (0x00026d36) sctrl_sk_top_pane_g2

0x0001,

0xfd08,	// (0x0002a533) sctrl_sk_top_pane_g

0xd9b7,	// (0x000281e2) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd9b7,	// (0x000281e2) aid_fep_china_hwr2_fs_cell

0xd9c9,	// (0x000281f4) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd9c9,	// (0x000281f4) bg_popup_fep_shadow_pane_cp4

0xd9e0,	// (0x0002820b) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd9e0,	// (0x0002820b) bg_popup_fep_shadow_pane_cp5

0xd9f2,	// (0x0002821d) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd9f2,	// (0x0002821d) popup_fep_china_hwr2_fs_control_bar_grid

0xda02,	// (0x0002822d) popup_fep_china_hwr2_fs_control_funtion_grid

0xda0a,	// (0x00028235) aid_fep_china_hwr2_fs_candi_cell

0x7ef0,	// (0x0002271b) bg_popup_fep_shadow_pane_cp6

0xda14,	// (0x0002823f) popup_fep_china_hwr2_fs_candidate_grid

0xda1e,	// (0x00028249) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xda1e,	// (0x00028249) cell_fep_china_hwr2_fs_funtion_grid

0xc29d,	// (0x00026ac8) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xda36,	// (0x00028261) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xda36,	// (0x00028261) cell_fep_china_hwr2_fs_funtion_grid_g1

0xda44,	// (0x0002826f) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xda44,	// (0x0002826f) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd23,	// (0x0002a54e) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd23,	// (0x0002a54e) cell_fep_china_hwr2_fs_funtion_grid_g

0xda5a,	// (0x00028285) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xda5a,	// (0x00028285) cell_fep_china_hwr2_fs_funtion_grid_t1

0xda6f,	// (0x0002829a) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xda6f,	// (0x0002829a) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd28,	// (0x0002a553) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd28,	// (0x0002a553) cell_fep_china_hwr2_fs_funtion_grid_t

0xda8b,	// (0x000282b6) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xda93,	// (0x000282be) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xda9b,	// (0x000282c6) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd2d,	// (0x0002a558) popup_fep_china_hwr2_fs_control_bar_grid_g

0xdaa3,	// (0x000282ce) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xdaa3,	// (0x000282ce) cell_fep_china_hwr2_fs_candidate_grid

0xdabc,	// (0x000282e7) popup_fep_china_hwr2_fs_candidate_grid_g20

0xdac4,	// (0x000282ef) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc29d,	// (0x00026ac8) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc29d,	// (0x00026ac8) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb4d,	// (0x0002a378) cell_fep_china_hwr2_fs_candidate_grid_g

0xdacc,	// (0x000282f7) cell_fep_china_hwr2_fs_candidate_grid_t1

0x98e0,	// (0x0002410b) clock_nsta_pane_cp_24_ParamLimits

0x98e0,	// (0x0002410b) clock_nsta_pane_cp_24

0x995e,	// (0x00024189) indicator_nsta_pane_cp_24_ParamLimits

0x995e,	// (0x00024189) indicator_nsta_pane_cp_24

0xa9f0,	// (0x0002521b) heading_pane_g1

0x0001,

0xf8c4,	// (0x0002a0ef) heading_pane_g

0xb3c5,	// (0x00025bf0) grid_sct_catagory_button_pane

0xb3f5,	// (0x00025c20) scroll_pane_cp5_ParamLimits

0xbe70,	// (0x0002669b) button_value_adjust_pane_cp5_ParamLimits

0xbe70,	// (0x0002669b) button_value_adjust_pane_cp5

0xbf4f,	// (0x0002677a) form2_midp_time_pane_ParamLimits

0xdada,	// (0x00028305) cell_sct_catagory_button_pane_ParamLimits

0xdada,	// (0x00028305) cell_sct_catagory_button_pane

0xc262,	// (0x00026a8d) bg_button_pane_cp01_ParamLimits

0xc262,	// (0x00026a8d) bg_button_pane_cp01

0xc29d,	// (0x00026ac8) cell_sct_catagory_button_pane_g1

0x6a2f,	// (0x0002125a) popup_tb_extension_window

0xdaec,	// (0x00028317) aid_size_cell_ext_ParamLimits

0xdaec,	// (0x00028317) aid_size_cell_ext

0x826d,	// (0x00022a98) bg_tb_trans_pane_cp1_ParamLimits

0x826d,	// (0x00022a98) bg_tb_trans_pane_cp1

0xdb0c,	// (0x00028337) grid_tb_ext_pane_ParamLimits

0xdb0c,	// (0x00028337) grid_tb_ext_pane

0xdb3e,	// (0x00028369) cell_tb_ext_pane_ParamLimits

0xdb3e,	// (0x00028369) cell_tb_ext_pane

0xdb55,	// (0x00028380) cell_tb_ext_pane_g1_ParamLimits

0xdb55,	// (0x00028380) cell_tb_ext_pane_g1

0xdb72,	// (0x0002839d) cell_tb_ext_pane_t1

0x826d,	// (0x00022a98) list_highlight_pane_cp11_ParamLimits

0x826d,	// (0x00022a98) list_highlight_pane_cp11

0x5e8f,	// (0x000206ba) popup_uni_indicator_window_ParamLimits

0x5e8f,	// (0x000206ba) popup_uni_indicator_window

0x883e,	// (0x00023069) bg_popup_sub_pane_cp14

0xdb8d,	// (0x000283b8) list_uniindi_pane

0xdb99,	// (0x000283c4) uniindi_top_pane

0x826d,	// (0x00022a98) bg_uniindi_top_pane

0xdbb8,	// (0x000283e3) uniindi_top_pane_g1

0xdbce,	// (0x000283f9) uniindi_top_pane_g2

0x0003,

0xfd34,	// (0x0002a55f) uniindi_top_pane_g

0xdbf8,	// (0x00028423) uniindi_top_pane_t1

0xdc22,	// (0x0002844d) list_single_uniindi_pane_ParamLimits

0xdc22,	// (0x0002844d) list_single_uniindi_pane

0xc29d,	// (0x00026ac8) bg_uniindi_top_pane_g1

0xdc35,	// (0x00028460) list_single_uniindi_pane_g1

0xdc48,	// (0x00028473) list_single_uniindi_pane_t1

0x7ef0,	// (0x0002271b) control_bg_pane

0xdc6d,	// (0x00028498) bg_sctrl_sk_pane_cp1

0xdc76,	// (0x000284a1) bg_sctrl_sk_pane_cp2

0xdc7f,	// (0x000284aa) control_bg_pane_g1

0xdc88,	// (0x000284b3) control_bg_pane_g2

0x0001,

0xfd3d,	// (0x0002a568) control_bg_pane_g

0xbcb4,	// (0x000264df) cell_indicator_nsta_pane_g1_ParamLimits

0xbcc2,	// (0x000264ed) cell_indicator_nsta_pane_g2_ParamLimits

0xfab1,	// (0x0002a2dc) cell_indicator_nsta_pane_g_ParamLimits

0x57c6,	// (0x0001fff1) form2_midp_time_pane_t1_ParamLimits

0x85af,	// (0x00022dda) main_idle_act4_pane_ParamLimits

0x85af,	// (0x00022dda) main_idle_act4_pane

0x6a2f,	// (0x0002125a) popup_tb_extension_window_ParamLimits

0xdb2e,	// (0x00028359) tb_ext_find_pane_ParamLimits

0xdb2e,	// (0x00028359) tb_ext_find_pane

0xdc91,	// (0x000284bc) ai_gene_pane_1_cp1

0x95e9,	// (0x00023e14) ai_gene_pane_2_cp1

0xdc99,	// (0x000284c4) list_single_idle_plugin_calendar_pane

0xdca2,	// (0x000284cd) list_single_idle_plugin_notification_pane

0xdcab,	// (0x000284d6) list_single_idle_plugin_player_pane

0xdcb4,	// (0x000284df) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdcb4,	// (0x000284df) list_single_idle_plugin_shortcut_pane

0xdcd6,	// (0x00028501) main_idle_act4_pane_t1

0xdce8,	// (0x00028513) main_idle_act4_pane_t2

0x0001,

0xfd42,	// (0x0002a56d) main_idle_act4_pane_t

0xdcfa,	// (0x00028525) middle_sk_idle_act4_pane_ParamLimits

0xdcfa,	// (0x00028525) middle_sk_idle_act4_pane

0xdd10,	// (0x0002853b) popup_clock_digital_analogue_window_cp2

0xdd2a,	// (0x00028555) shortcut_wheel_idle_act4_pane_ParamLimits

0xdd2a,	// (0x00028555) shortcut_wheel_idle_act4_pane

0xc29d,	// (0x00026ac8) shortcut_wheel_idle_act4_pane_g1

0xc29d,	// (0x00026ac8) shortcut_wheel_idle_act4_pane_g2

0xc29d,	// (0x00026ac8) shortcut_wheel_idle_act4_pane_g3

0xc29d,	// (0x00026ac8) shortcut_wheel_idle_act4_pane_g4

0xc29d,	// (0x00026ac8) shortcut_wheel_idle_act4_pane_g5

0xdd3e,	// (0x00028569) shortcut_wheel_idle_act4_pane_g6

0xdd46,	// (0x00028571) shortcut_wheel_idle_act4_pane_g7

0xdd4e,	// (0x00028579) shortcut_wheel_idle_act4_pane_g8

0xdd56,	// (0x00028581) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd47,	// (0x0002a572) shortcut_wheel_idle_act4_pane_g

0xc50b,	// (0x00026d36) middle_sk_idle_act4_pane_g1_ParamLimits

0xc50b,	// (0x00026d36) middle_sk_idle_act4_pane_g1

0xddba,	// (0x000285e5) middle_sk_idle_act4_pane_g2_ParamLimits

0xddba,	// (0x000285e5) middle_sk_idle_act4_pane_g2

0x0001,

0xfd6a,	// (0x0002a595) middle_sk_idle_act4_pane_g_ParamLimits

0xfd6a,	// (0x0002a595) middle_sk_idle_act4_pane_g

0xddc6,	// (0x000285f1) middle_sk_idle_act4_pane_t1_ParamLimits

0xddc6,	// (0x000285f1) middle_sk_idle_act4_pane_t1

0xdde3,	// (0x0002860e) grid_ai_shortcut_pane_ParamLimits

0xdde3,	// (0x0002860e) grid_ai_shortcut_pane

0xddfc,	// (0x00028627) list_highlight_pane_cp16_ParamLimits

0xddfc,	// (0x00028627) list_highlight_pane_cp16

0xde09,	// (0x00028634) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xde09,	// (0x00028634) list_single_idle_plugin_shortcut_pane_g1

0xde15,	// (0x00028640) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xde15,	// (0x00028640) list_single_idle_plugin_shortcut_pane_g2

0xde2d,	// (0x00028658) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xde2d,	// (0x00028658) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd6f,	// (0x0002a59a) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd6f,	// (0x0002a59a) list_single_idle_plugin_shortcut_pane_g

0xde40,	// (0x0002866b) cell_ai_shortcut_pane_ParamLimits

0xde40,	// (0x0002866b) cell_ai_shortcut_pane

0xde61,	// (0x0002868c) cell_ai_shortcut_pane_g1_ParamLimits

0xde61,	// (0x0002868c) cell_ai_shortcut_pane_g1

0xdc91,	// (0x000284bc) ai_gene_pane_1_cp2

0xde83,	// (0x000286ae) ai_gene_pane_2_cp2

0xde8b,	// (0x000286b6) list_highlight_pane_cp15

0xde94,	// (0x000286bf) list_single_idle_plugin_calendar_pane_g1

0xde8b,	// (0x000286b6) list_highlight_pane_cp17

0xde9c,	// (0x000286c7) list_single_idle_plugin_calendar_pane_g1_copy1

0xdea4,	// (0x000286cf) list_single_idle_plugin_player_pane_g1

0xb61c,	// (0x00025e47) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd76,	// (0x0002a5a1) list_single_idle_plugin_player_pane_g

0xdeac,	// (0x000286d7) list_single_idle_plugin_player_pane_t1

0xdeba,	// (0x000286e5) list_single_idle_plugin_player_pane_t2

0xdec8,	// (0x000286f3) list_single_idle_plugin_player_pane_t3

0xded6,	// (0x00028701) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd7b,	// (0x0002a5a6) list_single_idle_plugin_player_pane_t

0xdee4,	// (0x0002870f) wait_bar_pane_cp15

0xdeec,	// (0x00028717) grid_ai_notification_pane

0xb61c,	// (0x00025e47) list_single_idle_plugin_notification_pane_g1

0xdef5,	// (0x00028720) cell_ai_notification_pane_ParamLimits

0xdef5,	// (0x00028720) cell_ai_notification_pane

0xdf02,	// (0x0002872d) cell_ai_notification_pane_g1

0xdf0a,	// (0x00028735) cell_ai_notification_pane_t1

0xdf18,	// (0x00028743) tb_ext_find_button_pane

0xdf20,	// (0x0002874b) tb_ext_find_pane_g1

0xdf28,	// (0x00028753) tb_ext_find_pane_t1

0x8e92,	// (0x000236bd) tb_ext_find_button_pane_g1

0xdf36,	// (0x00028761) tb_ext_find_button_pane_g2

0x0001,

0xfd84,	// (0x0002a5af) tb_ext_find_button_pane_g

0xdcd6,	// (0x00028501) main_idle_act4_pane_t1_ParamLimits

0xdce8,	// (0x00028513) main_idle_act4_pane_t2_ParamLimits

0xfd42,	// (0x0002a56d) main_idle_act4_pane_t_ParamLimits

0xdd10,	// (0x0002853b) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdd1e,	// (0x00028549) sat_plugin_idle_act4_pane_ParamLimits

0xdd1e,	// (0x00028549) sat_plugin_idle_act4_pane

0xdf3f,	// (0x0002876a) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdf3f,	// (0x0002876a) sat_plugin_idle_act4_pane_t1

0xdf52,	// (0x0002877d) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdf52,	// (0x0002877d) sat_plugin_idle_act4_pane_t2

0xdf65,	// (0x00028790) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdf65,	// (0x00028790) sat_plugin_idle_act4_pane_t3

0xdf78,	// (0x000287a3) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdf78,	// (0x000287a3) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd89,	// (0x0002a5b4) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd89,	// (0x0002a5b4) sat_plugin_idle_act4_pane_t

0x5dd8,	// (0x00020603) popup_battery_window_ParamLimits

0x5dd8,	// (0x00020603) popup_battery_window

0x826d,	// (0x00022a98) bg_popup_sub_pane_cp25_ParamLimits

0x826d,	// (0x00022a98) bg_popup_sub_pane_cp25

0xdf8b,	// (0x000287b6) popup_battery_window_g1_ParamLimits

0xdf8b,	// (0x000287b6) popup_battery_window_g1

0xdf97,	// (0x000287c2) popup_battery_window_t1_ParamLimits

0xdf97,	// (0x000287c2) popup_battery_window_t1

0xdfa9,	// (0x000287d4) popup_battery_window_t2_ParamLimits

0xdfa9,	// (0x000287d4) popup_battery_window_t2

0x0001,

0xfd92,	// (0x0002a5bd) popup_battery_window_t_ParamLimits

0xfd92,	// (0x0002a5bd) popup_battery_window_t

0x94b2,	// (0x00023cdd) midp_canvas_pane_ParamLimits

0x952b,	// (0x00023d56) midp_keypad_pane_ParamLimits

0x952b,	// (0x00023d56) midp_keypad_pane

0x97e4,	// (0x0002400f) main_midp_pane_ParamLimits

0xbd2e,	// (0x00026559) signal_pane_g2_cp_ParamLimits

0xdfc6,	// (0x000287f1) aid_size_cell_midp_keypad_ParamLimits

0xdfc6,	// (0x000287f1) aid_size_cell_midp_keypad

0xdfe0,	// (0x0002880b) midp_keyp_game_grid_pane_ParamLimits

0xdfe0,	// (0x0002880b) midp_keyp_game_grid_pane

0xe000,	// (0x0002882b) midp_keyp_rocker_pane_ParamLimits

0xe000,	// (0x0002882b) midp_keyp_rocker_pane

0xe039,	// (0x00028864) midp_keyp_sk_left_pane_ParamLimits

0xe039,	// (0x00028864) midp_keyp_sk_left_pane

0xe093,	// (0x000288be) midp_keyp_sk_right_pane_ParamLimits

0xe093,	// (0x000288be) midp_keyp_sk_right_pane

0x7ef0,	// (0x0002271b) bg_button_pane_cp03

0xe0ed,	// (0x00028918) midp_keyp_sk_left_pane_g1

0x7ef0,	// (0x0002271b) bg_button_pane_cp04

0xe0ed,	// (0x00028918) midp_keyp_sk_right_pane_g1

0xc29d,	// (0x00026ac8) midp_keyp_rocker_pane_g1

0xe0f6,	// (0x00028921) keyp_game_cell_pane_ParamLimits

0xe0f6,	// (0x00028921) keyp_game_cell_pane

0x7ef0,	// (0x0002271b) bg_button_pane_cp02

0xe109,	// (0x00028934) keyp_game_cell_pane_g1

0x5e0e,	// (0x00020639) popup_fep_vkb2_window_ParamLimits

0x5e0e,	// (0x00020639) popup_fep_vkb2_window

0x745c,	// (0x00021c87) aid_size_cell_vkb2_ParamLimits

0x745c,	// (0x00021c87) aid_size_cell_vkb2

0x74b0,	// (0x00021cdb) popup_fep_vkb2_window_g1_ParamLimits

0x74b0,	// (0x00021cdb) popup_fep_vkb2_window_g1

0x74f8,	// (0x00021d23) vkb2_area_bottom_pane_ParamLimits

0x74f8,	// (0x00021d23) vkb2_area_bottom_pane

0x7544,	// (0x00021d6f) vkb2_area_keypad_pane_ParamLimits

0x7544,	// (0x00021d6f) vkb2_area_keypad_pane

0x7586,	// (0x00021db1) vkb2_area_top_pane_ParamLimits

0x7586,	// (0x00021db1) vkb2_area_top_pane

0x7600,	// (0x00021e2b) vkb2_top_entry_pane_ParamLimits

0x7600,	// (0x00021e2b) vkb2_top_entry_pane

0x762a,	// (0x00021e55) vkb2_top_grid_left_pane_ParamLimits

0x762a,	// (0x00021e55) vkb2_top_grid_left_pane

0x7648,	// (0x00021e73) vkb2_top_grid_right_pane_ParamLimits

0x7648,	// (0x00021e73) vkb2_top_grid_right_pane

0x7666,	// (0x00021e91) vkb2_cell_keypad_pane_ParamLimits

0x7666,	// (0x00021e91) vkb2_cell_keypad_pane

0x7737,	// (0x00021f62) vkb2_area_bottom_grid_pane_ParamLimits

0x7737,	// (0x00021f62) vkb2_area_bottom_grid_pane

0x775d,	// (0x00021f88) vkb2_area_bottom_pane_g1_ParamLimits

0x775d,	// (0x00021f88) vkb2_area_bottom_pane_g1

0x7781,	// (0x00021fac) vkb2_area_bottom_pane_g2_ParamLimits

0x7781,	// (0x00021fac) vkb2_area_bottom_pane_g2

0x77af,	// (0x00021fda) vkb2_area_bottom_pane_g3_ParamLimits

0x77af,	// (0x00021fda) vkb2_area_bottom_pane_g3

0x0002,

0xfd97,	// (0x0002a5c2) vkb2_area_bottom_pane_g_ParamLimits

0xfd97,	// (0x0002a5c2) vkb2_area_bottom_pane_g

0x7810,	// (0x0002203b) vkb2_top_cell_left_pane_ParamLimits

0x7810,	// (0x0002203b) vkb2_top_cell_left_pane

0xe11a,	// (0x00028945) vkb2_top_entry_pane_g1_ParamLimits

0xe11a,	// (0x00028945) vkb2_top_entry_pane_g1

0xe128,	// (0x00028953) vkb2_top_entry_pane_t1_ParamLimits

0xe128,	// (0x00028953) vkb2_top_entry_pane_t1

0xe15a,	// (0x00028985) vkb2_top_entry_pane_t2_ParamLimits

0xe15a,	// (0x00028985) vkb2_top_entry_pane_t2

0xe18c,	// (0x000289b7) vkb2_top_entry_pane_t3_ParamLimits

0xe18c,	// (0x000289b7) vkb2_top_entry_pane_t3

0x0002,

0xfd9e,	// (0x0002a5c9) vkb2_top_entry_pane_t_ParamLimits

0xfd9e,	// (0x0002a5c9) vkb2_top_entry_pane_t

0x785d,	// (0x00022088) vkb2_top_grid_right_pane_g1_ParamLimits

0x785d,	// (0x00022088) vkb2_top_grid_right_pane_g1

0x7873,	// (0x0002209e) vkb2_top_grid_right_pane_g2_ParamLimits

0x7873,	// (0x0002209e) vkb2_top_grid_right_pane_g2

0x788b,	// (0x000220b6) vkb2_top_grid_right_pane_g3_ParamLimits

0x788b,	// (0x000220b6) vkb2_top_grid_right_pane_g3

0x78a3,	// (0x000220ce) vkb2_top_grid_right_pane_g4_ParamLimits

0x78a3,	// (0x000220ce) vkb2_top_grid_right_pane_g4

0x0003,

0xfda5,	// (0x0002a5d0) vkb2_top_grid_right_pane_g_ParamLimits

0xfda5,	// (0x0002a5d0) vkb2_top_grid_right_pane_g

0x78b9,	// (0x000220e4) vkb2_top_cell_left_pane_g1

0x78d0,	// (0x000220fb) vkb2_cell_keypad_pane_g1_ParamLimits

0x78d0,	// (0x000220fb) vkb2_cell_keypad_pane_g1

0xe1b0,	// (0x000289db) vkb2_cell_keypad_pane_t1_ParamLimits

0xe1b0,	// (0x000289db) vkb2_cell_keypad_pane_t1

0x78de,	// (0x00022109) vkb2_cell_bottom_grid_pane_ParamLimits

0x78de,	// (0x00022109) vkb2_cell_bottom_grid_pane

0x7917,	// (0x00022142) vkb2_cell_bottom_grid_pane_g1

0xdd5e,	// (0x00028589) aid_call2_pane_cp02

0xdd66,	// (0x00028591) aid_call_pane_cp02

0xdd6e,	// (0x00028599) clock_digital_number_pane_cp10

0xdd76,	// (0x000285a1) clock_digital_number_pane_cp11

0xdd7e,	// (0x000285a9) clock_digital_number_pane_cp12

0xdd86,	// (0x000285b1) clock_digital_number_pane_cp13

0xdd8e,	// (0x000285b9) clock_digital_separator_pane_cp10

0x8e92,	// (0x000236bd) popup_clock_digital_analogue_window_cp2_g1

0x8e92,	// (0x000236bd) popup_clock_digital_analogue_window_cp2_g2

0xdd96,	// (0x000285c1) popup_clock_digital_analogue_window_cp2_g3

0x8e92,	// (0x000236bd) popup_clock_digital_analogue_window_cp2_g4

0xdd96,	// (0x000285c1) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd5a,	// (0x0002a585) popup_clock_digital_analogue_window_cp2_g

0xdd9e,	// (0x000285c9) popup_clock_digital_analogue_window_cp2_t1

0xddac,	// (0x000285d7) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd65,	// (0x0002a590) popup_clock_digital_analogue_window_cp2_t

0xc29d,	// (0x00026ac8) clock_digital_number_pane_cp10_g1

0xc29d,	// (0x00026ac8) clock_digital_number_pane_cp10_g2

0x0001,

0xfb4d,	// (0x0002a378) clock_digital_number_pane_cp10_g

0xc29d,	// (0x00026ac8) clock_digital_separator_pane_cp10_g1

0xc29d,	// (0x00026ac8) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb4d,	// (0x0002a378) clock_digital_separator_pane_cp10_g

0xdbda,	// (0x00028405) uniindi_top_pane_g3

0xdbeb,	// (0x00028416) uniindi_top_pane_g4

0x76f1,	// (0x00021f1c) vkb2_row_keypad_pane_ParamLimits

0x76f1,	// (0x00021f1c) vkb2_row_keypad_pane

0x7937,	// (0x00022162) vkb2_cell_t_keypad_pane_ParamLimits

0x7937,	// (0x00022162) vkb2_cell_t_keypad_pane

0x7947,	// (0x00022172) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x7947,	// (0x00022172) vkb2_cell_t_keypad_pane_cp08

0x795a,	// (0x00022185) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x795a,	// (0x00022185) vkb2_cell_t_keypad_pane_cp09

0x796e,	// (0x00022199) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x796e,	// (0x00022199) vkb2_cell_t_keypad_pane_cp01

0x797f,	// (0x000221aa) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x797f,	// (0x000221aa) vkb2_cell_t_keypad_pane_cp02

0x7990,	// (0x000221bb) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x7990,	// (0x000221bb) vkb2_cell_t_keypad_pane_cp03

0x79a1,	// (0x000221cc) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x79a1,	// (0x000221cc) vkb2_cell_t_keypad_pane_cp04

0x79b2,	// (0x000221dd) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x79b2,	// (0x000221dd) vkb2_cell_t_keypad_pane_cp05

0x79c3,	// (0x000221ee) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x79c3,	// (0x000221ee) vkb2_cell_t_keypad_pane_cp06

0x79d4,	// (0x000221ff) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x79d4,	// (0x000221ff) vkb2_cell_t_keypad_pane_cp07

0x79e5,	// (0x00022210) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x79e5,	// (0x00022210) vkb2_cell_t_keypad_pane_cp10

0xc50b,	// (0x00026d36) vkb2_cell_t_keypad_pane_g1

0xe1c7,	// (0x000289f2) vkb2_cell_t_keypad_pane_t1

0x7ef0,	// (0x0002271b) popup_grid_graphic2_window

0xe1d9,	// (0x00028a04) aid_size_cell_graphic2_ParamLimits

0xe1d9,	// (0x00028a04) aid_size_cell_graphic2

0xe211,	// (0x00028a3c) bg_popup_window_pane_cp21_ParamLimits

0xe211,	// (0x00028a3c) bg_popup_window_pane_cp21

0xe21f,	// (0x00028a4a) graphic2_pages_pane_ParamLimits

0xe21f,	// (0x00028a4a) graphic2_pages_pane

0xe265,	// (0x00028a90) grid_graphic2_control_pane_ParamLimits

0xe265,	// (0x00028a90) grid_graphic2_control_pane

0xe2a3,	// (0x00028ace) grid_graphic2_pane_ParamLimits

0xe2a3,	// (0x00028ace) grid_graphic2_pane

0xe317,	// (0x00028b42) cell_graphic2_pane

0x7ef0,	// (0x0002271b) main_comp_mode_pane

0xd44f,	// (0x00027c7a) list_ai3_gene_pane_ParamLimits

0xd820,	// (0x0002804b) bg_popup_window_pane_cp19_ParamLimits

0xd82c,	// (0x00028057) bg_touch_area_indi_pane_ParamLimits

0xd82c,	// (0x00028057) bg_touch_area_indi_pane

0xd842,	// (0x0002806d) bg_touch_area_indi_pane_cp01_ParamLimits

0xd842,	// (0x0002806d) bg_touch_area_indi_pane_cp01

0xd858,	// (0x00028083) bg_touch_area_indi_pane_cp02_ParamLimits

0xd858,	// (0x00028083) bg_touch_area_indi_pane_cp02

0xd870,	// (0x0002809b) bg_touch_area_indi_pane_cp03_ParamLimits

0xd870,	// (0x0002809b) bg_touch_area_indi_pane_cp03

0xd88a,	// (0x000280b5) popup_slider_window_g1_ParamLimits

0xd8a6,	// (0x000280d1) popup_slider_window_g2_ParamLimits

0xd8c2,	// (0x000280ed) popup_slider_window_g3_ParamLimits

0xfcef,	// (0x0002a51a) popup_slider_window_g_ParamLimits

0xd91e,	// (0x00028149) popup_slider_window_t1_ParamLimits

0xd992,	// (0x000281bd) small_volume_slider_vertical_pane_ParamLimits

0xe317,	// (0x00028b42) cell_graphic2_pane_ParamLimits

0xe365,	// (0x00028b90) bg_button_pane_cp10_ParamLimits

0xe365,	// (0x00028b90) bg_button_pane_cp10

0xe378,	// (0x00028ba3) bg_button_pane_cp11_ParamLimits

0xe378,	// (0x00028ba3) bg_button_pane_cp11

0xe38b,	// (0x00028bb6) graphic2_pages_pane_g1_ParamLimits

0xe38b,	// (0x00028bb6) graphic2_pages_pane_g1

0xe3a6,	// (0x00028bd1) graphic2_pages_pane_g2_ParamLimits

0xe3a6,	// (0x00028bd1) graphic2_pages_pane_g2

0x0001,

0xfdb3,	// (0x0002a5de) graphic2_pages_pane_g_ParamLimits

0xfdb3,	// (0x0002a5de) graphic2_pages_pane_g

0xe3be,	// (0x00028be9) graphic2_pages_pane_t1_ParamLimits

0xe3be,	// (0x00028be9) graphic2_pages_pane_t1

0xe3d4,	// (0x00028bff) cell_graphic2_control_pane_ParamLimits

0xe3d4,	// (0x00028bff) cell_graphic2_control_pane

0xe3f5,	// (0x00028c20) cell_graphic2_pane_g1_ParamLimits

0xe3f5,	// (0x00028c20) cell_graphic2_pane_g1

0xe402,	// (0x00028c2d) cell_graphic2_pane_g2_ParamLimits

0xe402,	// (0x00028c2d) cell_graphic2_pane_g2

0xe40f,	// (0x00028c3a) cell_graphic2_pane_g3_ParamLimits

0xe40f,	// (0x00028c3a) cell_graphic2_pane_g3

0xe41c,	// (0x00028c47) cell_graphic2_pane_g4_ParamLimits

0xe41c,	// (0x00028c47) cell_graphic2_pane_g4

0xe429,	// (0x00028c54) cell_graphic2_pane_g5_ParamLimits

0xe429,	// (0x00028c54) cell_graphic2_pane_g5

0x0004,

0xfdb8,	// (0x0002a5e3) cell_graphic2_pane_g_ParamLimits

0xfdb8,	// (0x0002a5e3) cell_graphic2_pane_g

0xe444,	// (0x00028c6f) cell_graphic2_pane_t1_ParamLimits

0xe444,	// (0x00028c6f) cell_graphic2_pane_t1

0x9d56,	// (0x00024581) grid_highlight_pane_cp11_ParamLimits

0x9d56,	// (0x00024581) grid_highlight_pane_cp11

0x826d,	// (0x00022a98) bg_button_pane_cp05

0xe46d,	// (0x00028c98) cell_graphic2_control_pane_g1

0xc29d,	// (0x00026ac8) bg_touch_area_indi_pane_g1

0xe495,	// (0x00028cc0) aid_cmod_rocker_key_size

0xe49f,	// (0x00028cca) aid_cmode_itu_key_size

0xe4a9,	// (0x00028cd4) main_cmode_video_pane

0xe4b3,	// (0x00028cde) main_comp_mode_itu_pane

0xe4bf,	// (0x00028cea) main_comp_mode_rocker_pane

0xe4cb,	// (0x00028cf6) cell_cmode_rocker_pane_ParamLimits

0xe4cb,	// (0x00028cf6) cell_cmode_rocker_pane

0xe4dd,	// (0x00028d08) cell_cmode_itu_pane_ParamLimits

0xe4dd,	// (0x00028d08) cell_cmode_itu_pane

0x883e,	// (0x00023069) bg_button_pane_cp06_ParamLimits

0x883e,	// (0x00023069) bg_button_pane_cp06

0xc50b,	// (0x00026d36) cell_cmode_rocker_pane_g1_ParamLimits

0xc50b,	// (0x00026d36) cell_cmode_rocker_pane_g1

0xda36,	// (0x00028261) cell_cmode_rocker_pane_g2_ParamLimits

0xda36,	// (0x00028261) cell_cmode_rocker_pane_g2

0x0001,

0xfdc8,	// (0x0002a5f3) cell_cmode_rocker_pane_g_ParamLimits

0xfdc8,	// (0x0002a5f3) cell_cmode_rocker_pane_g

0x7ef0,	// (0x0002271b) bg_button_pane_cp07

0xe4f2,	// (0x00028d1d) cell_cmode_itu_pane_g1

0xe4fb,	// (0x00028d26) cell_cmode_itu_pane_t1

0xe509,	// (0x00028d34) cell_cmode_itu_pane_t2

0x0001,

0xfdcd,	// (0x0002a5f8) cell_cmode_itu_pane_t

0xdc5d,	// (0x00028488) aid_touch_ctrl_left

0xdc65,	// (0x00028490) aid_touch_ctrl_right

0x7ef0,	// (0x0002271b) compa_mode_pane

0xe517,	// (0x00028d42) aid_cmod_rocker_key_size_cp

0xe521,	// (0x00028d4c) aid_cmode_itu_key_size_cp

0xe52b,	// (0x00028d56) compa_mode_pane_g1

0xe533,	// (0x00028d5e) compa_mode_pane_g2

0xe53b,	// (0x00028d66) compa_mode_pane_g3

0x0002,

0xfdd2,	// (0x0002a5fd) compa_mode_pane_g

0xe543,	// (0x00028d6e) main_comp_mode_itu_pane_cp

0xe54b,	// (0x00028d76) main_comp_mode_rocker_pane_cp

0xe553,	// (0x00028d7e) cell_cmode_itu_pane_cp_ParamLimits

0xe553,	// (0x00028d7e) cell_cmode_itu_pane_cp

0xe568,	// (0x00028d93) cell_cmode_rocker_pane_cp_ParamLimits

0xe568,	// (0x00028d93) cell_cmode_rocker_pane_cp

0x883e,	// (0x00023069) bg_button_pane_cp06_cp_ParamLimits

0x883e,	// (0x00023069) bg_button_pane_cp06_cp

0xc50b,	// (0x00026d36) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc50b,	// (0x00026d36) cell_cmode_rocker_pane_g1_cp

0xc29d,	// (0x00026ac8) cell_cmode_rocker_pane_g2_cp

0x7ef0,	// (0x0002271b) bg_button_pane_cp07_cp

0xe57a,	// (0x00028da5) cell_cmode_itu_pane_g1_cp

0xe583,	// (0x00028dae) cell_cmode_itu_pane_t1_cp

0xe583,	// (0x00028dae) cell_cmode_itu_pane_t2_cp

0xb20f,	// (0x00025a3a) settings_code_pane_cp2

0x7fe4,	// (0x0002280f) bg_popup_window_pane_cp3_ParamLimits

0x843b,	// (0x00022c66) heading_pane_cp3_ParamLimits

0x8447,	// (0x00022c72) listscroll_popup_graphic_pane_ParamLimits

0x700a,	// (0x00021835) fep_hwr_aid_pane_ParamLimits

0x73d3,	// (0x00021bfe) aid_touch_sctrl_top_ParamLimits

0x73e0,	// (0x00021c0b) sctrl_sk_top_pane_g1_ParamLimits

0xc50b,	// (0x00026d36) sctrl_sk_top_pane_g2_ParamLimits

0xfd08,	// (0x0002a533) sctrl_sk_top_pane_g_ParamLimits

0x73ed,	// (0x00021c18) sctrl_sk_top_pane_t1_ParamLimits

0x73d3,	// (0x00021bfe) aid_touch_sctrl_bottom_ParamLimits

0x73ed,	// (0x00021c18) sctrl_sk_bottom_pane_t1_ParamLimits

0xdba6,	// (0x000283d1) aid_area_touch_clock

0x75c8,	// (0x00021df3) aid_vkb2_area_top_pane_cell_ParamLimits

0x75c8,	// (0x00021df3) aid_vkb2_area_top_pane_cell

0x7713,	// (0x00021f3e) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x7713,	// (0x00021f3e) aid_vkb2_area_bottom_pane_cell

0xe112,	// (0x0002893d) popup_char_count_window

0xe591,	// (0x00028dbc) popup_char_count_window_g1

0xe59a,	// (0x00028dc5) popup_char_count_window_g2

0xe5a3,	// (0x00028dce) popup_char_count_window_g3

0x0002,

0xfdd9,	// (0x0002a604) popup_char_count_window_g

0xe5ac,	// (0x00028dd7) popup_char_count_window_t1

0x748e,	// (0x00021cb9) popup_fep_char_preview_window_ParamLimits

0x748e,	// (0x00021cb9) popup_fep_char_preview_window

0x75e6,	// (0x00021e11) vkb2_top_candi_pane_ParamLimits

0x75e6,	// (0x00021e11) vkb2_top_candi_pane

0xe5ba,	// (0x00028de5) cell_vkb2_top_candi_pane_ParamLimits

0xe5ba,	// (0x00028de5) cell_vkb2_top_candi_pane

0xa368,	// (0x00024b93) bg_popup_fep_char_preview_window_ParamLimits

0xa368,	// (0x00024b93) bg_popup_fep_char_preview_window

0x79fa,	// (0x00022225) popup_fep_char_preview_window_t1_ParamLimits

0x79fa,	// (0x00022225) popup_fep_char_preview_window_t1

0xe607,	// (0x00028e32) bg_popup_fep_char_preview_window_g1

0xe60f,	// (0x00028e3a) bg_popup_fep_char_preview_window_g2

0xe617,	// (0x00028e42) bg_popup_fep_char_preview_window_g3

0xe61f,	// (0x00028e4a) bg_popup_fep_char_preview_window_g4

0xe627,	// (0x00028e52) bg_popup_fep_char_preview_window_g5

0x7a34,	// (0x0002225f) bg_popup_fep_char_preview_window_g6

0xe62f,	// (0x00028e5a) bg_popup_fep_char_preview_window_g7

0xe637,	// (0x00028e62) bg_popup_fep_char_preview_window_g8

0xe63f,	// (0x00028e6a) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde0,	// (0x0002a60b) bg_popup_fep_char_preview_window_g

0xc50b,	// (0x00026d36) cell_vkb2_top_candi_pane_g1_ParamLimits

0xc50b,	// (0x00026d36) cell_vkb2_top_candi_pane_g1

0xc822,	// (0x0002704d) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc822,	// (0x0002704d) cell_vkb2_top_candi_pane_g2

0xc843,	// (0x0002706e) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc843,	// (0x0002706e) cell_vkb2_top_candi_pane_g3

0x7a3c,	// (0x00022267) cell_vkb2_top_candi_pane_g4_ParamLimits

0x7a3c,	// (0x00022267) cell_vkb2_top_candi_pane_g4

0xe647,	// (0x00028e72) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe647,	// (0x00028e72) cell_vkb2_top_candi_pane_g5

0xda36,	// (0x00028261) cell_vkb2_top_candi_pane_g6_ParamLimits

0xda36,	// (0x00028261) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf3,	// (0x0002a61e) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf3,	// (0x0002a61e) cell_vkb2_top_candi_pane_g

0x7a5d,	// (0x00022288) cell_vkb2_top_candi_pane_t1

0x6e46,	// (0x00021671) aid_size_touch_slider_mark_ParamLimits

0x6e46,	// (0x00021671) aid_size_touch_slider_mark

0xe255,	// (0x00028a80) grid_graphic2_catg_pane_ParamLimits

0xe255,	// (0x00028a80) grid_graphic2_catg_pane

0xe2f3,	// (0x00028b1e) popup_grid_graphic2_window_t1_ParamLimits

0xe2f3,	// (0x00028b1e) popup_grid_graphic2_window_t1

0xe305,	// (0x00028b30) popup_grid_graphic2_window_t2_ParamLimits

0xe305,	// (0x00028b30) popup_grid_graphic2_window_t2

0x0001,

0xfdae,	// (0x0002a5d9) popup_grid_graphic2_window_t_ParamLimits

0xfdae,	// (0x0002a5d9) popup_grid_graphic2_window_t

0x826d,	// (0x00022a98) bg_button_pane_cp05_ParamLimits

0xe46d,	// (0x00028c98) cell_graphic2_control_pane_g1_ParamLimits

0xe668,	// (0x00028e93) cell_graphic2_catg_pane_ParamLimits

0xe668,	// (0x00028e93) cell_graphic2_catg_pane

0x7ef0,	// (0x0002271b) bg_button_pane_cp12

0xe67a,	// (0x00028ea5) cell_graphic2_catg_pane_g1

0xdb72,	// (0x0002839d) cell_tb_ext_pane_t1_ParamLimits

0x7830,	// (0x0002205b) vkb2_top_cell_right_narrow_pane_ParamLimits

0x7830,	// (0x0002205b) vkb2_top_cell_right_narrow_pane

0x7848,	// (0x00022073) vkb2_top_cell_right_wide_pane_ParamLimits

0x7848,	// (0x00022073) vkb2_top_cell_right_wide_pane

0x6ffc,	// (0x00021827) bg_vkb2_func_pane_ParamLimits

0x6ffc,	// (0x00021827) bg_vkb2_func_pane

0x78b9,	// (0x000220e4) vkb2_top_cell_left_pane_g1_ParamLimits

0x6ffc,	// (0x00021827) bg_vkb2_fuc_pane_cp03_ParamLimits

0x6ffc,	// (0x00021827) bg_vkb2_fuc_pane_cp03

0x7917,	// (0x00022142) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9cea,	// (0x00024515) bg_vkb2_func_pane_g1

0x9cf2,	// (0x0002451d) bg_vkb2_func_pane_g2

0x9d02,	// (0x0002452d) bg_vkb2_func_pane_g3

0x9cfa,	// (0x00024525) bg_vkb2_func_pane_g4

0x9d0a,	// (0x00024535) bg_vkb2_func_pane_g5

0x9d12,	// (0x0002453d) bg_vkb2_func_pane_g6

0x9d1a,	// (0x00024545) bg_vkb2_func_pane_g7

0x9d22,	// (0x0002454d) bg_vkb2_func_pane_g8

0x9ce2,	// (0x0002450d) bg_vkb2_func_pane_g9

0x0008,

0xfe00,	// (0x0002a62b) bg_vkb2_func_pane_g

0x6ffc,	// (0x00021827) bg_vkb2_fuc_pane_cp01_ParamLimits

0x6ffc,	// (0x00021827) bg_vkb2_fuc_pane_cp01

0x78b9,	// (0x000220e4) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x78b9,	// (0x000220e4) vkb2_top_cell_right_wide_pane_g1

0x6ffc,	// (0x00021827) bg_vkb2_fuc_pane_cp02_ParamLimits

0x6ffc,	// (0x00021827) bg_vkb2_fuc_pane_cp02

0x7917,	// (0x00022142) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x7917,	// (0x00022142) vkb2_top_cell_right_narrow_pane_g1

0xd79e,	// (0x00027fc9) aid_touch_area_decrease_ParamLimits

0xd79e,	// (0x00027fc9) aid_touch_area_decrease

0xd7c2,	// (0x00027fed) aid_touch_area_increase_ParamLimits

0xd7c2,	// (0x00027fed) aid_touch_area_increase

0xd7ce,	// (0x00027ff9) aid_touch_area_mute_ParamLimits

0xd7ce,	// (0x00027ff9) aid_touch_area_mute

0xd7f2,	// (0x0002801d) aid_touch_area_slider_ParamLimits

0xd7f2,	// (0x0002801d) aid_touch_area_slider

0xd8de,	// (0x00028109) popup_slider_window_g4_ParamLimits

0xd8de,	// (0x00028109) popup_slider_window_g4

0xd8ea,	// (0x00028115) popup_slider_window_g5_ParamLimits

0xd8ea,	// (0x00028115) popup_slider_window_g5

0xd90c,	// (0x00028137) popup_slider_window_g6_ParamLimits

0xd90c,	// (0x00028137) popup_slider_window_g6

0xd94c,	// (0x00028177) popup_slider_window_t2_ParamLimits

0xd94c,	// (0x00028177) popup_slider_window_t2

0x0001,

0xfcfc,	// (0x0002a527) popup_slider_window_t_ParamLimits

0xfcfc,	// (0x0002a527) popup_slider_window_t

0xd964,	// (0x0002818f) slider_pane_ParamLimits

0xd964,	// (0x0002818f) slider_pane

0xe683,	// (0x00028eae) slider_pane_g1_ParamLimits

0xe683,	// (0x00028eae) slider_pane_g1

0xe697,	// (0x00028ec2) slider_pane_g2_ParamLimits

0xe697,	// (0x00028ec2) slider_pane_g2

0xe6ad,	// (0x00028ed8) slider_pane_g3_ParamLimits

0xe6ad,	// (0x00028ed8) slider_pane_g3

0x0003,

0xfe13,	// (0x0002a63e) slider_pane_g_ParamLimits

0xfe13,	// (0x0002a63e) slider_pane_g

0x6a8b,	// (0x000212b6) popup_tb_float_extension_window_ParamLimits

0x6a8b,	// (0x000212b6) popup_tb_float_extension_window

0xe6d9,	// (0x00028f04) aid_size_cell_tb_float_ext

0x7ef0,	// (0x0002271b) bg_popup_sub_window_cp28

0xe6e5,	// (0x00028f10) grid_tb_float_ext_pane

0xe6ef,	// (0x00028f1a) cell_tb_float_ext_pane_ParamLimits

0xe6ef,	// (0x00028f1a) cell_tb_float_ext_pane

0xe709,	// (0x00028f34) cell_tb_float_ext_pane_g1

0xe712,	// (0x00028f3d) grid_highlight_pane_cp12

0x713d,	// (0x00021968) cell_last_hwr_side_pane_ParamLimits

0x713d,	// (0x00021968) cell_last_hwr_side_pane

0xc29d,	// (0x00026ac8) cell_last_hwr_side_pane_g1

0xe71b,	// (0x00028f46) cell_last_hwr_side_pane_g2

0x0001,

0xfe1c,	// (0x0002a647) cell_last_hwr_side_pane_g

0x77df,	// (0x0002200a) vkb2_area_bottom_space_btn_pane_ParamLimits

0x77df,	// (0x0002200a) vkb2_area_bottom_space_btn_pane

0xc50b,	// (0x00026d36) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe1c7,	// (0x000289f2) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x7a5d,	// (0x00022288) cell_vkb2_top_candi_pane_t1_ParamLimits

0x7a7c,	// (0x000222a7) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x7a7c,	// (0x000222a7) vkb2_area_bottom_space_btn_pane_g1

0x7ab6,	// (0x000222e1) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x7ab6,	// (0x000222e1) vkb2_area_bottom_space_btn_pane_g2

0x7aec,	// (0x00022317) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x7aec,	// (0x00022317) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe21,	// (0x0002a64c) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe21,	// (0x0002a64c) vkb2_area_bottom_space_btn_pane_g

0x70b1,	// (0x000218dc) cel_fep_hwr_func_pane_ParamLimits

0x70b1,	// (0x000218dc) cel_fep_hwr_func_pane

0x70ed,	// (0x00021918) cell_hwr_side_button_pane_ParamLimits

0x70ed,	// (0x00021918) cell_hwr_side_button_pane

0xdba6,	// (0x000283d1) aid_area_touch_clock_ParamLimits

0x826d,	// (0x00022a98) bg_uniindi_top_pane_ParamLimits

0xdbb8,	// (0x000283e3) uniindi_top_pane_g1_ParamLimits

0xdbce,	// (0x000283f9) uniindi_top_pane_g2_ParamLimits

0xdbda,	// (0x00028405) uniindi_top_pane_g3_ParamLimits

0xdbeb,	// (0x00028416) uniindi_top_pane_g4_ParamLimits

0xfd34,	// (0x0002a55f) uniindi_top_pane_g_ParamLimits

0xdbf8,	// (0x00028423) uniindi_top_pane_t1_ParamLimits

0x826d,	// (0x00022a98) bg_vkb2_func_pane_cp01_ParamLimits

0x826d,	// (0x00022a98) bg_vkb2_func_pane_cp01

0xe724,	// (0x00028f4f) cel_fep_hwr_func_pane_g1_ParamLimits

0xe724,	// (0x00028f4f) cel_fep_hwr_func_pane_g1

0x826d,	// (0x00022a98) bg_vkb2_func_pane_cp02_ParamLimits

0x826d,	// (0x00022a98) bg_vkb2_func_pane_cp02

0xe724,	// (0x00028f4f) cell_hwr_side_button_pane_g1_ParamLimits

0xe724,	// (0x00028f4f) cell_hwr_side_button_pane_g1

0x9b63,	// (0x0002438e) status_pane_g4_ParamLimits

0x9b63,	// (0x0002438e) status_pane_g4

0x9b7d,	// (0x000243a8) status_pane_t1

0xbfb7,	// (0x000267e2) form2_midp_gauge_slider_cont_pane

0xbfbf,	// (0x000267ea) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbfd1,	// (0x000267fc) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbfe3,	// (0x0002680e) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb00,	// (0x0002a32b) form2_midp_gauge_slider_pane_t_ParamLimits

0xbff5,	// (0x00026820) form2_midp_slider_pane_ParamLimits

0x744e,	// (0x00021c79) aid_size_cell_func_vkb2_ParamLimits

0x744e,	// (0x00021c79) aid_size_cell_func_vkb2

0xe6c5,	// (0x00028ef0) slider_pane_g4_ParamLimits

0xe6c5,	// (0x00028ef0) slider_pane_g4

0x7b36,	// (0x00022361) form2_midp_gauge_slider_pane_t2_cp01

0x7b44,	// (0x0002236f) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x7b44,	// (0x0002236f) form2_midp_gauge_slider_pane_t3_cp01

0x7b61,	// (0x0002238c) form2_midp_slider_pane_cp01

0x7ef0,	// (0x0002271b) navi_smil_pane

0xe75d,	// (0x00028f88) navi_smil_pane_g1

0xe765,	// (0x00028f90) navi_smil_pane_t1

0xe732,	// (0x00028f5d) form2_midp_slider_pane_g1

0xe73b,	// (0x00028f66) form2_midp_slider_pane_g2

0xe743,	// (0x00028f6e) form2_midp_slider_pane_g3

0xe732,	// (0x00028f5d) form2_midp_slider_pane_g4

0xe74b,	// (0x00028f76) form2_midp_slider_pane_g5

0x0004,

0xfe2a,	// (0x0002a655) form2_midp_slider_pane_g

0x7b26,	// (0x00022351) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x7b26,	// (0x00022351) vkb2_area_bottom_space_btn_pane_g4

0x999a,	// (0x000241c5) lc0_navi_pane_ParamLimits

0x999a,	// (0x000241c5) lc0_navi_pane

0x9a10,	// (0x0002423b) lc0_stat_indi_pane_ParamLimits

0x9a10,	// (0x0002423b) lc0_stat_indi_pane

0x9a27,	// (0x00024252) ls0_title_pane_ParamLimits

0x9a27,	// (0x00024252) ls0_title_pane

0x883e,	// (0x00023069) bg_popup_sub_pane_cp14_ParamLimits

0xdb8d,	// (0x000283b8) list_uniindi_pane_ParamLimits

0xdb99,	// (0x000283c4) uniindi_top_pane_ParamLimits

0xdc35,	// (0x00028460) list_single_uniindi_pane_g1_ParamLimits

0xdc48,	// (0x00028473) list_single_uniindi_pane_t1_ParamLimits

0x7b6a,	// (0x00022395) lc0_stat_clock_pane_ParamLimits

0x7b6a,	// (0x00022395) lc0_stat_clock_pane

0xe773,	// (0x00028f9e) lc0_stat_indi_pane_g1_ParamLimits

0xe773,	// (0x00028f9e) lc0_stat_indi_pane_g1

0xe780,	// (0x00028fab) lc0_stat_indi_pane_g2_ParamLimits

0xe780,	// (0x00028fab) lc0_stat_indi_pane_g2

0x0001,

0xfe35,	// (0x0002a660) lc0_stat_indi_pane_g_ParamLimits

0xfe35,	// (0x0002a660) lc0_stat_indi_pane_g

0x7b77,	// (0x000223a2) lc0_uni_indicator_pane_ParamLimits

0x7b77,	// (0x000223a2) lc0_uni_indicator_pane

0xe78d,	// (0x00028fb8) ls0_title_pane_g1_ParamLimits

0xe78d,	// (0x00028fb8) ls0_title_pane_g1

0xe7a1,	// (0x00028fcc) ls0_title_pane_t1_ParamLimits

0xe7a1,	// (0x00028fcc) ls0_title_pane_t1

0x7b84,	// (0x000223af) lc0_uni_indicator_pane_g1_ParamLimits

0x7b84,	// (0x000223af) lc0_uni_indicator_pane_g1

0xe7d7,	// (0x00029002) lc0_stat_clock_pane_t1

0x7ef0,	// (0x0002271b) main_ai5_pane

0xe7e5,	// (0x00029010) ai5_sk_pane_ParamLimits

0xe7e5,	// (0x00029010) ai5_sk_pane

0xe7f2,	// (0x0002901d) cell_ai5_widget_pane_ParamLimits

0xe7f2,	// (0x0002901d) cell_ai5_widget_pane

0xe8bc,	// (0x000290e7) aid_size_cell_widget_grid

0xe8d2,	// (0x000290fd) bg_ai5_widget_pane_ParamLimits

0xe8d2,	// (0x000290fd) bg_ai5_widget_pane

0xe946,	// (0x00029171) cell_ai5_widget_pane_g2

0xe956,	// (0x00029181) cell_ai5_widget_pane_g3

0xe96d,	// (0x00029198) cell_ai5_widget_pane_g4

0xe979,	// (0x000291a4) cell_ai5_widget_pane_g5

0xe985,	// (0x000291b0) cell_ai5_widget_pane_g6

0xe991,	// (0x000291bc) cell_ai5_widget_pane_g7

0xe9d9,	// (0x00029204) cell_ai5_widget_pane_t1_ParamLimits

0xe9d9,	// (0x00029204) cell_ai5_widget_pane_t1

0xe9f6,	// (0x00029221) cell_ai5_widget_pane_t2_ParamLimits

0xe9f6,	// (0x00029221) cell_ai5_widget_pane_t2

0xea0e,	// (0x00029239) cell_ai5_widget_pane_t3_ParamLimits

0xea0e,	// (0x00029239) cell_ai5_widget_pane_t3

0xea26,	// (0x00029251) cell_ai5_widget_pane_t4_ParamLimits

0xea26,	// (0x00029251) cell_ai5_widget_pane_t4

0xea43,	// (0x0002926e) cell_ai5_widget_pane_t5_ParamLimits

0xea43,	// (0x0002926e) cell_ai5_widget_pane_t5

0xea62,	// (0x0002928d) cell_ai5_widget_pane_t6_ParamLimits

0xea62,	// (0x0002928d) cell_ai5_widget_pane_t6

0xea74,	// (0x0002929f) cell_ai5_widget_pane_t7_ParamLimits

0xea74,	// (0x0002929f) cell_ai5_widget_pane_t7

0xea8d,	// (0x000292b8) cell_ai5_widget_pane_t8_ParamLimits

0xea8d,	// (0x000292b8) cell_ai5_widget_pane_t8

0x0009,

0xfe4f,	// (0x0002a67a) cell_ai5_widget_pane_t_ParamLimits

0xfe4f,	// (0x0002a67a) cell_ai5_widget_pane_t

0xeae1,	// (0x0002930c) grid_ai5_widget_pane

0x883e,	// (0x00023069) highlight_cell_ai5_widget_pane_ParamLimits

0x883e,	// (0x00023069) highlight_cell_ai5_widget_pane

0xeaf9,	// (0x00029324) ai5_sk_left_pane

0xeb03,	// (0x0002932e) ai5_sk_middle_pane

0xeb0d,	// (0x00029338) ai5_sk_right_pane

0xeb17,	// (0x00029342) bg_ai5_widget_pane_g1_ParamLimits

0xeb17,	// (0x00029342) bg_ai5_widget_pane_g1

0xeb23,	// (0x0002934e) bg_ai5_widget_pane_g2_ParamLimits

0xeb23,	// (0x0002934e) bg_ai5_widget_pane_g2

0xeb2f,	// (0x0002935a) bg_ai5_widget_pane_g3_ParamLimits

0xeb2f,	// (0x0002935a) bg_ai5_widget_pane_g3

0xeb3b,	// (0x00029366) bg_ai5_widget_pane_g4_ParamLimits

0xeb3b,	// (0x00029366) bg_ai5_widget_pane_g4

0xeb47,	// (0x00029372) bg_ai5_widget_pane_g5_ParamLimits

0xeb47,	// (0x00029372) bg_ai5_widget_pane_g5

0xeb53,	// (0x0002937e) bg_ai5_widget_pane_g6_ParamLimits

0xeb53,	// (0x0002937e) bg_ai5_widget_pane_g6

0xeb5f,	// (0x0002938a) bg_ai5_widget_pane_g7_ParamLimits

0xeb5f,	// (0x0002938a) bg_ai5_widget_pane_g7

0xeb6b,	// (0x00029396) bg_ai5_widget_pane_g8_ParamLimits

0xeb6b,	// (0x00029396) bg_ai5_widget_pane_g8

0xeb77,	// (0x000293a2) bg_ai5_widget_pane_g9_ParamLimits

0xeb77,	// (0x000293a2) bg_ai5_widget_pane_g9

0x0008,

0xfe64,	// (0x0002a68f) bg_ai5_widget_pane_g_ParamLimits

0xfe64,	// (0x0002a68f) bg_ai5_widget_pane_g

0xeba9,	// (0x000293d4) cell_shortcut_ai5_widget_pane_ParamLimits

0xeba9,	// (0x000293d4) cell_shortcut_ai5_widget_pane

0x94aa,	// (0x00023cd5) bg_cell_shortcut_ai5_widget_pane

0xebba,	// (0x000293e5) cell_grid_ai5_widget_pane_g1

0x94aa,	// (0x00023cd5) highlight_cell_shortcut_ai5_widget_pane

0x9cf2,	// (0x0002451d) ai5_sk_left_pane_g1

0xebc3,	// (0x000293ee) ai5_sk_left_pane_g2

0xebcb,	// (0x000293f6) ai5_sk_left_pane_g3

0xebd3,	// (0x000293fe) ai5_sk_left_pane_g4

0x0003,

0xfe77,	// (0x0002a6a2) ai5_sk_left_pane_g

0xebdb,	// (0x00029406) ai5_sk_left_pane_t1

0x9cea,	// (0x00024515) ai5_sk_right_pane_g1

0xebe9,	// (0x00029414) ai5_sk_right_pane_g2

0xebf1,	// (0x0002941c) ai5_sk_right_pane_g3

0xebf9,	// (0x00029424) ai5_sk_right_pane_g4

0x0003,

0xfe80,	// (0x0002a6ab) ai5_sk_right_pane_g

0xec01,	// (0x0002942c) ai5_sk_right_pane_t1

0x9cea,	// (0x00024515) ai5_sk_middle_pane_g1

0x9cf2,	// (0x0002451d) ai5_sk_middle_pane_g2

0x9d0a,	// (0x00024535) ai5_sk_middle_pane_g3

0xebf1,	// (0x0002941c) ai5_sk_middle_pane_g4

0xebcb,	// (0x000293f6) ai5_sk_middle_pane_g5

0xec0f,	// (0x0002943a) ai5_sk_middle_pane_g6

0xec17,	// (0x00029442) ai5_sk_middle_pane_g7

0x0006,

0xfe89,	// (0x0002a6b4) ai5_sk_middle_pane_g

0x982a,	// (0x00024055) aid_touch_area_size_lc0_ParamLimits

0x982a,	// (0x00024055) aid_touch_area_size_lc0

0x723c,	// (0x00021a67) cell_hwr_candidate_pane_t1_ParamLimits

0x9846,	// (0x00024071) aid_touch_navi_pane

0x9b15,	// (0x00024340) status_dt_navi_pane_ParamLimits

0x9b15,	// (0x00024340) status_dt_navi_pane

0x9b22,	// (0x0002434d) status_dt_sta_pane_ParamLimits

0x9b22,	// (0x0002434d) status_dt_sta_pane

0xec1f,	// (0x0002944a) dt_sta_controll_pane

0xec2c,	// (0x00029457) dt_sta_indi_pane

0xec3d,	// (0x00029468) dt_sta_title_pane

0x826d,	// (0x00022a98) bg_dt_sta_indi_pane_ParamLimits

0x826d,	// (0x00022a98) bg_dt_sta_indi_pane

0xec50,	// (0x0002947b) dt_sta_battery_pane

0xec58,	// (0x00029483) dt_sta_indi_pane_g1

0xec61,	// (0x0002948c) dt_sta_indi_pane_g2

0xec6a,	// (0x00029495) dt_sta_indi_pane_g3

0x0002,

0xfe98,	// (0x0002a6c3) dt_sta_indi_pane_g

0xec73,	// (0x0002949e) dt_sta_signal_pane

0x883e,	// (0x00023069) bg_dt_sta_title_pane_ParamLimits

0x883e,	// (0x00023069) bg_dt_sta_title_pane

0xec7c,	// (0x000294a7) dt_sta_title_pane_g1

0xec84,	// (0x000294af) dt_sta_title_pane_t1_ParamLimits

0xec84,	// (0x000294af) dt_sta_title_pane_t1

0x7ef0,	// (0x0002271b) bg_dt_sta_control_pane

0xec99,	// (0x000294c4) dt_sta_controll_pane_g1

0xeca2,	// (0x000294cd) bg_dt_sta_title_pane_g1

0xecab,	// (0x000294d6) bg_dt_sta_title_pane_g2

0xecb4,	// (0x000294df) bg_dt_sta_title_pane_g3

0x0002,

0xfe9f,	// (0x0002a6ca) bg_dt_sta_title_pane_g

0xc29d,	// (0x00026ac8) bg_dt_sta_indi_pane_g1

0xecbd,	// (0x000294e8) dt_sta_signal_pane_g1

0xecc5,	// (0x000294f0) dt_sta_signal_pane_g2

0x0001,

0xfea6,	// (0x0002a6d1) dt_sta_signal_pane_g

0xeccd,	// (0x000294f8) dt_sta_battery_pane_g1

0xecd6,	// (0x00029501) dt_sta_battery_pane_t1

0xc29d,	// (0x00026ac8) bg_dt_sta_control_pane_g1

0x8fa0,	// (0x000237cb) fep_china_uni_eep_pane

0x8fa8,	// (0x000237d3) fep_china_uni_entry_pane_ParamLimits

0x8fb8,	// (0x000237e3) popup_fep_china_uni_window_g1_ParamLimits

0x8fc8,	// (0x000237f3) popup_fep_china_uni_window_g2_ParamLimits

0x8fc8,	// (0x000237f3) popup_fep_china_uni_window_g2

0x0001,

0xf71d,	// (0x00029f48) popup_fep_china_uni_window_g_ParamLimits

0xf71d,	// (0x00029f48) popup_fep_china_uni_window_g

0xece5,	// (0x00029510) fep_china_uni_eep_pane_g1

0xeced,	// (0x00029518) fep_china_uni_eep_pane_t1

0xe754,	// (0x00028f7f) aid_touch_area_size_smil_player

0x9992,	// (0x000241bd) lc0_clock_pane

0x9b71,	// (0x0002439c) status_pane_g5_ParamLimits

0x9b71,	// (0x0002439c) status_pane_g5

0x6752,	// (0x00020f7d) popup_keymap_window

0x9b37,	// (0x00024362) status_icon_pane

0xe956,	// (0x00029181) cell_ai5_widget_pane_g3_ParamLimits

0xe96d,	// (0x00029198) cell_ai5_widget_pane_g4_ParamLimits

0xe979,	// (0x000291a4) cell_ai5_widget_pane_g5_ParamLimits

0xe99d,	// (0x000291c8) cell_ai5_widget_pane_g8_ParamLimits

0xe99d,	// (0x000291c8) cell_ai5_widget_pane_g8

0xe9b1,	// (0x000291dc) cell_ai5_widget_pane_g9_ParamLimits

0xe9b1,	// (0x000291dc) cell_ai5_widget_pane_g9

0xe9c5,	// (0x000291f0) cell_ai5_widget_pane_g10_ParamLimits

0xe9c5,	// (0x000291f0) cell_ai5_widget_pane_g10

0xecfc,	// (0x00029527) status_icon_pane_g1

0x7ef0,	// (0x0002271b) bg_popup_sub_pane_cp13

0xed04,	// (0x0002952f) popup_keymap_window_t1

0x976f,	// (0x00023f9a) control_pane_g6_ParamLimits

0x976f,	// (0x00023f9a) control_pane_g6

0x977c,	// (0x00023fa7) control_pane_g7_ParamLimits

0x977c,	// (0x00023fa7) control_pane_g7

0x9789,	// (0x00023fb4) control_pane_g8_ParamLimits

0x9789,	// (0x00023fb4) control_pane_g8

0xec1f,	// (0x0002944a) dt_sta_controll_pane_ParamLimits

0xec2c,	// (0x00029457) dt_sta_indi_pane_ParamLimits

0xec3d,	// (0x00029468) dt_sta_title_pane_ParamLimits

0x8776,	// (0x00022fa1) aid_size_touch_scroll_bar_cale

0x5dec,	// (0x00020617) popup_discreet_window_ParamLimits

0x5dec,	// (0x00020617) popup_discreet_window

0x5e66,	// (0x00020691) popup_sk_window

0xa368,	// (0x00024b93) bg_popup_sub_pane_cp28_ParamLimits

0xa368,	// (0x00024b93) bg_popup_sub_pane_cp28

0xed12,	// (0x0002953d) popup_discreet_window_g1_ParamLimits

0xed12,	// (0x0002953d) popup_discreet_window_g1

0xed32,	// (0x0002955d) popup_discreet_window_t1_ParamLimits

0xed32,	// (0x0002955d) popup_discreet_window_t1

0xed50,	// (0x0002957b) popup_discreet_window_t2_ParamLimits

0xed50,	// (0x0002957b) popup_discreet_window_t2

0x0002,

0xfeab,	// (0x0002a6d6) popup_discreet_window_t_ParamLimits

0xfeab,	// (0x0002a6d6) popup_discreet_window_t

0x7b99,	// (0x000223c4) popup_sk_window_g1

0x7ba3,	// (0x000223ce) popup_sk_window_g2

0x0001,

0xfeb2,	// (0x0002a6dd) popup_sk_window_g

0x7bad,	// (0x000223d8) popup_sk_window_t1

0x7bbb,	// (0x000223e6) popup_sk_window_t1_copy1

0xe946,	// (0x00029171) cell_ai5_widget_pane_g2_ParamLimits

0xea9f,	// (0x000292ca) cell_ai5_widget_pane_t9_ParamLimits

0xea9f,	// (0x000292ca) cell_ai5_widget_pane_t9

0x7ef0,	// (0x0002271b) main_fep_fshwr2_pane

0x7bc9,	// (0x000223f4) aid_fshwr2_btn_pane

0x7bd5,	// (0x00022400) aid_fshwr2_syb_pane

0x7be1,	// (0x0002240c) aid_fshwr2_txt_pane

0x7bed,	// (0x00022418) fshwr2_func_candi_pane

0x7c02,	// (0x0002242d) fshwr2_hwr_syb_pane

0x7c12,	// (0x0002243d) fshwr2_icf_pane

0x7ef0,	// (0x0002271b) fshwr2_icf_bg_pane

0x7c3b,	// (0x00022466) fshwr2_icf_pane_t1_ParamLimits

0x7c3b,	// (0x00022466) fshwr2_icf_pane_t1

0x8e92,	// (0x000236bd) fshwr2_func_candi_pane_g1

0xeda2,	// (0x000295cd) fshwr2_func_candi_row_pane_ParamLimits

0xeda2,	// (0x000295cd) fshwr2_func_candi_row_pane

0x7c53,	// (0x0002247e) cell_fshwr2_syb_pane_ParamLimits

0x7c53,	// (0x0002247e) cell_fshwr2_syb_pane

0xc50b,	// (0x00026d36) fshwr2_hwr_syb_pane_g1_ParamLimits

0xc50b,	// (0x00026d36) fshwr2_hwr_syb_pane_g1

0x7ef0,	// (0x0002271b) bg_popup_call_pane_cp01

0x7c69,	// (0x00022494) fshwr2_func_candi_cell_pane_ParamLimits

0x7c69,	// (0x00022494) fshwr2_func_candi_cell_pane

0xa9e4,	// (0x0002520f) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa9e4,	// (0x0002520f) fshwr2_func_candi_cell_bg_pane

0x7c9e,	// (0x000224c9) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x7c9e,	// (0x000224c9) fshwr2_func_candi_cell_pane_g1

0x7cbe,	// (0x000224e9) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x7cbe,	// (0x000224e9) fshwr2_func_candi_cell_pane_t1

0x7ef0,	// (0x0002271b) bg_button_pane_cp08

0xb684,	// (0x00025eaf) cell_fshwr2_syb_bg_pane

0x7cd1,	// (0x000224fc) cell_fshwr2_syb_bg_pane_g1

0x7cd9,	// (0x00022504) cell_fshwr2_syb_bg_pane_t1

0x883e,	// (0x00023069) main_tmo_pane

0xae7d,	// (0x000256a8) uni_indicator_pane_g1_ParamLimits

0xae93,	// (0x000256be) uni_indicator_pane_g2_ParamLimits

0xaea9,	// (0x000256d4) uni_indicator_pane_g3_ParamLimits

0xaebe,	// (0x000256e9) uni_indicator_pane_g4_ParamLimits

0xaebe,	// (0x000256e9) uni_indicator_pane_g4

0xaed2,	// (0x000256fd) uni_indicator_pane_g5_ParamLimits

0xaed2,	// (0x000256fd) uni_indicator_pane_g5

0xaed2,	// (0x000256fd) uni_indicator_pane_g6_ParamLimits

0xaed2,	// (0x000256fd) uni_indicator_pane_g6

0xf91a,	// (0x0002a145) uni_indicator_pane_g_ParamLimits

0xd780,	// (0x00027fab) popup_tmo_note_window_ParamLimits

0xd780,	// (0x00027fab) popup_tmo_note_window

0x883e,	// (0x00023069) fshwr2_bg_pane

0x7caf,	// (0x000224da) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x7caf,	// (0x000224da) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb7,	// (0x0002a6e2) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb7,	// (0x0002a6e2) fshwr2_func_candi_cell_pane_g

0xc29d,	// (0x00026ac8) bg_popup_window_pane_cp01

0x7ce8,	// (0x00022513) bg_popup_window_pane_g1_cp01

0xedb2,	// (0x000295dd) bg_popup_window_pane_cp22_ParamLimits

0xedb2,	// (0x000295dd) bg_popup_window_pane_cp22

0xedc0,	// (0x000295eb) listscroll_tmo_link_pane_ParamLimits

0xedc0,	// (0x000295eb) listscroll_tmo_link_pane

0xee00,	// (0x0002962b) popup_tmo_note_window_g1_ParamLimits

0xee00,	// (0x0002962b) popup_tmo_note_window_g1

0xee0d,	// (0x00029638) tmo_note_info_pane_ParamLimits

0xee0d,	// (0x00029638) tmo_note_info_pane

0xee27,	// (0x00029652) list_tmo_note_info_pane_g1_ParamLimits

0xee27,	// (0x00029652) list_tmo_note_info_pane_g1

0xee3e,	// (0x00029669) list_tmo_note_info_pane_g2_ParamLimits

0xee3e,	// (0x00029669) list_tmo_note_info_pane_g2

0x0001,

0xfebc,	// (0x0002a6e7) list_tmo_note_info_pane_g_ParamLimits

0xfebc,	// (0x0002a6e7) list_tmo_note_info_pane_g

0xee5a,	// (0x00029685) list_tmo_note_info_text_pane_ParamLimits

0xee5a,	// (0x00029685) list_tmo_note_info_text_pane

0xeedd,	// (0x00029708) list_tmo_link_pane

0xeeea,	// (0x00029715) scroll_pane_cp20

0xeef7,	// (0x00029722) list_single_tmo_link_pane_ParamLimits

0xeef7,	// (0x00029722) list_single_tmo_link_pane

0xef07,	// (0x00029732) list_single_tmo_link_pane_t1

0xef15,	// (0x00029740) list_tmo_note_info_text_pane_t1_ParamLimits

0xef15,	// (0x00029740) list_tmo_note_info_text_pane_t1

0x88f8,	// (0x00023123) aid_size_touch_scroll_bar_cp01_ParamLimits

0x88f8,	// (0x00023123) aid_size_touch_scroll_bar_cp01

0x5003,	// (0x0001f82e) aid_size_touch_slider_marker

0x5e4e,	// (0x00020679) popup_settings_window_ParamLimits

0x5e4e,	// (0x00020679) popup_settings_window

0x51b1,	// (0x0001f9dc) popup_candi_list_indi_window

0x9846,	// (0x00024071) aid_touch_navi_pane_ParamLimits

0x73a7,	// (0x00021bd2) rs_clock_indi_pane

0x73b0,	// (0x00021bdb) sctrl_sk_bottom_pane_ParamLimits

0x73c1,	// (0x00021bec) sctrl_sk_top_pane_ParamLimits

0x74a8,	// (0x00021cd3) popup_fep_tooltip_window

0xe8bc,	// (0x000290e7) aid_size_cell_widget_grid_ParamLimits

0xe931,	// (0x0002915c) cell_ai5_widget_pane_g1_ParamLimits

0xe931,	// (0x0002915c) cell_ai5_widget_pane_g1

0xe985,	// (0x000291b0) cell_ai5_widget_pane_g6_ParamLimits

0xe991,	// (0x000291bc) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe3a,	// (0x0002a665) cell_ai5_widget_pane_g_ParamLimits

0xfe3a,	// (0x0002a665) cell_ai5_widget_pane_g

0xeac3,	// (0x000292ee) cell_ai5_widget_pane_t10_ParamLimits

0xeac3,	// (0x000292ee) cell_ai5_widget_pane_t10

0xeae1,	// (0x0002930c) grid_ai5_widget_pane_ParamLimits

0xeb83,	// (0x000293ae) cell_contacts_ai5_widget_pane_ParamLimits

0xeb83,	// (0x000293ae) cell_contacts_ai5_widget_pane

0xed65,	// (0x00029590) popup_discreet_window_t3_ParamLimits

0xed65,	// (0x00029590) popup_discreet_window_t3

0x7c27,	// (0x00022452) popup_fshwr2_char_preview_window_ParamLimits

0x7c27,	// (0x00022452) popup_fshwr2_char_preview_window

0xee78,	// (0x000296a3) tmo_note_info_pane_t1

0xee8d,	// (0x000296b8) tmo_note_info_pane_t2

0xeea4,	// (0x000296cf) tmo_note_info_pane_t3

0xeeb9,	// (0x000296e4) tmo_note_info_pane_t4

0xeecb,	// (0x000296f6) tmo_note_info_pane_t5

0x0004,

0xfec1,	// (0x0002a6ec) tmo_note_info_pane_t

0xeedd,	// (0x00029708) list_tmo_link_pane_ParamLimits

0xeeea,	// (0x00029715) scroll_pane_cp20_ParamLimits

0x7ef0,	// (0x0002271b) bg_popup_fep_char_preview_window_cp01

0xef2e,	// (0x00029759) popup_fshwr2_char_preview_window_t1

0xef3c,	// (0x00029767) popup_candi_list_indi_window_g1

0xef45,	// (0x00029770) bg_cell_contacts_ai5_widget_pane

0xef51,	// (0x0002977c) cell_contacts_ai5_widget_pane_g1

0xef66,	// (0x00029791) cell_contacts_ai5_widget_pane_g2

0xef72,	// (0x0002979d) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfecc,	// (0x0002a6f7) cell_contacts_ai5_widget_pane_g

0xef7e,	// (0x000297a9) cell_contacts_ai5_widget_pane_t1

0x883e,	// (0x00023069) highlight_cell_shortcut_ai5_widget_pane_cp01

0xeff5,	// (0x00029820) settings_container_pane

0x94aa,	// (0x00023cd5) listscroll_set_pane_copy1

0xb973,	// (0x0002619e) scroll_pane_cp121_copy1

0xf001,	// (0x0002982c) set_content_pane_copy1

0xf009,	// (0x00029834) aid_height_set_list_copy1_ParamLimits

0xf009,	// (0x00029834) aid_height_set_list_copy1

0xb0c5,	// (0x000258f0) aid_size_parent_copy1_ParamLimits

0xb0c5,	// (0x000258f0) aid_size_parent_copy1

0xf015,	// (0x00029840) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf015,	// (0x00029840) button_value_adjust_pane_cp6_copy1

0x97e4,	// (0x0002400f) list_highlight_pane_cp2_copy1_ParamLimits

0x97e4,	// (0x0002400f) list_highlight_pane_cp2_copy1

0xf029,	// (0x00029854) list_set_pane_copy1_ParamLimits

0xf029,	// (0x00029854) list_set_pane_copy1

0xef90,	// (0x000297bb) main_pane_set_t1_copy1_ParamLimits

0xef90,	// (0x000297bb) main_pane_set_t1_copy1

0xefca,	// (0x000297f5) main_pane_set_t2_copy1_ParamLimits

0xefca,	// (0x000297f5) main_pane_set_t2_copy1

0xf0d6,	// (0x00029901) main_pane_set_t3_copy1

0xf0e4,	// (0x0002990f) main_pane_set_t4_copy1

0xefe9,	// (0x00029814) set_content_pane_g1_copy1_ParamLimits

0xefe9,	// (0x00029814) set_content_pane_g1_copy1

0xf0f2,	// (0x0002991d) setting_code_pane_copy1

0xf0fa,	// (0x00029925) setting_slider_graphic_pane_copy1

0xf0fa,	// (0x00029925) setting_slider_pane_copy1

0xf0fa,	// (0x00029925) setting_text_pane_copy1

0xf0fa,	// (0x00029925) setting_volume_pane_copy1

0xf0f2,	// (0x0002991d) settings_code_pane_cp2_copy1

0xf102,	// (0x0002992d) settings_code_pane_cp_copy1_ParamLimits

0xf102,	// (0x0002992d) settings_code_pane_cp_copy1

0x7cf1,	// (0x0002251c) volume_set_pane_copy1

0xf116,	// (0x00029941) volume_set_pane_g10_copy1

0xf11e,	// (0x00029949) volume_set_pane_g1_copy1

0xf126,	// (0x00029951) volume_set_pane_g2_copy1

0xf12e,	// (0x00029959) volume_set_pane_g3_copy1

0xf136,	// (0x00029961) volume_set_pane_g4_copy1

0xf13e,	// (0x00029969) volume_set_pane_g5_copy1

0xf146,	// (0x00029971) volume_set_pane_g6_copy1

0xf14e,	// (0x00029979) volume_set_pane_g7_copy1

0xf156,	// (0x00029981) volume_set_pane_g8_copy1

0xf15e,	// (0x00029989) volume_set_pane_g9_copy1

0x7fe4,	// (0x0002280f) bg_set_opt_pane_cp_copy1_ParamLimits

0x7fe4,	// (0x0002280f) bg_set_opt_pane_cp_copy1

0x7cf9,	// (0x00022524) setting_slider_pane_t1_copy1_ParamLimits

0x7cf9,	// (0x00022524) setting_slider_pane_t1_copy1

0x7d17,	// (0x00022542) setting_slider_pane_t2_copy1_ParamLimits

0x7d17,	// (0x00022542) setting_slider_pane_t2_copy1

0x7d31,	// (0x0002255c) setting_slider_pane_t3_copy1_ParamLimits

0x7d31,	// (0x0002255c) setting_slider_pane_t3_copy1

0x7d49,	// (0x00022574) slider_set_pane_copy1_ParamLimits

0x7d49,	// (0x00022574) slider_set_pane_copy1

0x8899,	// (0x000230c4) set_opt_bg_pane_g1_copy2

0x88a1,	// (0x000230cc) set_opt_bg_pane_g2_copy2

0xf166,	// (0x00029991) set_opt_bg_pane_g3_copy2

0x88b1,	// (0x000230dc) set_opt_bg_pane_g4_copy2

0x88b9,	// (0x000230e4) set_opt_bg_pane_g5_copy2

0x88c1,	// (0x000230ec) set_opt_bg_pane_g6_copy2

0xf170,	// (0x0002999b) set_opt_bg_pane_g7_copy2

0xf178,	// (0x000299a3) set_opt_bg_pane_g8_copy2

0xf182,	// (0x000299ad) set_opt_bg_pane_g9_copy2

0x7d5f,	// (0x0002258a) aid_size_touch_slider_mark_copy1_ParamLimits

0x7d5f,	// (0x0002258a) aid_size_touch_slider_mark_copy1

0xf18c,	// (0x000299b7) slider_set_pane_g1_copy1

0x7d73,	// (0x0002259e) slider_set_pane_g2_copy1

0x6e66,	// (0x00021691) slider_set_pane_g3_copy1_ParamLimits

0x6e66,	// (0x00021691) slider_set_pane_g3_copy1

0x6e7a,	// (0x000216a5) slider_set_pane_g4_copy1_ParamLimits

0x6e7a,	// (0x000216a5) slider_set_pane_g4_copy1

0x6e92,	// (0x000216bd) slider_set_pane_g5_copy1_ParamLimits

0x6e92,	// (0x000216bd) slider_set_pane_g5_copy1

0x6e66,	// (0x00021691) slider_set_pane_g6_copy1_ParamLimits

0x6e66,	// (0x00021691) slider_set_pane_g6_copy1

0x7d7b,	// (0x000225a6) slider_set_pane_g7_copy1_ParamLimits

0x7d7b,	// (0x000225a6) slider_set_pane_g7_copy1

0x7f04,	// (0x0002272f) bg_set_opt_pane_cp2_copy1

0xf195,	// (0x000299c0) setting_slider_graphic_pane_g1_copy1

0xf19e,	// (0x000299c9) setting_slider_graphic_pane_t1_copy1

0xf1ae,	// (0x000299d9) setting_slider_graphic_pane_t2_copy1

0xf1be,	// (0x000299e9) slider_set_pane_cp_copy1

0xf1ce,	// (0x000299f9) input_focus_pane_cp1_copy1

0xf1d7,	// (0x00029a02) list_set_text_pane_copy1

0xf1df,	// (0x00029a0a) setting_text_pane_g1_copy1

0x5b60,	// (0x0002038b) set_text_pane_t1_copy1

0xf1ce,	// (0x000299f9) input_focus_pane_cp2_copy1

0xf1df,	// (0x00029a0a) setting_code_pane_g1_copy1

0xf1e8,	// (0x00029a13) setting_code_pane_t1_copy1

0xf1f6,	// (0x00029a21) list_set_graphic_pane_copy1

0x7f04,	// (0x0002272f) bg_set_opt_pane_cp4_copy1

0x91b5,	// (0x000239e0) list_set_graphic_pane_g1_copy1_ParamLimits

0x91b5,	// (0x000239e0) list_set_graphic_pane_g1_copy1

0xf20a,	// (0x00029a35) list_set_graphic_pane_g2_copy1

0x91cd,	// (0x000239f8) list_set_graphic_pane_t1_copy1_ParamLimits

0x91cd,	// (0x000239f8) list_set_graphic_pane_t1_copy1

0xc29d,	// (0x00026ac8) rs_clock_indi_pane_g1

0xf212,	// (0x00029a3d) rs_clock_indi_pane_t1

0xf220,	// (0x00029a4b) rs_indi_pane

0xf228,	// (0x00029a53) rs_indi_pane_g1

0xf231,	// (0x00029a5c) rs_indi_pane_g2

0xf23a,	// (0x00029a65) rs_indi_pane_g3

0x0002,

0x0209,	// (0x0001aa34) rs_indi_pane_g

0x94aa,	// (0x00023cd5) bg_popup_preview_window_pane_cp03

0xf243,	// (0x00029a6e) popup_fep_tooltip_window_t1

0xcf19,	// (0x00027744) popup_note2_window_g2_ParamLimits

0xcf19,	// (0x00027744) popup_note2_window_g2

0x0001,

0xfc6c,	// (0x0002a497) popup_note2_window_g_ParamLimits

0xfc6c,	// (0x0002a497) popup_note2_window_g

0xd415,	// (0x00027c40) bg_popup_sub_pane_cp11_ParamLimits

0xd422,	// (0x00027c4d) cell_ai3_links_pane_g1_ParamLimits

0xd439,	// (0x00027c64) cell_ai3_links_pane_t1

0x5b60,	// (0x0002038b) set_text_pane_t1_copy1_ParamLimits

0x93c7,	// (0x00023bf2) cell_graphic_popup_pane_cp2_ParamLimits

0x93c7,	// (0x00023bf2) cell_graphic_popup_pane_cp2

0xf251,	// (0x00029a7c) cell_graphic_popup_pane_g1_cp2

0x8589,	// (0x00022db4) cell_graphic_popup_pane_g2_cp2

0xf259,	// (0x00029a84) cell_graphic_popup_pane_g3_cp2

0xf261,	// (0x00029a8c) cell_graphic_popup_pane_t2_cp2

0x859a,	// (0x00022dc5) grid_highlight_pane_cp3_cp2

0x8bd9,	// (0x00023404) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x883e,	// (0x00023069) main_tmo_pane_ParamLimits

0xd774,	// (0x00027f9f) popup_tmo_big_image_note_window

0xe920,	// (0x0002914b) cell_ai5_widget_list_pane

0xe928,	// (0x00029153) cell_ai5_widget_lrg_icon_pane

0xee78,	// (0x000296a3) tmo_note_info_pane_t1_ParamLimits

0xee8d,	// (0x000296b8) tmo_note_info_pane_t2_ParamLimits

0xeea4,	// (0x000296cf) tmo_note_info_pane_t3_ParamLimits

0xeeb9,	// (0x000296e4) tmo_note_info_pane_t4_ParamLimits

0xeecb,	// (0x000296f6) tmo_note_info_pane_t5_ParamLimits

0xfec1,	// (0x0002a6ec) tmo_note_info_pane_t_ParamLimits

0xeff5,	// (0x00029820) settings_container_pane_ParamLimits

0xf1c6,	// (0x000299f1) indicator_popup_pane_cp5

0xf1c6,	// (0x000299f1) indicator_popup_pane_cp6

0xf1f6,	// (0x00029a21) list_set_graphic_pane_copy1_ParamLimits

0x7ef0,	// (0x0002271b) bg_popup_window_pane_cp23

0xf26f,	// (0x00029a9a) popup_tmo_big_image_note_window_g1

0xf278,	// (0x00029aa3) popup_tmo_big_image_note_window_t1

0xf288,	// (0x00029ab3) popup_tmo_big_image_note_window_t2

0xf298,	// (0x00029ac3) popup_tmo_big_image_note_window_t3

0x0002,

0x0210,	// (0x0001aa3b) popup_tmo_big_image_note_window_t

0xc29d,	// (0x00026ac8) cell_ai5_widget_lrg_icon_pane_g1

0xf2a8,	// (0x00029ad3) cell_ai5_widget_lrg_icon_pane_t1

0xf2b6,	// (0x00029ae1) cell_ai5_widget_list_row_pane_ParamLimits

0xf2b6,	// (0x00029ae1) cell_ai5_widget_list_row_pane

0xf2cd,	// (0x00029af8) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf2cd,	// (0x00029af8) cell_ai5_widget_list_row_pane_g1

0xf2da,	// (0x00029b05) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf2da,	// (0x00029b05) cell_ai5_widget_list_row_pane_t1

0xf308,	// (0x00029b33) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf308,	// (0x00029b33) cell_ai5_widget_list_row_pane_t2

0x0002,

0x0217,	// (0x0001aa42) cell_ai5_widget_list_row_pane_t_ParamLimits

0x0217,	// (0x0001aa42) cell_ai5_widget_list_row_pane_t

0x7ef0,	// (0x0002271b) main_fep_vtchi_ss_pane

0xf34c,	// (0x00029b77) popup_fep_char_pre_window

0xf354,	// (0x00029b7f) popup_fep_ituss_window

0xf375,	// (0x00029ba0) popup_fep_vkbss_window

0xf394,	// (0x00029bbf) grid_vkbss_keypad_pane_ParamLimits

0xf394,	// (0x00029bbf) grid_vkbss_keypad_pane

0xf3a4,	// (0x00029bcf) ituss_keypad_pane

0x7d9d,	// (0x000225c8) aid_vkbss_key_offset_ParamLimits

0x7d9d,	// (0x000225c8) aid_vkbss_key_offset

0x7da9,	// (0x000225d4) cell_vkbss_key_pane_ParamLimits

0x7da9,	// (0x000225d4) cell_vkbss_key_pane

0x9b4b,	// (0x00024376) bg_cell_vkbss_key_g1_ParamLimits

0x9b4b,	// (0x00024376) bg_cell_vkbss_key_g1

0xf3b3,	// (0x00029bde) cell_vkbss_key_3p_pane_ParamLimits

0xf3b3,	// (0x00029bde) cell_vkbss_key_3p_pane

0xf3cd,	// (0x00029bf8) cell_vkbss_key_g1_ParamLimits

0xf3cd,	// (0x00029bf8) cell_vkbss_key_g1

0xf3e7,	// (0x00029c12) cell_vkbss_key_t1_ParamLimits

0xf3e7,	// (0x00029c12) cell_vkbss_key_t1

0x7dbf,	// (0x000225ea) cell_ituss_key_pane_ParamLimits

0x7dbf,	// (0x000225ea) cell_ituss_key_pane

0xf412,	// (0x00029c3d) bg_cell_ituss_key_g1_ParamLimits

0xf412,	// (0x00029c3d) bg_cell_ituss_key_g1

0xf41e,	// (0x00029c49) cell_ituss_key_pane_g1_ParamLimits

0xf41e,	// (0x00029c49) cell_ituss_key_pane_g1

0x7dd0,	// (0x000225fb) cell_ituss_key_pane_g2_ParamLimits

0x7dd0,	// (0x000225fb) cell_ituss_key_pane_g2

0x0002,

0xfed3,	// (0x0002a6fe) cell_ituss_key_pane_g_ParamLimits

0xfed3,	// (0x0002a6fe) cell_ituss_key_pane_g

0x7dfc,	// (0x00022627) cell_ituss_key_t1_ParamLimits

0x7dfc,	// (0x00022627) cell_ituss_key_t1

0x7e36,	// (0x00022661) cell_ituss_key_t2_ParamLimits

0x7e36,	// (0x00022661) cell_ituss_key_t2

0x7e67,	// (0x00022692) cell_ituss_key_t3_ParamLimits

0x7e67,	// (0x00022692) cell_ituss_key_t3

0x7e36,	// (0x00022661) cell_ituss_key_t4_ParamLimits

0x7e36,	// (0x00022661) cell_ituss_key_t4

0x0004,

0xfeda,	// (0x0002a705) cell_ituss_key_t_ParamLimits

0xfeda,	// (0x0002a705) cell_ituss_key_t

0xf444,	// (0x00029c6f) cell_vkbss_key_3p_pane_g1

0xf44c,	// (0x00029c77) cell_vkbss_key_3p_pane_g2

0xf454,	// (0x00029c7f) cell_vkbss_key_3p_pane_g3

0x0002,

0x0230,	// (0x0001aa5b) cell_vkbss_key_3p_pane_g

0x7ef0,	// (0x0002271b) bg_popup_fep_char_preview_window_cp02

0x7eaa,	// (0x000226d5) popup_fep_char_pre_window_t1

0xe8b2,	// (0x000290dd) main_ai5_sk_pane

0xef45,	// (0x00029770) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xef51,	// (0x0002977c) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xef66,	// (0x00029791) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xef72,	// (0x0002979d) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfecc,	// (0x0002a6f7) cell_contacts_ai5_widget_pane_g_ParamLimits

0xef7e,	// (0x000297a9) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x883e,	// (0x00023069) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf45c,	// (0x00029c87) main_ai5_sk_pane_g1

0xa1a6,	// (0x000249d1) popup_query_code_window_g1

0xf36a,	// (0x00029b95) popup_fep_vkb_icf_pane

0xf37e,	// (0x00029ba9) popup_fep_vtchi_icf_pane

0xf465,	// (0x00029c90) bg_icf_pane

0xf471,	// (0x00029c9c) list_vkb_icf_pane

0xf47d,	// (0x00029ca8) bg_icf_pane_cp01

0xf490,	// (0x00029cbb) vtchi_icf_list_pane

0xf4a0,	// (0x00029ccb) list_vkb_icf_pane_t1_ParamLimits

0xf4a0,	// (0x00029ccb) list_vkb_icf_pane_t1

0xf4b8,	// (0x00029ce3) vtchi_icf_list_pane_t1_ParamLimits

0xf4b8,	// (0x00029ce3) vtchi_icf_list_pane_t1

0xf354,	// (0x00029b7f) popup_fep_ituss_window_ParamLimits

0xf37e,	// (0x00029ba9) popup_fep_vtchi_icf_pane_ParamLimits

0xf3a4,	// (0x00029bcf) ituss_keypad_pane_ParamLimits

0x7d91,	// (0x000225bc) ituss_sks_pane

0xf465,	// (0x00029c90) bg_icf_pane_ParamLimits

0xf330,	// (0x00029b5b) icf_edit_indi_pane_ParamLimits

0xf330,	// (0x00029b5b) icf_edit_indi_pane

0xf471,	// (0x00029c9c) list_vkb_icf_pane_ParamLimits

0xf47d,	// (0x00029ca8) bg_icf_pane_cp01_ParamLimits

0xf33f,	// (0x00029b6a) icf_edit_indi_pane_cp01_ParamLimits

0xf33f,	// (0x00029b6a) icf_edit_indi_pane_cp01

0xf498,	// (0x00029cc3) vtchi_query_pane

0xc50b,	// (0x00026d36) icf_edit_indi_pane_g1_ParamLimits

0xc50b,	// (0x00026d36) icf_edit_indi_pane_g1

0xf531,	// (0x00029d5c) icf_edit_indi_pane_g2_ParamLimits

0xf531,	// (0x00029d5c) icf_edit_indi_pane_g2

0x0001,

0xfeea,	// (0x0002a715) icf_edit_indi_pane_g_ParamLimits

0xfeea,	// (0x0002a715) icf_edit_indi_pane_g

0xf540,	// (0x00029d6b) icf_edit_indi_pane_t1

0xf4da,	// (0x00029d05) bg_input_focus_pane_cp042

0x876d,	// (0x00022f98) vtchi_button_pane

0xf4e3,	// (0x00029d0e) vtchi_query_pane_t1

0xf4f1,	// (0x00029d1c) vtchi_query_pane_t2

0xf4ff,	// (0x00029d2a) vtchi_query_pane_t3

0x0002,

0x0237,	// (0x0001aa62) vtchi_query_pane_t

0x7ef0,	// (0x0002271b) bg_button_pane_cp13

0xf50d,	// (0x00029d38) vtchi_button_pane_g1

0x7eb9,	// (0x000226e4) ituss_sks_pane_g1

0x7ec4,	// (0x000226ef) ituss_sks_pane_g2

0x0001,

0xfee5,	// (0x0002a710) ituss_sks_pane_g

0xf515,	// (0x00029d40) ituss_sks_pane_t1

0xf523,	// (0x00029d4e) ituss_sks_pane_t2

0x0001,

0x0243,	// (0x0001aa6e) ituss_sks_pane_t

0xbce7,	// (0x00026512) indicator_nsta_pane_cp_g1

0xbcf0,	// (0x0002651b) indicator_nsta_pane_cp_g2

0xbcf8,	// (0x00026523) indicator_nsta_pane_cp_g3

0xbd00,	// (0x0002652b) indicator_nsta_pane_cp_g4

0xbd08,	// (0x00026533) indicator_nsta_pane_cp_g5

0xbd08,	// (0x00026533) indicator_nsta_pane_cp_g6

0x0005,

0xfab6,	// (0x0002a2e1) indicator_nsta_pane_cp_g

0xe45a,	// (0x00028c85) cell_graphic2_pane_t2_ParamLimits

0xe45a,	// (0x00028c85) cell_graphic2_pane_t2

0x0001,

0xfdc3,	// (0x0002a5ee) cell_graphic2_pane_t_ParamLimits

0xfdc3,	// (0x0002a5ee) cell_graphic2_pane_t

0xe487,	// (0x00028cb2) cell_graphic2_control_pane_t1

0x8f50,	// (0x0002377b) signal_pane_g3_ParamLimits

0x8f50,	// (0x0002377b) signal_pane_g3

0x8f62,	// (0x0002378d) signal_pane_g4_ParamLimits

0x8f62,	// (0x0002378d) signal_pane_g4

0xf31a,	// (0x00029b45) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf31a,	// (0x00029b45) cell_ai5_widget_list_row_pane_t3

0xf432,	// (0x00029c5d) cell_ituss_key_pane_t1_ParamLimits

0xf432,	// (0x00029c5d) cell_ituss_key_pane_t1

0x9de4,	// (0x0002460f) form_field_data_wide_pane_vc_t2_ParamLimits

0x9de4,	// (0x0002460f) form_field_data_wide_pane_vc_t2

0x9df8,	// (0x00024623) form_field_data_wide_pane_vc_t3_ParamLimits

0x9df8,	// (0x00024623) form_field_data_wide_pane_vc_t3

0x0002,

0xf802,	// (0x0002a02d) form_field_data_wide_pane_vc_t_ParamLimits

0xf802,	// (0x0002a02d) form_field_data_wide_pane_vc_t

0xb9b3,	// (0x000261de) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb9b3,	// (0x000261de) form_field_slider_wide_pane_vc_t3

0xba8d,	// (0x000262b8) form_field_popup_wide_pane_vc_t2_ParamLimits

0xba8d,	// (0x000262b8) form_field_popup_wide_pane_vc_t2

0xbaa4,	// (0x000262cf) form_field_popup_wide_pane_vc_t3_ParamLimits

0xbaa4,	// (0x000262cf) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaa5,	// (0x0002a2d0) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaa5,	// (0x0002a2d0) form_field_popup_wide_pane_vc_t

0x7bc9,	// (0x000223f4) aid_fshwr2_btn_pane_ParamLimits

0x7bd5,	// (0x00022400) aid_fshwr2_syb_pane_ParamLimits

0x7be1,	// (0x0002240c) aid_fshwr2_txt_pane_ParamLimits

0x883e,	// (0x00023069) fshwr2_bg_pane_ParamLimits

0x7bed,	// (0x00022418) fshwr2_func_candi_pane_ParamLimits

0x7c02,	// (0x0002242d) fshwr2_hwr_syb_pane_ParamLimits

0x7c12,	// (0x0002243d) fshwr2_icf_pane_ParamLimits

0x573b,	// (0x0001ff66) list_double_graphic_pane_vc_g4_ParamLimits

0x573b,	// (0x0001ff66) list_double_graphic_pane_vc_g4

0x7df0,	// (0x0002261b) cell_ituss_key_pane_g3_ParamLimits

0x7df0,	// (0x0002261b) cell_ituss_key_pane_g3

0x7e98,	// (0x000226c3) cell_ituss_key_t5_ParamLimits

0x7e98,	// (0x000226c3) cell_ituss_key_t5
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
	};

} // end of namespace AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch_Small
