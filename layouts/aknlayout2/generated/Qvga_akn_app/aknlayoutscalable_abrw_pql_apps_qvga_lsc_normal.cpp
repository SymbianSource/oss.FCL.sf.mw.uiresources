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

// This customisation implements the interface defined in AknLayoutScalable_Apps.cdl

#include "aknlayoutscalable_abrw_pql_apps_qvga_lsc_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt[]; }

namespace AknLayoutScalable_Abrw_pql_apps_qvga_lsc_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt + 0x0002430a };

TAknWindowComponentLayout WindowLineVCR(TInt aVariety, TInt aCol, TInt aRow) { return AknLayoutScalableDecode::WindowLineVCR(&KImplData, aVariety, aCol, aRow); }
TAknLayoutScalableParameterLimits ParameterLimitsV(TInt aVariety) { return AknLayoutScalableDecode::ParameterLimitsV(&KImplData, aVariety); }
TAknTextComponentLayout TextLineVCR(TInt aVariety, TInt aCol, TInt aRow) { return AknLayoutScalableDecode::TextLineVCR(&KImplData, aVariety, aCol, aRow); }
TAknWindowComponentLayout WindowLineCRV(TInt aCol, TInt aRow, TInt aVariety) { return AknLayoutScalableDecode::WindowLineCRV(&KImplData, aCol, aRow, aVariety); }
TAknWindowComponentLayout WindowLineRVC(TInt aRow, TInt aVariety, TInt aCol) { return AknLayoutScalableDecode::WindowLineRVC(&KImplData, aRow, aVariety, aCol); }
TAknTextComponentLayout TextLineRVC(TInt aRow, TInt aVariety, TInt aCol) { return AknLayoutScalableDecode::TextLineRVC(&KImplData, aRow, aVariety, aCol); }
TAknTextComponentLayout TextLineVRC(TInt aVariety, TInt aRow, TInt aCol) { return AknLayoutScalableDecode::TextLineVRC(&KImplData, aVariety, aRow, aCol); }
TAknWindowComponentLayout WindowLineVRC(TInt aVariety, TInt aRow, TInt aCol) { return AknLayoutScalableDecode::WindowLineVRC(&KImplData, aVariety, aRow, aCol); }
TAknWindowComponentLayout WindowLineCVR(TInt aCol, TInt aVariety, TInt aRow) { return AknLayoutScalableDecode::WindowLineCVR(&KImplData, aCol, aVariety, aRow); }
TAknWindowComponentLayout WindowLineRCV(TInt aRow, TInt aCol, TInt aVariety) { return AknLayoutScalableDecode::WindowLineRCV(&KImplData, aRow, aCol, aVariety); }
TAknTextComponentLayout TextTableLVCR(TInt aLineIndex, TInt aVariety, TInt aCol, TInt aRow) { return AknLayoutScalableDecode::TextTableLVCR(&KImplData, aLineIndex, aVariety, aCol, aRow); }
TAknLayoutScalableTableLimits Limits() { return AknLayoutScalableDecode::TableLimits(KDataLookup); }
TAknLayoutScalableParameterLimits ParameterLimitsTableLV(TInt aLineIndex, TInt aVariety) { return AknLayoutScalableDecode::ParameterLimitsTableLV(&KImplData, aLineIndex, aVariety); }
TAknWindowComponentLayout WindowTableLVCR(TInt aLineIndex, TInt aVariety, TInt aCol, TInt aRow) { return AknLayoutScalableDecode::WindowTableLVCR(&KImplData, aLineIndex, aVariety, aCol, aRow); }
TAknTextComponentLayout TextTableLVRC(TInt aLineIndex, TInt aVariety, TInt aRow, TInt aCol) { return AknLayoutScalableDecode::TextTableLVRC(&KImplData, aLineIndex, aVariety, aRow, aCol); }
TAknLayoutScalableComponentType GetComponentTypeById(TInt aComponentId) { return AknLayoutScalableDecode::GetComponentTypeById(&KImplData, aComponentId); }
TAknLayoutScalableParameterLimits GetParamLimitsById(TInt aComponentId, TInt aVariety) { return AknLayoutScalableDecode::GetParamLimitsById(&KImplData, aComponentId, aVariety); }
TAknWindowComponentLayout GetWindowComponentById(TInt aComponentId, TInt aVariety, TInt aCol, TInt aRow) { return AknLayoutScalableDecode::GetWindowComponentById(&KImplData, aComponentId, aVariety, aCol, aRow); }
TAknTextComponentLayout GetTextComponentById(TInt aComponentId, TInt aVariety, TInt aCol, TInt aRow) { return AknLayoutScalableDecode::GetTextComponentById(&KImplData, aComponentId, aVariety, aCol, aRow); }

const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize] =
	{
0x2753,	// (0x00026a5d) Screen

0x275d,	// (0x00026a67) application_window

0x2771,	// (0x00026a7b) area_bottom_pane_ParamLimits

0x2771,	// (0x00026a7b) area_bottom_pane

0x147f,	// (0x00025789) area_top_pane_ParamLimits

0x147f,	// (0x00025789) area_top_pane

0xacd0,	// (0x0002efda) call_video_uplink_pane_ParamLimits

0xacd0,	// (0x0002efda) call_video_uplink_pane

0x14ff,	// (0x00025809) main_pane_ParamLimits

0x14ff,	// (0x00025809) main_pane

0xbf36,	// (0x00030240) context_pane

0x63e7,	// (0x0002a6f1) navi_pane

0x6410,	// (0x0002a71a) popup_cale_events_window_ParamLimits

0x6410,	// (0x0002a71a) popup_cale_events_window

0xbf49,	// (0x00030253) popup_mup_playback_window

0x6428,	// (0x0002a732) signal_pane

0x3063,	// (0x0002736d) main_browser_pane

0x3793,	// (0x00027a9d) main_burst_pane

0xacec,	// (0x0002eff6) main_calc_pane

0xbed0,	// (0x000301da) main_cale_day_pane

0x195d,	// (0x00025c67) main_cale_month_pane

0xbed0,	// (0x000301da) main_cale_week_pane

0x3793,	// (0x00027a9d) main_call_pane

0x2c15,	// (0x00026f1f) main_call_poc_pane

0x3793,	// (0x00027a9d) main_camera_pane

0x3793,	// (0x00027a9d) main_chi_dic_pane

0x5117,	// (0x00029421) main_clock_pane

0x2c15,	// (0x00026f1f) main_fmradio_pane

0x3793,	// (0x00027a9d) main_graph_messa_pane

0x2c15,	// (0x00026f1f) main_help_pane

0x3063,	// (0x0002736d) main_im_pane

0x2e70,	// (0x0002717a) main_image_pane_ParamLimits

0x2e70,	// (0x0002717a) main_image_pane

0x2c15,	// (0x00026f1f) main_location2_pane

0x3793,	// (0x00027a9d) main_location_pane

0x2e70,	// (0x0002717a) main_messa_pane

0x2c15,	// (0x00026f1f) main_mp2_pane

0x3793,	// (0x00027a9d) main_mp_pane

0x2c15,	// (0x00026f1f) main_msg_pane

0x2c15,	// (0x00026f1f) main_mup_eq_pane

0x2c15,	// (0x00026f1f) main_mup_pane

0x3063,	// (0x0002736d) main_notes_pane

0x2c15,	// (0x00026f1f) main_pec_pane

0x2c15,	// (0x00026f1f) main_phob_pane

0x2c15,	// (0x00026f1f) main_pinb_pane

0x2c15,	// (0x00026f1f) main_postcard_pane

0x2c15,	// (0x00026f1f) main_qdial_pane

0x3793,	// (0x00027a9d) main_skin_pane

0x2c15,	// (0x00026f1f) main_smil2_pane

0x3793,	// (0x00027a9d) main_smil_pane

0x3793,	// (0x00027a9d) main_video_pane

0x3793,	// (0x00027a9d) main_video_tele_pane

0x2e70,	// (0x0002717a) main_viewer_pane_ParamLimits

0x2e70,	// (0x0002717a) main_viewer_pane

0x3793,	// (0x00027a9d) main_vorec_pane

0x19ab,	// (0x00025cb5) popup_blid_sat_info_window_ParamLimits

0x19ab,	// (0x00025cb5) popup_blid_sat_info_window

0x1a01,	// (0x00025d0b) popup_dyc_status_message_window_ParamLimits

0x1a01,	// (0x00025d0b) popup_dyc_status_message_window

0x1a17,	// (0x00025d21) popup_grid_large_graphic_window_ParamLimits

0x1a17,	// (0x00025d21) popup_grid_large_graphic_window

0x1aad,	// (0x00025db7) popup_loc_request_window_ParamLimits

0x1aad,	// (0x00025db7) popup_loc_request_window

0x1b91,	// (0x00025e9b) popup_wml_address_window_ParamLimits

0x1b91,	// (0x00025e9b) popup_wml_address_window

0x6283,	// (0x0002a58d) call_muted_g1

0x5f63,	// (0x0002a26d) popup_call_audio_conf_window_ParamLimits

0x5f63,	// (0x0002a26d) popup_call_audio_conf_window

0x6293,	// (0x0002a59d) popup_call_audio_first_window_ParamLimits

0x6293,	// (0x0002a59d) popup_call_audio_first_window

0x62f1,	// (0x0002a5fb) popup_call_audio_in_window_ParamLimits

0x62f1,	// (0x0002a5fb) popup_call_audio_in_window

0x631d,	// (0x0002a627) popup_call_audio_out_window_ParamLimits

0x631d,	// (0x0002a627) popup_call_audio_out_window

0x634b,	// (0x0002a655) popup_call_audio_second_window_ParamLimits

0x634b,	// (0x0002a655) popup_call_audio_second_window

0x6391,	// (0x0002a69b) popup_call_audio_wait_window_ParamLimits

0x6391,	// (0x0002a69b) popup_call_audio_wait_window

0x63c4,	// (0x0002a6ce) popup_number_entry_window_ParamLimits

0x63c4,	// (0x0002a6ce) popup_number_entry_window

0x27ac,	// (0x00026ab6) bg_popup_call_pane_cp05_ParamLimits

0x27ac,	// (0x00026ab6) bg_popup_call_pane_cp05

0x27cc,	// (0x00026ad6) popup_number_entry_window_t1

0x27df,	// (0x00026ae9) popup_number_entry_window_t2

0x27f1,	// (0x00026afb) popup_number_entry_window_t3

0x0003,

0xf05f,	// (0x00033369) popup_number_entry_window_t

0x2837,	// (0x00026b41) text_title_cp2

0x284a,	// (0x00026b54) bg_popup_call_pane_cp_ParamLimits

0x284a,	// (0x00026b54) bg_popup_call_pane_cp

0x2858,	// (0x00026b62) call_thumbnail_pane

0x2860,	// (0x00026b6a) popup_call_audio_in_window_g1_ParamLimits

0x2860,	// (0x00026b6a) popup_call_audio_in_window_g1

0x286c,	// (0x00026b76) popup_call_audio_in_window_g2_ParamLimits

0x286c,	// (0x00026b76) popup_call_audio_in_window_g2

0x2878,	// (0x00026b82) popup_call_audio_in_window_g3_ParamLimits

0x2878,	// (0x00026b82) popup_call_audio_in_window_g3

0x0002,

0xf068,	// (0x00033372) popup_call_audio_in_window_g_ParamLimits

0xf068,	// (0x00033372) popup_call_audio_in_window_g

0x2884,	// (0x00026b8e) popup_call_audio_in_window_t1_ParamLimits

0x2884,	// (0x00026b8e) popup_call_audio_in_window_t1

0x289f,	// (0x00026ba9) popup_call_audio_in_window_t2_ParamLimits

0x289f,	// (0x00026ba9) popup_call_audio_in_window_t2

0x28ba,	// (0x00026bc4) popup_call_audio_in_window_t3_ParamLimits

0x28ba,	// (0x00026bc4) popup_call_audio_in_window_t3

0x0002,

0xf06f,	// (0x00033379) popup_call_audio_in_window_t_ParamLimits

0xf06f,	// (0x00033379) popup_call_audio_in_window_t

0x284a,	// (0x00026b54) bg_popup_call_pane_cp01_ParamLimits

0x284a,	// (0x00026b54) bg_popup_call_pane_cp01

0x2858,	// (0x00026b62) call_thumbnail_pane_cp02

0x28cd,	// (0x00026bd7) call_type_pane_cp022

0x28d5,	// (0x00026bdf) popup_call_audio_out_window_g1_ParamLimits

0x28d5,	// (0x00026bdf) popup_call_audio_out_window_g1

0x28e7,	// (0x00026bf1) popup_call_audio_out_window_g2_ParamLimits

0x28e7,	// (0x00026bf1) popup_call_audio_out_window_g2

0x28f3,	// (0x00026bfd) popup_call_audio_out_window_g3_ParamLimits

0x28f3,	// (0x00026bfd) popup_call_audio_out_window_g3

0x0002,

0xf076,	// (0x00033380) popup_call_audio_out_window_g_ParamLimits

0xf076,	// (0x00033380) popup_call_audio_out_window_g

0x2905,	// (0x00026c0f) popup_call_audio_out_window_t1_ParamLimits

0x2905,	// (0x00026c0f) popup_call_audio_out_window_t1

0x291d,	// (0x00026c27) popup_call_audio_out_window_t2_ParamLimits

0x291d,	// (0x00026c27) popup_call_audio_out_window_t2

0x0001,

0xf07d,	// (0x00033387) popup_call_audio_out_window_t_ParamLimits

0xf07d,	// (0x00033387) popup_call_audio_out_window_t

0x2932,	// (0x00026c3c) bg_popup_call_pane_ParamLimits

0x2932,	// (0x00026c3c) bg_popup_call_pane

0x29b6,	// (0x00026cc0) call_thumbnail_pane_cp_ParamLimits

0x29b6,	// (0x00026cc0) call_thumbnail_pane_cp

0x29da,	// (0x00026ce4) call_type_pane_cp01_ParamLimits

0x29da,	// (0x00026ce4) call_type_pane_cp01

0x2a1e,	// (0x00026d28) popup_call_audio_first_window_g1_ParamLimits

0x2a1e,	// (0x00026d28) popup_call_audio_first_window_g1

0x2a6a,	// (0x00026d74) popup_call_audio_first_window_g2_ParamLimits

0x2a6a,	// (0x00026d74) popup_call_audio_first_window_g2

0x0001,

0xf082,	// (0x0003338c) popup_call_audio_first_window_g_ParamLimits

0xf082,	// (0x0003338c) popup_call_audio_first_window_g

0x2aae,	// (0x00026db8) popup_call_audio_first_window_t1_ParamLimits

0x2aae,	// (0x00026db8) popup_call_audio_first_window_t1

0x2b5a,	// (0x00026e64) popup_call_audio_first_window_t4_ParamLimits

0x2b5a,	// (0x00026e64) popup_call_audio_first_window_t4

0x2be6,	// (0x00026ef0) popup_call_audio_first_window_t5_ParamLimits

0x2be6,	// (0x00026ef0) popup_call_audio_first_window_t5

0x0002,

0xf087,	// (0x00033391) popup_call_audio_first_window_t_ParamLimits

0xf087,	// (0x00033391) popup_call_audio_first_window_t

0x2c15,	// (0x00026f1f) bg_popup_call_pane_cp02

0x2c1f,	// (0x00026f29) call_type_pane_cp023

0x2c27,	// (0x00026f31) popup_call_audio_wait_window_g1

0x2c2f,	// (0x00026f39) popup_call_audio_wait_window_g2

0x0001,

0xf08e,	// (0x00033398) popup_call_audio_wait_window_g

0x2c37,	// (0x00026f41) popup_call_audio_wait_window_t3

0x2c45,	// (0x00026f4f) bg_popup_call_pane_cp03_ParamLimits

0x2c45,	// (0x00026f4f) bg_popup_call_pane_cp03

0x2ca5,	// (0x00026faf) call_thumbnail_pane_cp011_ParamLimits

0x2ca5,	// (0x00026faf) call_thumbnail_pane_cp011

0x2cb1,	// (0x00026fbb) call_type_pane_cp034_ParamLimits

0x2cb1,	// (0x00026fbb) call_type_pane_cp034

0x2ced,	// (0x00026ff7) popup_call_audio_second_window_g1_ParamLimits

0x2ced,	// (0x00026ff7) popup_call_audio_second_window_g1

0x2d29,	// (0x00027033) popup_call_audio_second_window_g2_ParamLimits

0x2d29,	// (0x00027033) popup_call_audio_second_window_g2

0x0001,

0xf093,	// (0x0003339d) popup_call_audio_second_window_g_ParamLimits

0xf093,	// (0x0003339d) popup_call_audio_second_window_g

0x2d65,	// (0x0002706f) popup_call_audio_second_window_t1_ParamLimits

0x2d65,	// (0x0002706f) popup_call_audio_second_window_t1

0x2de6,	// (0x000270f0) popup_call_audio_second_window_t2_ParamLimits

0x2de6,	// (0x000270f0) popup_call_audio_second_window_t2

0x2e1c,	// (0x00027126) popup_call_audio_second_window_t3_ParamLimits

0x2e1c,	// (0x00027126) popup_call_audio_second_window_t3

0x0002,

0xf098,	// (0x000333a2) popup_call_audio_second_window_t_ParamLimits

0xf098,	// (0x000333a2) popup_call_audio_second_window_t

0x2c15,	// (0x00026f1f) bg_popup_call_pane_cp04

0x2e52,	// (0x0002715c) list_conf_pane

0x2e5a,	// (0x00027164) popup_call_audio_conf_window_t1

0x2e68,	// (0x00027172) call_thumbnail_pane_g1

0x2e70,	// (0x0002717a) bg_pinb_pane_ParamLimits

0x2e70,	// (0x0002717a) bg_pinb_pane

0x2e7e,	// (0x00027188) find_pinb_pane

0x2e70,	// (0x0002717a) listscroll_pinb_pane_ParamLimits

0x2e70,	// (0x0002717a) listscroll_pinb_pane

0x2e88,	// (0x00027192) pinb_bg_pane_g1

0x2e88,	// (0x00027192) pinb_bg_pane_g2

0x2e88,	// (0x00027192) pinb_bg_pane_g3

0x2e88,	// (0x00027192) pinb_bg_pane_g4

0x2e88,	// (0x00027192) pinb_bg_pane_g5

0x2e88,	// (0x00027192) pinb_bg_pane_g6

0x2e88,	// (0x00027192) pinb_bg_pane_g7

0x2e88,	// (0x00027192) pinb_bg_pane_g8

0x2e88,	// (0x00027192) pinb_bg_pane_g9

0x2e88,	// (0x00027192) pinb_bg_pane_g10

0x0009,

0xf09f,	// (0x000333a9) pinb_bg_pane_g

0x2e9d,	// (0x000271a7) grid_pinb_pane

0x2767,	// (0x00026a71) list_pinb_pane

0x2ea7,	// (0x000271b1) scroll_pane_cp01_ParamLimits

0x2ea7,	// (0x000271b1) scroll_pane_cp01

0x2eb4,	// (0x000271be) find_pinb_pane_g1_ParamLimits

0x2eb4,	// (0x000271be) find_pinb_pane_g1

0x2ecc,	// (0x000271d6) find_pinb_pane_t1

0x2ede,	// (0x000271e8) find_pinb_pane_t2

0x0001,

0xf0b9,	// (0x000333c3) find_pinb_pane_t

0x2ef3,	// (0x000271fd) input_focus_pane_cp01_ParamLimits

0x2ef3,	// (0x000271fd) input_focus_pane_cp01

0x2eff,	// (0x00027209) cell_pinb_pane_ParamLimits

0x2eff,	// (0x00027209) cell_pinb_pane

0x2f15,	// (0x0002721f) cell_pinb_pane_g1_ParamLimits

0x2f15,	// (0x0002721f) cell_pinb_pane_g1

0x2f23,	// (0x0002722d) cell_pinb_pane_g2_ParamLimits

0x2f23,	// (0x0002722d) cell_pinb_pane_g2

0x2f23,	// (0x0002722d) cell_pinb_pane_g3_ParamLimits

0x2f23,	// (0x0002722d) cell_pinb_pane_g3

0x0002,

0xf0be,	// (0x000333c8) cell_pinb_pane_g_ParamLimits

0xf0be,	// (0x000333c8) cell_pinb_pane_g

0x2c15,	// (0x00026f1f) grid_highlight_pane_cp01

0x2f31,	// (0x0002723b) list_pinb_item_pane_ParamLimits

0x2f31,	// (0x0002723b) list_pinb_item_pane

0x2767,	// (0x00026a71) list_highlight_pane_cp02

0x2f3f,	// (0x00027249) list_pinb_item_pane_g1_ParamLimits

0x2f3f,	// (0x00027249) list_pinb_item_pane_g1

0x2f23,	// (0x0002722d) list_pinb_item_pane_g2_ParamLimits

0x2f23,	// (0x0002722d) list_pinb_item_pane_g2

0x2f15,	// (0x0002721f) list_pinb_item_pane_g3_ParamLimits

0x2f15,	// (0x0002721f) list_pinb_item_pane_g3

0x2f23,	// (0x0002722d) list_pinb_item_pane_g4_ParamLimits

0x2f23,	// (0x0002722d) list_pinb_item_pane_g4

0x0003,

0xf0c5,	// (0x000333cf) list_pinb_item_pane_g_ParamLimits

0xf0c5,	// (0x000333cf) list_pinb_item_pane_g

0x2f4d,	// (0x00027257) list_pinb_item_pane_t1_ParamLimits

0x2f4d,	// (0x00027257) list_pinb_item_pane_t1

0x1669,	// (0x00025973) calc_display_pane

0x1685,	// (0x0002598f) calc_paper_pane

0x16a6,	// (0x000259b0) grid_calc_pane

0x2c15,	// (0x00026f1f) bg_list_pane_cp01

0x2f61,	// (0x0002726b) clock_g1

0x2f69,	// (0x00027273) clock_g2

0x0001,

0xf0ce,	// (0x000333d8) clock_g

0x2f71,	// (0x0002727b) clock_t1_ParamLimits

0x2f71,	// (0x0002727b) clock_t1

0x2f86,	// (0x00027290) clock_t2_ParamLimits

0x2f86,	// (0x00027290) clock_t2

0x2f98,	// (0x000272a2) clock_t3_ParamLimits

0x2f98,	// (0x000272a2) clock_t3

0x2faa,	// (0x000272b4) clock_t4_ParamLimits

0x2faa,	// (0x000272b4) clock_t4

0x2fbc,	// (0x000272c6) clock_t5_ParamLimits

0x2fbc,	// (0x000272c6) clock_t5

0x2fd1,	// (0x000272db) clock_t6_ParamLimits

0x2fd1,	// (0x000272db) clock_t6

0x2fe3,	// (0x000272ed) clock_t7_ParamLimits

0x2fe3,	// (0x000272ed) clock_t7

0x2ff5,	// (0x000272ff) clock_t8_ParamLimits

0x2ff5,	// (0x000272ff) clock_t8

0x3007,	// (0x00027311) clock_t9_ParamLimits

0x3007,	// (0x00027311) clock_t9

0x0008,

0xf0d3,	// (0x000333dd) clock_t_ParamLimits

0xf0d3,	// (0x000333dd) clock_t

0x3019,	// (0x00027323) popup_clock_analogue_window_cp02

0x3019,	// (0x00027323) popup_clock_digital_window_cp01

0x2c15,	// (0x00026f1f) listscroll_help_pane

0x2c15,	// (0x00026f1f) phob_pre_status_pane

0x3021,	// (0x0002732b) grid_qdial_pane

0x2e70,	// (0x0002717a) listscroll_mce_pane

0x2e70,	// (0x0002717a) bg_notes_pane

0x302b,	// (0x00027335) list_notes_pane

0x3039,	// (0x00027343) scroll_pane_cp06

0x304b,	// (0x00027355) bg_calc_paper_pane

0xad0c,	// (0x0002f016) list_calc_pane

0x3063,	// (0x0002736d) bg_calc_display_pane

0xad26,	// (0x0002f030) calc_display_pane_t1

0xad3b,	// (0x0002f045) calc_display_pane_t2

0xad50,	// (0x0002f05a) calc_display_pane_t3

0x0002,

0xf0e6,	// (0x000333f0) calc_display_pane_t

0x16c2,	// (0x000259cc) cell_calc_pane_ParamLimits

0x16c2,	// (0x000259cc) cell_calc_pane

0x306f,	// (0x00027379) bg_calc_paper_pane_g1

0x307b,	// (0x00027385) bg_calc_paper_pane_g2

0x3087,	// (0x00027391) bg_calc_paper_pane_g3

0x3093,	// (0x0002739d) bg_calc_paper_pane_g4

0x309f,	// (0x000273a9) bg_calc_paper_pane_g5

0x30ab,	// (0x000273b5) bg_calc_paper_pane_g6

0x30ba,	// (0x000273c4) bg_calc_paper_pane_g7

0x30c9,	// (0x000273d3) bg_calc_paper_pane_g8

0x0007,

0xf0ed,	// (0x000333f7) bg_calc_paper_pane_g

0x30d8,	// (0x000273e2) calc_bg_paper_pane_g9

0x30e7,	// (0x000273f1) list_calc_item_pane_ParamLimits

0x30e7,	// (0x000273f1) list_calc_item_pane

0x30fb,	// (0x00027405) list_calc_item_pane_g1

0xad62,	// (0x0002f06c) list_calc_item_pane_t1_ParamLimits

0xad62,	// (0x0002f06c) list_calc_item_pane_t1

0x16f5,	// (0x000259ff) list_calc_item_pane_t2_ParamLimits

0x16f5,	// (0x000259ff) list_calc_item_pane_t2

0x0001,

0xf0fe,	// (0x00033408) list_calc_item_pane_t_ParamLimits

0xf0fe,	// (0x00033408) list_calc_item_pane_t

0x2e88,	// (0x00027192) cell_calc_pane_g1

0x3108,	// (0x00027412) grid_highlight_pane_cp02

0x312a,	// (0x00027434) bg_calc_display_pane_g1

0xad74,	// (0x0002f07e) bg_calc_display_pane_g2

0x3133,	// (0x0002743d) bg_calc_display_pane_g3

0x0002,

0xf108,	// (0x00033412) bg_calc_display_pane_g

0x1723,	// (0x00025a2d) cell_qdial_pane_ParamLimits

0x1723,	// (0x00025a2d) cell_qdial_pane

0x313c,	// (0x00027446) cell_qdial_pane_g1_ParamLimits

0x313c,	// (0x00027446) cell_qdial_pane_g1

0x3152,	// (0x0002745c) cell_qdial_pane_g2_ParamLimits

0x3152,	// (0x0002745c) cell_qdial_pane_g2

0x3163,	// (0x0002746d) cell_qdial_pane_g3_ParamLimits

0x3163,	// (0x0002746d) cell_qdial_pane_g3

0x0003,

0xf10f,	// (0x00033419) cell_qdial_pane_g_ParamLimits

0xf10f,	// (0x00033419) cell_qdial_pane_g

0x3185,	// (0x0002748f) cell_qdial_pane_t1_ParamLimits

0x3185,	// (0x0002748f) cell_qdial_pane_t1

0x319d,	// (0x000274a7) cell_qdial_pane_t2_ParamLimits

0x319d,	// (0x000274a7) cell_qdial_pane_t2

0x31b0,	// (0x000274ba) cell_qdial_pane_t3_ParamLimits

0x31b0,	// (0x000274ba) cell_qdial_pane_t3

0x0002,

0xf118,	// (0x00033422) cell_qdial_pane_t_ParamLimits

0xf118,	// (0x00033422) cell_qdial_pane_t

0x2c15,	// (0x00026f1f) grid_highlight_pane_cp04

0x31c3,	// (0x000274cd) thumbnail_qdial_pane_ParamLimits

0x31c3,	// (0x000274cd) thumbnail_qdial_pane

0x321f,	// (0x00027529) list_help_pane

0x3229,	// (0x00027533) scroll_pane_cp02

0x3232,	// (0x0002753c) help_list_pane_t1_ParamLimits

0x3232,	// (0x0002753c) help_list_pane_t1

0xad7e,	// (0x0002f088) bg_notes_pane_g2

0xad86,	// (0x0002f090) bg_notes_pane_g3

0xad8e,	// (0x0002f098) notes_bg_pane_g1

0xad96,	// (0x0002f0a0) notes_bg_pane_g4

0xad9e,	// (0x0002f0a8) notes_bg_pane_g5

0xada6,	// (0x0002f0b0) notes_bg_pane_g6

0xadae,	// (0x0002f0b8) notes_bg_pane_g7

0xadb6,	// (0x0002f0c0) notes_bg_pane_g8

0xadbe,	// (0x0002f0c8) notes_bg_pane_g9

0x0006,

0xf136,	// (0x00033440) notes_bg_pane_g

0x324f,	// (0x00027559) list_notes_text_pane_ParamLimits

0x324f,	// (0x00027559) list_notes_text_pane

0x3272,	// (0x0002757c) list_notes_text_pane_g1

0x327b,	// (0x00027585) list_notes_text_pane_t1

0x329a,	// (0x000275a4) listscroll_cale_week_pane

0x32cd,	// (0x000275d7) bg_cale_heading_pane

0x32e5,	// (0x000275ef) bg_cale_pane_cp01

0x3302,	// (0x0002760c) cale_week_corner_pane

0x3321,	// (0x0002762b) cale_week_day_heading_pane

0x333e,	// (0x00027648) cale_week_scroll_pane_g1

0x3351,	// (0x0002765b) cale_week_scroll_pane_g2

0x3369,	// (0x00027673) cale_week_scroll_pane_g3

0x3381,	// (0x0002768b) cale_week_scroll_pane_g4

0x3399,	// (0x000276a3) cale_week_scroll_pane_g5

0x33b1,	// (0x000276bb) cale_week_scroll_pane_g6

0x33c9,	// (0x000276d3) cale_week_scroll_pane_g7

0x33e1,	// (0x000276eb) cale_week_scroll_pane_g8

0x33fd,	// (0x00027707) cale_week_scroll_pane_g9

0x3415,	// (0x0002771f) cale_week_scroll_pane_g10

0x342d,	// (0x00027737) cale_week_scroll_pane_g11

0x3445,	// (0x0002774f) cale_week_scroll_pane_g12

0x345d,	// (0x00027767) cale_week_scroll_pane_g13

0x3475,	// (0x0002777f) cale_week_scroll_pane_g14

0x348d,	// (0x00027797) cale_week_scroll_pane_g15

0x000f,

0xf145,	// (0x0003344f) cale_week_scroll_pane_g

0x34c1,	// (0x000277cb) cale_week_time_pane

0x34dd,	// (0x000277e7) grid_cale_week_pane

0x350d,	// (0x00027817) scroll_pane_cp08

0x352a,	// (0x00027834) cell_cale_week_pane_ParamLimits

0x352a,	// (0x00027834) cell_cale_week_pane

0x35a0,	// (0x000278aa) cale_week_day_heading_pane_t1

0x35ca,	// (0x000278d4) cale_week_day_heading_pane_t2

0x35f9,	// (0x00027903) cale_week_day_heading_pane_t3

0x3628,	// (0x00027932) cale_week_day_heading_pane_t4

0x3657,	// (0x00027961) cale_week_day_heading_pane_t5

0x3686,	// (0x00027990) cale_week_day_heading_pane_t6

0x36b5,	// (0x000279bf) cale_week_day_heading_pane_t7

0x0006,

0xf166,	// (0x00033470) cale_week_day_heading_pane_t

0x36df,	// (0x000279e9) bg_cale_side_pane

0x1735,	// (0x00025a3f) cale_week_time_pane_t1

0x176f,	// (0x00025a79) cale_week_time_pane_t2

0x17a9,	// (0x00025ab3) cale_week_time_pane_t3

0x17e3,	// (0x00025aed) cale_week_time_pane_t4

0x181d,	// (0x00025b27) cale_week_time_pane_t5

0x1857,	// (0x00025b61) cale_week_time_pane_t6

0x1891,	// (0x00025b9b) cale_week_time_pane_t7

0x18cb,	// (0x00025bd5) cale_week_time_pane_t8

0x0007,

0xf175,	// (0x0003347f) cale_week_time_pane_t

0x36ed,	// (0x000279f7) cell_cale_week_pane_g2

0x370c,	// (0x00027a16) cell_cale_week_pane_g3_ParamLimits

0x370c,	// (0x00027a16) cell_cale_week_pane_g3

0x3724,	// (0x00027a2e) grid_highlight_pane_cp07

0x372c,	// (0x00027a36) listscroll_gms_pane

0x3736,	// (0x00027a40) grid_gms_pane

0x373f,	// (0x00027a49) listscroll_gms_pane_g1

0x3747,	// (0x00027a51) listscroll_gms_pane_g2

0x0001,

0xf186,	// (0x00033490) listscroll_gms_pane_g

0x374f,	// (0x00027a59) scroll_pane_cp010

0x375a,	// (0x00027a64) cell_gms_pane_ParamLimits

0x375a,	// (0x00027a64) cell_gms_pane

0x376a,	// (0x00027a74) cell_gms_pane_g1

0x3772,	// (0x00027a7c) cell_gms_pane_g2

0x3272,	// (0x0002757c) cell_gms_pane_g3

0x377a,	// (0x00027a84) cell_gms_pane_g4

0x0003,

0xf18b,	// (0x00033495) cell_gms_pane_g

0x3783,	// (0x00027a8d) grid_highlight_pane_cp09

0x6211,	// (0x0002a51b) phob_pre_status_pane_g1

0x6219,	// (0x0002a523) phob_pre_status_pane_g2

0x6221,	// (0x0002a52b) phob_pre_status_pane_g3

0x6229,	// (0x0002a533) phob_pre_status_pane_g4

0x0004,

0xf579,	// (0x00033883) phob_pre_status_pane_g

0x6239,	// (0x0002a543) phob_pre_status_pane_t1

0x6247,	// (0x0002a551) phob_pre_status_pane_t2

0x6255,	// (0x0002a55f) phob_pre_status_pane_t3

0x0002,

0xf584,	// (0x0003388e) phob_pre_status_pane_t

0x3793,	// (0x00027a9d) bg_list_pane_cp05

0x379b,	// (0x00027aa5) grid_vorec_pane

0x37a3,	// (0x00027aad) vorec_t1

0x37b1,	// (0x00027abb) vorec_t2

0x37bf,	// (0x00027ac9) vorec_t3

0x37cd,	// (0x00027ad7) vorec_t4

0x272f,	// (0x00026a39) vorec_t5

0x273d,	// (0x00026a47) vorec_t6

0x0004,

0xf194,	// (0x0003349e) vorec_t

0x274b,	// (0x00026a55) wait_bar_pane_cp01

0x37e9,	// (0x00027af3) cell_vorec_pane_ParamLimits

0x37e9,	// (0x00027af3) cell_vorec_pane

0xadc6,	// (0x0002f0d0) cell_vorec_pane_g1

0x2c15,	// (0x00026f1f) grid_highlight_pane_cp05

0x37fc,	// (0x00027b06) cams_zoom_pane

0x37fc,	// (0x00027b06) image_vga_pane

0x2f15,	// (0x0002721f) main_camera_pane_g1

0x2f15,	// (0x0002721f) main_camera_pane_g2

0x2f15,	// (0x0002721f) main_camera_pane_g3

0x2f15,	// (0x0002721f) main_camera_pane_g4

0x2f15,	// (0x0002721f) main_camera_pane_g5

0x2f15,	// (0x0002721f) main_camera_pane_g6

0x2f15,	// (0x0002721f) main_camera_pane_g7

0x0007,

0xf19f,	// (0x000334a9) main_camera_pane_g

0x380a,	// (0x00027b14) main_camera_pane_t1

0x380a,	// (0x00027b14) main_camera_pane_t2

0x0001,

0xf1b0,	// (0x000334ba) main_camera_pane_t

0x3832,	// (0x00027b3c) cams_zoom_pane_cp_ParamLimits

0x3832,	// (0x00027b3c) cams_zoom_pane_cp

0x3866,	// (0x00027b70) image_cif_pane_ParamLimits

0x3866,	// (0x00027b70) image_cif_pane

0x2767,	// (0x00026a71) image_subqcif_pane

0x3878,	// (0x00027b82) main_video_pane_g1_ParamLimits

0x3878,	// (0x00027b82) main_video_pane_g1

0x38a6,	// (0x00027bb0) main_video_pane_g2_ParamLimits

0x38a6,	// (0x00027bb0) main_video_pane_g2

0x38e0,	// (0x00027bea) main_video_pane_g3_ParamLimits

0x38e0,	// (0x00027bea) main_video_pane_g3

0x38e0,	// (0x00027bea) main_video_pane_g4_ParamLimits

0x38e0,	// (0x00027bea) main_video_pane_g4

0x3914,	// (0x00027c1e) main_video_pane_g5_ParamLimits

0x3914,	// (0x00027c1e) main_video_pane_g5

0x3922,	// (0x00027c2c) main_video_pane_g6_ParamLimits

0x3922,	// (0x00027c2c) main_video_pane_g6

0x0006,

0xf1b5,	// (0x000334bf) main_video_pane_g_ParamLimits

0xf1b5,	// (0x000334bf) main_video_pane_g

0x394a,	// (0x00027c54) main_video_pane_t1_ParamLimits

0x394a,	// (0x00027c54) main_video_pane_t1

0x398e,	// (0x00027c98) cams_zoom_pane_g1

0x398e,	// (0x00027c98) cams_zoom_pane_g2

0x398e,	// (0x00027c98) cams_zoom_pane_g3

0x398e,	// (0x00027c98) cams_zoom_pane_g4

0x0003,

0xf1c4,	// (0x000334ce) cams_zoom_pane_g

0x39ac,	// (0x00027cb6) grid_cams_pane

0x39c1,	// (0x00027ccb) linegrid_cams_pane

0x39d2,	// (0x00027cdc) cell_cams_pane_ParamLimits

0x39d2,	// (0x00027cdc) cell_cams_pane

0x39f0,	// (0x00027cfa) cams_burst_image_pane

0x39f8,	// (0x00027d02) cell_cams_pane_g1

0x2c15,	// (0x00026f1f) grid_highlight_pane_cp03

0x2e88,	// (0x00027192) mp_bg_pane_g1

0x2767,	// (0x00026a71) bg_list_pane_cp03

0x2767,	// (0x00026a71) bg_mp_pane

0x2767,	// (0x00026a71) grid_mp_pane

0x398e,	// (0x00027c98) media_player_g1

0xbe78,	// (0x00030182) media_player_t1

0xbe78,	// (0x00030182) media_player_t2

0xbe78,	// (0x00030182) media_player_t3

0xbe78,	// (0x00030182) media_player_t4

0xbe78,	// (0x00030182) media_player_t5

0xbe78,	// (0x00030182) media_player_t6

0xbe78,	// (0x00030182) media_player_t7

0x0006,

0xf563,	// (0x0003386d) media_player_t

0x2767,	// (0x00026a71) wait_bar_pane_cp02

0xf548,	// (0x00033852) main_usb_pane_t

0x5117,	// (0x00029421) cell_mp_pane

0x2e88,	// (0x00027192) cell_mp_pane_g1

0x2c15,	// (0x00026f1f) grid_highlight_pane_cp06

0x3a3e,	// (0x00027d48) grid_skin_colour_pane

0x3a46,	// (0x00027d50) list_highlight_pane_cp03

0x3a4e,	// (0x00027d58) skin_g1

0x3a56,	// (0x00027d60) skin_t1

0x3a65,	// (0x00027d6f) skin_t2

0x0001,

0xf1f2,	// (0x000334fc) skin_t

0x3a73,	// (0x00027d7d) cell_skin_colour_pane_ParamLimits

0x3a73,	// (0x00027d7d) cell_skin_colour_pane

0x3a8d,	// (0x00027d97) cell_skin_colour_pane_g1

0x3aee,	// (0x00027df8) call_video_g1_ParamLimits

0x3aee,	// (0x00027df8) call_video_g1

0x3b04,	// (0x00027e0e) call_video_g2_ParamLimits

0x3b04,	// (0x00027e0e) call_video_g2

0x0001,

0xf1f7,	// (0x00033501) call_video_g_ParamLimits

0xf1f7,	// (0x00033501) call_video_g

0x3b4c,	// (0x00027e56) call_video_uplink_pane_cp1_ParamLimits

0x3b4c,	// (0x00027e56) call_video_uplink_pane_cp1

0x3bb1,	// (0x00027ebb) call_video_uplink_pane_cp2

0x3be9,	// (0x00027ef3) video_down_crop_pane_ParamLimits

0x3be9,	// (0x00027ef3) video_down_crop_pane

0x3cac,	// (0x00027fb6) video_down_pane_ParamLimits

0x3cac,	// (0x00027fb6) video_down_pane

0x3d56,	// (0x00028060) video_down_subqcif_pane_ParamLimits

0x3d56,	// (0x00028060) video_down_subqcif_pane

0x3d6e,	// (0x00028078) video_down_subqcif_pane_cp_ParamLimits

0x3d6e,	// (0x00028078) video_down_subqcif_pane_cp

0x3da5,	// (0x000280af) im_reading_pane_ParamLimits

0x3da5,	// (0x000280af) im_reading_pane

0x3db7,	// (0x000280c1) im_writing_pane_ParamLimits

0x3db7,	// (0x000280c1) im_writing_pane

0x3dd5,	// (0x000280df) im_reading_pane_t1

0x3e0b,	// (0x00028115) list_im_pane

0x3e1c,	// (0x00028126) scroll_pane_cp07

0x3e35,	// (0x0002813f) im_writing_pane_t1_ParamLimits

0x3e35,	// (0x0002813f) im_writing_pane_t1

0x3e4a,	// (0x00028154) im_writing_pane_t2_ParamLimits

0x3e4a,	// (0x00028154) im_writing_pane_t2

0x0001,

0xf201,	// (0x0003350b) im_writing_pane_t_ParamLimits

0xf201,	// (0x0003350b) im_writing_pane_t

0x2c15,	// (0x00026f1f) input_focus_pane_cp04

0x2c15,	// (0x00026f1f) input_focus_pane_cp05

0x3e67,	// (0x00028171) list_im_single_pane_ParamLimits

0x3e67,	// (0x00028171) list_im_single_pane

0x3e7d,	// (0x00028187) list_single_im_pane_t1

0x3793,	// (0x00027a9d) blid_accuracy_pane

0x3793,	// (0x00027a9d) blid_compass_pane

0xbe88,	// (0x00030192) main_location_t1

0xbe88,	// (0x00030192) main_location_t2

0xbe88,	// (0x00030192) main_location_t3

0x0002,

0xf572,	// (0x0003387c) main_location_t

0x2c15,	// (0x00026f1f) aid_levels_location

0x2e88,	// (0x00027192) blid_accuracy_pane_g1

0x2e88,	// (0x00027192) blid_accuracy_pane_g2

0x0001,

0xf255,	// (0x0003355f) blid_accuracy_pane_g

0x3eb7,	// (0x000281c1) wml_content_pane

0x3ef5,	// (0x000281ff) wml_button_pane_ParamLimits

0x3ef5,	// (0x000281ff) wml_button_pane

0x3f09,	// (0x00028213) wml_list_single_large_pane_ParamLimits

0x3f09,	// (0x00028213) wml_list_single_large_pane

0x3f1d,	// (0x00028227) wml_list_single_medium_pane_ParamLimits

0x3f1d,	// (0x00028227) wml_list_single_medium_pane

0x3f32,	// (0x0002823c) wml_list_single_small_pane_ParamLimits

0x3f32,	// (0x0002823c) wml_list_single_small_pane

0x3f49,	// (0x00028253) wml_selection_box_pane_ParamLimits

0x3f49,	// (0x00028253) wml_selection_box_pane

0x3f5c,	// (0x00028266) wml_list_single_pane_t1

0x3f6b,	// (0x00028275) wml_list_single_medium_pane_t1

0x3f7a,	// (0x00028284) wml_list_single_large_pane_t1

0x3f89,	// (0x00028293) input_focus_pane_cp02_ParamLimits

0x3f89,	// (0x00028293) input_focus_pane_cp02

0x3f9c,	// (0x000282a6) wml_selection_box_pane_g1

0x3fa5,	// (0x000282af) wml_selection_box_pane_t1_ParamLimits

0x3fa5,	// (0x000282af) wml_selection_box_pane_t1

0x2e70,	// (0x0002717a) bg_wml_button_pane_ParamLimits

0x2e70,	// (0x0002717a) bg_wml_button_pane

0x3fbd,	// (0x000282c7) wml_button_pane_g1

0x3fc5,	// (0x000282cf) wml_button_pane_t1

0x3fbd,	// (0x000282c7) wml_button_bg_pane_g1

0x3fd5,	// (0x000282df) wml_button_bg_pane_g2

0x3fdd,	// (0x000282e7) wml_button_bg_pane_g3

0x3fe5,	// (0x000282ef) wml_button_bg_pane_g4

0x3fed,	// (0x000282f7) wml_button_bg_pane_g5

0x3ff5,	// (0x000282ff) wml_button_bg_pane_g6

0x3ffd,	// (0x00028307) wml_button_bg_pane_g7

0x4005,	// (0x0002830f) wml_button_bg_pane_g8

0x400d,	// (0x00028317) wml_button_bg_pane_g9

0x0008,

0xf206,	// (0x00033510) wml_button_bg_pane_g

0x4015,	// (0x0002831f) bg_list_pane_cp02

0x401e,	// (0x00028328) mce_header_pane_ParamLimits

0x401e,	// (0x00028328) mce_header_pane

0x4032,	// (0x0002833c) mce_icon_pane

0x4032,	// (0x0002833c) mce_image_pane

0x403b,	// (0x00028345) mce_text_pane_ParamLimits

0x403b,	// (0x00028345) mce_text_pane

0x404f,	// (0x00028359) scroll_pane_cp03

0x404f,	// (0x00028359) scroll_pane_cp04

0x4059,	// (0x00028363) scroll_pane_cp05_ParamLimits

0x4059,	// (0x00028363) scroll_pane_cp05

0x4065,	// (0x0002836f) mce_header_field_pane_ParamLimits

0x4065,	// (0x0002836f) mce_header_field_pane

0x407c,	// (0x00028386) mce_header_field_pane_2_ParamLimits

0x407c,	// (0x00028386) mce_header_field_pane_2

0x4092,	// (0x0002839c) mce_header_field_pane_3

0x409a,	// (0x000283a4) list_single_mce_message_pane_ParamLimits

0x409a,	// (0x000283a4) list_single_mce_message_pane

0x40af,	// (0x000283b9) list_single_mce_smart_pane_ParamLimits

0x40af,	// (0x000283b9) list_single_mce_smart_pane

0x40cf,	// (0x000283d9) input_focus_pane_cp03

0x40d8,	// (0x000283e2) list_header_data_pane

0x40e0,	// (0x000283ea) mce_header_field_pane_t1

0x40ee,	// (0x000283f8) list_single_mce_header_pane_ParamLimits

0x40ee,	// (0x000283f8) list_single_mce_header_pane

0x4102,	// (0x0002840c) list_single_mce_header_pane_t1

0x4111,	// (0x0002841b) list_single_mce_message_pane_g1

0x411a,	// (0x00028424) list_single_mce_message_pane_t1

0x414f,	// (0x00028459) bg_cale_heading_pane_cp01_ParamLimits

0x414f,	// (0x00028459) bg_cale_heading_pane_cp01

0x417e,	// (0x00028488) bg_cale_pane_cp02_ParamLimits

0x417e,	// (0x00028488) bg_cale_pane_cp02

0x41ab,	// (0x000284b5) cale_month_corner_pane

0x41ca,	// (0x000284d4) cale_month_day_heading_pane_ParamLimits

0x41ca,	// (0x000284d4) cale_month_day_heading_pane

0x4201,	// (0x0002850b) cale_month_pane_g1_ParamLimits

0x4201,	// (0x0002850b) cale_month_pane_g1

0x4225,	// (0x0002852f) cale_month_pane_g2_ParamLimits

0x4225,	// (0x0002852f) cale_month_pane_g2

0x424d,	// (0x00028557) cale_month_pane_g3_ParamLimits

0x424d,	// (0x00028557) cale_month_pane_g3

0x4289,	// (0x00028593) cale_month_pane_g4_ParamLimits

0x4289,	// (0x00028593) cale_month_pane_g4

0x42c5,	// (0x000285cf) cale_month_pane_g5_ParamLimits

0x42c5,	// (0x000285cf) cale_month_pane_g5

0x4301,	// (0x0002860b) cale_month_pane_g6_ParamLimits

0x4301,	// (0x0002860b) cale_month_pane_g6

0x433d,	// (0x00028647) cale_month_pane_g7_ParamLimits

0x433d,	// (0x00028647) cale_month_pane_g7

0x4379,	// (0x00028683) cale_month_pane_g8_ParamLimits

0x4379,	// (0x00028683) cale_month_pane_g8

0x43bd,	// (0x000286c7) cale_month_pane_g9_ParamLimits

0x43bd,	// (0x000286c7) cale_month_pane_g9

0x43ff,	// (0x00028709) cale_month_pane_g10_ParamLimits

0x43ff,	// (0x00028709) cale_month_pane_g10

0x4441,	// (0x0002874b) cale_month_pane_g11_ParamLimits

0x4441,	// (0x0002874b) cale_month_pane_g11

0x4483,	// (0x0002878d) cale_month_pane_g12_ParamLimits

0x4483,	// (0x0002878d) cale_month_pane_g12

0x44c5,	// (0x000287cf) cale_month_pane_g13_ParamLimits

0x44c5,	// (0x000287cf) cale_month_pane_g13

0x000c,

0xf219,	// (0x00033523) cale_month_pane_g_ParamLimits

0xf219,	// (0x00033523) cale_month_pane_g

0x4519,	// (0x00028823) cale_month_week_pane

0x4535,	// (0x0002883f) grid_cale_month_pane_ParamLimits

0x4535,	// (0x0002883f) grid_cale_month_pane

0x4563,	// (0x0002886d) cale_month_day_heading_pane_t1

0x45e9,	// (0x000288f3) cale_month_day_heading_pane_t2

0x467a,	// (0x00028984) cale_month_day_heading_pane_t3

0x470b,	// (0x00028a15) cale_month_day_heading_pane_t4

0x479c,	// (0x00028aa6) cale_month_day_heading_pane_t5

0x482d,	// (0x00028b37) cale_month_day_heading_pane_t6

0x48be,	// (0x00028bc8) cale_month_day_heading_pane_t7

0x0006,

0xf234,	// (0x0003353e) cale_month_day_heading_pane_t

0x36df,	// (0x000279e9) bg_cale_side_pane_cp01

0x4953,	// (0x00028c5d) cale_month_week_pane_t1

0x496c,	// (0x00028c76) cale_month_week_pane_t2

0x4985,	// (0x00028c8f) cale_month_week_pane_t3

0x499e,	// (0x00028ca8) cale_month_week_pane_t4

0x49b7,	// (0x00028cc1) cale_month_week_pane_t5

0x49d0,	// (0x00028cda) cale_month_week_pane_t6

0x0005,

0xf243,	// (0x0003354d) cale_month_week_pane_t

0x49e9,	// (0x00028cf3) cell_cale_month_pane_ParamLimits

0x49e9,	// (0x00028cf3) cell_cale_month_pane

0xadd0,	// (0x0002f0da) cell_cale_month_pane_g1

0x1905,	// (0x00025c0f) cell_cale_month_pane_t1_ParamLimits

0x1905,	// (0x00025c0f) cell_cale_month_pane_t1

0x3724,	// (0x00027a2e) grid_highlight_pane_cp08

0x2e88,	// (0x00027192) main_smil_g1

0x4adb,	// (0x00028de5) smil_status_pane

0x4ae4,	// (0x00028dee) smil_text_pane

0xbd50,	// (0x0003005a) bg_popup_call3_rect_pane_g8

0xbd58,	// (0x00030062) bg_popup_call3_rect_pane_g9

0x0008,

0xf4f3,	// (0x000337fd) bg_popup_call3_rect_pane_g

0xbfab,	// (0x000302b5) smil_status_volume_pane_g1

0x4af6,	// (0x00028e00) smil_status_pane_t1

0xbfde,	// (0x000302e8) volume_smil_pane

0x4b0d,	// (0x00028e17) list_smil_text_pane

0x4b17,	// (0x00028e21) scroll_pane_cp011

0x4b22,	// (0x00028e2c) smil_text_list_pane_t1_ParamLimits

0x4b22,	// (0x00028e2c) smil_text_list_pane_t1

0xaddc,	// (0x0002f0e6) aid_volume_smil_ParamLimits

0xaddc,	// (0x0002f0e6) aid_volume_smil

0x2e88,	// (0x00027192) smil_volume_pane_g1

0x2e88,	// (0x00027192) smil_volume_pane_g2

0x0001,

0xf255,	// (0x0003355f) smil_volume_pane_g

0x329a,	// (0x000275a4) listscroll_cale_day_pane

0x4b5e,	// (0x00028e68) bg_cale_pane

0x4b76,	// (0x00028e80) list_cale_pane

0x4b99,	// (0x00028ea3) scroll_pane_cp09

0x4baa,	// (0x00028eb4) cale_bg_pane_g1

0x4bb2,	// (0x00028ebc) cale_bg_pane_g2

0x4bba,	// (0x00028ec4) cale_bg_pane_g3

0x4bc2,	// (0x00028ecc) cale_bg_pane_g4

0x4bca,	// (0x00028ed4) cale_bg_pane_g5

0x4bd2,	// (0x00028edc) cale_bg_pane_g6

0x4bda,	// (0x00028ee4) cale_bg_pane_g7

0x4be2,	// (0x00028eec) cale_bg_pane_g8

0x4bea,	// (0x00028ef4) cale_bg_pane_g9

0x0008,

0xf25a,	// (0x00033564) cale_bg_pane_g

0x4bfa,	// (0x00028f04) list_cale_time_pane_ParamLimits

0x4bfa,	// (0x00028f04) list_cale_time_pane

0x4c0f,	// (0x00028f19) list_cale_time_pane_g1_ParamLimits

0x4c0f,	// (0x00028f19) list_cale_time_pane_g1

0x4c1b,	// (0x00028f25) list_cale_time_pane_g2_ParamLimits

0x4c1b,	// (0x00028f25) list_cale_time_pane_g2

0x4c28,	// (0x00028f32) list_cale_time_pane_g3_ParamLimits

0x4c28,	// (0x00028f32) list_cale_time_pane_g3

0x4c34,	// (0x00028f3e) list_cale_time_pane_g4_ParamLimits

0x4c34,	// (0x00028f3e) list_cale_time_pane_g4

0x4c40,	// (0x00028f4a) list_cale_time_pane_g5_ParamLimits

0x4c40,	// (0x00028f4a) list_cale_time_pane_g5

0x0005,

0xf26d,	// (0x00033577) list_cale_time_pane_g_ParamLimits

0xf26d,	// (0x00033577) list_cale_time_pane_g

0x4c59,	// (0x00028f63) list_cale_time_pane_t1_ParamLimits

0x4c59,	// (0x00028f63) list_cale_time_pane_t1

0x4c81,	// (0x00028f8b) list_cale_time_pane_t2_ParamLimits

0x4c81,	// (0x00028f8b) list_cale_time_pane_t2

0x533a,	// (0x00029644) aid_blid_cardinal_pane

0x5384,	// (0x0002968e) compass_pane_t4

0x4ca9,	// (0x00028fb3) list_cale_time_pane_t4_ParamLimits

0x4ca9,	// (0x00028fb3) list_cale_time_pane_t4

0x5392,	// (0x0002969c) compass_pane_t5

0x53a0,	// (0x000296aa) compass_pane_t6

0x53ae,	// (0x000296b8) compass_pane_t7

0x543a,	// (0x00029744) navi_pane_cc_t1

0x5642,	// (0x0002994c) aid_phob_thumbnail_center_pane

0x5aa1,	// (0x00029dab) main_postcard_pane_g4_ParamLimits

0x0002,

0xf27a,	// (0x00033584) list_cale_time_pane_t_ParamLimits

0xf27a,	// (0x00033584) list_cale_time_pane_t

0x284a,	// (0x00026b54) bg_popup_window_pane_cp02_ParamLimits

0x284a,	// (0x00026b54) bg_popup_window_pane_cp02

0x4cd1,	// (0x00028fdb) heading_pane_cp01_ParamLimits

0x4cd1,	// (0x00028fdb) heading_pane_cp01

0x4cdd,	// (0x00028fe7) loc_req_pane_ParamLimits

0x4cdd,	// (0x00028fe7) loc_req_pane

0x4ced,	// (0x00028ff7) loc_type_pane_ParamLimits

0x4ced,	// (0x00028ff7) loc_type_pane

0x4cff,	// (0x00029009) loc_type_pane_t1_ParamLimits

0x4cff,	// (0x00029009) loc_type_pane_t1

0x4d11,	// (0x0002901b) loc_type_pane_t2_ParamLimits

0x4d11,	// (0x0002901b) loc_type_pane_t2

0x4d23,	// (0x0002902d) loc_type_pane_t3_ParamLimits

0x4d23,	// (0x0002902d) loc_type_pane_t3

0x0002,

0xf281,	// (0x0003358b) loc_type_pane_t_ParamLimits

0xf281,	// (0x0003358b) loc_type_pane_t

0x4d35,	// (0x0002903f) list_loc_req_pane

0x4d3f,	// (0x00029049) scroll_pane_cp012

0x4d48,	// (0x00029052) list_single_loc_request_popup_menu_pane_ParamLimits

0x4d48,	// (0x00029052) list_single_loc_request_popup_menu_pane

0x4d55,	// (0x0002905f) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x4d55,	// (0x0002905f) list_single_loc_request_popup_menu_pane_g1

0x4d61,	// (0x0002906b) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x4d61,	// (0x0002906b) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf288,	// (0x00033592) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf288,	// (0x00033592) list_single_loc_request_popup_menu_pane_g

0x4d6d,	// (0x00029077) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x4d6d,	// (0x00029077) list_single_loc_request_popup_menu_pane_t1

0x2e70,	// (0x0002717a) bg_popup_window_pane_cp03_ParamLimits

0x2e70,	// (0x0002717a) bg_popup_window_pane_cp03

0x4d83,	// (0x0002908d) heading_loc_req_pane_ParamLimits

0x4d83,	// (0x0002908d) heading_loc_req_pane

0x4d8f,	// (0x00029099) popup_dyc_status_message_window_g1_ParamLimits

0x4d8f,	// (0x00029099) popup_dyc_status_message_window_g1

0x4da3,	// (0x000290ad) popup_dyc_status_message_window_t1_ParamLimits

0x4da3,	// (0x000290ad) popup_dyc_status_message_window_t1

0x4db8,	// (0x000290c2) popup_dyc_status_message_window_t2_ParamLimits

0x4db8,	// (0x000290c2) popup_dyc_status_message_window_t2

0x4dcd,	// (0x000290d7) popup_dyc_status_message_window_t3_ParamLimits

0x4dcd,	// (0x000290d7) popup_dyc_status_message_window_t3

0x0002,

0xf28d,	// (0x00033597) popup_dyc_status_message_window_t_ParamLimits

0xf28d,	// (0x00033597) popup_dyc_status_message_window_t

0x2c15,	// (0x00026f1f) bg_heading_pane_cp01

0x4de9,	// (0x000290f3) heading_loc_req_pane_g1

0x4df1,	// (0x000290fb) heading_loc_req_pane_g2

0x4df9,	// (0x00029103) heading_loc_req_pane_g3

0x0002,

0xf294,	// (0x0003359e) heading_loc_req_pane_g

0x4e01,	// (0x0002910b) heading_loc_req_pane_t1

0x4e48,	// (0x00029152) bg_popup_sub_pane_cp01_ParamLimits

0x4e48,	// (0x00029152) bg_popup_sub_pane_cp01

0x4e56,	// (0x00029160) popup_cale_events_window_g1_ParamLimits

0x4e56,	// (0x00029160) popup_cale_events_window_g1

0x4e76,	// (0x00029180) popup_cale_events_window_g2_ParamLimits

0x4e76,	// (0x00029180) popup_cale_events_window_g2

0x0001,

0xf2c8,	// (0x000335d2) popup_cale_events_window_g_ParamLimits

0xf2c8,	// (0x000335d2) popup_cale_events_window_g

0x4e96,	// (0x000291a0) popup_cale_events_window_t1_ParamLimits

0x4e96,	// (0x000291a0) popup_cale_events_window_t1

0x4ea8,	// (0x000291b2) popup_cale_events_window_t2_ParamLimits

0x4ea8,	// (0x000291b2) popup_cale_events_window_t2

0x4ee6,	// (0x000291f0) popup_cale_events_window_t3_ParamLimits

0x4ee6,	// (0x000291f0) popup_cale_events_window_t3

0x4f20,	// (0x0002922a) popup_cale_events_window_t4_ParamLimits

0x4f20,	// (0x0002922a) popup_cale_events_window_t4

0x0003,

0xf2cd,	// (0x000335d7) popup_cale_events_window_t_ParamLimits

0xf2cd,	// (0x000335d7) popup_cale_events_window_t

0x4f56,	// (0x00029260) call_type_pane

0x4f66,	// (0x00029270) popup_call_status_window_g1

0x4f7a,	// (0x00029284) popup_call_status_window_g2

0x4f8e,	// (0x00029298) popup_call_status_window_g3

0x0002,

0xf2d6,	// (0x000335e0) popup_call_status_window_g

0x4f9e,	// (0x000292a8) call_type_pane_g1

0x4fa7,	// (0x000292b1) call_type_pane_g2

0x0001,

0xf2dd,	// (0x000335e7) call_type_pane_g

0x2c15,	// (0x00026f1f) bg_popup_sub_pane_cp02

0x4fb0,	// (0x000292ba) listscroll_popup_wml_pane

0x4fb8,	// (0x000292c2) list_wml_pane

0x4fc2,	// (0x000292cc) scroll_pane_cp013

0x4fcb,	// (0x000292d5) list_single_graphic_popup_wml_pane_ParamLimits

0x4fcb,	// (0x000292d5) list_single_graphic_popup_wml_pane

0x2e88,	// (0x00027192) list_single_graphic_popup_wml_pane_g1

0x4fde,	// (0x000292e8) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2e2,	// (0x000335ec) list_single_graphic_popup_wml_pane_g

0x4fe6,	// (0x000292f0) list_single_graphic_popup_wml_pane_t1

0x4ffc,	// (0x00029306) aid_call_pane

0x2e68,	// (0x00027172) popup_clock_analogue_window_g1

0x2e68,	// (0x00027172) popup_clock_analogue_window_g2

0xadfe,	// (0x0002f108) popup_clock_analogue_window_g3

0xadfe,	// (0x0002f108) popup_clock_analogue_window_g4

0x2e88,	// (0x00027192) popup_clock_analogue_window_g5

0x0004,

0xf2e7,	// (0x000335f1) popup_clock_analogue_window_g

0xae06,	// (0x0002f110) popup_clock_analogue_window_t1

0xae14,	// (0x0002f11e) clock_digital_number_pane_ParamLimits

0xae14,	// (0x0002f11e) clock_digital_number_pane

0xae20,	// (0x0002f12a) clock_digital_number_pane_cp02_ParamLimits

0xae20,	// (0x0002f12a) clock_digital_number_pane_cp02

0xae2c,	// (0x0002f136) clock_digital_number_pane_cp03_ParamLimits

0xae2c,	// (0x0002f136) clock_digital_number_pane_cp03

0xae38,	// (0x0002f142) clock_digital_number_pane_cp04_ParamLimits

0xae38,	// (0x0002f142) clock_digital_number_pane_cp04

0xae44,	// (0x0002f14e) clock_digital_separator_pane_ParamLimits

0xae44,	// (0x0002f14e) clock_digital_separator_pane

0xae50,	// (0x0002f15a) popup_clock_digital_window_t1

0x2e88,	// (0x00027192) clock_digital_number_pane_g1

0x2e88,	// (0x00027192) clock_digital_number_pane_g2

0x0001,

0xf255,	// (0x0003355f) clock_digital_number_pane_g

0x2e88,	// (0x00027192) clock_digital_separator_pane_g1

0x2e88,	// (0x00027192) clock_digital_separator_pane_g2

0x0001,

0xf255,	// (0x0003355f) clock_digital_separator_pane_g

0x2c15,	// (0x00026f1f) bg_popup_window_pane_cp04

0x5004,	// (0x0002930e) heading_pane_cp03

0x3793,	// (0x00027a9d) listscroll_popup_gms_pane

0x2c15,	// (0x00026f1f) grid_large_graphic_popup_pane

0x500d,	// (0x00029317) listscroll_popup_gms_pane_g1

0x5016,	// (0x00029320) listscroll_popup_gms_pane_g2

0x0001,

0xf2f2,	// (0x000335fc) listscroll_popup_gms_pane_g

0x501f,	// (0x00029329) scroll_pane_cp014

0x2f31,	// (0x0002723b) cell_large_graphic_popup_pane_ParamLimits

0x2f31,	// (0x0002723b) cell_large_graphic_popup_pane

0x2f15,	// (0x0002721f) cell_large_graphic_popup_pane_g1_ParamLimits

0x2f15,	// (0x0002721f) cell_large_graphic_popup_pane_g1

0x5027,	// (0x00029331) cell_large_graphic_popup_pane_g2_ParamLimits

0x5027,	// (0x00029331) cell_large_graphic_popup_pane_g2

0x5035,	// (0x0002933f) cell_large_graphic_popup_pane_g3_ParamLimits

0x5035,	// (0x0002933f) cell_large_graphic_popup_pane_g3

0x5043,	// (0x0002934d) cell_large_graphic_popup_pane_g4_ParamLimits

0x5043,	// (0x0002934d) cell_large_graphic_popup_pane_g4

0x0003,

0xf2f7,	// (0x00033601) cell_large_graphic_popup_pane_g_ParamLimits

0xf2f7,	// (0x00033601) cell_large_graphic_popup_pane_g

0x2c15,	// (0x00026f1f) grid_highlight_pane_cp010

0x2e88,	// (0x00027192) bg_popup_call_pane_g1

0x5054,	// (0x0002935e) list_single_graphic_popup_conf_pane_ParamLimits

0x5054,	// (0x0002935e) list_single_graphic_popup_conf_pane

0x5067,	// (0x00029371) list_highlight_pane_cp01

0x5070,	// (0x0002937a) list_single_graphic_popup_conf_pane_g1

0x5078,	// (0x00029382) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf300,	// (0x0003360a) list_single_graphic_popup_conf_pane_g

0x5080,	// (0x0002938a) list_single_graphic_popup_conf_pane_t1

0x508e,	// (0x00029398) linegrid_cams_pane_g1

0x5097,	// (0x000293a1) linegrid_cams_pane_g2

0x3272,	// (0x0002757c) linegrid_cams_pane_g3

0x50a0,	// (0x000293aa) linegrid_cams_pane_g4

0x50a9,	// (0x000293b3) linegrid_cams_pane_g5

0x50b2,	// (0x000293bc) linegrid_cams_pane_g6

0x377a,	// (0x00027a84) linegrid_cams_pane_g7

0x0006,

0xf305,	// (0x0003360f) linegrid_cams_pane_g

0x50bb,	// (0x000293c5) popup_clock_analogue_window

0x50bb,	// (0x000293c5) popup_clock_digital_window

0x2c15,	// (0x00026f1f) popup_phob_thumbnail_window

0x2e88,	// (0x00027192) call_video_uplink_pane_g1

0x50c4,	// (0x000293ce) call_video_uplink_pane_g2

0x0001,

0xf314,	// (0x0003361e) call_video_uplink_pane_g

0x3724,	// (0x00027a2e) video_uplink_pane

0x50cc,	// (0x000293d6) mce_image_pane_g1

0x50d6,	// (0x000293e0) mce_image_pane_g2

0x50de,	// (0x000293e8) mce_image_pane_g3

0x50e6,	// (0x000293f0) mce_image_pane_g4

0x50ee,	// (0x000293f8) mce_image_pane_g5

0x0004,

0xf319,	// (0x00033623) mce_image_pane_g

0x50f6,	// (0x00029400) control_top_pane_stacon_cp01_ParamLimits

0x50f6,	// (0x00029400) control_top_pane_stacon_cp01

0x5106,	// (0x00029410) uni_indicator_pane_stacon_cp01_ParamLimits

0x5106,	// (0x00029410) uni_indicator_pane_stacon_cp01

0x5117,	// (0x00029421) bg_popup_sub_pane_cp03

0x5121,	// (0x0002942b) chi_dic_find_pane

0x5129,	// (0x00029433) listscroll_chi_dic_pane

0x5132,	// (0x0002943c) main_pane_chidic_g1

0x5145,	// (0x0002944f) chi_dic_find_pane_t1

0x5153,	// (0x0002945d) find_chidic_pane

0x515c,	// (0x00029466) chi_dic_list_pane_ParamLimits

0x515c,	// (0x00029466) chi_dic_list_pane

0x501f,	// (0x00029329) scroll_pane_cp020

0x516d,	// (0x00029477) find_chidic_pane_t1

0x2c15,	// (0x00026f1f) input_focus_pane_cp06

0x517c,	// (0x00029486) list_chi_dic_pane_ParamLimits

0x517c,	// (0x00029486) list_chi_dic_pane

0x518e,	// (0x00029498) list_chi_dic_pane_t1_ParamLimits

0x518e,	// (0x00029498) list_chi_dic_pane_t1

0x2c15,	// (0x00026f1f) list_highlight_pane_cp020

0x51a1,	// (0x000294ab) bg_cale_heading_pane_g1

0x51a9,	// (0x000294b3) bg_cale_heading_pane_g2

0x51b1,	// (0x000294bb) bg_cale_heading_pane_g3

0x51b9,	// (0x000294c3) bg_cale_heading_pane_g4

0x51c1,	// (0x000294cb) bg_cale_heading_pane_g5

0x51c9,	// (0x000294d3) bg_cale_heading_pane_g6

0x51d1,	// (0x000294db) bg_cale_heading_pane_g7

0x51d9,	// (0x000294e3) bg_cale_heading_pane_g8

0x51e1,	// (0x000294eb) bg_cale_heading_pane_g9

0x0008,

0xf324,	// (0x0003362e) bg_cale_heading_pane_g

0x51a1,	// (0x000294ab) bg_cale_side_pane_g1

0x51e9,	// (0x000294f3) bg_cale_side_pane_g2

0x51f1,	// (0x000294fb) bg_cale_side_pane_g3

0x51f9,	// (0x00029503) bg_cale_side_pane_g4

0x5201,	// (0x0002950b) bg_cale_side_pane_g5

0x5209,	// (0x00029513) bg_cale_side_pane_g6

0x5211,	// (0x0002951b) bg_cale_side_pane_g7

0x5219,	// (0x00029523) bg_cale_side_pane_g8

0x5221,	// (0x0002952b) bg_cale_side_pane_g9

0x0008,

0xf337,	// (0x00033641) bg_cale_side_pane_g

0x5229,	// (0x00029533) popup_call_status_window_ParamLimits

0x5229,	// (0x00029533) popup_call_status_window

0x5270,	// (0x0002957a) stacon_top_pane

0x5278,	// (0x00029582) status_pane_ParamLimits

0x5278,	// (0x00029582) status_pane

0x5292,	// (0x0002959c) status_small_pane

0x529a,	// (0x000295a4) control_pane

0x2c15,	// (0x00026f1f) stacon_bottom_pane

0x52a2,	// (0x000295ac) list_single_mce_smart_pane_t1_ParamLimits

0x52a2,	// (0x000295ac) list_single_mce_smart_pane_t1

0x52b5,	// (0x000295bf) list_single_mce_smart_pane_t2_ParamLimits

0x52b5,	// (0x000295bf) list_single_mce_smart_pane_t2

0x0001,

0xf34a,	// (0x00033654) list_single_mce_smart_pane_t_ParamLimits

0xf34a,	// (0x00033654) list_single_mce_smart_pane_t

0x52dd,	// (0x000295e7) compass_pane

0x52e6,	// (0x000295f0) main_location2_pane_t1

0x52fc,	// (0x00029606) main_location2_pane_t2

0x5312,	// (0x0002961c) main_location2_pane_t3

0x0003,

0xf34f,	// (0x00033659) main_location2_pane_t

0x535a,	// (0x00029664) compass_pane_g1_ParamLimits

0x535a,	// (0x00029664) compass_pane_g1

0x5366,	// (0x00029670) compass_pane_t1

0x5375,	// (0x0002967f) compass_pane_t2

0x0005,

0xf358,	// (0x00033662) compass_pane_t

0x53bc,	// (0x000296c6) text_secondary_cp61

0x5431,	// (0x0002973b) navi_pane_cams_g5

0x549a,	// (0x000297a4) navi_pane_im_t1

0x54a8,	// (0x000297b2) navi_pane_mp_g1_ParamLimits

0x54a8,	// (0x000297b2) navi_pane_mp_g1

0x54bc,	// (0x000297c6) navi_pane_mp_g2_ParamLimits

0x54bc,	// (0x000297c6) navi_pane_mp_g2

0x54c8,	// (0x000297d2) navi_pane_mp_g3_ParamLimits

0x54c8,	// (0x000297d2) navi_pane_mp_g3

0x0002,

0xf36c,	// (0x00033676) navi_pane_mp_g_ParamLimits

0xf36c,	// (0x00033676) navi_pane_mp_g

0x54d4,	// (0x000297de) navi_pane_mp_t1

0x54e2,	// (0x000297ec) navi_pane_mp_t2

0x0002,

0xf373,	// (0x0003367d) navi_pane_mp_t

0x558b,	// (0x00029895) navi_pane_vt_g1

0x54d4,	// (0x000297de) navi_pane_vt_t1

0x5593,	// (0x0002989d) navi_slider_pane

0x3793,	// (0x00027a9d) zooming_pane

0x55a3,	// (0x000298ad) navi_slider_pane_g1

0xae6d,	// (0x0002f177) navi_slider_pane_g2

0x0006,

0xf37a,	// (0x00033684) navi_slider_pane_g

0x55c7,	// (0x000298d1) aid_levels_zoom

0x55cf,	// (0x000298d9) zooming_pane_g1

0x55d7,	// (0x000298e1) zooming_pane_g2

0x55d7,	// (0x000298e1) zooming_pane_g3

0x0002,

0xf389,	// (0x00033693) zooming_pane_g

0x55df,	// (0x000298e9) level_10_zoom

0x55e8,	// (0x000298f2) level_11_zoom

0x55f1,	// (0x000298fb) level_1_zoom

0x55fa,	// (0x00029904) level_2_zoom

0x5603,	// (0x0002990d) level_3_zoom

0x560c,	// (0x00029916) level_4_zoom

0x5615,	// (0x0002991f) level_5_zoom

0x561e,	// (0x00029928) level_6_zoom

0x5627,	// (0x00029931) level_7_zoom

0x5630,	// (0x0002993a) level_8_zoom

0x5639,	// (0x00029943) level_9_zoom

0x564a,	// (0x00029954) popup_phob_thumbnail_window_g1

0x5652,	// (0x0002995c) popup_phob_thumbnail_window_g2

0x0001,

0xf390,	// (0x0003369a) popup_phob_thumbnail_window_g

0x6263,	// (0x0002a56d) level_1_location

0x626b,	// (0x0002a575) level_2_location

0x6273,	// (0x0002a57d) level_3_location

0x627b,	// (0x0002a585) level_4_location

0x3793,	// (0x00027a9d) level_5_location

0x565a,	// (0x00029964) mce_icon_pane_g1

0x5662,	// (0x0002996c) mce_icon_pane_g2

0x0001,

0xf395,	// (0x0003369f) mce_icon_pane_g

0x566a,	// (0x00029974) main_mup_pane_g1_ParamLimits

0x566a,	// (0x00029974) main_mup_pane_g1

0x566a,	// (0x00029974) main_mup_pane_g2_ParamLimits

0x566a,	// (0x00029974) main_mup_pane_g2

0x566a,	// (0x00029974) main_mup_pane_g3_ParamLimits

0x566a,	// (0x00029974) main_mup_pane_g3

0x566a,	// (0x00029974) main_mup_pane_g4_ParamLimits

0x566a,	// (0x00029974) main_mup_pane_g4

0x566a,	// (0x00029974) main_mup_pane_g5_ParamLimits

0x566a,	// (0x00029974) main_mup_pane_g5

0x566a,	// (0x00029974) main_mup_pane_g6_ParamLimits

0x566a,	// (0x00029974) main_mup_pane_g6

0x566a,	// (0x00029974) main_mup_pane_g7_ParamLimits

0x566a,	// (0x00029974) main_mup_pane_g7

0x566a,	// (0x00029974) main_mup_pane_g8_ParamLimits

0x566a,	// (0x00029974) main_mup_pane_g8

0x566a,	// (0x00029974) main_mup_pane_g9_ParamLimits

0x566a,	// (0x00029974) main_mup_pane_g9

0x566a,	// (0x00029974) main_mup_pane_g10_ParamLimits

0x566a,	// (0x00029974) main_mup_pane_g10

0x566a,	// (0x00029974) main_mup_pane_g11_ParamLimits

0x566a,	// (0x00029974) main_mup_pane_g11

0x2f15,	// (0x0002721f) main_mup_pane_g12_ParamLimits

0x2f15,	// (0x0002721f) main_mup_pane_g12

0x566a,	// (0x00029974) main_mup_pane_g13_ParamLimits

0x566a,	// (0x00029974) main_mup_pane_g13

0x000c,

0xf39a,	// (0x000336a4) main_mup_pane_g_ParamLimits

0xf39a,	// (0x000336a4) main_mup_pane_g

0x5678,	// (0x00029982) main_mup_pane_t1_ParamLimits

0x5678,	// (0x00029982) main_mup_pane_t1

0x5678,	// (0x00029982) main_mup_pane_t2_ParamLimits

0x5678,	// (0x00029982) main_mup_pane_t2

0x5678,	// (0x00029982) main_mup_pane_t3_ParamLimits

0x5678,	// (0x00029982) main_mup_pane_t3

0x380a,	// (0x00027b14) main_mup_pane_t4_ParamLimits

0x380a,	// (0x00027b14) main_mup_pane_t4

0x380a,	// (0x00027b14) main_mup_pane_t5_ParamLimits

0x380a,	// (0x00027b14) main_mup_pane_t5

0x568c,	// (0x00029996) main_mup_pane_t6_ParamLimits

0x568c,	// (0x00029996) main_mup_pane_t6

0x0005,

0xf3b5,	// (0x000336bf) main_mup_pane_t_ParamLimits

0xf3b5,	// (0x000336bf) main_mup_pane_t

0x2f31,	// (0x0002723b) mup_progress_pane_ParamLimits

0x2f31,	// (0x0002723b) mup_progress_pane

0x56a0,	// (0x000299aa) mup_visualizer_pane_ParamLimits

0x56a0,	// (0x000299aa) mup_visualizer_pane

0x56a0,	// (0x000299aa) mup_volume_pane_ParamLimits

0x56a0,	// (0x000299aa) mup_volume_pane

0x2f23,	// (0x0002722d) mup_visualizer_pane_g1_ParamLimits

0x2f23,	// (0x0002722d) mup_visualizer_pane_g1

0x56ae,	// (0x000299b8) mup_visualizer_pane_g2_ParamLimits

0x56ae,	// (0x000299b8) mup_visualizer_pane_g2

0x2f15,	// (0x0002721f) mup_visualizer_pane_g3_ParamLimits

0x2f15,	// (0x0002721f) mup_visualizer_pane_g3

0x0002,

0xf3c2,	// (0x000336cc) mup_visualizer_pane_g_ParamLimits

0xf3c2,	// (0x000336cc) mup_visualizer_pane_g

0x398e,	// (0x00027c98) mup_volume_pane_g1

0x398e,	// (0x00027c98) mup_volume_pane_g2

0x0001,

0xf3c9,	// (0x000336d3) mup_volume_pane_g

0x398e,	// (0x00027c98) mup_progress_pane_g1

0x398e,	// (0x00027c98) mup_progress_pane_g2

0x398e,	// (0x00027c98) mup_progress_pane_g3

0x0002,

0xf3ce,	// (0x000336d8) mup_progress_pane_g

0x2c15,	// (0x00026f1f) bg_popup_window_pane_cp05

0x56bc,	// (0x000299c6) heading_pane_cp02_ParamLimits

0x56bc,	// (0x000299c6) heading_pane_cp02

0x56d6,	// (0x000299e0) list_popup_blid_pane

0x56de,	// (0x000299e8) list_blid_sat_info_pane_ParamLimits

0x56de,	// (0x000299e8) list_blid_sat_info_pane

0x56f1,	// (0x000299fb) list_blid_sat_info_pane_g1

0x56f9,	// (0x00029a03) list_blid_sat_info_pane_t1

0x57d9,	// (0x00029ae3) mup_equalizer_pane_ParamLimits

0x57d9,	// (0x00029ae3) mup_equalizer_pane

0x57f2,	// (0x00029afc) mup_equalizer_pane_cp1_ParamLimits

0x57f2,	// (0x00029afc) mup_equalizer_pane_cp1

0x580b,	// (0x00029b15) mup_equalizer_pane_cp2_ParamLimits

0x580b,	// (0x00029b15) mup_equalizer_pane_cp2

0x5824,	// (0x00029b2e) mup_equalizer_pane_cp3_ParamLimits

0x5824,	// (0x00029b2e) mup_equalizer_pane_cp3

0x583d,	// (0x00029b47) mup_equalizer_pane_cp4_ParamLimits

0x583d,	// (0x00029b47) mup_equalizer_pane_cp4

0x5856,	// (0x00029b60) mup_equalizer_pane_cp5

0x5868,	// (0x00029b72) mup_equalizer_pane_cp6

0x587a,	// (0x00029b84) mup_equalizer_pane_cp7

0xbdd0,	// (0x000300da) bg_popup_call_poc_act_pane_g9

0xbdd8,	// (0x000300e2) bg_popup_call_poc_act_pane_g10

0xbde0,	// (0x000300ea) bg_popup_call_poc_act_pane_g11

0x000a,

0x2e70,	// (0x0002717a) mup_scale_pane

0x2e88,	// (0x00027192) mup_scale_pane_g1

0x588e,	// (0x00029b98) mup_scale_pane_g2

0x0006,

0xf3ea,	// (0x000336f4) mup_scale_pane_g

0x58c4,	// (0x00029bce) msg_data_pane

0x58cc,	// (0x00029bd6) scroll_pane_cp017

0x58d4,	// (0x00029bde) bg_list_pane_cp04_ParamLimits

0x58d4,	// (0x00029bde) bg_list_pane_cp04

0x58f4,	// (0x00029bfe) msg_data_pane_g1

0x50d6,	// (0x000293e0) msg_data_pane_g2

0x50de,	// (0x000293e8) msg_data_pane_g3

0x58fc,	// (0x00029c06) msg_data_pane_g4

0x50ee,	// (0x000293f8) msg_data_pane_g5

0x565a,	// (0x00029964) msg_data_pane_g6

0x5904,	// (0x00029c0e) msg_data_pane_g7

0x0006,

0xf3f9,	// (0x00033703) msg_data_pane_g

0x590c,	// (0x00029c16) msg_text_pane_ParamLimits

0x590c,	// (0x00029c16) msg_text_pane

0x5933,	// (0x00029c3d) qrid_highlight_pane_cp011_ParamLimits

0x5933,	// (0x00029c3d) qrid_highlight_pane_cp011

0x2c15,	// (0x00026f1f) msg_body_pane

0x2c15,	// (0x00026f1f) msg_header_pane

0x5952,	// (0x00029c5c) input_focus_pane_cp07

0x5973,	// (0x00029c7d) msg_header_pane_t1_ParamLimits

0x5973,	// (0x00029c7d) msg_header_pane_t1

0x5989,	// (0x00029c93) msg_header_pane_t2_ParamLimits

0x5989,	// (0x00029c93) msg_header_pane_t2

0x0001,

0xf40d,	// (0x00033717) msg_header_pane_t_ParamLimits

0xf40d,	// (0x00033717) msg_header_pane_t

0x59a0,	// (0x00029caa) msg_body_pane_g1

0x59a8,	// (0x00029cb2) msg_body_pane_t1_ParamLimits

0x59a8,	// (0x00029cb2) msg_body_pane_t1

0x59d3,	// (0x00029cdd) msg_body_pane_t2_ParamLimits

0x59d3,	// (0x00029cdd) msg_body_pane_t2

0x59e5,	// (0x00029cef) msg_body_pane_t3_ParamLimits

0x59e5,	// (0x00029cef) msg_body_pane_t3

0x0002,

0xf412,	// (0x0003371c) msg_body_pane_t_ParamLimits

0xf412,	// (0x0003371c) msg_body_pane_t

0x193d,	// (0x00025c47) main_viewer_pane_g1_ParamLimits

0x193d,	// (0x00025c47) main_viewer_pane_g1

0x1949,	// (0x00025c53) main_viewer_pane_g2_ParamLimits

0x1949,	// (0x00025c53) main_viewer_pane_g2

0x5a15,	// (0x00029d1f) main_viewer_pane_g3_ParamLimits

0x5a15,	// (0x00029d1f) main_viewer_pane_g3

0x5a24,	// (0x00029d2e) main_viewer_pane_g4_ParamLimits

0x5a24,	// (0x00029d2e) main_viewer_pane_g4

0xae97,	// (0x0002f1a1) main_viewer_pane_g5_ParamLimits

0xae97,	// (0x0002f1a1) main_viewer_pane_g5

0xae97,	// (0x0002f1a1) main_viewer_pane_g7_ParamLimits

0xae97,	// (0x0002f1a1) main_viewer_pane_g7

0xaea9,	// (0x0002f1b3) main_viewer_pane_g8_ParamLimits

0xaea9,	// (0x0002f1b3) main_viewer_pane_g8

0x0007,

0xf422,	// (0x0003372c) main_viewer_pane_g_ParamLimits

0xf422,	// (0x0003372c) main_viewer_pane_g

0x5a33,	// (0x00029d3d) viewer_content_pane_ParamLimits

0x5a33,	// (0x00029d3d) viewer_content_pane

0x5a66,	// (0x00029d70) main_postcard_pane_g1_ParamLimits

0x5a66,	// (0x00029d70) main_postcard_pane_g1

0x5a7a,	// (0x00029d84) main_postcard_pane_g2_ParamLimits

0x5a7a,	// (0x00029d84) main_postcard_pane_g2

0x5a8e,	// (0x00029d98) main_postcard_pane_g3_ParamLimits

0x5a8e,	// (0x00029d98) main_postcard_pane_g3

0x0005,

0xf433,	// (0x0003373d) main_postcard_pane_g_ParamLimits

0xf433,	// (0x0003373d) main_postcard_pane_g

0x5aa1,	// (0x00029dab) main_postcard_pane_g4

0xbfbe,	// (0x000302c8) smil_status_volume_pane_g2

0x5adc,	// (0x00029de6) postcard_pane_ParamLimits

0x5adc,	// (0x00029de6) postcard_pane

0x5b1c,	// (0x00029e26) postcard_pane_g1_ParamLimits

0x5b1c,	// (0x00029e26) postcard_pane_g1

0x5b2a,	// (0x00029e34) postcard_pane_g2_ParamLimits

0x5b2a,	// (0x00029e34) postcard_pane_g2

0x5b36,	// (0x00029e40) postcard_pane_g3_ParamLimits

0x5b36,	// (0x00029e40) postcard_pane_g3

0x5b42,	// (0x00029e4c) postcard_pane_g4_ParamLimits

0x5b42,	// (0x00029e4c) postcard_pane_g4

0x5b50,	// (0x00029e5a) postcard_pane_g5_ParamLimits

0x5b50,	// (0x00029e5a) postcard_pane_g5

0x5b65,	// (0x00029e6f) postcard_pane_g6_ParamLimits

0x5b65,	// (0x00029e6f) postcard_pane_g6

0x5b1c,	// (0x00029e26) postcard_pane_g7_ParamLimits

0x5b1c,	// (0x00029e26) postcard_pane_g7

0x0006,

0xf440,	// (0x0003374a) postcard_pane_g_ParamLimits

0xf440,	// (0x0003374a) postcard_pane_g

0x5b79,	// (0x00029e83) main_mp2_pane_g1_ParamLimits

0x5b79,	// (0x00029e83) main_mp2_pane_g1

0x5b85,	// (0x00029e8f) main_mp2_pane_g2_ParamLimits

0x5b85,	// (0x00029e8f) main_mp2_pane_g2

0x5b91,	// (0x00029e9b) main_mp2_pane_g3_ParamLimits

0x5b91,	// (0x00029e9b) main_mp2_pane_g3

0x0002,

0xf44f,	// (0x00033759) main_mp2_pane_g_ParamLimits

0xf44f,	// (0x00033759) main_mp2_pane_g

0x5b9d,	// (0x00029ea7) main_mp2_pane_t1_ParamLimits

0x5b9d,	// (0x00029ea7) main_mp2_pane_t1

0x5bb2,	// (0x00029ebc) main_mp2_pane_t2_ParamLimits

0x5bb2,	// (0x00029ebc) main_mp2_pane_t2

0x5bc4,	// (0x00029ece) main_mp2_pane_t3_ParamLimits

0x5bc4,	// (0x00029ece) main_mp2_pane_t3

0x0002,

0xf456,	// (0x00033760) main_mp2_pane_t_ParamLimits

0xf456,	// (0x00033760) main_mp2_pane_t

0x5bd6,	// (0x00029ee0) pec_content_pane_ParamLimits

0x5bd6,	// (0x00029ee0) pec_content_pane

0x3eed,	// (0x000281f7) scroll_pane_cp015

0x5be8,	// (0x00029ef2) pec_attribute_pane_ParamLimits

0x5be8,	// (0x00029ef2) pec_attribute_pane

0x5bf8,	// (0x00029f02) pec_content_pane_g1_ParamLimits

0x5bf8,	// (0x00029f02) pec_content_pane_g1

0x5c04,	// (0x00029f0e) pec_content_pane_t1_ParamLimits

0x5c04,	// (0x00029f0e) pec_content_pane_t1

0x5c16,	// (0x00029f20) pec_content_pane_t2_ParamLimits

0x5c16,	// (0x00029f20) pec_content_pane_t2

0x0001,

0xf45d,	// (0x00033767) pec_content_pane_t_ParamLimits

0xf45d,	// (0x00033767) pec_content_pane_t

0x5c28,	// (0x00029f32) list_single_graphic_pane_cp01_ParamLimits

0x5c28,	// (0x00029f32) list_single_graphic_pane_cp01

0x2e70,	// (0x0002717a) bg_popup_sub_pane_cp04

0x5c3d,	// (0x00029f47) popup_mup_playback_window_g1

0x5c49,	// (0x00029f53) popup_mup_playback_window_t1

0x5c5e,	// (0x00029f68) popup_mup_playback_window_t2

0x0001,

0xf462,	// (0x0003376c) popup_mup_playback_window_t

0x5cb3,	// (0x00029fbd) main_image_pane_g1_ParamLimits

0x5cb3,	// (0x00029fbd) main_image_pane_g1

0x5d8e,	// (0x0002a098) scroll_pane_cp018_ParamLimits

0x5d8e,	// (0x0002a098) scroll_pane_cp018

0x5da6,	// (0x0002a0b0) scroll_pane_cp016_ParamLimits

0x5da6,	// (0x0002a0b0) scroll_pane_cp016

0x5dda,	// (0x0002a0e4) smil2_image_pane_ParamLimits

0x5dda,	// (0x0002a0e4) smil2_image_pane

0x5e02,	// (0x0002a10c) smil2_root_pane_ParamLimits

0x5e02,	// (0x0002a10c) smil2_root_pane

0x5e3a,	// (0x0002a144) smil2_text_pane_ParamLimits

0x5e3a,	// (0x0002a144) smil2_text_pane

0x2c15,	// (0x00026f1f) bg_list_pane_cp06

0x5eae,	// (0x0002a1b8) grid_radio_pane

0x2c15,	// (0x00026f1f) bg_popup_window_pane_cp06

0x5eb6,	// (0x0002a1c0) main_fmradio_pane_t1

0xbe28,	// (0x00030132) heading_pane_cp04

0x5ec4,	// (0x0002a1ce) main_fmradio_pane_t2

0xbe30,	// (0x0003013a) popup_cale_lunar_info_window_g1

0x5ed2,	// (0x0002a1dc) main_fmradio_pane_t3

0xbe38,	// (0x00030142) popup_cale_lunar_info_window_g2

0x5ee0,	// (0x0002a1ea) main_fmradio_pane_t4

0x0001,

0x5eee,	// (0x0002a1f8) main_fmradio_pane_t5

0x0004,

0xf555,	// (0x0003385f) popup_cale_lunar_info_window_g

0xf477,	// (0x00033781) main_fmradio_pane_t

0x5efc,	// (0x0002a206) wait_bar_pane_cp03

0x5f04,	// (0x0002a20e) cell_fmradio_pane_ParamLimits

0x5f04,	// (0x0002a20e) cell_fmradio_pane

0x5b1c,	// (0x00029e26) cell_fmradio_pane_g1_ParamLimits

0x5b1c,	// (0x00029e26) cell_fmradio_pane_g1

0x2c15,	// (0x00026f1f) grid_highlight_pane_cp011

0xaec1,	// (0x0002f1cb) poc_content_pane_ParamLimits

0xaec1,	// (0x0002f1cb) poc_content_pane

0xaed4,	// (0x0002f1de) scroll_pane_cp019

0x5f17,	// (0x0002a221) popup_call_poc_act_window_ParamLimits

0x5f17,	// (0x0002a221) popup_call_poc_act_window

0x5f37,	// (0x0002a241) popup_call_poc_inact_window_ParamLimits

0x5f37,	// (0x0002a241) popup_call_poc_inact_window

0xf519,	// (0x00033823) bg_popup_call_poc_act_pane_g

0xbde8,	// (0x000300f2) bg_popup_call_poc_inact_pane_g1

0xbdf0,	// (0x000300fa) bg_popup_call_poc_inact_pane_g2

0xaedc,	// (0x0002f1e6) popup_call_poc_act_window_g2

0xbdf8,	// (0x00030102) bg_popup_call_poc_inact_pane_g3

0xbd78,	// (0x00030082) bg_popup_call_poc_inact_pane_g4

0xbe00,	// (0x0003010a) bg_popup_call_poc_inact_pane_g5

0xaee4,	// (0x0002f1ee) popup_call_poc_act_window_t1_ParamLimits

0xaee4,	// (0x0002f1ee) popup_call_poc_act_window_t1

0xaf0c,	// (0x0002f216) popup_call_poc_act_window_t2_ParamLimits

0xaf0c,	// (0x0002f216) popup_call_poc_act_window_t2

0xaf34,	// (0x0002f23e) popup_call_poc_act_window_t3_ParamLimits

0xaf34,	// (0x0002f23e) popup_call_poc_act_window_t3

0xaf5c,	// (0x0002f266) popup_call_poc_act_window_t4_ParamLimits

0xaf5c,	// (0x0002f266) popup_call_poc_act_window_t4

0x0003,

0xf482,	// (0x0003378c) popup_call_poc_act_window_t_ParamLimits

0xf482,	// (0x0003378c) popup_call_poc_act_window_t

0xbe08,	// (0x00030112) bg_popup_call_poc_inact_pane_g6

0xbe10,	// (0x0003011a) bg_popup_call_poc_inact_pane_g7

0xbe18,	// (0x00030122) bg_popup_call_poc_inact_pane_g8

0xaf6e,	// (0x0002f278) popup_call_poc_inact_window_g2

0xbe20,	// (0x0003012a) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf530,	// (0x0003383a) bg_popup_call_poc_inact_pane_g

0xaf76,	// (0x0002f280) popup_call_poc_inact_window_t1_ParamLimits

0xaf76,	// (0x0002f280) popup_call_poc_inact_window_t1

0xaf8b,	// (0x0002f295) popup_call_poc_inact_window_t2_ParamLimits

0xaf8b,	// (0x0002f295) popup_call_poc_inact_window_t2

0xafa0,	// (0x0002f2aa) popup_call_poc_inact_window_t3_ParamLimits

0xafa0,	// (0x0002f2aa) popup_call_poc_inact_window_t3

0x0002,

0xf48b,	// (0x00033795) popup_call_poc_inact_window_t_ParamLimits

0xf48b,	// (0x00033795) popup_call_poc_inact_window_t

0xbf36,	// (0x00030240) context_pane_ParamLimits

0x6428,	// (0x0002a732) signal_pane_ParamLimits

0x3793,	// (0x00027a9d) main_call2_pane

0xbf0f,	// (0x00030219) popup_phob_thumbnail2_window_ParamLimits

0xbf0f,	// (0x00030219) popup_phob_thumbnail2_window

0xae7f,	// (0x0002f189) aid_hotspot_pointer_arrow_pane

0xae87,	// (0x0002f191) aid_hotspot_pointer_hand_pane

0x6231,	// (0x0002a53b) phob_pre_status_pane_g5

0x37fc,	// (0x00027b06) cams_zoom_pane_ParamLimits

0x37fc,	// (0x00027b06) image_vga_pane_ParamLimits

0x2f15,	// (0x0002721f) main_camera_pane_g1_ParamLimits

0x2f15,	// (0x0002721f) main_camera_pane_g2_ParamLimits

0x2f15,	// (0x0002721f) main_camera_pane_g3_ParamLimits

0x2f15,	// (0x0002721f) main_camera_pane_g4_ParamLimits

0x2f15,	// (0x0002721f) main_camera_pane_g5_ParamLimits

0x2f15,	// (0x0002721f) main_camera_pane_g6_ParamLimits

0x2f15,	// (0x0002721f) main_camera_pane_g7_ParamLimits

0xf19f,	// (0x000334a9) main_camera_pane_g_ParamLimits

0x380a,	// (0x00027b14) main_camera_pane_t1_ParamLimits

0x380a,	// (0x00027b14) main_camera_pane_t2_ParamLimits

0xf1b0,	// (0x000334ba) main_camera_pane_t_ParamLimits

0x2e70,	// (0x0002717a) bg_popup_preview_window_pane_cp01_ParamLimits

0x2e70,	// (0x0002717a) bg_popup_preview_window_pane_cp01

0xafb5,	// (0x0002f2bf) popup_phob_thumbnail2_window_g1_ParamLimits

0xafb5,	// (0x0002f2bf) popup_phob_thumbnail2_window_g1

0x2c15,	// (0x00026f1f) call2_cli_visual_pane

0x5f63,	// (0x0002a26d) popup_call2_audio_conf_window_ParamLimits

0x5f63,	// (0x0002a26d) popup_call2_audio_conf_window

0x5f81,	// (0x0002a28b) popup_call2_audio_first_window_ParamLimits

0x5f81,	// (0x0002a28b) popup_call2_audio_first_window

0x5ff7,	// (0x0002a301) popup_call2_audio_in_window_ParamLimits

0x5ff7,	// (0x0002a301) popup_call2_audio_in_window

0x602b,	// (0x0002a335) popup_call2_audio_out_window_ParamLimits

0x602b,	// (0x0002a335) popup_call2_audio_out_window

0x607d,	// (0x0002a387) popup_call2_audio_second_window_ParamLimits

0x607d,	// (0x0002a387) popup_call2_audio_second_window

0x60cf,	// (0x0002a3d9) popup_call2_audio_wait_window_ParamLimits

0x60cf,	// (0x0002a3d9) popup_call2_audio_wait_window

0x2c15,	// (0x00026f1f) bg_popup_call2_act_pane_cp03

0x2e52,	// (0x0002715c) list_conf_pane_cp

0xafc1,	// (0x0002f2cb) popup_call2_audio_conf_window_t1

0x5054,	// (0x0002935e) list_single_graphic_popup_conf2_pane_ParamLimits

0x5054,	// (0x0002935e) list_single_graphic_popup_conf2_pane

0x5067,	// (0x00029371) list_highlight_pane_cp04

0xafcf,	// (0x0002f2d9) list_single_graphic_popup_conf2_pane_g1

0x5078,	// (0x00029382) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf492,	// (0x0003379c) list_single_graphic_popup_conf2_pane_g

0xafd7,	// (0x0002f2e1) list_single_graphic_popup_conf2_pane_t1

0xafe5,	// (0x0002f2ef) bg_popup_call2_act_pane_cp01_ParamLimits

0xafe5,	// (0x0002f2ef) bg_popup_call2_act_pane_cp01

0xb06f,	// (0x0002f379) call_type_pane_cp05_ParamLimits

0xb06f,	// (0x0002f379) call_type_pane_cp05

0xb0c3,	// (0x0002f3cd) popup_call2_audio_second_window_g1_ParamLimits

0xb0c3,	// (0x0002f3cd) popup_call2_audio_second_window_g1

0xb117,	// (0x0002f421) popup_call2_audio_second_window_g2_ParamLimits

0xb117,	// (0x0002f421) popup_call2_audio_second_window_g2

0x0002,

0xf497,	// (0x000337a1) popup_call2_audio_second_window_g_ParamLimits

0xf497,	// (0x000337a1) popup_call2_audio_second_window_g

0xb17c,	// (0x0002f486) popup_call2_audio_second_window_t1_ParamLimits

0xb17c,	// (0x0002f486) popup_call2_audio_second_window_t1

0xb237,	// (0x0002f541) popup_call2_audio_second_window_t2_ParamLimits

0xb237,	// (0x0002f541) popup_call2_audio_second_window_t2

0xb28a,	// (0x0002f594) popup_call2_audio_second_window_t3_ParamLimits

0xb28a,	// (0x0002f594) popup_call2_audio_second_window_t3

0x0003,

0xf49e,	// (0x000337a8) popup_call2_audio_second_window_t_ParamLimits

0xf49e,	// (0x000337a8) popup_call2_audio_second_window_t

0x2c15,	// (0x00026f1f) bg_popup_call2_in_pane_cp02

0x2c1f,	// (0x00026f29) call_type_pane_cp04

0x6107,	// (0x0002a411) popup_call2_audio_wait_window_g1

0x610f,	// (0x0002a419) popup_call2_audio_wait_window_g2

0x0001,

0xf4a7,	// (0x000337b1) popup_call2_audio_wait_window_g

0x2c37,	// (0x00026f41) popup_call2_audio_wait_window_t3

0xb37d,	// (0x0002f687) bg_popup_call2_act_pane_ParamLimits

0xb37d,	// (0x0002f687) bg_popup_call2_act_pane

0xb43d,	// (0x0002f747) call_type_pane_cp03_ParamLimits

0xb43d,	// (0x0002f747) call_type_pane_cp03

0xb4a1,	// (0x0002f7ab) popup_call2_audio_first_window_g1_ParamLimits

0xb4a1,	// (0x0002f7ab) popup_call2_audio_first_window_g1

0xb511,	// (0x0002f81b) popup_call2_audio_first_window_g2_ParamLimits

0xb511,	// (0x0002f81b) popup_call2_audio_first_window_g2

0xb575,	// (0x0002f87f) popup_call2_audio_first_window_g3_ParamLimits

0xb575,	// (0x0002f87f) popup_call2_audio_first_window_g3

0x0004,

0xf4ac,	// (0x000337b6) popup_call2_audio_first_window_g_ParamLimits

0xf4ac,	// (0x000337b6) popup_call2_audio_first_window_g

0xb5fd,	// (0x0002f907) popup_call2_audio_first_window_t1_ParamLimits

0xb5fd,	// (0x0002f907) popup_call2_audio_first_window_t1

0xb700,	// (0x0002fa0a) popup_call2_audio_first_window_t4_ParamLimits

0xb700,	// (0x0002fa0a) popup_call2_audio_first_window_t4

0xb7e3,	// (0x0002faed) popup_call2_audio_first_window_t5_ParamLimits

0xb7e3,	// (0x0002faed) popup_call2_audio_first_window_t5

0x0003,

0xf4b7,	// (0x000337c1) popup_call2_audio_first_window_t_ParamLimits

0xf4b7,	// (0x000337c1) popup_call2_audio_first_window_t

0x2e68,	// (0x00027172) bg_popup_call2_act_pane_g1

0xbe40,	// (0x0003014a) popup_cale_lunar_info_window_t1

0xbe4e,	// (0x00030158) popup_cale_lunar_info_window_t2

0xbe5c,	// (0x00030166) popup_cale_lunar_info_window_t3

0x2c15,	// (0x00026f1f) bg_popup_call2_bubble_pane

0xb8e4,	// (0x0002fbee) bg_popup_call2_in_pane_cp01_ParamLimits

0xb8e4,	// (0x0002fbee) bg_popup_call2_in_pane_cp01

0x28cd,	// (0x00026bd7) call_type_pane_cp02

0x6117,	// (0x0002a421) popup_call2_audio_out_window_g1_ParamLimits

0x6117,	// (0x0002a421) popup_call2_audio_out_window_g1

0xb92c,	// (0x0002fc36) popup_call2_audio_out_window_g2_ParamLimits

0xb92c,	// (0x0002fc36) popup_call2_audio_out_window_g2

0x6143,	// (0x0002a44d) popup_call2_audio_out_window_g3_ParamLimits

0x6143,	// (0x0002a44d) popup_call2_audio_out_window_g3

0x0003,

0xf4c0,	// (0x000337ca) popup_call2_audio_out_window_g_ParamLimits

0xf4c0,	// (0x000337ca) popup_call2_audio_out_window_g

0xb963,	// (0x0002fc6d) popup_call2_audio_out_window_t1_ParamLimits

0xb963,	// (0x0002fc6d) popup_call2_audio_out_window_t1

0xb9c2,	// (0x0002fccc) popup_call2_audio_out_window_t2_ParamLimits

0xb9c2,	// (0x0002fccc) popup_call2_audio_out_window_t2

0xba16,	// (0x0002fd20) popup_call2_audio_out_window_t3_ParamLimits

0xba16,	// (0x0002fd20) popup_call2_audio_out_window_t3

0xba2c,	// (0x0002fd36) popup_call2_audio_out_window_t4_ParamLimits

0xba2c,	// (0x0002fd36) popup_call2_audio_out_window_t4

0xba42,	// (0x0002fd4c) popup_call2_audio_out_window_t5_ParamLimits

0xba42,	// (0x0002fd4c) popup_call2_audio_out_window_t5

0x0005,

0xf4c9,	// (0x000337d3) popup_call2_audio_out_window_t_ParamLimits

0xf4c9,	// (0x000337d3) popup_call2_audio_out_window_t

0xbaa6,	// (0x0002fdb0) bg_popup_call2_in_pane_ParamLimits

0xbaa6,	// (0x0002fdb0) bg_popup_call2_in_pane

0xbb02,	// (0x0002fe0c) popup_call2_audio_in_window_g1_ParamLimits

0xbb02,	// (0x0002fe0c) popup_call2_audio_in_window_g1

0xbb3a,	// (0x0002fe44) popup_call2_audio_in_window_g2_ParamLimits

0xbb3a,	// (0x0002fe44) popup_call2_audio_in_window_g2

0xbb72,	// (0x0002fe7c) popup_call2_audio_in_window_g3_ParamLimits

0xbb72,	// (0x0002fe7c) popup_call2_audio_in_window_g3

0x0003,

0xf4d6,	// (0x000337e0) popup_call2_audio_in_window_g_ParamLimits

0xf4d6,	// (0x000337e0) popup_call2_audio_in_window_g

0xbbca,	// (0x0002fed4) popup_call2_audio_in_window_t1_ParamLimits

0xbbca,	// (0x0002fed4) popup_call2_audio_in_window_t1

0xbc4a,	// (0x0002ff54) popup_call2_audio_in_window_t2_ParamLimits

0xbc4a,	// (0x0002ff54) popup_call2_audio_in_window_t2

0xbcca,	// (0x0002ffd4) popup_call2_audio_in_window_t3_ParamLimits

0xbcca,	// (0x0002ffd4) popup_call2_audio_in_window_t3

0xbce4,	// (0x0002ffee) popup_call2_audio_in_window_t4_ParamLimits

0xbce4,	// (0x0002ffee) popup_call2_audio_in_window_t4

0xbcf6,	// (0x00030000) popup_call2_audio_in_window_t5_ParamLimits

0xbcf6,	// (0x00030000) popup_call2_audio_in_window_t5

0xbd0b,	// (0x00030015) popup_call2_audio_in_window_t6_ParamLimits

0xbd0b,	// (0x00030015) popup_call2_audio_in_window_t6

0x0005,

0xf4df,	// (0x000337e9) popup_call2_audio_in_window_t_ParamLimits

0xf4df,	// (0x000337e9) popup_call2_audio_in_window_t

0x2e68,	// (0x00027172) bg_popup_call2_in_pane_g1

0xbe6a,	// (0x00030174) popup_cale_lunar_info_window_t4

0x0003,

0xf55a,	// (0x00033864) popup_cale_lunar_info_window_t

0x2e70,	// (0x0002717a) bg_popup_call2_rect_pane_ParamLimits

0x2e70,	// (0x0002717a) bg_popup_call2_rect_pane

0x2c15,	// (0x00026f1f) call2_cli_visual_graphic_pane

0x2c15,	// (0x00026f1f) call2_cli_visual_text_pane

0xbfd1,	// (0x000302db) smil_status_volume_pane_g3

0x0002,

0x2e88,	// (0x00027192) call2_cli_visual_graphic_pane_g1

0x2e88,	// (0x00027192) call2_cli_visual_graphic_pane_g2

0x2e88,	// (0x00027192) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4ec,	// (0x000337f6) call2_cli_visual_graphic_pane_g

0xbd20,	// (0x0003002a) bg_popup_call2_rect_pane_g1

0x3217,	// (0x00027521) bg_popup_call2_rect_pane_g2

0xbd28,	// (0x00030032) bg_popup_call2_rect_pane_g3

0xbd30,	// (0x0003003a) bg_popup_call2_rect_pane_g4

0xbd38,	// (0x00030042) bg_popup_call2_rect_pane_g5

0xbd40,	// (0x0003004a) bg_popup_call2_rect_pane_g6

0xbd48,	// (0x00030052) bg_popup_call2_rect_pane_g7

0xbd50,	// (0x0003005a) bg_popup_call2_rect_pane_g8

0xbd58,	// (0x00030062) bg_popup_call2_rect_pane_g9

0x0008,

0xf4f3,	// (0x000337fd) bg_popup_call2_rect_pane_g

0xbd60,	// (0x0003006a) bg_popup_call2_bubble_pane_g1

0xbd68,	// (0x00030072) bg_popup_call2_bubble_pane_g2

0xbd70,	// (0x0003007a) bg_popup_call2_bubble_pane_g3

0xbd78,	// (0x00030082) bg_popup_call2_bubble_pane_g4

0xbd80,	// (0x0003008a) bg_popup_call2_bubble_pane_g5

0xbd88,	// (0x00030092) bg_popup_call2_bubble_pane_g6

0xbd90,	// (0x0003009a) bg_popup_call2_bubble_pane_g7

0xbd98,	// (0x000300a2) bg_popup_call2_bubble_pane_g8

0xbda0,	// (0x000300aa) bg_popup_call2_bubble_pane_g9

0x0008,

0xf506,	// (0x00033810) bg_popup_call2_bubble_pane_g

0x32b3,	// (0x000275bd) aid_cale_week_size_cell_pane

0x381e,	// (0x00027b28) aid_cams_cif_uncrop_pane_ParamLimits

0x381e,	// (0x00027b28) aid_cams_cif_uncrop_pane

0x3998,	// (0x00027ca2) aid_cams_size_cell_ParamLimits

0x3998,	// (0x00027ca2) aid_cams_size_cell

0x39ac,	// (0x00027cb6) grid_cams_pane_ParamLimits

0x39c1,	// (0x00027ccb) linegrid_cams_pane_ParamLimits

0x3b18,	// (0x00027e22) call_video_pane_t1

0x3b32,	// (0x00027e3c) call_video_pane_t2

0x0001,

0xf1fc,	// (0x00033506) call_video_pane_t

0x4129,	// (0x00028433) aid_cale_month_size_cell_pane_ParamLimits

0x4129,	// (0x00028433) aid_cale_month_size_cell_pane

0xf59e,	// (0x000338a8) smil_status_volume_pane_g

0xbfde,	// (0x000302e8) volume_smil_pane_ParamLimits

0xacab,	// (0x0002efb5) aid_popup2_width_pane

0x316f,	// (0x00027479) cell_qdial_pane_g4_ParamLimits

0x316f,	// (0x00027479) cell_qdial_pane_g4

0x533a,	// (0x00029644) aid_blid_cardinal_pane_ParamLimits

0x5346,	// (0x00029650) aid_blid_destination_pane_ParamLimits

0x5346,	// (0x00029650) aid_blid_destination_pane

0x2e70,	// (0x0002717a) bg_popup_call_poc_act_pane_ParamLimits

0x2e70,	// (0x0002717a) bg_popup_call_poc_act_pane

0x2e70,	// (0x0002717a) bg_popup_call_poc_inact_pane_ParamLimits

0x2e70,	// (0x0002717a) bg_popup_call_poc_inact_pane

0xbda8,	// (0x000300b2) bg_popup_call_poc_act_pane_g1

0xbdb0,	// (0x000300ba) bg_popup_call_poc_act_pane_g2

0xbdb8,	// (0x000300c2) bg_popup_call_poc_act_pane_g3

0xbd78,	// (0x00030082) bg_popup_call_poc_act_pane_g4

0xbd80,	// (0x0003008a) bg_popup_call_poc_act_pane_g5

0xbdc0,	// (0x000300ca) bg_popup_call_poc_act_pane_g6

0xbd90,	// (0x0003009a) bg_popup_call_poc_act_pane_g7

0xbdc8,	// (0x000300d2) bg_popup_call_poc_act_pane_g8

0x2c15,	// (0x00026f1f) main_usb_pane

0xbeee,	// (0x000301f8) popup_cale_lunar_info_window

0x3dd5,	// (0x000280df) im_reading_pane_t1_ParamLimits

0x3e0b,	// (0x00028115) list_im_pane_ParamLimits

0x3e1c,	// (0x00028126) scroll_pane_cp07_ParamLimits

0x2c15,	// (0x00026f1f) grid_highlight_pane_cp012

0x2e70,	// (0x0002717a) mup_scale_pane_ParamLimits

0x5b1c,	// (0x00029e26) main_usb_pane_g1_ParamLimits

0x5b1c,	// (0x00029e26) main_usb_pane_g1

0x6191,	// (0x0002a49b) main_usb_pane_g2_ParamLimits

0x6191,	// (0x0002a49b) main_usb_pane_g2

0x0001,

0xf543,	// (0x0003384d) main_usb_pane_g_ParamLimits

0xf543,	// (0x0003384d) main_usb_pane_g

0x61a5,	// (0x0002a4af) main_usb_pane_t1_ParamLimits

0x61a5,	// (0x0002a4af) main_usb_pane_t1

0x61b7,	// (0x0002a4c1) main_usb_pane_t2_ParamLimits

0x61b7,	// (0x0002a4c1) main_usb_pane_t2

0x61c9,	// (0x0002a4d3) main_usb_pane_t3_ParamLimits

0x61c9,	// (0x0002a4d3) main_usb_pane_t3

0x61db,	// (0x0002a4e5) main_usb_pane_t4_ParamLimits

0x61db,	// (0x0002a4e5) main_usb_pane_t4

0x61ed,	// (0x0002a4f7) main_usb_pane_t5_ParamLimits

0x61ed,	// (0x0002a4f7) main_usb_pane_t5

0x61ff,	// (0x0002a509) main_usb_pane_t6_ParamLimits

0x61ff,	// (0x0002a509) main_usb_pane_t6

0x0005,

0xf548,	// (0x00033852) main_usb_pane_t_ParamLimits

0x52d4,	// (0x000295de) aid_text_placing

0x52e6,	// (0x000295f0) main_location2_pane_t1_ParamLimits

0x52fc,	// (0x00029606) main_location2_pane_t2_ParamLimits

0x5312,	// (0x0002961c) main_location2_pane_t3_ParamLimits

0x5328,	// (0x00029632) main_location2_pane_t4_ParamLimits

0x5328,	// (0x00029632) main_location2_pane_t4

0xf34f,	// (0x00033659) main_location2_pane_t_ParamLimits

0x2ec0,	// (0x000271ca) find_pinb_pane_g2_ParamLimits

0x2ec0,	// (0x000271ca) find_pinb_pane_g2

0x0001,

0xf0b4,	// (0x000333be) find_pinb_pane_g_ParamLimits

0xf0b4,	// (0x000333be) find_pinb_pane_g

0x2ecc,	// (0x000271d6) find_pinb_pane_t1_ParamLimits

0x2ede,	// (0x000271e8) find_pinb_pane_t2_ParamLimits

0xf0b9,	// (0x000333c3) find_pinb_pane_t_ParamLimits

0x2c15,	// (0x00026f1f) main_call3_pane

0x4563,	// (0x0002886d) cale_month_day_heading_pane_t1_ParamLimits

0x45e9,	// (0x000288f3) cale_month_day_heading_pane_t2_ParamLimits

0x467a,	// (0x00028984) cale_month_day_heading_pane_t3_ParamLimits

0x470b,	// (0x00028a15) cale_month_day_heading_pane_t4_ParamLimits

0x479c,	// (0x00028aa6) cale_month_day_heading_pane_t5_ParamLimits

0x482d,	// (0x00028b37) cale_month_day_heading_pane_t6_ParamLimits

0x48be,	// (0x00028bc8) cale_month_day_heading_pane_t7_ParamLimits

0xf234,	// (0x0003353e) cale_month_day_heading_pane_t_ParamLimits

0x4b04,	// (0x00028e0e) smil_status_volume_pane

0x5af8,	// (0x00029e02) postcard_address_pane_ParamLimits

0x5af8,	// (0x00029e02) postcard_address_pane

0x5b0a,	// (0x00029e14) postcard_message_pane_ParamLimits

0x5b0a,	// (0x00029e14) postcard_message_pane

0x616f,	// (0x0002a479) call2_cli_visual_pane_t1_ParamLimits

0x616f,	// (0x0002a479) call2_cli_visual_pane_t1

0xc00b,	// (0x00030315) postcard_message_pane_t1_ParamLimits

0xc00b,	// (0x00030315) postcard_message_pane_t1

0xbff3,	// (0x000302fd) postcard_address_pane_t1_ParamLimits

0xbff3,	// (0x000302fd) postcard_address_pane_t1

0x65d4,	// (0x0002a8de) popup_call3_audio_in_window_ParamLimits

0x65d4,	// (0x0002a8de) popup_call3_audio_in_window

0x6463,	// (0x0002a76d) bg_popup_call3_in_pane_ParamLimits

0x6463,	// (0x0002a76d) bg_popup_call3_in_pane

0x64d5,	// (0x0002a7df) popup_call3_audio_in_window_g1_ParamLimits

0x64d5,	// (0x0002a7df) popup_call3_audio_in_window_g1

0x64f5,	// (0x0002a7ff) popup_call3_audio_in_window_g2_ParamLimits

0x64f5,	// (0x0002a7ff) popup_call3_audio_in_window_g2

0x6515,	// (0x0002a81f) popup_call3_audio_in_window_g3_ParamLimits

0x6515,	// (0x0002a81f) popup_call3_audio_in_window_g3

0x0003,

0xf5a5,	// (0x000338af) popup_call3_audio_in_window_g_ParamLimits

0xf5a5,	// (0x000338af) popup_call3_audio_in_window_g

0x6546,	// (0x0002a850) popup_call3_audio_in_window_t1_ParamLimits

0x6546,	// (0x0002a850) popup_call3_audio_in_window_t1

0x6584,	// (0x0002a88e) popup_call3_audio_in_window_t2_ParamLimits

0x6584,	// (0x0002a88e) popup_call3_audio_in_window_t2

0x65c2,	// (0x0002a8cc) popup_call3_audio_in_window_t3_ParamLimits

0x65c2,	// (0x0002a8cc) popup_call3_audio_in_window_t3

0x0002,

0xf5ae,	// (0x000338b8) popup_call3_audio_in_window_t_ParamLimits

0xf5ae,	// (0x000338b8) popup_call3_audio_in_window_t

0x3793,	// (0x00027a9d) bg_popup_call3_rect_pane

0xbd20,	// (0x0003002a) bg_popup_call3_rect_pane_g1

0x3217,	// (0x00027521) bg_popup_call3_rect_pane_g2

0xbd28,	// (0x00030032) bg_popup_call3_rect_pane_g3

0xbd30,	// (0x0003003a) bg_popup_call3_rect_pane_g4

0xbd38,	// (0x00030042) bg_popup_call3_rect_pane_g5

0xbd40,	// (0x0003004a) bg_popup_call3_rect_pane_g6

0xbd48,	// (0x00030052) bg_popup_call3_rect_pane_g7

0x2767,	// (0x00026a71) mup_visualizer_osc_pane

0x2767,	// (0x00026a71) mup_visualizer_spec_pane

0x6493,	// (0x0002a79d) call3_video_qcif_pane_ParamLimits

0x6493,	// (0x0002a79d) call3_video_qcif_pane

0x64a4,	// (0x0002a7ae) call3_video_qcif_uncrop_pane_ParamLimits

0x64a4,	// (0x0002a7ae) call3_video_qcif_uncrop_pane

0x64b0,	// (0x0002a7ba) call3_video_subqcif_pane_ParamLimits

0x64b0,	// (0x0002a7ba) call3_video_subqcif_pane

0x64c4,	// (0x0002a7ce) call3_video_subqcif_uncrop_pane_ParamLimits

0x64c4,	// (0x0002a7ce) call3_video_subqcif_uncrop_pane

0x6535,	// (0x0002a83f) popup_call3_audio_in_window_g4_ParamLimits

0x6535,	// (0x0002a83f) popup_call3_audio_in_window_g4

0x2767,	// (0x00026a71) mup_spec_half_pane

0x2767,	// (0x00026a71) mup_spec_half_pane_cp

0x2767,	// (0x00026a71) mup_osc_middle_pane

0x398e,	// (0x00027c98) mup_visualizer_osc_pane_g1

0xbf84,	// (0x0003028e) mup_spec_bar_pane_ParamLimits

0xbf84,	// (0x0003028e) mup_spec_bar_pane

0x398e,	// (0x00027c98) mup_spec_bar_pane_g1

0x398e,	// (0x00027c98) mup_spec_bar_pane_g2

0x0001,

0xf3c9,	// (0x000336d3) mup_spec_bar_pane_g

0x32b3,	// (0x000275bd) aid_cale_week_size_cell_pane_ParamLimits

0x32cd,	// (0x000275d7) bg_cale_heading_pane_ParamLimits

0x32e5,	// (0x000275ef) bg_cale_pane_cp01_ParamLimits

0x3302,	// (0x0002760c) cale_week_corner_pane_ParamLimits

0x3321,	// (0x0002762b) cale_week_day_heading_pane_ParamLimits

0x333e,	// (0x00027648) cale_week_scroll_pane_g1_ParamLimits

0x3351,	// (0x0002765b) cale_week_scroll_pane_g2_ParamLimits

0x3369,	// (0x00027673) cale_week_scroll_pane_g3_ParamLimits

0x3381,	// (0x0002768b) cale_week_scroll_pane_g4_ParamLimits

0x3399,	// (0x000276a3) cale_week_scroll_pane_g5_ParamLimits

0x33b1,	// (0x000276bb) cale_week_scroll_pane_g6_ParamLimits

0x33c9,	// (0x000276d3) cale_week_scroll_pane_g7_ParamLimits

0x33e1,	// (0x000276eb) cale_week_scroll_pane_g8_ParamLimits

0x33fd,	// (0x00027707) cale_week_scroll_pane_g9_ParamLimits

0x3415,	// (0x0002771f) cale_week_scroll_pane_g10_ParamLimits

0x342d,	// (0x00027737) cale_week_scroll_pane_g11_ParamLimits

0x3445,	// (0x0002774f) cale_week_scroll_pane_g12_ParamLimits

0x345d,	// (0x00027767) cale_week_scroll_pane_g13_ParamLimits

0x3475,	// (0x0002777f) cale_week_scroll_pane_g14_ParamLimits

0x348d,	// (0x00027797) cale_week_scroll_pane_g15_ParamLimits

0xf145,	// (0x0003344f) cale_week_scroll_pane_g_ParamLimits

0x34c1,	// (0x000277cb) cale_week_time_pane_ParamLimits

0x34dd,	// (0x000277e7) grid_cale_week_pane_ParamLimits

0x34fb,	// (0x00027805) listscroll_cale_week_pane_t1

0x350d,	// (0x00027817) scroll_pane_cp08_ParamLimits

0x41ab,	// (0x000284b5) cale_month_corner_pane_ParamLimits

0x4507,	// (0x00028811) cale_month_pane_t1

0x4519,	// (0x00028823) cale_month_week_pane_ParamLimits

0x4f66,	// (0x00029270) popup_call_status_window_g1_ParamLimits

0x4f7a,	// (0x00029284) popup_call_status_window_g2_ParamLimits

0x4f8e,	// (0x00029298) popup_call_status_window_g3_ParamLimits

0xf2d6,	// (0x000335e0) popup_call_status_window_g_ParamLimits

0x4ff4,	// (0x000292fe) aid_call2_pane

0x595b,	// (0x00029c65) msg_header_pane_g1

0x5af8,	// (0x00029e02) postcard_address2_pane_ParamLimits

0x5af8,	// (0x00029e02) postcard_address2_pane

0x5b0a,	// (0x00029e14) postcard_message2_pane_ParamLimits

0x5b0a,	// (0x00029e14) postcard_message2_pane

0x6436,	// (0x0002a740) message2_row_pane_ParamLimits

0x6436,	// (0x0002a740) message2_row_pane

0x6450,	// (0x0002a75a) address2_row_pane_ParamLimits

0x6450,	// (0x0002a75a) address2_row_pane

0xbf51,	// (0x0003025b) postcard_message2_row_pane_g1

0xbf59,	// (0x00030263) postcard_message2_row_pane_t1

0xbf51,	// (0x0003025b) address2_row_pane_g1

0xbf59,	// (0x00030263) address2_row_pane_t1

0x378b,	// (0x00027a95) aid_size_cell_vorec

0x2c15,	// (0x00026f1f) main_rss_pane

0xbf67,	// (0x00030271) rss_list_single_pane_ParamLimits

0xbf67,	// (0x00030271) rss_list_single_pane

0xbf75,	// (0x0003027f) rss_list_single_pane_t1

0xbf75,	// (0x0003027f) rss_list_single_pane_t2

0x0001,

0xf599,	// (0x000338a3) rss_list_single_pane_t

0x2c15,	// (0x00026f1f) main_camera2_pane

0x2c15,	// (0x00026f1f) main_video2_pane

0xc027,	// (0x00030331) cams_zoom_pane_cp2_ParamLimits

0xc027,	// (0x00030331) cams_zoom_pane_cp2

0xc027,	// (0x00030331) image2_vga_pane_ParamLimits

0xc027,	// (0x00030331) image2_vga_pane

0xc035,	// (0x0003033f) main_camera2_pane_g1_ParamLimits

0xc035,	// (0x0003033f) main_camera2_pane_g1

0xc035,	// (0x0003033f) main_camera2_pane_g2_ParamLimits

0xc035,	// (0x0003033f) main_camera2_pane_g2

0xc035,	// (0x0003033f) main_camera2_pane_g3_ParamLimits

0xc035,	// (0x0003033f) main_camera2_pane_g3

0xc035,	// (0x0003033f) main_camera2_pane_g4_ParamLimits

0xc035,	// (0x0003033f) main_camera2_pane_g4

0xc035,	// (0x0003033f) main_camera2_pane_g5_ParamLimits

0xc035,	// (0x0003033f) main_camera2_pane_g5

0xc035,	// (0x0003033f) main_camera2_pane_g6_ParamLimits

0xc035,	// (0x0003033f) main_camera2_pane_g6

0xc035,	// (0x0003033f) main_camera2_pane_g7_ParamLimits

0xc035,	// (0x0003033f) main_camera2_pane_g7

0xc035,	// (0x0003033f) main_camera2_pane_g8_ParamLimits

0xc035,	// (0x0003033f) main_camera2_pane_g8

0x0008,

0xf5b5,	// (0x000338bf) main_camera2_pane_g_ParamLimits

0xf5b5,	// (0x000338bf) main_camera2_pane_g

0x1bc5,	// (0x00025ecf) main_camera2_pane_t1_ParamLimits

0x1bc5,	// (0x00025ecf) main_camera2_pane_t1

0x1bc5,	// (0x00025ecf) main_camera2_pane_t2_ParamLimits

0x1bc5,	// (0x00025ecf) main_camera2_pane_t2

0x1bc5,	// (0x00025ecf) main_camera2_pane_t3_ParamLimits

0x1bc5,	// (0x00025ecf) main_camera2_pane_t3

0x1bc5,	// (0x00025ecf) main_camera2_pane_t4_ParamLimits

0x1bc5,	// (0x00025ecf) main_camera2_pane_t4

0x0006,

0xf5c8,	// (0x000338d2) main_camera2_pane_t_ParamLimits

0xf5c8,	// (0x000338d2) main_camera2_pane_t

0xc079,	// (0x00030383) cams_zoom_pane_cp4_ParamLimits

0xc079,	// (0x00030383) cams_zoom_pane_cp4

0x1bd9,	// (0x00025ee3) image2_cif_pane_ParamLimits

0x1bd9,	// (0x00025ee3) image2_cif_pane

0xacec,	// (0x0002eff6) image2_subqcif_pane_ParamLimits

0xacec,	// (0x0002eff6) image2_subqcif_pane

0x1be7,	// (0x00025ef1) main_video2_pane_g1_ParamLimits

0x1be7,	// (0x00025ef1) main_video2_pane_g1

0x1be7,	// (0x00025ef1) main_video2_pane_g2_ParamLimits

0x1be7,	// (0x00025ef1) main_video2_pane_g2

0x1be7,	// (0x00025ef1) main_video2_pane_g3_ParamLimits

0x1be7,	// (0x00025ef1) main_video2_pane_g3

0x1be7,	// (0x00025ef1) main_video2_pane_g4_ParamLimits

0x1be7,	// (0x00025ef1) main_video2_pane_g4

0x1be7,	// (0x00025ef1) main_video2_pane_g5_ParamLimits

0x1be7,	// (0x00025ef1) main_video2_pane_g5

0x1be7,	// (0x00025ef1) main_video2_pane_g6_ParamLimits

0x1be7,	// (0x00025ef1) main_video2_pane_g6

0x0005,

0xf5d7,	// (0x000338e1) main_video2_pane_g_ParamLimits

0xf5d7,	// (0x000338e1) main_video2_pane_g

0x1bf5,	// (0x00025eff) main_video2_pane_t1_ParamLimits

0x1bf5,	// (0x00025eff) main_video2_pane_t1

0x1bf5,	// (0x00025eff) main_video2_pane_t2_ParamLimits

0x1bf5,	// (0x00025eff) main_video2_pane_t2

0x1bf5,	// (0x00025eff) main_video2_pane_t3_ParamLimits

0x1bf5,	// (0x00025eff) main_video2_pane_t3

0x0002,

0xf5e4,	// (0x000338ee) main_video2_pane_t_ParamLimits

0xf5e4,	// (0x000338ee) main_video2_pane_t

0x628b,	// (0x0002a595) call_muted_g2

0x0001,

0xf58b,	// (0x00033895) call_muted_g

0x2c15,	// (0x00026f1f) main_mup2_pane

0x566a,	// (0x00029974) main_mup2_pane_g1_ParamLimits

0x566a,	// (0x00029974) main_mup2_pane_g1

0x566a,	// (0x00029974) main_mup2_pane_g2_ParamLimits

0x566a,	// (0x00029974) main_mup2_pane_g2

0xc171,	// (0x0003047b) main_mup_pane_g13_cp1

0xacfa,	// (0x0002f004) mup_volume_pane_cp1

0x566a,	// (0x00029974) main_mup2_pane_g4_ParamLimits

0x566a,	// (0x00029974) main_mup2_pane_g4

0x566a,	// (0x00029974) main_mup2_pane_g5_ParamLimits

0x566a,	// (0x00029974) main_mup2_pane_g5

0x566a,	// (0x00029974) main_mup2_pane_g6_ParamLimits

0x566a,	// (0x00029974) main_mup2_pane_g6

0x566a,	// (0x00029974) main_mup2_pane_g7_ParamLimits

0x566a,	// (0x00029974) main_mup2_pane_g7

0x0006,

0xf5eb,	// (0x000338f5) main_mup2_pane_g_ParamLimits

0xf5eb,	// (0x000338f5) main_mup2_pane_g

0x5678,	// (0x00029982) main_mup2_pane_t1_ParamLimits

0x5678,	// (0x00029982) main_mup2_pane_t1

0x5678,	// (0x00029982) main_mup2_pane_t2_ParamLimits

0x5678,	// (0x00029982) main_mup2_pane_t2

0x5678,	// (0x00029982) main_mup2_pane_t3_ParamLimits

0x5678,	// (0x00029982) main_mup2_pane_t3

0x5678,	// (0x00029982) main_mup2_pane_t4_ParamLimits

0x5678,	// (0x00029982) main_mup2_pane_t4

0x5678,	// (0x00029982) main_mup2_pane_t5_ParamLimits

0x5678,	// (0x00029982) main_mup2_pane_t5

0x5678,	// (0x00029982) main_mup2_pane_t6_ParamLimits

0x5678,	// (0x00029982) main_mup2_pane_t6

0x0005,

0xf5fa,	// (0x00033904) main_mup2_pane_t_ParamLimits

0xf5fa,	// (0x00033904) main_mup2_pane_t

0x56a0,	// (0x000299aa) mup2_visualizer_pane_ParamLimits

0x56a0,	// (0x000299aa) mup2_visualizer_pane

0x56a0,	// (0x000299aa) mup_progress_pane_cp_ParamLimits

0x56a0,	// (0x000299aa) mup_progress_pane_cp

0xc152,	// (0x0003045c) mup_volume_pane_cp_ParamLimits

0xc152,	// (0x0003045c) mup_volume_pane_cp

0x2f15,	// (0x0002721f) mup2_visualizer_pane_g1_ParamLimits

0x2f15,	// (0x0002721f) mup2_visualizer_pane_g1

0x2f23,	// (0x0002722d) mup2_visualizer_pane_g2_ParamLimits

0x2f23,	// (0x0002722d) mup2_visualizer_pane_g2

0x2f23,	// (0x0002722d) mup2_visualizer_pane_g3_ParamLimits

0x2f23,	// (0x0002722d) mup2_visualizer_pane_g3

0x0002,

0xf0be,	// (0x000333c8) mup2_visualizer_pane_g_ParamLimits

0xf0be,	// (0x000333c8) mup2_visualizer_pane_g

0x5ea6,	// (0x0002a1b0) aid_size_cell_fmradio

0x1955,	// (0x00025c5f) aid_height_parent_landcape

0x3ed4,	// (0x000281de) wml_content_pane_cp

0x3edc,	// (0x000281e6) wml_tabs_pane

0x3ee5,	// (0x000281ef) popup_wml_miniature_window

0x3eed,	// (0x000281f7) scroll_pane_cp021

0x3f01,	// (0x0002820b) wml_content_pane_comp8

0x2c15,	// (0x00026f1f) bg_popup_sub_pane_cp05

0xc09d,	// (0x000303a7) popup_wml_miniature_window_g1

0xc0a5,	// (0x000303af) wml_miniature_view_pane

0x65e6,	// (0x0002a8f0) aid_size_wml_view

0x65ee,	// (0x0002a8f8) wml_miniature_view_pane_g1

0x65f7,	// (0x0002a901) wml_miniature_view_pane_g2

0x6600,	// (0x0002a90a) wml_miniature_view_pane_g3

0x6608,	// (0x0002a912) wml_miniature_view_pane_g4

0x6610,	// (0x0002a91a) wml_miniature_view_pane_g5

0x6618,	// (0x0002a922) wml_miniature_view_pane_g6

0x6620,	// (0x0002a92a) wml_miniature_view_pane_g7

0x6628,	// (0x0002a932) wml_miniature_view_pane_g8

0x0007,

0xf607,	// (0x00033911) wml_miniature_view_pane_g

0xc0ad,	// (0x000303b7) background_graphic_ParamLimits

0xc0ad,	// (0x000303b7) background_graphic

0xc0b9,	// (0x000303c3) wml_tabs_2_pane

0xc0c2,	// (0x000303cc) wml_tabs_3_pane_ParamLimits

0xc0c2,	// (0x000303cc) wml_tabs_3_pane

0xc0d4,	// (0x000303de) wml_tabs_4_pane_ParamLimits

0xc0d4,	// (0x000303de) wml_tabs_4_pane

0xc0ea,	// (0x000303f4) wml_tabs_5_pane_ParamLimits

0xc0ea,	// (0x000303f4) wml_tabs_5_pane

0xc104,	// (0x0003040e) wml_tabs_pane_g2_ParamLimits

0xc104,	// (0x0003040e) wml_tabs_pane_g2

0xc119,	// (0x00030423) wml_tabs_pane_g3_ParamLimits

0xc119,	// (0x00030423) wml_tabs_pane_g3

0xc12e,	// (0x00030438) wml_tabs_2_active_pane_ParamLimits

0xc12e,	// (0x00030438) wml_tabs_2_active_pane

0xc12e,	// (0x00030438) wml_tabs_2_passive_pane_ParamLimits

0xc12e,	// (0x00030438) wml_tabs_2_passive_pane

0x6630,	// (0x0002a93a) wml_tabs_3_active_pane_cp_ParamLimits

0x6630,	// (0x0002a93a) wml_tabs_3_active_pane_cp

0x6641,	// (0x0002a94b) wml_tabs_3_passive_pane_ParamLimits

0x6641,	// (0x0002a94b) wml_tabs_3_passive_pane

0x6652,	// (0x0002a95c) wml_tabs_3_passive_pane_cp_ParamLimits

0x6652,	// (0x0002a95c) wml_tabs_3_passive_pane_cp

0x6663,	// (0x0002a96d) tabs_4_active_pane

0x666b,	// (0x0002a975) tabs_4_passive_pane

0x6673,	// (0x0002a97d) tabs_4_passive_pane_cp

0x667b,	// (0x0002a985) tabs_4_passive_pane_cp2

0x6189,	// (0x0002a493) aid_height_text

0x56a0,	// (0x000299aa) mup_volume_cont_pane_ParamLimits

0x56a0,	// (0x000299aa) mup_volume_cont_pane

0x2e92,	// (0x0002719c) aid_size_cell_pinb

0x2767,	// (0x00026a71) aid_size_list_pinb

0x56a0,	// (0x000299aa) mup2_volume_cont_pane_ParamLimits

0x56a0,	// (0x000299aa) mup2_volume_cont_pane

0xc13c,	// (0x00030446) mup2_volume_cont_pane_g1_ParamLimits

0xc13c,	// (0x00030446) mup2_volume_cont_pane_g1

0x1453,	// (0x0002575d) aid_size_cell_touch_ParamLimits

0x1453,	// (0x0002575d) aid_size_cell_touch

0x1603,	// (0x0002590d) touch_pane_ParamLimits

0x1603,	// (0x0002590d) touch_pane

0xacfa,	// (0x0002f004) main_rss2_pane

0xc17b,	// (0x00030485) listscroll_rss2_pane

0xc184,	// (0x0003048e) rss2_navigation_pane

0xc18c,	// (0x00030496) list_rss2_pane

0x501f,	// (0x00029329) scroll_pane_cp22

0xc194,	// (0x0003049e) rss2_navigation_pane_g1

0xc19d,	// (0x000304a7) rss2_navigation_pane_g2

0xc1a5,	// (0x000304af) rss2_navigation_pane_g3

0x0002,

0xf618,	// (0x00033922) rss2_navigation_pane_g

0xc1ad,	// (0x000304b7) rss2_navigation_pane_t1

0x6683,	// (0x0002a98d) rss2_list_single_pane_ParamLimits

0x6683,	// (0x0002a98d) rss2_list_single_pane

0xc1bb,	// (0x000304c5) rss2_list_single_pane_t2

0xc1c9,	// (0x000304d3) rss2_list_single_pane_t3_ParamLimits

0xc1c9,	// (0x000304d3) rss2_list_single_pane_t3

0xc1e6,	// (0x000304f0) rss2_list_single_pane_t4

0x4aee,	// (0x00028df8) smil_status_pane_g1

0xacec,	// (0x0002eff6) main_image2_pane_ParamLimits

0xacec,	// (0x0002eff6) main_image2_pane

0xc035,	// (0x0003033f) main_camera2_pane_g9_ParamLimits

0xc035,	// (0x0003033f) main_camera2_pane_g9

0x1bc5,	// (0x00025ecf) main_camera2_pane_t5_ParamLimits

0x1bc5,	// (0x00025ecf) main_camera2_pane_t5

0xc043,	// (0x0003034d) main_camera2_pane_t6_ParamLimits

0xc043,	// (0x0003034d) main_camera2_pane_t6

0x6697,	// (0x0002a9a1) main_image2_pane_g1_ParamLimits

0x6697,	// (0x0002a9a1) main_image2_pane_g1

0x5e68,	// (0x0002a172) smil2_video_pane_ParamLimits

0x5e68,	// (0x0002a172) smil2_video_pane

0xacb3,	// (0x0002efbd) aid_zoom_text_primary_cp

0xace4,	// (0x0002efee) popup_preview_fixed_window

0x3dcd,	// (0x000280d7) im_reading_pane_g1

0x1bb7,	// (0x00025ec1) cams2_bc_adjust_pane_cp_ParamLimits

0x1bb7,	// (0x00025ec1) cams2_bc_adjust_pane_cp

0xc06b,	// (0x00030375) cams2_bc_adjust_pane_ParamLimits

0xc06b,	// (0x00030375) cams2_bc_adjust_pane

0xc171,	// (0x0003047b) cams2_bc_adjust_pane_g1

0xacfa,	// (0x0002f004) cams2_slider_pane

0xc171,	// (0x0003047b) cams2_slider_pane_g1

0xc171,	// (0x0003047b) cams2_slider_pane_g2

0x0006,

0xf61f,	// (0x00033929) cams2_slider_pane_g

0x1669,	// (0x00025973) calc_display_pane_ParamLimits

0x1685,	// (0x0002598f) calc_paper_pane_ParamLimits

0x16a6,	// (0x000259b0) grid_calc_pane_ParamLimits

0xae50,	// (0x0002f15a) popup_clock_digital_window_t1_ParamLimits

0x5d01,	// (0x0002a00b) main_image_pane_t1

0x164b,	// (0x00025955) aid_size_cell_calc_ParamLimits

0x164b,	// (0x00025955) aid_size_cell_calc

0x1995,	// (0x00025c9f) popup_blid_sat_info2_window_ParamLimits

0x1995,	// (0x00025c9f) popup_blid_sat_info2_window

0xc1f4,	// (0x000304fe) aid_size_cell_blid

0xc1fc,	// (0x00030506) bg_popup_window_pane_cp07

0xc21f,	// (0x00030529) grid_popup_blid_pane

0xc227,	// (0x00030531) heading_pane_cp05_ParamLimits

0xc227,	// (0x00030531) heading_pane_cp05

0xc2ef,	// (0x000305f9) cell_popup_blid_pane_ParamLimits

0xc2ef,	// (0x000305f9) cell_popup_blid_pane

0xc30f,	// (0x00030619) cell_popup_blid_pane_g1

0xc317,	// (0x00030621) cell_popup_blid_pane_t1

0x56a0,	// (0x000299aa) mup2_indicator_pane_ParamLimits

0x56a0,	// (0x000299aa) mup2_indicator_pane

0x2767,	// (0x00026a71) mup2_visualizer_osc_pane

0xc087,	// (0x00030391) mup2_visualizer_spec_pane_ParamLimits

0xc087,	// (0x00030391) mup2_visualizer_spec_pane

0x2767,	// (0x00026a71) mup2_spec_half_pane

0x2767,	// (0x00026a71) mup2_spec_half_pane_cp

0xc325,	// (0x0003062f) mup2_spec_bar_pane_ParamLimits

0xc325,	// (0x0003062f) mup2_spec_bar_pane

0x398e,	// (0x00027c98) mup2_spec_bar_pane_g1

0xc344,	// (0x0003064e) mup2_spec_bar_pane_g2

0x0001,

0xf645,	// (0x0003394f) mup2_spec_bar_pane_g

0x2767,	// (0x00026a71) mup2_osc_middle_pane

0x398e,	// (0x00027c98) mup2_visualizer_osc_pane_g1

0x27cc,	// (0x00026ad6) popup_number_entry_window_t1_ParamLimits

0x27df,	// (0x00026ae9) popup_number_entry_window_t2_ParamLimits

0x27f1,	// (0x00026afb) popup_number_entry_window_t3_ParamLimits

0x2803,	// (0x00026b0d) popup_number_entry_window_t5_ParamLimits

0x2803,	// (0x00026b0d) popup_number_entry_window_t5

0xf05f,	// (0x00033369) popup_number_entry_window_t_ParamLimits

0x2837,	// (0x00026b41) text_title_cp2_ParamLimits

0xae8f,	// (0x0002f199) aid_hotspot_pointer_text2_pane

0xaeb5,	// (0x0002f1bf) main_viewer_pane_g9_ParamLimits

0xaeb5,	// (0x0002f1bf) main_viewer_pane_g9

0x4507,	// (0x00028811) cale_month_pane_t1_ParamLimits

0x4b5e,	// (0x00028e68) bg_cale_pane_ParamLimits

0x4b76,	// (0x00028e80) list_cale_pane_ParamLimits

0x4b87,	// (0x00028e91) listscroll_cale_day_pane_t1

0x4b99,	// (0x00028ea3) scroll_pane_cp09_ParamLimits

0x5707,	// (0x00029a11) main_mup_eq_pane_t1_ParamLimits

0x5707,	// (0x00029a11) main_mup_eq_pane_t1

0x571f,	// (0x00029a29) main_mup_eq_pane_t2_ParamLimits

0x571f,	// (0x00029a29) main_mup_eq_pane_t2

0x5735,	// (0x00029a3f) main_mup_eq_pane_t3_ParamLimits

0x5735,	// (0x00029a3f) main_mup_eq_pane_t3

0x574b,	// (0x00029a55) main_mup_eq_pane_t4_ParamLimits

0x574b,	// (0x00029a55) main_mup_eq_pane_t4

0x5761,	// (0x00029a6b) main_mup_eq_pane_t5_ParamLimits

0x5761,	// (0x00029a6b) main_mup_eq_pane_t5

0x5777,	// (0x00029a81) main_mup_eq_pane_t6_ParamLimits

0x5777,	// (0x00029a81) main_mup_eq_pane_t6

0x5789,	// (0x00029a93) main_mup_eq_pane_t7_ParamLimits

0x5789,	// (0x00029a93) main_mup_eq_pane_t7

0x579b,	// (0x00029aa5) main_mup_eq_pane_t8_ParamLimits

0x579b,	// (0x00029aa5) main_mup_eq_pane_t8

0x57ad,	// (0x00029ab7) main_mup_eq_pane_t9_ParamLimits

0x57ad,	// (0x00029ab7) main_mup_eq_pane_t9

0x57c3,	// (0x00029acd) main_mup_eq_pane_t10_ParamLimits

0x57c3,	// (0x00029acd) main_mup_eq_pane_t10

0x0009,

0xf3d5,	// (0x000336df) main_mup_eq_pane_t_ParamLimits

0xf3d5,	// (0x000336df) main_mup_eq_pane_t

0x5856,	// (0x00029b60) mup_equalizer_pane_cp5_ParamLimits

0x5868,	// (0x00029b72) mup_equalizer_pane_cp6_ParamLimits

0x587a,	// (0x00029b84) mup_equalizer_pane_cp7_ParamLimits

0xacfa,	// (0x0002f004) main_gallery_pane

0xbfa3,	// (0x000302ad) smil2_volume_pane

0xbfab,	// (0x000302b5) smil_status_volume_pane_g1_ParamLimits

0xbfbe,	// (0x000302c8) smil_status_volume_pane_g2_ParamLimits

0xbfd1,	// (0x000302db) smil_status_volume_pane_g3_ParamLimits

0xf59e,	// (0x000338a8) smil_status_volume_pane_g_ParamLimits

0xc1fc,	// (0x00030506) bg_popup_window_pane_cp07_ParamLimits

0xc20a,	// (0x00030514) blid_firmament_pane

0x37fc,	// (0x00027b06) aid_size_cell_gallery_ParamLimits

0x37fc,	// (0x00027b06) aid_size_cell_gallery

0x66ab,	// (0x0002a9b5) grid_gallery_pane_ParamLimits

0x66ab,	// (0x0002a9b5) grid_gallery_pane

0x66c1,	// (0x0002a9cb) cell_gallery_pane_ParamLimits

0x66c1,	// (0x0002a9cb) cell_gallery_pane

0x37fc,	// (0x00027b06) bg_cell_gallery_focus_pane_ParamLimits

0x37fc,	// (0x00027b06) bg_cell_gallery_focus_pane

0x2f15,	// (0x0002721f) cell_gallery_pane_g1_ParamLimits

0x2f15,	// (0x0002721f) cell_gallery_pane_g1

0x2f15,	// (0x0002721f) cell_gallery_pane_g2_ParamLimits

0x2f15,	// (0x0002721f) cell_gallery_pane_g2

0x2f15,	// (0x0002721f) cell_gallery_pane_g3_ParamLimits

0x2f15,	// (0x0002721f) cell_gallery_pane_g3

0x2f23,	// (0x0002722d) cell_gallery_pane_g4_ParamLimits

0x2f23,	// (0x0002722d) cell_gallery_pane_g4

0x0003,

0xf64a,	// (0x00033954) cell_gallery_pane_g_ParamLimits

0xf64a,	// (0x00033954) cell_gallery_pane_g

0xc34e,	// (0x00030658) bg_cell_gallery_focus_pane_g1

0xc356,	// (0x00030660) bg_cell_gallery_focus_pane_g2

0xc35e,	// (0x00030668) bg_cell_gallery_focus_pane_g3

0xc366,	// (0x00030670) bg_cell_gallery_focus_pane_g4

0xc36e,	// (0x00030678) bg_cell_gallery_focus_pane_g5

0xc376,	// (0x00030680) bg_cell_gallery_focus_pane_g6

0xc37e,	// (0x00030688) bg_cell_gallery_focus_pane_g7

0xc386,	// (0x00030690) bg_cell_gallery_focus_pane_g8

0x0007,

0xf653,	// (0x0003395d) bg_cell_gallery_focus_pane_g

0xc38e,	// (0x00030698) aid_firma_cardinal

0xc3a2,	// (0x000306ac) blid_firmament_pane_t1

0xc3b9,	// (0x000306c3) blid_firmament_pane_t2

0xc3d0,	// (0x000306da) blid_firmament_pane_t3

0xc3e7,	// (0x000306f1) blid_firmament_pane_t4

0x0003,

0xf664,	// (0x0003396e) blid_firmament_pane_t

0xc3fe,	// (0x00030708) blid_sat_info_pane

0x398e,	// (0x00027c98) blid_sat_info_pane_g1

0x398e,	// (0x00027c98) blid_sat_info_pane_g2

0x0001,

0xf3c9,	// (0x000336d3) blid_sat_info_pane_g

0xc40e,	// (0x00030718) blid_sat_info_pane_t1

0xc41c,	// (0x00030726) smil2_volume_content_pane

0xc425,	// (0x0003072f) smil2_volume_pane_g1

0xc42d,	// (0x00030737) smil2_volume_content_pane_g1

0xc436,	// (0x00030740) smil2_volume_content_pane_g2

0xc43f,	// (0x00030749) smil2_volume_content_pane_g3

0xc448,	// (0x00030752) smil2_volume_content_pane_g4

0xc451,	// (0x0003075b) smil2_volume_content_pane_g5

0xc45a,	// (0x00030764) smil2_volume_content_pane_g6

0xc463,	// (0x0003076d) smil2_volume_content_pane_g7

0xc46c,	// (0x00030776) smil2_volume_content_pane_g8

0xc475,	// (0x0003077f) smil2_volume_content_pane_g9

0xc47e,	// (0x00030788) smil2_volume_content_pane_g10

0x0009,

0xf66d,	// (0x00033977) smil2_volume_content_pane_g

0x35a0,	// (0x000278aa) cale_week_day_heading_pane_t1_ParamLimits

0x35ca,	// (0x000278d4) cale_week_day_heading_pane_t2_ParamLimits

0x35f9,	// (0x00027903) cale_week_day_heading_pane_t3_ParamLimits

0x3628,	// (0x00027932) cale_week_day_heading_pane_t4_ParamLimits

0x3657,	// (0x00027961) cale_week_day_heading_pane_t5_ParamLimits

0x3686,	// (0x00027990) cale_week_day_heading_pane_t6_ParamLimits

0x36b5,	// (0x000279bf) cale_week_day_heading_pane_t7_ParamLimits

0xf166,	// (0x00033470) cale_week_day_heading_pane_t_ParamLimits

0x36df,	// (0x000279e9) bg_cale_side_pane_ParamLimits

0x1735,	// (0x00025a3f) cale_week_time_pane_t1_ParamLimits

0x176f,	// (0x00025a79) cale_week_time_pane_t2_ParamLimits

0x17a9,	// (0x00025ab3) cale_week_time_pane_t3_ParamLimits

0x17e3,	// (0x00025aed) cale_week_time_pane_t4_ParamLimits

0x181d,	// (0x00025b27) cale_week_time_pane_t5_ParamLimits

0x1857,	// (0x00025b61) cale_week_time_pane_t6_ParamLimits

0x1891,	// (0x00025b9b) cale_week_time_pane_t7_ParamLimits

0x18cb,	// (0x00025bd5) cale_week_time_pane_t8_ParamLimits

0xf175,	// (0x0003347f) cale_week_time_pane_t_ParamLimits

0x36ed,	// (0x000279f7) cell_cale_week_pane_g2_ParamLimits

0x36df,	// (0x000279e9) bg_cale_side_pane_cp01_ParamLimits

0x4953,	// (0x00028c5d) cale_month_week_pane_t1_ParamLimits

0x496c,	// (0x00028c76) cale_month_week_pane_t2_ParamLimits

0x4985,	// (0x00028c8f) cale_month_week_pane_t3_ParamLimits

0x499e,	// (0x00028ca8) cale_month_week_pane_t4_ParamLimits

0x49b7,	// (0x00028cc1) cale_month_week_pane_t5_ParamLimits

0x49d0,	// (0x00028cda) cale_month_week_pane_t6_ParamLimits

0xf243,	// (0x0003354d) cale_month_week_pane_t_ParamLimits

0xadd0,	// (0x0002f0da) cell_cale_month_pane_g1_ParamLimits

0xacfa,	// (0x0002f004) main_cale_event_viewer_pane

0x2767,	// (0x00026a71) listscroll_cale_event_viewer_pane

0xc487,	// (0x00030791) list_cale_ev_pane

0xc48f,	// (0x00030799) scroll_pane_cp023

0x66e1,	// (0x0002a9eb) field_cale_ev_pane_ParamLimits

0x66e1,	// (0x0002a9eb) field_cale_ev_pane

0xc49b,	// (0x000307a5) field_cale_ev_content_pane_ParamLimits

0xc49b,	// (0x000307a5) field_cale_ev_content_pane

0xc4a7,	// (0x000307b1) field_cale_ev_pane_g1_ParamLimits

0xc4a7,	// (0x000307b1) field_cale_ev_pane_g1

0xc4b3,	// (0x000307bd) field_cale_ev_pane_g2_ParamLimits

0xc4b3,	// (0x000307bd) field_cale_ev_pane_g2

0xc4cb,	// (0x000307d5) field_cale_ev_pane_g3_ParamLimits

0xc4cb,	// (0x000307d5) field_cale_ev_pane_g3

0x0002,

0xf682,	// (0x0003398c) field_cale_ev_pane_g_ParamLimits

0xf682,	// (0x0003398c) field_cale_ev_pane_g

0xc4e3,	// (0x000307ed) field_cale_ev_pane_t1_ParamLimits

0xc4e3,	// (0x000307ed) field_cale_ev_pane_t1

0x3232,	// (0x0002753c) field_cale_ev_content_pane_t1_ParamLimits

0x3232,	// (0x0002753c) field_cale_ev_content_pane_t1

0x5949,	// (0x00029c53) bg_button_pane_cp01

0x329a,	// (0x000275a4) listscroll_cale_week_pane_ParamLimits

0x32aa,	// (0x000275b4) popup_toolbar_window_cp01

0x34fb,	// (0x00027805) listscroll_cale_week_pane_t1_ParamLimits

0x329a,	// (0x000275a4) listscroll_cale_day_pane_ParamLimits

0x32aa,	// (0x000275b4) popup_toolbar_window_cp02

0x4b87,	// (0x00028e91) listscroll_cale_day_pane_t1_ParamLimits

0x195d,	// (0x00025c67) main_cale_month_pane_ParamLimits

0xbf21,	// (0x0003022b) popup_toolbar_window_cp03_ParamLimits

0xbf21,	// (0x0003022b) popup_toolbar_window_cp03

0x5cdf,	// (0x00029fe9) main_image_pane_g2_ParamLimits

0x5cdf,	// (0x00029fe9) main_image_pane_g2

0x5cf0,	// (0x00029ffa) main_image_pane_g3_ParamLimits

0x5cf0,	// (0x00029ffa) main_image_pane_g3

0x0002,

0xf467,	// (0x00033771) main_image_pane_g_ParamLimits

0xf467,	// (0x00033771) main_image_pane_g

0x5d01,	// (0x0002a00b) main_image_pane_t1_ParamLimits

0x5d18,	// (0x0002a022) main_image_pane_t2_ParamLimits

0x5d18,	// (0x0002a022) main_image_pane_t2

0x5d2a,	// (0x0002a034) main_image_pane_t3_ParamLimits

0x5d2a,	// (0x0002a034) main_image_pane_t3

0x5d52,	// (0x0002a05c) main_image_pane_t4_ParamLimits

0x5d52,	// (0x0002a05c) main_image_pane_t4

0x0003,

0xf46e,	// (0x00033778) main_image_pane_t_ParamLimits

0xf46e,	// (0x00033778) main_image_pane_t

0x5d72,	// (0x0002a07c) popup_image_details_window_cp01

0x5d7a,	// (0x0002a084) popup_toobar_trans_pane_cp01_ParamLimits

0x5d7a,	// (0x0002a084) popup_toobar_trans_pane_cp01

0x1a5e,	// (0x00025d68) popup_image_details_window_ParamLimits

0x1a5e,	// (0x00025d68) popup_image_details_window

0xbef6,	// (0x00030200) popup_image_focus_window

0xc027,	// (0x00030331) camera2_autofocus_pane_ParamLimits

0xc027,	// (0x00030331) camera2_autofocus_pane

0x2767,	// (0x00026a71) bg_popup_sub_pane_cp06

0xc4fa,	// (0x00030804) popup_image_focus_window_g1

0xc502,	// (0x0003080c) popup_image_focus_window_g2

0xc50a,	// (0x00030814) popup_image_focus_window_g3

0xc512,	// (0x0003081c) popup_image_focus_window_g4

0x0003,

0xf689,	// (0x00033993) popup_image_focus_window_g

0xc51a,	// (0x00030824) popup_image_focus_window_t1

0xc528,	// (0x00030832) popup_image_focus_window_t2

0xc537,	// (0x00030841) popup_image_focus_window_t3

0x0002,

0xf692,	// (0x0003399c) popup_image_focus_window_t

0x2f15,	// (0x0002721f) camera2_autofocus_pane_g1

0x37fc,	// (0x00027b06) bg_tb_trans_pane_cp01

0xc545,	// (0x0003084f) popup_image_details_window_g1

0xc558,	// (0x00030862) popup_image_details_window_g2

0x0002,

0xf6a4,	// (0x000339ae) popup_image_details_window_g

0xc581,	// (0x0003088b) popup_image_details_window_t1

0xc593,	// (0x0003089d) popup_image_details_window_t2

0xc5ac,	// (0x000308b6) popup_image_details_window_t3

0xc5c0,	// (0x000308ca) popup_image_details_window_t4

0xc5db,	// (0x000308e5) popup_image_details_window_t5

0x0004,

0xf6ab,	// (0x000339b5) popup_image_details_window_t

0x304b,	// (0x00027355) bg_calc_paper_pane_ParamLimits

0xacfa,	// (0x0002f004) grid_highlight_pane_cp013

0xad0c,	// (0x0002f016) list_calc_pane_ParamLimits

0xad1e,	// (0x0002f028) scroll_pane_cp024

0x3063,	// (0x0002736d) bg_calc_display_pane_ParamLimits

0xad26,	// (0x0002f030) calc_display_pane_t1_ParamLimits

0xad3b,	// (0x0002f045) calc_display_pane_t2_ParamLimits

0xad50,	// (0x0002f05a) calc_display_pane_t3_ParamLimits

0xf0e6,	// (0x000333f0) calc_display_pane_t_ParamLimits

0x170b,	// (0x00025a15) cell_calc_pane_g2

0x0001,

0xf103,	// (0x0003340d) cell_calc_pane_g

0x1714,	// (0x00025a1e) cell_calc_pane_t1

0x3108,	// (0x00027412) grid_highlight_pane_cp02_ParamLimits

0x311e,	// (0x00027428) toolbar_button_pane_cp01_ParamLimits

0x311e,	// (0x00027428) toolbar_button_pane_cp01

0x5dbc,	// (0x0002a0c6) temp_image_control_pane_ParamLimits

0x5dbc,	// (0x0002a0c6) temp_image_control_pane

0xacec,	// (0x0002eff6) main_mp3_pane

0xc5f5,	// (0x000308ff) temp_image_control_pane_g1_ParamLimits

0xc5f5,	// (0x000308ff) temp_image_control_pane_g1

0xc603,	// (0x0003090d) temp_image_control_pane_g2_ParamLimits

0xc603,	// (0x0003090d) temp_image_control_pane_g2

0xc615,	// (0x0003091f) temp_image_control_pane_g3_ParamLimits

0xc615,	// (0x0003091f) temp_image_control_pane_g3

0x66fb,	// (0x0002aa05) temp_image_control_pane_g4_ParamLimits

0x66fb,	// (0x0002aa05) temp_image_control_pane_g4

0x0003,

0xf6b6,	// (0x000339c0) temp_image_control_pane_g_ParamLimits

0xf6b6,	// (0x000339c0) temp_image_control_pane_g

0xc5f5,	// (0x000308ff) main_mp3_pane_g1

0x670c,	// (0x0002aa16) main_mp3_pane_g2

0x0007,

0xf6bf,	// (0x000339c9) main_mp3_pane_g

0xc64a,	// (0x00030954) main_mp3_pane_t1

0x2f23,	// (0x0002722d) main_camera_pane_g8_ParamLimits

0x2f23,	// (0x0002722d) main_camera_pane_g8

0x393c,	// (0x00027c46) main_video_pane_g7_ParamLimits

0x393c,	// (0x00027c46) main_video_pane_g7

0xc057,	// (0x00030361) main_camera2_pane_t7_ParamLimits

0xc057,	// (0x00030361) main_camera2_pane_t7

0x3e94,	// (0x0002819e) scroll_pane_cp025_ParamLimits

0x3e94,	// (0x0002819e) scroll_pane_cp025

0x3ea8,	// (0x000281b2) scroll_pane_cp026_ParamLimits

0x3ea8,	// (0x000281b2) scroll_pane_cp026

0x3eb7,	// (0x000281c1) wml_content_pane_ParamLimits

0xacfa,	// (0x0002f004) main_touch_calib_pane

0x67ce,	// (0x0002aad8) main_touch_calib_pane_g1

0x67e0,	// (0x0002aaea) main_touch_calib_pane_g2

0x67f2,	// (0x0002aafc) main_touch_calib_pane_g3

0x6804,	// (0x0002ab0e) main_touch_calib_pane_g4

0x0003,

0xf6dd,	// (0x000339e7) main_touch_calib_pane_g

0x6816,	// (0x0002ab20) main_touch_calib_pane_t1

0x682e,	// (0x0002ab38) main_touch_calib_pane_t2

0x0004,

0xf6e6,	// (0x000339f0) main_touch_calib_pane_t

0x5413,	// (0x0002971d) mup_progress_pane_cp02

0x5448,	// (0x00029752) navi_pane_g1

0x54f0,	// (0x000297fa) navi_pane_mp_t3

0xacec,	// (0x0002eff6) main_mp3_pane_ParamLimits

0x63e7,	// (0x0002a6f1) navi_pane_ParamLimits

0xc5f5,	// (0x000308ff) main_mp3_pane_g1_ParamLimits

0x670c,	// (0x0002aa16) main_mp3_pane_g2_ParamLimits

0x6718,	// (0x0002aa22) main_mp3_pane_g3_ParamLimits

0x6718,	// (0x0002aa22) main_mp3_pane_g3

0x6724,	// (0x0002aa2e) main_mp3_pane_g4_ParamLimits

0x6724,	// (0x0002aa2e) main_mp3_pane_g4

0x2f15,	// (0x0002721f) main_mp3_pane_g5_ParamLimits

0x2f15,	// (0x0002721f) main_mp3_pane_g5

0xc625,	// (0x0003092f) main_mp3_pane_g6_ParamLimits

0xc625,	// (0x0003092f) main_mp3_pane_g6

0xc632,	// (0x0003093c) main_mp3_pane_g7_ParamLimits

0xc632,	// (0x0003093c) main_mp3_pane_g7

0xc63e,	// (0x00030948) main_mp3_pane_g8_ParamLimits

0xc63e,	// (0x00030948) main_mp3_pane_g8

0xf6bf,	// (0x000339c9) main_mp3_pane_g_ParamLimits

0x6730,	// (0x0002aa3a) main_mp3_pane_t2

0x673e,	// (0x0002aa48) main_mp3_pane_t3

0xc658,	// (0x00030962) main_mp3_pane_t4

0xc666,	// (0x00030970) main_mp3_pane_t5

0x0005,

0xf6d0,	// (0x000339da) main_mp3_pane_t

0xc674,	// (0x0003097e) mup_progress_pane_cp01

0xacb3,	// (0x0002efbd) aid_zoom_text_secondary2

0xc487,	// (0x00030791) list_cale_ev2_pane

0xc48f,	// (0x00030799) scroll_pane_cp023_ParamLimits

0x687c,	// (0x0002ab86) field_cale_ev2_pane_ParamLimits

0x687c,	// (0x0002ab86) field_cale_ev2_pane

0xc67c,	// (0x00030986) field_cale_ev2_pane_g1_ParamLimits

0xc67c,	// (0x00030986) field_cale_ev2_pane_g1

0xc688,	// (0x00030992) field_cale_ev2_pane_g2_ParamLimits

0xc688,	// (0x00030992) field_cale_ev2_pane_g2

0xc6a0,	// (0x000309aa) field_cale_ev2_pane_g3_ParamLimits

0xc6a0,	// (0x000309aa) field_cale_ev2_pane_g3

0x0003,

0xf6f1,	// (0x000339fb) field_cale_ev2_pane_g_ParamLimits

0xf6f1,	// (0x000339fb) field_cale_ev2_pane_g

0xc6c4,	// (0x000309ce) field_cale_ev2_pane_t1_ParamLimits

0xc6c4,	// (0x000309ce) field_cale_ev2_pane_t1

0xc6db,	// (0x000309e5) field_cale_ev2_pane_t2_ParamLimits

0xc6db,	// (0x000309e5) field_cale_ev2_pane_t2

0x0001,

0xf6fa,	// (0x00033a04) field_cale_ev2_pane_t_ParamLimits

0xf6fa,	// (0x00033a04) field_cale_ev2_pane_t

0x5ab4,	// (0x00029dbe) main_postcard_pane_g5_ParamLimits

0x5ab4,	// (0x00029dbe) main_postcard_pane_g5

0x5ac8,	// (0x00029dd2) main_postcard_pane_g6_ParamLimits

0x5ac8,	// (0x00029dd2) main_postcard_pane_g6

0x37fc,	// (0x00027b06) camera2_autofocus_pane_cp_ParamLimits

0x37fc,	// (0x00027b06) camera2_autofocus_pane_cp

0xacec,	// (0x0002eff6) main_mup3_pane

0x68d2,	// (0x0002abdc) main_mup3_pane_g1_ParamLimits

0x68d2,	// (0x0002abdc) main_mup3_pane_g1

0x68f4,	// (0x0002abfe) main_mup3_pane_g2_ParamLimits

0x68f4,	// (0x0002abfe) main_mup3_pane_g2

0x6967,	// (0x0002ac71) main_mup3_pane_g3_ParamLimits

0x6967,	// (0x0002ac71) main_mup3_pane_g3

0x69a5,	// (0x0002acaf) main_mup3_pane_g4_ParamLimits

0x69a5,	// (0x0002acaf) main_mup3_pane_g4

0x69e3,	// (0x0002aced) main_mup3_pane_g5_ParamLimits

0x69e3,	// (0x0002aced) main_mup3_pane_g5

0x6a21,	// (0x0002ad2b) main_mup3_pane_g6_ParamLimits

0x6a21,	// (0x0002ad2b) main_mup3_pane_g6

0x2f23,	// (0x0002722d) main_mup3_pane_g7_ParamLimits

0x2f23,	// (0x0002722d) main_mup3_pane_g7

0x0007,

0xf70a,	// (0x00033a14) main_mup3_pane_g_ParamLimits

0xf70a,	// (0x00033a14) main_mup3_pane_g

0x6a97,	// (0x0002ada1) main_mup3_pane_t1_ParamLimits

0x6a97,	// (0x0002ada1) main_mup3_pane_t1

0x6afd,	// (0x0002ae07) main_mup3_pane_t2_ParamLimits

0x6afd,	// (0x0002ae07) main_mup3_pane_t2

0x6bc3,	// (0x0002aecd) main_mup3_pane_t4_ParamLimits

0x6bc3,	// (0x0002aecd) main_mup3_pane_t4

0x6c11,	// (0x0002af1b) main_mup3_pane_t5_ParamLimits

0x6c11,	// (0x0002af1b) main_mup3_pane_t5

0x6cbf,	// (0x0002afc9) main_mup3_pane_t6_ParamLimits

0x6cbf,	// (0x0002afc9) main_mup3_pane_t6

0x0005,

0xf71b,	// (0x00033a25) main_mup3_pane_t_ParamLimits

0xf71b,	// (0x00033a25) main_mup3_pane_t

0x6d73,	// (0x0002b07d) mup3_progress_pane_ParamLimits

0x6d73,	// (0x0002b07d) mup3_progress_pane

0x6def,	// (0x0002b0f9) popup_mup3_control_window_ParamLimits

0x6def,	// (0x0002b0f9) popup_mup3_control_window

0xc6f0,	// (0x000309fa) popup_mup3_text_window

0x6e1d,	// (0x0002b127) mup3_progress_pane_t1

0x6e3b,	// (0x0002b145) mup3_progress_pane_t2

0xc6f8,	// (0x00030a02) mup3_progress_pane_t3

0x0002,

0xf728,	// (0x00033a32) mup3_progress_pane_t

0xc715,	// (0x00030a1f) mup_progress_pane_cp03

0x2767,	// (0x00026a71) bg_tb_trans_pane_cp04

0x6e59,	// (0x0002b163) mup3_volume_pane

0x6e61,	// (0x0002b16b) popup_mup3_control_window_g1

0x6e6a,	// (0x0002b174) mup3_volume_pane_g1

0x6e73,	// (0x0002b17d) mup3_volume_pane_g2

0x6e7c,	// (0x0002b186) mup3_volume_pane_g3

0x0002,

0xf72f,	// (0x00033a39) mup3_volume_pane_g

0x2767,	// (0x00026a71) bg_tb_trans_pane_cp03

0xc725,	// (0x00030a2f) popup_mup3_text_window_g1

0xc72d,	// (0x00030a37) popup_mup3_text_window_t1

0x30fb,	// (0x00027405) list_calc_item_pane_g1_ParamLimits

0xc168,	// (0x00030472) mup_volume_pane_cp_g1

0x6846,	// (0x0002ab50) main_touch_calib_pane_t3

0x6858,	// (0x0002ab62) main_touch_calib_pane_t4

0x686a,	// (0x0002ab74) main_touch_calib_pane_t5

0xaca3,	// (0x0002efad) aid_cell_size_toolbar2

0xacab,	// (0x0002efb5) aid_popup3_width_pane

0xacb3,	// (0x0002efbd) aid_zoom_text_msg_primary

0x37db,	// (0x00027ae5) vorec_t7

0x306f,	// (0x00027379) bg_calc_paper_pane_g1_ParamLimits

0x307b,	// (0x00027385) bg_calc_paper_pane_g2_ParamLimits

0x3087,	// (0x00027391) bg_calc_paper_pane_g3_ParamLimits

0x3093,	// (0x0002739d) bg_calc_paper_pane_g4_ParamLimits

0x309f,	// (0x000273a9) bg_calc_paper_pane_g5_ParamLimits

0x30ab,	// (0x000273b5) bg_calc_paper_pane_g6_ParamLimits

0x30ba,	// (0x000273c4) bg_calc_paper_pane_g7_ParamLimits

0x30c9,	// (0x000273d3) bg_calc_paper_pane_g8_ParamLimits

0xf0ed,	// (0x000333f7) bg_calc_paper_pane_g_ParamLimits

0x30d8,	// (0x000273e2) calc_bg_paper_pane_g9_ParamLimits

0x37fc,	// (0x00027b06) image_qvga_pane_ParamLimits

0x37fc,	// (0x00027b06) image_qvga_pane

0x2e70,	// (0x0002717a) bg_popup_sub_pane_cp04_ParamLimits

0x5c3d,	// (0x00029f47) popup_mup_playback_window_g1_ParamLimits

0x5c49,	// (0x00029f53) popup_mup_playback_window_t1_ParamLimits

0x5c5e,	// (0x00029f68) popup_mup_playback_window_t2_ParamLimits

0xf462,	// (0x0003376c) popup_mup_playback_window_t_ParamLimits

0x2f23,	// (0x0002722d) main_mup2_pane_g3_ParamLimits

0x2f23,	// (0x0002722d) main_mup2_pane_g3

0x3bb9,	// (0x00027ec3) popup_toolbar_window_cp04

0xb16b,	// (0x0002f475) popup_call2_audio_second_window_g3_ParamLimits

0xb16b,	// (0x0002f475) popup_call2_audio_second_window_g3

0xb583,	// (0x0002f88d) popup_call2_audio_first_window_g4_ParamLimits

0xb583,	// (0x0002f88d) popup_call2_audio_first_window_g4

0xbbaa,	// (0x0002feb4) popup_call2_audio_in_window_g4_ParamLimits

0xbbaa,	// (0x0002feb4) popup_call2_audio_in_window_g4

0x5c73,	// (0x00029f7d) aid_area_sk_bg_cut_ParamLimits

0x5c73,	// (0x00029f7d) aid_area_sk_bg_cut

0x5c91,	// (0x00029f9b) aid_area_sk_bg_cut_2_ParamLimits

0x5c91,	// (0x00029f9b) aid_area_sk_bg_cut_2

0x2767,	// (0x00026a71) aid_placing_details_win

0x2767,	// (0x00026a71) aid_placing_details_win_2

0x2f15,	// (0x0002721f) camera2_autofocus_pane_g1_ParamLimits

0x15ac,	// (0x000258b6) popup_fixed_preview_cale_window_ParamLimits

0x15ac,	// (0x000258b6) popup_fixed_preview_cale_window

0x55ac,	// (0x000298b6) navi_slider_pane_g3

0x55b5,	// (0x000298bf) navi_slider_pane_g4

0x55be,	// (0x000298c8) navi_slider_pane_g5

0x55ac,	// (0x000298b6) navi_slider_pane_g6

0xae76,	// (0x0002f180) navi_slider_pane_g7

0x5897,	// (0x00029ba1) mup_scale_pane_g3

0x58a0,	// (0x00029baa) mup_scale_pane_g4

0x58a9,	// (0x00029bb3) mup_scale_pane_g5

0x58b2,	// (0x00029bbc) mup_scale_pane_g6

0x58bb,	// (0x00029bc5) mup_scale_pane_g7

0xc171,	// (0x0003047b) cams2_slider_pane_g3

0xc171,	// (0x0003047b) cams2_slider_pane_g4

0xc171,	// (0x0003047b) cams2_slider_pane_g5

0xc171,	// (0x0003047b) cams2_slider_pane_g6

0xc171,	// (0x0003047b) cams2_slider_pane_g7

0x398e,	// (0x00027c98) camera2_autofocus_pane_cp_g1

0xbed0,	// (0x000301da) bg_popup_preview_window_pane_cp02_ParamLimits

0xbed0,	// (0x000301da) bg_popup_preview_window_pane_cp02

0xc73b,	// (0x00030a45) list_fp_cale_pane_ParamLimits

0xc73b,	// (0x00030a45) list_fp_cale_pane

0xc747,	// (0x00030a51) popup_fixed_preview_cale_window_t1_ParamLimits

0xc747,	// (0x00030a51) popup_fixed_preview_cale_window_t1

0x6e85,	// (0x0002b18f) popup_fixed_preview_cale_window_t2_ParamLimits

0x6e85,	// (0x0002b18f) popup_fixed_preview_cale_window_t2

0x6e9a,	// (0x0002b1a4) popup_fixed_preview_cale_window_t3_ParamLimits

0x6e9a,	// (0x0002b1a4) popup_fixed_preview_cale_window_t3

0x0002,

0xf736,	// (0x00033a40) popup_fixed_preview_cale_window_t_ParamLimits

0xf736,	// (0x00033a40) popup_fixed_preview_cale_window_t

0x6eaf,	// (0x0002b1b9) list_single_fp_cale_pane_ParamLimits

0x6eaf,	// (0x0002b1b9) list_single_fp_cale_pane

0xc765,	// (0x00030a6f) list_single_fp_cale_pane_g1_ParamLimits

0xc765,	// (0x00030a6f) list_single_fp_cale_pane_g1

0xc771,	// (0x00030a7b) list_single_fp_cale_pane_g2_ParamLimits

0xc771,	// (0x00030a7b) list_single_fp_cale_pane_g2

0x0002,

0xf73d,	// (0x00033a47) list_single_fp_cale_pane_g_ParamLimits

0xf73d,	// (0x00033a47) list_single_fp_cale_pane_g

0xc78a,	// (0x00030a94) list_single_fp_cale_pane_t1_ParamLimits

0xc78a,	// (0x00030a94) list_single_fp_cale_pane_t1

0xc79c,	// (0x00030aa6) list_single_fp_cale_pane_t2_ParamLimits

0xc79c,	// (0x00030aa6) list_single_fp_cale_pane_t2

0x0001,

0xf744,	// (0x00033a4e) list_single_fp_cale_pane_t_ParamLimits

0xf744,	// (0x00033a4e) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xacfa,	// (0x0002f004) main_dialer_pane

0x6ec3,	// (0x0002b1cd) aid_cell_size_keypad

0x2767,	// (0x00026a71) dialer_ne_pane

0x2767,	// (0x00026a71) grid_dialer_command_1_pane

0x2767,	// (0x00026a71) grid_dialer_command_2_pane

0x2767,	// (0x00026a71) grid_dialer_keypad_pane

0x6ecd,	// (0x0002b1d7) bg_popup_call_pane_cp06_ParamLimits

0x6ecd,	// (0x0002b1d7) bg_popup_call_pane_cp06

0x6ecd,	// (0x0002b1d7) dialer_ne_clear_pane_ParamLimits

0x6ecd,	// (0x0002b1d7) dialer_ne_clear_pane

0x398e,	// (0x00027c98) dialer_ne_pane_g1

0x568c,	// (0x00029996) dialer_ne_pane_t1_ParamLimits

0x568c,	// (0x00029996) dialer_ne_pane_t1

0x6edb,	// (0x0002b1e5) dialer_ne_pane_t2_ParamLimits

0x6edb,	// (0x0002b1e5) dialer_ne_pane_t2

0x6f03,	// (0x0002b20d) dialer_ne_pane_t3_ParamLimits

0x6f03,	// (0x0002b20d) dialer_ne_pane_t3

0x0002,

0xf749,	// (0x00033a53) dialer_ne_pane_t_ParamLimits

0xf749,	// (0x00033a53) dialer_ne_pane_t

0x6f03,	// (0x0002b20d) dialer_ne_pane_t3_copy1_ParamLimits

0x6f03,	// (0x0002b20d) dialer_ne_pane_t3_copy1

0x6f30,	// (0x0002b23a) cell_dialer_keypad_pane_ParamLimits

0x6f30,	// (0x0002b23a) cell_dialer_keypad_pane

0x6f45,	// (0x0002b24f) cell_dialer_command_1_pane_ParamLimits

0x6f45,	// (0x0002b24f) cell_dialer_command_1_pane

0x6f56,	// (0x0002b260) cell_dialer_command_2_pane_ParamLimits

0x6f56,	// (0x0002b260) cell_dialer_command_2_pane

0x37fc,	// (0x00027b06) bg_button_pane_cp02_ParamLimits

0x37fc,	// (0x00027b06) bg_button_pane_cp02

0x2f15,	// (0x0002721f) cell_dialer_keypad_pane_g1_ParamLimits

0x2f15,	// (0x0002721f) cell_dialer_keypad_pane_g1

0x37fc,	// (0x00027b06) bg_button_pane_cp03_ParamLimits

0x37fc,	// (0x00027b06) bg_button_pane_cp03

0x2f15,	// (0x0002721f) cell_dialer_command_1_pane_g1_ParamLimits

0x2f15,	// (0x0002721f) cell_dialer_command_1_pane_g1

0x2767,	// (0x00026a71) bg_button_pane_cp04

0x398e,	// (0x00027c98) cell_dialer_command_2_pane_g1

0x2767,	// (0x00026a71) bg_button_pane_cp06

0x398e,	// (0x00027c98) dialer_ne_clear_pane_g1

0x5454,	// (0x0002975e) navi_pane_g2

0x547d,	// (0x00029787) navi_pane_g3

0x0002,

0xf365,	// (0x0003366f) navi_pane_g

0x54fe,	// (0x00029808) navi_pane_mv_g2

0x5525,	// (0x0002982f) navi_pane_mv_g5

0x552d,	// (0x00029837) navi_pane_mv_t1

0x3063,	// (0x0002736d) main_clock2_pane

0x6fa2,	// (0x0002b2ac) main_clock2_list_pane_ParamLimits

0x6fa2,	// (0x0002b2ac) main_clock2_list_pane

0x6fd4,	// (0x0002b2de) main_clock2_pane_t1_ParamLimits

0x6fd4,	// (0x0002b2de) main_clock2_pane_t1

0x700e,	// (0x0002b318) main_clock2_pane_t2_ParamLimits

0x700e,	// (0x0002b318) main_clock2_pane_t2

0x0004,

0xf755,	// (0x00033a5f) main_clock2_pane_t_ParamLimits

0xf755,	// (0x00033a5f) main_clock2_pane_t

0x70a2,	// (0x0002b3ac) popup_clock_analogue_window_cp03_ParamLimits

0x70a2,	// (0x0002b3ac) popup_clock_analogue_window_cp03

0x70c7,	// (0x0002b3d1) popup_clock_digital_window_cp02_ParamLimits

0x70c7,	// (0x0002b3d1) popup_clock_digital_window_cp02

0x7107,	// (0x0002b411) main_clock2_list_single_pane_ParamLimits

0x7107,	// (0x0002b411) main_clock2_list_single_pane

0x3793,	// (0x00027a9d) list_highlight_pane_cp05

0xc7ff,	// (0x00030b09) main_clock2_list_single_pane_t1

0x3bb9,	// (0x00027ec3) popup_toolbar_window_cp04_ParamLimits

0x2f23,	// (0x0002722d) camera2_autofocus_pane_g2_ParamLimits

0x2f23,	// (0x0002722d) camera2_autofocus_pane_g2

0x2f23,	// (0x0002722d) camera2_autofocus_pane_g3_ParamLimits

0x2f23,	// (0x0002722d) camera2_autofocus_pane_g3

0x2f23,	// (0x0002722d) camera2_autofocus_pane_g4_ParamLimits

0x2f23,	// (0x0002722d) camera2_autofocus_pane_g4

0x2f23,	// (0x0002722d) camera2_autofocus_pane_g5_ParamLimits

0x2f23,	// (0x0002722d) camera2_autofocus_pane_g5

0x0004,

0xf699,	// (0x000339a3) camera2_autofocus_pane_g_ParamLimits

0xf699,	// (0x000339a3) camera2_autofocus_pane_g

0x6894,	// (0x0002ab9e) camera2_autofocus_pane_cp_g2

0x689c,	// (0x0002aba6) camera2_autofocus_pane_cp_g3

0x68a4,	// (0x0002abae) camera2_autofocus_pane_cp_g4

0x68ac,	// (0x0002abb6) camera2_autofocus_pane_cp_g5

0x0004,

0xf6ff,	// (0x00033a09) camera2_autofocus_pane_cp_g

0x2767,	// (0x00026a71) popup_dialer_spcha_window

0x2767,	// (0x00026a71) bg_popup_sub_pane_cp07

0x2767,	// (0x00026a71) list_spcha_pane

0xc80d,	// (0x00030b17) list_single_spcha_pane_ParamLimits

0xc80d,	// (0x00030b17) list_single_spcha_pane

0x2767,	// (0x00026a71) list_highlight_pane_cp06

0xbe78,	// (0x00030182) list_single_spcha_pane_t1

0xb954,	// (0x0002fc5e) popup_call2_audio_out_window_g4_ParamLimits

0xb954,	// (0x0002fc5e) popup_call2_audio_out_window_g4

0xacfa,	// (0x0002f004) main_imed2_pane

0xbefe,	// (0x00030208) popup_imed_adjust2_window

0x1a74,	// (0x00025d7e) popup_imed_trans_window_ParamLimits

0x1a74,	// (0x00025d7e) popup_imed_trans_window

0xc253,	// (0x0003055d) popup_blid_sat_info2_window_t1

0xc261,	// (0x0003056b) popup_blid_sat_info2_window_t2

0x000a,

0xf62e,	// (0x00033938) popup_blid_sat_info2_window_t

0x7139,	// (0x0002b443) aid_size_cell_colour_35

0x7159,	// (0x0002b463) aid_size_cell_colour_112

0x7179,	// (0x0002b483) aid_size_cell_effect

0x56a0,	// (0x000299aa) bg_tb_trans_pane_cp02

0x4cd1,	// (0x00028fdb) heading_imed_pane

0x7199,	// (0x0002b4a3) listscroll_imed_pane

0xc81f,	// (0x00030b29) heading_imed_pane_g1

0xc827,	// (0x00030b31) heading_imed_pane_t1

0xc835,	// (0x00030b3f) grid_imed_colour_35_pane_ParamLimits

0xc835,	// (0x00030b3f) grid_imed_colour_35_pane

0x71a5,	// (0x0002b4af) grid_imed_effect_pane

0xc848,	// (0x00030b52) list_imed_aspect_pane

0x71b8,	// (0x0002b4c2) scroll_pane_cp027_ParamLimits

0x71b8,	// (0x0002b4c2) scroll_pane_cp027

0x71c4,	// (0x0002b4ce) cell_imed_effect_pane_ParamLimits

0x71c4,	// (0x0002b4ce) cell_imed_effect_pane

0xc850,	// (0x00030b5a) cell_imed_colour_pane_ParamLimits

0xc850,	// (0x00030b5a) cell_imed_colour_pane

0xc88a,	// (0x00030b94) cell_imed_colour_pane_g1_ParamLimits

0xc88a,	// (0x00030b94) cell_imed_colour_pane_g1

0xc89b,	// (0x00030ba5) hgihlgiht_grid_pane_cp016_ParamLimits

0xc89b,	// (0x00030ba5) hgihlgiht_grid_pane_cp016

0x71e9,	// (0x0002b4f3) cell_imed_effect_pane_g1

0x71f1,	// (0x0002b4fb) grid_highlight_pane_cp017

0xc8ac,	// (0x00030bb6) list_imed_single_pane_ParamLimits

0xc8ac,	// (0x00030bb6) list_imed_single_pane

0x2767,	// (0x00026a71) list_highlight_pane_cp07

0xc8bf,	// (0x00030bc9) list_imed_aspect_pane_comp1_t1

0x56a0,	// (0x000299aa) bg_tb_trans_pane_cp05

0xc8df,	// (0x00030be9) popup_imed_adjust2_window_g1

0xc906,	// (0x00030c10) popup_imed_adjust2_window_t1

0xc91e,	// (0x00030c28) slider_imed_adjust_pane

0xc932,	// (0x00030c3c) slider_imed_adjust_pane_g1

0xc942,	// (0x00030c4c) slider_imed_adjust_pane_g2

0xc952,	// (0x00030c5c) slider_imed_adjust_pane_g3

0xc963,	// (0x00030c6d) slider_imed_adjust_pane_g4

0x0003,

0xf772,	// (0x00033a7c) slider_imed_adjust_pane_g

0x71fa,	// (0x0002b504) aid_size_cell_clipart2

0x7206,	// (0x0002b510) grid_imed_clipart_pane

0xc974,	// (0x00030c7e) scroll_pane_cp031

0x7210,	// (0x0002b51a) cell_imed_clipart_pane_ParamLimits

0x7210,	// (0x0002b51a) cell_imed_clipart_pane

0x7228,	// (0x0002b532) cell_imed_clipart_pane_g1

0x2767,	// (0x00026a71) grid_highlight_pane_cp014

0x6fb5,	// (0x0002b2bf) main_clock2_pane_g1_ParamLimits

0x6fb5,	// (0x0002b2bf) main_clock2_pane_g1

0x70e3,	// (0x0002b3ed) aid_call2_pane_cp10

0x70f5,	// (0x0002b3ff) aid_call_pane_cp10

0x535a,	// (0x00029664) popup_clock_analogue_window_cp10_g1

0x535a,	// (0x00029664) popup_clock_analogue_window_cp10_g2

0x1c09,	// (0x00025f13) popup_clock_analogue_window_cp10_g3

0x1c09,	// (0x00025f13) popup_clock_analogue_window_cp10_g4

0x535a,	// (0x00029664) popup_clock_analogue_window_cp10_g5

0x0004,

0xf760,	// (0x00033a6a) popup_clock_analogue_window_cp10_g

0x1c1b,	// (0x00025f25) popup_clock_analogue_window_cp10_t1

0x1c3a,	// (0x00025f44) clock_digital_number_pane_cp10_ParamLimits

0x1c3a,	// (0x00025f44) clock_digital_number_pane_cp10

0x1c52,	// (0x00025f5c) clock_digital_number_pane_cp11_ParamLimits

0x1c52,	// (0x00025f5c) clock_digital_number_pane_cp11

0x1c6a,	// (0x00025f74) clock_digital_number_pane_cp12_ParamLimits

0x1c6a,	// (0x00025f74) clock_digital_number_pane_cp12

0x1c82,	// (0x00025f8c) clock_digital_number_pane_cp13_ParamLimits

0x1c82,	// (0x00025f8c) clock_digital_number_pane_cp13

0x1c9a,	// (0x00025fa4) clock_digital_separator_pane_cp10_ParamLimits

0x1c9a,	// (0x00025fa4) clock_digital_separator_pane_cp10

0x7119,	// (0x0002b423) popup_clock_digital_window_cp02_t1_ParamLimits

0x7119,	// (0x0002b423) popup_clock_digital_window_cp02_t1

0x2e68,	// (0x00027172) clock_digital_number_pane_cp10_g1

0x2e68,	// (0x00027172) clock_digital_number_pane_cp10_g2

0x0001,

0xf77b,	// (0x00033a85) clock_digital_number_pane_cp10_g

0x2e68,	// (0x00027172) clock_digital_separator_pane_cp10_g1

0x2e68,	// (0x00027172) clock_digital_separator_pane_g2_cp10

0x556b,	// (0x00029875) navi_pane_vded_g4

0x5574,	// (0x0002987e) navi_pane_vded_g5

0x557d,	// (0x00029887) navi_pane_vded_t1

0xacfa,	// (0x0002f004) main_vded_pane

0x7231,	// (0x0002b53b) main_vded_pane_g1

0x723b,	// (0x0002b545) main_vded_pane_g2

0x7243,	// (0x0002b54d) main_vded_pane_g3

0x0002,

0xf780,	// (0x00033a8a) main_vded_pane_g

0x724b,	// (0x0002b555) main_vded_pane_t1

0x7259,	// (0x0002b563) main_vded_pane_t2

0x0001,

0xf787,	// (0x00033a91) main_vded_pane_t

0x7267,	// (0x0002b571) vded_slider_pane

0x726f,	// (0x0002b579) vded_video_pane

0xc97c,	// (0x00030c86) vded_video_pane_g1

0x7277,	// (0x0002b581) vded_video_pane_g2

0x398e,	// (0x00027c98) vded_video_pane_g3

0x0002,

0xf78c,	// (0x00033a96) vded_video_pane_g

0xc986,	// (0x00030c90) vded_slider_pane_g1

0xc168,	// (0x00030472) vded_slider_pane_g2

0xc98f,	// (0x00030c99) vded_slider_pane_g3

0xc998,	// (0x00030ca2) vded_slider_pane_g4

0xc9a1,	// (0x00030cab) vded_slider_pane_g5

0x0004,

0xf793,	// (0x00033a9d) vded_slider_pane_g

0x6dd9,	// (0x0002b0e3) mup3_rocker_pane_ParamLimits

0x6dd9,	// (0x0002b0e3) mup3_rocker_pane

0x7280,	// (0x0002b58a) mup3_control_keys_pane_g1

0x7288,	// (0x0002b592) mup3_control_keys_pane_g2

0x7290,	// (0x0002b59a) mup3_control_keys_pane_g3

0x7298,	// (0x0002b5a2) mup3_control_keys_pane_g4

0x0003,

0xf79e,	// (0x00033aa8) mup3_control_keys_pane_g

0x15df,	// (0x000258e9) popup_toolbar2_fixed_window_cp01_ParamLimits

0x15df,	// (0x000258e9) popup_toolbar2_fixed_window_cp01

0x6e07,	// (0x0002b111) popup_toolbar2_fixed_window_cp02_ParamLimits

0x6e07,	// (0x0002b111) popup_toolbar2_fixed_window_cp02

0xb2dd,	// (0x0002f5e7) popup_call2_audio_second_window_t4_ParamLimits

0xb2dd,	// (0x0002f5e7) popup_call2_audio_second_window_t4

0xb819,	// (0x0002fb23) popup_call2_audio_first_window_t6_ParamLimits

0xb819,	// (0x0002fb23) popup_call2_audio_first_window_t6

0xba57,	// (0x0002fd61) popup_call2_audio_out_window_t6_ParamLimits

0xba57,	// (0x0002fd61) popup_call2_audio_out_window_t6

0xacfa,	// (0x0002f004) main_vitu_pane

0x37fc,	// (0x00027b06) aid_size_cell_itu_ParamLimits

0x37fc,	// (0x00027b06) aid_size_cell_itu

0x37fc,	// (0x00027b06) bg_popup_window_pane_cp08_ParamLimits

0x37fc,	// (0x00027b06) bg_popup_window_pane_cp08

0x37fc,	// (0x00027b06) field_vitu_entry_pane_ParamLimits

0x37fc,	// (0x00027b06) field_vitu_entry_pane

0x37fc,	// (0x00027b06) grid_vitu_function_pane_ParamLimits

0x37fc,	// (0x00027b06) grid_vitu_function_pane

0x37fc,	// (0x00027b06) grid_vitu_itu_pane_ParamLimits

0x37fc,	// (0x00027b06) grid_vitu_itu_pane

0x72a8,	// (0x0002b5b2) cell_vitu_itu_pane_ParamLimits

0x72a8,	// (0x0002b5b2) cell_vitu_itu_pane

0x37fc,	// (0x00027b06) cell_vitu_function_pane_ParamLimits

0x37fc,	// (0x00027b06) cell_vitu_function_pane

0x37fc,	// (0x00027b06) bg_popup_sub_pane_cp08_ParamLimits

0x37fc,	// (0x00027b06) bg_popup_sub_pane_cp08

0x380a,	// (0x00027b14) field_vitu_entry_pane_t1_ParamLimits

0x380a,	// (0x00027b14) field_vitu_entry_pane_t1

0xc9aa,	// (0x00030cb4) field_vitu_entry_pane_t2_ParamLimits

0xc9aa,	// (0x00030cb4) field_vitu_entry_pane_t2

0x0001,

0xf7ac,	// (0x00033ab6) field_vitu_entry_pane_t_ParamLimits

0xf7ac,	// (0x00033ab6) field_vitu_entry_pane_t

0xc1fc,	// (0x00030506) bg_button_pane_cp05_ParamLimits

0xc1fc,	// (0x00030506) bg_button_pane_cp05

0xc9c7,	// (0x00030cd1) cell_vitu_itu_pane_g1

0x5678,	// (0x00029982) cell_vitu_itu_pane_t1_ParamLimits

0x5678,	// (0x00029982) cell_vitu_itu_pane_t1

0x5678,	// (0x00029982) cell_vitu_itu_pane_t2_ParamLimits

0x5678,	// (0x00029982) cell_vitu_itu_pane_t2

0x0002,

0xf7b1,	// (0x00033abb) cell_vitu_itu_pane_t_ParamLimits

0xf7b1,	// (0x00033abb) cell_vitu_itu_pane_t

0x2767,	// (0x00026a71) bg_button_pane_cp07

0x398e,	// (0x00027c98) cell_vitu_function_pane_g1

0xad04,	// (0x0002f00e) main_calc_pane_g1

0x1477,	// (0x00025781) aid_visual_content_pane

0xacfa,	// (0x0002f004) main_vradio_pane

0x2f15,	// (0x0002721f) main_vradio_pane_g1_ParamLimits

0x2f15,	// (0x0002721f) main_vradio_pane_g1

0x2f23,	// (0x0002722d) main_vradio_pane_g2_ParamLimits

0x2f23,	// (0x0002722d) main_vradio_pane_g2

0x0001,

0xf7b8,	// (0x00033ac2) main_vradio_pane_g_ParamLimits

0xf7b8,	// (0x00033ac2) main_vradio_pane_g

0x380a,	// (0x00027b14) main_vradio_pane_t1_ParamLimits

0x380a,	// (0x00027b14) main_vradio_pane_t1

0x380a,	// (0x00027b14) main_vradio_pane_t2_ParamLimits

0x380a,	// (0x00027b14) main_vradio_pane_t2

0x568c,	// (0x00029996) main_vradio_pane_t3_ParamLimits

0x568c,	// (0x00029996) main_vradio_pane_t3

0x0002,

0xf7bd,	// (0x00033ac7) main_vradio_pane_t_ParamLimits

0xf7bd,	// (0x00033ac7) main_vradio_pane_t

0x37fc,	// (0x00027b06) vradio_rocker_control_pane_ParamLimits

0x37fc,	// (0x00027b06) vradio_rocker_control_pane

0x37fc,	// (0x00027b06) vradio_station_info_pane_ParamLimits

0x37fc,	// (0x00027b06) vradio_station_info_pane

0x37fc,	// (0x00027b06) vradio_frequency_info_pane_ParamLimits

0x37fc,	// (0x00027b06) vradio_frequency_info_pane

0x398e,	// (0x00027c98) vradio_station_info_pane_g1

0x5678,	// (0x00029982) vradio_station_info_pane_t1_ParamLimits

0x5678,	// (0x00029982) vradio_station_info_pane_t1

0x568c,	// (0x00029996) vradio_station_info_pane_t2_ParamLimits

0x568c,	// (0x00029996) vradio_station_info_pane_t2

0x0001,

0xf7c4,	// (0x00033ace) vradio_station_info_pane_t_ParamLimits

0xf7c4,	// (0x00033ace) vradio_station_info_pane_t

0x2767,	// (0x00026a71) vradio_tuning_pane

0x72bc,	// (0x0002b5c6) vradio_rocker_control_pane_g1

0xc9e3,	// (0x00030ced) vradio_rocker_control_pane_g2

0x72c4,	// (0x0002b5ce) vradio_rocker_control_pane_g3

0x72cc,	// (0x0002b5d6) vradio_rocker_control_pane_g4

0x72d4,	// (0x0002b5de) vradio_rocker_control_pane_g5

0x0004,

0xf7c9,	// (0x00033ad3) vradio_rocker_control_pane_g

0x398e,	// (0x00027c98) vradio_frequency_info_pane_g1

0x380a,	// (0x00027b14) vradio_frequency_info_pane_t1_ParamLimits

0x380a,	// (0x00027b14) vradio_frequency_info_pane_t1

0x72dc,	// (0x0002b5e6) vradio_tuning_pane_g1

0x72e5,	// (0x0002b5ef) vradio_tuning_pane_t1

0xacc3,	// (0x0002efcd) area_side_right_pane_ParamLimits

0xacc3,	// (0x0002efcd) area_side_right_pane

0xbe97,	// (0x000301a1) status_small_pane_g1

0xbe9f,	// (0x000301a9) status_small_pane_g2

0xbea8,	// (0x000301b2) status_small_pane_g3

0xbeb1,	// (0x000301bb) status_small_pane_g4

0x0003,

0xf590,	// (0x0003389a) status_small_pane_g

0xbeba,	// (0x000301c4) status_small_pane_t1

0xacfa,	// (0x0002f004) main_video3_pane

0xc9eb,	// (0x00030cf5) cams_zoom_vslider_pane

0xc9f3,	// (0x00030cfd) image3_wide_pane_ParamLimits

0xc9f3,	// (0x00030cfd) image3_wide_pane

0xca0d,	// (0x00030d17) image3_wide_small_pane

0xca17,	// (0x00030d21) main_video3_pane_g1_ParamLimits

0xca17,	// (0x00030d21) main_video3_pane_g1

0xca33,	// (0x00030d3d) main_video3_pane_g2_ParamLimits

0xca33,	// (0x00030d3d) main_video3_pane_g2

0x0001,

0xf7d4,	// (0x00033ade) main_video3_pane_g_ParamLimits

0xf7d4,	// (0x00033ade) main_video3_pane_g

0xca4f,	// (0x00030d59) main_video3_pane_t1_ParamLimits

0xca4f,	// (0x00030d59) main_video3_pane_t1

0xca7a,	// (0x00030d84) main_video3_pane_t2_ParamLimits

0xca7a,	// (0x00030d84) main_video3_pane_t2

0xcaa5,	// (0x00030daf) main_video3_pane_t3_ParamLimits

0xcaa5,	// (0x00030daf) main_video3_pane_t3

0x0002,

0xf7d9,	// (0x00033ae3) main_video3_pane_t_ParamLimits

0xf7d9,	// (0x00033ae3) main_video3_pane_t

0xcad0,	// (0x00030dda) cams_zoom_vslider_pane_g1

0xcad9,	// (0x00030de3) cams_zoom_vslider_pane_g2

0x0001,

0xf7e0,	// (0x00033aea) cams_zoom_vslider_pane_g

0xcae1,	// (0x00030deb) small_slider_vertical_pane

0x398e,	// (0x00027c98) small_slider_vertical_pane_g1

0x398e,	// (0x00027c98) small_slider_vertical_pane_g2

0xcae9,	// (0x00030df3) small_slider_vertical_pane_g3

0x0002,

0xf7e5,	// (0x00033aef) small_slider_vertical_pane_g

0xacfa,	// (0x0002f004) main_hwr_training_pane

0xcaf2,	// (0x00030dfc) hwr_training_instruct_pane_ParamLimits

0xcaf2,	// (0x00030dfc) hwr_training_instruct_pane

0x72f4,	// (0x0002b5fe) hwr_training_navi_pane_ParamLimits

0x72f4,	// (0x0002b5fe) hwr_training_navi_pane

0x730b,	// (0x0002b615) hwr_training_write_pane_ParamLimits

0x730b,	// (0x0002b615) hwr_training_write_pane

0x2767,	// (0x00026a71) bg_frame_shadow_pane

0xcb21,	// (0x00030e2b) hwr_training_write_pane_g1

0xcb29,	// (0x00030e33) hwr_training_write_pane_g2

0xcb31,	// (0x00030e3b) hwr_training_write_pane_g3

0xcb39,	// (0x00030e43) hwr_training_write_pane_g4

0xcb41,	// (0x00030e4b) hwr_training_write_pane_g5

0xcb49,	// (0x00030e53) hwr_training_write_pane_g6

0xcb51,	// (0x00030e5b) hwr_training_write_pane_g7

0x0006,

0xf7ec,	// (0x00033af6) hwr_training_write_pane_g

0xcb59,	// (0x00030e63) hwr_training_navi_pane_g1_ParamLimits

0xcb59,	// (0x00030e63) hwr_training_navi_pane_g1

0xcb6b,	// (0x00030e75) hwr_training_navi_pane_g2_ParamLimits

0xcb6b,	// (0x00030e75) hwr_training_navi_pane_g2

0xcb7d,	// (0x00030e87) hwr_training_navi_pane_g3_ParamLimits

0xcb7d,	// (0x00030e87) hwr_training_navi_pane_g3

0xcb8d,	// (0x00030e97) hwr_training_navi_pane_g4_ParamLimits

0xcb8d,	// (0x00030e97) hwr_training_navi_pane_g4

0x0004,

0xf7fb,	// (0x00033b05) hwr_training_navi_pane_g_ParamLimits

0xf7fb,	// (0x00033b05) hwr_training_navi_pane_g

0xcb9a,	// (0x00030ea4) hwr_training_navi_pane_t1

0x733e,	// (0x0002b648) list_single_hwr_training_instruct_pane_ParamLimits

0x733e,	// (0x0002b648) list_single_hwr_training_instruct_pane

0xcba8,	// (0x00030eb2) list_single_hwr_training_instruct_pane_t1

0xc34e,	// (0x00030658) bg_frame_shadow_pane_g1

0xcbb7,	// (0x00030ec1) bg_frame_shadow_pane_g2

0xcbbf,	// (0x00030ec9) bg_frame_shadow_pane_g3

0xcbc7,	// (0x00030ed1) bg_frame_shadow_pane_g4

0xcbcf,	// (0x00030ed9) bg_frame_shadow_pane_g5

0xcbd7,	// (0x00030ee1) bg_frame_shadow_pane_g6

0xcbdf,	// (0x00030ee9) bg_frame_shadow_pane_g7

0x31ef,	// (0x000274f9) bg_frame_shadow_pane_g8

0x0007,

0xf806,	// (0x00033b10) bg_frame_shadow_pane_g

0xacfa,	// (0x0002f004) main_video_tele_dialer_pane

0x1cbf,	// (0x00025fc9) aid_size_cell_video_keypad_ParamLimits

0x1cbf,	// (0x00025fc9) aid_size_cell_video_keypad

0x1cd9,	// (0x00025fe3) grid_video_dialer_keypad_pane_ParamLimits

0x1cd9,	// (0x00025fe3) grid_video_dialer_keypad_pane

0x1d1b,	// (0x00026025) video_down_pane_cp_ParamLimits

0x1d1b,	// (0x00026025) video_down_pane_cp

0x1d2f,	// (0x00026039) cell_video_dialer_keypad_pane_ParamLimits

0x1d2f,	// (0x00026039) cell_video_dialer_keypad_pane

0xcbe7,	// (0x00030ef1) bg_button_pane_cp08_ParamLimits

0xcbe7,	// (0x00030ef1) bg_button_pane_cp08

0x7372,	// (0x0002b67c) cell_video_dialer_keypad_pane_g1_ParamLimits

0x7372,	// (0x0002b67c) cell_video_dialer_keypad_pane_g1

0x6dc3,	// (0x0002b0cd) mup3_rocker2_pane_ParamLimits

0x6dc3,	// (0x0002b0cd) mup3_rocker2_pane

0x398e,	// (0x00027c98) mup3_rocker2_pane_g1

0x196d,	// (0x00025c77) main_dialer2_pane

0xacfa,	// (0x0002f004) main_mp4_pane

0xcc0f,	// (0x00030f19) main_mp4_pane_g1_ParamLimits

0xcc0f,	// (0x00030f19) main_mp4_pane_g1

0xcc0f,	// (0x00030f19) main_mp4_pane_g2_ParamLimits

0xcc0f,	// (0x00030f19) main_mp4_pane_g2

0x1d51,	// (0x0002605b) main_mp4_pane_g3_ParamLimits

0x1d51,	// (0x0002605b) main_mp4_pane_g3

0xcc1d,	// (0x00030f27) main_mp4_pane_g4_ParamLimits

0xcc1d,	// (0x00030f27) main_mp4_pane_g4

0xcc4b,	// (0x00030f55) main_mp4_pane_g5_ParamLimits

0xcc4b,	// (0x00030f55) main_mp4_pane_g5

0x0007,

0xf826,	// (0x00033b30) main_mp4_pane_g_ParamLimits

0xf826,	// (0x00033b30) main_mp4_pane_g

0xccbf,	// (0x00030fc9) main_mp4_pane_t1_ParamLimits

0xccbf,	// (0x00030fc9) main_mp4_pane_t1

0xcd17,	// (0x00031021) main_mp4_pane_t2_ParamLimits

0xcd17,	// (0x00031021) main_mp4_pane_t2

0xcd69,	// (0x00031073) main_mp4_pane_t3_ParamLimits

0xcd69,	// (0x00031073) main_mp4_pane_t3

0xcd8f,	// (0x00031099) main_mp4_pane_t4_ParamLimits

0xcd8f,	// (0x00031099) main_mp4_pane_t4

0x0003,

0xf837,	// (0x00033b41) main_mp4_pane_t_ParamLimits

0xf837,	// (0x00033b41) main_mp4_pane_t

0xcdcf,	// (0x000310d9) mp4_progress_pane_ParamLimits

0xcdcf,	// (0x000310d9) mp4_progress_pane

0xce13,	// (0x0003111d) mp4_rocker_pane_ParamLimits

0xce13,	// (0x0003111d) mp4_rocker_pane

0xce39,	// (0x00031143) mp4_progress_pane_t1

0xce50,	// (0x0003115a) mp4_progress_pane_t2

0x0001,

0xf840,	// (0x00033b4a) mp4_progress_pane_t

0xce67,	// (0x00031171) mup_progress_pane_cp04

0xc171,	// (0x0003047b) mp4_rocker_pane_g1

0x1d81,	// (0x0002608b) aid_cell_size_keypad2_ParamLimits

0x1d81,	// (0x0002608b) aid_cell_size_keypad2

0x1d9b,	// (0x000260a5) dialer2_ne_pane_ParamLimits

0x1d9b,	// (0x000260a5) dialer2_ne_pane

0x1db0,	// (0x000260ba) grid_dialer2_keypad_pane_ParamLimits

0x1db0,	// (0x000260ba) grid_dialer2_keypad_pane

0xc1fc,	// (0x00030506) bg_popup_call_pane_cp07_ParamLimits

0xc1fc,	// (0x00030506) bg_popup_call_pane_cp07

0x73ad,	// (0x0002b6b7) dialer2_ne_pane_t1_ParamLimits

0x73ad,	// (0x0002b6b7) dialer2_ne_pane_t1

0x1dc6,	// (0x000260d0) cell_dialer2_keypad_pane_ParamLimits

0x1dc6,	// (0x000260d0) cell_dialer2_keypad_pane

0xce85,	// (0x0003118f) bg_button_pane_pane_cp04_ParamLimits

0xce85,	// (0x0003118f) bg_button_pane_pane_cp04

0x73ea,	// (0x0002b6f4) cell_dialer2_keypad_pane_g1_ParamLimits

0x73ea,	// (0x0002b6f4) cell_dialer2_keypad_pane_g1

0x3a95,	// (0x00027d9f) aid_placing_vt_set_content_ParamLimits

0x3a95,	// (0x00027d9f) aid_placing_vt_set_content

0x3ab7,	// (0x00027dc1) aid_placing_vt_set_title_ParamLimits

0x3ab7,	// (0x00027dc1) aid_placing_vt_set_title

0xacfa,	// (0x0002f004) main_image3_pane

0x1e2c,	// (0x00026136) area_side_right_pane_cp01_ParamLimits

0x1e2c,	// (0x00026136) area_side_right_pane_cp01

0xcc0f,	// (0x00030f19) main_image3_pane_g1_ParamLimits

0xcc0f,	// (0x00030f19) main_image3_pane_g1

0x1e43,	// (0x0002614d) main_image3_pane_g2_ParamLimits

0x1e43,	// (0x0002614d) main_image3_pane_g2

0x1e69,	// (0x00026173) main_image3_pane_g3_ParamLimits

0x1e69,	// (0x00026173) main_image3_pane_g3

0x1e8f,	// (0x00026199) main_image3_pane_g4_ParamLimits

0x1e8f,	// (0x00026199) main_image3_pane_g4

0x0003,

0xf84f,	// (0x00033b59) main_image3_pane_g_ParamLimits

0xf84f,	// (0x00033b59) main_image3_pane_g

0x1eb5,	// (0x000261bf) main_image3_pane_t1_ParamLimits

0x1eb5,	// (0x000261bf) main_image3_pane_t1

0x1f0d,	// (0x00026217) main_image3_pane_t2_ParamLimits

0x1f0d,	// (0x00026217) main_image3_pane_t2

0x1f5f,	// (0x00026269) main_image3_pane_t3_ParamLimits

0x1f5f,	// (0x00026269) main_image3_pane_t3

0x0003,

0xf858,	// (0x00033b62) main_image3_pane_t_ParamLimits

0xf858,	// (0x00033b62) main_image3_pane_t

0x37fc,	// (0x00027b06) grid_sctrl_middle_pane_cp01_ParamLimits

0x37fc,	// (0x00027b06) grid_sctrl_middle_pane_cp01

0x7435,	// (0x0002b73f) cell_sctrl_middle_pane_cp01_ParamLimits

0x7435,	// (0x0002b73f) cell_sctrl_middle_pane_cp01

0x7452,	// (0x0002b75c) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x7452,	// (0x0002b75c) cell_sctrl_middle_pane_cp01_g1

0xacfa,	// (0x0002f004) main_call4_pane

0x1fdf,	// (0x000262e9) aid_size_button_call4_ParamLimits

0x1fdf,	// (0x000262e9) aid_size_button_call4

0x200c,	// (0x00026316) call4_windows_pane_ParamLimits

0x200c,	// (0x00026316) call4_windows_pane

0x2022,	// (0x0002632c) grid_call4_button_pane_ParamLimits

0x2022,	// (0x0002632c) grid_call4_button_pane

0xcedb,	// (0x000311e5) call4_windows_conf_pane

0x7470,	// (0x0002b77a) popup_call4_audio_first_window_ParamLimits

0x7470,	// (0x0002b77a) popup_call4_audio_first_window

0xcf0e,	// (0x00031218) popup_call4_audio_second_window_ParamLimits

0xcf0e,	// (0x00031218) popup_call4_audio_second_window

0xcf20,	// (0x0003122a) popup_call4_audio_wait_window_ParamLimits

0xcf20,	// (0x0003122a) popup_call4_audio_wait_window

0x2041,	// (0x0002634b) cell_call4_button_pane_ParamLimits

0x2041,	// (0x0002634b) cell_call4_button_pane

0x7490,	// (0x0002b79a) bg_button_pane_cp09_ParamLimits

0x7490,	// (0x0002b79a) bg_button_pane_cp09

0x2066,	// (0x00026370) cell_call4_button_pane_g1_ParamLimits

0x2066,	// (0x00026370) cell_call4_button_pane_g1

0x208c,	// (0x00026396) cell_call4_button_pane_t1_ParamLimits

0x208c,	// (0x00026396) cell_call4_button_pane_t1

0xcf66,	// (0x00031270) popup_call4_audio_conf_window_ParamLimits

0xcf66,	// (0x00031270) popup_call4_audio_conf_window

0x6e1d,	// (0x0002b127) mup3_progress_pane_t1_ParamLimits

0x6e3b,	// (0x0002b145) mup3_progress_pane_t2_ParamLimits

0xc6f8,	// (0x00030a02) mup3_progress_pane_t3_ParamLimits

0xf728,	// (0x00033a32) mup3_progress_pane_t_ParamLimits

0xc715,	// (0x00030a1f) mup_progress_pane_cp03_ParamLimits

0x72a0,	// (0x0002b5aa) mup3_control_keys_pane_g4_copy1

0xcdfd,	// (0x00031107) mp4_rocker2_pane_ParamLimits

0xcdfd,	// (0x00031107) mp4_rocker2_pane

0xcf7a,	// (0x00031284) mp4_rocker2_pane_g1

0xcf82,	// (0x0003128c) mp4_rocker2_pane_g2

0xcf8a,	// (0x00031294) mp4_rocker2_pane_g3

0xcf92,	// (0x0003129c) mp4_rocker2_pane_g4

0xcf9a,	// (0x000312a4) mp4_rocker2_pane_g5

0x0004,

0xf861,	// (0x00033b6b) mp4_rocker2_pane_g

0xacfa,	// (0x0002f004) main_camera4_pane

0xacfa,	// (0x0002f004) main_video4_pane

0x1ced,	// (0x00025ff7) main_video_tele_dialer_pane_t1_ParamLimits

0x1ced,	// (0x00025ff7) main_video_tele_dialer_pane_t1

0x1d04,	// (0x0002600e) main_video_tele_dialer_pane_t2_ParamLimits

0x1d04,	// (0x0002600e) main_video_tele_dialer_pane_t2

0x0001,

0xf817,	// (0x00033b21) main_video_tele_dialer_pane_t_ParamLimits

0xf817,	// (0x00033b21) main_video_tele_dialer_pane_t

0x20ca,	// (0x000263d4) cam4_autofocus_pane_ParamLimits

0x20ca,	// (0x000263d4) cam4_autofocus_pane

0x20de,	// (0x000263e8) cam4_image_uncrop_pane_ParamLimits

0x20de,	// (0x000263e8) cam4_image_uncrop_pane

0x20f5,	// (0x000263ff) cam4_indicators_pane_ParamLimits

0x20f5,	// (0x000263ff) cam4_indicators_pane

0x2119,	// (0x00026423) main_camera4_pane_g1_ParamLimits

0x2119,	// (0x00026423) main_camera4_pane_g1

0x2125,	// (0x0002642f) main_camera4_pane_g2_ParamLimits

0x2125,	// (0x0002642f) main_camera4_pane_g2

0x2125,	// (0x0002642f) main_camera4_pane_g3_ParamLimits

0x2125,	// (0x0002642f) main_camera4_pane_g3

0x2131,	// (0x0002643b) main_camera4_pane_g4_ParamLimits

0x2131,	// (0x0002643b) main_camera4_pane_g4

0x213d,	// (0x00026447) main_camera4_pane_g5_ParamLimits

0x213d,	// (0x00026447) main_camera4_pane_g5

0x0005,

0xf86c,	// (0x00033b76) main_camera4_pane_g_ParamLimits

0xf86c,	// (0x00033b76) main_camera4_pane_g

0x215a,	// (0x00026464) main_camera4_pane_t1_ParamLimits

0x215a,	// (0x00026464) main_camera4_pane_t1

0xcfce,	// (0x000312d8) bg_tb_trans_pane_cp06

0xcfe4,	// (0x000312ee) cam4_indicators_pane_g1

0xcff4,	// (0x000312fe) cam4_indicators_pane_g2

0x0002,

0xf887,	// (0x00033b91) cam4_indicators_pane_g

0xd014,	// (0x0003131e) cam4_indicators_pane_t1

0x219d,	// (0x000264a7) main_video4_pane_g1_ParamLimits

0x219d,	// (0x000264a7) main_video4_pane_g1

0x21af,	// (0x000264b9) main_video4_pane_g2_ParamLimits

0x21af,	// (0x000264b9) main_video4_pane_g2

0x21af,	// (0x000264b9) main_video4_pane_g3_ParamLimits

0x21af,	// (0x000264b9) main_video4_pane_g3

0x21be,	// (0x000264c8) main_video4_pane_g4_ParamLimits

0x21be,	// (0x000264c8) main_video4_pane_g4

0x0004,

0xf88e,	// (0x00033b98) main_video4_pane_g_ParamLimits

0xf88e,	// (0x00033b98) main_video4_pane_g

0x21dc,	// (0x000264e6) vid4_indicators_pane_ParamLimits

0x21dc,	// (0x000264e6) vid4_indicators_pane

0x2204,	// (0x0002650e) video4_image_uncrop_cif_pane_ParamLimits

0x2204,	// (0x0002650e) video4_image_uncrop_cif_pane

0x221c,	// (0x00026526) video4_image_uncrop_nhd_pane_ParamLimits

0x221c,	// (0x00026526) video4_image_uncrop_nhd_pane

0x2230,	// (0x0002653a) video4_image_uncrop_vga_pane_ParamLimits

0x2230,	// (0x0002653a) video4_image_uncrop_vga_pane

0xacec,	// (0x0002eff6) bg_tb_trans_pane_cp07

0xcfe4,	// (0x000312ee) vid4_indicators_pane_g1

0xd036,	// (0x00031340) vid4_indicators_pane_g2

0xd046,	// (0x00031350) vid4_indicators_pane_g3

0x0004,

0xf899,	// (0x00033ba3) vid4_indicators_pane_g

0xd073,	// (0x0003137d) vid4_indicators_pane_t1

0x74ae,	// (0x0002b7b8) cam4_autofocus_pane_g1

0x74b6,	// (0x0002b7c0) cam4_autofocus_pane_g2

0x74be,	// (0x0002b7c8) cam4_autofocus_pane_g3

0x0002,

0xf8a4,	// (0x00033bae) cam4_autofocus_pane_g

0x74c6,	// (0x0002b7d0) cam4_autofocus_pane_g3_copy1

0x7356,	// (0x0002b660) video_down_pane_cp_t1

0x7364,	// (0x0002b66e) video_down_pane_cp_t2

0x0001,

0xf81c,	// (0x00033b26) video_down_pane_cp_t

0xacec,	// (0x0002eff6) popup_vitu2_window_ParamLimits

0xacec,	// (0x0002eff6) popup_vitu2_window

0x2248,	// (0x00026552) aid_size_cell2_itu2_ParamLimits

0x2248,	// (0x00026552) aid_size_cell2_itu2

0x226e,	// (0x00026578) aid_size_cell_itu2_ParamLimits

0x226e,	// (0x00026578) aid_size_cell_itu2

0x22c0,	// (0x000265ca) bg_popup_window_pane_cp09_ParamLimits

0x22c0,	// (0x000265ca) bg_popup_window_pane_cp09

0x22ce,	// (0x000265d8) field_vitu2_entry_pane_ParamLimits

0x22ce,	// (0x000265d8) field_vitu2_entry_pane

0x22e8,	// (0x000265f2) grid_vitu2_function_pane_ParamLimits

0x22e8,	// (0x000265f2) grid_vitu2_function_pane

0x2323,	// (0x0002662d) grid_vitu2_itu_pane_ParamLimits

0x2323,	// (0x0002662d) grid_vitu2_itu_pane

0x2391,	// (0x0002669b) cell_vitu2_itu_pane_ParamLimits

0x2391,	// (0x0002669b) cell_vitu2_itu_pane

0x23b9,	// (0x000266c3) cell_vitu2_function_pane_ParamLimits

0x23b9,	// (0x000266c3) cell_vitu2_function_pane

0xd08d,	// (0x00031397) bg_popup_call_pane_cp08_ParamLimits

0xd08d,	// (0x00031397) bg_popup_call_pane_cp08

0xd0a4,	// (0x000313ae) field_vitu2_entry_pane_g1

0xd0b0,	// (0x000313ba) field_vitu2_entry_pane_g2

0x0002,

0xf8ab,	// (0x00033bb5) field_vitu2_entry_pane_g

0x74ce,	// (0x0002b7d8) field_vitu2_entry_pane_t1_ParamLimits

0x74ce,	// (0x0002b7d8) field_vitu2_entry_pane_t1

0xd0bc,	// (0x000313c6) field_vitu2_entry_pane_t2_ParamLimits

0xd0bc,	// (0x000313c6) field_vitu2_entry_pane_t2

0x0001,

0xf8b2,	// (0x00033bbc) field_vitu2_entry_pane_t_ParamLimits

0xf8b2,	// (0x00033bbc) field_vitu2_entry_pane_t

0x23f8,	// (0x00026702) bg_button_pane_cp010_ParamLimits

0x23f8,	// (0x00026702) bg_button_pane_cp010

0x2406,	// (0x00026710) cell_vitu2_itu_pane_g1

0x242c,	// (0x00026736) cell_vitu2_itu_pane_t1_ParamLimits

0x242c,	// (0x00026736) cell_vitu2_itu_pane_t1

0x248a,	// (0x00026794) cell_vitu2_itu_pane_t2_ParamLimits

0x248a,	// (0x00026794) cell_vitu2_itu_pane_t2

0x0002,

0xf8bc,	// (0x00033bc6) cell_vitu2_itu_pane_t_ParamLimits

0xf8bc,	// (0x00033bc6) cell_vitu2_itu_pane_t

0xacec,	// (0x0002eff6) bg_button_pane_cp011

0x2576,	// (0x00026880) cell_vitu2_function_pane_g1

0xacfa,	// (0x0002f004) main_myfav_hc_pane

0x1fab,	// (0x000262b5) popup_image3_note_pane_ParamLimits

0x1fab,	// (0x000262b5) popup_image3_note_pane

0x1fc5,	// (0x000262cf) popup_image3_tool_bar_pane_ParamLimits

0x1fc5,	// (0x000262cf) popup_image3_tool_bar_pane

0x2518,	// (0x00026822) cell_vitu2_itu_pane_t3_ParamLimits

0x2518,	// (0x00026822) cell_vitu2_itu_pane_t3

0x2767,	// (0x00026a71) bg_popup_trans_pane

0xd0e1,	// (0x000313eb) grid_image3_tool_bar_pane

0xd0eb,	// (0x000313f5) bg_popup_trans_pane_g1

0x3fdd,	// (0x000282e7) bg_popup_trans_pane_g2

0xd0f3,	// (0x000313fd) bg_popup_trans_pane_g3

0xd0fb,	// (0x00031405) bg_popup_trans_pane_g4

0xd103,	// (0x0003140d) bg_popup_trans_pane_g5

0xd10b,	// (0x00031415) bg_popup_trans_pane_g6

0xd113,	// (0x0003141d) bg_popup_trans_pane_g7

0xd11b,	// (0x00031425) bg_popup_trans_pane_g8

0x3fbd,	// (0x000282c7) bg_popup_trans_pane_g9

0x0008,

0xf8c3,	// (0x00033bcd) bg_popup_trans_pane_g

0xd123,	// (0x0003142d) cell_image3_tool_bar_pane_ParamLimits

0xd123,	// (0x0003142d) cell_image3_tool_bar_pane

0x398e,	// (0x00027c98) cell_image3_tool_bar_pane_g1

0x2767,	// (0x00026a71) bg_popup_trans_pane_cp1

0xd137,	// (0x00031441) popup_image3_note_pane_t1

0xd145,	// (0x0003144f) popup_image3_note_pane_t2

0xd153,	// (0x0003145d) popup_image3_note_pane_t3

0x0002,

0xf8d6,	// (0x00033be0) popup_image3_note_pane_t

0xd161,	// (0x0003146b) popup_image3_note_pane_t3_copy1

0x74fc,	// (0x0002b806) bg_myfav_hc_instruction_pane_ParamLimits

0x74fc,	// (0x0002b806) bg_myfav_hc_instruction_pane

0x750e,	// (0x0002b818) cell_myfav_contact_pane_ParamLimits

0x750e,	// (0x0002b818) cell_myfav_contact_pane

0x7528,	// (0x0002b832) cell_myfav_contact_pane_cp1_ParamLimits

0x7528,	// (0x0002b832) cell_myfav_contact_pane_cp1

0x753e,	// (0x0002b848) cell_myfav_contact_pane_cp2_ParamLimits

0x753e,	// (0x0002b848) cell_myfav_contact_pane_cp2

0x7554,	// (0x0002b85e) cell_myfav_contact_pane_cp3_ParamLimits

0x7554,	// (0x0002b85e) cell_myfav_contact_pane_cp3

0x7569,	// (0x0002b873) cell_myfav_contact_pane_cp4_ParamLimits

0x7569,	// (0x0002b873) cell_myfav_contact_pane_cp4

0x757d,	// (0x0002b887) cell_myfav_contact_pane_cp5_ParamLimits

0x757d,	// (0x0002b887) cell_myfav_contact_pane_cp5

0x7591,	// (0x0002b89b) cell_myfav_contact_pane_cp6_ParamLimits

0x7591,	// (0x0002b89b) cell_myfav_contact_pane_cp6

0x75a5,	// (0x0002b8af) cell_myfav_contact_pane_cp7_ParamLimits

0x75a5,	// (0x0002b8af) cell_myfav_contact_pane_cp7

0xd16f,	// (0x00031479) listscroll_gen_pane_cp05

0x75bd,	// (0x0002b8c7) main_myfav_hc_pane_g1_ParamLimits

0x75bd,	// (0x0002b8c7) main_myfav_hc_pane_g1

0x75d3,	// (0x0002b8dd) main_myfav_hc_pane_g2_ParamLimits

0x75d3,	// (0x0002b8dd) main_myfav_hc_pane_g2

0x0002,

0xf8dd,	// (0x00033be7) main_myfav_hc_pane_g_ParamLimits

0xf8dd,	// (0x00033be7) main_myfav_hc_pane_g

0x75fd,	// (0x0002b907) main_myfav_hc_pane_t1_ParamLimits

0x75fd,	// (0x0002b907) main_myfav_hc_pane_t1

0xd178,	// (0x00031482) main_myfav_hc_pane_t2_ParamLimits

0xd178,	// (0x00031482) main_myfav_hc_pane_t2

0xd18a,	// (0x00031494) main_myfav_hc_pane_t3_ParamLimits

0xd18a,	// (0x00031494) main_myfav_hc_pane_t3

0x7612,	// (0x0002b91c) main_myfav_hc_pane_t4_ParamLimits

0x7612,	// (0x0002b91c) main_myfav_hc_pane_t4

0x0004,

0xf8e4,	// (0x00033bee) main_myfav_hc_pane_t_ParamLimits

0xf8e4,	// (0x00033bee) main_myfav_hc_pane_t

0x398e,	// (0x00027c98) bg_myfav_hc_instruction_pane_g1

0xd19c,	// (0x000314a6) cell_myfav_contact_pane_g1_ParamLimits

0xd19c,	// (0x000314a6) cell_myfav_contact_pane_g1

0xd19c,	// (0x000314a6) cell_myfav_contact_pane_g2_ParamLimits

0xd19c,	// (0x000314a6) cell_myfav_contact_pane_g2

0xd1a8,	// (0x000314b2) cell_myfav_contact_pane_g3_ParamLimits

0xd1a8,	// (0x000314b2) cell_myfav_contact_pane_g3

0x2f23,	// (0x0002722d) cell_myfav_contact_pane_g4_ParamLimits

0x2f23,	// (0x0002722d) cell_myfav_contact_pane_g4

0xd1b5,	// (0x000314bf) cell_myfav_contact_pane_g5_ParamLimits

0xd1b5,	// (0x000314bf) cell_myfav_contact_pane_g5

0x0004,

0xf8ef,	// (0x00033bf9) cell_myfav_contact_pane_g_ParamLimits

0xf8ef,	// (0x00033bf9) cell_myfav_contact_pane_g

0x75e9,	// (0x0002b8f3) main_myfav_hc_pane_g3_ParamLimits

0x75e9,	// (0x0002b8f3) main_myfav_hc_pane_g3

0x1566,	// (0x00025870) popup_adpt_find_window

0x7636,	// (0x0002b940) afind_page_pane_ParamLimits

0x7636,	// (0x0002b940) afind_page_pane

0x764b,	// (0x0002b955) aid_size_cell_afind_ParamLimits

0x764b,	// (0x0002b955) aid_size_cell_afind

0x7669,	// (0x0002b973) bg_popup_sub_pane_cp09_ParamLimits

0x7669,	// (0x0002b973) bg_popup_sub_pane_cp09

0x7676,	// (0x0002b980) find_pane_cp01_ParamLimits

0x7676,	// (0x0002b980) find_pane_cp01

0xd1c1,	// (0x000314cb) grid_afind_control_pane_ParamLimits

0xd1c1,	// (0x000314cb) grid_afind_control_pane

0x7683,	// (0x0002b98d) grid_afind_pane_ParamLimits

0x7683,	// (0x0002b98d) grid_afind_pane

0x76a1,	// (0x0002b9ab) cell_afind_pane_ParamLimits

0x76a1,	// (0x0002b9ab) cell_afind_pane

0x398e,	// (0x00027c98) afind_page_pane_g1

0x76f0,	// (0x0002b9fa) afind_page_pane_g2

0x76f8,	// (0x0002ba02) afind_page_pane_g3

0x0002,

0xf8fa,	// (0x00033c04) afind_page_pane_g

0x7700,	// (0x0002ba0a) afind_page_pane_t1

0xd1e7,	// (0x000314f1) cell_afind_grid_control_pane_ParamLimits

0xd1e7,	// (0x000314f1) cell_afind_grid_control_pane

0xce85,	// (0x0003118f) bg_button_pane_cp69_ParamLimits

0xce85,	// (0x0003118f) bg_button_pane_cp69

0x770e,	// (0x0002ba18) cell_afind_pane_g1_ParamLimits

0x770e,	// (0x0002ba18) cell_afind_pane_g1

0x771b,	// (0x0002ba25) cell_afind_pane_t1_ParamLimits

0x771b,	// (0x0002ba25) cell_afind_pane_t1

0x39f0,	// (0x00027cfa) bg_button_pane_cp72

0xd1f6,	// (0x00031500) cell_afind_grid_control_pane_g1

0x5f4c,	// (0x0002a256) aid_image_placing_area_ParamLimits

0x5f4c,	// (0x0002a256) aid_image_placing_area

0x2f15,	// (0x0002721f) field_vitu_entry_pane_g1_ParamLimits

0x2f15,	// (0x0002721f) field_vitu_entry_pane_g1

0x2f15,	// (0x0002721f) field_vitu_entry_pane_g2_ParamLimits

0x2f15,	// (0x0002721f) field_vitu_entry_pane_g2

0x0001,

0xf7a7,	// (0x00033ab1) field_vitu_entry_pane_g_ParamLimits

0xf7a7,	// (0x00033ab1) field_vitu_entry_pane_g

0xc9c7,	// (0x00030cd1) cell_vitu_itu_pane_g1_ParamLimits

0xc9aa,	// (0x00030cb4) cell_vitu_itu_pane_t3_ParamLimits

0xc9aa,	// (0x00030cb4) cell_vitu_itu_pane_t3

0xce39,	// (0x00031143) mp4_progress_pane_t1_ParamLimits

0xce50,	// (0x0003115a) mp4_progress_pane_t2_ParamLimits

0xf840,	// (0x00033b4a) mp4_progress_pane_t_ParamLimits

0xce67,	// (0x00031171) mup_progress_pane_cp04_ParamLimits

0x7624,	// (0x0002b92e) main_myfav_hc_pane_t5_ParamLimits

0x7624,	// (0x0002b92e) main_myfav_hc_pane_t5

0xacbb,	// (0x0002efc5) aid_zoom_text_primary

0x1566,	// (0x00025870) popup_adpt_find_window_ParamLimits

0xacec,	// (0x0002eff6) main_cam_set_pane

0x2107,	// (0x00026411) cam4_zoom_pane_ParamLimits

0x2107,	// (0x00026411) cam4_zoom_pane

0x772d,	// (0x0002ba37) main_cam_set_pane_g1_ParamLimits

0x772d,	// (0x0002ba37) main_cam_set_pane_g1

0x773b,	// (0x0002ba45) main_cam_set_pane_g2_ParamLimits

0x773b,	// (0x0002ba45) main_cam_set_pane_g2

0x0001,

0xf901,	// (0x00033c0b) main_cam_set_pane_g_ParamLimits

0xf901,	// (0x00033c0b) main_cam_set_pane_g

0x775a,	// (0x0002ba64) main_cam_set_pane_t1_ParamLimits

0x775a,	// (0x0002ba64) main_cam_set_pane_t1

0x776c,	// (0x0002ba76) main_cset_listscroll_pane_ParamLimits

0x776c,	// (0x0002ba76) main_cset_listscroll_pane

0x778e,	// (0x0002ba98) main_cset_slider_pane_ParamLimits

0x778e,	// (0x0002ba98) main_cset_slider_pane

0xd207,	// (0x00031511) main_cset_list_pane_ParamLimits

0xd207,	// (0x00031511) main_cset_list_pane

0xd217,	// (0x00031521) scroll_pane_cp028

0x77b2,	// (0x0002babc) aid_area_touch_slider

0x77ce,	// (0x0002bad8) cset_slider_pane

0x77f1,	// (0x0002bafb) main_cset_slider_pane_g1

0x7806,	// (0x0002bb10) main_cset_slider_pane_g2

0x0011,

0xf906,	// (0x00033c10) main_cset_slider_pane_g

0xd250,	// (0x0003155a) main_cset_slider_pane_t1

0x78c2,	// (0x0002bbcc) main_cset_slider_pane_t2

0x78dc,	// (0x0002bbe6) main_cset_slider_pane_t3

0x78f6,	// (0x0002bc00) main_cset_slider_pane_t4

0x7910,	// (0x0002bc1a) main_cset_slider_pane_t5

0x792a,	// (0x0002bc34) main_cset_slider_pane_t6

0x793f,	// (0x0002bc49) main_cset_slider_pane_t7

0x000e,

0xf92b,	// (0x00033c35) main_cset_slider_pane_t

0x7a43,	// (0x0002bd4d) cset_list_set_pane_ParamLimits

0x7a43,	// (0x0002bd4d) cset_list_set_pane

0xd2ea,	// (0x000315f4) aid_position_infowindow_above

0xd2f2,	// (0x000315fc) aid_position_infowindow_below

0x7a54,	// (0x0002bd5e) cset_list_set_pane_g1_ParamLimits

0x7a54,	// (0x0002bd5e) cset_list_set_pane_g1

0x7a60,	// (0x0002bd6a) cset_list_set_pane_g3_ParamLimits

0x7a60,	// (0x0002bd6a) cset_list_set_pane_g3

0x0001,

0xf94a,	// (0x00033c54) cset_list_set_pane_g_ParamLimits

0xf94a,	// (0x00033c54) cset_list_set_pane_g

0x7a6f,	// (0x0002bd79) cset_list_set_pane_t1_ParamLimits

0x7a6f,	// (0x0002bd79) cset_list_set_pane_t1

0x37fc,	// (0x00027b06) list_highlight_pane_cp021_ParamLimits

0x37fc,	// (0x00027b06) list_highlight_pane_cp021

0x5897,	// (0x00029ba1) cset_slider_pane_g1

0x58a9,	// (0x00029bb3) cset_slider_pane_g2

0x58a0,	// (0x00029baa) cset_slider_pane_g3

0x0002,

0xf94f,	// (0x00033c59) cset_slider_pane_g

0xd2fa,	// (0x00031604) aid_area_touch_cam4_zoom

0xd302,	// (0x0003160c) cam4_zoom_cont_pane

0xd30a,	// (0x00031614) cam4_zoom_pane_g1

0xd312,	// (0x0003161c) cam4_zoom_pane_g2

0x258a,	// (0x00026894) cam4_zoom_pane_g3

0x0002,

0xf956,	// (0x00033c60) cam4_zoom_pane_g

0xd31a,	// (0x00031624) cam4_zoom_cont_pane_g1

0xd323,	// (0x0003162d) cam4_zoom_cont_pane_g2

0xd32c,	// (0x00031636) cam4_zoom_cont_pane_g3

0x0002,

0xf95d,	// (0x00033c67) cam4_zoom_cont_pane_g

0x1ffd,	// (0x00026307) call4_image_pane_ParamLimits

0x1ffd,	// (0x00026307) call4_image_pane

0xcedb,	// (0x000311e5) call4_windows_conf_pane_ParamLimits

0xceee,	// (0x000311f8) popup_call4_audio_in_window_ParamLimits

0xceee,	// (0x000311f8) popup_call4_audio_in_window

0x2767,	// (0x00026a71) bg_popup_call2_act_pane_cp02

0xcf5e,	// (0x00031268) call4_list_conf_pane

0x398e,	// (0x00027c98) call4_image_pane_g1

0x398e,	// (0x00027c98) call4_image_pane_g2

0x0001,

0xf3c9,	// (0x000336d3) call4_image_pane_g

0xd335,	// (0x0003163f) list_single_graphic_popup_conf4_pane_ParamLimits

0xd335,	// (0x0003163f) list_single_graphic_popup_conf4_pane

0x2767,	// (0x00026a71) list_highlight_pane_cp022

0xd348,	// (0x00031652) list_single_graphic_popup_conf4_pane_g1

0x5078,	// (0x00029382) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf964,	// (0x00033c6e) list_single_graphic_popup_conf4_pane_g

0xd350,	// (0x0003165a) list_single_graphic_popup_conf4_pane_t1

0x3bd3,	// (0x00027edd) popup_vtel_slider_window_ParamLimits

0x3bd3,	// (0x00027edd) popup_vtel_slider_window

0xce73,	// (0x0003117d) dialer2_ne_pane_t2_ParamLimits

0xce73,	// (0x0003117d) dialer2_ne_pane_t2

0x0001,

0xf845,	// (0x00033b4f) dialer2_ne_pane_t_ParamLimits

0xf845,	// (0x00033b4f) dialer2_ne_pane_t

0xc1fc,	// (0x00030506) bg_popup_sub_pane_cp010_ParamLimits

0xc1fc,	// (0x00030506) bg_popup_sub_pane_cp010

0x7a84,	// (0x0002bd8e) popup_vtel_slider_window_g1_ParamLimits

0x7a84,	// (0x0002bd8e) popup_vtel_slider_window_g1

0x7a97,	// (0x0002bda1) popup_vtel_slider_window_g2_ParamLimits

0x7a97,	// (0x0002bda1) popup_vtel_slider_window_g2

0x0003,

0xf969,	// (0x00033c73) popup_vtel_slider_window_g_ParamLimits

0xf969,	// (0x00033c73) popup_vtel_slider_window_g

0x7aeb,	// (0x0002bdf5) vtel_slider_pane_ParamLimits

0x7aeb,	// (0x0002bdf5) vtel_slider_pane

0x7b0d,	// (0x0002be17) vtel_slider_pane_g1_ParamLimits

0x7b0d,	// (0x0002be17) vtel_slider_pane_g1

0x7b21,	// (0x0002be2b) vtel_slider_pane_g2_ParamLimits

0x7b21,	// (0x0002be2b) vtel_slider_pane_g2

0x7b39,	// (0x0002be43) vtel_slider_pane_g3_ParamLimits

0x7b39,	// (0x0002be43) vtel_slider_pane_g3

0x7b0d,	// (0x0002be17) vtel_slider_pane_g4_ParamLimits

0x7b0d,	// (0x0002be17) vtel_slider_pane_g4

0x7b4f,	// (0x0002be59) vtel_slider_pane_g5_ParamLimits

0x7b4f,	// (0x0002be59) vtel_slider_pane_g5

0x0004,

0xf972,	// (0x00033c7c) vtel_slider_pane_g_ParamLimits

0xf972,	// (0x00033c7c) vtel_slider_pane_g

0xacec,	// (0x0002eff6) main_gallery2_pane

0x229a,	// (0x000265a4) aid_size_row_itut2_dropdow_list_ParamLimits

0x229a,	// (0x000265a4) aid_size_row_itut2_dropdow_list

0x2304,	// (0x0002660e) grid_vitu2_function_top_pane_ParamLimits

0x2304,	// (0x0002660e) grid_vitu2_function_top_pane

0x234c,	// (0x00026656) popup_vitu2_dropdown_list_window_ParamLimits

0x234c,	// (0x00026656) popup_vitu2_dropdown_list_window

0x236d,	// (0x00026677) popup_vitu2_match_list_window

0x2592,	// (0x0002689c) cell_vitu2_function_top_pane_ParamLimits

0x2592,	// (0x0002689c) cell_vitu2_function_top_pane

0x25aa,	// (0x000268b4) cell_vitu2_function_top_pane_cp01_ParamLimits

0x25aa,	// (0x000268b4) cell_vitu2_function_top_pane_cp01

0x25c6,	// (0x000268d0) cell_vitu2_function_top_wide_pane_ParamLimits

0x25c6,	// (0x000268d0) cell_vitu2_function_top_wide_pane

0xacec,	// (0x0002eff6) bg_button_pane_cp012

0x25e3,	// (0x000268ed) cell_vitu2_function_top_pane_g1

0xd366,	// (0x00031670) bg_button_pane_cp013_ParamLimits

0xd366,	// (0x00031670) bg_button_pane_cp013

0x7b65,	// (0x0002be6f) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x7b65,	// (0x0002be6f) cell_vitu2_function_top_wide_pane_g1

0xacec,	// (0x0002eff6) bg_popup_sub_pane_cp20

0x25f7,	// (0x00026901) list_vitu2_match_list_pane

0xd0eb,	// (0x000313f5) bg_popup_sub_pane_cp20_g1

0xd0f3,	// (0x000313fd) bg_popup_sub_pane_cp20_g2

0x3fdd,	// (0x000282e7) bg_popup_sub_pane_cp20_g3

0xd0fb,	// (0x00031405) bg_popup_sub_pane_cp20_g4

0x3fbd,	// (0x000282c7) bg_popup_sub_pane_cp20_g5

0xd382,	// (0x0003168c) bg_popup_sub_pane_cp20_g6

0xd10b,	// (0x00031415) bg_popup_sub_pane_cp20_g7

0xd113,	// (0x0003141d) bg_popup_sub_pane_cp20_g8

0xd11b,	// (0x00031425) bg_popup_sub_pane_cp20_g9

0x0008,

0xf97d,	// (0x00033c87) bg_popup_sub_pane_cp20_g

0xd38a,	// (0x00031694) list_vitu2_match_list_item_pane_ParamLimits

0xd38a,	// (0x00031694) list_vitu2_match_list_item_pane

0xd39c,	// (0x000316a6) list_vitu2_match_list_item_pane_t1

0xacfa,	// (0x0002f004) bg_popup_sub_pane_cp21

0x3793,	// (0x00027a9d) grid_vitu2_dropdown_list_pane

0x2615,	// (0x0002691f) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x2615,	// (0x0002691f) cell_vitu2_dropdown_list_char_pane

0x2633,	// (0x0002693d) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x2633,	// (0x0002693d) cell_vitu2_dropdown_list_ctrl_pane

0xd3b7,	// (0x000316c1) cell_vitu2_dropdown_list_char_pane_g1

0xd3c0,	// (0x000316ca) cell_vitu2_dropdown_list_char_pane_g2

0xd3c9,	// (0x000316d3) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf99a,	// (0x00033ca4) cell_vitu2_dropdown_list_char_pane_g

0x265b,	// (0x00026965) cell_vitu2_dropdown_list_char_pane_t1

0x7b7d,	// (0x0002be87) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x7b7d,	// (0x0002be87) cell_vitu2_dropdown_list_ctrl_pane_g1

0x7b8d,	// (0x0002be97) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x7b8d,	// (0x0002be97) cell_vitu2_dropdown_list_ctrl_pane_g2

0x7b9e,	// (0x0002bea8) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x7b9e,	// (0x0002bea8) cell_vitu2_dropdown_list_ctrl_pane_g3

0x2669,	// (0x00026973) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x2669,	// (0x00026973) cell_vitu2_dropdown_list_ctrl_pane_g4

0xcfce,	// (0x000312d8) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xcfce,	// (0x000312d8) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf9a1,	// (0x00033cab) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf9a1,	// (0x00033cab) cell_vitu2_dropdown_list_ctrl_pane_g

0x7bae,	// (0x0002beb8) aid_size_cell_gallery2_ParamLimits

0x7bae,	// (0x0002beb8) aid_size_cell_gallery2

0x7bcc,	// (0x0002bed6) grid_gallery2_pane_ParamLimits

0x7bcc,	// (0x0002bed6) grid_gallery2_pane

0x71b8,	// (0x0002b4c2) scroll_pane_cp029_ParamLimits

0x71b8,	// (0x0002b4c2) scroll_pane_cp029

0x7be0,	// (0x0002beea) cell_gallery2_pane_ParamLimits

0x7be0,	// (0x0002beea) cell_gallery2_pane

0xd3d2,	// (0x000316dc) cell_gallery2_pane_g2

0x7c39,	// (0x0002bf43) cell_gallery2_pane_g3

0xd3da,	// (0x000316e4) cell_gallery2_pane_g4

0xd3e2,	// (0x000316ec) cell_gallery2_pane_g5

0x3793,	// (0x00027a9d) grid_highlight_pane_cp10

0x236d,	// (0x00026677) popup_vitu2_match_list_window_ParamLimits

0x237e,	// (0x00026688) popup_vitu2_query_window_ParamLimits

0x237e,	// (0x00026688) popup_vitu2_query_window

0xacfa,	// (0x0002f004) bg_vitu2_candi_button_pane

0xd3b7,	// (0x000316c1) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd3c0,	// (0x000316ca) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd3c9,	// (0x000316d3) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x7c41,	// (0x0002bf4b) bg_button_pane_cp015

0x7c52,	// (0x0002bf5c) bg_button_pane_cp016

0x7c5e,	// (0x0002bf68) bg_button_pane_cp017

0x56a0,	// (0x000299aa) bg_popup_sub_pane_cp22

0xd3ea,	// (0x000316f4) popup_vitu2_query_window_g1

0x7c9c,	// (0x0002bfa6) popup_vitu2_query_window_g2

0x0002,

0xf9ac,	// (0x00033cb6) popup_vitu2_query_window_g

0x7cbc,	// (0x0002bfc6) popup_vitu2_query_window_t1_ParamLimits

0x7cbc,	// (0x0002bfc6) popup_vitu2_query_window_t1

0x7cef,	// (0x0002bff9) popup_vitu2_query_window_t2_ParamLimits

0x7cef,	// (0x0002bff9) popup_vitu2_query_window_t2

0x7d01,	// (0x0002c00b) popup_vitu2_query_window_t3_ParamLimits

0x7d01,	// (0x0002c00b) popup_vitu2_query_window_t3

0x7d29,	// (0x0002c033) popup_vitu2_query_window_t4_ParamLimits

0x7d29,	// (0x0002c033) popup_vitu2_query_window_t4

0x7d3b,	// (0x0002c045) popup_vitu2_query_window_t5_ParamLimits

0x7d3b,	// (0x0002c045) popup_vitu2_query_window_t5

0x0006,

0xf9b3,	// (0x00033cbd) popup_vitu2_query_window_t_ParamLimits

0xf9b3,	// (0x00033cbd) popup_vitu2_query_window_t

0xd1ff,	// (0x00031509) main_cset_text_pane

0x77b2,	// (0x0002babc) aid_area_touch_slider_ParamLimits

0x77ce,	// (0x0002bad8) cset_slider_pane_ParamLimits

0x77f1,	// (0x0002bafb) main_cset_slider_pane_g1_ParamLimits

0x7806,	// (0x0002bb10) main_cset_slider_pane_g2_ParamLimits

0xd220,	// (0x0003152a) main_cset_slider_pane_g3_ParamLimits

0xd220,	// (0x0003152a) main_cset_slider_pane_g3

0x781b,	// (0x0002bb25) main_cset_slider_pane_g4_ParamLimits

0x781b,	// (0x0002bb25) main_cset_slider_pane_g4

0x782a,	// (0x0002bb34) main_cset_slider_pane_g5_ParamLimits

0x782a,	// (0x0002bb34) main_cset_slider_pane_g5

0x7836,	// (0x0002bb40) main_cset_slider_pane_g6_ParamLimits

0x7836,	// (0x0002bb40) main_cset_slider_pane_g6

0xf906,	// (0x00033c10) main_cset_slider_pane_g_ParamLimits

0xd250,	// (0x0003155a) main_cset_slider_pane_t1_ParamLimits

0x78c2,	// (0x0002bbcc) main_cset_slider_pane_t2_ParamLimits

0x78dc,	// (0x0002bbe6) main_cset_slider_pane_t3_ParamLimits

0x78f6,	// (0x0002bc00) main_cset_slider_pane_t4_ParamLimits

0x7910,	// (0x0002bc1a) main_cset_slider_pane_t5_ParamLimits

0x792a,	// (0x0002bc34) main_cset_slider_pane_t6_ParamLimits

0x793f,	// (0x0002bc49) main_cset_slider_pane_t7_ParamLimits

0x7969,	// (0x0002bc73) main_cset_slider_pane_t8_ParamLimits

0x7969,	// (0x0002bc73) main_cset_slider_pane_t8

0x7991,	// (0x0002bc9b) main_cset_slider_pane_t9_ParamLimits

0x7991,	// (0x0002bc9b) main_cset_slider_pane_t9

0x79b9,	// (0x0002bcc3) main_cset_slider_pane_t10_ParamLimits

0x79b9,	// (0x0002bcc3) main_cset_slider_pane_t10

0x79e1,	// (0x0002bceb) main_cset_slider_pane_t11_ParamLimits

0x79e1,	// (0x0002bceb) main_cset_slider_pane_t11

0x7a09,	// (0x0002bd13) main_cset_slider_pane_t12_ParamLimits

0x7a09,	// (0x0002bd13) main_cset_slider_pane_t12

0x7a26,	// (0x0002bd30) main_cset_slider_pane_t13_ParamLimits

0x7a26,	// (0x0002bd30) main_cset_slider_pane_t13

0xf92b,	// (0x00033c35) main_cset_slider_pane_t_ParamLimits

0x2767,	// (0x00026a71) bg_popup_sub_pane_cp011

0xd3f6,	// (0x00031700) main_cset_text_pane_g1

0xd3fe,	// (0x00031708) main_cset_text_pane_t1

0xd40c,	// (0x00031716) main_cset_text_pane_t2

0xd41a,	// (0x00031724) main_cset_text_pane_t3

0xd428,	// (0x00031732) main_cset_text_pane_t4

0xd436,	// (0x00031740) main_cset_text_pane_t5

0xd444,	// (0x0003174e) main_cset_text_pane_t6

0xd452,	// (0x0003175c) main_cset_text_pane_t7

0x0006,

0xf9c2,	// (0x00033ccc) main_cset_text_pane_t

0xacfa,	// (0x0002f004) main_cam4_burst_pane

0xacfa,	// (0x0002f004) main_cam5_pane

0xd1d5,	// (0x000314df) bg_button_pane_cp019

0xd1de,	// (0x000314e8) bg_button_pane_cp020

0xd22c,	// (0x00031536) main_cset_slider_pane_g7_ParamLimits

0xd22c,	// (0x00031536) main_cset_slider_pane_g7

0xd238,	// (0x00031542) main_cset_slider_pane_g8_ParamLimits

0xd238,	// (0x00031542) main_cset_slider_pane_g8

0x784a,	// (0x0002bb54) main_cset_slider_pane_g9_ParamLimits

0x784a,	// (0x0002bb54) main_cset_slider_pane_g9

0x7856,	// (0x0002bb60) main_cset_slider_pane_g10_ParamLimits

0x7856,	// (0x0002bb60) main_cset_slider_pane_g10

0x7862,	// (0x0002bb6c) main_cset_slider_pane_g11_ParamLimits

0x7862,	// (0x0002bb6c) main_cset_slider_pane_g11

0x786e,	// (0x0002bb78) main_cset_slider_pane_g12_ParamLimits

0x786e,	// (0x0002bb78) main_cset_slider_pane_g12

0x787a,	// (0x0002bb84) main_cset_slider_pane_g13_ParamLimits

0x787a,	// (0x0002bb84) main_cset_slider_pane_g13

0x7886,	// (0x0002bb90) main_cset_slider_pane_g14_ParamLimits

0x7886,	// (0x0002bb90) main_cset_slider_pane_g14

0x7892,	// (0x0002bb9c) main_cset_slider_pane_g15_ParamLimits

0x7892,	// (0x0002bb9c) main_cset_slider_pane_g15

0xd278,	// (0x00031582) main_cset_slider_pane_t14_ParamLimits

0xd278,	// (0x00031582) main_cset_slider_pane_t14

0xd2b1,	// (0x000315bb) main_cset_slider_pane_t15_ParamLimits

0xd2b1,	// (0x000315bb) main_cset_slider_pane_t15

0x7da3,	// (0x0002c0ad) aid_cam4_burst_size_cell_ParamLimits

0x7da3,	// (0x0002c0ad) aid_cam4_burst_size_cell

0x7dc3,	// (0x0002c0cd) grid_cam4_burst_pane_ParamLimits

0x7dc3,	// (0x0002c0cd) grid_cam4_burst_pane

0x7de9,	// (0x0002c0f3) linegrid_cam4_burst_pane_ParamLimits

0x7de9,	// (0x0002c0f3) linegrid_cam4_burst_pane

0x7e0b,	// (0x0002c115) scroll_pane_cp30_ParamLimits

0x7e0b,	// (0x0002c115) scroll_pane_cp30

0x7e17,	// (0x0002c121) cell_cam4_burst_pane_ParamLimits

0x7e17,	// (0x0002c121) cell_cam4_burst_pane

0xd460,	// (0x0003176a) linegrid_cam4_burst_pane_g1_ParamLimits

0xd460,	// (0x0003176a) linegrid_cam4_burst_pane_g1

0x7e5e,	// (0x0002c168) linegrid_cam4_burst_pane_g2_ParamLimits

0x7e5e,	// (0x0002c168) linegrid_cam4_burst_pane_g2

0xd46d,	// (0x00031777) linegrid_cam4_burst_pane_g3_ParamLimits

0xd46d,	// (0x00031777) linegrid_cam4_burst_pane_g3

0x0002,

0xf9d1,	// (0x00033cdb) linegrid_cam4_burst_pane_g_ParamLimits

0xf9d1,	// (0x00033cdb) linegrid_cam4_burst_pane_g

0x7e6f,	// (0x0002c179) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7e6f,	// (0x0002c179) linegrid_cam4_burst_pane_g3_copy1

0xd47a,	// (0x00031784) linegrid_cam4_burst_pane_g4_ParamLimits

0xd47a,	// (0x00031784) linegrid_cam4_burst_pane_g4

0x7e89,	// (0x0002c193) linegrid_cam4_burst_pane_g5_ParamLimits

0x7e89,	// (0x0002c193) linegrid_cam4_burst_pane_g5

0x7e9a,	// (0x0002c1a4) linegrid_cam4_burst_pane_g6_ParamLimits

0x7e9a,	// (0x0002c1a4) linegrid_cam4_burst_pane_g6

0xd487,	// (0x00031791) linegrid_cam4_burst_pane_g7_ParamLimits

0xd487,	// (0x00031791) linegrid_cam4_burst_pane_g7

0x7eab,	// (0x0002c1b5) cell_cam4_burst_pane_g1

0xd4a0,	// (0x000317aa) main_cam5_pane_t1_ParamLimits

0xd4a0,	// (0x000317aa) main_cam5_pane_t1

0xd4b2,	// (0x000317bc) main_cam5_pane_t2_ParamLimits

0xd4b2,	// (0x000317bc) main_cam5_pane_t2

0xd4c4,	// (0x000317ce) main_cam5_pane_t3_ParamLimits

0xd4c4,	// (0x000317ce) main_cam5_pane_t3

0xd4d6,	// (0x000317e0) main_cam5_pane_t4_ParamLimits

0xd4d6,	// (0x000317e0) main_cam5_pane_t4

0xd4ec,	// (0x000317f6) main_cam5_pane_t5_ParamLimits

0xd4ec,	// (0x000317f6) main_cam5_pane_t5

0xd4fe,	// (0x00031808) main_cam5_pane_t6_ParamLimits

0xd4fe,	// (0x00031808) main_cam5_pane_t6

0xd510,	// (0x0003181a) main_cam5_pane_t7_ParamLimits

0xd510,	// (0x0003181a) main_cam5_pane_t7

0xd522,	// (0x0003182c) main_cam5_pane_t8_ParamLimits

0xd522,	// (0x0003182c) main_cam5_pane_t8

0xd53e,	// (0x00031848) main_cam5_pane_t9_ParamLimits

0xd53e,	// (0x00031848) main_cam5_pane_t9

0xd550,	// (0x0003185a) main_cam5_pane_t10_ParamLimits

0xd550,	// (0x0003185a) main_cam5_pane_t10

0xd562,	// (0x0003186c) main_cam5_pane_t11_ParamLimits

0xd562,	// (0x0003186c) main_cam5_pane_t11

0xd574,	// (0x0003187e) main_cam5_pane_t12_ParamLimits

0xd574,	// (0x0003187e) main_cam5_pane_t12

0xd589,	// (0x00031893) main_cam5_pane_t13_ParamLimits

0xd589,	// (0x00031893) main_cam5_pane_t13

0x000c,

0xf9dd,	// (0x00033ce7) main_cam5_pane_t_ParamLimits

0xf9dd,	// (0x00033ce7) main_cam5_pane_t

0x15c3,	// (0x000258cd) popup_scut_keymap_window_ParamLimits

0x15c3,	// (0x000258cd) popup_scut_keymap_window

0x7ec0,	// (0x0002c1ca) aid_size_cell_brow_shortcut

0x3793,	// (0x00027a9d) bg_popup_window_pane_cp010

0x7ecc,	// (0x0002c1d6) grid_scut_pane

0x7ed6,	// (0x0002c1e0) cell_scut_pane_ParamLimits

0x7ed6,	// (0x0002c1e0) cell_scut_pane

0x7eeb,	// (0x0002c1f5) cell_scut_pane_g1

0xd5a6,	// (0x000318b0) cell_scut_pane_t1

0xd5b5,	// (0x000318bf) cell_scut_pane_t2

0x7ef4,	// (0x0002c1fe) cell_scut_pane_t3

0x0002,

0xf9f8,	// (0x00033d02) cell_scut_pane_t

0x6a30,	// (0x0002ad3a) main_mup3_pane_g8_ParamLimits

0x6a30,	// (0x0002ad3a) main_mup3_pane_g8

0x22ae,	// (0x000265b8) area_vitu2_query_pane_ParamLimits

0x22ae,	// (0x000265b8) area_vitu2_query_pane

0x7c6a,	// (0x0002bf74) input_focus_pane_cp08

0xd5c4,	// (0x000318ce) area_vitu2_query_pane_g1

0x7f02,	// (0x0002c20c) area_vitu2_query_pane_g2

0x0001,

0xf9ff,	// (0x00033d09) area_vitu2_query_pane_g

0x7f11,	// (0x0002c21b) area_vitu2_query_pane_t1_ParamLimits

0x7f11,	// (0x0002c21b) area_vitu2_query_pane_t1

0x7f23,	// (0x0002c22d) area_vitu2_query_pane_t2_ParamLimits

0x7f23,	// (0x0002c22d) area_vitu2_query_pane_t2

0x7f35,	// (0x0002c23f) area_vitu2_query_pane_t3_ParamLimits

0x7f35,	// (0x0002c23f) area_vitu2_query_pane_t3

0xd5d0,	// (0x000318da) area_vitu2_query_pane_t4_ParamLimits

0xd5d0,	// (0x000318da) area_vitu2_query_pane_t4

0xd5f8,	// (0x00031902) area_vitu2_query_pane_t5_ParamLimits

0xd5f8,	// (0x00031902) area_vitu2_query_pane_t5

0xd620,	// (0x0003192a) area_vitu2_query_pane_t6_ParamLimits

0xd620,	// (0x0003192a) area_vitu2_query_pane_t6

0x0006,

0xfa04,	// (0x00033d0e) area_vitu2_query_pane_t_ParamLimits

0xfa04,	// (0x00033d0e) area_vitu2_query_pane_t

0x7f5d,	// (0x0002c267) bg_button_pane_cp018

0x7f69,	// (0x0002c273) bg_button_pane_cp021

0x7f75,	// (0x0002c27f) bg_button_pane_cp022

0x7f94,	// (0x0002c29e) input_focus_pane_cp09

0x53cb,	// (0x000296d5) aid_size_touch_mv_arrow_left

0x53ef,	// (0x000296f9) aid_size_touch_mv_arrow_right

0x78aa,	// (0x0002bbb4) main_cset_slider_pane_g16_ParamLimits

0x78aa,	// (0x0002bbb4) main_cset_slider_pane_g16

0x78b6,	// (0x0002bbc0) main_cset_slider_pane_g17_ParamLimits

0x78b6,	// (0x0002bbc0) main_cset_slider_pane_g17

0x7eab,	// (0x0002c1b5) cell_cam4_burst_pane_g1_ParamLimits

0x2767,	// (0x00026a71) compa_mode_pane

0x7aa7,	// (0x0002bdb1) popup_vtel_slider_window_g3_ParamLimits

0x7aa7,	// (0x0002bdb1) popup_vtel_slider_window_g3

0x7abe,	// (0x0002bdc8) popup_vtel_slider_window_g4_ParamLimits

0x7abe,	// (0x0002bdc8) popup_vtel_slider_window_g4

0x7ad5,	// (0x0002bddf) popup_vtel_slider_window_t1_ParamLimits

0x7ad5,	// (0x0002bddf) popup_vtel_slider_window_t1

0xacfa,	// (0x0002f004) main_cl_pane

0xbefe,	// (0x00030208) popup_imed_adjust2_window_ParamLimits

0x56a0,	// (0x000299aa) bg_tb_trans_pane_cp05_ParamLimits

0xc8df,	// (0x00030be9) popup_imed_adjust2_window_g1_ParamLimits

0xc8ee,	// (0x00030bf8) popup_imed_adjust2_window_g2_ParamLimits

0xc8ee,	// (0x00030bf8) popup_imed_adjust2_window_g2

0xc8fa,	// (0x00030c04) popup_imed_adjust2_window_g3_ParamLimits

0xc8fa,	// (0x00030c04) popup_imed_adjust2_window_g3

0x0002,

0xf76b,	// (0x00033a75) popup_imed_adjust2_window_g_ParamLimits

0xf76b,	// (0x00033a75) popup_imed_adjust2_window_g

0xc906,	// (0x00030c10) popup_imed_adjust2_window_t1_ParamLimits

0xc91e,	// (0x00030c28) slider_imed_adjust_pane_ParamLimits

0xc932,	// (0x00030c3c) slider_imed_adjust_pane_g1_ParamLimits

0xc942,	// (0x00030c4c) slider_imed_adjust_pane_g2_ParamLimits

0xc952,	// (0x00030c5c) slider_imed_adjust_pane_g3_ParamLimits

0xc963,	// (0x00030c6d) slider_imed_adjust_pane_g4_ParamLimits

0xf772,	// (0x00033a7c) slider_imed_adjust_pane_g_ParamLimits

0x20b6,	// (0x000263c0) aid_touch_area_cam4_ParamLimits

0x20b6,	// (0x000263c0) aid_touch_area_cam4

0xcfa2,	// (0x000312ac) battery_pane_cp01

0x214e,	// (0x00026458) main_camera4_pane_g6_ParamLimits

0x214e,	// (0x00026458) main_camera4_pane_g6

0x216f,	// (0x00026479) main_camera4_pane_t2_ParamLimits

0x216f,	// (0x00026479) main_camera4_pane_t2

0x0001,

0xf879,	// (0x00033b83) main_camera4_pane_t_ParamLimits

0xf879,	// (0x00033b83) main_camera4_pane_t

0x218b,	// (0x00026495) aid_touch_area_vid4_ParamLimits

0x218b,	// (0x00026495) aid_touch_area_vid4

0x21cd,	// (0x000264d7) main_video4_pane_g5_ParamLimits

0x21cd,	// (0x000264d7) main_video4_pane_g5

0x21ee,	// (0x000264f8) vid4_progress_pane_ParamLimits

0x21ee,	// (0x000264f8) vid4_progress_pane

0xd244,	// (0x0003154e) main_cset_slider_pane_g18_ParamLimits

0xd244,	// (0x0003154e) main_cset_slider_pane_g18

0xd494,	// (0x0003179e) cell_cam4_burst_pane_g2_ParamLimits

0xd494,	// (0x0003179e) cell_cam4_burst_pane_g2

0x0001,

0xf9d8,	// (0x00033ce2) cell_cam4_burst_pane_g_ParamLimits

0xf9d8,	// (0x00033ce2) cell_cam4_burst_pane_g

0x3063,	// (0x0002736d) bg_cl_pane_ParamLimits

0x3063,	// (0x0002736d) bg_cl_pane

0x7fa4,	// (0x0002c2ae) cl_header_pane_ParamLimits

0x7fa4,	// (0x0002c2ae) cl_header_pane

0x7fb8,	// (0x0002c2c2) cl_listscroll_pane_ParamLimits

0x7fb8,	// (0x0002c2c2) cl_listscroll_pane

0xd66c,	// (0x00031976) bg_cl_pane_g1

0xd674,	// (0x0003197e) bg_cl_pane_g2

0xd67c,	// (0x00031986) bg_cl_pane_g3

0xd684,	// (0x0003198e) bg_cl_pane_g4

0xd68c,	// (0x00031996) bg_cl_pane_g5

0xd694,	// (0x0003199e) bg_cl_pane_g6

0xd69c,	// (0x000319a6) bg_cl_pane_g7

0xd6a4,	// (0x000319ae) bg_cl_pane_g8

0xd6ac,	// (0x000319b6) bg_cl_pane_g9

0x0008,

0xfa13,	// (0x00033d1d) bg_cl_pane_g

0x7fc8,	// (0x0002c2d2) aid_height_cl_leading_ParamLimits

0x7fc8,	// (0x0002c2d2) aid_height_cl_leading

0x7fd4,	// (0x0002c2de) aid_height_cl_text_ParamLimits

0x7fd4,	// (0x0002c2de) aid_height_cl_text

0x37fc,	// (0x00027b06) bg_cl_header_pane_ParamLimits

0x37fc,	// (0x00027b06) bg_cl_header_pane

0x7ff3,	// (0x0002c2fd) cl_header_pane_g1_ParamLimits

0x7ff3,	// (0x0002c2fd) cl_header_pane_g1

0x8009,	// (0x0002c313) cl_header_pane_t1_ParamLimits

0x8009,	// (0x0002c313) cl_header_pane_t1

0xd6b4,	// (0x000319be) cl_list_pane

0xd6bd,	// (0x000319c7) hc_scroll_pane_cp01

0x3fbd,	// (0x000282c7) bg_cl_header_pane_g1

0xd0eb,	// (0x000313f5) bg_cl_header_pane_g2

0x3fdd,	// (0x000282e7) bg_cl_header_pane_g3

0xd0fb,	// (0x00031405) bg_cl_header_pane_g4

0xd0f3,	// (0x000313fd) bg_cl_header_pane_g5

0xd382,	// (0x0003168c) bg_cl_header_pane_g6

0xd113,	// (0x0003141d) bg_cl_header_pane_g7

0xd11b,	// (0x00031425) bg_cl_header_pane_g8

0xd10b,	// (0x00031415) bg_cl_header_pane_g9

0x0008,

0xfa26,	// (0x00033d30) bg_cl_header_pane_g

0x8022,	// (0x0002c32c) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x8022,	// (0x0002c32c) hc_cl_list_double_graphic_heading_pane

0x8032,	// (0x0002c33c) hc_cl_list_single_graphic_pane_ParamLimits

0x8032,	// (0x0002c33c) hc_cl_list_single_graphic_pane

0x8045,	// (0x0002c34f) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x8045,	// (0x0002c34f) hc_cl_list_single_graphic_pane_g1

0x8051,	// (0x0002c35b) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x8051,	// (0x0002c35b) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa39,	// (0x00033d43) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa39,	// (0x00033d43) hc_cl_list_single_graphic_pane_g

0x8065,	// (0x0002c36f) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x8065,	// (0x0002c36f) hc_cl_list_single_graphic_pane_t1

0x8045,	// (0x0002c34f) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x8045,	// (0x0002c34f) hc_cl_list_double_graphic_heading_pane_g1

0x807a,	// (0x0002c384) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x807a,	// (0x0002c384) hc_cl_list_double_graphic_heading_pane_g2

0x808e,	// (0x0002c398) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x808e,	// (0x0002c398) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa3e,	// (0x00033d48) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa3e,	// (0x00033d48) hc_cl_list_double_graphic_heading_pane_g

0x80a2,	// (0x0002c3ac) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x80a2,	// (0x0002c3ac) hc_cl_list_double_graphic_heading_pane_t1

0x80b7,	// (0x0002c3c1) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x80b7,	// (0x0002c3c1) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa45,	// (0x00033d4f) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa45,	// (0x00033d4f) hc_cl_list_double_graphic_heading_pane_t

0xd6c6,	// (0x000319d0) vid4_progress_pane_g1

0xd6d5,	// (0x000319df) vid4_progress_pane_g2

0xd6e4,	// (0x000319ee) vid4_progress_pane_g3

0xd6f3,	// (0x000319fd) vid4_progress_pane_g4

0x0004,

0xfa4a,	// (0x00033d54) vid4_progress_pane_g

0xd70b,	// (0x00031a15) vid4_progress_pane_t1

0xd721,	// (0x00031a2b) vid4_progress_pane_t2

0x0002,

0xfa55,	// (0x00033d5f) vid4_progress_pane_t

0xd74b,	// (0x00031a55) wait_bar_pane_cp07

0xc20a,	// (0x00030514) blid_firmament_pane_ParamLimits

0xc24b,	// (0x00030555) popup_blid_sat_info2_window_g1

0xc26f,	// (0x00030579) popup_blid_sat_info2_window_t3

0xc27d,	// (0x00030587) popup_blid_sat_info2_window_t4

0xc28b,	// (0x00030595) popup_blid_sat_info2_window_t5

0xc299,	// (0x000305a3) popup_blid_sat_info2_window_t6

0xc2a9,	// (0x000305b3) popup_blid_sat_info2_window_t7

0xc2b7,	// (0x000305c1) popup_blid_sat_info2_window_t8

0xc2c5,	// (0x000305cf) popup_blid_sat_info2_window_t9

0xc2d3,	// (0x000305dd) popup_blid_sat_info2_window_t10

0xc38e,	// (0x00030698) aid_firma_cardinal_ParamLimits

0xc3a2,	// (0x000306ac) blid_firmament_pane_t1_ParamLimits

0xc3b9,	// (0x000306c3) blid_firmament_pane_t2_ParamLimits

0xc3d0,	// (0x000306da) blid_firmament_pane_t3_ParamLimits

0xc3e7,	// (0x000306f1) blid_firmament_pane_t4_ParamLimits

0xf664,	// (0x0003396e) blid_firmament_pane_t_ParamLimits

0xc3fe,	// (0x00030708) blid_sat_info_pane_ParamLimits

0xacec,	// (0x0002eff6) main_cam_set_pane_ParamLimits

0x7139,	// (0x0002b443) aid_size_cell_colour_35_ParamLimits

0x7159,	// (0x0002b463) aid_size_cell_colour_112_ParamLimits

0x7179,	// (0x0002b483) aid_size_cell_effect_ParamLimits

0x56a0,	// (0x000299aa) bg_tb_trans_pane_cp02_ParamLimits

0x4cd1,	// (0x00028fdb) heading_imed_pane_ParamLimits

0x7199,	// (0x0002b4a3) listscroll_imed_pane_ParamLimits

0xb595,	// (0x0002f89f) popup_call2_audio_first_window_g5_ParamLimits

0xb595,	// (0x0002f89f) popup_call2_audio_first_window_g5

0x1de8,	// (0x000260f2) aid_size_touch_image3_arrow_left_ParamLimits

0x1de8,	// (0x000260f2) aid_size_touch_image3_arrow_left

0x1e08,	// (0x00026112) aid_size_touch_image3_arrow_right_ParamLimits

0x1e08,	// (0x00026112) aid_size_touch_image3_arrow_right

0xd736,	// (0x00031a40) vid4_progress_pane_t3

0x7322,	// (0x0002b62c) main_hwr_training_symbol_option_pane_ParamLimits

0x7322,	// (0x0002b62c) main_hwr_training_symbol_option_pane

0xcb0c,	// (0x00030e16) popup_hwr_training_preview_window_ParamLimits

0xcb0c,	// (0x00030e16) popup_hwr_training_preview_window

0x1cb2,	// (0x00025fbc) hwr_training_navi_pane_g5_ParamLimits

0x1cb2,	// (0x00025fbc) hwr_training_navi_pane_g5

0xd0d9,	// (0x000313e3) popup_char_count_window

0xacec,	// (0x0002eff6) bg_popup_sub_pane_cp20_ParamLimits

0x25f7,	// (0x00026901) list_vitu2_match_list_pane_ParamLimits

0x2606,	// (0x00026910) vitu2_page_scroll_pane_ParamLimits

0x2606,	// (0x00026910) vitu2_page_scroll_pane

0xd786,	// (0x00031a90) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd786,	// (0x00031a90) list_single_hwr_training_symbol_option_pane

0xd799,	// (0x00031aa3) list_single_hwr_training_symbol_option_pane_g1

0xd7a1,	// (0x00031aab) list_single_hwr_training_symbol_option_pane_t1

0xd7af,	// (0x00031ab9) bg_button_pane_cp023

0xd7b8,	// (0x00031ac2) bg_button_pane_cp024

0x80f2,	// (0x0002c3fc) vitu2_page_scroll_pane_g1

0x80fa,	// (0x0002c404) vitu2_page_scroll_pane_g2

0x0001,

0xfa5c,	// (0x00033d66) vitu2_page_scroll_pane_g

0x8102,	// (0x0002c40c) vitu2_page_scroll_pane_t1

0xc42d,	// (0x00030737) popup_char_count_window_g1

0xd7eb,	// (0x00031af5) popup_char_count_window_g2

0xd7f4,	// (0x00031afe) popup_char_count_window_g3

0x0002,

0xfa61,	// (0x00033d6b) popup_char_count_window_g

0xd7fd,	// (0x00031b07) popup_char_count_window_t1

0xacfa,	// (0x0002f004) main_vded2_pane

0xc8cd,	// (0x00030bd7) aid_size_cell_imed_line

0xc8d7,	// (0x00030be1) grid_imed_line_width_pane

0xd057,	// (0x00031361) vid4_indicators_pane_g4

0xd80b,	// (0x00031b15) cell_imed_line_width_pane_ParamLimits

0xd80b,	// (0x00031b15) cell_imed_line_width_pane

0xd81d,	// (0x00031b27) cell_imed_line_width_pane_g1

0xd826,	// (0x00031b30) cell_imed_line_width_pane_g2

0x0001,

0xfa68,	// (0x00033d72) cell_imed_line_width_pane_g

0x8111,	// (0x0002c41b) main_vded2_pane_g1_ParamLimits

0x8111,	// (0x0002c41b) main_vded2_pane_g1

0x8127,	// (0x0002c431) main_vded2_pane_g2_ParamLimits

0x8127,	// (0x0002c431) main_vded2_pane_g2

0x0001,

0xfa6d,	// (0x00033d77) main_vded2_pane_g_ParamLimits

0xfa6d,	// (0x00033d77) main_vded2_pane_g

0x8137,	// (0x0002c441) vded2_slider_pane_ParamLimits

0x8137,	// (0x0002c441) vded2_slider_pane

0x814a,	// (0x0002c454) aid_size_touch_vded2_end

0x8152,	// (0x0002c45c) aid_size_touch_vded2_playhead

0x815a,	// (0x0002c464) aid_size_touch_vded2_start

0x8162,	// (0x0002c46c) vded2_slider_bg_pane

0x816b,	// (0x0002c475) vded2_slider_pane_g1

0x8174,	// (0x0002c47e) vded2_slider_pane_g2

0x817c,	// (0x0002c486) vded2_slider_pane_g3

0x0002,

0xfa72,	// (0x00033d7c) vded2_slider_pane_g

0x8185,	// (0x0002c48f) vded2_slider_bg_pane_g1

0x818e,	// (0x0002c498) vded2_slider_bg_pane_g2

0x8197,	// (0x0002c4a1) vded2_slider_bg_pane_g3

0x0002,

0xfa79,	// (0x00033d83) vded2_slider_bg_pane_g

0x5a41,	// (0x00029d4b) aid_postcard_touch_down_pane_ParamLimits

0x5a41,	// (0x00029d4b) aid_postcard_touch_down_pane

0x5a53,	// (0x00029d5d) aid_postcard_touch_up_pane_ParamLimits

0x5a53,	// (0x00029d5d) aid_postcard_touch_up_pane

0xacfa,	// (0x0002f004) main_blid2_pane

0xbee6,	// (0x000301f0) popup_blid2_search_window

0x2767,	// (0x00026a71) blid2_gps_pane

0x2767,	// (0x00026a71) blid2_navig_pane

0x2767,	// (0x00026a71) blid2_search_pane

0x2767,	// (0x00026a71) blid2_tripm_pane

0x81a0,	// (0x0002c4aa) blid2_search_pane_g1_ParamLimits

0x81a0,	// (0x0002c4aa) blid2_search_pane_g1

0x81b4,	// (0x0002c4be) blid2_search_pane_t1_ParamLimits

0x81b4,	// (0x0002c4be) blid2_search_pane_t1

0x81c6,	// (0x0002c4d0) aid_size_cell_blid2_gps_ParamLimits

0x81c6,	// (0x0002c4d0) aid_size_cell_blid2_gps

0x81de,	// (0x0002c4e8) blid2_gps_pane_g1_ParamLimits

0x81de,	// (0x0002c4e8) blid2_gps_pane_g1

0x81f2,	// (0x0002c4fc) grid_blid2_satellite_pane_ParamLimits

0x81f2,	// (0x0002c4fc) grid_blid2_satellite_pane

0x8206,	// (0x0002c510) blid2_navig_pane_g1_ParamLimits

0x8206,	// (0x0002c510) blid2_navig_pane_g1

0x8212,	// (0x0002c51c) blid2_navig_pane_t1_ParamLimits

0x8212,	// (0x0002c51c) blid2_navig_pane_t1

0x822b,	// (0x0002c535) blid2_navig_pane_t2_ParamLimits

0x822b,	// (0x0002c535) blid2_navig_pane_t2

0x0001,

0xfa80,	// (0x00033d8a) blid2_navig_pane_t_ParamLimits

0xfa80,	// (0x00033d8a) blid2_navig_pane_t

0x8244,	// (0x0002c54e) blid2_navig_ring_pane_ParamLimits

0x8244,	// (0x0002c54e) blid2_navig_ring_pane

0x8259,	// (0x0002c563) blid2_speed_pane_ParamLimits

0x8259,	// (0x0002c563) blid2_speed_pane

0x8265,	// (0x0002c56f) blid2_tripm_pane_g1_ParamLimits

0x8265,	// (0x0002c56f) blid2_tripm_pane_g1

0x827a,	// (0x0002c584) blid2_tripm_pane_g2_ParamLimits

0x827a,	// (0x0002c584) blid2_tripm_pane_g2

0x828e,	// (0x0002c598) blid2_tripm_pane_g3_ParamLimits

0x828e,	// (0x0002c598) blid2_tripm_pane_g3

0x82a2,	// (0x0002c5ac) blid2_tripm_pane_g4_ParamLimits

0x82a2,	// (0x0002c5ac) blid2_tripm_pane_g4

0x82b6,	// (0x0002c5c0) blid2_tripm_pane_g5_ParamLimits

0x82b6,	// (0x0002c5c0) blid2_tripm_pane_g5

0x0005,

0xfa85,	// (0x00033d8f) blid2_tripm_pane_g_ParamLimits

0xfa85,	// (0x00033d8f) blid2_tripm_pane_g

0x82d8,	// (0x0002c5e2) blid2_tripm_pane_t1_ParamLimits

0x82d8,	// (0x0002c5e2) blid2_tripm_pane_t1

0x82ef,	// (0x0002c5f9) blid2_tripm_pane_t2_ParamLimits

0x82ef,	// (0x0002c5f9) blid2_tripm_pane_t2

0x8306,	// (0x0002c610) blid2_tripm_pane_t3_ParamLimits

0x8306,	// (0x0002c610) blid2_tripm_pane_t3

0x0003,

0xfa92,	// (0x00033d9c) blid2_tripm_pane_t_ParamLimits

0xfa92,	// (0x00033d9c) blid2_tripm_pane_t

0x8349,	// (0x0002c653) cell_blid2_satellite_pane_ParamLimits

0x8349,	// (0x0002c653) cell_blid2_satellite_pane

0x8361,	// (0x0002c66b) cell_blid2_satellite_pane_g1

0xd82e,	// (0x00031b38) cell_blid2_satellite_pane_t1

0x398e,	// (0x00027c98) blid2_speed_pane_g1

0xd83c,	// (0x00031b46) blid2_speed_pane_t1

0xd84a,	// (0x00031b54) blid2_speed_pane_t2

0x0001,

0xfa9b,	// (0x00033da5) blid2_speed_pane_t

0x398e,	// (0x00027c98) blid2_navig_ring_pane_g1

0x836a,	// (0x0002c674) blid2_navig_ring_pane_g2

0x8372,	// (0x0002c67c) blid2_navig_ring_pane_g3

0x837a,	// (0x0002c684) blid2_navig_ring_pane_g4

0x8382,	// (0x0002c68c) blid2_navig_ring_pane_g5

0x0004,

0xfaa0,	// (0x00033daa) blid2_navig_ring_pane_g

0x2767,	// (0x00026a71) bg_popup_window_pane_cp011

0xd858,	// (0x00031b62) popup_blid2_search_window_g1

0xd860,	// (0x00031b6a) popup_blid2_search_window_t1

0xd86e,	// (0x00031b78) popup_blid2_search_window_t2

0x0001,

0xfaab,	// (0x00033db5) popup_blid2_search_window_t

0x3e8c,	// (0x00028196) main_browser_pane_g1

0x3063,	// (0x0002736d) main_browser_pane_ParamLimits

0xacec,	// (0x0002eff6) bg_button_pane_cp011_ParamLimits

0x2576,	// (0x00026880) cell_vitu2_function_pane_g1_ParamLimits

0x56a0,	// (0x000299aa) bg_popup_sub_pane_cp22_ParamLimits

0x7c6a,	// (0x0002bf74) input_focus_pane_cp08_ParamLimits

0x7c85,	// (0x0002bf8f) popup_vitu2_query_button_pane_ParamLimits

0x7c85,	// (0x0002bf8f) popup_vitu2_query_button_pane

0x7c94,	// (0x0002bf9e) popup_vitu2_query_input_button_pane

0xd3ea,	// (0x000316f4) popup_vitu2_query_window_g1_ParamLimits

0x7c9c,	// (0x0002bfa6) popup_vitu2_query_window_g2_ParamLimits

0xf9ac,	// (0x00033cb6) popup_vitu2_query_window_g_ParamLimits

0x2767,	// (0x00026a71) bg_button_pane_cp026

0x838a,	// (0x0002c694) popup_vitu2_query_input_button_pane_g1

0x2767,	// (0x00026a71) bg_button_pane_cp025

0xd87c,	// (0x00031b86) popup_vitu2_query_button_pane_t1

0x674c,	// (0x0002aa56) main_mp3_pane_t6

0x675a,	// (0x0002aa64) popup_slider_window_cp01

0xcfdc,	// (0x000312e6) cam4_battery_pane

0xcfdc,	// (0x000312e6) cam4_battery_pane_cp02

0xcfdc,	// (0x000312e6) cam4_battery_pane_cp01

0xcfdc,	// (0x000312e6) cam4_battery_pane_cp03

0xc171,	// (0x0003047b) cam4_battery_pane_g1

0x398e,	// (0x00027c98) cam4_battery_pane_g2

0x0001,

0xfab0,	// (0x00033dba) cam4_battery_pane_g

0xc2e1,	// (0x000305eb) popup_blid_sat_info2_window_t11

0x53cb,	// (0x000296d5) aid_size_touch_mv_arrow_left_ParamLimits

0x53ef,	// (0x000296f9) aid_size_touch_mv_arrow_right_ParamLimits

0x5448,	// (0x00029752) navi_pane_g1_ParamLimits

0x5454,	// (0x0002975e) navi_pane_g2_ParamLimits

0x547d,	// (0x00029787) navi_pane_g3_ParamLimits

0xf365,	// (0x0003366f) navi_pane_g_ParamLimits

0x552d,	// (0x00029837) navi_pane_mv_t1_ParamLimits

0x71a5,	// (0x0002b4af) grid_imed_effect_pane_ParamLimits

0x3ad4,	// (0x00027dde) aid_placing_vt_slider_lsc

0x3ae4,	// (0x00027dee) aid_placing_vt_slider_prt

0x37fc,	// (0x00027b06) bg_tb_trans_pane_cp01_ParamLimits

0xc545,	// (0x0003084f) popup_image_details_window_g1_ParamLimits

0xc558,	// (0x00030862) popup_image_details_window_g2_ParamLimits

0xc56d,	// (0x00030877) popup_image_details_window_g3_ParamLimits

0xc56d,	// (0x00030877) popup_image_details_window_g3

0xf6a4,	// (0x000339ae) popup_image_details_window_g_ParamLimits

0xc581,	// (0x0003088b) popup_image_details_window_t1_ParamLimits

0xc593,	// (0x0003089d) popup_image_details_window_t2_ParamLimits

0xc5ac,	// (0x000308b6) popup_image_details_window_t3_ParamLimits

0xc5c0,	// (0x000308ca) popup_image_details_window_t4_ParamLimits

0xc5db,	// (0x000308e5) popup_image_details_window_t5_ParamLimits

0xf6ab,	// (0x000339b5) popup_image_details_window_t_ParamLimits

0x7fe0,	// (0x0002c2ea) cl_header_name_pane_ParamLimits

0x7fe0,	// (0x0002c2ea) cl_header_name_pane

0x8392,	// (0x0002c69c) cl_header_name_pane_t1_ParamLimits

0x8392,	// (0x0002c69c) cl_header_name_pane_t1

0x83b3,	// (0x0002c6bd) cl_header_name_pane_t2_ParamLimits

0x83b3,	// (0x0002c6bd) cl_header_name_pane_t2

0x83f5,	// (0x0002c6ff) cl_header_name_pane_t3_ParamLimits

0x83f5,	// (0x0002c6ff) cl_header_name_pane_t3

0x0002,

0xfab5,	// (0x00033dbf) cl_header_name_pane_t_ParamLimits

0xfab5,	// (0x00033dbf) cl_header_name_pane_t

0x54fe,	// (0x00029808) navi_pane_mv_g2_ParamLimits

0xd0a4,	// (0x000313ae) field_vitu2_entry_pane_g1_ParamLimits

0xd0b0,	// (0x000313ba) field_vitu2_entry_pane_g2_ParamLimits

0x566a,	// (0x00029974) field_vitu2_entry_pane_g3_ParamLimits

0x566a,	// (0x00029974) field_vitu2_entry_pane_g3

0xf8ab,	// (0x00033bb5) field_vitu2_entry_pane_g_ParamLimits

0x2406,	// (0x00026710) cell_vitu2_itu_pane_g1_ParamLimits

0x241e,	// (0x00026728) cell_vitu2_itu_pane_g2_ParamLimits

0x241e,	// (0x00026728) cell_vitu2_itu_pane_g2

0x0001,

0xf8b7,	// (0x00033bc1) cell_vitu2_itu_pane_g_ParamLimits

0xf8b7,	// (0x00033bc1) cell_vitu2_itu_pane_g

0xacec,	// (0x0002eff6) bg_vkb2_func_pane_cp05_ParamLimits

0xacec,	// (0x0002eff6) bg_vkb2_func_pane_cp05

0xacec,	// (0x0002eff6) bg_vkb2_func_pane_cp03

0xacec,	// (0x0002eff6) bg_vkb2_func_pane_cp04

0xacec,	// (0x0002eff6) bg_vkb2_func_pane_cp10_ParamLimits

0xacec,	// (0x0002eff6) bg_vkb2_func_pane_cp10

0x7f84,	// (0x0002c28e) bg_vkb2_func_pane_cp08

0x7f5d,	// (0x0002c267) bg_vkb2_func_pane_cp06

0x7f69,	// (0x0002c273) bg_vkb2_func_pane_cp07

0xd7c1,	// (0x00031acb) bg_vkb2_func_pane_cp11_ParamLimits

0xd7c1,	// (0x00031acb) bg_vkb2_func_pane_cp11

0xd7d6,	// (0x00031ae0) bg_vkb2_func_pane_cp12_ParamLimits

0xd7d6,	// (0x00031ae0) bg_vkb2_func_pane_cp12

0x2767,	// (0x00026a71) bg_vkb2_func_pane_cp09

0xd0eb,	// (0x000313f5) bg_vkb2_func_pane_g1

0x3fdd,	// (0x000282e7) bg_vkb2_func_pane_g2

0xd0f3,	// (0x000313fd) bg_vkb2_func_pane_g3

0xd0fb,	// (0x00031405) bg_vkb2_func_pane_g4

0xd382,	// (0x0003168c) bg_vkb2_func_pane_g5

0xd113,	// (0x0003141d) bg_vkb2_func_pane_g6

0xd11b,	// (0x00031425) bg_vkb2_func_pane_g7

0xd10b,	// (0x00031415) bg_vkb2_func_pane_g8

0x3fbd,	// (0x000282c7) bg_vkb2_func_pane_g9

0x0008,

0xfabc,	// (0x00033dc6) bg_vkb2_func_pane_g

0x82c8,	// (0x0002c5d2) blid2_tripm_pane_g6_ParamLimits

0x82c8,	// (0x0002c5d2) blid2_tripm_pane_g6

0xce31,	// (0x0003113b) mp4_progress_pane_g1

0x8337,	// (0x0002c641) blid2_tripm_values_pane_ParamLimits

0x8337,	// (0x0002c641) blid2_tripm_values_pane

0x8426,	// (0x0002c730) blid2_tripm_values_pane_t1

0x8434,	// (0x0002c73e) blid2_tripm_values_pane_t2

0x8442,	// (0x0002c74c) blid2_tripm_values_pane_t3

0x8450,	// (0x0002c75a) blid2_tripm_values_pane_t4

0x845e,	// (0x0002c768) blid2_tripm_values_pane_t5

0x846c,	// (0x0002c776) blid2_tripm_values_pane_t6

0x847a,	// (0x0002c784) blid2_tripm_values_pane_t7

0x8488,	// (0x0002c792) blid2_tripm_values_pane_t8

0x8496,	// (0x0002c7a0) blid2_tripm_values_pane_t9

0x0008,

0xfacf,	// (0x00033dd9) blid2_tripm_values_pane_t

0x3b18,	// (0x00027e22) call_video_pane_t1_ParamLimits

0x3b32,	// (0x00027e3c) call_video_pane_t2_ParamLimits

0xf1fc,	// (0x00033506) call_video_pane_t_ParamLimits

0x595b,	// (0x00029c65) msg_header_pane_g1_ParamLimits

0x5967,	// (0x00029c71) msg_header_pane_g2_ParamLimits

0x5967,	// (0x00029c71) msg_header_pane_g2

0x0001,

0xf408,	// (0x00033712) msg_header_pane_g_ParamLimits

0xf408,	// (0x00033712) msg_header_pane_g

0x3063,	// (0x0002736d) main_clock2_pane_ParamLimits

0x6f65,	// (0x0002b26f) grid_clock2_toolbar_pane_ParamLimits

0x6f65,	// (0x0002b26f) grid_clock2_toolbar_pane

0x6f65,	// (0x0002b26f) listscroll_clock2_pane_ParamLimits

0x6f65,	// (0x0002b26f) listscroll_clock2_pane

0x7048,	// (0x0002b352) main_clock2_pane_t3_ParamLimits

0x7048,	// (0x0002b352) main_clock2_pane_t3

0x706a,	// (0x0002b374) main_clock2_pane_t4_ParamLimits

0x706a,	// (0x0002b374) main_clock2_pane_t4

0xd88a,	// (0x00031b94) cell_clock2_toolbar_pane

0xd892,	// (0x00031b9c) cell_clock2_toolbar_pane_cp01

0xd892,	// (0x00031b9c) cell_clock2_toolbar_pane_cp02

0xd89a,	// (0x00031ba4) cell_clock2_toolbar_pane_cp03

0xd8a2,	// (0x00031bac) list_clock2_pane

0xd8aa,	// (0x00031bb4) scroll_pane_cp10

0xd8b2,	// (0x00031bbc) list_single_clock2_pane_ParamLimits

0xd8b2,	// (0x00031bbc) list_single_clock2_pane

0x3793,	// (0x00027a9d) list_highlight_pane_cp08

0xd8bf,	// (0x00031bc9) list_single_clock2_pane_t1

0xd8cd,	// (0x00031bd7) list_single_clock2_pane_t2

0x0001,

0xfae2,	// (0x00033dec) list_single_clock2_pane_t

0x2767,	// (0x00026a71) bg_button_pane_cp10

0xd8db,	// (0x00031be5) cell_clock2_toolbar_pane_g1

0x1925,	// (0x00025c2f) aid_main_viewer_pane_g1_ParamLimits

0x1925,	// (0x00025c2f) aid_main_viewer_pane_g1

0x1931,	// (0x00025c3b) aid_main_viewer_pane_g2_ParamLimits

0x1931,	// (0x00025c3b) aid_main_viewer_pane_g2

0x59f7,	// (0x00029d01) aid_main_viewer_pane_g3_ParamLimits

0x59f7,	// (0x00029d01) aid_main_viewer_pane_g3

0x5a06,	// (0x00029d10) aid_main_viewer_pane_g4_ParamLimits

0x5a06,	// (0x00029d10) aid_main_viewer_pane_g4

0x0003,

0xf419,	// (0x00033723) aid_main_viewer_pane_g_ParamLimits

0xf419,	// (0x00033723) aid_main_viewer_pane_g

0xacec,	// (0x0002eff6) main_calc_pane_ParamLimits

0x196d,	// (0x00025c77) main_dialer2_pane_ParamLimits

0xacfa,	// (0x0002f004) main_cam6_pane

0xacfa,	// (0x0002f004) main_vid6_pane

0x6f71,	// (0x0002b27b) listscroll_gen_pane_cp06_ParamLimits

0x6f71,	// (0x0002b27b) listscroll_gen_pane_cp06

0x708b,	// (0x0002b395) main_clock2_pane_t5_ParamLimits

0x708b,	// (0x0002b395) main_clock2_pane_t5

0x70e3,	// (0x0002b3ed) aid_call2_pane_cp10_ParamLimits

0x70f5,	// (0x0002b3ff) aid_call_pane_cp10_ParamLimits

0x535a,	// (0x00029664) popup_clock_analogue_window_cp10_g1_ParamLimits

0x535a,	// (0x00029664) popup_clock_analogue_window_cp10_g2_ParamLimits

0x1c09,	// (0x00025f13) popup_clock_analogue_window_cp10_g3_ParamLimits

0x1c09,	// (0x00025f13) popup_clock_analogue_window_cp10_g4_ParamLimits

0x535a,	// (0x00029664) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf760,	// (0x00033a6a) popup_clock_analogue_window_cp10_g_ParamLimits

0x1c1b,	// (0x00025f25) popup_clock_analogue_window_cp10_t1_ParamLimits

0xce91,	// (0x0003119b) cell_dialer2_keypad_pane_g2_ParamLimits

0xce91,	// (0x0003119b) cell_dialer2_keypad_pane_g2

0x0001,

0xf84a,	// (0x00033b54) cell_dialer2_keypad_pane_g_ParamLimits

0xf84a,	// (0x00033b54) cell_dialer2_keypad_pane_g

0x73fe,	// (0x0002b708) cell_dialer2_keypad_pane_t1

0x77a4,	// (0x0002baae) main_cset_text2_pane_ParamLimits

0x77a4,	// (0x0002baae) main_cset_text2_pane

0xd5c4,	// (0x000318ce) area_vitu2_query_pane_g1_ParamLimits

0x7f02,	// (0x0002c20c) area_vitu2_query_pane_g2_ParamLimits

0xf9ff,	// (0x00033d09) area_vitu2_query_pane_g_ParamLimits

0xd648,	// (0x00031952) area_vitu2_query_pane_t7_ParamLimits

0xd648,	// (0x00031952) area_vitu2_query_pane_t7

0x7f5d,	// (0x0002c267) bg_button_pane_cp018_ParamLimits

0x7f69,	// (0x0002c273) bg_button_pane_cp021_ParamLimits

0x7f75,	// (0x0002c27f) bg_button_pane_cp022_ParamLimits

0x7f84,	// (0x0002c28e) bg_vkb2_func_pane_cp08_ParamLimits

0x7f5d,	// (0x0002c267) bg_vkb2_func_pane_cp06_ParamLimits

0x7f69,	// (0x0002c273) bg_vkb2_func_pane_cp07_ParamLimits

0x7f94,	// (0x0002c29e) input_focus_pane_cp09_ParamLimits

0xd8e3,	// (0x00031bed) cam6_autofocus_pane_ParamLimits

0xd8e3,	// (0x00031bed) cam6_autofocus_pane

0x2685,	// (0x0002698f) cam6_image_uncrop_pane_ParamLimits

0x2685,	// (0x0002698f) cam6_image_uncrop_pane

0x2693,	// (0x0002699d) cam6_indi_pane_ParamLimits

0x2693,	// (0x0002699d) cam6_indi_pane

0x26a9,	// (0x000269b3) cam6_mode_pane_ParamLimits

0x26a9,	// (0x000269b3) cam6_mode_pane

0x26bb,	// (0x000269c5) cam6_timer_pane_ParamLimits

0x26bb,	// (0x000269c5) cam6_timer_pane

0x26c7,	// (0x000269d1) cam6_zoom_pane_ParamLimits

0x26c7,	// (0x000269d1) cam6_zoom_pane

0x84a4,	// (0x0002c7ae) cam6_mode_pane_g1_ParamLimits

0x84a4,	// (0x0002c7ae) cam6_mode_pane_g1

0x84b4,	// (0x0002c7be) cam6_mode_pane_g2_ParamLimits

0x84b4,	// (0x0002c7be) cam6_mode_pane_g2

0x84c4,	// (0x0002c7ce) cam6_mode_pane_g3_ParamLimits

0x84c4,	// (0x0002c7ce) cam6_mode_pane_g3

0x84d4,	// (0x0002c7de) cam6_mode_pane_g4_ParamLimits

0x84d4,	// (0x0002c7de) cam6_mode_pane_g4

0x0003,

0xfae7,	// (0x00033df1) cam6_mode_pane_g_ParamLimits

0xfae7,	// (0x00033df1) cam6_mode_pane_g

0xd8ef,	// (0x00031bf9) bg_tb_trans_pane_cp08_ParamLimits

0xd8ef,	// (0x00031bf9) bg_tb_trans_pane_cp08

0xd8fd,	// (0x00031c07) cam6_battery_pane_ParamLimits

0xd8fd,	// (0x00031c07) cam6_battery_pane

0xd913,	// (0x00031c1d) cam6_indi_pane_g1_ParamLimits

0xd913,	// (0x00031c1d) cam6_indi_pane_g1

0xd925,	// (0x00031c2f) cam6_indi_pane_g2_ParamLimits

0xd925,	// (0x00031c2f) cam6_indi_pane_g2

0xd937,	// (0x00031c41) cam6_indi_pane_g3_ParamLimits

0xd937,	// (0x00031c41) cam6_indi_pane_g3

0x0002,

0xfaf0,	// (0x00033dfa) cam6_indi_pane_g_ParamLimits

0xfaf0,	// (0x00033dfa) cam6_indi_pane_g

0xd949,	// (0x00031c53) cam6_indi_pane_t1_ParamLimits

0xd949,	// (0x00031c53) cam6_indi_pane_t1

0x74b6,	// (0x0002b7c0) cam6_autofocus_pane_g1

0x74ae,	// (0x0002b7b8) cam6_autofocus_pane_g2

0x74c6,	// (0x0002b7d0) cam6_autofocus_pane_g3

0x74be,	// (0x0002b7c8) cam6_autofocus_pane_g4

0x0003,

0xfaf7,	// (0x00033e01) cam6_autofocus_pane_g

0xd96f,	// (0x00031c79) cam6_timer_pane_g1

0xd977,	// (0x00031c81) cam6_timer_pane_t1

0xd985,	// (0x00031c8f) cam6_zoom_cont_pane

0xd98d,	// (0x00031c97) cam6_zoom_pane_g1

0xd996,	// (0x00031ca0) cam6_zoom_pane_g2

0x84e4,	// (0x0002c7ee) cam6_zoom_pane_g3

0x0002,

0xfb00,	// (0x00033e0a) cam6_zoom_pane_g

0x398e,	// (0x00027c98) cam6_battery_pane_g1

0x398e,	// (0x00027c98) cam6_battery_pane_g2

0x0001,

0xf3c9,	// (0x000336d3) cam6_battery_pane_g

0xd98d,	// (0x00031c97) cam6_zoom_cont_pane_g1

0xd996,	// (0x00031ca0) cam6_zoom_cont_pane_g2

0xd99f,	// (0x00031ca9) cam6_zoom_cont_pane_g3

0x0002,

0xfb07,	// (0x00033e11) cam6_zoom_cont_pane_g

0x8502,	// (0x0002c80c) cam6_mode_pane_cp_ParamLimits

0x8502,	// (0x0002c80c) cam6_mode_pane_cp

0x8514,	// (0x0002c81e) cam6_zoom_pane_cp_ParamLimits

0x8514,	// (0x0002c81e) cam6_zoom_pane_cp

0x8520,	// (0x0002c82a) vid6_image_uncrop_cif_pane_ParamLimits

0x8520,	// (0x0002c82a) vid6_image_uncrop_cif_pane

0x852e,	// (0x0002c838) vid6_image_uncrop_nhd_pane_ParamLimits

0x852e,	// (0x0002c838) vid6_image_uncrop_nhd_pane

0x853b,	// (0x0002c845) vid6_image_uncrop_vga_pane_ParamLimits

0x853b,	// (0x0002c845) vid6_image_uncrop_vga_pane

0x8548,	// (0x0002c852) vid6_image_uncrop_wvga_pane_ParamLimits

0x8548,	// (0x0002c852) vid6_image_uncrop_wvga_pane

0x8555,	// (0x0002c85f) vid6_indi_pane_ParamLimits

0x8555,	// (0x0002c85f) vid6_indi_pane

0xd8ef,	// (0x00031bf9) bg_tb_trans_pane_cp09_ParamLimits

0xd8ef,	// (0x00031bf9) bg_tb_trans_pane_cp09

0xd9b3,	// (0x00031cbd) cam6_battery_pane_cp_ParamLimits

0xd9b3,	// (0x00031cbd) cam6_battery_pane_cp

0xd9bf,	// (0x00031cc9) vid6_indi_pane_g1_ParamLimits

0xd9bf,	// (0x00031cc9) vid6_indi_pane_g1

0xd9d1,	// (0x00031cdb) vid6_indi_pane_g2_ParamLimits

0xd9d1,	// (0x00031cdb) vid6_indi_pane_g2

0xd9e3,	// (0x00031ced) vid6_indi_pane_g3_ParamLimits

0xd9e3,	// (0x00031ced) vid6_indi_pane_g3

0xd9f8,	// (0x00031d02) vid6_indi_pane_g4_ParamLimits

0xd9f8,	// (0x00031d02) vid6_indi_pane_g4

0xda0d,	// (0x00031d17) vid6_indi_pane_g5_ParamLimits

0xda0d,	// (0x00031d17) vid6_indi_pane_g5

0x0004,

0xfb0e,	// (0x00033e18) vid6_indi_pane_g_ParamLimits

0xfb0e,	// (0x00033e18) vid6_indi_pane_g

0xda27,	// (0x00031d31) vid6_indi_pane_t1_ParamLimits

0xda27,	// (0x00031d31) vid6_indi_pane_t1

0xda3d,	// (0x00031d47) vid6_indi_pane_t2_ParamLimits

0xda3d,	// (0x00031d47) vid6_indi_pane_t2

0xda65,	// (0x00031d6f) vid6_indi_pane_t3_ParamLimits

0xda65,	// (0x00031d6f) vid6_indi_pane_t3

0xda8d,	// (0x00031d97) vid6_indi_pane_t4_ParamLimits

0xda8d,	// (0x00031d97) vid6_indi_pane_t4

0x0003,

0xfb19,	// (0x00033e23) vid6_indi_pane_t_ParamLimits

0xfb19,	// (0x00033e23) vid6_indi_pane_t

0xdab1,	// (0x00031dbb) wait_bar_pane_cp08

0x856c,	// (0x0002c876) main_cset_text2_pane_t1_ParamLimits

0x856c,	// (0x0002c876) main_cset_text2_pane_t1

0x84ed,	// (0x0002c7f7) listscroll_gen_pane_cp06_t1_ParamLimits

0x84ed,	// (0x0002c7f7) listscroll_gen_pane_cp06_t1

0xacfa,	// (0x0002f004) main_cam6_set_pane

0xcfce,	// (0x000312d8) bg_tb_trans_pane_cp06_ParamLimits

0xcfe4,	// (0x000312ee) cam4_indicators_pane_g1_ParamLimits

0xcff4,	// (0x000312fe) cam4_indicators_pane_g2_ParamLimits

0xf887,	// (0x00033b91) cam4_indicators_pane_g_ParamLimits

0xd014,	// (0x0003131e) cam4_indicators_pane_t1_ParamLimits

0xacec,	// (0x0002eff6) bg_tb_trans_pane_cp07_ParamLimits

0xcfe4,	// (0x000312ee) vid4_indicators_pane_g1_ParamLimits

0xd036,	// (0x00031340) vid4_indicators_pane_g2_ParamLimits

0xd046,	// (0x00031350) vid4_indicators_pane_g3_ParamLimits

0xd057,	// (0x00031361) vid4_indicators_pane_g4_ParamLimits

0xf899,	// (0x00033ba3) vid4_indicators_pane_g_ParamLimits

0xd073,	// (0x0003137d) vid4_indicators_pane_t1_ParamLimits

0xd6c6,	// (0x000319d0) vid4_progress_pane_g1_ParamLimits

0xd6d5,	// (0x000319df) vid4_progress_pane_g2_ParamLimits

0xd6e4,	// (0x000319ee) vid4_progress_pane_g3_ParamLimits

0xd6f3,	// (0x000319fd) vid4_progress_pane_g4_ParamLimits

0xfa4a,	// (0x00033d54) vid4_progress_pane_g_ParamLimits

0xd70b,	// (0x00031a15) vid4_progress_pane_t1_ParamLimits

0xd721,	// (0x00031a2b) vid4_progress_pane_t2_ParamLimits

0xd736,	// (0x00031a40) vid4_progress_pane_t3_ParamLimits

0xfa55,	// (0x00033d5f) vid4_progress_pane_t_ParamLimits

0xd74b,	// (0x00031a55) wait_bar_pane_cp07_ParamLimits

0x8587,	// (0x0002c891) main_cam6_set_pane_g2_ParamLimits

0x8587,	// (0x0002c891) main_cam6_set_pane_g2

0x85a9,	// (0x0002c8b3) main_cset6_listscroll_pane_ParamLimits

0x85a9,	// (0x0002c8b3) main_cset6_listscroll_pane

0x85c3,	// (0x0002c8cd) main_cset6_slider_pane_ParamLimits

0x85c3,	// (0x0002c8cd) main_cset6_slider_pane

0x85d9,	// (0x0002c8e3) main_cset6_text2_pane_ParamLimits

0x85d9,	// (0x0002c8e3) main_cset6_text2_pane

0xdac1,	// (0x00031dcb) main_cset6_text_pane

0xd207,	// (0x00031511) main_cset_list_pane_copy1_ParamLimits

0xd207,	// (0x00031511) main_cset_list_pane_copy1

0xd217,	// (0x00031521) scroll_pane_cp028_copy1

0x85e7,	// (0x0002c8f1) cset_list_set_pane_copy1

0x85f9,	// (0x0002c903) aid_position_infowindow_above_copy1

0x8601,	// (0x0002c90b) aid_position_infowindow_below_copy1

0x8609,	// (0x0002c913) cset_list_set_pane_g1_copy1

0x8611,	// (0x0002c91b) cset_list_set_pane_g3_copy1_ParamLimits

0x8611,	// (0x0002c91b) cset_list_set_pane_g3_copy1

0x8620,	// (0x0002c92a) cset_list_set_pane_t1_copy1_ParamLimits

0x8620,	// (0x0002c92a) cset_list_set_pane_t1_copy1

0x37fc,	// (0x00027b06) list_highlight_pane_cp021_copy1_ParamLimits

0x37fc,	// (0x00027b06) list_highlight_pane_cp021_copy1

0xdac9,	// (0x00031dd3) cset6_slider_pane_ParamLimits

0xdac9,	// (0x00031dd3) cset6_slider_pane

0xdaf5,	// (0x00031dff) main_cset6_slider_pane_g1_ParamLimits

0xdaf5,	// (0x00031dff) main_cset6_slider_pane_g1

0x8635,	// (0x0002c93f) main_cset6_slider_pane_g2_ParamLimits

0x8635,	// (0x0002c93f) main_cset6_slider_pane_g2

0xd22c,	// (0x00031536) main_cset6_slider_pane_g3_ParamLimits

0xd22c,	// (0x00031536) main_cset6_slider_pane_g3

0x7862,	// (0x0002bb6c) main_cset6_slider_pane_g4_ParamLimits

0x7862,	// (0x0002bb6c) main_cset6_slider_pane_g4

0x78aa,	// (0x0002bbb4) main_cset6_slider_pane_g5_ParamLimits

0x78aa,	// (0x0002bbb4) main_cset6_slider_pane_g5

0xd22c,	// (0x00031536) main_cset6_slider_pane_g7_ParamLimits

0xd22c,	// (0x00031536) main_cset6_slider_pane_g7

0xd238,	// (0x00031542) main_cset6_slider_pane_g8_ParamLimits

0xd238,	// (0x00031542) main_cset6_slider_pane_g8

0x784a,	// (0x0002bb54) main_cset6_slider_pane_g9_ParamLimits

0x784a,	// (0x0002bb54) main_cset6_slider_pane_g9

0x7856,	// (0x0002bb60) main_cset6_slider_pane_g10_ParamLimits

0x7856,	// (0x0002bb60) main_cset6_slider_pane_g10

0x7862,	// (0x0002bb6c) main_cset6_slider_pane_g11_ParamLimits

0x7862,	// (0x0002bb6c) main_cset6_slider_pane_g11

0x786e,	// (0x0002bb78) main_cset6_slider_pane_g12_ParamLimits

0x786e,	// (0x0002bb78) main_cset6_slider_pane_g12

0x787a,	// (0x0002bb84) main_cset6_slider_pane_g13_ParamLimits

0x787a,	// (0x0002bb84) main_cset6_slider_pane_g13

0x7886,	// (0x0002bb90) main_cset6_slider_pane_g14_ParamLimits

0x7886,	// (0x0002bb90) main_cset6_slider_pane_g14

0x865d,	// (0x0002c967) main_cset6_slider_pane_g15_ParamLimits

0x865d,	// (0x0002c967) main_cset6_slider_pane_g15

0x78aa,	// (0x0002bbb4) main_cset6_slider_pane_g16_ParamLimits

0x78aa,	// (0x0002bbb4) main_cset6_slider_pane_g16

0x78b6,	// (0x0002bbc0) main_cset6_slider_pane_g17_ParamLimits

0x78b6,	// (0x0002bbc0) main_cset6_slider_pane_g17

0x0011,

0xfb22,	// (0x00033e2c) main_cset6_slider_pane_g_ParamLimits

0xfb22,	// (0x00033e2c) main_cset6_slider_pane_g

0xdb1d,	// (0x00031e27) main_cset6_slider_pane_t1_ParamLimits

0xdb1d,	// (0x00031e27) main_cset6_slider_pane_t1

0xdb5e,	// (0x00031e68) main_cset6_slider_pane_t2_ParamLimits

0xdb5e,	// (0x00031e68) main_cset6_slider_pane_t2

0xdb89,	// (0x00031e93) main_cset6_slider_pane_t3_ParamLimits

0xdb89,	// (0x00031e93) main_cset6_slider_pane_t3

0x8675,	// (0x0002c97f) main_cset6_slider_pane_t4_ParamLimits

0x8675,	// (0x0002c97f) main_cset6_slider_pane_t4

0x86a0,	// (0x0002c9aa) main_cset6_slider_pane_t5_ParamLimits

0x86a0,	// (0x0002c9aa) main_cset6_slider_pane_t5

0xdbb4,	// (0x00031ebe) main_cset6_slider_pane_t7_ParamLimits

0xdbb4,	// (0x00031ebe) main_cset6_slider_pane_t7

0x86cb,	// (0x0002c9d5) main_cset6_slider_pane_t8_ParamLimits

0x86cb,	// (0x0002c9d5) main_cset6_slider_pane_t8

0x86ef,	// (0x0002c9f9) main_cset6_slider_pane_t9_ParamLimits

0x86ef,	// (0x0002c9f9) main_cset6_slider_pane_t9

0x8713,	// (0x0002ca1d) main_cset6_slider_pane_t10_ParamLimits

0x8713,	// (0x0002ca1d) main_cset6_slider_pane_t10

0x8737,	// (0x0002ca41) main_cset6_slider_pane_t11_ParamLimits

0x8737,	// (0x0002ca41) main_cset6_slider_pane_t11

0xdbea,	// (0x00031ef4) main_cset6_slider_pane_t14_ParamLimits

0xdbea,	// (0x00031ef4) main_cset6_slider_pane_t14

0xdc23,	// (0x00031f2d) main_cset6_slider_pane_t15_ParamLimits

0xdc23,	// (0x00031f2d) main_cset6_slider_pane_t15

0x000b,

0xfb47,	// (0x00033e51) main_cset6_slider_pane_t_ParamLimits

0xfb47,	// (0x00033e51) main_cset6_slider_pane_t

0xdc5c,	// (0x00031f66) cset_slider_pane_g1_copy1

0xdc65,	// (0x00031f6f) cset_slider_pane_g2_copy1

0xdc6e,	// (0x00031f78) cset_slider_pane_g3_copy1

0x2767,	// (0x00026a71) bg_popup_sub_pane_cp011_copy1

0xd3f6,	// (0x00031700) main_cset_text_pane_g1_copy1

0xd3fe,	// (0x00031708) main_cset_text_pane_t1_copy1

0xd40c,	// (0x00031716) main_cset_text_pane_t2_copy1

0xd41a,	// (0x00031724) main_cset_text_pane_t3_copy1

0xd428,	// (0x00031732) main_cset_text_pane_t4_copy1

0xd436,	// (0x00031740) main_cset_text_pane_t5_copy1

0xd444,	// (0x0003174e) main_cset_text_pane_t6_copy1

0xd452,	// (0x0003175c) main_cset_text_pane_t7_copy1

0x8778,	// (0x0002ca82) main_cset_text2_pane_t1_copy1

0xacec,	// (0x0002eff6) main_ncimui_pane

0x1b7b,	// (0x00025e85) popup_query_ncimui_window_ParamLimits

0x1b7b,	// (0x00025e85) popup_query_ncimui_window

0xc6b8,	// (0x000309c2) field_cale_ev2_pane_g4_ParamLimits

0xc6b8,	// (0x000309c2) field_cale_ev2_pane_g4

0x7387,	// (0x0002b691) cell_video_dialer_keypad_pane_g2_ParamLimits

0x7387,	// (0x0002b691) cell_video_dialer_keypad_pane_g2

0x0001,

0xf821,	// (0x00033b2b) cell_video_dialer_keypad_pane_g_ParamLimits

0xf821,	// (0x00033b2b) cell_video_dialer_keypad_pane_g

0x739f,	// (0x0002b6a9) cell_video_dialer_keypad_pane_t1

0x2767,	// (0x00026a71) bg_popup_window_pane_cp012

0xbe28,	// (0x00030132) heading_pane_cp06

0xdcc7,	// (0x00031fd1) ncim_query_content_pane

0x2767,	// (0x00026a71) bg_popup_heading_pane_cp01

0xdccf,	// (0x00031fd9) ncim_heading_pane_t1

0xdcdd,	// (0x00031fe7) ncim_indicator_popup_pane

0xdcef,	// (0x00031ff9) ncim_query_button_pane

0xdd03,	// (0x0003200d) ncim_query_content_pane_t1

0xdd15,	// (0x0003201f) ncim_query_content_pane_t2

0x0005,

0xfb8b,	// (0x00033e95) ncim_query_content_pane_t

0xdd4f,	// (0x00032059) ncim_query_list_pane

0xdd61,	// (0x0003206b) ncim_query_popup_pane

0xdcdd,	// (0x00031fe7) ncim_indicator_popup_pane_ParamLimits

0x88b7,	// (0x0002cbc1) ncim_query_content_pane_g1_ParamLimits

0x88b7,	// (0x0002cbc1) ncim_query_content_pane_g1

0xdd03,	// (0x0003200d) ncim_query_content_pane_t1_ParamLimits

0xdd15,	// (0x0003201f) ncim_query_content_pane_t2_ParamLimits

0x88c3,	// (0x0002cbcd) ncim_query_content_pane_t3_ParamLimits

0x88c3,	// (0x0002cbcd) ncim_query_content_pane_t3

0x88eb,	// (0x0002cbf5) ncim_query_content_pane_t4_ParamLimits

0x88eb,	// (0x0002cbf5) ncim_query_content_pane_t4

0x8913,	// (0x0002cc1d) ncim_query_content_pane_t5_ParamLimits

0x8913,	// (0x0002cc1d) ncim_query_content_pane_t5

0xdd27,	// (0x00032031) ncim_query_content_pane_t6_ParamLimits

0xdd27,	// (0x00032031) ncim_query_content_pane_t6

0xfb8b,	// (0x00033e95) ncim_query_content_pane_t_ParamLimits

0xdd4f,	// (0x00032059) ncim_query_list_pane_ParamLimits

0xdd61,	// (0x0003206b) ncim_query_popup_pane_ParamLimits

0xdd75,	// (0x0003207f) wait_bar_pane_cp04

0x2767,	// (0x00026a71) input_focus_pane_cp011

0xdd7d,	// (0x00032087) ncim_query_popup_pane_t1

0xdd8b,	// (0x00032095) ncim_list_query_list_pane_ParamLimits

0xdd8b,	// (0x00032095) ncim_list_query_list_pane

0x2767,	// (0x00026a71) bg_button_pane_cp027

0xdd9e,	// (0x000320a8) ncim_query_button_pane_g1

0x2767,	// (0x00026a71) list_highlight_pane_cp012

0xdda8,	// (0x000320b2) ncim_list_query_list_pane_g1

0xddb0,	// (0x000320ba) ncim_list_query_list_pane_t1

0xd004,	// (0x0003130e) cam4_indicators_pane_g3_ParamLimits

0xd004,	// (0x0003130e) cam4_indicators_pane_g3

0xd063,	// (0x0003136d) vid4_indicators_pane_g5_ParamLimits

0xd063,	// (0x0003136d) vid4_indicators_pane_g5

0xd6ff,	// (0x00031a09) vid4_progress_pane_g5_ParamLimits

0xd6ff,	// (0x00031a09) vid4_progress_pane_g5

0x87a7,	// (0x0002cab1) main_ncimui_pane_g1

0x880d,	// (0x0002cb17) ncimui_group_query_pane_ParamLimits

0x880d,	// (0x0002cb17) ncimui_group_query_pane

0x8855,	// (0x0002cb5f) ncimui_list_pane_ParamLimits

0x8855,	// (0x0002cb5f) ncimui_list_pane

0x887a,	// (0x0002cb84) ncimui_text_pane_ParamLimits

0x887a,	// (0x0002cb84) ncimui_text_pane

0x893b,	// (0x0002cc45) ncimui_text_pane_t1_ParamLimits

0x893b,	// (0x0002cc45) ncimui_text_pane_t1

0xddc7,	// (0x000320d1) ncimui_list_single_graphic_pane_ParamLimits

0xddc7,	// (0x000320d1) ncimui_list_single_graphic_pane

0x8959,	// (0x0002cc63) ncimui_query_pane_ParamLimits

0x8959,	// (0x0002cc63) ncimui_query_pane

0x2767,	// (0x00026a71) list_highlight_pane_cp013

0xddd7,	// (0x000320e1) ncim_list_query_list_pane_t1_copy1

0xdde5,	// (0x000320ef) ncim_list_single_graphic_pane_g1

0xdded,	// (0x000320f7) ncim_query_button_pane_cp01

0xddf9,	// (0x00032103) ncim_query_entry_pane_ParamLimits

0xddf9,	// (0x00032103) ncim_query_entry_pane

0xde0c,	// (0x00032116) ncimui_query_pane_g1

0xde18,	// (0x00032122) ncimui_query_pane_t1_ParamLimits

0xde18,	// (0x00032122) ncimui_query_pane_t1

0x37fc,	// (0x00027b06) input_focus_pane_cp012

0xde31,	// (0x0003213b) ncim_query_entry_pane_t1

0x3063,	// (0x0002736d) main_im_pane_ParamLimits

0xacec,	// (0x0002eff6) main_mobtv_pane_ParamLimits

0xacec,	// (0x0002eff6) main_mobtv_pane

0x784a,	// (0x0002bb54) main_cset6_slider_pane_g18_ParamLimits

0x784a,	// (0x0002bb54) main_cset6_slider_pane_g18

0x787a,	// (0x0002bb84) main_cset6_slider_pane_g19_ParamLimits

0x787a,	// (0x0002bb84) main_cset6_slider_pane_g19

0x2f3f,	// (0x00027249) bg_main_mobtv_pane_ParamLimits

0x2f3f,	// (0x00027249) bg_main_mobtv_pane

0x8969,	// (0x0002cc73) main_mobtv_info_pane

0x8972,	// (0x0002cc7c) main_mobtv_loading_pane_ParamLimits

0x8972,	// (0x0002cc7c) main_mobtv_loading_pane

0xde43,	// (0x0003214d) main_mobtv_pg_channel_list_pane

0xde4d,	// (0x00032157) main_mobtv_pg_hdr_pane

0x897f,	// (0x0002cc89) main_mobtv_programe_curr_pane_ParamLimits

0x897f,	// (0x0002cc89) main_mobtv_programe_curr_pane

0x898c,	// (0x0002cc96) main_mobtv_programe_next_pane_ParamLimits

0x898c,	// (0x0002cc96) main_mobtv_programe_next_pane

0xde56,	// (0x00032160) popup_mobtv_noti_window

0x398e,	// (0x00027c98) main_tv_pg_hdr_pane_g1

0xde5e,	// (0x00032168) main_tv_pg_hdr_pane_g2

0xde66,	// (0x00032170) main_tv_pg_hdr_pane_g3

0xde6e,	// (0x00032178) main_tv_pg_hdr_pane_g4

0xde76,	// (0x00032180) main_tv_pg_hdr_pane_g5

0xde7e,	// (0x00032188) main_tv_pg_hdr_pane_g6

0xde86,	// (0x00032190) main_tv_pg_hdr_pane_g7

0xde8e,	// (0x00032198) main_tv_pg_hdr_pane_g8

0xde96,	// (0x000321a0) main_tv_pg_hdr_pane_g9

0xde9e,	// (0x000321a8) main_tv_pg_hdr_pane_g10

0xdea8,	// (0x000321b2) main_tv_pg_hdr_pane_g11

0x000a,

0xfb98,	// (0x00033ea2) main_tv_pg_hdr_pane_g

0xdeb2,	// (0x000321bc) main_tv_pg_hdr_pane_t1

0xdec0,	// (0x000321ca) main_tv_pg_hdr_pane_t2

0xdece,	// (0x000321d8) main_tv_pg_hdr_pane_t3

0xdedc,	// (0x000321e6) main_tv_pg_hdr_pane_t4

0xdeea,	// (0x000321f4) main_tv_pg_hdr_pane_t5

0x0004,

0xfbaf,	// (0x00033eb9) main_tv_pg_hdr_pane_t

0xdef8,	// (0x00032202) single_mobtv_pg_channel_pane_ParamLimits

0xdef8,	// (0x00032202) single_mobtv_pg_channel_pane

0xdf0a,	// (0x00032214) single_mobtv_pg_channel_table_pane

0xdf13,	// (0x0003221d) single_mobtv_pg_channel_thumb_pane

0xdf1c,	// (0x00032226) single_tv_pg_channel_pane_g1

0xdf25,	// (0x0003222f) single_tv_pg_channel_pane_g2

0x0001,

0xfbba,	// (0x00033ec4) single_tv_pg_channel_pane_g

0x2f15,	// (0x0002721f) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x2f15,	// (0x0002721f) bg_single_mobtv_pg_channel_thumb_pane

0xdf2e,	// (0x00032238) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdf2e,	// (0x00032238) single_mobtv_pg_channel_thumb_pane_g1

0xdf3c,	// (0x00032246) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdf3c,	// (0x00032246) single_mobtv_pg_channel_thumb_pane_g2

0xdf48,	// (0x00032252) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdf48,	// (0x00032252) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfbbf,	// (0x00033ec9) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfbbf,	// (0x00033ec9) single_mobtv_pg_channel_thumb_pane_g

0xdf54,	// (0x0003225e) single_mobtv_pg_channel_thumb_pane_t1

0xdf62,	// (0x0003226c) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfbc6,	// (0x00033ed0) single_mobtv_pg_channel_thumb_pane_t

0x398e,	// (0x00027c98) bg_single_mobtv_pg_channel_table_pane_g1

0x398e,	// (0x00027c98) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf3c9,	// (0x000336d3) bg_single_mobtv_pg_channel_table_pane_g

0xdf70,	// (0x0003227a) single_mobtv_pg_channel_table_pane_t1

0xdf7e,	// (0x00032288) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfbcb,	// (0x00033ed5) single_mobtv_pg_channel_table_pane_t

0x89a1,	// (0x0002ccab) main_mobtv_info_pane_g1_ParamLimits

0x89a1,	// (0x0002ccab) main_mobtv_info_pane_g1

0x89bd,	// (0x0002ccc7) main_mobtv_info_pane_t1_ParamLimits

0x89bd,	// (0x0002ccc7) main_mobtv_info_pane_t1

0x8a23,	// (0x0002cd2d) main_mobtv_info_pane_t2_ParamLimits

0x8a23,	// (0x0002cd2d) main_mobtv_info_pane_t2

0x0002,

0xfbd5,	// (0x00033edf) main_mobtv_info_pane_t_ParamLimits

0xfbd5,	// (0x00033edf) main_mobtv_info_pane_t

0x8aa6,	// (0x0002cdb0) wait_bar_pane_cp05

0x8ab6,	// (0x0002cdc0) main_mobtv_loading_pane_g1_ParamLimits

0x8ab6,	// (0x0002cdc0) main_mobtv_loading_pane_g1

0x8ac7,	// (0x0002cdd1) main_mobtv_loading_pane_g2_ParamLimits

0x8ac7,	// (0x0002cdd1) main_mobtv_loading_pane_g2

0x8ad3,	// (0x0002cddd) main_mobtv_loading_pane_g3_ParamLimits

0x8ad3,	// (0x0002cddd) main_mobtv_loading_pane_g3

0x0002,

0xfbdc,	// (0x00033ee6) main_mobtv_loading_pane_g_ParamLimits

0xfbdc,	// (0x00033ee6) main_mobtv_loading_pane_g

0xdf8c,	// (0x00032296) main_mobtv_loading_pane_t1_ParamLimits

0xdf8c,	// (0x00032296) main_mobtv_loading_pane_t1

0xdfa4,	// (0x000322ae) main_mobtv_loading_pane_t2_ParamLimits

0xdfa4,	// (0x000322ae) main_mobtv_loading_pane_t2

0x0001,

0xfbe3,	// (0x00033eed) main_mobtv_loading_pane_t_ParamLimits

0xfbe3,	// (0x00033eed) main_mobtv_loading_pane_t

0x8ae4,	// (0x0002cdee) wait_bar_pane_cp06_ParamLimits

0x8ae4,	// (0x0002cdee) wait_bar_pane_cp06

0xdfc8,	// (0x000322d2) main_mobtv_programe_curr_pane_t1

0xdfd6,	// (0x000322e0) main_mobtv_programe_curr_pane_t2

0x0001,

0xfbe8,	// (0x00033ef2) main_mobtv_programe_curr_pane_t

0xdfe4,	// (0x000322ee) main_mobtv_programe_next_pane_t1

0xdff2,	// (0x000322fc) main_mobtv_programe_next_pane_t2

0xe000,	// (0x0003230a) main_mobtv_programe_next_pane_t3

0x0002,

0xfbed,	// (0x00033ef7) main_mobtv_programe_next_pane_t

0x2767,	// (0x00026a71) bg_popup_mobtv_noti_window_pane

0xe00e,	// (0x00032318) popup_mobtv_noti_window_g1

0xe016,	// (0x00032320) popup_mobtv_noti_window_t1

0xe024,	// (0x0003232e) popup_mobtv_noti_window_t2

0x0001,

0xfbf4,	// (0x00033efe) popup_mobtv_noti_window_t

0x398e,	// (0x00027c98) bg_popup_mobtv_noti_window_pane_g1

0xacfa,	// (0x0002f004) sc_clock_pane

0xacfa,	// (0x0002f004) main_fs_bigclock_pane

0x8321,	// (0x0002c62b) blid2_tripm_pane_t4_ParamLimits

0x8321,	// (0x0002c62b) blid2_tripm_pane_t4

0x8af3,	// (0x0002cdfd) sc_clock_pane_g1_ParamLimits

0x8af3,	// (0x0002cdfd) sc_clock_pane_g1

0x8b05,	// (0x0002ce0f) sc_clock_pane_t1_ParamLimits

0x8b05,	// (0x0002ce0f) sc_clock_pane_t1

0x8b27,	// (0x0002ce31) sc_clock_pane_t2_ParamLimits

0x8b27,	// (0x0002ce31) sc_clock_pane_t2

0x8b3d,	// (0x0002ce47) sc_clock_pane_t3_ParamLimits

0x8b3d,	// (0x0002ce47) sc_clock_pane_t3

0x0004,

0xfbf9,	// (0x00033f03) sc_clock_pane_t_ParamLimits

0xfbf9,	// (0x00033f03) sc_clock_pane_t

0x991d,	// (0x0002dc27) main_fs_bigclock_indicator_pane_ParamLimits

0x991d,	// (0x0002dc27) main_fs_bigclock_indicator_pane

0x8bd9,	// (0x0002cee3) main_fs_bigclock_pane_g1_ParamLimits

0x8bd9,	// (0x0002cee3) main_fs_bigclock_pane_g1

0x9929,	// (0x0002dc33) main_fs_bigclock_pane_t1_ParamLimits

0x9929,	// (0x0002dc33) main_fs_bigclock_pane_t1

0x993b,	// (0x0002dc45) main_fs_bigclock_pane_t2_ParamLimits

0x993b,	// (0x0002dc45) main_fs_bigclock_pane_t2

0x994d,	// (0x0002dc57) main_fs_bigclock_pane_t3_ParamLimits

0x994d,	// (0x0002dc57) main_fs_bigclock_pane_t3

0x0002,

0xfdbd,	// (0x000340c7) main_fs_bigclock_pane_t_ParamLimits

0xfdbd,	// (0x000340c7) main_fs_bigclock_pane_t

0xea98,	// (0x00032da2) main_fs_bigclock_indicator_pane_g1

0xdcf7,	// (0x00032001) ncim_query_content_pane_g2_ParamLimits

0xdcf7,	// (0x00032001) ncim_query_content_pane_g2

0x0001,

0xfb86,	// (0x00033e90) ncim_query_content_pane_g_ParamLimits

0xfb86,	// (0x00033e90) ncim_query_content_pane_g

0x8b54,	// (0x0002ce5e) sc_clock_pane_t4_ParamLimits

0x8b54,	// (0x0002ce5e) sc_clock_pane_t4

0xacec,	// (0x0002eff6) main_radioblah_pane

0xcf2c,	// (0x00031236) cell_call4_button_pane_t1_copy1_ParamLimits

0xcf2c,	// (0x00031236) cell_call4_button_pane_t1_copy1

0x87bf,	// (0x0002cac9) main_ncimui_pane_t1_ParamLimits

0x87bf,	// (0x0002cac9) main_ncimui_pane_t1

0x87d9,	// (0x0002cae3) main_ncimui_pane_t2_ParamLimits

0x87d9,	// (0x0002cae3) main_ncimui_pane_t2

0x0002,

0xfb7f,	// (0x00033e89) main_ncimui_pane_t_ParamLimits

0xfb7f,	// (0x00033e89) main_ncimui_pane_t

0xe165,	// (0x0003246f) main_radioblah_anim_pane_ParamLimits

0xe165,	// (0x0003246f) main_radioblah_anim_pane

0xe176,	// (0x00032480) main_radioblah_info_pane_ParamLimits

0xe176,	// (0x00032480) main_radioblah_info_pane

0xe18a,	// (0x00032494) main_radioblah_pane_t1_ParamLimits

0xe18a,	// (0x00032494) main_radioblah_pane_t1

0xe1a6,	// (0x000324b0) main_radioblah_pane_t2_ParamLimits

0xe1a6,	// (0x000324b0) main_radioblah_pane_t2

0x0003,

0xfc1a,	// (0x00033f24) main_radioblah_pane_t_ParamLimits

0xfc1a,	// (0x00033f24) main_radioblah_pane_t

0x8c23,	// (0x0002cf2d) main_radioblah_rocker_ctrl_pane_ParamLimits

0x8c23,	// (0x0002cf2d) main_radioblah_rocker_ctrl_pane

0xe1ee,	// (0x000324f8) main_radioblah_info_pane_t1_ParamLimits

0xe1ee,	// (0x000324f8) main_radioblah_info_pane_t1

0x8c77,	// (0x0002cf81) main_radioblah_info_pane_t2_ParamLimits

0x8c77,	// (0x0002cf81) main_radioblah_info_pane_t2

0x0003,

0xfc23,	// (0x00033f2d) main_radioblah_info_pane_t_ParamLimits

0xfc23,	// (0x00033f2d) main_radioblah_info_pane_t

0x398e,	// (0x00027c98) main_radioblah_rocker_ctrl_pane_g1

0x8d25,	// (0x0002d02f) main_radioblah_rocker_ctrl_pane_g2

0x8d2d,	// (0x0002d037) main_radioblah_rocker_ctrl_pane_g3

0x8d35,	// (0x0002d03f) main_radioblah_rocker_ctrl_pane_g4

0x8d3d,	// (0x0002d047) main_radioblah_rocker_ctrl_pane_g5

0x8d45,	// (0x0002d04f) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc2c,	// (0x00033f36) main_radioblah_rocker_ctrl_pane_g

0x8778,	// (0x0002ca82) main_cset_text2_pane_t1_copy1_ParamLimits

0xcfb4,	// (0x000312be) cam4_image_uncrop_qvga_pane

0xd02e,	// (0x00031338) vid4_image_uncrop_qcif_pane

0xd8e3,	// (0x00031bed) cam6_image_uncrop_qvga_pane_ParamLimits

0xd8e3,	// (0x00031bed) cam6_image_uncrop_qvga_pane

0xd9a7,	// (0x00031cb1) vid6_image_uncrop_qcif_pane_ParamLimits

0xd9a7,	// (0x00031cb1) vid6_image_uncrop_qcif_pane

0x2767,	// (0x00026a71) bg_popup_preview_window_pane_cp03

0xdc9d,	// (0x00031fa7) list_cset_text2_pane

0xdca5,	// (0x00031faf) main_cset6_text2_pane_g1

0xdcad,	// (0x00031fb7) main_cset6_text2_pane_t1

0x8d4d,	// (0x0002d057) list_cset_text2_pane_t1_ParamLimits

0x8d4d,	// (0x0002d057) list_cset_text2_pane_t1

0xacec,	// (0x0002eff6) main_radioblah_pane_ParamLimits

0x8a94,	// (0x0002cd9e) main_mobtv_info_pane_t3_ParamLimits

0x8a94,	// (0x0002cd9e) main_mobtv_info_pane_t3

0x8c11,	// (0x0002cf1b) main_radioblah_pane_g1

0x8c4b,	// (0x0002cf55) main_radioblah_info_pane_g1

0x8cca,	// (0x0002cfd4) main_radioblah_info_pane_t3_ParamLimits

0x8cca,	// (0x0002cfd4) main_radioblah_info_pane_t3

0x4ab5,	// (0x00028dbf) highlight_cell_cale_month_pane_ParamLimits

0x4ab5,	// (0x00028dbf) highlight_cell_cale_month_pane

0xacfa,	// (0x0002f004) main_phob_fisheye_pane

0xc759,	// (0x00030a63) scroll_pane_cp0031_ParamLimits

0xc759,	// (0x00030a63) scroll_pane_cp0031

0xdab1,	// (0x00031dbb) wait_bar_pane_cp08_ParamLimits

0x85e7,	// (0x0002c8f1) cset_list_set_pane_copy1_ParamLimits

0xe228,	// (0x00032532) highlight_cell_cale_month_pane_g1

0x8d66,	// (0x0002d070) highlight_cell_cale_month_pane_t1

0xe230,	// (0x0003253a) list_gen_pane_cp01

0xd217,	// (0x00031521) scroll_pane_01

0x8d74,	// (0x0002d07e) list_single_double_fisheye_pane

0x8d7d,	// (0x0002d087) list_double_fisheye_pane_g1_ParamLimits

0x8d7d,	// (0x0002d087) list_double_fisheye_pane_g1

0x8d89,	// (0x0002d093) list_double_fisheye_pane_g2_ParamLimits

0x8d89,	// (0x0002d093) list_double_fisheye_pane_g2

0x8d95,	// (0x0002d09f) list_double_fisheye_pane_g3_ParamLimits

0x8d95,	// (0x0002d09f) list_double_fisheye_pane_g3

0x0004,

0xfc39,	// (0x00033f43) list_double_fisheye_pane_g_ParamLimits

0xfc39,	// (0x00033f43) list_double_fisheye_pane_g

0x8db9,	// (0x0002d0c3) list_double_fisheye_pane_t1_ParamLimits

0x8db9,	// (0x0002d0c3) list_double_fisheye_pane_t1

0x8dd4,	// (0x0002d0de) list_double_fisheye_pane_t2_ParamLimits

0x8dd4,	// (0x0002d0de) list_double_fisheye_pane_t2

0x0001,

0xfc44,	// (0x00033f4e) list_double_fisheye_pane_t_ParamLimits

0xfc44,	// (0x00033f4e) list_double_fisheye_pane_t

0xacfa,	// (0x0002f004) main_call5_pane

0x8b7d,	// (0x0002ce87) sc_swipe_pane_ParamLimits

0x8b7d,	// (0x0002ce87) sc_swipe_pane

0x8e07,	// (0x0002d111) call5_image_pane_ParamLimits

0x8e07,	// (0x0002d111) call5_image_pane

0x8e1c,	// (0x0002d126) call5_swipe_1_pane_ParamLimits

0x8e1c,	// (0x0002d126) call5_swipe_1_pane

0x8e2d,	// (0x0002d137) call5_swipe_2_pane_ParamLimits

0x8e2d,	// (0x0002d137) call5_swipe_2_pane

0x8e52,	// (0x0002d15c) popup_call5_audio_first_window_ParamLimits

0x8e52,	// (0x0002d15c) popup_call5_audio_first_window

0x2f15,	// (0x0002721f) call5_swipe_1_pane_g1_ParamLimits

0x2f15,	// (0x0002721f) call5_swipe_1_pane_g1

0xe239,	// (0x00032543) call5_swipe_1_pane_g2_ParamLimits

0xe239,	// (0x00032543) call5_swipe_1_pane_g2

0x0001,

0xfc49,	// (0x00033f53) call5_swipe_1_pane_g_ParamLimits

0xfc49,	// (0x00033f53) call5_swipe_1_pane_g

0xe245,	// (0x0003254f) call5_swipe_1_pane_t1_ParamLimits

0xe245,	// (0x0003254f) call5_swipe_1_pane_t1

0x2f15,	// (0x0002721f) call5_swipe_2_pane_g1_ParamLimits

0x2f15,	// (0x0002721f) call5_swipe_2_pane_g1

0xe25a,	// (0x00032564) call5_swipe_2_pane_g2_ParamLimits

0xe25a,	// (0x00032564) call5_swipe_2_pane_g2

0x0001,

0xfc4e,	// (0x00033f58) call5_swipe_2_pane_g_ParamLimits

0xfc4e,	// (0x00033f58) call5_swipe_2_pane_g

0xe266,	// (0x00032570) call5_swipe_2_pane_t1_ParamLimits

0xe266,	// (0x00032570) call5_swipe_2_pane_t1

0xe27b,	// (0x00032585) sc_swipe_pane_g1_ParamLimits

0xe27b,	// (0x00032585) sc_swipe_pane_g1

0xe288,	// (0x00032592) sc_swipe_pane_g2_ParamLimits

0xe288,	// (0x00032592) sc_swipe_pane_g2

0x0001,

0xfc53,	// (0x00033f5d) sc_swipe_pane_g_ParamLimits

0xfc53,	// (0x00033f5d) sc_swipe_pane_g

0xe294,	// (0x0003259e) sc_swipe_pane_t1_ParamLimits

0xe294,	// (0x0003259e) sc_swipe_pane_t1

0xacfa,	// (0x0002f004) main_cmail_launcher_pane

0x8e61,	// (0x0002d16b) aid_size_cell_cmail_l_ParamLimits

0x8e61,	// (0x0002d16b) aid_size_cell_cmail_l

0x8e7a,	// (0x0002d184) grid_cmail_l_pane_ParamLimits

0x8e7a,	// (0x0002d184) grid_cmail_l_pane

0x8e8f,	// (0x0002d199) cell_cmail_l_pane_ParamLimits

0x8e8f,	// (0x0002d199) cell_cmail_l_pane

0x8eb1,	// (0x0002d1bb) cell_cmail_l_pane_g1_ParamLimits

0x8eb1,	// (0x0002d1bb) cell_cmail_l_pane_g1

0x8ec1,	// (0x0002d1cb) cell_cmail_l_pane_t1_ParamLimits

0x8ec1,	// (0x0002d1cb) cell_cmail_l_pane_t1

0xe2a9,	// (0x000325b3) cell_cmail_l_pane_t2_ParamLimits

0xe2a9,	// (0x000325b3) cell_cmail_l_pane_t2

0x0001,

0xfc58,	// (0x00033f62) cell_cmail_l_pane_t_ParamLimits

0xfc58,	// (0x00033f62) cell_cmail_l_pane_t

0x37fc,	// (0x00027b06) grid_highlight_pane_cp018_ParamLimits

0x37fc,	// (0x00027b06) grid_highlight_pane_cp018

0x14d4,	// (0x000257de) main2_pane_ParamLimits

0x14d4,	// (0x000257de) main2_pane

0x31cf,	// (0x000274d9) popup_sp_fs_action_menu_bg_pane_g1

0x31d7,	// (0x000274e1) popup_sp_fs_action_menu_bg_pane_g2

0x31df,	// (0x000274e9) popup_sp_fs_action_menu_bg_pane_g3

0x31e7,	// (0x000274f1) popup_sp_fs_action_menu_bg_pane_g4

0x31ef,	// (0x000274f9) popup_sp_fs_action_menu_bg_pane_g5

0x31f7,	// (0x00027501) popup_sp_fs_action_menu_bg_pane_g6

0x31ff,	// (0x00027509) popup_sp_fs_action_menu_bg_pane_g7

0x3207,	// (0x00027511) popup_sp_fs_action_menu_bg_pane_g8

0x320f,	// (0x00027519) popup_sp_fs_action_menu_bg_pane_g9

0x3217,	// (0x00027521) popup_sp_fs_action_menu_bg_pane_g10

0x3217,	// (0x00027521) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf11f,	// (0x00033429) popup_sp_fs_action_menu_bg_pane_g

0x3a00,	// (0x00027d0a) list_medium_line_x2_t3_g3_g1_ParamLimits

0x3a00,	// (0x00027d0a) list_medium_line_x2_t3_g3_g1

0x3a0c,	// (0x00027d16) list_medium_line_x2_t3_g3_g2_ParamLimits

0x3a0c,	// (0x00027d16) list_medium_line_x2_t3_g3_g2

0x3a00,	// (0x00027d0a) list_medium_line_x2_t3_g3_g3_ParamLimits

0x3a00,	// (0x00027d0a) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1cd,	// (0x000334d7) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1cd,	// (0x000334d7) list_medium_line_x2_t3_g3_g

0x3a18,	// (0x00027d22) list_medium_line_x2_t3_g3_t1_ParamLimits

0x3a18,	// (0x00027d22) list_medium_line_x2_t3_g3_t1

0x3a18,	// (0x00027d22) list_medium_line_x2_t3_g3_t2_ParamLimits

0x3a18,	// (0x00027d22) list_medium_line_x2_t3_g3_t2

0x3a2b,	// (0x00027d35) list_medium_line_x2_t3_g3_t3_ParamLimits

0x3a2b,	// (0x00027d35) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1d4,	// (0x000334de) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1d4,	// (0x000334de) list_medium_line_x2_t3_g3_t

0x3a00,	// (0x00027d0a) list_medium_line_x2_t3_g2_g1_ParamLimits

0x3a00,	// (0x00027d0a) list_medium_line_x2_t3_g2_g1

0x3a00,	// (0x00027d0a) list_medium_line_x2_t3_g2_g2_ParamLimits

0x3a00,	// (0x00027d0a) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1db,	// (0x000334e5) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1db,	// (0x000334e5) list_medium_line_x2_t3_g2_g

0x3a18,	// (0x00027d22) list_medium_line_x2_t3_g2_t1_ParamLimits

0x3a18,	// (0x00027d22) list_medium_line_x2_t3_g2_t1

0x3a18,	// (0x00027d22) list_medium_line_x2_t3_g2_t2_ParamLimits

0x3a18,	// (0x00027d22) list_medium_line_x2_t3_g2_t2

0x3a2b,	// (0x00027d35) list_medium_line_x2_t3_g2_t3_ParamLimits

0x3a2b,	// (0x00027d35) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1d4,	// (0x000334de) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1d4,	// (0x000334de) list_medium_line_x2_t3_g2_t

0x3a00,	// (0x00027d0a) list_medium_line_x2_t4_g4_g1_ParamLimits

0x3a00,	// (0x00027d0a) list_medium_line_x2_t4_g4_g1

0x3a0c,	// (0x00027d16) list_medium_line_x2_t4_g4_g2_ParamLimits

0x3a0c,	// (0x00027d16) list_medium_line_x2_t4_g4_g2

0x3a0c,	// (0x00027d16) list_medium_line_x2_t4_g4_g3_ParamLimits

0x3a0c,	// (0x00027d16) list_medium_line_x2_t4_g4_g3

0x3a00,	// (0x00027d0a) list_medium_line_x2_t4_g4_g4_ParamLimits

0x3a00,	// (0x00027d0a) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1e0,	// (0x000334ea) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1e0,	// (0x000334ea) list_medium_line_x2_t4_g4_g

0x3a18,	// (0x00027d22) list_medium_line_x2_t4_g4_t1_ParamLimits

0x3a18,	// (0x00027d22) list_medium_line_x2_t4_g4_t1

0x3a18,	// (0x00027d22) list_medium_line_x2_t4_g4_t2_ParamLimits

0x3a18,	// (0x00027d22) list_medium_line_x2_t4_g4_t2

0x3a18,	// (0x00027d22) list_medium_line_x2_t4_g4_t3_ParamLimits

0x3a18,	// (0x00027d22) list_medium_line_x2_t4_g4_t3

0x3a2b,	// (0x00027d35) list_medium_line_x2_t4_g4_t4_ParamLimits

0x3a2b,	// (0x00027d35) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1e9,	// (0x000334f3) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1e9,	// (0x000334f3) list_medium_line_x2_t4_g4_t

0x3a00,	// (0x00027d0a) list_medium_line_x2_t2_g4_g1_ParamLimits

0x3a00,	// (0x00027d0a) list_medium_line_x2_t2_g4_g1

0x3a0c,	// (0x00027d16) list_medium_line_x2_t2_g4_g2_ParamLimits

0x3a0c,	// (0x00027d16) list_medium_line_x2_t2_g4_g2

0x3a0c,	// (0x00027d16) list_medium_line_x2_t2_g4_g3_ParamLimits

0x3a0c,	// (0x00027d16) list_medium_line_x2_t2_g4_g3

0x3a00,	// (0x00027d0a) list_medium_line_x2_t2_g4_g4_ParamLimits

0x3a00,	// (0x00027d0a) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1e0,	// (0x000334ea) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1e0,	// (0x000334ea) list_medium_line_x2_t2_g4_g

0x3a18,	// (0x00027d22) list_medium_line_x2_t2_g4_t1_ParamLimits

0x3a18,	// (0x00027d22) list_medium_line_x2_t2_g4_t1

0x3a2b,	// (0x00027d35) list_medium_line_x2_t2_g4_t2_ParamLimits

0x3a2b,	// (0x00027d35) list_medium_line_x2_t2_g4_t2

0x0001,

0xf250,	// (0x0003355a) list_medium_line_x2_t2_g4_t_ParamLimits

0xf250,	// (0x0003355a) list_medium_line_x2_t2_g4_t

0x3a00,	// (0x00027d0a) list_medium_line_x2_t2_g3_g1_ParamLimits

0x3a00,	// (0x00027d0a) list_medium_line_x2_t2_g3_g1

0x3a0c,	// (0x00027d16) list_medium_line_x2_t2_g3_g2_ParamLimits

0x3a0c,	// (0x00027d16) list_medium_line_x2_t2_g3_g2

0x3a00,	// (0x00027d0a) list_medium_line_x2_t2_g3_g3_ParamLimits

0x3a00,	// (0x00027d0a) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1cd,	// (0x000334d7) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1cd,	// (0x000334d7) list_medium_line_x2_t2_g3_g

0x3a18,	// (0x00027d22) list_medium_line_x2_t2_g3_t1_ParamLimits

0x3a18,	// (0x00027d22) list_medium_line_x2_t2_g3_t1

0x3a2b,	// (0x00027d35) list_medium_line_x2_t2_g3_t2_ParamLimits

0x3a2b,	// (0x00027d35) list_medium_line_x2_t2_g3_t2

0x0001,

0xf250,	// (0x0003355a) list_medium_line_x2_t2_g3_t_ParamLimits

0xf250,	// (0x0003355a) list_medium_line_x2_t2_g3_t

0x4e10,	// (0x0002911a) main_sp_fs_list_pane_ParamLimits

0x4e10,	// (0x0002911a) main_sp_fs_list_pane

0x4e1d,	// (0x00029127) sp_fs_scroll_pane_ParamLimits

0x4e1d,	// (0x00029127) sp_fs_scroll_pane

0x4e2a,	// (0x00029134) list_medium_line_x2_t3_t1

0x4e2a,	// (0x00029134) list_medium_line_x2_t3_t2

0x4e39,	// (0x00029143) list_medium_line_x2_t3_t3

0x0002,

0xf29b,	// (0x000335a5) list_medium_line_x2_t3_t

0x4e2a,	// (0x00029134) list_medium_line_x3_t4_t1

0x4e2a,	// (0x00029134) list_medium_line_x3_t4_t2

0x4e2a,	// (0x00029134) list_medium_line_x3_t4_t3

0x4e2a,	// (0x00029134) list_medium_line_x3_t4_t4

0x0003,

0xf2a2,	// (0x000335ac) list_medium_line_x3_t4_t

0x4e2a,	// (0x00029134) list_medium_line_x4_t5_t1

0x4e2a,	// (0x00029134) list_medium_line_x4_t5_t2

0x4e2a,	// (0x00029134) list_medium_line_x4_t5_t3

0x4e2a,	// (0x00029134) list_medium_line_x4_t5_t4

0x4e2a,	// (0x00029134) list_medium_line_x4_t5_t5

0x0004,

0xf2ab,	// (0x000335b5) list_medium_line_x4_t5_t

0x3a00,	// (0x00027d0a) list_medium_line_t4_g4_g1_ParamLimits

0x3a00,	// (0x00027d0a) list_medium_line_t4_g4_g1

0x3a00,	// (0x00027d0a) list_medium_line_t4_g4_g2_ParamLimits

0x3a00,	// (0x00027d0a) list_medium_line_t4_g4_g2

0x3a00,	// (0x00027d0a) list_medium_line_t4_g4_g3_ParamLimits

0x3a00,	// (0x00027d0a) list_medium_line_t4_g4_g3

0x3a00,	// (0x00027d0a) list_medium_line_t4_g4_g4_ParamLimits

0x3a00,	// (0x00027d0a) list_medium_line_t4_g4_g4

0x0003,

0xf2b6,	// (0x000335c0) list_medium_line_t4_g4_g_ParamLimits

0xf2b6,	// (0x000335c0) list_medium_line_t4_g4_g

0x3a18,	// (0x00027d22) list_medium_line_t4_g4_t1_ParamLimits

0x3a18,	// (0x00027d22) list_medium_line_t4_g4_t1

0x3a18,	// (0x00027d22) list_medium_line_t4_g4_t2_ParamLimits

0x3a18,	// (0x00027d22) list_medium_line_t4_g4_t2

0x3a18,	// (0x00027d22) list_medium_line_t4_g4_t3_ParamLimits

0x3a18,	// (0x00027d22) list_medium_line_t4_g4_t3

0x3a18,	// (0x00027d22) list_medium_line_t4_g4_t4_ParamLimits

0x3a18,	// (0x00027d22) list_medium_line_t4_g4_t4

0x0003,

0xf2bf,	// (0x000335c9) list_medium_line_t4_g4_t_ParamLimits

0xf2bf,	// (0x000335c9) list_medium_line_t4_g4_t

0x513a,	// (0x00029444) chi_dic_find_pane_g1

0x1981,	// (0x00025c8b) main_tport_pane

0x4e2a,	// (0x00029134) list_medium_line_plain_t1

0x3a00,	// (0x00027d0a) list_medium_line_t2_g2_g1_ParamLimits

0x3a00,	// (0x00027d0a) list_medium_line_t2_g2_g1

0xd3aa,	// (0x000316b4) list_medium_line_t2_g2_g2_ParamLimits

0xd3aa,	// (0x000316b4) list_medium_line_t2_g2_g2

0x0001,

0xf990,	// (0x00033c9a) list_medium_line_t2_g2_g_ParamLimits

0xf990,	// (0x00033c9a) list_medium_line_t2_g2_g

0x3a18,	// (0x00027d22) list_medium_line_t2_g2_t1_ParamLimits

0x3a18,	// (0x00027d22) list_medium_line_t2_g2_t1

0x3a18,	// (0x00027d22) list_medium_line_t2_g2_t2_ParamLimits

0x3a18,	// (0x00027d22) list_medium_line_t2_g2_t2

0x0001,

0xf995,	// (0x00033c9f) list_medium_line_t2_g2_t_ParamLimits

0xf995,	// (0x00033c9f) list_medium_line_t2_g2_t

0xd75b,	// (0x00031a65) aid_sp_fs_list_icon_a_sm

0xd763,	// (0x00031a6d) aid_sp_fs_list_icon_d

0xd76b,	// (0x00031a75) aid_sp_fs_text_primary

0xd774,	// (0x00031a7e) aid_sp_fs_text_secondary

0xd77d,	// (0x00031a87) list_medium_line

0xd77d,	// (0x00031a87) list_medium_line_g2

0xd77d,	// (0x00031a87) list_medium_line_g3

0xd77d,	// (0x00031a87) list_medium_line_plain

0xd77d,	// (0x00031a87) list_medium_line_plain_t2

0xd77d,	// (0x00031a87) list_medium_line_plain_t3

0xd77d,	// (0x00031a87) list_medium_line_right_icon

0xd77d,	// (0x00031a87) list_medium_line_right_iconx2

0xd77d,	// (0x00031a87) list_medium_line_t2

0xd77d,	// (0x00031a87) list_medium_line_t2_g2

0xd77d,	// (0x00031a87) list_medium_line_t2_g3

0xd77d,	// (0x00031a87) list_medium_line_t2_right_icon

0xd77d,	// (0x00031a87) list_medium_line_t2_right_iconx2

0xd77d,	// (0x00031a87) list_medium_line_t3

0xd77d,	// (0x00031a87) list_medium_line_t3_g2

0xd77d,	// (0x00031a87) list_medium_line_t3_g3

0xd77d,	// (0x00031a87) list_medium_line_t3_right_iconx2

0x80cc,	// (0x0002c3d6) list_medium_line_t4_g4

0xd77d,	// (0x00031a87) list_medium_line_x2

0xd77d,	// (0x00031a87) list_medium_line_x2_t2_g2

0xd77d,	// (0x00031a87) list_medium_line_x2_t2_g3

0xd77d,	// (0x00031a87) list_medium_line_x2_t2_g4

0xd77d,	// (0x00031a87) list_medium_line_x2_t3

0xd77d,	// (0x00031a87) list_medium_line_x2_t3_g2

0xd77d,	// (0x00031a87) list_medium_line_x2_t3_g3

0xd77d,	// (0x00031a87) list_medium_line_x2_t3_g4

0xd77d,	// (0x00031a87) list_medium_line_x2_t4_g2

0xd77d,	// (0x00031a87) list_medium_line_x2_t4_g4

0x80d5,	// (0x0002c3df) list_medium_line_x3

0x80d5,	// (0x0002c3df) list_medium_line_x3_t4

0x80d5,	// (0x0002c3df) list_medium_line_x3_t4_g4

0x80cc,	// (0x0002c3d6) list_medium_line_x4_t4

0x80cc,	// (0x0002c3d6) list_medium_line_x4_t4_g7

0x80cc,	// (0x0002c3d6) list_medium_line_x4_t5

0x80de,	// (0x0002c3e8) list_single_fs_dyc_pane_ParamLimits

0x80de,	// (0x0002c3e8) list_single_fs_dyc_pane

0x3a00,	// (0x00027d0a) list_medium_line_x4_t4_g7_g1_ParamLimits

0x3a00,	// (0x00027d0a) list_medium_line_x4_t4_g7_g1

0x2f15,	// (0x0002721f) list_medium_line_x4_t4_g7_g2_ParamLimits

0x2f15,	// (0x0002721f) list_medium_line_x4_t4_g7_g2

0x3a0c,	// (0x00027d16) list_medium_line_x4_t4_g7_g3_ParamLimits

0x3a0c,	// (0x00027d16) list_medium_line_x4_t4_g7_g3

0x2f15,	// (0x0002721f) list_medium_line_x4_t4_g7_g4_ParamLimits

0x2f15,	// (0x0002721f) list_medium_line_x4_t4_g7_g4

0x2f15,	// (0x0002721f) list_medium_line_x4_t4_g7_g5_ParamLimits

0x2f15,	// (0x0002721f) list_medium_line_x4_t4_g7_g5

0x2f15,	// (0x0002721f) list_medium_line_x4_t4_g7_g6_ParamLimits

0x2f15,	// (0x0002721f) list_medium_line_x4_t4_g7_g6

0x2f23,	// (0x0002722d) list_medium_line_x4_t4_g7_g7_ParamLimits

0x2f23,	// (0x0002722d) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb60,	// (0x00033e6a) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb60,	// (0x00033e6a) list_medium_line_x4_t4_g7_g

0x3a18,	// (0x00027d22) list_medium_line_x4_t4_g7_t1_ParamLimits

0x3a18,	// (0x00027d22) list_medium_line_x4_t4_g7_t1

0x3a18,	// (0x00027d22) list_medium_line_x4_t4_g7_t2_ParamLimits

0x3a18,	// (0x00027d22) list_medium_line_x4_t4_g7_t2

0x3a18,	// (0x00027d22) list_medium_line_x4_t4_g7_t3_ParamLimits

0x3a18,	// (0x00027d22) list_medium_line_x4_t4_g7_t3

0xdc77,	// (0x00031f81) list_medium_line_x4_t4_g7_t4_ParamLimits

0xdc77,	// (0x00031f81) list_medium_line_x4_t4_g7_t4

0xdc8a,	// (0x00031f94) list_medium_line_x4_t4_g7_t5_ParamLimits

0xdc8a,	// (0x00031f94) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb6f,	// (0x00033e79) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb6f,	// (0x00033e79) list_medium_line_x4_t4_g7_t

0x875b,	// (0x0002ca65) list_single_dyc_row_pane_ParamLimits

0x875b,	// (0x0002ca65) list_single_dyc_row_pane

0x8df6,	// (0x0002d100) call5_gesture_pane_ParamLimits

0x8df6,	// (0x0002d100) call5_gesture_pane

0x8e3e,	// (0x0002d148) call5_windows_pane_ParamLimits

0x8e3e,	// (0x0002d148) call5_windows_pane

0x8ed7,	// (0x0002d1e1) call5_swipe_1_pane_cp_ParamLimits

0x8ed7,	// (0x0002d1e1) call5_swipe_1_pane_cp

0x8ee3,	// (0x0002d1ed) call5_swipe_2_pane_cp_ParamLimits

0x8ee3,	// (0x0002d1ed) call5_swipe_2_pane_cp

0x3793,	// (0x00027a9d) call5_image_pane_cp

0x8eef,	// (0x0002d1f9) popup_call5_audio_first_window_cp_ParamLimits

0x8eef,	// (0x0002d1f9) popup_call5_audio_first_window_cp

0xe27b,	// (0x00032585) call5_swipe_1_pane_g1_cp_ParamLimits

0xe27b,	// (0x00032585) call5_swipe_1_pane_g1_cp

0xe2c1,	// (0x000325cb) call5_swipe_1_pane_g2_cp

0xe294,	// (0x0003259e) call5_swipe_1_pane_t1_cp_ParamLimits

0xe294,	// (0x0003259e) call5_swipe_1_pane_t1_cp

0xe27b,	// (0x00032585) call5_swipe_2_pane_g1_cp_ParamLimits

0xe27b,	// (0x00032585) call5_swipe_2_pane_g1_cp

0xe2c9,	// (0x000325d3) call5_swipe_2_pane_g2_cp

0xe2d1,	// (0x000325db) call5_swipe_2_pane_t1_cp_ParamLimits

0xe2d1,	// (0x000325db) call5_swipe_2_pane_t1_cp

0x37fc,	// (0x00027b06) main_sp_fs_email_pane

0xe2e6,	// (0x000325f0) main_sp_fs_listscroll_pane_te

0x8efb,	// (0x0002d205) popup_sp_fs_action_menu_pane_ParamLimits

0x8efb,	// (0x0002d205) popup_sp_fs_action_menu_pane

0x398e,	// (0x00027c98) bg_sp_fs_ctrlbar_pane_g1

0xc98f,	// (0x00030c99) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xc9a1,	// (0x00030cab) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xc998,	// (0x00030ca2) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x398e,	// (0x00027c98) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc5d,	// (0x00033f67) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc1fc,	// (0x00030506) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc1fc,	// (0x00030506) bg_sp_fs_ctrlbar_ddmenu_pane

0xe2ef,	// (0x000325f9) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe2ef,	// (0x000325f9) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe2fb,	// (0x00032605) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe2fb,	// (0x00032605) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc66,	// (0x00033f70) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc66,	// (0x00033f70) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe307,	// (0x00032611) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe307,	// (0x00032611) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe321,	// (0x0003262b) list_medium_line_t2_right_icon_g1

0x4e2a,	// (0x00029134) list_medium_line_t2_right_icon_t1

0x4e2a,	// (0x00029134) list_medium_line_t2_right_icon_t2

0x0001,

0xfc6b,	// (0x00033f75) list_medium_line_t2_right_icon_t

0x56a0,	// (0x000299aa) bg_sp_fs_ctrlbar_pane_ParamLimits

0x56a0,	// (0x000299aa) bg_sp_fs_ctrlbar_pane

0x8f73,	// (0x0002d27d) main_sp_fs_ctrlbar_button_pane_cp01

0x8f7b,	// (0x0002d285) main_sp_fs_ctrlbar_ddmenu_pane

0xe361,	// (0x0003266b) main_sp_fs_ctrlbar_pane_g1

0xe36d,	// (0x00032677) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc70,	// (0x00033f7a) main_sp_fs_ctrlbar_pane_g

0x8fb7,	// (0x0002d2c1) main_sp_fs_ctrlbar_pane_t1

0x9000,	// (0x0002d30a) main_sp_fs_ctrlbar_pane

0x9021,	// (0x0002d32b) main_sp_fs_listscroll_pane_te_cp01

0x9041,	// (0x0002d34b) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x9041,	// (0x0002d34b) popup_sp_fs_action_menu_pane_cp01

0x37fc,	// (0x00027b06) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x37fc,	// (0x00027b06) bg_sp_fs_highlight_list_pane_cp01

0x906b,	// (0x0002d375) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x906b,	// (0x0002d375) sp_fs_action_menu_list_gene_pane_g1

0xe394,	// (0x0003269e) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe394,	// (0x0003269e) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc7e,	// (0x00033f88) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc7e,	// (0x00033f88) sp_fs_action_menu_list_gene_pane_g

0x907a,	// (0x0002d384) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x907a,	// (0x0002d384) sp_fs_action_menu_list_gene_pane_t1

0x9092,	// (0x0002d39c) sp_fs_action_menu_list_gene_pane_ParamLimits

0x9092,	// (0x0002d39c) sp_fs_action_menu_list_gene_pane

0xe3a1,	// (0x000326ab) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe3a1,	// (0x000326ab) popup_sp_fs_action_menu_bg_pane

0x90af,	// (0x0002d3b9) sp_fs_action_menu_list_pane_ParamLimits

0x90af,	// (0x0002d3b9) sp_fs_action_menu_list_pane

0xe3af,	// (0x000326b9) sp_fs_scroll_pane_cp01_ParamLimits

0xe3af,	// (0x000326b9) sp_fs_scroll_pane_cp01

0x4e2a,	// (0x00029134) list_medium_line_plain_t2_t1

0x4e2a,	// (0x00029134) list_medium_line_plain_t2_t2

0x0001,

0xfc6b,	// (0x00033f75) list_medium_line_plain_t2_t

0x4e2a,	// (0x00029134) list_medium_line_plain_t3_t1

0x4e2a,	// (0x00029134) list_medium_line_plain_t3_t2

0x4e2a,	// (0x00029134) list_medium_line_plain_t3_t3

0x0002,

0xfc83,	// (0x00033f8d) list_medium_line_plain_t3_t

0x3a00,	// (0x00027d0a) list_medium_line_x2_t2_g2_g1_ParamLimits

0x3a00,	// (0x00027d0a) list_medium_line_x2_t2_g2_g1

0x3a00,	// (0x00027d0a) list_medium_line_x2_t2_g2_g2_ParamLimits

0x3a00,	// (0x00027d0a) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1db,	// (0x000334e5) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1db,	// (0x000334e5) list_medium_line_x2_t2_g2_g

0x3a18,	// (0x00027d22) list_medium_line_x2_t2_g2_t1_ParamLimits

0x3a18,	// (0x00027d22) list_medium_line_x2_t2_g2_t1

0x3a2b,	// (0x00027d35) list_medium_line_x2_t2_g2_t2_ParamLimits

0x3a2b,	// (0x00027d35) list_medium_line_x2_t2_g2_t2

0x0001,

0xf250,	// (0x0003355a) list_medium_line_x2_t2_g2_t_ParamLimits

0xf250,	// (0x0003355a) list_medium_line_x2_t2_g2_t

0x3a00,	// (0x00027d0a) list_medium_line_x2_t4_g2_g1_ParamLimits

0x3a00,	// (0x00027d0a) list_medium_line_x2_t4_g2_g1

0x3a00,	// (0x00027d0a) list_medium_line_x2_t4_g2_g2_ParamLimits

0x3a00,	// (0x00027d0a) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1db,	// (0x000334e5) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1db,	// (0x000334e5) list_medium_line_x2_t4_g2_g

0x3a18,	// (0x00027d22) list_medium_line_x2_t4_g2_t1_ParamLimits

0x3a18,	// (0x00027d22) list_medium_line_x2_t4_g2_t1

0x3a18,	// (0x00027d22) list_medium_line_x2_t4_g2_t2_ParamLimits

0x3a18,	// (0x00027d22) list_medium_line_x2_t4_g2_t2

0x3a18,	// (0x00027d22) list_medium_line_x2_t4_g2_t3_ParamLimits

0x3a18,	// (0x00027d22) list_medium_line_x2_t4_g2_t3

0x3a2b,	// (0x00027d35) list_medium_line_x2_t4_g2_t4_ParamLimits

0x3a2b,	// (0x00027d35) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1e9,	// (0x000334f3) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1e9,	// (0x000334f3) list_medium_line_x2_t4_g2_t

0xe321,	// (0x0003262b) list_medium_line_t3_right_iconx2_g1

0x398e,	// (0x00027c98) list_medium_line_t3_right_iconx2_g2

0xe3d5,	// (0x000326df) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfc8a,	// (0x00033f94) list_medium_line_t3_right_iconx2_g

0x4e2a,	// (0x00029134) list_medium_line_t3_right_iconx2_t1

0x4e2a,	// (0x00029134) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc6b,	// (0x00033f75) list_medium_line_t3_right_iconx2_t

0x3a00,	// (0x00027d0a) list_medium_line_x3_t4_g4_g1_ParamLimits

0x3a00,	// (0x00027d0a) list_medium_line_x3_t4_g4_g1

0x3a0c,	// (0x00027d16) list_medium_line_x3_t4_g4_g2_ParamLimits

0x3a0c,	// (0x00027d16) list_medium_line_x3_t4_g4_g2

0x3a00,	// (0x00027d0a) list_medium_line_x3_t4_g4_g3_ParamLimits

0x3a00,	// (0x00027d0a) list_medium_line_x3_t4_g4_g3

0x3a0c,	// (0x00027d16) list_medium_line_x3_t4_g4_g4_ParamLimits

0x3a0c,	// (0x00027d16) list_medium_line_x3_t4_g4_g4

0x0003,

0xfc91,	// (0x00033f9b) list_medium_line_x3_t4_g4_g_ParamLimits

0xfc91,	// (0x00033f9b) list_medium_line_x3_t4_g4_g

0x3a18,	// (0x00027d22) list_medium_line_x3_t4_g4_t1_ParamLimits

0x3a18,	// (0x00027d22) list_medium_line_x3_t4_g4_t1

0x3a18,	// (0x00027d22) list_medium_line_x3_t4_g4_t2_ParamLimits

0x3a18,	// (0x00027d22) list_medium_line_x3_t4_g4_t2

0x3a18,	// (0x00027d22) list_medium_line_x3_t4_g4_t3_ParamLimits

0x3a18,	// (0x00027d22) list_medium_line_x3_t4_g4_t3

0xe3de,	// (0x000326e8) list_medium_line_x3_t4_g4_t4_ParamLimits

0xe3de,	// (0x000326e8) list_medium_line_x3_t4_g4_t4

0x0003,

0xfc9a,	// (0x00033fa4) list_medium_line_x3_t4_g4_t_ParamLimits

0xfc9a,	// (0x00033fa4) list_medium_line_x3_t4_g4_t

0x90cd,	// (0x0002d3d7) list_single_dyc_row_text_pane_t1_ParamLimits

0x90cd,	// (0x0002d3d7) list_single_dyc_row_text_pane_t1

0x9104,	// (0x0002d40e) list_single_dyc_row_text_pane_t2_ParamLimits

0x9104,	// (0x0002d40e) list_single_dyc_row_text_pane_t2

0xe3fb,	// (0x00032705) list_single_dyc_row_text_pane_t3_ParamLimits

0xe3fb,	// (0x00032705) list_single_dyc_row_text_pane_t3

0x0005,

0xfca3,	// (0x00033fad) list_single_dyc_row_text_pane_t_ParamLimits

0xfca3,	// (0x00033fad) list_single_dyc_row_text_pane_t

0xe41f,	// (0x00032729) list_single_dyc_row_pane_g1_ParamLimits

0xe41f,	// (0x00032729) list_single_dyc_row_pane_g1

0xe42b,	// (0x00032735) list_single_dyc_row_pane_g2_ParamLimits

0xe42b,	// (0x00032735) list_single_dyc_row_pane_g2

0xe437,	// (0x00032741) list_single_dyc_row_pane_g3_ParamLimits

0xe437,	// (0x00032741) list_single_dyc_row_pane_g3

0xe443,	// (0x0003274d) list_single_dyc_row_pane_g4_ParamLimits

0xe443,	// (0x0003274d) list_single_dyc_row_pane_g4

0x0003,

0xfcb0,	// (0x00033fba) list_single_dyc_row_pane_g_ParamLimits

0xfcb0,	// (0x00033fba) list_single_dyc_row_pane_g

0xe44f,	// (0x00032759) list_single_dyc_row_text_pane_ParamLimits

0xe44f,	// (0x00032759) list_single_dyc_row_text_pane

0x2767,	// (0x00026a71) bg_sp_fs_scroll_pane

0xe46e,	// (0x00032778) thumb_sp_fs_scroll_pane

0x3a00,	// (0x00027d0a) list_medium_line_g1_ParamLimits

0x3a00,	// (0x00027d0a) list_medium_line_g1

0x3a18,	// (0x00027d22) list_medium_line_t1_ParamLimits

0x3a18,	// (0x00027d22) list_medium_line_t1

0x3a00,	// (0x00027d0a) list_medium_line_x2_g1_ParamLimits

0x3a00,	// (0x00027d0a) list_medium_line_x2_g1

0xd3aa,	// (0x000316b4) list_medium_line_x2_g2_ParamLimits

0xd3aa,	// (0x000316b4) list_medium_line_x2_g2

0x0001,

0xf990,	// (0x00033c9a) list_medium_line_x2_g_ParamLimits

0xf990,	// (0x00033c9a) list_medium_line_x2_g

0x380a,	// (0x00027b14) list_medium_line_x2_t1_ParamLimits

0x380a,	// (0x00027b14) list_medium_line_x2_t1

0x3a00,	// (0x00027d0a) list_medium_line_x3_g1_ParamLimits

0x3a00,	// (0x00027d0a) list_medium_line_x3_g1

0xe477,	// (0x00032781) list_medium_line_x3_g2_ParamLimits

0xe477,	// (0x00032781) list_medium_line_x3_g2

0x0001,

0xfcb9,	// (0x00033fc3) list_medium_line_x3_g_ParamLimits

0xfcb9,	// (0x00033fc3) list_medium_line_x3_g

0xe484,	// (0x0003278e) list_medium_line_x3_t1_ParamLimits

0xe484,	// (0x0003278e) list_medium_line_x3_t1

0xe498,	// (0x000327a2) thumb_sp_fs_scroll_pane_g1

0xe4a1,	// (0x000327ab) thumb_sp_fs_scroll_pane_g2

0xe4aa,	// (0x000327b4) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfcbe,	// (0x00033fc8) thumb_sp_fs_scroll_pane_g

0xe498,	// (0x000327a2) bg_sp_fs_scroll_pane_g1

0xe4a1,	// (0x000327ab) bg_sp_fs_scroll_pane_g2

0xe4aa,	// (0x000327b4) bg_sp_fs_scroll_pane_g3

0x0002,

0xfcbe,	// (0x00033fc8) bg_sp_fs_scroll_pane_g

0x3a00,	// (0x00027d0a) list_medium_line_x2_t3_g4_g1_ParamLimits

0x3a00,	// (0x00027d0a) list_medium_line_x2_t3_g4_g1

0x3a0c,	// (0x00027d16) list_medium_line_x2_t3_g4_g2_ParamLimits

0x3a0c,	// (0x00027d16) list_medium_line_x2_t3_g4_g2

0x3a0c,	// (0x00027d16) list_medium_line_x2_t3_g4_g3_ParamLimits

0x3a0c,	// (0x00027d16) list_medium_line_x2_t3_g4_g3

0x3a00,	// (0x00027d0a) list_medium_line_x2_t3_g4_g4_ParamLimits

0x3a00,	// (0x00027d0a) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1e0,	// (0x000334ea) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1e0,	// (0x000334ea) list_medium_line_x2_t3_g4_g

0x3a18,	// (0x00027d22) list_medium_line_x2_t3_g4_t1_ParamLimits

0x3a18,	// (0x00027d22) list_medium_line_x2_t3_g4_t1

0x3a18,	// (0x00027d22) list_medium_line_x2_t3_g4_t2_ParamLimits

0x3a18,	// (0x00027d22) list_medium_line_x2_t3_g4_t2

0x3a2b,	// (0x00027d35) list_medium_line_x2_t3_g4_t3_ParamLimits

0x3a2b,	// (0x00027d35) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1d4,	// (0x000334de) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1d4,	// (0x000334de) list_medium_line_x2_t3_g4_t

0x3a00,	// (0x00027d0a) list_medium_line_g2_g1_ParamLimits

0x3a00,	// (0x00027d0a) list_medium_line_g2_g1

0xd3aa,	// (0x000316b4) list_medium_line_g2_g2_ParamLimits

0xd3aa,	// (0x000316b4) list_medium_line_g2_g2

0x0001,

0xf990,	// (0x00033c9a) list_medium_line_g2_g_ParamLimits

0xf990,	// (0x00033c9a) list_medium_line_g2_g

0x3a18,	// (0x00027d22) list_medium_line_g2_t1_ParamLimits

0x3a18,	// (0x00027d22) list_medium_line_g2_t1

0x3a00,	// (0x00027d0a) list_medium_line_t3_g2_g1_ParamLimits

0x3a00,	// (0x00027d0a) list_medium_line_t3_g2_g1

0xd3aa,	// (0x000316b4) list_medium_line_t3_g2_g2_ParamLimits

0xd3aa,	// (0x000316b4) list_medium_line_t3_g2_g2

0x0001,

0xf990,	// (0x00033c9a) list_medium_line_t3_g2_g_ParamLimits

0xf990,	// (0x00033c9a) list_medium_line_t3_g2_g

0x3a18,	// (0x00027d22) list_medium_line_t3_g2_t1_ParamLimits

0x3a18,	// (0x00027d22) list_medium_line_t3_g2_t1

0x3a18,	// (0x00027d22) list_medium_line_t3_g2_t2_ParamLimits

0x3a18,	// (0x00027d22) list_medium_line_t3_g2_t2

0x3a18,	// (0x00027d22) list_medium_line_t3_g2_t3_ParamLimits

0x3a18,	// (0x00027d22) list_medium_line_t3_g2_t3

0x0002,

0xfcc5,	// (0x00033fcf) list_medium_line_t3_g2_t_ParamLimits

0xfcc5,	// (0x00033fcf) list_medium_line_t3_g2_t

0xe4b3,	// (0x000327bd) list_medium_line_right_icon_g1

0x4e2a,	// (0x00029134) list_medium_line_right_icon_t1

0x3a00,	// (0x00027d0a) list_medium_line_t2_g1_ParamLimits

0x3a00,	// (0x00027d0a) list_medium_line_t2_g1

0x3a18,	// (0x00027d22) list_medium_line_t2_t1_ParamLimits

0x3a18,	// (0x00027d22) list_medium_line_t2_t1

0x3a18,	// (0x00027d22) list_medium_line_t2_t2_ParamLimits

0x3a18,	// (0x00027d22) list_medium_line_t2_t2

0x0001,

0xf995,	// (0x00033c9f) list_medium_line_t2_t_ParamLimits

0xf995,	// (0x00033c9f) list_medium_line_t2_t

0x3a00,	// (0x00027d0a) list_medium_line_t3_g1_ParamLimits

0x3a00,	// (0x00027d0a) list_medium_line_t3_g1

0x3a18,	// (0x00027d22) list_medium_line_t3_t1_ParamLimits

0x3a18,	// (0x00027d22) list_medium_line_t3_t1

0x3a18,	// (0x00027d22) list_medium_line_t3_t2_ParamLimits

0x3a18,	// (0x00027d22) list_medium_line_t3_t2

0x3a18,	// (0x00027d22) list_medium_line_t3_t3_ParamLimits

0x3a18,	// (0x00027d22) list_medium_line_t3_t3

0x0002,

0xfcc5,	// (0x00033fcf) list_medium_line_t3_t_ParamLimits

0xfcc5,	// (0x00033fcf) list_medium_line_t3_t

0x3a00,	// (0x00027d0a) list_medium_line_g3_g1_ParamLimits

0x3a00,	// (0x00027d0a) list_medium_line_g3_g1

0x3a0c,	// (0x00027d16) list_medium_line_g3_g2_ParamLimits

0x3a0c,	// (0x00027d16) list_medium_line_g3_g2

0x3a0c,	// (0x00027d16) list_medium_line_g3_g3_ParamLimits

0x3a0c,	// (0x00027d16) list_medium_line_g3_g3

0x0002,

0xfccc,	// (0x00033fd6) list_medium_line_g3_g_ParamLimits

0xfccc,	// (0x00033fd6) list_medium_line_g3_g

0x3a18,	// (0x00027d22) list_medium_line_g3_t1_ParamLimits

0x3a18,	// (0x00027d22) list_medium_line_g3_t1

0x3a00,	// (0x00027d0a) list_medium_line_t2_g3_g1_ParamLimits

0x3a00,	// (0x00027d0a) list_medium_line_t2_g3_g1

0x3a0c,	// (0x00027d16) list_medium_line_t2_g3_g2_ParamLimits

0x3a0c,	// (0x00027d16) list_medium_line_t2_g3_g2

0x3a0c,	// (0x00027d16) list_medium_line_t2_g3_g3_ParamLimits

0x3a0c,	// (0x00027d16) list_medium_line_t2_g3_g3

0x0002,

0xfccc,	// (0x00033fd6) list_medium_line_t2_g3_g_ParamLimits

0xfccc,	// (0x00033fd6) list_medium_line_t2_g3_g

0x3a18,	// (0x00027d22) list_medium_line_t2_g3_t1_ParamLimits

0x3a18,	// (0x00027d22) list_medium_line_t2_g3_t1

0x3a18,	// (0x00027d22) list_medium_line_t2_g3_t2_ParamLimits

0x3a18,	// (0x00027d22) list_medium_line_t2_g3_t2

0x0001,

0xf995,	// (0x00033c9f) list_medium_line_t2_g3_t_ParamLimits

0xf995,	// (0x00033c9f) list_medium_line_t2_g3_t

0x3a00,	// (0x00027d0a) list_medium_line_t3_g3_g1_ParamLimits

0x3a00,	// (0x00027d0a) list_medium_line_t3_g3_g1

0x3a0c,	// (0x00027d16) list_medium_line_t3_g3_g2_ParamLimits

0x3a0c,	// (0x00027d16) list_medium_line_t3_g3_g2

0x3a0c,	// (0x00027d16) list_medium_line_t3_g3_g3_ParamLimits

0x3a0c,	// (0x00027d16) list_medium_line_t3_g3_g3

0x0002,

0xfccc,	// (0x00033fd6) list_medium_line_t3_g3_g_ParamLimits

0xfccc,	// (0x00033fd6) list_medium_line_t3_g3_g

0x3a18,	// (0x00027d22) list_medium_line_t3_g3_t1_ParamLimits

0x3a18,	// (0x00027d22) list_medium_line_t3_g3_t1

0x3a18,	// (0x00027d22) list_medium_line_t3_g3_t2_ParamLimits

0x3a18,	// (0x00027d22) list_medium_line_t3_g3_t2

0x3a18,	// (0x00027d22) list_medium_line_t3_g3_t3_ParamLimits

0x3a18,	// (0x00027d22) list_medium_line_t3_g3_t3

0x0002,

0xfcc5,	// (0x00033fcf) list_medium_line_t3_g3_t_ParamLimits

0xfcc5,	// (0x00033fcf) list_medium_line_t3_g3_t

0xe321,	// (0x0003262b) list_medium_line_right_iconx2_g1

0xe321,	// (0x0003262b) list_medium_line_right_iconx2_g2

0x0001,

0xfcd3,	// (0x00033fdd) list_medium_line_right_iconx2_g

0xe4bc,	// (0x000327c6) list_medium_line_right_iconx2_t1

0xe321,	// (0x0003262b) list_medium_line_t2_right_iconx2_g1

0xe321,	// (0x0003262b) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfcd3,	// (0x00033fdd) list_medium_line_t2_right_iconx2_g

0x4e2a,	// (0x00029134) list_medium_line_t2_right_iconx2_t1

0x4e2a,	// (0x00029134) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc6b,	// (0x00033f75) list_medium_line_t2_right_iconx2_t

0x4e2a,	// (0x00029134) list_medium_line_x4_t4_t1

0x4e2a,	// (0x00029134) list_medium_line_x4_t4_t2

0x4e2a,	// (0x00029134) list_medium_line_x4_t4_t3

0x4e2a,	// (0x00029134) list_medium_line_x4_t4_t4

0x0003,

0xf2a2,	// (0x000335ac) list_medium_line_x4_t4_t

0x9260,	// (0x0002d56a) tport_appsw_pane_ParamLimits

0x9260,	// (0x0002d56a) tport_appsw_pane

0x9271,	// (0x0002d57b) tport_contact_pane_ParamLimits

0x9271,	// (0x0002d57b) tport_contact_pane

0x9285,	// (0x0002d58f) tport_listscroll_pane_ParamLimits

0x9285,	// (0x0002d58f) tport_listscroll_pane

0x929d,	// (0x0002d5a7) cell_tport_appsw_pane_ParamLimits

0x929d,	// (0x0002d5a7) cell_tport_appsw_pane

0x566a,	// (0x00029974) tport_appsw_pane_g1_ParamLimits

0x566a,	// (0x00029974) tport_appsw_pane_g1

0xe4cb,	// (0x000327d5) tport_contact_pane_g1

0xe4d4,	// (0x000327de) tport_contact_pane_t1

0xe4e2,	// (0x000327ec) tport_contact_pane_t2

0x0001,

0xfcd8,	// (0x00033fe2) tport_contact_pane_t

0xe4f0,	// (0x000327fa) list_tport_pane

0x3229,	// (0x00027533) scroll_pane_cp_030

0xe501,	// (0x0003280b) cell_tport_appsw_pane_g1

0xe511,	// (0x0003281b) cell_tport_appsw_pane_t1

0xe51f,	// (0x00032829) grid_highlight_pane_cp019

0x92d3,	// (0x0002d5dd) list_tport_double_graphic_pane_ParamLimits

0x92d3,	// (0x0002d5dd) list_tport_double_graphic_pane

0x37fc,	// (0x00027b06) list_highlight_pane_cp023_ParamLimits

0x37fc,	// (0x00027b06) list_highlight_pane_cp023

0x92e0,	// (0x0002d5ea) list_tport_double_graphic_pane_g1_ParamLimits

0x92e0,	// (0x0002d5ea) list_tport_double_graphic_pane_g1

0x92ed,	// (0x0002d5f7) list_tport_double_graphic_pane_t1_ParamLimits

0x92ed,	// (0x0002d5f7) list_tport_double_graphic_pane_t1

0x9302,	// (0x0002d60c) list_tport_double_graphic_pane_t2_ParamLimits

0x9302,	// (0x0002d60c) list_tport_double_graphic_pane_t2

0x0001,

0xfce4,	// (0x00033fee) list_tport_double_graphic_pane_t_ParamLimits

0xfce4,	// (0x00033fee) list_tport_double_graphic_pane_t

0x2767,	// (0x00026a71) main_cale_note_pane

0x23de,	// (0x000266e8) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x23de,	// (0x000266e8) cell_vitu2_function_top_wide_pane_cp01

0x8aa6,	// (0x0002cdb0) wait_bar_pane_cp05_ParamLimits

0x37fc,	// (0x00027b06) listscroll_cmail_pane

0xe52f,	// (0x00032839) list_cmail_pane

0x9314,	// (0x0002d61e) list_cmail_body_pane

0x9314,	// (0x0002d61e) list_single_cmail_header_caption_pane

0x932b,	// (0x0002d635) list_single_cmail_header_detail_pane_ParamLimits

0x932b,	// (0x0002d635) list_single_cmail_header_detail_pane

0xe552,	// (0x0003285c) list_single_cmail_header_caption_pane_t1

0x9356,	// (0x0002d660) list_single_cmail_header_detail_pane_g1_ParamLimits

0x9356,	// (0x0002d660) list_single_cmail_header_detail_pane_g1

0xe569,	// (0x00032873) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe569,	// (0x00032873) list_single_cmail_header_detail_pane_g2

0x0002,

0xfce9,	// (0x00033ff3) list_single_cmail_header_detail_pane_g_ParamLimits

0xfce9,	// (0x00033ff3) list_single_cmail_header_detail_pane_g

0x936c,	// (0x0002d676) list_single_cmail_header_detail_pane_t1_ParamLimits

0x936c,	// (0x0002d676) list_single_cmail_header_detail_pane_t1

0xe5a6,	// (0x000328b0) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe5a6,	// (0x000328b0) list_single_cmail_header_editor_pane_bg

0xe5bd,	// (0x000328c7) list_cmail_body_pane_g1

0xe5c6,	// (0x000328d0) list_cmail_body_pane_t1

0xd0eb,	// (0x000313f5) list_single_cmail_header_editor_pane_bg_g1

0x3fdd,	// (0x000282e7) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd0fb,	// (0x00031405) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd0f3,	// (0x000313fd) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd382,	// (0x0003168c) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd11b,	// (0x00031425) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd10b,	// (0x00031415) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd113,	// (0x0003141d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x3fbd,	// (0x000282c7) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x93a8,	// (0x0002d6b2) calenote_gesture_pane_ParamLimits

0x93a8,	// (0x0002d6b2) calenote_gesture_pane

0x93c4,	// (0x0002d6ce) calenote_window_pane_ParamLimits

0x93c4,	// (0x0002d6ce) calenote_window_pane

0xe5d4,	// (0x000328de) popup_note_window_cp01

0x93e0,	// (0x0002d6ea) calenote_swipe_1_pane_ParamLimits

0x93e0,	// (0x0002d6ea) calenote_swipe_1_pane

0x8ee3,	// (0x0002d1ed) calenote_swipe_2_pane_ParamLimits

0x8ee3,	// (0x0002d1ed) calenote_swipe_2_pane

0xe27b,	// (0x00032585) calenote_swipe_1_pane_g1_ParamLimits

0xe27b,	// (0x00032585) calenote_swipe_1_pane_g1

0xe288,	// (0x00032592) calenote_swipe_1_pane_g2_ParamLimits

0xe288,	// (0x00032592) calenote_swipe_1_pane_g2

0x0001,

0xfc53,	// (0x00033f5d) calenote_swipe_1_pane_g_ParamLimits

0xfc53,	// (0x00033f5d) calenote_swipe_1_pane_g

0xe5e6,	// (0x000328f0) calenote_swipe_1_pane_t1_ParamLimits

0xe5e6,	// (0x000328f0) calenote_swipe_1_pane_t1

0xe27b,	// (0x00032585) calenote_swipe_2_pane_g1_ParamLimits

0xe27b,	// (0x00032585) calenote_swipe_2_pane_g1

0xe605,	// (0x0003290f) calenote_swipe_2_pane_g2_ParamLimits

0xe605,	// (0x0003290f) calenote_swipe_2_pane_g2

0x0001,

0xfcf5,	// (0x00033fff) calenote_swipe_2_pane_g_ParamLimits

0xfcf5,	// (0x00033fff) calenote_swipe_2_pane_g

0xe611,	// (0x0003291b) calenote_swipe_2_pane_t1_ParamLimits

0xe611,	// (0x0003291b) calenote_swipe_2_pane_t1

0x2767,	// (0x00026a71) main_mup_navstr_pane

0x6cd1,	// (0x0002afdb) main_mup3_pane_t7_ParamLimits

0x6cd1,	// (0x0002afdb) main_mup3_pane_t7

0xcc79,	// (0x00030f83) main_mp4_pane_g6_ParamLimits

0xcc79,	// (0x00030f83) main_mp4_pane_g6

0xcec9,	// (0x000311d3) main_image3_pane_t4_ParamLimits

0xcec9,	// (0x000311d3) main_image3_pane_t4

0x93f5,	// (0x0002d6ff) popup_navstr_preview_pane_ParamLimits

0x93f5,	// (0x0002d6ff) popup_navstr_preview_pane

0x9405,	// (0x0002d70f) scroll_navstr_pane_ParamLimits

0x9405,	// (0x0002d70f) scroll_navstr_pane

0x2767,	// (0x00026a71) bg_popup_preview_window_pane_cp04

0xe638,	// (0x00032942) popup_navstr_preview_pane_t1

0x9419,	// (0x0002d723) scroll_navstr_pane_g1_ParamLimits

0x9419,	// (0x0002d723) scroll_navstr_pane_g1

0x942d,	// (0x0002d737) scroll_navstr_pane_t1_ParamLimits

0x942d,	// (0x0002d737) scroll_navstr_pane_t1

0xe5dd,	// (0x000328e7) bg_button_pane_cp014

0xe5dd,	// (0x000328e7) bg_button_pane_cp030

0x8da1,	// (0x0002d0ab) list_double_fisheye_pane_g4_ParamLimits

0x8da1,	// (0x0002d0ab) list_double_fisheye_pane_g4

0x8dad,	// (0x0002d0b7) list_double_fisheye_pane_g5_ParamLimits

0x8dad,	// (0x0002d0b7) list_double_fisheye_pane_g5

0xe546,	// (0x00032850) sp_fs_scroll_pane_cp03

0xe361,	// (0x0003266b) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe36d,	// (0x00032677) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc70,	// (0x00033f7a) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x8fb7,	// (0x0002d2c1) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe53e,	// (0x00032848) sp_fs_scroll_pane_cp02

0x3289,	// (0x00027593) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x3289,	// (0x00027593) popup_sp_fs_calendar_preview_list_single_pane

0x2767,	// (0x00026a71) main_cam6_pano_pane

0xacec,	// (0x0002eff6) main_mup3_pane_ParamLimits

0x2767,	// (0x00026a71) main_phacti_pane

0x8999,	// (0x0002cca3) bg_button_pane_cp11

0x89b1,	// (0x0002ccbb) main_mobtv_info_pane_g2_ParamLimits

0x89b1,	// (0x0002ccbb) main_mobtv_info_pane_g2

0x0001,

0xfbd0,	// (0x00033eda) main_mobtv_info_pane_g_ParamLimits

0xfbd0,	// (0x00033eda) main_mobtv_info_pane_g

0x8b66,	// (0x0002ce70) sc_clock_pane_t5_ParamLimits

0x8b66,	// (0x0002ce70) sc_clock_pane_t5

0x8c11,	// (0x0002cf1b) main_radioblah_pane_g1_ParamLimits

0xe1be,	// (0x000324c8) main_radioblah_pane_t3_ParamLimits

0xe1be,	// (0x000324c8) main_radioblah_pane_t3

0xe1d6,	// (0x000324e0) main_radioblah_pane_t4_ParamLimits

0xe1d6,	// (0x000324e0) main_radioblah_pane_t4

0x8c39,	// (0x0002cf43) main_radioblah_text_pane_ParamLimits

0x8c39,	// (0x0002cf43) main_radioblah_text_pane

0x8c4b,	// (0x0002cf55) main_radioblah_info_pane_g1_ParamLimits

0x8cde,	// (0x0002cfe8) main_radioblah_info_pane_t4_ParamLimits

0x8cde,	// (0x0002cfe8) main_radioblah_info_pane_t4

0x37fc,	// (0x00027b06) main_sp_fs_calendar_pane

0x9443,	// (0x0002d74d) main_phacti_pane_g1

0x944b,	// (0x0002d755) phacti_note_pane_ParamLimits

0x944b,	// (0x0002d755) phacti_note_pane

0xe64f,	// (0x00032959) phacti_term_pane_ParamLimits

0xe64f,	// (0x00032959) phacti_term_pane

0xe664,	// (0x0003296e) phacti_note_pane_t1_ParamLimits

0xe664,	// (0x0003296e) phacti_note_pane_t1

0xe67b,	// (0x00032985) phacti_term_pane_g1

0xe683,	// (0x0003298d) phacti_term_pane_t1_ParamLimits

0xe683,	// (0x0003298d) phacti_term_pane_t1

0xe6ad,	// (0x000329b7) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe6b5,	// (0x000329bf) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfcff,	// (0x00034009) popup_sp_fs_calendar_preview_list_single_pane_g

0xe6bd,	// (0x000329c7) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe6bd,	// (0x000329c7) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe6d3,	// (0x000329dd) aid_popup_sp_fs_bg_corner_pane

0x398e,	// (0x00027c98) popup_sp_fs_calendar_preview_bg_pane_g1

0x2767,	// (0x00026a71) popup_sp_fs_calendar_preview_bg_pane

0xe6db,	// (0x000329e5) popup_sp_fs_calendar_preview_list_pane

0x56a0,	// (0x000299aa) bg_main_sp_fs_cale_pane_ParamLimits

0x56a0,	// (0x000299aa) bg_main_sp_fs_cale_pane

0xe6ec,	// (0x000329f6) listscroll_cale_mrui_pane_ParamLimits

0xe6ec,	// (0x000329f6) listscroll_cale_mrui_pane

0xe701,	// (0x00032a0b) listscroll_sp_fs_schedule_track_pane

0xe70a,	// (0x00032a14) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe70a,	// (0x00032a14) main_sp_fs_ctrlbar_pane_cp01

0xe71d,	// (0x00032a27) main_sp_fs_ribbon_pane

0xe725,	// (0x00032a2f) popup_sp_fs_cale_preview_window

0x94ae,	// (0x0002d7b8) list_single_sp_fs_schedule_track_pane_ParamLimits

0x94ae,	// (0x0002d7b8) list_single_sp_fs_schedule_track_pane

0x37fc,	// (0x00027b06) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x37fc,	// (0x00027b06) bg_sp_fs_highlight_list_pane_cp03

0x94c2,	// (0x0002d7cc) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x94c2,	// (0x0002d7cc) list_single_sp_fs_schedule_track_pane_g1

0x94ce,	// (0x0002d7d8) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x94ce,	// (0x0002d7d8) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfd04,	// (0x0003400e) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfd04,	// (0x0003400e) list_single_sp_fs_schedule_track_pane_g

0x94da,	// (0x0002d7e4) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x94da,	// (0x0002d7e4) list_single_sp_fs_schedule_track_pane_t1

0x94f4,	// (0x0002d7fe) sp_fs_schedule_track_pane_ParamLimits

0x94f4,	// (0x0002d7fe) sp_fs_schedule_track_pane

0xe737,	// (0x00032a41) sp_fs_schedule_track_pane_g1

0xe73f,	// (0x00032a49) sp_fs_schedule_track_pane_g2

0xe747,	// (0x00032a51) sp_fs_schedule_track_pane_g3

0xe74f,	// (0x00032a59) sp_fs_schedule_track_pane_g4

0xe757,	// (0x00032a61) sp_fs_schedule_track_pane_g5

0x0004,

0xfd09,	// (0x00034013) sp_fs_schedule_track_pane_g

0xd0eb,	// (0x000313f5) bg_sp_fs_schedule_viewer_highlight_g1

0x3fdd,	// (0x000282e7) bg_sp_fs_schedule_viewer_highlight_g2

0xd0f3,	// (0x000313fd) bg_sp_fs_schedule_viewer_highlight_g3

0xd0fb,	// (0x00031405) bg_sp_fs_schedule_viewer_highlight_g4

0xd382,	// (0x0003168c) bg_sp_fs_schedule_viewer_highlight_g5

0xd10b,	// (0x00031415) bg_sp_fs_schedule_viewer_highlight_g6

0xd113,	// (0x0003141d) bg_sp_fs_schedule_viewer_highlight_g7

0xd11b,	// (0x00031425) bg_sp_fs_schedule_viewer_highlight_g8

0x3fbd,	// (0x000282c7) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfd14,	// (0x0003401e) bg_sp_fs_schedule_viewer_highlight_g

0x2767,	// (0x00026a71) bg_main_sp_fs_ribbon_pane

0x9505,	// (0x0002d80f) main_sp_fs_ribbon_pane_g1

0xe75f,	// (0x00032a69) main_sp_fs_ribbon_pane_t1

0x950e,	// (0x0002d818) main_sp_fs_ribbon_pane_t2

0xe76e,	// (0x00032a78) main_sp_fs_ribbon_pane_t3

0x0002,

0xfd27,	// (0x00034031) main_sp_fs_ribbon_pane_t

0xe77d,	// (0x00032a87) main_sp_fs_ribbon_scheduler_pane

0xe785,	// (0x00032a8f) bg_main_sp_fs_ribbon_pane_g1

0xe78e,	// (0x00032a98) bg_main_sp_fs_ribbon_pane_g2

0xe797,	// (0x00032aa1) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfd2e,	// (0x00034038) bg_main_sp_fs_ribbon_pane_g

0xe79f,	// (0x00032aa9) main_sp_fs_ribbon_scheduler_pane_g1

0xe7a8,	// (0x00032ab2) main_sp_fs_ribbon_scheduler_pane_g2

0xe7b1,	// (0x00032abb) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfd35,	// (0x0003403f) main_sp_fs_ribbon_scheduler_pane_g

0xe7ba,	// (0x00032ac4) list_cale_mrui_pane

0x951d,	// (0x0002d827) sp_fs_scroll_pane_cp07_ParamLimits

0x951d,	// (0x0002d827) sp_fs_scroll_pane_cp07

0x9535,	// (0x0002d83f) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x9535,	// (0x0002d83f) bg_sp_fs_schedule_viewer_highlight

0xe7c7,	// (0x00032ad1) list_single_sp_fs_schedule_track_pane_cp01

0xe7cf,	// (0x00032ad9) list_sp_fs_schedule_track_pane

0xe7d7,	// (0x00032ae1) sp_fs_scroll_pane_cp06_ParamLimits

0xe7d7,	// (0x00032ae1) sp_fs_scroll_pane_cp06

0x398e,	// (0x00027c98) bgmain_sp_fs_calendar_pane_g1

0x9545,	// (0x0002d84f) list_single_cale_mrui_pane_ParamLimits

0x9545,	// (0x0002d84f) list_single_cale_mrui_pane

0xe7e9,	// (0x00032af3) list_single_cale_mrui_row_pane_ParamLimits

0xe7e9,	// (0x00032af3) list_single_cale_mrui_row_pane

0x9566,	// (0x0002d870) list_single_cale_mrui_row_pane_g1_ParamLimits

0x9566,	// (0x0002d870) list_single_cale_mrui_row_pane_g1

0x959e,	// (0x0002d8a8) list_single_cale_mrui_row_pane_t1_ParamLimits

0x959e,	// (0x0002d8a8) list_single_cale_mrui_row_pane_t1

0x95b0,	// (0x0002d8ba) list_single_cale_mrui_row_pane_t2_ParamLimits

0x95b0,	// (0x0002d8ba) list_single_cale_mrui_row_pane_t2

0x9616,	// (0x0002d920) list_single_cale_mrui_row_pane_t3_ParamLimits

0x9616,	// (0x0002d920) list_single_cale_mrui_row_pane_t3

0x9645,	// (0x0002d94f) list_single_cale_mrui_row_pane_t4_ParamLimits

0x9645,	// (0x0002d94f) list_single_cale_mrui_row_pane_t4

0x0003,

0xfd43,	// (0x0003404d) list_single_cale_mrui_row_pane_t_ParamLimits

0xfd43,	// (0x0003404d) list_single_cale_mrui_row_pane_t

0x9674,	// (0x0002d97e) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x9674,	// (0x0002d97e) list_single_cmail_header_editor_pane_bg_cp01

0x9698,	// (0x0002d9a2) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x9698,	// (0x0002d9a2) list_single_cmail_header_editor_pane_bg_cp02

0x96b6,	// (0x0002d9c0) main_radioblah_text_pane_t1_ParamLimits

0x96b6,	// (0x0002d9c0) main_radioblah_text_pane_t1

0xe80c,	// (0x00032b16) cam6_indi_pane_cp01

0xe814,	// (0x00032b1e) cam6_mode_pane_cp01

0xe81c,	// (0x00032b26) cam6_pano_pane

0xe825,	// (0x00032b2f) cam6_zoom_pane_cp01

0xe82d,	// (0x00032b37) cam6_pano_image_pane

0xe836,	// (0x00032b40) cam6_pano_pane_g1

0xdf25,	// (0x0003222f) cam6_pano_pane_g2

0xe83f,	// (0x00032b49) cam6_pano_pane_g3

0xe848,	// (0x00032b52) cam6_pano_pane_g4

0xc97c,	// (0x00030c86) cam6_pano_pane_g5

0xe851,	// (0x00032b5b) cam6_pano_pane_g6

0xe859,	// (0x00032b63) cam6_pano_pane_g7

0xe861,	// (0x00032b6b) cam6_pano_pane_g8

0xe86a,	// (0x00032b74) cam6_pano_pane_g9

0x0008,

0xfd4c,	// (0x00034056) cam6_pano_pane_g

0x2767,	// (0x00026a71) main_browser_tag_pane

0xe630,	// (0x0003293a) grid_navstr_albumart_pane

0xe873,	// (0x00032b7d) cell_navstr_albumart_pane_ParamLimits

0xe873,	// (0x00032b7d) cell_navstr_albumart_pane

0x58f4,	// (0x00029bfe) cell_navstr_albumart_pane_g1

0xbd28,	// (0x00030032) cell_navstr_albumart_pane_g2

0xbd38,	// (0x00030042) cell_navstr_albumart_pane_g3

0xbd30,	// (0x0003003a) cell_navstr_albumart_pane_g4

0x0003,

0xfd5f,	// (0x00034069) cell_navstr_albumart_pane_g

0x96cf,	// (0x0002d9d9) bt_list_pane_ParamLimits

0x96cf,	// (0x0002d9d9) bt_list_pane

0x96e2,	// (0x0002d9ec) bt_list_pane_t1

0x96f1,	// (0x0002d9fb) bt_list_pane_t2

0x0001,

0xfd68,	// (0x00034072) bt_list_pane_t

0x2767,	// (0x00026a71) main_cale_prevew_pane

0x9700,	// (0x0002da0a) popup_cale_preview_window_ParamLimits

0x9700,	// (0x0002da0a) popup_cale_preview_window

0x37fc,	// (0x00027b06) bg_popup_preview_window_pane_cp05_ParamLimits

0x37fc,	// (0x00027b06) bg_popup_preview_window_pane_cp05

0xe88a,	// (0x00032b94) list_cale_preview_pane_ParamLimits

0xe88a,	// (0x00032b94) list_cale_preview_pane

0x9715,	// (0x0002da1f) list_double_cale_preview_pane_ParamLimits

0x9715,	// (0x0002da1f) list_double_cale_preview_pane

0x9726,	// (0x0002da30) list_single_cale_preview_pane_ParamLimits

0x9726,	// (0x0002da30) list_single_cale_preview_pane

0xe896,	// (0x00032ba0) list_single_cale_preview_pane_g1

0xe89e,	// (0x00032ba8) list_single_cale_preview_pane_t1_ParamLimits

0xe89e,	// (0x00032ba8) list_single_cale_preview_pane_t1

0x973a,	// (0x0002da44) list_double_cale_preview_pane_g1

0x9742,	// (0x0002da4c) list_double_cale_preview_pane_t1_ParamLimits

0x9742,	// (0x0002da4c) list_double_cale_preview_pane_t1

0x9757,	// (0x0002da61) list_double_cale_preview_pane_t2_ParamLimits

0x9757,	// (0x0002da61) list_double_cale_preview_pane_t2

0x0001,

0xfd6d,	// (0x00034077) list_double_cale_preview_pane_t_ParamLimits

0xfd6d,	// (0x00034077) list_double_cale_preview_pane_t

0x2767,	// (0x00026a71) main_ezdial_pane

0x37fc,	// (0x00027b06) main_sp_fs_email_pane_ParamLimits

0x8f2d,	// (0x0002d237) cmail_ddmenu_btn01_pane_ParamLimits

0x8f2d,	// (0x0002d237) cmail_ddmenu_btn01_pane

0x8f40,	// (0x0002d24a) cmail_ddmenu_btn02_pane_ParamLimits

0x8f40,	// (0x0002d24a) cmail_ddmenu_btn02_pane

0x8f63,	// (0x0002d26d) cmail_ddmenu_btn03_pane_ParamLimits

0x8f63,	// (0x0002d26d) cmail_ddmenu_btn03_pane

0x9000,	// (0x0002d30a) main_sp_fs_ctrlbar_pane_ParamLimits

0x9021,	// (0x0002d32b) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x9314,	// (0x0002d61e) list_cmail_body_pane_ParamLimits

0xe560,	// (0x0003286a) bg_button_pane_cp12

0xe575,	// (0x0003287f) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe575,	// (0x0003287f) list_single_cmail_header_detail_pane_g3

0xe582,	// (0x0003288c) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe582,	// (0x0003288c) list_single_cmail_header_detail_pane_t2

0x0001,

0xfcf0,	// (0x00033ffa) list_single_cmail_header_detail_pane_t_ParamLimits

0xfcf0,	// (0x00033ffa) list_single_cmail_header_detail_pane_t

0xe698,	// (0x000329a2) phacti_term_pane_t2_ParamLimits

0xe698,	// (0x000329a2) phacti_term_pane_t2

0x0001,

0xfcfa,	// (0x00034004) phacti_term_pane_t_ParamLimits

0xfcfa,	// (0x00034004) phacti_term_pane_t

0xe8b3,	// (0x00032bbd) aid_size_list_single_double

0x976f,	// (0x0002da79) popup_ezdial_listscroll_window

0x9785,	// (0x0002da8f) popup_number_entry_window_cp01

0x3793,	// (0x00027a9d) bg_popup_call_pane_cp09

0xe8bf,	// (0x00032bc9) ezdial_list_pane

0xe8c7,	// (0x00032bd1) scroll_pane_cp23

0x56a0,	// (0x000299aa) bg_button_pane_cp028_ParamLimits

0x56a0,	// (0x000299aa) bg_button_pane_cp028

0x9791,	// (0x0002da9b) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x9791,	// (0x0002da9b) cmail_ddmenu_btn01_pane_g1

0x979d,	// (0x0002daa7) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x979d,	// (0x0002daa7) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd72,	// (0x0003407c) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd72,	// (0x0003407c) cmail_ddmenu_btn01_pane_g

0xe8cf,	// (0x00032bd9) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe8cf,	// (0x00032bd9) cmail_ddmenu_btn01_pane_t1

0x56a0,	// (0x000299aa) bg_button_pane_cp029_ParamLimits

0x56a0,	// (0x000299aa) bg_button_pane_cp029

0x97a9,	// (0x0002dab3) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x97a9,	// (0x0002dab3) cmail_ddmenu_btn02_pane_g1

0x97c1,	// (0x0002dacb) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x97c1,	// (0x0002dacb) cmail_ddmenu_btn02_pane_t1

0x37fc,	// (0x00027b06) bg_button_pane_cp031_ParamLimits

0x37fc,	// (0x00027b06) bg_button_pane_cp031

0x97a9,	// (0x0002dab3) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x97a9,	// (0x0002dab3) cmail_ddmenu_btn03_pane_g1

0x97c1,	// (0x0002dacb) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x97c1,	// (0x0002dacb) cmail_ddmenu_btn03_pane_t1

0x73fe,	// (0x0002b708) cell_dialer2_keypad_pane_t1_ParamLimits

0x7418,	// (0x0002b722) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x7418,	// (0x0002b722) cell_dialer2_keypad_pane_t1_copy1

0x8805,	// (0x0002cb0f) ncimui_group_button_pane

0x37fc,	// (0x00027b06) main_sp_fs_calendar_pane_ParamLimits

0x9314,	// (0x0002d61e) list_single_cmail_header_caption_pane_ParamLimits

0xe6e3,	// (0x000329ed) aid_recal_txt_sm_pane

0x2767,	// (0x00026a71) mian_recal_day_pane

0xe725,	// (0x00032a2f) popup_sp_fs_cale_preview_window_ParamLimits

0xe8e4,	// (0x00032bee) list_recal_day_pane

0xe926,	// (0x00032c30) list_single_recal_day_pane_ParamLimits

0xe926,	// (0x00032c30) list_single_recal_day_pane

0xe938,	// (0x00032c42) list_single_recal_day_pane_g1_ParamLimits

0xe938,	// (0x00032c42) list_single_recal_day_pane_g1

0xe944,	// (0x00032c4e) list_single_recal_day_pane_g2_ParamLimits

0xe944,	// (0x00032c4e) list_single_recal_day_pane_g2

0xe950,	// (0x00032c5a) list_single_recal_day_pane_g3_ParamLimits

0xe950,	// (0x00032c5a) list_single_recal_day_pane_g3

0x97e5,	// (0x0002daef) list_single_recal_day_pane_g4_ParamLimits

0x97e5,	// (0x0002daef) list_single_recal_day_pane_g4

0xe95c,	// (0x00032c66) list_single_recal_day_pane_g5_ParamLimits

0xe95c,	// (0x00032c66) list_single_recal_day_pane_g5

0x97fd,	// (0x0002db07) list_single_recal_day_pane_g6_ParamLimits

0x97fd,	// (0x0002db07) list_single_recal_day_pane_g6

0x0004,

0xfd81,	// (0x0003408b) list_single_recal_day_pane_g_ParamLimits

0xfd81,	// (0x0003408b) list_single_recal_day_pane_g

0xe970,	// (0x00032c7a) list_single_recal_day_pane_t1

0x9809,	// (0x0002db13) list_single_recal_day_pane_t2

0x0001,

0xfd8c,	// (0x00034096) list_single_recal_day_pane_t

0x981b,	// (0x0002db25) ncimui_query_button_pane_ParamLimits

0x981b,	// (0x0002db25) ncimui_query_button_pane

0x982b,	// (0x0002db35) ncimui_query_button_pane_t1_ParamLimits

0x982b,	// (0x0002db35) ncimui_query_button_pane_t1

0xe982,	// (0x00032c8c) ncimui_query_button_pane_t2_ParamLimits

0xe982,	// (0x00032c8c) ncimui_query_button_pane_t2

0x0001,

0xfd91,	// (0x0003409b) ncimui_query_button_pane_t_ParamLimits

0xfd91,	// (0x0003409b) ncimui_query_button_pane_t

0x983e,	// (0x0002db48) query_button_pane_ParamLimits

0x983e,	// (0x0002db48) query_button_pane

0x2767,	// (0x00026a71) bg_button_pane_cp0028

0xe995,	// (0x00032c9f) query_button_pane_t1

0x1981,	// (0x00025c8b) main_tport_pane_ParamLimits

0x9227,	// (0x0002d531) bg_popup_window_pane_cp01_ParamLimits

0x9227,	// (0x0002d531) bg_popup_window_pane_cp01

0x923e,	// (0x0002d548) heading_pane_cp08_ParamLimits

0x923e,	// (0x0002d548) heading_pane_cp08

0x924f,	// (0x0002d559) heading_pane_cp07_ParamLimits

0x924f,	// (0x0002d559) heading_pane_cp07

0xe501,	// (0x0003280b) cell_tport_appsw_pane_g2

0x0002,

0xfcdd,	// (0x00033fe7) cell_tport_appsw_pane_g

0x58ec,	// (0x00029bf6) input_candi_list_open_g1

0x4c4c,	// (0x00028f56) list_cale_time_pane_g6_ParamLimits

0x4c4c,	// (0x00028f56) list_cale_time_pane_g6

0x6762,	// (0x0002aa6c) aid_size_touch_calib_1_ParamLimits

0x6762,	// (0x0002aa6c) aid_size_touch_calib_1

0x6774,	// (0x0002aa7e) aid_size_touch_calib_2_ParamLimits

0x6774,	// (0x0002aa7e) aid_size_touch_calib_2

0x678a,	// (0x0002aa94) aid_size_touch_calib_3_ParamLimits

0x678a,	// (0x0002aa94) aid_size_touch_calib_3

0x67a2,	// (0x0002aaac) aid_size_touch_calib_4_ParamLimits

0x67a2,	// (0x0002aaac) aid_size_touch_calib_4

0x67b6,	// (0x0002aac0) main_touch_calib_button_group_pane_ParamLimits

0x67b6,	// (0x0002aac0) main_touch_calib_button_group_pane

0x67ce,	// (0x0002aad8) main_touch_calib_pane_g1_ParamLimits

0x67e0,	// (0x0002aaea) main_touch_calib_pane_g2_ParamLimits

0x67f2,	// (0x0002aafc) main_touch_calib_pane_g3_ParamLimits

0x6804,	// (0x0002ab0e) main_touch_calib_pane_g4_ParamLimits

0xf6dd,	// (0x000339e7) main_touch_calib_pane_g_ParamLimits

0x6816,	// (0x0002ab20) main_touch_calib_pane_t1_ParamLimits

0x682e,	// (0x0002ab38) main_touch_calib_pane_t2_ParamLimits

0x6846,	// (0x0002ab50) main_touch_calib_pane_t3_ParamLimits

0x6858,	// (0x0002ab62) main_touch_calib_pane_t4_ParamLimits

0x686a,	// (0x0002ab74) main_touch_calib_pane_t5_ParamLimits

0xf6e6,	// (0x000339f0) main_touch_calib_pane_t_ParamLimits

0xc77d,	// (0x00030a87) list_single_fp_cale_pane_g3_ParamLimits

0xc77d,	// (0x00030a87) list_single_fp_cale_pane_g3

0xacec,	// (0x0002eff6) bg_button_pane_cp012_ParamLimits

0xacec,	// (0x0002eff6) bg_vkb2_func_pane_cp03_ParamLimits

0x25e3,	// (0x000268ed) cell_vitu2_function_top_pane_g1_ParamLimits

0xacec,	// (0x0002eff6) bg_vkb2_func_pane_cp04_ParamLimits

0x8795,	// (0x0002ca9f) main_ncimui_button_group_pane_ParamLimits

0x8795,	// (0x0002ca9f) main_ncimui_button_group_pane

0x87f3,	// (0x0002cafd) main_ncimui_pane_t3_ParamLimits

0x87f3,	// (0x0002cafd) main_ncimui_pane_t3

0xe646,	// (0x00032950) phacti_button_group_pane

0xe8b3,	// (0x00032bbd) aid_size_list_single_double_ParamLimits

0x976f,	// (0x0002da79) popup_ezdial_listscroll_window_ParamLimits

0x9785,	// (0x0002da8f) popup_number_entry_window_cp01_ParamLimits

0x9850,	// (0x0002db5a) phacti_button_pane_ParamLimits

0x9850,	// (0x0002db5a) phacti_button_pane

0x2767,	// (0x00026a71) bg_button_pane_cp14

0xe9a3,	// (0x00032cad) phacti_button_pane_t1

0x985f,	// (0x0002db69) main_touch_calib_button_pane_ParamLimits

0x985f,	// (0x0002db69) main_touch_calib_button_pane

0x3063,	// (0x0002736d) bg_button_pane_cp18_ParamLimits

0x3063,	// (0x0002736d) bg_button_pane_cp18

0x987a,	// (0x0002db84) main_touch_calib_button_pane_t1_ParamLimits

0x987a,	// (0x0002db84) main_touch_calib_button_pane_t1

0x9890,	// (0x0002db9a) main_touch_calib_button_pane_t2_ParamLimits

0x9890,	// (0x0002db9a) main_touch_calib_button_pane_t2

0x0001,

0xfd96,	// (0x000340a0) main_touch_calib_button_pane_t_ParamLimits

0xfd96,	// (0x000340a0) main_touch_calib_button_pane_t

0x2767,	// (0x00026a71) cell_ncimui_button_pane

0x2767,	// (0x00026a71) bg_button_pane_cp032

0xe9b1,	// (0x00032cbb) cell_ncimui_button_pane_t1

0xcea9,	// (0x000311b3) image3_infobar_pane_ParamLimits

0xcea9,	// (0x000311b3) image3_infobar_pane

0x8b8e,	// (0x0002ce98) fs_bigclock_status_pane_ParamLimits

0x8b8e,	// (0x0002ce98) fs_bigclock_status_pane

0x8b9b,	// (0x0002cea5) main_fs_bigclock_clock_pane_ParamLimits

0x8b9b,	// (0x0002cea5) main_fs_bigclock_clock_pane

0x8bbd,	// (0x0002cec7) main_fs_bigclock_indi_pane_ParamLimits

0x8bbd,	// (0x0002cec7) main_fs_bigclock_indi_pane

0x8be7,	// (0x0002cef1) main_fs_bigclock_swipe_pane_ParamLimits

0x8be7,	// (0x0002cef1) main_fs_bigclock_swipe_pane

0x2767,	// (0x00026a71) main_fs_clock_dumped_data

0xe032,	// (0x0003233c) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe032,	// (0x0003233c) list_single_fs_bigclock_indicator_pane_g1

0xe04c,	// (0x00032356) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe04c,	// (0x00032356) list_single_fs_bigclock_indicator_pane_g2

0xe066,	// (0x00032370) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe066,	// (0x00032370) list_single_fs_bigclock_indicator_pane_g3

0xe080,	// (0x0003238a) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe080,	// (0x0003238a) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc04,	// (0x00033f0e) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc04,	// (0x00033f0e) list_single_fs_bigclock_indicator_pane_g

0xe0a9,	// (0x000323b3) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe0a9,	// (0x000323b3) list_single_fs_bigclock_indicator_pane_t1

0xe0d1,	// (0x000323db) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe0d1,	// (0x000323db) list_single_fs_bigclock_indicator_pane_t2

0xe0f9,	// (0x00032403) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe0f9,	// (0x00032403) list_single_fs_bigclock_indicator_pane_t3

0xe121,	// (0x0003242b) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe121,	// (0x0003242b) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc0f,	// (0x00033f19) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc0f,	// (0x00033f19) list_single_fs_bigclock_indicator_pane_t

0xe9bf,	// (0x00032cc9) image3_infobar_fav_pane_ParamLimits

0xe9bf,	// (0x00032cc9) image3_infobar_fav_pane

0xe9cf,	// (0x00032cd9) image3_infobar_loc_pane_ParamLimits

0xe9cf,	// (0x00032cd9) image3_infobar_loc_pane

0xe9e3,	// (0x00032ced) image3_infobar_time_pane_ParamLimits

0xe9e3,	// (0x00032ced) image3_infobar_time_pane

0x398e,	// (0x00027c98) image3_infobar_time_pane_g1

0xe9f3,	// (0x00032cfd) image3_infobar_time_pane_t1

0x398e,	// (0x00027c98) image3_infobar_loc_pane_g1

0xea01,	// (0x00032d0b) image3_infobar_loc_pane_g2

0x0001,

0xfd9b,	// (0x000340a5) image3_infobar_loc_pane_g

0xea09,	// (0x00032d13) image3_infobar_loc_pane_t1

0x398e,	// (0x00027c98) image3_infobar_fav_pane_g1

0xea17,	// (0x00032d21) image3_infobar_fav_pane_g2

0x0001,

0xfda0,	// (0x000340aa) image3_infobar_fav_pane_g

0xea1f,	// (0x00032d29) fs_bigclock_status_battery_pane

0xea28,	// (0x00032d32) fs_bigclock_status_signal_pane

0xea31,	// (0x00032d3b) fs_bigclock_status_title_pane

0xea3a,	// (0x00032d44) fs_bigclock_status_signal_pane_g1

0xea43,	// (0x00032d4d) fs_bigclock_status_signal_pane_g2

0x0001,

0xfda5,	// (0x000340af) fs_bigclock_status_signal_pane_g

0xea4b,	// (0x00032d55) fs_bigclock_status_battery_pane_g1

0xea54,	// (0x00032d5e) fs_bigclock_status_battery_pane_g2

0x0001,

0xfdaa,	// (0x000340b4) fs_bigclock_status_battery_pane_g

0xea5c,	// (0x00032d66) fs_bigclock_status_title_pane_t1

0x98ae,	// (0x0002dbb8) main_fs_bigclock_clock_pane_g1

0x98c0,	// (0x0002dbca) main_fs_bigclock_clock_pane_g2

0x98d1,	// (0x0002dbdb) main_fs_bigclock_clock_pane_g3

0x98d1,	// (0x0002dbdb) main_fs_bigclock_clock_pane_g4

0x0003,

0xfdaf,	// (0x000340b9) main_fs_bigclock_clock_pane_g

0x98e4,	// (0x0002dbee) main_fs_bigclock_clock_pane_t1

0x98ff,	// (0x0002dc09) main_fs_bigclock_clock_pane_t2

0x0001,

0xfdb8,	// (0x000340c2) main_fs_bigclock_clock_pane_t

0xea6a,	// (0x00032d74) list_single_fs_bigclock_indicator_pane_ParamLimits

0xea6a,	// (0x00032d74) list_single_fs_bigclock_indicator_pane

0xea7b,	// (0x00032d85) list_single_fs_bigclock_pane_ParamLimits

0xea7b,	// (0x00032d85) list_single_fs_bigclock_pane

0xeaa1,	// (0x00032dab) main_fs_bigclock_indicator_pane_t1

0xeab0,	// (0x00032dba) list_single_fs_bigclock_pane_g1

0xeab8,	// (0x00032dc2) list_single_fs_bigclock_pane_t1

0x398e,	// (0x00027c98) main_fs_bigclock_swipe_pane_g1

0xeaf8,	// (0x00032e02) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfdc9,	// (0x000340d3) main_fs_bigclock_swipe_pane_g

0xeb00,	// (0x00032e0a) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xeb00,	// (0x00032e0a) main_fs_bigclock_swipe_pane_t1

0x4f56,	// (0x00029260) call_type_pane_ParamLimits

0x2767,	// (0x00026a71) main_btmg_pane

0x9592,	// (0x0002d89c) list_single_cale_mrui_row_pane_g2_ParamLimits

0x9592,	// (0x0002d89c) list_single_cale_mrui_row_pane_g2

0x0002,

0xfd3c,	// (0x00034046) list_single_cale_mrui_row_pane_g_ParamLimits

0xfd3c,	// (0x00034046) list_single_cale_mrui_row_pane_g

0xe90d,	// (0x00032c17) list_recal_vselct_arw_lo_pane

0xe915,	// (0x00032c1f) list_recal_vselct_arw_up_pane

0xe91d,	// (0x00032c27) list_recal_vselct_pane

0xeb1d,	// (0x00032e27) btmg_button_pane

0x995f,	// (0x0002dc69) main_btmg_pane_g1

0x2767,	// (0x00026a71) bg_button_pane_cp044

0xeb25,	// (0x00032e2f) btmg_button_pane_t1

0xbec8,	// (0x000301d2) aid_listscroll_gen

0x37fc,	// (0x00027b06) main_cntbar_detail_pane

0xe527,	// (0x00032831) list_cmail_folder_pane

0xe546,	// (0x00032850) sp_fs_scroll_pane_cp03_ParamLimits

0xeb33,	// (0x00032e3d) list_single_fs_dyc_pane_cp01_ParamLimits

0xeb33,	// (0x00032e3d) list_single_fs_dyc_pane_cp01

0xeb49,	// (0x00032e53) aid_size_cmail_indent

0xeb52,	// (0x00032e5c) list_single_dyc_row_pane_cp01

0x998f,	// (0x0002dc99) cntbar_detail_list_pane_ParamLimits

0x998f,	// (0x0002dc99) cntbar_detail_list_pane

0x99d5,	// (0x0002dcdf) main_cntbar_detail_cont_pane_ParamLimits

0x99d5,	// (0x0002dcdf) main_cntbar_detail_cont_pane

0x99e9,	// (0x0002dcf3) scroll_pane_cp032_ParamLimits

0x99e9,	// (0x0002dcf3) scroll_pane_cp032

0x99f5,	// (0x0002dcff) cntbar_detail_list_event_pane_ParamLimits

0x99f5,	// (0x0002dcff) cntbar_detail_list_event_pane

0x999f,	// (0x0002dca9) cntbar_detail_list_shct_pane

0xeb5b,	// (0x00032e65) aid_list_gen

0x3229,	// (0x00027533) aid_scroll

0xd6bd,	// (0x000319c7) aid_size_touch_scroll_bar

0xd77d,	// (0x00031a87) aid_list_double

0x9a06,	// (0x0002dd10) aid_list_single

0xd77d,	// (0x00031a87) aid_list_single_lg

0x9a0f,	// (0x0002dd19) aid_list_z_g_a_sm

0x9a17,	// (0x0002dd21) aid_list_z_g_d

0x9a1f,	// (0x0002dd29) aid_txt_z_prm

0x9a2d,	// (0x0002dd37) aid_txt_z_prm_cp01

0x9a3b,	// (0x0002dd45) aid_txt_z_sec

0x9a49,	// (0x0002dd53) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9a49,	// (0x0002dd53) main_cntbar_detail_cont_pane_g1

0x9a5d,	// (0x0002dd67) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9a5d,	// (0x0002dd67) main_cntbar_detail_cont_pane_g2

0x0001,

0xfdce,	// (0x000340d8) main_cntbar_detail_cont_pane_g_ParamLimits

0xfdce,	// (0x000340d8) main_cntbar_detail_cont_pane_g

0xeb64,	// (0x00032e6e) main_cntbar_detail_cont_pane_t1

0xeb72,	// (0x00032e7c) main_cntbar_detail_cont_pane_t2

0xeb80,	// (0x00032e8a) main_cntbar_detail_cont_pane_t3

0x0002,

0xfdd3,	// (0x000340dd) main_cntbar_detail_cont_pane_t

0x9a6d,	// (0x0002dd77) cell_cntbar_detail_list_shct_pane_ParamLimits

0x9a6d,	// (0x0002dd77) cell_cntbar_detail_list_shct_pane

0xeb8e,	// (0x00032e98) cntbar_detail_list_shct_pane_g1

0xeb97,	// (0x00032ea1) cntbar_detail_list_shct_pane_g2

0x0001,

0xfdda,	// (0x000340e4) cntbar_detail_list_shct_pane_g

0x9a7f,	// (0x0002dd89) cntbar_detail_list_event_pane_g1_ParamLimits

0x9a7f,	// (0x0002dd89) cntbar_detail_list_event_pane_g1

0x9a8b,	// (0x0002dd95) cntbar_detail_list_event_pane_g2_ParamLimits

0x9a8b,	// (0x0002dd95) cntbar_detail_list_event_pane_g2

0x0005,

0xfddf,	// (0x000340e9) cntbar_detail_list_event_pane_g_ParamLimits

0xfddf,	// (0x000340e9) cntbar_detail_list_event_pane_g

0x9af7,	// (0x0002de01) cntbar_detail_list_event_pane_t1_ParamLimits

0x9af7,	// (0x0002de01) cntbar_detail_list_event_pane_t1

0x9b0c,	// (0x0002de16) cntbar_detail_list_event_pane_t2_ParamLimits

0x9b0c,	// (0x0002de16) cntbar_detail_list_event_pane_t2

0x0002,

0xfdec,	// (0x000340f6) cntbar_detail_list_event_pane_t_ParamLimits

0xfdec,	// (0x000340f6) cntbar_detail_list_event_pane_t

0x398e,	// (0x00027c98) cell_cntbar_detail_list_shct_pane_g1

0x551d,	// (0x00029827) navi_pane_mv_g3

0x37fc,	// (0x00027b06) main_cntbar_detail_pane_ParamLimits

0x2767,	// (0x00026a71) main_notif_wgt_pane

0xcc07,	// (0x00030f11) aid_tch_main_mp4_pane_g4

0xce29,	// (0x00031133) popup_slider_window_cp02

0xe903,	// (0x00032c0d) list_recal_day_event_pane

0x9967,	// (0x0002dc71) cntbar_detail_btn_pane_ParamLimits

0x9967,	// (0x0002dc71) cntbar_detail_btn_pane

0x997a,	// (0x0002dc84) cntbar_detail_btn_pane_cp01_ParamLimits

0x997a,	// (0x0002dc84) cntbar_detail_btn_pane_cp01

0x999f,	// (0x0002dca9) cntbar_detail_list_shct_pane_ParamLimits

0x99af,	// (0x0002dcb9) cntbar_detail_pane_g1_ParamLimits

0x99af,	// (0x0002dcb9) cntbar_detail_pane_g1

0x99bf,	// (0x0002dcc9) cntbar_detail_pane_t1_ParamLimits

0x99bf,	// (0x0002dcc9) cntbar_detail_pane_t1

0x9a97,	// (0x0002dda1) cntbar_detail_list_event_pane_g3_ParamLimits

0x9a97,	// (0x0002dda1) cntbar_detail_list_event_pane_g3

0x9aaf,	// (0x0002ddb9) cntbar_detail_list_event_pane_g4_ParamLimits

0x9aaf,	// (0x0002ddb9) cntbar_detail_list_event_pane_g4

0x9ac7,	// (0x0002ddd1) cntbar_detail_list_event_pane_g5_ParamLimits

0x9ac7,	// (0x0002ddd1) cntbar_detail_list_event_pane_g5

0x9adf,	// (0x0002dde9) cntbar_detail_list_event_pane_g6_ParamLimits

0x9adf,	// (0x0002dde9) cntbar_detail_list_event_pane_g6

0x9b21,	// (0x0002de2b) cntbar_detail_list_event_pane_t3_ParamLimits

0x9b21,	// (0x0002de2b) cntbar_detail_list_event_pane_t3

0x9b33,	// (0x0002de3d) popup_notif_wgt_window_ParamLimits

0x9b33,	// (0x0002de3d) popup_notif_wgt_window

0x9b48,	// (0x0002de52) popup_submenu_window_cp01_ParamLimits

0x9b48,	// (0x0002de52) popup_submenu_window_cp01

0x3793,	// (0x00027a9d) bg_popup_window_pane_cp10

0xeba0,	// (0x00032eaa) listscroll_notif_wgt_pane

0xebb1,	// (0x00032ebb) list_notif_wgt_window

0xebba,	// (0x00032ec4) scroll_pane_cp033

0x9b58,	// (0x0002de62) list_notif_wgt_row_pane_ParamLimits

0x9b58,	// (0x0002de62) list_notif_wgt_row_pane

0xebc3,	// (0x00032ecd) aid_size_list_notif_wgt_del

0xebd0,	// (0x00032eda) list_notif_wgt_row_pane_g1

0xebdc,	// (0x00032ee6) list_notif_wgt_row_pane_g2

0xebf0,	// (0x00032efa) list_notif_wgt_row_pane_g3

0x0002,

0xfdf3,	// (0x000340fd) list_notif_wgt_row_pane_g

0xebfd,	// (0x00032f07) list_notif_wgt_row_pane_t1

0xec13,	// (0x00032f1d) list_notif_wgt_row_pane_t2

0xec25,	// (0x00032f2f) list_notif_wgt_row_pane_t3

0x0002,

0xfdfa,	// (0x00034104) list_notif_wgt_row_pane_t

0xd3c9,	// (0x000316d3) list_recal_day_event_pane_g1

0xec37,	// (0x00032f41) list_recal_day_event_pane_t1

0x2767,	// (0x00026a71) bg_button_pane_cp045

0x9b68,	// (0x0002de72) cntbar_detail_btn_pane_t1

0x56a0,	// (0x000299aa) main_callh_pane_ParamLimits

0x56a0,	// (0x000299aa) main_callh_pane

0x2767,	// (0x00026a71) main_coverflow0_pane

0x2767,	// (0x00026a71) main_wgtman_pane

0x8bfb,	// (0x0002cf05) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8bfb,	// (0x0002cf05) main_fs_bigclock_unlock_btn_pane

0xe4f9,	// (0x00032803) bg_button_pane_cp16

0xe509,	// (0x00032813) cell_tport_appsw_pane_g3

0x9b76,	// (0x0002de80) cf0_flow_pane_ParamLimits

0x9b76,	// (0x0002de80) cf0_flow_pane

0xec46,	// (0x00032f50) listscroll_cf0_pane

0xec4f,	// (0x00032f59) main_cf0_pane_g1

0x9b8b,	// (0x0002de95) main_cf0_pane_t1_ParamLimits

0x9b8b,	// (0x0002de95) main_cf0_pane_t1

0x9ba0,	// (0x0002deaa) main_cf0_pane_t2_ParamLimits

0x9ba0,	// (0x0002deaa) main_cf0_pane_t2

0x0001,

0xfe06,	// (0x00034110) main_cf0_pane_t_ParamLimits

0xfe06,	// (0x00034110) main_cf0_pane_t

0xec61,	// (0x00032f6b) scroll_pane_cp11

0x9bb5,	// (0x0002debf) cf0_flow_pane_g1

0x9bbd,	// (0x0002dec7) cf0_flow_pane_g2

0x0001,

0xfe0b,	// (0x00034115) cf0_flow_pane_g

0x9bc5,	// (0x0002decf) cf0_flow_pane_t1

0x2767,	// (0x00026a71) main_call6_pane

0x2767,	// (0x00026a71) main_calllock_pane

0x26d4,	// (0x000269de) call6_btn_grp_pane_ParamLimits

0x26d4,	// (0x000269de) call6_btn_grp_pane

0x26ea,	// (0x000269f4) call6_pane_g1_ParamLimits

0x26ea,	// (0x000269f4) call6_pane_g1

0x26fd,	// (0x00026a07) popup_call6_1st_window_ParamLimits

0x26fd,	// (0x00026a07) popup_call6_1st_window

0x270c,	// (0x00026a16) popup_call6_2nd_window_ParamLimits

0x270c,	// (0x00026a16) popup_call6_2nd_window

0x271b,	// (0x00026a25) cell_call6_btn_pane_ParamLimits

0x271b,	// (0x00026a25) cell_call6_btn_pane

0x3793,	// (0x00027a9d) bg_popup_call2_in_pane_cp03

0xec6a,	// (0x00032f74) popup_call6_1st_window_g1

0xec72,	// (0x00032f7c) popup_call6_1st_window_g2

0xec7a,	// (0x00032f84) popup_call6_1st_window_g3

0x0002,

0xfe10,	// (0x0003411a) popup_call6_1st_window_g

0xec82,	// (0x00032f8c) popup_call6_1st_window_t1

0xec91,	// (0x00032f9b) popup_call6_1st_window_t2

0xec9f,	// (0x00032fa9) popup_call6_1st_window_t3

0x0002,

0xfe17,	// (0x00034121) popup_call6_1st_window_t

0x3793,	// (0x00027a9d) bg_popup_call2_in_pane_cp04

0xecad,	// (0x00032fb7) popup_call6_2nd_window_g1

0xecb5,	// (0x00032fbf) popup_call6_2nd_window_g2

0xecbd,	// (0x00032fc7) popup_call6_2nd_window_g3

0x0002,

0xfe1e,	// (0x00034128) popup_call6_2nd_window_g

0xecc5,	// (0x00032fcf) popup_call6_2nd_window_t1

0xacfa,	// (0x0002f004) bg_button_pane_cp15

0xecd4,	// (0x00032fde) cell_call6_btn_pane_g1

0xecdd,	// (0x00032fe7) cell_call6_btn_pane_t1

0x9bd3,	// (0x0002dedd) listscroll_wgtman_pane_ParamLimits

0x9bd3,	// (0x0002dedd) listscroll_wgtman_pane

0x9bf4,	// (0x0002defe) wgtman_btn_pane_ParamLimits

0x9bf4,	// (0x0002defe) wgtman_btn_pane

0x501f,	// (0x00029329) aid_scroll_copy1

0xecec,	// (0x00032ff6) list_wgtman_pane

0x9c34,	// (0x0002df3e) wgtman_btn_pane_g1_ParamLimits

0x9c34,	// (0x0002df3e) wgtman_btn_pane_g1

0x9c60,	// (0x0002df6a) wgtman_btn_pane_t1_ParamLimits

0x9c60,	// (0x0002df6a) wgtman_btn_pane_t1

0xecf6,	// (0x00033000) wgtman_btn_pane_t2_ParamLimits

0xecf6,	// (0x00033000) wgtman_btn_pane_t2

0x0001,

0xfe25,	// (0x0003412f) wgtman_btn_pane_t_ParamLimits

0xfe25,	// (0x0003412f) wgtman_btn_pane_t

0x9c9d,	// (0x0002dfa7) listrow_wgtman_pane_ParamLimits

0x9c9d,	// (0x0002dfa7) listrow_wgtman_pane

0x9caf,	// (0x0002dfb9) listrow_wgtman_pane_g1

0x9cbc,	// (0x0002dfc6) listrow_wgtman_pane_g2

0x0001,

0xfe2a,	// (0x00034134) listrow_wgtman_pane_g

0x9cd4,	// (0x0002dfde) listrow_wgtman_pane_t1

0x9cec,	// (0x0002dff6) listrow_wgtman_pane_t2

0x0001,

0xfe2f,	// (0x00034139) listrow_wgtman_pane_t

0x9d12,	// (0x0002e01c) wait_bar_pane_cp09

0xed0d,	// (0x00033017) main_calllock_btn_pane

0xed15,	// (0x0003301f) main_calllock_pane_g1

0x2767,	// (0x00026a71) bg_button_pane_cp17

0xed1e,	// (0x00033028) main_calllock_btn_pane_g1

0xed27,	// (0x00033031) main_calllock_btn_pane_t1

0x2767,	// (0x00026a71) main_dialer3_pane

0x2767,	// (0x00026a71) main_fmrd2_pane

0x398e,	// (0x00027c98) main_fs_bigclock_unlock_btn_pane_g1

0xed3e,	// (0x00033048) main_fs_bigclock_unlock_btn_pane_t1

0x9d24,	// (0x0002e02e) area_fmrd2_info_pane_ParamLimits

0x9d24,	// (0x0002e02e) area_fmrd2_info_pane

0x9d33,	// (0x0002e03d) area_fmrd2_visual_pane_ParamLimits

0x9d33,	// (0x0002e03d) area_fmrd2_visual_pane

0x9d41,	// (0x0002e04b) fmrd2_indi_pane_ParamLimits

0x9d41,	// (0x0002e04b) fmrd2_indi_pane

0x9d4e,	// (0x0002e058) area_fmrd2_visual_pane_g1

0x9d56,	// (0x0002e060) area_fmrd2_visual_pane_t1

0x9d64,	// (0x0002e06e) area_fmrd2_visual_pane_t2

0x9d72,	// (0x0002e07c) area_fmrd2_visual_pane_t3

0x0002,

0xfe39,	// (0x00034143) area_fmrd2_visual_pane_t

0x9d80,	// (0x0002e08a) area_fmrd2_info_pane_g1

0x9d88,	// (0x0002e092) area_fmrd2_info_pane_t1

0x9d96,	// (0x0002e0a0) area_fmrd2_info_pane_t2

0x9da4,	// (0x0002e0ae) area_fmrd2_info_pane_t3

0x9db2,	// (0x0002e0bc) area_fmrd2_info_pane_t4

0x0003,

0xfe40,	// (0x0003414a) area_fmrd2_info_pane_t

0x9dc0,	// (0x0002e0ca) fmrd2_indi_pane_t1

0x9dce,	// (0x0002e0d8) fmrd2_indi_pane_t2

0x9ddc,	// (0x0002e0e6) fmrd2_indi_pane_t3

0x0002,

0xfe49,	// (0x00034153) fmrd2_indi_pane_t

0xe08f,	// (0x00032399) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe08f,	// (0x00032399) list_single_fs_bigclock_indicator_pane_g5

0xe13d,	// (0x00032447) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe13d,	// (0x00032447) list_single_fs_bigclock_indicator_pane_t5

0x945f,	// (0x0002d769) aid_cell_bcale_month_pane_ParamLimits

0x945f,	// (0x0002d769) aid_cell_bcale_month_pane

0x947d,	// (0x0002d787) bcale_month_pane_ParamLimits

0x947d,	// (0x0002d787) bcale_month_pane

0x9495,	// (0x0002d79f) bcale_preview_pane_ParamLimits

0x9495,	// (0x0002d79f) bcale_preview_pane

0xeab8,	// (0x00032dc2) list_single_fs_bigclock_pane_t1_ParamLimits

0xead4,	// (0x00032dde) list_single_fs_bigclock_pane_t2_ParamLimits

0xead4,	// (0x00032dde) list_single_fs_bigclock_pane_t2

0x0001,

0xfdc4,	// (0x000340ce) list_single_fs_bigclock_pane_t_ParamLimits

0xfdc4,	// (0x000340ce) list_single_fs_bigclock_pane_t

0xed36,	// (0x00033040) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfe34,	// (0x0003413e) main_fs_bigclock_unlock_btn_pane_g

0x9dea,	// (0x0002e0f4) aid_dia3_key_size_ParamLimits

0x9dea,	// (0x0002e0f4) aid_dia3_key_size

0x9df9,	// (0x0002e103) aid_dia3_listrow_size_ParamLimits

0x9df9,	// (0x0002e103) aid_dia3_listrow_size

0x9e0c,	// (0x0002e116) dia3_keypad_fun_pane_ParamLimits

0x9e0c,	// (0x0002e116) dia3_keypad_fun_pane

0x9e20,	// (0x0002e12a) dia3_keypad_num_pane_ParamLimits

0x9e20,	// (0x0002e12a) dia3_keypad_num_pane

0x9e31,	// (0x0002e13b) dia3_listscroll_pane_ParamLimits

0x9e31,	// (0x0002e13b) dia3_listscroll_pane

0x9e42,	// (0x0002e14c) dia3_numentry_pane_ParamLimits

0x9e42,	// (0x0002e14c) dia3_numentry_pane

0xed4c,	// (0x00033056) dia3_list_pane

0xed55,	// (0x0003305f) scroll_pane_cp12

0x2767,	// (0x00026a71) bg_dia3_numentry_pane

0x9e56,	// (0x0002e160) dia3_numentry_pane_t1

0x9e65,	// (0x0002e16f) cell_dia3_key_num_pane

0x9e6d,	// (0x0002e177) cell_dia3_key0_fun_pane_ParamLimits

0x9e6d,	// (0x0002e177) cell_dia3_key0_fun_pane

0x9e81,	// (0x0002e18b) cell_dia3_key1_fun_pane_ParamLimits

0x9e81,	// (0x0002e18b) cell_dia3_key1_fun_pane

0x9e98,	// (0x0002e1a2) dia3_listrow_pane

0xdd9e,	// (0x000320a8) bg_dia3_numentry_pane_g1

0x2767,	// (0x00026a71) bg_button_pane_cp21

0xed5e,	// (0x00033068) cell_dia3_key_num_pane_t1

0xed6c,	// (0x00033076) cell_dia3_key_num_pane_t2

0xed7b,	// (0x00033085) cell_dia3_key_num_pane_t3

0xed8a,	// (0x00033094) cell_dia3_key_num_pane_t4

0x0003,

0xfe50,	// (0x0003415a) cell_dia3_key_num_pane_t

0x2767,	// (0x00026a71) bg_button_pane_cp19

0xed99,	// (0x000330a3) cell_dia3_key0_fun_pane_g1

0x2767,	// (0x00026a71) bg_button_pane_cp20

0x9eaa,	// (0x0002e1b4) cell_dia3_key1_fun_pane_g1

0x9eb2,	// (0x0002e1bc) area_left_week_number_pane

0x9ebe,	// (0x0002e1c8) area_top_day_name_pane

0x9ecf,	// (0x0002e1d9) frame_month_view_pane

0xeda1,	// (0x000330ab) grid_month_view_pane

0x9ee0,	// (0x0002e1ea) cell_top_day_name_pane_ParamLimits

0x9ee0,	// (0x0002e1ea) cell_top_day_name_pane

0x9f03,	// (0x0002e20d) cell_area_left_week_number_pane_ParamLimits

0x9f03,	// (0x0002e20d) cell_area_left_week_number_pane

0x9f17,	// (0x0002e221) cell_month_view_pane_ParamLimits

0x9f17,	// (0x0002e221) cell_month_view_pane

0xedaf,	// (0x000330b9) frm_month_g1

0x9f3c,	// (0x0002e246) frm_month_g2

0x9f4d,	// (0x0002e257) frm_month_g3

0x9f5e,	// (0x0002e268) frm_month_g4

0x9f6f,	// (0x0002e279) frm_month_g5

0x9f80,	// (0x0002e28a) frm_month_g6

0x9f91,	// (0x0002e29b) frm_month_g7

0xedbc,	// (0x000330c6) frm_month_g8

0x9fa2,	// (0x0002e2ac) frm_month_g9

0x9fb2,	// (0x0002e2bc) frm_month_g10

0x9fc2,	// (0x0002e2cc) frm_month_g11

0x9fd2,	// (0x0002e2dc) frm_month_g12

0x9fe2,	// (0x0002e2ec) frm_month_g13

0x9ff2,	// (0x0002e2fc) frm_month_g14

0xa002,	// (0x0002e30c) frm_month_g15

0xa014,	// (0x0002e31e) frm_month_g16

0x000f,

0xfe59,	// (0x00034163) frm_month_g

0xedc9,	// (0x000330d3) cell_top_day_name_pane_t1

0xa026,	// (0x0002e330) cell_area_left_week_number_pane_g1

0xa032,	// (0x0002e33c) cell_area_left_week_number_pane_t1

0x2f15,	// (0x0002721f) cell_month_view_pane_g1

0xa045,	// (0x0002e34f) cell_month_view_pane_t1

0x2767,	// (0x00026a71) main_fps_pane

0xe329,	// (0x00032633) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe329,	// (0x00032633) cmail_ddmenu_btn02_pane_cp1

0xe345,	// (0x0003264f) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe345,	// (0x0003264f) cmail_ddmenu_btn02_pane_cp2

0x97b5,	// (0x0002dabf) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x97b5,	// (0x0002dabf) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd77,	// (0x00034081) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd77,	// (0x00034081) cmail_ddmenu_btn02_pane_g

0x97d3,	// (0x0002dadd) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x97d3,	// (0x0002dadd) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd7c,	// (0x00034086) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd7c,	// (0x00034086) cmail_ddmenu_btn02_pane_t

0xa058,	// (0x0002e362) fps_text_pane_ParamLimits

0xa058,	// (0x0002e362) fps_text_pane

0xa06e,	// (0x0002e378) main_fps_pane_g1_ParamLimits

0xa06e,	// (0x0002e378) main_fps_pane_g1

0xa084,	// (0x0002e38e) wait_bar_pane_cp010_ParamLimits

0xa084,	// (0x0002e38e) wait_bar_pane_cp010

0xa095,	// (0x0002e39f) fps_text_pane_t1_ParamLimits

0xa095,	// (0x0002e39f) fps_text_pane_t1

0xcfbc,	// (0x000312c6) cam4_image_uncrop_pane_g1

0xcfc5,	// (0x000312cf) cam4_image_uncrop_pane_g2

0x749c,	// (0x0002b7a6) cam4_image_uncrop_pane_g3

0x74a5,	// (0x0002b7af) cam4_image_uncrop_pane_g4

0x0003,

0xf87e,	// (0x00033b88) cam4_image_uncrop_pane_g

0x9e98,	// (0x0002e1a2) dia3_listrow_pane_ParamLimits

0x2767,	// (0x00026a71) main_phob2_pane

0x92ae,	// (0x0002d5b8) cell_tport_appsw_pane_cp02_ParamLimits

0x92ae,	// (0x0002d5b8) cell_tport_appsw_pane_cp02

0x92be,	// (0x0002d5c8) cell_tport_appsw_pane_cp03_ParamLimits

0x92be,	// (0x0002d5c8) cell_tport_appsw_pane_cp03

0x2767,	// (0x00026a71) phob2_contact_card_pane

0x2767,	// (0x00026a71) phob2_listscroll_pane

0xeddc,	// (0x000330e6) phob2_list_pane

0xede4,	// (0x000330ee) scroll_pane_cp034

0xa0ad,	// (0x0002e3b7) phob2_cc_data_pane_ParamLimits

0xa0ad,	// (0x0002e3b7) phob2_cc_data_pane

0xa0ca,	// (0x0002e3d4) phob2_cc_listscroll_pane_ParamLimits

0xa0ca,	// (0x0002e3d4) phob2_cc_listscroll_pane

0x9c9d,	// (0x0002dfa7) list_double_large_graphic_phob2_pane_ParamLimits

0x9c9d,	// (0x0002dfa7) list_double_large_graphic_phob2_pane

0xa0e6,	// (0x0002e3f0) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xa0e6,	// (0x0002e3f0) list_double_large_graphic_phob2_pane_g1

0xa0f3,	// (0x0002e3fd) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xa0f3,	// (0x0002e3fd) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfe7a,	// (0x00034184) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe7a,	// (0x00034184) list_double_large_graphic_phob2_pane_g

0xa117,	// (0x0002e421) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xa117,	// (0x0002e421) list_double_large_graphic_phob2_pane_t1

0xa12c,	// (0x0002e436) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xa12c,	// (0x0002e436) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe83,	// (0x0003418d) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe83,	// (0x0003418d) list_double_large_graphic_phob2_pane_t

0x2767,	// (0x00026a71) list_highlight_pane_cp024

0xedec,	// (0x000330f6) phob2_cc_button_pane

0xa141,	// (0x0002e44b) phob2_cc_data_pane_g1_ParamLimits

0xa141,	// (0x0002e44b) phob2_cc_data_pane_g1

0xa158,	// (0x0002e462) phob2_cc_data_pane_g2_ParamLimits

0xa158,	// (0x0002e462) phob2_cc_data_pane_g2

0x0001,

0xfe88,	// (0x00034192) phob2_cc_data_pane_g_ParamLimits

0xfe88,	// (0x00034192) phob2_cc_data_pane_g

0xa16a,	// (0x0002e474) phob2_cc_data_pane_t1_ParamLimits

0xa16a,	// (0x0002e474) phob2_cc_data_pane_t1

0xa182,	// (0x0002e48c) phob2_cc_data_pane_t2_ParamLimits

0xa182,	// (0x0002e48c) phob2_cc_data_pane_t2

0xa19a,	// (0x0002e4a4) phob2_cc_data_pane_t3_ParamLimits

0xa19a,	// (0x0002e4a4) phob2_cc_data_pane_t3

0x0002,

0xfe8d,	// (0x00034197) phob2_cc_data_pane_t_ParamLimits

0xfe8d,	// (0x00034197) phob2_cc_data_pane_t

0xedf4,	// (0x000330fe) phob2_cc_list_pane_ParamLimits

0xedf4,	// (0x000330fe) phob2_cc_list_pane

0xdcbb,	// (0x00031fc5) scroll_pane_cp035_ParamLimits

0xdcbb,	// (0x00031fc5) scroll_pane_cp035

0x37fc,	// (0x00027b06) bg_button_pane_cp033

0xee00,	// (0x0003310a) phob2_cc_button_pane_g1

0xee0c,	// (0x00033116) phob2_cc_button_pane_t1

0xee21,	// (0x0003312b) phob2_cc_button_pane_t2

0x0001,

0xfe94,	// (0x0003419e) phob2_cc_button_pane_t

0xa1b2,	// (0x0002e4bc) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xa1b2,	// (0x0002e4bc) list_double_large_graphic_phob2_cc_pane

0xa1e0,	// (0x0002e4ea) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xa1e0,	// (0x0002e4ea) list_double_large_graphic_phob2_cc_pane_g1

0xa1ec,	// (0x0002e4f6) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xa1ec,	// (0x0002e4f6) list_double_large_graphic_phob2_cc_pane_g2

0xa1f8,	// (0x0002e502) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xa1f8,	// (0x0002e502) list_double_large_graphic_phob2_cc_pane_g3

0xa204,	// (0x0002e50e) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xa204,	// (0x0002e50e) list_double_large_graphic_phob2_cc_pane_g4

0xa210,	// (0x0002e51a) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xa210,	// (0x0002e51a) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe99,	// (0x000341a3) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe99,	// (0x000341a3) list_double_large_graphic_phob2_cc_pane_g

0xa21c,	// (0x0002e526) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xa21c,	// (0x0002e526) list_double_large_graphic_phob2_cc_pane_t1

0xa245,	// (0x0002e54f) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xa245,	// (0x0002e54f) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfea4,	// (0x000341ae) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfea4,	// (0x000341ae) list_double_large_graphic_phob2_cc_pane_t

0xee33,	// (0x0003313d) list_highlight_pane_cp025_ParamLimits

0xee33,	// (0x0003313d) list_highlight_pane_cp025

0x37fc,	// (0x00027b06) bg_button_pane_cp033_ParamLimits

0xee00,	// (0x0003310a) phob2_cc_button_pane_g1_ParamLimits

0xee0c,	// (0x00033116) phob2_cc_button_pane_t1_ParamLimits

0xee21,	// (0x0003312b) phob2_cc_button_pane_t2_ParamLimits

0xfe94,	// (0x0003419e) phob2_cc_button_pane_t_ParamLimits

0x27a4,	// (0x00026aae) popup_wgtman_window

0xddbe,	// (0x000320c8) scroll_pane_cp038

0x9c16,	// (0x0002df20) wgtman_btn_pane_cp_01_ParamLimits

0x9c16,	// (0x0002df20) wgtman_btn_pane_cp_01

0xee41,	// (0x0003314b) wgtman_content_pane

0xee4a,	// (0x00033154) wgtman_heading_pane

0x2767,	// (0x00026a71) bg_heading_pane_cp02

0xee53,	// (0x0003315d) wgtman_heading_pane_g1

0xee5b,	// (0x00033165) wgtman_heading_pane_t1

0xee69,	// (0x00033173) scroll_pane_cp036

0xee71,	// (0x0003317b) wgtman_list_pane

0xee79,	// (0x00033183) wgtman_list_pane_t1_ParamLimits

0xee79,	// (0x00033183) wgtman_list_pane_t1

0xcfaa,	// (0x000312b4) cam4_grid_pane

0x7c41,	// (0x0002bf4b) bg_button_pane_cp015_ParamLimits

0x7c52,	// (0x0002bf5c) bg_button_pane_cp016_ParamLimits

0x7c5e,	// (0x0002bf68) bg_button_pane_cp017_ParamLimits

0x7cb0,	// (0x0002bfba) popup_vitu2_query_window_g3_ParamLimits

0x7cb0,	// (0x0002bfba) popup_vitu2_query_window_g3

0x7d4d,	// (0x0002c057) popup_vitu2_query_window_t6_ParamLimits

0x7d4d,	// (0x0002c057) popup_vitu2_query_window_t6

0x7d78,	// (0x0002c082) popup_vitu2_query_window_t7_ParamLimits

0x7d78,	// (0x0002c082) popup_vitu2_query_window_t7

0xcfbc,	// (0x000312c6) cam4_grid_pane_g1

0xcfc5,	// (0x000312cf) cam4_grid_pane_g2

0xee90,	// (0x0003319a) cam4_grid_pane_g3

0xee99,	// (0x000331a3) cam4_grid_pane_g4

0x0003,

0xfea9,	// (0x000341b3) cam4_grid_pane_g

0x3ad4,	// (0x00027dde) aid_placing_vt_slider_lsc_ParamLimits

0x3d92,	// (0x0002809c) vidtel_button_pane_ParamLimits

0x3d92,	// (0x0002809c) vidtel_button_pane

0x2767,	// (0x00026a71) bg_button_pane_cp034

0xa26e,	// (0x0002e578) vidtel_button_pane_g1

0xa276,	// (0x0002e580) vidtel_button_pane_t1

0xd35e,	// (0x00031668) aid_size_vtel_slider_touch

0xdcbb,	// (0x00031fc5) scroll_pane_cp039

0xdded,	// (0x000320f7) ncim_query_button_pane_cp01_ParamLimits

0xde0c,	// (0x00032116) ncimui_query_pane_g1_ParamLimits

0x37fc,	// (0x00027b06) input_focus_pane_cp012_ParamLimits

0xde31,	// (0x0003213b) ncim_query_entry_pane_t1_ParamLimits

0xdcbb,	// (0x00031fc5) scroll_pane_cp039_ParamLimits

0x541b,	// (0x00029725) navi_pane_bcale_mc_g1

0x5423,	// (0x0002972d) navi_pane_bcale_mc_t1

0xe379,	// (0x00032683) main_sp_fs_email_pane_g1

0xe385,	// (0x0003268f) main_sp_fs_email_pane_g2

0x0001,

0xfc79,	// (0x00033f83) main_sp_fs_email_pane_g

0xe7ff,	// (0x00032b09) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe7ff,	// (0x00032b09) list_single_cale_mrui_row_pane_g3

0x97f3,	// (0x0002dafd) list_single_recal_day_pane_g5_event_pane

0xe968,	// (0x00032c72) list_single_recal_day_pane_g7

0xeea2,	// (0x000331ac) list_recal_day_event_pane_cp01

0xeeab,	// (0x000331b5) list_recal_vselct_arw_lo_pane_cp01

0xeeb3,	// (0x000331bd) list_recal_vselct_arw_up_pane_cp01

0xeebb,	// (0x000331c5) list_recal_vselct_pane_cp01

0xd3c9,	// (0x000316d3) list_recal_day_event_pane_cp01_g1

0xeec5,	// (0x000331cf) list_recal_day_event_pane_cp01_t1

0xe970,	// (0x00032c7a) list_single_recal_day_pane_t1_ParamLimits

0x9809,	// (0x0002db13) list_single_recal_day_pane_t2_ParamLimits

0xfd8c,	// (0x00034096) list_single_recal_day_pane_t_ParamLimits

0x2e70,	// (0x0002717a) bg_notes_pane_ParamLimits

0x302b,	// (0x00027335) list_notes_pane_ParamLimits

0x3039,	// (0x00027343) scroll_pane_cp06_ParamLimits

0x3063,	// (0x0002736d) main_notes_pane_ParamLimits

0x37fc,	// (0x00027b06) main_welc_pane

0xa2b3,	// (0x0002e5bd) main_welc_body_pane_ParamLimits

0xa2b3,	// (0x0002e5bd) main_welc_body_pane

0xa2cf,	// (0x0002e5d9) main_welc_opti_pane_ParamLimits

0xa2cf,	// (0x0002e5d9) main_welc_opti_pane

0xa343,	// (0x0002e64d) main_welc_pane_t1_ParamLimits

0xa343,	// (0x0002e64d) main_welc_pane_t1

0xa4f3,	// (0x0002e7fd) main_welc_body_row_pane_ParamLimits

0xa4f3,	// (0x0002e7fd) main_welc_body_row_pane

0x2f31,	// (0x0002723b) main_welc_opti_row_pane_ParamLimits

0x2f31,	// (0x0002723b) main_welc_opti_row_pane

0xeee3,	// (0x000331ed) main_welc_opti_row_pane_g1

0xa506,	// (0x0002e810) main_welc_opti_row_pane_t1

0xeeeb,	// (0x000331f5) main_welc_body_row_pane_t1

0xeba9,	// (0x00032eb3) popup_notif_wgt_heading_pane

0xebc3,	// (0x00032ecd) aid_size_list_notif_wgt_del_ParamLimits

0xebd0,	// (0x00032eda) list_notif_wgt_row_pane_g1_ParamLimits

0xebdc,	// (0x00032ee6) list_notif_wgt_row_pane_g2_ParamLimits

0xebf0,	// (0x00032efa) list_notif_wgt_row_pane_g3_ParamLimits

0xfdf3,	// (0x000340fd) list_notif_wgt_row_pane_g_ParamLimits

0xebfd,	// (0x00032f07) list_notif_wgt_row_pane_t1_ParamLimits

0xec13,	// (0x00032f1d) list_notif_wgt_row_pane_t2_ParamLimits

0xec25,	// (0x00032f2f) list_notif_wgt_row_pane_t3_ParamLimits

0xfdfa,	// (0x00034104) list_notif_wgt_row_pane_t_ParamLimits

0x9caf,	// (0x0002dfb9) listrow_wgtman_pane_g1_ParamLimits

0x9cbc,	// (0x0002dfc6) listrow_wgtman_pane_g2_ParamLimits

0xfe2a,	// (0x00034134) listrow_wgtman_pane_g_ParamLimits

0x9cd4,	// (0x0002dfde) listrow_wgtman_pane_t1_ParamLimits

0x9cec,	// (0x0002dff6) listrow_wgtman_pane_t2_ParamLimits

0xfe2f,	// (0x00034139) listrow_wgtman_pane_t_ParamLimits

0x9d12,	// (0x0002e01c) wait_bar_pane_cp09_ParamLimits

0x2767,	// (0x00026a71) bg_popup_heading_pane_cp02

0xeefa,	// (0x00033204) popup_notif_wgt_heading_pane_g1

0xef02,	// (0x0003320c) popup_notif_wgt_heading_pane_t1

0xbedc,	// (0x000301e6) main_vids_pane

0x2767,	// (0x00026a71) vids_listscroll_pane

0xa515,	// (0x0002e81f) scroll_pane_cp040

0x2767,	// (0x00026a71) vids_list_pane

0xef10,	// (0x0003321a) vids_list_double_pane_ParamLimits

0xef10,	// (0x0003321a) vids_list_double_pane

0xa520,	// (0x0002e82a) vids_list_double_pane_g1

0xa529,	// (0x0002e833) vids_list_double_pane_t1

0xa538,	// (0x0002e842) vids_list_double_pane_t2

0x0001,

0xfec8,	// (0x000341d2) vids_list_double_pane_t

0xacec,	// (0x0002eff6) main_ncimui_pane_ParamLimits

0x87a7,	// (0x0002cab1) main_ncimui_pane_g1_ParamLimits

0x87b3,	// (0x0002cabd) main_ncimui_pane_g2_ParamLimits

0x87b3,	// (0x0002cabd) main_ncimui_pane_g2

0x0001,

0xfb7a,	// (0x00033e84) main_ncimui_pane_g_ParamLimits

0xfb7a,	// (0x00033e84) main_ncimui_pane_g

0xa2e6,	// (0x0002e5f0) main_welc_pane_g1_ParamLimits

0xa2e6,	// (0x0002e5f0) main_welc_pane_g1

0xa2f9,	// (0x0002e603) main_welc_pane_g2_ParamLimits

0xa2f9,	// (0x0002e603) main_welc_pane_g2

0x0003,

0xfeb2,	// (0x000341bc) main_welc_pane_g_ParamLimits

0xfeb2,	// (0x000341bc) main_welc_pane_g

0x2e70,	// (0x0002717a) listscroll_mce_pane_ParamLimits

0x559b,	// (0x000298a5) wait_bar_pane_cp10

0xbed0,	// (0x000301da) main_cale_day_pane_ParamLimits

0xbed0,	// (0x000301da) main_cale_week_pane_ParamLimits

0x2e70,	// (0x0002717a) main_messa_pane_ParamLimits

0x6f92,	// (0x0002b29c) main_clock2_btn_pane_ParamLimits

0x6f92,	// (0x0002b29c) main_clock2_btn_pane

0xc7cf,	// (0x00030ad9) main_clock2_btn_pane_cp01_ParamLimits

0xc7cf,	// (0x00030ad9) main_clock2_btn_pane_cp01

0xe7ba,	// (0x00032ac4) list_cale_mrui_pane_ParamLimits

0xec59,	// (0x00032f63) main_cf0_pane_g2

0x0001,

0xfe01,	// (0x0003410b) main_cf0_pane_g

0x9eb2,	// (0x0002e1bc) area_left_week_number_pane_ParamLimits

0x9ebe,	// (0x0002e1c8) area_top_day_name_pane_ParamLimits

0x9ecf,	// (0x0002e1d9) frame_month_view_pane_ParamLimits

0xeda1,	// (0x000330ab) grid_month_view_pane_ParamLimits

0xedaf,	// (0x000330b9) frm_month_g1_ParamLimits

0x9f3c,	// (0x0002e246) frm_month_g2_ParamLimits

0x9f4d,	// (0x0002e257) frm_month_g3_ParamLimits

0x9f5e,	// (0x0002e268) frm_month_g4_ParamLimits

0x9f6f,	// (0x0002e279) frm_month_g5_ParamLimits

0x9f80,	// (0x0002e28a) frm_month_g6_ParamLimits

0x9f91,	// (0x0002e29b) frm_month_g7_ParamLimits

0xedbc,	// (0x000330c6) frm_month_g8_ParamLimits

0x9fa2,	// (0x0002e2ac) frm_month_g9_ParamLimits

0x9fb2,	// (0x0002e2bc) frm_month_g10_ParamLimits

0x9fc2,	// (0x0002e2cc) frm_month_g11_ParamLimits

0x9fd2,	// (0x0002e2dc) frm_month_g12_ParamLimits

0x9fe2,	// (0x0002e2ec) frm_month_g13_ParamLimits

0x9ff2,	// (0x0002e2fc) frm_month_g14_ParamLimits

0xa002,	// (0x0002e30c) frm_month_g15_ParamLimits

0xa014,	// (0x0002e31e) frm_month_g16_ParamLimits

0xfe59,	// (0x00034163) frm_month_g_ParamLimits

0xedc9,	// (0x000330d3) cell_top_day_name_pane_t1_ParamLimits

0xa026,	// (0x0002e330) cell_area_left_week_number_pane_g1_ParamLimits

0xa032,	// (0x0002e33c) cell_area_left_week_number_pane_t1_ParamLimits

0x2f15,	// (0x0002721f) cell_month_view_pane_g1_ParamLimits

0xa045,	// (0x0002e34f) cell_month_view_pane_t1_ParamLimits

0x2e68,	// (0x00027172) main_clock2_btn_pane_g1

0xef20,	// (0x0003322a) main_clock2_btn_pane_t1

0x37fc,	// (0x00027b06) listscroll_cmail_pane_ParamLimits

0xe379,	// (0x00032683) main_sp_fs_email_pane_g1_ParamLimits

0xe385,	// (0x0003268f) main_sp_fs_email_pane_g2_ParamLimits

0xfc79,	// (0x00033f83) main_sp_fs_email_pane_g_ParamLimits

0xe8e4,	// (0x00032bee) list_recal_day_pane_ParamLimits

0xe8f5,	// (0x00032bff) mian_recal_day_pane_t1

0x917a,	// (0x0002d484) list_single_dyc_row_text_pane_t4_ParamLimits

0x917a,	// (0x0002d484) list_single_dyc_row_text_pane_t4

0x91b1,	// (0x0002d4bb) list_single_dyc_row_text_pane_t5_ParamLimits

0x91b1,	// (0x0002d4bb) list_single_dyc_row_text_pane_t5

0xe40d,	// (0x00032717) list_single_dyc_row_text_pane_t6_ParamLimits

0xe40d,	// (0x00032717) list_single_dyc_row_text_pane_t6

0x4bf2,	// (0x00028efc) aid_mgn_list_cale_time_pane

0xacec,	// (0x0002eff6) main_gallery2_pane_ParamLimits

0xc7e3,	// (0x00030aed) main_clock2_pane_cp01_t1

0xc7f1,	// (0x00030afb) main_clock2_pane_cp01_t3

0x0001,

0xf750,	// (0x00033a5a) main_clock2_pane_cp01_t

0x34a5,	// (0x000277af) cale_week_scroll_pane_g16_ParamLimits

0x34a5,	// (0x000277af) cale_week_scroll_pane_g16

0x3793,	// (0x00027a9d) vorec_slider_pane

0xa276,	// (0x0002e580) vidtel_button_pane_t1_ParamLimits

0x98ae,	// (0x0002dbb8) main_fs_bigclock_clock_pane_g1_ParamLimits

0x98c0,	// (0x0002dbca) main_fs_bigclock_clock_pane_g2_ParamLimits

0x98d1,	// (0x0002dbdb) main_fs_bigclock_clock_pane_g3_ParamLimits

0x98d1,	// (0x0002dbdb) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfdaf,	// (0x000340b9) main_fs_bigclock_clock_pane_g_ParamLimits

0x98e4,	// (0x0002dbee) main_fs_bigclock_clock_pane_t1_ParamLimits

0x98ff,	// (0x0002dc09) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfdb8,	// (0x000340c2) main_fs_bigclock_clock_pane_t_ParamLimits

0x68b4,	// (0x0002abbe) main_mup3_lyrics_pane_ParamLimits

0x68b4,	// (0x0002abbe) main_mup3_lyrics_pane

0xa546,	// (0x0002e850) main_mup3_lyrics_pane_t1_ParamLimits

0xa546,	// (0x0002e850) main_mup3_lyrics_pane_t1

0xcbf3,	// (0x00030efd) aid_main_mp4_pane_t1_area

0xcbfd,	// (0x00030f07) aid_main_mp4_pane_t2_area

0xcca7,	// (0x00030fb1) main_mp4_pane_g7_ParamLimits

0xcca7,	// (0x00030fb1) main_mp4_pane_g7

0xccb3,	// (0x00030fbd) main_mp4_pane_g8_ParamLimits

0xccb3,	// (0x00030fbd) main_mp4_pane_g8

0x7468,	// (0x0002b772) aid_call6_pane_g1_size

0xa1cc,	// (0x0002e4d6) list_double_large_graphic_phob2_other_pane_ParamLimits

0xa1cc,	// (0x0002e4d6) list_double_large_graphic_phob2_other_pane

0x51a1,	// (0x000294ab) list_double_large_graphic_phob2_other_pane_g1

0x2767,	// (0x00026a71) list_highlight_pane_cp026

0x37fc,	// (0x00027b06) main_welc_pane_ParamLimits

0x8f85,	// (0x0002d28f) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x8f85,	// (0x0002d28f) main_sp_fs_ctrlbar_pane_g3

0x8f9d,	// (0x0002d2a7) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x8f9d,	// (0x0002d2a7) main_sp_fs_ctrlbar_pane_g4

0x8fdf,	// (0x0002d2e9) toolbar2_fixed_button_pane_cp01

0x8fea,	// (0x0002d2f4) toolbar2_fixed_button_pane_cp02

0x8ff5,	// (0x0002d2ff) toolbar2_fixed_button_pane_cp03

0xa29f,	// (0x0002e5a9) list_welc_entry_pane_ParamLimits

0xa29f,	// (0x0002e5a9) list_welc_entry_pane

0xa30c,	// (0x0002e616) main_welc_pane_g3_ParamLimits

0xa30c,	// (0x0002e616) main_welc_pane_g3

0xa35d,	// (0x0002e667) main_welc_pane_t2_ParamLimits

0xa35d,	// (0x0002e667) main_welc_pane_t2

0xa374,	// (0x0002e67e) main_welc_pane_t3_ParamLimits

0xa374,	// (0x0002e67e) main_welc_pane_t3

0x0005,

0xfebb,	// (0x000341c5) main_welc_pane_t_ParamLimits

0xfebb,	// (0x000341c5) main_welc_pane_t

0xa484,	// (0x0002e78e) welc_button_pane_ParamLimits

0xa484,	// (0x0002e78e) welc_button_pane

0xa4e2,	// (0x0002e7ec) welc_service_logo_pane_ParamLimits

0xa4e2,	// (0x0002e7ec) welc_service_logo_pane

0xa565,	// (0x0002e86f) list_single_welc_entry_pane_ParamLimits

0xa565,	// (0x0002e86f) list_single_welc_entry_pane

0xa576,	// (0x0002e880) list_single_welc_entry_pane_g1

0xa57e,	// (0x0002e888) list_single_welc_entry_pane_t1

0xa58c,	// (0x0002e896) list_single_welc_entry_pane_t2

0x0001,

0xfecd,	// (0x000341d7) list_single_welc_entry_pane_t

0x2767,	// (0x00026a71) bg_button_pane_cp035

0xa59a,	// (0x0002e8a4) welc_button_pane_t1

0xef2e,	// (0x00033238) welc_service_logo_pane_g1

0xef37,	// (0x00033241) welc_service_logo_pane_g2

0x0001,

0xfed2,	// (0x000341dc) welc_service_logo_pane_g

0xacfa,	// (0x0002f004) main_int_radio_pane

0x3133,	// (0x0002743d) list_single_fs_dyc_pane_g1

0xa0ff,	// (0x0002e409) list_double_large_graphic_phob2_pane_g3_ParamLimits

0xa0ff,	// (0x0002e409) list_double_large_graphic_phob2_pane_g3

0xa10b,	// (0x0002e415) list_double_large_graphic_phob2_pane_g4_ParamLimits

0xa10b,	// (0x0002e415) list_double_large_graphic_phob2_pane_g4

0xa5a8,	// (0x0002e8b2) main_int_radio1_pane_ParamLimits

0xa5a8,	// (0x0002e8b2) main_int_radio1_pane

0xef40,	// (0x0003324a) find_pane_cp02

0xa5c5,	// (0x0002e8cf) input_focus_pane_cp12_ParamLimits

0xa5c5,	// (0x0002e8cf) input_focus_pane_cp12

0xa5d5,	// (0x0002e8df) input_focus_pane_cp13_ParamLimits

0xa5d5,	// (0x0002e8df) input_focus_pane_cp13

0xa5e9,	// (0x0002e8f3) input_focus_pane_cp14_ParamLimits

0xa5e9,	// (0x0002e8f3) input_focus_pane_cp14

0xef49,	// (0x00033253) int_radio1_listscroll_pane

0xa5fd,	// (0x0002e907) main_int_radio1_pane_g1_ParamLimits

0xa5fd,	// (0x0002e907) main_int_radio1_pane_g1

0xa611,	// (0x0002e91b) main_int_radio1_pane_t1_ParamLimits

0xa611,	// (0x0002e91b) main_int_radio1_pane_t1

0xa628,	// (0x0002e932) main_int_radio1_pane_t2_ParamLimits

0xa628,	// (0x0002e932) main_int_radio1_pane_t2

0xa63f,	// (0x0002e949) main_int_radio1_pane_t3_ParamLimits

0xa63f,	// (0x0002e949) main_int_radio1_pane_t3

0xa656,	// (0x0002e960) main_int_radio1_pane_t4_ParamLimits

0xa656,	// (0x0002e960) main_int_radio1_pane_t4

0xef53,	// (0x0003325d) main_int_radio1_pane_t5_ParamLimits

0xef53,	// (0x0003325d) main_int_radio1_pane_t5

0xa668,	// (0x0002e972) main_int_radio1_pane_t6_ParamLimits

0xa668,	// (0x0002e972) main_int_radio1_pane_t6

0xa67d,	// (0x0002e987) main_int_radio1_pane_t7_ParamLimits

0xa67d,	// (0x0002e987) main_int_radio1_pane_t7

0xa692,	// (0x0002e99c) main_int_radio1_pane_t8_ParamLimits

0xa692,	// (0x0002e99c) main_int_radio1_pane_t8

0xa6af,	// (0x0002e9b9) main_int_radio1_pane_t9_ParamLimits

0xa6af,	// (0x0002e9b9) main_int_radio1_pane_t9

0xa6c1,	// (0x0002e9cb) main_int_radio1_pane_t10_ParamLimits

0xa6c1,	// (0x0002e9cb) main_int_radio1_pane_t10

0xa6e5,	// (0x0002e9ef) main_int_radio1_pane_t11_ParamLimits

0xa6e5,	// (0x0002e9ef) main_int_radio1_pane_t11

0xa709,	// (0x0002ea13) main_int_radio1_pane_t12_ParamLimits

0xa709,	// (0x0002ea13) main_int_radio1_pane_t12

0x000b,

0xfed7,	// (0x000341e1) main_int_radio1_pane_t_ParamLimits

0xfed7,	// (0x000341e1) main_int_radio1_pane_t

0xef65,	// (0x0003326f) int_radio_list_pane

0xede4,	// (0x000330ee) scroll_pane_cp037

0xef6d,	// (0x00033277) list_double_large_graphic_int_radio_pane_ParamLimits

0xef6d,	// (0x00033277) list_double_large_graphic_int_radio_pane

0xef7e,	// (0x00033288) list_double_large_graphic_int_radio_pane_g1

0xef87,	// (0x00033291) list_double_large_graphic_int_radio_pane_t1

0xef95,	// (0x0003329f) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfef0,	// (0x000341fa) list_double_large_graphic_int_radio_pane_t

0x2767,	// (0x00026a71) list_highlight_pane_cp027

0xeed3,	// (0x000331dd) main_button_pane_4

0xa31f,	// (0x0002e629) main_welc_pane_g4_ParamLimits

0xa31f,	// (0x0002e629) main_welc_pane_g4

0xa38b,	// (0x0002e695) main_welc_pane_t4_ParamLimits

0xa38b,	// (0x0002e695) main_welc_pane_t4

0xa3a2,	// (0x0002e6ac) main_welc_pane_t5_ParamLimits

0xa3a2,	// (0x0002e6ac) main_welc_pane_t5

0xa3dd,	// (0x0002e6e7) main_welc_pane_t6_ParamLimits

0xa3dd,	// (0x0002e6e7) main_welc_pane_t6

0xa497,	// (0x0002e7a1) welc_button_pane_2_ParamLimits

0xa497,	// (0x0002e7a1) welc_button_pane_2

0xa4ab,	// (0x0002e7b5) welc_button_pane_3_ParamLimits

0xa4ab,	// (0x0002e7b5) welc_button_pane_3

0xeedb,	// (0x000331e5) welc_button_pane_4

0xa4c2,	// (0x0002e7cc) welc_button_pane_5_ParamLimits

0xa4c2,	// (0x0002e7cc) welc_button_pane_5

0x1477,	// (0x00025781) main_popup_welc_pane

0xefb2,	// (0x000332bc) main_welc_sk_g3

0xefbc,	// (0x000332c6) main_welc_sk_g4

0xefc6,	// (0x000332d0) main_welc_sk_t3

0xefd4,	// (0x000332de) main_welc_sk_t4

0xefe2,	// (0x000332ec) popup_welc_pane_t4

0xeff0,	// (0x000332fa) popup_welc_pane_t5

0xeffe,	// (0x00033308) popup_welc_pane_t6

0xacfa,	// (0x0002f004) main_acti_pane

0x2767,	// (0x00026a71) main_sso_pane

0xa71b,	// (0x0002ea25) sso_body_pane_ParamLimits

0xa71b,	// (0x0002ea25) sso_body_pane

0xa72f,	// (0x0002ea39) sso_logo_pane_ParamLimits

0xa72f,	// (0x0002ea39) sso_logo_pane

0xa757,	// (0x0002ea61) sso_sk_pane_ParamLimits

0xa757,	// (0x0002ea61) sso_sk_pane

0x398e,	// (0x00027c98) main_sso_logo_pane_g1

0xa769,	// (0x0002ea73) sso_sk_pane_t1_ParamLimits

0xa769,	// (0x0002ea73) sso_sk_pane_t1

0xa782,	// (0x0002ea8c) sso_sk_pane_t2_ParamLimits

0xa782,	// (0x0002ea8c) sso_sk_pane_t2

0x0001,

0xfef5,	// (0x000341ff) sso_sk_pane_t_ParamLimits

0xfef5,	// (0x000341ff) sso_sk_pane_t

0xf036,	// (0x00033340) aid_sso_gap

0xf03f,	// (0x00033349) aid_sso_txt1

0xf047,	// (0x00033351) aid_sso_txt2

0xf04f,	// (0x00033359) aid_sso_txt3

0x0002,

0xfefa,	// (0x00034204) aid_sso_txt

0xf057,	// (0x00033361) aid_sso_widget

0xa7e2,	// (0x0002eaec) sso_btn_pane_ParamLimits

0xa7e2,	// (0x0002eaec) sso_btn_pane

0xa854,	// (0x0002eb5e) sso_option_pane_ParamLimits

0xa854,	// (0x0002eb5e) sso_option_pane

0xa8b2,	// (0x0002ebbc) sso_query_pane_ParamLimits

0xa8b2,	// (0x0002ebbc) sso_query_pane

0xa8f2,	// (0x0002ebfc) sso_query_pane_cp01_ParamLimits

0xa8f2,	// (0x0002ebfc) sso_query_pane_cp01

0xa934,	// (0x0002ec3e) sso_t_hdr_pane_ParamLimits

0xa934,	// (0x0002ec3e) sso_t_hdr_pane

0xa958,	// (0x0002ec62) sso_t_nml_pane_ParamLimits

0xa958,	// (0x0002ec62) sso_t_nml_pane

0xf04f,	// (0x00033359) sso_t_sub_pane

0xa73c,	// (0x0002ea46) sso_popup_window_ParamLimits

0xa73c,	// (0x0002ea46) sso_popup_window

0xa798,	// (0x0002eaa2) sso_apps_pane_ParamLimits

0xa798,	// (0x0002eaa2) sso_apps_pane

0xa7be,	// (0x0002eac8) sso_body_pane_g1

0xa7c6,	// (0x0002ead0) sso_body_pane_t1

0xa7d4,	// (0x0002eade) sso_body_pane_t2

0x0001,

0xff01,	// (0x0003420b) sso_body_pane_t

0xa824,	// (0x0002eb2e) sso_btn_pane_cp01_ParamLimits

0xa824,	// (0x0002eb2e) sso_btn_pane_cp01

0xa88c,	// (0x0002eb96) sso_prog_pane_ParamLimits

0xa88c,	// (0x0002eb96) sso_prog_pane

0xa9a2,	// (0x0002ecac) sso_t_hdr_pane_t1_ParamLimits

0xa9a2,	// (0x0002ecac) sso_t_hdr_pane_t1

0x0070,	// (0x0002437a) input_focus_pane_cp10_ParamLimits

0x0070,	// (0x0002437a) input_focus_pane_cp10

0x0088,	// (0x00024392) sso_query_pane_t1_ParamLimits

0x0088,	// (0x00024392) sso_query_pane_t1

0x009b,	// (0x000243a5) sso_query_pane_t2_ParamLimits

0x009b,	// (0x000243a5) sso_query_pane_t2

0x00b6,	// (0x000243c0) sso_query_pane_t3_ParamLimits

0x00b6,	// (0x000243c0) sso_query_pane_t3

0x00e0,	// (0x000243ea) sso_query_pane_t4_ParamLimits

0x00e0,	// (0x000243ea) sso_query_pane_t4

0x0003,

0xff06,	// (0x00034210) sso_query_pane_t_ParamLimits

0xff06,	// (0x00034210) sso_query_pane_t

0x2767,	// (0x00026a71) bg_button_pane_cp22

0xefa3,	// (0x000332ad) sso_btn_pane_t1

0xa9b5,	// (0x0002ecbf) sso_t_nml_pane_t1_ParamLimits

0xa9b5,	// (0x0002ecbf) sso_t_nml_pane_t1

0x0121,	// (0x0002442b) sso_option_row_pane_ParamLimits

0x0121,	// (0x0002442b) sso_option_row_pane

0x0134,	// (0x0002443e) sso_t_sub_pane_t1_ParamLimits

0x0134,	// (0x0002443e) sso_t_sub_pane_t1

0x37fc,	// (0x00027b06) bg_popup_window_pane_cp11_ParamLimits

0x37fc,	// (0x00027b06) bg_popup_window_pane_cp11

0x0147,	// (0x00024451) popup_sk_window_cp01_ParamLimits

0x0147,	// (0x00024451) popup_sk_window_cp01

0x0154,	// (0x0002445e) sso_popup_body_pane_ParamLimits

0x0154,	// (0x0002445e) sso_popup_body_pane

0x0161,	// (0x0002446b) scroll_pane_cp21_ParamLimits

0x0161,	// (0x0002446b) scroll_pane_cp21

0x016e,	// (0x00024478) sso_popup_body_t_pane_ParamLimits

0x016e,	// (0x00024478) sso_popup_body_t_pane

0x017b,	// (0x00024485) sso_popup_body_t_hdr_pane_ParamLimits

0x017b,	// (0x00024485) sso_popup_body_t_hdr_pane

0x0187,	// (0x00024491) sso_popup_body_t_nml_pane_ParamLimits

0x0187,	// (0x00024491) sso_popup_body_t_nml_pane

0x01a0,	// (0x000244aa) sso_popup_body_t_sub_pane_ParamLimits

0x01a0,	// (0x000244aa) sso_popup_body_t_sub_pane

0x01bf,	// (0x000244c9) sso_popup_body_t_hdr_pane_t1

0xa9d0,	// (0x0002ecda) sso_popup_body_t_nml_pane_t1_ParamLimits

0xa9d0,	// (0x0002ecda) sso_popup_body_t_nml_pane_t1

0x0209,	// (0x00024513) sso_popup_body_t_sub_pane_t1_ParamLimits

0x0209,	// (0x00024513) sso_popup_body_t_sub_pane_t1

0x398e,	// (0x00027c98) sso_prog_pane_g1

0xaa07,	// (0x0002ed11) sso_apps_pane_comp1_ParamLimits

0xaa07,	// (0x0002ed11) sso_apps_pane_comp1

0x0240,	// (0x0002454a) sso_apps_pane_comp1_g1

0x0248,	// (0x00024552) sso_apps_pane_comp1_t1

0x0264,	// (0x0002456e) sso_option_row_pane_g1

0x026c,	// (0x00024576) sso_option_row_pane_t1

0xa28c,	// (0x0002e596) bg_welc_area_ParamLimits

0xa28c,	// (0x0002e596) bg_welc_area

0xa41b,	// (0x0002e725) sso_t_hdr_pane_a_t1_ParamLimits

0xa41b,	// (0x0002e725) sso_t_hdr_pane_a_t1

0xa434,	// (0x0002e73e) sso_t_nml_pane_a_t1_ParamLimits

0xa434,	// (0x0002e73e) sso_t_nml_pane_a_t1

0xa459,	// (0x0002e763) sso_t_sub_pane_a_t1_ParamLimits

0xa459,	// (0x0002e763) sso_t_sub_pane_a_t1

0xefa3,	// (0x000332ad) sso_btn_pane_t1_copy1

0x2767,	// (0x00026a71) welc_button_pane_2_comp1

0xf00c,	// (0x00033316) sso_t_hdr_pane_p_t1

0xf01a,	// (0x00033324) sso_t_nml_pane_p_t1

0xf028,	// (0x00033332) sso_t_sub_pane_p_t1

0xe52f,	// (0x00032839) list_cmail_pane_ParamLimits

0xa4d2,	// (0x0002e7dc) welc_button_pane_cp01_ParamLimits

0xa4d2,	// (0x0002e7dc) welc_button_pane_cp01

0x2767,	// (0x00026a71) main_att_pane

0x0256,	// (0x00024560) input_focus_pane_cp10_t1

0x026c,	// (0x00024576) sso_option_row_pane_t1_ParamLimits

0xaa1a,	// (0x0002ed24) main_att_body_pane_ParamLimits

0xaa1a,	// (0x0002ed24) main_att_body_pane

0xaa30,	// (0x0002ed3a) att_btn_pane_ParamLimits

0xaa30,	// (0x0002ed3a) att_btn_pane

0xaa4d,	// (0x0002ed57) att_btn_pane_cp01_ParamLimits

0xaa4d,	// (0x0002ed57) att_btn_pane_cp01

0xaa69,	// (0x0002ed73) att_li_srv_pane_ParamLimits

0xaa69,	// (0x0002ed73) att_li_srv_pane

0xaa7f,	// (0x0002ed89) att_opt_pane_ParamLimits

0xaa7f,	// (0x0002ed89) att_opt_pane

0xaac5,	// (0x0002edcf) att_query_pane_ParamLimits

0xaac5,	// (0x0002edcf) att_query_pane

0xaaf9,	// (0x0002ee03) att_query_pane_cp01_ParamLimits

0xaaf9,	// (0x0002ee03) att_query_pane_cp01

0xab33,	// (0x0002ee3d) att_t_hdr_pane_ParamLimits

0xab33,	// (0x0002ee3d) att_t_hdr_pane

0xab77,	// (0x0002ee81) att_t_nml_pane_ParamLimits

0xab77,	// (0x0002ee81) att_t_nml_pane

0xaba8,	// (0x0002eeb2) att_t_nml_pane_cp01_ParamLimits

0xaba8,	// (0x0002eeb2) att_t_nml_pane_cp01

0xabce,	// (0x0002eed8) att_t_nmlb_pane_ParamLimits

0xabce,	// (0x0002eed8) att_t_nmlb_pane

0xabe7,	// (0x0002eef1) att_term_pane_ParamLimits

0xabe7,	// (0x0002eef1) att_term_pane

0xac2b,	// (0x0002ef35) main_att_body_pane_g1_ParamLimits

0xac2b,	// (0x0002ef35) main_att_body_pane_g1

0x0057,	// (0x00024361) att_t_hdr_pane_t1_ParamLimits

0x0057,	// (0x00024361) att_t_hdr_pane_t1

0x04a3,	// (0x000247ad) att_t_nml_pane_t1_ParamLimits

0x04a3,	// (0x000247ad) att_t_nml_pane_t1

0x04c8,	// (0x000247d2) att_btn_pane_t1

0x2767,	// (0x00026a71) bg_button_pane_cp23

0xac6f,	// (0x0002ef79) att_li_srv_row_pane_ParamLimits

0xac6f,	// (0x0002ef79) att_li_srv_row_pane

0x04e6,	// (0x000247f0) att_t_nmlb_pane_t1_ParamLimits

0x04e6,	// (0x000247f0) att_t_nmlb_pane_t1

0x04ff,	// (0x00024809) att_query_pane_t1

0x050e,	// (0x00024818) att_query_pane_t2

0x051d,	// (0x00024827) att_query_pane_t3

0x0002,

0xff0f,	// (0x00034219) att_query_pane_t

0x052c,	// (0x00024836) input_focus_pane_cp11

0x0535,	// (0x0002483f) att_term_pane_t1_ParamLimits

0x0535,	// (0x0002483f) att_term_pane_t1

0x2767,	// (0x00026a71) att_opt_row_pane

0x0552,	// (0x0002485c) att_opt_row_pane_g1

0x055a,	// (0x00024864) att_opt_row_pane_t1_ParamLimits

0x055a,	// (0x00024864) att_opt_row_pane_t1

0xac7f,	// (0x0002ef89) att_li_srv_row_pane_g1

0xac87,	// (0x0002ef91) att_li_srv_row_pane_t1

0xac95,	// (0x0002ef9f) att_li_srv_row_pane_t2

0x0001,

0xff16,	// (0x00034220) att_li_srv_row_pane_t
};


const AknLayoutScalable_Apps::SCdlImpl KCdlImpl = 
	{
	&WindowLineVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
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
	&TextLineVCR,
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
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineCRV,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineCRV,
	&WindowLineVCR,
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
	&WindowLineRVC,
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
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineCRV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&Limits,
	&WindowTableLVCR,
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
	&WindowLineCRV,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
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
	&ParameterLimitsV,
	&WindowLineCRV,
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
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineCRV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVRC,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&WindowLineRVC,
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
	&Limits,
	&WindowTableLVCR,
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
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&Limits,
	&WindowTableLVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineVRC,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
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
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineRVC,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
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
	&Limits,
	&WindowTableLVCR,
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
	&ParameterLimitsV,
	&WindowLineRVC,
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
	&TextLineVCR,
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
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineCRV,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&WindowLineRVC,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
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
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&TextLineVCR,
	&WindowLineVCR,
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
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&Limits,
	&WindowTableLVCR,
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
	&ParameterLimitsV,
	&TextLineVCR,
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
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&WindowLineRVC,
	&WindowLineVCR,
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
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&Limits,
	&TextLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
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
	&WindowTableLVCR,
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
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
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
	&TextLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineRVC,
	&ParameterLimitsV,
	&TextLineRVC,
	&ParameterLimitsV,
	&TextLineRVC,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineCVR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
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
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
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
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&Limits,
	&WindowTableLVCR,
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
	&ParameterLimitsV,
	&TextLineVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&WindowLineVCR,
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
	&WindowLineRVC,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&TextLineVCR,
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
	&WindowLineVCR,
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
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&WindowLineCRV,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
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
	&ParameterLimitsTableLV,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineRVC,
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
	&Limits,
	&WindowTableLVCR,
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
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
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
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsTableLV,
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
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineCRV,
	&ParameterLimitsV,
	&WindowLineVRC,
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
	&TextLineVCR,
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
	&WindowLineVRC,
	&WindowLineVCR,
	&TextLineVCR,
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
	&WindowLineRVC,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineCRV,
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
	&WindowLineVCR,
	&TextLineVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineCRV,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVRC,
	&ParameterLimitsV,
	&TextLineVRC,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVRC,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
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
	&TextLineVCR,
	&ParameterLimitsV,
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
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
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
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&WindowLineVCR,
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
	&Limits,
	&WindowTableLVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&TextLineVCR,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
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
	&TextLineVCR,
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
	&Limits,
	&WindowTableLVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
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
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
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
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
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
	&ParameterLimitsTableLV,
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
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsTableLV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
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
	&TextLineVCR,
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
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&Limits,
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
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
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
	&WindowLineVCR,
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
	&WindowLineVCR,
	&TextLineVCR,
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
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&WindowLineVCR,
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
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
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
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
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
	&WindowLineVCR,
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
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
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
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&TextLineRVC,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
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
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVRC,
	&WindowLineVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVRC,
	&ParameterLimitsV,
	&WindowLineRCV,
	&ParameterLimitsV,
	&WindowLineRCV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineRCV,
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
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
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
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
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
	&Limits,
	&WindowTableLVCR,
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
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&Limits,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
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
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&ParameterLimitsV,
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
	&WindowLineVCR,
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
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
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
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
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
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&TextLineVCR,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
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
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
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
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&TextLineVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&TextLineVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
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
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
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
	&TextLineVCR,
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
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
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
	&TextLineVCR,
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
	&TextLineVCR,
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
	&ParameterLimitsV,
	&TextLineVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
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
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
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
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
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
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
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
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
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
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	};

} // end of namespace AknLayoutScalable_Abrw_pql_apps_qvga_lsc_Normal
