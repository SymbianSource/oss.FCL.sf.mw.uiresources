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

#include "aknlayoutscalable_elaf_pvl4_apps_vga4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x00075a81 };

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
0x14de,	// (0x00076f5f) Screen

0x14ea,	// (0x00076f6b) application_window

0x1526,	// (0x00076fa7) area_bottom_pane_ParamLimits

0x1526,	// (0x00076fa7) area_bottom_pane

0x155f,	// (0x00076fe0) area_top_pane_ParamLimits

0x155f,	// (0x00076fe0) area_top_pane

0xac4c,	// (0x000806cd) call_video_uplink_pane_ParamLimits

0xac4c,	// (0x000806cd) call_video_uplink_pane

0x15d4,	// (0x00077055) main_pane_ParamLimits

0x15d4,	// (0x00077055) main_pane

0x5d1d,	// (0x0007b79e) context_pane

0x5d30,	// (0x0007b7b1) navi_pane

0x5d60,	// (0x0007b7e1) popup_cale_events_window_ParamLimits

0x5d60,	// (0x0007b7e1) popup_cale_events_window

0x5d78,	// (0x0007b7f9) popup_mup_playback_window

0x5d80,	// (0x0007b801) signal_pane

0xe8e8,	// (0x00084369) main_browser_pane

0x3782,	// (0x00079203) main_burst_pane

0x59ce,	// (0x0007b44f) main_calc_pane

0x3782,	// (0x00079203) main_cale_day_pane

0xe8e8,	// (0x00084369) main_cale_month_pane

0x3782,	// (0x00079203) main_cale_week_pane

0x3782,	// (0x00079203) main_call_pane

0xe5a2,	// (0x00084023) main_call_poc_pane

0x3782,	// (0x00079203) main_camera_pane

0x3782,	// (0x00079203) main_chi_dic_pane

0x32db,	// (0x00078d5c) main_clock_pane

0xe5a2,	// (0x00084023) main_fmradio_pane

0x3782,	// (0x00079203) main_graph_messa_pane

0xe5a2,	// (0x00084023) main_help_pane

0xe8e8,	// (0x00084369) main_im_pane

0xe81d,	// (0x0008429e) main_image_pane_ParamLimits

0xe81d,	// (0x0008429e) main_image_pane

0xe5a2,	// (0x00084023) main_location2_pane

0x3782,	// (0x00079203) main_location_pane

0xe5a2,	// (0x00084023) main_messa_pane

0xe5a2,	// (0x00084023) main_mp2_pane

0x3782,	// (0x00079203) main_mp_pane

0xe5a2,	// (0x00084023) main_msg_pane

0xe5a2,	// (0x00084023) main_mup_eq_pane

0xe5a2,	// (0x00084023) main_mup_pane

0x3782,	// (0x00079203) main_notes_pane

0xe5a2,	// (0x00084023) main_pec_pane

0xe5a2,	// (0x00084023) main_phob_pane

0xe5a2,	// (0x00084023) main_pinb_pane

0xe5a2,	// (0x00084023) main_postcard_pane

0xe5a2,	// (0x00084023) main_qdial_pane

0x3782,	// (0x00079203) main_skin_pane

0xe5a2,	// (0x00084023) main_smil2_pane

0x3782,	// (0x00079203) main_smil_pane

0x3782,	// (0x00079203) main_video_pane

0x3782,	// (0x00079203) main_video_tele_pane

0xe81d,	// (0x0008429e) main_viewer_pane_ParamLimits

0xe81d,	// (0x0008429e) main_viewer_pane

0x3782,	// (0x00079203) main_vorec_pane

0x5a3a,	// (0x0007b4bb) popup_blid_sat_info_window_ParamLimits

0x5a3a,	// (0x0007b4bb) popup_blid_sat_info_window

0x5aaa,	// (0x0007b52b) popup_dyc_status_message_window_ParamLimits

0x5aaa,	// (0x0007b52b) popup_dyc_status_message_window

0x5ac4,	// (0x0007b545) popup_grid_large_graphic_window_ParamLimits

0x5ac4,	// (0x0007b545) popup_grid_large_graphic_window

0x5ba3,	// (0x0007b624) popup_loc_request_window_ParamLimits

0x5ba3,	// (0x0007b624) popup_loc_request_window

0x5cf1,	// (0x0007b772) popup_wml_address_window_ParamLimits

0x5cf1,	// (0x0007b772) popup_wml_address_window

0x57d3,	// (0x0007b254) call_muted_g1

0x44f0,	// (0x00079f71) popup_call_audio_conf_window_ParamLimits

0x44f0,	// (0x00079f71) popup_call_audio_conf_window

0x57e3,	// (0x0007b264) popup_call_audio_first_window_ParamLimits

0x57e3,	// (0x0007b264) popup_call_audio_first_window

0x5859,	// (0x0007b2da) popup_call_audio_in_window_ParamLimits

0x5859,	// (0x0007b2da) popup_call_audio_in_window

0x5895,	// (0x0007b316) popup_call_audio_out_window_ParamLimits

0x5895,	// (0x0007b316) popup_call_audio_out_window

0x58cf,	// (0x0007b350) popup_call_audio_second_window_ParamLimits

0x58cf,	// (0x0007b350) popup_call_audio_second_window

0x5925,	// (0x0007b3a6) popup_call_audio_wait_window_ParamLimits

0x5925,	// (0x0007b3a6) popup_call_audio_wait_window

0x595a,	// (0x0007b3db) popup_number_entry_window_ParamLimits

0x595a,	// (0x0007b3db) popup_number_entry_window

0xac78,	// (0x000806f9) bg_popup_call_pane_cp05_ParamLimits

0xac78,	// (0x000806f9) bg_popup_call_pane_cp05

0xac98,	// (0x00080719) popup_number_entry_window_t1

0xacab,	// (0x0008072c) popup_number_entry_window_t2

0xacbd,	// (0x0008073e) popup_number_entry_window_t3

0x0003,

0xf0ec,	// (0x00084b6d) popup_number_entry_window_t

0xaccf,	// (0x00080750) text_title_cp2

0xace2,	// (0x00080763) bg_popup_call_pane_cp_ParamLimits

0xace2,	// (0x00080763) bg_popup_call_pane_cp

0xacf0,	// (0x00080771) call_thumbnail_pane

0xacf8,	// (0x00080779) popup_call_audio_in_window_g1_ParamLimits

0xacf8,	// (0x00080779) popup_call_audio_in_window_g1

0xad04,	// (0x00080785) popup_call_audio_in_window_g2_ParamLimits

0xad04,	// (0x00080785) popup_call_audio_in_window_g2

0xad10,	// (0x00080791) popup_call_audio_in_window_g3_ParamLimits

0xad10,	// (0x00080791) popup_call_audio_in_window_g3

0x0002,

0xf0f5,	// (0x00084b76) popup_call_audio_in_window_g_ParamLimits

0xf0f5,	// (0x00084b76) popup_call_audio_in_window_g

0xad1c,	// (0x0008079d) popup_call_audio_in_window_t1_ParamLimits

0xad1c,	// (0x0008079d) popup_call_audio_in_window_t1

0xad38,	// (0x000807b9) popup_call_audio_in_window_t2_ParamLimits

0xad38,	// (0x000807b9) popup_call_audio_in_window_t2

0xe26b,	// (0x00083cec) popup_call_audio_in_window_t3_ParamLimits

0xe26b,	// (0x00083cec) popup_call_audio_in_window_t3

0x0002,

0xf0fc,	// (0x00084b7d) popup_call_audio_in_window_t_ParamLimits

0xf0fc,	// (0x00084b7d) popup_call_audio_in_window_t

0xace2,	// (0x00080763) bg_popup_call_pane_cp01_ParamLimits

0xace2,	// (0x00080763) bg_popup_call_pane_cp01

0xacf0,	// (0x00080771) call_thumbnail_pane_cp02

0xe27e,	// (0x00083cff) call_type_pane_cp022

0xe286,	// (0x00083d07) popup_call_audio_out_window_g1_ParamLimits

0xe286,	// (0x00083d07) popup_call_audio_out_window_g1

0xe298,	// (0x00083d19) popup_call_audio_out_window_g2_ParamLimits

0xe298,	// (0x00083d19) popup_call_audio_out_window_g2

0xe2a4,	// (0x00083d25) popup_call_audio_out_window_g3_ParamLimits

0xe2a4,	// (0x00083d25) popup_call_audio_out_window_g3

0x0002,

0xf103,	// (0x00084b84) popup_call_audio_out_window_g_ParamLimits

0xf103,	// (0x00084b84) popup_call_audio_out_window_g

0xe2b6,	// (0x00083d37) popup_call_audio_out_window_t1_ParamLimits

0xe2b6,	// (0x00083d37) popup_call_audio_out_window_t1

0xe2ce,	// (0x00083d4f) popup_call_audio_out_window_t2_ParamLimits

0xe2ce,	// (0x00083d4f) popup_call_audio_out_window_t2

0x0001,

0xf10a,	// (0x00084b8b) popup_call_audio_out_window_t_ParamLimits

0xf10a,	// (0x00084b8b) popup_call_audio_out_window_t

0xe2e3,	// (0x00083d64) bg_popup_call_pane_ParamLimits

0xe2e3,	// (0x00083d64) bg_popup_call_pane

0x1787,	// (0x00077208) call_thumbnail_pane_cp_ParamLimits

0x1787,	// (0x00077208) call_thumbnail_pane_cp

0xe367,	// (0x00083de8) call_type_pane_cp01_ParamLimits

0xe367,	// (0x00083de8) call_type_pane_cp01

0xe3ab,	// (0x00083e2c) popup_call_audio_first_window_g1_ParamLimits

0xe3ab,	// (0x00083e2c) popup_call_audio_first_window_g1

0xe3f7,	// (0x00083e78) popup_call_audio_first_window_g2_ParamLimits

0xe3f7,	// (0x00083e78) popup_call_audio_first_window_g2

0x0001,

0xf10f,	// (0x00084b90) popup_call_audio_first_window_g_ParamLimits

0xf10f,	// (0x00084b90) popup_call_audio_first_window_g

0xe43b,	// (0x00083ebc) popup_call_audio_first_window_t1_ParamLimits

0xe43b,	// (0x00083ebc) popup_call_audio_first_window_t1

0xe4e7,	// (0x00083f68) popup_call_audio_first_window_t4_ParamLimits

0xe4e7,	// (0x00083f68) popup_call_audio_first_window_t4

0xe573,	// (0x00083ff4) popup_call_audio_first_window_t5_ParamLimits

0xe573,	// (0x00083ff4) popup_call_audio_first_window_t5

0x0002,

0xf114,	// (0x00084b95) popup_call_audio_first_window_t_ParamLimits

0xf114,	// (0x00084b95) popup_call_audio_first_window_t

0xe5a2,	// (0x00084023) bg_popup_call_pane_cp02

0xe5ac,	// (0x0008402d) call_type_pane_cp023

0xe5b4,	// (0x00084035) popup_call_audio_wait_window_g1

0xe5bc,	// (0x0008403d) popup_call_audio_wait_window_g2

0x0001,

0xf11b,	// (0x00084b9c) popup_call_audio_wait_window_g

0xe5c4,	// (0x00084045) popup_call_audio_wait_window_t3

0xe5d2,	// (0x00084053) bg_popup_call_pane_cp03_ParamLimits

0xe5d2,	// (0x00084053) bg_popup_call_pane_cp03

0xe652,	// (0x000840d3) call_thumbnail_pane_cp011_ParamLimits

0xe652,	// (0x000840d3) call_thumbnail_pane_cp011

0xe65e,	// (0x000840df) call_type_pane_cp034_ParamLimits

0xe65e,	// (0x000840df) call_type_pane_cp034

0xe69a,	// (0x0008411b) popup_call_audio_second_window_g1_ParamLimits

0xe69a,	// (0x0008411b) popup_call_audio_second_window_g1

0xe6d6,	// (0x00084157) popup_call_audio_second_window_g2_ParamLimits

0xe6d6,	// (0x00084157) popup_call_audio_second_window_g2

0x0001,

0xf120,	// (0x00084ba1) popup_call_audio_second_window_g_ParamLimits

0xf120,	// (0x00084ba1) popup_call_audio_second_window_g

0xe712,	// (0x00084193) popup_call_audio_second_window_t1_ParamLimits

0xe712,	// (0x00084193) popup_call_audio_second_window_t1

0xe793,	// (0x00084214) popup_call_audio_second_window_t2_ParamLimits

0xe793,	// (0x00084214) popup_call_audio_second_window_t2

0xe7c9,	// (0x0008424a) popup_call_audio_second_window_t3_ParamLimits

0xe7c9,	// (0x0008424a) popup_call_audio_second_window_t3

0x0002,

0xf125,	// (0x00084ba6) popup_call_audio_second_window_t_ParamLimits

0xf125,	// (0x00084ba6) popup_call_audio_second_window_t

0xe5a2,	// (0x00084023) bg_popup_call_pane_cp04

0xe7ff,	// (0x00084280) list_conf_pane

0xe807,	// (0x00084288) popup_call_audio_conf_window_t1

0xe815,	// (0x00084296) call_thumbnail_pane_g1

0xe81d,	// (0x0008429e) bg_pinb_pane_ParamLimits

0xe81d,	// (0x0008429e) bg_pinb_pane

0xe82b,	// (0x000842ac) find_pinb_pane

0xe834,	// (0x000842b5) listscroll_pinb_pane_ParamLimits

0xe834,	// (0x000842b5) listscroll_pinb_pane

0xe843,	// (0x000842c4) pinb_bg_pane_g1

0x17ab,	// (0x0007722c) pinb_bg_pane_g2

0x17b7,	// (0x00077238) pinb_bg_pane_g3

0x17c3,	// (0x00077244) pinb_bg_pane_g4

0x17cf,	// (0x00077250) pinb_bg_pane_g5

0x17db,	// (0x0007725c) pinb_bg_pane_g6

0x17e6,	// (0x00077267) pinb_bg_pane_g7

0x17f1,	// (0x00077272) pinb_bg_pane_g8

0x17fc,	// (0x0007727d) pinb_bg_pane_g9

0x1806,	// (0x00077287) pinb_bg_pane_g10

0x0009,

0xf12c,	// (0x00084bad) pinb_bg_pane_g

0x1823,	// (0x000772a4) grid_pinb_pane

0x182e,	// (0x000772af) list_pinb_pane

0x1839,	// (0x000772ba) scroll_pane_cp01_ParamLimits

0x1839,	// (0x000772ba) scroll_pane_cp01

0xe84d,	// (0x000842ce) find_pinb_pane_g1_ParamLimits

0xe84d,	// (0x000842ce) find_pinb_pane_g1

0xe865,	// (0x000842e6) find_pinb_pane_t1

0xe877,	// (0x000842f8) find_pinb_pane_t2

0x0001,

0xf146,	// (0x00084bc7) find_pinb_pane_t

0xe88c,	// (0x0008430d) input_focus_pane_cp01_ParamLimits

0xe88c,	// (0x0008430d) input_focus_pane_cp01

0x184b,	// (0x000772cc) cell_pinb_pane_ParamLimits

0x184b,	// (0x000772cc) cell_pinb_pane

0x186d,	// (0x000772ee) cell_pinb_pane_g1_ParamLimits

0x186d,	// (0x000772ee) cell_pinb_pane_g1

0x1881,	// (0x00077302) cell_pinb_pane_g2_ParamLimits

0x1881,	// (0x00077302) cell_pinb_pane_g2

0xe898,	// (0x00084319) cell_pinb_pane_g3_ParamLimits

0xe898,	// (0x00084319) cell_pinb_pane_g3

0x0002,

0xf14b,	// (0x00084bcc) cell_pinb_pane_g_ParamLimits

0xf14b,	// (0x00084bcc) cell_pinb_pane_g

0xe5a2,	// (0x00084023) grid_highlight_pane_cp01

0x188d,	// (0x0007730e) list_pinb_item_pane_ParamLimits

0x188d,	// (0x0007730e) list_pinb_item_pane

0xe5a2,	// (0x00084023) list_highlight_pane_cp02

0x18a0,	// (0x00077321) list_pinb_item_pane_g1_ParamLimits

0x18a0,	// (0x00077321) list_pinb_item_pane_g1

0x18ad,	// (0x0007732e) list_pinb_item_pane_g2_ParamLimits

0x18ad,	// (0x0007732e) list_pinb_item_pane_g2

0x18b9,	// (0x0007733a) list_pinb_item_pane_g3_ParamLimits

0x18b9,	// (0x0007733a) list_pinb_item_pane_g3

0x18ca,	// (0x0007734b) list_pinb_item_pane_g4_ParamLimits

0x18ca,	// (0x0007734b) list_pinb_item_pane_g4

0x0003,

0xf152,	// (0x00084bd3) list_pinb_item_pane_g_ParamLimits

0xf152,	// (0x00084bd3) list_pinb_item_pane_g

0x18d6,	// (0x00077357) list_pinb_item_pane_t1_ParamLimits

0x18d6,	// (0x00077357) list_pinb_item_pane_t1

0x190b,	// (0x0007738c) calc_display_pane

0x1931,	// (0x000773b2) calc_paper_pane

0x1954,	// (0x000773d5) grid_calc_pane

0xe5a2,	// (0x00084023) bg_list_pane_cp01

0x1982,	// (0x00077403) clock_g1

0x198a,	// (0x0007740b) clock_g2

0x0001,

0xf15b,	// (0x00084bdc) clock_g

0x1992,	// (0x00077413) clock_t1_ParamLimits

0x1992,	// (0x00077413) clock_t1

0x19a7,	// (0x00077428) clock_t2_ParamLimits

0x19a7,	// (0x00077428) clock_t2

0x19b9,	// (0x0007743a) clock_t3_ParamLimits

0x19b9,	// (0x0007743a) clock_t3

0x19cb,	// (0x0007744c) clock_t4_ParamLimits

0x19cb,	// (0x0007744c) clock_t4

0x19dd,	// (0x0007745e) clock_t5_ParamLimits

0x19dd,	// (0x0007745e) clock_t5

0x19f2,	// (0x00077473) clock_t6_ParamLimits

0x19f2,	// (0x00077473) clock_t6

0x1a04,	// (0x00077485) clock_t7_ParamLimits

0x1a04,	// (0x00077485) clock_t7

0x1a16,	// (0x00077497) clock_t8_ParamLimits

0x1a16,	// (0x00077497) clock_t8

0x1a2a,	// (0x000774ab) clock_t9_ParamLimits

0x1a2a,	// (0x000774ab) clock_t9

0x0008,

0xf160,	// (0x00084be1) clock_t_ParamLimits

0xf160,	// (0x00084be1) clock_t

0xe8a4,	// (0x00084325) popup_clock_analogue_window_cp02

0xe8a4,	// (0x00084325) popup_clock_digital_window_cp01

0xe8ac,	// (0x0008432d) listscroll_help_pane

0xe5a2,	// (0x00084023) phob_pre_status_pane

0xe8b6,	// (0x00084337) grid_qdial_pane

0xe5a2,	// (0x00084023) listscroll_mce_pane

0xe8c0,	// (0x00084341) bg_notes_pane

0xe8ca,	// (0x0008434b) list_notes_pane

0x1a40,	// (0x000774c1) scroll_pane_cp06

0xe8d4,	// (0x00084355) bg_calc_paper_pane

0xad5c,	// (0x000807dd) list_calc_pane

0xe8e8,	// (0x00084369) bg_calc_display_pane

0x1a4b,	// (0x000774cc) calc_display_pane_t1

0x1a5d,	// (0x000774de) calc_display_pane_t2

0xad76,	// (0x000807f7) calc_display_pane_t3

0x0002,

0xf173,	// (0x00084bf4) calc_display_pane_t

0x1a6f,	// (0x000774f0) cell_calc_pane_ParamLimits

0x1a6f,	// (0x000774f0) cell_calc_pane

0xe8f4,	// (0x00084375) bg_calc_paper_pane_g1

0xe900,	// (0x00084381) bg_calc_paper_pane_g2

0xe90c,	// (0x0008438d) bg_calc_paper_pane_g3

0xe918,	// (0x00084399) bg_calc_paper_pane_g4

0xe924,	// (0x000843a5) bg_calc_paper_pane_g5

0x1aaa,	// (0x0007752b) bg_calc_paper_pane_g6

0x1abd,	// (0x0007753e) bg_calc_paper_pane_g7

0x1ad0,	// (0x00077551) bg_calc_paper_pane_g8

0x0007,

0xf17a,	// (0x00084bfb) bg_calc_paper_pane_g

0x1ae1,	// (0x00077562) calc_bg_paper_pane_g9

0x1af2,	// (0x00077573) list_calc_item_pane_ParamLimits

0x1af2,	// (0x00077573) list_calc_item_pane

0xe930,	// (0x000843b1) list_calc_item_pane_g1

0xad88,	// (0x00080809) list_calc_item_pane_t1_ParamLimits

0xad88,	// (0x00080809) list_calc_item_pane_t1

0x1b06,	// (0x00077587) list_calc_item_pane_t2_ParamLimits

0x1b06,	// (0x00077587) list_calc_item_pane_t2

0x0001,

0xf18b,	// (0x00084c0c) list_calc_item_pane_t_ParamLimits

0xf18b,	// (0x00084c0c) list_calc_item_pane_t

0xe93d,	// (0x000843be) cell_calc_pane_g1

0xe947,	// (0x000843c8) grid_highlight_pane_cp02

0xe969,	// (0x000843ea) bg_calc_display_pane_g1

0xad9a,	// (0x0008081b) bg_calc_display_pane_g2

0xe972,	// (0x000843f3) bg_calc_display_pane_g3

0x0002,

0xf195,	// (0x00084c16) bg_calc_display_pane_g

0x1b38,	// (0x000775b9) cell_qdial_pane_ParamLimits

0x1b38,	// (0x000775b9) cell_qdial_pane

0x1b4e,	// (0x000775cf) cell_qdial_pane_g1_ParamLimits

0x1b4e,	// (0x000775cf) cell_qdial_pane_g1

0x1b64,	// (0x000775e5) cell_qdial_pane_g2_ParamLimits

0x1b64,	// (0x000775e5) cell_qdial_pane_g2

0xe97b,	// (0x000843fc) cell_qdial_pane_g3_ParamLimits

0xe97b,	// (0x000843fc) cell_qdial_pane_g3

0x0003,

0xf19c,	// (0x00084c1d) cell_qdial_pane_g_ParamLimits

0xf19c,	// (0x00084c1d) cell_qdial_pane_g

0x1b8a,	// (0x0007760b) cell_qdial_pane_t1_ParamLimits

0x1b8a,	// (0x0007760b) cell_qdial_pane_t1

0x1ba2,	// (0x00077623) cell_qdial_pane_t2_ParamLimits

0x1ba2,	// (0x00077623) cell_qdial_pane_t2

0x1bb5,	// (0x00077636) cell_qdial_pane_t3_ParamLimits

0x1bb5,	// (0x00077636) cell_qdial_pane_t3

0x0002,

0xf1a5,	// (0x00084c26) cell_qdial_pane_t_ParamLimits

0xf1a5,	// (0x00084c26) cell_qdial_pane_t

0xe5a2,	// (0x00084023) grid_highlight_pane_cp04

0xe987,	// (0x00084408) thumbnail_qdial_pane_ParamLimits

0xe987,	// (0x00084408) thumbnail_qdial_pane

0xe9e3,	// (0x00084464) list_help_pane

0xe9ec,	// (0x0008446d) scroll_pane_cp02

0x1bc8,	// (0x00077649) help_list_pane_t1_ParamLimits

0x1bc8,	// (0x00077649) help_list_pane_t1

0xada4,	// (0x00080825) bg_notes_pane_g2

0xadac,	// (0x0008082d) bg_notes_pane_g3

0xadb4,	// (0x00080835) notes_bg_pane_g1

0xadbc,	// (0x0008083d) notes_bg_pane_g4

0xadc4,	// (0x00080845) notes_bg_pane_g5

0xadcc,	// (0x0008084d) notes_bg_pane_g6

0xadd4,	// (0x00080855) notes_bg_pane_g7

0xaddc,	// (0x0008085d) notes_bg_pane_g8

0xade4,	// (0x00080865) notes_bg_pane_g9

0x0006,

0xf1c3,	// (0x00084c44) notes_bg_pane_g

0xde48,	// (0x000838c9) list_notes_text_pane_ParamLimits

0xde48,	// (0x000838c9) list_notes_text_pane

0xe9f5,	// (0x00084476) list_notes_text_pane_g1

0xadec,	// (0x0008086d) list_notes_text_pane_t1

0xe8e8,	// (0x00084369) listscroll_cale_week_pane

0x1c09,	// (0x0007768a) bg_cale_heading_pane

0xea0f,	// (0x00084490) bg_cale_pane_cp01

0x1c25,	// (0x000776a6) cale_week_corner_pane

0x1c3b,	// (0x000776bc) cale_week_day_heading_pane

0x1c57,	// (0x000776d8) cale_week_scroll_pane_g1

0x1c70,	// (0x000776f1) cale_week_scroll_pane_g2

0x1c81,	// (0x00077702) cale_week_scroll_pane_g3

0x1c92,	// (0x00077713) cale_week_scroll_pane_g4

0x1ca3,	// (0x00077724) cale_week_scroll_pane_g5

0x1cb4,	// (0x00077735) cale_week_scroll_pane_g6

0x1cc5,	// (0x00077746) cale_week_scroll_pane_g7

0x1cd6,	// (0x00077757) cale_week_scroll_pane_g8

0x1ce7,	// (0x00077768) cale_week_scroll_pane_g9

0x1cf8,	// (0x00077779) cale_week_scroll_pane_g10

0x1d09,	// (0x0007778a) cale_week_scroll_pane_g11

0x1d1a,	// (0x0007779b) cale_week_scroll_pane_g12

0x1d2b,	// (0x000777ac) cale_week_scroll_pane_g13

0x1d44,	// (0x000777c5) cale_week_scroll_pane_g14

0x1d5d,	// (0x000777de) cale_week_scroll_pane_g15

0x000e,

0xf1d2,	// (0x00084c53) cale_week_scroll_pane_g

0x1d76,	// (0x000777f7) cale_week_time_pane

0x1d87,	// (0x00077808) grid_cale_week_pane

0x1da2,	// (0x00077823) scroll_pane_cp08

0x1dba,	// (0x0007783b) cell_cale_week_pane_ParamLimits

0x1dba,	// (0x0007783b) cell_cale_week_pane

0x1e02,	// (0x00077883) cale_week_day_heading_pane_t1

0x1e16,	// (0x00077897) cale_week_day_heading_pane_t2

0x1e2a,	// (0x000778ab) cale_week_day_heading_pane_t3

0x1e3e,	// (0x000778bf) cale_week_day_heading_pane_t4

0x1e52,	// (0x000778d3) cale_week_day_heading_pane_t5

0x1e66,	// (0x000778e7) cale_week_day_heading_pane_t6

0x1e7a,	// (0x000778fb) cale_week_day_heading_pane_t7

0x0006,

0xf1f1,	// (0x00084c72) cale_week_day_heading_pane_t

0xea3a,	// (0x000844bb) bg_cale_side_pane

0x1e8e,	// (0x0007790f) cale_week_time_pane_t1

0x1ea6,	// (0x00077927) cale_week_time_pane_t2

0x1ebe,	// (0x0007793f) cale_week_time_pane_t3

0x1ed6,	// (0x00077957) cale_week_time_pane_t4

0x1eee,	// (0x0007796f) cale_week_time_pane_t5

0x1f06,	// (0x00077987) cale_week_time_pane_t6

0x1f1e,	// (0x0007799f) cale_week_time_pane_t7

0x1f3a,	// (0x000779bb) cale_week_time_pane_t8

0x0007,

0xf200,	// (0x00084c81) cale_week_time_pane_t

0x1f5a,	// (0x000779db) cell_cale_week_pane_g2

0x1f6b,	// (0x000779ec) cell_cale_week_pane_g3_ParamLimits

0x1f6b,	// (0x000779ec) cell_cale_week_pane_g3

0xea48,	// (0x000844c9) grid_highlight_pane_cp07

0xea50,	// (0x000844d1) listscroll_gms_pane

0xea5a,	// (0x000844db) grid_gms_pane

0xea63,	// (0x000844e4) listscroll_gms_pane_g1

0xea6b,	// (0x000844ec) listscroll_gms_pane_g2

0x0001,

0xf211,	// (0x00084c92) listscroll_gms_pane_g

0x1f83,	// (0x00077a04) scroll_pane_cp010

0x1f8e,	// (0x00077a0f) cell_gms_pane_ParamLimits

0x1f8e,	// (0x00077a0f) cell_gms_pane

0x1fa8,	// (0x00077a29) cell_gms_pane_g1

0xea73,	// (0x000844f4) cell_gms_pane_g2

0xea7b,	// (0x000844fc) cell_gms_pane_g3

0xea84,	// (0x00084505) cell_gms_pane_g4

0x0003,

0xf216,	// (0x00084c97) cell_gms_pane_g

0xea8d,	// (0x0008450e) grid_highlight_pane_cp09

0x575b,	// (0x0007b1dc) phob_pre_status_pane_g1

0x5763,	// (0x0007b1e4) phob_pre_status_pane_g2

0x576b,	// (0x0007b1ec) phob_pre_status_pane_g3

0x5773,	// (0x0007b1f4) phob_pre_status_pane_g4

0x0004,

0xf5fe,	// (0x0008507f) phob_pre_status_pane_g

0x5783,	// (0x0007b204) phob_pre_status_pane_t1

0x5793,	// (0x0007b214) phob_pre_status_pane_t2

0x57a3,	// (0x0007b224) phob_pre_status_pane_t3

0x0002,

0xf609,	// (0x0008508a) phob_pre_status_pane_t

0xe5a2,	// (0x00084023) bg_list_pane_cp05

0x1fb8,	// (0x00077a39) grid_vorec_pane

0xadfa,	// (0x0008087b) vorec_t1

0xae08,	// (0x00080889) vorec_t2

0xae16,	// (0x00080897) vorec_t3

0xae24,	// (0x000808a5) vorec_t4

0xae32,	// (0x000808b3) vorec_t5

0xae40,	// (0x000808c1) vorec_t6

0x0006,

0xf21f,	// (0x00084ca0) vorec_t

0xae5c,	// (0x000808dd) wait_bar_pane_cp01

0x1fc2,	// (0x00077a43) cell_vorec_pane_ParamLimits

0x1fc2,	// (0x00077a43) cell_vorec_pane

0xea95,	// (0x00084516) cell_vorec_pane_g1

0xe5a2,	// (0x00084023) grid_highlight_pane_cp05

0x1fed,	// (0x00077a6e) cams_zoom_pane

0x1ffc,	// (0x00077a7d) image_vga_pane

0x2016,	// (0x00077a97) main_camera_pane_g1

0x2028,	// (0x00077aa9) main_camera_pane_g2

0x2038,	// (0x00077ab9) main_camera_pane_g3

0x204c,	// (0x00077acd) main_camera_pane_g4

0x2060,	// (0x00077ae1) main_camera_pane_g5

0x2074,	// (0x00077af5) main_camera_pane_g6

0x2088,	// (0x00077b09) main_camera_pane_g7

0x0007,

0xf22e,	// (0x00084caf) main_camera_pane_g

0x209c,	// (0x00077b1d) main_camera_pane_t1

0x20b2,	// (0x00077b33) main_camera_pane_t2

0x0001,

0xf23f,	// (0x00084cc0) main_camera_pane_t

0x20f0,	// (0x00077b71) cams_zoom_pane_cp_ParamLimits

0x20f0,	// (0x00077b71) cams_zoom_pane_cp

0x2118,	// (0x00077b99) image_cif_pane_ParamLimits

0x2118,	// (0x00077b99) image_cif_pane

0x2153,	// (0x00077bd4) image_subqcif_pane

0x215d,	// (0x00077bde) main_video_pane_g1_ParamLimits

0x215d,	// (0x00077bde) main_video_pane_g1

0x2181,	// (0x00077c02) main_video_pane_g2_ParamLimits

0x2181,	// (0x00077c02) main_video_pane_g2

0x21b7,	// (0x00077c38) main_video_pane_g3_ParamLimits

0x21b7,	// (0x00077c38) main_video_pane_g3

0x21e5,	// (0x00077c66) main_video_pane_g4_ParamLimits

0x21e5,	// (0x00077c66) main_video_pane_g4

0x2213,	// (0x00077c94) main_video_pane_g5_ParamLimits

0x2213,	// (0x00077c94) main_video_pane_g5

0xeaab,	// (0x0008452c) main_video_pane_g6_ParamLimits

0xeaab,	// (0x0008452c) main_video_pane_g6

0x0006,

0xf244,	// (0x00084cc5) main_video_pane_g_ParamLimits

0xf244,	// (0x00084cc5) main_video_pane_g

0x223c,	// (0x00077cbd) main_video_pane_t1_ParamLimits

0x223c,	// (0x00077cbd) main_video_pane_t1

0xeac5,	// (0x00084546) cams_zoom_pane_g1

0xeace,	// (0x0008454f) cams_zoom_pane_g2

0xead7,	// (0x00084558) cams_zoom_pane_g3

0xeae0,	// (0x00084561) cams_zoom_pane_g4

0x0003,

0xf253,	// (0x00084cd4) cams_zoom_pane_g

0x2299,	// (0x00077d1a) grid_cams_pane

0x22b3,	// (0x00077d34) linegrid_cams_pane

0x22c7,	// (0x00077d48) cell_cams_pane_ParamLimits

0x22c7,	// (0x00077d48) cell_cams_pane

0xeae9,	// (0x0008456a) cams_burst_image_pane

0xeaf1,	// (0x00084572) cell_cams_pane_g1

0xe5a2,	// (0x00084023) grid_highlight_pane_cp03

0xe93d,	// (0x000843be) mp_bg_pane_g1

0xe5a2,	// (0x00084023) bg_list_pane_cp03

0x568e,	// (0x0007b10f) bg_mp_pane

0x5696,	// (0x0007b117) grid_mp_pane

0x569e,	// (0x0007b11f) media_player_g1

0x56a8,	// (0x0007b129) media_player_t1

0x56b6,	// (0x0007b137) media_player_t2

0x56c4,	// (0x0007b145) media_player_t3

0x56d2,	// (0x0007b153) media_player_t4

0x56e0,	// (0x0007b161) media_player_t5

0x56ee,	// (0x0007b16f) media_player_t6

0x56fc,	// (0x0007b17d) media_player_t7

0x0006,

0xf5e8,	// (0x00085069) media_player_t

0x570a,	// (0x0007b18b) wait_bar_pane_cp02

0xf5cd,	// (0x0008504e) main_usb_pane_t

0x5752,	// (0x0007b1d3) cell_mp_pane

0xe93d,	// (0x000843be) cell_mp_pane_g1

0xe5a2,	// (0x00084023) grid_highlight_pane_cp06

0xeaf9,	// (0x0008457a) grid_skin_colour_pane

0xeb01,	// (0x00084582) list_highlight_pane_cp03

0x22e9,	// (0x00077d6a) skin_g1

0xeb09,	// (0x0008458a) skin_t1

0xeb18,	// (0x00084599) skin_t2

0x0001,

0xf288,	// (0x00084d09) skin_t

0x22f3,	// (0x00077d74) cell_skin_colour_pane_ParamLimits

0x22f3,	// (0x00077d74) cell_skin_colour_pane

0xeb26,	// (0x000845a7) cell_skin_colour_pane_g1

0x2366,	// (0x00077de7) call_video_g1_ParamLimits

0x2366,	// (0x00077de7) call_video_g1

0x2382,	// (0x00077e03) call_video_g2_ParamLimits

0x2382,	// (0x00077e03) call_video_g2

0x0001,

0xf28d,	// (0x00084d0e) call_video_g_ParamLimits

0xf28d,	// (0x00084d0e) call_video_g

0x23ca,	// (0x00077e4b) call_video_uplink_pane_cp1_ParamLimits

0x23ca,	// (0x00077e4b) call_video_uplink_pane_cp1

0xeb38,	// (0x000845b9) call_video_uplink_pane_cp2

0x246b,	// (0x00077eec) video_down_crop_pane_ParamLimits

0x246b,	// (0x00077eec) video_down_crop_pane

0x2554,	// (0x00077fd5) video_down_pane_ParamLimits

0x2554,	// (0x00077fd5) video_down_pane

0xeb40,	// (0x000845c1) video_down_subqcif_pane_ParamLimits

0xeb40,	// (0x000845c1) video_down_subqcif_pane

0xeb5a,	// (0x000845db) video_down_subqcif_pane_cp_ParamLimits

0xeb5a,	// (0x000845db) video_down_subqcif_pane_cp

0xeb80,	// (0x00084601) im_reading_pane_ParamLimits

0xeb80,	// (0x00084601) im_reading_pane

0x265d,	// (0x000780de) im_writing_pane_ParamLimits

0x265d,	// (0x000780de) im_writing_pane

0x267b,	// (0x000780fc) im_reading_pane_t1

0xeb9a,	// (0x0008461b) list_im_pane

0xebab,	// (0x0008462c) scroll_pane_cp07

0x26ba,	// (0x0007813b) im_writing_pane_t1_ParamLimits

0x26ba,	// (0x0007813b) im_writing_pane_t1

0xebc4,	// (0x00084645) im_writing_pane_t2_ParamLimits

0xebc4,	// (0x00084645) im_writing_pane_t2

0x0001,

0xf297,	// (0x00084d18) im_writing_pane_t_ParamLimits

0xf297,	// (0x00084d18) im_writing_pane_t

0xe5a2,	// (0x00084023) input_focus_pane_cp04

0xe5a2,	// (0x00084023) input_focus_pane_cp05

0x26cf,	// (0x00078150) list_im_single_pane_ParamLimits

0x26cf,	// (0x00078150) list_im_single_pane

0x26e8,	// (0x00078169) list_single_im_pane_t1

0x5712,	// (0x0007b193) blid_accuracy_pane

0x571a,	// (0x0007b19b) blid_compass_pane

0x5724,	// (0x0007b1a5) main_location_t1

0x5734,	// (0x0007b1b5) main_location_t2

0x5744,	// (0x0007b1c5) main_location_t3

0x0002,

0xf5f7,	// (0x00085078) main_location_t

0xe5a2,	// (0x00084023) aid_levels_location

0xe93d,	// (0x000843be) blid_accuracy_pane_g1

0xe93d,	// (0x000843be) blid_accuracy_pane_g2

0x0001,

0xf2f9,	// (0x00084d7a) blid_accuracy_pane_g

0xec0c,	// (0x0008468d) wml_content_pane

0xec4a,	// (0x000846cb) wml_button_pane_ParamLimits

0xec4a,	// (0x000846cb) wml_button_pane

0x26f7,	// (0x00078178) wml_list_single_large_pane_ParamLimits

0x26f7,	// (0x00078178) wml_list_single_large_pane

0x2710,	// (0x00078191) wml_list_single_medium_pane_ParamLimits

0x2710,	// (0x00078191) wml_list_single_medium_pane

0x272a,	// (0x000781ab) wml_list_single_small_pane_ParamLimits

0x272a,	// (0x000781ab) wml_list_single_small_pane

0xec5e,	// (0x000846df) wml_selection_box_pane_ParamLimits

0xec5e,	// (0x000846df) wml_selection_box_pane

0xec71,	// (0x000846f2) wml_list_single_pane_t1

0xec80,	// (0x00084701) wml_list_single_medium_pane_t1

0xec8f,	// (0x00084710) wml_list_single_large_pane_t1

0xec9e,	// (0x0008471f) input_focus_pane_cp02_ParamLimits

0xec9e,	// (0x0008471f) input_focus_pane_cp02

0xecb1,	// (0x00084732) wml_selection_box_pane_g1

0xecba,	// (0x0008473b) wml_selection_box_pane_t1_ParamLimits

0xecba,	// (0x0008473b) wml_selection_box_pane_t1

0xe81d,	// (0x0008429e) bg_wml_button_pane_ParamLimits

0xe81d,	// (0x0008429e) bg_wml_button_pane

0xecd2,	// (0x00084753) wml_button_pane_g1

0xecda,	// (0x0008475b) wml_button_pane_t1

0xecd2,	// (0x00084753) wml_button_bg_pane_g1

0xecea,	// (0x0008476b) wml_button_bg_pane_g2

0xecf2,	// (0x00084773) wml_button_bg_pane_g3

0xecfa,	// (0x0008477b) wml_button_bg_pane_g4

0xed02,	// (0x00084783) wml_button_bg_pane_g5

0xed0a,	// (0x0008478b) wml_button_bg_pane_g6

0xed12,	// (0x00084793) wml_button_bg_pane_g7

0xed1a,	// (0x0008479b) wml_button_bg_pane_g8

0xed22,	// (0x000847a3) wml_button_bg_pane_g9

0x0008,

0xf29c,	// (0x00084d1d) wml_button_bg_pane_g

0x2749,	// (0x000781ca) bg_list_pane_cp02

0xed2a,	// (0x000847ab) mce_header_pane_ParamLimits

0xed2a,	// (0x000847ab) mce_header_pane

0xed40,	// (0x000847c1) mce_icon_pane

0xed40,	// (0x000847c1) mce_image_pane

0xed49,	// (0x000847ca) mce_text_pane_ParamLimits

0xed49,	// (0x000847ca) mce_text_pane

0x2753,	// (0x000781d4) scroll_pane_cp03

0xec42,	// (0x000846c3) scroll_pane_cp04

0xed5c,	// (0x000847dd) scroll_pane_cp05_ParamLimits

0xed5c,	// (0x000847dd) scroll_pane_cp05

0x275d,	// (0x000781de) mce_header_field_pane_ParamLimits

0x275d,	// (0x000781de) mce_header_field_pane

0x2776,	// (0x000781f7) mce_header_field_pane_2_ParamLimits

0x2776,	// (0x000781f7) mce_header_field_pane_2

0x278c,	// (0x0007820d) mce_header_field_pane_3

0x2794,	// (0x00078215) list_single_mce_message_pane_ParamLimits

0x2794,	// (0x00078215) list_single_mce_message_pane

0x27b0,	// (0x00078231) list_single_mce_smart_pane_ParamLimits

0x27b0,	// (0x00078231) list_single_mce_smart_pane

0xed68,	// (0x000847e9) input_focus_pane_cp03

0xed71,	// (0x000847f2) list_header_data_pane

0x27d7,	// (0x00078258) mce_header_field_pane_t1

0x27e7,	// (0x00078268) list_single_mce_header_pane_ParamLimits

0x27e7,	// (0x00078268) list_single_mce_header_pane

0xed79,	// (0x000847fa) list_single_mce_header_pane_t1

0xed88,	// (0x00084809) list_single_mce_message_pane_g1

0xed90,	// (0x00084811) list_single_mce_message_pane_t1

0x2819,	// (0x0007829a) bg_cale_heading_pane_cp01_ParamLimits

0x2819,	// (0x0007829a) bg_cale_heading_pane_cp01

0xed9e,	// (0x0008481f) bg_cale_pane_cp02_ParamLimits

0xed9e,	// (0x0008481f) bg_cale_pane_cp02

0x284c,	// (0x000782cd) cale_month_corner_pane

0x2862,	// (0x000782e3) cale_month_day_heading_pane_ParamLimits

0x2862,	// (0x000782e3) cale_month_day_heading_pane

0x2895,	// (0x00078316) cale_month_pane_g1_ParamLimits

0x2895,	// (0x00078316) cale_month_pane_g1

0x28c1,	// (0x00078342) cale_month_pane_g2_ParamLimits

0x28c1,	// (0x00078342) cale_month_pane_g2

0x28e2,	// (0x00078363) cale_month_pane_g3_ParamLimits

0x28e2,	// (0x00078363) cale_month_pane_g3

0x291e,	// (0x0007839f) cale_month_pane_g4_ParamLimits

0x291e,	// (0x0007839f) cale_month_pane_g4

0x295a,	// (0x000783db) cale_month_pane_g5_ParamLimits

0x295a,	// (0x000783db) cale_month_pane_g5

0x2996,	// (0x00078417) cale_month_pane_g6_ParamLimits

0x2996,	// (0x00078417) cale_month_pane_g6

0x29d2,	// (0x00078453) cale_month_pane_g7_ParamLimits

0x29d2,	// (0x00078453) cale_month_pane_g7

0x2a0e,	// (0x0007848f) cale_month_pane_g8_ParamLimits

0x2a0e,	// (0x0007848f) cale_month_pane_g8

0x2a4a,	// (0x000784cb) cale_month_pane_g9_ParamLimits

0x2a4a,	// (0x000784cb) cale_month_pane_g9

0x2a80,	// (0x00078501) cale_month_pane_g10_ParamLimits

0x2a80,	// (0x00078501) cale_month_pane_g10

0x2aaa,	// (0x0007852b) cale_month_pane_g11_ParamLimits

0x2aaa,	// (0x0007852b) cale_month_pane_g11

0x2ad4,	// (0x00078555) cale_month_pane_g12_ParamLimits

0x2ad4,	// (0x00078555) cale_month_pane_g12

0x2b02,	// (0x00078583) cale_month_pane_g13_ParamLimits

0x2b02,	// (0x00078583) cale_month_pane_g13

0x000c,

0xf2af,	// (0x00084d30) cale_month_pane_g_ParamLimits

0xf2af,	// (0x00084d30) cale_month_pane_g

0x2b30,	// (0x000785b1) cale_month_week_pane

0x2b41,	// (0x000785c2) grid_cale_month_pane_ParamLimits

0x2b41,	// (0x000785c2) grid_cale_month_pane

0x2b6f,	// (0x000785f0) cale_month_day_heading_pane_t1

0x2bcd,	// (0x0007864e) cale_month_day_heading_pane_t2

0x2c32,	// (0x000786b3) cale_month_day_heading_pane_t3

0x2c97,	// (0x00078718) cale_month_day_heading_pane_t4

0x2cfc,	// (0x0007877d) cale_month_day_heading_pane_t5

0x2d61,	// (0x000787e2) cale_month_day_heading_pane_t6

0x2dc6,	// (0x00078847) cale_month_day_heading_pane_t7

0x0006,

0xf2ca,	// (0x00084d4b) cale_month_day_heading_pane_t

0xea3a,	// (0x000844bb) bg_cale_side_pane_cp01

0x2e2b,	// (0x000788ac) cale_month_week_pane_t1

0x2e42,	// (0x000788c3) cale_month_week_pane_t2

0x2e59,	// (0x000788da) cale_month_week_pane_t3

0x2e70,	// (0x000788f1) cale_month_week_pane_t4

0x2e87,	// (0x00078908) cale_month_week_pane_t5

0x2e9e,	// (0x0007891f) cale_month_week_pane_t6

0x0005,

0xf2d9,	// (0x00084d5a) cale_month_week_pane_t

0x2ebd,	// (0x0007893e) cell_cale_month_pane_ParamLimits

0x2ebd,	// (0x0007893e) cell_cale_month_pane

0xaf4c,	// (0x000809cd) cell_cale_month_pane_g1

0x2f6b,	// (0x000789ec) cell_cale_month_pane_t1_ParamLimits

0x2f6b,	// (0x000789ec) cell_cale_month_pane_t1

0xea48,	// (0x000844c9) grid_highlight_pane_cp08

0xe93d,	// (0x000843be) main_smil_g1

0x2f87,	// (0x00078a08) smil_status_pane

0xedd3,	// (0x00084854) smil_text_pane

0x5519,	// (0x0007af9a) bg_popup_call3_rect_pane_g8

0x5521,	// (0x0007afa2) bg_popup_call3_rect_pane_g9

0x0008,

0xf58b,	// (0x0008500c) bg_popup_call3_rect_pane_g

0x5e74,	// (0x0007b8f5) smil_status_volume_pane_g1

0xeddd,	// (0x0008485e) smil_status_pane_t1

0xb0c1,	// (0x00080b42) volume_smil_pane

0xedf4,	// (0x00084875) list_smil_text_pane

0x2f9c,	// (0x00078a1d) scroll_pane_cp011

0x2fa7,	// (0x00078a28) smil_text_list_pane_t1_ParamLimits

0x2fa7,	// (0x00078a28) smil_text_list_pane_t1

0xaf58,	// (0x000809d9) aid_volume_smil_ParamLimits

0xaf58,	// (0x000809d9) aid_volume_smil

0xe93d,	// (0x000843be) smil_volume_pane_g1

0xe93d,	// (0x000843be) smil_volume_pane_g2

0x0001,

0xf2f9,	// (0x00084d7a) smil_volume_pane_g

0xe8e8,	// (0x00084369) listscroll_cale_day_pane

0xedfe,	// (0x0008487f) bg_cale_pane

0xee16,	// (0x00084897) list_cale_pane

0xee27,	// (0x000848a8) scroll_pane_cp09

0xee38,	// (0x000848b9) cale_bg_pane_g1

0xee40,	// (0x000848c1) cale_bg_pane_g2

0xee48,	// (0x000848c9) cale_bg_pane_g3

0xee50,	// (0x000848d1) cale_bg_pane_g4

0xee58,	// (0x000848d9) cale_bg_pane_g5

0xee60,	// (0x000848e1) cale_bg_pane_g6

0xee68,	// (0x000848e9) cale_bg_pane_g7

0xee70,	// (0x000848f1) cale_bg_pane_g8

0xee78,	// (0x000848f9) cale_bg_pane_g9

0x0008,

0xf2fe,	// (0x00084d7f) cale_bg_pane_g

0x2ffc,	// (0x00078a7d) list_cale_time_pane_ParamLimits

0x2ffc,	// (0x00078a7d) list_cale_time_pane

0x3011,	// (0x00078a92) list_cale_time_pane_g1_ParamLimits

0x3011,	// (0x00078a92) list_cale_time_pane_g1

0xee80,	// (0x00084901) list_cale_time_pane_g2_ParamLimits

0xee80,	// (0x00084901) list_cale_time_pane_g2

0x301d,	// (0x00078a9e) list_cale_time_pane_g3_ParamLimits

0x301d,	// (0x00078a9e) list_cale_time_pane_g3

0x302b,	// (0x00078aac) list_cale_time_pane_g4_ParamLimits

0x302b,	// (0x00078aac) list_cale_time_pane_g4

0x3039,	// (0x00078aba) list_cale_time_pane_g5_ParamLimits

0x3039,	// (0x00078aba) list_cale_time_pane_g5

0x0005,

0xf311,	// (0x00084d92) list_cale_time_pane_g_ParamLimits

0xf311,	// (0x00084d92) list_cale_time_pane_g

0x3047,	// (0x00078ac8) list_cale_time_pane_t1_ParamLimits

0x3047,	// (0x00078ac8) list_cale_time_pane_t1

0x306f,	// (0x00078af0) list_cale_time_pane_t2_ParamLimits

0x306f,	// (0x00078af0) list_cale_time_pane_t2

0x350e,	// (0x00078f8f) aid_blid_cardinal_pane

0x355c,	// (0x00078fdd) compass_pane_t4

0x3097,	// (0x00078b18) list_cale_time_pane_t4_ParamLimits

0x3097,	// (0x00078b18) list_cale_time_pane_t4

0x356a,	// (0x00078feb) compass_pane_t5

0x357a,	// (0x00078ffb) compass_pane_t6

0x3588,	// (0x00079009) compass_pane_t7

0x360a,	// (0x0007908b) navi_pane_cc_t1

0x3829,	// (0x000792aa) aid_phob_thumbnail_center_pane

0x3ec5,	// (0x00079946) main_postcard_pane_g4_ParamLimits

0x0002,

0xf31e,	// (0x00084d9f) list_cale_time_pane_t_ParamLimits

0xf31e,	// (0x00084d9f) list_cale_time_pane_t

0xace2,	// (0x00080763) bg_popup_window_pane_cp02_ParamLimits

0xace2,	// (0x00080763) bg_popup_window_pane_cp02

0xee9a,	// (0x0008491b) heading_pane_cp01_ParamLimits

0xee9a,	// (0x0008491b) heading_pane_cp01

0xeea6,	// (0x00084927) loc_req_pane_ParamLimits

0xeea6,	// (0x00084927) loc_req_pane

0xeeb6,	// (0x00084937) loc_type_pane_ParamLimits

0xeeb6,	// (0x00084937) loc_type_pane

0xeec8,	// (0x00084949) loc_type_pane_t1_ParamLimits

0xeec8,	// (0x00084949) loc_type_pane_t1

0xeeda,	// (0x0008495b) loc_type_pane_t2_ParamLimits

0xeeda,	// (0x0008495b) loc_type_pane_t2

0xeeec,	// (0x0008496d) loc_type_pane_t3_ParamLimits

0xeeec,	// (0x0008496d) loc_type_pane_t3

0x0002,

0xf325,	// (0x00084da6) loc_type_pane_t_ParamLimits

0xf325,	// (0x00084da6) loc_type_pane_t

0xeefe,	// (0x0008497f) list_loc_req_pane

0xef08,	// (0x00084989) scroll_pane_cp012

0x30bf,	// (0x00078b40) list_single_loc_request_popup_menu_pane_ParamLimits

0x30bf,	// (0x00078b40) list_single_loc_request_popup_menu_pane

0xef13,	// (0x00084994) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xef13,	// (0x00084994) list_single_loc_request_popup_menu_pane_g1

0xef1f,	// (0x000849a0) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xef1f,	// (0x000849a0) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf32c,	// (0x00084dad) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf32c,	// (0x00084dad) list_single_loc_request_popup_menu_pane_g

0xef2b,	// (0x000849ac) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xef2b,	// (0x000849ac) list_single_loc_request_popup_menu_pane_t1

0xe81d,	// (0x0008429e) bg_popup_window_pane_cp03_ParamLimits

0xe81d,	// (0x0008429e) bg_popup_window_pane_cp03

0xef41,	// (0x000849c2) heading_loc_req_pane_ParamLimits

0xef41,	// (0x000849c2) heading_loc_req_pane

0x30cc,	// (0x00078b4d) popup_dyc_status_message_window_g1_ParamLimits

0x30cc,	// (0x00078b4d) popup_dyc_status_message_window_g1

0x30e0,	// (0x00078b61) popup_dyc_status_message_window_t1_ParamLimits

0x30e0,	// (0x00078b61) popup_dyc_status_message_window_t1

0x30f5,	// (0x00078b76) popup_dyc_status_message_window_t2_ParamLimits

0x30f5,	// (0x00078b76) popup_dyc_status_message_window_t2

0x310a,	// (0x00078b8b) popup_dyc_status_message_window_t3_ParamLimits

0x310a,	// (0x00078b8b) popup_dyc_status_message_window_t3

0x0002,

0xf331,	// (0x00084db2) popup_dyc_status_message_window_t_ParamLimits

0xf331,	// (0x00084db2) popup_dyc_status_message_window_t

0xe5a2,	// (0x00084023) bg_heading_pane_cp01

0xef4d,	// (0x000849ce) heading_loc_req_pane_g1

0xef55,	// (0x000849d6) heading_loc_req_pane_g2

0xef5d,	// (0x000849de) heading_loc_req_pane_g3

0x0002,

0xf338,	// (0x00084db9) heading_loc_req_pane_g

0xef65,	// (0x000849e6) heading_loc_req_pane_t1

0xef75,	// (0x000849f6) bg_popup_sub_pane_cp01_ParamLimits

0xef75,	// (0x000849f6) bg_popup_sub_pane_cp01

0xef83,	// (0x00084a04) popup_cale_events_window_g1_ParamLimits

0xef83,	// (0x00084a04) popup_cale_events_window_g1

0xefa3,	// (0x00084a24) popup_cale_events_window_g2_ParamLimits

0xefa3,	// (0x00084a24) popup_cale_events_window_g2

0x0001,

0xf36c,	// (0x00084ded) popup_cale_events_window_g_ParamLimits

0xf36c,	// (0x00084ded) popup_cale_events_window_g

0xefc3,	// (0x00084a44) popup_cale_events_window_t1_ParamLimits

0xefc3,	// (0x00084a44) popup_cale_events_window_t1

0xefd5,	// (0x00084a56) popup_cale_events_window_t2_ParamLimits

0xefd5,	// (0x00084a56) popup_cale_events_window_t2

0xf013,	// (0x00084a94) popup_cale_events_window_t3_ParamLimits

0xf013,	// (0x00084a94) popup_cale_events_window_t3

0xf04d,	// (0x00084ace) popup_cale_events_window_t4_ParamLimits

0xf04d,	// (0x00084ace) popup_cale_events_window_t4

0x0003,

0xf371,	// (0x00084df2) popup_cale_events_window_t_ParamLimits

0xf371,	// (0x00084df2) popup_cale_events_window_t

0x313e,	// (0x00078bbf) call_type_pane

0x314e,	// (0x00078bcf) popup_call_status_window_g1

0x3162,	// (0x00078be3) popup_call_status_window_g2

0x3176,	// (0x00078bf7) popup_call_status_window_g3

0x0002,

0xf37a,	// (0x00084dfb) popup_call_status_window_g

0xf083,	// (0x00084b04) call_type_pane_g1

0xf08c,	// (0x00084b0d) call_type_pane_g2

0x0001,

0xf381,	// (0x00084e02) call_type_pane_g

0xe5a2,	// (0x00084023) bg_popup_sub_pane_cp02

0xf095,	// (0x00084b16) listscroll_popup_wml_pane

0xf09d,	// (0x00084b1e) list_wml_pane

0xf0a7,	// (0x00084b28) scroll_pane_cp013

0xf0b2,	// (0x00084b33) list_single_graphic_popup_wml_pane_ParamLimits

0xf0b2,	// (0x00084b33) list_single_graphic_popup_wml_pane

0xe93d,	// (0x000843be) list_single_graphic_popup_wml_pane_g1

0xf0c6,	// (0x00084b47) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf386,	// (0x00084e07) list_single_graphic_popup_wml_pane_g

0xf0ce,	// (0x00084b4f) list_single_graphic_popup_wml_pane_t1

0xf0e4,	// (0x00084b65) aid_call_pane

0xe815,	// (0x00084296) popup_clock_analogue_window_g1

0xe815,	// (0x00084296) popup_clock_analogue_window_g2

0xaff1,	// (0x00080a72) popup_clock_analogue_window_g3

0xaff1,	// (0x00080a72) popup_clock_analogue_window_g4

0xe93d,	// (0x000843be) popup_clock_analogue_window_g5

0x0004,

0xf38b,	// (0x00084e0c) popup_clock_analogue_window_g

0xaff9,	// (0x00080a7a) popup_clock_analogue_window_t1

0xb007,	// (0x00080a88) clock_digital_number_pane_ParamLimits

0xb007,	// (0x00080a88) clock_digital_number_pane

0xb013,	// (0x00080a94) clock_digital_number_pane_cp02_ParamLimits

0xb013,	// (0x00080a94) clock_digital_number_pane_cp02

0xb01f,	// (0x00080aa0) clock_digital_number_pane_cp03_ParamLimits

0xb01f,	// (0x00080aa0) clock_digital_number_pane_cp03

0xb02b,	// (0x00080aac) clock_digital_number_pane_cp04_ParamLimits

0xb02b,	// (0x00080aac) clock_digital_number_pane_cp04

0xb037,	// (0x00080ab8) clock_digital_separator_pane_ParamLimits

0xb037,	// (0x00080ab8) clock_digital_separator_pane

0xb043,	// (0x00080ac4) popup_clock_digital_window_t1

0xe93d,	// (0x000843be) clock_digital_number_pane_g1

0xe93d,	// (0x000843be) clock_digital_number_pane_g2

0x0001,

0xf2f9,	// (0x00084d7a) clock_digital_number_pane_g

0xe93d,	// (0x000843be) clock_digital_separator_pane_g1

0xe93d,	// (0x000843be) clock_digital_separator_pane_g2

0x0001,

0xf2f9,	// (0x00084d7a) clock_digital_separator_pane_g

0xe5a2,	// (0x00084023) bg_popup_window_pane_cp04

0x3186,	// (0x00078c07) heading_pane_cp03

0x318e,	// (0x00078c0f) listscroll_popup_gms_pane

0x3196,	// (0x00078c17) grid_large_graphic_popup_pane

0x31a0,	// (0x00078c21) listscroll_popup_gms_pane_g1

0x31a8,	// (0x00078c29) listscroll_popup_gms_pane_g2

0x0001,

0xf396,	// (0x00084e17) listscroll_popup_gms_pane_g

0xec42,	// (0x000846c3) scroll_pane_cp014

0x31b0,	// (0x00078c31) cell_large_graphic_popup_pane_ParamLimits

0x31b0,	// (0x00078c31) cell_large_graphic_popup_pane

0x31c8,	// (0x00078c49) cell_large_graphic_popup_pane_g1_ParamLimits

0x31c8,	// (0x00078c49) cell_large_graphic_popup_pane_g1

0x31d4,	// (0x00078c55) cell_large_graphic_popup_pane_g2_ParamLimits

0x31d4,	// (0x00078c55) cell_large_graphic_popup_pane_g2

0x31e0,	// (0x00078c61) cell_large_graphic_popup_pane_g3_ParamLimits

0x31e0,	// (0x00078c61) cell_large_graphic_popup_pane_g3

0x31ed,	// (0x00078c6e) cell_large_graphic_popup_pane_g4_ParamLimits

0x31ed,	// (0x00078c6e) cell_large_graphic_popup_pane_g4

0x0003,

0xf39b,	// (0x00084e1c) cell_large_graphic_popup_pane_g_ParamLimits

0xf39b,	// (0x00084e1c) cell_large_graphic_popup_pane_g

0x31fd,	// (0x00078c7e) grid_highlight_pane_cp010

0xe93d,	// (0x000843be) bg_popup_call_pane_g1

0x3207,	// (0x00078c88) list_single_graphic_popup_conf_pane_ParamLimits

0x3207,	// (0x00078c88) list_single_graphic_popup_conf_pane

0x3219,	// (0x00078c9a) list_highlight_pane_cp01

0x3222,	// (0x00078ca3) list_single_graphic_popup_conf_pane_g1

0x322a,	// (0x00078cab) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3a4,	// (0x00084e25) list_single_graphic_popup_conf_pane_g

0x3232,	// (0x00078cb3) list_single_graphic_popup_conf_pane_t1

0x3240,	// (0x00078cc1) linegrid_cams_pane_g1

0x3249,	// (0x00078cca) linegrid_cams_pane_g2

0xea7b,	// (0x000844fc) linegrid_cams_pane_g3

0x3252,	// (0x00078cd3) linegrid_cams_pane_g4

0x325b,	// (0x00078cdc) linegrid_cams_pane_g5

0x3264,	// (0x00078ce5) linegrid_cams_pane_g6

0xea84,	// (0x00084505) linegrid_cams_pane_g7

0x0006,

0xf3a9,	// (0x00084e2a) linegrid_cams_pane_g

0x326f,	// (0x00078cf0) popup_clock_analogue_window

0x326f,	// (0x00078cf0) popup_clock_digital_window

0xe5a2,	// (0x00084023) popup_phob_thumbnail_window

0xe93d,	// (0x000843be) call_video_uplink_pane_g1

0x3278,	// (0x00078cf9) call_video_uplink_pane_g2

0x0001,

0xf3b8,	// (0x00084e39) call_video_uplink_pane_g

0x3280,	// (0x00078d01) video_uplink_pane

0x3288,	// (0x00078d09) mce_image_pane_g1

0x3292,	// (0x00078d13) mce_image_pane_g2

0x329c,	// (0x00078d1d) mce_image_pane_g3

0x32a6,	// (0x00078d27) mce_image_pane_g4

0x32ae,	// (0x00078d2f) mce_image_pane_g5

0x0004,

0xf3bd,	// (0x00084e3e) mce_image_pane_g

0x32b6,	// (0x00078d37) control_top_pane_stacon_cp01_ParamLimits

0x32b6,	// (0x00078d37) control_top_pane_stacon_cp01

0x32ca,	// (0x00078d4b) uni_indicator_pane_stacon_cp01_ParamLimits

0x32ca,	// (0x00078d4b) uni_indicator_pane_stacon_cp01

0x32db,	// (0x00078d5c) bg_popup_sub_pane_cp03

0x32e5,	// (0x00078d66) chi_dic_find_pane

0x32ed,	// (0x00078d6e) listscroll_chi_dic_pane

0x32f6,	// (0x00078d77) main_pane_chidic_g1

0x3309,	// (0x00078d8a) chi_dic_find_pane_t1

0x3317,	// (0x00078d98) find_chidic_pane

0x3320,	// (0x00078da1) chi_dic_list_pane_ParamLimits

0x3320,	// (0x00078da1) chi_dic_list_pane

0x3331,	// (0x00078db2) scroll_pane_cp020

0x3339,	// (0x00078dba) find_chidic_pane_t1

0xe5a2,	// (0x00084023) input_focus_pane_cp06

0x3348,	// (0x00078dc9) list_chi_dic_pane_ParamLimits

0x3348,	// (0x00078dc9) list_chi_dic_pane

0x335a,	// (0x00078ddb) list_chi_dic_pane_t1_ParamLimits

0x335a,	// (0x00078ddb) list_chi_dic_pane_t1

0xe5a2,	// (0x00084023) list_highlight_pane_cp020

0x336d,	// (0x00078dee) bg_cale_heading_pane_g1

0x3375,	// (0x00078df6) bg_cale_heading_pane_g2

0x337d,	// (0x00078dfe) bg_cale_heading_pane_g3

0x3385,	// (0x00078e06) bg_cale_heading_pane_g4

0x338d,	// (0x00078e0e) bg_cale_heading_pane_g5

0x3395,	// (0x00078e16) bg_cale_heading_pane_g6

0x339d,	// (0x00078e1e) bg_cale_heading_pane_g7

0x33a5,	// (0x00078e26) bg_cale_heading_pane_g8

0x33ad,	// (0x00078e2e) bg_cale_heading_pane_g9

0x0008,

0xf3c8,	// (0x00084e49) bg_cale_heading_pane_g

0x336d,	// (0x00078dee) bg_cale_side_pane_g1

0x33b5,	// (0x00078e36) bg_cale_side_pane_g2

0x33bf,	// (0x00078e40) bg_cale_side_pane_g3

0x33c9,	// (0x00078e4a) bg_cale_side_pane_g4

0x33d3,	// (0x00078e54) bg_cale_side_pane_g5

0x33dd,	// (0x00078e5e) bg_cale_side_pane_g6

0x33e7,	// (0x00078e68) bg_cale_side_pane_g7

0x33f1,	// (0x00078e72) bg_cale_side_pane_g8

0x33f9,	// (0x00078e7a) bg_cale_side_pane_g9

0x0008,

0xf3db,	// (0x00084e5c) bg_cale_side_pane_g

0x3401,	// (0x00078e82) popup_call_status_window_ParamLimits

0x3401,	// (0x00078e82) popup_call_status_window

0x344e,	// (0x00078ecf) stacon_top_pane

0x3456,	// (0x00078ed7) status_pane_ParamLimits

0x3456,	// (0x00078ed7) status_pane

0x346b,	// (0x00078eec) status_small_pane

0x3473,	// (0x00078ef4) control_pane

0xe5a2,	// (0x00084023) stacon_bottom_pane

0x347b,	// (0x00078efc) list_single_mce_smart_pane_t1_ParamLimits

0x347b,	// (0x00078efc) list_single_mce_smart_pane_t1

0x348e,	// (0x00078f0f) list_single_mce_smart_pane_t2_ParamLimits

0x348e,	// (0x00078f0f) list_single_mce_smart_pane_t2

0x0001,

0xf3ee,	// (0x00084e6f) list_single_mce_smart_pane_t_ParamLimits

0xf3ee,	// (0x00084e6f) list_single_mce_smart_pane_t

0x34ad,	// (0x00078f2e) compass_pane

0x34b8,	// (0x00078f39) main_location2_pane_t1

0x34ce,	// (0x00078f4f) main_location2_pane_t2

0x34e4,	// (0x00078f65) main_location2_pane_t3

0x0003,

0xf3f3,	// (0x00084e74) main_location2_pane_t

0x3532,	// (0x00078fb3) compass_pane_g1_ParamLimits

0x3532,	// (0x00078fb3) compass_pane_g1

0x353e,	// (0x00078fbf) compass_pane_t1

0x354d,	// (0x00078fce) compass_pane_t2

0x0005,

0xf3fc,	// (0x00084e7d) compass_pane_t

0x3598,	// (0x00079019) text_secondary_cp61

0x3601,	// (0x00079082) navi_pane_cams_g5

0x367d,	// (0x000790fe) navi_pane_im_t1

0x368b,	// (0x0007910c) navi_pane_mp_g1_ParamLimits

0x368b,	// (0x0007910c) navi_pane_mp_g1

0x369f,	// (0x00079120) navi_pane_mp_g2_ParamLimits

0x369f,	// (0x00079120) navi_pane_mp_g2

0x36ab,	// (0x0007912c) navi_pane_mp_g3_ParamLimits

0x36ab,	// (0x0007912c) navi_pane_mp_g3

0x0002,

0xf410,	// (0x00084e91) navi_pane_mp_g_ParamLimits

0xf410,	// (0x00084e91) navi_pane_mp_g

0x36b7,	// (0x00079138) navi_pane_mp_t1

0x36c5,	// (0x00079146) navi_pane_mp_t2

0x0002,

0xf417,	// (0x00084e98) navi_pane_mp_t

0x3772,	// (0x000791f3) navi_pane_vt_g1

0x36b7,	// (0x00079138) navi_pane_vt_t1

0x377a,	// (0x000791fb) navi_slider_pane

0x3782,	// (0x00079203) zooming_pane

0x378a,	// (0x0007920b) navi_slider_pane_g1

0xb060,	// (0x00080ae1) navi_slider_pane_g2

0x0006,

0xf41e,	// (0x00084e9f) navi_slider_pane_g

0x37ae,	// (0x0007922f) aid_levels_zoom

0x37b6,	// (0x00079237) zooming_pane_g1

0x37be,	// (0x0007923f) zooming_pane_g2

0x37be,	// (0x0007923f) zooming_pane_g3

0x0002,

0xf42d,	// (0x00084eae) zooming_pane_g

0x37c6,	// (0x00079247) level_10_zoom

0x37cf,	// (0x00079250) level_11_zoom

0x37d8,	// (0x00079259) level_1_zoom

0x37e1,	// (0x00079262) level_2_zoom

0x37ea,	// (0x0007926b) level_3_zoom

0x37f3,	// (0x00079274) level_4_zoom

0x37fc,	// (0x0007927d) level_5_zoom

0x3805,	// (0x00079286) level_6_zoom

0x380e,	// (0x0007928f) level_7_zoom

0x3817,	// (0x00079298) level_8_zoom

0x3820,	// (0x000792a1) level_9_zoom

0x3831,	// (0x000792b2) popup_phob_thumbnail_window_g1

0x3839,	// (0x000792ba) popup_phob_thumbnail_window_g2

0x0001,

0xf434,	// (0x00084eb5) popup_phob_thumbnail_window_g

0x57b3,	// (0x0007b234) level_1_location

0x57bb,	// (0x0007b23c) level_2_location

0x57c3,	// (0x0007b244) level_3_location

0x57cb,	// (0x0007b24c) level_4_location

0x3782,	// (0x00079203) level_5_location

0x3841,	// (0x000792c2) mce_icon_pane_g1

0x3849,	// (0x000792ca) mce_icon_pane_g2

0x0001,

0xf439,	// (0x00084eba) mce_icon_pane_g

0x3851,	// (0x000792d2) main_mup_pane_g1_ParamLimits

0x3851,	// (0x000792d2) main_mup_pane_g1

0x3867,	// (0x000792e8) main_mup_pane_g2_ParamLimits

0x3867,	// (0x000792e8) main_mup_pane_g2

0x387f,	// (0x00079300) main_mup_pane_g3_ParamLimits

0x387f,	// (0x00079300) main_mup_pane_g3

0x3897,	// (0x00079318) main_mup_pane_g4_ParamLimits

0x3897,	// (0x00079318) main_mup_pane_g4

0x38a9,	// (0x0007932a) main_mup_pane_g5_ParamLimits

0x38a9,	// (0x0007932a) main_mup_pane_g5

0x38c5,	// (0x00079346) main_mup_pane_g6_ParamLimits

0x38c5,	// (0x00079346) main_mup_pane_g6

0x38df,	// (0x00079360) main_mup_pane_g7_ParamLimits

0x38df,	// (0x00079360) main_mup_pane_g7

0x38fd,	// (0x0007937e) main_mup_pane_g8_ParamLimits

0x38fd,	// (0x0007937e) main_mup_pane_g8

0x391b,	// (0x0007939c) main_mup_pane_g9_ParamLimits

0x391b,	// (0x0007939c) main_mup_pane_g9

0x3937,	// (0x000793b8) main_mup_pane_g10_ParamLimits

0x3937,	// (0x000793b8) main_mup_pane_g10

0x3955,	// (0x000793d6) main_mup_pane_g11_ParamLimits

0x3955,	// (0x000793d6) main_mup_pane_g11

0x396f,	// (0x000793f0) main_mup_pane_g12_ParamLimits

0x396f,	// (0x000793f0) main_mup_pane_g12

0x3985,	// (0x00079406) main_mup_pane_g13_ParamLimits

0x3985,	// (0x00079406) main_mup_pane_g13

0x000c,

0xf43e,	// (0x00084ebf) main_mup_pane_g_ParamLimits

0xf43e,	// (0x00084ebf) main_mup_pane_g

0x3999,	// (0x0007941a) main_mup_pane_t1_ParamLimits

0x3999,	// (0x0007941a) main_mup_pane_t1

0x39b5,	// (0x00079436) main_mup_pane_t2_ParamLimits

0x39b5,	// (0x00079436) main_mup_pane_t2

0x39cd,	// (0x0007944e) main_mup_pane_t3_ParamLimits

0x39cd,	// (0x0007944e) main_mup_pane_t3

0x39e5,	// (0x00079466) main_mup_pane_t4_ParamLimits

0x39e5,	// (0x00079466) main_mup_pane_t4

0x3a03,	// (0x00079484) main_mup_pane_t5_ParamLimits

0x3a03,	// (0x00079484) main_mup_pane_t5

0x3a18,	// (0x00079499) main_mup_pane_t6_ParamLimits

0x3a18,	// (0x00079499) main_mup_pane_t6

0x0005,

0xf459,	// (0x00084eda) main_mup_pane_t_ParamLimits

0xf459,	// (0x00084eda) main_mup_pane_t

0x3a2a,	// (0x000794ab) mup_progress_pane_ParamLimits

0x3a2a,	// (0x000794ab) mup_progress_pane

0x3a36,	// (0x000794b7) mup_visualizer_pane_ParamLimits

0x3a36,	// (0x000794b7) mup_visualizer_pane

0x3a6a,	// (0x000794eb) mup_volume_pane_ParamLimits

0x3a6a,	// (0x000794eb) mup_volume_pane

0x3a88,	// (0x00079509) mup_visualizer_pane_g1_ParamLimits

0x3a88,	// (0x00079509) mup_visualizer_pane_g1

0x3a88,	// (0x00079509) mup_visualizer_pane_g2_ParamLimits

0x3a88,	// (0x00079509) mup_visualizer_pane_g2

0x3532,	// (0x00078fb3) mup_visualizer_pane_g3_ParamLimits

0x3532,	// (0x00078fb3) mup_visualizer_pane_g3

0x0002,

0xf466,	// (0x00084ee7) mup_visualizer_pane_g_ParamLimits

0xf466,	// (0x00084ee7) mup_visualizer_pane_g

0xe93d,	// (0x000843be) mup_volume_pane_g1

0x3a9e,	// (0x0007951f) mup_volume_pane_g2

0x0001,

0xf46d,	// (0x00084eee) mup_volume_pane_g

0xe93d,	// (0x000843be) mup_progress_pane_g1

0x3aa7,	// (0x00079528) mup_progress_pane_g2

0x3ab0,	// (0x00079531) mup_progress_pane_g3

0x0002,

0xf472,	// (0x00084ef3) mup_progress_pane_g

0xe5a2,	// (0x00084023) bg_popup_window_pane_cp05

0x3ab9,	// (0x0007953a) heading_pane_cp02_ParamLimits

0x3ab9,	// (0x0007953a) heading_pane_cp02

0x3ad5,	// (0x00079556) list_popup_blid_pane

0x3add,	// (0x0007955e) list_blid_sat_info_pane_ParamLimits

0x3add,	// (0x0007955e) list_blid_sat_info_pane

0x3af0,	// (0x00079571) list_blid_sat_info_pane_g1

0x3af8,	// (0x00079579) list_blid_sat_info_pane_t1

0x3c12,	// (0x00079693) mup_equalizer_pane_ParamLimits

0x3c12,	// (0x00079693) mup_equalizer_pane

0x3c33,	// (0x000796b4) mup_equalizer_pane_cp1_ParamLimits

0x3c33,	// (0x000796b4) mup_equalizer_pane_cp1

0x3c54,	// (0x000796d5) mup_equalizer_pane_cp2_ParamLimits

0x3c54,	// (0x000796d5) mup_equalizer_pane_cp2

0x3c79,	// (0x000796fa) mup_equalizer_pane_cp3_ParamLimits

0x3c79,	// (0x000796fa) mup_equalizer_pane_cp3

0x3ca2,	// (0x00079723) mup_equalizer_pane_cp4_ParamLimits

0x3ca2,	// (0x00079723) mup_equalizer_pane_cp4

0x3ccb,	// (0x0007974c) mup_equalizer_pane_cp5

0x3ce3,	// (0x00079764) mup_equalizer_pane_cp6

0x3cfb,	// (0x0007977c) mup_equalizer_pane_cp7

0x55a1,	// (0x0007b022) bg_popup_call_poc_act_pane_g9

0x55a9,	// (0x0007b02a) bg_popup_call_poc_act_pane_g10

0x55b1,	// (0x0007b032) bg_popup_call_poc_act_pane_g11

0x000a,

0xe81d,	// (0x0008429e) mup_scale_pane

0xe93d,	// (0x000843be) mup_scale_pane_g1

0x3d13,	// (0x00079794) mup_scale_pane_g2

0x0006,

0xf48e,	// (0x00084f0f) mup_scale_pane_g

0x3d49,	// (0x000797ca) msg_data_pane

0x3d51,	// (0x000797d2) scroll_pane_cp017

0x0b8a,	// (0x0007660b) bg_list_pane_cp04_ParamLimits

0x0b8a,	// (0x0007660b) bg_list_pane_cp04

0x3d59,	// (0x000797da) msg_data_pane_g1

0x3d61,	// (0x000797e2) msg_data_pane_g2

0x3d6b,	// (0x000797ec) msg_data_pane_g3

0x3d75,	// (0x000797f6) msg_data_pane_g4

0x3d7d,	// (0x000797fe) msg_data_pane_g5

0x3d85,	// (0x00079806) msg_data_pane_g6

0x3d8d,	// (0x0007980e) msg_data_pane_g7

0x0006,

0xf49d,	// (0x00084f1e) msg_data_pane_g

0x0bb2,	// (0x00076633) msg_text_pane_ParamLimits

0x0bb2,	// (0x00076633) msg_text_pane

0x3d95,	// (0x00079816) qrid_highlight_pane_cp011_ParamLimits

0x3d95,	// (0x00079816) qrid_highlight_pane_cp011

0xe5a2,	// (0x00084023) msg_body_pane

0xe5a2,	// (0x00084023) msg_header_pane

0x3db4,	// (0x00079835) input_focus_pane_cp07

0x0bec,	// (0x0007666d) msg_header_pane_t1_ParamLimits

0x0bec,	// (0x0007666d) msg_header_pane_t1

0x0c00,	// (0x00076681) msg_header_pane_t2_ParamLimits

0x0c00,	// (0x00076681) msg_header_pane_t2

0x0001,

0xf4b1,	// (0x00084f32) msg_header_pane_t_ParamLimits

0xf4b1,	// (0x00084f32) msg_header_pane_t

0x3dc9,	// (0x0007984a) msg_body_pane_g1

0x0c12,	// (0x00076693) msg_body_pane_t1_ParamLimits

0x0c12,	// (0x00076693) msg_body_pane_t1

0x0c43,	// (0x000766c4) msg_body_pane_t2_ParamLimits

0x0c43,	// (0x000766c4) msg_body_pane_t2

0x0c55,	// (0x000766d6) msg_body_pane_t3_ParamLimits

0x0c55,	// (0x000766d6) msg_body_pane_t3

0x0002,

0xf4b6,	// (0x00084f37) msg_body_pane_t_ParamLimits

0xf4b6,	// (0x00084f37) msg_body_pane_t

0x3e0b,	// (0x0007988c) main_viewer_pane_g1_ParamLimits

0x3e0b,	// (0x0007988c) main_viewer_pane_g1

0x3e19,	// (0x0007989a) main_viewer_pane_g2_ParamLimits

0x3e19,	// (0x0007989a) main_viewer_pane_g2

0x3e27,	// (0x000798a8) main_viewer_pane_g3_ParamLimits

0x3e27,	// (0x000798a8) main_viewer_pane_g3

0x3e36,	// (0x000798b7) main_viewer_pane_g4_ParamLimits

0x3e36,	// (0x000798b7) main_viewer_pane_g4

0xb08a,	// (0x00080b0b) main_viewer_pane_g5_ParamLimits

0xb08a,	// (0x00080b0b) main_viewer_pane_g5

0xb08a,	// (0x00080b0b) main_viewer_pane_g7_ParamLimits

0xb08a,	// (0x00080b0b) main_viewer_pane_g7

0xb09c,	// (0x00080b1d) main_viewer_pane_g8_ParamLimits

0xb09c,	// (0x00080b1d) main_viewer_pane_g8

0x0007,

0xf4c6,	// (0x00084f47) main_viewer_pane_g_ParamLimits

0xf4c6,	// (0x00084f47) main_viewer_pane_g

0x3e45,	// (0x000798c6) viewer_content_pane_ParamLimits

0x3e45,	// (0x000798c6) viewer_content_pane

0x3e82,	// (0x00079903) main_postcard_pane_g1_ParamLimits

0x3e82,	// (0x00079903) main_postcard_pane_g1

0x3e98,	// (0x00079919) main_postcard_pane_g2_ParamLimits

0x3e98,	// (0x00079919) main_postcard_pane_g2

0x3eae,	// (0x0007992f) main_postcard_pane_g3_ParamLimits

0x3eae,	// (0x0007992f) main_postcard_pane_g3

0x0005,

0xf4d7,	// (0x00084f58) main_postcard_pane_g_ParamLimits

0xf4d7,	// (0x00084f58) main_postcard_pane_g

0x3ec5,	// (0x00079946) main_postcard_pane_g4

0x5e87,	// (0x0007b908) smil_status_volume_pane_g2

0x3f08,	// (0x00079989) postcard_pane_ParamLimits

0x3f08,	// (0x00079989) postcard_pane

0x3f58,	// (0x000799d9) postcard_pane_g1_ParamLimits

0x3f58,	// (0x000799d9) postcard_pane_g1

0x3f66,	// (0x000799e7) postcard_pane_g2_ParamLimits

0x3f66,	// (0x000799e7) postcard_pane_g2

0x3f72,	// (0x000799f3) postcard_pane_g3_ParamLimits

0x3f72,	// (0x000799f3) postcard_pane_g3

0x3f7e,	// (0x000799ff) postcard_pane_g4_ParamLimits

0x3f7e,	// (0x000799ff) postcard_pane_g4

0x3f8c,	// (0x00079a0d) postcard_pane_g5_ParamLimits

0x3f8c,	// (0x00079a0d) postcard_pane_g5

0x3f9e,	// (0x00079a1f) postcard_pane_g6_ParamLimits

0x3f9e,	// (0x00079a1f) postcard_pane_g6

0x3f58,	// (0x000799d9) postcard_pane_g7_ParamLimits

0x3f58,	// (0x000799d9) postcard_pane_g7

0x0006,

0xf4e4,	// (0x00084f65) postcard_pane_g_ParamLimits

0xf4e4,	// (0x00084f65) postcard_pane_g

0x3fb6,	// (0x00079a37) main_mp2_pane_g1_ParamLimits

0x3fb6,	// (0x00079a37) main_mp2_pane_g1

0x3fc4,	// (0x00079a45) main_mp2_pane_g2_ParamLimits

0x3fc4,	// (0x00079a45) main_mp2_pane_g2

0x3fd0,	// (0x00079a51) main_mp2_pane_g3_ParamLimits

0x3fd0,	// (0x00079a51) main_mp2_pane_g3

0x0002,

0xf4f3,	// (0x00084f74) main_mp2_pane_g_ParamLimits

0xf4f3,	// (0x00084f74) main_mp2_pane_g

0x3fdc,	// (0x00079a5d) main_mp2_pane_t1_ParamLimits

0x3fdc,	// (0x00079a5d) main_mp2_pane_t1

0x3ff3,	// (0x00079a74) main_mp2_pane_t2_ParamLimits

0x3ff3,	// (0x00079a74) main_mp2_pane_t2

0x4007,	// (0x00079a88) main_mp2_pane_t3_ParamLimits

0x4007,	// (0x00079a88) main_mp2_pane_t3

0x0002,

0xf4fa,	// (0x00084f7b) main_mp2_pane_t_ParamLimits

0xf4fa,	// (0x00084f7b) main_mp2_pane_t

0x4019,	// (0x00079a9a) pec_content_pane_ParamLimits

0x4019,	// (0x00079a9a) pec_content_pane

0xec42,	// (0x000846c3) scroll_pane_cp015

0x402b,	// (0x00079aac) pec_attribute_pane_ParamLimits

0x402b,	// (0x00079aac) pec_attribute_pane

0x403b,	// (0x00079abc) pec_content_pane_g1_ParamLimits

0x403b,	// (0x00079abc) pec_content_pane_g1

0x4047,	// (0x00079ac8) pec_content_pane_t1_ParamLimits

0x4047,	// (0x00079ac8) pec_content_pane_t1

0x4059,	// (0x00079ada) pec_content_pane_t2_ParamLimits

0x4059,	// (0x00079ada) pec_content_pane_t2

0x0001,

0xf501,	// (0x00084f82) pec_content_pane_t_ParamLimits

0xf501,	// (0x00084f82) pec_content_pane_t

0x406b,	// (0x00079aec) list_single_graphic_pane_cp01_ParamLimits

0x406b,	// (0x00079aec) list_single_graphic_pane_cp01

0xe81d,	// (0x0008429e) bg_popup_sub_pane_cp04

0x4085,	// (0x00079b06) popup_mup_playback_window_g1

0x4091,	// (0x00079b12) popup_mup_playback_window_t1

0x40a6,	// (0x00079b27) popup_mup_playback_window_t2

0x0001,

0xf506,	// (0x00084f87) popup_mup_playback_window_t

0x40fb,	// (0x00079b7c) main_image_pane_g1_ParamLimits

0x40fb,	// (0x00079b7c) main_image_pane_g1

0x41d8,	// (0x00079c59) scroll_pane_cp018_ParamLimits

0x41d8,	// (0x00079c59) scroll_pane_cp018

0x41f0,	// (0x00079c71) scroll_pane_cp016_ParamLimits

0x41f0,	// (0x00079c71) scroll_pane_cp016

0x4224,	// (0x00079ca5) smil2_image_pane_ParamLimits

0x4224,	// (0x00079ca5) smil2_image_pane

0x425a,	// (0x00079cdb) smil2_root_pane_ParamLimits

0x425a,	// (0x00079cdb) smil2_root_pane

0x4292,	// (0x00079d13) smil2_text_pane_ParamLimits

0x4292,	// (0x00079d13) smil2_text_pane

0xe5a2,	// (0x00084023) bg_list_pane_cp06

0x432a,	// (0x00079dab) grid_radio_pane

0xe5a2,	// (0x00084023) bg_popup_window_pane_cp06

0x4334,	// (0x00079db5) main_fmradio_pane_t1

0x3186,	// (0x00078c07) heading_pane_cp04

0x4342,	// (0x00079dc3) main_fmradio_pane_t2

0x5644,	// (0x0007b0c5) popup_cale_lunar_info_window_g1

0x4350,	// (0x00079dd1) main_fmradio_pane_t3

0x564c,	// (0x0007b0cd) popup_cale_lunar_info_window_g2

0x4360,	// (0x00079de1) main_fmradio_pane_t4

0x0001,

0x436e,	// (0x00079def) main_fmradio_pane_t5

0x0004,

0xf5da,	// (0x0008505b) popup_cale_lunar_info_window_g

0xf51b,	// (0x00084f9c) main_fmradio_pane_t

0x437c,	// (0x00079dfd) wait_bar_pane_cp03

0x4384,	// (0x00079e05) cell_fmradio_pane_ParamLimits

0x4384,	// (0x00079e05) cell_fmradio_pane

0x3f58,	// (0x000799d9) cell_fmradio_pane_g1_ParamLimits

0x3f58,	// (0x000799d9) cell_fmradio_pane_g1

0xe5a2,	// (0x00084023) grid_highlight_pane_cp011

0x4399,	// (0x00079e1a) poc_content_pane_ParamLimits

0x4399,	// (0x00079e1a) poc_content_pane

0x43ab,	// (0x00079e2c) scroll_pane_cp019

0x43b3,	// (0x00079e34) popup_call_poc_act_window_ParamLimits

0x43b3,	// (0x00079e34) popup_call_poc_act_window

0x43d7,	// (0x00079e58) popup_call_poc_inact_window_ParamLimits

0x43d7,	// (0x00079e58) popup_call_poc_inact_window

0xf5b1,	// (0x00085032) bg_popup_call_poc_act_pane_g

0x5529,	// (0x0007afaa) bg_popup_call_poc_inact_pane_g1

0x5531,	// (0x0007afb2) bg_popup_call_poc_inact_pane_g2

0x43f0,	// (0x00079e71) popup_call_poc_act_window_g2

0x5539,	// (0x0007afba) bg_popup_call_poc_inact_pane_g3

0x5541,	// (0x0007afc2) bg_popup_call_poc_inact_pane_g4

0x5549,	// (0x0007afca) bg_popup_call_poc_inact_pane_g5

0x43f8,	// (0x00079e79) popup_call_poc_act_window_t1_ParamLimits

0x43f8,	// (0x00079e79) popup_call_poc_act_window_t1

0x4420,	// (0x00079ea1) popup_call_poc_act_window_t2_ParamLimits

0x4420,	// (0x00079ea1) popup_call_poc_act_window_t2

0x4448,	// (0x00079ec9) popup_call_poc_act_window_t3_ParamLimits

0x4448,	// (0x00079ec9) popup_call_poc_act_window_t3

0x4470,	// (0x00079ef1) popup_call_poc_act_window_t4_ParamLimits

0x4470,	// (0x00079ef1) popup_call_poc_act_window_t4

0x0003,

0xf526,	// (0x00084fa7) popup_call_poc_act_window_t_ParamLimits

0xf526,	// (0x00084fa7) popup_call_poc_act_window_t

0x5551,	// (0x0007afd2) bg_popup_call_poc_inact_pane_g6

0x5559,	// (0x0007afda) bg_popup_call_poc_inact_pane_g7

0x5561,	// (0x0007afe2) bg_popup_call_poc_inact_pane_g8

0x4482,	// (0x00079f03) popup_call_poc_inact_window_g2

0x5569,	// (0x0007afea) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf59e,	// (0x0008501f) bg_popup_call_poc_inact_pane_g

0x448a,	// (0x00079f0b) popup_call_poc_inact_window_t1_ParamLimits

0x448a,	// (0x00079f0b) popup_call_poc_inact_window_t1

0x449f,	// (0x00079f20) popup_call_poc_inact_window_t2_ParamLimits

0x449f,	// (0x00079f20) popup_call_poc_inact_window_t2

0x44b4,	// (0x00079f35) popup_call_poc_inact_window_t3_ParamLimits

0x44b4,	// (0x00079f35) popup_call_poc_inact_window_t3

0x0002,

0xf52f,	// (0x00084fb0) popup_call_poc_inact_window_t_ParamLimits

0xf52f,	// (0x00084fb0) popup_call_poc_inact_window_t

0x5d1d,	// (0x0007b79e) context_pane_ParamLimits

0x5d80,	// (0x0007b801) signal_pane_ParamLimits

0x3782,	// (0x00079203) main_call2_pane

0x5caf,	// (0x0007b730) popup_phob_thumbnail2_window_ParamLimits

0x5caf,	// (0x0007b730) popup_phob_thumbnail2_window

0xb072,	// (0x00080af3) aid_hotspot_pointer_arrow_pane

0xb07a,	// (0x00080afb) aid_hotspot_pointer_hand_pane

0x577b,	// (0x0007b1fc) phob_pre_status_pane_g5

0x1fed,	// (0x00077a6e) cams_zoom_pane_ParamLimits

0x1ffc,	// (0x00077a7d) image_vga_pane_ParamLimits

0x2016,	// (0x00077a97) main_camera_pane_g1_ParamLimits

0x2028,	// (0x00077aa9) main_camera_pane_g2_ParamLimits

0x2038,	// (0x00077ab9) main_camera_pane_g3_ParamLimits

0x204c,	// (0x00077acd) main_camera_pane_g4_ParamLimits

0x2060,	// (0x00077ae1) main_camera_pane_g5_ParamLimits

0x2074,	// (0x00077af5) main_camera_pane_g6_ParamLimits

0x2088,	// (0x00077b09) main_camera_pane_g7_ParamLimits

0xf22e,	// (0x00084caf) main_camera_pane_g_ParamLimits

0x209c,	// (0x00077b1d) main_camera_pane_t1_ParamLimits

0x20b2,	// (0x00077b33) main_camera_pane_t2_ParamLimits

0xf23f,	// (0x00084cc0) main_camera_pane_t_ParamLimits

0xe81d,	// (0x0008429e) bg_popup_preview_window_pane_cp01_ParamLimits

0xe81d,	// (0x0008429e) bg_popup_preview_window_pane_cp01

0x44c9,	// (0x00079f4a) popup_phob_thumbnail2_window_g1_ParamLimits

0x44c9,	// (0x00079f4a) popup_phob_thumbnail2_window_g1

0xe5a2,	// (0x00084023) call2_cli_visual_pane

0x44f0,	// (0x00079f71) popup_call2_audio_conf_window_ParamLimits

0x44f0,	// (0x00079f71) popup_call2_audio_conf_window

0x4518,	// (0x00079f99) popup_call2_audio_first_window_ParamLimits

0x4518,	// (0x00079f99) popup_call2_audio_first_window

0x45ae,	// (0x0007a02f) popup_call2_audio_in_window_ParamLimits

0x45ae,	// (0x0007a02f) popup_call2_audio_in_window

0x45fa,	// (0x0007a07b) popup_call2_audio_out_window_ParamLimits

0x45fa,	// (0x0007a07b) popup_call2_audio_out_window

0x466c,	// (0x0007a0ed) popup_call2_audio_second_window_ParamLimits

0x466c,	// (0x0007a0ed) popup_call2_audio_second_window

0x46d2,	// (0x0007a153) popup_call2_audio_wait_window_ParamLimits

0x46d2,	// (0x0007a153) popup_call2_audio_wait_window

0xe5a2,	// (0x00084023) bg_popup_call2_act_pane_cp03

0xe7ff,	// (0x00084280) list_conf_pane_cp

0x470c,	// (0x0007a18d) popup_call2_audio_conf_window_t1

0x471a,	// (0x0007a19b) list_single_graphic_popup_conf2_pane_ParamLimits

0x471a,	// (0x0007a19b) list_single_graphic_popup_conf2_pane

0x3219,	// (0x00078c9a) list_highlight_pane_cp04

0x472d,	// (0x0007a1ae) list_single_graphic_popup_conf2_pane_g1

0x322a,	// (0x00078cab) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf536,	// (0x00084fb7) list_single_graphic_popup_conf2_pane_g

0x4737,	// (0x0007a1b8) list_single_graphic_popup_conf2_pane_t1

0x4745,	// (0x0007a1c6) bg_popup_call2_act_pane_cp01_ParamLimits

0x4745,	// (0x0007a1c6) bg_popup_call2_act_pane_cp01

0x47cf,	// (0x0007a250) call_type_pane_cp05_ParamLimits

0x47cf,	// (0x0007a250) call_type_pane_cp05

0x4823,	// (0x0007a2a4) popup_call2_audio_second_window_g1_ParamLimits

0x4823,	// (0x0007a2a4) popup_call2_audio_second_window_g1

0x4877,	// (0x0007a2f8) popup_call2_audio_second_window_g2_ParamLimits

0x4877,	// (0x0007a2f8) popup_call2_audio_second_window_g2

0x0002,

0xf53b,	// (0x00084fbc) popup_call2_audio_second_window_g_ParamLimits

0xf53b,	// (0x00084fbc) popup_call2_audio_second_window_g

0x48dc,	// (0x0007a35d) popup_call2_audio_second_window_t1_ParamLimits

0x48dc,	// (0x0007a35d) popup_call2_audio_second_window_t1

0x4997,	// (0x0007a418) popup_call2_audio_second_window_t2_ParamLimits

0x4997,	// (0x0007a418) popup_call2_audio_second_window_t2

0x49ea,	// (0x0007a46b) popup_call2_audio_second_window_t3_ParamLimits

0x49ea,	// (0x0007a46b) popup_call2_audio_second_window_t3

0x0003,

0xf542,	// (0x00084fc3) popup_call2_audio_second_window_t_ParamLimits

0xf542,	// (0x00084fc3) popup_call2_audio_second_window_t

0xe5a2,	// (0x00084023) bg_popup_call2_in_pane_cp02

0xe5ac,	// (0x0008402d) call_type_pane_cp04

0xe5b4,	// (0x00084035) popup_call2_audio_wait_window_g1

0xe5bc,	// (0x0008403d) popup_call2_audio_wait_window_g2

0x0001,

0xf11b,	// (0x00084b9c) popup_call2_audio_wait_window_g

0xe5c4,	// (0x00084045) popup_call2_audio_wait_window_t3

0x4add,	// (0x0007a55e) bg_popup_call2_act_pane_ParamLimits

0x4add,	// (0x0007a55e) bg_popup_call2_act_pane

0x4b9d,	// (0x0007a61e) call_type_pane_cp03_ParamLimits

0x4b9d,	// (0x0007a61e) call_type_pane_cp03

0x4c01,	// (0x0007a682) popup_call2_audio_first_window_g1_ParamLimits

0x4c01,	// (0x0007a682) popup_call2_audio_first_window_g1

0x4c71,	// (0x0007a6f2) popup_call2_audio_first_window_g2_ParamLimits

0x4c71,	// (0x0007a6f2) popup_call2_audio_first_window_g2

0x3a88,	// (0x00079509) popup_call2_audio_first_window_g3_ParamLimits

0x3a88,	// (0x00079509) popup_call2_audio_first_window_g3

0x0004,

0xf54b,	// (0x00084fcc) popup_call2_audio_first_window_g_ParamLimits

0xf54b,	// (0x00084fcc) popup_call2_audio_first_window_g

0x4d4f,	// (0x0007a7d0) popup_call2_audio_first_window_t1_ParamLimits

0x4d4f,	// (0x0007a7d0) popup_call2_audio_first_window_t1

0x4e52,	// (0x0007a8d3) popup_call2_audio_first_window_t4_ParamLimits

0x4e52,	// (0x0007a8d3) popup_call2_audio_first_window_t4

0x4f35,	// (0x0007a9b6) popup_call2_audio_first_window_t5_ParamLimits

0x4f35,	// (0x0007a9b6) popup_call2_audio_first_window_t5

0x0003,

0xf556,	// (0x00084fd7) popup_call2_audio_first_window_t_ParamLimits

0xf556,	// (0x00084fd7) popup_call2_audio_first_window_t

0xe815,	// (0x00084296) bg_popup_call2_act_pane_g1

0x5656,	// (0x0007b0d7) popup_cale_lunar_info_window_t1

0x5664,	// (0x0007b0e5) popup_cale_lunar_info_window_t2

0x5672,	// (0x0007b0f3) popup_cale_lunar_info_window_t3

0xe5a2,	// (0x00084023) bg_popup_call2_bubble_pane

0x5036,	// (0x0007aab7) bg_popup_call2_in_pane_cp01_ParamLimits

0x5036,	// (0x0007aab7) bg_popup_call2_in_pane_cp01

0xe27e,	// (0x00083cff) call_type_pane_cp02

0x507e,	// (0x0007aaff) popup_call2_audio_out_window_g1_ParamLimits

0x507e,	// (0x0007aaff) popup_call2_audio_out_window_g1

0x50aa,	// (0x0007ab2b) popup_call2_audio_out_window_g2_ParamLimits

0x50aa,	// (0x0007ab2b) popup_call2_audio_out_window_g2

0x50d2,	// (0x0007ab53) popup_call2_audio_out_window_g3_ParamLimits

0x50d2,	// (0x0007ab53) popup_call2_audio_out_window_g3

0x0003,

0xf55f,	// (0x00084fe0) popup_call2_audio_out_window_g_ParamLimits

0xf55f,	// (0x00084fe0) popup_call2_audio_out_window_g

0x510d,	// (0x0007ab8e) popup_call2_audio_out_window_t1_ParamLimits

0x510d,	// (0x0007ab8e) popup_call2_audio_out_window_t1

0x516c,	// (0x0007abed) popup_call2_audio_out_window_t2_ParamLimits

0x516c,	// (0x0007abed) popup_call2_audio_out_window_t2

0x51c0,	// (0x0007ac41) popup_call2_audio_out_window_t3_ParamLimits

0x51c0,	// (0x0007ac41) popup_call2_audio_out_window_t3

0x51d6,	// (0x0007ac57) popup_call2_audio_out_window_t4_ParamLimits

0x51d6,	// (0x0007ac57) popup_call2_audio_out_window_t4

0x51ec,	// (0x0007ac6d) popup_call2_audio_out_window_t5_ParamLimits

0x51ec,	// (0x0007ac6d) popup_call2_audio_out_window_t5

0x0005,

0xf568,	// (0x00084fe9) popup_call2_audio_out_window_t_ParamLimits

0xf568,	// (0x00084fe9) popup_call2_audio_out_window_t

0x5250,	// (0x0007acd1) bg_popup_call2_in_pane_ParamLimits

0x5250,	// (0x0007acd1) bg_popup_call2_in_pane

0x52ac,	// (0x0007ad2d) popup_call2_audio_in_window_g1_ParamLimits

0x52ac,	// (0x0007ad2d) popup_call2_audio_in_window_g1

0x52e4,	// (0x0007ad65) popup_call2_audio_in_window_g2_ParamLimits

0x52e4,	// (0x0007ad65) popup_call2_audio_in_window_g2

0x531c,	// (0x0007ad9d) popup_call2_audio_in_window_g3_ParamLimits

0x531c,	// (0x0007ad9d) popup_call2_audio_in_window_g3

0x0003,

0xf575,	// (0x00084ff6) popup_call2_audio_in_window_g_ParamLimits

0xf575,	// (0x00084ff6) popup_call2_audio_in_window_g

0x5374,	// (0x0007adf5) popup_call2_audio_in_window_t1_ParamLimits

0x5374,	// (0x0007adf5) popup_call2_audio_in_window_t1

0x53f4,	// (0x0007ae75) popup_call2_audio_in_window_t2_ParamLimits

0x53f4,	// (0x0007ae75) popup_call2_audio_in_window_t2

0x5474,	// (0x0007aef5) popup_call2_audio_in_window_t3_ParamLimits

0x5474,	// (0x0007aef5) popup_call2_audio_in_window_t3

0x548e,	// (0x0007af0f) popup_call2_audio_in_window_t4_ParamLimits

0x548e,	// (0x0007af0f) popup_call2_audio_in_window_t4

0x54a0,	// (0x0007af21) popup_call2_audio_in_window_t5_ParamLimits

0x54a0,	// (0x0007af21) popup_call2_audio_in_window_t5

0x54b5,	// (0x0007af36) popup_call2_audio_in_window_t6_ParamLimits

0x54b5,	// (0x0007af36) popup_call2_audio_in_window_t6

0x0005,

0xf57e,	// (0x00084fff) popup_call2_audio_in_window_t_ParamLimits

0xf57e,	// (0x00084fff) popup_call2_audio_in_window_t

0xe815,	// (0x00084296) bg_popup_call2_in_pane_g1

0x5680,	// (0x0007b101) popup_cale_lunar_info_window_t4

0x0003,

0xf5df,	// (0x00085060) popup_cale_lunar_info_window_t

0xe81d,	// (0x0008429e) bg_popup_call2_rect_pane_ParamLimits

0xe81d,	// (0x0008429e) bg_popup_call2_rect_pane

0xe5a2,	// (0x00084023) call2_cli_visual_graphic_pane

0xe5a2,	// (0x00084023) call2_cli_visual_text_pane

0xb0b4,	// (0x00080b35) smil_status_volume_pane_g3

0x0002,

0xe93d,	// (0x000843be) call2_cli_visual_graphic_pane_g1

0xe93d,	// (0x000843be) call2_cli_visual_graphic_pane_g2

0xe93d,	// (0x000843be) call2_cli_visual_graphic_pane_g3

0x0002,

0x0102,	// (0x00075b83) call2_cli_visual_graphic_pane_g

0x54e9,	// (0x0007af6a) bg_popup_call2_rect_pane_g1

0xe9db,	// (0x0008445c) bg_popup_call2_rect_pane_g2

0x54f1,	// (0x0007af72) bg_popup_call2_rect_pane_g3

0x54f9,	// (0x0007af7a) bg_popup_call2_rect_pane_g4

0x5501,	// (0x0007af82) bg_popup_call2_rect_pane_g5

0x5509,	// (0x0007af8a) bg_popup_call2_rect_pane_g6

0x5511,	// (0x0007af92) bg_popup_call2_rect_pane_g7

0x5519,	// (0x0007af9a) bg_popup_call2_rect_pane_g8

0x5521,	// (0x0007afa2) bg_popup_call2_rect_pane_g9

0x0008,

0xf58b,	// (0x0008500c) bg_popup_call2_rect_pane_g

0x5529,	// (0x0007afaa) bg_popup_call2_bubble_pane_g1

0x5531,	// (0x0007afb2) bg_popup_call2_bubble_pane_g2

0x5539,	// (0x0007afba) bg_popup_call2_bubble_pane_g3

0x5541,	// (0x0007afc2) bg_popup_call2_bubble_pane_g4

0x5549,	// (0x0007afca) bg_popup_call2_bubble_pane_g5

0x5551,	// (0x0007afd2) bg_popup_call2_bubble_pane_g6

0x5559,	// (0x0007afda) bg_popup_call2_bubble_pane_g7

0x5561,	// (0x0007afe2) bg_popup_call2_bubble_pane_g8

0x5569,	// (0x0007afea) bg_popup_call2_bubble_pane_g9

0x0008,

0xf59e,	// (0x0008501f) bg_popup_call2_bubble_pane_g

0x1bf6,	// (0x00077677) aid_cale_week_size_cell_pane

0x20cc,	// (0x00077b4d) aid_cams_cif_uncrop_pane_ParamLimits

0x20cc,	// (0x00077b4d) aid_cams_cif_uncrop_pane

0x2285,	// (0x00077d06) aid_cams_size_cell_ParamLimits

0x2285,	// (0x00077d06) aid_cams_size_cell

0x2299,	// (0x00077d1a) grid_cams_pane_ParamLimits

0x22b3,	// (0x00077d34) linegrid_cams_pane_ParamLimits

0x2396,	// (0x00077e17) call_video_pane_t1

0x23b0,	// (0x00077e31) call_video_pane_t2

0x0001,

0xf292,	// (0x00084d13) call_video_pane_t

0x27fb,	// (0x0007827c) aid_cale_month_size_cell_pane_ParamLimits

0x27fb,	// (0x0007827c) aid_cale_month_size_cell_pane

0xf628,	// (0x000850a9) smil_status_volume_pane_g

0xb0c1,	// (0x00080b42) volume_smil_pane_ParamLimits

0xac03,	// (0x00080684) aid_popup2_width_pane

0x1b75,	// (0x000775f6) cell_qdial_pane_g4_ParamLimits

0x1b75,	// (0x000775f6) cell_qdial_pane_g4

0x350e,	// (0x00078f8f) aid_blid_cardinal_pane_ParamLimits

0x351e,	// (0x00078f9f) aid_blid_destination_pane_ParamLimits

0x351e,	// (0x00078f9f) aid_blid_destination_pane

0xe81d,	// (0x0008429e) bg_popup_call_poc_act_pane_ParamLimits

0xe81d,	// (0x0008429e) bg_popup_call_poc_act_pane

0xe81d,	// (0x0008429e) bg_popup_call_poc_inact_pane_ParamLimits

0xe81d,	// (0x0008429e) bg_popup_call_poc_inact_pane

0x5579,	// (0x0007affa) bg_popup_call_poc_act_pane_g1

0x5581,	// (0x0007b002) bg_popup_call_poc_act_pane_g2

0x5589,	// (0x0007b00a) bg_popup_call_poc_act_pane_g3

0x5541,	// (0x0007afc2) bg_popup_call_poc_act_pane_g4

0x5549,	// (0x0007afca) bg_popup_call_poc_act_pane_g5

0x5591,	// (0x0007b012) bg_popup_call_poc_act_pane_g6

0x5559,	// (0x0007afda) bg_popup_call_poc_act_pane_g7

0x5599,	// (0x0007b01a) bg_popup_call_poc_act_pane_g8

0xe5a2,	// (0x00084023) main_usb_pane

0x5a9e,	// (0x0007b51f) popup_cale_lunar_info_window

0x267b,	// (0x000780fc) im_reading_pane_t1_ParamLimits

0xeb9a,	// (0x0008461b) list_im_pane_ParamLimits

0xebab,	// (0x0008462c) scroll_pane_cp07_ParamLimits

0xe5a2,	// (0x00084023) grid_highlight_pane_cp012

0xe81d,	// (0x0008429e) mup_scale_pane_ParamLimits

0x3f58,	// (0x000799d9) main_usb_pane_g1_ParamLimits

0x3f58,	// (0x000799d9) main_usb_pane_g1

0x55b9,	// (0x0007b03a) main_usb_pane_g2_ParamLimits

0x55b9,	// (0x0007b03a) main_usb_pane_g2

0x0001,

0xf5c8,	// (0x00085049) main_usb_pane_g_ParamLimits

0xf5c8,	// (0x00085049) main_usb_pane_g

0x55cf,	// (0x0007b050) main_usb_pane_t1_ParamLimits

0x55cf,	// (0x0007b050) main_usb_pane_t1

0x55e1,	// (0x0007b062) main_usb_pane_t2_ParamLimits

0x55e1,	// (0x0007b062) main_usb_pane_t2

0x55f3,	// (0x0007b074) main_usb_pane_t3_ParamLimits

0x55f3,	// (0x0007b074) main_usb_pane_t3

0x5605,	// (0x0007b086) main_usb_pane_t4_ParamLimits

0x5605,	// (0x0007b086) main_usb_pane_t4

0x561a,	// (0x0007b09b) main_usb_pane_t5_ParamLimits

0x561a,	// (0x0007b09b) main_usb_pane_t5

0x562f,	// (0x0007b0b0) main_usb_pane_t6_ParamLimits

0x562f,	// (0x0007b0b0) main_usb_pane_t6

0x0005,

0xf5cd,	// (0x0008504e) main_usb_pane_t_ParamLimits

0x34ad,	// (0x00078f2e) aid_text_placing

0x34b8,	// (0x00078f39) main_location2_pane_t1_ParamLimits

0x34ce,	// (0x00078f4f) main_location2_pane_t2_ParamLimits

0x34e4,	// (0x00078f65) main_location2_pane_t3_ParamLimits

0x34fa,	// (0x00078f7b) main_location2_pane_t4_ParamLimits

0x34fa,	// (0x00078f7b) main_location2_pane_t4

0xf3f3,	// (0x00084e74) main_location2_pane_t_ParamLimits

0xe859,	// (0x000842da) find_pinb_pane_g2_ParamLimits

0xe859,	// (0x000842da) find_pinb_pane_g2

0x0001,

0xf141,	// (0x00084bc2) find_pinb_pane_g_ParamLimits

0xf141,	// (0x00084bc2) find_pinb_pane_g

0xe865,	// (0x000842e6) find_pinb_pane_t1_ParamLimits

0xe877,	// (0x000842f8) find_pinb_pane_t2_ParamLimits

0xf146,	// (0x00084bc7) find_pinb_pane_t_ParamLimits

0xe5a2,	// (0x00084023) main_call3_pane

0x2b6f,	// (0x000785f0) cale_month_day_heading_pane_t1_ParamLimits

0x2bcd,	// (0x0007864e) cale_month_day_heading_pane_t2_ParamLimits

0x2c32,	// (0x000786b3) cale_month_day_heading_pane_t3_ParamLimits

0x2c97,	// (0x00078718) cale_month_day_heading_pane_t4_ParamLimits

0x2cfc,	// (0x0007877d) cale_month_day_heading_pane_t5_ParamLimits

0x2d61,	// (0x000787e2) cale_month_day_heading_pane_t6_ParamLimits

0x2dc6,	// (0x00078847) cale_month_day_heading_pane_t7_ParamLimits

0xf2ca,	// (0x00084d4b) cale_month_day_heading_pane_t_ParamLimits

0xedeb,	// (0x0008486c) smil_status_volume_pane

0x3f2c,	// (0x000799ad) postcard_address_pane_ParamLimits

0x3f2c,	// (0x000799ad) postcard_address_pane

0x3f42,	// (0x000799c3) postcard_message_pane_ParamLimits

0x3f42,	// (0x000799c3) postcard_message_pane

0x54ca,	// (0x0007af4b) call2_cli_visual_pane_t1_ParamLimits

0x54ca,	// (0x0007af4b) call2_cli_visual_pane_t1

0x6040,	// (0x0007bac1) postcard_message_pane_t1_ParamLimits

0x6040,	// (0x0007bac1) postcard_message_pane_t1

0x6029,	// (0x0007baaa) postcard_address_pane_t1_ParamLimits

0x6029,	// (0x0007baaa) postcard_address_pane_t1

0x6015,	// (0x0007ba96) popup_call3_audio_in_window_ParamLimits

0x6015,	// (0x0007ba96) popup_call3_audio_in_window

0x5e9a,	// (0x0007b91b) bg_popup_call3_in_pane_ParamLimits

0x5e9a,	// (0x0007b91b) bg_popup_call3_in_pane

0x5f16,	// (0x0007b997) popup_call3_audio_in_window_g1_ParamLimits

0x5f16,	// (0x0007b997) popup_call3_audio_in_window_g1

0x5f36,	// (0x0007b9b7) popup_call3_audio_in_window_g2_ParamLimits

0x5f36,	// (0x0007b9b7) popup_call3_audio_in_window_g2

0x5f56,	// (0x0007b9d7) popup_call3_audio_in_window_g3_ParamLimits

0x5f56,	// (0x0007b9d7) popup_call3_audio_in_window_g3

0x0003,

0xf62f,	// (0x000850b0) popup_call3_audio_in_window_g_ParamLimits

0xf62f,	// (0x000850b0) popup_call3_audio_in_window_g

0x5f87,	// (0x0007ba08) popup_call3_audio_in_window_t1_ParamLimits

0x5f87,	// (0x0007ba08) popup_call3_audio_in_window_t1

0x5fc5,	// (0x0007ba46) popup_call3_audio_in_window_t2_ParamLimits

0x5fc5,	// (0x0007ba46) popup_call3_audio_in_window_t2

0x6003,	// (0x0007ba84) popup_call3_audio_in_window_t3_ParamLimits

0x6003,	// (0x0007ba84) popup_call3_audio_in_window_t3

0x0002,

0xf638,	// (0x000850b9) popup_call3_audio_in_window_t_ParamLimits

0xf638,	// (0x000850b9) popup_call3_audio_in_window_t

0x3782,	// (0x00079203) bg_popup_call3_rect_pane

0x54e9,	// (0x0007af6a) bg_popup_call3_rect_pane_g1

0xe9db,	// (0x0008445c) bg_popup_call3_rect_pane_g2

0x54f1,	// (0x0007af72) bg_popup_call3_rect_pane_g3

0x54f9,	// (0x0007af7a) bg_popup_call3_rect_pane_g4

0x5501,	// (0x0007af82) bg_popup_call3_rect_pane_g5

0x5509,	// (0x0007af8a) bg_popup_call3_rect_pane_g6

0x5511,	// (0x0007af92) bg_popup_call3_rect_pane_g7

0x3a80,	// (0x00079501) mup_visualizer_osc_pane

0x3a96,	// (0x00079517) mup_visualizer_spec_pane

0x5eca,	// (0x0007b94b) call3_video_qcif_pane_ParamLimits

0x5eca,	// (0x0007b94b) call3_video_qcif_pane

0x5edd,	// (0x0007b95e) call3_video_qcif_uncrop_pane_ParamLimits

0x5edd,	// (0x0007b95e) call3_video_qcif_uncrop_pane

0x5eed,	// (0x0007b96e) call3_video_subqcif_pane_ParamLimits

0x5eed,	// (0x0007b96e) call3_video_subqcif_pane

0x5f03,	// (0x0007b984) call3_video_subqcif_uncrop_pane_ParamLimits

0x5f03,	// (0x0007b984) call3_video_subqcif_uncrop_pane

0x5f76,	// (0x0007b9f7) popup_call3_audio_in_window_g4_ParamLimits

0x5f76,	// (0x0007b9f7) popup_call3_audio_in_window_g4

0x5e5b,	// (0x0007b8dc) mup_spec_half_pane

0x5e64,	// (0x0007b8e5) mup_spec_half_pane_cp

0x5e49,	// (0x0007b8ca) mup_osc_middle_pane

0x5e52,	// (0x0007b8d3) mup_visualizer_osc_pane_g1

0x5e29,	// (0x0007b8aa) mup_spec_bar_pane_ParamLimits

0x5e29,	// (0x0007b8aa) mup_spec_bar_pane

0x5e16,	// (0x0007b897) mup_spec_bar_pane_g1

0x5e20,	// (0x0007b8a1) mup_spec_bar_pane_g2

0x0001,

0xf623,	// (0x000850a4) mup_spec_bar_pane_g

0x1bf6,	// (0x00077677) aid_cale_week_size_cell_pane_ParamLimits

0x1c09,	// (0x0007768a) bg_cale_heading_pane_ParamLimits

0xea0f,	// (0x00084490) bg_cale_pane_cp01_ParamLimits

0x1c25,	// (0x000776a6) cale_week_corner_pane_ParamLimits

0x1c3b,	// (0x000776bc) cale_week_day_heading_pane_ParamLimits

0x1c57,	// (0x000776d8) cale_week_scroll_pane_g1_ParamLimits

0x1c70,	// (0x000776f1) cale_week_scroll_pane_g2_ParamLimits

0x1c81,	// (0x00077702) cale_week_scroll_pane_g3_ParamLimits

0x1c92,	// (0x00077713) cale_week_scroll_pane_g4_ParamLimits

0x1ca3,	// (0x00077724) cale_week_scroll_pane_g5_ParamLimits

0x1cb4,	// (0x00077735) cale_week_scroll_pane_g6_ParamLimits

0x1cc5,	// (0x00077746) cale_week_scroll_pane_g7_ParamLimits

0x1cd6,	// (0x00077757) cale_week_scroll_pane_g8_ParamLimits

0x1ce7,	// (0x00077768) cale_week_scroll_pane_g9_ParamLimits

0x1cf8,	// (0x00077779) cale_week_scroll_pane_g10_ParamLimits

0x1d09,	// (0x0007778a) cale_week_scroll_pane_g11_ParamLimits

0x1d1a,	// (0x0007779b) cale_week_scroll_pane_g12_ParamLimits

0x1d2b,	// (0x000777ac) cale_week_scroll_pane_g13_ParamLimits

0x1d44,	// (0x000777c5) cale_week_scroll_pane_g14_ParamLimits

0x1d5d,	// (0x000777de) cale_week_scroll_pane_g15_ParamLimits

0xf1d2,	// (0x00084c53) cale_week_scroll_pane_g_ParamLimits

0x1d76,	// (0x000777f7) cale_week_time_pane_ParamLimits

0x1d87,	// (0x00077808) grid_cale_week_pane_ParamLimits

0xea28,	// (0x000844a9) listscroll_cale_week_pane_t1

0x1da2,	// (0x00077823) scroll_pane_cp08_ParamLimits

0x284c,	// (0x000782cd) cale_month_corner_pane_ParamLimits

0xedc1,	// (0x00084842) cale_month_pane_t1

0x2b30,	// (0x000785b1) cale_month_week_pane_ParamLimits

0x314e,	// (0x00078bcf) popup_call_status_window_g1_ParamLimits

0x3162,	// (0x00078be3) popup_call_status_window_g2_ParamLimits

0x3176,	// (0x00078bf7) popup_call_status_window_g3_ParamLimits

0xf37a,	// (0x00084dfb) popup_call_status_window_g_ParamLimits

0xf0dc,	// (0x00084b5d) aid_call2_pane

0x0bde,	// (0x0007665f) msg_header_pane_g1

0x3f2c,	// (0x000799ad) postcard_address2_pane_ParamLimits

0x3f2c,	// (0x000799ad) postcard_address2_pane

0x3f42,	// (0x000799c3) postcard_message2_pane_ParamLimits

0x3f42,	// (0x000799c3) postcard_message2_pane

0x5d8e,	// (0x0007b80f) message2_row_pane_ParamLimits

0x5d8e,	// (0x0007b80f) message2_row_pane

0x5db1,	// (0x0007b832) address2_row_pane_ParamLimits

0x5db1,	// (0x0007b832) address2_row_pane

0x5dc4,	// (0x0007b845) postcard_message2_row_pane_g1

0x5dcc,	// (0x0007b84d) postcard_message2_row_pane_t1

0x5dc4,	// (0x0007b845) address2_row_pane_g1

0x5dcc,	// (0x0007b84d) address2_row_pane_t1

0x1fb0,	// (0x00077a31) aid_size_cell_vorec

0xe5a2,	// (0x00084023) main_rss_pane

0x5dda,	// (0x0007b85b) rss_list_single_pane_ParamLimits

0x5dda,	// (0x0007b85b) rss_list_single_pane

0x5dfa,	// (0x0007b87b) rss_list_single_pane_t1

0x5e08,	// (0x0007b889) rss_list_single_pane_t2

0x0001,

0xf61e,	// (0x0008509f) rss_list_single_pane_t

0xe5a2,	// (0x00084023) main_camera2_pane

0xe5a2,	// (0x00084023) main_video2_pane

0x60af,	// (0x0007bb30) cams_zoom_pane_cp2_ParamLimits

0x60af,	// (0x0007bb30) cams_zoom_pane_cp2

0x60c6,	// (0x0007bb47) image2_vga_pane_ParamLimits

0x60c6,	// (0x0007bb47) image2_vga_pane

0x610e,	// (0x0007bb8f) main_camera2_pane_g1_ParamLimits

0x610e,	// (0x0007bb8f) main_camera2_pane_g1

0x612e,	// (0x0007bbaf) main_camera2_pane_g2_ParamLimits

0x612e,	// (0x0007bbaf) main_camera2_pane_g2

0x6145,	// (0x0007bbc6) main_camera2_pane_g3_ParamLimits

0x6145,	// (0x0007bbc6) main_camera2_pane_g3

0x615c,	// (0x0007bbdd) main_camera2_pane_g4_ParamLimits

0x615c,	// (0x0007bbdd) main_camera2_pane_g4

0x6173,	// (0x0007bbf4) main_camera2_pane_g5_ParamLimits

0x6173,	// (0x0007bbf4) main_camera2_pane_g5

0x618a,	// (0x0007bc0b) main_camera2_pane_g6_ParamLimits

0x618a,	// (0x0007bc0b) main_camera2_pane_g6

0x61a1,	// (0x0007bc22) main_camera2_pane_g7_ParamLimits

0x61a1,	// (0x0007bc22) main_camera2_pane_g7

0x61b8,	// (0x0007bc39) main_camera2_pane_g8_ParamLimits

0x61b8,	// (0x0007bc39) main_camera2_pane_g8

0x0008,

0xf63f,	// (0x000850c0) main_camera2_pane_g_ParamLimits

0xf63f,	// (0x000850c0) main_camera2_pane_g

0x61e6,	// (0x0007bc67) main_camera2_pane_t1_ParamLimits

0x61e6,	// (0x0007bc67) main_camera2_pane_t1

0x621b,	// (0x0007bc9c) main_camera2_pane_t2_ParamLimits

0x621b,	// (0x0007bc9c) main_camera2_pane_t2

0x6238,	// (0x0007bcb9) main_camera2_pane_t3_ParamLimits

0x6238,	// (0x0007bcb9) main_camera2_pane_t3

0x6296,	// (0x0007bd17) main_camera2_pane_t4_ParamLimits

0x6296,	// (0x0007bd17) main_camera2_pane_t4

0x0006,

0xf652,	// (0x000850d3) main_camera2_pane_t_ParamLimits

0xf652,	// (0x000850d3) main_camera2_pane_t

0x631f,	// (0x0007bda0) cams_zoom_pane_cp4_ParamLimits

0x631f,	// (0x0007bda0) cams_zoom_pane_cp4

0x6335,	// (0x0007bdb6) image2_cif_pane_ParamLimits

0x6335,	// (0x0007bdb6) image2_cif_pane

0x6360,	// (0x0007bde1) image2_subqcif_pane_ParamLimits

0x6360,	// (0x0007bde1) image2_subqcif_pane

0x637b,	// (0x0007bdfc) main_video2_pane_g1_ParamLimits

0x637b,	// (0x0007bdfc) main_video2_pane_g1

0x6395,	// (0x0007be16) main_video2_pane_g2_ParamLimits

0x6395,	// (0x0007be16) main_video2_pane_g2

0x63ab,	// (0x0007be2c) main_video2_pane_g3_ParamLimits

0x63ab,	// (0x0007be2c) main_video2_pane_g3

0x63c1,	// (0x0007be42) main_video2_pane_g4_ParamLimits

0x63c1,	// (0x0007be42) main_video2_pane_g4

0x63d7,	// (0x0007be58) main_video2_pane_g5_ParamLimits

0x63d7,	// (0x0007be58) main_video2_pane_g5

0x63ed,	// (0x0007be6e) main_video2_pane_g6_ParamLimits

0x63ed,	// (0x0007be6e) main_video2_pane_g6

0x0005,

0xf661,	// (0x000850e2) main_video2_pane_g_ParamLimits

0xf661,	// (0x000850e2) main_video2_pane_g

0x6407,	// (0x0007be88) main_video2_pane_t1_ParamLimits

0x6407,	// (0x0007be88) main_video2_pane_t1

0x642b,	// (0x0007beac) main_video2_pane_t2_ParamLimits

0x642b,	// (0x0007beac) main_video2_pane_t2

0x647b,	// (0x0007befc) main_video2_pane_t3_ParamLimits

0x647b,	// (0x0007befc) main_video2_pane_t3

0x0002,

0xf66e,	// (0x000850ef) main_video2_pane_t_ParamLimits

0xf66e,	// (0x000850ef) main_video2_pane_t

0x57db,	// (0x0007b25c) call_muted_g2

0x0001,

0xf610,	// (0x00085091) call_muted_g

0xe5a2,	// (0x00084023) main_mup2_pane

0x64c3,	// (0x0007bf44) main_mup2_pane_g1_ParamLimits

0x64c3,	// (0x0007bf44) main_mup2_pane_g1

0x64cf,	// (0x0007bf50) main_mup2_pane_g2_ParamLimits

0x64cf,	// (0x0007bf50) main_mup2_pane_g2

0xb1a6,	// (0x00080c27) main_mup_pane_g13_cp1

0xb1ae,	// (0x00080c2f) mup_volume_pane_cp1

0x64ed,	// (0x0007bf6e) main_mup2_pane_g4_ParamLimits

0x64ed,	// (0x0007bf6e) main_mup2_pane_g4

0x64ff,	// (0x0007bf80) main_mup2_pane_g5_ParamLimits

0x64ff,	// (0x0007bf80) main_mup2_pane_g5

0x6511,	// (0x0007bf92) main_mup2_pane_g6_ParamLimits

0x6511,	// (0x0007bf92) main_mup2_pane_g6

0x6523,	// (0x0007bfa4) main_mup2_pane_g7_ParamLimits

0x6523,	// (0x0007bfa4) main_mup2_pane_g7

0x0006,

0xf675,	// (0x000850f6) main_mup2_pane_g_ParamLimits

0xf675,	// (0x000850f6) main_mup2_pane_g

0x653b,	// (0x0007bfbc) main_mup2_pane_t1_ParamLimits

0x653b,	// (0x0007bfbc) main_mup2_pane_t1

0x6551,	// (0x0007bfd2) main_mup2_pane_t2_ParamLimits

0x6551,	// (0x0007bfd2) main_mup2_pane_t2

0x6567,	// (0x0007bfe8) main_mup2_pane_t3_ParamLimits

0x6567,	// (0x0007bfe8) main_mup2_pane_t3

0x657d,	// (0x0007bffe) main_mup2_pane_t4_ParamLimits

0x657d,	// (0x0007bffe) main_mup2_pane_t4

0x6595,	// (0x0007c016) main_mup2_pane_t5_ParamLimits

0x6595,	// (0x0007c016) main_mup2_pane_t5

0x65ad,	// (0x0007c02e) main_mup2_pane_t6_ParamLimits

0x65ad,	// (0x0007c02e) main_mup2_pane_t6

0x0005,

0xf684,	// (0x00085105) main_mup2_pane_t_ParamLimits

0xf684,	// (0x00085105) main_mup2_pane_t

0x65dd,	// (0x0007c05e) mup2_visualizer_pane_ParamLimits

0x65dd,	// (0x0007c05e) mup2_visualizer_pane

0x660b,	// (0x0007c08c) mup_progress_pane_cp_ParamLimits

0x660b,	// (0x0007c08c) mup_progress_pane_cp

0xb188,	// (0x00080c09) mup_volume_pane_cp_ParamLimits

0xb188,	// (0x00080c09) mup_volume_pane_cp

0x6621,	// (0x0007c0a2) mup2_visualizer_pane_g1_ParamLimits

0x6621,	// (0x0007c0a2) mup2_visualizer_pane_g1

0x6636,	// (0x0007c0b7) mup2_visualizer_pane_g2_ParamLimits

0x6636,	// (0x0007c0b7) mup2_visualizer_pane_g2

0x6642,	// (0x0007c0c3) mup2_visualizer_pane_g3_ParamLimits

0x6642,	// (0x0007c0c3) mup2_visualizer_pane_g3

0x0002,

0xf691,	// (0x00085112) mup2_visualizer_pane_g_ParamLimits

0xf691,	// (0x00085112) mup2_visualizer_pane_g

0x4322,	// (0x00079da3) aid_size_cell_fmradio

0x59bc,	// (0x0007b43d) aid_height_parent_landcape

0xec29,	// (0x000846aa) wml_content_pane_cp

0xec31,	// (0x000846b2) wml_tabs_pane

0xec3a,	// (0x000846bb) popup_wml_miniature_window

0xec42,	// (0x000846c3) scroll_pane_cp021

0xec56,	// (0x000846d7) wml_content_pane_comp8

0xe5a2,	// (0x00084023) bg_popup_sub_pane_cp05

0x6660,	// (0x0007c0e1) popup_wml_miniature_window_g1

0x6668,	// (0x0007c0e9) wml_miniature_view_pane

0x6670,	// (0x0007c0f1) aid_size_wml_view

0x6678,	// (0x0007c0f9) wml_miniature_view_pane_g1

0x6681,	// (0x0007c102) wml_miniature_view_pane_g2

0x668a,	// (0x0007c10b) wml_miniature_view_pane_g3

0x6692,	// (0x0007c113) wml_miniature_view_pane_g4

0x669a,	// (0x0007c11b) wml_miniature_view_pane_g5

0x66a2,	// (0x0007c123) wml_miniature_view_pane_g6

0x66aa,	// (0x0007c12b) wml_miniature_view_pane_g7

0x66b2,	// (0x0007c133) wml_miniature_view_pane_g8

0x0007,

0xf698,	// (0x00085119) wml_miniature_view_pane_g

0x66ba,	// (0x0007c13b) background_graphic_ParamLimits

0x66ba,	// (0x0007c13b) background_graphic

0xb101,	// (0x00080b82) wml_tabs_2_pane

0xb10a,	// (0x00080b8b) wml_tabs_3_pane_ParamLimits

0xb10a,	// (0x00080b8b) wml_tabs_3_pane

0xb11c,	// (0x00080b9d) wml_tabs_4_pane_ParamLimits

0xb11c,	// (0x00080b9d) wml_tabs_4_pane

0xb132,	// (0x00080bb3) wml_tabs_5_pane_ParamLimits

0xb132,	// (0x00080bb3) wml_tabs_5_pane

0xb14c,	// (0x00080bcd) wml_tabs_pane_g2_ParamLimits

0xb14c,	// (0x00080bcd) wml_tabs_pane_g2

0xb160,	// (0x00080be1) wml_tabs_pane_g3_ParamLimits

0xb160,	// (0x00080be1) wml_tabs_pane_g3

0x66c6,	// (0x0007c147) wml_tabs_2_active_pane_ParamLimits

0x66c6,	// (0x0007c147) wml_tabs_2_active_pane

0x66da,	// (0x0007c15b) wml_tabs_2_passive_pane_ParamLimits

0x66da,	// (0x0007c15b) wml_tabs_2_passive_pane

0x66ee,	// (0x0007c16f) wml_tabs_3_active_pane_cp_ParamLimits

0x66ee,	// (0x0007c16f) wml_tabs_3_active_pane_cp

0x6703,	// (0x0007c184) wml_tabs_3_passive_pane_ParamLimits

0x6703,	// (0x0007c184) wml_tabs_3_passive_pane

0x6716,	// (0x0007c197) wml_tabs_3_passive_pane_cp_ParamLimits

0x6716,	// (0x0007c197) wml_tabs_3_passive_pane_cp

0x672d,	// (0x0007c1ae) tabs_4_active_pane

0x6735,	// (0x0007c1b6) tabs_4_passive_pane

0x673f,	// (0x0007c1c0) tabs_4_passive_pane_cp

0x6747,	// (0x0007c1c8) tabs_4_passive_pane_cp2

0x5571,	// (0x0007aff2) aid_height_text

0x3a52,	// (0x000794d3) mup_volume_cont_pane_ParamLimits

0x3a52,	// (0x000794d3) mup_volume_cont_pane

0x1811,	// (0x00077292) aid_size_cell_pinb

0x181b,	// (0x0007729c) aid_size_list_pinb

0x65f7,	// (0x0007c078) mup2_volume_cont_pane_ParamLimits

0x65f7,	// (0x0007c078) mup2_volume_cont_pane

0xb174,	// (0x00080bf5) mup2_volume_cont_pane_g1_ParamLimits

0xb174,	// (0x00080bf5) mup2_volume_cont_pane_g1

0x14f6,	// (0x00076f77) aid_size_cell_touch_ParamLimits

0x14f6,	// (0x00076f77) aid_size_cell_touch

0x1700,	// (0x00077181) touch_pane_ParamLimits

0x1700,	// (0x00077181) touch_pane

0xabf1,	// (0x00080672) main_rss2_pane

0xb1b6,	// (0x00080c37) listscroll_rss2_pane

0xb1bf,	// (0x00080c40) rss2_navigation_pane

0xb1c7,	// (0x00080c48) list_rss2_pane

0x3331,	// (0x00078db2) scroll_pane_cp22

0xb1cf,	// (0x00080c50) rss2_navigation_pane_g1

0xb1d8,	// (0x00080c59) rss2_navigation_pane_g2

0xb1e0,	// (0x00080c61) rss2_navigation_pane_g3

0x0002,

0xf6a9,	// (0x0008512a) rss2_navigation_pane_g

0xb1e8,	// (0x00080c69) rss2_navigation_pane_t1

0x6751,	// (0x0007c1d2) rss2_list_single_pane_ParamLimits

0x6751,	// (0x0007c1d2) rss2_list_single_pane

0xb1f6,	// (0x00080c77) rss2_list_single_pane_t2

0xb204,	// (0x00080c85) rss2_list_single_pane_t3_ParamLimits

0xb204,	// (0x00080c85) rss2_list_single_pane_t3

0xb221,	// (0x00080ca2) rss2_list_single_pane_t4

0x2f92,	// (0x00078a13) smil_status_pane_g1

0xac6a,	// (0x000806eb) main_image2_pane_ParamLimits

0xac6a,	// (0x000806eb) main_image2_pane

0x61cf,	// (0x0007bc50) main_camera2_pane_g9_ParamLimits

0x61cf,	// (0x0007bc50) main_camera2_pane_g9

0x62eb,	// (0x0007bd6c) main_camera2_pane_t5_ParamLimits

0x62eb,	// (0x0007bd6c) main_camera2_pane_t5

0xb0d6,	// (0x00080b57) main_camera2_pane_t6_ParamLimits

0xb0d6,	// (0x00080b57) main_camera2_pane_t6

0x676b,	// (0x0007c1ec) main_image2_pane_g1_ParamLimits

0x676b,	// (0x0007c1ec) main_image2_pane_g1

0x42cc,	// (0x00079d4d) smil2_video_pane_ParamLimits

0x42cc,	// (0x00079d4d) smil2_video_pane

0xac1f,	// (0x000806a0) aid_zoom_text_primary_cp

0xac60,	// (0x000806e1) popup_preview_fixed_window

0xeb92,	// (0x00084613) im_reading_pane_g1

0x60a1,	// (0x0007bb22) cams2_bc_adjust_pane_cp_ParamLimits

0x60a1,	// (0x0007bb22) cams2_bc_adjust_pane_cp

0x6311,	// (0x0007bd92) cams2_bc_adjust_pane_ParamLimits

0x6311,	// (0x0007bd92) cams2_bc_adjust_pane

0xb22f,	// (0x00080cb0) cams2_bc_adjust_pane_g1

0xb237,	// (0x00080cb8) cams2_slider_pane

0xb240,	// (0x00080cc1) cams2_slider_pane_g1

0xb249,	// (0x00080cca) cams2_slider_pane_g2

0x0006,

0xf6b0,	// (0x00085131) cams2_slider_pane_g

0x190b,	// (0x0007738c) calc_display_pane_ParamLimits

0x1931,	// (0x000773b2) calc_paper_pane_ParamLimits

0x1954,	// (0x000773d5) grid_calc_pane_ParamLimits

0xb043,	// (0x00080ac4) popup_clock_digital_window_t1_ParamLimits

0x4149,	// (0x00079bca) main_image_pane_t1

0x18ed,	// (0x0007736e) aid_size_cell_calc_ParamLimits

0x18ed,	// (0x0007736e) aid_size_cell_calc

0x5a20,	// (0x0007b4a1) popup_blid_sat_info2_window_ParamLimits

0x5a20,	// (0x0007b4a1) popup_blid_sat_info2_window

0xb26b,	// (0x00080cec) aid_size_cell_blid

0xb273,	// (0x00080cf4) bg_popup_window_pane_cp07

0xb296,	// (0x00080d17) grid_popup_blid_pane

0xb2a0,	// (0x00080d21) heading_pane_cp05_ParamLimits

0xb2a0,	// (0x00080d21) heading_pane_cp05

0xb36a,	// (0x00080deb) cell_popup_blid_pane_ParamLimits

0xb36a,	// (0x00080deb) cell_popup_blid_pane

0xb394,	// (0x00080e15) cell_popup_blid_pane_g1

0xb39c,	// (0x00080e1d) cell_popup_blid_pane_t1

0x65c7,	// (0x0007c048) mup2_indicator_pane_ParamLimits

0x65c7,	// (0x0007c048) mup2_indicator_pane

0x3782,	// (0x00079203) mup2_visualizer_osc_pane

0x664e,	// (0x0007c0cf) mup2_visualizer_spec_pane_ParamLimits

0x664e,	// (0x0007c0cf) mup2_visualizer_spec_pane

0x6781,	// (0x0007c202) mup2_spec_half_pane

0x678a,	// (0x0007c20b) mup2_spec_half_pane_cp

0x6792,	// (0x0007c213) mup2_spec_bar_pane_ParamLimits

0x6792,	// (0x0007c213) mup2_spec_bar_pane

0x5e16,	// (0x0007b897) mup2_spec_bar_pane_g1

0x5e20,	// (0x0007b8a1) mup2_spec_bar_pane_g2

0x0001,

0xf623,	// (0x000850a4) mup2_spec_bar_pane_g

0x67b2,	// (0x0007c233) mup2_osc_middle_pane

0x5e52,	// (0x0007b8d3) mup2_visualizer_osc_pane_g1

0xac98,	// (0x00080719) popup_number_entry_window_t1_ParamLimits

0xacab,	// (0x0008072c) popup_number_entry_window_t2_ParamLimits

0xacbd,	// (0x0008073e) popup_number_entry_window_t3_ParamLimits

0x1752,	// (0x000771d3) popup_number_entry_window_t5_ParamLimits

0x1752,	// (0x000771d3) popup_number_entry_window_t5

0xf0ec,	// (0x00084b6d) popup_number_entry_window_t_ParamLimits

0xaccf,	// (0x00080750) text_title_cp2_ParamLimits

0xb082,	// (0x00080b03) aid_hotspot_pointer_text2_pane

0xb0a8,	// (0x00080b29) main_viewer_pane_g9_ParamLimits

0xb0a8,	// (0x00080b29) main_viewer_pane_g9

0xedc1,	// (0x00084842) cale_month_pane_t1_ParamLimits

0xedfe,	// (0x0008487f) bg_cale_pane_ParamLimits

0xee16,	// (0x00084897) list_cale_pane_ParamLimits

0xea28,	// (0x000844a9) listscroll_cale_day_pane_t1

0xee27,	// (0x000848a8) scroll_pane_cp09_ParamLimits

0x3b06,	// (0x00079587) main_mup_eq_pane_t1_ParamLimits

0x3b06,	// (0x00079587) main_mup_eq_pane_t1

0x3b22,	// (0x000795a3) main_mup_eq_pane_t2_ParamLimits

0x3b22,	// (0x000795a3) main_mup_eq_pane_t2

0x3b3e,	// (0x000795bf) main_mup_eq_pane_t3_ParamLimits

0x3b3e,	// (0x000795bf) main_mup_eq_pane_t3

0x3b5c,	// (0x000795dd) main_mup_eq_pane_t4_ParamLimits

0x3b5c,	// (0x000795dd) main_mup_eq_pane_t4

0x3b7a,	// (0x000795fb) main_mup_eq_pane_t5_ParamLimits

0x3b7a,	// (0x000795fb) main_mup_eq_pane_t5

0x3b98,	// (0x00079619) main_mup_eq_pane_t6_ParamLimits

0x3b98,	// (0x00079619) main_mup_eq_pane_t6

0x3bae,	// (0x0007962f) main_mup_eq_pane_t7_ParamLimits

0x3bae,	// (0x0007962f) main_mup_eq_pane_t7

0x3bc4,	// (0x00079645) main_mup_eq_pane_t8_ParamLimits

0x3bc4,	// (0x00079645) main_mup_eq_pane_t8

0x3bda,	// (0x0007965b) main_mup_eq_pane_t9_ParamLimits

0x3bda,	// (0x0007965b) main_mup_eq_pane_t9

0x3bf6,	// (0x00079677) main_mup_eq_pane_t10_ParamLimits

0x3bf6,	// (0x00079677) main_mup_eq_pane_t10

0x0009,

0xf479,	// (0x00084efa) main_mup_eq_pane_t_ParamLimits

0xf479,	// (0x00084efa) main_mup_eq_pane_t

0x3ccb,	// (0x0007974c) mup_equalizer_pane_cp5_ParamLimits

0x3ce3,	// (0x00079764) mup_equalizer_pane_cp6_ParamLimits

0x3cfb,	// (0x0007977c) mup_equalizer_pane_cp7_ParamLimits

0xabf1,	// (0x00080672) main_gallery_pane

0x5e6c,	// (0x0007b8ed) smil2_volume_pane

0x5e74,	// (0x0007b8f5) smil_status_volume_pane_g1_ParamLimits

0x5e87,	// (0x0007b908) smil_status_volume_pane_g2_ParamLimits

0xb0b4,	// (0x00080b35) smil_status_volume_pane_g3_ParamLimits

0xf628,	// (0x000850a9) smil_status_volume_pane_g_ParamLimits

0xb273,	// (0x00080cf4) bg_popup_window_pane_cp07_ParamLimits

0xb281,	// (0x00080d02) blid_firmament_pane

0x67bb,	// (0x0007c23c) aid_size_cell_gallery_ParamLimits

0x67bb,	// (0x0007c23c) aid_size_cell_gallery

0x67d1,	// (0x0007c252) grid_gallery_pane_ParamLimits

0x67d1,	// (0x0007c252) grid_gallery_pane

0x67ec,	// (0x0007c26d) cell_gallery_pane_ParamLimits

0x67ec,	// (0x0007c26d) cell_gallery_pane

0xb3aa,	// (0x00080e2b) bg_cell_gallery_focus_pane_ParamLimits

0xb3aa,	// (0x00080e2b) bg_cell_gallery_focus_pane

0xb3bc,	// (0x00080e3d) cell_gallery_pane_g1_ParamLimits

0xb3bc,	// (0x00080e3d) cell_gallery_pane_g1

0x683d,	// (0x0007c2be) cell_gallery_pane_g2_ParamLimits

0x683d,	// (0x0007c2be) cell_gallery_pane_g2

0x684a,	// (0x0007c2cb) cell_gallery_pane_g3_ParamLimits

0x684a,	// (0x0007c2cb) cell_gallery_pane_g3

0xb3c8,	// (0x00080e49) cell_gallery_pane_g4_ParamLimits

0xb3c8,	// (0x00080e49) cell_gallery_pane_g4

0x0003,

0xf6d6,	// (0x00085157) cell_gallery_pane_g_ParamLimits

0xf6d6,	// (0x00085157) cell_gallery_pane_g

0xb3d4,	// (0x00080e55) bg_cell_gallery_focus_pane_g1

0xb3dc,	// (0x00080e5d) bg_cell_gallery_focus_pane_g2

0xb3e4,	// (0x00080e65) bg_cell_gallery_focus_pane_g3

0xb3ec,	// (0x00080e6d) bg_cell_gallery_focus_pane_g4

0xb3f4,	// (0x00080e75) bg_cell_gallery_focus_pane_g5

0xb3fc,	// (0x00080e7d) bg_cell_gallery_focus_pane_g6

0xb404,	// (0x00080e85) bg_cell_gallery_focus_pane_g7

0xb40c,	// (0x00080e8d) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6df,	// (0x00085160) bg_cell_gallery_focus_pane_g

0xb414,	// (0x00080e95) aid_firma_cardinal

0xb428,	// (0x00080ea9) blid_firmament_pane_t1

0xb43f,	// (0x00080ec0) blid_firmament_pane_t2

0xb456,	// (0x00080ed7) blid_firmament_pane_t3

0xb46d,	// (0x00080eee) blid_firmament_pane_t4

0x0003,

0xf6f0,	// (0x00085171) blid_firmament_pane_t

0xb484,	// (0x00080f05) blid_sat_info_pane

0xb494,	// (0x00080f15) blid_sat_info_pane_g1

0xb494,	// (0x00080f15) blid_sat_info_pane_g2

0x0001,

0xf6f9,	// (0x0008517a) blid_sat_info_pane_g

0xb49e,	// (0x00080f1f) blid_sat_info_pane_t1

0xb4ac,	// (0x00080f2d) smil2_volume_content_pane

0xb4b5,	// (0x00080f36) smil2_volume_pane_g1

0xb4bd,	// (0x00080f3e) smil2_volume_content_pane_g1

0xb4c6,	// (0x00080f47) smil2_volume_content_pane_g2

0xb4cf,	// (0x00080f50) smil2_volume_content_pane_g3

0xb4d8,	// (0x00080f59) smil2_volume_content_pane_g4

0xb4e1,	// (0x00080f62) smil2_volume_content_pane_g5

0xb4ea,	// (0x00080f6b) smil2_volume_content_pane_g6

0xb4f3,	// (0x00080f74) smil2_volume_content_pane_g7

0xb4fc,	// (0x00080f7d) smil2_volume_content_pane_g8

0xb505,	// (0x00080f86) smil2_volume_content_pane_g9

0xb50e,	// (0x00080f8f) smil2_volume_content_pane_g10

0x0009,

0xf6fe,	// (0x0008517f) smil2_volume_content_pane_g

0x1e02,	// (0x00077883) cale_week_day_heading_pane_t1_ParamLimits

0x1e16,	// (0x00077897) cale_week_day_heading_pane_t2_ParamLimits

0x1e2a,	// (0x000778ab) cale_week_day_heading_pane_t3_ParamLimits

0x1e3e,	// (0x000778bf) cale_week_day_heading_pane_t4_ParamLimits

0x1e52,	// (0x000778d3) cale_week_day_heading_pane_t5_ParamLimits

0x1e66,	// (0x000778e7) cale_week_day_heading_pane_t6_ParamLimits

0x1e7a,	// (0x000778fb) cale_week_day_heading_pane_t7_ParamLimits

0xf1f1,	// (0x00084c72) cale_week_day_heading_pane_t_ParamLimits

0xea3a,	// (0x000844bb) bg_cale_side_pane_ParamLimits

0x1e8e,	// (0x0007790f) cale_week_time_pane_t1_ParamLimits

0x1ea6,	// (0x00077927) cale_week_time_pane_t2_ParamLimits

0x1ebe,	// (0x0007793f) cale_week_time_pane_t3_ParamLimits

0x1ed6,	// (0x00077957) cale_week_time_pane_t4_ParamLimits

0x1eee,	// (0x0007796f) cale_week_time_pane_t5_ParamLimits

0x1f06,	// (0x00077987) cale_week_time_pane_t6_ParamLimits

0x1f1e,	// (0x0007799f) cale_week_time_pane_t7_ParamLimits

0x1f3a,	// (0x000779bb) cale_week_time_pane_t8_ParamLimits

0xf200,	// (0x00084c81) cale_week_time_pane_t_ParamLimits

0x1f5a,	// (0x000779db) cell_cale_week_pane_g2_ParamLimits

0xea3a,	// (0x000844bb) bg_cale_side_pane_cp01_ParamLimits

0x2e2b,	// (0x000788ac) cale_month_week_pane_t1_ParamLimits

0x2e42,	// (0x000788c3) cale_month_week_pane_t2_ParamLimits

0x2e59,	// (0x000788da) cale_month_week_pane_t3_ParamLimits

0x2e70,	// (0x000788f1) cale_month_week_pane_t4_ParamLimits

0x2e87,	// (0x00078908) cale_month_week_pane_t5_ParamLimits

0x2e9e,	// (0x0007891f) cale_month_week_pane_t6_ParamLimits

0xf2d9,	// (0x00084d5a) cale_month_week_pane_t_ParamLimits

0xaf4c,	// (0x000809cd) cell_cale_month_pane_g1_ParamLimits

0xabf1,	// (0x00080672) main_cale_event_viewer_pane

0xabf1,	// (0x00080672) listscroll_cale_event_viewer_pane

0xb517,	// (0x00080f98) list_cale_ev_pane

0xb51f,	// (0x00080fa0) scroll_pane_cp023

0x6857,	// (0x0007c2d8) field_cale_ev_pane_ParamLimits

0x6857,	// (0x0007c2d8) field_cale_ev_pane

0xb52b,	// (0x00080fac) field_cale_ev_content_pane_ParamLimits

0xb52b,	// (0x00080fac) field_cale_ev_content_pane

0xb537,	// (0x00080fb8) field_cale_ev_pane_g1_ParamLimits

0xb537,	// (0x00080fb8) field_cale_ev_pane_g1

0xb543,	// (0x00080fc4) field_cale_ev_pane_g2_ParamLimits

0xb543,	// (0x00080fc4) field_cale_ev_pane_g2

0xb55b,	// (0x00080fdc) field_cale_ev_pane_g3_ParamLimits

0xb55b,	// (0x00080fdc) field_cale_ev_pane_g3

0x0002,

0xf713,	// (0x00085194) field_cale_ev_pane_g_ParamLimits

0xf713,	// (0x00085194) field_cale_ev_pane_g

0xb573,	// (0x00080ff4) field_cale_ev_pane_t1_ParamLimits

0xb573,	// (0x00080ff4) field_cale_ev_pane_t1

0x687b,	// (0x0007c2fc) field_cale_ev_content_pane_t1_ParamLimits

0x687b,	// (0x0007c2fc) field_cale_ev_content_pane_t1

0x3dab,	// (0x0007982c) bg_button_pane_cp01

0xe8e8,	// (0x00084369) listscroll_cale_week_pane_ParamLimits

0x1bec,	// (0x0007766d) popup_toolbar_window_cp01

0xea28,	// (0x000844a9) listscroll_cale_week_pane_t1_ParamLimits

0xe8e8,	// (0x00084369) listscroll_cale_day_pane_ParamLimits

0x2ff2,	// (0x00078a73) popup_toolbar_window_cp02

0xea28,	// (0x000844a9) listscroll_cale_day_pane_t1_ParamLimits

0xe8e8,	// (0x00084369) main_cale_month_pane_ParamLimits

0x5cdb,	// (0x0007b75c) popup_toolbar_window_cp03_ParamLimits

0x5cdb,	// (0x0007b75c) popup_toolbar_window_cp03

0x4127,	// (0x00079ba8) main_image_pane_g2_ParamLimits

0x4127,	// (0x00079ba8) main_image_pane_g2

0x4138,	// (0x00079bb9) main_image_pane_g3_ParamLimits

0x4138,	// (0x00079bb9) main_image_pane_g3

0x0002,

0xf50b,	// (0x00084f8c) main_image_pane_g_ParamLimits

0xf50b,	// (0x00084f8c) main_image_pane_g

0x4149,	// (0x00079bca) main_image_pane_t1_ParamLimits

0x4160,	// (0x00079be1) main_image_pane_t2_ParamLimits

0x4160,	// (0x00079be1) main_image_pane_t2

0x4172,	// (0x00079bf3) main_image_pane_t3_ParamLimits

0x4172,	// (0x00079bf3) main_image_pane_t3

0x419a,	// (0x00079c1b) main_image_pane_t4_ParamLimits

0x419a,	// (0x00079c1b) main_image_pane_t4

0x0003,

0xf512,	// (0x00084f93) main_image_pane_t_ParamLimits

0xf512,	// (0x00084f93) main_image_pane_t

0x41ba,	// (0x00079c3b) popup_image_details_window_cp01

0x41c4,	// (0x00079c45) popup_toobar_trans_pane_cp01_ParamLimits

0x41c4,	// (0x00079c45) popup_toobar_trans_pane_cp01

0x5b1f,	// (0x0007b5a0) popup_image_details_window_ParamLimits

0x5b1f,	// (0x0007b5a0) popup_image_details_window

0x5b37,	// (0x0007b5b8) popup_image_focus_window

0x605b,	// (0x0007badc) camera2_autofocus_pane_ParamLimits

0x605b,	// (0x0007badc) camera2_autofocus_pane

0xabf1,	// (0x00080672) bg_popup_sub_pane_cp06

0xb58a,	// (0x0008100b) popup_image_focus_window_g1

0xb592,	// (0x00081013) popup_image_focus_window_g2

0xb59a,	// (0x0008101b) popup_image_focus_window_g3

0xb5a2,	// (0x00081023) popup_image_focus_window_g4

0x0003,

0xf71a,	// (0x0008519b) popup_image_focus_window_g

0xb5aa,	// (0x0008102b) popup_image_focus_window_t1

0xb5b8,	// (0x00081039) popup_image_focus_window_t2

0xb5c8,	// (0x00081049) popup_image_focus_window_t3

0x0002,

0xf723,	// (0x000851a4) popup_image_focus_window_t

0xb5d6,	// (0x00081057) camera2_autofocus_pane_g1

0xac6a,	// (0x000806eb) bg_tb_trans_pane_cp01

0xb5e4,	// (0x00081065) popup_image_details_window_g1

0xb5f7,	// (0x00081078) popup_image_details_window_g2

0x0002,

0xf735,	// (0x000851b6) popup_image_details_window_g

0xb620,	// (0x000810a1) popup_image_details_window_t1

0xb632,	// (0x000810b3) popup_image_details_window_t2

0xb64b,	// (0x000810cc) popup_image_details_window_t3

0xb65f,	// (0x000810e0) popup_image_details_window_t4

0xb67a,	// (0x000810fb) popup_image_details_window_t5

0x0004,

0xf73c,	// (0x000851bd) popup_image_details_window_t

0xe8d4,	// (0x00084355) bg_calc_paper_pane_ParamLimits

0xabf1,	// (0x00080672) grid_highlight_pane_cp013

0xad5c,	// (0x000807dd) list_calc_pane_ParamLimits

0xad6e,	// (0x000807ef) scroll_pane_cp024

0xe8e8,	// (0x00084369) bg_calc_display_pane_ParamLimits

0x1a4b,	// (0x000774cc) calc_display_pane_t1_ParamLimits

0x1a5d,	// (0x000774de) calc_display_pane_t2_ParamLimits

0xad76,	// (0x000807f7) calc_display_pane_t3_ParamLimits

0xf173,	// (0x00084bf4) calc_display_pane_t_ParamLimits

0x1b20,	// (0x000775a1) cell_calc_pane_g2

0x0001,

0xf190,	// (0x00084c11) cell_calc_pane_g

0x1b29,	// (0x000775aa) cell_calc_pane_t1

0xe947,	// (0x000843c8) grid_highlight_pane_cp02_ParamLimits

0xe95d,	// (0x000843de) toolbar_button_pane_cp01_ParamLimits

0xe95d,	// (0x000843de) toolbar_button_pane_cp01

0x4206,	// (0x00079c87) temp_image_control_pane_ParamLimits

0x4206,	// (0x00079c87) temp_image_control_pane

0xac6a,	// (0x000806eb) main_mp3_pane

0xb694,	// (0x00081115) temp_image_control_pane_g1_ParamLimits

0xb694,	// (0x00081115) temp_image_control_pane_g1

0xb6a2,	// (0x00081123) temp_image_control_pane_g2_ParamLimits

0xb6a2,	// (0x00081123) temp_image_control_pane_g2

0xb6b4,	// (0x00081135) temp_image_control_pane_g3_ParamLimits

0xb6b4,	// (0x00081135) temp_image_control_pane_g3

0x68cc,	// (0x0007c34d) temp_image_control_pane_g4_ParamLimits

0x68cc,	// (0x0007c34d) temp_image_control_pane_g4

0x0003,

0xf747,	// (0x000851c8) temp_image_control_pane_g_ParamLimits

0xf747,	// (0x000851c8) temp_image_control_pane_g

0xb694,	// (0x00081115) main_mp3_pane_g1

0x68df,	// (0x0007c360) main_mp3_pane_g2

0x0007,

0xf750,	// (0x000851d1) main_mp3_pane_g

0xb6f7,	// (0x00081178) main_mp3_pane_t1

0xea9f,	// (0x00084520) main_camera_pane_g8_ParamLimits

0xea9f,	// (0x00084520) main_camera_pane_g8

0x222b,	// (0x00077cac) main_video_pane_g7_ParamLimits

0x222b,	// (0x00077cac) main_video_pane_g7

0xb0ef,	// (0x00080b70) main_camera2_pane_t7_ParamLimits

0xb0ef,	// (0x00080b70) main_camera2_pane_t7

0xebe9,	// (0x0008466a) scroll_pane_cp025_ParamLimits

0xebe9,	// (0x0008466a) scroll_pane_cp025

0xebfd,	// (0x0008467e) scroll_pane_cp026_ParamLimits

0xebfd,	// (0x0008467e) scroll_pane_cp026

0xec0c,	// (0x0008468d) wml_content_pane_ParamLimits

0xabf1,	// (0x00080672) main_touch_calib_pane

0x69a7,	// (0x0007c428) main_touch_calib_pane_g1

0x69b3,	// (0x0007c434) main_touch_calib_pane_g2

0x69bf,	// (0x0007c440) main_touch_calib_pane_g3

0x69cb,	// (0x0007c44c) main_touch_calib_pane_g4

0x0003,

0xf76e,	// (0x000851ef) main_touch_calib_pane_g

0x69d7,	// (0x0007c458) main_touch_calib_pane_t1

0x69f1,	// (0x0007c472) main_touch_calib_pane_t2

0x0004,

0xf777,	// (0x000851f8) main_touch_calib_pane_t

0x35f9,	// (0x0007907a) mup_progress_pane_cp02

0x3618,	// (0x00079099) navi_pane_g1

0x36d3,	// (0x00079154) navi_pane_mp_t3

0xac6a,	// (0x000806eb) main_mp3_pane_ParamLimits

0x5d30,	// (0x0007b7b1) navi_pane_ParamLimits

0xb694,	// (0x00081115) main_mp3_pane_g1_ParamLimits

0x68df,	// (0x0007c360) main_mp3_pane_g2_ParamLimits

0x68eb,	// (0x0007c36c) main_mp3_pane_g3_ParamLimits

0x68eb,	// (0x0007c36c) main_mp3_pane_g3

0x68f9,	// (0x0007c37a) main_mp3_pane_g4_ParamLimits

0x68f9,	// (0x0007c37a) main_mp3_pane_g4

0xb6c4,	// (0x00081145) main_mp3_pane_g5_ParamLimits

0xb6c4,	// (0x00081145) main_mp3_pane_g5

0xb6d2,	// (0x00081153) main_mp3_pane_g6_ParamLimits

0xb6d2,	// (0x00081153) main_mp3_pane_g6

0xb6df,	// (0x00081160) main_mp3_pane_g7_ParamLimits

0xb6df,	// (0x00081160) main_mp3_pane_g7

0xb6eb,	// (0x0008116c) main_mp3_pane_g8_ParamLimits

0xb6eb,	// (0x0008116c) main_mp3_pane_g8

0xf750,	// (0x000851d1) main_mp3_pane_g_ParamLimits

0x6905,	// (0x0007c386) main_mp3_pane_t2

0x6913,	// (0x0007c394) main_mp3_pane_t3

0xb705,	// (0x00081186) main_mp3_pane_t4

0xb713,	// (0x00081194) main_mp3_pane_t5

0x0005,

0xf761,	// (0x000851e2) main_mp3_pane_t

0xb721,	// (0x000811a2) mup_progress_pane_cp01

0xac1f,	// (0x000806a0) aid_zoom_text_secondary2

0xb517,	// (0x00080f98) list_cale_ev2_pane

0xb51f,	// (0x00080fa0) scroll_pane_cp023_ParamLimits

0x6a49,	// (0x0007c4ca) field_cale_ev2_pane_ParamLimits

0x6a49,	// (0x0007c4ca) field_cale_ev2_pane

0xb729,	// (0x000811aa) field_cale_ev2_pane_g1_ParamLimits

0xb729,	// (0x000811aa) field_cale_ev2_pane_g1

0xb735,	// (0x000811b6) field_cale_ev2_pane_g2_ParamLimits

0xb735,	// (0x000811b6) field_cale_ev2_pane_g2

0xb74d,	// (0x000811ce) field_cale_ev2_pane_g3_ParamLimits

0xb74d,	// (0x000811ce) field_cale_ev2_pane_g3

0x0003,

0xf782,	// (0x00085203) field_cale_ev2_pane_g_ParamLimits

0xf782,	// (0x00085203) field_cale_ev2_pane_g

0xb771,	// (0x000811f2) field_cale_ev2_pane_t1_ParamLimits

0xb771,	// (0x000811f2) field_cale_ev2_pane_t1

0xb788,	// (0x00081209) field_cale_ev2_pane_t2_ParamLimits

0xb788,	// (0x00081209) field_cale_ev2_pane_t2

0x0001,

0xf78b,	// (0x0008520c) field_cale_ev2_pane_t_ParamLimits

0xf78b,	// (0x0008520c) field_cale_ev2_pane_t

0x3edc,	// (0x0007995d) main_postcard_pane_g5_ParamLimits

0x3edc,	// (0x0007995d) main_postcard_pane_g5

0x3ef2,	// (0x00079973) main_postcard_pane_g6_ParamLimits

0x3ef2,	// (0x00079973) main_postcard_pane_g6

0x1fd7,	// (0x00077a58) camera2_autofocus_pane_cp_ParamLimits

0x1fd7,	// (0x00077a58) camera2_autofocus_pane_cp

0xac6a,	// (0x000806eb) main_mup3_pane

0x6a8d,	// (0x0007c50e) main_mup3_pane_g1_ParamLimits

0x6a8d,	// (0x0007c50e) main_mup3_pane_g1

0x6aaf,	// (0x0007c530) main_mup3_pane_g2_ParamLimits

0x6aaf,	// (0x0007c530) main_mup3_pane_g2

0x6b32,	// (0x0007c5b3) main_mup3_pane_g3_ParamLimits

0x6b32,	// (0x0007c5b3) main_mup3_pane_g3

0x6b76,	// (0x0007c5f7) main_mup3_pane_g4_ParamLimits

0x6b76,	// (0x0007c5f7) main_mup3_pane_g4

0x6bba,	// (0x0007c63b) main_mup3_pane_g5_ParamLimits

0x6bba,	// (0x0007c63b) main_mup3_pane_g5

0x6bfe,	// (0x0007c67f) main_mup3_pane_g6_ParamLimits

0x6bfe,	// (0x0007c67f) main_mup3_pane_g6

0xb79d,	// (0x0008121e) main_mup3_pane_g7_ParamLimits

0xb79d,	// (0x0008121e) main_mup3_pane_g7

0x0007,

0xf79b,	// (0x0008521c) main_mup3_pane_g_ParamLimits

0xf79b,	// (0x0008521c) main_mup3_pane_g

0x6c7a,	// (0x0007c6fb) main_mup3_pane_t1_ParamLimits

0x6c7a,	// (0x0007c6fb) main_mup3_pane_t1

0x6cf4,	// (0x0007c775) main_mup3_pane_t2_ParamLimits

0x6cf4,	// (0x0007c775) main_mup3_pane_t2

0x6dce,	// (0x0007c84f) main_mup3_pane_t4_ParamLimits

0x6dce,	// (0x0007c84f) main_mup3_pane_t4

0x6e2c,	// (0x0007c8ad) main_mup3_pane_t5_ParamLimits

0x6e2c,	// (0x0007c8ad) main_mup3_pane_t5

0x6ee4,	// (0x0007c965) main_mup3_pane_t6_ParamLimits

0x6ee4,	// (0x0007c965) main_mup3_pane_t6

0x0005,

0xf7ac,	// (0x0008522d) main_mup3_pane_t_ParamLimits

0xf7ac,	// (0x0008522d) main_mup3_pane_t

0x6f9a,	// (0x0007ca1b) mup3_progress_pane_ParamLimits

0x6f9a,	// (0x0007ca1b) mup3_progress_pane

0x701e,	// (0x0007ca9f) popup_mup3_control_window_ParamLimits

0x701e,	// (0x0007ca9f) popup_mup3_control_window

0xb7ab,	// (0x0008122c) popup_mup3_text_window

0x7054,	// (0x0007cad5) mup3_progress_pane_t1

0x706b,	// (0x0007caec) mup3_progress_pane_t2

0xb7b3,	// (0x00081234) mup3_progress_pane_t3

0x0002,

0xf7b9,	// (0x0008523a) mup3_progress_pane_t

0xb7ca,	// (0x0008124b) mup_progress_pane_cp03

0xabf1,	// (0x00080672) bg_tb_trans_pane_cp04

0x7082,	// (0x0007cb03) mup3_volume_pane

0x708a,	// (0x0007cb0b) popup_mup3_control_window_g1

0x7093,	// (0x0007cb14) mup3_volume_pane_g1

0x709c,	// (0x0007cb1d) mup3_volume_pane_g2

0x70a5,	// (0x0007cb26) mup3_volume_pane_g3

0x0002,

0xf7c0,	// (0x00085241) mup3_volume_pane_g

0xabf1,	// (0x00080672) bg_tb_trans_pane_cp03

0xb7da,	// (0x0008125b) popup_mup3_text_window_g1

0xb7e2,	// (0x00081263) popup_mup3_text_window_t1

0xe930,	// (0x000843b1) list_calc_item_pane_g1_ParamLimits

0xb19d,	// (0x00080c1e) mup_volume_pane_cp_g1

0x6a0b,	// (0x0007c48c) main_touch_calib_pane_t3

0x6a1f,	// (0x0007c4a0) main_touch_calib_pane_t4

0x6a33,	// (0x0007c4b4) main_touch_calib_pane_t5

0xabfb,	// (0x0008067c) aid_cell_size_toolbar2

0xac03,	// (0x00080684) aid_popup3_width_pane

0xac0f,	// (0x00080690) aid_zoom_text_msg_primary

0xae4e,	// (0x000808cf) vorec_t7

0xe8f4,	// (0x00084375) bg_calc_paper_pane_g1_ParamLimits

0xe900,	// (0x00084381) bg_calc_paper_pane_g2_ParamLimits

0xe90c,	// (0x0008438d) bg_calc_paper_pane_g3_ParamLimits

0xe918,	// (0x00084399) bg_calc_paper_pane_g4_ParamLimits

0xe924,	// (0x000843a5) bg_calc_paper_pane_g5_ParamLimits

0x1aaa,	// (0x0007752b) bg_calc_paper_pane_g6_ParamLimits

0x1abd,	// (0x0007753e) bg_calc_paper_pane_g7_ParamLimits

0x1ad0,	// (0x00077551) bg_calc_paper_pane_g8_ParamLimits

0xf17a,	// (0x00084bfb) bg_calc_paper_pane_g_ParamLimits

0x1ae1,	// (0x00077562) calc_bg_paper_pane_g9_ParamLimits

0x2139,	// (0x00077bba) image_qvga_pane_ParamLimits

0x2139,	// (0x00077bba) image_qvga_pane

0xe81d,	// (0x0008429e) bg_popup_sub_pane_cp04_ParamLimits

0x4085,	// (0x00079b06) popup_mup_playback_window_g1_ParamLimits

0x4091,	// (0x00079b12) popup_mup_playback_window_t1_ParamLimits

0x40a6,	// (0x00079b27) popup_mup_playback_window_t2_ParamLimits

0xf506,	// (0x00084f87) popup_mup_playback_window_t_ParamLimits

0x64df,	// (0x0007bf60) main_mup2_pane_g3_ParamLimits

0x64df,	// (0x0007bf60) main_mup2_pane_g3

0x242f,	// (0x00077eb0) popup_toolbar_window_cp04

0x48cb,	// (0x0007a34c) popup_call2_audio_second_window_g3_ParamLimits

0x48cb,	// (0x0007a34c) popup_call2_audio_second_window_g3

0x4cd5,	// (0x0007a756) popup_call2_audio_first_window_g4_ParamLimits

0x4cd5,	// (0x0007a756) popup_call2_audio_first_window_g4

0x5354,	// (0x0007add5) popup_call2_audio_in_window_g4_ParamLimits

0x5354,	// (0x0007add5) popup_call2_audio_in_window_g4

0x40bb,	// (0x00079b3c) aid_area_sk_bg_cut_ParamLimits

0x40bb,	// (0x00079b3c) aid_area_sk_bg_cut

0x40d9,	// (0x00079b5a) aid_area_sk_bg_cut_2_ParamLimits

0x40d9,	// (0x00079b5a) aid_area_sk_bg_cut_2

0x682d,	// (0x0007c2ae) aid_placing_details_win

0x6835,	// (0x0007c2b6) aid_placing_details_win_2

0xb5d6,	// (0x00081057) camera2_autofocus_pane_g1_ParamLimits

0x16ab,	// (0x0007712c) popup_fixed_preview_cale_window_ParamLimits

0x16ab,	// (0x0007712c) popup_fixed_preview_cale_window

0x3793,	// (0x00079214) navi_slider_pane_g3

0x379c,	// (0x0007921d) navi_slider_pane_g4

0x37a5,	// (0x00079226) navi_slider_pane_g5

0x3793,	// (0x00079214) navi_slider_pane_g6

0xb069,	// (0x00080aea) navi_slider_pane_g7

0x3d1c,	// (0x0007979d) mup_scale_pane_g3

0x3d25,	// (0x000797a6) mup_scale_pane_g4

0x3d2e,	// (0x000797af) mup_scale_pane_g5

0x3d37,	// (0x000797b8) mup_scale_pane_g6

0x3d40,	// (0x000797c1) mup_scale_pane_g7

0x3793,	// (0x00079214) cams2_slider_pane_g3

0xb252,	// (0x00080cd3) cams2_slider_pane_g4

0xb25a,	// (0x00080cdb) cams2_slider_pane_g5

0x3793,	// (0x00079214) cams2_slider_pane_g6

0xb262,	// (0x00080ce3) cams2_slider_pane_g7

0xb494,	// (0x00080f15) camera2_autofocus_pane_cp_g1

0xb7f0,	// (0x00081271) bg_popup_preview_window_pane_cp02_ParamLimits

0xb7f0,	// (0x00081271) bg_popup_preview_window_pane_cp02

0xb7fc,	// (0x0008127d) list_fp_cale_pane_ParamLimits

0xb7fc,	// (0x0008127d) list_fp_cale_pane

0xb808,	// (0x00081289) popup_fixed_preview_cale_window_t1_ParamLimits

0xb808,	// (0x00081289) popup_fixed_preview_cale_window_t1

0x70ae,	// (0x0007cb2f) popup_fixed_preview_cale_window_t2_ParamLimits

0x70ae,	// (0x0007cb2f) popup_fixed_preview_cale_window_t2

0x70c3,	// (0x0007cb44) popup_fixed_preview_cale_window_t3_ParamLimits

0x70c3,	// (0x0007cb44) popup_fixed_preview_cale_window_t3

0x0002,

0xf7c7,	// (0x00085248) popup_fixed_preview_cale_window_t_ParamLimits

0xf7c7,	// (0x00085248) popup_fixed_preview_cale_window_t

0xb826,	// (0x000812a7) list_single_fp_cale_pane_ParamLimits

0xb826,	// (0x000812a7) list_single_fp_cale_pane

0xb83e,	// (0x000812bf) list_single_fp_cale_pane_g1_ParamLimits

0xb83e,	// (0x000812bf) list_single_fp_cale_pane_g1

0xb84a,	// (0x000812cb) list_single_fp_cale_pane_g2_ParamLimits

0xb84a,	// (0x000812cb) list_single_fp_cale_pane_g2

0x0002,

0xf7ce,	// (0x0008524f) list_single_fp_cale_pane_g_ParamLimits

0xf7ce,	// (0x0008524f) list_single_fp_cale_pane_g

0xb863,	// (0x000812e4) list_single_fp_cale_pane_t1_ParamLimits

0xb863,	// (0x000812e4) list_single_fp_cale_pane_t1

0xb875,	// (0x000812f6) list_single_fp_cale_pane_t2_ParamLimits

0xb875,	// (0x000812f6) list_single_fp_cale_pane_t2

0x0001,

0xf7d5,	// (0x00085256) list_single_fp_cale_pane_t_ParamLimits

0xf7d5,	// (0x00085256) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xabf1,	// (0x00080672) main_dialer_pane

0x70da,	// (0x0007cb5b) aid_cell_size_keypad

0x70e4,	// (0x0007cb65) dialer_ne_pane

0x70ee,	// (0x0007cb6f) grid_dialer_command_1_pane

0x70f6,	// (0x0007cb77) grid_dialer_command_2_pane

0x70fe,	// (0x0007cb7f) grid_dialer_keypad_pane

0x7112,	// (0x0007cb93) bg_popup_call_pane_cp06_ParamLimits

0x7112,	// (0x0007cb93) bg_popup_call_pane_cp06

0x711e,	// (0x0007cb9f) dialer_ne_clear_pane_ParamLimits

0x711e,	// (0x0007cb9f) dialer_ne_clear_pane

0xb8a8,	// (0x00081329) dialer_ne_pane_g1

0xb8b0,	// (0x00081331) dialer_ne_pane_t1_ParamLimits

0xb8b0,	// (0x00081331) dialer_ne_pane_t1

0x712a,	// (0x0007cbab) dialer_ne_pane_t2_ParamLimits

0x712a,	// (0x0007cbab) dialer_ne_pane_t2

0x7154,	// (0x0007cbd5) dialer_ne_pane_t3_ParamLimits

0x7154,	// (0x0007cbd5) dialer_ne_pane_t3

0x0002,

0xf7da,	// (0x0008525b) dialer_ne_pane_t_ParamLimits

0xf7da,	// (0x0008525b) dialer_ne_pane_t

0x7184,	// (0x0007cc05) dialer_ne_pane_t3_copy1_ParamLimits

0x7184,	// (0x0007cc05) dialer_ne_pane_t3_copy1

0x71b3,	// (0x0007cc34) cell_dialer_keypad_pane_ParamLimits

0x71b3,	// (0x0007cc34) cell_dialer_keypad_pane

0x71ca,	// (0x0007cc4b) cell_dialer_command_1_pane_ParamLimits

0x71ca,	// (0x0007cc4b) cell_dialer_command_1_pane

0x71e0,	// (0x0007cc61) cell_dialer_command_2_pane_ParamLimits

0x71e0,	// (0x0007cc61) cell_dialer_command_2_pane

0xb8c2,	// (0x00081343) bg_button_pane_cp02_ParamLimits

0xb8c2,	// (0x00081343) bg_button_pane_cp02

0x71ef,	// (0x0007cc70) cell_dialer_keypad_pane_g1_ParamLimits

0x71ef,	// (0x0007cc70) cell_dialer_keypad_pane_g1

0xb8c2,	// (0x00081343) bg_button_pane_cp03_ParamLimits

0xb8c2,	// (0x00081343) bg_button_pane_cp03

0x7204,	// (0x0007cc85) cell_dialer_command_1_pane_g1_ParamLimits

0x7204,	// (0x0007cc85) cell_dialer_command_1_pane_g1

0xb8ce,	// (0x0008134f) bg_button_pane_cp04

0x7218,	// (0x0007cc99) cell_dialer_command_2_pane_g1

0x3782,	// (0x00079203) bg_button_pane_cp06

0xb8d6,	// (0x00081357) dialer_ne_clear_pane_g1

0x3624,	// (0x000790a5) navi_pane_g2

0x3652,	// (0x000790d3) navi_pane_g3

0x0002,

0xf409,	// (0x00084e8a) navi_pane_g

0x36e1,	// (0x00079162) navi_pane_mv_g2

0x3708,	// (0x00079189) navi_pane_mv_g5

0x3710,	// (0x00079191) navi_pane_mv_t1

0xe8e8,	// (0x00084369) main_clock2_pane

0x7255,	// (0x0007ccd6) main_clock2_list_pane_ParamLimits

0x7255,	// (0x0007ccd6) main_clock2_list_pane

0x728d,	// (0x0007cd0e) main_clock2_pane_t1_ParamLimits

0x728d,	// (0x0007cd0e) main_clock2_pane_t1

0x72c9,	// (0x0007cd4a) main_clock2_pane_t2_ParamLimits

0x72c9,	// (0x0007cd4a) main_clock2_pane_t2

0x0004,

0xf7e1,	// (0x00085262) main_clock2_pane_t_ParamLimits

0xf7e1,	// (0x00085262) main_clock2_pane_t

0x7355,	// (0x0007cdd6) popup_clock_analogue_window_cp03_ParamLimits

0x7355,	// (0x0007cdd6) popup_clock_analogue_window_cp03

0x737c,	// (0x0007cdfd) popup_clock_digital_window_cp02_ParamLimits

0x737c,	// (0x0007cdfd) popup_clock_digital_window_cp02

0x73f5,	// (0x0007ce76) main_clock2_list_single_pane_ParamLimits

0x73f5,	// (0x0007ce76) main_clock2_list_single_pane

0x3782,	// (0x00079203) list_highlight_pane_cp05

0xb8de,	// (0x0008135f) main_clock2_list_single_pane_t1

0x242f,	// (0x00077eb0) popup_toolbar_window_cp04_ParamLimits

0x689c,	// (0x0007c31d) camera2_autofocus_pane_g2_ParamLimits

0x689c,	// (0x0007c31d) camera2_autofocus_pane_g2

0x68a8,	// (0x0007c329) camera2_autofocus_pane_g3_ParamLimits

0x68a8,	// (0x0007c329) camera2_autofocus_pane_g3

0x68b4,	// (0x0007c335) camera2_autofocus_pane_g4_ParamLimits

0x68b4,	// (0x0007c335) camera2_autofocus_pane_g4

0x68c0,	// (0x0007c341) camera2_autofocus_pane_g5_ParamLimits

0x68c0,	// (0x0007c341) camera2_autofocus_pane_g5

0x0004,

0xf72a,	// (0x000851ab) camera2_autofocus_pane_g_ParamLimits

0xf72a,	// (0x000851ab) camera2_autofocus_pane_g

0x6a6d,	// (0x0007c4ee) camera2_autofocus_pane_cp_g2

0x6a75,	// (0x0007c4f6) camera2_autofocus_pane_cp_g3

0x6a7d,	// (0x0007c4fe) camera2_autofocus_pane_cp_g4

0x6a85,	// (0x0007c506) camera2_autofocus_pane_cp_g5

0x0004,

0xf790,	// (0x00085211) camera2_autofocus_pane_cp_g

0x710a,	// (0x0007cb8b) popup_dialer_spcha_window

0xabf1,	// (0x00080672) bg_popup_sub_pane_cp07

0xb8ec,	// (0x0008136d) list_spcha_pane

0xb8f4,	// (0x00081375) list_single_spcha_pane_ParamLimits

0xb8f4,	// (0x00081375) list_single_spcha_pane

0xabf1,	// (0x00080672) list_highlight_pane_cp06

0xb905,	// (0x00081386) list_single_spcha_pane_t1

0x50fe,	// (0x0007ab7f) popup_call2_audio_out_window_g4_ParamLimits

0x50fe,	// (0x0007ab7f) popup_call2_audio_out_window_g4

0xabf1,	// (0x00080672) main_imed2_pane

0x5b41,	// (0x0007b5c2) popup_imed_adjust2_window

0x5b54,	// (0x0007b5d5) popup_imed_trans_window_ParamLimits

0x5b54,	// (0x0007b5d5) popup_imed_trans_window

0xb2cc,	// (0x00080d4d) popup_blid_sat_info2_window_t1

0xb2da,	// (0x00080d5b) popup_blid_sat_info2_window_t2

0x000a,

0xf6bf,	// (0x00085140) popup_blid_sat_info2_window_t

0x74ab,	// (0x0007cf2c) aid_size_cell_colour_35

0x74cb,	// (0x0007cf4c) aid_size_cell_colour_112

0x74eb,	// (0x0007cf6c) aid_size_cell_effect

0x59e2,	// (0x0007b463) bg_tb_trans_pane_cp02

0xee9a,	// (0x0008491b) heading_imed_pane

0x750b,	// (0x0007cf8c) listscroll_imed_pane

0xb913,	// (0x00081394) heading_imed_pane_g1

0xb91b,	// (0x0008139c) heading_imed_pane_t1

0xb929,	// (0x000813aa) grid_imed_colour_35_pane_ParamLimits

0xb929,	// (0x000813aa) grid_imed_colour_35_pane

0x7517,	// (0x0007cf98) grid_imed_effect_pane

0xb945,	// (0x000813c6) list_imed_aspect_pane

0x752e,	// (0x0007cfaf) scroll_pane_cp027_ParamLimits

0x752e,	// (0x0007cfaf) scroll_pane_cp027

0x753f,	// (0x0007cfc0) cell_imed_effect_pane_ParamLimits

0x753f,	// (0x0007cfc0) cell_imed_effect_pane

0xb94d,	// (0x000813ce) cell_imed_colour_pane_ParamLimits

0xb94d,	// (0x000813ce) cell_imed_colour_pane

0xb997,	// (0x00081418) cell_imed_colour_pane_g1_ParamLimits

0xb997,	// (0x00081418) cell_imed_colour_pane_g1

0xb9a8,	// (0x00081429) hgihlgiht_grid_pane_cp016_ParamLimits

0xb9a8,	// (0x00081429) hgihlgiht_grid_pane_cp016

0x7564,	// (0x0007cfe5) cell_imed_effect_pane_g1

0x756c,	// (0x0007cfed) grid_highlight_pane_cp017

0xb9b9,	// (0x0008143a) list_imed_single_pane_ParamLimits

0xb9b9,	// (0x0008143a) list_imed_single_pane

0xabf1,	// (0x00080672) list_highlight_pane_cp07

0xb9cd,	// (0x0008144e) list_imed_aspect_pane_comp1_t1

0x59e2,	// (0x0007b463) bg_tb_trans_pane_cp05

0xb9ef,	// (0x00081470) popup_imed_adjust2_window_g1

0xba16,	// (0x00081497) popup_imed_adjust2_window_t1

0xba2e,	// (0x000814af) slider_imed_adjust_pane

0xba42,	// (0x000814c3) slider_imed_adjust_pane_g1

0xba52,	// (0x000814d3) slider_imed_adjust_pane_g2

0xba62,	// (0x000814e3) slider_imed_adjust_pane_g3

0xba73,	// (0x000814f4) slider_imed_adjust_pane_g4

0x0003,

0xf7fe,	// (0x0008527f) slider_imed_adjust_pane_g

0x7575,	// (0x0007cff6) aid_size_cell_clipart2

0x7581,	// (0x0007d002) grid_imed_clipart_pane

0xba84,	// (0x00081505) scroll_pane_cp031

0x758b,	// (0x0007d00c) cell_imed_clipart_pane_ParamLimits

0x758b,	// (0x0007d00c) cell_imed_clipart_pane

0x75a8,	// (0x0007d029) cell_imed_clipart_pane_g1

0xabf1,	// (0x00080672) grid_highlight_pane_cp014

0x726a,	// (0x0007cceb) main_clock2_pane_g1_ParamLimits

0x726a,	// (0x0007cceb) main_clock2_pane_g1

0x739c,	// (0x0007ce1d) aid_call2_pane_cp10

0x73ae,	// (0x0007ce2f) aid_call_pane_cp10

0x3532,	// (0x00078fb3) popup_clock_analogue_window_cp10_g1

0x3532,	// (0x00078fb3) popup_clock_analogue_window_cp10_g2

0x73c0,	// (0x0007ce41) popup_clock_analogue_window_cp10_g3

0x73c0,	// (0x0007ce41) popup_clock_analogue_window_cp10_g4

0x3532,	// (0x00078fb3) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7ec,	// (0x0008526d) popup_clock_analogue_window_cp10_g

0x73d6,	// (0x0007ce57) popup_clock_analogue_window_cp10_t1

0x7407,	// (0x0007ce88) clock_digital_number_pane_cp10_ParamLimits

0x7407,	// (0x0007ce88) clock_digital_number_pane_cp10

0x7421,	// (0x0007cea2) clock_digital_number_pane_cp11_ParamLimits

0x7421,	// (0x0007cea2) clock_digital_number_pane_cp11

0x743b,	// (0x0007cebc) clock_digital_number_pane_cp12_ParamLimits

0x743b,	// (0x0007cebc) clock_digital_number_pane_cp12

0x7455,	// (0x0007ced6) clock_digital_number_pane_cp13_ParamLimits

0x7455,	// (0x0007ced6) clock_digital_number_pane_cp13

0x746f,	// (0x0007cef0) clock_digital_separator_pane_cp10_ParamLimits

0x746f,	// (0x0007cef0) clock_digital_separator_pane_cp10

0x7489,	// (0x0007cf0a) popup_clock_digital_window_cp02_t1_ParamLimits

0x7489,	// (0x0007cf0a) popup_clock_digital_window_cp02_t1

0xe815,	// (0x00084296) clock_digital_number_pane_cp10_g1

0xe815,	// (0x00084296) clock_digital_number_pane_cp10_g2

0x0001,

0x0385,	// (0x00075e06) clock_digital_number_pane_cp10_g

0xe815,	// (0x00084296) clock_digital_separator_pane_cp10_g1

0xe815,	// (0x00084296) clock_digital_separator_pane_g2_cp10

0x3752,	// (0x000791d3) navi_pane_vded_g4

0x375b,	// (0x000791dc) navi_pane_vded_g5

0x3764,	// (0x000791e5) navi_pane_vded_t1

0xabf1,	// (0x00080672) main_vded_pane

0x75b1,	// (0x0007d032) main_vded_pane_g1

0x75bd,	// (0x0007d03e) main_vded_pane_g2

0x75c9,	// (0x0007d04a) main_vded_pane_g3

0x0002,

0xf807,	// (0x00085288) main_vded_pane_g

0x75d5,	// (0x0007d056) main_vded_pane_t1

0x75e3,	// (0x0007d064) main_vded_pane_t2

0x0001,

0xf80e,	// (0x0008528f) main_vded_pane_t

0x75f1,	// (0x0007d072) vded_slider_pane

0x75fb,	// (0x0007d07c) vded_video_pane

0xba8c,	// (0x0008150d) vded_video_pane_g1

0x7607,	// (0x0007d088) vded_video_pane_g2

0xb494,	// (0x00080f15) vded_video_pane_g3

0x0002,

0xf813,	// (0x00085294) vded_video_pane_g

0xba96,	// (0x00081517) vded_slider_pane_g1

0xb19d,	// (0x00080c1e) vded_slider_pane_g2

0xba9f,	// (0x00081520) vded_slider_pane_g3

0xbaa8,	// (0x00081529) vded_slider_pane_g4

0xbab1,	// (0x00081532) vded_slider_pane_g5

0x0004,

0xf81a,	// (0x0008529b) vded_slider_pane_g

0x7008,	// (0x0007ca89) mup3_rocker_pane_ParamLimits

0x7008,	// (0x0007ca89) mup3_rocker_pane

0x7610,	// (0x0007d091) mup3_control_keys_pane_g1

0x7618,	// (0x0007d099) mup3_control_keys_pane_g2

0x7620,	// (0x0007d0a1) mup3_control_keys_pane_g3

0x7628,	// (0x0007d0a9) mup3_control_keys_pane_g4

0x0003,

0xf825,	// (0x000852a6) mup3_control_keys_pane_g

0x16e2,	// (0x00077163) popup_toolbar2_fixed_window_cp01_ParamLimits

0x16e2,	// (0x00077163) popup_toolbar2_fixed_window_cp01

0x703e,	// (0x0007cabf) popup_toolbar2_fixed_window_cp02_ParamLimits

0x703e,	// (0x0007cabf) popup_toolbar2_fixed_window_cp02

0x4a3d,	// (0x0007a4be) popup_call2_audio_second_window_t4_ParamLimits

0x4a3d,	// (0x0007a4be) popup_call2_audio_second_window_t4

0x4f6b,	// (0x0007a9ec) popup_call2_audio_first_window_t6_ParamLimits

0x4f6b,	// (0x0007a9ec) popup_call2_audio_first_window_t6

0x5201,	// (0x0007ac82) popup_call2_audio_out_window_t6_ParamLimits

0x5201,	// (0x0007ac82) popup_call2_audio_out_window_t6

0xabf1,	// (0x00080672) main_vitu_pane

0x7638,	// (0x0007d0b9) aid_size_cell_itu_ParamLimits

0x7638,	// (0x0007d0b9) aid_size_cell_itu

0xac6a,	// (0x000806eb) bg_popup_window_pane_cp08_ParamLimits

0xac6a,	// (0x000806eb) bg_popup_window_pane_cp08

0x764e,	// (0x0007d0cf) field_vitu_entry_pane_ParamLimits

0x764e,	// (0x0007d0cf) field_vitu_entry_pane

0x7665,	// (0x0007d0e6) grid_vitu_function_pane_ParamLimits

0x7665,	// (0x0007d0e6) grid_vitu_function_pane

0x7680,	// (0x0007d101) grid_vitu_itu_pane_ParamLimits

0x7680,	// (0x0007d101) grid_vitu_itu_pane

0x769e,	// (0x0007d11f) cell_vitu_itu_pane_ParamLimits

0x769e,	// (0x0007d11f) cell_vitu_itu_pane

0x76c4,	// (0x0007d145) cell_vitu_function_pane_ParamLimits

0x76c4,	// (0x0007d145) cell_vitu_function_pane

0xac6a,	// (0x000806eb) bg_popup_sub_pane_cp08_ParamLimits

0xac6a,	// (0x000806eb) bg_popup_sub_pane_cp08

0x76df,	// (0x0007d160) field_vitu_entry_pane_t1_ParamLimits

0x76df,	// (0x0007d160) field_vitu_entry_pane_t1

0xbad2,	// (0x00081553) field_vitu_entry_pane_t2_ParamLimits

0xbad2,	// (0x00081553) field_vitu_entry_pane_t2

0x0001,

0xf833,	// (0x000852b4) field_vitu_entry_pane_t_ParamLimits

0xf833,	// (0x000852b4) field_vitu_entry_pane_t

0xbaef,	// (0x00081570) bg_button_pane_cp05_ParamLimits

0xbaef,	// (0x00081570) bg_button_pane_cp05

0x76ff,	// (0x0007d180) cell_vitu_itu_pane_g1

0x7717,	// (0x0007d198) cell_vitu_itu_pane_t1_ParamLimits

0x7717,	// (0x0007d198) cell_vitu_itu_pane_t1

0x7729,	// (0x0007d1aa) cell_vitu_itu_pane_t2_ParamLimits

0x7729,	// (0x0007d1aa) cell_vitu_itu_pane_t2

0x0002,

0xf838,	// (0x000852b9) cell_vitu_itu_pane_t_ParamLimits

0xf838,	// (0x000852b9) cell_vitu_itu_pane_t

0xbafd,	// (0x0008157e) bg_button_pane_cp07

0x775e,	// (0x0007d1df) cell_vitu_function_pane_g1

0xad54,	// (0x000807d5) main_calc_pane_g1

0x151a,	// (0x00076f9b) aid_visual_content_pane

0xabf1,	// (0x00080672) main_vradio_pane

0x7767,	// (0x0007d1e8) main_vradio_pane_g1_ParamLimits

0x7767,	// (0x0007d1e8) main_vradio_pane_g1

0xbb07,	// (0x00081588) main_vradio_pane_g2_ParamLimits

0xbb07,	// (0x00081588) main_vradio_pane_g2

0x0001,

0xf83f,	// (0x000852c0) main_vradio_pane_g_ParamLimits

0xf83f,	// (0x000852c0) main_vradio_pane_g

0x777e,	// (0x0007d1ff) main_vradio_pane_t1_ParamLimits

0x777e,	// (0x0007d1ff) main_vradio_pane_t1

0x7793,	// (0x0007d214) main_vradio_pane_t2_ParamLimits

0x7793,	// (0x0007d214) main_vradio_pane_t2

0xbb14,	// (0x00081595) main_vradio_pane_t3_ParamLimits

0xbb14,	// (0x00081595) main_vradio_pane_t3

0x0002,

0xf844,	// (0x000852c5) main_vradio_pane_t_ParamLimits

0xf844,	// (0x000852c5) main_vradio_pane_t

0x77a8,	// (0x0007d229) vradio_rocker_control_pane_ParamLimits

0x77a8,	// (0x0007d229) vradio_rocker_control_pane

0x77ba,	// (0x0007d23b) vradio_station_info_pane_ParamLimits

0x77ba,	// (0x0007d23b) vradio_station_info_pane

0xbb28,	// (0x000815a9) vradio_frequency_info_pane_ParamLimits

0xbb28,	// (0x000815a9) vradio_frequency_info_pane

0xb494,	// (0x00080f15) vradio_station_info_pane_g1

0xbb37,	// (0x000815b8) vradio_station_info_pane_t1_ParamLimits

0xbb37,	// (0x000815b8) vradio_station_info_pane_t1

0xbb59,	// (0x000815da) vradio_station_info_pane_t2_ParamLimits

0xbb59,	// (0x000815da) vradio_station_info_pane_t2

0x0001,

0xf84b,	// (0x000852cc) vradio_station_info_pane_t_ParamLimits

0xf84b,	// (0x000852cc) vradio_station_info_pane_t

0xbb6b,	// (0x000815ec) vradio_tuning_pane

0xbb73,	// (0x000815f4) vradio_rocker_control_pane_g1

0xbb7b,	// (0x000815fc) vradio_rocker_control_pane_g2

0xbb83,	// (0x00081604) vradio_rocker_control_pane_g3

0xbb8b,	// (0x0008160c) vradio_rocker_control_pane_g4

0xbb93,	// (0x00081614) vradio_rocker_control_pane_g5

0x0004,

0xf850,	// (0x000852d1) vradio_rocker_control_pane_g

0x77ca,	// (0x0007d24b) vradio_frequency_info_pane_g1

0xbb9b,	// (0x0008161c) vradio_frequency_info_pane_t1_ParamLimits

0xbb9b,	// (0x0008161c) vradio_frequency_info_pane_t1

0x77d4,	// (0x0007d255) vradio_tuning_pane_g1

0x77df,	// (0x0007d260) vradio_tuning_pane_t1

0xac27,	// (0x000806a8) area_side_right_pane_ParamLimits

0xac27,	// (0x000806a8) area_side_right_pane

0x598b,	// (0x0007b40c) status_small_pane_g1

0x5993,	// (0x0007b414) status_small_pane_g2

0x599c,	// (0x0007b41d) status_small_pane_g3

0x59a5,	// (0x0007b426) status_small_pane_g4

0x0003,

0xf615,	// (0x00085096) status_small_pane_g

0x59ae,	// (0x0007b42f) status_small_pane_t1

0xabf1,	// (0x00080672) main_video3_pane

0xbbaf,	// (0x00081630) cams_zoom_vslider_pane

0xbbb7,	// (0x00081638) image3_wide_pane_ParamLimits

0xbbb7,	// (0x00081638) image3_wide_pane

0xbbd1,	// (0x00081652) image3_wide_small_pane

0xbbdd,	// (0x0008165e) main_video3_pane_g1_ParamLimits

0xbbdd,	// (0x0008165e) main_video3_pane_g1

0xbbf9,	// (0x0008167a) main_video3_pane_g2_ParamLimits

0xbbf9,	// (0x0008167a) main_video3_pane_g2

0x0001,

0xf85b,	// (0x000852dc) main_video3_pane_g_ParamLimits

0xf85b,	// (0x000852dc) main_video3_pane_g

0xbc15,	// (0x00081696) main_video3_pane_t1_ParamLimits

0xbc15,	// (0x00081696) main_video3_pane_t1

0xbc40,	// (0x000816c1) main_video3_pane_t2_ParamLimits

0xbc40,	// (0x000816c1) main_video3_pane_t2

0xbc6d,	// (0x000816ee) main_video3_pane_t3_ParamLimits

0xbc6d,	// (0x000816ee) main_video3_pane_t3

0x0002,

0xf860,	// (0x000852e1) main_video3_pane_t_ParamLimits

0xf860,	// (0x000852e1) main_video3_pane_t

0xbc9a,	// (0x0008171b) cams_zoom_vslider_pane_g1

0xbca3,	// (0x00081724) cams_zoom_vslider_pane_g2

0x0001,

0xf867,	// (0x000852e8) cams_zoom_vslider_pane_g

0xbcab,	// (0x0008172c) small_slider_vertical_pane

0xb494,	// (0x00080f15) small_slider_vertical_pane_g1

0xb494,	// (0x00080f15) small_slider_vertical_pane_g2

0xbcb3,	// (0x00081734) small_slider_vertical_pane_g3

0x0002,

0xf86c,	// (0x000852ed) small_slider_vertical_pane_g

0xabf1,	// (0x00080672) main_hwr_training_pane

0xbcbc,	// (0x0008173d) hwr_training_instruct_pane_ParamLimits

0xbcbc,	// (0x0008173d) hwr_training_instruct_pane

0x77ee,	// (0x0007d26f) hwr_training_navi_pane_ParamLimits

0x77ee,	// (0x0007d26f) hwr_training_navi_pane

0x780d,	// (0x0007d28e) hwr_training_write_pane_ParamLimits

0x780d,	// (0x0007d28e) hwr_training_write_pane

0xabf1,	// (0x00080672) bg_frame_shadow_pane

0xbcf3,	// (0x00081774) hwr_training_write_pane_g1

0xbcfb,	// (0x0008177c) hwr_training_write_pane_g2

0xbd03,	// (0x00081784) hwr_training_write_pane_g3

0xbd0b,	// (0x0008178c) hwr_training_write_pane_g4

0xbd13,	// (0x00081794) hwr_training_write_pane_g5

0xbd1b,	// (0x0008179c) hwr_training_write_pane_g6

0xbd23,	// (0x000817a4) hwr_training_write_pane_g7

0x0006,

0xf873,	// (0x000852f4) hwr_training_write_pane_g

0xde5f,	// (0x000838e0) hwr_training_navi_pane_g1_ParamLimits

0xde5f,	// (0x000838e0) hwr_training_navi_pane_g1

0xde71,	// (0x000838f2) hwr_training_navi_pane_g2_ParamLimits

0xde71,	// (0x000838f2) hwr_training_navi_pane_g2

0xde83,	// (0x00083904) hwr_training_navi_pane_g3_ParamLimits

0xde83,	// (0x00083904) hwr_training_navi_pane_g3

0xde93,	// (0x00083914) hwr_training_navi_pane_g4_ParamLimits

0xde93,	// (0x00083914) hwr_training_navi_pane_g4

0x0004,

0xf882,	// (0x00085303) hwr_training_navi_pane_g_ParamLimits

0xf882,	// (0x00085303) hwr_training_navi_pane_g

0xdea0,	// (0x00083921) hwr_training_navi_pane_t1

0x7855,	// (0x0007d2d6) list_single_hwr_training_instruct_pane_ParamLimits

0x7855,	// (0x0007d2d6) list_single_hwr_training_instruct_pane

0xbd2b,	// (0x000817ac) list_single_hwr_training_instruct_pane_t1

0xb3d4,	// (0x00080e55) bg_frame_shadow_pane_g1

0xbd3a,	// (0x000817bb) bg_frame_shadow_pane_g2

0xbd42,	// (0x000817c3) bg_frame_shadow_pane_g3

0xbd4a,	// (0x000817cb) bg_frame_shadow_pane_g4

0xbd52,	// (0x000817d3) bg_frame_shadow_pane_g5

0xbd5a,	// (0x000817db) bg_frame_shadow_pane_g6

0xbd62,	// (0x000817e3) bg_frame_shadow_pane_g7

0xe9b3,	// (0x00084434) bg_frame_shadow_pane_g8

0x0007,

0xf88d,	// (0x0008530e) bg_frame_shadow_pane_g

0xabf1,	// (0x00080672) main_video_tele_dialer_pane

0x7871,	// (0x0007d2f2) aid_size_cell_video_keypad_ParamLimits

0x7871,	// (0x0007d2f2) aid_size_cell_video_keypad

0x788b,	// (0x0007d30c) grid_video_dialer_keypad_pane_ParamLimits

0x788b,	// (0x0007d30c) grid_video_dialer_keypad_pane

0x78d9,	// (0x0007d35a) video_down_pane_cp_ParamLimits

0x78d9,	// (0x0007d35a) video_down_pane_cp

0x790d,	// (0x0007d38e) cell_video_dialer_keypad_pane_ParamLimits

0x790d,	// (0x0007d38e) cell_video_dialer_keypad_pane

0xbd6a,	// (0x000817eb) bg_button_pane_cp08_ParamLimits

0xbd6a,	// (0x000817eb) bg_button_pane_cp08

0x7933,	// (0x0007d3b4) cell_video_dialer_keypad_pane_g1_ParamLimits

0x7933,	// (0x0007d3b4) cell_video_dialer_keypad_pane_g1

0x6ff2,	// (0x0007ca73) mup3_rocker2_pane_ParamLimits

0x6ff2,	// (0x0007ca73) mup3_rocker2_pane

0xb494,	// (0x00080f15) mup3_rocker2_pane_g1

0x59f0,	// (0x0007b471) main_dialer2_pane

0xabf1,	// (0x00080672) main_mp4_pane

0xdeb6,	// (0x00083937) main_mp4_pane_g1_ParamLimits

0xdeb6,	// (0x00083937) main_mp4_pane_g1

0xdeb6,	// (0x00083937) main_mp4_pane_g2_ParamLimits

0xdeb6,	// (0x00083937) main_mp4_pane_g2

0x796e,	// (0x0007d3ef) main_mp4_pane_g3_ParamLimits

0x796e,	// (0x0007d3ef) main_mp4_pane_g3

0xdec4,	// (0x00083945) main_mp4_pane_g4_ParamLimits

0xdec4,	// (0x00083945) main_mp4_pane_g4

0xdede,	// (0x0008395f) main_mp4_pane_g5_ParamLimits

0xdede,	// (0x0008395f) main_mp4_pane_g5

0x0005,

0xf8ad,	// (0x0008532e) main_mp4_pane_g_ParamLimits

0xf8ad,	// (0x0008532e) main_mp4_pane_g

0xdf12,	// (0x00083993) main_mp4_pane_t1_ParamLimits

0xdf12,	// (0x00083993) main_mp4_pane_t1

0xdf6e,	// (0x000839ef) main_mp4_pane_t2_ParamLimits

0xdf6e,	// (0x000839ef) main_mp4_pane_t2

0xbd76,	// (0x000817f7) main_mp4_pane_t3_ParamLimits

0xbd76,	// (0x000817f7) main_mp4_pane_t3

0xdfc0,	// (0x00083a41) main_mp4_pane_t4_ParamLimits

0xdfc0,	// (0x00083a41) main_mp4_pane_t4

0x0003,

0xf8ba,	// (0x0008533b) main_mp4_pane_t_ParamLimits

0xf8ba,	// (0x0008533b) main_mp4_pane_t

0xe000,	// (0x00083a81) mp4_progress_pane_ParamLimits

0xe000,	// (0x00083a81) mp4_progress_pane

0xe04a,	// (0x00083acb) mp4_rocker_pane_ParamLimits

0xe04a,	// (0x00083acb) mp4_rocker_pane

0xbd9e,	// (0x0008181f) mp4_progress_pane_t1

0xbdb7,	// (0x00081838) mp4_progress_pane_t2

0x0001,

0xf8c3,	// (0x00085344) mp4_progress_pane_t

0xbdd0,	// (0x00081851) mup_progress_pane_cp04

0xb494,	// (0x00080f15) mp4_rocker_pane_g1

0x79b8,	// (0x0007d439) aid_cell_size_keypad2_ParamLimits

0x79b8,	// (0x0007d439) aid_cell_size_keypad2

0x79ce,	// (0x0007d44f) dialer2_ne_pane_ParamLimits

0x79ce,	// (0x0007d44f) dialer2_ne_pane

0x79e6,	// (0x0007d467) grid_dialer2_keypad_pane_ParamLimits

0x79e6,	// (0x0007d467) grid_dialer2_keypad_pane

0xb273,	// (0x00080cf4) bg_popup_call_pane_cp07_ParamLimits

0xb273,	// (0x00080cf4) bg_popup_call_pane_cp07

0x7a02,	// (0x0007d483) dialer2_ne_pane_t1_ParamLimits

0x7a02,	// (0x0007d483) dialer2_ne_pane_t1

0x7a42,	// (0x0007d4c3) cell_dialer2_keypad_pane_ParamLimits

0x7a42,	// (0x0007d4c3) cell_dialer2_keypad_pane

0xbdee,	// (0x0008186f) bg_button_pane_pane_cp04_ParamLimits

0xbdee,	// (0x0008186f) bg_button_pane_pane_cp04

0x7a68,	// (0x0007d4e9) cell_dialer2_keypad_pane_g1_ParamLimits

0x7a68,	// (0x0007d4e9) cell_dialer2_keypad_pane_g1

0x2313,	// (0x00077d94) aid_placing_vt_set_content_ParamLimits

0x2313,	// (0x00077d94) aid_placing_vt_set_content

0x2337,	// (0x00077db8) aid_placing_vt_set_title_ParamLimits

0x2337,	// (0x00077db8) aid_placing_vt_set_title

0xabf1,	// (0x00080672) main_image3_pane

0x7b2e,	// (0x0007d5af) area_side_right_pane_cp01_ParamLimits

0x7b2e,	// (0x0007d5af) area_side_right_pane_cp01

0xdeb6,	// (0x00083937) main_image3_pane_g1_ParamLimits

0xdeb6,	// (0x00083937) main_image3_pane_g1

0x7b47,	// (0x0007d5c8) main_image3_pane_g2_ParamLimits

0x7b47,	// (0x0007d5c8) main_image3_pane_g2

0x7b6f,	// (0x0007d5f0) main_image3_pane_g3_ParamLimits

0x7b6f,	// (0x0007d5f0) main_image3_pane_g3

0x7b99,	// (0x0007d61a) main_image3_pane_g4_ParamLimits

0x7b99,	// (0x0007d61a) main_image3_pane_g4

0x0003,

0xf8d2,	// (0x00085353) main_image3_pane_g_ParamLimits

0xf8d2,	// (0x00085353) main_image3_pane_g

0x7bc3,	// (0x0007d644) main_image3_pane_t1_ParamLimits

0x7bc3,	// (0x0007d644) main_image3_pane_t1

0x7c1b,	// (0x0007d69c) main_image3_pane_t2_ParamLimits

0x7c1b,	// (0x0007d69c) main_image3_pane_t2

0x7c6d,	// (0x0007d6ee) main_image3_pane_t3_ParamLimits

0x7c6d,	// (0x0007d6ee) main_image3_pane_t3

0x0003,

0xf8db,	// (0x0008535c) main_image3_pane_t_ParamLimits

0xf8db,	// (0x0008535c) main_image3_pane_t

0xac6a,	// (0x000806eb) grid_sctrl_middle_pane_cp01_ParamLimits

0xac6a,	// (0x000806eb) grid_sctrl_middle_pane_cp01

0x7cf5,	// (0x0007d776) cell_sctrl_middle_pane_cp01_ParamLimits

0x7cf5,	// (0x0007d776) cell_sctrl_middle_pane_cp01

0x7d12,	// (0x0007d793) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x7d12,	// (0x0007d793) cell_sctrl_middle_pane_cp01_g1

0xabf1,	// (0x00080672) main_call4_pane

0x7d27,	// (0x0007d7a8) aid_size_button_call4_ParamLimits

0x7d27,	// (0x0007d7a8) aid_size_button_call4

0x7d5a,	// (0x0007d7db) call4_windows_pane_ParamLimits

0x7d5a,	// (0x0007d7db) call4_windows_pane

0x7d7c,	// (0x0007d7fd) grid_call4_button_pane_ParamLimits

0x7d7c,	// (0x0007d7fd) grid_call4_button_pane

0xbdfa,	// (0x0008187b) call4_windows_conf_pane

0xbe15,	// (0x00081896) popup_call4_audio_first_window_ParamLimits

0xbe15,	// (0x00081896) popup_call4_audio_first_window

0xbe63,	// (0x000818e4) popup_call4_audio_second_window_ParamLimits

0xbe63,	// (0x000818e4) popup_call4_audio_second_window

0xbe79,	// (0x000818fa) popup_call4_audio_wait_window_ParamLimits

0xbe79,	// (0x000818fa) popup_call4_audio_wait_window

0x7da7,	// (0x0007d828) cell_call4_button_pane_ParamLimits

0x7da7,	// (0x0007d828) cell_call4_button_pane

0x7dce,	// (0x0007d84f) bg_button_pane_cp09_ParamLimits

0x7dce,	// (0x0007d84f) bg_button_pane_cp09

0x7dda,	// (0x0007d85b) cell_call4_button_pane_g1_ParamLimits

0x7dda,	// (0x0007d85b) cell_call4_button_pane_g1

0x7e00,	// (0x0007d881) cell_call4_button_pane_t1_ParamLimits

0x7e00,	// (0x0007d881) cell_call4_button_pane_t1

0xbec1,	// (0x00081942) popup_call4_audio_conf_window_ParamLimits

0xbec1,	// (0x00081942) popup_call4_audio_conf_window

0x7054,	// (0x0007cad5) mup3_progress_pane_t1_ParamLimits

0x706b,	// (0x0007caec) mup3_progress_pane_t2_ParamLimits

0xb7b3,	// (0x00081234) mup3_progress_pane_t3_ParamLimits

0xf7b9,	// (0x0008523a) mup3_progress_pane_t_ParamLimits

0xb7ca,	// (0x0008124b) mup_progress_pane_cp03_ParamLimits

0x7630,	// (0x0007d0b1) mup3_control_keys_pane_g4_copy1

0xe02e,	// (0x00083aaf) mp4_rocker2_pane_ParamLimits

0xe02e,	// (0x00083aaf) mp4_rocker2_pane

0xbedb,	// (0x0008195c) mp4_rocker2_pane_g1

0xbee3,	// (0x00081964) mp4_rocker2_pane_g2

0xe0a0,	// (0x00083b21) mp4_rocker2_pane_g3

0xe0a8,	// (0x00083b29) mp4_rocker2_pane_g4

0xe0b0,	// (0x00083b31) mp4_rocker2_pane_g5

0x0004,

0xf8e4,	// (0x00085365) mp4_rocker2_pane_g

0xabf1,	// (0x00080672) main_camera4_pane

0xabf1,	// (0x00080672) main_video4_pane

0x78a7,	// (0x0007d328) main_video_tele_dialer_pane_t1_ParamLimits

0x78a7,	// (0x0007d328) main_video_tele_dialer_pane_t1

0x78c0,	// (0x0007d341) main_video_tele_dialer_pane_t2_ParamLimits

0x78c0,	// (0x0007d341) main_video_tele_dialer_pane_t2

0x0001,

0xf89e,	// (0x0008531f) main_video_tele_dialer_pane_t_ParamLimits

0xf89e,	// (0x0008531f) main_video_tele_dialer_pane_t

0x7e3e,	// (0x0007d8bf) cam4_autofocus_pane_ParamLimits

0x7e3e,	// (0x0007d8bf) cam4_autofocus_pane

0x7e54,	// (0x0007d8d5) cam4_image_uncrop_pane_ParamLimits

0x7e54,	// (0x0007d8d5) cam4_image_uncrop_pane

0x7e6d,	// (0x0007d8ee) cam4_indicators_pane_ParamLimits

0x7e6d,	// (0x0007d8ee) cam4_indicators_pane

0x7e9c,	// (0x0007d91d) main_camera4_pane_g1_ParamLimits

0x7e9c,	// (0x0007d91d) main_camera4_pane_g1

0x7ea8,	// (0x0007d929) main_camera4_pane_g2_ParamLimits

0x7ea8,	// (0x0007d929) main_camera4_pane_g2

0x7ea8,	// (0x0007d929) main_camera4_pane_g3_ParamLimits

0x7ea8,	// (0x0007d929) main_camera4_pane_g3

0x7eb4,	// (0x0007d935) main_camera4_pane_g4_ParamLimits

0x7eb4,	// (0x0007d935) main_camera4_pane_g4

0x7ec0,	// (0x0007d941) main_camera4_pane_g5_ParamLimits

0x7ec0,	// (0x0007d941) main_camera4_pane_g5

0x0005,

0xf8ef,	// (0x00085370) main_camera4_pane_g_ParamLimits

0xf8ef,	// (0x00085370) main_camera4_pane_g

0x7edd,	// (0x0007d95e) main_camera4_pane_t1_ParamLimits

0x7edd,	// (0x0007d95e) main_camera4_pane_t1

0xb6c4,	// (0x00081145) bg_tb_trans_pane_cp06

0xe0de,	// (0x00083b5f) cam4_indicators_pane_g1

0xe0eb,	// (0x00083b6c) cam4_indicators_pane_g2

0x0002,

0xf90a,	// (0x0008538b) cam4_indicators_pane_g

0xe10b,	// (0x00083b8c) cam4_indicators_pane_t1

0x7f41,	// (0x0007d9c2) main_video4_pane_g1_ParamLimits

0x7f41,	// (0x0007d9c2) main_video4_pane_g1

0x7f53,	// (0x0007d9d4) main_video4_pane_g2_ParamLimits

0x7f53,	// (0x0007d9d4) main_video4_pane_g2

0x7f67,	// (0x0007d9e8) main_video4_pane_g3_ParamLimits

0x7f67,	// (0x0007d9e8) main_video4_pane_g3

0x7f77,	// (0x0007d9f8) main_video4_pane_g4_ParamLimits

0x7f77,	// (0x0007d9f8) main_video4_pane_g4

0x0004,

0xf911,	// (0x00085392) main_video4_pane_g_ParamLimits

0xf911,	// (0x00085392) main_video4_pane_g

0x7f97,	// (0x0007da18) vid4_indicators_pane_ParamLimits

0x7f97,	// (0x0007da18) vid4_indicators_pane

0x7fc7,	// (0x0007da48) video4_image_uncrop_cif_pane_ParamLimits

0x7fc7,	// (0x0007da48) video4_image_uncrop_cif_pane

0x7fe1,	// (0x0007da62) video4_image_uncrop_nhd_pane_ParamLimits

0x7fe1,	// (0x0007da62) video4_image_uncrop_nhd_pane

0x7e54,	// (0x0007d8d5) video4_image_uncrop_vga_pane_ParamLimits

0x7e54,	// (0x0007d8d5) video4_image_uncrop_vga_pane

0xbeff,	// (0x00081980) bg_tb_trans_pane_cp07

0x7ff7,	// (0x0007da78) vid4_indicators_pane_g1

0x8004,	// (0x0007da85) vid4_indicators_pane_g2

0x8011,	// (0x0007da92) vid4_indicators_pane_g3

0x0004,

0xf91c,	// (0x0008539d) vid4_indicators_pane_g

0x8036,	// (0x0007dab7) vid4_indicators_pane_t1

0x8048,	// (0x0007dac9) cam4_autofocus_pane_g1

0x8050,	// (0x0007dad1) cam4_autofocus_pane_g2

0x8058,	// (0x0007dad9) cam4_autofocus_pane_g3

0x0002,

0xf927,	// (0x000853a8) cam4_autofocus_pane_g

0x8060,	// (0x0007dae1) cam4_autofocus_pane_g3_copy1

0x78f1,	// (0x0007d372) video_down_pane_cp_t1

0x78ff,	// (0x0007d380) video_down_pane_cp_t2

0x0001,

0xf8a3,	// (0x00085324) video_down_pane_cp_t

0xac6a,	// (0x000806eb) popup_vitu2_window_ParamLimits

0xac6a,	// (0x000806eb) popup_vitu2_window

0x8068,	// (0x0007dae9) aid_size_cell2_itu2_ParamLimits

0x8068,	// (0x0007dae9) aid_size_cell2_itu2

0x808e,	// (0x0007db0f) aid_size_cell_itu2_ParamLimits

0x808e,	// (0x0007db0f) aid_size_cell_itu2

0x80ec,	// (0x0007db6d) bg_popup_window_pane_cp09_ParamLimits

0x80ec,	// (0x0007db6d) bg_popup_window_pane_cp09

0x80fa,	// (0x0007db7b) field_vitu2_entry_pane_ParamLimits

0x80fa,	// (0x0007db7b) field_vitu2_entry_pane

0x8122,	// (0x0007dba3) grid_vitu2_function_pane_ParamLimits

0x8122,	// (0x0007dba3) grid_vitu2_function_pane

0x8173,	// (0x0007dbf4) grid_vitu2_itu_pane_ParamLimits

0x8173,	// (0x0007dbf4) grid_vitu2_itu_pane

0x81fe,	// (0x0007dc7f) cell_vitu2_itu_pane_ParamLimits

0x81fe,	// (0x0007dc7f) cell_vitu2_itu_pane

0x8224,	// (0x0007dca5) cell_vitu2_function_pane_ParamLimits

0x8224,	// (0x0007dca5) cell_vitu2_function_pane

0xbf0d,	// (0x0008198e) bg_popup_call_pane_cp08_ParamLimits

0xbf0d,	// (0x0008198e) bg_popup_call_pane_cp08

0xbf26,	// (0x000819a7) field_vitu2_entry_pane_g1

0xbf32,	// (0x000819b3) field_vitu2_entry_pane_g2

0x0002,

0xf92e,	// (0x000853af) field_vitu2_entry_pane_g

0x0c67,	// (0x000766e8) field_vitu2_entry_pane_t1_ParamLimits

0x0c67,	// (0x000766e8) field_vitu2_entry_pane_t1

0xbf4c,	// (0x000819cd) field_vitu2_entry_pane_t2_ParamLimits

0xbf4c,	// (0x000819cd) field_vitu2_entry_pane_t2

0x0001,

0xf935,	// (0x000853b6) field_vitu2_entry_pane_t_ParamLimits

0xf935,	// (0x000853b6) field_vitu2_entry_pane_t

0x8268,	// (0x0007dce9) bg_button_pane_cp010_ParamLimits

0x8268,	// (0x0007dce9) bg_button_pane_cp010

0x8276,	// (0x0007dcf7) cell_vitu2_itu_pane_g1

0x8294,	// (0x0007dd15) cell_vitu2_itu_pane_t1_ParamLimits

0x8294,	// (0x0007dd15) cell_vitu2_itu_pane_t1

0x0c84,	// (0x00076705) cell_vitu2_itu_pane_t2_ParamLimits

0x0c84,	// (0x00076705) cell_vitu2_itu_pane_t2

0x0002,

0xf93f,	// (0x000853c0) cell_vitu2_itu_pane_t_ParamLimits

0xf93f,	// (0x000853c0) cell_vitu2_itu_pane_t

0xac6a,	// (0x000806eb) bg_button_pane_cp011

0x82fa,	// (0x0007dd7b) cell_vitu2_function_pane_g1

0xabf1,	// (0x00080672) main_myfav_hc_pane

0x7cbd,	// (0x0007d73e) popup_image3_note_pane_ParamLimits

0x7cbd,	// (0x0007d73e) popup_image3_note_pane

0x7cd9,	// (0x0007d75a) popup_image3_tool_bar_pane_ParamLimits

0x7cd9,	// (0x0007d75a) popup_image3_tool_bar_pane

0x0d08,	// (0x00076789) cell_vitu2_itu_pane_t3_ParamLimits

0x0d08,	// (0x00076789) cell_vitu2_itu_pane_t3

0xabf1,	// (0x00080672) bg_popup_trans_pane

0xbf71,	// (0x000819f2) grid_image3_tool_bar_pane

0xbf7b,	// (0x000819fc) bg_popup_trans_pane_g1

0xecf2,	// (0x00084773) bg_popup_trans_pane_g2

0xbf83,	// (0x00081a04) bg_popup_trans_pane_g3

0xbf8b,	// (0x00081a0c) bg_popup_trans_pane_g4

0xbf93,	// (0x00081a14) bg_popup_trans_pane_g5

0xbf9b,	// (0x00081a1c) bg_popup_trans_pane_g6

0xbfa3,	// (0x00081a24) bg_popup_trans_pane_g7

0xbfab,	// (0x00081a2c) bg_popup_trans_pane_g8

0xecd2,	// (0x00084753) bg_popup_trans_pane_g9

0x0008,

0xf946,	// (0x000853c7) bg_popup_trans_pane_g

0xbfb3,	// (0x00081a34) cell_image3_tool_bar_pane_ParamLimits

0xbfb3,	// (0x00081a34) cell_image3_tool_bar_pane

0xb494,	// (0x00080f15) cell_image3_tool_bar_pane_g1

0xabf1,	// (0x00080672) bg_popup_trans_pane_cp1

0xbfc9,	// (0x00081a4a) popup_image3_note_pane_t1

0xbfd7,	// (0x00081a58) popup_image3_note_pane_t2

0xbfe5,	// (0x00081a66) popup_image3_note_pane_t3

0x0002,

0xf959,	// (0x000853da) popup_image3_note_pane_t

0xbff5,	// (0x00081a76) popup_image3_note_pane_t3_copy1

0x830e,	// (0x0007dd8f) bg_myfav_hc_instruction_pane_ParamLimits

0x830e,	// (0x0007dd8f) bg_myfav_hc_instruction_pane

0x8326,	// (0x0007dda7) cell_myfav_contact_pane_ParamLimits

0x8326,	// (0x0007dda7) cell_myfav_contact_pane

0x8342,	// (0x0007ddc3) cell_myfav_contact_pane_cp1_ParamLimits

0x8342,	// (0x0007ddc3) cell_myfav_contact_pane_cp1

0x835a,	// (0x0007dddb) cell_myfav_contact_pane_cp2_ParamLimits

0x835a,	// (0x0007dddb) cell_myfav_contact_pane_cp2

0x8372,	// (0x0007ddf3) cell_myfav_contact_pane_cp3_ParamLimits

0x8372,	// (0x0007ddf3) cell_myfav_contact_pane_cp3

0x8389,	// (0x0007de0a) cell_myfav_contact_pane_cp4_ParamLimits

0x8389,	// (0x0007de0a) cell_myfav_contact_pane_cp4

0x83a1,	// (0x0007de22) cell_myfav_contact_pane_cp5_ParamLimits

0x83a1,	// (0x0007de22) cell_myfav_contact_pane_cp5

0x83b5,	// (0x0007de36) cell_myfav_contact_pane_cp6_ParamLimits

0x83b5,	// (0x0007de36) cell_myfav_contact_pane_cp6

0x83cb,	// (0x0007de4c) cell_myfav_contact_pane_cp7_ParamLimits

0x83cb,	// (0x0007de4c) cell_myfav_contact_pane_cp7

0xc003,	// (0x00081a84) listscroll_gen_pane_cp05

0x83e3,	// (0x0007de64) main_myfav_hc_pane_g1_ParamLimits

0x83e3,	// (0x0007de64) main_myfav_hc_pane_g1

0x83fd,	// (0x0007de7e) main_myfav_hc_pane_g2_ParamLimits

0x83fd,	// (0x0007de7e) main_myfav_hc_pane_g2

0x0002,

0xf960,	// (0x000853e1) main_myfav_hc_pane_g_ParamLimits

0xf960,	// (0x000853e1) main_myfav_hc_pane_g

0x8431,	// (0x0007deb2) main_myfav_hc_pane_t1_ParamLimits

0x8431,	// (0x0007deb2) main_myfav_hc_pane_t1

0xc00c,	// (0x00081a8d) main_myfav_hc_pane_t2_ParamLimits

0xc00c,	// (0x00081a8d) main_myfav_hc_pane_t2

0xc01e,	// (0x00081a9f) main_myfav_hc_pane_t3_ParamLimits

0xc01e,	// (0x00081a9f) main_myfav_hc_pane_t3

0x8448,	// (0x0007dec9) main_myfav_hc_pane_t4_ParamLimits

0x8448,	// (0x0007dec9) main_myfav_hc_pane_t4

0x0004,

0xf967,	// (0x000853e8) main_myfav_hc_pane_t_ParamLimits

0xf967,	// (0x000853e8) main_myfav_hc_pane_t

0xb494,	// (0x00080f15) bg_myfav_hc_instruction_pane_g1

0xc030,	// (0x00081ab1) cell_myfav_contact_pane_g1_ParamLimits

0xc030,	// (0x00081ab1) cell_myfav_contact_pane_g1

0xc030,	// (0x00081ab1) cell_myfav_contact_pane_g2_ParamLimits

0xc030,	// (0x00081ab1) cell_myfav_contact_pane_g2

0xc03c,	// (0x00081abd) cell_myfav_contact_pane_g3_ParamLimits

0xc03c,	// (0x00081abd) cell_myfav_contact_pane_g3

0xb79d,	// (0x0008121e) cell_myfav_contact_pane_g4_ParamLimits

0xb79d,	// (0x0008121e) cell_myfav_contact_pane_g4

0xc049,	// (0x00081aca) cell_myfav_contact_pane_g5_ParamLimits

0xc049,	// (0x00081aca) cell_myfav_contact_pane_g5

0x0004,

0xf972,	// (0x000853f3) cell_myfav_contact_pane_g_ParamLimits

0xf972,	// (0x000853f3) cell_myfav_contact_pane_g

0x8417,	// (0x0007de98) main_myfav_hc_pane_g3_ParamLimits

0x8417,	// (0x0007de98) main_myfav_hc_pane_g3

0x1642,	// (0x000770c3) popup_adpt_find_window

0x8472,	// (0x0007def3) afind_page_pane_ParamLimits

0x8472,	// (0x0007def3) afind_page_pane

0x8487,	// (0x0007df08) aid_size_cell_afind_ParamLimits

0x8487,	// (0x0007df08) aid_size_cell_afind

0x84a5,	// (0x0007df26) bg_popup_sub_pane_cp09_ParamLimits

0x84a5,	// (0x0007df26) bg_popup_sub_pane_cp09

0x84b2,	// (0x0007df33) find_pane_cp01_ParamLimits

0x84b2,	// (0x0007df33) find_pane_cp01

0xc055,	// (0x00081ad6) grid_afind_control_pane_ParamLimits

0xc055,	// (0x00081ad6) grid_afind_control_pane

0x84bf,	// (0x0007df40) grid_afind_pane_ParamLimits

0x84bf,	// (0x0007df40) grid_afind_pane

0x84e1,	// (0x0007df62) cell_afind_pane_ParamLimits

0x84e1,	// (0x0007df62) cell_afind_pane

0xb494,	// (0x00080f15) afind_page_pane_g1

0x8548,	// (0x0007dfc9) afind_page_pane_g2

0x8551,	// (0x0007dfd2) afind_page_pane_g3

0x0002,

0xf97d,	// (0x000853fe) afind_page_pane_g

0x855a,	// (0x0007dfdb) afind_page_pane_t1

0xc069,	// (0x00081aea) cell_afind_grid_control_pane_ParamLimits

0xc069,	// (0x00081aea) cell_afind_grid_control_pane

0xbdee,	// (0x0008186f) bg_button_pane_cp69_ParamLimits

0xbdee,	// (0x0008186f) bg_button_pane_cp69

0x857a,	// (0x0007dffb) cell_afind_pane_g1_ParamLimits

0x857a,	// (0x0007dffb) cell_afind_pane_g1

0x8587,	// (0x0007e008) cell_afind_pane_t1_ParamLimits

0x8587,	// (0x0007e008) cell_afind_pane_t1

0xeae9,	// (0x0008456a) bg_button_pane_cp72

0xc078,	// (0x00081af9) cell_afind_grid_control_pane_g1

0x44d5,	// (0x00079f56) aid_image_placing_area_ParamLimits

0x44d5,	// (0x00079f56) aid_image_placing_area

0xbaba,	// (0x0008153b) field_vitu_entry_pane_g1_ParamLimits

0xbaba,	// (0x0008153b) field_vitu_entry_pane_g1

0xbac6,	// (0x00081547) field_vitu_entry_pane_g2_ParamLimits

0xbac6,	// (0x00081547) field_vitu_entry_pane_g2

0x0001,

0xf82e,	// (0x000852af) field_vitu_entry_pane_g_ParamLimits

0xf82e,	// (0x000852af) field_vitu_entry_pane_g

0x76ff,	// (0x0007d180) cell_vitu_itu_pane_g1_ParamLimits

0x7741,	// (0x0007d1c2) cell_vitu_itu_pane_t3_ParamLimits

0x7741,	// (0x0007d1c2) cell_vitu_itu_pane_t3

0xbd9e,	// (0x0008181f) mp4_progress_pane_t1_ParamLimits

0xbdb7,	// (0x00081838) mp4_progress_pane_t2_ParamLimits

0xf8c3,	// (0x00085344) mp4_progress_pane_t_ParamLimits

0xbdd0,	// (0x00081851) mup_progress_pane_cp04_ParamLimits

0x845c,	// (0x0007dedd) main_myfav_hc_pane_t5_ParamLimits

0x845c,	// (0x0007dedd) main_myfav_hc_pane_t5

0xac17,	// (0x00080698) aid_zoom_text_primary

0x1642,	// (0x000770c3) popup_adpt_find_window_ParamLimits

0xac6a,	// (0x000806eb) main_cam_set_pane

0x7e86,	// (0x0007d907) cam4_zoom_pane_ParamLimits

0x7e86,	// (0x0007d907) cam4_zoom_pane

0x8599,	// (0x0007e01a) main_cam_set_pane_g1_ParamLimits

0x8599,	// (0x0007e01a) main_cam_set_pane_g1

0x85a7,	// (0x0007e028) main_cam_set_pane_g2_ParamLimits

0x85a7,	// (0x0007e028) main_cam_set_pane_g2

0x0001,

0xf984,	// (0x00085405) main_cam_set_pane_g_ParamLimits

0xf984,	// (0x00085405) main_cam_set_pane_g

0x85ca,	// (0x0007e04b) main_cam_set_pane_t1_ParamLimits

0x85ca,	// (0x0007e04b) main_cam_set_pane_t1

0x85e5,	// (0x0007e066) main_cset_listscroll_pane_ParamLimits

0x85e5,	// (0x0007e066) main_cset_listscroll_pane

0x8609,	// (0x0007e08a) main_cset_slider_pane_ParamLimits

0x8609,	// (0x0007e08a) main_cset_slider_pane

0xc089,	// (0x00081b0a) main_cset_list_pane_ParamLimits

0xc089,	// (0x00081b0a) main_cset_list_pane

0xc099,	// (0x00081b1a) scroll_pane_cp028

0x8633,	// (0x0007e0b4) aid_area_touch_slider

0x864f,	// (0x0007e0d0) cset_slider_pane

0x8679,	// (0x0007e0fa) main_cset_slider_pane_g1

0x868e,	// (0x0007e10f) main_cset_slider_pane_g2

0x0011,

0xf989,	// (0x0008540a) main_cset_slider_pane_g

0xc0d2,	// (0x00081b53) main_cset_slider_pane_t1

0x8750,	// (0x0007e1d1) main_cset_slider_pane_t2

0x876a,	// (0x0007e1eb) main_cset_slider_pane_t3

0x8784,	// (0x0007e205) main_cset_slider_pane_t4

0x879e,	// (0x0007e21f) main_cset_slider_pane_t5

0x87bc,	// (0x0007e23d) main_cset_slider_pane_t6

0x87d3,	// (0x0007e254) main_cset_slider_pane_t7

0x000e,

0xf9ae,	// (0x0008542f) main_cset_slider_pane_t

0x88df,	// (0x0007e360) cset_list_set_pane_ParamLimits

0x88df,	// (0x0007e360) cset_list_set_pane

0x88f3,	// (0x0007e374) aid_position_infowindow_above

0x88fb,	// (0x0007e37c) aid_position_infowindow_below

0xe139,	// (0x00083bba) cset_list_set_pane_g1_ParamLimits

0xe139,	// (0x00083bba) cset_list_set_pane_g1

0x0d60,	// (0x000767e1) cset_list_set_pane_g3_ParamLimits

0x0d60,	// (0x000767e1) cset_list_set_pane_g3

0x0001,

0xf9cd,	// (0x0008544e) cset_list_set_pane_g_ParamLimits

0xf9cd,	// (0x0008544e) cset_list_set_pane_g

0x0d6f,	// (0x000767f0) cset_list_set_pane_t1_ParamLimits

0x0d6f,	// (0x000767f0) cset_list_set_pane_t1

0xac6a,	// (0x000806eb) list_highlight_pane_cp021_ParamLimits

0xac6a,	// (0x000806eb) list_highlight_pane_cp021

0x3d1c,	// (0x0007979d) cset_slider_pane_g1

0x3d2e,	// (0x000797af) cset_slider_pane_g2

0x3d25,	// (0x000797a6) cset_slider_pane_g3

0x0002,

0xf9d2,	// (0x00085453) cset_slider_pane_g

0xe145,	// (0x00083bc6) aid_area_touch_cam4_zoom

0xe14d,	// (0x00083bce) cam4_zoom_cont_pane

0xe155,	// (0x00083bd6) cam4_zoom_pane_g1

0xe15d,	// (0x00083bde) cam4_zoom_pane_g2

0x8903,	// (0x0007e384) cam4_zoom_pane_g3

0x0002,

0xf9d9,	// (0x0008545a) cam4_zoom_pane_g

0xc172,	// (0x00081bf3) cam4_zoom_cont_pane_g1

0xc17b,	// (0x00081bfc) cam4_zoom_cont_pane_g2

0xc184,	// (0x00081c05) cam4_zoom_cont_pane_g3

0x0002,

0xf9e0,	// (0x00085461) cam4_zoom_cont_pane_g

0x7d45,	// (0x0007d7c6) call4_image_pane_ParamLimits

0x7d45,	// (0x0007d7c6) call4_image_pane

0xbdfa,	// (0x0008187b) call4_windows_conf_pane_ParamLimits

0xbe41,	// (0x000818c2) popup_call4_audio_in_window_ParamLimits

0xbe41,	// (0x000818c2) popup_call4_audio_in_window

0xabf1,	// (0x00080672) bg_popup_call2_act_pane_cp02

0xbeb9,	// (0x0008193a) call4_list_conf_pane

0xb494,	// (0x00080f15) call4_image_pane_g1

0xb494,	// (0x00080f15) call4_image_pane_g2

0x0001,

0xf6f9,	// (0x0008517a) call4_image_pane_g

0xc18d,	// (0x00081c0e) list_single_graphic_popup_conf4_pane_ParamLimits

0xc18d,	// (0x00081c0e) list_single_graphic_popup_conf4_pane

0xabf1,	// (0x00080672) list_highlight_pane_cp022

0xc1a2,	// (0x00081c23) list_single_graphic_popup_conf4_pane_g1

0x322a,	// (0x00078cab) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9e7,	// (0x00085468) list_single_graphic_popup_conf4_pane_g

0xc1aa,	// (0x00081c2b) list_single_graphic_popup_conf4_pane_t1

0x2451,	// (0x00077ed2) popup_vtel_slider_window_ParamLimits

0x2451,	// (0x00077ed2) popup_vtel_slider_window

0xbddc,	// (0x0008185d) dialer2_ne_pane_t2_ParamLimits

0xbddc,	// (0x0008185d) dialer2_ne_pane_t2

0x0001,

0xf8c8,	// (0x00085349) dialer2_ne_pane_t_ParamLimits

0xf8c8,	// (0x00085349) dialer2_ne_pane_t

0xb273,	// (0x00080cf4) bg_popup_sub_pane_cp010_ParamLimits

0xb273,	// (0x00080cf4) bg_popup_sub_pane_cp010

0x890b,	// (0x0007e38c) popup_vtel_slider_window_g1_ParamLimits

0x890b,	// (0x0007e38c) popup_vtel_slider_window_g1

0x891e,	// (0x0007e39f) popup_vtel_slider_window_g2_ParamLimits

0x891e,	// (0x0007e39f) popup_vtel_slider_window_g2

0x0003,

0xf9ec,	// (0x0008546d) popup_vtel_slider_window_g_ParamLimits

0xf9ec,	// (0x0008546d) popup_vtel_slider_window_g

0x8974,	// (0x0007e3f5) vtel_slider_pane_ParamLimits

0x8974,	// (0x0007e3f5) vtel_slider_pane

0x8996,	// (0x0007e417) vtel_slider_pane_g1_ParamLimits

0x8996,	// (0x0007e417) vtel_slider_pane_g1

0x89aa,	// (0x0007e42b) vtel_slider_pane_g2_ParamLimits

0x89aa,	// (0x0007e42b) vtel_slider_pane_g2

0x89c2,	// (0x0007e443) vtel_slider_pane_g3_ParamLimits

0x89c2,	// (0x0007e443) vtel_slider_pane_g3

0x8996,	// (0x0007e417) vtel_slider_pane_g4_ParamLimits

0x8996,	// (0x0007e417) vtel_slider_pane_g4

0x89d8,	// (0x0007e459) vtel_slider_pane_g5_ParamLimits

0x89d8,	// (0x0007e459) vtel_slider_pane_g5

0x0004,

0xf9f5,	// (0x00085476) vtel_slider_pane_g_ParamLimits

0xf9f5,	// (0x00085476) vtel_slider_pane_g

0xabf1,	// (0x00080672) main_gallery2_pane

0x80ba,	// (0x0007db3b) aid_size_row_itut2_dropdow_list_ParamLimits

0x80ba,	// (0x0007db3b) aid_size_row_itut2_dropdow_list

0x814a,	// (0x0007dbcb) grid_vitu2_function_top_pane_ParamLimits

0x814a,	// (0x0007dbcb) grid_vitu2_function_top_pane

0x81a9,	// (0x0007dc2a) popup_vitu2_dropdown_list_window_ParamLimits

0x81a9,	// (0x0007dc2a) popup_vitu2_dropdown_list_window

0x81d2,	// (0x0007dc53) popup_vitu2_match_list_window

0x89ee,	// (0x0007e46f) cell_vitu2_function_top_pane_ParamLimits

0x89ee,	// (0x0007e46f) cell_vitu2_function_top_pane

0x8a0e,	// (0x0007e48f) cell_vitu2_function_top_pane_cp01_ParamLimits

0x8a0e,	// (0x0007e48f) cell_vitu2_function_top_pane_cp01

0x8a2c,	// (0x0007e4ad) cell_vitu2_function_top_wide_pane_ParamLimits

0x8a2c,	// (0x0007e4ad) cell_vitu2_function_top_wide_pane

0xac6a,	// (0x000806eb) bg_button_pane_cp012

0x8a4a,	// (0x0007e4cb) cell_vitu2_function_top_pane_g1

0xe165,	// (0x00083be6) bg_button_pane_cp013_ParamLimits

0xe165,	// (0x00083be6) bg_button_pane_cp013

0x8a5e,	// (0x0007e4df) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x8a5e,	// (0x0007e4df) cell_vitu2_function_top_wide_pane_g1

0xac6a,	// (0x000806eb) bg_popup_sub_pane_cp20

0x8a76,	// (0x0007e4f7) list_vitu2_match_list_pane

0xbf7b,	// (0x000819fc) bg_popup_sub_pane_cp20_g1

0xbf83,	// (0x00081a04) bg_popup_sub_pane_cp20_g2

0xecf2,	// (0x00084773) bg_popup_sub_pane_cp20_g3

0xbf8b,	// (0x00081a0c) bg_popup_sub_pane_cp20_g4

0xecd2,	// (0x00084753) bg_popup_sub_pane_cp20_g5

0xc1ce,	// (0x00081c4f) bg_popup_sub_pane_cp20_g6

0xbf9b,	// (0x00081a1c) bg_popup_sub_pane_cp20_g7

0xbfa3,	// (0x00081a24) bg_popup_sub_pane_cp20_g8

0xbfab,	// (0x00081a2c) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa00,	// (0x00085481) bg_popup_sub_pane_cp20_g

0xe181,	// (0x00083c02) list_vitu2_match_list_item_pane_ParamLimits

0xe181,	// (0x00083c02) list_vitu2_match_list_item_pane

0xe193,	// (0x00083c14) list_vitu2_match_list_item_pane_t1

0xabf1,	// (0x00080672) bg_popup_sub_pane_cp21

0xf095,	// (0x00084b16) grid_vitu2_dropdown_list_pane

0x8a94,	// (0x0007e515) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x8a94,	// (0x0007e515) cell_vitu2_dropdown_list_char_pane

0x8ab7,	// (0x0007e538) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x8ab7,	// (0x0007e538) cell_vitu2_dropdown_list_ctrl_pane

0xc1ee,	// (0x00081c6f) cell_vitu2_dropdown_list_char_pane_g1

0xc1f7,	// (0x00081c78) cell_vitu2_dropdown_list_char_pane_g2

0xc200,	// (0x00081c81) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa1d,	// (0x0008549e) cell_vitu2_dropdown_list_char_pane_g

0x8ae5,	// (0x0007e566) cell_vitu2_dropdown_list_char_pane_t1

0x8af3,	// (0x0007e574) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x8af3,	// (0x0007e574) cell_vitu2_dropdown_list_ctrl_pane_g1

0x8b03,	// (0x0007e584) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x8b03,	// (0x0007e584) cell_vitu2_dropdown_list_ctrl_pane_g2

0x8b14,	// (0x0007e595) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x8b14,	// (0x0007e595) cell_vitu2_dropdown_list_ctrl_pane_g3

0x8b24,	// (0x0007e5a5) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x8b24,	// (0x0007e5a5) cell_vitu2_dropdown_list_ctrl_pane_g4

0xb6c4,	// (0x00081145) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xb6c4,	// (0x00081145) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa24,	// (0x000854a5) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa24,	// (0x000854a5) cell_vitu2_dropdown_list_ctrl_pane_g

0x8b40,	// (0x0007e5c1) aid_size_cell_gallery2_ParamLimits

0x8b40,	// (0x0007e5c1) aid_size_cell_gallery2

0x8b56,	// (0x0007e5d7) grid_gallery2_pane_ParamLimits

0x8b56,	// (0x0007e5d7) grid_gallery2_pane

0x8b6a,	// (0x0007e5eb) scroll_pane_cp029_ParamLimits

0x8b6a,	// (0x0007e5eb) scroll_pane_cp029

0x8b76,	// (0x0007e5f7) cell_gallery2_pane_ParamLimits

0x8b76,	// (0x0007e5f7) cell_gallery2_pane

0xc209,	// (0x00081c8a) cell_gallery2_pane_g2

0x8bb0,	// (0x0007e631) cell_gallery2_pane_g3

0xc213,	// (0x00081c94) cell_gallery2_pane_g4

0xc21b,	// (0x00081c9c) cell_gallery2_pane_g5

0x3782,	// (0x00079203) grid_highlight_pane_cp10

0x81d2,	// (0x0007dc53) popup_vitu2_match_list_window_ParamLimits

0x81e9,	// (0x0007dc6a) popup_vitu2_query_window_ParamLimits

0x81e9,	// (0x0007dc6a) popup_vitu2_query_window

0xabf1,	// (0x00080672) bg_vitu2_candi_button_pane

0xc1ee,	// (0x00081c6f) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xc1f7,	// (0x00081c78) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xc200,	// (0x00081c81) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x0db6,	// (0x00076837) bg_button_pane_cp015

0x8bb8,	// (0x0007e639) bg_button_pane_cp016

0x8bcb,	// (0x0007e64c) bg_button_pane_cp017

0x59e2,	// (0x0007b463) bg_popup_sub_pane_cp22

0xc223,	// (0x00081ca4) popup_vitu2_query_window_g1

0x0deb,	// (0x0007686c) popup_vitu2_query_window_g2

0x0002,

0xfa2f,	// (0x000854b0) popup_vitu2_query_window_g

0x0e0a,	// (0x0007688b) popup_vitu2_query_window_t1_ParamLimits

0x0e0a,	// (0x0007688b) popup_vitu2_query_window_t1

0x0e3f,	// (0x000768c0) popup_vitu2_query_window_t2_ParamLimits

0x0e3f,	// (0x000768c0) popup_vitu2_query_window_t2

0x0e51,	// (0x000768d2) popup_vitu2_query_window_t3_ParamLimits

0x0e51,	// (0x000768d2) popup_vitu2_query_window_t3

0x8bef,	// (0x0007e670) popup_vitu2_query_window_t4_ParamLimits

0x8bef,	// (0x0007e670) popup_vitu2_query_window_t4

0x8c10,	// (0x0007e691) popup_vitu2_query_window_t5_ParamLimits

0x8c10,	// (0x0007e691) popup_vitu2_query_window_t5

0x0006,

0xfa36,	// (0x000854b7) popup_vitu2_query_window_t_ParamLimits

0xfa36,	// (0x000854b7) popup_vitu2_query_window_t

0xc081,	// (0x00081b02) main_cset_text_pane

0x8633,	// (0x0007e0b4) aid_area_touch_slider_ParamLimits

0x864f,	// (0x0007e0d0) cset_slider_pane_ParamLimits

0x8679,	// (0x0007e0fa) main_cset_slider_pane_g1_ParamLimits

0x868e,	// (0x0007e10f) main_cset_slider_pane_g2_ParamLimits

0xc0a2,	// (0x00081b23) main_cset_slider_pane_g3_ParamLimits

0xc0a2,	// (0x00081b23) main_cset_slider_pane_g3

0x86a3,	// (0x0007e124) main_cset_slider_pane_g4_ParamLimits

0x86a3,	// (0x0007e124) main_cset_slider_pane_g4

0x86b2,	// (0x0007e133) main_cset_slider_pane_g5_ParamLimits

0x86b2,	// (0x0007e133) main_cset_slider_pane_g5

0x86c0,	// (0x0007e141) main_cset_slider_pane_g6_ParamLimits

0x86c0,	// (0x0007e141) main_cset_slider_pane_g6

0xf989,	// (0x0008540a) main_cset_slider_pane_g_ParamLimits

0xc0d2,	// (0x00081b53) main_cset_slider_pane_t1_ParamLimits

0x8750,	// (0x0007e1d1) main_cset_slider_pane_t2_ParamLimits

0x876a,	// (0x0007e1eb) main_cset_slider_pane_t3_ParamLimits

0x8784,	// (0x0007e205) main_cset_slider_pane_t4_ParamLimits

0x879e,	// (0x0007e21f) main_cset_slider_pane_t5_ParamLimits

0x87bc,	// (0x0007e23d) main_cset_slider_pane_t6_ParamLimits

0x87d3,	// (0x0007e254) main_cset_slider_pane_t7_ParamLimits

0x8801,	// (0x0007e282) main_cset_slider_pane_t8_ParamLimits

0x8801,	// (0x0007e282) main_cset_slider_pane_t8

0x8829,	// (0x0007e2aa) main_cset_slider_pane_t9_ParamLimits

0x8829,	// (0x0007e2aa) main_cset_slider_pane_t9

0x8851,	// (0x0007e2d2) main_cset_slider_pane_t10_ParamLimits

0x8851,	// (0x0007e2d2) main_cset_slider_pane_t10

0x8879,	// (0x0007e2fa) main_cset_slider_pane_t11_ParamLimits

0x8879,	// (0x0007e2fa) main_cset_slider_pane_t11

0x88a3,	// (0x0007e324) main_cset_slider_pane_t12_ParamLimits

0x88a3,	// (0x0007e324) main_cset_slider_pane_t12

0x88c0,	// (0x0007e341) main_cset_slider_pane_t13_ParamLimits

0x88c0,	// (0x0007e341) main_cset_slider_pane_t13

0xf9ae,	// (0x0008542f) main_cset_slider_pane_t_ParamLimits

0xabf1,	// (0x00080672) bg_popup_sub_pane_cp011

0xc22f,	// (0x00081cb0) main_cset_text_pane_g1

0xc237,	// (0x00081cb8) main_cset_text_pane_t1

0xc245,	// (0x00081cc6) main_cset_text_pane_t2

0xc253,	// (0x00081cd4) main_cset_text_pane_t3

0xc261,	// (0x00081ce2) main_cset_text_pane_t4

0xc26f,	// (0x00081cf0) main_cset_text_pane_t5

0xc27d,	// (0x00081cfe) main_cset_text_pane_t6

0xc28b,	// (0x00081d0c) main_cset_text_pane_t7

0x0006,

0xfa45,	// (0x000854c6) main_cset_text_pane_t

0xabf1,	// (0x00080672) main_cam4_burst_pane

0xabf1,	// (0x00080672) main_cam5_pane

0x8568,	// (0x0007dfe9) bg_button_pane_cp019

0x8571,	// (0x0007dff2) bg_button_pane_cp020

0xc0ae,	// (0x00081b2f) main_cset_slider_pane_g7_ParamLimits

0xc0ae,	// (0x00081b2f) main_cset_slider_pane_g7

0xc0ba,	// (0x00081b3b) main_cset_slider_pane_g8_ParamLimits

0xc0ba,	// (0x00081b3b) main_cset_slider_pane_g8

0x86d4,	// (0x0007e155) main_cset_slider_pane_g9_ParamLimits

0x86d4,	// (0x0007e155) main_cset_slider_pane_g9

0x86e0,	// (0x0007e161) main_cset_slider_pane_g10_ParamLimits

0x86e0,	// (0x0007e161) main_cset_slider_pane_g10

0x86ec,	// (0x0007e16d) main_cset_slider_pane_g11_ParamLimits

0x86ec,	// (0x0007e16d) main_cset_slider_pane_g11

0x86f8,	// (0x0007e179) main_cset_slider_pane_g12_ParamLimits

0x86f8,	// (0x0007e179) main_cset_slider_pane_g12

0x8704,	// (0x0007e185) main_cset_slider_pane_g13_ParamLimits

0x8704,	// (0x0007e185) main_cset_slider_pane_g13

0x8710,	// (0x0007e191) main_cset_slider_pane_g14_ParamLimits

0x8710,	// (0x0007e191) main_cset_slider_pane_g14

0x871c,	// (0x0007e19d) main_cset_slider_pane_g15_ParamLimits

0x871c,	// (0x0007e19d) main_cset_slider_pane_g15

0xc100,	// (0x00081b81) main_cset_slider_pane_t14_ParamLimits

0xc100,	// (0x00081b81) main_cset_slider_pane_t14

0xc139,	// (0x00081bba) main_cset_slider_pane_t15_ParamLimits

0xc139,	// (0x00081bba) main_cset_slider_pane_t15

0x8c31,	// (0x0007e6b2) aid_cam4_burst_size_cell_ParamLimits

0x8c31,	// (0x0007e6b2) aid_cam4_burst_size_cell

0x8c51,	// (0x0007e6d2) grid_cam4_burst_pane_ParamLimits

0x8c51,	// (0x0007e6d2) grid_cam4_burst_pane

0x8c8b,	// (0x0007e70c) linegrid_cam4_burst_pane_ParamLimits

0x8c8b,	// (0x0007e70c) linegrid_cam4_burst_pane

0xc299,	// (0x00081d1a) scroll_pane_cp30_ParamLimits

0xc299,	// (0x00081d1a) scroll_pane_cp30

0x8caf,	// (0x0007e730) cell_cam4_burst_pane_ParamLimits

0x8caf,	// (0x0007e730) cell_cam4_burst_pane

0xc2a5,	// (0x00081d26) linegrid_cam4_burst_pane_g1_ParamLimits

0xc2a5,	// (0x00081d26) linegrid_cam4_burst_pane_g1

0x8d04,	// (0x0007e785) linegrid_cam4_burst_pane_g2_ParamLimits

0x8d04,	// (0x0007e785) linegrid_cam4_burst_pane_g2

0xc2b2,	// (0x00081d33) linegrid_cam4_burst_pane_g3_ParamLimits

0xc2b2,	// (0x00081d33) linegrid_cam4_burst_pane_g3

0x0002,

0xfa54,	// (0x000854d5) linegrid_cam4_burst_pane_g_ParamLimits

0xfa54,	// (0x000854d5) linegrid_cam4_burst_pane_g

0x8d15,	// (0x0007e796) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x8d15,	// (0x0007e796) linegrid_cam4_burst_pane_g3_copy1

0xc2bf,	// (0x00081d40) linegrid_cam4_burst_pane_g4_ParamLimits

0xc2bf,	// (0x00081d40) linegrid_cam4_burst_pane_g4

0x8d33,	// (0x0007e7b4) linegrid_cam4_burst_pane_g5_ParamLimits

0x8d33,	// (0x0007e7b4) linegrid_cam4_burst_pane_g5

0x8d44,	// (0x0007e7c5) linegrid_cam4_burst_pane_g6_ParamLimits

0x8d44,	// (0x0007e7c5) linegrid_cam4_burst_pane_g6

0xc2cc,	// (0x00081d4d) linegrid_cam4_burst_pane_g7_ParamLimits

0xc2cc,	// (0x00081d4d) linegrid_cam4_burst_pane_g7

0x8d5b,	// (0x0007e7dc) cell_cam4_burst_pane_g1

0xc2e5,	// (0x00081d66) main_cam5_pane_t1_ParamLimits

0xc2e5,	// (0x00081d66) main_cam5_pane_t1

0xc2f7,	// (0x00081d78) main_cam5_pane_t2_ParamLimits

0xc2f7,	// (0x00081d78) main_cam5_pane_t2

0xc309,	// (0x00081d8a) main_cam5_pane_t3_ParamLimits

0xc309,	// (0x00081d8a) main_cam5_pane_t3

0xc31b,	// (0x00081d9c) main_cam5_pane_t4_ParamLimits

0xc31b,	// (0x00081d9c) main_cam5_pane_t4

0xc333,	// (0x00081db4) main_cam5_pane_t5_ParamLimits

0xc333,	// (0x00081db4) main_cam5_pane_t5

0xc347,	// (0x00081dc8) main_cam5_pane_t6_ParamLimits

0xc347,	// (0x00081dc8) main_cam5_pane_t6

0xc35b,	// (0x00081ddc) main_cam5_pane_t7_ParamLimits

0xc35b,	// (0x00081ddc) main_cam5_pane_t7

0xc36d,	// (0x00081dee) main_cam5_pane_t8_ParamLimits

0xc36d,	// (0x00081dee) main_cam5_pane_t8

0xc38b,	// (0x00081e0c) main_cam5_pane_t9_ParamLimits

0xc38b,	// (0x00081e0c) main_cam5_pane_t9

0xc39d,	// (0x00081e1e) main_cam5_pane_t10_ParamLimits

0xc39d,	// (0x00081e1e) main_cam5_pane_t10

0xc3af,	// (0x00081e30) main_cam5_pane_t11_ParamLimits

0xc3af,	// (0x00081e30) main_cam5_pane_t11

0xc3c3,	// (0x00081e44) main_cam5_pane_t12_ParamLimits

0xc3c3,	// (0x00081e44) main_cam5_pane_t12

0xc3da,	// (0x00081e5b) main_cam5_pane_t13_ParamLimits

0xc3da,	// (0x00081e5b) main_cam5_pane_t13

0x000c,

0xfa60,	// (0x000854e1) main_cam5_pane_t_ParamLimits

0xfa60,	// (0x000854e1) main_cam5_pane_t

0x16c6,	// (0x00077147) popup_scut_keymap_window_ParamLimits

0x16c6,	// (0x00077147) popup_scut_keymap_window

0x8d6e,	// (0x0007e7ef) aid_size_cell_brow_shortcut

0x3782,	// (0x00079203) bg_popup_window_pane_cp010

0x8d7a,	// (0x0007e7fb) grid_scut_pane

0x8d86,	// (0x0007e807) cell_scut_pane_ParamLimits

0x8d86,	// (0x0007e807) cell_scut_pane

0x8d9f,	// (0x0007e820) cell_scut_pane_g1

0xc3fd,	// (0x00081e7e) cell_scut_pane_t1

0xc40c,	// (0x00081e8d) cell_scut_pane_t2

0x8da8,	// (0x0007e829) cell_scut_pane_t3

0x0002,

0xfa7b,	// (0x000854fc) cell_scut_pane_t

0x6c11,	// (0x0007c692) main_mup3_pane_g8_ParamLimits

0x6c11,	// (0x0007c692) main_mup3_pane_g8

0x80d4,	// (0x0007db55) area_vitu2_query_pane_ParamLimits

0x80d4,	// (0x0007db55) area_vitu2_query_pane

0x0dca,	// (0x0007684b) input_focus_pane_cp08

0xc41b,	// (0x00081e9c) area_vitu2_query_pane_g1

0x0ecf,	// (0x00076950) area_vitu2_query_pane_g2

0x0001,

0xfa82,	// (0x00085503) area_vitu2_query_pane_g

0x8db6,	// (0x0007e837) area_vitu2_query_pane_t1_ParamLimits

0x8db6,	// (0x0007e837) area_vitu2_query_pane_t1

0x8dca,	// (0x0007e84b) area_vitu2_query_pane_t2_ParamLimits

0x8dca,	// (0x0007e84b) area_vitu2_query_pane_t2

0x0ee2,	// (0x00076963) area_vitu2_query_pane_t3_ParamLimits

0x0ee2,	// (0x00076963) area_vitu2_query_pane_t3

0xc427,	// (0x00081ea8) area_vitu2_query_pane_t4_ParamLimits

0xc427,	// (0x00081ea8) area_vitu2_query_pane_t4

0xc44f,	// (0x00081ed0) area_vitu2_query_pane_t5_ParamLimits

0xc44f,	// (0x00081ed0) area_vitu2_query_pane_t5

0xc477,	// (0x00081ef8) area_vitu2_query_pane_t6_ParamLimits

0xc477,	// (0x00081ef8) area_vitu2_query_pane_t6

0x0006,

0xfa87,	// (0x00085508) area_vitu2_query_pane_t_ParamLimits

0xfa87,	// (0x00085508) area_vitu2_query_pane_t

0x8dde,	// (0x0007e85f) bg_button_pane_cp018

0x8dec,	// (0x0007e86d) bg_button_pane_cp021

0x0f0a,	// (0x0007698b) bg_button_pane_cp022

0x0f1b,	// (0x0007699c) input_focus_pane_cp09

0x35a7,	// (0x00079028) aid_size_touch_mv_arrow_left

0x35d0,	// (0x00079051) aid_size_touch_mv_arrow_right

0x8734,	// (0x0007e1b5) main_cset_slider_pane_g16_ParamLimits

0x8734,	// (0x0007e1b5) main_cset_slider_pane_g16

0x8742,	// (0x0007e1c3) main_cset_slider_pane_g17_ParamLimits

0x8742,	// (0x0007e1c3) main_cset_slider_pane_g17

0x8d5b,	// (0x0007e7dc) cell_cam4_burst_pane_g1_ParamLimits

0xabf1,	// (0x00080672) compa_mode_pane

0x892e,	// (0x0007e3af) popup_vtel_slider_window_g3_ParamLimits

0x892e,	// (0x0007e3af) popup_vtel_slider_window_g3

0x8945,	// (0x0007e3c6) popup_vtel_slider_window_g4_ParamLimits

0x8945,	// (0x0007e3c6) popup_vtel_slider_window_g4

0x895c,	// (0x0007e3dd) popup_vtel_slider_window_t1_ParamLimits

0x895c,	// (0x0007e3dd) popup_vtel_slider_window_t1

0xabf1,	// (0x00080672) main_cl_pane

0x5b41,	// (0x0007b5c2) popup_imed_adjust2_window_ParamLimits

0x59e2,	// (0x0007b463) bg_tb_trans_pane_cp05_ParamLimits

0xb9ef,	// (0x00081470) popup_imed_adjust2_window_g1_ParamLimits

0xb9fe,	// (0x0008147f) popup_imed_adjust2_window_g2_ParamLimits

0xb9fe,	// (0x0008147f) popup_imed_adjust2_window_g2

0xba0a,	// (0x0008148b) popup_imed_adjust2_window_g3_ParamLimits

0xba0a,	// (0x0008148b) popup_imed_adjust2_window_g3

0x0002,

0xf7f7,	// (0x00085278) popup_imed_adjust2_window_g_ParamLimits

0xf7f7,	// (0x00085278) popup_imed_adjust2_window_g

0xba16,	// (0x00081497) popup_imed_adjust2_window_t1_ParamLimits

0xba2e,	// (0x000814af) slider_imed_adjust_pane_ParamLimits

0xba42,	// (0x000814c3) slider_imed_adjust_pane_g1_ParamLimits

0xba52,	// (0x000814d3) slider_imed_adjust_pane_g2_ParamLimits

0xba62,	// (0x000814e3) slider_imed_adjust_pane_g3_ParamLimits

0xba73,	// (0x000814f4) slider_imed_adjust_pane_g4_ParamLimits

0xf7fe,	// (0x0008527f) slider_imed_adjust_pane_g_ParamLimits

0x7e26,	// (0x0007d8a7) aid_touch_area_cam4_ParamLimits

0x7e26,	// (0x0007d8a7) aid_touch_area_cam4

0xe0b8,	// (0x00083b39) battery_pane_cp01

0x7ed1,	// (0x0007d952) main_camera4_pane_g6_ParamLimits

0x7ed1,	// (0x0007d952) main_camera4_pane_g6

0x7ef4,	// (0x0007d975) main_camera4_pane_t2_ParamLimits

0x7ef4,	// (0x0007d975) main_camera4_pane_t2

0x0001,

0xf8fc,	// (0x0008537d) main_camera4_pane_t_ParamLimits

0xf8fc,	// (0x0008537d) main_camera4_pane_t

0x7f29,	// (0x0007d9aa) aid_touch_area_vid4_ParamLimits

0x7f29,	// (0x0007d9aa) aid_touch_area_vid4

0x7f87,	// (0x0007da08) main_video4_pane_g5_ParamLimits

0x7f87,	// (0x0007da08) main_video4_pane_g5

0x7fae,	// (0x0007da2f) vid4_progress_pane_ParamLimits

0x7fae,	// (0x0007da2f) vid4_progress_pane

0xc0c6,	// (0x00081b47) main_cset_slider_pane_g18_ParamLimits

0xc0c6,	// (0x00081b47) main_cset_slider_pane_g18

0xc2d9,	// (0x00081d5a) cell_cam4_burst_pane_g2_ParamLimits

0xc2d9,	// (0x00081d5a) cell_cam4_burst_pane_g2

0x0001,

0xfa5b,	// (0x000854dc) cell_cam4_burst_pane_g_ParamLimits

0xfa5b,	// (0x000854dc) cell_cam4_burst_pane_g

0xe8e8,	// (0x00084369) bg_cl_pane_ParamLimits

0xe8e8,	// (0x00084369) bg_cl_pane

0x8df8,	// (0x0007e879) cl_header_pane_ParamLimits

0x8df8,	// (0x0007e879) cl_header_pane

0x8e0c,	// (0x0007e88d) cl_listscroll_pane_ParamLimits

0x8e0c,	// (0x0007e88d) cl_listscroll_pane

0xc4c3,	// (0x00081f44) bg_cl_pane_g1

0xc4cb,	// (0x00081f4c) bg_cl_pane_g2

0xc4d3,	// (0x00081f54) bg_cl_pane_g3

0xc4db,	// (0x00081f5c) bg_cl_pane_g4

0xc4e3,	// (0x00081f64) bg_cl_pane_g5

0xc4eb,	// (0x00081f6c) bg_cl_pane_g6

0xc4f3,	// (0x00081f74) bg_cl_pane_g7

0xc4fb,	// (0x00081f7c) bg_cl_pane_g8

0xc503,	// (0x00081f84) bg_cl_pane_g9

0x0008,

0xfa96,	// (0x00085517) bg_cl_pane_g

0x8e1c,	// (0x0007e89d) aid_height_cl_leading_ParamLimits

0x8e1c,	// (0x0007e89d) aid_height_cl_leading

0x8e28,	// (0x0007e8a9) aid_height_cl_text_ParamLimits

0x8e28,	// (0x0007e8a9) aid_height_cl_text

0xac6a,	// (0x000806eb) bg_cl_header_pane_ParamLimits

0xac6a,	// (0x000806eb) bg_cl_header_pane

0x8e47,	// (0x0007e8c8) cl_header_pane_g1_ParamLimits

0x8e47,	// (0x0007e8c8) cl_header_pane_g1

0x8e5d,	// (0x0007e8de) cl_header_pane_t1_ParamLimits

0x8e5d,	// (0x0007e8de) cl_header_pane_t1

0xc50b,	// (0x00081f8c) cl_list_pane

0xc099,	// (0x00081b1a) hc_scroll_pane_cp01

0xecd2,	// (0x00084753) bg_cl_header_pane_g1

0xbf7b,	// (0x000819fc) bg_cl_header_pane_g2

0xecf2,	// (0x00084773) bg_cl_header_pane_g3

0xbf8b,	// (0x00081a0c) bg_cl_header_pane_g4

0xbf83,	// (0x00081a04) bg_cl_header_pane_g5

0xc1ce,	// (0x00081c4f) bg_cl_header_pane_g6

0xbfa3,	// (0x00081a24) bg_cl_header_pane_g7

0xbfab,	// (0x00081a2c) bg_cl_header_pane_g8

0xbf9b,	// (0x00081a1c) bg_cl_header_pane_g9

0x0008,

0xfaa9,	// (0x0008552a) bg_cl_header_pane_g

0x8e76,	// (0x0007e8f7) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x8e76,	// (0x0007e8f7) hc_cl_list_double_graphic_heading_pane

0x8e89,	// (0x0007e90a) hc_cl_list_single_graphic_pane_ParamLimits

0x8e89,	// (0x0007e90a) hc_cl_list_single_graphic_pane

0x8ea1,	// (0x0007e922) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x8ea1,	// (0x0007e922) hc_cl_list_single_graphic_pane_g1

0x8ead,	// (0x0007e92e) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x8ead,	// (0x0007e92e) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfabc,	// (0x0008553d) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfabc,	// (0x0008553d) hc_cl_list_single_graphic_pane_g

0x8ec1,	// (0x0007e942) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x8ec1,	// (0x0007e942) hc_cl_list_single_graphic_pane_t1

0x8ea1,	// (0x0007e922) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x8ea1,	// (0x0007e922) hc_cl_list_double_graphic_heading_pane_g1

0x8ed6,	// (0x0007e957) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x8ed6,	// (0x0007e957) hc_cl_list_double_graphic_heading_pane_g2

0x8eea,	// (0x0007e96b) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x8eea,	// (0x0007e96b) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfac1,	// (0x00085542) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfac1,	// (0x00085542) hc_cl_list_double_graphic_heading_pane_g

0x8efe,	// (0x0007e97f) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x8efe,	// (0x0007e97f) hc_cl_list_double_graphic_heading_pane_t1

0x8f13,	// (0x0007e994) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x8f13,	// (0x0007e994) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfac8,	// (0x00085549) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfac8,	// (0x00085549) hc_cl_list_double_graphic_heading_pane_t

0xe1a9,	// (0x00083c2a) vid4_progress_pane_g1

0xe1b5,	// (0x00083c36) vid4_progress_pane_g2

0xe1c1,	// (0x00083c42) vid4_progress_pane_g3

0xe1d0,	// (0x00083c51) vid4_progress_pane_g4

0x0004,

0xfacd,	// (0x0008554e) vid4_progress_pane_g

0xe1ee,	// (0x00083c6f) vid4_progress_pane_t1

0xe204,	// (0x00083c85) vid4_progress_pane_t2

0x0002,

0xfad8,	// (0x00085559) vid4_progress_pane_t

0xe22f,	// (0x00083cb0) wait_bar_pane_cp07

0xb281,	// (0x00080d02) blid_firmament_pane_ParamLimits

0xb2c4,	// (0x00080d45) popup_blid_sat_info2_window_g1

0xb2e8,	// (0x00080d69) popup_blid_sat_info2_window_t3

0xb2f6,	// (0x00080d77) popup_blid_sat_info2_window_t4

0xb304,	// (0x00080d85) popup_blid_sat_info2_window_t5

0xb312,	// (0x00080d93) popup_blid_sat_info2_window_t6

0xb322,	// (0x00080da3) popup_blid_sat_info2_window_t7

0xb330,	// (0x00080db1) popup_blid_sat_info2_window_t8

0xb33e,	// (0x00080dbf) popup_blid_sat_info2_window_t9

0xb34c,	// (0x00080dcd) popup_blid_sat_info2_window_t10

0xb414,	// (0x00080e95) aid_firma_cardinal_ParamLimits

0xb428,	// (0x00080ea9) blid_firmament_pane_t1_ParamLimits

0xb43f,	// (0x00080ec0) blid_firmament_pane_t2_ParamLimits

0xb456,	// (0x00080ed7) blid_firmament_pane_t3_ParamLimits

0xb46d,	// (0x00080eee) blid_firmament_pane_t4_ParamLimits

0xf6f0,	// (0x00085171) blid_firmament_pane_t_ParamLimits

0xb484,	// (0x00080f05) blid_sat_info_pane_ParamLimits

0xac6a,	// (0x000806eb) main_cam_set_pane_ParamLimits

0x74ab,	// (0x0007cf2c) aid_size_cell_colour_35_ParamLimits

0x74cb,	// (0x0007cf4c) aid_size_cell_colour_112_ParamLimits

0x74eb,	// (0x0007cf6c) aid_size_cell_effect_ParamLimits

0x59e2,	// (0x0007b463) bg_tb_trans_pane_cp02_ParamLimits

0xee9a,	// (0x0008491b) heading_imed_pane_ParamLimits

0x750b,	// (0x0007cf8c) listscroll_imed_pane_ParamLimits

0x4ce7,	// (0x0007a768) popup_call2_audio_first_window_g5_ParamLimits

0x4ce7,	// (0x0007a768) popup_call2_audio_first_window_g5

0x7ad0,	// (0x0007d551) aid_size_touch_image3_arrow_left_ParamLimits

0x7ad0,	// (0x0007d551) aid_size_touch_image3_arrow_left

0x7afc,	// (0x0007d57d) aid_size_touch_image3_arrow_right_ParamLimits

0x7afc,	// (0x0007d57d) aid_size_touch_image3_arrow_right

0xe21a,	// (0x00083c9b) vid4_progress_pane_t3

0x7828,	// (0x0007d2a9) main_hwr_training_symbol_option_pane_ParamLimits

0x7828,	// (0x0007d2a9) main_hwr_training_symbol_option_pane

0xbcde,	// (0x0008175f) popup_hwr_training_preview_window_ParamLimits

0xbcde,	// (0x0008175f) popup_hwr_training_preview_window

0x7848,	// (0x0007d2c9) hwr_training_navi_pane_g5_ParamLimits

0x7848,	// (0x0007d2c9) hwr_training_navi_pane_g5

0xbf69,	// (0x000819ea) popup_char_count_window

0xac6a,	// (0x000806eb) bg_popup_sub_pane_cp20_ParamLimits

0x8a76,	// (0x0007e4f7) list_vitu2_match_list_pane_ParamLimits

0x8a85,	// (0x0007e506) vitu2_page_scroll_pane_ParamLimits

0x8a85,	// (0x0007e506) vitu2_page_scroll_pane

0xc55d,	// (0x00081fde) list_single_hwr_training_symbol_option_pane_ParamLimits

0xc55d,	// (0x00081fde) list_single_hwr_training_symbol_option_pane

0xc570,	// (0x00081ff1) list_single_hwr_training_symbol_option_pane_g1

0xc578,	// (0x00081ff9) list_single_hwr_training_symbol_option_pane_t1

0xc586,	// (0x00082007) bg_button_pane_cp023

0xc58f,	// (0x00082010) bg_button_pane_cp024

0x8f32,	// (0x0007e9b3) vitu2_page_scroll_pane_g1

0x8f3a,	// (0x0007e9bb) vitu2_page_scroll_pane_g2

0x0001,

0xfadf,	// (0x00085560) vitu2_page_scroll_pane_g

0x8f44,	// (0x0007e9c5) vitu2_page_scroll_pane_t1

0xb19d,	// (0x00080c1e) popup_char_count_window_g1

0xc5c2,	// (0x00082043) popup_char_count_window_g2

0xc5cb,	// (0x0008204c) popup_char_count_window_g3

0x0002,

0xfae4,	// (0x00085565) popup_char_count_window_g

0xc5d4,	// (0x00082055) popup_char_count_window_t1

0xabf1,	// (0x00080672) main_vded2_pane

0xb9db,	// (0x0008145c) aid_size_cell_imed_line

0xb9e5,	// (0x00081466) grid_imed_line_width_pane

0x801e,	// (0x0007da9f) vid4_indicators_pane_g4

0xc5e2,	// (0x00082063) cell_imed_line_width_pane_ParamLimits

0xc5e2,	// (0x00082063) cell_imed_line_width_pane

0xc5f8,	// (0x00082079) cell_imed_line_width_pane_g1

0xc601,	// (0x00082082) cell_imed_line_width_pane_g2

0x0001,

0xfaeb,	// (0x0008556c) cell_imed_line_width_pane_g

0x8f53,	// (0x0007e9d4) main_vded2_pane_g1_ParamLimits

0x8f53,	// (0x0007e9d4) main_vded2_pane_g1

0x8f6e,	// (0x0007e9ef) main_vded2_pane_g2_ParamLimits

0x8f6e,	// (0x0007e9ef) main_vded2_pane_g2

0x0001,

0xfaf0,	// (0x00085571) main_vded2_pane_g_ParamLimits

0xfaf0,	// (0x00085571) main_vded2_pane_g

0x8f80,	// (0x0007ea01) vded2_slider_pane_ParamLimits

0x8f80,	// (0x0007ea01) vded2_slider_pane

0x8f90,	// (0x0007ea11) aid_size_touch_vded2_end

0x8f9a,	// (0x0007ea1b) aid_size_touch_vded2_playhead

0xc609,	// (0x0008208a) aid_size_touch_vded2_start

0xc611,	// (0x00082092) vded2_slider_bg_pane

0xc61a,	// (0x0008209b) vded2_slider_pane_g1

0xc623,	// (0x000820a4) vded2_slider_pane_g2

0x8fa4,	// (0x0007ea25) vded2_slider_pane_g3

0x0002,

0xfaf5,	// (0x00085576) vded2_slider_pane_g

0xc62b,	// (0x000820ac) vded2_slider_bg_pane_g1

0xc634,	// (0x000820b5) vded2_slider_bg_pane_g2

0xc63d,	// (0x000820be) vded2_slider_bg_pane_g3

0x0002,

0xfafc,	// (0x0008557d) vded2_slider_bg_pane_g

0x3e53,	// (0x000798d4) aid_postcard_touch_down_pane_ParamLimits

0x3e53,	// (0x000798d4) aid_postcard_touch_down_pane

0x3e6b,	// (0x000798ec) aid_postcard_touch_up_pane_ParamLimits

0x3e6b,	// (0x000798ec) aid_postcard_touch_up_pane

0xabf1,	// (0x00080672) main_blid2_pane

0x5a18,	// (0x0007b499) popup_blid2_search_window

0xabf1,	// (0x00080672) blid2_gps_pane

0xabf1,	// (0x00080672) blid2_navig_pane

0xabf1,	// (0x00080672) blid2_search_pane

0xabf1,	// (0x00080672) blid2_tripm_pane

0x8faf,	// (0x0007ea30) blid2_search_pane_g1_ParamLimits

0x8faf,	// (0x0007ea30) blid2_search_pane_g1

0x8fc7,	// (0x0007ea48) blid2_search_pane_t1_ParamLimits

0x8fc7,	// (0x0007ea48) blid2_search_pane_t1

0x8fd9,	// (0x0007ea5a) aid_size_cell_blid2_gps_ParamLimits

0x8fd9,	// (0x0007ea5a) aid_size_cell_blid2_gps

0x8ff1,	// (0x0007ea72) blid2_gps_pane_g1_ParamLimits

0x8ff1,	// (0x0007ea72) blid2_gps_pane_g1

0x9005,	// (0x0007ea86) grid_blid2_satellite_pane_ParamLimits

0x9005,	// (0x0007ea86) grid_blid2_satellite_pane

0x901d,	// (0x0007ea9e) blid2_navig_pane_g1_ParamLimits

0x901d,	// (0x0007ea9e) blid2_navig_pane_g1

0x9029,	// (0x0007eaaa) blid2_navig_pane_t1_ParamLimits

0x9029,	// (0x0007eaaa) blid2_navig_pane_t1

0x9044,	// (0x0007eac5) blid2_navig_pane_t2_ParamLimits

0x9044,	// (0x0007eac5) blid2_navig_pane_t2

0x0001,

0xfb03,	// (0x00085584) blid2_navig_pane_t_ParamLimits

0xfb03,	// (0x00085584) blid2_navig_pane_t

0x905f,	// (0x0007eae0) blid2_navig_ring_pane_ParamLimits

0x905f,	// (0x0007eae0) blid2_navig_ring_pane

0x907a,	// (0x0007eafb) blid2_speed_pane_ParamLimits

0x907a,	// (0x0007eafb) blid2_speed_pane

0x9086,	// (0x0007eb07) blid2_tripm_pane_g1_ParamLimits

0x9086,	// (0x0007eb07) blid2_tripm_pane_g1

0x90a1,	// (0x0007eb22) blid2_tripm_pane_g2_ParamLimits

0x90a1,	// (0x0007eb22) blid2_tripm_pane_g2

0x90b5,	// (0x0007eb36) blid2_tripm_pane_g3_ParamLimits

0x90b5,	// (0x0007eb36) blid2_tripm_pane_g3

0x90c9,	// (0x0007eb4a) blid2_tripm_pane_g4_ParamLimits

0x90c9,	// (0x0007eb4a) blid2_tripm_pane_g4

0x90dd,	// (0x0007eb5e) blid2_tripm_pane_g5_ParamLimits

0x90dd,	// (0x0007eb5e) blid2_tripm_pane_g5

0x0005,

0xfb08,	// (0x00085589) blid2_tripm_pane_g_ParamLimits

0xfb08,	// (0x00085589) blid2_tripm_pane_g

0x9103,	// (0x0007eb84) blid2_tripm_pane_t1_ParamLimits

0x9103,	// (0x0007eb84) blid2_tripm_pane_t1

0x911e,	// (0x0007eb9f) blid2_tripm_pane_t2_ParamLimits

0x911e,	// (0x0007eb9f) blid2_tripm_pane_t2

0x9137,	// (0x0007ebb8) blid2_tripm_pane_t3_ParamLimits

0x9137,	// (0x0007ebb8) blid2_tripm_pane_t3

0x0003,

0xfb15,	// (0x00085596) blid2_tripm_pane_t_ParamLimits

0xfb15,	// (0x00085596) blid2_tripm_pane_t

0x917e,	// (0x0007ebff) cell_blid2_satellite_pane_ParamLimits

0x917e,	// (0x0007ebff) cell_blid2_satellite_pane

0x919a,	// (0x0007ec1b) cell_blid2_satellite_pane_g1

0xc646,	// (0x000820c7) cell_blid2_satellite_pane_t1

0xb494,	// (0x00080f15) blid2_speed_pane_g1

0xc654,	// (0x000820d5) blid2_speed_pane_t1

0xc662,	// (0x000820e3) blid2_speed_pane_t2

0x0001,

0xfb1e,	// (0x0008559f) blid2_speed_pane_t

0xb494,	// (0x00080f15) blid2_navig_ring_pane_g1

0x91a3,	// (0x0007ec24) blid2_navig_ring_pane_g2

0x91ab,	// (0x0007ec2c) blid2_navig_ring_pane_g3

0x91b3,	// (0x0007ec34) blid2_navig_ring_pane_g4

0x91bb,	// (0x0007ec3c) blid2_navig_ring_pane_g5

0x0004,

0xfb23,	// (0x000855a4) blid2_navig_ring_pane_g

0xabf1,	// (0x00080672) bg_popup_window_pane_cp011

0xc670,	// (0x000820f1) popup_blid2_search_window_g1

0xc678,	// (0x000820f9) popup_blid2_search_window_t1

0xc686,	// (0x00082107) popup_blid2_search_window_t2

0x0001,

0xfb2e,	// (0x000855af) popup_blid2_search_window_t

0xebe1,	// (0x00084662) main_browser_pane_g1

0xe8e8,	// (0x00084369) main_browser_pane_ParamLimits

0xac6a,	// (0x000806eb) bg_button_pane_cp011_ParamLimits

0x82fa,	// (0x0007dd7b) cell_vitu2_function_pane_g1_ParamLimits

0x59e2,	// (0x0007b463) bg_popup_sub_pane_cp22_ParamLimits

0x0dca,	// (0x0007684b) input_focus_pane_cp08_ParamLimits

0x8bde,	// (0x0007e65f) popup_vitu2_query_button_pane_ParamLimits

0x8bde,	// (0x0007e65f) popup_vitu2_query_button_pane

0x0de1,	// (0x00076862) popup_vitu2_query_input_button_pane

0xc223,	// (0x00081ca4) popup_vitu2_query_window_g1_ParamLimits

0x0deb,	// (0x0007686c) popup_vitu2_query_window_g2_ParamLimits

0xfa2f,	// (0x000854b0) popup_vitu2_query_window_g_ParamLimits

0xabf1,	// (0x00080672) bg_button_pane_cp026

0x91c3,	// (0x0007ec44) popup_vitu2_query_input_button_pane_g1

0xabf1,	// (0x00080672) bg_button_pane_cp025

0xc694,	// (0x00082115) popup_vitu2_query_button_pane_t1

0x6921,	// (0x0007c3a2) main_mp3_pane_t6

0x692f,	// (0x0007c3b0) popup_slider_window_cp01

0xe0d6,	// (0x00083b57) cam4_battery_pane

0xe12f,	// (0x00083bb0) cam4_battery_pane_cp02

0x8f28,	// (0x0007e9a9) cam4_battery_pane_cp01

0xe1a1,	// (0x00083c22) cam4_battery_pane_cp03

0xb494,	// (0x00080f15) cam4_battery_pane_g1

0xc6a2,	// (0x00082123) cam4_battery_pane_g2

0x0001,

0xfb33,	// (0x000855b4) cam4_battery_pane_g

0xb35a,	// (0x00080ddb) popup_blid_sat_info2_window_t11

0x35a7,	// (0x00079028) aid_size_touch_mv_arrow_left_ParamLimits

0x35d0,	// (0x00079051) aid_size_touch_mv_arrow_right_ParamLimits

0x3618,	// (0x00079099) navi_pane_g1_ParamLimits

0x3624,	// (0x000790a5) navi_pane_g2_ParamLimits

0x3652,	// (0x000790d3) navi_pane_g3_ParamLimits

0xf409,	// (0x00084e8a) navi_pane_g_ParamLimits

0x3710,	// (0x00079191) navi_pane_mv_t1_ParamLimits

0x7517,	// (0x0007cf98) grid_imed_effect_pane_ParamLimits

0x2356,	// (0x00077dd7) aid_placing_vt_slider_lsc

0xeb2e,	// (0x000845af) aid_placing_vt_slider_prt

0xac6a,	// (0x000806eb) bg_tb_trans_pane_cp01_ParamLimits

0xb5e4,	// (0x00081065) popup_image_details_window_g1_ParamLimits

0xb5f7,	// (0x00081078) popup_image_details_window_g2_ParamLimits

0xb60c,	// (0x0008108d) popup_image_details_window_g3_ParamLimits

0xb60c,	// (0x0008108d) popup_image_details_window_g3

0xf735,	// (0x000851b6) popup_image_details_window_g_ParamLimits

0xb620,	// (0x000810a1) popup_image_details_window_t1_ParamLimits

0xb632,	// (0x000810b3) popup_image_details_window_t2_ParamLimits

0xb64b,	// (0x000810cc) popup_image_details_window_t3_ParamLimits

0xb65f,	// (0x000810e0) popup_image_details_window_t4_ParamLimits

0xb67a,	// (0x000810fb) popup_image_details_window_t5_ParamLimits

0xf73c,	// (0x000851bd) popup_image_details_window_t_ParamLimits

0x8e34,	// (0x0007e8b5) cl_header_name_pane_ParamLimits

0x8e34,	// (0x0007e8b5) cl_header_name_pane

0x91cb,	// (0x0007ec4c) cl_header_name_pane_t1_ParamLimits

0x91cb,	// (0x0007ec4c) cl_header_name_pane_t1

0x91ec,	// (0x0007ec6d) cl_header_name_pane_t2_ParamLimits

0x91ec,	// (0x0007ec6d) cl_header_name_pane_t2

0x922e,	// (0x0007ecaf) cl_header_name_pane_t3_ParamLimits

0x922e,	// (0x0007ecaf) cl_header_name_pane_t3

0x0002,

0xfb38,	// (0x000855b9) cl_header_name_pane_t_ParamLimits

0xfb38,	// (0x000855b9) cl_header_name_pane_t

0x36e1,	// (0x00079162) navi_pane_mv_g2_ParamLimits

0xbf26,	// (0x000819a7) field_vitu2_entry_pane_g1_ParamLimits

0xbf32,	// (0x000819b3) field_vitu2_entry_pane_g2_ParamLimits

0xbf3e,	// (0x000819bf) field_vitu2_entry_pane_g3_ParamLimits

0xbf3e,	// (0x000819bf) field_vitu2_entry_pane_g3

0xf92e,	// (0x000853af) field_vitu2_entry_pane_g_ParamLimits

0x8276,	// (0x0007dcf7) cell_vitu2_itu_pane_g1_ParamLimits

0x8286,	// (0x0007dd07) cell_vitu2_itu_pane_g2_ParamLimits

0x8286,	// (0x0007dd07) cell_vitu2_itu_pane_g2

0x0001,

0xf93a,	// (0x000853bb) cell_vitu2_itu_pane_g_ParamLimits

0xf93a,	// (0x000853bb) cell_vitu2_itu_pane_g

0xac6a,	// (0x000806eb) bg_vkb2_func_pane_cp05_ParamLimits

0xac6a,	// (0x000806eb) bg_vkb2_func_pane_cp05

0xac6a,	// (0x000806eb) bg_vkb2_func_pane_cp03

0xac6a,	// (0x000806eb) bg_vkb2_func_pane_cp04

0xac6a,	// (0x000806eb) bg_vkb2_func_pane_cp10_ParamLimits

0xac6a,	// (0x000806eb) bg_vkb2_func_pane_cp10

0x0f0a,	// (0x0007698b) bg_vkb2_func_pane_cp08

0x8dde,	// (0x0007e85f) bg_vkb2_func_pane_cp06

0x8dec,	// (0x0007e86d) bg_vkb2_func_pane_cp07

0xc598,	// (0x00082019) bg_vkb2_func_pane_cp11_ParamLimits

0xc598,	// (0x00082019) bg_vkb2_func_pane_cp11

0xc5ad,	// (0x0008202e) bg_vkb2_func_pane_cp12_ParamLimits

0xc5ad,	// (0x0008202e) bg_vkb2_func_pane_cp12

0xabf1,	// (0x00080672) bg_vkb2_func_pane_cp09

0xbf7b,	// (0x000819fc) bg_vkb2_func_pane_g1

0xecf2,	// (0x00084773) bg_vkb2_func_pane_g2

0xbf83,	// (0x00081a04) bg_vkb2_func_pane_g3

0xbf8b,	// (0x00081a0c) bg_vkb2_func_pane_g4

0xc1ce,	// (0x00081c4f) bg_vkb2_func_pane_g5

0xbfa3,	// (0x00081a24) bg_vkb2_func_pane_g6

0xbfab,	// (0x00081a2c) bg_vkb2_func_pane_g7

0xbf9b,	// (0x00081a1c) bg_vkb2_func_pane_g8

0xecd2,	// (0x00084753) bg_vkb2_func_pane_g9

0x0008,

0xfb3f,	// (0x000855c0) bg_vkb2_func_pane_g

0x90f1,	// (0x0007eb72) blid2_tripm_pane_g6_ParamLimits

0x90f1,	// (0x0007eb72) blid2_tripm_pane_g6

0xbd96,	// (0x00081817) mp4_progress_pane_g1

0x916a,	// (0x0007ebeb) blid2_tripm_values_pane_ParamLimits

0x916a,	// (0x0007ebeb) blid2_tripm_values_pane

0x925f,	// (0x0007ece0) blid2_tripm_values_pane_t1

0x926d,	// (0x0007ecee) blid2_tripm_values_pane_t2

0x927b,	// (0x0007ecfc) blid2_tripm_values_pane_t3

0x9289,	// (0x0007ed0a) blid2_tripm_values_pane_t4

0x9297,	// (0x0007ed18) blid2_tripm_values_pane_t5

0x92a5,	// (0x0007ed26) blid2_tripm_values_pane_t6

0x92b3,	// (0x0007ed34) blid2_tripm_values_pane_t7

0x92c1,	// (0x0007ed42) blid2_tripm_values_pane_t8

0x92cf,	// (0x0007ed50) blid2_tripm_values_pane_t9

0x0008,

0xfb52,	// (0x000855d3) blid2_tripm_values_pane_t

0x2396,	// (0x00077e17) call_video_pane_t1_ParamLimits

0x23b0,	// (0x00077e31) call_video_pane_t2_ParamLimits

0xf292,	// (0x00084d13) call_video_pane_t_ParamLimits

0x0bde,	// (0x0007665f) msg_header_pane_g1_ParamLimits

0x3dbd,	// (0x0007983e) msg_header_pane_g2_ParamLimits

0x3dbd,	// (0x0007983e) msg_header_pane_g2

0x0001,

0xf4ac,	// (0x00084f2d) msg_header_pane_g_ParamLimits

0xf4ac,	// (0x00084f2d) msg_header_pane_g

0xe8e8,	// (0x00084369) main_clock2_pane_ParamLimits

0x7220,	// (0x0007cca1) grid_clock2_toolbar_pane_ParamLimits

0x7220,	// (0x0007cca1) grid_clock2_toolbar_pane

0x7220,	// (0x0007cca1) listscroll_clock2_pane_ParamLimits

0x7220,	// (0x0007cca1) listscroll_clock2_pane

0x7309,	// (0x0007cd8a) main_clock2_pane_t3_ParamLimits

0x7309,	// (0x0007cd8a) main_clock2_pane_t3

0x7324,	// (0x0007cda5) main_clock2_pane_t4_ParamLimits

0x7324,	// (0x0007cda5) main_clock2_pane_t4

0xc6ac,	// (0x0008212d) cell_clock2_toolbar_pane

0xc6b4,	// (0x00082135) cell_clock2_toolbar_pane_cp01

0xc6b4,	// (0x00082135) cell_clock2_toolbar_pane_cp02

0xc6bc,	// (0x0008213d) cell_clock2_toolbar_pane_cp03

0xc6c4,	// (0x00082145) list_clock2_pane

0x3331,	// (0x00078db2) scroll_pane_cp10

0xc6cc,	// (0x0008214d) list_single_clock2_pane_ParamLimits

0xc6cc,	// (0x0008214d) list_single_clock2_pane

0x3782,	// (0x00079203) list_highlight_pane_cp08

0xc6d9,	// (0x0008215a) list_single_clock2_pane_t1

0xc6e7,	// (0x00082168) list_single_clock2_pane_t2

0x0001,

0xfb65,	// (0x000855e6) list_single_clock2_pane_t

0xabf1,	// (0x00080672) bg_button_pane_cp10

0xc6f5,	// (0x00082176) cell_clock2_toolbar_pane_g1

0x3dd1,	// (0x00079852) aid_main_viewer_pane_g1_ParamLimits

0x3dd1,	// (0x00079852) aid_main_viewer_pane_g1

0x3ddf,	// (0x00079860) aid_main_viewer_pane_g2_ParamLimits

0x3ddf,	// (0x00079860) aid_main_viewer_pane_g2

0x3ded,	// (0x0007986e) aid_main_viewer_pane_g3_ParamLimits

0x3ded,	// (0x0007986e) aid_main_viewer_pane_g3

0x3dfc,	// (0x0007987d) aid_main_viewer_pane_g4_ParamLimits

0x3dfc,	// (0x0007987d) aid_main_viewer_pane_g4

0x0003,

0xf4bd,	// (0x00084f3e) aid_main_viewer_pane_g_ParamLimits

0xf4bd,	// (0x00084f3e) aid_main_viewer_pane_g

0x59ce,	// (0x0007b44f) main_calc_pane_ParamLimits

0x59f0,	// (0x0007b471) main_dialer2_pane_ParamLimits

0xabf1,	// (0x00080672) main_cam6_pane

0xabf1,	// (0x00080672) main_vid6_pane

0x722c,	// (0x0007ccad) listscroll_gen_pane_cp06_ParamLimits

0x722c,	// (0x0007ccad) listscroll_gen_pane_cp06

0x733f,	// (0x0007cdc0) main_clock2_pane_t5_ParamLimits

0x733f,	// (0x0007cdc0) main_clock2_pane_t5

0x739c,	// (0x0007ce1d) aid_call2_pane_cp10_ParamLimits

0x73ae,	// (0x0007ce2f) aid_call_pane_cp10_ParamLimits

0x3532,	// (0x00078fb3) popup_clock_analogue_window_cp10_g1_ParamLimits

0x3532,	// (0x00078fb3) popup_clock_analogue_window_cp10_g2_ParamLimits

0x73c0,	// (0x0007ce41) popup_clock_analogue_window_cp10_g3_ParamLimits

0x73c0,	// (0x0007ce41) popup_clock_analogue_window_cp10_g4_ParamLimits

0x3532,	// (0x00078fb3) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7ec,	// (0x0008526d) popup_clock_analogue_window_cp10_g_ParamLimits

0x73d6,	// (0x0007ce57) popup_clock_analogue_window_cp10_t1_ParamLimits

0x7a7d,	// (0x0007d4fe) cell_dialer2_keypad_pane_g2_ParamLimits

0x7a7d,	// (0x0007d4fe) cell_dialer2_keypad_pane_g2

0x0001,

0xf8cd,	// (0x0008534e) cell_dialer2_keypad_pane_g_ParamLimits

0xf8cd,	// (0x0008534e) cell_dialer2_keypad_pane_g

0x7a99,	// (0x0007d51a) cell_dialer2_keypad_pane_t1

0x8625,	// (0x0007e0a6) main_cset_text2_pane_ParamLimits

0x8625,	// (0x0007e0a6) main_cset_text2_pane

0xc41b,	// (0x00081e9c) area_vitu2_query_pane_g1_ParamLimits

0x0ecf,	// (0x00076950) area_vitu2_query_pane_g2_ParamLimits

0xfa82,	// (0x00085503) area_vitu2_query_pane_g_ParamLimits

0xc49f,	// (0x00081f20) area_vitu2_query_pane_t7_ParamLimits

0xc49f,	// (0x00081f20) area_vitu2_query_pane_t7

0x8dde,	// (0x0007e85f) bg_button_pane_cp018_ParamLimits

0x8dec,	// (0x0007e86d) bg_button_pane_cp021_ParamLimits

0x0f0a,	// (0x0007698b) bg_button_pane_cp022_ParamLimits

0x0f0a,	// (0x0007698b) bg_vkb2_func_pane_cp08_ParamLimits

0x8dde,	// (0x0007e85f) bg_vkb2_func_pane_cp06_ParamLimits

0x8dec,	// (0x0007e86d) bg_vkb2_func_pane_cp07_ParamLimits

0x0f1b,	// (0x0007699c) input_focus_pane_cp09_ParamLimits

0xe249,	// (0x00083cca) cam6_autofocus_pane_ParamLimits

0xe249,	// (0x00083cca) cam6_autofocus_pane

0x92dd,	// (0x0007ed5e) cam6_image_uncrop_pane_ParamLimits

0x92dd,	// (0x0007ed5e) cam6_image_uncrop_pane

0x92ec,	// (0x0007ed6d) cam6_indi_pane_ParamLimits

0x92ec,	// (0x0007ed6d) cam6_indi_pane

0x9302,	// (0x0007ed83) cam6_mode_pane_ParamLimits

0x9302,	// (0x0007ed83) cam6_mode_pane

0x9314,	// (0x0007ed95) cam6_timer_pane_ParamLimits

0x9314,	// (0x0007ed95) cam6_timer_pane

0x9320,	// (0x0007eda1) cam6_zoom_pane_ParamLimits

0x9320,	// (0x0007eda1) cam6_zoom_pane

0x932e,	// (0x0007edaf) cam6_mode_pane_g1_ParamLimits

0x932e,	// (0x0007edaf) cam6_mode_pane_g1

0x933e,	// (0x0007edbf) cam6_mode_pane_g2_ParamLimits

0x933e,	// (0x0007edbf) cam6_mode_pane_g2

0x934e,	// (0x0007edcf) cam6_mode_pane_g3_ParamLimits

0x934e,	// (0x0007edcf) cam6_mode_pane_g3

0x935e,	// (0x0007eddf) cam6_mode_pane_g4_ParamLimits

0x935e,	// (0x0007eddf) cam6_mode_pane_g4

0x0003,

0xfb6a,	// (0x000855eb) cam6_mode_pane_g_ParamLimits

0xfb6a,	// (0x000855eb) cam6_mode_pane_g

0xc6fd,	// (0x0008217e) bg_tb_trans_pane_cp08_ParamLimits

0xc6fd,	// (0x0008217e) bg_tb_trans_pane_cp08

0xc70b,	// (0x0008218c) cam6_battery_pane_ParamLimits

0xc70b,	// (0x0008218c) cam6_battery_pane

0xc721,	// (0x000821a2) cam6_indi_pane_g1_ParamLimits

0xc721,	// (0x000821a2) cam6_indi_pane_g1

0xc733,	// (0x000821b4) cam6_indi_pane_g2_ParamLimits

0xc733,	// (0x000821b4) cam6_indi_pane_g2

0xc745,	// (0x000821c6) cam6_indi_pane_g3_ParamLimits

0xc745,	// (0x000821c6) cam6_indi_pane_g3

0x0002,

0xfb73,	// (0x000855f4) cam6_indi_pane_g_ParamLimits

0xfb73,	// (0x000855f4) cam6_indi_pane_g

0xc757,	// (0x000821d8) cam6_indi_pane_t1_ParamLimits

0xc757,	// (0x000821d8) cam6_indi_pane_t1

0x8048,	// (0x0007dac9) cam6_autofocus_pane_g1

0x8050,	// (0x0007dad1) cam6_autofocus_pane_g2

0x8058,	// (0x0007dad9) cam6_autofocus_pane_g3

0x8060,	// (0x0007dae1) cam6_autofocus_pane_g4

0x0003,

0xfb7a,	// (0x000855fb) cam6_autofocus_pane_g

0xc77d,	// (0x000821fe) cam6_timer_pane_g1

0xc785,	// (0x00082206) cam6_timer_pane_t1

0xc793,	// (0x00082214) cam6_zoom_cont_pane

0xc79b,	// (0x0008221c) cam6_zoom_pane_g1

0xc7a3,	// (0x00082224) cam6_zoom_pane_g2

0x936e,	// (0x0007edef) cam6_zoom_pane_g3

0x0002,

0xfb83,	// (0x00085604) cam6_zoom_pane_g

0xb494,	// (0x00080f15) cam6_battery_pane_g1

0xb494,	// (0x00080f15) cam6_battery_pane_g2

0x0001,

0xf6f9,	// (0x0008517a) cam6_battery_pane_g

0xc7ab,	// (0x0008222c) cam6_zoom_cont_pane_g1

0xc7b4,	// (0x00082235) cam6_zoom_cont_pane_g2

0xc7bd,	// (0x0008223e) cam6_zoom_cont_pane_g3

0x0002,

0xfb8a,	// (0x0008560b) cam6_zoom_cont_pane_g

0x938b,	// (0x0007ee0c) cam6_mode_pane_cp_ParamLimits

0x938b,	// (0x0007ee0c) cam6_mode_pane_cp

0x9320,	// (0x0007eda1) cam6_zoom_pane_cp_ParamLimits

0x9320,	// (0x0007eda1) cam6_zoom_pane_cp

0x939d,	// (0x0007ee1e) vid6_image_uncrop_cif_pane_ParamLimits

0x939d,	// (0x0007ee1e) vid6_image_uncrop_cif_pane

0x93ad,	// (0x0007ee2e) vid6_image_uncrop_nhd_pane_ParamLimits

0x93ad,	// (0x0007ee2e) vid6_image_uncrop_nhd_pane

0x92dd,	// (0x0007ed5e) vid6_image_uncrop_vga_pane_ParamLimits

0x92dd,	// (0x0007ed5e) vid6_image_uncrop_vga_pane

0x93bc,	// (0x0007ee3d) vid6_image_uncrop_wvga_pane_ParamLimits

0x93bc,	// (0x0007ee3d) vid6_image_uncrop_wvga_pane

0x93cb,	// (0x0007ee4c) vid6_indi_pane_ParamLimits

0x93cb,	// (0x0007ee4c) vid6_indi_pane

0xc6fd,	// (0x0008217e) bg_tb_trans_pane_cp09_ParamLimits

0xc6fd,	// (0x0008217e) bg_tb_trans_pane_cp09

0xc7d5,	// (0x00082256) cam6_battery_pane_cp_ParamLimits

0xc7d5,	// (0x00082256) cam6_battery_pane_cp

0xc7e1,	// (0x00082262) vid6_indi_pane_g1_ParamLimits

0xc7e1,	// (0x00082262) vid6_indi_pane_g1

0xc7f3,	// (0x00082274) vid6_indi_pane_g2_ParamLimits

0xc7f3,	// (0x00082274) vid6_indi_pane_g2

0xc805,	// (0x00082286) vid6_indi_pane_g3_ParamLimits

0xc805,	// (0x00082286) vid6_indi_pane_g3

0xc81c,	// (0x0008229d) vid6_indi_pane_g4_ParamLimits

0xc81c,	// (0x0008229d) vid6_indi_pane_g4

0xc833,	// (0x000822b4) vid6_indi_pane_g5_ParamLimits

0xc833,	// (0x000822b4) vid6_indi_pane_g5

0x0004,

0xfb91,	// (0x00085612) vid6_indi_pane_g_ParamLimits

0xfb91,	// (0x00085612) vid6_indi_pane_g

0xc84d,	// (0x000822ce) vid6_indi_pane_t1_ParamLimits

0xc84d,	// (0x000822ce) vid6_indi_pane_t1

0xc863,	// (0x000822e4) vid6_indi_pane_t2_ParamLimits

0xc863,	// (0x000822e4) vid6_indi_pane_t2

0xc88b,	// (0x0008230c) vid6_indi_pane_t3_ParamLimits

0xc88b,	// (0x0008230c) vid6_indi_pane_t3

0xc8b3,	// (0x00082334) vid6_indi_pane_t4_ParamLimits

0xc8b3,	// (0x00082334) vid6_indi_pane_t4

0x0003,

0xfb9c,	// (0x0008561d) vid6_indi_pane_t_ParamLimits

0xfb9c,	// (0x0008561d) vid6_indi_pane_t

0xc8d7,	// (0x00082358) wait_bar_pane_cp08

0x93e3,	// (0x0007ee64) main_cset_text2_pane_t1_ParamLimits

0x93e3,	// (0x0007ee64) main_cset_text2_pane_t1

0x9376,	// (0x0007edf7) listscroll_gen_pane_cp06_t1_ParamLimits

0x9376,	// (0x0007edf7) listscroll_gen_pane_cp06_t1

0xabf1,	// (0x00080672) main_cam6_set_pane

0xb6c4,	// (0x00081145) bg_tb_trans_pane_cp06_ParamLimits

0xe0de,	// (0x00083b5f) cam4_indicators_pane_g1_ParamLimits

0xe0eb,	// (0x00083b6c) cam4_indicators_pane_g2_ParamLimits

0xf90a,	// (0x0008538b) cam4_indicators_pane_g_ParamLimits

0xe10b,	// (0x00083b8c) cam4_indicators_pane_t1_ParamLimits

0xbeff,	// (0x00081980) bg_tb_trans_pane_cp07_ParamLimits

0x7ff7,	// (0x0007da78) vid4_indicators_pane_g1_ParamLimits

0x8004,	// (0x0007da85) vid4_indicators_pane_g2_ParamLimits

0x8011,	// (0x0007da92) vid4_indicators_pane_g3_ParamLimits

0x801e,	// (0x0007da9f) vid4_indicators_pane_g4_ParamLimits

0xf91c,	// (0x0008539d) vid4_indicators_pane_g_ParamLimits

0x8036,	// (0x0007dab7) vid4_indicators_pane_t1_ParamLimits

0xe1a9,	// (0x00083c2a) vid4_progress_pane_g1_ParamLimits

0xe1b5,	// (0x00083c36) vid4_progress_pane_g2_ParamLimits

0xe1c1,	// (0x00083c42) vid4_progress_pane_g3_ParamLimits

0xe1d0,	// (0x00083c51) vid4_progress_pane_g4_ParamLimits

0xfacd,	// (0x0008554e) vid4_progress_pane_g_ParamLimits

0xe1ee,	// (0x00083c6f) vid4_progress_pane_t1_ParamLimits

0xe204,	// (0x00083c85) vid4_progress_pane_t2_ParamLimits

0xe21a,	// (0x00083c9b) vid4_progress_pane_t3_ParamLimits

0xfad8,	// (0x00085559) vid4_progress_pane_t_ParamLimits

0xe22f,	// (0x00083cb0) wait_bar_pane_cp07_ParamLimits

0x9404,	// (0x0007ee85) main_cam6_set_pane_g2_ParamLimits

0x9404,	// (0x0007ee85) main_cam6_set_pane_g2

0x942a,	// (0x0007eeab) main_cset6_listscroll_pane_ParamLimits

0x942a,	// (0x0007eeab) main_cset6_listscroll_pane

0x9448,	// (0x0007eec9) main_cset6_slider_pane_ParamLimits

0x9448,	// (0x0007eec9) main_cset6_slider_pane

0x945e,	// (0x0007eedf) main_cset6_text2_pane_ParamLimits

0x945e,	// (0x0007eedf) main_cset6_text2_pane

0xc8e6,	// (0x00082367) main_cset6_text_pane

0xc8ee,	// (0x0008236f) main_cset_list_pane_copy1_ParamLimits

0xc8ee,	// (0x0008236f) main_cset_list_pane_copy1

0xc8fe,	// (0x0008237f) scroll_pane_cp028_copy1

0x946c,	// (0x0007eeed) cset_list_set_pane_copy1

0x9480,	// (0x0007ef01) aid_position_infowindow_above_copy1

0x9488,	// (0x0007ef09) aid_position_infowindow_below_copy1

0x9490,	// (0x0007ef11) cset_list_set_pane_g1_copy1

0xc907,	// (0x00082388) cset_list_set_pane_g3_copy1_ParamLimits

0xc907,	// (0x00082388) cset_list_set_pane_g3_copy1

0xc916,	// (0x00082397) cset_list_set_pane_t1_copy1_ParamLimits

0xc916,	// (0x00082397) cset_list_set_pane_t1_copy1

0xac6a,	// (0x000806eb) list_highlight_pane_cp021_copy1_ParamLimits

0xac6a,	// (0x000806eb) list_highlight_pane_cp021_copy1

0xc92b,	// (0x000823ac) cset6_slider_pane_ParamLimits

0xc92b,	// (0x000823ac) cset6_slider_pane

0xc957,	// (0x000823d8) main_cset6_slider_pane_g1_ParamLimits

0xc957,	// (0x000823d8) main_cset6_slider_pane_g1

0x9498,	// (0x0007ef19) main_cset6_slider_pane_g2_ParamLimits

0x9498,	// (0x0007ef19) main_cset6_slider_pane_g2

0xc97f,	// (0x00082400) main_cset6_slider_pane_g3_ParamLimits

0xc97f,	// (0x00082400) main_cset6_slider_pane_g3

0x94c0,	// (0x0007ef41) main_cset6_slider_pane_g4_ParamLimits

0x94c0,	// (0x0007ef41) main_cset6_slider_pane_g4

0x94cc,	// (0x0007ef4d) main_cset6_slider_pane_g5_ParamLimits

0x94cc,	// (0x0007ef4d) main_cset6_slider_pane_g5

0xc0ae,	// (0x00081b2f) main_cset6_slider_pane_g7_ParamLimits

0xc0ae,	// (0x00081b2f) main_cset6_slider_pane_g7

0xc0ba,	// (0x00081b3b) main_cset6_slider_pane_g8_ParamLimits

0xc0ba,	// (0x00081b3b) main_cset6_slider_pane_g8

0x86d4,	// (0x0007e155) main_cset6_slider_pane_g9_ParamLimits

0x86d4,	// (0x0007e155) main_cset6_slider_pane_g9

0x86e0,	// (0x0007e161) main_cset6_slider_pane_g10_ParamLimits

0x86e0,	// (0x0007e161) main_cset6_slider_pane_g10

0x86ec,	// (0x0007e16d) main_cset6_slider_pane_g11_ParamLimits

0x86ec,	// (0x0007e16d) main_cset6_slider_pane_g11

0x86f8,	// (0x0007e179) main_cset6_slider_pane_g12_ParamLimits

0x86f8,	// (0x0007e179) main_cset6_slider_pane_g12

0x8704,	// (0x0007e185) main_cset6_slider_pane_g13_ParamLimits

0x8704,	// (0x0007e185) main_cset6_slider_pane_g13

0x8710,	// (0x0007e191) main_cset6_slider_pane_g14_ParamLimits

0x8710,	// (0x0007e191) main_cset6_slider_pane_g14

0x94da,	// (0x0007ef5b) main_cset6_slider_pane_g15_ParamLimits

0x94da,	// (0x0007ef5b) main_cset6_slider_pane_g15

0x8734,	// (0x0007e1b5) main_cset6_slider_pane_g16_ParamLimits

0x8734,	// (0x0007e1b5) main_cset6_slider_pane_g16

0x8742,	// (0x0007e1c3) main_cset6_slider_pane_g17_ParamLimits

0x8742,	// (0x0007e1c3) main_cset6_slider_pane_g17

0x0011,

0xfba5,	// (0x00085626) main_cset6_slider_pane_g_ParamLimits

0xfba5,	// (0x00085626) main_cset6_slider_pane_g

0xc98b,	// (0x0008240c) main_cset6_slider_pane_t1_ParamLimits

0xc98b,	// (0x0008240c) main_cset6_slider_pane_t1

0x950a,	// (0x0007ef8b) main_cset6_slider_pane_t2_ParamLimits

0x950a,	// (0x0007ef8b) main_cset6_slider_pane_t2

0x9535,	// (0x0007efb6) main_cset6_slider_pane_t3_ParamLimits

0x9535,	// (0x0007efb6) main_cset6_slider_pane_t3

0x9560,	// (0x0007efe1) main_cset6_slider_pane_t4_ParamLimits

0x9560,	// (0x0007efe1) main_cset6_slider_pane_t4

0x958d,	// (0x0007f00e) main_cset6_slider_pane_t5_ParamLimits

0x958d,	// (0x0007f00e) main_cset6_slider_pane_t5

0xc9cc,	// (0x0008244d) main_cset6_slider_pane_t7_ParamLimits

0xc9cc,	// (0x0008244d) main_cset6_slider_pane_t7

0x95ba,	// (0x0007f03b) main_cset6_slider_pane_t8_ParamLimits

0x95ba,	// (0x0007f03b) main_cset6_slider_pane_t8

0x95de,	// (0x0007f05f) main_cset6_slider_pane_t9_ParamLimits

0x95de,	// (0x0007f05f) main_cset6_slider_pane_t9

0x9602,	// (0x0007f083) main_cset6_slider_pane_t10_ParamLimits

0x9602,	// (0x0007f083) main_cset6_slider_pane_t10

0x9626,	// (0x0007f0a7) main_cset6_slider_pane_t11_ParamLimits

0x9626,	// (0x0007f0a7) main_cset6_slider_pane_t11

0xca02,	// (0x00082483) main_cset6_slider_pane_t14_ParamLimits

0xca02,	// (0x00082483) main_cset6_slider_pane_t14

0xca3b,	// (0x000824bc) main_cset6_slider_pane_t15_ParamLimits

0xca3b,	// (0x000824bc) main_cset6_slider_pane_t15

0x000b,

0xfbca,	// (0x0008564b) main_cset6_slider_pane_t_ParamLimits

0xfbca,	// (0x0008564b) main_cset6_slider_pane_t

0xc172,	// (0x00081bf3) cset_slider_pane_g1_copy1

0xc17b,	// (0x00081bfc) cset_slider_pane_g2_copy1

0xc184,	// (0x00081c05) cset_slider_pane_g3_copy1

0xabf1,	// (0x00080672) bg_popup_sub_pane_cp011_copy1

0xc22f,	// (0x00081cb0) main_cset_text_pane_g1_copy1

0xc237,	// (0x00081cb8) main_cset_text_pane_t1_copy1

0xc245,	// (0x00081cc6) main_cset_text_pane_t2_copy1

0xc253,	// (0x00081cd4) main_cset_text_pane_t3_copy1

0xc261,	// (0x00081ce2) main_cset_text_pane_t4_copy1

0xc26f,	// (0x00081cf0) main_cset_text_pane_t5_copy1

0xc27d,	// (0x00081cfe) main_cset_text_pane_t6_copy1

0xc28b,	// (0x00081d0c) main_cset_text_pane_t7_copy1

0x93e3,	// (0x0007ee64) main_cset_text2_pane_t1_copy1

0xabf1,	// (0x00080672) main_ncimui_pane

0x5cc1,	// (0x0007b742) popup_query_ncimui_window_ParamLimits

0x5cc1,	// (0x0007b742) popup_query_ncimui_window

0xb765,	// (0x000811e6) field_cale_ev2_pane_g4_ParamLimits

0xb765,	// (0x000811e6) field_cale_ev2_pane_g4

0x7948,	// (0x0007d3c9) cell_video_dialer_keypad_pane_g2_ParamLimits

0x7948,	// (0x0007d3c9) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8a8,	// (0x00085329) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8a8,	// (0x00085329) cell_video_dialer_keypad_pane_g

0x7960,	// (0x0007d3e1) cell_video_dialer_keypad_pane_t1

0xabf1,	// (0x00080672) bg_popup_window_pane_cp012

0x3186,	// (0x00078c07) heading_pane_cp06

0xcb63,	// (0x000825e4) ncim_query_content_pane

0xabf1,	// (0x00080672) bg_popup_heading_pane_cp01

0xcb6b,	// (0x000825ec) ncim_heading_pane_t1

0xcb79,	// (0x000825fa) ncim_indicator_popup_pane

0xcb8b,	// (0x0008260c) ncim_query_button_pane

0xcba1,	// (0x00082622) ncim_query_content_pane_t1

0xcbb3,	// (0x00082634) ncim_query_content_pane_t2

0x0005,

0xfc09,	// (0x0008568a) ncim_query_content_pane_t

0xcbed,	// (0x0008266e) ncim_query_list_pane

0xcbff,	// (0x00082680) ncim_query_popup_pane

0xcb79,	// (0x000825fa) ncim_indicator_popup_pane_ParamLimits

0x9745,	// (0x0007f1c6) ncim_query_content_pane_g1_ParamLimits

0x9745,	// (0x0007f1c6) ncim_query_content_pane_g1

0xcba1,	// (0x00082622) ncim_query_content_pane_t1_ParamLimits

0xcbb3,	// (0x00082634) ncim_query_content_pane_t2_ParamLimits

0x9751,	// (0x0007f1d2) ncim_query_content_pane_t3_ParamLimits

0x9751,	// (0x0007f1d2) ncim_query_content_pane_t3

0x9779,	// (0x0007f1fa) ncim_query_content_pane_t4_ParamLimits

0x9779,	// (0x0007f1fa) ncim_query_content_pane_t4

0x97a1,	// (0x0007f222) ncim_query_content_pane_t5_ParamLimits

0x97a1,	// (0x0007f222) ncim_query_content_pane_t5

0xcbc5,	// (0x00082646) ncim_query_content_pane_t6_ParamLimits

0xcbc5,	// (0x00082646) ncim_query_content_pane_t6

0xfc09,	// (0x0008568a) ncim_query_content_pane_t_ParamLimits

0xcbed,	// (0x0008266e) ncim_query_list_pane_ParamLimits

0xcbff,	// (0x00082680) ncim_query_popup_pane_ParamLimits

0xcc13,	// (0x00082694) wait_bar_pane_cp04

0xabf1,	// (0x00080672) input_focus_pane_cp011

0xcc1b,	// (0x0008269c) ncim_query_popup_pane_t1

0xcc29,	// (0x000826aa) ncim_list_query_list_pane_ParamLimits

0xcc29,	// (0x000826aa) ncim_list_query_list_pane

0xabf1,	// (0x00080672) bg_button_pane_cp027

0xcc3c,	// (0x000826bd) ncim_query_button_pane_g1

0xabf1,	// (0x00080672) list_highlight_pane_cp012

0xcc46,	// (0x000826c7) ncim_list_query_list_pane_g1

0xcc4e,	// (0x000826cf) ncim_list_query_list_pane_t1

0xe0fb,	// (0x00083b7c) cam4_indicators_pane_g3_ParamLimits

0xe0fb,	// (0x00083b7c) cam4_indicators_pane_g3

0x802a,	// (0x0007daab) vid4_indicators_pane_g5_ParamLimits

0x802a,	// (0x0007daab) vid4_indicators_pane_g5

0xe1df,	// (0x00083c60) vid4_progress_pane_g5_ParamLimits

0xe1df,	// (0x00083c60) vid4_progress_pane_g5

0x965e,	// (0x0007f0df) main_ncimui_pane_g1

0x96b4,	// (0x0007f135) ncimui_group_query_pane_ParamLimits

0x96b4,	// (0x0007f135) ncimui_group_query_pane

0x96f0,	// (0x0007f171) ncimui_list_pane_ParamLimits

0x96f0,	// (0x0007f171) ncimui_list_pane

0x9711,	// (0x0007f192) ncimui_text_pane_ParamLimits

0x9711,	// (0x0007f192) ncimui_text_pane

0x97c9,	// (0x0007f24a) ncimui_text_pane_t1_ParamLimits

0x97c9,	// (0x0007f24a) ncimui_text_pane_t1

0xcc5c,	// (0x000826dd) ncimui_list_single_graphic_pane_ParamLimits

0xcc5c,	// (0x000826dd) ncimui_list_single_graphic_pane

0x97e7,	// (0x0007f268) ncimui_query_pane_ParamLimits

0x97e7,	// (0x0007f268) ncimui_query_pane

0xabf1,	// (0x00080672) list_highlight_pane_cp013

0xcc6c,	// (0x000826ed) ncim_list_query_list_pane_t1_copy1

0xcc46,	// (0x000826c7) ncim_list_single_graphic_pane_g1

0xcc7a,	// (0x000826fb) ncim_query_button_pane_cp01

0xcc86,	// (0x00082707) ncim_query_entry_pane_ParamLimits

0xcc86,	// (0x00082707) ncim_query_entry_pane

0xcc99,	// (0x0008271a) ncimui_query_pane_g1

0xcca5,	// (0x00082726) ncimui_query_pane_t1_ParamLimits

0xcca5,	// (0x00082726) ncimui_query_pane_t1

0xac6a,	// (0x000806eb) input_focus_pane_cp012

0xccbe,	// (0x0008273f) ncim_query_entry_pane_t1

0xe8e8,	// (0x00084369) main_im_pane_ParamLimits

0xac6a,	// (0x000806eb) main_mobtv_pane_ParamLimits

0xac6a,	// (0x000806eb) main_mobtv_pane

0x94f2,	// (0x0007ef73) main_cset6_slider_pane_g18_ParamLimits

0x94f2,	// (0x0007ef73) main_cset6_slider_pane_g18

0x94fe,	// (0x0007ef7f) main_cset6_slider_pane_g19_ParamLimits

0x94fe,	// (0x0007ef7f) main_cset6_slider_pane_g19

0xe63b,	// (0x000840bc) bg_main_mobtv_pane_ParamLimits

0xe63b,	// (0x000840bc) bg_main_mobtv_pane

0x97fa,	// (0x0007f27b) main_mobtv_info_pane

0x9805,	// (0x0007f286) main_mobtv_loading_pane_ParamLimits

0x9805,	// (0x0007f286) main_mobtv_loading_pane

0xccd0,	// (0x00082751) main_mobtv_pg_channel_list_pane

0xccda,	// (0x0008275b) main_mobtv_pg_hdr_pane

0x9812,	// (0x0007f293) main_mobtv_programe_curr_pane_ParamLimits

0x9812,	// (0x0007f293) main_mobtv_programe_curr_pane

0x981f,	// (0x0007f2a0) main_mobtv_programe_next_pane_ParamLimits

0x981f,	// (0x0007f2a0) main_mobtv_programe_next_pane

0xcce3,	// (0x00082764) popup_mobtv_noti_window

0xb494,	// (0x00080f15) main_tv_pg_hdr_pane_g1

0xcced,	// (0x0008276e) main_tv_pg_hdr_pane_g2

0xccf5,	// (0x00082776) main_tv_pg_hdr_pane_g3

0xccfd,	// (0x0008277e) main_tv_pg_hdr_pane_g4

0xcd05,	// (0x00082786) main_tv_pg_hdr_pane_g5

0xcd0f,	// (0x00082790) main_tv_pg_hdr_pane_g6

0xcd19,	// (0x0008279a) main_tv_pg_hdr_pane_g7

0xcd23,	// (0x000827a4) main_tv_pg_hdr_pane_g8

0xcd2d,	// (0x000827ae) main_tv_pg_hdr_pane_g9

0xcd37,	// (0x000827b8) main_tv_pg_hdr_pane_g10

0xcd41,	// (0x000827c2) main_tv_pg_hdr_pane_g11

0x000a,

0xfc16,	// (0x00085697) main_tv_pg_hdr_pane_g

0xcd4b,	// (0x000827cc) main_tv_pg_hdr_pane_t1

0xcd59,	// (0x000827da) main_tv_pg_hdr_pane_t2

0xcd67,	// (0x000827e8) main_tv_pg_hdr_pane_t3

0xcd77,	// (0x000827f8) main_tv_pg_hdr_pane_t4

0xcd87,	// (0x00082808) main_tv_pg_hdr_pane_t5

0x0004,

0xfc2d,	// (0x000856ae) main_tv_pg_hdr_pane_t

0xcd97,	// (0x00082818) single_mobtv_pg_channel_pane_ParamLimits

0xcd97,	// (0x00082818) single_mobtv_pg_channel_pane

0xcda9,	// (0x0008282a) single_mobtv_pg_channel_table_pane

0xcdb2,	// (0x00082833) single_mobtv_pg_channel_thumb_pane

0xcdbb,	// (0x0008283c) single_tv_pg_channel_pane_g1

0xcdc4,	// (0x00082845) single_tv_pg_channel_pane_g2

0x0001,

0xfc38,	// (0x000856b9) single_tv_pg_channel_pane_g

0xb6c4,	// (0x00081145) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xb6c4,	// (0x00081145) bg_single_mobtv_pg_channel_thumb_pane

0xcdcd,	// (0x0008284e) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xcdcd,	// (0x0008284e) single_mobtv_pg_channel_thumb_pane_g1

0xcddb,	// (0x0008285c) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xcddb,	// (0x0008285c) single_mobtv_pg_channel_thumb_pane_g2

0xcde7,	// (0x00082868) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xcde7,	// (0x00082868) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc3d,	// (0x000856be) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc3d,	// (0x000856be) single_mobtv_pg_channel_thumb_pane_g

0xcdf3,	// (0x00082874) single_mobtv_pg_channel_thumb_pane_t1

0xce01,	// (0x00082882) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc44,	// (0x000856c5) single_mobtv_pg_channel_thumb_pane_t

0xb494,	// (0x00080f15) bg_single_mobtv_pg_channel_table_pane_g1

0xb494,	// (0x00080f15) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6f9,	// (0x0008517a) bg_single_mobtv_pg_channel_table_pane_g

0xce0f,	// (0x00082890) single_mobtv_pg_channel_table_pane_t1

0xce1d,	// (0x0008289e) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc49,	// (0x000856ca) single_mobtv_pg_channel_table_pane_t

0x9834,	// (0x0007f2b5) main_mobtv_info_pane_g1_ParamLimits

0x9834,	// (0x0007f2b5) main_mobtv_info_pane_g1

0x9852,	// (0x0007f2d3) main_mobtv_info_pane_t1_ParamLimits

0x9852,	// (0x0007f2d3) main_mobtv_info_pane_t1

0x98ca,	// (0x0007f34b) main_mobtv_info_pane_t2_ParamLimits

0x98ca,	// (0x0007f34b) main_mobtv_info_pane_t2

0x0002,

0xfc53,	// (0x000856d4) main_mobtv_info_pane_t_ParamLimits

0xfc53,	// (0x000856d4) main_mobtv_info_pane_t

0x995b,	// (0x0007f3dc) wait_bar_pane_cp05

0x996d,	// (0x0007f3ee) main_mobtv_loading_pane_g1_ParamLimits

0x996d,	// (0x0007f3ee) main_mobtv_loading_pane_g1

0x997e,	// (0x0007f3ff) main_mobtv_loading_pane_g2_ParamLimits

0x997e,	// (0x0007f3ff) main_mobtv_loading_pane_g2

0x998a,	// (0x0007f40b) main_mobtv_loading_pane_g3_ParamLimits

0x998a,	// (0x0007f40b) main_mobtv_loading_pane_g3

0x0002,

0xfc5a,	// (0x000856db) main_mobtv_loading_pane_g_ParamLimits

0xfc5a,	// (0x000856db) main_mobtv_loading_pane_g

0xce2b,	// (0x000828ac) main_mobtv_loading_pane_t1_ParamLimits

0xce2b,	// (0x000828ac) main_mobtv_loading_pane_t1

0xce43,	// (0x000828c4) main_mobtv_loading_pane_t2_ParamLimits

0xce43,	// (0x000828c4) main_mobtv_loading_pane_t2

0x0001,

0xfc61,	// (0x000856e2) main_mobtv_loading_pane_t_ParamLimits

0xfc61,	// (0x000856e2) main_mobtv_loading_pane_t

0x999d,	// (0x0007f41e) wait_bar_pane_cp06_ParamLimits

0x999d,	// (0x0007f41e) wait_bar_pane_cp06

0xce67,	// (0x000828e8) main_mobtv_programe_curr_pane_t1

0xce75,	// (0x000828f6) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc66,	// (0x000856e7) main_mobtv_programe_curr_pane_t

0xce83,	// (0x00082904) main_mobtv_programe_next_pane_t1

0xce91,	// (0x00082912) main_mobtv_programe_next_pane_t2

0xce9f,	// (0x00082920) main_mobtv_programe_next_pane_t3

0x0002,

0xfc6b,	// (0x000856ec) main_mobtv_programe_next_pane_t

0xabf1,	// (0x00080672) bg_popup_mobtv_noti_window_pane

0xcead,	// (0x0008292e) popup_mobtv_noti_window_g1

0xceb5,	// (0x00082936) popup_mobtv_noti_window_t1

0xcec3,	// (0x00082944) popup_mobtv_noti_window_t2

0x0001,

0xfc72,	// (0x000856f3) popup_mobtv_noti_window_t

0xb494,	// (0x00080f15) bg_popup_mobtv_noti_window_pane_g1

0xabf1,	// (0x00080672) sc_clock_pane

0xabf1,	// (0x00080672) main_fs_bigclock_pane

0x9154,	// (0x0007ebd5) blid2_tripm_pane_t4_ParamLimits

0x9154,	// (0x0007ebd5) blid2_tripm_pane_t4

0x99ac,	// (0x0007f42d) sc_clock_pane_g1_ParamLimits

0x99ac,	// (0x0007f42d) sc_clock_pane_g1

0x99be,	// (0x0007f43f) sc_clock_pane_t1_ParamLimits

0x99be,	// (0x0007f43f) sc_clock_pane_t1

0x99e2,	// (0x0007f463) sc_clock_pane_t2_ParamLimits

0x99e2,	// (0x0007f463) sc_clock_pane_t2

0x99fa,	// (0x0007f47b) sc_clock_pane_t3_ParamLimits

0x99fa,	// (0x0007f47b) sc_clock_pane_t3

0x0004,

0xfc77,	// (0x000856f8) sc_clock_pane_t_ParamLimits

0xfc77,	// (0x000856f8) sc_clock_pane_t

0xa3f8,	// (0x0007fe79) main_fs_bigclock_indicator_pane_ParamLimits

0xa3f8,	// (0x0007fe79) main_fs_bigclock_indicator_pane

0xb694,	// (0x00081115) main_fs_bigclock_pane_g1_ParamLimits

0xb694,	// (0x00081115) main_fs_bigclock_pane_g1

0xa404,	// (0x0007fe85) main_fs_bigclock_pane_t1_ParamLimits

0xa404,	// (0x0007fe85) main_fs_bigclock_pane_t1

0xa416,	// (0x0007fe97) main_fs_bigclock_pane_t2_ParamLimits

0xa416,	// (0x0007fe97) main_fs_bigclock_pane_t2

0xa42a,	// (0x0007feab) main_fs_bigclock_pane_t3_ParamLimits

0xa42a,	// (0x0007feab) main_fs_bigclock_pane_t3

0x0002,

0xfe76,	// (0x000858f7) main_fs_bigclock_pane_t_ParamLimits

0xfe76,	// (0x000858f7) main_fs_bigclock_pane_t

0xda1a,	// (0x0008349b) main_fs_bigclock_indicator_pane_g1

0xcb93,	// (0x00082614) ncim_query_content_pane_g2_ParamLimits

0xcb93,	// (0x00082614) ncim_query_content_pane_g2

0x0001,

0xfc04,	// (0x00085685) ncim_query_content_pane_g_ParamLimits

0xfc04,	// (0x00085685) ncim_query_content_pane_g

0x9a11,	// (0x0007f492) sc_clock_pane_t4_ParamLimits

0x9a11,	// (0x0007f492) sc_clock_pane_t4

0xac6a,	// (0x000806eb) main_radioblah_pane

0xbe87,	// (0x00081908) cell_call4_button_pane_t1_copy1_ParamLimits

0xbe87,	// (0x00081908) cell_call4_button_pane_t1_copy1

0x9666,	// (0x0007f0e7) main_ncimui_pane_t1_ParamLimits

0x9666,	// (0x0007f0e7) main_ncimui_pane_t1

0x9680,	// (0x0007f101) main_ncimui_pane_t2_ParamLimits

0x9680,	// (0x0007f101) main_ncimui_pane_t2

0x0002,

0xfbfd,	// (0x0008567e) main_ncimui_pane_t_ParamLimits

0xfbfd,	// (0x0008567e) main_ncimui_pane_t

0xced1,	// (0x00082952) main_radioblah_anim_pane_ParamLimits

0xced1,	// (0x00082952) main_radioblah_anim_pane

0xcee2,	// (0x00082963) main_radioblah_info_pane_ParamLimits

0xcee2,	// (0x00082963) main_radioblah_info_pane

0xcef6,	// (0x00082977) main_radioblah_pane_t1_ParamLimits

0xcef6,	// (0x00082977) main_radioblah_pane_t1

0xcf12,	// (0x00082993) main_radioblah_pane_t2_ParamLimits

0xcf12,	// (0x00082993) main_radioblah_pane_t2

0x0003,

0xfc98,	// (0x00085719) main_radioblah_pane_t_ParamLimits

0xfc98,	// (0x00085719) main_radioblah_pane_t

0x9bea,	// (0x0007f66b) main_radioblah_rocker_ctrl_pane_ParamLimits

0x9bea,	// (0x0007f66b) main_radioblah_rocker_ctrl_pane

0xcf5a,	// (0x000829db) main_radioblah_info_pane_t1_ParamLimits

0xcf5a,	// (0x000829db) main_radioblah_info_pane_t1

0x9c42,	// (0x0007f6c3) main_radioblah_info_pane_t2_ParamLimits

0x9c42,	// (0x0007f6c3) main_radioblah_info_pane_t2

0x0003,

0xfca1,	// (0x00085722) main_radioblah_info_pane_t_ParamLimits

0xfca1,	// (0x00085722) main_radioblah_info_pane_t

0xb494,	// (0x00080f15) main_radioblah_rocker_ctrl_pane_g1

0x9cf2,	// (0x0007f773) main_radioblah_rocker_ctrl_pane_g2

0x9cfa,	// (0x0007f77b) main_radioblah_rocker_ctrl_pane_g3

0x9d02,	// (0x0007f783) main_radioblah_rocker_ctrl_pane_g4

0x9d0a,	// (0x0007f78b) main_radioblah_rocker_ctrl_pane_g5

0x9d12,	// (0x0007f793) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcaa,	// (0x0008572b) main_radioblah_rocker_ctrl_pane_g

0x93e3,	// (0x0007ee64) main_cset_text2_pane_t1_copy1_ParamLimits

0xe0cc,	// (0x00083b4d) cam4_image_uncrop_qvga_pane

0xe125,	// (0x00083ba6) vid4_image_uncrop_qcif_pane

0xe249,	// (0x00083cca) cam6_image_uncrop_qvga_pane_ParamLimits

0xe249,	// (0x00083cca) cam6_image_uncrop_qvga_pane

0xc7c5,	// (0x00082246) vid6_image_uncrop_qcif_pane_ParamLimits

0xc7c5,	// (0x00082246) vid6_image_uncrop_qcif_pane

0xabf1,	// (0x00080672) bg_popup_preview_window_pane_cp03

0xcb45,	// (0x000825c6) list_cset_text2_pane

0xcb4d,	// (0x000825ce) main_cset6_text2_pane_g1

0xcb55,	// (0x000825d6) main_cset6_text2_pane_t1

0xcf94,	// (0x00082a15) list_cset_text2_pane_t1_ParamLimits

0xcf94,	// (0x00082a15) list_cset_text2_pane_t1

0xac6a,	// (0x000806eb) main_radioblah_pane_ParamLimits

0x9947,	// (0x0007f3c8) main_mobtv_info_pane_t3_ParamLimits

0x9947,	// (0x0007f3c8) main_mobtv_info_pane_t3

0x9bd8,	// (0x0007f659) main_radioblah_pane_g1

0x9c12,	// (0x0007f693) main_radioblah_info_pane_g1

0x9c97,	// (0x0007f718) main_radioblah_info_pane_t3_ParamLimits

0x9c97,	// (0x0007f718) main_radioblah_info_pane_t3

0x2f4d,	// (0x000789ce) highlight_cell_cale_month_pane_ParamLimits

0x2f4d,	// (0x000789ce) highlight_cell_cale_month_pane

0xabf1,	// (0x00080672) main_phob_fisheye_pane

0xb81a,	// (0x0008129b) scroll_pane_cp0031_ParamLimits

0xb81a,	// (0x0008129b) scroll_pane_cp0031

0xc8d7,	// (0x00082358) wait_bar_pane_cp08_ParamLimits

0x946c,	// (0x0007eeed) cset_list_set_pane_copy1_ParamLimits

0xcfae,	// (0x00082a2f) highlight_cell_cale_month_pane_g1

0x9d1a,	// (0x0007f79b) highlight_cell_cale_month_pane_t1

0xc50b,	// (0x00081f8c) list_gen_pane_cp01

0xc099,	// (0x00081b1a) scroll_pane_01

0x9d28,	// (0x0007f7a9) list_single_double_fisheye_pane

0xcfb6,	// (0x00082a37) list_double_fisheye_pane_g1_ParamLimits

0xcfb6,	// (0x00082a37) list_double_fisheye_pane_g1

0xcfc2,	// (0x00082a43) list_double_fisheye_pane_g2_ParamLimits

0xcfc2,	// (0x00082a43) list_double_fisheye_pane_g2

0x9d31,	// (0x0007f7b2) list_double_fisheye_pane_g3_ParamLimits

0x9d31,	// (0x0007f7b2) list_double_fisheye_pane_g3

0x0004,

0xfcb7,	// (0x00085738) list_double_fisheye_pane_g_ParamLimits

0xfcb7,	// (0x00085738) list_double_fisheye_pane_g

0x0f2c,	// (0x000769ad) list_double_fisheye_pane_t1_ParamLimits

0x0f2c,	// (0x000769ad) list_double_fisheye_pane_t1

0x0f47,	// (0x000769c8) list_double_fisheye_pane_t2_ParamLimits

0x0f47,	// (0x000769c8) list_double_fisheye_pane_t2

0x0001,

0xfcc2,	// (0x00085743) list_double_fisheye_pane_t_ParamLimits

0xfcc2,	// (0x00085743) list_double_fisheye_pane_t

0xabf1,	// (0x00080672) main_call5_pane

0x9a3c,	// (0x0007f4bd) sc_swipe_pane_ParamLimits

0x9a3c,	// (0x0007f4bd) sc_swipe_pane

0x9d50,	// (0x0007f7d1) call5_image_pane_ParamLimits

0x9d50,	// (0x0007f7d1) call5_image_pane

0x9d6d,	// (0x0007f7ee) call5_swipe_1_pane_ParamLimits

0x9d6d,	// (0x0007f7ee) call5_swipe_1_pane

0x9d80,	// (0x0007f801) call5_swipe_2_pane_ParamLimits

0x9d80,	// (0x0007f801) call5_swipe_2_pane

0x9dad,	// (0x0007f82e) popup_call5_audio_first_window_ParamLimits

0x9dad,	// (0x0007f82e) popup_call5_audio_first_window

0xb6c4,	// (0x00081145) call5_swipe_1_pane_g1_ParamLimits

0xb6c4,	// (0x00081145) call5_swipe_1_pane_g1

0xcff3,	// (0x00082a74) call5_swipe_1_pane_g2_ParamLimits

0xcff3,	// (0x00082a74) call5_swipe_1_pane_g2

0x0001,

0xfcc7,	// (0x00085748) call5_swipe_1_pane_g_ParamLimits

0xfcc7,	// (0x00085748) call5_swipe_1_pane_g

0xcfff,	// (0x00082a80) call5_swipe_1_pane_t1_ParamLimits

0xcfff,	// (0x00082a80) call5_swipe_1_pane_t1

0xb6c4,	// (0x00081145) call5_swipe_2_pane_g1_ParamLimits

0xb6c4,	// (0x00081145) call5_swipe_2_pane_g1

0xd014,	// (0x00082a95) call5_swipe_2_pane_g2_ParamLimits

0xd014,	// (0x00082a95) call5_swipe_2_pane_g2

0x0001,

0xfccc,	// (0x0008574d) call5_swipe_2_pane_g_ParamLimits

0xfccc,	// (0x0008574d) call5_swipe_2_pane_g

0xd020,	// (0x00082aa1) call5_swipe_2_pane_t1_ParamLimits

0xd020,	// (0x00082aa1) call5_swipe_2_pane_t1

0xd035,	// (0x00082ab6) sc_swipe_pane_g1_ParamLimits

0xd035,	// (0x00082ab6) sc_swipe_pane_g1

0xd042,	// (0x00082ac3) sc_swipe_pane_g2_ParamLimits

0xd042,	// (0x00082ac3) sc_swipe_pane_g2

0x0001,

0xfcd1,	// (0x00085752) sc_swipe_pane_g_ParamLimits

0xfcd1,	// (0x00085752) sc_swipe_pane_g

0xd04e,	// (0x00082acf) sc_swipe_pane_t1_ParamLimits

0xd04e,	// (0x00082acf) sc_swipe_pane_t1

0xabf1,	// (0x00080672) main_cmail_launcher_pane

0x9dc2,	// (0x0007f843) aid_size_cell_cmail_l_ParamLimits

0x9dc2,	// (0x0007f843) aid_size_cell_cmail_l

0x9ddc,	// (0x0007f85d) grid_cmail_l_pane_ParamLimits

0x9ddc,	// (0x0007f85d) grid_cmail_l_pane

0x9df8,	// (0x0007f879) cell_cmail_l_pane_ParamLimits

0x9df8,	// (0x0007f879) cell_cmail_l_pane

0x9e20,	// (0x0007f8a1) cell_cmail_l_pane_g1_ParamLimits

0x9e20,	// (0x0007f8a1) cell_cmail_l_pane_g1

0x9e2c,	// (0x0007f8ad) cell_cmail_l_pane_t1_ParamLimits

0x9e2c,	// (0x0007f8ad) cell_cmail_l_pane_t1

0xd063,	// (0x00082ae4) cell_cmail_l_pane_t2_ParamLimits

0xd063,	// (0x00082ae4) cell_cmail_l_pane_t2

0x0001,

0xfcd6,	// (0x00085757) cell_cmail_l_pane_t_ParamLimits

0xfcd6,	// (0x00085757) cell_cmail_l_pane_t

0xac6a,	// (0x000806eb) grid_highlight_pane_cp018_ParamLimits

0xac6a,	// (0x000806eb) grid_highlight_pane_cp018

0x15bc,	// (0x0007703d) main2_pane_ParamLimits

0x15bc,	// (0x0007703d) main2_pane

0xe993,	// (0x00084414) popup_sp_fs_action_menu_bg_pane_g1

0xe99b,	// (0x0008441c) popup_sp_fs_action_menu_bg_pane_g2

0xe9a3,	// (0x00084424) popup_sp_fs_action_menu_bg_pane_g3

0xe9ab,	// (0x0008442c) popup_sp_fs_action_menu_bg_pane_g4

0xe9b3,	// (0x00084434) popup_sp_fs_action_menu_bg_pane_g5

0xe9bb,	// (0x0008443c) popup_sp_fs_action_menu_bg_pane_g6

0xe9c3,	// (0x00084444) popup_sp_fs_action_menu_bg_pane_g7

0xe9cb,	// (0x0008444c) popup_sp_fs_action_menu_bg_pane_g8

0xe9d3,	// (0x00084454) popup_sp_fs_action_menu_bg_pane_g9

0xe9db,	// (0x0008445c) popup_sp_fs_action_menu_bg_pane_g10

0xe9db,	// (0x0008445c) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ac,	// (0x00084c2d) popup_sp_fs_action_menu_bg_pane_g

0xae64,	// (0x000808e5) list_medium_line_x2_t3_g3_g1_ParamLimits

0xae64,	// (0x000808e5) list_medium_line_x2_t3_g3_g1

0xae70,	// (0x000808f1) list_medium_line_x2_t3_g3_g2_ParamLimits

0xae70,	// (0x000808f1) list_medium_line_x2_t3_g3_g2

0xae7c,	// (0x000808fd) list_medium_line_x2_t3_g3_g3_ParamLimits

0xae7c,	// (0x000808fd) list_medium_line_x2_t3_g3_g3

0x0002,

0xf25c,	// (0x00084cdd) list_medium_line_x2_t3_g3_g_ParamLimits

0xf25c,	// (0x00084cdd) list_medium_line_x2_t3_g3_g

0xae88,	// (0x00080909) list_medium_line_x2_t3_g3_t1_ParamLimits

0xae88,	// (0x00080909) list_medium_line_x2_t3_g3_t1

0x0ad7,	// (0x00076558) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0ad7,	// (0x00076558) list_medium_line_x2_t3_g3_t2

0xae9d,	// (0x0008091e) list_medium_line_x2_t3_g3_t3_ParamLimits

0xae9d,	// (0x0008091e) list_medium_line_x2_t3_g3_t3

0x0002,

0xf263,	// (0x00084ce4) list_medium_line_x2_t3_g3_t_ParamLimits

0xf263,	// (0x00084ce4) list_medium_line_x2_t3_g3_t

0xae64,	// (0x000808e5) list_medium_line_x2_t3_g2_g1_ParamLimits

0xae64,	// (0x000808e5) list_medium_line_x2_t3_g2_g1

0xae7c,	// (0x000808fd) list_medium_line_x2_t3_g2_g2_ParamLimits

0xae7c,	// (0x000808fd) list_medium_line_x2_t3_g2_g2

0x0001,

0xf26a,	// (0x00084ceb) list_medium_line_x2_t3_g2_g_ParamLimits

0xf26a,	// (0x00084ceb) list_medium_line_x2_t3_g2_g

0xaeb2,	// (0x00080933) list_medium_line_x2_t3_g2_t1_ParamLimits

0xaeb2,	// (0x00080933) list_medium_line_x2_t3_g2_t1

0xaec8,	// (0x00080949) list_medium_line_x2_t3_g2_t2_ParamLimits

0xaec8,	// (0x00080949) list_medium_line_x2_t3_g2_t2

0xaeda,	// (0x0008095b) list_medium_line_x2_t3_g2_t3_ParamLimits

0xaeda,	// (0x0008095b) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26f,	// (0x00084cf0) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26f,	// (0x00084cf0) list_medium_line_x2_t3_g2_t

0xae64,	// (0x000808e5) list_medium_line_x2_t4_g4_g1_ParamLimits

0xae64,	// (0x000808e5) list_medium_line_x2_t4_g4_g1

0xaef8,	// (0x00080979) list_medium_line_x2_t4_g4_g2_ParamLimits

0xaef8,	// (0x00080979) list_medium_line_x2_t4_g4_g2

0xae70,	// (0x000808f1) list_medium_line_x2_t4_g4_g3_ParamLimits

0xae70,	// (0x000808f1) list_medium_line_x2_t4_g4_g3

0xaf04,	// (0x00080985) list_medium_line_x2_t4_g4_g4_ParamLimits

0xaf04,	// (0x00080985) list_medium_line_x2_t4_g4_g4

0x0003,

0xf276,	// (0x00084cf7) list_medium_line_x2_t4_g4_g_ParamLimits

0xf276,	// (0x00084cf7) list_medium_line_x2_t4_g4_g

0x0aeb,	// (0x0007656c) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0aeb,	// (0x0007656c) list_medium_line_x2_t4_g4_t1

0x0b05,	// (0x00076586) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0b05,	// (0x00076586) list_medium_line_x2_t4_g4_t2

0x0b1b,	// (0x0007659c) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0b1b,	// (0x0007659c) list_medium_line_x2_t4_g4_t3

0xaf10,	// (0x00080991) list_medium_line_x2_t4_g4_t4_ParamLimits

0xaf10,	// (0x00080991) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27f,	// (0x00084d00) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27f,	// (0x00084d00) list_medium_line_x2_t4_g4_t

0xae64,	// (0x000808e5) list_medium_line_x2_t2_g4_g1_ParamLimits

0xae64,	// (0x000808e5) list_medium_line_x2_t2_g4_g1

0xaef8,	// (0x00080979) list_medium_line_x2_t2_g4_g2_ParamLimits

0xaef8,	// (0x00080979) list_medium_line_x2_t2_g4_g2

0xae70,	// (0x000808f1) list_medium_line_x2_t2_g4_g3_ParamLimits

0xae70,	// (0x000808f1) list_medium_line_x2_t2_g4_g3

0xae7c,	// (0x000808fd) list_medium_line_x2_t2_g4_g4_ParamLimits

0xae7c,	// (0x000808fd) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e6,	// (0x00084d67) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e6,	// (0x00084d67) list_medium_line_x2_t2_g4_g

0xaf22,	// (0x000809a3) list_medium_line_x2_t2_g4_t1_ParamLimits

0xaf22,	// (0x000809a3) list_medium_line_x2_t2_g4_t1

0xae9d,	// (0x0008091e) list_medium_line_x2_t2_g4_t2_ParamLimits

0xae9d,	// (0x0008091e) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ef,	// (0x00084d70) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ef,	// (0x00084d70) list_medium_line_x2_t2_g4_t

0xae64,	// (0x000808e5) list_medium_line_x2_t2_g3_g1_ParamLimits

0xae64,	// (0x000808e5) list_medium_line_x2_t2_g3_g1

0xae70,	// (0x000808f1) list_medium_line_x2_t2_g3_g2_ParamLimits

0xae70,	// (0x000808f1) list_medium_line_x2_t2_g3_g2

0xae7c,	// (0x000808fd) list_medium_line_x2_t2_g3_g3_ParamLimits

0xae7c,	// (0x000808fd) list_medium_line_x2_t2_g3_g3

0x0002,

0xf25c,	// (0x00084cdd) list_medium_line_x2_t2_g3_g_ParamLimits

0xf25c,	// (0x00084cdd) list_medium_line_x2_t2_g3_g

0xaf37,	// (0x000809b8) list_medium_line_x2_t2_g3_t1_ParamLimits

0xaf37,	// (0x000809b8) list_medium_line_x2_t2_g3_t1

0xae9d,	// (0x0008091e) list_medium_line_x2_t2_g3_t2_ParamLimits

0xae9d,	// (0x0008091e) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2f4,	// (0x00084d75) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2f4,	// (0x00084d75) list_medium_line_x2_t2_g3_t

0x3126,	// (0x00078ba7) main_sp_fs_list_pane_ParamLimits

0x3126,	// (0x00078ba7) main_sp_fs_list_pane

0x3132,	// (0x00078bb3) sp_fs_scroll_pane_ParamLimits

0x3132,	// (0x00078bb3) sp_fs_scroll_pane

0x0b30,	// (0x000765b1) list_medium_line_x2_t3_t1

0x0b40,	// (0x000765c1) list_medium_line_x2_t3_t2

0xaf7a,	// (0x000809fb) list_medium_line_x2_t3_t3

0x0002,

0xf33f,	// (0x00084dc0) list_medium_line_x2_t3_t

0x0b4e,	// (0x000765cf) list_medium_line_x3_t4_t1

0x0b5e,	// (0x000765df) list_medium_line_x3_t4_t2

0xaf88,	// (0x00080a09) list_medium_line_x3_t4_t3

0xaf7a,	// (0x000809fb) list_medium_line_x3_t4_t4

0x0003,

0xf346,	// (0x00084dc7) list_medium_line_x3_t4_t

0x0b6c,	// (0x000765ed) list_medium_line_x4_t5_t1

0x0b7c,	// (0x000765fd) list_medium_line_x4_t5_t2

0xaf88,	// (0x00080a09) list_medium_line_x4_t5_t3

0xaf96,	// (0x00080a17) list_medium_line_x4_t5_t4

0xaf7a,	// (0x000809fb) list_medium_line_x4_t5_t5

0x0004,

0xf34f,	// (0x00084dd0) list_medium_line_x4_t5_t

0xae64,	// (0x000808e5) list_medium_line_t4_g4_g1_ParamLimits

0xae64,	// (0x000808e5) list_medium_line_t4_g4_g1

0xaf04,	// (0x00080985) list_medium_line_t4_g4_g2_ParamLimits

0xaf04,	// (0x00080985) list_medium_line_t4_g4_g2

0xafa4,	// (0x00080a25) list_medium_line_t4_g4_g3_ParamLimits

0xafa4,	// (0x00080a25) list_medium_line_t4_g4_g3

0xae7c,	// (0x000808fd) list_medium_line_t4_g4_g4_ParamLimits

0xae7c,	// (0x000808fd) list_medium_line_t4_g4_g4

0x0003,

0xf35a,	// (0x00084ddb) list_medium_line_t4_g4_g_ParamLimits

0xf35a,	// (0x00084ddb) list_medium_line_t4_g4_g

0xafb0,	// (0x00080a31) list_medium_line_t4_g4_t1_ParamLimits

0xafb0,	// (0x00080a31) list_medium_line_t4_g4_t1

0xafc5,	// (0x00080a46) list_medium_line_t4_g4_t2_ParamLimits

0xafc5,	// (0x00080a46) list_medium_line_t4_g4_t2

0xafdb,	// (0x00080a5c) list_medium_line_t4_g4_t3_ParamLimits

0xafdb,	// (0x00080a5c) list_medium_line_t4_g4_t3

0xae9d,	// (0x0008091e) list_medium_line_t4_g4_t4_ParamLimits

0xae9d,	// (0x0008091e) list_medium_line_t4_g4_t4

0x0003,

0xf363,	// (0x00084de4) list_medium_line_t4_g4_t_ParamLimits

0xf363,	// (0x00084de4) list_medium_line_t4_g4_t

0x32fe,	// (0x00078d7f) chi_dic_find_pane_g1

0x5a04,	// (0x0007b485) main_tport_pane

0xc1c0,	// (0x00081c41) list_medium_line_plain_t1

0xc1d6,	// (0x00081c57) list_medium_line_t2_g2_g1_ParamLimits

0xc1d6,	// (0x00081c57) list_medium_line_t2_g2_g1

0xc1e2,	// (0x00081c63) list_medium_line_t2_g2_g2_ParamLimits

0xc1e2,	// (0x00081c63) list_medium_line_t2_g2_g2

0x0001,

0xfa13,	// (0x00085494) list_medium_line_t2_g2_g_ParamLimits

0xfa13,	// (0x00085494) list_medium_line_t2_g2_g

0x0d84,	// (0x00076805) list_medium_line_t2_g2_t1_ParamLimits

0x0d84,	// (0x00076805) list_medium_line_t2_g2_t1

0x0d9b,	// (0x0007681c) list_medium_line_t2_g2_t2_ParamLimits

0x0d9b,	// (0x0007681c) list_medium_line_t2_g2_t2

0x0001,

0xfa18,	// (0x00085499) list_medium_line_t2_g2_t_ParamLimits

0xfa18,	// (0x00085499) list_medium_line_t2_g2_t

0xc514,	// (0x00081f95) aid_sp_fs_list_icon_a_sm

0xe241,	// (0x00083cc2) aid_sp_fs_list_icon_d

0xc51c,	// (0x00081f9d) aid_sp_fs_text_primary

0xe632,	// (0x000840b3) aid_sp_fs_text_secondary

0xc525,	// (0x00081fa6) list_medium_line

0xc525,	// (0x00081fa6) list_medium_line_g2

0xc525,	// (0x00081fa6) list_medium_line_g3

0xc525,	// (0x00081fa6) list_medium_line_plain

0xc525,	// (0x00081fa6) list_medium_line_plain_t2

0xc525,	// (0x00081fa6) list_medium_line_plain_t3

0xc525,	// (0x00081fa6) list_medium_line_right_icon

0xc525,	// (0x00081fa6) list_medium_line_right_iconx2

0xc525,	// (0x00081fa6) list_medium_line_t2

0xc525,	// (0x00081fa6) list_medium_line_t2_g2

0xc525,	// (0x00081fa6) list_medium_line_t2_g3

0xc525,	// (0x00081fa6) list_medium_line_t2_right_icon

0xc525,	// (0x00081fa6) list_medium_line_t2_right_iconx2

0xc525,	// (0x00081fa6) list_medium_line_t3

0xc525,	// (0x00081fa6) list_medium_line_t3_g2

0xc525,	// (0x00081fa6) list_medium_line_t3_g3

0xc525,	// (0x00081fa6) list_medium_line_t3_right_iconx2

0xc52e,	// (0x00081faf) list_medium_line_t4_g4

0xc537,	// (0x00081fb8) list_medium_line_x2

0xc537,	// (0x00081fb8) list_medium_line_x2_t2_g2

0xc537,	// (0x00081fb8) list_medium_line_x2_t2_g3

0xc537,	// (0x00081fb8) list_medium_line_x2_t2_g4

0xc537,	// (0x00081fb8) list_medium_line_x2_t3

0xc537,	// (0x00081fb8) list_medium_line_x2_t3_g2

0xc537,	// (0x00081fb8) list_medium_line_x2_t3_g3

0xc537,	// (0x00081fb8) list_medium_line_x2_t3_g4

0xc537,	// (0x00081fb8) list_medium_line_x2_t4_g2

0xc537,	// (0x00081fb8) list_medium_line_x2_t4_g4

0xc540,	// (0x00081fc1) list_medium_line_x3

0xc540,	// (0x00081fc1) list_medium_line_x3_t4

0xc540,	// (0x00081fc1) list_medium_line_x3_t4_g4

0xc52e,	// (0x00081faf) list_medium_line_x4_t4

0xc52e,	// (0x00081faf) list_medium_line_x4_t4_g7

0xc52e,	// (0x00081faf) list_medium_line_x4_t5

0xc549,	// (0x00081fca) list_single_fs_dyc_pane_ParamLimits

0xc549,	// (0x00081fca) list_single_fs_dyc_pane

0xae64,	// (0x000808e5) list_medium_line_x4_t4_g7_g1_ParamLimits

0xae64,	// (0x000808e5) list_medium_line_x4_t4_g7_g1

0xca74,	// (0x000824f5) list_medium_line_x4_t4_g7_g2_ParamLimits

0xca74,	// (0x000824f5) list_medium_line_x4_t4_g7_g2

0xca80,	// (0x00082501) list_medium_line_x4_t4_g7_g3_ParamLimits

0xca80,	// (0x00082501) list_medium_line_x4_t4_g7_g3

0xca8f,	// (0x00082510) list_medium_line_x4_t4_g7_g4_ParamLimits

0xca8f,	// (0x00082510) list_medium_line_x4_t4_g7_g4

0xca9b,	// (0x0008251c) list_medium_line_x4_t4_g7_g5_ParamLimits

0xca9b,	// (0x0008251c) list_medium_line_x4_t4_g7_g5

0xcaaa,	// (0x0008252b) list_medium_line_x4_t4_g7_g6_ParamLimits

0xcaaa,	// (0x0008252b) list_medium_line_x4_t4_g7_g6

0xcab9,	// (0x0008253a) list_medium_line_x4_t4_g7_g7_ParamLimits

0xcab9,	// (0x0008253a) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbe3,	// (0x00085664) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbe3,	// (0x00085664) list_medium_line_x4_t4_g7_g

0xcac5,	// (0x00082546) list_medium_line_x4_t4_g7_t1_ParamLimits

0xcac5,	// (0x00082546) list_medium_line_x4_t4_g7_t1

0xcada,	// (0x0008255b) list_medium_line_x4_t4_g7_t2_ParamLimits

0xcada,	// (0x0008255b) list_medium_line_x4_t4_g7_t2

0xcaef,	// (0x00082570) list_medium_line_x4_t4_g7_t3_ParamLimits

0xcaef,	// (0x00082570) list_medium_line_x4_t4_g7_t3

0xcb04,	// (0x00082585) list_medium_line_x4_t4_g7_t4_ParamLimits

0xcb04,	// (0x00082585) list_medium_line_x4_t4_g7_t4

0xcb16,	// (0x00082597) list_medium_line_x4_t4_g7_t5_ParamLimits

0xcb16,	// (0x00082597) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbf2,	// (0x00085673) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbf2,	// (0x00085673) list_medium_line_x4_t4_g7_t

0xcb28,	// (0x000825a9) list_single_dyc_row_pane_ParamLimits

0xcb28,	// (0x000825a9) list_single_dyc_row_pane

0x9d3d,	// (0x0007f7be) call5_gesture_pane_ParamLimits

0x9d3d,	// (0x0007f7be) call5_gesture_pane

0x9d93,	// (0x0007f814) call5_windows_pane_ParamLimits

0x9d93,	// (0x0007f814) call5_windows_pane

0x9e42,	// (0x0007f8c3) call5_swipe_1_pane_cp_ParamLimits

0x9e42,	// (0x0007f8c3) call5_swipe_1_pane_cp

0x9e4e,	// (0x0007f8cf) call5_swipe_2_pane_cp_ParamLimits

0x9e4e,	// (0x0007f8cf) call5_swipe_2_pane_cp

0x3782,	// (0x00079203) call5_image_pane_cp

0x9e5a,	// (0x0007f8db) popup_call5_audio_first_window_cp_ParamLimits

0x9e5a,	// (0x0007f8db) popup_call5_audio_first_window_cp

0xd035,	// (0x00082ab6) call5_swipe_1_pane_g1_cp_ParamLimits

0xd035,	// (0x00082ab6) call5_swipe_1_pane_g1_cp

0xd075,	// (0x00082af6) call5_swipe_1_pane_g2_cp

0xd04e,	// (0x00082acf) call5_swipe_1_pane_t1_cp_ParamLimits

0xd04e,	// (0x00082acf) call5_swipe_1_pane_t1_cp

0xd035,	// (0x00082ab6) call5_swipe_2_pane_g1_cp_ParamLimits

0xd035,	// (0x00082ab6) call5_swipe_2_pane_g1_cp

0xd07d,	// (0x00082afe) call5_swipe_2_pane_g2_cp

0xd085,	// (0x00082b06) call5_swipe_2_pane_t1_cp_ParamLimits

0xd085,	// (0x00082b06) call5_swipe_2_pane_t1_cp

0xac6a,	// (0x000806eb) main_sp_fs_email_pane

0xd09a,	// (0x00082b1b) main_sp_fs_listscroll_pane_te

0xd0a3,	// (0x00082b24) popup_sp_fs_action_menu_pane_ParamLimits

0xd0a3,	// (0x00082b24) popup_sp_fs_action_menu_pane

0xb494,	// (0x00080f15) bg_sp_fs_ctrlbar_pane_g1

0xd0e9,	// (0x00082b6a) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xd0f2,	// (0x00082b73) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xd0fb,	// (0x00082b7c) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xb494,	// (0x00080f15) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcdb,	// (0x0008575c) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xb273,	// (0x00080cf4) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xb273,	// (0x00080cf4) bg_sp_fs_ctrlbar_ddmenu_pane

0xd104,	// (0x00082b85) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xd104,	// (0x00082b85) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xd110,	// (0x00082b91) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xd110,	// (0x00082b91) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfce4,	// (0x00085765) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfce4,	// (0x00085765) main_sp_fs_ctrlbar_ddmenu_pane_g

0xd11c,	// (0x00082b9d) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xd11c,	// (0x00082b9d) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xd136,	// (0x00082bb7) list_medium_line_t2_right_icon_g1

0x0f69,	// (0x000769ea) list_medium_line_t2_right_icon_t1

0x0f79,	// (0x000769fa) list_medium_line_t2_right_icon_t2

0x0001,

0xfce9,	// (0x0008576a) list_medium_line_t2_right_icon_t

0x59e2,	// (0x0007b463) bg_sp_fs_ctrlbar_pane_ParamLimits

0x59e2,	// (0x0007b463) bg_sp_fs_ctrlbar_pane

0x9eb0,	// (0x0007f931) main_sp_fs_ctrlbar_button_pane_cp01

0x9eba,	// (0x0007f93b) main_sp_fs_ctrlbar_ddmenu_pane

0xd178,	// (0x00082bf9) main_sp_fs_ctrlbar_pane_g1

0xd184,	// (0x00082c05) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcee,	// (0x0008576f) main_sp_fs_ctrlbar_pane_g

0xd190,	// (0x00082c11) main_sp_fs_ctrlbar_pane_t1

0x0f8b,	// (0x00076a0c) main_sp_fs_ctrlbar_pane

0x0faf,	// (0x00076a30) main_sp_fs_listscroll_pane_te_cp01

0x0fcf,	// (0x00076a50) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x0fcf,	// (0x00076a50) popup_sp_fs_action_menu_pane_cp01

0xac6a,	// (0x000806eb) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xac6a,	// (0x000806eb) bg_sp_fs_highlight_list_pane_cp01

0xd1a5,	// (0x00082c26) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xd1a5,	// (0x00082c26) sp_fs_action_menu_list_gene_pane_g1

0xd1b4,	// (0x00082c35) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xd1b4,	// (0x00082c35) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcf3,	// (0x00085774) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcf3,	// (0x00085774) sp_fs_action_menu_list_gene_pane_g

0xd1c1,	// (0x00082c42) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xd1c1,	// (0x00082c42) sp_fs_action_menu_list_gene_pane_t1

0xd1d9,	// (0x00082c5a) sp_fs_action_menu_list_gene_pane_ParamLimits

0xd1d9,	// (0x00082c5a) sp_fs_action_menu_list_gene_pane

0xd1fc,	// (0x00082c7d) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xd1fc,	// (0x00082c7d) popup_sp_fs_action_menu_bg_pane

0xd20a,	// (0x00082c8b) sp_fs_action_menu_list_pane_ParamLimits

0xd20a,	// (0x00082c8b) sp_fs_action_menu_list_pane

0xd22e,	// (0x00082caf) sp_fs_scroll_pane_cp01_ParamLimits

0xd22e,	// (0x00082caf) sp_fs_scroll_pane_cp01

0x0feb,	// (0x00076a6c) list_medium_line_plain_t2_t1

0x0ffb,	// (0x00076a7c) list_medium_line_plain_t2_t2

0x0001,

0xfcf8,	// (0x00085779) list_medium_line_plain_t2_t

0x100b,	// (0x00076a8c) list_medium_line_plain_t3_t1

0x101b,	// (0x00076a9c) list_medium_line_plain_t3_t2

0x1029,	// (0x00076aaa) list_medium_line_plain_t3_t3

0x0002,

0xfcfd,	// (0x0008577e) list_medium_line_plain_t3_t

0xae64,	// (0x000808e5) list_medium_line_x2_t2_g2_g1_ParamLimits

0xae64,	// (0x000808e5) list_medium_line_x2_t2_g2_g1

0xae7c,	// (0x000808fd) list_medium_line_x2_t2_g2_g2_ParamLimits

0xae7c,	// (0x000808fd) list_medium_line_x2_t2_g2_g2

0x0001,

0xf26a,	// (0x00084ceb) list_medium_line_x2_t2_g2_g_ParamLimits

0xf26a,	// (0x00084ceb) list_medium_line_x2_t2_g2_g

0xafb0,	// (0x00080a31) list_medium_line_x2_t2_g2_t1_ParamLimits

0xafb0,	// (0x00080a31) list_medium_line_x2_t2_g2_t1

0xae9d,	// (0x0008091e) list_medium_line_x2_t2_g2_t2_ParamLimits

0xae9d,	// (0x0008091e) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd04,	// (0x00085785) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd04,	// (0x00085785) list_medium_line_x2_t2_g2_t

0xae64,	// (0x000808e5) list_medium_line_x2_t4_g2_g1_ParamLimits

0xae64,	// (0x000808e5) list_medium_line_x2_t4_g2_g1

0xd254,	// (0x00082cd5) list_medium_line_x2_t4_g2_g2_ParamLimits

0xd254,	// (0x00082cd5) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd09,	// (0x0008578a) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd09,	// (0x0008578a) list_medium_line_x2_t4_g2_g

0x1037,	// (0x00076ab8) list_medium_line_x2_t4_g2_t1_ParamLimits

0x1037,	// (0x00076ab8) list_medium_line_x2_t4_g2_t1

0x1051,	// (0x00076ad2) list_medium_line_x2_t4_g2_t2_ParamLimits

0x1051,	// (0x00076ad2) list_medium_line_x2_t4_g2_t2

0x1067,	// (0x00076ae8) list_medium_line_x2_t4_g2_t3_ParamLimits

0x1067,	// (0x00076ae8) list_medium_line_x2_t4_g2_t3

0xae9d,	// (0x0008091e) list_medium_line_x2_t4_g2_t4_ParamLimits

0xae9d,	// (0x0008091e) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd0e,	// (0x0008578f) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd0e,	// (0x0008578f) list_medium_line_x2_t4_g2_t

0xd266,	// (0x00082ce7) list_medium_line_t3_right_iconx2_g1

0xd136,	// (0x00082bb7) list_medium_line_t3_right_iconx2_g2

0x107c,	// (0x00076afd) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd17,	// (0x00085798) list_medium_line_t3_right_iconx2_g

0x1086,	// (0x00076b07) list_medium_line_t3_right_iconx2_t1

0x1096,	// (0x00076b17) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd1e,	// (0x0008579f) list_medium_line_t3_right_iconx2_t

0xae64,	// (0x000808e5) list_medium_line_x3_t4_g4_g1_ParamLimits

0xae64,	// (0x000808e5) list_medium_line_x3_t4_g4_g1

0xae70,	// (0x000808f1) list_medium_line_x3_t4_g4_g2_ParamLimits

0xae70,	// (0x000808f1) list_medium_line_x3_t4_g4_g2

0xaf04,	// (0x00080985) list_medium_line_x3_t4_g4_g3_ParamLimits

0xaf04,	// (0x00080985) list_medium_line_x3_t4_g4_g3

0xd26e,	// (0x00082cef) list_medium_line_x3_t4_g4_g4_ParamLimits

0xd26e,	// (0x00082cef) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd23,	// (0x000857a4) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd23,	// (0x000857a4) list_medium_line_x3_t4_g4_g

0x10a4,	// (0x00076b25) list_medium_line_x3_t4_g4_t1_ParamLimits

0x10a4,	// (0x00076b25) list_medium_line_x3_t4_g4_t1

0x10bb,	// (0x00076b3c) list_medium_line_x3_t4_g4_t2_ParamLimits

0x10bb,	// (0x00076b3c) list_medium_line_x3_t4_g4_t2

0xd27a,	// (0x00082cfb) list_medium_line_x3_t4_g4_t3_ParamLimits

0xd27a,	// (0x00082cfb) list_medium_line_x3_t4_g4_t3

0xd28f,	// (0x00082d10) list_medium_line_x3_t4_g4_t4_ParamLimits

0xd28f,	// (0x00082d10) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd2c,	// (0x000857ad) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd2c,	// (0x000857ad) list_medium_line_x3_t4_g4_t

0x10d6,	// (0x00076b57) list_single_dyc_row_text_pane_t1_ParamLimits

0x10d6,	// (0x00076b57) list_single_dyc_row_text_pane_t1

0x111f,	// (0x00076ba0) list_single_dyc_row_text_pane_t2_ParamLimits

0x111f,	// (0x00076ba0) list_single_dyc_row_text_pane_t2

0xd2ac,	// (0x00082d2d) list_single_dyc_row_text_pane_t3_ParamLimits

0xd2ac,	// (0x00082d2d) list_single_dyc_row_text_pane_t3

0x0002,

0xfd35,	// (0x000857b6) list_single_dyc_row_text_pane_t_ParamLimits

0xfd35,	// (0x000857b6) list_single_dyc_row_text_pane_t

0xd2be,	// (0x00082d3f) list_single_dyc_row_pane_g1_ParamLimits

0xd2be,	// (0x00082d3f) list_single_dyc_row_pane_g1

0xd2ca,	// (0x00082d4b) list_single_dyc_row_pane_g2_ParamLimits

0xd2ca,	// (0x00082d4b) list_single_dyc_row_pane_g2

0xd2d6,	// (0x00082d57) list_single_dyc_row_pane_g3_ParamLimits

0xd2d6,	// (0x00082d57) list_single_dyc_row_pane_g3

0xd2e2,	// (0x00082d63) list_single_dyc_row_pane_g4_ParamLimits

0xd2e2,	// (0x00082d63) list_single_dyc_row_pane_g4

0x0003,

0xfd3c,	// (0x000857bd) list_single_dyc_row_pane_g_ParamLimits

0xfd3c,	// (0x000857bd) list_single_dyc_row_pane_g

0xd2ee,	// (0x00082d6f) list_single_dyc_row_text_pane_ParamLimits

0xd2ee,	// (0x00082d6f) list_single_dyc_row_text_pane

0xabf1,	// (0x00080672) bg_sp_fs_scroll_pane

0xd30d,	// (0x00082d8e) thumb_sp_fs_scroll_pane

0xc1d6,	// (0x00081c57) list_medium_line_g1_ParamLimits

0xc1d6,	// (0x00081c57) list_medium_line_g1

0xd316,	// (0x00082d97) list_medium_line_t1_ParamLimits

0xd316,	// (0x00082d97) list_medium_line_t1

0xae64,	// (0x000808e5) list_medium_line_x2_g1_ParamLimits

0xae64,	// (0x000808e5) list_medium_line_x2_g1

0xae70,	// (0x000808f1) list_medium_line_x2_g2_ParamLimits

0xae70,	// (0x000808f1) list_medium_line_x2_g2

0x0001,

0xfd45,	// (0x000857c6) list_medium_line_x2_g_ParamLimits

0xfd45,	// (0x000857c6) list_medium_line_x2_g

0xd32b,	// (0x00082dac) list_medium_line_x2_t1_ParamLimits

0xd32b,	// (0x00082dac) list_medium_line_x2_t1

0xae64,	// (0x000808e5) list_medium_line_x3_g1_ParamLimits

0xae64,	// (0x000808e5) list_medium_line_x3_g1

0xae70,	// (0x000808f1) list_medium_line_x3_g2_ParamLimits

0xae70,	// (0x000808f1) list_medium_line_x3_g2

0x0001,

0xfd45,	// (0x000857c6) list_medium_line_x3_g_ParamLimits

0xfd45,	// (0x000857c6) list_medium_line_x3_g

0xd32b,	// (0x00082dac) list_medium_line_x3_t1_ParamLimits

0xd32b,	// (0x00082dac) list_medium_line_x3_t1

0xd341,	// (0x00082dc2) thumb_sp_fs_scroll_pane_g1

0xd34a,	// (0x00082dcb) thumb_sp_fs_scroll_pane_g2

0xd353,	// (0x00082dd4) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd4a,	// (0x000857cb) thumb_sp_fs_scroll_pane_g

0xd341,	// (0x00082dc2) bg_sp_fs_scroll_pane_g1

0xd34a,	// (0x00082dcb) bg_sp_fs_scroll_pane_g2

0xd353,	// (0x00082dd4) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd4a,	// (0x000857cb) bg_sp_fs_scroll_pane_g

0xae64,	// (0x000808e5) list_medium_line_x2_t3_g4_g1_ParamLimits

0xae64,	// (0x000808e5) list_medium_line_x2_t3_g4_g1

0xaef8,	// (0x00080979) list_medium_line_x2_t3_g4_g2_ParamLimits

0xaef8,	// (0x00080979) list_medium_line_x2_t3_g4_g2

0xae70,	// (0x000808f1) list_medium_line_x2_t3_g4_g3_ParamLimits

0xae70,	// (0x000808f1) list_medium_line_x2_t3_g4_g3

0xae7c,	// (0x000808fd) list_medium_line_x2_t3_g4_g4_ParamLimits

0xae7c,	// (0x000808fd) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e6,	// (0x00084d67) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e6,	// (0x00084d67) list_medium_line_x2_t3_g4_g

0x1179,	// (0x00076bfa) list_medium_line_x2_t3_g4_t1_ParamLimits

0x1179,	// (0x00076bfa) list_medium_line_x2_t3_g4_t1

0x118f,	// (0x00076c10) list_medium_line_x2_t3_g4_t2_ParamLimits

0x118f,	// (0x00076c10) list_medium_line_x2_t3_g4_t2

0xae9d,	// (0x0008091e) list_medium_line_x2_t3_g4_t3_ParamLimits

0xae9d,	// (0x0008091e) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd51,	// (0x000857d2) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd51,	// (0x000857d2) list_medium_line_x2_t3_g4_t

0xc1d6,	// (0x00081c57) list_medium_line_g2_g1_ParamLimits

0xc1d6,	// (0x00081c57) list_medium_line_g2_g1

0xc1e2,	// (0x00081c63) list_medium_line_g2_g2_ParamLimits

0xc1e2,	// (0x00081c63) list_medium_line_g2_g2

0x0001,

0xfa13,	// (0x00085494) list_medium_line_g2_g_ParamLimits

0xfa13,	// (0x00085494) list_medium_line_g2_g

0xd35c,	// (0x00082ddd) list_medium_line_g2_t1_ParamLimits

0xd35c,	// (0x00082ddd) list_medium_line_g2_t1

0xc1d6,	// (0x00081c57) list_medium_line_t3_g2_g1_ParamLimits

0xc1d6,	// (0x00081c57) list_medium_line_t3_g2_g1

0xc1e2,	// (0x00081c63) list_medium_line_t3_g2_g2_ParamLimits

0xc1e2,	// (0x00081c63) list_medium_line_t3_g2_g2

0x0001,

0xfa13,	// (0x00085494) list_medium_line_t3_g2_g_ParamLimits

0xfa13,	// (0x00085494) list_medium_line_t3_g2_g

0x11a8,	// (0x00076c29) list_medium_line_t3_g2_t1_ParamLimits

0x11a8,	// (0x00076c29) list_medium_line_t3_g2_t1

0x11bf,	// (0x00076c40) list_medium_line_t3_g2_t2_ParamLimits

0x11bf,	// (0x00076c40) list_medium_line_t3_g2_t2

0x11d4,	// (0x00076c55) list_medium_line_t3_g2_t3_ParamLimits

0x11d4,	// (0x00076c55) list_medium_line_t3_g2_t3

0x0002,

0xfd58,	// (0x000857d9) list_medium_line_t3_g2_t_ParamLimits

0xfd58,	// (0x000857d9) list_medium_line_t3_g2_t

0xd136,	// (0x00082bb7) list_medium_line_right_icon_g1

0xd371,	// (0x00082df2) list_medium_line_right_icon_t1

0xc1d6,	// (0x00081c57) list_medium_line_t2_g1_ParamLimits

0xc1d6,	// (0x00081c57) list_medium_line_t2_g1

0x11ed,	// (0x00076c6e) list_medium_line_t2_t1_ParamLimits

0x11ed,	// (0x00076c6e) list_medium_line_t2_t1

0x1207,	// (0x00076c88) list_medium_line_t2_t2_ParamLimits

0x1207,	// (0x00076c88) list_medium_line_t2_t2

0x0001,

0xfd5f,	// (0x000857e0) list_medium_line_t2_t_ParamLimits

0xfd5f,	// (0x000857e0) list_medium_line_t2_t

0xc1d6,	// (0x00081c57) list_medium_line_t3_g1_ParamLimits

0xc1d6,	// (0x00081c57) list_medium_line_t3_g1

0x1220,	// (0x00076ca1) list_medium_line_t3_t1_ParamLimits

0x1220,	// (0x00076ca1) list_medium_line_t3_t1

0x1237,	// (0x00076cb8) list_medium_line_t3_t2_ParamLimits

0x1237,	// (0x00076cb8) list_medium_line_t3_t2

0x124c,	// (0x00076ccd) list_medium_line_t3_t3_ParamLimits

0x124c,	// (0x00076ccd) list_medium_line_t3_t3

0x0002,

0xfd64,	// (0x000857e5) list_medium_line_t3_t_ParamLimits

0xfd64,	// (0x000857e5) list_medium_line_t3_t

0xc1d6,	// (0x00081c57) list_medium_line_g3_g1_ParamLimits

0xc1d6,	// (0x00081c57) list_medium_line_g3_g1

0xd37f,	// (0x00082e00) list_medium_line_g3_g2_ParamLimits

0xd37f,	// (0x00082e00) list_medium_line_g3_g2

0xc1e2,	// (0x00081c63) list_medium_line_g3_g3_ParamLimits

0xc1e2,	// (0x00081c63) list_medium_line_g3_g3

0x0002,

0xfd6b,	// (0x000857ec) list_medium_line_g3_g_ParamLimits

0xfd6b,	// (0x000857ec) list_medium_line_g3_g

0xd38b,	// (0x00082e0c) list_medium_line_g3_t1_ParamLimits

0xd38b,	// (0x00082e0c) list_medium_line_g3_t1

0xc1d6,	// (0x00081c57) list_medium_line_t2_g3_g1_ParamLimits

0xc1d6,	// (0x00081c57) list_medium_line_t2_g3_g1

0xd37f,	// (0x00082e00) list_medium_line_t2_g3_g2_ParamLimits

0xd37f,	// (0x00082e00) list_medium_line_t2_g3_g2

0xc1e2,	// (0x00081c63) list_medium_line_t2_g3_g3_ParamLimits

0xc1e2,	// (0x00081c63) list_medium_line_t2_g3_g3

0x0002,

0xfd6b,	// (0x000857ec) list_medium_line_t2_g3_g_ParamLimits

0xfd6b,	// (0x000857ec) list_medium_line_t2_g3_g

0x125e,	// (0x00076cdf) list_medium_line_t2_g3_t1_ParamLimits

0x125e,	// (0x00076cdf) list_medium_line_t2_g3_t1

0x1275,	// (0x00076cf6) list_medium_line_t2_g3_t2_ParamLimits

0x1275,	// (0x00076cf6) list_medium_line_t2_g3_t2

0x0001,

0xfd72,	// (0x000857f3) list_medium_line_t2_g3_t_ParamLimits

0xfd72,	// (0x000857f3) list_medium_line_t2_g3_t

0xc1d6,	// (0x00081c57) list_medium_line_t3_g3_g1_ParamLimits

0xc1d6,	// (0x00081c57) list_medium_line_t3_g3_g1

0xd37f,	// (0x00082e00) list_medium_line_t3_g3_g2_ParamLimits

0xd37f,	// (0x00082e00) list_medium_line_t3_g3_g2

0xc1e2,	// (0x00081c63) list_medium_line_t3_g3_g3_ParamLimits

0xc1e2,	// (0x00081c63) list_medium_line_t3_g3_g3

0x0002,

0xfd6b,	// (0x000857ec) list_medium_line_t3_g3_g_ParamLimits

0xfd6b,	// (0x000857ec) list_medium_line_t3_g3_g

0x128e,	// (0x00076d0f) list_medium_line_t3_g3_t1_ParamLimits

0x128e,	// (0x00076d0f) list_medium_line_t3_g3_t1

0x12a7,	// (0x00076d28) list_medium_line_t3_g3_t2_ParamLimits

0x12a7,	// (0x00076d28) list_medium_line_t3_g3_t2

0x12bd,	// (0x00076d3e) list_medium_line_t3_g3_t3_ParamLimits

0x12bd,	// (0x00076d3e) list_medium_line_t3_g3_t3

0x0002,

0xfd77,	// (0x000857f8) list_medium_line_t3_g3_t_ParamLimits

0xfd77,	// (0x000857f8) list_medium_line_t3_g3_t

0xd266,	// (0x00082ce7) list_medium_line_right_iconx2_g1

0xd136,	// (0x00082bb7) list_medium_line_right_iconx2_g2

0x0001,

0xfd7e,	// (0x000857ff) list_medium_line_right_iconx2_g

0xd3a0,	// (0x00082e21) list_medium_line_right_iconx2_t1

0xd266,	// (0x00082ce7) list_medium_line_t2_right_iconx2_g1

0xd136,	// (0x00082bb7) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7e,	// (0x000857ff) list_medium_line_t2_right_iconx2_g

0x12d7,	// (0x00076d58) list_medium_line_t2_right_iconx2_t1

0x12e7,	// (0x00076d68) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd83,	// (0x00085804) list_medium_line_t2_right_iconx2_t

0xd3ae,	// (0x00082e2f) list_medium_line_x4_t4_t1

0x12f9,	// (0x00076d7a) list_medium_line_x4_t4_t2

0x1309,	// (0x00076d8a) list_medium_line_x4_t4_t3

0x1319,	// (0x00076d9a) list_medium_line_x4_t4_t4

0x0003,

0xfd88,	// (0x00085809) list_medium_line_x4_t4_t

0x9efe,	// (0x0007f97f) tport_appsw_pane_ParamLimits

0x9efe,	// (0x0007f97f) tport_appsw_pane

0x9f11,	// (0x0007f992) tport_contact_pane_ParamLimits

0x9f11,	// (0x0007f992) tport_contact_pane

0x9f24,	// (0x0007f9a5) tport_listscroll_pane_ParamLimits

0x9f24,	// (0x0007f9a5) tport_listscroll_pane

0x9f3a,	// (0x0007f9bb) cell_tport_appsw_pane_ParamLimits

0x9f3a,	// (0x0007f9bb) cell_tport_appsw_pane

0xbf3e,	// (0x000819bf) tport_appsw_pane_g1_ParamLimits

0xbf3e,	// (0x000819bf) tport_appsw_pane_g1

0xd3bc,	// (0x00082e3d) tport_contact_pane_g1

0xd3c5,	// (0x00082e46) tport_contact_pane_t1

0xd3d3,	// (0x00082e54) tport_contact_pane_t2

0x0001,

0xfd91,	// (0x00085812) tport_contact_pane_t

0xd3e1,	// (0x00082e62) list_tport_pane

0xd3ea,	// (0x00082e6b) scroll_pane_cp_030

0x9f80,	// (0x0007fa01) cell_tport_appsw_pane_g1

0xd403,	// (0x00082e84) cell_tport_appsw_pane_t1

0xabf1,	// (0x00080672) grid_highlight_pane_cp019

0x9f90,	// (0x0007fa11) list_tport_double_graphic_pane_ParamLimits

0x9f90,	// (0x0007fa11) list_tport_double_graphic_pane

0xac6a,	// (0x000806eb) list_highlight_pane_cp023_ParamLimits

0xac6a,	// (0x000806eb) list_highlight_pane_cp023

0x9fa0,	// (0x0007fa21) list_tport_double_graphic_pane_g1_ParamLimits

0x9fa0,	// (0x0007fa21) list_tport_double_graphic_pane_g1

0x9fad,	// (0x0007fa2e) list_tport_double_graphic_pane_t1_ParamLimits

0x9fad,	// (0x0007fa2e) list_tport_double_graphic_pane_t1

0x9fc2,	// (0x0007fa43) list_tport_double_graphic_pane_t2_ParamLimits

0x9fc2,	// (0x0007fa43) list_tport_double_graphic_pane_t2

0x0001,

0xfd9d,	// (0x0008581e) list_tport_double_graphic_pane_t_ParamLimits

0xfd9d,	// (0x0008581e) list_tport_double_graphic_pane_t

0xabf1,	// (0x00080672) main_cale_note_pane

0x824d,	// (0x0007dcce) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x824d,	// (0x0007dcce) cell_vitu2_function_top_wide_pane_cp01

0x995b,	// (0x0007f3dc) wait_bar_pane_cp05_ParamLimits

0xabf1,	// (0x00080672) listscroll_cmail_pane

0xd419,	// (0x00082e9a) list_cmail_pane

0x9fde,	// (0x0007fa5f) list_cmail_body_pane

0x9ff6,	// (0x0007fa77) list_single_cmail_header_caption_pane

0xa013,	// (0x0007fa94) list_single_cmail_header_detail_pane_ParamLimits

0xa013,	// (0x0007fa94) list_single_cmail_header_detail_pane

0xa045,	// (0x0007fac6) list_single_cmail_header_caption_pane_t1

0x1329,	// (0x00076daa) list_single_cmail_header_detail_pane_g1_ParamLimits

0x1329,	// (0x00076daa) list_single_cmail_header_detail_pane_g1

0xe257,	// (0x00083cd8) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe257,	// (0x00083cd8) list_single_cmail_header_detail_pane_g2

0x0002,

0xfda2,	// (0x00085823) list_single_cmail_header_detail_pane_g_ParamLimits

0xfda2,	// (0x00085823) list_single_cmail_header_detail_pane_g

0xd446,	// (0x00082ec7) list_single_cmail_header_detail_pane_t1_ParamLimits

0xd446,	// (0x00082ec7) list_single_cmail_header_detail_pane_t1

0xd484,	// (0x00082f05) list_single_cmail_header_editor_pane_bg_ParamLimits

0xd484,	// (0x00082f05) list_single_cmail_header_editor_pane_bg

0xcdc4,	// (0x00082845) list_cmail_body_pane_g1

0xd496,	// (0x00082f17) list_cmail_body_pane_t1

0xbf7b,	// (0x000819fc) list_single_cmail_header_editor_pane_bg_g1

0xecf2,	// (0x00084773) list_single_cmail_header_editor_pane_bg_g1_copy1

0xbf8b,	// (0x00081a0c) list_single_cmail_header_editor_pane_bg_g1_copy2

0xbf83,	// (0x00081a04) list_single_cmail_header_editor_pane_bg_g1_copy3

0xc1ce,	// (0x00081c4f) list_single_cmail_header_editor_pane_bg_g1_copy4

0xbfab,	// (0x00081a2c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xbf9b,	// (0x00081a1c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xbfa3,	// (0x00081a24) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xecd2,	// (0x00084753) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xa055,	// (0x0007fad6) calenote_gesture_pane_ParamLimits

0xa055,	// (0x0007fad6) calenote_gesture_pane

0xa075,	// (0x0007faf6) calenote_window_pane_ParamLimits

0xa075,	// (0x0007faf6) calenote_window_pane

0xd4a4,	// (0x00082f25) popup_note_window_cp01

0xa091,	// (0x0007fb12) calenote_swipe_1_pane_ParamLimits

0xa091,	// (0x0007fb12) calenote_swipe_1_pane

0x9e4e,	// (0x0007f8cf) calenote_swipe_2_pane_ParamLimits

0x9e4e,	// (0x0007f8cf) calenote_swipe_2_pane

0xd035,	// (0x00082ab6) calenote_swipe_1_pane_g1_ParamLimits

0xd035,	// (0x00082ab6) calenote_swipe_1_pane_g1

0xd042,	// (0x00082ac3) calenote_swipe_1_pane_g2_ParamLimits

0xd042,	// (0x00082ac3) calenote_swipe_1_pane_g2

0x0001,

0xfcd1,	// (0x00085752) calenote_swipe_1_pane_g_ParamLimits

0xfcd1,	// (0x00085752) calenote_swipe_1_pane_g

0xd4b6,	// (0x00082f37) calenote_swipe_1_pane_t1_ParamLimits

0xd4b6,	// (0x00082f37) calenote_swipe_1_pane_t1

0xd035,	// (0x00082ab6) calenote_swipe_2_pane_g1_ParamLimits

0xd035,	// (0x00082ab6) calenote_swipe_2_pane_g1

0xd4d5,	// (0x00082f56) calenote_swipe_2_pane_g2_ParamLimits

0xd4d5,	// (0x00082f56) calenote_swipe_2_pane_g2

0x0001,

0xfdae,	// (0x0008582f) calenote_swipe_2_pane_g_ParamLimits

0xfdae,	// (0x0008582f) calenote_swipe_2_pane_g

0xd4e1,	// (0x00082f62) calenote_swipe_2_pane_t1_ParamLimits

0xd4e1,	// (0x00082f62) calenote_swipe_2_pane_t1

0xabf1,	// (0x00080672) main_mup_navstr_pane

0x6ef6,	// (0x0007c977) main_mup3_pane_t7_ParamLimits

0x6ef6,	// (0x0007c977) main_mup3_pane_t7

0xdef8,	// (0x00083979) main_mp4_pane_g6_ParamLimits

0xdef8,	// (0x00083979) main_mp4_pane_g6

0xe08e,	// (0x00083b0f) main_image3_pane_t4_ParamLimits

0xe08e,	// (0x00083b0f) main_image3_pane_t4

0xa0a6,	// (0x0007fb27) popup_navstr_preview_pane_ParamLimits

0xa0a6,	// (0x0007fb27) popup_navstr_preview_pane

0xa0b6,	// (0x0007fb37) scroll_navstr_pane_ParamLimits

0xa0b6,	// (0x0007fb37) scroll_navstr_pane

0xabf1,	// (0x00080672) bg_popup_preview_window_pane_cp04

0xd508,	// (0x00082f89) popup_navstr_preview_pane_t1

0xa0ca,	// (0x0007fb4b) scroll_navstr_pane_g1_ParamLimits

0xa0ca,	// (0x0007fb4b) scroll_navstr_pane_g1

0xa0de,	// (0x0007fb5f) scroll_navstr_pane_t1_ParamLimits

0xa0de,	// (0x0007fb5f) scroll_navstr_pane_t1

0xd4ad,	// (0x00082f2e) bg_button_pane_cp014

0xd4ad,	// (0x00082f2e) bg_button_pane_cp030

0xcfd6,	// (0x00082a57) list_double_fisheye_pane_g4_ParamLimits

0xcfd6,	// (0x00082a57) list_double_fisheye_pane_g4

0xcfe2,	// (0x00082a63) list_double_fisheye_pane_g5_ParamLimits

0xcfe2,	// (0x00082a63) list_double_fisheye_pane_g5

0xd421,	// (0x00082ea2) sp_fs_scroll_pane_cp03

0xd178,	// (0x00082bf9) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xd184,	// (0x00082c05) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcee,	// (0x0008576f) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xd190,	// (0x00082c11) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x9fd4,	// (0x0007fa55) sp_fs_scroll_pane_cp02

0xe9fe,	// (0x0008447f) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xe9fe,	// (0x0008447f) popup_sp_fs_calendar_preview_list_single_pane

0xabf1,	// (0x00080672) main_cam6_pano_pane

0xac6a,	// (0x000806eb) main_mup3_pane_ParamLimits

0xabf1,	// (0x00080672) main_phacti_pane

0x982c,	// (0x0007f2ad) bg_button_pane_cp11

0x9846,	// (0x0007f2c7) main_mobtv_info_pane_g2_ParamLimits

0x9846,	// (0x0007f2c7) main_mobtv_info_pane_g2

0x0001,

0xfc4e,	// (0x000856cf) main_mobtv_info_pane_g_ParamLimits

0xfc4e,	// (0x000856cf) main_mobtv_info_pane_g

0x9a23,	// (0x0007f4a4) sc_clock_pane_t5_ParamLimits

0x9a23,	// (0x0007f4a4) sc_clock_pane_t5

0x9bd8,	// (0x0007f659) main_radioblah_pane_g1_ParamLimits

0xcf2a,	// (0x000829ab) main_radioblah_pane_t3_ParamLimits

0xcf2a,	// (0x000829ab) main_radioblah_pane_t3

0xcf42,	// (0x000829c3) main_radioblah_pane_t4_ParamLimits

0xcf42,	// (0x000829c3) main_radioblah_pane_t4

0x9c00,	// (0x0007f681) main_radioblah_text_pane_ParamLimits

0x9c00,	// (0x0007f681) main_radioblah_text_pane

0x9c12,	// (0x0007f693) main_radioblah_info_pane_g1_ParamLimits

0x9cab,	// (0x0007f72c) main_radioblah_info_pane_t4_ParamLimits

0x9cab,	// (0x0007f72c) main_radioblah_info_pane_t4

0xac6a,	// (0x000806eb) main_sp_fs_calendar_pane

0xa0f5,	// (0x0007fb76) main_phacti_pane_g1

0xa0fd,	// (0x0007fb7e) phacti_note_pane_ParamLimits

0xa0fd,	// (0x0007fb7e) phacti_note_pane

0xd51f,	// (0x00082fa0) phacti_term_pane_ParamLimits

0xd51f,	// (0x00082fa0) phacti_term_pane

0xd534,	// (0x00082fb5) phacti_note_pane_t1_ParamLimits

0xd534,	// (0x00082fb5) phacti_note_pane_t1

0xd54b,	// (0x00082fcc) phacti_term_pane_g1

0xd553,	// (0x00082fd4) phacti_term_pane_t1_ParamLimits

0xd553,	// (0x00082fd4) phacti_term_pane_t1

0xd57d,	// (0x00082ffe) popup_sp_fs_calendar_preview_list_single_pane_g1

0xd585,	// (0x00083006) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb8,	// (0x00085839) popup_sp_fs_calendar_preview_list_single_pane_g

0xd58d,	// (0x0008300e) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xd58d,	// (0x0008300e) popup_sp_fs_calendar_preview_list_single_pane_t1

0xd5a3,	// (0x00083024) aid_popup_sp_fs_bg_corner_pane

0xb494,	// (0x00080f15) popup_sp_fs_calendar_preview_bg_pane_g1

0xabf1,	// (0x00080672) popup_sp_fs_calendar_preview_bg_pane

0xd5ab,	// (0x0008302c) popup_sp_fs_calendar_preview_list_pane

0xac6a,	// (0x000806eb) bg_main_sp_fs_cale_pane_ParamLimits

0xac6a,	// (0x000806eb) bg_main_sp_fs_cale_pane

0xd5b3,	// (0x00083034) listscroll_cale_mrui_pane_ParamLimits

0xd5b3,	// (0x00083034) listscroll_cale_mrui_pane

0xd5c7,	// (0x00083048) listscroll_sp_fs_schedule_track_pane

0xd5d0,	// (0x00083051) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xd5d0,	// (0x00083051) main_sp_fs_ctrlbar_pane_cp01

0xd5e1,	// (0x00083062) main_sp_fs_ribbon_pane

0xd5e9,	// (0x0008306a) popup_sp_fs_cale_preview_window

0xa154,	// (0x0007fbd5) list_single_sp_fs_schedule_track_pane_ParamLimits

0xa154,	// (0x0007fbd5) list_single_sp_fs_schedule_track_pane

0xac6a,	// (0x000806eb) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xac6a,	// (0x000806eb) bg_sp_fs_highlight_list_pane_cp03

0xa167,	// (0x0007fbe8) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xa167,	// (0x0007fbe8) list_single_sp_fs_schedule_track_pane_g1

0xa173,	// (0x0007fbf4) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xa173,	// (0x0007fbf4) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdbd,	// (0x0008583e) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdbd,	// (0x0008583e) list_single_sp_fs_schedule_track_pane_g

0xa17f,	// (0x0007fc00) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xa17f,	// (0x0007fc00) list_single_sp_fs_schedule_track_pane_t1

0xa1a1,	// (0x0007fc22) sp_fs_schedule_track_pane_ParamLimits

0xa1a1,	// (0x0007fc22) sp_fs_schedule_track_pane

0xd5fb,	// (0x0008307c) sp_fs_schedule_track_pane_g1

0xd603,	// (0x00083084) sp_fs_schedule_track_pane_g2

0xd60b,	// (0x0008308c) sp_fs_schedule_track_pane_g3

0xd613,	// (0x00083094) sp_fs_schedule_track_pane_g4

0xd61b,	// (0x0008309c) sp_fs_schedule_track_pane_g5

0x0004,

0xfdc2,	// (0x00085843) sp_fs_schedule_track_pane_g

0xbf7b,	// (0x000819fc) bg_sp_fs_schedule_viewer_highlight_g1

0xecf2,	// (0x00084773) bg_sp_fs_schedule_viewer_highlight_g2

0xbf83,	// (0x00081a04) bg_sp_fs_schedule_viewer_highlight_g3

0xbf8b,	// (0x00081a0c) bg_sp_fs_schedule_viewer_highlight_g4

0xc1ce,	// (0x00081c4f) bg_sp_fs_schedule_viewer_highlight_g5

0xbf9b,	// (0x00081a1c) bg_sp_fs_schedule_viewer_highlight_g6

0xbfa3,	// (0x00081a24) bg_sp_fs_schedule_viewer_highlight_g7

0xbfab,	// (0x00081a2c) bg_sp_fs_schedule_viewer_highlight_g8

0xecd2,	// (0x00084753) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdcd,	// (0x0008584e) bg_sp_fs_schedule_viewer_highlight_g

0xabf1,	// (0x00080672) bg_main_sp_fs_ribbon_pane

0xa1b6,	// (0x0007fc37) main_sp_fs_ribbon_pane_g1

0xd623,	// (0x000830a4) main_sp_fs_ribbon_pane_t1

0xa1bf,	// (0x0007fc40) main_sp_fs_ribbon_pane_t2

0xd632,	// (0x000830b3) main_sp_fs_ribbon_pane_t3

0x0002,

0xfde0,	// (0x00085861) main_sp_fs_ribbon_pane_t

0xd641,	// (0x000830c2) main_sp_fs_ribbon_scheduler_pane

0xd649,	// (0x000830ca) bg_main_sp_fs_ribbon_pane_g1

0xd652,	// (0x000830d3) bg_main_sp_fs_ribbon_pane_g2

0xd65b,	// (0x000830dc) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde7,	// (0x00085868) bg_main_sp_fs_ribbon_pane_g

0xd663,	// (0x000830e4) main_sp_fs_ribbon_scheduler_pane_g1

0xd66c,	// (0x000830ed) main_sp_fs_ribbon_scheduler_pane_g2

0xd675,	// (0x000830f6) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdee,	// (0x0008586f) main_sp_fs_ribbon_scheduler_pane_g

0xd67e,	// (0x000830ff) list_cale_mrui_pane

0xa1ce,	// (0x0007fc4f) sp_fs_scroll_pane_cp07_ParamLimits

0xa1ce,	// (0x0007fc4f) sp_fs_scroll_pane_cp07

0xa1e4,	// (0x0007fc65) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xa1e4,	// (0x0007fc65) bg_sp_fs_schedule_viewer_highlight

0xd687,	// (0x00083108) list_single_sp_fs_schedule_track_pane_cp01

0xd68f,	// (0x00083110) list_sp_fs_schedule_track_pane

0xd697,	// (0x00083118) sp_fs_scroll_pane_cp06_ParamLimits

0xd697,	// (0x00083118) sp_fs_scroll_pane_cp06

0xb494,	// (0x00080f15) bgmain_sp_fs_calendar_pane_g1

0xd6a9,	// (0x0008312a) list_single_cale_mrui_pane_ParamLimits

0xd6a9,	// (0x0008312a) list_single_cale_mrui_pane

0xd6cd,	// (0x0008314e) list_single_cale_mrui_row_pane_ParamLimits

0xd6cd,	// (0x0008314e) list_single_cale_mrui_row_pane

0xd6da,	// (0x0008315b) list_single_cale_mrui_row_pane_g1_ParamLimits

0xd6da,	// (0x0008315b) list_single_cale_mrui_row_pane_g1

0xd712,	// (0x00083193) list_single_cale_mrui_row_pane_t1_ParamLimits

0xd712,	// (0x00083193) list_single_cale_mrui_row_pane_t1

0x1367,	// (0x00076de8) list_single_cale_mrui_row_pane_t2_ParamLimits

0x1367,	// (0x00076de8) list_single_cale_mrui_row_pane_t2

0xd724,	// (0x000831a5) list_single_cale_mrui_row_pane_t3_ParamLimits

0xd724,	// (0x000831a5) list_single_cale_mrui_row_pane_t3

0xd753,	// (0x000831d4) list_single_cale_mrui_row_pane_t4_ParamLimits

0xd753,	// (0x000831d4) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdfa,	// (0x0008587b) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdfa,	// (0x0008587b) list_single_cale_mrui_row_pane_t

0x13cd,	// (0x00076e4e) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x13cd,	// (0x00076e4e) list_single_cmail_header_editor_pane_bg_cp01

0x13f1,	// (0x00076e72) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x13f1,	// (0x00076e72) list_single_cmail_header_editor_pane_bg_cp02

0xa1f6,	// (0x0007fc77) main_radioblah_text_pane_t1_ParamLimits

0xa1f6,	// (0x0007fc77) main_radioblah_text_pane_t1

0xd782,	// (0x00083203) cam6_indi_pane_cp01

0xd78a,	// (0x0008320b) cam6_mode_pane_cp01

0xd792,	// (0x00083213) cam6_pano_pane

0xd79b,	// (0x0008321c) cam6_zoom_pane_cp01

0xd7a5,	// (0x00083226) cam6_pano_image_pane

0xd7ae,	// (0x0008322f) cam6_pano_pane_g1

0xcdc4,	// (0x00082845) cam6_pano_pane_g2

0xd7b7,	// (0x00083238) cam6_pano_pane_g3

0xd7c0,	// (0x00083241) cam6_pano_pane_g4

0xba8c,	// (0x0008150d) cam6_pano_pane_g5

0xd7c9,	// (0x0008324a) cam6_pano_pane_g6

0xd7d1,	// (0x00083252) cam6_pano_pane_g7

0xd7d9,	// (0x0008325a) cam6_pano_pane_g8

0xd7e2,	// (0x00083263) cam6_pano_pane_g9

0x0008,

0xfe03,	// (0x00085884) cam6_pano_pane_g

0xabf1,	// (0x00080672) main_browser_tag_pane

0xd500,	// (0x00082f81) grid_navstr_albumart_pane

0xd7ed,	// (0x0008326e) cell_navstr_albumart_pane_ParamLimits

0xd7ed,	// (0x0008326e) cell_navstr_albumart_pane

0xd809,	// (0x0008328a) cell_navstr_albumart_pane_g1

0x54f1,	// (0x0007af72) cell_navstr_albumart_pane_g2

0x5501,	// (0x0007af82) cell_navstr_albumart_pane_g3

0x54f9,	// (0x0007af7a) cell_navstr_albumart_pane_g4

0x0003,

0xfe16,	// (0x00085897) cell_navstr_albumart_pane_g

0xa211,	// (0x0007fc92) bt_list_pane_ParamLimits

0xa211,	// (0x0007fc92) bt_list_pane

0xa227,	// (0x0007fca8) bt_list_pane_t1

0xa236,	// (0x0007fcb7) bt_list_pane_t2

0x0001,

0xfe1f,	// (0x000858a0) bt_list_pane_t

0xabf1,	// (0x00080672) main_cale_prevew_pane

0xa245,	// (0x0007fcc6) popup_cale_preview_window_ParamLimits

0xa245,	// (0x0007fcc6) popup_cale_preview_window

0xac6a,	// (0x000806eb) bg_popup_preview_window_pane_cp05_ParamLimits

0xac6a,	// (0x000806eb) bg_popup_preview_window_pane_cp05

0xd811,	// (0x00083292) list_cale_preview_pane_ParamLimits

0xd811,	// (0x00083292) list_cale_preview_pane

0xa260,	// (0x0007fce1) list_double_cale_preview_pane_ParamLimits

0xa260,	// (0x0007fce1) list_double_cale_preview_pane

0xa274,	// (0x0007fcf5) list_single_cale_preview_pane_ParamLimits

0xa274,	// (0x0007fcf5) list_single_cale_preview_pane

0xa28c,	// (0x0007fd0d) list_single_cale_preview_pane_g1

0xa294,	// (0x0007fd15) list_single_cale_preview_pane_t1_ParamLimits

0xa294,	// (0x0007fd15) list_single_cale_preview_pane_t1

0xa2a9,	// (0x0007fd2a) list_double_cale_preview_pane_g1

0xa2b1,	// (0x0007fd32) list_double_cale_preview_pane_t1_ParamLimits

0xa2b1,	// (0x0007fd32) list_double_cale_preview_pane_t1

0xa2c6,	// (0x0007fd47) list_double_cale_preview_pane_t2_ParamLimits

0xa2c6,	// (0x0007fd47) list_double_cale_preview_pane_t2

0x0001,

0xfe24,	// (0x000858a5) list_double_cale_preview_pane_t_ParamLimits

0xfe24,	// (0x000858a5) list_double_cale_preview_pane_t

0xabf1,	// (0x00080672) main_ezdial_pane

0xac6a,	// (0x000806eb) main_sp_fs_email_pane_ParamLimits

0x9e68,	// (0x0007f8e9) cmail_ddmenu_btn01_pane_ParamLimits

0x9e68,	// (0x0007f8e9) cmail_ddmenu_btn01_pane

0x9e7b,	// (0x0007f8fc) cmail_ddmenu_btn02_pane_ParamLimits

0x9e7b,	// (0x0007f8fc) cmail_ddmenu_btn02_pane

0x9e9e,	// (0x0007f91f) cmail_ddmenu_btn03_pane_ParamLimits

0x9e9e,	// (0x0007f91f) cmail_ddmenu_btn03_pane

0x0f8b,	// (0x00076a0c) main_sp_fs_ctrlbar_pane_ParamLimits

0x0faf,	// (0x00076a30) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x9fde,	// (0x0007fa5f) list_cmail_body_pane_ParamLimits

0xd430,	// (0x00082eb1) bg_button_pane_cp12

0xd439,	// (0x00082eba) list_single_cmail_header_detail_pane_g3_ParamLimits

0xd439,	// (0x00082eba) list_single_cmail_header_detail_pane_g3

0x1341,	// (0x00076dc2) list_single_cmail_header_detail_pane_t2_ParamLimits

0x1341,	// (0x00076dc2) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda9,	// (0x0008582a) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda9,	// (0x0008582a) list_single_cmail_header_detail_pane_t

0xd568,	// (0x00082fe9) phacti_term_pane_t2_ParamLimits

0xd568,	// (0x00082fe9) phacti_term_pane_t2

0x0001,

0xfdb3,	// (0x00085834) phacti_term_pane_t_ParamLimits

0xfdb3,	// (0x00085834) phacti_term_pane_t

0xd81d,	// (0x0008329e) aid_size_list_single_double

0xa2de,	// (0x0007fd5f) popup_ezdial_listscroll_window

0xa2fa,	// (0x0007fd7b) popup_number_entry_window_cp01

0x3782,	// (0x00079203) bg_popup_call_pane_cp09

0xd829,	// (0x000832aa) ezdial_list_pane

0xd831,	// (0x000832b2) scroll_pane_cp23

0x59e2,	// (0x0007b463) bg_button_pane_cp028_ParamLimits

0x59e2,	// (0x0007b463) bg_button_pane_cp028

0xa308,	// (0x0007fd89) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xa308,	// (0x0007fd89) cmail_ddmenu_btn01_pane_g1

0xa314,	// (0x0007fd95) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xa314,	// (0x0007fd95) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe29,	// (0x000858aa) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe29,	// (0x000858aa) cmail_ddmenu_btn01_pane_g

0xd839,	// (0x000832ba) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xd839,	// (0x000832ba) cmail_ddmenu_btn01_pane_t1

0x59e2,	// (0x0007b463) bg_button_pane_cp029_ParamLimits

0x59e2,	// (0x0007b463) bg_button_pane_cp029

0xa320,	// (0x0007fda1) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xa320,	// (0x0007fda1) cmail_ddmenu_btn02_pane_g1

0xa338,	// (0x0007fdb9) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xa338,	// (0x0007fdb9) cmail_ddmenu_btn02_pane_t1

0xac6a,	// (0x000806eb) bg_button_pane_cp031_ParamLimits

0xac6a,	// (0x000806eb) bg_button_pane_cp031

0xa320,	// (0x0007fda1) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xa320,	// (0x0007fda1) cmail_ddmenu_btn03_pane_g1

0xa338,	// (0x0007fdb9) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xa338,	// (0x0007fdb9) cmail_ddmenu_btn03_pane_t1

0x7a99,	// (0x0007d51a) cell_dialer2_keypad_pane_t1_ParamLimits

0x7ab3,	// (0x0007d534) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x7ab3,	// (0x0007d534) cell_dialer2_keypad_pane_t1_copy1

0x96ac,	// (0x0007f12d) ncimui_group_button_pane

0xac6a,	// (0x000806eb) main_sp_fs_calendar_pane_ParamLimits

0x9ff6,	// (0x0007fa77) list_single_cmail_header_caption_pane_ParamLimits

0xe649,	// (0x000840ca) aid_recal_txt_sm_pane

0xabf1,	// (0x00080672) mian_recal_day_pane

0xd5e9,	// (0x0008306a) popup_sp_fs_cale_preview_window_ParamLimits

0xabf1,	// (0x00080672) list_recal_day_pane

0xd867,	// (0x000832e8) list_single_recal_day_pane_ParamLimits

0xd867,	// (0x000832e8) list_single_recal_day_pane

0xd879,	// (0x000832fa) list_single_recal_day_pane_g1_ParamLimits

0xd879,	// (0x000832fa) list_single_recal_day_pane_g1

0xd885,	// (0x00083306) list_single_recal_day_pane_g2_ParamLimits

0xd885,	// (0x00083306) list_single_recal_day_pane_g2

0xd891,	// (0x00083312) list_single_recal_day_pane_g3_ParamLimits

0xd891,	// (0x00083312) list_single_recal_day_pane_g3

0xa35c,	// (0x0007fddd) list_single_recal_day_pane_g4_ParamLimits

0xa35c,	// (0x0007fddd) list_single_recal_day_pane_g4

0xd89d,	// (0x0008331e) list_single_recal_day_pane_g5_ParamLimits

0xd89d,	// (0x0008331e) list_single_recal_day_pane_g5

0xd8a9,	// (0x0008332a) list_single_recal_day_pane_g6_ParamLimits

0xd8a9,	// (0x0008332a) list_single_recal_day_pane_g6

0x0005,

0xfe38,	// (0x000858b9) list_single_recal_day_pane_g_ParamLimits

0xfe38,	// (0x000858b9) list_single_recal_day_pane_g

0xd8b5,	// (0x00083336) list_single_recal_day_pane_t1

0xd8c3,	// (0x00083344) list_single_recal_day_pane_t2

0x0001,

0xfe45,	// (0x000858c6) list_single_recal_day_pane_t

0xa36a,	// (0x0007fdeb) ncimui_query_button_pane_ParamLimits

0xa36a,	// (0x0007fdeb) ncimui_query_button_pane

0xa37a,	// (0x0007fdfb) ncimui_query_button_pane_t1_ParamLimits

0xa37a,	// (0x0007fdfb) ncimui_query_button_pane_t1

0xd8d1,	// (0x00083352) ncimui_query_button_pane_t2_ParamLimits

0xd8d1,	// (0x00083352) ncimui_query_button_pane_t2

0x0001,

0xfe4a,	// (0x000858cb) ncimui_query_button_pane_t_ParamLimits

0xfe4a,	// (0x000858cb) ncimui_query_button_pane_t

0xa38d,	// (0x0007fe0e) query_button_pane_ParamLimits

0xa38d,	// (0x0007fe0e) query_button_pane

0xabf1,	// (0x00080672) bg_button_pane_cp0028

0xd8e4,	// (0x00083365) query_button_pane_t1

0x5a04,	// (0x0007b485) main_tport_pane_ParamLimits

0x9ec4,	// (0x0007f945) bg_popup_window_pane_cp01_ParamLimits

0x9ec4,	// (0x0007f945) bg_popup_window_pane_cp01

0x9eda,	// (0x0007f95b) heading_pane_cp08_ParamLimits

0x9eda,	// (0x0007f95b) heading_pane_cp08

0x9eeb,	// (0x0007f96c) heading_pane_cp07_ParamLimits

0x9eeb,	// (0x0007f96c) heading_pane_cp07

0xd3fb,	// (0x00082e7c) cell_tport_appsw_pane_g2

0x0002,

0xfd96,	// (0x00085817) cell_tport_appsw_pane_g

0x0baa,	// (0x0007662b) input_candi_list_open_g1

0xee8d,	// (0x0008490e) list_cale_time_pane_g6_ParamLimits

0xee8d,	// (0x0008490e) list_cale_time_pane_g6

0x6939,	// (0x0007c3ba) aid_size_touch_calib_1_ParamLimits

0x6939,	// (0x0007c3ba) aid_size_touch_calib_1

0x6945,	// (0x0007c3c6) aid_size_touch_calib_2_ParamLimits

0x6945,	// (0x0007c3c6) aid_size_touch_calib_2

0x695b,	// (0x0007c3dc) aid_size_touch_calib_3_ParamLimits

0x695b,	// (0x0007c3dc) aid_size_touch_calib_3

0x6979,	// (0x0007c3fa) aid_size_touch_calib_4_ParamLimits

0x6979,	// (0x0007c3fa) aid_size_touch_calib_4

0x698f,	// (0x0007c410) main_touch_calib_button_group_pane_ParamLimits

0x698f,	// (0x0007c410) main_touch_calib_button_group_pane

0x69a7,	// (0x0007c428) main_touch_calib_pane_g1_ParamLimits

0x69b3,	// (0x0007c434) main_touch_calib_pane_g2_ParamLimits

0x69bf,	// (0x0007c440) main_touch_calib_pane_g3_ParamLimits

0x69cb,	// (0x0007c44c) main_touch_calib_pane_g4_ParamLimits

0xf76e,	// (0x000851ef) main_touch_calib_pane_g_ParamLimits

0x69d7,	// (0x0007c458) main_touch_calib_pane_t1_ParamLimits

0x69f1,	// (0x0007c472) main_touch_calib_pane_t2_ParamLimits

0x6a0b,	// (0x0007c48c) main_touch_calib_pane_t3_ParamLimits

0x6a1f,	// (0x0007c4a0) main_touch_calib_pane_t4_ParamLimits

0x6a33,	// (0x0007c4b4) main_touch_calib_pane_t5_ParamLimits

0xf777,	// (0x000851f8) main_touch_calib_pane_t_ParamLimits

0xb856,	// (0x000812d7) list_single_fp_cale_pane_g3_ParamLimits

0xb856,	// (0x000812d7) list_single_fp_cale_pane_g3

0xac6a,	// (0x000806eb) bg_button_pane_cp012_ParamLimits

0xac6a,	// (0x000806eb) bg_vkb2_func_pane_cp03_ParamLimits

0x8a4a,	// (0x0007e4cb) cell_vitu2_function_top_pane_g1_ParamLimits

0xac6a,	// (0x000806eb) bg_vkb2_func_pane_cp04_ParamLimits

0x964c,	// (0x0007f0cd) main_ncimui_button_group_pane_ParamLimits

0x964c,	// (0x0007f0cd) main_ncimui_button_group_pane

0x969a,	// (0x0007f11b) main_ncimui_pane_t3_ParamLimits

0x969a,	// (0x0007f11b) main_ncimui_pane_t3

0xd516,	// (0x00082f97) phacti_button_group_pane

0xd81d,	// (0x0008329e) aid_size_list_single_double_ParamLimits

0xa2de,	// (0x0007fd5f) popup_ezdial_listscroll_window_ParamLimits

0xa2fa,	// (0x0007fd7b) popup_number_entry_window_cp01_ParamLimits

0xa3a0,	// (0x0007fe21) phacti_button_pane_ParamLimits

0xa3a0,	// (0x0007fe21) phacti_button_pane

0xabf1,	// (0x00080672) bg_button_pane_cp14

0xd8f2,	// (0x00083373) phacti_button_pane_t1

0xa3b1,	// (0x0007fe32) main_touch_calib_button_pane_ParamLimits

0xa3b1,	// (0x0007fe32) main_touch_calib_button_pane

0xe8e8,	// (0x00084369) bg_button_pane_cp18_ParamLimits

0xe8e8,	// (0x00084369) bg_button_pane_cp18

0xd900,	// (0x00083381) main_touch_calib_button_pane_t1_ParamLimits

0xd900,	// (0x00083381) main_touch_calib_button_pane_t1

0xd916,	// (0x00083397) main_touch_calib_button_pane_t2_ParamLimits

0xd916,	// (0x00083397) main_touch_calib_button_pane_t2

0x0001,

0xfe4f,	// (0x000858d0) main_touch_calib_button_pane_t_ParamLimits

0xfe4f,	// (0x000858d0) main_touch_calib_button_pane_t

0xabf1,	// (0x00080672) cell_ncimui_button_pane

0xabf1,	// (0x00080672) bg_button_pane_cp032

0xd934,	// (0x000833b5) cell_ncimui_button_pane_t1

0xe06c,	// (0x00083aed) image3_infobar_pane_ParamLimits

0xe06c,	// (0x00083aed) image3_infobar_pane

0x9a4f,	// (0x0007f4d0) fs_bigclock_status_pane_ParamLimits

0x9a4f,	// (0x0007f4d0) fs_bigclock_status_pane

0x9a5c,	// (0x0007f4dd) main_fs_bigclock_clock_pane_ParamLimits

0x9a5c,	// (0x0007f4dd) main_fs_bigclock_clock_pane

0x9a6f,	// (0x0007f4f0) main_fs_bigclock_indi_pane_ParamLimits

0x9a6f,	// (0x0007f4f0) main_fs_bigclock_indi_pane

0x9a8d,	// (0x0007f50e) main_fs_bigclock_swipe_pane_ParamLimits

0x9a8d,	// (0x0007f50e) main_fs_bigclock_swipe_pane

0xabf1,	// (0x00080672) main_fs_clock_dumped_data

0x9aae,	// (0x0007f52f) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x9aae,	// (0x0007f52f) list_single_fs_bigclock_indicator_pane_g1

0x9ace,	// (0x0007f54f) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x9ace,	// (0x0007f54f) list_single_fs_bigclock_indicator_pane_g2

0x9ae8,	// (0x0007f569) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x9ae8,	// (0x0007f569) list_single_fs_bigclock_indicator_pane_g3

0x9b04,	// (0x0007f585) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x9b04,	// (0x0007f585) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc82,	// (0x00085703) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc82,	// (0x00085703) list_single_fs_bigclock_indicator_pane_g

0x9b2a,	// (0x0007f5ab) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x9b2a,	// (0x0007f5ab) list_single_fs_bigclock_indicator_pane_t1

0x9b52,	// (0x0007f5d3) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x9b52,	// (0x0007f5d3) list_single_fs_bigclock_indicator_pane_t2

0x9b7a,	// (0x0007f5fb) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x9b7a,	// (0x0007f5fb) list_single_fs_bigclock_indicator_pane_t3

0x9ba4,	// (0x0007f625) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x9ba4,	// (0x0007f625) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc8d,	// (0x0008570e) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc8d,	// (0x0008570e) list_single_fs_bigclock_indicator_pane_t

0xd942,	// (0x000833c3) image3_infobar_fav_pane_ParamLimits

0xd942,	// (0x000833c3) image3_infobar_fav_pane

0xd952,	// (0x000833d3) image3_infobar_loc_pane_ParamLimits

0xd952,	// (0x000833d3) image3_infobar_loc_pane

0xd968,	// (0x000833e9) image3_infobar_time_pane_ParamLimits

0xd968,	// (0x000833e9) image3_infobar_time_pane

0xb494,	// (0x00080f15) image3_infobar_time_pane_g1

0xd978,	// (0x000833f9) image3_infobar_time_pane_t1

0xb494,	// (0x00080f15) image3_infobar_loc_pane_g1

0xd986,	// (0x00083407) image3_infobar_loc_pane_g2

0x0001,

0xfe54,	// (0x000858d5) image3_infobar_loc_pane_g

0xd98e,	// (0x0008340f) image3_infobar_loc_pane_t1

0xb494,	// (0x00080f15) image3_infobar_fav_pane_g1

0xd99c,	// (0x0008341d) image3_infobar_fav_pane_g2

0x0001,

0xfe59,	// (0x000858da) image3_infobar_fav_pane_g

0xd9a4,	// (0x00083425) fs_bigclock_status_battery_pane

0xd9ad,	// (0x0008342e) fs_bigclock_status_signal_pane

0xd9b6,	// (0x00083437) fs_bigclock_status_title_pane

0xd9bf,	// (0x00083440) fs_bigclock_status_signal_pane_g1

0xd9c8,	// (0x00083449) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe5e,	// (0x000858df) fs_bigclock_status_signal_pane_g

0xd9d0,	// (0x00083451) fs_bigclock_status_battery_pane_g1

0xd9d9,	// (0x0008345a) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe63,	// (0x000858e4) fs_bigclock_status_battery_pane_g

0xd9e1,	// (0x00083462) fs_bigclock_status_title_pane_t1

0xb494,	// (0x00080f15) main_fs_bigclock_clock_pane_g1

0xd9ef,	// (0x00083470) main_fs_bigclock_clock_pane_g2

0xd9ef,	// (0x00083470) main_fs_bigclock_clock_pane_g3

0xd9ef,	// (0x00083470) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe68,	// (0x000858e9) main_fs_bigclock_clock_pane_g

0xd9fb,	// (0x0008347c) main_fs_bigclock_clock_pane_t1

0xa3c6,	// (0x0007fe47) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe71,	// (0x000858f2) main_fs_bigclock_clock_pane_t

0xda09,	// (0x0008348a) list_single_fs_bigclock_indicator_pane_ParamLimits

0xda09,	// (0x0008348a) list_single_fs_bigclock_indicator_pane

0xa3d5,	// (0x0007fe56) list_single_fs_bigclock_pane_ParamLimits

0xa3d5,	// (0x0007fe56) list_single_fs_bigclock_pane

0xda23,	// (0x000834a4) main_fs_bigclock_indicator_pane_t1

0xda32,	// (0x000834b3) list_single_fs_bigclock_pane_g1

0xda3a,	// (0x000834bb) list_single_fs_bigclock_pane_t1

0xb494,	// (0x00080f15) main_fs_bigclock_swipe_pane_g1

0xda7a,	// (0x000834fb) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe82,	// (0x00085903) main_fs_bigclock_swipe_pane_g

0xda82,	// (0x00083503) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xda82,	// (0x00083503) main_fs_bigclock_swipe_pane_t1

0x313e,	// (0x00078bbf) call_type_pane_ParamLimits

0xabf1,	// (0x00080672) main_btmg_pane

0xd706,	// (0x00083187) list_single_cale_mrui_row_pane_g2_ParamLimits

0xd706,	// (0x00083187) list_single_cale_mrui_row_pane_g2

0x0001,

0xfdf5,	// (0x00085876) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf5,	// (0x00085876) list_single_cale_mrui_row_pane_g

0xd857,	// (0x000832d8) list_recal_vselct_arw_lo_pane

0xd85f,	// (0x000832e0) list_recal_vselct_arw_up_pane

0xe632,	// (0x000840b3) list_recal_vselct_pane

0xda9f,	// (0x00083520) btmg_button_pane

0xa43c,	// (0x0007febd) main_btmg_pane_g1

0xabf1,	// (0x00080672) bg_button_pane_cp044

0xdaa9,	// (0x0008352a) btmg_button_pane_t1

0x59c6,	// (0x0007b447) aid_listscroll_gen

0xac6a,	// (0x000806eb) main_cntbar_detail_pane

0xd411,	// (0x00082e92) list_cmail_folder_pane

0xd421,	// (0x00082ea2) sp_fs_scroll_pane_cp03_ParamLimits

0x140f,	// (0x00076e90) list_single_fs_dyc_pane_cp01_ParamLimits

0x140f,	// (0x00076e90) list_single_fs_dyc_pane_cp01

0xdab7,	// (0x00083538) aid_size_cmail_indent

0xdac0,	// (0x00083541) list_single_dyc_row_pane_cp01

0xa476,	// (0x0007fef7) cntbar_detail_list_pane_ParamLimits

0xa476,	// (0x0007fef7) cntbar_detail_list_pane

0xa4c8,	// (0x0007ff49) main_cntbar_detail_cont_pane_ParamLimits

0xa4c8,	// (0x0007ff49) main_cntbar_detail_cont_pane

0x3132,	// (0x00078bb3) scroll_pane_cp032_ParamLimits

0x3132,	// (0x00078bb3) scroll_pane_cp032

0xa4dc,	// (0x0007ff5d) cntbar_detail_list_event_pane_ParamLimits

0xa4dc,	// (0x0007ff5d) cntbar_detail_list_event_pane

0xa488,	// (0x0007ff09) cntbar_detail_list_shct_pane

0xed40,	// (0x000847c1) aid_list_gen

0xdac9,	// (0x0008354a) aid_scroll

0xdad2,	// (0x00083553) aid_size_touch_scroll_bar

0xdadb,	// (0x0008355c) aid_list_double

0xdae4,	// (0x00083565) aid_list_single

0xa4ec,	// (0x0007ff6d) aid_list_single_lg

0xdaed,	// (0x0008356e) aid_list_z_g_a_sm

0xe263,	// (0x00083ce4) aid_list_z_g_d

0xdaf5,	// (0x00083576) aid_txt_z_prm

0xdb03,	// (0x00083584) aid_txt_z_prm_cp01

0xdb11,	// (0x00083592) aid_txt_z_sec

0xa4f5,	// (0x0007ff76) main_cntbar_detail_cont_pane_g1_ParamLimits

0xa4f5,	// (0x0007ff76) main_cntbar_detail_cont_pane_g1

0xa509,	// (0x0007ff8a) main_cntbar_detail_cont_pane_g2_ParamLimits

0xa509,	// (0x0007ff8a) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe87,	// (0x00085908) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe87,	// (0x00085908) main_cntbar_detail_cont_pane_g

0xdb1f,	// (0x000835a0) main_cntbar_detail_cont_pane_t1

0xdb2d,	// (0x000835ae) main_cntbar_detail_cont_pane_t2

0xdb3b,	// (0x000835bc) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe8c,	// (0x0008590d) main_cntbar_detail_cont_pane_t

0xa519,	// (0x0007ff9a) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa519,	// (0x0007ff9a) cell_cntbar_detail_list_shct_pane

0xdb49,	// (0x000835ca) cntbar_detail_list_shct_pane_g1

0xdb52,	// (0x000835d3) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe93,	// (0x00085914) cntbar_detail_list_shct_pane_g

0xa52b,	// (0x0007ffac) cntbar_detail_list_event_pane_g1_ParamLimits

0xa52b,	// (0x0007ffac) cntbar_detail_list_event_pane_g1

0xa537,	// (0x0007ffb8) cntbar_detail_list_event_pane_g2_ParamLimits

0xa537,	// (0x0007ffb8) cntbar_detail_list_event_pane_g2

0x0005,

0xfe98,	// (0x00085919) cntbar_detail_list_event_pane_g_ParamLimits

0xfe98,	// (0x00085919) cntbar_detail_list_event_pane_g

0xa5a5,	// (0x00080026) cntbar_detail_list_event_pane_t1_ParamLimits

0xa5a5,	// (0x00080026) cntbar_detail_list_event_pane_t1

0xa5ba,	// (0x0008003b) cntbar_detail_list_event_pane_t2_ParamLimits

0xa5ba,	// (0x0008003b) cntbar_detail_list_event_pane_t2

0x0002,

0xfea5,	// (0x00085926) cntbar_detail_list_event_pane_t_ParamLimits

0xfea5,	// (0x00085926) cntbar_detail_list_event_pane_t

0xb494,	// (0x00080f15) cell_cntbar_detail_list_shct_pane_g1

0x3700,	// (0x00079181) navi_pane_mv_g3

0xac6a,	// (0x000806eb) main_cntbar_detail_pane_ParamLimits

0xabf1,	// (0x00080672) main_notif_wgt_pane

0xdeae,	// (0x0008392f) aid_tch_main_mp4_pane_g4

0xe062,	// (0x00083ae3) popup_slider_window_cp02

0xd84e,	// (0x000832cf) list_recal_day_event_pane

0xa446,	// (0x0007fec7) cntbar_detail_btn_pane_ParamLimits

0xa446,	// (0x0007fec7) cntbar_detail_btn_pane

0xa45e,	// (0x0007fedf) cntbar_detail_btn_pane_cp01_ParamLimits

0xa45e,	// (0x0007fedf) cntbar_detail_btn_pane_cp01

0xa488,	// (0x0007ff09) cntbar_detail_list_shct_pane_ParamLimits

0xa498,	// (0x0007ff19) cntbar_detail_pane_g1_ParamLimits

0xa498,	// (0x0007ff19) cntbar_detail_pane_g1

0xa4ac,	// (0x0007ff2d) cntbar_detail_pane_t1_ParamLimits

0xa4ac,	// (0x0007ff2d) cntbar_detail_pane_t1

0xa543,	// (0x0007ffc4) cntbar_detail_list_event_pane_g3_ParamLimits

0xa543,	// (0x0007ffc4) cntbar_detail_list_event_pane_g3

0xa55b,	// (0x0007ffdc) cntbar_detail_list_event_pane_g4_ParamLimits

0xa55b,	// (0x0007ffdc) cntbar_detail_list_event_pane_g4

0xa573,	// (0x0007fff4) cntbar_detail_list_event_pane_g5_ParamLimits

0xa573,	// (0x0007fff4) cntbar_detail_list_event_pane_g5

0xa58b,	// (0x0008000c) cntbar_detail_list_event_pane_g6_ParamLimits

0xa58b,	// (0x0008000c) cntbar_detail_list_event_pane_g6

0xa5cf,	// (0x00080050) cntbar_detail_list_event_pane_t3_ParamLimits

0xa5cf,	// (0x00080050) cntbar_detail_list_event_pane_t3

0xa5e1,	// (0x00080062) popup_notif_wgt_window_ParamLimits

0xa5e1,	// (0x00080062) popup_notif_wgt_window

0xa5fa,	// (0x0008007b) popup_submenu_window_cp01_ParamLimits

0xa5fa,	// (0x0008007b) popup_submenu_window_cp01

0x3782,	// (0x00079203) bg_popup_window_pane_cp10

0xdb5b,	// (0x000835dc) listscroll_notif_wgt_pane

0xdb65,	// (0x000835e6) list_notif_wgt_window

0xdb6e,	// (0x000835ef) scroll_pane_cp033

0xdb77,	// (0x000835f8) list_notif_wgt_row_pane_ParamLimits

0xdb77,	// (0x000835f8) list_notif_wgt_row_pane

0xdb8b,	// (0x0008360c) aid_size_list_notif_wgt_del

0xdb94,	// (0x00083615) list_notif_wgt_row_pane_g1

0xdb9c,	// (0x0008361d) list_notif_wgt_row_pane_g2

0xdba4,	// (0x00083625) list_notif_wgt_row_pane_g3

0x0002,

0xfeac,	// (0x0008592d) list_notif_wgt_row_pane_g

0xdbad,	// (0x0008362e) list_notif_wgt_row_pane_t1

0xdbbb,	// (0x0008363c) list_notif_wgt_row_pane_t2

0xdbc9,	// (0x0008364a) list_notif_wgt_row_pane_t3

0x0002,

0xfeb3,	// (0x00085934) list_notif_wgt_row_pane_t

0xc1ee,	// (0x00081c6f) list_recal_day_event_pane_g1

0xdbd7,	// (0x00083658) list_recal_day_event_pane_t1

0xabf1,	// (0x00080672) bg_button_pane_cp045

0xdbe6,	// (0x00083667) cntbar_detail_btn_pane_t1

0x59e2,	// (0x0007b463) main_callh_pane_ParamLimits

0x59e2,	// (0x0007b463) main_callh_pane

0xabf1,	// (0x00080672) main_coverflow0_pane

0xabf1,	// (0x00080672) main_wgtman_pane

0x9a9b,	// (0x0007f51c) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x9a9b,	// (0x0007f51c) main_fs_bigclock_unlock_btn_pane

0xd3f3,	// (0x00082e74) bg_button_pane_cp16

0x9f88,	// (0x0007fa09) cell_tport_appsw_pane_g3

0xa60c,	// (0x0008008d) cf0_flow_pane_ParamLimits

0xa60c,	// (0x0008008d) cf0_flow_pane

0xdbf4,	// (0x00083675) listscroll_cf0_pane

0xdbfd,	// (0x0008367e) main_cf0_pane_g1

0xa621,	// (0x000800a2) main_cf0_pane_t1_ParamLimits

0xa621,	// (0x000800a2) main_cf0_pane_t1

0xa638,	// (0x000800b9) main_cf0_pane_t2_ParamLimits

0xa638,	// (0x000800b9) main_cf0_pane_t2

0x0001,

0xfeba,	// (0x0008593b) main_cf0_pane_t_ParamLimits

0xfeba,	// (0x0008593b) main_cf0_pane_t

0xdc07,	// (0x00083688) scroll_pane_cp11

0xa64f,	// (0x000800d0) cf0_flow_pane_g1

0xa65b,	// (0x000800dc) cf0_flow_pane_g2

0x0001,

0xfebf,	// (0x00085940) cf0_flow_pane_g

0xa667,	// (0x000800e8) cf0_flow_pane_t1

0xabf1,	// (0x00080672) main_call6_pane

0xabf1,	// (0x00080672) main_calllock_pane

0xa679,	// (0x000800fa) call6_btn_grp_pane_ParamLimits

0xa679,	// (0x000800fa) call6_btn_grp_pane

0xa695,	// (0x00080116) call6_pane_g1_ParamLimits

0xa695,	// (0x00080116) call6_pane_g1

0xa6ab,	// (0x0008012c) popup_call6_1st_window_ParamLimits

0xa6ab,	// (0x0008012c) popup_call6_1st_window

0xa6bc,	// (0x0008013d) popup_call6_2nd_window_ParamLimits

0xa6bc,	// (0x0008013d) popup_call6_2nd_window

0xa6cd,	// (0x0008014e) cell_call6_btn_pane_ParamLimits

0xa6cd,	// (0x0008014e) cell_call6_btn_pane

0x3782,	// (0x00079203) bg_popup_call2_in_pane_cp03

0xdc12,	// (0x00083693) popup_call6_1st_window_g1

0xdc1a,	// (0x0008369b) popup_call6_1st_window_g2

0xdc22,	// (0x000836a3) popup_call6_1st_window_g3

0x0002,

0xfec4,	// (0x00085945) popup_call6_1st_window_g

0xdc2a,	// (0x000836ab) popup_call6_1st_window_t1

0xdc39,	// (0x000836ba) popup_call6_1st_window_t2

0xdc49,	// (0x000836ca) popup_call6_1st_window_t3

0x0002,

0xfecb,	// (0x0008594c) popup_call6_1st_window_t

0x3782,	// (0x00079203) bg_popup_call2_in_pane_cp04

0xdc12,	// (0x00083693) popup_call6_2nd_window_g1

0xdc1a,	// (0x0008369b) popup_call6_2nd_window_g2

0xdc22,	// (0x000836a3) popup_call6_2nd_window_g3

0x0002,

0xfec4,	// (0x00085945) popup_call6_2nd_window_g

0xdc2a,	// (0x000836ab) popup_call6_2nd_window_t1

0xabf1,	// (0x00080672) bg_button_pane_cp15

0xdc59,	// (0x000836da) cell_call6_btn_pane_g1

0xdc62,	// (0x000836e3) cell_call6_btn_pane_t1

0xa6e1,	// (0x00080162) listscroll_wgtman_pane_ParamLimits

0xa6e1,	// (0x00080162) listscroll_wgtman_pane

0xa704,	// (0x00080185) wgtman_btn_pane_ParamLimits

0xa704,	// (0x00080185) wgtman_btn_pane

0x3331,	// (0x00078db2) aid_scroll_copy1

0xdc71,	// (0x000836f2) list_wgtman_pane

0xa747,	// (0x000801c8) wgtman_btn_pane_g1_ParamLimits

0xa747,	// (0x000801c8) wgtman_btn_pane_g1

0xa773,	// (0x000801f4) wgtman_btn_pane_t1_ParamLimits

0xa773,	// (0x000801f4) wgtman_btn_pane_t1

0xdc7b,	// (0x000836fc) wgtman_btn_pane_t2_ParamLimits

0xdc7b,	// (0x000836fc) wgtman_btn_pane_t2

0x0001,

0xfed2,	// (0x00085953) wgtman_btn_pane_t_ParamLimits

0xfed2,	// (0x00085953) wgtman_btn_pane_t

0xdc92,	// (0x00083713) listrow_wgtman_pane_ParamLimits

0xdc92,	// (0x00083713) listrow_wgtman_pane

0xdca6,	// (0x00083727) listrow_wgtman_pane_g1

0xa7b0,	// (0x00080231) listrow_wgtman_pane_g2

0x0001,

0xfed7,	// (0x00085958) listrow_wgtman_pane_g

0xdcaf,	// (0x00083730) listrow_wgtman_pane_t1

0xdcbd,	// (0x0008373e) listrow_wgtman_pane_t2

0x0001,

0xfedc,	// (0x0008595d) listrow_wgtman_pane_t

0xdccb,	// (0x0008374c) wait_bar_pane_cp09

0xdcd3,	// (0x00083754) main_calllock_btn_pane

0xdcdd,	// (0x0008375e) main_calllock_pane_g1

0xabf1,	// (0x00080672) bg_button_pane_cp17

0xdce9,	// (0x0008376a) main_calllock_btn_pane_g1

0xdcf2,	// (0x00083773) main_calllock_btn_pane_t1

0xabf1,	// (0x00080672) main_dialer3_pane

0xabf1,	// (0x00080672) main_fmrd2_pane

0xb494,	// (0x00080f15) main_fs_bigclock_unlock_btn_pane_g1

0xdd09,	// (0x0008378a) main_fs_bigclock_unlock_btn_pane_t1

0xa7ba,	// (0x0008023b) area_fmrd2_info_pane_ParamLimits

0xa7ba,	// (0x0008023b) area_fmrd2_info_pane

0xa7cd,	// (0x0008024e) area_fmrd2_visual_pane_ParamLimits

0xa7cd,	// (0x0008024e) area_fmrd2_visual_pane

0xa7db,	// (0x0008025c) fmrd2_indi_pane_ParamLimits

0xa7db,	// (0x0008025c) fmrd2_indi_pane

0xa7e8,	// (0x00080269) area_fmrd2_visual_pane_g1

0xa7f0,	// (0x00080271) area_fmrd2_visual_pane_t1

0xa800,	// (0x00080281) area_fmrd2_visual_pane_t2

0xa810,	// (0x00080291) area_fmrd2_visual_pane_t3

0x0002,

0xfee6,	// (0x00085967) area_fmrd2_visual_pane_t

0xa820,	// (0x000802a1) area_fmrd2_info_pane_g1

0xa828,	// (0x000802a9) area_fmrd2_info_pane_t1

0xa838,	// (0x000802b9) area_fmrd2_info_pane_t2

0xa848,	// (0x000802c9) area_fmrd2_info_pane_t3

0xa858,	// (0x000802d9) area_fmrd2_info_pane_t4

0x0003,

0xfeed,	// (0x0008596e) area_fmrd2_info_pane_t

0xa868,	// (0x000802e9) fmrd2_indi_pane_t1

0xa878,	// (0x000802f9) fmrd2_indi_pane_t2

0xa888,	// (0x00080309) fmrd2_indi_pane_t3

0x0002,

0xfef6,	// (0x00085977) fmrd2_indi_pane_t

0x9b13,	// (0x0007f594) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x9b13,	// (0x0007f594) list_single_fs_bigclock_indicator_pane_g5

0x9bb9,	// (0x0007f63a) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x9bb9,	// (0x0007f63a) list_single_fs_bigclock_indicator_pane_t5

0xa111,	// (0x0007fb92) aid_cell_bcale_month_pane_ParamLimits

0xa111,	// (0x0007fb92) aid_cell_bcale_month_pane

0xa123,	// (0x0007fba4) bcale_month_pane_ParamLimits

0xa123,	// (0x0007fba4) bcale_month_pane

0xa13b,	// (0x0007fbbc) bcale_preview_pane_ParamLimits

0xa13b,	// (0x0007fbbc) bcale_preview_pane

0xda3a,	// (0x000834bb) list_single_fs_bigclock_pane_t1_ParamLimits

0xda56,	// (0x000834d7) list_single_fs_bigclock_pane_t2_ParamLimits

0xda56,	// (0x000834d7) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7d,	// (0x000858fe) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7d,	// (0x000858fe) list_single_fs_bigclock_pane_t

0xdd01,	// (0x00083782) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee1,	// (0x00085962) main_fs_bigclock_unlock_btn_pane_g

0xa898,	// (0x00080319) aid_dia3_key_size_ParamLimits

0xa898,	// (0x00080319) aid_dia3_key_size

0xa8a7,	// (0x00080328) aid_dia3_listrow_size_ParamLimits

0xa8a7,	// (0x00080328) aid_dia3_listrow_size

0xa8b5,	// (0x00080336) dia3_keypad_fun_pane_ParamLimits

0xa8b5,	// (0x00080336) dia3_keypad_fun_pane

0xa8d1,	// (0x00080352) dia3_keypad_num_pane_ParamLimits

0xa8d1,	// (0x00080352) dia3_keypad_num_pane

0xa8ea,	// (0x0008036b) dia3_listscroll_pane_ParamLimits

0xa8ea,	// (0x0008036b) dia3_listscroll_pane

0xa8ff,	// (0x00080380) dia3_numentry_pane_ParamLimits

0xa8ff,	// (0x00080380) dia3_numentry_pane

0xdd17,	// (0x00083798) dia3_list_pane

0xdd22,	// (0x000837a3) scroll_pane_cp12

0xabf1,	// (0x00080672) bg_dia3_numentry_pane

0xdd2d,	// (0x000837ae) dia3_numentry_pane_t1

0xa912,	// (0x00080393) cell_dia3_key_num_pane

0xa91a,	// (0x0008039b) cell_dia3_key0_fun_pane_ParamLimits

0xa91a,	// (0x0008039b) cell_dia3_key0_fun_pane

0xa92e,	// (0x000803af) cell_dia3_key1_fun_pane_ParamLimits

0xa92e,	// (0x000803af) cell_dia3_key1_fun_pane

0xa946,	// (0x000803c7) dia3_listrow_pane

0xcc3c,	// (0x000826bd) bg_dia3_numentry_pane_g1

0xabf1,	// (0x00080672) bg_button_pane_cp21

0xdd3c,	// (0x000837bd) cell_dia3_key_num_pane_t1

0xdd4a,	// (0x000837cb) cell_dia3_key_num_pane_t2

0xdd59,	// (0x000837da) cell_dia3_key_num_pane_t3

0xdd68,	// (0x000837e9) cell_dia3_key_num_pane_t4

0x0003,

0xfefd,	// (0x0008597e) cell_dia3_key_num_pane_t

0xabf1,	// (0x00080672) bg_button_pane_cp19

0xa958,	// (0x000803d9) cell_dia3_key0_fun_pane_g1

0xabf1,	// (0x00080672) bg_button_pane_cp20

0xa960,	// (0x000803e1) cell_dia3_key1_fun_pane_g1

0xa968,	// (0x000803e9) area_left_week_number_pane

0xa971,	// (0x000803f2) area_top_day_name_pane

0xa97a,	// (0x000803fb) frame_month_view_pane

0xa986,	// (0x00080407) grid_month_view_pane

0xa990,	// (0x00080411) cell_top_day_name_pane_ParamLimits

0xa990,	// (0x00080411) cell_top_day_name_pane

0xa9aa,	// (0x0008042b) cell_area_left_week_number_pane_ParamLimits

0xa9aa,	// (0x0008042b) cell_area_left_week_number_pane

0xa9c0,	// (0x00080441) cell_month_view_pane_ParamLimits

0xa9c0,	// (0x00080441) cell_month_view_pane

0xdd77,	// (0x000837f8) frm_month_g1

0xa9df,	// (0x00080460) frm_month_g2

0xa9e9,	// (0x0008046a) frm_month_g3

0xa9f3,	// (0x00080474) frm_month_g4

0xa9fd,	// (0x0008047e) frm_month_g5

0xaa07,	// (0x00080488) frm_month_g6

0xaa13,	// (0x00080494) frm_month_g7

0xdd80,	// (0x00083801) frm_month_g8

0xaa1f,	// (0x000804a0) frm_month_g9

0xaa28,	// (0x000804a9) frm_month_g10

0xaa31,	// (0x000804b2) frm_month_g11

0xaa3a,	// (0x000804bb) frm_month_g12

0xaa43,	// (0x000804c4) frm_month_g13

0xaa4c,	// (0x000804cd) frm_month_g14

0xaa55,	// (0x000804d6) frm_month_g15

0xaa60,	// (0x000804e1) frm_month_g16

0x000f,

0xff06,	// (0x00085987) frm_month_g

0xaa6b,	// (0x000804ec) cell_top_day_name_pane_t1

0xaa7a,	// (0x000804fb) cell_area_left_week_number_pane_g1

0xaa6b,	// (0x000804ec) cell_area_left_week_number_pane_t1

0xb494,	// (0x00080f15) cell_month_view_pane_g1

0xaa82,	// (0x00080503) cell_month_view_pane_t1

0xabf1,	// (0x00080672) main_fps_pane

0xd13e,	// (0x00082bbf) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xd13e,	// (0x00082bbf) cmail_ddmenu_btn02_pane_cp1

0xd15a,	// (0x00082bdb) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xd15a,	// (0x00082bdb) cmail_ddmenu_btn02_pane_cp2

0xa32c,	// (0x0007fdad) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xa32c,	// (0x0007fdad) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2e,	// (0x000858af) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2e,	// (0x000858af) cmail_ddmenu_btn02_pane_g

0xa34a,	// (0x0007fdcb) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xa34a,	// (0x0007fdcb) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe33,	// (0x000858b4) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe33,	// (0x000858b4) cmail_ddmenu_btn02_pane_t

0xaa91,	// (0x00080512) fps_text_pane_ParamLimits

0xaa91,	// (0x00080512) fps_text_pane

0xaaa8,	// (0x00080529) main_fps_pane_g1_ParamLimits

0xaaa8,	// (0x00080529) main_fps_pane_g1

0xaac0,	// (0x00080541) wait_bar_pane_cp010_ParamLimits

0xaac0,	// (0x00080541) wait_bar_pane_cp010

0xaad3,	// (0x00080554) fps_text_pane_t1_ParamLimits

0xaad3,	// (0x00080554) fps_text_pane_t1

0xbeeb,	// (0x0008196c) cam4_image_uncrop_pane_g1

0xbef4,	// (0x00081975) cam4_image_uncrop_pane_g2

0x7f15,	// (0x0007d996) cam4_image_uncrop_pane_g3

0x7f1e,	// (0x0007d99f) cam4_image_uncrop_pane_g4

0x0003,

0xf901,	// (0x00085382) cam4_image_uncrop_pane_g

0xa946,	// (0x000803c7) dia3_listrow_pane_ParamLimits

0xabf1,	// (0x00080672) main_phob2_pane

0x9f4f,	// (0x0007f9d0) cell_tport_appsw_pane_cp02_ParamLimits

0x9f4f,	// (0x0007f9d0) cell_tport_appsw_pane_cp02

0x9f63,	// (0x0007f9e4) cell_tport_appsw_pane_cp03_ParamLimits

0x9f63,	// (0x0007f9e4) cell_tport_appsw_pane_cp03

0xabf1,	// (0x00080672) phob2_contact_card_pane

0xabf1,	// (0x00080672) phob2_listscroll_pane

0xdd89,	// (0x0008380a) phob2_list_pane

0xdd91,	// (0x00083812) scroll_pane_cp034

0xaaeb,	// (0x0008056c) phob2_cc_data_pane_ParamLimits

0xaaeb,	// (0x0008056c) phob2_cc_data_pane

0xab0c,	// (0x0008058d) phob2_cc_listscroll_pane_ParamLimits

0xab0c,	// (0x0008058d) phob2_cc_listscroll_pane

0xab2e,	// (0x000805af) list_double_large_graphic_phob2_pane_ParamLimits

0xab2e,	// (0x000805af) list_double_large_graphic_phob2_pane

0xab43,	// (0x000805c4) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xab43,	// (0x000805c4) list_double_large_graphic_phob2_pane_g1

0x1429,	// (0x00076eaa) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x1429,	// (0x00076eaa) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff27,	// (0x000859a8) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff27,	// (0x000859a8) list_double_large_graphic_phob2_pane_g

0x1435,	// (0x00076eb6) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x1435,	// (0x00076eb6) list_double_large_graphic_phob2_pane_t1

0x144a,	// (0x00076ecb) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x144a,	// (0x00076ecb) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff2c,	// (0x000859ad) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff2c,	// (0x000859ad) list_double_large_graphic_phob2_pane_t

0xabf1,	// (0x00080672) list_highlight_pane_cp024

0xdd99,	// (0x0008381a) phob2_cc_button_pane

0xab50,	// (0x000805d1) phob2_cc_data_pane_g1_ParamLimits

0xab50,	// (0x000805d1) phob2_cc_data_pane_g1

0xab66,	// (0x000805e7) phob2_cc_data_pane_g2_ParamLimits

0xab66,	// (0x000805e7) phob2_cc_data_pane_g2

0x0001,

0xff31,	// (0x000859b2) phob2_cc_data_pane_g_ParamLimits

0xff31,	// (0x000859b2) phob2_cc_data_pane_g

0xab7a,	// (0x000805fb) phob2_cc_data_pane_t1_ParamLimits

0xab7a,	// (0x000805fb) phob2_cc_data_pane_t1

0xab94,	// (0x00080615) phob2_cc_data_pane_t2_ParamLimits

0xab94,	// (0x00080615) phob2_cc_data_pane_t2

0xabae,	// (0x0008062f) phob2_cc_data_pane_t3_ParamLimits

0xabae,	// (0x0008062f) phob2_cc_data_pane_t3

0x0002,

0xff36,	// (0x000859b7) phob2_cc_data_pane_t_ParamLimits

0xff36,	// (0x000859b7) phob2_cc_data_pane_t

0xdda1,	// (0x00083822) phob2_cc_list_pane_ParamLimits

0xdda1,	// (0x00083822) phob2_cc_list_pane

0xc299,	// (0x00081d1a) scroll_pane_cp035_ParamLimits

0xc299,	// (0x00081d1a) scroll_pane_cp035

0xac6a,	// (0x000806eb) bg_button_pane_cp033

0xddad,	// (0x0008382e) phob2_cc_button_pane_g1

0xddb9,	// (0x0008383a) phob2_cc_button_pane_t1

0xddce,	// (0x0008384f) phob2_cc_button_pane_t2

0x0001,

0xff3d,	// (0x000859be) phob2_cc_button_pane_t

0xabc8,	// (0x00080649) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xabc8,	// (0x00080649) list_double_large_graphic_phob2_cc_pane

0xabdd,	// (0x0008065e) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xabdd,	// (0x0008065e) list_double_large_graphic_phob2_cc_pane_g1

0x145c,	// (0x00076edd) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x145c,	// (0x00076edd) list_double_large_graphic_phob2_cc_pane_g2

0x1468,	// (0x00076ee9) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x1468,	// (0x00076ee9) list_double_large_graphic_phob2_cc_pane_g3

0x1474,	// (0x00076ef5) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x1474,	// (0x00076ef5) list_double_large_graphic_phob2_cc_pane_g4

0x1480,	// (0x00076f01) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x1480,	// (0x00076f01) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff42,	// (0x000859c3) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff42,	// (0x000859c3) list_double_large_graphic_phob2_cc_pane_g

0x148c,	// (0x00076f0d) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x148c,	// (0x00076f0d) list_double_large_graphic_phob2_cc_pane_t1

0x14b5,	// (0x00076f36) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x14b5,	// (0x00076f36) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4d,	// (0x000859ce) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4d,	// (0x000859ce) list_double_large_graphic_phob2_cc_pane_t

0xdde0,	// (0x00083861) list_highlight_pane_cp025_ParamLimits

0xdde0,	// (0x00083861) list_highlight_pane_cp025

0xac6a,	// (0x000806eb) bg_button_pane_cp033_ParamLimits

0xddad,	// (0x0008382e) phob2_cc_button_pane_g1_ParamLimits

0xddb9,	// (0x0008383a) phob2_cc_button_pane_t1_ParamLimits

0xddce,	// (0x0008384f) phob2_cc_button_pane_t2_ParamLimits

0xff3d,	// (0x000859be) phob2_cc_button_pane_t_ParamLimits

0x151a,	// (0x00076f9b) popup_wgtman_window

0xc099,	// (0x00081b1a) scroll_pane_cp038

0xa729,	// (0x000801aa) wgtman_btn_pane_cp_01_ParamLimits

0xa729,	// (0x000801aa) wgtman_btn_pane_cp_01

0xddee,	// (0x0008386f) wgtman_content_pane

0xddf7,	// (0x00083878) wgtman_heading_pane

0xabf1,	// (0x00080672) bg_heading_pane_cp02

0xde00,	// (0x00083881) wgtman_heading_pane_g1

0xde08,	// (0x00083889) wgtman_heading_pane_t1

0xde16,	// (0x00083897) scroll_pane_cp036

0xde1e,	// (0x0008389f) wgtman_list_pane

0xcf94,	// (0x00082a15) wgtman_list_pane_t1_ParamLimits

0xcf94,	// (0x00082a15) wgtman_list_pane_t1

0xe0c0,	// (0x00083b41) cam4_grid_pane

0x0db6,	// (0x00076837) bg_button_pane_cp015_ParamLimits

0x8bb8,	// (0x0007e639) bg_button_pane_cp016_ParamLimits

0x8bcb,	// (0x0007e64c) bg_button_pane_cp017_ParamLimits

0x0dfe,	// (0x0007687f) popup_vitu2_query_window_g3_ParamLimits

0x0dfe,	// (0x0007687f) popup_vitu2_query_window_g3

0x0e79,	// (0x000768fa) popup_vitu2_query_window_t6_ParamLimits

0x0e79,	// (0x000768fa) popup_vitu2_query_window_t6

0x0ea4,	// (0x00076925) popup_vitu2_query_window_t7_ParamLimits

0x0ea4,	// (0x00076925) popup_vitu2_query_window_t7

0xbeeb,	// (0x0008196c) cam4_grid_pane_g1

0xbef4,	// (0x00081975) cam4_grid_pane_g2

0xde26,	// (0x000838a7) cam4_grid_pane_g3

0xde2f,	// (0x000838b0) cam4_grid_pane_g4

0x0003,

0xff52,	// (0x000859d3) cam4_grid_pane_g

0x2356,	// (0x00077dd7) aid_placing_vt_slider_lsc_ParamLimits

0x2646,	// (0x000780c7) vidtel_button_pane_ParamLimits

0x2646,	// (0x000780c7) vidtel_button_pane

0xabf1,	// (0x00080672) bg_button_pane_cp034

0xabe9,	// (0x0008066a) vidtel_button_pane_g1

0xde3a,	// (0x000838bb) vidtel_button_pane_t1

0xc1b8,	// (0x00081c39) aid_size_vtel_slider_touch

0xc299,	// (0x00081d1a) scroll_pane_cp039

0xcc7a,	// (0x000826fb) ncim_query_button_pane_cp01_ParamLimits

0xcc99,	// (0x0008271a) ncimui_query_pane_g1_ParamLimits

0xac6a,	// (0x000806eb) input_focus_pane_cp012_ParamLimits

0xccbe,	// (0x0008273f) ncim_query_entry_pane_t1_ParamLimits

0xc299,	// (0x00081d1a) scroll_pane_cp039_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Large
