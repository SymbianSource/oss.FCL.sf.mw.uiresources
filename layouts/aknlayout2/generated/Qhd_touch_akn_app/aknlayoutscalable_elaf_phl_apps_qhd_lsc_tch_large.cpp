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

#include "aknlayoutscalable_elaf_phl_apps_qhd_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x00074231 };

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
0x15cb,	// (0x000757fc) Screen

0x15d7,	// (0x00075808) application_window

0x1613,	// (0x00075844) area_bottom_pane_ParamLimits

0x1613,	// (0x00075844) area_bottom_pane

0x164c,	// (0x0007587d) area_top_pane_ParamLimits

0x164c,	// (0x0007587d) area_top_pane

0xa9d2,	// (0x0007ec03) call_video_uplink_pane_ParamLimits

0xa9d2,	// (0x0007ec03) call_video_uplink_pane

0x16c1,	// (0x000758f2) main_pane_ParamLimits

0x16c1,	// (0x000758f2) main_pane

0xbd3d,	// (0x0007ff6e) context_pane

0x5c94,	// (0x00079ec5) navi_pane

0x5cbc,	// (0x00079eed) popup_cale_events_window_ParamLimits

0x5cbc,	// (0x00079eed) popup_cale_events_window

0xbd50,	// (0x0007ff81) popup_mup_playback_window

0x5cd4,	// (0x00079f05) signal_pane

0x2291,	// (0x000764c2) main_browser_pane

0x4820,	// (0x00078a51) main_burst_pane

0x59e6,	// (0x00079c17) main_calc_pane

0x4820,	// (0x00078a51) main_cale_day_pane

0x2291,	// (0x000764c2) main_cale_month_pane

0x4820,	// (0x00078a51) main_cale_week_pane

0x4820,	// (0x00078a51) main_call_pane

0x1cbc,	// (0x00075eed) main_call_poc_pane

0x4820,	// (0x00078a51) main_camera_pane

0x4820,	// (0x00078a51) main_chi_dic_pane

0x4389,	// (0x000785ba) main_clock_pane

0x1cbc,	// (0x00075eed) main_fmradio_pane

0x4820,	// (0x00078a51) main_graph_messa_pane

0x1cbc,	// (0x00075eed) main_help_pane

0x2291,	// (0x000764c2) main_im_pane

0x1f17,	// (0x00076148) main_image_pane_ParamLimits

0x1f17,	// (0x00076148) main_image_pane

0x1cbc,	// (0x00075eed) main_location2_pane

0x4820,	// (0x00078a51) main_location_pane

0x1cbc,	// (0x00075eed) main_messa_pane

0x1cbc,	// (0x00075eed) main_mp2_pane

0x4820,	// (0x00078a51) main_mp_pane

0x1cbc,	// (0x00075eed) main_msg_pane

0x1cbc,	// (0x00075eed) main_mup_eq_pane

0x1cbc,	// (0x00075eed) main_mup_pane

0x2291,	// (0x000764c2) main_notes_pane

0x1cbc,	// (0x00075eed) main_pec_pane

0x1cbc,	// (0x00075eed) main_phob_pane

0x1cbc,	// (0x00075eed) main_pinb_pane

0x1cbc,	// (0x00075eed) main_postcard_pane

0x1cbc,	// (0x00075eed) main_qdial_pane

0x4820,	// (0x00078a51) main_skin_pane

0x1cbc,	// (0x00075eed) main_smil2_pane

0x4820,	// (0x00078a51) main_smil_pane

0x4820,	// (0x00078a51) main_video_pane

0x4820,	// (0x00078a51) main_video_tele_pane

0x1f17,	// (0x00076148) main_viewer_pane_ParamLimits

0x1f17,	// (0x00076148) main_viewer_pane

0x4820,	// (0x00078a51) main_vorec_pane

0x5a3a,	// (0x00079c6b) popup_blid_sat_info_window_ParamLimits

0x5a3a,	// (0x00079c6b) popup_blid_sat_info_window

0x5a92,	// (0x00079cc3) popup_dyc_status_message_window_ParamLimits

0x5a92,	// (0x00079cc3) popup_dyc_status_message_window

0x5aac,	// (0x00079cdd) popup_grid_large_graphic_window_ParamLimits

0x5aac,	// (0x00079cdd) popup_grid_large_graphic_window

0x5b68,	// (0x00079d99) popup_loc_request_window_ParamLimits

0x5b68,	// (0x00079d99) popup_loc_request_window

0x5c6c,	// (0x00079e9d) popup_wml_address_window_ParamLimits

0x5c6c,	// (0x00079e9d) popup_wml_address_window

0x5820,	// (0x00079a51) call_muted_g1

0x54d5,	// (0x00079706) popup_call_audio_conf_window_ParamLimits

0x54d5,	// (0x00079706) popup_call_audio_conf_window

0x5834,	// (0x00079a65) popup_call_audio_first_window_ParamLimits

0x5834,	// (0x00079a65) popup_call_audio_first_window

0x58aa,	// (0x00079adb) popup_call_audio_in_window_ParamLimits

0x58aa,	// (0x00079adb) popup_call_audio_in_window

0x58e6,	// (0x00079b17) popup_call_audio_out_window_ParamLimits

0x58e6,	// (0x00079b17) popup_call_audio_out_window

0x5920,	// (0x00079b51) popup_call_audio_second_window_ParamLimits

0x5920,	// (0x00079b51) popup_call_audio_second_window

0x5976,	// (0x00079ba7) popup_call_audio_wait_window_ParamLimits

0x5976,	// (0x00079ba7) popup_call_audio_wait_window

0x59ab,	// (0x00079bdc) popup_number_entry_window_ParamLimits

0x59ab,	// (0x00079bdc) popup_number_entry_window

0x1851,	// (0x00075a82) bg_popup_call_pane_cp05_ParamLimits

0x1851,	// (0x00075a82) bg_popup_call_pane_cp05

0x1871,	// (0x00075aa2) popup_number_entry_window_t1

0x1884,	// (0x00075ab5) popup_number_entry_window_t2

0x1896,	// (0x00075ac7) popup_number_entry_window_t3

0x0003,

0xf0e7,	// (0x00083318) popup_number_entry_window_t

0x18dc,	// (0x00075b0d) text_title_cp2

0x18ef,	// (0x00075b20) bg_popup_call_pane_cp_ParamLimits

0x18ef,	// (0x00075b20) bg_popup_call_pane_cp

0x18fd,	// (0x00075b2e) call_thumbnail_pane

0x1905,	// (0x00075b36) popup_call_audio_in_window_g1_ParamLimits

0x1905,	// (0x00075b36) popup_call_audio_in_window_g1

0x1911,	// (0x00075b42) popup_call_audio_in_window_g2_ParamLimits

0x1911,	// (0x00075b42) popup_call_audio_in_window_g2

0x191d,	// (0x00075b4e) popup_call_audio_in_window_g3_ParamLimits

0x191d,	// (0x00075b4e) popup_call_audio_in_window_g3

0x0002,

0xf0f0,	// (0x00083321) popup_call_audio_in_window_g_ParamLimits

0xf0f0,	// (0x00083321) popup_call_audio_in_window_g

0x1929,	// (0x00075b5a) popup_call_audio_in_window_t1_ParamLimits

0x1929,	// (0x00075b5a) popup_call_audio_in_window_t1

0x1945,	// (0x00075b76) popup_call_audio_in_window_t2_ParamLimits

0x1945,	// (0x00075b76) popup_call_audio_in_window_t2

0x1961,	// (0x00075b92) popup_call_audio_in_window_t3_ParamLimits

0x1961,	// (0x00075b92) popup_call_audio_in_window_t3

0x0002,

0xf0f7,	// (0x00083328) popup_call_audio_in_window_t_ParamLimits

0xf0f7,	// (0x00083328) popup_call_audio_in_window_t

0x18ef,	// (0x00075b20) bg_popup_call_pane_cp01_ParamLimits

0x18ef,	// (0x00075b20) bg_popup_call_pane_cp01

0x18fd,	// (0x00075b2e) call_thumbnail_pane_cp02

0x1974,	// (0x00075ba5) call_type_pane_cp022

0x197c,	// (0x00075bad) popup_call_audio_out_window_g1_ParamLimits

0x197c,	// (0x00075bad) popup_call_audio_out_window_g1

0x198e,	// (0x00075bbf) popup_call_audio_out_window_g2_ParamLimits

0x198e,	// (0x00075bbf) popup_call_audio_out_window_g2

0x199a,	// (0x00075bcb) popup_call_audio_out_window_g3_ParamLimits

0x199a,	// (0x00075bcb) popup_call_audio_out_window_g3

0x0002,

0xf0fe,	// (0x0008332f) popup_call_audio_out_window_g_ParamLimits

0xf0fe,	// (0x0008332f) popup_call_audio_out_window_g

0x19ac,	// (0x00075bdd) popup_call_audio_out_window_t1_ParamLimits

0x19ac,	// (0x00075bdd) popup_call_audio_out_window_t1

0x19c4,	// (0x00075bf5) popup_call_audio_out_window_t2_ParamLimits

0x19c4,	// (0x00075bf5) popup_call_audio_out_window_t2

0x0001,

0xf105,	// (0x00083336) popup_call_audio_out_window_t_ParamLimits

0xf105,	// (0x00083336) popup_call_audio_out_window_t

0x19d9,	// (0x00075c0a) bg_popup_call_pane_ParamLimits

0x19d9,	// (0x00075c0a) bg_popup_call_pane

0x1a5d,	// (0x00075c8e) call_thumbnail_pane_cp_ParamLimits

0x1a5d,	// (0x00075c8e) call_thumbnail_pane_cp

0x1a81,	// (0x00075cb2) call_type_pane_cp01_ParamLimits

0x1a81,	// (0x00075cb2) call_type_pane_cp01

0x1ac5,	// (0x00075cf6) popup_call_audio_first_window_g1_ParamLimits

0x1ac5,	// (0x00075cf6) popup_call_audio_first_window_g1

0x1b11,	// (0x00075d42) popup_call_audio_first_window_g2_ParamLimits

0x1b11,	// (0x00075d42) popup_call_audio_first_window_g2

0x0001,

0xf10a,	// (0x0008333b) popup_call_audio_first_window_g_ParamLimits

0xf10a,	// (0x0008333b) popup_call_audio_first_window_g

0x1b55,	// (0x00075d86) popup_call_audio_first_window_t1_ParamLimits

0x1b55,	// (0x00075d86) popup_call_audio_first_window_t1

0x1c01,	// (0x00075e32) popup_call_audio_first_window_t4_ParamLimits

0x1c01,	// (0x00075e32) popup_call_audio_first_window_t4

0x1c8d,	// (0x00075ebe) popup_call_audio_first_window_t5_ParamLimits

0x1c8d,	// (0x00075ebe) popup_call_audio_first_window_t5

0x0002,

0xf10f,	// (0x00083340) popup_call_audio_first_window_t_ParamLimits

0xf10f,	// (0x00083340) popup_call_audio_first_window_t

0x1cbc,	// (0x00075eed) bg_popup_call_pane_cp02

0x1cc6,	// (0x00075ef7) call_type_pane_cp023

0x1cce,	// (0x00075eff) popup_call_audio_wait_window_g1

0x1cd6,	// (0x00075f07) popup_call_audio_wait_window_g2

0x0001,

0xf116,	// (0x00083347) popup_call_audio_wait_window_g

0x1cde,	// (0x00075f0f) popup_call_audio_wait_window_t3

0x1cec,	// (0x00075f1d) bg_popup_call_pane_cp03_ParamLimits

0x1cec,	// (0x00075f1d) bg_popup_call_pane_cp03

0x1d4c,	// (0x00075f7d) call_thumbnail_pane_cp011_ParamLimits

0x1d4c,	// (0x00075f7d) call_thumbnail_pane_cp011

0x1d58,	// (0x00075f89) call_type_pane_cp034_ParamLimits

0x1d58,	// (0x00075f89) call_type_pane_cp034

0x1d94,	// (0x00075fc5) popup_call_audio_second_window_g1_ParamLimits

0x1d94,	// (0x00075fc5) popup_call_audio_second_window_g1

0x1dd0,	// (0x00076001) popup_call_audio_second_window_g2_ParamLimits

0x1dd0,	// (0x00076001) popup_call_audio_second_window_g2

0x0001,

0xf11b,	// (0x0008334c) popup_call_audio_second_window_g_ParamLimits

0xf11b,	// (0x0008334c) popup_call_audio_second_window_g

0x1e0c,	// (0x0007603d) popup_call_audio_second_window_t1_ParamLimits

0x1e0c,	// (0x0007603d) popup_call_audio_second_window_t1

0x1e8d,	// (0x000760be) popup_call_audio_second_window_t2_ParamLimits

0x1e8d,	// (0x000760be) popup_call_audio_second_window_t2

0x1ec3,	// (0x000760f4) popup_call_audio_second_window_t3_ParamLimits

0x1ec3,	// (0x000760f4) popup_call_audio_second_window_t3

0x0002,

0xf120,	// (0x00083351) popup_call_audio_second_window_t_ParamLimits

0xf120,	// (0x00083351) popup_call_audio_second_window_t

0x1cbc,	// (0x00075eed) bg_popup_call_pane_cp04

0x1ef9,	// (0x0007612a) list_conf_pane

0x1f01,	// (0x00076132) popup_call_audio_conf_window_t1

0x1f0f,	// (0x00076140) call_thumbnail_pane_g1

0x1f17,	// (0x00076148) bg_pinb_pane_ParamLimits

0x1f17,	// (0x00076148) bg_pinb_pane

0x1f25,	// (0x00076156) find_pinb_pane

0x1f2e,	// (0x0007615f) listscroll_pinb_pane_ParamLimits

0x1f2e,	// (0x0007615f) listscroll_pinb_pane

0x1f3d,	// (0x0007616e) pinb_bg_pane_g1

0x1f47,	// (0x00076178) pinb_bg_pane_g2

0x1f53,	// (0x00076184) pinb_bg_pane_g3

0x1f5f,	// (0x00076190) pinb_bg_pane_g4

0x1f6b,	// (0x0007619c) pinb_bg_pane_g5

0x1f77,	// (0x000761a8) pinb_bg_pane_g6

0x1f82,	// (0x000761b3) pinb_bg_pane_g7

0x1f8d,	// (0x000761be) pinb_bg_pane_g8

0x1f98,	// (0x000761c9) pinb_bg_pane_g9

0x1fa2,	// (0x000761d3) pinb_bg_pane_g10

0x0009,

0xf127,	// (0x00083358) pinb_bg_pane_g

0x1fbf,	// (0x000761f0) grid_pinb_pane

0x1fc8,	// (0x000761f9) list_pinb_pane

0x1fd1,	// (0x00076202) scroll_pane_cp01_ParamLimits

0x1fd1,	// (0x00076202) scroll_pane_cp01

0x1fe3,	// (0x00076214) find_pinb_pane_g1_ParamLimits

0x1fe3,	// (0x00076214) find_pinb_pane_g1

0x1ffb,	// (0x0007622c) find_pinb_pane_t1

0x200d,	// (0x0007623e) find_pinb_pane_t2

0x0001,

0xf141,	// (0x00083372) find_pinb_pane_t

0x2022,	// (0x00076253) input_focus_pane_cp01_ParamLimits

0x2022,	// (0x00076253) input_focus_pane_cp01

0x202e,	// (0x0007625f) cell_pinb_pane_ParamLimits

0x202e,	// (0x0007625f) cell_pinb_pane

0x2057,	// (0x00076288) cell_pinb_pane_g1_ParamLimits

0x2057,	// (0x00076288) cell_pinb_pane_g1

0x2067,	// (0x00076298) cell_pinb_pane_g2_ParamLimits

0x2067,	// (0x00076298) cell_pinb_pane_g2

0x2073,	// (0x000762a4) cell_pinb_pane_g3_ParamLimits

0x2073,	// (0x000762a4) cell_pinb_pane_g3

0x0002,

0xf146,	// (0x00083377) cell_pinb_pane_g_ParamLimits

0xf146,	// (0x00083377) cell_pinb_pane_g

0x1cbc,	// (0x00075eed) grid_highlight_pane_cp01

0x207f,	// (0x000762b0) list_pinb_item_pane_ParamLimits

0x207f,	// (0x000762b0) list_pinb_item_pane

0x1cbc,	// (0x00075eed) list_highlight_pane_cp02

0x2091,	// (0x000762c2) list_pinb_item_pane_g1_ParamLimits

0x2091,	// (0x000762c2) list_pinb_item_pane_g1

0x209e,	// (0x000762cf) list_pinb_item_pane_g2_ParamLimits

0x209e,	// (0x000762cf) list_pinb_item_pane_g2

0x20aa,	// (0x000762db) list_pinb_item_pane_g3_ParamLimits

0x20aa,	// (0x000762db) list_pinb_item_pane_g3

0x20bb,	// (0x000762ec) list_pinb_item_pane_g4_ParamLimits

0x20bb,	// (0x000762ec) list_pinb_item_pane_g4

0x0003,

0xf14d,	// (0x0008337e) list_pinb_item_pane_g_ParamLimits

0xf14d,	// (0x0008337e) list_pinb_item_pane_g

0x20c7,	// (0x000762f8) list_pinb_item_pane_t1_ParamLimits

0x20c7,	// (0x000762f8) list_pinb_item_pane_t1

0x20fc,	// (0x0007632d) calc_display_pane

0x2124,	// (0x00076355) calc_paper_pane

0x2147,	// (0x00076378) grid_calc_pane

0x1cbc,	// (0x00075eed) bg_list_pane_cp01

0x2175,	// (0x000763a6) clock_g1

0x217d,	// (0x000763ae) clock_g2

0x0001,

0xf156,	// (0x00083387) clock_g

0x2185,	// (0x000763b6) clock_t1_ParamLimits

0x2185,	// (0x000763b6) clock_t1

0x219a,	// (0x000763cb) clock_t2_ParamLimits

0x219a,	// (0x000763cb) clock_t2

0x21ac,	// (0x000763dd) clock_t3_ParamLimits

0x21ac,	// (0x000763dd) clock_t3

0x21be,	// (0x000763ef) clock_t4_ParamLimits

0x21be,	// (0x000763ef) clock_t4

0x21d0,	// (0x00076401) clock_t5_ParamLimits

0x21d0,	// (0x00076401) clock_t5

0x21e5,	// (0x00076416) clock_t6_ParamLimits

0x21e5,	// (0x00076416) clock_t6

0x21f7,	// (0x00076428) clock_t7_ParamLimits

0x21f7,	// (0x00076428) clock_t7

0x2209,	// (0x0007643a) clock_t8_ParamLimits

0x2209,	// (0x0007643a) clock_t8

0x221d,	// (0x0007644e) clock_t9_ParamLimits

0x221d,	// (0x0007644e) clock_t9

0x0008,

0xf15b,	// (0x0008338c) clock_t_ParamLimits

0xf15b,	// (0x0008338c) clock_t

0x2231,	// (0x00076462) popup_clock_analogue_window_cp02

0x2231,	// (0x00076462) popup_clock_digital_window_cp01

0x2239,	// (0x0007646a) listscroll_help_pane

0x1cbc,	// (0x00075eed) phob_pre_status_pane

0x2243,	// (0x00076474) grid_qdial_pane

0x1cbc,	// (0x00075eed) listscroll_mce_pane

0x224d,	// (0x0007647e) bg_notes_pane

0x225b,	// (0x0007648c) list_notes_pane

0x2269,	// (0x0007649a) scroll_pane_cp06

0x227d,	// (0x000764ae) bg_calc_paper_pane

0xa9f8,	// (0x0007ec29) list_calc_pane

0x2291,	// (0x000764c2) bg_calc_display_pane

0x229d,	// (0x000764ce) calc_display_pane_t1

0x22af,	// (0x000764e0) calc_display_pane_t2

0xaa12,	// (0x0007ec43) calc_display_pane_t3

0x0002,

0xf16e,	// (0x0008339f) calc_display_pane_t

0x22c1,	// (0x000764f2) cell_calc_pane_ParamLimits

0x22c1,	// (0x000764f2) cell_calc_pane

0x22f6,	// (0x00076527) bg_calc_paper_pane_g1

0x2302,	// (0x00076533) bg_calc_paper_pane_g2

0x230e,	// (0x0007653f) bg_calc_paper_pane_g3

0x231a,	// (0x0007654b) bg_calc_paper_pane_g4

0x2326,	// (0x00076557) bg_calc_paper_pane_g5

0x2332,	// (0x00076563) bg_calc_paper_pane_g6

0x2341,	// (0x00076572) bg_calc_paper_pane_g7

0x2350,	// (0x00076581) bg_calc_paper_pane_g8

0x0007,

0xf175,	// (0x000833a6) bg_calc_paper_pane_g

0x2363,	// (0x00076594) calc_bg_paper_pane_g9

0x2376,	// (0x000765a7) list_calc_item_pane_ParamLimits

0x2376,	// (0x000765a7) list_calc_item_pane

0x238e,	// (0x000765bf) list_calc_item_pane_g1

0xaa24,	// (0x0007ec55) list_calc_item_pane_t1_ParamLimits

0xaa24,	// (0x0007ec55) list_calc_item_pane_t1

0x239b,	// (0x000765cc) list_calc_item_pane_t2_ParamLimits

0x239b,	// (0x000765cc) list_calc_item_pane_t2

0x0001,

0xf186,	// (0x000833b7) list_calc_item_pane_t_ParamLimits

0xf186,	// (0x000833b7) list_calc_item_pane_t

0x23b5,	// (0x000765e6) cell_calc_pane_g1

0x23d7,	// (0x00076608) grid_highlight_pane_cp02

0x23f9,	// (0x0007662a) bg_calc_display_pane_g1

0x2402,	// (0x00076633) bg_calc_display_pane_g2

0x240c,	// (0x0007663d) bg_calc_display_pane_g3

0x0002,

0xf190,	// (0x000833c1) bg_calc_display_pane_g

0x2415,	// (0x00076646) cell_qdial_pane_ParamLimits

0x2415,	// (0x00076646) cell_qdial_pane

0x2429,	// (0x0007665a) cell_qdial_pane_g1_ParamLimits

0x2429,	// (0x0007665a) cell_qdial_pane_g1

0x243f,	// (0x00076670) cell_qdial_pane_g2_ParamLimits

0x243f,	// (0x00076670) cell_qdial_pane_g2

0x2450,	// (0x00076681) cell_qdial_pane_g3_ParamLimits

0x2450,	// (0x00076681) cell_qdial_pane_g3

0x0003,

0xf197,	// (0x000833c8) cell_qdial_pane_g_ParamLimits

0xf197,	// (0x000833c8) cell_qdial_pane_g

0x2472,	// (0x000766a3) cell_qdial_pane_t1_ParamLimits

0x2472,	// (0x000766a3) cell_qdial_pane_t1

0x248a,	// (0x000766bb) cell_qdial_pane_t2_ParamLimits

0x248a,	// (0x000766bb) cell_qdial_pane_t2

0x249d,	// (0x000766ce) cell_qdial_pane_t3_ParamLimits

0x249d,	// (0x000766ce) cell_qdial_pane_t3

0x0002,

0xf1a0,	// (0x000833d1) cell_qdial_pane_t_ParamLimits

0xf1a0,	// (0x000833d1) cell_qdial_pane_t

0x1cbc,	// (0x00075eed) grid_highlight_pane_cp04

0x24b0,	// (0x000766e1) thumbnail_qdial_pane_ParamLimits

0x24b0,	// (0x000766e1) thumbnail_qdial_pane

0x250c,	// (0x0007673d) list_help_pane

0x2515,	// (0x00076746) scroll_pane_cp02

0x251e,	// (0x0007674f) help_list_pane_t1_ParamLimits

0x251e,	// (0x0007674f) help_list_pane_t1

0xaa36,	// (0x0007ec67) bg_notes_pane_g2

0xaa3e,	// (0x0007ec6f) bg_notes_pane_g3

0xaa46,	// (0x0007ec77) notes_bg_pane_g1

0xaa4e,	// (0x0007ec7f) notes_bg_pane_g4

0xaa56,	// (0x0007ec87) notes_bg_pane_g5

0xaa5e,	// (0x0007ec8f) notes_bg_pane_g6

0xaa66,	// (0x0007ec97) notes_bg_pane_g7

0xaa6e,	// (0x0007ec9f) notes_bg_pane_g8

0xaa76,	// (0x0007eca7) notes_bg_pane_g9

0x0006,

0xf1be,	// (0x000833ef) notes_bg_pane_g

0x253b,	// (0x0007676c) list_notes_text_pane_ParamLimits

0x253b,	// (0x0007676c) list_notes_text_pane

0x2550,	// (0x00076781) list_notes_text_pane_g1

0x0b57,	// (0x00074d88) list_notes_text_pane_t1

0x2291,	// (0x000764c2) listscroll_cale_week_pane

0x2587,	// (0x000767b8) bg_cale_heading_pane

0x259b,	// (0x000767cc) bg_cale_pane_cp01

0x25b4,	// (0x000767e5) cale_week_corner_pane

0x25ca,	// (0x000767fb) cale_week_day_heading_pane

0x25de,	// (0x0007680f) cale_week_scroll_pane_g1

0x25ef,	// (0x00076820) cale_week_scroll_pane_g2

0x2600,	// (0x00076831) cale_week_scroll_pane_g3

0x2611,	// (0x00076842) cale_week_scroll_pane_g4

0x2622,	// (0x00076853) cale_week_scroll_pane_g5

0x2635,	// (0x00076866) cale_week_scroll_pane_g6

0x2648,	// (0x00076879) cale_week_scroll_pane_g7

0x265b,	// (0x0007688c) cale_week_scroll_pane_g8

0x266e,	// (0x0007689f) cale_week_scroll_pane_g9

0x267f,	// (0x000768b0) cale_week_scroll_pane_g10

0x2690,	// (0x000768c1) cale_week_scroll_pane_g11

0x26a1,	// (0x000768d2) cale_week_scroll_pane_g12

0x26b2,	// (0x000768e3) cale_week_scroll_pane_g13

0x26c3,	// (0x000768f4) cale_week_scroll_pane_g14

0x26d4,	// (0x00076905) cale_week_scroll_pane_g15

0x000e,

0xf1cd,	// (0x000833fe) cale_week_scroll_pane_g

0x26e5,	// (0x00076916) cale_week_time_pane

0x26f8,	// (0x00076929) grid_cale_week_pane

0x271f,	// (0x00076950) scroll_pane_cp08

0x2739,	// (0x0007696a) cell_cale_week_pane_ParamLimits

0x2739,	// (0x0007696a) cell_cale_week_pane

0x2779,	// (0x000769aa) cale_week_day_heading_pane_t1

0x27a3,	// (0x000769d4) cale_week_day_heading_pane_t2

0x27cd,	// (0x000769fe) cale_week_day_heading_pane_t3

0x27f7,	// (0x00076a28) cale_week_day_heading_pane_t4

0x2821,	// (0x00076a52) cale_week_day_heading_pane_t5

0x284b,	// (0x00076a7c) cale_week_day_heading_pane_t6

0x2877,	// (0x00076aa8) cale_week_day_heading_pane_t7

0x0006,

0xf1ec,	// (0x0008341d) cale_week_day_heading_pane_t

0x28a1,	// (0x00076ad2) bg_cale_side_pane

0x28af,	// (0x00076ae0) cale_week_time_pane_t1

0x28c7,	// (0x00076af8) cale_week_time_pane_t2

0x28df,	// (0x00076b10) cale_week_time_pane_t3

0x28f7,	// (0x00076b28) cale_week_time_pane_t4

0x290f,	// (0x00076b40) cale_week_time_pane_t5

0x2927,	// (0x00076b58) cale_week_time_pane_t6

0x293f,	// (0x00076b70) cale_week_time_pane_t7

0x2957,	// (0x00076b88) cale_week_time_pane_t8

0x0007,

0xf1fb,	// (0x0008342c) cale_week_time_pane_t

0x296f,	// (0x00076ba0) cell_cale_week_pane_g2

0x2988,	// (0x00076bb9) cell_cale_week_pane_g3_ParamLimits

0x2988,	// (0x00076bb9) cell_cale_week_pane_g3

0x29a0,	// (0x00076bd1) grid_highlight_pane_cp07

0x29a8,	// (0x00076bd9) listscroll_gms_pane

0x29b2,	// (0x00076be3) grid_gms_pane

0x29bb,	// (0x00076bec) listscroll_gms_pane_g1

0x29c3,	// (0x00076bf4) listscroll_gms_pane_g2

0x0001,

0xf20c,	// (0x0008343d) listscroll_gms_pane_g

0x29cb,	// (0x00076bfc) scroll_pane_cp010

0x29d6,	// (0x00076c07) cell_gms_pane_ParamLimits

0x29d6,	// (0x00076c07) cell_gms_pane

0x29e8,	// (0x00076c19) cell_gms_pane_g1

0x29f0,	// (0x00076c21) cell_gms_pane_g2

0x29f8,	// (0x00076c29) cell_gms_pane_g3

0x2a01,	// (0x00076c32) cell_gms_pane_g4

0x0003,

0xf211,	// (0x00083442) cell_gms_pane_g

0x2a0a,	// (0x00076c3b) grid_highlight_pane_cp09

0x57ca,	// (0x000799fb) phob_pre_status_pane_g1

0x57d2,	// (0x00079a03) phob_pre_status_pane_g2

0x57da,	// (0x00079a0b) phob_pre_status_pane_g3

0x57e2,	// (0x00079a13) phob_pre_status_pane_g4

0x0004,

0xf600,	// (0x00083831) phob_pre_status_pane_g

0x57f2,	// (0x00079a23) phob_pre_status_pane_t1

0x5800,	// (0x00079a31) phob_pre_status_pane_t2

0x5810,	// (0x00079a41) phob_pre_status_pane_t3

0x0002,

0xf60b,	// (0x0008383c) phob_pre_status_pane_t

0x1cbc,	// (0x00075eed) bg_list_pane_cp05

0x2a1a,	// (0x00076c4b) grid_vorec_pane

0xaa7e,	// (0x0007ecaf) vorec_t1

0xaa8c,	// (0x0007ecbd) vorec_t2

0xaa9a,	// (0x0007eccb) vorec_t3

0xaaa8,	// (0x0007ecd9) vorec_t4

0xaab6,	// (0x0007ece7) vorec_t5

0xaac4,	// (0x0007ecf5) vorec_t6

0x0006,

0xf21a,	// (0x0008344b) vorec_t

0xaae0,	// (0x0007ed11) wait_bar_pane_cp01

0x2a22,	// (0x00076c53) cell_vorec_pane_ParamLimits

0x2a22,	// (0x00076c53) cell_vorec_pane

0x2a35,	// (0x00076c66) cell_vorec_pane_g1

0x1cbc,	// (0x00075eed) grid_highlight_pane_cp05

0x2a57,	// (0x00076c88) cams_zoom_pane

0x2a66,	// (0x00076c97) image_vga_pane

0x2a80,	// (0x00076cb1) main_camera_pane_g1

0x2a92,	// (0x00076cc3) main_camera_pane_g2

0x2aa2,	// (0x00076cd3) main_camera_pane_g3

0x2ab2,	// (0x00076ce3) main_camera_pane_g4

0x2ac2,	// (0x00076cf3) main_camera_pane_g5

0x2ad2,	// (0x00076d03) main_camera_pane_g6

0x2ae4,	// (0x00076d15) main_camera_pane_g7

0x0007,

0xf229,	// (0x0008345a) main_camera_pane_g

0x2b00,	// (0x00076d31) main_camera_pane_t1

0x2b16,	// (0x00076d47) main_camera_pane_t2

0x0001,

0xf23a,	// (0x0008346b) main_camera_pane_t

0x2b50,	// (0x00076d81) cams_zoom_pane_cp_ParamLimits

0x2b50,	// (0x00076d81) cams_zoom_pane_cp

0x2b78,	// (0x00076da9) image_cif_pane_ParamLimits

0x2b78,	// (0x00076da9) image_cif_pane

0x2bb3,	// (0x00076de4) image_subqcif_pane

0x2bbb,	// (0x00076dec) main_video_pane_g1_ParamLimits

0x2bbb,	// (0x00076dec) main_video_pane_g1

0x2bdf,	// (0x00076e10) main_video_pane_g2_ParamLimits

0x2bdf,	// (0x00076e10) main_video_pane_g2

0x2c13,	// (0x00076e44) main_video_pane_g3_ParamLimits

0x2c13,	// (0x00076e44) main_video_pane_g3

0x2c41,	// (0x00076e72) main_video_pane_g4_ParamLimits

0x2c41,	// (0x00076e72) main_video_pane_g4

0x2c6f,	// (0x00076ea0) main_video_pane_g5_ParamLimits

0x2c6f,	// (0x00076ea0) main_video_pane_g5

0x2c87,	// (0x00076eb8) main_video_pane_g6_ParamLimits

0x2c87,	// (0x00076eb8) main_video_pane_g6

0x0006,

0xf23f,	// (0x00083470) main_video_pane_g_ParamLimits

0xf23f,	// (0x00083470) main_video_pane_g

0x2cb2,	// (0x00076ee3) main_video_pane_t1_ParamLimits

0x2cb2,	// (0x00076ee3) main_video_pane_t1

0x2cfb,	// (0x00076f2c) cams_zoom_pane_g1

0x2d04,	// (0x00076f35) cams_zoom_pane_g2

0x2d0d,	// (0x00076f3e) cams_zoom_pane_g3

0x2d16,	// (0x00076f47) cams_zoom_pane_g4

0x0003,

0xf24e,	// (0x0008347f) cams_zoom_pane_g

0x2d33,	// (0x00076f64) grid_cams_pane

0x2d4d,	// (0x00076f7e) linegrid_cams_pane

0x2d61,	// (0x00076f92) cell_cams_pane_ParamLimits

0x2d61,	// (0x00076f92) cell_cams_pane

0x2d81,	// (0x00076fb2) cams_burst_image_pane

0x2d89,	// (0x00076fba) cell_cams_pane_g1

0x1cbc,	// (0x00075eed) grid_highlight_pane_cp03

0x23b5,	// (0x000765e6) mp_bg_pane_g1

0x1cbc,	// (0x00075eed) bg_list_pane_cp03

0xbc15,	// (0x0007fe46) bg_mp_pane

0xbc1d,	// (0x0007fe4e) grid_mp_pane

0xbc25,	// (0x0007fe56) media_player_g1

0xbc2d,	// (0x0007fe5e) media_player_t1

0xbc3b,	// (0x0007fe6c) media_player_t2

0xbc49,	// (0x0007fe7a) media_player_t3

0xbc57,	// (0x0007fe88) media_player_t4

0xbc65,	// (0x0007fe96) media_player_t5

0xbc73,	// (0x0007fea4) media_player_t6

0xbc81,	// (0x0007feb2) media_player_t7

0x0006,

0xf5ea,	// (0x0008381b) media_player_t

0xbc8f,	// (0x0007fec0) wait_bar_pane_cp02

0xf5cf,	// (0x00083800) main_usb_pane_t

0x57c1,	// (0x000799f2) cell_mp_pane

0x23b5,	// (0x000765e6) cell_mp_pane_g1

0x1cbc,	// (0x00075eed) grid_highlight_pane_cp06

0x2d91,	// (0x00076fc2) grid_skin_colour_pane

0x2d99,	// (0x00076fca) list_highlight_pane_cp03

0x2da1,	// (0x00076fd2) skin_g1

0x2da9,	// (0x00076fda) skin_t1

0x2db8,	// (0x00076fe9) skin_t2

0x0001,

0xf283,	// (0x000834b4) skin_t

0x2dc6,	// (0x00076ff7) cell_skin_colour_pane_ParamLimits

0x2dc6,	// (0x00076ff7) cell_skin_colour_pane

0x2de6,	// (0x00077017) cell_skin_colour_pane_g1

0x2e51,	// (0x00077082) call_video_g1_ParamLimits

0x2e51,	// (0x00077082) call_video_g1

0x2e6d,	// (0x0007709e) call_video_g2_ParamLimits

0x2e6d,	// (0x0007709e) call_video_g2

0x0001,

0xf288,	// (0x000834b9) call_video_g_ParamLimits

0xf288,	// (0x000834b9) call_video_g

0x2ebf,	// (0x000770f0) call_video_uplink_pane_cp1_ParamLimits

0x2ebf,	// (0x000770f0) call_video_uplink_pane_cp1

0x2f24,	// (0x00077155) call_video_uplink_pane_cp2

0x2f66,	// (0x00077197) video_down_crop_pane_ParamLimits

0x2f66,	// (0x00077197) video_down_crop_pane

0x305d,	// (0x0007728e) video_down_pane_ParamLimits

0x305d,	// (0x0007728e) video_down_pane

0x3154,	// (0x00077385) video_down_subqcif_pane_ParamLimits

0x3154,	// (0x00077385) video_down_subqcif_pane

0x316c,	// (0x0007739d) video_down_subqcif_pane_cp_ParamLimits

0x316c,	// (0x0007739d) video_down_subqcif_pane_cp

0x31a9,	// (0x000773da) im_reading_pane_ParamLimits

0x31a9,	// (0x000773da) im_reading_pane

0x31bb,	// (0x000773ec) im_writing_pane_ParamLimits

0x31bb,	// (0x000773ec) im_writing_pane

0x31d9,	// (0x0007740a) im_reading_pane_t1

0x3212,	// (0x00077443) list_im_pane

0x3223,	// (0x00077454) scroll_pane_cp07

0x323c,	// (0x0007746d) im_writing_pane_t1_ParamLimits

0x323c,	// (0x0007746d) im_writing_pane_t1

0x3251,	// (0x00077482) im_writing_pane_t2_ParamLimits

0x3251,	// (0x00077482) im_writing_pane_t2

0x0001,

0xf292,	// (0x000834c3) im_writing_pane_t_ParamLimits

0xf292,	// (0x000834c3) im_writing_pane_t

0x1cbc,	// (0x00075eed) input_focus_pane_cp04

0x1cbc,	// (0x00075eed) input_focus_pane_cp05

0x326e,	// (0x0007749f) list_im_single_pane_ParamLimits

0x326e,	// (0x0007749f) list_im_single_pane

0x3282,	// (0x000774b3) list_single_im_pane_t1

0x5781,	// (0x000799b2) blid_accuracy_pane

0x5789,	// (0x000799ba) blid_compass_pane

0x5793,	// (0x000799c4) main_location_t1

0x57a3,	// (0x000799d4) main_location_t2

0x57b3,	// (0x000799e4) main_location_t3

0x0002,

0xf5f9,	// (0x0008382a) main_location_t

0x1cbc,	// (0x00075eed) aid_levels_location

0x23b5,	// (0x000765e6) blid_accuracy_pane_g1

0x23b5,	// (0x000765e6) blid_accuracy_pane_g2

0x0001,

0xf2f4,	// (0x00083525) blid_accuracy_pane_g

0x32bc,	// (0x000774ed) wml_content_pane

0x32fa,	// (0x0007752b) wml_button_pane_ParamLimits

0x32fa,	// (0x0007752b) wml_button_pane

0x330e,	// (0x0007753f) wml_list_single_large_pane_ParamLimits

0x330e,	// (0x0007753f) wml_list_single_large_pane

0x3323,	// (0x00077554) wml_list_single_medium_pane_ParamLimits

0x3323,	// (0x00077554) wml_list_single_medium_pane

0x3339,	// (0x0007756a) wml_list_single_small_pane_ParamLimits

0x3339,	// (0x0007756a) wml_list_single_small_pane

0x3351,	// (0x00077582) wml_selection_box_pane_ParamLimits

0x3351,	// (0x00077582) wml_selection_box_pane

0x3364,	// (0x00077595) wml_list_single_pane_t1

0x3373,	// (0x000775a4) wml_list_single_medium_pane_t1

0x3382,	// (0x000775b3) wml_list_single_large_pane_t1

0x3391,	// (0x000775c2) input_focus_pane_cp02_ParamLimits

0x3391,	// (0x000775c2) input_focus_pane_cp02

0x33a4,	// (0x000775d5) wml_selection_box_pane_g1

0x33ad,	// (0x000775de) wml_selection_box_pane_t1_ParamLimits

0x33ad,	// (0x000775de) wml_selection_box_pane_t1

0x1f17,	// (0x00076148) bg_wml_button_pane_ParamLimits

0x1f17,	// (0x00076148) bg_wml_button_pane

0x33c5,	// (0x000775f6) wml_button_pane_g1

0x33cd,	// (0x000775fe) wml_button_pane_t1

0x33c5,	// (0x000775f6) wml_button_bg_pane_g1

0x33dd,	// (0x0007760e) wml_button_bg_pane_g2

0x33e5,	// (0x00077616) wml_button_bg_pane_g3

0x33ed,	// (0x0007761e) wml_button_bg_pane_g4

0x33f5,	// (0x00077626) wml_button_bg_pane_g5

0x33fd,	// (0x0007762e) wml_button_bg_pane_g6

0x3405,	// (0x00077636) wml_button_bg_pane_g7

0x340d,	// (0x0007763e) wml_button_bg_pane_g8

0x3415,	// (0x00077646) wml_button_bg_pane_g9

0x0008,

0xf297,	// (0x000834c8) wml_button_bg_pane_g

0x341d,	// (0x0007764e) bg_list_pane_cp02

0x3425,	// (0x00077656) mce_header_pane_ParamLimits

0x3425,	// (0x00077656) mce_header_pane

0x343b,	// (0x0007766c) mce_icon_pane

0x343b,	// (0x0007766c) mce_image_pane

0x3444,	// (0x00077675) mce_text_pane_ParamLimits

0x3444,	// (0x00077675) mce_text_pane

0x3457,	// (0x00077688) scroll_pane_cp03

0x32f2,	// (0x00077523) scroll_pane_cp04

0x3461,	// (0x00077692) scroll_pane_cp05_ParamLimits

0x3461,	// (0x00077692) scroll_pane_cp05

0x346d,	// (0x0007769e) mce_header_field_pane_ParamLimits

0x346d,	// (0x0007769e) mce_header_field_pane

0x3484,	// (0x000776b5) mce_header_field_pane_2_ParamLimits

0x3484,	// (0x000776b5) mce_header_field_pane_2

0x349a,	// (0x000776cb) mce_header_field_pane_3

0x34a2,	// (0x000776d3) list_single_mce_message_pane_ParamLimits

0x34a2,	// (0x000776d3) list_single_mce_message_pane

0x34b7,	// (0x000776e8) list_single_mce_smart_pane_ParamLimits

0x34b7,	// (0x000776e8) list_single_mce_smart_pane

0x34d7,	// (0x00077708) input_focus_pane_cp03

0x34e0,	// (0x00077711) list_header_data_pane

0x34e8,	// (0x00077719) mce_header_field_pane_t1

0x34f8,	// (0x00077729) list_single_mce_header_pane_ParamLimits

0x34f8,	// (0x00077729) list_single_mce_header_pane

0x350c,	// (0x0007773d) list_single_mce_header_pane_t1

0x351b,	// (0x0007774c) list_single_mce_message_pane_g1

0x3523,	// (0x00077754) list_single_mce_message_pane_t1

0x354f,	// (0x00077780) bg_cale_heading_pane_cp01_ParamLimits

0x354f,	// (0x00077780) bg_cale_heading_pane_cp01

0x3572,	// (0x000777a3) bg_cale_pane_cp02_ParamLimits

0x3572,	// (0x000777a3) bg_cale_pane_cp02

0x3595,	// (0x000777c6) cale_month_corner_pane

0x35ab,	// (0x000777dc) cale_month_day_heading_pane_ParamLimits

0x35ab,	// (0x000777dc) cale_month_day_heading_pane

0x35de,	// (0x0007780f) cale_month_pane_g1_ParamLimits

0x35de,	// (0x0007780f) cale_month_pane_g1

0x35fa,	// (0x0007782b) cale_month_pane_g2_ParamLimits

0x35fa,	// (0x0007782b) cale_month_pane_g2

0x3615,	// (0x00077846) cale_month_pane_g3_ParamLimits

0x3615,	// (0x00077846) cale_month_pane_g3

0x3641,	// (0x00077872) cale_month_pane_g4_ParamLimits

0x3641,	// (0x00077872) cale_month_pane_g4

0x366d,	// (0x0007789e) cale_month_pane_g5_ParamLimits

0x366d,	// (0x0007789e) cale_month_pane_g5

0x36a1,	// (0x000778d2) cale_month_pane_g6_ParamLimits

0x36a1,	// (0x000778d2) cale_month_pane_g6

0x36dd,	// (0x0007790e) cale_month_pane_g7_ParamLimits

0x36dd,	// (0x0007790e) cale_month_pane_g7

0x3719,	// (0x0007794a) cale_month_pane_g8_ParamLimits

0x3719,	// (0x0007794a) cale_month_pane_g8

0x3755,	// (0x00077986) cale_month_pane_g9_ParamLimits

0x3755,	// (0x00077986) cale_month_pane_g9

0x378f,	// (0x000779c0) cale_month_pane_g10_ParamLimits

0x378f,	// (0x000779c0) cale_month_pane_g10

0x37c9,	// (0x000779fa) cale_month_pane_g11_ParamLimits

0x37c9,	// (0x000779fa) cale_month_pane_g11

0x3803,	// (0x00077a34) cale_month_pane_g12_ParamLimits

0x3803,	// (0x00077a34) cale_month_pane_g12

0x383d,	// (0x00077a6e) cale_month_pane_g13_ParamLimits

0x383d,	// (0x00077a6e) cale_month_pane_g13

0x000c,

0xf2aa,	// (0x000834db) cale_month_pane_g_ParamLimits

0xf2aa,	// (0x000834db) cale_month_pane_g

0x3889,	// (0x00077aba) cale_month_week_pane

0x389c,	// (0x00077acd) grid_cale_month_pane_ParamLimits

0x389c,	// (0x00077acd) grid_cale_month_pane

0x38ca,	// (0x00077afb) cale_month_day_heading_pane_t1

0x3928,	// (0x00077b59) cale_month_day_heading_pane_t2

0x398d,	// (0x00077bbe) cale_month_day_heading_pane_t3

0x39f2,	// (0x00077c23) cale_month_day_heading_pane_t4

0x3a57,	// (0x00077c88) cale_month_day_heading_pane_t5

0x3acc,	// (0x00077cfd) cale_month_day_heading_pane_t6

0x3b41,	// (0x00077d72) cale_month_day_heading_pane_t7

0x0006,

0xf2c5,	// (0x000834f6) cale_month_day_heading_pane_t

0x28a1,	// (0x00076ad2) bg_cale_side_pane_cp01

0x3bb6,	// (0x00077de7) cale_month_week_pane_t1

0x3bcd,	// (0x00077dfe) cale_month_week_pane_t2

0x3be4,	// (0x00077e15) cale_month_week_pane_t3

0x3bfb,	// (0x00077e2c) cale_month_week_pane_t4

0x3c12,	// (0x00077e43) cale_month_week_pane_t5

0x3c29,	// (0x00077e5a) cale_month_week_pane_t6

0x0005,

0xf2d4,	// (0x00083505) cale_month_week_pane_t

0x3c40,	// (0x00077e71) cell_cale_month_pane_ParamLimits

0x3c40,	// (0x00077e71) cell_cale_month_pane

0xabcf,	// (0x0007ee00) cell_cale_month_pane_g1

0x3d16,	// (0x00077f47) cell_cale_month_pane_t1_ParamLimits

0x3d16,	// (0x00077f47) cell_cale_month_pane_t1

0x29a0,	// (0x00076bd1) grid_highlight_pane_cp08

0x23b5,	// (0x000765e6) main_smil_g1

0x3d32,	// (0x00077f63) smil_status_pane

0x3d3b,	// (0x00077f6c) smil_text_pane

0xbb35,	// (0x0007fd66) bg_popup_call3_rect_pane_g8

0xbb3d,	// (0x0007fd6e) bg_popup_call3_rect_pane_g9

0x0008,

0xf58d,	// (0x000837be) bg_popup_call3_rect_pane_g

0xbdb7,	// (0x0007ffe8) smil_status_volume_pane_g1

0x3d4f,	// (0x00077f80) smil_status_pane_t1

0xbdea,	// (0x0008001b) volume_smil_pane

0x3d66,	// (0x00077f97) list_smil_text_pane

0x3d70,	// (0x00077fa1) scroll_pane_cp011

0x3d7b,	// (0x00077fac) smil_text_list_pane_t1_ParamLimits

0x3d7b,	// (0x00077fac) smil_text_list_pane_t1

0xabdb,	// (0x0007ee0c) aid_volume_smil_ParamLimits

0xabdb,	// (0x0007ee0c) aid_volume_smil

0x23b5,	// (0x000765e6) smil_volume_pane_g1

0x23b5,	// (0x000765e6) smil_volume_pane_g2

0x0001,

0xf2f4,	// (0x00083525) smil_volume_pane_g

0x2291,	// (0x000764c2) listscroll_cale_day_pane

0x3dc1,	// (0x00077ff2) bg_cale_pane

0x3dd9,	// (0x0007800a) list_cale_pane

0x3dea,	// (0x0007801b) scroll_pane_cp09

0x3dfb,	// (0x0007802c) cale_bg_pane_g1

0x3e03,	// (0x00078034) cale_bg_pane_g2

0x3e0b,	// (0x0007803c) cale_bg_pane_g3

0x3e13,	// (0x00078044) cale_bg_pane_g4

0x3e1b,	// (0x0007804c) cale_bg_pane_g5

0x3e23,	// (0x00078054) cale_bg_pane_g6

0x3e2b,	// (0x0007805c) cale_bg_pane_g7

0x3e33,	// (0x00078064) cale_bg_pane_g8

0x3e3b,	// (0x0007806c) cale_bg_pane_g9

0x0008,

0xf2f9,	// (0x0008352a) cale_bg_pane_g

0x3e43,	// (0x00078074) list_cale_time_pane_ParamLimits

0x3e43,	// (0x00078074) list_cale_time_pane

0x3e56,	// (0x00078087) list_cale_time_pane_g1_ParamLimits

0x3e56,	// (0x00078087) list_cale_time_pane_g1

0x3e62,	// (0x00078093) list_cale_time_pane_g2_ParamLimits

0x3e62,	// (0x00078093) list_cale_time_pane_g2

0x3e6f,	// (0x000780a0) list_cale_time_pane_g3_ParamLimits

0x3e6f,	// (0x000780a0) list_cale_time_pane_g3

0x3e7d,	// (0x000780ae) list_cale_time_pane_g4_ParamLimits

0x3e7d,	// (0x000780ae) list_cale_time_pane_g4

0x3e8b,	// (0x000780bc) list_cale_time_pane_g5_ParamLimits

0x3e8b,	// (0x000780bc) list_cale_time_pane_g5

0x0005,

0xf30c,	// (0x0008353d) list_cale_time_pane_g_ParamLimits

0xf30c,	// (0x0008353d) list_cale_time_pane_g

0x3ea6,	// (0x000780d7) list_cale_time_pane_t1_ParamLimits

0x3ea6,	// (0x000780d7) list_cale_time_pane_t1

0x3ece,	// (0x000780ff) list_cale_time_pane_t2_ParamLimits

0x3ece,	// (0x000780ff) list_cale_time_pane_t2

0x45a4,	// (0x000787d5) aid_blid_cardinal_pane

0x45ee,	// (0x0007881f) compass_pane_t4

0x3ef6,	// (0x00078127) list_cale_time_pane_t4_ParamLimits

0x3ef6,	// (0x00078127) list_cale_time_pane_t4

0x45fc,	// (0x0007882d) compass_pane_t5

0x460a,	// (0x0007883b) compass_pane_t6

0x4618,	// (0x00078849) compass_pane_t7

0x46ae,	// (0x000788df) navi_pane_cc_t1

0x48c7,	// (0x00078af8) aid_phob_thumbnail_center_pane

0x4f01,	// (0x00079132) main_postcard_pane_g4_ParamLimits

0x0002,

0xf319,	// (0x0008354a) list_cale_time_pane_t_ParamLimits

0xf319,	// (0x0008354a) list_cale_time_pane_t

0x18ef,	// (0x00075b20) bg_popup_window_pane_cp02_ParamLimits

0x18ef,	// (0x00075b20) bg_popup_window_pane_cp02

0x3f1e,	// (0x0007814f) heading_pane_cp01_ParamLimits

0x3f1e,	// (0x0007814f) heading_pane_cp01

0x3f2a,	// (0x0007815b) loc_req_pane_ParamLimits

0x3f2a,	// (0x0007815b) loc_req_pane

0x3f3a,	// (0x0007816b) loc_type_pane_ParamLimits

0x3f3a,	// (0x0007816b) loc_type_pane

0x3f4c,	// (0x0007817d) loc_type_pane_t1_ParamLimits

0x3f4c,	// (0x0007817d) loc_type_pane_t1

0x3f5e,	// (0x0007818f) loc_type_pane_t2_ParamLimits

0x3f5e,	// (0x0007818f) loc_type_pane_t2

0x3f70,	// (0x000781a1) loc_type_pane_t3_ParamLimits

0x3f70,	// (0x000781a1) loc_type_pane_t3

0x0002,

0xf320,	// (0x00083551) loc_type_pane_t_ParamLimits

0xf320,	// (0x00083551) loc_type_pane_t

0x3f82,	// (0x000781b3) list_loc_req_pane

0x3f8c,	// (0x000781bd) scroll_pane_cp012

0x3f97,	// (0x000781c8) list_single_loc_request_popup_menu_pane_ParamLimits

0x3f97,	// (0x000781c8) list_single_loc_request_popup_menu_pane

0x3fa4,	// (0x000781d5) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x3fa4,	// (0x000781d5) list_single_loc_request_popup_menu_pane_g1

0x3fb0,	// (0x000781e1) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x3fb0,	// (0x000781e1) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf327,	// (0x00083558) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf327,	// (0x00083558) list_single_loc_request_popup_menu_pane_g

0x3fbc,	// (0x000781ed) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x3fbc,	// (0x000781ed) list_single_loc_request_popup_menu_pane_t1

0x1f17,	// (0x00076148) bg_popup_window_pane_cp03_ParamLimits

0x1f17,	// (0x00076148) bg_popup_window_pane_cp03

0x3fd2,	// (0x00078203) heading_loc_req_pane_ParamLimits

0x3fd2,	// (0x00078203) heading_loc_req_pane

0x3fde,	// (0x0007820f) popup_dyc_status_message_window_g1_ParamLimits

0x3fde,	// (0x0007820f) popup_dyc_status_message_window_g1

0x3ff2,	// (0x00078223) popup_dyc_status_message_window_t1_ParamLimits

0x3ff2,	// (0x00078223) popup_dyc_status_message_window_t1

0x4007,	// (0x00078238) popup_dyc_status_message_window_t2_ParamLimits

0x4007,	// (0x00078238) popup_dyc_status_message_window_t2

0x401c,	// (0x0007824d) popup_dyc_status_message_window_t3_ParamLimits

0x401c,	// (0x0007824d) popup_dyc_status_message_window_t3

0x0002,

0xf32c,	// (0x0008355d) popup_dyc_status_message_window_t_ParamLimits

0xf32c,	// (0x0008355d) popup_dyc_status_message_window_t

0x1cbc,	// (0x00075eed) bg_heading_pane_cp01

0x4038,	// (0x00078269) heading_loc_req_pane_g1

0x4040,	// (0x00078271) heading_loc_req_pane_g2

0x4048,	// (0x00078279) heading_loc_req_pane_g3

0x0002,

0xf333,	// (0x00083564) heading_loc_req_pane_g

0x4050,	// (0x00078281) heading_loc_req_pane_t1

0x4077,	// (0x000782a8) bg_popup_sub_pane_cp01_ParamLimits

0x4077,	// (0x000782a8) bg_popup_sub_pane_cp01

0x4085,	// (0x000782b6) popup_cale_events_window_g1_ParamLimits

0x4085,	// (0x000782b6) popup_cale_events_window_g1

0x40a5,	// (0x000782d6) popup_cale_events_window_g2_ParamLimits

0x40a5,	// (0x000782d6) popup_cale_events_window_g2

0x0001,

0xf367,	// (0x00083598) popup_cale_events_window_g_ParamLimits

0xf367,	// (0x00083598) popup_cale_events_window_g

0x40c5,	// (0x000782f6) popup_cale_events_window_t1_ParamLimits

0x40c5,	// (0x000782f6) popup_cale_events_window_t1

0x40d7,	// (0x00078308) popup_cale_events_window_t2_ParamLimits

0x40d7,	// (0x00078308) popup_cale_events_window_t2

0x4115,	// (0x00078346) popup_cale_events_window_t3_ParamLimits

0x4115,	// (0x00078346) popup_cale_events_window_t3

0x414f,	// (0x00078380) popup_cale_events_window_t4_ParamLimits

0x414f,	// (0x00078380) popup_cale_events_window_t4

0x0003,

0xf36c,	// (0x0008359d) popup_cale_events_window_t_ParamLimits

0xf36c,	// (0x0008359d) popup_cale_events_window_t

0x4185,	// (0x000783b6) call_type_pane

0x4195,	// (0x000783c6) popup_call_status_window_g1

0x41a9,	// (0x000783da) popup_call_status_window_g2

0x41bd,	// (0x000783ee) popup_call_status_window_g3

0x0002,

0xf375,	// (0x000835a6) popup_call_status_window_g

0x41cc,	// (0x000783fd) call_type_pane_g1

0x41d5,	// (0x00078406) call_type_pane_g2

0x0001,

0xf37c,	// (0x000835ad) call_type_pane_g

0x1cbc,	// (0x00075eed) bg_popup_sub_pane_cp02

0x41de,	// (0x0007840f) listscroll_popup_wml_pane

0x41e6,	// (0x00078417) list_wml_pane

0x41f0,	// (0x00078421) scroll_pane_cp013

0x41fb,	// (0x0007842c) list_single_graphic_popup_wml_pane_ParamLimits

0x41fb,	// (0x0007842c) list_single_graphic_popup_wml_pane

0x23b5,	// (0x000765e6) list_single_graphic_popup_wml_pane_g1

0x420f,	// (0x00078440) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf381,	// (0x000835b2) list_single_graphic_popup_wml_pane_g

0x4217,	// (0x00078448) list_single_graphic_popup_wml_pane_t1

0x422d,	// (0x0007845e) aid_call_pane

0x1f0f,	// (0x00076140) popup_clock_analogue_window_g1

0x1f0f,	// (0x00076140) popup_clock_analogue_window_g2

0xac72,	// (0x0007eea3) popup_clock_analogue_window_g3

0xac72,	// (0x0007eea3) popup_clock_analogue_window_g4

0x23b5,	// (0x000765e6) popup_clock_analogue_window_g5

0x0004,

0xf386,	// (0x000835b7) popup_clock_analogue_window_g

0xac7a,	// (0x0007eeab) popup_clock_analogue_window_t1

0xac88,	// (0x0007eeb9) clock_digital_number_pane_ParamLimits

0xac88,	// (0x0007eeb9) clock_digital_number_pane

0xac94,	// (0x0007eec5) clock_digital_number_pane_cp02_ParamLimits

0xac94,	// (0x0007eec5) clock_digital_number_pane_cp02

0xaca0,	// (0x0007eed1) clock_digital_number_pane_cp03_ParamLimits

0xaca0,	// (0x0007eed1) clock_digital_number_pane_cp03

0xacac,	// (0x0007eedd) clock_digital_number_pane_cp04_ParamLimits

0xacac,	// (0x0007eedd) clock_digital_number_pane_cp04

0xacbc,	// (0x0007eeed) clock_digital_separator_pane_ParamLimits

0xacbc,	// (0x0007eeed) clock_digital_separator_pane

0xacc8,	// (0x0007eef9) popup_clock_digital_window_t1

0x23b5,	// (0x000765e6) clock_digital_number_pane_g1

0x23b5,	// (0x000765e6) clock_digital_number_pane_g2

0x0001,

0xf2f4,	// (0x00083525) clock_digital_number_pane_g

0x23b5,	// (0x000765e6) clock_digital_separator_pane_g1

0x23b5,	// (0x000765e6) clock_digital_separator_pane_g2

0x0001,

0xf2f4,	// (0x00083525) clock_digital_separator_pane_g

0x1cbc,	// (0x00075eed) bg_popup_window_pane_cp04

0x4235,	// (0x00078466) heading_pane_cp03

0x423d,	// (0x0007846e) listscroll_popup_gms_pane

0x4245,	// (0x00078476) grid_large_graphic_popup_pane

0x424f,	// (0x00078480) listscroll_popup_gms_pane_g1

0x4257,	// (0x00078488) listscroll_popup_gms_pane_g2

0x0001,

0xf391,	// (0x000835c2) listscroll_popup_gms_pane_g

0x32f2,	// (0x00077523) scroll_pane_cp014

0x425f,	// (0x00078490) cell_large_graphic_popup_pane_ParamLimits

0x425f,	// (0x00078490) cell_large_graphic_popup_pane

0x4277,	// (0x000784a8) cell_large_graphic_popup_pane_g1_ParamLimits

0x4277,	// (0x000784a8) cell_large_graphic_popup_pane_g1

0x4283,	// (0x000784b4) cell_large_graphic_popup_pane_g2_ParamLimits

0x4283,	// (0x000784b4) cell_large_graphic_popup_pane_g2

0x428f,	// (0x000784c0) cell_large_graphic_popup_pane_g3_ParamLimits

0x428f,	// (0x000784c0) cell_large_graphic_popup_pane_g3

0x429c,	// (0x000784cd) cell_large_graphic_popup_pane_g4_ParamLimits

0x429c,	// (0x000784cd) cell_large_graphic_popup_pane_g4

0x0003,

0xf396,	// (0x000835c7) cell_large_graphic_popup_pane_g_ParamLimits

0xf396,	// (0x000835c7) cell_large_graphic_popup_pane_g

0x42ac,	// (0x000784dd) grid_highlight_pane_cp010

0x23b5,	// (0x000765e6) bg_popup_call_pane_g1

0x42b6,	// (0x000784e7) list_single_graphic_popup_conf_pane_ParamLimits

0x42b6,	// (0x000784e7) list_single_graphic_popup_conf_pane

0x42c9,	// (0x000784fa) list_highlight_pane_cp01

0x42d2,	// (0x00078503) list_single_graphic_popup_conf_pane_g1

0x42da,	// (0x0007850b) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf39f,	// (0x000835d0) list_single_graphic_popup_conf_pane_g

0x42e2,	// (0x00078513) list_single_graphic_popup_conf_pane_t1

0x42f0,	// (0x00078521) linegrid_cams_pane_g1

0x42f9,	// (0x0007852a) linegrid_cams_pane_g2

0x29f8,	// (0x00076c29) linegrid_cams_pane_g3

0x4302,	// (0x00078533) linegrid_cams_pane_g4

0x430b,	// (0x0007853c) linegrid_cams_pane_g5

0x4314,	// (0x00078545) linegrid_cams_pane_g6

0x2a01,	// (0x00076c32) linegrid_cams_pane_g7

0x0006,

0xf3a4,	// (0x000835d5) linegrid_cams_pane_g

0x431f,	// (0x00078550) popup_clock_analogue_window

0x431f,	// (0x00078550) popup_clock_digital_window

0x1cbc,	// (0x00075eed) popup_phob_thumbnail_window

0x23b5,	// (0x000765e6) call_video_uplink_pane_g1

0x4328,	// (0x00078559) call_video_uplink_pane_g2

0x0001,

0xf3b3,	// (0x000835e4) call_video_uplink_pane_g

0x4330,	// (0x00078561) video_uplink_pane

0x4338,	// (0x00078569) mce_image_pane_g1

0x4342,	// (0x00078573) mce_image_pane_g2

0x434c,	// (0x0007857d) mce_image_pane_g3

0x4354,	// (0x00078585) mce_image_pane_g4

0x435c,	// (0x0007858d) mce_image_pane_g5

0x0004,

0xf3b8,	// (0x000835e9) mce_image_pane_g

0x4364,	// (0x00078595) control_top_pane_stacon_cp01_ParamLimits

0x4364,	// (0x00078595) control_top_pane_stacon_cp01

0x4378,	// (0x000785a9) uni_indicator_pane_stacon_cp01_ParamLimits

0x4378,	// (0x000785a9) uni_indicator_pane_stacon_cp01

0x4389,	// (0x000785ba) bg_popup_sub_pane_cp03

0x4393,	// (0x000785c4) chi_dic_find_pane

0x439b,	// (0x000785cc) listscroll_chi_dic_pane

0x43a4,	// (0x000785d5) main_pane_chidic_g1

0x43b7,	// (0x000785e8) chi_dic_find_pane_t1

0x43c5,	// (0x000785f6) find_chidic_pane

0x43ce,	// (0x000785ff) chi_dic_list_pane_ParamLimits

0x43ce,	// (0x000785ff) chi_dic_list_pane

0x43df,	// (0x00078610) scroll_pane_cp020

0x43e7,	// (0x00078618) find_chidic_pane_t1

0x1cbc,	// (0x00075eed) input_focus_pane_cp06

0x43f6,	// (0x00078627) list_chi_dic_pane_ParamLimits

0x43f6,	// (0x00078627) list_chi_dic_pane

0x4408,	// (0x00078639) list_chi_dic_pane_t1_ParamLimits

0x4408,	// (0x00078639) list_chi_dic_pane_t1

0x1cbc,	// (0x00075eed) list_highlight_pane_cp020

0x441b,	// (0x0007864c) bg_cale_heading_pane_g1

0x4423,	// (0x00078654) bg_cale_heading_pane_g2

0x442b,	// (0x0007865c) bg_cale_heading_pane_g3

0x4433,	// (0x00078664) bg_cale_heading_pane_g4

0x443d,	// (0x0007866e) bg_cale_heading_pane_g5

0x4447,	// (0x00078678) bg_cale_heading_pane_g6

0x444f,	// (0x00078680) bg_cale_heading_pane_g7

0x4457,	// (0x00078688) bg_cale_heading_pane_g8

0x4461,	// (0x00078692) bg_cale_heading_pane_g9

0x0008,

0xf3c3,	// (0x000835f4) bg_cale_heading_pane_g

0x441b,	// (0x0007864c) bg_cale_side_pane_g1

0x446b,	// (0x0007869c) bg_cale_side_pane_g2

0x4473,	// (0x000786a4) bg_cale_side_pane_g3

0x447b,	// (0x000786ac) bg_cale_side_pane_g4

0x4483,	// (0x000786b4) bg_cale_side_pane_g5

0x448b,	// (0x000786bc) bg_cale_side_pane_g6

0x4493,	// (0x000786c4) bg_cale_side_pane_g7

0x449b,	// (0x000786cc) bg_cale_side_pane_g8

0x44a3,	// (0x000786d4) bg_cale_side_pane_g9

0x0008,

0xf3d6,	// (0x00083607) bg_cale_side_pane_g

0x44ab,	// (0x000786dc) popup_call_status_window_ParamLimits

0x44ab,	// (0x000786dc) popup_call_status_window

0x44f4,	// (0x00078725) stacon_top_pane

0x44fc,	// (0x0007872d) status_pane_ParamLimits

0x44fc,	// (0x0007872d) status_pane

0x4511,	// (0x00078742) status_small_pane

0x4519,	// (0x0007874a) control_pane

0x1cbc,	// (0x00075eed) stacon_bottom_pane

0x4521,	// (0x00078752) list_single_mce_smart_pane_t1_ParamLimits

0x4521,	// (0x00078752) list_single_mce_smart_pane_t1

0x4534,	// (0x00078765) list_single_mce_smart_pane_t2_ParamLimits

0x4534,	// (0x00078765) list_single_mce_smart_pane_t2

0x0001,

0xf3e9,	// (0x0008361a) list_single_mce_smart_pane_t_ParamLimits

0xf3e9,	// (0x0008361a) list_single_mce_smart_pane_t

0x4553,	// (0x00078784) compass_pane

0x455c,	// (0x0007878d) main_location2_pane_t1

0x456e,	// (0x0007879f) main_location2_pane_t2

0x4580,	// (0x000787b1) main_location2_pane_t3

0x0003,

0xf3ee,	// (0x0008361f) main_location2_pane_t

0x45c4,	// (0x000787f5) compass_pane_g1_ParamLimits

0x45c4,	// (0x000787f5) compass_pane_g1

0x45d0,	// (0x00078801) compass_pane_t1

0x45df,	// (0x00078810) compass_pane_t2

0x0005,

0xf3f7,	// (0x00083628) compass_pane_t

0x4626,	// (0x00078857) text_secondary_cp61

0x46a5,	// (0x000788d6) navi_pane_cams_g5

0x471f,	// (0x00078950) navi_pane_im_t1

0x472d,	// (0x0007895e) navi_pane_mp_g1_ParamLimits

0x472d,	// (0x0007895e) navi_pane_mp_g1

0x4741,	// (0x00078972) navi_pane_mp_g2_ParamLimits

0x4741,	// (0x00078972) navi_pane_mp_g2

0x474d,	// (0x0007897e) navi_pane_mp_g3_ParamLimits

0x474d,	// (0x0007897e) navi_pane_mp_g3

0x0002,

0xf40b,	// (0x0008363c) navi_pane_mp_g_ParamLimits

0xf40b,	// (0x0008363c) navi_pane_mp_g

0x4759,	// (0x0007898a) navi_pane_mp_t1

0x4767,	// (0x00078998) navi_pane_mp_t2

0x0002,

0xf412,	// (0x00083643) navi_pane_mp_t

0x4810,	// (0x00078a41) navi_pane_vt_g1

0x4759,	// (0x0007898a) navi_pane_vt_t1

0x4818,	// (0x00078a49) navi_slider_pane

0x4820,	// (0x00078a51) zooming_pane

0x4828,	// (0x00078a59) navi_slider_pane_g1

0xace5,	// (0x0007ef16) navi_slider_pane_g2

0x0006,

0xf419,	// (0x0008364a) navi_slider_pane_g

0x484c,	// (0x00078a7d) aid_levels_zoom

0x4854,	// (0x00078a85) zooming_pane_g1

0x485c,	// (0x00078a8d) zooming_pane_g2

0x485c,	// (0x00078a8d) zooming_pane_g3

0x0002,

0xf428,	// (0x00083659) zooming_pane_g

0x4864,	// (0x00078a95) level_10_zoom

0x486d,	// (0x00078a9e) level_11_zoom

0x4876,	// (0x00078aa7) level_1_zoom

0x487f,	// (0x00078ab0) level_2_zoom

0x4888,	// (0x00078ab9) level_3_zoom

0x4891,	// (0x00078ac2) level_4_zoom

0x489a,	// (0x00078acb) level_5_zoom

0x48a3,	// (0x00078ad4) level_6_zoom

0x48ac,	// (0x00078add) level_7_zoom

0x48b5,	// (0x00078ae6) level_8_zoom

0x48be,	// (0x00078aef) level_9_zoom

0x48cf,	// (0x00078b00) popup_phob_thumbnail_window_g1

0x48d7,	// (0x00078b08) popup_phob_thumbnail_window_g2

0x0001,

0xf42f,	// (0x00083660) popup_phob_thumbnail_window_g

0xbc97,	// (0x0007fec8) level_1_location

0xbc9f,	// (0x0007fed0) level_2_location

0xbca7,	// (0x0007fed8) level_3_location

0xbcaf,	// (0x0007fee0) level_4_location

0x4820,	// (0x00078a51) level_5_location

0x48df,	// (0x00078b10) mce_icon_pane_g1

0x48e7,	// (0x00078b18) mce_icon_pane_g2

0x0001,

0xf434,	// (0x00083665) mce_icon_pane_g

0x48ef,	// (0x00078b20) main_mup_pane_g1_ParamLimits

0x48ef,	// (0x00078b20) main_mup_pane_g1

0x4905,	// (0x00078b36) main_mup_pane_g2_ParamLimits

0x4905,	// (0x00078b36) main_mup_pane_g2

0x491d,	// (0x00078b4e) main_mup_pane_g3_ParamLimits

0x491d,	// (0x00078b4e) main_mup_pane_g3

0x4935,	// (0x00078b66) main_mup_pane_g4_ParamLimits

0x4935,	// (0x00078b66) main_mup_pane_g4

0x494d,	// (0x00078b7e) main_mup_pane_g5_ParamLimits

0x494d,	// (0x00078b7e) main_mup_pane_g5

0x4969,	// (0x00078b9a) main_mup_pane_g6_ParamLimits

0x4969,	// (0x00078b9a) main_mup_pane_g6

0x4981,	// (0x00078bb2) main_mup_pane_g7_ParamLimits

0x4981,	// (0x00078bb2) main_mup_pane_g7

0x4999,	// (0x00078bca) main_mup_pane_g8_ParamLimits

0x4999,	// (0x00078bca) main_mup_pane_g8

0x49b3,	// (0x00078be4) main_mup_pane_g9_ParamLimits

0x49b3,	// (0x00078be4) main_mup_pane_g9

0x49cd,	// (0x00078bfe) main_mup_pane_g10_ParamLimits

0x49cd,	// (0x00078bfe) main_mup_pane_g10

0x49e7,	// (0x00078c18) main_mup_pane_g11_ParamLimits

0x49e7,	// (0x00078c18) main_mup_pane_g11

0x49fb,	// (0x00078c2c) main_mup_pane_g12_ParamLimits

0x49fb,	// (0x00078c2c) main_mup_pane_g12

0x4a11,	// (0x00078c42) main_mup_pane_g13_ParamLimits

0x4a11,	// (0x00078c42) main_mup_pane_g13

0x000c,

0xf439,	// (0x0008366a) main_mup_pane_g_ParamLimits

0xf439,	// (0x0008366a) main_mup_pane_g

0x4a25,	// (0x00078c56) main_mup_pane_t1_ParamLimits

0x4a25,	// (0x00078c56) main_mup_pane_t1

0x4a3f,	// (0x00078c70) main_mup_pane_t2_ParamLimits

0x4a3f,	// (0x00078c70) main_mup_pane_t2

0x4a57,	// (0x00078c88) main_mup_pane_t3_ParamLimits

0x4a57,	// (0x00078c88) main_mup_pane_t3

0x4a6f,	// (0x00078ca0) main_mup_pane_t4_ParamLimits

0x4a6f,	// (0x00078ca0) main_mup_pane_t4

0x4a8d,	// (0x00078cbe) main_mup_pane_t5_ParamLimits

0x4a8d,	// (0x00078cbe) main_mup_pane_t5

0x4aa2,	// (0x00078cd3) main_mup_pane_t6_ParamLimits

0x4aa2,	// (0x00078cd3) main_mup_pane_t6

0x0005,

0xf454,	// (0x00083685) main_mup_pane_t_ParamLimits

0xf454,	// (0x00083685) main_mup_pane_t

0x4ab4,	// (0x00078ce5) mup_progress_pane_ParamLimits

0x4ab4,	// (0x00078ce5) mup_progress_pane

0x4ac0,	// (0x00078cf1) mup_visualizer_pane_ParamLimits

0x4ac0,	// (0x00078cf1) mup_visualizer_pane

0x4af0,	// (0x00078d21) mup_volume_pane_ParamLimits

0x4af0,	// (0x00078d21) mup_volume_pane

0x4b0e,	// (0x00078d3f) mup_visualizer_pane_g1_ParamLimits

0x4b0e,	// (0x00078d3f) mup_visualizer_pane_g1

0x4b0e,	// (0x00078d3f) mup_visualizer_pane_g2_ParamLimits

0x4b0e,	// (0x00078d3f) mup_visualizer_pane_g2

0x45c4,	// (0x000787f5) mup_visualizer_pane_g3_ParamLimits

0x45c4,	// (0x000787f5) mup_visualizer_pane_g3

0x0002,

0xf461,	// (0x00083692) mup_visualizer_pane_g_ParamLimits

0xf461,	// (0x00083692) mup_visualizer_pane_g

0x23b5,	// (0x000765e6) mup_volume_pane_g1

0x4b24,	// (0x00078d55) mup_volume_pane_g2

0x0001,

0xf468,	// (0x00083699) mup_volume_pane_g

0x23b5,	// (0x000765e6) mup_progress_pane_g1

0x4b2d,	// (0x00078d5e) mup_progress_pane_g2

0x4b36,	// (0x00078d67) mup_progress_pane_g3

0x0002,

0xf46d,	// (0x0008369e) mup_progress_pane_g

0x1cbc,	// (0x00075eed) bg_popup_window_pane_cp05

0x4b3f,	// (0x00078d70) heading_pane_cp02_ParamLimits

0x4b3f,	// (0x00078d70) heading_pane_cp02

0x4b59,	// (0x00078d8a) list_popup_blid_pane

0x4b61,	// (0x00078d92) list_blid_sat_info_pane_ParamLimits

0x4b61,	// (0x00078d92) list_blid_sat_info_pane

0x4b74,	// (0x00078da5) list_blid_sat_info_pane_g1

0x4b7c,	// (0x00078dad) list_blid_sat_info_pane_t1

0x4c82,	// (0x00078eb3) mup_equalizer_pane_ParamLimits

0x4c82,	// (0x00078eb3) mup_equalizer_pane

0x4c9b,	// (0x00078ecc) mup_equalizer_pane_cp1_ParamLimits

0x4c9b,	// (0x00078ecc) mup_equalizer_pane_cp1

0x4cb8,	// (0x00078ee9) mup_equalizer_pane_cp2_ParamLimits

0x4cb8,	// (0x00078ee9) mup_equalizer_pane_cp2

0x4cd5,	// (0x00078f06) mup_equalizer_pane_cp3_ParamLimits

0x4cd5,	// (0x00078f06) mup_equalizer_pane_cp3

0x4cf6,	// (0x00078f27) mup_equalizer_pane_cp4_ParamLimits

0x4cf6,	// (0x00078f27) mup_equalizer_pane_cp4

0x4d17,	// (0x00078f48) mup_equalizer_pane_cp5

0x4d2b,	// (0x00078f5c) mup_equalizer_pane_cp6

0x4d3f,	// (0x00078f70) mup_equalizer_pane_cp7

0xbbb5,	// (0x0007fde6) bg_popup_call_poc_act_pane_g9

0xbbbd,	// (0x0007fdee) bg_popup_call_poc_act_pane_g10

0xbbc5,	// (0x0007fdf6) bg_popup_call_poc_act_pane_g11

0x000a,

0x1f17,	// (0x00076148) mup_scale_pane

0x23b5,	// (0x000765e6) mup_scale_pane_g1

0x4d53,	// (0x00078f84) mup_scale_pane_g2

0x0006,

0xf489,	// (0x000836ba) mup_scale_pane_g

0x4d89,	// (0x00078fba) msg_data_pane

0x4d91,	// (0x00078fc2) scroll_pane_cp017

0x0c18,	// (0x00074e49) bg_list_pane_cp04_ParamLimits

0x0c18,	// (0x00074e49) bg_list_pane_cp04

0x4d99,	// (0x00078fca) msg_data_pane_g1

0x4da1,	// (0x00078fd2) msg_data_pane_g2

0x4dab,	// (0x00078fdc) msg_data_pane_g3

0x4db3,	// (0x00078fe4) msg_data_pane_g4

0x4dbb,	// (0x00078fec) msg_data_pane_g5

0x4dc3,	// (0x00078ff4) msg_data_pane_g6

0x4dcb,	// (0x00078ffc) msg_data_pane_g7

0x0006,

0xf498,	// (0x000836c9) msg_data_pane_g

0x0c38,	// (0x00074e69) msg_text_pane_ParamLimits

0x0c38,	// (0x00074e69) msg_text_pane

0x4dd3,	// (0x00079004) qrid_highlight_pane_cp011_ParamLimits

0x4dd3,	// (0x00079004) qrid_highlight_pane_cp011

0x1cbc,	// (0x00075eed) msg_body_pane

0x1cbc,	// (0x00075eed) msg_header_pane

0x4df2,	// (0x00079023) input_focus_pane_cp07

0x0c68,	// (0x00074e99) msg_header_pane_t1_ParamLimits

0x0c68,	// (0x00074e99) msg_header_pane_t1

0x0c7c,	// (0x00074ead) msg_header_pane_t2_ParamLimits

0x0c7c,	// (0x00074ead) msg_header_pane_t2

0x0001,

0xf4ac,	// (0x000836dd) msg_header_pane_t_ParamLimits

0xf4ac,	// (0x000836dd) msg_header_pane_t

0x4e07,	// (0x00079038) msg_body_pane_g1

0x0c8e,	// (0x00074ebf) msg_body_pane_t1_ParamLimits

0x0c8e,	// (0x00074ebf) msg_body_pane_t1

0x0cbf,	// (0x00074ef0) msg_body_pane_t2_ParamLimits

0x0cbf,	// (0x00074ef0) msg_body_pane_t2

0x0cd1,	// (0x00074f02) msg_body_pane_t3_ParamLimits

0x0cd1,	// (0x00074f02) msg_body_pane_t3

0x0002,

0xf4b1,	// (0x000836e2) msg_body_pane_t_ParamLimits

0xf4b1,	// (0x000836e2) msg_body_pane_t

0x4e49,	// (0x0007907a) main_viewer_pane_g1_ParamLimits

0x4e49,	// (0x0007907a) main_viewer_pane_g1

0x4e57,	// (0x00079088) main_viewer_pane_g2_ParamLimits

0x4e57,	// (0x00079088) main_viewer_pane_g2

0x4e65,	// (0x00079096) main_viewer_pane_g3_ParamLimits

0x4e65,	// (0x00079096) main_viewer_pane_g3

0x4e74,	// (0x000790a5) main_viewer_pane_g4_ParamLimits

0x4e74,	// (0x000790a5) main_viewer_pane_g4

0xad0f,	// (0x0007ef40) main_viewer_pane_g5_ParamLimits

0xad0f,	// (0x0007ef40) main_viewer_pane_g5

0xad0f,	// (0x0007ef40) main_viewer_pane_g7_ParamLimits

0xad0f,	// (0x0007ef40) main_viewer_pane_g7

0xad21,	// (0x0007ef52) main_viewer_pane_g8_ParamLimits

0xad21,	// (0x0007ef52) main_viewer_pane_g8

0x0007,

0xf4c1,	// (0x000836f2) main_viewer_pane_g_ParamLimits

0xf4c1,	// (0x000836f2) main_viewer_pane_g

0x4e83,	// (0x000790b4) viewer_content_pane_ParamLimits

0x4e83,	// (0x000790b4) viewer_content_pane

0x4ebe,	// (0x000790ef) main_postcard_pane_g1_ParamLimits

0x4ebe,	// (0x000790ef) main_postcard_pane_g1

0x4ed4,	// (0x00079105) main_postcard_pane_g2_ParamLimits

0x4ed4,	// (0x00079105) main_postcard_pane_g2

0x4eea,	// (0x0007911b) main_postcard_pane_g3_ParamLimits

0x4eea,	// (0x0007911b) main_postcard_pane_g3

0x0005,

0xf4d2,	// (0x00083703) main_postcard_pane_g_ParamLimits

0xf4d2,	// (0x00083703) main_postcard_pane_g

0x4f01,	// (0x00079132) main_postcard_pane_g4

0xbdca,	// (0x0007fffb) smil_status_volume_pane_g2

0x4f44,	// (0x00079175) postcard_pane_ParamLimits

0x4f44,	// (0x00079175) postcard_pane

0x4f86,	// (0x000791b7) postcard_pane_g1_ParamLimits

0x4f86,	// (0x000791b7) postcard_pane_g1

0x4f94,	// (0x000791c5) postcard_pane_g2_ParamLimits

0x4f94,	// (0x000791c5) postcard_pane_g2

0x4fa0,	// (0x000791d1) postcard_pane_g3_ParamLimits

0x4fa0,	// (0x000791d1) postcard_pane_g3

0x4fac,	// (0x000791dd) postcard_pane_g4_ParamLimits

0x4fac,	// (0x000791dd) postcard_pane_g4

0x4fba,	// (0x000791eb) postcard_pane_g5_ParamLimits

0x4fba,	// (0x000791eb) postcard_pane_g5

0x4fcf,	// (0x00079200) postcard_pane_g6_ParamLimits

0x4fcf,	// (0x00079200) postcard_pane_g6

0x4f86,	// (0x000791b7) postcard_pane_g7_ParamLimits

0x4f86,	// (0x000791b7) postcard_pane_g7

0x0006,

0xf4df,	// (0x00083710) postcard_pane_g_ParamLimits

0xf4df,	// (0x00083710) postcard_pane_g

0x4fe3,	// (0x00079214) main_mp2_pane_g1_ParamLimits

0x4fe3,	// (0x00079214) main_mp2_pane_g1

0x4fef,	// (0x00079220) main_mp2_pane_g2_ParamLimits

0x4fef,	// (0x00079220) main_mp2_pane_g2

0x4ffb,	// (0x0007922c) main_mp2_pane_g3_ParamLimits

0x4ffb,	// (0x0007922c) main_mp2_pane_g3

0x0002,

0xf4ee,	// (0x0008371f) main_mp2_pane_g_ParamLimits

0xf4ee,	// (0x0008371f) main_mp2_pane_g

0x5007,	// (0x00079238) main_mp2_pane_t1_ParamLimits

0x5007,	// (0x00079238) main_mp2_pane_t1

0x501c,	// (0x0007924d) main_mp2_pane_t2_ParamLimits

0x501c,	// (0x0007924d) main_mp2_pane_t2

0x502e,	// (0x0007925f) main_mp2_pane_t3_ParamLimits

0x502e,	// (0x0007925f) main_mp2_pane_t3

0x0002,

0xf4f5,	// (0x00083726) main_mp2_pane_t_ParamLimits

0xf4f5,	// (0x00083726) main_mp2_pane_t

0x5040,	// (0x00079271) pec_content_pane_ParamLimits

0x5040,	// (0x00079271) pec_content_pane

0x32f2,	// (0x00077523) scroll_pane_cp015

0x5052,	// (0x00079283) pec_attribute_pane_ParamLimits

0x5052,	// (0x00079283) pec_attribute_pane

0x5062,	// (0x00079293) pec_content_pane_g1_ParamLimits

0x5062,	// (0x00079293) pec_content_pane_g1

0x506e,	// (0x0007929f) pec_content_pane_t1_ParamLimits

0x506e,	// (0x0007929f) pec_content_pane_t1

0x5080,	// (0x000792b1) pec_content_pane_t2_ParamLimits

0x5080,	// (0x000792b1) pec_content_pane_t2

0x0001,

0xf4fc,	// (0x0008372d) pec_content_pane_t_ParamLimits

0xf4fc,	// (0x0008372d) pec_content_pane_t

0x5092,	// (0x000792c3) list_single_graphic_pane_cp01_ParamLimits

0x5092,	// (0x000792c3) list_single_graphic_pane_cp01

0x1f17,	// (0x00076148) bg_popup_sub_pane_cp04

0x50a7,	// (0x000792d8) popup_mup_playback_window_g1

0x50b3,	// (0x000792e4) popup_mup_playback_window_t1

0x50c8,	// (0x000792f9) popup_mup_playback_window_t2

0x0001,

0xf501,	// (0x00083732) popup_mup_playback_window_t

0x511d,	// (0x0007934e) main_image_pane_g1_ParamLimits

0x511d,	// (0x0007934e) main_image_pane_g1

0x51fa,	// (0x0007942b) scroll_pane_cp018_ParamLimits

0x51fa,	// (0x0007942b) scroll_pane_cp018

0x5212,	// (0x00079443) scroll_pane_cp016_ParamLimits

0x5212,	// (0x00079443) scroll_pane_cp016

0x5246,	// (0x00079477) smil2_image_pane_ParamLimits

0x5246,	// (0x00079477) smil2_image_pane

0x5276,	// (0x000794a7) smil2_root_pane_ParamLimits

0x5276,	// (0x000794a7) smil2_root_pane

0x52ae,	// (0x000794df) smil2_text_pane_ParamLimits

0x52ae,	// (0x000794df) smil2_text_pane

0x1cbc,	// (0x00075eed) bg_list_pane_cp06

0x5336,	// (0x00079567) grid_radio_pane

0x1cbc,	// (0x00075eed) bg_popup_window_pane_cp06

0x533e,	// (0x0007956f) main_fmradio_pane_t1

0x4235,	// (0x00078466) heading_pane_cp04

0x534c,	// (0x0007957d) main_fmradio_pane_t2

0xbbcd,	// (0x0007fdfe) popup_cale_lunar_info_window_g1

0x535a,	// (0x0007958b) main_fmradio_pane_t3

0xbbd5,	// (0x0007fe06) popup_cale_lunar_info_window_g2

0x5368,	// (0x00079599) main_fmradio_pane_t4

0x0001,

0x5376,	// (0x000795a7) main_fmradio_pane_t5

0x0004,

0xf5dc,	// (0x0008380d) popup_cale_lunar_info_window_g

0xf516,	// (0x00083747) main_fmradio_pane_t

0x5384,	// (0x000795b5) wait_bar_pane_cp03

0x538c,	// (0x000795bd) cell_fmradio_pane_ParamLimits

0x538c,	// (0x000795bd) cell_fmradio_pane

0x4f86,	// (0x000791b7) cell_fmradio_pane_g1_ParamLimits

0x4f86,	// (0x000791b7) cell_fmradio_pane_g1

0x1cbc,	// (0x00075eed) grid_highlight_pane_cp011

0x539f,	// (0x000795d0) poc_content_pane_ParamLimits

0x539f,	// (0x000795d0) poc_content_pane

0x53b1,	// (0x000795e2) scroll_pane_cp019

0x53b9,	// (0x000795ea) popup_call_poc_act_window_ParamLimits

0x53b9,	// (0x000795ea) popup_call_poc_act_window

0x53dd,	// (0x0007960e) popup_call_poc_inact_window_ParamLimits

0x53dd,	// (0x0007960e) popup_call_poc_inact_window

0xf5b3,	// (0x000837e4) bg_popup_call_poc_act_pane_g

0xbb45,	// (0x0007fd76) bg_popup_call_poc_inact_pane_g1

0xbb4d,	// (0x0007fd7e) bg_popup_call_poc_inact_pane_g2

0x53f6,	// (0x00079627) popup_call_poc_act_window_g2

0xbb55,	// (0x0007fd86) bg_popup_call_poc_inact_pane_g3

0xbb5d,	// (0x0007fd8e) bg_popup_call_poc_inact_pane_g4

0xbb65,	// (0x0007fd96) bg_popup_call_poc_inact_pane_g5

0x53fe,	// (0x0007962f) popup_call_poc_act_window_t1_ParamLimits

0x53fe,	// (0x0007962f) popup_call_poc_act_window_t1

0x5426,	// (0x00079657) popup_call_poc_act_window_t2_ParamLimits

0x5426,	// (0x00079657) popup_call_poc_act_window_t2

0x544e,	// (0x0007967f) popup_call_poc_act_window_t3_ParamLimits

0x544e,	// (0x0007967f) popup_call_poc_act_window_t3

0x5476,	// (0x000796a7) popup_call_poc_act_window_t4_ParamLimits

0x5476,	// (0x000796a7) popup_call_poc_act_window_t4

0x0003,

0xf521,	// (0x00083752) popup_call_poc_act_window_t_ParamLimits

0xf521,	// (0x00083752) popup_call_poc_act_window_t

0xbb6d,	// (0x0007fd9e) bg_popup_call_poc_inact_pane_g6

0xbb75,	// (0x0007fda6) bg_popup_call_poc_inact_pane_g7

0xbb7d,	// (0x0007fdae) bg_popup_call_poc_inact_pane_g8

0x5488,	// (0x000796b9) popup_call_poc_inact_window_g2

0xbb85,	// (0x0007fdb6) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a0,	// (0x000837d1) bg_popup_call_poc_inact_pane_g

0x5490,	// (0x000796c1) popup_call_poc_inact_window_t1_ParamLimits

0x5490,	// (0x000796c1) popup_call_poc_inact_window_t1

0x54a5,	// (0x000796d6) popup_call_poc_inact_window_t2_ParamLimits

0x54a5,	// (0x000796d6) popup_call_poc_inact_window_t2

0xad39,	// (0x0007ef6a) popup_call_poc_inact_window_t3_ParamLimits

0xad39,	// (0x0007ef6a) popup_call_poc_inact_window_t3

0x0002,

0xf52a,	// (0x0008375b) popup_call_poc_inact_window_t_ParamLimits

0xf52a,	// (0x0008375b) popup_call_poc_inact_window_t

0xbd3d,	// (0x0007ff6e) context_pane_ParamLimits

0x5cd4,	// (0x00079f05) signal_pane_ParamLimits

0x4820,	// (0x00078a51) main_call2_pane

0xbd2b,	// (0x0007ff5c) popup_phob_thumbnail2_window_ParamLimits

0xbd2b,	// (0x0007ff5c) popup_phob_thumbnail2_window

0xacf7,	// (0x0007ef28) aid_hotspot_pointer_arrow_pane

0xacff,	// (0x0007ef30) aid_hotspot_pointer_hand_pane

0x57ea,	// (0x00079a1b) phob_pre_status_pane_g5

0x2a57,	// (0x00076c88) cams_zoom_pane_ParamLimits

0x2a66,	// (0x00076c97) image_vga_pane_ParamLimits

0x2a80,	// (0x00076cb1) main_camera_pane_g1_ParamLimits

0x2a92,	// (0x00076cc3) main_camera_pane_g2_ParamLimits

0x2aa2,	// (0x00076cd3) main_camera_pane_g3_ParamLimits

0x2ab2,	// (0x00076ce3) main_camera_pane_g4_ParamLimits

0x2ac2,	// (0x00076cf3) main_camera_pane_g5_ParamLimits

0x2ad2,	// (0x00076d03) main_camera_pane_g6_ParamLimits

0x2ae4,	// (0x00076d15) main_camera_pane_g7_ParamLimits

0xf229,	// (0x0008345a) main_camera_pane_g_ParamLimits

0x2b00,	// (0x00076d31) main_camera_pane_t1_ParamLimits

0x2b16,	// (0x00076d47) main_camera_pane_t2_ParamLimits

0xf23a,	// (0x0008346b) main_camera_pane_t_ParamLimits

0x1f17,	// (0x00076148) bg_popup_preview_window_pane_cp01_ParamLimits

0x1f17,	// (0x00076148) bg_popup_preview_window_pane_cp01

0xad4e,	// (0x0007ef7f) popup_phob_thumbnail2_window_g1_ParamLimits

0xad4e,	// (0x0007ef7f) popup_phob_thumbnail2_window_g1

0x1cbc,	// (0x00075eed) call2_cli_visual_pane

0x54d5,	// (0x00079706) popup_call2_audio_conf_window_ParamLimits

0x54d5,	// (0x00079706) popup_call2_audio_conf_window

0x54f5,	// (0x00079726) popup_call2_audio_first_window_ParamLimits

0x54f5,	// (0x00079726) popup_call2_audio_first_window

0x558b,	// (0x000797bc) popup_call2_audio_in_window_ParamLimits

0x558b,	// (0x000797bc) popup_call2_audio_in_window

0x55d3,	// (0x00079804) popup_call2_audio_out_window_ParamLimits

0x55d3,	// (0x00079804) popup_call2_audio_out_window

0x563d,	// (0x0007986e) popup_call2_audio_second_window_ParamLimits

0x563d,	// (0x0007986e) popup_call2_audio_second_window

0x56a3,	// (0x000798d4) popup_call2_audio_wait_window_ParamLimits

0x56a3,	// (0x000798d4) popup_call2_audio_wait_window

0x1cbc,	// (0x00075eed) bg_popup_call2_act_pane_cp03

0x1ef9,	// (0x0007612a) list_conf_pane_cp

0xad5a,	// (0x0007ef8b) popup_call2_audio_conf_window_t1

0x42b6,	// (0x000784e7) list_single_graphic_popup_conf2_pane_ParamLimits

0x42b6,	// (0x000784e7) list_single_graphic_popup_conf2_pane

0x42c9,	// (0x000784fa) list_highlight_pane_cp04

0xad68,	// (0x0007ef99) list_single_graphic_popup_conf2_pane_g1

0x42da,	// (0x0007850b) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf531,	// (0x00083762) list_single_graphic_popup_conf2_pane_g

0xad72,	// (0x0007efa3) list_single_graphic_popup_conf2_pane_t1

0xad80,	// (0x0007efb1) bg_popup_call2_act_pane_cp01_ParamLimits

0xad80,	// (0x0007efb1) bg_popup_call2_act_pane_cp01

0xae0a,	// (0x0007f03b) call_type_pane_cp05_ParamLimits

0xae0a,	// (0x0007f03b) call_type_pane_cp05

0xae5e,	// (0x0007f08f) popup_call2_audio_second_window_g1_ParamLimits

0xae5e,	// (0x0007f08f) popup_call2_audio_second_window_g1

0xaeb2,	// (0x0007f0e3) popup_call2_audio_second_window_g2_ParamLimits

0xaeb2,	// (0x0007f0e3) popup_call2_audio_second_window_g2

0x0002,

0xf536,	// (0x00083767) popup_call2_audio_second_window_g_ParamLimits

0xf536,	// (0x00083767) popup_call2_audio_second_window_g

0xaf17,	// (0x0007f148) popup_call2_audio_second_window_t1_ParamLimits

0xaf17,	// (0x0007f148) popup_call2_audio_second_window_t1

0xafd2,	// (0x0007f203) popup_call2_audio_second_window_t2_ParamLimits

0xafd2,	// (0x0007f203) popup_call2_audio_second_window_t2

0xb025,	// (0x0007f256) popup_call2_audio_second_window_t3_ParamLimits

0xb025,	// (0x0007f256) popup_call2_audio_second_window_t3

0x0003,

0xf53d,	// (0x0008376e) popup_call2_audio_second_window_t_ParamLimits

0xf53d,	// (0x0008376e) popup_call2_audio_second_window_t

0x1cbc,	// (0x00075eed) bg_popup_call2_in_pane_cp02

0x1cc6,	// (0x00075ef7) call_type_pane_cp04

0x1cce,	// (0x00075eff) popup_call2_audio_wait_window_g1

0x1cd6,	// (0x00075f07) popup_call2_audio_wait_window_g2

0x0001,

0xf116,	// (0x00083347) popup_call2_audio_wait_window_g

0x1cde,	// (0x00075f0f) popup_call2_audio_wait_window_t3

0xb118,	// (0x0007f349) bg_popup_call2_act_pane_ParamLimits

0xb118,	// (0x0007f349) bg_popup_call2_act_pane

0xb1d8,	// (0x0007f409) call_type_pane_cp03_ParamLimits

0xb1d8,	// (0x0007f409) call_type_pane_cp03

0xb23c,	// (0x0007f46d) popup_call2_audio_first_window_g1_ParamLimits

0xb23c,	// (0x0007f46d) popup_call2_audio_first_window_g1

0xb2ac,	// (0x0007f4dd) popup_call2_audio_first_window_g2_ParamLimits

0xb2ac,	// (0x0007f4dd) popup_call2_audio_first_window_g2

0x4b0e,	// (0x00078d3f) popup_call2_audio_first_window_g3_ParamLimits

0x4b0e,	// (0x00078d3f) popup_call2_audio_first_window_g3

0x0004,

0xf546,	// (0x00083777) popup_call2_audio_first_window_g_ParamLimits

0xf546,	// (0x00083777) popup_call2_audio_first_window_g

0xb38a,	// (0x0007f5bb) popup_call2_audio_first_window_t1_ParamLimits

0xb38a,	// (0x0007f5bb) popup_call2_audio_first_window_t1

0xb48d,	// (0x0007f6be) popup_call2_audio_first_window_t4_ParamLimits

0xb48d,	// (0x0007f6be) popup_call2_audio_first_window_t4

0xb570,	// (0x0007f7a1) popup_call2_audio_first_window_t5_ParamLimits

0xb570,	// (0x0007f7a1) popup_call2_audio_first_window_t5

0x0003,

0xf551,	// (0x00083782) popup_call2_audio_first_window_t_ParamLimits

0xf551,	// (0x00083782) popup_call2_audio_first_window_t

0x1f0f,	// (0x00076140) bg_popup_call2_act_pane_g1

0xbbdd,	// (0x0007fe0e) popup_cale_lunar_info_window_t1

0xbbeb,	// (0x0007fe1c) popup_cale_lunar_info_window_t2

0xbbf9,	// (0x0007fe2a) popup_cale_lunar_info_window_t3

0x1cbc,	// (0x00075eed) bg_popup_call2_bubble_pane

0xb671,	// (0x0007f8a2) bg_popup_call2_in_pane_cp01_ParamLimits

0xb671,	// (0x0007f8a2) bg_popup_call2_in_pane_cp01

0x1974,	// (0x00075ba5) call_type_pane_cp02

0xb6b9,	// (0x0007f8ea) popup_call2_audio_out_window_g1_ParamLimits

0xb6b9,	// (0x0007f8ea) popup_call2_audio_out_window_g1

0xb6e5,	// (0x0007f916) popup_call2_audio_out_window_g2_ParamLimits

0xb6e5,	// (0x0007f916) popup_call2_audio_out_window_g2

0xb70d,	// (0x0007f93e) popup_call2_audio_out_window_g3_ParamLimits

0xb70d,	// (0x0007f93e) popup_call2_audio_out_window_g3

0x0003,

0xf55a,	// (0x0008378b) popup_call2_audio_out_window_g_ParamLimits

0xf55a,	// (0x0008378b) popup_call2_audio_out_window_g

0xb748,	// (0x0007f979) popup_call2_audio_out_window_t1_ParamLimits

0xb748,	// (0x0007f979) popup_call2_audio_out_window_t1

0xb7a7,	// (0x0007f9d8) popup_call2_audio_out_window_t2_ParamLimits

0xb7a7,	// (0x0007f9d8) popup_call2_audio_out_window_t2

0xb7fb,	// (0x0007fa2c) popup_call2_audio_out_window_t3_ParamLimits

0xb7fb,	// (0x0007fa2c) popup_call2_audio_out_window_t3

0xb811,	// (0x0007fa42) popup_call2_audio_out_window_t4_ParamLimits

0xb811,	// (0x0007fa42) popup_call2_audio_out_window_t4

0xb827,	// (0x0007fa58) popup_call2_audio_out_window_t5_ParamLimits

0xb827,	// (0x0007fa58) popup_call2_audio_out_window_t5

0x0005,

0xf563,	// (0x00083794) popup_call2_audio_out_window_t_ParamLimits

0xf563,	// (0x00083794) popup_call2_audio_out_window_t

0xb88b,	// (0x0007fabc) bg_popup_call2_in_pane_ParamLimits

0xb88b,	// (0x0007fabc) bg_popup_call2_in_pane

0xb8e7,	// (0x0007fb18) popup_call2_audio_in_window_g1_ParamLimits

0xb8e7,	// (0x0007fb18) popup_call2_audio_in_window_g1

0xb91f,	// (0x0007fb50) popup_call2_audio_in_window_g2_ParamLimits

0xb91f,	// (0x0007fb50) popup_call2_audio_in_window_g2

0xb957,	// (0x0007fb88) popup_call2_audio_in_window_g3_ParamLimits

0xb957,	// (0x0007fb88) popup_call2_audio_in_window_g3

0x0003,

0xf570,	// (0x000837a1) popup_call2_audio_in_window_g_ParamLimits

0xf570,	// (0x000837a1) popup_call2_audio_in_window_g

0xb9af,	// (0x0007fbe0) popup_call2_audio_in_window_t1_ParamLimits

0xb9af,	// (0x0007fbe0) popup_call2_audio_in_window_t1

0xba2f,	// (0x0007fc60) popup_call2_audio_in_window_t2_ParamLimits

0xba2f,	// (0x0007fc60) popup_call2_audio_in_window_t2

0xbaaf,	// (0x0007fce0) popup_call2_audio_in_window_t3_ParamLimits

0xbaaf,	// (0x0007fce0) popup_call2_audio_in_window_t3

0xbac9,	// (0x0007fcfa) popup_call2_audio_in_window_t4_ParamLimits

0xbac9,	// (0x0007fcfa) popup_call2_audio_in_window_t4

0xbadb,	// (0x0007fd0c) popup_call2_audio_in_window_t5_ParamLimits

0xbadb,	// (0x0007fd0c) popup_call2_audio_in_window_t5

0xbaf0,	// (0x0007fd21) popup_call2_audio_in_window_t6_ParamLimits

0xbaf0,	// (0x0007fd21) popup_call2_audio_in_window_t6

0x0005,

0xf579,	// (0x000837aa) popup_call2_audio_in_window_t_ParamLimits

0xf579,	// (0x000837aa) popup_call2_audio_in_window_t

0x1f0f,	// (0x00076140) bg_popup_call2_in_pane_g1

0xbc07,	// (0x0007fe38) popup_cale_lunar_info_window_t4

0x0003,

0xf5e1,	// (0x00083812) popup_cale_lunar_info_window_t

0x1f17,	// (0x00076148) bg_popup_call2_rect_pane_ParamLimits

0x1f17,	// (0x00076148) bg_popup_call2_rect_pane

0x1cbc,	// (0x00075eed) call2_cli_visual_graphic_pane

0x1cbc,	// (0x00075eed) call2_cli_visual_text_pane

0xbddd,	// (0x0008000e) smil_status_volume_pane_g3

0x0002,

0x23b5,	// (0x000765e6) call2_cli_visual_graphic_pane_g1

0x23b5,	// (0x000765e6) call2_cli_visual_graphic_pane_g2

0x23b5,	// (0x000765e6) call2_cli_visual_graphic_pane_g3

0x0002,

0xf586,	// (0x000837b7) call2_cli_visual_graphic_pane_g

0xbb05,	// (0x0007fd36) bg_popup_call2_rect_pane_g1

0x2504,	// (0x00076735) bg_popup_call2_rect_pane_g2

0xbb0d,	// (0x0007fd3e) bg_popup_call2_rect_pane_g3

0xbb15,	// (0x0007fd46) bg_popup_call2_rect_pane_g4

0xbb1d,	// (0x0007fd4e) bg_popup_call2_rect_pane_g5

0xbb25,	// (0x0007fd56) bg_popup_call2_rect_pane_g6

0xbb2d,	// (0x0007fd5e) bg_popup_call2_rect_pane_g7

0xbb35,	// (0x0007fd66) bg_popup_call2_rect_pane_g8

0xbb3d,	// (0x0007fd6e) bg_popup_call2_rect_pane_g9

0x0008,

0xf58d,	// (0x000837be) bg_popup_call2_rect_pane_g

0xbb45,	// (0x0007fd76) bg_popup_call2_bubble_pane_g1

0xbb4d,	// (0x0007fd7e) bg_popup_call2_bubble_pane_g2

0xbb55,	// (0x0007fd86) bg_popup_call2_bubble_pane_g3

0xbb5d,	// (0x0007fd8e) bg_popup_call2_bubble_pane_g4

0xbb65,	// (0x0007fd96) bg_popup_call2_bubble_pane_g5

0xbb6d,	// (0x0007fd9e) bg_popup_call2_bubble_pane_g6

0xbb75,	// (0x0007fda6) bg_popup_call2_bubble_pane_g7

0xbb7d,	// (0x0007fdae) bg_popup_call2_bubble_pane_g8

0xbb85,	// (0x0007fdb6) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5a0,	// (0x000837d1) bg_popup_call2_bubble_pane_g

0x2574,	// (0x000767a5) aid_cale_week_size_cell_pane

0x2b2c,	// (0x00076d5d) aid_cams_cif_uncrop_pane_ParamLimits

0x2b2c,	// (0x00076d5d) aid_cams_cif_uncrop_pane

0x2d1f,	// (0x00076f50) aid_cams_size_cell_ParamLimits

0x2d1f,	// (0x00076f50) aid_cams_size_cell

0x2d33,	// (0x00076f64) grid_cams_pane_ParamLimits

0x2d4d,	// (0x00076f7e) linegrid_cams_pane_ParamLimits

0x2e83,	// (0x000770b4) call_video_pane_t1

0x2ea1,	// (0x000770d2) call_video_pane_t2

0x0001,

0xf28d,	// (0x000834be) call_video_pane_t

0x3531,	// (0x00077762) aid_cale_month_size_cell_pane_ParamLimits

0x3531,	// (0x00077762) aid_cale_month_size_cell_pane

0xf62a,	// (0x0008385b) smil_status_volume_pane_g

0xbdea,	// (0x0008001b) volume_smil_pane_ParamLimits

0xa98a,	// (0x0007ebbb) aid_popup2_width_pane

0x245c,	// (0x0007668d) cell_qdial_pane_g4_ParamLimits

0x245c,	// (0x0007668d) cell_qdial_pane_g4

0x45a4,	// (0x000787d5) aid_blid_cardinal_pane_ParamLimits

0x45b0,	// (0x000787e1) aid_blid_destination_pane_ParamLimits

0x45b0,	// (0x000787e1) aid_blid_destination_pane

0x1f17,	// (0x00076148) bg_popup_call_poc_act_pane_ParamLimits

0x1f17,	// (0x00076148) bg_popup_call_poc_act_pane

0x1f17,	// (0x00076148) bg_popup_call_poc_inact_pane_ParamLimits

0x1f17,	// (0x00076148) bg_popup_call_poc_inact_pane

0xbb8d,	// (0x0007fdbe) bg_popup_call_poc_act_pane_g1

0xbb95,	// (0x0007fdc6) bg_popup_call_poc_act_pane_g2

0xbb9d,	// (0x0007fdce) bg_popup_call_poc_act_pane_g3

0xbb5d,	// (0x0007fd8e) bg_popup_call_poc_act_pane_g4

0xbb65,	// (0x0007fd96) bg_popup_call_poc_act_pane_g5

0xbba5,	// (0x0007fdd6) bg_popup_call_poc_act_pane_g6

0xbb75,	// (0x0007fda6) bg_popup_call_poc_act_pane_g7

0xbbad,	// (0x0007fdde) bg_popup_call_poc_act_pane_g8

0x1cbc,	// (0x00075eed) main_usb_pane

0xbd06,	// (0x0007ff37) popup_cale_lunar_info_window

0x31d9,	// (0x0007740a) im_reading_pane_t1_ParamLimits

0x3212,	// (0x00077443) list_im_pane_ParamLimits

0x3223,	// (0x00077454) scroll_pane_cp07_ParamLimits

0x1cbc,	// (0x00075eed) grid_highlight_pane_cp012

0x1f17,	// (0x00076148) mup_scale_pane_ParamLimits

0x4f86,	// (0x000791b7) main_usb_pane_g1_ParamLimits

0x4f86,	// (0x000791b7) main_usb_pane_g1

0x56ff,	// (0x00079930) main_usb_pane_g2_ParamLimits

0x56ff,	// (0x00079930) main_usb_pane_g2

0x0001,

0xf5ca,	// (0x000837fb) main_usb_pane_g_ParamLimits

0xf5ca,	// (0x000837fb) main_usb_pane_g

0x5715,	// (0x00079946) main_usb_pane_t1_ParamLimits

0x5715,	// (0x00079946) main_usb_pane_t1

0x5727,	// (0x00079958) main_usb_pane_t2_ParamLimits

0x5727,	// (0x00079958) main_usb_pane_t2

0x5739,	// (0x0007996a) main_usb_pane_t3_ParamLimits

0x5739,	// (0x0007996a) main_usb_pane_t3

0x574b,	// (0x0007997c) main_usb_pane_t4_ParamLimits

0x574b,	// (0x0007997c) main_usb_pane_t4

0x575d,	// (0x0007998e) main_usb_pane_t5_ParamLimits

0x575d,	// (0x0007998e) main_usb_pane_t5

0x576f,	// (0x000799a0) main_usb_pane_t6_ParamLimits

0x576f,	// (0x000799a0) main_usb_pane_t6

0x0005,

0xf5cf,	// (0x00083800) main_usb_pane_t_ParamLimits

0x4553,	// (0x00078784) aid_text_placing

0x455c,	// (0x0007878d) main_location2_pane_t1_ParamLimits

0x456e,	// (0x0007879f) main_location2_pane_t2_ParamLimits

0x4580,	// (0x000787b1) main_location2_pane_t3_ParamLimits

0x4592,	// (0x000787c3) main_location2_pane_t4_ParamLimits

0x4592,	// (0x000787c3) main_location2_pane_t4

0xf3ee,	// (0x0008361f) main_location2_pane_t_ParamLimits

0x1fef,	// (0x00076220) find_pinb_pane_g2_ParamLimits

0x1fef,	// (0x00076220) find_pinb_pane_g2

0x0001,

0xf13c,	// (0x0008336d) find_pinb_pane_g_ParamLimits

0xf13c,	// (0x0008336d) find_pinb_pane_g

0x1ffb,	// (0x0007622c) find_pinb_pane_t1_ParamLimits

0x200d,	// (0x0007623e) find_pinb_pane_t2_ParamLimits

0xf141,	// (0x00083372) find_pinb_pane_t_ParamLimits

0x1cbc,	// (0x00075eed) main_call3_pane

0x38ca,	// (0x00077afb) cale_month_day_heading_pane_t1_ParamLimits

0x3928,	// (0x00077b59) cale_month_day_heading_pane_t2_ParamLimits

0x398d,	// (0x00077bbe) cale_month_day_heading_pane_t3_ParamLimits

0x39f2,	// (0x00077c23) cale_month_day_heading_pane_t4_ParamLimits

0x3a57,	// (0x00077c88) cale_month_day_heading_pane_t5_ParamLimits

0x3acc,	// (0x00077cfd) cale_month_day_heading_pane_t6_ParamLimits

0x3b41,	// (0x00077d72) cale_month_day_heading_pane_t7_ParamLimits

0xf2c5,	// (0x000834f6) cale_month_day_heading_pane_t_ParamLimits

0x3d5d,	// (0x00077f8e) smil_status_volume_pane

0x4f62,	// (0x00079193) postcard_address_pane_ParamLimits

0x4f62,	// (0x00079193) postcard_address_pane

0x4f74,	// (0x000791a5) postcard_message_pane_ParamLimits

0x4f74,	// (0x000791a5) postcard_message_pane

0x56dd,	// (0x0007990e) call2_cli_visual_pane_t1_ParamLimits

0x56dd,	// (0x0007990e) call2_cli_visual_pane_t1

0x5f01,	// (0x0007a132) postcard_message_pane_t1_ParamLimits

0x5f01,	// (0x0007a132) postcard_message_pane_t1

0x5eea,	// (0x0007a11b) postcard_address_pane_t1_ParamLimits

0x5eea,	// (0x0007a11b) postcard_address_pane_t1

0x5ed6,	// (0x0007a107) popup_call3_audio_in_window_ParamLimits

0x5ed6,	// (0x0007a107) popup_call3_audio_in_window

0x5d61,	// (0x00079f92) bg_popup_call3_in_pane_ParamLimits

0x5d61,	// (0x00079f92) bg_popup_call3_in_pane

0x5dd7,	// (0x0007a008) popup_call3_audio_in_window_g1_ParamLimits

0x5dd7,	// (0x0007a008) popup_call3_audio_in_window_g1

0x5df7,	// (0x0007a028) popup_call3_audio_in_window_g2_ParamLimits

0x5df7,	// (0x0007a028) popup_call3_audio_in_window_g2

0x5e17,	// (0x0007a048) popup_call3_audio_in_window_g3_ParamLimits

0x5e17,	// (0x0007a048) popup_call3_audio_in_window_g3

0x0003,

0xf631,	// (0x00083862) popup_call3_audio_in_window_g_ParamLimits

0xf631,	// (0x00083862) popup_call3_audio_in_window_g

0x5e48,	// (0x0007a079) popup_call3_audio_in_window_t1_ParamLimits

0x5e48,	// (0x0007a079) popup_call3_audio_in_window_t1

0x5e86,	// (0x0007a0b7) popup_call3_audio_in_window_t2_ParamLimits

0x5e86,	// (0x0007a0b7) popup_call3_audio_in_window_t2

0x5ec4,	// (0x0007a0f5) popup_call3_audio_in_window_t3_ParamLimits

0x5ec4,	// (0x0007a0f5) popup_call3_audio_in_window_t3

0x0002,

0xf63a,	// (0x0008386b) popup_call3_audio_in_window_t_ParamLimits

0xf63a,	// (0x0008386b) popup_call3_audio_in_window_t

0x4820,	// (0x00078a51) bg_popup_call3_rect_pane

0xbb05,	// (0x0007fd36) bg_popup_call3_rect_pane_g1

0x2504,	// (0x00076735) bg_popup_call3_rect_pane_g2

0xbb0d,	// (0x0007fd3e) bg_popup_call3_rect_pane_g3

0xbb15,	// (0x0007fd46) bg_popup_call3_rect_pane_g4

0xbb1d,	// (0x0007fd4e) bg_popup_call3_rect_pane_g5

0xbb25,	// (0x0007fd56) bg_popup_call3_rect_pane_g6

0xbb2d,	// (0x0007fd5e) bg_popup_call3_rect_pane_g7

0x4b06,	// (0x00078d37) mup_visualizer_osc_pane

0x4b1c,	// (0x00078d4d) mup_visualizer_spec_pane

0x5d91,	// (0x00079fc2) call3_video_qcif_pane_ParamLimits

0x5d91,	// (0x00079fc2) call3_video_qcif_pane

0x5da4,	// (0x00079fd5) call3_video_qcif_uncrop_pane_ParamLimits

0x5da4,	// (0x00079fd5) call3_video_qcif_uncrop_pane

0x5db2,	// (0x00079fe3) call3_video_subqcif_pane_ParamLimits

0x5db2,	// (0x00079fe3) call3_video_subqcif_pane

0x5dc6,	// (0x00079ff7) call3_video_subqcif_uncrop_pane_ParamLimits

0x5dc6,	// (0x00079ff7) call3_video_subqcif_uncrop_pane

0x5e37,	// (0x0007a068) popup_call3_audio_in_window_g4_ParamLimits

0x5e37,	// (0x0007a068) popup_call3_audio_in_window_g4

0x5d50,	// (0x00079f81) mup_spec_half_pane

0x5d59,	// (0x00079f8a) mup_spec_half_pane_cp

0xbd9d,	// (0x0007ffce) mup_osc_middle_pane

0xbda6,	// (0x0007ffd7) mup_visualizer_osc_pane_g1

0x5d30,	// (0x00079f61) mup_spec_bar_pane_ParamLimits

0x5d30,	// (0x00079f61) mup_spec_bar_pane

0xbd8a,	// (0x0007ffbb) mup_spec_bar_pane_g1

0xbd94,	// (0x0007ffc5) mup_spec_bar_pane_g2

0x0001,

0xf625,	// (0x00083856) mup_spec_bar_pane_g

0x2574,	// (0x000767a5) aid_cale_week_size_cell_pane_ParamLimits

0x2587,	// (0x000767b8) bg_cale_heading_pane_ParamLimits

0x259b,	// (0x000767cc) bg_cale_pane_cp01_ParamLimits

0x25b4,	// (0x000767e5) cale_week_corner_pane_ParamLimits

0x25ca,	// (0x000767fb) cale_week_day_heading_pane_ParamLimits

0x25de,	// (0x0007680f) cale_week_scroll_pane_g1_ParamLimits

0x25ef,	// (0x00076820) cale_week_scroll_pane_g2_ParamLimits

0x2600,	// (0x00076831) cale_week_scroll_pane_g3_ParamLimits

0x2611,	// (0x00076842) cale_week_scroll_pane_g4_ParamLimits

0x2622,	// (0x00076853) cale_week_scroll_pane_g5_ParamLimits

0x2635,	// (0x00076866) cale_week_scroll_pane_g6_ParamLimits

0x2648,	// (0x00076879) cale_week_scroll_pane_g7_ParamLimits

0x265b,	// (0x0007688c) cale_week_scroll_pane_g8_ParamLimits

0x266e,	// (0x0007689f) cale_week_scroll_pane_g9_ParamLimits

0x267f,	// (0x000768b0) cale_week_scroll_pane_g10_ParamLimits

0x2690,	// (0x000768c1) cale_week_scroll_pane_g11_ParamLimits

0x26a1,	// (0x000768d2) cale_week_scroll_pane_g12_ParamLimits

0x26b2,	// (0x000768e3) cale_week_scroll_pane_g13_ParamLimits

0x26c3,	// (0x000768f4) cale_week_scroll_pane_g14_ParamLimits

0x26d4,	// (0x00076905) cale_week_scroll_pane_g15_ParamLimits

0xf1cd,	// (0x000833fe) cale_week_scroll_pane_g_ParamLimits

0x26e5,	// (0x00076916) cale_week_time_pane_ParamLimits

0x26f8,	// (0x00076929) grid_cale_week_pane_ParamLimits

0x270d,	// (0x0007693e) listscroll_cale_week_pane_t1

0x271f,	// (0x00076950) scroll_pane_cp08_ParamLimits

0x3595,	// (0x000777c6) cale_month_corner_pane_ParamLimits

0x3877,	// (0x00077aa8) cale_month_pane_t1

0x3889,	// (0x00077aba) cale_month_week_pane_ParamLimits

0x4195,	// (0x000783c6) popup_call_status_window_g1_ParamLimits

0x41a9,	// (0x000783da) popup_call_status_window_g2_ParamLimits

0x41bd,	// (0x000783ee) popup_call_status_window_g3_ParamLimits

0xf375,	// (0x000835a6) popup_call_status_window_g_ParamLimits

0x4225,	// (0x00078456) aid_call2_pane

0x0c5a,	// (0x00074e8b) msg_header_pane_g1

0x4f62,	// (0x00079193) postcard_address2_pane_ParamLimits

0x4f62,	// (0x00079193) postcard_address2_pane

0x4f74,	// (0x000791a5) postcard_message2_pane_ParamLimits

0x4f74,	// (0x000791a5) postcard_message2_pane

0x5ce2,	// (0x00079f13) message2_row_pane_ParamLimits

0x5ce2,	// (0x00079f13) message2_row_pane

0x5cfe,	// (0x00079f2f) address2_row_pane_ParamLimits

0x5cfe,	// (0x00079f2f) address2_row_pane

0xbd58,	// (0x0007ff89) postcard_message2_row_pane_g1

0xbd60,	// (0x0007ff91) postcard_message2_row_pane_t1

0xbd58,	// (0x0007ff89) address2_row_pane_g1

0xbd60,	// (0x0007ff91) address2_row_pane_t1

0x2a12,	// (0x00076c43) aid_size_cell_vorec

0x1cbc,	// (0x00075eed) main_rss_pane

0x5d11,	// (0x00079f42) rss_list_single_pane_ParamLimits

0x5d11,	// (0x00079f42) rss_list_single_pane

0xbd6e,	// (0x0007ff9f) rss_list_single_pane_t1

0xbd7c,	// (0x0007ffad) rss_list_single_pane_t2

0x0001,

0xf620,	// (0x00083851) rss_list_single_pane_t

0x1cbc,	// (0x00075eed) main_camera2_pane

0x1cbc,	// (0x00075eed) main_video2_pane

0x5f7a,	// (0x0007a1ab) cams_zoom_pane_cp2_ParamLimits

0x5f7a,	// (0x0007a1ab) cams_zoom_pane_cp2

0x5f9a,	// (0x0007a1cb) image2_vga_pane_ParamLimits

0x5f9a,	// (0x0007a1cb) image2_vga_pane

0x5feb,	// (0x0007a21c) main_camera2_pane_g1_ParamLimits

0x5feb,	// (0x0007a21c) main_camera2_pane_g1

0x600b,	// (0x0007a23c) main_camera2_pane_g2_ParamLimits

0x600b,	// (0x0007a23c) main_camera2_pane_g2

0x602b,	// (0x0007a25c) main_camera2_pane_g3_ParamLimits

0x602b,	// (0x0007a25c) main_camera2_pane_g3

0x604b,	// (0x0007a27c) main_camera2_pane_g4_ParamLimits

0x604b,	// (0x0007a27c) main_camera2_pane_g4

0x606b,	// (0x0007a29c) main_camera2_pane_g5_ParamLimits

0x606b,	// (0x0007a29c) main_camera2_pane_g5

0x608b,	// (0x0007a2bc) main_camera2_pane_g6_ParamLimits

0x608b,	// (0x0007a2bc) main_camera2_pane_g6

0x60ab,	// (0x0007a2dc) main_camera2_pane_g7_ParamLimits

0x60ab,	// (0x0007a2dc) main_camera2_pane_g7

0x60cb,	// (0x0007a2fc) main_camera2_pane_g8_ParamLimits

0x60cb,	// (0x0007a2fc) main_camera2_pane_g8

0x0008,

0xf641,	// (0x00083872) main_camera2_pane_g_ParamLimits

0xf641,	// (0x00083872) main_camera2_pane_g

0x610b,	// (0x0007a33c) main_camera2_pane_t1_ParamLimits

0x610b,	// (0x0007a33c) main_camera2_pane_t1

0x6140,	// (0x0007a371) main_camera2_pane_t2_ParamLimits

0x6140,	// (0x0007a371) main_camera2_pane_t2

0x6166,	// (0x0007a397) main_camera2_pane_t3_ParamLimits

0x6166,	// (0x0007a397) main_camera2_pane_t3

0x61c4,	// (0x0007a3f5) main_camera2_pane_t4_ParamLimits

0x61c4,	// (0x0007a3f5) main_camera2_pane_t4

0x0006,

0xf654,	// (0x00083885) main_camera2_pane_t_ParamLimits

0xf654,	// (0x00083885) main_camera2_pane_t

0x6256,	// (0x0007a487) cams_zoom_pane_cp4_ParamLimits

0x6256,	// (0x0007a487) cams_zoom_pane_cp4

0x626c,	// (0x0007a49d) image2_cif_pane_ParamLimits

0x626c,	// (0x0007a49d) image2_cif_pane

0x6297,	// (0x0007a4c8) image2_subqcif_pane_ParamLimits

0x6297,	// (0x0007a4c8) image2_subqcif_pane

0x62b1,	// (0x0007a4e2) main_video2_pane_g1_ParamLimits

0x62b1,	// (0x0007a4e2) main_video2_pane_g1

0x62cb,	// (0x0007a4fc) main_video2_pane_g2_ParamLimits

0x62cb,	// (0x0007a4fc) main_video2_pane_g2

0x62e1,	// (0x0007a512) main_video2_pane_g3_ParamLimits

0x62e1,	// (0x0007a512) main_video2_pane_g3

0x62f7,	// (0x0007a528) main_video2_pane_g4_ParamLimits

0x62f7,	// (0x0007a528) main_video2_pane_g4

0x630d,	// (0x0007a53e) main_video2_pane_g5_ParamLimits

0x630d,	// (0x0007a53e) main_video2_pane_g5

0x6323,	// (0x0007a554) main_video2_pane_g6_ParamLimits

0x6323,	// (0x0007a554) main_video2_pane_g6

0x0005,

0xf663,	// (0x00083894) main_video2_pane_g_ParamLimits

0xf663,	// (0x00083894) main_video2_pane_g

0x633d,	// (0x0007a56e) main_video2_pane_t1_ParamLimits

0x633d,	// (0x0007a56e) main_video2_pane_t1

0x6361,	// (0x0007a592) main_video2_pane_t2_ParamLimits

0x6361,	// (0x0007a592) main_video2_pane_t2

0x63af,	// (0x0007a5e0) main_video2_pane_t3_ParamLimits

0x63af,	// (0x0007a5e0) main_video2_pane_t3

0x0002,

0xf670,	// (0x000838a1) main_video2_pane_t_ParamLimits

0xf670,	// (0x000838a1) main_video2_pane_t

0x582a,	// (0x00079a5b) call_muted_g2

0x0001,

0xf612,	// (0x00083843) call_muted_g

0x1cbc,	// (0x00075eed) main_mup2_pane

0x63f3,	// (0x0007a624) main_mup2_pane_g1_ParamLimits

0x63f3,	// (0x0007a624) main_mup2_pane_g1

0x63ff,	// (0x0007a630) main_mup2_pane_g2_ParamLimits

0x63ff,	// (0x0007a630) main_mup2_pane_g2

0xec4b,	// (0x00082e7c) main_mup_pane_g13_cp1

0xec53,	// (0x00082e84) mup_volume_pane_cp1

0x641b,	// (0x0007a64c) main_mup2_pane_g4_ParamLimits

0x641b,	// (0x0007a64c) main_mup2_pane_g4

0x642d,	// (0x0007a65e) main_mup2_pane_g5_ParamLimits

0x642d,	// (0x0007a65e) main_mup2_pane_g5

0x643f,	// (0x0007a670) main_mup2_pane_g6_ParamLimits

0x643f,	// (0x0007a670) main_mup2_pane_g6

0x6451,	// (0x0007a682) main_mup2_pane_g7_ParamLimits

0x6451,	// (0x0007a682) main_mup2_pane_g7

0x0006,

0xf677,	// (0x000838a8) main_mup2_pane_g_ParamLimits

0xf677,	// (0x000838a8) main_mup2_pane_g

0x6469,	// (0x0007a69a) main_mup2_pane_t1_ParamLimits

0x6469,	// (0x0007a69a) main_mup2_pane_t1

0x647f,	// (0x0007a6b0) main_mup2_pane_t2_ParamLimits

0x647f,	// (0x0007a6b0) main_mup2_pane_t2

0x6495,	// (0x0007a6c6) main_mup2_pane_t3_ParamLimits

0x6495,	// (0x0007a6c6) main_mup2_pane_t3

0x64ab,	// (0x0007a6dc) main_mup2_pane_t4_ParamLimits

0x64ab,	// (0x0007a6dc) main_mup2_pane_t4

0x64c3,	// (0x0007a6f4) main_mup2_pane_t5_ParamLimits

0x64c3,	// (0x0007a6f4) main_mup2_pane_t5

0x64db,	// (0x0007a70c) main_mup2_pane_t6_ParamLimits

0x64db,	// (0x0007a70c) main_mup2_pane_t6

0x0005,

0xf686,	// (0x000838b7) main_mup2_pane_t_ParamLimits

0xf686,	// (0x000838b7) main_mup2_pane_t

0x650b,	// (0x0007a73c) mup2_visualizer_pane_ParamLimits

0x650b,	// (0x0007a73c) mup2_visualizer_pane

0x6539,	// (0x0007a76a) mup_progress_pane_cp_ParamLimits

0x6539,	// (0x0007a76a) mup_progress_pane_cp

0xec36,	// (0x00082e67) mup_volume_pane_cp_ParamLimits

0xec36,	// (0x00082e67) mup_volume_pane_cp

0x654d,	// (0x0007a77e) mup2_visualizer_pane_g1_ParamLimits

0x654d,	// (0x0007a77e) mup2_visualizer_pane_g1

0xbdff,	// (0x00080030) mup2_visualizer_pane_g2_ParamLimits

0xbdff,	// (0x00080030) mup2_visualizer_pane_g2

0x6564,	// (0x0007a795) mup2_visualizer_pane_g3_ParamLimits

0x6564,	// (0x0007a795) mup2_visualizer_pane_g3

0x0002,

0xf693,	// (0x000838c4) mup2_visualizer_pane_g_ParamLimits

0xf693,	// (0x000838c4) mup2_visualizer_pane_g

0x532e,	// (0x0007955f) aid_size_cell_fmradio

0x59dc,	// (0x00079c0d) aid_height_parent_landcape

0x32d9,	// (0x0007750a) wml_content_pane_cp

0x32e1,	// (0x00077512) wml_tabs_pane

0x32ea,	// (0x0007751b) popup_wml_miniature_window

0x32f2,	// (0x00077523) scroll_pane_cp021

0x3306,	// (0x00077537) wml_content_pane_comp8

0x1cbc,	// (0x00075eed) bg_popup_sub_pane_cp05

0xbe1d,	// (0x0008004e) popup_wml_miniature_window_g1

0xbe25,	// (0x00080056) wml_miniature_view_pane

0x6570,	// (0x0007a7a1) aid_size_wml_view

0x6578,	// (0x0007a7a9) wml_miniature_view_pane_g1

0x6581,	// (0x0007a7b2) wml_miniature_view_pane_g2

0x658a,	// (0x0007a7bb) wml_miniature_view_pane_g3

0x6592,	// (0x0007a7c3) wml_miniature_view_pane_g4

0x659a,	// (0x0007a7cb) wml_miniature_view_pane_g5

0x65a2,	// (0x0007a7d3) wml_miniature_view_pane_g6

0x65aa,	// (0x0007a7db) wml_miniature_view_pane_g7

0x65b2,	// (0x0007a7e3) wml_miniature_view_pane_g8

0x0007,

0xf69a,	// (0x000838cb) wml_miniature_view_pane_g

0xbe2d,	// (0x0008005e) background_graphic_ParamLimits

0xbe2d,	// (0x0008005e) background_graphic

0xbe39,	// (0x0008006a) wml_tabs_2_pane

0xbe42,	// (0x00080073) wml_tabs_3_pane_ParamLimits

0xbe42,	// (0x00080073) wml_tabs_3_pane

0xbe54,	// (0x00080085) wml_tabs_4_pane_ParamLimits

0xbe54,	// (0x00080085) wml_tabs_4_pane

0xbe6a,	// (0x0008009b) wml_tabs_5_pane_ParamLimits

0xbe6a,	// (0x0008009b) wml_tabs_5_pane

0xbe84,	// (0x000800b5) wml_tabs_pane_g2_ParamLimits

0xbe84,	// (0x000800b5) wml_tabs_pane_g2

0xbe98,	// (0x000800c9) wml_tabs_pane_g3_ParamLimits

0xbe98,	// (0x000800c9) wml_tabs_pane_g3

0x65ba,	// (0x0007a7eb) wml_tabs_2_active_pane_ParamLimits

0x65ba,	// (0x0007a7eb) wml_tabs_2_active_pane

0x65ce,	// (0x0007a7ff) wml_tabs_2_passive_pane_ParamLimits

0x65ce,	// (0x0007a7ff) wml_tabs_2_passive_pane

0x65e2,	// (0x0007a813) wml_tabs_3_active_pane_cp_ParamLimits

0x65e2,	// (0x0007a813) wml_tabs_3_active_pane_cp

0x65f7,	// (0x0007a828) wml_tabs_3_passive_pane_ParamLimits

0x65f7,	// (0x0007a828) wml_tabs_3_passive_pane

0x660a,	// (0x0007a83b) wml_tabs_3_passive_pane_cp_ParamLimits

0x660a,	// (0x0007a83b) wml_tabs_3_passive_pane_cp

0x6621,	// (0x0007a852) tabs_4_active_pane

0x6629,	// (0x0007a85a) tabs_4_passive_pane

0x6633,	// (0x0007a864) tabs_4_passive_pane_cp

0x663b,	// (0x0007a86c) tabs_4_passive_pane_cp2

0x56f7,	// (0x00079928) aid_height_text

0x4adc,	// (0x00078d0d) mup_volume_cont_pane_ParamLimits

0x4adc,	// (0x00078d0d) mup_volume_cont_pane

0x1fad,	// (0x000761de) aid_size_cell_pinb

0x1fb7,	// (0x000761e8) aid_size_list_pinb

0x6525,	// (0x0007a756) mup2_volume_cont_pane_ParamLimits

0x6525,	// (0x0007a756) mup2_volume_cont_pane

0xec22,	// (0x00082e53) mup2_volume_cont_pane_g1_ParamLimits

0xec22,	// (0x00082e53) mup2_volume_cont_pane_g1

0x15e3,	// (0x00075814) aid_size_cell_touch_ParamLimits

0x15e3,	// (0x00075814) aid_size_cell_touch

0x17ff,	// (0x00075a30) touch_pane_ParamLimits

0x17ff,	// (0x00075a30) touch_pane

0xa978,	// (0x0007eba9) main_rss2_pane

0xbeb5,	// (0x000800e6) listscroll_rss2_pane

0xbebe,	// (0x000800ef) rss2_navigation_pane

0xbec6,	// (0x000800f7) list_rss2_pane

0x43df,	// (0x00078610) scroll_pane_cp22

0xbece,	// (0x000800ff) rss2_navigation_pane_g1

0xbed7,	// (0x00080108) rss2_navigation_pane_g2

0xbedf,	// (0x00080110) rss2_navigation_pane_g3

0x0002,

0xf6ab,	// (0x000838dc) rss2_navigation_pane_g

0xbee7,	// (0x00080118) rss2_navigation_pane_t1

0x6645,	// (0x0007a876) rss2_list_single_pane_ParamLimits

0x6645,	// (0x0007a876) rss2_list_single_pane

0xbef5,	// (0x00080126) rss2_list_single_pane_t2

0xbf03,	// (0x00080134) rss2_list_single_pane_t3_ParamLimits

0xbf03,	// (0x00080134) rss2_list_single_pane_t3

0xbf20,	// (0x00080151) rss2_list_single_pane_t4

0x3d45,	// (0x00077f76) smil_status_pane_g1

0x17e5,	// (0x00075a16) main_image2_pane_ParamLimits

0x17e5,	// (0x00075a16) main_image2_pane

0x60eb,	// (0x0007a31c) main_camera2_pane_g9_ParamLimits

0x60eb,	// (0x0007a31c) main_camera2_pane_g9

0x6219,	// (0x0007a44a) main_camera2_pane_t5_ParamLimits

0x6219,	// (0x0007a44a) main_camera2_pane_t5

0xebf2,	// (0x00082e23) main_camera2_pane_t6_ParamLimits

0xebf2,	// (0x00082e23) main_camera2_pane_t6

0x665a,	// (0x0007a88b) main_image2_pane_g1_ParamLimits

0x665a,	// (0x0007a88b) main_image2_pane_g1

0x52e4,	// (0x00079515) smil2_video_pane_ParamLimits

0x52e4,	// (0x00079515) smil2_video_pane

0xa9a6,	// (0x0007ebd7) aid_zoom_text_primary_cp

0xa9e6,	// (0x0007ec17) popup_preview_fixed_window

0x31d1,	// (0x00077402) im_reading_pane_g1

0x5f62,	// (0x0007a193) cams2_bc_adjust_pane_cp_ParamLimits

0x5f62,	// (0x0007a193) cams2_bc_adjust_pane_cp

0x6248,	// (0x0007a479) cams2_bc_adjust_pane_ParamLimits

0x6248,	// (0x0007a479) cams2_bc_adjust_pane

0xec5b,	// (0x00082e8c) cams2_bc_adjust_pane_g1

0xec63,	// (0x00082e94) cams2_slider_pane

0xec6c,	// (0x00082e9d) cams2_slider_pane_g1

0xec75,	// (0x00082ea6) cams2_slider_pane_g2

0x0006,

0xf6b2,	// (0x000838e3) cams2_slider_pane_g

0x20fc,	// (0x0007632d) calc_display_pane_ParamLimits

0x2124,	// (0x00076355) calc_paper_pane_ParamLimits

0x2147,	// (0x00076378) grid_calc_pane_ParamLimits

0xacc8,	// (0x0007eef9) popup_clock_digital_window_t1_ParamLimits

0x516b,	// (0x0007939c) main_image_pane_t1

0x20de,	// (0x0007630f) aid_size_cell_calc_ParamLimits

0x20de,	// (0x0007630f) aid_size_cell_calc

0x5a22,	// (0x00079c53) popup_blid_sat_info2_window_ParamLimits

0x5a22,	// (0x00079c53) popup_blid_sat_info2_window

0xbf36,	// (0x00080167) aid_size_cell_blid

0xbf3e,	// (0x0008016f) bg_popup_window_pane_cp07

0xbf61,	// (0x00080192) grid_popup_blid_pane

0xbf6b,	// (0x0008019c) heading_pane_cp05_ParamLimits

0xbf6b,	// (0x0008019c) heading_pane_cp05

0xc035,	// (0x00080266) cell_popup_blid_pane_ParamLimits

0xc035,	// (0x00080266) cell_popup_blid_pane

0xc059,	// (0x0008028a) cell_popup_blid_pane_g1

0xc061,	// (0x00080292) cell_popup_blid_pane_t1

0x64f5,	// (0x0007a726) mup2_indicator_pane_ParamLimits

0x64f5,	// (0x0007a726) mup2_indicator_pane

0x4820,	// (0x00078a51) mup2_visualizer_osc_pane

0xbe0b,	// (0x0008003c) mup2_visualizer_spec_pane_ParamLimits

0xbe0b,	// (0x0008003c) mup2_visualizer_spec_pane

0x6670,	// (0x0007a8a1) mup2_spec_half_pane

0x6679,	// (0x0007a8aa) mup2_spec_half_pane_cp

0x6681,	// (0x0007a8b2) mup2_spec_bar_pane_ParamLimits

0x6681,	// (0x0007a8b2) mup2_spec_bar_pane

0xbd8a,	// (0x0007ffbb) mup2_spec_bar_pane_g1

0xbd94,	// (0x0007ffc5) mup2_spec_bar_pane_g2

0x0001,

0xf625,	// (0x00083856) mup2_spec_bar_pane_g

0x66a1,	// (0x0007a8d2) mup2_osc_middle_pane

0xbda6,	// (0x0007ffd7) mup2_visualizer_osc_pane_g1

0x1871,	// (0x00075aa2) popup_number_entry_window_t1_ParamLimits

0x1884,	// (0x00075ab5) popup_number_entry_window_t2_ParamLimits

0x1896,	// (0x00075ac7) popup_number_entry_window_t3_ParamLimits

0x18a8,	// (0x00075ad9) popup_number_entry_window_t5_ParamLimits

0x18a8,	// (0x00075ad9) popup_number_entry_window_t5

0xf0e7,	// (0x00083318) popup_number_entry_window_t_ParamLimits

0x18dc,	// (0x00075b0d) text_title_cp2_ParamLimits

0xad07,	// (0x0007ef38) aid_hotspot_pointer_text2_pane

0xad2d,	// (0x0007ef5e) main_viewer_pane_g9_ParamLimits

0xad2d,	// (0x0007ef5e) main_viewer_pane_g9

0x3877,	// (0x00077aa8) cale_month_pane_t1_ParamLimits

0x3dc1,	// (0x00077ff2) bg_cale_pane_ParamLimits

0x3dd9,	// (0x0007800a) list_cale_pane_ParamLimits

0x270d,	// (0x0007693e) listscroll_cale_day_pane_t1

0x3dea,	// (0x0007801b) scroll_pane_cp09_ParamLimits

0x4b8a,	// (0x00078dbb) main_mup_eq_pane_t1_ParamLimits

0x4b8a,	// (0x00078dbb) main_mup_eq_pane_t1

0x4ba4,	// (0x00078dd5) main_mup_eq_pane_t2_ParamLimits

0x4ba4,	// (0x00078dd5) main_mup_eq_pane_t2

0x4bbe,	// (0x00078def) main_mup_eq_pane_t3_ParamLimits

0x4bbe,	// (0x00078def) main_mup_eq_pane_t3

0x4bda,	// (0x00078e0b) main_mup_eq_pane_t4_ParamLimits

0x4bda,	// (0x00078e0b) main_mup_eq_pane_t4

0x4bf6,	// (0x00078e27) main_mup_eq_pane_t5_ParamLimits

0x4bf6,	// (0x00078e27) main_mup_eq_pane_t5

0x4c12,	// (0x00078e43) main_mup_eq_pane_t6_ParamLimits

0x4c12,	// (0x00078e43) main_mup_eq_pane_t6

0x4c26,	// (0x00078e57) main_mup_eq_pane_t7_ParamLimits

0x4c26,	// (0x00078e57) main_mup_eq_pane_t7

0x4c3a,	// (0x00078e6b) main_mup_eq_pane_t8_ParamLimits

0x4c3a,	// (0x00078e6b) main_mup_eq_pane_t8

0x4c4e,	// (0x00078e7f) main_mup_eq_pane_t9_ParamLimits

0x4c4e,	// (0x00078e7f) main_mup_eq_pane_t9

0x4c68,	// (0x00078e99) main_mup_eq_pane_t10_ParamLimits

0x4c68,	// (0x00078e99) main_mup_eq_pane_t10

0x0009,

0xf474,	// (0x000836a5) main_mup_eq_pane_t_ParamLimits

0xf474,	// (0x000836a5) main_mup_eq_pane_t

0x4d17,	// (0x00078f48) mup_equalizer_pane_cp5_ParamLimits

0x4d2b,	// (0x00078f5c) mup_equalizer_pane_cp6_ParamLimits

0x4d3f,	// (0x00078f70) mup_equalizer_pane_cp7_ParamLimits

0xa978,	// (0x0007eba9) main_gallery_pane

0xbdaf,	// (0x0007ffe0) smil2_volume_pane

0xbdb7,	// (0x0007ffe8) smil_status_volume_pane_g1_ParamLimits

0xbdca,	// (0x0007fffb) smil_status_volume_pane_g2_ParamLimits

0xbddd,	// (0x0008000e) smil_status_volume_pane_g3_ParamLimits

0xf62a,	// (0x0008385b) smil_status_volume_pane_g_ParamLimits

0xbf3e,	// (0x0008016f) bg_popup_window_pane_cp07_ParamLimits

0xbf4c,	// (0x0008017d) blid_firmament_pane

0x66aa,	// (0x0007a8db) aid_size_cell_gallery_ParamLimits

0x66aa,	// (0x0007a8db) aid_size_cell_gallery

0x66c0,	// (0x0007a8f1) grid_gallery_pane_ParamLimits

0x66c0,	// (0x0007a8f1) grid_gallery_pane

0x66d9,	// (0x0007a90a) cell_gallery_pane_ParamLimits

0x66d9,	// (0x0007a90a) cell_gallery_pane

0xc06f,	// (0x000802a0) bg_cell_gallery_focus_pane_ParamLimits

0xc06f,	// (0x000802a0) bg_cell_gallery_focus_pane

0xc081,	// (0x000802b2) cell_gallery_pane_g1_ParamLimits

0xc081,	// (0x000802b2) cell_gallery_pane_g1

0x6722,	// (0x0007a953) cell_gallery_pane_g2_ParamLimits

0x6722,	// (0x0007a953) cell_gallery_pane_g2

0x672f,	// (0x0007a960) cell_gallery_pane_g3_ParamLimits

0x672f,	// (0x0007a960) cell_gallery_pane_g3

0xc08d,	// (0x000802be) cell_gallery_pane_g4_ParamLimits

0xc08d,	// (0x000802be) cell_gallery_pane_g4

0x0003,

0xf6d8,	// (0x00083909) cell_gallery_pane_g_ParamLimits

0xf6d8,	// (0x00083909) cell_gallery_pane_g

0xc099,	// (0x000802ca) bg_cell_gallery_focus_pane_g1

0xc0a1,	// (0x000802d2) bg_cell_gallery_focus_pane_g2

0xc0a9,	// (0x000802da) bg_cell_gallery_focus_pane_g3

0xc0b1,	// (0x000802e2) bg_cell_gallery_focus_pane_g4

0xc0b9,	// (0x000802ea) bg_cell_gallery_focus_pane_g5

0xc0c1,	// (0x000802f2) bg_cell_gallery_focus_pane_g6

0xc0c9,	// (0x000802fa) bg_cell_gallery_focus_pane_g7

0xc0d1,	// (0x00080302) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6e1,	// (0x00083912) bg_cell_gallery_focus_pane_g

0xc0d9,	// (0x0008030a) aid_firma_cardinal

0xc0ed,	// (0x0008031e) blid_firmament_pane_t1

0xc104,	// (0x00080335) blid_firmament_pane_t2

0xc11b,	// (0x0008034c) blid_firmament_pane_t3

0xc132,	// (0x00080363) blid_firmament_pane_t4

0x0003,

0xf6f2,	// (0x00083923) blid_firmament_pane_t

0xc149,	// (0x0008037a) blid_sat_info_pane

0xc159,	// (0x0008038a) blid_sat_info_pane_g1

0xc159,	// (0x0008038a) blid_sat_info_pane_g2

0x0001,

0xf6fb,	// (0x0008392c) blid_sat_info_pane_g

0xc163,	// (0x00080394) blid_sat_info_pane_t1

0xc171,	// (0x000803a2) smil2_volume_content_pane

0xc17a,	// (0x000803ab) smil2_volume_pane_g1

0xc182,	// (0x000803b3) smil2_volume_content_pane_g1

0xc18b,	// (0x000803bc) smil2_volume_content_pane_g2

0xc194,	// (0x000803c5) smil2_volume_content_pane_g3

0xc19d,	// (0x000803ce) smil2_volume_content_pane_g4

0xc1a6,	// (0x000803d7) smil2_volume_content_pane_g5

0xc1af,	// (0x000803e0) smil2_volume_content_pane_g6

0xc1b8,	// (0x000803e9) smil2_volume_content_pane_g7

0xc1c1,	// (0x000803f2) smil2_volume_content_pane_g8

0xc1ca,	// (0x000803fb) smil2_volume_content_pane_g9

0xc1d3,	// (0x00080404) smil2_volume_content_pane_g10

0x0009,

0xf700,	// (0x00083931) smil2_volume_content_pane_g

0x2779,	// (0x000769aa) cale_week_day_heading_pane_t1_ParamLimits

0x27a3,	// (0x000769d4) cale_week_day_heading_pane_t2_ParamLimits

0x27cd,	// (0x000769fe) cale_week_day_heading_pane_t3_ParamLimits

0x27f7,	// (0x00076a28) cale_week_day_heading_pane_t4_ParamLimits

0x2821,	// (0x00076a52) cale_week_day_heading_pane_t5_ParamLimits

0x284b,	// (0x00076a7c) cale_week_day_heading_pane_t6_ParamLimits

0x2877,	// (0x00076aa8) cale_week_day_heading_pane_t7_ParamLimits

0xf1ec,	// (0x0008341d) cale_week_day_heading_pane_t_ParamLimits

0x28a1,	// (0x00076ad2) bg_cale_side_pane_ParamLimits

0x28af,	// (0x00076ae0) cale_week_time_pane_t1_ParamLimits

0x28c7,	// (0x00076af8) cale_week_time_pane_t2_ParamLimits

0x28df,	// (0x00076b10) cale_week_time_pane_t3_ParamLimits

0x28f7,	// (0x00076b28) cale_week_time_pane_t4_ParamLimits

0x290f,	// (0x00076b40) cale_week_time_pane_t5_ParamLimits

0x2927,	// (0x00076b58) cale_week_time_pane_t6_ParamLimits

0x293f,	// (0x00076b70) cale_week_time_pane_t7_ParamLimits

0x2957,	// (0x00076b88) cale_week_time_pane_t8_ParamLimits

0xf1fb,	// (0x0008342c) cale_week_time_pane_t_ParamLimits

0x296f,	// (0x00076ba0) cell_cale_week_pane_g2_ParamLimits

0x28a1,	// (0x00076ad2) bg_cale_side_pane_cp01_ParamLimits

0x3bb6,	// (0x00077de7) cale_month_week_pane_t1_ParamLimits

0x3bcd,	// (0x00077dfe) cale_month_week_pane_t2_ParamLimits

0x3be4,	// (0x00077e15) cale_month_week_pane_t3_ParamLimits

0x3bfb,	// (0x00077e2c) cale_month_week_pane_t4_ParamLimits

0x3c12,	// (0x00077e43) cale_month_week_pane_t5_ParamLimits

0x3c29,	// (0x00077e5a) cale_month_week_pane_t6_ParamLimits

0xf2d4,	// (0x00083505) cale_month_week_pane_t_ParamLimits

0xabcf,	// (0x0007ee00) cell_cale_month_pane_g1_ParamLimits

0xa978,	// (0x0007eba9) main_cale_event_viewer_pane

0xa978,	// (0x0007eba9) listscroll_cale_event_viewer_pane

0xc1dc,	// (0x0008040d) list_cale_ev_pane

0xc1e4,	// (0x00080415) scroll_pane_cp023

0xc1f0,	// (0x00080421) field_cale_ev_pane_ParamLimits

0xc1f0,	// (0x00080421) field_cale_ev_pane

0xc20e,	// (0x0008043f) field_cale_ev_content_pane_ParamLimits

0xc20e,	// (0x0008043f) field_cale_ev_content_pane

0xc21a,	// (0x0008044b) field_cale_ev_pane_g1_ParamLimits

0xc21a,	// (0x0008044b) field_cale_ev_pane_g1

0xc226,	// (0x00080457) field_cale_ev_pane_g2_ParamLimits

0xc226,	// (0x00080457) field_cale_ev_pane_g2

0xc23e,	// (0x0008046f) field_cale_ev_pane_g3_ParamLimits

0xc23e,	// (0x0008046f) field_cale_ev_pane_g3

0x0002,

0xf715,	// (0x00083946) field_cale_ev_pane_g_ParamLimits

0xf715,	// (0x00083946) field_cale_ev_pane_g

0xc256,	// (0x00080487) field_cale_ev_pane_t1_ParamLimits

0xc256,	// (0x00080487) field_cale_ev_pane_t1

0xc26d,	// (0x0008049e) field_cale_ev_content_pane_t1_ParamLimits

0xc26d,	// (0x0008049e) field_cale_ev_content_pane_t1

0x4de9,	// (0x0007901a) bg_button_pane_cp01

0x2291,	// (0x000764c2) listscroll_cale_week_pane_ParamLimits

0x256a,	// (0x0007679b) popup_toolbar_window_cp01

0x270d,	// (0x0007693e) listscroll_cale_week_pane_t1_ParamLimits

0x2291,	// (0x000764c2) listscroll_cale_day_pane_ParamLimits

0x3db7,	// (0x00077fe8) popup_toolbar_window_cp02

0x270d,	// (0x0007693e) listscroll_cale_day_pane_t1_ParamLimits

0x2291,	// (0x000764c2) main_cale_month_pane_ParamLimits

0x5c56,	// (0x00079e87) popup_toolbar_window_cp03_ParamLimits

0x5c56,	// (0x00079e87) popup_toolbar_window_cp03

0x5149,	// (0x0007937a) main_image_pane_g2_ParamLimits

0x5149,	// (0x0007937a) main_image_pane_g2

0x515a,	// (0x0007938b) main_image_pane_g3_ParamLimits

0x515a,	// (0x0007938b) main_image_pane_g3

0x0002,

0xf506,	// (0x00083737) main_image_pane_g_ParamLimits

0xf506,	// (0x00083737) main_image_pane_g

0x516b,	// (0x0007939c) main_image_pane_t1_ParamLimits

0x5182,	// (0x000793b3) main_image_pane_t2_ParamLimits

0x5182,	// (0x000793b3) main_image_pane_t2

0x5194,	// (0x000793c5) main_image_pane_t3_ParamLimits

0x5194,	// (0x000793c5) main_image_pane_t3

0x51bc,	// (0x000793ed) main_image_pane_t4_ParamLimits

0x51bc,	// (0x000793ed) main_image_pane_t4

0x0003,

0xf50d,	// (0x0008373e) main_image_pane_t_ParamLimits

0xf50d,	// (0x0008373e) main_image_pane_t

0x51dc,	// (0x0007940d) popup_image_details_window_cp01

0x51e6,	// (0x00079417) popup_toobar_trans_pane_cp01_ParamLimits

0x51e6,	// (0x00079417) popup_toobar_trans_pane_cp01

0x5b01,	// (0x00079d32) popup_image_details_window_ParamLimits

0x5b01,	// (0x00079d32) popup_image_details_window

0xbd10,	// (0x0007ff41) popup_image_focus_window

0x5f1c,	// (0x0007a14d) camera2_autofocus_pane_ParamLimits

0x5f1c,	// (0x0007a14d) camera2_autofocus_pane

0xa978,	// (0x0007eba9) bg_popup_sub_pane_cp06

0xc28b,	// (0x000804bc) popup_image_focus_window_g1

0xc293,	// (0x000804c4) popup_image_focus_window_g2

0xc29b,	// (0x000804cc) popup_image_focus_window_g3

0xc2a3,	// (0x000804d4) popup_image_focus_window_g4

0x0003,

0xf71c,	// (0x0008394d) popup_image_focus_window_g

0xc2ab,	// (0x000804dc) popup_image_focus_window_t1

0xc2b9,	// (0x000804ea) popup_image_focus_window_t2

0xc2c9,	// (0x000804fa) popup_image_focus_window_t3

0x0002,

0xf725,	// (0x00083956) popup_image_focus_window_t

0xc2d7,	// (0x00080508) camera2_autofocus_pane_g1

0x17e5,	// (0x00075a16) bg_tb_trans_pane_cp01

0xc2e5,	// (0x00080516) popup_image_details_window_g1

0xc2f8,	// (0x00080529) popup_image_details_window_g2

0x0002,

0xf737,	// (0x00083968) popup_image_details_window_g

0xc321,	// (0x00080552) popup_image_details_window_t1

0xc333,	// (0x00080564) popup_image_details_window_t2

0xc34c,	// (0x0008057d) popup_image_details_window_t3

0xc360,	// (0x00080591) popup_image_details_window_t4

0xc37b,	// (0x000805ac) popup_image_details_window_t5

0x0004,

0xf73e,	// (0x0008396f) popup_image_details_window_t

0x227d,	// (0x000764ae) bg_calc_paper_pane_ParamLimits

0xa978,	// (0x0007eba9) grid_highlight_pane_cp013

0xa9f8,	// (0x0007ec29) list_calc_pane_ParamLimits

0xaa0a,	// (0x0007ec3b) scroll_pane_cp024

0x2291,	// (0x000764c2) bg_calc_display_pane_ParamLimits

0x229d,	// (0x000764ce) calc_display_pane_t1_ParamLimits

0x22af,	// (0x000764e0) calc_display_pane_t2_ParamLimits

0xaa12,	// (0x0007ec43) calc_display_pane_t3_ParamLimits

0xf16e,	// (0x0008339f) calc_display_pane_t_ParamLimits

0x23bf,	// (0x000765f0) cell_calc_pane_g2

0x0001,

0xf18b,	// (0x000833bc) cell_calc_pane_g

0x23c8,	// (0x000765f9) cell_calc_pane_t1

0x23d7,	// (0x00076608) grid_highlight_pane_cp02_ParamLimits

0x23ed,	// (0x0007661e) toolbar_button_pane_cp01_ParamLimits

0x23ed,	// (0x0007661e) toolbar_button_pane_cp01

0x5228,	// (0x00079459) temp_image_control_pane_ParamLimits

0x5228,	// (0x00079459) temp_image_control_pane

0x17e5,	// (0x00075a16) main_mp3_pane

0xc395,	// (0x000805c6) temp_image_control_pane_g1_ParamLimits

0xc395,	// (0x000805c6) temp_image_control_pane_g1

0xc3a3,	// (0x000805d4) temp_image_control_pane_g2_ParamLimits

0xc3a3,	// (0x000805d4) temp_image_control_pane_g2

0xc3b5,	// (0x000805e6) temp_image_control_pane_g3_ParamLimits

0xc3b5,	// (0x000805e6) temp_image_control_pane_g3

0x676c,	// (0x0007a99d) temp_image_control_pane_g4_ParamLimits

0x676c,	// (0x0007a99d) temp_image_control_pane_g4

0x0003,

0xf749,	// (0x0008397a) temp_image_control_pane_g_ParamLimits

0xf749,	// (0x0008397a) temp_image_control_pane_g

0xc395,	// (0x000805c6) main_mp3_pane_g1

0x677f,	// (0x0007a9b0) main_mp3_pane_g2

0x0007,

0xf752,	// (0x00083983) main_mp3_pane_g

0xc3f8,	// (0x00080629) main_mp3_pane_t1

0x2af4,	// (0x00076d25) main_camera_pane_g8_ParamLimits

0x2af4,	// (0x00076d25) main_camera_pane_g8

0x2ca1,	// (0x00076ed2) main_video_pane_g7_ParamLimits

0x2ca1,	// (0x00076ed2) main_video_pane_g7

0xec10,	// (0x00082e41) main_camera2_pane_t7_ParamLimits

0xec10,	// (0x00082e41) main_camera2_pane_t7

0x3299,	// (0x000774ca) scroll_pane_cp025_ParamLimits

0x3299,	// (0x000774ca) scroll_pane_cp025

0x32ad,	// (0x000774de) scroll_pane_cp026_ParamLimits

0x32ad,	// (0x000774de) scroll_pane_cp026

0x32bc,	// (0x000774ed) wml_content_pane_ParamLimits

0xa978,	// (0x0007eba9) main_touch_calib_pane

0x6849,	// (0x0007aa7a) main_touch_calib_pane_g1

0x6855,	// (0x0007aa86) main_touch_calib_pane_g2

0x6861,	// (0x0007aa92) main_touch_calib_pane_g3

0x686d,	// (0x0007aa9e) main_touch_calib_pane_g4

0x0003,

0xf770,	// (0x000839a1) main_touch_calib_pane_g

0x6879,	// (0x0007aaaa) main_touch_calib_pane_t1

0x6893,	// (0x0007aac4) main_touch_calib_pane_t2

0x0004,

0xf779,	// (0x000839aa) main_touch_calib_pane_t

0x4687,	// (0x000788b8) mup_progress_pane_cp02

0x46bc,	// (0x000788ed) navi_pane_g1

0x4775,	// (0x000789a6) navi_pane_mp_t3

0x17e5,	// (0x00075a16) main_mp3_pane_ParamLimits

0x5c94,	// (0x00079ec5) navi_pane_ParamLimits

0xc395,	// (0x000805c6) main_mp3_pane_g1_ParamLimits

0x677f,	// (0x0007a9b0) main_mp3_pane_g2_ParamLimits

0x678d,	// (0x0007a9be) main_mp3_pane_g3_ParamLimits

0x678d,	// (0x0007a9be) main_mp3_pane_g3

0x679b,	// (0x0007a9cc) main_mp3_pane_g4_ParamLimits

0x679b,	// (0x0007a9cc) main_mp3_pane_g4

0xc3c5,	// (0x000805f6) main_mp3_pane_g5_ParamLimits

0xc3c5,	// (0x000805f6) main_mp3_pane_g5

0xc3d3,	// (0x00080604) main_mp3_pane_g6_ParamLimits

0xc3d3,	// (0x00080604) main_mp3_pane_g6

0xc3e0,	// (0x00080611) main_mp3_pane_g7_ParamLimits

0xc3e0,	// (0x00080611) main_mp3_pane_g7

0xc3ec,	// (0x0008061d) main_mp3_pane_g8_ParamLimits

0xc3ec,	// (0x0008061d) main_mp3_pane_g8

0xf752,	// (0x00083983) main_mp3_pane_g_ParamLimits

0x67a7,	// (0x0007a9d8) main_mp3_pane_t2

0x67b5,	// (0x0007a9e6) main_mp3_pane_t3

0xc406,	// (0x00080637) main_mp3_pane_t4

0xc414,	// (0x00080645) main_mp3_pane_t5

0x0005,

0xf763,	// (0x00083994) main_mp3_pane_t

0xc422,	// (0x00080653) mup_progress_pane_cp01

0xa9a6,	// (0x0007ebd7) aid_zoom_text_secondary2

0xc1dc,	// (0x0008040d) list_cale_ev2_pane

0xc1e4,	// (0x00080415) scroll_pane_cp023_ParamLimits

0x68e9,	// (0x0007ab1a) field_cale_ev2_pane_ParamLimits

0x68e9,	// (0x0007ab1a) field_cale_ev2_pane

0x6909,	// (0x0007ab3a) field_cale_ev2_pane_g1_ParamLimits

0x6909,	// (0x0007ab3a) field_cale_ev2_pane_g1

0x6915,	// (0x0007ab46) field_cale_ev2_pane_g2_ParamLimits

0x6915,	// (0x0007ab46) field_cale_ev2_pane_g2

0x692d,	// (0x0007ab5e) field_cale_ev2_pane_g3_ParamLimits

0x692d,	// (0x0007ab5e) field_cale_ev2_pane_g3

0x0003,

0xf784,	// (0x000839b5) field_cale_ev2_pane_g_ParamLimits

0xf784,	// (0x000839b5) field_cale_ev2_pane_g

0xc42a,	// (0x0008065b) field_cale_ev2_pane_t1_ParamLimits

0xc42a,	// (0x0008065b) field_cale_ev2_pane_t1

0xc441,	// (0x00080672) field_cale_ev2_pane_t2_ParamLimits

0xc441,	// (0x00080672) field_cale_ev2_pane_t2

0x0001,

0xf78d,	// (0x000839be) field_cale_ev2_pane_t_ParamLimits

0xf78d,	// (0x000839be) field_cale_ev2_pane_t

0x4f18,	// (0x00079149) main_postcard_pane_g5_ParamLimits

0x4f18,	// (0x00079149) main_postcard_pane_g5

0x4f2e,	// (0x0007915f) main_postcard_pane_g6_ParamLimits

0x4f2e,	// (0x0007915f) main_postcard_pane_g6

0x2a3f,	// (0x00076c70) camera2_autofocus_pane_cp_ParamLimits

0x2a3f,	// (0x00076c70) camera2_autofocus_pane_cp

0x17e5,	// (0x00075a16) main_mup3_pane

0x6965,	// (0x0007ab96) main_mup3_pane_g1_ParamLimits

0x6965,	// (0x0007ab96) main_mup3_pane_g1

0x6987,	// (0x0007abb8) main_mup3_pane_g2_ParamLimits

0x6987,	// (0x0007abb8) main_mup3_pane_g2

0x6a05,	// (0x0007ac36) main_mup3_pane_g3_ParamLimits

0x6a05,	// (0x0007ac36) main_mup3_pane_g3

0x6a4b,	// (0x0007ac7c) main_mup3_pane_g4_ParamLimits

0x6a4b,	// (0x0007ac7c) main_mup3_pane_g4

0x6a91,	// (0x0007acc2) main_mup3_pane_g5_ParamLimits

0x6a91,	// (0x0007acc2) main_mup3_pane_g5

0x6ad7,	// (0x0007ad08) main_mup3_pane_g6_ParamLimits

0x6ad7,	// (0x0007ad08) main_mup3_pane_g6

0xc456,	// (0x00080687) main_mup3_pane_g7_ParamLimits

0xc456,	// (0x00080687) main_mup3_pane_g7

0x0007,

0xf79d,	// (0x000839ce) main_mup3_pane_g_ParamLimits

0xf79d,	// (0x000839ce) main_mup3_pane_g

0x6b55,	// (0x0007ad86) main_mup3_pane_t1_ParamLimits

0x6b55,	// (0x0007ad86) main_mup3_pane_t1

0x6bc9,	// (0x0007adfa) main_mup3_pane_t2_ParamLimits

0x6bc9,	// (0x0007adfa) main_mup3_pane_t2

0x6c9d,	// (0x0007aece) main_mup3_pane_t4_ParamLimits

0x6c9d,	// (0x0007aece) main_mup3_pane_t4

0x6cf3,	// (0x0007af24) main_mup3_pane_t5_ParamLimits

0x6cf3,	// (0x0007af24) main_mup3_pane_t5

0x6daf,	// (0x0007afe0) main_mup3_pane_t6_ParamLimits

0x6daf,	// (0x0007afe0) main_mup3_pane_t6

0x0005,

0xf7ae,	// (0x000839df) main_mup3_pane_t_ParamLimits

0xf7ae,	// (0x000839df) main_mup3_pane_t

0x6e67,	// (0x0007b098) mup3_progress_pane_ParamLimits

0x6e67,	// (0x0007b098) mup3_progress_pane

0x6efd,	// (0x0007b12e) popup_mup3_control_window_ParamLimits

0x6efd,	// (0x0007b12e) popup_mup3_control_window

0xc464,	// (0x00080695) popup_mup3_text_window

0x6f2f,	// (0x0007b160) mup3_progress_pane_t1

0x6f4e,	// (0x0007b17f) mup3_progress_pane_t2

0xc46c,	// (0x0008069d) mup3_progress_pane_t3

0x0002,

0xf7bb,	// (0x000839ec) mup3_progress_pane_t

0xc489,	// (0x000806ba) mup_progress_pane_cp03

0xa978,	// (0x0007eba9) bg_tb_trans_pane_cp04

0x6f6d,	// (0x0007b19e) mup3_volume_pane

0x6f75,	// (0x0007b1a6) popup_mup3_control_window_g1

0x6f7e,	// (0x0007b1af) mup3_volume_pane_g1

0x6f87,	// (0x0007b1b8) mup3_volume_pane_g2

0x6f90,	// (0x0007b1c1) mup3_volume_pane_g3

0x0002,

0xf7c2,	// (0x000839f3) mup3_volume_pane_g

0xa978,	// (0x0007eba9) bg_tb_trans_pane_cp03

0xc499,	// (0x000806ca) popup_mup3_text_window_g1

0xc4a1,	// (0x000806d2) popup_mup3_text_window_t1

0x238e,	// (0x000765bf) list_calc_item_pane_g1_ParamLimits

0xbeac,	// (0x000800dd) mup_volume_pane_cp_g1

0x68ad,	// (0x0007aade) main_touch_calib_pane_t3

0x68c1,	// (0x0007aaf2) main_touch_calib_pane_t4

0x68d5,	// (0x0007ab06) main_touch_calib_pane_t5

0xa982,	// (0x0007ebb3) aid_cell_size_toolbar2

0xa98a,	// (0x0007ebbb) aid_popup3_width_pane

0xa996,	// (0x0007ebc7) aid_zoom_text_msg_primary

0xaad2,	// (0x0007ed03) vorec_t7

0x22f6,	// (0x00076527) bg_calc_paper_pane_g1_ParamLimits

0x2302,	// (0x00076533) bg_calc_paper_pane_g2_ParamLimits

0x230e,	// (0x0007653f) bg_calc_paper_pane_g3_ParamLimits

0x231a,	// (0x0007654b) bg_calc_paper_pane_g4_ParamLimits

0x2326,	// (0x00076557) bg_calc_paper_pane_g5_ParamLimits

0x2332,	// (0x00076563) bg_calc_paper_pane_g6_ParamLimits

0x2341,	// (0x00076572) bg_calc_paper_pane_g7_ParamLimits

0x2350,	// (0x00076581) bg_calc_paper_pane_g8_ParamLimits

0xf175,	// (0x000833a6) bg_calc_paper_pane_g_ParamLimits

0x2363,	// (0x00076594) calc_bg_paper_pane_g9_ParamLimits

0x2b99,	// (0x00076dca) image_qvga_pane_ParamLimits

0x2b99,	// (0x00076dca) image_qvga_pane

0x1f17,	// (0x00076148) bg_popup_sub_pane_cp04_ParamLimits

0x50a7,	// (0x000792d8) popup_mup_playback_window_g1_ParamLimits

0x50b3,	// (0x000792e4) popup_mup_playback_window_t1_ParamLimits

0x50c8,	// (0x000792f9) popup_mup_playback_window_t2_ParamLimits

0xf501,	// (0x00083732) popup_mup_playback_window_t_ParamLimits

0x640f,	// (0x0007a640) main_mup2_pane_g3_ParamLimits

0x640f,	// (0x0007a640) main_mup2_pane_g3

0x2f2c,	// (0x0007715d) popup_toolbar_window_cp04

0xaf06,	// (0x0007f137) popup_call2_audio_second_window_g3_ParamLimits

0xaf06,	// (0x0007f137) popup_call2_audio_second_window_g3

0xb310,	// (0x0007f541) popup_call2_audio_first_window_g4_ParamLimits

0xb310,	// (0x0007f541) popup_call2_audio_first_window_g4

0xb98f,	// (0x0007fbc0) popup_call2_audio_in_window_g4_ParamLimits

0xb98f,	// (0x0007fbc0) popup_call2_audio_in_window_g4

0x50dd,	// (0x0007930e) aid_area_sk_bg_cut_ParamLimits

0x50dd,	// (0x0007930e) aid_area_sk_bg_cut

0x50fb,	// (0x0007932c) aid_area_sk_bg_cut_2_ParamLimits

0x50fb,	// (0x0007932c) aid_area_sk_bg_cut_2

0x6712,	// (0x0007a943) aid_placing_details_win

0x671a,	// (0x0007a94b) aid_placing_details_win_2

0xc2d7,	// (0x00080508) camera2_autofocus_pane_g1_ParamLimits

0x1790,	// (0x000759c1) popup_fixed_preview_cale_window_ParamLimits

0x1790,	// (0x000759c1) popup_fixed_preview_cale_window

0x4831,	// (0x00078a62) navi_slider_pane_g3

0x483a,	// (0x00078a6b) navi_slider_pane_g4

0x4843,	// (0x00078a74) navi_slider_pane_g5

0x4831,	// (0x00078a62) navi_slider_pane_g6

0xacee,	// (0x0007ef1f) navi_slider_pane_g7

0x4d5c,	// (0x00078f8d) mup_scale_pane_g3

0x4d65,	// (0x00078f96) mup_scale_pane_g4

0x4d6e,	// (0x00078f9f) mup_scale_pane_g5

0x4d77,	// (0x00078fa8) mup_scale_pane_g6

0x4d80,	// (0x00078fb1) mup_scale_pane_g7

0x4831,	// (0x00078a62) cams2_slider_pane_g3

0xbf2e,	// (0x0008015f) cams2_slider_pane_g4

0xec7e,	// (0x00082eaf) cams2_slider_pane_g5

0x4831,	// (0x00078a62) cams2_slider_pane_g6

0xec86,	// (0x00082eb7) cams2_slider_pane_g7

0xc159,	// (0x0008038a) camera2_autofocus_pane_cp_g1

0xc4af,	// (0x000806e0) bg_popup_preview_window_pane_cp02_ParamLimits

0xc4af,	// (0x000806e0) bg_popup_preview_window_pane_cp02

0xc4bb,	// (0x000806ec) list_fp_cale_pane_ParamLimits

0xc4bb,	// (0x000806ec) list_fp_cale_pane

0xc4c7,	// (0x000806f8) popup_fixed_preview_cale_window_t1_ParamLimits

0xc4c7,	// (0x000806f8) popup_fixed_preview_cale_window_t1

0x6f99,	// (0x0007b1ca) popup_fixed_preview_cale_window_t2_ParamLimits

0x6f99,	// (0x0007b1ca) popup_fixed_preview_cale_window_t2

0x6fae,	// (0x0007b1df) popup_fixed_preview_cale_window_t3_ParamLimits

0x6fae,	// (0x0007b1df) popup_fixed_preview_cale_window_t3

0x0002,

0xf7c9,	// (0x000839fa) popup_fixed_preview_cale_window_t_ParamLimits

0xf7c9,	// (0x000839fa) popup_fixed_preview_cale_window_t

0x6fc3,	// (0x0007b1f4) list_single_fp_cale_pane_ParamLimits

0x6fc3,	// (0x0007b1f4) list_single_fp_cale_pane

0xc4e5,	// (0x00080716) list_single_fp_cale_pane_g1_ParamLimits

0xc4e5,	// (0x00080716) list_single_fp_cale_pane_g1

0xc4f1,	// (0x00080722) list_single_fp_cale_pane_g2_ParamLimits

0xc4f1,	// (0x00080722) list_single_fp_cale_pane_g2

0x0002,

0xf7d0,	// (0x00083a01) list_single_fp_cale_pane_g_ParamLimits

0xf7d0,	// (0x00083a01) list_single_fp_cale_pane_g

0xc50a,	// (0x0008073b) list_single_fp_cale_pane_t1_ParamLimits

0xc50a,	// (0x0008073b) list_single_fp_cale_pane_t1

0xc51c,	// (0x0008074d) list_single_fp_cale_pane_t2_ParamLimits

0xc51c,	// (0x0008074d) list_single_fp_cale_pane_t2

0x0001,

0xf7d7,	// (0x00083a08) list_single_fp_cale_pane_t_ParamLimits

0xf7d7,	// (0x00083a08) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xa978,	// (0x0007eba9) main_dialer_pane

0x6fd8,	// (0x0007b209) aid_cell_size_keypad

0x6fe2,	// (0x0007b213) dialer_ne_pane

0x6fea,	// (0x0007b21b) grid_dialer_command_1_pane

0x6ff2,	// (0x0007b223) grid_dialer_command_2_pane

0x6ffa,	// (0x0007b22b) grid_dialer_keypad_pane

0x700c,	// (0x0007b23d) bg_popup_call_pane_cp06_ParamLimits

0x700c,	// (0x0007b23d) bg_popup_call_pane_cp06

0x7018,	// (0x0007b249) dialer_ne_clear_pane_ParamLimits

0x7018,	// (0x0007b249) dialer_ne_clear_pane

0xc54f,	// (0x00080780) dialer_ne_pane_g1

0xc557,	// (0x00080788) dialer_ne_pane_t1_ParamLimits

0xc557,	// (0x00080788) dialer_ne_pane_t1

0x7024,	// (0x0007b255) dialer_ne_pane_t2_ParamLimits

0x7024,	// (0x0007b255) dialer_ne_pane_t2

0x704e,	// (0x0007b27f) dialer_ne_pane_t3_ParamLimits

0x704e,	// (0x0007b27f) dialer_ne_pane_t3

0x0002,

0xf7dc,	// (0x00083a0d) dialer_ne_pane_t_ParamLimits

0xf7dc,	// (0x00083a0d) dialer_ne_pane_t

0x707e,	// (0x0007b2af) dialer_ne_pane_t3_copy1_ParamLimits

0x707e,	// (0x0007b2af) dialer_ne_pane_t3_copy1

0x70ad,	// (0x0007b2de) cell_dialer_keypad_pane_ParamLimits

0x70ad,	// (0x0007b2de) cell_dialer_keypad_pane

0x70c4,	// (0x0007b2f5) cell_dialer_command_1_pane_ParamLimits

0x70c4,	// (0x0007b2f5) cell_dialer_command_1_pane

0x70da,	// (0x0007b30b) cell_dialer_command_2_pane_ParamLimits

0x70da,	// (0x0007b30b) cell_dialer_command_2_pane

0xc569,	// (0x0008079a) bg_button_pane_cp02_ParamLimits

0xc569,	// (0x0008079a) bg_button_pane_cp02

0x70e9,	// (0x0007b31a) cell_dialer_keypad_pane_g1_ParamLimits

0x70e9,	// (0x0007b31a) cell_dialer_keypad_pane_g1

0xc569,	// (0x0008079a) bg_button_pane_cp03_ParamLimits

0xc569,	// (0x0008079a) bg_button_pane_cp03

0x70fd,	// (0x0007b32e) cell_dialer_command_1_pane_g1_ParamLimits

0x70fd,	// (0x0007b32e) cell_dialer_command_1_pane_g1

0xc575,	// (0x000807a6) bg_button_pane_cp04

0x7111,	// (0x0007b342) cell_dialer_command_2_pane_g1

0x4820,	// (0x00078a51) bg_button_pane_cp06

0xc57d,	// (0x000807ae) dialer_ne_clear_pane_g1

0x46c8,	// (0x000788f9) navi_pane_g2

0x46f6,	// (0x00078927) navi_pane_g3

0x0002,

0xf404,	// (0x00083635) navi_pane_g

0x4783,	// (0x000789b4) navi_pane_mv_g2

0x47aa,	// (0x000789db) navi_pane_mv_g5

0x47b2,	// (0x000789e3) navi_pane_mv_t1

0x2291,	// (0x000764c2) main_clock2_pane

0x7149,	// (0x0007b37a) main_clock2_list_pane_ParamLimits

0x7149,	// (0x0007b37a) main_clock2_list_pane

0x7181,	// (0x0007b3b2) main_clock2_pane_t1_ParamLimits

0x7181,	// (0x0007b3b2) main_clock2_pane_t1

0x71bd,	// (0x0007b3ee) main_clock2_pane_t2_ParamLimits

0x71bd,	// (0x0007b3ee) main_clock2_pane_t2

0x0004,

0xf7e3,	// (0x00083a14) main_clock2_pane_t_ParamLimits

0xf7e3,	// (0x00083a14) main_clock2_pane_t

0x725a,	// (0x0007b48b) popup_clock_analogue_window_cp03_ParamLimits

0x725a,	// (0x0007b48b) popup_clock_analogue_window_cp03

0x727f,	// (0x0007b4b0) popup_clock_digital_window_cp02_ParamLimits

0x727f,	// (0x0007b4b0) popup_clock_digital_window_cp02

0x72f0,	// (0x0007b521) main_clock2_list_single_pane_ParamLimits

0x72f0,	// (0x0007b521) main_clock2_list_single_pane

0x4820,	// (0x00078a51) list_highlight_pane_cp05

0xc585,	// (0x000807b6) main_clock2_list_single_pane_t1

0x2f2c,	// (0x0007715d) popup_toolbar_window_cp04_ParamLimits

0x673c,	// (0x0007a96d) camera2_autofocus_pane_g2_ParamLimits

0x673c,	// (0x0007a96d) camera2_autofocus_pane_g2

0x6748,	// (0x0007a979) camera2_autofocus_pane_g3_ParamLimits

0x6748,	// (0x0007a979) camera2_autofocus_pane_g3

0x6754,	// (0x0007a985) camera2_autofocus_pane_g4_ParamLimits

0x6754,	// (0x0007a985) camera2_autofocus_pane_g4

0x6760,	// (0x0007a991) camera2_autofocus_pane_g5_ParamLimits

0x6760,	// (0x0007a991) camera2_autofocus_pane_g5

0x0004,

0xf72c,	// (0x0008395d) camera2_autofocus_pane_g_ParamLimits

0xf72c,	// (0x0008395d) camera2_autofocus_pane_g

0x6945,	// (0x0007ab76) camera2_autofocus_pane_cp_g2

0x694d,	// (0x0007ab7e) camera2_autofocus_pane_cp_g3

0x6955,	// (0x0007ab86) camera2_autofocus_pane_cp_g4

0x695d,	// (0x0007ab8e) camera2_autofocus_pane_cp_g5

0x0004,

0xf792,	// (0x000839c3) camera2_autofocus_pane_cp_g

0x7004,	// (0x0007b235) popup_dialer_spcha_window

0xa978,	// (0x0007eba9) bg_popup_sub_pane_cp07

0xc593,	// (0x000807c4) list_spcha_pane

0xc59b,	// (0x000807cc) list_single_spcha_pane_ParamLimits

0xc59b,	// (0x000807cc) list_single_spcha_pane

0xa978,	// (0x0007eba9) list_highlight_pane_cp06

0xc5ac,	// (0x000807dd) list_single_spcha_pane_t1

0xb739,	// (0x0007f96a) popup_call2_audio_out_window_g4_ParamLimits

0xb739,	// (0x0007f96a) popup_call2_audio_out_window_g4

0xa978,	// (0x0007eba9) main_imed2_pane

0xbd18,	// (0x0007ff49) popup_imed_adjust2_window

0x5b19,	// (0x00079d4a) popup_imed_trans_window_ParamLimits

0x5b19,	// (0x00079d4a) popup_imed_trans_window

0xbf97,	// (0x000801c8) popup_blid_sat_info2_window_t1

0xbfa5,	// (0x000801d6) popup_blid_sat_info2_window_t2

0x000a,

0xf6c1,	// (0x000838f2) popup_blid_sat_info2_window_t

0x739a,	// (0x0007b5cb) aid_size_cell_colour_35

0x73ba,	// (0x0007b5eb) aid_size_cell_colour_112

0x73da,	// (0x0007b60b) aid_size_cell_effect

0xbcf0,	// (0x0007ff21) bg_tb_trans_pane_cp02

0x3f1e,	// (0x0007814f) heading_imed_pane

0x73fa,	// (0x0007b62b) listscroll_imed_pane

0xc5ba,	// (0x000807eb) heading_imed_pane_g1

0xc5c2,	// (0x000807f3) heading_imed_pane_t1

0xc5d0,	// (0x00080801) grid_imed_colour_35_pane_ParamLimits

0xc5d0,	// (0x00080801) grid_imed_colour_35_pane

0x7406,	// (0x0007b637) grid_imed_effect_pane

0xc5e7,	// (0x00080818) list_imed_aspect_pane

0x741c,	// (0x0007b64d) scroll_pane_cp027_ParamLimits

0x741c,	// (0x0007b64d) scroll_pane_cp027

0x742d,	// (0x0007b65e) cell_imed_effect_pane_ParamLimits

0x742d,	// (0x0007b65e) cell_imed_effect_pane

0xc5ef,	// (0x00080820) cell_imed_colour_pane_ParamLimits

0xc5ef,	// (0x00080820) cell_imed_colour_pane

0xc631,	// (0x00080862) cell_imed_colour_pane_g1_ParamLimits

0xc631,	// (0x00080862) cell_imed_colour_pane_g1

0xc642,	// (0x00080873) hgihlgiht_grid_pane_cp016_ParamLimits

0xc642,	// (0x00080873) hgihlgiht_grid_pane_cp016

0x7454,	// (0x0007b685) cell_imed_effect_pane_g1

0x745c,	// (0x0007b68d) grid_highlight_pane_cp017

0xc653,	// (0x00080884) list_imed_single_pane_ParamLimits

0xc653,	// (0x00080884) list_imed_single_pane

0xa978,	// (0x0007eba9) list_highlight_pane_cp07

0xc668,	// (0x00080899) list_imed_aspect_pane_comp1_t1

0xbcf0,	// (0x0007ff21) bg_tb_trans_pane_cp05

0xc68a,	// (0x000808bb) popup_imed_adjust2_window_g1

0xc6b1,	// (0x000808e2) popup_imed_adjust2_window_t1

0xc6c9,	// (0x000808fa) slider_imed_adjust_pane

0xc6dd,	// (0x0008090e) slider_imed_adjust_pane_g1

0xc6ed,	// (0x0008091e) slider_imed_adjust_pane_g2

0xc6fd,	// (0x0008092e) slider_imed_adjust_pane_g3

0xc70e,	// (0x0008093f) slider_imed_adjust_pane_g4

0x0003,

0xf800,	// (0x00083a31) slider_imed_adjust_pane_g

0x7465,	// (0x0007b696) aid_size_cell_clipart2

0x7471,	// (0x0007b6a2) grid_imed_clipart_pane

0xc71f,	// (0x00080950) scroll_pane_cp031

0x747b,	// (0x0007b6ac) cell_imed_clipart_pane_ParamLimits

0x747b,	// (0x0007b6ac) cell_imed_clipart_pane

0x749d,	// (0x0007b6ce) cell_imed_clipart_pane_g1

0xa978,	// (0x0007eba9) grid_highlight_pane_cp014

0x715e,	// (0x0007b38f) main_clock2_pane_g1_ParamLimits

0x715e,	// (0x0007b38f) main_clock2_pane_g1

0x729b,	// (0x0007b4cc) aid_call2_pane_cp10

0x72ad,	// (0x0007b4de) aid_call_pane_cp10

0x45c4,	// (0x000787f5) popup_clock_analogue_window_cp10_g1

0x45c4,	// (0x000787f5) popup_clock_analogue_window_cp10_g2

0x72bf,	// (0x0007b4f0) popup_clock_analogue_window_cp10_g3

0x72bf,	// (0x0007b4f0) popup_clock_analogue_window_cp10_g4

0x45c4,	// (0x000787f5) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7ee,	// (0x00083a1f) popup_clock_analogue_window_cp10_g

0x72d1,	// (0x0007b502) popup_clock_analogue_window_cp10_t1

0x7302,	// (0x0007b533) clock_digital_number_pane_cp10_ParamLimits

0x7302,	// (0x0007b533) clock_digital_number_pane_cp10

0x731a,	// (0x0007b54b) clock_digital_number_pane_cp11_ParamLimits

0x731a,	// (0x0007b54b) clock_digital_number_pane_cp11

0x7332,	// (0x0007b563) clock_digital_number_pane_cp12_ParamLimits

0x7332,	// (0x0007b563) clock_digital_number_pane_cp12

0x734a,	// (0x0007b57b) clock_digital_number_pane_cp13_ParamLimits

0x734a,	// (0x0007b57b) clock_digital_number_pane_cp13

0x7362,	// (0x0007b593) clock_digital_separator_pane_cp10_ParamLimits

0x7362,	// (0x0007b593) clock_digital_separator_pane_cp10

0x737a,	// (0x0007b5ab) popup_clock_digital_window_cp02_t1_ParamLimits

0x737a,	// (0x0007b5ab) popup_clock_digital_window_cp02_t1

0x1f0f,	// (0x00076140) clock_digital_number_pane_cp10_g1

0x1f0f,	// (0x00076140) clock_digital_number_pane_cp10_g2

0x0001,

0xf809,	// (0x00083a3a) clock_digital_number_pane_cp10_g

0x1f0f,	// (0x00076140) clock_digital_separator_pane_cp10_g1

0x1f0f,	// (0x00076140) clock_digital_separator_pane_g2_cp10

0x47f0,	// (0x00078a21) navi_pane_vded_g4

0x47f9,	// (0x00078a2a) navi_pane_vded_g5

0x4802,	// (0x00078a33) navi_pane_vded_t1

0xa978,	// (0x0007eba9) main_vded_pane

0x74a6,	// (0x0007b6d7) main_vded_pane_g1

0x74b0,	// (0x0007b6e1) main_vded_pane_g2

0x74ba,	// (0x0007b6eb) main_vded_pane_g3

0x0002,

0xf80e,	// (0x00083a3f) main_vded_pane_g

0x74c4,	// (0x0007b6f5) main_vded_pane_t1

0x74d2,	// (0x0007b703) main_vded_pane_t2

0x0001,

0xf815,	// (0x00083a46) main_vded_pane_t

0x74e0,	// (0x0007b711) vded_slider_pane

0x74e8,	// (0x0007b719) vded_video_pane

0xc727,	// (0x00080958) vded_video_pane_g1

0x74f0,	// (0x0007b721) vded_video_pane_g2

0xc159,	// (0x0008038a) vded_video_pane_g3

0x0002,

0xf81a,	// (0x00083a4b) vded_video_pane_g

0xc731,	// (0x00080962) vded_slider_pane_g1

0xbeac,	// (0x000800dd) vded_slider_pane_g2

0xc73a,	// (0x0008096b) vded_slider_pane_g3

0xc743,	// (0x00080974) vded_slider_pane_g4

0xc74c,	// (0x0008097d) vded_slider_pane_g5

0x0004,

0xf821,	// (0x00083a52) vded_slider_pane_g

0x6ee5,	// (0x0007b116) mup3_rocker_pane_ParamLimits

0x6ee5,	// (0x0007b116) mup3_rocker_pane

0x74f9,	// (0x0007b72a) mup3_control_keys_pane_g1

0x7501,	// (0x0007b732) mup3_control_keys_pane_g2

0x7509,	// (0x0007b73a) mup3_control_keys_pane_g3

0x7511,	// (0x0007b742) mup3_control_keys_pane_g4

0x0003,

0xf82c,	// (0x00083a5d) mup3_control_keys_pane_g

0x17c7,	// (0x000759f8) popup_toolbar2_fixed_window_cp01_ParamLimits

0x17c7,	// (0x000759f8) popup_toolbar2_fixed_window_cp01

0x6f19,	// (0x0007b14a) popup_toolbar2_fixed_window_cp02_ParamLimits

0x6f19,	// (0x0007b14a) popup_toolbar2_fixed_window_cp02

0xb078,	// (0x0007f2a9) popup_call2_audio_second_window_t4_ParamLimits

0xb078,	// (0x0007f2a9) popup_call2_audio_second_window_t4

0xb5a6,	// (0x0007f7d7) popup_call2_audio_first_window_t6_ParamLimits

0xb5a6,	// (0x0007f7d7) popup_call2_audio_first_window_t6

0xb83c,	// (0x0007fa6d) popup_call2_audio_out_window_t6_ParamLimits

0xb83c,	// (0x0007fa6d) popup_call2_audio_out_window_t6

0xa978,	// (0x0007eba9) main_vitu_pane

0x7521,	// (0x0007b752) aid_size_cell_itu_ParamLimits

0x7521,	// (0x0007b752) aid_size_cell_itu

0x17e5,	// (0x00075a16) bg_popup_window_pane_cp08_ParamLimits

0x17e5,	// (0x00075a16) bg_popup_window_pane_cp08

0x7537,	// (0x0007b768) field_vitu_entry_pane_ParamLimits

0x7537,	// (0x0007b768) field_vitu_entry_pane

0x754e,	// (0x0007b77f) grid_vitu_function_pane_ParamLimits

0x754e,	// (0x0007b77f) grid_vitu_function_pane

0x7569,	// (0x0007b79a) grid_vitu_itu_pane_ParamLimits

0x7569,	// (0x0007b79a) grid_vitu_itu_pane

0x7587,	// (0x0007b7b8) cell_vitu_itu_pane_ParamLimits

0x7587,	// (0x0007b7b8) cell_vitu_itu_pane

0x75a9,	// (0x0007b7da) cell_vitu_function_pane_ParamLimits

0x75a9,	// (0x0007b7da) cell_vitu_function_pane

0x17e5,	// (0x00075a16) bg_popup_sub_pane_cp08_ParamLimits

0x17e5,	// (0x00075a16) bg_popup_sub_pane_cp08

0x75c2,	// (0x0007b7f3) field_vitu_entry_pane_t1_ParamLimits

0x75c2,	// (0x0007b7f3) field_vitu_entry_pane_t1

0xc76d,	// (0x0008099e) field_vitu_entry_pane_t2_ParamLimits

0xc76d,	// (0x0008099e) field_vitu_entry_pane_t2

0x0001,

0xf83a,	// (0x00083a6b) field_vitu_entry_pane_t_ParamLimits

0xf83a,	// (0x00083a6b) field_vitu_entry_pane_t

0xc78a,	// (0x000809bb) bg_button_pane_cp05_ParamLimits

0xc78a,	// (0x000809bb) bg_button_pane_cp05

0x75e0,	// (0x0007b811) cell_vitu_itu_pane_g1

0x75f8,	// (0x0007b829) cell_vitu_itu_pane_t1_ParamLimits

0x75f8,	// (0x0007b829) cell_vitu_itu_pane_t1

0x760a,	// (0x0007b83b) cell_vitu_itu_pane_t2_ParamLimits

0x760a,	// (0x0007b83b) cell_vitu_itu_pane_t2

0x0002,

0xf83f,	// (0x00083a70) cell_vitu_itu_pane_t_ParamLimits

0xf83f,	// (0x00083a70) cell_vitu_itu_pane_t

0xc798,	// (0x000809c9) bg_button_pane_cp07

0x763f,	// (0x0007b870) cell_vitu_function_pane_g1

0xa9f0,	// (0x0007ec21) main_calc_pane_g1

0x1607,	// (0x00075838) aid_visual_content_pane

0xa978,	// (0x0007eba9) main_vradio_pane

0x7648,	// (0x0007b879) main_vradio_pane_g1_ParamLimits

0x7648,	// (0x0007b879) main_vradio_pane_g1

0xc7a2,	// (0x000809d3) main_vradio_pane_g2_ParamLimits

0xc7a2,	// (0x000809d3) main_vradio_pane_g2

0x0001,

0xf846,	// (0x00083a77) main_vradio_pane_g_ParamLimits

0xf846,	// (0x00083a77) main_vradio_pane_g

0x7661,	// (0x0007b892) main_vradio_pane_t1_ParamLimits

0x7661,	// (0x0007b892) main_vradio_pane_t1

0x7676,	// (0x0007b8a7) main_vradio_pane_t2_ParamLimits

0x7676,	// (0x0007b8a7) main_vradio_pane_t2

0xc7af,	// (0x000809e0) main_vradio_pane_t3_ParamLimits

0xc7af,	// (0x000809e0) main_vradio_pane_t3

0x0002,

0xf84b,	// (0x00083a7c) main_vradio_pane_t_ParamLimits

0xf84b,	// (0x00083a7c) main_vradio_pane_t

0x768b,	// (0x0007b8bc) vradio_rocker_control_pane_ParamLimits

0x768b,	// (0x0007b8bc) vradio_rocker_control_pane

0x769d,	// (0x0007b8ce) vradio_station_info_pane_ParamLimits

0x769d,	// (0x0007b8ce) vradio_station_info_pane

0xc7c3,	// (0x000809f4) vradio_frequency_info_pane_ParamLimits

0xc7c3,	// (0x000809f4) vradio_frequency_info_pane

0xc159,	// (0x0008038a) vradio_station_info_pane_g1

0xc7d2,	// (0x00080a03) vradio_station_info_pane_t1_ParamLimits

0xc7d2,	// (0x00080a03) vradio_station_info_pane_t1

0xc7f4,	// (0x00080a25) vradio_station_info_pane_t2_ParamLimits

0xc7f4,	// (0x00080a25) vradio_station_info_pane_t2

0x0001,

0xf852,	// (0x00083a83) vradio_station_info_pane_t_ParamLimits

0xf852,	// (0x00083a83) vradio_station_info_pane_t

0xc806,	// (0x00080a37) vradio_tuning_pane

0xc80e,	// (0x00080a3f) vradio_rocker_control_pane_g1

0xc816,	// (0x00080a47) vradio_rocker_control_pane_g2

0xc81e,	// (0x00080a4f) vradio_rocker_control_pane_g3

0xc826,	// (0x00080a57) vradio_rocker_control_pane_g4

0xc82e,	// (0x00080a5f) vradio_rocker_control_pane_g5

0x0004,

0xf857,	// (0x00083a88) vradio_rocker_control_pane_g

0x76af,	// (0x0007b8e0) vradio_frequency_info_pane_g1

0xc836,	// (0x00080a67) vradio_frequency_info_pane_t1_ParamLimits

0xc836,	// (0x00080a67) vradio_frequency_info_pane_t1

0x76b9,	// (0x0007b8ea) vradio_tuning_pane_g1

0x76c4,	// (0x0007b8f5) vradio_tuning_pane_t1

0xa9ae,	// (0x0007ebdf) area_side_right_pane_ParamLimits

0xa9ae,	// (0x0007ebdf) area_side_right_pane

0xbcb7,	// (0x0007fee8) status_small_pane_g1

0xbcbf,	// (0x0007fef0) status_small_pane_g2

0xbcc8,	// (0x0007fef9) status_small_pane_g3

0xbcd1,	// (0x0007ff02) status_small_pane_g4

0x0003,

0xf617,	// (0x00083848) status_small_pane_g

0xbcda,	// (0x0007ff0b) status_small_pane_t1

0xa978,	// (0x0007eba9) main_video3_pane

0xc84a,	// (0x00080a7b) cams_zoom_vslider_pane

0xc852,	// (0x00080a83) image3_wide_pane_ParamLimits

0xc852,	// (0x00080a83) image3_wide_pane

0xc86c,	// (0x00080a9d) image3_wide_small_pane

0xc878,	// (0x00080aa9) main_video3_pane_g1_ParamLimits

0xc878,	// (0x00080aa9) main_video3_pane_g1

0xc894,	// (0x00080ac5) main_video3_pane_g2_ParamLimits

0xc894,	// (0x00080ac5) main_video3_pane_g2

0x0001,

0xf862,	// (0x00083a93) main_video3_pane_g_ParamLimits

0xf862,	// (0x00083a93) main_video3_pane_g

0xc8b0,	// (0x00080ae1) main_video3_pane_t1_ParamLimits

0xc8b0,	// (0x00080ae1) main_video3_pane_t1

0xc8db,	// (0x00080b0c) main_video3_pane_t2_ParamLimits

0xc8db,	// (0x00080b0c) main_video3_pane_t2

0xc906,	// (0x00080b37) main_video3_pane_t3_ParamLimits

0xc906,	// (0x00080b37) main_video3_pane_t3

0x0002,

0xf867,	// (0x00083a98) main_video3_pane_t_ParamLimits

0xf867,	// (0x00083a98) main_video3_pane_t

0xc933,	// (0x00080b64) cams_zoom_vslider_pane_g1

0xc93c,	// (0x00080b6d) cams_zoom_vslider_pane_g2

0x0001,

0xf86e,	// (0x00083a9f) cams_zoom_vslider_pane_g

0xc944,	// (0x00080b75) small_slider_vertical_pane

0xc159,	// (0x0008038a) small_slider_vertical_pane_g1

0xc159,	// (0x0008038a) small_slider_vertical_pane_g2

0xc94c,	// (0x00080b7d) small_slider_vertical_pane_g3

0x0002,

0xf873,	// (0x00083aa4) small_slider_vertical_pane_g

0xa978,	// (0x0007eba9) main_hwr_training_pane

0xc955,	// (0x00080b86) hwr_training_instruct_pane_ParamLimits

0xc955,	// (0x00080b86) hwr_training_instruct_pane

0x76d3,	// (0x0007b904) hwr_training_navi_pane_ParamLimits

0x76d3,	// (0x0007b904) hwr_training_navi_pane

0x76f2,	// (0x0007b923) hwr_training_write_pane_ParamLimits

0x76f2,	// (0x0007b923) hwr_training_write_pane

0xa978,	// (0x0007eba9) bg_frame_shadow_pane

0xc98c,	// (0x00080bbd) hwr_training_write_pane_g1

0xc994,	// (0x00080bc5) hwr_training_write_pane_g2

0xc99c,	// (0x00080bcd) hwr_training_write_pane_g3

0xc9a4,	// (0x00080bd5) hwr_training_write_pane_g4

0xc9ac,	// (0x00080bdd) hwr_training_write_pane_g5

0xc9b4,	// (0x00080be5) hwr_training_write_pane_g6

0xc9bc,	// (0x00080bed) hwr_training_write_pane_g7

0x0006,

0xf87a,	// (0x00083aab) hwr_training_write_pane_g

0xec9b,	// (0x00082ecc) hwr_training_navi_pane_g1_ParamLimits

0xec9b,	// (0x00082ecc) hwr_training_navi_pane_g1

0xecad,	// (0x00082ede) hwr_training_navi_pane_g2_ParamLimits

0xecad,	// (0x00082ede) hwr_training_navi_pane_g2

0xecbf,	// (0x00082ef0) hwr_training_navi_pane_g3_ParamLimits

0xecbf,	// (0x00082ef0) hwr_training_navi_pane_g3

0xeccf,	// (0x00082f00) hwr_training_navi_pane_g4_ParamLimits

0xeccf,	// (0x00082f00) hwr_training_navi_pane_g4

0x0004,

0xf889,	// (0x00083aba) hwr_training_navi_pane_g_ParamLimits

0xf889,	// (0x00083aba) hwr_training_navi_pane_g

0xecdc,	// (0x00082f0d) hwr_training_navi_pane_t1

0x773a,	// (0x0007b96b) list_single_hwr_training_instruct_pane_ParamLimits

0x773a,	// (0x0007b96b) list_single_hwr_training_instruct_pane

0xc9c4,	// (0x00080bf5) list_single_hwr_training_instruct_pane_t1

0xc099,	// (0x000802ca) bg_frame_shadow_pane_g1

0xc9d3,	// (0x00080c04) bg_frame_shadow_pane_g2

0xc9db,	// (0x00080c0c) bg_frame_shadow_pane_g3

0xc9e3,	// (0x00080c14) bg_frame_shadow_pane_g4

0xc9eb,	// (0x00080c1c) bg_frame_shadow_pane_g5

0xc9f3,	// (0x00080c24) bg_frame_shadow_pane_g6

0xc9fb,	// (0x00080c2c) bg_frame_shadow_pane_g7

0x24dc,	// (0x0007670d) bg_frame_shadow_pane_g8

0x0007,

0xf894,	// (0x00083ac5) bg_frame_shadow_pane_g

0xa978,	// (0x0007eba9) main_video_tele_dialer_pane

0x774f,	// (0x0007b980) aid_size_cell_video_keypad_ParamLimits

0x774f,	// (0x0007b980) aid_size_cell_video_keypad

0x7769,	// (0x0007b99a) grid_video_dialer_keypad_pane_ParamLimits

0x7769,	// (0x0007b99a) grid_video_dialer_keypad_pane

0x77b3,	// (0x0007b9e4) video_down_pane_cp_ParamLimits

0x77b3,	// (0x0007b9e4) video_down_pane_cp

0x77c3,	// (0x0007b9f4) cell_video_dialer_keypad_pane_ParamLimits

0x77c3,	// (0x0007b9f4) cell_video_dialer_keypad_pane

0xca1f,	// (0x00080c50) bg_button_pane_cp08_ParamLimits

0xca1f,	// (0x00080c50) bg_button_pane_cp08

0x77e5,	// (0x0007ba16) cell_video_dialer_keypad_pane_g1_ParamLimits

0x77e5,	// (0x0007ba16) cell_video_dialer_keypad_pane_g1

0x6ecf,	// (0x0007b100) mup3_rocker2_pane_ParamLimits

0x6ecf,	// (0x0007b100) mup3_rocker2_pane

0xc159,	// (0x0008038a) mup3_rocker2_pane_g1

0x59fa,	// (0x00079c2b) main_dialer2_pane

0xa978,	// (0x0007eba9) main_mp4_pane

0xecf2,	// (0x00082f23) main_mp4_pane_g1_ParamLimits

0xecf2,	// (0x00082f23) main_mp4_pane_g1

0xecf2,	// (0x00082f23) main_mp4_pane_g2_ParamLimits

0xecf2,	// (0x00082f23) main_mp4_pane_g2

0x781f,	// (0x0007ba50) main_mp4_pane_g3_ParamLimits

0x781f,	// (0x0007ba50) main_mp4_pane_g3

0xed00,	// (0x00082f31) main_mp4_pane_g4_ParamLimits

0xed00,	// (0x00082f31) main_mp4_pane_g4

0xed28,	// (0x00082f59) main_mp4_pane_g5_ParamLimits

0xed28,	// (0x00082f59) main_mp4_pane_g5

0x0005,

0xf8b4,	// (0x00083ae5) main_mp4_pane_g_ParamLimits

0xf8b4,	// (0x00083ae5) main_mp4_pane_g

0xed78,	// (0x00082fa9) main_mp4_pane_t1_ParamLimits

0xed78,	// (0x00082fa9) main_mp4_pane_t1

0xedd4,	// (0x00083005) main_mp4_pane_t2_ParamLimits

0xedd4,	// (0x00083005) main_mp4_pane_t2

0xca2b,	// (0x00080c5c) main_mp4_pane_t3_ParamLimits

0xca2b,	// (0x00080c5c) main_mp4_pane_t3

0xee26,	// (0x00083057) main_mp4_pane_t4_ParamLimits

0xee26,	// (0x00083057) main_mp4_pane_t4

0x0003,

0xf8c1,	// (0x00083af2) main_mp4_pane_t_ParamLimits

0xf8c1,	// (0x00083af2) main_mp4_pane_t

0xee6a,	// (0x0008309b) mp4_progress_pane_ParamLimits

0xee6a,	// (0x0008309b) mp4_progress_pane

0xeeb4,	// (0x000830e5) mp4_rocker_pane_ParamLimits

0xeeb4,	// (0x000830e5) mp4_rocker_pane

0xca53,	// (0x00080c84) mp4_progress_pane_t1

0xca6c,	// (0x00080c9d) mp4_progress_pane_t2

0x0001,

0xf8ca,	// (0x00083afb) mp4_progress_pane_t

0xca85,	// (0x00080cb6) mup_progress_pane_cp04

0xc159,	// (0x0008038a) mp4_rocker_pane_g1

0x785b,	// (0x0007ba8c) aid_cell_size_keypad2_ParamLimits

0x785b,	// (0x0007ba8c) aid_cell_size_keypad2

0x7871,	// (0x0007baa2) dialer2_ne_pane_ParamLimits

0x7871,	// (0x0007baa2) dialer2_ne_pane

0x788b,	// (0x0007babc) grid_dialer2_keypad_pane_ParamLimits

0x788b,	// (0x0007babc) grid_dialer2_keypad_pane

0xbf3e,	// (0x0008016f) bg_popup_call_pane_cp07_ParamLimits

0xbf3e,	// (0x0008016f) bg_popup_call_pane_cp07

0x78a7,	// (0x0007bad8) dialer2_ne_pane_t1_ParamLimits

0x78a7,	// (0x0007bad8) dialer2_ne_pane_t1

0x78e2,	// (0x0007bb13) cell_dialer2_keypad_pane_ParamLimits

0x78e2,	// (0x0007bb13) cell_dialer2_keypad_pane

0xcaa3,	// (0x00080cd4) bg_button_pane_pane_cp04_ParamLimits

0xcaa3,	// (0x00080cd4) bg_button_pane_pane_cp04

0x7904,	// (0x0007bb35) cell_dialer2_keypad_pane_g1_ParamLimits

0x7904,	// (0x0007bb35) cell_dialer2_keypad_pane_g1

0x2dee,	// (0x0007701f) aid_placing_vt_set_content_ParamLimits

0x2dee,	// (0x0007701f) aid_placing_vt_set_content

0x2e16,	// (0x00077047) aid_placing_vt_set_title_ParamLimits

0x2e16,	// (0x00077047) aid_placing_vt_set_title

0xa978,	// (0x0007eba9) main_image3_pane

0x79ca,	// (0x0007bbfb) area_side_right_pane_cp01_ParamLimits

0x79ca,	// (0x0007bbfb) area_side_right_pane_cp01

0xecf2,	// (0x00082f23) main_image3_pane_g1_ParamLimits

0xecf2,	// (0x00082f23) main_image3_pane_g1

0x79e1,	// (0x0007bc12) main_image3_pane_g2_ParamLimits

0x79e1,	// (0x0007bc12) main_image3_pane_g2

0x7a09,	// (0x0007bc3a) main_image3_pane_g3_ParamLimits

0x7a09,	// (0x0007bc3a) main_image3_pane_g3

0x7a33,	// (0x0007bc64) main_image3_pane_g4_ParamLimits

0x7a33,	// (0x0007bc64) main_image3_pane_g4

0x0003,

0xf8d9,	// (0x00083b0a) main_image3_pane_g_ParamLimits

0xf8d9,	// (0x00083b0a) main_image3_pane_g

0x7a5d,	// (0x0007bc8e) main_image3_pane_t1_ParamLimits

0x7a5d,	// (0x0007bc8e) main_image3_pane_t1

0x7ab5,	// (0x0007bce6) main_image3_pane_t2_ParamLimits

0x7ab5,	// (0x0007bce6) main_image3_pane_t2

0x7b07,	// (0x0007bd38) main_image3_pane_t3_ParamLimits

0x7b07,	// (0x0007bd38) main_image3_pane_t3

0x0003,

0xf8e2,	// (0x00083b13) main_image3_pane_t_ParamLimits

0xf8e2,	// (0x00083b13) main_image3_pane_t

0x17e5,	// (0x00075a16) grid_sctrl_middle_pane_cp01_ParamLimits

0x17e5,	// (0x00075a16) grid_sctrl_middle_pane_cp01

0x7b8f,	// (0x0007bdc0) cell_sctrl_middle_pane_cp01_ParamLimits

0x7b8f,	// (0x0007bdc0) cell_sctrl_middle_pane_cp01

0x7bac,	// (0x0007bddd) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x7bac,	// (0x0007bddd) cell_sctrl_middle_pane_cp01_g1

0xa978,	// (0x0007eba9) main_call4_pane

0x7bc2,	// (0x0007bdf3) aid_size_button_call4_ParamLimits

0x7bc2,	// (0x0007bdf3) aid_size_button_call4

0x7bf3,	// (0x0007be24) call4_windows_pane_ParamLimits

0x7bf3,	// (0x0007be24) call4_windows_pane

0x7c13,	// (0x0007be44) grid_call4_button_pane_ParamLimits

0x7c13,	// (0x0007be44) grid_call4_button_pane

0xcaaf,	// (0x00080ce0) call4_windows_conf_pane

0xcac6,	// (0x00080cf7) popup_call4_audio_first_window_ParamLimits

0xcac6,	// (0x00080cf7) popup_call4_audio_first_window

0xcb12,	// (0x00080d43) popup_call4_audio_second_window_ParamLimits

0xcb12,	// (0x00080d43) popup_call4_audio_second_window

0xcb26,	// (0x00080d57) popup_call4_audio_wait_window_ParamLimits

0xcb26,	// (0x00080d57) popup_call4_audio_wait_window

0x7c40,	// (0x0007be71) cell_call4_button_pane_ParamLimits

0x7c40,	// (0x0007be71) cell_call4_button_pane

0x7c69,	// (0x0007be9a) bg_button_pane_cp09_ParamLimits

0x7c69,	// (0x0007be9a) bg_button_pane_cp09

0x7c75,	// (0x0007bea6) cell_call4_button_pane_g1_ParamLimits

0x7c75,	// (0x0007bea6) cell_call4_button_pane_g1

0x7c9b,	// (0x0007becc) cell_call4_button_pane_t1_ParamLimits

0x7c9b,	// (0x0007becc) cell_call4_button_pane_t1

0xcb6e,	// (0x00080d9f) popup_call4_audio_conf_window_ParamLimits

0xcb6e,	// (0x00080d9f) popup_call4_audio_conf_window

0x6f2f,	// (0x0007b160) mup3_progress_pane_t1_ParamLimits

0x6f4e,	// (0x0007b17f) mup3_progress_pane_t2_ParamLimits

0xc46c,	// (0x0008069d) mup3_progress_pane_t3_ParamLimits

0xf7bb,	// (0x000839ec) mup3_progress_pane_t_ParamLimits

0xc489,	// (0x000806ba) mup_progress_pane_cp03_ParamLimits

0x7519,	// (0x0007b74a) mup3_control_keys_pane_g4_copy1

0xee98,	// (0x000830c9) mp4_rocker2_pane_ParamLimits

0xee98,	// (0x000830c9) mp4_rocker2_pane

0xcb82,	// (0x00080db3) mp4_rocker2_pane_g1

0xcb8a,	// (0x00080dbb) mp4_rocker2_pane_g2

0xef06,	// (0x00083137) mp4_rocker2_pane_g3

0xef0e,	// (0x0008313f) mp4_rocker2_pane_g4

0xef16,	// (0x00083147) mp4_rocker2_pane_g5

0x0004,

0xf8eb,	// (0x00083b1c) mp4_rocker2_pane_g

0xa978,	// (0x0007eba9) main_camera4_pane

0xa978,	// (0x0007eba9) main_video4_pane

0x7781,	// (0x0007b9b2) main_video_tele_dialer_pane_t1_ParamLimits

0x7781,	// (0x0007b9b2) main_video_tele_dialer_pane_t1

0x779a,	// (0x0007b9cb) main_video_tele_dialer_pane_t2_ParamLimits

0x779a,	// (0x0007b9cb) main_video_tele_dialer_pane_t2

0x0001,

0xf8a5,	// (0x00083ad6) main_video_tele_dialer_pane_t_ParamLimits

0xf8a5,	// (0x00083ad6) main_video_tele_dialer_pane_t

0x7cd9,	// (0x0007bf0a) cam4_autofocus_pane_ParamLimits

0x7cd9,	// (0x0007bf0a) cam4_autofocus_pane

0x7cef,	// (0x0007bf20) cam4_image_uncrop_pane_ParamLimits

0x7cef,	// (0x0007bf20) cam4_image_uncrop_pane

0x7d09,	// (0x0007bf3a) cam4_indicators_pane_ParamLimits

0x7d09,	// (0x0007bf3a) cam4_indicators_pane

0x7d34,	// (0x0007bf65) main_camera4_pane_g1_ParamLimits

0x7d34,	// (0x0007bf65) main_camera4_pane_g1

0x7d47,	// (0x0007bf78) main_camera4_pane_g2_ParamLimits

0x7d47,	// (0x0007bf78) main_camera4_pane_g2

0x7d5a,	// (0x0007bf8b) main_camera4_pane_g3_ParamLimits

0x7d5a,	// (0x0007bf8b) main_camera4_pane_g3

0x7d6d,	// (0x0007bf9e) main_camera4_pane_g4_ParamLimits

0x7d6d,	// (0x0007bf9e) main_camera4_pane_g4

0x7d80,	// (0x0007bfb1) main_camera4_pane_g5_ParamLimits

0x7d80,	// (0x0007bfb1) main_camera4_pane_g5

0x0005,

0xf8f6,	// (0x00083b27) main_camera4_pane_g_ParamLimits

0xf8f6,	// (0x00083b27) main_camera4_pane_g

0x7da4,	// (0x0007bfd5) main_camera4_pane_t1_ParamLimits

0x7da4,	// (0x0007bfd5) main_camera4_pane_t1

0xc3c5,	// (0x000805f6) bg_tb_trans_pane_cp06

0xef42,	// (0x00083173) cam4_indicators_pane_g1

0xef53,	// (0x00083184) cam4_indicators_pane_g2

0x0002,

0xf911,	// (0x00083b42) cam4_indicators_pane_g

0xef71,	// (0x000831a2) cam4_indicators_pane_t1

0x7e08,	// (0x0007c039) main_video4_pane_g1_ParamLimits

0x7e08,	// (0x0007c039) main_video4_pane_g1

0x7e1b,	// (0x0007c04c) main_video4_pane_g2_ParamLimits

0x7e1b,	// (0x0007c04c) main_video4_pane_g2

0x7e2f,	// (0x0007c060) main_video4_pane_g3_ParamLimits

0x7e2f,	// (0x0007c060) main_video4_pane_g3

0x7e43,	// (0x0007c074) main_video4_pane_g4_ParamLimits

0x7e43,	// (0x0007c074) main_video4_pane_g4

0x0004,

0xf918,	// (0x00083b49) main_video4_pane_g_ParamLimits

0xf918,	// (0x00083b49) main_video4_pane_g

0x7e6b,	// (0x0007c09c) vid4_indicators_pane_ParamLimits

0x7e6b,	// (0x0007c09c) vid4_indicators_pane

0x7e9b,	// (0x0007c0cc) video4_image_uncrop_cif_pane_ParamLimits

0x7e9b,	// (0x0007c0cc) video4_image_uncrop_cif_pane

0x7eb5,	// (0x0007c0e6) video4_image_uncrop_nhd_pane_ParamLimits

0x7eb5,	// (0x0007c0e6) video4_image_uncrop_nhd_pane

0x7cef,	// (0x0007bf20) video4_image_uncrop_vga_pane_ParamLimits

0x7cef,	// (0x0007bf20) video4_image_uncrop_vga_pane

0xcba4,	// (0x00080dd5) bg_tb_trans_pane_cp07

0x7ec9,	// (0x0007c0fa) vid4_indicators_pane_g1

0x7ed6,	// (0x0007c107) vid4_indicators_pane_g2

0x7ee3,	// (0x0007c114) vid4_indicators_pane_g3

0x0004,

0xf923,	// (0x00083b54) vid4_indicators_pane_g

0x7f08,	// (0x0007c139) vid4_indicators_pane_t1

0x7f1a,	// (0x0007c14b) cam4_autofocus_pane_g1

0x7f22,	// (0x0007c153) cam4_autofocus_pane_g2

0x7f2a,	// (0x0007c15b) cam4_autofocus_pane_g3

0x0002,

0xf92e,	// (0x00083b5f) cam4_autofocus_pane_g

0x7f32,	// (0x0007c163) cam4_autofocus_pane_g3_copy1

0xca03,	// (0x00080c34) video_down_pane_cp_t1

0xca11,	// (0x00080c42) video_down_pane_cp_t2

0x0001,

0xf8aa,	// (0x00083adb) video_down_pane_cp_t

0x17e5,	// (0x00075a16) popup_vitu2_window_ParamLimits

0x17e5,	// (0x00075a16) popup_vitu2_window

0x7f3a,	// (0x0007c16b) aid_size_cell2_itu2_ParamLimits

0x7f3a,	// (0x0007c16b) aid_size_cell2_itu2

0x7f60,	// (0x0007c191) aid_size_cell_itu2_ParamLimits

0x7f60,	// (0x0007c191) aid_size_cell_itu2

0x7fbc,	// (0x0007c1ed) bg_popup_window_pane_cp09_ParamLimits

0x7fbc,	// (0x0007c1ed) bg_popup_window_pane_cp09

0x7fca,	// (0x0007c1fb) field_vitu2_entry_pane_ParamLimits

0x7fca,	// (0x0007c1fb) field_vitu2_entry_pane

0x7ff0,	// (0x0007c221) grid_vitu2_function_pane_ParamLimits

0x7ff0,	// (0x0007c221) grid_vitu2_function_pane

0x8041,	// (0x0007c272) grid_vitu2_itu_pane_ParamLimits

0x8041,	// (0x0007c272) grid_vitu2_itu_pane

0x80d4,	// (0x0007c305) cell_vitu2_itu_pane_ParamLimits

0x80d4,	// (0x0007c305) cell_vitu2_itu_pane

0x80f8,	// (0x0007c329) cell_vitu2_function_pane_ParamLimits

0x80f8,	// (0x0007c329) cell_vitu2_function_pane

0xcbb2,	// (0x00080de3) bg_popup_call_pane_cp08_ParamLimits

0xcbb2,	// (0x00080de3) bg_popup_call_pane_cp08

0xcbcb,	// (0x00080dfc) field_vitu2_entry_pane_g1

0xcbd7,	// (0x00080e08) field_vitu2_entry_pane_g2

0x0002,

0xf935,	// (0x00083b66) field_vitu2_entry_pane_g

0xcbf1,	// (0x00080e22) field_vitu2_entry_pane_t1_ParamLimits

0xcbf1,	// (0x00080e22) field_vitu2_entry_pane_t1

0xcc20,	// (0x00080e51) field_vitu2_entry_pane_t2_ParamLimits

0xcc20,	// (0x00080e51) field_vitu2_entry_pane_t2

0x0001,

0xf93c,	// (0x00083b6d) field_vitu2_entry_pane_t_ParamLimits

0xf93c,	// (0x00083b6d) field_vitu2_entry_pane_t

0x8137,	// (0x0007c368) bg_button_pane_cp010_ParamLimits

0x8137,	// (0x0007c368) bg_button_pane_cp010

0x8145,	// (0x0007c376) cell_vitu2_itu_pane_g1

0x8163,	// (0x0007c394) cell_vitu2_itu_pane_t1_ParamLimits

0x8163,	// (0x0007c394) cell_vitu2_itu_pane_t1

0x0ce3,	// (0x00074f14) cell_vitu2_itu_pane_t2_ParamLimits

0x0ce3,	// (0x00074f14) cell_vitu2_itu_pane_t2

0x0002,

0xf946,	// (0x00083b77) cell_vitu2_itu_pane_t_ParamLimits

0xf946,	// (0x00083b77) cell_vitu2_itu_pane_t

0x17e5,	// (0x00075a16) bg_button_pane_cp011

0x81c9,	// (0x0007c3fa) cell_vitu2_function_pane_g1

0xa978,	// (0x0007eba9) main_myfav_hc_pane

0x7b57,	// (0x0007bd88) popup_image3_note_pane_ParamLimits

0x7b57,	// (0x0007bd88) popup_image3_note_pane

0x7b73,	// (0x0007bda4) popup_image3_tool_bar_pane_ParamLimits

0x7b73,	// (0x0007bda4) popup_image3_tool_bar_pane

0x0d67,	// (0x00074f98) cell_vitu2_itu_pane_t3_ParamLimits

0x0d67,	// (0x00074f98) cell_vitu2_itu_pane_t3

0xa978,	// (0x0007eba9) bg_popup_trans_pane

0xcc45,	// (0x00080e76) grid_image3_tool_bar_pane

0xcc4f,	// (0x00080e80) bg_popup_trans_pane_g1

0x33e5,	// (0x00077616) bg_popup_trans_pane_g2

0xcc57,	// (0x00080e88) bg_popup_trans_pane_g3

0xcc5f,	// (0x00080e90) bg_popup_trans_pane_g4

0xcc67,	// (0x00080e98) bg_popup_trans_pane_g5

0xcc6f,	// (0x00080ea0) bg_popup_trans_pane_g6

0xcc77,	// (0x00080ea8) bg_popup_trans_pane_g7

0xcc7f,	// (0x00080eb0) bg_popup_trans_pane_g8

0x33c5,	// (0x000775f6) bg_popup_trans_pane_g9

0x0008,

0xf94d,	// (0x00083b7e) bg_popup_trans_pane_g

0xcc87,	// (0x00080eb8) cell_image3_tool_bar_pane_ParamLimits

0xcc87,	// (0x00080eb8) cell_image3_tool_bar_pane

0xc159,	// (0x0008038a) cell_image3_tool_bar_pane_g1

0xa978,	// (0x0007eba9) bg_popup_trans_pane_cp1

0xcc9b,	// (0x00080ecc) popup_image3_note_pane_t1

0xcca9,	// (0x00080eda) popup_image3_note_pane_t2

0xccb7,	// (0x00080ee8) popup_image3_note_pane_t3

0x0002,

0xf960,	// (0x00083b91) popup_image3_note_pane_t

0xccc5,	// (0x00080ef6) popup_image3_note_pane_t3_copy1

0x81dd,	// (0x0007c40e) bg_myfav_hc_instruction_pane_ParamLimits

0x81dd,	// (0x0007c40e) bg_myfav_hc_instruction_pane

0x81f1,	// (0x0007c422) cell_myfav_contact_pane_ParamLimits

0x81f1,	// (0x0007c422) cell_myfav_contact_pane

0x820f,	// (0x0007c440) cell_myfav_contact_pane_cp1_ParamLimits

0x820f,	// (0x0007c440) cell_myfav_contact_pane_cp1

0x8227,	// (0x0007c458) cell_myfav_contact_pane_cp2_ParamLimits

0x8227,	// (0x0007c458) cell_myfav_contact_pane_cp2

0x823f,	// (0x0007c470) cell_myfav_contact_pane_cp3_ParamLimits

0x823f,	// (0x0007c470) cell_myfav_contact_pane_cp3

0x8256,	// (0x0007c487) cell_myfav_contact_pane_cp4_ParamLimits

0x8256,	// (0x0007c487) cell_myfav_contact_pane_cp4

0x826e,	// (0x0007c49f) cell_myfav_contact_pane_cp5_ParamLimits

0x826e,	// (0x0007c49f) cell_myfav_contact_pane_cp5

0x8282,	// (0x0007c4b3) cell_myfav_contact_pane_cp6_ParamLimits

0x8282,	// (0x0007c4b3) cell_myfav_contact_pane_cp6

0x8298,	// (0x0007c4c9) cell_myfav_contact_pane_cp7_ParamLimits

0x8298,	// (0x0007c4c9) cell_myfav_contact_pane_cp7

0xccd3,	// (0x00080f04) listscroll_gen_pane_cp05

0x82b2,	// (0x0007c4e3) main_myfav_hc_pane_g1_ParamLimits

0x82b2,	// (0x0007c4e3) main_myfav_hc_pane_g1

0x82cc,	// (0x0007c4fd) main_myfav_hc_pane_g2_ParamLimits

0x82cc,	// (0x0007c4fd) main_myfav_hc_pane_g2

0x0002,

0xf967,	// (0x00083b98) main_myfav_hc_pane_g_ParamLimits

0xf967,	// (0x00083b98) main_myfav_hc_pane_g

0x82fe,	// (0x0007c52f) main_myfav_hc_pane_t1_ParamLimits

0x82fe,	// (0x0007c52f) main_myfav_hc_pane_t1

0xccdc,	// (0x00080f0d) main_myfav_hc_pane_t2_ParamLimits

0xccdc,	// (0x00080f0d) main_myfav_hc_pane_t2

0xccee,	// (0x00080f1f) main_myfav_hc_pane_t3_ParamLimits

0xccee,	// (0x00080f1f) main_myfav_hc_pane_t3

0x8315,	// (0x0007c546) main_myfav_hc_pane_t4_ParamLimits

0x8315,	// (0x0007c546) main_myfav_hc_pane_t4

0x0004,

0xf96e,	// (0x00083b9f) main_myfav_hc_pane_t_ParamLimits

0xf96e,	// (0x00083b9f) main_myfav_hc_pane_t

0xc159,	// (0x0008038a) bg_myfav_hc_instruction_pane_g1

0xcd00,	// (0x00080f31) cell_myfav_contact_pane_g1_ParamLimits

0xcd00,	// (0x00080f31) cell_myfav_contact_pane_g1

0xcd00,	// (0x00080f31) cell_myfav_contact_pane_g2_ParamLimits

0xcd00,	// (0x00080f31) cell_myfav_contact_pane_g2

0xcd0c,	// (0x00080f3d) cell_myfav_contact_pane_g3_ParamLimits

0xcd0c,	// (0x00080f3d) cell_myfav_contact_pane_g3

0xc456,	// (0x00080687) cell_myfav_contact_pane_g4_ParamLimits

0xc456,	// (0x00080687) cell_myfav_contact_pane_g4

0xcd19,	// (0x00080f4a) cell_myfav_contact_pane_g5_ParamLimits

0xcd19,	// (0x00080f4a) cell_myfav_contact_pane_g5

0x0004,

0xf979,	// (0x00083baa) cell_myfav_contact_pane_g_ParamLimits

0xf979,	// (0x00083baa) cell_myfav_contact_pane_g

0x82e6,	// (0x0007c517) main_myfav_hc_pane_g3_ParamLimits

0x82e6,	// (0x0007c517) main_myfav_hc_pane_g3

0x1729,	// (0x0007595a) popup_adpt_find_window

0x833d,	// (0x0007c56e) afind_page_pane_ParamLimits

0x833d,	// (0x0007c56e) afind_page_pane

0x8352,	// (0x0007c583) aid_size_cell_afind_ParamLimits

0x8352,	// (0x0007c583) aid_size_cell_afind

0x8370,	// (0x0007c5a1) bg_popup_sub_pane_cp09_ParamLimits

0x8370,	// (0x0007c5a1) bg_popup_sub_pane_cp09

0x837d,	// (0x0007c5ae) find_pane_cp01_ParamLimits

0x837d,	// (0x0007c5ae) find_pane_cp01

0xcd25,	// (0x00080f56) grid_afind_control_pane_ParamLimits

0xcd25,	// (0x00080f56) grid_afind_control_pane

0x838a,	// (0x0007c5bb) grid_afind_pane_ParamLimits

0x838a,	// (0x0007c5bb) grid_afind_pane

0x83ac,	// (0x0007c5dd) cell_afind_pane_ParamLimits

0x83ac,	// (0x0007c5dd) cell_afind_pane

0xc159,	// (0x0008038a) afind_page_pane_g1

0x840d,	// (0x0007c63e) afind_page_pane_g2

0x8416,	// (0x0007c647) afind_page_pane_g3

0x0002,

0xf984,	// (0x00083bb5) afind_page_pane_g

0x841f,	// (0x0007c650) afind_page_pane_t1

0xcd39,	// (0x00080f6a) cell_afind_grid_control_pane_ParamLimits

0xcd39,	// (0x00080f6a) cell_afind_grid_control_pane

0xcaa3,	// (0x00080cd4) bg_button_pane_cp69_ParamLimits

0xcaa3,	// (0x00080cd4) bg_button_pane_cp69

0x843f,	// (0x0007c670) cell_afind_pane_g1_ParamLimits

0x843f,	// (0x0007c670) cell_afind_pane_g1

0x844c,	// (0x0007c67d) cell_afind_pane_t1_ParamLimits

0x844c,	// (0x0007c67d) cell_afind_pane_t1

0x2d81,	// (0x00076fb2) bg_button_pane_cp72

0xcd48,	// (0x00080f79) cell_afind_grid_control_pane_g1

0x54ba,	// (0x000796eb) aid_image_placing_area_ParamLimits

0x54ba,	// (0x000796eb) aid_image_placing_area

0xc755,	// (0x00080986) field_vitu_entry_pane_g1_ParamLimits

0xc755,	// (0x00080986) field_vitu_entry_pane_g1

0xc761,	// (0x00080992) field_vitu_entry_pane_g2_ParamLimits

0xc761,	// (0x00080992) field_vitu_entry_pane_g2

0x0001,

0xf835,	// (0x00083a66) field_vitu_entry_pane_g_ParamLimits

0xf835,	// (0x00083a66) field_vitu_entry_pane_g

0x75e0,	// (0x0007b811) cell_vitu_itu_pane_g1_ParamLimits

0x7622,	// (0x0007b853) cell_vitu_itu_pane_t3_ParamLimits

0x7622,	// (0x0007b853) cell_vitu_itu_pane_t3

0xca53,	// (0x00080c84) mp4_progress_pane_t1_ParamLimits

0xca6c,	// (0x00080c9d) mp4_progress_pane_t2_ParamLimits

0xf8ca,	// (0x00083afb) mp4_progress_pane_t_ParamLimits

0xca85,	// (0x00080cb6) mup_progress_pane_cp04_ParamLimits

0x8329,	// (0x0007c55a) main_myfav_hc_pane_t5_ParamLimits

0x8329,	// (0x0007c55a) main_myfav_hc_pane_t5

0xa99e,	// (0x0007ebcf) aid_zoom_text_primary

0x1729,	// (0x0007595a) popup_adpt_find_window_ParamLimits

0x17e5,	// (0x00075a16) main_cam_set_pane

0x7d20,	// (0x0007bf51) cam4_zoom_pane_ParamLimits

0x7d20,	// (0x0007bf51) cam4_zoom_pane

0x845e,	// (0x0007c68f) main_cam_set_pane_g1_ParamLimits

0x845e,	// (0x0007c68f) main_cam_set_pane_g1

0x846c,	// (0x0007c69d) main_cam_set_pane_g2_ParamLimits

0x846c,	// (0x0007c69d) main_cam_set_pane_g2

0x0001,

0xf98b,	// (0x00083bbc) main_cam_set_pane_g_ParamLimits

0xf98b,	// (0x00083bbc) main_cam_set_pane_g

0x848d,	// (0x0007c6be) main_cam_set_pane_t1_ParamLimits

0x848d,	// (0x0007c6be) main_cam_set_pane_t1

0x84a8,	// (0x0007c6d9) main_cset_listscroll_pane_ParamLimits

0x84a8,	// (0x0007c6d9) main_cset_listscroll_pane

0x84c8,	// (0x0007c6f9) main_cset_slider_pane_ParamLimits

0x84c8,	// (0x0007c6f9) main_cset_slider_pane

0xcd59,	// (0x00080f8a) main_cset_list_pane_ParamLimits

0xcd59,	// (0x00080f8a) main_cset_list_pane

0xcd69,	// (0x00080f9a) scroll_pane_cp028

0x84ee,	// (0x0007c71f) aid_area_touch_slider

0x850a,	// (0x0007c73b) cset_slider_pane

0x8534,	// (0x0007c765) main_cset_slider_pane_g1

0x8549,	// (0x0007c77a) main_cset_slider_pane_g2

0x0011,

0xf990,	// (0x00083bc1) main_cset_slider_pane_g

0xcda2,	// (0x00080fd3) main_cset_slider_pane_t1

0x8605,	// (0x0007c836) main_cset_slider_pane_t2

0x861f,	// (0x0007c850) main_cset_slider_pane_t3

0x8639,	// (0x0007c86a) main_cset_slider_pane_t4

0x8653,	// (0x0007c884) main_cset_slider_pane_t5

0x866d,	// (0x0007c89e) main_cset_slider_pane_t6

0x8682,	// (0x0007c8b3) main_cset_slider_pane_t7

0x000e,

0xf9b5,	// (0x00083be6) main_cset_slider_pane_t

0x8786,	// (0x0007c9b7) cset_list_set_pane_ParamLimits

0x8786,	// (0x0007c9b7) cset_list_set_pane

0x8798,	// (0x0007c9c9) aid_position_infowindow_above

0x87a0,	// (0x0007c9d1) aid_position_infowindow_below

0xef9d,	// (0x000831ce) cset_list_set_pane_g1_ParamLimits

0xef9d,	// (0x000831ce) cset_list_set_pane_g1

0xce42,	// (0x00081073) cset_list_set_pane_g3_ParamLimits

0xce42,	// (0x00081073) cset_list_set_pane_g3

0x0001,

0xf9d4,	// (0x00083c05) cset_list_set_pane_g_ParamLimits

0xf9d4,	// (0x00083c05) cset_list_set_pane_g

0xce51,	// (0x00081082) cset_list_set_pane_t1_ParamLimits

0xce51,	// (0x00081082) cset_list_set_pane_t1

0x17e5,	// (0x00075a16) list_highlight_pane_cp021_ParamLimits

0x17e5,	// (0x00075a16) list_highlight_pane_cp021

0x4d5c,	// (0x00078f8d) cset_slider_pane_g1

0x4d6e,	// (0x00078f9f) cset_slider_pane_g2

0x4d65,	// (0x00078f96) cset_slider_pane_g3

0x0002,

0xf9d9,	// (0x00083c0a) cset_slider_pane_g

0xefa9,	// (0x000831da) aid_area_touch_cam4_zoom

0xefb1,	// (0x000831e2) cam4_zoom_cont_pane

0xefb9,	// (0x000831ea) cam4_zoom_pane_g1

0xefc1,	// (0x000831f2) cam4_zoom_pane_g2

0x87a8,	// (0x0007c9d9) cam4_zoom_pane_g3

0x0002,

0xf9e0,	// (0x00083c11) cam4_zoom_pane_g

0xce66,	// (0x00081097) cam4_zoom_cont_pane_g1

0xce6f,	// (0x000810a0) cam4_zoom_cont_pane_g2

0xce78,	// (0x000810a9) cam4_zoom_cont_pane_g3

0x0002,

0xf9e7,	// (0x00083c18) cam4_zoom_cont_pane_g

0x7be0,	// (0x0007be11) call4_image_pane_ParamLimits

0x7be0,	// (0x0007be11) call4_image_pane

0xcaaf,	// (0x00080ce0) call4_windows_conf_pane_ParamLimits

0xcaf0,	// (0x00080d21) popup_call4_audio_in_window_ParamLimits

0xcaf0,	// (0x00080d21) popup_call4_audio_in_window

0xa978,	// (0x0007eba9) bg_popup_call2_act_pane_cp02

0xcb66,	// (0x00080d97) call4_list_conf_pane

0xc159,	// (0x0008038a) call4_image_pane_g1

0xc159,	// (0x0008038a) call4_image_pane_g2

0x0001,

0xf6fb,	// (0x0008392c) call4_image_pane_g

0xce81,	// (0x000810b2) list_single_graphic_popup_conf4_pane_ParamLimits

0xce81,	// (0x000810b2) list_single_graphic_popup_conf4_pane

0xa978,	// (0x0007eba9) list_highlight_pane_cp022

0xce94,	// (0x000810c5) list_single_graphic_popup_conf4_pane_g1

0x42da,	// (0x0007850b) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9ee,	// (0x00083c1f) list_single_graphic_popup_conf4_pane_g

0xce9c,	// (0x000810cd) list_single_graphic_popup_conf4_pane_t1

0x2f4c,	// (0x0007717d) popup_vtel_slider_window_ParamLimits

0x2f4c,	// (0x0007717d) popup_vtel_slider_window

0xca91,	// (0x00080cc2) dialer2_ne_pane_t2_ParamLimits

0xca91,	// (0x00080cc2) dialer2_ne_pane_t2

0x0001,

0xf8cf,	// (0x00083b00) dialer2_ne_pane_t_ParamLimits

0xf8cf,	// (0x00083b00) dialer2_ne_pane_t

0xbf3e,	// (0x0008016f) bg_popup_sub_pane_cp010_ParamLimits

0xbf3e,	// (0x0008016f) bg_popup_sub_pane_cp010

0x87b0,	// (0x0007c9e1) popup_vtel_slider_window_g1_ParamLimits

0x87b0,	// (0x0007c9e1) popup_vtel_slider_window_g1

0x87c3,	// (0x0007c9f4) popup_vtel_slider_window_g2_ParamLimits

0x87c3,	// (0x0007c9f4) popup_vtel_slider_window_g2

0x0003,

0xf9f3,	// (0x00083c24) popup_vtel_slider_window_g_ParamLimits

0xf9f3,	// (0x00083c24) popup_vtel_slider_window_g

0x8819,	// (0x0007ca4a) vtel_slider_pane_ParamLimits

0x8819,	// (0x0007ca4a) vtel_slider_pane

0x883b,	// (0x0007ca6c) vtel_slider_pane_g1_ParamLimits

0x883b,	// (0x0007ca6c) vtel_slider_pane_g1

0x884f,	// (0x0007ca80) vtel_slider_pane_g2_ParamLimits

0x884f,	// (0x0007ca80) vtel_slider_pane_g2

0x8867,	// (0x0007ca98) vtel_slider_pane_g3_ParamLimits

0x8867,	// (0x0007ca98) vtel_slider_pane_g3

0x883b,	// (0x0007ca6c) vtel_slider_pane_g4_ParamLimits

0x883b,	// (0x0007ca6c) vtel_slider_pane_g4

0x887d,	// (0x0007caae) vtel_slider_pane_g5_ParamLimits

0x887d,	// (0x0007caae) vtel_slider_pane_g5

0x0004,

0xf9fc,	// (0x00083c2d) vtel_slider_pane_g_ParamLimits

0xf9fc,	// (0x00083c2d) vtel_slider_pane_g

0xa978,	// (0x0007eba9) main_gallery2_pane

0x7f8c,	// (0x0007c1bd) aid_size_row_itut2_dropdow_list_ParamLimits

0x7f8c,	// (0x0007c1bd) aid_size_row_itut2_dropdow_list

0x8018,	// (0x0007c249) grid_vitu2_function_top_pane_ParamLimits

0x8018,	// (0x0007c249) grid_vitu2_function_top_pane

0x807d,	// (0x0007c2ae) popup_vitu2_dropdown_list_window_ParamLimits

0x807d,	// (0x0007c2ae) popup_vitu2_dropdown_list_window

0x80a6,	// (0x0007c2d7) popup_vitu2_match_list_window

0x8893,	// (0x0007cac4) cell_vitu2_function_top_pane_ParamLimits

0x8893,	// (0x0007cac4) cell_vitu2_function_top_pane

0x88b1,	// (0x0007cae2) cell_vitu2_function_top_pane_cp01_ParamLimits

0x88b1,	// (0x0007cae2) cell_vitu2_function_top_pane_cp01

0x88cf,	// (0x0007cb00) cell_vitu2_function_top_wide_pane_ParamLimits

0x88cf,	// (0x0007cb00) cell_vitu2_function_top_wide_pane

0x17e5,	// (0x00075a16) bg_button_pane_cp012

0x88ed,	// (0x0007cb1e) cell_vitu2_function_top_pane_g1

0xefc9,	// (0x000831fa) bg_button_pane_cp013_ParamLimits

0xefc9,	// (0x000831fa) bg_button_pane_cp013

0x8901,	// (0x0007cb32) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x8901,	// (0x0007cb32) cell_vitu2_function_top_wide_pane_g1

0x17e5,	// (0x00075a16) bg_popup_sub_pane_cp20

0x8919,	// (0x0007cb4a) list_vitu2_match_list_pane

0xcc4f,	// (0x00080e80) bg_popup_sub_pane_cp20_g1

0xcc57,	// (0x00080e88) bg_popup_sub_pane_cp20_g2

0x33e5,	// (0x00077616) bg_popup_sub_pane_cp20_g3

0xcc5f,	// (0x00080e90) bg_popup_sub_pane_cp20_g4

0x33c5,	// (0x000775f6) bg_popup_sub_pane_cp20_g5

0xcec0,	// (0x000810f1) bg_popup_sub_pane_cp20_g6

0xcc6f,	// (0x00080ea0) bg_popup_sub_pane_cp20_g7

0xcc77,	// (0x00080ea8) bg_popup_sub_pane_cp20_g8

0xcc7f,	// (0x00080eb0) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa07,	// (0x00083c38) bg_popup_sub_pane_cp20_g

0xefe5,	// (0x00083216) list_vitu2_match_list_item_pane_ParamLimits

0xefe5,	// (0x00083216) list_vitu2_match_list_item_pane

0xeff7,	// (0x00083228) list_vitu2_match_list_item_pane_t1

0xa978,	// (0x0007eba9) bg_popup_sub_pane_cp21

0x41de,	// (0x0007840f) grid_vitu2_dropdown_list_pane

0x8937,	// (0x0007cb68) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x8937,	// (0x0007cb68) cell_vitu2_dropdown_list_char_pane

0x8958,	// (0x0007cb89) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x8958,	// (0x0007cb89) cell_vitu2_dropdown_list_ctrl_pane

0xcee0,	// (0x00081111) cell_vitu2_dropdown_list_char_pane_g1

0xcee9,	// (0x0008111a) cell_vitu2_dropdown_list_char_pane_g2

0xcef2,	// (0x00081123) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa24,	// (0x00083c55) cell_vitu2_dropdown_list_char_pane_g

0x8984,	// (0x0007cbb5) cell_vitu2_dropdown_list_char_pane_t1

0x8992,	// (0x0007cbc3) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x8992,	// (0x0007cbc3) cell_vitu2_dropdown_list_ctrl_pane_g1

0x899f,	// (0x0007cbd0) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x899f,	// (0x0007cbd0) cell_vitu2_dropdown_list_ctrl_pane_g2

0x89ac,	// (0x0007cbdd) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x89ac,	// (0x0007cbdd) cell_vitu2_dropdown_list_ctrl_pane_g3

0x89b9,	// (0x0007cbea) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x89b9,	// (0x0007cbea) cell_vitu2_dropdown_list_ctrl_pane_g4

0xc3c5,	// (0x000805f6) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xc3c5,	// (0x000805f6) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa2b,	// (0x00083c5c) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa2b,	// (0x00083c5c) cell_vitu2_dropdown_list_ctrl_pane_g

0x89d5,	// (0x0007cc06) aid_size_cell_gallery2_ParamLimits

0x89d5,	// (0x0007cc06) aid_size_cell_gallery2

0x89eb,	// (0x0007cc1c) grid_gallery2_pane_ParamLimits

0x89eb,	// (0x0007cc1c) grid_gallery2_pane

0x89ff,	// (0x0007cc30) scroll_pane_cp029_ParamLimits

0x89ff,	// (0x0007cc30) scroll_pane_cp029

0x8a0b,	// (0x0007cc3c) cell_gallery2_pane_ParamLimits

0x8a0b,	// (0x0007cc3c) cell_gallery2_pane

0xcefb,	// (0x0008112c) cell_gallery2_pane_g2

0x8a41,	// (0x0007cc72) cell_gallery2_pane_g3

0xcf05,	// (0x00081136) cell_gallery2_pane_g4

0xcf0d,	// (0x0008113e) cell_gallery2_pane_g5

0x4820,	// (0x00078a51) grid_highlight_pane_cp10

0x80a6,	// (0x0007c2d7) popup_vitu2_match_list_window_ParamLimits

0x80bd,	// (0x0007c2ee) popup_vitu2_query_window_ParamLimits

0x80bd,	// (0x0007c2ee) popup_vitu2_query_window

0xa978,	// (0x0007eba9) bg_vitu2_candi_button_pane

0xcee0,	// (0x00081111) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xcee9,	// (0x0008111a) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xcef2,	// (0x00081123) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x0df4,	// (0x00075025) bg_button_pane_cp015

0x8a49,	// (0x0007cc7a) bg_button_pane_cp016

0x8a5c,	// (0x0007cc8d) bg_button_pane_cp017

0xbcf0,	// (0x0007ff21) bg_popup_sub_pane_cp22

0xcf15,	// (0x00081146) popup_vitu2_query_window_g1

0x0e27,	// (0x00075058) popup_vitu2_query_window_g2

0x0002,

0xfa36,	// (0x00083c67) popup_vitu2_query_window_g

0x0e46,	// (0x00075077) popup_vitu2_query_window_t1_ParamLimits

0x0e46,	// (0x00075077) popup_vitu2_query_window_t1

0x0e7b,	// (0x000750ac) popup_vitu2_query_window_t2_ParamLimits

0x0e7b,	// (0x000750ac) popup_vitu2_query_window_t2

0x0e8d,	// (0x000750be) popup_vitu2_query_window_t3_ParamLimits

0x0e8d,	// (0x000750be) popup_vitu2_query_window_t3

0x8a80,	// (0x0007ccb1) popup_vitu2_query_window_t4_ParamLimits

0x8a80,	// (0x0007ccb1) popup_vitu2_query_window_t4

0x8aa1,	// (0x0007ccd2) popup_vitu2_query_window_t5_ParamLimits

0x8aa1,	// (0x0007ccd2) popup_vitu2_query_window_t5

0x0006,

0xfa3d,	// (0x00083c6e) popup_vitu2_query_window_t_ParamLimits

0xfa3d,	// (0x00083c6e) popup_vitu2_query_window_t

0xcd51,	// (0x00080f82) main_cset_text_pane

0x84ee,	// (0x0007c71f) aid_area_touch_slider_ParamLimits

0x850a,	// (0x0007c73b) cset_slider_pane_ParamLimits

0x8534,	// (0x0007c765) main_cset_slider_pane_g1_ParamLimits

0x8549,	// (0x0007c77a) main_cset_slider_pane_g2_ParamLimits

0xcd72,	// (0x00080fa3) main_cset_slider_pane_g3_ParamLimits

0xcd72,	// (0x00080fa3) main_cset_slider_pane_g3

0x855e,	// (0x0007c78f) main_cset_slider_pane_g4_ParamLimits

0x855e,	// (0x0007c78f) main_cset_slider_pane_g4

0x856d,	// (0x0007c79e) main_cset_slider_pane_g5_ParamLimits

0x856d,	// (0x0007c79e) main_cset_slider_pane_g5

0x8579,	// (0x0007c7aa) main_cset_slider_pane_g6_ParamLimits

0x8579,	// (0x0007c7aa) main_cset_slider_pane_g6

0xf990,	// (0x00083bc1) main_cset_slider_pane_g_ParamLimits

0xcda2,	// (0x00080fd3) main_cset_slider_pane_t1_ParamLimits

0x8605,	// (0x0007c836) main_cset_slider_pane_t2_ParamLimits

0x861f,	// (0x0007c850) main_cset_slider_pane_t3_ParamLimits

0x8639,	// (0x0007c86a) main_cset_slider_pane_t4_ParamLimits

0x8653,	// (0x0007c884) main_cset_slider_pane_t5_ParamLimits

0x866d,	// (0x0007c89e) main_cset_slider_pane_t6_ParamLimits

0x8682,	// (0x0007c8b3) main_cset_slider_pane_t7_ParamLimits

0x86ac,	// (0x0007c8dd) main_cset_slider_pane_t8_ParamLimits

0x86ac,	// (0x0007c8dd) main_cset_slider_pane_t8

0x86d4,	// (0x0007c905) main_cset_slider_pane_t9_ParamLimits

0x86d4,	// (0x0007c905) main_cset_slider_pane_t9

0x86fc,	// (0x0007c92d) main_cset_slider_pane_t10_ParamLimits

0x86fc,	// (0x0007c92d) main_cset_slider_pane_t10

0x8724,	// (0x0007c955) main_cset_slider_pane_t11_ParamLimits

0x8724,	// (0x0007c955) main_cset_slider_pane_t11

0x874c,	// (0x0007c97d) main_cset_slider_pane_t12_ParamLimits

0x874c,	// (0x0007c97d) main_cset_slider_pane_t12

0x8769,	// (0x0007c99a) main_cset_slider_pane_t13_ParamLimits

0x8769,	// (0x0007c99a) main_cset_slider_pane_t13

0xf9b5,	// (0x00083be6) main_cset_slider_pane_t_ParamLimits

0xa978,	// (0x0007eba9) bg_popup_sub_pane_cp011

0xcf21,	// (0x00081152) main_cset_text_pane_g1

0xcf29,	// (0x0008115a) main_cset_text_pane_t1

0xcf37,	// (0x00081168) main_cset_text_pane_t2

0xcf45,	// (0x00081176) main_cset_text_pane_t3

0xcf53,	// (0x00081184) main_cset_text_pane_t4

0xcf61,	// (0x00081192) main_cset_text_pane_t5

0xcf6f,	// (0x000811a0) main_cset_text_pane_t6

0xcf7d,	// (0x000811ae) main_cset_text_pane_t7

0x0006,

0xfa4c,	// (0x00083c7d) main_cset_text_pane_t

0xa978,	// (0x0007eba9) main_cam4_burst_pane

0xa978,	// (0x0007eba9) main_cam5_pane

0x842d,	// (0x0007c65e) bg_button_pane_cp019

0x8436,	// (0x0007c667) bg_button_pane_cp020

0xcd7e,	// (0x00080faf) main_cset_slider_pane_g7_ParamLimits

0xcd7e,	// (0x00080faf) main_cset_slider_pane_g7

0xcd8a,	// (0x00080fbb) main_cset_slider_pane_g8_ParamLimits

0xcd8a,	// (0x00080fbb) main_cset_slider_pane_g8

0x858d,	// (0x0007c7be) main_cset_slider_pane_g9_ParamLimits

0x858d,	// (0x0007c7be) main_cset_slider_pane_g9

0x8599,	// (0x0007c7ca) main_cset_slider_pane_g10_ParamLimits

0x8599,	// (0x0007c7ca) main_cset_slider_pane_g10

0x85a5,	// (0x0007c7d6) main_cset_slider_pane_g11_ParamLimits

0x85a5,	// (0x0007c7d6) main_cset_slider_pane_g11

0x85b1,	// (0x0007c7e2) main_cset_slider_pane_g12_ParamLimits

0x85b1,	// (0x0007c7e2) main_cset_slider_pane_g12

0x85bd,	// (0x0007c7ee) main_cset_slider_pane_g13_ParamLimits

0x85bd,	// (0x0007c7ee) main_cset_slider_pane_g13

0x85c9,	// (0x0007c7fa) main_cset_slider_pane_g14_ParamLimits

0x85c9,	// (0x0007c7fa) main_cset_slider_pane_g14

0x85d5,	// (0x0007c806) main_cset_slider_pane_g15_ParamLimits

0x85d5,	// (0x0007c806) main_cset_slider_pane_g15

0xcdd0,	// (0x00081001) main_cset_slider_pane_t14_ParamLimits

0xcdd0,	// (0x00081001) main_cset_slider_pane_t14

0xce09,	// (0x0008103a) main_cset_slider_pane_t15_ParamLimits

0xce09,	// (0x0008103a) main_cset_slider_pane_t15

0x8ac2,	// (0x0007ccf3) aid_cam4_burst_size_cell_ParamLimits

0x8ac2,	// (0x0007ccf3) aid_cam4_burst_size_cell

0x8ae2,	// (0x0007cd13) grid_cam4_burst_pane_ParamLimits

0x8ae2,	// (0x0007cd13) grid_cam4_burst_pane

0x8b1a,	// (0x0007cd4b) linegrid_cam4_burst_pane_ParamLimits

0x8b1a,	// (0x0007cd4b) linegrid_cam4_burst_pane

0xcf8b,	// (0x000811bc) scroll_pane_cp30_ParamLimits

0xcf8b,	// (0x000811bc) scroll_pane_cp30

0x8b3e,	// (0x0007cd6f) cell_cam4_burst_pane_ParamLimits

0x8b3e,	// (0x0007cd6f) cell_cam4_burst_pane

0xcf97,	// (0x000811c8) linegrid_cam4_burst_pane_g1_ParamLimits

0xcf97,	// (0x000811c8) linegrid_cam4_burst_pane_g1

0x8b8b,	// (0x0007cdbc) linegrid_cam4_burst_pane_g2_ParamLimits

0x8b8b,	// (0x0007cdbc) linegrid_cam4_burst_pane_g2

0xcfa4,	// (0x000811d5) linegrid_cam4_burst_pane_g3_ParamLimits

0xcfa4,	// (0x000811d5) linegrid_cam4_burst_pane_g3

0x0002,

0xfa5b,	// (0x00083c8c) linegrid_cam4_burst_pane_g_ParamLimits

0xfa5b,	// (0x00083c8c) linegrid_cam4_burst_pane_g

0x8b9c,	// (0x0007cdcd) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x8b9c,	// (0x0007cdcd) linegrid_cam4_burst_pane_g3_copy1

0xcfb1,	// (0x000811e2) linegrid_cam4_burst_pane_g4_ParamLimits

0xcfb1,	// (0x000811e2) linegrid_cam4_burst_pane_g4

0x8bb6,	// (0x0007cde7) linegrid_cam4_burst_pane_g5_ParamLimits

0x8bb6,	// (0x0007cde7) linegrid_cam4_burst_pane_g5

0x8bc7,	// (0x0007cdf8) linegrid_cam4_burst_pane_g6_ParamLimits

0x8bc7,	// (0x0007cdf8) linegrid_cam4_burst_pane_g6

0xcfbe,	// (0x000811ef) linegrid_cam4_burst_pane_g7_ParamLimits

0xcfbe,	// (0x000811ef) linegrid_cam4_burst_pane_g7

0x8bde,	// (0x0007ce0f) cell_cam4_burst_pane_g1

0xcfd7,	// (0x00081208) main_cam5_pane_t1_ParamLimits

0xcfd7,	// (0x00081208) main_cam5_pane_t1

0xcfe9,	// (0x0008121a) main_cam5_pane_t2_ParamLimits

0xcfe9,	// (0x0008121a) main_cam5_pane_t2

0xcffb,	// (0x0008122c) main_cam5_pane_t3_ParamLimits

0xcffb,	// (0x0008122c) main_cam5_pane_t3

0xd00d,	// (0x0008123e) main_cam5_pane_t4_ParamLimits

0xd00d,	// (0x0008123e) main_cam5_pane_t4

0xd025,	// (0x00081256) main_cam5_pane_t5_ParamLimits

0xd025,	// (0x00081256) main_cam5_pane_t5

0xd039,	// (0x0008126a) main_cam5_pane_t6_ParamLimits

0xd039,	// (0x0008126a) main_cam5_pane_t6

0xd04d,	// (0x0008127e) main_cam5_pane_t7_ParamLimits

0xd04d,	// (0x0008127e) main_cam5_pane_t7

0xd05f,	// (0x00081290) main_cam5_pane_t8_ParamLimits

0xd05f,	// (0x00081290) main_cam5_pane_t8

0xd07b,	// (0x000812ac) main_cam5_pane_t9_ParamLimits

0xd07b,	// (0x000812ac) main_cam5_pane_t9

0xd08d,	// (0x000812be) main_cam5_pane_t10_ParamLimits

0xd08d,	// (0x000812be) main_cam5_pane_t10

0xd09f,	// (0x000812d0) main_cam5_pane_t11_ParamLimits

0xd09f,	// (0x000812d0) main_cam5_pane_t11

0xd0b1,	// (0x000812e2) main_cam5_pane_t12_ParamLimits

0xd0b1,	// (0x000812e2) main_cam5_pane_t12

0xd0c6,	// (0x000812f7) main_cam5_pane_t13_ParamLimits

0xd0c6,	// (0x000812f7) main_cam5_pane_t13

0x000c,

0xfa67,	// (0x00083c98) main_cam5_pane_t_ParamLimits

0xfa67,	// (0x00083c98) main_cam5_pane_t

0x17ab,	// (0x000759dc) popup_scut_keymap_window_ParamLimits

0x17ab,	// (0x000759dc) popup_scut_keymap_window

0x8bf1,	// (0x0007ce22) aid_size_cell_brow_shortcut

0x4820,	// (0x00078a51) bg_popup_window_pane_cp010

0x8bfd,	// (0x0007ce2e) grid_scut_pane

0x8c09,	// (0x0007ce3a) cell_scut_pane_ParamLimits

0x8c09,	// (0x0007ce3a) cell_scut_pane

0x8c20,	// (0x0007ce51) cell_scut_pane_g1

0xd0e3,	// (0x00081314) cell_scut_pane_t1

0xd0f2,	// (0x00081323) cell_scut_pane_t2

0x8c29,	// (0x0007ce5a) cell_scut_pane_t3

0x0002,

0xfa82,	// (0x00083cb3) cell_scut_pane_t

0x6ae8,	// (0x0007ad19) main_mup3_pane_g8_ParamLimits

0x6ae8,	// (0x0007ad19) main_mup3_pane_g8

0x7fa4,	// (0x0007c1d5) area_vitu2_query_pane_ParamLimits

0x7fa4,	// (0x0007c1d5) area_vitu2_query_pane

0x0e06,	// (0x00075037) input_focus_pane_cp08

0xd101,	// (0x00081332) area_vitu2_query_pane_g1

0x0f0b,	// (0x0007513c) area_vitu2_query_pane_g2

0x0001,

0xfa89,	// (0x00083cba) area_vitu2_query_pane_g

0x8c37,	// (0x0007ce68) area_vitu2_query_pane_t1_ParamLimits

0x8c37,	// (0x0007ce68) area_vitu2_query_pane_t1

0x8c4b,	// (0x0007ce7c) area_vitu2_query_pane_t2_ParamLimits

0x8c4b,	// (0x0007ce7c) area_vitu2_query_pane_t2

0x0f1c,	// (0x0007514d) area_vitu2_query_pane_t3_ParamLimits

0x0f1c,	// (0x0007514d) area_vitu2_query_pane_t3

0xd10d,	// (0x0008133e) area_vitu2_query_pane_t4_ParamLimits

0xd10d,	// (0x0008133e) area_vitu2_query_pane_t4

0xd135,	// (0x00081366) area_vitu2_query_pane_t5_ParamLimits

0xd135,	// (0x00081366) area_vitu2_query_pane_t5

0xd15d,	// (0x0008138e) area_vitu2_query_pane_t6_ParamLimits

0xd15d,	// (0x0008138e) area_vitu2_query_pane_t6

0x0006,

0xfa8e,	// (0x00083cbf) area_vitu2_query_pane_t_ParamLimits

0xfa8e,	// (0x00083cbf) area_vitu2_query_pane_t

0x8c5f,	// (0x0007ce90) bg_button_pane_cp018

0x8c6d,	// (0x0007ce9e) bg_button_pane_cp021

0x0f44,	// (0x00075175) bg_button_pane_cp022

0x0f53,	// (0x00075184) input_focus_pane_cp09

0x4635,	// (0x00078866) aid_size_touch_mv_arrow_left

0x465e,	// (0x0007888f) aid_size_touch_mv_arrow_right

0x85ed,	// (0x0007c81e) main_cset_slider_pane_g16_ParamLimits

0x85ed,	// (0x0007c81e) main_cset_slider_pane_g16

0x85f9,	// (0x0007c82a) main_cset_slider_pane_g17_ParamLimits

0x85f9,	// (0x0007c82a) main_cset_slider_pane_g17

0x8bde,	// (0x0007ce0f) cell_cam4_burst_pane_g1_ParamLimits

0xa978,	// (0x0007eba9) compa_mode_pane

0x87d3,	// (0x0007ca04) popup_vtel_slider_window_g3_ParamLimits

0x87d3,	// (0x0007ca04) popup_vtel_slider_window_g3

0x87ea,	// (0x0007ca1b) popup_vtel_slider_window_g4_ParamLimits

0x87ea,	// (0x0007ca1b) popup_vtel_slider_window_g4

0x8801,	// (0x0007ca32) popup_vtel_slider_window_t1_ParamLimits

0x8801,	// (0x0007ca32) popup_vtel_slider_window_t1

0xa978,	// (0x0007eba9) main_cl_pane

0xbd18,	// (0x0007ff49) popup_imed_adjust2_window_ParamLimits

0xbcf0,	// (0x0007ff21) bg_tb_trans_pane_cp05_ParamLimits

0xc68a,	// (0x000808bb) popup_imed_adjust2_window_g1_ParamLimits

0xc699,	// (0x000808ca) popup_imed_adjust2_window_g2_ParamLimits

0xc699,	// (0x000808ca) popup_imed_adjust2_window_g2

0xc6a5,	// (0x000808d6) popup_imed_adjust2_window_g3_ParamLimits

0xc6a5,	// (0x000808d6) popup_imed_adjust2_window_g3

0x0002,

0xf7f9,	// (0x00083a2a) popup_imed_adjust2_window_g_ParamLimits

0xf7f9,	// (0x00083a2a) popup_imed_adjust2_window_g

0xc6b1,	// (0x000808e2) popup_imed_adjust2_window_t1_ParamLimits

0xc6c9,	// (0x000808fa) slider_imed_adjust_pane_ParamLimits

0xc6dd,	// (0x0008090e) slider_imed_adjust_pane_g1_ParamLimits

0xc6ed,	// (0x0008091e) slider_imed_adjust_pane_g2_ParamLimits

0xc6fd,	// (0x0008092e) slider_imed_adjust_pane_g3_ParamLimits

0xc70e,	// (0x0008093f) slider_imed_adjust_pane_g4_ParamLimits

0xf800,	// (0x00083a31) slider_imed_adjust_pane_g_ParamLimits

0x7cc1,	// (0x0007bef2) aid_touch_area_cam4_ParamLimits

0x7cc1,	// (0x0007bef2) aid_touch_area_cam4

0xef1e,	// (0x0008314f) battery_pane_cp01

0x7d91,	// (0x0007bfc2) main_camera4_pane_g6_ParamLimits

0x7d91,	// (0x0007bfc2) main_camera4_pane_g6

0x7dbb,	// (0x0007bfec) main_camera4_pane_t2_ParamLimits

0x7dbb,	// (0x0007bfec) main_camera4_pane_t2

0x0001,

0xf903,	// (0x00083b34) main_camera4_pane_t_ParamLimits

0xf903,	// (0x00083b34) main_camera4_pane_t

0x7df0,	// (0x0007c021) aid_touch_area_vid4_ParamLimits

0x7df0,	// (0x0007c021) aid_touch_area_vid4

0x7e57,	// (0x0007c088) main_video4_pane_g5_ParamLimits

0x7e57,	// (0x0007c088) main_video4_pane_g5

0x7e82,	// (0x0007c0b3) vid4_progress_pane_ParamLimits

0x7e82,	// (0x0007c0b3) vid4_progress_pane

0xcd96,	// (0x00080fc7) main_cset_slider_pane_g18_ParamLimits

0xcd96,	// (0x00080fc7) main_cset_slider_pane_g18

0xcfcb,	// (0x000811fc) cell_cam4_burst_pane_g2_ParamLimits

0xcfcb,	// (0x000811fc) cell_cam4_burst_pane_g2

0x0001,

0xfa62,	// (0x00083c93) cell_cam4_burst_pane_g_ParamLimits

0xfa62,	// (0x00083c93) cell_cam4_burst_pane_g

0x2291,	// (0x000764c2) bg_cl_pane_ParamLimits

0x2291,	// (0x000764c2) bg_cl_pane

0x8c79,	// (0x0007ceaa) cl_header_pane_ParamLimits

0x8c79,	// (0x0007ceaa) cl_header_pane

0x8c8d,	// (0x0007cebe) cl_listscroll_pane_ParamLimits

0x8c8d,	// (0x0007cebe) cl_listscroll_pane

0xd1a9,	// (0x000813da) bg_cl_pane_g1

0xd1b1,	// (0x000813e2) bg_cl_pane_g2

0xd1b9,	// (0x000813ea) bg_cl_pane_g3

0xd1c1,	// (0x000813f2) bg_cl_pane_g4

0xd1c9,	// (0x000813fa) bg_cl_pane_g5

0xd1d1,	// (0x00081402) bg_cl_pane_g6

0xd1d9,	// (0x0008140a) bg_cl_pane_g7

0xd1e1,	// (0x00081412) bg_cl_pane_g8

0xd1e9,	// (0x0008141a) bg_cl_pane_g9

0x0008,

0xfa9d,	// (0x00083cce) bg_cl_pane_g

0x8c9d,	// (0x0007cece) aid_height_cl_leading_ParamLimits

0x8c9d,	// (0x0007cece) aid_height_cl_leading

0x8ca9,	// (0x0007ceda) aid_height_cl_text_ParamLimits

0x8ca9,	// (0x0007ceda) aid_height_cl_text

0x17e5,	// (0x00075a16) bg_cl_header_pane_ParamLimits

0x17e5,	// (0x00075a16) bg_cl_header_pane

0x8cc8,	// (0x0007cef9) cl_header_pane_g1_ParamLimits

0x8cc8,	// (0x0007cef9) cl_header_pane_g1

0x8cde,	// (0x0007cf0f) cl_header_pane_t1_ParamLimits

0x8cde,	// (0x0007cf0f) cl_header_pane_t1

0xd1f1,	// (0x00081422) cl_list_pane

0xcd69,	// (0x00080f9a) hc_scroll_pane_cp01

0x33c5,	// (0x000775f6) bg_cl_header_pane_g1

0xcc4f,	// (0x00080e80) bg_cl_header_pane_g2

0x33e5,	// (0x00077616) bg_cl_header_pane_g3

0xcc5f,	// (0x00080e90) bg_cl_header_pane_g4

0xcc57,	// (0x00080e88) bg_cl_header_pane_g5

0xcec0,	// (0x000810f1) bg_cl_header_pane_g6

0xcc77,	// (0x00080ea8) bg_cl_header_pane_g7

0xcc7f,	// (0x00080eb0) bg_cl_header_pane_g8

0xcc6f,	// (0x00080ea0) bg_cl_header_pane_g9

0x0008,

0xfab0,	// (0x00083ce1) bg_cl_header_pane_g

0x8cf7,	// (0x0007cf28) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x8cf7,	// (0x0007cf28) hc_cl_list_double_graphic_heading_pane

0x8d08,	// (0x0007cf39) hc_cl_list_single_graphic_pane_ParamLimits

0x8d08,	// (0x0007cf39) hc_cl_list_single_graphic_pane

0x8d1e,	// (0x0007cf4f) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x8d1e,	// (0x0007cf4f) hc_cl_list_single_graphic_pane_g1

0x8d2a,	// (0x0007cf5b) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x8d2a,	// (0x0007cf5b) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfac3,	// (0x00083cf4) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfac3,	// (0x00083cf4) hc_cl_list_single_graphic_pane_g

0x8d3e,	// (0x0007cf6f) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x8d3e,	// (0x0007cf6f) hc_cl_list_single_graphic_pane_t1

0x8d1e,	// (0x0007cf4f) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x8d1e,	// (0x0007cf4f) hc_cl_list_double_graphic_heading_pane_g1

0x8d53,	// (0x0007cf84) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x8d53,	// (0x0007cf84) hc_cl_list_double_graphic_heading_pane_g2

0x8d67,	// (0x0007cf98) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x8d67,	// (0x0007cf98) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfac8,	// (0x00083cf9) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfac8,	// (0x00083cf9) hc_cl_list_double_graphic_heading_pane_g

0x8d7b,	// (0x0007cfac) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x8d7b,	// (0x0007cfac) hc_cl_list_double_graphic_heading_pane_t1

0x8d90,	// (0x0007cfc1) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x8d90,	// (0x0007cfc1) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfacf,	// (0x00083d00) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfacf,	// (0x00083d00) hc_cl_list_double_graphic_heading_pane_t

0xf00d,	// (0x0008323e) vid4_progress_pane_g1

0xf01d,	// (0x0008324e) vid4_progress_pane_g2

0xad21,	// (0x0007ef52) vid4_progress_pane_g3

0xf02d,	// (0x0008325e) vid4_progress_pane_g4

0x0004,

0xfad4,	// (0x00083d05) vid4_progress_pane_g

0xf04b,	// (0x0008327c) vid4_progress_pane_t1

0xf060,	// (0x00083291) vid4_progress_pane_t2

0x0002,

0xfadf,	// (0x00083d10) vid4_progress_pane_t

0xf08b,	// (0x000832bc) wait_bar_pane_cp07

0xbf4c,	// (0x0008017d) blid_firmament_pane_ParamLimits

0xbf8f,	// (0x000801c0) popup_blid_sat_info2_window_g1

0xbfb3,	// (0x000801e4) popup_blid_sat_info2_window_t3

0xbfc1,	// (0x000801f2) popup_blid_sat_info2_window_t4

0xbfcf,	// (0x00080200) popup_blid_sat_info2_window_t5

0xbfdd,	// (0x0008020e) popup_blid_sat_info2_window_t6

0xbfed,	// (0x0008021e) popup_blid_sat_info2_window_t7

0xbffb,	// (0x0008022c) popup_blid_sat_info2_window_t8

0xc009,	// (0x0008023a) popup_blid_sat_info2_window_t9

0xc017,	// (0x00080248) popup_blid_sat_info2_window_t10

0xc0d9,	// (0x0008030a) aid_firma_cardinal_ParamLimits

0xc0ed,	// (0x0008031e) blid_firmament_pane_t1_ParamLimits

0xc104,	// (0x00080335) blid_firmament_pane_t2_ParamLimits

0xc11b,	// (0x0008034c) blid_firmament_pane_t3_ParamLimits

0xc132,	// (0x00080363) blid_firmament_pane_t4_ParamLimits

0xf6f2,	// (0x00083923) blid_firmament_pane_t_ParamLimits

0xc149,	// (0x0008037a) blid_sat_info_pane_ParamLimits

0x17e5,	// (0x00075a16) main_cam_set_pane_ParamLimits

0x739a,	// (0x0007b5cb) aid_size_cell_colour_35_ParamLimits

0x73ba,	// (0x0007b5eb) aid_size_cell_colour_112_ParamLimits

0x73da,	// (0x0007b60b) aid_size_cell_effect_ParamLimits

0xbcf0,	// (0x0007ff21) bg_tb_trans_pane_cp02_ParamLimits

0x3f1e,	// (0x0007814f) heading_imed_pane_ParamLimits

0x73fa,	// (0x0007b62b) listscroll_imed_pane_ParamLimits

0xb322,	// (0x0007f553) popup_call2_audio_first_window_g5_ParamLimits

0xb322,	// (0x0007f553) popup_call2_audio_first_window_g5

0x796c,	// (0x0007bb9d) aid_size_touch_image3_arrow_left_ParamLimits

0x796c,	// (0x0007bb9d) aid_size_touch_image3_arrow_left

0x7998,	// (0x0007bbc9) aid_size_touch_image3_arrow_right_ParamLimits

0x7998,	// (0x0007bbc9) aid_size_touch_image3_arrow_right

0xf076,	// (0x000832a7) vid4_progress_pane_t3

0x770d,	// (0x0007b93e) main_hwr_training_symbol_option_pane_ParamLimits

0x770d,	// (0x0007b93e) main_hwr_training_symbol_option_pane

0xc977,	// (0x00080ba8) popup_hwr_training_preview_window_ParamLimits

0xc977,	// (0x00080ba8) popup_hwr_training_preview_window

0x772d,	// (0x0007b95e) hwr_training_navi_pane_g5_ParamLimits

0x772d,	// (0x0007b95e) hwr_training_navi_pane_g5

0xcc3d,	// (0x00080e6e) popup_char_count_window

0x17e5,	// (0x00075a16) bg_popup_sub_pane_cp20_ParamLimits

0x8919,	// (0x0007cb4a) list_vitu2_match_list_pane_ParamLimits

0x8928,	// (0x0007cb59) vitu2_page_scroll_pane_ParamLimits

0x8928,	// (0x0007cb59) vitu2_page_scroll_pane

0xd24c,	// (0x0008147d) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd24c,	// (0x0008147d) list_single_hwr_training_symbol_option_pane

0xd25f,	// (0x00081490) list_single_hwr_training_symbol_option_pane_g1

0xd267,	// (0x00081498) list_single_hwr_training_symbol_option_pane_t1

0xd275,	// (0x000814a6) bg_button_pane_cp023

0xd27e,	// (0x000814af) bg_button_pane_cp024

0x8da5,	// (0x0007cfd6) vitu2_page_scroll_pane_g1

0x8dad,	// (0x0007cfde) vitu2_page_scroll_pane_g2

0x0001,

0xfae6,	// (0x00083d17) vitu2_page_scroll_pane_g

0x8db5,	// (0x0007cfe6) vitu2_page_scroll_pane_t1

0xd2b1,	// (0x000814e2) popup_char_count_window_g1

0xd2ba,	// (0x000814eb) popup_char_count_window_g2

0xd2c3,	// (0x000814f4) popup_char_count_window_g3

0x0002,

0xfaeb,	// (0x00083d1c) popup_char_count_window_g

0xd2cc,	// (0x000814fd) popup_char_count_window_t1

0xa978,	// (0x0007eba9) main_vded2_pane

0xc676,	// (0x000808a7) aid_size_cell_imed_line

0xc680,	// (0x000808b1) grid_imed_line_width_pane

0x7ef0,	// (0x0007c121) vid4_indicators_pane_g4

0xd2da,	// (0x0008150b) cell_imed_line_width_pane_ParamLimits

0xd2da,	// (0x0008150b) cell_imed_line_width_pane

0xd2ee,	// (0x0008151f) cell_imed_line_width_pane_g1

0xd2f7,	// (0x00081528) cell_imed_line_width_pane_g2

0x0001,

0xfaf2,	// (0x00083d23) cell_imed_line_width_pane_g

0x8dc4,	// (0x0007cff5) main_vded2_pane_g1_ParamLimits

0x8dc4,	// (0x0007cff5) main_vded2_pane_g1

0x8dda,	// (0x0007d00b) main_vded2_pane_g2_ParamLimits

0x8dda,	// (0x0007d00b) main_vded2_pane_g2

0x0001,

0xfaf7,	// (0x00083d28) main_vded2_pane_g_ParamLimits

0xfaf7,	// (0x00083d28) main_vded2_pane_g

0x8dec,	// (0x0007d01d) vded2_slider_pane_ParamLimits

0x8dec,	// (0x0007d01d) vded2_slider_pane

0x8dfc,	// (0x0007d02d) aid_size_touch_vded2_end

0x8e06,	// (0x0007d037) aid_size_touch_vded2_playhead

0xd2ff,	// (0x00081530) aid_size_touch_vded2_start

0xd307,	// (0x00081538) vded2_slider_bg_pane

0xd310,	// (0x00081541) vded2_slider_pane_g1

0xd319,	// (0x0008154a) vded2_slider_pane_g2

0x8e10,	// (0x0007d041) vded2_slider_pane_g3

0x0002,

0xfafc,	// (0x00083d2d) vded2_slider_pane_g

0xd321,	// (0x00081552) vded2_slider_bg_pane_g1

0xd32a,	// (0x0008155b) vded2_slider_bg_pane_g2

0xd333,	// (0x00081564) vded2_slider_bg_pane_g3

0x0002,

0xfb03,	// (0x00083d34) vded2_slider_bg_pane_g

0x4e91,	// (0x000790c2) aid_postcard_touch_down_pane_ParamLimits

0x4e91,	// (0x000790c2) aid_postcard_touch_down_pane

0x4ea7,	// (0x000790d8) aid_postcard_touch_up_pane_ParamLimits

0x4ea7,	// (0x000790d8) aid_postcard_touch_up_pane

0xa978,	// (0x0007eba9) main_blid2_pane

0xbcfe,	// (0x0007ff2f) popup_blid2_search_window

0xa978,	// (0x0007eba9) blid2_gps_pane

0xa978,	// (0x0007eba9) blid2_navig_pane

0xa978,	// (0x0007eba9) blid2_search_pane

0xa978,	// (0x0007eba9) blid2_tripm_pane

0x8e1b,	// (0x0007d04c) blid2_search_pane_g1_ParamLimits

0x8e1b,	// (0x0007d04c) blid2_search_pane_g1

0x8e35,	// (0x0007d066) blid2_search_pane_t1_ParamLimits

0x8e35,	// (0x0007d066) blid2_search_pane_t1

0x8e47,	// (0x0007d078) aid_size_cell_blid2_gps_ParamLimits

0x8e47,	// (0x0007d078) aid_size_cell_blid2_gps

0x8e5f,	// (0x0007d090) blid2_gps_pane_g1_ParamLimits

0x8e5f,	// (0x0007d090) blid2_gps_pane_g1

0x8e73,	// (0x0007d0a4) grid_blid2_satellite_pane_ParamLimits

0x8e73,	// (0x0007d0a4) grid_blid2_satellite_pane

0x8e8d,	// (0x0007d0be) blid2_navig_pane_g1_ParamLimits

0x8e8d,	// (0x0007d0be) blid2_navig_pane_g1

0x8e99,	// (0x0007d0ca) blid2_navig_pane_t1_ParamLimits

0x8e99,	// (0x0007d0ca) blid2_navig_pane_t1

0x8eb4,	// (0x0007d0e5) blid2_navig_pane_t2_ParamLimits

0x8eb4,	// (0x0007d0e5) blid2_navig_pane_t2

0x0001,

0xfb0a,	// (0x00083d3b) blid2_navig_pane_t_ParamLimits

0xfb0a,	// (0x00083d3b) blid2_navig_pane_t

0x8ecf,	// (0x0007d100) blid2_navig_ring_pane_ParamLimits

0x8ecf,	// (0x0007d100) blid2_navig_ring_pane

0x8ee8,	// (0x0007d119) blid2_speed_pane_ParamLimits

0x8ee8,	// (0x0007d119) blid2_speed_pane

0x8ef4,	// (0x0007d125) blid2_tripm_pane_g1_ParamLimits

0x8ef4,	// (0x0007d125) blid2_tripm_pane_g1

0x8f0d,	// (0x0007d13e) blid2_tripm_pane_g2_ParamLimits

0x8f0d,	// (0x0007d13e) blid2_tripm_pane_g2

0x8f21,	// (0x0007d152) blid2_tripm_pane_g3_ParamLimits

0x8f21,	// (0x0007d152) blid2_tripm_pane_g3

0x8f35,	// (0x0007d166) blid2_tripm_pane_g4_ParamLimits

0x8f35,	// (0x0007d166) blid2_tripm_pane_g4

0x8f49,	// (0x0007d17a) blid2_tripm_pane_g5_ParamLimits

0x8f49,	// (0x0007d17a) blid2_tripm_pane_g5

0x0005,

0xfb0f,	// (0x00083d40) blid2_tripm_pane_g_ParamLimits

0xfb0f,	// (0x00083d40) blid2_tripm_pane_g

0x8f6f,	// (0x0007d1a0) blid2_tripm_pane_t1_ParamLimits

0x8f6f,	// (0x0007d1a0) blid2_tripm_pane_t1

0x8f8a,	// (0x0007d1bb) blid2_tripm_pane_t2_ParamLimits

0x8f8a,	// (0x0007d1bb) blid2_tripm_pane_t2

0x8fa3,	// (0x0007d1d4) blid2_tripm_pane_t3_ParamLimits

0x8fa3,	// (0x0007d1d4) blid2_tripm_pane_t3

0x0003,

0xfb1c,	// (0x00083d4d) blid2_tripm_pane_t_ParamLimits

0xfb1c,	// (0x00083d4d) blid2_tripm_pane_t

0x8fea,	// (0x0007d21b) cell_blid2_satellite_pane_ParamLimits

0x8fea,	// (0x0007d21b) cell_blid2_satellite_pane

0x9008,	// (0x0007d239) cell_blid2_satellite_pane_g1

0xd33c,	// (0x0008156d) cell_blid2_satellite_pane_t1

0xc159,	// (0x0008038a) blid2_speed_pane_g1

0xd34a,	// (0x0008157b) blid2_speed_pane_t1

0xd358,	// (0x00081589) blid2_speed_pane_t2

0x0001,

0xfb25,	// (0x00083d56) blid2_speed_pane_t

0xc159,	// (0x0008038a) blid2_navig_ring_pane_g1

0x9011,	// (0x0007d242) blid2_navig_ring_pane_g2

0x9019,	// (0x0007d24a) blid2_navig_ring_pane_g3

0x9021,	// (0x0007d252) blid2_navig_ring_pane_g4

0x9029,	// (0x0007d25a) blid2_navig_ring_pane_g5

0x0004,

0xfb2a,	// (0x00083d5b) blid2_navig_ring_pane_g

0xa978,	// (0x0007eba9) bg_popup_window_pane_cp011

0xd366,	// (0x00081597) popup_blid2_search_window_g1

0xd36e,	// (0x0008159f) popup_blid2_search_window_t1

0xd37c,	// (0x000815ad) popup_blid2_search_window_t2

0x0001,

0xfb35,	// (0x00083d66) popup_blid2_search_window_t

0x3291,	// (0x000774c2) main_browser_pane_g1

0x2291,	// (0x000764c2) main_browser_pane_ParamLimits

0x17e5,	// (0x00075a16) bg_button_pane_cp011_ParamLimits

0x81c9,	// (0x0007c3fa) cell_vitu2_function_pane_g1_ParamLimits

0xbcf0,	// (0x0007ff21) bg_popup_sub_pane_cp22_ParamLimits

0x0e06,	// (0x00075037) input_focus_pane_cp08_ParamLimits

0x8a6f,	// (0x0007cca0) popup_vitu2_query_button_pane_ParamLimits

0x8a6f,	// (0x0007cca0) popup_vitu2_query_button_pane

0x0e1d,	// (0x0007504e) popup_vitu2_query_input_button_pane

0xcf15,	// (0x00081146) popup_vitu2_query_window_g1_ParamLimits

0x0e27,	// (0x00075058) popup_vitu2_query_window_g2_ParamLimits

0xfa36,	// (0x00083c67) popup_vitu2_query_window_g_ParamLimits

0xa978,	// (0x0007eba9) bg_button_pane_cp026

0x9031,	// (0x0007d262) popup_vitu2_query_input_button_pane_g1

0xa978,	// (0x0007eba9) bg_button_pane_cp025

0xd38a,	// (0x000815bb) popup_vitu2_query_button_pane_t1

0x67c3,	// (0x0007a9f4) main_mp3_pane_t6

0x67d1,	// (0x0007aa02) popup_slider_window_cp01

0xef3a,	// (0x0008316b) cam4_battery_pane

0xef93,	// (0x000831c4) cam4_battery_pane_cp02

0xf005,	// (0x00083236) cam4_battery_pane_cp01

0xf005,	// (0x00083236) cam4_battery_pane_cp03

0xc159,	// (0x0008038a) cam4_battery_pane_g1

0xd398,	// (0x000815c9) cam4_battery_pane_g2

0x0001,

0xfb3a,	// (0x00083d6b) cam4_battery_pane_g

0xc025,	// (0x00080256) popup_blid_sat_info2_window_t11

0x4635,	// (0x00078866) aid_size_touch_mv_arrow_left_ParamLimits

0x465e,	// (0x0007888f) aid_size_touch_mv_arrow_right_ParamLimits

0x46bc,	// (0x000788ed) navi_pane_g1_ParamLimits

0x46c8,	// (0x000788f9) navi_pane_g2_ParamLimits

0x46f6,	// (0x00078927) navi_pane_g3_ParamLimits

0xf404,	// (0x00083635) navi_pane_g_ParamLimits

0x47b2,	// (0x000789e3) navi_pane_mv_t1_ParamLimits

0x7406,	// (0x0007b637) grid_imed_effect_pane_ParamLimits

0x2e37,	// (0x00077068) aid_placing_vt_slider_lsc

0x2e47,	// (0x00077078) aid_placing_vt_slider_prt

0x17e5,	// (0x00075a16) bg_tb_trans_pane_cp01_ParamLimits

0xc2e5,	// (0x00080516) popup_image_details_window_g1_ParamLimits

0xc2f8,	// (0x00080529) popup_image_details_window_g2_ParamLimits

0xc30d,	// (0x0008053e) popup_image_details_window_g3_ParamLimits

0xc30d,	// (0x0008053e) popup_image_details_window_g3

0xf737,	// (0x00083968) popup_image_details_window_g_ParamLimits

0xc321,	// (0x00080552) popup_image_details_window_t1_ParamLimits

0xc333,	// (0x00080564) popup_image_details_window_t2_ParamLimits

0xc34c,	// (0x0008057d) popup_image_details_window_t3_ParamLimits

0xc360,	// (0x00080591) popup_image_details_window_t4_ParamLimits

0xc37b,	// (0x000805ac) popup_image_details_window_t5_ParamLimits

0xf73e,	// (0x0008396f) popup_image_details_window_t_ParamLimits

0x8cb5,	// (0x0007cee6) cl_header_name_pane_ParamLimits

0x8cb5,	// (0x0007cee6) cl_header_name_pane

0x9039,	// (0x0007d26a) cl_header_name_pane_t1_ParamLimits

0x9039,	// (0x0007d26a) cl_header_name_pane_t1

0x905a,	// (0x0007d28b) cl_header_name_pane_t2_ParamLimits

0x905a,	// (0x0007d28b) cl_header_name_pane_t2

0x909c,	// (0x0007d2cd) cl_header_name_pane_t3_ParamLimits

0x909c,	// (0x0007d2cd) cl_header_name_pane_t3

0x0002,

0xfb3f,	// (0x00083d70) cl_header_name_pane_t_ParamLimits

0xfb3f,	// (0x00083d70) cl_header_name_pane_t

0x4783,	// (0x000789b4) navi_pane_mv_g2_ParamLimits

0xcbcb,	// (0x00080dfc) field_vitu2_entry_pane_g1_ParamLimits

0xcbd7,	// (0x00080e08) field_vitu2_entry_pane_g2_ParamLimits

0xcbe3,	// (0x00080e14) field_vitu2_entry_pane_g3_ParamLimits

0xcbe3,	// (0x00080e14) field_vitu2_entry_pane_g3

0xf935,	// (0x00083b66) field_vitu2_entry_pane_g_ParamLimits

0x8145,	// (0x0007c376) cell_vitu2_itu_pane_g1_ParamLimits

0x8155,	// (0x0007c386) cell_vitu2_itu_pane_g2_ParamLimits

0x8155,	// (0x0007c386) cell_vitu2_itu_pane_g2

0x0001,

0xf941,	// (0x00083b72) cell_vitu2_itu_pane_g_ParamLimits

0xf941,	// (0x00083b72) cell_vitu2_itu_pane_g

0x17e5,	// (0x00075a16) bg_vkb2_func_pane_cp05_ParamLimits

0x17e5,	// (0x00075a16) bg_vkb2_func_pane_cp05

0x17e5,	// (0x00075a16) bg_vkb2_func_pane_cp03

0x17e5,	// (0x00075a16) bg_vkb2_func_pane_cp04

0x17e5,	// (0x00075a16) bg_vkb2_func_pane_cp10_ParamLimits

0x17e5,	// (0x00075a16) bg_vkb2_func_pane_cp10

0x0f44,	// (0x00075175) bg_vkb2_func_pane_cp08

0x8c5f,	// (0x0007ce90) bg_vkb2_func_pane_cp06

0x8c6d,	// (0x0007ce9e) bg_vkb2_func_pane_cp07

0xd287,	// (0x000814b8) bg_vkb2_func_pane_cp11_ParamLimits

0xd287,	// (0x000814b8) bg_vkb2_func_pane_cp11

0xd29c,	// (0x000814cd) bg_vkb2_func_pane_cp12_ParamLimits

0xd29c,	// (0x000814cd) bg_vkb2_func_pane_cp12

0xa978,	// (0x0007eba9) bg_vkb2_func_pane_cp09

0xcc4f,	// (0x00080e80) bg_vkb2_func_pane_g1

0x33e5,	// (0x00077616) bg_vkb2_func_pane_g2

0xcc57,	// (0x00080e88) bg_vkb2_func_pane_g3

0xcc5f,	// (0x00080e90) bg_vkb2_func_pane_g4

0xcec0,	// (0x000810f1) bg_vkb2_func_pane_g5

0xcc77,	// (0x00080ea8) bg_vkb2_func_pane_g6

0xcc7f,	// (0x00080eb0) bg_vkb2_func_pane_g7

0xcc6f,	// (0x00080ea0) bg_vkb2_func_pane_g8

0x33c5,	// (0x000775f6) bg_vkb2_func_pane_g9

0x0008,

0xfb46,	// (0x00083d77) bg_vkb2_func_pane_g

0x8f5d,	// (0x0007d18e) blid2_tripm_pane_g6_ParamLimits

0x8f5d,	// (0x0007d18e) blid2_tripm_pane_g6

0xca4b,	// (0x00080c7c) mp4_progress_pane_g1

0x8fd6,	// (0x0007d207) blid2_tripm_values_pane_ParamLimits

0x8fd6,	// (0x0007d207) blid2_tripm_values_pane

0x90cd,	// (0x0007d2fe) blid2_tripm_values_pane_t1

0x90db,	// (0x0007d30c) blid2_tripm_values_pane_t2

0x90e9,	// (0x0007d31a) blid2_tripm_values_pane_t3

0x90f7,	// (0x0007d328) blid2_tripm_values_pane_t4

0x9105,	// (0x0007d336) blid2_tripm_values_pane_t5

0x9113,	// (0x0007d344) blid2_tripm_values_pane_t6

0x9121,	// (0x0007d352) blid2_tripm_values_pane_t7

0x912f,	// (0x0007d360) blid2_tripm_values_pane_t8

0x913d,	// (0x0007d36e) blid2_tripm_values_pane_t9

0x0008,

0xfb59,	// (0x00083d8a) blid2_tripm_values_pane_t

0x2e83,	// (0x000770b4) call_video_pane_t1_ParamLimits

0x2ea1,	// (0x000770d2) call_video_pane_t2_ParamLimits

0xf28d,	// (0x000834be) call_video_pane_t_ParamLimits

0x0c5a,	// (0x00074e8b) msg_header_pane_g1_ParamLimits

0x4dfb,	// (0x0007902c) msg_header_pane_g2_ParamLimits

0x4dfb,	// (0x0007902c) msg_header_pane_g2

0x0001,

0xf4a7,	// (0x000836d8) msg_header_pane_g_ParamLimits

0xf4a7,	// (0x000836d8) msg_header_pane_g

0x2291,	// (0x000764c2) main_clock2_pane_ParamLimits

0x7119,	// (0x0007b34a) grid_clock2_toolbar_pane_ParamLimits

0x7119,	// (0x0007b34a) grid_clock2_toolbar_pane

0x7119,	// (0x0007b34a) listscroll_clock2_pane_ParamLimits

0x7119,	// (0x0007b34a) listscroll_clock2_pane

0x71fb,	// (0x0007b42c) main_clock2_pane_t3_ParamLimits

0x71fb,	// (0x0007b42c) main_clock2_pane_t3

0x721e,	// (0x0007b44f) main_clock2_pane_t4_ParamLimits

0x721e,	// (0x0007b44f) main_clock2_pane_t4

0xd3a2,	// (0x000815d3) cell_clock2_toolbar_pane

0xd3aa,	// (0x000815db) cell_clock2_toolbar_pane_cp01

0xd3aa,	// (0x000815db) cell_clock2_toolbar_pane_cp02

0xd3b2,	// (0x000815e3) cell_clock2_toolbar_pane_cp03

0xd3ba,	// (0x000815eb) list_clock2_pane

0x43df,	// (0x00078610) scroll_pane_cp10

0xd3c2,	// (0x000815f3) list_single_clock2_pane_ParamLimits

0xd3c2,	// (0x000815f3) list_single_clock2_pane

0x4820,	// (0x00078a51) list_highlight_pane_cp08

0xd3cf,	// (0x00081600) list_single_clock2_pane_t1

0xd3dd,	// (0x0008160e) list_single_clock2_pane_t2

0x0001,

0xfb6c,	// (0x00083d9d) list_single_clock2_pane_t

0xa978,	// (0x0007eba9) bg_button_pane_cp10

0xd3eb,	// (0x0008161c) cell_clock2_toolbar_pane_g1

0x4e0f,	// (0x00079040) aid_main_viewer_pane_g1_ParamLimits

0x4e0f,	// (0x00079040) aid_main_viewer_pane_g1

0x4e1d,	// (0x0007904e) aid_main_viewer_pane_g2_ParamLimits

0x4e1d,	// (0x0007904e) aid_main_viewer_pane_g2

0x4e2b,	// (0x0007905c) aid_main_viewer_pane_g3_ParamLimits

0x4e2b,	// (0x0007905c) aid_main_viewer_pane_g3

0x4e3a,	// (0x0007906b) aid_main_viewer_pane_g4_ParamLimits

0x4e3a,	// (0x0007906b) aid_main_viewer_pane_g4

0x0003,

0xf4b8,	// (0x000836e9) aid_main_viewer_pane_g_ParamLimits

0xf4b8,	// (0x000836e9) aid_main_viewer_pane_g

0x59e6,	// (0x00079c17) main_calc_pane_ParamLimits

0x59fa,	// (0x00079c2b) main_dialer2_pane_ParamLimits

0xa978,	// (0x0007eba9) main_cam6_pane

0xa978,	// (0x0007eba9) main_vid6_pane

0x7125,	// (0x0007b356) listscroll_gen_pane_cp06_ParamLimits

0x7125,	// (0x0007b356) listscroll_gen_pane_cp06

0x7241,	// (0x0007b472) main_clock2_pane_t5_ParamLimits

0x7241,	// (0x0007b472) main_clock2_pane_t5

0x729b,	// (0x0007b4cc) aid_call2_pane_cp10_ParamLimits

0x72ad,	// (0x0007b4de) aid_call_pane_cp10_ParamLimits

0x45c4,	// (0x000787f5) popup_clock_analogue_window_cp10_g1_ParamLimits

0x45c4,	// (0x000787f5) popup_clock_analogue_window_cp10_g2_ParamLimits

0x72bf,	// (0x0007b4f0) popup_clock_analogue_window_cp10_g3_ParamLimits

0x72bf,	// (0x0007b4f0) popup_clock_analogue_window_cp10_g4_ParamLimits

0x45c4,	// (0x000787f5) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7ee,	// (0x00083a1f) popup_clock_analogue_window_cp10_g_ParamLimits

0x72d1,	// (0x0007b502) popup_clock_analogue_window_cp10_t1_ParamLimits

0x7919,	// (0x0007bb4a) cell_dialer2_keypad_pane_g2_ParamLimits

0x7919,	// (0x0007bb4a) cell_dialer2_keypad_pane_g2

0x0001,

0xf8d4,	// (0x00083b05) cell_dialer2_keypad_pane_g_ParamLimits

0xf8d4,	// (0x00083b05) cell_dialer2_keypad_pane_g

0x7935,	// (0x0007bb66) cell_dialer2_keypad_pane_t1

0x84e0,	// (0x0007c711) main_cset_text2_pane_ParamLimits

0x84e0,	// (0x0007c711) main_cset_text2_pane

0xd101,	// (0x00081332) area_vitu2_query_pane_g1_ParamLimits

0x0f0b,	// (0x0007513c) area_vitu2_query_pane_g2_ParamLimits

0xfa89,	// (0x00083cba) area_vitu2_query_pane_g_ParamLimits

0xd185,	// (0x000813b6) area_vitu2_query_pane_t7_ParamLimits

0xd185,	// (0x000813b6) area_vitu2_query_pane_t7

0x8c5f,	// (0x0007ce90) bg_button_pane_cp018_ParamLimits

0x8c6d,	// (0x0007ce9e) bg_button_pane_cp021_ParamLimits

0x0f44,	// (0x00075175) bg_button_pane_cp022_ParamLimits

0x0f44,	// (0x00075175) bg_vkb2_func_pane_cp08_ParamLimits

0x8c5f,	// (0x0007ce90) bg_vkb2_func_pane_cp06_ParamLimits

0x8c6d,	// (0x0007ce9e) bg_vkb2_func_pane_cp07_ParamLimits

0x0f53,	// (0x00075184) input_focus_pane_cp09_ParamLimits

0xf0a5,	// (0x000832d6) cam6_autofocus_pane_ParamLimits

0xf0a5,	// (0x000832d6) cam6_autofocus_pane

0x914b,	// (0x0007d37c) cam6_image_uncrop_pane_ParamLimits

0x914b,	// (0x0007d37c) cam6_image_uncrop_pane

0x915a,	// (0x0007d38b) cam6_indi_pane_ParamLimits

0x915a,	// (0x0007d38b) cam6_indi_pane

0x9170,	// (0x0007d3a1) cam6_mode_pane_ParamLimits

0x9170,	// (0x0007d3a1) cam6_mode_pane

0x9182,	// (0x0007d3b3) cam6_timer_pane_ParamLimits

0x9182,	// (0x0007d3b3) cam6_timer_pane

0x918e,	// (0x0007d3bf) cam6_zoom_pane_ParamLimits

0x918e,	// (0x0007d3bf) cam6_zoom_pane

0x919a,	// (0x0007d3cb) cam6_mode_pane_g1_ParamLimits

0x919a,	// (0x0007d3cb) cam6_mode_pane_g1

0x91aa,	// (0x0007d3db) cam6_mode_pane_g2_ParamLimits

0x91aa,	// (0x0007d3db) cam6_mode_pane_g2

0x91ba,	// (0x0007d3eb) cam6_mode_pane_g3_ParamLimits

0x91ba,	// (0x0007d3eb) cam6_mode_pane_g3

0x91ca,	// (0x0007d3fb) cam6_mode_pane_g4_ParamLimits

0x91ca,	// (0x0007d3fb) cam6_mode_pane_g4

0x0003,

0xfb71,	// (0x00083da2) cam6_mode_pane_g_ParamLimits

0xfb71,	// (0x00083da2) cam6_mode_pane_g

0xd3f3,	// (0x00081624) bg_tb_trans_pane_cp08_ParamLimits

0xd3f3,	// (0x00081624) bg_tb_trans_pane_cp08

0xd401,	// (0x00081632) cam6_battery_pane_ParamLimits

0xd401,	// (0x00081632) cam6_battery_pane

0xd417,	// (0x00081648) cam6_indi_pane_g1_ParamLimits

0xd417,	// (0x00081648) cam6_indi_pane_g1

0xd429,	// (0x0008165a) cam6_indi_pane_g2_ParamLimits

0xd429,	// (0x0008165a) cam6_indi_pane_g2

0xd43b,	// (0x0008166c) cam6_indi_pane_g3_ParamLimits

0xd43b,	// (0x0008166c) cam6_indi_pane_g3

0x0002,

0xfb7a,	// (0x00083dab) cam6_indi_pane_g_ParamLimits

0xfb7a,	// (0x00083dab) cam6_indi_pane_g

0xd44d,	// (0x0008167e) cam6_indi_pane_t1_ParamLimits

0xd44d,	// (0x0008167e) cam6_indi_pane_t1

0x91da,	// (0x0007d40b) cam6_autofocus_pane_g1

0x91e2,	// (0x0007d413) cam6_autofocus_pane_g2

0x91ea,	// (0x0007d41b) cam6_autofocus_pane_g3

0x91f2,	// (0x0007d423) cam6_autofocus_pane_g4

0x0003,

0xfb81,	// (0x00083db2) cam6_autofocus_pane_g

0xd473,	// (0x000816a4) cam6_timer_pane_g1

0xd47b,	// (0x000816ac) cam6_timer_pane_t1

0xd489,	// (0x000816ba) cam6_zoom_cont_pane

0xd491,	// (0x000816c2) cam6_zoom_pane_g1

0xd499,	// (0x000816ca) cam6_zoom_pane_g2

0x91fa,	// (0x0007d42b) cam6_zoom_pane_g3

0x0002,

0xfb8a,	// (0x00083dbb) cam6_zoom_pane_g

0xc159,	// (0x0008038a) cam6_battery_pane_g1

0xc159,	// (0x0008038a) cam6_battery_pane_g2

0x0001,

0xf6fb,	// (0x0008392c) cam6_battery_pane_g

0xd4a1,	// (0x000816d2) cam6_zoom_cont_pane_g1

0xd4aa,	// (0x000816db) cam6_zoom_cont_pane_g2

0xd4b3,	// (0x000816e4) cam6_zoom_cont_pane_g3

0x0002,

0xfb91,	// (0x00083dc2) cam6_zoom_cont_pane_g

0x9217,	// (0x0007d448) cam6_mode_pane_cp_ParamLimits

0x9217,	// (0x0007d448) cam6_mode_pane_cp

0x918e,	// (0x0007d3bf) cam6_zoom_pane_cp_ParamLimits

0x918e,	// (0x0007d3bf) cam6_zoom_pane_cp

0x9229,	// (0x0007d45a) vid6_image_uncrop_cif_pane_ParamLimits

0x9229,	// (0x0007d45a) vid6_image_uncrop_cif_pane

0x9239,	// (0x0007d46a) vid6_image_uncrop_nhd_pane_ParamLimits

0x9239,	// (0x0007d46a) vid6_image_uncrop_nhd_pane

0x914b,	// (0x0007d37c) vid6_image_uncrop_vga_pane_ParamLimits

0x914b,	// (0x0007d37c) vid6_image_uncrop_vga_pane

0x9248,	// (0x0007d479) vid6_image_uncrop_wvga_pane_ParamLimits

0x9248,	// (0x0007d479) vid6_image_uncrop_wvga_pane

0x9257,	// (0x0007d488) vid6_indi_pane_ParamLimits

0x9257,	// (0x0007d488) vid6_indi_pane

0xd3f3,	// (0x00081624) bg_tb_trans_pane_cp09_ParamLimits

0xd3f3,	// (0x00081624) bg_tb_trans_pane_cp09

0xd4cb,	// (0x000816fc) cam6_battery_pane_cp_ParamLimits

0xd4cb,	// (0x000816fc) cam6_battery_pane_cp

0xd4d7,	// (0x00081708) vid6_indi_pane_g1_ParamLimits

0xd4d7,	// (0x00081708) vid6_indi_pane_g1

0xd4e9,	// (0x0008171a) vid6_indi_pane_g2_ParamLimits

0xd4e9,	// (0x0008171a) vid6_indi_pane_g2

0xd4fb,	// (0x0008172c) vid6_indi_pane_g3_ParamLimits

0xd4fb,	// (0x0008172c) vid6_indi_pane_g3

0xd510,	// (0x00081741) vid6_indi_pane_g4_ParamLimits

0xd510,	// (0x00081741) vid6_indi_pane_g4

0xd525,	// (0x00081756) vid6_indi_pane_g5_ParamLimits

0xd525,	// (0x00081756) vid6_indi_pane_g5

0x0004,

0xfb98,	// (0x00083dc9) vid6_indi_pane_g_ParamLimits

0xfb98,	// (0x00083dc9) vid6_indi_pane_g

0xd53f,	// (0x00081770) vid6_indi_pane_t1_ParamLimits

0xd53f,	// (0x00081770) vid6_indi_pane_t1

0xd555,	// (0x00081786) vid6_indi_pane_t2_ParamLimits

0xd555,	// (0x00081786) vid6_indi_pane_t2

0xd57d,	// (0x000817ae) vid6_indi_pane_t3_ParamLimits

0xd57d,	// (0x000817ae) vid6_indi_pane_t3

0xd5a5,	// (0x000817d6) vid6_indi_pane_t4_ParamLimits

0xd5a5,	// (0x000817d6) vid6_indi_pane_t4

0x0003,

0xfba3,	// (0x00083dd4) vid6_indi_pane_t_ParamLimits

0xfba3,	// (0x00083dd4) vid6_indi_pane_t

0xd5c9,	// (0x000817fa) wait_bar_pane_cp08

0x926f,	// (0x0007d4a0) main_cset_text2_pane_t1_ParamLimits

0x926f,	// (0x0007d4a0) main_cset_text2_pane_t1

0x9202,	// (0x0007d433) listscroll_gen_pane_cp06_t1_ParamLimits

0x9202,	// (0x0007d433) listscroll_gen_pane_cp06_t1

0xa978,	// (0x0007eba9) main_cam6_set_pane

0xc3c5,	// (0x000805f6) bg_tb_trans_pane_cp06_ParamLimits

0xef42,	// (0x00083173) cam4_indicators_pane_g1_ParamLimits

0xef53,	// (0x00083184) cam4_indicators_pane_g2_ParamLimits

0xf911,	// (0x00083b42) cam4_indicators_pane_g_ParamLimits

0xef71,	// (0x000831a2) cam4_indicators_pane_t1_ParamLimits

0xcba4,	// (0x00080dd5) bg_tb_trans_pane_cp07_ParamLimits

0x7ec9,	// (0x0007c0fa) vid4_indicators_pane_g1_ParamLimits

0x7ed6,	// (0x0007c107) vid4_indicators_pane_g2_ParamLimits

0x7ee3,	// (0x0007c114) vid4_indicators_pane_g3_ParamLimits

0x7ef0,	// (0x0007c121) vid4_indicators_pane_g4_ParamLimits

0xf923,	// (0x00083b54) vid4_indicators_pane_g_ParamLimits

0x7f08,	// (0x0007c139) vid4_indicators_pane_t1_ParamLimits

0xf00d,	// (0x0008323e) vid4_progress_pane_g1_ParamLimits

0xf01d,	// (0x0008324e) vid4_progress_pane_g2_ParamLimits

0xad21,	// (0x0007ef52) vid4_progress_pane_g3_ParamLimits

0xf02d,	// (0x0008325e) vid4_progress_pane_g4_ParamLimits

0xfad4,	// (0x00083d05) vid4_progress_pane_g_ParamLimits

0xf04b,	// (0x0008327c) vid4_progress_pane_t1_ParamLimits

0xf060,	// (0x00083291) vid4_progress_pane_t2_ParamLimits

0xf076,	// (0x000832a7) vid4_progress_pane_t3_ParamLimits

0xfadf,	// (0x00083d10) vid4_progress_pane_t_ParamLimits

0xf08b,	// (0x000832bc) wait_bar_pane_cp07_ParamLimits

0x928c,	// (0x0007d4bd) main_cam6_set_pane_g2_ParamLimits

0x928c,	// (0x0007d4bd) main_cam6_set_pane_g2

0x92b0,	// (0x0007d4e1) main_cset6_listscroll_pane_ParamLimits

0x92b0,	// (0x0007d4e1) main_cset6_listscroll_pane

0x92d0,	// (0x0007d501) main_cset6_slider_pane_ParamLimits

0x92d0,	// (0x0007d501) main_cset6_slider_pane

0x92e6,	// (0x0007d517) main_cset6_text2_pane_ParamLimits

0x92e6,	// (0x0007d517) main_cset6_text2_pane

0xd5d8,	// (0x00081809) main_cset6_text_pane

0xd5e0,	// (0x00081811) main_cset_list_pane_copy1_ParamLimits

0xd5e0,	// (0x00081811) main_cset_list_pane_copy1

0xd5f0,	// (0x00081821) scroll_pane_cp028_copy1

0x92f4,	// (0x0007d525) cset_list_set_pane_copy1

0x9305,	// (0x0007d536) aid_position_infowindow_above_copy1

0x930d,	// (0x0007d53e) aid_position_infowindow_below_copy1

0x9315,	// (0x0007d546) cset_list_set_pane_g1_copy1

0x0f62,	// (0x00075193) cset_list_set_pane_g3_copy1_ParamLimits

0x0f62,	// (0x00075193) cset_list_set_pane_g3_copy1

0x0f71,	// (0x000751a2) cset_list_set_pane_t1_copy1_ParamLimits

0x0f71,	// (0x000751a2) cset_list_set_pane_t1_copy1

0x17e5,	// (0x00075a16) list_highlight_pane_cp021_copy1_ParamLimits

0x17e5,	// (0x00075a16) list_highlight_pane_cp021_copy1

0xd5f9,	// (0x0008182a) cset6_slider_pane_ParamLimits

0xd5f9,	// (0x0008182a) cset6_slider_pane

0xd625,	// (0x00081856) main_cset6_slider_pane_g1_ParamLimits

0xd625,	// (0x00081856) main_cset6_slider_pane_g1

0x931d,	// (0x0007d54e) main_cset6_slider_pane_g2_ParamLimits

0x931d,	// (0x0007d54e) main_cset6_slider_pane_g2

0xd64d,	// (0x0008187e) main_cset6_slider_pane_g3_ParamLimits

0xd64d,	// (0x0008187e) main_cset6_slider_pane_g3

0x9345,	// (0x0007d576) main_cset6_slider_pane_g4_ParamLimits

0x9345,	// (0x0007d576) main_cset6_slider_pane_g4

0x9351,	// (0x0007d582) main_cset6_slider_pane_g5_ParamLimits

0x9351,	// (0x0007d582) main_cset6_slider_pane_g5

0xcd7e,	// (0x00080faf) main_cset6_slider_pane_g7_ParamLimits

0xcd7e,	// (0x00080faf) main_cset6_slider_pane_g7

0xcd8a,	// (0x00080fbb) main_cset6_slider_pane_g8_ParamLimits

0xcd8a,	// (0x00080fbb) main_cset6_slider_pane_g8

0x858d,	// (0x0007c7be) main_cset6_slider_pane_g9_ParamLimits

0x858d,	// (0x0007c7be) main_cset6_slider_pane_g9

0x8599,	// (0x0007c7ca) main_cset6_slider_pane_g10_ParamLimits

0x8599,	// (0x0007c7ca) main_cset6_slider_pane_g10

0x85a5,	// (0x0007c7d6) main_cset6_slider_pane_g11_ParamLimits

0x85a5,	// (0x0007c7d6) main_cset6_slider_pane_g11

0x85b1,	// (0x0007c7e2) main_cset6_slider_pane_g12_ParamLimits

0x85b1,	// (0x0007c7e2) main_cset6_slider_pane_g12

0x85bd,	// (0x0007c7ee) main_cset6_slider_pane_g13_ParamLimits

0x85bd,	// (0x0007c7ee) main_cset6_slider_pane_g13

0x85c9,	// (0x0007c7fa) main_cset6_slider_pane_g14_ParamLimits

0x85c9,	// (0x0007c7fa) main_cset6_slider_pane_g14

0x935d,	// (0x0007d58e) main_cset6_slider_pane_g15_ParamLimits

0x935d,	// (0x0007d58e) main_cset6_slider_pane_g15

0x85ed,	// (0x0007c81e) main_cset6_slider_pane_g16_ParamLimits

0x85ed,	// (0x0007c81e) main_cset6_slider_pane_g16

0x85f9,	// (0x0007c82a) main_cset6_slider_pane_g17_ParamLimits

0x85f9,	// (0x0007c82a) main_cset6_slider_pane_g17

0x0011,

0xfbac,	// (0x00083ddd) main_cset6_slider_pane_g_ParamLimits

0xfbac,	// (0x00083ddd) main_cset6_slider_pane_g

0xd659,	// (0x0008188a) main_cset6_slider_pane_t1_ParamLimits

0xd659,	// (0x0008188a) main_cset6_slider_pane_t1

0x938d,	// (0x0007d5be) main_cset6_slider_pane_t2_ParamLimits

0x938d,	// (0x0007d5be) main_cset6_slider_pane_t2

0x93b8,	// (0x0007d5e9) main_cset6_slider_pane_t3_ParamLimits

0x93b8,	// (0x0007d5e9) main_cset6_slider_pane_t3

0x93e3,	// (0x0007d614) main_cset6_slider_pane_t4_ParamLimits

0x93e3,	// (0x0007d614) main_cset6_slider_pane_t4

0x940e,	// (0x0007d63f) main_cset6_slider_pane_t5_ParamLimits

0x940e,	// (0x0007d63f) main_cset6_slider_pane_t5

0xd69a,	// (0x000818cb) main_cset6_slider_pane_t7_ParamLimits

0xd69a,	// (0x000818cb) main_cset6_slider_pane_t7

0x9439,	// (0x0007d66a) main_cset6_slider_pane_t8_ParamLimits

0x9439,	// (0x0007d66a) main_cset6_slider_pane_t8

0x945d,	// (0x0007d68e) main_cset6_slider_pane_t9_ParamLimits

0x945d,	// (0x0007d68e) main_cset6_slider_pane_t9

0x9481,	// (0x0007d6b2) main_cset6_slider_pane_t10_ParamLimits

0x9481,	// (0x0007d6b2) main_cset6_slider_pane_t10

0x94a5,	// (0x0007d6d6) main_cset6_slider_pane_t11_ParamLimits

0x94a5,	// (0x0007d6d6) main_cset6_slider_pane_t11

0xd6d0,	// (0x00081901) main_cset6_slider_pane_t14_ParamLimits

0xd6d0,	// (0x00081901) main_cset6_slider_pane_t14

0xd709,	// (0x0008193a) main_cset6_slider_pane_t15_ParamLimits

0xd709,	// (0x0008193a) main_cset6_slider_pane_t15

0x000b,

0xfbd1,	// (0x00083e02) main_cset6_slider_pane_t_ParamLimits

0xfbd1,	// (0x00083e02) main_cset6_slider_pane_t

0xce66,	// (0x00081097) cset_slider_pane_g1_copy1

0xce6f,	// (0x000810a0) cset_slider_pane_g2_copy1

0xce78,	// (0x000810a9) cset_slider_pane_g3_copy1

0xa978,	// (0x0007eba9) bg_popup_sub_pane_cp011_copy1

0xcf21,	// (0x00081152) main_cset_text_pane_g1_copy1

0xcf29,	// (0x0008115a) main_cset_text_pane_t1_copy1

0xcf37,	// (0x00081168) main_cset_text_pane_t2_copy1

0xcf45,	// (0x00081176) main_cset_text_pane_t3_copy1

0xcf53,	// (0x00081184) main_cset_text_pane_t4_copy1

0xcf61,	// (0x00081192) main_cset_text_pane_t5_copy1

0xcf6f,	// (0x000811a0) main_cset_text_pane_t6_copy1

0xcf7d,	// (0x000811ae) main_cset_text_pane_t7_copy1

0x926f,	// (0x0007d4a0) main_cset_text2_pane_t1_copy1

0xa978,	// (0x0007eba9) main_ncimui_pane

0x5c3c,	// (0x00079e6d) popup_query_ncimui_window_ParamLimits

0x5c3c,	// (0x00079e6d) popup_query_ncimui_window

0xec8f,	// (0x00082ec0) field_cale_ev2_pane_g4_ParamLimits

0xec8f,	// (0x00082ec0) field_cale_ev2_pane_g4

0x77f9,	// (0x0007ba2a) cell_video_dialer_keypad_pane_g2_ParamLimits

0x77f9,	// (0x0007ba2a) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8af,	// (0x00083ae0) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8af,	// (0x00083ae0) cell_video_dialer_keypad_pane_g

0x7811,	// (0x0007ba42) cell_video_dialer_keypad_pane_t1

0xa978,	// (0x0007eba9) bg_popup_window_pane_cp012

0x4235,	// (0x00078466) heading_pane_cp06

0xd831,	// (0x00081a62) ncim_query_content_pane

0xa978,	// (0x0007eba9) bg_popup_heading_pane_cp01

0xd839,	// (0x00081a6a) ncim_heading_pane_t1

0xd847,	// (0x00081a78) ncim_indicator_popup_pane

0xd859,	// (0x00081a8a) ncim_query_button_pane

0xd86d,	// (0x00081a9e) ncim_query_content_pane_t1

0xd87f,	// (0x00081ab0) ncim_query_content_pane_t2

0x0005,

0xfc10,	// (0x00083e41) ncim_query_content_pane_t

0xd8b9,	// (0x00081aea) ncim_query_list_pane

0xd8cb,	// (0x00081afc) ncim_query_popup_pane

0xd847,	// (0x00081a78) ncim_indicator_popup_pane_ParamLimits

0x95c2,	// (0x0007d7f3) ncim_query_content_pane_g1_ParamLimits

0x95c2,	// (0x0007d7f3) ncim_query_content_pane_g1

0xd86d,	// (0x00081a9e) ncim_query_content_pane_t1_ParamLimits

0xd87f,	// (0x00081ab0) ncim_query_content_pane_t2_ParamLimits

0x95ce,	// (0x0007d7ff) ncim_query_content_pane_t3_ParamLimits

0x95ce,	// (0x0007d7ff) ncim_query_content_pane_t3

0x95f6,	// (0x0007d827) ncim_query_content_pane_t4_ParamLimits

0x95f6,	// (0x0007d827) ncim_query_content_pane_t4

0x961e,	// (0x0007d84f) ncim_query_content_pane_t5_ParamLimits

0x961e,	// (0x0007d84f) ncim_query_content_pane_t5

0xd891,	// (0x00081ac2) ncim_query_content_pane_t6_ParamLimits

0xd891,	// (0x00081ac2) ncim_query_content_pane_t6

0xfc10,	// (0x00083e41) ncim_query_content_pane_t_ParamLimits

0xd8b9,	// (0x00081aea) ncim_query_list_pane_ParamLimits

0xd8cb,	// (0x00081afc) ncim_query_popup_pane_ParamLimits

0xd8df,	// (0x00081b10) wait_bar_pane_cp04

0xa978,	// (0x0007eba9) input_focus_pane_cp011

0xd8e7,	// (0x00081b18) ncim_query_popup_pane_t1

0xd8f5,	// (0x00081b26) ncim_list_query_list_pane_ParamLimits

0xd8f5,	// (0x00081b26) ncim_list_query_list_pane

0xa978,	// (0x0007eba9) bg_button_pane_cp027

0xd902,	// (0x00081b33) ncim_query_button_pane_g1

0xa978,	// (0x0007eba9) list_highlight_pane_cp012

0xd90c,	// (0x00081b3d) ncim_list_query_list_pane_g1

0xd914,	// (0x00081b45) ncim_list_query_list_pane_t1

0xef62,	// (0x00083193) cam4_indicators_pane_g3_ParamLimits

0xef62,	// (0x00083193) cam4_indicators_pane_g3

0x7efc,	// (0x0007c12d) vid4_indicators_pane_g5_ParamLimits

0x7efc,	// (0x0007c12d) vid4_indicators_pane_g5

0xf03c,	// (0x0008326d) vid4_progress_pane_g5_ParamLimits

0xf03c,	// (0x0008326d) vid4_progress_pane_g5

0x94db,	// (0x0007d70c) main_ncimui_pane_g1

0x9531,	// (0x0007d762) ncimui_group_query_pane_ParamLimits

0x9531,	// (0x0007d762) ncimui_group_query_pane

0x956d,	// (0x0007d79e) ncimui_list_pane_ParamLimits

0x956d,	// (0x0007d79e) ncimui_list_pane

0x958e,	// (0x0007d7bf) ncimui_text_pane_ParamLimits

0x958e,	// (0x0007d7bf) ncimui_text_pane

0x9646,	// (0x0007d877) ncimui_text_pane_t1_ParamLimits

0x9646,	// (0x0007d877) ncimui_text_pane_t1

0xd922,	// (0x00081b53) ncimui_list_single_graphic_pane_ParamLimits

0xd922,	// (0x00081b53) ncimui_list_single_graphic_pane

0x9664,	// (0x0007d895) ncimui_query_pane_ParamLimits

0x9664,	// (0x0007d895) ncimui_query_pane

0xa978,	// (0x0007eba9) list_highlight_pane_cp013

0xd932,	// (0x00081b63) ncim_list_query_list_pane_t1_copy1

0xd90c,	// (0x00081b3d) ncim_list_single_graphic_pane_g1

0xd940,	// (0x00081b71) ncim_query_button_pane_cp01

0xd94c,	// (0x00081b7d) ncim_query_entry_pane_ParamLimits

0xd94c,	// (0x00081b7d) ncim_query_entry_pane

0xd95f,	// (0x00081b90) ncimui_query_pane_g1

0xd96b,	// (0x00081b9c) ncimui_query_pane_t1_ParamLimits

0xd96b,	// (0x00081b9c) ncimui_query_pane_t1

0x17e5,	// (0x00075a16) input_focus_pane_cp012

0xd984,	// (0x00081bb5) ncim_query_entry_pane_t1

0x2291,	// (0x000764c2) main_im_pane_ParamLimits

0x17e5,	// (0x00075a16) main_mobtv_pane_ParamLimits

0x17e5,	// (0x00075a16) main_mobtv_pane

0x9375,	// (0x0007d5a6) main_cset6_slider_pane_g18_ParamLimits

0x9375,	// (0x0007d5a6) main_cset6_slider_pane_g18

0x9381,	// (0x0007d5b2) main_cset6_slider_pane_g19_ParamLimits

0x9381,	// (0x0007d5b2) main_cset6_slider_pane_g19

0xf0c7,	// (0x000832f8) bg_main_mobtv_pane_ParamLimits

0xf0c7,	// (0x000832f8) bg_main_mobtv_pane

0x9677,	// (0x0007d8a8) main_mobtv_info_pane

0x9680,	// (0x0007d8b1) main_mobtv_loading_pane_ParamLimits

0x9680,	// (0x0007d8b1) main_mobtv_loading_pane

0xd996,	// (0x00081bc7) main_mobtv_pg_channel_list_pane

0xd9a0,	// (0x00081bd1) main_mobtv_pg_hdr_pane

0x968d,	// (0x0007d8be) main_mobtv_programe_curr_pane_ParamLimits

0x968d,	// (0x0007d8be) main_mobtv_programe_curr_pane

0x969a,	// (0x0007d8cb) main_mobtv_programe_next_pane_ParamLimits

0x969a,	// (0x0007d8cb) main_mobtv_programe_next_pane

0xd9a9,	// (0x00081bda) popup_mobtv_noti_window

0xc159,	// (0x0008038a) main_tv_pg_hdr_pane_g1

0xd9b1,	// (0x00081be2) main_tv_pg_hdr_pane_g2

0xd9b9,	// (0x00081bea) main_tv_pg_hdr_pane_g3

0xd9c1,	// (0x00081bf2) main_tv_pg_hdr_pane_g4

0xd9c9,	// (0x00081bfa) main_tv_pg_hdr_pane_g5

0xd9d3,	// (0x00081c04) main_tv_pg_hdr_pane_g6

0xd9dd,	// (0x00081c0e) main_tv_pg_hdr_pane_g7

0xd9e7,	// (0x00081c18) main_tv_pg_hdr_pane_g8

0xd9f1,	// (0x00081c22) main_tv_pg_hdr_pane_g9

0xd9fb,	// (0x00081c2c) main_tv_pg_hdr_pane_g10

0xda05,	// (0x00081c36) main_tv_pg_hdr_pane_g11

0x000a,

0xfc1d,	// (0x00083e4e) main_tv_pg_hdr_pane_g

0xda0f,	// (0x00081c40) main_tv_pg_hdr_pane_t1

0xda1d,	// (0x00081c4e) main_tv_pg_hdr_pane_t2

0xda2b,	// (0x00081c5c) main_tv_pg_hdr_pane_t3

0xda3b,	// (0x00081c6c) main_tv_pg_hdr_pane_t4

0xda4b,	// (0x00081c7c) main_tv_pg_hdr_pane_t5

0x0004,

0xfc34,	// (0x00083e65) main_tv_pg_hdr_pane_t

0xda5b,	// (0x00081c8c) single_mobtv_pg_channel_pane_ParamLimits

0xda5b,	// (0x00081c8c) single_mobtv_pg_channel_pane

0xda6d,	// (0x00081c9e) single_mobtv_pg_channel_table_pane

0xda76,	// (0x00081ca7) single_mobtv_pg_channel_thumb_pane

0xda7f,	// (0x00081cb0) single_tv_pg_channel_pane_g1

0xda88,	// (0x00081cb9) single_tv_pg_channel_pane_g2

0x0001,

0xfc3f,	// (0x00083e70) single_tv_pg_channel_pane_g

0xc3c5,	// (0x000805f6) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc3c5,	// (0x000805f6) bg_single_mobtv_pg_channel_thumb_pane

0xda91,	// (0x00081cc2) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xda91,	// (0x00081cc2) single_mobtv_pg_channel_thumb_pane_g1

0xda9f,	// (0x00081cd0) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xda9f,	// (0x00081cd0) single_mobtv_pg_channel_thumb_pane_g2

0xdaab,	// (0x00081cdc) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdaab,	// (0x00081cdc) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc44,	// (0x00083e75) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc44,	// (0x00083e75) single_mobtv_pg_channel_thumb_pane_g

0xdab7,	// (0x00081ce8) single_mobtv_pg_channel_thumb_pane_t1

0xdac5,	// (0x00081cf6) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc4b,	// (0x00083e7c) single_mobtv_pg_channel_thumb_pane_t

0xc159,	// (0x0008038a) bg_single_mobtv_pg_channel_table_pane_g1

0xc159,	// (0x0008038a) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6fb,	// (0x0008392c) bg_single_mobtv_pg_channel_table_pane_g

0xdad3,	// (0x00081d04) single_mobtv_pg_channel_table_pane_t1

0xdae1,	// (0x00081d12) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc50,	// (0x00083e81) single_mobtv_pg_channel_table_pane_t

0x96af,	// (0x0007d8e0) main_mobtv_info_pane_g1_ParamLimits

0x96af,	// (0x0007d8e0) main_mobtv_info_pane_g1

0x96cd,	// (0x0007d8fe) main_mobtv_info_pane_t1_ParamLimits

0x96cd,	// (0x0007d8fe) main_mobtv_info_pane_t1

0x9745,	// (0x0007d976) main_mobtv_info_pane_t2_ParamLimits

0x9745,	// (0x0007d976) main_mobtv_info_pane_t2

0x0002,

0xfc5a,	// (0x00083e8b) main_mobtv_info_pane_t_ParamLimits

0xfc5a,	// (0x00083e8b) main_mobtv_info_pane_t

0x97d4,	// (0x0007da05) wait_bar_pane_cp05

0x97e6,	// (0x0007da17) main_mobtv_loading_pane_g1_ParamLimits

0x97e6,	// (0x0007da17) main_mobtv_loading_pane_g1

0x97f9,	// (0x0007da2a) main_mobtv_loading_pane_g2_ParamLimits

0x97f9,	// (0x0007da2a) main_mobtv_loading_pane_g2

0x9805,	// (0x0007da36) main_mobtv_loading_pane_g3_ParamLimits

0x9805,	// (0x0007da36) main_mobtv_loading_pane_g3

0x0002,

0xfc61,	// (0x00083e92) main_mobtv_loading_pane_g_ParamLimits

0xfc61,	// (0x00083e92) main_mobtv_loading_pane_g

0xdaef,	// (0x00081d20) main_mobtv_loading_pane_t1_ParamLimits

0xdaef,	// (0x00081d20) main_mobtv_loading_pane_t1

0xdb07,	// (0x00081d38) main_mobtv_loading_pane_t2_ParamLimits

0xdb07,	// (0x00081d38) main_mobtv_loading_pane_t2

0x0001,

0xfc68,	// (0x00083e99) main_mobtv_loading_pane_t_ParamLimits

0xfc68,	// (0x00083e99) main_mobtv_loading_pane_t

0x9818,	// (0x0007da49) wait_bar_pane_cp06_ParamLimits

0x9818,	// (0x0007da49) wait_bar_pane_cp06

0xdb2b,	// (0x00081d5c) main_mobtv_programe_curr_pane_t1

0xdb39,	// (0x00081d6a) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc6d,	// (0x00083e9e) main_mobtv_programe_curr_pane_t

0xdb47,	// (0x00081d78) main_mobtv_programe_next_pane_t1

0xdb55,	// (0x00081d86) main_mobtv_programe_next_pane_t2

0xdb63,	// (0x00081d94) main_mobtv_programe_next_pane_t3

0x0002,

0xfc72,	// (0x00083ea3) main_mobtv_programe_next_pane_t

0xa978,	// (0x0007eba9) bg_popup_mobtv_noti_window_pane

0xdb71,	// (0x00081da2) popup_mobtv_noti_window_g1

0xdb79,	// (0x00081daa) popup_mobtv_noti_window_t1

0xdb87,	// (0x00081db8) popup_mobtv_noti_window_t2

0x0001,

0xfc79,	// (0x00083eaa) popup_mobtv_noti_window_t

0xc159,	// (0x0008038a) bg_popup_mobtv_noti_window_pane_g1

0xa978,	// (0x0007eba9) sc_clock_pane

0xa978,	// (0x0007eba9) main_fs_bigclock_pane

0x8fc0,	// (0x0007d1f1) blid2_tripm_pane_t4_ParamLimits

0x8fc0,	// (0x0007d1f1) blid2_tripm_pane_t4

0x9827,	// (0x0007da58) sc_clock_pane_g1_ParamLimits

0x9827,	// (0x0007da58) sc_clock_pane_g1

0x9839,	// (0x0007da6a) sc_clock_pane_t1_ParamLimits

0x9839,	// (0x0007da6a) sc_clock_pane_t1

0x985b,	// (0x0007da8c) sc_clock_pane_t2_ParamLimits

0x985b,	// (0x0007da8c) sc_clock_pane_t2

0x9873,	// (0x0007daa4) sc_clock_pane_t3_ParamLimits

0x9873,	// (0x0007daa4) sc_clock_pane_t3

0x0004,

0xfc7e,	// (0x00083eaf) sc_clock_pane_t_ParamLimits

0xfc7e,	// (0x00083eaf) sc_clock_pane_t

0xa128,	// (0x0007e359) main_fs_bigclock_indicator_pane_ParamLimits

0xa128,	// (0x0007e359) main_fs_bigclock_indicator_pane

0xc395,	// (0x000805c6) main_fs_bigclock_pane_g1_ParamLimits

0xc395,	// (0x000805c6) main_fs_bigclock_pane_g1

0xa134,	// (0x0007e365) main_fs_bigclock_pane_t1_ParamLimits

0xa134,	// (0x0007e365) main_fs_bigclock_pane_t1

0xa146,	// (0x0007e377) main_fs_bigclock_pane_t2_ParamLimits

0xa146,	// (0x0007e377) main_fs_bigclock_pane_t2

0xa15a,	// (0x0007e38b) main_fs_bigclock_pane_t3_ParamLimits

0xa15a,	// (0x0007e38b) main_fs_bigclock_pane_t3

0x0002,

0xfe82,	// (0x000840b3) main_fs_bigclock_pane_t_ParamLimits

0xfe82,	// (0x000840b3) main_fs_bigclock_pane_t

0xe7ba,	// (0x000829eb) main_fs_bigclock_indicator_pane_g1

0xd861,	// (0x00081a92) ncim_query_content_pane_g2_ParamLimits

0xd861,	// (0x00081a92) ncim_query_content_pane_g2

0x0001,

0xfc0b,	// (0x00083e3c) ncim_query_content_pane_g_ParamLimits

0xfc0b,	// (0x00083e3c) ncim_query_content_pane_g

0x988c,	// (0x0007dabd) sc_clock_pane_t4_ParamLimits

0x988c,	// (0x0007dabd) sc_clock_pane_t4

0x17e5,	// (0x00075a16) main_radioblah_pane

0xcb34,	// (0x00080d65) cell_call4_button_pane_t1_copy1_ParamLimits

0xcb34,	// (0x00080d65) cell_call4_button_pane_t1_copy1

0x94e3,	// (0x0007d714) main_ncimui_pane_t1_ParamLimits

0x94e3,	// (0x0007d714) main_ncimui_pane_t1

0x94fd,	// (0x0007d72e) main_ncimui_pane_t2_ParamLimits

0x94fd,	// (0x0007d72e) main_ncimui_pane_t2

0x0002,

0xfc04,	// (0x00083e35) main_ncimui_pane_t_ParamLimits

0xfc04,	// (0x00083e35) main_ncimui_pane_t

0xdccd,	// (0x00081efe) main_radioblah_anim_pane_ParamLimits

0xdccd,	// (0x00081efe) main_radioblah_anim_pane

0xdcde,	// (0x00081f0f) main_radioblah_info_pane_ParamLimits

0xdcde,	// (0x00081f0f) main_radioblah_info_pane

0xdcf2,	// (0x00081f23) main_radioblah_pane_t1_ParamLimits

0xdcf2,	// (0x00081f23) main_radioblah_pane_t1

0xdd0e,	// (0x00081f3f) main_radioblah_pane_t2_ParamLimits

0xdd0e,	// (0x00081f3f) main_radioblah_pane_t2

0x0003,

0xfc9f,	// (0x00083ed0) main_radioblah_pane_t_ParamLimits

0xfc9f,	// (0x00083ed0) main_radioblah_pane_t

0x993a,	// (0x0007db6b) main_radioblah_rocker_ctrl_pane_ParamLimits

0x993a,	// (0x0007db6b) main_radioblah_rocker_ctrl_pane

0xdd56,	// (0x00081f87) main_radioblah_info_pane_t1_ParamLimits

0xdd56,	// (0x00081f87) main_radioblah_info_pane_t1

0x9992,	// (0x0007dbc3) main_radioblah_info_pane_t2_ParamLimits

0x9992,	// (0x0007dbc3) main_radioblah_info_pane_t2

0x0003,

0xfca8,	// (0x00083ed9) main_radioblah_info_pane_t_ParamLimits

0xfca8,	// (0x00083ed9) main_radioblah_info_pane_t

0xc159,	// (0x0008038a) main_radioblah_rocker_ctrl_pane_g1

0x9a42,	// (0x0007dc73) main_radioblah_rocker_ctrl_pane_g2

0x9a4a,	// (0x0007dc7b) main_radioblah_rocker_ctrl_pane_g3

0x9a52,	// (0x0007dc83) main_radioblah_rocker_ctrl_pane_g4

0x9a5a,	// (0x0007dc8b) main_radioblah_rocker_ctrl_pane_g5

0x9a62,	// (0x0007dc93) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcb1,	// (0x00083ee2) main_radioblah_rocker_ctrl_pane_g

0x926f,	// (0x0007d4a0) main_cset_text2_pane_t1_copy1_ParamLimits

0xef32,	// (0x00083163) cam4_image_uncrop_qvga_pane

0xef8b,	// (0x000831bc) vid4_image_uncrop_qcif_pane

0xf0a5,	// (0x000832d6) cam6_image_uncrop_qvga_pane_ParamLimits

0xf0a5,	// (0x000832d6) cam6_image_uncrop_qvga_pane

0xd4bb,	// (0x000816ec) vid6_image_uncrop_qcif_pane_ParamLimits

0xd4bb,	// (0x000816ec) vid6_image_uncrop_qcif_pane

0xa978,	// (0x0007eba9) bg_popup_preview_window_pane_cp03

0xd813,	// (0x00081a44) list_cset_text2_pane

0xd81b,	// (0x00081a4c) main_cset6_text2_pane_g1

0xd823,	// (0x00081a54) main_cset6_text2_pane_t1

0x9a6a,	// (0x0007dc9b) list_cset_text2_pane_t1_ParamLimits

0x9a6a,	// (0x0007dc9b) list_cset_text2_pane_t1

0x17e5,	// (0x00075a16) main_radioblah_pane_ParamLimits

0x97c0,	// (0x0007d9f1) main_mobtv_info_pane_t3_ParamLimits

0x97c0,	// (0x0007d9f1) main_mobtv_info_pane_t3

0x9928,	// (0x0007db59) main_radioblah_pane_g1

0x9962,	// (0x0007db93) main_radioblah_info_pane_g1

0x99e7,	// (0x0007dc18) main_radioblah_info_pane_t3_ParamLimits

0x99e7,	// (0x0007dc18) main_radioblah_info_pane_t3

0x3cf8,	// (0x00077f29) highlight_cell_cale_month_pane_ParamLimits

0x3cf8,	// (0x00077f29) highlight_cell_cale_month_pane

0xa978,	// (0x0007eba9) main_phob_fisheye_pane

0xc4d9,	// (0x0008070a) scroll_pane_cp0031_ParamLimits

0xc4d9,	// (0x0008070a) scroll_pane_cp0031

0xd5c9,	// (0x000817fa) wait_bar_pane_cp08_ParamLimits

0x92f4,	// (0x0007d525) cset_list_set_pane_copy1_ParamLimits

0xdd90,	// (0x00081fc1) highlight_cell_cale_month_pane_g1

0x9a83,	// (0x0007dcb4) highlight_cell_cale_month_pane_t1

0xd1f1,	// (0x00081422) list_gen_pane_cp01

0xcd69,	// (0x00080f9a) scroll_pane_01

0x9a91,	// (0x0007dcc2) list_single_double_fisheye_pane

0x0f86,	// (0x000751b7) list_double_fisheye_pane_g1_ParamLimits

0x0f86,	// (0x000751b7) list_double_fisheye_pane_g1

0x0f92,	// (0x000751c3) list_double_fisheye_pane_g2_ParamLimits

0x0f92,	// (0x000751c3) list_double_fisheye_pane_g2

0x9a9a,	// (0x0007dccb) list_double_fisheye_pane_g3_ParamLimits

0x9a9a,	// (0x0007dccb) list_double_fisheye_pane_g3

0x0004,

0xfcbe,	// (0x00083eef) list_double_fisheye_pane_g_ParamLimits

0xfcbe,	// (0x00083eef) list_double_fisheye_pane_g

0x0fc3,	// (0x000751f4) list_double_fisheye_pane_t1_ParamLimits

0x0fc3,	// (0x000751f4) list_double_fisheye_pane_t1

0x0fde,	// (0x0007520f) list_double_fisheye_pane_t2_ParamLimits

0x0fde,	// (0x0007520f) list_double_fisheye_pane_t2

0x0001,

0xfcc9,	// (0x00083efa) list_double_fisheye_pane_t_ParamLimits

0xfcc9,	// (0x00083efa) list_double_fisheye_pane_t

0xa978,	// (0x0007eba9) main_call5_pane

0x98b7,	// (0x0007dae8) sc_swipe_pane_ParamLimits

0x98b7,	// (0x0007dae8) sc_swipe_pane

0x9ab9,	// (0x0007dcea) call5_image_pane_ParamLimits

0x9ab9,	// (0x0007dcea) call5_image_pane

0x9ad6,	// (0x0007dd07) call5_swipe_1_pane_ParamLimits

0x9ad6,	// (0x0007dd07) call5_swipe_1_pane

0x9ae9,	// (0x0007dd1a) call5_swipe_2_pane_ParamLimits

0x9ae9,	// (0x0007dd1a) call5_swipe_2_pane

0x9b14,	// (0x0007dd45) popup_call5_audio_first_window_ParamLimits

0x9b14,	// (0x0007dd45) popup_call5_audio_first_window

0xc3c5,	// (0x000805f6) call5_swipe_1_pane_g1_ParamLimits

0xc3c5,	// (0x000805f6) call5_swipe_1_pane_g1

0xdd98,	// (0x00081fc9) call5_swipe_1_pane_g2_ParamLimits

0xdd98,	// (0x00081fc9) call5_swipe_1_pane_g2

0x0001,

0xfcce,	// (0x00083eff) call5_swipe_1_pane_g_ParamLimits

0xfcce,	// (0x00083eff) call5_swipe_1_pane_g

0xdda4,	// (0x00081fd5) call5_swipe_1_pane_t1_ParamLimits

0xdda4,	// (0x00081fd5) call5_swipe_1_pane_t1

0xc3c5,	// (0x000805f6) call5_swipe_2_pane_g1_ParamLimits

0xc3c5,	// (0x000805f6) call5_swipe_2_pane_g1

0xddb9,	// (0x00081fea) call5_swipe_2_pane_g2_ParamLimits

0xddb9,	// (0x00081fea) call5_swipe_2_pane_g2

0x0001,

0xfcd3,	// (0x00083f04) call5_swipe_2_pane_g_ParamLimits

0xfcd3,	// (0x00083f04) call5_swipe_2_pane_g

0xddc5,	// (0x00081ff6) call5_swipe_2_pane_t1_ParamLimits

0xddc5,	// (0x00081ff6) call5_swipe_2_pane_t1

0xddda,	// (0x0008200b) sc_swipe_pane_g1_ParamLimits

0xddda,	// (0x0008200b) sc_swipe_pane_g1

0xdde7,	// (0x00082018) sc_swipe_pane_g2_ParamLimits

0xdde7,	// (0x00082018) sc_swipe_pane_g2

0x0001,

0xfcd8,	// (0x00083f09) sc_swipe_pane_g_ParamLimits

0xfcd8,	// (0x00083f09) sc_swipe_pane_g

0xddf3,	// (0x00082024) sc_swipe_pane_t1_ParamLimits

0xddf3,	// (0x00082024) sc_swipe_pane_t1

0xa978,	// (0x0007eba9) main_cmail_launcher_pane

0x9b25,	// (0x0007dd56) aid_size_cell_cmail_l_ParamLimits

0x9b25,	// (0x0007dd56) aid_size_cell_cmail_l

0x9b3f,	// (0x0007dd70) grid_cmail_l_pane_ParamLimits

0x9b3f,	// (0x0007dd70) grid_cmail_l_pane

0x9b5a,	// (0x0007dd8b) cell_cmail_l_pane_ParamLimits

0x9b5a,	// (0x0007dd8b) cell_cmail_l_pane

0x9b80,	// (0x0007ddb1) cell_cmail_l_pane_g1_ParamLimits

0x9b80,	// (0x0007ddb1) cell_cmail_l_pane_g1

0x9b8c,	// (0x0007ddbd) cell_cmail_l_pane_t1_ParamLimits

0x9b8c,	// (0x0007ddbd) cell_cmail_l_pane_t1

0xde08,	// (0x00082039) cell_cmail_l_pane_t2_ParamLimits

0xde08,	// (0x00082039) cell_cmail_l_pane_t2

0x0001,

0xfcdd,	// (0x00083f0e) cell_cmail_l_pane_t_ParamLimits

0xfcdd,	// (0x00083f0e) cell_cmail_l_pane_t

0x17e5,	// (0x00075a16) grid_highlight_pane_cp018_ParamLimits

0x17e5,	// (0x00075a16) grid_highlight_pane_cp018

0x16a9,	// (0x000758da) main2_pane_ParamLimits

0x16a9,	// (0x000758da) main2_pane

0x24bc,	// (0x000766ed) popup_sp_fs_action_menu_bg_pane_g1

0x24c4,	// (0x000766f5) popup_sp_fs_action_menu_bg_pane_g2

0x24cc,	// (0x000766fd) popup_sp_fs_action_menu_bg_pane_g3

0x24d4,	// (0x00076705) popup_sp_fs_action_menu_bg_pane_g4

0x24dc,	// (0x0007670d) popup_sp_fs_action_menu_bg_pane_g5

0x24e4,	// (0x00076715) popup_sp_fs_action_menu_bg_pane_g6

0x24ec,	// (0x0007671d) popup_sp_fs_action_menu_bg_pane_g7

0x24f4,	// (0x00076725) popup_sp_fs_action_menu_bg_pane_g8

0x24fc,	// (0x0007672d) popup_sp_fs_action_menu_bg_pane_g9

0x2504,	// (0x00076735) popup_sp_fs_action_menu_bg_pane_g10

0x2504,	// (0x00076735) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1a7,	// (0x000833d8) popup_sp_fs_action_menu_bg_pane_g

0xaae8,	// (0x0007ed19) list_medium_line_x2_t3_g3_g1_ParamLimits

0xaae8,	// (0x0007ed19) list_medium_line_x2_t3_g3_g1

0xaaf4,	// (0x0007ed25) list_medium_line_x2_t3_g3_g2_ParamLimits

0xaaf4,	// (0x0007ed25) list_medium_line_x2_t3_g3_g2

0xab00,	// (0x0007ed31) list_medium_line_x2_t3_g3_g3_ParamLimits

0xab00,	// (0x0007ed31) list_medium_line_x2_t3_g3_g3

0x0002,

0xf257,	// (0x00083488) list_medium_line_x2_t3_g3_g_ParamLimits

0xf257,	// (0x00083488) list_medium_line_x2_t3_g3_g

0xab0c,	// (0x0007ed3d) list_medium_line_x2_t3_g3_t1_ParamLimits

0xab0c,	// (0x0007ed3d) list_medium_line_x2_t3_g3_t1

0x0b65,	// (0x00074d96) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0b65,	// (0x00074d96) list_medium_line_x2_t3_g3_t2

0xab21,	// (0x0007ed52) list_medium_line_x2_t3_g3_t3_ParamLimits

0xab21,	// (0x0007ed52) list_medium_line_x2_t3_g3_t3

0x0002,

0xf25e,	// (0x0008348f) list_medium_line_x2_t3_g3_t_ParamLimits

0xf25e,	// (0x0008348f) list_medium_line_x2_t3_g3_t

0xaae8,	// (0x0007ed19) list_medium_line_x2_t3_g2_g1_ParamLimits

0xaae8,	// (0x0007ed19) list_medium_line_x2_t3_g2_g1

0xab00,	// (0x0007ed31) list_medium_line_x2_t3_g2_g2_ParamLimits

0xab00,	// (0x0007ed31) list_medium_line_x2_t3_g2_g2

0x0001,

0xf265,	// (0x00083496) list_medium_line_x2_t3_g2_g_ParamLimits

0xf265,	// (0x00083496) list_medium_line_x2_t3_g2_g

0xab36,	// (0x0007ed67) list_medium_line_x2_t3_g2_t1_ParamLimits

0xab36,	// (0x0007ed67) list_medium_line_x2_t3_g2_t1

0xab4c,	// (0x0007ed7d) list_medium_line_x2_t3_g2_t2_ParamLimits

0xab4c,	// (0x0007ed7d) list_medium_line_x2_t3_g2_t2

0xab5e,	// (0x0007ed8f) list_medium_line_x2_t3_g2_t3_ParamLimits

0xab5e,	// (0x0007ed8f) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26a,	// (0x0008349b) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26a,	// (0x0008349b) list_medium_line_x2_t3_g2_t

0xaae8,	// (0x0007ed19) list_medium_line_x2_t4_g4_g1_ParamLimits

0xaae8,	// (0x0007ed19) list_medium_line_x2_t4_g4_g1

0xab7b,	// (0x0007edac) list_medium_line_x2_t4_g4_g2_ParamLimits

0xab7b,	// (0x0007edac) list_medium_line_x2_t4_g4_g2

0xaaf4,	// (0x0007ed25) list_medium_line_x2_t4_g4_g3_ParamLimits

0xaaf4,	// (0x0007ed25) list_medium_line_x2_t4_g4_g3

0xab87,	// (0x0007edb8) list_medium_line_x2_t4_g4_g4_ParamLimits

0xab87,	// (0x0007edb8) list_medium_line_x2_t4_g4_g4

0x0003,

0xf271,	// (0x000834a2) list_medium_line_x2_t4_g4_g_ParamLimits

0xf271,	// (0x000834a2) list_medium_line_x2_t4_g4_g

0x0b79,	// (0x00074daa) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0b79,	// (0x00074daa) list_medium_line_x2_t4_g4_t1

0x0b93,	// (0x00074dc4) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0b93,	// (0x00074dc4) list_medium_line_x2_t4_g4_t2

0x0ba9,	// (0x00074dda) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0ba9,	// (0x00074dda) list_medium_line_x2_t4_g4_t3

0xab93,	// (0x0007edc4) list_medium_line_x2_t4_g4_t4_ParamLimits

0xab93,	// (0x0007edc4) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27a,	// (0x000834ab) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27a,	// (0x000834ab) list_medium_line_x2_t4_g4_t

0xaae8,	// (0x0007ed19) list_medium_line_x2_t2_g4_g1_ParamLimits

0xaae8,	// (0x0007ed19) list_medium_line_x2_t2_g4_g1

0xab7b,	// (0x0007edac) list_medium_line_x2_t2_g4_g2_ParamLimits

0xab7b,	// (0x0007edac) list_medium_line_x2_t2_g4_g2

0xaaf4,	// (0x0007ed25) list_medium_line_x2_t2_g4_g3_ParamLimits

0xaaf4,	// (0x0007ed25) list_medium_line_x2_t2_g4_g3

0xab00,	// (0x0007ed31) list_medium_line_x2_t2_g4_g4_ParamLimits

0xab00,	// (0x0007ed31) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e1,	// (0x00083512) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e1,	// (0x00083512) list_medium_line_x2_t2_g4_g

0xaba5,	// (0x0007edd6) list_medium_line_x2_t2_g4_t1_ParamLimits

0xaba5,	// (0x0007edd6) list_medium_line_x2_t2_g4_t1

0xab21,	// (0x0007ed52) list_medium_line_x2_t2_g4_t2_ParamLimits

0xab21,	// (0x0007ed52) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ea,	// (0x0008351b) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ea,	// (0x0008351b) list_medium_line_x2_t2_g4_t

0xaae8,	// (0x0007ed19) list_medium_line_x2_t2_g3_g1_ParamLimits

0xaae8,	// (0x0007ed19) list_medium_line_x2_t2_g3_g1

0xaaf4,	// (0x0007ed25) list_medium_line_x2_t2_g3_g2_ParamLimits

0xaaf4,	// (0x0007ed25) list_medium_line_x2_t2_g3_g2

0xab00,	// (0x0007ed31) list_medium_line_x2_t2_g3_g3_ParamLimits

0xab00,	// (0x0007ed31) list_medium_line_x2_t2_g3_g3

0x0002,

0xf257,	// (0x00083488) list_medium_line_x2_t2_g3_g_ParamLimits

0xf257,	// (0x00083488) list_medium_line_x2_t2_g3_g

0xabba,	// (0x0007edeb) list_medium_line_x2_t2_g3_t1_ParamLimits

0xabba,	// (0x0007edeb) list_medium_line_x2_t2_g3_t1

0xab21,	// (0x0007ed52) list_medium_line_x2_t2_g3_t2_ParamLimits

0xab21,	// (0x0007ed52) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2ef,	// (0x00083520) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2ef,	// (0x00083520) list_medium_line_x2_t2_g3_t

0x405f,	// (0x00078290) main_sp_fs_list_pane_ParamLimits

0x405f,	// (0x00078290) main_sp_fs_list_pane

0x406b,	// (0x0007829c) sp_fs_scroll_pane_ParamLimits

0x406b,	// (0x0007829c) sp_fs_scroll_pane

0x0bbe,	// (0x00074def) list_medium_line_x2_t3_t1

0x0bce,	// (0x00074dff) list_medium_line_x2_t3_t2

0xabfd,	// (0x0007ee2e) list_medium_line_x2_t3_t3

0x0002,

0xf33a,	// (0x0008356b) list_medium_line_x2_t3_t

0x0bdc,	// (0x00074e0d) list_medium_line_x3_t4_t1

0x0bec,	// (0x00074e1d) list_medium_line_x3_t4_t2

0xac0b,	// (0x0007ee3c) list_medium_line_x3_t4_t3

0xabfd,	// (0x0007ee2e) list_medium_line_x3_t4_t4

0x0003,

0xf341,	// (0x00083572) list_medium_line_x3_t4_t

0x0bfa,	// (0x00074e2b) list_medium_line_x4_t5_t1

0x0c0a,	// (0x00074e3b) list_medium_line_x4_t5_t2

0xac0b,	// (0x0007ee3c) list_medium_line_x4_t5_t3

0xac19,	// (0x0007ee4a) list_medium_line_x4_t5_t4

0xabfd,	// (0x0007ee2e) list_medium_line_x4_t5_t5

0x0004,

0xf34a,	// (0x0008357b) list_medium_line_x4_t5_t

0xaae8,	// (0x0007ed19) list_medium_line_t4_g4_g1_ParamLimits

0xaae8,	// (0x0007ed19) list_medium_line_t4_g4_g1

0xab87,	// (0x0007edb8) list_medium_line_t4_g4_g2_ParamLimits

0xab87,	// (0x0007edb8) list_medium_line_t4_g4_g2

0xac27,	// (0x0007ee58) list_medium_line_t4_g4_g3_ParamLimits

0xac27,	// (0x0007ee58) list_medium_line_t4_g4_g3

0xab00,	// (0x0007ed31) list_medium_line_t4_g4_g4_ParamLimits

0xab00,	// (0x0007ed31) list_medium_line_t4_g4_g4

0x0003,

0xf355,	// (0x00083586) list_medium_line_t4_g4_g_ParamLimits

0xf355,	// (0x00083586) list_medium_line_t4_g4_g

0xac33,	// (0x0007ee64) list_medium_line_t4_g4_t1_ParamLimits

0xac33,	// (0x0007ee64) list_medium_line_t4_g4_t1

0xac48,	// (0x0007ee79) list_medium_line_t4_g4_t2_ParamLimits

0xac48,	// (0x0007ee79) list_medium_line_t4_g4_t2

0xac5d,	// (0x0007ee8e) list_medium_line_t4_g4_t3_ParamLimits

0xac5d,	// (0x0007ee8e) list_medium_line_t4_g4_t3

0xab21,	// (0x0007ed52) list_medium_line_t4_g4_t4_ParamLimits

0xab21,	// (0x0007ed52) list_medium_line_t4_g4_t4

0x0003,

0xf35e,	// (0x0008358f) list_medium_line_t4_g4_t_ParamLimits

0xf35e,	// (0x0008358f) list_medium_line_t4_g4_t

0x43ac,	// (0x000785dd) chi_dic_find_pane_g1

0x5a0e,	// (0x00079c3f) main_tport_pane

0xceb2,	// (0x000810e3) list_medium_line_plain_t1

0xcec8,	// (0x000810f9) list_medium_line_t2_g2_g1_ParamLimits

0xcec8,	// (0x000810f9) list_medium_line_t2_g2_g1

0xced4,	// (0x00081105) list_medium_line_t2_g2_g2_ParamLimits

0xced4,	// (0x00081105) list_medium_line_t2_g2_g2

0x0001,

0xfa1a,	// (0x00083c4b) list_medium_line_t2_g2_g_ParamLimits

0xfa1a,	// (0x00083c4b) list_medium_line_t2_g2_g

0x0dbf,	// (0x00074ff0) list_medium_line_t2_g2_t1_ParamLimits

0x0dbf,	// (0x00074ff0) list_medium_line_t2_g2_t1

0x0dd9,	// (0x0007500a) list_medium_line_t2_g2_t2_ParamLimits

0x0dd9,	// (0x0007500a) list_medium_line_t2_g2_t2

0x0001,

0xfa1f,	// (0x00083c50) list_medium_line_t2_g2_t_ParamLimits

0xfa1f,	// (0x00083c50) list_medium_line_t2_g2_t

0xd1fa,	// (0x0008142b) aid_sp_fs_list_icon_a_sm

0xf09d,	// (0x000832ce) aid_sp_fs_list_icon_d

0xd202,	// (0x00081433) aid_sp_fs_text_primary

0xd20b,	// (0x0008143c) aid_sp_fs_text_secondary

0xd214,	// (0x00081445) list_medium_line

0xd214,	// (0x00081445) list_medium_line_g2

0xd214,	// (0x00081445) list_medium_line_g3

0xd214,	// (0x00081445) list_medium_line_plain

0xd214,	// (0x00081445) list_medium_line_plain_t2

0xd214,	// (0x00081445) list_medium_line_plain_t3

0xd214,	// (0x00081445) list_medium_line_right_icon

0xd214,	// (0x00081445) list_medium_line_right_iconx2

0xd214,	// (0x00081445) list_medium_line_t2

0xd214,	// (0x00081445) list_medium_line_t2_g2

0xd214,	// (0x00081445) list_medium_line_t2_g3

0xd214,	// (0x00081445) list_medium_line_t2_right_icon

0xd214,	// (0x00081445) list_medium_line_t2_right_iconx2

0xd214,	// (0x00081445) list_medium_line_t3

0xd214,	// (0x00081445) list_medium_line_t3_g2

0xd214,	// (0x00081445) list_medium_line_t3_g3

0xd214,	// (0x00081445) list_medium_line_t3_right_iconx2

0xd21d,	// (0x0008144e) list_medium_line_t4_g4

0xd226,	// (0x00081457) list_medium_line_x2

0xd226,	// (0x00081457) list_medium_line_x2_t2_g2

0xd226,	// (0x00081457) list_medium_line_x2_t2_g3

0xd226,	// (0x00081457) list_medium_line_x2_t2_g4

0xd226,	// (0x00081457) list_medium_line_x2_t3

0xd226,	// (0x00081457) list_medium_line_x2_t3_g2

0xd226,	// (0x00081457) list_medium_line_x2_t3_g3

0xd226,	// (0x00081457) list_medium_line_x2_t3_g4

0xd226,	// (0x00081457) list_medium_line_x2_t4_g2

0xd226,	// (0x00081457) list_medium_line_x2_t4_g4

0xd22f,	// (0x00081460) list_medium_line_x3

0xd22f,	// (0x00081460) list_medium_line_x3_t4

0xd22f,	// (0x00081460) list_medium_line_x3_t4_g4

0xd21d,	// (0x0008144e) list_medium_line_x4_t4

0xd21d,	// (0x0008144e) list_medium_line_x4_t4_g7

0xd21d,	// (0x0008144e) list_medium_line_x4_t5

0xd238,	// (0x00081469) list_single_fs_dyc_pane_ParamLimits

0xd238,	// (0x00081469) list_single_fs_dyc_pane

0xaae8,	// (0x0007ed19) list_medium_line_x4_t4_g7_g1_ParamLimits

0xaae8,	// (0x0007ed19) list_medium_line_x4_t4_g7_g1

0xd742,	// (0x00081973) list_medium_line_x4_t4_g7_g2_ParamLimits

0xd742,	// (0x00081973) list_medium_line_x4_t4_g7_g2

0xd74e,	// (0x0008197f) list_medium_line_x4_t4_g7_g3_ParamLimits

0xd74e,	// (0x0008197f) list_medium_line_x4_t4_g7_g3

0xd75d,	// (0x0008198e) list_medium_line_x4_t4_g7_g4_ParamLimits

0xd75d,	// (0x0008198e) list_medium_line_x4_t4_g7_g4

0xd769,	// (0x0008199a) list_medium_line_x4_t4_g7_g5_ParamLimits

0xd769,	// (0x0008199a) list_medium_line_x4_t4_g7_g5

0xd778,	// (0x000819a9) list_medium_line_x4_t4_g7_g6_ParamLimits

0xd778,	// (0x000819a9) list_medium_line_x4_t4_g7_g6

0xd787,	// (0x000819b8) list_medium_line_x4_t4_g7_g7_ParamLimits

0xd787,	// (0x000819b8) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbea,	// (0x00083e1b) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbea,	// (0x00083e1b) list_medium_line_x4_t4_g7_g

0xd793,	// (0x000819c4) list_medium_line_x4_t4_g7_t1_ParamLimits

0xd793,	// (0x000819c4) list_medium_line_x4_t4_g7_t1

0xd7a8,	// (0x000819d9) list_medium_line_x4_t4_g7_t2_ParamLimits

0xd7a8,	// (0x000819d9) list_medium_line_x4_t4_g7_t2

0xd7bd,	// (0x000819ee) list_medium_line_x4_t4_g7_t3_ParamLimits

0xd7bd,	// (0x000819ee) list_medium_line_x4_t4_g7_t3

0xd7d2,	// (0x00081a03) list_medium_line_x4_t4_g7_t4_ParamLimits

0xd7d2,	// (0x00081a03) list_medium_line_x4_t4_g7_t4

0xd7e4,	// (0x00081a15) list_medium_line_x4_t4_g7_t5_ParamLimits

0xd7e4,	// (0x00081a15) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbf9,	// (0x00083e2a) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbf9,	// (0x00083e2a) list_medium_line_x4_t4_g7_t

0xd7f6,	// (0x00081a27) list_single_dyc_row_pane_ParamLimits

0xd7f6,	// (0x00081a27) list_single_dyc_row_pane

0x9aa6,	// (0x0007dcd7) call5_gesture_pane_ParamLimits

0x9aa6,	// (0x0007dcd7) call5_gesture_pane

0x9afc,	// (0x0007dd2d) call5_windows_pane_ParamLimits

0x9afc,	// (0x0007dd2d) call5_windows_pane

0x9ba2,	// (0x0007ddd3) call5_swipe_1_pane_cp_ParamLimits

0x9ba2,	// (0x0007ddd3) call5_swipe_1_pane_cp

0x9bae,	// (0x0007dddf) call5_swipe_2_pane_cp_ParamLimits

0x9bae,	// (0x0007dddf) call5_swipe_2_pane_cp

0x4820,	// (0x00078a51) call5_image_pane_cp

0x9bba,	// (0x0007ddeb) popup_call5_audio_first_window_cp_ParamLimits

0x9bba,	// (0x0007ddeb) popup_call5_audio_first_window_cp

0xddda,	// (0x0008200b) call5_swipe_1_pane_g1_cp_ParamLimits

0xddda,	// (0x0008200b) call5_swipe_1_pane_g1_cp

0xde1a,	// (0x0008204b) call5_swipe_1_pane_g2_cp

0xddf3,	// (0x00082024) call5_swipe_1_pane_t1_cp_ParamLimits

0xddf3,	// (0x00082024) call5_swipe_1_pane_t1_cp

0xddda,	// (0x0008200b) call5_swipe_2_pane_g1_cp_ParamLimits

0xddda,	// (0x0008200b) call5_swipe_2_pane_g1_cp

0xde22,	// (0x00082053) call5_swipe_2_pane_g2_cp

0xde2a,	// (0x0008205b) call5_swipe_2_pane_t1_cp_ParamLimits

0xde2a,	// (0x0008205b) call5_swipe_2_pane_t1_cp

0x17e5,	// (0x00075a16) main_sp_fs_email_pane

0xde3f,	// (0x00082070) main_sp_fs_listscroll_pane_te

0xde48,	// (0x00082079) popup_sp_fs_action_menu_pane_ParamLimits

0xde48,	// (0x00082079) popup_sp_fs_action_menu_pane

0xc159,	// (0x0008038a) bg_sp_fs_ctrlbar_pane_g1

0xde8c,	// (0x000820bd) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xde95,	// (0x000820c6) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xde9e,	// (0x000820cf) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc159,	// (0x0008038a) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce2,	// (0x00083f13) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xbf3e,	// (0x0008016f) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xbf3e,	// (0x0008016f) bg_sp_fs_ctrlbar_ddmenu_pane

0xdea7,	// (0x000820d8) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xdea7,	// (0x000820d8) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xdeb3,	// (0x000820e4) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xdeb3,	// (0x000820e4) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfceb,	// (0x00083f1c) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfceb,	// (0x00083f1c) main_sp_fs_ctrlbar_ddmenu_pane_g

0xdebf,	// (0x000820f0) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xdebf,	// (0x000820f0) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xded9,	// (0x0008210a) list_medium_line_t2_right_icon_g1

0x1000,	// (0x00075231) list_medium_line_t2_right_icon_t1

0x1010,	// (0x00075241) list_medium_line_t2_right_icon_t2

0x0001,

0xfcf0,	// (0x00083f21) list_medium_line_t2_right_icon_t

0xbcf0,	// (0x0007ff21) bg_sp_fs_ctrlbar_pane_ParamLimits

0xbcf0,	// (0x0007ff21) bg_sp_fs_ctrlbar_pane

0x9c13,	// (0x0007de44) main_sp_fs_ctrlbar_button_pane_cp01

0x9c1d,	// (0x0007de4e) main_sp_fs_ctrlbar_ddmenu_pane

0xdf19,	// (0x0008214a) main_sp_fs_ctrlbar_pane_g1

0xdf25,	// (0x00082156) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcf5,	// (0x00083f26) main_sp_fs_ctrlbar_pane_g

0xdf31,	// (0x00082162) main_sp_fs_ctrlbar_pane_t1

0x1022,	// (0x00075253) main_sp_fs_ctrlbar_pane

0x1046,	// (0x00075277) main_sp_fs_listscroll_pane_te_cp01

0x1066,	// (0x00075297) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x1066,	// (0x00075297) popup_sp_fs_action_menu_pane_cp01

0x17e5,	// (0x00075a16) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x17e5,	// (0x00075a16) bg_sp_fs_highlight_list_pane_cp01

0xdf56,	// (0x00082187) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xdf56,	// (0x00082187) sp_fs_action_menu_list_gene_pane_g1

0xdf65,	// (0x00082196) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xdf65,	// (0x00082196) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcff,	// (0x00083f30) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcff,	// (0x00083f30) sp_fs_action_menu_list_gene_pane_g

0xdf72,	// (0x000821a3) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xdf72,	// (0x000821a3) sp_fs_action_menu_list_gene_pane_t1

0xdf8a,	// (0x000821bb) sp_fs_action_menu_list_gene_pane_ParamLimits

0xdf8a,	// (0x000821bb) sp_fs_action_menu_list_gene_pane

0xdfab,	// (0x000821dc) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xdfab,	// (0x000821dc) popup_sp_fs_action_menu_bg_pane

0xdfb9,	// (0x000821ea) sp_fs_action_menu_list_pane_ParamLimits

0xdfb9,	// (0x000821ea) sp_fs_action_menu_list_pane

0xdfdb,	// (0x0008220c) sp_fs_scroll_pane_cp01_ParamLimits

0xdfdb,	// (0x0008220c) sp_fs_scroll_pane_cp01

0x1082,	// (0x000752b3) list_medium_line_plain_t2_t1

0x1092,	// (0x000752c3) list_medium_line_plain_t2_t2

0x0001,

0xfd04,	// (0x00083f35) list_medium_line_plain_t2_t

0x10a2,	// (0x000752d3) list_medium_line_plain_t3_t1

0x10b2,	// (0x000752e3) list_medium_line_plain_t3_t2

0x10c0,	// (0x000752f1) list_medium_line_plain_t3_t3

0x0002,

0xfd09,	// (0x00083f3a) list_medium_line_plain_t3_t

0xaae8,	// (0x0007ed19) list_medium_line_x2_t2_g2_g1_ParamLimits

0xaae8,	// (0x0007ed19) list_medium_line_x2_t2_g2_g1

0xab00,	// (0x0007ed31) list_medium_line_x2_t2_g2_g2_ParamLimits

0xab00,	// (0x0007ed31) list_medium_line_x2_t2_g2_g2

0x0001,

0xf265,	// (0x00083496) list_medium_line_x2_t2_g2_g_ParamLimits

0xf265,	// (0x00083496) list_medium_line_x2_t2_g2_g

0xac33,	// (0x0007ee64) list_medium_line_x2_t2_g2_t1_ParamLimits

0xac33,	// (0x0007ee64) list_medium_line_x2_t2_g2_t1

0xab21,	// (0x0007ed52) list_medium_line_x2_t2_g2_t2_ParamLimits

0xab21,	// (0x0007ed52) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd10,	// (0x00083f41) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd10,	// (0x00083f41) list_medium_line_x2_t2_g2_t

0xaae8,	// (0x0007ed19) list_medium_line_x2_t4_g2_g1_ParamLimits

0xaae8,	// (0x0007ed19) list_medium_line_x2_t4_g2_g1

0xe001,	// (0x00082232) list_medium_line_x2_t4_g2_g2_ParamLimits

0xe001,	// (0x00082232) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd15,	// (0x00083f46) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd15,	// (0x00083f46) list_medium_line_x2_t4_g2_g

0x10ce,	// (0x000752ff) list_medium_line_x2_t4_g2_t1_ParamLimits

0x10ce,	// (0x000752ff) list_medium_line_x2_t4_g2_t1

0x10e8,	// (0x00075319) list_medium_line_x2_t4_g2_t2_ParamLimits

0x10e8,	// (0x00075319) list_medium_line_x2_t4_g2_t2

0x10fd,	// (0x0007532e) list_medium_line_x2_t4_g2_t3_ParamLimits

0x10fd,	// (0x0007532e) list_medium_line_x2_t4_g2_t3

0xab21,	// (0x0007ed52) list_medium_line_x2_t4_g2_t4_ParamLimits

0xab21,	// (0x0007ed52) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd1a,	// (0x00083f4b) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd1a,	// (0x00083f4b) list_medium_line_x2_t4_g2_t

0xe013,	// (0x00082244) list_medium_line_t3_right_iconx2_g1

0xded9,	// (0x0008210a) list_medium_line_t3_right_iconx2_g2

0x1112,	// (0x00075343) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd23,	// (0x00083f54) list_medium_line_t3_right_iconx2_g

0x111c,	// (0x0007534d) list_medium_line_t3_right_iconx2_t1

0x112c,	// (0x0007535d) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd2a,	// (0x00083f5b) list_medium_line_t3_right_iconx2_t

0xaae8,	// (0x0007ed19) list_medium_line_x3_t4_g4_g1_ParamLimits

0xaae8,	// (0x0007ed19) list_medium_line_x3_t4_g4_g1

0xaaf4,	// (0x0007ed25) list_medium_line_x3_t4_g4_g2_ParamLimits

0xaaf4,	// (0x0007ed25) list_medium_line_x3_t4_g4_g2

0xab87,	// (0x0007edb8) list_medium_line_x3_t4_g4_g3_ParamLimits

0xab87,	// (0x0007edb8) list_medium_line_x3_t4_g4_g3

0xe01b,	// (0x0008224c) list_medium_line_x3_t4_g4_g4_ParamLimits

0xe01b,	// (0x0008224c) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd2f,	// (0x00083f60) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd2f,	// (0x00083f60) list_medium_line_x3_t4_g4_g

0x113a,	// (0x0007536b) list_medium_line_x3_t4_g4_t1_ParamLimits

0x113a,	// (0x0007536b) list_medium_line_x3_t4_g4_t1

0x1151,	// (0x00075382) list_medium_line_x3_t4_g4_t2_ParamLimits

0x1151,	// (0x00075382) list_medium_line_x3_t4_g4_t2

0xac48,	// (0x0007ee79) list_medium_line_x3_t4_g4_t3_ParamLimits

0xac48,	// (0x0007ee79) list_medium_line_x3_t4_g4_t3

0xe027,	// (0x00082258) list_medium_line_x3_t4_g4_t4_ParamLimits

0xe027,	// (0x00082258) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd38,	// (0x00083f69) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd38,	// (0x00083f69) list_medium_line_x3_t4_g4_t

0x116c,	// (0x0007539d) list_single_dyc_row_text_pane_t1_ParamLimits

0x116c,	// (0x0007539d) list_single_dyc_row_text_pane_t1

0x11b5,	// (0x000753e6) list_single_dyc_row_text_pane_t2_ParamLimits

0x11b5,	// (0x000753e6) list_single_dyc_row_text_pane_t2

0xe044,	// (0x00082275) list_single_dyc_row_text_pane_t3_ParamLimits

0xe044,	// (0x00082275) list_single_dyc_row_text_pane_t3

0x0002,

0xfd41,	// (0x00083f72) list_single_dyc_row_text_pane_t_ParamLimits

0xfd41,	// (0x00083f72) list_single_dyc_row_text_pane_t

0xe056,	// (0x00082287) list_single_dyc_row_pane_g1_ParamLimits

0xe056,	// (0x00082287) list_single_dyc_row_pane_g1

0xe062,	// (0x00082293) list_single_dyc_row_pane_g2_ParamLimits

0xe062,	// (0x00082293) list_single_dyc_row_pane_g2

0xe06e,	// (0x0008229f) list_single_dyc_row_pane_g3_ParamLimits

0xe06e,	// (0x0008229f) list_single_dyc_row_pane_g3

0xe07a,	// (0x000822ab) list_single_dyc_row_pane_g4_ParamLimits

0xe07a,	// (0x000822ab) list_single_dyc_row_pane_g4

0x0003,

0xfd48,	// (0x00083f79) list_single_dyc_row_pane_g_ParamLimits

0xfd48,	// (0x00083f79) list_single_dyc_row_pane_g

0xe086,	// (0x000822b7) list_single_dyc_row_text_pane_ParamLimits

0xe086,	// (0x000822b7) list_single_dyc_row_text_pane

0xa978,	// (0x0007eba9) bg_sp_fs_scroll_pane

0xe0a5,	// (0x000822d6) thumb_sp_fs_scroll_pane

0xcec8,	// (0x000810f9) list_medium_line_g1_ParamLimits

0xcec8,	// (0x000810f9) list_medium_line_g1

0xe0ae,	// (0x000822df) list_medium_line_t1_ParamLimits

0xe0ae,	// (0x000822df) list_medium_line_t1

0xaae8,	// (0x0007ed19) list_medium_line_x2_g1_ParamLimits

0xaae8,	// (0x0007ed19) list_medium_line_x2_g1

0xaaf4,	// (0x0007ed25) list_medium_line_x2_g2_ParamLimits

0xaaf4,	// (0x0007ed25) list_medium_line_x2_g2

0x0001,

0xfd51,	// (0x00083f82) list_medium_line_x2_g_ParamLimits

0xfd51,	// (0x00083f82) list_medium_line_x2_g

0xe0c3,	// (0x000822f4) list_medium_line_x2_t1_ParamLimits

0xe0c3,	// (0x000822f4) list_medium_line_x2_t1

0xaae8,	// (0x0007ed19) list_medium_line_x3_g1_ParamLimits

0xaae8,	// (0x0007ed19) list_medium_line_x3_g1

0xaaf4,	// (0x0007ed25) list_medium_line_x3_g2_ParamLimits

0xaaf4,	// (0x0007ed25) list_medium_line_x3_g2

0x0001,

0xfd51,	// (0x00083f82) list_medium_line_x3_g_ParamLimits

0xfd51,	// (0x00083f82) list_medium_line_x3_g

0xe0c3,	// (0x000822f4) list_medium_line_x3_t1_ParamLimits

0xe0c3,	// (0x000822f4) list_medium_line_x3_t1

0xe0d9,	// (0x0008230a) thumb_sp_fs_scroll_pane_g1

0xe0e2,	// (0x00082313) thumb_sp_fs_scroll_pane_g2

0xe0eb,	// (0x0008231c) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd56,	// (0x00083f87) thumb_sp_fs_scroll_pane_g

0xe0d9,	// (0x0008230a) bg_sp_fs_scroll_pane_g1

0xe0e2,	// (0x00082313) bg_sp_fs_scroll_pane_g2

0xe0eb,	// (0x0008231c) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd56,	// (0x00083f87) bg_sp_fs_scroll_pane_g

0xaae8,	// (0x0007ed19) list_medium_line_x2_t3_g4_g1_ParamLimits

0xaae8,	// (0x0007ed19) list_medium_line_x2_t3_g4_g1

0xab7b,	// (0x0007edac) list_medium_line_x2_t3_g4_g2_ParamLimits

0xab7b,	// (0x0007edac) list_medium_line_x2_t3_g4_g2

0xaaf4,	// (0x0007ed25) list_medium_line_x2_t3_g4_g3_ParamLimits

0xaaf4,	// (0x0007ed25) list_medium_line_x2_t3_g4_g3

0xab00,	// (0x0007ed31) list_medium_line_x2_t3_g4_g4_ParamLimits

0xab00,	// (0x0007ed31) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e1,	// (0x00083512) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e1,	// (0x00083512) list_medium_line_x2_t3_g4_g

0x120f,	// (0x00075440) list_medium_line_x2_t3_g4_t1_ParamLimits

0x120f,	// (0x00075440) list_medium_line_x2_t3_g4_t1

0x1229,	// (0x0007545a) list_medium_line_x2_t3_g4_t2_ParamLimits

0x1229,	// (0x0007545a) list_medium_line_x2_t3_g4_t2

0xab21,	// (0x0007ed52) list_medium_line_x2_t3_g4_t3_ParamLimits

0xab21,	// (0x0007ed52) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd5d,	// (0x00083f8e) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd5d,	// (0x00083f8e) list_medium_line_x2_t3_g4_t

0xcec8,	// (0x000810f9) list_medium_line_g2_g1_ParamLimits

0xcec8,	// (0x000810f9) list_medium_line_g2_g1

0xced4,	// (0x00081105) list_medium_line_g2_g2_ParamLimits

0xced4,	// (0x00081105) list_medium_line_g2_g2

0x0001,

0xfa1a,	// (0x00083c4b) list_medium_line_g2_g_ParamLimits

0xfa1a,	// (0x00083c4b) list_medium_line_g2_g

0xe0f4,	// (0x00082325) list_medium_line_g2_t1_ParamLimits

0xe0f4,	// (0x00082325) list_medium_line_g2_t1

0xcec8,	// (0x000810f9) list_medium_line_t3_g2_g1_ParamLimits

0xcec8,	// (0x000810f9) list_medium_line_t3_g2_g1

0xced4,	// (0x00081105) list_medium_line_t3_g2_g2_ParamLimits

0xced4,	// (0x00081105) list_medium_line_t3_g2_g2

0x0001,

0xfa1a,	// (0x00083c4b) list_medium_line_t3_g2_g_ParamLimits

0xfa1a,	// (0x00083c4b) list_medium_line_t3_g2_g

0x1243,	// (0x00075474) list_medium_line_t3_g2_t1_ParamLimits

0x1243,	// (0x00075474) list_medium_line_t3_g2_t1

0x125a,	// (0x0007548b) list_medium_line_t3_g2_t2_ParamLimits

0x125a,	// (0x0007548b) list_medium_line_t3_g2_t2

0x126f,	// (0x000754a0) list_medium_line_t3_g2_t3_ParamLimits

0x126f,	// (0x000754a0) list_medium_line_t3_g2_t3

0x0002,

0xfd64,	// (0x00083f95) list_medium_line_t3_g2_t_ParamLimits

0xfd64,	// (0x00083f95) list_medium_line_t3_g2_t

0xded9,	// (0x0008210a) list_medium_line_right_icon_g1

0xe109,	// (0x0008233a) list_medium_line_right_icon_t1

0xcec8,	// (0x000810f9) list_medium_line_t2_g1_ParamLimits

0xcec8,	// (0x000810f9) list_medium_line_t2_g1

0x1288,	// (0x000754b9) list_medium_line_t2_t1_ParamLimits

0x1288,	// (0x000754b9) list_medium_line_t2_t1

0x12a2,	// (0x000754d3) list_medium_line_t2_t2_ParamLimits

0x12a2,	// (0x000754d3) list_medium_line_t2_t2

0x0001,

0xfd6b,	// (0x00083f9c) list_medium_line_t2_t_ParamLimits

0xfd6b,	// (0x00083f9c) list_medium_line_t2_t

0xcec8,	// (0x000810f9) list_medium_line_t3_g1_ParamLimits

0xcec8,	// (0x000810f9) list_medium_line_t3_g1

0x12bb,	// (0x000754ec) list_medium_line_t3_t1_ParamLimits

0x12bb,	// (0x000754ec) list_medium_line_t3_t1

0x12d5,	// (0x00075506) list_medium_line_t3_t2_ParamLimits

0x12d5,	// (0x00075506) list_medium_line_t3_t2

0x12ea,	// (0x0007551b) list_medium_line_t3_t3_ParamLimits

0x12ea,	// (0x0007551b) list_medium_line_t3_t3

0x0002,

0xfd70,	// (0x00083fa1) list_medium_line_t3_t_ParamLimits

0xfd70,	// (0x00083fa1) list_medium_line_t3_t

0xcec8,	// (0x000810f9) list_medium_line_g3_g1_ParamLimits

0xcec8,	// (0x000810f9) list_medium_line_g3_g1

0xe117,	// (0x00082348) list_medium_line_g3_g2_ParamLimits

0xe117,	// (0x00082348) list_medium_line_g3_g2

0xced4,	// (0x00081105) list_medium_line_g3_g3_ParamLimits

0xced4,	// (0x00081105) list_medium_line_g3_g3

0x0002,

0xfd77,	// (0x00083fa8) list_medium_line_g3_g_ParamLimits

0xfd77,	// (0x00083fa8) list_medium_line_g3_g

0xe123,	// (0x00082354) list_medium_line_g3_t1_ParamLimits

0xe123,	// (0x00082354) list_medium_line_g3_t1

0xcec8,	// (0x000810f9) list_medium_line_t2_g3_g1_ParamLimits

0xcec8,	// (0x000810f9) list_medium_line_t2_g3_g1

0xe117,	// (0x00082348) list_medium_line_t2_g3_g2_ParamLimits

0xe117,	// (0x00082348) list_medium_line_t2_g3_g2

0xced4,	// (0x00081105) list_medium_line_t2_g3_g3_ParamLimits

0xced4,	// (0x00081105) list_medium_line_t2_g3_g3

0x0002,

0xfd77,	// (0x00083fa8) list_medium_line_t2_g3_g_ParamLimits

0xfd77,	// (0x00083fa8) list_medium_line_t2_g3_g

0x12ff,	// (0x00075530) list_medium_line_t2_g3_t1_ParamLimits

0x12ff,	// (0x00075530) list_medium_line_t2_g3_t1

0x1319,	// (0x0007554a) list_medium_line_t2_g3_t2_ParamLimits

0x1319,	// (0x0007554a) list_medium_line_t2_g3_t2

0x0001,

0xfd7e,	// (0x00083faf) list_medium_line_t2_g3_t_ParamLimits

0xfd7e,	// (0x00083faf) list_medium_line_t2_g3_t

0xcec8,	// (0x000810f9) list_medium_line_t3_g3_g1_ParamLimits

0xcec8,	// (0x000810f9) list_medium_line_t3_g3_g1

0xe117,	// (0x00082348) list_medium_line_t3_g3_g2_ParamLimits

0xe117,	// (0x00082348) list_medium_line_t3_g3_g2

0xced4,	// (0x00081105) list_medium_line_t3_g3_g3_ParamLimits

0xced4,	// (0x00081105) list_medium_line_t3_g3_g3

0x0002,

0xfd77,	// (0x00083fa8) list_medium_line_t3_g3_g_ParamLimits

0xfd77,	// (0x00083fa8) list_medium_line_t3_g3_g

0x1334,	// (0x00075565) list_medium_line_t3_g3_t1_ParamLimits

0x1334,	// (0x00075565) list_medium_line_t3_g3_t1

0x1348,	// (0x00075579) list_medium_line_t3_g3_t2_ParamLimits

0x1348,	// (0x00075579) list_medium_line_t3_g3_t2

0x135a,	// (0x0007558b) list_medium_line_t3_g3_t3_ParamLimits

0x135a,	// (0x0007558b) list_medium_line_t3_g3_t3

0x0002,

0xfd83,	// (0x00083fb4) list_medium_line_t3_g3_t_ParamLimits

0xfd83,	// (0x00083fb4) list_medium_line_t3_g3_t

0xe013,	// (0x00082244) list_medium_line_right_iconx2_g1

0xded9,	// (0x0008210a) list_medium_line_right_iconx2_g2

0x0001,

0xfd8a,	// (0x00083fbb) list_medium_line_right_iconx2_g

0xe138,	// (0x00082369) list_medium_line_right_iconx2_t1

0xe013,	// (0x00082244) list_medium_line_t2_right_iconx2_g1

0xded9,	// (0x0008210a) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd8a,	// (0x00083fbb) list_medium_line_t2_right_iconx2_g

0x136e,	// (0x0007559f) list_medium_line_t2_right_iconx2_t1

0x137e,	// (0x000755af) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd8f,	// (0x00083fc0) list_medium_line_t2_right_iconx2_t

0xe146,	// (0x00082377) list_medium_line_x4_t4_t1

0x1390,	// (0x000755c1) list_medium_line_x4_t4_t2

0x13a0,	// (0x000755d1) list_medium_line_x4_t4_t3

0x13b0,	// (0x000755e1) list_medium_line_x4_t4_t4

0x0003,

0xfd94,	// (0x00083fc5) list_medium_line_x4_t4_t

0x9c6a,	// (0x0007de9b) tport_appsw_pane_ParamLimits

0x9c6a,	// (0x0007de9b) tport_appsw_pane

0x9c7b,	// (0x0007deac) tport_contact_pane_ParamLimits

0x9c7b,	// (0x0007deac) tport_contact_pane

0x9c94,	// (0x0007dec5) tport_listscroll_pane_ParamLimits

0x9c94,	// (0x0007dec5) tport_listscroll_pane

0x9caf,	// (0x0007dee0) cell_tport_appsw_pane_ParamLimits

0x9caf,	// (0x0007dee0) cell_tport_appsw_pane

0xcbe3,	// (0x00080e14) tport_appsw_pane_g1_ParamLimits

0xcbe3,	// (0x00080e14) tport_appsw_pane_g1

0xe154,	// (0x00082385) tport_contact_pane_g1

0xd8e7,	// (0x00081b18) tport_contact_pane_t1

0xe15d,	// (0x0008238e) tport_contact_pane_t2

0x0001,

0xfd9d,	// (0x00083fce) tport_contact_pane_t

0xe16b,	// (0x0008239c) list_tport_pane

0xe174,	// (0x000823a5) scroll_pane_cp_030

0xe185,	// (0x000823b6) cell_tport_appsw_pane_g1

0xe195,	// (0x000823c6) cell_tport_appsw_pane_t1

0xa978,	// (0x0007eba9) grid_highlight_pane_cp019

0x9cef,	// (0x0007df20) list_tport_double_graphic_pane_ParamLimits

0x9cef,	// (0x0007df20) list_tport_double_graphic_pane

0x17e5,	// (0x00075a16) list_highlight_pane_cp023_ParamLimits

0x17e5,	// (0x00075a16) list_highlight_pane_cp023

0x9cfc,	// (0x0007df2d) list_tport_double_graphic_pane_g1_ParamLimits

0x9cfc,	// (0x0007df2d) list_tport_double_graphic_pane_g1

0x9d09,	// (0x0007df3a) list_tport_double_graphic_pane_t1_ParamLimits

0x9d09,	// (0x0007df3a) list_tport_double_graphic_pane_t1

0x9d1e,	// (0x0007df4f) list_tport_double_graphic_pane_t2_ParamLimits

0x9d1e,	// (0x0007df4f) list_tport_double_graphic_pane_t2

0x0001,

0xfda9,	// (0x00083fda) list_tport_double_graphic_pane_t_ParamLimits

0xfda9,	// (0x00083fda) list_tport_double_graphic_pane_t

0xa978,	// (0x0007eba9) main_cale_note_pane

0x811d,	// (0x0007c34e) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x811d,	// (0x0007c34e) cell_vitu2_function_top_wide_pane_cp01

0x97d4,	// (0x0007da05) wait_bar_pane_cp05_ParamLimits

0xa978,	// (0x0007eba9) listscroll_cmail_pane

0xe1ab,	// (0x000823dc) list_cmail_pane

0xce81,	// (0x000810b2) list_cmail_body_pane

0x9d3a,	// (0x0007df6b) list_single_cmail_header_caption_pane

0x9d50,	// (0x0007df81) list_single_cmail_header_detail_pane_ParamLimits

0x9d50,	// (0x0007df81) list_single_cmail_header_detail_pane

0x9d79,	// (0x0007dfaa) list_single_cmail_header_caption_pane_t1

0x13c0,	// (0x000755f1) list_single_cmail_header_detail_pane_g1_ParamLimits

0x13c0,	// (0x000755f1) list_single_cmail_header_detail_pane_g1

0xf0b3,	// (0x000832e4) list_single_cmail_header_detail_pane_g2_ParamLimits

0xf0b3,	// (0x000832e4) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdae,	// (0x00083fdf) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdae,	// (0x00083fdf) list_single_cmail_header_detail_pane_g

0xe1d9,	// (0x0008240a) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe1d9,	// (0x0008240a) list_single_cmail_header_detail_pane_t1

0xe213,	// (0x00082444) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe213,	// (0x00082444) list_single_cmail_header_editor_pane_bg

0xda88,	// (0x00081cb9) list_cmail_body_pane_g1

0xe225,	// (0x00082456) list_cmail_body_pane_t1

0xcc4f,	// (0x00080e80) list_single_cmail_header_editor_pane_bg_g1

0x33e5,	// (0x00077616) list_single_cmail_header_editor_pane_bg_g1_copy1

0xcc5f,	// (0x00080e90) list_single_cmail_header_editor_pane_bg_g1_copy2

0xcc57,	// (0x00080e88) list_single_cmail_header_editor_pane_bg_g1_copy3

0xcec0,	// (0x000810f1) list_single_cmail_header_editor_pane_bg_g1_copy4

0xcc7f,	// (0x00080eb0) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xcc6f,	// (0x00080ea0) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xcc77,	// (0x00080ea8) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x33c5,	// (0x000775f6) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x9d89,	// (0x0007dfba) calenote_gesture_pane_ParamLimits

0x9d89,	// (0x0007dfba) calenote_gesture_pane

0x9da9,	// (0x0007dfda) calenote_window_pane_ParamLimits

0x9da9,	// (0x0007dfda) calenote_window_pane

0xe233,	// (0x00082464) popup_note_window_cp01

0x9dc5,	// (0x0007dff6) calenote_swipe_1_pane_ParamLimits

0x9dc5,	// (0x0007dff6) calenote_swipe_1_pane

0x9bae,	// (0x0007dddf) calenote_swipe_2_pane_ParamLimits

0x9bae,	// (0x0007dddf) calenote_swipe_2_pane

0xddda,	// (0x0008200b) calenote_swipe_1_pane_g1_ParamLimits

0xddda,	// (0x0008200b) calenote_swipe_1_pane_g1

0xdde7,	// (0x00082018) calenote_swipe_1_pane_g2_ParamLimits

0xdde7,	// (0x00082018) calenote_swipe_1_pane_g2

0x0001,

0xfcd8,	// (0x00083f09) calenote_swipe_1_pane_g_ParamLimits

0xfcd8,	// (0x00083f09) calenote_swipe_1_pane_g

0xe245,	// (0x00082476) calenote_swipe_1_pane_t1_ParamLimits

0xe245,	// (0x00082476) calenote_swipe_1_pane_t1

0xddda,	// (0x0008200b) calenote_swipe_2_pane_g1_ParamLimits

0xddda,	// (0x0008200b) calenote_swipe_2_pane_g1

0xe264,	// (0x00082495) calenote_swipe_2_pane_g2_ParamLimits

0xe264,	// (0x00082495) calenote_swipe_2_pane_g2

0x0001,

0xfdba,	// (0x00083feb) calenote_swipe_2_pane_g_ParamLimits

0xfdba,	// (0x00083feb) calenote_swipe_2_pane_g

0xe270,	// (0x000824a1) calenote_swipe_2_pane_t1_ParamLimits

0xe270,	// (0x000824a1) calenote_swipe_2_pane_t1

0xa978,	// (0x0007eba9) main_mup_navstr_pane

0x6dc1,	// (0x0007aff2) main_mup3_pane_t7_ParamLimits

0x6dc1,	// (0x0007aff2) main_mup3_pane_t7

0xed50,	// (0x00082f81) main_mp4_pane_g6_ParamLimits

0xed50,	// (0x00082f81) main_mp4_pane_g6

0xeef4,	// (0x00083125) main_image3_pane_t4_ParamLimits

0xeef4,	// (0x00083125) main_image3_pane_t4

0x9dda,	// (0x0007e00b) popup_navstr_preview_pane_ParamLimits

0x9dda,	// (0x0007e00b) popup_navstr_preview_pane

0x9dee,	// (0x0007e01f) scroll_navstr_pane_ParamLimits

0x9dee,	// (0x0007e01f) scroll_navstr_pane

0xa978,	// (0x0007eba9) bg_popup_preview_window_pane_cp04

0xe297,	// (0x000824c8) popup_navstr_preview_pane_t1

0x9e02,	// (0x0007e033) scroll_navstr_pane_g1_ParamLimits

0x9e02,	// (0x0007e033) scroll_navstr_pane_g1

0x9e16,	// (0x0007e047) scroll_navstr_pane_t1_ParamLimits

0x9e16,	// (0x0007e047) scroll_navstr_pane_t1

0xe23c,	// (0x0008246d) bg_button_pane_cp014

0xe23c,	// (0x0008246d) bg_button_pane_cp030

0x0fa6,	// (0x000751d7) list_double_fisheye_pane_g4_ParamLimits

0x0fa6,	// (0x000751d7) list_double_fisheye_pane_g4

0x0fb2,	// (0x000751e3) list_double_fisheye_pane_g5_ParamLimits

0x0fb2,	// (0x000751e3) list_double_fisheye_pane_g5

0xe1b3,	// (0x000823e4) sp_fs_scroll_pane_cp03

0xdf19,	// (0x0008214a) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xdf25,	// (0x00082156) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcf5,	// (0x00083f26) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xdf31,	// (0x00082162) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x9d30,	// (0x0007df61) sp_fs_scroll_pane_cp02

0x2559,	// (0x0007678a) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x2559,	// (0x0007678a) popup_sp_fs_calendar_preview_list_single_pane

0xa978,	// (0x0007eba9) main_cam6_pano_pane

0x17e5,	// (0x00075a16) main_mup3_pane_ParamLimits

0xa978,	// (0x0007eba9) main_phacti_pane

0x96a7,	// (0x0007d8d8) bg_button_pane_cp11

0x96c1,	// (0x0007d8f2) main_mobtv_info_pane_g2_ParamLimits

0x96c1,	// (0x0007d8f2) main_mobtv_info_pane_g2

0x0001,

0xfc55,	// (0x00083e86) main_mobtv_info_pane_g_ParamLimits

0xfc55,	// (0x00083e86) main_mobtv_info_pane_g

0x989e,	// (0x0007dacf) sc_clock_pane_t5_ParamLimits

0x989e,	// (0x0007dacf) sc_clock_pane_t5

0x9928,	// (0x0007db59) main_radioblah_pane_g1_ParamLimits

0xdd26,	// (0x00081f57) main_radioblah_pane_t3_ParamLimits

0xdd26,	// (0x00081f57) main_radioblah_pane_t3

0xdd3e,	// (0x00081f6f) main_radioblah_pane_t4_ParamLimits

0xdd3e,	// (0x00081f6f) main_radioblah_pane_t4

0x9950,	// (0x0007db81) main_radioblah_text_pane_ParamLimits

0x9950,	// (0x0007db81) main_radioblah_text_pane

0x9962,	// (0x0007db93) main_radioblah_info_pane_g1_ParamLimits

0x99fb,	// (0x0007dc2c) main_radioblah_info_pane_t4_ParamLimits

0x99fb,	// (0x0007dc2c) main_radioblah_info_pane_t4

0x17e5,	// (0x00075a16) main_sp_fs_calendar_pane

0x9e2d,	// (0x0007e05e) main_phacti_pane_g1

0x9e35,	// (0x0007e066) phacti_note_pane_ParamLimits

0x9e35,	// (0x0007e066) phacti_note_pane

0xe2ae,	// (0x000824df) phacti_term_pane_ParamLimits

0xe2ae,	// (0x000824df) phacti_term_pane

0xe2c3,	// (0x000824f4) phacti_note_pane_t1_ParamLimits

0xe2c3,	// (0x000824f4) phacti_note_pane_t1

0xe2da,	// (0x0008250b) phacti_term_pane_g1

0xe2e2,	// (0x00082513) phacti_term_pane_t1_ParamLimits

0xe2e2,	// (0x00082513) phacti_term_pane_t1

0xe30c,	// (0x0008253d) popup_sp_fs_calendar_preview_list_single_pane_g1

0x2d89,	// (0x00076fba) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdc4,	// (0x00083ff5) popup_sp_fs_calendar_preview_list_single_pane_g

0xe314,	// (0x00082545) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe314,	// (0x00082545) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe329,	// (0x0008255a) aid_popup_sp_fs_bg_corner_pane

0xc159,	// (0x0008038a) popup_sp_fs_calendar_preview_bg_pane_g1

0xa978,	// (0x0007eba9) popup_sp_fs_calendar_preview_bg_pane

0xe331,	// (0x00082562) popup_sp_fs_calendar_preview_list_pane

0x17e5,	// (0x00075a16) bg_main_sp_fs_cale_pane_ParamLimits

0x17e5,	// (0x00075a16) bg_main_sp_fs_cale_pane

0xe339,	// (0x0008256a) listscroll_cale_mrui_pane_ParamLimits

0xe339,	// (0x0008256a) listscroll_cale_mrui_pane

0xe34d,	// (0x0008257e) listscroll_sp_fs_schedule_track_pane

0xe356,	// (0x00082587) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe356,	// (0x00082587) main_sp_fs_ctrlbar_pane_cp01

0xe367,	// (0x00082598) main_sp_fs_ribbon_pane

0xe36f,	// (0x000825a0) popup_sp_fs_cale_preview_window

0x9e90,	// (0x0007e0c1) list_single_sp_fs_schedule_track_pane_ParamLimits

0x9e90,	// (0x0007e0c1) list_single_sp_fs_schedule_track_pane

0x17e5,	// (0x00075a16) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x17e5,	// (0x00075a16) bg_sp_fs_highlight_list_pane_cp03

0x9ea2,	// (0x0007e0d3) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x9ea2,	// (0x0007e0d3) list_single_sp_fs_schedule_track_pane_g1

0x9eae,	// (0x0007e0df) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x9eae,	// (0x0007e0df) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdc9,	// (0x00083ffa) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdc9,	// (0x00083ffa) list_single_sp_fs_schedule_track_pane_g

0x9eba,	// (0x0007e0eb) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x9eba,	// (0x0007e0eb) list_single_sp_fs_schedule_track_pane_t1

0x9ed4,	// (0x0007e105) sp_fs_schedule_track_pane_ParamLimits

0x9ed4,	// (0x0007e105) sp_fs_schedule_track_pane

0xe381,	// (0x000825b2) sp_fs_schedule_track_pane_g1

0xe389,	// (0x000825ba) sp_fs_schedule_track_pane_g2

0xe391,	// (0x000825c2) sp_fs_schedule_track_pane_g3

0xe399,	// (0x000825ca) sp_fs_schedule_track_pane_g4

0xe3a1,	// (0x000825d2) sp_fs_schedule_track_pane_g5

0x0004,

0xfdce,	// (0x00083fff) sp_fs_schedule_track_pane_g

0xcc4f,	// (0x00080e80) bg_sp_fs_schedule_viewer_highlight_g1

0x33e5,	// (0x00077616) bg_sp_fs_schedule_viewer_highlight_g2

0xcc57,	// (0x00080e88) bg_sp_fs_schedule_viewer_highlight_g3

0xcc5f,	// (0x00080e90) bg_sp_fs_schedule_viewer_highlight_g4

0xcec0,	// (0x000810f1) bg_sp_fs_schedule_viewer_highlight_g5

0xcc6f,	// (0x00080ea0) bg_sp_fs_schedule_viewer_highlight_g6

0xcc77,	// (0x00080ea8) bg_sp_fs_schedule_viewer_highlight_g7

0xcc7f,	// (0x00080eb0) bg_sp_fs_schedule_viewer_highlight_g8

0x33c5,	// (0x000775f6) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdd9,	// (0x0008400a) bg_sp_fs_schedule_viewer_highlight_g

0xa978,	// (0x0007eba9) bg_main_sp_fs_ribbon_pane

0x9ee5,	// (0x0007e116) main_sp_fs_ribbon_pane_g1

0xe3a9,	// (0x000825da) main_sp_fs_ribbon_pane_t1

0x9eee,	// (0x0007e11f) main_sp_fs_ribbon_pane_t2

0xe3b8,	// (0x000825e9) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdec,	// (0x0008401d) main_sp_fs_ribbon_pane_t

0xe3c7,	// (0x000825f8) main_sp_fs_ribbon_scheduler_pane

0xe3cf,	// (0x00082600) bg_main_sp_fs_ribbon_pane_g1

0xe3d8,	// (0x00082609) bg_main_sp_fs_ribbon_pane_g2

0xe3e1,	// (0x00082612) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdf3,	// (0x00084024) bg_main_sp_fs_ribbon_pane_g

0xe3e9,	// (0x0008261a) main_sp_fs_ribbon_scheduler_pane_g1

0xe3f2,	// (0x00082623) main_sp_fs_ribbon_scheduler_pane_g2

0xe3fb,	// (0x0008262c) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdfa,	// (0x0008402b) main_sp_fs_ribbon_scheduler_pane_g

0xe404,	// (0x00082635) list_cale_mrui_pane

0x9efd,	// (0x0007e12e) sp_fs_scroll_pane_cp07_ParamLimits

0x9efd,	// (0x0007e12e) sp_fs_scroll_pane_cp07

0x9f11,	// (0x0007e142) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x9f11,	// (0x0007e142) bg_sp_fs_schedule_viewer_highlight

0xe40d,	// (0x0008263e) list_single_sp_fs_schedule_track_pane_cp01

0xe415,	// (0x00082646) list_sp_fs_schedule_track_pane

0xe41d,	// (0x0008264e) sp_fs_scroll_pane_cp06_ParamLimits

0xe41d,	// (0x0008264e) sp_fs_scroll_pane_cp06

0xc159,	// (0x0008038a) bgmain_sp_fs_calendar_pane_g1

0x13fe,	// (0x0007562f) list_single_cale_mrui_pane_ParamLimits

0x13fe,	// (0x0007562f) list_single_cale_mrui_pane

0xe42f,	// (0x00082660) list_single_cale_mrui_row_pane_ParamLimits

0xe42f,	// (0x00082660) list_single_cale_mrui_row_pane

0xe43c,	// (0x0008266d) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe43c,	// (0x0008266d) list_single_cale_mrui_row_pane_g1

0xe481,	// (0x000826b2) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe481,	// (0x000826b2) list_single_cale_mrui_row_pane_t1

0x141e,	// (0x0007564f) list_single_cale_mrui_row_pane_t2_ParamLimits

0x141e,	// (0x0007564f) list_single_cale_mrui_row_pane_t2

0xe493,	// (0x000826c4) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe493,	// (0x000826c4) list_single_cale_mrui_row_pane_t3

0xe4c2,	// (0x000826f3) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe4c2,	// (0x000826f3) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe08,	// (0x00084039) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe08,	// (0x00084039) list_single_cale_mrui_row_pane_t

0x1486,	// (0x000756b7) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x1486,	// (0x000756b7) list_single_cmail_header_editor_pane_bg_cp01

0x14ac,	// (0x000756dd) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x14ac,	// (0x000756dd) list_single_cmail_header_editor_pane_bg_cp02

0x9f21,	// (0x0007e152) main_radioblah_text_pane_t1_ParamLimits

0x9f21,	// (0x0007e152) main_radioblah_text_pane_t1

0xe4f1,	// (0x00082722) cam6_indi_pane_cp01

0xe4f9,	// (0x0008272a) cam6_mode_pane_cp01

0xe501,	// (0x00082732) cam6_pano_pane

0xe50a,	// (0x0008273b) cam6_zoom_pane_cp01

0xe512,	// (0x00082743) cam6_pano_image_pane

0xe51d,	// (0x0008274e) cam6_pano_pane_g1

0xda88,	// (0x00081cb9) cam6_pano_pane_g2

0xe526,	// (0x00082757) cam6_pano_pane_g3

0xe52f,	// (0x00082760) cam6_pano_pane_g4

0xc727,	// (0x00080958) cam6_pano_pane_g5

0xe538,	// (0x00082769) cam6_pano_pane_g6

0xe542,	// (0x00082773) cam6_pano_pane_g7

0xe54a,	// (0x0008277b) cam6_pano_pane_g8

0xe553,	// (0x00082784) cam6_pano_pane_g9

0x0008,

0xfe11,	// (0x00084042) cam6_pano_pane_g

0xa978,	// (0x0007eba9) main_browser_tag_pane

0xe28f,	// (0x000824c0) grid_navstr_albumart_pane

0xe55e,	// (0x0008278f) cell_navstr_albumart_pane_ParamLimits

0xe55e,	// (0x0008278f) cell_navstr_albumart_pane

0xe581,	// (0x000827b2) cell_navstr_albumart_pane_g1

0xbb0d,	// (0x0007fd3e) cell_navstr_albumart_pane_g2

0xbb1d,	// (0x0007fd4e) cell_navstr_albumart_pane_g3

0xbb15,	// (0x0007fd46) cell_navstr_albumart_pane_g4

0x0003,

0xfe24,	// (0x00084055) cell_navstr_albumart_pane_g

0x9f3b,	// (0x0007e16c) bt_list_pane_ParamLimits

0x9f3b,	// (0x0007e16c) bt_list_pane

0x9f4f,	// (0x0007e180) bt_list_pane_t1

0x9f5e,	// (0x0007e18f) bt_list_pane_t2

0x0001,

0xfe2d,	// (0x0008405e) bt_list_pane_t

0xa978,	// (0x0007eba9) main_cale_prevew_pane

0x9f6d,	// (0x0007e19e) popup_cale_preview_window_ParamLimits

0x9f6d,	// (0x0007e19e) popup_cale_preview_window

0x17e5,	// (0x00075a16) bg_popup_preview_window_pane_cp05_ParamLimits

0x17e5,	// (0x00075a16) bg_popup_preview_window_pane_cp05

0xe589,	// (0x000827ba) list_cale_preview_pane_ParamLimits

0xe589,	// (0x000827ba) list_cale_preview_pane

0x9f88,	// (0x0007e1b9) list_double_cale_preview_pane_ParamLimits

0x9f88,	// (0x0007e1b9) list_double_cale_preview_pane

0x9f9a,	// (0x0007e1cb) list_single_cale_preview_pane_ParamLimits

0x9f9a,	// (0x0007e1cb) list_single_cale_preview_pane

0x9fb0,	// (0x0007e1e1) list_single_cale_preview_pane_g1

0x9fb8,	// (0x0007e1e9) list_single_cale_preview_pane_t1_ParamLimits

0x9fb8,	// (0x0007e1e9) list_single_cale_preview_pane_t1

0x9fcd,	// (0x0007e1fe) list_double_cale_preview_pane_g1

0x9fd5,	// (0x0007e206) list_double_cale_preview_pane_t1_ParamLimits

0x9fd5,	// (0x0007e206) list_double_cale_preview_pane_t1

0x9fea,	// (0x0007e21b) list_double_cale_preview_pane_t2_ParamLimits

0x9fea,	// (0x0007e21b) list_double_cale_preview_pane_t2

0x0001,

0xfe32,	// (0x00084063) list_double_cale_preview_pane_t_ParamLimits

0xfe32,	// (0x00084063) list_double_cale_preview_pane_t

0xa978,	// (0x0007eba9) main_ezdial_pane

0x17e5,	// (0x00075a16) main_sp_fs_email_pane_ParamLimits

0x9bc8,	// (0x0007ddf9) cmail_ddmenu_btn01_pane_ParamLimits

0x9bc8,	// (0x0007ddf9) cmail_ddmenu_btn01_pane

0x9bdb,	// (0x0007de0c) cmail_ddmenu_btn02_pane_ParamLimits

0x9bdb,	// (0x0007de0c) cmail_ddmenu_btn02_pane

0x9bfe,	// (0x0007de2f) cmail_ddmenu_btn03_pane_ParamLimits

0x9bfe,	// (0x0007de2f) cmail_ddmenu_btn03_pane

0x1022,	// (0x00075253) main_sp_fs_ctrlbar_pane_ParamLimits

0x1046,	// (0x00075277) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xce81,	// (0x000810b2) list_cmail_body_pane_ParamLimits

0xe1c3,	// (0x000823f4) bg_button_pane_cp12

0xe1cc,	// (0x000823fd) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe1cc,	// (0x000823fd) list_single_cmail_header_detail_pane_g3

0x13d8,	// (0x00075609) list_single_cmail_header_detail_pane_t2_ParamLimits

0x13d8,	// (0x00075609) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb5,	// (0x00083fe6) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb5,	// (0x00083fe6) list_single_cmail_header_detail_pane_t

0xe2f7,	// (0x00082528) phacti_term_pane_t2_ParamLimits

0xe2f7,	// (0x00082528) phacti_term_pane_t2

0x0001,

0xfdbf,	// (0x00083ff0) phacti_term_pane_t_ParamLimits

0xfdbf,	// (0x00083ff0) phacti_term_pane_t

0xe595,	// (0x000827c6) aid_size_list_single_double

0xa002,	// (0x0007e233) popup_ezdial_listscroll_window

0xa01e,	// (0x0007e24f) popup_number_entry_window_cp01

0x4820,	// (0x00078a51) bg_popup_call_pane_cp09

0xe5a1,	// (0x000827d2) ezdial_list_pane

0xe5a9,	// (0x000827da) scroll_pane_cp23

0xbcf0,	// (0x0007ff21) bg_button_pane_cp028_ParamLimits

0xbcf0,	// (0x0007ff21) bg_button_pane_cp028

0xa02c,	// (0x0007e25d) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xa02c,	// (0x0007e25d) cmail_ddmenu_btn01_pane_g1

0xa03b,	// (0x0007e26c) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xa03b,	// (0x0007e26c) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe37,	// (0x00084068) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe37,	// (0x00084068) cmail_ddmenu_btn01_pane_g

0xe5b1,	// (0x000827e2) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe5b1,	// (0x000827e2) cmail_ddmenu_btn01_pane_t1

0xbcf0,	// (0x0007ff21) bg_button_pane_cp029_ParamLimits

0xbcf0,	// (0x0007ff21) bg_button_pane_cp029

0xa04b,	// (0x0007e27c) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xa04b,	// (0x0007e27c) cmail_ddmenu_btn02_pane_g1

0xa066,	// (0x0007e297) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xa066,	// (0x0007e297) cmail_ddmenu_btn02_pane_t1

0x17e5,	// (0x00075a16) bg_button_pane_cp031_ParamLimits

0x17e5,	// (0x00075a16) bg_button_pane_cp031

0xa04b,	// (0x0007e27c) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xa04b,	// (0x0007e27c) cmail_ddmenu_btn03_pane_g1

0xa066,	// (0x0007e297) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xa066,	// (0x0007e297) cmail_ddmenu_btn03_pane_t1

0x7935,	// (0x0007bb66) cell_dialer2_keypad_pane_t1_ParamLimits

0x794f,	// (0x0007bb80) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x794f,	// (0x0007bb80) cell_dialer2_keypad_pane_t1_copy1

0x9529,	// (0x0007d75a) ncimui_group_button_pane

0x17e5,	// (0x00075a16) main_sp_fs_calendar_pane_ParamLimits

0x9d3a,	// (0x0007df6b) list_single_cmail_header_caption_pane_ParamLimits

0xf0d5,	// (0x00083306) aid_recal_txt_sm_pane

0xa978,	// (0x0007eba9) mian_recal_day_pane

0xe36f,	// (0x000825a0) popup_sp_fs_cale_preview_window_ParamLimits

0xa978,	// (0x0007eba9) list_recal_day_pane

0xe5e0,	// (0x00082811) list_single_recal_day_pane_ParamLimits

0xe5e0,	// (0x00082811) list_single_recal_day_pane

0xe5f2,	// (0x00082823) list_single_recal_day_pane_g1_ParamLimits

0xe5f2,	// (0x00082823) list_single_recal_day_pane_g1

0xe5fe,	// (0x0008282f) list_single_recal_day_pane_g2_ParamLimits

0xe5fe,	// (0x0008282f) list_single_recal_day_pane_g2

0xe60e,	// (0x0008283f) list_single_recal_day_pane_g3_ParamLimits

0xe60e,	// (0x0008283f) list_single_recal_day_pane_g3

0xa08d,	// (0x0007e2be) list_single_recal_day_pane_g4_ParamLimits

0xa08d,	// (0x0007e2be) list_single_recal_day_pane_g4

0xe61a,	// (0x0008284b) list_single_recal_day_pane_g5_ParamLimits

0xe61a,	// (0x0008284b) list_single_recal_day_pane_g5

0xe62a,	// (0x0008285b) list_single_recal_day_pane_g6_ParamLimits

0xe62a,	// (0x0008285b) list_single_recal_day_pane_g6

0x0004,

0xfe46,	// (0x00084077) list_single_recal_day_pane_g_ParamLimits

0xfe46,	// (0x00084077) list_single_recal_day_pane_g

0xe641,	// (0x00082872) list_single_recal_day_pane_t1

0xe653,	// (0x00082884) list_single_recal_day_pane_t2

0x0001,

0xfe51,	// (0x00084082) list_single_recal_day_pane_t

0xa0ad,	// (0x0007e2de) ncimui_query_button_pane_ParamLimits

0xa0ad,	// (0x0007e2de) ncimui_query_button_pane

0xa0bd,	// (0x0007e2ee) ncimui_query_button_pane_t1_ParamLimits

0xa0bd,	// (0x0007e2ee) ncimui_query_button_pane_t1

0xe668,	// (0x00082899) ncimui_query_button_pane_t2_ParamLimits

0xe668,	// (0x00082899) ncimui_query_button_pane_t2

0x0001,

0xfe56,	// (0x00084087) ncimui_query_button_pane_t_ParamLimits

0xfe56,	// (0x00084087) ncimui_query_button_pane_t

0xa0d0,	// (0x0007e301) query_button_pane_ParamLimits

0xa0d0,	// (0x0007e301) query_button_pane

0xa978,	// (0x0007eba9) bg_button_pane_cp0028

0xe67b,	// (0x000828ac) query_button_pane_t1

0x5a0e,	// (0x00079c3f) main_tport_pane_ParamLimits

0x9c27,	// (0x0007de58) bg_popup_window_pane_cp01_ParamLimits

0x9c27,	// (0x0007de58) bg_popup_window_pane_cp01

0x9c41,	// (0x0007de72) heading_pane_cp08_ParamLimits

0x9c41,	// (0x0007de72) heading_pane_cp08

0x9c55,	// (0x0007de86) heading_pane_cp07_ParamLimits

0x9c55,	// (0x0007de86) heading_pane_cp07

0xe185,	// (0x000823b6) cell_tport_appsw_pane_g2

0x0002,

0xfda2,	// (0x00083fd3) cell_tport_appsw_pane_g

0x0c30,	// (0x00074e61) input_candi_list_open_g1

0x3e99,	// (0x000780ca) list_cale_time_pane_g6_ParamLimits

0x3e99,	// (0x000780ca) list_cale_time_pane_g6

0x67db,	// (0x0007aa0c) aid_size_touch_calib_1_ParamLimits

0x67db,	// (0x0007aa0c) aid_size_touch_calib_1

0x67e7,	// (0x0007aa18) aid_size_touch_calib_2_ParamLimits

0x67e7,	// (0x0007aa18) aid_size_touch_calib_2

0x67fd,	// (0x0007aa2e) aid_size_touch_calib_3_ParamLimits

0x67fd,	// (0x0007aa2e) aid_size_touch_calib_3

0x681b,	// (0x0007aa4c) aid_size_touch_calib_4_ParamLimits

0x681b,	// (0x0007aa4c) aid_size_touch_calib_4

0x6831,	// (0x0007aa62) main_touch_calib_button_group_pane_ParamLimits

0x6831,	// (0x0007aa62) main_touch_calib_button_group_pane

0x6849,	// (0x0007aa7a) main_touch_calib_pane_g1_ParamLimits

0x6855,	// (0x0007aa86) main_touch_calib_pane_g2_ParamLimits

0x6861,	// (0x0007aa92) main_touch_calib_pane_g3_ParamLimits

0x686d,	// (0x0007aa9e) main_touch_calib_pane_g4_ParamLimits

0xf770,	// (0x000839a1) main_touch_calib_pane_g_ParamLimits

0x6879,	// (0x0007aaaa) main_touch_calib_pane_t1_ParamLimits

0x6893,	// (0x0007aac4) main_touch_calib_pane_t2_ParamLimits

0x68ad,	// (0x0007aade) main_touch_calib_pane_t3_ParamLimits

0x68c1,	// (0x0007aaf2) main_touch_calib_pane_t4_ParamLimits

0x68d5,	// (0x0007ab06) main_touch_calib_pane_t5_ParamLimits

0xf779,	// (0x000839aa) main_touch_calib_pane_t_ParamLimits

0xc4fd,	// (0x0008072e) list_single_fp_cale_pane_g3_ParamLimits

0xc4fd,	// (0x0008072e) list_single_fp_cale_pane_g3

0x17e5,	// (0x00075a16) bg_button_pane_cp012_ParamLimits

0x17e5,	// (0x00075a16) bg_vkb2_func_pane_cp03_ParamLimits

0x88ed,	// (0x0007cb1e) cell_vitu2_function_top_pane_g1_ParamLimits

0x17e5,	// (0x00075a16) bg_vkb2_func_pane_cp04_ParamLimits

0x94c9,	// (0x0007d6fa) main_ncimui_button_group_pane_ParamLimits

0x94c9,	// (0x0007d6fa) main_ncimui_button_group_pane

0x9517,	// (0x0007d748) main_ncimui_pane_t3_ParamLimits

0x9517,	// (0x0007d748) main_ncimui_pane_t3

0xe2a5,	// (0x000824d6) phacti_button_group_pane

0xe595,	// (0x000827c6) aid_size_list_single_double_ParamLimits

0xa002,	// (0x0007e233) popup_ezdial_listscroll_window_ParamLimits

0xa01e,	// (0x0007e24f) popup_number_entry_window_cp01_ParamLimits

0xa0e3,	// (0x0007e314) phacti_button_pane_ParamLimits

0xa0e3,	// (0x0007e314) phacti_button_pane

0xa978,	// (0x0007eba9) bg_button_pane_cp14

0xe689,	// (0x000828ba) phacti_button_pane_t1

0xa0f4,	// (0x0007e325) main_touch_calib_button_pane_ParamLimits

0xa0f4,	// (0x0007e325) main_touch_calib_button_pane

0x2291,	// (0x000764c2) bg_button_pane_cp18_ParamLimits

0x2291,	// (0x000764c2) bg_button_pane_cp18

0xe697,	// (0x000828c8) main_touch_calib_button_pane_t1_ParamLimits

0xe697,	// (0x000828c8) main_touch_calib_button_pane_t1

0xe6ad,	// (0x000828de) main_touch_calib_button_pane_t2_ParamLimits

0xe6ad,	// (0x000828de) main_touch_calib_button_pane_t2

0x0001,

0xfe5b,	// (0x0008408c) main_touch_calib_button_pane_t_ParamLimits

0xfe5b,	// (0x0008408c) main_touch_calib_button_pane_t

0xa978,	// (0x0007eba9) cell_ncimui_button_pane

0xa978,	// (0x0007eba9) bg_button_pane_cp032

0xe6cb,	// (0x000828fc) cell_ncimui_button_pane_t1

0xeed4,	// (0x00083105) image3_infobar_pane_ParamLimits

0xeed4,	// (0x00083105) image3_infobar_pane

0x98ca,	// (0x0007dafb) fs_bigclock_status_pane_ParamLimits

0x98ca,	// (0x0007dafb) fs_bigclock_status_pane

0x98d7,	// (0x0007db08) main_fs_bigclock_clock_pane_ParamLimits

0x98d7,	// (0x0007db08) main_fs_bigclock_clock_pane

0x98eb,	// (0x0007db1c) main_fs_bigclock_indi_pane_ParamLimits

0x98eb,	// (0x0007db1c) main_fs_bigclock_indi_pane

0x9904,	// (0x0007db35) main_fs_bigclock_swipe_pane_ParamLimits

0x9904,	// (0x0007db35) main_fs_bigclock_swipe_pane

0xa978,	// (0x0007eba9) main_fs_clock_dumped_data

0xdb95,	// (0x00081dc6) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xdb95,	// (0x00081dc6) list_single_fs_bigclock_indicator_pane_g1

0xdbbb,	// (0x00081dec) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xdbbb,	// (0x00081dec) list_single_fs_bigclock_indicator_pane_g2

0xdbd5,	// (0x00081e06) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xdbd5,	// (0x00081e06) list_single_fs_bigclock_indicator_pane_g3

0xdbef,	// (0x00081e20) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xdbef,	// (0x00081e20) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc89,	// (0x00083eba) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc89,	// (0x00083eba) list_single_fs_bigclock_indicator_pane_g

0xdc18,	// (0x00081e49) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xdc18,	// (0x00081e49) list_single_fs_bigclock_indicator_pane_t1

0xdc40,	// (0x00081e71) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xdc40,	// (0x00081e71) list_single_fs_bigclock_indicator_pane_t2

0xdc68,	// (0x00081e99) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xdc68,	// (0x00081e99) list_single_fs_bigclock_indicator_pane_t3

0xdc90,	// (0x00081ec1) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xdc90,	// (0x00081ec1) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc94,	// (0x00083ec5) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc94,	// (0x00083ec5) list_single_fs_bigclock_indicator_pane_t

0xe6d9,	// (0x0008290a) image3_infobar_fav_pane_ParamLimits

0xe6d9,	// (0x0008290a) image3_infobar_fav_pane

0xe6e9,	// (0x0008291a) image3_infobar_loc_pane_ParamLimits

0xe6e9,	// (0x0008291a) image3_infobar_loc_pane

0xe6fd,	// (0x0008292e) image3_infobar_time_pane_ParamLimits

0xe6fd,	// (0x0008292e) image3_infobar_time_pane

0xc159,	// (0x0008038a) image3_infobar_time_pane_g1

0xe70d,	// (0x0008293e) image3_infobar_time_pane_t1

0xc159,	// (0x0008038a) image3_infobar_loc_pane_g1

0xe71b,	// (0x0008294c) image3_infobar_loc_pane_g2

0x0001,

0xfe60,	// (0x00084091) image3_infobar_loc_pane_g

0xe723,	// (0x00082954) image3_infobar_loc_pane_t1

0xc159,	// (0x0008038a) image3_infobar_fav_pane_g1

0xe731,	// (0x00082962) image3_infobar_fav_pane_g2

0x0001,

0xfe65,	// (0x00084096) image3_infobar_fav_pane_g

0xe739,	// (0x0008296a) fs_bigclock_status_battery_pane

0xe742,	// (0x00082973) fs_bigclock_status_signal_pane

0xe74b,	// (0x0008297c) fs_bigclock_status_title_pane

0xe754,	// (0x00082985) fs_bigclock_status_signal_pane_g1

0xe75d,	// (0x0008298e) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe6a,	// (0x0008409b) fs_bigclock_status_signal_pane_g

0xe765,	// (0x00082996) fs_bigclock_status_battery_pane_g1

0xe76e,	// (0x0008299f) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe6f,	// (0x000840a0) fs_bigclock_status_battery_pane_g

0xe776,	// (0x000829a7) fs_bigclock_status_title_pane_t1

0xc159,	// (0x0008038a) main_fs_bigclock_clock_pane_g1

0xe784,	// (0x000829b5) main_fs_bigclock_clock_pane_g2

0xe784,	// (0x000829b5) main_fs_bigclock_clock_pane_g3

0xe784,	// (0x000829b5) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe74,	// (0x000840a5) main_fs_bigclock_clock_pane_g

0xe78c,	// (0x000829bd) main_fs_bigclock_clock_pane_t1

0xe79a,	// (0x000829cb) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe7d,	// (0x000840ae) main_fs_bigclock_clock_pane_t

0xe7a9,	// (0x000829da) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe7a9,	// (0x000829da) list_single_fs_bigclock_indicator_pane

0xa109,	// (0x0007e33a) list_single_fs_bigclock_pane_ParamLimits

0xa109,	// (0x0007e33a) list_single_fs_bigclock_pane

0xe7c3,	// (0x000829f4) main_fs_bigclock_indicator_pane_t1

0xe7d2,	// (0x00082a03) list_single_fs_bigclock_pane_g1

0xe7da,	// (0x00082a0b) list_single_fs_bigclock_pane_t1

0xc159,	// (0x0008038a) main_fs_bigclock_swipe_pane_g1

0xe81d,	// (0x00082a4e) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe8e,	// (0x000840bf) main_fs_bigclock_swipe_pane_g

0xe825,	// (0x00082a56) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe825,	// (0x00082a56) main_fs_bigclock_swipe_pane_t1

0x4185,	// (0x000783b6) call_type_pane_ParamLimits

0xa978,	// (0x0007eba9) main_btmg_pane

0xe468,	// (0x00082699) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe468,	// (0x00082699) list_single_cale_mrui_row_pane_g2

0x0002,

0xfe01,	// (0x00084032) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe01,	// (0x00084032) list_single_cale_mrui_row_pane_g

0xe5d0,	// (0x00082801) list_recal_vselct_arw_lo_pane

0xe5d8,	// (0x00082809) list_recal_vselct_arw_up_pane

0xf0de,	// (0x0008330f) list_recal_vselct_pane

0xe842,	// (0x00082a73) btmg_button_pane

0xa16c,	// (0x0007e39d) main_btmg_pane_g1

0xa978,	// (0x0007eba9) bg_button_pane_cp044

0xe84c,	// (0x00082a7d) btmg_button_pane_t1

0xbce8,	// (0x0007ff19) aid_listscroll_gen

0x17e5,	// (0x00075a16) main_cntbar_detail_pane

0xe1a3,	// (0x000823d4) list_cmail_folder_pane

0xe1b3,	// (0x000823e4) sp_fs_scroll_pane_cp03_ParamLimits

0x14cc,	// (0x000756fd) list_single_fs_dyc_pane_cp01_ParamLimits

0x14cc,	// (0x000756fd) list_single_fs_dyc_pane_cp01

0xe85a,	// (0x00082a8b) aid_size_cmail_indent

0xe863,	// (0x00082a94) list_single_dyc_row_pane_cp01

0xa1a2,	// (0x0007e3d3) cntbar_detail_list_pane_ParamLimits

0xa1a2,	// (0x0007e3d3) cntbar_detail_list_pane

0xa1ee,	// (0x0007e41f) main_cntbar_detail_cont_pane_ParamLimits

0xa1ee,	// (0x0007e41f) main_cntbar_detail_cont_pane

0x406b,	// (0x0007829c) scroll_pane_cp032_ParamLimits

0x406b,	// (0x0007829c) scroll_pane_cp032

0xa202,	// (0x0007e433) cntbar_detail_list_event_pane_ParamLimits

0xa202,	// (0x0007e433) cntbar_detail_list_event_pane

0xa1b2,	// (0x0007e3e3) cntbar_detail_list_shct_pane

0x343b,	// (0x0007766c) aid_list_gen

0xe86c,	// (0x00082a9d) aid_scroll

0xe875,	// (0x00082aa6) aid_size_touch_scroll_bar

0x14e1,	// (0x00075712) aid_list_double

0xe87e,	// (0x00082aaf) aid_list_single

0xa212,	// (0x0007e443) aid_list_single_lg

0xe887,	// (0x00082ab8) aid_list_z_g_a_sm

0xf0bf,	// (0x000832f0) aid_list_z_g_d

0xe88f,	// (0x00082ac0) aid_txt_z_prm

0x14ea,	// (0x0007571b) aid_txt_z_prm_cp01

0x14f8,	// (0x00075729) aid_txt_z_sec

0xa21b,	// (0x0007e44c) main_cntbar_detail_cont_pane_g1_ParamLimits

0xa21b,	// (0x0007e44c) main_cntbar_detail_cont_pane_g1

0xa22f,	// (0x0007e460) main_cntbar_detail_cont_pane_g2_ParamLimits

0xa22f,	// (0x0007e460) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe93,	// (0x000840c4) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe93,	// (0x000840c4) main_cntbar_detail_cont_pane_g

0xe89d,	// (0x00082ace) main_cntbar_detail_cont_pane_t1

0xe8ab,	// (0x00082adc) main_cntbar_detail_cont_pane_t2

0xe8b9,	// (0x00082aea) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe98,	// (0x000840c9) main_cntbar_detail_cont_pane_t

0xa23f,	// (0x0007e470) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa23f,	// (0x0007e470) cell_cntbar_detail_list_shct_pane

0xe8c7,	// (0x00082af8) cntbar_detail_list_shct_pane_g1

0xe8d0,	// (0x00082b01) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe9f,	// (0x000840d0) cntbar_detail_list_shct_pane_g

0xa253,	// (0x0007e484) cntbar_detail_list_event_pane_g1_ParamLimits

0xa253,	// (0x0007e484) cntbar_detail_list_event_pane_g1

0xa25f,	// (0x0007e490) cntbar_detail_list_event_pane_g2_ParamLimits

0xa25f,	// (0x0007e490) cntbar_detail_list_event_pane_g2

0x0005,

0xfea4,	// (0x000840d5) cntbar_detail_list_event_pane_g_ParamLimits

0xfea4,	// (0x000840d5) cntbar_detail_list_event_pane_g

0xa2cb,	// (0x0007e4fc) cntbar_detail_list_event_pane_t1_ParamLimits

0xa2cb,	// (0x0007e4fc) cntbar_detail_list_event_pane_t1

0xa2e0,	// (0x0007e511) cntbar_detail_list_event_pane_t2_ParamLimits

0xa2e0,	// (0x0007e511) cntbar_detail_list_event_pane_t2

0x0002,

0xfeb1,	// (0x000840e2) cntbar_detail_list_event_pane_t_ParamLimits

0xfeb1,	// (0x000840e2) cntbar_detail_list_event_pane_t

0xc159,	// (0x0008038a) cell_cntbar_detail_list_shct_pane_g1

0x47a2,	// (0x000789d3) navi_pane_mv_g3

0x17e5,	// (0x00075a16) main_cntbar_detail_pane_ParamLimits

0xa978,	// (0x0007eba9) main_notif_wgt_pane

0xecea,	// (0x00082f1b) aid_tch_main_mp4_pane_g4

0xeecc,	// (0x000830fd) popup_slider_window_cp02

0xe5c6,	// (0x000827f7) list_recal_day_event_pane

0xa176,	// (0x0007e3a7) cntbar_detail_btn_pane_ParamLimits

0xa176,	// (0x0007e3a7) cntbar_detail_btn_pane

0xa18c,	// (0x0007e3bd) cntbar_detail_btn_pane_cp01_ParamLimits

0xa18c,	// (0x0007e3bd) cntbar_detail_btn_pane_cp01

0xa1b2,	// (0x0007e3e3) cntbar_detail_list_shct_pane_ParamLimits

0xa1c2,	// (0x0007e3f3) cntbar_detail_pane_g1_ParamLimits

0xa1c2,	// (0x0007e3f3) cntbar_detail_pane_g1

0xa1d2,	// (0x0007e403) cntbar_detail_pane_t1_ParamLimits

0xa1d2,	// (0x0007e403) cntbar_detail_pane_t1

0xa26b,	// (0x0007e49c) cntbar_detail_list_event_pane_g3_ParamLimits

0xa26b,	// (0x0007e49c) cntbar_detail_list_event_pane_g3

0xa283,	// (0x0007e4b4) cntbar_detail_list_event_pane_g4_ParamLimits

0xa283,	// (0x0007e4b4) cntbar_detail_list_event_pane_g4

0xa29b,	// (0x0007e4cc) cntbar_detail_list_event_pane_g5_ParamLimits

0xa29b,	// (0x0007e4cc) cntbar_detail_list_event_pane_g5

0xa2b3,	// (0x0007e4e4) cntbar_detail_list_event_pane_g6_ParamLimits

0xa2b3,	// (0x0007e4e4) cntbar_detail_list_event_pane_g6

0xa2f5,	// (0x0007e526) cntbar_detail_list_event_pane_t3_ParamLimits

0xa2f5,	// (0x0007e526) cntbar_detail_list_event_pane_t3

0xa307,	// (0x0007e538) popup_notif_wgt_window_ParamLimits

0xa307,	// (0x0007e538) popup_notif_wgt_window

0xa320,	// (0x0007e551) popup_submenu_window_cp01_ParamLimits

0xa320,	// (0x0007e551) popup_submenu_window_cp01

0x4820,	// (0x00078a51) bg_popup_window_pane_cp10

0xe8d9,	// (0x00082b0a) listscroll_notif_wgt_pane

0xe8e3,	// (0x00082b14) list_notif_wgt_window

0xe8ec,	// (0x00082b1d) scroll_pane_cp033

0xe8f5,	// (0x00082b26) list_notif_wgt_row_pane_ParamLimits

0xe8f5,	// (0x00082b26) list_notif_wgt_row_pane

0xe907,	// (0x00082b38) aid_size_list_notif_wgt_del

0xe910,	// (0x00082b41) list_notif_wgt_row_pane_g1

0xe918,	// (0x00082b49) list_notif_wgt_row_pane_g2

0xe920,	// (0x00082b51) list_notif_wgt_row_pane_g3

0x0002,

0xfeb8,	// (0x000840e9) list_notif_wgt_row_pane_g

0xe929,	// (0x00082b5a) list_notif_wgt_row_pane_t1

0xe937,	// (0x00082b68) list_notif_wgt_row_pane_t2

0xe945,	// (0x00082b76) list_notif_wgt_row_pane_t3

0x0002,

0xfebf,	// (0x000840f0) list_notif_wgt_row_pane_t

0xcee0,	// (0x00081111) list_recal_day_event_pane_g1

0xe953,	// (0x00082b84) list_recal_day_event_pane_t1

0xa978,	// (0x0007eba9) bg_button_pane_cp045

0xe962,	// (0x00082b93) cntbar_detail_btn_pane_t1

0xbcf0,	// (0x0007ff21) main_callh_pane_ParamLimits

0xbcf0,	// (0x0007ff21) main_callh_pane

0xa978,	// (0x0007eba9) main_coverflow0_pane

0xa978,	// (0x0007eba9) main_wgtman_pane

0x9912,	// (0x0007db43) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x9912,	// (0x0007db43) main_fs_bigclock_unlock_btn_pane

0xe17d,	// (0x000823ae) bg_button_pane_cp16

0xe18d,	// (0x000823be) cell_tport_appsw_pane_g3

0xa332,	// (0x0007e563) cf0_flow_pane_ParamLimits

0xa332,	// (0x0007e563) cf0_flow_pane

0xe970,	// (0x00082ba1) listscroll_cf0_pane

0xe979,	// (0x00082baa) main_cf0_pane_g1

0xa347,	// (0x0007e578) main_cf0_pane_t1_ParamLimits

0xa347,	// (0x0007e578) main_cf0_pane_t1

0xa35e,	// (0x0007e58f) main_cf0_pane_t2_ParamLimits

0xa35e,	// (0x0007e58f) main_cf0_pane_t2

0x0001,

0xfec6,	// (0x000840f7) main_cf0_pane_t_ParamLimits

0xfec6,	// (0x000840f7) main_cf0_pane_t

0xe983,	// (0x00082bb4) scroll_pane_cp11

0xa375,	// (0x0007e5a6) cf0_flow_pane_g1

0xa37d,	// (0x0007e5ae) cf0_flow_pane_g2

0x0001,

0xfecb,	// (0x000840fc) cf0_flow_pane_g

0xa385,	// (0x0007e5b6) cf0_flow_pane_t1

0xa978,	// (0x0007eba9) main_call6_pane

0xa978,	// (0x0007eba9) main_calllock_pane

0xa393,	// (0x0007e5c4) call6_btn_grp_pane_ParamLimits

0xa393,	// (0x0007e5c4) call6_btn_grp_pane

0xa3ad,	// (0x0007e5de) call6_pane_g1_ParamLimits

0xa3ad,	// (0x0007e5de) call6_pane_g1

0xa3c2,	// (0x0007e5f3) popup_call6_1st_window_ParamLimits

0xa3c2,	// (0x0007e5f3) popup_call6_1st_window

0xa3d3,	// (0x0007e604) popup_call6_2nd_window_ParamLimits

0xa3d3,	// (0x0007e604) popup_call6_2nd_window

0xa3e4,	// (0x0007e615) cell_call6_btn_pane_ParamLimits

0xa3e4,	// (0x0007e615) cell_call6_btn_pane

0x4820,	// (0x00078a51) bg_popup_call2_in_pane_cp03

0xe98e,	// (0x00082bbf) popup_call6_1st_window_g1

0xe996,	// (0x00082bc7) popup_call6_1st_window_g2

0xe99e,	// (0x00082bcf) popup_call6_1st_window_g3

0x0002,

0xfed0,	// (0x00084101) popup_call6_1st_window_g

0xe9a6,	// (0x00082bd7) popup_call6_1st_window_t1

0xe9b5,	// (0x00082be6) popup_call6_1st_window_t2

0xe9c5,	// (0x00082bf6) popup_call6_1st_window_t3

0x0002,

0xfed7,	// (0x00084108) popup_call6_1st_window_t

0x4820,	// (0x00078a51) bg_popup_call2_in_pane_cp04

0xe98e,	// (0x00082bbf) popup_call6_2nd_window_g1

0xe996,	// (0x00082bc7) popup_call6_2nd_window_g2

0xe99e,	// (0x00082bcf) popup_call6_2nd_window_g3

0x0002,

0xfed0,	// (0x00084101) popup_call6_2nd_window_g

0xe9a6,	// (0x00082bd7) popup_call6_2nd_window_t1

0xa978,	// (0x0007eba9) bg_button_pane_cp15

0xe9d5,	// (0x00082c06) cell_call6_btn_pane_g1

0xe9de,	// (0x00082c0f) cell_call6_btn_pane_t1

0xa3f8,	// (0x0007e629) listscroll_wgtman_pane_ParamLimits

0xa3f8,	// (0x0007e629) listscroll_wgtman_pane

0xa41b,	// (0x0007e64c) wgtman_btn_pane_ParamLimits

0xa41b,	// (0x0007e64c) wgtman_btn_pane

0x43df,	// (0x00078610) aid_scroll_copy1

0xe9ed,	// (0x00082c1e) list_wgtman_pane

0xa45e,	// (0x0007e68f) wgtman_btn_pane_g1_ParamLimits

0xa45e,	// (0x0007e68f) wgtman_btn_pane_g1

0xa48a,	// (0x0007e6bb) wgtman_btn_pane_t1_ParamLimits

0xa48a,	// (0x0007e6bb) wgtman_btn_pane_t1

0xe9f7,	// (0x00082c28) wgtman_btn_pane_t2_ParamLimits

0xe9f7,	// (0x00082c28) wgtman_btn_pane_t2

0x0001,

0xfede,	// (0x0008410f) wgtman_btn_pane_t_ParamLimits

0xfede,	// (0x0008410f) wgtman_btn_pane_t

0xa4c7,	// (0x0007e6f8) listrow_wgtman_pane_ParamLimits

0xa4c7,	// (0x0007e6f8) listrow_wgtman_pane

0xa4d9,	// (0x0007e70a) listrow_wgtman_pane_g1

0xa4e2,	// (0x0007e713) listrow_wgtman_pane_g2

0x0001,

0xfee3,	// (0x00084114) listrow_wgtman_pane_g

0x1506,	// (0x00075737) listrow_wgtman_pane_t1

0x1514,	// (0x00075745) listrow_wgtman_pane_t2

0x0001,

0xfee8,	// (0x00084119) listrow_wgtman_pane_t

0xa4ec,	// (0x0007e71d) wait_bar_pane_cp09

0xea0e,	// (0x00082c3f) main_calllock_btn_pane

0xea18,	// (0x00082c49) main_calllock_pane_g1

0xa978,	// (0x0007eba9) bg_button_pane_cp17

0xea24,	// (0x00082c55) main_calllock_btn_pane_g1

0xea2d,	// (0x00082c5e) main_calllock_btn_pane_t1

0xa978,	// (0x0007eba9) main_dialer3_pane

0xa978,	// (0x0007eba9) main_fmrd2_pane

0xc159,	// (0x0008038a) main_fs_bigclock_unlock_btn_pane_g1

0xea44,	// (0x00082c75) main_fs_bigclock_unlock_btn_pane_t1

0xa4f4,	// (0x0007e725) area_fmrd2_info_pane_ParamLimits

0xa4f4,	// (0x0007e725) area_fmrd2_info_pane

0xa505,	// (0x0007e736) area_fmrd2_visual_pane_ParamLimits

0xa505,	// (0x0007e736) area_fmrd2_visual_pane

0xa513,	// (0x0007e744) fmrd2_indi_pane_ParamLimits

0xa513,	// (0x0007e744) fmrd2_indi_pane

0xa520,	// (0x0007e751) area_fmrd2_visual_pane_g1

0xa528,	// (0x0007e759) area_fmrd2_visual_pane_t1

0xa538,	// (0x0007e769) area_fmrd2_visual_pane_t2

0xa548,	// (0x0007e779) area_fmrd2_visual_pane_t3

0x0002,

0xfef2,	// (0x00084123) area_fmrd2_visual_pane_t

0xa558,	// (0x0007e789) area_fmrd2_info_pane_g1

0xa560,	// (0x0007e791) area_fmrd2_info_pane_t1

0xa570,	// (0x0007e7a1) area_fmrd2_info_pane_t2

0xa580,	// (0x0007e7b1) area_fmrd2_info_pane_t3

0xa590,	// (0x0007e7c1) area_fmrd2_info_pane_t4

0x0003,

0xfef9,	// (0x0008412a) area_fmrd2_info_pane_t

0xa59e,	// (0x0007e7cf) fmrd2_indi_pane_t1

0xa5ae,	// (0x0007e7df) fmrd2_indi_pane_t2

0xa5be,	// (0x0007e7ef) fmrd2_indi_pane_t3

0x0002,

0xff02,	// (0x00084133) fmrd2_indi_pane_t

0xdbfe,	// (0x00081e2f) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xdbfe,	// (0x00081e2f) list_single_fs_bigclock_indicator_pane_g5

0xdca5,	// (0x00081ed6) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xdca5,	// (0x00081ed6) list_single_fs_bigclock_indicator_pane_t5

0x9e49,	// (0x0007e07a) aid_cell_bcale_month_pane_ParamLimits

0x9e49,	// (0x0007e07a) aid_cell_bcale_month_pane

0x9e5b,	// (0x0007e08c) bcale_month_pane_ParamLimits

0x9e5b,	// (0x0007e08c) bcale_month_pane

0x9e75,	// (0x0007e0a6) bcale_preview_pane_ParamLimits

0x9e75,	// (0x0007e0a6) bcale_preview_pane

0xe7da,	// (0x00082a0b) list_single_fs_bigclock_pane_t1_ParamLimits

0xe7f9,	// (0x00082a2a) list_single_fs_bigclock_pane_t2_ParamLimits

0xe7f9,	// (0x00082a2a) list_single_fs_bigclock_pane_t2

0x0001,

0xfe89,	// (0x000840ba) list_single_fs_bigclock_pane_t_ParamLimits

0xfe89,	// (0x000840ba) list_single_fs_bigclock_pane_t

0xea3c,	// (0x00082c6d) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfeed,	// (0x0008411e) main_fs_bigclock_unlock_btn_pane_g

0xa5ce,	// (0x0007e7ff) aid_dia3_key_size_ParamLimits

0xa5ce,	// (0x0007e7ff) aid_dia3_key_size

0xa5dd,	// (0x0007e80e) aid_dia3_listrow_size_ParamLimits

0xa5dd,	// (0x0007e80e) aid_dia3_listrow_size

0xa5f2,	// (0x0007e823) dia3_keypad_fun_pane_ParamLimits

0xa5f2,	// (0x0007e823) dia3_keypad_fun_pane

0xa60e,	// (0x0007e83f) dia3_keypad_num_pane_ParamLimits

0xa60e,	// (0x0007e83f) dia3_keypad_num_pane

0xa629,	// (0x0007e85a) dia3_listscroll_pane_ParamLimits

0xa629,	// (0x0007e85a) dia3_listscroll_pane

0xa63c,	// (0x0007e86d) dia3_numentry_pane_ParamLimits

0xa63c,	// (0x0007e86d) dia3_numentry_pane

0xea52,	// (0x00082c83) dia3_list_pane

0xea5d,	// (0x00082c8e) scroll_pane_cp12

0xa978,	// (0x0007eba9) bg_dia3_numentry_pane

0xa650,	// (0x0007e881) dia3_numentry_pane_t1

0xa65f,	// (0x0007e890) cell_dia3_key_num_pane

0xa667,	// (0x0007e898) cell_dia3_key0_fun_pane_ParamLimits

0xa667,	// (0x0007e898) cell_dia3_key0_fun_pane

0xa67b,	// (0x0007e8ac) cell_dia3_key1_fun_pane_ParamLimits

0xa67b,	// (0x0007e8ac) cell_dia3_key1_fun_pane

0xa693,	// (0x0007e8c4) dia3_listrow_pane

0xd902,	// (0x00081b33) bg_dia3_numentry_pane_g1

0xa978,	// (0x0007eba9) bg_button_pane_cp21

0xea68,	// (0x00082c99) cell_dia3_key_num_pane_t1

0xea76,	// (0x00082ca7) cell_dia3_key_num_pane_t2

0xea85,	// (0x00082cb6) cell_dia3_key_num_pane_t3

0xea94,	// (0x00082cc5) cell_dia3_key_num_pane_t4

0x0003,

0xff09,	// (0x0008413a) cell_dia3_key_num_pane_t

0xa978,	// (0x0007eba9) bg_button_pane_cp19

0xa6a5,	// (0x0007e8d6) cell_dia3_key0_fun_pane_g1

0xa978,	// (0x0007eba9) bg_button_pane_cp20

0xa6ad,	// (0x0007e8de) cell_dia3_key1_fun_pane_g1

0xa6b5,	// (0x0007e8e6) area_left_week_number_pane

0xa6be,	// (0x0007e8ef) area_top_day_name_pane

0xa6c7,	// (0x0007e8f8) frame_month_view_pane

0xa6cf,	// (0x0007e900) grid_month_view_pane

0xa6d9,	// (0x0007e90a) cell_top_day_name_pane_ParamLimits

0xa6d9,	// (0x0007e90a) cell_top_day_name_pane

0xa6ef,	// (0x0007e920) cell_area_left_week_number_pane_ParamLimits

0xa6ef,	// (0x0007e920) cell_area_left_week_number_pane

0xa703,	// (0x0007e934) cell_month_view_pane_ParamLimits

0xa703,	// (0x0007e934) cell_month_view_pane

0xeaa3,	// (0x00082cd4) frm_month_g1

0xa71e,	// (0x0007e94f) frm_month_g2

0xa726,	// (0x0007e957) frm_month_g3

0xa72e,	// (0x0007e95f) frm_month_g4

0xa736,	// (0x0007e967) frm_month_g5

0xa73e,	// (0x0007e96f) frm_month_g6

0xa746,	// (0x0007e977) frm_month_g7

0xeaac,	// (0x00082cdd) frm_month_g8

0xa74e,	// (0x0007e97f) frm_month_g9

0xa757,	// (0x0007e988) frm_month_g10

0xa760,	// (0x0007e991) frm_month_g11

0xa769,	// (0x0007e99a) frm_month_g12

0xa772,	// (0x0007e9a3) frm_month_g13

0xa77b,	// (0x0007e9ac) frm_month_g14

0xa784,	// (0x0007e9b5) frm_month_g15

0xa78d,	// (0x0007e9be) frm_month_g16

0x000f,

0xff12,	// (0x00084143) frm_month_g

0xa796,	// (0x0007e9c7) cell_top_day_name_pane_t1

0xa7a5,	// (0x0007e9d6) cell_area_left_week_number_pane_g1

0xa796,	// (0x0007e9c7) cell_area_left_week_number_pane_t1

0xc159,	// (0x0008038a) cell_month_view_pane_g1

0xa7ad,	// (0x0007e9de) cell_month_view_pane_t1

0xa978,	// (0x0007eba9) main_fps_pane

0xdee1,	// (0x00082112) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xdee1,	// (0x00082112) cmail_ddmenu_btn02_pane_cp1

0xdefd,	// (0x0008212e) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xdefd,	// (0x0008212e) cmail_ddmenu_btn02_pane_cp2

0xa05a,	// (0x0007e28b) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xa05a,	// (0x0007e28b) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe3c,	// (0x0008406d) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe3c,	// (0x0008406d) cmail_ddmenu_btn02_pane_g

0xa07b,	// (0x0007e2ac) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xa07b,	// (0x0007e2ac) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe41,	// (0x00084072) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe41,	// (0x00084072) cmail_ddmenu_btn02_pane_t

0xa7bc,	// (0x0007e9ed) fps_text_pane_ParamLimits

0xa7bc,	// (0x0007e9ed) fps_text_pane

0xa7d3,	// (0x0007ea04) main_fps_pane_g1_ParamLimits

0xa7d3,	// (0x0007ea04) main_fps_pane_g1

0xa7ed,	// (0x0007ea1e) wait_bar_pane_cp010_ParamLimits

0xa7ed,	// (0x0007ea1e) wait_bar_pane_cp010

0xa7fe,	// (0x0007ea2f) fps_text_pane_t1_ParamLimits

0xa7fe,	// (0x0007ea2f) fps_text_pane_t1

0xcb92,	// (0x00080dc3) cam4_image_uncrop_pane_g1

0xcb9b,	// (0x00080dcc) cam4_image_uncrop_pane_g2

0x7ddc,	// (0x0007c00d) cam4_image_uncrop_pane_g3

0x7de5,	// (0x0007c016) cam4_image_uncrop_pane_g4

0x0003,

0xf908,	// (0x00083b39) cam4_image_uncrop_pane_g

0xa693,	// (0x0007e8c4) dia3_listrow_pane_ParamLimits

0xa978,	// (0x0007eba9) main_phob2_pane

0x9cc0,	// (0x0007def1) cell_tport_appsw_pane_cp02_ParamLimits

0x9cc0,	// (0x0007def1) cell_tport_appsw_pane_cp02

0x9cd4,	// (0x0007df05) cell_tport_appsw_pane_cp03_ParamLimits

0x9cd4,	// (0x0007df05) cell_tport_appsw_pane_cp03

0xa978,	// (0x0007eba9) phob2_contact_card_pane

0xa978,	// (0x0007eba9) phob2_listscroll_pane

0xeab5,	// (0x00082ce6) phob2_list_pane

0xeabd,	// (0x00082cee) scroll_pane_cp034

0xa816,	// (0x0007ea47) phob2_cc_data_pane_ParamLimits

0xa816,	// (0x0007ea47) phob2_cc_data_pane

0xa835,	// (0x0007ea66) phob2_cc_listscroll_pane_ParamLimits

0xa835,	// (0x0007ea66) phob2_cc_listscroll_pane

0xa853,	// (0x0007ea84) list_double_large_graphic_phob2_pane_ParamLimits

0xa853,	// (0x0007ea84) list_double_large_graphic_phob2_pane

0xa865,	// (0x0007ea96) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xa865,	// (0x0007ea96) list_double_large_graphic_phob2_pane_g1

0x1522,	// (0x00075753) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x1522,	// (0x00075753) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff33,	// (0x00084164) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff33,	// (0x00084164) list_double_large_graphic_phob2_pane_g

0x152e,	// (0x0007575f) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x152e,	// (0x0007575f) list_double_large_graphic_phob2_pane_t1

0x1543,	// (0x00075774) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x1543,	// (0x00075774) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff38,	// (0x00084169) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff38,	// (0x00084169) list_double_large_graphic_phob2_pane_t

0xa978,	// (0x0007eba9) list_highlight_pane_cp024

0xeac5,	// (0x00082cf6) phob2_cc_button_pane

0xa872,	// (0x0007eaa3) phob2_cc_data_pane_g1_ParamLimits

0xa872,	// (0x0007eaa3) phob2_cc_data_pane_g1

0xa887,	// (0x0007eab8) phob2_cc_data_pane_g2_ParamLimits

0xa887,	// (0x0007eab8) phob2_cc_data_pane_g2

0x0001,

0xff3d,	// (0x0008416e) phob2_cc_data_pane_g_ParamLimits

0xff3d,	// (0x0008416e) phob2_cc_data_pane_g

0xa899,	// (0x0007eaca) phob2_cc_data_pane_t1_ParamLimits

0xa899,	// (0x0007eaca) phob2_cc_data_pane_t1

0xa8b1,	// (0x0007eae2) phob2_cc_data_pane_t2_ParamLimits

0xa8b1,	// (0x0007eae2) phob2_cc_data_pane_t2

0xa8c9,	// (0x0007eafa) phob2_cc_data_pane_t3_ParamLimits

0xa8c9,	// (0x0007eafa) phob2_cc_data_pane_t3

0x0002,

0xff42,	// (0x00084173) phob2_cc_data_pane_t_ParamLimits

0xff42,	// (0x00084173) phob2_cc_data_pane_t

0xeacd,	// (0x00082cfe) phob2_cc_list_pane_ParamLimits

0xeacd,	// (0x00082cfe) phob2_cc_list_pane

0xcf8b,	// (0x000811bc) scroll_pane_cp035_ParamLimits

0xcf8b,	// (0x000811bc) scroll_pane_cp035

0x17e5,	// (0x00075a16) bg_button_pane_cp033

0xead9,	// (0x00082d0a) phob2_cc_button_pane_g1

0xeae5,	// (0x00082d16) phob2_cc_button_pane_t1

0xeafa,	// (0x00082d2b) phob2_cc_button_pane_t2

0x0001,

0xff49,	// (0x0008417a) phob2_cc_button_pane_t

0xa8e1,	// (0x0007eb12) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xa8e1,	// (0x0007eb12) list_double_large_graphic_phob2_cc_pane

0xa8f3,	// (0x0007eb24) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xa8f3,	// (0x0007eb24) list_double_large_graphic_phob2_cc_pane_g1

0xa8ff,	// (0x0007eb30) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xa8ff,	// (0x0007eb30) list_double_large_graphic_phob2_cc_pane_g2

0x1555,	// (0x00075786) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x1555,	// (0x00075786) list_double_large_graphic_phob2_cc_pane_g3

0x1561,	// (0x00075792) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x1561,	// (0x00075792) list_double_large_graphic_phob2_cc_pane_g4

0x156d,	// (0x0007579e) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x156d,	// (0x0007579e) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff4e,	// (0x0008417f) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff4e,	// (0x0008417f) list_double_large_graphic_phob2_cc_pane_g

0x1579,	// (0x000757aa) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x1579,	// (0x000757aa) list_double_large_graphic_phob2_cc_pane_t1

0x15a2,	// (0x000757d3) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x15a2,	// (0x000757d3) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff59,	// (0x0008418a) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff59,	// (0x0008418a) list_double_large_graphic_phob2_cc_pane_t

0xeb0c,	// (0x00082d3d) list_highlight_pane_cp025_ParamLimits

0xeb0c,	// (0x00082d3d) list_highlight_pane_cp025

0x17e5,	// (0x00075a16) bg_button_pane_cp033_ParamLimits

0xead9,	// (0x00082d0a) phob2_cc_button_pane_g1_ParamLimits

0xeae5,	// (0x00082d16) phob2_cc_button_pane_t1_ParamLimits

0xeafa,	// (0x00082d2b) phob2_cc_button_pane_t2_ParamLimits

0xff49,	// (0x0008417a) phob2_cc_button_pane_t_ParamLimits

0x17f3,	// (0x00075a24) popup_wgtman_window

0xcd69,	// (0x00080f9a) scroll_pane_cp038

0xa440,	// (0x0007e671) wgtman_btn_pane_cp_01_ParamLimits

0xa440,	// (0x0007e671) wgtman_btn_pane_cp_01

0xeb1a,	// (0x00082d4b) wgtman_content_pane

0xeb23,	// (0x00082d54) wgtman_heading_pane

0xa978,	// (0x0007eba9) bg_heading_pane_cp02

0xeb2c,	// (0x00082d5d) wgtman_heading_pane_g1

0xeb34,	// (0x00082d65) wgtman_heading_pane_t1

0xeb42,	// (0x00082d73) scroll_pane_cp036

0xeb4a,	// (0x00082d7b) wgtman_list_pane

0xeb52,	// (0x00082d83) wgtman_list_pane_t1_ParamLimits

0xeb52,	// (0x00082d83) wgtman_list_pane_t1

0xef26,	// (0x00083157) cam4_grid_pane

0x0df4,	// (0x00075025) bg_button_pane_cp015_ParamLimits

0x8a49,	// (0x0007cc7a) bg_button_pane_cp016_ParamLimits

0x8a5c,	// (0x0007cc8d) bg_button_pane_cp017_ParamLimits

0x0e3a,	// (0x0007506b) popup_vitu2_query_window_g3_ParamLimits

0x0e3a,	// (0x0007506b) popup_vitu2_query_window_g3

0x0eb5,	// (0x000750e6) popup_vitu2_query_window_t6_ParamLimits

0x0eb5,	// (0x000750e6) popup_vitu2_query_window_t6

0x0ee0,	// (0x00075111) popup_vitu2_query_window_t7_ParamLimits

0x0ee0,	// (0x00075111) popup_vitu2_query_window_t7

0xcb92,	// (0x00080dc3) cam4_grid_pane_g1

0xcb9b,	// (0x00080dcc) cam4_grid_pane_g2

0xeb6f,	// (0x00082da0) cam4_grid_pane_g3

0xeb78,	// (0x00082da9) cam4_grid_pane_g4

0x0003,

0xff5e,	// (0x0008418f) cam4_grid_pane_g

0x2e37,	// (0x00077068) aid_placing_vt_slider_lsc_ParamLimits

0x3192,	// (0x000773c3) vidtel_button_pane_ParamLimits

0x3192,	// (0x000773c3) vidtel_button_pane

0xeb83,	// (0x00082db4) bg_button_pane_cp034

0xa90b,	// (0x0007eb3c) vidtel_button_pane_g1

0xeb8d,	// (0x00082dbe) vidtel_button_pane_t1

0xceaa,	// (0x000810db) aid_size_vtel_slider_touch

0xcf8b,	// (0x000811bc) scroll_pane_cp039

0xd940,	// (0x00081b71) ncim_query_button_pane_cp01_ParamLimits

0xd95f,	// (0x00081b90) ncimui_query_pane_g1_ParamLimits

0x17e5,	// (0x00075a16) input_focus_pane_cp012_ParamLimits

0xd984,	// (0x00081bb5) ncim_query_entry_pane_t1_ParamLimits

0xcf8b,	// (0x000811bc) scroll_pane_cp039_ParamLimits

0x468f,	// (0x000788c0) navi_pane_bcale_mc_g1

0x4697,	// (0x000788c8) navi_pane_bcale_mc_t1

0xdf46,	// (0x00082177) main_sp_fs_email_pane_g1

0xdf4e,	// (0x0008217f) main_sp_fs_email_pane_g2

0x0001,

0xfcfa,	// (0x00083f2b) main_sp_fs_email_pane_g

0xe474,	// (0x000826a5) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe474,	// (0x000826a5) list_single_cale_mrui_row_pane_g3

0xa0a3,	// (0x0007e2d4) list_single_recal_day_pane_g5_event_pane

0xe639,	// (0x0008286a) list_single_recal_day_pane_g7

0xeb9b,	// (0x00082dcc) list_recal_day_event_pane_cp01

0xeba4,	// (0x00082dd5) list_recal_vselct_arw_lo_pane_cp01

0xebac,	// (0x00082ddd) list_recal_vselct_arw_up_pane_cp01

0xebb4,	// (0x00082de5) list_recal_vselct_pane_cp01

0xcee0,	// (0x00081111) list_recal_day_event_pane_cp01_g1

0xebbe,	// (0x00082def) list_recal_day_event_pane_cp01_t1

0xe641,	// (0x00082872) list_single_recal_day_pane_t1_ParamLimits

0xe653,	// (0x00082884) list_single_recal_day_pane_t2_ParamLimits

0xfe51,	// (0x00084082) list_single_recal_day_pane_t_ParamLimits

0x224d,	// (0x0007647e) bg_notes_pane_ParamLimits

0x225b,	// (0x0007648c) list_notes_pane_ParamLimits

0x2269,	// (0x0007649a) scroll_pane_cp06_ParamLimits

0x2291,	// (0x000764c2) main_notes_pane_ParamLimits

0xa978,	// (0x0007eba9) main_welc_pane

0xa913,	// (0x0007eb44) main_welc_body_pane_ParamLimits

0xa913,	// (0x0007eb44) main_welc_body_pane

0xa928,	// (0x0007eb59) main_welc_opti_pane_ParamLimits

0xa928,	// (0x0007eb59) main_welc_opti_pane

0xa93d,	// (0x0007eb6e) main_welc_pane_t1_ParamLimits

0xa93d,	// (0x0007eb6e) main_welc_pane_t1

0xa954,	// (0x0007eb85) main_welc_body_row_pane_ParamLimits

0xa954,	// (0x0007eb85) main_welc_body_row_pane

0xa968,	// (0x0007eb99) main_welc_opti_row_pane_ParamLimits

0xa968,	// (0x0007eb99) main_welc_opti_row_pane

0xebcc,	// (0x00082dfd) main_welc_opti_row_pane_g1

0xebd4,	// (0x00082e05) main_welc_opti_row_pane_t1

0xebe3,	// (0x00082e14) main_welc_body_row_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Large
