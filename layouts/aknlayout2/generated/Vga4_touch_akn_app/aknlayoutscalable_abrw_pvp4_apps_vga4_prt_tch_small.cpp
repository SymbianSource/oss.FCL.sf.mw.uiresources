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

#include "aknlayoutscalable_abrw_pvp4_apps_vga4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0004a1e6 };

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
0x59fb,	// (0x0004fbe1) Screen

0x5a07,	// (0x0004fbed) application_window

0x5a47,	// (0x0004fc2d) area_bottom_pane_ParamLimits

0x5a47,	// (0x0004fc2d) area_bottom_pane

0x5a7c,	// (0x0004fc62) area_top_pane_ParamLimits

0x5a7c,	// (0x0004fc62) area_top_pane

0x0599,	// (0x0004a77f) call_video_uplink_pane_ParamLimits

0x0599,	// (0x0004a77f) call_video_uplink_pane

0x5b0a,	// (0x0004fcf0) main_pane_ParamLimits

0x5b0a,	// (0x0004fcf0) main_pane

0xe7bb,	// (0x000589a1) context_pane

0x8c2a,	// (0x00052e10) navi_pane

0x8c4e,	// (0x00052e34) popup_cale_events_window_ParamLimits

0x8c4e,	// (0x00052e34) popup_cale_events_window

0xe7ce,	// (0x000589b4) popup_mup_playback_window

0x8c66,	// (0x00052e4c) signal_pane

0x3a20,	// (0x0004dc06) main_browser_pane

0x447c,	// (0x0004e662) main_burst_pane

0x8adc,	// (0x00052cc2) main_calc_pane

0x447c,	// (0x0004e662) main_cale_day_pane

0x3a20,	// (0x0004dc06) main_cale_month_pane

0x447c,	// (0x0004e662) main_cale_week_pane

0x447c,	// (0x0004e662) main_call_pane

0x36fa,	// (0x0004d8e0) main_call_poc_pane

0x447c,	// (0x0004e662) main_camera_pane

0x447c,	// (0x0004e662) main_chi_dic_pane

0x431e,	// (0x0004e504) main_clock_pane

0x36fa,	// (0x0004d8e0) main_fmradio_pane

0x447c,	// (0x0004e662) main_graph_messa_pane

0x36fa,	// (0x0004d8e0) main_help_pane

0x3a20,	// (0x0004dc06) main_im_pane

0x3955,	// (0x0004db3b) main_image_pane_ParamLimits

0x3955,	// (0x0004db3b) main_image_pane

0x36fa,	// (0x0004d8e0) main_location2_pane

0x447c,	// (0x0004e662) main_location_pane

0x36fa,	// (0x0004d8e0) main_messa_pane

0x36fa,	// (0x0004d8e0) main_mp2_pane

0x447c,	// (0x0004e662) main_mp_pane

0x36fa,	// (0x0004d8e0) main_msg_pane

0x36fa,	// (0x0004d8e0) main_mup_eq_pane

0x36fa,	// (0x0004d8e0) main_mup_pane

0x447c,	// (0x0004e662) main_notes_pane

0x36fa,	// (0x0004d8e0) main_pec_pane

0x36fa,	// (0x0004d8e0) main_phob_pane

0x36fa,	// (0x0004d8e0) main_pinb_pane

0x36fa,	// (0x0004d8e0) main_postcard_pane

0x36fa,	// (0x0004d8e0) main_qdial_pane

0x447c,	// (0x0004e662) main_skin_pane

0x36fa,	// (0x0004d8e0) main_smil2_pane

0x447c,	// (0x0004e662) main_smil_pane

0x447c,	// (0x0004e662) main_video_pane

0x447c,	// (0x0004e662) main_video_tele_pane

0x3955,	// (0x0004db3b) main_viewer_pane_ParamLimits

0x3955,	// (0x0004db3b) main_viewer_pane

0x447c,	// (0x0004e662) main_vorec_pane

0x8b14,	// (0x00052cfa) popup_blid_sat_info_window_ParamLimits

0x8b14,	// (0x00052cfa) popup_blid_sat_info_window

0x8b2e,	// (0x00052d14) popup_dyc_status_message_window_ParamLimits

0x8b2e,	// (0x00052d14) popup_dyc_status_message_window

0x8b3e,	// (0x00052d24) popup_grid_large_graphic_window_ParamLimits

0x8b3e,	// (0x00052d24) popup_grid_large_graphic_window

0x8bb6,	// (0x00052d9c) popup_loc_request_window_ParamLimits

0x8bb6,	// (0x00052d9c) popup_loc_request_window

0x8bfe,	// (0x00052de4) popup_wml_address_window_ParamLimits

0x8bfe,	// (0x00052de4) popup_wml_address_window

0x89b4,	// (0x00052b9a) call_muted_g1

0x8670,	// (0x00052856) popup_call_audio_conf_window_ParamLimits

0x8670,	// (0x00052856) popup_call_audio_conf_window

0x89c4,	// (0x00052baa) popup_call_audio_first_window_ParamLimits

0x89c4,	// (0x00052baa) popup_call_audio_first_window

0x8a04,	// (0x00052bea) popup_call_audio_in_window_ParamLimits

0x8a04,	// (0x00052bea) popup_call_audio_in_window

0x8a28,	// (0x00052c0e) popup_call_audio_out_window_ParamLimits

0x8a28,	// (0x00052c0e) popup_call_audio_out_window

0x8a4a,	// (0x00052c30) popup_call_audio_second_window_ParamLimits

0x8a4a,	// (0x00052c30) popup_call_audio_second_window

0x8a7a,	// (0x00052c60) popup_call_audio_wait_window_ParamLimits

0x8a7a,	// (0x00052c60) popup_call_audio_wait_window

0x8a9b,	// (0x00052c81) popup_number_entry_window_ParamLimits

0x8a9b,	// (0x00052c81) popup_number_entry_window

0x32e7,	// (0x0004d4cd) bg_popup_call_pane_cp05_ParamLimits

0x32e7,	// (0x0004d4cd) bg_popup_call_pane_cp05

0x3307,	// (0x0004d4ed) popup_number_entry_window_t1

0x331a,	// (0x0004d500) popup_number_entry_window_t2

0x332c,	// (0x0004d512) popup_number_entry_window_t3

0x0003,

0xf0fb,	// (0x000592e1) popup_number_entry_window_t

0x333e,	// (0x0004d524) text_title_cp2

0x3351,	// (0x0004d537) bg_popup_call_pane_cp_ParamLimits

0x3351,	// (0x0004d537) bg_popup_call_pane_cp

0x335f,	// (0x0004d545) call_thumbnail_pane

0x3367,	// (0x0004d54d) popup_call_audio_in_window_g1_ParamLimits

0x3367,	// (0x0004d54d) popup_call_audio_in_window_g1

0x3373,	// (0x0004d559) popup_call_audio_in_window_g2_ParamLimits

0x3373,	// (0x0004d559) popup_call_audio_in_window_g2

0x337f,	// (0x0004d565) popup_call_audio_in_window_g3_ParamLimits

0x337f,	// (0x0004d565) popup_call_audio_in_window_g3

0x0002,

0xf104,	// (0x000592ea) popup_call_audio_in_window_g_ParamLimits

0xf104,	// (0x000592ea) popup_call_audio_in_window_g

0x338b,	// (0x0004d571) popup_call_audio_in_window_t1_ParamLimits

0x338b,	// (0x0004d571) popup_call_audio_in_window_t1

0x33a7,	// (0x0004d58d) popup_call_audio_in_window_t2_ParamLimits

0x33a7,	// (0x0004d58d) popup_call_audio_in_window_t2

0x33c3,	// (0x0004d5a9) popup_call_audio_in_window_t3_ParamLimits

0x33c3,	// (0x0004d5a9) popup_call_audio_in_window_t3

0x0002,

0xf10b,	// (0x000592f1) popup_call_audio_in_window_t_ParamLimits

0xf10b,	// (0x000592f1) popup_call_audio_in_window_t

0x3351,	// (0x0004d537) bg_popup_call_pane_cp01_ParamLimits

0x3351,	// (0x0004d537) bg_popup_call_pane_cp01

0x335f,	// (0x0004d545) call_thumbnail_pane_cp02

0x33d6,	// (0x0004d5bc) call_type_pane_cp022

0x33de,	// (0x0004d5c4) popup_call_audio_out_window_g1_ParamLimits

0x33de,	// (0x0004d5c4) popup_call_audio_out_window_g1

0x33f0,	// (0x0004d5d6) popup_call_audio_out_window_g2_ParamLimits

0x33f0,	// (0x0004d5d6) popup_call_audio_out_window_g2

0x33fc,	// (0x0004d5e2) popup_call_audio_out_window_g3_ParamLimits

0x33fc,	// (0x0004d5e2) popup_call_audio_out_window_g3

0x0002,

0xf112,	// (0x000592f8) popup_call_audio_out_window_g_ParamLimits

0xf112,	// (0x000592f8) popup_call_audio_out_window_g

0x340e,	// (0x0004d5f4) popup_call_audio_out_window_t1_ParamLimits

0x340e,	// (0x0004d5f4) popup_call_audio_out_window_t1

0x3426,	// (0x0004d60c) popup_call_audio_out_window_t2_ParamLimits

0x3426,	// (0x0004d60c) popup_call_audio_out_window_t2

0x0001,

0xf119,	// (0x000592ff) popup_call_audio_out_window_t_ParamLimits

0xf119,	// (0x000592ff) popup_call_audio_out_window_t

0x343b,	// (0x0004d621) bg_popup_call_pane_ParamLimits

0x343b,	// (0x0004d621) bg_popup_call_pane

0x5cfe,	// (0x0004fee4) call_thumbnail_pane_cp_ParamLimits

0x5cfe,	// (0x0004fee4) call_thumbnail_pane_cp

0x34bf,	// (0x0004d6a5) call_type_pane_cp01_ParamLimits

0x34bf,	// (0x0004d6a5) call_type_pane_cp01

0x3503,	// (0x0004d6e9) popup_call_audio_first_window_g1_ParamLimits

0x3503,	// (0x0004d6e9) popup_call_audio_first_window_g1

0x354f,	// (0x0004d735) popup_call_audio_first_window_g2_ParamLimits

0x354f,	// (0x0004d735) popup_call_audio_first_window_g2

0x0001,

0xf11e,	// (0x00059304) popup_call_audio_first_window_g_ParamLimits

0xf11e,	// (0x00059304) popup_call_audio_first_window_g

0x3593,	// (0x0004d779) popup_call_audio_first_window_t1_ParamLimits

0x3593,	// (0x0004d779) popup_call_audio_first_window_t1

0x363f,	// (0x0004d825) popup_call_audio_first_window_t4_ParamLimits

0x363f,	// (0x0004d825) popup_call_audio_first_window_t4

0x36cb,	// (0x0004d8b1) popup_call_audio_first_window_t5_ParamLimits

0x36cb,	// (0x0004d8b1) popup_call_audio_first_window_t5

0x0002,

0xf123,	// (0x00059309) popup_call_audio_first_window_t_ParamLimits

0xf123,	// (0x00059309) popup_call_audio_first_window_t

0x36fa,	// (0x0004d8e0) bg_popup_call_pane_cp02

0x3704,	// (0x0004d8ea) call_type_pane_cp023

0x370c,	// (0x0004d8f2) popup_call_audio_wait_window_g1

0x3714,	// (0x0004d8fa) popup_call_audio_wait_window_g2

0x0001,

0xf12a,	// (0x00059310) popup_call_audio_wait_window_g

0x371c,	// (0x0004d902) popup_call_audio_wait_window_t3

0x372a,	// (0x0004d910) bg_popup_call_pane_cp03_ParamLimits

0x372a,	// (0x0004d910) bg_popup_call_pane_cp03

0x378a,	// (0x0004d970) call_thumbnail_pane_cp011_ParamLimits

0x378a,	// (0x0004d970) call_thumbnail_pane_cp011

0x3796,	// (0x0004d97c) call_type_pane_cp034_ParamLimits

0x3796,	// (0x0004d97c) call_type_pane_cp034

0x37d2,	// (0x0004d9b8) popup_call_audio_second_window_g1_ParamLimits

0x37d2,	// (0x0004d9b8) popup_call_audio_second_window_g1

0x380e,	// (0x0004d9f4) popup_call_audio_second_window_g2_ParamLimits

0x380e,	// (0x0004d9f4) popup_call_audio_second_window_g2

0x0001,

0xf12f,	// (0x00059315) popup_call_audio_second_window_g_ParamLimits

0xf12f,	// (0x00059315) popup_call_audio_second_window_g

0x384a,	// (0x0004da30) popup_call_audio_second_window_t1_ParamLimits

0x384a,	// (0x0004da30) popup_call_audio_second_window_t1

0x38cb,	// (0x0004dab1) popup_call_audio_second_window_t2_ParamLimits

0x38cb,	// (0x0004dab1) popup_call_audio_second_window_t2

0x3901,	// (0x0004dae7) popup_call_audio_second_window_t3_ParamLimits

0x3901,	// (0x0004dae7) popup_call_audio_second_window_t3

0x0002,

0xf134,	// (0x0005931a) popup_call_audio_second_window_t_ParamLimits

0xf134,	// (0x0005931a) popup_call_audio_second_window_t

0x36fa,	// (0x0004d8e0) bg_popup_call_pane_cp04

0x3937,	// (0x0004db1d) list_conf_pane

0x393f,	// (0x0004db25) popup_call_audio_conf_window_t1

0x394d,	// (0x0004db33) call_thumbnail_pane_g1

0x3955,	// (0x0004db3b) bg_pinb_pane_ParamLimits

0x3955,	// (0x0004db3b) bg_pinb_pane

0x3963,	// (0x0004db49) find_pinb_pane

0x396c,	// (0x0004db52) listscroll_pinb_pane_ParamLimits

0x396c,	// (0x0004db52) listscroll_pinb_pane

0x397b,	// (0x0004db61) pinb_bg_pane_g1

0x5d22,	// (0x0004ff08) pinb_bg_pane_g2

0x5d2e,	// (0x0004ff14) pinb_bg_pane_g3

0x5d3a,	// (0x0004ff20) pinb_bg_pane_g4

0x5d46,	// (0x0004ff2c) pinb_bg_pane_g5

0x5d52,	// (0x0004ff38) pinb_bg_pane_g6

0x5d5d,	// (0x0004ff43) pinb_bg_pane_g7

0x5d68,	// (0x0004ff4e) pinb_bg_pane_g8

0x5d73,	// (0x0004ff59) pinb_bg_pane_g9

0x5d7d,	// (0x0004ff63) pinb_bg_pane_g10

0x0009,

0xf13b,	// (0x00059321) pinb_bg_pane_g

0x5d9a,	// (0x0004ff80) grid_pinb_pane

0x5da5,	// (0x0004ff8b) list_pinb_pane

0x5db0,	// (0x0004ff96) scroll_pane_cp01_ParamLimits

0x5db0,	// (0x0004ff96) scroll_pane_cp01

0x3985,	// (0x0004db6b) find_pinb_pane_g1_ParamLimits

0x3985,	// (0x0004db6b) find_pinb_pane_g1

0x399d,	// (0x0004db83) find_pinb_pane_t1

0x39af,	// (0x0004db95) find_pinb_pane_t2

0x0001,

0xf155,	// (0x0005933b) find_pinb_pane_t

0x39c4,	// (0x0004dbaa) input_focus_pane_cp01_ParamLimits

0x39c4,	// (0x0004dbaa) input_focus_pane_cp01

0x5dc2,	// (0x0004ffa8) cell_pinb_pane_ParamLimits

0x5dc2,	// (0x0004ffa8) cell_pinb_pane

0x5de2,	// (0x0004ffc8) cell_pinb_pane_g1_ParamLimits

0x5de2,	// (0x0004ffc8) cell_pinb_pane_g1

0x5df7,	// (0x0004ffdd) cell_pinb_pane_g2_ParamLimits

0x5df7,	// (0x0004ffdd) cell_pinb_pane_g2

0x39d0,	// (0x0004dbb6) cell_pinb_pane_g3_ParamLimits

0x39d0,	// (0x0004dbb6) cell_pinb_pane_g3

0x0002,

0xf15a,	// (0x00059340) cell_pinb_pane_g_ParamLimits

0xf15a,	// (0x00059340) cell_pinb_pane_g

0x36fa,	// (0x0004d8e0) grid_highlight_pane_cp01

0x5e03,	// (0x0004ffe9) list_pinb_item_pane_ParamLimits

0x5e03,	// (0x0004ffe9) list_pinb_item_pane

0x36fa,	// (0x0004d8e0) list_highlight_pane_cp02

0x5e1e,	// (0x00050004) list_pinb_item_pane_g1_ParamLimits

0x5e1e,	// (0x00050004) list_pinb_item_pane_g1

0x5e2b,	// (0x00050011) list_pinb_item_pane_g2_ParamLimits

0x5e2b,	// (0x00050011) list_pinb_item_pane_g2

0x5e37,	// (0x0005001d) list_pinb_item_pane_g3_ParamLimits

0x5e37,	// (0x0005001d) list_pinb_item_pane_g3

0x5e48,	// (0x0005002e) list_pinb_item_pane_g4_ParamLimits

0x5e48,	// (0x0005002e) list_pinb_item_pane_g4

0x0003,

0xf161,	// (0x00059347) list_pinb_item_pane_g_ParamLimits

0xf161,	// (0x00059347) list_pinb_item_pane_g

0x5e54,	// (0x0005003a) list_pinb_item_pane_t1_ParamLimits

0x5e54,	// (0x0005003a) list_pinb_item_pane_t1

0x5e85,	// (0x0005006b) calc_display_pane

0x5ea3,	// (0x00050089) calc_paper_pane

0x5ebf,	// (0x000500a5) grid_calc_pane

0x36fa,	// (0x0004d8e0) bg_list_pane_cp01

0x5eeb,	// (0x000500d1) clock_g1

0x5ef3,	// (0x000500d9) clock_g2

0x0001,

0xf16a,	// (0x00059350) clock_g

0x5efd,	// (0x000500e3) clock_t1_ParamLimits

0x5efd,	// (0x000500e3) clock_t1

0x5f12,	// (0x000500f8) clock_t2_ParamLimits

0x5f12,	// (0x000500f8) clock_t2

0x5f24,	// (0x0005010a) clock_t3_ParamLimits

0x5f24,	// (0x0005010a) clock_t3

0x5f36,	// (0x0005011c) clock_t4_ParamLimits

0x5f36,	// (0x0005011c) clock_t4

0x5f48,	// (0x0005012e) clock_t5_ParamLimits

0x5f48,	// (0x0005012e) clock_t5

0x5f5d,	// (0x00050143) clock_t6_ParamLimits

0x5f5d,	// (0x00050143) clock_t6

0x5f6f,	// (0x00050155) clock_t7_ParamLimits

0x5f6f,	// (0x00050155) clock_t7

0x5f81,	// (0x00050167) clock_t8_ParamLimits

0x5f81,	// (0x00050167) clock_t8

0x5f97,	// (0x0005017d) clock_t9_ParamLimits

0x5f97,	// (0x0005017d) clock_t9

0x0008,

0xf16f,	// (0x00059355) clock_t_ParamLimits

0xf16f,	// (0x00059355) clock_t

0x39dc,	// (0x0004dbc2) popup_clock_analogue_window_cp02

0x39dc,	// (0x0004dbc2) popup_clock_digital_window_cp01

0x39e4,	// (0x0004dbca) listscroll_help_pane

0x36fa,	// (0x0004d8e0) phob_pre_status_pane

0x39ee,	// (0x0004dbd4) grid_qdial_pane

0x36fa,	// (0x0004d8e0) listscroll_mce_pane

0x39f8,	// (0x0004dbde) bg_notes_pane

0x3a02,	// (0x0004dbe8) list_notes_pane

0x5fad,	// (0x00050193) scroll_pane_cp06

0x3a0c,	// (0x0004dbf2) bg_calc_paper_pane

0x5fc2,	// (0x000501a8) list_calc_pane

0x3a20,	// (0x0004dc06) bg_calc_display_pane

0x5fdc,	// (0x000501c2) calc_display_pane_t1

0x5ff1,	// (0x000501d7) calc_display_pane_t2

0x6006,	// (0x000501ec) calc_display_pane_t3

0x0002,

0xf182,	// (0x00059368) calc_display_pane_t

0x6018,	// (0x000501fe) cell_calc_pane_ParamLimits

0x6018,	// (0x000501fe) cell_calc_pane

0x3a2c,	// (0x0004dc12) bg_calc_paper_pane_g1

0x3a44,	// (0x0004dc2a) bg_calc_paper_pane_g2

0x3a38,	// (0x0004dc1e) bg_calc_paper_pane_g3

0x3a5c,	// (0x0004dc42) bg_calc_paper_pane_g4

0x3a50,	// (0x0004dc36) bg_calc_paper_pane_g5

0x6047,	// (0x0005022d) bg_calc_paper_pane_g6

0x6058,	// (0x0005023e) bg_calc_paper_pane_g7

0x6069,	// (0x0005024f) bg_calc_paper_pane_g8

0x0007,

0xf189,	// (0x0005936f) bg_calc_paper_pane_g

0x607a,	// (0x00050260) calc_bg_paper_pane_g9

0x608b,	// (0x00050271) list_calc_item_pane_ParamLimits

0x608b,	// (0x00050271) list_calc_item_pane

0x3a68,	// (0x0004dc4e) list_calc_item_pane_g1

0x60af,	// (0x00050295) list_calc_item_pane_t1_ParamLimits

0x60af,	// (0x00050295) list_calc_item_pane_t1

0x60c1,	// (0x000502a7) list_calc_item_pane_t2_ParamLimits

0x60c1,	// (0x000502a7) list_calc_item_pane_t2

0x0001,

0xf19a,	// (0x00059380) list_calc_item_pane_t_ParamLimits

0xf19a,	// (0x00059380) list_calc_item_pane_t

0x3a75,	// (0x0004dc5b) cell_calc_pane_g1

0x3a7f,	// (0x0004dc65) grid_highlight_pane_cp02

0x3aaa,	// (0x0004dc90) bg_calc_display_pane_g1

0x60f1,	// (0x000502d7) bg_calc_display_pane_g2

0x3aa1,	// (0x0004dc87) bg_calc_display_pane_g3

0x0002,

0xf1a4,	// (0x0005938a) bg_calc_display_pane_g

0x60fb,	// (0x000502e1) cell_qdial_pane_ParamLimits

0x60fb,	// (0x000502e1) cell_qdial_pane

0x6111,	// (0x000502f7) cell_qdial_pane_g1_ParamLimits

0x6111,	// (0x000502f7) cell_qdial_pane_g1

0x611e,	// (0x00050304) cell_qdial_pane_g2_ParamLimits

0x611e,	// (0x00050304) cell_qdial_pane_g2

0x3ab3,	// (0x0004dc99) cell_qdial_pane_g3_ParamLimits

0x3ab3,	// (0x0004dc99) cell_qdial_pane_g3

0x0003,

0xf1ab,	// (0x00059391) cell_qdial_pane_g_ParamLimits

0xf1ab,	// (0x00059391) cell_qdial_pane_g

0x613c,	// (0x00050322) cell_qdial_pane_t1_ParamLimits

0x613c,	// (0x00050322) cell_qdial_pane_t1

0x6154,	// (0x0005033a) cell_qdial_pane_t2_ParamLimits

0x6154,	// (0x0005033a) cell_qdial_pane_t2

0x6167,	// (0x0005034d) cell_qdial_pane_t3_ParamLimits

0x6167,	// (0x0005034d) cell_qdial_pane_t3

0x0002,

0xf1b4,	// (0x0005939a) cell_qdial_pane_t_ParamLimits

0xf1b4,	// (0x0005939a) cell_qdial_pane_t

0x36fa,	// (0x0004d8e0) grid_highlight_pane_cp04

0x3abf,	// (0x0004dca5) thumbnail_qdial_pane_ParamLimits

0x3abf,	// (0x0004dca5) thumbnail_qdial_pane

0x3b1b,	// (0x0004dd01) list_help_pane

0x3b24,	// (0x0004dd0a) scroll_pane_cp02

0x617a,	// (0x00050360) help_list_pane_t1_ParamLimits

0x617a,	// (0x00050360) help_list_pane_t1

0x61a4,	// (0x0005038a) bg_notes_pane_g2

0x61ac,	// (0x00050392) bg_notes_pane_g3

0x61b4,	// (0x0005039a) notes_bg_pane_g1

0x61bc,	// (0x000503a2) notes_bg_pane_g4

0x61c4,	// (0x000503aa) notes_bg_pane_g5

0x61cc,	// (0x000503b2) notes_bg_pane_g6

0x61d4,	// (0x000503ba) notes_bg_pane_g7

0x61dc,	// (0x000503c2) notes_bg_pane_g8

0x61e4,	// (0x000503ca) notes_bg_pane_g9

0x0006,

0xf1d2,	// (0x000593b8) notes_bg_pane_g

0x61ec,	// (0x000503d2) list_notes_text_pane_ParamLimits

0x61ec,	// (0x000503d2) list_notes_text_pane

0x3b2d,	// (0x0004dd13) list_notes_text_pane_g1

0x0645,	// (0x0004a82b) list_notes_text_pane_t1

0x3a20,	// (0x0004dc06) listscroll_cale_week_pane

0x6226,	// (0x0005040c) bg_cale_heading_pane

0x3b47,	// (0x0004dd2d) bg_cale_pane_cp01

0x623a,	// (0x00050420) cale_week_corner_pane

0x6250,	// (0x00050436) cale_week_day_heading_pane

0x6264,	// (0x0005044a) cale_week_scroll_pane_g1

0x6275,	// (0x0005045b) cale_week_scroll_pane_g2

0x6286,	// (0x0005046c) cale_week_scroll_pane_g3

0x6297,	// (0x0005047d) cale_week_scroll_pane_g4

0x62a8,	// (0x0005048e) cale_week_scroll_pane_g5

0x62b9,	// (0x0005049f) cale_week_scroll_pane_g6

0x62cc,	// (0x000504b2) cale_week_scroll_pane_g7

0x62df,	// (0x000504c5) cale_week_scroll_pane_g8

0x62f2,	// (0x000504d8) cale_week_scroll_pane_g9

0x6303,	// (0x000504e9) cale_week_scroll_pane_g10

0x6314,	// (0x000504fa) cale_week_scroll_pane_g11

0x6325,	// (0x0005050b) cale_week_scroll_pane_g12

0x6336,	// (0x0005051c) cale_week_scroll_pane_g13

0x6347,	// (0x0005052d) cale_week_scroll_pane_g14

0x6358,	// (0x0005053e) cale_week_scroll_pane_g15

0x000e,

0xf1e1,	// (0x000593c7) cale_week_scroll_pane_g

0x6369,	// (0x0005054f) cale_week_time_pane

0x637c,	// (0x00050562) grid_cale_week_pane

0x6391,	// (0x00050577) scroll_pane_cp08

0x63ab,	// (0x00050591) cell_cale_week_pane_ParamLimits

0x63ab,	// (0x00050591) cell_cale_week_pane

0x63e9,	// (0x000505cf) cale_week_day_heading_pane_t1

0x6416,	// (0x000505fc) cale_week_day_heading_pane_t2

0x6443,	// (0x00050629) cale_week_day_heading_pane_t3

0x6470,	// (0x00050656) cale_week_day_heading_pane_t4

0x649d,	// (0x00050683) cale_week_day_heading_pane_t5

0x64ca,	// (0x000506b0) cale_week_day_heading_pane_t6

0x64f7,	// (0x000506dd) cale_week_day_heading_pane_t7

0x0006,

0xf200,	// (0x000593e6) cale_week_day_heading_pane_t

0x3b72,	// (0x0004dd58) bg_cale_side_pane

0x6524,	// (0x0005070a) cale_week_time_pane_t1

0x6550,	// (0x00050736) cale_week_time_pane_t2

0x657c,	// (0x00050762) cale_week_time_pane_t3

0x65a8,	// (0x0005078e) cale_week_time_pane_t4

0x65d4,	// (0x000507ba) cale_week_time_pane_t5

0x6600,	// (0x000507e6) cale_week_time_pane_t6

0x662c,	// (0x00050812) cale_week_time_pane_t7

0x6658,	// (0x0005083e) cale_week_time_pane_t8

0x0007,

0xf20f,	// (0x000593f5) cale_week_time_pane_t

0x6684,	// (0x0005086a) cell_cale_week_pane_g2

0x669d,	// (0x00050883) cell_cale_week_pane_g3_ParamLimits

0x669d,	// (0x00050883) cell_cale_week_pane_g3

0x3b80,	// (0x0004dd66) grid_highlight_pane_cp07

0x3b88,	// (0x0004dd6e) listscroll_gms_pane

0x3b92,	// (0x0004dd78) grid_gms_pane

0x3b9b,	// (0x0004dd81) listscroll_gms_pane_g1

0x3ba3,	// (0x0004dd89) listscroll_gms_pane_g2

0x0001,

0xf220,	// (0x00059406) listscroll_gms_pane_g

0x66b5,	// (0x0005089b) scroll_pane_cp010

0x66c0,	// (0x000508a6) cell_gms_pane_ParamLimits

0x66c0,	// (0x000508a6) cell_gms_pane

0x66d3,	// (0x000508b9) cell_gms_pane_g1

0x3bab,	// (0x0004dd91) cell_gms_pane_g2

0x3bb3,	// (0x0004dd99) cell_gms_pane_g3

0x3bbc,	// (0x0004dda2) cell_gms_pane_g4

0x0003,

0xf225,	// (0x0005940b) cell_gms_pane_g

0x3bc5,	// (0x0004ddab) grid_highlight_pane_cp09

0x895c,	// (0x00052b42) phob_pre_status_pane_g1

0x8964,	// (0x00052b4a) phob_pre_status_pane_g2

0x896c,	// (0x00052b52) phob_pre_status_pane_g3

0x8974,	// (0x00052b5a) phob_pre_status_pane_g4

0x0004,

0xf614,	// (0x000597fa) phob_pre_status_pane_g

0x8984,	// (0x00052b6a) phob_pre_status_pane_t1

0x8994,	// (0x00052b7a) phob_pre_status_pane_t2

0x89a4,	// (0x00052b8a) phob_pre_status_pane_t3

0x0002,

0xf61f,	// (0x00059805) phob_pre_status_pane_t

0x36fa,	// (0x0004d8e0) bg_list_pane_cp05

0x66e3,	// (0x000508c9) grid_vorec_pane

0x66ed,	// (0x000508d3) vorec_t1

0x66fb,	// (0x000508e1) vorec_t2

0x6709,	// (0x000508ef) vorec_t3

0x6717,	// (0x000508fd) vorec_t4

0x6725,	// (0x0005090b) vorec_t5

0x6733,	// (0x00050919) vorec_t6

0x0006,

0xf22e,	// (0x00059414) vorec_t

0x674f,	// (0x00050935) wait_bar_pane_cp01

0x6757,	// (0x0005093d) cell_vorec_pane_ParamLimits

0x6757,	// (0x0005093d) cell_vorec_pane

0x3bcd,	// (0x0004ddb3) cell_vorec_pane_g1

0x36fa,	// (0x0004d8e0) grid_highlight_pane_cp05

0x677c,	// (0x00050962) cams_zoom_pane

0x6788,	// (0x0005096e) image_vga_pane

0x6797,	// (0x0005097d) main_camera_pane_g1

0x67a5,	// (0x0005098b) main_camera_pane_g2

0x67b1,	// (0x00050997) main_camera_pane_g3

0x67bf,	// (0x000509a5) main_camera_pane_g4

0x67cd,	// (0x000509b3) main_camera_pane_g5

0x67db,	// (0x000509c1) main_camera_pane_g6

0x67e9,	// (0x000509cf) main_camera_pane_g7

0x0007,

0xf23d,	// (0x00059423) main_camera_pane_g

0x67f7,	// (0x000509dd) main_camera_pane_t1

0x6809,	// (0x000509ef) main_camera_pane_t2

0x0001,

0xf24e,	// (0x00059434) main_camera_pane_t

0x682c,	// (0x00050a12) cams_zoom_pane_cp_ParamLimits

0x682c,	// (0x00050a12) cams_zoom_pane_cp

0x6850,	// (0x00050a36) image_cif_pane_ParamLimits

0x6850,	// (0x00050a36) image_cif_pane

0x686e,	// (0x00050a54) image_subqcif_pane

0x6878,	// (0x00050a5e) main_video_pane_g1_ParamLimits

0x6878,	// (0x00050a5e) main_video_pane_g1

0x6898,	// (0x00050a7e) main_video_pane_g2_ParamLimits

0x6898,	// (0x00050a7e) main_video_pane_g2

0x68c8,	// (0x00050aae) main_video_pane_g3_ParamLimits

0x68c8,	// (0x00050aae) main_video_pane_g3

0x68f1,	// (0x00050ad7) main_video_pane_g4_ParamLimits

0x68f1,	// (0x00050ad7) main_video_pane_g4

0x691a,	// (0x00050b00) main_video_pane_g5_ParamLimits

0x691a,	// (0x00050b00) main_video_pane_g5

0x3be3,	// (0x0004ddc9) main_video_pane_g6_ParamLimits

0x3be3,	// (0x0004ddc9) main_video_pane_g6

0x0006,

0xf253,	// (0x00059439) main_video_pane_g_ParamLimits

0xf253,	// (0x00059439) main_video_pane_g

0x693c,	// (0x00050b22) main_video_pane_t1_ParamLimits

0x693c,	// (0x00050b22) main_video_pane_t1

0x3bfd,	// (0x0004dde3) cams_zoom_pane_g1

0x3c06,	// (0x0004ddec) cams_zoom_pane_g2

0x3c0f,	// (0x0004ddf5) cams_zoom_pane_g3

0x3c18,	// (0x0004ddfe) cams_zoom_pane_g4

0x0003,

0xf262,	// (0x00059448) cams_zoom_pane_g

0x6986,	// (0x00050b6c) grid_cams_pane

0x6994,	// (0x00050b7a) linegrid_cams_pane

0x69a2,	// (0x00050b88) cell_cams_pane_ParamLimits

0x69a2,	// (0x00050b88) cell_cams_pane

0x3c21,	// (0x0004de07) cams_burst_image_pane

0x3c29,	// (0x0004de0f) cell_cams_pane_g1

0x36fa,	// (0x0004d8e0) grid_highlight_pane_cp03

0x3a75,	// (0x0004dc5b) mp_bg_pane_g1

0x36fa,	// (0x0004d8e0) bg_list_pane_cp03

0xe68d,	// (0x00058873) bg_mp_pane

0xe695,	// (0x0005887b) grid_mp_pane

0xe69d,	// (0x00058883) media_player_g1

0xe6a7,	// (0x0005888d) media_player_t1

0xe6b5,	// (0x0005889b) media_player_t2

0xe6c3,	// (0x000588a9) media_player_t3

0xe6d1,	// (0x000588b7) media_player_t4

0xe6df,	// (0x000588c5) media_player_t5

0xe6ed,	// (0x000588d3) media_player_t6

0xe6fb,	// (0x000588e1) media_player_t7

0x0006,

0xf5fe,	// (0x000597e4) media_player_t

0xe709,	// (0x000588ef) wait_bar_pane_cp02

0xf5e3,	// (0x000597c9) main_usb_pane_t

0x8953,	// (0x00052b39) cell_mp_pane

0x3a75,	// (0x0004dc5b) cell_mp_pane_g1

0x36fa,	// (0x0004d8e0) grid_highlight_pane_cp06

0x3c31,	// (0x0004de17) grid_skin_colour_pane

0x3c39,	// (0x0004de1f) list_highlight_pane_cp03

0x6a10,	// (0x00050bf6) skin_g1

0x3c41,	// (0x0004de27) skin_t1

0x3c50,	// (0x0004de36) skin_t2

0x0001,

0xf297,	// (0x0005947d) skin_t

0x6a1a,	// (0x00050c00) cell_skin_colour_pane_ParamLimits

0x6a1a,	// (0x00050c00) cell_skin_colour_pane

0x3c5e,	// (0x0004de44) cell_skin_colour_pane_g1

0x6a69,	// (0x00050c4f) call_video_g1_ParamLimits

0x6a69,	// (0x00050c4f) call_video_g1

0x6a79,	// (0x00050c5f) call_video_g2_ParamLimits

0x6a79,	// (0x00050c5f) call_video_g2

0x0001,

0xf29c,	// (0x00059482) call_video_g_ParamLimits

0xf29c,	// (0x00059482) call_video_g

0x6ab1,	// (0x00050c97) call_video_uplink_pane_cp1_ParamLimits

0x6ab1,	// (0x00050c97) call_video_uplink_pane_cp1

0x3c78,	// (0x0004de5e) call_video_uplink_pane_cp2

0x6b5f,	// (0x00050d45) video_down_crop_pane_ParamLimits

0x6b5f,	// (0x00050d45) video_down_crop_pane

0x6c37,	// (0x00050e1d) video_down_pane_ParamLimits

0x6c37,	// (0x00050e1d) video_down_pane

0x3c80,	// (0x0004de66) video_down_subqcif_pane_ParamLimits

0x3c80,	// (0x0004de66) video_down_subqcif_pane

0x3c9a,	// (0x0004de80) video_down_subqcif_pane_cp_ParamLimits

0x3c9a,	// (0x0004de80) video_down_subqcif_pane_cp

0x3cc0,	// (0x0004dea6) im_reading_pane_ParamLimits

0x3cc0,	// (0x0004dea6) im_reading_pane

0x6d14,	// (0x00050efa) im_writing_pane_ParamLimits

0x6d14,	// (0x00050efa) im_writing_pane

0x6d32,	// (0x00050f18) im_reading_pane_t1

0x3cda,	// (0x0004dec0) list_im_pane

0x3ceb,	// (0x0004ded1) scroll_pane_cp07

0x6d7a,	// (0x00050f60) im_writing_pane_t1_ParamLimits

0x6d7a,	// (0x00050f60) im_writing_pane_t1

0x3d04,	// (0x0004deea) im_writing_pane_t2_ParamLimits

0x3d04,	// (0x0004deea) im_writing_pane_t2

0x0001,

0xf2a6,	// (0x0005948c) im_writing_pane_t_ParamLimits

0xf2a6,	// (0x0005948c) im_writing_pane_t

0x36fa,	// (0x0004d8e0) input_focus_pane_cp04

0x36fa,	// (0x0004d8e0) input_focus_pane_cp05

0x6d8c,	// (0x00050f72) list_im_single_pane_ParamLimits

0x6d8c,	// (0x00050f72) list_im_single_pane

0x6da8,	// (0x00050f8e) list_single_im_pane_t1

0x8917,	// (0x00052afd) blid_accuracy_pane

0x891f,	// (0x00052b05) blid_compass_pane

0x8929,	// (0x00052b0f) main_location_t1

0x8937,	// (0x00052b1d) main_location_t2

0x8945,	// (0x00052b2b) main_location_t3

0x0002,

0xf60d,	// (0x000597f3) main_location_t

0x36fa,	// (0x0004d8e0) aid_levels_location

0x3a75,	// (0x0004dc5b) blid_accuracy_pane_g1

0x3a75,	// (0x0004dc5b) blid_accuracy_pane_g2

0x0001,

0xf308,	// (0x000594ee) blid_accuracy_pane_g

0x3d4c,	// (0x0004df32) wml_content_pane

0x3d8a,	// (0x0004df70) wml_button_pane_ParamLimits

0x3d8a,	// (0x0004df70) wml_button_pane

0x6db7,	// (0x00050f9d) wml_list_single_large_pane_ParamLimits

0x6db7,	// (0x00050f9d) wml_list_single_large_pane

0x6dd9,	// (0x00050fbf) wml_list_single_medium_pane_ParamLimits

0x6dd9,	// (0x00050fbf) wml_list_single_medium_pane

0x6dff,	// (0x00050fe5) wml_list_single_small_pane_ParamLimits

0x6dff,	// (0x00050fe5) wml_list_single_small_pane

0x3d9e,	// (0x0004df84) wml_selection_box_pane_ParamLimits

0x3d9e,	// (0x0004df84) wml_selection_box_pane

0x3db1,	// (0x0004df97) wml_list_single_pane_t1

0x3dc0,	// (0x0004dfa6) wml_list_single_medium_pane_t1

0x3dcf,	// (0x0004dfb5) wml_list_single_large_pane_t1

0x3dde,	// (0x0004dfc4) input_focus_pane_cp02_ParamLimits

0x3dde,	// (0x0004dfc4) input_focus_pane_cp02

0x3df1,	// (0x0004dfd7) wml_selection_box_pane_g1

0x3dfa,	// (0x0004dfe0) wml_selection_box_pane_t1_ParamLimits

0x3dfa,	// (0x0004dfe0) wml_selection_box_pane_t1

0x3955,	// (0x0004db3b) bg_wml_button_pane_ParamLimits

0x3955,	// (0x0004db3b) bg_wml_button_pane

0x3e12,	// (0x0004dff8) wml_button_pane_g1

0x3e1a,	// (0x0004e000) wml_button_pane_t1

0x3e12,	// (0x0004dff8) wml_button_bg_pane_g1

0x3e2a,	// (0x0004e010) wml_button_bg_pane_g2

0x3e32,	// (0x0004e018) wml_button_bg_pane_g3

0x3e3a,	// (0x0004e020) wml_button_bg_pane_g4

0x3e42,	// (0x0004e028) wml_button_bg_pane_g5

0x3e4a,	// (0x0004e030) wml_button_bg_pane_g6

0x3e52,	// (0x0004e038) wml_button_bg_pane_g7

0x3e5a,	// (0x0004e040) wml_button_bg_pane_g8

0x3e62,	// (0x0004e048) wml_button_bg_pane_g9

0x0008,

0xf2ab,	// (0x00059491) wml_button_bg_pane_g

0x6e2a,	// (0x00051010) bg_list_pane_cp02

0x3e6a,	// (0x0004e050) mce_header_pane_ParamLimits

0x3e6a,	// (0x0004e050) mce_header_pane

0x3e80,	// (0x0004e066) mce_icon_pane

0x3e80,	// (0x0004e066) mce_image_pane

0x3e89,	// (0x0004e06f) mce_text_pane_ParamLimits

0x3e89,	// (0x0004e06f) mce_text_pane

0x6e34,	// (0x0005101a) scroll_pane_cp03

0x3d82,	// (0x0004df68) scroll_pane_cp04

0x3e9c,	// (0x0004e082) scroll_pane_cp05_ParamLimits

0x3e9c,	// (0x0004e082) scroll_pane_cp05

0x6e3e,	// (0x00051024) mce_header_field_pane_ParamLimits

0x6e3e,	// (0x00051024) mce_header_field_pane

0x6e60,	// (0x00051046) mce_header_field_pane_2_ParamLimits

0x6e60,	// (0x00051046) mce_header_field_pane_2

0x6e76,	// (0x0005105c) mce_header_field_pane_3

0x6e7e,	// (0x00051064) list_single_mce_message_pane_ParamLimits

0x6e7e,	// (0x00051064) list_single_mce_message_pane

0x6e9d,	// (0x00051083) list_single_mce_smart_pane_ParamLimits

0x6e9d,	// (0x00051083) list_single_mce_smart_pane

0x3ea8,	// (0x0004e08e) input_focus_pane_cp03

0x3eb1,	// (0x0004e097) list_header_data_pane

0x6ec7,	// (0x000510ad) mce_header_field_pane_t1

0x6ed7,	// (0x000510bd) list_single_mce_header_pane_ParamLimits

0x6ed7,	// (0x000510bd) list_single_mce_header_pane

0x3eb9,	// (0x0004e09f) list_single_mce_header_pane_t1

0x3ec8,	// (0x0004e0ae) list_single_mce_message_pane_g1

0x3ed0,	// (0x0004e0b6) list_single_mce_message_pane_t1

0x6f13,	// (0x000510f9) bg_cale_heading_pane_cp01_ParamLimits

0x6f13,	// (0x000510f9) bg_cale_heading_pane_cp01

0x3ede,	// (0x0004e0c4) bg_cale_pane_cp02_ParamLimits

0x3ede,	// (0x0004e0c4) bg_cale_pane_cp02

0x6f36,	// (0x0005111c) cale_month_corner_pane

0x6f4c,	// (0x00051132) cale_month_day_heading_pane_ParamLimits

0x6f4c,	// (0x00051132) cale_month_day_heading_pane

0x6f7f,	// (0x00051165) cale_month_pane_g1_ParamLimits

0x6f7f,	// (0x00051165) cale_month_pane_g1

0x6f9b,	// (0x00051181) cale_month_pane_g2_ParamLimits

0x6f9b,	// (0x00051181) cale_month_pane_g2

0x6fb6,	// (0x0005119c) cale_month_pane_g3_ParamLimits

0x6fb6,	// (0x0005119c) cale_month_pane_g3

0x6fe2,	// (0x000511c8) cale_month_pane_g4_ParamLimits

0x6fe2,	// (0x000511c8) cale_month_pane_g4

0x700e,	// (0x000511f4) cale_month_pane_g5_ParamLimits

0x700e,	// (0x000511f4) cale_month_pane_g5

0x703a,	// (0x00051220) cale_month_pane_g6_ParamLimits

0x703a,	// (0x00051220) cale_month_pane_g6

0x7076,	// (0x0005125c) cale_month_pane_g7_ParamLimits

0x7076,	// (0x0005125c) cale_month_pane_g7

0x70b2,	// (0x00051298) cale_month_pane_g8_ParamLimits

0x70b2,	// (0x00051298) cale_month_pane_g8

0x70ee,	// (0x000512d4) cale_month_pane_g9_ParamLimits

0x70ee,	// (0x000512d4) cale_month_pane_g9

0x7128,	// (0x0005130e) cale_month_pane_g10_ParamLimits

0x7128,	// (0x0005130e) cale_month_pane_g10

0x7162,	// (0x00051348) cale_month_pane_g11_ParamLimits

0x7162,	// (0x00051348) cale_month_pane_g11

0x719c,	// (0x00051382) cale_month_pane_g12_ParamLimits

0x719c,	// (0x00051382) cale_month_pane_g12

0x71d6,	// (0x000513bc) cale_month_pane_g13_ParamLimits

0x71d6,	// (0x000513bc) cale_month_pane_g13

0x000c,

0xf2be,	// (0x000594a4) cale_month_pane_g_ParamLimits

0xf2be,	// (0x000594a4) cale_month_pane_g

0x7210,	// (0x000513f6) cale_month_week_pane

0x7223,	// (0x00051409) grid_cale_month_pane_ParamLimits

0x7223,	// (0x00051409) grid_cale_month_pane

0x7251,	// (0x00051437) cale_month_day_heading_pane_t1

0x72af,	// (0x00051495) cale_month_day_heading_pane_t2

0x7314,	// (0x000514fa) cale_month_day_heading_pane_t3

0x7379,	// (0x0005155f) cale_month_day_heading_pane_t4

0x73de,	// (0x000515c4) cale_month_day_heading_pane_t5

0x744b,	// (0x00051631) cale_month_day_heading_pane_t6

0x74c0,	// (0x000516a6) cale_month_day_heading_pane_t7

0x0006,

0xf2d9,	// (0x000594bf) cale_month_day_heading_pane_t

0x3b72,	// (0x0004dd58) bg_cale_side_pane_cp01

0x7535,	// (0x0005171b) cale_month_week_pane_t1

0x7560,	// (0x00051746) cale_month_week_pane_t2

0x758b,	// (0x00051771) cale_month_week_pane_t3

0x75b6,	// (0x0005179c) cale_month_week_pane_t4

0x75e1,	// (0x000517c7) cale_month_week_pane_t5

0x760c,	// (0x000517f2) cale_month_week_pane_t6

0x0005,

0xf2e8,	// (0x000594ce) cale_month_week_pane_t

0x7637,	// (0x0005181d) cell_cale_month_pane_ParamLimits

0x7637,	// (0x0005181d) cell_cale_month_pane

0x7705,	// (0x000518eb) cell_cale_month_pane_g1

0x7711,	// (0x000518f7) cell_cale_month_pane_t1_ParamLimits

0x7711,	// (0x000518f7) cell_cale_month_pane_t1

0x3b80,	// (0x0004dd66) grid_highlight_pane_cp08

0x3a75,	// (0x0004dc5b) main_smil_g1

0x772d,	// (0x00051913) smil_status_pane

0x3f13,	// (0x0004e0f9) smil_text_pane

0xe5ab,	// (0x00058791) bg_popup_call3_rect_pane_g8

0xe5b3,	// (0x00058799) bg_popup_call3_rect_pane_g9

0x0008,

0xf5a1,	// (0x00059787) bg_popup_call3_rect_pane_g

0xe848,	// (0x00058a2e) smil_status_volume_pane_g1

0x3f1d,	// (0x0004e103) smil_status_pane_t1

0x8cf8,	// (0x00052ede) volume_smil_pane

0x3f34,	// (0x0004e11a) list_smil_text_pane

0x7740,	// (0x00051926) scroll_pane_cp011

0x774b,	// (0x00051931) smil_text_list_pane_t1_ParamLimits

0x774b,	// (0x00051931) smil_text_list_pane_t1

0x77af,	// (0x00051995) aid_volume_smil_ParamLimits

0x77af,	// (0x00051995) aid_volume_smil

0x3a75,	// (0x0004dc5b) smil_volume_pane_g1

0x3a75,	// (0x0004dc5b) smil_volume_pane_g2

0x0001,

0xf308,	// (0x000594ee) smil_volume_pane_g

0x3a20,	// (0x0004dc06) listscroll_cale_day_pane

0x3f3e,	// (0x0004e124) bg_cale_pane

0x3f56,	// (0x0004e13c) list_cale_pane

0x3f67,	// (0x0004e14d) scroll_pane_cp09

0x3f78,	// (0x0004e15e) cale_bg_pane_g1

0x3f80,	// (0x0004e166) cale_bg_pane_g2

0x3f88,	// (0x0004e16e) cale_bg_pane_g3

0x3f90,	// (0x0004e176) cale_bg_pane_g4

0x3f98,	// (0x0004e17e) cale_bg_pane_g5

0x3fa0,	// (0x0004e186) cale_bg_pane_g6

0x3fa8,	// (0x0004e18e) cale_bg_pane_g7

0x3fb0,	// (0x0004e196) cale_bg_pane_g8

0x3fb8,	// (0x0004e19e) cale_bg_pane_g9

0x0008,

0xf30d,	// (0x000594f3) cale_bg_pane_g

0x77d1,	// (0x000519b7) list_cale_time_pane_ParamLimits

0x77d1,	// (0x000519b7) list_cale_time_pane

0x77e9,	// (0x000519cf) list_cale_time_pane_g1_ParamLimits

0x77e9,	// (0x000519cf) list_cale_time_pane_g1

0x3fc0,	// (0x0004e1a6) list_cale_time_pane_g2_ParamLimits

0x3fc0,	// (0x0004e1a6) list_cale_time_pane_g2

0x77f5,	// (0x000519db) list_cale_time_pane_g3_ParamLimits

0x77f5,	// (0x000519db) list_cale_time_pane_g3

0x7803,	// (0x000519e9) list_cale_time_pane_g4_ParamLimits

0x7803,	// (0x000519e9) list_cale_time_pane_g4

0x7811,	// (0x000519f7) list_cale_time_pane_g5_ParamLimits

0x7811,	// (0x000519f7) list_cale_time_pane_g5

0x0005,

0xf320,	// (0x00059506) list_cale_time_pane_g_ParamLimits

0xf320,	// (0x00059506) list_cale_time_pane_g

0x781f,	// (0x00051a05) list_cale_time_pane_t1_ParamLimits

0x781f,	// (0x00051a05) list_cale_time_pane_t1

0x7847,	// (0x00051a2d) list_cale_time_pane_t2_ParamLimits

0x7847,	// (0x00051a2d) list_cale_time_pane_t2

0x7bb6,	// (0x00051d9c) aid_blid_cardinal_pane

0x7bf8,	// (0x00051dde) compass_pane_t4

0x786f,	// (0x00051a55) list_cale_time_pane_t4_ParamLimits

0x786f,	// (0x00051a55) list_cale_time_pane_t4

0x7c06,	// (0x00051dec) compass_pane_t5

0x7c16,	// (0x00051dfc) compass_pane_t6

0x7c24,	// (0x00051e0a) compass_pane_t7

0x43ce,	// (0x0004e5b4) navi_pane_cc_t1

0x4523,	// (0x0004e709) aid_phob_thumbnail_center_pane

0x840d,	// (0x000525f3) main_postcard_pane_g4_ParamLimits

0x0002,

0xf32d,	// (0x00059513) list_cale_time_pane_t_ParamLimits

0xf32d,	// (0x00059513) list_cale_time_pane_t

0x3351,	// (0x0004d537) bg_popup_window_pane_cp02_ParamLimits

0x3351,	// (0x0004d537) bg_popup_window_pane_cp02

0x3fda,	// (0x0004e1c0) heading_pane_cp01_ParamLimits

0x3fda,	// (0x0004e1c0) heading_pane_cp01

0x3fe6,	// (0x0004e1cc) loc_req_pane_ParamLimits

0x3fe6,	// (0x0004e1cc) loc_req_pane

0x3ff6,	// (0x0004e1dc) loc_type_pane_ParamLimits

0x3ff6,	// (0x0004e1dc) loc_type_pane

0x4008,	// (0x0004e1ee) loc_type_pane_t1_ParamLimits

0x4008,	// (0x0004e1ee) loc_type_pane_t1

0x401a,	// (0x0004e200) loc_type_pane_t2_ParamLimits

0x401a,	// (0x0004e200) loc_type_pane_t2

0x402c,	// (0x0004e212) loc_type_pane_t3_ParamLimits

0x402c,	// (0x0004e212) loc_type_pane_t3

0x0002,

0xf334,	// (0x0005951a) loc_type_pane_t_ParamLimits

0xf334,	// (0x0005951a) loc_type_pane_t

0x403e,	// (0x0004e224) list_loc_req_pane

0x4048,	// (0x0004e22e) scroll_pane_cp012

0x7897,	// (0x00051a7d) list_single_loc_request_popup_menu_pane_ParamLimits

0x7897,	// (0x00051a7d) list_single_loc_request_popup_menu_pane

0x4053,	// (0x0004e239) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x4053,	// (0x0004e239) list_single_loc_request_popup_menu_pane_g1

0x405f,	// (0x0004e245) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x405f,	// (0x0004e245) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf33b,	// (0x00059521) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf33b,	// (0x00059521) list_single_loc_request_popup_menu_pane_g

0x406b,	// (0x0004e251) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x406b,	// (0x0004e251) list_single_loc_request_popup_menu_pane_t1

0x78a9,	// (0x00051a8f) bg_popup_window_pane_cp03_ParamLimits

0x78a9,	// (0x00051a8f) bg_popup_window_pane_cp03

0x78b7,	// (0x00051a9d) heading_loc_req_pane_ParamLimits

0x78b7,	// (0x00051a9d) heading_loc_req_pane

0x78c3,	// (0x00051aa9) popup_dyc_status_message_window_g1_ParamLimits

0x78c3,	// (0x00051aa9) popup_dyc_status_message_window_g1

0x78cf,	// (0x00051ab5) popup_dyc_status_message_window_t1_ParamLimits

0x78cf,	// (0x00051ab5) popup_dyc_status_message_window_t1

0x78e1,	// (0x00051ac7) popup_dyc_status_message_window_t2_ParamLimits

0x78e1,	// (0x00051ac7) popup_dyc_status_message_window_t2

0x78f3,	// (0x00051ad9) popup_dyc_status_message_window_t3_ParamLimits

0x78f3,	// (0x00051ad9) popup_dyc_status_message_window_t3

0x0002,

0xf340,	// (0x00059526) popup_dyc_status_message_window_t_ParamLimits

0xf340,	// (0x00059526) popup_dyc_status_message_window_t

0x36fa,	// (0x0004d8e0) bg_heading_pane_cp01

0x4081,	// (0x0004e267) heading_loc_req_pane_g1

0x4089,	// (0x0004e26f) heading_loc_req_pane_g2

0x4091,	// (0x0004e277) heading_loc_req_pane_g3

0x0002,

0xf347,	// (0x0005952d) heading_loc_req_pane_g

0x4099,	// (0x0004e27f) heading_loc_req_pane_t1

0x40a9,	// (0x0004e28f) bg_popup_sub_pane_cp01_ParamLimits

0x40a9,	// (0x0004e28f) bg_popup_sub_pane_cp01

0x40b7,	// (0x0004e29d) popup_cale_events_window_g1_ParamLimits

0x40b7,	// (0x0004e29d) popup_cale_events_window_g1

0x40d7,	// (0x0004e2bd) popup_cale_events_window_g2_ParamLimits

0x40d7,	// (0x0004e2bd) popup_cale_events_window_g2

0x0001,

0xf37b,	// (0x00059561) popup_cale_events_window_g_ParamLimits

0xf37b,	// (0x00059561) popup_cale_events_window_g

0x40f7,	// (0x0004e2dd) popup_cale_events_window_t1_ParamLimits

0x40f7,	// (0x0004e2dd) popup_cale_events_window_t1

0x4109,	// (0x0004e2ef) popup_cale_events_window_t2_ParamLimits

0x4109,	// (0x0004e2ef) popup_cale_events_window_t2

0x4147,	// (0x0004e32d) popup_cale_events_window_t3_ParamLimits

0x4147,	// (0x0004e32d) popup_cale_events_window_t3

0x4181,	// (0x0004e367) popup_cale_events_window_t4_ParamLimits

0x4181,	// (0x0004e367) popup_cale_events_window_t4

0x0003,

0xf380,	// (0x00059566) popup_cale_events_window_t_ParamLimits

0xf380,	// (0x00059566) popup_cale_events_window_t

0x7977,	// (0x00051b5d) call_type_pane

0x424a,	// (0x0004e430) popup_call_status_window_g1

0x7983,	// (0x00051b69) popup_call_status_window_g2

0x798f,	// (0x00051b75) popup_call_status_window_g3

0x0002,

0xf389,	// (0x0005956f) popup_call_status_window_g

0x41b7,	// (0x0004e39d) call_type_pane_g1

0x41c0,	// (0x0004e3a6) call_type_pane_g2

0x0001,

0xf390,	// (0x00059576) call_type_pane_g

0x36fa,	// (0x0004d8e0) bg_popup_sub_pane_cp02

0x41c9,	// (0x0004e3af) listscroll_popup_wml_pane

0x41d1,	// (0x0004e3b7) list_wml_pane

0x41db,	// (0x0004e3c1) scroll_pane_cp013

0x41e6,	// (0x0004e3cc) list_single_graphic_popup_wml_pane_ParamLimits

0x41e6,	// (0x0004e3cc) list_single_graphic_popup_wml_pane

0x3a75,	// (0x0004dc5b) list_single_graphic_popup_wml_pane_g1

0x41fa,	// (0x0004e3e0) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf395,	// (0x0005957b) list_single_graphic_popup_wml_pane_g

0x4202,	// (0x0004e3e8) list_single_graphic_popup_wml_pane_t1

0x4210,	// (0x0004e3f6) aid_call_pane

0x394d,	// (0x0004db33) popup_clock_analogue_window_g1

0x394d,	// (0x0004db33) popup_clock_analogue_window_g2

0x799b,	// (0x00051b81) popup_clock_analogue_window_g3

0x799b,	// (0x00051b81) popup_clock_analogue_window_g4

0x3a75,	// (0x0004dc5b) popup_clock_analogue_window_g5

0x0004,

0xf39a,	// (0x00059580) popup_clock_analogue_window_g

0x79a3,	// (0x00051b89) popup_clock_analogue_window_t1

0x79b1,	// (0x00051b97) clock_digital_number_pane_ParamLimits

0x79b1,	// (0x00051b97) clock_digital_number_pane

0x79bd,	// (0x00051ba3) clock_digital_number_pane_cp02_ParamLimits

0x79bd,	// (0x00051ba3) clock_digital_number_pane_cp02

0x79c9,	// (0x00051baf) clock_digital_number_pane_cp03_ParamLimits

0x79c9,	// (0x00051baf) clock_digital_number_pane_cp03

0x79d5,	// (0x00051bbb) clock_digital_number_pane_cp04_ParamLimits

0x79d5,	// (0x00051bbb) clock_digital_number_pane_cp04

0x79e1,	// (0x00051bc7) clock_digital_separator_pane_ParamLimits

0x79e1,	// (0x00051bc7) clock_digital_separator_pane

0x79ed,	// (0x00051bd3) popup_clock_digital_window_t1

0x3a75,	// (0x0004dc5b) clock_digital_number_pane_g1

0x3a75,	// (0x0004dc5b) clock_digital_number_pane_g2

0x0001,

0xf308,	// (0x000594ee) clock_digital_number_pane_g

0x3a75,	// (0x0004dc5b) clock_digital_separator_pane_g1

0x3a75,	// (0x0004dc5b) clock_digital_separator_pane_g2

0x0001,

0xf308,	// (0x000594ee) clock_digital_separator_pane_g

0x36fa,	// (0x0004d8e0) bg_popup_window_pane_cp04

0x4220,	// (0x0004e406) heading_pane_cp03

0x4228,	// (0x0004e40e) listscroll_popup_gms_pane

0x4230,	// (0x0004e416) grid_large_graphic_popup_pane

0x423a,	// (0x0004e420) listscroll_popup_gms_pane_g1

0x4242,	// (0x0004e428) listscroll_popup_gms_pane_g2

0x0001,

0xf3a5,	// (0x0005958b) listscroll_popup_gms_pane_g

0x3d82,	// (0x0004df68) scroll_pane_cp014

0x7a0a,	// (0x00051bf0) cell_large_graphic_popup_pane_ParamLimits

0x7a0a,	// (0x00051bf0) cell_large_graphic_popup_pane

0x7a24,	// (0x00051c0a) cell_large_graphic_popup_pane_g1_ParamLimits

0x7a24,	// (0x00051c0a) cell_large_graphic_popup_pane_g1

0x4258,	// (0x0004e43e) cell_large_graphic_popup_pane_g2_ParamLimits

0x4258,	// (0x0004e43e) cell_large_graphic_popup_pane_g2

0x4264,	// (0x0004e44a) cell_large_graphic_popup_pane_g3_ParamLimits

0x4264,	// (0x0004e44a) cell_large_graphic_popup_pane_g3

0x4271,	// (0x0004e457) cell_large_graphic_popup_pane_g4_ParamLimits

0x4271,	// (0x0004e457) cell_large_graphic_popup_pane_g4

0x0003,

0xf3aa,	// (0x00059590) cell_large_graphic_popup_pane_g_ParamLimits

0xf3aa,	// (0x00059590) cell_large_graphic_popup_pane_g

0x4281,	// (0x0004e467) grid_highlight_pane_cp010

0x3a75,	// (0x0004dc5b) bg_popup_call_pane_g1

0x428b,	// (0x0004e471) list_single_graphic_popup_conf_pane_ParamLimits

0x428b,	// (0x0004e471) list_single_graphic_popup_conf_pane

0x429d,	// (0x0004e483) list_highlight_pane_cp01

0x42a6,	// (0x0004e48c) list_single_graphic_popup_conf_pane_g1

0x42ae,	// (0x0004e494) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3b3,	// (0x00059599) list_single_graphic_popup_conf_pane_g

0x42b6,	// (0x0004e49c) list_single_graphic_popup_conf_pane_t1

0x42c4,	// (0x0004e4aa) linegrid_cams_pane_g1

0x7a30,	// (0x00051c16) linegrid_cams_pane_g2

0x3bb3,	// (0x0004dd99) linegrid_cams_pane_g3

0x42cd,	// (0x0004e4b3) linegrid_cams_pane_g4

0x7a39,	// (0x00051c1f) linegrid_cams_pane_g5

0x7a42,	// (0x00051c28) linegrid_cams_pane_g6

0x3bbc,	// (0x0004dda2) linegrid_cams_pane_g7

0x0006,

0xf3b8,	// (0x0005959e) linegrid_cams_pane_g

0x42d6,	// (0x0004e4bc) popup_clock_analogue_window

0x42d6,	// (0x0004e4bc) popup_clock_digital_window

0x36fa,	// (0x0004d8e0) popup_phob_thumbnail_window

0x3a75,	// (0x0004dc5b) call_video_uplink_pane_g1

0x42df,	// (0x0004e4c5) call_video_uplink_pane_g2

0x0001,

0xf3c7,	// (0x000595ad) call_video_uplink_pane_g

0x42e7,	// (0x0004e4cd) video_uplink_pane

0x42ef,	// (0x0004e4d5) mce_image_pane_g1

0x7a4d,	// (0x00051c33) mce_image_pane_g2

0x7a57,	// (0x00051c3d) mce_image_pane_g3

0x7a61,	// (0x00051c47) mce_image_pane_g4

0x7a69,	// (0x00051c4f) mce_image_pane_g5

0x0004,

0xf3cc,	// (0x000595b2) mce_image_pane_g

0x42f9,	// (0x0004e4df) control_top_pane_stacon_cp01_ParamLimits

0x42f9,	// (0x0004e4df) control_top_pane_stacon_cp01

0x430d,	// (0x0004e4f3) uni_indicator_pane_stacon_cp01_ParamLimits

0x430d,	// (0x0004e4f3) uni_indicator_pane_stacon_cp01

0x431e,	// (0x0004e504) bg_popup_sub_pane_cp03

0x7a71,	// (0x00051c57) chi_dic_find_pane

0x7a79,	// (0x00051c5f) listscroll_chi_dic_pane

0x7a82,	// (0x00051c68) main_pane_chidic_g1

0x7a95,	// (0x00051c7b) chi_dic_find_pane_t1

0x4328,	// (0x0004e50e) find_chidic_pane

0x4331,	// (0x0004e517) chi_dic_list_pane_ParamLimits

0x4331,	// (0x0004e517) chi_dic_list_pane

0x4342,	// (0x0004e528) scroll_pane_cp020

0x7aa3,	// (0x00051c89) find_chidic_pane_t1

0x36fa,	// (0x0004d8e0) input_focus_pane_cp06

0x7ab2,	// (0x00051c98) list_chi_dic_pane_ParamLimits

0x7ab2,	// (0x00051c98) list_chi_dic_pane

0x7aca,	// (0x00051cb0) list_chi_dic_pane_t1_ParamLimits

0x7aca,	// (0x00051cb0) list_chi_dic_pane_t1

0x36fa,	// (0x0004d8e0) list_highlight_pane_cp020

0x434a,	// (0x0004e530) bg_cale_heading_pane_g1

0x7add,	// (0x00051cc3) bg_cale_heading_pane_g2

0x7ae5,	// (0x00051ccb) bg_cale_heading_pane_g3

0x7aed,	// (0x00051cd3) bg_cale_heading_pane_g4

0x7af7,	// (0x00051cdd) bg_cale_heading_pane_g5

0x7b01,	// (0x00051ce7) bg_cale_heading_pane_g6

0x7b09,	// (0x00051cef) bg_cale_heading_pane_g7

0x7b11,	// (0x00051cf7) bg_cale_heading_pane_g8

0x7b1b,	// (0x00051d01) bg_cale_heading_pane_g9

0x0008,

0xf3d7,	// (0x000595bd) bg_cale_heading_pane_g

0x434a,	// (0x0004e530) bg_cale_side_pane_g1

0x7b25,	// (0x00051d0b) bg_cale_side_pane_g2

0x7b2d,	// (0x00051d13) bg_cale_side_pane_g3

0x7b35,	// (0x00051d1b) bg_cale_side_pane_g4

0x7b3d,	// (0x00051d23) bg_cale_side_pane_g5

0x7b45,	// (0x00051d2b) bg_cale_side_pane_g6

0x7b4d,	// (0x00051d33) bg_cale_side_pane_g7

0x7b55,	// (0x00051d3b) bg_cale_side_pane_g8

0x7b5d,	// (0x00051d43) bg_cale_side_pane_g9

0x0008,

0xf3ea,	// (0x000595d0) bg_cale_side_pane_g

0x7b65,	// (0x00051d4b) popup_call_status_window_ParamLimits

0x7b65,	// (0x00051d4b) popup_call_status_window

0x4352,	// (0x0004e538) stacon_top_pane

0x435a,	// (0x0004e540) status_pane_ParamLimits

0x435a,	// (0x0004e540) status_pane

0x436f,	// (0x0004e555) status_small_pane

0x4377,	// (0x0004e55d) control_pane

0x36fa,	// (0x0004d8e0) stacon_bottom_pane

0x437f,	// (0x0004e565) list_single_mce_smart_pane_t1_ParamLimits

0x437f,	// (0x0004e565) list_single_mce_smart_pane_t1

0x4392,	// (0x0004e578) list_single_mce_smart_pane_t2_ParamLimits

0x4392,	// (0x0004e578) list_single_mce_smart_pane_t2

0x0001,

0xf3fd,	// (0x000595e3) list_single_mce_smart_pane_t_ParamLimits

0xf3fd,	// (0x000595e3) list_single_mce_smart_pane_t

0x7b71,	// (0x00051d57) compass_pane

0x7b7c,	// (0x00051d62) main_location2_pane_t1

0x7b90,	// (0x00051d76) main_location2_pane_t2

0x7b90,	// (0x00051d76) main_location2_pane_t3

0x0003,

0xf402,	// (0x000595e8) main_location2_pane_t

0x43b1,	// (0x0004e597) compass_pane_g1_ParamLimits

0x43b1,	// (0x0004e597) compass_pane_g1

0x7bda,	// (0x00051dc0) compass_pane_t1

0x7be9,	// (0x00051dcf) compass_pane_t2

0x0005,

0xf40b,	// (0x000595f1) compass_pane_t

0x7c34,	// (0x00051e1a) text_secondary_cp61

0x43c5,	// (0x0004e5ab) navi_pane_cams_g5

0x43e8,	// (0x0004e5ce) navi_pane_im_t1

0x43f6,	// (0x0004e5dc) navi_pane_mp_g1_ParamLimits

0x43f6,	// (0x0004e5dc) navi_pane_mp_g1

0x440a,	// (0x0004e5f0) navi_pane_mp_g2_ParamLimits

0x440a,	// (0x0004e5f0) navi_pane_mp_g2

0x4416,	// (0x0004e5fc) navi_pane_mp_g3_ParamLimits

0x4416,	// (0x0004e5fc) navi_pane_mp_g3

0x0002,

0xf41f,	// (0x00059605) navi_pane_mp_g_ParamLimits

0xf41f,	// (0x00059605) navi_pane_mp_g

0x4422,	// (0x0004e608) navi_pane_mp_t1

0x4430,	// (0x0004e616) navi_pane_mp_t2

0x0002,

0xf426,	// (0x0005960c) navi_pane_mp_t

0x446c,	// (0x0004e652) navi_pane_vt_g1

0x4422,	// (0x0004e608) navi_pane_vt_t1

0x4474,	// (0x0004e65a) navi_slider_pane

0x447c,	// (0x0004e662) zooming_pane

0x4484,	// (0x0004e66a) navi_slider_pane_g1

0x7d4b,	// (0x00051f31) navi_slider_pane_g2

0x0006,

0xf42d,	// (0x00059613) navi_slider_pane_g

0x44a8,	// (0x0004e68e) aid_levels_zoom

0x44b0,	// (0x0004e696) zooming_pane_g1

0x44b8,	// (0x0004e69e) zooming_pane_g2

0x44b8,	// (0x0004e69e) zooming_pane_g3

0x0002,

0xf43c,	// (0x00059622) zooming_pane_g

0x44c0,	// (0x0004e6a6) level_10_zoom

0x44c9,	// (0x0004e6af) level_11_zoom

0x44d2,	// (0x0004e6b8) level_1_zoom

0x44db,	// (0x0004e6c1) level_2_zoom

0x44e4,	// (0x0004e6ca) level_3_zoom

0x44ed,	// (0x0004e6d3) level_4_zoom

0x44f6,	// (0x0004e6dc) level_5_zoom

0x44ff,	// (0x0004e6e5) level_6_zoom

0x4508,	// (0x0004e6ee) level_7_zoom

0x4511,	// (0x0004e6f7) level_8_zoom

0x451a,	// (0x0004e700) level_9_zoom

0x452b,	// (0x0004e711) popup_phob_thumbnail_window_g1

0x4533,	// (0x0004e719) popup_phob_thumbnail_window_g2

0x0001,

0xf443,	// (0x00059629) popup_phob_thumbnail_window_g

0xe711,	// (0x000588f7) level_1_location

0xe719,	// (0x000588ff) level_2_location

0xe721,	// (0x00058907) level_3_location

0xe729,	// (0x0005890f) level_4_location

0x447c,	// (0x0004e662) level_5_location

0x7d5d,	// (0x00051f43) mce_icon_pane_g1

0x7d65,	// (0x00051f4b) mce_icon_pane_g2

0x0001,

0xf448,	// (0x0005962e) mce_icon_pane_g

0x7d6d,	// (0x00051f53) main_mup_pane_g1_ParamLimits

0x7d6d,	// (0x00051f53) main_mup_pane_g1

0x7d85,	// (0x00051f6b) main_mup_pane_g2_ParamLimits

0x7d85,	// (0x00051f6b) main_mup_pane_g2

0x7da1,	// (0x00051f87) main_mup_pane_g3_ParamLimits

0x7da1,	// (0x00051f87) main_mup_pane_g3

0x7dbd,	// (0x00051fa3) main_mup_pane_g4_ParamLimits

0x7dbd,	// (0x00051fa3) main_mup_pane_g4

0x7dd1,	// (0x00051fb7) main_mup_pane_g5_ParamLimits

0x7dd1,	// (0x00051fb7) main_mup_pane_g5

0x7df2,	// (0x00051fd8) main_mup_pane_g6_ParamLimits

0x7df2,	// (0x00051fd8) main_mup_pane_g6

0x7e12,	// (0x00051ff8) main_mup_pane_g7_ParamLimits

0x7e12,	// (0x00051ff8) main_mup_pane_g7

0x7e36,	// (0x0005201c) main_mup_pane_g8_ParamLimits

0x7e36,	// (0x0005201c) main_mup_pane_g8

0x7e5a,	// (0x00052040) main_mup_pane_g9_ParamLimits

0x7e5a,	// (0x00052040) main_mup_pane_g9

0x7e7d,	// (0x00052063) main_mup_pane_g10_ParamLimits

0x7e7d,	// (0x00052063) main_mup_pane_g10

0x7ea0,	// (0x00052086) main_mup_pane_g11_ParamLimits

0x7ea0,	// (0x00052086) main_mup_pane_g11

0x7ec0,	// (0x000520a6) main_mup_pane_g12_ParamLimits

0x7ec0,	// (0x000520a6) main_mup_pane_g12

0x7ece,	// (0x000520b4) main_mup_pane_g13_ParamLimits

0x7ece,	// (0x000520b4) main_mup_pane_g13

0x000c,

0xf44d,	// (0x00059633) main_mup_pane_g_ParamLimits

0xf44d,	// (0x00059633) main_mup_pane_g

0x7ee4,	// (0x000520ca) main_mup_pane_t1_ParamLimits

0x7ee4,	// (0x000520ca) main_mup_pane_t1

0x7f03,	// (0x000520e9) main_mup_pane_t2_ParamLimits

0x7f03,	// (0x000520e9) main_mup_pane_t2

0x7f1d,	// (0x00052103) main_mup_pane_t3_ParamLimits

0x7f1d,	// (0x00052103) main_mup_pane_t3

0x7f37,	// (0x0005211d) main_mup_pane_t4_ParamLimits

0x7f37,	// (0x0005211d) main_mup_pane_t4

0x7f49,	// (0x0005212f) main_mup_pane_t5_ParamLimits

0x7f49,	// (0x0005212f) main_mup_pane_t5

0x7f5b,	// (0x00052141) main_mup_pane_t6_ParamLimits

0x7f5b,	// (0x00052141) main_mup_pane_t6

0x0005,

0xf468,	// (0x0005964e) main_mup_pane_t_ParamLimits

0xf468,	// (0x0005964e) main_mup_pane_t

0x7f71,	// (0x00052157) mup_progress_pane_ParamLimits

0x7f71,	// (0x00052157) mup_progress_pane

0x7f7d,	// (0x00052163) mup_visualizer_pane_ParamLimits

0x7f7d,	// (0x00052163) mup_visualizer_pane

0x7fbb,	// (0x000521a1) mup_volume_pane_ParamLimits

0x7fbb,	// (0x000521a1) mup_volume_pane

0x424a,	// (0x0004e430) mup_visualizer_pane_g1_ParamLimits

0x424a,	// (0x0004e430) mup_visualizer_pane_g1

0x424a,	// (0x0004e430) mup_visualizer_pane_g2_ParamLimits

0x424a,	// (0x0004e430) mup_visualizer_pane_g2

0x43b1,	// (0x0004e597) mup_visualizer_pane_g3_ParamLimits

0x43b1,	// (0x0004e597) mup_visualizer_pane_g3

0x0002,

0xf475,	// (0x0005965b) mup_visualizer_pane_g_ParamLimits

0xf475,	// (0x0005965b) mup_visualizer_pane_g

0x3a75,	// (0x0004dc5b) mup_volume_pane_g1

0x4543,	// (0x0004e729) mup_volume_pane_g2

0x0001,

0xf47c,	// (0x00059662) mup_volume_pane_g

0x3a75,	// (0x0004dc5b) mup_progress_pane_g1

0x454c,	// (0x0004e732) mup_progress_pane_g2

0x4555,	// (0x0004e73b) mup_progress_pane_g3

0x0002,

0xf481,	// (0x00059667) mup_progress_pane_g

0x36fa,	// (0x0004d8e0) bg_popup_window_pane_cp05

0x455e,	// (0x0004e744) heading_pane_cp02_ParamLimits

0x455e,	// (0x0004e744) heading_pane_cp02

0x457a,	// (0x0004e760) list_popup_blid_pane

0x4582,	// (0x0004e768) list_blid_sat_info_pane_ParamLimits

0x4582,	// (0x0004e768) list_blid_sat_info_pane

0x4595,	// (0x0004e77b) list_blid_sat_info_pane_g1

0x459d,	// (0x0004e783) list_blid_sat_info_pane_t1

0x80da,	// (0x000522c0) mup_equalizer_pane_ParamLimits

0x80da,	// (0x000522c0) mup_equalizer_pane

0x80fb,	// (0x000522e1) mup_equalizer_pane_cp1_ParamLimits

0x80fb,	// (0x000522e1) mup_equalizer_pane_cp1

0x811c,	// (0x00052302) mup_equalizer_pane_cp2_ParamLimits

0x811c,	// (0x00052302) mup_equalizer_pane_cp2

0x813d,	// (0x00052323) mup_equalizer_pane_cp3_ParamLimits

0x813d,	// (0x00052323) mup_equalizer_pane_cp3

0x8162,	// (0x00052348) mup_equalizer_pane_cp4_ParamLimits

0x8162,	// (0x00052348) mup_equalizer_pane_cp4

0x8187,	// (0x0005236d) mup_equalizer_pane_cp5

0x819f,	// (0x00052385) mup_equalizer_pane_cp6

0x81b7,	// (0x0005239d) mup_equalizer_pane_cp7

0xe62b,	// (0x00058811) bg_popup_call_poc_act_pane_g9

0xe633,	// (0x00058819) bg_popup_call_poc_act_pane_g10

0xe63b,	// (0x00058821) bg_popup_call_poc_act_pane_g11

0x000a,

0x3955,	// (0x0004db3b) mup_scale_pane

0x3a75,	// (0x0004dc5b) mup_scale_pane_g1

0x45ab,	// (0x0004e791) mup_scale_pane_g2

0x0006,

0xf49d,	// (0x00059683) mup_scale_pane_g

0x45cf,	// (0x0004e7b5) msg_data_pane

0x45d7,	// (0x0004e7bd) scroll_pane_cp017

0x81e1,	// (0x000523c7) bg_list_pane_cp04_ParamLimits

0x81e1,	// (0x000523c7) bg_list_pane_cp04

0x45df,	// (0x0004e7c5) msg_data_pane_g1

0x8207,	// (0x000523ed) msg_data_pane_g2

0x8211,	// (0x000523f7) msg_data_pane_g3

0x821b,	// (0x00052401) msg_data_pane_g4

0x8223,	// (0x00052409) msg_data_pane_g5

0x822b,	// (0x00052411) msg_data_pane_g6

0x8233,	// (0x00052419) msg_data_pane_g7

0x0006,

0xf4ac,	// (0x00059692) msg_data_pane_g

0x823b,	// (0x00052421) msg_text_pane_ParamLimits

0x823b,	// (0x00052421) msg_text_pane

0x826c,	// (0x00052452) qrid_highlight_pane_cp011_ParamLimits

0x826c,	// (0x00052452) qrid_highlight_pane_cp011

0x36fa,	// (0x0004d8e0) msg_body_pane

0x36fa,	// (0x0004d8e0) msg_header_pane

0x45f0,	// (0x0004e7d6) input_focus_pane_cp07

0x8290,	// (0x00052476) msg_header_pane_t1_ParamLimits

0x8290,	// (0x00052476) msg_header_pane_t1

0x82a4,	// (0x0005248a) msg_header_pane_t2_ParamLimits

0x82a4,	// (0x0005248a) msg_header_pane_t2

0x0001,

0xf4c0,	// (0x000596a6) msg_header_pane_t_ParamLimits

0xf4c0,	// (0x000596a6) msg_header_pane_t

0x4605,	// (0x0004e7eb) msg_body_pane_g1

0x82b6,	// (0x0005249c) msg_body_pane_t1_ParamLimits

0x82b6,	// (0x0005249c) msg_body_pane_t1

0x82e7,	// (0x000524cd) msg_body_pane_t2_ParamLimits

0x82e7,	// (0x000524cd) msg_body_pane_t2

0x82f9,	// (0x000524df) msg_body_pane_t3_ParamLimits

0x82f9,	// (0x000524df) msg_body_pane_t3

0x0002,

0xf4c5,	// (0x000596ab) msg_body_pane_t_ParamLimits

0xf4c5,	// (0x000596ab) msg_body_pane_t

0x835d,	// (0x00052543) main_viewer_pane_g1_ParamLimits

0x835d,	// (0x00052543) main_viewer_pane_g1

0x8369,	// (0x0005254f) main_viewer_pane_g2_ParamLimits

0x8369,	// (0x0005254f) main_viewer_pane_g2

0x8375,	// (0x0005255b) main_viewer_pane_g3_ParamLimits

0x8375,	// (0x0005255b) main_viewer_pane_g3

0x8386,	// (0x0005256c) main_viewer_pane_g4_ParamLimits

0x8386,	// (0x0005256c) main_viewer_pane_g4

0x8397,	// (0x0005257d) main_viewer_pane_g5_ParamLimits

0x8397,	// (0x0005257d) main_viewer_pane_g5

0x8397,	// (0x0005257d) main_viewer_pane_g7_ParamLimits

0x8397,	// (0x0005257d) main_viewer_pane_g7

0x83a9,	// (0x0005258f) main_viewer_pane_g8_ParamLimits

0x83a9,	// (0x0005258f) main_viewer_pane_g8

0x0007,

0xf4d5,	// (0x000596bb) main_viewer_pane_g_ParamLimits

0xf4d5,	// (0x000596bb) main_viewer_pane_g

0x460d,	// (0x0004e7f3) viewer_content_pane_ParamLimits

0x460d,	// (0x0004e7f3) viewer_content_pane

0x83e1,	// (0x000525c7) main_postcard_pane_g1_ParamLimits

0x83e1,	// (0x000525c7) main_postcard_pane_g1

0x83ef,	// (0x000525d5) main_postcard_pane_g2_ParamLimits

0x83ef,	// (0x000525d5) main_postcard_pane_g2

0x83fd,	// (0x000525e3) main_postcard_pane_g3_ParamLimits

0x83fd,	// (0x000525e3) main_postcard_pane_g3

0x0005,

0xf4e6,	// (0x000596cc) main_postcard_pane_g_ParamLimits

0xf4e6,	// (0x000596cc) main_postcard_pane_g

0x840d,	// (0x000525f3) main_postcard_pane_g4

0xe85b,	// (0x00058a41) smil_status_volume_pane_g2

0x8439,	// (0x0005261f) postcard_pane_ParamLimits

0x8439,	// (0x0005261f) postcard_pane

0x424a,	// (0x0004e430) postcard_pane_g1_ParamLimits

0x424a,	// (0x0004e430) postcard_pane_g1

0x8473,	// (0x00052659) postcard_pane_g2_ParamLimits

0x8473,	// (0x00052659) postcard_pane_g2

0x847f,	// (0x00052665) postcard_pane_g3_ParamLimits

0x847f,	// (0x00052665) postcard_pane_g3

0x4629,	// (0x0004e80f) postcard_pane_g4_ParamLimits

0x4629,	// (0x0004e80f) postcard_pane_g4

0x848b,	// (0x00052671) postcard_pane_g5_ParamLimits

0x848b,	// (0x00052671) postcard_pane_g5

0x8497,	// (0x0005267d) postcard_pane_g6_ParamLimits

0x8497,	// (0x0005267d) postcard_pane_g6

0x461b,	// (0x0004e801) postcard_pane_g7_ParamLimits

0x461b,	// (0x0004e801) postcard_pane_g7

0x0006,

0xf4f3,	// (0x000596d9) postcard_pane_g_ParamLimits

0xf4f3,	// (0x000596d9) postcard_pane_g

0x84a5,	// (0x0005268b) main_mp2_pane_g1_ParamLimits

0x84a5,	// (0x0005268b) main_mp2_pane_g1

0x84b3,	// (0x00052699) main_mp2_pane_g2_ParamLimits

0x84b3,	// (0x00052699) main_mp2_pane_g2

0x84bf,	// (0x000526a5) main_mp2_pane_g3_ParamLimits

0x84bf,	// (0x000526a5) main_mp2_pane_g3

0x0002,

0xf502,	// (0x000596e8) main_mp2_pane_g_ParamLimits

0xf502,	// (0x000596e8) main_mp2_pane_g

0x84cb,	// (0x000526b1) main_mp2_pane_t1_ParamLimits

0x84cb,	// (0x000526b1) main_mp2_pane_t1

0x84e2,	// (0x000526c8) main_mp2_pane_t2_ParamLimits

0x84e2,	// (0x000526c8) main_mp2_pane_t2

0x84f6,	// (0x000526dc) main_mp2_pane_t3_ParamLimits

0x84f6,	// (0x000526dc) main_mp2_pane_t3

0x0002,

0xf509,	// (0x000596ef) main_mp2_pane_t_ParamLimits

0xf509,	// (0x000596ef) main_mp2_pane_t

0x4637,	// (0x0004e81d) pec_content_pane_ParamLimits

0x4637,	// (0x0004e81d) pec_content_pane

0x3d82,	// (0x0004df68) scroll_pane_cp015

0x4649,	// (0x0004e82f) pec_attribute_pane_ParamLimits

0x4649,	// (0x0004e82f) pec_attribute_pane

0x8508,	// (0x000526ee) pec_content_pane_g1_ParamLimits

0x8508,	// (0x000526ee) pec_content_pane_g1

0x4659,	// (0x0004e83f) pec_content_pane_t1_ParamLimits

0x4659,	// (0x0004e83f) pec_content_pane_t1

0x466b,	// (0x0004e851) pec_content_pane_t2_ParamLimits

0x466b,	// (0x0004e851) pec_content_pane_t2

0x0001,

0xf510,	// (0x000596f6) pec_content_pane_t_ParamLimits

0xf510,	// (0x000596f6) pec_content_pane_t

0x8514,	// (0x000526fa) list_single_graphic_pane_cp01_ParamLimits

0x8514,	// (0x000526fa) list_single_graphic_pane_cp01

0x3955,	// (0x0004db3b) bg_popup_sub_pane_cp04

0x467d,	// (0x0004e863) popup_mup_playback_window_g1

0x4689,	// (0x0004e86f) popup_mup_playback_window_t1

0x469e,	// (0x0004e884) popup_mup_playback_window_t2

0x0001,

0xf515,	// (0x000596fb) popup_mup_playback_window_t

0x46d5,	// (0x0004e8bb) main_image_pane_g1_ParamLimits

0x46d5,	// (0x0004e8bb) main_image_pane_g1

0x4718,	// (0x0004e8fe) scroll_pane_cp018_ParamLimits

0x4718,	// (0x0004e8fe) scroll_pane_cp018

0x4730,	// (0x0004e916) scroll_pane_cp016_ParamLimits

0x4730,	// (0x0004e916) scroll_pane_cp016

0x85a5,	// (0x0005278b) smil2_image_pane_ParamLimits

0x85a5,	// (0x0005278b) smil2_image_pane

0x85db,	// (0x000527c1) smil2_root_pane_ParamLimits

0x85db,	// (0x000527c1) smil2_root_pane

0x8607,	// (0x000527ed) smil2_text_pane_ParamLimits

0x8607,	// (0x000527ed) smil2_text_pane

0x36fa,	// (0x0004d8e0) bg_list_pane_cp06

0x476c,	// (0x0004e952) grid_radio_pane

0x36fa,	// (0x0004d8e0) bg_popup_window_pane_cp06

0x4776,	// (0x0004e95c) main_fmradio_pane_t1

0x4220,	// (0x0004e406) heading_pane_cp04

0x4784,	// (0x0004e96a) main_fmradio_pane_t2

0xe643,	// (0x00058829) popup_cale_lunar_info_window_g1

0x4792,	// (0x0004e978) main_fmradio_pane_t3

0xe64b,	// (0x00058831) popup_cale_lunar_info_window_g2

0x47a2,	// (0x0004e988) main_fmradio_pane_t4

0x0001,

0x47b0,	// (0x0004e996) main_fmradio_pane_t5

0x0004,

0xf5f0,	// (0x000597d6) popup_cale_lunar_info_window_g

0xf52a,	// (0x00059710) main_fmradio_pane_t

0x47be,	// (0x0004e9a4) wait_bar_pane_cp03

0x47c6,	// (0x0004e9ac) cell_fmradio_pane_ParamLimits

0x47c6,	// (0x0004e9ac) cell_fmradio_pane

0x461b,	// (0x0004e801) cell_fmradio_pane_g1_ParamLimits

0x461b,	// (0x0004e801) cell_fmradio_pane_g1

0x36fa,	// (0x0004d8e0) grid_highlight_pane_cp011

0x47db,	// (0x0004e9c1) poc_content_pane_ParamLimits

0x47db,	// (0x0004e9c1) poc_content_pane

0x47ed,	// (0x0004e9d3) scroll_pane_cp019

0x8647,	// (0x0005282d) popup_call_poc_act_window_ParamLimits

0x8647,	// (0x0005282d) popup_call_poc_act_window

0x8654,	// (0x0005283a) popup_call_poc_inact_window_ParamLimits

0x8654,	// (0x0005283a) popup_call_poc_inact_window

0xf5c7,	// (0x000597ad) bg_popup_call_poc_act_pane_g

0xe5bb,	// (0x000587a1) bg_popup_call_poc_inact_pane_g1

0xe5c3,	// (0x000587a9) bg_popup_call_poc_inact_pane_g2

0x47f5,	// (0x0004e9db) popup_call_poc_act_window_g2

0xe5cb,	// (0x000587b1) bg_popup_call_poc_inact_pane_g3

0xe5d3,	// (0x000587b9) bg_popup_call_poc_inact_pane_g4

0xe5db,	// (0x000587c1) bg_popup_call_poc_inact_pane_g5

0x47fd,	// (0x0004e9e3) popup_call_poc_act_window_t1_ParamLimits

0x47fd,	// (0x0004e9e3) popup_call_poc_act_window_t1

0x4825,	// (0x0004ea0b) popup_call_poc_act_window_t2_ParamLimits

0x4825,	// (0x0004ea0b) popup_call_poc_act_window_t2

0x484d,	// (0x0004ea33) popup_call_poc_act_window_t3_ParamLimits

0x484d,	// (0x0004ea33) popup_call_poc_act_window_t3

0x4875,	// (0x0004ea5b) popup_call_poc_act_window_t4_ParamLimits

0x4875,	// (0x0004ea5b) popup_call_poc_act_window_t4

0x0003,

0xf535,	// (0x0005971b) popup_call_poc_act_window_t_ParamLimits

0xf535,	// (0x0005971b) popup_call_poc_act_window_t

0xe5e3,	// (0x000587c9) bg_popup_call_poc_inact_pane_g6

0xe5eb,	// (0x000587d1) bg_popup_call_poc_inact_pane_g7

0xe5f3,	// (0x000587d9) bg_popup_call_poc_inact_pane_g8

0x4887,	// (0x0004ea6d) popup_call_poc_inact_window_g2

0xe5fb,	// (0x000587e1) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5b4,	// (0x0005979a) bg_popup_call_poc_inact_pane_g

0x488f,	// (0x0004ea75) popup_call_poc_inact_window_t1_ParamLimits

0x488f,	// (0x0004ea75) popup_call_poc_inact_window_t1

0x48a4,	// (0x0004ea8a) popup_call_poc_inact_window_t2_ParamLimits

0x48a4,	// (0x0004ea8a) popup_call_poc_inact_window_t2

0x48b9,	// (0x0004ea9f) popup_call_poc_inact_window_t3_ParamLimits

0x48b9,	// (0x0004ea9f) popup_call_poc_inact_window_t3

0x0002,

0xf53e,	// (0x00059724) popup_call_poc_inact_window_t_ParamLimits

0xf53e,	// (0x00059724) popup_call_poc_inact_window_t

0xe7bb,	// (0x000589a1) context_pane_ParamLimits

0x8c66,	// (0x00052e4c) signal_pane_ParamLimits

0x447c,	// (0x0004e662) main_call2_pane

0xe7a9,	// (0x0005898f) popup_phob_thumbnail2_window_ParamLimits

0xe7a9,	// (0x0005898f) popup_phob_thumbnail2_window

0x830b,	// (0x000524f1) aid_hotspot_pointer_arrow_pane

0x8313,	// (0x000524f9) aid_hotspot_pointer_hand_pane

0x897c,	// (0x00052b62) phob_pre_status_pane_g5

0x677c,	// (0x00050962) cams_zoom_pane_ParamLimits

0x6788,	// (0x0005096e) image_vga_pane_ParamLimits

0x6797,	// (0x0005097d) main_camera_pane_g1_ParamLimits

0x67a5,	// (0x0005098b) main_camera_pane_g2_ParamLimits

0x67b1,	// (0x00050997) main_camera_pane_g3_ParamLimits

0x67bf,	// (0x000509a5) main_camera_pane_g4_ParamLimits

0x67cd,	// (0x000509b3) main_camera_pane_g5_ParamLimits

0x67db,	// (0x000509c1) main_camera_pane_g6_ParamLimits

0x67e9,	// (0x000509cf) main_camera_pane_g7_ParamLimits

0xf23d,	// (0x00059423) main_camera_pane_g_ParamLimits

0x67f7,	// (0x000509dd) main_camera_pane_t1_ParamLimits

0x6809,	// (0x000509ef) main_camera_pane_t2_ParamLimits

0xf24e,	// (0x00059434) main_camera_pane_t_ParamLimits

0x3955,	// (0x0004db3b) bg_popup_preview_window_pane_cp01_ParamLimits

0x3955,	// (0x0004db3b) bg_popup_preview_window_pane_cp01

0x48ce,	// (0x0004eab4) popup_phob_thumbnail2_window_g1_ParamLimits

0x48ce,	// (0x0004eab4) popup_phob_thumbnail2_window_g1

0x36fa,	// (0x0004d8e0) call2_cli_visual_pane

0x8670,	// (0x00052856) popup_call2_audio_conf_window_ParamLimits

0x8670,	// (0x00052856) popup_call2_audio_conf_window

0x8689,	// (0x0005286f) popup_call2_audio_first_window_ParamLimits

0x8689,	// (0x0005286f) popup_call2_audio_first_window

0x8727,	// (0x0005290d) popup_call2_audio_in_window_ParamLimits

0x8727,	// (0x0005290d) popup_call2_audio_in_window

0x876b,	// (0x00052951) popup_call2_audio_out_window_ParamLimits

0x876b,	// (0x00052951) popup_call2_audio_out_window

0x87d5,	// (0x000529bb) popup_call2_audio_second_window_ParamLimits

0x87d5,	// (0x000529bb) popup_call2_audio_second_window

0x8833,	// (0x00052a19) popup_call2_audio_wait_window_ParamLimits

0x8833,	// (0x00052a19) popup_call2_audio_wait_window

0x36fa,	// (0x0004d8e0) bg_popup_call2_act_pane_cp03

0x3937,	// (0x0004db1d) list_conf_pane_cp

0x48da,	// (0x0004eac0) popup_call2_audio_conf_window_t1

0x48e8,	// (0x0004eace) list_single_graphic_popup_conf2_pane_ParamLimits

0x48e8,	// (0x0004eace) list_single_graphic_popup_conf2_pane

0x429d,	// (0x0004e483) list_highlight_pane_cp04

0x48fb,	// (0x0004eae1) list_single_graphic_popup_conf2_pane_g1

0x42ae,	// (0x0004e494) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf545,	// (0x0005972b) list_single_graphic_popup_conf2_pane_g

0x4905,	// (0x0004eaeb) list_single_graphic_popup_conf2_pane_t1

0x4913,	// (0x0004eaf9) bg_popup_call2_act_pane_cp01_ParamLimits

0x4913,	// (0x0004eaf9) bg_popup_call2_act_pane_cp01

0x499d,	// (0x0004eb83) call_type_pane_cp05_ParamLimits

0x499d,	// (0x0004eb83) call_type_pane_cp05

0x49f1,	// (0x0004ebd7) popup_call2_audio_second_window_g1_ParamLimits

0x49f1,	// (0x0004ebd7) popup_call2_audio_second_window_g1

0x4a5f,	// (0x0004ec45) popup_call2_audio_second_window_g2_ParamLimits

0x4a5f,	// (0x0004ec45) popup_call2_audio_second_window_g2

0x0002,

0xf54a,	// (0x00059730) popup_call2_audio_second_window_g_ParamLimits

0xf54a,	// (0x00059730) popup_call2_audio_second_window_g

0x4ac4,	// (0x0004ecaa) popup_call2_audio_second_window_t1_ParamLimits

0x4ac4,	// (0x0004ecaa) popup_call2_audio_second_window_t1

0xda48,	// (0x00057c2e) popup_call2_audio_second_window_t2_ParamLimits

0xda48,	// (0x00057c2e) popup_call2_audio_second_window_t2

0xda9b,	// (0x00057c81) popup_call2_audio_second_window_t3_ParamLimits

0xda9b,	// (0x00057c81) popup_call2_audio_second_window_t3

0x0003,

0xf551,	// (0x00059737) popup_call2_audio_second_window_t_ParamLimits

0xf551,	// (0x00059737) popup_call2_audio_second_window_t

0x36fa,	// (0x0004d8e0) bg_popup_call2_in_pane_cp02

0x3704,	// (0x0004d8ea) call_type_pane_cp04

0x370c,	// (0x0004d8f2) popup_call2_audio_wait_window_g1

0x3714,	// (0x0004d8fa) popup_call2_audio_wait_window_g2

0x0001,

0xf12a,	// (0x00059310) popup_call2_audio_wait_window_g

0x371c,	// (0x0004d902) popup_call2_audio_wait_window_t3

0xdb8e,	// (0x00057d74) bg_popup_call2_act_pane_ParamLimits

0xdb8e,	// (0x00057d74) bg_popup_call2_act_pane

0xdc4e,	// (0x00057e34) call_type_pane_cp03_ParamLimits

0xdc4e,	// (0x00057e34) call_type_pane_cp03

0xdcb2,	// (0x00057e98) popup_call2_audio_first_window_g1_ParamLimits

0xdcb2,	// (0x00057e98) popup_call2_audio_first_window_g1

0xdd22,	// (0x00057f08) popup_call2_audio_first_window_g2_ParamLimits

0xdd22,	// (0x00057f08) popup_call2_audio_first_window_g2

0x424a,	// (0x0004e430) popup_call2_audio_first_window_g3_ParamLimits

0x424a,	// (0x0004e430) popup_call2_audio_first_window_g3

0x0004,

0xf55a,	// (0x00059740) popup_call2_audio_first_window_g_ParamLimits

0xf55a,	// (0x00059740) popup_call2_audio_first_window_g

0xde00,	// (0x00057fe6) popup_call2_audio_first_window_t1_ParamLimits

0xde00,	// (0x00057fe6) popup_call2_audio_first_window_t1

0xdf03,	// (0x000580e9) popup_call2_audio_first_window_t4_ParamLimits

0xdf03,	// (0x000580e9) popup_call2_audio_first_window_t4

0xdfe6,	// (0x000581cc) popup_call2_audio_first_window_t5_ParamLimits

0xdfe6,	// (0x000581cc) popup_call2_audio_first_window_t5

0x0003,

0xf565,	// (0x0005974b) popup_call2_audio_first_window_t_ParamLimits

0xf565,	// (0x0005974b) popup_call2_audio_first_window_t

0x394d,	// (0x0004db33) bg_popup_call2_act_pane_g1

0xe655,	// (0x0005883b) popup_cale_lunar_info_window_t1

0xe663,	// (0x00058849) popup_cale_lunar_info_window_t2

0xe671,	// (0x00058857) popup_cale_lunar_info_window_t3

0x36fa,	// (0x0004d8e0) bg_popup_call2_bubble_pane

0xe0e7,	// (0x000582cd) bg_popup_call2_in_pane_cp01_ParamLimits

0xe0e7,	// (0x000582cd) bg_popup_call2_in_pane_cp01

0x33d6,	// (0x0004d5bc) call_type_pane_cp02

0xe12f,	// (0x00058315) popup_call2_audio_out_window_g1_ParamLimits

0xe12f,	// (0x00058315) popup_call2_audio_out_window_g1

0xe15b,	// (0x00058341) popup_call2_audio_out_window_g2_ParamLimits

0xe15b,	// (0x00058341) popup_call2_audio_out_window_g2

0xe183,	// (0x00058369) popup_call2_audio_out_window_g3_ParamLimits

0xe183,	// (0x00058369) popup_call2_audio_out_window_g3

0x0003,

0xf56e,	// (0x00059754) popup_call2_audio_out_window_g_ParamLimits

0xf56e,	// (0x00059754) popup_call2_audio_out_window_g

0xe1be,	// (0x000583a4) popup_call2_audio_out_window_t1_ParamLimits

0xe1be,	// (0x000583a4) popup_call2_audio_out_window_t1

0xe21d,	// (0x00058403) popup_call2_audio_out_window_t2_ParamLimits

0xe21d,	// (0x00058403) popup_call2_audio_out_window_t2

0xe271,	// (0x00058457) popup_call2_audio_out_window_t3_ParamLimits

0xe271,	// (0x00058457) popup_call2_audio_out_window_t3

0xe287,	// (0x0005846d) popup_call2_audio_out_window_t4_ParamLimits

0xe287,	// (0x0005846d) popup_call2_audio_out_window_t4

0xe29d,	// (0x00058483) popup_call2_audio_out_window_t5_ParamLimits

0xe29d,	// (0x00058483) popup_call2_audio_out_window_t5

0x0005,

0xf577,	// (0x0005975d) popup_call2_audio_out_window_t_ParamLimits

0xf577,	// (0x0005975d) popup_call2_audio_out_window_t

0xe301,	// (0x000584e7) bg_popup_call2_in_pane_ParamLimits

0xe301,	// (0x000584e7) bg_popup_call2_in_pane

0xe35d,	// (0x00058543) popup_call2_audio_in_window_g1_ParamLimits

0xe35d,	// (0x00058543) popup_call2_audio_in_window_g1

0xe395,	// (0x0005857b) popup_call2_audio_in_window_g2_ParamLimits

0xe395,	// (0x0005857b) popup_call2_audio_in_window_g2

0xe3cd,	// (0x000585b3) popup_call2_audio_in_window_g3_ParamLimits

0xe3cd,	// (0x000585b3) popup_call2_audio_in_window_g3

0x0003,

0xf584,	// (0x0005976a) popup_call2_audio_in_window_g_ParamLimits

0xf584,	// (0x0005976a) popup_call2_audio_in_window_g

0xe425,	// (0x0005860b) popup_call2_audio_in_window_t1_ParamLimits

0xe425,	// (0x0005860b) popup_call2_audio_in_window_t1

0xe4a5,	// (0x0005868b) popup_call2_audio_in_window_t2_ParamLimits

0xe4a5,	// (0x0005868b) popup_call2_audio_in_window_t2

0xe525,	// (0x0005870b) popup_call2_audio_in_window_t3_ParamLimits

0xe525,	// (0x0005870b) popup_call2_audio_in_window_t3

0xe53f,	// (0x00058725) popup_call2_audio_in_window_t4_ParamLimits

0xe53f,	// (0x00058725) popup_call2_audio_in_window_t4

0xe551,	// (0x00058737) popup_call2_audio_in_window_t5_ParamLimits

0xe551,	// (0x00058737) popup_call2_audio_in_window_t5

0xe566,	// (0x0005874c) popup_call2_audio_in_window_t6_ParamLimits

0xe566,	// (0x0005874c) popup_call2_audio_in_window_t6

0x0005,

0xf58d,	// (0x00059773) popup_call2_audio_in_window_t_ParamLimits

0xf58d,	// (0x00059773) popup_call2_audio_in_window_t

0x394d,	// (0x0004db33) bg_popup_call2_in_pane_g1

0xe67f,	// (0x00058865) popup_cale_lunar_info_window_t4

0x0003,

0xf5f5,	// (0x000597db) popup_cale_lunar_info_window_t

0x3955,	// (0x0004db3b) bg_popup_call2_rect_pane_ParamLimits

0x3955,	// (0x0004db3b) bg_popup_call2_rect_pane

0x36fa,	// (0x0004d8e0) call2_cli_visual_graphic_pane

0x36fa,	// (0x0004d8e0) call2_cli_visual_text_pane

0x8ceb,	// (0x00052ed1) smil_status_volume_pane_g3

0x0002,

0x3a75,	// (0x0004dc5b) call2_cli_visual_graphic_pane_g1

0x3a75,	// (0x0004dc5b) call2_cli_visual_graphic_pane_g2

0x3a75,	// (0x0004dc5b) call2_cli_visual_graphic_pane_g3

0x0002,

0xf59a,	// (0x00059780) call2_cli_visual_graphic_pane_g

0xe57b,	// (0x00058761) bg_popup_call2_rect_pane_g1

0x3b13,	// (0x0004dcf9) bg_popup_call2_rect_pane_g2

0xe583,	// (0x00058769) bg_popup_call2_rect_pane_g3

0xe58b,	// (0x00058771) bg_popup_call2_rect_pane_g4

0xe593,	// (0x00058779) bg_popup_call2_rect_pane_g5

0xe59b,	// (0x00058781) bg_popup_call2_rect_pane_g6

0xe5a3,	// (0x00058789) bg_popup_call2_rect_pane_g7

0xe5ab,	// (0x00058791) bg_popup_call2_rect_pane_g8

0xe5b3,	// (0x00058799) bg_popup_call2_rect_pane_g9

0x0008,

0xf5a1,	// (0x00059787) bg_popup_call2_rect_pane_g

0xe5bb,	// (0x000587a1) bg_popup_call2_bubble_pane_g1

0xe5c3,	// (0x000587a9) bg_popup_call2_bubble_pane_g2

0xe5cb,	// (0x000587b1) bg_popup_call2_bubble_pane_g3

0xe5d3,	// (0x000587b9) bg_popup_call2_bubble_pane_g4

0xe5db,	// (0x000587c1) bg_popup_call2_bubble_pane_g5

0xe5e3,	// (0x000587c9) bg_popup_call2_bubble_pane_g6

0xe5eb,	// (0x000587d1) bg_popup_call2_bubble_pane_g7

0xe5f3,	// (0x000587d9) bg_popup_call2_bubble_pane_g8

0xe5fb,	// (0x000587e1) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5b4,	// (0x0005979a) bg_popup_call2_bubble_pane_g

0x6213,	// (0x000503f9) aid_cale_week_size_cell_pane

0x681d,	// (0x00050a03) aid_cams_cif_uncrop_pane_ParamLimits

0x681d,	// (0x00050a03) aid_cams_cif_uncrop_pane

0x697a,	// (0x00050b60) aid_cams_size_cell_ParamLimits

0x697a,	// (0x00050b60) aid_cams_size_cell

0x6986,	// (0x00050b6c) grid_cams_pane_ParamLimits

0x6994,	// (0x00050b7a) linegrid_cams_pane_ParamLimits

0x6a85,	// (0x00050c6b) call_video_pane_t1

0x6a9b,	// (0x00050c81) call_video_pane_t2

0x0001,

0xf2a1,	// (0x00059487) call_video_pane_t

0x6ef5,	// (0x000510db) aid_cale_month_size_cell_pane_ParamLimits

0x6ef5,	// (0x000510db) aid_cale_month_size_cell_pane

0xf63e,	// (0x00059824) smil_status_volume_pane_g

0x8cf8,	// (0x00052ede) volume_smil_pane_ParamLimits

0x0550,	// (0x0004a736) aid_popup2_width_pane

0x612f,	// (0x00050315) cell_qdial_pane_g4_ParamLimits

0x612f,	// (0x00050315) cell_qdial_pane_g4

0x7bb6,	// (0x00051d9c) aid_blid_cardinal_pane_ParamLimits

0x7bc6,	// (0x00051dac) aid_blid_destination_pane_ParamLimits

0x7bc6,	// (0x00051dac) aid_blid_destination_pane

0x3955,	// (0x0004db3b) bg_popup_call_poc_act_pane_ParamLimits

0x3955,	// (0x0004db3b) bg_popup_call_poc_act_pane

0x3955,	// (0x0004db3b) bg_popup_call_poc_inact_pane_ParamLimits

0x3955,	// (0x0004db3b) bg_popup_call_poc_inact_pane

0xe603,	// (0x000587e9) bg_popup_call_poc_act_pane_g1

0xe60b,	// (0x000587f1) bg_popup_call_poc_act_pane_g2

0xe613,	// (0x000587f9) bg_popup_call_poc_act_pane_g3

0xe5d3,	// (0x000587b9) bg_popup_call_poc_act_pane_g4

0xe5db,	// (0x000587c1) bg_popup_call_poc_act_pane_g5

0xe61b,	// (0x00058801) bg_popup_call_poc_act_pane_g6

0xe5eb,	// (0x000587d1) bg_popup_call_poc_act_pane_g7

0xe623,	// (0x00058809) bg_popup_call_poc_act_pane_g8

0x36fa,	// (0x0004d8e0) main_usb_pane

0xe780,	// (0x00058966) popup_cale_lunar_info_window

0x6d32,	// (0x00050f18) im_reading_pane_t1_ParamLimits

0x3cda,	// (0x0004dec0) list_im_pane_ParamLimits

0x3ceb,	// (0x0004ded1) scroll_pane_cp07_ParamLimits

0x36fa,	// (0x0004d8e0) grid_highlight_pane_cp012

0x3955,	// (0x0004db3b) mup_scale_pane_ParamLimits

0x424a,	// (0x0004e430) main_usb_pane_g1_ParamLimits

0x424a,	// (0x0004e430) main_usb_pane_g1

0x889f,	// (0x00052a85) main_usb_pane_g2_ParamLimits

0x889f,	// (0x00052a85) main_usb_pane_g2

0x0001,

0xf5de,	// (0x000597c4) main_usb_pane_g_ParamLimits

0xf5de,	// (0x000597c4) main_usb_pane_g

0x88ab,	// (0x00052a91) main_usb_pane_t1_ParamLimits

0x88ab,	// (0x00052a91) main_usb_pane_t1

0x88bd,	// (0x00052aa3) main_usb_pane_t2_ParamLimits

0x88bd,	// (0x00052aa3) main_usb_pane_t2

0x88cf,	// (0x00052ab5) main_usb_pane_t3_ParamLimits

0x88cf,	// (0x00052ab5) main_usb_pane_t3

0x88e1,	// (0x00052ac7) main_usb_pane_t4_ParamLimits

0x88e1,	// (0x00052ac7) main_usb_pane_t4

0x88f3,	// (0x00052ad9) main_usb_pane_t5_ParamLimits

0x88f3,	// (0x00052ad9) main_usb_pane_t5

0x8905,	// (0x00052aeb) main_usb_pane_t6_ParamLimits

0x8905,	// (0x00052aeb) main_usb_pane_t6

0x0005,

0xf5e3,	// (0x000597c9) main_usb_pane_t_ParamLimits

0x7b71,	// (0x00051d57) aid_text_placing

0x7b7c,	// (0x00051d62) main_location2_pane_t1_ParamLimits

0x7b90,	// (0x00051d76) main_location2_pane_t2_ParamLimits

0x7b90,	// (0x00051d76) main_location2_pane_t3_ParamLimits

0x7ba4,	// (0x00051d8a) main_location2_pane_t4_ParamLimits

0x7ba4,	// (0x00051d8a) main_location2_pane_t4

0xf402,	// (0x000595e8) main_location2_pane_t_ParamLimits

0x3991,	// (0x0004db77) find_pinb_pane_g2_ParamLimits

0x3991,	// (0x0004db77) find_pinb_pane_g2

0x0001,

0xf150,	// (0x00059336) find_pinb_pane_g_ParamLimits

0xf150,	// (0x00059336) find_pinb_pane_g

0x399d,	// (0x0004db83) find_pinb_pane_t1_ParamLimits

0x39af,	// (0x0004db95) find_pinb_pane_t2_ParamLimits

0xf155,	// (0x0005933b) find_pinb_pane_t_ParamLimits

0x36fa,	// (0x0004d8e0) main_call3_pane

0x7251,	// (0x00051437) cale_month_day_heading_pane_t1_ParamLimits

0x72af,	// (0x00051495) cale_month_day_heading_pane_t2_ParamLimits

0x7314,	// (0x000514fa) cale_month_day_heading_pane_t3_ParamLimits

0x7379,	// (0x0005155f) cale_month_day_heading_pane_t4_ParamLimits

0x73de,	// (0x000515c4) cale_month_day_heading_pane_t5_ParamLimits

0x744b,	// (0x00051631) cale_month_day_heading_pane_t6_ParamLimits

0x74c0,	// (0x000516a6) cale_month_day_heading_pane_t7_ParamLimits

0xf2d9,	// (0x000594bf) cale_month_day_heading_pane_t_ParamLimits

0x3f2b,	// (0x0004e111) smil_status_volume_pane

0x8457,	// (0x0005263d) postcard_address_pane_ParamLimits

0x8457,	// (0x0005263d) postcard_address_pane

0x8465,	// (0x0005264b) postcard_message_pane_ParamLimits

0x8465,	// (0x0005264b) postcard_message_pane

0x8872,	// (0x00052a58) call2_cli_visual_pane_t1_ParamLimits

0x8872,	// (0x00052a58) call2_cli_visual_pane_t1

0x8e3e,	// (0x00053024) postcard_message_pane_t1_ParamLimits

0x8e3e,	// (0x00053024) postcard_message_pane_t1

0xe86e,	// (0x00058a54) postcard_address_pane_t1_ParamLimits

0xe86e,	// (0x00058a54) postcard_address_pane_t1

0x8e2f,	// (0x00053015) popup_call3_audio_in_window_ParamLimits

0x8e2f,	// (0x00053015) popup_call3_audio_in_window

0x8d0d,	// (0x00052ef3) bg_popup_call3_in_pane_ParamLimits

0x8d0d,	// (0x00052ef3) bg_popup_call3_in_pane

0x8d75,	// (0x00052f5b) popup_call3_audio_in_window_g1_ParamLimits

0x8d75,	// (0x00052f5b) popup_call3_audio_in_window_g1

0x8d8d,	// (0x00052f73) popup_call3_audio_in_window_g2_ParamLimits

0x8d8d,	// (0x00052f73) popup_call3_audio_in_window_g2

0x8da5,	// (0x00052f8b) popup_call3_audio_in_window_g3_ParamLimits

0x8da5,	// (0x00052f8b) popup_call3_audio_in_window_g3

0x0003,

0xf645,	// (0x0005982b) popup_call3_audio_in_window_g_ParamLimits

0xf645,	// (0x0005982b) popup_call3_audio_in_window_g

0x8dcd,	// (0x00052fb3) popup_call3_audio_in_window_t1_ParamLimits

0x8dcd,	// (0x00052fb3) popup_call3_audio_in_window_t1

0x8df5,	// (0x00052fdb) popup_call3_audio_in_window_t2_ParamLimits

0x8df5,	// (0x00052fdb) popup_call3_audio_in_window_t2

0x8e1d,	// (0x00053003) popup_call3_audio_in_window_t3_ParamLimits

0x8e1d,	// (0x00053003) popup_call3_audio_in_window_t3

0x0002,

0xf64e,	// (0x00059834) popup_call3_audio_in_window_t_ParamLimits

0xf64e,	// (0x00059834) popup_call3_audio_in_window_t

0x447c,	// (0x0004e662) bg_popup_call3_rect_pane

0xe57b,	// (0x00058761) bg_popup_call3_rect_pane_g1

0x3b13,	// (0x0004dcf9) bg_popup_call3_rect_pane_g2

0xe583,	// (0x00058769) bg_popup_call3_rect_pane_g3

0xe58b,	// (0x00058771) bg_popup_call3_rect_pane_g4

0xe593,	// (0x00058779) bg_popup_call3_rect_pane_g5

0xe59b,	// (0x00058781) bg_popup_call3_rect_pane_g6

0xe5a3,	// (0x00058789) bg_popup_call3_rect_pane_g7

0x7fd6,	// (0x000521bc) mup_visualizer_osc_pane

0x453b,	// (0x0004e721) mup_visualizer_spec_pane

0x8d2d,	// (0x00052f13) call3_video_qcif_pane_ParamLimits

0x8d2d,	// (0x00052f13) call3_video_qcif_pane

0x8d3f,	// (0x00052f25) call3_video_qcif_uncrop_pane_ParamLimits

0x8d3f,	// (0x00052f25) call3_video_qcif_uncrop_pane

0x8d4f,	// (0x00052f35) call3_video_subqcif_pane_ParamLimits

0x8d4f,	// (0x00052f35) call3_video_subqcif_pane

0x8d63,	// (0x00052f49) call3_video_subqcif_uncrop_pane_ParamLimits

0x8d63,	// (0x00052f49) call3_video_subqcif_uncrop_pane

0x8dbd,	// (0x00052fa3) popup_call3_audio_in_window_g4_ParamLimits

0x8dbd,	// (0x00052fa3) popup_call3_audio_in_window_g4

0x8cda,	// (0x00052ec0) mup_spec_half_pane

0x8ce3,	// (0x00052ec9) mup_spec_half_pane_cp

0xe82e,	// (0x00058a14) mup_osc_middle_pane

0xe837,	// (0x00058a1d) mup_visualizer_osc_pane_g1

0x8cba,	// (0x00052ea0) mup_spec_bar_pane_ParamLimits

0x8cba,	// (0x00052ea0) mup_spec_bar_pane

0xe81b,	// (0x00058a01) mup_spec_bar_pane_g1

0xe825,	// (0x00058a0b) mup_spec_bar_pane_g2

0x0001,

0xf639,	// (0x0005981f) mup_spec_bar_pane_g

0x6213,	// (0x000503f9) aid_cale_week_size_cell_pane_ParamLimits

0x6226,	// (0x0005040c) bg_cale_heading_pane_ParamLimits

0x3b47,	// (0x0004dd2d) bg_cale_pane_cp01_ParamLimits

0x623a,	// (0x00050420) cale_week_corner_pane_ParamLimits

0x6250,	// (0x00050436) cale_week_day_heading_pane_ParamLimits

0x6264,	// (0x0005044a) cale_week_scroll_pane_g1_ParamLimits

0x6275,	// (0x0005045b) cale_week_scroll_pane_g2_ParamLimits

0x6286,	// (0x0005046c) cale_week_scroll_pane_g3_ParamLimits

0x6297,	// (0x0005047d) cale_week_scroll_pane_g4_ParamLimits

0x62a8,	// (0x0005048e) cale_week_scroll_pane_g5_ParamLimits

0x62b9,	// (0x0005049f) cale_week_scroll_pane_g6_ParamLimits

0x62cc,	// (0x000504b2) cale_week_scroll_pane_g7_ParamLimits

0x62df,	// (0x000504c5) cale_week_scroll_pane_g8_ParamLimits

0x62f2,	// (0x000504d8) cale_week_scroll_pane_g9_ParamLimits

0x6303,	// (0x000504e9) cale_week_scroll_pane_g10_ParamLimits

0x6314,	// (0x000504fa) cale_week_scroll_pane_g11_ParamLimits

0x6325,	// (0x0005050b) cale_week_scroll_pane_g12_ParamLimits

0x6336,	// (0x0005051c) cale_week_scroll_pane_g13_ParamLimits

0x6347,	// (0x0005052d) cale_week_scroll_pane_g14_ParamLimits

0x6358,	// (0x0005053e) cale_week_scroll_pane_g15_ParamLimits

0xf1e1,	// (0x000593c7) cale_week_scroll_pane_g_ParamLimits

0x6369,	// (0x0005054f) cale_week_time_pane_ParamLimits

0x637c,	// (0x00050562) grid_cale_week_pane_ParamLimits

0x3b60,	// (0x0004dd46) listscroll_cale_week_pane_t1

0x6391,	// (0x00050577) scroll_pane_cp08_ParamLimits

0x6f36,	// (0x0005111c) cale_month_corner_pane_ParamLimits

0x3f01,	// (0x0004e0e7) cale_month_pane_t1

0x7210,	// (0x000513f6) cale_month_week_pane_ParamLimits

0x424a,	// (0x0004e430) popup_call_status_window_g1_ParamLimits

0x7983,	// (0x00051b69) popup_call_status_window_g2_ParamLimits

0x798f,	// (0x00051b75) popup_call_status_window_g3_ParamLimits

0xf389,	// (0x0005956f) popup_call_status_window_g_ParamLimits

0x4218,	// (0x0004e3fe) aid_call2_pane

0x8282,	// (0x00052468) msg_header_pane_g1

0x8457,	// (0x0005263d) postcard_address2_pane_ParamLimits

0x8457,	// (0x0005263d) postcard_address2_pane

0x8465,	// (0x0005264b) postcard_message2_pane_ParamLimits

0x8465,	// (0x0005264b) postcard_message2_pane

0x8c74,	// (0x00052e5a) message2_row_pane_ParamLimits

0x8c74,	// (0x00052e5a) message2_row_pane

0xe7d6,	// (0x000589bc) address2_row_pane_ParamLimits

0xe7d6,	// (0x000589bc) address2_row_pane

0xe7e9,	// (0x000589cf) postcard_message2_row_pane_g1

0xe7f1,	// (0x000589d7) postcard_message2_row_pane_t1

0xe7e9,	// (0x000589cf) address2_row_pane_g1

0xe7f1,	// (0x000589d7) address2_row_pane_t1

0x66db,	// (0x000508c1) aid_size_cell_vorec

0x36fa,	// (0x0004d8e0) main_rss_pane

0x8c8e,	// (0x00052e74) rss_list_single_pane_ParamLimits

0x8c8e,	// (0x00052e74) rss_list_single_pane

0xe7ff,	// (0x000589e5) rss_list_single_pane_t1

0xe80d,	// (0x000589f3) rss_list_single_pane_t2

0x0001,

0xf634,	// (0x0005981a) rss_list_single_pane_t

0x36fa,	// (0x0004d8e0) main_camera2_pane

0x36fa,	// (0x0004d8e0) main_video2_pane

0x8ea2,	// (0x00053088) cams_zoom_pane_cp2_ParamLimits

0x8ea2,	// (0x00053088) cams_zoom_pane_cp2

0x8eae,	// (0x00053094) image2_vga_pane_ParamLimits

0x8eae,	// (0x00053094) image2_vga_pane

0x8ebd,	// (0x000530a3) main_camera2_pane_g1_ParamLimits

0x8ebd,	// (0x000530a3) main_camera2_pane_g1

0x8ec9,	// (0x000530af) main_camera2_pane_g2_ParamLimits

0x8ec9,	// (0x000530af) main_camera2_pane_g2

0x8ed5,	// (0x000530bb) main_camera2_pane_g3_ParamLimits

0x8ed5,	// (0x000530bb) main_camera2_pane_g3

0x8ee1,	// (0x000530c7) main_camera2_pane_g4_ParamLimits

0x8ee1,	// (0x000530c7) main_camera2_pane_g4

0x8eed,	// (0x000530d3) main_camera2_pane_g5_ParamLimits

0x8eed,	// (0x000530d3) main_camera2_pane_g5

0x8ef9,	// (0x000530df) main_camera2_pane_g6_ParamLimits

0x8ef9,	// (0x000530df) main_camera2_pane_g6

0x8f05,	// (0x000530eb) main_camera2_pane_g7_ParamLimits

0x8f05,	// (0x000530eb) main_camera2_pane_g7

0x8f11,	// (0x000530f7) main_camera2_pane_g8_ParamLimits

0x8f11,	// (0x000530f7) main_camera2_pane_g8

0x0008,

0xf655,	// (0x0005983b) main_camera2_pane_g_ParamLimits

0xf655,	// (0x0005983b) main_camera2_pane_g

0x8f29,	// (0x0005310f) main_camera2_pane_t1_ParamLimits

0x8f29,	// (0x0005310f) main_camera2_pane_t1

0x8f3b,	// (0x00053121) main_camera2_pane_t2_ParamLimits

0x8f3b,	// (0x00053121) main_camera2_pane_t2

0x8f4d,	// (0x00053133) main_camera2_pane_t3_ParamLimits

0x8f4d,	// (0x00053133) main_camera2_pane_t3

0x8f5f,	// (0x00053145) main_camera2_pane_t4_ParamLimits

0x8f5f,	// (0x00053145) main_camera2_pane_t4

0x0006,

0xf668,	// (0x0005984e) main_camera2_pane_t_ParamLimits

0xf668,	// (0x0005984e) main_camera2_pane_t

0x8fbc,	// (0x000531a2) cams_zoom_pane_cp4_ParamLimits

0x8fbc,	// (0x000531a2) cams_zoom_pane_cp4

0x8fcc,	// (0x000531b2) image2_cif_pane_ParamLimits

0x8fcc,	// (0x000531b2) image2_cif_pane

0x8fe1,	// (0x000531c7) image2_subqcif_pane_ParamLimits

0x8fe1,	// (0x000531c7) image2_subqcif_pane

0x8ff0,	// (0x000531d6) main_video2_pane_g1_ParamLimits

0x8ff0,	// (0x000531d6) main_video2_pane_g1

0x9002,	// (0x000531e8) main_video2_pane_g2_ParamLimits

0x9002,	// (0x000531e8) main_video2_pane_g2

0x9012,	// (0x000531f8) main_video2_pane_g3_ParamLimits

0x9012,	// (0x000531f8) main_video2_pane_g3

0x9022,	// (0x00053208) main_video2_pane_g4_ParamLimits

0x9022,	// (0x00053208) main_video2_pane_g4

0x9032,	// (0x00053218) main_video2_pane_g5_ParamLimits

0x9032,	// (0x00053218) main_video2_pane_g5

0x9042,	// (0x00053228) main_video2_pane_g6_ParamLimits

0x9042,	// (0x00053228) main_video2_pane_g6

0x0005,

0xf677,	// (0x0005985d) main_video2_pane_g_ParamLimits

0xf677,	// (0x0005985d) main_video2_pane_g

0x9054,	// (0x0005323a) main_video2_pane_t1_ParamLimits

0x9054,	// (0x0005323a) main_video2_pane_t1

0x906e,	// (0x00053254) main_video2_pane_t2_ParamLimits

0x906e,	// (0x00053254) main_video2_pane_t2

0x9094,	// (0x0005327a) main_video2_pane_t3_ParamLimits

0x9094,	// (0x0005327a) main_video2_pane_t3

0x0002,

0xf684,	// (0x0005986a) main_video2_pane_t_ParamLimits

0xf684,	// (0x0005986a) main_video2_pane_t

0x89bc,	// (0x00052ba2) call_muted_g2

0x0001,

0xf626,	// (0x0005980c) call_muted_g

0x36fa,	// (0x0004d8e0) main_mup2_pane

0xe885,	// (0x00058a6b) main_mup2_pane_g1_ParamLimits

0xe885,	// (0x00058a6b) main_mup2_pane_g1

0x90ba,	// (0x000532a0) main_mup2_pane_g2_ParamLimits

0x90ba,	// (0x000532a0) main_mup2_pane_g2

0x934c,	// (0x00053532) main_mup_pane_g13_cp1

0x9354,	// (0x0005353a) mup_volume_pane_cp1

0x90dc,	// (0x000532c2) main_mup2_pane_g4_ParamLimits

0x90dc,	// (0x000532c2) main_mup2_pane_g4

0x90f1,	// (0x000532d7) main_mup2_pane_g5_ParamLimits

0x90f1,	// (0x000532d7) main_mup2_pane_g5

0x9106,	// (0x000532ec) main_mup2_pane_g6_ParamLimits

0x9106,	// (0x000532ec) main_mup2_pane_g6

0x911b,	// (0x00053301) main_mup2_pane_g7_ParamLimits

0x911b,	// (0x00053301) main_mup2_pane_g7

0x0006,

0xf68b,	// (0x00059871) main_mup2_pane_g_ParamLimits

0xf68b,	// (0x00059871) main_mup2_pane_g

0x9137,	// (0x0005331d) main_mup2_pane_t1_ParamLimits

0x9137,	// (0x0005331d) main_mup2_pane_t1

0x914e,	// (0x00053334) main_mup2_pane_t2_ParamLimits

0x914e,	// (0x00053334) main_mup2_pane_t2

0x9165,	// (0x0005334b) main_mup2_pane_t3_ParamLimits

0x9165,	// (0x0005334b) main_mup2_pane_t3

0x917c,	// (0x00053362) main_mup2_pane_t4_ParamLimits

0x917c,	// (0x00053362) main_mup2_pane_t4

0x9196,	// (0x0005337c) main_mup2_pane_t5_ParamLimits

0x9196,	// (0x0005337c) main_mup2_pane_t5

0x91b0,	// (0x00053396) main_mup2_pane_t6_ParamLimits

0x91b0,	// (0x00053396) main_mup2_pane_t6

0x0005,

0xf69a,	// (0x00059880) main_mup2_pane_t_ParamLimits

0xf69a,	// (0x00059880) main_mup2_pane_t

0x91e8,	// (0x000533ce) mup2_visualizer_pane_ParamLimits

0x91e8,	// (0x000533ce) mup2_visualizer_pane

0x921e,	// (0x00053404) mup_progress_pane_cp_ParamLimits

0x921e,	// (0x00053404) mup_progress_pane_cp

0x9337,	// (0x0005351d) mup_volume_pane_cp_ParamLimits

0x9337,	// (0x0005351d) mup_volume_pane_cp

0x9237,	// (0x0005341d) mup2_visualizer_pane_g1_ParamLimits

0x9237,	// (0x0005341d) mup2_visualizer_pane_g1

0xe891,	// (0x00058a77) mup2_visualizer_pane_g2_ParamLimits

0xe891,	// (0x00058a77) mup2_visualizer_pane_g2

0x924c,	// (0x00053432) mup2_visualizer_pane_g3_ParamLimits

0x924c,	// (0x00053432) mup2_visualizer_pane_g3

0x0002,

0xf6a7,	// (0x0005988d) mup2_visualizer_pane_g_ParamLimits

0xf6a7,	// (0x0005988d) mup2_visualizer_pane_g

0x4764,	// (0x0004e94a) aid_size_cell_fmradio

0x8ad2,	// (0x00052cb8) aid_height_parent_landcape

0x3d69,	// (0x0004df4f) wml_content_pane_cp

0x3d71,	// (0x0004df57) wml_tabs_pane

0x3d7a,	// (0x0004df60) popup_wml_miniature_window

0x3d82,	// (0x0004df68) scroll_pane_cp021

0x3d96,	// (0x0004df7c) wml_content_pane_comp8

0x36fa,	// (0x0004d8e0) bg_popup_sub_pane_cp05

0xe8af,	// (0x00058a95) popup_wml_miniature_window_g1

0xe8b7,	// (0x00058a9d) wml_miniature_view_pane

0x925a,	// (0x00053440) aid_size_wml_view

0x9262,	// (0x00053448) wml_miniature_view_pane_g1

0x926b,	// (0x00053451) wml_miniature_view_pane_g2

0x9274,	// (0x0005345a) wml_miniature_view_pane_g3

0x927c,	// (0x00053462) wml_miniature_view_pane_g4

0x9284,	// (0x0005346a) wml_miniature_view_pane_g5

0x928c,	// (0x00053472) wml_miniature_view_pane_g6

0x9294,	// (0x0005347a) wml_miniature_view_pane_g7

0x929c,	// (0x00053482) wml_miniature_view_pane_g8

0x0007,

0xf6ae,	// (0x00059894) wml_miniature_view_pane_g

0xe885,	// (0x00058a6b) background_graphic_ParamLimits

0xe885,	// (0x00058a6b) background_graphic

0xe8bf,	// (0x00058aa5) wml_tabs_2_pane

0xe8c8,	// (0x00058aae) wml_tabs_3_pane_ParamLimits

0xe8c8,	// (0x00058aae) wml_tabs_3_pane

0xe8da,	// (0x00058ac0) wml_tabs_4_pane_ParamLimits

0xe8da,	// (0x00058ac0) wml_tabs_4_pane

0xe8f0,	// (0x00058ad6) wml_tabs_5_pane_ParamLimits

0xe8f0,	// (0x00058ad6) wml_tabs_5_pane

0xe90a,	// (0x00058af0) wml_tabs_pane_g2_ParamLimits

0xe90a,	// (0x00058af0) wml_tabs_pane_g2

0xe91e,	// (0x00058b04) wml_tabs_pane_g3_ParamLimits

0xe91e,	// (0x00058b04) wml_tabs_pane_g3

0x92a4,	// (0x0005348a) wml_tabs_2_active_pane_ParamLimits

0x92a4,	// (0x0005348a) wml_tabs_2_active_pane

0x92b6,	// (0x0005349c) wml_tabs_2_passive_pane_ParamLimits

0x92b6,	// (0x0005349c) wml_tabs_2_passive_pane

0x92c8,	// (0x000534ae) wml_tabs_3_active_pane_cp_ParamLimits

0x92c8,	// (0x000534ae) wml_tabs_3_active_pane_cp

0x92db,	// (0x000534c1) wml_tabs_3_passive_pane_ParamLimits

0x92db,	// (0x000534c1) wml_tabs_3_passive_pane

0x92ec,	// (0x000534d2) wml_tabs_3_passive_pane_cp_ParamLimits

0x92ec,	// (0x000534d2) wml_tabs_3_passive_pane_cp

0x9301,	// (0x000534e7) tabs_4_active_pane

0x9309,	// (0x000534ef) tabs_4_passive_pane

0x9311,	// (0x000534f7) tabs_4_passive_pane_cp

0x9319,	// (0x000534ff) tabs_4_passive_pane_cp2

0x8897,	// (0x00052a7d) aid_height_text

0x7f9f,	// (0x00052185) mup_volume_cont_pane_ParamLimits

0x7f9f,	// (0x00052185) mup_volume_cont_pane

0x5d88,	// (0x0004ff6e) aid_size_cell_pinb

0x5d92,	// (0x0004ff78) aid_size_list_pinb

0x9207,	// (0x000533ed) mup2_volume_cont_pane_ParamLimits

0x9207,	// (0x000533ed) mup2_volume_cont_pane

0x9323,	// (0x00053509) mup2_volume_cont_pane_g1_ParamLimits

0x9323,	// (0x00053509) mup2_volume_cont_pane_g1

0x5a13,	// (0x0004fbf9) aid_size_cell_touch_ParamLimits

0x5a13,	// (0x0004fbf9) aid_size_cell_touch

0x5c6f,	// (0x0004fe55) touch_pane_ParamLimits

0x5c6f,	// (0x0004fe55) touch_pane

0x053e,	// (0x0004a724) main_rss2_pane

0xe93b,	// (0x00058b21) listscroll_rss2_pane

0xe944,	// (0x00058b2a) rss2_navigation_pane

0xe94c,	// (0x00058b32) list_rss2_pane

0x4342,	// (0x0004e528) scroll_pane_cp22

0xe954,	// (0x00058b3a) rss2_navigation_pane_g1

0xe95d,	// (0x00058b43) rss2_navigation_pane_g2

0xe965,	// (0x00058b4b) rss2_navigation_pane_g3

0x0002,

0xf6bf,	// (0x000598a5) rss2_navigation_pane_g

0xe96d,	// (0x00058b53) rss2_navigation_pane_t1

0x935c,	// (0x00053542) rss2_list_single_pane_ParamLimits

0x935c,	// (0x00053542) rss2_list_single_pane

0xe97b,	// (0x00058b61) rss2_list_single_pane_t2

0xe989,	// (0x00058b6f) rss2_list_single_pane_t3_ParamLimits

0xe989,	// (0x00058b6f) rss2_list_single_pane_t3

0xe9a6,	// (0x00058b8c) rss2_list_single_pane_t4

0x7738,	// (0x0005191e) smil_status_pane_g1

0x4a45,	// (0x0004ec2b) main_image2_pane_ParamLimits

0x4a45,	// (0x0004ec2b) main_image2_pane

0x8f1d,	// (0x00053103) main_camera2_pane_g9_ParamLimits

0x8f1d,	// (0x00053103) main_camera2_pane_g9

0x8f71,	// (0x00053157) main_camera2_pane_t5_ParamLimits

0x8f71,	// (0x00053157) main_camera2_pane_t5

0x8f83,	// (0x00053169) main_camera2_pane_t6_ParamLimits

0x8f83,	// (0x00053169) main_camera2_pane_t6

0x9382,	// (0x00053568) main_image2_pane_g1_ParamLimits

0x9382,	// (0x00053568) main_image2_pane_g1

0x8631,	// (0x00052817) smil2_video_pane_ParamLimits

0x8631,	// (0x00052817) smil2_video_pane

0x056c,	// (0x0004a752) aid_zoom_text_primary_cp

0x32dd,	// (0x0004d4c3) popup_preview_fixed_window

0x3cd2,	// (0x0004deb8) im_reading_pane_g1

0x8e67,	// (0x0005304d) cams2_bc_adjust_pane_cp_ParamLimits

0x8e67,	// (0x0005304d) cams2_bc_adjust_pane_cp

0x8fae,	// (0x00053194) cams2_bc_adjust_pane_ParamLimits

0x8fae,	// (0x00053194) cams2_bc_adjust_pane

0xf0f3,	// (0x000592d9) cams2_bc_adjust_pane_g1

0x938e,	// (0x00053574) cams2_slider_pane

0x9397,	// (0x0005357d) cams2_slider_pane_g1

0x93a0,	// (0x00053586) cams2_slider_pane_g2

0x0006,

0xf6c6,	// (0x000598ac) cams2_slider_pane_g

0x5e85,	// (0x0005006b) calc_display_pane_ParamLimits

0x5ea3,	// (0x00050089) calc_paper_pane_ParamLimits

0x5ebf,	// (0x000500a5) grid_calc_pane_ParamLimits

0x79ed,	// (0x00051bd3) popup_clock_digital_window_t1_ParamLimits

0x4701,	// (0x0004e8e7) main_image_pane_t1

0x5e6b,	// (0x00050051) aid_size_cell_calc_ParamLimits

0x5e6b,	// (0x00050051) aid_size_cell_calc

0x8b04,	// (0x00052cea) popup_blid_sat_info2_window_ParamLimits

0x8b04,	// (0x00052cea) popup_blid_sat_info2_window

0xe9bc,	// (0x00058ba2) aid_size_cell_blid

0xe9c4,	// (0x00058baa) bg_popup_window_pane_cp07

0xe9e7,	// (0x00058bcd) grid_popup_blid_pane

0xe9f1,	// (0x00058bd7) heading_pane_cp05_ParamLimits

0xe9f1,	// (0x00058bd7) heading_pane_cp05

0xeabb,	// (0x00058ca1) cell_popup_blid_pane_ParamLimits

0xeabb,	// (0x00058ca1) cell_popup_blid_pane

0xeae5,	// (0x00058ccb) cell_popup_blid_pane_g1

0xeaed,	// (0x00058cd3) cell_popup_blid_pane_t1

0x91cd,	// (0x000533b3) mup2_indicator_pane_ParamLimits

0x91cd,	// (0x000533b3) mup2_indicator_pane

0x447c,	// (0x0004e662) mup2_visualizer_osc_pane

0xe89d,	// (0x00058a83) mup2_visualizer_spec_pane_ParamLimits

0xe89d,	// (0x00058a83) mup2_visualizer_spec_pane

0x93ba,	// (0x000535a0) mup2_spec_half_pane

0x93c3,	// (0x000535a9) mup2_spec_half_pane_cp

0x93cd,	// (0x000535b3) mup2_spec_bar_pane_ParamLimits

0x93cd,	// (0x000535b3) mup2_spec_bar_pane

0xe81b,	// (0x00058a01) mup2_spec_bar_pane_g1

0xe825,	// (0x00058a0b) mup2_spec_bar_pane_g2

0x0001,

0xf639,	// (0x0005981f) mup2_spec_bar_pane_g

0x93ec,	// (0x000535d2) mup2_osc_middle_pane

0xe837,	// (0x00058a1d) mup2_visualizer_osc_pane_g1

0x3307,	// (0x0004d4ed) popup_number_entry_window_t1_ParamLimits

0x331a,	// (0x0004d500) popup_number_entry_window_t2_ParamLimits

0x332c,	// (0x0004d512) popup_number_entry_window_t3_ParamLimits

0x5cc6,	// (0x0004feac) popup_number_entry_window_t5_ParamLimits

0x5cc6,	// (0x0004feac) popup_number_entry_window_t5

0xf0fb,	// (0x000592e1) popup_number_entry_window_t_ParamLimits

0x333e,	// (0x0004d524) text_title_cp2_ParamLimits

0x831b,	// (0x00052501) aid_hotspot_pointer_text2_pane

0x83b5,	// (0x0005259b) main_viewer_pane_g9_ParamLimits

0x83b5,	// (0x0005259b) main_viewer_pane_g9

0x3f01,	// (0x0004e0e7) cale_month_pane_t1_ParamLimits

0x3f3e,	// (0x0004e124) bg_cale_pane_ParamLimits

0x3f56,	// (0x0004e13c) list_cale_pane_ParamLimits

0x3b60,	// (0x0004dd46) listscroll_cale_day_pane_t1

0x3f67,	// (0x0004e14d) scroll_pane_cp09_ParamLimits

0x7fde,	// (0x000521c4) main_mup_eq_pane_t1_ParamLimits

0x7fde,	// (0x000521c4) main_mup_eq_pane_t1

0x7ffa,	// (0x000521e0) main_mup_eq_pane_t2_ParamLimits

0x7ffa,	// (0x000521e0) main_mup_eq_pane_t2

0x8016,	// (0x000521fc) main_mup_eq_pane_t3_ParamLimits

0x8016,	// (0x000521fc) main_mup_eq_pane_t3

0x8030,	// (0x00052216) main_mup_eq_pane_t4_ParamLimits

0x8030,	// (0x00052216) main_mup_eq_pane_t4

0x804a,	// (0x00052230) main_mup_eq_pane_t5_ParamLimits

0x804a,	// (0x00052230) main_mup_eq_pane_t5

0x8064,	// (0x0005224a) main_mup_eq_pane_t6_ParamLimits

0x8064,	// (0x0005224a) main_mup_eq_pane_t6

0x807a,	// (0x00052260) main_mup_eq_pane_t7_ParamLimits

0x807a,	// (0x00052260) main_mup_eq_pane_t7

0x8090,	// (0x00052276) main_mup_eq_pane_t8_ParamLimits

0x8090,	// (0x00052276) main_mup_eq_pane_t8

0x80a6,	// (0x0005228c) main_mup_eq_pane_t9_ParamLimits

0x80a6,	// (0x0005228c) main_mup_eq_pane_t9

0x80c2,	// (0x000522a8) main_mup_eq_pane_t10_ParamLimits

0x80c2,	// (0x000522a8) main_mup_eq_pane_t10

0x0009,

0xf488,	// (0x0005966e) main_mup_eq_pane_t_ParamLimits

0xf488,	// (0x0005966e) main_mup_eq_pane_t

0x8187,	// (0x0005236d) mup_equalizer_pane_cp5_ParamLimits

0x819f,	// (0x00052385) mup_equalizer_pane_cp6_ParamLimits

0x81b7,	// (0x0005239d) mup_equalizer_pane_cp7_ParamLimits

0x053e,	// (0x0004a724) main_gallery_pane

0xe840,	// (0x00058a26) smil2_volume_pane

0xe848,	// (0x00058a2e) smil_status_volume_pane_g1_ParamLimits

0xe85b,	// (0x00058a41) smil_status_volume_pane_g2_ParamLimits

0x8ceb,	// (0x00052ed1) smil_status_volume_pane_g3_ParamLimits

0xf63e,	// (0x00059824) smil_status_volume_pane_g_ParamLimits

0xe9c4,	// (0x00058baa) bg_popup_window_pane_cp07_ParamLimits

0xe9d2,	// (0x00058bb8) blid_firmament_pane

0x93f5,	// (0x000535db) aid_size_cell_gallery_ParamLimits

0x93f5,	// (0x000535db) aid_size_cell_gallery

0x9403,	// (0x000535e9) grid_gallery_pane_ParamLimits

0x9403,	// (0x000535e9) grid_gallery_pane

0x9413,	// (0x000535f9) cell_gallery_pane_ParamLimits

0x9413,	// (0x000535f9) cell_gallery_pane

0xeafb,	// (0x00058ce1) bg_cell_gallery_focus_pane_ParamLimits

0xeafb,	// (0x00058ce1) bg_cell_gallery_focus_pane

0xeb0d,	// (0x00058cf3) cell_gallery_pane_g1_ParamLimits

0xeb0d,	// (0x00058cf3) cell_gallery_pane_g1

0x9461,	// (0x00053647) cell_gallery_pane_g2_ParamLimits

0x9461,	// (0x00053647) cell_gallery_pane_g2

0x946e,	// (0x00053654) cell_gallery_pane_g3_ParamLimits

0x946e,	// (0x00053654) cell_gallery_pane_g3

0xeb19,	// (0x00058cff) cell_gallery_pane_g4_ParamLimits

0xeb19,	// (0x00058cff) cell_gallery_pane_g4

0x0003,

0xf6ec,	// (0x000598d2) cell_gallery_pane_g_ParamLimits

0xf6ec,	// (0x000598d2) cell_gallery_pane_g

0xeb25,	// (0x00058d0b) bg_cell_gallery_focus_pane_g1

0xeb2d,	// (0x00058d13) bg_cell_gallery_focus_pane_g2

0xeb35,	// (0x00058d1b) bg_cell_gallery_focus_pane_g3

0xeb3d,	// (0x00058d23) bg_cell_gallery_focus_pane_g4

0xeb45,	// (0x00058d2b) bg_cell_gallery_focus_pane_g5

0xeb4d,	// (0x00058d33) bg_cell_gallery_focus_pane_g6

0xeb55,	// (0x00058d3b) bg_cell_gallery_focus_pane_g7

0xeb5d,	// (0x00058d43) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6f5,	// (0x000598db) bg_cell_gallery_focus_pane_g

0xeb65,	// (0x00058d4b) aid_firma_cardinal

0xeb79,	// (0x00058d5f) blid_firmament_pane_t1

0xeb90,	// (0x00058d76) blid_firmament_pane_t2

0xeba7,	// (0x00058d8d) blid_firmament_pane_t3

0xebbe,	// (0x00058da4) blid_firmament_pane_t4

0x0003,

0xf706,	// (0x000598ec) blid_firmament_pane_t

0xebd5,	// (0x00058dbb) blid_sat_info_pane

0xebe5,	// (0x00058dcb) blid_sat_info_pane_g1

0xebe5,	// (0x00058dcb) blid_sat_info_pane_g2

0x0001,

0xf70f,	// (0x000598f5) blid_sat_info_pane_g

0xebef,	// (0x00058dd5) blid_sat_info_pane_t1

0xebfd,	// (0x00058de3) smil2_volume_content_pane

0xec06,	// (0x00058dec) smil2_volume_pane_g1

0xec0e,	// (0x00058df4) smil2_volume_content_pane_g1

0xec17,	// (0x00058dfd) smil2_volume_content_pane_g2

0xec20,	// (0x00058e06) smil2_volume_content_pane_g3

0xec29,	// (0x00058e0f) smil2_volume_content_pane_g4

0xec32,	// (0x00058e18) smil2_volume_content_pane_g5

0xec3b,	// (0x00058e21) smil2_volume_content_pane_g6

0xec44,	// (0x00058e2a) smil2_volume_content_pane_g7

0xec4d,	// (0x00058e33) smil2_volume_content_pane_g8

0xec56,	// (0x00058e3c) smil2_volume_content_pane_g9

0xec5f,	// (0x00058e45) smil2_volume_content_pane_g10

0x0009,

0xf714,	// (0x000598fa) smil2_volume_content_pane_g

0x63e9,	// (0x000505cf) cale_week_day_heading_pane_t1_ParamLimits

0x6416,	// (0x000505fc) cale_week_day_heading_pane_t2_ParamLimits

0x6443,	// (0x00050629) cale_week_day_heading_pane_t3_ParamLimits

0x6470,	// (0x00050656) cale_week_day_heading_pane_t4_ParamLimits

0x649d,	// (0x00050683) cale_week_day_heading_pane_t5_ParamLimits

0x64ca,	// (0x000506b0) cale_week_day_heading_pane_t6_ParamLimits

0x64f7,	// (0x000506dd) cale_week_day_heading_pane_t7_ParamLimits

0xf200,	// (0x000593e6) cale_week_day_heading_pane_t_ParamLimits

0x3b72,	// (0x0004dd58) bg_cale_side_pane_ParamLimits

0x6524,	// (0x0005070a) cale_week_time_pane_t1_ParamLimits

0x6550,	// (0x00050736) cale_week_time_pane_t2_ParamLimits

0x657c,	// (0x00050762) cale_week_time_pane_t3_ParamLimits

0x65a8,	// (0x0005078e) cale_week_time_pane_t4_ParamLimits

0x65d4,	// (0x000507ba) cale_week_time_pane_t5_ParamLimits

0x6600,	// (0x000507e6) cale_week_time_pane_t6_ParamLimits

0x662c,	// (0x00050812) cale_week_time_pane_t7_ParamLimits

0x6658,	// (0x0005083e) cale_week_time_pane_t8_ParamLimits

0xf20f,	// (0x000593f5) cale_week_time_pane_t_ParamLimits

0x6684,	// (0x0005086a) cell_cale_week_pane_g2_ParamLimits

0x3b72,	// (0x0004dd58) bg_cale_side_pane_cp01_ParamLimits

0x7535,	// (0x0005171b) cale_month_week_pane_t1_ParamLimits

0x7560,	// (0x00051746) cale_month_week_pane_t2_ParamLimits

0x758b,	// (0x00051771) cale_month_week_pane_t3_ParamLimits

0x75b6,	// (0x0005179c) cale_month_week_pane_t4_ParamLimits

0x75e1,	// (0x000517c7) cale_month_week_pane_t5_ParamLimits

0x760c,	// (0x000517f2) cale_month_week_pane_t6_ParamLimits

0xf2e8,	// (0x000594ce) cale_month_week_pane_t_ParamLimits

0x7705,	// (0x000518eb) cell_cale_month_pane_g1_ParamLimits

0x053e,	// (0x0004a724) main_cale_event_viewer_pane

0x053e,	// (0x0004a724) listscroll_cale_event_viewer_pane

0xec68,	// (0x00058e4e) list_cale_ev_pane

0xec70,	// (0x00058e56) scroll_pane_cp023

0x947b,	// (0x00053661) field_cale_ev_pane_ParamLimits

0x947b,	// (0x00053661) field_cale_ev_pane

0xec7c,	// (0x00058e62) field_cale_ev_content_pane_ParamLimits

0xec7c,	// (0x00058e62) field_cale_ev_content_pane

0xec88,	// (0x00058e6e) field_cale_ev_pane_g1_ParamLimits

0xec88,	// (0x00058e6e) field_cale_ev_pane_g1

0xec94,	// (0x00058e7a) field_cale_ev_pane_g2_ParamLimits

0xec94,	// (0x00058e7a) field_cale_ev_pane_g2

0xecac,	// (0x00058e92) field_cale_ev_pane_g3_ParamLimits

0xecac,	// (0x00058e92) field_cale_ev_pane_g3

0x0002,

0xf729,	// (0x0005990f) field_cale_ev_pane_g_ParamLimits

0xf729,	// (0x0005990f) field_cale_ev_pane_g

0xecc4,	// (0x00058eaa) field_cale_ev_pane_t1_ParamLimits

0xecc4,	// (0x00058eaa) field_cale_ev_pane_t1

0x949f,	// (0x00053685) field_cale_ev_content_pane_t1_ParamLimits

0x949f,	// (0x00053685) field_cale_ev_content_pane_t1

0x45e7,	// (0x0004e7cd) bg_button_pane_cp01

0x3a20,	// (0x0004dc06) listscroll_cale_week_pane_ParamLimits

0x6209,	// (0x000503ef) popup_toolbar_window_cp01

0x3b60,	// (0x0004dd46) listscroll_cale_week_pane_t1_ParamLimits

0x3a20,	// (0x0004dc06) listscroll_cale_day_pane_ParamLimits

0x6209,	// (0x000503ef) popup_toolbar_window_cp02

0x3b60,	// (0x0004dd46) listscroll_cale_day_pane_t1_ParamLimits

0x3a20,	// (0x0004dc06) main_cale_month_pane_ParamLimits

0x8be8,	// (0x00052dce) popup_toolbar_window_cp03_ParamLimits

0x8be8,	// (0x00052dce) popup_toolbar_window_cp03

0x8541,	// (0x00052727) main_image_pane_g2_ParamLimits

0x8541,	// (0x00052727) main_image_pane_g2

0x854d,	// (0x00052733) main_image_pane_g3_ParamLimits

0x854d,	// (0x00052733) main_image_pane_g3

0x0002,

0xf51a,	// (0x00059700) main_image_pane_g_ParamLimits

0xf51a,	// (0x00059700) main_image_pane_g

0x4701,	// (0x0004e8e7) main_image_pane_t1_ParamLimits

0x8559,	// (0x0005273f) main_image_pane_t2_ParamLimits

0x8559,	// (0x0005273f) main_image_pane_t2

0x856b,	// (0x00052751) main_image_pane_t3_ParamLimits

0x856b,	// (0x00052751) main_image_pane_t3

0x857d,	// (0x00052763) main_image_pane_t4_ParamLimits

0x857d,	// (0x00052763) main_image_pane_t4

0x0003,

0xf521,	// (0x00059707) main_image_pane_t_ParamLimits

0xf521,	// (0x00059707) main_image_pane_t

0x858f,	// (0x00052775) popup_image_details_window_cp01

0x8599,	// (0x0005277f) popup_toobar_trans_pane_cp01_ParamLimits

0x8599,	// (0x0005277f) popup_toobar_trans_pane_cp01

0x8b59,	// (0x00052d3f) popup_image_details_window_ParamLimits

0x8b59,	// (0x00052d3f) popup_image_details_window

0xe78c,	// (0x00058972) popup_image_focus_window

0x8e59,	// (0x0005303f) camera2_autofocus_pane_ParamLimits

0x8e59,	// (0x0005303f) camera2_autofocus_pane

0x053e,	// (0x0004a724) bg_popup_sub_pane_cp06

0xecdb,	// (0x00058ec1) popup_image_focus_window_g1

0xece3,	// (0x00058ec9) popup_image_focus_window_g2

0xeceb,	// (0x00058ed1) popup_image_focus_window_g3

0xecf3,	// (0x00058ed9) popup_image_focus_window_g4

0x0003,

0xf730,	// (0x00059916) popup_image_focus_window_g

0xecfb,	// (0x00058ee1) popup_image_focus_window_t1

0xed09,	// (0x00058eef) popup_image_focus_window_t2

0xed19,	// (0x00058eff) popup_image_focus_window_t3

0x0002,

0xf739,	// (0x0005991f) popup_image_focus_window_t

0xed27,	// (0x00058f0d) camera2_autofocus_pane_g1

0x4a45,	// (0x0004ec2b) bg_tb_trans_pane_cp01

0xed35,	// (0x00058f1b) popup_image_details_window_g1

0xed48,	// (0x00058f2e) popup_image_details_window_g2

0x0002,

0xf74b,	// (0x00059931) popup_image_details_window_g

0xed71,	// (0x00058f57) popup_image_details_window_t1

0xed83,	// (0x00058f69) popup_image_details_window_t2

0xed9c,	// (0x00058f82) popup_image_details_window_t3

0xedb0,	// (0x00058f96) popup_image_details_window_t4

0xedcb,	// (0x00058fb1) popup_image_details_window_t5

0x0004,

0xf752,	// (0x00059938) popup_image_details_window_t

0x3a0c,	// (0x0004dbf2) bg_calc_paper_pane_ParamLimits

0x5fb8,	// (0x0005019e) grid_highlight_pane_cp013

0x5fc2,	// (0x000501a8) list_calc_pane_ParamLimits

0x5fd4,	// (0x000501ba) scroll_pane_cp024

0x3a20,	// (0x0004dc06) bg_calc_display_pane_ParamLimits

0x5fdc,	// (0x000501c2) calc_display_pane_t1_ParamLimits

0x5ff1,	// (0x000501d7) calc_display_pane_t2_ParamLimits

0x6006,	// (0x000501ec) calc_display_pane_t3_ParamLimits

0xf182,	// (0x00059368) calc_display_pane_t_ParamLimits

0x60d9,	// (0x000502bf) cell_calc_pane_g2

0x0001,

0xf19f,	// (0x00059385) cell_calc_pane_g

0x60e2,	// (0x000502c8) cell_calc_pane_t1

0x3a7f,	// (0x0004dc65) grid_highlight_pane_cp02_ParamLimits

0x3a95,	// (0x0004dc7b) toolbar_button_pane_cp01_ParamLimits

0x3a95,	// (0x0004dc7b) toolbar_button_pane_cp01

0x4746,	// (0x0004e92c) temp_image_control_pane_ParamLimits

0x4746,	// (0x0004e92c) temp_image_control_pane

0x4a45,	// (0x0004ec2b) main_mp3_pane

0xede5,	// (0x00058fcb) temp_image_control_pane_g1_ParamLimits

0xede5,	// (0x00058fcb) temp_image_control_pane_g1

0xedf3,	// (0x00058fd9) temp_image_control_pane_g2_ParamLimits

0xedf3,	// (0x00058fd9) temp_image_control_pane_g2

0xee05,	// (0x00058feb) temp_image_control_pane_g3_ParamLimits

0xee05,	// (0x00058feb) temp_image_control_pane_g3

0x94ed,	// (0x000536d3) temp_image_control_pane_g4_ParamLimits

0x94ed,	// (0x000536d3) temp_image_control_pane_g4

0x0003,

0xf75d,	// (0x00059943) temp_image_control_pane_g_ParamLimits

0xf75d,	// (0x00059943) temp_image_control_pane_g

0xede5,	// (0x00058fcb) main_mp3_pane_g1

0x94fe,	// (0x000536e4) main_mp3_pane_g2

0x0007,

0xf766,	// (0x0005994c) main_mp3_pane_g

0xee48,	// (0x0005902e) main_mp3_pane_t1

0x3bd7,	// (0x0004ddbd) main_camera_pane_g8_ParamLimits

0x3bd7,	// (0x0004ddbd) main_camera_pane_g8

0x6930,	// (0x00050b16) main_video_pane_g7_ParamLimits

0x6930,	// (0x00050b16) main_video_pane_g7

0x8f9c,	// (0x00053182) main_camera2_pane_t7_ParamLimits

0x8f9c,	// (0x00053182) main_camera2_pane_t7

0x3d29,	// (0x0004df0f) scroll_pane_cp025_ParamLimits

0x3d29,	// (0x0004df0f) scroll_pane_cp025

0x3d3d,	// (0x0004df23) scroll_pane_cp026_ParamLimits

0x3d3d,	// (0x0004df23) scroll_pane_cp026

0x3d4c,	// (0x0004df32) wml_content_pane_ParamLimits

0x053e,	// (0x0004a724) main_touch_calib_pane

0x95a2,	// (0x00053788) main_touch_calib_pane_g1

0x95ae,	// (0x00053794) main_touch_calib_pane_g2

0x95ba,	// (0x000537a0) main_touch_calib_pane_g3

0x95c6,	// (0x000537ac) main_touch_calib_pane_g4

0x0003,

0xf784,	// (0x0005996a) main_touch_calib_pane_g

0x95d2,	// (0x000537b8) main_touch_calib_pane_t1

0x95e9,	// (0x000537cf) main_touch_calib_pane_t2

0x0004,

0xf78d,	// (0x00059973) main_touch_calib_pane_t

0x43bd,	// (0x0004e5a3) mup_progress_pane_cp02

0x43dc,	// (0x0004e5c2) navi_pane_g1

0x443e,	// (0x0004e624) navi_pane_mp_t3

0x4a45,	// (0x0004ec2b) main_mp3_pane_ParamLimits

0x8c2a,	// (0x00052e10) navi_pane_ParamLimits

0xede5,	// (0x00058fcb) main_mp3_pane_g1_ParamLimits

0x94fe,	// (0x000536e4) main_mp3_pane_g2_ParamLimits

0x950a,	// (0x000536f0) main_mp3_pane_g3_ParamLimits

0x950a,	// (0x000536f0) main_mp3_pane_g3

0x9516,	// (0x000536fc) main_mp3_pane_g4_ParamLimits

0x9516,	// (0x000536fc) main_mp3_pane_g4

0xee15,	// (0x00058ffb) main_mp3_pane_g5_ParamLimits

0xee15,	// (0x00058ffb) main_mp3_pane_g5

0xee23,	// (0x00059009) main_mp3_pane_g6_ParamLimits

0xee23,	// (0x00059009) main_mp3_pane_g6

0xee30,	// (0x00059016) main_mp3_pane_g7_ParamLimits

0xee30,	// (0x00059016) main_mp3_pane_g7

0xee3c,	// (0x00059022) main_mp3_pane_g8_ParamLimits

0xee3c,	// (0x00059022) main_mp3_pane_g8

0xf766,	// (0x0005994c) main_mp3_pane_g_ParamLimits

0x9522,	// (0x00053708) main_mp3_pane_t2

0x9532,	// (0x00053718) main_mp3_pane_t3

0xee56,	// (0x0005903c) main_mp3_pane_t4

0xee64,	// (0x0005904a) main_mp3_pane_t5

0x0005,

0xf777,	// (0x0005995d) main_mp3_pane_t

0xee72,	// (0x00059058) mup_progress_pane_cp01

0x056c,	// (0x0004a752) aid_zoom_text_secondary2

0xec68,	// (0x00058e4e) list_cale_ev2_pane

0xec70,	// (0x00058e56) scroll_pane_cp023_ParamLimits

0x9640,	// (0x00053826) field_cale_ev2_pane_ParamLimits

0x9640,	// (0x00053826) field_cale_ev2_pane

0x09c7,	// (0x0004abad) field_cale_ev2_pane_g1_ParamLimits

0x09c7,	// (0x0004abad) field_cale_ev2_pane_g1

0x09d3,	// (0x0004abb9) field_cale_ev2_pane_g2_ParamLimits

0x09d3,	// (0x0004abb9) field_cale_ev2_pane_g2

0x09eb,	// (0x0004abd1) field_cale_ev2_pane_g3_ParamLimits

0x09eb,	// (0x0004abd1) field_cale_ev2_pane_g3

0x0003,

0xf798,	// (0x0005997e) field_cale_ev2_pane_g_ParamLimits

0xf798,	// (0x0005997e) field_cale_ev2_pane_g

0x0a0f,	// (0x0004abf5) field_cale_ev2_pane_t1_ParamLimits

0x0a0f,	// (0x0004abf5) field_cale_ev2_pane_t1

0x0a26,	// (0x0004ac0c) field_cale_ev2_pane_t2_ParamLimits

0x0a26,	// (0x0004ac0c) field_cale_ev2_pane_t2

0x0001,

0xf7a1,	// (0x00059987) field_cale_ev2_pane_t_ParamLimits

0xf7a1,	// (0x00059987) field_cale_ev2_pane_t

0x841d,	// (0x00052603) main_postcard_pane_g5_ParamLimits

0x841d,	// (0x00052603) main_postcard_pane_g5

0x842b,	// (0x00052611) main_postcard_pane_g6_ParamLimits

0x842b,	// (0x00052611) main_postcard_pane_g6

0x676e,	// (0x00050954) camera2_autofocus_pane_cp_ParamLimits

0x676e,	// (0x00050954) camera2_autofocus_pane_cp

0x4a45,	// (0x0004ec2b) main_mup3_pane

0x967e,	// (0x00053864) main_mup3_pane_g1_ParamLimits

0x967e,	// (0x00053864) main_mup3_pane_g1

0x969f,	// (0x00053885) main_mup3_pane_g2_ParamLimits

0x969f,	// (0x00053885) main_mup3_pane_g2

0x971b,	// (0x00053901) main_mup3_pane_g3_ParamLimits

0x971b,	// (0x00053901) main_mup3_pane_g3

0x975c,	// (0x00053942) main_mup3_pane_g4_ParamLimits

0x975c,	// (0x00053942) main_mup3_pane_g4

0x979d,	// (0x00053983) main_mup3_pane_g5_ParamLimits

0x979d,	// (0x00053983) main_mup3_pane_g5

0x97de,	// (0x000539c4) main_mup3_pane_g6_ParamLimits

0x97de,	// (0x000539c4) main_mup3_pane_g6

0xee7a,	// (0x00059060) main_mup3_pane_g7_ParamLimits

0xee7a,	// (0x00059060) main_mup3_pane_g7

0x0007,

0xf7b1,	// (0x00059997) main_mup3_pane_g_ParamLimits

0xf7b1,	// (0x00059997) main_mup3_pane_g

0x9850,	// (0x00053a36) main_mup3_pane_t1_ParamLimits

0x9850,	// (0x00053a36) main_mup3_pane_t1

0x98c3,	// (0x00053aa9) main_mup3_pane_t2_ParamLimits

0x98c3,	// (0x00053aa9) main_mup3_pane_t2

0x9990,	// (0x00053b76) main_mup3_pane_t4_ParamLimits

0x9990,	// (0x00053b76) main_mup3_pane_t4

0x99e4,	// (0x00053bca) main_mup3_pane_t5_ParamLimits

0x99e4,	// (0x00053bca) main_mup3_pane_t5

0x9a90,	// (0x00053c76) main_mup3_pane_t6_ParamLimits

0x9a90,	// (0x00053c76) main_mup3_pane_t6

0x0005,

0xf7c2,	// (0x000599a8) main_mup3_pane_t_ParamLimits

0xf7c2,	// (0x000599a8) main_mup3_pane_t

0x9b38,	// (0x00053d1e) mup3_progress_pane_ParamLimits

0x9b38,	// (0x00053d1e) mup3_progress_pane

0x9ba3,	// (0x00053d89) popup_mup3_control_window_ParamLimits

0x9ba3,	// (0x00053d89) popup_mup3_control_window

0xee88,	// (0x0005906e) popup_mup3_text_window

0x9bc0,	// (0x00053da6) mup3_progress_pane_t1

0x9bd7,	// (0x00053dbd) mup3_progress_pane_t2

0xee90,	// (0x00059076) mup3_progress_pane_t3

0x0002,

0xf7cf,	// (0x000599b5) mup3_progress_pane_t

0xeea7,	// (0x0005908d) mup_progress_pane_cp03

0x053e,	// (0x0004a724) bg_tb_trans_pane_cp04

0x9bee,	// (0x00053dd4) mup3_volume_pane

0x9bf6,	// (0x00053ddc) popup_mup3_control_window_g1

0x1870,	// (0x0004ba56) mup3_volume_pane_g1

0x1879,	// (0x0004ba5f) mup3_volume_pane_g2

0x1882,	// (0x0004ba68) mup3_volume_pane_g3

0x0002,

0xf7d6,	// (0x000599bc) mup3_volume_pane_g

0x053e,	// (0x0004a724) bg_tb_trans_pane_cp03

0xeeb7,	// (0x0005909d) popup_mup3_text_window_g1

0xeebf,	// (0x000590a5) popup_mup3_text_window_t1

0x3a68,	// (0x0004dc4e) list_calc_item_pane_g1_ParamLimits

0xe932,	// (0x00058b18) mup_volume_pane_cp_g1

0x9600,	// (0x000537e6) main_touch_calib_pane_t3

0x9614,	// (0x000537fa) main_touch_calib_pane_t4

0x962a,	// (0x00053810) main_touch_calib_pane_t5

0x0548,	// (0x0004a72e) aid_cell_size_toolbar2

0x0550,	// (0x0004a736) aid_popup3_width_pane

0x055c,	// (0x0004a742) aid_zoom_text_msg_primary

0x6741,	// (0x00050927) vorec_t7

0x3a2c,	// (0x0004dc12) bg_calc_paper_pane_g1_ParamLimits

0x3a44,	// (0x0004dc2a) bg_calc_paper_pane_g2_ParamLimits

0x3a38,	// (0x0004dc1e) bg_calc_paper_pane_g3_ParamLimits

0x3a5c,	// (0x0004dc42) bg_calc_paper_pane_g4_ParamLimits

0x3a50,	// (0x0004dc36) bg_calc_paper_pane_g5_ParamLimits

0x6047,	// (0x0005022d) bg_calc_paper_pane_g6_ParamLimits

0x6058,	// (0x0005023e) bg_calc_paper_pane_g7_ParamLimits

0x6069,	// (0x0005024f) bg_calc_paper_pane_g8_ParamLimits

0xf189,	// (0x0005936f) bg_calc_paper_pane_g_ParamLimits

0x607a,	// (0x00050260) calc_bg_paper_pane_g9_ParamLimits

0x685f,	// (0x00050a45) image_qvga_pane_ParamLimits

0x685f,	// (0x00050a45) image_qvga_pane

0x3955,	// (0x0004db3b) bg_popup_sub_pane_cp04_ParamLimits

0x467d,	// (0x0004e863) popup_mup_playback_window_g1_ParamLimits

0x4689,	// (0x0004e86f) popup_mup_playback_window_t1_ParamLimits

0x469e,	// (0x0004e884) popup_mup_playback_window_t2_ParamLimits

0xf515,	// (0x000596fb) popup_mup_playback_window_t_ParamLimits

0x90cb,	// (0x000532b1) main_mup2_pane_g3_ParamLimits

0x90cb,	// (0x000532b1) main_mup2_pane_g3

0x6afd,	// (0x00050ce3) popup_toolbar_window_cp04

0x4ab3,	// (0x0004ec99) popup_call2_audio_second_window_g3_ParamLimits

0x4ab3,	// (0x0004ec99) popup_call2_audio_second_window_g3

0xdd86,	// (0x00057f6c) popup_call2_audio_first_window_g4_ParamLimits

0xdd86,	// (0x00057f6c) popup_call2_audio_first_window_g4

0xe405,	// (0x000585eb) popup_call2_audio_in_window_g4_ParamLimits

0xe405,	// (0x000585eb) popup_call2_audio_in_window_g4

0x8534,	// (0x0005271a) aid_area_sk_bg_cut_ParamLimits

0x8534,	// (0x0005271a) aid_area_sk_bg_cut

0x46b3,	// (0x0004e899) aid_area_sk_bg_cut_2_ParamLimits

0x46b3,	// (0x0004e899) aid_area_sk_bg_cut_2

0x9451,	// (0x00053637) aid_placing_details_win

0x9459,	// (0x0005363f) aid_placing_details_win_2

0xed27,	// (0x00058f0d) camera2_autofocus_pane_g1_ParamLimits

0x5c1d,	// (0x0004fe03) popup_fixed_preview_cale_window_ParamLimits

0x5c1d,	// (0x0004fe03) popup_fixed_preview_cale_window

0x449f,	// (0x0004e685) navi_slider_pane_g3

0x4496,	// (0x0004e67c) navi_slider_pane_g4

0x448d,	// (0x0004e673) navi_slider_pane_g5

0x449f,	// (0x0004e685) navi_slider_pane_g6

0x7d54,	// (0x00051f3a) navi_slider_pane_g7

0x45b4,	// (0x0004e79a) mup_scale_pane_g3

0x45bd,	// (0x0004e7a3) mup_scale_pane_g4

0x45c6,	// (0x0004e7ac) mup_scale_pane_g5

0x81cf,	// (0x000523b5) mup_scale_pane_g6

0x81d8,	// (0x000523be) mup_scale_pane_g7

0x449f,	// (0x0004e685) cams2_slider_pane_g3

0xe9b4,	// (0x00058b9a) cams2_slider_pane_g4

0x93a9,	// (0x0005358f) cams2_slider_pane_g5

0x449f,	// (0x0004e685) cams2_slider_pane_g6

0x93b1,	// (0x00053597) cams2_slider_pane_g7

0xebe5,	// (0x00058dcb) camera2_autofocus_pane_cp_g1

0xeecd,	// (0x000590b3) bg_popup_preview_window_pane_cp02_ParamLimits

0xeecd,	// (0x000590b3) bg_popup_preview_window_pane_cp02

0xeed9,	// (0x000590bf) list_fp_cale_pane_ParamLimits

0xeed9,	// (0x000590bf) list_fp_cale_pane

0xeee5,	// (0x000590cb) popup_fixed_preview_cale_window_t1_ParamLimits

0xeee5,	// (0x000590cb) popup_fixed_preview_cale_window_t1

0x9bff,	// (0x00053de5) popup_fixed_preview_cale_window_t2_ParamLimits

0x9bff,	// (0x00053de5) popup_fixed_preview_cale_window_t2

0x9c14,	// (0x00053dfa) popup_fixed_preview_cale_window_t3_ParamLimits

0x9c14,	// (0x00053dfa) popup_fixed_preview_cale_window_t3

0x0002,

0xf7dd,	// (0x000599c3) popup_fixed_preview_cale_window_t_ParamLimits

0xf7dd,	// (0x000599c3) popup_fixed_preview_cale_window_t

0x9c29,	// (0x00053e0f) list_single_fp_cale_pane_ParamLimits

0x9c29,	// (0x00053e0f) list_single_fp_cale_pane

0xef03,	// (0x000590e9) list_single_fp_cale_pane_g1_ParamLimits

0xef03,	// (0x000590e9) list_single_fp_cale_pane_g1

0xef0f,	// (0x000590f5) list_single_fp_cale_pane_g2_ParamLimits

0xef0f,	// (0x000590f5) list_single_fp_cale_pane_g2

0x0002,

0xf7e4,	// (0x000599ca) list_single_fp_cale_pane_g_ParamLimits

0xf7e4,	// (0x000599ca) list_single_fp_cale_pane_g

0xef28,	// (0x0005910e) list_single_fp_cale_pane_t1_ParamLimits

0xef28,	// (0x0005910e) list_single_fp_cale_pane_t1

0xef3a,	// (0x00059120) list_single_fp_cale_pane_t2_ParamLimits

0xef3a,	// (0x00059120) list_single_fp_cale_pane_t2

0x0001,

0xf7eb,	// (0x000599d1) list_single_fp_cale_pane_t_ParamLimits

0xf7eb,	// (0x000599d1) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x053e,	// (0x0004a724) main_dialer_pane

0x9c39,	// (0x00053e1f) aid_cell_size_keypad

0x9c43,	// (0x00053e29) dialer_ne_pane

0x9c4d,	// (0x00053e33) grid_dialer_command_1_pane

0x9c55,	// (0x00053e3b) grid_dialer_command_2_pane

0x9c5d,	// (0x00053e43) grid_dialer_keypad_pane

0x9c71,	// (0x00053e57) bg_popup_call_pane_cp06_ParamLimits

0x9c71,	// (0x00053e57) bg_popup_call_pane_cp06

0x9c7d,	// (0x00053e63) dialer_ne_clear_pane_ParamLimits

0x9c7d,	// (0x00053e63) dialer_ne_clear_pane

0xef6d,	// (0x00059153) dialer_ne_pane_g1

0xef75,	// (0x0005915b) dialer_ne_pane_t1_ParamLimits

0xef75,	// (0x0005915b) dialer_ne_pane_t1

0x9c89,	// (0x00053e6f) dialer_ne_pane_t2_ParamLimits

0x9c89,	// (0x00053e6f) dialer_ne_pane_t2

0x9ca6,	// (0x00053e8c) dialer_ne_pane_t3_ParamLimits

0x9ca6,	// (0x00053e8c) dialer_ne_pane_t3

0x0002,

0xf7f0,	// (0x000599d6) dialer_ne_pane_t_ParamLimits

0xf7f0,	// (0x000599d6) dialer_ne_pane_t

0x9cca,	// (0x00053eb0) dialer_ne_pane_t3_copy1_ParamLimits

0x9cca,	// (0x00053eb0) dialer_ne_pane_t3_copy1

0x9cee,	// (0x00053ed4) cell_dialer_keypad_pane_ParamLimits

0x9cee,	// (0x00053ed4) cell_dialer_keypad_pane

0x9d05,	// (0x00053eeb) cell_dialer_command_1_pane_ParamLimits

0x9d05,	// (0x00053eeb) cell_dialer_command_1_pane

0x9d1b,	// (0x00053f01) cell_dialer_command_2_pane_ParamLimits

0x9d1b,	// (0x00053f01) cell_dialer_command_2_pane

0xef87,	// (0x0005916d) bg_button_pane_cp02_ParamLimits

0xef87,	// (0x0005916d) bg_button_pane_cp02

0x9d2a,	// (0x00053f10) cell_dialer_keypad_pane_g1_ParamLimits

0x9d2a,	// (0x00053f10) cell_dialer_keypad_pane_g1

0xef87,	// (0x0005916d) bg_button_pane_cp03_ParamLimits

0xef87,	// (0x0005916d) bg_button_pane_cp03

0x9d3e,	// (0x00053f24) cell_dialer_command_1_pane_g1_ParamLimits

0x9d3e,	// (0x00053f24) cell_dialer_command_1_pane_g1

0xef93,	// (0x00059179) bg_button_pane_cp04

0x9d52,	// (0x00053f38) cell_dialer_command_2_pane_g1

0x447c,	// (0x0004e662) bg_button_pane_cp06

0xef9b,	// (0x00059181) dialer_ne_clear_pane_g1

0x7c97,	// (0x00051e7d) navi_pane_g2

0x7cc5,	// (0x00051eab) navi_pane_g3

0x0002,

0xf418,	// (0x000595fe) navi_pane_g

0x7cf0,	// (0x00051ed6) navi_pane_mv_g2

0x7d17,	// (0x00051efd) navi_pane_mv_g5

0x7d1f,	// (0x00051f05) navi_pane_mv_t1

0x3a20,	// (0x0004dc06) main_clock2_pane

0x9d84,	// (0x00053f6a) main_clock2_list_pane_ParamLimits

0x9d84,	// (0x00053f6a) main_clock2_list_pane

0x9dae,	// (0x00053f94) main_clock2_pane_t1_ParamLimits

0x9dae,	// (0x00053f94) main_clock2_pane_t1

0x9ddc,	// (0x00053fc2) main_clock2_pane_t2_ParamLimits

0x9ddc,	// (0x00053fc2) main_clock2_pane_t2

0x0004,

0xf7f7,	// (0x000599dd) main_clock2_pane_t_ParamLimits

0xf7f7,	// (0x000599dd) main_clock2_pane_t

0x9e45,	// (0x0005402b) popup_clock_analogue_window_cp03_ParamLimits

0x9e45,	// (0x0005402b) popup_clock_analogue_window_cp03

0x9e65,	// (0x0005404b) popup_clock_digital_window_cp02_ParamLimits

0x9e65,	// (0x0005404b) popup_clock_digital_window_cp02

0x9ed6,	// (0x000540bc) main_clock2_list_single_pane_ParamLimits

0x9ed6,	// (0x000540bc) main_clock2_list_single_pane

0x447c,	// (0x0004e662) list_highlight_pane_cp05

0xefa3,	// (0x00059189) main_clock2_list_single_pane_t1

0x6afd,	// (0x00050ce3) popup_toolbar_window_cp04_ParamLimits

0x94bd,	// (0x000536a3) camera2_autofocus_pane_g2_ParamLimits

0x94bd,	// (0x000536a3) camera2_autofocus_pane_g2

0x94c9,	// (0x000536af) camera2_autofocus_pane_g3_ParamLimits

0x94c9,	// (0x000536af) camera2_autofocus_pane_g3

0x94d5,	// (0x000536bb) camera2_autofocus_pane_g4_ParamLimits

0x94d5,	// (0x000536bb) camera2_autofocus_pane_g4

0x94e1,	// (0x000536c7) camera2_autofocus_pane_g5_ParamLimits

0x94e1,	// (0x000536c7) camera2_autofocus_pane_g5

0x0004,

0xf740,	// (0x00059926) camera2_autofocus_pane_g_ParamLimits

0xf740,	// (0x00059926) camera2_autofocus_pane_g

0x965e,	// (0x00053844) camera2_autofocus_pane_cp_g2

0x9666,	// (0x0005384c) camera2_autofocus_pane_cp_g3

0x966e,	// (0x00053854) camera2_autofocus_pane_cp_g4

0x9676,	// (0x0005385c) camera2_autofocus_pane_cp_g5

0x0004,

0xf7a6,	// (0x0005998c) camera2_autofocus_pane_cp_g

0x9c69,	// (0x00053e4f) popup_dialer_spcha_window

0x053e,	// (0x0004a724) bg_popup_sub_pane_cp07

0xefb1,	// (0x00059197) list_spcha_pane

0xefb9,	// (0x0005919f) list_single_spcha_pane_ParamLimits

0xefb9,	// (0x0005919f) list_single_spcha_pane

0x053e,	// (0x0004a724) list_highlight_pane_cp06

0xefca,	// (0x000591b0) list_single_spcha_pane_t1

0xe1af,	// (0x00058395) popup_call2_audio_out_window_g4_ParamLimits

0xe1af,	// (0x00058395) popup_call2_audio_out_window_g4

0x053e,	// (0x0004a724) main_imed2_pane

0xe796,	// (0x0005897c) popup_imed_adjust2_window

0x8b67,	// (0x00052d4d) popup_imed_trans_window_ParamLimits

0x8b67,	// (0x00052d4d) popup_imed_trans_window

0xea1d,	// (0x00058c03) popup_blid_sat_info2_window_t1

0xea2b,	// (0x00058c11) popup_blid_sat_info2_window_t2

0x000a,

0xf6d5,	// (0x000598bb) popup_blid_sat_info2_window_t

0x9f80,	// (0x00054166) aid_size_cell_colour_35

0x9f9a,	// (0x00054180) aid_size_cell_colour_112

0x9fb1,	// (0x00054197) aid_size_cell_effect

0x4a45,	// (0x0004ec2b) bg_tb_trans_pane_cp02

0x4a53,	// (0x0004ec39) heading_imed_pane

0x9fcb,	// (0x000541b1) listscroll_imed_pane

0xefd8,	// (0x000591be) heading_imed_pane_g1

0xefe0,	// (0x000591c6) heading_imed_pane_t1

0xefee,	// (0x000591d4) grid_imed_colour_35_pane_ParamLimits

0xefee,	// (0x000591d4) grid_imed_colour_35_pane

0x9fd7,	// (0x000541bd) grid_imed_effect_pane

0xf00a,	// (0x000591f0) list_imed_aspect_pane

0x9fe7,	// (0x000541cd) scroll_pane_cp027_ParamLimits

0x9fe7,	// (0x000541cd) scroll_pane_cp027

0x9ff3,	// (0x000541d9) cell_imed_effect_pane_ParamLimits

0x9ff3,	// (0x000541d9) cell_imed_effect_pane

0xf012,	// (0x000591f8) cell_imed_colour_pane_ParamLimits

0xf012,	// (0x000591f8) cell_imed_colour_pane

0xf05c,	// (0x00059242) cell_imed_colour_pane_g1_ParamLimits

0xf05c,	// (0x00059242) cell_imed_colour_pane_g1

0xf06d,	// (0x00059253) hgihlgiht_grid_pane_cp016_ParamLimits

0xf06d,	// (0x00059253) hgihlgiht_grid_pane_cp016

0xa00f,	// (0x000541f5) cell_imed_effect_pane_g1

0xa017,	// (0x000541fd) grid_highlight_pane_cp017

0xf07e,	// (0x00059264) list_imed_single_pane_ParamLimits

0xf07e,	// (0x00059264) list_imed_single_pane

0x053e,	// (0x0004a724) list_highlight_pane_cp07

0xf092,	// (0x00059278) list_imed_aspect_pane_comp1_t1

0xe76a,	// (0x00058950) bg_tb_trans_pane_cp05

0xf0b4,	// (0x0005929a) popup_imed_adjust2_window_g1

0xf0db,	// (0x000592c1) popup_imed_adjust2_window_t1

0x0a3b,	// (0x0004ac21) slider_imed_adjust_pane

0x0a4f,	// (0x0004ac35) slider_imed_adjust_pane_g1

0x0a5f,	// (0x0004ac45) slider_imed_adjust_pane_g2

0x0a6f,	// (0x0004ac55) slider_imed_adjust_pane_g3

0x0a80,	// (0x0004ac66) slider_imed_adjust_pane_g4

0x0003,

0xf814,	// (0x000599fa) slider_imed_adjust_pane_g

0xa020,	// (0x00054206) aid_size_cell_clipart2

0xa02c,	// (0x00054212) grid_imed_clipart_pane

0x0a91,	// (0x0004ac77) scroll_pane_cp031

0xa036,	// (0x0005421c) cell_imed_clipart_pane_ParamLimits

0xa036,	// (0x0005421c) cell_imed_clipart_pane

0xa054,	// (0x0005423a) cell_imed_clipart_pane_g1

0x053e,	// (0x0004a724) grid_highlight_pane_cp014

0x9d90,	// (0x00053f76) main_clock2_pane_g1_ParamLimits

0x9d90,	// (0x00053f76) main_clock2_pane_g1

0x9e81,	// (0x00054067) aid_call2_pane_cp10

0x9e93,	// (0x00054079) aid_call_pane_cp10

0x43b1,	// (0x0004e597) popup_clock_analogue_window_cp10_g1

0x43b1,	// (0x0004e597) popup_clock_analogue_window_cp10_g2

0x9ea5,	// (0x0005408b) popup_clock_analogue_window_cp10_g3

0x9ea5,	// (0x0005408b) popup_clock_analogue_window_cp10_g4

0x43b1,	// (0x0004e597) popup_clock_analogue_window_cp10_g5

0x0004,

0xf802,	// (0x000599e8) popup_clock_analogue_window_cp10_g

0x9eb7,	// (0x0005409d) popup_clock_analogue_window_cp10_t1

0x9ee8,	// (0x000540ce) clock_digital_number_pane_cp10_ParamLimits

0x9ee8,	// (0x000540ce) clock_digital_number_pane_cp10

0x9f00,	// (0x000540e6) clock_digital_number_pane_cp11_ParamLimits

0x9f00,	// (0x000540e6) clock_digital_number_pane_cp11

0x9f18,	// (0x000540fe) clock_digital_number_pane_cp12_ParamLimits

0x9f18,	// (0x000540fe) clock_digital_number_pane_cp12

0x9f30,	// (0x00054116) clock_digital_number_pane_cp13_ParamLimits

0x9f30,	// (0x00054116) clock_digital_number_pane_cp13

0x9f48,	// (0x0005412e) clock_digital_separator_pane_cp10_ParamLimits

0x9f48,	// (0x0005412e) clock_digital_separator_pane_cp10

0x9f60,	// (0x00054146) popup_clock_digital_window_cp02_t1_ParamLimits

0x9f60,	// (0x00054146) popup_clock_digital_window_cp02_t1

0x394d,	// (0x0004db33) clock_digital_number_pane_cp10_g1

0x394d,	// (0x0004db33) clock_digital_number_pane_cp10_g2

0x0001,

0xf81d,	// (0x00059a03) clock_digital_number_pane_cp10_g

0x394d,	// (0x0004db33) clock_digital_separator_pane_cp10_g1

0x394d,	// (0x0004db33) clock_digital_separator_pane_g2_cp10

0x444c,	// (0x0004e632) navi_pane_vded_g4

0x4455,	// (0x0004e63b) navi_pane_vded_g5

0x445e,	// (0x0004e644) navi_pane_vded_t1

0x053e,	// (0x0004a724) main_vded_pane

0xa05d,	// (0x00054243) main_vded_pane_g1

0xa069,	// (0x0005424f) main_vded_pane_g2

0xa073,	// (0x00054259) main_vded_pane_g3

0x0002,

0xf822,	// (0x00059a08) main_vded_pane_g

0xa07d,	// (0x00054263) main_vded_pane_t1

0xa08b,	// (0x00054271) main_vded_pane_t2

0x0001,

0xf829,	// (0x00059a0f) main_vded_pane_t

0xa099,	// (0x0005427f) vded_slider_pane

0xa0a3,	// (0x00054289) vded_video_pane

0x0a99,	// (0x0004ac7f) vded_video_pane_g1

0xa0af,	// (0x00054295) vded_video_pane_g2

0xebe5,	// (0x00058dcb) vded_video_pane_g3

0x0002,

0xf82e,	// (0x00059a14) vded_video_pane_g

0x0aa3,	// (0x0004ac89) vded_slider_pane_g1

0xe932,	// (0x00058b18) vded_slider_pane_g2

0x0aac,	// (0x0004ac92) vded_slider_pane_g3

0x0ab5,	// (0x0004ac9b) vded_slider_pane_g4

0x0abe,	// (0x0004aca4) vded_slider_pane_g5

0x0004,

0xf835,	// (0x00059a1b) vded_slider_pane_g

0x9b97,	// (0x00053d7d) mup3_rocker_pane_ParamLimits

0x9b97,	// (0x00053d7d) mup3_rocker_pane

0xa0b8,	// (0x0005429e) mup3_control_keys_pane_g1

0xa0c0,	// (0x000542a6) mup3_control_keys_pane_g2

0xa0c8,	// (0x000542ae) mup3_control_keys_pane_g3

0xa0d0,	// (0x000542b6) mup3_control_keys_pane_g4

0x0003,

0xf840,	// (0x00059a26) mup3_control_keys_pane_g

0x5c3b,	// (0x0004fe21) popup_toolbar2_fixed_window_cp01_ParamLimits

0x5c3b,	// (0x0004fe21) popup_toolbar2_fixed_window_cp01

0x9bb3,	// (0x00053d99) popup_toolbar2_fixed_window_cp02_ParamLimits

0x9bb3,	// (0x00053d99) popup_toolbar2_fixed_window_cp02

0xdaee,	// (0x00057cd4) popup_call2_audio_second_window_t4_ParamLimits

0xdaee,	// (0x00057cd4) popup_call2_audio_second_window_t4

0xe01c,	// (0x00058202) popup_call2_audio_first_window_t6_ParamLimits

0xe01c,	// (0x00058202) popup_call2_audio_first_window_t6

0xe2b2,	// (0x00058498) popup_call2_audio_out_window_t6_ParamLimits

0xe2b2,	// (0x00058498) popup_call2_audio_out_window_t6

0x053e,	// (0x0004a724) main_vitu_pane

0xa0e0,	// (0x000542c6) aid_size_cell_itu_ParamLimits

0xa0e0,	// (0x000542c6) aid_size_cell_itu

0x1105,	// (0x0004b2eb) bg_popup_window_pane_cp08_ParamLimits

0x1105,	// (0x0004b2eb) bg_popup_window_pane_cp08

0xa0ee,	// (0x000542d4) field_vitu_entry_pane_ParamLimits

0xa0ee,	// (0x000542d4) field_vitu_entry_pane

0xa0fd,	// (0x000542e3) grid_vitu_function_pane_ParamLimits

0xa0fd,	// (0x000542e3) grid_vitu_function_pane

0xa10d,	// (0x000542f3) grid_vitu_itu_pane_ParamLimits

0xa10d,	// (0x000542f3) grid_vitu_itu_pane

0xa11d,	// (0x00054303) cell_vitu_itu_pane_ParamLimits

0xa11d,	// (0x00054303) cell_vitu_itu_pane

0xa134,	// (0x0005431a) cell_vitu_function_pane_ParamLimits

0xa134,	// (0x0005431a) cell_vitu_function_pane

0x4a45,	// (0x0004ec2b) bg_popup_sub_pane_cp08_ParamLimits

0x4a45,	// (0x0004ec2b) bg_popup_sub_pane_cp08

0xa148,	// (0x0005432e) field_vitu_entry_pane_t1_ParamLimits

0xa148,	// (0x0005432e) field_vitu_entry_pane_t1

0x0adf,	// (0x0004acc5) field_vitu_entry_pane_t2_ParamLimits

0x0adf,	// (0x0004acc5) field_vitu_entry_pane_t2

0x0001,

0xf84e,	// (0x00059a34) field_vitu_entry_pane_t_ParamLimits

0xf84e,	// (0x00059a34) field_vitu_entry_pane_t

0x0afc,	// (0x0004ace2) bg_button_pane_cp05_ParamLimits

0x0afc,	// (0x0004ace2) bg_button_pane_cp05

0xa162,	// (0x00054348) cell_vitu_itu_pane_g1

0xa17a,	// (0x00054360) cell_vitu_itu_pane_t1_ParamLimits

0xa17a,	// (0x00054360) cell_vitu_itu_pane_t1

0xa18c,	// (0x00054372) cell_vitu_itu_pane_t2_ParamLimits

0xa18c,	// (0x00054372) cell_vitu_itu_pane_t2

0x0002,

0xf853,	// (0x00059a39) cell_vitu_itu_pane_t_ParamLimits

0xf853,	// (0x00059a39) cell_vitu_itu_pane_t

0x0b0a,	// (0x0004acf0) bg_button_pane_cp07

0xa1c1,	// (0x000543a7) cell_vitu_function_pane_g1

0x5ee3,	// (0x000500c9) main_calc_pane_g1

0x5a3b,	// (0x0004fc21) aid_visual_content_pane

0x053e,	// (0x0004a724) main_vradio_pane

0xa1ca,	// (0x000543b0) main_vradio_pane_g1_ParamLimits

0xa1ca,	// (0x000543b0) main_vradio_pane_g1

0x0b14,	// (0x0004acfa) main_vradio_pane_g2_ParamLimits

0x0b14,	// (0x0004acfa) main_vradio_pane_g2

0x0001,

0xf85a,	// (0x00059a40) main_vradio_pane_g_ParamLimits

0xf85a,	// (0x00059a40) main_vradio_pane_g

0xa1d8,	// (0x000543be) main_vradio_pane_t1_ParamLimits

0xa1d8,	// (0x000543be) main_vradio_pane_t1

0xa1ea,	// (0x000543d0) main_vradio_pane_t2_ParamLimits

0xa1ea,	// (0x000543d0) main_vradio_pane_t2

0x0b21,	// (0x0004ad07) main_vradio_pane_t3_ParamLimits

0x0b21,	// (0x0004ad07) main_vradio_pane_t3

0x0002,

0xf85f,	// (0x00059a45) main_vradio_pane_t_ParamLimits

0xf85f,	// (0x00059a45) main_vradio_pane_t

0xa1fc,	// (0x000543e2) vradio_rocker_control_pane_ParamLimits

0xa1fc,	// (0x000543e2) vradio_rocker_control_pane

0xa208,	// (0x000543ee) vradio_station_info_pane_ParamLimits

0xa208,	// (0x000543ee) vradio_station_info_pane

0x0b35,	// (0x0004ad1b) vradio_frequency_info_pane_ParamLimits

0x0b35,	// (0x0004ad1b) vradio_frequency_info_pane

0xebe5,	// (0x00058dcb) vradio_station_info_pane_g1

0x0b44,	// (0x0004ad2a) vradio_station_info_pane_t1_ParamLimits

0x0b44,	// (0x0004ad2a) vradio_station_info_pane_t1

0x0b66,	// (0x0004ad4c) vradio_station_info_pane_t2_ParamLimits

0x0b66,	// (0x0004ad4c) vradio_station_info_pane_t2

0x0001,

0xf866,	// (0x00059a4c) vradio_station_info_pane_t_ParamLimits

0xf866,	// (0x00059a4c) vradio_station_info_pane_t

0x0b78,	// (0x0004ad5e) vradio_tuning_pane

0x0b80,	// (0x0004ad66) vradio_rocker_control_pane_g1

0x0b88,	// (0x0004ad6e) vradio_rocker_control_pane_g2

0x0b90,	// (0x0004ad76) vradio_rocker_control_pane_g3

0x0b98,	// (0x0004ad7e) vradio_rocker_control_pane_g4

0x0ba0,	// (0x0004ad86) vradio_rocker_control_pane_g5

0x0004,

0xf86b,	// (0x00059a51) vradio_rocker_control_pane_g

0xa215,	// (0x000543fb) vradio_frequency_info_pane_g1

0x0ba8,	// (0x0004ad8e) vradio_frequency_info_pane_t1_ParamLimits

0x0ba8,	// (0x0004ad8e) vradio_frequency_info_pane_t1

0xa21f,	// (0x00054405) vradio_tuning_pane_g1

0xa22a,	// (0x00054410) vradio_tuning_pane_t1

0x0574,	// (0x0004a75a) area_side_right_pane_ParamLimits

0x0574,	// (0x0004a75a) area_side_right_pane

0xe731,	// (0x00058917) status_small_pane_g1

0xe739,	// (0x0005891f) status_small_pane_g2

0xe742,	// (0x00058928) status_small_pane_g3

0xe74b,	// (0x00058931) status_small_pane_g4

0x0003,

0xf62b,	// (0x00059811) status_small_pane_g

0xe754,	// (0x0005893a) status_small_pane_t1

0x053e,	// (0x0004a724) main_video3_pane

0x0bbc,	// (0x0004ada2) cams_zoom_vslider_pane

0x0bc4,	// (0x0004adaa) image3_wide_pane_ParamLimits

0x0bc4,	// (0x0004adaa) image3_wide_pane

0x0bde,	// (0x0004adc4) image3_wide_small_pane

0x0bea,	// (0x0004add0) main_video3_pane_g1_ParamLimits

0x0bea,	// (0x0004add0) main_video3_pane_g1

0x0c06,	// (0x0004adec) main_video3_pane_g2_ParamLimits

0x0c06,	// (0x0004adec) main_video3_pane_g2

0x0001,

0xf876,	// (0x00059a5c) main_video3_pane_g_ParamLimits

0xf876,	// (0x00059a5c) main_video3_pane_g

0x0c22,	// (0x0004ae08) main_video3_pane_t1_ParamLimits

0x0c22,	// (0x0004ae08) main_video3_pane_t1

0x0c4d,	// (0x0004ae33) main_video3_pane_t2_ParamLimits

0x0c4d,	// (0x0004ae33) main_video3_pane_t2

0x0c7a,	// (0x0004ae60) main_video3_pane_t3_ParamLimits

0x0c7a,	// (0x0004ae60) main_video3_pane_t3

0x0002,

0xf87b,	// (0x00059a61) main_video3_pane_t_ParamLimits

0xf87b,	// (0x00059a61) main_video3_pane_t

0x0ca7,	// (0x0004ae8d) cams_zoom_vslider_pane_g1

0x0cb0,	// (0x0004ae96) cams_zoom_vslider_pane_g2

0x0001,

0xf882,	// (0x00059a68) cams_zoom_vslider_pane_g

0x0cb8,	// (0x0004ae9e) small_slider_vertical_pane

0xebe5,	// (0x00058dcb) small_slider_vertical_pane_g1

0xebe5,	// (0x00058dcb) small_slider_vertical_pane_g2

0x0cc0,	// (0x0004aea6) small_slider_vertical_pane_g3

0x0002,

0xf887,	// (0x00059a6d) small_slider_vertical_pane_g

0x053e,	// (0x0004a724) main_hwr_training_pane

0x0cc9,	// (0x0004aeaf) hwr_training_instruct_pane_ParamLimits

0x0cc9,	// (0x0004aeaf) hwr_training_instruct_pane

0xa239,	// (0x0005441f) hwr_training_navi_pane_ParamLimits

0xa239,	// (0x0005441f) hwr_training_navi_pane

0xa253,	// (0x00054439) hwr_training_write_pane_ParamLimits

0xa253,	// (0x00054439) hwr_training_write_pane

0x053e,	// (0x0004a724) bg_frame_shadow_pane

0x0d00,	// (0x0004aee6) hwr_training_write_pane_g1

0x0d08,	// (0x0004aeee) hwr_training_write_pane_g2

0x0d10,	// (0x0004aef6) hwr_training_write_pane_g3

0x0d18,	// (0x0004aefe) hwr_training_write_pane_g4

0x0d20,	// (0x0004af06) hwr_training_write_pane_g5

0x0d28,	// (0x0004af0e) hwr_training_write_pane_g6

0x0d30,	// (0x0004af16) hwr_training_write_pane_g7

0x0006,

0xf88e,	// (0x00059a74) hwr_training_write_pane_g

0xa28b,	// (0x00054471) hwr_training_navi_pane_g1_ParamLimits

0xa28b,	// (0x00054471) hwr_training_navi_pane_g1

0xa29d,	// (0x00054483) hwr_training_navi_pane_g2_ParamLimits

0xa29d,	// (0x00054483) hwr_training_navi_pane_g2

0xa2af,	// (0x00054495) hwr_training_navi_pane_g3_ParamLimits

0xa2af,	// (0x00054495) hwr_training_navi_pane_g3

0xa2bf,	// (0x000544a5) hwr_training_navi_pane_g4_ParamLimits

0xa2bf,	// (0x000544a5) hwr_training_navi_pane_g4

0x0004,

0xf89d,	// (0x00059a83) hwr_training_navi_pane_g_ParamLimits

0xf89d,	// (0x00059a83) hwr_training_navi_pane_g

0xa2d9,	// (0x000544bf) hwr_training_navi_pane_t1

0xa2e7,	// (0x000544cd) list_single_hwr_training_instruct_pane_ParamLimits

0xa2e7,	// (0x000544cd) list_single_hwr_training_instruct_pane

0x0d87,	// (0x0004af6d) list_single_hwr_training_instruct_pane_t1

0xeb25,	// (0x00058d0b) bg_frame_shadow_pane_g1

0x0d96,	// (0x0004af7c) bg_frame_shadow_pane_g2

0x0d9e,	// (0x0004af84) bg_frame_shadow_pane_g3

0x0da6,	// (0x0004af8c) bg_frame_shadow_pane_g4

0x0dae,	// (0x0004af94) bg_frame_shadow_pane_g5

0x0db6,	// (0x0004af9c) bg_frame_shadow_pane_g6

0x0dbe,	// (0x0004afa4) bg_frame_shadow_pane_g7

0x3aeb,	// (0x0004dcd1) bg_frame_shadow_pane_g8

0x0007,

0xf8a8,	// (0x00059a8e) bg_frame_shadow_pane_g

0x053e,	// (0x0004a724) main_video_tele_dialer_pane

0xa306,	// (0x000544ec) aid_size_cell_video_keypad_ParamLimits

0xa306,	// (0x000544ec) aid_size_cell_video_keypad

0xa316,	// (0x000544fc) grid_video_dialer_keypad_pane_ParamLimits

0xa316,	// (0x000544fc) grid_video_dialer_keypad_pane

0xa34a,	// (0x00054530) video_down_pane_cp_ParamLimits

0xa34a,	// (0x00054530) video_down_pane_cp

0xa374,	// (0x0005455a) cell_video_dialer_keypad_pane_ParamLimits

0xa374,	// (0x0005455a) cell_video_dialer_keypad_pane

0x0dc6,	// (0x0004afac) bg_button_pane_cp08_ParamLimits

0x0dc6,	// (0x0004afac) bg_button_pane_cp08

0xa38b,	// (0x00054571) cell_video_dialer_keypad_pane_g1_ParamLimits

0xa38b,	// (0x00054571) cell_video_dialer_keypad_pane_g1

0x9b8b,	// (0x00053d71) mup3_rocker2_pane_ParamLimits

0x9b8b,	// (0x00053d71) mup3_rocker2_pane

0xebe5,	// (0x00058dcb) mup3_rocker2_pane_g1

0x8ae9,	// (0x00052ccf) main_dialer2_pane

0x053e,	// (0x0004a724) main_mp4_pane

0xa3ce,	// (0x000545b4) main_mp4_pane_g1_ParamLimits

0xa3ce,	// (0x000545b4) main_mp4_pane_g1

0xa3dc,	// (0x000545c2) main_mp4_pane_g2_ParamLimits

0xa3dc,	// (0x000545c2) main_mp4_pane_g2

0xa3ea,	// (0x000545d0) main_mp4_pane_g3_ParamLimits

0xa3ea,	// (0x000545d0) main_mp4_pane_g3

0xa43d,	// (0x00054623) main_mp4_pane_g4_ParamLimits

0xa43d,	// (0x00054623) main_mp4_pane_g4

0xa457,	// (0x0005463d) main_mp4_pane_g5_ParamLimits

0xa457,	// (0x0005463d) main_mp4_pane_g5

0x0005,

0xf8c8,	// (0x00059aae) main_mp4_pane_g_ParamLimits

0xf8c8,	// (0x00059aae) main_mp4_pane_g

0xa48b,	// (0x00054671) main_mp4_pane_t1_ParamLimits

0xa48b,	// (0x00054671) main_mp4_pane_t1

0xa4e7,	// (0x000546cd) main_mp4_pane_t2_ParamLimits

0xa4e7,	// (0x000546cd) main_mp4_pane_t2

0x0ee4,	// (0x0004b0ca) main_mp4_pane_t3_ParamLimits

0x0ee4,	// (0x0004b0ca) main_mp4_pane_t3

0xa539,	// (0x0005471f) main_mp4_pane_t4_ParamLimits

0xa539,	// (0x0005471f) main_mp4_pane_t4

0x0003,

0xf8d5,	// (0x00059abb) main_mp4_pane_t_ParamLimits

0xf8d5,	// (0x00059abb) main_mp4_pane_t

0xa579,	// (0x0005475f) mp4_progress_pane_ParamLimits

0xa579,	// (0x0005475f) mp4_progress_pane

0xa5c3,	// (0x000547a9) mp4_rocker_pane_ParamLimits

0xa5c3,	// (0x000547a9) mp4_rocker_pane

0x0fb8,	// (0x0004b19e) mp4_progress_pane_t1

0x0fd1,	// (0x0004b1b7) mp4_progress_pane_t2

0x0001,

0xf8de,	// (0x00059ac4) mp4_progress_pane_t

0x0fea,	// (0x0004b1d0) mup_progress_pane_cp04

0x18e7,	// (0x0004bacd) mp4_rocker_pane_g1

0xa5e5,	// (0x000547cb) aid_cell_size_keypad2_ParamLimits

0xa5e5,	// (0x000547cb) aid_cell_size_keypad2

0xa5f5,	// (0x000547db) dialer2_ne_pane_ParamLimits

0xa5f5,	// (0x000547db) dialer2_ne_pane

0xa601,	// (0x000547e7) grid_dialer2_keypad_pane_ParamLimits

0xa601,	// (0x000547e7) grid_dialer2_keypad_pane

0x1942,	// (0x0004bb28) bg_popup_call_pane_cp07_ParamLimits

0x1942,	// (0x0004bb28) bg_popup_call_pane_cp07

0xa60f,	// (0x000547f5) dialer2_ne_pane_t1_ParamLimits

0xa60f,	// (0x000547f5) dialer2_ne_pane_t1

0xa634,	// (0x0005481a) cell_dialer2_keypad_pane_ParamLimits

0xa634,	// (0x0005481a) cell_dialer2_keypad_pane

0x1008,	// (0x0004b1ee) bg_button_pane_pane_cp04_ParamLimits

0x1008,	// (0x0004b1ee) bg_button_pane_pane_cp04

0xa64b,	// (0x00054831) cell_dialer2_keypad_pane_g1_ParamLimits

0xa64b,	// (0x00054831) cell_dialer2_keypad_pane_g1

0x6a38,	// (0x00050c1e) aid_placing_vt_set_content_ParamLimits

0x6a38,	// (0x00050c1e) aid_placing_vt_set_content

0x6a52,	// (0x00050c38) aid_placing_vt_set_title_ParamLimits

0x6a52,	// (0x00050c38) aid_placing_vt_set_title

0x053e,	// (0x0004a724) main_image3_pane

0xa6e5,	// (0x000548cb) area_side_right_pane_cp01_ParamLimits

0xa6e5,	// (0x000548cb) area_side_right_pane_cp01

0xa714,	// (0x000548fa) main_image3_pane_g1_ParamLimits

0xa714,	// (0x000548fa) main_image3_pane_g1

0xa722,	// (0x00054908) main_image3_pane_g2_ParamLimits

0xa722,	// (0x00054908) main_image3_pane_g2

0xa73b,	// (0x00054921) main_image3_pane_g3_ParamLimits

0xa73b,	// (0x00054921) main_image3_pane_g3

0xa754,	// (0x0005493a) main_image3_pane_g4_ParamLimits

0xa754,	// (0x0005493a) main_image3_pane_g4

0x0003,

0xf8ed,	// (0x00059ad3) main_image3_pane_g_ParamLimits

0xf8ed,	// (0x00059ad3) main_image3_pane_g

0xa76d,	// (0x00054953) main_image3_pane_t1_ParamLimits

0xa76d,	// (0x00054953) main_image3_pane_t1

0xa792,	// (0x00054978) main_image3_pane_t2_ParamLimits

0xa792,	// (0x00054978) main_image3_pane_t2

0xa7b1,	// (0x00054997) main_image3_pane_t3_ParamLimits

0xa7b1,	// (0x00054997) main_image3_pane_t3

0x0003,

0xf8f6,	// (0x00059adc) main_image3_pane_t_ParamLimits

0xf8f6,	// (0x00059adc) main_image3_pane_t

0x1105,	// (0x0004b2eb) grid_sctrl_middle_pane_cp01_ParamLimits

0x1105,	// (0x0004b2eb) grid_sctrl_middle_pane_cp01

0xa812,	// (0x000549f8) cell_sctrl_middle_pane_cp01_ParamLimits

0xa812,	// (0x000549f8) cell_sctrl_middle_pane_cp01

0xa823,	// (0x00054a09) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xa823,	// (0x00054a09) cell_sctrl_middle_pane_cp01_g1

0x053e,	// (0x0004a724) main_call4_pane

0xa830,	// (0x00054a16) aid_size_button_call4_ParamLimits

0xa830,	// (0x00054a16) aid_size_button_call4

0xa862,	// (0x00054a48) call4_windows_pane_ParamLimits

0xa862,	// (0x00054a48) call4_windows_pane

0xa87e,	// (0x00054a64) grid_call4_button_pane_ParamLimits

0xa87e,	// (0x00054a64) grid_call4_button_pane

0x1014,	// (0x0004b1fa) call4_windows_conf_pane

0x102f,	// (0x0004b215) popup_call4_audio_first_window_ParamLimits

0x102f,	// (0x0004b215) popup_call4_audio_first_window

0x107d,	// (0x0004b263) popup_call4_audio_second_window_ParamLimits

0x107d,	// (0x0004b263) popup_call4_audio_second_window

0x1093,	// (0x0004b279) popup_call4_audio_wait_window_ParamLimits

0x1093,	// (0x0004b279) popup_call4_audio_wait_window

0xa8a2,	// (0x00054a88) cell_call4_button_pane_ParamLimits

0xa8a2,	// (0x00054a88) cell_call4_button_pane

0xa8c5,	// (0x00054aab) bg_button_pane_cp09_ParamLimits

0xa8c5,	// (0x00054aab) bg_button_pane_cp09

0xa8d1,	// (0x00054ab7) cell_call4_button_pane_g1_ParamLimits

0xa8d1,	// (0x00054ab7) cell_call4_button_pane_g1

0xa8de,	// (0x00054ac4) cell_call4_button_pane_t1_ParamLimits

0xa8de,	// (0x00054ac4) cell_call4_button_pane_t1

0x10db,	// (0x0004b2c1) popup_call4_audio_conf_window_ParamLimits

0x10db,	// (0x0004b2c1) popup_call4_audio_conf_window

0x9bc0,	// (0x00053da6) mup3_progress_pane_t1_ParamLimits

0x9bd7,	// (0x00053dbd) mup3_progress_pane_t2_ParamLimits

0xee90,	// (0x00059076) mup3_progress_pane_t3_ParamLimits

0xf7cf,	// (0x000599b5) mup3_progress_pane_t_ParamLimits

0xeea7,	// (0x0005908d) mup_progress_pane_cp03_ParamLimits

0xa0d8,	// (0x000542be) mup3_control_keys_pane_g4_copy1

0xa5a7,	// (0x0005478d) mp4_rocker2_pane_ParamLimits

0xa5a7,	// (0x0005478d) mp4_rocker2_pane

0x10fd,	// (0x0004b2e3) mp4_rocker2_pane_g1

0x10f5,	// (0x0004b2db) mp4_rocker2_pane_g2

0xa8f0,	// (0x00054ad6) mp4_rocker2_pane_g3

0xa8f8,	// (0x00054ade) mp4_rocker2_pane_g4

0xa900,	// (0x00054ae6) mp4_rocker2_pane_g5

0x0004,

0xf8ff,	// (0x00059ae5) mp4_rocker2_pane_g

0x053e,	// (0x0004a724) main_camera4_pane

0x053e,	// (0x0004a724) main_video4_pane

0xa326,	// (0x0005450c) main_video_tele_dialer_pane_t1_ParamLimits

0xa326,	// (0x0005450c) main_video_tele_dialer_pane_t1

0xa338,	// (0x0005451e) main_video_tele_dialer_pane_t2_ParamLimits

0xa338,	// (0x0005451e) main_video_tele_dialer_pane_t2

0x0001,

0xf8b9,	// (0x00059a9f) main_video_tele_dialer_pane_t_ParamLimits

0xf8b9,	// (0x00059a9f) main_video_tele_dialer_pane_t

0xa920,	// (0x00054b06) cam4_autofocus_pane_ParamLimits

0xa920,	// (0x00054b06) cam4_autofocus_pane

0xa92c,	// (0x00054b12) cam4_image_uncrop_pane_ParamLimits

0xa92c,	// (0x00054b12) cam4_image_uncrop_pane

0xa945,	// (0x00054b2b) cam4_indicators_pane_ParamLimits

0xa945,	// (0x00054b2b) cam4_indicators_pane

0xa961,	// (0x00054b47) main_camera4_pane_g1_ParamLimits

0xa961,	// (0x00054b47) main_camera4_pane_g1

0xa96d,	// (0x00054b53) main_camera4_pane_g2_ParamLimits

0xa96d,	// (0x00054b53) main_camera4_pane_g2

0xa96d,	// (0x00054b53) main_camera4_pane_g3_ParamLimits

0xa96d,	// (0x00054b53) main_camera4_pane_g3

0xa979,	// (0x00054b5f) main_camera4_pane_g4_ParamLimits

0xa979,	// (0x00054b5f) main_camera4_pane_g4

0xa985,	// (0x00054b6b) main_camera4_pane_g5_ParamLimits

0xa985,	// (0x00054b6b) main_camera4_pane_g5

0x0005,

0xf90a,	// (0x00059af0) main_camera4_pane_g_ParamLimits

0xf90a,	// (0x00059af0) main_camera4_pane_g

0xa99f,	// (0x00054b85) main_camera4_pane_t1_ParamLimits

0xa99f,	// (0x00054b85) main_camera4_pane_t1

0xa9e9,	// (0x00054bcf) bg_tb_trans_pane_cp06

0xa9ff,	// (0x00054be5) cam4_indicators_pane_g1

0xaa0c,	// (0x00054bf2) cam4_indicators_pane_g2

0x0002,

0xf925,	// (0x00059b0b) cam4_indicators_pane_g

0xaa2c,	// (0x00054c12) cam4_indicators_pane_t1

0xaa56,	// (0x00054c3c) main_video4_pane_g1_ParamLimits

0xaa56,	// (0x00054c3c) main_video4_pane_g1

0xaa62,	// (0x00054c48) main_video4_pane_g2_ParamLimits

0xaa62,	// (0x00054c48) main_video4_pane_g2

0xaa6e,	// (0x00054c54) main_video4_pane_g3_ParamLimits

0xaa6e,	// (0x00054c54) main_video4_pane_g3

0xaa7a,	// (0x00054c60) main_video4_pane_g4_ParamLimits

0xaa7a,	// (0x00054c60) main_video4_pane_g4

0x0004,

0xf92c,	// (0x00059b12) main_video4_pane_g_ParamLimits

0xf92c,	// (0x00059b12) main_video4_pane_g

0xaa9c,	// (0x00054c82) vid4_indicators_pane_ParamLimits

0xaa9c,	// (0x00054c82) vid4_indicators_pane

0xaaba,	// (0x00054ca0) video4_image_uncrop_cif_pane_ParamLimits

0xaaba,	// (0x00054ca0) video4_image_uncrop_cif_pane

0xaac9,	// (0x00054caf) video4_image_uncrop_nhd_pane_ParamLimits

0xaac9,	// (0x00054caf) video4_image_uncrop_nhd_pane

0xa92c,	// (0x00054b12) video4_image_uncrop_vga_pane_ParamLimits

0xa92c,	// (0x00054b12) video4_image_uncrop_vga_pane

0xaad8,	// (0x00054cbe) bg_tb_trans_pane_cp07

0xa9ff,	// (0x00054be5) vid4_indicators_pane_g1

0xaaf0,	// (0x00054cd6) vid4_indicators_pane_g2

0xaafd,	// (0x00054ce3) vid4_indicators_pane_g3

0x0004,

0xf937,	// (0x00059b1d) vid4_indicators_pane_g

0xab2a,	// (0x00054d10) vid4_indicators_pane_t1

0xab44,	// (0x00054d2a) cam4_autofocus_pane_g1

0xab4c,	// (0x00054d32) cam4_autofocus_pane_g2

0xab54,	// (0x00054d3a) cam4_autofocus_pane_g3

0x0002,

0xf942,	// (0x00059b28) cam4_autofocus_pane_g

0xab5c,	// (0x00054d42) cam4_autofocus_pane_g3_copy1

0xa358,	// (0x0005453e) video_down_pane_cp_t1

0xa366,	// (0x0005454c) video_down_pane_cp_t2

0x0001,

0xf8be,	// (0x00059aa4) video_down_pane_cp_t

0x1105,	// (0x0004b2eb) popup_vitu2_window_ParamLimits

0x1105,	// (0x0004b2eb) popup_vitu2_window

0xab64,	// (0x00054d4a) aid_size_cell2_itu2_ParamLimits

0xab64,	// (0x00054d4a) aid_size_cell2_itu2

0xab86,	// (0x00054d6c) aid_size_cell_itu2_ParamLimits

0xab86,	// (0x00054d6c) aid_size_cell_itu2

0xabca,	// (0x00054db0) bg_popup_window_pane_cp09_ParamLimits

0xabca,	// (0x00054db0) bg_popup_window_pane_cp09

0xabd8,	// (0x00054dbe) field_vitu2_entry_pane_ParamLimits

0xabd8,	// (0x00054dbe) field_vitu2_entry_pane

0xabf8,	// (0x00054dde) grid_vitu2_function_pane_ParamLimits

0xabf8,	// (0x00054dde) grid_vitu2_function_pane

0xac3c,	// (0x00054e22) grid_vitu2_itu_pane_ParamLimits

0xac3c,	// (0x00054e22) grid_vitu2_itu_pane

0xacb0,	// (0x00054e96) cell_vitu2_itu_pane_ParamLimits

0xacb0,	// (0x00054e96) cell_vitu2_itu_pane

0xacc7,	// (0x00054ead) cell_vitu2_function_pane_ParamLimits

0xacc7,	// (0x00054ead) cell_vitu2_function_pane

0x1113,	// (0x0004b2f9) bg_popup_call_pane_cp08_ParamLimits

0x1113,	// (0x0004b2f9) bg_popup_call_pane_cp08

0x112c,	// (0x0004b312) field_vitu2_entry_pane_g1

0x1138,	// (0x0004b31e) field_vitu2_entry_pane_g2

0x0002,

0xf949,	// (0x00059b2f) field_vitu2_entry_pane_g

0x1152,	// (0x0004b338) field_vitu2_entry_pane_t1_ParamLimits

0x1152,	// (0x0004b338) field_vitu2_entry_pane_t1

0x116f,	// (0x0004b355) field_vitu2_entry_pane_t2_ParamLimits

0x116f,	// (0x0004b355) field_vitu2_entry_pane_t2

0x0001,

0xf950,	// (0x00059b36) field_vitu2_entry_pane_t_ParamLimits

0xf950,	// (0x00059b36) field_vitu2_entry_pane_t

0xad0b,	// (0x00054ef1) bg_button_pane_cp010_ParamLimits

0xad0b,	// (0x00054ef1) bg_button_pane_cp010

0xad19,	// (0x00054eff) cell_vitu2_itu_pane_g1

0xad37,	// (0x00054f1d) cell_vitu2_itu_pane_t1_ParamLimits

0xad37,	// (0x00054f1d) cell_vitu2_itu_pane_t1

0x5940,	// (0x0004fb26) cell_vitu2_itu_pane_t2_ParamLimits

0x5940,	// (0x0004fb26) cell_vitu2_itu_pane_t2

0x0002,

0xf95a,	// (0x00059b40) cell_vitu2_itu_pane_t_ParamLimits

0xf95a,	// (0x00059b40) cell_vitu2_itu_pane_t

0xaad8,	// (0x00054cbe) bg_button_pane_cp011

0xad89,	// (0x00054f6f) cell_vitu2_function_pane_g1

0x053e,	// (0x0004a724) main_myfav_hc_pane

0xa7f3,	// (0x000549d9) popup_image3_note_pane_ParamLimits

0xa7f3,	// (0x000549d9) popup_image3_note_pane

0xa801,	// (0x000549e7) popup_image3_tool_bar_pane_ParamLimits

0xa801,	// (0x000549e7) popup_image3_tool_bar_pane

0x59ae,	// (0x0004fb94) cell_vitu2_itu_pane_t3_ParamLimits

0x59ae,	// (0x0004fb94) cell_vitu2_itu_pane_t3

0x053e,	// (0x0004a724) bg_popup_trans_pane

0x1194,	// (0x0004b37a) grid_image3_tool_bar_pane

0x119e,	// (0x0004b384) bg_popup_trans_pane_g1

0x3e32,	// (0x0004e018) bg_popup_trans_pane_g2

0x11a6,	// (0x0004b38c) bg_popup_trans_pane_g3

0x11ae,	// (0x0004b394) bg_popup_trans_pane_g4

0x11b6,	// (0x0004b39c) bg_popup_trans_pane_g5

0x11be,	// (0x0004b3a4) bg_popup_trans_pane_g6

0x11c6,	// (0x0004b3ac) bg_popup_trans_pane_g7

0x11ce,	// (0x0004b3b4) bg_popup_trans_pane_g8

0x3e12,	// (0x0004dff8) bg_popup_trans_pane_g9

0x0008,

0xf961,	// (0x00059b47) bg_popup_trans_pane_g

0x11d6,	// (0x0004b3bc) cell_image3_tool_bar_pane_ParamLimits

0x11d6,	// (0x0004b3bc) cell_image3_tool_bar_pane

0xebe5,	// (0x00058dcb) cell_image3_tool_bar_pane_g1

0x053e,	// (0x0004a724) bg_popup_trans_pane_cp1

0x11ec,	// (0x0004b3d2) popup_image3_note_pane_t1

0x11fa,	// (0x0004b3e0) popup_image3_note_pane_t2

0x1208,	// (0x0004b3ee) popup_image3_note_pane_t3

0x0002,

0xf974,	// (0x00059b5a) popup_image3_note_pane_t

0x1218,	// (0x0004b3fe) popup_image3_note_pane_t3_copy1

0xad9d,	// (0x00054f83) bg_myfav_hc_instruction_pane_ParamLimits

0xad9d,	// (0x00054f83) bg_myfav_hc_instruction_pane

0xadb5,	// (0x00054f9b) cell_myfav_contact_pane_ParamLimits

0xadb5,	// (0x00054f9b) cell_myfav_contact_pane

0xadcf,	// (0x00054fb5) cell_myfav_contact_pane_cp1_ParamLimits

0xadcf,	// (0x00054fb5) cell_myfav_contact_pane_cp1

0xade7,	// (0x00054fcd) cell_myfav_contact_pane_cp2_ParamLimits

0xade7,	// (0x00054fcd) cell_myfav_contact_pane_cp2

0xadff,	// (0x00054fe5) cell_myfav_contact_pane_cp3_ParamLimits

0xadff,	// (0x00054fe5) cell_myfav_contact_pane_cp3

0xae16,	// (0x00054ffc) cell_myfav_contact_pane_cp4_ParamLimits

0xae16,	// (0x00054ffc) cell_myfav_contact_pane_cp4

0xae2c,	// (0x00055012) cell_myfav_contact_pane_cp5_ParamLimits

0xae2c,	// (0x00055012) cell_myfav_contact_pane_cp5

0xae40,	// (0x00055026) cell_myfav_contact_pane_cp6_ParamLimits

0xae40,	// (0x00055026) cell_myfav_contact_pane_cp6

0xae54,	// (0x0005503a) cell_myfav_contact_pane_cp7_ParamLimits

0xae54,	// (0x0005503a) cell_myfav_contact_pane_cp7

0x1226,	// (0x0004b40c) listscroll_gen_pane_cp05

0xae6c,	// (0x00055052) main_myfav_hc_pane_g1_ParamLimits

0xae6c,	// (0x00055052) main_myfav_hc_pane_g1

0xae86,	// (0x0005506c) main_myfav_hc_pane_g2_ParamLimits

0xae86,	// (0x0005506c) main_myfav_hc_pane_g2

0x0002,

0xf97b,	// (0x00059b61) main_myfav_hc_pane_g_ParamLimits

0xf97b,	// (0x00059b61) main_myfav_hc_pane_g

0xaeb8,	// (0x0005509e) main_myfav_hc_pane_t1_ParamLimits

0xaeb8,	// (0x0005509e) main_myfav_hc_pane_t1

0x122f,	// (0x0004b415) main_myfav_hc_pane_t2_ParamLimits

0x122f,	// (0x0004b415) main_myfav_hc_pane_t2

0x1241,	// (0x0004b427) main_myfav_hc_pane_t3_ParamLimits

0x1241,	// (0x0004b427) main_myfav_hc_pane_t3

0xaecf,	// (0x000550b5) main_myfav_hc_pane_t4_ParamLimits

0xaecf,	// (0x000550b5) main_myfav_hc_pane_t4

0x0004,

0xf982,	// (0x00059b68) main_myfav_hc_pane_t_ParamLimits

0xf982,	// (0x00059b68) main_myfav_hc_pane_t

0xebe5,	// (0x00058dcb) bg_myfav_hc_instruction_pane_g1

0x1253,	// (0x0004b439) cell_myfav_contact_pane_g1_ParamLimits

0x1253,	// (0x0004b439) cell_myfav_contact_pane_g1

0x1253,	// (0x0004b439) cell_myfav_contact_pane_g2_ParamLimits

0x1253,	// (0x0004b439) cell_myfav_contact_pane_g2

0x125f,	// (0x0004b445) cell_myfav_contact_pane_g3_ParamLimits

0x125f,	// (0x0004b445) cell_myfav_contact_pane_g3

0xee7a,	// (0x00059060) cell_myfav_contact_pane_g4_ParamLimits

0xee7a,	// (0x00059060) cell_myfav_contact_pane_g4

0x126c,	// (0x0004b452) cell_myfav_contact_pane_g5_ParamLimits

0x126c,	// (0x0004b452) cell_myfav_contact_pane_g5

0x0004,

0xf98d,	// (0x00059b73) cell_myfav_contact_pane_g_ParamLimits

0xf98d,	// (0x00059b73) cell_myfav_contact_pane_g

0xaea0,	// (0x00055086) main_myfav_hc_pane_g3_ParamLimits

0xaea0,	// (0x00055086) main_myfav_hc_pane_g3

0x5b7e,	// (0x0004fd64) popup_adpt_find_window

0xaef9,	// (0x000550df) afind_page_pane_ParamLimits

0xaef9,	// (0x000550df) afind_page_pane

0xaf06,	// (0x000550ec) aid_size_cell_afind_ParamLimits

0xaf06,	// (0x000550ec) aid_size_cell_afind

0xaf20,	// (0x00055106) bg_popup_sub_pane_cp09_ParamLimits

0xaf20,	// (0x00055106) bg_popup_sub_pane_cp09

0xaf2d,	// (0x00055113) find_pane_cp01_ParamLimits

0xaf2d,	// (0x00055113) find_pane_cp01

0x1278,	// (0x0004b45e) grid_afind_control_pane_ParamLimits

0x1278,	// (0x0004b45e) grid_afind_control_pane

0xaf3a,	// (0x00055120) grid_afind_pane_ParamLimits

0xaf3a,	// (0x00055120) grid_afind_pane

0xaf56,	// (0x0005513c) cell_afind_pane_ParamLimits

0xaf56,	// (0x0005513c) cell_afind_pane

0xebe5,	// (0x00058dcb) afind_page_pane_g1

0xafa2,	// (0x00055188) afind_page_pane_g2

0xafab,	// (0x00055191) afind_page_pane_g3

0x0002,

0xf998,	// (0x00059b7e) afind_page_pane_g

0xafb4,	// (0x0005519a) afind_page_pane_t1

0x128c,	// (0x0004b472) cell_afind_grid_control_pane_ParamLimits

0x128c,	// (0x0004b472) cell_afind_grid_control_pane

0x1008,	// (0x0004b1ee) bg_button_pane_cp69_ParamLimits

0x1008,	// (0x0004b1ee) bg_button_pane_cp69

0xafd4,	// (0x000551ba) cell_afind_pane_g1_ParamLimits

0xafd4,	// (0x000551ba) cell_afind_pane_g1

0xafe1,	// (0x000551c7) cell_afind_pane_t1_ParamLimits

0xafe1,	// (0x000551c7) cell_afind_pane_t1

0x3c21,	// (0x0004de07) bg_button_pane_cp72

0x129b,	// (0x0004b481) cell_afind_grid_control_pane_g1

0x8661,	// (0x00052847) aid_image_placing_area_ParamLimits

0x8661,	// (0x00052847) aid_image_placing_area

0x0ac7,	// (0x0004acad) field_vitu_entry_pane_g1_ParamLimits

0x0ac7,	// (0x0004acad) field_vitu_entry_pane_g1

0x0ad3,	// (0x0004acb9) field_vitu_entry_pane_g2_ParamLimits

0x0ad3,	// (0x0004acb9) field_vitu_entry_pane_g2

0x0001,

0xf849,	// (0x00059a2f) field_vitu_entry_pane_g_ParamLimits

0xf849,	// (0x00059a2f) field_vitu_entry_pane_g

0xa162,	// (0x00054348) cell_vitu_itu_pane_g1_ParamLimits

0xa1a4,	// (0x0005438a) cell_vitu_itu_pane_t3_ParamLimits

0xa1a4,	// (0x0005438a) cell_vitu_itu_pane_t3

0x0fb8,	// (0x0004b19e) mp4_progress_pane_t1_ParamLimits

0x0fd1,	// (0x0004b1b7) mp4_progress_pane_t2_ParamLimits

0xf8de,	// (0x00059ac4) mp4_progress_pane_t_ParamLimits

0x0fea,	// (0x0004b1d0) mup_progress_pane_cp04_ParamLimits

0xaee3,	// (0x000550c9) main_myfav_hc_pane_t5_ParamLimits

0xaee3,	// (0x000550c9) main_myfav_hc_pane_t5

0x0564,	// (0x0004a74a) aid_zoom_text_primary

0x5b7e,	// (0x0004fd64) popup_adpt_find_window_ParamLimits

0x4a45,	// (0x0004ec2b) main_cam_set_pane

0xa953,	// (0x00054b39) cam4_zoom_pane_ParamLimits

0xa953,	// (0x00054b39) cam4_zoom_pane

0xaff3,	// (0x000551d9) main_cam_set_pane_g1_ParamLimits

0xaff3,	// (0x000551d9) main_cam_set_pane_g1

0xb001,	// (0x000551e7) main_cam_set_pane_g2_ParamLimits

0xb001,	// (0x000551e7) main_cam_set_pane_g2

0x0001,

0xf99f,	// (0x00059b85) main_cam_set_pane_g_ParamLimits

0xf99f,	// (0x00059b85) main_cam_set_pane_g

0xb00d,	// (0x000551f3) main_cam_set_pane_t1_ParamLimits

0xb00d,	// (0x000551f3) main_cam_set_pane_t1

0xb029,	// (0x0005520f) main_cset_listscroll_pane_ParamLimits

0xb029,	// (0x0005520f) main_cset_listscroll_pane

0xb058,	// (0x0005523e) main_cset_slider_pane_ParamLimits

0xb058,	// (0x0005523e) main_cset_slider_pane

0x12ac,	// (0x0004b492) main_cset_list_pane_ParamLimits

0x12ac,	// (0x0004b492) main_cset_list_pane

0x12bc,	// (0x0004b4a2) scroll_pane_cp028

0xb079,	// (0x0005525f) aid_area_touch_slider

0xb095,	// (0x0005527b) cset_slider_pane

0xb0bf,	// (0x000552a5) main_cset_slider_pane_g1

0xb0d4,	// (0x000552ba) main_cset_slider_pane_g2

0x0011,

0xf9a4,	// (0x00059b8a) main_cset_slider_pane_g

0x12f5,	// (0x0004b4db) main_cset_slider_pane_t1

0xb190,	// (0x00055376) main_cset_slider_pane_t2

0xb1aa,	// (0x00055390) main_cset_slider_pane_t3

0xb1c4,	// (0x000553aa) main_cset_slider_pane_t4

0xb1de,	// (0x000553c4) main_cset_slider_pane_t5

0xb1fa,	// (0x000553e0) main_cset_slider_pane_t6

0xb20f,	// (0x000553f5) main_cset_slider_pane_t7

0x000e,

0xf9c9,	// (0x00059baf) main_cset_slider_pane_t

0xb313,	// (0x000554f9) cset_list_set_pane_ParamLimits

0xb313,	// (0x000554f9) cset_list_set_pane

0xb324,	// (0x0005550a) aid_position_infowindow_above

0xb32c,	// (0x00055512) aid_position_infowindow_below

0x1395,	// (0x0004b57b) cset_list_set_pane_g1_ParamLimits

0x1395,	// (0x0004b57b) cset_list_set_pane_g1

0x1b4c,	// (0x0004bd32) cset_list_set_pane_g3_ParamLimits

0x1b4c,	// (0x0004bd32) cset_list_set_pane_g3

0x0001,

0xf9e8,	// (0x00059bce) cset_list_set_pane_g_ParamLimits

0xf9e8,	// (0x00059bce) cset_list_set_pane_g

0x13a1,	// (0x0004b587) cset_list_set_pane_t1_ParamLimits

0x13a1,	// (0x0004b587) cset_list_set_pane_t1

0x4a45,	// (0x0004ec2b) list_highlight_pane_cp021_ParamLimits

0x4a45,	// (0x0004ec2b) list_highlight_pane_cp021

0x45b4,	// (0x0004e79a) cset_slider_pane_g1

0x45c6,	// (0x0004e7ac) cset_slider_pane_g2

0x45bd,	// (0x0004e7a3) cset_slider_pane_g3

0x0002,

0xf9ed,	// (0x00059bd3) cset_slider_pane_g

0xb334,	// (0x0005551a) aid_area_touch_cam4_zoom

0xb33c,	// (0x00055522) cam4_zoom_cont_pane

0xb344,	// (0x0005552a) cam4_zoom_pane_g1

0xb34c,	// (0x00055532) cam4_zoom_pane_g2

0xb354,	// (0x0005553a) cam4_zoom_pane_g3

0x0002,

0xf9f4,	// (0x00059bda) cam4_zoom_pane_g

0xb35c,	// (0x00055542) cam4_zoom_cont_pane_g1

0xb365,	// (0x0005554b) cam4_zoom_cont_pane_g2

0xb36e,	// (0x00055554) cam4_zoom_cont_pane_g3

0x0002,

0xf9fb,	// (0x00059be1) cam4_zoom_cont_pane_g

0xa84a,	// (0x00054a30) call4_image_pane_ParamLimits

0xa84a,	// (0x00054a30) call4_image_pane

0x1014,	// (0x0004b1fa) call4_windows_conf_pane_ParamLimits

0x105b,	// (0x0004b241) popup_call4_audio_in_window_ParamLimits

0x105b,	// (0x0004b241) popup_call4_audio_in_window

0x053e,	// (0x0004a724) bg_popup_call2_act_pane_cp02

0x10d3,	// (0x0004b2b9) call4_list_conf_pane

0xebe5,	// (0x00058dcb) call4_image_pane_g1

0xebe5,	// (0x00058dcb) call4_image_pane_g2

0x0001,

0xf70f,	// (0x000598f5) call4_image_pane_g

0x13d1,	// (0x0004b5b7) list_single_graphic_popup_conf4_pane_ParamLimits

0x13d1,	// (0x0004b5b7) list_single_graphic_popup_conf4_pane

0x053e,	// (0x0004a724) list_highlight_pane_cp022

0x13e6,	// (0x0004b5cc) list_single_graphic_popup_conf4_pane_g1

0x42ae,	// (0x0004e494) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xfa02,	// (0x00059be8) list_single_graphic_popup_conf4_pane_g

0x13ee,	// (0x0004b5d4) list_single_graphic_popup_conf4_pane_t1

0x6b51,	// (0x00050d37) popup_vtel_slider_window_ParamLimits

0x6b51,	// (0x00050d37) popup_vtel_slider_window

0x0ff6,	// (0x0004b1dc) dialer2_ne_pane_t2_ParamLimits

0x0ff6,	// (0x0004b1dc) dialer2_ne_pane_t2

0x0001,

0xf8e3,	// (0x00059ac9) dialer2_ne_pane_t_ParamLimits

0xf8e3,	// (0x00059ac9) dialer2_ne_pane_t

0x4a45,	// (0x0004ec2b) bg_popup_sub_pane_cp010_ParamLimits

0x4a45,	// (0x0004ec2b) bg_popup_sub_pane_cp010

0xb377,	// (0x0005555d) popup_vtel_slider_window_g1_ParamLimits

0xb377,	// (0x0005555d) popup_vtel_slider_window_g1

0xb383,	// (0x00055569) popup_vtel_slider_window_g2_ParamLimits

0xb383,	// (0x00055569) popup_vtel_slider_window_g2

0x0003,

0xfa07,	// (0x00059bed) popup_vtel_slider_window_g_ParamLimits

0xfa07,	// (0x00059bed) popup_vtel_slider_window_g

0xb3cb,	// (0x000555b1) vtel_slider_pane_ParamLimits

0xb3cb,	// (0x000555b1) vtel_slider_pane

0xb3da,	// (0x000555c0) vtel_slider_pane_g1_ParamLimits

0xb3da,	// (0x000555c0) vtel_slider_pane_g1

0xb3e7,	// (0x000555cd) vtel_slider_pane_g2_ParamLimits

0xb3e7,	// (0x000555cd) vtel_slider_pane_g2

0xb3f4,	// (0x000555da) vtel_slider_pane_g3_ParamLimits

0xb3f4,	// (0x000555da) vtel_slider_pane_g3

0xb3da,	// (0x000555c0) vtel_slider_pane_g4_ParamLimits

0xb3da,	// (0x000555c0) vtel_slider_pane_g4

0xb401,	// (0x000555e7) vtel_slider_pane_g5_ParamLimits

0xb401,	// (0x000555e7) vtel_slider_pane_g5

0x0004,

0xfa10,	// (0x00059bf6) vtel_slider_pane_g_ParamLimits

0xfa10,	// (0x00059bf6) vtel_slider_pane_g

0x053e,	// (0x0004a724) main_gallery2_pane

0xabac,	// (0x00054d92) aid_size_row_itut2_dropdow_list_ParamLimits

0xabac,	// (0x00054d92) aid_size_row_itut2_dropdow_list

0xac1a,	// (0x00054e00) grid_vitu2_function_top_pane_ParamLimits

0xac1a,	// (0x00054e00) grid_vitu2_function_top_pane

0xac6c,	// (0x00054e52) popup_vitu2_dropdown_list_window_ParamLimits

0xac6c,	// (0x00054e52) popup_vitu2_dropdown_list_window

0xac8c,	// (0x00054e72) popup_vitu2_match_list_window

0xb40e,	// (0x000555f4) cell_vitu2_function_top_pane_ParamLimits

0xb40e,	// (0x000555f4) cell_vitu2_function_top_pane

0xb42e,	// (0x00055614) cell_vitu2_function_top_pane_cp01_ParamLimits

0xb42e,	// (0x00055614) cell_vitu2_function_top_pane_cp01

0xb44c,	// (0x00055632) cell_vitu2_function_top_wide_pane_ParamLimits

0xb44c,	// (0x00055632) cell_vitu2_function_top_wide_pane

0xaad8,	// (0x00054cbe) bg_button_pane_cp012

0xb46a,	// (0x00055650) cell_vitu2_function_top_pane_g1

0xb479,	// (0x0005565f) bg_button_pane_cp013_ParamLimits

0xb479,	// (0x0005565f) bg_button_pane_cp013

0xb495,	// (0x0005567b) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xb495,	// (0x0005567b) cell_vitu2_function_top_wide_pane_g1

0xb4ad,	// (0x00055693) bg_popup_sub_pane_cp20

0xb4bb,	// (0x000556a1) list_vitu2_match_list_pane

0x119e,	// (0x0004b384) bg_popup_sub_pane_cp20_g1

0x11a6,	// (0x0004b38c) bg_popup_sub_pane_cp20_g2

0x3e32,	// (0x0004e018) bg_popup_sub_pane_cp20_g3

0x11ae,	// (0x0004b394) bg_popup_sub_pane_cp20_g4

0x3e12,	// (0x0004dff8) bg_popup_sub_pane_cp20_g5

0x140a,	// (0x0004b5f0) bg_popup_sub_pane_cp20_g6

0x11be,	// (0x0004b3a4) bg_popup_sub_pane_cp20_g7

0x11c6,	// (0x0004b3ac) bg_popup_sub_pane_cp20_g8

0x11ce,	// (0x0004b3b4) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa1b,	// (0x00059c01) bg_popup_sub_pane_cp20_g

0xb4d3,	// (0x000556b9) list_vitu2_match_list_item_pane_ParamLimits

0xb4d3,	// (0x000556b9) list_vitu2_match_list_item_pane

0xb4e5,	// (0x000556cb) list_vitu2_match_list_item_pane_t1

0x5fb8,	// (0x0005019e) bg_popup_sub_pane_cp21

0xb51f,	// (0x00055705) grid_vitu2_dropdown_list_pane

0xb527,	// (0x0005570d) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xb527,	// (0x0005570d) cell_vitu2_dropdown_list_char_pane

0xb54c,	// (0x00055732) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xb54c,	// (0x00055732) cell_vitu2_dropdown_list_ctrl_pane

0x143c,	// (0x0004b622) cell_vitu2_dropdown_list_char_pane_g1

0x1433,	// (0x0004b619) cell_vitu2_dropdown_list_char_pane_g2

0x142a,	// (0x0004b610) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa38,	// (0x00059c1e) cell_vitu2_dropdown_list_char_pane_g

0xb57a,	// (0x00055760) cell_vitu2_dropdown_list_char_pane_t1

0xb588,	// (0x0005576e) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xb588,	// (0x0005576e) cell_vitu2_dropdown_list_ctrl_pane_g1

0xb598,	// (0x0005577e) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xb598,	// (0x0005577e) cell_vitu2_dropdown_list_ctrl_pane_g2

0xb5a9,	// (0x0005578f) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xb5a9,	// (0x0005578f) cell_vitu2_dropdown_list_ctrl_pane_g3

0xb5b9,	// (0x0005579f) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xb5b9,	// (0x0005579f) cell_vitu2_dropdown_list_ctrl_pane_g4

0xa9e9,	// (0x00054bcf) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xa9e9,	// (0x00054bcf) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa3f,	// (0x00059c25) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa3f,	// (0x00059c25) cell_vitu2_dropdown_list_ctrl_pane_g

0xb5d2,	// (0x000557b8) aid_size_cell_gallery2_ParamLimits

0xb5d2,	// (0x000557b8) aid_size_cell_gallery2

0xb5e0,	// (0x000557c6) grid_gallery2_pane_ParamLimits

0xb5e0,	// (0x000557c6) grid_gallery2_pane

0xb5ef,	// (0x000557d5) scroll_pane_cp029_ParamLimits

0xb5ef,	// (0x000557d5) scroll_pane_cp029

0xb5fb,	// (0x000557e1) cell_gallery2_pane_ParamLimits

0xb5fb,	// (0x000557e1) cell_gallery2_pane

0x1445,	// (0x0004b62b) cell_gallery2_pane_g2

0xb625,	// (0x0005580b) cell_gallery2_pane_g3

0x144f,	// (0x0004b635) cell_gallery2_pane_g4

0x1457,	// (0x0004b63d) cell_gallery2_pane_g5

0x447c,	// (0x0004e662) grid_highlight_pane_cp10

0xac8c,	// (0x00054e72) popup_vitu2_match_list_window_ParamLimits

0xaca0,	// (0x00054e86) popup_vitu2_query_window_ParamLimits

0xaca0,	// (0x00054e86) popup_vitu2_query_window

0x5fb8,	// (0x0005019e) bg_vitu2_candi_button_pane

0x143c,	// (0x0004b622) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x1433,	// (0x0004b619) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x142a,	// (0x0004b610) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xb62d,	// (0x00055813) bg_button_pane_cp015

0xb637,	// (0x0005581d) bg_button_pane_cp016

0xb641,	// (0x00055827) bg_button_pane_cp017

0x4a45,	// (0x0004ec2b) bg_popup_sub_pane_cp22

0x145f,	// (0x0004b645) popup_vitu2_query_window_g1

0xb669,	// (0x0005584f) popup_vitu2_query_window_g2

0x0001,

0xfa4a,	// (0x00059c30) popup_vitu2_query_window_g

0xb677,	// (0x0005585d) popup_vitu2_query_window_t1_ParamLimits

0xb677,	// (0x0005585d) popup_vitu2_query_window_t1

0xb69f,	// (0x00055885) popup_vitu2_query_window_t2_ParamLimits

0xb69f,	// (0x00055885) popup_vitu2_query_window_t2

0xb6b1,	// (0x00055897) popup_vitu2_query_window_t3_ParamLimits

0xb6b1,	// (0x00055897) popup_vitu2_query_window_t3

0xb6d9,	// (0x000558bf) popup_vitu2_query_window_t4_ParamLimits

0xb6d9,	// (0x000558bf) popup_vitu2_query_window_t4

0xb6ef,	// (0x000558d5) popup_vitu2_query_window_t5_ParamLimits

0xb6ef,	// (0x000558d5) popup_vitu2_query_window_t5

0x0004,

0xfa4f,	// (0x00059c35) popup_vitu2_query_window_t_ParamLimits

0xfa4f,	// (0x00059c35) popup_vitu2_query_window_t

0x12a4,	// (0x0004b48a) main_cset_text_pane

0xb079,	// (0x0005525f) aid_area_touch_slider_ParamLimits

0xb095,	// (0x0005527b) cset_slider_pane_ParamLimits

0xb0bf,	// (0x000552a5) main_cset_slider_pane_g1_ParamLimits

0xb0d4,	// (0x000552ba) main_cset_slider_pane_g2_ParamLimits

0x12c5,	// (0x0004b4ab) main_cset_slider_pane_g3_ParamLimits

0x12c5,	// (0x0004b4ab) main_cset_slider_pane_g3

0xb0e9,	// (0x000552cf) main_cset_slider_pane_g4_ParamLimits

0xb0e9,	// (0x000552cf) main_cset_slider_pane_g4

0xb0f8,	// (0x000552de) main_cset_slider_pane_g5_ParamLimits

0xb0f8,	// (0x000552de) main_cset_slider_pane_g5

0xb104,	// (0x000552ea) main_cset_slider_pane_g6_ParamLimits

0xb104,	// (0x000552ea) main_cset_slider_pane_g6

0xf9a4,	// (0x00059b8a) main_cset_slider_pane_g_ParamLimits

0x12f5,	// (0x0004b4db) main_cset_slider_pane_t1_ParamLimits

0xb190,	// (0x00055376) main_cset_slider_pane_t2_ParamLimits

0xb1aa,	// (0x00055390) main_cset_slider_pane_t3_ParamLimits

0xb1c4,	// (0x000553aa) main_cset_slider_pane_t4_ParamLimits

0xb1de,	// (0x000553c4) main_cset_slider_pane_t5_ParamLimits

0xb1fa,	// (0x000553e0) main_cset_slider_pane_t6_ParamLimits

0xb20f,	// (0x000553f5) main_cset_slider_pane_t7_ParamLimits

0xb239,	// (0x0005541f) main_cset_slider_pane_t8_ParamLimits

0xb239,	// (0x0005541f) main_cset_slider_pane_t8

0xb261,	// (0x00055447) main_cset_slider_pane_t9_ParamLimits

0xb261,	// (0x00055447) main_cset_slider_pane_t9

0xb289,	// (0x0005546f) main_cset_slider_pane_t10_ParamLimits

0xb289,	// (0x0005546f) main_cset_slider_pane_t10

0xb2b1,	// (0x00055497) main_cset_slider_pane_t11_ParamLimits

0xb2b1,	// (0x00055497) main_cset_slider_pane_t11

0xb2d9,	// (0x000554bf) main_cset_slider_pane_t12_ParamLimits

0xb2d9,	// (0x000554bf) main_cset_slider_pane_t12

0xb2f6,	// (0x000554dc) main_cset_slider_pane_t13_ParamLimits

0xb2f6,	// (0x000554dc) main_cset_slider_pane_t13

0xf9c9,	// (0x00059baf) main_cset_slider_pane_t_ParamLimits

0x053e,	// (0x0004a724) bg_popup_sub_pane_cp011

0x146b,	// (0x0004b651) main_cset_text_pane_g1

0x1473,	// (0x0004b659) main_cset_text_pane_t1

0x1481,	// (0x0004b667) main_cset_text_pane_t2

0x148f,	// (0x0004b675) main_cset_text_pane_t3

0x149d,	// (0x0004b683) main_cset_text_pane_t4

0x14ab,	// (0x0004b691) main_cset_text_pane_t5

0x14b9,	// (0x0004b69f) main_cset_text_pane_t6

0x14c7,	// (0x0004b6ad) main_cset_text_pane_t7

0x0006,

0xfa5a,	// (0x00059c40) main_cset_text_pane_t

0x053e,	// (0x0004a724) main_cam4_burst_pane

0x053e,	// (0x0004a724) main_cam5_pane

0xafc2,	// (0x000551a8) bg_button_pane_cp019

0xafcb,	// (0x000551b1) bg_button_pane_cp020

0x12d1,	// (0x0004b4b7) main_cset_slider_pane_g7_ParamLimits

0x12d1,	// (0x0004b4b7) main_cset_slider_pane_g7

0x12dd,	// (0x0004b4c3) main_cset_slider_pane_g8_ParamLimits

0x12dd,	// (0x0004b4c3) main_cset_slider_pane_g8

0xb118,	// (0x000552fe) main_cset_slider_pane_g9_ParamLimits

0xb118,	// (0x000552fe) main_cset_slider_pane_g9

0xb124,	// (0x0005530a) main_cset_slider_pane_g10_ParamLimits

0xb124,	// (0x0005530a) main_cset_slider_pane_g10

0xb130,	// (0x00055316) main_cset_slider_pane_g11_ParamLimits

0xb130,	// (0x00055316) main_cset_slider_pane_g11

0xb13c,	// (0x00055322) main_cset_slider_pane_g12_ParamLimits

0xb13c,	// (0x00055322) main_cset_slider_pane_g12

0xb148,	// (0x0005532e) main_cset_slider_pane_g13_ParamLimits

0xb148,	// (0x0005532e) main_cset_slider_pane_g13

0xb154,	// (0x0005533a) main_cset_slider_pane_g14_ParamLimits

0xb154,	// (0x0005533a) main_cset_slider_pane_g14

0xb160,	// (0x00055346) main_cset_slider_pane_g15_ParamLimits

0xb160,	// (0x00055346) main_cset_slider_pane_g15

0x1323,	// (0x0004b509) main_cset_slider_pane_t14_ParamLimits

0x1323,	// (0x0004b509) main_cset_slider_pane_t14

0x135c,	// (0x0004b542) main_cset_slider_pane_t15_ParamLimits

0x135c,	// (0x0004b542) main_cset_slider_pane_t15

0xb705,	// (0x000558eb) aid_cam4_burst_size_cell_ParamLimits

0xb705,	// (0x000558eb) aid_cam4_burst_size_cell

0xb721,	// (0x00055907) grid_cam4_burst_pane_ParamLimits

0xb721,	// (0x00055907) grid_cam4_burst_pane

0xb753,	// (0x00055939) linegrid_cam4_burst_pane_ParamLimits

0xb753,	// (0x00055939) linegrid_cam4_burst_pane

0xb773,	// (0x00055959) scroll_pane_cp30_ParamLimits

0xb773,	// (0x00055959) scroll_pane_cp30

0xb77f,	// (0x00055965) cell_cam4_burst_pane_ParamLimits

0xb77f,	// (0x00055965) cell_cam4_burst_pane

0x14e1,	// (0x0004b6c7) linegrid_cam4_burst_pane_g1_ParamLimits

0x14e1,	// (0x0004b6c7) linegrid_cam4_burst_pane_g1

0xb7bf,	// (0x000559a5) linegrid_cam4_burst_pane_g2_ParamLimits

0xb7bf,	// (0x000559a5) linegrid_cam4_burst_pane_g2

0x14ee,	// (0x0004b6d4) linegrid_cam4_burst_pane_g3_ParamLimits

0x14ee,	// (0x0004b6d4) linegrid_cam4_burst_pane_g3

0x0002,

0xfa69,	// (0x00059c4f) linegrid_cam4_burst_pane_g_ParamLimits

0xfa69,	// (0x00059c4f) linegrid_cam4_burst_pane_g

0xb7d0,	// (0x000559b6) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xb7d0,	// (0x000559b6) linegrid_cam4_burst_pane_g3_copy1

0x14fb,	// (0x0004b6e1) linegrid_cam4_burst_pane_g4_ParamLimits

0x14fb,	// (0x0004b6e1) linegrid_cam4_burst_pane_g4

0xb7ea,	// (0x000559d0) linegrid_cam4_burst_pane_g5_ParamLimits

0xb7ea,	// (0x000559d0) linegrid_cam4_burst_pane_g5

0xb7fb,	// (0x000559e1) linegrid_cam4_burst_pane_g6_ParamLimits

0xb7fb,	// (0x000559e1) linegrid_cam4_burst_pane_g6

0x1508,	// (0x0004b6ee) linegrid_cam4_burst_pane_g7_ParamLimits

0x1508,	// (0x0004b6ee) linegrid_cam4_burst_pane_g7

0xb812,	// (0x000559f8) cell_cam4_burst_pane_g1

0x1521,	// (0x0004b707) main_cam5_pane_t1_ParamLimits

0x1521,	// (0x0004b707) main_cam5_pane_t1

0x1533,	// (0x0004b719) main_cam5_pane_t2_ParamLimits

0x1533,	// (0x0004b719) main_cam5_pane_t2

0x1545,	// (0x0004b72b) main_cam5_pane_t3_ParamLimits

0x1545,	// (0x0004b72b) main_cam5_pane_t3

0x1557,	// (0x0004b73d) main_cam5_pane_t4_ParamLimits

0x1557,	// (0x0004b73d) main_cam5_pane_t4

0x156f,	// (0x0004b755) main_cam5_pane_t5_ParamLimits

0x156f,	// (0x0004b755) main_cam5_pane_t5

0x1583,	// (0x0004b769) main_cam5_pane_t6_ParamLimits

0x1583,	// (0x0004b769) main_cam5_pane_t6

0x1597,	// (0x0004b77d) main_cam5_pane_t7_ParamLimits

0x1597,	// (0x0004b77d) main_cam5_pane_t7

0x15a9,	// (0x0004b78f) main_cam5_pane_t8_ParamLimits

0x15a9,	// (0x0004b78f) main_cam5_pane_t8

0x15c7,	// (0x0004b7ad) main_cam5_pane_t9_ParamLimits

0x15c7,	// (0x0004b7ad) main_cam5_pane_t9

0x15d9,	// (0x0004b7bf) main_cam5_pane_t10_ParamLimits

0x15d9,	// (0x0004b7bf) main_cam5_pane_t10

0x15eb,	// (0x0004b7d1) main_cam5_pane_t11_ParamLimits

0x15eb,	// (0x0004b7d1) main_cam5_pane_t11

0x15ff,	// (0x0004b7e5) main_cam5_pane_t12_ParamLimits

0x15ff,	// (0x0004b7e5) main_cam5_pane_t12

0x1616,	// (0x0004b7fc) main_cam5_pane_t13_ParamLimits

0x1616,	// (0x0004b7fc) main_cam5_pane_t13

0x000c,

0xfa75,	// (0x00059c5b) main_cam5_pane_t_ParamLimits

0xfa75,	// (0x00059c5b) main_cam5_pane_t

0x5c2c,	// (0x0004fe12) popup_scut_keymap_window_ParamLimits

0x5c2c,	// (0x0004fe12) popup_scut_keymap_window

0xb825,	// (0x00055a0b) aid_size_cell_brow_shortcut

0x447c,	// (0x0004e662) bg_popup_window_pane_cp010

0xb831,	// (0x00055a17) grid_scut_pane

0xb83d,	// (0x00055a23) cell_scut_pane_ParamLimits

0xb83d,	// (0x00055a23) cell_scut_pane

0xb858,	// (0x00055a3e) cell_scut_pane_g1

0x1639,	// (0x0004b81f) cell_scut_pane_t1

0x1648,	// (0x0004b82e) cell_scut_pane_t2

0xb861,	// (0x00055a47) cell_scut_pane_t3

0x0002,

0xfa90,	// (0x00059c76) cell_scut_pane_t

0x97ec,	// (0x000539d2) main_mup3_pane_g8_ParamLimits

0x97ec,	// (0x000539d2) main_mup3_pane_g8

0xabba,	// (0x00054da0) area_vitu2_query_pane_ParamLimits

0xabba,	// (0x00054da0) area_vitu2_query_pane

0xb64b,	// (0x00055831) input_focus_pane_cp08

0x1657,	// (0x0004b83d) area_vitu2_query_pane_g1

0xb86f,	// (0x00055a55) area_vitu2_query_pane_g2

0x0001,

0xfa97,	// (0x00059c7d) area_vitu2_query_pane_g

0xb880,	// (0x00055a66) area_vitu2_query_pane_t1_ParamLimits

0xb880,	// (0x00055a66) area_vitu2_query_pane_t1

0xb894,	// (0x00055a7a) area_vitu2_query_pane_t2_ParamLimits

0xb894,	// (0x00055a7a) area_vitu2_query_pane_t2

0xb8a8,	// (0x00055a8e) area_vitu2_query_pane_t3_ParamLimits

0xb8a8,	// (0x00055a8e) area_vitu2_query_pane_t3

0x1663,	// (0x0004b849) area_vitu2_query_pane_t4_ParamLimits

0x1663,	// (0x0004b849) area_vitu2_query_pane_t4

0x168b,	// (0x0004b871) area_vitu2_query_pane_t5_ParamLimits

0x168b,	// (0x0004b871) area_vitu2_query_pane_t5

0x16b3,	// (0x0004b899) area_vitu2_query_pane_t6_ParamLimits

0x16b3,	// (0x0004b899) area_vitu2_query_pane_t6

0x0006,

0xfa9c,	// (0x00059c82) area_vitu2_query_pane_t_ParamLimits

0xfa9c,	// (0x00059c82) area_vitu2_query_pane_t

0xb8d0,	// (0x00055ab6) bg_button_pane_cp018

0xb8de,	// (0x00055ac4) bg_button_pane_cp021

0xb8ea,	// (0x00055ad0) bg_button_pane_cp022

0xb8fb,	// (0x00055ae1) input_focus_pane_cp09

0x7c43,	// (0x00051e29) aid_size_touch_mv_arrow_left

0x7c6e,	// (0x00051e54) aid_size_touch_mv_arrow_right

0xb178,	// (0x0005535e) main_cset_slider_pane_g16_ParamLimits

0xb178,	// (0x0005535e) main_cset_slider_pane_g16

0xb184,	// (0x0005536a) main_cset_slider_pane_g17_ParamLimits

0xb184,	// (0x0005536a) main_cset_slider_pane_g17

0xb812,	// (0x000559f8) cell_cam4_burst_pane_g1_ParamLimits

0x053e,	// (0x0004a724) compa_mode_pane

0xb38f,	// (0x00055575) popup_vtel_slider_window_g3_ParamLimits

0xb38f,	// (0x00055575) popup_vtel_slider_window_g3

0xb3a3,	// (0x00055589) popup_vtel_slider_window_g4_ParamLimits

0xb3a3,	// (0x00055589) popup_vtel_slider_window_g4

0xb3b7,	// (0x0005559d) popup_vtel_slider_window_t1_ParamLimits

0xb3b7,	// (0x0005559d) popup_vtel_slider_window_t1

0x053e,	// (0x0004a724) main_cl_pane

0xe796,	// (0x0005897c) popup_imed_adjust2_window_ParamLimits

0xe76a,	// (0x00058950) bg_tb_trans_pane_cp05_ParamLimits

0xf0b4,	// (0x0005929a) popup_imed_adjust2_window_g1_ParamLimits

0xf0c3,	// (0x000592a9) popup_imed_adjust2_window_g2_ParamLimits

0xf0c3,	// (0x000592a9) popup_imed_adjust2_window_g2

0xf0cf,	// (0x000592b5) popup_imed_adjust2_window_g3_ParamLimits

0xf0cf,	// (0x000592b5) popup_imed_adjust2_window_g3

0x0002,

0xf80d,	// (0x000599f3) popup_imed_adjust2_window_g_ParamLimits

0xf80d,	// (0x000599f3) popup_imed_adjust2_window_g

0xf0db,	// (0x000592c1) popup_imed_adjust2_window_t1_ParamLimits

0x0a3b,	// (0x0004ac21) slider_imed_adjust_pane_ParamLimits

0x0a4f,	// (0x0004ac35) slider_imed_adjust_pane_g1_ParamLimits

0x0a5f,	// (0x0004ac45) slider_imed_adjust_pane_g2_ParamLimits

0x0a6f,	// (0x0004ac55) slider_imed_adjust_pane_g3_ParamLimits

0x0a80,	// (0x0004ac66) slider_imed_adjust_pane_g4_ParamLimits

0xf814,	// (0x000599fa) slider_imed_adjust_pane_g_ParamLimits

0xa908,	// (0x00054aee) aid_touch_area_cam4_ParamLimits

0xa908,	// (0x00054aee) aid_touch_area_cam4

0xa918,	// (0x00054afe) battery_pane_cp01

0xa993,	// (0x00054b79) main_camera4_pane_g6_ParamLimits

0xa993,	// (0x00054b79) main_camera4_pane_g6

0xa9b1,	// (0x00054b97) main_camera4_pane_t2_ParamLimits

0xa9b1,	// (0x00054b97) main_camera4_pane_t2

0x0001,

0xf917,	// (0x00059afd) main_camera4_pane_t_ParamLimits

0xf917,	// (0x00059afd) main_camera4_pane_t

0xaa46,	// (0x00054c2c) aid_touch_area_vid4_ParamLimits

0xaa46,	// (0x00054c2c) aid_touch_area_vid4

0xaa86,	// (0x00054c6c) main_video4_pane_g5_ParamLimits

0xaa86,	// (0x00054c6c) main_video4_pane_g5

0xaaaa,	// (0x00054c90) vid4_progress_pane_ParamLimits

0xaaaa,	// (0x00054c90) vid4_progress_pane

0x12e9,	// (0x0004b4cf) main_cset_slider_pane_g18_ParamLimits

0x12e9,	// (0x0004b4cf) main_cset_slider_pane_g18

0x1515,	// (0x0004b6fb) cell_cam4_burst_pane_g2_ParamLimits

0x1515,	// (0x0004b6fb) cell_cam4_burst_pane_g2

0x0001,

0xfa70,	// (0x00059c56) cell_cam4_burst_pane_g_ParamLimits

0xfa70,	// (0x00059c56) cell_cam4_burst_pane_g

0xb90c,	// (0x00055af2) bg_cl_pane_ParamLimits

0xb90c,	// (0x00055af2) bg_cl_pane

0xb918,	// (0x00055afe) cl_header_pane_ParamLimits

0xb918,	// (0x00055afe) cl_header_pane

0xb924,	// (0x00055b0a) cl_listscroll_pane_ParamLimits

0xb924,	// (0x00055b0a) cl_listscroll_pane

0x16ff,	// (0x0004b8e5) bg_cl_pane_g1

0x1707,	// (0x0004b8ed) bg_cl_pane_g2

0x170f,	// (0x0004b8f5) bg_cl_pane_g3

0x1717,	// (0x0004b8fd) bg_cl_pane_g4

0x171f,	// (0x0004b905) bg_cl_pane_g5

0x1727,	// (0x0004b90d) bg_cl_pane_g6

0x172f,	// (0x0004b915) bg_cl_pane_g7

0x1737,	// (0x0004b91d) bg_cl_pane_g8

0x173f,	// (0x0004b925) bg_cl_pane_g9

0x0008,

0xfaab,	// (0x00059c91) bg_cl_pane_g

0xb930,	// (0x00055b16) aid_height_cl_leading_ParamLimits

0xb930,	// (0x00055b16) aid_height_cl_leading

0xb93c,	// (0x00055b22) aid_height_cl_text_ParamLimits

0xb93c,	// (0x00055b22) aid_height_cl_text

0x1105,	// (0x0004b2eb) bg_cl_header_pane_ParamLimits

0x1105,	// (0x0004b2eb) bg_cl_header_pane

0xb954,	// (0x00055b3a) cl_header_pane_g1_ParamLimits

0xb954,	// (0x00055b3a) cl_header_pane_g1

0xb961,	// (0x00055b47) cl_header_pane_t1_ParamLimits

0xb961,	// (0x00055b47) cl_header_pane_t1

0x1747,	// (0x0004b92d) cl_list_pane

0x12bc,	// (0x0004b4a2) hc_scroll_pane_cp01

0x3e12,	// (0x0004dff8) bg_cl_header_pane_g1

0x119e,	// (0x0004b384) bg_cl_header_pane_g2

0x3e32,	// (0x0004e018) bg_cl_header_pane_g3

0x11ae,	// (0x0004b394) bg_cl_header_pane_g4

0x11a6,	// (0x0004b38c) bg_cl_header_pane_g5

0x140a,	// (0x0004b5f0) bg_cl_header_pane_g6

0x11c6,	// (0x0004b3ac) bg_cl_header_pane_g7

0x11ce,	// (0x0004b3b4) bg_cl_header_pane_g8

0x11be,	// (0x0004b3a4) bg_cl_header_pane_g9

0x0008,

0xfabe,	// (0x00059ca4) bg_cl_header_pane_g

0xb973,	// (0x00055b59) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xb973,	// (0x00055b59) hc_cl_list_double_graphic_heading_pane

0x320f,	// (0x0004d3f5) hc_cl_list_single_graphic_pane_ParamLimits

0x320f,	// (0x0004d3f5) hc_cl_list_single_graphic_pane

0xb983,	// (0x00055b69) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xb983,	// (0x00055b69) hc_cl_list_single_graphic_pane_g1

0xb98f,	// (0x00055b75) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xb98f,	// (0x00055b75) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfad1,	// (0x00059cb7) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfad1,	// (0x00059cb7) hc_cl_list_single_graphic_pane_g

0xb9a3,	// (0x00055b89) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xb9a3,	// (0x00055b89) hc_cl_list_single_graphic_pane_t1

0xb983,	// (0x00055b69) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xb983,	// (0x00055b69) hc_cl_list_double_graphic_heading_pane_g1

0xb9b8,	// (0x00055b9e) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xb9b8,	// (0x00055b9e) hc_cl_list_double_graphic_heading_pane_g2

0xb9cc,	// (0x00055bb2) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xb9cc,	// (0x00055bb2) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfad6,	// (0x00059cbc) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfad6,	// (0x00059cbc) hc_cl_list_double_graphic_heading_pane_g

0xb9e0,	// (0x00055bc6) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xb9e0,	// (0x00055bc6) hc_cl_list_double_graphic_heading_pane_t1

0xb9f5,	// (0x00055bdb) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xb9f5,	// (0x00055bdb) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfadd,	// (0x00059cc3) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfadd,	// (0x00059cc3) hc_cl_list_double_graphic_heading_pane_t

0xba1c,	// (0x00055c02) vid4_progress_pane_g1

0xba28,	// (0x00055c0e) vid4_progress_pane_g2

0xba34,	// (0x00055c1a) vid4_progress_pane_g3

0xba43,	// (0x00055c29) vid4_progress_pane_g4

0x0004,

0xfae2,	// (0x00059cc8) vid4_progress_pane_g

0xba61,	// (0x00055c47) vid4_progress_pane_t1

0xba77,	// (0x00055c5d) vid4_progress_pane_t2

0x0002,

0xfaed,	// (0x00059cd3) vid4_progress_pane_t

0xbaa2,	// (0x00055c88) wait_bar_pane_cp07

0xe9d2,	// (0x00058bb8) blid_firmament_pane_ParamLimits

0xea15,	// (0x00058bfb) popup_blid_sat_info2_window_g1

0xea39,	// (0x00058c1f) popup_blid_sat_info2_window_t3

0xea47,	// (0x00058c2d) popup_blid_sat_info2_window_t4

0xea55,	// (0x00058c3b) popup_blid_sat_info2_window_t5

0xea63,	// (0x00058c49) popup_blid_sat_info2_window_t6

0xea73,	// (0x00058c59) popup_blid_sat_info2_window_t7

0xea81,	// (0x00058c67) popup_blid_sat_info2_window_t8

0xea8f,	// (0x00058c75) popup_blid_sat_info2_window_t9

0xea9d,	// (0x00058c83) popup_blid_sat_info2_window_t10

0xeb65,	// (0x00058d4b) aid_firma_cardinal_ParamLimits

0xeb79,	// (0x00058d5f) blid_firmament_pane_t1_ParamLimits

0xeb90,	// (0x00058d76) blid_firmament_pane_t2_ParamLimits

0xeba7,	// (0x00058d8d) blid_firmament_pane_t3_ParamLimits

0xebbe,	// (0x00058da4) blid_firmament_pane_t4_ParamLimits

0xf706,	// (0x000598ec) blid_firmament_pane_t_ParamLimits

0xebd5,	// (0x00058dbb) blid_sat_info_pane_ParamLimits

0x4a45,	// (0x0004ec2b) main_cam_set_pane_ParamLimits

0x9f80,	// (0x00054166) aid_size_cell_colour_35_ParamLimits

0x9f9a,	// (0x00054180) aid_size_cell_colour_112_ParamLimits

0x9fb1,	// (0x00054197) aid_size_cell_effect_ParamLimits

0x4a45,	// (0x0004ec2b) bg_tb_trans_pane_cp02_ParamLimits

0x4a53,	// (0x0004ec39) heading_imed_pane_ParamLimits

0x9fcb,	// (0x000541b1) listscroll_imed_pane_ParamLimits

0xdd98,	// (0x00057f7e) popup_call2_audio_first_window_g5_ParamLimits

0xdd98,	// (0x00057f7e) popup_call2_audio_first_window_g5

0xa6b3,	// (0x00054899) aid_size_touch_image3_arrow_left_ParamLimits

0xa6b3,	// (0x00054899) aid_size_touch_image3_arrow_left

0xa6c9,	// (0x000548af) aid_size_touch_image3_arrow_right_ParamLimits

0xa6c9,	// (0x000548af) aid_size_touch_image3_arrow_right

0xba8d,	// (0x00055c73) vid4_progress_pane_t3

0xa26b,	// (0x00054451) main_hwr_training_symbol_option_pane_ParamLimits

0xa26b,	// (0x00054451) main_hwr_training_symbol_option_pane

0x0ceb,	// (0x0004aed1) popup_hwr_training_preview_window_ParamLimits

0x0ceb,	// (0x0004aed1) popup_hwr_training_preview_window

0xa2cc,	// (0x000544b2) hwr_training_navi_pane_g5_ParamLimits

0xa2cc,	// (0x000544b2) hwr_training_navi_pane_g5

0x118c,	// (0x0004b372) popup_char_count_window

0xb4ad,	// (0x00055693) bg_popup_sub_pane_cp20_ParamLimits

0xb4bb,	// (0x000556a1) list_vitu2_match_list_pane_ParamLimits

0xb4c7,	// (0x000556ad) vitu2_page_scroll_pane_ParamLimits

0xb4c7,	// (0x000556ad) vitu2_page_scroll_pane

0x17aa,	// (0x0004b990) list_single_hwr_training_symbol_option_pane_ParamLimits

0x17aa,	// (0x0004b990) list_single_hwr_training_symbol_option_pane

0x17bd,	// (0x0004b9a3) list_single_hwr_training_symbol_option_pane_g1

0x17c5,	// (0x0004b9ab) list_single_hwr_training_symbol_option_pane_t1

0x17d3,	// (0x0004b9b9) bg_button_pane_cp023

0x17dc,	// (0x0004b9c2) bg_button_pane_cp024

0xbab4,	// (0x00055c9a) vitu2_page_scroll_pane_g1

0xbabc,	// (0x00055ca2) vitu2_page_scroll_pane_g2

0x0001,

0xfaf4,	// (0x00059cda) vitu2_page_scroll_pane_g

0xbac6,	// (0x00055cac) vitu2_page_scroll_pane_t1

0xe932,	// (0x00058b18) popup_char_count_window_g1

0x180f,	// (0x0004b9f5) popup_char_count_window_g2

0x1818,	// (0x0004b9fe) popup_char_count_window_g3

0x0002,

0xfaf9,	// (0x00059cdf) popup_char_count_window_g

0x1821,	// (0x0004ba07) popup_char_count_window_t1

0x053e,	// (0x0004a724) main_vded2_pane

0xf0a0,	// (0x00059286) aid_size_cell_imed_line

0xf0aa,	// (0x00059290) grid_imed_line_width_pane

0xab0e,	// (0x00054cf4) vid4_indicators_pane_g4

0x182f,	// (0x0004ba15) cell_imed_line_width_pane_ParamLimits

0x182f,	// (0x0004ba15) cell_imed_line_width_pane

0x1845,	// (0x0004ba2b) cell_imed_line_width_pane_g1

0xf0f3,	// (0x000592d9) cell_imed_line_width_pane_g2

0x0001,

0xfb00,	// (0x00059ce6) cell_imed_line_width_pane_g

0xbad5,	// (0x00055cbb) main_vded2_pane_g1_ParamLimits

0xbad5,	// (0x00055cbb) main_vded2_pane_g1

0xbae4,	// (0x00055cca) main_vded2_pane_g2_ParamLimits

0xbae4,	// (0x00055cca) main_vded2_pane_g2

0x0001,

0xfb05,	// (0x00059ceb) main_vded2_pane_g_ParamLimits

0xfb05,	// (0x00059ceb) main_vded2_pane_g

0xbaf2,	// (0x00055cd8) vded2_slider_pane_ParamLimits

0xbaf2,	// (0x00055cd8) vded2_slider_pane

0xbaff,	// (0x00055ce5) aid_size_touch_vded2_end

0xbb09,	// (0x00055cef) aid_size_touch_vded2_playhead

0x184e,	// (0x0004ba34) aid_size_touch_vded2_start

0x1856,	// (0x0004ba3c) vded2_slider_bg_pane

0x185f,	// (0x0004ba45) vded2_slider_pane_g1

0x1868,	// (0x0004ba4e) vded2_slider_pane_g2

0xbb11,	// (0x00055cf7) vded2_slider_pane_g3

0x0002,

0xfb0a,	// (0x00059cf0) vded2_slider_pane_g

0x1870,	// (0x0004ba56) vded2_slider_bg_pane_g1

0x1879,	// (0x0004ba5f) vded2_slider_bg_pane_g2

0x1882,	// (0x0004ba68) vded2_slider_bg_pane_g3

0x0002,

0xf7d6,	// (0x000599bc) vded2_slider_bg_pane_g

0x83c1,	// (0x000525a7) aid_postcard_touch_down_pane_ParamLimits

0x83c1,	// (0x000525a7) aid_postcard_touch_down_pane

0x83d1,	// (0x000525b7) aid_postcard_touch_up_pane_ParamLimits

0x83d1,	// (0x000525b7) aid_postcard_touch_up_pane

0x053e,	// (0x0004a724) main_blid2_pane

0xe778,	// (0x0005895e) popup_blid2_search_window

0x053e,	// (0x0004a724) blid2_gps_pane

0x053e,	// (0x0004a724) blid2_navig_pane

0x053e,	// (0x0004a724) blid2_search_pane

0x053e,	// (0x0004a724) blid2_tripm_pane

0xbb1a,	// (0x00055d00) blid2_search_pane_g1_ParamLimits

0xbb1a,	// (0x00055d00) blid2_search_pane_g1

0xbb2a,	// (0x00055d10) blid2_search_pane_t1_ParamLimits

0xbb2a,	// (0x00055d10) blid2_search_pane_t1

0xbb3c,	// (0x00055d22) aid_size_cell_blid2_gps_ParamLimits

0xbb3c,	// (0x00055d22) aid_size_cell_blid2_gps

0xbb4c,	// (0x00055d32) blid2_gps_pane_g1_ParamLimits

0xbb4c,	// (0x00055d32) blid2_gps_pane_g1

0xbb58,	// (0x00055d3e) grid_blid2_satellite_pane_ParamLimits

0xbb58,	// (0x00055d3e) grid_blid2_satellite_pane

0xbb66,	// (0x00055d4c) blid2_navig_pane_g1_ParamLimits

0xbb66,	// (0x00055d4c) blid2_navig_pane_g1

0xbb72,	// (0x00055d58) blid2_navig_pane_t1_ParamLimits

0xbb72,	// (0x00055d58) blid2_navig_pane_t1

0xbb84,	// (0x00055d6a) blid2_navig_pane_t2_ParamLimits

0xbb84,	// (0x00055d6a) blid2_navig_pane_t2

0x0001,

0xfb11,	// (0x00059cf7) blid2_navig_pane_t_ParamLimits

0xfb11,	// (0x00059cf7) blid2_navig_pane_t

0xbb96,	// (0x00055d7c) blid2_navig_ring_pane_ParamLimits

0xbb96,	// (0x00055d7c) blid2_navig_ring_pane

0xbba6,	// (0x00055d8c) blid2_speed_pane_ParamLimits

0xbba6,	// (0x00055d8c) blid2_speed_pane

0xbbb2,	// (0x00055d98) blid2_tripm_pane_g1_ParamLimits

0xbbb2,	// (0x00055d98) blid2_tripm_pane_g1

0xbbc2,	// (0x00055da8) blid2_tripm_pane_g2_ParamLimits

0xbbc2,	// (0x00055da8) blid2_tripm_pane_g2

0xbbce,	// (0x00055db4) blid2_tripm_pane_g3_ParamLimits

0xbbce,	// (0x00055db4) blid2_tripm_pane_g3

0xbbda,	// (0x00055dc0) blid2_tripm_pane_g4_ParamLimits

0xbbda,	// (0x00055dc0) blid2_tripm_pane_g4

0xbbe6,	// (0x00055dcc) blid2_tripm_pane_g5_ParamLimits

0xbbe6,	// (0x00055dcc) blid2_tripm_pane_g5

0x0005,

0xfb16,	// (0x00059cfc) blid2_tripm_pane_g_ParamLimits

0xfb16,	// (0x00059cfc) blid2_tripm_pane_g

0xbc02,	// (0x00055de8) blid2_tripm_pane_t1_ParamLimits

0xbc02,	// (0x00055de8) blid2_tripm_pane_t1

0xbc16,	// (0x00055dfc) blid2_tripm_pane_t2_ParamLimits

0xbc16,	// (0x00055dfc) blid2_tripm_pane_t2

0xbc28,	// (0x00055e0e) blid2_tripm_pane_t3_ParamLimits

0xbc28,	// (0x00055e0e) blid2_tripm_pane_t3

0x0003,

0xfb23,	// (0x00059d09) blid2_tripm_pane_t_ParamLimits

0xfb23,	// (0x00059d09) blid2_tripm_pane_t

0xbc5a,	// (0x00055e40) cell_blid2_satellite_pane_ParamLimits

0xbc5a,	// (0x00055e40) cell_blid2_satellite_pane

0xbc78,	// (0x00055e5e) cell_blid2_satellite_pane_g1

0x188b,	// (0x0004ba71) cell_blid2_satellite_pane_t1

0xebe5,	// (0x00058dcb) blid2_speed_pane_g1

0x1899,	// (0x0004ba7f) blid2_speed_pane_t1

0x18a7,	// (0x0004ba8d) blid2_speed_pane_t2

0x0001,

0xfb2c,	// (0x00059d12) blid2_speed_pane_t

0xebe5,	// (0x00058dcb) blid2_navig_ring_pane_g1

0xbc81,	// (0x00055e67) blid2_navig_ring_pane_g2

0xbc89,	// (0x00055e6f) blid2_navig_ring_pane_g3

0xbc91,	// (0x00055e77) blid2_navig_ring_pane_g4

0xbc99,	// (0x00055e7f) blid2_navig_ring_pane_g5

0x0004,

0xfb31,	// (0x00059d17) blid2_navig_ring_pane_g

0x053e,	// (0x0004a724) bg_popup_window_pane_cp011

0x18b5,	// (0x0004ba9b) popup_blid2_search_window_g1

0x18bd,	// (0x0004baa3) popup_blid2_search_window_t1

0x18cb,	// (0x0004bab1) popup_blid2_search_window_t2

0x0001,

0xfb3c,	// (0x00059d22) popup_blid2_search_window_t

0x3d21,	// (0x0004df07) main_browser_pane_g1

0x3a20,	// (0x0004dc06) main_browser_pane_ParamLimits

0xaad8,	// (0x00054cbe) bg_button_pane_cp011_ParamLimits

0xad89,	// (0x00054f6f) cell_vitu2_function_pane_g1_ParamLimits

0x4a45,	// (0x0004ec2b) bg_popup_sub_pane_cp22_ParamLimits

0xb64b,	// (0x00055831) input_focus_pane_cp08_ParamLimits

0xb658,	// (0x0005583e) popup_vitu2_query_button_pane_ParamLimits

0xb658,	// (0x0005583e) popup_vitu2_query_button_pane

0xb62d,	// (0x00055813) popup_vitu2_query_input_button_pane

0x145f,	// (0x0004b645) popup_vitu2_query_window_g1_ParamLimits

0xb669,	// (0x0005584f) popup_vitu2_query_window_g2_ParamLimits

0xfa4a,	// (0x00059c30) popup_vitu2_query_window_g_ParamLimits

0x053e,	// (0x0004a724) bg_button_pane_cp026

0xbca1,	// (0x00055e87) popup_vitu2_query_input_button_pane_g1

0x053e,	// (0x0004a724) bg_button_pane_cp025

0x18d9,	// (0x0004babf) popup_vitu2_query_button_pane_t1

0x9542,	// (0x00053728) main_mp3_pane_t6

0x9552,	// (0x00053738) popup_slider_window_cp01

0xa9f7,	// (0x00054bdd) cam4_battery_pane

0xaae6,	// (0x00054ccc) cam4_battery_pane_cp02

0xba0a,	// (0x00055bf0) cam4_battery_pane_cp01

0xba14,	// (0x00055bfa) cam4_battery_pane_cp03

0x18e7,	// (0x0004bacd) cam4_battery_pane_g1

0xebe5,	// (0x00058dcb) cam4_battery_pane_g2

0x0001,

0xfb41,	// (0x00059d27) cam4_battery_pane_g

0xeaab,	// (0x00058c91) popup_blid_sat_info2_window_t11

0x7c43,	// (0x00051e29) aid_size_touch_mv_arrow_left_ParamLimits

0x7c6e,	// (0x00051e54) aid_size_touch_mv_arrow_right_ParamLimits

0x43dc,	// (0x0004e5c2) navi_pane_g1_ParamLimits

0x7c97,	// (0x00051e7d) navi_pane_g2_ParamLimits

0x7cc5,	// (0x00051eab) navi_pane_g3_ParamLimits

0xf418,	// (0x000595fe) navi_pane_g_ParamLimits

0x7d1f,	// (0x00051f05) navi_pane_mv_t1_ParamLimits

0x9fd7,	// (0x000541bd) grid_imed_effect_pane_ParamLimits

0x3c66,	// (0x0004de4c) aid_placing_vt_slider_lsc

0x3c6e,	// (0x0004de54) aid_placing_vt_slider_prt

0x4a45,	// (0x0004ec2b) bg_tb_trans_pane_cp01_ParamLimits

0xed35,	// (0x00058f1b) popup_image_details_window_g1_ParamLimits

0xed48,	// (0x00058f2e) popup_image_details_window_g2_ParamLimits

0xed5d,	// (0x00058f43) popup_image_details_window_g3_ParamLimits

0xed5d,	// (0x00058f43) popup_image_details_window_g3

0xf74b,	// (0x00059931) popup_image_details_window_g_ParamLimits

0xed71,	// (0x00058f57) popup_image_details_window_t1_ParamLimits

0xed83,	// (0x00058f69) popup_image_details_window_t2_ParamLimits

0xed9c,	// (0x00058f82) popup_image_details_window_t3_ParamLimits

0xedb0,	// (0x00058f96) popup_image_details_window_t4_ParamLimits

0xedcb,	// (0x00058fb1) popup_image_details_window_t5_ParamLimits

0xf752,	// (0x00059938) popup_image_details_window_t_ParamLimits

0xb948,	// (0x00055b2e) cl_header_name_pane_ParamLimits

0xb948,	// (0x00055b2e) cl_header_name_pane

0xbca9,	// (0x00055e8f) cl_header_name_pane_t1_ParamLimits

0xbca9,	// (0x00055e8f) cl_header_name_pane_t1

0xbcc0,	// (0x00055ea6) cl_header_name_pane_t2_ParamLimits

0xbcc0,	// (0x00055ea6) cl_header_name_pane_t2

0xbcea,	// (0x00055ed0) cl_header_name_pane_t3_ParamLimits

0xbcea,	// (0x00055ed0) cl_header_name_pane_t3

0x0002,

0xfb46,	// (0x00059d2c) cl_header_name_pane_t_ParamLimits

0xfb46,	// (0x00059d2c) cl_header_name_pane_t

0x7cf0,	// (0x00051ed6) navi_pane_mv_g2_ParamLimits

0x112c,	// (0x0004b312) field_vitu2_entry_pane_g1_ParamLimits

0x1138,	// (0x0004b31e) field_vitu2_entry_pane_g2_ParamLimits

0x1144,	// (0x0004b32a) field_vitu2_entry_pane_g3_ParamLimits

0x1144,	// (0x0004b32a) field_vitu2_entry_pane_g3

0xf949,	// (0x00059b2f) field_vitu2_entry_pane_g_ParamLimits

0xad19,	// (0x00054eff) cell_vitu2_itu_pane_g1_ParamLimits

0xad29,	// (0x00054f0f) cell_vitu2_itu_pane_g2_ParamLimits

0xad29,	// (0x00054f0f) cell_vitu2_itu_pane_g2

0x0001,

0xf955,	// (0x00059b3b) cell_vitu2_itu_pane_g_ParamLimits

0xf955,	// (0x00059b3b) cell_vitu2_itu_pane_g

0xaad8,	// (0x00054cbe) bg_vkb2_func_pane_cp05_ParamLimits

0xaad8,	// (0x00054cbe) bg_vkb2_func_pane_cp05

0xaad8,	// (0x00054cbe) bg_vkb2_func_pane_cp03

0xaad8,	// (0x00054cbe) bg_vkb2_func_pane_cp04

0xaad8,	// (0x00054cbe) bg_vkb2_func_pane_cp10_ParamLimits

0xaad8,	// (0x00054cbe) bg_vkb2_func_pane_cp10

0xb8ea,	// (0x00055ad0) bg_vkb2_func_pane_cp08

0xb8d0,	// (0x00055ab6) bg_vkb2_func_pane_cp06

0xb8de,	// (0x00055ac4) bg_vkb2_func_pane_cp07

0x17e5,	// (0x0004b9cb) bg_vkb2_func_pane_cp11_ParamLimits

0x17e5,	// (0x0004b9cb) bg_vkb2_func_pane_cp11

0x17fa,	// (0x0004b9e0) bg_vkb2_func_pane_cp12_ParamLimits

0x17fa,	// (0x0004b9e0) bg_vkb2_func_pane_cp12

0x053e,	// (0x0004a724) bg_vkb2_func_pane_cp09

0x119e,	// (0x0004b384) bg_vkb2_func_pane_g1

0x3e32,	// (0x0004e018) bg_vkb2_func_pane_g2

0x11a6,	// (0x0004b38c) bg_vkb2_func_pane_g3

0x11ae,	// (0x0004b394) bg_vkb2_func_pane_g4

0x140a,	// (0x0004b5f0) bg_vkb2_func_pane_g5

0x11c6,	// (0x0004b3ac) bg_vkb2_func_pane_g6

0x11ce,	// (0x0004b3b4) bg_vkb2_func_pane_g7

0x11be,	// (0x0004b3a4) bg_vkb2_func_pane_g8

0x3e12,	// (0x0004dff8) bg_vkb2_func_pane_g9

0x0008,

0xfb4d,	// (0x00059d33) bg_vkb2_func_pane_g

0xbbf4,	// (0x00055dda) blid2_tripm_pane_g6_ParamLimits

0xbbf4,	// (0x00055dda) blid2_tripm_pane_g6

0x0fb0,	// (0x0004b196) mp4_progress_pane_g1

0xbc4e,	// (0x00055e34) blid2_tripm_values_pane_ParamLimits

0xbc4e,	// (0x00055e34) blid2_tripm_values_pane

0xbd0f,	// (0x00055ef5) blid2_tripm_values_pane_t1

0xbd1d,	// (0x00055f03) blid2_tripm_values_pane_t2

0xbd2b,	// (0x00055f11) blid2_tripm_values_pane_t3

0xbd39,	// (0x00055f1f) blid2_tripm_values_pane_t4

0xbd47,	// (0x00055f2d) blid2_tripm_values_pane_t5

0xbd55,	// (0x00055f3b) blid2_tripm_values_pane_t6

0xbd63,	// (0x00055f49) blid2_tripm_values_pane_t7

0xbd71,	// (0x00055f57) blid2_tripm_values_pane_t8

0xbd7f,	// (0x00055f65) blid2_tripm_values_pane_t9

0x0008,

0xfb60,	// (0x00059d46) blid2_tripm_values_pane_t

0x6a85,	// (0x00050c6b) call_video_pane_t1_ParamLimits

0x6a9b,	// (0x00050c81) call_video_pane_t2_ParamLimits

0xf2a1,	// (0x00059487) call_video_pane_t_ParamLimits

0x8282,	// (0x00052468) msg_header_pane_g1_ParamLimits

0x45f9,	// (0x0004e7df) msg_header_pane_g2_ParamLimits

0x45f9,	// (0x0004e7df) msg_header_pane_g2

0x0001,

0xf4bb,	// (0x000596a1) msg_header_pane_g_ParamLimits

0xf4bb,	// (0x000596a1) msg_header_pane_g

0x3a20,	// (0x0004dc06) main_clock2_pane_ParamLimits

0x9d5a,	// (0x00053f40) grid_clock2_toolbar_pane_ParamLimits

0x9d5a,	// (0x00053f40) grid_clock2_toolbar_pane

0x9d5a,	// (0x00053f40) listscroll_clock2_pane_ParamLimits

0x9d5a,	// (0x00053f40) listscroll_clock2_pane

0x9e0e,	// (0x00053ff4) main_clock2_pane_t3_ParamLimits

0x9e0e,	// (0x00053ff4) main_clock2_pane_t3

0x9e20,	// (0x00054006) main_clock2_pane_t4_ParamLimits

0x9e20,	// (0x00054006) main_clock2_pane_t4

0x18f1,	// (0x0004bad7) cell_clock2_toolbar_pane

0x18f9,	// (0x0004badf) cell_clock2_toolbar_pane_cp01

0x18f9,	// (0x0004badf) cell_clock2_toolbar_pane_cp02

0x1901,	// (0x0004bae7) cell_clock2_toolbar_pane_cp03

0x1909,	// (0x0004baef) list_clock2_pane

0x4342,	// (0x0004e528) scroll_pane_cp10

0x1911,	// (0x0004baf7) list_single_clock2_pane_ParamLimits

0x1911,	// (0x0004baf7) list_single_clock2_pane

0x447c,	// (0x0004e662) list_highlight_pane_cp08

0x191e,	// (0x0004bb04) list_single_clock2_pane_t1

0x192c,	// (0x0004bb12) list_single_clock2_pane_t2

0x0001,

0xfb73,	// (0x00059d59) list_single_clock2_pane_t

0x053e,	// (0x0004a724) bg_button_pane_cp10

0x193a,	// (0x0004bb20) cell_clock2_toolbar_pane_g1

0x8323,	// (0x00052509) aid_main_viewer_pane_g1_ParamLimits

0x8323,	// (0x00052509) aid_main_viewer_pane_g1

0x832f,	// (0x00052515) aid_main_viewer_pane_g2_ParamLimits

0x832f,	// (0x00052515) aid_main_viewer_pane_g2

0x833b,	// (0x00052521) aid_main_viewer_pane_g3_ParamLimits

0x833b,	// (0x00052521) aid_main_viewer_pane_g3

0x834c,	// (0x00052532) aid_main_viewer_pane_g4_ParamLimits

0x834c,	// (0x00052532) aid_main_viewer_pane_g4

0x0003,

0xf4cc,	// (0x000596b2) aid_main_viewer_pane_g_ParamLimits

0xf4cc,	// (0x000596b2) aid_main_viewer_pane_g

0x8adc,	// (0x00052cc2) main_calc_pane_ParamLimits

0x8ae9,	// (0x00052ccf) main_dialer2_pane_ParamLimits

0x053e,	// (0x0004a724) main_cam6_pane

0x053e,	// (0x0004a724) main_vid6_pane

0x9d66,	// (0x00053f4c) listscroll_gen_pane_cp06_ParamLimits

0x9d66,	// (0x00053f4c) listscroll_gen_pane_cp06

0x9e32,	// (0x00054018) main_clock2_pane_t5_ParamLimits

0x9e32,	// (0x00054018) main_clock2_pane_t5

0x9e81,	// (0x00054067) aid_call2_pane_cp10_ParamLimits

0x9e93,	// (0x00054079) aid_call_pane_cp10_ParamLimits

0x43b1,	// (0x0004e597) popup_clock_analogue_window_cp10_g1_ParamLimits

0x43b1,	// (0x0004e597) popup_clock_analogue_window_cp10_g2_ParamLimits

0x9ea5,	// (0x0005408b) popup_clock_analogue_window_cp10_g3_ParamLimits

0x9ea5,	// (0x0005408b) popup_clock_analogue_window_cp10_g4_ParamLimits

0x43b1,	// (0x0004e597) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf802,	// (0x000599e8) popup_clock_analogue_window_cp10_g_ParamLimits

0x9eb7,	// (0x0005409d) popup_clock_analogue_window_cp10_t1_ParamLimits

0xa660,	// (0x00054846) cell_dialer2_keypad_pane_g2_ParamLimits

0xa660,	// (0x00054846) cell_dialer2_keypad_pane_g2

0x0001,

0xf8e8,	// (0x00059ace) cell_dialer2_keypad_pane_g_ParamLimits

0xf8e8,	// (0x00059ace) cell_dialer2_keypad_pane_g

0xa67c,	// (0x00054862) cell_dialer2_keypad_pane_t1

0xb066,	// (0x0005524c) main_cset_text2_pane_ParamLimits

0xb066,	// (0x0005524c) main_cset_text2_pane

0x1657,	// (0x0004b83d) area_vitu2_query_pane_g1_ParamLimits

0xb86f,	// (0x00055a55) area_vitu2_query_pane_g2_ParamLimits

0xfa97,	// (0x00059c7d) area_vitu2_query_pane_g_ParamLimits

0x16db,	// (0x0004b8c1) area_vitu2_query_pane_t7_ParamLimits

0x16db,	// (0x0004b8c1) area_vitu2_query_pane_t7

0xb8d0,	// (0x00055ab6) bg_button_pane_cp018_ParamLimits

0xb8de,	// (0x00055ac4) bg_button_pane_cp021_ParamLimits

0xb8ea,	// (0x00055ad0) bg_button_pane_cp022_ParamLimits

0xb8ea,	// (0x00055ad0) bg_vkb2_func_pane_cp08_ParamLimits

0xb8d0,	// (0x00055ab6) bg_vkb2_func_pane_cp06_ParamLimits

0xb8de,	// (0x00055ac4) bg_vkb2_func_pane_cp07_ParamLimits

0xb8fb,	// (0x00055ae1) input_focus_pane_cp09_ParamLimits

0xbd8d,	// (0x00055f73) cam6_autofocus_pane_ParamLimits

0xbd8d,	// (0x00055f73) cam6_autofocus_pane

0xbdaf,	// (0x00055f95) cam6_image_uncrop_pane_ParamLimits

0xbdaf,	// (0x00055f95) cam6_image_uncrop_pane

0xbddc,	// (0x00055fc2) cam6_indi_pane_ParamLimits

0xbddc,	// (0x00055fc2) cam6_indi_pane

0xbdf6,	// (0x00055fdc) cam6_mode_pane_ParamLimits

0xbdf6,	// (0x00055fdc) cam6_mode_pane

0xbe0a,	// (0x00055ff0) cam6_timer_pane_ParamLimits

0xbe0a,	// (0x00055ff0) cam6_timer_pane

0xbe16,	// (0x00055ffc) cam6_zoom_pane_ParamLimits

0xbe16,	// (0x00055ffc) cam6_zoom_pane

0xbe34,	// (0x0005601a) cam6_mode_pane_g1_ParamLimits

0xbe34,	// (0x0005601a) cam6_mode_pane_g1

0xbe40,	// (0x00056026) cam6_mode_pane_g2_ParamLimits

0xbe40,	// (0x00056026) cam6_mode_pane_g2

0xbe4c,	// (0x00056032) cam6_mode_pane_g3_ParamLimits

0xbe4c,	// (0x00056032) cam6_mode_pane_g3

0xbe58,	// (0x0005603e) cam6_mode_pane_g4_ParamLimits

0xbe58,	// (0x0005603e) cam6_mode_pane_g4

0x0003,

0xfb78,	// (0x00059d5e) cam6_mode_pane_g_ParamLimits

0xfb78,	// (0x00059d5e) cam6_mode_pane_g

0x1942,	// (0x0004bb28) bg_tb_trans_pane_cp08_ParamLimits

0x1942,	// (0x0004bb28) bg_tb_trans_pane_cp08

0x1950,	// (0x0004bb36) cam6_battery_pane_ParamLimits

0x1950,	// (0x0004bb36) cam6_battery_pane

0x1966,	// (0x0004bb4c) cam6_indi_pane_g1_ParamLimits

0x1966,	// (0x0004bb4c) cam6_indi_pane_g1

0x1978,	// (0x0004bb5e) cam6_indi_pane_g2_ParamLimits

0x1978,	// (0x0004bb5e) cam6_indi_pane_g2

0x198a,	// (0x0004bb70) cam6_indi_pane_g3_ParamLimits

0x198a,	// (0x0004bb70) cam6_indi_pane_g3

0x0002,

0xfb81,	// (0x00059d67) cam6_indi_pane_g_ParamLimits

0xfb81,	// (0x00059d67) cam6_indi_pane_g

0x199c,	// (0x0004bb82) cam6_indi_pane_t1_ParamLimits

0x199c,	// (0x0004bb82) cam6_indi_pane_t1

0xab4c,	// (0x00054d32) cam6_autofocus_pane_g1

0xab44,	// (0x00054d2a) cam6_autofocus_pane_g2

0xab5c,	// (0x00054d42) cam6_autofocus_pane_g3

0xab54,	// (0x00054d3a) cam6_autofocus_pane_g4

0x0003,

0xfb88,	// (0x00059d6e) cam6_autofocus_pane_g

0x19c2,	// (0x0004bba8) cam6_timer_pane_g1

0x19ca,	// (0x0004bbb0) cam6_timer_pane_t1

0x19d8,	// (0x0004bbbe) cam6_zoom_cont_pane

0x19e0,	// (0x0004bbc6) cam6_zoom_pane_g1

0x19e8,	// (0x0004bbce) cam6_zoom_pane_g2

0xbe64,	// (0x0005604a) cam6_zoom_pane_g3

0x0002,

0xfb91,	// (0x00059d77) cam6_zoom_pane_g

0xebe5,	// (0x00058dcb) cam6_battery_pane_g1

0xebe5,	// (0x00058dcb) cam6_battery_pane_g2

0x0001,

0xf70f,	// (0x000598f5) cam6_battery_pane_g

0x19f0,	// (0x0004bbd6) cam6_zoom_cont_pane_g1

0x19f9,	// (0x0004bbdf) cam6_zoom_cont_pane_g2

0x1a02,	// (0x0004bbe8) cam6_zoom_cont_pane_g3

0x0002,

0xfb98,	// (0x00059d7e) cam6_zoom_cont_pane_g

0xbe81,	// (0x00056067) cam6_mode_pane_cp_ParamLimits

0xbe81,	// (0x00056067) cam6_mode_pane_cp

0xbe95,	// (0x0005607b) cam6_zoom_pane_cp_ParamLimits

0xbe95,	// (0x0005607b) cam6_zoom_pane_cp

0xbeb3,	// (0x00056099) vid6_image_uncrop_cif_pane_ParamLimits

0xbeb3,	// (0x00056099) vid6_image_uncrop_cif_pane

0xbedf,	// (0x000560c5) vid6_image_uncrop_nhd_pane_ParamLimits

0xbedf,	// (0x000560c5) vid6_image_uncrop_nhd_pane

0xbefe,	// (0x000560e4) vid6_image_uncrop_vga_pane_ParamLimits

0xbefe,	// (0x000560e4) vid6_image_uncrop_vga_pane

0xbf1d,	// (0x00056103) vid6_image_uncrop_wvga_pane_ParamLimits

0xbf1d,	// (0x00056103) vid6_image_uncrop_wvga_pane

0xbf3c,	// (0x00056122) vid6_indi_pane_ParamLimits

0xbf3c,	// (0x00056122) vid6_indi_pane

0x1942,	// (0x0004bb28) bg_tb_trans_pane_cp09_ParamLimits

0x1942,	// (0x0004bb28) bg_tb_trans_pane_cp09

0x1a1a,	// (0x0004bc00) cam6_battery_pane_cp_ParamLimits

0x1a1a,	// (0x0004bc00) cam6_battery_pane_cp

0x1a26,	// (0x0004bc0c) vid6_indi_pane_g1_ParamLimits

0x1a26,	// (0x0004bc0c) vid6_indi_pane_g1

0x1a38,	// (0x0004bc1e) vid6_indi_pane_g2_ParamLimits

0x1a38,	// (0x0004bc1e) vid6_indi_pane_g2

0x1a4a,	// (0x0004bc30) vid6_indi_pane_g3_ParamLimits

0x1a4a,	// (0x0004bc30) vid6_indi_pane_g3

0x1a61,	// (0x0004bc47) vid6_indi_pane_g4_ParamLimits

0x1a61,	// (0x0004bc47) vid6_indi_pane_g4

0x1a78,	// (0x0004bc5e) vid6_indi_pane_g5_ParamLimits

0x1a78,	// (0x0004bc5e) vid6_indi_pane_g5

0x0004,

0xfb9f,	// (0x00059d85) vid6_indi_pane_g_ParamLimits

0xfb9f,	// (0x00059d85) vid6_indi_pane_g

0x1a92,	// (0x0004bc78) vid6_indi_pane_t1_ParamLimits

0x1a92,	// (0x0004bc78) vid6_indi_pane_t1

0x1aa8,	// (0x0004bc8e) vid6_indi_pane_t2_ParamLimits

0x1aa8,	// (0x0004bc8e) vid6_indi_pane_t2

0x1ad0,	// (0x0004bcb6) vid6_indi_pane_t3_ParamLimits

0x1ad0,	// (0x0004bcb6) vid6_indi_pane_t3

0x1af8,	// (0x0004bcde) vid6_indi_pane_t4_ParamLimits

0x1af8,	// (0x0004bcde) vid6_indi_pane_t4

0x0003,

0xfbaa,	// (0x00059d90) vid6_indi_pane_t_ParamLimits

0xfbaa,	// (0x00059d90) vid6_indi_pane_t

0x1b1c,	// (0x0004bd02) wait_bar_pane_cp08

0xbf61,	// (0x00056147) main_cset_text2_pane_t1_ParamLimits

0xbf61,	// (0x00056147) main_cset_text2_pane_t1

0xbe6c,	// (0x00056052) listscroll_gen_pane_cp06_t1_ParamLimits

0xbe6c,	// (0x00056052) listscroll_gen_pane_cp06_t1

0x053e,	// (0x0004a724) main_cam6_set_pane

0xa9e9,	// (0x00054bcf) bg_tb_trans_pane_cp06_ParamLimits

0xa9ff,	// (0x00054be5) cam4_indicators_pane_g1_ParamLimits

0xaa0c,	// (0x00054bf2) cam4_indicators_pane_g2_ParamLimits

0xf925,	// (0x00059b0b) cam4_indicators_pane_g_ParamLimits

0xaa2c,	// (0x00054c12) cam4_indicators_pane_t1_ParamLimits

0xaad8,	// (0x00054cbe) bg_tb_trans_pane_cp07_ParamLimits

0xa9ff,	// (0x00054be5) vid4_indicators_pane_g1_ParamLimits

0xaaf0,	// (0x00054cd6) vid4_indicators_pane_g2_ParamLimits

0xaafd,	// (0x00054ce3) vid4_indicators_pane_g3_ParamLimits

0xab0e,	// (0x00054cf4) vid4_indicators_pane_g4_ParamLimits

0xf937,	// (0x00059b1d) vid4_indicators_pane_g_ParamLimits

0xab2a,	// (0x00054d10) vid4_indicators_pane_t1_ParamLimits

0xba1c,	// (0x00055c02) vid4_progress_pane_g1_ParamLimits

0xba28,	// (0x00055c0e) vid4_progress_pane_g2_ParamLimits

0xba34,	// (0x00055c1a) vid4_progress_pane_g3_ParamLimits

0xba43,	// (0x00055c29) vid4_progress_pane_g4_ParamLimits

0xfae2,	// (0x00059cc8) vid4_progress_pane_g_ParamLimits

0xba61,	// (0x00055c47) vid4_progress_pane_t1_ParamLimits

0xba77,	// (0x00055c5d) vid4_progress_pane_t2_ParamLimits

0xba8d,	// (0x00055c73) vid4_progress_pane_t3_ParamLimits

0xfaed,	// (0x00059cd3) vid4_progress_pane_t_ParamLimits

0xbaa2,	// (0x00055c88) wait_bar_pane_cp07_ParamLimits

0xbf88,	// (0x0005616e) main_cam6_set_pane_g2_ParamLimits

0xbf88,	// (0x0005616e) main_cam6_set_pane_g2

0xbf94,	// (0x0005617a) main_cset6_listscroll_pane_ParamLimits

0xbf94,	// (0x0005617a) main_cset6_listscroll_pane

0xbfc1,	// (0x000561a7) main_cset6_slider_pane_ParamLimits

0xbfc1,	// (0x000561a7) main_cset6_slider_pane

0xbfcd,	// (0x000561b3) main_cset6_text2_pane_ParamLimits

0xbfcd,	// (0x000561b3) main_cset6_text2_pane

0x1b2b,	// (0x0004bd11) main_cset6_text_pane

0x1b33,	// (0x0004bd19) main_cset_list_pane_copy1_ParamLimits

0x1b33,	// (0x0004bd19) main_cset_list_pane_copy1

0x1b43,	// (0x0004bd29) scroll_pane_cp028_copy1

0xbfe0,	// (0x000561c6) cset_list_set_pane_copy1

0xbff0,	// (0x000561d6) aid_position_infowindow_above_copy1

0xbff8,	// (0x000561de) aid_position_infowindow_below_copy1

0xc000,	// (0x000561e6) cset_list_set_pane_g1_copy1

0xc008,	// (0x000561ee) cset_list_set_pane_g3_copy1_ParamLimits

0xc008,	// (0x000561ee) cset_list_set_pane_g3_copy1

0xc017,	// (0x000561fd) cset_list_set_pane_t1_copy1_ParamLimits

0xc017,	// (0x000561fd) cset_list_set_pane_t1_copy1

0x4a45,	// (0x0004ec2b) list_highlight_pane_cp021_copy1_ParamLimits

0x4a45,	// (0x0004ec2b) list_highlight_pane_cp021_copy1

0x1b5b,	// (0x0004bd41) cset6_slider_pane_ParamLimits

0x1b5b,	// (0x0004bd41) cset6_slider_pane

0x1b87,	// (0x0004bd6d) main_cset6_slider_pane_g1_ParamLimits

0x1b87,	// (0x0004bd6d) main_cset6_slider_pane_g1

0xc02c,	// (0x00056212) main_cset6_slider_pane_g2_ParamLimits

0xc02c,	// (0x00056212) main_cset6_slider_pane_g2

0x1baf,	// (0x0004bd95) main_cset6_slider_pane_g3_ParamLimits

0x1baf,	// (0x0004bd95) main_cset6_slider_pane_g3

0xc054,	// (0x0005623a) main_cset6_slider_pane_g4_ParamLimits

0xc054,	// (0x0005623a) main_cset6_slider_pane_g4

0xc060,	// (0x00056246) main_cset6_slider_pane_g5_ParamLimits

0xc060,	// (0x00056246) main_cset6_slider_pane_g5

0x12d1,	// (0x0004b4b7) main_cset6_slider_pane_g7_ParamLimits

0x12d1,	// (0x0004b4b7) main_cset6_slider_pane_g7

0x12dd,	// (0x0004b4c3) main_cset6_slider_pane_g8_ParamLimits

0x12dd,	// (0x0004b4c3) main_cset6_slider_pane_g8

0xc06c,	// (0x00056252) main_cset6_slider_pane_g9_ParamLimits

0xc06c,	// (0x00056252) main_cset6_slider_pane_g9

0xc078,	// (0x0005625e) main_cset6_slider_pane_g10_ParamLimits

0xc078,	// (0x0005625e) main_cset6_slider_pane_g10

0xc084,	// (0x0005626a) main_cset6_slider_pane_g11_ParamLimits

0xc084,	// (0x0005626a) main_cset6_slider_pane_g11

0xc090,	// (0x00056276) main_cset6_slider_pane_g12_ParamLimits

0xc090,	// (0x00056276) main_cset6_slider_pane_g12

0xc09c,	// (0x00056282) main_cset6_slider_pane_g13_ParamLimits

0xc09c,	// (0x00056282) main_cset6_slider_pane_g13

0xc0a8,	// (0x0005628e) main_cset6_slider_pane_g14_ParamLimits

0xc0a8,	// (0x0005628e) main_cset6_slider_pane_g14

0xc0b4,	// (0x0005629a) main_cset6_slider_pane_g15_ParamLimits

0xc0b4,	// (0x0005629a) main_cset6_slider_pane_g15

0xc0cc,	// (0x000562b2) main_cset6_slider_pane_g16_ParamLimits

0xc0cc,	// (0x000562b2) main_cset6_slider_pane_g16

0xc0d8,	// (0x000562be) main_cset6_slider_pane_g17_ParamLimits

0xc0d8,	// (0x000562be) main_cset6_slider_pane_g17

0x0011,

0xfbb3,	// (0x00059d99) main_cset6_slider_pane_g_ParamLimits

0xfbb3,	// (0x00059d99) main_cset6_slider_pane_g

0x1bbb,	// (0x0004bda1) main_cset6_slider_pane_t1_ParamLimits

0x1bbb,	// (0x0004bda1) main_cset6_slider_pane_t1

0xc0fc,	// (0x000562e2) main_cset6_slider_pane_t2_ParamLimits

0xc0fc,	// (0x000562e2) main_cset6_slider_pane_t2

0xc127,	// (0x0005630d) main_cset6_slider_pane_t3_ParamLimits

0xc127,	// (0x0005630d) main_cset6_slider_pane_t3

0xc152,	// (0x00056338) main_cset6_slider_pane_t4_ParamLimits

0xc152,	// (0x00056338) main_cset6_slider_pane_t4

0xc17d,	// (0x00056363) main_cset6_slider_pane_t5_ParamLimits

0xc17d,	// (0x00056363) main_cset6_slider_pane_t5

0x1bfc,	// (0x0004bde2) main_cset6_slider_pane_t7_ParamLimits

0x1bfc,	// (0x0004bde2) main_cset6_slider_pane_t7

0xc1a8,	// (0x0005638e) main_cset6_slider_pane_t8_ParamLimits

0xc1a8,	// (0x0005638e) main_cset6_slider_pane_t8

0xc1cc,	// (0x000563b2) main_cset6_slider_pane_t9_ParamLimits

0xc1cc,	// (0x000563b2) main_cset6_slider_pane_t9

0xc1f0,	// (0x000563d6) main_cset6_slider_pane_t10_ParamLimits

0xc1f0,	// (0x000563d6) main_cset6_slider_pane_t10

0xc214,	// (0x000563fa) main_cset6_slider_pane_t11_ParamLimits

0xc214,	// (0x000563fa) main_cset6_slider_pane_t11

0x1c32,	// (0x0004be18) main_cset6_slider_pane_t14_ParamLimits

0x1c32,	// (0x0004be18) main_cset6_slider_pane_t14

0x1c6b,	// (0x0004be51) main_cset6_slider_pane_t15_ParamLimits

0x1c6b,	// (0x0004be51) main_cset6_slider_pane_t15

0x000b,

0xfbd8,	// (0x00059dbe) main_cset6_slider_pane_t_ParamLimits

0xfbd8,	// (0x00059dbe) main_cset6_slider_pane_t

0x13b6,	// (0x0004b59c) cset_slider_pane_g1_copy1

0x13bf,	// (0x0004b5a5) cset_slider_pane_g2_copy1

0x13c8,	// (0x0004b5ae) cset_slider_pane_g3_copy1

0x053e,	// (0x0004a724) bg_popup_sub_pane_cp011_copy1

0x146b,	// (0x0004b651) main_cset_text_pane_g1_copy1

0x1473,	// (0x0004b659) main_cset_text_pane_t1_copy1

0x1481,	// (0x0004b667) main_cset_text_pane_t2_copy1

0x148f,	// (0x0004b675) main_cset_text_pane_t3_copy1

0x149d,	// (0x0004b683) main_cset_text_pane_t4_copy1

0x14ab,	// (0x0004b691) main_cset_text_pane_t5_copy1

0x14b9,	// (0x0004b69f) main_cset_text_pane_t6_copy1

0x14c7,	// (0x0004b6ad) main_cset_text_pane_t7_copy1

0xc238,	// (0x0005641e) main_cset_text2_pane_t1_copy1

0x053e,	// (0x0004a724) main_ncimui_pane

0x8b2e,	// (0x00052d14) popup_query_ncimui_window_ParamLimits

0x8b2e,	// (0x00052d14) popup_query_ncimui_window

0x0a03,	// (0x0004abe9) field_cale_ev2_pane_g4_ParamLimits

0x0a03,	// (0x0004abe9) field_cale_ev2_pane_g4

0xa3a0,	// (0x00054586) cell_video_dialer_keypad_pane_g2_ParamLimits

0xa3a0,	// (0x00054586) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8c3,	// (0x00059aa9) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8c3,	// (0x00059aa9) cell_video_dialer_keypad_pane_g

0xa3b8,	// (0x0005459e) cell_video_dialer_keypad_pane_t1

0x053e,	// (0x0004a724) bg_popup_window_pane_cp012

0x4220,	// (0x0004e406) heading_pane_cp06

0x1d93,	// (0x0004bf79) ncim_query_content_pane

0x053e,	// (0x0004a724) bg_popup_heading_pane_cp01

0x1d9b,	// (0x0004bf81) ncim_heading_pane_t1

0x1da9,	// (0x0004bf8f) ncim_indicator_popup_pane

0x1dbb,	// (0x0004bfa1) ncim_query_button_pane

0x1dd1,	// (0x0004bfb7) ncim_query_content_pane_t1

0x1de3,	// (0x0004bfc9) ncim_query_content_pane_t2

0x0005,

0xfc17,	// (0x00059dfd) ncim_query_content_pane_t

0x1e1d,	// (0x0004c003) ncim_query_list_pane

0x1e2f,	// (0x0004c015) ncim_query_popup_pane

0x1da9,	// (0x0004bf8f) ncim_indicator_popup_pane_ParamLimits

0xc32d,	// (0x00056513) ncim_query_content_pane_g1_ParamLimits

0xc32d,	// (0x00056513) ncim_query_content_pane_g1

0x1dd1,	// (0x0004bfb7) ncim_query_content_pane_t1_ParamLimits

0x1de3,	// (0x0004bfc9) ncim_query_content_pane_t2_ParamLimits

0xc339,	// (0x0005651f) ncim_query_content_pane_t3_ParamLimits

0xc339,	// (0x0005651f) ncim_query_content_pane_t3

0xc356,	// (0x0005653c) ncim_query_content_pane_t4_ParamLimits

0xc356,	// (0x0005653c) ncim_query_content_pane_t4

0xc373,	// (0x00056559) ncim_query_content_pane_t5_ParamLimits

0xc373,	// (0x00056559) ncim_query_content_pane_t5

0x1df5,	// (0x0004bfdb) ncim_query_content_pane_t6_ParamLimits

0x1df5,	// (0x0004bfdb) ncim_query_content_pane_t6

0xfc17,	// (0x00059dfd) ncim_query_content_pane_t_ParamLimits

0x1e1d,	// (0x0004c003) ncim_query_list_pane_ParamLimits

0x1e2f,	// (0x0004c015) ncim_query_popup_pane_ParamLimits

0x1e43,	// (0x0004c029) wait_bar_pane_cp04

0x053e,	// (0x0004a724) input_focus_pane_cp011

0x1e4b,	// (0x0004c031) ncim_query_popup_pane_t1

0x1e59,	// (0x0004c03f) ncim_list_query_list_pane_ParamLimits

0x1e59,	// (0x0004c03f) ncim_list_query_list_pane

0x053e,	// (0x0004a724) bg_button_pane_cp027

0x1e6c,	// (0x0004c052) ncim_query_button_pane_g1

0x053e,	// (0x0004a724) list_highlight_pane_cp012

0x1e76,	// (0x0004c05c) ncim_list_query_list_pane_g1

0x1e7e,	// (0x0004c064) ncim_list_query_list_pane_t1

0xaa1c,	// (0x00054c02) cam4_indicators_pane_g3_ParamLimits

0xaa1c,	// (0x00054c02) cam4_indicators_pane_g3

0xab1a,	// (0x00054d00) vid4_indicators_pane_g5_ParamLimits

0xab1a,	// (0x00054d00) vid4_indicators_pane_g5

0xba52,	// (0x00055c38) vid4_progress_pane_g5_ParamLimits

0xba52,	// (0x00055c38) vid4_progress_pane_g5

0xc267,	// (0x0005644d) main_ncimui_pane_g1

0xc2b1,	// (0x00056497) ncimui_group_query_pane_ParamLimits

0xc2b1,	// (0x00056497) ncimui_group_query_pane

0xc2ef,	// (0x000564d5) ncimui_list_pane_ParamLimits

0xc2ef,	// (0x000564d5) ncimui_list_pane

0xc309,	// (0x000564ef) ncimui_text_pane_ParamLimits

0xc309,	// (0x000564ef) ncimui_text_pane

0xc390,	// (0x00056576) ncimui_text_pane_t1_ParamLimits

0xc390,	// (0x00056576) ncimui_text_pane_t1

0x1e8c,	// (0x0004c072) ncimui_list_single_graphic_pane_ParamLimits

0x1e8c,	// (0x0004c072) ncimui_list_single_graphic_pane

0xc3af,	// (0x00056595) ncimui_query_pane_ParamLimits

0xc3af,	// (0x00056595) ncimui_query_pane

0x053e,	// (0x0004a724) list_highlight_pane_cp013

0x1e9c,	// (0x0004c082) ncim_list_query_list_pane_t1_copy1

0x1e76,	// (0x0004c05c) ncim_list_single_graphic_pane_g1

0x1eaa,	// (0x0004c090) ncim_query_button_pane_cp01

0x1eb2,	// (0x0004c098) ncim_query_entry_pane_ParamLimits

0x1eb2,	// (0x0004c098) ncim_query_entry_pane

0x1ec2,	// (0x0004c0a8) ncimui_query_pane_g1

0x1eca,	// (0x0004c0b0) ncimui_query_pane_t1_ParamLimits

0x1eca,	// (0x0004c0b0) ncimui_query_pane_t1

0x053e,	// (0x0004a724) input_focus_pane_cp012

0x1e4b,	// (0x0004c031) ncim_query_entry_pane_t1

0x3a20,	// (0x0004dc06) main_im_pane_ParamLimits

0x4a45,	// (0x0004ec2b) main_mobtv_pane_ParamLimits

0x4a45,	// (0x0004ec2b) main_mobtv_pane

0xc0e4,	// (0x000562ca) main_cset6_slider_pane_g18_ParamLimits

0xc0e4,	// (0x000562ca) main_cset6_slider_pane_g18

0xc0f0,	// (0x000562d6) main_cset6_slider_pane_g19_ParamLimits

0xc0f0,	// (0x000562d6) main_cset6_slider_pane_g19

0x1144,	// (0x0004b32a) bg_main_mobtv_pane_ParamLimits

0x1144,	// (0x0004b32a) bg_main_mobtv_pane

0xc3bf,	// (0x000565a5) main_mobtv_info_pane

0xc3ca,	// (0x000565b0) main_mobtv_loading_pane_ParamLimits

0xc3ca,	// (0x000565b0) main_mobtv_loading_pane

0x1eee,	// (0x0004c0d4) main_mobtv_pg_channel_list_pane

0x1ef8,	// (0x0004c0de) main_mobtv_pg_hdr_pane

0xc3d7,	// (0x000565bd) main_mobtv_programe_curr_pane_ParamLimits

0xc3d7,	// (0x000565bd) main_mobtv_programe_curr_pane

0xc3e4,	// (0x000565ca) main_mobtv_programe_next_pane_ParamLimits

0xc3e4,	// (0x000565ca) main_mobtv_programe_next_pane

0x1f01,	// (0x0004c0e7) popup_mobtv_noti_window

0xebe5,	// (0x00058dcb) main_tv_pg_hdr_pane_g1

0x1f0b,	// (0x0004c0f1) main_tv_pg_hdr_pane_g2

0x1f13,	// (0x0004c0f9) main_tv_pg_hdr_pane_g3

0x1f1b,	// (0x0004c101) main_tv_pg_hdr_pane_g4

0x1f23,	// (0x0004c109) main_tv_pg_hdr_pane_g5

0x1f2d,	// (0x0004c113) main_tv_pg_hdr_pane_g6

0x1f37,	// (0x0004c11d) main_tv_pg_hdr_pane_g7

0x1f41,	// (0x0004c127) main_tv_pg_hdr_pane_g8

0x1f4b,	// (0x0004c131) main_tv_pg_hdr_pane_g9

0x1f55,	// (0x0004c13b) main_tv_pg_hdr_pane_g10

0x1f5f,	// (0x0004c145) main_tv_pg_hdr_pane_g11

0x000a,

0xfc24,	// (0x00059e0a) main_tv_pg_hdr_pane_g

0x1f69,	// (0x0004c14f) main_tv_pg_hdr_pane_t1

0x1f77,	// (0x0004c15d) main_tv_pg_hdr_pane_t2

0x1f85,	// (0x0004c16b) main_tv_pg_hdr_pane_t3

0x1f95,	// (0x0004c17b) main_tv_pg_hdr_pane_t4

0x1fa5,	// (0x0004c18b) main_tv_pg_hdr_pane_t5

0x0004,

0xfc3b,	// (0x00059e21) main_tv_pg_hdr_pane_t

0x1fb5,	// (0x0004c19b) single_mobtv_pg_channel_pane_ParamLimits

0x1fb5,	// (0x0004c19b) single_mobtv_pg_channel_pane

0x1fc7,	// (0x0004c1ad) single_mobtv_pg_channel_table_pane

0x1fd0,	// (0x0004c1b6) single_mobtv_pg_channel_thumb_pane

0x1fd9,	// (0x0004c1bf) single_tv_pg_channel_pane_g1

0x1fe2,	// (0x0004c1c8) single_tv_pg_channel_pane_g2

0x0001,

0xfc46,	// (0x00059e2c) single_tv_pg_channel_pane_g

0xee15,	// (0x00058ffb) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xee15,	// (0x00058ffb) bg_single_mobtv_pg_channel_thumb_pane

0x1feb,	// (0x0004c1d1) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x1feb,	// (0x0004c1d1) single_mobtv_pg_channel_thumb_pane_g1

0x1ff9,	// (0x0004c1df) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x1ff9,	// (0x0004c1df) single_mobtv_pg_channel_thumb_pane_g2

0x2005,	// (0x0004c1eb) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x2005,	// (0x0004c1eb) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc4b,	// (0x00059e31) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc4b,	// (0x00059e31) single_mobtv_pg_channel_thumb_pane_g

0x2011,	// (0x0004c1f7) single_mobtv_pg_channel_thumb_pane_t1

0x201f,	// (0x0004c205) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc52,	// (0x00059e38) single_mobtv_pg_channel_thumb_pane_t

0xebe5,	// (0x00058dcb) bg_single_mobtv_pg_channel_table_pane_g1

0xebe5,	// (0x00058dcb) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf70f,	// (0x000598f5) bg_single_mobtv_pg_channel_table_pane_g

0x202d,	// (0x0004c213) single_mobtv_pg_channel_table_pane_t1

0x203b,	// (0x0004c221) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc57,	// (0x00059e3d) single_mobtv_pg_channel_table_pane_t

0xc3f9,	// (0x000565df) main_mobtv_info_pane_g1_ParamLimits

0xc3f9,	// (0x000565df) main_mobtv_info_pane_g1

0xc415,	// (0x000565fb) main_mobtv_info_pane_t1_ParamLimits

0xc415,	// (0x000565fb) main_mobtv_info_pane_t1

0xc48d,	// (0x00056673) main_mobtv_info_pane_t2_ParamLimits

0xc48d,	// (0x00056673) main_mobtv_info_pane_t2

0x0002,

0xfc61,	// (0x00059e47) main_mobtv_info_pane_t_ParamLimits

0xfc61,	// (0x00059e47) main_mobtv_info_pane_t

0xc520,	// (0x00056706) wait_bar_pane_cp05

0xc532,	// (0x00056718) main_mobtv_loading_pane_g1_ParamLimits

0xc532,	// (0x00056718) main_mobtv_loading_pane_g1

0xc53e,	// (0x00056724) main_mobtv_loading_pane_g2_ParamLimits

0xc53e,	// (0x00056724) main_mobtv_loading_pane_g2

0xc54a,	// (0x00056730) main_mobtv_loading_pane_g3_ParamLimits

0xc54a,	// (0x00056730) main_mobtv_loading_pane_g3

0x0002,

0xfc68,	// (0x00059e4e) main_mobtv_loading_pane_g_ParamLimits

0xfc68,	// (0x00059e4e) main_mobtv_loading_pane_g

0x2049,	// (0x0004c22f) main_mobtv_loading_pane_t1_ParamLimits

0x2049,	// (0x0004c22f) main_mobtv_loading_pane_t1

0x2061,	// (0x0004c247) main_mobtv_loading_pane_t2_ParamLimits

0x2061,	// (0x0004c247) main_mobtv_loading_pane_t2

0x0001,

0xfc6f,	// (0x00059e55) main_mobtv_loading_pane_t_ParamLimits

0xfc6f,	// (0x00059e55) main_mobtv_loading_pane_t

0xc558,	// (0x0005673e) wait_bar_pane_cp06_ParamLimits

0xc558,	// (0x0005673e) wait_bar_pane_cp06

0x2085,	// (0x0004c26b) main_mobtv_programe_curr_pane_t1

0x2093,	// (0x0004c279) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc74,	// (0x00059e5a) main_mobtv_programe_curr_pane_t

0x20a1,	// (0x0004c287) main_mobtv_programe_next_pane_t1

0x20af,	// (0x0004c295) main_mobtv_programe_next_pane_t2

0x20bd,	// (0x0004c2a3) main_mobtv_programe_next_pane_t3

0x0002,

0xfc79,	// (0x00059e5f) main_mobtv_programe_next_pane_t

0x053e,	// (0x0004a724) bg_popup_mobtv_noti_window_pane

0x20cb,	// (0x0004c2b1) popup_mobtv_noti_window_g1

0x20d3,	// (0x0004c2b9) popup_mobtv_noti_window_t1

0x20e1,	// (0x0004c2c7) popup_mobtv_noti_window_t2

0x0001,

0xfc80,	// (0x00059e66) popup_mobtv_noti_window_t

0xebe5,	// (0x00058dcb) bg_popup_mobtv_noti_window_pane_g1

0x053e,	// (0x0004a724) sc_clock_pane

0x053e,	// (0x0004a724) main_fs_bigclock_pane

0xbc3c,	// (0x00055e22) blid2_tripm_pane_t4_ParamLimits

0xbc3c,	// (0x00055e22) blid2_tripm_pane_t4

0xc564,	// (0x0005674a) sc_clock_pane_g1_ParamLimits

0xc564,	// (0x0005674a) sc_clock_pane_g1

0xc572,	// (0x00056758) sc_clock_pane_t1_ParamLimits

0xc572,	// (0x00056758) sc_clock_pane_t1

0xc587,	// (0x0005676d) sc_clock_pane_t2_ParamLimits

0xc587,	// (0x0005676d) sc_clock_pane_t2

0xc599,	// (0x0005677f) sc_clock_pane_t3_ParamLimits

0xc599,	// (0x0005677f) sc_clock_pane_t3

0x0004,

0xfc85,	// (0x00059e6b) sc_clock_pane_t_ParamLimits

0xfc85,	// (0x00059e6b) sc_clock_pane_t

0xd288,	// (0x0005746e) main_fs_bigclock_indicator_pane_ParamLimits

0xd288,	// (0x0005746e) main_fs_bigclock_indicator_pane

0xc620,	// (0x00056806) main_fs_bigclock_pane_g1_ParamLimits

0xc620,	// (0x00056806) main_fs_bigclock_pane_g1

0xd294,	// (0x0005747a) main_fs_bigclock_pane_t1_ParamLimits

0xd294,	// (0x0005747a) main_fs_bigclock_pane_t1

0xd2a6,	// (0x0005748c) main_fs_bigclock_pane_t2_ParamLimits

0xd2a6,	// (0x0005748c) main_fs_bigclock_pane_t2

0xd2ba,	// (0x000574a0) main_fs_bigclock_pane_t3_ParamLimits

0xd2ba,	// (0x000574a0) main_fs_bigclock_pane_t3

0x0002,

0xfe84,	// (0x0005a06a) main_fs_bigclock_pane_t_ParamLimits

0xfe84,	// (0x0005a06a) main_fs_bigclock_pane_t

0x2d1c,	// (0x0004cf02) main_fs_bigclock_indicator_pane_g1

0x1dc3,	// (0x0004bfa9) ncim_query_content_pane_g2_ParamLimits

0x1dc3,	// (0x0004bfa9) ncim_query_content_pane_g2

0x0001,

0xfc12,	// (0x00059df8) ncim_query_content_pane_g_ParamLimits

0xfc12,	// (0x00059df8) ncim_query_content_pane_g

0xc5ab,	// (0x00056791) sc_clock_pane_t4_ParamLimits

0xc5ab,	// (0x00056791) sc_clock_pane_t4

0x4a45,	// (0x0004ec2b) main_radioblah_pane

0x10a1,	// (0x0004b287) cell_call4_button_pane_t1_copy1_ParamLimits

0x10a1,	// (0x0004b287) cell_call4_button_pane_t1_copy1

0xc271,	// (0x00056457) main_ncimui_pane_t1_ParamLimits

0xc271,	// (0x00056457) main_ncimui_pane_t1

0xc283,	// (0x00056469) main_ncimui_pane_t2_ParamLimits

0xc283,	// (0x00056469) main_ncimui_pane_t2

0x0002,

0xfc0b,	// (0x00059df1) main_ncimui_pane_t_ParamLimits

0xfc0b,	// (0x00059df1) main_ncimui_pane_t

0x2219,	// (0x0004c3ff) main_radioblah_anim_pane_ParamLimits

0x2219,	// (0x0004c3ff) main_radioblah_anim_pane

0x222a,	// (0x0004c410) main_radioblah_info_pane_ParamLimits

0x222a,	// (0x0004c410) main_radioblah_info_pane

0x223e,	// (0x0004c424) main_radioblah_pane_t1_ParamLimits

0x223e,	// (0x0004c424) main_radioblah_pane_t1

0x225a,	// (0x0004c440) main_radioblah_pane_t2_ParamLimits

0x225a,	// (0x0004c440) main_radioblah_pane_t2

0x0003,

0xfca6,	// (0x00059e8c) main_radioblah_pane_t_ParamLimits

0xfca6,	// (0x00059e8c) main_radioblah_pane_t

0xc674,	// (0x0005685a) main_radioblah_rocker_ctrl_pane_ParamLimits

0xc674,	// (0x0005685a) main_radioblah_rocker_ctrl_pane

0x22a2,	// (0x0004c488) main_radioblah_info_pane_t1_ParamLimits

0x22a2,	// (0x0004c488) main_radioblah_info_pane_t1

0xc6bd,	// (0x000568a3) main_radioblah_info_pane_t2_ParamLimits

0xc6bd,	// (0x000568a3) main_radioblah_info_pane_t2

0x0003,

0xfcaf,	// (0x00059e95) main_radioblah_info_pane_t_ParamLimits

0xfcaf,	// (0x00059e95) main_radioblah_info_pane_t

0xebe5,	// (0x00058dcb) main_radioblah_rocker_ctrl_pane_g1

0xc76d,	// (0x00056953) main_radioblah_rocker_ctrl_pane_g2

0xc775,	// (0x0005695b) main_radioblah_rocker_ctrl_pane_g3

0xc77d,	// (0x00056963) main_radioblah_rocker_ctrl_pane_g4

0xc785,	// (0x0005696b) main_radioblah_rocker_ctrl_pane_g5

0xc78d,	// (0x00056973) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcb8,	// (0x00059e9e) main_radioblah_rocker_ctrl_pane_g

0xc238,	// (0x0005641e) main_cset_text2_pane_t1_copy1_ParamLimits

0xa93b,	// (0x00054b21) cam4_image_uncrop_qvga_pane

0xaa92,	// (0x00054c78) vid4_image_uncrop_qcif_pane

0xbdce,	// (0x00055fb4) cam6_image_uncrop_qvga_pane_ParamLimits

0xbdce,	// (0x00055fb4) cam6_image_uncrop_qvga_pane

0x1a0a,	// (0x0004bbf0) vid6_image_uncrop_qcif_pane_ParamLimits

0x1a0a,	// (0x0004bbf0) vid6_image_uncrop_qcif_pane

0x053e,	// (0x0004a724) bg_popup_preview_window_pane_cp03

0x1d75,	// (0x0004bf5b) list_cset_text2_pane

0x1d7d,	// (0x0004bf63) main_cset6_text2_pane_g1

0x1d85,	// (0x0004bf6b) main_cset6_text2_pane_t1

0xc795,	// (0x0005697b) list_cset_text2_pane_t1_ParamLimits

0xc795,	// (0x0005697b) list_cset_text2_pane_t1

0x4a45,	// (0x0004ec2b) main_radioblah_pane_ParamLimits

0xc50c,	// (0x000566f2) main_mobtv_info_pane_t3_ParamLimits

0xc50c,	// (0x000566f2) main_mobtv_info_pane_t3

0xc662,	// (0x00056848) main_radioblah_pane_g1

0xc68d,	// (0x00056873) main_radioblah_info_pane_g1

0xc712,	// (0x000568f8) main_radioblah_info_pane_t3_ParamLimits

0xc712,	// (0x000568f8) main_radioblah_info_pane_t3

0x76e7,	// (0x000518cd) highlight_cell_cale_month_pane_ParamLimits

0x76e7,	// (0x000518cd) highlight_cell_cale_month_pane

0x053e,	// (0x0004a724) main_phob_fisheye_pane

0xeef7,	// (0x000590dd) scroll_pane_cp0031_ParamLimits

0xeef7,	// (0x000590dd) scroll_pane_cp0031

0x1b1c,	// (0x0004bd02) wait_bar_pane_cp08_ParamLimits

0xbfe0,	// (0x000561c6) cset_list_set_pane_copy1_ParamLimits

0x22f6,	// (0x0004c4dc) highlight_cell_cale_month_pane_g1

0xc7ae,	// (0x00056994) highlight_cell_cale_month_pane_t1

0x1747,	// (0x0004b92d) list_gen_pane_cp01

0x12bc,	// (0x0004b4a2) scroll_pane_01

0x1784,	// (0x0004b96a) list_single_double_fisheye_pane

0xc7bc,	// (0x000569a2) list_double_fisheye_pane_g1_ParamLimits

0xc7bc,	// (0x000569a2) list_double_fisheye_pane_g1

0xc7c8,	// (0x000569ae) list_double_fisheye_pane_g2_ParamLimits

0xc7c8,	// (0x000569ae) list_double_fisheye_pane_g2

0xc7dc,	// (0x000569c2) list_double_fisheye_pane_g3_ParamLimits

0xc7dc,	// (0x000569c2) list_double_fisheye_pane_g3

0x0004,

0xfcc5,	// (0x00059eab) list_double_fisheye_pane_g_ParamLimits

0xfcc5,	// (0x00059eab) list_double_fisheye_pane_g

0xc805,	// (0x000569eb) list_double_fisheye_pane_t1_ParamLimits

0xc805,	// (0x000569eb) list_double_fisheye_pane_t1

0xc820,	// (0x00056a06) list_double_fisheye_pane_t2_ParamLimits

0xc820,	// (0x00056a06) list_double_fisheye_pane_t2

0x0001,

0xfcd0,	// (0x00059eb6) list_double_fisheye_pane_t_ParamLimits

0xfcd0,	// (0x00059eb6) list_double_fisheye_pane_t

0x053e,	// (0x0004a724) main_call5_pane

0xc5d1,	// (0x000567b7) sc_swipe_pane_ParamLimits

0xc5d1,	// (0x000567b7) sc_swipe_pane

0xc84e,	// (0x00056a34) call5_image_pane_ParamLimits

0xc84e,	// (0x00056a34) call5_image_pane

0xc860,	// (0x00056a46) call5_swipe_1_pane_ParamLimits

0xc860,	// (0x00056a46) call5_swipe_1_pane

0xc86c,	// (0x00056a52) call5_swipe_2_pane_ParamLimits

0xc86c,	// (0x00056a52) call5_swipe_2_pane

0xc888,	// (0x00056a6e) popup_call5_audio_first_window_ParamLimits

0xc888,	// (0x00056a6e) popup_call5_audio_first_window

0xee15,	// (0x00058ffb) call5_swipe_1_pane_g1_ParamLimits

0xee15,	// (0x00058ffb) call5_swipe_1_pane_g1

0x22fe,	// (0x0004c4e4) call5_swipe_1_pane_g2_ParamLimits

0x22fe,	// (0x0004c4e4) call5_swipe_1_pane_g2

0x0001,

0xfcd5,	// (0x00059ebb) call5_swipe_1_pane_g_ParamLimits

0xfcd5,	// (0x00059ebb) call5_swipe_1_pane_g

0x230a,	// (0x0004c4f0) call5_swipe_1_pane_t1_ParamLimits

0x230a,	// (0x0004c4f0) call5_swipe_1_pane_t1

0xee15,	// (0x00058ffb) call5_swipe_2_pane_g1_ParamLimits

0xee15,	// (0x00058ffb) call5_swipe_2_pane_g1

0x231f,	// (0x0004c505) call5_swipe_2_pane_g2_ParamLimits

0x231f,	// (0x0004c505) call5_swipe_2_pane_g2

0x0001,

0xfcda,	// (0x00059ec0) call5_swipe_2_pane_g_ParamLimits

0xfcda,	// (0x00059ec0) call5_swipe_2_pane_g

0x232b,	// (0x0004c511) call5_swipe_2_pane_t1_ParamLimits

0x232b,	// (0x0004c511) call5_swipe_2_pane_t1

0x2340,	// (0x0004c526) sc_swipe_pane_g1_ParamLimits

0x2340,	// (0x0004c526) sc_swipe_pane_g1

0x234d,	// (0x0004c533) sc_swipe_pane_g2_ParamLimits

0x234d,	// (0x0004c533) sc_swipe_pane_g2

0x0001,

0xfcdf,	// (0x00059ec5) sc_swipe_pane_g_ParamLimits

0xfcdf,	// (0x00059ec5) sc_swipe_pane_g

0x2359,	// (0x0004c53f) sc_swipe_pane_t1_ParamLimits

0x2359,	// (0x0004c53f) sc_swipe_pane_t1

0x053e,	// (0x0004a724) main_cmail_launcher_pane

0xc898,	// (0x00056a7e) aid_size_cell_cmail_l_ParamLimits

0xc898,	// (0x00056a7e) aid_size_cell_cmail_l

0xc8a8,	// (0x00056a8e) grid_cmail_l_pane_ParamLimits

0xc8a8,	// (0x00056a8e) grid_cmail_l_pane

0xc8b8,	// (0x00056a9e) cell_cmail_l_pane_ParamLimits

0xc8b8,	// (0x00056a9e) cell_cmail_l_pane

0xc8ce,	// (0x00056ab4) cell_cmail_l_pane_g1_ParamLimits

0xc8ce,	// (0x00056ab4) cell_cmail_l_pane_g1

0xc8da,	// (0x00056ac0) cell_cmail_l_pane_t1_ParamLimits

0xc8da,	// (0x00056ac0) cell_cmail_l_pane_t1

0x236e,	// (0x0004c554) cell_cmail_l_pane_t2_ParamLimits

0x236e,	// (0x0004c554) cell_cmail_l_pane_t2

0x0001,

0xfce4,	// (0x00059eca) cell_cmail_l_pane_t_ParamLimits

0xfce4,	// (0x00059eca) cell_cmail_l_pane_t

0x4a45,	// (0x0004ec2b) grid_highlight_pane_cp018_ParamLimits

0x4a45,	// (0x0004ec2b) grid_highlight_pane_cp018

0x5ae0,	// (0x0004fcc6) main2_pane_ParamLimits

0x5ae0,	// (0x0004fcc6) main2_pane

0x3acb,	// (0x0004dcb1) popup_sp_fs_action_menu_bg_pane_g1

0x3ad3,	// (0x0004dcb9) popup_sp_fs_action_menu_bg_pane_g2

0x3adb,	// (0x0004dcc1) popup_sp_fs_action_menu_bg_pane_g3

0x3ae3,	// (0x0004dcc9) popup_sp_fs_action_menu_bg_pane_g4

0x3aeb,	// (0x0004dcd1) popup_sp_fs_action_menu_bg_pane_g5

0x3af3,	// (0x0004dcd9) popup_sp_fs_action_menu_bg_pane_g6

0x3afb,	// (0x0004dce1) popup_sp_fs_action_menu_bg_pane_g7

0x3b03,	// (0x0004dce9) popup_sp_fs_action_menu_bg_pane_g8

0x3b0b,	// (0x0004dcf1) popup_sp_fs_action_menu_bg_pane_g9

0x3b13,	// (0x0004dcf9) popup_sp_fs_action_menu_bg_pane_g10

0x3b13,	// (0x0004dcf9) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1bb,	// (0x000593a1) popup_sp_fs_action_menu_bg_pane_g

0x06bd,	// (0x0004a8a3) list_medium_line_x2_t3_g3_g1_ParamLimits

0x06bd,	// (0x0004a8a3) list_medium_line_x2_t3_g3_g1

0x06c9,	// (0x0004a8af) list_medium_line_x2_t3_g3_g2_ParamLimits

0x06c9,	// (0x0004a8af) list_medium_line_x2_t3_g3_g2

0x06d5,	// (0x0004a8bb) list_medium_line_x2_t3_g3_g3_ParamLimits

0x06d5,	// (0x0004a8bb) list_medium_line_x2_t3_g3_g3

0x0002,

0xf26b,	// (0x00059451) list_medium_line_x2_t3_g3_g_ParamLimits

0xf26b,	// (0x00059451) list_medium_line_x2_t3_g3_g

0x06e1,	// (0x0004a8c7) list_medium_line_x2_t3_g3_t1_ParamLimits

0x06e1,	// (0x0004a8c7) list_medium_line_x2_t3_g3_t1

0x69b7,	// (0x00050b9d) list_medium_line_x2_t3_g3_t2_ParamLimits

0x69b7,	// (0x00050b9d) list_medium_line_x2_t3_g3_t2

0x06f6,	// (0x0004a8dc) list_medium_line_x2_t3_g3_t3_ParamLimits

0x06f6,	// (0x0004a8dc) list_medium_line_x2_t3_g3_t3

0x0002,

0xf272,	// (0x00059458) list_medium_line_x2_t3_g3_t_ParamLimits

0xf272,	// (0x00059458) list_medium_line_x2_t3_g3_t

0x06bd,	// (0x0004a8a3) list_medium_line_x2_t3_g2_g1_ParamLimits

0x06bd,	// (0x0004a8a3) list_medium_line_x2_t3_g2_g1

0x06d5,	// (0x0004a8bb) list_medium_line_x2_t3_g2_g2_ParamLimits

0x06d5,	// (0x0004a8bb) list_medium_line_x2_t3_g2_g2

0x0001,

0xf279,	// (0x0005945f) list_medium_line_x2_t3_g2_g_ParamLimits

0xf279,	// (0x0005945f) list_medium_line_x2_t3_g2_g

0x070b,	// (0x0004a8f1) list_medium_line_x2_t3_g2_t1_ParamLimits

0x070b,	// (0x0004a8f1) list_medium_line_x2_t3_g2_t1

0x0721,	// (0x0004a907) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0721,	// (0x0004a907) list_medium_line_x2_t3_g2_t2

0x0733,	// (0x0004a919) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0733,	// (0x0004a919) list_medium_line_x2_t3_g2_t3

0x0002,

0xf27e,	// (0x00059464) list_medium_line_x2_t3_g2_t_ParamLimits

0xf27e,	// (0x00059464) list_medium_line_x2_t3_g2_t

0x06bd,	// (0x0004a8a3) list_medium_line_x2_t4_g4_g1_ParamLimits

0x06bd,	// (0x0004a8a3) list_medium_line_x2_t4_g4_g1

0x0751,	// (0x0004a937) list_medium_line_x2_t4_g4_g2_ParamLimits

0x0751,	// (0x0004a937) list_medium_line_x2_t4_g4_g2

0x06c9,	// (0x0004a8af) list_medium_line_x2_t4_g4_g3_ParamLimits

0x06c9,	// (0x0004a8af) list_medium_line_x2_t4_g4_g3

0x075d,	// (0x0004a943) list_medium_line_x2_t4_g4_g4_ParamLimits

0x075d,	// (0x0004a943) list_medium_line_x2_t4_g4_g4

0x0003,

0xf285,	// (0x0005946b) list_medium_line_x2_t4_g4_g_ParamLimits

0xf285,	// (0x0005946b) list_medium_line_x2_t4_g4_g

0x69cb,	// (0x00050bb1) list_medium_line_x2_t4_g4_t1_ParamLimits

0x69cb,	// (0x00050bb1) list_medium_line_x2_t4_g4_t1

0x69e5,	// (0x00050bcb) list_medium_line_x2_t4_g4_t2_ParamLimits

0x69e5,	// (0x00050bcb) list_medium_line_x2_t4_g4_t2

0x69fb,	// (0x00050be1) list_medium_line_x2_t4_g4_t3_ParamLimits

0x69fb,	// (0x00050be1) list_medium_line_x2_t4_g4_t3

0x0769,	// (0x0004a94f) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0769,	// (0x0004a94f) list_medium_line_x2_t4_g4_t4

0x0003,

0xf28e,	// (0x00059474) list_medium_line_x2_t4_g4_t_ParamLimits

0xf28e,	// (0x00059474) list_medium_line_x2_t4_g4_t

0x06bd,	// (0x0004a8a3) list_medium_line_x2_t2_g4_g1_ParamLimits

0x06bd,	// (0x0004a8a3) list_medium_line_x2_t2_g4_g1

0x0751,	// (0x0004a937) list_medium_line_x2_t2_g4_g2_ParamLimits

0x0751,	// (0x0004a937) list_medium_line_x2_t2_g4_g2

0x06c9,	// (0x0004a8af) list_medium_line_x2_t2_g4_g3_ParamLimits

0x06c9,	// (0x0004a8af) list_medium_line_x2_t2_g4_g3

0x06d5,	// (0x0004a8bb) list_medium_line_x2_t2_g4_g4_ParamLimits

0x06d5,	// (0x0004a8bb) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2f5,	// (0x000594db) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2f5,	// (0x000594db) list_medium_line_x2_t2_g4_g

0x077b,	// (0x0004a961) list_medium_line_x2_t2_g4_t1_ParamLimits

0x077b,	// (0x0004a961) list_medium_line_x2_t2_g4_t1

0x06f6,	// (0x0004a8dc) list_medium_line_x2_t2_g4_t2_ParamLimits

0x06f6,	// (0x0004a8dc) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2fe,	// (0x000594e4) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2fe,	// (0x000594e4) list_medium_line_x2_t2_g4_t

0x06bd,	// (0x0004a8a3) list_medium_line_x2_t2_g3_g1_ParamLimits

0x06bd,	// (0x0004a8a3) list_medium_line_x2_t2_g3_g1

0x06c9,	// (0x0004a8af) list_medium_line_x2_t2_g3_g2_ParamLimits

0x06c9,	// (0x0004a8af) list_medium_line_x2_t2_g3_g2

0x06d5,	// (0x0004a8bb) list_medium_line_x2_t2_g3_g3_ParamLimits

0x06d5,	// (0x0004a8bb) list_medium_line_x2_t2_g3_g3

0x0002,

0xf26b,	// (0x00059451) list_medium_line_x2_t2_g3_g_ParamLimits

0xf26b,	// (0x00059451) list_medium_line_x2_t2_g3_g

0x0790,	// (0x0004a976) list_medium_line_x2_t2_g3_t1_ParamLimits

0x0790,	// (0x0004a976) list_medium_line_x2_t2_g3_t1

0x06f6,	// (0x0004a8dc) list_medium_line_x2_t2_g3_t2_ParamLimits

0x06f6,	// (0x0004a8dc) list_medium_line_x2_t2_g3_t2

0x0001,

0xf303,	// (0x000594e9) list_medium_line_x2_t2_g3_t_ParamLimits

0xf303,	// (0x000594e9) list_medium_line_x2_t2_g3_t

0x7905,	// (0x00051aeb) main_sp_fs_list_pane_ParamLimits

0x7905,	// (0x00051aeb) main_sp_fs_list_pane

0x7911,	// (0x00051af7) sp_fs_scroll_pane_ParamLimits

0x7911,	// (0x00051af7) sp_fs_scroll_pane

0x791d,	// (0x00051b03) list_medium_line_x2_t3_t1

0x792d,	// (0x00051b13) list_medium_line_x2_t3_t2

0x07d3,	// (0x0004a9b9) list_medium_line_x2_t3_t3

0x0002,

0xf34e,	// (0x00059534) list_medium_line_x2_t3_t

0x793b,	// (0x00051b21) list_medium_line_x3_t4_t1

0x794b,	// (0x00051b31) list_medium_line_x3_t4_t2

0x07e1,	// (0x0004a9c7) list_medium_line_x3_t4_t3

0x07d3,	// (0x0004a9b9) list_medium_line_x3_t4_t4

0x0003,

0xf355,	// (0x0005953b) list_medium_line_x3_t4_t

0x7959,	// (0x00051b3f) list_medium_line_x4_t5_t1

0x7969,	// (0x00051b4f) list_medium_line_x4_t5_t2

0x07e1,	// (0x0004a9c7) list_medium_line_x4_t5_t3

0x07ef,	// (0x0004a9d5) list_medium_line_x4_t5_t4

0x07d3,	// (0x0004a9b9) list_medium_line_x4_t5_t5

0x0004,

0xf35e,	// (0x00059544) list_medium_line_x4_t5_t

0x06bd,	// (0x0004a8a3) list_medium_line_t4_g4_g1_ParamLimits

0x06bd,	// (0x0004a8a3) list_medium_line_t4_g4_g1

0x075d,	// (0x0004a943) list_medium_line_t4_g4_g2_ParamLimits

0x075d,	// (0x0004a943) list_medium_line_t4_g4_g2

0x07fd,	// (0x0004a9e3) list_medium_line_t4_g4_g3_ParamLimits

0x07fd,	// (0x0004a9e3) list_medium_line_t4_g4_g3

0x06d5,	// (0x0004a8bb) list_medium_line_t4_g4_g4_ParamLimits

0x06d5,	// (0x0004a8bb) list_medium_line_t4_g4_g4

0x0003,

0xf369,	// (0x0005954f) list_medium_line_t4_g4_g_ParamLimits

0xf369,	// (0x0005954f) list_medium_line_t4_g4_g

0x0809,	// (0x0004a9ef) list_medium_line_t4_g4_t1_ParamLimits

0x0809,	// (0x0004a9ef) list_medium_line_t4_g4_t1

0x081e,	// (0x0004aa04) list_medium_line_t4_g4_t2_ParamLimits

0x081e,	// (0x0004aa04) list_medium_line_t4_g4_t2

0x0834,	// (0x0004aa1a) list_medium_line_t4_g4_t3_ParamLimits

0x0834,	// (0x0004aa1a) list_medium_line_t4_g4_t3

0x06f6,	// (0x0004a8dc) list_medium_line_t4_g4_t4_ParamLimits

0x06f6,	// (0x0004a8dc) list_medium_line_t4_g4_t4

0x0003,

0xf372,	// (0x00059558) list_medium_line_t4_g4_t_ParamLimits

0xf372,	// (0x00059558) list_medium_line_t4_g4_t

0x7a8a,	// (0x00051c70) chi_dic_find_pane_g1

0x8af7,	// (0x00052cdd) main_tport_pane

0x13fc,	// (0x0004b5e2) list_medium_line_plain_t1

0x1412,	// (0x0004b5f8) list_medium_line_t2_g2_g1_ParamLimits

0x1412,	// (0x0004b5f8) list_medium_line_t2_g2_g1

0x141e,	// (0x0004b604) list_medium_line_t2_g2_g2_ParamLimits

0x141e,	// (0x0004b604) list_medium_line_t2_g2_g2

0x0001,

0xfa2e,	// (0x00059c14) list_medium_line_t2_g2_g_ParamLimits

0xfa2e,	// (0x00059c14) list_medium_line_t2_g2_g

0xb4f3,	// (0x000556d9) list_medium_line_t2_g2_t1_ParamLimits

0xb4f3,	// (0x000556d9) list_medium_line_t2_g2_t1

0xb50a,	// (0x000556f0) list_medium_line_t2_g2_t2_ParamLimits

0xb50a,	// (0x000556f0) list_medium_line_t2_g2_t2

0x0001,

0xfa33,	// (0x00059c19) list_medium_line_t2_g2_t_ParamLimits

0xfa33,	// (0x00059c19) list_medium_line_t2_g2_t

0x1750,	// (0x0004b936) aid_sp_fs_list_icon_a_sm

0x1758,	// (0x0004b93e) aid_sp_fs_list_icon_d

0x1760,	// (0x0004b946) aid_sp_fs_text_primary

0x1769,	// (0x0004b94f) aid_sp_fs_text_secondary

0x1772,	// (0x0004b958) list_medium_line

0x1772,	// (0x0004b958) list_medium_line_g2

0x1772,	// (0x0004b958) list_medium_line_g3

0x1772,	// (0x0004b958) list_medium_line_plain

0x1772,	// (0x0004b958) list_medium_line_plain_t2

0x1772,	// (0x0004b958) list_medium_line_plain_t3

0x1772,	// (0x0004b958) list_medium_line_right_icon

0x1772,	// (0x0004b958) list_medium_line_right_iconx2

0x1772,	// (0x0004b958) list_medium_line_t2

0x1772,	// (0x0004b958) list_medium_line_t2_g2

0x1772,	// (0x0004b958) list_medium_line_t2_g3

0x1772,	// (0x0004b958) list_medium_line_t2_right_icon

0x1772,	// (0x0004b958) list_medium_line_t2_right_iconx2

0x1772,	// (0x0004b958) list_medium_line_t3

0x1772,	// (0x0004b958) list_medium_line_t3_g2

0x1772,	// (0x0004b958) list_medium_line_t3_g3

0x1772,	// (0x0004b958) list_medium_line_t3_right_iconx2

0x177b,	// (0x0004b961) list_medium_line_t4_g4

0x1784,	// (0x0004b96a) list_medium_line_x2

0x1784,	// (0x0004b96a) list_medium_line_x2_t2_g2

0x1784,	// (0x0004b96a) list_medium_line_x2_t2_g3

0x1784,	// (0x0004b96a) list_medium_line_x2_t2_g4

0x1784,	// (0x0004b96a) list_medium_line_x2_t3

0x1784,	// (0x0004b96a) list_medium_line_x2_t3_g2

0x1784,	// (0x0004b96a) list_medium_line_x2_t3_g3

0x1784,	// (0x0004b96a) list_medium_line_x2_t3_g4

0x1784,	// (0x0004b96a) list_medium_line_x2_t4_g2

0x1784,	// (0x0004b96a) list_medium_line_x2_t4_g4

0x178d,	// (0x0004b973) list_medium_line_x3

0x178d,	// (0x0004b973) list_medium_line_x3_t4

0x178d,	// (0x0004b973) list_medium_line_x3_t4_g4

0x177b,	// (0x0004b961) list_medium_line_x4_t4

0x177b,	// (0x0004b961) list_medium_line_x4_t4_g7

0x177b,	// (0x0004b961) list_medium_line_x4_t5

0x1796,	// (0x0004b97c) list_single_fs_dyc_pane_ParamLimits

0x1796,	// (0x0004b97c) list_single_fs_dyc_pane

0x06bd,	// (0x0004a8a3) list_medium_line_x4_t4_g7_g1_ParamLimits

0x06bd,	// (0x0004a8a3) list_medium_line_x4_t4_g7_g1

0x1ca4,	// (0x0004be8a) list_medium_line_x4_t4_g7_g2_ParamLimits

0x1ca4,	// (0x0004be8a) list_medium_line_x4_t4_g7_g2

0x1cb0,	// (0x0004be96) list_medium_line_x4_t4_g7_g3_ParamLimits

0x1cb0,	// (0x0004be96) list_medium_line_x4_t4_g7_g3

0x1cbf,	// (0x0004bea5) list_medium_line_x4_t4_g7_g4_ParamLimits

0x1cbf,	// (0x0004bea5) list_medium_line_x4_t4_g7_g4

0x1ccb,	// (0x0004beb1) list_medium_line_x4_t4_g7_g5_ParamLimits

0x1ccb,	// (0x0004beb1) list_medium_line_x4_t4_g7_g5

0x1cda,	// (0x0004bec0) list_medium_line_x4_t4_g7_g6_ParamLimits

0x1cda,	// (0x0004bec0) list_medium_line_x4_t4_g7_g6

0x1ce9,	// (0x0004becf) list_medium_line_x4_t4_g7_g7_ParamLimits

0x1ce9,	// (0x0004becf) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbf1,	// (0x00059dd7) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbf1,	// (0x00059dd7) list_medium_line_x4_t4_g7_g

0x1cf5,	// (0x0004bedb) list_medium_line_x4_t4_g7_t1_ParamLimits

0x1cf5,	// (0x0004bedb) list_medium_line_x4_t4_g7_t1

0x1d0a,	// (0x0004bef0) list_medium_line_x4_t4_g7_t2_ParamLimits

0x1d0a,	// (0x0004bef0) list_medium_line_x4_t4_g7_t2

0x1d1f,	// (0x0004bf05) list_medium_line_x4_t4_g7_t3_ParamLimits

0x1d1f,	// (0x0004bf05) list_medium_line_x4_t4_g7_t3

0x1d34,	// (0x0004bf1a) list_medium_line_x4_t4_g7_t4_ParamLimits

0x1d34,	// (0x0004bf1a) list_medium_line_x4_t4_g7_t4

0x1d46,	// (0x0004bf2c) list_medium_line_x4_t4_g7_t5_ParamLimits

0x1d46,	// (0x0004bf2c) list_medium_line_x4_t4_g7_t5

0x0004,

0xfc00,	// (0x00059de6) list_medium_line_x4_t4_g7_t_ParamLimits

0xfc00,	// (0x00059de6) list_medium_line_x4_t4_g7_t

0x1d58,	// (0x0004bf3e) list_single_dyc_row_pane_ParamLimits

0x1d58,	// (0x0004bf3e) list_single_dyc_row_pane

0xc842,	// (0x00056a28) call5_gesture_pane_ParamLimits

0xc842,	// (0x00056a28) call5_gesture_pane

0xc878,	// (0x00056a5e) call5_windows_pane_ParamLimits

0xc878,	// (0x00056a5e) call5_windows_pane

0xc8f0,	// (0x00056ad6) call5_swipe_1_pane_cp_ParamLimits

0xc8f0,	// (0x00056ad6) call5_swipe_1_pane_cp

0xc8fc,	// (0x00056ae2) call5_swipe_2_pane_cp_ParamLimits

0xc8fc,	// (0x00056ae2) call5_swipe_2_pane_cp

0x447c,	// (0x0004e662) call5_image_pane_cp

0xc908,	// (0x00056aee) popup_call5_audio_first_window_cp_ParamLimits

0xc908,	// (0x00056aee) popup_call5_audio_first_window_cp

0x2340,	// (0x0004c526) call5_swipe_1_pane_g1_cp_ParamLimits

0x2340,	// (0x0004c526) call5_swipe_1_pane_g1_cp

0x2380,	// (0x0004c566) call5_swipe_1_pane_g2_cp

0x2359,	// (0x0004c53f) call5_swipe_1_pane_t1_cp_ParamLimits

0x2359,	// (0x0004c53f) call5_swipe_1_pane_t1_cp

0x2340,	// (0x0004c526) call5_swipe_2_pane_g1_cp_ParamLimits

0x2340,	// (0x0004c526) call5_swipe_2_pane_g1_cp

0x2388,	// (0x0004c56e) call5_swipe_2_pane_g2_cp

0x2390,	// (0x0004c576) call5_swipe_2_pane_t1_cp_ParamLimits

0x2390,	// (0x0004c576) call5_swipe_2_pane_t1_cp

0x4a45,	// (0x0004ec2b) main_sp_fs_email_pane

0x23a5,	// (0x0004c58b) main_sp_fs_listscroll_pane_te

0x23ae,	// (0x0004c594) popup_sp_fs_action_menu_pane_ParamLimits

0x23ae,	// (0x0004c594) popup_sp_fs_action_menu_pane

0xebe5,	// (0x00058dcb) bg_sp_fs_ctrlbar_pane_g1

0x23f4,	// (0x0004c5da) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x23fd,	// (0x0004c5e3) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x2406,	// (0x0004c5ec) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xebe5,	// (0x00058dcb) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce9,	// (0x00059ecf) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xe9c4,	// (0x00058baa) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xe9c4,	// (0x00058baa) bg_sp_fs_ctrlbar_ddmenu_pane

0x240f,	// (0x0004c5f5) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x240f,	// (0x0004c5f5) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x241b,	// (0x0004c601) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x241b,	// (0x0004c601) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcf2,	// (0x00059ed8) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcf2,	// (0x00059ed8) main_sp_fs_ctrlbar_ddmenu_pane_g

0x2427,	// (0x0004c60d) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x2427,	// (0x0004c60d) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x2441,	// (0x0004c627) list_medium_line_t2_right_icon_g1

0xc916,	// (0x00056afc) list_medium_line_t2_right_icon_t1

0xc926,	// (0x00056b0c) list_medium_line_t2_right_icon_t2

0x0001,

0xfcf7,	// (0x00059edd) list_medium_line_t2_right_icon_t

0xe76a,	// (0x00058950) bg_sp_fs_ctrlbar_pane_ParamLimits

0xe76a,	// (0x00058950) bg_sp_fs_ctrlbar_pane

0xc98b,	// (0x00056b71) main_sp_fs_ctrlbar_button_pane_cp01

0xc993,	// (0x00056b79) main_sp_fs_ctrlbar_ddmenu_pane

0x2483,	// (0x0004c669) main_sp_fs_ctrlbar_pane_g1

0x248f,	// (0x0004c675) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcfc,	// (0x00059ee2) main_sp_fs_ctrlbar_pane_g

0x249b,	// (0x0004c681) main_sp_fs_ctrlbar_pane_t1

0xc99d,	// (0x00056b83) main_sp_fs_ctrlbar_pane

0xc9b9,	// (0x00056b9f) main_sp_fs_listscroll_pane_te_cp01

0xc9ca,	// (0x00056bb0) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xc9ca,	// (0x00056bb0) popup_sp_fs_action_menu_pane_cp01

0x4a45,	// (0x0004ec2b) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x4a45,	// (0x0004ec2b) bg_sp_fs_highlight_list_pane_cp01

0x24b0,	// (0x0004c696) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x24b0,	// (0x0004c696) sp_fs_action_menu_list_gene_pane_g1

0x24bf,	// (0x0004c6a5) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x24bf,	// (0x0004c6a5) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfd01,	// (0x00059ee7) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfd01,	// (0x00059ee7) sp_fs_action_menu_list_gene_pane_g

0x24cc,	// (0x0004c6b2) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x24cc,	// (0x0004c6b2) sp_fs_action_menu_list_gene_pane_t1

0x24e4,	// (0x0004c6ca) sp_fs_action_menu_list_gene_pane_ParamLimits

0x24e4,	// (0x0004c6ca) sp_fs_action_menu_list_gene_pane

0x2507,	// (0x0004c6ed) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x2507,	// (0x0004c6ed) popup_sp_fs_action_menu_bg_pane

0x2515,	// (0x0004c6fb) sp_fs_action_menu_list_pane_ParamLimits

0x2515,	// (0x0004c6fb) sp_fs_action_menu_list_pane

0x2539,	// (0x0004c71f) sp_fs_scroll_pane_cp01_ParamLimits

0x2539,	// (0x0004c71f) sp_fs_scroll_pane_cp01

0xc9e4,	// (0x00056bca) list_medium_line_plain_t2_t1

0xc9f4,	// (0x00056bda) list_medium_line_plain_t2_t2

0x0001,

0xfd06,	// (0x00059eec) list_medium_line_plain_t2_t

0xca02,	// (0x00056be8) list_medium_line_plain_t3_t1

0xca12,	// (0x00056bf8) list_medium_line_plain_t3_t2

0xca20,	// (0x00056c06) list_medium_line_plain_t3_t3

0x0002,

0xfd0b,	// (0x00059ef1) list_medium_line_plain_t3_t

0x06bd,	// (0x0004a8a3) list_medium_line_x2_t2_g2_g1_ParamLimits

0x06bd,	// (0x0004a8a3) list_medium_line_x2_t2_g2_g1

0x06d5,	// (0x0004a8bb) list_medium_line_x2_t2_g2_g2_ParamLimits

0x06d5,	// (0x0004a8bb) list_medium_line_x2_t2_g2_g2

0x0001,

0xf279,	// (0x0005945f) list_medium_line_x2_t2_g2_g_ParamLimits

0xf279,	// (0x0005945f) list_medium_line_x2_t2_g2_g

0x0809,	// (0x0004a9ef) list_medium_line_x2_t2_g2_t1_ParamLimits

0x0809,	// (0x0004a9ef) list_medium_line_x2_t2_g2_t1

0x06f6,	// (0x0004a8dc) list_medium_line_x2_t2_g2_t2_ParamLimits

0x06f6,	// (0x0004a8dc) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd12,	// (0x00059ef8) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd12,	// (0x00059ef8) list_medium_line_x2_t2_g2_t

0x06bd,	// (0x0004a8a3) list_medium_line_x2_t4_g2_g1_ParamLimits

0x06bd,	// (0x0004a8a3) list_medium_line_x2_t4_g2_g1

0x255f,	// (0x0004c745) list_medium_line_x2_t4_g2_g2_ParamLimits

0x255f,	// (0x0004c745) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd17,	// (0x00059efd) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd17,	// (0x00059efd) list_medium_line_x2_t4_g2_g

0xca2e,	// (0x00056c14) list_medium_line_x2_t4_g2_t1_ParamLimits

0xca2e,	// (0x00056c14) list_medium_line_x2_t4_g2_t1

0xca48,	// (0x00056c2e) list_medium_line_x2_t4_g2_t2_ParamLimits

0xca48,	// (0x00056c2e) list_medium_line_x2_t4_g2_t2

0xca5e,	// (0x00056c44) list_medium_line_x2_t4_g2_t3_ParamLimits

0xca5e,	// (0x00056c44) list_medium_line_x2_t4_g2_t3

0x06f6,	// (0x0004a8dc) list_medium_line_x2_t4_g2_t4_ParamLimits

0x06f6,	// (0x0004a8dc) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd1c,	// (0x00059f02) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd1c,	// (0x00059f02) list_medium_line_x2_t4_g2_t

0x2571,	// (0x0004c757) list_medium_line_t3_right_iconx2_g1

0x2441,	// (0x0004c627) list_medium_line_t3_right_iconx2_g2

0xca73,	// (0x00056c59) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd25,	// (0x00059f0b) list_medium_line_t3_right_iconx2_g

0xca7d,	// (0x00056c63) list_medium_line_t3_right_iconx2_t1

0xca8d,	// (0x00056c73) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd2c,	// (0x00059f12) list_medium_line_t3_right_iconx2_t

0x06bd,	// (0x0004a8a3) list_medium_line_x3_t4_g4_g1_ParamLimits

0x06bd,	// (0x0004a8a3) list_medium_line_x3_t4_g4_g1

0x06c9,	// (0x0004a8af) list_medium_line_x3_t4_g4_g2_ParamLimits

0x06c9,	// (0x0004a8af) list_medium_line_x3_t4_g4_g2

0x075d,	// (0x0004a943) list_medium_line_x3_t4_g4_g3_ParamLimits

0x075d,	// (0x0004a943) list_medium_line_x3_t4_g4_g3

0x2579,	// (0x0004c75f) list_medium_line_x3_t4_g4_g4_ParamLimits

0x2579,	// (0x0004c75f) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd31,	// (0x00059f17) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd31,	// (0x00059f17) list_medium_line_x3_t4_g4_g

0xca9b,	// (0x00056c81) list_medium_line_x3_t4_g4_t1_ParamLimits

0xca9b,	// (0x00056c81) list_medium_line_x3_t4_g4_t1

0xcab2,	// (0x00056c98) list_medium_line_x3_t4_g4_t2_ParamLimits

0xcab2,	// (0x00056c98) list_medium_line_x3_t4_g4_t2

0x2585,	// (0x0004c76b) list_medium_line_x3_t4_g4_t3_ParamLimits

0x2585,	// (0x0004c76b) list_medium_line_x3_t4_g4_t3

0x259a,	// (0x0004c780) list_medium_line_x3_t4_g4_t4_ParamLimits

0x259a,	// (0x0004c780) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd3a,	// (0x00059f20) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd3a,	// (0x00059f20) list_medium_line_x3_t4_g4_t

0xcac7,	// (0x00056cad) list_single_dyc_row_text_pane_t1_ParamLimits

0xcac7,	// (0x00056cad) list_single_dyc_row_text_pane_t1

0xcb04,	// (0x00056cea) list_single_dyc_row_text_pane_t2_ParamLimits

0xcb04,	// (0x00056cea) list_single_dyc_row_text_pane_t2

0x25b7,	// (0x0004c79d) list_single_dyc_row_text_pane_t3_ParamLimits

0x25b7,	// (0x0004c79d) list_single_dyc_row_text_pane_t3

0x0002,

0xfd43,	// (0x00059f29) list_single_dyc_row_text_pane_t_ParamLimits

0xfd43,	// (0x00059f29) list_single_dyc_row_text_pane_t

0x25c9,	// (0x0004c7af) list_single_dyc_row_pane_g1_ParamLimits

0x25c9,	// (0x0004c7af) list_single_dyc_row_pane_g1

0x25d5,	// (0x0004c7bb) list_single_dyc_row_pane_g2_ParamLimits

0x25d5,	// (0x0004c7bb) list_single_dyc_row_pane_g2

0x25e1,	// (0x0004c7c7) list_single_dyc_row_pane_g3_ParamLimits

0x25e1,	// (0x0004c7c7) list_single_dyc_row_pane_g3

0x25ed,	// (0x0004c7d3) list_single_dyc_row_pane_g4_ParamLimits

0x25ed,	// (0x0004c7d3) list_single_dyc_row_pane_g4

0x0003,

0xfd4a,	// (0x00059f30) list_single_dyc_row_pane_g_ParamLimits

0xfd4a,	// (0x00059f30) list_single_dyc_row_pane_g

0x25f9,	// (0x0004c7df) list_single_dyc_row_text_pane_ParamLimits

0x25f9,	// (0x0004c7df) list_single_dyc_row_text_pane

0x053e,	// (0x0004a724) bg_sp_fs_scroll_pane

0x2618,	// (0x0004c7fe) thumb_sp_fs_scroll_pane

0x1412,	// (0x0004b5f8) list_medium_line_g1_ParamLimits

0x1412,	// (0x0004b5f8) list_medium_line_g1

0x2621,	// (0x0004c807) list_medium_line_t1_ParamLimits

0x2621,	// (0x0004c807) list_medium_line_t1

0x06bd,	// (0x0004a8a3) list_medium_line_x2_g1_ParamLimits

0x06bd,	// (0x0004a8a3) list_medium_line_x2_g1

0x06c9,	// (0x0004a8af) list_medium_line_x2_g2_ParamLimits

0x06c9,	// (0x0004a8af) list_medium_line_x2_g2

0x0001,

0xfd53,	// (0x00059f39) list_medium_line_x2_g_ParamLimits

0xfd53,	// (0x00059f39) list_medium_line_x2_g

0x2636,	// (0x0004c81c) list_medium_line_x2_t1_ParamLimits

0x2636,	// (0x0004c81c) list_medium_line_x2_t1

0x06bd,	// (0x0004a8a3) list_medium_line_x3_g1_ParamLimits

0x06bd,	// (0x0004a8a3) list_medium_line_x3_g1

0x06c9,	// (0x0004a8af) list_medium_line_x3_g2_ParamLimits

0x06c9,	// (0x0004a8af) list_medium_line_x3_g2

0x0001,

0xfd53,	// (0x00059f39) list_medium_line_x3_g_ParamLimits

0xfd53,	// (0x00059f39) list_medium_line_x3_g

0x2636,	// (0x0004c81c) list_medium_line_x3_t1_ParamLimits

0x2636,	// (0x0004c81c) list_medium_line_x3_t1

0x264c,	// (0x0004c832) thumb_sp_fs_scroll_pane_g1

0x2655,	// (0x0004c83b) thumb_sp_fs_scroll_pane_g2

0x265e,	// (0x0004c844) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd58,	// (0x00059f3e) thumb_sp_fs_scroll_pane_g

0x264c,	// (0x0004c832) bg_sp_fs_scroll_pane_g1

0x2655,	// (0x0004c83b) bg_sp_fs_scroll_pane_g2

0x265e,	// (0x0004c844) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd58,	// (0x00059f3e) bg_sp_fs_scroll_pane_g

0x06bd,	// (0x0004a8a3) list_medium_line_x2_t3_g4_g1_ParamLimits

0x06bd,	// (0x0004a8a3) list_medium_line_x2_t3_g4_g1

0x0751,	// (0x0004a937) list_medium_line_x2_t3_g4_g2_ParamLimits

0x0751,	// (0x0004a937) list_medium_line_x2_t3_g4_g2

0x06c9,	// (0x0004a8af) list_medium_line_x2_t3_g4_g3_ParamLimits

0x06c9,	// (0x0004a8af) list_medium_line_x2_t3_g4_g3

0x06d5,	// (0x0004a8bb) list_medium_line_x2_t3_g4_g4_ParamLimits

0x06d5,	// (0x0004a8bb) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2f5,	// (0x000594db) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2f5,	// (0x000594db) list_medium_line_x2_t3_g4_g

0xcb5e,	// (0x00056d44) list_medium_line_x2_t3_g4_t1_ParamLimits

0xcb5e,	// (0x00056d44) list_medium_line_x2_t3_g4_t1

0xcb74,	// (0x00056d5a) list_medium_line_x2_t3_g4_t2_ParamLimits

0xcb74,	// (0x00056d5a) list_medium_line_x2_t3_g4_t2

0x06f6,	// (0x0004a8dc) list_medium_line_x2_t3_g4_t3_ParamLimits

0x06f6,	// (0x0004a8dc) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd5f,	// (0x00059f45) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd5f,	// (0x00059f45) list_medium_line_x2_t3_g4_t

0x1412,	// (0x0004b5f8) list_medium_line_g2_g1_ParamLimits

0x1412,	// (0x0004b5f8) list_medium_line_g2_g1

0x141e,	// (0x0004b604) list_medium_line_g2_g2_ParamLimits

0x141e,	// (0x0004b604) list_medium_line_g2_g2

0x0001,

0xfa2e,	// (0x00059c14) list_medium_line_g2_g_ParamLimits

0xfa2e,	// (0x00059c14) list_medium_line_g2_g

0x2667,	// (0x0004c84d) list_medium_line_g2_t1_ParamLimits

0x2667,	// (0x0004c84d) list_medium_line_g2_t1

0x1412,	// (0x0004b5f8) list_medium_line_t3_g2_g1_ParamLimits

0x1412,	// (0x0004b5f8) list_medium_line_t3_g2_g1

0x141e,	// (0x0004b604) list_medium_line_t3_g2_g2_ParamLimits

0x141e,	// (0x0004b604) list_medium_line_t3_g2_g2

0x0001,

0xfa2e,	// (0x00059c14) list_medium_line_t3_g2_g_ParamLimits

0xfa2e,	// (0x00059c14) list_medium_line_t3_g2_g

0xcb8d,	// (0x00056d73) list_medium_line_t3_g2_t1_ParamLimits

0xcb8d,	// (0x00056d73) list_medium_line_t3_g2_t1

0xcba4,	// (0x00056d8a) list_medium_line_t3_g2_t2_ParamLimits

0xcba4,	// (0x00056d8a) list_medium_line_t3_g2_t2

0xcbb9,	// (0x00056d9f) list_medium_line_t3_g2_t3_ParamLimits

0xcbb9,	// (0x00056d9f) list_medium_line_t3_g2_t3

0x0002,

0xfd66,	// (0x00059f4c) list_medium_line_t3_g2_t_ParamLimits

0xfd66,	// (0x00059f4c) list_medium_line_t3_g2_t

0x2441,	// (0x0004c627) list_medium_line_right_icon_g1

0x267c,	// (0x0004c862) list_medium_line_right_icon_t1

0x1412,	// (0x0004b5f8) list_medium_line_t2_g1_ParamLimits

0x1412,	// (0x0004b5f8) list_medium_line_t2_g1

0xcbd2,	// (0x00056db8) list_medium_line_t2_t1_ParamLimits

0xcbd2,	// (0x00056db8) list_medium_line_t2_t1

0xcbec,	// (0x00056dd2) list_medium_line_t2_t2_ParamLimits

0xcbec,	// (0x00056dd2) list_medium_line_t2_t2

0x0001,

0xfd6d,	// (0x00059f53) list_medium_line_t2_t_ParamLimits

0xfd6d,	// (0x00059f53) list_medium_line_t2_t

0x1412,	// (0x0004b5f8) list_medium_line_t3_g1_ParamLimits

0x1412,	// (0x0004b5f8) list_medium_line_t3_g1

0xcc01,	// (0x00056de7) list_medium_line_t3_t1_ParamLimits

0xcc01,	// (0x00056de7) list_medium_line_t3_t1

0xcc1b,	// (0x00056e01) list_medium_line_t3_t2_ParamLimits

0xcc1b,	// (0x00056e01) list_medium_line_t3_t2

0xcc31,	// (0x00056e17) list_medium_line_t3_t3_ParamLimits

0xcc31,	// (0x00056e17) list_medium_line_t3_t3

0x0002,

0xfd72,	// (0x00059f58) list_medium_line_t3_t_ParamLimits

0xfd72,	// (0x00059f58) list_medium_line_t3_t

0x1412,	// (0x0004b5f8) list_medium_line_g3_g1_ParamLimits

0x1412,	// (0x0004b5f8) list_medium_line_g3_g1

0x268a,	// (0x0004c870) list_medium_line_g3_g2_ParamLimits

0x268a,	// (0x0004c870) list_medium_line_g3_g2

0x141e,	// (0x0004b604) list_medium_line_g3_g3_ParamLimits

0x141e,	// (0x0004b604) list_medium_line_g3_g3

0x0002,

0xfd79,	// (0x00059f5f) list_medium_line_g3_g_ParamLimits

0xfd79,	// (0x00059f5f) list_medium_line_g3_g

0x2696,	// (0x0004c87c) list_medium_line_g3_t1_ParamLimits

0x2696,	// (0x0004c87c) list_medium_line_g3_t1

0x1412,	// (0x0004b5f8) list_medium_line_t2_g3_g1_ParamLimits

0x1412,	// (0x0004b5f8) list_medium_line_t2_g3_g1

0x268a,	// (0x0004c870) list_medium_line_t2_g3_g2_ParamLimits

0x268a,	// (0x0004c870) list_medium_line_t2_g3_g2

0x141e,	// (0x0004b604) list_medium_line_t2_g3_g3_ParamLimits

0x141e,	// (0x0004b604) list_medium_line_t2_g3_g3

0x0002,

0xfd79,	// (0x00059f5f) list_medium_line_t2_g3_g_ParamLimits

0xfd79,	// (0x00059f5f) list_medium_line_t2_g3_g

0xcc46,	// (0x00056e2c) list_medium_line_t2_g3_t1_ParamLimits

0xcc46,	// (0x00056e2c) list_medium_line_t2_g3_t1

0xcc5d,	// (0x00056e43) list_medium_line_t2_g3_t2_ParamLimits

0xcc5d,	// (0x00056e43) list_medium_line_t2_g3_t2

0x0001,

0xfd80,	// (0x00059f66) list_medium_line_t2_g3_t_ParamLimits

0xfd80,	// (0x00059f66) list_medium_line_t2_g3_t

0x1412,	// (0x0004b5f8) list_medium_line_t3_g3_g1_ParamLimits

0x1412,	// (0x0004b5f8) list_medium_line_t3_g3_g1

0x268a,	// (0x0004c870) list_medium_line_t3_g3_g2_ParamLimits

0x268a,	// (0x0004c870) list_medium_line_t3_g3_g2

0x141e,	// (0x0004b604) list_medium_line_t3_g3_g3_ParamLimits

0x141e,	// (0x0004b604) list_medium_line_t3_g3_g3

0x0002,

0xfd79,	// (0x00059f5f) list_medium_line_t3_g3_g_ParamLimits

0xfd79,	// (0x00059f5f) list_medium_line_t3_g3_g

0xcc72,	// (0x00056e58) list_medium_line_t3_g3_t1_ParamLimits

0xcc72,	// (0x00056e58) list_medium_line_t3_g3_t1

0xcc86,	// (0x00056e6c) list_medium_line_t3_g3_t2_ParamLimits

0xcc86,	// (0x00056e6c) list_medium_line_t3_g3_t2

0xcc98,	// (0x00056e7e) list_medium_line_t3_g3_t3_ParamLimits

0xcc98,	// (0x00056e7e) list_medium_line_t3_g3_t3

0x0002,

0xfd85,	// (0x00059f6b) list_medium_line_t3_g3_t_ParamLimits

0xfd85,	// (0x00059f6b) list_medium_line_t3_g3_t

0x2571,	// (0x0004c757) list_medium_line_right_iconx2_g1

0x2441,	// (0x0004c627) list_medium_line_right_iconx2_g2

0x0001,

0xfd8c,	// (0x00059f72) list_medium_line_right_iconx2_g

0x26ab,	// (0x0004c891) list_medium_line_right_iconx2_t1

0x2571,	// (0x0004c757) list_medium_line_t2_right_iconx2_g1

0x2441,	// (0x0004c627) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd8c,	// (0x00059f72) list_medium_line_t2_right_iconx2_g

0xccac,	// (0x00056e92) list_medium_line_t2_right_iconx2_t1

0xccbc,	// (0x00056ea2) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd91,	// (0x00059f77) list_medium_line_t2_right_iconx2_t

0x26b9,	// (0x0004c89f) list_medium_line_x4_t4_t1

0xccca,	// (0x00056eb0) list_medium_line_x4_t4_t2

0xccda,	// (0x00056ec0) list_medium_line_x4_t4_t3

0xccea,	// (0x00056ed0) list_medium_line_x4_t4_t4

0x0003,

0xfd96,	// (0x00059f7c) list_medium_line_x4_t4_t

0xcd23,	// (0x00056f09) tport_appsw_pane_ParamLimits

0xcd23,	// (0x00056f09) tport_appsw_pane

0xcd31,	// (0x00056f17) tport_contact_pane_ParamLimits

0xcd31,	// (0x00056f17) tport_contact_pane

0xcd3f,	// (0x00056f25) tport_listscroll_pane_ParamLimits

0xcd3f,	// (0x00056f25) tport_listscroll_pane

0xcd4d,	// (0x00056f33) cell_tport_appsw_pane_ParamLimits

0xcd4d,	// (0x00056f33) cell_tport_appsw_pane

0xee7a,	// (0x00059060) tport_appsw_pane_g1_ParamLimits

0xee7a,	// (0x00059060) tport_appsw_pane_g1

0x26c7,	// (0x0004c8ad) tport_contact_pane_g1

0x26d0,	// (0x0004c8b6) tport_contact_pane_t1

0x26de,	// (0x0004c8c4) tport_contact_pane_t2

0x0001,

0xfd9f,	// (0x00059f85) tport_contact_pane_t

0x26ec,	// (0x0004c8d2) list_tport_pane

0x26f5,	// (0x0004c8db) scroll_pane_cp_030

0xcd78,	// (0x00056f5e) cell_tport_appsw_pane_g1

0x270e,	// (0x0004c8f4) cell_tport_appsw_pane_t1

0x053e,	// (0x0004a724) grid_highlight_pane_cp019

0xcd88,	// (0x00056f6e) list_tport_double_graphic_pane_ParamLimits

0xcd88,	// (0x00056f6e) list_tport_double_graphic_pane

0x4a45,	// (0x0004ec2b) list_highlight_pane_cp023_ParamLimits

0x4a45,	// (0x0004ec2b) list_highlight_pane_cp023

0xcd99,	// (0x00056f7f) list_tport_double_graphic_pane_g1_ParamLimits

0xcd99,	// (0x00056f7f) list_tport_double_graphic_pane_g1

0xcda6,	// (0x00056f8c) list_tport_double_graphic_pane_t1_ParamLimits

0xcda6,	// (0x00056f8c) list_tport_double_graphic_pane_t1

0xcdbb,	// (0x00056fa1) list_tport_double_graphic_pane_t2_ParamLimits

0xcdbb,	// (0x00056fa1) list_tport_double_graphic_pane_t2

0x0001,

0xfdab,	// (0x00059f91) list_tport_double_graphic_pane_t_ParamLimits

0xfdab,	// (0x00059f91) list_tport_double_graphic_pane_t

0x053e,	// (0x0004a724) main_cale_note_pane

0xacf0,	// (0x00054ed6) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xacf0,	// (0x00054ed6) cell_vitu2_function_top_wide_pane_cp01

0xc520,	// (0x00056706) wait_bar_pane_cp05_ParamLimits

0x053e,	// (0x0004a724) listscroll_cmail_pane

0x2724,	// (0x0004c90a) list_cmail_pane

0xcdd7,	// (0x00056fbd) list_cmail_body_pane

0xcdec,	// (0x00056fd2) list_single_cmail_header_caption_pane

0xce06,	// (0x00056fec) list_single_cmail_header_detail_pane_ParamLimits

0xce06,	// (0x00056fec) list_single_cmail_header_detail_pane

0xce35,	// (0x0005701b) list_single_cmail_header_caption_pane_t1

0xce45,	// (0x0005702b) list_single_cmail_header_detail_pane_g1_ParamLimits

0xce45,	// (0x0005702b) list_single_cmail_header_detail_pane_g1

0x2744,	// (0x0004c92a) list_single_cmail_header_detail_pane_g2_ParamLimits

0x2744,	// (0x0004c92a) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdb0,	// (0x00059f96) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdb0,	// (0x00059f96) list_single_cmail_header_detail_pane_g

0x275d,	// (0x0004c943) list_single_cmail_header_detail_pane_t1_ParamLimits

0x275d,	// (0x0004c943) list_single_cmail_header_detail_pane_t1

0x279b,	// (0x0004c981) list_single_cmail_header_editor_pane_bg_ParamLimits

0x279b,	// (0x0004c981) list_single_cmail_header_editor_pane_bg

0x1fe2,	// (0x0004c1c8) list_cmail_body_pane_g1

0x27ad,	// (0x0004c993) list_cmail_body_pane_t1

0x119e,	// (0x0004b384) list_single_cmail_header_editor_pane_bg_g1

0x3e32,	// (0x0004e018) list_single_cmail_header_editor_pane_bg_g1_copy1

0x11ae,	// (0x0004b394) list_single_cmail_header_editor_pane_bg_g1_copy2

0x11a6,	// (0x0004b38c) list_single_cmail_header_editor_pane_bg_g1_copy3

0x140a,	// (0x0004b5f0) list_single_cmail_header_editor_pane_bg_g1_copy4

0x11ce,	// (0x0004b3b4) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x11be,	// (0x0004b3a4) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x11c6,	// (0x0004b3ac) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x3e12,	// (0x0004dff8) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xce83,	// (0x00057069) calenote_gesture_pane_ParamLimits

0xce83,	// (0x00057069) calenote_gesture_pane

0xce9d,	// (0x00057083) calenote_window_pane_ParamLimits

0xce9d,	// (0x00057083) calenote_window_pane

0x27bb,	// (0x0004c9a1) popup_note_window_cp01

0xceb5,	// (0x0005709b) calenote_swipe_1_pane_ParamLimits

0xceb5,	// (0x0005709b) calenote_swipe_1_pane

0xc8fc,	// (0x00056ae2) calenote_swipe_2_pane_ParamLimits

0xc8fc,	// (0x00056ae2) calenote_swipe_2_pane

0x2340,	// (0x0004c526) calenote_swipe_1_pane_g1_ParamLimits

0x2340,	// (0x0004c526) calenote_swipe_1_pane_g1

0x234d,	// (0x0004c533) calenote_swipe_1_pane_g2_ParamLimits

0x234d,	// (0x0004c533) calenote_swipe_1_pane_g2

0x0001,

0xfcdf,	// (0x00059ec5) calenote_swipe_1_pane_g_ParamLimits

0xfcdf,	// (0x00059ec5) calenote_swipe_1_pane_g

0x27cd,	// (0x0004c9b3) calenote_swipe_1_pane_t1_ParamLimits

0x27cd,	// (0x0004c9b3) calenote_swipe_1_pane_t1

0x2340,	// (0x0004c526) calenote_swipe_2_pane_g1_ParamLimits

0x2340,	// (0x0004c526) calenote_swipe_2_pane_g1

0x27ec,	// (0x0004c9d2) calenote_swipe_2_pane_g2_ParamLimits

0x27ec,	// (0x0004c9d2) calenote_swipe_2_pane_g2

0x0001,

0xfdbc,	// (0x00059fa2) calenote_swipe_2_pane_g_ParamLimits

0xfdbc,	// (0x00059fa2) calenote_swipe_2_pane_g

0x27f8,	// (0x0004c9de) calenote_swipe_2_pane_t1_ParamLimits

0x27f8,	// (0x0004c9de) calenote_swipe_2_pane_t1

0x053e,	// (0x0004a724) main_mup_navstr_pane

0x9aa2,	// (0x00053c88) main_mup3_pane_t7_ParamLimits

0x9aa2,	// (0x00053c88) main_mup3_pane_t7

0xa471,	// (0x00054657) main_mp4_pane_g6_ParamLimits

0xa471,	// (0x00054657) main_mp4_pane_g6

0xa7e1,	// (0x000549c7) main_image3_pane_t4_ParamLimits

0xa7e1,	// (0x000549c7) main_image3_pane_t4

0xcec8,	// (0x000570ae) popup_navstr_preview_pane_ParamLimits

0xcec8,	// (0x000570ae) popup_navstr_preview_pane

0xced4,	// (0x000570ba) scroll_navstr_pane_ParamLimits

0xced4,	// (0x000570ba) scroll_navstr_pane

0x053e,	// (0x0004a724) bg_popup_preview_window_pane_cp04

0x281f,	// (0x0004ca05) popup_navstr_preview_pane_t1

0xcee0,	// (0x000570c6) scroll_navstr_pane_g1_ParamLimits

0xcee0,	// (0x000570c6) scroll_navstr_pane_g1

0xceed,	// (0x000570d3) scroll_navstr_pane_t1_ParamLimits

0xceed,	// (0x000570d3) scroll_navstr_pane_t1

0x27c4,	// (0x0004c9aa) bg_button_pane_cp014

0x27c4,	// (0x0004c9aa) bg_button_pane_cp030

0xc7e8,	// (0x000569ce) list_double_fisheye_pane_g4_ParamLimits

0xc7e8,	// (0x000569ce) list_double_fisheye_pane_g4

0xc7f4,	// (0x000569da) list_double_fisheye_pane_g5_ParamLimits

0xc7f4,	// (0x000569da) list_double_fisheye_pane_g5

0x272c,	// (0x0004c912) sp_fs_scroll_pane_cp03

0x2483,	// (0x0004c669) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x248f,	// (0x0004c675) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcfc,	// (0x00059ee2) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x249b,	// (0x0004c681) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xcdcd,	// (0x00056fb3) sp_fs_scroll_pane_cp02

0x3b36,	// (0x0004dd1c) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x3b36,	// (0x0004dd1c) popup_sp_fs_calendar_preview_list_single_pane

0x053e,	// (0x0004a724) main_cam6_pano_pane

0x4a45,	// (0x0004ec2b) main_mup3_pane_ParamLimits

0x053e,	// (0x0004a724) main_phacti_pane

0xc3f1,	// (0x000565d7) bg_button_pane_cp11

0xc409,	// (0x000565ef) main_mobtv_info_pane_g2_ParamLimits

0xc409,	// (0x000565ef) main_mobtv_info_pane_g2

0x0001,

0xfc5c,	// (0x00059e42) main_mobtv_info_pane_g_ParamLimits

0xfc5c,	// (0x00059e42) main_mobtv_info_pane_g

0xc5bd,	// (0x000567a3) sc_clock_pane_t5_ParamLimits

0xc5bd,	// (0x000567a3) sc_clock_pane_t5

0xc662,	// (0x00056848) main_radioblah_pane_g1_ParamLimits

0x2272,	// (0x0004c458) main_radioblah_pane_t3_ParamLimits

0x2272,	// (0x0004c458) main_radioblah_pane_t3

0x228a,	// (0x0004c470) main_radioblah_pane_t4_ParamLimits

0x228a,	// (0x0004c470) main_radioblah_pane_t4

0xc680,	// (0x00056866) main_radioblah_text_pane_ParamLimits

0xc680,	// (0x00056866) main_radioblah_text_pane

0xc68d,	// (0x00056873) main_radioblah_info_pane_g1_ParamLimits

0xc726,	// (0x0005690c) main_radioblah_info_pane_t4_ParamLimits

0xc726,	// (0x0005690c) main_radioblah_info_pane_t4

0x4a45,	// (0x0004ec2b) main_sp_fs_calendar_pane

0xceff,	// (0x000570e5) main_phacti_pane_g1

0xcf07,	// (0x000570ed) phacti_note_pane_ParamLimits

0xcf07,	// (0x000570ed) phacti_note_pane

0x2836,	// (0x0004ca1c) phacti_term_pane_ParamLimits

0x2836,	// (0x0004ca1c) phacti_term_pane

0x284b,	// (0x0004ca31) phacti_note_pane_t1_ParamLimits

0x284b,	// (0x0004ca31) phacti_note_pane_t1

0x2862,	// (0x0004ca48) phacti_term_pane_g1

0x286a,	// (0x0004ca50) phacti_term_pane_t1_ParamLimits

0x286a,	// (0x0004ca50) phacti_term_pane_t1

0x2894,	// (0x0004ca7a) popup_sp_fs_calendar_preview_list_single_pane_g1

0x289c,	// (0x0004ca82) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdc6,	// (0x00059fac) popup_sp_fs_calendar_preview_list_single_pane_g

0x28a4,	// (0x0004ca8a) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x28a4,	// (0x0004ca8a) popup_sp_fs_calendar_preview_list_single_pane_t1

0x28ba,	// (0x0004caa0) aid_popup_sp_fs_bg_corner_pane

0xebe5,	// (0x00058dcb) popup_sp_fs_calendar_preview_bg_pane_g1

0x053e,	// (0x0004a724) popup_sp_fs_calendar_preview_bg_pane

0x28c2,	// (0x0004caa8) popup_sp_fs_calendar_preview_list_pane

0x4a45,	// (0x0004ec2b) bg_main_sp_fs_cale_pane_ParamLimits

0x4a45,	// (0x0004ec2b) bg_main_sp_fs_cale_pane

0x28ca,	// (0x0004cab0) listscroll_cale_mrui_pane_ParamLimits

0x28ca,	// (0x0004cab0) listscroll_cale_mrui_pane

0x28de,	// (0x0004cac4) listscroll_sp_fs_schedule_track_pane

0x28e7,	// (0x0004cacd) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x28e7,	// (0x0004cacd) main_sp_fs_ctrlbar_pane_cp01

0x28f8,	// (0x0004cade) main_sp_fs_ribbon_pane

0x2900,	// (0x0004cae6) popup_sp_fs_cale_preview_window

0xcf46,	// (0x0005712c) list_single_sp_fs_schedule_track_pane_ParamLimits

0xcf46,	// (0x0005712c) list_single_sp_fs_schedule_track_pane

0x1105,	// (0x0004b2eb) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x1105,	// (0x0004b2eb) bg_sp_fs_highlight_list_pane_cp03

0xcf58,	// (0x0005713e) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xcf58,	// (0x0005713e) list_single_sp_fs_schedule_track_pane_g1

0xcf64,	// (0x0005714a) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xcf64,	// (0x0005714a) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdcb,	// (0x00059fb1) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdcb,	// (0x00059fb1) list_single_sp_fs_schedule_track_pane_g

0xcf70,	// (0x00057156) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xcf70,	// (0x00057156) list_single_sp_fs_schedule_track_pane_t1

0xcf8e,	// (0x00057174) sp_fs_schedule_track_pane_ParamLimits

0xcf8e,	// (0x00057174) sp_fs_schedule_track_pane

0x2912,	// (0x0004caf8) sp_fs_schedule_track_pane_g1

0x291a,	// (0x0004cb00) sp_fs_schedule_track_pane_g2

0x2922,	// (0x0004cb08) sp_fs_schedule_track_pane_g3

0x292a,	// (0x0004cb10) sp_fs_schedule_track_pane_g4

0x2932,	// (0x0004cb18) sp_fs_schedule_track_pane_g5

0x0004,

0xfdd0,	// (0x00059fb6) sp_fs_schedule_track_pane_g

0x119e,	// (0x0004b384) bg_sp_fs_schedule_viewer_highlight_g1

0x3e32,	// (0x0004e018) bg_sp_fs_schedule_viewer_highlight_g2

0x11a6,	// (0x0004b38c) bg_sp_fs_schedule_viewer_highlight_g3

0x11ae,	// (0x0004b394) bg_sp_fs_schedule_viewer_highlight_g4

0x140a,	// (0x0004b5f0) bg_sp_fs_schedule_viewer_highlight_g5

0x11be,	// (0x0004b3a4) bg_sp_fs_schedule_viewer_highlight_g6

0x11c6,	// (0x0004b3ac) bg_sp_fs_schedule_viewer_highlight_g7

0x11ce,	// (0x0004b3b4) bg_sp_fs_schedule_viewer_highlight_g8

0x3e12,	// (0x0004dff8) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfddb,	// (0x00059fc1) bg_sp_fs_schedule_viewer_highlight_g

0x053e,	// (0x0004a724) bg_main_sp_fs_ribbon_pane

0xcfa0,	// (0x00057186) main_sp_fs_ribbon_pane_g1

0x293a,	// (0x0004cb20) main_sp_fs_ribbon_pane_t1

0xcfa9,	// (0x0005718f) main_sp_fs_ribbon_pane_t2

0x2949,	// (0x0004cb2f) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdee,	// (0x00059fd4) main_sp_fs_ribbon_pane_t

0x2958,	// (0x0004cb3e) main_sp_fs_ribbon_scheduler_pane

0x2960,	// (0x0004cb46) bg_main_sp_fs_ribbon_pane_g1

0x2969,	// (0x0004cb4f) bg_main_sp_fs_ribbon_pane_g2

0x2972,	// (0x0004cb58) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdf5,	// (0x00059fdb) bg_main_sp_fs_ribbon_pane_g

0x297a,	// (0x0004cb60) main_sp_fs_ribbon_scheduler_pane_g1

0x2983,	// (0x0004cb69) main_sp_fs_ribbon_scheduler_pane_g2

0x298c,	// (0x0004cb72) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdfc,	// (0x00059fe2) main_sp_fs_ribbon_scheduler_pane_g

0x2995,	// (0x0004cb7b) list_cale_mrui_pane

0xcfb8,	// (0x0005719e) sp_fs_scroll_pane_cp07_ParamLimits

0xcfb8,	// (0x0005719e) sp_fs_scroll_pane_cp07

0xcfce,	// (0x000571b4) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xcfce,	// (0x000571b4) bg_sp_fs_schedule_viewer_highlight

0x299e,	// (0x0004cb84) list_single_sp_fs_schedule_track_pane_cp01

0x29a6,	// (0x0004cb8c) list_sp_fs_schedule_track_pane

0x29ae,	// (0x0004cb94) sp_fs_scroll_pane_cp06_ParamLimits

0x29ae,	// (0x0004cb94) sp_fs_scroll_pane_cp06

0xebe5,	// (0x00058dcb) bgmain_sp_fs_calendar_pane_g1

0xcfdb,	// (0x000571c1) list_single_cale_mrui_pane_ParamLimits

0xcfdb,	// (0x000571c1) list_single_cale_mrui_pane

0x29c0,	// (0x0004cba6) list_single_cale_mrui_row_pane_ParamLimits

0x29c0,	// (0x0004cba6) list_single_cale_mrui_row_pane

0x29cd,	// (0x0004cbb3) list_single_cale_mrui_row_pane_g1_ParamLimits

0x29cd,	// (0x0004cbb3) list_single_cale_mrui_row_pane_g1

0x2a05,	// (0x0004cbeb) list_single_cale_mrui_row_pane_t1_ParamLimits

0x2a05,	// (0x0004cbeb) list_single_cale_mrui_row_pane_t1

0xcffd,	// (0x000571e3) list_single_cale_mrui_row_pane_t2_ParamLimits

0xcffd,	// (0x000571e3) list_single_cale_mrui_row_pane_t2

0x2a17,	// (0x0004cbfd) list_single_cale_mrui_row_pane_t3_ParamLimits

0x2a17,	// (0x0004cbfd) list_single_cale_mrui_row_pane_t3

0x2a46,	// (0x0004cc2c) list_single_cale_mrui_row_pane_t4_ParamLimits

0x2a46,	// (0x0004cc2c) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe08,	// (0x00059fee) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe08,	// (0x00059fee) list_single_cale_mrui_row_pane_t

0xd063,	// (0x00057249) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xd063,	// (0x00057249) list_single_cmail_header_editor_pane_bg_cp01

0xd087,	// (0x0005726d) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xd087,	// (0x0005726d) list_single_cmail_header_editor_pane_bg_cp02

0xd0a3,	// (0x00057289) main_radioblah_text_pane_t1_ParamLimits

0xd0a3,	// (0x00057289) main_radioblah_text_pane_t1

0x2a75,	// (0x0004cc5b) cam6_indi_pane_cp01

0x2a7d,	// (0x0004cc63) cam6_mode_pane_cp01

0x2a85,	// (0x0004cc6b) cam6_pano_pane

0x2a8e,	// (0x0004cc74) cam6_zoom_pane_cp01

0x2a98,	// (0x0004cc7e) cam6_pano_image_pane

0x2aa1,	// (0x0004cc87) cam6_pano_pane_g1

0x1fe2,	// (0x0004c1c8) cam6_pano_pane_g2

0x2aaa,	// (0x0004cc90) cam6_pano_pane_g3

0x2ab3,	// (0x0004cc99) cam6_pano_pane_g4

0x0a99,	// (0x0004ac7f) cam6_pano_pane_g5

0x2abc,	// (0x0004cca2) cam6_pano_pane_g6

0x2ac4,	// (0x0004ccaa) cam6_pano_pane_g7

0x2acc,	// (0x0004ccb2) cam6_pano_pane_g8

0x2ad5,	// (0x0004ccbb) cam6_pano_pane_g9

0x0008,

0xfe11,	// (0x00059ff7) cam6_pano_pane_g

0x053e,	// (0x0004a724) main_browser_tag_pane

0x2817,	// (0x0004c9fd) grid_navstr_albumart_pane

0x2ae0,	// (0x0004ccc6) cell_navstr_albumart_pane_ParamLimits

0x2ae0,	// (0x0004ccc6) cell_navstr_albumart_pane

0x2afc,	// (0x0004cce2) cell_navstr_albumart_pane_g1

0xe583,	// (0x00058769) cell_navstr_albumart_pane_g2

0xe593,	// (0x00058779) cell_navstr_albumart_pane_g3

0xe58b,	// (0x00058771) cell_navstr_albumart_pane_g4

0x0003,

0xfe24,	// (0x0005a00a) cell_navstr_albumart_pane_g

0xd0be,	// (0x000572a4) bt_list_pane_ParamLimits

0xd0be,	// (0x000572a4) bt_list_pane

0xd0d7,	// (0x000572bd) bt_list_pane_t1

0xd0e6,	// (0x000572cc) bt_list_pane_t2

0x0001,

0xfe2d,	// (0x0005a013) bt_list_pane_t

0x053e,	// (0x0004a724) main_cale_prevew_pane

0xd0f5,	// (0x000572db) popup_cale_preview_window_ParamLimits

0xd0f5,	// (0x000572db) popup_cale_preview_window

0x4a45,	// (0x0004ec2b) bg_popup_preview_window_pane_cp05_ParamLimits

0x4a45,	// (0x0004ec2b) bg_popup_preview_window_pane_cp05

0x2b04,	// (0x0004ccea) list_cale_preview_pane_ParamLimits

0x2b04,	// (0x0004ccea) list_cale_preview_pane

0xd110,	// (0x000572f6) list_double_cale_preview_pane_ParamLimits

0xd110,	// (0x000572f6) list_double_cale_preview_pane

0xd124,	// (0x0005730a) list_single_cale_preview_pane_ParamLimits

0xd124,	// (0x0005730a) list_single_cale_preview_pane

0xd13c,	// (0x00057322) list_single_cale_preview_pane_g1

0xd144,	// (0x0005732a) list_single_cale_preview_pane_t1_ParamLimits

0xd144,	// (0x0005732a) list_single_cale_preview_pane_t1

0xd159,	// (0x0005733f) list_double_cale_preview_pane_g1

0xd161,	// (0x00057347) list_double_cale_preview_pane_t1_ParamLimits

0xd161,	// (0x00057347) list_double_cale_preview_pane_t1

0xd176,	// (0x0005735c) list_double_cale_preview_pane_t2_ParamLimits

0xd176,	// (0x0005735c) list_double_cale_preview_pane_t2

0x0001,

0xfe32,	// (0x0005a018) list_double_cale_preview_pane_t_ParamLimits

0xfe32,	// (0x0005a018) list_double_cale_preview_pane_t

0x053e,	// (0x0004a724) main_ezdial_pane

0x4a45,	// (0x0004ec2b) main_sp_fs_email_pane_ParamLimits

0xc934,	// (0x00056b1a) cmail_ddmenu_btn01_pane_ParamLimits

0xc934,	// (0x00056b1a) cmail_ddmenu_btn01_pane

0xc951,	// (0x00056b37) cmail_ddmenu_btn02_pane_ParamLimits

0xc951,	// (0x00056b37) cmail_ddmenu_btn02_pane

0xc96f,	// (0x00056b55) cmail_ddmenu_btn03_pane_ParamLimits

0xc96f,	// (0x00056b55) cmail_ddmenu_btn03_pane

0xc99d,	// (0x00056b83) main_sp_fs_ctrlbar_pane_ParamLimits

0xc9b9,	// (0x00056b9f) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xcdd7,	// (0x00056fbd) list_cmail_body_pane_ParamLimits

0x273b,	// (0x0004c921) bg_button_pane_cp12

0x2750,	// (0x0004c936) list_single_cmail_header_detail_pane_g3_ParamLimits

0x2750,	// (0x0004c936) list_single_cmail_header_detail_pane_g3

0xce5d,	// (0x00057043) list_single_cmail_header_detail_pane_t2_ParamLimits

0xce5d,	// (0x00057043) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb7,	// (0x00059f9d) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb7,	// (0x00059f9d) list_single_cmail_header_detail_pane_t

0x287f,	// (0x0004ca65) phacti_term_pane_t2_ParamLimits

0x287f,	// (0x0004ca65) phacti_term_pane_t2

0x0001,

0xfdc1,	// (0x00059fa7) phacti_term_pane_t_ParamLimits

0xfdc1,	// (0x00059fa7) phacti_term_pane_t

0x2b10,	// (0x0004ccf6) aid_size_list_single_double

0xd18e,	// (0x00057374) popup_ezdial_listscroll_window

0xd1ae,	// (0x00057394) popup_number_entry_window_cp01

0x447c,	// (0x0004e662) bg_popup_call_pane_cp09

0x2b1c,	// (0x0004cd02) ezdial_list_pane

0x2b24,	// (0x0004cd0a) scroll_pane_cp23

0xe9c4,	// (0x00058baa) bg_button_pane_cp028_ParamLimits

0xe9c4,	// (0x00058baa) bg_button_pane_cp028

0xd1bc,	// (0x000573a2) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xd1bc,	// (0x000573a2) cmail_ddmenu_btn01_pane_g1

0xd1cc,	// (0x000573b2) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xd1cc,	// (0x000573b2) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe37,	// (0x0005a01d) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe37,	// (0x0005a01d) cmail_ddmenu_btn01_pane_g

0x2b2c,	// (0x0004cd12) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x2b2c,	// (0x0004cd12) cmail_ddmenu_btn01_pane_t1

0xe76a,	// (0x00058950) bg_button_pane_cp029_ParamLimits

0xe76a,	// (0x00058950) bg_button_pane_cp029

0xd1cc,	// (0x000573b2) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xd1cc,	// (0x000573b2) cmail_ddmenu_btn02_pane_g1

0xd1e4,	// (0x000573ca) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xd1e4,	// (0x000573ca) cmail_ddmenu_btn02_pane_t1

0x1105,	// (0x0004b2eb) bg_button_pane_cp031_ParamLimits

0x1105,	// (0x0004b2eb) bg_button_pane_cp031

0xd1cc,	// (0x000573b2) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xd1cc,	// (0x000573b2) cmail_ddmenu_btn03_pane_g1

0xd1e4,	// (0x000573ca) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xd1e4,	// (0x000573ca) cmail_ddmenu_btn03_pane_t1

0xa67c,	// (0x00054862) cell_dialer2_keypad_pane_t1_ParamLimits

0xa696,	// (0x0005487c) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xa696,	// (0x0005487c) cell_dialer2_keypad_pane_t1_copy1

0xc2a7,	// (0x0005648d) ncimui_group_button_pane

0x4a45,	// (0x0004ec2b) main_sp_fs_calendar_pane_ParamLimits

0xcdec,	// (0x00056fd2) list_single_cmail_header_caption_pane_ParamLimits

0x1769,	// (0x0004b94f) aid_recal_txt_sm_pane

0x053e,	// (0x0004a724) mian_recal_day_pane

0x2900,	// (0x0004cae6) popup_sp_fs_cale_preview_window_ParamLimits

0x053e,	// (0x0004a724) list_recal_day_pane

0x2b5a,	// (0x0004cd40) list_single_recal_day_pane_ParamLimits

0x2b5a,	// (0x0004cd40) list_single_recal_day_pane

0x2b6c,	// (0x0004cd52) list_single_recal_day_pane_g1_ParamLimits

0x2b6c,	// (0x0004cd52) list_single_recal_day_pane_g1

0x2b78,	// (0x0004cd5e) list_single_recal_day_pane_g2_ParamLimits

0x2b78,	// (0x0004cd5e) list_single_recal_day_pane_g2

0x2b84,	// (0x0004cd6a) list_single_recal_day_pane_g3_ParamLimits

0x2b84,	// (0x0004cd6a) list_single_recal_day_pane_g3

0xd208,	// (0x000573ee) list_single_recal_day_pane_g4_ParamLimits

0xd208,	// (0x000573ee) list_single_recal_day_pane_g4

0x2b90,	// (0x0004cd76) list_single_recal_day_pane_g5_ParamLimits

0x2b90,	// (0x0004cd76) list_single_recal_day_pane_g5

0x2b9c,	// (0x0004cd82) list_single_recal_day_pane_g6_ParamLimits

0x2b9c,	// (0x0004cd82) list_single_recal_day_pane_g6

0x0005,

0xfe46,	// (0x0005a02c) list_single_recal_day_pane_g_ParamLimits

0xfe46,	// (0x0005a02c) list_single_recal_day_pane_g

0x2ba8,	// (0x0004cd8e) list_single_recal_day_pane_t1

0x2bb6,	// (0x0004cd9c) list_single_recal_day_pane_t2

0x0001,

0xfe53,	// (0x0005a039) list_single_recal_day_pane_t

0xd216,	// (0x000573fc) ncimui_query_button_pane_ParamLimits

0xd216,	// (0x000573fc) ncimui_query_button_pane

0xd226,	// (0x0005740c) ncimui_query_button_pane_t1_ParamLimits

0xd226,	// (0x0005740c) ncimui_query_button_pane_t1

0x2bc4,	// (0x0004cdaa) ncimui_query_button_pane_t2_ParamLimits

0x2bc4,	// (0x0004cdaa) ncimui_query_button_pane_t2

0x0001,

0xfe58,	// (0x0005a03e) ncimui_query_button_pane_t_ParamLimits

0xfe58,	// (0x0005a03e) ncimui_query_button_pane_t

0xd239,	// (0x0005741f) query_button_pane_ParamLimits

0xd239,	// (0x0005741f) query_button_pane

0x053e,	// (0x0004a724) bg_button_pane_cp0028

0x2bd7,	// (0x0004cdbd) query_button_pane_t1

0x8af7,	// (0x00052cdd) main_tport_pane_ParamLimits

0xccfa,	// (0x00056ee0) bg_popup_window_pane_cp01_ParamLimits

0xccfa,	// (0x00056ee0) bg_popup_window_pane_cp01

0xcd07,	// (0x00056eed) heading_pane_cp08_ParamLimits

0xcd07,	// (0x00056eed) heading_pane_cp08

0xcd15,	// (0x00056efb) heading_pane_cp07_ParamLimits

0xcd15,	// (0x00056efb) heading_pane_cp07

0x2706,	// (0x0004c8ec) cell_tport_appsw_pane_g2

0x0002,

0xfda4,	// (0x00059f8a) cell_tport_appsw_pane_g

0x81ff,	// (0x000523e5) input_candi_list_open_g1

0x3fcd,	// (0x0004e1b3) list_cale_time_pane_g6_ParamLimits

0x3fcd,	// (0x0004e1b3) list_cale_time_pane_g6

0x955c,	// (0x00053742) aid_size_touch_calib_1_ParamLimits

0x955c,	// (0x00053742) aid_size_touch_calib_1

0x9568,	// (0x0005374e) aid_size_touch_calib_2_ParamLimits

0x9568,	// (0x0005374e) aid_size_touch_calib_2

0x9576,	// (0x0005375c) aid_size_touch_calib_3_ParamLimits

0x9576,	// (0x0005375c) aid_size_touch_calib_3

0x9586,	// (0x0005376c) aid_size_touch_calib_4_ParamLimits

0x9586,	// (0x0005376c) aid_size_touch_calib_4

0x9594,	// (0x0005377a) main_touch_calib_button_group_pane_ParamLimits

0x9594,	// (0x0005377a) main_touch_calib_button_group_pane

0x95a2,	// (0x00053788) main_touch_calib_pane_g1_ParamLimits

0x95ae,	// (0x00053794) main_touch_calib_pane_g2_ParamLimits

0x95ba,	// (0x000537a0) main_touch_calib_pane_g3_ParamLimits

0x95c6,	// (0x000537ac) main_touch_calib_pane_g4_ParamLimits

0xf784,	// (0x0005996a) main_touch_calib_pane_g_ParamLimits

0x95d2,	// (0x000537b8) main_touch_calib_pane_t1_ParamLimits

0x95e9,	// (0x000537cf) main_touch_calib_pane_t2_ParamLimits

0x9600,	// (0x000537e6) main_touch_calib_pane_t3_ParamLimits

0x9614,	// (0x000537fa) main_touch_calib_pane_t4_ParamLimits

0x962a,	// (0x00053810) main_touch_calib_pane_t5_ParamLimits

0xf78d,	// (0x00059973) main_touch_calib_pane_t_ParamLimits

0xef1b,	// (0x00059101) list_single_fp_cale_pane_g3_ParamLimits

0xef1b,	// (0x00059101) list_single_fp_cale_pane_g3

0xaad8,	// (0x00054cbe) bg_button_pane_cp012_ParamLimits

0xaad8,	// (0x00054cbe) bg_vkb2_func_pane_cp03_ParamLimits

0xb46a,	// (0x00055650) cell_vitu2_function_top_pane_g1_ParamLimits

0xaad8,	// (0x00054cbe) bg_vkb2_func_pane_cp04_ParamLimits

0xc256,	// (0x0005643c) main_ncimui_button_group_pane_ParamLimits

0xc256,	// (0x0005643c) main_ncimui_button_group_pane

0xc295,	// (0x0005647b) main_ncimui_pane_t3_ParamLimits

0xc295,	// (0x0005647b) main_ncimui_pane_t3

0x282d,	// (0x0004ca13) phacti_button_group_pane

0x2b10,	// (0x0004ccf6) aid_size_list_single_double_ParamLimits

0xd18e,	// (0x00057374) popup_ezdial_listscroll_window_ParamLimits

0xd1ae,	// (0x00057394) popup_number_entry_window_cp01_ParamLimits

0xd246,	// (0x0005742c) phacti_button_pane_ParamLimits

0xd246,	// (0x0005742c) phacti_button_pane

0x053e,	// (0x0004a724) bg_button_pane_cp14

0x2be5,	// (0x0004cdcb) phacti_button_pane_t1

0xd257,	// (0x0005743d) main_touch_calib_button_pane_ParamLimits

0xd257,	// (0x0005743d) main_touch_calib_button_pane

0x3a20,	// (0x0004dc06) bg_button_pane_cp18_ParamLimits

0x3a20,	// (0x0004dc06) bg_button_pane_cp18

0x2bf3,	// (0x0004cdd9) main_touch_calib_button_pane_t1_ParamLimits

0x2bf3,	// (0x0004cdd9) main_touch_calib_button_pane_t1

0x2c09,	// (0x0004cdef) main_touch_calib_button_pane_t2_ParamLimits

0x2c09,	// (0x0004cdef) main_touch_calib_button_pane_t2

0x0001,

0xfe5d,	// (0x0005a043) main_touch_calib_button_pane_t_ParamLimits

0xfe5d,	// (0x0005a043) main_touch_calib_button_pane_t

0x053e,	// (0x0004a724) cell_ncimui_button_pane

0x053e,	// (0x0004a724) bg_button_pane_cp032

0x2c27,	// (0x0004ce0d) cell_ncimui_button_pane_t1

0xa6f2,	// (0x000548d8) image3_infobar_pane_ParamLimits

0xa6f2,	// (0x000548d8) image3_infobar_pane

0xc5df,	// (0x000567c5) fs_bigclock_status_pane_ParamLimits

0xc5df,	// (0x000567c5) fs_bigclock_status_pane

0xc5ec,	// (0x000567d2) main_fs_bigclock_clock_pane_ParamLimits

0xc5ec,	// (0x000567d2) main_fs_bigclock_clock_pane

0xc5fc,	// (0x000567e2) main_fs_bigclock_indi_pane_ParamLimits

0xc5fc,	// (0x000567e2) main_fs_bigclock_indi_pane

0xc62e,	// (0x00056814) main_fs_bigclock_swipe_pane_ParamLimits

0xc62e,	// (0x00056814) main_fs_bigclock_swipe_pane

0x053e,	// (0x0004a724) main_fs_clock_dumped_data

0x20ef,	// (0x0004c2d5) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x20ef,	// (0x0004c2d5) list_single_fs_bigclock_indicator_pane_g1

0x210f,	// (0x0004c2f5) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x210f,	// (0x0004c2f5) list_single_fs_bigclock_indicator_pane_g2

0x2129,	// (0x0004c30f) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x2129,	// (0x0004c30f) list_single_fs_bigclock_indicator_pane_g3

0x2145,	// (0x0004c32b) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x2145,	// (0x0004c32b) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc90,	// (0x00059e76) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc90,	// (0x00059e76) list_single_fs_bigclock_indicator_pane_g

0x216b,	// (0x0004c351) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x216b,	// (0x0004c351) list_single_fs_bigclock_indicator_pane_t1

0x2193,	// (0x0004c379) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x2193,	// (0x0004c379) list_single_fs_bigclock_indicator_pane_t2

0x21bb,	// (0x0004c3a1) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x21bb,	// (0x0004c3a1) list_single_fs_bigclock_indicator_pane_t3

0x21e5,	// (0x0004c3cb) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x21e5,	// (0x0004c3cb) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc9b,	// (0x00059e81) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc9b,	// (0x00059e81) list_single_fs_bigclock_indicator_pane_t

0x2c35,	// (0x0004ce1b) image3_infobar_fav_pane_ParamLimits

0x2c35,	// (0x0004ce1b) image3_infobar_fav_pane

0x2c45,	// (0x0004ce2b) image3_infobar_loc_pane_ParamLimits

0x2c45,	// (0x0004ce2b) image3_infobar_loc_pane

0x2c5b,	// (0x0004ce41) image3_infobar_time_pane_ParamLimits

0x2c5b,	// (0x0004ce41) image3_infobar_time_pane

0xebe5,	// (0x00058dcb) image3_infobar_time_pane_g1

0x2c6b,	// (0x0004ce51) image3_infobar_time_pane_t1

0xebe5,	// (0x00058dcb) image3_infobar_loc_pane_g1

0x2c79,	// (0x0004ce5f) image3_infobar_loc_pane_g2

0x0001,

0xfe62,	// (0x0005a048) image3_infobar_loc_pane_g

0x2c81,	// (0x0004ce67) image3_infobar_loc_pane_t1

0xebe5,	// (0x00058dcb) image3_infobar_fav_pane_g1

0x2c8f,	// (0x0004ce75) image3_infobar_fav_pane_g2

0x0001,

0xfe67,	// (0x0005a04d) image3_infobar_fav_pane_g

0x2c97,	// (0x0004ce7d) fs_bigclock_status_battery_pane

0x2ca0,	// (0x0004ce86) fs_bigclock_status_signal_pane

0x2ca9,	// (0x0004ce8f) fs_bigclock_status_title_pane

0x2cb2,	// (0x0004ce98) fs_bigclock_status_signal_pane_g1

0x2cbb,	// (0x0004cea1) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe6c,	// (0x0005a052) fs_bigclock_status_signal_pane_g

0x2cc3,	// (0x0004cea9) fs_bigclock_status_battery_pane_g1

0x2ccc,	// (0x0004ceb2) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe71,	// (0x0005a057) fs_bigclock_status_battery_pane_g

0x2cd4,	// (0x0004ceba) fs_bigclock_status_title_pane_t1

0xebe5,	// (0x00058dcb) main_fs_bigclock_clock_pane_g1

0x2ce2,	// (0x0004cec8) main_fs_bigclock_clock_pane_g2

0x2ce2,	// (0x0004cec8) main_fs_bigclock_clock_pane_g3

0x2ce2,	// (0x0004cec8) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe76,	// (0x0005a05c) main_fs_bigclock_clock_pane_g

0x2cee,	// (0x0004ced4) main_fs_bigclock_clock_pane_t1

0x2cfc,	// (0x0004cee2) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe7f,	// (0x0005a065) main_fs_bigclock_clock_pane_t

0x2d0b,	// (0x0004cef1) list_single_fs_bigclock_indicator_pane_ParamLimits

0x2d0b,	// (0x0004cef1) list_single_fs_bigclock_indicator_pane

0xd269,	// (0x0005744f) list_single_fs_bigclock_pane_ParamLimits

0xd269,	// (0x0005744f) list_single_fs_bigclock_pane

0x2d25,	// (0x0004cf0b) main_fs_bigclock_indicator_pane_t1

0x2d34,	// (0x0004cf1a) list_single_fs_bigclock_pane_g1

0x2d3c,	// (0x0004cf22) list_single_fs_bigclock_pane_t1

0xebe5,	// (0x00058dcb) main_fs_bigclock_swipe_pane_g1

0x2d7a,	// (0x0004cf60) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe90,	// (0x0005a076) main_fs_bigclock_swipe_pane_g

0x2d82,	// (0x0004cf68) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x2d82,	// (0x0004cf68) main_fs_bigclock_swipe_pane_t1

0x7977,	// (0x00051b5d) call_type_pane_ParamLimits

0x053e,	// (0x0004a724) main_btmg_pane

0x29f9,	// (0x0004cbdf) list_single_cale_mrui_row_pane_g2_ParamLimits

0x29f9,	// (0x0004cbdf) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe03,	// (0x00059fe9) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe03,	// (0x00059fe9) list_single_cale_mrui_row_pane_g

0x2b4a,	// (0x0004cd30) list_recal_vselct_arw_lo_pane

0x2b52,	// (0x0004cd38) list_recal_vselct_arw_up_pane

0x1760,	// (0x0004b946) list_recal_vselct_pane

0x2d9f,	// (0x0004cf85) btmg_button_pane

0xd2cc,	// (0x000574b2) main_btmg_pane_g1

0x053e,	// (0x0004a724) bg_button_pane_cp044

0x2da9,	// (0x0004cf8f) btmg_button_pane_t1

0xe762,	// (0x00058948) aid_listscroll_gen

0x4a45,	// (0x0004ec2b) main_cntbar_detail_pane

0x271c,	// (0x0004c902) list_cmail_folder_pane

0x272c,	// (0x0004c912) sp_fs_scroll_pane_cp03_ParamLimits

0x4b7f,	// (0x0004ed65) list_single_fs_dyc_pane_cp01_ParamLimits

0x4b7f,	// (0x0004ed65) list_single_fs_dyc_pane_cp01

0x2db7,	// (0x0004cf9d) aid_size_cmail_indent

0x2dc0,	// (0x0004cfa6) list_single_dyc_row_pane_cp01

0xd2f4,	// (0x000574da) cntbar_detail_list_pane_ParamLimits

0xd2f4,	// (0x000574da) cntbar_detail_list_pane

0xd334,	// (0x0005751a) main_cntbar_detail_cont_pane_ParamLimits

0xd334,	// (0x0005751a) main_cntbar_detail_cont_pane

0x7911,	// (0x00051af7) scroll_pane_cp032_ParamLimits

0x7911,	// (0x00051af7) scroll_pane_cp032

0xd340,	// (0x00057526) cntbar_detail_list_event_pane_ParamLimits

0xd340,	// (0x00057526) cntbar_detail_list_event_pane

0xd302,	// (0x000574e8) cntbar_detail_list_shct_pane

0x3e80,	// (0x0004e066) aid_list_gen

0x2dc9,	// (0x0004cfaf) aid_scroll

0x2dd2,	// (0x0004cfb8) aid_size_touch_scroll_bar

0xd350,	// (0x00057536) aid_list_double

0x2de4,	// (0x0004cfca) aid_list_single

0x17d3,	// (0x0004b9b9) aid_list_single_lg

0x2ded,	// (0x0004cfd3) aid_list_z_g_a_sm

0x2df5,	// (0x0004cfdb) aid_list_z_g_d

0x2dfd,	// (0x0004cfe3) aid_txt_z_prm

0xd359,	// (0x0005753f) aid_txt_z_prm_cp01

0xd367,	// (0x0005754d) aid_txt_z_sec

0xd375,	// (0x0005755b) main_cntbar_detail_cont_pane_g1_ParamLimits

0xd375,	// (0x0005755b) main_cntbar_detail_cont_pane_g1

0xd382,	// (0x00057568) main_cntbar_detail_cont_pane_g2_ParamLimits

0xd382,	// (0x00057568) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe95,	// (0x0005a07b) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe95,	// (0x0005a07b) main_cntbar_detail_cont_pane_g

0x2e0b,	// (0x0004cff1) main_cntbar_detail_cont_pane_t1

0x2e19,	// (0x0004cfff) main_cntbar_detail_cont_pane_t2

0x2e27,	// (0x0004d00d) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe9a,	// (0x0005a080) main_cntbar_detail_cont_pane_t

0xd38e,	// (0x00057574) cell_cntbar_detail_list_shct_pane_ParamLimits

0xd38e,	// (0x00057574) cell_cntbar_detail_list_shct_pane

0x2e35,	// (0x0004d01b) cntbar_detail_list_shct_pane_g1

0x2e3e,	// (0x0004d024) cntbar_detail_list_shct_pane_g2

0x0001,

0xfea1,	// (0x0005a087) cntbar_detail_list_shct_pane_g

0xd3a2,	// (0x00057588) cntbar_detail_list_event_pane_g1_ParamLimits

0xd3a2,	// (0x00057588) cntbar_detail_list_event_pane_g1

0xd3ae,	// (0x00057594) cntbar_detail_list_event_pane_g2_ParamLimits

0xd3ae,	// (0x00057594) cntbar_detail_list_event_pane_g2

0x0005,

0xfea6,	// (0x0005a08c) cntbar_detail_list_event_pane_g_ParamLimits

0xfea6,	// (0x0005a08c) cntbar_detail_list_event_pane_g

0xd41c,	// (0x00057602) cntbar_detail_list_event_pane_t1_ParamLimits

0xd41c,	// (0x00057602) cntbar_detail_list_event_pane_t1

0xd431,	// (0x00057617) cntbar_detail_list_event_pane_t2_ParamLimits

0xd431,	// (0x00057617) cntbar_detail_list_event_pane_t2

0x0002,

0xfeb3,	// (0x0005a099) cntbar_detail_list_event_pane_t_ParamLimits

0xfeb3,	// (0x0005a099) cntbar_detail_list_event_pane_t

0xebe5,	// (0x00058dcb) cell_cntbar_detail_list_shct_pane_g1

0x7d0f,	// (0x00051ef5) navi_pane_mv_g3

0x4a45,	// (0x0004ec2b) main_cntbar_detail_pane_ParamLimits

0x053e,	// (0x0004a724) main_notif_wgt_pane

0xa3c6,	// (0x000545ac) aid_tch_main_mp4_pane_g4

0xa5db,	// (0x000547c1) popup_slider_window_cp02

0x2b41,	// (0x0004cd27) list_recal_day_event_pane

0xd2d4,	// (0x000574ba) cntbar_detail_btn_pane_ParamLimits

0xd2d4,	// (0x000574ba) cntbar_detail_btn_pane

0xd2e4,	// (0x000574ca) cntbar_detail_btn_pane_cp01_ParamLimits

0xd2e4,	// (0x000574ca) cntbar_detail_btn_pane_cp01

0xd302,	// (0x000574e8) cntbar_detail_list_shct_pane_ParamLimits

0xd30e,	// (0x000574f4) cntbar_detail_pane_g1_ParamLimits

0xd30e,	// (0x000574f4) cntbar_detail_pane_g1

0xd31e,	// (0x00057504) cntbar_detail_pane_t1_ParamLimits

0xd31e,	// (0x00057504) cntbar_detail_pane_t1

0xd3ba,	// (0x000575a0) cntbar_detail_list_event_pane_g3_ParamLimits

0xd3ba,	// (0x000575a0) cntbar_detail_list_event_pane_g3

0xd3d2,	// (0x000575b8) cntbar_detail_list_event_pane_g4_ParamLimits

0xd3d2,	// (0x000575b8) cntbar_detail_list_event_pane_g4

0xd3ea,	// (0x000575d0) cntbar_detail_list_event_pane_g5_ParamLimits

0xd3ea,	// (0x000575d0) cntbar_detail_list_event_pane_g5

0xd402,	// (0x000575e8) cntbar_detail_list_event_pane_g6_ParamLimits

0xd402,	// (0x000575e8) cntbar_detail_list_event_pane_g6

0xd446,	// (0x0005762c) cntbar_detail_list_event_pane_t3_ParamLimits

0xd446,	// (0x0005762c) cntbar_detail_list_event_pane_t3

0xd458,	// (0x0005763e) popup_notif_wgt_window_ParamLimits

0xd458,	// (0x0005763e) popup_notif_wgt_window

0xd468,	// (0x0005764e) popup_submenu_window_cp01_ParamLimits

0xd468,	// (0x0005764e) popup_submenu_window_cp01

0x447c,	// (0x0004e662) bg_popup_window_pane_cp10

0x2e47,	// (0x0004d02d) listscroll_notif_wgt_pane

0x2e51,	// (0x0004d037) list_notif_wgt_window

0x2e5a,	// (0x0004d040) scroll_pane_cp033

0x2e63,	// (0x0004d049) list_notif_wgt_row_pane_ParamLimits

0x2e63,	// (0x0004d049) list_notif_wgt_row_pane

0x2e77,	// (0x0004d05d) aid_size_list_notif_wgt_del

0x2e80,	// (0x0004d066) list_notif_wgt_row_pane_g1

0x2e88,	// (0x0004d06e) list_notif_wgt_row_pane_g2

0x2e90,	// (0x0004d076) list_notif_wgt_row_pane_g3

0x0002,

0xfeba,	// (0x0005a0a0) list_notif_wgt_row_pane_g

0x2e99,	// (0x0004d07f) list_notif_wgt_row_pane_t1

0x2ea7,	// (0x0004d08d) list_notif_wgt_row_pane_t2

0x2eb5,	// (0x0004d09b) list_notif_wgt_row_pane_t3

0x0002,

0xfec1,	// (0x0005a0a7) list_notif_wgt_row_pane_t

0x142a,	// (0x0004b610) list_recal_day_event_pane_g1

0x2ec3,	// (0x0004d0a9) list_recal_day_event_pane_t1

0x053e,	// (0x0004a724) bg_button_pane_cp045

0x2ed2,	// (0x0004d0b8) cntbar_detail_btn_pane_t1

0xe76a,	// (0x00058950) main_callh_pane_ParamLimits

0xe76a,	// (0x00058950) main_callh_pane

0x053e,	// (0x0004a724) main_coverflow0_pane

0x053e,	// (0x0004a724) main_wgtman_pane

0xc646,	// (0x0005682c) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xc646,	// (0x0005682c) main_fs_bigclock_unlock_btn_pane

0x26fe,	// (0x0004c8e4) bg_button_pane_cp16

0xcd80,	// (0x00056f66) cell_tport_appsw_pane_g3

0xd476,	// (0x0005765c) cf0_flow_pane_ParamLimits

0xd476,	// (0x0005765c) cf0_flow_pane

0x2ee0,	// (0x0004d0c6) listscroll_cf0_pane

0x2ee9,	// (0x0004d0cf) main_cf0_pane_g1

0xd485,	// (0x0005766b) main_cf0_pane_t1_ParamLimits

0xd485,	// (0x0005766b) main_cf0_pane_t1

0xd499,	// (0x0005767f) main_cf0_pane_t2_ParamLimits

0xd499,	// (0x0005767f) main_cf0_pane_t2

0x0001,

0xfec8,	// (0x0005a0ae) main_cf0_pane_t_ParamLimits

0xfec8,	// (0x0005a0ae) main_cf0_pane_t

0x2ef3,	// (0x0004d0d9) scroll_pane_cp11

0xd4ad,	// (0x00057693) cf0_flow_pane_g1

0xd4b5,	// (0x0005769b) cf0_flow_pane_g2

0x0001,

0xfecd,	// (0x0005a0b3) cf0_flow_pane_g

0xd4bd,	// (0x000576a3) cf0_flow_pane_t1

0x053e,	// (0x0004a724) main_call6_pane

0x053e,	// (0x0004a724) main_calllock_pane

0xd4cb,	// (0x000576b1) call6_btn_grp_pane_ParamLimits

0xd4cb,	// (0x000576b1) call6_btn_grp_pane

0xd4da,	// (0x000576c0) call6_pane_g1_ParamLimits

0xd4da,	// (0x000576c0) call6_pane_g1

0xd4ea,	// (0x000576d0) popup_call6_1st_window_ParamLimits

0xd4ea,	// (0x000576d0) popup_call6_1st_window

0xd4f8,	// (0x000576de) popup_call6_2nd_window_ParamLimits

0xd4f8,	// (0x000576de) popup_call6_2nd_window

0xd506,	// (0x000576ec) cell_call6_btn_pane_ParamLimits

0xd506,	// (0x000576ec) cell_call6_btn_pane

0x447c,	// (0x0004e662) bg_popup_call2_in_pane_cp03

0x2efe,	// (0x0004d0e4) popup_call6_1st_window_g1

0x2f06,	// (0x0004d0ec) popup_call6_1st_window_g2

0x2f0e,	// (0x0004d0f4) popup_call6_1st_window_g3

0x0002,

0xfed2,	// (0x0005a0b8) popup_call6_1st_window_g

0x2f16,	// (0x0004d0fc) popup_call6_1st_window_t1

0x2f25,	// (0x0004d10b) popup_call6_1st_window_t2

0x2f35,	// (0x0004d11b) popup_call6_1st_window_t3

0x0002,

0xfed9,	// (0x0005a0bf) popup_call6_1st_window_t

0x447c,	// (0x0004e662) bg_popup_call2_in_pane_cp04

0x2efe,	// (0x0004d0e4) popup_call6_2nd_window_g1

0x2f06,	// (0x0004d0ec) popup_call6_2nd_window_g2

0x2f0e,	// (0x0004d0f4) popup_call6_2nd_window_g3

0x0002,

0xfed2,	// (0x0005a0b8) popup_call6_2nd_window_g

0x2f16,	// (0x0004d0fc) popup_call6_2nd_window_t1

0x053e,	// (0x0004a724) bg_button_pane_cp15

0x2f45,	// (0x0004d12b) cell_call6_btn_pane_g1

0x2f4e,	// (0x0004d134) cell_call6_btn_pane_t1

0xd515,	// (0x000576fb) listscroll_wgtman_pane_ParamLimits

0xd515,	// (0x000576fb) listscroll_wgtman_pane

0xd533,	// (0x00057719) wgtman_btn_pane_ParamLimits

0xd533,	// (0x00057719) wgtman_btn_pane

0x4342,	// (0x0004e528) aid_scroll_copy1

0x2f5d,	// (0x0004d143) list_wgtman_pane

0xd568,	// (0x0005774e) wgtman_btn_pane_g1_ParamLimits

0xd568,	// (0x0005774e) wgtman_btn_pane_g1

0xd590,	// (0x00057776) wgtman_btn_pane_t1_ParamLimits

0xd590,	// (0x00057776) wgtman_btn_pane_t1

0x2f67,	// (0x0004d14d) wgtman_btn_pane_t2_ParamLimits

0x2f67,	// (0x0004d14d) wgtman_btn_pane_t2

0x0001,

0xfee0,	// (0x0005a0c6) wgtman_btn_pane_t_ParamLimits

0xfee0,	// (0x0005a0c6) wgtman_btn_pane_t

0x2f7e,	// (0x0004d164) listrow_wgtman_pane_ParamLimits

0x2f7e,	// (0x0004d164) listrow_wgtman_pane

0x2f92,	// (0x0004d178) listrow_wgtman_pane_g1

0xd5c7,	// (0x000577ad) listrow_wgtman_pane_g2

0x0001,

0xfee5,	// (0x0005a0cb) listrow_wgtman_pane_g

0x2f9b,	// (0x0004d181) listrow_wgtman_pane_t1

0x2fa9,	// (0x0004d18f) listrow_wgtman_pane_t2

0x0001,

0xfeea,	// (0x0005a0d0) listrow_wgtman_pane_t

0x2fb7,	// (0x0004d19d) wait_bar_pane_cp09

0x2fbf,	// (0x0004d1a5) main_calllock_btn_pane

0x2fc9,	// (0x0004d1af) main_calllock_pane_g1

0x053e,	// (0x0004a724) bg_button_pane_cp17

0x2fd5,	// (0x0004d1bb) main_calllock_btn_pane_g1

0x2fde,	// (0x0004d1c4) main_calllock_btn_pane_t1

0x053e,	// (0x0004a724) main_dialer3_pane

0x053e,	// (0x0004a724) main_fmrd2_pane

0xebe5,	// (0x00058dcb) main_fs_bigclock_unlock_btn_pane_g1

0x2ff5,	// (0x0004d1db) main_fs_bigclock_unlock_btn_pane_t1

0xd5d1,	// (0x000577b7) area_fmrd2_info_pane_ParamLimits

0xd5d1,	// (0x000577b7) area_fmrd2_info_pane

0xd5df,	// (0x000577c5) area_fmrd2_visual_pane_ParamLimits

0xd5df,	// (0x000577c5) area_fmrd2_visual_pane

0xd5ed,	// (0x000577d3) fmrd2_indi_pane_ParamLimits

0xd5ed,	// (0x000577d3) fmrd2_indi_pane

0xd5fa,	// (0x000577e0) area_fmrd2_visual_pane_g1

0xd602,	// (0x000577e8) area_fmrd2_visual_pane_t1

0xd612,	// (0x000577f8) area_fmrd2_visual_pane_t2

0xd622,	// (0x00057808) area_fmrd2_visual_pane_t3

0x0002,

0xfef4,	// (0x0005a0da) area_fmrd2_visual_pane_t

0xd632,	// (0x00057818) area_fmrd2_info_pane_g1

0xd63a,	// (0x00057820) area_fmrd2_info_pane_t1

0xd64a,	// (0x00057830) area_fmrd2_info_pane_t2

0xd65a,	// (0x00057840) area_fmrd2_info_pane_t3

0xd66a,	// (0x00057850) area_fmrd2_info_pane_t4

0x0003,

0xfefb,	// (0x0005a0e1) area_fmrd2_info_pane_t

0xd67a,	// (0x00057860) fmrd2_indi_pane_t1

0xd68a,	// (0x00057870) fmrd2_indi_pane_t2

0xd69a,	// (0x00057880) fmrd2_indi_pane_t3

0x0002,

0xff04,	// (0x0005a0ea) fmrd2_indi_pane_t

0x2154,	// (0x0004c33a) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x2154,	// (0x0004c33a) list_single_fs_bigclock_indicator_pane_g5

0x21fa,	// (0x0004c3e0) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x21fa,	// (0x0004c3e0) list_single_fs_bigclock_indicator_pane_t5

0xcf1d,	// (0x00057103) aid_cell_bcale_month_pane_ParamLimits

0xcf1d,	// (0x00057103) aid_cell_bcale_month_pane

0xcf29,	// (0x0005710f) bcale_month_pane_ParamLimits

0xcf29,	// (0x0005710f) bcale_month_pane

0xcf37,	// (0x0005711d) bcale_preview_pane_ParamLimits

0xcf37,	// (0x0005711d) bcale_preview_pane

0x2d3c,	// (0x0004cf22) list_single_fs_bigclock_pane_t1_ParamLimits

0x2d56,	// (0x0004cf3c) list_single_fs_bigclock_pane_t2_ParamLimits

0x2d56,	// (0x0004cf3c) list_single_fs_bigclock_pane_t2

0x0001,

0xfe8b,	// (0x0005a071) list_single_fs_bigclock_pane_t_ParamLimits

0xfe8b,	// (0x0005a071) list_single_fs_bigclock_pane_t

0x2fed,	// (0x0004d1d3) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfeef,	// (0x0005a0d5) main_fs_bigclock_unlock_btn_pane_g

0xd6aa,	// (0x00057890) aid_dia3_key_size_ParamLimits

0xd6aa,	// (0x00057890) aid_dia3_key_size

0xd6b6,	// (0x0005789c) aid_dia3_listrow_size_ParamLimits

0xd6b6,	// (0x0005789c) aid_dia3_listrow_size

0xd6c4,	// (0x000578aa) dia3_keypad_fun_pane_ParamLimits

0xd6c4,	// (0x000578aa) dia3_keypad_fun_pane

0xd6d4,	// (0x000578ba) dia3_keypad_num_pane_ParamLimits

0xd6d4,	// (0x000578ba) dia3_keypad_num_pane

0xd6e4,	// (0x000578ca) dia3_listscroll_pane_ParamLimits

0xd6e4,	// (0x000578ca) dia3_listscroll_pane

0xd6f4,	// (0x000578da) dia3_numentry_pane_ParamLimits

0xd6f4,	// (0x000578da) dia3_numentry_pane

0x3003,	// (0x0004d1e9) dia3_list_pane

0x300e,	// (0x0004d1f4) scroll_pane_cp12

0x053e,	// (0x0004a724) bg_dia3_numentry_pane

0x3019,	// (0x0004d1ff) dia3_numentry_pane_t1

0xd704,	// (0x000578ea) cell_dia3_key_num_pane

0xd70c,	// (0x000578f2) cell_dia3_key0_fun_pane_ParamLimits

0xd70c,	// (0x000578f2) cell_dia3_key0_fun_pane

0xd719,	// (0x000578ff) cell_dia3_key1_fun_pane_ParamLimits

0xd719,	// (0x000578ff) cell_dia3_key1_fun_pane

0xd726,	// (0x0005790c) dia3_listrow_pane

0x1e6c,	// (0x0004c052) bg_dia3_numentry_pane_g1

0x053e,	// (0x0004a724) bg_button_pane_cp21

0x3028,	// (0x0004d20e) cell_dia3_key_num_pane_t1

0x3036,	// (0x0004d21c) cell_dia3_key_num_pane_t2

0x3045,	// (0x0004d22b) cell_dia3_key_num_pane_t3

0x3054,	// (0x0004d23a) cell_dia3_key_num_pane_t4

0x0003,

0xff0b,	// (0x0005a0f1) cell_dia3_key_num_pane_t

0x053e,	// (0x0004a724) bg_button_pane_cp19

0xd733,	// (0x00057919) cell_dia3_key0_fun_pane_g1

0x053e,	// (0x0004a724) bg_button_pane_cp20

0xd73b,	// (0x00057921) cell_dia3_key1_fun_pane_g1

0xd743,	// (0x00057929) area_left_week_number_pane

0xd74c,	// (0x00057932) area_top_day_name_pane

0xd755,	// (0x0005793b) frame_month_view_pane

0xd75f,	// (0x00057945) grid_month_view_pane

0xd769,	// (0x0005794f) cell_top_day_name_pane_ParamLimits

0xd769,	// (0x0005794f) cell_top_day_name_pane

0xd785,	// (0x0005796b) cell_area_left_week_number_pane_ParamLimits

0xd785,	// (0x0005796b) cell_area_left_week_number_pane

0xd799,	// (0x0005797f) cell_month_view_pane_ParamLimits

0xd799,	// (0x0005797f) cell_month_view_pane

0x3063,	// (0x0004d249) frm_month_g1

0xd7b8,	// (0x0005799e) frm_month_g2

0xd7c2,	// (0x000579a8) frm_month_g3

0xd7cc,	// (0x000579b2) frm_month_g4

0xd7d6,	// (0x000579bc) frm_month_g5

0xd7e0,	// (0x000579c6) frm_month_g6

0xd7ea,	// (0x000579d0) frm_month_g7

0x306c,	// (0x0004d252) frm_month_g8

0xd7f4,	// (0x000579da) frm_month_g9

0xd7fd,	// (0x000579e3) frm_month_g10

0xd806,	// (0x000579ec) frm_month_g11

0xd80f,	// (0x000579f5) frm_month_g12

0xd818,	// (0x000579fe) frm_month_g13

0xd823,	// (0x00057a09) frm_month_g14

0xd82e,	// (0x00057a14) frm_month_g15

0xd839,	// (0x00057a1f) frm_month_g16

0x000f,

0xff14,	// (0x0005a0fa) frm_month_g

0xd844,	// (0x00057a2a) cell_top_day_name_pane_t1

0xd853,	// (0x00057a39) cell_area_left_week_number_pane_g1

0xd844,	// (0x00057a2a) cell_area_left_week_number_pane_t1

0xebe5,	// (0x00058dcb) cell_month_view_pane_g1

0xd85b,	// (0x00057a41) cell_month_view_pane_t1

0x053e,	// (0x0004a724) main_fps_pane

0x2449,	// (0x0004c62f) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x2449,	// (0x0004c62f) cmail_ddmenu_btn02_pane_cp1

0x2465,	// (0x0004c64b) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x2465,	// (0x0004c64b) cmail_ddmenu_btn02_pane_cp2

0xd1d8,	// (0x000573be) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xd1d8,	// (0x000573be) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe3c,	// (0x0005a022) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe3c,	// (0x0005a022) cmail_ddmenu_btn02_pane_g

0xd1f6,	// (0x000573dc) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xd1f6,	// (0x000573dc) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe41,	// (0x0005a027) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe41,	// (0x0005a027) cmail_ddmenu_btn02_pane_t

0xd86a,	// (0x00057a50) fps_text_pane_ParamLimits

0xd86a,	// (0x00057a50) fps_text_pane

0xd877,	// (0x00057a5d) main_fps_pane_g1_ParamLimits

0xd877,	// (0x00057a5d) main_fps_pane_g1

0xd883,	// (0x00057a69) wait_bar_pane_cp010_ParamLimits

0xd883,	// (0x00057a69) wait_bar_pane_cp010

0xd88f,	// (0x00057a75) fps_text_pane_t1_ParamLimits

0xd88f,	// (0x00057a75) fps_text_pane_t1

0xa9c3,	// (0x00054ba9) cam4_image_uncrop_pane_g1

0xa9cc,	// (0x00054bb2) cam4_image_uncrop_pane_g2

0xa9d5,	// (0x00054bbb) cam4_image_uncrop_pane_g3

0xa9de,	// (0x00054bc4) cam4_image_uncrop_pane_g4

0x0003,

0xf91c,	// (0x00059b02) cam4_image_uncrop_pane_g

0xd726,	// (0x0005790c) dia3_listrow_pane_ParamLimits

0x053e,	// (0x0004a724) main_phob2_pane

0xcd5a,	// (0x00056f40) cell_tport_appsw_pane_cp02_ParamLimits

0xcd5a,	// (0x00056f40) cell_tport_appsw_pane_cp02

0xcd69,	// (0x00056f4f) cell_tport_appsw_pane_cp03_ParamLimits

0xcd69,	// (0x00056f4f) cell_tport_appsw_pane_cp03

0x053e,	// (0x0004a724) phob2_contact_card_pane

0x053e,	// (0x0004a724) phob2_listscroll_pane

0x3075,	// (0x0004d25b) phob2_list_pane

0x307d,	// (0x0004d263) scroll_pane_cp034

0xd8a8,	// (0x00057a8e) phob2_cc_data_pane_ParamLimits

0xd8a8,	// (0x00057a8e) phob2_cc_data_pane

0xd8c4,	// (0x00057aaa) phob2_cc_listscroll_pane_ParamLimits

0xd8c4,	// (0x00057aaa) phob2_cc_listscroll_pane

0xd8e0,	// (0x00057ac6) list_double_large_graphic_phob2_pane_ParamLimits

0xd8e0,	// (0x00057ac6) list_double_large_graphic_phob2_pane

0xd8fa,	// (0x00057ae0) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xd8fa,	// (0x00057ae0) list_double_large_graphic_phob2_pane_g1

0xd907,	// (0x00057aed) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xd907,	// (0x00057aed) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff35,	// (0x0005a11b) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff35,	// (0x0005a11b) list_double_large_graphic_phob2_pane_g

0xd913,	// (0x00057af9) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xd913,	// (0x00057af9) list_double_large_graphic_phob2_pane_t1

0xd928,	// (0x00057b0e) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xd928,	// (0x00057b0e) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff3a,	// (0x0005a120) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff3a,	// (0x0005a120) list_double_large_graphic_phob2_pane_t

0x053e,	// (0x0004a724) list_highlight_pane_cp024

0x3085,	// (0x0004d26b) phob2_cc_button_pane

0xd93a,	// (0x00057b20) phob2_cc_data_pane_g1_ParamLimits

0xd93a,	// (0x00057b20) phob2_cc_data_pane_g1

0xd946,	// (0x00057b2c) phob2_cc_data_pane_g2_ParamLimits

0xd946,	// (0x00057b2c) phob2_cc_data_pane_g2

0x0001,

0xff3f,	// (0x0005a125) phob2_cc_data_pane_g_ParamLimits

0xff3f,	// (0x0005a125) phob2_cc_data_pane_g

0xd952,	// (0x00057b38) phob2_cc_data_pane_t1_ParamLimits

0xd952,	// (0x00057b38) phob2_cc_data_pane_t1

0xd964,	// (0x00057b4a) phob2_cc_data_pane_t2_ParamLimits

0xd964,	// (0x00057b4a) phob2_cc_data_pane_t2

0xd976,	// (0x00057b5c) phob2_cc_data_pane_t3_ParamLimits

0xd976,	// (0x00057b5c) phob2_cc_data_pane_t3

0x0002,

0xff44,	// (0x0005a12a) phob2_cc_data_pane_t_ParamLimits

0xff44,	// (0x0005a12a) phob2_cc_data_pane_t

0x308d,	// (0x0004d273) phob2_cc_list_pane_ParamLimits

0x308d,	// (0x0004d273) phob2_cc_list_pane

0x14d5,	// (0x0004b6bb) scroll_pane_cp035_ParamLimits

0x14d5,	// (0x0004b6bb) scroll_pane_cp035

0x4a45,	// (0x0004ec2b) bg_button_pane_cp033

0x3099,	// (0x0004d27f) phob2_cc_button_pane_g1

0x30a5,	// (0x0004d28b) phob2_cc_button_pane_t1

0x30ba,	// (0x0004d2a0) phob2_cc_button_pane_t2

0x0001,

0xff4b,	// (0x0005a131) phob2_cc_button_pane_t

0xd988,	// (0x00057b6e) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xd988,	// (0x00057b6e) list_double_large_graphic_phob2_cc_pane

0xd9a7,	// (0x00057b8d) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xd9a7,	// (0x00057b8d) list_double_large_graphic_phob2_cc_pane_g1

0xd9b8,	// (0x00057b9e) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xd9b8,	// (0x00057b9e) list_double_large_graphic_phob2_cc_pane_g2

0xd9c7,	// (0x00057bad) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xd9c7,	// (0x00057bad) list_double_large_graphic_phob2_cc_pane_g3

0xd9d6,	// (0x00057bbc) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xd9d6,	// (0x00057bbc) list_double_large_graphic_phob2_cc_pane_g4

0xd9e7,	// (0x00057bcd) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xd9e7,	// (0x00057bcd) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff50,	// (0x0005a136) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff50,	// (0x0005a136) list_double_large_graphic_phob2_cc_pane_g

0xd9f6,	// (0x00057bdc) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xd9f6,	// (0x00057bdc) list_double_large_graphic_phob2_cc_pane_t1

0xda1f,	// (0x00057c05) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xda1f,	// (0x00057c05) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff5b,	// (0x0005a141) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff5b,	// (0x0005a141) list_double_large_graphic_phob2_cc_pane_t

0x30cc,	// (0x0004d2b2) list_highlight_pane_cp025_ParamLimits

0x30cc,	// (0x0004d2b2) list_highlight_pane_cp025

0x4a45,	// (0x0004ec2b) bg_button_pane_cp033_ParamLimits

0x3099,	// (0x0004d27f) phob2_cc_button_pane_g1_ParamLimits

0x30a5,	// (0x0004d28b) phob2_cc_button_pane_t1_ParamLimits

0x30ba,	// (0x0004d2a0) phob2_cc_button_pane_t2_ParamLimits

0xff4b,	// (0x0005a131) phob2_cc_button_pane_t_ParamLimits

0x5c63,	// (0x0004fe49) popup_wgtman_window

0x12bc,	// (0x0004b4a2) scroll_pane_cp038

0xd550,	// (0x00057736) wgtman_btn_pane_cp_01_ParamLimits

0xd550,	// (0x00057736) wgtman_btn_pane_cp_01

0x30da,	// (0x0004d2c0) wgtman_content_pane

0x30e3,	// (0x0004d2c9) wgtman_heading_pane

0x053e,	// (0x0004a724) bg_heading_pane_cp02

0x30ec,	// (0x0004d2d2) wgtman_heading_pane_g1

0x30f4,	// (0x0004d2da) wgtman_heading_pane_t1

0x3102,	// (0x0004d2e8) scroll_pane_cp036

0x310a,	// (0x0004d2f0) wgtman_list_pane

0x22dc,	// (0x0004c4c2) wgtman_list_pane_t1_ParamLimits

0x22dc,	// (0x0004c4c2) wgtman_list_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Small
