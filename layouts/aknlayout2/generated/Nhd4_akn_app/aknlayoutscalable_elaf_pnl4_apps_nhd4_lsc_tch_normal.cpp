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

#include "aknlayoutscalable_elaf_pnl4_apps_nhd4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0000c8d6 };

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
0x1859,	// (0x0000e12f) Screen

0x1865,	// (0x0000e13b) application_window

0x18a1,	// (0x0000e177) area_bottom_pane_ParamLimits

0x18a1,	// (0x0000e177) area_bottom_pane

0x18da,	// (0x0000e1b0) area_top_pane_ParamLimits

0x18da,	// (0x0000e1b0) area_top_pane

0x9880,	// (0x00016156) call_video_uplink_pane_ParamLimits

0x9880,	// (0x00016156) call_video_uplink_pane

0x1968,	// (0x0000e23e) main_pane_ParamLimits

0x1968,	// (0x0000e23e) main_pane

0xc171,	// (0x00018a47) context_pane

0x4680,	// (0x00010f56) navi_pane

0x46b2,	// (0x00010f88) popup_cale_events_window_ParamLimits

0x46b2,	// (0x00010f88) popup_cale_events_window

0xc184,	// (0x00018a5a) popup_mup_playback_window

0x46ca,	// (0x00010fa0) signal_pane

0xa029,	// (0x000168ff) main_browser_pane

0xa25e,	// (0x00016b34) main_burst_pane

0x43dc,	// (0x00010cb2) main_calc_pane

0xc111,	// (0x000189e7) main_cale_day_pane

0x1e5e,	// (0x0000e734) main_cale_month_pane

0xc111,	// (0x000189e7) main_cale_week_pane

0xa25e,	// (0x00016b34) main_call_pane

0x9cbf,	// (0x00016595) main_call_poc_pane

0xa25e,	// (0x00016b34) main_camera_pane

0xa25e,	// (0x00016b34) main_chi_dic_pane

0xaada,	// (0x000173b0) main_clock_pane

0x9cbf,	// (0x00016595) main_fmradio_pane

0xa25e,	// (0x00016b34) main_graph_messa_pane

0x9cbf,	// (0x00016595) main_help_pane

0xa029,	// (0x000168ff) main_im_pane

0x9f1a,	// (0x000167f0) main_image_pane_ParamLimits

0x9f1a,	// (0x000167f0) main_image_pane

0x9cbf,	// (0x00016595) main_location2_pane

0xa25e,	// (0x00016b34) main_location_pane

0x9f1a,	// (0x000167f0) main_messa_pane

0x9cbf,	// (0x00016595) main_mp2_pane

0xa25e,	// (0x00016b34) main_mp_pane

0x9cbf,	// (0x00016595) main_msg_pane

0x9cbf,	// (0x00016595) main_mup_eq_pane

0x9cbf,	// (0x00016595) main_mup_pane

0xa029,	// (0x000168ff) main_notes_pane

0x9cbf,	// (0x00016595) main_pec_pane

0x9cbf,	// (0x00016595) main_phob_pane

0x9cbf,	// (0x00016595) main_pinb_pane

0x9cbf,	// (0x00016595) main_postcard_pane

0x9cbf,	// (0x00016595) main_qdial_pane

0xa25e,	// (0x00016b34) main_skin_pane

0x9cbf,	// (0x00016595) main_smil2_pane

0xa25e,	// (0x00016b34) main_smil_pane

0xa25e,	// (0x00016b34) main_video_pane

0xa25e,	// (0x00016b34) main_video_tele_pane

0x9f1a,	// (0x000167f0) main_viewer_pane_ParamLimits

0x9f1a,	// (0x000167f0) main_viewer_pane

0xa25e,	// (0x00016b34) main_vorec_pane

0x443c,	// (0x00010d12) popup_blid_sat_info_window_ParamLimits

0x443c,	// (0x00010d12) popup_blid_sat_info_window

0x4494,	// (0x00010d6a) popup_dyc_status_message_window_ParamLimits

0x4494,	// (0x00010d6a) popup_dyc_status_message_window

0x44ac,	// (0x00010d82) popup_grid_large_graphic_window_ParamLimits

0x44ac,	// (0x00010d82) popup_grid_large_graphic_window

0x455c,	// (0x00010e32) popup_loc_request_window_ParamLimits

0x455c,	// (0x00010e32) popup_loc_request_window

0x4658,	// (0x00010f2e) popup_wml_address_window_ParamLimits

0x4658,	// (0x00010f2e) popup_wml_address_window

0x4216,	// (0x00010aec) call_muted_g1

0x3e89,	// (0x0001075f) popup_call_audio_conf_window_ParamLimits

0x3e89,	// (0x0001075f) popup_call_audio_conf_window

0x422a,	// (0x00010b00) popup_call_audio_first_window_ParamLimits

0x422a,	// (0x00010b00) popup_call_audio_first_window

0x42a0,	// (0x00010b76) popup_call_audio_in_window_ParamLimits

0x42a0,	// (0x00010b76) popup_call_audio_in_window

0x42dc,	// (0x00010bb2) popup_call_audio_out_window_ParamLimits

0x42dc,	// (0x00010bb2) popup_call_audio_out_window

0x4316,	// (0x00010bec) popup_call_audio_second_window_ParamLimits

0x4316,	// (0x00010bec) popup_call_audio_second_window

0x436c,	// (0x00010c42) popup_call_audio_wait_window_ParamLimits

0x436c,	// (0x00010c42) popup_call_audio_wait_window

0x43a1,	// (0x00010c77) popup_number_entry_window_ParamLimits

0x43a1,	// (0x00010c77) popup_number_entry_window

0x98ac,	// (0x00016182) bg_popup_call_pane_cp05_ParamLimits

0x98ac,	// (0x00016182) bg_popup_call_pane_cp05

0x98cc,	// (0x000161a2) popup_number_entry_window_t1

0x98df,	// (0x000161b5) popup_number_entry_window_t2

0x98f1,	// (0x000161c7) popup_number_entry_window_t3

0x0003,

0xf085,	// (0x0001b95b) popup_number_entry_window_t

0x9903,	// (0x000161d9) text_title_cp2

0x9916,	// (0x000161ec) bg_popup_call_pane_cp_ParamLimits

0x9916,	// (0x000161ec) bg_popup_call_pane_cp

0x9924,	// (0x000161fa) call_thumbnail_pane

0x992c,	// (0x00016202) popup_call_audio_in_window_g1_ParamLimits

0x992c,	// (0x00016202) popup_call_audio_in_window_g1

0x9938,	// (0x0001620e) popup_call_audio_in_window_g2_ParamLimits

0x9938,	// (0x0001620e) popup_call_audio_in_window_g2

0x9944,	// (0x0001621a) popup_call_audio_in_window_g3_ParamLimits

0x9944,	// (0x0001621a) popup_call_audio_in_window_g3

0x0002,

0xf08e,	// (0x0001b964) popup_call_audio_in_window_g_ParamLimits

0xf08e,	// (0x0001b964) popup_call_audio_in_window_g

0x9950,	// (0x00016226) popup_call_audio_in_window_t1_ParamLimits

0x9950,	// (0x00016226) popup_call_audio_in_window_t1

0x996c,	// (0x00016242) popup_call_audio_in_window_t2_ParamLimits

0x996c,	// (0x00016242) popup_call_audio_in_window_t2

0x9988,	// (0x0001625e) popup_call_audio_in_window_t3_ParamLimits

0x9988,	// (0x0001625e) popup_call_audio_in_window_t3

0x0002,

0xf095,	// (0x0001b96b) popup_call_audio_in_window_t_ParamLimits

0xf095,	// (0x0001b96b) popup_call_audio_in_window_t

0x9916,	// (0x000161ec) bg_popup_call_pane_cp01_ParamLimits

0x9916,	// (0x000161ec) bg_popup_call_pane_cp01

0x9924,	// (0x000161fa) call_thumbnail_pane_cp02

0x999b,	// (0x00016271) call_type_pane_cp022

0x99a3,	// (0x00016279) popup_call_audio_out_window_g1_ParamLimits

0x99a3,	// (0x00016279) popup_call_audio_out_window_g1

0x99b5,	// (0x0001628b) popup_call_audio_out_window_g2_ParamLimits

0x99b5,	// (0x0001628b) popup_call_audio_out_window_g2

0x99c1,	// (0x00016297) popup_call_audio_out_window_g3_ParamLimits

0x99c1,	// (0x00016297) popup_call_audio_out_window_g3

0x0002,

0xf09c,	// (0x0001b972) popup_call_audio_out_window_g_ParamLimits

0xf09c,	// (0x0001b972) popup_call_audio_out_window_g

0x99d3,	// (0x000162a9) popup_call_audio_out_window_t1_ParamLimits

0x99d3,	// (0x000162a9) popup_call_audio_out_window_t1

0x99eb,	// (0x000162c1) popup_call_audio_out_window_t2_ParamLimits

0x99eb,	// (0x000162c1) popup_call_audio_out_window_t2

0x0001,

0xf0a3,	// (0x0001b979) popup_call_audio_out_window_t_ParamLimits

0xf0a3,	// (0x0001b979) popup_call_audio_out_window_t

0x9a00,	// (0x000162d6) bg_popup_call_pane_ParamLimits

0x9a00,	// (0x000162d6) bg_popup_call_pane

0x1b25,	// (0x0000e3fb) call_thumbnail_pane_cp_ParamLimits

0x1b25,	// (0x0000e3fb) call_thumbnail_pane_cp

0x9a84,	// (0x0001635a) call_type_pane_cp01_ParamLimits

0x9a84,	// (0x0001635a) call_type_pane_cp01

0x9ac8,	// (0x0001639e) popup_call_audio_first_window_g1_ParamLimits

0x9ac8,	// (0x0001639e) popup_call_audio_first_window_g1

0x9b14,	// (0x000163ea) popup_call_audio_first_window_g2_ParamLimits

0x9b14,	// (0x000163ea) popup_call_audio_first_window_g2

0x0001,

0xf0a8,	// (0x0001b97e) popup_call_audio_first_window_g_ParamLimits

0xf0a8,	// (0x0001b97e) popup_call_audio_first_window_g

0x9b58,	// (0x0001642e) popup_call_audio_first_window_t1_ParamLimits

0x9b58,	// (0x0001642e) popup_call_audio_first_window_t1

0x9c04,	// (0x000164da) popup_call_audio_first_window_t4_ParamLimits

0x9c04,	// (0x000164da) popup_call_audio_first_window_t4

0x9c90,	// (0x00016566) popup_call_audio_first_window_t5_ParamLimits

0x9c90,	// (0x00016566) popup_call_audio_first_window_t5

0x0002,

0xf0ad,	// (0x0001b983) popup_call_audio_first_window_t_ParamLimits

0xf0ad,	// (0x0001b983) popup_call_audio_first_window_t

0x9cbf,	// (0x00016595) bg_popup_call_pane_cp02

0x9cc9,	// (0x0001659f) call_type_pane_cp023

0x9cd1,	// (0x000165a7) popup_call_audio_wait_window_g1

0x9cd9,	// (0x000165af) popup_call_audio_wait_window_g2

0x0001,

0xf0b4,	// (0x0001b98a) popup_call_audio_wait_window_g

0x9ce1,	// (0x000165b7) popup_call_audio_wait_window_t3

0x9cef,	// (0x000165c5) bg_popup_call_pane_cp03_ParamLimits

0x9cef,	// (0x000165c5) bg_popup_call_pane_cp03

0x9d4f,	// (0x00016625) call_thumbnail_pane_cp011_ParamLimits

0x9d4f,	// (0x00016625) call_thumbnail_pane_cp011

0x9d5b,	// (0x00016631) call_type_pane_cp034_ParamLimits

0x9d5b,	// (0x00016631) call_type_pane_cp034

0x9d97,	// (0x0001666d) popup_call_audio_second_window_g1_ParamLimits

0x9d97,	// (0x0001666d) popup_call_audio_second_window_g1

0x9dd3,	// (0x000166a9) popup_call_audio_second_window_g2_ParamLimits

0x9dd3,	// (0x000166a9) popup_call_audio_second_window_g2

0x0001,

0xf0b9,	// (0x0001b98f) popup_call_audio_second_window_g_ParamLimits

0xf0b9,	// (0x0001b98f) popup_call_audio_second_window_g

0x9e0f,	// (0x000166e5) popup_call_audio_second_window_t1_ParamLimits

0x9e0f,	// (0x000166e5) popup_call_audio_second_window_t1

0x9e90,	// (0x00016766) popup_call_audio_second_window_t2_ParamLimits

0x9e90,	// (0x00016766) popup_call_audio_second_window_t2

0x9ec6,	// (0x0001679c) popup_call_audio_second_window_t3_ParamLimits

0x9ec6,	// (0x0001679c) popup_call_audio_second_window_t3

0x0002,

0xf0be,	// (0x0001b994) popup_call_audio_second_window_t_ParamLimits

0xf0be,	// (0x0001b994) popup_call_audio_second_window_t

0x9cbf,	// (0x00016595) bg_popup_call_pane_cp04

0x9efc,	// (0x000167d2) list_conf_pane

0x9f04,	// (0x000167da) popup_call_audio_conf_window_t1

0x9f12,	// (0x000167e8) call_thumbnail_pane_g1

0x9f1a,	// (0x000167f0) bg_pinb_pane_ParamLimits

0x9f1a,	// (0x000167f0) bg_pinb_pane

0x9f28,	// (0x000167fe) find_pinb_pane

0x9f1a,	// (0x000167f0) listscroll_pinb_pane_ParamLimits

0x9f1a,	// (0x000167f0) listscroll_pinb_pane

0x9f32,	// (0x00016808) pinb_bg_pane_g1

0x9f32,	// (0x00016808) pinb_bg_pane_g2

0x9f32,	// (0x00016808) pinb_bg_pane_g3

0x9f32,	// (0x00016808) pinb_bg_pane_g4

0x9f32,	// (0x00016808) pinb_bg_pane_g5

0x9f32,	// (0x00016808) pinb_bg_pane_g6

0x9f32,	// (0x00016808) pinb_bg_pane_g7

0x9f32,	// (0x00016808) pinb_bg_pane_g8

0x9f32,	// (0x00016808) pinb_bg_pane_g9

0x9f32,	// (0x00016808) pinb_bg_pane_g10

0x0009,

0xf0c5,	// (0x0001b99b) pinb_bg_pane_g

0x982f,	// (0x00016105) grid_pinb_pane

0x982f,	// (0x00016105) list_pinb_pane

0x989e,	// (0x00016174) scroll_pane_cp01_ParamLimits

0x989e,	// (0x00016174) scroll_pane_cp01

0x9f3c,	// (0x00016812) find_pinb_pane_g1_ParamLimits

0x9f3c,	// (0x00016812) find_pinb_pane_g1

0x9f54,	// (0x0001682a) find_pinb_pane_t1

0x9f66,	// (0x0001683c) find_pinb_pane_t2

0x0001,

0xf0df,	// (0x0001b9b5) find_pinb_pane_t

0x9f7b,	// (0x00016851) input_focus_pane_cp01_ParamLimits

0x9f7b,	// (0x00016851) input_focus_pane_cp01

0x9f87,	// (0x0001685d) cell_pinb_pane_ParamLimits

0x9f87,	// (0x0001685d) cell_pinb_pane

0x9f95,	// (0x0001686b) cell_pinb_pane_g1_ParamLimits

0x9f95,	// (0x0001686b) cell_pinb_pane_g1

0x9fa3,	// (0x00016879) cell_pinb_pane_g2_ParamLimits

0x9fa3,	// (0x00016879) cell_pinb_pane_g2

0x9fa3,	// (0x00016879) cell_pinb_pane_g3_ParamLimits

0x9fa3,	// (0x00016879) cell_pinb_pane_g3

0x0002,

0xf0e4,	// (0x0001b9ba) cell_pinb_pane_g_ParamLimits

0xf0e4,	// (0x0001b9ba) cell_pinb_pane_g

0x9cbf,	// (0x00016595) grid_highlight_pane_cp01

0x9f87,	// (0x0001685d) list_pinb_item_pane_ParamLimits

0x9f87,	// (0x0001685d) list_pinb_item_pane

0x982f,	// (0x00016105) list_highlight_pane_cp02

0x9fb1,	// (0x00016887) list_pinb_item_pane_g1_ParamLimits

0x9fb1,	// (0x00016887) list_pinb_item_pane_g1

0x9fa3,	// (0x00016879) list_pinb_item_pane_g2_ParamLimits

0x9fa3,	// (0x00016879) list_pinb_item_pane_g2

0x9f95,	// (0x0001686b) list_pinb_item_pane_g3_ParamLimits

0x9f95,	// (0x0001686b) list_pinb_item_pane_g3

0x9fa3,	// (0x00016879) list_pinb_item_pane_g4_ParamLimits

0x9fa3,	// (0x00016879) list_pinb_item_pane_g4

0x0003,

0xf0eb,	// (0x0001b9c1) list_pinb_item_pane_g_ParamLimits

0xf0eb,	// (0x0001b9c1) list_pinb_item_pane_g

0x9fbf,	// (0x00016895) list_pinb_item_pane_t1_ParamLimits

0x9fbf,	// (0x00016895) list_pinb_item_pane_t1

0x1b67,	// (0x0000e43d) calc_display_pane

0x1b8c,	// (0x0000e462) calc_paper_pane

0x1baf,	// (0x0000e485) grid_calc_pane

0x9cbf,	// (0x00016595) bg_list_pane_cp01

0x1bdd,	// (0x0000e4b3) clock_g1

0x1be5,	// (0x0000e4bb) clock_g2

0x0001,

0xf0f4,	// (0x0001b9ca) clock_g

0x1bed,	// (0x0000e4c3) clock_t1_ParamLimits

0x1bed,	// (0x0000e4c3) clock_t1

0x1c02,	// (0x0000e4d8) clock_t2_ParamLimits

0x1c02,	// (0x0000e4d8) clock_t2

0x1c14,	// (0x0000e4ea) clock_t3_ParamLimits

0x1c14,	// (0x0000e4ea) clock_t3

0x1c26,	// (0x0000e4fc) clock_t4_ParamLimits

0x1c26,	// (0x0000e4fc) clock_t4

0x1c38,	// (0x0000e50e) clock_t5_ParamLimits

0x1c38,	// (0x0000e50e) clock_t5

0x1c4d,	// (0x0000e523) clock_t6_ParamLimits

0x1c4d,	// (0x0000e523) clock_t6

0x1c5f,	// (0x0000e535) clock_t7_ParamLimits

0x1c5f,	// (0x0000e535) clock_t7

0x1c71,	// (0x0000e547) clock_t8_ParamLimits

0x1c71,	// (0x0000e547) clock_t8

0x1c85,	// (0x0000e55b) clock_t9_ParamLimits

0x1c85,	// (0x0000e55b) clock_t9

0x0008,

0xf0f9,	// (0x0001b9cf) clock_t_ParamLimits

0xf0f9,	// (0x0001b9cf) clock_t

0x9fdb,	// (0x000168b1) popup_clock_analogue_window_cp02

0x9fdb,	// (0x000168b1) popup_clock_digital_window_cp01

0x9cbf,	// (0x00016595) listscroll_help_pane

0x9cbf,	// (0x00016595) phob_pre_status_pane

0x9fe3,	// (0x000168b9) grid_qdial_pane

0x9f1a,	// (0x000167f0) listscroll_mce_pane

0x9f1a,	// (0x000167f0) bg_notes_pane

0x9fed,	// (0x000168c3) list_notes_pane

0x1c99,	// (0x0000e56f) scroll_pane_cp06

0x9ffb,	// (0x000168d1) bg_calc_paper_pane

0xa00f,	// (0x000168e5) list_calc_pane

0xa029,	// (0x000168ff) bg_calc_display_pane

0x1cad,	// (0x0000e583) calc_display_pane_t1

0x1cbf,	// (0x0000e595) calc_display_pane_t2

0xa035,	// (0x0001690b) calc_display_pane_t3

0x0002,

0xf10c,	// (0x0001b9e2) calc_display_pane_t

0x1cd1,	// (0x0000e5a7) cell_calc_pane_ParamLimits

0x1cd1,	// (0x0000e5a7) cell_calc_pane

0xa047,	// (0x0001691d) bg_calc_paper_pane_g1

0xa053,	// (0x00016929) bg_calc_paper_pane_g2

0xa05f,	// (0x00016935) bg_calc_paper_pane_g3

0xa06b,	// (0x00016941) bg_calc_paper_pane_g4

0xa077,	// (0x0001694d) bg_calc_paper_pane_g5

0x1d06,	// (0x0000e5dc) bg_calc_paper_pane_g6

0x1d15,	// (0x0000e5eb) bg_calc_paper_pane_g7

0x1d24,	// (0x0000e5fa) bg_calc_paper_pane_g8

0x0007,

0xf113,	// (0x0001b9e9) bg_calc_paper_pane_g

0x1d37,	// (0x0000e60d) calc_bg_paper_pane_g9

0x1d4a,	// (0x0000e620) list_calc_item_pane_ParamLimits

0x1d4a,	// (0x0000e620) list_calc_item_pane

0xa083,	// (0x00016959) list_calc_item_pane_g1

0xa090,	// (0x00016966) list_calc_item_pane_t1_ParamLimits

0xa090,	// (0x00016966) list_calc_item_pane_t1

0x1d5f,	// (0x0000e635) list_calc_item_pane_t2_ParamLimits

0x1d5f,	// (0x0000e635) list_calc_item_pane_t2

0x0001,

0xf124,	// (0x0001b9fa) list_calc_item_pane_t_ParamLimits

0xf124,	// (0x0001b9fa) list_calc_item_pane_t

0x9f32,	// (0x00016808) cell_calc_pane_g1

0xa0a2,	// (0x00016978) grid_highlight_pane_cp02

0xa0c4,	// (0x0001699a) bg_calc_display_pane_g1

0x1d91,	// (0x0000e667) bg_calc_display_pane_g2

0xcc3f,	// (0x00019515) bg_calc_display_pane_g3

0x0002,

0xf12e,	// (0x0001ba04) bg_calc_display_pane_g

0x1d9b,	// (0x0000e671) cell_qdial_pane_ParamLimits

0x1d9b,	// (0x0000e671) cell_qdial_pane

0x1daf,	// (0x0000e685) cell_qdial_pane_g1_ParamLimits

0x1daf,	// (0x0000e685) cell_qdial_pane_g1

0x1dc5,	// (0x0000e69b) cell_qdial_pane_g2_ParamLimits

0x1dc5,	// (0x0000e69b) cell_qdial_pane_g2

0xa0cd,	// (0x000169a3) cell_qdial_pane_g3_ParamLimits

0xa0cd,	// (0x000169a3) cell_qdial_pane_g3

0x0003,

0xf135,	// (0x0001ba0b) cell_qdial_pane_g_ParamLimits

0xf135,	// (0x0001ba0b) cell_qdial_pane_g

0x1deb,	// (0x0000e6c1) cell_qdial_pane_t1_ParamLimits

0x1deb,	// (0x0000e6c1) cell_qdial_pane_t1

0x1e03,	// (0x0000e6d9) cell_qdial_pane_t2_ParamLimits

0x1e03,	// (0x0000e6d9) cell_qdial_pane_t2

0x1e16,	// (0x0000e6ec) cell_qdial_pane_t3_ParamLimits

0x1e16,	// (0x0000e6ec) cell_qdial_pane_t3

0x0002,

0xf13e,	// (0x0001ba14) cell_qdial_pane_t_ParamLimits

0xf13e,	// (0x0001ba14) cell_qdial_pane_t

0x9cbf,	// (0x00016595) grid_highlight_pane_cp04

0xa0d9,	// (0x000169af) thumbnail_qdial_pane_ParamLimits

0xa0d9,	// (0x000169af) thumbnail_qdial_pane

0xa135,	// (0x00016a0b) list_help_pane

0xa13e,	// (0x00016a14) scroll_pane_cp02

0x1e29,	// (0x0000e6ff) help_list_pane_t1_ParamLimits

0x1e29,	// (0x0000e6ff) help_list_pane_t1

0xa147,	// (0x00016a1d) bg_notes_pane_g2

0xa14f,	// (0x00016a25) bg_notes_pane_g3

0xa157,	// (0x00016a2d) notes_bg_pane_g1

0xa15f,	// (0x00016a35) notes_bg_pane_g4

0xa167,	// (0x00016a3d) notes_bg_pane_g5

0xa16f,	// (0x00016a45) notes_bg_pane_g6

0xa177,	// (0x00016a4d) notes_bg_pane_g7

0xa17f,	// (0x00016a55) notes_bg_pane_g8

0xa187,	// (0x00016a5d) notes_bg_pane_g9

0x0006,

0xf15c,	// (0x0001ba32) notes_bg_pane_g

0x1e48,	// (0x0000e71e) list_notes_text_pane_ParamLimits

0x1e48,	// (0x0000e71e) list_notes_text_pane

0xa18f,	// (0x00016a65) list_notes_text_pane_g1

0xa198,	// (0x00016a6e) list_notes_text_pane_t1

0x1e5e,	// (0x0000e734) listscroll_cale_week_pane

0x1e8a,	// (0x0000e760) bg_cale_heading_pane

0xa1c0,	// (0x00016a96) bg_cale_pane_cp01

0x1ea2,	// (0x0000e778) cale_week_corner_pane

0x1ec1,	// (0x0000e797) cale_week_day_heading_pane

0x1ede,	// (0x0000e7b4) cale_week_scroll_pane_g1

0x1ef1,	// (0x0000e7c7) cale_week_scroll_pane_g2

0x1f09,	// (0x0000e7df) cale_week_scroll_pane_g3

0x1f21,	// (0x0000e7f7) cale_week_scroll_pane_g4

0x1f39,	// (0x0000e80f) cale_week_scroll_pane_g5

0x1f59,	// (0x0000e82f) cale_week_scroll_pane_g6

0x1f79,	// (0x0000e84f) cale_week_scroll_pane_g7

0x1f99,	// (0x0000e86f) cale_week_scroll_pane_g8

0x1fbd,	// (0x0000e893) cale_week_scroll_pane_g9

0x1fd5,	// (0x0000e8ab) cale_week_scroll_pane_g10

0x1fed,	// (0x0000e8c3) cale_week_scroll_pane_g11

0x2005,	// (0x0000e8db) cale_week_scroll_pane_g12

0x201d,	// (0x0000e8f3) cale_week_scroll_pane_g13

0x201d,	// (0x0000e8f3) cale_week_scroll_pane_g14

0x201d,	// (0x0000e8f3) cale_week_scroll_pane_g15

0x000f,

0xf16b,	// (0x0001ba41) cale_week_scroll_pane_g

0x2059,	// (0x0000e92f) cale_week_time_pane

0x207d,	// (0x0000e953) grid_cale_week_pane

0xa1ef,	// (0x00016ac5) scroll_pane_cp08

0x20a3,	// (0x0000e979) cell_cale_week_pane_ParamLimits

0x20a3,	// (0x0000e979) cell_cale_week_pane

0x2131,	// (0x0000ea07) cale_week_day_heading_pane_t1

0x215b,	// (0x0000ea31) cale_week_day_heading_pane_t2

0x218a,	// (0x0000ea60) cale_week_day_heading_pane_t3

0x21b9,	// (0x0000ea8f) cale_week_day_heading_pane_t4

0x21e8,	// (0x0000eabe) cale_week_day_heading_pane_t5

0x221f,	// (0x0000eaf5) cale_week_day_heading_pane_t6

0x2256,	// (0x0000eb2c) cale_week_day_heading_pane_t7

0x0006,

0xf18c,	// (0x0001ba62) cale_week_day_heading_pane_t

0xa20c,	// (0x00016ae2) bg_cale_side_pane

0x2280,	// (0x0000eb56) cale_week_time_pane_t1

0x229a,	// (0x0000eb70) cale_week_time_pane_t2

0x22b4,	// (0x0000eb8a) cale_week_time_pane_t3

0x22ce,	// (0x0000eba4) cale_week_time_pane_t4

0x22e8,	// (0x0000ebbe) cale_week_time_pane_t5

0x2302,	// (0x0000ebd8) cale_week_time_pane_t6

0x231c,	// (0x0000ebf2) cale_week_time_pane_t7

0x2336,	// (0x0000ec0c) cale_week_time_pane_t8

0x0007,

0xf19b,	// (0x0001ba71) cale_week_time_pane_t

0x2356,	// (0x0000ec2c) cell_cale_week_pane_g2

0x237a,	// (0x0000ec50) cell_cale_week_pane_g3_ParamLimits

0x237a,	// (0x0000ec50) cell_cale_week_pane_g3

0xa21a,	// (0x00016af0) grid_highlight_pane_cp07

0xa222,	// (0x00016af8) listscroll_gms_pane

0xa22c,	// (0x00016b02) grid_gms_pane

0xa235,	// (0x00016b0b) listscroll_gms_pane_g1

0xa23d,	// (0x00016b13) listscroll_gms_pane_g2

0x0001,

0xf1ac,	// (0x0001ba82) listscroll_gms_pane_g

0x2392,	// (0x0000ec68) scroll_pane_cp010

0x239d,	// (0x0000ec73) cell_gms_pane_ParamLimits

0x239d,	// (0x0000ec73) cell_gms_pane

0x23af,	// (0x0000ec85) cell_gms_pane_g1

0xa245,	// (0x00016b1b) cell_gms_pane_g2

0xa18f,	// (0x00016a65) cell_gms_pane_g3

0xa24d,	// (0x00016b23) cell_gms_pane_g4

0x0003,

0xf1b1,	// (0x0001ba87) cell_gms_pane_g

0xa256,	// (0x00016b2c) grid_highlight_pane_cp09

0x419e,	// (0x00010a74) phob_pre_status_pane_g1

0x41a6,	// (0x00010a7c) phob_pre_status_pane_g2

0x41ae,	// (0x00010a84) phob_pre_status_pane_g3

0x41b6,	// (0x00010a8c) phob_pre_status_pane_g4

0x0004,

0xf588,	// (0x0001be5e) phob_pre_status_pane_g

0x41c6,	// (0x00010a9c) phob_pre_status_pane_t1

0x41d4,	// (0x00010aaa) phob_pre_status_pane_t2

0x41e4,	// (0x00010aba) phob_pre_status_pane_t3

0x0002,

0xf593,	// (0x0001be69) phob_pre_status_pane_t

0xa25e,	// (0x00016b34) bg_list_pane_cp05

0x23bf,	// (0x0000ec95) grid_vorec_pane

0x23c7,	// (0x0000ec9d) vorec_t1

0x23d5,	// (0x0000ecab) vorec_t2

0x23e3,	// (0x0000ecb9) vorec_t3

0x23f1,	// (0x0000ecc7) vorec_t4

0x962f,	// (0x00015f05) vorec_t5

0x963d,	// (0x00015f13) vorec_t6

0x0004,

0xf1ba,	// (0x0001ba90) vorec_t

0x964b,	// (0x00015f21) wait_bar_pane_cp01

0x240d,	// (0x0000ece3) cell_vorec_pane_ParamLimits

0x240d,	// (0x0000ece3) cell_vorec_pane

0xa266,	// (0x00016b3c) cell_vorec_pane_g1

0x9cbf,	// (0x00016595) grid_highlight_pane_cp05

0x989e,	// (0x00016174) cams_zoom_pane

0x989e,	// (0x00016174) image_vga_pane

0x9f95,	// (0x0001686b) main_camera_pane_g1

0x9f95,	// (0x0001686b) main_camera_pane_g2

0x9f95,	// (0x0001686b) main_camera_pane_g3

0x9f95,	// (0x0001686b) main_camera_pane_g4

0x9f95,	// (0x0001686b) main_camera_pane_g5

0x9f95,	// (0x0001686b) main_camera_pane_g6

0x9f95,	// (0x0001686b) main_camera_pane_g7

0x0007,

0xf1c5,	// (0x0001ba9b) main_camera_pane_g

0xa270,	// (0x00016b46) main_camera_pane_t1

0xa270,	// (0x00016b46) main_camera_pane_t2

0x0001,

0xf1d6,	// (0x0001baac) main_camera_pane_t

0x2434,	// (0x0000ed0a) cams_zoom_pane_cp_ParamLimits

0x2434,	// (0x0000ed0a) cams_zoom_pane_cp

0x2468,	// (0x0000ed3e) image_cif_pane_ParamLimits

0x2468,	// (0x0000ed3e) image_cif_pane

0x982f,	// (0x00016105) image_subqcif_pane

0x247a,	// (0x0000ed50) main_video_pane_g1_ParamLimits

0x247a,	// (0x0000ed50) main_video_pane_g1

0x24a8,	// (0x0000ed7e) main_video_pane_g2_ParamLimits

0x24a8,	// (0x0000ed7e) main_video_pane_g2

0x24e2,	// (0x0000edb8) main_video_pane_g3_ParamLimits

0x24e2,	// (0x0000edb8) main_video_pane_g3

0x24e2,	// (0x0000edb8) main_video_pane_g4_ParamLimits

0x24e2,	// (0x0000edb8) main_video_pane_g4

0x2516,	// (0x0000edec) main_video_pane_g5_ParamLimits

0x2516,	// (0x0000edec) main_video_pane_g5

0xa284,	// (0x00016b5a) main_video_pane_g6_ParamLimits

0xa284,	// (0x00016b5a) main_video_pane_g6

0x0006,

0xf1db,	// (0x0001bab1) main_video_pane_g_ParamLimits

0xf1db,	// (0x0001bab1) main_video_pane_g

0x2532,	// (0x0000ee08) main_video_pane_t1_ParamLimits

0x2532,	// (0x0000ee08) main_video_pane_t1

0xa29e,	// (0x00016b74) cams_zoom_pane_g1

0xa29e,	// (0x00016b74) cams_zoom_pane_g2

0xa29e,	// (0x00016b74) cams_zoom_pane_g3

0xa29e,	// (0x00016b74) cams_zoom_pane_g4

0x0003,

0xf1ea,	// (0x0001bac0) cams_zoom_pane_g

0x258a,	// (0x0000ee60) grid_cams_pane

0x25a4,	// (0x0000ee7a) linegrid_cams_pane

0x25b7,	// (0x0000ee8d) cell_cams_pane_ParamLimits

0x25b7,	// (0x0000ee8d) cell_cams_pane

0xa2a8,	// (0x00016b7e) cams_burst_image_pane

0xa2b0,	// (0x00016b86) cell_cams_pane_g1

0x9cbf,	// (0x00016595) grid_highlight_pane_cp03

0x9f32,	// (0x00016808) mp_bg_pane_g1

0x982f,	// (0x00016105) bg_list_pane_cp03

0x982f,	// (0x00016105) bg_mp_pane

0x982f,	// (0x00016105) grid_mp_pane

0xa29e,	// (0x00016b74) media_player_g1

0xa7ff,	// (0x000170d5) media_player_t1

0xa7ff,	// (0x000170d5) media_player_t2

0xa7ff,	// (0x000170d5) media_player_t3

0xa7ff,	// (0x000170d5) media_player_t4

0xa7ff,	// (0x000170d5) media_player_t5

0xa7ff,	// (0x000170d5) media_player_t6

0xa7ff,	// (0x000170d5) media_player_t7

0x0006,

0xf572,	// (0x0001be48) media_player_t

0x982f,	// (0x00016105) wait_bar_pane_cp02

0xf557,	// (0x0001be2d) main_usb_pane_t

0xaada,	// (0x000173b0) cell_mp_pane

0x9f32,	// (0x00016808) cell_mp_pane_g1

0x9cbf,	// (0x00016595) grid_highlight_pane_cp06

0xa2b8,	// (0x00016b8e) grid_skin_colour_pane

0xa2c0,	// (0x00016b96) list_highlight_pane_cp03

0x25d7,	// (0x0000eead) skin_g1

0xa2c8,	// (0x00016b9e) skin_t1

0xa2d7,	// (0x00016bad) skin_t2

0x0001,

0xf218,	// (0x0001baee) skin_t

0x25df,	// (0x0000eeb5) cell_skin_colour_pane_ParamLimits

0x25df,	// (0x0000eeb5) cell_skin_colour_pane

0xa2e5,	// (0x00016bbb) cell_skin_colour_pane_g1

0x2658,	// (0x0000ef2e) call_video_g1_ParamLimits

0x2658,	// (0x0000ef2e) call_video_g1

0x2674,	// (0x0000ef4a) call_video_g2_ParamLimits

0x2674,	// (0x0000ef4a) call_video_g2

0x0001,

0xf21d,	// (0x0001baf3) call_video_g_ParamLimits

0xf21d,	// (0x0001baf3) call_video_g

0x26c6,	// (0x0000ef9c) call_video_uplink_pane_cp1_ParamLimits

0x26c6,	// (0x0000ef9c) call_video_uplink_pane_cp1

0xa2f7,	// (0x00016bcd) call_video_uplink_pane_cp2

0x2765,	// (0x0000f03b) video_down_crop_pane_ParamLimits

0x2765,	// (0x0000f03b) video_down_crop_pane

0x284e,	// (0x0000f124) video_down_pane_ParamLimits

0x284e,	// (0x0000f124) video_down_pane

0xa2ff,	// (0x00016bd5) video_down_subqcif_pane_ParamLimits

0xa2ff,	// (0x00016bd5) video_down_subqcif_pane

0xa317,	// (0x00016bed) video_down_subqcif_pane_cp_ParamLimits

0xa317,	// (0x00016bed) video_down_subqcif_pane_cp

0xa33d,	// (0x00016c13) im_reading_pane_ParamLimits

0xa33d,	// (0x00016c13) im_reading_pane

0x295e,	// (0x0000f234) im_writing_pane_ParamLimits

0x295e,	// (0x0000f234) im_writing_pane

0x2974,	// (0x0000f24a) im_reading_pane_t1

0xa357,	// (0x00016c2d) list_im_pane

0xa368,	// (0x00016c3e) scroll_pane_cp07

0x29ae,	// (0x0000f284) im_writing_pane_t1_ParamLimits

0x29ae,	// (0x0000f284) im_writing_pane_t1

0xa381,	// (0x00016c57) im_writing_pane_t2_ParamLimits

0xa381,	// (0x00016c57) im_writing_pane_t2

0x0001,

0xf227,	// (0x0001bafd) im_writing_pane_t_ParamLimits

0xf227,	// (0x0001bafd) im_writing_pane_t

0x9cbf,	// (0x00016595) input_focus_pane_cp04

0x9cbf,	// (0x00016595) input_focus_pane_cp05

0x29c3,	// (0x0000f299) list_im_single_pane_ParamLimits

0x29c3,	// (0x0000f299) list_im_single_pane

0x29d8,	// (0x0000f2ae) list_single_im_pane_t1

0xa25e,	// (0x00016b34) blid_accuracy_pane

0xa25e,	// (0x00016b34) blid_compass_pane

0xc0c9,	// (0x0001899f) main_location_t1

0xc0c9,	// (0x0001899f) main_location_t2

0xc0c9,	// (0x0001899f) main_location_t3

0x0002,

0xf581,	// (0x0001be57) main_location_t

0x9cbf,	// (0x00016595) aid_levels_location

0x9f32,	// (0x00016808) blid_accuracy_pane_g1

0x9f32,	// (0x00016808) blid_accuracy_pane_g2

0x0001,

0xf276,	// (0x0001bb4c) blid_accuracy_pane_g

0xa3c9,	// (0x00016c9f) wml_content_pane

0xa407,	// (0x00016cdd) wml_button_pane_ParamLimits

0xa407,	// (0x00016cdd) wml_button_pane

0x29e7,	// (0x0000f2bd) wml_list_single_large_pane_ParamLimits

0x29e7,	// (0x0000f2bd) wml_list_single_large_pane

0x29fc,	// (0x0000f2d2) wml_list_single_medium_pane_ParamLimits

0x29fc,	// (0x0000f2d2) wml_list_single_medium_pane

0x2a13,	// (0x0000f2e9) wml_list_single_small_pane_ParamLimits

0x2a13,	// (0x0000f2e9) wml_list_single_small_pane

0xa41b,	// (0x00016cf1) wml_selection_box_pane_ParamLimits

0xa41b,	// (0x00016cf1) wml_selection_box_pane

0xa42e,	// (0x00016d04) wml_list_single_pane_t1

0xa43d,	// (0x00016d13) wml_list_single_medium_pane_t1

0xa44c,	// (0x00016d22) wml_list_single_large_pane_t1

0xa45b,	// (0x00016d31) input_focus_pane_cp02_ParamLimits

0xa45b,	// (0x00016d31) input_focus_pane_cp02

0xa46e,	// (0x00016d44) wml_selection_box_pane_g1

0xa477,	// (0x00016d4d) wml_selection_box_pane_t1_ParamLimits

0xa477,	// (0x00016d4d) wml_selection_box_pane_t1

0x9f1a,	// (0x000167f0) bg_wml_button_pane_ParamLimits

0x9f1a,	// (0x000167f0) bg_wml_button_pane

0xa48f,	// (0x00016d65) wml_button_pane_g1

0xa497,	// (0x00016d6d) wml_button_pane_t1

0xa48f,	// (0x00016d65) wml_button_bg_pane_g1

0xa4a7,	// (0x00016d7d) wml_button_bg_pane_g2

0xa4af,	// (0x00016d85) wml_button_bg_pane_g3

0xa4b7,	// (0x00016d8d) wml_button_bg_pane_g4

0xa4bf,	// (0x00016d95) wml_button_bg_pane_g5

0xa4c7,	// (0x00016d9d) wml_button_bg_pane_g6

0xa4cf,	// (0x00016da5) wml_button_bg_pane_g7

0xa4d7,	// (0x00016dad) wml_button_bg_pane_g8

0xa4df,	// (0x00016db5) wml_button_bg_pane_g9

0x0008,

0xf22c,	// (0x0001bb02) wml_button_bg_pane_g

0x2a2c,	// (0x0000f302) bg_list_pane_cp02

0xa4e7,	// (0x00016dbd) mce_header_pane_ParamLimits

0xa4e7,	// (0x00016dbd) mce_header_pane

0xa4fd,	// (0x00016dd3) mce_icon_pane

0xa4fd,	// (0x00016dd3) mce_image_pane

0xa506,	// (0x00016ddc) mce_text_pane_ParamLimits

0xa506,	// (0x00016ddc) mce_text_pane

0x2a34,	// (0x0000f30a) scroll_pane_cp03

0xa3ff,	// (0x00016cd5) scroll_pane_cp04

0xa519,	// (0x00016def) scroll_pane_cp05_ParamLimits

0xa519,	// (0x00016def) scroll_pane_cp05

0x2a3e,	// (0x0000f314) mce_header_field_pane_ParamLimits

0x2a3e,	// (0x0000f314) mce_header_field_pane

0x2a55,	// (0x0000f32b) mce_header_field_pane_2_ParamLimits

0x2a55,	// (0x0000f32b) mce_header_field_pane_2

0x2a6b,	// (0x0000f341) mce_header_field_pane_3

0x2a73,	// (0x0000f349) list_single_mce_message_pane_ParamLimits

0x2a73,	// (0x0000f349) list_single_mce_message_pane

0x2a89,	// (0x0000f35f) list_single_mce_smart_pane_ParamLimits

0x2a89,	// (0x0000f35f) list_single_mce_smart_pane

0xa525,	// (0x00016dfb) input_focus_pane_cp03

0xa52e,	// (0x00016e04) list_header_data_pane

0x2aaa,	// (0x0000f380) mce_header_field_pane_t1

0x2aba,	// (0x0000f390) list_single_mce_header_pane_ParamLimits

0x2aba,	// (0x0000f390) list_single_mce_header_pane

0xa536,	// (0x00016e0c) list_single_mce_header_pane_t1

0xa545,	// (0x00016e1b) list_single_mce_message_pane_g1

0xa54d,	// (0x00016e23) list_single_mce_message_pane_t1

0x2af4,	// (0x0000f3ca) bg_cale_heading_pane_cp01_ParamLimits

0x2af4,	// (0x0000f3ca) bg_cale_heading_pane_cp01

0xa55b,	// (0x00016e31) bg_cale_pane_cp02_ParamLimits

0xa55b,	// (0x00016e31) bg_cale_pane_cp02

0x2b2e,	// (0x0000f404) cale_month_corner_pane

0x2b4d,	// (0x0000f423) cale_month_day_heading_pane_ParamLimits

0x2b4d,	// (0x0000f423) cale_month_day_heading_pane

0x2b9f,	// (0x0000f475) cale_month_pane_g1_ParamLimits

0x2b9f,	// (0x0000f475) cale_month_pane_g1

0x2bce,	// (0x0000f4a4) cale_month_pane_g2_ParamLimits

0x2bce,	// (0x0000f4a4) cale_month_pane_g2

0x2bfe,	// (0x0000f4d4) cale_month_pane_g3_ParamLimits

0x2bfe,	// (0x0000f4d4) cale_month_pane_g3

0x2c3a,	// (0x0000f510) cale_month_pane_g4_ParamLimits

0x2c3a,	// (0x0000f510) cale_month_pane_g4

0x2c76,	// (0x0000f54c) cale_month_pane_g5_ParamLimits

0x2c76,	// (0x0000f54c) cale_month_pane_g5

0x2cbe,	// (0x0000f594) cale_month_pane_g6_ParamLimits

0x2cbe,	// (0x0000f594) cale_month_pane_g6

0x2d0a,	// (0x0000f5e0) cale_month_pane_g7_ParamLimits

0x2d0a,	// (0x0000f5e0) cale_month_pane_g7

0x2d5a,	// (0x0000f630) cale_month_pane_g8_ParamLimits

0x2d5a,	// (0x0000f630) cale_month_pane_g8

0x2dae,	// (0x0000f684) cale_month_pane_g9_ParamLimits

0x2dae,	// (0x0000f684) cale_month_pane_g9

0x2e00,	// (0x0000f6d6) cale_month_pane_g10_ParamLimits

0x2e00,	// (0x0000f6d6) cale_month_pane_g10

0x2e52,	// (0x0000f728) cale_month_pane_g11_ParamLimits

0x2e52,	// (0x0000f728) cale_month_pane_g11

0x2ea4,	// (0x0000f77a) cale_month_pane_g12_ParamLimits

0x2ea4,	// (0x0000f77a) cale_month_pane_g12

0x2ef6,	// (0x0000f7cc) cale_month_pane_g13_ParamLimits

0x2ef6,	// (0x0000f7cc) cale_month_pane_g13

0x000c,

0xf23f,	// (0x0001bb15) cale_month_pane_g_ParamLimits

0xf23f,	// (0x0001bb15) cale_month_pane_g

0x2f48,	// (0x0000f81e) cale_month_week_pane

0x2f6c,	// (0x0000f842) grid_cale_month_pane_ParamLimits

0x2f6c,	// (0x0000f842) grid_cale_month_pane

0x2fb5,	// (0x0000f88b) cale_month_day_heading_pane_t1

0x2ff7,	// (0x0000f8cd) cale_month_day_heading_pane_t2

0x302c,	// (0x0000f902) cale_month_day_heading_pane_t3

0x3061,	// (0x0000f937) cale_month_day_heading_pane_t4

0x309e,	// (0x0000f974) cale_month_day_heading_pane_t5

0x30e3,	// (0x0000f9b9) cale_month_day_heading_pane_t6

0x3128,	// (0x0000f9fe) cale_month_day_heading_pane_t7

0x0006,

0xf25a,	// (0x0001bb30) cale_month_day_heading_pane_t

0xa20c,	// (0x00016ae2) bg_cale_side_pane_cp01

0x3175,	// (0x0000fa4b) cale_month_week_pane_t1

0x318e,	// (0x0000fa64) cale_month_week_pane_t2

0x31a7,	// (0x0000fa7d) cale_month_week_pane_t3

0x31c0,	// (0x0000fa96) cale_month_week_pane_t4

0x31d9,	// (0x0000faaf) cale_month_week_pane_t5

0x31f2,	// (0x0000fac8) cale_month_week_pane_t6

0x0005,

0xf269,	// (0x0001bb3f) cale_month_week_pane_t

0x320b,	// (0x0000fae1) cell_cale_month_pane_ParamLimits

0x320b,	// (0x0000fae1) cell_cale_month_pane

0xa59a,	// (0x00016e70) cell_cale_month_pane_g1

0x3339,	// (0x0000fc0f) cell_cale_month_pane_t1_ParamLimits

0x3339,	// (0x0000fc0f) cell_cale_month_pane_t1

0xa21a,	// (0x00016af0) grid_highlight_pane_cp08

0x9f32,	// (0x00016808) main_smil_g1

0x3365,	// (0x0000fc3b) smil_status_pane

0xa5a6,	// (0x00016e7c) smil_text_pane

0xbfa1,	// (0x00018877) bg_popup_call3_rect_pane_g8

0xbfa9,	// (0x0001887f) bg_popup_call3_rect_pane_g9

0x0008,

0xf502,	// (0x0001bdd8) bg_popup_call3_rect_pane_g

0xc1e6,	// (0x00018abc) smil_status_volume_pane_g1

0xa5b0,	// (0x00016e86) smil_status_pane_t1

0xc219,	// (0x00018aef) volume_smil_pane

0xa5c7,	// (0x00016e9d) list_smil_text_pane

0x337a,	// (0x0000fc50) scroll_pane_cp011

0x3385,	// (0x0000fc5b) smil_text_list_pane_t1_ParamLimits

0x3385,	// (0x0000fc5b) smil_text_list_pane_t1

0xa5d1,	// (0x00016ea7) aid_volume_smil_ParamLimits

0xa5d1,	// (0x00016ea7) aid_volume_smil

0x9f32,	// (0x00016808) smil_volume_pane_g1

0x9f32,	// (0x00016808) smil_volume_pane_g2

0x0001,

0xf276,	// (0x0001bb4c) smil_volume_pane_g

0x1e5e,	// (0x0000e734) listscroll_cale_day_pane

0xa5f3,	// (0x00016ec9) bg_cale_pane

0xa60b,	// (0x00016ee1) list_cale_pane

0xa62e,	// (0x00016f04) scroll_pane_cp09

0xa63f,	// (0x00016f15) cale_bg_pane_g1

0xa647,	// (0x00016f1d) cale_bg_pane_g2

0xa64f,	// (0x00016f25) cale_bg_pane_g3

0xa657,	// (0x00016f2d) cale_bg_pane_g4

0xa65f,	// (0x00016f35) cale_bg_pane_g5

0xa667,	// (0x00016f3d) cale_bg_pane_g6

0xa66f,	// (0x00016f45) cale_bg_pane_g7

0xa677,	// (0x00016f4d) cale_bg_pane_g8

0xa67f,	// (0x00016f55) cale_bg_pane_g9

0x0008,

0xf27b,	// (0x0001bb51) cale_bg_pane_g

0x33d1,	// (0x0000fca7) list_cale_time_pane_ParamLimits

0x33d1,	// (0x0000fca7) list_cale_time_pane

0xa687,	// (0x00016f5d) list_cale_time_pane_g1_ParamLimits

0xa687,	// (0x00016f5d) list_cale_time_pane_g1

0xa693,	// (0x00016f69) list_cale_time_pane_g2_ParamLimits

0xa693,	// (0x00016f69) list_cale_time_pane_g2

0x33e7,	// (0x0000fcbd) list_cale_time_pane_g3_ParamLimits

0x33e7,	// (0x0000fcbd) list_cale_time_pane_g3

0x33f5,	// (0x0000fccb) list_cale_time_pane_g4_ParamLimits

0x33f5,	// (0x0000fccb) list_cale_time_pane_g4

0x3403,	// (0x0000fcd9) list_cale_time_pane_g5_ParamLimits

0x3403,	// (0x0000fcd9) list_cale_time_pane_g5

0x0005,

0xf28e,	// (0x0001bb64) list_cale_time_pane_g_ParamLimits

0xf28e,	// (0x0001bb64) list_cale_time_pane_g

0xa6ad,	// (0x00016f83) list_cale_time_pane_t1_ParamLimits

0xa6ad,	// (0x00016f83) list_cale_time_pane_t1

0xa6d5,	// (0x00016fab) list_cale_time_pane_t2_ParamLimits

0xa6d5,	// (0x00016fab) list_cale_time_pane_t2

0x3690,	// (0x0000ff66) aid_blid_cardinal_pane

0x36ce,	// (0x0000ffa4) compass_pane_t4

0xa6fd,	// (0x00016fd3) list_cale_time_pane_t4_ParamLimits

0xa6fd,	// (0x00016fd3) list_cale_time_pane_t4

0x36dc,	// (0x0000ffb2) compass_pane_t5

0x36ea,	// (0x0000ffc0) compass_pane_t6

0x36f8,	// (0x0000ffce) compass_pane_t7

0xabf4,	// (0x000174ca) navi_pane_cc_t1

0xade3,	// (0x000176b9) aid_phob_thumbnail_center_pane

0x3b4c,	// (0x00010422) main_postcard_pane_g4_ParamLimits

0x0002,

0xf29b,	// (0x0001bb71) list_cale_time_pane_t_ParamLimits

0xf29b,	// (0x0001bb71) list_cale_time_pane_t

0x9916,	// (0x000161ec) bg_popup_window_pane_cp02_ParamLimits

0x9916,	// (0x000161ec) bg_popup_window_pane_cp02

0xa725,	// (0x00016ffb) heading_pane_cp01_ParamLimits

0xa725,	// (0x00016ffb) heading_pane_cp01

0xa731,	// (0x00017007) loc_req_pane_ParamLimits

0xa731,	// (0x00017007) loc_req_pane

0xa741,	// (0x00017017) loc_type_pane_ParamLimits

0xa741,	// (0x00017017) loc_type_pane

0xa753,	// (0x00017029) loc_type_pane_t1_ParamLimits

0xa753,	// (0x00017029) loc_type_pane_t1

0xa765,	// (0x0001703b) loc_type_pane_t2_ParamLimits

0xa765,	// (0x0001703b) loc_type_pane_t2

0xa777,	// (0x0001704d) loc_type_pane_t3_ParamLimits

0xa777,	// (0x0001704d) loc_type_pane_t3

0x0002,

0xf2a2,	// (0x0001bb78) loc_type_pane_t_ParamLimits

0xf2a2,	// (0x0001bb78) loc_type_pane_t

0xa789,	// (0x0001705f) list_loc_req_pane

0xa793,	// (0x00017069) scroll_pane_cp012

0x3411,	// (0x0000fce7) list_single_loc_request_popup_menu_pane_ParamLimits

0x3411,	// (0x0000fce7) list_single_loc_request_popup_menu_pane

0xa79e,	// (0x00017074) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa79e,	// (0x00017074) list_single_loc_request_popup_menu_pane_g1

0xa7aa,	// (0x00017080) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa7aa,	// (0x00017080) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf2a9,	// (0x0001bb7f) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf2a9,	// (0x0001bb7f) list_single_loc_request_popup_menu_pane_g

0xa7b6,	// (0x0001708c) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa7b6,	// (0x0001708c) list_single_loc_request_popup_menu_pane_t1

0x9f1a,	// (0x000167f0) bg_popup_window_pane_cp03_ParamLimits

0x9f1a,	// (0x000167f0) bg_popup_window_pane_cp03

0xa7cc,	// (0x000170a2) heading_loc_req_pane_ParamLimits

0xa7cc,	// (0x000170a2) heading_loc_req_pane

0x341e,	// (0x0000fcf4) popup_dyc_status_message_window_g1_ParamLimits

0x341e,	// (0x0000fcf4) popup_dyc_status_message_window_g1

0x3432,	// (0x0000fd08) popup_dyc_status_message_window_t1_ParamLimits

0x3432,	// (0x0000fd08) popup_dyc_status_message_window_t1

0x3447,	// (0x0000fd1d) popup_dyc_status_message_window_t2_ParamLimits

0x3447,	// (0x0000fd1d) popup_dyc_status_message_window_t2

0x345c,	// (0x0000fd32) popup_dyc_status_message_window_t3_ParamLimits

0x345c,	// (0x0000fd32) popup_dyc_status_message_window_t3

0x0002,

0xf2ae,	// (0x0001bb84) popup_dyc_status_message_window_t_ParamLimits

0xf2ae,	// (0x0001bb84) popup_dyc_status_message_window_t

0x9cbf,	// (0x00016595) bg_heading_pane_cp01

0xa7d8,	// (0x000170ae) heading_loc_req_pane_g1

0xa7e0,	// (0x000170b6) heading_loc_req_pane_g2

0xa7e8,	// (0x000170be) heading_loc_req_pane_g3

0x0002,

0xf2b5,	// (0x0001bb8b) heading_loc_req_pane_g

0xa7f0,	// (0x000170c6) heading_loc_req_pane_t1

0xa80f,	// (0x000170e5) bg_popup_sub_pane_cp01_ParamLimits

0xa80f,	// (0x000170e5) bg_popup_sub_pane_cp01

0xa81d,	// (0x000170f3) popup_cale_events_window_g1_ParamLimits

0xa81d,	// (0x000170f3) popup_cale_events_window_g1

0xa83d,	// (0x00017113) popup_cale_events_window_g2_ParamLimits

0xa83d,	// (0x00017113) popup_cale_events_window_g2

0x0001,

0xf2d7,	// (0x0001bbad) popup_cale_events_window_g_ParamLimits

0xf2d7,	// (0x0001bbad) popup_cale_events_window_g

0xa85d,	// (0x00017133) popup_cale_events_window_t1_ParamLimits

0xa85d,	// (0x00017133) popup_cale_events_window_t1

0xa86f,	// (0x00017145) popup_cale_events_window_t2_ParamLimits

0xa86f,	// (0x00017145) popup_cale_events_window_t2

0xa8ad,	// (0x00017183) popup_cale_events_window_t3_ParamLimits

0xa8ad,	// (0x00017183) popup_cale_events_window_t3

0xa8e7,	// (0x000171bd) popup_cale_events_window_t4_ParamLimits

0xa8e7,	// (0x000171bd) popup_cale_events_window_t4

0x0003,

0xf2dc,	// (0x0001bbb2) popup_cale_events_window_t_ParamLimits

0xf2dc,	// (0x0001bbb2) popup_cale_events_window_t

0x3484,	// (0x0000fd5a) call_type_pane

0x3494,	// (0x0000fd6a) popup_call_status_window_g1

0x34a8,	// (0x0000fd7e) popup_call_status_window_g2

0x34bc,	// (0x0000fd92) popup_call_status_window_g3

0x0002,

0xf2e5,	// (0x0001bbbb) popup_call_status_window_g

0xa91d,	// (0x000171f3) call_type_pane_g1

0xa926,	// (0x000171fc) call_type_pane_g2

0x0001,

0xf2ec,	// (0x0001bbc2) call_type_pane_g

0x9cbf,	// (0x00016595) bg_popup_sub_pane_cp02

0xa92f,	// (0x00017205) listscroll_popup_wml_pane

0xa937,	// (0x0001720d) list_wml_pane

0xa941,	// (0x00017217) scroll_pane_cp013

0xa94c,	// (0x00017222) list_single_graphic_popup_wml_pane_ParamLimits

0xa94c,	// (0x00017222) list_single_graphic_popup_wml_pane

0x9f32,	// (0x00016808) list_single_graphic_popup_wml_pane_g1

0xa960,	// (0x00017236) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2f1,	// (0x0001bbc7) list_single_graphic_popup_wml_pane_g

0xa968,	// (0x0001723e) list_single_graphic_popup_wml_pane_t1

0xa97e,	// (0x00017254) aid_call_pane

0x9f12,	// (0x000167e8) popup_clock_analogue_window_g1

0x9f12,	// (0x000167e8) popup_clock_analogue_window_g2

0xa986,	// (0x0001725c) popup_clock_analogue_window_g3

0xa986,	// (0x0001725c) popup_clock_analogue_window_g4

0x9f32,	// (0x00016808) popup_clock_analogue_window_g5

0x0004,

0xf2f6,	// (0x0001bbcc) popup_clock_analogue_window_g

0xa98e,	// (0x00017264) popup_clock_analogue_window_t1

0xa99c,	// (0x00017272) clock_digital_number_pane_ParamLimits

0xa99c,	// (0x00017272) clock_digital_number_pane

0xa9a8,	// (0x0001727e) clock_digital_number_pane_cp02_ParamLimits

0xa9a8,	// (0x0001727e) clock_digital_number_pane_cp02

0xa9b4,	// (0x0001728a) clock_digital_number_pane_cp03_ParamLimits

0xa9b4,	// (0x0001728a) clock_digital_number_pane_cp03

0xa9c0,	// (0x00017296) clock_digital_number_pane_cp04_ParamLimits

0xa9c0,	// (0x00017296) clock_digital_number_pane_cp04

0xa9cc,	// (0x000172a2) clock_digital_separator_pane_ParamLimits

0xa9cc,	// (0x000172a2) clock_digital_separator_pane

0xa9d8,	// (0x000172ae) popup_clock_digital_window_t1

0x9f32,	// (0x00016808) clock_digital_number_pane_g1

0x9f32,	// (0x00016808) clock_digital_number_pane_g2

0x0001,

0xf276,	// (0x0001bb4c) clock_digital_number_pane_g

0x9f32,	// (0x00016808) clock_digital_separator_pane_g1

0x9f32,	// (0x00016808) clock_digital_separator_pane_g2

0x0001,

0xf276,	// (0x0001bb4c) clock_digital_separator_pane_g

0x9cbf,	// (0x00016595) bg_popup_window_pane_cp04

0xa9f5,	// (0x000172cb) heading_pane_cp03

0xa25e,	// (0x00016b34) listscroll_popup_gms_pane

0x9cbf,	// (0x00016595) grid_large_graphic_popup_pane

0xa9fe,	// (0x000172d4) listscroll_popup_gms_pane_g1

0xaa07,	// (0x000172dd) listscroll_popup_gms_pane_g2

0x0001,

0xf301,	// (0x0001bbd7) listscroll_popup_gms_pane_g

0xaa10,	// (0x000172e6) scroll_pane_cp014

0x9f87,	// (0x0001685d) cell_large_graphic_popup_pane_ParamLimits

0x9f87,	// (0x0001685d) cell_large_graphic_popup_pane

0x9f95,	// (0x0001686b) cell_large_graphic_popup_pane_g1_ParamLimits

0x9f95,	// (0x0001686b) cell_large_graphic_popup_pane_g1

0xaa19,	// (0x000172ef) cell_large_graphic_popup_pane_g2_ParamLimits

0xaa19,	// (0x000172ef) cell_large_graphic_popup_pane_g2

0xaa27,	// (0x000172fd) cell_large_graphic_popup_pane_g3_ParamLimits

0xaa27,	// (0x000172fd) cell_large_graphic_popup_pane_g3

0xaa35,	// (0x0001730b) cell_large_graphic_popup_pane_g4_ParamLimits

0xaa35,	// (0x0001730b) cell_large_graphic_popup_pane_g4

0x0003,

0xf306,	// (0x0001bbdc) cell_large_graphic_popup_pane_g_ParamLimits

0xf306,	// (0x0001bbdc) cell_large_graphic_popup_pane_g

0x9cbf,	// (0x00016595) grid_highlight_pane_cp010

0x9f32,	// (0x00016808) bg_popup_call_pane_g1

0xaa46,	// (0x0001731c) list_single_graphic_popup_conf_pane_ParamLimits

0xaa46,	// (0x0001731c) list_single_graphic_popup_conf_pane

0xaa59,	// (0x0001732f) list_highlight_pane_cp01

0xaa62,	// (0x00017338) list_single_graphic_popup_conf_pane_g1

0xaa6a,	// (0x00017340) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf30f,	// (0x0001bbe5) list_single_graphic_popup_conf_pane_g

0xaa72,	// (0x00017348) list_single_graphic_popup_conf_pane_t1

0xaa80,	// (0x00017356) linegrid_cams_pane_g1

0x34cb,	// (0x0000fda1) linegrid_cams_pane_g2

0xa18f,	// (0x00016a65) linegrid_cams_pane_g3

0xaa89,	// (0x0001735f) linegrid_cams_pane_g4

0x34d4,	// (0x0000fdaa) linegrid_cams_pane_g5

0x34dd,	// (0x0000fdb3) linegrid_cams_pane_g6

0xa24d,	// (0x00016b23) linegrid_cams_pane_g7

0x0006,

0xf314,	// (0x0001bbea) linegrid_cams_pane_g

0xaa92,	// (0x00017368) popup_clock_analogue_window

0xaa92,	// (0x00017368) popup_clock_digital_window

0x9cbf,	// (0x00016595) popup_phob_thumbnail_window

0x9f32,	// (0x00016808) call_video_uplink_pane_g1

0xaa9b,	// (0x00017371) call_video_uplink_pane_g2

0x0001,

0xf323,	// (0x0001bbf9) call_video_uplink_pane_g

0xaaa3,	// (0x00017379) video_uplink_pane

0xaaab,	// (0x00017381) mce_image_pane_g1

0x34e8,	// (0x0000fdbe) mce_image_pane_g2

0x34f0,	// (0x0000fdc6) mce_image_pane_g3

0x34f8,	// (0x0000fdce) mce_image_pane_g4

0x3502,	// (0x0000fdd8) mce_image_pane_g5

0x0004,

0xf328,	// (0x0001bbfe) mce_image_pane_g

0xaab5,	// (0x0001738b) control_top_pane_stacon_cp01_ParamLimits

0xaab5,	// (0x0001738b) control_top_pane_stacon_cp01

0xaac9,	// (0x0001739f) uni_indicator_pane_stacon_cp01_ParamLimits

0xaac9,	// (0x0001739f) uni_indicator_pane_stacon_cp01

0xaada,	// (0x000173b0) bg_popup_sub_pane_cp03

0x350a,	// (0x0000fde0) chi_dic_find_pane

0x3512,	// (0x0000fde8) listscroll_chi_dic_pane

0x351b,	// (0x0000fdf1) main_pane_chidic_g1

0x352e,	// (0x0000fe04) chi_dic_find_pane_t1

0xaae4,	// (0x000173ba) find_chidic_pane

0xaaed,	// (0x000173c3) chi_dic_list_pane_ParamLimits

0xaaed,	// (0x000173c3) chi_dic_list_pane

0xaafe,	// (0x000173d4) scroll_pane_cp020

0x353c,	// (0x0000fe12) find_chidic_pane_t1

0x9cbf,	// (0x00016595) input_focus_pane_cp06

0x354b,	// (0x0000fe21) list_chi_dic_pane_ParamLimits

0x354b,	// (0x0000fe21) list_chi_dic_pane

0x355d,	// (0x0000fe33) list_chi_dic_pane_t1_ParamLimits

0x355d,	// (0x0000fe33) list_chi_dic_pane_t1

0x9cbf,	// (0x00016595) list_highlight_pane_cp020

0xab06,	// (0x000173dc) bg_cale_heading_pane_g1

0x3570,	// (0x0000fe46) bg_cale_heading_pane_g2

0x3578,	// (0x0000fe4e) bg_cale_heading_pane_g3

0x3580,	// (0x0000fe56) bg_cale_heading_pane_g4

0x358a,	// (0x0000fe60) bg_cale_heading_pane_g5

0x3594,	// (0x0000fe6a) bg_cale_heading_pane_g6

0x359c,	// (0x0000fe72) bg_cale_heading_pane_g7

0x35a4,	// (0x0000fe7a) bg_cale_heading_pane_g8

0x35ae,	// (0x0000fe84) bg_cale_heading_pane_g9

0x0008,

0xf333,	// (0x0001bc09) bg_cale_heading_pane_g

0xab06,	// (0x000173dc) bg_cale_side_pane_g1

0x35b8,	// (0x0000fe8e) bg_cale_side_pane_g2

0x35c0,	// (0x0000fe96) bg_cale_side_pane_g3

0x35c8,	// (0x0000fe9e) bg_cale_side_pane_g4

0x35d0,	// (0x0000fea6) bg_cale_side_pane_g5

0x35d8,	// (0x0000feae) bg_cale_side_pane_g6

0x35e0,	// (0x0000feb6) bg_cale_side_pane_g7

0x35e8,	// (0x0000febe) bg_cale_side_pane_g8

0x35f0,	// (0x0000fec6) bg_cale_side_pane_g9

0x0008,

0xf346,	// (0x0001bc1c) bg_cale_side_pane_g

0x35f8,	// (0x0000fece) popup_call_status_window_ParamLimits

0x35f8,	// (0x0000fece) popup_call_status_window

0xab0e,	// (0x000173e4) stacon_top_pane

0xab16,	// (0x000173ec) status_pane_ParamLimits

0xab16,	// (0x000173ec) status_pane

0xab2b,	// (0x00017401) status_small_pane

0xab33,	// (0x00017409) control_pane

0x9cbf,	// (0x00016595) stacon_bottom_pane

0xab3b,	// (0x00017411) list_single_mce_smart_pane_t1_ParamLimits

0xab3b,	// (0x00017411) list_single_mce_smart_pane_t1

0xab4e,	// (0x00017424) list_single_mce_smart_pane_t2_ParamLimits

0xab4e,	// (0x00017424) list_single_mce_smart_pane_t2

0x0001,

0xf359,	// (0x0001bc2f) list_single_mce_smart_pane_t_ParamLimits

0xf359,	// (0x0001bc2f) list_single_mce_smart_pane_t

0x363f,	// (0x0000ff15) compass_pane

0x3648,	// (0x0000ff1e) main_location2_pane_t1

0x365a,	// (0x0000ff30) main_location2_pane_t2

0x366c,	// (0x0000ff42) main_location2_pane_t3

0x0003,

0xf35e,	// (0x0001bc34) main_location2_pane_t

0xab6d,	// (0x00017443) compass_pane_g1_ParamLimits

0xab6d,	// (0x00017443) compass_pane_g1

0x36b0,	// (0x0000ff86) compass_pane_t1

0x36bf,	// (0x0000ff95) compass_pane_t2

0x0005,

0xf367,	// (0x0001bc3d) compass_pane_t

0x3706,	// (0x0000ffdc) text_secondary_cp61

0xabeb,	// (0x000174c1) navi_pane_cams_g5

0xac67,	// (0x0001753d) navi_pane_im_t1

0xac75,	// (0x0001754b) navi_pane_mp_g1_ParamLimits

0xac75,	// (0x0001754b) navi_pane_mp_g1

0xac89,	// (0x0001755f) navi_pane_mp_g2_ParamLimits

0xac89,	// (0x0001755f) navi_pane_mp_g2

0xac95,	// (0x0001756b) navi_pane_mp_g3_ParamLimits

0xac95,	// (0x0001756b) navi_pane_mp_g3

0x0002,

0xf37b,	// (0x0001bc51) navi_pane_mp_g_ParamLimits

0xf37b,	// (0x0001bc51) navi_pane_mp_g

0xaca1,	// (0x00017577) navi_pane_mp_t1

0xacaf,	// (0x00017585) navi_pane_mp_t2

0x0002,

0xf382,	// (0x0001bc58) navi_pane_mp_t

0xad1a,	// (0x000175f0) navi_pane_vt_g1

0xaca1,	// (0x00017577) navi_pane_vt_t1

0xad22,	// (0x000175f8) navi_slider_pane

0xa25e,	// (0x00016b34) zooming_pane

0xad32,	// (0x00017608) navi_slider_pane_g1

0xad3b,	// (0x00017611) navi_slider_pane_g2

0x0006,

0xf389,	// (0x0001bc5f) navi_slider_pane_g

0xad68,	// (0x0001763e) aid_levels_zoom

0xad70,	// (0x00017646) zooming_pane_g1

0xad78,	// (0x0001764e) zooming_pane_g2

0xad78,	// (0x0001764e) zooming_pane_g3

0x0002,

0xf398,	// (0x0001bc6e) zooming_pane_g

0xad80,	// (0x00017656) level_10_zoom

0xad89,	// (0x0001765f) level_11_zoom

0xad92,	// (0x00017668) level_1_zoom

0xad9b,	// (0x00017671) level_2_zoom

0xada4,	// (0x0001767a) level_3_zoom

0xadad,	// (0x00017683) level_4_zoom

0xadb6,	// (0x0001768c) level_5_zoom

0xadbf,	// (0x00017695) level_6_zoom

0xadc8,	// (0x0001769e) level_7_zoom

0xadd1,	// (0x000176a7) level_8_zoom

0xadda,	// (0x000176b0) level_9_zoom

0xadeb,	// (0x000176c1) popup_phob_thumbnail_window_g1

0xadf3,	// (0x000176c9) popup_phob_thumbnail_window_g2

0x0001,

0xf39f,	// (0x0001bc75) popup_phob_thumbnail_window_g

0x41f4,	// (0x00010aca) level_1_location

0x41fc,	// (0x00010ad2) level_2_location

0x4204,	// (0x00010ada) level_3_location

0x420c,	// (0x00010ae2) level_4_location

0xa25e,	// (0x00016b34) level_5_location

0x3757,	// (0x0001002d) mce_icon_pane_g1

0x3761,	// (0x00010037) mce_icon_pane_g2

0x0001,

0xf3a4,	// (0x0001bc7a) mce_icon_pane_g

0xadfb,	// (0x000176d1) main_mup_pane_g1_ParamLimits

0xadfb,	// (0x000176d1) main_mup_pane_g1

0xadfb,	// (0x000176d1) main_mup_pane_g2_ParamLimits

0xadfb,	// (0x000176d1) main_mup_pane_g2

0xadfb,	// (0x000176d1) main_mup_pane_g3_ParamLimits

0xadfb,	// (0x000176d1) main_mup_pane_g3

0xadfb,	// (0x000176d1) main_mup_pane_g4_ParamLimits

0xadfb,	// (0x000176d1) main_mup_pane_g4

0xadfb,	// (0x000176d1) main_mup_pane_g5_ParamLimits

0xadfb,	// (0x000176d1) main_mup_pane_g5

0xadfb,	// (0x000176d1) main_mup_pane_g6_ParamLimits

0xadfb,	// (0x000176d1) main_mup_pane_g6

0xadfb,	// (0x000176d1) main_mup_pane_g7_ParamLimits

0xadfb,	// (0x000176d1) main_mup_pane_g7

0xadfb,	// (0x000176d1) main_mup_pane_g8_ParamLimits

0xadfb,	// (0x000176d1) main_mup_pane_g8

0xadfb,	// (0x000176d1) main_mup_pane_g9_ParamLimits

0xadfb,	// (0x000176d1) main_mup_pane_g9

0xadfb,	// (0x000176d1) main_mup_pane_g10_ParamLimits

0xadfb,	// (0x000176d1) main_mup_pane_g10

0xadfb,	// (0x000176d1) main_mup_pane_g11_ParamLimits

0xadfb,	// (0x000176d1) main_mup_pane_g11

0x9f95,	// (0x0001686b) main_mup_pane_g12_ParamLimits

0x9f95,	// (0x0001686b) main_mup_pane_g12

0xadfb,	// (0x000176d1) main_mup_pane_g13_ParamLimits

0xadfb,	// (0x000176d1) main_mup_pane_g13

0x000c,

0xf3a9,	// (0x0001bc7f) main_mup_pane_g_ParamLimits

0xf3a9,	// (0x0001bc7f) main_mup_pane_g

0xae09,	// (0x000176df) main_mup_pane_t1_ParamLimits

0xae09,	// (0x000176df) main_mup_pane_t1

0xae09,	// (0x000176df) main_mup_pane_t2_ParamLimits

0xae09,	// (0x000176df) main_mup_pane_t2

0xae09,	// (0x000176df) main_mup_pane_t3_ParamLimits

0xae09,	// (0x000176df) main_mup_pane_t3

0xa270,	// (0x00016b46) main_mup_pane_t4_ParamLimits

0xa270,	// (0x00016b46) main_mup_pane_t4

0xa270,	// (0x00016b46) main_mup_pane_t5_ParamLimits

0xa270,	// (0x00016b46) main_mup_pane_t5

0xae1d,	// (0x000176f3) main_mup_pane_t6_ParamLimits

0xae1d,	// (0x000176f3) main_mup_pane_t6

0x0005,

0xf3c4,	// (0x0001bc9a) main_mup_pane_t_ParamLimits

0xf3c4,	// (0x0001bc9a) main_mup_pane_t

0x9f87,	// (0x0001685d) mup_progress_pane_ParamLimits

0x9f87,	// (0x0001685d) mup_progress_pane

0xae31,	// (0x00017707) mup_visualizer_pane_ParamLimits

0xae31,	// (0x00017707) mup_visualizer_pane

0xae31,	// (0x00017707) mup_volume_pane_ParamLimits

0xae31,	// (0x00017707) mup_volume_pane

0x9fa3,	// (0x00016879) mup_visualizer_pane_g1_ParamLimits

0x9fa3,	// (0x00016879) mup_visualizer_pane_g1

0xae3f,	// (0x00017715) mup_visualizer_pane_g2_ParamLimits

0xae3f,	// (0x00017715) mup_visualizer_pane_g2

0x9f95,	// (0x0001686b) mup_visualizer_pane_g3_ParamLimits

0x9f95,	// (0x0001686b) mup_visualizer_pane_g3

0x0002,

0xf3d1,	// (0x0001bca7) mup_visualizer_pane_g_ParamLimits

0xf3d1,	// (0x0001bca7) mup_visualizer_pane_g

0xa29e,	// (0x00016b74) mup_volume_pane_g1

0xa29e,	// (0x00016b74) mup_volume_pane_g2

0x0001,

0xf3d8,	// (0x0001bcae) mup_volume_pane_g

0xa29e,	// (0x00016b74) mup_progress_pane_g1

0xa29e,	// (0x00016b74) mup_progress_pane_g2

0xa29e,	// (0x00016b74) mup_progress_pane_g3

0x0002,

0xf3dd,	// (0x0001bcb3) mup_progress_pane_g

0x9cbf,	// (0x00016595) bg_popup_window_pane_cp05

0xae4d,	// (0x00017723) heading_pane_cp02_ParamLimits

0xae4d,	// (0x00017723) heading_pane_cp02

0xae67,	// (0x0001773d) list_popup_blid_pane

0xae6f,	// (0x00017745) list_blid_sat_info_pane_ParamLimits

0xae6f,	// (0x00017745) list_blid_sat_info_pane

0xae82,	// (0x00017758) list_blid_sat_info_pane_g1

0xae8a,	// (0x00017760) list_blid_sat_info_pane_t1

0x3861,	// (0x00010137) mup_equalizer_pane_ParamLimits

0x3861,	// (0x00010137) mup_equalizer_pane

0x387a,	// (0x00010150) mup_equalizer_pane_cp1_ParamLimits

0x387a,	// (0x00010150) mup_equalizer_pane_cp1

0x3897,	// (0x0001016d) mup_equalizer_pane_cp2_ParamLimits

0x3897,	// (0x0001016d) mup_equalizer_pane_cp2

0x38b4,	// (0x0001018a) mup_equalizer_pane_cp3_ParamLimits

0x38b4,	// (0x0001018a) mup_equalizer_pane_cp3

0x38d5,	// (0x000101ab) mup_equalizer_pane_cp4_ParamLimits

0x38d5,	// (0x000101ab) mup_equalizer_pane_cp4

0x38f6,	// (0x000101cc) mup_equalizer_pane_cp5

0x390a,	// (0x000101e0) mup_equalizer_pane_cp6

0x391e,	// (0x000101f4) mup_equalizer_pane_cp7

0xc021,	// (0x000188f7) bg_popup_call_poc_act_pane_g9

0xc029,	// (0x000188ff) bg_popup_call_poc_act_pane_g10

0xc031,	// (0x00018907) bg_popup_call_poc_act_pane_g11

0x000a,

0x9f1a,	// (0x000167f0) mup_scale_pane

0x9f32,	// (0x00016808) mup_scale_pane_g1

0xae98,	// (0x0001776e) mup_scale_pane_g2

0x0006,

0xf3f9,	// (0x0001bccf) mup_scale_pane_g

0xaebc,	// (0x00017792) msg_data_pane

0xaec4,	// (0x0001779a) scroll_pane_cp017

0x3944,	// (0x0001021a) bg_list_pane_cp04_ParamLimits

0x3944,	// (0x0001021a) bg_list_pane_cp04

0xaecc,	// (0x000177a2) msg_data_pane_g1

0x3964,	// (0x0001023a) msg_data_pane_g2

0x396c,	// (0x00010242) msg_data_pane_g3

0x3974,	// (0x0001024a) msg_data_pane_g4

0x397c,	// (0x00010252) msg_data_pane_g5

0x3984,	// (0x0001025a) msg_data_pane_g6

0x398c,	// (0x00010262) msg_data_pane_g7

0x0006,

0xf408,	// (0x0001bcde) msg_data_pane_g

0x3994,	// (0x0001026a) msg_text_pane_ParamLimits

0x3994,	// (0x0001026a) msg_text_pane

0x39c2,	// (0x00010298) qrid_highlight_pane_cp011_ParamLimits

0x39c2,	// (0x00010298) qrid_highlight_pane_cp011

0x9cbf,	// (0x00016595) msg_body_pane

0x9cbf,	// (0x00016595) msg_header_pane

0xaedd,	// (0x000177b3) input_focus_pane_cp07

0x39e6,	// (0x000102bc) msg_header_pane_t1_ParamLimits

0x39e6,	// (0x000102bc) msg_header_pane_t1

0x39fc,	// (0x000102d2) msg_header_pane_t2_ParamLimits

0x39fc,	// (0x000102d2) msg_header_pane_t2

0x0001,

0xf41c,	// (0x0001bcf2) msg_header_pane_t_ParamLimits

0xf41c,	// (0x0001bcf2) msg_header_pane_t

0xaef2,	// (0x000177c8) msg_body_pane_g1

0x3a13,	// (0x000102e9) msg_body_pane_t1_ParamLimits

0x3a13,	// (0x000102e9) msg_body_pane_t1

0x3a44,	// (0x0001031a) msg_body_pane_t2_ParamLimits

0x3a44,	// (0x0001031a) msg_body_pane_t2

0x3a56,	// (0x0001032c) msg_body_pane_t3_ParamLimits

0x3a56,	// (0x0001032c) msg_body_pane_t3

0x0002,

0xf421,	// (0x0001bcf7) msg_body_pane_t_ParamLimits

0xf421,	// (0x0001bcf7) msg_body_pane_t

0x3aa2,	// (0x00010378) main_viewer_pane_g1_ParamLimits

0x3aa2,	// (0x00010378) main_viewer_pane_g1

0x3ab0,	// (0x00010386) main_viewer_pane_g2_ParamLimits

0x3ab0,	// (0x00010386) main_viewer_pane_g2

0x3abe,	// (0x00010394) main_viewer_pane_g3_ParamLimits

0x3abe,	// (0x00010394) main_viewer_pane_g3

0x3acd,	// (0x000103a3) main_viewer_pane_g4_ParamLimits

0x3acd,	// (0x000103a3) main_viewer_pane_g4

0xaf12,	// (0x000177e8) main_viewer_pane_g5_ParamLimits

0xaf12,	// (0x000177e8) main_viewer_pane_g5

0xaf12,	// (0x000177e8) main_viewer_pane_g7_ParamLimits

0xaf12,	// (0x000177e8) main_viewer_pane_g7

0xaf24,	// (0x000177fa) main_viewer_pane_g8_ParamLimits

0xaf24,	// (0x000177fa) main_viewer_pane_g8

0x0007,

0xf431,	// (0x0001bd07) main_viewer_pane_g_ParamLimits

0xf431,	// (0x0001bd07) main_viewer_pane_g

0xaf3c,	// (0x00017812) viewer_content_pane_ParamLimits

0xaf3c,	// (0x00017812) viewer_content_pane

0x3b09,	// (0x000103df) main_postcard_pane_g1_ParamLimits

0x3b09,	// (0x000103df) main_postcard_pane_g1

0x3b1f,	// (0x000103f5) main_postcard_pane_g2_ParamLimits

0x3b1f,	// (0x000103f5) main_postcard_pane_g2

0x3b35,	// (0x0001040b) main_postcard_pane_g3_ParamLimits

0x3b35,	// (0x0001040b) main_postcard_pane_g3

0x0005,

0xf442,	// (0x0001bd18) main_postcard_pane_g_ParamLimits

0xf442,	// (0x0001bd18) main_postcard_pane_g

0x3b4c,	// (0x00010422) main_postcard_pane_g4

0xc1f9,	// (0x00018acf) smil_status_volume_pane_g2

0x3b8f,	// (0x00010465) postcard_pane_ParamLimits

0x3b8f,	// (0x00010465) postcard_pane

0xaf4a,	// (0x00017820) postcard_pane_g1_ParamLimits

0xaf4a,	// (0x00017820) postcard_pane_g1

0x3bd1,	// (0x000104a7) postcard_pane_g2_ParamLimits

0x3bd1,	// (0x000104a7) postcard_pane_g2

0x3bdd,	// (0x000104b3) postcard_pane_g3_ParamLimits

0x3bdd,	// (0x000104b3) postcard_pane_g3

0xaf58,	// (0x0001782e) postcard_pane_g4_ParamLimits

0xaf58,	// (0x0001782e) postcard_pane_g4

0x3be9,	// (0x000104bf) postcard_pane_g5_ParamLimits

0x3be9,	// (0x000104bf) postcard_pane_g5

0x3bfe,	// (0x000104d4) postcard_pane_g6_ParamLimits

0x3bfe,	// (0x000104d4) postcard_pane_g6

0xaf4a,	// (0x00017820) postcard_pane_g7_ParamLimits

0xaf4a,	// (0x00017820) postcard_pane_g7

0x0006,

0xf44f,	// (0x0001bd25) postcard_pane_g_ParamLimits

0xf44f,	// (0x0001bd25) postcard_pane_g

0x3c12,	// (0x000104e8) main_mp2_pane_g1_ParamLimits

0x3c12,	// (0x000104e8) main_mp2_pane_g1

0x3c1e,	// (0x000104f4) main_mp2_pane_g2_ParamLimits

0x3c1e,	// (0x000104f4) main_mp2_pane_g2

0x3c2a,	// (0x00010500) main_mp2_pane_g3_ParamLimits

0x3c2a,	// (0x00010500) main_mp2_pane_g3

0x0002,

0xf45e,	// (0x0001bd34) main_mp2_pane_g_ParamLimits

0xf45e,	// (0x0001bd34) main_mp2_pane_g

0x3c36,	// (0x0001050c) main_mp2_pane_t1_ParamLimits

0x3c36,	// (0x0001050c) main_mp2_pane_t1

0x3c4b,	// (0x00010521) main_mp2_pane_t2_ParamLimits

0x3c4b,	// (0x00010521) main_mp2_pane_t2

0x3c5d,	// (0x00010533) main_mp2_pane_t3_ParamLimits

0x3c5d,	// (0x00010533) main_mp2_pane_t3

0x0002,

0xf465,	// (0x0001bd3b) main_mp2_pane_t_ParamLimits

0xf465,	// (0x0001bd3b) main_mp2_pane_t

0xaf66,	// (0x0001783c) pec_content_pane_ParamLimits

0xaf66,	// (0x0001783c) pec_content_pane

0xa3ff,	// (0x00016cd5) scroll_pane_cp015

0xaf78,	// (0x0001784e) pec_attribute_pane_ParamLimits

0xaf78,	// (0x0001784e) pec_attribute_pane

0x3c6f,	// (0x00010545) pec_content_pane_g1_ParamLimits

0x3c6f,	// (0x00010545) pec_content_pane_g1

0xaf88,	// (0x0001785e) pec_content_pane_t1_ParamLimits

0xaf88,	// (0x0001785e) pec_content_pane_t1

0xaf9a,	// (0x00017870) pec_content_pane_t2_ParamLimits

0xaf9a,	// (0x00017870) pec_content_pane_t2

0x0001,

0xf46c,	// (0x0001bd42) pec_content_pane_t_ParamLimits

0xf46c,	// (0x0001bd42) pec_content_pane_t

0x3c7b,	// (0x00010551) list_single_graphic_pane_cp01_ParamLimits

0x3c7b,	// (0x00010551) list_single_graphic_pane_cp01

0x9f1a,	// (0x000167f0) bg_popup_sub_pane_cp04

0xafac,	// (0x00017882) popup_mup_playback_window_g1

0xafb8,	// (0x0001788e) popup_mup_playback_window_t1

0xafcd,	// (0x000178a3) popup_mup_playback_window_t2

0x0001,

0xf471,	// (0x0001bd47) popup_mup_playback_window_t

0xb004,	// (0x000178da) main_image_pane_g1_ParamLimits

0xb004,	// (0x000178da) main_image_pane_g1

0xb047,	// (0x0001791d) scroll_pane_cp018_ParamLimits

0xb047,	// (0x0001791d) scroll_pane_cp018

0xb05f,	// (0x00017935) scroll_pane_cp016_ParamLimits

0xb05f,	// (0x00017935) scroll_pane_cp016

0x3d49,	// (0x0001061f) smil2_image_pane_ParamLimits

0x3d49,	// (0x0001061f) smil2_image_pane

0x3d79,	// (0x0001064f) smil2_root_pane_ParamLimits

0x3d79,	// (0x0001064f) smil2_root_pane

0x3db1,	// (0x00010687) smil2_text_pane_ParamLimits

0x3db1,	// (0x00010687) smil2_text_pane

0x9cbf,	// (0x00016595) bg_list_pane_cp06

0xb09b,	// (0x00017971) grid_radio_pane

0x9cbf,	// (0x00016595) bg_popup_window_pane_cp06

0xb0a3,	// (0x00017979) main_fmradio_pane_t1

0xc079,	// (0x0001894f) heading_pane_cp04

0xb0b1,	// (0x00017987) main_fmradio_pane_t2

0xc081,	// (0x00018957) popup_cale_lunar_info_window_g1

0xb0bf,	// (0x00017995) main_fmradio_pane_t3

0xc089,	// (0x0001895f) popup_cale_lunar_info_window_g2

0xb0cd,	// (0x000179a3) main_fmradio_pane_t4

0x0001,

0xb0db,	// (0x000179b1) main_fmradio_pane_t5

0x0004,

0xf564,	// (0x0001be3a) popup_cale_lunar_info_window_g

0xf486,	// (0x0001bd5c) main_fmradio_pane_t

0xb0e9,	// (0x000179bf) wait_bar_pane_cp03

0xb0f1,	// (0x000179c7) cell_fmradio_pane_ParamLimits

0xb0f1,	// (0x000179c7) cell_fmradio_pane

0xaf4a,	// (0x00017820) cell_fmradio_pane_g1_ParamLimits

0xaf4a,	// (0x00017820) cell_fmradio_pane_g1

0x9cbf,	// (0x00016595) grid_highlight_pane_cp011

0xb104,	// (0x000179da) poc_content_pane_ParamLimits

0xb104,	// (0x000179da) poc_content_pane

0xb116,	// (0x000179ec) scroll_pane_cp019

0x3e31,	// (0x00010707) popup_call_poc_act_window_ParamLimits

0x3e31,	// (0x00010707) popup_call_poc_act_window

0x3e55,	// (0x0001072b) popup_call_poc_inact_window_ParamLimits

0x3e55,	// (0x0001072b) popup_call_poc_inact_window

0xf528,	// (0x0001bdfe) bg_popup_call_poc_act_pane_g

0xc039,	// (0x0001890f) bg_popup_call_poc_inact_pane_g1

0xc041,	// (0x00018917) bg_popup_call_poc_inact_pane_g2

0xb11e,	// (0x000179f4) popup_call_poc_act_window_g2

0xc049,	// (0x0001891f) bg_popup_call_poc_inact_pane_g3

0xbfc9,	// (0x0001889f) bg_popup_call_poc_inact_pane_g4

0xc051,	// (0x00018927) bg_popup_call_poc_inact_pane_g5

0xb126,	// (0x000179fc) popup_call_poc_act_window_t1_ParamLimits

0xb126,	// (0x000179fc) popup_call_poc_act_window_t1

0xb14e,	// (0x00017a24) popup_call_poc_act_window_t2_ParamLimits

0xb14e,	// (0x00017a24) popup_call_poc_act_window_t2

0xb176,	// (0x00017a4c) popup_call_poc_act_window_t3_ParamLimits

0xb176,	// (0x00017a4c) popup_call_poc_act_window_t3

0xb19e,	// (0x00017a74) popup_call_poc_act_window_t4_ParamLimits

0xb19e,	// (0x00017a74) popup_call_poc_act_window_t4

0x0003,

0xf491,	// (0x0001bd67) popup_call_poc_act_window_t_ParamLimits

0xf491,	// (0x0001bd67) popup_call_poc_act_window_t

0xc059,	// (0x0001892f) bg_popup_call_poc_inact_pane_g6

0xc061,	// (0x00018937) bg_popup_call_poc_inact_pane_g7

0xc069,	// (0x0001893f) bg_popup_call_poc_inact_pane_g8

0xb1b0,	// (0x00017a86) popup_call_poc_inact_window_g2

0xc071,	// (0x00018947) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf53f,	// (0x0001be15) bg_popup_call_poc_inact_pane_g

0xb1b8,	// (0x00017a8e) popup_call_poc_inact_window_t1_ParamLimits

0xb1b8,	// (0x00017a8e) popup_call_poc_inact_window_t1

0xb1cd,	// (0x00017aa3) popup_call_poc_inact_window_t2_ParamLimits

0xb1cd,	// (0x00017aa3) popup_call_poc_inact_window_t2

0xb1e2,	// (0x00017ab8) popup_call_poc_inact_window_t3_ParamLimits

0xb1e2,	// (0x00017ab8) popup_call_poc_inact_window_t3

0x0002,

0xf49a,	// (0x0001bd70) popup_call_poc_inact_window_t_ParamLimits

0xf49a,	// (0x0001bd70) popup_call_poc_inact_window_t

0xc171,	// (0x00018a47) context_pane_ParamLimits

0x46ca,	// (0x00010fa0) signal_pane_ParamLimits

0xa25e,	// (0x00016b34) main_call2_pane

0xc14a,	// (0x00018a20) popup_phob_thumbnail2_window_ParamLimits

0xc14a,	// (0x00018a20) popup_phob_thumbnail2_window

0xaefa,	// (0x000177d0) aid_hotspot_pointer_arrow_pane

0xaf02,	// (0x000177d8) aid_hotspot_pointer_hand_pane

0x41be,	// (0x00010a94) phob_pre_status_pane_g5

0x989e,	// (0x00016174) cams_zoom_pane_ParamLimits

0x989e,	// (0x00016174) image_vga_pane_ParamLimits

0x9f95,	// (0x0001686b) main_camera_pane_g1_ParamLimits

0x9f95,	// (0x0001686b) main_camera_pane_g2_ParamLimits

0x9f95,	// (0x0001686b) main_camera_pane_g3_ParamLimits

0x9f95,	// (0x0001686b) main_camera_pane_g4_ParamLimits

0x9f95,	// (0x0001686b) main_camera_pane_g5_ParamLimits

0x9f95,	// (0x0001686b) main_camera_pane_g6_ParamLimits

0x9f95,	// (0x0001686b) main_camera_pane_g7_ParamLimits

0xf1c5,	// (0x0001ba9b) main_camera_pane_g_ParamLimits

0xa270,	// (0x00016b46) main_camera_pane_t1_ParamLimits

0xa270,	// (0x00016b46) main_camera_pane_t2_ParamLimits

0xf1d6,	// (0x0001baac) main_camera_pane_t_ParamLimits

0x9f1a,	// (0x000167f0) bg_popup_preview_window_pane_cp01_ParamLimits

0x9f1a,	// (0x000167f0) bg_popup_preview_window_pane_cp01

0xb1f7,	// (0x00017acd) popup_phob_thumbnail2_window_g1_ParamLimits

0xb1f7,	// (0x00017acd) popup_phob_thumbnail2_window_g1

0x9cbf,	// (0x00016595) call2_cli_visual_pane

0x3e89,	// (0x0001075f) popup_call2_audio_conf_window_ParamLimits

0x3e89,	// (0x0001075f) popup_call2_audio_conf_window

0x3ea9,	// (0x0001077f) popup_call2_audio_first_window_ParamLimits

0x3ea9,	// (0x0001077f) popup_call2_audio_first_window

0x3f3f,	// (0x00010815) popup_call2_audio_in_window_ParamLimits

0x3f3f,	// (0x00010815) popup_call2_audio_in_window

0x3f87,	// (0x0001085d) popup_call2_audio_out_window_ParamLimits

0x3f87,	// (0x0001085d) popup_call2_audio_out_window

0x3ff1,	// (0x000108c7) popup_call2_audio_second_window_ParamLimits

0x3ff1,	// (0x000108c7) popup_call2_audio_second_window

0x4057,	// (0x0001092d) popup_call2_audio_wait_window_ParamLimits

0x4057,	// (0x0001092d) popup_call2_audio_wait_window

0x9cbf,	// (0x00016595) bg_popup_call2_act_pane_cp03

0x9efc,	// (0x000167d2) list_conf_pane_cp

0xb203,	// (0x00017ad9) popup_call2_audio_conf_window_t1

0xb211,	// (0x00017ae7) list_single_graphic_popup_conf2_pane_ParamLimits

0xb211,	// (0x00017ae7) list_single_graphic_popup_conf2_pane

0xaa59,	// (0x0001732f) list_highlight_pane_cp04

0xb224,	// (0x00017afa) list_single_graphic_popup_conf2_pane_g1

0xaa6a,	// (0x00017340) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4a1,	// (0x0001bd77) list_single_graphic_popup_conf2_pane_g

0xb22e,	// (0x00017b04) list_single_graphic_popup_conf2_pane_t1

0xb23c,	// (0x00017b12) bg_popup_call2_act_pane_cp01_ParamLimits

0xb23c,	// (0x00017b12) bg_popup_call2_act_pane_cp01

0xb2c6,	// (0x00017b9c) call_type_pane_cp05_ParamLimits

0xb2c6,	// (0x00017b9c) call_type_pane_cp05

0xb31a,	// (0x00017bf0) popup_call2_audio_second_window_g1_ParamLimits

0xb31a,	// (0x00017bf0) popup_call2_audio_second_window_g1

0xb36e,	// (0x00017c44) popup_call2_audio_second_window_g2_ParamLimits

0xb36e,	// (0x00017c44) popup_call2_audio_second_window_g2

0x0002,

0xf4a6,	// (0x0001bd7c) popup_call2_audio_second_window_g_ParamLimits

0xf4a6,	// (0x0001bd7c) popup_call2_audio_second_window_g

0xb3d3,	// (0x00017ca9) popup_call2_audio_second_window_t1_ParamLimits

0xb3d3,	// (0x00017ca9) popup_call2_audio_second_window_t1

0xb48e,	// (0x00017d64) popup_call2_audio_second_window_t2_ParamLimits

0xb48e,	// (0x00017d64) popup_call2_audio_second_window_t2

0xb4e1,	// (0x00017db7) popup_call2_audio_second_window_t3_ParamLimits

0xb4e1,	// (0x00017db7) popup_call2_audio_second_window_t3

0x0003,

0xf4ad,	// (0x0001bd83) popup_call2_audio_second_window_t_ParamLimits

0xf4ad,	// (0x0001bd83) popup_call2_audio_second_window_t

0x9cbf,	// (0x00016595) bg_popup_call2_in_pane_cp02

0x9cc9,	// (0x0001659f) call_type_pane_cp04

0x4091,	// (0x00010967) popup_call2_audio_wait_window_g1

0x4099,	// (0x0001096f) popup_call2_audio_wait_window_g2

0x0001,

0xf4b6,	// (0x0001bd8c) popup_call2_audio_wait_window_g

0x9ce1,	// (0x000165b7) popup_call2_audio_wait_window_t3

0xb5d4,	// (0x00017eaa) bg_popup_call2_act_pane_ParamLimits

0xb5d4,	// (0x00017eaa) bg_popup_call2_act_pane

0xb694,	// (0x00017f6a) call_type_pane_cp03_ParamLimits

0xb694,	// (0x00017f6a) call_type_pane_cp03

0xb6f8,	// (0x00017fce) popup_call2_audio_first_window_g1_ParamLimits

0xb6f8,	// (0x00017fce) popup_call2_audio_first_window_g1

0xb768,	// (0x0001803e) popup_call2_audio_first_window_g2_ParamLimits

0xb768,	// (0x0001803e) popup_call2_audio_first_window_g2

0xb7cc,	// (0x000180a2) popup_call2_audio_first_window_g3_ParamLimits

0xb7cc,	// (0x000180a2) popup_call2_audio_first_window_g3

0x0004,

0xf4bb,	// (0x0001bd91) popup_call2_audio_first_window_g_ParamLimits

0xf4bb,	// (0x0001bd91) popup_call2_audio_first_window_g

0xb854,	// (0x0001812a) popup_call2_audio_first_window_t1_ParamLimits

0xb854,	// (0x0001812a) popup_call2_audio_first_window_t1

0xb957,	// (0x0001822d) popup_call2_audio_first_window_t4_ParamLimits

0xb957,	// (0x0001822d) popup_call2_audio_first_window_t4

0xba3a,	// (0x00018310) popup_call2_audio_first_window_t5_ParamLimits

0xba3a,	// (0x00018310) popup_call2_audio_first_window_t5

0x0003,

0xf4c6,	// (0x0001bd9c) popup_call2_audio_first_window_t_ParamLimits

0xf4c6,	// (0x0001bd9c) popup_call2_audio_first_window_t

0x9f12,	// (0x000167e8) bg_popup_call2_act_pane_g1

0xc091,	// (0x00018967) popup_cale_lunar_info_window_t1

0xc09f,	// (0x00018975) popup_cale_lunar_info_window_t2

0xc0ad,	// (0x00018983) popup_cale_lunar_info_window_t3

0x9cbf,	// (0x00016595) bg_popup_call2_bubble_pane

0xbb3b,	// (0x00018411) bg_popup_call2_in_pane_cp01_ParamLimits

0xbb3b,	// (0x00018411) bg_popup_call2_in_pane_cp01

0x999b,	// (0x00016271) call_type_pane_cp02

0x40a1,	// (0x00010977) popup_call2_audio_out_window_g1_ParamLimits

0x40a1,	// (0x00010977) popup_call2_audio_out_window_g1

0xbb83,	// (0x00018459) popup_call2_audio_out_window_g2_ParamLimits

0xbb83,	// (0x00018459) popup_call2_audio_out_window_g2

0x40cd,	// (0x000109a3) popup_call2_audio_out_window_g3_ParamLimits

0x40cd,	// (0x000109a3) popup_call2_audio_out_window_g3

0x0003,

0xf4cf,	// (0x0001bda5) popup_call2_audio_out_window_g_ParamLimits

0xf4cf,	// (0x0001bda5) popup_call2_audio_out_window_g

0xbbba,	// (0x00018490) popup_call2_audio_out_window_t1_ParamLimits

0xbbba,	// (0x00018490) popup_call2_audio_out_window_t1

0xbc19,	// (0x000184ef) popup_call2_audio_out_window_t2_ParamLimits

0xbc19,	// (0x000184ef) popup_call2_audio_out_window_t2

0xbc6d,	// (0x00018543) popup_call2_audio_out_window_t3_ParamLimits

0xbc6d,	// (0x00018543) popup_call2_audio_out_window_t3

0xbc83,	// (0x00018559) popup_call2_audio_out_window_t4_ParamLimits

0xbc83,	// (0x00018559) popup_call2_audio_out_window_t4

0xbc99,	// (0x0001856f) popup_call2_audio_out_window_t5_ParamLimits

0xbc99,	// (0x0001856f) popup_call2_audio_out_window_t5

0x0005,

0xf4d8,	// (0x0001bdae) popup_call2_audio_out_window_t_ParamLimits

0xf4d8,	// (0x0001bdae) popup_call2_audio_out_window_t

0xbcfd,	// (0x000185d3) bg_popup_call2_in_pane_ParamLimits

0xbcfd,	// (0x000185d3) bg_popup_call2_in_pane

0xbd59,	// (0x0001862f) popup_call2_audio_in_window_g1_ParamLimits

0xbd59,	// (0x0001862f) popup_call2_audio_in_window_g1

0xbd91,	// (0x00018667) popup_call2_audio_in_window_g2_ParamLimits

0xbd91,	// (0x00018667) popup_call2_audio_in_window_g2

0xbdc9,	// (0x0001869f) popup_call2_audio_in_window_g3_ParamLimits

0xbdc9,	// (0x0001869f) popup_call2_audio_in_window_g3

0x0003,

0xf4e5,	// (0x0001bdbb) popup_call2_audio_in_window_g_ParamLimits

0xf4e5,	// (0x0001bdbb) popup_call2_audio_in_window_g

0xbe21,	// (0x000186f7) popup_call2_audio_in_window_t1_ParamLimits

0xbe21,	// (0x000186f7) popup_call2_audio_in_window_t1

0xbea1,	// (0x00018777) popup_call2_audio_in_window_t2_ParamLimits

0xbea1,	// (0x00018777) popup_call2_audio_in_window_t2

0xbf21,	// (0x000187f7) popup_call2_audio_in_window_t3_ParamLimits

0xbf21,	// (0x000187f7) popup_call2_audio_in_window_t3

0xbf3b,	// (0x00018811) popup_call2_audio_in_window_t4_ParamLimits

0xbf3b,	// (0x00018811) popup_call2_audio_in_window_t4

0xbf4d,	// (0x00018823) popup_call2_audio_in_window_t5_ParamLimits

0xbf4d,	// (0x00018823) popup_call2_audio_in_window_t5

0xbf5f,	// (0x00018835) popup_call2_audio_in_window_t6_ParamLimits

0xbf5f,	// (0x00018835) popup_call2_audio_in_window_t6

0x0005,

0xf4ee,	// (0x0001bdc4) popup_call2_audio_in_window_t_ParamLimits

0xf4ee,	// (0x0001bdc4) popup_call2_audio_in_window_t

0x9f12,	// (0x000167e8) bg_popup_call2_in_pane_g1

0xc0bb,	// (0x00018991) popup_cale_lunar_info_window_t4

0x0003,

0xf569,	// (0x0001be3f) popup_cale_lunar_info_window_t

0x9f1a,	// (0x000167f0) bg_popup_call2_rect_pane_ParamLimits

0x9f1a,	// (0x000167f0) bg_popup_call2_rect_pane

0x9cbf,	// (0x00016595) call2_cli_visual_graphic_pane

0x9cbf,	// (0x00016595) call2_cli_visual_text_pane

0xc20c,	// (0x00018ae2) smil_status_volume_pane_g3

0x0002,

0x9f32,	// (0x00016808) call2_cli_visual_graphic_pane_g1

0x9f32,	// (0x00016808) call2_cli_visual_graphic_pane_g2

0x9f32,	// (0x00016808) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4fb,	// (0x0001bdd1) call2_cli_visual_graphic_pane_g

0xbf71,	// (0x00018847) bg_popup_call2_rect_pane_g1

0xa12d,	// (0x00016a03) bg_popup_call2_rect_pane_g2

0xbf79,	// (0x0001884f) bg_popup_call2_rect_pane_g3

0xbf81,	// (0x00018857) bg_popup_call2_rect_pane_g4

0xbf89,	// (0x0001885f) bg_popup_call2_rect_pane_g5

0xbf91,	// (0x00018867) bg_popup_call2_rect_pane_g6

0xbf99,	// (0x0001886f) bg_popup_call2_rect_pane_g7

0xbfa1,	// (0x00018877) bg_popup_call2_rect_pane_g8

0xbfa9,	// (0x0001887f) bg_popup_call2_rect_pane_g9

0x0008,

0xf502,	// (0x0001bdd8) bg_popup_call2_rect_pane_g

0xbfb1,	// (0x00018887) bg_popup_call2_bubble_pane_g1

0xbfb9,	// (0x0001888f) bg_popup_call2_bubble_pane_g2

0xbfc1,	// (0x00018897) bg_popup_call2_bubble_pane_g3

0xbfc9,	// (0x0001889f) bg_popup_call2_bubble_pane_g4

0xbfd1,	// (0x000188a7) bg_popup_call2_bubble_pane_g5

0xbfd9,	// (0x000188af) bg_popup_call2_bubble_pane_g6

0xbfe1,	// (0x000188b7) bg_popup_call2_bubble_pane_g7

0xbfe9,	// (0x000188bf) bg_popup_call2_bubble_pane_g8

0xbff1,	// (0x000188c7) bg_popup_call2_bubble_pane_g9

0x0008,

0xf515,	// (0x0001bdeb) bg_popup_call2_bubble_pane_g

0x1e70,	// (0x0000e746) aid_cale_week_size_cell_pane

0x2420,	// (0x0000ecf6) aid_cams_cif_uncrop_pane_ParamLimits

0x2420,	// (0x0000ecf6) aid_cams_cif_uncrop_pane

0x2576,	// (0x0000ee4c) aid_cams_size_cell_ParamLimits

0x2576,	// (0x0000ee4c) aid_cams_size_cell

0x258a,	// (0x0000ee60) grid_cams_pane_ParamLimits

0x25a4,	// (0x0000ee7a) linegrid_cams_pane_ParamLimits

0x268a,	// (0x0000ef60) call_video_pane_t1

0x26a8,	// (0x0000ef7e) call_video_pane_t2

0x0001,

0xf222,	// (0x0001baf8) call_video_pane_t

0x2ace,	// (0x0000f3a4) aid_cale_month_size_cell_pane_ParamLimits

0x2ace,	// (0x0000f3a4) aid_cale_month_size_cell_pane

0xf5ad,	// (0x0001be83) smil_status_volume_pane_g

0xc219,	// (0x00018aef) volume_smil_pane_ParamLimits

0x9841,	// (0x00016117) aid_popup2_width_pane

0x1dd5,	// (0x0000e6ab) cell_qdial_pane_g4_ParamLimits

0x1dd5,	// (0x0000e6ab) cell_qdial_pane_g4

0x3690,	// (0x0000ff66) aid_blid_cardinal_pane_ParamLimits

0x369c,	// (0x0000ff72) aid_blid_destination_pane_ParamLimits

0x369c,	// (0x0000ff72) aid_blid_destination_pane

0x9f1a,	// (0x000167f0) bg_popup_call_poc_act_pane_ParamLimits

0x9f1a,	// (0x000167f0) bg_popup_call_poc_act_pane

0x9f1a,	// (0x000167f0) bg_popup_call_poc_inact_pane_ParamLimits

0x9f1a,	// (0x000167f0) bg_popup_call_poc_inact_pane

0xbff9,	// (0x000188cf) bg_popup_call_poc_act_pane_g1

0xc001,	// (0x000188d7) bg_popup_call_poc_act_pane_g2

0xc009,	// (0x000188df) bg_popup_call_poc_act_pane_g3

0xbfc9,	// (0x0001889f) bg_popup_call_poc_act_pane_g4

0xbfd1,	// (0x000188a7) bg_popup_call_poc_act_pane_g5

0xc011,	// (0x000188e7) bg_popup_call_poc_act_pane_g6

0xbfe1,	// (0x000188b7) bg_popup_call_poc_act_pane_g7

0xc019,	// (0x000188ef) bg_popup_call_poc_act_pane_g8

0x9cbf,	// (0x00016595) main_usb_pane

0xc125,	// (0x000189fb) popup_cale_lunar_info_window

0x2974,	// (0x0000f24a) im_reading_pane_t1_ParamLimits

0xa357,	// (0x00016c2d) list_im_pane_ParamLimits

0xa368,	// (0x00016c3e) scroll_pane_cp07_ParamLimits

0x9cbf,	// (0x00016595) grid_highlight_pane_cp012

0x9f1a,	// (0x000167f0) mup_scale_pane_ParamLimits

0xaf4a,	// (0x00017820) main_usb_pane_g1_ParamLimits

0xaf4a,	// (0x00017820) main_usb_pane_g1

0x411c,	// (0x000109f2) main_usb_pane_g2_ParamLimits

0x411c,	// (0x000109f2) main_usb_pane_g2

0x0001,

0xf552,	// (0x0001be28) main_usb_pane_g_ParamLimits

0xf552,	// (0x0001be28) main_usb_pane_g

0x4132,	// (0x00010a08) main_usb_pane_t1_ParamLimits

0x4132,	// (0x00010a08) main_usb_pane_t1

0x4144,	// (0x00010a1a) main_usb_pane_t2_ParamLimits

0x4144,	// (0x00010a1a) main_usb_pane_t2

0x4156,	// (0x00010a2c) main_usb_pane_t3_ParamLimits

0x4156,	// (0x00010a2c) main_usb_pane_t3

0x4168,	// (0x00010a3e) main_usb_pane_t4_ParamLimits

0x4168,	// (0x00010a3e) main_usb_pane_t4

0x417a,	// (0x00010a50) main_usb_pane_t5_ParamLimits

0x417a,	// (0x00010a50) main_usb_pane_t5

0x418c,	// (0x00010a62) main_usb_pane_t6_ParamLimits

0x418c,	// (0x00010a62) main_usb_pane_t6

0x0005,

0xf557,	// (0x0001be2d) main_usb_pane_t_ParamLimits

0x363f,	// (0x0000ff15) aid_text_placing

0x3648,	// (0x0000ff1e) main_location2_pane_t1_ParamLimits

0x365a,	// (0x0000ff30) main_location2_pane_t2_ParamLimits

0x366c,	// (0x0000ff42) main_location2_pane_t3_ParamLimits

0x367e,	// (0x0000ff54) main_location2_pane_t4_ParamLimits

0x367e,	// (0x0000ff54) main_location2_pane_t4

0xf35e,	// (0x0001bc34) main_location2_pane_t_ParamLimits

0x9f48,	// (0x0001681e) find_pinb_pane_g2_ParamLimits

0x9f48,	// (0x0001681e) find_pinb_pane_g2

0x0001,

0xf0da,	// (0x0001b9b0) find_pinb_pane_g_ParamLimits

0xf0da,	// (0x0001b9b0) find_pinb_pane_g

0x9f54,	// (0x0001682a) find_pinb_pane_t1_ParamLimits

0x9f66,	// (0x0001683c) find_pinb_pane_t2_ParamLimits

0xf0df,	// (0x0001b9b5) find_pinb_pane_t_ParamLimits

0x9cbf,	// (0x00016595) main_call3_pane

0x2fb5,	// (0x0000f88b) cale_month_day_heading_pane_t1_ParamLimits

0x2ff7,	// (0x0000f8cd) cale_month_day_heading_pane_t2_ParamLimits

0x302c,	// (0x0000f902) cale_month_day_heading_pane_t3_ParamLimits

0x3061,	// (0x0000f937) cale_month_day_heading_pane_t4_ParamLimits

0x309e,	// (0x0000f974) cale_month_day_heading_pane_t5_ParamLimits

0x30e3,	// (0x0000f9b9) cale_month_day_heading_pane_t6_ParamLimits

0x3128,	// (0x0000f9fe) cale_month_day_heading_pane_t7_ParamLimits

0xf25a,	// (0x0001bb30) cale_month_day_heading_pane_t_ParamLimits

0xa5be,	// (0x00016e94) smil_status_volume_pane

0x3bad,	// (0x00010483) postcard_address_pane_ParamLimits

0x3bad,	// (0x00010483) postcard_address_pane

0x3bbf,	// (0x00010495) postcard_message_pane_ParamLimits

0x3bbf,	// (0x00010495) postcard_message_pane

0x40f9,	// (0x000109cf) call2_cli_visual_pane_t1_ParamLimits

0x40f9,	// (0x000109cf) call2_cli_visual_pane_t1

0xc246,	// (0x00018b1c) postcard_message_pane_t1_ParamLimits

0xc246,	// (0x00018b1c) postcard_message_pane_t1

0xc22e,	// (0x00018b04) postcard_address_pane_t1_ParamLimits

0xc22e,	// (0x00018b04) postcard_address_pane_t1

0x487d,	// (0x00011153) popup_call3_audio_in_window_ParamLimits

0x487d,	// (0x00011153) popup_call3_audio_in_window

0x4708,	// (0x00010fde) bg_popup_call3_in_pane_ParamLimits

0x4708,	// (0x00010fde) bg_popup_call3_in_pane

0x477e,	// (0x00011054) popup_call3_audio_in_window_g1_ParamLimits

0x477e,	// (0x00011054) popup_call3_audio_in_window_g1

0x479e,	// (0x00011074) popup_call3_audio_in_window_g2_ParamLimits

0x479e,	// (0x00011074) popup_call3_audio_in_window_g2

0x47be,	// (0x00011094) popup_call3_audio_in_window_g3_ParamLimits

0x47be,	// (0x00011094) popup_call3_audio_in_window_g3

0x0003,

0xf5b4,	// (0x0001be8a) popup_call3_audio_in_window_g_ParamLimits

0xf5b4,	// (0x0001be8a) popup_call3_audio_in_window_g

0x47ef,	// (0x000110c5) popup_call3_audio_in_window_t1_ParamLimits

0x47ef,	// (0x000110c5) popup_call3_audio_in_window_t1

0x482d,	// (0x00011103) popup_call3_audio_in_window_t2_ParamLimits

0x482d,	// (0x00011103) popup_call3_audio_in_window_t2

0x486b,	// (0x00011141) popup_call3_audio_in_window_t3_ParamLimits

0x486b,	// (0x00011141) popup_call3_audio_in_window_t3

0x0002,

0xf5bd,	// (0x0001be93) popup_call3_audio_in_window_t_ParamLimits

0xf5bd,	// (0x0001be93) popup_call3_audio_in_window_t

0xa25e,	// (0x00016b34) bg_popup_call3_rect_pane

0xbf71,	// (0x00018847) bg_popup_call3_rect_pane_g1

0xa12d,	// (0x00016a03) bg_popup_call3_rect_pane_g2

0xbf79,	// (0x0001884f) bg_popup_call3_rect_pane_g3

0xbf81,	// (0x00018857) bg_popup_call3_rect_pane_g4

0xbf89,	// (0x0001885f) bg_popup_call3_rect_pane_g5

0xbf91,	// (0x00018867) bg_popup_call3_rect_pane_g6

0xbf99,	// (0x0001886f) bg_popup_call3_rect_pane_g7

0x982f,	// (0x00016105) mup_visualizer_osc_pane

0x982f,	// (0x00016105) mup_visualizer_spec_pane

0x4738,	// (0x0001100e) call3_video_qcif_pane_ParamLimits

0x4738,	// (0x0001100e) call3_video_qcif_pane

0x474b,	// (0x00011021) call3_video_qcif_uncrop_pane_ParamLimits

0x474b,	// (0x00011021) call3_video_qcif_uncrop_pane

0x4759,	// (0x0001102f) call3_video_subqcif_pane_ParamLimits

0x4759,	// (0x0001102f) call3_video_subqcif_pane

0x476d,	// (0x00011043) call3_video_subqcif_uncrop_pane_ParamLimits

0x476d,	// (0x00011043) call3_video_subqcif_uncrop_pane

0x47de,	// (0x000110b4) popup_call3_audio_in_window_g4_ParamLimits

0x47de,	// (0x000110b4) popup_call3_audio_in_window_g4

0x982f,	// (0x00016105) mup_spec_half_pane

0x982f,	// (0x00016105) mup_spec_half_pane_cp

0x982f,	// (0x00016105) mup_osc_middle_pane

0xa29e,	// (0x00016b74) mup_visualizer_osc_pane_g1

0xc1bf,	// (0x00018a95) mup_spec_bar_pane_ParamLimits

0xc1bf,	// (0x00018a95) mup_spec_bar_pane

0xa29e,	// (0x00016b74) mup_spec_bar_pane_g1

0xa29e,	// (0x00016b74) mup_spec_bar_pane_g2

0x0001,

0xf3d8,	// (0x0001bcae) mup_spec_bar_pane_g

0x1e70,	// (0x0000e746) aid_cale_week_size_cell_pane_ParamLimits

0x1e8a,	// (0x0000e760) bg_cale_heading_pane_ParamLimits

0xa1c0,	// (0x00016a96) bg_cale_pane_cp01_ParamLimits

0x1ea2,	// (0x0000e778) cale_week_corner_pane_ParamLimits

0x1ec1,	// (0x0000e797) cale_week_day_heading_pane_ParamLimits

0x1ede,	// (0x0000e7b4) cale_week_scroll_pane_g1_ParamLimits

0x1ef1,	// (0x0000e7c7) cale_week_scroll_pane_g2_ParamLimits

0x1f09,	// (0x0000e7df) cale_week_scroll_pane_g3_ParamLimits

0x1f21,	// (0x0000e7f7) cale_week_scroll_pane_g4_ParamLimits

0x1f39,	// (0x0000e80f) cale_week_scroll_pane_g5_ParamLimits

0x1f59,	// (0x0000e82f) cale_week_scroll_pane_g6_ParamLimits

0x1f79,	// (0x0000e84f) cale_week_scroll_pane_g7_ParamLimits

0x1f99,	// (0x0000e86f) cale_week_scroll_pane_g8_ParamLimits

0x1fbd,	// (0x0000e893) cale_week_scroll_pane_g9_ParamLimits

0x1fd5,	// (0x0000e8ab) cale_week_scroll_pane_g10_ParamLimits

0x1fed,	// (0x0000e8c3) cale_week_scroll_pane_g11_ParamLimits

0x2005,	// (0x0000e8db) cale_week_scroll_pane_g12_ParamLimits

0x201d,	// (0x0000e8f3) cale_week_scroll_pane_g13_ParamLimits

0x201d,	// (0x0000e8f3) cale_week_scroll_pane_g14_ParamLimits

0x201d,	// (0x0000e8f3) cale_week_scroll_pane_g15_ParamLimits

0xf16b,	// (0x0001ba41) cale_week_scroll_pane_g_ParamLimits

0x2059,	// (0x0000e92f) cale_week_time_pane_ParamLimits

0x207d,	// (0x0000e953) grid_cale_week_pane_ParamLimits

0xa1dd,	// (0x00016ab3) listscroll_cale_week_pane_t1

0xa1ef,	// (0x00016ac5) scroll_pane_cp08_ParamLimits

0x2b2e,	// (0x0000f404) cale_month_corner_pane_ParamLimits

0xa588,	// (0x00016e5e) cale_month_pane_t1

0x2f48,	// (0x0000f81e) cale_month_week_pane_ParamLimits

0x3494,	// (0x0000fd6a) popup_call_status_window_g1_ParamLimits

0x34a8,	// (0x0000fd7e) popup_call_status_window_g2_ParamLimits

0x34bc,	// (0x0000fd92) popup_call_status_window_g3_ParamLimits

0xf2e5,	// (0x0001bbbb) popup_call_status_window_g_ParamLimits

0xa976,	// (0x0001724c) aid_call2_pane

0x39d8,	// (0x000102ae) msg_header_pane_g1

0x3bad,	// (0x00010483) postcard_address2_pane_ParamLimits

0x3bad,	// (0x00010483) postcard_address2_pane

0x3bbf,	// (0x00010495) postcard_message2_pane_ParamLimits

0x3bbf,	// (0x00010495) postcard_message2_pane

0x46d8,	// (0x00010fae) message2_row_pane_ParamLimits

0x46d8,	// (0x00010fae) message2_row_pane

0x46f5,	// (0x00010fcb) address2_row_pane_ParamLimits

0x46f5,	// (0x00010fcb) address2_row_pane

0xc18c,	// (0x00018a62) postcard_message2_row_pane_g1

0xc194,	// (0x00018a6a) postcard_message2_row_pane_t1

0xc18c,	// (0x00018a62) address2_row_pane_g1

0xc194,	// (0x00018a6a) address2_row_pane_t1

0x23b7,	// (0x0000ec8d) aid_size_cell_vorec

0x9cbf,	// (0x00016595) main_rss_pane

0xc1a2,	// (0x00018a78) rss_list_single_pane_ParamLimits

0xc1a2,	// (0x00018a78) rss_list_single_pane

0xc1b0,	// (0x00018a86) rss_list_single_pane_t1

0xc1b0,	// (0x00018a86) rss_list_single_pane_t2

0x0001,

0xf5a8,	// (0x0001be7e) rss_list_single_pane_t

0x9cbf,	// (0x00016595) main_camera2_pane

0x9cbf,	// (0x00016595) main_video2_pane

0xc262,	// (0x00018b38) cams_zoom_pane_cp2_ParamLimits

0xc262,	// (0x00018b38) cams_zoom_pane_cp2

0xc262,	// (0x00018b38) image2_vga_pane_ParamLimits

0xc262,	// (0x00018b38) image2_vga_pane

0xcc48,	// (0x0001951e) main_camera2_pane_g1_ParamLimits

0xcc48,	// (0x0001951e) main_camera2_pane_g1

0xcc48,	// (0x0001951e) main_camera2_pane_g2_ParamLimits

0xcc48,	// (0x0001951e) main_camera2_pane_g2

0xcc48,	// (0x0001951e) main_camera2_pane_g3_ParamLimits

0xcc48,	// (0x0001951e) main_camera2_pane_g3

0xcc48,	// (0x0001951e) main_camera2_pane_g4_ParamLimits

0xcc48,	// (0x0001951e) main_camera2_pane_g4

0xcc48,	// (0x0001951e) main_camera2_pane_g5_ParamLimits

0xcc48,	// (0x0001951e) main_camera2_pane_g5

0xcc48,	// (0x0001951e) main_camera2_pane_g6_ParamLimits

0xcc48,	// (0x0001951e) main_camera2_pane_g6

0xcc48,	// (0x0001951e) main_camera2_pane_g7_ParamLimits

0xcc48,	// (0x0001951e) main_camera2_pane_g7

0xcc48,	// (0x0001951e) main_camera2_pane_g8_ParamLimits

0xcc48,	// (0x0001951e) main_camera2_pane_g8

0x0008,

0xf5c4,	// (0x0001be9a) main_camera2_pane_g_ParamLimits

0xf5c4,	// (0x0001be9a) main_camera2_pane_g

0x489f,	// (0x00011175) main_camera2_pane_t1_ParamLimits

0x489f,	// (0x00011175) main_camera2_pane_t1

0x489f,	// (0x00011175) main_camera2_pane_t2_ParamLimits

0x489f,	// (0x00011175) main_camera2_pane_t2

0x489f,	// (0x00011175) main_camera2_pane_t3_ParamLimits

0x489f,	// (0x00011175) main_camera2_pane_t3

0x489f,	// (0x00011175) main_camera2_pane_t4_ParamLimits

0x489f,	// (0x00011175) main_camera2_pane_t4

0x0006,

0xf5d7,	// (0x0001bead) main_camera2_pane_t_ParamLimits

0xf5d7,	// (0x0001bead) main_camera2_pane_t

0xcc56,	// (0x0001952c) cams_zoom_pane_cp4_ParamLimits

0xcc56,	// (0x0001952c) cams_zoom_pane_cp4

0xc284,	// (0x00018b5a) image2_cif_pane_ParamLimits

0xc284,	// (0x00018b5a) image2_cif_pane

0x989e,	// (0x00016174) image2_subqcif_pane_ParamLimits

0x989e,	// (0x00016174) image2_subqcif_pane

0x48b3,	// (0x00011189) main_video2_pane_g1_ParamLimits

0x48b3,	// (0x00011189) main_video2_pane_g1

0x48b3,	// (0x00011189) main_video2_pane_g2_ParamLimits

0x48b3,	// (0x00011189) main_video2_pane_g2

0x48b3,	// (0x00011189) main_video2_pane_g3_ParamLimits

0x48b3,	// (0x00011189) main_video2_pane_g3

0x48b3,	// (0x00011189) main_video2_pane_g4_ParamLimits

0x48b3,	// (0x00011189) main_video2_pane_g4

0x48b3,	// (0x00011189) main_video2_pane_g5_ParamLimits

0x48b3,	// (0x00011189) main_video2_pane_g5

0x48b3,	// (0x00011189) main_video2_pane_g6_ParamLimits

0x48b3,	// (0x00011189) main_video2_pane_g6

0x0005,

0xf5e6,	// (0x0001bebc) main_video2_pane_g_ParamLimits

0xf5e6,	// (0x0001bebc) main_video2_pane_g

0x48c1,	// (0x00011197) main_video2_pane_t1_ParamLimits

0x48c1,	// (0x00011197) main_video2_pane_t1

0x48c1,	// (0x00011197) main_video2_pane_t2_ParamLimits

0x48c1,	// (0x00011197) main_video2_pane_t2

0x48c1,	// (0x00011197) main_video2_pane_t3_ParamLimits

0x48c1,	// (0x00011197) main_video2_pane_t3

0x0002,

0xf5f3,	// (0x0001bec9) main_video2_pane_t_ParamLimits

0xf5f3,	// (0x0001bec9) main_video2_pane_t

0x4220,	// (0x00010af6) call_muted_g2

0x0001,

0xf59a,	// (0x0001be70) call_muted_g

0x9cbf,	// (0x00016595) main_mup2_pane

0xadfb,	// (0x000176d1) main_mup2_pane_g1_ParamLimits

0xadfb,	// (0x000176d1) main_mup2_pane_g1

0xadfb,	// (0x000176d1) main_mup2_pane_g2_ParamLimits

0xadfb,	// (0x000176d1) main_mup2_pane_g2

0xa29e,	// (0x00016b74) main_mup_pane_g13_cp1

0x982f,	// (0x00016105) mup_volume_pane_cp1

0xadfb,	// (0x000176d1) main_mup2_pane_g4_ParamLimits

0xadfb,	// (0x000176d1) main_mup2_pane_g4

0xadfb,	// (0x000176d1) main_mup2_pane_g5_ParamLimits

0xadfb,	// (0x000176d1) main_mup2_pane_g5

0xadfb,	// (0x000176d1) main_mup2_pane_g6_ParamLimits

0xadfb,	// (0x000176d1) main_mup2_pane_g6

0xadfb,	// (0x000176d1) main_mup2_pane_g7_ParamLimits

0xadfb,	// (0x000176d1) main_mup2_pane_g7

0x0006,

0xf5fa,	// (0x0001bed0) main_mup2_pane_g_ParamLimits

0xf5fa,	// (0x0001bed0) main_mup2_pane_g

0xae09,	// (0x000176df) main_mup2_pane_t1_ParamLimits

0xae09,	// (0x000176df) main_mup2_pane_t1

0xae09,	// (0x000176df) main_mup2_pane_t2_ParamLimits

0xae09,	// (0x000176df) main_mup2_pane_t2

0xae09,	// (0x000176df) main_mup2_pane_t3_ParamLimits

0xae09,	// (0x000176df) main_mup2_pane_t3

0xae09,	// (0x000176df) main_mup2_pane_t4_ParamLimits

0xae09,	// (0x000176df) main_mup2_pane_t4

0xae09,	// (0x000176df) main_mup2_pane_t5_ParamLimits

0xae09,	// (0x000176df) main_mup2_pane_t5

0xae09,	// (0x000176df) main_mup2_pane_t6_ParamLimits

0xae09,	// (0x000176df) main_mup2_pane_t6

0x0005,

0xf609,	// (0x0001bedf) main_mup2_pane_t_ParamLimits

0xf609,	// (0x0001bedf) main_mup2_pane_t

0xae31,	// (0x00017707) mup2_visualizer_pane_ParamLimits

0xae31,	// (0x00017707) mup2_visualizer_pane

0xae31,	// (0x00017707) mup_progress_pane_cp_ParamLimits

0xae31,	// (0x00017707) mup_progress_pane_cp

0xc292,	// (0x00018b68) mup_volume_pane_cp_ParamLimits

0xc292,	// (0x00018b68) mup_volume_pane_cp

0x9f95,	// (0x0001686b) mup2_visualizer_pane_g1_ParamLimits

0x9f95,	// (0x0001686b) mup2_visualizer_pane_g1

0x9fa3,	// (0x00016879) mup2_visualizer_pane_g2_ParamLimits

0x9fa3,	// (0x00016879) mup2_visualizer_pane_g2

0x9fa3,	// (0x00016879) mup2_visualizer_pane_g3_ParamLimits

0x9fa3,	// (0x00016879) mup2_visualizer_pane_g3

0x0002,

0xf0e4,	// (0x0001b9ba) mup2_visualizer_pane_g_ParamLimits

0xf0e4,	// (0x0001b9ba) mup2_visualizer_pane_g

0xb093,	// (0x00017969) aid_size_cell_fmradio

0x43d2,	// (0x00010ca8) aid_height_parent_landcape

0xa3e6,	// (0x00016cbc) wml_content_pane_cp

0xa3ee,	// (0x00016cc4) wml_tabs_pane

0xa3f7,	// (0x00016ccd) popup_wml_miniature_window

0xa3ff,	// (0x00016cd5) scroll_pane_cp021

0xa413,	// (0x00016ce9) wml_content_pane_comp8

0x9cbf,	// (0x00016595) bg_popup_sub_pane_cp05

0xc2a8,	// (0x00018b7e) popup_wml_miniature_window_g1

0xc2b0,	// (0x00018b86) wml_miniature_view_pane

0x48d5,	// (0x000111ab) aid_size_wml_view

0x48dd,	// (0x000111b3) wml_miniature_view_pane_g1

0x48e6,	// (0x000111bc) wml_miniature_view_pane_g2

0x48ef,	// (0x000111c5) wml_miniature_view_pane_g3

0x48f7,	// (0x000111cd) wml_miniature_view_pane_g4

0x48ff,	// (0x000111d5) wml_miniature_view_pane_g5

0x4907,	// (0x000111dd) wml_miniature_view_pane_g6

0x490f,	// (0x000111e5) wml_miniature_view_pane_g7

0x4917,	// (0x000111ed) wml_miniature_view_pane_g8

0x0007,

0xf616,	// (0x0001beec) wml_miniature_view_pane_g

0xc2b8,	// (0x00018b8e) background_graphic_ParamLimits

0xc2b8,	// (0x00018b8e) background_graphic

0xc2c4,	// (0x00018b9a) wml_tabs_2_pane

0xc2cd,	// (0x00018ba3) wml_tabs_3_pane_ParamLimits

0xc2cd,	// (0x00018ba3) wml_tabs_3_pane

0xc2df,	// (0x00018bb5) wml_tabs_4_pane_ParamLimits

0xc2df,	// (0x00018bb5) wml_tabs_4_pane

0xc2f5,	// (0x00018bcb) wml_tabs_5_pane_ParamLimits

0xc2f5,	// (0x00018bcb) wml_tabs_5_pane

0xc30f,	// (0x00018be5) wml_tabs_pane_g2_ParamLimits

0xc30f,	// (0x00018be5) wml_tabs_pane_g2

0xc324,	// (0x00018bfa) wml_tabs_pane_g3_ParamLimits

0xc324,	// (0x00018bfa) wml_tabs_pane_g3

0xc339,	// (0x00018c0f) wml_tabs_2_active_pane_ParamLimits

0xc339,	// (0x00018c0f) wml_tabs_2_active_pane

0xc339,	// (0x00018c0f) wml_tabs_2_passive_pane_ParamLimits

0xc339,	// (0x00018c0f) wml_tabs_2_passive_pane

0x491f,	// (0x000111f5) wml_tabs_3_active_pane_cp_ParamLimits

0x491f,	// (0x000111f5) wml_tabs_3_active_pane_cp

0x4934,	// (0x0001120a) wml_tabs_3_passive_pane_ParamLimits

0x4934,	// (0x0001120a) wml_tabs_3_passive_pane

0x4947,	// (0x0001121d) wml_tabs_3_passive_pane_cp_ParamLimits

0x4947,	// (0x0001121d) wml_tabs_3_passive_pane_cp

0x495e,	// (0x00011234) tabs_4_active_pane

0x4966,	// (0x0001123c) tabs_4_passive_pane

0x4970,	// (0x00011246) tabs_4_passive_pane_cp

0x4978,	// (0x0001124e) tabs_4_passive_pane_cp2

0x4114,	// (0x000109ea) aid_height_text

0xae31,	// (0x00017707) mup_volume_cont_pane_ParamLimits

0xae31,	// (0x00017707) mup_volume_cont_pane

0x982f,	// (0x00016105) aid_size_cell_pinb

0x982f,	// (0x00016105) aid_size_list_pinb

0xae31,	// (0x00017707) mup2_volume_cont_pane_ParamLimits

0xae31,	// (0x00017707) mup2_volume_cont_pane

0xc347,	// (0x00018c1d) mup2_volume_cont_pane_g1_ParamLimits

0xc347,	// (0x00018c1d) mup2_volume_cont_pane_g1

0x1871,	// (0x0000e147) aid_size_cell_touch_ParamLimits

0x1871,	// (0x0000e147) aid_size_cell_touch

0x1a9e,	// (0x0000e374) touch_pane_ParamLimits

0x1a9e,	// (0x0000e374) touch_pane

0x982f,	// (0x00016105) main_rss2_pane

0xc366,	// (0x00018c3c) listscroll_rss2_pane

0xc36f,	// (0x00018c45) rss2_navigation_pane

0xc377,	// (0x00018c4d) list_rss2_pane

0xaafe,	// (0x000173d4) scroll_pane_cp22

0xc37f,	// (0x00018c55) rss2_navigation_pane_g1

0xc388,	// (0x00018c5e) rss2_navigation_pane_g2

0xc390,	// (0x00018c66) rss2_navigation_pane_g3

0x0002,

0xf627,	// (0x0001befd) rss2_navigation_pane_g

0xc398,	// (0x00018c6e) rss2_navigation_pane_t1

0x4982,	// (0x00011258) rss2_list_single_pane_ParamLimits

0x4982,	// (0x00011258) rss2_list_single_pane

0xc3a6,	// (0x00018c7c) rss2_list_single_pane_t2

0xc3b4,	// (0x00018c8a) rss2_list_single_pane_t3_ParamLimits

0xc3b4,	// (0x00018c8a) rss2_list_single_pane_t3

0xc3d1,	// (0x00018ca7) rss2_list_single_pane_t4

0x3370,	// (0x0000fc46) smil_status_pane_g1

0x989e,	// (0x00016174) main_image2_pane_ParamLimits

0x989e,	// (0x00016174) main_image2_pane

0xcc48,	// (0x0001951e) main_camera2_pane_g9_ParamLimits

0xcc48,	// (0x0001951e) main_camera2_pane_g9

0x489f,	// (0x00011175) main_camera2_pane_t5_ParamLimits

0x489f,	// (0x00011175) main_camera2_pane_t5

0xc270,	// (0x00018b46) main_camera2_pane_t6_ParamLimits

0xc270,	// (0x00018b46) main_camera2_pane_t6

0x4998,	// (0x0001126e) main_image2_pane_g1_ParamLimits

0x4998,	// (0x0001126e) main_image2_pane_g1

0x3de7,	// (0x000106bd) smil2_video_pane_ParamLimits

0x3de7,	// (0x000106bd) smil2_video_pane

0x984d,	// (0x00016123) aid_zoom_text_primary_cp

0x9894,	// (0x0001616a) popup_preview_fixed_window

0xa34f,	// (0x00016c25) im_reading_pane_g1

0x4891,	// (0x00011167) cams2_bc_adjust_pane_cp_ParamLimits

0x4891,	// (0x00011167) cams2_bc_adjust_pane_cp

0xae31,	// (0x00017707) cams2_bc_adjust_pane_ParamLimits

0xae31,	// (0x00017707) cams2_bc_adjust_pane

0xa29e,	// (0x00016b74) cams2_bc_adjust_pane_g1

0x982f,	// (0x00016105) cams2_slider_pane

0xa29e,	// (0x00016b74) cams2_slider_pane_g1

0xa29e,	// (0x00016b74) cams2_slider_pane_g2

0x0006,

0xf62e,	// (0x0001bf04) cams2_slider_pane_g

0x1b67,	// (0x0000e43d) calc_display_pane_ParamLimits

0x1b8c,	// (0x0000e462) calc_paper_pane_ParamLimits

0x1baf,	// (0x0000e485) grid_calc_pane_ParamLimits

0xa9d8,	// (0x000172ae) popup_clock_digital_window_t1_ParamLimits

0xb030,	// (0x00017906) main_image_pane_t1

0x1b49,	// (0x0000e41f) aid_size_cell_calc_ParamLimits

0x1b49,	// (0x0000e41f) aid_size_cell_calc

0x4424,	// (0x00010cfa) popup_blid_sat_info2_window_ParamLimits

0x4424,	// (0x00010cfa) popup_blid_sat_info2_window

0xc3df,	// (0x00018cb5) aid_size_cell_blid

0xc284,	// (0x00018b5a) bg_popup_window_pane_cp07

0xc3fc,	// (0x00018cd2) grid_popup_blid_pane

0xc406,	// (0x00018cdc) heading_pane_cp05_ParamLimits

0xc406,	// (0x00018cdc) heading_pane_cp05

0xc4d0,	// (0x00018da6) cell_popup_blid_pane_ParamLimits

0xc4d0,	// (0x00018da6) cell_popup_blid_pane

0xc4f4,	// (0x00018dca) cell_popup_blid_pane_g1

0xc4fc,	// (0x00018dd2) cell_popup_blid_pane_t1

0xae31,	// (0x00017707) mup2_indicator_pane_ParamLimits

0xae31,	// (0x00017707) mup2_indicator_pane

0x982f,	// (0x00016105) mup2_visualizer_osc_pane

0xc292,	// (0x00018b68) mup2_visualizer_spec_pane_ParamLimits

0xc292,	// (0x00018b68) mup2_visualizer_spec_pane

0x982f,	// (0x00016105) mup2_spec_half_pane

0x982f,	// (0x00016105) mup2_spec_half_pane_cp

0xc50a,	// (0x00018de0) mup2_spec_bar_pane_ParamLimits

0xc50a,	// (0x00018de0) mup2_spec_bar_pane

0xa29e,	// (0x00016b74) mup2_spec_bar_pane_g1

0xc529,	// (0x00018dff) mup2_spec_bar_pane_g2

0x0001,

0xf654,	// (0x0001bf2a) mup2_spec_bar_pane_g

0x982f,	// (0x00016105) mup2_osc_middle_pane

0xa29e,	// (0x00016b74) mup2_visualizer_osc_pane_g1

0x98cc,	// (0x000161a2) popup_number_entry_window_t1_ParamLimits

0x98df,	// (0x000161b5) popup_number_entry_window_t2_ParamLimits

0x98f1,	// (0x000161c7) popup_number_entry_window_t3_ParamLimits

0x1af0,	// (0x0000e3c6) popup_number_entry_window_t5_ParamLimits

0x1af0,	// (0x0000e3c6) popup_number_entry_window_t5

0xf085,	// (0x0001b95b) popup_number_entry_window_t_ParamLimits

0x9903,	// (0x000161d9) text_title_cp2_ParamLimits

0xaf0a,	// (0x000177e0) aid_hotspot_pointer_text2_pane

0xaf30,	// (0x00017806) main_viewer_pane_g9_ParamLimits

0xaf30,	// (0x00017806) main_viewer_pane_g9

0xa588,	// (0x00016e5e) cale_month_pane_t1_ParamLimits

0xa5f3,	// (0x00016ec9) bg_cale_pane_ParamLimits

0xa60b,	// (0x00016ee1) list_cale_pane_ParamLimits

0xa61c,	// (0x00016ef2) listscroll_cale_day_pane_t1

0xa62e,	// (0x00016f04) scroll_pane_cp09_ParamLimits

0x3769,	// (0x0001003f) main_mup_eq_pane_t1_ParamLimits

0x3769,	// (0x0001003f) main_mup_eq_pane_t1

0x3783,	// (0x00010059) main_mup_eq_pane_t2_ParamLimits

0x3783,	// (0x00010059) main_mup_eq_pane_t2

0x379d,	// (0x00010073) main_mup_eq_pane_t3_ParamLimits

0x379d,	// (0x00010073) main_mup_eq_pane_t3

0x37b9,	// (0x0001008f) main_mup_eq_pane_t4_ParamLimits

0x37b9,	// (0x0001008f) main_mup_eq_pane_t4

0x37d5,	// (0x000100ab) main_mup_eq_pane_t5_ParamLimits

0x37d5,	// (0x000100ab) main_mup_eq_pane_t5

0x37f1,	// (0x000100c7) main_mup_eq_pane_t6_ParamLimits

0x37f1,	// (0x000100c7) main_mup_eq_pane_t6

0x3805,	// (0x000100db) main_mup_eq_pane_t7_ParamLimits

0x3805,	// (0x000100db) main_mup_eq_pane_t7

0x3819,	// (0x000100ef) main_mup_eq_pane_t8_ParamLimits

0x3819,	// (0x000100ef) main_mup_eq_pane_t8

0x382d,	// (0x00010103) main_mup_eq_pane_t9_ParamLimits

0x382d,	// (0x00010103) main_mup_eq_pane_t9

0x3847,	// (0x0001011d) main_mup_eq_pane_t10_ParamLimits

0x3847,	// (0x0001011d) main_mup_eq_pane_t10

0x0009,

0xf3e4,	// (0x0001bcba) main_mup_eq_pane_t_ParamLimits

0xf3e4,	// (0x0001bcba) main_mup_eq_pane_t

0x38f6,	// (0x000101cc) mup_equalizer_pane_cp5_ParamLimits

0x390a,	// (0x000101e0) mup_equalizer_pane_cp6_ParamLimits

0x391e,	// (0x000101f4) mup_equalizer_pane_cp7_ParamLimits

0x982f,	// (0x00016105) main_gallery_pane

0xc1de,	// (0x00018ab4) smil2_volume_pane

0xc1e6,	// (0x00018abc) smil_status_volume_pane_g1_ParamLimits

0xc1f9,	// (0x00018acf) smil_status_volume_pane_g2_ParamLimits

0xc20c,	// (0x00018ae2) smil_status_volume_pane_g3_ParamLimits

0xf5ad,	// (0x0001be83) smil_status_volume_pane_g_ParamLimits

0xc284,	// (0x00018b5a) bg_popup_window_pane_cp07_ParamLimits

0xc3e7,	// (0x00018cbd) blid_firmament_pane

0x989e,	// (0x00016174) aid_size_cell_gallery_ParamLimits

0x989e,	// (0x00016174) aid_size_cell_gallery

0x989e,	// (0x00016174) grid_gallery_pane_ParamLimits

0x989e,	// (0x00016174) grid_gallery_pane

0xc284,	// (0x00018b5a) cell_gallery_pane_ParamLimits

0xc284,	// (0x00018b5a) cell_gallery_pane

0x989e,	// (0x00016174) bg_cell_gallery_focus_pane_ParamLimits

0x989e,	// (0x00016174) bg_cell_gallery_focus_pane

0x9f95,	// (0x0001686b) cell_gallery_pane_g1_ParamLimits

0x9f95,	// (0x0001686b) cell_gallery_pane_g1

0x9f95,	// (0x0001686b) cell_gallery_pane_g2_ParamLimits

0x9f95,	// (0x0001686b) cell_gallery_pane_g2

0x9f95,	// (0x0001686b) cell_gallery_pane_g3_ParamLimits

0x9f95,	// (0x0001686b) cell_gallery_pane_g3

0x9fa3,	// (0x00016879) cell_gallery_pane_g4_ParamLimits

0x9fa3,	// (0x00016879) cell_gallery_pane_g4

0x0003,

0xf659,	// (0x0001bf2f) cell_gallery_pane_g_ParamLimits

0xf659,	// (0x0001bf2f) cell_gallery_pane_g

0xc533,	// (0x00018e09) bg_cell_gallery_focus_pane_g1

0xc53b,	// (0x00018e11) bg_cell_gallery_focus_pane_g2

0xc543,	// (0x00018e19) bg_cell_gallery_focus_pane_g3

0xc54b,	// (0x00018e21) bg_cell_gallery_focus_pane_g4

0xc553,	// (0x00018e29) bg_cell_gallery_focus_pane_g5

0xc55b,	// (0x00018e31) bg_cell_gallery_focus_pane_g6

0xc563,	// (0x00018e39) bg_cell_gallery_focus_pane_g7

0xc56b,	// (0x00018e41) bg_cell_gallery_focus_pane_g8

0x0007,

0xf662,	// (0x0001bf38) bg_cell_gallery_focus_pane_g

0xc573,	// (0x00018e49) aid_firma_cardinal

0xc587,	// (0x00018e5d) blid_firmament_pane_t1

0xc59e,	// (0x00018e74) blid_firmament_pane_t2

0xc5b5,	// (0x00018e8b) blid_firmament_pane_t3

0xc5cc,	// (0x00018ea2) blid_firmament_pane_t4

0x0003,

0xf673,	// (0x0001bf49) blid_firmament_pane_t

0xc5e3,	// (0x00018eb9) blid_sat_info_pane

0xa29e,	// (0x00016b74) blid_sat_info_pane_g1

0xa29e,	// (0x00016b74) blid_sat_info_pane_g2

0x0001,

0xf3d8,	// (0x0001bcae) blid_sat_info_pane_g

0xc5f3,	// (0x00018ec9) blid_sat_info_pane_t1

0xc601,	// (0x00018ed7) smil2_volume_content_pane

0xc60a,	// (0x00018ee0) smil2_volume_pane_g1

0xa0c4,	// (0x0001699a) smil2_volume_content_pane_g1

0xc612,	// (0x00018ee8) smil2_volume_content_pane_g2

0xc61b,	// (0x00018ef1) smil2_volume_content_pane_g3

0xc624,	// (0x00018efa) smil2_volume_content_pane_g4

0xc62d,	// (0x00018f03) smil2_volume_content_pane_g5

0xc636,	// (0x00018f0c) smil2_volume_content_pane_g6

0xc63f,	// (0x00018f15) smil2_volume_content_pane_g7

0xc648,	// (0x00018f1e) smil2_volume_content_pane_g8

0xc651,	// (0x00018f27) smil2_volume_content_pane_g9

0xc65a,	// (0x00018f30) smil2_volume_content_pane_g10

0x0009,

0xf67c,	// (0x0001bf52) smil2_volume_content_pane_g

0x2131,	// (0x0000ea07) cale_week_day_heading_pane_t1_ParamLimits

0x215b,	// (0x0000ea31) cale_week_day_heading_pane_t2_ParamLimits

0x218a,	// (0x0000ea60) cale_week_day_heading_pane_t3_ParamLimits

0x21b9,	// (0x0000ea8f) cale_week_day_heading_pane_t4_ParamLimits

0x21e8,	// (0x0000eabe) cale_week_day_heading_pane_t5_ParamLimits

0x221f,	// (0x0000eaf5) cale_week_day_heading_pane_t6_ParamLimits

0x2256,	// (0x0000eb2c) cale_week_day_heading_pane_t7_ParamLimits

0xf18c,	// (0x0001ba62) cale_week_day_heading_pane_t_ParamLimits

0xa20c,	// (0x00016ae2) bg_cale_side_pane_ParamLimits

0x2280,	// (0x0000eb56) cale_week_time_pane_t1_ParamLimits

0x229a,	// (0x0000eb70) cale_week_time_pane_t2_ParamLimits

0x22b4,	// (0x0000eb8a) cale_week_time_pane_t3_ParamLimits

0x22ce,	// (0x0000eba4) cale_week_time_pane_t4_ParamLimits

0x22e8,	// (0x0000ebbe) cale_week_time_pane_t5_ParamLimits

0x2302,	// (0x0000ebd8) cale_week_time_pane_t6_ParamLimits

0x231c,	// (0x0000ebf2) cale_week_time_pane_t7_ParamLimits

0x2336,	// (0x0000ec0c) cale_week_time_pane_t8_ParamLimits

0xf19b,	// (0x0001ba71) cale_week_time_pane_t_ParamLimits

0x2356,	// (0x0000ec2c) cell_cale_week_pane_g2_ParamLimits

0xa20c,	// (0x00016ae2) bg_cale_side_pane_cp01_ParamLimits

0x3175,	// (0x0000fa4b) cale_month_week_pane_t1_ParamLimits

0x318e,	// (0x0000fa64) cale_month_week_pane_t2_ParamLimits

0x31a7,	// (0x0000fa7d) cale_month_week_pane_t3_ParamLimits

0x31c0,	// (0x0000fa96) cale_month_week_pane_t4_ParamLimits

0x31d9,	// (0x0000faaf) cale_month_week_pane_t5_ParamLimits

0x31f2,	// (0x0000fac8) cale_month_week_pane_t6_ParamLimits

0xf269,	// (0x0001bb3f) cale_month_week_pane_t_ParamLimits

0xa59a,	// (0x00016e70) cell_cale_month_pane_g1_ParamLimits

0x982f,	// (0x00016105) main_cale_event_viewer_pane

0x982f,	// (0x00016105) listscroll_cale_event_viewer_pane

0xc663,	// (0x00018f39) list_cale_ev_pane

0xc66b,	// (0x00018f41) scroll_pane_cp023

0xc677,	// (0x00018f4d) field_cale_ev_pane_ParamLimits

0xc677,	// (0x00018f4d) field_cale_ev_pane

0xc695,	// (0x00018f6b) field_cale_ev_content_pane_ParamLimits

0xc695,	// (0x00018f6b) field_cale_ev_content_pane

0xc6a1,	// (0x00018f77) field_cale_ev_pane_g1_ParamLimits

0xc6a1,	// (0x00018f77) field_cale_ev_pane_g1

0xc6ad,	// (0x00018f83) field_cale_ev_pane_g2_ParamLimits

0xc6ad,	// (0x00018f83) field_cale_ev_pane_g2

0xc6c5,	// (0x00018f9b) field_cale_ev_pane_g3_ParamLimits

0xc6c5,	// (0x00018f9b) field_cale_ev_pane_g3

0x0002,

0xf691,	// (0x0001bf67) field_cale_ev_pane_g_ParamLimits

0xf691,	// (0x0001bf67) field_cale_ev_pane_g

0xc6dd,	// (0x00018fb3) field_cale_ev_pane_t1_ParamLimits

0xc6dd,	// (0x00018fb3) field_cale_ev_pane_t1

0xc6f4,	// (0x00018fca) field_cale_ev_content_pane_t1_ParamLimits

0xc6f4,	// (0x00018fca) field_cale_ev_content_pane_t1

0xaed4,	// (0x000177aa) bg_button_pane_cp01

0x1e5e,	// (0x0000e734) listscroll_cale_week_pane_ParamLimits

0xa1b7,	// (0x00016a8d) popup_toolbar_window_cp01

0xa1dd,	// (0x00016ab3) listscroll_cale_week_pane_t1_ParamLimits

0x1e5e,	// (0x0000e734) listscroll_cale_day_pane_ParamLimits

0xa1b7,	// (0x00016a8d) popup_toolbar_window_cp02

0xa61c,	// (0x00016ef2) listscroll_cale_day_pane_t1_ParamLimits

0x1e5e,	// (0x0000e734) main_cale_month_pane_ParamLimits

0xc15c,	// (0x00018a32) popup_toolbar_window_cp03_ParamLimits

0xc15c,	// (0x00018a32) popup_toolbar_window_cp03

0x3caf,	// (0x00010585) main_image_pane_g2_ParamLimits

0x3caf,	// (0x00010585) main_image_pane_g2

0x3cc0,	// (0x00010596) main_image_pane_g3_ParamLimits

0x3cc0,	// (0x00010596) main_image_pane_g3

0x0002,

0xf476,	// (0x0001bd4c) main_image_pane_g_ParamLimits

0xf476,	// (0x0001bd4c) main_image_pane_g

0xb030,	// (0x00017906) main_image_pane_t1_ParamLimits

0x3cd1,	// (0x000105a7) main_image_pane_t2_ParamLimits

0x3cd1,	// (0x000105a7) main_image_pane_t2

0x3ce3,	// (0x000105b9) main_image_pane_t3_ParamLimits

0x3ce3,	// (0x000105b9) main_image_pane_t3

0x3d0b,	// (0x000105e1) main_image_pane_t4_ParamLimits

0x3d0b,	// (0x000105e1) main_image_pane_t4

0x0003,

0xf47d,	// (0x0001bd53) main_image_pane_t_ParamLimits

0xf47d,	// (0x0001bd53) main_image_pane_t

0x3d2b,	// (0x00010601) popup_image_details_window_cp01

0x3d35,	// (0x0001060b) popup_toobar_trans_pane_cp01_ParamLimits

0x3d35,	// (0x0001060b) popup_toobar_trans_pane_cp01

0x44f5,	// (0x00010dcb) popup_image_details_window_ParamLimits

0x44f5,	// (0x00010dcb) popup_image_details_window

0xc12f,	// (0x00018a05) popup_image_focus_window

0xc262,	// (0x00018b38) camera2_autofocus_pane_ParamLimits

0xc262,	// (0x00018b38) camera2_autofocus_pane

0x982f,	// (0x00016105) bg_popup_sub_pane_cp06

0xc712,	// (0x00018fe8) popup_image_focus_window_g1

0xc71a,	// (0x00018ff0) popup_image_focus_window_g2

0xc722,	// (0x00018ff8) popup_image_focus_window_g3

0xc72a,	// (0x00019000) popup_image_focus_window_g4

0x0003,

0xf698,	// (0x0001bf6e) popup_image_focus_window_g

0xc732,	// (0x00019008) popup_image_focus_window_t1

0xc740,	// (0x00019016) popup_image_focus_window_t2

0xc750,	// (0x00019026) popup_image_focus_window_t3

0x0002,

0xf6a1,	// (0x0001bf77) popup_image_focus_window_t

0x9f95,	// (0x0001686b) camera2_autofocus_pane_g1

0x989e,	// (0x00016174) bg_tb_trans_pane_cp01

0xc75e,	// (0x00019034) popup_image_details_window_g1

0xc771,	// (0x00019047) popup_image_details_window_g2

0x0002,

0xf6b3,	// (0x0001bf89) popup_image_details_window_g

0xc79a,	// (0x00019070) popup_image_details_window_t1

0xc7ac,	// (0x00019082) popup_image_details_window_t2

0xc7c5,	// (0x0001909b) popup_image_details_window_t3

0xc7d9,	// (0x000190af) popup_image_details_window_t4

0xc7f4,	// (0x000190ca) popup_image_details_window_t5

0x0004,

0xf6ba,	// (0x0001bf90) popup_image_details_window_t

0x9ffb,	// (0x000168d1) bg_calc_paper_pane_ParamLimits

0x982f,	// (0x00016105) grid_highlight_pane_cp013

0xa00f,	// (0x000168e5) list_calc_pane_ParamLimits

0xa021,	// (0x000168f7) scroll_pane_cp024

0xa029,	// (0x000168ff) bg_calc_display_pane_ParamLimits

0x1cad,	// (0x0000e583) calc_display_pane_t1_ParamLimits

0x1cbf,	// (0x0000e595) calc_display_pane_t2_ParamLimits

0xa035,	// (0x0001690b) calc_display_pane_t3_ParamLimits

0xf10c,	// (0x0001b9e2) calc_display_pane_t_ParamLimits

0x1d79,	// (0x0000e64f) cell_calc_pane_g2

0x0001,

0xf129,	// (0x0001b9ff) cell_calc_pane_g

0x1d82,	// (0x0000e658) cell_calc_pane_t1

0xa0a2,	// (0x00016978) grid_highlight_pane_cp02_ParamLimits

0xa0b8,	// (0x0001698e) toolbar_button_pane_cp01_ParamLimits

0xa0b8,	// (0x0001698e) toolbar_button_pane_cp01

0xb075,	// (0x0001794b) temp_image_control_pane_ParamLimits

0xb075,	// (0x0001794b) temp_image_control_pane

0x989e,	// (0x00016174) main_mp3_pane

0xc80e,	// (0x000190e4) temp_image_control_pane_g1_ParamLimits

0xc80e,	// (0x000190e4) temp_image_control_pane_g1

0xc81c,	// (0x000190f2) temp_image_control_pane_g2_ParamLimits

0xc81c,	// (0x000190f2) temp_image_control_pane_g2

0xc82e,	// (0x00019104) temp_image_control_pane_g3_ParamLimits

0xc82e,	// (0x00019104) temp_image_control_pane_g3

0x49ae,	// (0x00011284) temp_image_control_pane_g4_ParamLimits

0x49ae,	// (0x00011284) temp_image_control_pane_g4

0x0003,

0xf6c5,	// (0x0001bf9b) temp_image_control_pane_g_ParamLimits

0xf6c5,	// (0x0001bf9b) temp_image_control_pane_g

0xc80e,	// (0x000190e4) main_mp3_pane_g1

0x49c1,	// (0x00011297) main_mp3_pane_g2

0x0007,

0xf6ce,	// (0x0001bfa4) main_mp3_pane_g

0xc863,	// (0x00019139) main_mp3_pane_t1

0x9fa3,	// (0x00016879) main_camera_pane_g8_ParamLimits

0x9fa3,	// (0x00016879) main_camera_pane_g8

0x2524,	// (0x0000edfa) main_video_pane_g7_ParamLimits

0x2524,	// (0x0000edfa) main_video_pane_g7

0xae1d,	// (0x000176f3) main_camera2_pane_t7_ParamLimits

0xae1d,	// (0x000176f3) main_camera2_pane_t7

0xa3a6,	// (0x00016c7c) scroll_pane_cp025_ParamLimits

0xa3a6,	// (0x00016c7c) scroll_pane_cp025

0xa3ba,	// (0x00016c90) scroll_pane_cp026_ParamLimits

0xa3ba,	// (0x00016c90) scroll_pane_cp026

0xa3c9,	// (0x00016c9f) wml_content_pane_ParamLimits

0x982f,	// (0x00016105) main_touch_calib_pane

0x4a95,	// (0x0001136b) main_touch_calib_pane_g1

0x4aa7,	// (0x0001137d) main_touch_calib_pane_g2

0x4ab9,	// (0x0001138f) main_touch_calib_pane_g3

0x4acb,	// (0x000113a1) main_touch_calib_pane_g4

0x0003,

0xf6ec,	// (0x0001bfc2) main_touch_calib_pane_g

0x4add,	// (0x000113b3) main_touch_calib_pane_t1

0x4af7,	// (0x000113cd) main_touch_calib_pane_t2

0x0004,

0xf6f5,	// (0x0001bfcb) main_touch_calib_pane_t

0xabcd,	// (0x000174a3) mup_progress_pane_cp02

0xac02,	// (0x000174d8) navi_pane_g1

0xacbd,	// (0x00017593) navi_pane_mp_t3

0x989e,	// (0x00016174) main_mp3_pane_ParamLimits

0x4680,	// (0x00010f56) navi_pane_ParamLimits

0xc80e,	// (0x000190e4) main_mp3_pane_g1_ParamLimits

0x49c1,	// (0x00011297) main_mp3_pane_g2_ParamLimits

0x49cf,	// (0x000112a5) main_mp3_pane_g3_ParamLimits

0x49cf,	// (0x000112a5) main_mp3_pane_g3

0x49dd,	// (0x000112b3) main_mp3_pane_g4_ParamLimits

0x49dd,	// (0x000112b3) main_mp3_pane_g4

0x9f95,	// (0x0001686b) main_mp3_pane_g5_ParamLimits

0x9f95,	// (0x0001686b) main_mp3_pane_g5

0xc83e,	// (0x00019114) main_mp3_pane_g6_ParamLimits

0xc83e,	// (0x00019114) main_mp3_pane_g6

0xc84b,	// (0x00019121) main_mp3_pane_g7_ParamLimits

0xc84b,	// (0x00019121) main_mp3_pane_g7

0xc857,	// (0x0001912d) main_mp3_pane_g8_ParamLimits

0xc857,	// (0x0001912d) main_mp3_pane_g8

0xf6ce,	// (0x0001bfa4) main_mp3_pane_g_ParamLimits

0x49e9,	// (0x000112bf) main_mp3_pane_t2

0x49f7,	// (0x000112cd) main_mp3_pane_t3

0xc871,	// (0x00019147) main_mp3_pane_t4

0xc87f,	// (0x00019155) main_mp3_pane_t5

0x0005,

0xf6df,	// (0x0001bfb5) main_mp3_pane_t

0xc88d,	// (0x00019163) mup_progress_pane_cp01

0x984d,	// (0x00016123) aid_zoom_text_secondary2

0xc663,	// (0x00018f39) list_cale_ev2_pane

0xc66b,	// (0x00018f41) scroll_pane_cp023_ParamLimits

0x4b4d,	// (0x00011423) field_cale_ev2_pane_ParamLimits

0x4b4d,	// (0x00011423) field_cale_ev2_pane

0xc895,	// (0x0001916b) field_cale_ev2_pane_g1_ParamLimits

0xc895,	// (0x0001916b) field_cale_ev2_pane_g1

0xc8a1,	// (0x00019177) field_cale_ev2_pane_g2_ParamLimits

0xc8a1,	// (0x00019177) field_cale_ev2_pane_g2

0xc8b9,	// (0x0001918f) field_cale_ev2_pane_g3_ParamLimits

0xc8b9,	// (0x0001918f) field_cale_ev2_pane_g3

0x0003,

0xf700,	// (0x0001bfd6) field_cale_ev2_pane_g_ParamLimits

0xf700,	// (0x0001bfd6) field_cale_ev2_pane_g

0xc8dd,	// (0x000191b3) field_cale_ev2_pane_t1_ParamLimits

0xc8dd,	// (0x000191b3) field_cale_ev2_pane_t1

0xc8f4,	// (0x000191ca) field_cale_ev2_pane_t2_ParamLimits

0xc8f4,	// (0x000191ca) field_cale_ev2_pane_t2

0x0001,

0xf709,	// (0x0001bfdf) field_cale_ev2_pane_t_ParamLimits

0xf709,	// (0x0001bfdf) field_cale_ev2_pane_t

0x3b63,	// (0x00010439) main_postcard_pane_g5_ParamLimits

0x3b63,	// (0x00010439) main_postcard_pane_g5

0x3b79,	// (0x0001044f) main_postcard_pane_g6_ParamLimits

0x3b79,	// (0x0001044f) main_postcard_pane_g6

0x989e,	// (0x00016174) camera2_autofocus_pane_cp_ParamLimits

0x989e,	// (0x00016174) camera2_autofocus_pane_cp

0x989e,	// (0x00016174) main_mup3_pane

0x4bb2,	// (0x00011488) main_mup3_pane_g1_ParamLimits

0x4bb2,	// (0x00011488) main_mup3_pane_g1

0x4bd4,	// (0x000114aa) main_mup3_pane_g2_ParamLimits

0x4bd4,	// (0x000114aa) main_mup3_pane_g2

0x4c54,	// (0x0001152a) main_mup3_pane_g3_ParamLimits

0x4c54,	// (0x0001152a) main_mup3_pane_g3

0x4c9a,	// (0x00011570) main_mup3_pane_g4_ParamLimits

0x4c9a,	// (0x00011570) main_mup3_pane_g4

0x4ce0,	// (0x000115b6) main_mup3_pane_g5_ParamLimits

0x4ce0,	// (0x000115b6) main_mup3_pane_g5

0x4d26,	// (0x000115fc) main_mup3_pane_g6_ParamLimits

0x4d26,	// (0x000115fc) main_mup3_pane_g6

0x9fa3,	// (0x00016879) main_mup3_pane_g7_ParamLimits

0x9fa3,	// (0x00016879) main_mup3_pane_g7

0x0007,

0xf719,	// (0x0001bfef) main_mup3_pane_g_ParamLimits

0xf719,	// (0x0001bfef) main_mup3_pane_g

0x4da4,	// (0x0001167a) main_mup3_pane_t1_ParamLimits

0x4da4,	// (0x0001167a) main_mup3_pane_t1

0x4e18,	// (0x000116ee) main_mup3_pane_t2_ParamLimits

0x4e18,	// (0x000116ee) main_mup3_pane_t2

0x4eec,	// (0x000117c2) main_mup3_pane_t4_ParamLimits

0x4eec,	// (0x000117c2) main_mup3_pane_t4

0x4f42,	// (0x00011818) main_mup3_pane_t5_ParamLimits

0x4f42,	// (0x00011818) main_mup3_pane_t5

0x4ffe,	// (0x000118d4) main_mup3_pane_t6_ParamLimits

0x4ffe,	// (0x000118d4) main_mup3_pane_t6

0x0005,

0xf72a,	// (0x0001c000) main_mup3_pane_t_ParamLimits

0xf72a,	// (0x0001c000) main_mup3_pane_t

0x50b6,	// (0x0001198c) mup3_progress_pane_ParamLimits

0x50b6,	// (0x0001198c) mup3_progress_pane

0x5142,	// (0x00011a18) popup_mup3_control_window_ParamLimits

0x5142,	// (0x00011a18) popup_mup3_control_window

0xc909,	// (0x000191df) popup_mup3_text_window

0x5174,	// (0x00011a4a) mup3_progress_pane_t1

0x5193,	// (0x00011a69) mup3_progress_pane_t2

0xc911,	// (0x000191e7) mup3_progress_pane_t3

0x0002,

0xf737,	// (0x0001c00d) mup3_progress_pane_t

0xc92e,	// (0x00019204) mup_progress_pane_cp03

0x982f,	// (0x00016105) bg_tb_trans_pane_cp04

0x51b2,	// (0x00011a88) mup3_volume_pane

0x51ba,	// (0x00011a90) popup_mup3_control_window_g1

0x51c3,	// (0x00011a99) mup3_volume_pane_g1

0x51cc,	// (0x00011aa2) mup3_volume_pane_g2

0x51d5,	// (0x00011aab) mup3_volume_pane_g3

0x0002,

0xf73e,	// (0x0001c014) mup3_volume_pane_g

0x982f,	// (0x00016105) bg_tb_trans_pane_cp03

0xc93e,	// (0x00019214) popup_mup3_text_window_g1

0xc946,	// (0x0001921c) popup_mup3_text_window_t1

0xa083,	// (0x00016959) list_calc_item_pane_g1_ParamLimits

0xc35d,	// (0x00018c33) mup_volume_pane_cp_g1

0x4b11,	// (0x000113e7) main_touch_calib_pane_t3

0x4b25,	// (0x000113fb) main_touch_calib_pane_t4

0x4b39,	// (0x0001140f) main_touch_calib_pane_t5

0x9839,	// (0x0001610f) aid_cell_size_toolbar2

0x9841,	// (0x00016117) aid_popup3_width_pane

0x984d,	// (0x00016123) aid_zoom_text_msg_primary

0x23ff,	// (0x0000ecd5) vorec_t7

0xa047,	// (0x0001691d) bg_calc_paper_pane_g1_ParamLimits

0xa053,	// (0x00016929) bg_calc_paper_pane_g2_ParamLimits

0xa05f,	// (0x00016935) bg_calc_paper_pane_g3_ParamLimits

0xa06b,	// (0x00016941) bg_calc_paper_pane_g4_ParamLimits

0xa077,	// (0x0001694d) bg_calc_paper_pane_g5_ParamLimits

0x1d06,	// (0x0000e5dc) bg_calc_paper_pane_g6_ParamLimits

0x1d15,	// (0x0000e5eb) bg_calc_paper_pane_g7_ParamLimits

0x1d24,	// (0x0000e5fa) bg_calc_paper_pane_g8_ParamLimits

0xf113,	// (0x0001b9e9) bg_calc_paper_pane_g_ParamLimits

0x1d37,	// (0x0000e60d) calc_bg_paper_pane_g9_ParamLimits

0x989e,	// (0x00016174) image_qvga_pane_ParamLimits

0x989e,	// (0x00016174) image_qvga_pane

0x9f1a,	// (0x000167f0) bg_popup_sub_pane_cp04_ParamLimits

0xafac,	// (0x00017882) popup_mup_playback_window_g1_ParamLimits

0xafb8,	// (0x0001788e) popup_mup_playback_window_t1_ParamLimits

0xafcd,	// (0x000178a3) popup_mup_playback_window_t2_ParamLimits

0xf471,	// (0x0001bd47) popup_mup_playback_window_t_ParamLimits

0x9fa3,	// (0x00016879) main_mup2_pane_g3_ParamLimits

0x9fa3,	// (0x00016879) main_mup2_pane_g3

0x272b,	// (0x0000f001) popup_toolbar_window_cp04

0xb3c2,	// (0x00017c98) popup_call2_audio_second_window_g3_ParamLimits

0xb3c2,	// (0x00017c98) popup_call2_audio_second_window_g3

0xb7da,	// (0x000180b0) popup_call2_audio_first_window_g4_ParamLimits

0xb7da,	// (0x000180b0) popup_call2_audio_first_window_g4

0xbe01,	// (0x000186d7) popup_call2_audio_in_window_g4_ParamLimits

0xbe01,	// (0x000186d7) popup_call2_audio_in_window_g4

0x3c91,	// (0x00010567) aid_area_sk_bg_cut_ParamLimits

0x3c91,	// (0x00010567) aid_area_sk_bg_cut

0xafe2,	// (0x000178b8) aid_area_sk_bg_cut_2_ParamLimits

0xafe2,	// (0x000178b8) aid_area_sk_bg_cut_2

0x982f,	// (0x00016105) aid_placing_details_win

0x982f,	// (0x00016105) aid_placing_details_win_2

0x9f95,	// (0x0001686b) camera2_autofocus_pane_g1_ParamLimits

0x1a37,	// (0x0000e30d) popup_fixed_preview_cale_window_ParamLimits

0x1a37,	// (0x0000e30d) popup_fixed_preview_cale_window

0xad44,	// (0x0001761a) navi_slider_pane_g3

0xad4d,	// (0x00017623) navi_slider_pane_g4

0xad56,	// (0x0001762c) navi_slider_pane_g5

0xad44,	// (0x0001761a) navi_slider_pane_g6

0xad5f,	// (0x00017635) navi_slider_pane_g7

0xaea1,	// (0x00017777) mup_scale_pane_g3

0xaeaa,	// (0x00017780) mup_scale_pane_g4

0xaeb3,	// (0x00017789) mup_scale_pane_g5

0x3932,	// (0x00010208) mup_scale_pane_g6

0x393b,	// (0x00010211) mup_scale_pane_g7

0xa29e,	// (0x00016b74) cams2_slider_pane_g3

0xa29e,	// (0x00016b74) cams2_slider_pane_g4

0xa29e,	// (0x00016b74) cams2_slider_pane_g5

0xa29e,	// (0x00016b74) cams2_slider_pane_g6

0xa29e,	// (0x00016b74) cams2_slider_pane_g7

0xa29e,	// (0x00016b74) camera2_autofocus_pane_cp_g1

0xc111,	// (0x000189e7) bg_popup_preview_window_pane_cp02_ParamLimits

0xc111,	// (0x000189e7) bg_popup_preview_window_pane_cp02

0xc954,	// (0x0001922a) list_fp_cale_pane_ParamLimits

0xc954,	// (0x0001922a) list_fp_cale_pane

0xc960,	// (0x00019236) popup_fixed_preview_cale_window_t1_ParamLimits

0xc960,	// (0x00019236) popup_fixed_preview_cale_window_t1

0x51de,	// (0x00011ab4) popup_fixed_preview_cale_window_t2_ParamLimits

0x51de,	// (0x00011ab4) popup_fixed_preview_cale_window_t2

0x51f3,	// (0x00011ac9) popup_fixed_preview_cale_window_t3_ParamLimits

0x51f3,	// (0x00011ac9) popup_fixed_preview_cale_window_t3

0x0002,

0xf745,	// (0x0001c01b) popup_fixed_preview_cale_window_t_ParamLimits

0xf745,	// (0x0001c01b) popup_fixed_preview_cale_window_t

0x5208,	// (0x00011ade) list_single_fp_cale_pane_ParamLimits

0x5208,	// (0x00011ade) list_single_fp_cale_pane

0xc97e,	// (0x00019254) list_single_fp_cale_pane_g1_ParamLimits

0xc97e,	// (0x00019254) list_single_fp_cale_pane_g1

0xc98a,	// (0x00019260) list_single_fp_cale_pane_g2_ParamLimits

0xc98a,	// (0x00019260) list_single_fp_cale_pane_g2

0x0002,

0xf74c,	// (0x0001c022) list_single_fp_cale_pane_g_ParamLimits

0xf74c,	// (0x0001c022) list_single_fp_cale_pane_g

0xc9a3,	// (0x00019279) list_single_fp_cale_pane_t1_ParamLimits

0xc9a3,	// (0x00019279) list_single_fp_cale_pane_t1

0xc9b5,	// (0x0001928b) list_single_fp_cale_pane_t2_ParamLimits

0xc9b5,	// (0x0001928b) list_single_fp_cale_pane_t2

0x0001,

0xf753,	// (0x0001c029) list_single_fp_cale_pane_t_ParamLimits

0xf753,	// (0x0001c029) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x982f,	// (0x00016105) main_dialer_pane

0x982f,	// (0x00016105) aid_cell_size_keypad

0x982f,	// (0x00016105) dialer_ne_pane

0x982f,	// (0x00016105) grid_dialer_command_1_pane

0x982f,	// (0x00016105) grid_dialer_command_2_pane

0x982f,	// (0x00016105) grid_dialer_keypad_pane

0x521e,	// (0x00011af4) bg_popup_call_pane_cp06_ParamLimits

0x521e,	// (0x00011af4) bg_popup_call_pane_cp06

0x521e,	// (0x00011af4) dialer_ne_clear_pane_ParamLimits

0x521e,	// (0x00011af4) dialer_ne_clear_pane

0xa29e,	// (0x00016b74) dialer_ne_pane_g1

0xae1d,	// (0x000176f3) dialer_ne_pane_t1_ParamLimits

0xae1d,	// (0x000176f3) dialer_ne_pane_t1

0x522c,	// (0x00011b02) dialer_ne_pane_t2_ParamLimits

0x522c,	// (0x00011b02) dialer_ne_pane_t2

0x5254,	// (0x00011b2a) dialer_ne_pane_t3_ParamLimits

0x5254,	// (0x00011b2a) dialer_ne_pane_t3

0x0002,

0xf758,	// (0x0001c02e) dialer_ne_pane_t_ParamLimits

0xf758,	// (0x0001c02e) dialer_ne_pane_t

0x5254,	// (0x00011b2a) dialer_ne_pane_t3_copy1_ParamLimits

0x5254,	// (0x00011b2a) dialer_ne_pane_t3_copy1

0xc9e8,	// (0x000192be) cell_dialer_keypad_pane_ParamLimits

0xc9e8,	// (0x000192be) cell_dialer_keypad_pane

0x989e,	// (0x00016174) cell_dialer_command_1_pane_ParamLimits

0x989e,	// (0x00016174) cell_dialer_command_1_pane

0xc9ff,	// (0x000192d5) cell_dialer_command_2_pane_ParamLimits

0xc9ff,	// (0x000192d5) cell_dialer_command_2_pane

0x989e,	// (0x00016174) bg_button_pane_cp02_ParamLimits

0x989e,	// (0x00016174) bg_button_pane_cp02

0x9f95,	// (0x0001686b) cell_dialer_keypad_pane_g1_ParamLimits

0x9f95,	// (0x0001686b) cell_dialer_keypad_pane_g1

0x989e,	// (0x00016174) bg_button_pane_cp03_ParamLimits

0x989e,	// (0x00016174) bg_button_pane_cp03

0x9f95,	// (0x0001686b) cell_dialer_command_1_pane_g1_ParamLimits

0x9f95,	// (0x0001686b) cell_dialer_command_1_pane_g1

0x982f,	// (0x00016105) bg_button_pane_cp04

0xa29e,	// (0x00016b74) cell_dialer_command_2_pane_g1

0x982f,	// (0x00016105) bg_button_pane_cp06

0xa29e,	// (0x00016b74) dialer_ne_clear_pane_g1

0xac0e,	// (0x000174e4) navi_pane_g2

0xac3c,	// (0x00017512) navi_pane_g3

0x0002,

0xf374,	// (0x0001bc4a) navi_pane_g

0xaccb,	// (0x000175a1) navi_pane_mv_g2

0xacf2,	// (0x000175c8) navi_pane_mv_g5

0x3715,	// (0x0000ffeb) navi_pane_mv_t1

0xa029,	// (0x000168ff) main_clock2_pane

0x989e,	// (0x00016174) main_clock2_list_pane_ParamLimits

0x989e,	// (0x00016174) main_clock2_list_pane

0x52ea,	// (0x00011bc0) main_clock2_pane_t1_ParamLimits

0x52ea,	// (0x00011bc0) main_clock2_pane_t1

0x5325,	// (0x00011bfb) main_clock2_pane_t2_ParamLimits

0x5325,	// (0x00011bfb) main_clock2_pane_t2

0x0004,

0xf764,	// (0x0001c03a) main_clock2_pane_t_ParamLimits

0xf764,	// (0x0001c03a) main_clock2_pane_t

0x53c5,	// (0x00011c9b) popup_clock_analogue_window_cp03_ParamLimits

0x53c5,	// (0x00011c9b) popup_clock_analogue_window_cp03

0x53ea,	// (0x00011cc0) popup_clock_digital_window_cp02_ParamLimits

0x53ea,	// (0x00011cc0) popup_clock_digital_window_cp02

0x5463,	// (0x00011d39) main_clock2_list_single_pane_ParamLimits

0x5463,	// (0x00011d39) main_clock2_list_single_pane

0xa25e,	// (0x00016b34) list_highlight_pane_cp05

0xca42,	// (0x00019318) main_clock2_list_single_pane_t1

0x272b,	// (0x0000f001) popup_toolbar_window_cp04_ParamLimits

0x9fa3,	// (0x00016879) camera2_autofocus_pane_g2_ParamLimits

0x9fa3,	// (0x00016879) camera2_autofocus_pane_g2

0x9fa3,	// (0x00016879) camera2_autofocus_pane_g3_ParamLimits

0x9fa3,	// (0x00016879) camera2_autofocus_pane_g3

0x9fa3,	// (0x00016879) camera2_autofocus_pane_g4_ParamLimits

0x9fa3,	// (0x00016879) camera2_autofocus_pane_g4

0x9fa3,	// (0x00016879) camera2_autofocus_pane_g5_ParamLimits

0x9fa3,	// (0x00016879) camera2_autofocus_pane_g5

0x0004,

0xf6a8,	// (0x0001bf7e) camera2_autofocus_pane_g_ParamLimits

0xf6a8,	// (0x0001bf7e) camera2_autofocus_pane_g

0x4b6e,	// (0x00011444) camera2_autofocus_pane_cp_g2

0x4b76,	// (0x0001144c) camera2_autofocus_pane_cp_g3

0x4b7e,	// (0x00011454) camera2_autofocus_pane_cp_g4

0x4b86,	// (0x0001145c) camera2_autofocus_pane_cp_g5

0x0004,

0xf70e,	// (0x0001bfe4) camera2_autofocus_pane_cp_g

0x982f,	// (0x00016105) popup_dialer_spcha_window

0x982f,	// (0x00016105) bg_popup_sub_pane_cp07

0x982f,	// (0x00016105) list_spcha_pane

0xca50,	// (0x00019326) list_single_spcha_pane_ParamLimits

0xca50,	// (0x00019326) list_single_spcha_pane

0x982f,	// (0x00016105) list_highlight_pane_cp06

0xa7ff,	// (0x000170d5) list_single_spcha_pane_t1

0xbbab,	// (0x00018481) popup_call2_audio_out_window_g4_ParamLimits

0xbbab,	// (0x00018481) popup_call2_audio_out_window_g4

0x982f,	// (0x00016105) main_imed2_pane

0xc137,	// (0x00018a0d) popup_imed_adjust2_window

0x450d,	// (0x00010de3) popup_imed_trans_window_ParamLimits

0x450d,	// (0x00010de3) popup_imed_trans_window

0xc432,	// (0x00018d08) popup_blid_sat_info2_window_t1

0xc440,	// (0x00018d16) popup_blid_sat_info2_window_t2

0x000a,

0xf63d,	// (0x0001bf13) popup_blid_sat_info2_window_t

0x5514,	// (0x00011dea) aid_size_cell_colour_35

0x5534,	// (0x00011e0a) aid_size_cell_colour_112

0x5554,	// (0x00011e2a) aid_size_cell_effect

0xae31,	// (0x00017707) bg_tb_trans_pane_cp02

0xa725,	// (0x00016ffb) heading_imed_pane

0x5574,	// (0x00011e4a) listscroll_imed_pane

0xca62,	// (0x00019338) heading_imed_pane_g1

0xca6a,	// (0x00019340) heading_imed_pane_t1

0xca78,	// (0x0001934e) grid_imed_colour_35_pane_ParamLimits

0xca78,	// (0x0001934e) grid_imed_colour_35_pane

0x5580,	// (0x00011e56) grid_imed_effect_pane

0xca90,	// (0x00019366) list_imed_aspect_pane

0x5596,	// (0x00011e6c) scroll_pane_cp027_ParamLimits

0x5596,	// (0x00011e6c) scroll_pane_cp027

0x55a7,	// (0x00011e7d) cell_imed_effect_pane_ParamLimits

0x55a7,	// (0x00011e7d) cell_imed_effect_pane

0xca98,	// (0x0001936e) cell_imed_colour_pane_ParamLimits

0xca98,	// (0x0001936e) cell_imed_colour_pane

0xcada,	// (0x000193b0) cell_imed_colour_pane_g1_ParamLimits

0xcada,	// (0x000193b0) cell_imed_colour_pane_g1

0xcaeb,	// (0x000193c1) hgihlgiht_grid_pane_cp016_ParamLimits

0xcaeb,	// (0x000193c1) hgihlgiht_grid_pane_cp016

0x55ce,	// (0x00011ea4) cell_imed_effect_pane_g1

0x55d6,	// (0x00011eac) grid_highlight_pane_cp017

0xcafc,	// (0x000193d2) list_imed_single_pane_ParamLimits

0xcafc,	// (0x000193d2) list_imed_single_pane

0x982f,	// (0x00016105) list_highlight_pane_cp07

0xcb11,	// (0x000193e7) list_imed_aspect_pane_comp1_t1

0xae31,	// (0x00017707) bg_tb_trans_pane_cp05

0xcb33,	// (0x00019409) popup_imed_adjust2_window_g1

0xcb5a,	// (0x00019430) popup_imed_adjust2_window_t1

0xcb72,	// (0x00019448) slider_imed_adjust_pane

0xcb86,	// (0x0001945c) slider_imed_adjust_pane_g1

0xcb96,	// (0x0001946c) slider_imed_adjust_pane_g2

0xcba6,	// (0x0001947c) slider_imed_adjust_pane_g3

0xcbb7,	// (0x0001948d) slider_imed_adjust_pane_g4

0x0003,

0xf781,	// (0x0001c057) slider_imed_adjust_pane_g

0x55df,	// (0x00011eb5) aid_size_cell_clipart2

0x55eb,	// (0x00011ec1) grid_imed_clipart_pane

0xcbc8,	// (0x0001949e) scroll_pane_cp031

0x55f5,	// (0x00011ecb) cell_imed_clipart_pane_ParamLimits

0x55f5,	// (0x00011ecb) cell_imed_clipart_pane

0x5617,	// (0x00011eed) cell_imed_clipart_pane_g1

0x982f,	// (0x00016105) grid_highlight_pane_cp014

0x52c6,	// (0x00011b9c) main_clock2_pane_g1_ParamLimits

0x52c6,	// (0x00011b9c) main_clock2_pane_g1

0x540a,	// (0x00011ce0) aid_call2_pane_cp10

0x541c,	// (0x00011cf2) aid_call_pane_cp10

0xab6d,	// (0x00017443) popup_clock_analogue_window_cp10_g1

0xab6d,	// (0x00017443) popup_clock_analogue_window_cp10_g2

0x542e,	// (0x00011d04) popup_clock_analogue_window_cp10_g3

0x542e,	// (0x00011d04) popup_clock_analogue_window_cp10_g4

0xab6d,	// (0x00017443) popup_clock_analogue_window_cp10_g5

0x0004,

0xf76f,	// (0x0001c045) popup_clock_analogue_window_cp10_g

0x5444,	// (0x00011d1a) popup_clock_analogue_window_cp10_t1

0x5475,	// (0x00011d4b) clock_digital_number_pane_cp10_ParamLimits

0x5475,	// (0x00011d4b) clock_digital_number_pane_cp10

0x548d,	// (0x00011d63) clock_digital_number_pane_cp11_ParamLimits

0x548d,	// (0x00011d63) clock_digital_number_pane_cp11

0x54a5,	// (0x00011d7b) clock_digital_number_pane_cp12_ParamLimits

0x54a5,	// (0x00011d7b) clock_digital_number_pane_cp12

0x54bf,	// (0x00011d95) clock_digital_number_pane_cp13_ParamLimits

0x54bf,	// (0x00011d95) clock_digital_number_pane_cp13

0x54d9,	// (0x00011daf) clock_digital_separator_pane_cp10_ParamLimits

0x54d9,	// (0x00011daf) clock_digital_separator_pane_cp10

0x54f3,	// (0x00011dc9) popup_clock_digital_window_cp02_t1_ParamLimits

0x54f3,	// (0x00011dc9) popup_clock_digital_window_cp02_t1

0x9f12,	// (0x000167e8) clock_digital_number_pane_cp10_g1

0x9f12,	// (0x000167e8) clock_digital_number_pane_cp10_g2

0x0001,

0xf78a,	// (0x0001c060) clock_digital_number_pane_cp10_g

0x9f12,	// (0x000167e8) clock_digital_separator_pane_cp10_g1

0x9f12,	// (0x000167e8) clock_digital_separator_pane_g2_cp10

0xacfa,	// (0x000175d0) navi_pane_vded_g4

0xad03,	// (0x000175d9) navi_pane_vded_g5

0xad0c,	// (0x000175e2) navi_pane_vded_t1

0x982f,	// (0x00016105) main_vded_pane

0x5620,	// (0x00011ef6) main_vded_pane_g1

0x562a,	// (0x00011f00) main_vded_pane_g2

0x5634,	// (0x00011f0a) main_vded_pane_g3

0x0002,

0xf78f,	// (0x0001c065) main_vded_pane_g

0x563e,	// (0x00011f14) main_vded_pane_t1

0x564c,	// (0x00011f22) main_vded_pane_t2

0x0001,

0xf796,	// (0x0001c06c) main_vded_pane_t

0x565a,	// (0x00011f30) vded_slider_pane

0x5662,	// (0x00011f38) vded_video_pane

0xcbd0,	// (0x000194a6) vded_video_pane_g1

0x566a,	// (0x00011f40) vded_video_pane_g2

0xa29e,	// (0x00016b74) vded_video_pane_g3

0x0002,

0xf79b,	// (0x0001c071) vded_video_pane_g

0xcbda,	// (0x000194b0) vded_slider_pane_g1

0xc35d,	// (0x00018c33) vded_slider_pane_g2

0xcbe3,	// (0x000194b9) vded_slider_pane_g3

0xcbec,	// (0x000194c2) vded_slider_pane_g4

0xcbf5,	// (0x000194cb) vded_slider_pane_g5

0x0004,

0xf7a2,	// (0x0001c078) vded_slider_pane_g

0x512a,	// (0x00011a00) mup3_rocker_pane_ParamLimits

0x512a,	// (0x00011a00) mup3_rocker_pane

0x5673,	// (0x00011f49) mup3_control_keys_pane_g1

0x567b,	// (0x00011f51) mup3_control_keys_pane_g2

0x5683,	// (0x00011f59) mup3_control_keys_pane_g3

0x568b,	// (0x00011f61) mup3_control_keys_pane_g4

0x0003,

0xf7ad,	// (0x0001c083) mup3_control_keys_pane_g

0x1a6e,	// (0x0000e344) popup_toolbar2_fixed_window_cp01_ParamLimits

0x1a6e,	// (0x0000e344) popup_toolbar2_fixed_window_cp01

0x515e,	// (0x00011a34) popup_toolbar2_fixed_window_cp02_ParamLimits

0x515e,	// (0x00011a34) popup_toolbar2_fixed_window_cp02

0xb534,	// (0x00017e0a) popup_call2_audio_second_window_t4_ParamLimits

0xb534,	// (0x00017e0a) popup_call2_audio_second_window_t4

0xba70,	// (0x00018346) popup_call2_audio_first_window_t6_ParamLimits

0xba70,	// (0x00018346) popup_call2_audio_first_window_t6

0xbcae,	// (0x00018584) popup_call2_audio_out_window_t6_ParamLimits

0xbcae,	// (0x00018584) popup_call2_audio_out_window_t6

0x982f,	// (0x00016105) main_vitu_pane

0x989e,	// (0x00016174) aid_size_cell_itu_ParamLimits

0x989e,	// (0x00016174) aid_size_cell_itu

0x989e,	// (0x00016174) bg_popup_window_pane_cp08_ParamLimits

0x989e,	// (0x00016174) bg_popup_window_pane_cp08

0x989e,	// (0x00016174) field_vitu_entry_pane_ParamLimits

0x989e,	// (0x00016174) field_vitu_entry_pane

0x989e,	// (0x00016174) grid_vitu_function_pane_ParamLimits

0x989e,	// (0x00016174) grid_vitu_function_pane

0x989e,	// (0x00016174) grid_vitu_itu_pane_ParamLimits

0x989e,	// (0x00016174) grid_vitu_itu_pane

0x989e,	// (0x00016174) cell_vitu_itu_pane_ParamLimits

0x989e,	// (0x00016174) cell_vitu_itu_pane

0x989e,	// (0x00016174) cell_vitu_function_pane_ParamLimits

0x989e,	// (0x00016174) cell_vitu_function_pane

0x989e,	// (0x00016174) bg_popup_sub_pane_cp08_ParamLimits

0x989e,	// (0x00016174) bg_popup_sub_pane_cp08

0xa270,	// (0x00016b46) field_vitu_entry_pane_t1_ParamLimits

0xa270,	// (0x00016b46) field_vitu_entry_pane_t1

0xcbfe,	// (0x000194d4) field_vitu_entry_pane_t2_ParamLimits

0xcbfe,	// (0x000194d4) field_vitu_entry_pane_t2

0x0001,

0xf7b6,	// (0x0001c08c) field_vitu_entry_pane_t_ParamLimits

0xf7b6,	// (0x0001c08c) field_vitu_entry_pane_t

0xc284,	// (0x00018b5a) bg_button_pane_cp05_ParamLimits

0xc284,	// (0x00018b5a) bg_button_pane_cp05

0xcc1b,	// (0x000194f1) cell_vitu_itu_pane_g1

0xae09,	// (0x000176df) cell_vitu_itu_pane_t1_ParamLimits

0xae09,	// (0x000176df) cell_vitu_itu_pane_t1

0xae09,	// (0x000176df) cell_vitu_itu_pane_t2_ParamLimits

0xae09,	// (0x000176df) cell_vitu_itu_pane_t2

0x0002,

0xf7bb,	// (0x0001c091) cell_vitu_itu_pane_t_ParamLimits

0xf7bb,	// (0x0001c091) cell_vitu_itu_pane_t

0x982f,	// (0x00016105) bg_button_pane_cp07

0xa29e,	// (0x00016b74) cell_vitu_function_pane_g1

0x9fd3,	// (0x000168a9) main_calc_pane_g1

0x1895,	// (0x0000e16b) aid_visual_content_pane

0x982f,	// (0x00016105) main_vradio_pane

0x9f95,	// (0x0001686b) main_vradio_pane_g1_ParamLimits

0x9f95,	// (0x0001686b) main_vradio_pane_g1

0x9fa3,	// (0x00016879) main_vradio_pane_g2_ParamLimits

0x9fa3,	// (0x00016879) main_vradio_pane_g2

0x0001,

0xf7c2,	// (0x0001c098) main_vradio_pane_g_ParamLimits

0xf7c2,	// (0x0001c098) main_vradio_pane_g

0xa270,	// (0x00016b46) main_vradio_pane_t1_ParamLimits

0xa270,	// (0x00016b46) main_vradio_pane_t1

0xa270,	// (0x00016b46) main_vradio_pane_t2_ParamLimits

0xa270,	// (0x00016b46) main_vradio_pane_t2

0xae1d,	// (0x000176f3) main_vradio_pane_t3_ParamLimits

0xae1d,	// (0x000176f3) main_vradio_pane_t3

0x0002,

0xf7c7,	// (0x0001c09d) main_vradio_pane_t_ParamLimits

0xf7c7,	// (0x0001c09d) main_vradio_pane_t

0x989e,	// (0x00016174) vradio_rocker_control_pane_ParamLimits

0x989e,	// (0x00016174) vradio_rocker_control_pane

0x989e,	// (0x00016174) vradio_station_info_pane_ParamLimits

0x989e,	// (0x00016174) vradio_station_info_pane

0x989e,	// (0x00016174) vradio_frequency_info_pane_ParamLimits

0x989e,	// (0x00016174) vradio_frequency_info_pane

0xa29e,	// (0x00016b74) vradio_station_info_pane_g1

0xae09,	// (0x000176df) vradio_station_info_pane_t1_ParamLimits

0xae09,	// (0x000176df) vradio_station_info_pane_t1

0xae1d,	// (0x000176f3) vradio_station_info_pane_t2_ParamLimits

0xae1d,	// (0x000176f3) vradio_station_info_pane_t2

0x0001,

0xf7ce,	// (0x0001c0a4) vradio_station_info_pane_t_ParamLimits

0xf7ce,	// (0x0001c0a4) vradio_station_info_pane_t

0x982f,	// (0x00016105) vradio_tuning_pane

0x569b,	// (0x00011f71) vradio_rocker_control_pane_g1

0xcc37,	// (0x0001950d) vradio_rocker_control_pane_g2

0x56a5,	// (0x00011f7b) vradio_rocker_control_pane_g3

0x56af,	// (0x00011f85) vradio_rocker_control_pane_g4

0x56b9,	// (0x00011f8f) vradio_rocker_control_pane_g5

0x0004,

0xf7d3,	// (0x0001c0a9) vradio_rocker_control_pane_g

0xa29e,	// (0x00016b74) vradio_frequency_info_pane_g1

0xa270,	// (0x00016b46) vradio_frequency_info_pane_t1_ParamLimits

0xa270,	// (0x00016b46) vradio_frequency_info_pane_t1

0x56c3,	// (0x00011f99) vradio_tuning_pane_g1

0x56ce,	// (0x00011fa4) vradio_tuning_pane_t1

0x985d,	// (0x00016133) area_side_right_pane_ParamLimits

0x985d,	// (0x00016133) area_side_right_pane

0xc0d8,	// (0x000189ae) status_small_pane_g1

0xc0e0,	// (0x000189b6) status_small_pane_g2

0xc0e9,	// (0x000189bf) status_small_pane_g3

0xc0f2,	// (0x000189c8) status_small_pane_g4

0x0003,

0xf59f,	// (0x0001be75) status_small_pane_g

0xc0fb,	// (0x000189d1) status_small_pane_t1

0x982f,	// (0x00016105) main_video3_pane

0xcc64,	// (0x0001953a) cams_zoom_vslider_pane

0xcc6c,	// (0x00019542) image3_wide_pane_ParamLimits

0xcc6c,	// (0x00019542) image3_wide_pane

0xcc86,	// (0x0001955c) image3_wide_small_pane

0xcc92,	// (0x00019568) main_video3_pane_g1_ParamLimits

0xcc92,	// (0x00019568) main_video3_pane_g1

0xccae,	// (0x00019584) main_video3_pane_g2_ParamLimits

0xccae,	// (0x00019584) main_video3_pane_g2

0x0001,

0xf7de,	// (0x0001c0b4) main_video3_pane_g_ParamLimits

0xf7de,	// (0x0001c0b4) main_video3_pane_g

0xccca,	// (0x000195a0) main_video3_pane_t1_ParamLimits

0xccca,	// (0x000195a0) main_video3_pane_t1

0xccf5,	// (0x000195cb) main_video3_pane_t2_ParamLimits

0xccf5,	// (0x000195cb) main_video3_pane_t2

0xcd20,	// (0x000195f6) main_video3_pane_t3_ParamLimits

0xcd20,	// (0x000195f6) main_video3_pane_t3

0x0002,

0xf7e3,	// (0x0001c0b9) main_video3_pane_t_ParamLimits

0xf7e3,	// (0x0001c0b9) main_video3_pane_t

0xcd4d,	// (0x00019623) cams_zoom_vslider_pane_g1

0xcd56,	// (0x0001962c) cams_zoom_vslider_pane_g2

0x0001,

0xf7ea,	// (0x0001c0c0) cams_zoom_vslider_pane_g

0xcd5e,	// (0x00019634) small_slider_vertical_pane

0xa29e,	// (0x00016b74) small_slider_vertical_pane_g1

0xa29e,	// (0x00016b74) small_slider_vertical_pane_g2

0xcd66,	// (0x0001963c) small_slider_vertical_pane_g3

0x0002,

0xf7ef,	// (0x0001c0c5) small_slider_vertical_pane_g

0x982f,	// (0x00016105) main_hwr_training_pane

0xcd6f,	// (0x00019645) hwr_training_instruct_pane_ParamLimits

0xcd6f,	// (0x00019645) hwr_training_instruct_pane

0x56dd,	// (0x00011fb3) hwr_training_navi_pane_ParamLimits

0x56dd,	// (0x00011fb3) hwr_training_navi_pane

0x56fc,	// (0x00011fd2) hwr_training_write_pane_ParamLimits

0x56fc,	// (0x00011fd2) hwr_training_write_pane

0x982f,	// (0x00016105) bg_frame_shadow_pane

0xcda6,	// (0x0001967c) hwr_training_write_pane_g1

0xcdae,	// (0x00019684) hwr_training_write_pane_g2

0xcdb6,	// (0x0001968c) hwr_training_write_pane_g3

0xcdbe,	// (0x00019694) hwr_training_write_pane_g4

0xcdc6,	// (0x0001969c) hwr_training_write_pane_g5

0xcdce,	// (0x000196a4) hwr_training_write_pane_g6

0xcdd6,	// (0x000196ac) hwr_training_write_pane_g7

0x0006,

0xf7f6,	// (0x0001c0cc) hwr_training_write_pane_g

0xcdde,	// (0x000196b4) hwr_training_navi_pane_g1_ParamLimits

0xcdde,	// (0x000196b4) hwr_training_navi_pane_g1

0xcdf0,	// (0x000196c6) hwr_training_navi_pane_g2_ParamLimits

0xcdf0,	// (0x000196c6) hwr_training_navi_pane_g2

0xce02,	// (0x000196d8) hwr_training_navi_pane_g3_ParamLimits

0xce02,	// (0x000196d8) hwr_training_navi_pane_g3

0xce12,	// (0x000196e8) hwr_training_navi_pane_g4_ParamLimits

0xce12,	// (0x000196e8) hwr_training_navi_pane_g4

0x0004,

0xf805,	// (0x0001c0db) hwr_training_navi_pane_g_ParamLimits

0xf805,	// (0x0001c0db) hwr_training_navi_pane_g

0xce1f,	// (0x000196f5) hwr_training_navi_pane_t1

0x5746,	// (0x0001201c) list_single_hwr_training_instruct_pane_ParamLimits

0x5746,	// (0x0001201c) list_single_hwr_training_instruct_pane

0xce2d,	// (0x00019703) list_single_hwr_training_instruct_pane_t1

0xc533,	// (0x00018e09) bg_frame_shadow_pane_g1

0xce3c,	// (0x00019712) bg_frame_shadow_pane_g2

0xce44,	// (0x0001971a) bg_frame_shadow_pane_g3

0xce4c,	// (0x00019722) bg_frame_shadow_pane_g4

0xce54,	// (0x0001972a) bg_frame_shadow_pane_g5

0xce5c,	// (0x00019732) bg_frame_shadow_pane_g6

0xce64,	// (0x0001973a) bg_frame_shadow_pane_g7

0xa105,	// (0x000169db) bg_frame_shadow_pane_g8

0x0007,

0xf810,	// (0x0001c0e6) bg_frame_shadow_pane_g

0x982f,	// (0x00016105) main_video_tele_dialer_pane

0x575c,	// (0x00012032) aid_size_cell_video_keypad_ParamLimits

0x575c,	// (0x00012032) aid_size_cell_video_keypad

0x5776,	// (0x0001204c) grid_video_dialer_keypad_pane_ParamLimits

0x5776,	// (0x0001204c) grid_video_dialer_keypad_pane

0x57c4,	// (0x0001209a) video_down_pane_cp_ParamLimits

0x57c4,	// (0x0001209a) video_down_pane_cp

0x57f6,	// (0x000120cc) cell_video_dialer_keypad_pane_ParamLimits

0x57f6,	// (0x000120cc) cell_video_dialer_keypad_pane

0xce6c,	// (0x00019742) bg_button_pane_cp08_ParamLimits

0xce6c,	// (0x00019742) bg_button_pane_cp08

0x5818,	// (0x000120ee) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5818,	// (0x000120ee) cell_video_dialer_keypad_pane_g1

0x5114,	// (0x000119ea) mup3_rocker2_pane_ParamLimits

0x5114,	// (0x000119ea) mup3_rocker2_pane

0xa29e,	// (0x00016b74) mup3_rocker2_pane_g1

0x43f0,	// (0x00010cc6) main_dialer2_pane

0x982f,	// (0x00016105) main_mp4_pane

0xce96,	// (0x0001976c) main_mp4_pane_g1_ParamLimits

0xce96,	// (0x0001976c) main_mp4_pane_g1

0xce96,	// (0x0001976c) main_mp4_pane_g2_ParamLimits

0xce96,	// (0x0001976c) main_mp4_pane_g2

0x5852,	// (0x00012128) main_mp4_pane_g3_ParamLimits

0x5852,	// (0x00012128) main_mp4_pane_g3

0xcea4,	// (0x0001977a) main_mp4_pane_g4_ParamLimits

0xcea4,	// (0x0001977a) main_mp4_pane_g4

0xced2,	// (0x000197a8) main_mp4_pane_g5_ParamLimits

0xced2,	// (0x000197a8) main_mp4_pane_g5

0x0007,

0xf830,	// (0x0001c106) main_mp4_pane_g_ParamLimits

0xf830,	// (0x0001c106) main_mp4_pane_g

0xcf46,	// (0x0001981c) main_mp4_pane_t1_ParamLimits

0xcf46,	// (0x0001981c) main_mp4_pane_t1

0xcfa2,	// (0x00019878) main_mp4_pane_t2_ParamLimits

0xcfa2,	// (0x00019878) main_mp4_pane_t2

0xcff4,	// (0x000198ca) main_mp4_pane_t3_ParamLimits

0xcff4,	// (0x000198ca) main_mp4_pane_t3

0xd01a,	// (0x000198f0) main_mp4_pane_t4_ParamLimits

0xd01a,	// (0x000198f0) main_mp4_pane_t4

0x0003,

0xf841,	// (0x0001c117) main_mp4_pane_t_ParamLimits

0xf841,	// (0x0001c117) main_mp4_pane_t

0xd05e,	// (0x00019934) mp4_progress_pane_ParamLimits

0xd05e,	// (0x00019934) mp4_progress_pane

0xd0a8,	// (0x0001997e) mp4_rocker_pane_ParamLimits

0xd0a8,	// (0x0001997e) mp4_rocker_pane

0xd0d0,	// (0x000199a6) mp4_progress_pane_t1

0xd0e9,	// (0x000199bf) mp4_progress_pane_t2

0x0001,

0xf84a,	// (0x0001c120) mp4_progress_pane_t

0xd102,	// (0x000199d8) mup_progress_pane_cp04

0xa29e,	// (0x00016b74) mp4_rocker_pane_g1

0x588e,	// (0x00012164) aid_cell_size_keypad2_ParamLimits

0x588e,	// (0x00012164) aid_cell_size_keypad2

0x58a4,	// (0x0001217a) dialer2_ne_pane_ParamLimits

0x58a4,	// (0x0001217a) dialer2_ne_pane

0x58be,	// (0x00012194) grid_dialer2_keypad_pane_ParamLimits

0x58be,	// (0x00012194) grid_dialer2_keypad_pane

0xc284,	// (0x00018b5a) bg_popup_call_pane_cp07_ParamLimits

0xc284,	// (0x00018b5a) bg_popup_call_pane_cp07

0x58da,	// (0x000121b0) dialer2_ne_pane_t1_ParamLimits

0x58da,	// (0x000121b0) dialer2_ne_pane_t1

0x5916,	// (0x000121ec) cell_dialer2_keypad_pane_ParamLimits

0x5916,	// (0x000121ec) cell_dialer2_keypad_pane

0xd127,	// (0x000199fd) bg_button_pane_pane_cp04_ParamLimits

0xd127,	// (0x000199fd) bg_button_pane_pane_cp04

0x5938,	// (0x0001220e) cell_dialer2_keypad_pane_g1_ParamLimits

0x5938,	// (0x0001220e) cell_dialer2_keypad_pane_g1

0x25ff,	// (0x0000eed5) aid_placing_vt_set_content_ParamLimits

0x25ff,	// (0x0000eed5) aid_placing_vt_set_content

0x2627,	// (0x0000eefd) aid_placing_vt_set_title_ParamLimits

0x2627,	// (0x0000eefd) aid_placing_vt_set_title

0x982f,	// (0x00016105) main_image3_pane

0x59fe,	// (0x000122d4) area_side_right_pane_cp01_ParamLimits

0x59fe,	// (0x000122d4) area_side_right_pane_cp01

0xce96,	// (0x0001976c) main_image3_pane_g1_ParamLimits

0xce96,	// (0x0001976c) main_image3_pane_g1

0x5a15,	// (0x000122eb) main_image3_pane_g2_ParamLimits

0x5a15,	// (0x000122eb) main_image3_pane_g2

0x5a3d,	// (0x00012313) main_image3_pane_g3_ParamLimits

0x5a3d,	// (0x00012313) main_image3_pane_g3

0x5a67,	// (0x0001233d) main_image3_pane_g4_ParamLimits

0x5a67,	// (0x0001233d) main_image3_pane_g4

0x0003,

0xf859,	// (0x0001c12f) main_image3_pane_g_ParamLimits

0xf859,	// (0x0001c12f) main_image3_pane_g

0x5a91,	// (0x00012367) main_image3_pane_t1_ParamLimits

0x5a91,	// (0x00012367) main_image3_pane_t1

0x5ae9,	// (0x000123bf) main_image3_pane_t2_ParamLimits

0x5ae9,	// (0x000123bf) main_image3_pane_t2

0x5b3b,	// (0x00012411) main_image3_pane_t3_ParamLimits

0x5b3b,	// (0x00012411) main_image3_pane_t3

0x0003,

0xf862,	// (0x0001c138) main_image3_pane_t_ParamLimits

0xf862,	// (0x0001c138) main_image3_pane_t

0x989e,	// (0x00016174) grid_sctrl_middle_pane_cp01_ParamLimits

0x989e,	// (0x00016174) grid_sctrl_middle_pane_cp01

0x5bc3,	// (0x00012499) cell_sctrl_middle_pane_cp01_ParamLimits

0x5bc3,	// (0x00012499) cell_sctrl_middle_pane_cp01

0x5be0,	// (0x000124b6) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x5be0,	// (0x000124b6) cell_sctrl_middle_pane_cp01_g1

0x982f,	// (0x00016105) main_call4_pane

0x5bf6,	// (0x000124cc) aid_size_button_call4_ParamLimits

0x5bf6,	// (0x000124cc) aid_size_button_call4

0x5c29,	// (0x000124ff) call4_windows_pane_ParamLimits

0x5c29,	// (0x000124ff) call4_windows_pane

0x5c48,	// (0x0001251e) grid_call4_button_pane_ParamLimits

0x5c48,	// (0x0001251e) grid_call4_button_pane

0x5c7b,	// (0x00012551) call4_windows_conf_pane

0x5c90,	// (0x00012566) popup_call4_audio_first_window_ParamLimits

0x5c90,	// (0x00012566) popup_call4_audio_first_window

0x5ce0,	// (0x000125b6) popup_call4_audio_second_window_ParamLimits

0x5ce0,	// (0x000125b6) popup_call4_audio_second_window

0x5cf7,	// (0x000125cd) popup_call4_audio_wait_window_ParamLimits

0x5cf7,	// (0x000125cd) popup_call4_audio_wait_window

0x5d05,	// (0x000125db) cell_call4_button_pane_ParamLimits

0x5d05,	// (0x000125db) cell_call4_button_pane

0x5d2a,	// (0x00012600) bg_button_pane_cp09_ParamLimits

0x5d2a,	// (0x00012600) bg_button_pane_cp09

0x5d36,	// (0x0001260c) cell_call4_button_pane_g1_ParamLimits

0x5d36,	// (0x0001260c) cell_call4_button_pane_g1

0x5d5c,	// (0x00012632) cell_call4_button_pane_t1_ParamLimits

0x5d5c,	// (0x00012632) cell_call4_button_pane_t1

0xd19f,	// (0x00019a75) popup_call4_audio_conf_window_ParamLimits

0xd19f,	// (0x00019a75) popup_call4_audio_conf_window

0x5174,	// (0x00011a4a) mup3_progress_pane_t1_ParamLimits

0x5193,	// (0x00011a69) mup3_progress_pane_t2_ParamLimits

0xc911,	// (0x000191e7) mup3_progress_pane_t3_ParamLimits

0xf737,	// (0x0001c00d) mup3_progress_pane_t_ParamLimits

0xc92e,	// (0x00019204) mup_progress_pane_cp03_ParamLimits

0x5693,	// (0x00011f69) mup3_control_keys_pane_g4_copy1

0xd08c,	// (0x00019962) mp4_rocker2_pane_ParamLimits

0xd08c,	// (0x00019962) mp4_rocker2_pane

0xd1b3,	// (0x00019a89) mp4_rocker2_pane_g1

0xd1bb,	// (0x00019a91) mp4_rocker2_pane_g2

0xd1c3,	// (0x00019a99) mp4_rocker2_pane_g3

0xd1cb,	// (0x00019aa1) mp4_rocker2_pane_g4

0xd1d3,	// (0x00019aa9) mp4_rocker2_pane_g5

0x0004,

0xf86b,	// (0x0001c141) mp4_rocker2_pane_g

0x982f,	// (0x00016105) main_camera4_pane

0x982f,	// (0x00016105) main_video4_pane

0x5792,	// (0x00012068) main_video_tele_dialer_pane_t1_ParamLimits

0x5792,	// (0x00012068) main_video_tele_dialer_pane_t1

0x57ab,	// (0x00012081) main_video_tele_dialer_pane_t2_ParamLimits

0x57ab,	// (0x00012081) main_video_tele_dialer_pane_t2

0x0001,

0xf821,	// (0x0001c0f7) main_video_tele_dialer_pane_t_ParamLimits

0xf821,	// (0x0001c0f7) main_video_tele_dialer_pane_t

0x5d9e,	// (0x00012674) cam4_autofocus_pane_ParamLimits

0x5d9e,	// (0x00012674) cam4_autofocus_pane

0x5db4,	// (0x0001268a) cam4_image_uncrop_pane_ParamLimits

0x5db4,	// (0x0001268a) cam4_image_uncrop_pane

0x5dce,	// (0x000126a4) cam4_indicators_pane_ParamLimits

0x5dce,	// (0x000126a4) cam4_indicators_pane

0x5df9,	// (0x000126cf) main_camera4_pane_g1_ParamLimits

0x5df9,	// (0x000126cf) main_camera4_pane_g1

0x5e0b,	// (0x000126e1) main_camera4_pane_g2_ParamLimits

0x5e0b,	// (0x000126e1) main_camera4_pane_g2

0x5e1e,	// (0x000126f4) main_camera4_pane_g3_ParamLimits

0x5e1e,	// (0x000126f4) main_camera4_pane_g3

0x5e31,	// (0x00012707) main_camera4_pane_g4_ParamLimits

0x5e31,	// (0x00012707) main_camera4_pane_g4

0x5e44,	// (0x0001271a) main_camera4_pane_g5_ParamLimits

0x5e44,	// (0x0001271a) main_camera4_pane_g5

0x0005,

0xf876,	// (0x0001c14c) main_camera4_pane_g_ParamLimits

0xf876,	// (0x0001c14c) main_camera4_pane_g

0x5e68,	// (0x0001273e) main_camera4_pane_t1_ParamLimits

0x5e68,	// (0x0001273e) main_camera4_pane_t1

0x9f95,	// (0x0001686b) bg_tb_trans_pane_cp06

0xd1ff,	// (0x00019ad5) cam4_indicators_pane_g1

0xd210,	// (0x00019ae6) cam4_indicators_pane_g2

0x0002,

0xf891,	// (0x0001c167) cam4_indicators_pane_g

0xd228,	// (0x00019afe) cam4_indicators_pane_t1

0x5ecc,	// (0x000127a2) main_video4_pane_g1_ParamLimits

0x5ecc,	// (0x000127a2) main_video4_pane_g1

0x5edb,	// (0x000127b1) main_video4_pane_g2_ParamLimits

0x5edb,	// (0x000127b1) main_video4_pane_g2

0x5eea,	// (0x000127c0) main_video4_pane_g3_ParamLimits

0x5eea,	// (0x000127c0) main_video4_pane_g3

0x5ef9,	// (0x000127cf) main_video4_pane_g4_ParamLimits

0x5ef9,	// (0x000127cf) main_video4_pane_g4

0x0004,

0xf898,	// (0x0001c16e) main_video4_pane_g_ParamLimits

0xf898,	// (0x0001c16e) main_video4_pane_g

0x5f17,	// (0x000127ed) vid4_indicators_pane_ParamLimits

0x5f17,	// (0x000127ed) vid4_indicators_pane

0x5f45,	// (0x0001281b) video4_image_uncrop_cif_pane_ParamLimits

0x5f45,	// (0x0001281b) video4_image_uncrop_cif_pane

0x5f5f,	// (0x00012835) video4_image_uncrop_nhd_pane_ParamLimits

0x5f5f,	// (0x00012835) video4_image_uncrop_nhd_pane

0x5db4,	// (0x0001268a) video4_image_uncrop_vga_pane_ParamLimits

0x5db4,	// (0x0001268a) video4_image_uncrop_vga_pane

0x989e,	// (0x00016174) bg_tb_trans_pane_cp07

0xd252,	// (0x00019b28) vid4_indicators_pane_g1

0xd266,	// (0x00019b3c) vid4_indicators_pane_g2

0xd27a,	// (0x00019b50) vid4_indicators_pane_g3

0x0004,

0xf8a3,	// (0x0001c179) vid4_indicators_pane_g

0xd2a7,	// (0x00019b7d) vid4_indicators_pane_t1

0x5f73,	// (0x00012849) cam4_autofocus_pane_g1

0x5f7b,	// (0x00012851) cam4_autofocus_pane_g2

0x5f83,	// (0x00012859) cam4_autofocus_pane_g3

0x0002,

0xf8ae,	// (0x0001c184) cam4_autofocus_pane_g

0x5f8b,	// (0x00012861) cam4_autofocus_pane_g3_copy1

0x57da,	// (0x000120b0) video_down_pane_cp_t1

0x57e8,	// (0x000120be) video_down_pane_cp_t2

0x0001,

0xf826,	// (0x0001c0fc) video_down_pane_cp_t

0x989e,	// (0x00016174) popup_vitu2_window_ParamLimits

0x989e,	// (0x00016174) popup_vitu2_window

0x5f93,	// (0x00012869) aid_size_cell2_itu2_ParamLimits

0x5f93,	// (0x00012869) aid_size_cell2_itu2

0x5fb3,	// (0x00012889) aid_size_cell_itu2_ParamLimits

0x5fb3,	// (0x00012889) aid_size_cell_itu2

0x521e,	// (0x00011af4) bg_popup_window_pane_cp09_ParamLimits

0x521e,	// (0x00011af4) bg_popup_window_pane_cp09

0x6000,	// (0x000128d6) field_vitu2_entry_pane_ParamLimits

0x6000,	// (0x000128d6) field_vitu2_entry_pane

0x6023,	// (0x000128f9) grid_vitu2_function_pane_ParamLimits

0x6023,	// (0x000128f9) grid_vitu2_function_pane

0x606e,	// (0x00012944) grid_vitu2_itu_pane_ParamLimits

0x606e,	// (0x00012944) grid_vitu2_itu_pane

0x60fc,	// (0x000129d2) cell_vitu2_itu_pane_ParamLimits

0x60fc,	// (0x000129d2) cell_vitu2_itu_pane

0x6128,	// (0x000129fe) cell_vitu2_function_pane_ParamLimits

0x6128,	// (0x000129fe) cell_vitu2_function_pane

0xd2be,	// (0x00019b94) bg_popup_call_pane_cp08_ParamLimits

0xd2be,	// (0x00019b94) bg_popup_call_pane_cp08

0xd2d5,	// (0x00019bab) field_vitu2_entry_pane_g1

0xd2e1,	// (0x00019bb7) field_vitu2_entry_pane_g2

0x0002,

0xf8b5,	// (0x0001c18b) field_vitu2_entry_pane_g

0x6167,	// (0x00012a3d) field_vitu2_entry_pane_t1_ParamLimits

0x6167,	// (0x00012a3d) field_vitu2_entry_pane_t1

0xd2ed,	// (0x00019bc3) field_vitu2_entry_pane_t2_ParamLimits

0xd2ed,	// (0x00019bc3) field_vitu2_entry_pane_t2

0x0001,

0xf8bc,	// (0x0001c192) field_vitu2_entry_pane_t_ParamLimits

0xf8bc,	// (0x0001c192) field_vitu2_entry_pane_t

0x6197,	// (0x00012a6d) bg_button_pane_cp010_ParamLimits

0x6197,	// (0x00012a6d) bg_button_pane_cp010

0x61a5,	// (0x00012a7b) cell_vitu2_itu_pane_g1

0x61cb,	// (0x00012aa1) cell_vitu2_itu_pane_t1_ParamLimits

0x61cb,	// (0x00012aa1) cell_vitu2_itu_pane_t1

0x6229,	// (0x00012aff) cell_vitu2_itu_pane_t2_ParamLimits

0x6229,	// (0x00012aff) cell_vitu2_itu_pane_t2

0x0002,

0xf8c6,	// (0x0001c19c) cell_vitu2_itu_pane_t_ParamLimits

0xf8c6,	// (0x0001c19c) cell_vitu2_itu_pane_t

0x989e,	// (0x00016174) bg_button_pane_cp011

0x6315,	// (0x00012beb) cell_vitu2_function_pane_g1

0x982f,	// (0x00016105) main_myfav_hc_pane

0x5b8b,	// (0x00012461) popup_image3_note_pane_ParamLimits

0x5b8b,	// (0x00012461) popup_image3_note_pane

0x5ba7,	// (0x0001247d) popup_image3_tool_bar_pane_ParamLimits

0x5ba7,	// (0x0001247d) popup_image3_tool_bar_pane

0x62b7,	// (0x00012b8d) cell_vitu2_itu_pane_t3_ParamLimits

0x62b7,	// (0x00012b8d) cell_vitu2_itu_pane_t3

0x982f,	// (0x00016105) bg_popup_trans_pane

0xd312,	// (0x00019be8) grid_image3_tool_bar_pane

0xd31c,	// (0x00019bf2) bg_popup_trans_pane_g1

0xa4af,	// (0x00016d85) bg_popup_trans_pane_g2

0xd324,	// (0x00019bfa) bg_popup_trans_pane_g3

0xd32c,	// (0x00019c02) bg_popup_trans_pane_g4

0xd334,	// (0x00019c0a) bg_popup_trans_pane_g5

0xd33c,	// (0x00019c12) bg_popup_trans_pane_g6

0xd344,	// (0x00019c1a) bg_popup_trans_pane_g7

0xd34c,	// (0x00019c22) bg_popup_trans_pane_g8

0xa48f,	// (0x00016d65) bg_popup_trans_pane_g9

0x0008,

0xf8cd,	// (0x0001c1a3) bg_popup_trans_pane_g

0xd354,	// (0x00019c2a) cell_image3_tool_bar_pane_ParamLimits

0xd354,	// (0x00019c2a) cell_image3_tool_bar_pane

0xa29e,	// (0x00016b74) cell_image3_tool_bar_pane_g1

0x982f,	// (0x00016105) bg_popup_trans_pane_cp1

0xd368,	// (0x00019c3e) popup_image3_note_pane_t1

0xd376,	// (0x00019c4c) popup_image3_note_pane_t2

0xd384,	// (0x00019c5a) popup_image3_note_pane_t3

0x0002,

0xf8e0,	// (0x0001c1b6) popup_image3_note_pane_t

0xd392,	// (0x00019c68) popup_image3_note_pane_t3_copy1

0x6329,	// (0x00012bff) bg_myfav_hc_instruction_pane_ParamLimits

0x6329,	// (0x00012bff) bg_myfav_hc_instruction_pane

0x633d,	// (0x00012c13) cell_myfav_contact_pane_ParamLimits

0x633d,	// (0x00012c13) cell_myfav_contact_pane

0x635b,	// (0x00012c31) cell_myfav_contact_pane_cp1_ParamLimits

0x635b,	// (0x00012c31) cell_myfav_contact_pane_cp1

0x6373,	// (0x00012c49) cell_myfav_contact_pane_cp2_ParamLimits

0x6373,	// (0x00012c49) cell_myfav_contact_pane_cp2

0x638b,	// (0x00012c61) cell_myfav_contact_pane_cp3_ParamLimits

0x638b,	// (0x00012c61) cell_myfav_contact_pane_cp3

0x63a2,	// (0x00012c78) cell_myfav_contact_pane_cp4_ParamLimits

0x63a2,	// (0x00012c78) cell_myfav_contact_pane_cp4

0x63ba,	// (0x00012c90) cell_myfav_contact_pane_cp5_ParamLimits

0x63ba,	// (0x00012c90) cell_myfav_contact_pane_cp5

0x63ce,	// (0x00012ca4) cell_myfav_contact_pane_cp6_ParamLimits

0x63ce,	// (0x00012ca4) cell_myfav_contact_pane_cp6

0x63e4,	// (0x00012cba) cell_myfav_contact_pane_cp7_ParamLimits

0x63e4,	// (0x00012cba) cell_myfav_contact_pane_cp7

0xd3a0,	// (0x00019c76) listscroll_gen_pane_cp05

0x63fe,	// (0x00012cd4) main_myfav_hc_pane_g1_ParamLimits

0x63fe,	// (0x00012cd4) main_myfav_hc_pane_g1

0x6418,	// (0x00012cee) main_myfav_hc_pane_g2_ParamLimits

0x6418,	// (0x00012cee) main_myfav_hc_pane_g2

0x0002,

0xf8e7,	// (0x0001c1bd) main_myfav_hc_pane_g_ParamLimits

0xf8e7,	// (0x0001c1bd) main_myfav_hc_pane_g

0x644a,	// (0x00012d20) main_myfav_hc_pane_t1_ParamLimits

0x644a,	// (0x00012d20) main_myfav_hc_pane_t1

0xd3a9,	// (0x00019c7f) main_myfav_hc_pane_t2_ParamLimits

0xd3a9,	// (0x00019c7f) main_myfav_hc_pane_t2

0xd3bb,	// (0x00019c91) main_myfav_hc_pane_t3_ParamLimits

0xd3bb,	// (0x00019c91) main_myfav_hc_pane_t3

0x6461,	// (0x00012d37) main_myfav_hc_pane_t4_ParamLimits

0x6461,	// (0x00012d37) main_myfav_hc_pane_t4

0x0004,

0xf8ee,	// (0x0001c1c4) main_myfav_hc_pane_t_ParamLimits

0xf8ee,	// (0x0001c1c4) main_myfav_hc_pane_t

0xa29e,	// (0x00016b74) bg_myfav_hc_instruction_pane_g1

0xd3cd,	// (0x00019ca3) cell_myfav_contact_pane_g1_ParamLimits

0xd3cd,	// (0x00019ca3) cell_myfav_contact_pane_g1

0xd3cd,	// (0x00019ca3) cell_myfav_contact_pane_g2_ParamLimits

0xd3cd,	// (0x00019ca3) cell_myfav_contact_pane_g2

0xd3d9,	// (0x00019caf) cell_myfav_contact_pane_g3_ParamLimits

0xd3d9,	// (0x00019caf) cell_myfav_contact_pane_g3

0x9fa3,	// (0x00016879) cell_myfav_contact_pane_g4_ParamLimits

0x9fa3,	// (0x00016879) cell_myfav_contact_pane_g4

0xd3e6,	// (0x00019cbc) cell_myfav_contact_pane_g5_ParamLimits

0xd3e6,	// (0x00019cbc) cell_myfav_contact_pane_g5

0x0004,

0xf8f9,	// (0x0001c1cf) cell_myfav_contact_pane_g_ParamLimits

0xf8f9,	// (0x0001c1cf) cell_myfav_contact_pane_g

0x6432,	// (0x00012d08) main_myfav_hc_pane_g3_ParamLimits

0x6432,	// (0x00012d08) main_myfav_hc_pane_g3

0x19d0,	// (0x0000e2a6) popup_adpt_find_window

0x6489,	// (0x00012d5f) afind_page_pane_ParamLimits

0x6489,	// (0x00012d5f) afind_page_pane

0x649e,	// (0x00012d74) aid_size_cell_afind_ParamLimits

0x649e,	// (0x00012d74) aid_size_cell_afind

0x64bc,	// (0x00012d92) bg_popup_sub_pane_cp09_ParamLimits

0x64bc,	// (0x00012d92) bg_popup_sub_pane_cp09

0x64c9,	// (0x00012d9f) find_pane_cp01_ParamLimits

0x64c9,	// (0x00012d9f) find_pane_cp01

0xd3f2,	// (0x00019cc8) grid_afind_control_pane_ParamLimits

0xd3f2,	// (0x00019cc8) grid_afind_control_pane

0x64d6,	// (0x00012dac) grid_afind_pane_ParamLimits

0x64d6,	// (0x00012dac) grid_afind_pane

0x64f5,	// (0x00012dcb) cell_afind_pane_ParamLimits

0x64f5,	// (0x00012dcb) cell_afind_pane

0xa29e,	// (0x00016b74) afind_page_pane_g1

0x655c,	// (0x00012e32) afind_page_pane_g2

0x6565,	// (0x00012e3b) afind_page_pane_g3

0x0002,

0xf904,	// (0x0001c1da) afind_page_pane_g

0x656e,	// (0x00012e44) afind_page_pane_t1

0xd406,	// (0x00019cdc) cell_afind_grid_control_pane_ParamLimits

0xd406,	// (0x00019cdc) cell_afind_grid_control_pane

0xd127,	// (0x000199fd) bg_button_pane_cp69_ParamLimits

0xd127,	// (0x000199fd) bg_button_pane_cp69

0x658e,	// (0x00012e64) cell_afind_pane_g1_ParamLimits

0x658e,	// (0x00012e64) cell_afind_pane_g1

0x659b,	// (0x00012e71) cell_afind_pane_t1_ParamLimits

0x659b,	// (0x00012e71) cell_afind_pane_t1

0xa2a8,	// (0x00016b7e) bg_button_pane_cp72

0xd415,	// (0x00019ceb) cell_afind_grid_control_pane_g1

0x3e6e,	// (0x00010744) aid_image_placing_area_ParamLimits

0x3e6e,	// (0x00010744) aid_image_placing_area

0x9f95,	// (0x0001686b) field_vitu_entry_pane_g1_ParamLimits

0x9f95,	// (0x0001686b) field_vitu_entry_pane_g1

0x9f95,	// (0x0001686b) field_vitu_entry_pane_g2_ParamLimits

0x9f95,	// (0x0001686b) field_vitu_entry_pane_g2

0x0001,

0xf201,	// (0x0001bad7) field_vitu_entry_pane_g_ParamLimits

0xf201,	// (0x0001bad7) field_vitu_entry_pane_g

0xcc1b,	// (0x000194f1) cell_vitu_itu_pane_g1_ParamLimits

0xcbfe,	// (0x000194d4) cell_vitu_itu_pane_t3_ParamLimits

0xcbfe,	// (0x000194d4) cell_vitu_itu_pane_t3

0xd0d0,	// (0x000199a6) mp4_progress_pane_t1_ParamLimits

0xd0e9,	// (0x000199bf) mp4_progress_pane_t2_ParamLimits

0xf84a,	// (0x0001c120) mp4_progress_pane_t_ParamLimits

0xd102,	// (0x000199d8) mup_progress_pane_cp04_ParamLimits

0x6475,	// (0x00012d4b) main_myfav_hc_pane_t5_ParamLimits

0x6475,	// (0x00012d4b) main_myfav_hc_pane_t5

0x9855,	// (0x0001612b) aid_zoom_text_primary

0x19d0,	// (0x0000e2a6) popup_adpt_find_window_ParamLimits

0x989e,	// (0x00016174) main_cam_set_pane

0x5de5,	// (0x000126bb) cam4_zoom_pane_ParamLimits

0x5de5,	// (0x000126bb) cam4_zoom_pane

0x65ad,	// (0x00012e83) main_cam_set_pane_g1_ParamLimits

0x65ad,	// (0x00012e83) main_cam_set_pane_g1

0x65bb,	// (0x00012e91) main_cam_set_pane_g2_ParamLimits

0x65bb,	// (0x00012e91) main_cam_set_pane_g2

0x0001,

0xf90b,	// (0x0001c1e1) main_cam_set_pane_g_ParamLimits

0xf90b,	// (0x0001c1e1) main_cam_set_pane_g

0x65dc,	// (0x00012eb2) main_cam_set_pane_t1_ParamLimits

0x65dc,	// (0x00012eb2) main_cam_set_pane_t1

0x65f7,	// (0x00012ecd) main_cset_listscroll_pane_ParamLimits

0x65f7,	// (0x00012ecd) main_cset_listscroll_pane

0x661d,	// (0x00012ef3) main_cset_slider_pane_ParamLimits

0x661d,	// (0x00012ef3) main_cset_slider_pane

0xd426,	// (0x00019cfc) main_cset_list_pane_ParamLimits

0xd426,	// (0x00019cfc) main_cset_list_pane

0xd436,	// (0x00019d0c) scroll_pane_cp028

0x6643,	// (0x00012f19) aid_area_touch_slider

0x665f,	// (0x00012f35) cset_slider_pane

0x6682,	// (0x00012f58) main_cset_slider_pane_g1

0x6697,	// (0x00012f6d) main_cset_slider_pane_g2

0x0011,

0xf910,	// (0x0001c1e6) main_cset_slider_pane_g

0xd487,	// (0x00019d5d) main_cset_slider_pane_t1

0x673b,	// (0x00013011) main_cset_slider_pane_t2

0x6755,	// (0x0001302b) main_cset_slider_pane_t3

0x676f,	// (0x00013045) main_cset_slider_pane_t4

0x6789,	// (0x0001305f) main_cset_slider_pane_t5

0x67a3,	// (0x00013079) main_cset_slider_pane_t6

0x67b8,	// (0x0001308e) main_cset_slider_pane_t7

0x000e,

0xf935,	// (0x0001c20b) main_cset_slider_pane_t

0x68bc,	// (0x00013192) cset_list_set_pane_ParamLimits

0x68bc,	// (0x00013192) cset_list_set_pane

0xd521,	// (0x00019df7) aid_position_infowindow_above

0xd529,	// (0x00019dff) aid_position_infowindow_below

0x68ce,	// (0x000131a4) cset_list_set_pane_g1_ParamLimits

0x68ce,	// (0x000131a4) cset_list_set_pane_g1

0x68da,	// (0x000131b0) cset_list_set_pane_g3_ParamLimits

0x68da,	// (0x000131b0) cset_list_set_pane_g3

0x0001,

0xf954,	// (0x0001c22a) cset_list_set_pane_g_ParamLimits

0xf954,	// (0x0001c22a) cset_list_set_pane_g

0x68e9,	// (0x000131bf) cset_list_set_pane_t1_ParamLimits

0x68e9,	// (0x000131bf) cset_list_set_pane_t1

0x989e,	// (0x00016174) list_highlight_pane_cp021_ParamLimits

0x989e,	// (0x00016174) list_highlight_pane_cp021

0xaea1,	// (0x00017777) cset_slider_pane_g1

0xaeb3,	// (0x00017789) cset_slider_pane_g2

0xaeaa,	// (0x00017780) cset_slider_pane_g3

0x0002,

0xf959,	// (0x0001c22f) cset_slider_pane_g

0xd531,	// (0x00019e07) aid_area_touch_cam4_zoom

0xd539,	// (0x00019e0f) cam4_zoom_cont_pane

0xd541,	// (0x00019e17) cam4_zoom_pane_g1

0xd549,	// (0x00019e1f) cam4_zoom_pane_g2

0x68fe,	// (0x000131d4) cam4_zoom_pane_g3

0x0002,

0xf960,	// (0x0001c236) cam4_zoom_pane_g

0xcd66,	// (0x0001963c) cam4_zoom_cont_pane_g1

0xd551,	// (0x00019e27) cam4_zoom_cont_pane_g2

0xd55a,	// (0x00019e30) cam4_zoom_cont_pane_g3

0x0002,

0xf967,	// (0x0001c23d) cam4_zoom_cont_pane_g

0x5c14,	// (0x000124ea) call4_image_pane_ParamLimits

0x5c14,	// (0x000124ea) call4_image_pane

0x5c7b,	// (0x00012551) call4_windows_conf_pane_ParamLimits

0x5cbe,	// (0x00012594) popup_call4_audio_in_window_ParamLimits

0x5cbe,	// (0x00012594) popup_call4_audio_in_window

0x982f,	// (0x00016105) bg_popup_call2_act_pane_cp02

0xd197,	// (0x00019a6d) call4_list_conf_pane

0xa29e,	// (0x00016b74) call4_image_pane_g1

0xa29e,	// (0x00016b74) call4_image_pane_g2

0x0001,

0xf3d8,	// (0x0001bcae) call4_image_pane_g

0xd563,	// (0x00019e39) list_single_graphic_popup_conf4_pane_ParamLimits

0xd563,	// (0x00019e39) list_single_graphic_popup_conf4_pane

0x982f,	// (0x00016105) list_highlight_pane_cp022

0xd576,	// (0x00019e4c) list_single_graphic_popup_conf4_pane_g1

0xaa6a,	// (0x00017340) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf96e,	// (0x0001c244) list_single_graphic_popup_conf4_pane_g

0xd57e,	// (0x00019e54) list_single_graphic_popup_conf4_pane_t1

0x274b,	// (0x0000f021) popup_vtel_slider_window_ParamLimits

0x274b,	// (0x0000f021) popup_vtel_slider_window

0xd115,	// (0x000199eb) dialer2_ne_pane_t2_ParamLimits

0xd115,	// (0x000199eb) dialer2_ne_pane_t2

0x0001,

0xf84f,	// (0x0001c125) dialer2_ne_pane_t_ParamLimits

0xf84f,	// (0x0001c125) dialer2_ne_pane_t

0xc284,	// (0x00018b5a) bg_popup_sub_pane_cp010_ParamLimits

0xc284,	// (0x00018b5a) bg_popup_sub_pane_cp010

0x6906,	// (0x000131dc) popup_vtel_slider_window_g1_ParamLimits

0x6906,	// (0x000131dc) popup_vtel_slider_window_g1

0x6919,	// (0x000131ef) popup_vtel_slider_window_g2_ParamLimits

0x6919,	// (0x000131ef) popup_vtel_slider_window_g2

0x0003,

0xf973,	// (0x0001c249) popup_vtel_slider_window_g_ParamLimits

0xf973,	// (0x0001c249) popup_vtel_slider_window_g

0x696f,	// (0x00013245) vtel_slider_pane_ParamLimits

0x696f,	// (0x00013245) vtel_slider_pane

0x6991,	// (0x00013267) vtel_slider_pane_g1_ParamLimits

0x6991,	// (0x00013267) vtel_slider_pane_g1

0x69a5,	// (0x0001327b) vtel_slider_pane_g2_ParamLimits

0x69a5,	// (0x0001327b) vtel_slider_pane_g2

0x69bd,	// (0x00013293) vtel_slider_pane_g3_ParamLimits

0x69bd,	// (0x00013293) vtel_slider_pane_g3

0x6991,	// (0x00013267) vtel_slider_pane_g4_ParamLimits

0x6991,	// (0x00013267) vtel_slider_pane_g4

0x69d3,	// (0x000132a9) vtel_slider_pane_g5_ParamLimits

0x69d3,	// (0x000132a9) vtel_slider_pane_g5

0x0004,

0xf97c,	// (0x0001c252) vtel_slider_pane_g_ParamLimits

0xf97c,	// (0x0001c252) vtel_slider_pane_g

0x989e,	// (0x00016174) main_gallery2_pane

0x5fd3,	// (0x000128a9) aid_size_row_itut2_dropdow_list_ParamLimits

0x5fd3,	// (0x000128a9) aid_size_row_itut2_dropdow_list

0x6048,	// (0x0001291e) grid_vitu2_function_top_pane_ParamLimits

0x6048,	// (0x0001291e) grid_vitu2_function_top_pane

0x60aa,	// (0x00012980) popup_vitu2_dropdown_list_window_ParamLimits

0x60aa,	// (0x00012980) popup_vitu2_dropdown_list_window

0x60d0,	// (0x000129a6) popup_vitu2_match_list_window

0x69e9,	// (0x000132bf) cell_vitu2_function_top_pane_ParamLimits

0x69e9,	// (0x000132bf) cell_vitu2_function_top_pane

0x6a01,	// (0x000132d7) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6a01,	// (0x000132d7) cell_vitu2_function_top_pane_cp01

0x6a1d,	// (0x000132f3) cell_vitu2_function_top_wide_pane_ParamLimits

0x6a1d,	// (0x000132f3) cell_vitu2_function_top_wide_pane

0x989e,	// (0x00016174) bg_button_pane_cp012

0x6a3b,	// (0x00013311) cell_vitu2_function_top_pane_g1

0xd594,	// (0x00019e6a) bg_button_pane_cp013_ParamLimits

0xd594,	// (0x00019e6a) bg_button_pane_cp013

0x6a4f,	// (0x00013325) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6a4f,	// (0x00013325) cell_vitu2_function_top_wide_pane_g1

0x989e,	// (0x00016174) bg_popup_sub_pane_cp20

0x6a67,	// (0x0001333d) list_vitu2_match_list_pane

0xd31c,	// (0x00019bf2) bg_popup_sub_pane_cp20_g1

0xd324,	// (0x00019bfa) bg_popup_sub_pane_cp20_g2

0xa4af,	// (0x00016d85) bg_popup_sub_pane_cp20_g3

0xd32c,	// (0x00019c02) bg_popup_sub_pane_cp20_g4

0xa48f,	// (0x00016d65) bg_popup_sub_pane_cp20_g5

0xd5b0,	// (0x00019e86) bg_popup_sub_pane_cp20_g6

0xd33c,	// (0x00019c12) bg_popup_sub_pane_cp20_g7

0xd344,	// (0x00019c1a) bg_popup_sub_pane_cp20_g8

0xd34c,	// (0x00019c22) bg_popup_sub_pane_cp20_g9

0x0008,

0xf987,	// (0x0001c25d) bg_popup_sub_pane_cp20_g

0xd5b8,	// (0x00019e8e) list_vitu2_match_list_item_pane_ParamLimits

0xd5b8,	// (0x00019e8e) list_vitu2_match_list_item_pane

0xd5ca,	// (0x00019ea0) list_vitu2_match_list_item_pane_t1

0x982f,	// (0x00016105) bg_popup_sub_pane_cp21

0xa25e,	// (0x00016b34) grid_vitu2_dropdown_list_pane

0x6a7f,	// (0x00013355) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6a7f,	// (0x00013355) cell_vitu2_dropdown_list_char_pane

0x6aa0,	// (0x00013376) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6aa0,	// (0x00013376) cell_vitu2_dropdown_list_ctrl_pane

0xd5d8,	// (0x00019eae) cell_vitu2_dropdown_list_char_pane_g1

0xd5e1,	// (0x00019eb7) cell_vitu2_dropdown_list_char_pane_g2

0xd5ea,	// (0x00019ec0) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf99a,	// (0x0001c270) cell_vitu2_dropdown_list_char_pane_g

0x6aca,	// (0x000133a0) cell_vitu2_dropdown_list_char_pane_t1

0x6ad8,	// (0x000133ae) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6ad8,	// (0x000133ae) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6ae8,	// (0x000133be) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6ae8,	// (0x000133be) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6af9,	// (0x000133cf) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6af9,	// (0x000133cf) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6b09,	// (0x000133df) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6b09,	// (0x000133df) cell_vitu2_dropdown_list_ctrl_pane_g4

0x9f95,	// (0x0001686b) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x9f95,	// (0x0001686b) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf9a1,	// (0x0001c277) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf9a1,	// (0x0001c277) cell_vitu2_dropdown_list_ctrl_pane_g

0x6b25,	// (0x000133fb) aid_size_cell_gallery2_ParamLimits

0x6b25,	// (0x000133fb) aid_size_cell_gallery2

0x6b43,	// (0x00013419) grid_gallery2_pane_ParamLimits

0x6b43,	// (0x00013419) grid_gallery2_pane

0x6b5d,	// (0x00013433) scroll_pane_cp029_ParamLimits

0x6b5d,	// (0x00013433) scroll_pane_cp029

0x6b6e,	// (0x00013444) cell_gallery2_pane_ParamLimits

0x6b6e,	// (0x00013444) cell_gallery2_pane

0xd5f3,	// (0x00019ec9) cell_gallery2_pane_g2

0x6bcd,	// (0x000134a3) cell_gallery2_pane_g3

0xd5fb,	// (0x00019ed1) cell_gallery2_pane_g4

0xd603,	// (0x00019ed9) cell_gallery2_pane_g5

0xa25e,	// (0x00016b34) grid_highlight_pane_cp10

0x60d0,	// (0x000129a6) popup_vitu2_match_list_window_ParamLimits

0x60e5,	// (0x000129bb) popup_vitu2_query_window_ParamLimits

0x60e5,	// (0x000129bb) popup_vitu2_query_window

0x982f,	// (0x00016105) bg_vitu2_candi_button_pane

0xd5d8,	// (0x00019eae) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd5e1,	// (0x00019eb7) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd5ea,	// (0x00019ec0) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6bd5,	// (0x000134ab) bg_button_pane_cp015

0x6be7,	// (0x000134bd) bg_button_pane_cp016

0x6bfa,	// (0x000134d0) bg_button_pane_cp017

0xae31,	// (0x00017707) bg_popup_sub_pane_cp22

0xd60b,	// (0x00019ee1) popup_vitu2_query_window_g1

0x6c3d,	// (0x00013513) popup_vitu2_query_window_g2

0x0002,

0xf9ac,	// (0x0001c282) popup_vitu2_query_window_g

0x6c5c,	// (0x00013532) popup_vitu2_query_window_t1_ParamLimits

0x6c5c,	// (0x00013532) popup_vitu2_query_window_t1

0x6c91,	// (0x00013567) popup_vitu2_query_window_t2_ParamLimits

0x6c91,	// (0x00013567) popup_vitu2_query_window_t2

0x6ca3,	// (0x00013579) popup_vitu2_query_window_t3_ParamLimits

0x6ca3,	// (0x00013579) popup_vitu2_query_window_t3

0x6ccb,	// (0x000135a1) popup_vitu2_query_window_t4_ParamLimits

0x6ccb,	// (0x000135a1) popup_vitu2_query_window_t4

0x6cec,	// (0x000135c2) popup_vitu2_query_window_t5_ParamLimits

0x6cec,	// (0x000135c2) popup_vitu2_query_window_t5

0x0006,

0xf9b3,	// (0x0001c289) popup_vitu2_query_window_t_ParamLimits

0xf9b3,	// (0x0001c289) popup_vitu2_query_window_t

0xd41e,	// (0x00019cf4) main_cset_text_pane

0x6643,	// (0x00012f19) aid_area_touch_slider_ParamLimits

0x665f,	// (0x00012f35) cset_slider_pane_ParamLimits

0x6682,	// (0x00012f58) main_cset_slider_pane_g1_ParamLimits

0x6697,	// (0x00012f6d) main_cset_slider_pane_g2_ParamLimits

0xd43f,	// (0x00019d15) main_cset_slider_pane_g3_ParamLimits

0xd43f,	// (0x00019d15) main_cset_slider_pane_g3

0x66ac,	// (0x00012f82) main_cset_slider_pane_g4_ParamLimits

0x66ac,	// (0x00012f82) main_cset_slider_pane_g4

0x66bb,	// (0x00012f91) main_cset_slider_pane_g5_ParamLimits

0x66bb,	// (0x00012f91) main_cset_slider_pane_g5

0x66c7,	// (0x00012f9d) main_cset_slider_pane_g6_ParamLimits

0x66c7,	// (0x00012f9d) main_cset_slider_pane_g6

0xf910,	// (0x0001c1e6) main_cset_slider_pane_g_ParamLimits

0xd487,	// (0x00019d5d) main_cset_slider_pane_t1_ParamLimits

0x673b,	// (0x00013011) main_cset_slider_pane_t2_ParamLimits

0x6755,	// (0x0001302b) main_cset_slider_pane_t3_ParamLimits

0x676f,	// (0x00013045) main_cset_slider_pane_t4_ParamLimits

0x6789,	// (0x0001305f) main_cset_slider_pane_t5_ParamLimits

0x67a3,	// (0x00013079) main_cset_slider_pane_t6_ParamLimits

0x67b8,	// (0x0001308e) main_cset_slider_pane_t7_ParamLimits

0x67e2,	// (0x000130b8) main_cset_slider_pane_t8_ParamLimits

0x67e2,	// (0x000130b8) main_cset_slider_pane_t8

0x680a,	// (0x000130e0) main_cset_slider_pane_t9_ParamLimits

0x680a,	// (0x000130e0) main_cset_slider_pane_t9

0x6832,	// (0x00013108) main_cset_slider_pane_t10_ParamLimits

0x6832,	// (0x00013108) main_cset_slider_pane_t10

0x685a,	// (0x00013130) main_cset_slider_pane_t11_ParamLimits

0x685a,	// (0x00013130) main_cset_slider_pane_t11

0x6882,	// (0x00013158) main_cset_slider_pane_t12_ParamLimits

0x6882,	// (0x00013158) main_cset_slider_pane_t12

0x689f,	// (0x00013175) main_cset_slider_pane_t13_ParamLimits

0x689f,	// (0x00013175) main_cset_slider_pane_t13

0xf935,	// (0x0001c20b) main_cset_slider_pane_t_ParamLimits

0x982f,	// (0x00016105) bg_popup_sub_pane_cp011

0xd617,	// (0x00019eed) main_cset_text_pane_g1

0xd61f,	// (0x00019ef5) main_cset_text_pane_t1

0xd62d,	// (0x00019f03) main_cset_text_pane_t2

0xd63b,	// (0x00019f11) main_cset_text_pane_t3

0xd649,	// (0x00019f1f) main_cset_text_pane_t4

0xd657,	// (0x00019f2d) main_cset_text_pane_t5

0xd665,	// (0x00019f3b) main_cset_text_pane_t6

0xd673,	// (0x00019f49) main_cset_text_pane_t7

0x0006,

0xf9c2,	// (0x0001c298) main_cset_text_pane_t

0x982f,	// (0x00016105) main_cam4_burst_pane

0x982f,	// (0x00016105) main_cam5_pane

0x657c,	// (0x00012e52) bg_button_pane_cp019

0x6585,	// (0x00012e5b) bg_button_pane_cp020

0xd44b,	// (0x00019d21) main_cset_slider_pane_g7_ParamLimits

0xd44b,	// (0x00019d21) main_cset_slider_pane_g7

0xd457,	// (0x00019d2d) main_cset_slider_pane_g8_ParamLimits

0xd457,	// (0x00019d2d) main_cset_slider_pane_g8

0x66db,	// (0x00012fb1) main_cset_slider_pane_g9_ParamLimits

0x66db,	// (0x00012fb1) main_cset_slider_pane_g9

0x66e7,	// (0x00012fbd) main_cset_slider_pane_g10_ParamLimits

0x66e7,	// (0x00012fbd) main_cset_slider_pane_g10

0x66f3,	// (0x00012fc9) main_cset_slider_pane_g11_ParamLimits

0x66f3,	// (0x00012fc9) main_cset_slider_pane_g11

0x66ff,	// (0x00012fd5) main_cset_slider_pane_g12_ParamLimits

0x66ff,	// (0x00012fd5) main_cset_slider_pane_g12

0x670b,	// (0x00012fe1) main_cset_slider_pane_g13_ParamLimits

0x670b,	// (0x00012fe1) main_cset_slider_pane_g13

0x6717,	// (0x00012fed) main_cset_slider_pane_g14_ParamLimits

0x6717,	// (0x00012fed) main_cset_slider_pane_g14

0x6723,	// (0x00012ff9) main_cset_slider_pane_g15_ParamLimits

0x6723,	// (0x00012ff9) main_cset_slider_pane_g15

0xd4af,	// (0x00019d85) main_cset_slider_pane_t14_ParamLimits

0xd4af,	// (0x00019d85) main_cset_slider_pane_t14

0xd4e8,	// (0x00019dbe) main_cset_slider_pane_t15_ParamLimits

0xd4e8,	// (0x00019dbe) main_cset_slider_pane_t15

0x6d63,	// (0x00013639) aid_cam4_burst_size_cell_ParamLimits

0x6d63,	// (0x00013639) aid_cam4_burst_size_cell

0x6d83,	// (0x00013659) grid_cam4_burst_pane_ParamLimits

0x6d83,	// (0x00013659) grid_cam4_burst_pane

0x6dbb,	// (0x00013691) linegrid_cam4_burst_pane_ParamLimits

0x6dbb,	// (0x00013691) linegrid_cam4_burst_pane

0xd681,	// (0x00019f57) scroll_pane_cp30_ParamLimits

0xd681,	// (0x00019f57) scroll_pane_cp30

0x6ddf,	// (0x000136b5) cell_cam4_burst_pane_ParamLimits

0x6ddf,	// (0x000136b5) cell_cam4_burst_pane

0xd68d,	// (0x00019f63) linegrid_cam4_burst_pane_g1_ParamLimits

0xd68d,	// (0x00019f63) linegrid_cam4_burst_pane_g1

0x6e2c,	// (0x00013702) linegrid_cam4_burst_pane_g2_ParamLimits

0x6e2c,	// (0x00013702) linegrid_cam4_burst_pane_g2

0xd69a,	// (0x00019f70) linegrid_cam4_burst_pane_g3_ParamLimits

0xd69a,	// (0x00019f70) linegrid_cam4_burst_pane_g3

0x0002,

0xf9d1,	// (0x0001c2a7) linegrid_cam4_burst_pane_g_ParamLimits

0xf9d1,	// (0x0001c2a7) linegrid_cam4_burst_pane_g

0x6e3d,	// (0x00013713) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6e3d,	// (0x00013713) linegrid_cam4_burst_pane_g3_copy1

0xd6a7,	// (0x00019f7d) linegrid_cam4_burst_pane_g4_ParamLimits

0xd6a7,	// (0x00019f7d) linegrid_cam4_burst_pane_g4

0x6e57,	// (0x0001372d) linegrid_cam4_burst_pane_g5_ParamLimits

0x6e57,	// (0x0001372d) linegrid_cam4_burst_pane_g5

0x6e68,	// (0x0001373e) linegrid_cam4_burst_pane_g6_ParamLimits

0x6e68,	// (0x0001373e) linegrid_cam4_burst_pane_g6

0xd6b4,	// (0x00019f8a) linegrid_cam4_burst_pane_g7_ParamLimits

0xd6b4,	// (0x00019f8a) linegrid_cam4_burst_pane_g7

0x6e7f,	// (0x00013755) cell_cam4_burst_pane_g1

0xd6cd,	// (0x00019fa3) main_cam5_pane_t1_ParamLimits

0xd6cd,	// (0x00019fa3) main_cam5_pane_t1

0xd6df,	// (0x00019fb5) main_cam5_pane_t2_ParamLimits

0xd6df,	// (0x00019fb5) main_cam5_pane_t2

0xd6f1,	// (0x00019fc7) main_cam5_pane_t3_ParamLimits

0xd6f1,	// (0x00019fc7) main_cam5_pane_t3

0xd703,	// (0x00019fd9) main_cam5_pane_t4_ParamLimits

0xd703,	// (0x00019fd9) main_cam5_pane_t4

0xd71b,	// (0x00019ff1) main_cam5_pane_t5_ParamLimits

0xd71b,	// (0x00019ff1) main_cam5_pane_t5

0xd72f,	// (0x0001a005) main_cam5_pane_t6_ParamLimits

0xd72f,	// (0x0001a005) main_cam5_pane_t6

0xd743,	// (0x0001a019) main_cam5_pane_t7_ParamLimits

0xd743,	// (0x0001a019) main_cam5_pane_t7

0xd755,	// (0x0001a02b) main_cam5_pane_t8_ParamLimits

0xd755,	// (0x0001a02b) main_cam5_pane_t8

0xd771,	// (0x0001a047) main_cam5_pane_t9_ParamLimits

0xd771,	// (0x0001a047) main_cam5_pane_t9

0xd783,	// (0x0001a059) main_cam5_pane_t10_ParamLimits

0xd783,	// (0x0001a059) main_cam5_pane_t10

0xd795,	// (0x0001a06b) main_cam5_pane_t11_ParamLimits

0xd795,	// (0x0001a06b) main_cam5_pane_t11

0xd7a7,	// (0x0001a07d) main_cam5_pane_t12_ParamLimits

0xd7a7,	// (0x0001a07d) main_cam5_pane_t12

0xd7bc,	// (0x0001a092) main_cam5_pane_t13_ParamLimits

0xd7bc,	// (0x0001a092) main_cam5_pane_t13

0x000c,

0xf9dd,	// (0x0001c2b3) main_cam5_pane_t_ParamLimits

0xf9dd,	// (0x0001c2b3) main_cam5_pane_t

0x1a52,	// (0x0000e328) popup_scut_keymap_window_ParamLimits

0x1a52,	// (0x0000e328) popup_scut_keymap_window

0x6e92,	// (0x00013768) aid_size_cell_brow_shortcut

0xa25e,	// (0x00016b34) bg_popup_window_pane_cp010

0x6e9e,	// (0x00013774) grid_scut_pane

0x6eaa,	// (0x00013780) cell_scut_pane_ParamLimits

0x6eaa,	// (0x00013780) cell_scut_pane

0x6ec1,	// (0x00013797) cell_scut_pane_g1

0xd7d9,	// (0x0001a0af) cell_scut_pane_t1

0xd7e8,	// (0x0001a0be) cell_scut_pane_t2

0x6eca,	// (0x000137a0) cell_scut_pane_t3

0x0002,

0xf9f8,	// (0x0001c2ce) cell_scut_pane_t

0x4d37,	// (0x0001160d) main_mup3_pane_g8_ParamLimits

0x4d37,	// (0x0001160d) main_mup3_pane_g8

0x5fea,	// (0x000128c0) area_vitu2_query_pane_ParamLimits

0x5fea,	// (0x000128c0) area_vitu2_query_pane

0x6c0d,	// (0x000134e3) input_focus_pane_cp08

0xd7f7,	// (0x0001a0cd) area_vitu2_query_pane_g1

0x6ed8,	// (0x000137ae) area_vitu2_query_pane_g2

0x0001,

0xf9ff,	// (0x0001c2d5) area_vitu2_query_pane_g

0x6ee9,	// (0x000137bf) area_vitu2_query_pane_t1_ParamLimits

0x6ee9,	// (0x000137bf) area_vitu2_query_pane_t1

0x6efd,	// (0x000137d3) area_vitu2_query_pane_t2_ParamLimits

0x6efd,	// (0x000137d3) area_vitu2_query_pane_t2

0x6f11,	// (0x000137e7) area_vitu2_query_pane_t3_ParamLimits

0x6f11,	// (0x000137e7) area_vitu2_query_pane_t3

0xd803,	// (0x0001a0d9) area_vitu2_query_pane_t4_ParamLimits

0xd803,	// (0x0001a0d9) area_vitu2_query_pane_t4

0xd82b,	// (0x0001a101) area_vitu2_query_pane_t5_ParamLimits

0xd82b,	// (0x0001a101) area_vitu2_query_pane_t5

0xd853,	// (0x0001a129) area_vitu2_query_pane_t6_ParamLimits

0xd853,	// (0x0001a129) area_vitu2_query_pane_t6

0x0006,

0xfa04,	// (0x0001c2da) area_vitu2_query_pane_t_ParamLimits

0xfa04,	// (0x0001c2da) area_vitu2_query_pane_t

0x6f39,	// (0x0001380f) bg_button_pane_cp018

0x6f47,	// (0x0001381d) bg_button_pane_cp021

0x6f53,	// (0x00013829) bg_button_pane_cp022

0x6f64,	// (0x0001383a) input_focus_pane_cp09

0xab79,	// (0x0001744f) aid_size_touch_mv_arrow_left

0xaba4,	// (0x0001747a) aid_size_touch_mv_arrow_right

0xd463,	// (0x00019d39) main_cset_slider_pane_g16_ParamLimits

0xd463,	// (0x00019d39) main_cset_slider_pane_g16

0xd46f,	// (0x00019d45) main_cset_slider_pane_g17_ParamLimits

0xd46f,	// (0x00019d45) main_cset_slider_pane_g17

0x6e7f,	// (0x00013755) cell_cam4_burst_pane_g1_ParamLimits

0x982f,	// (0x00016105) compa_mode_pane

0x6929,	// (0x000131ff) popup_vtel_slider_window_g3_ParamLimits

0x6929,	// (0x000131ff) popup_vtel_slider_window_g3

0x6940,	// (0x00013216) popup_vtel_slider_window_g4_ParamLimits

0x6940,	// (0x00013216) popup_vtel_slider_window_g4

0x6957,	// (0x0001322d) popup_vtel_slider_window_t1_ParamLimits

0x6957,	// (0x0001322d) popup_vtel_slider_window_t1

0x982f,	// (0x00016105) main_cl_pane

0xc137,	// (0x00018a0d) popup_imed_adjust2_window_ParamLimits

0xae31,	// (0x00017707) bg_tb_trans_pane_cp05_ParamLimits

0xcb33,	// (0x00019409) popup_imed_adjust2_window_g1_ParamLimits

0xcb42,	// (0x00019418) popup_imed_adjust2_window_g2_ParamLimits

0xcb42,	// (0x00019418) popup_imed_adjust2_window_g2

0xcb4e,	// (0x00019424) popup_imed_adjust2_window_g3_ParamLimits

0xcb4e,	// (0x00019424) popup_imed_adjust2_window_g3

0x0002,

0xf77a,	// (0x0001c050) popup_imed_adjust2_window_g_ParamLimits

0xf77a,	// (0x0001c050) popup_imed_adjust2_window_g

0xcb5a,	// (0x00019430) popup_imed_adjust2_window_t1_ParamLimits

0xcb72,	// (0x00019448) slider_imed_adjust_pane_ParamLimits

0xcb86,	// (0x0001945c) slider_imed_adjust_pane_g1_ParamLimits

0xcb96,	// (0x0001946c) slider_imed_adjust_pane_g2_ParamLimits

0xcba6,	// (0x0001947c) slider_imed_adjust_pane_g3_ParamLimits

0xcbb7,	// (0x0001948d) slider_imed_adjust_pane_g4_ParamLimits

0xf781,	// (0x0001c057) slider_imed_adjust_pane_g_ParamLimits

0x5d86,	// (0x0001265c) aid_touch_area_cam4_ParamLimits

0x5d86,	// (0x0001265c) aid_touch_area_cam4

0xd1db,	// (0x00019ab1) battery_pane_cp01

0x5e55,	// (0x0001272b) main_camera4_pane_g6_ParamLimits

0x5e55,	// (0x0001272b) main_camera4_pane_g6

0x5e7f,	// (0x00012755) main_camera4_pane_t2_ParamLimits

0x5e7f,	// (0x00012755) main_camera4_pane_t2

0x0001,

0xf883,	// (0x0001c159) main_camera4_pane_t_ParamLimits

0xf883,	// (0x0001c159) main_camera4_pane_t

0x5eb4,	// (0x0001278a) aid_touch_area_vid4_ParamLimits

0x5eb4,	// (0x0001278a) aid_touch_area_vid4

0x5f08,	// (0x000127de) main_video4_pane_g5_ParamLimits

0x5f08,	// (0x000127de) main_video4_pane_g5

0x5f2d,	// (0x00012803) vid4_progress_pane_ParamLimits

0x5f2d,	// (0x00012803) vid4_progress_pane

0xd47b,	// (0x00019d51) main_cset_slider_pane_g18_ParamLimits

0xd47b,	// (0x00019d51) main_cset_slider_pane_g18

0xd6c1,	// (0x00019f97) cell_cam4_burst_pane_g2_ParamLimits

0xd6c1,	// (0x00019f97) cell_cam4_burst_pane_g2

0x0001,

0xf9d8,	// (0x0001c2ae) cell_cam4_burst_pane_g_ParamLimits

0xf9d8,	// (0x0001c2ae) cell_cam4_burst_pane_g

0xa029,	// (0x000168ff) bg_cl_pane_ParamLimits

0xa029,	// (0x000168ff) bg_cl_pane

0x6f75,	// (0x0001384b) cl_header_pane_ParamLimits

0x6f75,	// (0x0001384b) cl_header_pane

0x6f89,	// (0x0001385f) cl_listscroll_pane_ParamLimits

0x6f89,	// (0x0001385f) cl_listscroll_pane

0xd89f,	// (0x0001a175) bg_cl_pane_g1

0xd8a7,	// (0x0001a17d) bg_cl_pane_g2

0xd8af,	// (0x0001a185) bg_cl_pane_g3

0xd8b7,	// (0x0001a18d) bg_cl_pane_g4

0xd8bf,	// (0x0001a195) bg_cl_pane_g5

0xd8c7,	// (0x0001a19d) bg_cl_pane_g6

0xd8cf,	// (0x0001a1a5) bg_cl_pane_g7

0xd8d7,	// (0x0001a1ad) bg_cl_pane_g8

0xd8df,	// (0x0001a1b5) bg_cl_pane_g9

0x0008,

0xfa13,	// (0x0001c2e9) bg_cl_pane_g

0x6f99,	// (0x0001386f) aid_height_cl_leading_ParamLimits

0x6f99,	// (0x0001386f) aid_height_cl_leading

0x6fa5,	// (0x0001387b) aid_height_cl_text_ParamLimits

0x6fa5,	// (0x0001387b) aid_height_cl_text

0x989e,	// (0x00016174) bg_cl_header_pane_ParamLimits

0x989e,	// (0x00016174) bg_cl_header_pane

0x6fc4,	// (0x0001389a) cl_header_pane_g1_ParamLimits

0x6fc4,	// (0x0001389a) cl_header_pane_g1

0x6fda,	// (0x000138b0) cl_header_pane_t1_ParamLimits

0x6fda,	// (0x000138b0) cl_header_pane_t1

0xd8e7,	// (0x0001a1bd) cl_list_pane

0xd436,	// (0x00019d0c) hc_scroll_pane_cp01

0xa48f,	// (0x00016d65) bg_cl_header_pane_g1

0xd31c,	// (0x00019bf2) bg_cl_header_pane_g2

0xa4af,	// (0x00016d85) bg_cl_header_pane_g3

0xd32c,	// (0x00019c02) bg_cl_header_pane_g4

0xd324,	// (0x00019bfa) bg_cl_header_pane_g5

0xd5b0,	// (0x00019e86) bg_cl_header_pane_g6

0xd344,	// (0x00019c1a) bg_cl_header_pane_g7

0xd34c,	// (0x00019c22) bg_cl_header_pane_g8

0xd33c,	// (0x00019c12) bg_cl_header_pane_g9

0x0008,

0xfa26,	// (0x0001c2fc) bg_cl_header_pane_g

0x6ff3,	// (0x000138c9) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6ff3,	// (0x000138c9) hc_cl_list_double_graphic_heading_pane

0x7004,	// (0x000138da) hc_cl_list_single_graphic_pane_ParamLimits

0x7004,	// (0x000138da) hc_cl_list_single_graphic_pane

0x701d,	// (0x000138f3) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x701d,	// (0x000138f3) hc_cl_list_single_graphic_pane_g1

0x7029,	// (0x000138ff) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7029,	// (0x000138ff) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa39,	// (0x0001c30f) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa39,	// (0x0001c30f) hc_cl_list_single_graphic_pane_g

0x703d,	// (0x00013913) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x703d,	// (0x00013913) hc_cl_list_single_graphic_pane_t1

0x701d,	// (0x000138f3) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x701d,	// (0x000138f3) hc_cl_list_double_graphic_heading_pane_g1

0x7052,	// (0x00013928) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7052,	// (0x00013928) hc_cl_list_double_graphic_heading_pane_g2

0x7066,	// (0x0001393c) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7066,	// (0x0001393c) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa3e,	// (0x0001c314) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa3e,	// (0x0001c314) hc_cl_list_double_graphic_heading_pane_g

0x707a,	// (0x00013950) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x707a,	// (0x00013950) hc_cl_list_double_graphic_heading_pane_t1

0x708f,	// (0x00013965) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x708f,	// (0x00013965) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa45,	// (0x0001c31b) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa45,	// (0x0001c31b) hc_cl_list_double_graphic_heading_pane_t

0xd8f8,	// (0x0001a1ce) vid4_progress_pane_g1

0xd908,	// (0x0001a1de) vid4_progress_pane_g2

0x70a4,	// (0x0001397a) vid4_progress_pane_g3

0xd918,	// (0x0001a1ee) vid4_progress_pane_g4

0x0004,

0xfa4a,	// (0x0001c320) vid4_progress_pane_g

0x70b6,	// (0x0001398c) vid4_progress_pane_t1

0xd930,	// (0x0001a206) vid4_progress_pane_t2

0x0002,

0xfa55,	// (0x0001c32b) vid4_progress_pane_t

0x70cc,	// (0x000139a2) wait_bar_pane_cp07

0xc3e7,	// (0x00018cbd) blid_firmament_pane_ParamLimits

0xc42a,	// (0x00018d00) popup_blid_sat_info2_window_g1

0xc44e,	// (0x00018d24) popup_blid_sat_info2_window_t3

0xc45c,	// (0x00018d32) popup_blid_sat_info2_window_t4

0xc46a,	// (0x00018d40) popup_blid_sat_info2_window_t5

0xc478,	// (0x00018d4e) popup_blid_sat_info2_window_t6

0xc488,	// (0x00018d5e) popup_blid_sat_info2_window_t7

0xc496,	// (0x00018d6c) popup_blid_sat_info2_window_t8

0xc4a4,	// (0x00018d7a) popup_blid_sat_info2_window_t9

0xc4b2,	// (0x00018d88) popup_blid_sat_info2_window_t10

0xc573,	// (0x00018e49) aid_firma_cardinal_ParamLimits

0xc587,	// (0x00018e5d) blid_firmament_pane_t1_ParamLimits

0xc59e,	// (0x00018e74) blid_firmament_pane_t2_ParamLimits

0xc5b5,	// (0x00018e8b) blid_firmament_pane_t3_ParamLimits

0xc5cc,	// (0x00018ea2) blid_firmament_pane_t4_ParamLimits

0xf673,	// (0x0001bf49) blid_firmament_pane_t_ParamLimits

0xc5e3,	// (0x00018eb9) blid_sat_info_pane_ParamLimits

0x989e,	// (0x00016174) main_cam_set_pane_ParamLimits

0x5514,	// (0x00011dea) aid_size_cell_colour_35_ParamLimits

0x5534,	// (0x00011e0a) aid_size_cell_colour_112_ParamLimits

0x5554,	// (0x00011e2a) aid_size_cell_effect_ParamLimits

0xae31,	// (0x00017707) bg_tb_trans_pane_cp02_ParamLimits

0xa725,	// (0x00016ffb) heading_imed_pane_ParamLimits

0x5574,	// (0x00011e4a) listscroll_imed_pane_ParamLimits

0xb7ec,	// (0x000180c2) popup_call2_audio_first_window_g5_ParamLimits

0xb7ec,	// (0x000180c2) popup_call2_audio_first_window_g5

0x59a0,	// (0x00012276) aid_size_touch_image3_arrow_left_ParamLimits

0x59a0,	// (0x00012276) aid_size_touch_image3_arrow_left

0x59cc,	// (0x000122a2) aid_size_touch_image3_arrow_right_ParamLimits

0x59cc,	// (0x000122a2) aid_size_touch_image3_arrow_right

0xd945,	// (0x0001a21b) vid4_progress_pane_t3

0x5717,	// (0x00011fed) main_hwr_training_symbol_option_pane_ParamLimits

0x5717,	// (0x00011fed) main_hwr_training_symbol_option_pane

0xcd91,	// (0x00019667) popup_hwr_training_preview_window_ParamLimits

0xcd91,	// (0x00019667) popup_hwr_training_preview_window

0x5737,	// (0x0001200d) hwr_training_navi_pane_g5_ParamLimits

0x5737,	// (0x0001200d) hwr_training_navi_pane_g5

0xd30a,	// (0x00019be0) popup_char_count_window

0x989e,	// (0x00016174) bg_popup_sub_pane_cp20_ParamLimits

0x6a67,	// (0x0001333d) list_vitu2_match_list_pane_ParamLimits

0x6a73,	// (0x00013349) vitu2_page_scroll_pane_ParamLimits

0x6a73,	// (0x00013349) vitu2_page_scroll_pane

0xd97d,	// (0x0001a253) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd97d,	// (0x0001a253) list_single_hwr_training_symbol_option_pane

0xd990,	// (0x0001a266) list_single_hwr_training_symbol_option_pane_g1

0xd998,	// (0x0001a26e) list_single_hwr_training_symbol_option_pane_t1

0xd9a6,	// (0x0001a27c) bg_button_pane_cp023

0xd9af,	// (0x0001a285) bg_button_pane_cp024

0xd9e2,	// (0x0001a2b8) vitu2_page_scroll_pane_g1

0xd9ea,	// (0x0001a2c0) vitu2_page_scroll_pane_g2

0x0001,

0xfa5c,	// (0x0001c332) vitu2_page_scroll_pane_g

0xd9f2,	// (0x0001a2c8) vitu2_page_scroll_pane_t1

0xa0c4,	// (0x0001699a) popup_char_count_window_g1

0xda01,	// (0x0001a2d7) popup_char_count_window_g2

0xcc3f,	// (0x00019515) popup_char_count_window_g3

0x0002,

0xfa61,	// (0x0001c337) popup_char_count_window_g

0xda0a,	// (0x0001a2e0) popup_char_count_window_t1

0x982f,	// (0x00016105) main_vded2_pane

0xcb1f,	// (0x000193f5) aid_size_cell_imed_line

0xcb29,	// (0x000193ff) grid_imed_line_width_pane

0xd28b,	// (0x00019b61) vid4_indicators_pane_g4

0xda18,	// (0x0001a2ee) cell_imed_line_width_pane_ParamLimits

0xda18,	// (0x0001a2ee) cell_imed_line_width_pane

0xda2c,	// (0x0001a302) cell_imed_line_width_pane_g1

0xda35,	// (0x0001a30b) cell_imed_line_width_pane_g2

0x0001,

0xfa68,	// (0x0001c33e) cell_imed_line_width_pane_g

0x70f1,	// (0x000139c7) main_vded2_pane_g1_ParamLimits

0x70f1,	// (0x000139c7) main_vded2_pane_g1

0x7107,	// (0x000139dd) main_vded2_pane_g2_ParamLimits

0x7107,	// (0x000139dd) main_vded2_pane_g2

0x0001,

0xfa6d,	// (0x0001c343) main_vded2_pane_g_ParamLimits

0xfa6d,	// (0x0001c343) main_vded2_pane_g

0x7119,	// (0x000139ef) vded2_slider_pane_ParamLimits

0x7119,	// (0x000139ef) vded2_slider_pane

0x7129,	// (0x000139ff) aid_size_touch_vded2_end

0x7133,	// (0x00013a09) aid_size_touch_vded2_playhead

0xda3d,	// (0x0001a313) aid_size_touch_vded2_start

0xda45,	// (0x0001a31b) vded2_slider_bg_pane

0xda4e,	// (0x0001a324) vded2_slider_pane_g1

0xda57,	// (0x0001a32d) vded2_slider_pane_g2

0x713d,	// (0x00013a13) vded2_slider_pane_g3

0x0002,

0xfa72,	// (0x0001c348) vded2_slider_pane_g

0xda5f,	// (0x0001a335) vded2_slider_bg_pane_g1

0xda68,	// (0x0001a33e) vded2_slider_bg_pane_g2

0xda71,	// (0x0001a347) vded2_slider_bg_pane_g3

0x0002,

0xfa79,	// (0x0001c34f) vded2_slider_bg_pane_g

0x3adc,	// (0x000103b2) aid_postcard_touch_down_pane_ParamLimits

0x3adc,	// (0x000103b2) aid_postcard_touch_down_pane

0x3af2,	// (0x000103c8) aid_postcard_touch_up_pane_ParamLimits

0x3af2,	// (0x000103c8) aid_postcard_touch_up_pane

0x982f,	// (0x00016105) main_blid2_pane

0xc11d,	// (0x000189f3) popup_blid2_search_window

0x982f,	// (0x00016105) blid2_gps_pane

0x982f,	// (0x00016105) blid2_navig_pane

0x982f,	// (0x00016105) blid2_search_pane

0x982f,	// (0x00016105) blid2_tripm_pane

0x7148,	// (0x00013a1e) blid2_search_pane_g1_ParamLimits

0x7148,	// (0x00013a1e) blid2_search_pane_g1

0x7160,	// (0x00013a36) blid2_search_pane_t1_ParamLimits

0x7160,	// (0x00013a36) blid2_search_pane_t1

0x7172,	// (0x00013a48) aid_size_cell_blid2_gps_ParamLimits

0x7172,	// (0x00013a48) aid_size_cell_blid2_gps

0x718a,	// (0x00013a60) blid2_gps_pane_g1_ParamLimits

0x718a,	// (0x00013a60) blid2_gps_pane_g1

0x719e,	// (0x00013a74) grid_blid2_satellite_pane_ParamLimits

0x719e,	// (0x00013a74) grid_blid2_satellite_pane

0x71b8,	// (0x00013a8e) blid2_navig_pane_g1_ParamLimits

0x71b8,	// (0x00013a8e) blid2_navig_pane_g1

0x71c4,	// (0x00013a9a) blid2_navig_pane_t1_ParamLimits

0x71c4,	// (0x00013a9a) blid2_navig_pane_t1

0x71df,	// (0x00013ab5) blid2_navig_pane_t2_ParamLimits

0x71df,	// (0x00013ab5) blid2_navig_pane_t2

0x0001,

0xfa80,	// (0x0001c356) blid2_navig_pane_t_ParamLimits

0xfa80,	// (0x0001c356) blid2_navig_pane_t

0x71fa,	// (0x00013ad0) blid2_navig_ring_pane_ParamLimits

0x71fa,	// (0x00013ad0) blid2_navig_ring_pane

0x7213,	// (0x00013ae9) blid2_speed_pane_ParamLimits

0x7213,	// (0x00013ae9) blid2_speed_pane

0x721f,	// (0x00013af5) blid2_tripm_pane_g1_ParamLimits

0x721f,	// (0x00013af5) blid2_tripm_pane_g1

0x723a,	// (0x00013b10) blid2_tripm_pane_g2_ParamLimits

0x723a,	// (0x00013b10) blid2_tripm_pane_g2

0x724e,	// (0x00013b24) blid2_tripm_pane_g3_ParamLimits

0x724e,	// (0x00013b24) blid2_tripm_pane_g3

0x7262,	// (0x00013b38) blid2_tripm_pane_g4_ParamLimits

0x7262,	// (0x00013b38) blid2_tripm_pane_g4

0x7276,	// (0x00013b4c) blid2_tripm_pane_g5_ParamLimits

0x7276,	// (0x00013b4c) blid2_tripm_pane_g5

0x0005,

0xfa85,	// (0x0001c35b) blid2_tripm_pane_g_ParamLimits

0xfa85,	// (0x0001c35b) blid2_tripm_pane_g

0x729c,	// (0x00013b72) blid2_tripm_pane_t1_ParamLimits

0x729c,	// (0x00013b72) blid2_tripm_pane_t1

0x72b7,	// (0x00013b8d) blid2_tripm_pane_t2_ParamLimits

0x72b7,	// (0x00013b8d) blid2_tripm_pane_t2

0x72d0,	// (0x00013ba6) blid2_tripm_pane_t3_ParamLimits

0x72d0,	// (0x00013ba6) blid2_tripm_pane_t3

0x0003,

0xfa92,	// (0x0001c368) blid2_tripm_pane_t_ParamLimits

0xfa92,	// (0x0001c368) blid2_tripm_pane_t

0x7317,	// (0x00013bed) cell_blid2_satellite_pane_ParamLimits

0x7317,	// (0x00013bed) cell_blid2_satellite_pane

0x7335,	// (0x00013c0b) cell_blid2_satellite_pane_g1

0xda7a,	// (0x0001a350) cell_blid2_satellite_pane_t1

0xa29e,	// (0x00016b74) blid2_speed_pane_g1

0xda88,	// (0x0001a35e) blid2_speed_pane_t1

0xda96,	// (0x0001a36c) blid2_speed_pane_t2

0x0001,

0xfa9b,	// (0x0001c371) blid2_speed_pane_t

0xa29e,	// (0x00016b74) blid2_navig_ring_pane_g1

0x733e,	// (0x00013c14) blid2_navig_ring_pane_g2

0x7346,	// (0x00013c1c) blid2_navig_ring_pane_g3

0x734e,	// (0x00013c24) blid2_navig_ring_pane_g4

0x7356,	// (0x00013c2c) blid2_navig_ring_pane_g5

0x0004,

0xfaa0,	// (0x0001c376) blid2_navig_ring_pane_g

0x982f,	// (0x00016105) bg_popup_window_pane_cp011

0xdaa4,	// (0x0001a37a) popup_blid2_search_window_g1

0xdaac,	// (0x0001a382) popup_blid2_search_window_t1

0xdaba,	// (0x0001a390) popup_blid2_search_window_t2

0x0001,

0xfaab,	// (0x0001c381) popup_blid2_search_window_t

0xa39e,	// (0x00016c74) main_browser_pane_g1

0xa029,	// (0x000168ff) main_browser_pane_ParamLimits

0x989e,	// (0x00016174) bg_button_pane_cp011_ParamLimits

0x6315,	// (0x00012beb) cell_vitu2_function_pane_g1_ParamLimits

0xae31,	// (0x00017707) bg_popup_sub_pane_cp22_ParamLimits

0x6c0d,	// (0x000134e3) input_focus_pane_cp08_ParamLimits

0x6c24,	// (0x000134fa) popup_vitu2_query_button_pane_ParamLimits

0x6c24,	// (0x000134fa) popup_vitu2_query_button_pane

0x6c35,	// (0x0001350b) popup_vitu2_query_input_button_pane

0xd60b,	// (0x00019ee1) popup_vitu2_query_window_g1_ParamLimits

0x6c3d,	// (0x00013513) popup_vitu2_query_window_g2_ParamLimits

0xf9ac,	// (0x0001c282) popup_vitu2_query_window_g_ParamLimits

0x982f,	// (0x00016105) bg_button_pane_cp026

0x735e,	// (0x00013c34) popup_vitu2_query_input_button_pane_g1

0x982f,	// (0x00016105) bg_button_pane_cp025

0xdac8,	// (0x0001a39e) popup_vitu2_query_button_pane_t1

0x4a05,	// (0x000112db) main_mp3_pane_t6

0x4a13,	// (0x000112e9) popup_slider_window_cp01

0xd1f7,	// (0x00019acd) cam4_battery_pane

0xd24a,	// (0x00019b20) cam4_battery_pane_cp02

0xd8f0,	// (0x0001a1c6) cam4_battery_pane_cp01

0xd8f0,	// (0x0001a1c6) cam4_battery_pane_cp03

0xa29e,	// (0x00016b74) cam4_battery_pane_g1

0xdad6,	// (0x0001a3ac) cam4_battery_pane_g2

0x0001,

0xfab0,	// (0x0001c386) cam4_battery_pane_g

0xc4c0,	// (0x00018d96) popup_blid_sat_info2_window_t11

0xab79,	// (0x0001744f) aid_size_touch_mv_arrow_left_ParamLimits

0xaba4,	// (0x0001747a) aid_size_touch_mv_arrow_right_ParamLimits

0xac02,	// (0x000174d8) navi_pane_g1_ParamLimits

0xac0e,	// (0x000174e4) navi_pane_g2_ParamLimits

0xac3c,	// (0x00017512) navi_pane_g3_ParamLimits

0xf374,	// (0x0001bc4a) navi_pane_g_ParamLimits

0x3715,	// (0x0000ffeb) navi_pane_mv_t1_ParamLimits

0x5580,	// (0x00011e56) grid_imed_effect_pane_ParamLimits

0x2648,	// (0x0000ef1e) aid_placing_vt_slider_lsc

0xa2ed,	// (0x00016bc3) aid_placing_vt_slider_prt

0x989e,	// (0x00016174) bg_tb_trans_pane_cp01_ParamLimits

0xc75e,	// (0x00019034) popup_image_details_window_g1_ParamLimits

0xc771,	// (0x00019047) popup_image_details_window_g2_ParamLimits

0xc786,	// (0x0001905c) popup_image_details_window_g3_ParamLimits

0xc786,	// (0x0001905c) popup_image_details_window_g3

0xf6b3,	// (0x0001bf89) popup_image_details_window_g_ParamLimits

0xc79a,	// (0x00019070) popup_image_details_window_t1_ParamLimits

0xc7ac,	// (0x00019082) popup_image_details_window_t2_ParamLimits

0xc7c5,	// (0x0001909b) popup_image_details_window_t3_ParamLimits

0xc7d9,	// (0x000190af) popup_image_details_window_t4_ParamLimits

0xc7f4,	// (0x000190ca) popup_image_details_window_t5_ParamLimits

0xf6ba,	// (0x0001bf90) popup_image_details_window_t_ParamLimits

0x6fb1,	// (0x00013887) cl_header_name_pane_ParamLimits

0x6fb1,	// (0x00013887) cl_header_name_pane

0x7366,	// (0x00013c3c) cl_header_name_pane_t1_ParamLimits

0x7366,	// (0x00013c3c) cl_header_name_pane_t1

0x7387,	// (0x00013c5d) cl_header_name_pane_t2_ParamLimits

0x7387,	// (0x00013c5d) cl_header_name_pane_t2

0x73c9,	// (0x00013c9f) cl_header_name_pane_t3_ParamLimits

0x73c9,	// (0x00013c9f) cl_header_name_pane_t3

0x0002,

0xfab5,	// (0x0001c38b) cl_header_name_pane_t_ParamLimits

0xfab5,	// (0x0001c38b) cl_header_name_pane_t

0xaccb,	// (0x000175a1) navi_pane_mv_g2_ParamLimits

0xd2d5,	// (0x00019bab) field_vitu2_entry_pane_g1_ParamLimits

0xd2e1,	// (0x00019bb7) field_vitu2_entry_pane_g2_ParamLimits

0xadfb,	// (0x000176d1) field_vitu2_entry_pane_g3_ParamLimits

0xadfb,	// (0x000176d1) field_vitu2_entry_pane_g3

0xf8b5,	// (0x0001c18b) field_vitu2_entry_pane_g_ParamLimits

0x61a5,	// (0x00012a7b) cell_vitu2_itu_pane_g1_ParamLimits

0x61bd,	// (0x00012a93) cell_vitu2_itu_pane_g2_ParamLimits

0x61bd,	// (0x00012a93) cell_vitu2_itu_pane_g2

0x0001,

0xf8c1,	// (0x0001c197) cell_vitu2_itu_pane_g_ParamLimits

0xf8c1,	// (0x0001c197) cell_vitu2_itu_pane_g

0x989e,	// (0x00016174) bg_vkb2_func_pane_cp05_ParamLimits

0x989e,	// (0x00016174) bg_vkb2_func_pane_cp05

0x989e,	// (0x00016174) bg_vkb2_func_pane_cp03

0x989e,	// (0x00016174) bg_vkb2_func_pane_cp04

0x989e,	// (0x00016174) bg_vkb2_func_pane_cp10_ParamLimits

0x989e,	// (0x00016174) bg_vkb2_func_pane_cp10

0x6f53,	// (0x00013829) bg_vkb2_func_pane_cp08

0x6f39,	// (0x0001380f) bg_vkb2_func_pane_cp06

0x6f47,	// (0x0001381d) bg_vkb2_func_pane_cp07

0xd9b8,	// (0x0001a28e) bg_vkb2_func_pane_cp11_ParamLimits

0xd9b8,	// (0x0001a28e) bg_vkb2_func_pane_cp11

0xd9cd,	// (0x0001a2a3) bg_vkb2_func_pane_cp12_ParamLimits

0xd9cd,	// (0x0001a2a3) bg_vkb2_func_pane_cp12

0x982f,	// (0x00016105) bg_vkb2_func_pane_cp09

0xd31c,	// (0x00019bf2) bg_vkb2_func_pane_g1

0xa4af,	// (0x00016d85) bg_vkb2_func_pane_g2

0xd324,	// (0x00019bfa) bg_vkb2_func_pane_g3

0xd32c,	// (0x00019c02) bg_vkb2_func_pane_g4

0xd5b0,	// (0x00019e86) bg_vkb2_func_pane_g5

0xd344,	// (0x00019c1a) bg_vkb2_func_pane_g6

0xd34c,	// (0x00019c22) bg_vkb2_func_pane_g7

0xd33c,	// (0x00019c12) bg_vkb2_func_pane_g8

0xa48f,	// (0x00016d65) bg_vkb2_func_pane_g9

0x0008,

0xfabc,	// (0x0001c392) bg_vkb2_func_pane_g

0x728a,	// (0x00013b60) blid2_tripm_pane_g6_ParamLimits

0x728a,	// (0x00013b60) blid2_tripm_pane_g6

0xd0c8,	// (0x0001999e) mp4_progress_pane_g1

0x7303,	// (0x00013bd9) blid2_tripm_values_pane_ParamLimits

0x7303,	// (0x00013bd9) blid2_tripm_values_pane

0x73fa,	// (0x00013cd0) blid2_tripm_values_pane_t1

0x7408,	// (0x00013cde) blid2_tripm_values_pane_t2

0x7416,	// (0x00013cec) blid2_tripm_values_pane_t3

0x7424,	// (0x00013cfa) blid2_tripm_values_pane_t4

0x7432,	// (0x00013d08) blid2_tripm_values_pane_t5

0x7440,	// (0x00013d16) blid2_tripm_values_pane_t6

0x744e,	// (0x00013d24) blid2_tripm_values_pane_t7

0x745c,	// (0x00013d32) blid2_tripm_values_pane_t8

0x746a,	// (0x00013d40) blid2_tripm_values_pane_t9

0x0008,

0xfacf,	// (0x0001c3a5) blid2_tripm_values_pane_t

0x268a,	// (0x0000ef60) call_video_pane_t1_ParamLimits

0x26a8,	// (0x0000ef7e) call_video_pane_t2_ParamLimits

0xf222,	// (0x0001baf8) call_video_pane_t_ParamLimits

0x39d8,	// (0x000102ae) msg_header_pane_g1_ParamLimits

0xaee6,	// (0x000177bc) msg_header_pane_g2_ParamLimits

0xaee6,	// (0x000177bc) msg_header_pane_g2

0x0001,

0xf417,	// (0x0001bced) msg_header_pane_g_ParamLimits

0xf417,	// (0x0001bced) msg_header_pane_g

0xa029,	// (0x000168ff) main_clock2_pane_ParamLimits

0x5281,	// (0x00011b57) grid_clock2_toolbar_pane_ParamLimits

0x5281,	// (0x00011b57) grid_clock2_toolbar_pane

0x5281,	// (0x00011b57) listscroll_clock2_pane_ParamLimits

0x5281,	// (0x00011b57) listscroll_clock2_pane

0x5365,	// (0x00011c3b) main_clock2_pane_t3_ParamLimits

0x5365,	// (0x00011c3b) main_clock2_pane_t3

0x5389,	// (0x00011c5f) main_clock2_pane_t4_ParamLimits

0x5389,	// (0x00011c5f) main_clock2_pane_t4

0xdae0,	// (0x0001a3b6) cell_clock2_toolbar_pane

0xdae8,	// (0x0001a3be) cell_clock2_toolbar_pane_cp01

0xdae8,	// (0x0001a3be) cell_clock2_toolbar_pane_cp02

0xdaf0,	// (0x0001a3c6) cell_clock2_toolbar_pane_cp03

0xdaf8,	// (0x0001a3ce) list_clock2_pane

0xaafe,	// (0x000173d4) scroll_pane_cp10

0xdb00,	// (0x0001a3d6) list_single_clock2_pane_ParamLimits

0xdb00,	// (0x0001a3d6) list_single_clock2_pane

0xa25e,	// (0x00016b34) list_highlight_pane_cp08

0xdb0d,	// (0x0001a3e3) list_single_clock2_pane_t1

0xdb1b,	// (0x0001a3f1) list_single_clock2_pane_t2

0x0001,

0xfae2,	// (0x0001c3b8) list_single_clock2_pane_t

0x982f,	// (0x00016105) bg_button_pane_cp10

0xdb29,	// (0x0001a3ff) cell_clock2_toolbar_pane_g1

0x3a68,	// (0x0001033e) aid_main_viewer_pane_g1_ParamLimits

0x3a68,	// (0x0001033e) aid_main_viewer_pane_g1

0x3a76,	// (0x0001034c) aid_main_viewer_pane_g2_ParamLimits

0x3a76,	// (0x0001034c) aid_main_viewer_pane_g2

0x3a84,	// (0x0001035a) aid_main_viewer_pane_g3_ParamLimits

0x3a84,	// (0x0001035a) aid_main_viewer_pane_g3

0x3a93,	// (0x00010369) aid_main_viewer_pane_g4_ParamLimits

0x3a93,	// (0x00010369) aid_main_viewer_pane_g4

0x0003,

0xf428,	// (0x0001bcfe) aid_main_viewer_pane_g_ParamLimits

0xf428,	// (0x0001bcfe) aid_main_viewer_pane_g

0x43dc,	// (0x00010cb2) main_calc_pane_ParamLimits

0x43f0,	// (0x00010cc6) main_dialer2_pane_ParamLimits

0x982f,	// (0x00016105) main_cam6_pane

0x982f,	// (0x00016105) main_vid6_pane

0x528d,	// (0x00011b63) listscroll_gen_pane_cp06_ParamLimits

0x528d,	// (0x00011b63) listscroll_gen_pane_cp06

0x53ac,	// (0x00011c82) main_clock2_pane_t5_ParamLimits

0x53ac,	// (0x00011c82) main_clock2_pane_t5

0x540a,	// (0x00011ce0) aid_call2_pane_cp10_ParamLimits

0x541c,	// (0x00011cf2) aid_call_pane_cp10_ParamLimits

0xab6d,	// (0x00017443) popup_clock_analogue_window_cp10_g1_ParamLimits

0xab6d,	// (0x00017443) popup_clock_analogue_window_cp10_g2_ParamLimits

0x542e,	// (0x00011d04) popup_clock_analogue_window_cp10_g3_ParamLimits

0x542e,	// (0x00011d04) popup_clock_analogue_window_cp10_g4_ParamLimits

0xab6d,	// (0x00017443) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf76f,	// (0x0001c045) popup_clock_analogue_window_cp10_g_ParamLimits

0x5444,	// (0x00011d1a) popup_clock_analogue_window_cp10_t1_ParamLimits

0x594d,	// (0x00012223) cell_dialer2_keypad_pane_g2_ParamLimits

0x594d,	// (0x00012223) cell_dialer2_keypad_pane_g2

0x0001,

0xf854,	// (0x0001c12a) cell_dialer2_keypad_pane_g_ParamLimits

0xf854,	// (0x0001c12a) cell_dialer2_keypad_pane_g

0x5969,	// (0x0001223f) cell_dialer2_keypad_pane_t1

0x6635,	// (0x00012f0b) main_cset_text2_pane_ParamLimits

0x6635,	// (0x00012f0b) main_cset_text2_pane

0xd7f7,	// (0x0001a0cd) area_vitu2_query_pane_g1_ParamLimits

0x6ed8,	// (0x000137ae) area_vitu2_query_pane_g2_ParamLimits

0xf9ff,	// (0x0001c2d5) area_vitu2_query_pane_g_ParamLimits

0xd87b,	// (0x0001a151) area_vitu2_query_pane_t7_ParamLimits

0xd87b,	// (0x0001a151) area_vitu2_query_pane_t7

0x6f39,	// (0x0001380f) bg_button_pane_cp018_ParamLimits

0x6f47,	// (0x0001381d) bg_button_pane_cp021_ParamLimits

0x6f53,	// (0x00013829) bg_button_pane_cp022_ParamLimits

0x6f53,	// (0x00013829) bg_vkb2_func_pane_cp08_ParamLimits

0x6f39,	// (0x0001380f) bg_vkb2_func_pane_cp06_ParamLimits

0x6f47,	// (0x0001381d) bg_vkb2_func_pane_cp07_ParamLimits

0x6f64,	// (0x0001383a) input_focus_pane_cp09_ParamLimits

0xdb31,	// (0x0001a407) cam6_autofocus_pane_ParamLimits

0xdb31,	// (0x0001a407) cam6_autofocus_pane

0x7478,	// (0x00013d4e) cam6_image_uncrop_pane_ParamLimits

0x7478,	// (0x00013d4e) cam6_image_uncrop_pane

0x7487,	// (0x00013d5d) cam6_indi_pane_ParamLimits

0x7487,	// (0x00013d5d) cam6_indi_pane

0x749d,	// (0x00013d73) cam6_mode_pane_ParamLimits

0x749d,	// (0x00013d73) cam6_mode_pane

0x74af,	// (0x00013d85) cam6_timer_pane_ParamLimits

0x74af,	// (0x00013d85) cam6_timer_pane

0x74bf,	// (0x00013d95) cam6_zoom_pane_ParamLimits

0x74bf,	// (0x00013d95) cam6_zoom_pane

0x74cb,	// (0x00013da1) cam6_mode_pane_g1_ParamLimits

0x74cb,	// (0x00013da1) cam6_mode_pane_g1

0x74db,	// (0x00013db1) cam6_mode_pane_g2_ParamLimits

0x74db,	// (0x00013db1) cam6_mode_pane_g2

0x74eb,	// (0x00013dc1) cam6_mode_pane_g3_ParamLimits

0x74eb,	// (0x00013dc1) cam6_mode_pane_g3

0x74fb,	// (0x00013dd1) cam6_mode_pane_g4_ParamLimits

0x74fb,	// (0x00013dd1) cam6_mode_pane_g4

0x0003,

0xfae7,	// (0x0001c3bd) cam6_mode_pane_g_ParamLimits

0xfae7,	// (0x0001c3bd) cam6_mode_pane_g

0xcc56,	// (0x0001952c) bg_tb_trans_pane_cp08_ParamLimits

0xcc56,	// (0x0001952c) bg_tb_trans_pane_cp08

0xdb3f,	// (0x0001a415) cam6_battery_pane_ParamLimits

0xdb3f,	// (0x0001a415) cam6_battery_pane

0xdb55,	// (0x0001a42b) cam6_indi_pane_g1_ParamLimits

0xdb55,	// (0x0001a42b) cam6_indi_pane_g1

0xdb67,	// (0x0001a43d) cam6_indi_pane_g2_ParamLimits

0xdb67,	// (0x0001a43d) cam6_indi_pane_g2

0xdb79,	// (0x0001a44f) cam6_indi_pane_g3_ParamLimits

0xdb79,	// (0x0001a44f) cam6_indi_pane_g3

0x0002,

0xfaf0,	// (0x0001c3c6) cam6_indi_pane_g_ParamLimits

0xfaf0,	// (0x0001c3c6) cam6_indi_pane_g

0xdb8b,	// (0x0001a461) cam6_indi_pane_t1_ParamLimits

0xdb8b,	// (0x0001a461) cam6_indi_pane_t1

0x750b,	// (0x00013de1) cam6_autofocus_pane_g1

0x7513,	// (0x00013de9) cam6_autofocus_pane_g2

0x751b,	// (0x00013df1) cam6_autofocus_pane_g3

0x7523,	// (0x00013df9) cam6_autofocus_pane_g4

0x0003,

0xfaf7,	// (0x0001c3cd) cam6_autofocus_pane_g

0xdbb1,	// (0x0001a487) cam6_timer_pane_g1

0xdbb9,	// (0x0001a48f) cam6_timer_pane_t1

0xdbc7,	// (0x0001a49d) cam6_zoom_cont_pane

0xdbcf,	// (0x0001a4a5) cam6_zoom_pane_g1

0xdbd7,	// (0x0001a4ad) cam6_zoom_pane_g2

0x752b,	// (0x00013e01) cam6_zoom_pane_g3

0x0002,

0xfb00,	// (0x0001c3d6) cam6_zoom_pane_g

0xa29e,	// (0x00016b74) cam6_battery_pane_g1

0xa29e,	// (0x00016b74) cam6_battery_pane_g2

0x0001,

0xf3d8,	// (0x0001bcae) cam6_battery_pane_g

0xdbdf,	// (0x0001a4b5) cam6_zoom_cont_pane_g1

0xdbe8,	// (0x0001a4be) cam6_zoom_cont_pane_g2

0xdbf1,	// (0x0001a4c7) cam6_zoom_cont_pane_g3

0x0002,

0xfb07,	// (0x0001c3dd) cam6_zoom_cont_pane_g

0x7548,	// (0x00013e1e) cam6_mode_pane_cp_ParamLimits

0x7548,	// (0x00013e1e) cam6_mode_pane_cp

0x74bf,	// (0x00013d95) cam6_zoom_pane_cp_ParamLimits

0x74bf,	// (0x00013d95) cam6_zoom_pane_cp

0x755a,	// (0x00013e30) vid6_image_uncrop_cif_pane_ParamLimits

0x755a,	// (0x00013e30) vid6_image_uncrop_cif_pane

0x756a,	// (0x00013e40) vid6_image_uncrop_nhd_pane_ParamLimits

0x756a,	// (0x00013e40) vid6_image_uncrop_nhd_pane

0x7478,	// (0x00013d4e) vid6_image_uncrop_vga_pane_ParamLimits

0x7478,	// (0x00013d4e) vid6_image_uncrop_vga_pane

0x7579,	// (0x00013e4f) vid6_image_uncrop_wvga_pane_ParamLimits

0x7579,	// (0x00013e4f) vid6_image_uncrop_wvga_pane

0x7588,	// (0x00013e5e) vid6_indi_pane_ParamLimits

0x7588,	// (0x00013e5e) vid6_indi_pane

0xcc56,	// (0x0001952c) bg_tb_trans_pane_cp09_ParamLimits

0xcc56,	// (0x0001952c) bg_tb_trans_pane_cp09

0xdc09,	// (0x0001a4df) cam6_battery_pane_cp_ParamLimits

0xdc09,	// (0x0001a4df) cam6_battery_pane_cp

0xdc15,	// (0x0001a4eb) vid6_indi_pane_g1_ParamLimits

0xdc15,	// (0x0001a4eb) vid6_indi_pane_g1

0xdc27,	// (0x0001a4fd) vid6_indi_pane_g2_ParamLimits

0xdc27,	// (0x0001a4fd) vid6_indi_pane_g2

0xdc39,	// (0x0001a50f) vid6_indi_pane_g3_ParamLimits

0xdc39,	// (0x0001a50f) vid6_indi_pane_g3

0xdc4e,	// (0x0001a524) vid6_indi_pane_g4_ParamLimits

0xdc4e,	// (0x0001a524) vid6_indi_pane_g4

0xdc63,	// (0x0001a539) vid6_indi_pane_g5_ParamLimits

0xdc63,	// (0x0001a539) vid6_indi_pane_g5

0x0004,

0xfb0e,	// (0x0001c3e4) vid6_indi_pane_g_ParamLimits

0xfb0e,	// (0x0001c3e4) vid6_indi_pane_g

0xdc7d,	// (0x0001a553) vid6_indi_pane_t1_ParamLimits

0xdc7d,	// (0x0001a553) vid6_indi_pane_t1

0xdc93,	// (0x0001a569) vid6_indi_pane_t2_ParamLimits

0xdc93,	// (0x0001a569) vid6_indi_pane_t2

0xdcbb,	// (0x0001a591) vid6_indi_pane_t3_ParamLimits

0xdcbb,	// (0x0001a591) vid6_indi_pane_t3

0xdce3,	// (0x0001a5b9) vid6_indi_pane_t4_ParamLimits

0xdce3,	// (0x0001a5b9) vid6_indi_pane_t4

0x0003,

0xfb19,	// (0x0001c3ef) vid6_indi_pane_t_ParamLimits

0xfb19,	// (0x0001c3ef) vid6_indi_pane_t

0xdd07,	// (0x0001a5dd) wait_bar_pane_cp08

0x75a0,	// (0x00013e76) main_cset_text2_pane_t1_ParamLimits

0x75a0,	// (0x00013e76) main_cset_text2_pane_t1

0x7533,	// (0x00013e09) listscroll_gen_pane_cp06_t1_ParamLimits

0x7533,	// (0x00013e09) listscroll_gen_pane_cp06_t1

0x982f,	// (0x00016105) main_cam6_set_pane

0x9f95,	// (0x0001686b) bg_tb_trans_pane_cp06_ParamLimits

0xd1ff,	// (0x00019ad5) cam4_indicators_pane_g1_ParamLimits

0xd210,	// (0x00019ae6) cam4_indicators_pane_g2_ParamLimits

0xf891,	// (0x0001c167) cam4_indicators_pane_g_ParamLimits

0xd228,	// (0x00019afe) cam4_indicators_pane_t1_ParamLimits

0x989e,	// (0x00016174) bg_tb_trans_pane_cp07_ParamLimits

0xd252,	// (0x00019b28) vid4_indicators_pane_g1_ParamLimits

0xd266,	// (0x00019b3c) vid4_indicators_pane_g2_ParamLimits

0xd27a,	// (0x00019b50) vid4_indicators_pane_g3_ParamLimits

0xd28b,	// (0x00019b61) vid4_indicators_pane_g4_ParamLimits

0xf8a3,	// (0x0001c179) vid4_indicators_pane_g_ParamLimits

0xd2a7,	// (0x00019b7d) vid4_indicators_pane_t1_ParamLimits

0xd8f8,	// (0x0001a1ce) vid4_progress_pane_g1_ParamLimits

0xd908,	// (0x0001a1de) vid4_progress_pane_g2_ParamLimits

0x70a4,	// (0x0001397a) vid4_progress_pane_g3_ParamLimits

0xd918,	// (0x0001a1ee) vid4_progress_pane_g4_ParamLimits

0xfa4a,	// (0x0001c320) vid4_progress_pane_g_ParamLimits

0x70b6,	// (0x0001398c) vid4_progress_pane_t1_ParamLimits

0xd930,	// (0x0001a206) vid4_progress_pane_t2_ParamLimits

0xd945,	// (0x0001a21b) vid4_progress_pane_t3_ParamLimits

0xfa55,	// (0x0001c32b) vid4_progress_pane_t_ParamLimits

0x70cc,	// (0x000139a2) wait_bar_pane_cp07_ParamLimits

0x75be,	// (0x00013e94) main_cam6_set_pane_g2_ParamLimits

0x75be,	// (0x00013e94) main_cam6_set_pane_g2

0x75e2,	// (0x00013eb8) main_cset6_listscroll_pane_ParamLimits

0x75e2,	// (0x00013eb8) main_cset6_listscroll_pane

0x75fe,	// (0x00013ed4) main_cset6_slider_pane_ParamLimits

0x75fe,	// (0x00013ed4) main_cset6_slider_pane

0x7614,	// (0x00013eea) main_cset6_text2_pane_ParamLimits

0x7614,	// (0x00013eea) main_cset6_text2_pane

0xdd16,	// (0x0001a5ec) main_cset6_text_pane

0xdd1e,	// (0x0001a5f4) main_cset_list_pane_copy1_ParamLimits

0xdd1e,	// (0x0001a5f4) main_cset_list_pane_copy1

0xdd2e,	// (0x0001a604) scroll_pane_cp028_copy1

0x7622,	// (0x00013ef8) cset_list_set_pane_copy1

0x7634,	// (0x00013f0a) aid_position_infowindow_above_copy1

0x763c,	// (0x00013f12) aid_position_infowindow_below_copy1

0xdd37,	// (0x0001a60d) cset_list_set_pane_g1_copy1

0xdd3f,	// (0x0001a615) cset_list_set_pane_g3_copy1_ParamLimits

0xdd3f,	// (0x0001a615) cset_list_set_pane_g3_copy1

0xdd4e,	// (0x0001a624) cset_list_set_pane_t1_copy1_ParamLimits

0xdd4e,	// (0x0001a624) cset_list_set_pane_t1_copy1

0x989e,	// (0x00016174) list_highlight_pane_cp021_copy1_ParamLimits

0x989e,	// (0x00016174) list_highlight_pane_cp021_copy1

0xdd63,	// (0x0001a639) cset6_slider_pane_ParamLimits

0xdd63,	// (0x0001a639) cset6_slider_pane

0xdd8f,	// (0x0001a665) main_cset6_slider_pane_g1_ParamLimits

0xdd8f,	// (0x0001a665) main_cset6_slider_pane_g1

0x7644,	// (0x00013f1a) main_cset6_slider_pane_g2_ParamLimits

0x7644,	// (0x00013f1a) main_cset6_slider_pane_g2

0xddb7,	// (0x0001a68d) main_cset6_slider_pane_g3_ParamLimits

0xddb7,	// (0x0001a68d) main_cset6_slider_pane_g3

0x766c,	// (0x00013f42) main_cset6_slider_pane_g4_ParamLimits

0x766c,	// (0x00013f42) main_cset6_slider_pane_g4

0xddc3,	// (0x0001a699) main_cset6_slider_pane_g5_ParamLimits

0xddc3,	// (0x0001a699) main_cset6_slider_pane_g5

0xd44b,	// (0x00019d21) main_cset6_slider_pane_g7_ParamLimits

0xd44b,	// (0x00019d21) main_cset6_slider_pane_g7

0xd457,	// (0x00019d2d) main_cset6_slider_pane_g8_ParamLimits

0xd457,	// (0x00019d2d) main_cset6_slider_pane_g8

0x66db,	// (0x00012fb1) main_cset6_slider_pane_g9_ParamLimits

0x66db,	// (0x00012fb1) main_cset6_slider_pane_g9

0x66e7,	// (0x00012fbd) main_cset6_slider_pane_g10_ParamLimits

0x66e7,	// (0x00012fbd) main_cset6_slider_pane_g10

0x66f3,	// (0x00012fc9) main_cset6_slider_pane_g11_ParamLimits

0x66f3,	// (0x00012fc9) main_cset6_slider_pane_g11

0x66ff,	// (0x00012fd5) main_cset6_slider_pane_g12_ParamLimits

0x66ff,	// (0x00012fd5) main_cset6_slider_pane_g12

0x670b,	// (0x00012fe1) main_cset6_slider_pane_g13_ParamLimits

0x670b,	// (0x00012fe1) main_cset6_slider_pane_g13

0x6717,	// (0x00012fed) main_cset6_slider_pane_g14_ParamLimits

0x6717,	// (0x00012fed) main_cset6_slider_pane_g14

0x7678,	// (0x00013f4e) main_cset6_slider_pane_g15_ParamLimits

0x7678,	// (0x00013f4e) main_cset6_slider_pane_g15

0xd463,	// (0x00019d39) main_cset6_slider_pane_g16_ParamLimits

0xd463,	// (0x00019d39) main_cset6_slider_pane_g16

0xd46f,	// (0x00019d45) main_cset6_slider_pane_g17_ParamLimits

0xd46f,	// (0x00019d45) main_cset6_slider_pane_g17

0x0011,

0xfb22,	// (0x0001c3f8) main_cset6_slider_pane_g_ParamLimits

0xfb22,	// (0x0001c3f8) main_cset6_slider_pane_g

0xddcf,	// (0x0001a6a5) main_cset6_slider_pane_t1_ParamLimits

0xddcf,	// (0x0001a6a5) main_cset6_slider_pane_t1

0x76a8,	// (0x00013f7e) main_cset6_slider_pane_t2_ParamLimits

0x76a8,	// (0x00013f7e) main_cset6_slider_pane_t2

0x76d3,	// (0x00013fa9) main_cset6_slider_pane_t3_ParamLimits

0x76d3,	// (0x00013fa9) main_cset6_slider_pane_t3

0x76fe,	// (0x00013fd4) main_cset6_slider_pane_t4_ParamLimits

0x76fe,	// (0x00013fd4) main_cset6_slider_pane_t4

0x7729,	// (0x00013fff) main_cset6_slider_pane_t5_ParamLimits

0x7729,	// (0x00013fff) main_cset6_slider_pane_t5

0xde10,	// (0x0001a6e6) main_cset6_slider_pane_t7_ParamLimits

0xde10,	// (0x0001a6e6) main_cset6_slider_pane_t7

0x7754,	// (0x0001402a) main_cset6_slider_pane_t8_ParamLimits

0x7754,	// (0x0001402a) main_cset6_slider_pane_t8

0x7778,	// (0x0001404e) main_cset6_slider_pane_t9_ParamLimits

0x7778,	// (0x0001404e) main_cset6_slider_pane_t9

0x779c,	// (0x00014072) main_cset6_slider_pane_t10_ParamLimits

0x779c,	// (0x00014072) main_cset6_slider_pane_t10

0x77c0,	// (0x00014096) main_cset6_slider_pane_t11_ParamLimits

0x77c0,	// (0x00014096) main_cset6_slider_pane_t11

0xde46,	// (0x0001a71c) main_cset6_slider_pane_t14_ParamLimits

0xde46,	// (0x0001a71c) main_cset6_slider_pane_t14

0xde7f,	// (0x0001a755) main_cset6_slider_pane_t15_ParamLimits

0xde7f,	// (0x0001a755) main_cset6_slider_pane_t15

0x000b,

0xfb47,	// (0x0001c41d) main_cset6_slider_pane_t_ParamLimits

0xfb47,	// (0x0001c41d) main_cset6_slider_pane_t

0xcd66,	// (0x0001963c) cset_slider_pane_g1_copy1

0xd551,	// (0x00019e27) cset_slider_pane_g2_copy1

0xd55a,	// (0x00019e30) cset_slider_pane_g3_copy1

0x982f,	// (0x00016105) bg_popup_sub_pane_cp011_copy1

0xdec1,	// (0x0001a797) main_cset_text_pane_g1_copy1

0xd61f,	// (0x00019ef5) main_cset_text_pane_t1_copy1

0xd62d,	// (0x00019f03) main_cset_text_pane_t2_copy1

0xd63b,	// (0x00019f11) main_cset_text_pane_t3_copy1

0xd649,	// (0x00019f1f) main_cset_text_pane_t4_copy1

0xd657,	// (0x00019f2d) main_cset_text_pane_t5_copy1

0xdec9,	// (0x0001a79f) main_cset_text_pane_t6_copy1

0xded7,	// (0x0001a7ad) main_cset_text_pane_t7_copy1

0x75a0,	// (0x00013e76) main_cset_text2_pane_t1_copy1

0x989e,	// (0x00016174) main_ncimui_pane

0x4640,	// (0x00010f16) popup_query_ncimui_window_ParamLimits

0x4640,	// (0x00010f16) popup_query_ncimui_window

0xc8d1,	// (0x000191a7) field_cale_ev2_pane_g4_ParamLimits

0xc8d1,	// (0x000191a7) field_cale_ev2_pane_g4

0x582c,	// (0x00012102) cell_video_dialer_keypad_pane_g2_ParamLimits

0x582c,	// (0x00012102) cell_video_dialer_keypad_pane_g2

0x0001,

0xf82b,	// (0x0001c101) cell_video_dialer_keypad_pane_g_ParamLimits

0xf82b,	// (0x0001c101) cell_video_dialer_keypad_pane_g

0x5844,	// (0x0001211a) cell_video_dialer_keypad_pane_t1

0x982f,	// (0x00016105) bg_popup_window_pane_cp012

0xc079,	// (0x0001894f) heading_pane_cp06

0xdf03,	// (0x0001a7d9) ncim_query_content_pane

0x982f,	// (0x00016105) bg_popup_heading_pane_cp01

0xdf0b,	// (0x0001a7e1) ncim_heading_pane_t1

0xdf19,	// (0x0001a7ef) ncim_indicator_popup_pane

0xdf2b,	// (0x0001a801) ncim_query_button_pane

0xdf3f,	// (0x0001a815) ncim_query_content_pane_t1

0xdf51,	// (0x0001a827) ncim_query_content_pane_t2

0x0005,

0xfb8b,	// (0x0001c461) ncim_query_content_pane_t

0xdf8b,	// (0x0001a861) ncim_query_list_pane

0xdf9d,	// (0x0001a873) ncim_query_popup_pane

0xdf19,	// (0x0001a7ef) ncim_indicator_popup_pane_ParamLimits

0x792a,	// (0x00014200) ncim_query_content_pane_g1_ParamLimits

0x792a,	// (0x00014200) ncim_query_content_pane_g1

0xdf3f,	// (0x0001a815) ncim_query_content_pane_t1_ParamLimits

0xdf51,	// (0x0001a827) ncim_query_content_pane_t2_ParamLimits

0x7936,	// (0x0001420c) ncim_query_content_pane_t3_ParamLimits

0x7936,	// (0x0001420c) ncim_query_content_pane_t3

0x795e,	// (0x00014234) ncim_query_content_pane_t4_ParamLimits

0x795e,	// (0x00014234) ncim_query_content_pane_t4

0x7986,	// (0x0001425c) ncim_query_content_pane_t5_ParamLimits

0x7986,	// (0x0001425c) ncim_query_content_pane_t5

0xdf63,	// (0x0001a839) ncim_query_content_pane_t6_ParamLimits

0xdf63,	// (0x0001a839) ncim_query_content_pane_t6

0xfb8b,	// (0x0001c461) ncim_query_content_pane_t_ParamLimits

0xdf8b,	// (0x0001a861) ncim_query_list_pane_ParamLimits

0xdf9d,	// (0x0001a873) ncim_query_popup_pane_ParamLimits

0xdfb1,	// (0x0001a887) wait_bar_pane_cp04

0x982f,	// (0x00016105) input_focus_pane_cp011

0xdfb9,	// (0x0001a88f) ncim_query_popup_pane_t1

0xdfc7,	// (0x0001a89d) ncim_list_query_list_pane_ParamLimits

0xdfc7,	// (0x0001a89d) ncim_list_query_list_pane

0x982f,	// (0x00016105) bg_button_pane_cp027

0xdfd4,	// (0x0001a8aa) ncim_query_button_pane_g1

0x982f,	// (0x00016105) list_highlight_pane_cp012

0xdfde,	// (0x0001a8b4) ncim_list_query_list_pane_g1

0xdfe6,	// (0x0001a8bc) ncim_list_query_list_pane_t1

0xd21c,	// (0x00019af2) cam4_indicators_pane_g3_ParamLimits

0xd21c,	// (0x00019af2) cam4_indicators_pane_g3

0xd297,	// (0x00019b6d) vid4_indicators_pane_g5_ParamLimits

0xd297,	// (0x00019b6d) vid4_indicators_pane_g5

0xd924,	// (0x0001a1fa) vid4_progress_pane_g5_ParamLimits

0xd924,	// (0x0001a1fa) vid4_progress_pane_g5

0x7815,	// (0x000140eb) main_ncimui_pane_g1

0x787e,	// (0x00014154) ncimui_group_query_pane_ParamLimits

0x787e,	// (0x00014154) ncimui_group_query_pane

0x78c6,	// (0x0001419c) ncimui_list_pane_ParamLimits

0x78c6,	// (0x0001419c) ncimui_list_pane

0x78ed,	// (0x000141c3) ncimui_text_pane_ParamLimits

0x78ed,	// (0x000141c3) ncimui_text_pane

0x79ae,	// (0x00014284) ncimui_text_pane_t1_ParamLimits

0x79ae,	// (0x00014284) ncimui_text_pane_t1

0xdff4,	// (0x0001a8ca) ncimui_list_single_graphic_pane_ParamLimits

0xdff4,	// (0x0001a8ca) ncimui_list_single_graphic_pane

0x79cc,	// (0x000142a2) ncimui_query_pane_ParamLimits

0x79cc,	// (0x000142a2) ncimui_query_pane

0x982f,	// (0x00016105) list_highlight_pane_cp013

0xe004,	// (0x0001a8da) ncim_list_query_list_pane_t1_copy1

0xe012,	// (0x0001a8e8) ncim_list_single_graphic_pane_g1

0x79df,	// (0x000142b5) ncim_query_button_pane_cp01

0x79eb,	// (0x000142c1) ncim_query_entry_pane_ParamLimits

0x79eb,	// (0x000142c1) ncim_query_entry_pane

0x79fe,	// (0x000142d4) ncimui_query_pane_g1

0x7a0a,	// (0x000142e0) ncimui_query_pane_t1_ParamLimits

0x7a0a,	// (0x000142e0) ncimui_query_pane_t1

0x989e,	// (0x00016174) input_focus_pane_cp012

0xe01a,	// (0x0001a8f0) ncim_query_entry_pane_t1

0xa029,	// (0x000168ff) main_im_pane_ParamLimits

0x989e,	// (0x00016174) main_mobtv_pane_ParamLimits

0x989e,	// (0x00016174) main_mobtv_pane

0x7690,	// (0x00013f66) main_cset6_slider_pane_g18_ParamLimits

0x7690,	// (0x00013f66) main_cset6_slider_pane_g18

0x769c,	// (0x00013f72) main_cset6_slider_pane_g19_ParamLimits

0x769c,	// (0x00013f72) main_cset6_slider_pane_g19

0x9fb1,	// (0x00016887) bg_main_mobtv_pane_ParamLimits

0x9fb1,	// (0x00016887) bg_main_mobtv_pane

0x7a23,	// (0x000142f9) main_mobtv_info_pane

0x7a2c,	// (0x00014302) main_mobtv_loading_pane_ParamLimits

0x7a2c,	// (0x00014302) main_mobtv_loading_pane

0xe02c,	// (0x0001a902) main_mobtv_pg_channel_list_pane

0xe036,	// (0x0001a90c) main_mobtv_pg_hdr_pane

0x7a39,	// (0x0001430f) main_mobtv_programe_curr_pane_ParamLimits

0x7a39,	// (0x0001430f) main_mobtv_programe_curr_pane

0x7a46,	// (0x0001431c) main_mobtv_programe_next_pane_ParamLimits

0x7a46,	// (0x0001431c) main_mobtv_programe_next_pane

0xe03f,	// (0x0001a915) popup_mobtv_noti_window

0xa29e,	// (0x00016b74) main_tv_pg_hdr_pane_g1

0xe047,	// (0x0001a91d) main_tv_pg_hdr_pane_g2

0xe04f,	// (0x0001a925) main_tv_pg_hdr_pane_g3

0xe057,	// (0x0001a92d) main_tv_pg_hdr_pane_g4

0xe05f,	// (0x0001a935) main_tv_pg_hdr_pane_g5

0xe069,	// (0x0001a93f) main_tv_pg_hdr_pane_g6

0xe07f,	// (0x0001a955) main_tv_pg_hdr_pane_g7

0xe089,	// (0x0001a95f) main_tv_pg_hdr_pane_g8

0xe093,	// (0x0001a969) main_tv_pg_hdr_pane_g9

0xe09d,	// (0x0001a973) main_tv_pg_hdr_pane_g10

0xe0a7,	// (0x0001a97d) main_tv_pg_hdr_pane_g11

0x000a,

0xfb98,	// (0x0001c46e) main_tv_pg_hdr_pane_g

0xe0b1,	// (0x0001a987) main_tv_pg_hdr_pane_t1

0xe0bf,	// (0x0001a995) main_tv_pg_hdr_pane_t2

0xe0cd,	// (0x0001a9a3) main_tv_pg_hdr_pane_t3

0xe0dd,	// (0x0001a9b3) main_tv_pg_hdr_pane_t4

0xe0ed,	// (0x0001a9c3) main_tv_pg_hdr_pane_t5

0x0004,

0xfbaf,	// (0x0001c485) main_tv_pg_hdr_pane_t

0xe0fd,	// (0x0001a9d3) single_mobtv_pg_channel_pane_ParamLimits

0xe0fd,	// (0x0001a9d3) single_mobtv_pg_channel_pane

0xe10f,	// (0x0001a9e5) single_mobtv_pg_channel_table_pane

0xa5be,	// (0x00016e94) single_mobtv_pg_channel_thumb_pane

0xe118,	// (0x0001a9ee) single_tv_pg_channel_pane_g1

0xe121,	// (0x0001a9f7) single_tv_pg_channel_pane_g2

0x0001,

0xfbba,	// (0x0001c490) single_tv_pg_channel_pane_g

0x9f95,	// (0x0001686b) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x9f95,	// (0x0001686b) bg_single_mobtv_pg_channel_thumb_pane

0xe12a,	// (0x0001aa00) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe12a,	// (0x0001aa00) single_mobtv_pg_channel_thumb_pane_g1

0xe138,	// (0x0001aa0e) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe138,	// (0x0001aa0e) single_mobtv_pg_channel_thumb_pane_g2

0xe144,	// (0x0001aa1a) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe144,	// (0x0001aa1a) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfbbf,	// (0x0001c495) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfbbf,	// (0x0001c495) single_mobtv_pg_channel_thumb_pane_g

0xe150,	// (0x0001aa26) single_mobtv_pg_channel_thumb_pane_t1

0xe15e,	// (0x0001aa34) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfbc6,	// (0x0001c49c) single_mobtv_pg_channel_thumb_pane_t

0xa29e,	// (0x00016b74) bg_single_mobtv_pg_channel_table_pane_g1

0xa29e,	// (0x00016b74) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf3d8,	// (0x0001bcae) bg_single_mobtv_pg_channel_table_pane_g

0xe16c,	// (0x0001aa42) single_mobtv_pg_channel_table_pane_t1

0xe17a,	// (0x0001aa50) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfbcb,	// (0x0001c4a1) single_mobtv_pg_channel_table_pane_t

0x7a5b,	// (0x00014331) main_mobtv_info_pane_g1_ParamLimits

0x7a5b,	// (0x00014331) main_mobtv_info_pane_g1

0x7a79,	// (0x0001434f) main_mobtv_info_pane_t1_ParamLimits

0x7a79,	// (0x0001434f) main_mobtv_info_pane_t1

0x7af1,	// (0x000143c7) main_mobtv_info_pane_t2_ParamLimits

0x7af1,	// (0x000143c7) main_mobtv_info_pane_t2

0x0002,

0xfbd5,	// (0x0001c4ab) main_mobtv_info_pane_t_ParamLimits

0xfbd5,	// (0x0001c4ab) main_mobtv_info_pane_t

0x7b80,	// (0x00014456) wait_bar_pane_cp05

0x7b92,	// (0x00014468) main_mobtv_loading_pane_g1_ParamLimits

0x7b92,	// (0x00014468) main_mobtv_loading_pane_g1

0x7ba5,	// (0x0001447b) main_mobtv_loading_pane_g2_ParamLimits

0x7ba5,	// (0x0001447b) main_mobtv_loading_pane_g2

0x7bb1,	// (0x00014487) main_mobtv_loading_pane_g3_ParamLimits

0x7bb1,	// (0x00014487) main_mobtv_loading_pane_g3

0x0002,

0xfbdc,	// (0x0001c4b2) main_mobtv_loading_pane_g_ParamLimits

0xfbdc,	// (0x0001c4b2) main_mobtv_loading_pane_g

0xe188,	// (0x0001aa5e) main_mobtv_loading_pane_t1_ParamLimits

0xe188,	// (0x0001aa5e) main_mobtv_loading_pane_t1

0xe1a0,	// (0x0001aa76) main_mobtv_loading_pane_t2_ParamLimits

0xe1a0,	// (0x0001aa76) main_mobtv_loading_pane_t2

0x0001,

0xfbe3,	// (0x0001c4b9) main_mobtv_loading_pane_t_ParamLimits

0xfbe3,	// (0x0001c4b9) main_mobtv_loading_pane_t

0x7bc4,	// (0x0001449a) wait_bar_pane_cp06_ParamLimits

0x7bc4,	// (0x0001449a) wait_bar_pane_cp06

0xe1c4,	// (0x0001aa9a) main_mobtv_programe_curr_pane_t1

0xe1d2,	// (0x0001aaa8) main_mobtv_programe_curr_pane_t2

0x0001,

0xfbe8,	// (0x0001c4be) main_mobtv_programe_curr_pane_t

0xe1e0,	// (0x0001aab6) main_mobtv_programe_next_pane_t1

0xe1ee,	// (0x0001aac4) main_mobtv_programe_next_pane_t2

0xe1fc,	// (0x0001aad2) main_mobtv_programe_next_pane_t3

0x0002,

0xfbed,	// (0x0001c4c3) main_mobtv_programe_next_pane_t

0x982f,	// (0x00016105) bg_popup_mobtv_noti_window_pane

0xe20a,	// (0x0001aae0) popup_mobtv_noti_window_g1

0xe212,	// (0x0001aae8) popup_mobtv_noti_window_t1

0xe220,	// (0x0001aaf6) popup_mobtv_noti_window_t2

0x0001,

0xfbf4,	// (0x0001c4ca) popup_mobtv_noti_window_t

0xa29e,	// (0x00016b74) bg_popup_mobtv_noti_window_pane_g1

0x982f,	// (0x00016105) sc_clock_pane

0x982f,	// (0x00016105) main_fs_bigclock_pane

0x72ed,	// (0x00013bc3) blid2_tripm_pane_t4_ParamLimits

0x72ed,	// (0x00013bc3) blid2_tripm_pane_t4

0x7bd3,	// (0x000144a9) sc_clock_pane_g1_ParamLimits

0x7bd3,	// (0x000144a9) sc_clock_pane_g1

0x7be5,	// (0x000144bb) sc_clock_pane_t1_ParamLimits

0x7be5,	// (0x000144bb) sc_clock_pane_t1

0x7c07,	// (0x000144dd) sc_clock_pane_t2_ParamLimits

0x7c07,	// (0x000144dd) sc_clock_pane_t2

0x7c1f,	// (0x000144f5) sc_clock_pane_t3_ParamLimits

0x7c1f,	// (0x000144f5) sc_clock_pane_t3

0x0004,

0xfbf9,	// (0x0001c4cf) sc_clock_pane_t_ParamLimits

0xfbf9,	// (0x0001c4cf) sc_clock_pane_t

0x8938,	// (0x0001520e) main_fs_bigclock_indicator_pane_ParamLimits

0x8938,	// (0x0001520e) main_fs_bigclock_indicator_pane

0x7cc5,	// (0x0001459b) main_fs_bigclock_pane_g1_ParamLimits

0x7cc5,	// (0x0001459b) main_fs_bigclock_pane_g1

0x8944,	// (0x0001521a) main_fs_bigclock_pane_t1_ParamLimits

0x8944,	// (0x0001521a) main_fs_bigclock_pane_t1

0x8956,	// (0x0001522c) main_fs_bigclock_pane_t2_ParamLimits

0x8956,	// (0x0001522c) main_fs_bigclock_pane_t2

0x896a,	// (0x00015240) main_fs_bigclock_pane_t3_ParamLimits

0x896a,	// (0x00015240) main_fs_bigclock_pane_t3

0x0002,

0xfd8a,	// (0x0001c660) main_fs_bigclock_pane_t_ParamLimits

0xfd8a,	// (0x0001c660) main_fs_bigclock_pane_t

0xeda2,	// (0x0001b678) main_fs_bigclock_indicator_pane_g1

0xdf33,	// (0x0001a809) ncim_query_content_pane_g2_ParamLimits

0xdf33,	// (0x0001a809) ncim_query_content_pane_g2

0x0001,

0xfb86,	// (0x0001c45c) ncim_query_content_pane_g_ParamLimits

0xfb86,	// (0x0001c45c) ncim_query_content_pane_g

0x7c38,	// (0x0001450e) sc_clock_pane_t4_ParamLimits

0x7c38,	// (0x0001450e) sc_clock_pane_t4

0x989e,	// (0x00016174) main_radioblah_pane

0xd165,	// (0x00019a3b) cell_call4_button_pane_t1_copy1_ParamLimits

0xd165,	// (0x00019a3b) cell_call4_button_pane_t1_copy1

0x782d,	// (0x00014103) main_ncimui_pane_t1_ParamLimits

0x782d,	// (0x00014103) main_ncimui_pane_t1

0x7847,	// (0x0001411d) main_ncimui_pane_t2_ParamLimits

0x7847,	// (0x0001411d) main_ncimui_pane_t2

0x0002,

0xfb7f,	// (0x0001c455) main_ncimui_pane_t_ParamLimits

0xfb7f,	// (0x0001c455) main_ncimui_pane_t

0xe366,	// (0x0001ac3c) main_radioblah_anim_pane_ParamLimits

0xe366,	// (0x0001ac3c) main_radioblah_anim_pane

0xe377,	// (0x0001ac4d) main_radioblah_info_pane_ParamLimits

0xe377,	// (0x0001ac4d) main_radioblah_info_pane

0xe38b,	// (0x0001ac61) main_radioblah_pane_t1_ParamLimits

0xe38b,	// (0x0001ac61) main_radioblah_pane_t1

0xe3a7,	// (0x0001ac7d) main_radioblah_pane_t2_ParamLimits

0xe3a7,	// (0x0001ac7d) main_radioblah_pane_t2

0x0003,

0xfc1a,	// (0x0001c4f0) main_radioblah_pane_t_ParamLimits

0xfc1a,	// (0x0001c4f0) main_radioblah_pane_t

0x7d24,	// (0x000145fa) main_radioblah_rocker_ctrl_pane_ParamLimits

0x7d24,	// (0x000145fa) main_radioblah_rocker_ctrl_pane

0xe3ef,	// (0x0001acc5) main_radioblah_info_pane_t1_ParamLimits

0xe3ef,	// (0x0001acc5) main_radioblah_info_pane_t1

0x7d7c,	// (0x00014652) main_radioblah_info_pane_t2_ParamLimits

0x7d7c,	// (0x00014652) main_radioblah_info_pane_t2

0x0003,

0xfc23,	// (0x0001c4f9) main_radioblah_info_pane_t_ParamLimits

0xfc23,	// (0x0001c4f9) main_radioblah_info_pane_t

0xa29e,	// (0x00016b74) main_radioblah_rocker_ctrl_pane_g1

0x7e2c,	// (0x00014702) main_radioblah_rocker_ctrl_pane_g2

0x7e34,	// (0x0001470a) main_radioblah_rocker_ctrl_pane_g3

0x7e3c,	// (0x00014712) main_radioblah_rocker_ctrl_pane_g4

0x7e44,	// (0x0001471a) main_radioblah_rocker_ctrl_pane_g5

0x7e4c,	// (0x00014722) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc2c,	// (0x0001c502) main_radioblah_rocker_ctrl_pane_g

0x75a0,	// (0x00013e76) main_cset_text2_pane_t1_copy1_ParamLimits

0xd1ef,	// (0x00019ac5) cam4_image_uncrop_qvga_pane

0xd242,	// (0x00019b18) vid4_image_uncrop_qcif_pane

0xdb31,	// (0x0001a407) cam6_image_uncrop_qvga_pane_ParamLimits

0xdb31,	// (0x0001a407) cam6_image_uncrop_qvga_pane

0xdbf9,	// (0x0001a4cf) vid6_image_uncrop_qcif_pane_ParamLimits

0xdbf9,	// (0x0001a4cf) vid6_image_uncrop_qcif_pane

0x982f,	// (0x00016105) bg_popup_preview_window_pane_cp03

0xdee5,	// (0x0001a7bb) list_cset_text2_pane

0xdeed,	// (0x0001a7c3) main_cset6_text2_pane_g1

0xdef5,	// (0x0001a7cb) main_cset6_text2_pane_t1

0x043b,	// (0x0000cd11) list_cset_text2_pane_t1_ParamLimits

0x043b,	// (0x0000cd11) list_cset_text2_pane_t1

0x989e,	// (0x00016174) main_radioblah_pane_ParamLimits

0x7b6c,	// (0x00014442) main_mobtv_info_pane_t3_ParamLimits

0x7b6c,	// (0x00014442) main_mobtv_info_pane_t3

0x7d12,	// (0x000145e8) main_radioblah_pane_g1

0x7d4c,	// (0x00014622) main_radioblah_info_pane_g1

0x7dd1,	// (0x000146a7) main_radioblah_info_pane_t3_ParamLimits

0x7dd1,	// (0x000146a7) main_radioblah_info_pane_t3

0x3313,	// (0x0000fbe9) highlight_cell_cale_month_pane_ParamLimits

0x3313,	// (0x0000fbe9) highlight_cell_cale_month_pane

0x982f,	// (0x00016105) main_phob_fisheye_pane

0xc972,	// (0x00019248) scroll_pane_cp0031_ParamLimits

0xc972,	// (0x00019248) scroll_pane_cp0031

0xdd07,	// (0x0001a5dd) wait_bar_pane_cp08_ParamLimits

0x7622,	// (0x00013ef8) cset_list_set_pane_copy1_ParamLimits

0xe429,	// (0x0001acff) highlight_cell_cale_month_pane_g1

0x7e54,	// (0x0001472a) highlight_cell_cale_month_pane_t1

0xd8e7,	// (0x0001a1bd) list_gen_pane_cp01

0xd436,	// (0x00019d0c) scroll_pane_01

0x7e62,	// (0x00014738) list_single_double_fisheye_pane

0x7e6b,	// (0x00014741) list_double_fisheye_pane_g1_ParamLimits

0x7e6b,	// (0x00014741) list_double_fisheye_pane_g1

0x7e77,	// (0x0001474d) list_double_fisheye_pane_g2_ParamLimits

0x7e77,	// (0x0001474d) list_double_fisheye_pane_g2

0x7e8b,	// (0x00014761) list_double_fisheye_pane_g3_ParamLimits

0x7e8b,	// (0x00014761) list_double_fisheye_pane_g3

0x0004,

0xfc39,	// (0x0001c50f) list_double_fisheye_pane_g_ParamLimits

0xfc39,	// (0x0001c50f) list_double_fisheye_pane_g

0x7eb4,	// (0x0001478a) list_double_fisheye_pane_t1_ParamLimits

0x7eb4,	// (0x0001478a) list_double_fisheye_pane_t1

0x7ecf,	// (0x000147a5) list_double_fisheye_pane_t2_ParamLimits

0x7ecf,	// (0x000147a5) list_double_fisheye_pane_t2

0x0001,

0xfc44,	// (0x0001c51a) list_double_fisheye_pane_t_ParamLimits

0xfc44,	// (0x0001c51a) list_double_fisheye_pane_t

0x982f,	// (0x00016105) main_call5_pane

0x7c63,	// (0x00014539) sc_swipe_pane_ParamLimits

0x7c63,	// (0x00014539) sc_swipe_pane

0x7f04,	// (0x000147da) call5_image_pane_ParamLimits

0x7f04,	// (0x000147da) call5_image_pane

0x7f21,	// (0x000147f7) call5_swipe_1_pane_ParamLimits

0x7f21,	// (0x000147f7) call5_swipe_1_pane

0x7f34,	// (0x0001480a) call5_swipe_2_pane_ParamLimits

0x7f34,	// (0x0001480a) call5_swipe_2_pane

0x7f5f,	// (0x00014835) popup_call5_audio_first_window_ParamLimits

0x7f5f,	// (0x00014835) popup_call5_audio_first_window

0x9f95,	// (0x0001686b) call5_swipe_1_pane_g1_ParamLimits

0x9f95,	// (0x0001686b) call5_swipe_1_pane_g1

0xe431,	// (0x0001ad07) call5_swipe_1_pane_g2_ParamLimits

0xe431,	// (0x0001ad07) call5_swipe_1_pane_g2

0x0001,

0xfc49,	// (0x0001c51f) call5_swipe_1_pane_g_ParamLimits

0xfc49,	// (0x0001c51f) call5_swipe_1_pane_g

0xe43d,	// (0x0001ad13) call5_swipe_1_pane_t1_ParamLimits

0xe43d,	// (0x0001ad13) call5_swipe_1_pane_t1

0x9f95,	// (0x0001686b) call5_swipe_2_pane_g1_ParamLimits

0x9f95,	// (0x0001686b) call5_swipe_2_pane_g1

0xe452,	// (0x0001ad28) call5_swipe_2_pane_g2_ParamLimits

0xe452,	// (0x0001ad28) call5_swipe_2_pane_g2

0x0001,

0xfc4e,	// (0x0001c524) call5_swipe_2_pane_g_ParamLimits

0xfc4e,	// (0x0001c524) call5_swipe_2_pane_g

0xe45e,	// (0x0001ad34) call5_swipe_2_pane_t1_ParamLimits

0xe45e,	// (0x0001ad34) call5_swipe_2_pane_t1

0xe473,	// (0x0001ad49) sc_swipe_pane_g1_ParamLimits

0xe473,	// (0x0001ad49) sc_swipe_pane_g1

0xe480,	// (0x0001ad56) sc_swipe_pane_g2_ParamLimits

0xe480,	// (0x0001ad56) sc_swipe_pane_g2

0x0001,

0xfc53,	// (0x0001c529) sc_swipe_pane_g_ParamLimits

0xfc53,	// (0x0001c529) sc_swipe_pane_g

0xe48c,	// (0x0001ad62) sc_swipe_pane_t1_ParamLimits

0xe48c,	// (0x0001ad62) sc_swipe_pane_t1

0x982f,	// (0x00016105) main_cmail_launcher_pane

0x7f70,	// (0x00014846) aid_size_cell_cmail_l_ParamLimits

0x7f70,	// (0x00014846) aid_size_cell_cmail_l

0x7f7e,	// (0x00014854) grid_cmail_l_pane_ParamLimits

0x7f7e,	// (0x00014854) grid_cmail_l_pane

0x7f98,	// (0x0001486e) cell_cmail_l_pane_ParamLimits

0x7f98,	// (0x0001486e) cell_cmail_l_pane

0xe4a1,	// (0x0001ad77) cell_cmail_l_pane_g1_ParamLimits

0xe4a1,	// (0x0001ad77) cell_cmail_l_pane_g1

0xe4ad,	// (0x0001ad83) cell_cmail_l_pane_t1_ParamLimits

0xe4ad,	// (0x0001ad83) cell_cmail_l_pane_t1

0xe4c3,	// (0x0001ad99) cell_cmail_l_pane_t2_ParamLimits

0xe4c3,	// (0x0001ad99) cell_cmail_l_pane_t2

0x0001,

0xfc58,	// (0x0001c52e) cell_cmail_l_pane_t_ParamLimits

0xfc58,	// (0x0001c52e) cell_cmail_l_pane_t

0x989e,	// (0x00016174) grid_highlight_pane_cp018_ParamLimits

0x989e,	// (0x00016174) grid_highlight_pane_cp018

0x1937,	// (0x0000e20d) main2_pane_ParamLimits

0x1937,	// (0x0000e20d) main2_pane

0xa0e5,	// (0x000169bb) popup_sp_fs_action_menu_bg_pane_g1

0xa0ed,	// (0x000169c3) popup_sp_fs_action_menu_bg_pane_g2

0xa0f5,	// (0x000169cb) popup_sp_fs_action_menu_bg_pane_g3

0xa0fd,	// (0x000169d3) popup_sp_fs_action_menu_bg_pane_g4

0xa105,	// (0x000169db) popup_sp_fs_action_menu_bg_pane_g5

0xa10d,	// (0x000169e3) popup_sp_fs_action_menu_bg_pane_g6

0xa115,	// (0x000169eb) popup_sp_fs_action_menu_bg_pane_g7

0xa11d,	// (0x000169f3) popup_sp_fs_action_menu_bg_pane_g8

0xa125,	// (0x000169fb) popup_sp_fs_action_menu_bg_pane_g9

0xa12d,	// (0x00016a03) popup_sp_fs_action_menu_bg_pane_g10

0xa12d,	// (0x00016a03) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf145,	// (0x0001ba1b) popup_sp_fs_action_menu_bg_pane_g

0x9f95,	// (0x0001686b) list_medium_line_x2_t3_g3_g1_ParamLimits

0x9f95,	// (0x0001686b) list_medium_line_x2_t3_g3_g1

0x9f95,	// (0x0001686b) list_medium_line_x2_t3_g3_g2_ParamLimits

0x9f95,	// (0x0001686b) list_medium_line_x2_t3_g3_g2

0x9f95,	// (0x0001686b) list_medium_line_x2_t3_g3_g3_ParamLimits

0x9f95,	// (0x0001686b) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1f3,	// (0x0001bac9) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1f3,	// (0x0001bac9) list_medium_line_x2_t3_g3_g

0xa270,	// (0x00016b46) list_medium_line_x2_t3_g3_t1_ParamLimits

0xa270,	// (0x00016b46) list_medium_line_x2_t3_g3_t1

0xa270,	// (0x00016b46) list_medium_line_x2_t3_g3_t2_ParamLimits

0xa270,	// (0x00016b46) list_medium_line_x2_t3_g3_t2

0xa270,	// (0x00016b46) list_medium_line_x2_t3_g3_t3_ParamLimits

0xa270,	// (0x00016b46) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1fa,	// (0x0001bad0) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1fa,	// (0x0001bad0) list_medium_line_x2_t3_g3_t

0x9f95,	// (0x0001686b) list_medium_line_x2_t3_g2_g1_ParamLimits

0x9f95,	// (0x0001686b) list_medium_line_x2_t3_g2_g1

0x9f95,	// (0x0001686b) list_medium_line_x2_t3_g2_g2_ParamLimits

0x9f95,	// (0x0001686b) list_medium_line_x2_t3_g2_g2

0x0001,

0xf201,	// (0x0001bad7) list_medium_line_x2_t3_g2_g_ParamLimits

0xf201,	// (0x0001bad7) list_medium_line_x2_t3_g2_g

0xa270,	// (0x00016b46) list_medium_line_x2_t3_g2_t1_ParamLimits

0xa270,	// (0x00016b46) list_medium_line_x2_t3_g2_t1

0xa270,	// (0x00016b46) list_medium_line_x2_t3_g2_t2_ParamLimits

0xa270,	// (0x00016b46) list_medium_line_x2_t3_g2_t2

0xa270,	// (0x00016b46) list_medium_line_x2_t3_g2_t3_ParamLimits

0xa270,	// (0x00016b46) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1fa,	// (0x0001bad0) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1fa,	// (0x0001bad0) list_medium_line_x2_t3_g2_t

0x9f95,	// (0x0001686b) list_medium_line_x2_t4_g4_g1_ParamLimits

0x9f95,	// (0x0001686b) list_medium_line_x2_t4_g4_g1

0x9f95,	// (0x0001686b) list_medium_line_x2_t4_g4_g2_ParamLimits

0x9f95,	// (0x0001686b) list_medium_line_x2_t4_g4_g2

0x9f95,	// (0x0001686b) list_medium_line_x2_t4_g4_g3_ParamLimits

0x9f95,	// (0x0001686b) list_medium_line_x2_t4_g4_g3

0x9f95,	// (0x0001686b) list_medium_line_x2_t4_g4_g4_ParamLimits

0x9f95,	// (0x0001686b) list_medium_line_x2_t4_g4_g4

0x0003,

0xf206,	// (0x0001badc) list_medium_line_x2_t4_g4_g_ParamLimits

0xf206,	// (0x0001badc) list_medium_line_x2_t4_g4_g

0xa270,	// (0x00016b46) list_medium_line_x2_t4_g4_t1_ParamLimits

0xa270,	// (0x00016b46) list_medium_line_x2_t4_g4_t1

0xa270,	// (0x00016b46) list_medium_line_x2_t4_g4_t2_ParamLimits

0xa270,	// (0x00016b46) list_medium_line_x2_t4_g4_t2

0xa270,	// (0x00016b46) list_medium_line_x2_t4_g4_t3_ParamLimits

0xa270,	// (0x00016b46) list_medium_line_x2_t4_g4_t3

0xa270,	// (0x00016b46) list_medium_line_x2_t4_g4_t4_ParamLimits

0xa270,	// (0x00016b46) list_medium_line_x2_t4_g4_t4

0x0003,

0xf20f,	// (0x0001bae5) list_medium_line_x2_t4_g4_t_ParamLimits

0xf20f,	// (0x0001bae5) list_medium_line_x2_t4_g4_t

0x9f95,	// (0x0001686b) list_medium_line_x2_t2_g4_g1_ParamLimits

0x9f95,	// (0x0001686b) list_medium_line_x2_t2_g4_g1

0x9f95,	// (0x0001686b) list_medium_line_x2_t2_g4_g2_ParamLimits

0x9f95,	// (0x0001686b) list_medium_line_x2_t2_g4_g2

0x9f95,	// (0x0001686b) list_medium_line_x2_t2_g4_g3_ParamLimits

0x9f95,	// (0x0001686b) list_medium_line_x2_t2_g4_g3

0x9f95,	// (0x0001686b) list_medium_line_x2_t2_g4_g4_ParamLimits

0x9f95,	// (0x0001686b) list_medium_line_x2_t2_g4_g4

0x0003,

0xf206,	// (0x0001badc) list_medium_line_x2_t2_g4_g_ParamLimits

0xf206,	// (0x0001badc) list_medium_line_x2_t2_g4_g

0xa270,	// (0x00016b46) list_medium_line_x2_t2_g4_t1_ParamLimits

0xa270,	// (0x00016b46) list_medium_line_x2_t2_g4_t1

0xa270,	// (0x00016b46) list_medium_line_x2_t2_g4_t2_ParamLimits

0xa270,	// (0x00016b46) list_medium_line_x2_t2_g4_t2

0x0001,

0xf1d6,	// (0x0001baac) list_medium_line_x2_t2_g4_t_ParamLimits

0xf1d6,	// (0x0001baac) list_medium_line_x2_t2_g4_t

0x9f95,	// (0x0001686b) list_medium_line_x2_t2_g3_g1_ParamLimits

0x9f95,	// (0x0001686b) list_medium_line_x2_t2_g3_g1

0x9f95,	// (0x0001686b) list_medium_line_x2_t2_g3_g2_ParamLimits

0x9f95,	// (0x0001686b) list_medium_line_x2_t2_g3_g2

0x9f95,	// (0x0001686b) list_medium_line_x2_t2_g3_g3_ParamLimits

0x9f95,	// (0x0001686b) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1f3,	// (0x0001bac9) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1f3,	// (0x0001bac9) list_medium_line_x2_t2_g3_g

0xa270,	// (0x00016b46) list_medium_line_x2_t2_g3_t1_ParamLimits

0xa270,	// (0x00016b46) list_medium_line_x2_t2_g3_t1

0xa270,	// (0x00016b46) list_medium_line_x2_t2_g3_t2_ParamLimits

0xa270,	// (0x00016b46) list_medium_line_x2_t2_g3_t2

0x0001,

0xf1d6,	// (0x0001baac) list_medium_line_x2_t2_g3_t_ParamLimits

0xf1d6,	// (0x0001baac) list_medium_line_x2_t2_g3_t

0x3478,	// (0x0000fd4e) main_sp_fs_list_pane_ParamLimits

0x3478,	// (0x0000fd4e) main_sp_fs_list_pane

0xe073,	// (0x0001a949) sp_fs_scroll_pane_ParamLimits

0xe073,	// (0x0001a949) sp_fs_scroll_pane

0xa7ff,	// (0x000170d5) list_medium_line_x2_t3_t1

0xa7ff,	// (0x000170d5) list_medium_line_x2_t3_t2

0xa7ff,	// (0x000170d5) list_medium_line_x2_t3_t3

0x0002,

0xf2bc,	// (0x0001bb92) list_medium_line_x2_t3_t

0xa7ff,	// (0x000170d5) list_medium_line_x3_t4_t1

0xa7ff,	// (0x000170d5) list_medium_line_x3_t4_t2

0xa7ff,	// (0x000170d5) list_medium_line_x3_t4_t3

0xa7ff,	// (0x000170d5) list_medium_line_x3_t4_t4

0x0003,

0xf2c3,	// (0x0001bb99) list_medium_line_x3_t4_t

0xa7ff,	// (0x000170d5) list_medium_line_x4_t5_t1

0xa7ff,	// (0x000170d5) list_medium_line_x4_t5_t2

0xa7ff,	// (0x000170d5) list_medium_line_x4_t5_t3

0xa7ff,	// (0x000170d5) list_medium_line_x4_t5_t4

0xa7ff,	// (0x000170d5) list_medium_line_x4_t5_t5

0x0004,

0xf2cc,	// (0x0001bba2) list_medium_line_x4_t5_t

0x9f95,	// (0x0001686b) list_medium_line_t4_g4_g1_ParamLimits

0x9f95,	// (0x0001686b) list_medium_line_t4_g4_g1

0x9f95,	// (0x0001686b) list_medium_line_t4_g4_g2_ParamLimits

0x9f95,	// (0x0001686b) list_medium_line_t4_g4_g2

0x9f95,	// (0x0001686b) list_medium_line_t4_g4_g3_ParamLimits

0x9f95,	// (0x0001686b) list_medium_line_t4_g4_g3

0x9f95,	// (0x0001686b) list_medium_line_t4_g4_g4_ParamLimits

0x9f95,	// (0x0001686b) list_medium_line_t4_g4_g4

0x0003,

0xf206,	// (0x0001badc) list_medium_line_t4_g4_g_ParamLimits

0xf206,	// (0x0001badc) list_medium_line_t4_g4_g

0xa270,	// (0x00016b46) list_medium_line_t4_g4_t1_ParamLimits

0xa270,	// (0x00016b46) list_medium_line_t4_g4_t1

0xa270,	// (0x00016b46) list_medium_line_t4_g4_t2_ParamLimits

0xa270,	// (0x00016b46) list_medium_line_t4_g4_t2

0xa270,	// (0x00016b46) list_medium_line_t4_g4_t3_ParamLimits

0xa270,	// (0x00016b46) list_medium_line_t4_g4_t3

0xa270,	// (0x00016b46) list_medium_line_t4_g4_t4_ParamLimits

0xa270,	// (0x00016b46) list_medium_line_t4_g4_t4

0x0003,

0xf20f,	// (0x0001bae5) list_medium_line_t4_g4_t_ParamLimits

0xf20f,	// (0x0001bae5) list_medium_line_t4_g4_t

0x3523,	// (0x0000fdf9) chi_dic_find_pane_g1

0x4410,	// (0x00010ce6) main_tport_pane

0xa7ff,	// (0x000170d5) list_medium_line_plain_t1

0x9f95,	// (0x0001686b) list_medium_line_t2_g2_g1_ParamLimits

0x9f95,	// (0x0001686b) list_medium_line_t2_g2_g1

0x9f95,	// (0x0001686b) list_medium_line_t2_g2_g2_ParamLimits

0x9f95,	// (0x0001686b) list_medium_line_t2_g2_g2

0x0001,

0xf201,	// (0x0001bad7) list_medium_line_t2_g2_g_ParamLimits

0xf201,	// (0x0001bad7) list_medium_line_t2_g2_g

0xa270,	// (0x00016b46) list_medium_line_t2_g2_t1_ParamLimits

0xa270,	// (0x00016b46) list_medium_line_t2_g2_t1

0xa270,	// (0x00016b46) list_medium_line_t2_g2_t2_ParamLimits

0xa270,	// (0x00016b46) list_medium_line_t2_g2_t2

0x0001,

0xf1d6,	// (0x0001baac) list_medium_line_t2_g2_t_ParamLimits

0xf1d6,	// (0x0001baac) list_medium_line_t2_g2_t

0xd95b,	// (0x0001a231) aid_sp_fs_list_icon_a_sm

0xd963,	// (0x0001a239) aid_sp_fs_list_icon_d

0xd96b,	// (0x0001a241) aid_sp_fs_text_primary

0xd974,	// (0x0001a24a) aid_sp_fs_text_secondary

0x982f,	// (0x00016105) list_medium_line

0x982f,	// (0x00016105) list_medium_line_g2

0x982f,	// (0x00016105) list_medium_line_g3

0x982f,	// (0x00016105) list_medium_line_plain

0x982f,	// (0x00016105) list_medium_line_plain_t2

0x982f,	// (0x00016105) list_medium_line_plain_t3

0x982f,	// (0x00016105) list_medium_line_right_icon

0x982f,	// (0x00016105) list_medium_line_right_iconx2

0x982f,	// (0x00016105) list_medium_line_t2

0x982f,	// (0x00016105) list_medium_line_t2_g2

0x982f,	// (0x00016105) list_medium_line_t2_g3

0x982f,	// (0x00016105) list_medium_line_t2_right_icon

0x982f,	// (0x00016105) list_medium_line_t2_right_iconx2

0x982f,	// (0x00016105) list_medium_line_t3

0x982f,	// (0x00016105) list_medium_line_t3_g2

0x982f,	// (0x00016105) list_medium_line_t3_g3

0x982f,	// (0x00016105) list_medium_line_t3_right_iconx2

0x982f,	// (0x00016105) list_medium_line_t4_g4

0x982f,	// (0x00016105) list_medium_line_x2

0x982f,	// (0x00016105) list_medium_line_x2_t2_g2

0x982f,	// (0x00016105) list_medium_line_x2_t2_g3

0x982f,	// (0x00016105) list_medium_line_x2_t2_g4

0x982f,	// (0x00016105) list_medium_line_x2_t3

0x982f,	// (0x00016105) list_medium_line_x2_t3_g2

0x982f,	// (0x00016105) list_medium_line_x2_t3_g3

0x982f,	// (0x00016105) list_medium_line_x2_t3_g4

0x982f,	// (0x00016105) list_medium_line_x2_t4_g2

0x982f,	// (0x00016105) list_medium_line_x2_t4_g4

0x982f,	// (0x00016105) list_medium_line_x3

0x982f,	// (0x00016105) list_medium_line_x3_t4

0x982f,	// (0x00016105) list_medium_line_x3_t4_g4

0x982f,	// (0x00016105) list_medium_line_x4_t4

0x982f,	// (0x00016105) list_medium_line_x4_t4_g7

0x982f,	// (0x00016105) list_medium_line_x4_t5

0x70dd,	// (0x000139b3) list_single_fs_dyc_pane_ParamLimits

0x70dd,	// (0x000139b3) list_single_fs_dyc_pane

0x9f95,	// (0x0001686b) list_medium_line_x4_t4_g7_g1_ParamLimits

0x9f95,	// (0x0001686b) list_medium_line_x4_t4_g7_g1

0x9f95,	// (0x0001686b) list_medium_line_x4_t4_g7_g2_ParamLimits

0x9f95,	// (0x0001686b) list_medium_line_x4_t4_g7_g2

0x9f95,	// (0x0001686b) list_medium_line_x4_t4_g7_g3_ParamLimits

0x9f95,	// (0x0001686b) list_medium_line_x4_t4_g7_g3

0x9f95,	// (0x0001686b) list_medium_line_x4_t4_g7_g4_ParamLimits

0x9f95,	// (0x0001686b) list_medium_line_x4_t4_g7_g4

0x9f95,	// (0x0001686b) list_medium_line_x4_t4_g7_g5_ParamLimits

0x9f95,	// (0x0001686b) list_medium_line_x4_t4_g7_g5

0x9f95,	// (0x0001686b) list_medium_line_x4_t4_g7_g6_ParamLimits

0x9f95,	// (0x0001686b) list_medium_line_x4_t4_g7_g6

0x9fa3,	// (0x00016879) list_medium_line_x4_t4_g7_g7_ParamLimits

0x9fa3,	// (0x00016879) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb60,	// (0x0001c436) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb60,	// (0x0001c436) list_medium_line_x4_t4_g7_g

0xa270,	// (0x00016b46) list_medium_line_x4_t4_g7_t1_ParamLimits

0xa270,	// (0x00016b46) list_medium_line_x4_t4_g7_t1

0xa270,	// (0x00016b46) list_medium_line_x4_t4_g7_t2_ParamLimits

0xa270,	// (0x00016b46) list_medium_line_x4_t4_g7_t2

0xa270,	// (0x00016b46) list_medium_line_x4_t4_g7_t3_ParamLimits

0xa270,	// (0x00016b46) list_medium_line_x4_t4_g7_t3

0xae1d,	// (0x000176f3) list_medium_line_x4_t4_g7_t4_ParamLimits

0xae1d,	// (0x000176f3) list_medium_line_x4_t4_g7_t4

0xae1d,	// (0x000176f3) list_medium_line_x4_t4_g7_t5_ParamLimits

0xae1d,	// (0x000176f3) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb6f,	// (0x0001c445) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb6f,	// (0x0001c445) list_medium_line_x4_t4_g7_t

0x77e4,	// (0x000140ba) list_single_dyc_row_pane_ParamLimits

0x77e4,	// (0x000140ba) list_single_dyc_row_pane

0x7ef1,	// (0x000147c7) call5_gesture_pane_ParamLimits

0x7ef1,	// (0x000147c7) call5_gesture_pane

0x7f47,	// (0x0001481d) call5_windows_pane_ParamLimits

0x7f47,	// (0x0001481d) call5_windows_pane

0x7fb2,	// (0x00014888) call5_swipe_1_pane_cp_ParamLimits

0x7fb2,	// (0x00014888) call5_swipe_1_pane_cp

0x7fbe,	// (0x00014894) call5_swipe_2_pane_cp_ParamLimits

0x7fbe,	// (0x00014894) call5_swipe_2_pane_cp

0xa25e,	// (0x00016b34) call5_image_pane_cp

0x7fca,	// (0x000148a0) popup_call5_audio_first_window_cp_ParamLimits

0x7fca,	// (0x000148a0) popup_call5_audio_first_window_cp

0xe473,	// (0x0001ad49) call5_swipe_1_pane_g1_cp_ParamLimits

0xe473,	// (0x0001ad49) call5_swipe_1_pane_g1_cp

0xe4e0,	// (0x0001adb6) call5_swipe_1_pane_g2_cp

0xe48c,	// (0x0001ad62) call5_swipe_1_pane_t1_cp_ParamLimits

0xe48c,	// (0x0001ad62) call5_swipe_1_pane_t1_cp

0xe473,	// (0x0001ad49) call5_swipe_2_pane_g1_cp_ParamLimits

0xe473,	// (0x0001ad49) call5_swipe_2_pane_g1_cp

0xe4e8,	// (0x0001adbe) call5_swipe_2_pane_g2_cp

0xe4f0,	// (0x0001adc6) call5_swipe_2_pane_t1_cp_ParamLimits

0xe4f0,	// (0x0001adc6) call5_swipe_2_pane_t1_cp

0x989e,	// (0x00016174) main_sp_fs_email_pane

0xe505,	// (0x0001addb) main_sp_fs_listscroll_pane_te

0x7fd8,	// (0x000148ae) popup_sp_fs_action_menu_pane_ParamLimits

0x7fd8,	// (0x000148ae) popup_sp_fs_action_menu_pane

0xa29e,	// (0x00016b74) bg_sp_fs_ctrlbar_pane_g1

0xe50e,	// (0x0001ade4) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe517,	// (0x0001aded) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xc0f2,	// (0x000189c8) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xa29e,	// (0x00016b74) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc5d,	// (0x0001c533) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc284,	// (0x00018b5a) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc284,	// (0x00018b5a) bg_sp_fs_ctrlbar_ddmenu_pane

0xe520,	// (0x0001adf6) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe520,	// (0x0001adf6) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe52c,	// (0x0001ae02) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe52c,	// (0x0001ae02) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc66,	// (0x0001c53c) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc66,	// (0x0001c53c) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe538,	// (0x0001ae0e) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe538,	// (0x0001ae0e) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xa29e,	// (0x00016b74) list_medium_line_t2_right_icon_g1

0xa7ff,	// (0x000170d5) list_medium_line_t2_right_icon_t1

0xa7ff,	// (0x000170d5) list_medium_line_t2_right_icon_t2

0x0001,

0xfc6b,	// (0x0001c541) list_medium_line_t2_right_icon_t

0xae31,	// (0x00017707) bg_sp_fs_ctrlbar_pane_ParamLimits

0xae31,	// (0x00017707) bg_sp_fs_ctrlbar_pane

0x8062,	// (0x00014938) main_sp_fs_ctrlbar_button_pane_cp01

0x806c,	// (0x00014942) main_sp_fs_ctrlbar_ddmenu_pane

0xe58a,	// (0x0001ae60) main_sp_fs_ctrlbar_pane_g1

0xe596,	// (0x0001ae6c) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc70,	// (0x0001c546) main_sp_fs_ctrlbar_pane_g

0x80aa,	// (0x00014980) main_sp_fs_ctrlbar_pane_t1

0x80e9,	// (0x000149bf) main_sp_fs_ctrlbar_pane

0x810d,	// (0x000149e3) main_sp_fs_listscroll_pane_te_cp01

0x812d,	// (0x00014a03) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x812d,	// (0x00014a03) popup_sp_fs_action_menu_pane_cp01

0x989e,	// (0x00016174) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x989e,	// (0x00016174) bg_sp_fs_highlight_list_pane_cp01

0xe5bd,	// (0x0001ae93) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe5bd,	// (0x0001ae93) sp_fs_action_menu_list_gene_pane_g1

0xe5cc,	// (0x0001aea2) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe5cc,	// (0x0001aea2) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc7e,	// (0x0001c554) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc7e,	// (0x0001c554) sp_fs_action_menu_list_gene_pane_g

0xe5d9,	// (0x0001aeaf) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe5d9,	// (0x0001aeaf) sp_fs_action_menu_list_gene_pane_t1

0xe5f1,	// (0x0001aec7) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe5f1,	// (0x0001aec7) sp_fs_action_menu_list_gene_pane

0xe610,	// (0x0001aee6) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe610,	// (0x0001aee6) popup_sp_fs_action_menu_bg_pane

0xe61e,	// (0x0001aef4) sp_fs_action_menu_list_pane_ParamLimits

0xe61e,	// (0x0001aef4) sp_fs_action_menu_list_pane

0x8152,	// (0x00014a28) sp_fs_scroll_pane_cp01_ParamLimits

0x8152,	// (0x00014a28) sp_fs_scroll_pane_cp01

0xa7ff,	// (0x000170d5) list_medium_line_plain_t2_t1

0xa7ff,	// (0x000170d5) list_medium_line_plain_t2_t2

0x0001,

0xfc6b,	// (0x0001c541) list_medium_line_plain_t2_t

0xa7ff,	// (0x000170d5) list_medium_line_plain_t3_t1

0xa7ff,	// (0x000170d5) list_medium_line_plain_t3_t2

0xa7ff,	// (0x000170d5) list_medium_line_plain_t3_t3

0x0002,

0xf2bc,	// (0x0001bb92) list_medium_line_plain_t3_t

0x9f95,	// (0x0001686b) list_medium_line_x2_t2_g2_g1_ParamLimits

0x9f95,	// (0x0001686b) list_medium_line_x2_t2_g2_g1

0x9f95,	// (0x0001686b) list_medium_line_x2_t2_g2_g2_ParamLimits

0x9f95,	// (0x0001686b) list_medium_line_x2_t2_g2_g2

0x0001,

0xf201,	// (0x0001bad7) list_medium_line_x2_t2_g2_g_ParamLimits

0xf201,	// (0x0001bad7) list_medium_line_x2_t2_g2_g

0xa270,	// (0x00016b46) list_medium_line_x2_t2_g2_t1_ParamLimits

0xa270,	// (0x00016b46) list_medium_line_x2_t2_g2_t1

0xa270,	// (0x00016b46) list_medium_line_x2_t2_g2_t2_ParamLimits

0xa270,	// (0x00016b46) list_medium_line_x2_t2_g2_t2

0x0001,

0xf1d6,	// (0x0001baac) list_medium_line_x2_t2_g2_t_ParamLimits

0xf1d6,	// (0x0001baac) list_medium_line_x2_t2_g2_t

0x9f95,	// (0x0001686b) list_medium_line_x2_t4_g2_g1_ParamLimits

0x9f95,	// (0x0001686b) list_medium_line_x2_t4_g2_g1

0x9f95,	// (0x0001686b) list_medium_line_x2_t4_g2_g2_ParamLimits

0x9f95,	// (0x0001686b) list_medium_line_x2_t4_g2_g2

0x0001,

0xf201,	// (0x0001bad7) list_medium_line_x2_t4_g2_g_ParamLimits

0xf201,	// (0x0001bad7) list_medium_line_x2_t4_g2_g

0xa270,	// (0x00016b46) list_medium_line_x2_t4_g2_t1_ParamLimits

0xa270,	// (0x00016b46) list_medium_line_x2_t4_g2_t1

0xa270,	// (0x00016b46) list_medium_line_x2_t4_g2_t2_ParamLimits

0xa270,	// (0x00016b46) list_medium_line_x2_t4_g2_t2

0xa270,	// (0x00016b46) list_medium_line_x2_t4_g2_t3_ParamLimits

0xa270,	// (0x00016b46) list_medium_line_x2_t4_g2_t3

0xa270,	// (0x00016b46) list_medium_line_x2_t4_g2_t4_ParamLimits

0xa270,	// (0x00016b46) list_medium_line_x2_t4_g2_t4

0x0003,

0xf20f,	// (0x0001bae5) list_medium_line_x2_t4_g2_t_ParamLimits

0xf20f,	// (0x0001bae5) list_medium_line_x2_t4_g2_t

0xa29e,	// (0x00016b74) list_medium_line_t3_right_iconx2_g1

0xa29e,	// (0x00016b74) list_medium_line_t3_right_iconx2_g2

0xa29e,	// (0x00016b74) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf3dd,	// (0x0001bcb3) list_medium_line_t3_right_iconx2_g

0xa7ff,	// (0x000170d5) list_medium_line_t3_right_iconx2_t1

0xa7ff,	// (0x000170d5) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc6b,	// (0x0001c541) list_medium_line_t3_right_iconx2_t

0x9f95,	// (0x0001686b) list_medium_line_x3_t4_g4_g1_ParamLimits

0x9f95,	// (0x0001686b) list_medium_line_x3_t4_g4_g1

0x9f95,	// (0x0001686b) list_medium_line_x3_t4_g4_g2_ParamLimits

0x9f95,	// (0x0001686b) list_medium_line_x3_t4_g4_g2

0x9f95,	// (0x0001686b) list_medium_line_x3_t4_g4_g3_ParamLimits

0x9f95,	// (0x0001686b) list_medium_line_x3_t4_g4_g3

0x9f95,	// (0x0001686b) list_medium_line_x3_t4_g4_g4_ParamLimits

0x9f95,	// (0x0001686b) list_medium_line_x3_t4_g4_g4

0x0003,

0xf206,	// (0x0001badc) list_medium_line_x3_t4_g4_g_ParamLimits

0xf206,	// (0x0001badc) list_medium_line_x3_t4_g4_g

0xa270,	// (0x00016b46) list_medium_line_x3_t4_g4_t1_ParamLimits

0xa270,	// (0x00016b46) list_medium_line_x3_t4_g4_t1

0xa270,	// (0x00016b46) list_medium_line_x3_t4_g4_t2_ParamLimits

0xa270,	// (0x00016b46) list_medium_line_x3_t4_g4_t2

0xa270,	// (0x00016b46) list_medium_line_x3_t4_g4_t3_ParamLimits

0xa270,	// (0x00016b46) list_medium_line_x3_t4_g4_t3

0xa270,	// (0x00016b46) list_medium_line_x3_t4_g4_t4_ParamLimits

0xa270,	// (0x00016b46) list_medium_line_x3_t4_g4_t4

0x0003,

0xf20f,	// (0x0001bae5) list_medium_line_x3_t4_g4_t_ParamLimits

0xf20f,	// (0x0001bae5) list_medium_line_x3_t4_g4_t

0x8178,	// (0x00014a4e) list_single_dyc_row_text_pane_t1_ParamLimits

0x8178,	// (0x00014a4e) list_single_dyc_row_text_pane_t1

0x81c1,	// (0x00014a97) list_single_dyc_row_text_pane_t2_ParamLimits

0x81c1,	// (0x00014a97) list_single_dyc_row_text_pane_t2

0xe63e,	// (0x0001af14) list_single_dyc_row_text_pane_t3_ParamLimits

0xe63e,	// (0x0001af14) list_single_dyc_row_text_pane_t3

0x0005,

0xfc83,	// (0x0001c559) list_single_dyc_row_text_pane_t_ParamLimits

0xfc83,	// (0x0001c559) list_single_dyc_row_text_pane_t

0xe662,	// (0x0001af38) list_single_dyc_row_pane_g1_ParamLimits

0xe662,	// (0x0001af38) list_single_dyc_row_pane_g1

0xe66e,	// (0x0001af44) list_single_dyc_row_pane_g2_ParamLimits

0xe66e,	// (0x0001af44) list_single_dyc_row_pane_g2

0xe67a,	// (0x0001af50) list_single_dyc_row_pane_g3_ParamLimits

0xe67a,	// (0x0001af50) list_single_dyc_row_pane_g3

0xe686,	// (0x0001af5c) list_single_dyc_row_pane_g4_ParamLimits

0xe686,	// (0x0001af5c) list_single_dyc_row_pane_g4

0x0003,

0xfc90,	// (0x0001c566) list_single_dyc_row_pane_g_ParamLimits

0xfc90,	// (0x0001c566) list_single_dyc_row_pane_g

0xe692,	// (0x0001af68) list_single_dyc_row_text_pane_ParamLimits

0xe692,	// (0x0001af68) list_single_dyc_row_text_pane

0x982f,	// (0x00016105) bg_sp_fs_scroll_pane

0xe6b1,	// (0x0001af87) thumb_sp_fs_scroll_pane

0x9f95,	// (0x0001686b) list_medium_line_g1_ParamLimits

0x9f95,	// (0x0001686b) list_medium_line_g1

0xa270,	// (0x00016b46) list_medium_line_t1_ParamLimits

0xa270,	// (0x00016b46) list_medium_line_t1

0x9f95,	// (0x0001686b) list_medium_line_x2_g1_ParamLimits

0x9f95,	// (0x0001686b) list_medium_line_x2_g1

0x9f95,	// (0x0001686b) list_medium_line_x2_g2_ParamLimits

0x9f95,	// (0x0001686b) list_medium_line_x2_g2

0x0001,

0xf201,	// (0x0001bad7) list_medium_line_x2_g_ParamLimits

0xf201,	// (0x0001bad7) list_medium_line_x2_g

0xa270,	// (0x00016b46) list_medium_line_x2_t1_ParamLimits

0xa270,	// (0x00016b46) list_medium_line_x2_t1

0x9f95,	// (0x0001686b) list_medium_line_x3_g1_ParamLimits

0x9f95,	// (0x0001686b) list_medium_line_x3_g1

0xe6ba,	// (0x0001af90) list_medium_line_x3_g2_ParamLimits

0xe6ba,	// (0x0001af90) list_medium_line_x3_g2

0x0001,

0xfc99,	// (0x0001c56f) list_medium_line_x3_g_ParamLimits

0xfc99,	// (0x0001c56f) list_medium_line_x3_g

0xe6c8,	// (0x0001af9e) list_medium_line_x3_t1_ParamLimits

0xe6c8,	// (0x0001af9e) list_medium_line_x3_t1

0xe6dc,	// (0x0001afb2) thumb_sp_fs_scroll_pane_g1

0xe6e5,	// (0x0001afbb) thumb_sp_fs_scroll_pane_g2

0xe6ee,	// (0x0001afc4) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc9e,	// (0x0001c574) thumb_sp_fs_scroll_pane_g

0xe6dc,	// (0x0001afb2) bg_sp_fs_scroll_pane_g1

0xe6e5,	// (0x0001afbb) bg_sp_fs_scroll_pane_g2

0xe6ee,	// (0x0001afc4) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc9e,	// (0x0001c574) bg_sp_fs_scroll_pane_g

0x9f95,	// (0x0001686b) list_medium_line_x2_t3_g4_g1_ParamLimits

0x9f95,	// (0x0001686b) list_medium_line_x2_t3_g4_g1

0x9f95,	// (0x0001686b) list_medium_line_x2_t3_g4_g2_ParamLimits

0x9f95,	// (0x0001686b) list_medium_line_x2_t3_g4_g2

0x9f95,	// (0x0001686b) list_medium_line_x2_t3_g4_g3_ParamLimits

0x9f95,	// (0x0001686b) list_medium_line_x2_t3_g4_g3

0x9f95,	// (0x0001686b) list_medium_line_x2_t3_g4_g4_ParamLimits

0x9f95,	// (0x0001686b) list_medium_line_x2_t3_g4_g4

0x0003,

0xf206,	// (0x0001badc) list_medium_line_x2_t3_g4_g_ParamLimits

0xf206,	// (0x0001badc) list_medium_line_x2_t3_g4_g

0xa270,	// (0x00016b46) list_medium_line_x2_t3_g4_t1_ParamLimits

0xa270,	// (0x00016b46) list_medium_line_x2_t3_g4_t1

0xa270,	// (0x00016b46) list_medium_line_x2_t3_g4_t2_ParamLimits

0xa270,	// (0x00016b46) list_medium_line_x2_t3_g4_t2

0xa270,	// (0x00016b46) list_medium_line_x2_t3_g4_t3_ParamLimits

0xa270,	// (0x00016b46) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1fa,	// (0x0001bad0) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1fa,	// (0x0001bad0) list_medium_line_x2_t3_g4_t

0x9f95,	// (0x0001686b) list_medium_line_g2_g1_ParamLimits

0x9f95,	// (0x0001686b) list_medium_line_g2_g1

0x9f95,	// (0x0001686b) list_medium_line_g2_g2_ParamLimits

0x9f95,	// (0x0001686b) list_medium_line_g2_g2

0x0001,

0xf201,	// (0x0001bad7) list_medium_line_g2_g_ParamLimits

0xf201,	// (0x0001bad7) list_medium_line_g2_g

0xa270,	// (0x00016b46) list_medium_line_g2_t1_ParamLimits

0xa270,	// (0x00016b46) list_medium_line_g2_t1

0x9f95,	// (0x0001686b) list_medium_line_t3_g2_g1_ParamLimits

0x9f95,	// (0x0001686b) list_medium_line_t3_g2_g1

0x9f95,	// (0x0001686b) list_medium_line_t3_g2_g2_ParamLimits

0x9f95,	// (0x0001686b) list_medium_line_t3_g2_g2

0x0001,

0xf201,	// (0x0001bad7) list_medium_line_t3_g2_g_ParamLimits

0xf201,	// (0x0001bad7) list_medium_line_t3_g2_g

0xa270,	// (0x00016b46) list_medium_line_t3_g2_t1_ParamLimits

0xa270,	// (0x00016b46) list_medium_line_t3_g2_t1

0xa270,	// (0x00016b46) list_medium_line_t3_g2_t2_ParamLimits

0xa270,	// (0x00016b46) list_medium_line_t3_g2_t2

0xa270,	// (0x00016b46) list_medium_line_t3_g2_t3_ParamLimits

0xa270,	// (0x00016b46) list_medium_line_t3_g2_t3

0x0002,

0xf1fa,	// (0x0001bad0) list_medium_line_t3_g2_t_ParamLimits

0xf1fa,	// (0x0001bad0) list_medium_line_t3_g2_t

0xa29e,	// (0x00016b74) list_medium_line_right_icon_g1

0xa7ff,	// (0x000170d5) list_medium_line_right_icon_t1

0x9f95,	// (0x0001686b) list_medium_line_t2_g1_ParamLimits

0x9f95,	// (0x0001686b) list_medium_line_t2_g1

0xa270,	// (0x00016b46) list_medium_line_t2_t1_ParamLimits

0xa270,	// (0x00016b46) list_medium_line_t2_t1

0xa270,	// (0x00016b46) list_medium_line_t2_t2_ParamLimits

0xa270,	// (0x00016b46) list_medium_line_t2_t2

0x0001,

0xf1d6,	// (0x0001baac) list_medium_line_t2_t_ParamLimits

0xf1d6,	// (0x0001baac) list_medium_line_t2_t

0x9f95,	// (0x0001686b) list_medium_line_t3_g1_ParamLimits

0x9f95,	// (0x0001686b) list_medium_line_t3_g1

0xa270,	// (0x00016b46) list_medium_line_t3_t1_ParamLimits

0xa270,	// (0x00016b46) list_medium_line_t3_t1

0xa270,	// (0x00016b46) list_medium_line_t3_t2_ParamLimits

0xa270,	// (0x00016b46) list_medium_line_t3_t2

0xa270,	// (0x00016b46) list_medium_line_t3_t3_ParamLimits

0xa270,	// (0x00016b46) list_medium_line_t3_t3

0x0002,

0xf1fa,	// (0x0001bad0) list_medium_line_t3_t_ParamLimits

0xf1fa,	// (0x0001bad0) list_medium_line_t3_t

0x9f95,	// (0x0001686b) list_medium_line_g3_g1_ParamLimits

0x9f95,	// (0x0001686b) list_medium_line_g3_g1

0x9f95,	// (0x0001686b) list_medium_line_g3_g2_ParamLimits

0x9f95,	// (0x0001686b) list_medium_line_g3_g2

0x9f95,	// (0x0001686b) list_medium_line_g3_g3_ParamLimits

0x9f95,	// (0x0001686b) list_medium_line_g3_g3

0x0002,

0xf1f3,	// (0x0001bac9) list_medium_line_g3_g_ParamLimits

0xf1f3,	// (0x0001bac9) list_medium_line_g3_g

0xa270,	// (0x00016b46) list_medium_line_g3_t1_ParamLimits

0xa270,	// (0x00016b46) list_medium_line_g3_t1

0x9f95,	// (0x0001686b) list_medium_line_t2_g3_g1_ParamLimits

0x9f95,	// (0x0001686b) list_medium_line_t2_g3_g1

0x9f95,	// (0x0001686b) list_medium_line_t2_g3_g2_ParamLimits

0x9f95,	// (0x0001686b) list_medium_line_t2_g3_g2

0x9f95,	// (0x0001686b) list_medium_line_t2_g3_g3_ParamLimits

0x9f95,	// (0x0001686b) list_medium_line_t2_g3_g3

0x0002,

0xf1f3,	// (0x0001bac9) list_medium_line_t2_g3_g_ParamLimits

0xf1f3,	// (0x0001bac9) list_medium_line_t2_g3_g

0xa270,	// (0x00016b46) list_medium_line_t2_g3_t1_ParamLimits

0xa270,	// (0x00016b46) list_medium_line_t2_g3_t1

0xa270,	// (0x00016b46) list_medium_line_t2_g3_t2_ParamLimits

0xa270,	// (0x00016b46) list_medium_line_t2_g3_t2

0x0001,

0xf1d6,	// (0x0001baac) list_medium_line_t2_g3_t_ParamLimits

0xf1d6,	// (0x0001baac) list_medium_line_t2_g3_t

0x9f95,	// (0x0001686b) list_medium_line_t3_g3_g1_ParamLimits

0x9f95,	// (0x0001686b) list_medium_line_t3_g3_g1

0x9f95,	// (0x0001686b) list_medium_line_t3_g3_g2_ParamLimits

0x9f95,	// (0x0001686b) list_medium_line_t3_g3_g2

0x9f95,	// (0x0001686b) list_medium_line_t3_g3_g3_ParamLimits

0x9f95,	// (0x0001686b) list_medium_line_t3_g3_g3

0x0002,

0xf1f3,	// (0x0001bac9) list_medium_line_t3_g3_g_ParamLimits

0xf1f3,	// (0x0001bac9) list_medium_line_t3_g3_g

0xa270,	// (0x00016b46) list_medium_line_t3_g3_t1_ParamLimits

0xa270,	// (0x00016b46) list_medium_line_t3_g3_t1

0xa270,	// (0x00016b46) list_medium_line_t3_g3_t2_ParamLimits

0xa270,	// (0x00016b46) list_medium_line_t3_g3_t2

0xa270,	// (0x00016b46) list_medium_line_t3_g3_t3_ParamLimits

0xa270,	// (0x00016b46) list_medium_line_t3_g3_t3

0x0002,

0xf1fa,	// (0x0001bad0) list_medium_line_t3_g3_t_ParamLimits

0xf1fa,	// (0x0001bad0) list_medium_line_t3_g3_t

0xa29e,	// (0x00016b74) list_medium_line_right_iconx2_g1

0xa29e,	// (0x00016b74) list_medium_line_right_iconx2_g2

0x0001,

0xf3d8,	// (0x0001bcae) list_medium_line_right_iconx2_g

0xa7ff,	// (0x000170d5) list_medium_line_right_iconx2_t1

0xa29e,	// (0x00016b74) list_medium_line_t2_right_iconx2_g1

0xa29e,	// (0x00016b74) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf3d8,	// (0x0001bcae) list_medium_line_t2_right_iconx2_g

0xa7ff,	// (0x000170d5) list_medium_line_t2_right_iconx2_t1

0xa7ff,	// (0x000170d5) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc6b,	// (0x0001c541) list_medium_line_t2_right_iconx2_t

0xa7ff,	// (0x000170d5) list_medium_line_x4_t4_t1

0xa7ff,	// (0x000170d5) list_medium_line_x4_t4_t2

0xa7ff,	// (0x000170d5) list_medium_line_x4_t4_t3

0xa7ff,	// (0x000170d5) list_medium_line_x4_t4_t4

0x0003,

0xf2c3,	// (0x0001bb99) list_medium_line_x4_t4_t

0x8339,	// (0x00014c0f) tport_appsw_pane_ParamLimits

0x8339,	// (0x00014c0f) tport_appsw_pane

0x8351,	// (0x00014c27) tport_contact_pane_ParamLimits

0x8351,	// (0x00014c27) tport_contact_pane

0x8369,	// (0x00014c3f) tport_listscroll_pane_ParamLimits

0x8369,	// (0x00014c3f) tport_listscroll_pane

0x8383,	// (0x00014c59) cell_tport_appsw_pane_ParamLimits

0x8383,	// (0x00014c59) cell_tport_appsw_pane

0xadfb,	// (0x000176d1) tport_appsw_pane_g1_ParamLimits

0xadfb,	// (0x000176d1) tport_appsw_pane_g1

0xe6f7,	// (0x0001afcd) tport_contact_pane_g1

0xe700,	// (0x0001afd6) tport_contact_pane_t1

0xe70e,	// (0x0001afe4) tport_contact_pane_t2

0x0001,

0xfca5,	// (0x0001c57b) tport_contact_pane_t

0xe71c,	// (0x0001aff2) list_tport_pane

0xe725,	// (0x0001affb) scroll_pane_cp_030

0x83cb,	// (0x00014ca1) cell_tport_appsw_pane_g1

0x83db,	// (0x00014cb1) cell_tport_appsw_pane_t1

0x83e9,	// (0x00014cbf) grid_highlight_pane_cp019

0x83f1,	// (0x00014cc7) list_tport_double_graphic_pane_ParamLimits

0x83f1,	// (0x00014cc7) list_tport_double_graphic_pane

0x989e,	// (0x00016174) list_highlight_pane_cp023_ParamLimits

0x989e,	// (0x00016174) list_highlight_pane_cp023

0x83fe,	// (0x00014cd4) list_tport_double_graphic_pane_g1_ParamLimits

0x83fe,	// (0x00014cd4) list_tport_double_graphic_pane_g1

0x840b,	// (0x00014ce1) list_tport_double_graphic_pane_t1_ParamLimits

0x840b,	// (0x00014ce1) list_tport_double_graphic_pane_t1

0x8420,	// (0x00014cf6) list_tport_double_graphic_pane_t2_ParamLimits

0x8420,	// (0x00014cf6) list_tport_double_graphic_pane_t2

0x0001,

0xfcb1,	// (0x0001c587) list_tport_double_graphic_pane_t_ParamLimits

0xfcb1,	// (0x0001c587) list_tport_double_graphic_pane_t

0x982f,	// (0x00016105) main_cale_note_pane

0x614d,	// (0x00012a23) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x614d,	// (0x00012a23) cell_vitu2_function_top_wide_pane_cp01

0x7b80,	// (0x00014456) wait_bar_pane_cp05_ParamLimits

0x989e,	// (0x00016174) listscroll_cmail_pane

0xe72e,	// (0x0001b004) list_cmail_pane

0x8432,	// (0x00014d08) list_cmail_body_pane

0x8448,	// (0x00014d1e) list_single_cmail_header_caption_pane

0x845f,	// (0x00014d35) list_single_cmail_header_detail_pane_ParamLimits

0x845f,	// (0x00014d35) list_single_cmail_header_detail_pane

0xe73e,	// (0x0001b014) list_single_cmail_header_caption_pane_t1

0x8489,	// (0x00014d5f) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8489,	// (0x00014d5f) list_single_cmail_header_detail_pane_g1

0xe755,	// (0x0001b02b) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe755,	// (0x0001b02b) list_single_cmail_header_detail_pane_g2

0x0002,

0xfcb6,	// (0x0001c58c) list_single_cmail_header_detail_pane_g_ParamLimits

0xfcb6,	// (0x0001c58c) list_single_cmail_header_detail_pane_g

0xe76e,	// (0x0001b044) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe76e,	// (0x0001b044) list_single_cmail_header_detail_pane_t1

0xe7ce,	// (0x0001b0a4) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe7ce,	// (0x0001b0a4) list_single_cmail_header_editor_pane_bg

0xe121,	// (0x0001a9f7) list_cmail_body_pane_g1

0xe7e5,	// (0x0001b0bb) list_cmail_body_pane_t1

0xd31c,	// (0x00019bf2) list_single_cmail_header_editor_pane_bg_g1

0xa4af,	// (0x00016d85) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd32c,	// (0x00019c02) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd324,	// (0x00019bfa) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd5b0,	// (0x00019e86) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd34c,	// (0x00019c22) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd33c,	// (0x00019c12) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd344,	// (0x00019c1a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa48f,	// (0x00016d65) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x84a1,	// (0x00014d77) calenote_gesture_pane_ParamLimits

0x84a1,	// (0x00014d77) calenote_gesture_pane

0x84c1,	// (0x00014d97) calenote_window_pane_ParamLimits

0x84c1,	// (0x00014d97) calenote_window_pane

0xe7f3,	// (0x0001b0c9) popup_note_window_cp01

0x84dd,	// (0x00014db3) calenote_swipe_1_pane_ParamLimits

0x84dd,	// (0x00014db3) calenote_swipe_1_pane

0x7fbe,	// (0x00014894) calenote_swipe_2_pane_ParamLimits

0x7fbe,	// (0x00014894) calenote_swipe_2_pane

0xe473,	// (0x0001ad49) calenote_swipe_1_pane_g1_ParamLimits

0xe473,	// (0x0001ad49) calenote_swipe_1_pane_g1

0xe480,	// (0x0001ad56) calenote_swipe_1_pane_g2_ParamLimits

0xe480,	// (0x0001ad56) calenote_swipe_1_pane_g2

0x0001,

0xfc53,	// (0x0001c529) calenote_swipe_1_pane_g_ParamLimits

0xfc53,	// (0x0001c529) calenote_swipe_1_pane_g

0xe805,	// (0x0001b0db) calenote_swipe_1_pane_t1_ParamLimits

0xe805,	// (0x0001b0db) calenote_swipe_1_pane_t1

0xe473,	// (0x0001ad49) calenote_swipe_2_pane_g1_ParamLimits

0xe473,	// (0x0001ad49) calenote_swipe_2_pane_g1

0xe824,	// (0x0001b0fa) calenote_swipe_2_pane_g2_ParamLimits

0xe824,	// (0x0001b0fa) calenote_swipe_2_pane_g2

0x0001,

0xfcc2,	// (0x0001c598) calenote_swipe_2_pane_g_ParamLimits

0xfcc2,	// (0x0001c598) calenote_swipe_2_pane_g

0xe830,	// (0x0001b106) calenote_swipe_2_pane_t1_ParamLimits

0xe830,	// (0x0001b106) calenote_swipe_2_pane_t1

0x982f,	// (0x00016105) main_mup_navstr_pane

0x5010,	// (0x000118e6) main_mup3_pane_t7_ParamLimits

0x5010,	// (0x000118e6) main_mup3_pane_t7

0xcf00,	// (0x000197d6) main_mp4_pane_g6_ParamLimits

0xcf00,	// (0x000197d6) main_mp4_pane_g6

0xd153,	// (0x00019a29) main_image3_pane_t4_ParamLimits

0xd153,	// (0x00019a29) main_image3_pane_t4

0x84f2,	// (0x00014dc8) popup_navstr_preview_pane_ParamLimits

0x84f2,	// (0x00014dc8) popup_navstr_preview_pane

0x8506,	// (0x00014ddc) scroll_navstr_pane_ParamLimits

0x8506,	// (0x00014ddc) scroll_navstr_pane

0x982f,	// (0x00016105) bg_popup_preview_window_pane_cp04

0xe857,	// (0x0001b12d) popup_navstr_preview_pane_t1

0x851a,	// (0x00014df0) scroll_navstr_pane_g1_ParamLimits

0x851a,	// (0x00014df0) scroll_navstr_pane_g1

0x852e,	// (0x00014e04) scroll_navstr_pane_t1_ParamLimits

0x852e,	// (0x00014e04) scroll_navstr_pane_t1

0xe7fc,	// (0x0001b0d2) bg_button_pane_cp014

0xe7fc,	// (0x0001b0d2) bg_button_pane_cp030

0x7e97,	// (0x0001476d) list_double_fisheye_pane_g4_ParamLimits

0x7e97,	// (0x0001476d) list_double_fisheye_pane_g4

0x7ea3,	// (0x00014779) list_double_fisheye_pane_g5_ParamLimits

0x7ea3,	// (0x00014779) list_double_fisheye_pane_g5

0xe073,	// (0x0001a949) sp_fs_scroll_pane_cp03

0xe58a,	// (0x0001ae60) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe596,	// (0x0001ae6c) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc70,	// (0x0001c546) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x80aa,	// (0x00014980) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe736,	// (0x0001b00c) sp_fs_scroll_pane_cp02

0xa1a6,	// (0x00016a7c) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa1a6,	// (0x00016a7c) popup_sp_fs_calendar_preview_list_single_pane

0x982f,	// (0x00016105) main_cam6_pano_pane

0x989e,	// (0x00016174) main_mup3_pane_ParamLimits

0x982f,	// (0x00016105) main_phacti_pane

0x7a53,	// (0x00014329) bg_button_pane_cp11

0x7a6d,	// (0x00014343) main_mobtv_info_pane_g2_ParamLimits

0x7a6d,	// (0x00014343) main_mobtv_info_pane_g2

0x0001,

0xfbd0,	// (0x0001c4a6) main_mobtv_info_pane_g_ParamLimits

0xfbd0,	// (0x0001c4a6) main_mobtv_info_pane_g

0x7c4a,	// (0x00014520) sc_clock_pane_t5_ParamLimits

0x7c4a,	// (0x00014520) sc_clock_pane_t5

0x7d12,	// (0x000145e8) main_radioblah_pane_g1_ParamLimits

0xe3bf,	// (0x0001ac95) main_radioblah_pane_t3_ParamLimits

0xe3bf,	// (0x0001ac95) main_radioblah_pane_t3

0xe3d7,	// (0x0001acad) main_radioblah_pane_t4_ParamLimits

0xe3d7,	// (0x0001acad) main_radioblah_pane_t4

0x7d3a,	// (0x00014610) main_radioblah_text_pane_ParamLimits

0x7d3a,	// (0x00014610) main_radioblah_text_pane

0x7d4c,	// (0x00014622) main_radioblah_info_pane_g1_ParamLimits

0x7de5,	// (0x000146bb) main_radioblah_info_pane_t4_ParamLimits

0x7de5,	// (0x000146bb) main_radioblah_info_pane_t4

0x989e,	// (0x00016174) main_sp_fs_calendar_pane

0x8545,	// (0x00014e1b) main_phacti_pane_g1

0x854d,	// (0x00014e23) phacti_note_pane_ParamLimits

0x854d,	// (0x00014e23) phacti_note_pane

0xe86e,	// (0x0001b144) phacti_term_pane_ParamLimits

0xe86e,	// (0x0001b144) phacti_term_pane

0xe883,	// (0x0001b159) phacti_note_pane_t1_ParamLimits

0xe883,	// (0x0001b159) phacti_note_pane_t1

0xe89a,	// (0x0001b170) phacti_term_pane_g1

0xe8a2,	// (0x0001b178) phacti_term_pane_t1_ParamLimits

0xe8a2,	// (0x0001b178) phacti_term_pane_t1

0xe8cc,	// (0x0001b1a2) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe8d4,	// (0x0001b1aa) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfccc,	// (0x0001c5a2) popup_sp_fs_calendar_preview_list_single_pane_g

0xe8dc,	// (0x0001b1b2) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe8dc,	// (0x0001b1b2) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe8f2,	// (0x0001b1c8) aid_popup_sp_fs_bg_corner_pane

0xa29e,	// (0x00016b74) popup_sp_fs_calendar_preview_bg_pane_g1

0x982f,	// (0x00016105) popup_sp_fs_calendar_preview_bg_pane

0xe8fa,	// (0x0001b1d0) popup_sp_fs_calendar_preview_list_pane

0xae31,	// (0x00017707) bg_main_sp_fs_cale_pane_ParamLimits

0xae31,	// (0x00017707) bg_main_sp_fs_cale_pane

0xe90b,	// (0x0001b1e1) listscroll_cale_mrui_pane_ParamLimits

0xe90b,	// (0x0001b1e1) listscroll_cale_mrui_pane

0xe920,	// (0x0001b1f6) listscroll_sp_fs_schedule_track_pane

0xe929,	// (0x0001b1ff) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe929,	// (0x0001b1ff) main_sp_fs_ctrlbar_pane_cp01

0xe93c,	// (0x0001b212) main_sp_fs_ribbon_pane

0xe944,	// (0x0001b21a) popup_sp_fs_cale_preview_window

0x85c2,	// (0x00014e98) list_single_sp_fs_schedule_track_pane_ParamLimits

0x85c2,	// (0x00014e98) list_single_sp_fs_schedule_track_pane

0x989e,	// (0x00016174) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x989e,	// (0x00016174) bg_sp_fs_highlight_list_pane_cp03

0x85d6,	// (0x00014eac) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x85d6,	// (0x00014eac) list_single_sp_fs_schedule_track_pane_g1

0x85e2,	// (0x00014eb8) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x85e2,	// (0x00014eb8) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfcd1,	// (0x0001c5a7) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfcd1,	// (0x0001c5a7) list_single_sp_fs_schedule_track_pane_g

0x85ee,	// (0x00014ec4) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x85ee,	// (0x00014ec4) list_single_sp_fs_schedule_track_pane_t1

0x8608,	// (0x00014ede) sp_fs_schedule_track_pane_ParamLimits

0x8608,	// (0x00014ede) sp_fs_schedule_track_pane

0xe956,	// (0x0001b22c) sp_fs_schedule_track_pane_g1

0xe95e,	// (0x0001b234) sp_fs_schedule_track_pane_g2

0xe966,	// (0x0001b23c) sp_fs_schedule_track_pane_g3

0xe96e,	// (0x0001b244) sp_fs_schedule_track_pane_g4

0xe976,	// (0x0001b24c) sp_fs_schedule_track_pane_g5

0x0004,

0xfcd6,	// (0x0001c5ac) sp_fs_schedule_track_pane_g

0xd31c,	// (0x00019bf2) bg_sp_fs_schedule_viewer_highlight_g1

0xa4af,	// (0x00016d85) bg_sp_fs_schedule_viewer_highlight_g2

0xd324,	// (0x00019bfa) bg_sp_fs_schedule_viewer_highlight_g3

0xd32c,	// (0x00019c02) bg_sp_fs_schedule_viewer_highlight_g4

0xd5b0,	// (0x00019e86) bg_sp_fs_schedule_viewer_highlight_g5

0xd33c,	// (0x00019c12) bg_sp_fs_schedule_viewer_highlight_g6

0xd344,	// (0x00019c1a) bg_sp_fs_schedule_viewer_highlight_g7

0xd34c,	// (0x00019c22) bg_sp_fs_schedule_viewer_highlight_g8

0xa48f,	// (0x00016d65) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfce1,	// (0x0001c5b7) bg_sp_fs_schedule_viewer_highlight_g

0x982f,	// (0x00016105) bg_main_sp_fs_ribbon_pane

0x8619,	// (0x00014eef) main_sp_fs_ribbon_pane_g1

0xe97e,	// (0x0001b254) main_sp_fs_ribbon_pane_t1

0x8622,	// (0x00014ef8) main_sp_fs_ribbon_pane_t2

0xe98d,	// (0x0001b263) main_sp_fs_ribbon_pane_t3

0x0002,

0xfcf4,	// (0x0001c5ca) main_sp_fs_ribbon_pane_t

0xe99c,	// (0x0001b272) main_sp_fs_ribbon_scheduler_pane

0xe9a4,	// (0x0001b27a) bg_main_sp_fs_ribbon_pane_g1

0xe9ad,	// (0x0001b283) bg_main_sp_fs_ribbon_pane_g2

0xe9b6,	// (0x0001b28c) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfcfb,	// (0x0001c5d1) bg_main_sp_fs_ribbon_pane_g

0xe9be,	// (0x0001b294) main_sp_fs_ribbon_scheduler_pane_g1

0xe9c7,	// (0x0001b29d) main_sp_fs_ribbon_scheduler_pane_g2

0xe9d0,	// (0x0001b2a6) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfd02,	// (0x0001c5d8) main_sp_fs_ribbon_scheduler_pane_g

0xe9d9,	// (0x0001b2af) list_cale_mrui_pane

0x8631,	// (0x00014f07) sp_fs_scroll_pane_cp07_ParamLimits

0x8631,	// (0x00014f07) sp_fs_scroll_pane_cp07

0x864d,	// (0x00014f23) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x864d,	// (0x00014f23) bg_sp_fs_schedule_viewer_highlight

0xe9e6,	// (0x0001b2bc) list_single_sp_fs_schedule_track_pane_cp01

0xe9ee,	// (0x0001b2c4) list_sp_fs_schedule_track_pane

0xe9f6,	// (0x0001b2cc) sp_fs_scroll_pane_cp06_ParamLimits

0xe9f6,	// (0x0001b2cc) sp_fs_scroll_pane_cp06

0xa29e,	// (0x00016b74) bgmain_sp_fs_calendar_pane_g1

0x865d,	// (0x00014f33) list_single_cale_mrui_pane_ParamLimits

0x865d,	// (0x00014f33) list_single_cale_mrui_pane

0xea08,	// (0x0001b2de) list_single_cale_mrui_row_pane_ParamLimits

0xea08,	// (0x0001b2de) list_single_cale_mrui_row_pane

0xea15,	// (0x0001b2eb) list_single_cale_mrui_row_pane_g1_ParamLimits

0xea15,	// (0x0001b2eb) list_single_cale_mrui_row_pane_g1

0xea5a,	// (0x0001b330) list_single_cale_mrui_row_pane_t1_ParamLimits

0xea5a,	// (0x0001b330) list_single_cale_mrui_row_pane_t1

0x867e,	// (0x00014f54) list_single_cale_mrui_row_pane_t2_ParamLimits

0x867e,	// (0x00014f54) list_single_cale_mrui_row_pane_t2

0xea6c,	// (0x0001b342) list_single_cale_mrui_row_pane_t3_ParamLimits

0xea6c,	// (0x0001b342) list_single_cale_mrui_row_pane_t3

0xea9b,	// (0x0001b371) list_single_cale_mrui_row_pane_t4_ParamLimits

0xea9b,	// (0x0001b371) list_single_cale_mrui_row_pane_t4

0x0003,

0xfd10,	// (0x0001c5e6) list_single_cale_mrui_row_pane_t_ParamLimits

0xfd10,	// (0x0001c5e6) list_single_cale_mrui_row_pane_t

0x86e6,	// (0x00014fbc) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x86e6,	// (0x00014fbc) list_single_cmail_header_editor_pane_bg_cp01

0x870c,	// (0x00014fe2) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x870c,	// (0x00014fe2) list_single_cmail_header_editor_pane_bg_cp02

0x872c,	// (0x00015002) main_radioblah_text_pane_t1_ParamLimits

0x872c,	// (0x00015002) main_radioblah_text_pane_t1

0xeaca,	// (0x0001b3a0) cam6_indi_pane_cp01

0xead2,	// (0x0001b3a8) cam6_mode_pane_cp01

0xeada,	// (0x0001b3b0) cam6_pano_pane

0xeae3,	// (0x0001b3b9) cam6_zoom_pane_cp01

0xeaeb,	// (0x0001b3c1) cam6_pano_image_pane

0xeaf6,	// (0x0001b3cc) cam6_pano_pane_g1

0xe121,	// (0x0001a9f7) cam6_pano_pane_g2

0xeaff,	// (0x0001b3d5) cam6_pano_pane_g3

0xeb08,	// (0x0001b3de) cam6_pano_pane_g4

0xcbd0,	// (0x000194a6) cam6_pano_pane_g5

0xeb11,	// (0x0001b3e7) cam6_pano_pane_g6

0xeb1b,	// (0x0001b3f1) cam6_pano_pane_g7

0xeb23,	// (0x0001b3f9) cam6_pano_pane_g8

0xeb2c,	// (0x0001b402) cam6_pano_pane_g9

0x0008,

0xfd19,	// (0x0001c5ef) cam6_pano_pane_g

0x982f,	// (0x00016105) main_browser_tag_pane

0xe84f,	// (0x0001b125) grid_navstr_albumart_pane

0xeb37,	// (0x0001b40d) cell_navstr_albumart_pane_ParamLimits

0xeb37,	// (0x0001b40d) cell_navstr_albumart_pane

0xeb57,	// (0x0001b42d) cell_navstr_albumart_pane_g1

0xbf79,	// (0x0001884f) cell_navstr_albumart_pane_g2

0xbf89,	// (0x0001885f) cell_navstr_albumart_pane_g3

0xbf81,	// (0x00018857) cell_navstr_albumart_pane_g4

0x0003,

0xfd2c,	// (0x0001c602) cell_navstr_albumart_pane_g

0x8747,	// (0x0001501d) bt_list_pane_ParamLimits

0x8747,	// (0x0001501d) bt_list_pane

0x875b,	// (0x00015031) bt_list_pane_t1

0x876a,	// (0x00015040) bt_list_pane_t2

0x0001,

0xfd35,	// (0x0001c60b) bt_list_pane_t

0x982f,	// (0x00016105) main_cale_prevew_pane

0x8779,	// (0x0001504f) popup_cale_preview_window_ParamLimits

0x8779,	// (0x0001504f) popup_cale_preview_window

0x989e,	// (0x00016174) bg_popup_preview_window_pane_cp05_ParamLimits

0x989e,	// (0x00016174) bg_popup_preview_window_pane_cp05

0xeb5f,	// (0x0001b435) list_cale_preview_pane_ParamLimits

0xeb5f,	// (0x0001b435) list_cale_preview_pane

0x8792,	// (0x00015068) list_double_cale_preview_pane_ParamLimits

0x8792,	// (0x00015068) list_double_cale_preview_pane

0xd354,	// (0x00019c2a) list_single_cale_preview_pane_ParamLimits

0xd354,	// (0x00019c2a) list_single_cale_preview_pane

0x87a4,	// (0x0001507a) list_single_cale_preview_pane_g1

0x87ac,	// (0x00015082) list_single_cale_preview_pane_t1_ParamLimits

0x87ac,	// (0x00015082) list_single_cale_preview_pane_t1

0x87c1,	// (0x00015097) list_double_cale_preview_pane_g1

0x87c9,	// (0x0001509f) list_double_cale_preview_pane_t1_ParamLimits

0x87c9,	// (0x0001509f) list_double_cale_preview_pane_t1

0x87de,	// (0x000150b4) list_double_cale_preview_pane_t2_ParamLimits

0x87de,	// (0x000150b4) list_double_cale_preview_pane_t2

0x0001,

0xfd3a,	// (0x0001c610) list_double_cale_preview_pane_t_ParamLimits

0xfd3a,	// (0x0001c610) list_double_cale_preview_pane_t

0x982f,	// (0x00016105) main_ezdial_pane

0x989e,	// (0x00016174) main_sp_fs_email_pane_ParamLimits

0x801a,	// (0x000148f0) cmail_ddmenu_btn01_pane_ParamLimits

0x801a,	// (0x000148f0) cmail_ddmenu_btn01_pane

0x802d,	// (0x00014903) cmail_ddmenu_btn02_pane_ParamLimits

0x802d,	// (0x00014903) cmail_ddmenu_btn02_pane

0x8050,	// (0x00014926) cmail_ddmenu_btn03_pane_ParamLimits

0x8050,	// (0x00014926) cmail_ddmenu_btn03_pane

0x80e9,	// (0x000149bf) main_sp_fs_ctrlbar_pane_ParamLimits

0x810d,	// (0x000149e3) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8432,	// (0x00014d08) list_cmail_body_pane_ParamLimits

0xe74c,	// (0x0001b022) bg_button_pane_cp12

0xe761,	// (0x0001b037) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe761,	// (0x0001b037) list_single_cmail_header_detail_pane_g3

0xe7aa,	// (0x0001b080) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe7aa,	// (0x0001b080) list_single_cmail_header_detail_pane_t2

0x0001,

0xfcbd,	// (0x0001c593) list_single_cmail_header_detail_pane_t_ParamLimits

0xfcbd,	// (0x0001c593) list_single_cmail_header_detail_pane_t

0xe8b7,	// (0x0001b18d) phacti_term_pane_t2_ParamLimits

0xe8b7,	// (0x0001b18d) phacti_term_pane_t2

0x0001,

0xfcc7,	// (0x0001c59d) phacti_term_pane_t_ParamLimits

0xfcc7,	// (0x0001c59d) phacti_term_pane_t

0xeb6b,	// (0x0001b441) aid_size_list_single_double

0x87f6,	// (0x000150cc) popup_ezdial_listscroll_window

0x8812,	// (0x000150e8) popup_number_entry_window_cp01

0xa25e,	// (0x00016b34) bg_popup_call_pane_cp09

0xeb77,	// (0x0001b44d) ezdial_list_pane

0xeb7f,	// (0x0001b455) scroll_pane_cp23

0xae31,	// (0x00017707) bg_button_pane_cp028_ParamLimits

0xae31,	// (0x00017707) bg_button_pane_cp028

0x8820,	// (0x000150f6) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8820,	// (0x000150f6) cmail_ddmenu_btn01_pane_g1

0x882c,	// (0x00015102) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x882c,	// (0x00015102) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd3f,	// (0x0001c615) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd3f,	// (0x0001c615) cmail_ddmenu_btn01_pane_g

0xeb87,	// (0x0001b45d) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeb87,	// (0x0001b45d) cmail_ddmenu_btn01_pane_t1

0xae31,	// (0x00017707) bg_button_pane_cp029_ParamLimits

0xae31,	// (0x00017707) bg_button_pane_cp029

0x8838,	// (0x0001510e) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8838,	// (0x0001510e) cmail_ddmenu_btn02_pane_g1

0x8850,	// (0x00015126) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8850,	// (0x00015126) cmail_ddmenu_btn02_pane_t1

0x989e,	// (0x00016174) bg_button_pane_cp031_ParamLimits

0x989e,	// (0x00016174) bg_button_pane_cp031

0x8838,	// (0x0001510e) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8838,	// (0x0001510e) cmail_ddmenu_btn03_pane_g1

0x8850,	// (0x00015126) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8850,	// (0x00015126) cmail_ddmenu_btn03_pane_t1

0x5969,	// (0x0001223f) cell_dialer2_keypad_pane_t1_ParamLimits

0x5983,	// (0x00012259) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5983,	// (0x00012259) cell_dialer2_keypad_pane_t1_copy1

0x7876,	// (0x0001414c) ncimui_group_button_pane

0x989e,	// (0x00016174) main_sp_fs_calendar_pane_ParamLimits

0x8448,	// (0x00014d1e) list_single_cmail_header_caption_pane_ParamLimits

0xe902,	// (0x0001b1d8) aid_recal_txt_sm_pane

0x982f,	// (0x00016105) mian_recal_day_pane

0xe944,	// (0x0001b21a) popup_sp_fs_cale_preview_window_ParamLimits

0xeb9c,	// (0x0001b472) list_recal_day_pane

0xebde,	// (0x0001b4b4) list_single_recal_day_pane_ParamLimits

0xebde,	// (0x0001b4b4) list_single_recal_day_pane

0xebf0,	// (0x0001b4c6) list_single_recal_day_pane_g1_ParamLimits

0xebf0,	// (0x0001b4c6) list_single_recal_day_pane_g1

0xebfc,	// (0x0001b4d2) list_single_recal_day_pane_g2_ParamLimits

0xebfc,	// (0x0001b4d2) list_single_recal_day_pane_g2

0xec08,	// (0x0001b4de) list_single_recal_day_pane_g3_ParamLimits

0xec08,	// (0x0001b4de) list_single_recal_day_pane_g3

0x8874,	// (0x0001514a) list_single_recal_day_pane_g4_ParamLimits

0x8874,	// (0x0001514a) list_single_recal_day_pane_g4

0xec14,	// (0x0001b4ea) list_single_recal_day_pane_g5_ParamLimits

0xec14,	// (0x0001b4ea) list_single_recal_day_pane_g5

0xec20,	// (0x0001b4f6) list_single_recal_day_pane_g6_ParamLimits

0xec20,	// (0x0001b4f6) list_single_recal_day_pane_g6

0x0004,

0xfd4e,	// (0x0001c624) list_single_recal_day_pane_g_ParamLimits

0xfd4e,	// (0x0001c624) list_single_recal_day_pane_g

0xec34,	// (0x0001b50a) list_single_recal_day_pane_t1

0xec46,	// (0x0001b51c) list_single_recal_day_pane_t2

0x0001,

0xfd59,	// (0x0001c62f) list_single_recal_day_pane_t

0x888c,	// (0x00015162) ncimui_query_button_pane_ParamLimits

0x888c,	// (0x00015162) ncimui_query_button_pane

0x889c,	// (0x00015172) ncimui_query_button_pane_t1_ParamLimits

0x889c,	// (0x00015172) ncimui_query_button_pane_t1

0xec58,	// (0x0001b52e) ncimui_query_button_pane_t2_ParamLimits

0xec58,	// (0x0001b52e) ncimui_query_button_pane_t2

0x0001,

0xfd5e,	// (0x0001c634) ncimui_query_button_pane_t_ParamLimits

0xfd5e,	// (0x0001c634) ncimui_query_button_pane_t

0x88af,	// (0x00015185) query_button_pane_ParamLimits

0x88af,	// (0x00015185) query_button_pane

0x982f,	// (0x00016105) bg_button_pane_cp0028

0xec6b,	// (0x0001b541) query_button_pane_t1

0x4410,	// (0x00010ce6) main_tport_pane_ParamLimits

0x82f6,	// (0x00014bcc) bg_popup_window_pane_cp01_ParamLimits

0x82f6,	// (0x00014bcc) bg_popup_window_pane_cp01

0x8311,	// (0x00014be7) heading_pane_cp08_ParamLimits

0x8311,	// (0x00014be7) heading_pane_cp08

0x8324,	// (0x00014bfa) heading_pane_cp07_ParamLimits

0x8324,	// (0x00014bfa) heading_pane_cp07

0x83cb,	// (0x00014ca1) cell_tport_appsw_pane_g2

0x0002,

0xfcaa,	// (0x0001c580) cell_tport_appsw_pane_g

0x395c,	// (0x00010232) input_candi_list_open_g1

0xa6a0,	// (0x00016f76) list_cale_time_pane_g6_ParamLimits

0xa6a0,	// (0x00016f76) list_cale_time_pane_g6

0x4a1d,	// (0x000112f3) aid_size_touch_calib_1_ParamLimits

0x4a1d,	// (0x000112f3) aid_size_touch_calib_1

0x4a2f,	// (0x00011305) aid_size_touch_calib_2_ParamLimits

0x4a2f,	// (0x00011305) aid_size_touch_calib_2

0x4a47,	// (0x0001131d) aid_size_touch_calib_3_ParamLimits

0x4a47,	// (0x0001131d) aid_size_touch_calib_3

0x4a65,	// (0x0001133b) aid_size_touch_calib_4_ParamLimits

0x4a65,	// (0x0001133b) aid_size_touch_calib_4

0x4a7d,	// (0x00011353) main_touch_calib_button_group_pane_ParamLimits

0x4a7d,	// (0x00011353) main_touch_calib_button_group_pane

0x4a95,	// (0x0001136b) main_touch_calib_pane_g1_ParamLimits

0x4aa7,	// (0x0001137d) main_touch_calib_pane_g2_ParamLimits

0x4ab9,	// (0x0001138f) main_touch_calib_pane_g3_ParamLimits

0x4acb,	// (0x000113a1) main_touch_calib_pane_g4_ParamLimits

0xf6ec,	// (0x0001bfc2) main_touch_calib_pane_g_ParamLimits

0x4add,	// (0x000113b3) main_touch_calib_pane_t1_ParamLimits

0x4af7,	// (0x000113cd) main_touch_calib_pane_t2_ParamLimits

0x4b11,	// (0x000113e7) main_touch_calib_pane_t3_ParamLimits

0x4b25,	// (0x000113fb) main_touch_calib_pane_t4_ParamLimits

0x4b39,	// (0x0001140f) main_touch_calib_pane_t5_ParamLimits

0xf6f5,	// (0x0001bfcb) main_touch_calib_pane_t_ParamLimits

0xc996,	// (0x0001926c) list_single_fp_cale_pane_g3_ParamLimits

0xc996,	// (0x0001926c) list_single_fp_cale_pane_g3

0x989e,	// (0x00016174) bg_button_pane_cp012_ParamLimits

0x989e,	// (0x00016174) bg_vkb2_func_pane_cp03_ParamLimits

0x6a3b,	// (0x00013311) cell_vitu2_function_top_pane_g1_ParamLimits

0x989e,	// (0x00016174) bg_vkb2_func_pane_cp04_ParamLimits

0x7801,	// (0x000140d7) main_ncimui_button_group_pane_ParamLimits

0x7801,	// (0x000140d7) main_ncimui_button_group_pane

0x7861,	// (0x00014137) main_ncimui_pane_t3_ParamLimits

0x7861,	// (0x00014137) main_ncimui_pane_t3

0xe865,	// (0x0001b13b) phacti_button_group_pane

0xeb6b,	// (0x0001b441) aid_size_list_single_double_ParamLimits

0x87f6,	// (0x000150cc) popup_ezdial_listscroll_window_ParamLimits

0x8812,	// (0x000150e8) popup_number_entry_window_cp01_ParamLimits

0x88c2,	// (0x00015198) phacti_button_pane_ParamLimits

0x88c2,	// (0x00015198) phacti_button_pane

0x982f,	// (0x00016105) bg_button_pane_cp14

0xec79,	// (0x0001b54f) phacti_button_pane_t1

0x88d3,	// (0x000151a9) main_touch_calib_button_pane_ParamLimits

0x88d3,	// (0x000151a9) main_touch_calib_button_pane

0xa029,	// (0x000168ff) bg_button_pane_cp18_ParamLimits

0xa029,	// (0x000168ff) bg_button_pane_cp18

0xec87,	// (0x0001b55d) main_touch_calib_button_pane_t1_ParamLimits

0xec87,	// (0x0001b55d) main_touch_calib_button_pane_t1

0xec9d,	// (0x0001b573) main_touch_calib_button_pane_t2_ParamLimits

0xec9d,	// (0x0001b573) main_touch_calib_button_pane_t2

0x0001,

0xfd63,	// (0x0001c639) main_touch_calib_button_pane_t_ParamLimits

0xfd63,	// (0x0001c639) main_touch_calib_button_pane_t

0x982f,	// (0x00016105) cell_ncimui_button_pane

0x982f,	// (0x00016105) bg_button_pane_cp032

0xecbb,	// (0x0001b591) cell_ncimui_button_pane_t1

0xd133,	// (0x00019a09) image3_infobar_pane_ParamLimits

0xd133,	// (0x00019a09) image3_infobar_pane

0x7c76,	// (0x0001454c) fs_bigclock_status_pane_ParamLimits

0x7c76,	// (0x0001454c) fs_bigclock_status_pane

0x7c83,	// (0x00014559) main_fs_bigclock_clock_pane_ParamLimits

0x7c83,	// (0x00014559) main_fs_bigclock_clock_pane

0x7ca1,	// (0x00014577) main_fs_bigclock_indi_pane_ParamLimits

0x7ca1,	// (0x00014577) main_fs_bigclock_indi_pane

0x7cd3,	// (0x000145a9) main_fs_bigclock_swipe_pane_ParamLimits

0x7cd3,	// (0x000145a9) main_fs_bigclock_swipe_pane

0x982f,	// (0x00016105) main_fs_clock_dumped_data

0xe22e,	// (0x0001ab04) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe22e,	// (0x0001ab04) list_single_fs_bigclock_indicator_pane_g1

0xe24a,	// (0x0001ab20) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe24a,	// (0x0001ab20) list_single_fs_bigclock_indicator_pane_g2

0xe264,	// (0x0001ab3a) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe264,	// (0x0001ab3a) list_single_fs_bigclock_indicator_pane_g3

0xe27e,	// (0x0001ab54) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe27e,	// (0x0001ab54) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc04,	// (0x0001c4da) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc04,	// (0x0001c4da) list_single_fs_bigclock_indicator_pane_g

0xe2a9,	// (0x0001ab7f) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe2a9,	// (0x0001ab7f) list_single_fs_bigclock_indicator_pane_t1

0xe2d1,	// (0x0001aba7) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe2d1,	// (0x0001aba7) list_single_fs_bigclock_indicator_pane_t2

0xe2f9,	// (0x0001abcf) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe2f9,	// (0x0001abcf) list_single_fs_bigclock_indicator_pane_t3

0xe321,	// (0x0001abf7) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe321,	// (0x0001abf7) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc0f,	// (0x0001c4e5) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc0f,	// (0x0001c4e5) list_single_fs_bigclock_indicator_pane_t

0xecc9,	// (0x0001b59f) image3_infobar_fav_pane_ParamLimits

0xecc9,	// (0x0001b59f) image3_infobar_fav_pane

0xecd9,	// (0x0001b5af) image3_infobar_loc_pane_ParamLimits

0xecd9,	// (0x0001b5af) image3_infobar_loc_pane

0xeced,	// (0x0001b5c3) image3_infobar_time_pane_ParamLimits

0xeced,	// (0x0001b5c3) image3_infobar_time_pane

0xa29e,	// (0x00016b74) image3_infobar_time_pane_g1

0xecfd,	// (0x0001b5d3) image3_infobar_time_pane_t1

0xa29e,	// (0x00016b74) image3_infobar_loc_pane_g1

0xed0b,	// (0x0001b5e1) image3_infobar_loc_pane_g2

0x0001,

0xfd68,	// (0x0001c63e) image3_infobar_loc_pane_g

0xed13,	// (0x0001b5e9) image3_infobar_loc_pane_t1

0xa29e,	// (0x00016b74) image3_infobar_fav_pane_g1

0xed21,	// (0x0001b5f7) image3_infobar_fav_pane_g2

0x0001,

0xfd6d,	// (0x0001c643) image3_infobar_fav_pane_g

0xed29,	// (0x0001b5ff) fs_bigclock_status_battery_pane

0xed32,	// (0x0001b608) fs_bigclock_status_signal_pane

0xed3b,	// (0x0001b611) fs_bigclock_status_title_pane

0xed44,	// (0x0001b61a) fs_bigclock_status_signal_pane_g1

0xed4d,	// (0x0001b623) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd72,	// (0x0001c648) fs_bigclock_status_signal_pane_g

0xed55,	// (0x0001b62b) fs_bigclock_status_battery_pane_g1

0xed5e,	// (0x0001b634) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd77,	// (0x0001c64d) fs_bigclock_status_battery_pane_g

0xed66,	// (0x0001b63c) fs_bigclock_status_title_pane_t1

0x88e8,	// (0x000151be) main_fs_bigclock_clock_pane_g1

0x88e8,	// (0x000151be) main_fs_bigclock_clock_pane_g2

0x88f9,	// (0x000151cf) main_fs_bigclock_clock_pane_g3

0x88f9,	// (0x000151cf) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd7c,	// (0x0001c652) main_fs_bigclock_clock_pane_g

0x890c,	// (0x000151e2) main_fs_bigclock_clock_pane_t1

0x8922,	// (0x000151f8) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd85,	// (0x0001c65b) main_fs_bigclock_clock_pane_t

0xed74,	// (0x0001b64a) list_single_fs_bigclock_indicator_pane_ParamLimits

0xed74,	// (0x0001b64a) list_single_fs_bigclock_indicator_pane

0xed85,	// (0x0001b65b) list_single_fs_bigclock_pane_ParamLimits

0xed85,	// (0x0001b65b) list_single_fs_bigclock_pane

0xedab,	// (0x0001b681) main_fs_bigclock_indicator_pane_t1

0xedba,	// (0x0001b690) list_single_fs_bigclock_pane_g1

0xedc2,	// (0x0001b698) list_single_fs_bigclock_pane_t1

0xa29e,	// (0x00016b74) main_fs_bigclock_swipe_pane_g1

0xee05,	// (0x0001b6db) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd96,	// (0x0001c66c) main_fs_bigclock_swipe_pane_g

0xee0d,	// (0x0001b6e3) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xee0d,	// (0x0001b6e3) main_fs_bigclock_swipe_pane_t1

0x3484,	// (0x0000fd5a) call_type_pane_ParamLimits

0x982f,	// (0x00016105) main_btmg_pane

0xea41,	// (0x0001b317) list_single_cale_mrui_row_pane_g2_ParamLimits

0xea41,	// (0x0001b317) list_single_cale_mrui_row_pane_g2

0x0002,

0xfd09,	// (0x0001c5df) list_single_cale_mrui_row_pane_g_ParamLimits

0xfd09,	// (0x0001c5df) list_single_cale_mrui_row_pane_g

0xebc5,	// (0x0001b49b) list_recal_vselct_arw_lo_pane

0xebcd,	// (0x0001b4a3) list_recal_vselct_arw_up_pane

0xebd5,	// (0x0001b4ab) list_recal_vselct_pane

0x897c,	// (0x00015252) btmg_button_pane

0x8986,	// (0x0001525c) main_btmg_pane_g1

0x982f,	// (0x00016105) bg_button_pane_cp044

0xee2a,	// (0x0001b700) btmg_button_pane_t1

0xc109,	// (0x000189df) aid_listscroll_gen

0x989e,	// (0x00016174) main_cntbar_detail_pane

0xe72e,	// (0x0001b004) list_cmail_folder_pane

0xe073,	// (0x0001a949) sp_fs_scroll_pane_cp03_ParamLimits

0x8990,	// (0x00015266) list_single_fs_dyc_pane_cp01_ParamLimits

0x8990,	// (0x00015266) list_single_fs_dyc_pane_cp01

0xee38,	// (0x0001b70e) aid_size_cmail_indent

0xee41,	// (0x0001b717) list_single_dyc_row_pane_cp01

0x89d9,	// (0x000152af) cntbar_detail_list_pane_ParamLimits

0x89d9,	// (0x000152af) cntbar_detail_list_pane

0x8a25,	// (0x000152fb) main_cntbar_detail_cont_pane_ParamLimits

0x8a25,	// (0x000152fb) main_cntbar_detail_cont_pane

0xe073,	// (0x0001a949) scroll_pane_cp032_ParamLimits

0xe073,	// (0x0001a949) scroll_pane_cp032

0x8a39,	// (0x0001530f) cntbar_detail_list_event_pane_ParamLimits

0x8a39,	// (0x0001530f) cntbar_detail_list_event_pane

0x89e9,	// (0x000152bf) cntbar_detail_list_shct_pane

0xa4fd,	// (0x00016dd3) aid_list_gen

0xee4a,	// (0x0001b720) aid_scroll

0xee53,	// (0x0001b729) aid_size_touch_scroll_bar

0x8a49,	// (0x0001531f) aid_list_double

0x8a52,	// (0x00015328) aid_list_single

0x8a49,	// (0x0001531f) aid_list_single_lg

0x8a5b,	// (0x00015331) aid_list_z_g_a_sm

0x8a63,	// (0x00015339) aid_list_z_g_d

0x8a6b,	// (0x00015341) aid_txt_z_prm

0x8a79,	// (0x0001534f) aid_txt_z_prm_cp01

0x8a87,	// (0x0001535d) aid_txt_z_sec

0x8a95,	// (0x0001536b) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8a95,	// (0x0001536b) main_cntbar_detail_cont_pane_g1

0x8aa9,	// (0x0001537f) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8aa9,	// (0x0001537f) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd9b,	// (0x0001c671) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd9b,	// (0x0001c671) main_cntbar_detail_cont_pane_g

0xee5c,	// (0x0001b732) main_cntbar_detail_cont_pane_t1

0xee6a,	// (0x0001b740) main_cntbar_detail_cont_pane_t2

0xee78,	// (0x0001b74e) main_cntbar_detail_cont_pane_t3

0x0002,

0xfda0,	// (0x0001c676) main_cntbar_detail_cont_pane_t

0x8ab9,	// (0x0001538f) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8ab9,	// (0x0001538f) cell_cntbar_detail_list_shct_pane

0xee86,	// (0x0001b75c) cntbar_detail_list_shct_pane_g1

0xee8f,	// (0x0001b765) cntbar_detail_list_shct_pane_g2

0x0001,

0xfda7,	// (0x0001c67d) cntbar_detail_list_shct_pane_g

0x8acd,	// (0x000153a3) cntbar_detail_list_event_pane_g1_ParamLimits

0x8acd,	// (0x000153a3) cntbar_detail_list_event_pane_g1

0x8ad9,	// (0x000153af) cntbar_detail_list_event_pane_g2_ParamLimits

0x8ad9,	// (0x000153af) cntbar_detail_list_event_pane_g2

0x0005,

0xfdac,	// (0x0001c682) cntbar_detail_list_event_pane_g_ParamLimits

0xfdac,	// (0x0001c682) cntbar_detail_list_event_pane_g

0x8b45,	// (0x0001541b) cntbar_detail_list_event_pane_t1_ParamLimits

0x8b45,	// (0x0001541b) cntbar_detail_list_event_pane_t1

0x8b5a,	// (0x00015430) cntbar_detail_list_event_pane_t2_ParamLimits

0x8b5a,	// (0x00015430) cntbar_detail_list_event_pane_t2

0x0002,

0xfdb9,	// (0x0001c68f) cntbar_detail_list_event_pane_t_ParamLimits

0xfdb9,	// (0x0001c68f) cntbar_detail_list_event_pane_t

0xa29e,	// (0x00016b74) cell_cntbar_detail_list_shct_pane_g1

0xacea,	// (0x000175c0) navi_pane_mv_g3

0x989e,	// (0x00016174) main_cntbar_detail_pane_ParamLimits

0x982f,	// (0x00016105) main_notif_wgt_pane

0xce8e,	// (0x00019764) aid_tch_main_mp4_pane_g4

0xd0c0,	// (0x00019996) popup_slider_window_cp02

0xebbb,	// (0x0001b491) list_recal_day_event_pane

0x89a7,	// (0x0001527d) cntbar_detail_btn_pane_ParamLimits

0x89a7,	// (0x0001527d) cntbar_detail_btn_pane

0x89c0,	// (0x00015296) cntbar_detail_btn_pane_cp01_ParamLimits

0x89c0,	// (0x00015296) cntbar_detail_btn_pane_cp01

0x89e9,	// (0x000152bf) cntbar_detail_list_shct_pane_ParamLimits

0x89f9,	// (0x000152cf) cntbar_detail_pane_g1_ParamLimits

0x89f9,	// (0x000152cf) cntbar_detail_pane_g1

0x8a09,	// (0x000152df) cntbar_detail_pane_t1_ParamLimits

0x8a09,	// (0x000152df) cntbar_detail_pane_t1

0x8ae5,	// (0x000153bb) cntbar_detail_list_event_pane_g3_ParamLimits

0x8ae5,	// (0x000153bb) cntbar_detail_list_event_pane_g3

0x8afd,	// (0x000153d3) cntbar_detail_list_event_pane_g4_ParamLimits

0x8afd,	// (0x000153d3) cntbar_detail_list_event_pane_g4

0x8b15,	// (0x000153eb) cntbar_detail_list_event_pane_g5_ParamLimits

0x8b15,	// (0x000153eb) cntbar_detail_list_event_pane_g5

0x8b2d,	// (0x00015403) cntbar_detail_list_event_pane_g6_ParamLimits

0x8b2d,	// (0x00015403) cntbar_detail_list_event_pane_g6

0x8b6f,	// (0x00015445) cntbar_detail_list_event_pane_t3_ParamLimits

0x8b6f,	// (0x00015445) cntbar_detail_list_event_pane_t3

0x8b81,	// (0x00015457) popup_notif_wgt_window_ParamLimits

0x8b81,	// (0x00015457) popup_notif_wgt_window

0x8b9a,	// (0x00015470) popup_submenu_window_cp01_ParamLimits

0x8b9a,	// (0x00015470) popup_submenu_window_cp01

0xa25e,	// (0x00016b34) bg_popup_window_pane_cp10

0xee98,	// (0x0001b76e) listscroll_notif_wgt_pane

0xeeaa,	// (0x0001b780) list_notif_wgt_window

0xeeb3,	// (0x0001b789) scroll_pane_cp033

0x8bac,	// (0x00015482) list_notif_wgt_row_pane_ParamLimits

0x8bac,	// (0x00015482) list_notif_wgt_row_pane

0xeebc,	// (0x0001b792) aid_size_list_notif_wgt_del

0xeec9,	// (0x0001b79f) list_notif_wgt_row_pane_g1

0xeed5,	// (0x0001b7ab) list_notif_wgt_row_pane_g2

0xeee4,	// (0x0001b7ba) list_notif_wgt_row_pane_g3

0x0002,

0xfdc0,	// (0x0001c696) list_notif_wgt_row_pane_g

0xeef1,	// (0x0001b7c7) list_notif_wgt_row_pane_t1

0xef07,	// (0x0001b7dd) list_notif_wgt_row_pane_t2

0xef19,	// (0x0001b7ef) list_notif_wgt_row_pane_t3

0x0002,

0xfdc7,	// (0x0001c69d) list_notif_wgt_row_pane_t

0xd5d8,	// (0x00019eae) list_recal_day_event_pane_g1

0xef2b,	// (0x0001b801) list_recal_day_event_pane_t1

0x982f,	// (0x00016105) bg_button_pane_cp045

0x8bbc,	// (0x00015492) cntbar_detail_btn_pane_t1

0xae31,	// (0x00017707) main_callh_pane_ParamLimits

0xae31,	// (0x00017707) main_callh_pane

0x982f,	// (0x00016105) main_coverflow0_pane

0x982f,	// (0x00016105) main_wgtman_pane

0x7ceb,	// (0x000145c1) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x7ceb,	// (0x000145c1) main_fs_bigclock_unlock_btn_pane

0x83c3,	// (0x00014c99) bg_button_pane_cp16

0x83d3,	// (0x00014ca9) cell_tport_appsw_pane_g3

0x8bca,	// (0x000154a0) cf0_flow_pane_ParamLimits

0x8bca,	// (0x000154a0) cf0_flow_pane

0xef3a,	// (0x0001b810) listscroll_cf0_pane

0xef45,	// (0x0001b81b) main_cf0_pane_g1

0x8bdf,	// (0x000154b5) main_cf0_pane_t1_ParamLimits

0x8bdf,	// (0x000154b5) main_cf0_pane_t1

0x8bf6,	// (0x000154cc) main_cf0_pane_t2_ParamLimits

0x8bf6,	// (0x000154cc) main_cf0_pane_t2

0x0001,

0xfdd3,	// (0x0001c6a9) main_cf0_pane_t_ParamLimits

0xfdd3,	// (0x0001c6a9) main_cf0_pane_t

0xef57,	// (0x0001b82d) scroll_pane_cp11

0x8c0d,	// (0x000154e3) cf0_flow_pane_g1

0x8c15,	// (0x000154eb) cf0_flow_pane_g2

0x0001,

0xfdd8,	// (0x0001c6ae) cf0_flow_pane_g

0x8c1d,	// (0x000154f3) cf0_flow_pane_t1

0x982f,	// (0x00016105) main_call6_pane

0x982f,	// (0x00016105) main_calllock_pane

0x8c2b,	// (0x00015501) call6_btn_grp_pane_ParamLimits

0x8c2b,	// (0x00015501) call6_btn_grp_pane

0x8c45,	// (0x0001551b) call6_pane_g1_ParamLimits

0x8c45,	// (0x0001551b) call6_pane_g1

0x8c5b,	// (0x00015531) popup_call6_1st_window_ParamLimits

0x8c5b,	// (0x00015531) popup_call6_1st_window

0x8c6c,	// (0x00015542) popup_call6_2nd_window_ParamLimits

0x8c6c,	// (0x00015542) popup_call6_2nd_window

0x8c7d,	// (0x00015553) cell_call6_btn_pane_ParamLimits

0x8c7d,	// (0x00015553) cell_call6_btn_pane

0xa25e,	// (0x00016b34) bg_popup_call2_in_pane_cp03

0xef62,	// (0x0001b838) popup_call6_1st_window_g1

0xef6a,	// (0x0001b840) popup_call6_1st_window_g2

0xef72,	// (0x0001b848) popup_call6_1st_window_g3

0x0002,

0xfddd,	// (0x0001c6b3) popup_call6_1st_window_g

0xef7a,	// (0x0001b850) popup_call6_1st_window_t1

0xef89,	// (0x0001b85f) popup_call6_1st_window_t2

0xef97,	// (0x0001b86d) popup_call6_1st_window_t3

0x0002,

0xfde4,	// (0x0001c6ba) popup_call6_1st_window_t

0xa25e,	// (0x00016b34) bg_popup_call2_in_pane_cp04

0xefa5,	// (0x0001b87b) popup_call6_2nd_window_g1

0xefad,	// (0x0001b883) popup_call6_2nd_window_g2

0xefb5,	// (0x0001b88b) popup_call6_2nd_window_g3

0x0002,

0xfdeb,	// (0x0001c6c1) popup_call6_2nd_window_g

0xefbd,	// (0x0001b893) popup_call6_2nd_window_t1

0x982f,	// (0x00016105) bg_button_pane_cp15

0xefcc,	// (0x0001b8a2) cell_call6_btn_pane_g1

0xefd5,	// (0x0001b8ab) cell_call6_btn_pane_t1

0x8c91,	// (0x00015567) listscroll_wgtman_pane_ParamLimits

0x8c91,	// (0x00015567) listscroll_wgtman_pane

0x8cb2,	// (0x00015588) wgtman_btn_pane_ParamLimits

0x8cb2,	// (0x00015588) wgtman_btn_pane

0xaafe,	// (0x000173d4) aid_scroll_copy1

0xefe4,	// (0x0001b8ba) list_wgtman_pane

0x8cf5,	// (0x000155cb) wgtman_btn_pane_g1_ParamLimits

0x8cf5,	// (0x000155cb) wgtman_btn_pane_g1

0x8d21,	// (0x000155f7) wgtman_btn_pane_t1_ParamLimits

0x8d21,	// (0x000155f7) wgtman_btn_pane_t1

0xefee,	// (0x0001b8c4) wgtman_btn_pane_t2_ParamLimits

0xefee,	// (0x0001b8c4) wgtman_btn_pane_t2

0x0001,

0xfdf2,	// (0x0001c6c8) wgtman_btn_pane_t_ParamLimits

0xfdf2,	// (0x0001c6c8) wgtman_btn_pane_t

0x8d5e,	// (0x00015634) listrow_wgtman_pane_ParamLimits

0x8d5e,	// (0x00015634) listrow_wgtman_pane

0x8d71,	// (0x00015647) listrow_wgtman_pane_g1

0x8d7e,	// (0x00015654) listrow_wgtman_pane_g2

0x0001,

0xfdf7,	// (0x0001c6cd) listrow_wgtman_pane_g

0x8d9c,	// (0x00015672) listrow_wgtman_pane_t1

0x8db4,	// (0x0001568a) listrow_wgtman_pane_t2

0x0001,

0xfdfc,	// (0x0001c6d2) listrow_wgtman_pane_t

0x8dda,	// (0x000156b0) wait_bar_pane_cp09

0xf005,	// (0x0001b8db) main_calllock_btn_pane

0xf00f,	// (0x0001b8e5) main_calllock_pane_g1

0x982f,	// (0x00016105) bg_button_pane_cp17

0xefcc,	// (0x0001b8a2) main_calllock_btn_pane_g1

0xf017,	// (0x0001b8ed) main_calllock_btn_pane_t1

0x982f,	// (0x00016105) main_dialer3_pane

0x982f,	// (0x00016105) main_fmrd2_pane

0xa29e,	// (0x00016b74) main_fs_bigclock_unlock_btn_pane_g1

0x8df4,	// (0x000156ca) main_fs_bigclock_unlock_btn_pane_t1

0x8e02,	// (0x000156d8) area_fmrd2_info_pane_ParamLimits

0x8e02,	// (0x000156d8) area_fmrd2_info_pane

0x8e13,	// (0x000156e9) area_fmrd2_visual_pane_ParamLimits

0x8e13,	// (0x000156e9) area_fmrd2_visual_pane

0x8e21,	// (0x000156f7) fmrd2_indi_pane_ParamLimits

0x8e21,	// (0x000156f7) fmrd2_indi_pane

0x8e2e,	// (0x00015704) area_fmrd2_visual_pane_g1

0x8e36,	// (0x0001570c) area_fmrd2_visual_pane_t1

0x8e46,	// (0x0001571c) area_fmrd2_visual_pane_t2

0x8e56,	// (0x0001572c) area_fmrd2_visual_pane_t3

0x0002,

0xfe06,	// (0x0001c6dc) area_fmrd2_visual_pane_t

0x8e66,	// (0x0001573c) area_fmrd2_info_pane_g1

0x8e6e,	// (0x00015744) area_fmrd2_info_pane_t1

0x8e7e,	// (0x00015754) area_fmrd2_info_pane_t2

0x8e8e,	// (0x00015764) area_fmrd2_info_pane_t3

0x8e9e,	// (0x00015774) area_fmrd2_info_pane_t4

0x0003,

0xfe0d,	// (0x0001c6e3) area_fmrd2_info_pane_t

0x8eac,	// (0x00015782) fmrd2_indi_pane_t1

0x8ebc,	// (0x00015792) fmrd2_indi_pane_t2

0x8ecc,	// (0x000157a2) fmrd2_indi_pane_t3

0x0002,

0xfe16,	// (0x0001c6ec) fmrd2_indi_pane_t

0xe28d,	// (0x0001ab63) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe28d,	// (0x0001ab63) list_single_fs_bigclock_indicator_pane_g5

0xe33e,	// (0x0001ac14) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe33e,	// (0x0001ac14) list_single_fs_bigclock_indicator_pane_t5

0x8561,	// (0x00014e37) aid_cell_bcale_month_pane_ParamLimits

0x8561,	// (0x00014e37) aid_cell_bcale_month_pane

0x857f,	// (0x00014e55) bcale_month_pane_ParamLimits

0x857f,	// (0x00014e55) bcale_month_pane

0x85a3,	// (0x00014e79) bcale_preview_pane_ParamLimits

0x85a3,	// (0x00014e79) bcale_preview_pane

0xedc2,	// (0x0001b698) list_single_fs_bigclock_pane_t1_ParamLimits

0xede1,	// (0x0001b6b7) list_single_fs_bigclock_pane_t2_ParamLimits

0xede1,	// (0x0001b6b7) list_single_fs_bigclock_pane_t2

0x0001,

0xfd91,	// (0x0001c667) list_single_fs_bigclock_pane_t_ParamLimits

0xfd91,	// (0x0001c667) list_single_fs_bigclock_pane_t

0x8dec,	// (0x000156c2) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfe01,	// (0x0001c6d7) main_fs_bigclock_unlock_btn_pane_g

0x8edc,	// (0x000157b2) aid_dia3_key_size_ParamLimits

0x8edc,	// (0x000157b2) aid_dia3_key_size

0x8eeb,	// (0x000157c1) aid_dia3_listrow_size_ParamLimits

0x8eeb,	// (0x000157c1) aid_dia3_listrow_size

0x8f00,	// (0x000157d6) dia3_keypad_fun_pane_ParamLimits

0x8f00,	// (0x000157d6) dia3_keypad_fun_pane

0x8f1c,	// (0x000157f2) dia3_keypad_num_pane_ParamLimits

0x8f1c,	// (0x000157f2) dia3_keypad_num_pane

0x8f37,	// (0x0001580d) dia3_listscroll_pane_ParamLimits

0x8f37,	// (0x0001580d) dia3_listscroll_pane

0x8f4a,	// (0x00015820) dia3_numentry_pane_ParamLimits

0x8f4a,	// (0x00015820) dia3_numentry_pane

0xf026,	// (0x0001b8fc) dia3_list_pane

0xf031,	// (0x0001b907) scroll_pane_cp12

0x982f,	// (0x00016105) bg_dia3_numentry_pane

0x8f62,	// (0x00015838) dia3_numentry_pane_t1

0x8f71,	// (0x00015847) cell_dia3_key_num_pane

0x8f79,	// (0x0001584f) cell_dia3_key0_fun_pane_ParamLimits

0x8f79,	// (0x0001584f) cell_dia3_key0_fun_pane

0x8f8d,	// (0x00015863) cell_dia3_key1_fun_pane_ParamLimits

0x8f8d,	// (0x00015863) cell_dia3_key1_fun_pane

0x8fa5,	// (0x0001587b) dia3_listrow_pane

0xdfd4,	// (0x0001a8aa) bg_dia3_numentry_pane_g1

0x982f,	// (0x00016105) bg_button_pane_cp21

0xf03c,	// (0x0001b912) cell_dia3_key_num_pane_t1

0xf04a,	// (0x0001b920) cell_dia3_key_num_pane_t2

0xf059,	// (0x0001b92f) cell_dia3_key_num_pane_t3

0xf068,	// (0x0001b93e) cell_dia3_key_num_pane_t4

0x0003,

0xfe1d,	// (0x0001c6f3) cell_dia3_key_num_pane_t

0x982f,	// (0x00016105) bg_button_pane_cp19

0x8fb7,	// (0x0001588d) cell_dia3_key0_fun_pane_g1

0x982f,	// (0x00016105) bg_button_pane_cp20

0x8fbf,	// (0x00015895) cell_dia3_key1_fun_pane_g1

0x8fc7,	// (0x0001589d) area_left_week_number_pane

0x8fd3,	// (0x000158a9) area_top_day_name_pane

0x8fe6,	// (0x000158bc) frame_month_view_pane

0xf077,	// (0x0001b94d) grid_month_view_pane

0x8ff9,	// (0x000158cf) cell_top_day_name_pane_ParamLimits

0x8ff9,	// (0x000158cf) cell_top_day_name_pane

0x9026,	// (0x000158fc) cell_area_left_week_number_pane_ParamLimits

0x9026,	// (0x000158fc) cell_area_left_week_number_pane

0x903a,	// (0x00015910) cell_month_view_pane_ParamLimits

0x903a,	// (0x00015910) cell_month_view_pane

0x0027,	// (0x0000c8fd) frm_month_g1

0x9067,	// (0x0001593d) frm_month_g2

0x907a,	// (0x00015950) frm_month_g3

0x908d,	// (0x00015963) frm_month_g4

0x90a0,	// (0x00015976) frm_month_g5

0x90b3,	// (0x00015989) frm_month_g6

0x90c6,	// (0x0001599c) frm_month_g7

0x00a0,	// (0x0000c976) frm_month_g8

0x90d9,	// (0x000159af) frm_month_g9

0x90e9,	// (0x000159bf) frm_month_g10

0x90f9,	// (0x000159cf) frm_month_g11

0x9109,	// (0x000159df) frm_month_g12

0x911b,	// (0x000159f1) frm_month_g13

0x912d,	// (0x00015a03) frm_month_g14

0x9141,	// (0x00015a17) frm_month_g15

0x9155,	// (0x00015a2b) frm_month_g16

0x000f,

0xfe26,	// (0x0001c6fc) frm_month_g

0x011b,	// (0x0000c9f1) cell_top_day_name_pane_t1

0x9169,	// (0x00015a3f) cell_area_left_week_number_pane_g1

0x9175,	// (0x00015a4b) cell_area_left_week_number_pane_t1

0x9f95,	// (0x0001686b) cell_month_view_pane_g1

0x9188,	// (0x00015a5e) cell_month_view_pane_t1

0x982f,	// (0x00016105) main_fps_pane

0xe552,	// (0x0001ae28) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe552,	// (0x0001ae28) cmail_ddmenu_btn02_pane_cp1

0xe56e,	// (0x0001ae44) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe56e,	// (0x0001ae44) cmail_ddmenu_btn02_pane_cp2

0x8844,	// (0x0001511a) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8844,	// (0x0001511a) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd44,	// (0x0001c61a) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd44,	// (0x0001c61a) cmail_ddmenu_btn02_pane_g

0x8862,	// (0x00015138) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8862,	// (0x00015138) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd49,	// (0x0001c61f) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd49,	// (0x0001c61f) cmail_ddmenu_btn02_pane_t

0x919b,	// (0x00015a71) fps_text_pane_ParamLimits

0x919b,	// (0x00015a71) fps_text_pane

0x91b2,	// (0x00015a88) main_fps_pane_g1_ParamLimits

0x91b2,	// (0x00015a88) main_fps_pane_g1

0x91cc,	// (0x00015aa2) wait_bar_pane_cp010_ParamLimits

0x91cc,	// (0x00015aa2) wait_bar_pane_cp010

0x91dd,	// (0x00015ab3) fps_text_pane_t1_ParamLimits

0x91dd,	// (0x00015ab3) fps_text_pane_t1

0x0456,	// (0x0000cd2c) cam4_image_uncrop_pane_g1

0x045f,	// (0x0000cd35) cam4_image_uncrop_pane_g2

0x5ea0,	// (0x00012776) cam4_image_uncrop_pane_g3

0x5ea9,	// (0x0001277f) cam4_image_uncrop_pane_g4

0x0003,

0xf888,	// (0x0001c15e) cam4_image_uncrop_pane_g

0x8fa5,	// (0x0001587b) dia3_listrow_pane_ParamLimits

0x982f,	// (0x00016105) main_phob2_pane

0x8394,	// (0x00014c6a) cell_tport_appsw_pane_cp02_ParamLimits

0x8394,	// (0x00014c6a) cell_tport_appsw_pane_cp02

0x83a8,	// (0x00014c7e) cell_tport_appsw_pane_cp03_ParamLimits

0x83a8,	// (0x00014c7e) cell_tport_appsw_pane_cp03

0x982f,	// (0x00016105) phob2_contact_card_pane

0x982f,	// (0x00016105) phob2_listscroll_pane

0x01a9,	// (0x0000ca7f) phob2_list_pane

0x01b1,	// (0x0000ca87) scroll_pane_cp034

0x91f5,	// (0x00015acb) phob2_cc_data_pane_ParamLimits

0x91f5,	// (0x00015acb) phob2_cc_data_pane

0x9214,	// (0x00015aea) phob2_cc_listscroll_pane_ParamLimits

0x9214,	// (0x00015aea) phob2_cc_listscroll_pane

0x8d5e,	// (0x00015634) list_double_large_graphic_phob2_pane_ParamLimits

0x8d5e,	// (0x00015634) list_double_large_graphic_phob2_pane

0x9232,	// (0x00015b08) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9232,	// (0x00015b08) list_double_large_graphic_phob2_pane_g1

0x923f,	// (0x00015b15) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x923f,	// (0x00015b15) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfe47,	// (0x0001c71d) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe47,	// (0x0001c71d) list_double_large_graphic_phob2_pane_g

0x9265,	// (0x00015b3b) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9265,	// (0x00015b3b) list_double_large_graphic_phob2_pane_t1

0x927a,	// (0x00015b50) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x927a,	// (0x00015b50) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe50,	// (0x0001c726) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe50,	// (0x0001c726) list_double_large_graphic_phob2_pane_t

0x982f,	// (0x00016105) list_highlight_pane_cp024

0x024a,	// (0x0000cb20) phob2_cc_button_pane

0x928f,	// (0x00015b65) phob2_cc_data_pane_g1_ParamLimits

0x928f,	// (0x00015b65) phob2_cc_data_pane_g1

0x92a6,	// (0x00015b7c) phob2_cc_data_pane_g2_ParamLimits

0x92a6,	// (0x00015b7c) phob2_cc_data_pane_g2

0x0001,

0xfe55,	// (0x0001c72b) phob2_cc_data_pane_g_ParamLimits

0xfe55,	// (0x0001c72b) phob2_cc_data_pane_g

0x92b8,	// (0x00015b8e) phob2_cc_data_pane_t1_ParamLimits

0x92b8,	// (0x00015b8e) phob2_cc_data_pane_t1

0x92d0,	// (0x00015ba6) phob2_cc_data_pane_t2_ParamLimits

0x92d0,	// (0x00015ba6) phob2_cc_data_pane_t2

0x92e8,	// (0x00015bbe) phob2_cc_data_pane_t3_ParamLimits

0x92e8,	// (0x00015bbe) phob2_cc_data_pane_t3

0x0002,

0xfe5a,	// (0x0001c730) phob2_cc_data_pane_t_ParamLimits

0xfe5a,	// (0x0001c730) phob2_cc_data_pane_t

0x02af,	// (0x0000cb85) phob2_cc_list_pane_ParamLimits

0x02af,	// (0x0000cb85) phob2_cc_list_pane

0xd681,	// (0x00019f57) scroll_pane_cp035_ParamLimits

0xd681,	// (0x00019f57) scroll_pane_cp035

0x989e,	// (0x00016174) bg_button_pane_cp033

0x02bb,	// (0x0000cb91) phob2_cc_button_pane_g1

0x02c7,	// (0x0000cb9d) phob2_cc_button_pane_t1

0x02dc,	// (0x0000cbb2) phob2_cc_button_pane_t2

0x0001,

0xfe61,	// (0x0001c737) phob2_cc_button_pane_t

0x9300,	// (0x00015bd6) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9300,	// (0x00015bd6) list_double_large_graphic_phob2_cc_pane

0x9332,	// (0x00015c08) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9332,	// (0x00015c08) list_double_large_graphic_phob2_cc_pane_g1

0x0397,	// (0x0000cc6d) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x0397,	// (0x0000cc6d) list_double_large_graphic_phob2_cc_pane_g2

0x933e,	// (0x00015c14) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x933e,	// (0x00015c14) list_double_large_graphic_phob2_cc_pane_g3

0x934a,	// (0x00015c20) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x934a,	// (0x00015c20) list_double_large_graphic_phob2_cc_pane_g4

0x9356,	// (0x00015c2c) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9356,	// (0x00015c2c) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe66,	// (0x0001c73c) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe66,	// (0x0001c73c) list_double_large_graphic_phob2_cc_pane_g

0x9362,	// (0x00015c38) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9362,	// (0x00015c38) list_double_large_graphic_phob2_cc_pane_t1

0x938b,	// (0x00015c61) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x938b,	// (0x00015c61) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe71,	// (0x0001c747) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe71,	// (0x0001c747) list_double_large_graphic_phob2_cc_pane_t

0x03f5,	// (0x0000cccb) list_highlight_pane_cp025_ParamLimits

0x03f5,	// (0x0000cccb) list_highlight_pane_cp025

0x989e,	// (0x00016174) bg_button_pane_cp033_ParamLimits

0x02bb,	// (0x0000cb91) phob2_cc_button_pane_g1_ParamLimits

0x02c7,	// (0x0000cb9d) phob2_cc_button_pane_t1_ParamLimits

0x02dc,	// (0x0000cbb2) phob2_cc_button_pane_t2_ParamLimits

0xfe61,	// (0x0001c737) phob2_cc_button_pane_t_ParamLimits

0x1a92,	// (0x0000e368) popup_wgtman_window

0xd436,	// (0x00019d0c) scroll_pane_cp038

0x8cd7,	// (0x000155ad) wgtman_btn_pane_cp_01_ParamLimits

0x8cd7,	// (0x000155ad) wgtman_btn_pane_cp_01

0x0403,	// (0x0000ccd9) wgtman_content_pane

0x040c,	// (0x0000cce2) wgtman_heading_pane

0x982f,	// (0x00016105) bg_heading_pane_cp02

0x0415,	// (0x0000cceb) wgtman_heading_pane_g1

0x041d,	// (0x0000ccf3) wgtman_heading_pane_t1

0x042b,	// (0x0000cd01) scroll_pane_cp036

0x0433,	// (0x0000cd09) wgtman_list_pane

0x043b,	// (0x0000cd11) wgtman_list_pane_t1_ParamLimits

0x043b,	// (0x0000cd11) wgtman_list_pane_t1

0xd1e3,	// (0x00019ab9) cam4_grid_pane

0x6bd5,	// (0x000134ab) bg_button_pane_cp015_ParamLimits

0x6be7,	// (0x000134bd) bg_button_pane_cp016_ParamLimits

0x6bfa,	// (0x000134d0) bg_button_pane_cp017_ParamLimits

0x6c50,	// (0x00013526) popup_vitu2_query_window_g3_ParamLimits

0x6c50,	// (0x00013526) popup_vitu2_query_window_g3

0x6d0d,	// (0x000135e3) popup_vitu2_query_window_t6_ParamLimits

0x6d0d,	// (0x000135e3) popup_vitu2_query_window_t6

0x6d38,	// (0x0001360e) popup_vitu2_query_window_t7_ParamLimits

0x6d38,	// (0x0001360e) popup_vitu2_query_window_t7

0x0456,	// (0x0000cd2c) cam4_grid_pane_g1

0x045f,	// (0x0000cd35) cam4_grid_pane_g2

0x0468,	// (0x0000cd3e) cam4_grid_pane_g3

0x0471,	// (0x0000cd47) cam4_grid_pane_g4

0x0003,

0xfe76,	// (0x0001c74c) cam4_grid_pane_g

0x2648,	// (0x0000ef1e) aid_placing_vt_slider_lsc_ParamLimits

0x2945,	// (0x0000f21b) vidtel_button_pane_ParamLimits

0x2945,	// (0x0000f21b) vidtel_button_pane

0x982f,	// (0x00016105) bg_button_pane_cp034

0x047c,	// (0x0000cd52) vidtel_button_pane_g1

0x0484,	// (0x0000cd5a) vidtel_button_pane_t1

0xd58c,	// (0x00019e62) aid_size_vtel_slider_touch

0xd681,	// (0x00019f57) scroll_pane_cp039

0x79df,	// (0x000142b5) ncim_query_button_pane_cp01_ParamLimits

0x79fe,	// (0x000142d4) ncimui_query_pane_g1_ParamLimits

0x989e,	// (0x00016174) input_focus_pane_cp012_ParamLimits

0xe01a,	// (0x0001a8f0) ncim_query_entry_pane_t1_ParamLimits

0xd681,	// (0x00019f57) scroll_pane_cp039_ParamLimits

0xabd5,	// (0x000174ab) navi_pane_bcale_mc_g1

0xabdd,	// (0x000174b3) navi_pane_bcale_mc_t1

0xe5a2,	// (0x0001ae78) main_sp_fs_email_pane_g1

0xe5ae,	// (0x0001ae84) main_sp_fs_email_pane_g2

0x0001,

0xfc79,	// (0x0001c54f) main_sp_fs_email_pane_g

0xea4d,	// (0x0001b323) list_single_cale_mrui_row_pane_g3_ParamLimits

0xea4d,	// (0x0001b323) list_single_cale_mrui_row_pane_g3

0x8882,	// (0x00015158) list_single_recal_day_pane_g5_event_pane

0xec2c,	// (0x0001b502) list_single_recal_day_pane_g7

0x049a,	// (0x0000cd70) list_recal_day_event_pane_cp01

0x04a3,	// (0x0000cd79) list_recal_vselct_arw_lo_pane_cp01

0x04ab,	// (0x0000cd81) list_recal_vselct_arw_up_pane_cp01

0x04b3,	// (0x0000cd89) list_recal_vselct_pane_cp01

0xd5d8,	// (0x00019eae) list_recal_day_event_pane_cp01_g1

0x04bd,	// (0x0000cd93) list_recal_day_event_pane_cp01_t1

0xec34,	// (0x0001b50a) list_single_recal_day_pane_t1_ParamLimits

0xec46,	// (0x0001b51c) list_single_recal_day_pane_t2_ParamLimits

0xfd59,	// (0x0001c62f) list_single_recal_day_pane_t_ParamLimits

0x9f1a,	// (0x000167f0) bg_notes_pane_ParamLimits

0x9fed,	// (0x000168c3) list_notes_pane_ParamLimits

0x1c99,	// (0x0000e56f) scroll_pane_cp06_ParamLimits

0xa029,	// (0x000168ff) main_notes_pane_ParamLimits

0x989e,	// (0x00016174) main_welc_pane

0x93d0,	// (0x00015ca6) main_welc_body_pane_ParamLimits

0x93d0,	// (0x00015ca6) main_welc_body_pane

0x93ed,	// (0x00015cc3) main_welc_opti_pane_ParamLimits

0x93ed,	// (0x00015cc3) main_welc_opti_pane

0x9461,	// (0x00015d37) main_welc_pane_t1_ParamLimits

0x9461,	// (0x00015d37) main_welc_pane_t1

0x95c7,	// (0x00015e9d) main_welc_body_row_pane_ParamLimits

0x95c7,	// (0x00015e9d) main_welc_body_row_pane

0x9f87,	// (0x0001685d) main_welc_opti_row_pane_ParamLimits

0x9f87,	// (0x0001685d) main_welc_opti_row_pane

0x0695,	// (0x0000cf6b) main_welc_opti_row_pane_g1

0x95dc,	// (0x00015eb2) main_welc_opti_row_pane_t1

0x06ac,	// (0x0000cf82) main_welc_body_row_pane_t1

0xeea2,	// (0x0001b778) popup_notif_wgt_heading_pane

0xeebc,	// (0x0001b792) aid_size_list_notif_wgt_del_ParamLimits

0xeec9,	// (0x0001b79f) list_notif_wgt_row_pane_g1_ParamLimits

0xeed5,	// (0x0001b7ab) list_notif_wgt_row_pane_g2_ParamLimits

0xeee4,	// (0x0001b7ba) list_notif_wgt_row_pane_g3_ParamLimits

0xfdc0,	// (0x0001c696) list_notif_wgt_row_pane_g_ParamLimits

0xeef1,	// (0x0001b7c7) list_notif_wgt_row_pane_t1_ParamLimits

0xef07,	// (0x0001b7dd) list_notif_wgt_row_pane_t2_ParamLimits

0xef19,	// (0x0001b7ef) list_notif_wgt_row_pane_t3_ParamLimits

0xfdc7,	// (0x0001c69d) list_notif_wgt_row_pane_t_ParamLimits

0x8d71,	// (0x00015647) listrow_wgtman_pane_g1_ParamLimits

0x8d7e,	// (0x00015654) listrow_wgtman_pane_g2_ParamLimits

0xfdf7,	// (0x0001c6cd) listrow_wgtman_pane_g_ParamLimits

0x8d9c,	// (0x00015672) listrow_wgtman_pane_t1_ParamLimits

0x8db4,	// (0x0001568a) listrow_wgtman_pane_t2_ParamLimits

0xfdfc,	// (0x0001c6d2) listrow_wgtman_pane_t_ParamLimits

0x8dda,	// (0x000156b0) wait_bar_pane_cp09_ParamLimits

0x982f,	// (0x00016105) bg_popup_heading_pane_cp02

0x06bb,	// (0x0000cf91) popup_notif_wgt_heading_pane_g1

0x06c3,	// (0x0000cf99) popup_notif_wgt_heading_pane_t1

0x982f,	// (0x00016105) main_vids_pane

0x982f,	// (0x00016105) vids_listscroll_pane

0x95eb,	// (0x00015ec1) scroll_pane_cp040

0x982f,	// (0x00016105) vids_list_pane

0x95f6,	// (0x00015ecc) vids_list_double_pane_ParamLimits

0x95f6,	// (0x00015ecc) vids_list_double_pane

0x9607,	// (0x00015edd) vids_list_double_pane_g1

0x9610,	// (0x00015ee6) vids_list_double_pane_t1

0x961f,	// (0x00015ef5) vids_list_double_pane_t2

0x0001,

0xfe95,	// (0x0001c76b) vids_list_double_pane_t

0x989e,	// (0x00016174) main_ncimui_pane_ParamLimits

0x7815,	// (0x000140eb) main_ncimui_pane_g1_ParamLimits

0x7821,	// (0x000140f7) main_ncimui_pane_g2_ParamLimits

0x7821,	// (0x000140f7) main_ncimui_pane_g2

0x0001,

0xfb7a,	// (0x0001c450) main_ncimui_pane_g_ParamLimits

0xfb7a,	// (0x0001c450) main_ncimui_pane_g

0x9408,	// (0x00015cde) main_welc_pane_g1_ParamLimits

0x9408,	// (0x00015cde) main_welc_pane_g1

0x941d,	// (0x00015cf3) main_welc_pane_g2_ParamLimits

0x941d,	// (0x00015cf3) main_welc_pane_g2

0x0003,

0xfe7f,	// (0x0001c755) main_welc_pane_g_ParamLimits

0xfe7f,	// (0x0001c755) main_welc_pane_g

0x9f1a,	// (0x000167f0) listscroll_mce_pane_ParamLimits

0xad2a,	// (0x00017600) wait_bar_pane_cp10

0xc111,	// (0x000189e7) main_cale_day_pane_ParamLimits

0xc111,	// (0x000189e7) main_cale_week_pane_ParamLimits

0x9f1a,	// (0x000167f0) main_messa_pane_ParamLimits

0x52b2,	// (0x00011b88) main_clock2_btn_pane_ParamLimits

0x52b2,	// (0x00011b88) main_clock2_btn_pane

0xca10,	// (0x000192e6) main_clock2_btn_pane_cp01_ParamLimits

0xca10,	// (0x000192e6) main_clock2_btn_pane_cp01

0xe9d9,	// (0x0001b2af) list_cale_mrui_pane_ParamLimits

0xef4f,	// (0x0001b825) main_cf0_pane_g2

0x0001,

0xfdce,	// (0x0001c6a4) main_cf0_pane_g

0x8fc7,	// (0x0001589d) area_left_week_number_pane_ParamLimits

0x8fd3,	// (0x000158a9) area_top_day_name_pane_ParamLimits

0x8fe6,	// (0x000158bc) frame_month_view_pane_ParamLimits

0xf077,	// (0x0001b94d) grid_month_view_pane_ParamLimits

0x0027,	// (0x0000c8fd) frm_month_g1_ParamLimits

0x9067,	// (0x0001593d) frm_month_g2_ParamLimits

0x907a,	// (0x00015950) frm_month_g3_ParamLimits

0x908d,	// (0x00015963) frm_month_g4_ParamLimits

0x90a0,	// (0x00015976) frm_month_g5_ParamLimits

0x90b3,	// (0x00015989) frm_month_g6_ParamLimits

0x90c6,	// (0x0001599c) frm_month_g7_ParamLimits

0x00a0,	// (0x0000c976) frm_month_g8_ParamLimits

0x90d9,	// (0x000159af) frm_month_g9_ParamLimits

0x90e9,	// (0x000159bf) frm_month_g10_ParamLimits

0x90f9,	// (0x000159cf) frm_month_g11_ParamLimits

0x9109,	// (0x000159df) frm_month_g12_ParamLimits

0x911b,	// (0x000159f1) frm_month_g13_ParamLimits

0x912d,	// (0x00015a03) frm_month_g14_ParamLimits

0x9141,	// (0x00015a17) frm_month_g15_ParamLimits

0x9155,	// (0x00015a2b) frm_month_g16_ParamLimits

0xfe26,	// (0x0001c6fc) frm_month_g_ParamLimits

0x011b,	// (0x0000c9f1) cell_top_day_name_pane_t1_ParamLimits

0x9169,	// (0x00015a3f) cell_area_left_week_number_pane_g1_ParamLimits

0x9175,	// (0x00015a4b) cell_area_left_week_number_pane_t1_ParamLimits

0x9f95,	// (0x0001686b) cell_month_view_pane_g1_ParamLimits

0x9188,	// (0x00015a5e) cell_month_view_pane_t1_ParamLimits

0x9f12,	// (0x000167e8) main_clock2_btn_pane_g1

0x071b,	// (0x0000cff1) main_clock2_btn_pane_t1

0x989e,	// (0x00016174) listscroll_cmail_pane_ParamLimits

0xe5a2,	// (0x0001ae78) main_sp_fs_email_pane_g1_ParamLimits

0xe5ae,	// (0x0001ae84) main_sp_fs_email_pane_g2_ParamLimits

0xfc79,	// (0x0001c54f) main_sp_fs_email_pane_g_ParamLimits

0xeb9c,	// (0x0001b472) list_recal_day_pane_ParamLimits

0xebad,	// (0x0001b483) mian_recal_day_pane_t1

0x8237,	// (0x00014b0d) list_single_dyc_row_text_pane_t4_ParamLimits

0x8237,	// (0x00014b0d) list_single_dyc_row_text_pane_t4

0x8280,	// (0x00014b56) list_single_dyc_row_text_pane_t5_ParamLimits

0x8280,	// (0x00014b56) list_single_dyc_row_text_pane_t5

0xe650,	// (0x0001af26) list_single_dyc_row_text_pane_t6_ParamLimits

0xe650,	// (0x0001af26) list_single_dyc_row_text_pane_t6

0x33c9,	// (0x0000fc9f) aid_mgn_list_cale_time_pane

0x989e,	// (0x00016174) main_gallery2_pane_ParamLimits

0xca26,	// (0x000192fc) main_clock2_pane_cp01_t1

0xca34,	// (0x0001930a) main_clock2_pane_cp01_t3

0x0001,

0xf75f,	// (0x0001c035) main_clock2_pane_cp01_t

0x2035,	// (0x0000e90b) cale_week_scroll_pane_g16_ParamLimits

0x2035,	// (0x0000e90b) cale_week_scroll_pane_g16

0xa25e,	// (0x00016b34) vorec_slider_pane

0x0484,	// (0x0000cd5a) vidtel_button_pane_t1_ParamLimits

0x88e8,	// (0x000151be) main_fs_bigclock_clock_pane_g1_ParamLimits

0x88e8,	// (0x000151be) main_fs_bigclock_clock_pane_g2_ParamLimits

0x88f9,	// (0x000151cf) main_fs_bigclock_clock_pane_g3_ParamLimits

0x88f9,	// (0x000151cf) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd7c,	// (0x0001c652) main_fs_bigclock_clock_pane_g_ParamLimits

0x890c,	// (0x000151e2) main_fs_bigclock_clock_pane_t1_ParamLimits

0x8922,	// (0x000151f8) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd85,	// (0x0001c65b) main_fs_bigclock_clock_pane_t_ParamLimits

0x4b8e,	// (0x00011464) main_mup3_lyrics_pane_ParamLimits

0x4b8e,	// (0x00011464) main_mup3_lyrics_pane

0x9655,	// (0x00015f2b) main_mup3_lyrics_pane_t1_ParamLimits

0x9655,	// (0x00015f2b) main_mup3_lyrics_pane_t1

0xce78,	// (0x0001974e) aid_main_mp4_pane_t1_area

0xce82,	// (0x00019758) aid_main_mp4_pane_t2_area

0xcf2e,	// (0x00019804) main_mp4_pane_g7_ParamLimits

0xcf2e,	// (0x00019804) main_mp4_pane_g7

0xcf3a,	// (0x00019810) main_mp4_pane_g8_ParamLimits

0xcf3a,	// (0x00019810) main_mp4_pane_g8

0x5c71,	// (0x00012547) aid_call6_pane_g1_size

0x931b,	// (0x00015bf1) list_double_large_graphic_phob2_other_pane_ParamLimits

0x931b,	// (0x00015bf1) list_double_large_graphic_phob2_other_pane

0xab06,	// (0x000173dc) list_double_large_graphic_phob2_other_pane_g1

0x982f,	// (0x00016105) list_highlight_pane_cp026

0x989e,	// (0x00016174) main_welc_pane_ParamLimits

0x8076,	// (0x0001494c) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x8076,	// (0x0001494c) main_sp_fs_ctrlbar_pane_g3

0x8090,	// (0x00014966) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x8090,	// (0x00014966) main_sp_fs_ctrlbar_pane_g4

0x80c4,	// (0x0001499a) toolbar2_fixed_button_pane_cp01

0x80cf,	// (0x000149a5) toolbar2_fixed_button_pane_cp02

0x80dc,	// (0x000149b2) toolbar2_fixed_button_pane_cp03

0x93b4,	// (0x00015c8a) list_welc_entry_pane_ParamLimits

0x93b4,	// (0x00015c8a) list_welc_entry_pane

0x9432,	// (0x00015d08) main_welc_pane_g3_ParamLimits

0x9432,	// (0x00015d08) main_welc_pane_g3

0x947f,	// (0x00015d55) main_welc_pane_t2_ParamLimits

0x947f,	// (0x00015d55) main_welc_pane_t2

0x9499,	// (0x00015d6f) main_welc_pane_t3_ParamLimits

0x9499,	// (0x00015d6f) main_welc_pane_t3

0x0005,

0xfe88,	// (0x0001c75e) main_welc_pane_t_ParamLimits

0xfe88,	// (0x0001c75e) main_welc_pane_t

0x954b,	// (0x00015e21) welc_button_pane_ParamLimits

0x954b,	// (0x00015e21) welc_button_pane

0x95b3,	// (0x00015e89) welc_service_logo_pane_ParamLimits

0x95b3,	// (0x00015e89) welc_service_logo_pane

0x9671,	// (0x00015f47) list_single_welc_entry_pane_ParamLimits

0x9671,	// (0x00015f47) list_single_welc_entry_pane

0x9682,	// (0x00015f58) list_single_welc_entry_pane_g1

0x968a,	// (0x00015f60) list_single_welc_entry_pane_t1

0x9698,	// (0x00015f6e) list_single_welc_entry_pane_t2

0x0001,

0xfe9a,	// (0x0001c770) list_single_welc_entry_pane_t

0x982f,	// (0x00016105) bg_button_pane_cp035

0x07ba,	// (0x0000d090) welc_button_pane_t1

0x07c8,	// (0x0000d09e) welc_service_logo_pane_g1

0x07d1,	// (0x0000d0a7) welc_service_logo_pane_g2

0x0001,

0xfe9f,	// (0x0001c775) welc_service_logo_pane_g

0x982f,	// (0x00016105) main_int_radio_pane

0xdeb8,	// (0x0001a78e) list_single_fs_dyc_pane_g1

0x924b,	// (0x00015b21) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x924b,	// (0x00015b21) list_double_large_graphic_phob2_pane_g3

0x9257,	// (0x00015b2d) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x9257,	// (0x00015b2d) list_double_large_graphic_phob2_pane_g4

0x96a6,	// (0x00015f7c) main_int_radio1_pane_ParamLimits

0x96a6,	// (0x00015f7c) main_int_radio1_pane

0x07ec,	// (0x0000d0c2) find_pane_cp02

0x96c3,	// (0x00015f99) input_focus_pane_cp12_ParamLimits

0x96c3,	// (0x00015f99) input_focus_pane_cp12

0x96d3,	// (0x00015fa9) input_focus_pane_cp13_ParamLimits

0x96d3,	// (0x00015fa9) input_focus_pane_cp13

0x96e7,	// (0x00015fbd) input_focus_pane_cp14_ParamLimits

0x96e7,	// (0x00015fbd) input_focus_pane_cp14

0x0831,	// (0x0000d107) int_radio1_listscroll_pane

0x96fb,	// (0x00015fd1) main_int_radio1_pane_g1_ParamLimits

0x96fb,	// (0x00015fd1) main_int_radio1_pane_g1

0x9713,	// (0x00015fe9) main_int_radio1_pane_t1_ParamLimits

0x9713,	// (0x00015fe9) main_int_radio1_pane_t1

0x972e,	// (0x00016004) main_int_radio1_pane_t2_ParamLimits

0x972e,	// (0x00016004) main_int_radio1_pane_t2

0x9749,	// (0x0001601f) main_int_radio1_pane_t3_ParamLimits

0x9749,	// (0x0001601f) main_int_radio1_pane_t3

0x9764,	// (0x0001603a) main_int_radio1_pane_t4_ParamLimits

0x9764,	// (0x0001603a) main_int_radio1_pane_t4

0x089e,	// (0x0000d174) main_int_radio1_pane_t5_ParamLimits

0x089e,	// (0x0000d174) main_int_radio1_pane_t5

0x9776,	// (0x0001604c) main_int_radio1_pane_t6_ParamLimits

0x9776,	// (0x0001604c) main_int_radio1_pane_t6

0x978b,	// (0x00016061) main_int_radio1_pane_t7_ParamLimits

0x978b,	// (0x00016061) main_int_radio1_pane_t7

0x97a0,	// (0x00016076) main_int_radio1_pane_t8_ParamLimits

0x97a0,	// (0x00016076) main_int_radio1_pane_t8

0x97bf,	// (0x00016095) main_int_radio1_pane_t9_ParamLimits

0x97bf,	// (0x00016095) main_int_radio1_pane_t9

0x97d1,	// (0x000160a7) main_int_radio1_pane_t10_ParamLimits

0x97d1,	// (0x000160a7) main_int_radio1_pane_t10

0x97f7,	// (0x000160cd) main_int_radio1_pane_t11_ParamLimits

0x97f7,	// (0x000160cd) main_int_radio1_pane_t11

0x981d,	// (0x000160f3) main_int_radio1_pane_t12_ParamLimits

0x981d,	// (0x000160f3) main_int_radio1_pane_t12

0x000b,

0xfea4,	// (0x0001c77a) main_int_radio1_pane_t_ParamLimits

0xfea4,	// (0x0001c77a) main_int_radio1_pane_t

0x0973,	// (0x0000d249) int_radio_list_pane

0x01b1,	// (0x0000ca87) scroll_pane_cp037

0x097b,	// (0x0000d251) list_double_large_graphic_int_radio_pane_ParamLimits

0x097b,	// (0x0000d251) list_double_large_graphic_int_radio_pane

0x0994,	// (0x0000d26a) list_double_large_graphic_int_radio_pane_g1

0x099d,	// (0x0000d273) list_double_large_graphic_int_radio_pane_t1

0x09ab,	// (0x0000d281) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfebd,	// (0x0001c793) list_double_large_graphic_int_radio_pane_t

0x982f,	// (0x00016105) list_highlight_pane_cp027

0x04da,	// (0x0000cdb0) main_button_pane_4

0x9442,	// (0x00015d18) main_welc_pane_g4_ParamLimits

0x9442,	// (0x00015d18) main_welc_pane_g4

0x94b1,	// (0x00015d87) main_welc_pane_t4_ParamLimits

0x94b1,	// (0x00015d87) main_welc_pane_t4

0x94c6,	// (0x00015d9c) main_welc_pane_t5_ParamLimits

0x94c6,	// (0x00015d9c) main_welc_pane_t5

0x9510,	// (0x00015de6) main_welc_pane_t6_ParamLimits

0x9510,	// (0x00015de6) main_welc_pane_t6

0x9562,	// (0x00015e38) welc_button_pane_2_ParamLimits

0x9562,	// (0x00015e38) welc_button_pane_2

0x957e,	// (0x00015e54) welc_button_pane_3_ParamLimits

0x957e,	// (0x00015e54) welc_button_pane_3

0x04da,	// (0x0000cdb0) welc_button_pane_4

0x959d,	// (0x00015e73) welc_button_pane_5_ParamLimits

0x959d,	// (0x00015e73) welc_button_pane_5

0x4404,	// (0x00010cda) main_popup_welc_pane

0x09b9,	// (0x0000d28f) main_welc_sk_g3

0x09c3,	// (0x0000d299) main_welc_sk_g4

0x09cd,	// (0x0000d2a3) main_welc_sk_t3

0x09dd,	// (0x0000d2b3) main_welc_sk_t4

0x09ed,	// (0x0000d2c3) popup_welc_pane_t4

0x09fb,	// (0x0000d2d1) popup_welc_pane_t5

0x0a09,	// (0x0000d2df) popup_welc_pane_t6
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
	};

} // end of namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Normal
