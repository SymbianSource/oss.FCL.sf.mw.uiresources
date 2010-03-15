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

#include "aknlayoutscalable_abrw_pnl4_apps_nhd4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0002dbc1 };

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
0x194c,	// (0x0002f50d) Screen

0x1958,	// (0x0002f519) application_window

0x1988,	// (0x0002f549) area_bottom_pane_ParamLimits

0x1988,	// (0x0002f549) area_bottom_pane

0x0215,	// (0x0002ddd6) area_top_pane_ParamLimits

0x0215,	// (0x0002ddd6) area_top_pane

0x19e5,	// (0x0002f5a6) call_video_uplink_pane_ParamLimits

0x19e5,	// (0x0002f5a6) call_video_uplink_pane

0x02a3,	// (0x0002de64) main_pane_ParamLimits

0x02a3,	// (0x0002de64) main_pane

0xc32e,	// (0x00039eef) context_pane

0x4cde,	// (0x0003289f) navi_pane

0x4d06,	// (0x000328c7) popup_cale_events_window_ParamLimits

0x4d06,	// (0x000328c7) popup_cale_events_window

0xc341,	// (0x00039f02) popup_mup_playback_window

0x4d1e,	// (0x000328df) signal_pane

0xa32a,	// (0x00037eeb) main_browser_pane

0xaec8,	// (0x00038a89) main_burst_pane

0x0705,	// (0x0002e2c6) main_calc_pane

0xc314,	// (0x00039ed5) main_cale_day_pane

0x0719,	// (0x0002e2da) main_cale_month_pane

0xc314,	// (0x00039ed5) main_cale_week_pane

0xaec8,	// (0x00038a89) main_call_pane

0x9feb,	// (0x00037bac) main_call_poc_pane

0xaec8,	// (0x00038a89) main_camera_pane

0xaec8,	// (0x00038a89) main_chi_dic_pane

0xad4d,	// (0x0003890e) main_clock_pane

0x9feb,	// (0x00037bac) main_fmradio_pane

0xaec8,	// (0x00038a89) main_graph_messa_pane

0x9feb,	// (0x00037bac) main_help_pane

0xa32a,	// (0x00037eeb) main_im_pane

0xa246,	// (0x00037e07) main_image_pane_ParamLimits

0xa246,	// (0x00037e07) main_image_pane

0x9feb,	// (0x00037bac) main_location2_pane

0xaec8,	// (0x00038a89) main_location_pane

0xa246,	// (0x00037e07) main_messa_pane

0x9feb,	// (0x00037bac) main_mp2_pane

0xaec8,	// (0x00038a89) main_mp_pane

0x9feb,	// (0x00037bac) main_msg_pane

0x9feb,	// (0x00037bac) main_mup_eq_pane

0x9feb,	// (0x00037bac) main_mup_pane

0xa32a,	// (0x00037eeb) main_notes_pane

0x9feb,	// (0x00037bac) main_pec_pane

0x9feb,	// (0x00037bac) main_phob_pane

0x9feb,	// (0x00037bac) main_pinb_pane

0x9feb,	// (0x00037bac) main_postcard_pane

0x9feb,	// (0x00037bac) main_qdial_pane

0xaec8,	// (0x00038a89) main_skin_pane

0x9feb,	// (0x00037bac) main_smil2_pane

0xaec8,	// (0x00038a89) main_smil_pane

0xaec8,	// (0x00038a89) main_video_pane

0xaec8,	// (0x00038a89) main_video_tele_pane

0xa246,	// (0x00037e07) main_viewer_pane_ParamLimits

0xa246,	// (0x00037e07) main_viewer_pane

0xaec8,	// (0x00038a89) main_vorec_pane

0x076b,	// (0x0002e32c) popup_blid_sat_info_window_ParamLimits

0x076b,	// (0x0002e32c) popup_blid_sat_info_window

0x07c3,	// (0x0002e384) popup_dyc_status_message_window_ParamLimits

0x07c3,	// (0x0002e384) popup_dyc_status_message_window

0x07db,	// (0x0002e39c) popup_grid_large_graphic_window_ParamLimits

0x07db,	// (0x0002e39c) popup_grid_large_graphic_window

0x0891,	// (0x0002e452) popup_loc_request_window_ParamLimits

0x0891,	// (0x0002e452) popup_loc_request_window

0x097f,	// (0x0002e540) popup_wml_address_window_ParamLimits

0x097f,	// (0x0002e540) popup_wml_address_window

0x4ace,	// (0x0003268f) call_muted_g1

0x4781,	// (0x00032342) popup_call_audio_conf_window_ParamLimits

0x4781,	// (0x00032342) popup_call_audio_conf_window

0x4ae2,	// (0x000326a3) popup_call_audio_first_window_ParamLimits

0x4ae2,	// (0x000326a3) popup_call_audio_first_window

0x4b58,	// (0x00032719) popup_call_audio_in_window_ParamLimits

0x4b58,	// (0x00032719) popup_call_audio_in_window

0x4b94,	// (0x00032755) popup_call_audio_out_window_ParamLimits

0x4b94,	// (0x00032755) popup_call_audio_out_window

0x4bce,	// (0x0003278f) popup_call_audio_second_window_ParamLimits

0x4bce,	// (0x0003278f) popup_call_audio_second_window

0x4c24,	// (0x000327e5) popup_call_audio_wait_window_ParamLimits

0x4c24,	// (0x000327e5) popup_call_audio_wait_window

0x4c59,	// (0x0003281a) popup_number_entry_window_ParamLimits

0x4c59,	// (0x0003281a) popup_number_entry_window

0x9bd8,	// (0x00037799) bg_popup_call_pane_cp05_ParamLimits

0x9bd8,	// (0x00037799) bg_popup_call_pane_cp05

0x9bf8,	// (0x000377b9) popup_number_entry_window_t1

0x9c0b,	// (0x000377cc) popup_number_entry_window_t2

0x9c1d,	// (0x000377de) popup_number_entry_window_t3

0x0003,

0xf0d3,	// (0x0003cc94) popup_number_entry_window_t

0x9c2f,	// (0x000377f0) text_title_cp2

0x9c42,	// (0x00037803) bg_popup_call_pane_cp_ParamLimits

0x9c42,	// (0x00037803) bg_popup_call_pane_cp

0x9c50,	// (0x00037811) call_thumbnail_pane

0x9c58,	// (0x00037819) popup_call_audio_in_window_g1_ParamLimits

0x9c58,	// (0x00037819) popup_call_audio_in_window_g1

0x9c64,	// (0x00037825) popup_call_audio_in_window_g2_ParamLimits

0x9c64,	// (0x00037825) popup_call_audio_in_window_g2

0x9c70,	// (0x00037831) popup_call_audio_in_window_g3_ParamLimits

0x9c70,	// (0x00037831) popup_call_audio_in_window_g3

0x0002,

0xf0dc,	// (0x0003cc9d) popup_call_audio_in_window_g_ParamLimits

0xf0dc,	// (0x0003cc9d) popup_call_audio_in_window_g

0x9c7c,	// (0x0003783d) popup_call_audio_in_window_t1_ParamLimits

0x9c7c,	// (0x0003783d) popup_call_audio_in_window_t1

0x9c98,	// (0x00037859) popup_call_audio_in_window_t2_ParamLimits

0x9c98,	// (0x00037859) popup_call_audio_in_window_t2

0x9cb4,	// (0x00037875) popup_call_audio_in_window_t3_ParamLimits

0x9cb4,	// (0x00037875) popup_call_audio_in_window_t3

0x0002,

0xf0e3,	// (0x0003cca4) popup_call_audio_in_window_t_ParamLimits

0xf0e3,	// (0x0003cca4) popup_call_audio_in_window_t

0x9c42,	// (0x00037803) bg_popup_call_pane_cp01_ParamLimits

0x9c42,	// (0x00037803) bg_popup_call_pane_cp01

0x9c50,	// (0x00037811) call_thumbnail_pane_cp02

0x9cc7,	// (0x00037888) call_type_pane_cp022

0x9ccf,	// (0x00037890) popup_call_audio_out_window_g1_ParamLimits

0x9ccf,	// (0x00037890) popup_call_audio_out_window_g1

0x9ce1,	// (0x000378a2) popup_call_audio_out_window_g2_ParamLimits

0x9ce1,	// (0x000378a2) popup_call_audio_out_window_g2

0x9ced,	// (0x000378ae) popup_call_audio_out_window_g3_ParamLimits

0x9ced,	// (0x000378ae) popup_call_audio_out_window_g3

0x0002,

0xf0ea,	// (0x0003ccab) popup_call_audio_out_window_g_ParamLimits

0xf0ea,	// (0x0003ccab) popup_call_audio_out_window_g

0x9cff,	// (0x000378c0) popup_call_audio_out_window_t1_ParamLimits

0x9cff,	// (0x000378c0) popup_call_audio_out_window_t1

0x9d17,	// (0x000378d8) popup_call_audio_out_window_t2_ParamLimits

0x9d17,	// (0x000378d8) popup_call_audio_out_window_t2

0x0001,

0xf0f1,	// (0x0003ccb2) popup_call_audio_out_window_t_ParamLimits

0xf0f1,	// (0x0003ccb2) popup_call_audio_out_window_t

0x9d2c,	// (0x000378ed) bg_popup_call_pane_ParamLimits

0x9d2c,	// (0x000378ed) bg_popup_call_pane

0x1a5c,	// (0x0002f61d) call_thumbnail_pane_cp_ParamLimits

0x1a5c,	// (0x0002f61d) call_thumbnail_pane_cp

0x9db0,	// (0x00037971) call_type_pane_cp01_ParamLimits

0x9db0,	// (0x00037971) call_type_pane_cp01

0x9df4,	// (0x000379b5) popup_call_audio_first_window_g1_ParamLimits

0x9df4,	// (0x000379b5) popup_call_audio_first_window_g1

0x9e40,	// (0x00037a01) popup_call_audio_first_window_g2_ParamLimits

0x9e40,	// (0x00037a01) popup_call_audio_first_window_g2

0x0001,

0xf0f6,	// (0x0003ccb7) popup_call_audio_first_window_g_ParamLimits

0xf0f6,	// (0x0003ccb7) popup_call_audio_first_window_g

0x9e84,	// (0x00037a45) popup_call_audio_first_window_t1_ParamLimits

0x9e84,	// (0x00037a45) popup_call_audio_first_window_t1

0x9f30,	// (0x00037af1) popup_call_audio_first_window_t4_ParamLimits

0x9f30,	// (0x00037af1) popup_call_audio_first_window_t4

0x9fbc,	// (0x00037b7d) popup_call_audio_first_window_t5_ParamLimits

0x9fbc,	// (0x00037b7d) popup_call_audio_first_window_t5

0x0002,

0xf0fb,	// (0x0003ccbc) popup_call_audio_first_window_t_ParamLimits

0xf0fb,	// (0x0003ccbc) popup_call_audio_first_window_t

0x9feb,	// (0x00037bac) bg_popup_call_pane_cp02

0x9ff5,	// (0x00037bb6) call_type_pane_cp023

0x9ffd,	// (0x00037bbe) popup_call_audio_wait_window_g1

0xa005,	// (0x00037bc6) popup_call_audio_wait_window_g2

0x0001,

0xf102,	// (0x0003ccc3) popup_call_audio_wait_window_g

0xa00d,	// (0x00037bce) popup_call_audio_wait_window_t3

0xa01b,	// (0x00037bdc) bg_popup_call_pane_cp03_ParamLimits

0xa01b,	// (0x00037bdc) bg_popup_call_pane_cp03

0xa07b,	// (0x00037c3c) call_thumbnail_pane_cp011_ParamLimits

0xa07b,	// (0x00037c3c) call_thumbnail_pane_cp011

0xa087,	// (0x00037c48) call_type_pane_cp034_ParamLimits

0xa087,	// (0x00037c48) call_type_pane_cp034

0xa0c3,	// (0x00037c84) popup_call_audio_second_window_g1_ParamLimits

0xa0c3,	// (0x00037c84) popup_call_audio_second_window_g1

0xa0ff,	// (0x00037cc0) popup_call_audio_second_window_g2_ParamLimits

0xa0ff,	// (0x00037cc0) popup_call_audio_second_window_g2

0x0001,

0xf107,	// (0x0003ccc8) popup_call_audio_second_window_g_ParamLimits

0xf107,	// (0x0003ccc8) popup_call_audio_second_window_g

0xa13b,	// (0x00037cfc) popup_call_audio_second_window_t1_ParamLimits

0xa13b,	// (0x00037cfc) popup_call_audio_second_window_t1

0xa1bc,	// (0x00037d7d) popup_call_audio_second_window_t2_ParamLimits

0xa1bc,	// (0x00037d7d) popup_call_audio_second_window_t2

0xa1f2,	// (0x00037db3) popup_call_audio_second_window_t3_ParamLimits

0xa1f2,	// (0x00037db3) popup_call_audio_second_window_t3

0x0002,

0xf10c,	// (0x0003cccd) popup_call_audio_second_window_t_ParamLimits

0xf10c,	// (0x0003cccd) popup_call_audio_second_window_t

0x9feb,	// (0x00037bac) bg_popup_call_pane_cp04

0xa228,	// (0x00037de9) list_conf_pane

0xa230,	// (0x00037df1) popup_call_audio_conf_window_t1

0xa23e,	// (0x00037dff) call_thumbnail_pane_g1

0xa246,	// (0x00037e07) bg_pinb_pane_ParamLimits

0xa246,	// (0x00037e07) bg_pinb_pane

0xa254,	// (0x00037e15) find_pinb_pane

0xa25d,	// (0x00037e1e) listscroll_pinb_pane_ParamLimits

0xa25d,	// (0x00037e1e) listscroll_pinb_pane

0xa26c,	// (0x00037e2d) pinb_bg_pane_g1

0x1a80,	// (0x0002f641) pinb_bg_pane_g2

0x1a8c,	// (0x0002f64d) pinb_bg_pane_g3

0x1a98,	// (0x0002f659) pinb_bg_pane_g4

0x1aa4,	// (0x0002f665) pinb_bg_pane_g5

0x1ab0,	// (0x0002f671) pinb_bg_pane_g6

0x1abb,	// (0x0002f67c) pinb_bg_pane_g7

0x1ac6,	// (0x0002f687) pinb_bg_pane_g8

0x1ad1,	// (0x0002f692) pinb_bg_pane_g9

0x1adb,	// (0x0002f69c) pinb_bg_pane_g10

0x0009,

0xf113,	// (0x0003ccd4) pinb_bg_pane_g

0x1af8,	// (0x0002f6b9) grid_pinb_pane

0x1b01,	// (0x0002f6c2) list_pinb_pane

0x1b0a,	// (0x0002f6cb) scroll_pane_cp01_ParamLimits

0x1b0a,	// (0x0002f6cb) scroll_pane_cp01

0xa276,	// (0x00037e37) find_pinb_pane_g1_ParamLimits

0xa276,	// (0x00037e37) find_pinb_pane_g1

0xa28e,	// (0x00037e4f) find_pinb_pane_t1

0xa2a0,	// (0x00037e61) find_pinb_pane_t2

0x0001,

0xf12d,	// (0x0003ccee) find_pinb_pane_t

0xa2b5,	// (0x00037e76) input_focus_pane_cp01_ParamLimits

0xa2b5,	// (0x00037e76) input_focus_pane_cp01

0x1b1c,	// (0x0002f6dd) cell_pinb_pane_ParamLimits

0x1b1c,	// (0x0002f6dd) cell_pinb_pane

0xa2c1,	// (0x00037e82) cell_pinb_pane_g1_ParamLimits

0xa2c1,	// (0x00037e82) cell_pinb_pane_g1

0xa2d4,	// (0x00037e95) cell_pinb_pane_g2_ParamLimits

0xa2d4,	// (0x00037e95) cell_pinb_pane_g2

0xa2e0,	// (0x00037ea1) cell_pinb_pane_g3_ParamLimits

0xa2e0,	// (0x00037ea1) cell_pinb_pane_g3

0x0002,

0xf132,	// (0x0003ccf3) cell_pinb_pane_g_ParamLimits

0xf132,	// (0x0003ccf3) cell_pinb_pane_g

0x9feb,	// (0x00037bac) grid_highlight_pane_cp01

0x1b4a,	// (0x0002f70b) list_pinb_item_pane_ParamLimits

0x1b4a,	// (0x0002f70b) list_pinb_item_pane

0x9feb,	// (0x00037bac) list_highlight_pane_cp02

0x1b5d,	// (0x0002f71e) list_pinb_item_pane_g1_ParamLimits

0x1b5d,	// (0x0002f71e) list_pinb_item_pane_g1

0x1b6a,	// (0x0002f72b) list_pinb_item_pane_g2_ParamLimits

0x1b6a,	// (0x0002f72b) list_pinb_item_pane_g2

0x1b76,	// (0x0002f737) list_pinb_item_pane_g3_ParamLimits

0x1b76,	// (0x0002f737) list_pinb_item_pane_g3

0x1b87,	// (0x0002f748) list_pinb_item_pane_g4_ParamLimits

0x1b87,	// (0x0002f748) list_pinb_item_pane_g4

0x0003,

0xf139,	// (0x0003ccfa) list_pinb_item_pane_g_ParamLimits

0xf139,	// (0x0003ccfa) list_pinb_item_pane_g

0x1b93,	// (0x0002f754) list_pinb_item_pane_t1_ParamLimits

0x1b93,	// (0x0002f754) list_pinb_item_pane_t1

0x043d,	// (0x0002dffe) calc_display_pane

0x0465,	// (0x0002e026) calc_paper_pane

0x0488,	// (0x0002e049) grid_calc_pane

0x9feb,	// (0x00037bac) bg_list_pane_cp01

0x1bb2,	// (0x0002f773) clock_g1

0x1bba,	// (0x0002f77b) clock_g2

0x0001,

0xf142,	// (0x0003cd03) clock_g

0x1bc2,	// (0x0002f783) clock_t1_ParamLimits

0x1bc2,	// (0x0002f783) clock_t1

0x1bd7,	// (0x0002f798) clock_t2_ParamLimits

0x1bd7,	// (0x0002f798) clock_t2

0x1be9,	// (0x0002f7aa) clock_t3_ParamLimits

0x1be9,	// (0x0002f7aa) clock_t3

0x1bfb,	// (0x0002f7bc) clock_t4_ParamLimits

0x1bfb,	// (0x0002f7bc) clock_t4

0x1c0d,	// (0x0002f7ce) clock_t5_ParamLimits

0x1c0d,	// (0x0002f7ce) clock_t5

0x1c22,	// (0x0002f7e3) clock_t6_ParamLimits

0x1c22,	// (0x0002f7e3) clock_t6

0x1c34,	// (0x0002f7f5) clock_t7_ParamLimits

0x1c34,	// (0x0002f7f5) clock_t7

0x1c46,	// (0x0002f807) clock_t8_ParamLimits

0x1c46,	// (0x0002f807) clock_t8

0x1c5a,	// (0x0002f81b) clock_t9_ParamLimits

0x1c5a,	// (0x0002f81b) clock_t9

0x0008,

0xf147,	// (0x0003cd08) clock_t_ParamLimits

0xf147,	// (0x0003cd08) clock_t

0xa2ec,	// (0x00037ead) popup_clock_analogue_window_cp02

0xa2ec,	// (0x00037ead) popup_clock_digital_window_cp01

0xa2f4,	// (0x00037eb5) listscroll_help_pane

0x9feb,	// (0x00037bac) phob_pre_status_pane

0xa2fe,	// (0x00037ebf) grid_qdial_pane

0xa246,	// (0x00037e07) listscroll_mce_pane

0xa246,	// (0x00037e07) bg_notes_pane

0xa308,	// (0x00037ec9) list_notes_pane

0x1c6e,	// (0x0002f82f) scroll_pane_cp06

0xa316,	// (0x00037ed7) bg_calc_paper_pane

0x1c82,	// (0x0002f843) list_calc_pane

0xa32a,	// (0x00037eeb) bg_calc_display_pane

0x04b6,	// (0x0002e077) calc_display_pane_t1

0x04c8,	// (0x0002e089) calc_display_pane_t2

0x1c9c,	// (0x0002f85d) calc_display_pane_t3

0x0002,

0xf15a,	// (0x0003cd1b) calc_display_pane_t

0x04da,	// (0x0002e09b) cell_calc_pane_ParamLimits

0x04da,	// (0x0002e09b) cell_calc_pane

0xa336,	// (0x00037ef7) bg_calc_paper_pane_g1

0xa342,	// (0x00037f03) bg_calc_paper_pane_g2

0xa34e,	// (0x00037f0f) bg_calc_paper_pane_g3

0xa35a,	// (0x00037f1b) bg_calc_paper_pane_g4

0xa366,	// (0x00037f27) bg_calc_paper_pane_g5

0x1cae,	// (0x0002f86f) bg_calc_paper_pane_g6

0x1cbf,	// (0x0002f880) bg_calc_paper_pane_g7

0x1cd0,	// (0x0002f891) bg_calc_paper_pane_g8

0x0007,

0xf161,	// (0x0003cd22) bg_calc_paper_pane_g

0x1ce3,	// (0x0002f8a4) calc_bg_paper_pane_g9

0x1cf6,	// (0x0002f8b7) list_calc_item_pane_ParamLimits

0x1cf6,	// (0x0002f8b7) list_calc_item_pane

0xa372,	// (0x00037f33) list_calc_item_pane_g1

0x1d10,	// (0x0002f8d1) list_calc_item_pane_t1_ParamLimits

0x1d10,	// (0x0002f8d1) list_calc_item_pane_t1

0x0511,	// (0x0002e0d2) list_calc_item_pane_t2_ParamLimits

0x0511,	// (0x0002e0d2) list_calc_item_pane_t2

0x0001,

0xf172,	// (0x0003cd33) list_calc_item_pane_t_ParamLimits

0xf172,	// (0x0003cd33) list_calc_item_pane_t

0xa37f,	// (0x00037f40) cell_calc_pane_g1

0xa389,	// (0x00037f4a) grid_highlight_pane_cp02

0xa3ab,	// (0x00037f6c) bg_calc_display_pane_g1

0x1d22,	// (0x0002f8e3) bg_calc_display_pane_g2

0xa3b4,	// (0x00037f75) bg_calc_display_pane_g3

0x0002,

0xf17c,	// (0x0003cd3d) bg_calc_display_pane_g

0x0543,	// (0x0002e104) cell_qdial_pane_ParamLimits

0x0543,	// (0x0002e104) cell_qdial_pane

0x1d2c,	// (0x0002f8ed) cell_qdial_pane_g1_ParamLimits

0x1d2c,	// (0x0002f8ed) cell_qdial_pane_g1

0x1d42,	// (0x0002f903) cell_qdial_pane_g2_ParamLimits

0x1d42,	// (0x0002f903) cell_qdial_pane_g2

0xa3bd,	// (0x00037f7e) cell_qdial_pane_g3_ParamLimits

0xa3bd,	// (0x00037f7e) cell_qdial_pane_g3

0x0003,

0xf183,	// (0x0003cd44) cell_qdial_pane_g_ParamLimits

0xf183,	// (0x0003cd44) cell_qdial_pane_g

0x1d68,	// (0x0002f929) cell_qdial_pane_t1_ParamLimits

0x1d68,	// (0x0002f929) cell_qdial_pane_t1

0x1d80,	// (0x0002f941) cell_qdial_pane_t2_ParamLimits

0x1d80,	// (0x0002f941) cell_qdial_pane_t2

0x1d93,	// (0x0002f954) cell_qdial_pane_t3_ParamLimits

0x1d93,	// (0x0002f954) cell_qdial_pane_t3

0x0002,

0xf18c,	// (0x0003cd4d) cell_qdial_pane_t_ParamLimits

0xf18c,	// (0x0003cd4d) cell_qdial_pane_t

0x9feb,	// (0x00037bac) grid_highlight_pane_cp04

0xa3c9,	// (0x00037f8a) thumbnail_qdial_pane_ParamLimits

0xa3c9,	// (0x00037f8a) thumbnail_qdial_pane

0xa425,	// (0x00037fe6) list_help_pane

0xa42e,	// (0x00037fef) scroll_pane_cp02

0x1da6,	// (0x0002f967) help_list_pane_t1_ParamLimits

0x1da6,	// (0x0002f967) help_list_pane_t1

0x1dc5,	// (0x0002f986) bg_notes_pane_g2

0x1dcd,	// (0x0002f98e) bg_notes_pane_g3

0x1dd5,	// (0x0002f996) notes_bg_pane_g1

0x1ddd,	// (0x0002f99e) notes_bg_pane_g4

0x1de5,	// (0x0002f9a6) notes_bg_pane_g5

0x1ded,	// (0x0002f9ae) notes_bg_pane_g6

0x1df5,	// (0x0002f9b6) notes_bg_pane_g7

0x1dfd,	// (0x0002f9be) notes_bg_pane_g8

0x1e05,	// (0x0002f9c6) notes_bg_pane_g9

0x0006,

0xf1aa,	// (0x0003cd6b) notes_bg_pane_g

0x1e0d,	// (0x0002f9ce) list_notes_text_pane_ParamLimits

0x1e0d,	// (0x0002f9ce) list_notes_text_pane

0xa437,	// (0x00037ff8) list_notes_text_pane_g1

0x1e23,	// (0x0002f9e4) list_notes_text_pane_t1

0x1e31,	// (0x0002f9f2) listscroll_cale_week_pane

0x1e5d,	// (0x0002fa1e) bg_cale_heading_pane

0xa45a,	// (0x0003801b) bg_cale_pane_cp01

0x1e7b,	// (0x0002fa3c) cale_week_corner_pane

0x1e9a,	// (0x0002fa5b) cale_week_day_heading_pane

0x1ebd,	// (0x0002fa7e) cale_week_scroll_pane_g1

0x1ed6,	// (0x0002fa97) cale_week_scroll_pane_g2

0x1eee,	// (0x0002faaf) cale_week_scroll_pane_g3

0x1f06,	// (0x0002fac7) cale_week_scroll_pane_g4

0x1f1e,	// (0x0002fadf) cale_week_scroll_pane_g5

0x1f3a,	// (0x0002fafb) cale_week_scroll_pane_g6

0x1f5a,	// (0x0002fb1b) cale_week_scroll_pane_g7

0x1f7a,	// (0x0002fb3b) cale_week_scroll_pane_g8

0x1f9e,	// (0x0002fb5f) cale_week_scroll_pane_g9

0x1fb6,	// (0x0002fb77) cale_week_scroll_pane_g10

0x1fce,	// (0x0002fb8f) cale_week_scroll_pane_g11

0x1fe6,	// (0x0002fba7) cale_week_scroll_pane_g12

0x1ffe,	// (0x0002fbbf) cale_week_scroll_pane_g13

0x1ffe,	// (0x0002fbbf) cale_week_scroll_pane_g14

0x1ffe,	// (0x0002fbbf) cale_week_scroll_pane_g15

0x000e,

0xf1b9,	// (0x0003cd7a) cale_week_scroll_pane_g

0x2016,	// (0x0002fbd7) cale_week_time_pane

0x203a,	// (0x0002fbfb) grid_cale_week_pane

0xa48a,	// (0x0003804b) scroll_pane_cp08

0x2060,	// (0x0002fc21) cell_cale_week_pane_ParamLimits

0x2060,	// (0x0002fc21) cell_cale_week_pane

0x20ee,	// (0x0002fcaf) cale_week_day_heading_pane_t1

0x2138,	// (0x0002fcf9) cale_week_day_heading_pane_t2

0x2187,	// (0x0002fd48) cale_week_day_heading_pane_t3

0x21d6,	// (0x0002fd97) cale_week_day_heading_pane_t4

0x2225,	// (0x0002fde6) cale_week_day_heading_pane_t5

0x227c,	// (0x0002fe3d) cale_week_day_heading_pane_t6

0x22d3,	// (0x0002fe94) cale_week_day_heading_pane_t7

0x0006,

0xf1d8,	// (0x0003cd99) cale_week_day_heading_pane_t

0xa4a7,	// (0x00038068) bg_cale_side_pane

0x0557,	// (0x0002e118) cale_week_time_pane_t1

0x0571,	// (0x0002e132) cale_week_time_pane_t2

0x058b,	// (0x0002e14c) cale_week_time_pane_t3

0x05a5,	// (0x0002e166) cale_week_time_pane_t4

0x05bf,	// (0x0002e180) cale_week_time_pane_t5

0x05d9,	// (0x0002e19a) cale_week_time_pane_t6

0x05f3,	// (0x0002e1b4) cale_week_time_pane_t7

0x0613,	// (0x0002e1d4) cale_week_time_pane_t8

0x0007,

0xf1e7,	// (0x0003cda8) cale_week_time_pane_t

0x231d,	// (0x0002fede) cell_cale_week_pane_g2

0x233c,	// (0x0002fefd) cell_cale_week_pane_g3_ParamLimits

0x233c,	// (0x0002fefd) cell_cale_week_pane_g3

0xa4b5,	// (0x00038076) grid_highlight_pane_cp07

0xa4bd,	// (0x0003807e) listscroll_gms_pane

0xa4c7,	// (0x00038088) grid_gms_pane

0xa4d0,	// (0x00038091) listscroll_gms_pane_g1

0xa4d8,	// (0x00038099) listscroll_gms_pane_g2

0x0001,

0xf1f8,	// (0x0003cdb9) listscroll_gms_pane_g

0x2354,	// (0x0002ff15) scroll_pane_cp010

0x235f,	// (0x0002ff20) cell_gms_pane_ParamLimits

0x235f,	// (0x0002ff20) cell_gms_pane

0x2371,	// (0x0002ff32) cell_gms_pane_g1

0xa4e0,	// (0x000380a1) cell_gms_pane_g2

0xa437,	// (0x00037ff8) cell_gms_pane_g3

0xa4e8,	// (0x000380a9) cell_gms_pane_g4

0x0003,

0xf1fd,	// (0x0003cdbe) cell_gms_pane_g

0xa4f1,	// (0x000380b2) grid_highlight_pane_cp09

0x4a78,	// (0x00032639) phob_pre_status_pane_g1

0x4a80,	// (0x00032641) phob_pre_status_pane_g2

0x4a88,	// (0x00032649) phob_pre_status_pane_g3

0x4a90,	// (0x00032651) phob_pre_status_pane_g4

0x0004,

0xf5ec,	// (0x0003d1ad) phob_pre_status_pane_g

0x4aa0,	// (0x00032661) phob_pre_status_pane_t1

0x4aae,	// (0x0003266f) phob_pre_status_pane_t2

0x4abe,	// (0x0003267f) phob_pre_status_pane_t3

0x0002,

0xf5f7,	// (0x0003d1b8) phob_pre_status_pane_t

0x9feb,	// (0x00037bac) bg_list_pane_cp05

0x063b,	// (0x0002e1fc) grid_vorec_pane

0x0647,	// (0x0002e208) vorec_t1

0x0655,	// (0x0002e216) vorec_t2

0x0663,	// (0x0002e224) vorec_t3

0x0671,	// (0x0002e232) vorec_t4

0x067f,	// (0x0002e240) vorec_t5

0x2379,	// (0x0002ff3a) vorec_t6

0x0006,

0xf206,	// (0x0003cdc7) vorec_t

0x069b,	// (0x0002e25c) wait_bar_pane_cp01

0x2387,	// (0x0002ff48) cell_vorec_pane_ParamLimits

0x2387,	// (0x0002ff48) cell_vorec_pane

0xa4f9,	// (0x000380ba) cell_vorec_pane_g1

0x9feb,	// (0x00037bac) grid_highlight_pane_cp05

0x23b2,	// (0x0002ff73) cams_zoom_pane

0x23c1,	// (0x0002ff82) image_vga_pane

0x23db,	// (0x0002ff9c) main_camera_pane_g1

0x23ed,	// (0x0002ffae) main_camera_pane_g2

0x23fd,	// (0x0002ffbe) main_camera_pane_g3

0x240f,	// (0x0002ffd0) main_camera_pane_g4

0x2421,	// (0x0002ffe2) main_camera_pane_g5

0x2433,	// (0x0002fff4) main_camera_pane_g6

0x2445,	// (0x00030006) main_camera_pane_g7

0x0007,

0xf215,	// (0x0003cdd6) main_camera_pane_g

0x2457,	// (0x00030018) main_camera_pane_t1

0x246d,	// (0x0003002e) main_camera_pane_t2

0x0001,

0xf226,	// (0x0003cde7) main_camera_pane_t

0x24a9,	// (0x0003006a) cams_zoom_pane_cp_ParamLimits

0x24a9,	// (0x0003006a) cams_zoom_pane_cp

0x24d1,	// (0x00030092) image_cif_pane_ParamLimits

0x24d1,	// (0x00030092) image_cif_pane

0x250c,	// (0x000300cd) image_subqcif_pane

0x2514,	// (0x000300d5) main_video_pane_g1_ParamLimits

0x2514,	// (0x000300d5) main_video_pane_g1

0x2538,	// (0x000300f9) main_video_pane_g2_ParamLimits

0x2538,	// (0x000300f9) main_video_pane_g2

0x256c,	// (0x0003012d) main_video_pane_g3_ParamLimits

0x256c,	// (0x0003012d) main_video_pane_g3

0x259a,	// (0x0003015b) main_video_pane_g4_ParamLimits

0x259a,	// (0x0003015b) main_video_pane_g4

0x25c8,	// (0x00030189) main_video_pane_g5_ParamLimits

0x25c8,	// (0x00030189) main_video_pane_g5

0xa50f,	// (0x000380d0) main_video_pane_g6_ParamLimits

0xa50f,	// (0x000380d0) main_video_pane_g6

0x0006,

0xf22b,	// (0x0003cdec) main_video_pane_g_ParamLimits

0xf22b,	// (0x0003cdec) main_video_pane_g

0x25f1,	// (0x000301b2) main_video_pane_t1_ParamLimits

0x25f1,	// (0x000301b2) main_video_pane_t1

0xa529,	// (0x000380ea) cams_zoom_pane_g1

0xa532,	// (0x000380f3) cams_zoom_pane_g2

0xa53b,	// (0x000380fc) cams_zoom_pane_g3

0xa544,	// (0x00038105) cams_zoom_pane_g4

0x0003,

0xf23a,	// (0x0003cdfb) cams_zoom_pane_g

0x264e,	// (0x0003020f) grid_cams_pane

0x2668,	// (0x00030229) linegrid_cams_pane

0x267b,	// (0x0003023c) cell_cams_pane_ParamLimits

0x267b,	// (0x0003023c) cell_cams_pane

0xa54d,	// (0x0003810e) cams_burst_image_pane

0xa555,	// (0x00038116) cell_cams_pane_g1

0x9feb,	// (0x00037bac) grid_highlight_pane_cp03

0xa37f,	// (0x00037f40) mp_bg_pane_g1

0x9feb,	// (0x00037bac) bg_list_pane_cp03

0xc239,	// (0x00039dfa) bg_mp_pane

0xc241,	// (0x00039e02) grid_mp_pane

0xc249,	// (0x00039e0a) media_player_g1

0xc251,	// (0x00039e12) media_player_t1

0xc25f,	// (0x00039e20) media_player_t2

0xc26d,	// (0x00039e2e) media_player_t3

0xc27b,	// (0x00039e3c) media_player_t4

0xc289,	// (0x00039e4a) media_player_t5

0xc297,	// (0x00039e58) media_player_t6

0xc2a5,	// (0x00039e66) media_player_t7

0x0006,

0xf5d6,	// (0x0003d197) media_player_t

0xc2b3,	// (0x00039e74) wait_bar_pane_cp02

0xf5bb,	// (0x0003d17c) main_usb_pane_t

0x4a6f,	// (0x00032630) cell_mp_pane

0xa37f,	// (0x00037f40) cell_mp_pane_g1

0x9feb,	// (0x00037bac) grid_highlight_pane_cp06

0xa55d,	// (0x0003811e) grid_skin_colour_pane

0xa565,	// (0x00038126) list_highlight_pane_cp03

0x27ab,	// (0x0003036c) skin_g1

0xa56d,	// (0x0003812e) skin_t1

0xa57c,	// (0x0003813d) skin_t2

0x0001,

0xf26f,	// (0x0003ce30) skin_t

0x27b3,	// (0x00030374) cell_skin_colour_pane_ParamLimits

0x27b3,	// (0x00030374) cell_skin_colour_pane

0xa58a,	// (0x0003814b) cell_skin_colour_pane_g1

0x282c,	// (0x000303ed) call_video_g1_ParamLimits

0x282c,	// (0x000303ed) call_video_g1

0x2848,	// (0x00030409) call_video_g2_ParamLimits

0x2848,	// (0x00030409) call_video_g2

0x0001,

0xf274,	// (0x0003ce35) call_video_g_ParamLimits

0xf274,	// (0x0003ce35) call_video_g

0x289a,	// (0x0003045b) call_video_uplink_pane_cp1_ParamLimits

0x289a,	// (0x0003045b) call_video_uplink_pane_cp1

0xa59c,	// (0x0003815d) call_video_uplink_pane_cp2

0x2939,	// (0x000304fa) video_down_crop_pane_ParamLimits

0x2939,	// (0x000304fa) video_down_crop_pane

0x2a22,	// (0x000305e3) video_down_pane_ParamLimits

0x2a22,	// (0x000305e3) video_down_pane

0xa5a4,	// (0x00038165) video_down_subqcif_pane_ParamLimits

0xa5a4,	// (0x00038165) video_down_subqcif_pane

0xa5bc,	// (0x0003817d) video_down_subqcif_pane_cp_ParamLimits

0xa5bc,	// (0x0003817d) video_down_subqcif_pane_cp

0xa5e2,	// (0x000381a3) im_reading_pane_ParamLimits

0xa5e2,	// (0x000381a3) im_reading_pane

0x2b30,	// (0x000306f1) im_writing_pane_ParamLimits

0x2b30,	// (0x000306f1) im_writing_pane

0x2b46,	// (0x00030707) im_reading_pane_t1

0xa5fc,	// (0x000381bd) list_im_pane

0xa60d,	// (0x000381ce) scroll_pane_cp07

0x2b83,	// (0x00030744) im_writing_pane_t1_ParamLimits

0x2b83,	// (0x00030744) im_writing_pane_t1

0xa626,	// (0x000381e7) im_writing_pane_t2_ParamLimits

0xa626,	// (0x000381e7) im_writing_pane_t2

0x0001,

0xf27e,	// (0x0003ce3f) im_writing_pane_t_ParamLimits

0xf27e,	// (0x0003ce3f) im_writing_pane_t

0x9feb,	// (0x00037bac) input_focus_pane_cp04

0x9feb,	// (0x00037bac) input_focus_pane_cp05

0x2b98,	// (0x00030759) list_im_single_pane_ParamLimits

0x2b98,	// (0x00030759) list_im_single_pane

0x2bae,	// (0x0003076f) list_single_im_pane_t1

0x4a2f,	// (0x000325f0) blid_accuracy_pane

0x4a37,	// (0x000325f8) blid_compass_pane

0x4a41,	// (0x00032602) main_location_t1

0x4a51,	// (0x00032612) main_location_t2

0x4a61,	// (0x00032622) main_location_t3

0x0002,

0xf5e5,	// (0x0003d1a6) main_location_t

0x9feb,	// (0x00037bac) aid_levels_location

0xa37f,	// (0x00037f40) blid_accuracy_pane_g1

0xa37f,	// (0x00037f40) blid_accuracy_pane_g2

0x0001,

0xf2e0,	// (0x0003cea1) blid_accuracy_pane_g

0xa745,	// (0x00038306) wml_content_pane

0xa783,	// (0x00038344) wml_button_pane_ParamLimits

0xa783,	// (0x00038344) wml_button_pane

0x2bbd,	// (0x0003077e) wml_list_single_large_pane_ParamLimits

0x2bbd,	// (0x0003077e) wml_list_single_large_pane

0x2bd3,	// (0x00030794) wml_list_single_medium_pane_ParamLimits

0x2bd3,	// (0x00030794) wml_list_single_medium_pane

0x2bed,	// (0x000307ae) wml_list_single_small_pane_ParamLimits

0x2bed,	// (0x000307ae) wml_list_single_small_pane

0xa797,	// (0x00038358) wml_selection_box_pane_ParamLimits

0xa797,	// (0x00038358) wml_selection_box_pane

0xa7aa,	// (0x0003836b) wml_list_single_pane_t1

0xa7b9,	// (0x0003837a) wml_list_single_medium_pane_t1

0xa7c8,	// (0x00038389) wml_list_single_large_pane_t1

0xa7d7,	// (0x00038398) input_focus_pane_cp02_ParamLimits

0xa7d7,	// (0x00038398) input_focus_pane_cp02

0xa7ea,	// (0x000383ab) wml_selection_box_pane_g1

0xa7f3,	// (0x000383b4) wml_selection_box_pane_t1_ParamLimits

0xa7f3,	// (0x000383b4) wml_selection_box_pane_t1

0xa246,	// (0x00037e07) bg_wml_button_pane_ParamLimits

0xa246,	// (0x00037e07) bg_wml_button_pane

0xa80b,	// (0x000383cc) wml_button_pane_g1

0xa813,	// (0x000383d4) wml_button_pane_t1

0xa80b,	// (0x000383cc) wml_button_bg_pane_g1

0xa823,	// (0x000383e4) wml_button_bg_pane_g2

0xa82b,	// (0x000383ec) wml_button_bg_pane_g3

0xa833,	// (0x000383f4) wml_button_bg_pane_g4

0xa83b,	// (0x000383fc) wml_button_bg_pane_g5

0xa843,	// (0x00038404) wml_button_bg_pane_g6

0xa84b,	// (0x0003840c) wml_button_bg_pane_g7

0xa853,	// (0x00038414) wml_button_bg_pane_g8

0xa85b,	// (0x0003841c) wml_button_bg_pane_g9

0x0008,

0xf283,	// (0x0003ce44) wml_button_bg_pane_g

0x2c07,	// (0x000307c8) bg_list_pane_cp02

0xa863,	// (0x00038424) mce_header_pane_ParamLimits

0xa863,	// (0x00038424) mce_header_pane

0xa879,	// (0x0003843a) mce_icon_pane

0xa879,	// (0x0003843a) mce_image_pane

0xa882,	// (0x00038443) mce_text_pane_ParamLimits

0xa882,	// (0x00038443) mce_text_pane

0x2c0f,	// (0x000307d0) scroll_pane_cp03

0xa77b,	// (0x0003833c) scroll_pane_cp04

0xa895,	// (0x00038456) scroll_pane_cp05_ParamLimits

0xa895,	// (0x00038456) scroll_pane_cp05

0x2c19,	// (0x000307da) mce_header_field_pane_ParamLimits

0x2c19,	// (0x000307da) mce_header_field_pane

0x2c30,	// (0x000307f1) mce_header_field_pane_2_ParamLimits

0x2c30,	// (0x000307f1) mce_header_field_pane_2

0x2c46,	// (0x00030807) mce_header_field_pane_3

0x2c4e,	// (0x0003080f) list_single_mce_message_pane_ParamLimits

0x2c4e,	// (0x0003080f) list_single_mce_message_pane

0x2c65,	// (0x00030826) list_single_mce_smart_pane_ParamLimits

0x2c65,	// (0x00030826) list_single_mce_smart_pane

0xa8a1,	// (0x00038462) input_focus_pane_cp03

0xa8aa,	// (0x0003846b) list_header_data_pane

0x2c87,	// (0x00030848) mce_header_field_pane_t1

0x2c97,	// (0x00030858) list_single_mce_header_pane_ParamLimits

0x2c97,	// (0x00030858) list_single_mce_header_pane

0xa8b2,	// (0x00038473) list_single_mce_header_pane_t1

0xa8c1,	// (0x00038482) list_single_mce_message_pane_g1

0xa8c9,	// (0x0003848a) list_single_mce_message_pane_t1

0x2cd1,	// (0x00030892) bg_cale_heading_pane_cp01_ParamLimits

0x2cd1,	// (0x00030892) bg_cale_heading_pane_cp01

0xa8d7,	// (0x00038498) bg_cale_pane_cp02_ParamLimits

0xa8d7,	// (0x00038498) bg_cale_pane_cp02

0x2d0c,	// (0x000308cd) cale_month_corner_pane

0x2d2b,	// (0x000308ec) cale_month_day_heading_pane_ParamLimits

0x2d2b,	// (0x000308ec) cale_month_day_heading_pane

0x2d7e,	// (0x0003093f) cale_month_pane_g1_ParamLimits

0x2d7e,	// (0x0003093f) cale_month_pane_g1

0x2dae,	// (0x0003096f) cale_month_pane_g2_ParamLimits

0x2dae,	// (0x0003096f) cale_month_pane_g2

0x2dde,	// (0x0003099f) cale_month_pane_g3_ParamLimits

0x2dde,	// (0x0003099f) cale_month_pane_g3

0x2e1a,	// (0x000309db) cale_month_pane_g4_ParamLimits

0x2e1a,	// (0x000309db) cale_month_pane_g4

0x2e56,	// (0x00030a17) cale_month_pane_g5_ParamLimits

0x2e56,	// (0x00030a17) cale_month_pane_g5

0x2e9e,	// (0x00030a5f) cale_month_pane_g6_ParamLimits

0x2e9e,	// (0x00030a5f) cale_month_pane_g6

0x2eea,	// (0x00030aab) cale_month_pane_g7_ParamLimits

0x2eea,	// (0x00030aab) cale_month_pane_g7

0x2f3e,	// (0x00030aff) cale_month_pane_g8_ParamLimits

0x2f3e,	// (0x00030aff) cale_month_pane_g8

0x2f92,	// (0x00030b53) cale_month_pane_g9_ParamLimits

0x2f92,	// (0x00030b53) cale_month_pane_g9

0x2fe4,	// (0x00030ba5) cale_month_pane_g10_ParamLimits

0x2fe4,	// (0x00030ba5) cale_month_pane_g10

0x3036,	// (0x00030bf7) cale_month_pane_g11_ParamLimits

0x3036,	// (0x00030bf7) cale_month_pane_g11

0x3088,	// (0x00030c49) cale_month_pane_g12_ParamLimits

0x3088,	// (0x00030c49) cale_month_pane_g12

0x30da,	// (0x00030c9b) cale_month_pane_g13_ParamLimits

0x30da,	// (0x00030c9b) cale_month_pane_g13

0x000c,

0xf296,	// (0x0003ce57) cale_month_pane_g_ParamLimits

0xf296,	// (0x0003ce57) cale_month_pane_g

0x312c,	// (0x00030ced) cale_month_week_pane

0x3150,	// (0x00030d11) grid_cale_month_pane_ParamLimits

0x3150,	// (0x00030d11) grid_cale_month_pane

0x318e,	// (0x00030d4f) cale_month_day_heading_pane_t1

0x3214,	// (0x00030dd5) cale_month_day_heading_pane_t2

0x32a5,	// (0x00030e66) cale_month_day_heading_pane_t3

0x3336,	// (0x00030ef7) cale_month_day_heading_pane_t4

0x33cf,	// (0x00030f90) cale_month_day_heading_pane_t5

0x3470,	// (0x00031031) cale_month_day_heading_pane_t6

0x3511,	// (0x000310d2) cale_month_day_heading_pane_t7

0x0006,

0xf2b1,	// (0x0003ce72) cale_month_day_heading_pane_t

0xa4a7,	// (0x00038068) bg_cale_side_pane_cp01

0x35ba,	// (0x0003117b) cale_month_week_pane_t1

0x35d3,	// (0x00031194) cale_month_week_pane_t2

0x35ec,	// (0x000311ad) cale_month_week_pane_t3

0x3605,	// (0x000311c6) cale_month_week_pane_t4

0x361e,	// (0x000311df) cale_month_week_pane_t5

0x3637,	// (0x000311f8) cale_month_week_pane_t6

0x0005,

0xf2c0,	// (0x0003ce81) cale_month_week_pane_t

0x3650,	// (0x00031211) cell_cale_month_pane_ParamLimits

0x3650,	// (0x00031211) cell_cale_month_pane

0x37a8,	// (0x00031369) cell_cale_month_pane_g1

0x06a3,	// (0x0002e264) cell_cale_month_pane_t1_ParamLimits

0x06a3,	// (0x0002e264) cell_cale_month_pane_t1

0xa4b5,	// (0x00038076) grid_highlight_pane_cp08

0xa37f,	// (0x00037f40) main_smil_g1

0x37b4,	// (0x00031375) smil_status_pane

0xa916,	// (0x000384d7) smil_text_pane

0xc159,	// (0x00039d1a) bg_popup_call3_rect_pane_g8

0xc161,	// (0x00039d22) bg_popup_call3_rect_pane_g9

0x0008,

0xf579,	// (0x0003d13a) bg_popup_call3_rect_pane_g

0xc3a8,	// (0x00039f69) smil_status_volume_pane_g1

0xa920,	// (0x000384e1) smil_status_pane_t1

0x4dbc,	// (0x0003297d) volume_smil_pane

0xa937,	// (0x000384f8) list_smil_text_pane

0x37c9,	// (0x0003138a) scroll_pane_cp011

0x37d4,	// (0x00031395) smil_text_list_pane_t1_ParamLimits

0x37d4,	// (0x00031395) smil_text_list_pane_t1

0x3816,	// (0x000313d7) aid_volume_smil_ParamLimits

0x3816,	// (0x000313d7) aid_volume_smil

0xa37f,	// (0x00037f40) smil_volume_pane_g1

0xa37f,	// (0x00037f40) smil_volume_pane_g2

0x0001,

0xf2e0,	// (0x0003cea1) smil_volume_pane_g

0x1e31,	// (0x0002f9f2) listscroll_cale_day_pane

0xa941,	// (0x00038502) bg_cale_pane

0xa959,	// (0x0003851a) list_cale_pane

0xa97c,	// (0x0003853d) scroll_pane_cp09

0xa98d,	// (0x0003854e) cale_bg_pane_g1

0xa995,	// (0x00038556) cale_bg_pane_g2

0xa99d,	// (0x0003855e) cale_bg_pane_g3

0xa9a5,	// (0x00038566) cale_bg_pane_g4

0xa9ad,	// (0x0003856e) cale_bg_pane_g5

0xa9b5,	// (0x00038576) cale_bg_pane_g6

0xa9bd,	// (0x0003857e) cale_bg_pane_g7

0xa9c5,	// (0x00038586) cale_bg_pane_g8

0xa9cd,	// (0x0003858e) cale_bg_pane_g9

0x0008,

0xf2e5,	// (0x0003cea6) cale_bg_pane_g

0x3838,	// (0x000313f9) list_cale_time_pane_ParamLimits

0x3838,	// (0x000313f9) list_cale_time_pane

0x384c,	// (0x0003140d) list_cale_time_pane_g1_ParamLimits

0x384c,	// (0x0003140d) list_cale_time_pane_g1

0xa9d5,	// (0x00038596) list_cale_time_pane_g2_ParamLimits

0xa9d5,	// (0x00038596) list_cale_time_pane_g2

0x3858,	// (0x00031419) list_cale_time_pane_g3_ParamLimits

0x3858,	// (0x00031419) list_cale_time_pane_g3

0x3866,	// (0x00031427) list_cale_time_pane_g4_ParamLimits

0x3866,	// (0x00031427) list_cale_time_pane_g4

0x3874,	// (0x00031435) list_cale_time_pane_g5_ParamLimits

0x3874,	// (0x00031435) list_cale_time_pane_g5

0x0005,

0xf2f8,	// (0x0003ceb9) list_cale_time_pane_g_ParamLimits

0xf2f8,	// (0x0003ceb9) list_cale_time_pane_g

0x3882,	// (0x00031443) list_cale_time_pane_t1_ParamLimits

0x3882,	// (0x00031443) list_cale_time_pane_t1

0x38aa,	// (0x0003146b) list_cale_time_pane_t2_ParamLimits

0x38aa,	// (0x0003146b) list_cale_time_pane_t2

0x3ca3,	// (0x00031864) aid_blid_cardinal_pane

0x3ce1,	// (0x000318a2) compass_pane_t4

0x38d2,	// (0x00031493) list_cale_time_pane_t4_ParamLimits

0x38d2,	// (0x00031493) list_cale_time_pane_t4

0x3cef,	// (0x000318b0) compass_pane_t5

0x3cfd,	// (0x000318be) compass_pane_t6

0x3d0b,	// (0x000318cc) compass_pane_t7

0xae1a,	// (0x000389db) navi_pane_cc_t1

0xaf6f,	// (0x00038b30) aid_phob_thumbnail_center_pane

0x443f,	// (0x00032000) main_postcard_pane_g4_ParamLimits

0x0002,

0xf305,	// (0x0003cec6) list_cale_time_pane_t_ParamLimits

0xf305,	// (0x0003cec6) list_cale_time_pane_t

0x9c42,	// (0x00037803) bg_popup_window_pane_cp02_ParamLimits

0x9c42,	// (0x00037803) bg_popup_window_pane_cp02

0xa9ef,	// (0x000385b0) heading_pane_cp01_ParamLimits

0xa9ef,	// (0x000385b0) heading_pane_cp01

0xa9fb,	// (0x000385bc) loc_req_pane_ParamLimits

0xa9fb,	// (0x000385bc) loc_req_pane

0xaa0b,	// (0x000385cc) loc_type_pane_ParamLimits

0xaa0b,	// (0x000385cc) loc_type_pane

0xaa1d,	// (0x000385de) loc_type_pane_t1_ParamLimits

0xaa1d,	// (0x000385de) loc_type_pane_t1

0xaa2f,	// (0x000385f0) loc_type_pane_t2_ParamLimits

0xaa2f,	// (0x000385f0) loc_type_pane_t2

0xaa41,	// (0x00038602) loc_type_pane_t3_ParamLimits

0xaa41,	// (0x00038602) loc_type_pane_t3

0x0002,

0xf30c,	// (0x0003cecd) loc_type_pane_t_ParamLimits

0xf30c,	// (0x0003cecd) loc_type_pane_t

0xaa53,	// (0x00038614) list_loc_req_pane

0xaa5d,	// (0x0003861e) scroll_pane_cp012

0x38fa,	// (0x000314bb) list_single_loc_request_popup_menu_pane_ParamLimits

0x38fa,	// (0x000314bb) list_single_loc_request_popup_menu_pane

0xaa68,	// (0x00038629) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaa68,	// (0x00038629) list_single_loc_request_popup_menu_pane_g1

0xaa74,	// (0x00038635) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaa74,	// (0x00038635) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf313,	// (0x0003ced4) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf313,	// (0x0003ced4) list_single_loc_request_popup_menu_pane_g

0xaa80,	// (0x00038641) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaa80,	// (0x00038641) list_single_loc_request_popup_menu_pane_t1

0xa246,	// (0x00037e07) bg_popup_window_pane_cp03_ParamLimits

0xa246,	// (0x00037e07) bg_popup_window_pane_cp03

0xaa96,	// (0x00038657) heading_loc_req_pane_ParamLimits

0xaa96,	// (0x00038657) heading_loc_req_pane

0x3907,	// (0x000314c8) popup_dyc_status_message_window_g1_ParamLimits

0x3907,	// (0x000314c8) popup_dyc_status_message_window_g1

0x391b,	// (0x000314dc) popup_dyc_status_message_window_t1_ParamLimits

0x391b,	// (0x000314dc) popup_dyc_status_message_window_t1

0x3930,	// (0x000314f1) popup_dyc_status_message_window_t2_ParamLimits

0x3930,	// (0x000314f1) popup_dyc_status_message_window_t2

0x3945,	// (0x00031506) popup_dyc_status_message_window_t3_ParamLimits

0x3945,	// (0x00031506) popup_dyc_status_message_window_t3

0x0002,

0xf318,	// (0x0003ced9) popup_dyc_status_message_window_t_ParamLimits

0xf318,	// (0x0003ced9) popup_dyc_status_message_window_t

0x9feb,	// (0x00037bac) bg_heading_pane_cp01

0xaaa2,	// (0x00038663) heading_loc_req_pane_g1

0xaaaa,	// (0x0003866b) heading_loc_req_pane_g2

0xaab2,	// (0x00038673) heading_loc_req_pane_g3

0x0002,

0xf31f,	// (0x0003cee0) heading_loc_req_pane_g

0xaaba,	// (0x0003867b) heading_loc_req_pane_t1

0xaac9,	// (0x0003868a) bg_popup_sub_pane_cp01_ParamLimits

0xaac9,	// (0x0003868a) bg_popup_sub_pane_cp01

0xaad7,	// (0x00038698) popup_cale_events_window_g1_ParamLimits

0xaad7,	// (0x00038698) popup_cale_events_window_g1

0xaaf7,	// (0x000386b8) popup_cale_events_window_g2_ParamLimits

0xaaf7,	// (0x000386b8) popup_cale_events_window_g2

0x0001,

0xf353,	// (0x0003cf14) popup_cale_events_window_g_ParamLimits

0xf353,	// (0x0003cf14) popup_cale_events_window_g

0xab17,	// (0x000386d8) popup_cale_events_window_t1_ParamLimits

0xab17,	// (0x000386d8) popup_cale_events_window_t1

0xab29,	// (0x000386ea) popup_cale_events_window_t2_ParamLimits

0xab29,	// (0x000386ea) popup_cale_events_window_t2

0xab67,	// (0x00038728) popup_cale_events_window_t3_ParamLimits

0xab67,	// (0x00038728) popup_cale_events_window_t3

0xaba1,	// (0x00038762) popup_cale_events_window_t4_ParamLimits

0xaba1,	// (0x00038762) popup_cale_events_window_t4

0x0003,

0xf358,	// (0x0003cf19) popup_cale_events_window_t_ParamLimits

0xf358,	// (0x0003cf19) popup_cale_events_window_t

0x3a3e,	// (0x000315ff) call_type_pane

0x3a4e,	// (0x0003160f) popup_call_status_window_g1

0x3a62,	// (0x00031623) popup_call_status_window_g2

0x3a76,	// (0x00031637) popup_call_status_window_g3

0x0002,

0xf361,	// (0x0003cf22) popup_call_status_window_g

0xabd7,	// (0x00038798) call_type_pane_g1

0xabe0,	// (0x000387a1) call_type_pane_g2

0x0001,

0xf368,	// (0x0003cf29) call_type_pane_g

0x9feb,	// (0x00037bac) bg_popup_sub_pane_cp02

0xabe9,	// (0x000387aa) listscroll_popup_wml_pane

0xabf1,	// (0x000387b2) list_wml_pane

0xabfb,	// (0x000387bc) scroll_pane_cp013

0xac06,	// (0x000387c7) list_single_graphic_popup_wml_pane_ParamLimits

0xac06,	// (0x000387c7) list_single_graphic_popup_wml_pane

0xa37f,	// (0x00037f40) list_single_graphic_popup_wml_pane_g1

0xac1a,	// (0x000387db) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf36d,	// (0x0003cf2e) list_single_graphic_popup_wml_pane_g

0xac22,	// (0x000387e3) list_single_graphic_popup_wml_pane_t1

0xac38,	// (0x000387f9) aid_call_pane

0xa23e,	// (0x00037dff) popup_clock_analogue_window_g1

0xa23e,	// (0x00037dff) popup_clock_analogue_window_g2

0x3a85,	// (0x00031646) popup_clock_analogue_window_g3

0x3a85,	// (0x00031646) popup_clock_analogue_window_g4

0xa37f,	// (0x00037f40) popup_clock_analogue_window_g5

0x0004,

0xf372,	// (0x0003cf33) popup_clock_analogue_window_g

0x3a8d,	// (0x0003164e) popup_clock_analogue_window_t1

0x3a9b,	// (0x0003165c) clock_digital_number_pane_ParamLimits

0x3a9b,	// (0x0003165c) clock_digital_number_pane

0x3aa7,	// (0x00031668) clock_digital_number_pane_cp02_ParamLimits

0x3aa7,	// (0x00031668) clock_digital_number_pane_cp02

0x3ab3,	// (0x00031674) clock_digital_number_pane_cp03_ParamLimits

0x3ab3,	// (0x00031674) clock_digital_number_pane_cp03

0x3abf,	// (0x00031680) clock_digital_number_pane_cp04_ParamLimits

0x3abf,	// (0x00031680) clock_digital_number_pane_cp04

0x3acf,	// (0x00031690) clock_digital_separator_pane_ParamLimits

0x3acf,	// (0x00031690) clock_digital_separator_pane

0x3adb,	// (0x0003169c) popup_clock_digital_window_t1

0xa37f,	// (0x00037f40) clock_digital_number_pane_g1

0xa37f,	// (0x00037f40) clock_digital_number_pane_g2

0x0001,

0xf2e0,	// (0x0003cea1) clock_digital_number_pane_g

0xa37f,	// (0x00037f40) clock_digital_separator_pane_g1

0xa37f,	// (0x00037f40) clock_digital_separator_pane_g2

0x0001,

0xf2e0,	// (0x0003cea1) clock_digital_separator_pane_g

0x9feb,	// (0x00037bac) bg_popup_window_pane_cp04

0xac40,	// (0x00038801) heading_pane_cp03

0xac48,	// (0x00038809) listscroll_popup_gms_pane

0xac50,	// (0x00038811) grid_large_graphic_popup_pane

0xac5a,	// (0x0003881b) listscroll_popup_gms_pane_g1

0xac62,	// (0x00038823) listscroll_popup_gms_pane_g2

0x0001,

0xf37d,	// (0x0003cf3e) listscroll_popup_gms_pane_g

0xa77b,	// (0x0003833c) scroll_pane_cp014

0xac6a,	// (0x0003882b) cell_large_graphic_popup_pane_ParamLimits

0xac6a,	// (0x0003882b) cell_large_graphic_popup_pane

0xac82,	// (0x00038843) cell_large_graphic_popup_pane_g1_ParamLimits

0xac82,	// (0x00038843) cell_large_graphic_popup_pane_g1

0xac8e,	// (0x0003884f) cell_large_graphic_popup_pane_g2_ParamLimits

0xac8e,	// (0x0003884f) cell_large_graphic_popup_pane_g2

0xac9a,	// (0x0003885b) cell_large_graphic_popup_pane_g3_ParamLimits

0xac9a,	// (0x0003885b) cell_large_graphic_popup_pane_g3

0xaca7,	// (0x00038868) cell_large_graphic_popup_pane_g4_ParamLimits

0xaca7,	// (0x00038868) cell_large_graphic_popup_pane_g4

0x0003,

0xf382,	// (0x0003cf43) cell_large_graphic_popup_pane_g_ParamLimits

0xf382,	// (0x0003cf43) cell_large_graphic_popup_pane_g

0xacb7,	// (0x00038878) grid_highlight_pane_cp010

0xa37f,	// (0x00037f40) bg_popup_call_pane_g1

0xacc1,	// (0x00038882) list_single_graphic_popup_conf_pane_ParamLimits

0xacc1,	// (0x00038882) list_single_graphic_popup_conf_pane

0xacd4,	// (0x00038895) list_highlight_pane_cp01

0xacdd,	// (0x0003889e) list_single_graphic_popup_conf_pane_g1

0xace5,	// (0x000388a6) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf38b,	// (0x0003cf4c) list_single_graphic_popup_conf_pane_g

0xaced,	// (0x000388ae) list_single_graphic_popup_conf_pane_t1

0xacfb,	// (0x000388bc) linegrid_cams_pane_g1

0x3af8,	// (0x000316b9) linegrid_cams_pane_g2

0xa437,	// (0x00037ff8) linegrid_cams_pane_g3

0xad04,	// (0x000388c5) linegrid_cams_pane_g4

0x3b01,	// (0x000316c2) linegrid_cams_pane_g5

0x3b0a,	// (0x000316cb) linegrid_cams_pane_g6

0xa4e8,	// (0x000380a9) linegrid_cams_pane_g7

0x0006,

0xf390,	// (0x0003cf51) linegrid_cams_pane_g

0xad0d,	// (0x000388ce) popup_clock_analogue_window

0xad0d,	// (0x000388ce) popup_clock_digital_window

0x9feb,	// (0x00037bac) popup_phob_thumbnail_window

0xa37f,	// (0x00037f40) call_video_uplink_pane_g1

0xad16,	// (0x000388d7) call_video_uplink_pane_g2

0x0001,

0xf39f,	// (0x0003cf60) call_video_uplink_pane_g

0xa4b5,	// (0x00038076) video_uplink_pane

0xad1e,	// (0x000388df) mce_image_pane_g1

0x3b15,	// (0x000316d6) mce_image_pane_g2

0x3b1d,	// (0x000316de) mce_image_pane_g3

0x3b25,	// (0x000316e6) mce_image_pane_g4

0x3b2f,	// (0x000316f0) mce_image_pane_g5

0x0004,

0xf3a4,	// (0x0003cf65) mce_image_pane_g

0xad28,	// (0x000388e9) control_top_pane_stacon_cp01_ParamLimits

0xad28,	// (0x000388e9) control_top_pane_stacon_cp01

0xad3c,	// (0x000388fd) uni_indicator_pane_stacon_cp01_ParamLimits

0xad3c,	// (0x000388fd) uni_indicator_pane_stacon_cp01

0xad4d,	// (0x0003890e) bg_popup_sub_pane_cp03

0x3b37,	// (0x000316f8) chi_dic_find_pane

0x3b3f,	// (0x00031700) listscroll_chi_dic_pane

0x3b48,	// (0x00031709) main_pane_chidic_g1

0xad57,	// (0x00038918) chi_dic_find_pane_t1

0xad65,	// (0x00038926) find_chidic_pane

0xad6e,	// (0x0003892f) chi_dic_list_pane_ParamLimits

0xad6e,	// (0x0003892f) chi_dic_list_pane

0xad7f,	// (0x00038940) scroll_pane_cp020

0xad87,	// (0x00038948) find_chidic_pane_t1

0x9feb,	// (0x00037bac) input_focus_pane_cp06

0x3b5b,	// (0x0003171c) list_chi_dic_pane_ParamLimits

0x3b5b,	// (0x0003171c) list_chi_dic_pane

0x3b6e,	// (0x0003172f) list_chi_dic_pane_t1_ParamLimits

0x3b6e,	// (0x0003172f) list_chi_dic_pane_t1

0x9feb,	// (0x00037bac) list_highlight_pane_cp020

0xad96,	// (0x00038957) bg_cale_heading_pane_g1

0x3b81,	// (0x00031742) bg_cale_heading_pane_g2

0x3b89,	// (0x0003174a) bg_cale_heading_pane_g3

0x3b91,	// (0x00031752) bg_cale_heading_pane_g4

0x3b9b,	// (0x0003175c) bg_cale_heading_pane_g5

0x3ba5,	// (0x00031766) bg_cale_heading_pane_g6

0x3bad,	// (0x0003176e) bg_cale_heading_pane_g7

0x3bb5,	// (0x00031776) bg_cale_heading_pane_g8

0x3bbf,	// (0x00031780) bg_cale_heading_pane_g9

0x0008,

0xf3af,	// (0x0003cf70) bg_cale_heading_pane_g

0xad96,	// (0x00038957) bg_cale_side_pane_g1

0x3bc9,	// (0x0003178a) bg_cale_side_pane_g2

0x3bd1,	// (0x00031792) bg_cale_side_pane_g3

0x3bd9,	// (0x0003179a) bg_cale_side_pane_g4

0x3be1,	// (0x000317a2) bg_cale_side_pane_g5

0x3be9,	// (0x000317aa) bg_cale_side_pane_g6

0x3bf1,	// (0x000317b2) bg_cale_side_pane_g7

0x3bf9,	// (0x000317ba) bg_cale_side_pane_g8

0x3c01,	// (0x000317c2) bg_cale_side_pane_g9

0x0008,

0xf3c2,	// (0x0003cf83) bg_cale_side_pane_g

0x3c09,	// (0x000317ca) popup_call_status_window_ParamLimits

0x3c09,	// (0x000317ca) popup_call_status_window

0xad9e,	// (0x0003895f) stacon_top_pane

0xada6,	// (0x00038967) status_pane_ParamLimits

0xada6,	// (0x00038967) status_pane

0xadbb,	// (0x0003897c) status_small_pane

0xadc3,	// (0x00038984) control_pane

0x9feb,	// (0x00037bac) stacon_bottom_pane

0xadcb,	// (0x0003898c) list_single_mce_smart_pane_t1_ParamLimits

0xadcb,	// (0x0003898c) list_single_mce_smart_pane_t1

0xadde,	// (0x0003899f) list_single_mce_smart_pane_t2_ParamLimits

0xadde,	// (0x0003899f) list_single_mce_smart_pane_t2

0x0001,

0xf3d5,	// (0x0003cf96) list_single_mce_smart_pane_t_ParamLimits

0xf3d5,	// (0x0003cf96) list_single_mce_smart_pane_t

0x3c50,	// (0x00031811) compass_pane

0x3c59,	// (0x0003181a) main_location2_pane_t1

0x3c6b,	// (0x0003182c) main_location2_pane_t2

0x3c7d,	// (0x0003183e) main_location2_pane_t3

0x0003,

0xf3da,	// (0x0003cf9b) main_location2_pane_t

0xadfd,	// (0x000389be) compass_pane_g1_ParamLimits

0xadfd,	// (0x000389be) compass_pane_g1

0x3cc3,	// (0x00031884) compass_pane_t1

0x3cd2,	// (0x00031893) compass_pane_t2

0x0005,

0xf3e3,	// (0x0003cfa4) compass_pane_t

0x3d19,	// (0x000318da) text_secondary_cp61

0xae11,	// (0x000389d2) navi_pane_cams_g5

0xae34,	// (0x000389f5) navi_pane_im_t1

0xae42,	// (0x00038a03) navi_pane_mp_g1_ParamLimits

0xae42,	// (0x00038a03) navi_pane_mp_g1

0xae56,	// (0x00038a17) navi_pane_mp_g2_ParamLimits

0xae56,	// (0x00038a17) navi_pane_mp_g2

0xae62,	// (0x00038a23) navi_pane_mp_g3_ParamLimits

0xae62,	// (0x00038a23) navi_pane_mp_g3

0x0002,

0xf3f7,	// (0x0003cfb8) navi_pane_mp_g_ParamLimits

0xf3f7,	// (0x0003cfb8) navi_pane_mp_g

0xae6e,	// (0x00038a2f) navi_pane_mp_t1

0xae7c,	// (0x00038a3d) navi_pane_mp_t2

0x0002,

0xf3fe,	// (0x0003cfbf) navi_pane_mp_t

0xaeb8,	// (0x00038a79) navi_pane_vt_g1

0xae6e,	// (0x00038a2f) navi_pane_vt_t1

0xaec0,	// (0x00038a81) navi_slider_pane

0xaec8,	// (0x00038a89) zooming_pane

0xaed0,	// (0x00038a91) navi_slider_pane_g1

0x3e60,	// (0x00031a21) navi_slider_pane_g2

0x0006,

0xf405,	// (0x0003cfc6) navi_slider_pane_g

0xaef4,	// (0x00038ab5) aid_levels_zoom

0xaefc,	// (0x00038abd) zooming_pane_g1

0xaf04,	// (0x00038ac5) zooming_pane_g2

0xaf04,	// (0x00038ac5) zooming_pane_g3

0x0002,

0xf414,	// (0x0003cfd5) zooming_pane_g

0xaf0c,	// (0x00038acd) level_10_zoom

0xaf15,	// (0x00038ad6) level_11_zoom

0xaf1e,	// (0x00038adf) level_1_zoom

0xaf27,	// (0x00038ae8) level_2_zoom

0xaf30,	// (0x00038af1) level_3_zoom

0xaf39,	// (0x00038afa) level_4_zoom

0xaf42,	// (0x00038b03) level_5_zoom

0xaf4b,	// (0x00038b0c) level_6_zoom

0xaf54,	// (0x00038b15) level_7_zoom

0xaf5d,	// (0x00038b1e) level_8_zoom

0xaf66,	// (0x00038b27) level_9_zoom

0xaf77,	// (0x00038b38) popup_phob_thumbnail_window_g1

0xaf7f,	// (0x00038b40) popup_phob_thumbnail_window_g2

0x0001,

0xf41b,	// (0x0003cfdc) popup_phob_thumbnail_window_g

0xc2bb,	// (0x00039e7c) level_1_location

0xc2c3,	// (0x00039e84) level_2_location

0xc2cb,	// (0x00039e8c) level_3_location

0xc2d3,	// (0x00039e94) level_4_location

0xaec8,	// (0x00038a89) level_5_location

0x3e72,	// (0x00031a33) mce_icon_pane_g1

0x3e7c,	// (0x00031a3d) mce_icon_pane_g2

0x0001,

0xf420,	// (0x0003cfe1) mce_icon_pane_g

0x3e86,	// (0x00031a47) main_mup_pane_g1_ParamLimits

0x3e86,	// (0x00031a47) main_mup_pane_g1

0x3e9c,	// (0x00031a5d) main_mup_pane_g2_ParamLimits

0x3e9c,	// (0x00031a5d) main_mup_pane_g2

0x3eb4,	// (0x00031a75) main_mup_pane_g3_ParamLimits

0x3eb4,	// (0x00031a75) main_mup_pane_g3

0x3ecc,	// (0x00031a8d) main_mup_pane_g4_ParamLimits

0x3ecc,	// (0x00031a8d) main_mup_pane_g4

0x3ee4,	// (0x00031aa5) main_mup_pane_g5_ParamLimits

0x3ee4,	// (0x00031aa5) main_mup_pane_g5

0x3f00,	// (0x00031ac1) main_mup_pane_g6_ParamLimits

0x3f00,	// (0x00031ac1) main_mup_pane_g6

0x3f18,	// (0x00031ad9) main_mup_pane_g7_ParamLimits

0x3f18,	// (0x00031ad9) main_mup_pane_g7

0x3f30,	// (0x00031af1) main_mup_pane_g8_ParamLimits

0x3f30,	// (0x00031af1) main_mup_pane_g8

0x3f48,	// (0x00031b09) main_mup_pane_g9_ParamLimits

0x3f48,	// (0x00031b09) main_mup_pane_g9

0x3f62,	// (0x00031b23) main_mup_pane_g10_ParamLimits

0x3f62,	// (0x00031b23) main_mup_pane_g10

0x3f7c,	// (0x00031b3d) main_mup_pane_g11_ParamLimits

0x3f7c,	// (0x00031b3d) main_mup_pane_g11

0x3f90,	// (0x00031b51) main_mup_pane_g12_ParamLimits

0x3f90,	// (0x00031b51) main_mup_pane_g12

0x3fa6,	// (0x00031b67) main_mup_pane_g13_ParamLimits

0x3fa6,	// (0x00031b67) main_mup_pane_g13

0x000c,

0xf425,	// (0x0003cfe6) main_mup_pane_g_ParamLimits

0xf425,	// (0x0003cfe6) main_mup_pane_g

0x3fba,	// (0x00031b7b) main_mup_pane_t1_ParamLimits

0x3fba,	// (0x00031b7b) main_mup_pane_t1

0x3fd4,	// (0x00031b95) main_mup_pane_t2_ParamLimits

0x3fd4,	// (0x00031b95) main_mup_pane_t2

0x3fec,	// (0x00031bad) main_mup_pane_t3_ParamLimits

0x3fec,	// (0x00031bad) main_mup_pane_t3

0x4004,	// (0x00031bc5) main_mup_pane_t4_ParamLimits

0x4004,	// (0x00031bc5) main_mup_pane_t4

0x4022,	// (0x00031be3) main_mup_pane_t5_ParamLimits

0x4022,	// (0x00031be3) main_mup_pane_t5

0x4037,	// (0x00031bf8) main_mup_pane_t6_ParamLimits

0x4037,	// (0x00031bf8) main_mup_pane_t6

0x0005,

0xf440,	// (0x0003d001) main_mup_pane_t_ParamLimits

0xf440,	// (0x0003d001) main_mup_pane_t

0x4049,	// (0x00031c0a) mup_progress_pane_ParamLimits

0x4049,	// (0x00031c0a) mup_progress_pane

0x4055,	// (0x00031c16) mup_visualizer_pane_ParamLimits

0x4055,	// (0x00031c16) mup_visualizer_pane

0x4089,	// (0x00031c4a) mup_volume_pane_ParamLimits

0x4089,	// (0x00031c4a) mup_volume_pane

0xaf87,	// (0x00038b48) mup_visualizer_pane_g1_ParamLimits

0xaf87,	// (0x00038b48) mup_visualizer_pane_g1

0xaf87,	// (0x00038b48) mup_visualizer_pane_g2_ParamLimits

0xaf87,	// (0x00038b48) mup_visualizer_pane_g2

0xadfd,	// (0x000389be) mup_visualizer_pane_g3_ParamLimits

0xadfd,	// (0x000389be) mup_visualizer_pane_g3

0x0002,

0xf44d,	// (0x0003d00e) mup_visualizer_pane_g_ParamLimits

0xf44d,	// (0x0003d00e) mup_visualizer_pane_g

0xa37f,	// (0x00037f40) mup_volume_pane_g1

0xaf9d,	// (0x00038b5e) mup_volume_pane_g2

0x0001,

0xf454,	// (0x0003d015) mup_volume_pane_g

0xa37f,	// (0x00037f40) mup_progress_pane_g1

0xafa6,	// (0x00038b67) mup_progress_pane_g2

0xafaf,	// (0x00038b70) mup_progress_pane_g3

0x0002,

0xf459,	// (0x0003d01a) mup_progress_pane_g

0x9feb,	// (0x00037bac) bg_popup_window_pane_cp05

0xafb8,	// (0x00038b79) heading_pane_cp02_ParamLimits

0xafb8,	// (0x00038b79) heading_pane_cp02

0xafd2,	// (0x00038b93) list_popup_blid_pane

0xafda,	// (0x00038b9b) list_blid_sat_info_pane_ParamLimits

0xafda,	// (0x00038b9b) list_blid_sat_info_pane

0xafed,	// (0x00038bae) list_blid_sat_info_pane_g1

0xaff5,	// (0x00038bb6) list_blid_sat_info_pane_t1

0x419f,	// (0x00031d60) mup_equalizer_pane_ParamLimits

0x419f,	// (0x00031d60) mup_equalizer_pane

0x41b8,	// (0x00031d79) mup_equalizer_pane_cp1_ParamLimits

0x41b8,	// (0x00031d79) mup_equalizer_pane_cp1

0x41d5,	// (0x00031d96) mup_equalizer_pane_cp2_ParamLimits

0x41d5,	// (0x00031d96) mup_equalizer_pane_cp2

0x41f2,	// (0x00031db3) mup_equalizer_pane_cp3_ParamLimits

0x41f2,	// (0x00031db3) mup_equalizer_pane_cp3

0x4213,	// (0x00031dd4) mup_equalizer_pane_cp4_ParamLimits

0x4213,	// (0x00031dd4) mup_equalizer_pane_cp4

0x4234,	// (0x00031df5) mup_equalizer_pane_cp5

0x4248,	// (0x00031e09) mup_equalizer_pane_cp6

0x425c,	// (0x00031e1d) mup_equalizer_pane_cp7

0xc1d9,	// (0x00039d9a) bg_popup_call_poc_act_pane_g9

0xc1e1,	// (0x00039da2) bg_popup_call_poc_act_pane_g10

0xc1e9,	// (0x00039daa) bg_popup_call_poc_act_pane_g11

0x000a,

0xa246,	// (0x00037e07) mup_scale_pane

0xa37f,	// (0x00037f40) mup_scale_pane_g1

0xb003,	// (0x00038bc4) mup_scale_pane_g2

0x0006,

0xf475,	// (0x0003d036) mup_scale_pane_g

0xb027,	// (0x00038be8) msg_data_pane

0xb02f,	// (0x00038bf0) scroll_pane_cp017

0x4282,	// (0x00031e43) bg_list_pane_cp04_ParamLimits

0x4282,	// (0x00031e43) bg_list_pane_cp04

0xb037,	// (0x00038bf8) msg_data_pane_g1

0x42a6,	// (0x00031e67) msg_data_pane_g2

0x42ae,	// (0x00031e6f) msg_data_pane_g3

0x42b6,	// (0x00031e77) msg_data_pane_g4

0x42be,	// (0x00031e7f) msg_data_pane_g5

0x42c6,	// (0x00031e87) msg_data_pane_g6

0x42ce,	// (0x00031e8f) msg_data_pane_g7

0x0006,

0xf484,	// (0x0003d045) msg_data_pane_g

0x42d6,	// (0x00031e97) msg_text_pane_ParamLimits

0x42d6,	// (0x00031e97) msg_text_pane

0x42fd,	// (0x00031ebe) qrid_highlight_pane_cp011_ParamLimits

0x42fd,	// (0x00031ebe) qrid_highlight_pane_cp011

0x9feb,	// (0x00037bac) msg_body_pane

0x9feb,	// (0x00037bac) msg_header_pane

0xb03f,	// (0x00038c00) input_focus_pane_cp07

0xb054,	// (0x00038c15) msg_header_pane_t1_ParamLimits

0xb054,	// (0x00038c15) msg_header_pane_t1

0xb066,	// (0x00038c27) msg_header_pane_t2_ParamLimits

0xb066,	// (0x00038c27) msg_header_pane_t2

0x0001,

0xf498,	// (0x0003d059) msg_header_pane_t_ParamLimits

0xf498,	// (0x0003d059) msg_header_pane_t

0xb078,	// (0x00038c39) msg_body_pane_g1

0x432c,	// (0x00031eed) msg_body_pane_t1_ParamLimits

0x432c,	// (0x00031eed) msg_body_pane_t1

0xb080,	// (0x00038c41) msg_body_pane_t2_ParamLimits

0xb080,	// (0x00038c41) msg_body_pane_t2

0xb092,	// (0x00038c53) msg_body_pane_t3_ParamLimits

0xb092,	// (0x00038c53) msg_body_pane_t3

0x0002,

0xf49d,	// (0x0003d05e) msg_body_pane_t_ParamLimits

0xf49d,	// (0x0003d05e) msg_body_pane_t

0x06df,	// (0x0002e2a0) main_viewer_pane_g1_ParamLimits

0x06df,	// (0x0002e2a0) main_viewer_pane_g1

0x06ed,	// (0x0002e2ae) main_viewer_pane_g2_ParamLimits

0x06ed,	// (0x0002e2ae) main_viewer_pane_g2

0x4393,	// (0x00031f54) main_viewer_pane_g3_ParamLimits

0x4393,	// (0x00031f54) main_viewer_pane_g3

0x43a2,	// (0x00031f63) main_viewer_pane_g4_ParamLimits

0x43a2,	// (0x00031f63) main_viewer_pane_g4

0x43b1,	// (0x00031f72) main_viewer_pane_g5_ParamLimits

0x43b1,	// (0x00031f72) main_viewer_pane_g5

0x43b1,	// (0x00031f72) main_viewer_pane_g7_ParamLimits

0x43b1,	// (0x00031f72) main_viewer_pane_g7

0xaa68,	// (0x00038629) main_viewer_pane_g8_ParamLimits

0xaa68,	// (0x00038629) main_viewer_pane_g8

0x0007,

0xf4ad,	// (0x0003d06e) main_viewer_pane_g_ParamLimits

0xf4ad,	// (0x0003d06e) main_viewer_pane_g

0xb0a4,	// (0x00038c65) viewer_content_pane_ParamLimits

0xb0a4,	// (0x00038c65) viewer_content_pane

0x43fc,	// (0x00031fbd) main_postcard_pane_g1_ParamLimits

0x43fc,	// (0x00031fbd) main_postcard_pane_g1

0x4412,	// (0x00031fd3) main_postcard_pane_g2_ParamLimits

0x4412,	// (0x00031fd3) main_postcard_pane_g2

0x4428,	// (0x00031fe9) main_postcard_pane_g3_ParamLimits

0x4428,	// (0x00031fe9) main_postcard_pane_g3

0x0005,

0xf4be,	// (0x0003d07f) main_postcard_pane_g_ParamLimits

0xf4be,	// (0x0003d07f) main_postcard_pane_g

0x443f,	// (0x00032000) main_postcard_pane_g4

0xc3bb,	// (0x00039f7c) smil_status_volume_pane_g2

0x4482,	// (0x00032043) postcard_pane_ParamLimits

0x4482,	// (0x00032043) postcard_pane

0xb0b2,	// (0x00038c73) postcard_pane_g1_ParamLimits

0xb0b2,	// (0x00038c73) postcard_pane_g1

0x44c4,	// (0x00032085) postcard_pane_g2_ParamLimits

0x44c4,	// (0x00032085) postcard_pane_g2

0x44d0,	// (0x00032091) postcard_pane_g3_ParamLimits

0x44d0,	// (0x00032091) postcard_pane_g3

0xb0c0,	// (0x00038c81) postcard_pane_g4_ParamLimits

0xb0c0,	// (0x00038c81) postcard_pane_g4

0x44dc,	// (0x0003209d) postcard_pane_g5_ParamLimits

0x44dc,	// (0x0003209d) postcard_pane_g5

0x44f1,	// (0x000320b2) postcard_pane_g6_ParamLimits

0x44f1,	// (0x000320b2) postcard_pane_g6

0xb0b2,	// (0x00038c73) postcard_pane_g7_ParamLimits

0xb0b2,	// (0x00038c73) postcard_pane_g7

0x0006,

0xf4cb,	// (0x0003d08c) postcard_pane_g_ParamLimits

0xf4cb,	// (0x0003d08c) postcard_pane_g

0x4505,	// (0x000320c6) main_mp2_pane_g1_ParamLimits

0x4505,	// (0x000320c6) main_mp2_pane_g1

0x4511,	// (0x000320d2) main_mp2_pane_g2_ParamLimits

0x4511,	// (0x000320d2) main_mp2_pane_g2

0x451d,	// (0x000320de) main_mp2_pane_g3_ParamLimits

0x451d,	// (0x000320de) main_mp2_pane_g3

0x0002,

0xf4da,	// (0x0003d09b) main_mp2_pane_g_ParamLimits

0xf4da,	// (0x0003d09b) main_mp2_pane_g

0x4529,	// (0x000320ea) main_mp2_pane_t1_ParamLimits

0x4529,	// (0x000320ea) main_mp2_pane_t1

0x453e,	// (0x000320ff) main_mp2_pane_t2_ParamLimits

0x453e,	// (0x000320ff) main_mp2_pane_t2

0x4550,	// (0x00032111) main_mp2_pane_t3_ParamLimits

0x4550,	// (0x00032111) main_mp2_pane_t3

0x0002,

0xf4e1,	// (0x0003d0a2) main_mp2_pane_t_ParamLimits

0xf4e1,	// (0x0003d0a2) main_mp2_pane_t

0xb0ce,	// (0x00038c8f) pec_content_pane_ParamLimits

0xb0ce,	// (0x00038c8f) pec_content_pane

0xa77b,	// (0x0003833c) scroll_pane_cp015

0xb0e0,	// (0x00038ca1) pec_attribute_pane_ParamLimits

0xb0e0,	// (0x00038ca1) pec_attribute_pane

0x4562,	// (0x00032123) pec_content_pane_g1_ParamLimits

0x4562,	// (0x00032123) pec_content_pane_g1

0xb0f0,	// (0x00038cb1) pec_content_pane_t1_ParamLimits

0xb0f0,	// (0x00038cb1) pec_content_pane_t1

0xb102,	// (0x00038cc3) pec_content_pane_t2_ParamLimits

0xb102,	// (0x00038cc3) pec_content_pane_t2

0x0001,

0xf4e8,	// (0x0003d0a9) pec_content_pane_t_ParamLimits

0xf4e8,	// (0x0003d0a9) pec_content_pane_t

0x456e,	// (0x0003212f) list_single_graphic_pane_cp01_ParamLimits

0x456e,	// (0x0003212f) list_single_graphic_pane_cp01

0xa246,	// (0x00037e07) bg_popup_sub_pane_cp04

0xb114,	// (0x00038cd5) popup_mup_playback_window_g1

0xb120,	// (0x00038ce1) popup_mup_playback_window_t1

0xb135,	// (0x00038cf6) popup_mup_playback_window_t2

0x0001,

0xf4ed,	// (0x0003d0ae) popup_mup_playback_window_t

0xb16c,	// (0x00038d2d) main_image_pane_g1_ParamLimits

0xb16c,	// (0x00038d2d) main_image_pane_g1

0xb1af,	// (0x00038d70) scroll_pane_cp018_ParamLimits

0xb1af,	// (0x00038d70) scroll_pane_cp018

0xb1c7,	// (0x00038d88) scroll_pane_cp016_ParamLimits

0xb1c7,	// (0x00038d88) scroll_pane_cp016

0x463d,	// (0x000321fe) smil2_image_pane_ParamLimits

0x463d,	// (0x000321fe) smil2_image_pane

0x4671,	// (0x00032232) smil2_root_pane_ParamLimits

0x4671,	// (0x00032232) smil2_root_pane

0x46a9,	// (0x0003226a) smil2_text_pane_ParamLimits

0x46a9,	// (0x0003226a) smil2_text_pane

0x9feb,	// (0x00037bac) bg_list_pane_cp06

0xb203,	// (0x00038dc4) grid_radio_pane

0x9feb,	// (0x00037bac) bg_popup_window_pane_cp06

0xb20b,	// (0x00038dcc) main_fmradio_pane_t1

0xac40,	// (0x00038801) heading_pane_cp04

0xb219,	// (0x00038dda) main_fmradio_pane_t2

0xc1f1,	// (0x00039db2) popup_cale_lunar_info_window_g1

0xb227,	// (0x00038de8) main_fmradio_pane_t3

0xc1f9,	// (0x00039dba) popup_cale_lunar_info_window_g2

0xb235,	// (0x00038df6) main_fmradio_pane_t4

0x0001,

0xb243,	// (0x00038e04) main_fmradio_pane_t5

0x0004,

0xf5c8,	// (0x0003d189) popup_cale_lunar_info_window_g

0xf502,	// (0x0003d0c3) main_fmradio_pane_t

0xb251,	// (0x00038e12) wait_bar_pane_cp03

0xb259,	// (0x00038e1a) cell_fmradio_pane_ParamLimits

0xb259,	// (0x00038e1a) cell_fmradio_pane

0xb0b2,	// (0x00038c73) cell_fmradio_pane_g1_ParamLimits

0xb0b2,	// (0x00038c73) cell_fmradio_pane_g1

0x9feb,	// (0x00037bac) grid_highlight_pane_cp011

0xb26c,	// (0x00038e2d) poc_content_pane_ParamLimits

0xb26c,	// (0x00038e2d) poc_content_pane

0xb27e,	// (0x00038e3f) scroll_pane_cp019

0x4729,	// (0x000322ea) popup_call_poc_act_window_ParamLimits

0x4729,	// (0x000322ea) popup_call_poc_act_window

0x474d,	// (0x0003230e) popup_call_poc_inact_window_ParamLimits

0x474d,	// (0x0003230e) popup_call_poc_inact_window

0xf59f,	// (0x0003d160) bg_popup_call_poc_act_pane_g

0xc169,	// (0x00039d2a) bg_popup_call_poc_inact_pane_g1

0xc171,	// (0x00039d32) bg_popup_call_poc_inact_pane_g2

0xb286,	// (0x00038e47) popup_call_poc_act_window_g2

0xc179,	// (0x00039d3a) bg_popup_call_poc_inact_pane_g3

0xc181,	// (0x00039d42) bg_popup_call_poc_inact_pane_g4

0xc189,	// (0x00039d4a) bg_popup_call_poc_inact_pane_g5

0xb28e,	// (0x00038e4f) popup_call_poc_act_window_t1_ParamLimits

0xb28e,	// (0x00038e4f) popup_call_poc_act_window_t1

0xb2b6,	// (0x00038e77) popup_call_poc_act_window_t2_ParamLimits

0xb2b6,	// (0x00038e77) popup_call_poc_act_window_t2

0xb2de,	// (0x00038e9f) popup_call_poc_act_window_t3_ParamLimits

0xb2de,	// (0x00038e9f) popup_call_poc_act_window_t3

0xb306,	// (0x00038ec7) popup_call_poc_act_window_t4_ParamLimits

0xb306,	// (0x00038ec7) popup_call_poc_act_window_t4

0x0003,

0xf50d,	// (0x0003d0ce) popup_call_poc_act_window_t_ParamLimits

0xf50d,	// (0x0003d0ce) popup_call_poc_act_window_t

0xc191,	// (0x00039d52) bg_popup_call_poc_inact_pane_g6

0xc199,	// (0x00039d5a) bg_popup_call_poc_inact_pane_g7

0xc1a1,	// (0x00039d62) bg_popup_call_poc_inact_pane_g8

0xb318,	// (0x00038ed9) popup_call_poc_inact_window_g2

0xc1a9,	// (0x00039d6a) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf58c,	// (0x0003d14d) bg_popup_call_poc_inact_pane_g

0xb320,	// (0x00038ee1) popup_call_poc_inact_window_t1_ParamLimits

0xb320,	// (0x00038ee1) popup_call_poc_inact_window_t1

0xb335,	// (0x00038ef6) popup_call_poc_inact_window_t2_ParamLimits

0xb335,	// (0x00038ef6) popup_call_poc_inact_window_t2

0xb34a,	// (0x00038f0b) popup_call_poc_inact_window_t3_ParamLimits

0xb34a,	// (0x00038f0b) popup_call_poc_inact_window_t3

0x0002,

0xf516,	// (0x0003d0d7) popup_call_poc_inact_window_t_ParamLimits

0xf516,	// (0x0003d0d7) popup_call_poc_inact_window_t

0xc32e,	// (0x00039eef) context_pane_ParamLimits

0x4d1e,	// (0x000328df) signal_pane_ParamLimits

0xaec8,	// (0x00038a89) main_call2_pane

0x4cb7,	// (0x00032878) popup_phob_thumbnail2_window_ParamLimits

0x4cb7,	// (0x00032878) popup_phob_thumbnail2_window

0x435d,	// (0x00031f1e) aid_hotspot_pointer_arrow_pane

0x4365,	// (0x00031f26) aid_hotspot_pointer_hand_pane

0x4a98,	// (0x00032659) phob_pre_status_pane_g5

0x23b2,	// (0x0002ff73) cams_zoom_pane_ParamLimits

0x23c1,	// (0x0002ff82) image_vga_pane_ParamLimits

0x23db,	// (0x0002ff9c) main_camera_pane_g1_ParamLimits

0x23ed,	// (0x0002ffae) main_camera_pane_g2_ParamLimits

0x23fd,	// (0x0002ffbe) main_camera_pane_g3_ParamLimits

0x240f,	// (0x0002ffd0) main_camera_pane_g4_ParamLimits

0x2421,	// (0x0002ffe2) main_camera_pane_g5_ParamLimits

0x2433,	// (0x0002fff4) main_camera_pane_g6_ParamLimits

0x2445,	// (0x00030006) main_camera_pane_g7_ParamLimits

0xf215,	// (0x0003cdd6) main_camera_pane_g_ParamLimits

0x2457,	// (0x00030018) main_camera_pane_t1_ParamLimits

0x246d,	// (0x0003002e) main_camera_pane_t2_ParamLimits

0xf226,	// (0x0003cde7) main_camera_pane_t_ParamLimits

0xa246,	// (0x00037e07) bg_popup_preview_window_pane_cp01_ParamLimits

0xa246,	// (0x00037e07) bg_popup_preview_window_pane_cp01

0xb35f,	// (0x00038f20) popup_phob_thumbnail2_window_g1_ParamLimits

0xb35f,	// (0x00038f20) popup_phob_thumbnail2_window_g1

0x9feb,	// (0x00037bac) call2_cli_visual_pane

0x4781,	// (0x00032342) popup_call2_audio_conf_window_ParamLimits

0x4781,	// (0x00032342) popup_call2_audio_conf_window

0x47a1,	// (0x00032362) popup_call2_audio_first_window_ParamLimits

0x47a1,	// (0x00032362) popup_call2_audio_first_window

0x4837,	// (0x000323f8) popup_call2_audio_in_window_ParamLimits

0x4837,	// (0x000323f8) popup_call2_audio_in_window

0x487f,	// (0x00032440) popup_call2_audio_out_window_ParamLimits

0x487f,	// (0x00032440) popup_call2_audio_out_window

0x48e9,	// (0x000324aa) popup_call2_audio_second_window_ParamLimits

0x48e9,	// (0x000324aa) popup_call2_audio_second_window

0x494f,	// (0x00032510) popup_call2_audio_wait_window_ParamLimits

0x494f,	// (0x00032510) popup_call2_audio_wait_window

0x9feb,	// (0x00037bac) bg_popup_call2_act_pane_cp03

0xa228,	// (0x00037de9) list_conf_pane_cp

0xb36b,	// (0x00038f2c) popup_call2_audio_conf_window_t1

0xb379,	// (0x00038f3a) list_single_graphic_popup_conf2_pane_ParamLimits

0xb379,	// (0x00038f3a) list_single_graphic_popup_conf2_pane

0xacd4,	// (0x00038895) list_highlight_pane_cp04

0xb38c,	// (0x00038f4d) list_single_graphic_popup_conf2_pane_g1

0xace5,	// (0x000388a6) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf51d,	// (0x0003d0de) list_single_graphic_popup_conf2_pane_g

0xb396,	// (0x00038f57) list_single_graphic_popup_conf2_pane_t1

0xb3a4,	// (0x00038f65) bg_popup_call2_act_pane_cp01_ParamLimits

0xb3a4,	// (0x00038f65) bg_popup_call2_act_pane_cp01

0xb42e,	// (0x00038fef) call_type_pane_cp05_ParamLimits

0xb42e,	// (0x00038fef) call_type_pane_cp05

0xb482,	// (0x00039043) popup_call2_audio_second_window_g1_ParamLimits

0xb482,	// (0x00039043) popup_call2_audio_second_window_g1

0xb4d6,	// (0x00039097) popup_call2_audio_second_window_g2_ParamLimits

0xb4d6,	// (0x00039097) popup_call2_audio_second_window_g2

0x0002,

0xf522,	// (0x0003d0e3) popup_call2_audio_second_window_g_ParamLimits

0xf522,	// (0x0003d0e3) popup_call2_audio_second_window_g

0xb53b,	// (0x000390fc) popup_call2_audio_second_window_t1_ParamLimits

0xb53b,	// (0x000390fc) popup_call2_audio_second_window_t1

0xb5f6,	// (0x000391b7) popup_call2_audio_second_window_t2_ParamLimits

0xb5f6,	// (0x000391b7) popup_call2_audio_second_window_t2

0xb649,	// (0x0003920a) popup_call2_audio_second_window_t3_ParamLimits

0xb649,	// (0x0003920a) popup_call2_audio_second_window_t3

0x0003,

0xf529,	// (0x0003d0ea) popup_call2_audio_second_window_t_ParamLimits

0xf529,	// (0x0003d0ea) popup_call2_audio_second_window_t

0x9feb,	// (0x00037bac) bg_popup_call2_in_pane_cp02

0x9ff5,	// (0x00037bb6) call_type_pane_cp04

0x9ffd,	// (0x00037bbe) popup_call2_audio_wait_window_g1

0xa005,	// (0x00037bc6) popup_call2_audio_wait_window_g2

0x0001,

0xf102,	// (0x0003ccc3) popup_call2_audio_wait_window_g

0xa00d,	// (0x00037bce) popup_call2_audio_wait_window_t3

0xb73c,	// (0x000392fd) bg_popup_call2_act_pane_ParamLimits

0xb73c,	// (0x000392fd) bg_popup_call2_act_pane

0xb7fc,	// (0x000393bd) call_type_pane_cp03_ParamLimits

0xb7fc,	// (0x000393bd) call_type_pane_cp03

0xb860,	// (0x00039421) popup_call2_audio_first_window_g1_ParamLimits

0xb860,	// (0x00039421) popup_call2_audio_first_window_g1

0xb8d0,	// (0x00039491) popup_call2_audio_first_window_g2_ParamLimits

0xb8d0,	// (0x00039491) popup_call2_audio_first_window_g2

0xaf87,	// (0x00038b48) popup_call2_audio_first_window_g3_ParamLimits

0xaf87,	// (0x00038b48) popup_call2_audio_first_window_g3

0x0004,

0xf532,	// (0x0003d0f3) popup_call2_audio_first_window_g_ParamLimits

0xf532,	// (0x0003d0f3) popup_call2_audio_first_window_g

0xb9ae,	// (0x0003956f) popup_call2_audio_first_window_t1_ParamLimits

0xb9ae,	// (0x0003956f) popup_call2_audio_first_window_t1

0xbab1,	// (0x00039672) popup_call2_audio_first_window_t4_ParamLimits

0xbab1,	// (0x00039672) popup_call2_audio_first_window_t4

0xbb94,	// (0x00039755) popup_call2_audio_first_window_t5_ParamLimits

0xbb94,	// (0x00039755) popup_call2_audio_first_window_t5

0x0003,

0xf53d,	// (0x0003d0fe) popup_call2_audio_first_window_t_ParamLimits

0xf53d,	// (0x0003d0fe) popup_call2_audio_first_window_t

0xa23e,	// (0x00037dff) bg_popup_call2_act_pane_g1

0xc201,	// (0x00039dc2) popup_cale_lunar_info_window_t1

0xc20f,	// (0x00039dd0) popup_cale_lunar_info_window_t2

0xc21d,	// (0x00039dde) popup_cale_lunar_info_window_t3

0x9feb,	// (0x00037bac) bg_popup_call2_bubble_pane

0xbc95,	// (0x00039856) bg_popup_call2_in_pane_cp01_ParamLimits

0xbc95,	// (0x00039856) bg_popup_call2_in_pane_cp01

0x9cc7,	// (0x00037888) call_type_pane_cp02

0xbcdd,	// (0x0003989e) popup_call2_audio_out_window_g1_ParamLimits

0xbcdd,	// (0x0003989e) popup_call2_audio_out_window_g1

0xbd09,	// (0x000398ca) popup_call2_audio_out_window_g2_ParamLimits

0xbd09,	// (0x000398ca) popup_call2_audio_out_window_g2

0xbd31,	// (0x000398f2) popup_call2_audio_out_window_g3_ParamLimits

0xbd31,	// (0x000398f2) popup_call2_audio_out_window_g3

0x0003,

0xf546,	// (0x0003d107) popup_call2_audio_out_window_g_ParamLimits

0xf546,	// (0x0003d107) popup_call2_audio_out_window_g

0xbd6c,	// (0x0003992d) popup_call2_audio_out_window_t1_ParamLimits

0xbd6c,	// (0x0003992d) popup_call2_audio_out_window_t1

0xbdcb,	// (0x0003998c) popup_call2_audio_out_window_t2_ParamLimits

0xbdcb,	// (0x0003998c) popup_call2_audio_out_window_t2

0xbe1f,	// (0x000399e0) popup_call2_audio_out_window_t3_ParamLimits

0xbe1f,	// (0x000399e0) popup_call2_audio_out_window_t3

0xbe35,	// (0x000399f6) popup_call2_audio_out_window_t4_ParamLimits

0xbe35,	// (0x000399f6) popup_call2_audio_out_window_t4

0xbe4b,	// (0x00039a0c) popup_call2_audio_out_window_t5_ParamLimits

0xbe4b,	// (0x00039a0c) popup_call2_audio_out_window_t5

0x0005,

0xf54f,	// (0x0003d110) popup_call2_audio_out_window_t_ParamLimits

0xf54f,	// (0x0003d110) popup_call2_audio_out_window_t

0xbeaf,	// (0x00039a70) bg_popup_call2_in_pane_ParamLimits

0xbeaf,	// (0x00039a70) bg_popup_call2_in_pane

0xbf0b,	// (0x00039acc) popup_call2_audio_in_window_g1_ParamLimits

0xbf0b,	// (0x00039acc) popup_call2_audio_in_window_g1

0xbf43,	// (0x00039b04) popup_call2_audio_in_window_g2_ParamLimits

0xbf43,	// (0x00039b04) popup_call2_audio_in_window_g2

0xbf7b,	// (0x00039b3c) popup_call2_audio_in_window_g3_ParamLimits

0xbf7b,	// (0x00039b3c) popup_call2_audio_in_window_g3

0x0003,

0xf55c,	// (0x0003d11d) popup_call2_audio_in_window_g_ParamLimits

0xf55c,	// (0x0003d11d) popup_call2_audio_in_window_g

0xbfd3,	// (0x00039b94) popup_call2_audio_in_window_t1_ParamLimits

0xbfd3,	// (0x00039b94) popup_call2_audio_in_window_t1

0xc053,	// (0x00039c14) popup_call2_audio_in_window_t2_ParamLimits

0xc053,	// (0x00039c14) popup_call2_audio_in_window_t2

0xc0d3,	// (0x00039c94) popup_call2_audio_in_window_t3_ParamLimits

0xc0d3,	// (0x00039c94) popup_call2_audio_in_window_t3

0xc0ed,	// (0x00039cae) popup_call2_audio_in_window_t4_ParamLimits

0xc0ed,	// (0x00039cae) popup_call2_audio_in_window_t4

0xc0ff,	// (0x00039cc0) popup_call2_audio_in_window_t5_ParamLimits

0xc0ff,	// (0x00039cc0) popup_call2_audio_in_window_t5

0xc114,	// (0x00039cd5) popup_call2_audio_in_window_t6_ParamLimits

0xc114,	// (0x00039cd5) popup_call2_audio_in_window_t6

0x0005,

0xf565,	// (0x0003d126) popup_call2_audio_in_window_t_ParamLimits

0xf565,	// (0x0003d126) popup_call2_audio_in_window_t

0xa23e,	// (0x00037dff) bg_popup_call2_in_pane_g1

0xc22b,	// (0x00039dec) popup_cale_lunar_info_window_t4

0x0003,

0xf5cd,	// (0x0003d18e) popup_cale_lunar_info_window_t

0xa246,	// (0x00037e07) bg_popup_call2_rect_pane_ParamLimits

0xa246,	// (0x00037e07) bg_popup_call2_rect_pane

0x9feb,	// (0x00037bac) call2_cli_visual_graphic_pane

0x9feb,	// (0x00037bac) call2_cli_visual_text_pane

0x4daf,	// (0x00032970) smil_status_volume_pane_g3

0x0002,

0xa37f,	// (0x00037f40) call2_cli_visual_graphic_pane_g1

0xa37f,	// (0x00037f40) call2_cli_visual_graphic_pane_g2

0xa37f,	// (0x00037f40) call2_cli_visual_graphic_pane_g3

0x0002,

0xf572,	// (0x0003d133) call2_cli_visual_graphic_pane_g

0xc129,	// (0x00039cea) bg_popup_call2_rect_pane_g1

0xa41d,	// (0x00037fde) bg_popup_call2_rect_pane_g2

0xc131,	// (0x00039cf2) bg_popup_call2_rect_pane_g3

0xc139,	// (0x00039cfa) bg_popup_call2_rect_pane_g4

0xc141,	// (0x00039d02) bg_popup_call2_rect_pane_g5

0xc149,	// (0x00039d0a) bg_popup_call2_rect_pane_g6

0xc151,	// (0x00039d12) bg_popup_call2_rect_pane_g7

0xc159,	// (0x00039d1a) bg_popup_call2_rect_pane_g8

0xc161,	// (0x00039d22) bg_popup_call2_rect_pane_g9

0x0008,

0xf579,	// (0x0003d13a) bg_popup_call2_rect_pane_g

0xc169,	// (0x00039d2a) bg_popup_call2_bubble_pane_g1

0xc171,	// (0x00039d32) bg_popup_call2_bubble_pane_g2

0xc179,	// (0x00039d3a) bg_popup_call2_bubble_pane_g3

0xc181,	// (0x00039d42) bg_popup_call2_bubble_pane_g4

0xc189,	// (0x00039d4a) bg_popup_call2_bubble_pane_g5

0xc191,	// (0x00039d52) bg_popup_call2_bubble_pane_g6

0xc199,	// (0x00039d5a) bg_popup_call2_bubble_pane_g7

0xc1a1,	// (0x00039d62) bg_popup_call2_bubble_pane_g8

0xc1a9,	// (0x00039d6a) bg_popup_call2_bubble_pane_g9

0x0008,

0xf58c,	// (0x0003d14d) bg_popup_call2_bubble_pane_g

0x1e43,	// (0x0002fa04) aid_cale_week_size_cell_pane

0x2485,	// (0x00030046) aid_cams_cif_uncrop_pane_ParamLimits

0x2485,	// (0x00030046) aid_cams_cif_uncrop_pane

0x263a,	// (0x000301fb) aid_cams_size_cell_ParamLimits

0x263a,	// (0x000301fb) aid_cams_size_cell

0x264e,	// (0x0003020f) grid_cams_pane_ParamLimits

0x2668,	// (0x00030229) linegrid_cams_pane_ParamLimits

0x285e,	// (0x0003041f) call_video_pane_t1

0x287c,	// (0x0003043d) call_video_pane_t2

0x0001,

0xf279,	// (0x0003ce3a) call_video_pane_t

0x2cab,	// (0x0003086c) aid_cale_month_size_cell_pane_ParamLimits

0x2cab,	// (0x0003086c) aid_cale_month_size_cell_pane

0xf616,	// (0x0003d1d7) smil_status_volume_pane_g

0x4dbc,	// (0x0003297d) volume_smil_pane_ParamLimits

0x196c,	// (0x0002f52d) aid_popup2_width_pane

0x1d52,	// (0x0002f913) cell_qdial_pane_g4_ParamLimits

0x1d52,	// (0x0002f913) cell_qdial_pane_g4

0x3ca3,	// (0x00031864) aid_blid_cardinal_pane_ParamLimits

0x3caf,	// (0x00031870) aid_blid_destination_pane_ParamLimits

0x3caf,	// (0x00031870) aid_blid_destination_pane

0xa246,	// (0x00037e07) bg_popup_call_poc_act_pane_ParamLimits

0xa246,	// (0x00037e07) bg_popup_call_poc_act_pane

0xa246,	// (0x00037e07) bg_popup_call_poc_inact_pane_ParamLimits

0xa246,	// (0x00037e07) bg_popup_call_poc_inact_pane

0xc1b1,	// (0x00039d72) bg_popup_call_poc_act_pane_g1

0xc1b9,	// (0x00039d7a) bg_popup_call_poc_act_pane_g2

0xc1c1,	// (0x00039d82) bg_popup_call_poc_act_pane_g3

0xc181,	// (0x00039d42) bg_popup_call_poc_act_pane_g4

0xc189,	// (0x00039d4a) bg_popup_call_poc_act_pane_g5

0xc1c9,	// (0x00039d8a) bg_popup_call_poc_act_pane_g6

0xc199,	// (0x00039d5a) bg_popup_call_poc_act_pane_g7

0xc1d1,	// (0x00039d92) bg_popup_call_poc_act_pane_g8

0x9feb,	// (0x00037bac) main_usb_pane

0x4c92,	// (0x00032853) popup_cale_lunar_info_window

0x2b46,	// (0x00030707) im_reading_pane_t1_ParamLimits

0xa5fc,	// (0x000381bd) list_im_pane_ParamLimits

0xa60d,	// (0x000381ce) scroll_pane_cp07_ParamLimits

0x9feb,	// (0x00037bac) grid_highlight_pane_cp012

0xa246,	// (0x00037e07) mup_scale_pane_ParamLimits

0xb0b2,	// (0x00038c73) main_usb_pane_g1_ParamLimits

0xb0b2,	// (0x00038c73) main_usb_pane_g1

0x49ad,	// (0x0003256e) main_usb_pane_g2_ParamLimits

0x49ad,	// (0x0003256e) main_usb_pane_g2

0x0001,

0xf5b6,	// (0x0003d177) main_usb_pane_g_ParamLimits

0xf5b6,	// (0x0003d177) main_usb_pane_g

0x49c3,	// (0x00032584) main_usb_pane_t1_ParamLimits

0x49c3,	// (0x00032584) main_usb_pane_t1

0x49d5,	// (0x00032596) main_usb_pane_t2_ParamLimits

0x49d5,	// (0x00032596) main_usb_pane_t2

0x49e7,	// (0x000325a8) main_usb_pane_t3_ParamLimits

0x49e7,	// (0x000325a8) main_usb_pane_t3

0x49f9,	// (0x000325ba) main_usb_pane_t4_ParamLimits

0x49f9,	// (0x000325ba) main_usb_pane_t4

0x4a0b,	// (0x000325cc) main_usb_pane_t5_ParamLimits

0x4a0b,	// (0x000325cc) main_usb_pane_t5

0x4a1d,	// (0x000325de) main_usb_pane_t6_ParamLimits

0x4a1d,	// (0x000325de) main_usb_pane_t6

0x0005,

0xf5bb,	// (0x0003d17c) main_usb_pane_t_ParamLimits

0x3c50,	// (0x00031811) aid_text_placing

0x3c59,	// (0x0003181a) main_location2_pane_t1_ParamLimits

0x3c6b,	// (0x0003182c) main_location2_pane_t2_ParamLimits

0x3c7d,	// (0x0003183e) main_location2_pane_t3_ParamLimits

0x3c91,	// (0x00031852) main_location2_pane_t4_ParamLimits

0x3c91,	// (0x00031852) main_location2_pane_t4

0xf3da,	// (0x0003cf9b) main_location2_pane_t_ParamLimits

0xa282,	// (0x00037e43) find_pinb_pane_g2_ParamLimits

0xa282,	// (0x00037e43) find_pinb_pane_g2

0x0001,

0xf128,	// (0x0003cce9) find_pinb_pane_g_ParamLimits

0xf128,	// (0x0003cce9) find_pinb_pane_g

0xa28e,	// (0x00037e4f) find_pinb_pane_t1_ParamLimits

0xa2a0,	// (0x00037e61) find_pinb_pane_t2_ParamLimits

0xf12d,	// (0x0003ccee) find_pinb_pane_t_ParamLimits

0x9feb,	// (0x00037bac) main_call3_pane

0x318e,	// (0x00030d4f) cale_month_day_heading_pane_t1_ParamLimits

0x3214,	// (0x00030dd5) cale_month_day_heading_pane_t2_ParamLimits

0x32a5,	// (0x00030e66) cale_month_day_heading_pane_t3_ParamLimits

0x3336,	// (0x00030ef7) cale_month_day_heading_pane_t4_ParamLimits

0x33cf,	// (0x00030f90) cale_month_day_heading_pane_t5_ParamLimits

0x3470,	// (0x00031031) cale_month_day_heading_pane_t6_ParamLimits

0x3511,	// (0x000310d2) cale_month_day_heading_pane_t7_ParamLimits

0xf2b1,	// (0x0003ce72) cale_month_day_heading_pane_t_ParamLimits

0xa92e,	// (0x000384ef) smil_status_volume_pane

0x44a0,	// (0x00032061) postcard_address_pane_ParamLimits

0x44a0,	// (0x00032061) postcard_address_pane

0x44b2,	// (0x00032073) postcard_message_pane_ParamLimits

0x44b2,	// (0x00032073) postcard_message_pane

0x4989,	// (0x0003254a) call2_cli_visual_pane_t1_ParamLimits

0x4989,	// (0x0003254a) call2_cli_visual_pane_t1

0x4f6f,	// (0x00032b30) postcard_message_pane_t1_ParamLimits

0x4f6f,	// (0x00032b30) postcard_message_pane_t1

0x4f58,	// (0x00032b19) postcard_address_pane_t1_ParamLimits

0x4f58,	// (0x00032b19) postcard_address_pane_t1

0x4f44,	// (0x00032b05) popup_call3_audio_in_window_ParamLimits

0x4f44,	// (0x00032b05) popup_call3_audio_in_window

0x4dd1,	// (0x00032992) bg_popup_call3_in_pane_ParamLimits

0x4dd1,	// (0x00032992) bg_popup_call3_in_pane

0x4e45,	// (0x00032a06) popup_call3_audio_in_window_g1_ParamLimits

0x4e45,	// (0x00032a06) popup_call3_audio_in_window_g1

0x4e65,	// (0x00032a26) popup_call3_audio_in_window_g2_ParamLimits

0x4e65,	// (0x00032a26) popup_call3_audio_in_window_g2

0x4e85,	// (0x00032a46) popup_call3_audio_in_window_g3_ParamLimits

0x4e85,	// (0x00032a46) popup_call3_audio_in_window_g3

0x0003,

0xf61d,	// (0x0003d1de) popup_call3_audio_in_window_g_ParamLimits

0xf61d,	// (0x0003d1de) popup_call3_audio_in_window_g

0x4eb6,	// (0x00032a77) popup_call3_audio_in_window_t1_ParamLimits

0x4eb6,	// (0x00032a77) popup_call3_audio_in_window_t1

0x4ef4,	// (0x00032ab5) popup_call3_audio_in_window_t2_ParamLimits

0x4ef4,	// (0x00032ab5) popup_call3_audio_in_window_t2

0x4f32,	// (0x00032af3) popup_call3_audio_in_window_t3_ParamLimits

0x4f32,	// (0x00032af3) popup_call3_audio_in_window_t3

0x0002,

0xf626,	// (0x0003d1e7) popup_call3_audio_in_window_t_ParamLimits

0xf626,	// (0x0003d1e7) popup_call3_audio_in_window_t

0xaec8,	// (0x00038a89) bg_popup_call3_rect_pane

0xc129,	// (0x00039cea) bg_popup_call3_rect_pane_g1

0xa41d,	// (0x00037fde) bg_popup_call3_rect_pane_g2

0xc131,	// (0x00039cf2) bg_popup_call3_rect_pane_g3

0xc139,	// (0x00039cfa) bg_popup_call3_rect_pane_g4

0xc141,	// (0x00039d02) bg_popup_call3_rect_pane_g5

0xc149,	// (0x00039d0a) bg_popup_call3_rect_pane_g6

0xc151,	// (0x00039d12) bg_popup_call3_rect_pane_g7

0x409f,	// (0x00031c60) mup_visualizer_osc_pane

0xaf95,	// (0x00038b56) mup_visualizer_spec_pane

0x4e01,	// (0x000329c2) call3_video_qcif_pane_ParamLimits

0x4e01,	// (0x000329c2) call3_video_qcif_pane

0x4e12,	// (0x000329d3) call3_video_qcif_uncrop_pane_ParamLimits

0x4e12,	// (0x000329d3) call3_video_qcif_uncrop_pane

0x4e20,	// (0x000329e1) call3_video_subqcif_pane_ParamLimits

0x4e20,	// (0x000329e1) call3_video_subqcif_pane

0x4e34,	// (0x000329f5) call3_video_subqcif_uncrop_pane_ParamLimits

0x4e34,	// (0x000329f5) call3_video_subqcif_uncrop_pane

0x4ea5,	// (0x00032a66) popup_call3_audio_in_window_g4_ParamLimits

0x4ea5,	// (0x00032a66) popup_call3_audio_in_window_g4

0x4d9e,	// (0x0003295f) mup_spec_half_pane

0x4da7,	// (0x00032968) mup_spec_half_pane_cp

0xc38e,	// (0x00039f4f) mup_osc_middle_pane

0xc397,	// (0x00039f58) mup_visualizer_osc_pane_g1

0x4d7e,	// (0x0003293f) mup_spec_bar_pane_ParamLimits

0x4d7e,	// (0x0003293f) mup_spec_bar_pane

0xc37b,	// (0x00039f3c) mup_spec_bar_pane_g1

0xc385,	// (0x00039f46) mup_spec_bar_pane_g2

0x0001,

0xf611,	// (0x0003d1d2) mup_spec_bar_pane_g

0x1e43,	// (0x0002fa04) aid_cale_week_size_cell_pane_ParamLimits

0x1e5d,	// (0x0002fa1e) bg_cale_heading_pane_ParamLimits

0xa45a,	// (0x0003801b) bg_cale_pane_cp01_ParamLimits

0x1e7b,	// (0x0002fa3c) cale_week_corner_pane_ParamLimits

0x1e9a,	// (0x0002fa5b) cale_week_day_heading_pane_ParamLimits

0x1ebd,	// (0x0002fa7e) cale_week_scroll_pane_g1_ParamLimits

0x1ed6,	// (0x0002fa97) cale_week_scroll_pane_g2_ParamLimits

0x1eee,	// (0x0002faaf) cale_week_scroll_pane_g3_ParamLimits

0x1f06,	// (0x0002fac7) cale_week_scroll_pane_g4_ParamLimits

0x1f1e,	// (0x0002fadf) cale_week_scroll_pane_g5_ParamLimits

0x1f3a,	// (0x0002fafb) cale_week_scroll_pane_g6_ParamLimits

0x1f5a,	// (0x0002fb1b) cale_week_scroll_pane_g7_ParamLimits

0x1f7a,	// (0x0002fb3b) cale_week_scroll_pane_g8_ParamLimits

0x1f9e,	// (0x0002fb5f) cale_week_scroll_pane_g9_ParamLimits

0x1fb6,	// (0x0002fb77) cale_week_scroll_pane_g10_ParamLimits

0x1fce,	// (0x0002fb8f) cale_week_scroll_pane_g11_ParamLimits

0x1fe6,	// (0x0002fba7) cale_week_scroll_pane_g12_ParamLimits

0x1ffe,	// (0x0002fbbf) cale_week_scroll_pane_g13_ParamLimits

0x1ffe,	// (0x0002fbbf) cale_week_scroll_pane_g14_ParamLimits

0x1ffe,	// (0x0002fbbf) cale_week_scroll_pane_g15_ParamLimits

0xf1b9,	// (0x0003cd7a) cale_week_scroll_pane_g_ParamLimits

0x2016,	// (0x0002fbd7) cale_week_time_pane_ParamLimits

0x203a,	// (0x0002fbfb) grid_cale_week_pane_ParamLimits

0xa478,	// (0x00038039) listscroll_cale_week_pane_t1

0xa48a,	// (0x0003804b) scroll_pane_cp08_ParamLimits

0x2d0c,	// (0x000308cd) cale_month_corner_pane_ParamLimits

0xa904,	// (0x000384c5) cale_month_pane_t1

0x312c,	// (0x00030ced) cale_month_week_pane_ParamLimits

0x3a4e,	// (0x0003160f) popup_call_status_window_g1_ParamLimits

0x3a62,	// (0x00031623) popup_call_status_window_g2_ParamLimits

0x3a76,	// (0x00031637) popup_call_status_window_g3_ParamLimits

0xf361,	// (0x0003cf22) popup_call_status_window_g_ParamLimits

0xac30,	// (0x000387f1) aid_call2_pane

0x431e,	// (0x00031edf) msg_header_pane_g1

0x44a0,	// (0x00032061) postcard_address2_pane_ParamLimits

0x44a0,	// (0x00032061) postcard_address2_pane

0x44b2,	// (0x00032073) postcard_message2_pane_ParamLimits

0x44b2,	// (0x00032073) postcard_message2_pane

0x4d2c,	// (0x000328ed) message2_row_pane_ParamLimits

0x4d2c,	// (0x000328ed) message2_row_pane

0x4d4b,	// (0x0003290c) address2_row_pane_ParamLimits

0x4d4b,	// (0x0003290c) address2_row_pane

0xc349,	// (0x00039f0a) postcard_message2_row_pane_g1

0xc351,	// (0x00039f12) postcard_message2_row_pane_t1

0xc349,	// (0x00039f0a) address2_row_pane_g1

0xc351,	// (0x00039f12) address2_row_pane_t1

0x0633,	// (0x0002e1f4) aid_size_cell_vorec

0x9feb,	// (0x00037bac) main_rss_pane

0x4d5e,	// (0x0003291f) rss_list_single_pane_ParamLimits

0x4d5e,	// (0x0003291f) rss_list_single_pane

0xc35f,	// (0x00039f20) rss_list_single_pane_t1

0xc36d,	// (0x00039f2e) rss_list_single_pane_t2

0x0001,

0xf60c,	// (0x0003d1cd) rss_list_single_pane_t

0x9feb,	// (0x00037bac) main_camera2_pane

0x9feb,	// (0x00037bac) main_video2_pane

0x0a05,	// (0x0002e5c6) cams_zoom_pane_cp2_ParamLimits

0x0a05,	// (0x0002e5c6) cams_zoom_pane_cp2

0x0a25,	// (0x0002e5e6) image2_vga_pane_ParamLimits

0x0a25,	// (0x0002e5e6) image2_vga_pane

0x0a76,	// (0x0002e637) main_camera2_pane_g1_ParamLimits

0x0a76,	// (0x0002e637) main_camera2_pane_g1

0x0a96,	// (0x0002e657) main_camera2_pane_g2_ParamLimits

0x0a96,	// (0x0002e657) main_camera2_pane_g2

0x0ab6,	// (0x0002e677) main_camera2_pane_g3_ParamLimits

0x0ab6,	// (0x0002e677) main_camera2_pane_g3

0x0ad6,	// (0x0002e697) main_camera2_pane_g4_ParamLimits

0x0ad6,	// (0x0002e697) main_camera2_pane_g4

0x0af6,	// (0x0002e6b7) main_camera2_pane_g5_ParamLimits

0x0af6,	// (0x0002e6b7) main_camera2_pane_g5

0x0b16,	// (0x0002e6d7) main_camera2_pane_g6_ParamLimits

0x0b16,	// (0x0002e6d7) main_camera2_pane_g6

0x0b36,	// (0x0002e6f7) main_camera2_pane_g7_ParamLimits

0x0b36,	// (0x0002e6f7) main_camera2_pane_g7

0x0b56,	// (0x0002e717) main_camera2_pane_g8_ParamLimits

0x0b56,	// (0x0002e717) main_camera2_pane_g8

0x0008,

0xf62d,	// (0x0003d1ee) main_camera2_pane_g_ParamLimits

0xf62d,	// (0x0003d1ee) main_camera2_pane_g

0x0b96,	// (0x0002e757) main_camera2_pane_t1_ParamLimits

0x0b96,	// (0x0002e757) main_camera2_pane_t1

0x0bcb,	// (0x0002e78c) main_camera2_pane_t2_ParamLimits

0x0bcb,	// (0x0002e78c) main_camera2_pane_t2

0x0bf1,	// (0x0002e7b2) main_camera2_pane_t3_ParamLimits

0x0bf1,	// (0x0002e7b2) main_camera2_pane_t3

0x0c4f,	// (0x0002e810) main_camera2_pane_t4_ParamLimits

0x0c4f,	// (0x0002e810) main_camera2_pane_t4

0x0006,

0xf640,	// (0x0003d201) main_camera2_pane_t_ParamLimits

0xf640,	// (0x0003d201) main_camera2_pane_t

0x0ce1,	// (0x0002e8a2) cams_zoom_pane_cp4_ParamLimits

0x0ce1,	// (0x0002e8a2) cams_zoom_pane_cp4

0x0cf7,	// (0x0002e8b8) image2_cif_pane_ParamLimits

0x0cf7,	// (0x0002e8b8) image2_cif_pane

0x0d22,	// (0x0002e8e3) image2_subqcif_pane_ParamLimits

0x0d22,	// (0x0002e8e3) image2_subqcif_pane

0x0d3c,	// (0x0002e8fd) main_video2_pane_g1_ParamLimits

0x0d3c,	// (0x0002e8fd) main_video2_pane_g1

0x0d56,	// (0x0002e917) main_video2_pane_g2_ParamLimits

0x0d56,	// (0x0002e917) main_video2_pane_g2

0x0d6c,	// (0x0002e92d) main_video2_pane_g3_ParamLimits

0x0d6c,	// (0x0002e92d) main_video2_pane_g3

0x0d82,	// (0x0002e943) main_video2_pane_g4_ParamLimits

0x0d82,	// (0x0002e943) main_video2_pane_g4

0x0d98,	// (0x0002e959) main_video2_pane_g5_ParamLimits

0x0d98,	// (0x0002e959) main_video2_pane_g5

0x0dae,	// (0x0002e96f) main_video2_pane_g6_ParamLimits

0x0dae,	// (0x0002e96f) main_video2_pane_g6

0x0005,

0xf64f,	// (0x0003d210) main_video2_pane_g_ParamLimits

0xf64f,	// (0x0003d210) main_video2_pane_g

0x0dc8,	// (0x0002e989) main_video2_pane_t1_ParamLimits

0x0dc8,	// (0x0002e989) main_video2_pane_t1

0x0dec,	// (0x0002e9ad) main_video2_pane_t2_ParamLimits

0x0dec,	// (0x0002e9ad) main_video2_pane_t2

0x0e3a,	// (0x0002e9fb) main_video2_pane_t3_ParamLimits

0x0e3a,	// (0x0002e9fb) main_video2_pane_t3

0x0002,

0xf65c,	// (0x0003d21d) main_video2_pane_t_ParamLimits

0xf65c,	// (0x0003d21d) main_video2_pane_t

0x4ad8,	// (0x00032699) call_muted_g2

0x0001,

0xf5fe,	// (0x0003d1bf) call_muted_g

0x9feb,	// (0x00037bac) main_mup2_pane

0x4fba,	// (0x00032b7b) main_mup2_pane_g1_ParamLimits

0x4fba,	// (0x00032b7b) main_mup2_pane_g1

0x4fc6,	// (0x00032b87) main_mup2_pane_g2_ParamLimits

0x4fc6,	// (0x00032b87) main_mup2_pane_g2

0x5235,	// (0x00032df6) main_mup_pane_g13_cp1

0x523d,	// (0x00032dfe) mup_volume_pane_cp1

0x4fe2,	// (0x00032ba3) main_mup2_pane_g4_ParamLimits

0x4fe2,	// (0x00032ba3) main_mup2_pane_g4

0x4ff4,	// (0x00032bb5) main_mup2_pane_g5_ParamLimits

0x4ff4,	// (0x00032bb5) main_mup2_pane_g5

0x5006,	// (0x00032bc7) main_mup2_pane_g6_ParamLimits

0x5006,	// (0x00032bc7) main_mup2_pane_g6

0x5018,	// (0x00032bd9) main_mup2_pane_g7_ParamLimits

0x5018,	// (0x00032bd9) main_mup2_pane_g7

0x0006,

0xf663,	// (0x0003d224) main_mup2_pane_g_ParamLimits

0xf663,	// (0x0003d224) main_mup2_pane_g

0x5030,	// (0x00032bf1) main_mup2_pane_t1_ParamLimits

0x5030,	// (0x00032bf1) main_mup2_pane_t1

0x5046,	// (0x00032c07) main_mup2_pane_t2_ParamLimits

0x5046,	// (0x00032c07) main_mup2_pane_t2

0x505c,	// (0x00032c1d) main_mup2_pane_t3_ParamLimits

0x505c,	// (0x00032c1d) main_mup2_pane_t3

0x5072,	// (0x00032c33) main_mup2_pane_t4_ParamLimits

0x5072,	// (0x00032c33) main_mup2_pane_t4

0x508a,	// (0x00032c4b) main_mup2_pane_t5_ParamLimits

0x508a,	// (0x00032c4b) main_mup2_pane_t5

0x50a2,	// (0x00032c63) main_mup2_pane_t6_ParamLimits

0x50a2,	// (0x00032c63) main_mup2_pane_t6

0x0005,

0xf672,	// (0x0003d233) main_mup2_pane_t_ParamLimits

0xf672,	// (0x0003d233) main_mup2_pane_t

0x50d2,	// (0x00032c93) mup2_visualizer_pane_ParamLimits

0x50d2,	// (0x00032c93) mup2_visualizer_pane

0x5100,	// (0x00032cc1) mup_progress_pane_cp_ParamLimits

0x5100,	// (0x00032cc1) mup_progress_pane_cp

0x5220,	// (0x00032de1) mup_volume_pane_cp_ParamLimits

0x5220,	// (0x00032de1) mup_volume_pane_cp

0x5114,	// (0x00032cd5) mup2_visualizer_pane_g1_ParamLimits

0x5114,	// (0x00032cd5) mup2_visualizer_pane_g1

0xc3ce,	// (0x00039f8f) mup2_visualizer_pane_g2_ParamLimits

0xc3ce,	// (0x00039f8f) mup2_visualizer_pane_g2

0x512b,	// (0x00032cec) mup2_visualizer_pane_g3_ParamLimits

0x512b,	// (0x00032cec) mup2_visualizer_pane_g3

0x0002,

0xf67f,	// (0x0003d240) mup2_visualizer_pane_g_ParamLimits

0xf67f,	// (0x0003d240) mup2_visualizer_pane_g

0xb1fb,	// (0x00038dbc) aid_size_cell_fmradio

0x06fb,	// (0x0002e2bc) aid_height_parent_landcape

0xa762,	// (0x00038323) wml_content_pane_cp

0xa76a,	// (0x0003832b) wml_tabs_pane

0xa773,	// (0x00038334) popup_wml_miniature_window

0xa77b,	// (0x0003833c) scroll_pane_cp021

0xa78f,	// (0x00038350) wml_content_pane_comp8

0x9feb,	// (0x00037bac) bg_popup_sub_pane_cp05

0xc3ec,	// (0x00039fad) popup_wml_miniature_window_g1

0xc3f4,	// (0x00039fb5) wml_miniature_view_pane

0x5137,	// (0x00032cf8) aid_size_wml_view

0x513f,	// (0x00032d00) wml_miniature_view_pane_g1

0x5148,	// (0x00032d09) wml_miniature_view_pane_g2

0x5151,	// (0x00032d12) wml_miniature_view_pane_g3

0x5159,	// (0x00032d1a) wml_miniature_view_pane_g4

0x5161,	// (0x00032d22) wml_miniature_view_pane_g5

0x5169,	// (0x00032d2a) wml_miniature_view_pane_g6

0x5171,	// (0x00032d32) wml_miniature_view_pane_g7

0x5179,	// (0x00032d3a) wml_miniature_view_pane_g8

0x0007,

0xf686,	// (0x0003d247) wml_miniature_view_pane_g

0xc3fc,	// (0x00039fbd) background_graphic_ParamLimits

0xc3fc,	// (0x00039fbd) background_graphic

0xc408,	// (0x00039fc9) wml_tabs_2_pane

0xc411,	// (0x00039fd2) wml_tabs_3_pane_ParamLimits

0xc411,	// (0x00039fd2) wml_tabs_3_pane

0xc423,	// (0x00039fe4) wml_tabs_4_pane_ParamLimits

0xc423,	// (0x00039fe4) wml_tabs_4_pane

0xc439,	// (0x00039ffa) wml_tabs_5_pane_ParamLimits

0xc439,	// (0x00039ffa) wml_tabs_5_pane

0xc453,	// (0x0003a014) wml_tabs_pane_g2_ParamLimits

0xc453,	// (0x0003a014) wml_tabs_pane_g2

0xc467,	// (0x0003a028) wml_tabs_pane_g3_ParamLimits

0xc467,	// (0x0003a028) wml_tabs_pane_g3

0x5181,	// (0x00032d42) wml_tabs_2_active_pane_ParamLimits

0x5181,	// (0x00032d42) wml_tabs_2_active_pane

0x5195,	// (0x00032d56) wml_tabs_2_passive_pane_ParamLimits

0x5195,	// (0x00032d56) wml_tabs_2_passive_pane

0x51a9,	// (0x00032d6a) wml_tabs_3_active_pane_cp_ParamLimits

0x51a9,	// (0x00032d6a) wml_tabs_3_active_pane_cp

0x51be,	// (0x00032d7f) wml_tabs_3_passive_pane_ParamLimits

0x51be,	// (0x00032d7f) wml_tabs_3_passive_pane

0x51d1,	// (0x00032d92) wml_tabs_3_passive_pane_cp_ParamLimits

0x51d1,	// (0x00032d92) wml_tabs_3_passive_pane_cp

0x51e8,	// (0x00032da9) tabs_4_active_pane

0x51f0,	// (0x00032db1) tabs_4_passive_pane

0x51fa,	// (0x00032dbb) tabs_4_passive_pane_cp

0x5202,	// (0x00032dc3) tabs_4_passive_pane_cp2

0x49a5,	// (0x00032566) aid_height_text

0x4071,	// (0x00031c32) mup_volume_cont_pane_ParamLimits

0x4071,	// (0x00031c32) mup_volume_cont_pane

0x1ae6,	// (0x0002f6a7) aid_size_cell_pinb

0x1af0,	// (0x0002f6b1) aid_size_list_pinb

0x50ec,	// (0x00032cad) mup2_volume_cont_pane_ParamLimits

0x50ec,	// (0x00032cad) mup2_volume_cont_pane

0x520c,	// (0x00032dcd) mup2_volume_cont_pane_g1_ParamLimits

0x520c,	// (0x00032dcd) mup2_volume_cont_pane_g1

0x01e5,	// (0x0002dda6) aid_size_cell_touch_ParamLimits

0x01e5,	// (0x0002dda6) aid_size_cell_touch

0x03cd,	// (0x0002df8e) touch_pane_ParamLimits

0x03cd,	// (0x0002df8e) touch_pane

0x1a1d,	// (0x0002f5de) main_rss2_pane

0xc484,	// (0x0003a045) listscroll_rss2_pane

0xc48d,	// (0x0003a04e) rss2_navigation_pane

0xc495,	// (0x0003a056) list_rss2_pane

0xad7f,	// (0x00038940) scroll_pane_cp22

0xc49d,	// (0x0003a05e) rss2_navigation_pane_g1

0xc4a6,	// (0x0003a067) rss2_navigation_pane_g2

0xc4ae,	// (0x0003a06f) rss2_navigation_pane_g3

0x0002,

0xf697,	// (0x0003d258) rss2_navigation_pane_g

0xc4b6,	// (0x0003a077) rss2_navigation_pane_t1

0x5245,	// (0x00032e06) rss2_list_single_pane_ParamLimits

0x5245,	// (0x00032e06) rss2_list_single_pane

0xc4c4,	// (0x0003a085) rss2_list_single_pane_t2

0xc4d2,	// (0x0003a093) rss2_list_single_pane_t3_ParamLimits

0xc4d2,	// (0x0003a093) rss2_list_single_pane_t3

0xc4ef,	// (0x0003a0b0) rss2_list_single_pane_t4

0x37bf,	// (0x00031380) smil_status_pane_g1

0x1a03,	// (0x0002f5c4) main_image2_pane_ParamLimits

0x1a03,	// (0x0002f5c4) main_image2_pane

0x0b76,	// (0x0002e737) main_camera2_pane_g9_ParamLimits

0x0b76,	// (0x0002e737) main_camera2_pane_g9

0x0ca4,	// (0x0002e865) main_camera2_pane_t5_ParamLimits

0x0ca4,	// (0x0002e865) main_camera2_pane_t5

0x4f8a,	// (0x00032b4b) main_camera2_pane_t6_ParamLimits

0x4f8a,	// (0x00032b4b) main_camera2_pane_t6

0x525c,	// (0x00032e1d) main_image2_pane_g1_ParamLimits

0x525c,	// (0x00032e1d) main_image2_pane_g1

0x46df,	// (0x000322a0) smil2_video_pane_ParamLimits

0x46df,	// (0x000322a0) smil2_video_pane

0x1978,	// (0x0002f539) aid_zoom_text_primary_cp

0x19f9,	// (0x0002f5ba) popup_preview_fixed_window

0xa5f4,	// (0x000381b5) im_reading_pane_g1

0x09ed,	// (0x0002e5ae) cams2_bc_adjust_pane_cp_ParamLimits

0x09ed,	// (0x0002e5ae) cams2_bc_adjust_pane_cp

0x0cd3,	// (0x0002e894) cams2_bc_adjust_pane_ParamLimits

0x0cd3,	// (0x0002e894) cams2_bc_adjust_pane

0xd55b,	// (0x0003b11c) cams2_bc_adjust_pane_g1

0x5272,	// (0x00032e33) cams2_slider_pane

0x527b,	// (0x00032e3c) cams2_slider_pane_g1

0x5284,	// (0x00032e45) cams2_slider_pane_g2

0x0006,

0xf69e,	// (0x0003d25f) cams2_slider_pane_g

0x043d,	// (0x0002dffe) calc_display_pane_ParamLimits

0x0465,	// (0x0002e026) calc_paper_pane_ParamLimits

0x0488,	// (0x0002e049) grid_calc_pane_ParamLimits

0x3adb,	// (0x0003169c) popup_clock_digital_window_t1_ParamLimits

0xb198,	// (0x00038d59) main_image_pane_t1

0x041f,	// (0x0002dfe0) aid_size_cell_calc_ParamLimits

0x041f,	// (0x0002dfe0) aid_size_cell_calc

0x0753,	// (0x0002e314) popup_blid_sat_info2_window_ParamLimits

0x0753,	// (0x0002e314) popup_blid_sat_info2_window

0xc505,	// (0x0003a0c6) aid_size_cell_blid

0xc50d,	// (0x0003a0ce) bg_popup_window_pane_cp07

0xc530,	// (0x0003a0f1) grid_popup_blid_pane

0xc53a,	// (0x0003a0fb) heading_pane_cp05_ParamLimits

0xc53a,	// (0x0003a0fb) heading_pane_cp05

0xc604,	// (0x0003a1c5) cell_popup_blid_pane_ParamLimits

0xc604,	// (0x0003a1c5) cell_popup_blid_pane

0xc62a,	// (0x0003a1eb) cell_popup_blid_pane_g1

0xc632,	// (0x0003a1f3) cell_popup_blid_pane_t1

0x50bc,	// (0x00032c7d) mup2_indicator_pane_ParamLimits

0x50bc,	// (0x00032c7d) mup2_indicator_pane

0xaec8,	// (0x00038a89) mup2_visualizer_osc_pane

0xc3da,	// (0x00039f9b) mup2_visualizer_spec_pane_ParamLimits

0xc3da,	// (0x00039f9b) mup2_visualizer_spec_pane

0x529e,	// (0x00032e5f) mup2_spec_half_pane

0x52a7,	// (0x00032e68) mup2_spec_half_pane_cp

0x52af,	// (0x00032e70) mup2_spec_bar_pane_ParamLimits

0x52af,	// (0x00032e70) mup2_spec_bar_pane

0xc37b,	// (0x00039f3c) mup2_spec_bar_pane_g1

0xc385,	// (0x00039f46) mup2_spec_bar_pane_g2

0x0001,

0xf611,	// (0x0003d1d2) mup2_spec_bar_pane_g

0x52cf,	// (0x00032e90) mup2_osc_middle_pane

0xc397,	// (0x00039f58) mup2_visualizer_osc_pane_g1

0x9bf8,	// (0x000377b9) popup_number_entry_window_t1_ParamLimits

0x9c0b,	// (0x000377cc) popup_number_entry_window_t2_ParamLimits

0x9c1d,	// (0x000377de) popup_number_entry_window_t3_ParamLimits

0x1a27,	// (0x0002f5e8) popup_number_entry_window_t5_ParamLimits

0x1a27,	// (0x0002f5e8) popup_number_entry_window_t5

0xf0d3,	// (0x0003cc94) popup_number_entry_window_t_ParamLimits

0x9c2f,	// (0x000377f0) text_title_cp2_ParamLimits

0x436d,	// (0x00031f2e) aid_hotspot_pointer_text2_pane

0x43c3,	// (0x00031f84) main_viewer_pane_g9_ParamLimits

0x43c3,	// (0x00031f84) main_viewer_pane_g9

0xa904,	// (0x000384c5) cale_month_pane_t1_ParamLimits

0xa941,	// (0x00038502) bg_cale_pane_ParamLimits

0xa959,	// (0x0003851a) list_cale_pane_ParamLimits

0xa96a,	// (0x0003852b) listscroll_cale_day_pane_t1

0xa97c,	// (0x0003853d) scroll_pane_cp09_ParamLimits

0x40a7,	// (0x00031c68) main_mup_eq_pane_t1_ParamLimits

0x40a7,	// (0x00031c68) main_mup_eq_pane_t1

0x40c1,	// (0x00031c82) main_mup_eq_pane_t2_ParamLimits

0x40c1,	// (0x00031c82) main_mup_eq_pane_t2

0x40db,	// (0x00031c9c) main_mup_eq_pane_t3_ParamLimits

0x40db,	// (0x00031c9c) main_mup_eq_pane_t3

0x40f7,	// (0x00031cb8) main_mup_eq_pane_t4_ParamLimits

0x40f7,	// (0x00031cb8) main_mup_eq_pane_t4

0x4113,	// (0x00031cd4) main_mup_eq_pane_t5_ParamLimits

0x4113,	// (0x00031cd4) main_mup_eq_pane_t5

0x412f,	// (0x00031cf0) main_mup_eq_pane_t6_ParamLimits

0x412f,	// (0x00031cf0) main_mup_eq_pane_t6

0x4143,	// (0x00031d04) main_mup_eq_pane_t7_ParamLimits

0x4143,	// (0x00031d04) main_mup_eq_pane_t7

0x4157,	// (0x00031d18) main_mup_eq_pane_t8_ParamLimits

0x4157,	// (0x00031d18) main_mup_eq_pane_t8

0x416b,	// (0x00031d2c) main_mup_eq_pane_t9_ParamLimits

0x416b,	// (0x00031d2c) main_mup_eq_pane_t9

0x4185,	// (0x00031d46) main_mup_eq_pane_t10_ParamLimits

0x4185,	// (0x00031d46) main_mup_eq_pane_t10

0x0009,

0xf460,	// (0x0003d021) main_mup_eq_pane_t_ParamLimits

0xf460,	// (0x0003d021) main_mup_eq_pane_t

0x4234,	// (0x00031df5) mup_equalizer_pane_cp5_ParamLimits

0x4248,	// (0x00031e09) mup_equalizer_pane_cp6_ParamLimits

0x425c,	// (0x00031e1d) mup_equalizer_pane_cp7_ParamLimits

0x1a1d,	// (0x0002f5de) main_gallery_pane

0xc3a0,	// (0x00039f61) smil2_volume_pane

0xc3a8,	// (0x00039f69) smil_status_volume_pane_g1_ParamLimits

0xc3bb,	// (0x00039f7c) smil_status_volume_pane_g2_ParamLimits

0x4daf,	// (0x00032970) smil_status_volume_pane_g3_ParamLimits

0xf616,	// (0x0003d1d7) smil_status_volume_pane_g_ParamLimits

0xc50d,	// (0x0003a0ce) bg_popup_window_pane_cp07_ParamLimits

0xc51b,	// (0x0003a0dc) blid_firmament_pane

0x52d8,	// (0x00032e99) aid_size_cell_gallery_ParamLimits

0x52d8,	// (0x00032e99) aid_size_cell_gallery

0x52ee,	// (0x00032eaf) grid_gallery_pane_ParamLimits

0x52ee,	// (0x00032eaf) grid_gallery_pane

0x5307,	// (0x00032ec8) cell_gallery_pane_ParamLimits

0x5307,	// (0x00032ec8) cell_gallery_pane

0xc640,	// (0x0003a201) bg_cell_gallery_focus_pane_ParamLimits

0xc640,	// (0x0003a201) bg_cell_gallery_focus_pane

0xc652,	// (0x0003a213) cell_gallery_pane_g1_ParamLimits

0xc652,	// (0x0003a213) cell_gallery_pane_g1

0x5350,	// (0x00032f11) cell_gallery_pane_g2_ParamLimits

0x5350,	// (0x00032f11) cell_gallery_pane_g2

0x535d,	// (0x00032f1e) cell_gallery_pane_g3_ParamLimits

0x535d,	// (0x00032f1e) cell_gallery_pane_g3

0xc65e,	// (0x0003a21f) cell_gallery_pane_g4_ParamLimits

0xc65e,	// (0x0003a21f) cell_gallery_pane_g4

0x0003,

0xf6c4,	// (0x0003d285) cell_gallery_pane_g_ParamLimits

0xf6c4,	// (0x0003d285) cell_gallery_pane_g

0xc66a,	// (0x0003a22b) bg_cell_gallery_focus_pane_g1

0xc672,	// (0x0003a233) bg_cell_gallery_focus_pane_g2

0xc67a,	// (0x0003a23b) bg_cell_gallery_focus_pane_g3

0xc682,	// (0x0003a243) bg_cell_gallery_focus_pane_g4

0xc68a,	// (0x0003a24b) bg_cell_gallery_focus_pane_g5

0xc692,	// (0x0003a253) bg_cell_gallery_focus_pane_g6

0xc69a,	// (0x0003a25b) bg_cell_gallery_focus_pane_g7

0xc6a2,	// (0x0003a263) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6cd,	// (0x0003d28e) bg_cell_gallery_focus_pane_g

0xc6aa,	// (0x0003a26b) aid_firma_cardinal

0xc6be,	// (0x0003a27f) blid_firmament_pane_t1

0xc6d5,	// (0x0003a296) blid_firmament_pane_t2

0xc6ec,	// (0x0003a2ad) blid_firmament_pane_t3

0xc703,	// (0x0003a2c4) blid_firmament_pane_t4

0x0003,

0xf6de,	// (0x0003d29f) blid_firmament_pane_t

0xc71a,	// (0x0003a2db) blid_sat_info_pane

0xc72a,	// (0x0003a2eb) blid_sat_info_pane_g1

0xc72a,	// (0x0003a2eb) blid_sat_info_pane_g2

0x0001,

0xf6e7,	// (0x0003d2a8) blid_sat_info_pane_g

0xc734,	// (0x0003a2f5) blid_sat_info_pane_t1

0xc742,	// (0x0003a303) smil2_volume_content_pane

0xc74b,	// (0x0003a30c) smil2_volume_pane_g1

0xa3b4,	// (0x00037f75) smil2_volume_content_pane_g1

0xc753,	// (0x0003a314) smil2_volume_content_pane_g2

0xc75c,	// (0x0003a31d) smil2_volume_content_pane_g3

0xc765,	// (0x0003a326) smil2_volume_content_pane_g4

0xc76e,	// (0x0003a32f) smil2_volume_content_pane_g5

0xc777,	// (0x0003a338) smil2_volume_content_pane_g6

0xc780,	// (0x0003a341) smil2_volume_content_pane_g7

0xc789,	// (0x0003a34a) smil2_volume_content_pane_g8

0xc792,	// (0x0003a353) smil2_volume_content_pane_g9

0xc79b,	// (0x0003a35c) smil2_volume_content_pane_g10

0x0009,

0xf6ec,	// (0x0003d2ad) smil2_volume_content_pane_g

0x20ee,	// (0x0002fcaf) cale_week_day_heading_pane_t1_ParamLimits

0x2138,	// (0x0002fcf9) cale_week_day_heading_pane_t2_ParamLimits

0x2187,	// (0x0002fd48) cale_week_day_heading_pane_t3_ParamLimits

0x21d6,	// (0x0002fd97) cale_week_day_heading_pane_t4_ParamLimits

0x2225,	// (0x0002fde6) cale_week_day_heading_pane_t5_ParamLimits

0x227c,	// (0x0002fe3d) cale_week_day_heading_pane_t6_ParamLimits

0x22d3,	// (0x0002fe94) cale_week_day_heading_pane_t7_ParamLimits

0xf1d8,	// (0x0003cd99) cale_week_day_heading_pane_t_ParamLimits

0xa4a7,	// (0x00038068) bg_cale_side_pane_ParamLimits

0x0557,	// (0x0002e118) cale_week_time_pane_t1_ParamLimits

0x0571,	// (0x0002e132) cale_week_time_pane_t2_ParamLimits

0x058b,	// (0x0002e14c) cale_week_time_pane_t3_ParamLimits

0x05a5,	// (0x0002e166) cale_week_time_pane_t4_ParamLimits

0x05bf,	// (0x0002e180) cale_week_time_pane_t5_ParamLimits

0x05d9,	// (0x0002e19a) cale_week_time_pane_t6_ParamLimits

0x05f3,	// (0x0002e1b4) cale_week_time_pane_t7_ParamLimits

0x0613,	// (0x0002e1d4) cale_week_time_pane_t8_ParamLimits

0xf1e7,	// (0x0003cda8) cale_week_time_pane_t_ParamLimits

0x231d,	// (0x0002fede) cell_cale_week_pane_g2_ParamLimits

0xa4a7,	// (0x00038068) bg_cale_side_pane_cp01_ParamLimits

0x35ba,	// (0x0003117b) cale_month_week_pane_t1_ParamLimits

0x35d3,	// (0x00031194) cale_month_week_pane_t2_ParamLimits

0x35ec,	// (0x000311ad) cale_month_week_pane_t3_ParamLimits

0x3605,	// (0x000311c6) cale_month_week_pane_t4_ParamLimits

0x361e,	// (0x000311df) cale_month_week_pane_t5_ParamLimits

0x3637,	// (0x000311f8) cale_month_week_pane_t6_ParamLimits

0xf2c0,	// (0x0003ce81) cale_month_week_pane_t_ParamLimits

0x37a8,	// (0x00031369) cell_cale_month_pane_g1_ParamLimits

0x1a1d,	// (0x0002f5de) main_cale_event_viewer_pane

0x9bce,	// (0x0003778f) listscroll_cale_event_viewer_pane

0xc7a4,	// (0x0003a365) list_cale_ev_pane

0xc7ac,	// (0x0003a36d) scroll_pane_cp023

0xc7b8,	// (0x0003a379) field_cale_ev_pane_ParamLimits

0xc7b8,	// (0x0003a379) field_cale_ev_pane

0xc7d4,	// (0x0003a395) field_cale_ev_content_pane_ParamLimits

0xc7d4,	// (0x0003a395) field_cale_ev_content_pane

0xc7e0,	// (0x0003a3a1) field_cale_ev_pane_g1_ParamLimits

0xc7e0,	// (0x0003a3a1) field_cale_ev_pane_g1

0xc7ec,	// (0x0003a3ad) field_cale_ev_pane_g2_ParamLimits

0xc7ec,	// (0x0003a3ad) field_cale_ev_pane_g2

0xc804,	// (0x0003a3c5) field_cale_ev_pane_g3_ParamLimits

0xc804,	// (0x0003a3c5) field_cale_ev_pane_g3

0x0002,

0xf701,	// (0x0003d2c2) field_cale_ev_pane_g_ParamLimits

0xf701,	// (0x0003d2c2) field_cale_ev_pane_g

0xc81c,	// (0x0003a3dd) field_cale_ev_pane_t1_ParamLimits

0xc81c,	// (0x0003a3dd) field_cale_ev_pane_t1

0xc833,	// (0x0003a3f4) field_cale_ev_content_pane_t1_ParamLimits

0xc833,	// (0x0003a3f4) field_cale_ev_content_pane_t1

0x4313,	// (0x00031ed4) bg_button_pane_cp01

0x1e31,	// (0x0002f9f2) listscroll_cale_week_pane_ParamLimits

0xa451,	// (0x00038012) popup_toolbar_window_cp01

0xa478,	// (0x00038039) listscroll_cale_week_pane_t1_ParamLimits

0x1e31,	// (0x0002f9f2) listscroll_cale_day_pane_ParamLimits

0xa451,	// (0x00038012) popup_toolbar_window_cp02

0xa96a,	// (0x0003852b) listscroll_cale_day_pane_t1_ParamLimits

0x0719,	// (0x0002e2da) main_cale_month_pane_ParamLimits

0x4cc9,	// (0x0003288a) popup_toolbar_window_cp03_ParamLimits

0x4cc9,	// (0x0003288a) popup_toolbar_window_cp03

0x45a3,	// (0x00032164) main_image_pane_g2_ParamLimits

0x45a3,	// (0x00032164) main_image_pane_g2

0x45b4,	// (0x00032175) main_image_pane_g3_ParamLimits

0x45b4,	// (0x00032175) main_image_pane_g3

0x0002,

0xf4f2,	// (0x0003d0b3) main_image_pane_g_ParamLimits

0xf4f2,	// (0x0003d0b3) main_image_pane_g

0xb198,	// (0x00038d59) main_image_pane_t1_ParamLimits

0x45c5,	// (0x00032186) main_image_pane_t2_ParamLimits

0x45c5,	// (0x00032186) main_image_pane_t2

0x45d7,	// (0x00032198) main_image_pane_t3_ParamLimits

0x45d7,	// (0x00032198) main_image_pane_t3

0x45ff,	// (0x000321c0) main_image_pane_t4_ParamLimits

0x45ff,	// (0x000321c0) main_image_pane_t4

0x0003,

0xf4f9,	// (0x0003d0ba) main_image_pane_t_ParamLimits

0xf4f9,	// (0x0003d0ba) main_image_pane_t

0x461f,	// (0x000321e0) popup_image_details_window_cp01

0x4629,	// (0x000321ea) popup_toobar_trans_pane_cp01_ParamLimits

0x4629,	// (0x000321ea) popup_toobar_trans_pane_cp01

0x082a,	// (0x0002e3eb) popup_image_details_window_ParamLimits

0x082a,	// (0x0002e3eb) popup_image_details_window

0x4c9c,	// (0x0003285d) popup_image_focus_window

0x09a7,	// (0x0002e568) camera2_autofocus_pane_ParamLimits

0x09a7,	// (0x0002e568) camera2_autofocus_pane

0x9bce,	// (0x0003778f) bg_popup_sub_pane_cp06

0xc850,	// (0x0003a411) popup_image_focus_window_g1

0xc858,	// (0x0003a419) popup_image_focus_window_g2

0xc860,	// (0x0003a421) popup_image_focus_window_g3

0xc868,	// (0x0003a429) popup_image_focus_window_g4

0x0003,

0xf708,	// (0x0003d2c9) popup_image_focus_window_g

0xc870,	// (0x0003a431) popup_image_focus_window_t1

0xc87e,	// (0x0003a43f) popup_image_focus_window_t2

0xc88e,	// (0x0003a44f) popup_image_focus_window_t3

0x0002,

0xf711,	// (0x0003d2d2) popup_image_focus_window_t

0xc89c,	// (0x0003a45d) camera2_autofocus_pane_g1

0xa66e,	// (0x0003822f) bg_tb_trans_pane_cp01

0xc8aa,	// (0x0003a46b) popup_image_details_window_g1

0xc8bd,	// (0x0003a47e) popup_image_details_window_g2

0x0002,

0xf723,	// (0x0003d2e4) popup_image_details_window_g

0xc8e6,	// (0x0003a4a7) popup_image_details_window_t1

0xc8f8,	// (0x0003a4b9) popup_image_details_window_t2

0xc911,	// (0x0003a4d2) popup_image_details_window_t3

0xc925,	// (0x0003a4e6) popup_image_details_window_t4

0xc940,	// (0x0003a501) popup_image_details_window_t5

0x0004,

0xf72a,	// (0x0003d2eb) popup_image_details_window_t

0xa316,	// (0x00037ed7) bg_calc_paper_pane_ParamLimits

0x1a1d,	// (0x0002f5de) grid_highlight_pane_cp013

0x1c82,	// (0x0002f843) list_calc_pane_ParamLimits

0x1c94,	// (0x0002f855) scroll_pane_cp024

0xa32a,	// (0x00037eeb) bg_calc_display_pane_ParamLimits

0x04b6,	// (0x0002e077) calc_display_pane_t1_ParamLimits

0x04c8,	// (0x0002e089) calc_display_pane_t2_ParamLimits

0x1c9c,	// (0x0002f85d) calc_display_pane_t3_ParamLimits

0xf15a,	// (0x0003cd1b) calc_display_pane_t_ParamLimits

0x052b,	// (0x0002e0ec) cell_calc_pane_g2

0x0001,

0xf177,	// (0x0003cd38) cell_calc_pane_g

0x0534,	// (0x0002e0f5) cell_calc_pane_t1

0xa389,	// (0x00037f4a) grid_highlight_pane_cp02_ParamLimits

0xa39f,	// (0x00037f60) toolbar_button_pane_cp01_ParamLimits

0xa39f,	// (0x00037f60) toolbar_button_pane_cp01

0xb1dd,	// (0x00038d9e) temp_image_control_pane_ParamLimits

0xb1dd,	// (0x00038d9e) temp_image_control_pane

0x1a03,	// (0x0002f5c4) main_mp3_pane

0xc95a,	// (0x0003a51b) temp_image_control_pane_g1_ParamLimits

0xc95a,	// (0x0003a51b) temp_image_control_pane_g1

0xc968,	// (0x0003a529) temp_image_control_pane_g2_ParamLimits

0xc968,	// (0x0003a529) temp_image_control_pane_g2

0xc97a,	// (0x0003a53b) temp_image_control_pane_g3_ParamLimits

0xc97a,	// (0x0003a53b) temp_image_control_pane_g3

0x539a,	// (0x00032f5b) temp_image_control_pane_g4_ParamLimits

0x539a,	// (0x00032f5b) temp_image_control_pane_g4

0x0003,

0xf735,	// (0x0003d2f6) temp_image_control_pane_g_ParamLimits

0xf735,	// (0x0003d2f6) temp_image_control_pane_g

0xc95a,	// (0x0003a51b) main_mp3_pane_g1

0x53ad,	// (0x00032f6e) main_mp3_pane_g2

0x0007,

0xf73e,	// (0x0003d2ff) main_mp3_pane_g

0xc9bd,	// (0x0003a57e) main_mp3_pane_t1

0xa503,	// (0x000380c4) main_camera_pane_g8_ParamLimits

0xa503,	// (0x000380c4) main_camera_pane_g8

0x25e0,	// (0x000301a1) main_video_pane_g7_ParamLimits

0x25e0,	// (0x000301a1) main_video_pane_g7

0x4fa8,	// (0x00032b69) main_camera2_pane_t7_ParamLimits

0x4fa8,	// (0x00032b69) main_camera2_pane_t7

0xa64b,	// (0x0003820c) scroll_pane_cp025_ParamLimits

0xa64b,	// (0x0003820c) scroll_pane_cp025

0xa65f,	// (0x00038220) scroll_pane_cp026_ParamLimits

0xa65f,	// (0x00038220) scroll_pane_cp026

0xa745,	// (0x00038306) wml_content_pane_ParamLimits

0x1a1d,	// (0x0002f5de) main_touch_calib_pane

0x5483,	// (0x00033044) main_touch_calib_pane_g1

0x5495,	// (0x00033056) main_touch_calib_pane_g2

0x54a7,	// (0x00033068) main_touch_calib_pane_g3

0x54b9,	// (0x0003307a) main_touch_calib_pane_g4

0x0003,

0xf75c,	// (0x0003d31d) main_touch_calib_pane_g

0x54cb,	// (0x0003308c) main_touch_calib_pane_t1

0x54e5,	// (0x000330a6) main_touch_calib_pane_t2

0x0004,

0xf765,	// (0x0003d326) main_touch_calib_pane_t

0xae09,	// (0x000389ca) mup_progress_pane_cp02

0xae28,	// (0x000389e9) navi_pane_g1

0xae8a,	// (0x00038a4b) navi_pane_mp_t3

0x1a03,	// (0x0002f5c4) main_mp3_pane_ParamLimits

0x4cde,	// (0x0003289f) navi_pane_ParamLimits

0xc95a,	// (0x0003a51b) main_mp3_pane_g1_ParamLimits

0x53ad,	// (0x00032f6e) main_mp3_pane_g2_ParamLimits

0x53bb,	// (0x00032f7c) main_mp3_pane_g3_ParamLimits

0x53bb,	// (0x00032f7c) main_mp3_pane_g3

0x53c9,	// (0x00032f8a) main_mp3_pane_g4_ParamLimits

0x53c9,	// (0x00032f8a) main_mp3_pane_g4

0xc98a,	// (0x0003a54b) main_mp3_pane_g5_ParamLimits

0xc98a,	// (0x0003a54b) main_mp3_pane_g5

0xc998,	// (0x0003a559) main_mp3_pane_g6_ParamLimits

0xc998,	// (0x0003a559) main_mp3_pane_g6

0xc9a5,	// (0x0003a566) main_mp3_pane_g7_ParamLimits

0xc9a5,	// (0x0003a566) main_mp3_pane_g7

0xc9b1,	// (0x0003a572) main_mp3_pane_g8_ParamLimits

0xc9b1,	// (0x0003a572) main_mp3_pane_g8

0xf73e,	// (0x0003d2ff) main_mp3_pane_g_ParamLimits

0x53d7,	// (0x00032f98) main_mp3_pane_t2

0x53e5,	// (0x00032fa6) main_mp3_pane_t3

0xc9cb,	// (0x0003a58c) main_mp3_pane_t4

0xc9e5,	// (0x0003a5a6) main_mp3_pane_t5

0x0005,

0xf74f,	// (0x0003d310) main_mp3_pane_t

0xc9f3,	// (0x0003a5b4) mup_progress_pane_cp01

0x1978,	// (0x0002f539) aid_zoom_text_secondary2

0xc7a4,	// (0x0003a365) list_cale_ev2_pane

0xc7ac,	// (0x0003a36d) scroll_pane_cp023_ParamLimits

0x553b,	// (0x000330fc) field_cale_ev2_pane_ParamLimits

0x553b,	// (0x000330fc) field_cale_ev2_pane

0xc9fb,	// (0x0003a5bc) field_cale_ev2_pane_g1_ParamLimits

0xc9fb,	// (0x0003a5bc) field_cale_ev2_pane_g1

0xca07,	// (0x0003a5c8) field_cale_ev2_pane_g2_ParamLimits

0xca07,	// (0x0003a5c8) field_cale_ev2_pane_g2

0xca1f,	// (0x0003a5e0) field_cale_ev2_pane_g3_ParamLimits

0xca1f,	// (0x0003a5e0) field_cale_ev2_pane_g3

0x0003,

0xf770,	// (0x0003d331) field_cale_ev2_pane_g_ParamLimits

0xf770,	// (0x0003d331) field_cale_ev2_pane_g

0xca43,	// (0x0003a604) field_cale_ev2_pane_t1_ParamLimits

0xca43,	// (0x0003a604) field_cale_ev2_pane_t1

0xca5a,	// (0x0003a61b) field_cale_ev2_pane_t2_ParamLimits

0xca5a,	// (0x0003a61b) field_cale_ev2_pane_t2

0x0001,

0xf779,	// (0x0003d33a) field_cale_ev2_pane_t_ParamLimits

0xf779,	// (0x0003d33a) field_cale_ev2_pane_t

0x4456,	// (0x00032017) main_postcard_pane_g5_ParamLimits

0x4456,	// (0x00032017) main_postcard_pane_g5

0x446c,	// (0x0003202d) main_postcard_pane_g6_ParamLimits

0x446c,	// (0x0003202d) main_postcard_pane_g6

0x239a,	// (0x0002ff5b) camera2_autofocus_pane_cp_ParamLimits

0x239a,	// (0x0002ff5b) camera2_autofocus_pane_cp

0x1a03,	// (0x0002f5c4) main_mup3_pane

0x557d,	// (0x0003313e) main_mup3_pane_g1_ParamLimits

0x557d,	// (0x0003313e) main_mup3_pane_g1

0x559f,	// (0x00033160) main_mup3_pane_g2_ParamLimits

0x559f,	// (0x00033160) main_mup3_pane_g2

0x5621,	// (0x000331e2) main_mup3_pane_g3_ParamLimits

0x5621,	// (0x000331e2) main_mup3_pane_g3

0x5667,	// (0x00033228) main_mup3_pane_g4_ParamLimits

0x5667,	// (0x00033228) main_mup3_pane_g4

0x56ad,	// (0x0003326e) main_mup3_pane_g5_ParamLimits

0x56ad,	// (0x0003326e) main_mup3_pane_g5

0x56f5,	// (0x000332b6) main_mup3_pane_g6_ParamLimits

0x56f5,	// (0x000332b6) main_mup3_pane_g6

0xca6f,	// (0x0003a630) main_mup3_pane_g7_ParamLimits

0xca6f,	// (0x0003a630) main_mup3_pane_g7

0x0007,

0xf789,	// (0x0003d34a) main_mup3_pane_g_ParamLimits

0xf789,	// (0x0003d34a) main_mup3_pane_g

0x5773,	// (0x00033334) main_mup3_pane_t1_ParamLimits

0x5773,	// (0x00033334) main_mup3_pane_t1

0x57e7,	// (0x000333a8) main_mup3_pane_t2_ParamLimits

0x57e7,	// (0x000333a8) main_mup3_pane_t2

0x58bb,	// (0x0003347c) main_mup3_pane_t4_ParamLimits

0x58bb,	// (0x0003347c) main_mup3_pane_t4

0x5911,	// (0x000334d2) main_mup3_pane_t5_ParamLimits

0x5911,	// (0x000334d2) main_mup3_pane_t5

0x59cd,	// (0x0003358e) main_mup3_pane_t6_ParamLimits

0x59cd,	// (0x0003358e) main_mup3_pane_t6

0x0005,

0xf79a,	// (0x0003d35b) main_mup3_pane_t_ParamLimits

0xf79a,	// (0x0003d35b) main_mup3_pane_t

0x5a85,	// (0x00033646) mup3_progress_pane_ParamLimits

0x5a85,	// (0x00033646) mup3_progress_pane

0x5b11,	// (0x000336d2) popup_mup3_control_window_ParamLimits

0x5b11,	// (0x000336d2) popup_mup3_control_window

0xca7d,	// (0x0003a63e) popup_mup3_text_window

0x5b43,	// (0x00033704) mup3_progress_pane_t1

0x5b62,	// (0x00033723) mup3_progress_pane_t2

0xca85,	// (0x0003a646) mup3_progress_pane_t3

0x0002,

0xf7a7,	// (0x0003d368) mup3_progress_pane_t

0xcaa2,	// (0x0003a663) mup_progress_pane_cp03

0x9bce,	// (0x0003778f) bg_tb_trans_pane_cp04

0x5b81,	// (0x00033742) mup3_volume_pane

0x5b89,	// (0x0003374a) popup_mup3_control_window_g1

0x5b92,	// (0x00033753) mup3_volume_pane_g1

0x5b9b,	// (0x0003375c) mup3_volume_pane_g2

0x5ba4,	// (0x00033765) mup3_volume_pane_g3

0x0002,

0xf7ae,	// (0x0003d36f) mup3_volume_pane_g

0x9bce,	// (0x0003778f) bg_tb_trans_pane_cp03

0xcab2,	// (0x0003a673) popup_mup3_text_window_g1

0xcaba,	// (0x0003a67b) popup_mup3_text_window_t1

0xa372,	// (0x00037f33) list_calc_item_pane_g1_ParamLimits

0xc47b,	// (0x0003a03c) mup_volume_pane_cp_g1

0x54ff,	// (0x000330c0) main_touch_calib_pane_t3

0x5513,	// (0x000330d4) main_touch_calib_pane_t4

0x5527,	// (0x000330e8) main_touch_calib_pane_t5

0x1964,	// (0x0002f525) aid_cell_size_toolbar2

0x196c,	// (0x0002f52d) aid_popup3_width_pane

0x1978,	// (0x0002f539) aid_zoom_text_msg_primary

0x068d,	// (0x0002e24e) vorec_t7

0xa336,	// (0x00037ef7) bg_calc_paper_pane_g1_ParamLimits

0xa342,	// (0x00037f03) bg_calc_paper_pane_g2_ParamLimits

0xa34e,	// (0x00037f0f) bg_calc_paper_pane_g3_ParamLimits

0xa35a,	// (0x00037f1b) bg_calc_paper_pane_g4_ParamLimits

0xa366,	// (0x00037f27) bg_calc_paper_pane_g5_ParamLimits

0x1cae,	// (0x0002f86f) bg_calc_paper_pane_g6_ParamLimits

0x1cbf,	// (0x0002f880) bg_calc_paper_pane_g7_ParamLimits

0x1cd0,	// (0x0002f891) bg_calc_paper_pane_g8_ParamLimits

0xf161,	// (0x0003cd22) bg_calc_paper_pane_g_ParamLimits

0x1ce3,	// (0x0002f8a4) calc_bg_paper_pane_g9_ParamLimits

0x24f2,	// (0x000300b3) image_qvga_pane_ParamLimits

0x24f2,	// (0x000300b3) image_qvga_pane

0xa246,	// (0x00037e07) bg_popup_sub_pane_cp04_ParamLimits

0xb114,	// (0x00038cd5) popup_mup_playback_window_g1_ParamLimits

0xb120,	// (0x00038ce1) popup_mup_playback_window_t1_ParamLimits

0xb135,	// (0x00038cf6) popup_mup_playback_window_t2_ParamLimits

0xf4ed,	// (0x0003d0ae) popup_mup_playback_window_t_ParamLimits

0x4fd6,	// (0x00032b97) main_mup2_pane_g3_ParamLimits

0x4fd6,	// (0x00032b97) main_mup2_pane_g3

0x28ff,	// (0x000304c0) popup_toolbar_window_cp04

0xb52a,	// (0x000390eb) popup_call2_audio_second_window_g3_ParamLimits

0xb52a,	// (0x000390eb) popup_call2_audio_second_window_g3

0xb934,	// (0x000394f5) popup_call2_audio_first_window_g4_ParamLimits

0xb934,	// (0x000394f5) popup_call2_audio_first_window_g4

0xbfb3,	// (0x00039b74) popup_call2_audio_in_window_g4_ParamLimits

0xbfb3,	// (0x00039b74) popup_call2_audio_in_window_g4

0x4585,	// (0x00032146) aid_area_sk_bg_cut_ParamLimits

0x4585,	// (0x00032146) aid_area_sk_bg_cut

0xb14a,	// (0x00038d0b) aid_area_sk_bg_cut_2_ParamLimits

0xb14a,	// (0x00038d0b) aid_area_sk_bg_cut_2

0x5340,	// (0x00032f01) aid_placing_details_win

0x5348,	// (0x00032f09) aid_placing_details_win_2

0xc89c,	// (0x0003a45d) camera2_autofocus_pane_g1_ParamLimits

0x0372,	// (0x0002df33) popup_fixed_preview_cale_window_ParamLimits

0x0372,	// (0x0002df33) popup_fixed_preview_cale_window

0xaed9,	// (0x00038a9a) navi_slider_pane_g3

0xaee2,	// (0x00038aa3) navi_slider_pane_g4

0xaeeb,	// (0x00038aac) navi_slider_pane_g5

0xaed9,	// (0x00038a9a) navi_slider_pane_g6

0x3e69,	// (0x00031a2a) navi_slider_pane_g7

0xb00c,	// (0x00038bcd) mup_scale_pane_g3

0xb015,	// (0x00038bd6) mup_scale_pane_g4

0xb01e,	// (0x00038bdf) mup_scale_pane_g5

0x4270,	// (0x00031e31) mup_scale_pane_g6

0x4279,	// (0x00031e3a) mup_scale_pane_g7

0xaed9,	// (0x00038a9a) cams2_slider_pane_g3

0xc4fd,	// (0x0003a0be) cams2_slider_pane_g4

0x528d,	// (0x00032e4e) cams2_slider_pane_g5

0xaed9,	// (0x00038a9a) cams2_slider_pane_g6

0x5295,	// (0x00032e56) cams2_slider_pane_g7

0xc72a,	// (0x0003a2eb) camera2_autofocus_pane_cp_g1

0xc314,	// (0x00039ed5) bg_popup_preview_window_pane_cp02_ParamLimits

0xc314,	// (0x00039ed5) bg_popup_preview_window_pane_cp02

0xcac8,	// (0x0003a689) list_fp_cale_pane_ParamLimits

0xcac8,	// (0x0003a689) list_fp_cale_pane

0xcad4,	// (0x0003a695) popup_fixed_preview_cale_window_t1_ParamLimits

0xcad4,	// (0x0003a695) popup_fixed_preview_cale_window_t1

0x5bad,	// (0x0003376e) popup_fixed_preview_cale_window_t2_ParamLimits

0x5bad,	// (0x0003376e) popup_fixed_preview_cale_window_t2

0x5bc2,	// (0x00033783) popup_fixed_preview_cale_window_t3_ParamLimits

0x5bc2,	// (0x00033783) popup_fixed_preview_cale_window_t3

0x0002,

0xf7b5,	// (0x0003d376) popup_fixed_preview_cale_window_t_ParamLimits

0xf7b5,	// (0x0003d376) popup_fixed_preview_cale_window_t

0x5bd7,	// (0x00033798) list_single_fp_cale_pane_ParamLimits

0x5bd7,	// (0x00033798) list_single_fp_cale_pane

0xcaf2,	// (0x0003a6b3) list_single_fp_cale_pane_g1_ParamLimits

0xcaf2,	// (0x0003a6b3) list_single_fp_cale_pane_g1

0xcafe,	// (0x0003a6bf) list_single_fp_cale_pane_g2_ParamLimits

0xcafe,	// (0x0003a6bf) list_single_fp_cale_pane_g2

0x0002,

0xf7bc,	// (0x0003d37d) list_single_fp_cale_pane_g_ParamLimits

0xf7bc,	// (0x0003d37d) list_single_fp_cale_pane_g

0xcb17,	// (0x0003a6d8) list_single_fp_cale_pane_t1_ParamLimits

0xcb17,	// (0x0003a6d8) list_single_fp_cale_pane_t1

0xcb29,	// (0x0003a6ea) list_single_fp_cale_pane_t2_ParamLimits

0xcb29,	// (0x0003a6ea) list_single_fp_cale_pane_t2

0x0001,

0xf7c3,	// (0x0003d384) list_single_fp_cale_pane_t_ParamLimits

0xf7c3,	// (0x0003d384) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x1a1d,	// (0x0002f5de) main_dialer_pane

0x5bee,	// (0x000337af) aid_cell_size_keypad

0x5bf8,	// (0x000337b9) dialer_ne_pane

0x5c00,	// (0x000337c1) grid_dialer_command_1_pane

0x5c08,	// (0x000337c9) grid_dialer_command_2_pane

0x5c10,	// (0x000337d1) grid_dialer_keypad_pane

0x5c22,	// (0x000337e3) bg_popup_call_pane_cp06_ParamLimits

0x5c22,	// (0x000337e3) bg_popup_call_pane_cp06

0x5c2e,	// (0x000337ef) dialer_ne_clear_pane_ParamLimits

0x5c2e,	// (0x000337ef) dialer_ne_clear_pane

0xcb5c,	// (0x0003a71d) dialer_ne_pane_g1

0xcb64,	// (0x0003a725) dialer_ne_pane_t1_ParamLimits

0xcb64,	// (0x0003a725) dialer_ne_pane_t1

0x5c3a,	// (0x000337fb) dialer_ne_pane_t2_ParamLimits

0x5c3a,	// (0x000337fb) dialer_ne_pane_t2

0x5c64,	// (0x00033825) dialer_ne_pane_t3_ParamLimits

0x5c64,	// (0x00033825) dialer_ne_pane_t3

0x0002,

0xf7c8,	// (0x0003d389) dialer_ne_pane_t_ParamLimits

0xf7c8,	// (0x0003d389) dialer_ne_pane_t

0x5c94,	// (0x00033855) dialer_ne_pane_t3_copy1_ParamLimits

0x5c94,	// (0x00033855) dialer_ne_pane_t3_copy1

0x5cc3,	// (0x00033884) cell_dialer_keypad_pane_ParamLimits

0x5cc3,	// (0x00033884) cell_dialer_keypad_pane

0x5cda,	// (0x0003389b) cell_dialer_command_1_pane_ParamLimits

0x5cda,	// (0x0003389b) cell_dialer_command_1_pane

0x5cf0,	// (0x000338b1) cell_dialer_command_2_pane_ParamLimits

0x5cf0,	// (0x000338b1) cell_dialer_command_2_pane

0xcb76,	// (0x0003a737) bg_button_pane_cp02_ParamLimits

0xcb76,	// (0x0003a737) bg_button_pane_cp02

0x5cff,	// (0x000338c0) cell_dialer_keypad_pane_g1_ParamLimits

0x5cff,	// (0x000338c0) cell_dialer_keypad_pane_g1

0xcb76,	// (0x0003a737) bg_button_pane_cp03_ParamLimits

0xcb76,	// (0x0003a737) bg_button_pane_cp03

0x5d14,	// (0x000338d5) cell_dialer_command_1_pane_g1_ParamLimits

0x5d14,	// (0x000338d5) cell_dialer_command_1_pane_g1

0xcb82,	// (0x0003a743) bg_button_pane_cp04

0x5d27,	// (0x000338e8) cell_dialer_command_2_pane_g1

0xaec8,	// (0x00038a89) bg_button_pane_cp06

0xcb8a,	// (0x0003a74b) dialer_ne_clear_pane_g1

0x3d90,	// (0x00031951) navi_pane_g2

0x3dbe,	// (0x0003197f) navi_pane_g3

0x0002,

0xf3f0,	// (0x0003cfb1) navi_pane_g

0x3de7,	// (0x000319a8) navi_pane_mv_g2

0x3e0e,	// (0x000319cf) navi_pane_mv_g5

0x3e16,	// (0x000319d7) navi_pane_mv_t1

0xa32a,	// (0x00037eeb) main_clock2_pane

0x5d74,	// (0x00033935) main_clock2_list_pane_ParamLimits

0x5d74,	// (0x00033935) main_clock2_list_pane

0x5dae,	// (0x0003396f) main_clock2_pane_t1_ParamLimits

0x5dae,	// (0x0003396f) main_clock2_pane_t1

0x5dec,	// (0x000339ad) main_clock2_pane_t2_ParamLimits

0x5dec,	// (0x000339ad) main_clock2_pane_t2

0x0004,

0xf7cf,	// (0x0003d390) main_clock2_pane_t_ParamLimits

0xf7cf,	// (0x0003d390) main_clock2_pane_t

0x5e8a,	// (0x00033a4b) popup_clock_analogue_window_cp03_ParamLimits

0x5e8a,	// (0x00033a4b) popup_clock_analogue_window_cp03

0x5eaf,	// (0x00033a70) popup_clock_digital_window_cp02_ParamLimits

0x5eaf,	// (0x00033a70) popup_clock_digital_window_cp02

0x5f22,	// (0x00033ae3) main_clock2_list_single_pane_ParamLimits

0x5f22,	// (0x00033ae3) main_clock2_list_single_pane

0xaec8,	// (0x00038a89) list_highlight_pane_cp05

0xcba8,	// (0x0003a769) main_clock2_list_single_pane_t1

0x28ff,	// (0x000304c0) popup_toolbar_window_cp04_ParamLimits

0x536a,	// (0x00032f2b) camera2_autofocus_pane_g2_ParamLimits

0x536a,	// (0x00032f2b) camera2_autofocus_pane_g2

0x5376,	// (0x00032f37) camera2_autofocus_pane_g3_ParamLimits

0x5376,	// (0x00032f37) camera2_autofocus_pane_g3

0x5382,	// (0x00032f43) camera2_autofocus_pane_g4_ParamLimits

0x5382,	// (0x00032f43) camera2_autofocus_pane_g4

0x538e,	// (0x00032f4f) camera2_autofocus_pane_g5_ParamLimits

0x538e,	// (0x00032f4f) camera2_autofocus_pane_g5

0x0004,

0xf718,	// (0x0003d2d9) camera2_autofocus_pane_g_ParamLimits

0xf718,	// (0x0003d2d9) camera2_autofocus_pane_g

0x555d,	// (0x0003311e) camera2_autofocus_pane_cp_g2

0x5565,	// (0x00033126) camera2_autofocus_pane_cp_g3

0x556d,	// (0x0003312e) camera2_autofocus_pane_cp_g4

0x5575,	// (0x00033136) camera2_autofocus_pane_cp_g5

0x0004,

0xf77e,	// (0x0003d33f) camera2_autofocus_pane_cp_g

0x5c1a,	// (0x000337db) popup_dialer_spcha_window

0x9bce,	// (0x0003778f) bg_popup_sub_pane_cp07

0xcbb6,	// (0x0003a777) list_spcha_pane

0xcbbe,	// (0x0003a77f) list_single_spcha_pane_ParamLimits

0xcbbe,	// (0x0003a77f) list_single_spcha_pane

0x9bce,	// (0x0003778f) list_highlight_pane_cp06

0xcbcf,	// (0x0003a790) list_single_spcha_pane_t1

0xbd5d,	// (0x0003991e) popup_call2_audio_out_window_g4_ParamLimits

0xbd5d,	// (0x0003991e) popup_call2_audio_out_window_g4

0x1a1d,	// (0x0002f5de) main_imed2_pane

0x4ca4,	// (0x00032865) popup_imed_adjust2_window

0x0842,	// (0x0002e403) popup_imed_trans_window_ParamLimits

0x0842,	// (0x0002e403) popup_imed_trans_window

0xc566,	// (0x0003a127) popup_blid_sat_info2_window_t1

0xc574,	// (0x0003a135) popup_blid_sat_info2_window_t2

0x000a,

0xf6ad,	// (0x0003d26e) popup_blid_sat_info2_window_t

0x5f54,	// (0x00033b15) aid_size_cell_colour_35

0x5f74,	// (0x00033b35) aid_size_cell_colour_112

0x5f94,	// (0x00033b55) aid_size_cell_effect

0xc320,	// (0x00039ee1) bg_tb_trans_pane_cp02

0xa9ef,	// (0x000385b0) heading_imed_pane

0x5fb4,	// (0x00033b75) listscroll_imed_pane

0xcbdd,	// (0x0003a79e) heading_imed_pane_g1

0xcbe5,	// (0x0003a7a6) heading_imed_pane_t1

0xcbf3,	// (0x0003a7b4) grid_imed_colour_35_pane_ParamLimits

0xcbf3,	// (0x0003a7b4) grid_imed_colour_35_pane

0x5fc0,	// (0x00033b81) grid_imed_effect_pane

0xcc0b,	// (0x0003a7cc) list_imed_aspect_pane

0x5fd6,	// (0x00033b97) scroll_pane_cp027_ParamLimits

0x5fd6,	// (0x00033b97) scroll_pane_cp027

0x5fe7,	// (0x00033ba8) cell_imed_effect_pane_ParamLimits

0x5fe7,	// (0x00033ba8) cell_imed_effect_pane

0xcc13,	// (0x0003a7d4) cell_imed_colour_pane_ParamLimits

0xcc13,	// (0x0003a7d4) cell_imed_colour_pane

0xcc55,	// (0x0003a816) cell_imed_colour_pane_g1_ParamLimits

0xcc55,	// (0x0003a816) cell_imed_colour_pane_g1

0xcc66,	// (0x0003a827) hgihlgiht_grid_pane_cp016_ParamLimits

0xcc66,	// (0x0003a827) hgihlgiht_grid_pane_cp016

0x600e,	// (0x00033bcf) cell_imed_effect_pane_g1

0x6016,	// (0x00033bd7) grid_highlight_pane_cp017

0xcc77,	// (0x0003a838) list_imed_single_pane_ParamLimits

0xcc77,	// (0x0003a838) list_imed_single_pane

0x9bce,	// (0x0003778f) list_highlight_pane_cp07

0xcc8d,	// (0x0003a84e) list_imed_aspect_pane_comp1_t1

0xc320,	// (0x00039ee1) bg_tb_trans_pane_cp05

0xccaf,	// (0x0003a870) popup_imed_adjust2_window_g1

0xccd6,	// (0x0003a897) popup_imed_adjust2_window_t1

0xccee,	// (0x0003a8af) slider_imed_adjust_pane

0xcd02,	// (0x0003a8c3) slider_imed_adjust_pane_g1

0xcd12,	// (0x0003a8d3) slider_imed_adjust_pane_g2

0xcd22,	// (0x0003a8e3) slider_imed_adjust_pane_g3

0xcd33,	// (0x0003a8f4) slider_imed_adjust_pane_g4

0x0003,

0xf7ec,	// (0x0003d3ad) slider_imed_adjust_pane_g

0x601f,	// (0x00033be0) aid_size_cell_clipart2

0x602b,	// (0x00033bec) grid_imed_clipart_pane

0xcd44,	// (0x0003a905) scroll_pane_cp031

0x6035,	// (0x00033bf6) cell_imed_clipart_pane_ParamLimits

0x6035,	// (0x00033bf6) cell_imed_clipart_pane

0x6059,	// (0x00033c1a) cell_imed_clipart_pane_g1

0x9bce,	// (0x0003778f) grid_highlight_pane_cp014

0x5d89,	// (0x0003394a) main_clock2_pane_g1_ParamLimits

0x5d89,	// (0x0003394a) main_clock2_pane_g1

0x5ecd,	// (0x00033a8e) aid_call2_pane_cp10

0x5edf,	// (0x00033aa0) aid_call_pane_cp10

0xadfd,	// (0x000389be) popup_clock_analogue_window_cp10_g1

0xadfd,	// (0x000389be) popup_clock_analogue_window_cp10_g2

0x5ef1,	// (0x00033ab2) popup_clock_analogue_window_cp10_g3

0x5ef1,	// (0x00033ab2) popup_clock_analogue_window_cp10_g4

0xadfd,	// (0x000389be) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7da,	// (0x0003d39b) popup_clock_analogue_window_cp10_g

0x5f03,	// (0x00033ac4) popup_clock_analogue_window_cp10_t1

0x0e82,	// (0x0002ea43) clock_digital_number_pane_cp10_ParamLimits

0x0e82,	// (0x0002ea43) clock_digital_number_pane_cp10

0x0e9a,	// (0x0002ea5b) clock_digital_number_pane_cp11_ParamLimits

0x0e9a,	// (0x0002ea5b) clock_digital_number_pane_cp11

0x0eb2,	// (0x0002ea73) clock_digital_number_pane_cp12_ParamLimits

0x0eb2,	// (0x0002ea73) clock_digital_number_pane_cp12

0x0eca,	// (0x0002ea8b) clock_digital_number_pane_cp13_ParamLimits

0x0eca,	// (0x0002ea8b) clock_digital_number_pane_cp13

0x0ee2,	// (0x0002eaa3) clock_digital_separator_pane_cp10_ParamLimits

0x0ee2,	// (0x0002eaa3) clock_digital_separator_pane_cp10

0x5f34,	// (0x00033af5) popup_clock_digital_window_cp02_t1_ParamLimits

0x5f34,	// (0x00033af5) popup_clock_digital_window_cp02_t1

0xa23e,	// (0x00037dff) clock_digital_number_pane_cp10_g1

0xa23e,	// (0x00037dff) clock_digital_number_pane_cp10_g2

0x0001,

0xf7f5,	// (0x0003d3b6) clock_digital_number_pane_cp10_g

0xa23e,	// (0x00037dff) clock_digital_separator_pane_cp10_g1

0xa23e,	// (0x00037dff) clock_digital_separator_pane_g2_cp10

0xae98,	// (0x00038a59) navi_pane_vded_g4

0xaea1,	// (0x00038a62) navi_pane_vded_g5

0xaeaa,	// (0x00038a6b) navi_pane_vded_t1

0x1a1d,	// (0x0002f5de) main_vded_pane

0x6062,	// (0x00033c23) main_vded_pane_g1

0x606c,	// (0x00033c2d) main_vded_pane_g2

0x6076,	// (0x00033c37) main_vded_pane_g3

0x0002,

0xf7fa,	// (0x0003d3bb) main_vded_pane_g

0x6080,	// (0x00033c41) main_vded_pane_t1

0x608e,	// (0x00033c4f) main_vded_pane_t2

0x0001,

0xf801,	// (0x0003d3c2) main_vded_pane_t

0x609c,	// (0x00033c5d) vded_slider_pane

0x60a6,	// (0x00033c67) vded_video_pane

0xcd4c,	// (0x0003a90d) vded_video_pane_g1

0x60b0,	// (0x00033c71) vded_video_pane_g2

0xc72a,	// (0x0003a2eb) vded_video_pane_g3

0x0002,

0xf806,	// (0x0003d3c7) vded_video_pane_g

0xcd56,	// (0x0003a917) vded_slider_pane_g1

0xcd5f,	// (0x0003a920) vded_slider_pane_g2

0xcd68,	// (0x0003a929) vded_slider_pane_g3

0xcd71,	// (0x0003a932) vded_slider_pane_g4

0xcd7a,	// (0x0003a93b) vded_slider_pane_g5

0x0004,

0xf80d,	// (0x0003d3ce) vded_slider_pane_g

0x5af9,	// (0x000336ba) mup3_rocker_pane_ParamLimits

0x5af9,	// (0x000336ba) mup3_rocker_pane

0x60b9,	// (0x00033c7a) mup3_control_keys_pane_g1

0x60c1,	// (0x00033c82) mup3_control_keys_pane_g2

0x60c9,	// (0x00033c8a) mup3_control_keys_pane_g3

0x60d1,	// (0x00033c92) mup3_control_keys_pane_g4

0x0003,

0xf818,	// (0x0003d3d9) mup3_control_keys_pane_g

0x03a9,	// (0x0002df6a) popup_toolbar2_fixed_window_cp01_ParamLimits

0x03a9,	// (0x0002df6a) popup_toolbar2_fixed_window_cp01

0x5b2d,	// (0x000336ee) popup_toolbar2_fixed_window_cp02_ParamLimits

0x5b2d,	// (0x000336ee) popup_toolbar2_fixed_window_cp02

0xb69c,	// (0x0003925d) popup_call2_audio_second_window_t4_ParamLimits

0xb69c,	// (0x0003925d) popup_call2_audio_second_window_t4

0xbbca,	// (0x0003978b) popup_call2_audio_first_window_t6_ParamLimits

0xbbca,	// (0x0003978b) popup_call2_audio_first_window_t6

0xbe60,	// (0x00039a21) popup_call2_audio_out_window_t6_ParamLimits

0xbe60,	// (0x00039a21) popup_call2_audio_out_window_t6

0x1a1d,	// (0x0002f5de) main_vitu_pane

0x60e1,	// (0x00033ca2) aid_size_cell_itu_ParamLimits

0x60e1,	// (0x00033ca2) aid_size_cell_itu

0xa66e,	// (0x0003822f) bg_popup_window_pane_cp08_ParamLimits

0xa66e,	// (0x0003822f) bg_popup_window_pane_cp08

0x60f7,	// (0x00033cb8) field_vitu_entry_pane_ParamLimits

0x60f7,	// (0x00033cb8) field_vitu_entry_pane

0x610e,	// (0x00033ccf) grid_vitu_function_pane_ParamLimits

0x610e,	// (0x00033ccf) grid_vitu_function_pane

0x6129,	// (0x00033cea) grid_vitu_itu_pane_ParamLimits

0x6129,	// (0x00033cea) grid_vitu_itu_pane

0x6147,	// (0x00033d08) cell_vitu_itu_pane_ParamLimits

0x6147,	// (0x00033d08) cell_vitu_itu_pane

0x616b,	// (0x00033d2c) cell_vitu_function_pane_ParamLimits

0x616b,	// (0x00033d2c) cell_vitu_function_pane

0xa66e,	// (0x0003822f) bg_popup_sub_pane_cp08_ParamLimits

0xa66e,	// (0x0003822f) bg_popup_sub_pane_cp08

0x6186,	// (0x00033d47) field_vitu_entry_pane_t1_ParamLimits

0x6186,	// (0x00033d47) field_vitu_entry_pane_t1

0xcd9b,	// (0x0003a95c) field_vitu_entry_pane_t2_ParamLimits

0xcd9b,	// (0x0003a95c) field_vitu_entry_pane_t2

0x0001,

0xf826,	// (0x0003d3e7) field_vitu_entry_pane_t_ParamLimits

0xf826,	// (0x0003d3e7) field_vitu_entry_pane_t

0xcdb8,	// (0x0003a979) bg_button_pane_cp05_ParamLimits

0xcdb8,	// (0x0003a979) bg_button_pane_cp05

0x61a5,	// (0x00033d66) cell_vitu_itu_pane_g1

0x61bd,	// (0x00033d7e) cell_vitu_itu_pane_t1_ParamLimits

0x61bd,	// (0x00033d7e) cell_vitu_itu_pane_t1

0x61cf,	// (0x00033d90) cell_vitu_itu_pane_t2_ParamLimits

0x61cf,	// (0x00033d90) cell_vitu_itu_pane_t2

0x0002,

0xf82b,	// (0x0003d3ec) cell_vitu_itu_pane_t_ParamLimits

0xf82b,	// (0x0003d3ec) cell_vitu_itu_pane_t

0xcdc6,	// (0x0003a987) bg_button_pane_cp07

0x6212,	// (0x00033dd3) cell_vitu_function_pane_g1

0x1baa,	// (0x0002f76b) main_calc_pane_g1

0x0209,	// (0x0002ddca) aid_visual_content_pane

0x1a1d,	// (0x0002f5de) main_vradio_pane

0x621b,	// (0x00033ddc) main_vradio_pane_g1_ParamLimits

0x621b,	// (0x00033ddc) main_vradio_pane_g1

0xcdd0,	// (0x0003a991) main_vradio_pane_g2_ParamLimits

0xcdd0,	// (0x0003a991) main_vradio_pane_g2

0x0001,

0xf832,	// (0x0003d3f3) main_vradio_pane_g_ParamLimits

0xf832,	// (0x0003d3f3) main_vradio_pane_g

0x6234,	// (0x00033df5) main_vradio_pane_t1_ParamLimits

0x6234,	// (0x00033df5) main_vradio_pane_t1

0x6249,	// (0x00033e0a) main_vradio_pane_t2_ParamLimits

0x6249,	// (0x00033e0a) main_vradio_pane_t2

0xcddd,	// (0x0003a99e) main_vradio_pane_t3_ParamLimits

0xcddd,	// (0x0003a99e) main_vradio_pane_t3

0x0002,

0xf837,	// (0x0003d3f8) main_vradio_pane_t_ParamLimits

0xf837,	// (0x0003d3f8) main_vradio_pane_t

0x625e,	// (0x00033e1f) vradio_rocker_control_pane_ParamLimits

0x625e,	// (0x00033e1f) vradio_rocker_control_pane

0x6270,	// (0x00033e31) vradio_station_info_pane_ParamLimits

0x6270,	// (0x00033e31) vradio_station_info_pane

0xcdf1,	// (0x0003a9b2) vradio_frequency_info_pane_ParamLimits

0xcdf1,	// (0x0003a9b2) vradio_frequency_info_pane

0xc72a,	// (0x0003a2eb) vradio_station_info_pane_g1

0xce00,	// (0x0003a9c1) vradio_station_info_pane_t1_ParamLimits

0xce00,	// (0x0003a9c1) vradio_station_info_pane_t1

0xce22,	// (0x0003a9e3) vradio_station_info_pane_t2_ParamLimits

0xce22,	// (0x0003a9e3) vradio_station_info_pane_t2

0x0001,

0xf83e,	// (0x0003d3ff) vradio_station_info_pane_t_ParamLimits

0xf83e,	// (0x0003d3ff) vradio_station_info_pane_t

0xce34,	// (0x0003a9f5) vradio_tuning_pane

0xce3c,	// (0x0003a9fd) vradio_rocker_control_pane_g1

0xce44,	// (0x0003aa05) vradio_rocker_control_pane_g2

0xce4c,	// (0x0003aa0d) vradio_rocker_control_pane_g3

0xce54,	// (0x0003aa15) vradio_rocker_control_pane_g4

0xce5c,	// (0x0003aa1d) vradio_rocker_control_pane_g5

0x0004,

0xf843,	// (0x0003d404) vradio_rocker_control_pane_g

0x6282,	// (0x00033e43) vradio_frequency_info_pane_g1

0xce64,	// (0x0003aa25) vradio_frequency_info_pane_t1_ParamLimits

0xce64,	// (0x0003aa25) vradio_frequency_info_pane_t1

0x628c,	// (0x00033e4d) vradio_tuning_pane_g1

0x6297,	// (0x00033e58) vradio_tuning_pane_t1

0x19c1,	// (0x0002f582) area_side_right_pane_ParamLimits

0x19c1,	// (0x0002f582) area_side_right_pane

0xc2db,	// (0x00039e9c) status_small_pane_g1

0xc2e3,	// (0x00039ea4) status_small_pane_g2

0xc2ec,	// (0x00039ead) status_small_pane_g3

0xc2f5,	// (0x00039eb6) status_small_pane_g4

0x0003,

0xf603,	// (0x0003d1c4) status_small_pane_g

0xc2fe,	// (0x00039ebf) status_small_pane_t1

0x1a1d,	// (0x0002f5de) main_video3_pane

0xce78,	// (0x0003aa39) cams_zoom_vslider_pane

0xce80,	// (0x0003aa41) image3_wide_pane_ParamLimits

0xce80,	// (0x0003aa41) image3_wide_pane

0xce9a,	// (0x0003aa5b) image3_wide_small_pane

0xcea6,	// (0x0003aa67) main_video3_pane_g1_ParamLimits

0xcea6,	// (0x0003aa67) main_video3_pane_g1

0xcec2,	// (0x0003aa83) main_video3_pane_g2_ParamLimits

0xcec2,	// (0x0003aa83) main_video3_pane_g2

0x0001,

0xf84e,	// (0x0003d40f) main_video3_pane_g_ParamLimits

0xf84e,	// (0x0003d40f) main_video3_pane_g

0xcede,	// (0x0003aa9f) main_video3_pane_t1_ParamLimits

0xcede,	// (0x0003aa9f) main_video3_pane_t1

0xcf09,	// (0x0003aaca) main_video3_pane_t2_ParamLimits

0xcf09,	// (0x0003aaca) main_video3_pane_t2

0xcf34,	// (0x0003aaf5) main_video3_pane_t3_ParamLimits

0xcf34,	// (0x0003aaf5) main_video3_pane_t3

0x0002,

0xf853,	// (0x0003d414) main_video3_pane_t_ParamLimits

0xf853,	// (0x0003d414) main_video3_pane_t

0xcf61,	// (0x0003ab22) cams_zoom_vslider_pane_g1

0xcf6a,	// (0x0003ab2b) cams_zoom_vslider_pane_g2

0x0001,

0xf85a,	// (0x0003d41b) cams_zoom_vslider_pane_g

0xcf72,	// (0x0003ab33) small_slider_vertical_pane

0xc72a,	// (0x0003a2eb) small_slider_vertical_pane_g1

0xc72a,	// (0x0003a2eb) small_slider_vertical_pane_g2

0xcf7a,	// (0x0003ab3b) small_slider_vertical_pane_g3

0x0002,

0xf85f,	// (0x0003d420) small_slider_vertical_pane_g

0x1a1d,	// (0x0002f5de) main_hwr_training_pane

0xcf83,	// (0x0003ab44) hwr_training_instruct_pane_ParamLimits

0xcf83,	// (0x0003ab44) hwr_training_instruct_pane

0x62a6,	// (0x00033e67) hwr_training_navi_pane_ParamLimits

0x62a6,	// (0x00033e67) hwr_training_navi_pane

0x62c5,	// (0x00033e86) hwr_training_write_pane_ParamLimits

0x62c5,	// (0x00033e86) hwr_training_write_pane

0x9bce,	// (0x0003778f) bg_frame_shadow_pane

0xcfba,	// (0x0003ab7b) hwr_training_write_pane_g1

0xcfc2,	// (0x0003ab83) hwr_training_write_pane_g2

0xcfca,	// (0x0003ab8b) hwr_training_write_pane_g3

0xcfd2,	// (0x0003ab93) hwr_training_write_pane_g4

0xcfda,	// (0x0003ab9b) hwr_training_write_pane_g5

0xcfe2,	// (0x0003aba3) hwr_training_write_pane_g6

0xcfea,	// (0x0003abab) hwr_training_write_pane_g7

0x0006,

0xf866,	// (0x0003d427) hwr_training_write_pane_g

0x6300,	// (0x00033ec1) hwr_training_navi_pane_g1_ParamLimits

0x6300,	// (0x00033ec1) hwr_training_navi_pane_g1

0x6312,	// (0x00033ed3) hwr_training_navi_pane_g2_ParamLimits

0x6312,	// (0x00033ed3) hwr_training_navi_pane_g2

0x6324,	// (0x00033ee5) hwr_training_navi_pane_g3_ParamLimits

0x6324,	// (0x00033ee5) hwr_training_navi_pane_g3

0x6334,	// (0x00033ef5) hwr_training_navi_pane_g4_ParamLimits

0x6334,	// (0x00033ef5) hwr_training_navi_pane_g4

0x0004,

0xf875,	// (0x0003d436) hwr_training_navi_pane_g_ParamLimits

0xf875,	// (0x0003d436) hwr_training_navi_pane_g

0x6341,	// (0x00033f02) hwr_training_navi_pane_t1

0x634f,	// (0x00033f10) list_single_hwr_training_instruct_pane_ParamLimits

0x634f,	// (0x00033f10) list_single_hwr_training_instruct_pane

0xcff2,	// (0x0003abb3) list_single_hwr_training_instruct_pane_t1

0xc66a,	// (0x0003a22b) bg_frame_shadow_pane_g1

0xd001,	// (0x0003abc2) bg_frame_shadow_pane_g2

0xd009,	// (0x0003abca) bg_frame_shadow_pane_g3

0xd011,	// (0x0003abd2) bg_frame_shadow_pane_g4

0xd019,	// (0x0003abda) bg_frame_shadow_pane_g5

0xd021,	// (0x0003abe2) bg_frame_shadow_pane_g6

0xd029,	// (0x0003abea) bg_frame_shadow_pane_g7

0xa3f5,	// (0x00037fb6) bg_frame_shadow_pane_g8

0x0007,

0xf880,	// (0x0003d441) bg_frame_shadow_pane_g

0x1a1d,	// (0x0002f5de) main_video_tele_dialer_pane

0x0f09,	// (0x0002eaca) aid_size_cell_video_keypad_ParamLimits

0x0f09,	// (0x0002eaca) aid_size_cell_video_keypad

0x0f23,	// (0x0002eae4) grid_video_dialer_keypad_pane_ParamLimits

0x0f23,	// (0x0002eae4) grid_video_dialer_keypad_pane

0x0f71,	// (0x0002eb32) video_down_pane_cp_ParamLimits

0x0f71,	// (0x0002eb32) video_down_pane_cp

0x0f87,	// (0x0002eb48) cell_video_dialer_keypad_pane_ParamLimits

0x0f87,	// (0x0002eb48) cell_video_dialer_keypad_pane

0xd031,	// (0x0003abf2) bg_button_pane_cp08_ParamLimits

0xd031,	// (0x0003abf2) bg_button_pane_cp08

0x6382,	// (0x00033f43) cell_video_dialer_keypad_pane_g1_ParamLimits

0x6382,	// (0x00033f43) cell_video_dialer_keypad_pane_g1

0x5ae3,	// (0x000336a4) mup3_rocker2_pane_ParamLimits

0x5ae3,	// (0x000336a4) mup3_rocker2_pane

0xc72a,	// (0x0003a2eb) mup3_rocker2_pane_g1

0x072b,	// (0x0002e2ec) main_dialer2_pane

0x1a1d,	// (0x0002f5de) main_mp4_pane

0x63c5,	// (0x00033f86) main_mp4_pane_g1_ParamLimits

0x63c5,	// (0x00033f86) main_mp4_pane_g1

0x63c5,	// (0x00033f86) main_mp4_pane_g2_ParamLimits

0x63c5,	// (0x00033f86) main_mp4_pane_g2

0x0fa9,	// (0x0002eb6a) main_mp4_pane_g3_ParamLimits

0x0fa9,	// (0x0002eb6a) main_mp4_pane_g3

0x63d3,	// (0x00033f94) main_mp4_pane_g4_ParamLimits

0x63d3,	// (0x00033f94) main_mp4_pane_g4

0x63fb,	// (0x00033fbc) main_mp4_pane_g5_ParamLimits

0x63fb,	// (0x00033fbc) main_mp4_pane_g5

0x0005,

0xf8a0,	// (0x0003d461) main_mp4_pane_g_ParamLimits

0xf8a0,	// (0x0003d461) main_mp4_pane_g

0x644b,	// (0x0003400c) main_mp4_pane_t1_ParamLimits

0x644b,	// (0x0003400c) main_mp4_pane_t1

0x64a7,	// (0x00034068) main_mp4_pane_t2_ParamLimits

0x64a7,	// (0x00034068) main_mp4_pane_t2

0xd03d,	// (0x0003abfe) main_mp4_pane_t3_ParamLimits

0xd03d,	// (0x0003abfe) main_mp4_pane_t3

0x64f9,	// (0x000340ba) main_mp4_pane_t4_ParamLimits

0x64f9,	// (0x000340ba) main_mp4_pane_t4

0x0003,

0xf8ad,	// (0x0003d46e) main_mp4_pane_t_ParamLimits

0xf8ad,	// (0x0003d46e) main_mp4_pane_t

0x653d,	// (0x000340fe) mp4_progress_pane_ParamLimits

0x653d,	// (0x000340fe) mp4_progress_pane

0x6587,	// (0x00034148) mp4_rocker_pane_ParamLimits

0x6587,	// (0x00034148) mp4_rocker_pane

0xd065,	// (0x0003ac26) mp4_progress_pane_t1

0xd07e,	// (0x0003ac3f) mp4_progress_pane_t2

0x0001,

0xf8b6,	// (0x0003d477) mp4_progress_pane_t

0xd097,	// (0x0003ac58) mup_progress_pane_cp04

0xd563,	// (0x0003b124) mp4_rocker_pane_g1

0x0fe5,	// (0x0002eba6) aid_cell_size_keypad2_ParamLimits

0x0fe5,	// (0x0002eba6) aid_cell_size_keypad2

0x0ffb,	// (0x0002ebbc) dialer2_ne_pane_ParamLimits

0x0ffb,	// (0x0002ebbc) dialer2_ne_pane

0x1015,	// (0x0002ebd6) grid_dialer2_keypad_pane_ParamLimits

0x1015,	// (0x0002ebd6) grid_dialer2_keypad_pane

0xc50d,	// (0x0003a0ce) bg_popup_call_pane_cp07_ParamLimits

0xc50d,	// (0x0003a0ce) bg_popup_call_pane_cp07

0x65a7,	// (0x00034168) dialer2_ne_pane_t1_ParamLimits

0x65a7,	// (0x00034168) dialer2_ne_pane_t1

0x1033,	// (0x0002ebf4) cell_dialer2_keypad_pane_ParamLimits

0x1033,	// (0x0002ebf4) cell_dialer2_keypad_pane

0xd0b5,	// (0x0003ac76) bg_button_pane_pane_cp04_ParamLimits

0xd0b5,	// (0x0003ac76) bg_button_pane_pane_cp04

0x65e4,	// (0x000341a5) cell_dialer2_keypad_pane_g1_ParamLimits

0x65e4,	// (0x000341a5) cell_dialer2_keypad_pane_g1

0x27d3,	// (0x00030394) aid_placing_vt_set_content_ParamLimits

0x27d3,	// (0x00030394) aid_placing_vt_set_content

0x27fb,	// (0x000303bc) aid_placing_vt_set_title_ParamLimits

0x27fb,	// (0x000303bc) aid_placing_vt_set_title

0x1a1d,	// (0x0002f5de) main_image3_pane

0x10b3,	// (0x0002ec74) area_side_right_pane_cp01_ParamLimits

0x10b3,	// (0x0002ec74) area_side_right_pane_cp01

0x63c5,	// (0x00033f86) main_image3_pane_g1_ParamLimits

0x63c5,	// (0x00033f86) main_image3_pane_g1

0x10ca,	// (0x0002ec8b) main_image3_pane_g2_ParamLimits

0x10ca,	// (0x0002ec8b) main_image3_pane_g2

0x10f2,	// (0x0002ecb3) main_image3_pane_g3_ParamLimits

0x10f2,	// (0x0002ecb3) main_image3_pane_g3

0x111c,	// (0x0002ecdd) main_image3_pane_g4_ParamLimits

0x111c,	// (0x0002ecdd) main_image3_pane_g4

0x0003,

0xf8c5,	// (0x0003d486) main_image3_pane_g_ParamLimits

0xf8c5,	// (0x0003d486) main_image3_pane_g

0x1146,	// (0x0002ed07) main_image3_pane_t1_ParamLimits

0x1146,	// (0x0002ed07) main_image3_pane_t1

0x119e,	// (0x0002ed5f) main_image3_pane_t2_ParamLimits

0x119e,	// (0x0002ed5f) main_image3_pane_t2

0x11f0,	// (0x0002edb1) main_image3_pane_t3_ParamLimits

0x11f0,	// (0x0002edb1) main_image3_pane_t3

0x0003,

0xf8ce,	// (0x0003d48f) main_image3_pane_t_ParamLimits

0xf8ce,	// (0x0003d48f) main_image3_pane_t

0xa66e,	// (0x0003822f) grid_sctrl_middle_pane_cp01_ParamLimits

0xa66e,	// (0x0003822f) grid_sctrl_middle_pane_cp01

0x667e,	// (0x0003423f) cell_sctrl_middle_pane_cp01_ParamLimits

0x667e,	// (0x0003423f) cell_sctrl_middle_pane_cp01

0x669b,	// (0x0003425c) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x669b,	// (0x0003425c) cell_sctrl_middle_pane_cp01_g1

0x1a1d,	// (0x0002f5de) main_call4_pane

0x66b1,	// (0x00034272) aid_size_button_call4_ParamLimits

0x66b1,	// (0x00034272) aid_size_button_call4

0x66e2,	// (0x000342a3) call4_windows_pane_ParamLimits

0x66e2,	// (0x000342a3) call4_windows_pane

0x6702,	// (0x000342c3) grid_call4_button_pane_ParamLimits

0x6702,	// (0x000342c3) grid_call4_button_pane

0xd0c1,	// (0x0003ac82) call4_windows_conf_pane

0xd0d6,	// (0x0003ac97) popup_call4_audio_first_window_ParamLimits

0xd0d6,	// (0x0003ac97) popup_call4_audio_first_window

0xd122,	// (0x0003ace3) popup_call4_audio_second_window_ParamLimits

0xd122,	// (0x0003ace3) popup_call4_audio_second_window

0xd136,	// (0x0003acf7) popup_call4_audio_wait_window_ParamLimits

0xd136,	// (0x0003acf7) popup_call4_audio_wait_window

0x672f,	// (0x000342f0) cell_call4_button_pane_ParamLimits

0x672f,	// (0x000342f0) cell_call4_button_pane

0x6758,	// (0x00034319) bg_button_pane_cp09_ParamLimits

0x6758,	// (0x00034319) bg_button_pane_cp09

0x6764,	// (0x00034325) cell_call4_button_pane_g1_ParamLimits

0x6764,	// (0x00034325) cell_call4_button_pane_g1

0x678a,	// (0x0003434b) cell_call4_button_pane_t1_ParamLimits

0x678a,	// (0x0003434b) cell_call4_button_pane_t1

0xd17e,	// (0x0003ad3f) popup_call4_audio_conf_window_ParamLimits

0xd17e,	// (0x0003ad3f) popup_call4_audio_conf_window

0x5b43,	// (0x00033704) mup3_progress_pane_t1_ParamLimits

0x5b62,	// (0x00033723) mup3_progress_pane_t2_ParamLimits

0xca85,	// (0x0003a646) mup3_progress_pane_t3_ParamLimits

0xf7a7,	// (0x0003d368) mup3_progress_pane_t_ParamLimits

0xcaa2,	// (0x0003a663) mup_progress_pane_cp03_ParamLimits

0x60d9,	// (0x00033c9a) mup3_control_keys_pane_g4_copy1

0x656b,	// (0x0003412c) mp4_rocker2_pane_ParamLimits

0x656b,	// (0x0003412c) mp4_rocker2_pane

0xd192,	// (0x0003ad53) mp4_rocker2_pane_g1

0xd19a,	// (0x0003ad5b) mp4_rocker2_pane_g2

0x67b0,	// (0x00034371) mp4_rocker2_pane_g3

0x67b8,	// (0x00034379) mp4_rocker2_pane_g4

0x67c0,	// (0x00034381) mp4_rocker2_pane_g5

0x0004,

0xf8d7,	// (0x0003d498) mp4_rocker2_pane_g

0x1a1d,	// (0x0002f5de) main_camera4_pane

0x1a1d,	// (0x0002f5de) main_video4_pane

0x0f3f,	// (0x0002eb00) main_video_tele_dialer_pane_t1_ParamLimits

0x0f3f,	// (0x0002eb00) main_video_tele_dialer_pane_t1

0x0f58,	// (0x0002eb19) main_video_tele_dialer_pane_t2_ParamLimits

0x0f58,	// (0x0002eb19) main_video_tele_dialer_pane_t2

0x0001,

0xf891,	// (0x0003d452) main_video_tele_dialer_pane_t_ParamLimits

0xf891,	// (0x0003d452) main_video_tele_dialer_pane_t

0x1290,	// (0x0002ee51) cam4_autofocus_pane_ParamLimits

0x1290,	// (0x0002ee51) cam4_autofocus_pane

0x12a6,	// (0x0002ee67) cam4_image_uncrop_pane_ParamLimits

0x12a6,	// (0x0002ee67) cam4_image_uncrop_pane

0x12c0,	// (0x0002ee81) cam4_indicators_pane_ParamLimits

0x12c0,	// (0x0002ee81) cam4_indicators_pane

0x12eb,	// (0x0002eeac) main_camera4_pane_g1_ParamLimits

0x12eb,	// (0x0002eeac) main_camera4_pane_g1

0x12fd,	// (0x0002eebe) main_camera4_pane_g2_ParamLimits

0x12fd,	// (0x0002eebe) main_camera4_pane_g2

0x1310,	// (0x0002eed1) main_camera4_pane_g3_ParamLimits

0x1310,	// (0x0002eed1) main_camera4_pane_g3

0x1323,	// (0x0002eee4) main_camera4_pane_g4_ParamLimits

0x1323,	// (0x0002eee4) main_camera4_pane_g4

0x1336,	// (0x0002eef7) main_camera4_pane_g5_ParamLimits

0x1336,	// (0x0002eef7) main_camera4_pane_g5

0x0005,

0xf8e2,	// (0x0003d4a3) main_camera4_pane_g_ParamLimits

0xf8e2,	// (0x0003d4a3) main_camera4_pane_g

0x135a,	// (0x0002ef1b) main_camera4_pane_t1_ParamLimits

0x135a,	// (0x0002ef1b) main_camera4_pane_t1

0x67f8,	// (0x000343b9) bg_tb_trans_pane_cp06

0x680e,	// (0x000343cf) cam4_indicators_pane_g1

0x681f,	// (0x000343e0) cam4_indicators_pane_g2

0x0002,

0xf8fd,	// (0x0003d4be) cam4_indicators_pane_g

0x683d,	// (0x000343fe) cam4_indicators_pane_t1

0x13aa,	// (0x0002ef6b) main_video4_pane_g1_ParamLimits

0x13aa,	// (0x0002ef6b) main_video4_pane_g1

0x13b9,	// (0x0002ef7a) main_video4_pane_g2_ParamLimits

0x13b9,	// (0x0002ef7a) main_video4_pane_g2

0x13c8,	// (0x0002ef89) main_video4_pane_g3_ParamLimits

0x13c8,	// (0x0002ef89) main_video4_pane_g3

0x13d7,	// (0x0002ef98) main_video4_pane_g4_ParamLimits

0x13d7,	// (0x0002ef98) main_video4_pane_g4

0x0004,

0xf904,	// (0x0003d4c5) main_video4_pane_g_ParamLimits

0xf904,	// (0x0003d4c5) main_video4_pane_g

0x13f5,	// (0x0002efb6) vid4_indicators_pane_ParamLimits

0x13f5,	// (0x0002efb6) vid4_indicators_pane

0x1423,	// (0x0002efe4) video4_image_uncrop_cif_pane_ParamLimits

0x1423,	// (0x0002efe4) video4_image_uncrop_cif_pane

0x143d,	// (0x0002effe) video4_image_uncrop_nhd_pane_ParamLimits

0x143d,	// (0x0002effe) video4_image_uncrop_nhd_pane

0x12a6,	// (0x0002ee67) video4_image_uncrop_vga_pane_ParamLimits

0x12a6,	// (0x0002ee67) video4_image_uncrop_vga_pane

0x1a03,	// (0x0002f5c4) bg_tb_trans_pane_cp07

0x6867,	// (0x00034428) vid4_indicators_pane_g1

0x687b,	// (0x0003443c) vid4_indicators_pane_g2

0x688f,	// (0x00034450) vid4_indicators_pane_g3

0x0004,

0xf90f,	// (0x0003d4d0) vid4_indicators_pane_g

0x68bc,	// (0x0003447d) vid4_indicators_pane_t1

0x68d3,	// (0x00034494) cam4_autofocus_pane_g1

0x68db,	// (0x0003449c) cam4_autofocus_pane_g2

0x68e3,	// (0x000344a4) cam4_autofocus_pane_g3

0x0002,

0xf91a,	// (0x0003d4db) cam4_autofocus_pane_g

0x68eb,	// (0x000344ac) cam4_autofocus_pane_g3_copy1

0x6366,	// (0x00033f27) video_down_pane_cp_t1

0x6374,	// (0x00033f35) video_down_pane_cp_t2

0x0001,

0xf896,	// (0x0003d457) video_down_pane_cp_t

0x1a03,	// (0x0002f5c4) popup_vitu2_window_ParamLimits

0x1a03,	// (0x0002f5c4) popup_vitu2_window

0x1451,	// (0x0002f012) aid_size_cell2_itu2_ParamLimits

0x1451,	// (0x0002f012) aid_size_cell2_itu2

0x1477,	// (0x0002f038) aid_size_cell_itu2_ParamLimits

0x1477,	// (0x0002f038) aid_size_cell_itu2

0x14d3,	// (0x0002f094) bg_popup_window_pane_cp09_ParamLimits

0x14d3,	// (0x0002f094) bg_popup_window_pane_cp09

0x14e1,	// (0x0002f0a2) field_vitu2_entry_pane_ParamLimits

0x14e1,	// (0x0002f0a2) field_vitu2_entry_pane

0x1507,	// (0x0002f0c8) grid_vitu2_function_pane_ParamLimits

0x1507,	// (0x0002f0c8) grid_vitu2_function_pane

0x1558,	// (0x0002f119) grid_vitu2_itu_pane_ParamLimits

0x1558,	// (0x0002f119) grid_vitu2_itu_pane

0x15e9,	// (0x0002f1aa) cell_vitu2_itu_pane_ParamLimits

0x15e9,	// (0x0002f1aa) cell_vitu2_itu_pane

0x160d,	// (0x0002f1ce) cell_vitu2_function_pane_ParamLimits

0x160d,	// (0x0002f1ce) cell_vitu2_function_pane

0xd1a2,	// (0x0003ad63) bg_popup_call_pane_cp08_ParamLimits

0xd1a2,	// (0x0003ad63) bg_popup_call_pane_cp08

0xd1bb,	// (0x0003ad7c) field_vitu2_entry_pane_g1

0xd1c7,	// (0x0003ad88) field_vitu2_entry_pane_g2

0x0002,

0xf921,	// (0x0003d4e2) field_vitu2_entry_pane_g

0xd1e1,	// (0x0003ada2) field_vitu2_entry_pane_t1_ParamLimits

0xd1e1,	// (0x0003ada2) field_vitu2_entry_pane_t1

0xd211,	// (0x0003add2) field_vitu2_entry_pane_t2_ParamLimits

0xd211,	// (0x0003add2) field_vitu2_entry_pane_t2

0x0001,

0xf928,	// (0x0003d4e9) field_vitu2_entry_pane_t_ParamLimits

0xf928,	// (0x0003d4e9) field_vitu2_entry_pane_t

0x164c,	// (0x0002f20d) bg_button_pane_cp010_ParamLimits

0x164c,	// (0x0002f20d) bg_button_pane_cp010

0x165a,	// (0x0002f21b) cell_vitu2_itu_pane_g1

0x1678,	// (0x0002f239) cell_vitu2_itu_pane_t1_ParamLimits

0x1678,	// (0x0002f239) cell_vitu2_itu_pane_t1

0x16de,	// (0x0002f29f) cell_vitu2_itu_pane_t2_ParamLimits

0x16de,	// (0x0002f29f) cell_vitu2_itu_pane_t2

0x0002,

0xf932,	// (0x0003d4f3) cell_vitu2_itu_pane_t_ParamLimits

0xf932,	// (0x0003d4f3) cell_vitu2_itu_pane_t

0x1a03,	// (0x0002f5c4) bg_button_pane_cp011

0x17ba,	// (0x0002f37b) cell_vitu2_function_pane_g1

0x1a1d,	// (0x0002f5de) main_myfav_hc_pane

0x1240,	// (0x0002ee01) popup_image3_note_pane_ParamLimits

0x1240,	// (0x0002ee01) popup_image3_note_pane

0x125c,	// (0x0002ee1d) popup_image3_tool_bar_pane_ParamLimits

0x125c,	// (0x0002ee1d) popup_image3_tool_bar_pane

0x1762,	// (0x0002f323) cell_vitu2_itu_pane_t3_ParamLimits

0x1762,	// (0x0002f323) cell_vitu2_itu_pane_t3

0x9bce,	// (0x0003778f) bg_popup_trans_pane

0xd236,	// (0x0003adf7) grid_image3_tool_bar_pane

0xd240,	// (0x0003ae01) bg_popup_trans_pane_g1

0xa82b,	// (0x000383ec) bg_popup_trans_pane_g2

0xd248,	// (0x0003ae09) bg_popup_trans_pane_g3

0xd250,	// (0x0003ae11) bg_popup_trans_pane_g4

0xd258,	// (0x0003ae19) bg_popup_trans_pane_g5

0xd260,	// (0x0003ae21) bg_popup_trans_pane_g6

0xd268,	// (0x0003ae29) bg_popup_trans_pane_g7

0xd270,	// (0x0003ae31) bg_popup_trans_pane_g8

0xa80b,	// (0x000383cc) bg_popup_trans_pane_g9

0x0008,

0xf939,	// (0x0003d4fa) bg_popup_trans_pane_g

0xd278,	// (0x0003ae39) cell_image3_tool_bar_pane_ParamLimits

0xd278,	// (0x0003ae39) cell_image3_tool_bar_pane

0xc72a,	// (0x0003a2eb) cell_image3_tool_bar_pane_g1

0x9bce,	// (0x0003778f) bg_popup_trans_pane_cp1

0xd28c,	// (0x0003ae4d) popup_image3_note_pane_t1

0xd29a,	// (0x0003ae5b) popup_image3_note_pane_t2

0xd2a8,	// (0x0003ae69) popup_image3_note_pane_t3

0x0002,

0xf94c,	// (0x0003d50d) popup_image3_note_pane_t

0xd2b6,	// (0x0003ae77) popup_image3_note_pane_t3_copy1

0x68f3,	// (0x000344b4) bg_myfav_hc_instruction_pane_ParamLimits

0x68f3,	// (0x000344b4) bg_myfav_hc_instruction_pane

0x6909,	// (0x000344ca) cell_myfav_contact_pane_ParamLimits

0x6909,	// (0x000344ca) cell_myfav_contact_pane

0x6927,	// (0x000344e8) cell_myfav_contact_pane_cp1_ParamLimits

0x6927,	// (0x000344e8) cell_myfav_contact_pane_cp1

0x693f,	// (0x00034500) cell_myfav_contact_pane_cp2_ParamLimits

0x693f,	// (0x00034500) cell_myfav_contact_pane_cp2

0x6957,	// (0x00034518) cell_myfav_contact_pane_cp3_ParamLimits

0x6957,	// (0x00034518) cell_myfav_contact_pane_cp3

0x696e,	// (0x0003452f) cell_myfav_contact_pane_cp4_ParamLimits

0x696e,	// (0x0003452f) cell_myfav_contact_pane_cp4

0x6986,	// (0x00034547) cell_myfav_contact_pane_cp5_ParamLimits

0x6986,	// (0x00034547) cell_myfav_contact_pane_cp5

0x699a,	// (0x0003455b) cell_myfav_contact_pane_cp6_ParamLimits

0x699a,	// (0x0003455b) cell_myfav_contact_pane_cp6

0x69b0,	// (0x00034571) cell_myfav_contact_pane_cp7_ParamLimits

0x69b0,	// (0x00034571) cell_myfav_contact_pane_cp7

0xd2c4,	// (0x0003ae85) listscroll_gen_pane_cp05

0x69ca,	// (0x0003458b) main_myfav_hc_pane_g1_ParamLimits

0x69ca,	// (0x0003458b) main_myfav_hc_pane_g1

0x69e4,	// (0x000345a5) main_myfav_hc_pane_g2_ParamLimits

0x69e4,	// (0x000345a5) main_myfav_hc_pane_g2

0x0002,

0xf953,	// (0x0003d514) main_myfav_hc_pane_g_ParamLimits

0xf953,	// (0x0003d514) main_myfav_hc_pane_g

0x6a16,	// (0x000345d7) main_myfav_hc_pane_t1_ParamLimits

0x6a16,	// (0x000345d7) main_myfav_hc_pane_t1

0xd2cd,	// (0x0003ae8e) main_myfav_hc_pane_t2_ParamLimits

0xd2cd,	// (0x0003ae8e) main_myfav_hc_pane_t2

0xd2df,	// (0x0003aea0) main_myfav_hc_pane_t3_ParamLimits

0xd2df,	// (0x0003aea0) main_myfav_hc_pane_t3

0x6a2d,	// (0x000345ee) main_myfav_hc_pane_t4_ParamLimits

0x6a2d,	// (0x000345ee) main_myfav_hc_pane_t4

0x0004,

0xf95a,	// (0x0003d51b) main_myfav_hc_pane_t_ParamLimits

0xf95a,	// (0x0003d51b) main_myfav_hc_pane_t

0xc72a,	// (0x0003a2eb) bg_myfav_hc_instruction_pane_g1

0xd2f1,	// (0x0003aeb2) cell_myfav_contact_pane_g1_ParamLimits

0xd2f1,	// (0x0003aeb2) cell_myfav_contact_pane_g1

0xd2f1,	// (0x0003aeb2) cell_myfav_contact_pane_g2_ParamLimits

0xd2f1,	// (0x0003aeb2) cell_myfav_contact_pane_g2

0xd2fd,	// (0x0003aebe) cell_myfav_contact_pane_g3_ParamLimits

0xd2fd,	// (0x0003aebe) cell_myfav_contact_pane_g3

0xca6f,	// (0x0003a630) cell_myfav_contact_pane_g4_ParamLimits

0xca6f,	// (0x0003a630) cell_myfav_contact_pane_g4

0xd30a,	// (0x0003aecb) cell_myfav_contact_pane_g5_ParamLimits

0xd30a,	// (0x0003aecb) cell_myfav_contact_pane_g5

0x0004,

0xf965,	// (0x0003d526) cell_myfav_contact_pane_g_ParamLimits

0xf965,	// (0x0003d526) cell_myfav_contact_pane_g

0x69fe,	// (0x000345bf) main_myfav_hc_pane_g3_ParamLimits

0x69fe,	// (0x000345bf) main_myfav_hc_pane_g3

0x030b,	// (0x0002decc) popup_adpt_find_window

0x6a55,	// (0x00034616) afind_page_pane_ParamLimits

0x6a55,	// (0x00034616) afind_page_pane

0x6a6a,	// (0x0003462b) aid_size_cell_afind_ParamLimits

0x6a6a,	// (0x0003462b) aid_size_cell_afind

0x6a88,	// (0x00034649) bg_popup_sub_pane_cp09_ParamLimits

0x6a88,	// (0x00034649) bg_popup_sub_pane_cp09

0x6a95,	// (0x00034656) find_pane_cp01_ParamLimits

0x6a95,	// (0x00034656) find_pane_cp01

0xd316,	// (0x0003aed7) grid_afind_control_pane_ParamLimits

0xd316,	// (0x0003aed7) grid_afind_control_pane

0x6aa2,	// (0x00034663) grid_afind_pane_ParamLimits

0x6aa2,	// (0x00034663) grid_afind_pane

0x6ac1,	// (0x00034682) cell_afind_pane_ParamLimits

0x6ac1,	// (0x00034682) cell_afind_pane

0xc72a,	// (0x0003a2eb) afind_page_pane_g1

0x6b22,	// (0x000346e3) afind_page_pane_g2

0x6b2b,	// (0x000346ec) afind_page_pane_g3

0x0002,

0xf970,	// (0x0003d531) afind_page_pane_g

0x6b34,	// (0x000346f5) afind_page_pane_t1

0xd32a,	// (0x0003aeeb) cell_afind_grid_control_pane_ParamLimits

0xd32a,	// (0x0003aeeb) cell_afind_grid_control_pane

0xd0b5,	// (0x0003ac76) bg_button_pane_cp69_ParamLimits

0xd0b5,	// (0x0003ac76) bg_button_pane_cp69

0x6b54,	// (0x00034715) cell_afind_pane_g1_ParamLimits

0x6b54,	// (0x00034715) cell_afind_pane_g1

0x6b61,	// (0x00034722) cell_afind_pane_t1_ParamLimits

0x6b61,	// (0x00034722) cell_afind_pane_t1

0xa54d,	// (0x0003810e) bg_button_pane_cp72

0xd339,	// (0x0003aefa) cell_afind_grid_control_pane_g1

0x4766,	// (0x00032327) aid_image_placing_area_ParamLimits

0x4766,	// (0x00032327) aid_image_placing_area

0xcd83,	// (0x0003a944) field_vitu_entry_pane_g1_ParamLimits

0xcd83,	// (0x0003a944) field_vitu_entry_pane_g1

0xcd8f,	// (0x0003a950) field_vitu_entry_pane_g2_ParamLimits

0xcd8f,	// (0x0003a950) field_vitu_entry_pane_g2

0x0001,

0xf821,	// (0x0003d3e2) field_vitu_entry_pane_g_ParamLimits

0xf821,	// (0x0003d3e2) field_vitu_entry_pane_g

0x61a5,	// (0x00033d66) cell_vitu_itu_pane_g1_ParamLimits

0x61f5,	// (0x00033db6) cell_vitu_itu_pane_t3_ParamLimits

0x61f5,	// (0x00033db6) cell_vitu_itu_pane_t3

0xd065,	// (0x0003ac26) mp4_progress_pane_t1_ParamLimits

0xd07e,	// (0x0003ac3f) mp4_progress_pane_t2_ParamLimits

0xf8b6,	// (0x0003d477) mp4_progress_pane_t_ParamLimits

0xd097,	// (0x0003ac58) mup_progress_pane_cp04_ParamLimits

0x6a41,	// (0x00034602) main_myfav_hc_pane_t5_ParamLimits

0x6a41,	// (0x00034602) main_myfav_hc_pane_t5

0x1980,	// (0x0002f541) aid_zoom_text_primary

0x030b,	// (0x0002decc) popup_adpt_find_window_ParamLimits

0x1a03,	// (0x0002f5c4) main_cam_set_pane

0x12d7,	// (0x0002ee98) cam4_zoom_pane_ParamLimits

0x12d7,	// (0x0002ee98) cam4_zoom_pane

0x6b73,	// (0x00034734) main_cam_set_pane_g1_ParamLimits

0x6b73,	// (0x00034734) main_cam_set_pane_g1

0x6b81,	// (0x00034742) main_cam_set_pane_g2_ParamLimits

0x6b81,	// (0x00034742) main_cam_set_pane_g2

0x0001,

0xf977,	// (0x0003d538) main_cam_set_pane_g_ParamLimits

0xf977,	// (0x0003d538) main_cam_set_pane_g

0x6ba2,	// (0x00034763) main_cam_set_pane_t1_ParamLimits

0x6ba2,	// (0x00034763) main_cam_set_pane_t1

0x6bbd,	// (0x0003477e) main_cset_listscroll_pane_ParamLimits

0x6bbd,	// (0x0003477e) main_cset_listscroll_pane

0x6bdd,	// (0x0003479e) main_cset_slider_pane_ParamLimits

0x6bdd,	// (0x0003479e) main_cset_slider_pane

0xd34a,	// (0x0003af0b) main_cset_list_pane_ParamLimits

0xd34a,	// (0x0003af0b) main_cset_list_pane

0xd35a,	// (0x0003af1b) scroll_pane_cp028

0x6c03,	// (0x000347c4) aid_area_touch_slider

0x6c1f,	// (0x000347e0) cset_slider_pane

0x6c49,	// (0x0003480a) main_cset_slider_pane_g1

0x6c5e,	// (0x0003481f) main_cset_slider_pane_g2

0x0011,

0xf97c,	// (0x0003d53d) main_cset_slider_pane_g

0xd393,	// (0x0003af54) main_cset_slider_pane_t1

0x6d1a,	// (0x000348db) main_cset_slider_pane_t2

0x6d34,	// (0x000348f5) main_cset_slider_pane_t3

0x6d4e,	// (0x0003490f) main_cset_slider_pane_t4

0x6d68,	// (0x00034929) main_cset_slider_pane_t5

0x6d82,	// (0x00034943) main_cset_slider_pane_t6

0x6d97,	// (0x00034958) main_cset_slider_pane_t7

0x000e,

0xf9a1,	// (0x0003d562) main_cset_slider_pane_t

0x6e9b,	// (0x00034a5c) cset_list_set_pane_ParamLimits

0x6e9b,	// (0x00034a5c) cset_list_set_pane

0x6eae,	// (0x00034a6f) aid_position_infowindow_above

0x6eb6,	// (0x00034a77) aid_position_infowindow_below

0x6ebe,	// (0x00034a7f) cset_list_set_pane_g1_ParamLimits

0x6ebe,	// (0x00034a7f) cset_list_set_pane_g1

0x6eca,	// (0x00034a8b) cset_list_set_pane_g3_ParamLimits

0x6eca,	// (0x00034a8b) cset_list_set_pane_g3

0x0001,

0xf9c0,	// (0x0003d581) cset_list_set_pane_g_ParamLimits

0xf9c0,	// (0x0003d581) cset_list_set_pane_g

0x6ed9,	// (0x00034a9a) cset_list_set_pane_t1_ParamLimits

0x6ed9,	// (0x00034a9a) cset_list_set_pane_t1

0xa66e,	// (0x0003822f) list_highlight_pane_cp021_ParamLimits

0xa66e,	// (0x0003822f) list_highlight_pane_cp021

0xb00c,	// (0x00038bcd) cset_slider_pane_g1

0xb01e,	// (0x00038bdf) cset_slider_pane_g2

0xb015,	// (0x00038bd6) cset_slider_pane_g3

0x0002,

0xf9c5,	// (0x0003d586) cset_slider_pane_g

0x6eee,	// (0x00034aaf) aid_area_touch_cam4_zoom

0x6ef6,	// (0x00034ab7) cam4_zoom_cont_pane

0x6efe,	// (0x00034abf) cam4_zoom_pane_g1

0x6f06,	// (0x00034ac7) cam4_zoom_pane_g2

0x17ce,	// (0x0002f38f) cam4_zoom_pane_g3

0x0002,

0xf9cc,	// (0x0003d58d) cam4_zoom_pane_g

0x6f0e,	// (0x00034acf) cam4_zoom_cont_pane_g1

0x6f17,	// (0x00034ad8) cam4_zoom_cont_pane_g2

0x6f20,	// (0x00034ae1) cam4_zoom_cont_pane_g3

0x0002,

0xf9d3,	// (0x0003d594) cam4_zoom_cont_pane_g

0x66cf,	// (0x00034290) call4_image_pane_ParamLimits

0x66cf,	// (0x00034290) call4_image_pane

0xd0c1,	// (0x0003ac82) call4_windows_conf_pane_ParamLimits

0xd100,	// (0x0003acc1) popup_call4_audio_in_window_ParamLimits

0xd100,	// (0x0003acc1) popup_call4_audio_in_window

0x9bce,	// (0x0003778f) bg_popup_call2_act_pane_cp02

0xd176,	// (0x0003ad37) call4_list_conf_pane

0xc72a,	// (0x0003a2eb) call4_image_pane_g1

0xc72a,	// (0x0003a2eb) call4_image_pane_g2

0x0001,

0xf6e7,	// (0x0003d2a8) call4_image_pane_g

0xd433,	// (0x0003aff4) list_single_graphic_popup_conf4_pane_ParamLimits

0xd433,	// (0x0003aff4) list_single_graphic_popup_conf4_pane

0x9bce,	// (0x0003778f) list_highlight_pane_cp022

0xd446,	// (0x0003b007) list_single_graphic_popup_conf4_pane_g1

0xace5,	// (0x000388a6) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9da,	// (0x0003d59b) list_single_graphic_popup_conf4_pane_g

0xd44e,	// (0x0003b00f) list_single_graphic_popup_conf4_pane_t1

0x291f,	// (0x000304e0) popup_vtel_slider_window_ParamLimits

0x291f,	// (0x000304e0) popup_vtel_slider_window

0xd0a3,	// (0x0003ac64) dialer2_ne_pane_t2_ParamLimits

0xd0a3,	// (0x0003ac64) dialer2_ne_pane_t2

0x0001,

0xf8bb,	// (0x0003d47c) dialer2_ne_pane_t_ParamLimits

0xf8bb,	// (0x0003d47c) dialer2_ne_pane_t

0xc50d,	// (0x0003a0ce) bg_popup_sub_pane_cp010_ParamLimits

0xc50d,	// (0x0003a0ce) bg_popup_sub_pane_cp010

0x6f29,	// (0x00034aea) popup_vtel_slider_window_g1_ParamLimits

0x6f29,	// (0x00034aea) popup_vtel_slider_window_g1

0x6f3c,	// (0x00034afd) popup_vtel_slider_window_g2_ParamLimits

0x6f3c,	// (0x00034afd) popup_vtel_slider_window_g2

0x0003,

0xf9df,	// (0x0003d5a0) popup_vtel_slider_window_g_ParamLimits

0xf9df,	// (0x0003d5a0) popup_vtel_slider_window_g

0x6f92,	// (0x00034b53) vtel_slider_pane_ParamLimits

0x6f92,	// (0x00034b53) vtel_slider_pane

0x6fb4,	// (0x00034b75) vtel_slider_pane_g1_ParamLimits

0x6fb4,	// (0x00034b75) vtel_slider_pane_g1

0x6fc8,	// (0x00034b89) vtel_slider_pane_g2_ParamLimits

0x6fc8,	// (0x00034b89) vtel_slider_pane_g2

0x6fe0,	// (0x00034ba1) vtel_slider_pane_g3_ParamLimits

0x6fe0,	// (0x00034ba1) vtel_slider_pane_g3

0x6fb4,	// (0x00034b75) vtel_slider_pane_g4_ParamLimits

0x6fb4,	// (0x00034b75) vtel_slider_pane_g4

0x6ff6,	// (0x00034bb7) vtel_slider_pane_g5_ParamLimits

0x6ff6,	// (0x00034bb7) vtel_slider_pane_g5

0x0004,

0xf9e8,	// (0x0003d5a9) vtel_slider_pane_g_ParamLimits

0xf9e8,	// (0x0003d5a9) vtel_slider_pane_g

0x1a1d,	// (0x0002f5de) main_gallery2_pane

0x14a3,	// (0x0002f064) aid_size_row_itut2_dropdow_list_ParamLimits

0x14a3,	// (0x0002f064) aid_size_row_itut2_dropdow_list

0x152f,	// (0x0002f0f0) grid_vitu2_function_top_pane_ParamLimits

0x152f,	// (0x0002f0f0) grid_vitu2_function_top_pane

0x1594,	// (0x0002f155) popup_vitu2_dropdown_list_window_ParamLimits

0x1594,	// (0x0002f155) popup_vitu2_dropdown_list_window

0x15bd,	// (0x0002f17e) popup_vitu2_match_list_window

0x17d6,	// (0x0002f397) cell_vitu2_function_top_pane_ParamLimits

0x17d6,	// (0x0002f397) cell_vitu2_function_top_pane

0x17f4,	// (0x0002f3b5) cell_vitu2_function_top_pane_cp01_ParamLimits

0x17f4,	// (0x0002f3b5) cell_vitu2_function_top_pane_cp01

0x1812,	// (0x0002f3d3) cell_vitu2_function_top_wide_pane_ParamLimits

0x1812,	// (0x0002f3d3) cell_vitu2_function_top_wide_pane

0x1a03,	// (0x0002f5c4) bg_button_pane_cp012

0x1830,	// (0x0002f3f1) cell_vitu2_function_top_pane_g1

0xa67c,	// (0x0003823d) bg_button_pane_cp013_ParamLimits

0xa67c,	// (0x0003823d) bg_button_pane_cp013

0x701a,	// (0x00034bdb) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x701a,	// (0x00034bdb) cell_vitu2_function_top_wide_pane_g1

0x1a03,	// (0x0002f5c4) bg_popup_sub_pane_cp20

0x1844,	// (0x0002f405) list_vitu2_match_list_pane

0xd240,	// (0x0003ae01) bg_popup_sub_pane_cp20_g1

0xd248,	// (0x0003ae09) bg_popup_sub_pane_cp20_g2

0xa82b,	// (0x000383ec) bg_popup_sub_pane_cp20_g3

0xd250,	// (0x0003ae11) bg_popup_sub_pane_cp20_g4

0xa80b,	// (0x000383cc) bg_popup_sub_pane_cp20_g5

0xd464,	// (0x0003b025) bg_popup_sub_pane_cp20_g6

0xd260,	// (0x0003ae21) bg_popup_sub_pane_cp20_g7

0xd268,	// (0x0003ae29) bg_popup_sub_pane_cp20_g8

0xd270,	// (0x0003ae31) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9f3,	// (0x0003d5b4) bg_popup_sub_pane_cp20_g

0xa698,	// (0x00038259) list_vitu2_match_list_item_pane_ParamLimits

0xa698,	// (0x00038259) list_vitu2_match_list_item_pane

0xa6aa,	// (0x0003826b) list_vitu2_match_list_item_pane_t1

0x1a1d,	// (0x0002f5de) bg_popup_sub_pane_cp21

0xa6b8,	// (0x00038279) grid_vitu2_dropdown_list_pane

0x1862,	// (0x0002f423) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x1862,	// (0x0002f423) cell_vitu2_dropdown_list_char_pane

0x1883,	// (0x0002f444) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x1883,	// (0x0002f444) cell_vitu2_dropdown_list_ctrl_pane

0xd46c,	// (0x0003b02d) cell_vitu2_dropdown_list_char_pane_g1

0xd475,	// (0x0003b036) cell_vitu2_dropdown_list_char_pane_g2

0xd47e,	// (0x0003b03f) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa10,	// (0x0003d5d1) cell_vitu2_dropdown_list_char_pane_g

0x18af,	// (0x0002f470) cell_vitu2_dropdown_list_char_pane_t1

0x707c,	// (0x00034c3d) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x707c,	// (0x00034c3d) cell_vitu2_dropdown_list_ctrl_pane_g1

0x708c,	// (0x00034c4d) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x708c,	// (0x00034c4d) cell_vitu2_dropdown_list_ctrl_pane_g2

0x709d,	// (0x00034c5e) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x709d,	// (0x00034c5e) cell_vitu2_dropdown_list_ctrl_pane_g3

0x18bd,	// (0x0002f47e) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x18bd,	// (0x0002f47e) cell_vitu2_dropdown_list_ctrl_pane_g4

0x67f8,	// (0x000343b9) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x67f8,	// (0x000343b9) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa17,	// (0x0003d5d8) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa17,	// (0x0003d5d8) cell_vitu2_dropdown_list_ctrl_pane_g

0x70ad,	// (0x00034c6e) aid_size_cell_gallery2_ParamLimits

0x70ad,	// (0x00034c6e) aid_size_cell_gallery2

0x70c3,	// (0x00034c84) grid_gallery2_pane_ParamLimits

0x70c3,	// (0x00034c84) grid_gallery2_pane

0x70d7,	// (0x00034c98) scroll_pane_cp029_ParamLimits

0x70d7,	// (0x00034c98) scroll_pane_cp029

0x70e3,	// (0x00034ca4) cell_gallery2_pane_ParamLimits

0x70e3,	// (0x00034ca4) cell_gallery2_pane

0xd487,	// (0x0003b048) cell_gallery2_pane_g2

0x7119,	// (0x00034cda) cell_gallery2_pane_g3

0xd491,	// (0x0003b052) cell_gallery2_pane_g4

0xd499,	// (0x0003b05a) cell_gallery2_pane_g5

0xaec8,	// (0x00038a89) grid_highlight_pane_cp10

0x15bd,	// (0x0002f17e) popup_vitu2_match_list_window_ParamLimits

0x15d2,	// (0x0002f193) popup_vitu2_query_window_ParamLimits

0x15d2,	// (0x0002f193) popup_vitu2_query_window

0x1a1d,	// (0x0002f5de) bg_vitu2_candi_button_pane

0xd46c,	// (0x0003b02d) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd475,	// (0x0003b036) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd47e,	// (0x0003b03f) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x7121,	// (0x00034ce2) bg_button_pane_cp015

0x7135,	// (0x00034cf6) bg_button_pane_cp016

0x7148,	// (0x00034d09) bg_button_pane_cp017

0xc320,	// (0x00039ee1) bg_popup_sub_pane_cp22

0xd4a1,	// (0x0003b062) popup_vitu2_query_window_g1

0x718d,	// (0x00034d4e) popup_vitu2_query_window_g2

0x0002,

0xfa22,	// (0x0003d5e3) popup_vitu2_query_window_g

0x71ac,	// (0x00034d6d) popup_vitu2_query_window_t1_ParamLimits

0x71ac,	// (0x00034d6d) popup_vitu2_query_window_t1

0x71e1,	// (0x00034da2) popup_vitu2_query_window_t2_ParamLimits

0x71e1,	// (0x00034da2) popup_vitu2_query_window_t2

0x71f3,	// (0x00034db4) popup_vitu2_query_window_t3_ParamLimits

0x71f3,	// (0x00034db4) popup_vitu2_query_window_t3

0x721b,	// (0x00034ddc) popup_vitu2_query_window_t4_ParamLimits

0x721b,	// (0x00034ddc) popup_vitu2_query_window_t4

0x723c,	// (0x00034dfd) popup_vitu2_query_window_t5_ParamLimits

0x723c,	// (0x00034dfd) popup_vitu2_query_window_t5

0x0006,

0xfa29,	// (0x0003d5ea) popup_vitu2_query_window_t_ParamLimits

0xfa29,	// (0x0003d5ea) popup_vitu2_query_window_t

0xd342,	// (0x0003af03) main_cset_text_pane

0x6c03,	// (0x000347c4) aid_area_touch_slider_ParamLimits

0x6c1f,	// (0x000347e0) cset_slider_pane_ParamLimits

0x6c49,	// (0x0003480a) main_cset_slider_pane_g1_ParamLimits

0x6c5e,	// (0x0003481f) main_cset_slider_pane_g2_ParamLimits

0xd363,	// (0x0003af24) main_cset_slider_pane_g3_ParamLimits

0xd363,	// (0x0003af24) main_cset_slider_pane_g3

0x6c73,	// (0x00034834) main_cset_slider_pane_g4_ParamLimits

0x6c73,	// (0x00034834) main_cset_slider_pane_g4

0x6c82,	// (0x00034843) main_cset_slider_pane_g5_ParamLimits

0x6c82,	// (0x00034843) main_cset_slider_pane_g5

0x6c8e,	// (0x0003484f) main_cset_slider_pane_g6_ParamLimits

0x6c8e,	// (0x0003484f) main_cset_slider_pane_g6

0xf97c,	// (0x0003d53d) main_cset_slider_pane_g_ParamLimits

0xd393,	// (0x0003af54) main_cset_slider_pane_t1_ParamLimits

0x6d1a,	// (0x000348db) main_cset_slider_pane_t2_ParamLimits

0x6d34,	// (0x000348f5) main_cset_slider_pane_t3_ParamLimits

0x6d4e,	// (0x0003490f) main_cset_slider_pane_t4_ParamLimits

0x6d68,	// (0x00034929) main_cset_slider_pane_t5_ParamLimits

0x6d82,	// (0x00034943) main_cset_slider_pane_t6_ParamLimits

0x6d97,	// (0x00034958) main_cset_slider_pane_t7_ParamLimits

0x6dc1,	// (0x00034982) main_cset_slider_pane_t8_ParamLimits

0x6dc1,	// (0x00034982) main_cset_slider_pane_t8

0x6de9,	// (0x000349aa) main_cset_slider_pane_t9_ParamLimits

0x6de9,	// (0x000349aa) main_cset_slider_pane_t9

0x6e11,	// (0x000349d2) main_cset_slider_pane_t10_ParamLimits

0x6e11,	// (0x000349d2) main_cset_slider_pane_t10

0x6e39,	// (0x000349fa) main_cset_slider_pane_t11_ParamLimits

0x6e39,	// (0x000349fa) main_cset_slider_pane_t11

0x6e61,	// (0x00034a22) main_cset_slider_pane_t12_ParamLimits

0x6e61,	// (0x00034a22) main_cset_slider_pane_t12

0x6e7e,	// (0x00034a3f) main_cset_slider_pane_t13_ParamLimits

0x6e7e,	// (0x00034a3f) main_cset_slider_pane_t13

0xf9a1,	// (0x0003d562) main_cset_slider_pane_t_ParamLimits

0x9bce,	// (0x0003778f) bg_popup_sub_pane_cp011

0xd4ad,	// (0x0003b06e) main_cset_text_pane_g1

0xd4b5,	// (0x0003b076) main_cset_text_pane_t1

0xd4c3,	// (0x0003b084) main_cset_text_pane_t2

0xd4d1,	// (0x0003b092) main_cset_text_pane_t3

0xd4df,	// (0x0003b0a0) main_cset_text_pane_t4

0xd4ed,	// (0x0003b0ae) main_cset_text_pane_t5

0xd4fb,	// (0x0003b0bc) main_cset_text_pane_t6

0xd509,	// (0x0003b0ca) main_cset_text_pane_t7

0x0006,

0xfa38,	// (0x0003d5f9) main_cset_text_pane_t

0x1a1d,	// (0x0002f5de) main_cam4_burst_pane

0x1a1d,	// (0x0002f5de) main_cam5_pane

0x6b42,	// (0x00034703) bg_button_pane_cp019

0x6b4b,	// (0x0003470c) bg_button_pane_cp020

0xd36f,	// (0x0003af30) main_cset_slider_pane_g7_ParamLimits

0xd36f,	// (0x0003af30) main_cset_slider_pane_g7

0xd37b,	// (0x0003af3c) main_cset_slider_pane_g8_ParamLimits

0xd37b,	// (0x0003af3c) main_cset_slider_pane_g8

0x6ca2,	// (0x00034863) main_cset_slider_pane_g9_ParamLimits

0x6ca2,	// (0x00034863) main_cset_slider_pane_g9

0x6cae,	// (0x0003486f) main_cset_slider_pane_g10_ParamLimits

0x6cae,	// (0x0003486f) main_cset_slider_pane_g10

0x6cba,	// (0x0003487b) main_cset_slider_pane_g11_ParamLimits

0x6cba,	// (0x0003487b) main_cset_slider_pane_g11

0x6cc6,	// (0x00034887) main_cset_slider_pane_g12_ParamLimits

0x6cc6,	// (0x00034887) main_cset_slider_pane_g12

0x6cd2,	// (0x00034893) main_cset_slider_pane_g13_ParamLimits

0x6cd2,	// (0x00034893) main_cset_slider_pane_g13

0x6cde,	// (0x0003489f) main_cset_slider_pane_g14_ParamLimits

0x6cde,	// (0x0003489f) main_cset_slider_pane_g14

0x6cea,	// (0x000348ab) main_cset_slider_pane_g15_ParamLimits

0x6cea,	// (0x000348ab) main_cset_slider_pane_g15

0xd3c1,	// (0x0003af82) main_cset_slider_pane_t14_ParamLimits

0xd3c1,	// (0x0003af82) main_cset_slider_pane_t14

0xd3fa,	// (0x0003afbb) main_cset_slider_pane_t15_ParamLimits

0xd3fa,	// (0x0003afbb) main_cset_slider_pane_t15

0x72b3,	// (0x00034e74) aid_cam4_burst_size_cell_ParamLimits

0x72b3,	// (0x00034e74) aid_cam4_burst_size_cell

0x72d3,	// (0x00034e94) grid_cam4_burst_pane_ParamLimits

0x72d3,	// (0x00034e94) grid_cam4_burst_pane

0x730b,	// (0x00034ecc) linegrid_cam4_burst_pane_ParamLimits

0x730b,	// (0x00034ecc) linegrid_cam4_burst_pane

0xd56d,	// (0x0003b12e) scroll_pane_cp30_ParamLimits

0xd56d,	// (0x0003b12e) scroll_pane_cp30

0x7331,	// (0x00034ef2) cell_cam4_burst_pane_ParamLimits

0x7331,	// (0x00034ef2) cell_cam4_burst_pane

0xd517,	// (0x0003b0d8) linegrid_cam4_burst_pane_g1_ParamLimits

0xd517,	// (0x0003b0d8) linegrid_cam4_burst_pane_g1

0x737e,	// (0x00034f3f) linegrid_cam4_burst_pane_g2_ParamLimits

0x737e,	// (0x00034f3f) linegrid_cam4_burst_pane_g2

0xd579,	// (0x0003b13a) linegrid_cam4_burst_pane_g3_ParamLimits

0xd579,	// (0x0003b13a) linegrid_cam4_burst_pane_g3

0x0002,

0xfa47,	// (0x0003d608) linegrid_cam4_burst_pane_g_ParamLimits

0xfa47,	// (0x0003d608) linegrid_cam4_burst_pane_g

0x738f,	// (0x00034f50) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x738f,	// (0x00034f50) linegrid_cam4_burst_pane_g3_copy1

0xd586,	// (0x0003b147) linegrid_cam4_burst_pane_g4_ParamLimits

0xd586,	// (0x0003b147) linegrid_cam4_burst_pane_g4

0x73a9,	// (0x00034f6a) linegrid_cam4_burst_pane_g5_ParamLimits

0x73a9,	// (0x00034f6a) linegrid_cam4_burst_pane_g5

0x73ba,	// (0x00034f7b) linegrid_cam4_burst_pane_g6_ParamLimits

0x73ba,	// (0x00034f7b) linegrid_cam4_burst_pane_g6

0xd593,	// (0x0003b154) linegrid_cam4_burst_pane_g7_ParamLimits

0xd593,	// (0x0003b154) linegrid_cam4_burst_pane_g7

0x73d1,	// (0x00034f92) cell_cam4_burst_pane_g1

0xd5ac,	// (0x0003b16d) main_cam5_pane_t1_ParamLimits

0xd5ac,	// (0x0003b16d) main_cam5_pane_t1

0xd5be,	// (0x0003b17f) main_cam5_pane_t2_ParamLimits

0xd5be,	// (0x0003b17f) main_cam5_pane_t2

0xd5d0,	// (0x0003b191) main_cam5_pane_t3_ParamLimits

0xd5d0,	// (0x0003b191) main_cam5_pane_t3

0xd5e2,	// (0x0003b1a3) main_cam5_pane_t4_ParamLimits

0xd5e2,	// (0x0003b1a3) main_cam5_pane_t4

0xd5fa,	// (0x0003b1bb) main_cam5_pane_t5_ParamLimits

0xd5fa,	// (0x0003b1bb) main_cam5_pane_t5

0xd60e,	// (0x0003b1cf) main_cam5_pane_t6_ParamLimits

0xd60e,	// (0x0003b1cf) main_cam5_pane_t6

0xd622,	// (0x0003b1e3) main_cam5_pane_t7_ParamLimits

0xd622,	// (0x0003b1e3) main_cam5_pane_t7

0xd634,	// (0x0003b1f5) main_cam5_pane_t8_ParamLimits

0xd634,	// (0x0003b1f5) main_cam5_pane_t8

0xd650,	// (0x0003b211) main_cam5_pane_t9_ParamLimits

0xd650,	// (0x0003b211) main_cam5_pane_t9

0xd662,	// (0x0003b223) main_cam5_pane_t10_ParamLimits

0xd662,	// (0x0003b223) main_cam5_pane_t10

0xd674,	// (0x0003b235) main_cam5_pane_t11_ParamLimits

0xd674,	// (0x0003b235) main_cam5_pane_t11

0xd686,	// (0x0003b247) main_cam5_pane_t12_ParamLimits

0xd686,	// (0x0003b247) main_cam5_pane_t12

0xd69b,	// (0x0003b25c) main_cam5_pane_t13_ParamLimits

0xd69b,	// (0x0003b25c) main_cam5_pane_t13

0x000c,

0xfa53,	// (0x0003d614) main_cam5_pane_t_ParamLimits

0xfa53,	// (0x0003d614) main_cam5_pane_t

0x038d,	// (0x0002df4e) popup_scut_keymap_window_ParamLimits

0x038d,	// (0x0002df4e) popup_scut_keymap_window

0x73e6,	// (0x00034fa7) aid_size_cell_brow_shortcut

0xaec8,	// (0x00038a89) bg_popup_window_pane_cp010

0x73f2,	// (0x00034fb3) grid_scut_pane

0x73fe,	// (0x00034fbf) cell_scut_pane_ParamLimits

0x73fe,	// (0x00034fbf) cell_scut_pane

0x7415,	// (0x00034fd6) cell_scut_pane_g1

0xd6b8,	// (0x0003b279) cell_scut_pane_t1

0xd6c7,	// (0x0003b288) cell_scut_pane_t2

0x741e,	// (0x00034fdf) cell_scut_pane_t3

0x0002,

0xfa6e,	// (0x0003d62f) cell_scut_pane_t

0x5706,	// (0x000332c7) main_mup3_pane_g8_ParamLimits

0x5706,	// (0x000332c7) main_mup3_pane_g8

0x14bb,	// (0x0002f07c) area_vitu2_query_pane_ParamLimits

0x14bb,	// (0x0002f07c) area_vitu2_query_pane

0x715b,	// (0x00034d1c) input_focus_pane_cp08

0xd6d6,	// (0x0003b297) area_vitu2_query_pane_g1

0x742c,	// (0x00034fed) area_vitu2_query_pane_g2

0x0001,

0xfa75,	// (0x0003d636) area_vitu2_query_pane_g

0x743d,	// (0x00034ffe) area_vitu2_query_pane_t1_ParamLimits

0x743d,	// (0x00034ffe) area_vitu2_query_pane_t1

0x7451,	// (0x00035012) area_vitu2_query_pane_t2_ParamLimits

0x7451,	// (0x00035012) area_vitu2_query_pane_t2

0x7465,	// (0x00035026) area_vitu2_query_pane_t3_ParamLimits

0x7465,	// (0x00035026) area_vitu2_query_pane_t3

0xd6e2,	// (0x0003b2a3) area_vitu2_query_pane_t4_ParamLimits

0xd6e2,	// (0x0003b2a3) area_vitu2_query_pane_t4

0xd70a,	// (0x0003b2cb) area_vitu2_query_pane_t5_ParamLimits

0xd70a,	// (0x0003b2cb) area_vitu2_query_pane_t5

0xd732,	// (0x0003b2f3) area_vitu2_query_pane_t6_ParamLimits

0xd732,	// (0x0003b2f3) area_vitu2_query_pane_t6

0x0006,

0xfa7a,	// (0x0003d63b) area_vitu2_query_pane_t_ParamLimits

0xfa7a,	// (0x0003d63b) area_vitu2_query_pane_t

0x748d,	// (0x0003504e) bg_button_pane_cp018

0x749b,	// (0x0003505c) bg_button_pane_cp021

0x74a7,	// (0x00035068) bg_button_pane_cp022

0x74b8,	// (0x00035079) input_focus_pane_cp09

0x3d28,	// (0x000318e9) aid_size_touch_mv_arrow_left

0x3d51,	// (0x00031912) aid_size_touch_mv_arrow_right

0x6d02,	// (0x000348c3) main_cset_slider_pane_g16_ParamLimits

0x6d02,	// (0x000348c3) main_cset_slider_pane_g16

0x6d0e,	// (0x000348cf) main_cset_slider_pane_g17_ParamLimits

0x6d0e,	// (0x000348cf) main_cset_slider_pane_g17

0x73d1,	// (0x00034f92) cell_cam4_burst_pane_g1_ParamLimits

0x9bce,	// (0x0003778f) compa_mode_pane

0x6f4c,	// (0x00034b0d) popup_vtel_slider_window_g3_ParamLimits

0x6f4c,	// (0x00034b0d) popup_vtel_slider_window_g3

0x6f63,	// (0x00034b24) popup_vtel_slider_window_g4_ParamLimits

0x6f63,	// (0x00034b24) popup_vtel_slider_window_g4

0x6f7a,	// (0x00034b3b) popup_vtel_slider_window_t1_ParamLimits

0x6f7a,	// (0x00034b3b) popup_vtel_slider_window_t1

0x1a1d,	// (0x0002f5de) main_cl_pane

0x4ca4,	// (0x00032865) popup_imed_adjust2_window_ParamLimits

0xc320,	// (0x00039ee1) bg_tb_trans_pane_cp05_ParamLimits

0xccaf,	// (0x0003a870) popup_imed_adjust2_window_g1_ParamLimits

0xccbe,	// (0x0003a87f) popup_imed_adjust2_window_g2_ParamLimits

0xccbe,	// (0x0003a87f) popup_imed_adjust2_window_g2

0xccca,	// (0x0003a88b) popup_imed_adjust2_window_g3_ParamLimits

0xccca,	// (0x0003a88b) popup_imed_adjust2_window_g3

0x0002,

0xf7e5,	// (0x0003d3a6) popup_imed_adjust2_window_g_ParamLimits

0xf7e5,	// (0x0003d3a6) popup_imed_adjust2_window_g

0xccd6,	// (0x0003a897) popup_imed_adjust2_window_t1_ParamLimits

0xccee,	// (0x0003a8af) slider_imed_adjust_pane_ParamLimits

0xcd02,	// (0x0003a8c3) slider_imed_adjust_pane_g1_ParamLimits

0xcd12,	// (0x0003a8d3) slider_imed_adjust_pane_g2_ParamLimits

0xcd22,	// (0x0003a8e3) slider_imed_adjust_pane_g3_ParamLimits

0xcd33,	// (0x0003a8f4) slider_imed_adjust_pane_g4_ParamLimits

0xf7ec,	// (0x0003d3ad) slider_imed_adjust_pane_g_ParamLimits

0x1278,	// (0x0002ee39) aid_touch_area_cam4_ParamLimits

0x1278,	// (0x0002ee39) aid_touch_area_cam4

0x67c8,	// (0x00034389) battery_pane_cp01

0x1347,	// (0x0002ef08) main_camera4_pane_g6_ParamLimits

0x1347,	// (0x0002ef08) main_camera4_pane_g6

0x1371,	// (0x0002ef32) main_camera4_pane_t2_ParamLimits

0x1371,	// (0x0002ef32) main_camera4_pane_t2

0x0001,

0xf8ef,	// (0x0003d4b0) main_camera4_pane_t_ParamLimits

0xf8ef,	// (0x0003d4b0) main_camera4_pane_t

0x1392,	// (0x0002ef53) aid_touch_area_vid4_ParamLimits

0x1392,	// (0x0002ef53) aid_touch_area_vid4

0x13e6,	// (0x0002efa7) main_video4_pane_g5_ParamLimits

0x13e6,	// (0x0002efa7) main_video4_pane_g5

0x140b,	// (0x0002efcc) vid4_progress_pane_ParamLimits

0x140b,	// (0x0002efcc) vid4_progress_pane

0xd387,	// (0x0003af48) main_cset_slider_pane_g18_ParamLimits

0xd387,	// (0x0003af48) main_cset_slider_pane_g18

0xd5a0,	// (0x0003b161) cell_cam4_burst_pane_g2_ParamLimits

0xd5a0,	// (0x0003b161) cell_cam4_burst_pane_g2

0x0001,

0xfa4e,	// (0x0003d60f) cell_cam4_burst_pane_g_ParamLimits

0xfa4e,	// (0x0003d60f) cell_cam4_burst_pane_g

0xa32a,	// (0x00037eeb) bg_cl_pane_ParamLimits

0xa32a,	// (0x00037eeb) bg_cl_pane

0x74c9,	// (0x0003508a) cl_header_pane_ParamLimits

0x74c9,	// (0x0003508a) cl_header_pane

0x74dd,	// (0x0003509e) cl_listscroll_pane_ParamLimits

0x74dd,	// (0x0003509e) cl_listscroll_pane

0xd77e,	// (0x0003b33f) bg_cl_pane_g1

0xd786,	// (0x0003b347) bg_cl_pane_g2

0xd78e,	// (0x0003b34f) bg_cl_pane_g3

0xd796,	// (0x0003b357) bg_cl_pane_g4

0xd79e,	// (0x0003b35f) bg_cl_pane_g5

0xd7a6,	// (0x0003b367) bg_cl_pane_g6

0xd7ae,	// (0x0003b36f) bg_cl_pane_g7

0xd7b6,	// (0x0003b377) bg_cl_pane_g8

0xd7be,	// (0x0003b37f) bg_cl_pane_g9

0x0008,

0xfa89,	// (0x0003d64a) bg_cl_pane_g

0x74ed,	// (0x000350ae) aid_height_cl_leading_ParamLimits

0x74ed,	// (0x000350ae) aid_height_cl_leading

0x74f9,	// (0x000350ba) aid_height_cl_text_ParamLimits

0x74f9,	// (0x000350ba) aid_height_cl_text

0xa66e,	// (0x0003822f) bg_cl_header_pane_ParamLimits

0xa66e,	// (0x0003822f) bg_cl_header_pane

0x7518,	// (0x000350d9) cl_header_pane_g1_ParamLimits

0x7518,	// (0x000350d9) cl_header_pane_g1

0x752e,	// (0x000350ef) cl_header_pane_t1_ParamLimits

0x752e,	// (0x000350ef) cl_header_pane_t1

0xd7c6,	// (0x0003b387) cl_list_pane

0xd35a,	// (0x0003af1b) hc_scroll_pane_cp01

0xa80b,	// (0x000383cc) bg_cl_header_pane_g1

0xd240,	// (0x0003ae01) bg_cl_header_pane_g2

0xa82b,	// (0x000383ec) bg_cl_header_pane_g3

0xd250,	// (0x0003ae11) bg_cl_header_pane_g4

0xd248,	// (0x0003ae09) bg_cl_header_pane_g5

0xd464,	// (0x0003b025) bg_cl_header_pane_g6

0xd268,	// (0x0003ae29) bg_cl_header_pane_g7

0xd270,	// (0x0003ae31) bg_cl_header_pane_g8

0xd260,	// (0x0003ae21) bg_cl_header_pane_g9

0x0008,

0xfa9c,	// (0x0003d65d) bg_cl_header_pane_g

0x7547,	// (0x00035108) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7547,	// (0x00035108) hc_cl_list_double_graphic_heading_pane

0x7558,	// (0x00035119) hc_cl_list_single_graphic_pane_ParamLimits

0x7558,	// (0x00035119) hc_cl_list_single_graphic_pane

0x7571,	// (0x00035132) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7571,	// (0x00035132) hc_cl_list_single_graphic_pane_g1

0x757d,	// (0x0003513e) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x757d,	// (0x0003513e) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaaf,	// (0x0003d670) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaaf,	// (0x0003d670) hc_cl_list_single_graphic_pane_g

0x7591,	// (0x00035152) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7591,	// (0x00035152) hc_cl_list_single_graphic_pane_t1

0x7571,	// (0x00035132) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7571,	// (0x00035132) hc_cl_list_double_graphic_heading_pane_g1

0x75a6,	// (0x00035167) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x75a6,	// (0x00035167) hc_cl_list_double_graphic_heading_pane_g2

0x75ba,	// (0x0003517b) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x75ba,	// (0x0003517b) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfab4,	// (0x0003d675) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfab4,	// (0x0003d675) hc_cl_list_double_graphic_heading_pane_g

0x75ce,	// (0x0003518f) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x75ce,	// (0x0003518f) hc_cl_list_double_graphic_heading_pane_t1

0x75e3,	// (0x000351a4) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x75e3,	// (0x000351a4) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfabb,	// (0x0003d67c) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfabb,	// (0x0003d67c) hc_cl_list_double_graphic_heading_pane_t

0x18d9,	// (0x0002f49a) vid4_progress_pane_g1

0x18eb,	// (0x0002f4ac) vid4_progress_pane_g2

0xaa68,	// (0x00038629) vid4_progress_pane_g3

0xa6c8,	// (0x00038289) vid4_progress_pane_g4

0x0004,

0xfac0,	// (0x0003d681) vid4_progress_pane_g

0xa6e6,	// (0x000382a7) vid4_progress_pane_t1

0xa6fb,	// (0x000382bc) vid4_progress_pane_t2

0x0002,

0xfacb,	// (0x0003d68c) vid4_progress_pane_t

0xa727,	// (0x000382e8) wait_bar_pane_cp07

0xc51b,	// (0x0003a0dc) blid_firmament_pane_ParamLimits

0xc55e,	// (0x0003a11f) popup_blid_sat_info2_window_g1

0xc582,	// (0x0003a143) popup_blid_sat_info2_window_t3

0xc590,	// (0x0003a151) popup_blid_sat_info2_window_t4

0xc59e,	// (0x0003a15f) popup_blid_sat_info2_window_t5

0xc5ac,	// (0x0003a16d) popup_blid_sat_info2_window_t6

0xc5bc,	// (0x0003a17d) popup_blid_sat_info2_window_t7

0xc5ca,	// (0x0003a18b) popup_blid_sat_info2_window_t8

0xc5d8,	// (0x0003a199) popup_blid_sat_info2_window_t9

0xc5e6,	// (0x0003a1a7) popup_blid_sat_info2_window_t10

0xc6aa,	// (0x0003a26b) aid_firma_cardinal_ParamLimits

0xc6be,	// (0x0003a27f) blid_firmament_pane_t1_ParamLimits

0xc6d5,	// (0x0003a296) blid_firmament_pane_t2_ParamLimits

0xc6ec,	// (0x0003a2ad) blid_firmament_pane_t3_ParamLimits

0xc703,	// (0x0003a2c4) blid_firmament_pane_t4_ParamLimits

0xf6de,	// (0x0003d29f) blid_firmament_pane_t_ParamLimits

0xc71a,	// (0x0003a2db) blid_sat_info_pane_ParamLimits

0x1a03,	// (0x0002f5c4) main_cam_set_pane_ParamLimits

0x5f54,	// (0x00033b15) aid_size_cell_colour_35_ParamLimits

0x5f74,	// (0x00033b35) aid_size_cell_colour_112_ParamLimits

0x5f94,	// (0x00033b55) aid_size_cell_effect_ParamLimits

0xc320,	// (0x00039ee1) bg_tb_trans_pane_cp02_ParamLimits

0xa9ef,	// (0x000385b0) heading_imed_pane_ParamLimits

0x5fb4,	// (0x00033b75) listscroll_imed_pane_ParamLimits

0xb946,	// (0x00039507) popup_call2_audio_first_window_g5_ParamLimits

0xb946,	// (0x00039507) popup_call2_audio_first_window_g5

0x1055,	// (0x0002ec16) aid_size_touch_image3_arrow_left_ParamLimits

0x1055,	// (0x0002ec16) aid_size_touch_image3_arrow_left

0x1081,	// (0x0002ec42) aid_size_touch_image3_arrow_right_ParamLimits

0x1081,	// (0x0002ec42) aid_size_touch_image3_arrow_right

0xa711,	// (0x000382d2) vid4_progress_pane_t3

0x62e0,	// (0x00033ea1) main_hwr_training_symbol_option_pane_ParamLimits

0x62e0,	// (0x00033ea1) main_hwr_training_symbol_option_pane

0xcfa5,	// (0x0003ab66) popup_hwr_training_preview_window_ParamLimits

0xcfa5,	// (0x0003ab66) popup_hwr_training_preview_window

0x0efa,	// (0x0002eabb) hwr_training_navi_pane_g5_ParamLimits

0x0efa,	// (0x0002eabb) hwr_training_navi_pane_g5

0xd22e,	// (0x0003adef) popup_char_count_window

0x1a03,	// (0x0002f5c4) bg_popup_sub_pane_cp20_ParamLimits

0x1844,	// (0x0002f405) list_vitu2_match_list_pane_ParamLimits

0x1853,	// (0x0002f414) vitu2_page_scroll_pane_ParamLimits

0x1853,	// (0x0002f414) vitu2_page_scroll_pane

0xd7f1,	// (0x0003b3b2) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd7f1,	// (0x0003b3b2) list_single_hwr_training_symbol_option_pane

0xd804,	// (0x0003b3c5) list_single_hwr_training_symbol_option_pane_g1

0xd80c,	// (0x0003b3cd) list_single_hwr_training_symbol_option_pane_t1

0xd81a,	// (0x0003b3db) bg_button_pane_cp023

0xd823,	// (0x0003b3e4) bg_button_pane_cp024

0x7627,	// (0x000351e8) vitu2_page_scroll_pane_g1

0x762f,	// (0x000351f0) vitu2_page_scroll_pane_g2

0x0001,

0xfad2,	// (0x0003d693) vitu2_page_scroll_pane_g

0x7637,	// (0x000351f8) vitu2_page_scroll_pane_t1

0xcd5f,	// (0x0003a920) popup_char_count_window_g1

0xd856,	// (0x0003b417) popup_char_count_window_g2

0xd85f,	// (0x0003b420) popup_char_count_window_g3

0x0002,

0xfad7,	// (0x0003d698) popup_char_count_window_g

0xd868,	// (0x0003b429) popup_char_count_window_t1

0x1a1d,	// (0x0002f5de) main_vded2_pane

0xcc9b,	// (0x0003a85c) aid_size_cell_imed_line

0xcca5,	// (0x0003a866) grid_imed_line_width_pane

0x68a0,	// (0x00034461) vid4_indicators_pane_g4

0xd876,	// (0x0003b437) cell_imed_line_width_pane_ParamLimits

0xd876,	// (0x0003b437) cell_imed_line_width_pane

0xd88a,	// (0x0003b44b) cell_imed_line_width_pane_g1

0xd55b,	// (0x0003b11c) cell_imed_line_width_pane_g2

0x0001,

0xfade,	// (0x0003d69f) cell_imed_line_width_pane_g

0x7646,	// (0x00035207) main_vded2_pane_g1_ParamLimits

0x7646,	// (0x00035207) main_vded2_pane_g1

0x765c,	// (0x0003521d) main_vded2_pane_g2_ParamLimits

0x765c,	// (0x0003521d) main_vded2_pane_g2

0x0001,

0xfae3,	// (0x0003d6a4) main_vded2_pane_g_ParamLimits

0xfae3,	// (0x0003d6a4) main_vded2_pane_g

0x766e,	// (0x0003522f) vded2_slider_pane_ParamLimits

0x766e,	// (0x0003522f) vded2_slider_pane

0x767e,	// (0x0003523f) aid_size_touch_vded2_end

0x7688,	// (0x00035249) aid_size_touch_vded2_playhead

0xd893,	// (0x0003b454) aid_size_touch_vded2_start

0xd89b,	// (0x0003b45c) vded2_slider_bg_pane

0xd8a4,	// (0x0003b465) vded2_slider_pane_g1

0xd8ad,	// (0x0003b46e) vded2_slider_pane_g2

0x7692,	// (0x00035253) vded2_slider_pane_g3

0x0002,

0xfae8,	// (0x0003d6a9) vded2_slider_pane_g

0xd8b5,	// (0x0003b476) vded2_slider_bg_pane_g1

0xd8be,	// (0x0003b47f) vded2_slider_bg_pane_g2

0xd8c7,	// (0x0003b488) vded2_slider_bg_pane_g3

0x0002,

0xfaef,	// (0x0003d6b0) vded2_slider_bg_pane_g

0x43cf,	// (0x00031f90) aid_postcard_touch_down_pane_ParamLimits

0x43cf,	// (0x00031f90) aid_postcard_touch_down_pane

0x43e5,	// (0x00031fa6) aid_postcard_touch_up_pane_ParamLimits

0x43e5,	// (0x00031fa6) aid_postcard_touch_up_pane

0x1a1d,	// (0x0002f5de) main_blid2_pane

0x4c8a,	// (0x0003284b) popup_blid2_search_window

0x9bce,	// (0x0003778f) blid2_gps_pane

0x9bce,	// (0x0003778f) blid2_navig_pane

0x9bce,	// (0x0003778f) blid2_search_pane

0x9bce,	// (0x0003778f) blid2_tripm_pane

0x769d,	// (0x0003525e) blid2_search_pane_g1_ParamLimits

0x769d,	// (0x0003525e) blid2_search_pane_g1

0x76b5,	// (0x00035276) blid2_search_pane_t1_ParamLimits

0x76b5,	// (0x00035276) blid2_search_pane_t1

0x76c7,	// (0x00035288) aid_size_cell_blid2_gps_ParamLimits

0x76c7,	// (0x00035288) aid_size_cell_blid2_gps

0x76df,	// (0x000352a0) blid2_gps_pane_g1_ParamLimits

0x76df,	// (0x000352a0) blid2_gps_pane_g1

0x76f3,	// (0x000352b4) grid_blid2_satellite_pane_ParamLimits

0x76f3,	// (0x000352b4) grid_blid2_satellite_pane

0x770d,	// (0x000352ce) blid2_navig_pane_g1_ParamLimits

0x770d,	// (0x000352ce) blid2_navig_pane_g1

0x7719,	// (0x000352da) blid2_navig_pane_t1_ParamLimits

0x7719,	// (0x000352da) blid2_navig_pane_t1

0x7734,	// (0x000352f5) blid2_navig_pane_t2_ParamLimits

0x7734,	// (0x000352f5) blid2_navig_pane_t2

0x0001,

0xfaf6,	// (0x0003d6b7) blid2_navig_pane_t_ParamLimits

0xfaf6,	// (0x0003d6b7) blid2_navig_pane_t

0x774f,	// (0x00035310) blid2_navig_ring_pane_ParamLimits

0x774f,	// (0x00035310) blid2_navig_ring_pane

0x7768,	// (0x00035329) blid2_speed_pane_ParamLimits

0x7768,	// (0x00035329) blid2_speed_pane

0x7774,	// (0x00035335) blid2_tripm_pane_g1_ParamLimits

0x7774,	// (0x00035335) blid2_tripm_pane_g1

0x778f,	// (0x00035350) blid2_tripm_pane_g2_ParamLimits

0x778f,	// (0x00035350) blid2_tripm_pane_g2

0x77a3,	// (0x00035364) blid2_tripm_pane_g3_ParamLimits

0x77a3,	// (0x00035364) blid2_tripm_pane_g3

0x77b7,	// (0x00035378) blid2_tripm_pane_g4_ParamLimits

0x77b7,	// (0x00035378) blid2_tripm_pane_g4

0x77cb,	// (0x0003538c) blid2_tripm_pane_g5_ParamLimits

0x77cb,	// (0x0003538c) blid2_tripm_pane_g5

0x0005,

0xfafb,	// (0x0003d6bc) blid2_tripm_pane_g_ParamLimits

0xfafb,	// (0x0003d6bc) blid2_tripm_pane_g

0x77f1,	// (0x000353b2) blid2_tripm_pane_t1_ParamLimits

0x77f1,	// (0x000353b2) blid2_tripm_pane_t1

0x780c,	// (0x000353cd) blid2_tripm_pane_t2_ParamLimits

0x780c,	// (0x000353cd) blid2_tripm_pane_t2

0x7825,	// (0x000353e6) blid2_tripm_pane_t3_ParamLimits

0x7825,	// (0x000353e6) blid2_tripm_pane_t3

0x0003,

0xfb08,	// (0x0003d6c9) blid2_tripm_pane_t_ParamLimits

0xfb08,	// (0x0003d6c9) blid2_tripm_pane_t

0x786c,	// (0x0003542d) cell_blid2_satellite_pane_ParamLimits

0x786c,	// (0x0003542d) cell_blid2_satellite_pane

0x788a,	// (0x0003544b) cell_blid2_satellite_pane_g1

0xd8d0,	// (0x0003b491) cell_blid2_satellite_pane_t1

0xc72a,	// (0x0003a2eb) blid2_speed_pane_g1

0xd8de,	// (0x0003b49f) blid2_speed_pane_t1

0xd8ec,	// (0x0003b4ad) blid2_speed_pane_t2

0x0001,

0xfb11,	// (0x0003d6d2) blid2_speed_pane_t

0xc72a,	// (0x0003a2eb) blid2_navig_ring_pane_g1

0x7893,	// (0x00035454) blid2_navig_ring_pane_g2

0x789b,	// (0x0003545c) blid2_navig_ring_pane_g3

0x78a3,	// (0x00035464) blid2_navig_ring_pane_g4

0x78ab,	// (0x0003546c) blid2_navig_ring_pane_g5

0x0004,

0xfb16,	// (0x0003d6d7) blid2_navig_ring_pane_g

0x9bce,	// (0x0003778f) bg_popup_window_pane_cp011

0xd8fa,	// (0x0003b4bb) popup_blid2_search_window_g1

0xd902,	// (0x0003b4c3) popup_blid2_search_window_t1

0xd910,	// (0x0003b4d1) popup_blid2_search_window_t2

0x0001,

0xfb21,	// (0x0003d6e2) popup_blid2_search_window_t

0xa643,	// (0x00038204) main_browser_pane_g1

0xa32a,	// (0x00037eeb) main_browser_pane_ParamLimits

0x1a03,	// (0x0002f5c4) bg_button_pane_cp011_ParamLimits

0x17ba,	// (0x0002f37b) cell_vitu2_function_pane_g1_ParamLimits

0xc320,	// (0x00039ee1) bg_popup_sub_pane_cp22_ParamLimits

0x715b,	// (0x00034d1c) input_focus_pane_cp08_ParamLimits

0x7172,	// (0x00034d33) popup_vitu2_query_button_pane_ParamLimits

0x7172,	// (0x00034d33) popup_vitu2_query_button_pane

0x7183,	// (0x00034d44) popup_vitu2_query_input_button_pane

0xd4a1,	// (0x0003b062) popup_vitu2_query_window_g1_ParamLimits

0x718d,	// (0x00034d4e) popup_vitu2_query_window_g2_ParamLimits

0xfa22,	// (0x0003d5e3) popup_vitu2_query_window_g_ParamLimits

0x9bce,	// (0x0003778f) bg_button_pane_cp026

0x78b3,	// (0x00035474) popup_vitu2_query_input_button_pane_g1

0x9bce,	// (0x0003778f) bg_button_pane_cp025

0xd91e,	// (0x0003b4df) popup_vitu2_query_button_pane_t1

0x53f3,	// (0x00032fb4) main_mp3_pane_t6

0x5401,	// (0x00032fc2) popup_slider_window_cp01

0x6806,	// (0x000343c7) cam4_battery_pane

0x685f,	// (0x00034420) cam4_battery_pane_cp02

0xa6c0,	// (0x00038281) cam4_battery_pane_cp01

0xa6c0,	// (0x00038281) cam4_battery_pane_cp03

0xd563,	// (0x0003b124) cam4_battery_pane_g1

0xc72a,	// (0x0003a2eb) cam4_battery_pane_g2

0x0001,

0xfb26,	// (0x0003d6e7) cam4_battery_pane_g

0xc5f4,	// (0x0003a1b5) popup_blid_sat_info2_window_t11

0x3d28,	// (0x000318e9) aid_size_touch_mv_arrow_left_ParamLimits

0x3d51,	// (0x00031912) aid_size_touch_mv_arrow_right_ParamLimits

0xae28,	// (0x000389e9) navi_pane_g1_ParamLimits

0x3d90,	// (0x00031951) navi_pane_g2_ParamLimits

0x3dbe,	// (0x0003197f) navi_pane_g3_ParamLimits

0xf3f0,	// (0x0003cfb1) navi_pane_g_ParamLimits

0x3e16,	// (0x000319d7) navi_pane_mv_t1_ParamLimits

0x5fc0,	// (0x00033b81) grid_imed_effect_pane_ParamLimits

0x281c,	// (0x000303dd) aid_placing_vt_slider_lsc

0xa592,	// (0x00038153) aid_placing_vt_slider_prt

0xa66e,	// (0x0003822f) bg_tb_trans_pane_cp01_ParamLimits

0xc8aa,	// (0x0003a46b) popup_image_details_window_g1_ParamLimits

0xc8bd,	// (0x0003a47e) popup_image_details_window_g2_ParamLimits

0xc8d2,	// (0x0003a493) popup_image_details_window_g3_ParamLimits

0xc8d2,	// (0x0003a493) popup_image_details_window_g3

0xf723,	// (0x0003d2e4) popup_image_details_window_g_ParamLimits

0xc8e6,	// (0x0003a4a7) popup_image_details_window_t1_ParamLimits

0xc8f8,	// (0x0003a4b9) popup_image_details_window_t2_ParamLimits

0xc911,	// (0x0003a4d2) popup_image_details_window_t3_ParamLimits

0xc925,	// (0x0003a4e6) popup_image_details_window_t4_ParamLimits

0xc940,	// (0x0003a501) popup_image_details_window_t5_ParamLimits

0xf72a,	// (0x0003d2eb) popup_image_details_window_t_ParamLimits

0x7505,	// (0x000350c6) cl_header_name_pane_ParamLimits

0x7505,	// (0x000350c6) cl_header_name_pane

0x78bb,	// (0x0003547c) cl_header_name_pane_t1_ParamLimits

0x78bb,	// (0x0003547c) cl_header_name_pane_t1

0x78dc,	// (0x0003549d) cl_header_name_pane_t2_ParamLimits

0x78dc,	// (0x0003549d) cl_header_name_pane_t2

0x791e,	// (0x000354df) cl_header_name_pane_t3_ParamLimits

0x791e,	// (0x000354df) cl_header_name_pane_t3

0x0002,

0xfb2b,	// (0x0003d6ec) cl_header_name_pane_t_ParamLimits

0xfb2b,	// (0x0003d6ec) cl_header_name_pane_t

0x3de7,	// (0x000319a8) navi_pane_mv_g2_ParamLimits

0xd1bb,	// (0x0003ad7c) field_vitu2_entry_pane_g1_ParamLimits

0xd1c7,	// (0x0003ad88) field_vitu2_entry_pane_g2_ParamLimits

0xd1d3,	// (0x0003ad94) field_vitu2_entry_pane_g3_ParamLimits

0xd1d3,	// (0x0003ad94) field_vitu2_entry_pane_g3

0xf921,	// (0x0003d4e2) field_vitu2_entry_pane_g_ParamLimits

0x165a,	// (0x0002f21b) cell_vitu2_itu_pane_g1_ParamLimits

0x166a,	// (0x0002f22b) cell_vitu2_itu_pane_g2_ParamLimits

0x166a,	// (0x0002f22b) cell_vitu2_itu_pane_g2

0x0001,

0xf92d,	// (0x0003d4ee) cell_vitu2_itu_pane_g_ParamLimits

0xf92d,	// (0x0003d4ee) cell_vitu2_itu_pane_g

0x1a03,	// (0x0002f5c4) bg_vkb2_func_pane_cp05_ParamLimits

0x1a03,	// (0x0002f5c4) bg_vkb2_func_pane_cp05

0x1a03,	// (0x0002f5c4) bg_vkb2_func_pane_cp03

0x1a03,	// (0x0002f5c4) bg_vkb2_func_pane_cp04

0x1a03,	// (0x0002f5c4) bg_vkb2_func_pane_cp10_ParamLimits

0x1a03,	// (0x0002f5c4) bg_vkb2_func_pane_cp10

0x74a7,	// (0x00035068) bg_vkb2_func_pane_cp08

0x748d,	// (0x0003504e) bg_vkb2_func_pane_cp06

0x749b,	// (0x0003505c) bg_vkb2_func_pane_cp07

0xd82c,	// (0x0003b3ed) bg_vkb2_func_pane_cp11_ParamLimits

0xd82c,	// (0x0003b3ed) bg_vkb2_func_pane_cp11

0xd841,	// (0x0003b402) bg_vkb2_func_pane_cp12_ParamLimits

0xd841,	// (0x0003b402) bg_vkb2_func_pane_cp12

0x9bce,	// (0x0003778f) bg_vkb2_func_pane_cp09

0xd240,	// (0x0003ae01) bg_vkb2_func_pane_g1

0xa82b,	// (0x000383ec) bg_vkb2_func_pane_g2

0xd248,	// (0x0003ae09) bg_vkb2_func_pane_g3

0xd250,	// (0x0003ae11) bg_vkb2_func_pane_g4

0xd464,	// (0x0003b025) bg_vkb2_func_pane_g5

0xd268,	// (0x0003ae29) bg_vkb2_func_pane_g6

0xd270,	// (0x0003ae31) bg_vkb2_func_pane_g7

0xd260,	// (0x0003ae21) bg_vkb2_func_pane_g8

0xa80b,	// (0x000383cc) bg_vkb2_func_pane_g9

0x0008,

0xfb32,	// (0x0003d6f3) bg_vkb2_func_pane_g

0x77df,	// (0x000353a0) blid2_tripm_pane_g6_ParamLimits

0x77df,	// (0x000353a0) blid2_tripm_pane_g6

0xd05d,	// (0x0003ac1e) mp4_progress_pane_g1

0x7858,	// (0x00035419) blid2_tripm_values_pane_ParamLimits

0x7858,	// (0x00035419) blid2_tripm_values_pane

0x794f,	// (0x00035510) blid2_tripm_values_pane_t1

0x795d,	// (0x0003551e) blid2_tripm_values_pane_t2

0x796b,	// (0x0003552c) blid2_tripm_values_pane_t3

0x7979,	// (0x0003553a) blid2_tripm_values_pane_t4

0x7987,	// (0x00035548) blid2_tripm_values_pane_t5

0x7995,	// (0x00035556) blid2_tripm_values_pane_t6

0x79a3,	// (0x00035564) blid2_tripm_values_pane_t7

0x79b1,	// (0x00035572) blid2_tripm_values_pane_t8

0x79bf,	// (0x00035580) blid2_tripm_values_pane_t9

0x0008,

0xfb45,	// (0x0003d706) blid2_tripm_values_pane_t

0x285e,	// (0x0003041f) call_video_pane_t1_ParamLimits

0x287c,	// (0x0003043d) call_video_pane_t2_ParamLimits

0xf279,	// (0x0003ce3a) call_video_pane_t_ParamLimits

0x431e,	// (0x00031edf) msg_header_pane_g1_ParamLimits

0xb048,	// (0x00038c09) msg_header_pane_g2_ParamLimits

0xb048,	// (0x00038c09) msg_header_pane_g2

0x0001,

0xf493,	// (0x0003d054) msg_header_pane_g_ParamLimits

0xf493,	// (0x0003d054) msg_header_pane_g

0xa32a,	// (0x00037eeb) main_clock2_pane_ParamLimits

0x5d2f,	// (0x000338f0) grid_clock2_toolbar_pane_ParamLimits

0x5d2f,	// (0x000338f0) grid_clock2_toolbar_pane

0x5d2f,	// (0x000338f0) listscroll_clock2_pane_ParamLimits

0x5d2f,	// (0x000338f0) listscroll_clock2_pane

0x5e2a,	// (0x000339eb) main_clock2_pane_t3_ParamLimits

0x5e2a,	// (0x000339eb) main_clock2_pane_t3

0x5e4e,	// (0x00033a0f) main_clock2_pane_t4_ParamLimits

0x5e4e,	// (0x00033a0f) main_clock2_pane_t4

0xd92c,	// (0x0003b4ed) cell_clock2_toolbar_pane

0xd934,	// (0x0003b4f5) cell_clock2_toolbar_pane_cp01

0xd934,	// (0x0003b4f5) cell_clock2_toolbar_pane_cp02

0xd93c,	// (0x0003b4fd) cell_clock2_toolbar_pane_cp03

0xd944,	// (0x0003b505) list_clock2_pane

0xad7f,	// (0x00038940) scroll_pane_cp10

0xd94c,	// (0x0003b50d) list_single_clock2_pane_ParamLimits

0xd94c,	// (0x0003b50d) list_single_clock2_pane

0xaec8,	// (0x00038a89) list_highlight_pane_cp08

0xd959,	// (0x0003b51a) list_single_clock2_pane_t1

0xd967,	// (0x0003b528) list_single_clock2_pane_t2

0x0001,

0xfb58,	// (0x0003d719) list_single_clock2_pane_t

0x9bce,	// (0x0003778f) bg_button_pane_cp10

0xd975,	// (0x0003b536) cell_clock2_toolbar_pane_g1

0x06c3,	// (0x0002e284) aid_main_viewer_pane_g1_ParamLimits

0x06c3,	// (0x0002e284) aid_main_viewer_pane_g1

0x06d1,	// (0x0002e292) aid_main_viewer_pane_g2_ParamLimits

0x06d1,	// (0x0002e292) aid_main_viewer_pane_g2

0x4375,	// (0x00031f36) aid_main_viewer_pane_g3_ParamLimits

0x4375,	// (0x00031f36) aid_main_viewer_pane_g3

0x4384,	// (0x00031f45) aid_main_viewer_pane_g4_ParamLimits

0x4384,	// (0x00031f45) aid_main_viewer_pane_g4

0x0003,

0xf4a4,	// (0x0003d065) aid_main_viewer_pane_g_ParamLimits

0xf4a4,	// (0x0003d065) aid_main_viewer_pane_g

0x0705,	// (0x0002e2c6) main_calc_pane_ParamLimits

0x072b,	// (0x0002e2ec) main_dialer2_pane_ParamLimits

0x1a1d,	// (0x0002f5de) main_cam6_pane

0x1a1d,	// (0x0002f5de) main_vid6_pane

0x5d3b,	// (0x000338fc) listscroll_gen_pane_cp06_ParamLimits

0x5d3b,	// (0x000338fc) listscroll_gen_pane_cp06

0x5e71,	// (0x00033a32) main_clock2_pane_t5_ParamLimits

0x5e71,	// (0x00033a32) main_clock2_pane_t5

0x5ecd,	// (0x00033a8e) aid_call2_pane_cp10_ParamLimits

0x5edf,	// (0x00033aa0) aid_call_pane_cp10_ParamLimits

0xadfd,	// (0x000389be) popup_clock_analogue_window_cp10_g1_ParamLimits

0xadfd,	// (0x000389be) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5ef1,	// (0x00033ab2) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5ef1,	// (0x00033ab2) popup_clock_analogue_window_cp10_g4_ParamLimits

0xadfd,	// (0x000389be) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7da,	// (0x0003d39b) popup_clock_analogue_window_cp10_g_ParamLimits

0x5f03,	// (0x00033ac4) popup_clock_analogue_window_cp10_t1_ParamLimits

0x65f9,	// (0x000341ba) cell_dialer2_keypad_pane_g2_ParamLimits

0x65f9,	// (0x000341ba) cell_dialer2_keypad_pane_g2

0x0001,

0xf8c0,	// (0x0003d481) cell_dialer2_keypad_pane_g_ParamLimits

0xf8c0,	// (0x0003d481) cell_dialer2_keypad_pane_g

0x6615,	// (0x000341d6) cell_dialer2_keypad_pane_t1

0x6bf5,	// (0x000347b6) main_cset_text2_pane_ParamLimits

0x6bf5,	// (0x000347b6) main_cset_text2_pane

0xd6d6,	// (0x0003b297) area_vitu2_query_pane_g1_ParamLimits

0x742c,	// (0x00034fed) area_vitu2_query_pane_g2_ParamLimits

0xfa75,	// (0x0003d636) area_vitu2_query_pane_g_ParamLimits

0xd75a,	// (0x0003b31b) area_vitu2_query_pane_t7_ParamLimits

0xd75a,	// (0x0003b31b) area_vitu2_query_pane_t7

0x748d,	// (0x0003504e) bg_button_pane_cp018_ParamLimits

0x749b,	// (0x0003505c) bg_button_pane_cp021_ParamLimits

0x74a7,	// (0x00035068) bg_button_pane_cp022_ParamLimits

0x74a7,	// (0x00035068) bg_vkb2_func_pane_cp08_ParamLimits

0x748d,	// (0x0003504e) bg_vkb2_func_pane_cp06_ParamLimits

0x749b,	// (0x0003505c) bg_vkb2_func_pane_cp07_ParamLimits

0x74b8,	// (0x00035079) input_focus_pane_cp09_ParamLimits

0xa737,	// (0x000382f8) cam6_autofocus_pane_ParamLimits

0xa737,	// (0x000382f8) cam6_autofocus_pane

0x18fd,	// (0x0002f4be) cam6_image_uncrop_pane_ParamLimits

0x18fd,	// (0x0002f4be) cam6_image_uncrop_pane

0x190c,	// (0x0002f4cd) cam6_indi_pane_ParamLimits

0x190c,	// (0x0002f4cd) cam6_indi_pane

0x1922,	// (0x0002f4e3) cam6_mode_pane_ParamLimits

0x1922,	// (0x0002f4e3) cam6_mode_pane

0x1934,	// (0x0002f4f5) cam6_timer_pane_ParamLimits

0x1934,	// (0x0002f4f5) cam6_timer_pane

0x1940,	// (0x0002f501) cam6_zoom_pane_ParamLimits

0x1940,	// (0x0002f501) cam6_zoom_pane

0x79cd,	// (0x0003558e) cam6_mode_pane_g1_ParamLimits

0x79cd,	// (0x0003558e) cam6_mode_pane_g1

0x79dd,	// (0x0003559e) cam6_mode_pane_g2_ParamLimits

0x79dd,	// (0x0003559e) cam6_mode_pane_g2

0x79ed,	// (0x000355ae) cam6_mode_pane_g3_ParamLimits

0x79ed,	// (0x000355ae) cam6_mode_pane_g3

0x79fd,	// (0x000355be) cam6_mode_pane_g4_ParamLimits

0x79fd,	// (0x000355be) cam6_mode_pane_g4

0x0003,

0xfb5d,	// (0x0003d71e) cam6_mode_pane_g_ParamLimits

0xfb5d,	// (0x0003d71e) cam6_mode_pane_g

0xd524,	// (0x0003b0e5) bg_tb_trans_pane_cp08_ParamLimits

0xd524,	// (0x0003b0e5) bg_tb_trans_pane_cp08

0xd97d,	// (0x0003b53e) cam6_battery_pane_ParamLimits

0xd97d,	// (0x0003b53e) cam6_battery_pane

0xd993,	// (0x0003b554) cam6_indi_pane_g1_ParamLimits

0xd993,	// (0x0003b554) cam6_indi_pane_g1

0xd9a5,	// (0x0003b566) cam6_indi_pane_g2_ParamLimits

0xd9a5,	// (0x0003b566) cam6_indi_pane_g2

0xd9b7,	// (0x0003b578) cam6_indi_pane_g3_ParamLimits

0xd9b7,	// (0x0003b578) cam6_indi_pane_g3

0x0002,

0xfb66,	// (0x0003d727) cam6_indi_pane_g_ParamLimits

0xfb66,	// (0x0003d727) cam6_indi_pane_g

0xd9c9,	// (0x0003b58a) cam6_indi_pane_t1_ParamLimits

0xd9c9,	// (0x0003b58a) cam6_indi_pane_t1

0x7a0d,	// (0x000355ce) cam6_autofocus_pane_g1

0x7a15,	// (0x000355d6) cam6_autofocus_pane_g2

0x7a1d,	// (0x000355de) cam6_autofocus_pane_g3

0x7a25,	// (0x000355e6) cam6_autofocus_pane_g4

0x0003,

0xfb6d,	// (0x0003d72e) cam6_autofocus_pane_g

0xd9ef,	// (0x0003b5b0) cam6_timer_pane_g1

0xd9f7,	// (0x0003b5b8) cam6_timer_pane_t1

0xda05,	// (0x0003b5c6) cam6_zoom_cont_pane

0xda0d,	// (0x0003b5ce) cam6_zoom_pane_g1

0xda15,	// (0x0003b5d6) cam6_zoom_pane_g2

0x7a2d,	// (0x000355ee) cam6_zoom_pane_g3

0x0002,

0xfb76,	// (0x0003d737) cam6_zoom_pane_g

0xc72a,	// (0x0003a2eb) cam6_battery_pane_g1

0xc72a,	// (0x0003a2eb) cam6_battery_pane_g2

0x0001,

0xf6e7,	// (0x0003d2a8) cam6_battery_pane_g

0xda1d,	// (0x0003b5de) cam6_zoom_cont_pane_g1

0xda26,	// (0x0003b5e7) cam6_zoom_cont_pane_g2

0xda2f,	// (0x0003b5f0) cam6_zoom_cont_pane_g3

0x0002,

0xfb7d,	// (0x0003d73e) cam6_zoom_cont_pane_g

0x7a4a,	// (0x0003560b) cam6_mode_pane_cp_ParamLimits

0x7a4a,	// (0x0003560b) cam6_mode_pane_cp

0x7a5c,	// (0x0003561d) cam6_zoom_pane_cp_ParamLimits

0x7a5c,	// (0x0003561d) cam6_zoom_pane_cp

0x7a68,	// (0x00035629) vid6_image_uncrop_cif_pane_ParamLimits

0x7a68,	// (0x00035629) vid6_image_uncrop_cif_pane

0x7a78,	// (0x00035639) vid6_image_uncrop_nhd_pane_ParamLimits

0x7a78,	// (0x00035639) vid6_image_uncrop_nhd_pane

0x7a87,	// (0x00035648) vid6_image_uncrop_vga_pane_ParamLimits

0x7a87,	// (0x00035648) vid6_image_uncrop_vga_pane

0x7a96,	// (0x00035657) vid6_image_uncrop_wvga_pane_ParamLimits

0x7a96,	// (0x00035657) vid6_image_uncrop_wvga_pane

0x7aa5,	// (0x00035666) vid6_indi_pane_ParamLimits

0x7aa5,	// (0x00035666) vid6_indi_pane

0xd524,	// (0x0003b0e5) bg_tb_trans_pane_cp09_ParamLimits

0xd524,	// (0x0003b0e5) bg_tb_trans_pane_cp09

0xda47,	// (0x0003b608) cam6_battery_pane_cp_ParamLimits

0xda47,	// (0x0003b608) cam6_battery_pane_cp

0xda53,	// (0x0003b614) vid6_indi_pane_g1_ParamLimits

0xda53,	// (0x0003b614) vid6_indi_pane_g1

0xda65,	// (0x0003b626) vid6_indi_pane_g2_ParamLimits

0xda65,	// (0x0003b626) vid6_indi_pane_g2

0xda77,	// (0x0003b638) vid6_indi_pane_g3_ParamLimits

0xda77,	// (0x0003b638) vid6_indi_pane_g3

0xda8c,	// (0x0003b64d) vid6_indi_pane_g4_ParamLimits

0xda8c,	// (0x0003b64d) vid6_indi_pane_g4

0xdaa1,	// (0x0003b662) vid6_indi_pane_g5_ParamLimits

0xdaa1,	// (0x0003b662) vid6_indi_pane_g5

0x0004,

0xfb84,	// (0x0003d745) vid6_indi_pane_g_ParamLimits

0xfb84,	// (0x0003d745) vid6_indi_pane_g

0xdabb,	// (0x0003b67c) vid6_indi_pane_t1_ParamLimits

0xdabb,	// (0x0003b67c) vid6_indi_pane_t1

0xdad1,	// (0x0003b692) vid6_indi_pane_t2_ParamLimits

0xdad1,	// (0x0003b692) vid6_indi_pane_t2

0xdaf9,	// (0x0003b6ba) vid6_indi_pane_t3_ParamLimits

0xdaf9,	// (0x0003b6ba) vid6_indi_pane_t3

0xdb21,	// (0x0003b6e2) vid6_indi_pane_t4_ParamLimits

0xdb21,	// (0x0003b6e2) vid6_indi_pane_t4

0x0003,

0xfb8f,	// (0x0003d750) vid6_indi_pane_t_ParamLimits

0xfb8f,	// (0x0003d750) vid6_indi_pane_t

0xdb45,	// (0x0003b706) wait_bar_pane_cp08

0x7abd,	// (0x0003567e) main_cset_text2_pane_t1_ParamLimits

0x7abd,	// (0x0003567e) main_cset_text2_pane_t1

0x7a35,	// (0x000355f6) listscroll_gen_pane_cp06_t1_ParamLimits

0x7a35,	// (0x000355f6) listscroll_gen_pane_cp06_t1

0x1a1d,	// (0x0002f5de) main_cam6_set_pane

0x67f8,	// (0x000343b9) bg_tb_trans_pane_cp06_ParamLimits

0x680e,	// (0x000343cf) cam4_indicators_pane_g1_ParamLimits

0x681f,	// (0x000343e0) cam4_indicators_pane_g2_ParamLimits

0xf8fd,	// (0x0003d4be) cam4_indicators_pane_g_ParamLimits

0x683d,	// (0x000343fe) cam4_indicators_pane_t1_ParamLimits

0x1a03,	// (0x0002f5c4) bg_tb_trans_pane_cp07_ParamLimits

0x6867,	// (0x00034428) vid4_indicators_pane_g1_ParamLimits

0x687b,	// (0x0003443c) vid4_indicators_pane_g2_ParamLimits

0x688f,	// (0x00034450) vid4_indicators_pane_g3_ParamLimits

0x68a0,	// (0x00034461) vid4_indicators_pane_g4_ParamLimits

0xf90f,	// (0x0003d4d0) vid4_indicators_pane_g_ParamLimits

0x68bc,	// (0x0003447d) vid4_indicators_pane_t1_ParamLimits

0x18d9,	// (0x0002f49a) vid4_progress_pane_g1_ParamLimits

0x18eb,	// (0x0002f4ac) vid4_progress_pane_g2_ParamLimits

0xaa68,	// (0x00038629) vid4_progress_pane_g3_ParamLimits

0xa6c8,	// (0x00038289) vid4_progress_pane_g4_ParamLimits

0xfac0,	// (0x0003d681) vid4_progress_pane_g_ParamLimits

0xa6e6,	// (0x000382a7) vid4_progress_pane_t1_ParamLimits

0xa6fb,	// (0x000382bc) vid4_progress_pane_t2_ParamLimits

0xa711,	// (0x000382d2) vid4_progress_pane_t3_ParamLimits

0xfacb,	// (0x0003d68c) vid4_progress_pane_t_ParamLimits

0xa727,	// (0x000382e8) wait_bar_pane_cp07_ParamLimits

0x7adc,	// (0x0003569d) main_cam6_set_pane_g2_ParamLimits

0x7adc,	// (0x0003569d) main_cam6_set_pane_g2

0x7b00,	// (0x000356c1) main_cset6_listscroll_pane_ParamLimits

0x7b00,	// (0x000356c1) main_cset6_listscroll_pane

0x7b1c,	// (0x000356dd) main_cset6_slider_pane_ParamLimits

0x7b1c,	// (0x000356dd) main_cset6_slider_pane

0x7b32,	// (0x000356f3) main_cset6_text2_pane_ParamLimits

0x7b32,	// (0x000356f3) main_cset6_text2_pane

0xdb54,	// (0x0003b715) main_cset6_text_pane

0xdb5c,	// (0x0003b71d) main_cset_list_pane_copy1_ParamLimits

0xdb5c,	// (0x0003b71d) main_cset_list_pane_copy1

0xdb6c,	// (0x0003b72d) scroll_pane_cp028_copy1

0x7b40,	// (0x00035701) cset_list_set_pane_copy1

0x7b52,	// (0x00035713) aid_position_infowindow_above_copy1

0x7b5a,	// (0x0003571b) aid_position_infowindow_below_copy1

0x7b62,	// (0x00035723) cset_list_set_pane_g1_copy1

0x7b6a,	// (0x0003572b) cset_list_set_pane_g3_copy1_ParamLimits

0x7b6a,	// (0x0003572b) cset_list_set_pane_g3_copy1

0x7b79,	// (0x0003573a) cset_list_set_pane_t1_copy1_ParamLimits

0x7b79,	// (0x0003573a) cset_list_set_pane_t1_copy1

0xa66e,	// (0x0003822f) list_highlight_pane_cp021_copy1_ParamLimits

0xa66e,	// (0x0003822f) list_highlight_pane_cp021_copy1

0xdb75,	// (0x0003b736) cset6_slider_pane_ParamLimits

0xdb75,	// (0x0003b736) cset6_slider_pane

0xdba1,	// (0x0003b762) main_cset6_slider_pane_g1_ParamLimits

0xdba1,	// (0x0003b762) main_cset6_slider_pane_g1

0x7b8e,	// (0x0003574f) main_cset6_slider_pane_g2_ParamLimits

0x7b8e,	// (0x0003574f) main_cset6_slider_pane_g2

0xdbc9,	// (0x0003b78a) main_cset6_slider_pane_g3_ParamLimits

0xdbc9,	// (0x0003b78a) main_cset6_slider_pane_g3

0x7bb6,	// (0x00035777) main_cset6_slider_pane_g4_ParamLimits

0x7bb6,	// (0x00035777) main_cset6_slider_pane_g4

0x7bc2,	// (0x00035783) main_cset6_slider_pane_g5_ParamLimits

0x7bc2,	// (0x00035783) main_cset6_slider_pane_g5

0xd36f,	// (0x0003af30) main_cset6_slider_pane_g7_ParamLimits

0xd36f,	// (0x0003af30) main_cset6_slider_pane_g7

0xd37b,	// (0x0003af3c) main_cset6_slider_pane_g8_ParamLimits

0xd37b,	// (0x0003af3c) main_cset6_slider_pane_g8

0x6ca2,	// (0x00034863) main_cset6_slider_pane_g9_ParamLimits

0x6ca2,	// (0x00034863) main_cset6_slider_pane_g9

0x6cae,	// (0x0003486f) main_cset6_slider_pane_g10_ParamLimits

0x6cae,	// (0x0003486f) main_cset6_slider_pane_g10

0x6cba,	// (0x0003487b) main_cset6_slider_pane_g11_ParamLimits

0x6cba,	// (0x0003487b) main_cset6_slider_pane_g11

0x6cc6,	// (0x00034887) main_cset6_slider_pane_g12_ParamLimits

0x6cc6,	// (0x00034887) main_cset6_slider_pane_g12

0x6cd2,	// (0x00034893) main_cset6_slider_pane_g13_ParamLimits

0x6cd2,	// (0x00034893) main_cset6_slider_pane_g13

0x6cde,	// (0x0003489f) main_cset6_slider_pane_g14_ParamLimits

0x6cde,	// (0x0003489f) main_cset6_slider_pane_g14

0x7bce,	// (0x0003578f) main_cset6_slider_pane_g15_ParamLimits

0x7bce,	// (0x0003578f) main_cset6_slider_pane_g15

0x6d02,	// (0x000348c3) main_cset6_slider_pane_g16_ParamLimits

0x6d02,	// (0x000348c3) main_cset6_slider_pane_g16

0x6d0e,	// (0x000348cf) main_cset6_slider_pane_g17_ParamLimits

0x6d0e,	// (0x000348cf) main_cset6_slider_pane_g17

0x0011,

0xfb98,	// (0x0003d759) main_cset6_slider_pane_g_ParamLimits

0xfb98,	// (0x0003d759) main_cset6_slider_pane_g

0xdbd5,	// (0x0003b796) main_cset6_slider_pane_t1_ParamLimits

0xdbd5,	// (0x0003b796) main_cset6_slider_pane_t1

0x7bfe,	// (0x000357bf) main_cset6_slider_pane_t2_ParamLimits

0x7bfe,	// (0x000357bf) main_cset6_slider_pane_t2

0x7c29,	// (0x000357ea) main_cset6_slider_pane_t3_ParamLimits

0x7c29,	// (0x000357ea) main_cset6_slider_pane_t3

0x7c54,	// (0x00035815) main_cset6_slider_pane_t4_ParamLimits

0x7c54,	// (0x00035815) main_cset6_slider_pane_t4

0x7c7f,	// (0x00035840) main_cset6_slider_pane_t5_ParamLimits

0x7c7f,	// (0x00035840) main_cset6_slider_pane_t5

0xdc16,	// (0x0003b7d7) main_cset6_slider_pane_t7_ParamLimits

0xdc16,	// (0x0003b7d7) main_cset6_slider_pane_t7

0x7caa,	// (0x0003586b) main_cset6_slider_pane_t8_ParamLimits

0x7caa,	// (0x0003586b) main_cset6_slider_pane_t8

0x7cce,	// (0x0003588f) main_cset6_slider_pane_t9_ParamLimits

0x7cce,	// (0x0003588f) main_cset6_slider_pane_t9

0x7cf2,	// (0x000358b3) main_cset6_slider_pane_t10_ParamLimits

0x7cf2,	// (0x000358b3) main_cset6_slider_pane_t10

0x7d16,	// (0x000358d7) main_cset6_slider_pane_t11_ParamLimits

0x7d16,	// (0x000358d7) main_cset6_slider_pane_t11

0xdc4c,	// (0x0003b80d) main_cset6_slider_pane_t14_ParamLimits

0xdc4c,	// (0x0003b80d) main_cset6_slider_pane_t14

0xdc85,	// (0x0003b846) main_cset6_slider_pane_t15_ParamLimits

0xdc85,	// (0x0003b846) main_cset6_slider_pane_t15

0x000b,

0xfbbd,	// (0x0003d77e) main_cset6_slider_pane_t_ParamLimits

0xfbbd,	// (0x0003d77e) main_cset6_slider_pane_t

0xd532,	// (0x0003b0f3) cset_slider_pane_g1_copy1

0xd53b,	// (0x0003b0fc) cset_slider_pane_g2_copy1

0xd544,	// (0x0003b105) cset_slider_pane_g3_copy1

0x9bce,	// (0x0003778f) bg_popup_sub_pane_cp011_copy1

0xdcbe,	// (0x0003b87f) main_cset_text_pane_g1_copy1

0xd4b5,	// (0x0003b076) main_cset_text_pane_t1_copy1

0xd4c3,	// (0x0003b084) main_cset_text_pane_t2_copy1

0xd4d1,	// (0x0003b092) main_cset_text_pane_t3_copy1

0xd4df,	// (0x0003b0a0) main_cset_text_pane_t4_copy1

0xd4ed,	// (0x0003b0ae) main_cset_text_pane_t5_copy1

0xdcc6,	// (0x0003b887) main_cset_text_pane_t6_copy1

0xdcd4,	// (0x0003b895) main_cset_text_pane_t7_copy1

0x7e0a,	// (0x000359cb) main_cset_text2_pane_t1_copy1

0x1a03,	// (0x0002f5c4) main_ncimui_pane

0x0967,	// (0x0002e528) popup_query_ncimui_window_ParamLimits

0x0967,	// (0x0002e528) popup_query_ncimui_window

0xca37,	// (0x0003a5f8) field_cale_ev2_pane_g4_ParamLimits

0xca37,	// (0x0003a5f8) field_cale_ev2_pane_g4

0x6397,	// (0x00033f58) cell_video_dialer_keypad_pane_g2_ParamLimits

0x6397,	// (0x00033f58) cell_video_dialer_keypad_pane_g2

0x0001,

0xf89b,	// (0x0003d45c) cell_video_dialer_keypad_pane_g_ParamLimits

0xf89b,	// (0x0003d45c) cell_video_dialer_keypad_pane_g

0x63af,	// (0x00033f70) cell_video_dialer_keypad_pane_t1

0x9bce,	// (0x0003778f) bg_popup_window_pane_cp012

0xac40,	// (0x00038801) heading_pane_cp06

0xdd00,	// (0x0003b8c1) ncim_query_content_pane

0x9bce,	// (0x0003778f) bg_popup_heading_pane_cp01

0xdd08,	// (0x0003b8c9) ncim_heading_pane_t1

0xdd16,	// (0x0003b8d7) ncim_indicator_popup_pane

0xdd28,	// (0x0003b8e9) ncim_query_button_pane

0xdd3c,	// (0x0003b8fd) ncim_query_content_pane_t1

0xdd4e,	// (0x0003b90f) ncim_query_content_pane_t2

0x0005,

0xfc01,	// (0x0003d7c2) ncim_query_content_pane_t

0xdd88,	// (0x0003b949) ncim_query_list_pane

0xdd9a,	// (0x0003b95b) ncim_query_popup_pane

0xdd16,	// (0x0003b8d7) ncim_indicator_popup_pane_ParamLimits

0x7f4e,	// (0x00035b0f) ncim_query_content_pane_g1_ParamLimits

0x7f4e,	// (0x00035b0f) ncim_query_content_pane_g1

0xdd3c,	// (0x0003b8fd) ncim_query_content_pane_t1_ParamLimits

0xdd4e,	// (0x0003b90f) ncim_query_content_pane_t2_ParamLimits

0x7f5a,	// (0x00035b1b) ncim_query_content_pane_t3_ParamLimits

0x7f5a,	// (0x00035b1b) ncim_query_content_pane_t3

0x7f82,	// (0x00035b43) ncim_query_content_pane_t4_ParamLimits

0x7f82,	// (0x00035b43) ncim_query_content_pane_t4

0x7faa,	// (0x00035b6b) ncim_query_content_pane_t5_ParamLimits

0x7faa,	// (0x00035b6b) ncim_query_content_pane_t5

0xdd60,	// (0x0003b921) ncim_query_content_pane_t6_ParamLimits

0xdd60,	// (0x0003b921) ncim_query_content_pane_t6

0xfc01,	// (0x0003d7c2) ncim_query_content_pane_t_ParamLimits

0xdd88,	// (0x0003b949) ncim_query_list_pane_ParamLimits

0xdd9a,	// (0x0003b95b) ncim_query_popup_pane_ParamLimits

0xddae,	// (0x0003b96f) wait_bar_pane_cp04

0x9bce,	// (0x0003778f) input_focus_pane_cp011

0xddb6,	// (0x0003b977) ncim_query_popup_pane_t1

0xddc4,	// (0x0003b985) ncim_list_query_list_pane_ParamLimits

0xddc4,	// (0x0003b985) ncim_list_query_list_pane

0x9bce,	// (0x0003778f) bg_button_pane_cp027

0xddd7,	// (0x0003b998) ncim_query_button_pane_g1

0x9bce,	// (0x0003778f) list_highlight_pane_cp012

0xdde1,	// (0x0003b9a2) ncim_list_query_list_pane_g1

0xdde9,	// (0x0003b9aa) ncim_list_query_list_pane_t1

0x682e,	// (0x000343ef) cam4_indicators_pane_g3_ParamLimits

0x682e,	// (0x000343ef) cam4_indicators_pane_g3

0x68ac,	// (0x0003446d) vid4_indicators_pane_g5_ParamLimits

0x68ac,	// (0x0003446d) vid4_indicators_pane_g5

0xa6d7,	// (0x00038298) vid4_progress_pane_g5_ParamLimits

0xa6d7,	// (0x00038298) vid4_progress_pane_g5

0x7e3c,	// (0x000359fd) main_ncimui_pane_g1

0x7ea2,	// (0x00035a63) ncimui_group_query_pane_ParamLimits

0x7ea2,	// (0x00035a63) ncimui_group_query_pane

0x7eea,	// (0x00035aab) ncimui_list_pane_ParamLimits

0x7eea,	// (0x00035aab) ncimui_list_pane

0x7f11,	// (0x00035ad2) ncimui_text_pane_ParamLimits

0x7f11,	// (0x00035ad2) ncimui_text_pane

0x7fd2,	// (0x00035b93) ncimui_text_pane_t1_ParamLimits

0x7fd2,	// (0x00035b93) ncimui_text_pane_t1

0xddf7,	// (0x0003b9b8) ncimui_list_single_graphic_pane_ParamLimits

0xddf7,	// (0x0003b9b8) ncimui_list_single_graphic_pane

0x7ff0,	// (0x00035bb1) ncimui_query_pane_ParamLimits

0x7ff0,	// (0x00035bb1) ncimui_query_pane

0x9bce,	// (0x0003778f) list_highlight_pane_cp013

0xde07,	// (0x0003b9c8) ncim_list_query_list_pane_t1_copy1

0xdde1,	// (0x0003b9a2) ncim_list_single_graphic_pane_g1

0xde15,	// (0x0003b9d6) ncim_query_button_pane_cp01

0xde21,	// (0x0003b9e2) ncim_query_entry_pane_ParamLimits

0xde21,	// (0x0003b9e2) ncim_query_entry_pane

0xde34,	// (0x0003b9f5) ncimui_query_pane_g1

0xde40,	// (0x0003ba01) ncimui_query_pane_t1_ParamLimits

0xde40,	// (0x0003ba01) ncimui_query_pane_t1

0xa66e,	// (0x0003822f) input_focus_pane_cp012

0xde59,	// (0x0003ba1a) ncim_query_entry_pane_t1

0xa32a,	// (0x00037eeb) main_im_pane_ParamLimits

0x1a03,	// (0x0002f5c4) main_mobtv_pane_ParamLimits

0x1a03,	// (0x0002f5c4) main_mobtv_pane

0x7be6,	// (0x000357a7) main_cset6_slider_pane_g18_ParamLimits

0x7be6,	// (0x000357a7) main_cset6_slider_pane_g18

0x7bf2,	// (0x000357b3) main_cset6_slider_pane_g19_ParamLimits

0x7bf2,	// (0x000357b3) main_cset6_slider_pane_g19

0x8003,	// (0x00035bc4) bg_main_mobtv_pane_ParamLimits

0x8003,	// (0x00035bc4) bg_main_mobtv_pane

0x8011,	// (0x00035bd2) main_mobtv_info_pane

0x801a,	// (0x00035bdb) main_mobtv_loading_pane_ParamLimits

0x801a,	// (0x00035bdb) main_mobtv_loading_pane

0xde6b,	// (0x0003ba2c) main_mobtv_pg_channel_list_pane

0xde75,	// (0x0003ba36) main_mobtv_pg_hdr_pane

0x8027,	// (0x00035be8) main_mobtv_programe_curr_pane_ParamLimits

0x8027,	// (0x00035be8) main_mobtv_programe_curr_pane

0x8034,	// (0x00035bf5) main_mobtv_programe_next_pane_ParamLimits

0x8034,	// (0x00035bf5) main_mobtv_programe_next_pane

0xde7e,	// (0x0003ba3f) popup_mobtv_noti_window

0xc72a,	// (0x0003a2eb) main_tv_pg_hdr_pane_g1

0xde86,	// (0x0003ba47) main_tv_pg_hdr_pane_g2

0xde8e,	// (0x0003ba4f) main_tv_pg_hdr_pane_g3

0xde96,	// (0x0003ba57) main_tv_pg_hdr_pane_g4

0xde9e,	// (0x0003ba5f) main_tv_pg_hdr_pane_g5

0xdea8,	// (0x0003ba69) main_tv_pg_hdr_pane_g6

0xdeb2,	// (0x0003ba73) main_tv_pg_hdr_pane_g7

0xdebc,	// (0x0003ba7d) main_tv_pg_hdr_pane_g8

0xdec6,	// (0x0003ba87) main_tv_pg_hdr_pane_g9

0xded0,	// (0x0003ba91) main_tv_pg_hdr_pane_g10

0xdeda,	// (0x0003ba9b) main_tv_pg_hdr_pane_g11

0x000a,

0xfc0e,	// (0x0003d7cf) main_tv_pg_hdr_pane_g

0xdee4,	// (0x0003baa5) main_tv_pg_hdr_pane_t1

0xdef2,	// (0x0003bab3) main_tv_pg_hdr_pane_t2

0xdf00,	// (0x0003bac1) main_tv_pg_hdr_pane_t3

0xdf10,	// (0x0003bad1) main_tv_pg_hdr_pane_t4

0xdf20,	// (0x0003bae1) main_tv_pg_hdr_pane_t5

0x0004,

0xfc25,	// (0x0003d7e6) main_tv_pg_hdr_pane_t

0xdf30,	// (0x0003baf1) single_mobtv_pg_channel_pane_ParamLimits

0xdf30,	// (0x0003baf1) single_mobtv_pg_channel_pane

0xdf42,	// (0x0003bb03) single_mobtv_pg_channel_table_pane

0xdf4b,	// (0x0003bb0c) single_mobtv_pg_channel_thumb_pane

0xdf54,	// (0x0003bb15) single_tv_pg_channel_pane_g1

0xdf5d,	// (0x0003bb1e) single_tv_pg_channel_pane_g2

0x0001,

0xfc30,	// (0x0003d7f1) single_tv_pg_channel_pane_g

0xc98a,	// (0x0003a54b) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc98a,	// (0x0003a54b) bg_single_mobtv_pg_channel_thumb_pane

0xdf66,	// (0x0003bb27) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdf66,	// (0x0003bb27) single_mobtv_pg_channel_thumb_pane_g1

0xdf74,	// (0x0003bb35) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdf74,	// (0x0003bb35) single_mobtv_pg_channel_thumb_pane_g2

0xdf80,	// (0x0003bb41) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdf80,	// (0x0003bb41) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc35,	// (0x0003d7f6) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc35,	// (0x0003d7f6) single_mobtv_pg_channel_thumb_pane_g

0xdf8c,	// (0x0003bb4d) single_mobtv_pg_channel_thumb_pane_t1

0xdf9a,	// (0x0003bb5b) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc3c,	// (0x0003d7fd) single_mobtv_pg_channel_thumb_pane_t

0xc72a,	// (0x0003a2eb) bg_single_mobtv_pg_channel_table_pane_g1

0xc72a,	// (0x0003a2eb) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6e7,	// (0x0003d2a8) bg_single_mobtv_pg_channel_table_pane_g

0xdfa8,	// (0x0003bb69) single_mobtv_pg_channel_table_pane_t1

0xdfb6,	// (0x0003bb77) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc41,	// (0x0003d802) single_mobtv_pg_channel_table_pane_t

0x8049,	// (0x00035c0a) main_mobtv_info_pane_g1_ParamLimits

0x8049,	// (0x00035c0a) main_mobtv_info_pane_g1

0x8067,	// (0x00035c28) main_mobtv_info_pane_t1_ParamLimits

0x8067,	// (0x00035c28) main_mobtv_info_pane_t1

0x80df,	// (0x00035ca0) main_mobtv_info_pane_t2_ParamLimits

0x80df,	// (0x00035ca0) main_mobtv_info_pane_t2

0x0002,

0xfc4b,	// (0x0003d80c) main_mobtv_info_pane_t_ParamLimits

0xfc4b,	// (0x0003d80c) main_mobtv_info_pane_t

0x816e,	// (0x00035d2f) wait_bar_pane_cp05

0x8180,	// (0x00035d41) main_mobtv_loading_pane_g1_ParamLimits

0x8180,	// (0x00035d41) main_mobtv_loading_pane_g1

0x8193,	// (0x00035d54) main_mobtv_loading_pane_g2_ParamLimits

0x8193,	// (0x00035d54) main_mobtv_loading_pane_g2

0x819f,	// (0x00035d60) main_mobtv_loading_pane_g3_ParamLimits

0x819f,	// (0x00035d60) main_mobtv_loading_pane_g3

0x0002,

0xfc52,	// (0x0003d813) main_mobtv_loading_pane_g_ParamLimits

0xfc52,	// (0x0003d813) main_mobtv_loading_pane_g

0xdfc4,	// (0x0003bb85) main_mobtv_loading_pane_t1_ParamLimits

0xdfc4,	// (0x0003bb85) main_mobtv_loading_pane_t1

0xdfdc,	// (0x0003bb9d) main_mobtv_loading_pane_t2_ParamLimits

0xdfdc,	// (0x0003bb9d) main_mobtv_loading_pane_t2

0x0001,

0xfc59,	// (0x0003d81a) main_mobtv_loading_pane_t_ParamLimits

0xfc59,	// (0x0003d81a) main_mobtv_loading_pane_t

0x81b2,	// (0x00035d73) wait_bar_pane_cp06_ParamLimits

0x81b2,	// (0x00035d73) wait_bar_pane_cp06

0xe000,	// (0x0003bbc1) main_mobtv_programe_curr_pane_t1

0xe00e,	// (0x0003bbcf) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc5e,	// (0x0003d81f) main_mobtv_programe_curr_pane_t

0xe01c,	// (0x0003bbdd) main_mobtv_programe_next_pane_t1

0xe02a,	// (0x0003bbeb) main_mobtv_programe_next_pane_t2

0xe038,	// (0x0003bbf9) main_mobtv_programe_next_pane_t3

0x0002,

0xfc63,	// (0x0003d824) main_mobtv_programe_next_pane_t

0x9bce,	// (0x0003778f) bg_popup_mobtv_noti_window_pane

0xe046,	// (0x0003bc07) popup_mobtv_noti_window_g1

0xe04e,	// (0x0003bc0f) popup_mobtv_noti_window_t1

0xe05c,	// (0x0003bc1d) popup_mobtv_noti_window_t2

0x0001,

0xfc6a,	// (0x0003d82b) popup_mobtv_noti_window_t

0xc72a,	// (0x0003a2eb) bg_popup_mobtv_noti_window_pane_g1

0x1a1d,	// (0x0002f5de) sc_clock_pane

0x1a1d,	// (0x0002f5de) main_fs_bigclock_pane

0x7842,	// (0x00035403) blid2_tripm_pane_t4_ParamLimits

0x7842,	// (0x00035403) blid2_tripm_pane_t4

0x81c1,	// (0x00035d82) sc_clock_pane_g1_ParamLimits

0x81c1,	// (0x00035d82) sc_clock_pane_g1

0x81d3,	// (0x00035d94) sc_clock_pane_t1_ParamLimits

0x81d3,	// (0x00035d94) sc_clock_pane_t1

0x81f5,	// (0x00035db6) sc_clock_pane_t2_ParamLimits

0x81f5,	// (0x00035db6) sc_clock_pane_t2

0x820d,	// (0x00035dce) sc_clock_pane_t3_ParamLimits

0x820d,	// (0x00035dce) sc_clock_pane_t3

0x0004,

0xfc6f,	// (0x0003d830) sc_clock_pane_t_ParamLimits

0xfc6f,	// (0x0003d830) sc_clock_pane_t

0x90f0,	// (0x00036cb1) main_fs_bigclock_indicator_pane_ParamLimits

0x90f0,	// (0x00036cb1) main_fs_bigclock_indicator_pane

0xc95a,	// (0x0003a51b) main_fs_bigclock_pane_g1_ParamLimits

0xc95a,	// (0x0003a51b) main_fs_bigclock_pane_g1

0x90fc,	// (0x00036cbd) main_fs_bigclock_pane_t1_ParamLimits

0x90fc,	// (0x00036cbd) main_fs_bigclock_pane_t1

0x910e,	// (0x00036ccf) main_fs_bigclock_pane_t2_ParamLimits

0x910e,	// (0x00036ccf) main_fs_bigclock_pane_t2

0x9120,	// (0x00036ce1) main_fs_bigclock_pane_t3_ParamLimits

0x9120,	// (0x00036ce1) main_fs_bigclock_pane_t3

0x0002,

0xfe64,	// (0x0003da25) main_fs_bigclock_pane_t_ParamLimits

0xfe64,	// (0x0003da25) main_fs_bigclock_pane_t

0xec33,	// (0x0003c7f4) main_fs_bigclock_indicator_pane_g1

0xdd30,	// (0x0003b8f1) ncim_query_content_pane_g2_ParamLimits

0xdd30,	// (0x0003b8f1) ncim_query_content_pane_g2

0x0001,

0xfbfc,	// (0x0003d7bd) ncim_query_content_pane_g_ParamLimits

0xfbfc,	// (0x0003d7bd) ncim_query_content_pane_g

0x8226,	// (0x00035de7) sc_clock_pane_t4_ParamLimits

0x8226,	// (0x00035de7) sc_clock_pane_t4

0x1a03,	// (0x0002f5c4) main_radioblah_pane

0xd144,	// (0x0003ad05) cell_call4_button_pane_t1_copy1_ParamLimits

0xd144,	// (0x0003ad05) cell_call4_button_pane_t1_copy1

0x7e54,	// (0x00035a15) main_ncimui_pane_t1_ParamLimits

0x7e54,	// (0x00035a15) main_ncimui_pane_t1

0x7e6e,	// (0x00035a2f) main_ncimui_pane_t2_ParamLimits

0x7e6e,	// (0x00035a2f) main_ncimui_pane_t2

0x0002,

0xfbf5,	// (0x0003d7b6) main_ncimui_pane_t_ParamLimits

0xfbf5,	// (0x0003d7b6) main_ncimui_pane_t

0xe1a9,	// (0x0003bd6a) main_radioblah_anim_pane_ParamLimits

0xe1a9,	// (0x0003bd6a) main_radioblah_anim_pane

0xe1ba,	// (0x0003bd7b) main_radioblah_info_pane_ParamLimits

0xe1ba,	// (0x0003bd7b) main_radioblah_info_pane

0xe1ce,	// (0x0003bd8f) main_radioblah_pane_t1_ParamLimits

0xe1ce,	// (0x0003bd8f) main_radioblah_pane_t1

0xe1ea,	// (0x0003bdab) main_radioblah_pane_t2_ParamLimits

0xe1ea,	// (0x0003bdab) main_radioblah_pane_t2

0x0003,

0xfc90,	// (0x0003d851) main_radioblah_pane_t_ParamLimits

0xfc90,	// (0x0003d851) main_radioblah_pane_t

0x82dc,	// (0x00035e9d) main_radioblah_rocker_ctrl_pane_ParamLimits

0x82dc,	// (0x00035e9d) main_radioblah_rocker_ctrl_pane

0xe232,	// (0x0003bdf3) main_radioblah_info_pane_t1_ParamLimits

0xe232,	// (0x0003bdf3) main_radioblah_info_pane_t1

0x8334,	// (0x00035ef5) main_radioblah_info_pane_t2_ParamLimits

0x8334,	// (0x00035ef5) main_radioblah_info_pane_t2

0x0003,

0xfc99,	// (0x0003d85a) main_radioblah_info_pane_t_ParamLimits

0xfc99,	// (0x0003d85a) main_radioblah_info_pane_t

0xc72a,	// (0x0003a2eb) main_radioblah_rocker_ctrl_pane_g1

0x83e4,	// (0x00035fa5) main_radioblah_rocker_ctrl_pane_g2

0x83ec,	// (0x00035fad) main_radioblah_rocker_ctrl_pane_g3

0x83f4,	// (0x00035fb5) main_radioblah_rocker_ctrl_pane_g4

0x83fc,	// (0x00035fbd) main_radioblah_rocker_ctrl_pane_g5

0x8404,	// (0x00035fc5) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfca2,	// (0x0003d863) main_radioblah_rocker_ctrl_pane_g

0x7e0a,	// (0x000359cb) main_cset_text2_pane_t1_copy1_ParamLimits

0x67dc,	// (0x0003439d) cam4_image_uncrop_qvga_pane

0x6857,	// (0x00034418) vid4_image_uncrop_qcif_pane

0xa737,	// (0x000382f8) cam6_image_uncrop_qvga_pane_ParamLimits

0xa737,	// (0x000382f8) cam6_image_uncrop_qvga_pane

0xda37,	// (0x0003b5f8) vid6_image_uncrop_qcif_pane_ParamLimits

0xda37,	// (0x0003b5f8) vid6_image_uncrop_qcif_pane

0x9bce,	// (0x0003778f) bg_popup_preview_window_pane_cp03

0xdce2,	// (0x0003b8a3) list_cset_text2_pane

0xdcea,	// (0x0003b8ab) main_cset6_text2_pane_g1

0xdcf2,	// (0x0003b8b3) main_cset6_text2_pane_t1

0x840c,	// (0x00035fcd) list_cset_text2_pane_t1_ParamLimits

0x840c,	// (0x00035fcd) list_cset_text2_pane_t1

0x1a03,	// (0x0002f5c4) main_radioblah_pane_ParamLimits

0x815a,	// (0x00035d1b) main_mobtv_info_pane_t3_ParamLimits

0x815a,	// (0x00035d1b) main_mobtv_info_pane_t3

0x82ca,	// (0x00035e8b) main_radioblah_pane_g1

0x8304,	// (0x00035ec5) main_radioblah_info_pane_g1

0x8389,	// (0x00035f4a) main_radioblah_info_pane_t3_ParamLimits

0x8389,	// (0x00035f4a) main_radioblah_info_pane_t3

0x3758,	// (0x00031319) highlight_cell_cale_month_pane_ParamLimits

0x3758,	// (0x00031319) highlight_cell_cale_month_pane

0x1a1d,	// (0x0002f5de) main_phob_fisheye_pane

0xcae6,	// (0x0003a6a7) scroll_pane_cp0031_ParamLimits

0xcae6,	// (0x0003a6a7) scroll_pane_cp0031

0xdb45,	// (0x0003b706) wait_bar_pane_cp08_ParamLimits

0x7b40,	// (0x00035701) cset_list_set_pane_copy1_ParamLimits

0xe26c,	// (0x0003be2d) highlight_cell_cale_month_pane_g1

0x8427,	// (0x00035fe8) highlight_cell_cale_month_pane_t1

0xd7c6,	// (0x0003b387) list_gen_pane_cp01

0xd35a,	// (0x0003af1b) scroll_pane_01

0x8435,	// (0x00035ff6) list_single_double_fisheye_pane

0x843e,	// (0x00035fff) list_double_fisheye_pane_g1_ParamLimits

0x843e,	// (0x00035fff) list_double_fisheye_pane_g1

0x844a,	// (0x0003600b) list_double_fisheye_pane_g2_ParamLimits

0x844a,	// (0x0003600b) list_double_fisheye_pane_g2

0x8456,	// (0x00036017) list_double_fisheye_pane_g3_ParamLimits

0x8456,	// (0x00036017) list_double_fisheye_pane_g3

0x0004,

0xfcaf,	// (0x0003d870) list_double_fisheye_pane_g_ParamLimits

0xfcaf,	// (0x0003d870) list_double_fisheye_pane_g

0x847a,	// (0x0003603b) list_double_fisheye_pane_t1_ParamLimits

0x847a,	// (0x0003603b) list_double_fisheye_pane_t1

0x8495,	// (0x00036056) list_double_fisheye_pane_t2_ParamLimits

0x8495,	// (0x00036056) list_double_fisheye_pane_t2

0x0001,

0xfcba,	// (0x0003d87b) list_double_fisheye_pane_t_ParamLimits

0xfcba,	// (0x0003d87b) list_double_fisheye_pane_t

0x1a1d,	// (0x0002f5de) main_call5_pane

0x8251,	// (0x00035e12) sc_swipe_pane_ParamLimits

0x8251,	// (0x00035e12) sc_swipe_pane

0x84ca,	// (0x0003608b) call5_image_pane_ParamLimits

0x84ca,	// (0x0003608b) call5_image_pane

0x84e7,	// (0x000360a8) call5_swipe_1_pane_ParamLimits

0x84e7,	// (0x000360a8) call5_swipe_1_pane

0x84fa,	// (0x000360bb) call5_swipe_2_pane_ParamLimits

0x84fa,	// (0x000360bb) call5_swipe_2_pane

0x8525,	// (0x000360e6) popup_call5_audio_first_window_ParamLimits

0x8525,	// (0x000360e6) popup_call5_audio_first_window

0xc98a,	// (0x0003a54b) call5_swipe_1_pane_g1_ParamLimits

0xc98a,	// (0x0003a54b) call5_swipe_1_pane_g1

0xe274,	// (0x0003be35) call5_swipe_1_pane_g2_ParamLimits

0xe274,	// (0x0003be35) call5_swipe_1_pane_g2

0x0001,

0xfcbf,	// (0x0003d880) call5_swipe_1_pane_g_ParamLimits

0xfcbf,	// (0x0003d880) call5_swipe_1_pane_g

0xe280,	// (0x0003be41) call5_swipe_1_pane_t1_ParamLimits

0xe280,	// (0x0003be41) call5_swipe_1_pane_t1

0xc98a,	// (0x0003a54b) call5_swipe_2_pane_g1_ParamLimits

0xc98a,	// (0x0003a54b) call5_swipe_2_pane_g1

0xe295,	// (0x0003be56) call5_swipe_2_pane_g2_ParamLimits

0xe295,	// (0x0003be56) call5_swipe_2_pane_g2

0x0001,

0xfcc4,	// (0x0003d885) call5_swipe_2_pane_g_ParamLimits

0xfcc4,	// (0x0003d885) call5_swipe_2_pane_g

0xe2a1,	// (0x0003be62) call5_swipe_2_pane_t1_ParamLimits

0xe2a1,	// (0x0003be62) call5_swipe_2_pane_t1

0xe2b6,	// (0x0003be77) sc_swipe_pane_g1_ParamLimits

0xe2b6,	// (0x0003be77) sc_swipe_pane_g1

0xe2c3,	// (0x0003be84) sc_swipe_pane_g2_ParamLimits

0xe2c3,	// (0x0003be84) sc_swipe_pane_g2

0x0001,

0xfcc9,	// (0x0003d88a) sc_swipe_pane_g_ParamLimits

0xfcc9,	// (0x0003d88a) sc_swipe_pane_g

0xe2cf,	// (0x0003be90) sc_swipe_pane_t1_ParamLimits

0xe2cf,	// (0x0003be90) sc_swipe_pane_t1

0x1a1d,	// (0x0002f5de) main_cmail_launcher_pane

0x8536,	// (0x000360f7) aid_size_cell_cmail_l_ParamLimits

0x8536,	// (0x000360f7) aid_size_cell_cmail_l

0x8550,	// (0x00036111) grid_cmail_l_pane_ParamLimits

0x8550,	// (0x00036111) grid_cmail_l_pane

0x856b,	// (0x0003612c) cell_cmail_l_pane_ParamLimits

0x856b,	// (0x0003612c) cell_cmail_l_pane

0x8591,	// (0x00036152) cell_cmail_l_pane_g1_ParamLimits

0x8591,	// (0x00036152) cell_cmail_l_pane_g1

0x85a2,	// (0x00036163) cell_cmail_l_pane_t1_ParamLimits

0x85a2,	// (0x00036163) cell_cmail_l_pane_t1

0xe2e4,	// (0x0003bea5) cell_cmail_l_pane_t2_ParamLimits

0xe2e4,	// (0x0003bea5) cell_cmail_l_pane_t2

0x0001,

0xfcce,	// (0x0003d88f) cell_cmail_l_pane_t_ParamLimits

0xfcce,	// (0x0003d88f) cell_cmail_l_pane_t

0xa66e,	// (0x0003822f) grid_highlight_pane_cp018_ParamLimits

0xa66e,	// (0x0003822f) grid_highlight_pane_cp018

0x0272,	// (0x0002de33) main2_pane_ParamLimits

0x0272,	// (0x0002de33) main2_pane

0xa3d5,	// (0x00037f96) popup_sp_fs_action_menu_bg_pane_g1

0xa3dd,	// (0x00037f9e) popup_sp_fs_action_menu_bg_pane_g2

0xa3e5,	// (0x00037fa6) popup_sp_fs_action_menu_bg_pane_g3

0xa3ed,	// (0x00037fae) popup_sp_fs_action_menu_bg_pane_g4

0xa3f5,	// (0x00037fb6) popup_sp_fs_action_menu_bg_pane_g5

0xa3fd,	// (0x00037fbe) popup_sp_fs_action_menu_bg_pane_g6

0xa405,	// (0x00037fc6) popup_sp_fs_action_menu_bg_pane_g7

0xa40d,	// (0x00037fce) popup_sp_fs_action_menu_bg_pane_g8

0xa415,	// (0x00037fd6) popup_sp_fs_action_menu_bg_pane_g9

0xa41d,	// (0x00037fde) popup_sp_fs_action_menu_bg_pane_g10

0xa41d,	// (0x00037fde) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf193,	// (0x0003cd54) popup_sp_fs_action_menu_bg_pane_g

0x269b,	// (0x0003025c) list_medium_line_x2_t3_g3_g1_ParamLimits

0x269b,	// (0x0003025c) list_medium_line_x2_t3_g3_g1

0x26a7,	// (0x00030268) list_medium_line_x2_t3_g3_g2_ParamLimits

0x26a7,	// (0x00030268) list_medium_line_x2_t3_g3_g2

0x26b3,	// (0x00030274) list_medium_line_x2_t3_g3_g3_ParamLimits

0x26b3,	// (0x00030274) list_medium_line_x2_t3_g3_g3

0x0002,

0xf243,	// (0x0003ce04) list_medium_line_x2_t3_g3_g_ParamLimits

0xf243,	// (0x0003ce04) list_medium_line_x2_t3_g3_g

0x26bf,	// (0x00030280) list_medium_line_x2_t3_g3_t1_ParamLimits

0x26bf,	// (0x00030280) list_medium_line_x2_t3_g3_t1

0x26d4,	// (0x00030295) list_medium_line_x2_t3_g3_t2_ParamLimits

0x26d4,	// (0x00030295) list_medium_line_x2_t3_g3_t2

0x26e8,	// (0x000302a9) list_medium_line_x2_t3_g3_t3_ParamLimits

0x26e8,	// (0x000302a9) list_medium_line_x2_t3_g3_t3

0x0002,

0xf24a,	// (0x0003ce0b) list_medium_line_x2_t3_g3_t_ParamLimits

0xf24a,	// (0x0003ce0b) list_medium_line_x2_t3_g3_t

0x269b,	// (0x0003025c) list_medium_line_x2_t3_g2_g1_ParamLimits

0x269b,	// (0x0003025c) list_medium_line_x2_t3_g2_g1

0x26b3,	// (0x00030274) list_medium_line_x2_t3_g2_g2_ParamLimits

0x26b3,	// (0x00030274) list_medium_line_x2_t3_g2_g2

0x0001,

0xf251,	// (0x0003ce12) list_medium_line_x2_t3_g2_g_ParamLimits

0xf251,	// (0x0003ce12) list_medium_line_x2_t3_g2_g

0x26fd,	// (0x000302be) list_medium_line_x2_t3_g2_t1_ParamLimits

0x26fd,	// (0x000302be) list_medium_line_x2_t3_g2_t1

0x2713,	// (0x000302d4) list_medium_line_x2_t3_g2_t2_ParamLimits

0x2713,	// (0x000302d4) list_medium_line_x2_t3_g2_t2

0x2725,	// (0x000302e6) list_medium_line_x2_t3_g2_t3_ParamLimits

0x2725,	// (0x000302e6) list_medium_line_x2_t3_g2_t3

0x0002,

0xf256,	// (0x0003ce17) list_medium_line_x2_t3_g2_t_ParamLimits

0xf256,	// (0x0003ce17) list_medium_line_x2_t3_g2_t

0x269b,	// (0x0003025c) list_medium_line_x2_t4_g4_g1_ParamLimits

0x269b,	// (0x0003025c) list_medium_line_x2_t4_g4_g1

0x2743,	// (0x00030304) list_medium_line_x2_t4_g4_g2_ParamLimits

0x2743,	// (0x00030304) list_medium_line_x2_t4_g4_g2

0x26a7,	// (0x00030268) list_medium_line_x2_t4_g4_g3_ParamLimits

0x26a7,	// (0x00030268) list_medium_line_x2_t4_g4_g3

0x274f,	// (0x00030310) list_medium_line_x2_t4_g4_g4_ParamLimits

0x274f,	// (0x00030310) list_medium_line_x2_t4_g4_g4

0x0003,

0xf25d,	// (0x0003ce1e) list_medium_line_x2_t4_g4_g_ParamLimits

0xf25d,	// (0x0003ce1e) list_medium_line_x2_t4_g4_g

0x275b,	// (0x0003031c) list_medium_line_x2_t4_g4_t1_ParamLimits

0x275b,	// (0x0003031c) list_medium_line_x2_t4_g4_t1

0x2772,	// (0x00030333) list_medium_line_x2_t4_g4_t2_ParamLimits

0x2772,	// (0x00030333) list_medium_line_x2_t4_g4_t2

0x2787,	// (0x00030348) list_medium_line_x2_t4_g4_t3_ParamLimits

0x2787,	// (0x00030348) list_medium_line_x2_t4_g4_t3

0x2799,	// (0x0003035a) list_medium_line_x2_t4_g4_t4_ParamLimits

0x2799,	// (0x0003035a) list_medium_line_x2_t4_g4_t4

0x0003,

0xf266,	// (0x0003ce27) list_medium_line_x2_t4_g4_t_ParamLimits

0xf266,	// (0x0003ce27) list_medium_line_x2_t4_g4_t

0x269b,	// (0x0003025c) list_medium_line_x2_t2_g4_g1_ParamLimits

0x269b,	// (0x0003025c) list_medium_line_x2_t2_g4_g1

0x2743,	// (0x00030304) list_medium_line_x2_t2_g4_g2_ParamLimits

0x2743,	// (0x00030304) list_medium_line_x2_t2_g4_g2

0x26a7,	// (0x00030268) list_medium_line_x2_t2_g4_g3_ParamLimits

0x26a7,	// (0x00030268) list_medium_line_x2_t2_g4_g3

0x26b3,	// (0x00030274) list_medium_line_x2_t2_g4_g4_ParamLimits

0x26b3,	// (0x00030274) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2cd,	// (0x0003ce8e) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2cd,	// (0x0003ce8e) list_medium_line_x2_t2_g4_g

0x377e,	// (0x0003133f) list_medium_line_x2_t2_g4_t1_ParamLimits

0x377e,	// (0x0003133f) list_medium_line_x2_t2_g4_t1

0x26e8,	// (0x000302a9) list_medium_line_x2_t2_g4_t2_ParamLimits

0x26e8,	// (0x000302a9) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2d6,	// (0x0003ce97) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2d6,	// (0x0003ce97) list_medium_line_x2_t2_g4_t

0x269b,	// (0x0003025c) list_medium_line_x2_t2_g3_g1_ParamLimits

0x269b,	// (0x0003025c) list_medium_line_x2_t2_g3_g1

0x26a7,	// (0x00030268) list_medium_line_x2_t2_g3_g2_ParamLimits

0x26a7,	// (0x00030268) list_medium_line_x2_t2_g3_g2

0x26b3,	// (0x00030274) list_medium_line_x2_t2_g3_g3_ParamLimits

0x26b3,	// (0x00030274) list_medium_line_x2_t2_g3_g3

0x0002,

0xf243,	// (0x0003ce04) list_medium_line_x2_t2_g3_g_ParamLimits

0xf243,	// (0x0003ce04) list_medium_line_x2_t2_g3_g

0x3793,	// (0x00031354) list_medium_line_x2_t2_g3_t1_ParamLimits

0x3793,	// (0x00031354) list_medium_line_x2_t2_g3_t1

0x26e8,	// (0x000302a9) list_medium_line_x2_t2_g3_t2_ParamLimits

0x26e8,	// (0x000302a9) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2db,	// (0x0003ce9c) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2db,	// (0x0003ce9c) list_medium_line_x2_t2_g3_t

0x3961,	// (0x00031522) main_sp_fs_list_pane_ParamLimits

0x3961,	// (0x00031522) main_sp_fs_list_pane

0xc9d9,	// (0x0003a59a) sp_fs_scroll_pane_ParamLimits

0xc9d9,	// (0x0003a59a) sp_fs_scroll_pane

0x396d,	// (0x0003152e) list_medium_line_x2_t3_t1

0x397d,	// (0x0003153e) list_medium_line_x2_t3_t2

0x398b,	// (0x0003154c) list_medium_line_x2_t3_t3

0x0002,

0xf326,	// (0x0003cee7) list_medium_line_x2_t3_t

0x3999,	// (0x0003155a) list_medium_line_x3_t4_t1

0x39a9,	// (0x0003156a) list_medium_line_x3_t4_t2

0x39b7,	// (0x00031578) list_medium_line_x3_t4_t3

0x398b,	// (0x0003154c) list_medium_line_x3_t4_t4

0x0003,

0xf32d,	// (0x0003ceee) list_medium_line_x3_t4_t

0x39c5,	// (0x00031586) list_medium_line_x4_t5_t1

0x39d5,	// (0x00031596) list_medium_line_x4_t5_t2

0x39b7,	// (0x00031578) list_medium_line_x4_t5_t3

0x39e3,	// (0x000315a4) list_medium_line_x4_t5_t4

0x398b,	// (0x0003154c) list_medium_line_x4_t5_t5

0x0004,

0xf336,	// (0x0003cef7) list_medium_line_x4_t5_t

0x269b,	// (0x0003025c) list_medium_line_t4_g4_g1_ParamLimits

0x269b,	// (0x0003025c) list_medium_line_t4_g4_g1

0x274f,	// (0x00030310) list_medium_line_t4_g4_g2_ParamLimits

0x274f,	// (0x00030310) list_medium_line_t4_g4_g2

0x39f1,	// (0x000315b2) list_medium_line_t4_g4_g3_ParamLimits

0x39f1,	// (0x000315b2) list_medium_line_t4_g4_g3

0x26b3,	// (0x00030274) list_medium_line_t4_g4_g4_ParamLimits

0x26b3,	// (0x00030274) list_medium_line_t4_g4_g4

0x0003,

0xf341,	// (0x0003cf02) list_medium_line_t4_g4_g_ParamLimits

0xf341,	// (0x0003cf02) list_medium_line_t4_g4_g

0x39fd,	// (0x000315be) list_medium_line_t4_g4_t1_ParamLimits

0x39fd,	// (0x000315be) list_medium_line_t4_g4_t1

0x3a12,	// (0x000315d3) list_medium_line_t4_g4_t2_ParamLimits

0x3a12,	// (0x000315d3) list_medium_line_t4_g4_t2

0x3a28,	// (0x000315e9) list_medium_line_t4_g4_t3_ParamLimits

0x3a28,	// (0x000315e9) list_medium_line_t4_g4_t3

0x26e8,	// (0x000302a9) list_medium_line_t4_g4_t4_ParamLimits

0x26e8,	// (0x000302a9) list_medium_line_t4_g4_t4

0x0003,

0xf34a,	// (0x0003cf0b) list_medium_line_t4_g4_t_ParamLimits

0xf34a,	// (0x0003cf0b) list_medium_line_t4_g4_t

0x3b50,	// (0x00031711) chi_dic_find_pane_g1

0x073f,	// (0x0002e300) main_tport_pane

0x700c,	// (0x00034bcd) list_medium_line_plain_t1

0x7032,	// (0x00034bf3) list_medium_line_t2_g2_g1_ParamLimits

0x7032,	// (0x00034bf3) list_medium_line_t2_g2_g1

0x703e,	// (0x00034bff) list_medium_line_t2_g2_g2_ParamLimits

0x703e,	// (0x00034bff) list_medium_line_t2_g2_g2

0x0001,

0xfa06,	// (0x0003d5c7) list_medium_line_t2_g2_g_ParamLimits

0xfa06,	// (0x0003d5c7) list_medium_line_t2_g2_g

0x704a,	// (0x00034c0b) list_medium_line_t2_g2_t1_ParamLimits

0x704a,	// (0x00034c0b) list_medium_line_t2_g2_t1

0x7061,	// (0x00034c22) list_medium_line_t2_g2_t2_ParamLimits

0x7061,	// (0x00034c22) list_medium_line_t2_g2_t2

0x0001,

0xfa0b,	// (0x0003d5cc) list_medium_line_t2_g2_t_ParamLimits

0xfa0b,	// (0x0003d5cc) list_medium_line_t2_g2_t

0xd7cf,	// (0x0003b390) aid_sp_fs_list_icon_a_sm

0xd7d7,	// (0x0003b398) aid_sp_fs_list_icon_d

0xd7df,	// (0x0003b3a0) aid_sp_fs_text_primary

0xd7e8,	// (0x0003b3a9) aid_sp_fs_text_secondary

0x75f8,	// (0x000351b9) list_medium_line

0x75f8,	// (0x000351b9) list_medium_line_g2

0x75f8,	// (0x000351b9) list_medium_line_g3

0x75f8,	// (0x000351b9) list_medium_line_plain

0x75f8,	// (0x000351b9) list_medium_line_plain_t2

0x75f8,	// (0x000351b9) list_medium_line_plain_t3

0x75f8,	// (0x000351b9) list_medium_line_right_icon

0x75f8,	// (0x000351b9) list_medium_line_right_iconx2

0x75f8,	// (0x000351b9) list_medium_line_t2

0x75f8,	// (0x000351b9) list_medium_line_t2_g2

0x75f8,	// (0x000351b9) list_medium_line_t2_g3

0x75f8,	// (0x000351b9) list_medium_line_t2_right_icon

0x75f8,	// (0x000351b9) list_medium_line_t2_right_iconx2

0x75f8,	// (0x000351b9) list_medium_line_t3

0x75f8,	// (0x000351b9) list_medium_line_t3_g2

0x75f8,	// (0x000351b9) list_medium_line_t3_g3

0x75f8,	// (0x000351b9) list_medium_line_t3_right_iconx2

0x7601,	// (0x000351c2) list_medium_line_t4_g4

0x75f8,	// (0x000351b9) list_medium_line_x2

0x75f8,	// (0x000351b9) list_medium_line_x2_t2_g2

0x75f8,	// (0x000351b9) list_medium_line_x2_t2_g3

0x75f8,	// (0x000351b9) list_medium_line_x2_t2_g4

0x75f8,	// (0x000351b9) list_medium_line_x2_t3

0x75f8,	// (0x000351b9) list_medium_line_x2_t3_g2

0x75f8,	// (0x000351b9) list_medium_line_x2_t3_g3

0x75f8,	// (0x000351b9) list_medium_line_x2_t3_g4

0x75f8,	// (0x000351b9) list_medium_line_x2_t4_g2

0x75f8,	// (0x000351b9) list_medium_line_x2_t4_g4

0x760a,	// (0x000351cb) list_medium_line_x3

0x760a,	// (0x000351cb) list_medium_line_x3_t4

0x760a,	// (0x000351cb) list_medium_line_x3_t4_g4

0x7601,	// (0x000351c2) list_medium_line_x4_t4

0x7601,	// (0x000351c2) list_medium_line_x4_t4_g7

0x7601,	// (0x000351c2) list_medium_line_x4_t5

0x7613,	// (0x000351d4) list_single_fs_dyc_pane_ParamLimits

0x7613,	// (0x000351d4) list_single_fs_dyc_pane

0x269b,	// (0x0003025c) list_medium_line_x4_t4_g7_g1_ParamLimits

0x269b,	// (0x0003025c) list_medium_line_x4_t4_g7_g1

0x7d3a,	// (0x000358fb) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7d3a,	// (0x000358fb) list_medium_line_x4_t4_g7_g2

0x7d46,	// (0x00035907) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7d46,	// (0x00035907) list_medium_line_x4_t4_g7_g3

0x7d55,	// (0x00035916) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7d55,	// (0x00035916) list_medium_line_x4_t4_g7_g4

0x7d61,	// (0x00035922) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7d61,	// (0x00035922) list_medium_line_x4_t4_g7_g5

0x7d70,	// (0x00035931) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7d70,	// (0x00035931) list_medium_line_x4_t4_g7_g6

0x7d7f,	// (0x00035940) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7d7f,	// (0x00035940) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd6,	// (0x0003d797) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd6,	// (0x0003d797) list_medium_line_x4_t4_g7_g

0x7d8b,	// (0x0003594c) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7d8b,	// (0x0003594c) list_medium_line_x4_t4_g7_t1

0x7da0,	// (0x00035961) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7da0,	// (0x00035961) list_medium_line_x4_t4_g7_t2

0x7db5,	// (0x00035976) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7db5,	// (0x00035976) list_medium_line_x4_t4_g7_t3

0x7dca,	// (0x0003598b) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7dca,	// (0x0003598b) list_medium_line_x4_t4_g7_t4

0x7ddc,	// (0x0003599d) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7ddc,	// (0x0003599d) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbe5,	// (0x0003d7a6) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbe5,	// (0x0003d7a6) list_medium_line_x4_t4_g7_t

0x7dee,	// (0x000359af) list_single_dyc_row_pane_ParamLimits

0x7dee,	// (0x000359af) list_single_dyc_row_pane

0x84b7,	// (0x00036078) call5_gesture_pane_ParamLimits

0x84b7,	// (0x00036078) call5_gesture_pane

0x850d,	// (0x000360ce) call5_windows_pane_ParamLimits

0x850d,	// (0x000360ce) call5_windows_pane

0x85b8,	// (0x00036179) call5_swipe_1_pane_cp_ParamLimits

0x85b8,	// (0x00036179) call5_swipe_1_pane_cp

0x85c4,	// (0x00036185) call5_swipe_2_pane_cp_ParamLimits

0x85c4,	// (0x00036185) call5_swipe_2_pane_cp

0xaec8,	// (0x00038a89) call5_image_pane_cp

0x85d0,	// (0x00036191) popup_call5_audio_first_window_cp_ParamLimits

0x85d0,	// (0x00036191) popup_call5_audio_first_window_cp

0xe2b6,	// (0x0003be77) call5_swipe_1_pane_g1_cp_ParamLimits

0xe2b6,	// (0x0003be77) call5_swipe_1_pane_g1_cp

0xe2f6,	// (0x0003beb7) call5_swipe_1_pane_g2_cp

0xe2cf,	// (0x0003be90) call5_swipe_1_pane_t1_cp_ParamLimits

0xe2cf,	// (0x0003be90) call5_swipe_1_pane_t1_cp

0xe2b6,	// (0x0003be77) call5_swipe_2_pane_g1_cp_ParamLimits

0xe2b6,	// (0x0003be77) call5_swipe_2_pane_g1_cp

0xe2fe,	// (0x0003bebf) call5_swipe_2_pane_g2_cp

0xe306,	// (0x0003bec7) call5_swipe_2_pane_t1_cp_ParamLimits

0xe306,	// (0x0003bec7) call5_swipe_2_pane_t1_cp

0xa66e,	// (0x0003822f) main_sp_fs_email_pane

0xe31b,	// (0x0003bedc) main_sp_fs_listscroll_pane_te

0xe324,	// (0x0003bee5) popup_sp_fs_action_menu_pane_ParamLimits

0xe324,	// (0x0003bee5) popup_sp_fs_action_menu_pane

0xc72a,	// (0x0003a2eb) bg_sp_fs_ctrlbar_pane_g1

0xe366,	// (0x0003bf27) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe36f,	// (0x0003bf30) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe378,	// (0x0003bf39) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc72a,	// (0x0003a2eb) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcd3,	// (0x0003d894) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc50d,	// (0x0003a0ce) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc50d,	// (0x0003a0ce) bg_sp_fs_ctrlbar_ddmenu_pane

0xe381,	// (0x0003bf42) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe381,	// (0x0003bf42) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe38d,	// (0x0003bf4e) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe38d,	// (0x0003bf4e) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcdc,	// (0x0003d89d) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcdc,	// (0x0003d89d) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe399,	// (0x0003bf5a) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe399,	// (0x0003bf5a) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x85de,	// (0x0003619f) list_medium_line_t2_right_icon_g1

0x85e6,	// (0x000361a7) list_medium_line_t2_right_icon_t1

0x85f6,	// (0x000361b7) list_medium_line_t2_right_icon_t2

0x0001,

0xfce1,	// (0x0003d8a2) list_medium_line_t2_right_icon_t

0xc320,	// (0x00039ee1) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc320,	// (0x00039ee1) bg_sp_fs_ctrlbar_pane

0x8650,	// (0x00036211) main_sp_fs_ctrlbar_button_pane_cp01

0x865a,	// (0x0003621b) main_sp_fs_ctrlbar_ddmenu_pane

0xe3eb,	// (0x0003bfac) main_sp_fs_ctrlbar_pane_g1

0xe3f7,	// (0x0003bfb8) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce6,	// (0x0003d8a7) main_sp_fs_ctrlbar_pane_g

0xe403,	// (0x0003bfc4) main_sp_fs_ctrlbar_pane_t1

0x8664,	// (0x00036225) main_sp_fs_ctrlbar_pane

0x8688,	// (0x00036249) main_sp_fs_listscroll_pane_te_cp01

0x86a8,	// (0x00036269) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x86a8,	// (0x00036269) popup_sp_fs_action_menu_pane_cp01

0xa66e,	// (0x0003822f) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa66e,	// (0x0003822f) bg_sp_fs_highlight_list_pane_cp01

0xe433,	// (0x0003bff4) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe433,	// (0x0003bff4) sp_fs_action_menu_list_gene_pane_g1

0xe442,	// (0x0003c003) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe442,	// (0x0003c003) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcf0,	// (0x0003d8b1) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcf0,	// (0x0003d8b1) sp_fs_action_menu_list_gene_pane_g

0xe44f,	// (0x0003c010) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe44f,	// (0x0003c010) sp_fs_action_menu_list_gene_pane_t1

0xe467,	// (0x0003c028) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe467,	// (0x0003c028) sp_fs_action_menu_list_gene_pane

0xe486,	// (0x0003c047) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe486,	// (0x0003c047) popup_sp_fs_action_menu_bg_pane

0xe494,	// (0x0003c055) sp_fs_action_menu_list_pane_ParamLimits

0xe494,	// (0x0003c055) sp_fs_action_menu_list_pane

0xe4b4,	// (0x0003c075) sp_fs_scroll_pane_cp01_ParamLimits

0xe4b4,	// (0x0003c075) sp_fs_scroll_pane_cp01

0x86d8,	// (0x00036299) list_medium_line_plain_t2_t1

0x86e8,	// (0x000362a9) list_medium_line_plain_t2_t2

0x0001,

0xfcf5,	// (0x0003d8b6) list_medium_line_plain_t2_t

0x86f8,	// (0x000362b9) list_medium_line_plain_t3_t1

0x8708,	// (0x000362c9) list_medium_line_plain_t3_t2

0x8716,	// (0x000362d7) list_medium_line_plain_t3_t3

0x0002,

0xfcfa,	// (0x0003d8bb) list_medium_line_plain_t3_t

0x269b,	// (0x0003025c) list_medium_line_x2_t2_g2_g1_ParamLimits

0x269b,	// (0x0003025c) list_medium_line_x2_t2_g2_g1

0x26b3,	// (0x00030274) list_medium_line_x2_t2_g2_g2_ParamLimits

0x26b3,	// (0x00030274) list_medium_line_x2_t2_g2_g2

0x0001,

0xf251,	// (0x0003ce12) list_medium_line_x2_t2_g2_g_ParamLimits

0xf251,	// (0x0003ce12) list_medium_line_x2_t2_g2_g

0x39fd,	// (0x000315be) list_medium_line_x2_t2_g2_t1_ParamLimits

0x39fd,	// (0x000315be) list_medium_line_x2_t2_g2_t1

0x26e8,	// (0x000302a9) list_medium_line_x2_t2_g2_t2_ParamLimits

0x26e8,	// (0x000302a9) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd01,	// (0x0003d8c2) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd01,	// (0x0003d8c2) list_medium_line_x2_t2_g2_t

0x269b,	// (0x0003025c) list_medium_line_x2_t4_g2_g1_ParamLimits

0x269b,	// (0x0003025c) list_medium_line_x2_t4_g2_g1

0x26b3,	// (0x00030274) list_medium_line_x2_t4_g2_g2_ParamLimits

0x26b3,	// (0x00030274) list_medium_line_x2_t4_g2_g2

0x0001,

0xf251,	// (0x0003ce12) list_medium_line_x2_t4_g2_g_ParamLimits

0xf251,	// (0x0003ce12) list_medium_line_x2_t4_g2_g

0x8724,	// (0x000362e5) list_medium_line_x2_t4_g2_t1_ParamLimits

0x8724,	// (0x000362e5) list_medium_line_x2_t4_g2_t1

0x873e,	// (0x000362ff) list_medium_line_x2_t4_g2_t2_ParamLimits

0x873e,	// (0x000362ff) list_medium_line_x2_t4_g2_t2

0x8753,	// (0x00036314) list_medium_line_x2_t4_g2_t3_ParamLimits

0x8753,	// (0x00036314) list_medium_line_x2_t4_g2_t3

0x26e8,	// (0x000302a9) list_medium_line_x2_t4_g2_t4_ParamLimits

0x26e8,	// (0x000302a9) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd06,	// (0x0003d8c7) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd06,	// (0x0003d8c7) list_medium_line_x2_t4_g2_t

0x8768,	// (0x00036329) list_medium_line_t3_right_iconx2_g1

0x85de,	// (0x0003619f) list_medium_line_t3_right_iconx2_g2

0x8770,	// (0x00036331) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0f,	// (0x0003d8d0) list_medium_line_t3_right_iconx2_g

0x877a,	// (0x0003633b) list_medium_line_t3_right_iconx2_t1

0x878a,	// (0x0003634b) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd16,	// (0x0003d8d7) list_medium_line_t3_right_iconx2_t

0x269b,	// (0x0003025c) list_medium_line_x3_t4_g4_g1_ParamLimits

0x269b,	// (0x0003025c) list_medium_line_x3_t4_g4_g1

0x26a7,	// (0x00030268) list_medium_line_x3_t4_g4_g2_ParamLimits

0x26a7,	// (0x00030268) list_medium_line_x3_t4_g4_g2

0x274f,	// (0x00030310) list_medium_line_x3_t4_g4_g3_ParamLimits

0x274f,	// (0x00030310) list_medium_line_x3_t4_g4_g3

0x8798,	// (0x00036359) list_medium_line_x3_t4_g4_g4_ParamLimits

0x8798,	// (0x00036359) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1b,	// (0x0003d8dc) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1b,	// (0x0003d8dc) list_medium_line_x3_t4_g4_g

0x87a4,	// (0x00036365) list_medium_line_x3_t4_g4_t1_ParamLimits

0x87a4,	// (0x00036365) list_medium_line_x3_t4_g4_t1

0x87bb,	// (0x0003637c) list_medium_line_x3_t4_g4_t2_ParamLimits

0x87bb,	// (0x0003637c) list_medium_line_x3_t4_g4_t2

0x87d6,	// (0x00036397) list_medium_line_x3_t4_g4_t3_ParamLimits

0x87d6,	// (0x00036397) list_medium_line_x3_t4_g4_t3

0x87eb,	// (0x000363ac) list_medium_line_x3_t4_g4_t4_ParamLimits

0x87eb,	// (0x000363ac) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd24,	// (0x0003d8e5) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd24,	// (0x0003d8e5) list_medium_line_x3_t4_g4_t

0x8808,	// (0x000363c9) list_single_dyc_row_text_pane_t1_ParamLimits

0x8808,	// (0x000363c9) list_single_dyc_row_text_pane_t1

0x8851,	// (0x00036412) list_single_dyc_row_text_pane_t2_ParamLimits

0x8851,	// (0x00036412) list_single_dyc_row_text_pane_t2

0xe4da,	// (0x0003c09b) list_single_dyc_row_text_pane_t3_ParamLimits

0xe4da,	// (0x0003c09b) list_single_dyc_row_text_pane_t3

0x0002,

0xfd2d,	// (0x0003d8ee) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2d,	// (0x0003d8ee) list_single_dyc_row_text_pane_t

0xe4ec,	// (0x0003c0ad) list_single_dyc_row_pane_g1_ParamLimits

0xe4ec,	// (0x0003c0ad) list_single_dyc_row_pane_g1

0xe4f8,	// (0x0003c0b9) list_single_dyc_row_pane_g2_ParamLimits

0xe4f8,	// (0x0003c0b9) list_single_dyc_row_pane_g2

0xe504,	// (0x0003c0c5) list_single_dyc_row_pane_g3_ParamLimits

0xe504,	// (0x0003c0c5) list_single_dyc_row_pane_g3

0xe510,	// (0x0003c0d1) list_single_dyc_row_pane_g4_ParamLimits

0xe510,	// (0x0003c0d1) list_single_dyc_row_pane_g4

0x0003,

0xfd34,	// (0x0003d8f5) list_single_dyc_row_pane_g_ParamLimits

0xfd34,	// (0x0003d8f5) list_single_dyc_row_pane_g

0xe51c,	// (0x0003c0dd) list_single_dyc_row_text_pane_ParamLimits

0xe51c,	// (0x0003c0dd) list_single_dyc_row_text_pane

0x9bce,	// (0x0003778f) bg_sp_fs_scroll_pane

0xe53b,	// (0x0003c0fc) thumb_sp_fs_scroll_pane

0x7032,	// (0x00034bf3) list_medium_line_g1_ParamLimits

0x7032,	// (0x00034bf3) list_medium_line_g1

0x88ab,	// (0x0003646c) list_medium_line_t1_ParamLimits

0x88ab,	// (0x0003646c) list_medium_line_t1

0x269b,	// (0x0003025c) list_medium_line_x2_g1_ParamLimits

0x269b,	// (0x0003025c) list_medium_line_x2_g1

0x26a7,	// (0x00030268) list_medium_line_x2_g2_ParamLimits

0x26a7,	// (0x00030268) list_medium_line_x2_g2

0x0001,

0xfd3d,	// (0x0003d8fe) list_medium_line_x2_g_ParamLimits

0xfd3d,	// (0x0003d8fe) list_medium_line_x2_g

0xe544,	// (0x0003c105) list_medium_line_x2_t1_ParamLimits

0xe544,	// (0x0003c105) list_medium_line_x2_t1

0x269b,	// (0x0003025c) list_medium_line_x3_g1_ParamLimits

0x269b,	// (0x0003025c) list_medium_line_x3_g1

0x26a7,	// (0x00030268) list_medium_line_x3_g2_ParamLimits

0x26a7,	// (0x00030268) list_medium_line_x3_g2

0x0001,

0xfd3d,	// (0x0003d8fe) list_medium_line_x3_g_ParamLimits

0xfd3d,	// (0x0003d8fe) list_medium_line_x3_g

0xe544,	// (0x0003c105) list_medium_line_x3_t1_ParamLimits

0xe544,	// (0x0003c105) list_medium_line_x3_t1

0xe55a,	// (0x0003c11b) thumb_sp_fs_scroll_pane_g1

0xe563,	// (0x0003c124) thumb_sp_fs_scroll_pane_g2

0xe56c,	// (0x0003c12d) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd42,	// (0x0003d903) thumb_sp_fs_scroll_pane_g

0xe55a,	// (0x0003c11b) bg_sp_fs_scroll_pane_g1

0xe563,	// (0x0003c124) bg_sp_fs_scroll_pane_g2

0xe56c,	// (0x0003c12d) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd42,	// (0x0003d903) bg_sp_fs_scroll_pane_g

0x269b,	// (0x0003025c) list_medium_line_x2_t3_g4_g1_ParamLimits

0x269b,	// (0x0003025c) list_medium_line_x2_t3_g4_g1

0x2743,	// (0x00030304) list_medium_line_x2_t3_g4_g2_ParamLimits

0x2743,	// (0x00030304) list_medium_line_x2_t3_g4_g2

0x26a7,	// (0x00030268) list_medium_line_x2_t3_g4_g3_ParamLimits

0x26a7,	// (0x00030268) list_medium_line_x2_t3_g4_g3

0x26b3,	// (0x00030274) list_medium_line_x2_t3_g4_g4_ParamLimits

0x26b3,	// (0x00030274) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2cd,	// (0x0003ce8e) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2cd,	// (0x0003ce8e) list_medium_line_x2_t3_g4_g

0x88c0,	// (0x00036481) list_medium_line_x2_t3_g4_t1_ParamLimits

0x88c0,	// (0x00036481) list_medium_line_x2_t3_g4_t1

0x88da,	// (0x0003649b) list_medium_line_x2_t3_g4_t2_ParamLimits

0x88da,	// (0x0003649b) list_medium_line_x2_t3_g4_t2

0x26e8,	// (0x000302a9) list_medium_line_x2_t3_g4_t3_ParamLimits

0x26e8,	// (0x000302a9) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd49,	// (0x0003d90a) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd49,	// (0x0003d90a) list_medium_line_x2_t3_g4_t

0x7032,	// (0x00034bf3) list_medium_line_g2_g1_ParamLimits

0x7032,	// (0x00034bf3) list_medium_line_g2_g1

0x703e,	// (0x00034bff) list_medium_line_g2_g2_ParamLimits

0x703e,	// (0x00034bff) list_medium_line_g2_g2

0x0001,

0xfa06,	// (0x0003d5c7) list_medium_line_g2_g_ParamLimits

0xfa06,	// (0x0003d5c7) list_medium_line_g2_g

0x88f3,	// (0x000364b4) list_medium_line_g2_t1_ParamLimits

0x88f3,	// (0x000364b4) list_medium_line_g2_t1

0x7032,	// (0x00034bf3) list_medium_line_t3_g2_g1_ParamLimits

0x7032,	// (0x00034bf3) list_medium_line_t3_g2_g1

0x703e,	// (0x00034bff) list_medium_line_t3_g2_g2_ParamLimits

0x703e,	// (0x00034bff) list_medium_line_t3_g2_g2

0x0001,

0xfa06,	// (0x0003d5c7) list_medium_line_t3_g2_g_ParamLimits

0xfa06,	// (0x0003d5c7) list_medium_line_t3_g2_g

0x8908,	// (0x000364c9) list_medium_line_t3_g2_t1_ParamLimits

0x8908,	// (0x000364c9) list_medium_line_t3_g2_t1

0x891f,	// (0x000364e0) list_medium_line_t3_g2_t2_ParamLimits

0x891f,	// (0x000364e0) list_medium_line_t3_g2_t2

0x8934,	// (0x000364f5) list_medium_line_t3_g2_t3_ParamLimits

0x8934,	// (0x000364f5) list_medium_line_t3_g2_t3

0x0002,

0xfd50,	// (0x0003d911) list_medium_line_t3_g2_t_ParamLimits

0xfd50,	// (0x0003d911) list_medium_line_t3_g2_t

0x85de,	// (0x0003619f) list_medium_line_right_icon_g1

0x894d,	// (0x0003650e) list_medium_line_right_icon_t1

0x7032,	// (0x00034bf3) list_medium_line_t2_g1_ParamLimits

0x7032,	// (0x00034bf3) list_medium_line_t2_g1

0x895b,	// (0x0003651c) list_medium_line_t2_t1_ParamLimits

0x895b,	// (0x0003651c) list_medium_line_t2_t1

0x8975,	// (0x00036536) list_medium_line_t2_t2_ParamLimits

0x8975,	// (0x00036536) list_medium_line_t2_t2

0x0001,

0xfd57,	// (0x0003d918) list_medium_line_t2_t_ParamLimits

0xfd57,	// (0x0003d918) list_medium_line_t2_t

0x7032,	// (0x00034bf3) list_medium_line_t3_g1_ParamLimits

0x7032,	// (0x00034bf3) list_medium_line_t3_g1

0x898e,	// (0x0003654f) list_medium_line_t3_t1_ParamLimits

0x898e,	// (0x0003654f) list_medium_line_t3_t1

0x89a8,	// (0x00036569) list_medium_line_t3_t2_ParamLimits

0x89a8,	// (0x00036569) list_medium_line_t3_t2

0x89bd,	// (0x0003657e) list_medium_line_t3_t3_ParamLimits

0x89bd,	// (0x0003657e) list_medium_line_t3_t3

0x0002,

0xfd5c,	// (0x0003d91d) list_medium_line_t3_t_ParamLimits

0xfd5c,	// (0x0003d91d) list_medium_line_t3_t

0x7032,	// (0x00034bf3) list_medium_line_g3_g1_ParamLimits

0x7032,	// (0x00034bf3) list_medium_line_g3_g1

0x89d2,	// (0x00036593) list_medium_line_g3_g2_ParamLimits

0x89d2,	// (0x00036593) list_medium_line_g3_g2

0x703e,	// (0x00034bff) list_medium_line_g3_g3_ParamLimits

0x703e,	// (0x00034bff) list_medium_line_g3_g3

0x0002,

0xfd63,	// (0x0003d924) list_medium_line_g3_g_ParamLimits

0xfd63,	// (0x0003d924) list_medium_line_g3_g

0x89de,	// (0x0003659f) list_medium_line_g3_t1_ParamLimits

0x89de,	// (0x0003659f) list_medium_line_g3_t1

0x7032,	// (0x00034bf3) list_medium_line_t2_g3_g1_ParamLimits

0x7032,	// (0x00034bf3) list_medium_line_t2_g3_g1

0x89d2,	// (0x00036593) list_medium_line_t2_g3_g2_ParamLimits

0x89d2,	// (0x00036593) list_medium_line_t2_g3_g2

0x703e,	// (0x00034bff) list_medium_line_t2_g3_g3_ParamLimits

0x703e,	// (0x00034bff) list_medium_line_t2_g3_g3

0x0002,

0xfd63,	// (0x0003d924) list_medium_line_t2_g3_g_ParamLimits

0xfd63,	// (0x0003d924) list_medium_line_t2_g3_g

0x89f3,	// (0x000365b4) list_medium_line_t2_g3_t1_ParamLimits

0x89f3,	// (0x000365b4) list_medium_line_t2_g3_t1

0x8a0d,	// (0x000365ce) list_medium_line_t2_g3_t2_ParamLimits

0x8a0d,	// (0x000365ce) list_medium_line_t2_g3_t2

0x0001,

0xfd6a,	// (0x0003d92b) list_medium_line_t2_g3_t_ParamLimits

0xfd6a,	// (0x0003d92b) list_medium_line_t2_g3_t

0x7032,	// (0x00034bf3) list_medium_line_t3_g3_g1_ParamLimits

0x7032,	// (0x00034bf3) list_medium_line_t3_g3_g1

0x89d2,	// (0x00036593) list_medium_line_t3_g3_g2_ParamLimits

0x89d2,	// (0x00036593) list_medium_line_t3_g3_g2

0x703e,	// (0x00034bff) list_medium_line_t3_g3_g3_ParamLimits

0x703e,	// (0x00034bff) list_medium_line_t3_g3_g3

0x0002,

0xfd63,	// (0x0003d924) list_medium_line_t3_g3_g_ParamLimits

0xfd63,	// (0x0003d924) list_medium_line_t3_g3_g

0x8a28,	// (0x000365e9) list_medium_line_t3_g3_t1_ParamLimits

0x8a28,	// (0x000365e9) list_medium_line_t3_g3_t1

0x8a3c,	// (0x000365fd) list_medium_line_t3_g3_t2_ParamLimits

0x8a3c,	// (0x000365fd) list_medium_line_t3_g3_t2

0x8a4e,	// (0x0003660f) list_medium_line_t3_g3_t3_ParamLimits

0x8a4e,	// (0x0003660f) list_medium_line_t3_g3_t3

0x0002,

0xfd6f,	// (0x0003d930) list_medium_line_t3_g3_t_ParamLimits

0xfd6f,	// (0x0003d930) list_medium_line_t3_g3_t

0x8768,	// (0x00036329) list_medium_line_right_iconx2_g1

0x85de,	// (0x0003619f) list_medium_line_right_iconx2_g2

0x0001,

0xfd76,	// (0x0003d937) list_medium_line_right_iconx2_g

0x8a62,	// (0x00036623) list_medium_line_right_iconx2_t1

0x8768,	// (0x00036329) list_medium_line_t2_right_iconx2_g1

0x85de,	// (0x0003619f) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd76,	// (0x0003d937) list_medium_line_t2_right_iconx2_g

0x8a70,	// (0x00036631) list_medium_line_t2_right_iconx2_t1

0x8a80,	// (0x00036641) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd7b,	// (0x0003d93c) list_medium_line_t2_right_iconx2_t

0x8a92,	// (0x00036653) list_medium_line_x4_t4_t1

0x8aa0,	// (0x00036661) list_medium_line_x4_t4_t2

0x8ab0,	// (0x00036671) list_medium_line_x4_t4_t3

0x8ac0,	// (0x00036681) list_medium_line_x4_t4_t4

0x0003,

0xfd80,	// (0x0003d941) list_medium_line_x4_t4_t

0x8b13,	// (0x000366d4) tport_appsw_pane_ParamLimits

0x8b13,	// (0x000366d4) tport_appsw_pane

0x8b2b,	// (0x000366ec) tport_contact_pane_ParamLimits

0x8b2b,	// (0x000366ec) tport_contact_pane

0x8b43,	// (0x00036704) tport_listscroll_pane_ParamLimits

0x8b43,	// (0x00036704) tport_listscroll_pane

0x8b5d,	// (0x0003671e) cell_tport_appsw_pane_ParamLimits

0x8b5d,	// (0x0003671e) cell_tport_appsw_pane

0xd1d3,	// (0x0003ad94) tport_appsw_pane_g1_ParamLimits

0xd1d3,	// (0x0003ad94) tport_appsw_pane_g1

0xe575,	// (0x0003c136) tport_contact_pane_g1

0xddb6,	// (0x0003b977) tport_contact_pane_t1

0xe57e,	// (0x0003c13f) tport_contact_pane_t2

0x0001,

0xfd89,	// (0x0003d94a) tport_contact_pane_t

0xe58c,	// (0x0003c14d) list_tport_pane

0xe595,	// (0x0003c156) scroll_pane_cp_030

0x8ba5,	// (0x00036766) cell_tport_appsw_pane_g1

0x8bb5,	// (0x00036776) cell_tport_appsw_pane_t1

0x9bce,	// (0x0003778f) grid_highlight_pane_cp019

0x8bc3,	// (0x00036784) list_tport_double_graphic_pane_ParamLimits

0x8bc3,	// (0x00036784) list_tport_double_graphic_pane

0xa66e,	// (0x0003822f) list_highlight_pane_cp023_ParamLimits

0xa66e,	// (0x0003822f) list_highlight_pane_cp023

0x8bd0,	// (0x00036791) list_tport_double_graphic_pane_g1_ParamLimits

0x8bd0,	// (0x00036791) list_tport_double_graphic_pane_g1

0x8bdd,	// (0x0003679e) list_tport_double_graphic_pane_t1_ParamLimits

0x8bdd,	// (0x0003679e) list_tport_double_graphic_pane_t1

0x8bf2,	// (0x000367b3) list_tport_double_graphic_pane_t2_ParamLimits

0x8bf2,	// (0x000367b3) list_tport_double_graphic_pane_t2

0x0001,

0xfd95,	// (0x0003d956) list_tport_double_graphic_pane_t_ParamLimits

0xfd95,	// (0x0003d956) list_tport_double_graphic_pane_t

0x9bce,	// (0x0003778f) main_cale_note_pane

0x1632,	// (0x0002f1f3) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x1632,	// (0x0002f1f3) cell_vitu2_function_top_wide_pane_cp01

0x816e,	// (0x00035d2f) wait_bar_pane_cp05_ParamLimits

0xa66e,	// (0x0003822f) listscroll_cmail_pane

0xe59e,	// (0x0003c15f) list_cmail_pane

0x8c04,	// (0x000367c5) list_cmail_body_pane

0x8c18,	// (0x000367d9) list_single_cmail_header_caption_pane

0x8c30,	// (0x000367f1) list_single_cmail_header_detail_pane_ParamLimits

0x8c30,	// (0x000367f1) list_single_cmail_header_detail_pane

0xe5ae,	// (0x0003c16f) list_single_cmail_header_caption_pane_t1

0x8c63,	// (0x00036824) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8c63,	// (0x00036824) list_single_cmail_header_detail_pane_g1

0xe5bc,	// (0x0003c17d) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe5bc,	// (0x0003c17d) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9a,	// (0x0003d95b) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9a,	// (0x0003d95b) list_single_cmail_header_detail_pane_g

0x8c7b,	// (0x0003683c) list_single_cmail_header_detail_pane_t1_ParamLimits

0x8c7b,	// (0x0003683c) list_single_cmail_header_detail_pane_t1

0x8cb9,	// (0x0003687a) list_single_cmail_header_editor_pane_bg_ParamLimits

0x8cb9,	// (0x0003687a) list_single_cmail_header_editor_pane_bg

0xe5f9,	// (0x0003c1ba) list_cmail_body_pane_g1

0xe602,	// (0x0003c1c3) list_cmail_body_pane_t1

0xd240,	// (0x0003ae01) list_single_cmail_header_editor_pane_bg_g1

0xa82b,	// (0x000383ec) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd250,	// (0x0003ae11) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd248,	// (0x0003ae09) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd464,	// (0x0003b025) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd270,	// (0x0003ae31) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd260,	// (0x0003ae21) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd268,	// (0x0003ae29) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa80b,	// (0x000383cc) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8cd2,	// (0x00036893) calenote_gesture_pane_ParamLimits

0x8cd2,	// (0x00036893) calenote_gesture_pane

0x8cf2,	// (0x000368b3) calenote_window_pane_ParamLimits

0x8cf2,	// (0x000368b3) calenote_window_pane

0xe610,	// (0x0003c1d1) popup_note_window_cp01

0x8d0e,	// (0x000368cf) calenote_swipe_1_pane_ParamLimits

0x8d0e,	// (0x000368cf) calenote_swipe_1_pane

0x85c4,	// (0x00036185) calenote_swipe_2_pane_ParamLimits

0x85c4,	// (0x00036185) calenote_swipe_2_pane

0xe2b6,	// (0x0003be77) calenote_swipe_1_pane_g1_ParamLimits

0xe2b6,	// (0x0003be77) calenote_swipe_1_pane_g1

0xe2c3,	// (0x0003be84) calenote_swipe_1_pane_g2_ParamLimits

0xe2c3,	// (0x0003be84) calenote_swipe_1_pane_g2

0x0001,

0xfcc9,	// (0x0003d88a) calenote_swipe_1_pane_g_ParamLimits

0xfcc9,	// (0x0003d88a) calenote_swipe_1_pane_g

0xe622,	// (0x0003c1e3) calenote_swipe_1_pane_t1_ParamLimits

0xe622,	// (0x0003c1e3) calenote_swipe_1_pane_t1

0xe2b6,	// (0x0003be77) calenote_swipe_2_pane_g1_ParamLimits

0xe2b6,	// (0x0003be77) calenote_swipe_2_pane_g1

0xe641,	// (0x0003c202) calenote_swipe_2_pane_g2_ParamLimits

0xe641,	// (0x0003c202) calenote_swipe_2_pane_g2

0x0001,

0xfda6,	// (0x0003d967) calenote_swipe_2_pane_g_ParamLimits

0xfda6,	// (0x0003d967) calenote_swipe_2_pane_g

0xe64d,	// (0x0003c20e) calenote_swipe_2_pane_t1_ParamLimits

0xe64d,	// (0x0003c20e) calenote_swipe_2_pane_t1

0x9bce,	// (0x0003778f) main_mup_navstr_pane

0x59df,	// (0x000335a0) main_mup3_pane_t7_ParamLimits

0x59df,	// (0x000335a0) main_mup3_pane_t7

0x6423,	// (0x00033fe4) main_mp4_pane_g6_ParamLimits

0x6423,	// (0x00033fe4) main_mp4_pane_g6

0x666c,	// (0x0003422d) main_image3_pane_t4_ParamLimits

0x666c,	// (0x0003422d) main_image3_pane_t4

0x8d23,	// (0x000368e4) popup_navstr_preview_pane_ParamLimits

0x8d23,	// (0x000368e4) popup_navstr_preview_pane

0x8d37,	// (0x000368f8) scroll_navstr_pane_ParamLimits

0x8d37,	// (0x000368f8) scroll_navstr_pane

0x9bce,	// (0x0003778f) bg_popup_preview_window_pane_cp04

0xe674,	// (0x0003c235) popup_navstr_preview_pane_t1

0x8d4b,	// (0x0003690c) scroll_navstr_pane_g1_ParamLimits

0x8d4b,	// (0x0003690c) scroll_navstr_pane_g1

0x8d5f,	// (0x00036920) scroll_navstr_pane_t1_ParamLimits

0x8d5f,	// (0x00036920) scroll_navstr_pane_t1

0xe619,	// (0x0003c1da) bg_button_pane_cp014

0xe619,	// (0x0003c1da) bg_button_pane_cp030

0x8462,	// (0x00036023) list_double_fisheye_pane_g4_ParamLimits

0x8462,	// (0x00036023) list_double_fisheye_pane_g4

0x846e,	// (0x0003602f) list_double_fisheye_pane_g5_ParamLimits

0x846e,	// (0x0003602f) list_double_fisheye_pane_g5

0xc9d9,	// (0x0003a59a) sp_fs_scroll_pane_cp03

0xe3eb,	// (0x0003bfac) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe3f7,	// (0x0003bfb8) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce6,	// (0x0003d8a7) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe403,	// (0x0003bfc4) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe5a6,	// (0x0003c167) sp_fs_scroll_pane_cp02

0xa440,	// (0x00038001) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa440,	// (0x00038001) popup_sp_fs_calendar_preview_list_single_pane

0x9bce,	// (0x0003778f) main_cam6_pano_pane

0x1a03,	// (0x0002f5c4) main_mup3_pane_ParamLimits

0x9bce,	// (0x0003778f) main_phacti_pane

0x8041,	// (0x00035c02) bg_button_pane_cp11

0x805b,	// (0x00035c1c) main_mobtv_info_pane_g2_ParamLimits

0x805b,	// (0x00035c1c) main_mobtv_info_pane_g2

0x0001,

0xfc46,	// (0x0003d807) main_mobtv_info_pane_g_ParamLimits

0xfc46,	// (0x0003d807) main_mobtv_info_pane_g

0x8238,	// (0x00035df9) sc_clock_pane_t5_ParamLimits

0x8238,	// (0x00035df9) sc_clock_pane_t5

0x82ca,	// (0x00035e8b) main_radioblah_pane_g1_ParamLimits

0xe202,	// (0x0003bdc3) main_radioblah_pane_t3_ParamLimits

0xe202,	// (0x0003bdc3) main_radioblah_pane_t3

0xe21a,	// (0x0003bddb) main_radioblah_pane_t4_ParamLimits

0xe21a,	// (0x0003bddb) main_radioblah_pane_t4

0x82f2,	// (0x00035eb3) main_radioblah_text_pane_ParamLimits

0x82f2,	// (0x00035eb3) main_radioblah_text_pane

0x8304,	// (0x00035ec5) main_radioblah_info_pane_g1_ParamLimits

0x839d,	// (0x00035f5e) main_radioblah_info_pane_t4_ParamLimits

0x839d,	// (0x00035f5e) main_radioblah_info_pane_t4

0xa66e,	// (0x0003822f) main_sp_fs_calendar_pane

0x8d75,	// (0x00036936) main_phacti_pane_g1

0x8d7d,	// (0x0003693e) phacti_note_pane_ParamLimits

0x8d7d,	// (0x0003693e) phacti_note_pane

0xe68b,	// (0x0003c24c) phacti_term_pane_ParamLimits

0xe68b,	// (0x0003c24c) phacti_term_pane

0xe6a0,	// (0x0003c261) phacti_note_pane_t1_ParamLimits

0xe6a0,	// (0x0003c261) phacti_note_pane_t1

0xe6b7,	// (0x0003c278) phacti_term_pane_g1

0xe6bf,	// (0x0003c280) phacti_term_pane_t1_ParamLimits

0xe6bf,	// (0x0003c280) phacti_term_pane_t1

0xe6e9,	// (0x0003c2aa) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe6f1,	// (0x0003c2b2) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb0,	// (0x0003d971) popup_sp_fs_calendar_preview_list_single_pane_g

0xe6f9,	// (0x0003c2ba) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe6f9,	// (0x0003c2ba) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe70f,	// (0x0003c2d0) aid_popup_sp_fs_bg_corner_pane

0xc72a,	// (0x0003a2eb) popup_sp_fs_calendar_preview_bg_pane_g1

0x9bce,	// (0x0003778f) popup_sp_fs_calendar_preview_bg_pane

0x2524,	// (0x000300e5) popup_sp_fs_calendar_preview_list_pane

0xc320,	// (0x00039ee1) bg_main_sp_fs_cale_pane_ParamLimits

0xc320,	// (0x00039ee1) bg_main_sp_fs_cale_pane

0xe720,	// (0x0003c2e1) listscroll_cale_mrui_pane_ParamLimits

0xe720,	// (0x0003c2e1) listscroll_cale_mrui_pane

0xe735,	// (0x0003c2f6) listscroll_sp_fs_schedule_track_pane

0xe73e,	// (0x0003c2ff) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe73e,	// (0x0003c2ff) main_sp_fs_ctrlbar_pane_cp01

0xe751,	// (0x0003c312) main_sp_fs_ribbon_pane

0xe759,	// (0x0003c31a) popup_sp_fs_cale_preview_window

0x8df2,	// (0x000369b3) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8df2,	// (0x000369b3) list_single_sp_fs_schedule_track_pane

0xa66e,	// (0x0003822f) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xa66e,	// (0x0003822f) bg_sp_fs_highlight_list_pane_cp03

0x8e07,	// (0x000369c8) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8e07,	// (0x000369c8) list_single_sp_fs_schedule_track_pane_g1

0x8e13,	// (0x000369d4) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8e13,	// (0x000369d4) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdb5,	// (0x0003d976) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdb5,	// (0x0003d976) list_single_sp_fs_schedule_track_pane_g

0x8e1f,	// (0x000369e0) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8e1f,	// (0x000369e0) list_single_sp_fs_schedule_track_pane_t1

0x8e39,	// (0x000369fa) sp_fs_schedule_track_pane_ParamLimits

0x8e39,	// (0x000369fa) sp_fs_schedule_track_pane

0xe76b,	// (0x0003c32c) sp_fs_schedule_track_pane_g1

0xe773,	// (0x0003c334) sp_fs_schedule_track_pane_g2

0xe77b,	// (0x0003c33c) sp_fs_schedule_track_pane_g3

0xe783,	// (0x0003c344) sp_fs_schedule_track_pane_g4

0xe78b,	// (0x0003c34c) sp_fs_schedule_track_pane_g5

0x0004,

0xfdba,	// (0x0003d97b) sp_fs_schedule_track_pane_g

0xd240,	// (0x0003ae01) bg_sp_fs_schedule_viewer_highlight_g1

0xa82b,	// (0x000383ec) bg_sp_fs_schedule_viewer_highlight_g2

0xd248,	// (0x0003ae09) bg_sp_fs_schedule_viewer_highlight_g3

0xd250,	// (0x0003ae11) bg_sp_fs_schedule_viewer_highlight_g4

0xd464,	// (0x0003b025) bg_sp_fs_schedule_viewer_highlight_g5

0xd260,	// (0x0003ae21) bg_sp_fs_schedule_viewer_highlight_g6

0xd268,	// (0x0003ae29) bg_sp_fs_schedule_viewer_highlight_g7

0xd270,	// (0x0003ae31) bg_sp_fs_schedule_viewer_highlight_g8

0xa80b,	// (0x000383cc) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdc5,	// (0x0003d986) bg_sp_fs_schedule_viewer_highlight_g

0x9bce,	// (0x0003778f) bg_main_sp_fs_ribbon_pane

0x8e4a,	// (0x00036a0b) main_sp_fs_ribbon_pane_g1

0xe793,	// (0x0003c354) main_sp_fs_ribbon_pane_t1

0x8e53,	// (0x00036a14) main_sp_fs_ribbon_pane_t2

0xe7a2,	// (0x0003c363) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdd8,	// (0x0003d999) main_sp_fs_ribbon_pane_t

0xe7b1,	// (0x0003c372) main_sp_fs_ribbon_scheduler_pane

0xe7b9,	// (0x0003c37a) bg_main_sp_fs_ribbon_pane_g1

0xe7c2,	// (0x0003c383) bg_main_sp_fs_ribbon_pane_g2

0xe7cb,	// (0x0003c38c) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfddf,	// (0x0003d9a0) bg_main_sp_fs_ribbon_pane_g

0xe7d3,	// (0x0003c394) main_sp_fs_ribbon_scheduler_pane_g1

0xe7dc,	// (0x0003c39d) main_sp_fs_ribbon_scheduler_pane_g2

0xe7e5,	// (0x0003c3a6) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfde6,	// (0x0003d9a7) main_sp_fs_ribbon_scheduler_pane_g

0xe7ee,	// (0x0003c3af) list_cale_mrui_pane

0x8e62,	// (0x00036a23) sp_fs_scroll_pane_cp07_ParamLimits

0x8e62,	// (0x00036a23) sp_fs_scroll_pane_cp07

0x8e7e,	// (0x00036a3f) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8e7e,	// (0x00036a3f) bg_sp_fs_schedule_viewer_highlight

0xe7fb,	// (0x0003c3bc) list_single_sp_fs_schedule_track_pane_cp01

0xe803,	// (0x0003c3c4) list_sp_fs_schedule_track_pane

0xe80b,	// (0x0003c3cc) sp_fs_scroll_pane_cp06_ParamLimits

0xe80b,	// (0x0003c3cc) sp_fs_scroll_pane_cp06

0xc72a,	// (0x0003a2eb) bgmain_sp_fs_calendar_pane_g1

0x8e8e,	// (0x00036a4f) list_single_cale_mrui_pane_ParamLimits

0x8e8e,	// (0x00036a4f) list_single_cale_mrui_pane

0xe81d,	// (0x0003c3de) list_single_cale_mrui_row_pane_ParamLimits

0xe81d,	// (0x0003c3de) list_single_cale_mrui_row_pane

0xe82a,	// (0x0003c3eb) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe82a,	// (0x0003c3eb) list_single_cale_mrui_row_pane_g1

0xe86f,	// (0x0003c430) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe86f,	// (0x0003c430) list_single_cale_mrui_row_pane_t1

0x8eb0,	// (0x00036a71) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8eb0,	// (0x00036a71) list_single_cale_mrui_row_pane_t2

0xe881,	// (0x0003c442) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe881,	// (0x0003c442) list_single_cale_mrui_row_pane_t3

0xe8b0,	// (0x0003c471) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe8b0,	// (0x0003c471) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf4,	// (0x0003d9b5) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf4,	// (0x0003d9b5) list_single_cale_mrui_row_pane_t

0x8f18,	// (0x00036ad9) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8f18,	// (0x00036ad9) list_single_cmail_header_editor_pane_bg_cp01

0x8f3e,	// (0x00036aff) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8f3e,	// (0x00036aff) list_single_cmail_header_editor_pane_bg_cp02

0x8f5e,	// (0x00036b1f) main_radioblah_text_pane_t1_ParamLimits

0x8f5e,	// (0x00036b1f) main_radioblah_text_pane_t1

0xe8df,	// (0x0003c4a0) cam6_indi_pane_cp01

0xe8e7,	// (0x0003c4a8) cam6_mode_pane_cp01

0xe8ef,	// (0x0003c4b0) cam6_pano_pane

0xe8f8,	// (0x0003c4b9) cam6_zoom_pane_cp01

0xe900,	// (0x0003c4c1) cam6_pano_image_pane

0xe90b,	// (0x0003c4cc) cam6_pano_pane_g1

0xdf5d,	// (0x0003bb1e) cam6_pano_pane_g2

0xe914,	// (0x0003c4d5) cam6_pano_pane_g3

0xe91d,	// (0x0003c4de) cam6_pano_pane_g4

0xcd4c,	// (0x0003a90d) cam6_pano_pane_g5

0xe926,	// (0x0003c4e7) cam6_pano_pane_g6

0xe930,	// (0x0003c4f1) cam6_pano_pane_g7

0xe938,	// (0x0003c4f9) cam6_pano_pane_g8

0xe941,	// (0x0003c502) cam6_pano_pane_g9

0x0008,

0xfdfd,	// (0x0003d9be) cam6_pano_pane_g

0x9bce,	// (0x0003778f) main_browser_tag_pane

0xe66c,	// (0x0003c22d) grid_navstr_albumart_pane

0xe94c,	// (0x0003c50d) cell_navstr_albumart_pane_ParamLimits

0xe94c,	// (0x0003c50d) cell_navstr_albumart_pane

0xb037,	// (0x00038bf8) cell_navstr_albumart_pane_g1

0xc131,	// (0x00039cf2) cell_navstr_albumart_pane_g2

0xc141,	// (0x00039d02) cell_navstr_albumart_pane_g3

0xc139,	// (0x00039cfa) cell_navstr_albumart_pane_g4

0x0003,

0xfe10,	// (0x0003d9d1) cell_navstr_albumart_pane_g

0x8f79,	// (0x00036b3a) bt_list_pane_ParamLimits

0x8f79,	// (0x00036b3a) bt_list_pane

0xe96e,	// (0x0003c52f) bt_list_pane_t1

0xe97d,	// (0x0003c53e) bt_list_pane_t2

0x0001,

0xfe19,	// (0x0003d9da) bt_list_pane_t

0x9bce,	// (0x0003778f) main_cale_prevew_pane

0x8f8e,	// (0x00036b4f) popup_cale_preview_window_ParamLimits

0x8f8e,	// (0x00036b4f) popup_cale_preview_window

0xa66e,	// (0x0003822f) bg_popup_preview_window_pane_cp05_ParamLimits

0xa66e,	// (0x0003822f) bg_popup_preview_window_pane_cp05

0xe98c,	// (0x0003c54d) list_cale_preview_pane_ParamLimits

0xe98c,	// (0x0003c54d) list_cale_preview_pane

0xe998,	// (0x0003c559) list_double_cale_preview_pane_ParamLimits

0xe998,	// (0x0003c559) list_double_cale_preview_pane

0xe9aa,	// (0x0003c56b) list_single_cale_preview_pane_ParamLimits

0xe9aa,	// (0x0003c56b) list_single_cale_preview_pane

0xe9be,	// (0x0003c57f) list_single_cale_preview_pane_g1

0xe9c6,	// (0x0003c587) list_single_cale_preview_pane_t1_ParamLimits

0xe9c6,	// (0x0003c587) list_single_cale_preview_pane_t1

0xe9db,	// (0x0003c59c) list_double_cale_preview_pane_g1

0xe9e3,	// (0x0003c5a4) list_double_cale_preview_pane_t1_ParamLimits

0xe9e3,	// (0x0003c5a4) list_double_cale_preview_pane_t1

0xe9f8,	// (0x0003c5b9) list_double_cale_preview_pane_t2_ParamLimits

0xe9f8,	// (0x0003c5b9) list_double_cale_preview_pane_t2

0x0001,

0xfe1e,	// (0x0003d9df) list_double_cale_preview_pane_t_ParamLimits

0xfe1e,	// (0x0003d9df) list_double_cale_preview_pane_t

0x9bce,	// (0x0003778f) main_ezdial_pane

0xa66e,	// (0x0003822f) main_sp_fs_email_pane_ParamLimits

0x8608,	// (0x000361c9) cmail_ddmenu_btn01_pane_ParamLimits

0x8608,	// (0x000361c9) cmail_ddmenu_btn01_pane

0x861b,	// (0x000361dc) cmail_ddmenu_btn02_pane_ParamLimits

0x861b,	// (0x000361dc) cmail_ddmenu_btn02_pane

0x863e,	// (0x000361ff) cmail_ddmenu_btn03_pane_ParamLimits

0x863e,	// (0x000361ff) cmail_ddmenu_btn03_pane

0x8664,	// (0x00036225) main_sp_fs_ctrlbar_pane_ParamLimits

0x8688,	// (0x00036249) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8c04,	// (0x000367c5) list_cmail_body_pane_ParamLimits

0x8c58,	// (0x00036819) bg_button_pane_cp12

0xe5c8,	// (0x0003c189) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe5c8,	// (0x0003c189) list_single_cmail_header_detail_pane_g3

0xe5d5,	// (0x0003c196) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe5d5,	// (0x0003c196) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda1,	// (0x0003d962) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda1,	// (0x0003d962) list_single_cmail_header_detail_pane_t

0xe6d4,	// (0x0003c295) phacti_term_pane_t2_ParamLimits

0xe6d4,	// (0x0003c295) phacti_term_pane_t2

0x0001,

0xfdab,	// (0x0003d96c) phacti_term_pane_t_ParamLimits

0xfdab,	// (0x0003d96c) phacti_term_pane_t

0xea10,	// (0x0003c5d1) aid_size_list_single_double

0x8fa7,	// (0x00036b68) popup_ezdial_listscroll_window

0x8fc2,	// (0x00036b83) popup_number_entry_window_cp01

0xaec8,	// (0x00038a89) bg_popup_call_pane_cp09

0xea1c,	// (0x0003c5dd) ezdial_list_pane

0xea24,	// (0x0003c5e5) scroll_pane_cp23

0xc320,	// (0x00039ee1) bg_button_pane_cp028_ParamLimits

0xc320,	// (0x00039ee1) bg_button_pane_cp028

0x8fd0,	// (0x00036b91) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8fd0,	// (0x00036b91) cmail_ddmenu_btn01_pane_g1

0x8fdc,	// (0x00036b9d) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8fdc,	// (0x00036b9d) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe23,	// (0x0003d9e4) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe23,	// (0x0003d9e4) cmail_ddmenu_btn01_pane_g

0xea2c,	// (0x0003c5ed) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xea2c,	// (0x0003c5ed) cmail_ddmenu_btn01_pane_t1

0xc320,	// (0x00039ee1) bg_button_pane_cp029_ParamLimits

0xc320,	// (0x00039ee1) bg_button_pane_cp029

0x8ff2,	// (0x00036bb3) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8ff2,	// (0x00036bb3) cmail_ddmenu_btn02_pane_g1

0x900a,	// (0x00036bcb) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x900a,	// (0x00036bcb) cmail_ddmenu_btn02_pane_t1

0xa66e,	// (0x0003822f) bg_button_pane_cp031_ParamLimits

0xa66e,	// (0x0003822f) bg_button_pane_cp031

0x8ff2,	// (0x00036bb3) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8ff2,	// (0x00036bb3) cmail_ddmenu_btn03_pane_g1

0x900a,	// (0x00036bcb) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x900a,	// (0x00036bcb) cmail_ddmenu_btn03_pane_t1

0x6615,	// (0x000341d6) cell_dialer2_keypad_pane_t1_ParamLimits

0x662f,	// (0x000341f0) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x662f,	// (0x000341f0) cell_dialer2_keypad_pane_t1_copy1

0x7e9a,	// (0x00035a5b) ncimui_group_button_pane

0xa66e,	// (0x0003822f) main_sp_fs_calendar_pane_ParamLimits

0x8c18,	// (0x000367d9) list_single_cmail_header_caption_pane_ParamLimits

0xe717,	// (0x0003c2d8) aid_recal_txt_sm_pane

0x9bce,	// (0x0003778f) mian_recal_day_pane

0xe759,	// (0x0003c31a) popup_sp_fs_cale_preview_window_ParamLimits

0xea42,	// (0x0003c603) list_recal_day_pane

0xea84,	// (0x0003c645) list_single_recal_day_pane_ParamLimits

0xea84,	// (0x0003c645) list_single_recal_day_pane

0xea96,	// (0x0003c657) list_single_recal_day_pane_g1_ParamLimits

0xea96,	// (0x0003c657) list_single_recal_day_pane_g1

0xeaa2,	// (0x0003c663) list_single_recal_day_pane_g2_ParamLimits

0xeaa2,	// (0x0003c663) list_single_recal_day_pane_g2

0xeab2,	// (0x0003c673) list_single_recal_day_pane_g3_ParamLimits

0xeab2,	// (0x0003c673) list_single_recal_day_pane_g3

0x902e,	// (0x00036bef) list_single_recal_day_pane_g4_ParamLimits

0x902e,	// (0x00036bef) list_single_recal_day_pane_g4

0xeabe,	// (0x0003c67f) list_single_recal_day_pane_g5_ParamLimits

0xeabe,	// (0x0003c67f) list_single_recal_day_pane_g5

0xeace,	// (0x0003c68f) list_single_recal_day_pane_g6_ParamLimits

0xeace,	// (0x0003c68f) list_single_recal_day_pane_g6

0x0004,

0xfe32,	// (0x0003d9f3) list_single_recal_day_pane_g_ParamLimits

0xfe32,	// (0x0003d9f3) list_single_recal_day_pane_g

0xeae2,	// (0x0003c6a3) list_single_recal_day_pane_t1

0xeaf4,	// (0x0003c6b5) list_single_recal_day_pane_t2

0x0001,

0xfe3d,	// (0x0003d9fe) list_single_recal_day_pane_t

0x904e,	// (0x00036c0f) ncimui_query_button_pane_ParamLimits

0x904e,	// (0x00036c0f) ncimui_query_button_pane

0x905e,	// (0x00036c1f) ncimui_query_button_pane_t1_ParamLimits

0x905e,	// (0x00036c1f) ncimui_query_button_pane_t1

0xeb06,	// (0x0003c6c7) ncimui_query_button_pane_t2_ParamLimits

0xeb06,	// (0x0003c6c7) ncimui_query_button_pane_t2

0x0001,

0xfe42,	// (0x0003da03) ncimui_query_button_pane_t_ParamLimits

0xfe42,	// (0x0003da03) ncimui_query_button_pane_t

0x9071,	// (0x00036c32) query_button_pane_ParamLimits

0x9071,	// (0x00036c32) query_button_pane

0x9bce,	// (0x0003778f) bg_button_pane_cp0028

0xeb19,	// (0x0003c6da) query_button_pane_t1

0x073f,	// (0x0002e300) main_tport_pane_ParamLimits

0x8ad0,	// (0x00036691) bg_popup_window_pane_cp01_ParamLimits

0x8ad0,	// (0x00036691) bg_popup_window_pane_cp01

0x8aeb,	// (0x000366ac) heading_pane_cp08_ParamLimits

0x8aeb,	// (0x000366ac) heading_pane_cp08

0x8afe,	// (0x000366bf) heading_pane_cp07_ParamLimits

0x8afe,	// (0x000366bf) heading_pane_cp07

0x8ba5,	// (0x00036766) cell_tport_appsw_pane_g2

0x0002,

0xfd8e,	// (0x0003d94f) cell_tport_appsw_pane_g

0x429e,	// (0x00031e5f) input_candi_list_open_g1

0xa9e2,	// (0x000385a3) list_cale_time_pane_g6_ParamLimits

0xa9e2,	// (0x000385a3) list_cale_time_pane_g6

0x540b,	// (0x00032fcc) aid_size_touch_calib_1_ParamLimits

0x540b,	// (0x00032fcc) aid_size_touch_calib_1

0x541d,	// (0x00032fde) aid_size_touch_calib_2_ParamLimits

0x541d,	// (0x00032fde) aid_size_touch_calib_2

0x5435,	// (0x00032ff6) aid_size_touch_calib_3_ParamLimits

0x5435,	// (0x00032ff6) aid_size_touch_calib_3

0x5453,	// (0x00033014) aid_size_touch_calib_4_ParamLimits

0x5453,	// (0x00033014) aid_size_touch_calib_4

0x546b,	// (0x0003302c) main_touch_calib_button_group_pane_ParamLimits

0x546b,	// (0x0003302c) main_touch_calib_button_group_pane

0x5483,	// (0x00033044) main_touch_calib_pane_g1_ParamLimits

0x5495,	// (0x00033056) main_touch_calib_pane_g2_ParamLimits

0x54a7,	// (0x00033068) main_touch_calib_pane_g3_ParamLimits

0x54b9,	// (0x0003307a) main_touch_calib_pane_g4_ParamLimits

0xf75c,	// (0x0003d31d) main_touch_calib_pane_g_ParamLimits

0x54cb,	// (0x0003308c) main_touch_calib_pane_t1_ParamLimits

0x54e5,	// (0x000330a6) main_touch_calib_pane_t2_ParamLimits

0x54ff,	// (0x000330c0) main_touch_calib_pane_t3_ParamLimits

0x5513,	// (0x000330d4) main_touch_calib_pane_t4_ParamLimits

0x5527,	// (0x000330e8) main_touch_calib_pane_t5_ParamLimits

0xf765,	// (0x0003d326) main_touch_calib_pane_t_ParamLimits

0xcb0a,	// (0x0003a6cb) list_single_fp_cale_pane_g3_ParamLimits

0xcb0a,	// (0x0003a6cb) list_single_fp_cale_pane_g3

0x1a03,	// (0x0002f5c4) bg_button_pane_cp012_ParamLimits

0x1a03,	// (0x0002f5c4) bg_vkb2_func_pane_cp03_ParamLimits

0x1830,	// (0x0002f3f1) cell_vitu2_function_top_pane_g1_ParamLimits

0x1a03,	// (0x0002f5c4) bg_vkb2_func_pane_cp04_ParamLimits

0x7e28,	// (0x000359e9) main_ncimui_button_group_pane_ParamLimits

0x7e28,	// (0x000359e9) main_ncimui_button_group_pane

0x7e88,	// (0x00035a49) main_ncimui_pane_t3_ParamLimits

0x7e88,	// (0x00035a49) main_ncimui_pane_t3

0xe682,	// (0x0003c243) phacti_button_group_pane

0xea10,	// (0x0003c5d1) aid_size_list_single_double_ParamLimits

0x8fa7,	// (0x00036b68) popup_ezdial_listscroll_window_ParamLimits

0x8fc2,	// (0x00036b83) popup_number_entry_window_cp01_ParamLimits

0x9084,	// (0x00036c45) phacti_button_pane_ParamLimits

0x9084,	// (0x00036c45) phacti_button_pane

0x9bce,	// (0x0003778f) bg_button_pane_cp14

0xeb27,	// (0x0003c6e8) phacti_button_pane_t1

0x9095,	// (0x00036c56) main_touch_calib_button_pane_ParamLimits

0x9095,	// (0x00036c56) main_touch_calib_button_pane

0xa32a,	// (0x00037eeb) bg_button_pane_cp18_ParamLimits

0xa32a,	// (0x00037eeb) bg_button_pane_cp18

0xeb35,	// (0x0003c6f6) main_touch_calib_button_pane_t1_ParamLimits

0xeb35,	// (0x0003c6f6) main_touch_calib_button_pane_t1

0xeb4b,	// (0x0003c70c) main_touch_calib_button_pane_t2_ParamLimits

0xeb4b,	// (0x0003c70c) main_touch_calib_button_pane_t2

0x0001,

0xfe47,	// (0x0003da08) main_touch_calib_button_pane_t_ParamLimits

0xfe47,	// (0x0003da08) main_touch_calib_button_pane_t

0x9bce,	// (0x0003778f) cell_ncimui_button_pane

0x9bce,	// (0x0003778f) bg_button_pane_cp032

0xeb69,	// (0x0003c72a) cell_ncimui_button_pane_t1

0x664c,	// (0x0003420d) image3_infobar_pane_ParamLimits

0x664c,	// (0x0003420d) image3_infobar_pane

0x8264,	// (0x00035e25) fs_bigclock_status_pane_ParamLimits

0x8264,	// (0x00035e25) fs_bigclock_status_pane

0x8271,	// (0x00035e32) main_fs_bigclock_clock_pane_ParamLimits

0x8271,	// (0x00035e32) main_fs_bigclock_clock_pane

0x828d,	// (0x00035e4e) main_fs_bigclock_indi_pane_ParamLimits

0x828d,	// (0x00035e4e) main_fs_bigclock_indi_pane

0x82a6,	// (0x00035e67) main_fs_bigclock_swipe_pane_ParamLimits

0x82a6,	// (0x00035e67) main_fs_bigclock_swipe_pane

0x9bce,	// (0x0003778f) main_fs_clock_dumped_data

0xe06a,	// (0x0003bc2b) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe06a,	// (0x0003bc2b) list_single_fs_bigclock_indicator_pane_g1

0xe085,	// (0x0003bc46) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe085,	// (0x0003bc46) list_single_fs_bigclock_indicator_pane_g2

0xe09f,	// (0x0003bc60) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe09f,	// (0x0003bc60) list_single_fs_bigclock_indicator_pane_g3

0xe0b9,	// (0x0003bc7a) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe0b9,	// (0x0003bc7a) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc7a,	// (0x0003d83b) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc7a,	// (0x0003d83b) list_single_fs_bigclock_indicator_pane_g

0xe0f4,	// (0x0003bcb5) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe0f4,	// (0x0003bcb5) list_single_fs_bigclock_indicator_pane_t1

0xe11c,	// (0x0003bcdd) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe11c,	// (0x0003bcdd) list_single_fs_bigclock_indicator_pane_t2

0xe144,	// (0x0003bd05) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe144,	// (0x0003bd05) list_single_fs_bigclock_indicator_pane_t3

0xe16c,	// (0x0003bd2d) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe16c,	// (0x0003bd2d) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc85,	// (0x0003d846) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc85,	// (0x0003d846) list_single_fs_bigclock_indicator_pane_t

0xeb77,	// (0x0003c738) image3_infobar_fav_pane_ParamLimits

0xeb77,	// (0x0003c738) image3_infobar_fav_pane

0xeb87,	// (0x0003c748) image3_infobar_loc_pane_ParamLimits

0xeb87,	// (0x0003c748) image3_infobar_loc_pane

0xeb9b,	// (0x0003c75c) image3_infobar_time_pane_ParamLimits

0xeb9b,	// (0x0003c75c) image3_infobar_time_pane

0xc72a,	// (0x0003a2eb) image3_infobar_time_pane_g1

0xebab,	// (0x0003c76c) image3_infobar_time_pane_t1

0xc72a,	// (0x0003a2eb) image3_infobar_loc_pane_g1

0xebb9,	// (0x0003c77a) image3_infobar_loc_pane_g2

0x0001,

0x0119,	// (0x0002dcda) image3_infobar_loc_pane_g

0xebc1,	// (0x0003c782) image3_infobar_loc_pane_t1

0xc72a,	// (0x0003a2eb) image3_infobar_fav_pane_g1

0xebcf,	// (0x0003c790) image3_infobar_fav_pane_g2

0x0001,

0x011e,	// (0x0002dcdf) image3_infobar_fav_pane_g

0xebd7,	// (0x0003c798) fs_bigclock_status_battery_pane

0xebe0,	// (0x0003c7a1) fs_bigclock_status_signal_pane

0xebe9,	// (0x0003c7aa) fs_bigclock_status_title_pane

0xebf2,	// (0x0003c7b3) fs_bigclock_status_signal_pane_g1

0xebfb,	// (0x0003c7bc) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe4c,	// (0x0003da0d) fs_bigclock_status_signal_pane_g

0xec03,	// (0x0003c7c4) fs_bigclock_status_battery_pane_g1

0xec0c,	// (0x0003c7cd) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe51,	// (0x0003da12) fs_bigclock_status_battery_pane_g

0xec14,	// (0x0003c7d5) fs_bigclock_status_title_pane_t1

0xc72a,	// (0x0003a2eb) main_fs_bigclock_clock_pane_g1

0x90aa,	// (0x00036c6b) main_fs_bigclock_clock_pane_g2

0x90aa,	// (0x00036c6b) main_fs_bigclock_clock_pane_g3

0x90aa,	// (0x00036c6b) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe56,	// (0x0003da17) main_fs_bigclock_clock_pane_g

0x90b2,	// (0x00036c73) main_fs_bigclock_clock_pane_t1

0x90c0,	// (0x00036c81) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe5f,	// (0x0003da20) main_fs_bigclock_clock_pane_t

0xec22,	// (0x0003c7e3) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec22,	// (0x0003c7e3) list_single_fs_bigclock_indicator_pane

0x90cf,	// (0x00036c90) list_single_fs_bigclock_pane_ParamLimits

0x90cf,	// (0x00036c90) list_single_fs_bigclock_pane

0xec3c,	// (0x0003c7fd) main_fs_bigclock_indicator_pane_t1

0xec4b,	// (0x0003c80c) list_single_fs_bigclock_pane_g1

0xec53,	// (0x0003c814) list_single_fs_bigclock_pane_t1

0xc72a,	// (0x0003a2eb) main_fs_bigclock_swipe_pane_g1

0xec96,	// (0x0003c857) main_fs_bigclock_swipe_pane_g2

0x0001,

0x0138,	// (0x0002dcf9) main_fs_bigclock_swipe_pane_g

0xec9e,	// (0x0003c85f) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xec9e,	// (0x0003c85f) main_fs_bigclock_swipe_pane_t1

0x3a3e,	// (0x000315ff) call_type_pane_ParamLimits

0x9bce,	// (0x0003778f) main_btmg_pane

0xe856,	// (0x0003c417) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe856,	// (0x0003c417) list_single_cale_mrui_row_pane_g2

0x0002,

0xfded,	// (0x0003d9ae) list_single_cale_mrui_row_pane_g_ParamLimits

0xfded,	// (0x0003d9ae) list_single_cale_mrui_row_pane_g

0xea6b,	// (0x0003c62c) list_recal_vselct_arw_lo_pane

0xea73,	// (0x0003c634) list_recal_vselct_arw_up_pane

0xea7b,	// (0x0003c63c) list_recal_vselct_pane

0x9132,	// (0x00036cf3) btmg_button_pane

0x913c,	// (0x00036cfd) main_btmg_pane_g1

0x9bce,	// (0x0003778f) bg_button_pane_cp044

0xecbb,	// (0x0003c87c) btmg_button_pane_t1

0xc30c,	// (0x00039ecd) aid_listscroll_gen

0xa66e,	// (0x0003822f) main_cntbar_detail_pane

0xe59e,	// (0x0003c15f) list_cmail_folder_pane

0xc9d9,	// (0x0003a59a) sp_fs_scroll_pane_cp03_ParamLimits

0x8c18,	// (0x000367d9) list_single_fs_dyc_pane_cp01_ParamLimits

0x8c18,	// (0x000367d9) list_single_fs_dyc_pane_cp01

0xecc9,	// (0x0003c88a) aid_size_cmail_indent

0xecd2,	// (0x0003c893) list_single_dyc_row_pane_cp01

0x9172,	// (0x00036d33) cntbar_detail_list_pane_ParamLimits

0x9172,	// (0x00036d33) cntbar_detail_list_pane

0x91be,	// (0x00036d7f) main_cntbar_detail_cont_pane_ParamLimits

0x91be,	// (0x00036d7f) main_cntbar_detail_cont_pane

0xc9d9,	// (0x0003a59a) scroll_pane_cp032_ParamLimits

0xc9d9,	// (0x0003a59a) scroll_pane_cp032

0x91d2,	// (0x00036d93) cntbar_detail_list_event_pane_ParamLimits

0x91d2,	// (0x00036d93) cntbar_detail_list_event_pane

0x9182,	// (0x00036d43) cntbar_detail_list_shct_pane

0xa879,	// (0x0003843a) aid_list_gen

0xecdb,	// (0x0003c89c) aid_scroll

0xece4,	// (0x0003c8a5) aid_size_touch_scroll_bar

0x75f8,	// (0x000351b9) aid_list_double

0xeced,	// (0x0003c8ae) aid_list_single

0x75f8,	// (0x000351b9) aid_list_single_lg

0xecf6,	// (0x0003c8b7) aid_list_z_g_a_sm

0xecfe,	// (0x0003c8bf) aid_list_z_g_d

0xed06,	// (0x0003c8c7) aid_txt_z_prm

0x91e2,	// (0x00036da3) aid_txt_z_prm_cp01

0x91f0,	// (0x00036db1) aid_txt_z_sec

0x91fe,	// (0x00036dbf) main_cntbar_detail_cont_pane_g1_ParamLimits

0x91fe,	// (0x00036dbf) main_cntbar_detail_cont_pane_g1

0x9212,	// (0x00036dd3) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9212,	// (0x00036dd3) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe70,	// (0x0003da31) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe70,	// (0x0003da31) main_cntbar_detail_cont_pane_g

0xed14,	// (0x0003c8d5) main_cntbar_detail_cont_pane_t1

0xed22,	// (0x0003c8e3) main_cntbar_detail_cont_pane_t2

0xed30,	// (0x0003c8f1) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe75,	// (0x0003da36) main_cntbar_detail_cont_pane_t

0x9222,	// (0x00036de3) cell_cntbar_detail_list_shct_pane_ParamLimits

0x9222,	// (0x00036de3) cell_cntbar_detail_list_shct_pane

0xed3e,	// (0x0003c8ff) cntbar_detail_list_shct_pane_g1

0xed47,	// (0x0003c908) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe7c,	// (0x0003da3d) cntbar_detail_list_shct_pane_g

0x9236,	// (0x00036df7) cntbar_detail_list_event_pane_g1_ParamLimits

0x9236,	// (0x00036df7) cntbar_detail_list_event_pane_g1

0x9242,	// (0x00036e03) cntbar_detail_list_event_pane_g2_ParamLimits

0x9242,	// (0x00036e03) cntbar_detail_list_event_pane_g2

0x0005,

0xfe81,	// (0x0003da42) cntbar_detail_list_event_pane_g_ParamLimits

0xfe81,	// (0x0003da42) cntbar_detail_list_event_pane_g

0x92ae,	// (0x00036e6f) cntbar_detail_list_event_pane_t1_ParamLimits

0x92ae,	// (0x00036e6f) cntbar_detail_list_event_pane_t1

0x92c3,	// (0x00036e84) cntbar_detail_list_event_pane_t2_ParamLimits

0x92c3,	// (0x00036e84) cntbar_detail_list_event_pane_t2

0x0002,

0xfe8e,	// (0x0003da4f) cntbar_detail_list_event_pane_t_ParamLimits

0xfe8e,	// (0x0003da4f) cntbar_detail_list_event_pane_t

0xc72a,	// (0x0003a2eb) cell_cntbar_detail_list_shct_pane_g1

0x3e06,	// (0x000319c7) navi_pane_mv_g3

0xa66e,	// (0x0003822f) main_cntbar_detail_pane_ParamLimits

0x9bce,	// (0x0003778f) main_notif_wgt_pane

0x63bd,	// (0x00033f7e) aid_tch_main_mp4_pane_g4

0x659f,	// (0x00034160) popup_slider_window_cp02

0xea61,	// (0x0003c622) list_recal_day_event_pane

0x9146,	// (0x00036d07) cntbar_detail_btn_pane_ParamLimits

0x9146,	// (0x00036d07) cntbar_detail_btn_pane

0x915c,	// (0x00036d1d) cntbar_detail_btn_pane_cp01_ParamLimits

0x915c,	// (0x00036d1d) cntbar_detail_btn_pane_cp01

0x9182,	// (0x00036d43) cntbar_detail_list_shct_pane_ParamLimits

0x9192,	// (0x00036d53) cntbar_detail_pane_g1_ParamLimits

0x9192,	// (0x00036d53) cntbar_detail_pane_g1

0x91a2,	// (0x00036d63) cntbar_detail_pane_t1_ParamLimits

0x91a2,	// (0x00036d63) cntbar_detail_pane_t1

0x924e,	// (0x00036e0f) cntbar_detail_list_event_pane_g3_ParamLimits

0x924e,	// (0x00036e0f) cntbar_detail_list_event_pane_g3

0x9266,	// (0x00036e27) cntbar_detail_list_event_pane_g4_ParamLimits

0x9266,	// (0x00036e27) cntbar_detail_list_event_pane_g4

0x927e,	// (0x00036e3f) cntbar_detail_list_event_pane_g5_ParamLimits

0x927e,	// (0x00036e3f) cntbar_detail_list_event_pane_g5

0x9296,	// (0x00036e57) cntbar_detail_list_event_pane_g6_ParamLimits

0x9296,	// (0x00036e57) cntbar_detail_list_event_pane_g6

0x92d8,	// (0x00036e99) cntbar_detail_list_event_pane_t3_ParamLimits

0x92d8,	// (0x00036e99) cntbar_detail_list_event_pane_t3

0x92ea,	// (0x00036eab) popup_notif_wgt_window_ParamLimits

0x92ea,	// (0x00036eab) popup_notif_wgt_window

0x9303,	// (0x00036ec4) popup_submenu_window_cp01_ParamLimits

0x9303,	// (0x00036ec4) popup_submenu_window_cp01

0xaec8,	// (0x00038a89) bg_popup_window_pane_cp10

0xed50,	// (0x0003c911) listscroll_notif_wgt_pane

0xed61,	// (0x0003c922) list_notif_wgt_window

0xed6a,	// (0x0003c92b) scroll_pane_cp033

0x9315,	// (0x00036ed6) list_notif_wgt_row_pane_ParamLimits

0x9315,	// (0x00036ed6) list_notif_wgt_row_pane

0xed73,	// (0x0003c934) aid_size_list_notif_wgt_del

0xed80,	// (0x0003c941) list_notif_wgt_row_pane_g1

0xed8c,	// (0x0003c94d) list_notif_wgt_row_pane_g2

0xed98,	// (0x0003c959) list_notif_wgt_row_pane_g3

0x0002,

0xfe95,	// (0x0003da56) list_notif_wgt_row_pane_g

0xeda5,	// (0x0003c966) list_notif_wgt_row_pane_t1

0xedba,	// (0x0003c97b) list_notif_wgt_row_pane_t2

0xedcc,	// (0x0003c98d) list_notif_wgt_row_pane_t3

0x0002,

0xfe9c,	// (0x0003da5d) list_notif_wgt_row_pane_t

0xd47e,	// (0x0003b03f) list_recal_day_event_pane_g1

0xedde,	// (0x0003c99f) list_recal_day_event_pane_t1

0x9bce,	// (0x0003778f) bg_button_pane_cp045

0xeded,	// (0x0003c9ae) cntbar_detail_btn_pane_t1

0xc320,	// (0x00039ee1) main_callh_pane_ParamLimits

0xc320,	// (0x00039ee1) main_callh_pane

0x9bce,	// (0x0003778f) main_coverflow0_pane

0x9bce,	// (0x0003778f) main_wgtman_pane

0x82b4,	// (0x00035e75) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x82b4,	// (0x00035e75) main_fs_bigclock_unlock_btn_pane

0x8b9d,	// (0x0003675e) bg_button_pane_cp16

0x8bad,	// (0x0003676e) cell_tport_appsw_pane_g3

0x9325,	// (0x00036ee6) cf0_flow_pane_ParamLimits

0x9325,	// (0x00036ee6) cf0_flow_pane

0xedfb,	// (0x0003c9bc) listscroll_cf0_pane

0xee06,	// (0x0003c9c7) main_cf0_pane_g1

0x933a,	// (0x00036efb) main_cf0_pane_t1_ParamLimits

0x933a,	// (0x00036efb) main_cf0_pane_t1

0x9351,	// (0x00036f12) main_cf0_pane_t2_ParamLimits

0x9351,	// (0x00036f12) main_cf0_pane_t2

0x0001,

0xfea8,	// (0x0003da69) main_cf0_pane_t_ParamLimits

0xfea8,	// (0x0003da69) main_cf0_pane_t

0xee18,	// (0x0003c9d9) scroll_pane_cp11

0x9368,	// (0x00036f29) cf0_flow_pane_g1

0x9370,	// (0x00036f31) cf0_flow_pane_g2

0x0001,

0xfead,	// (0x0003da6e) cf0_flow_pane_g

0x9378,	// (0x00036f39) cf0_flow_pane_t1

0x9bce,	// (0x0003778f) main_call6_pane

0x9bce,	// (0x0003778f) main_calllock_pane

0x9386,	// (0x00036f47) call6_btn_grp_pane_ParamLimits

0x9386,	// (0x00036f47) call6_btn_grp_pane

0x93a0,	// (0x00036f61) call6_pane_g1_ParamLimits

0x93a0,	// (0x00036f61) call6_pane_g1

0x93b5,	// (0x00036f76) popup_call6_1st_window_ParamLimits

0x93b5,	// (0x00036f76) popup_call6_1st_window

0x93c6,	// (0x00036f87) popup_call6_2nd_window_ParamLimits

0x93c6,	// (0x00036f87) popup_call6_2nd_window

0x93d7,	// (0x00036f98) cell_call6_btn_pane_ParamLimits

0x93d7,	// (0x00036f98) cell_call6_btn_pane

0xaec8,	// (0x00038a89) bg_popup_call2_in_pane_cp03

0xee23,	// (0x0003c9e4) popup_call6_1st_window_g1

0xee2b,	// (0x0003c9ec) popup_call6_1st_window_g2

0xee33,	// (0x0003c9f4) popup_call6_1st_window_g3

0x0002,

0xfeb2,	// (0x0003da73) popup_call6_1st_window_g

0xee3b,	// (0x0003c9fc) popup_call6_1st_window_t1

0xee4a,	// (0x0003ca0b) popup_call6_1st_window_t2

0xee5a,	// (0x0003ca1b) popup_call6_1st_window_t3

0x0002,

0xfeb9,	// (0x0003da7a) popup_call6_1st_window_t

0xaec8,	// (0x00038a89) bg_popup_call2_in_pane_cp04

0xee23,	// (0x0003c9e4) popup_call6_2nd_window_g1

0xee2b,	// (0x0003c9ec) popup_call6_2nd_window_g2

0xee33,	// (0x0003c9f4) popup_call6_2nd_window_g3

0x0002,

0xfeb2,	// (0x0003da73) popup_call6_2nd_window_g

0xee3b,	// (0x0003c9fc) popup_call6_2nd_window_t1

0x9bce,	// (0x0003778f) bg_button_pane_cp15

0xee6a,	// (0x0003ca2b) cell_call6_btn_pane_g1

0xee73,	// (0x0003ca34) cell_call6_btn_pane_t1

0x93eb,	// (0x00036fac) listscroll_wgtman_pane_ParamLimits

0x93eb,	// (0x00036fac) listscroll_wgtman_pane

0x940e,	// (0x00036fcf) wgtman_btn_pane_ParamLimits

0x940e,	// (0x00036fcf) wgtman_btn_pane

0xad7f,	// (0x00038940) aid_scroll_copy1

0xee82,	// (0x0003ca43) list_wgtman_pane

0x9451,	// (0x00037012) wgtman_btn_pane_g1_ParamLimits

0x9451,	// (0x00037012) wgtman_btn_pane_g1

0x947d,	// (0x0003703e) wgtman_btn_pane_t1_ParamLimits

0x947d,	// (0x0003703e) wgtman_btn_pane_t1

0xee8c,	// (0x0003ca4d) wgtman_btn_pane_t2_ParamLimits

0xee8c,	// (0x0003ca4d) wgtman_btn_pane_t2

0x0001,

0xfec0,	// (0x0003da81) wgtman_btn_pane_t_ParamLimits

0xfec0,	// (0x0003da81) wgtman_btn_pane_t

0x94ba,	// (0x0003707b) listrow_wgtman_pane_ParamLimits

0x94ba,	// (0x0003707b) listrow_wgtman_pane

0x94cd,	// (0x0003708e) listrow_wgtman_pane_g1

0x94da,	// (0x0003709b) listrow_wgtman_pane_g2

0x0001,

0xfec5,	// (0x0003da86) listrow_wgtman_pane_g

0x94f8,	// (0x000370b9) listrow_wgtman_pane_t1

0x9510,	// (0x000370d1) listrow_wgtman_pane_t2

0x0001,

0xfeca,	// (0x0003da8b) listrow_wgtman_pane_t

0x9536,	// (0x000370f7) wait_bar_pane_cp09

0xeea3,	// (0x0003ca64) main_calllock_btn_pane

0xeead,	// (0x0003ca6e) main_calllock_pane_g1

0x9bce,	// (0x0003778f) bg_button_pane_cp17

0xeeb8,	// (0x0003ca79) main_calllock_btn_pane_g1

0xeec1,	// (0x0003ca82) main_calllock_btn_pane_t1

0x9bce,	// (0x0003778f) main_dialer3_pane

0x9bce,	// (0x0003778f) main_fmrd2_pane

0xc72a,	// (0x0003a2eb) main_fs_bigclock_unlock_btn_pane_g1

0xeed8,	// (0x0003ca99) main_fs_bigclock_unlock_btn_pane_t1

0x9548,	// (0x00037109) area_fmrd2_info_pane_ParamLimits

0x9548,	// (0x00037109) area_fmrd2_info_pane

0x9559,	// (0x0003711a) area_fmrd2_visual_pane_ParamLimits

0x9559,	// (0x0003711a) area_fmrd2_visual_pane

0x9567,	// (0x00037128) fmrd2_indi_pane_ParamLimits

0x9567,	// (0x00037128) fmrd2_indi_pane

0x9574,	// (0x00037135) area_fmrd2_visual_pane_g1

0x957c,	// (0x0003713d) area_fmrd2_visual_pane_t1

0x958c,	// (0x0003714d) area_fmrd2_visual_pane_t2

0x959c,	// (0x0003715d) area_fmrd2_visual_pane_t3

0x0002,

0xfecf,	// (0x0003da90) area_fmrd2_visual_pane_t

0x95ac,	// (0x0003716d) area_fmrd2_info_pane_g1

0x95b4,	// (0x00037175) area_fmrd2_info_pane_t1

0x95c4,	// (0x00037185) area_fmrd2_info_pane_t2

0x95d4,	// (0x00037195) area_fmrd2_info_pane_t3

0x95e4,	// (0x000371a5) area_fmrd2_info_pane_t4

0x0003,

0xfed6,	// (0x0003da97) area_fmrd2_info_pane_t

0x95f2,	// (0x000371b3) fmrd2_indi_pane_t1

0x9602,	// (0x000371c3) fmrd2_indi_pane_t2

0x9612,	// (0x000371d3) fmrd2_indi_pane_t3

0x0002,

0xfedf,	// (0x0003daa0) fmrd2_indi_pane_t

0xe0c8,	// (0x0003bc89) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe0c8,	// (0x0003bc89) list_single_fs_bigclock_indicator_pane_g5

0xe181,	// (0x0003bd42) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe181,	// (0x0003bd42) list_single_fs_bigclock_indicator_pane_t5

0x8d91,	// (0x00036952) aid_cell_bcale_month_pane_ParamLimits

0x8d91,	// (0x00036952) aid_cell_bcale_month_pane

0x8daf,	// (0x00036970) bcale_month_pane_ParamLimits

0x8daf,	// (0x00036970) bcale_month_pane

0x8dd3,	// (0x00036994) bcale_preview_pane_ParamLimits

0x8dd3,	// (0x00036994) bcale_preview_pane

0xec53,	// (0x0003c814) list_single_fs_bigclock_pane_t1_ParamLimits

0xec72,	// (0x0003c833) list_single_fs_bigclock_pane_t2_ParamLimits

0xec72,	// (0x0003c833) list_single_fs_bigclock_pane_t2

0x0001,

0xfe6b,	// (0x0003da2c) list_single_fs_bigclock_pane_t_ParamLimits

0xfe6b,	// (0x0003da2c) list_single_fs_bigclock_pane_t

0xeed0,	// (0x0003ca91) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0x016f,	// (0x0002dd30) main_fs_bigclock_unlock_btn_pane_g

0x9622,	// (0x000371e3) aid_dia3_key_size_ParamLimits

0x9622,	// (0x000371e3) aid_dia3_key_size

0x9631,	// (0x000371f2) aid_dia3_listrow_size_ParamLimits

0x9631,	// (0x000371f2) aid_dia3_listrow_size

0x9646,	// (0x00037207) dia3_keypad_fun_pane_ParamLimits

0x9646,	// (0x00037207) dia3_keypad_fun_pane

0x9662,	// (0x00037223) dia3_keypad_num_pane_ParamLimits

0x9662,	// (0x00037223) dia3_keypad_num_pane

0x967d,	// (0x0003723e) dia3_listscroll_pane_ParamLimits

0x967d,	// (0x0003723e) dia3_listscroll_pane

0x9690,	// (0x00037251) dia3_numentry_pane_ParamLimits

0x9690,	// (0x00037251) dia3_numentry_pane

0xeee6,	// (0x0003caa7) dia3_list_pane

0xeef1,	// (0x0003cab2) scroll_pane_cp12

0x9bce,	// (0x0003778f) bg_dia3_numentry_pane

0x96a4,	// (0x00037265) dia3_numentry_pane_t1

0x96b3,	// (0x00037274) cell_dia3_key_num_pane

0x96bb,	// (0x0003727c) cell_dia3_key0_fun_pane_ParamLimits

0x96bb,	// (0x0003727c) cell_dia3_key0_fun_pane

0x96cf,	// (0x00037290) cell_dia3_key1_fun_pane_ParamLimits

0x96cf,	// (0x00037290) cell_dia3_key1_fun_pane

0x96e7,	// (0x000372a8) dia3_listrow_pane

0xddd7,	// (0x0003b998) bg_dia3_numentry_pane_g1

0x9bce,	// (0x0003778f) bg_button_pane_cp21

0xeefc,	// (0x0003cabd) cell_dia3_key_num_pane_t1

0xef0a,	// (0x0003cacb) cell_dia3_key_num_pane_t2

0xef19,	// (0x0003cada) cell_dia3_key_num_pane_t3

0xef28,	// (0x0003cae9) cell_dia3_key_num_pane_t4

0x0003,

0xfee6,	// (0x0003daa7) cell_dia3_key_num_pane_t

0x9bce,	// (0x0003778f) bg_button_pane_cp19

0x96f9,	// (0x000372ba) cell_dia3_key0_fun_pane_g1

0x9bce,	// (0x0003778f) bg_button_pane_cp20

0x9701,	// (0x000372c2) cell_dia3_key1_fun_pane_g1

0x9709,	// (0x000372ca) area_left_week_number_pane

0x9715,	// (0x000372d6) area_top_day_name_pane

0x9728,	// (0x000372e9) frame_month_view_pane

0xef37,	// (0x0003caf8) grid_month_view_pane

0x973b,	// (0x000372fc) cell_top_day_name_pane_ParamLimits

0x973b,	// (0x000372fc) cell_top_day_name_pane

0x9768,	// (0x00037329) cell_area_left_week_number_pane_ParamLimits

0x9768,	// (0x00037329) cell_area_left_week_number_pane

0x977c,	// (0x0003733d) cell_month_view_pane_ParamLimits

0x977c,	// (0x0003733d) cell_month_view_pane

0xef45,	// (0x0003cb06) frm_month_g1

0x97a9,	// (0x0003736a) frm_month_g2

0x97bc,	// (0x0003737d) frm_month_g3

0x97cf,	// (0x00037390) frm_month_g4

0x97e2,	// (0x000373a3) frm_month_g5

0x97f5,	// (0x000373b6) frm_month_g6

0x9808,	// (0x000373c9) frm_month_g7

0xef52,	// (0x0003cb13) frm_month_g8

0x981b,	// (0x000373dc) frm_month_g9

0x982b,	// (0x000373ec) frm_month_g10

0x983b,	// (0x000373fc) frm_month_g11

0x984b,	// (0x0003740c) frm_month_g12

0x985d,	// (0x0003741e) frm_month_g13

0x986f,	// (0x00037430) frm_month_g14

0x9883,	// (0x00037444) frm_month_g15

0x9897,	// (0x00037458) frm_month_g16

0x000f,

0xfeef,	// (0x0003dab0) frm_month_g

0xef5f,	// (0x0003cb20) cell_top_day_name_pane_t1

0x98ab,	// (0x0003746c) cell_area_left_week_number_pane_g1

0x98b7,	// (0x00037478) cell_area_left_week_number_pane_t1

0xc98a,	// (0x0003a54b) cell_month_view_pane_g1

0x98ca,	// (0x0003748b) cell_month_view_pane_t1

0x9bce,	// (0x0003778f) main_fps_pane

0xe3b3,	// (0x0003bf74) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe3b3,	// (0x0003bf74) cmail_ddmenu_btn02_pane_cp1

0xe3cf,	// (0x0003bf90) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe3cf,	// (0x0003bf90) cmail_ddmenu_btn02_pane_cp2

0x8ffe,	// (0x00036bbf) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8ffe,	// (0x00036bbf) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe28,	// (0x0003d9e9) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe28,	// (0x0003d9e9) cmail_ddmenu_btn02_pane_g

0x901c,	// (0x00036bdd) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x901c,	// (0x00036bdd) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe2d,	// (0x0003d9ee) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe2d,	// (0x0003d9ee) cmail_ddmenu_btn02_pane_t

0x98dd,	// (0x0003749e) fps_text_pane_ParamLimits

0x98dd,	// (0x0003749e) fps_text_pane

0x98f4,	// (0x000374b5) main_fps_pane_g1_ParamLimits

0x98f4,	// (0x000374b5) main_fps_pane_g1

0x990e,	// (0x000374cf) wait_bar_pane_cp010_ParamLimits

0x990e,	// (0x000374cf) wait_bar_pane_cp010

0x991f,	// (0x000374e0) fps_text_pane_t1_ParamLimits

0x991f,	// (0x000374e0) fps_text_pane_t1

0xe0e2,	// (0x0003bca3) cam4_image_uncrop_pane_g1

0xe0eb,	// (0x0003bcac) cam4_image_uncrop_pane_g2

0x67e4,	// (0x000343a5) cam4_image_uncrop_pane_g3

0x67ed,	// (0x000343ae) cam4_image_uncrop_pane_g4

0x0003,

0xf8f4,	// (0x0003d4b5) cam4_image_uncrop_pane_g

0x96e7,	// (0x000372a8) dia3_listrow_pane_ParamLimits

0x9bce,	// (0x0003778f) main_phob2_pane

0x8b6e,	// (0x0003672f) cell_tport_appsw_pane_cp02_ParamLimits

0x8b6e,	// (0x0003672f) cell_tport_appsw_pane_cp02

0x8b82,	// (0x00036743) cell_tport_appsw_pane_cp03_ParamLimits

0x8b82,	// (0x00036743) cell_tport_appsw_pane_cp03

0x9bce,	// (0x0003778f) phob2_contact_card_pane

0x9bce,	// (0x0003778f) phob2_listscroll_pane

0xef72,	// (0x0003cb33) phob2_list_pane

0xef7a,	// (0x0003cb3b) scroll_pane_cp034

0x9937,	// (0x000374f8) phob2_cc_data_pane_ParamLimits

0x9937,	// (0x000374f8) phob2_cc_data_pane

0x9956,	// (0x00037517) phob2_cc_listscroll_pane_ParamLimits

0x9956,	// (0x00037517) phob2_cc_listscroll_pane

0x9974,	// (0x00037535) list_double_large_graphic_phob2_pane_ParamLimits

0x9974,	// (0x00037535) list_double_large_graphic_phob2_pane

0x9987,	// (0x00037548) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9987,	// (0x00037548) list_double_large_graphic_phob2_pane_g1

0x999d,	// (0x0003755e) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x999d,	// (0x0003755e) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff10,	// (0x0003dad1) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff10,	// (0x0003dad1) list_double_large_graphic_phob2_pane_g

0x99a9,	// (0x0003756a) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x99a9,	// (0x0003756a) list_double_large_graphic_phob2_pane_t1

0x99bf,	// (0x00037580) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x99bf,	// (0x00037580) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff15,	// (0x0003dad6) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff15,	// (0x0003dad6) list_double_large_graphic_phob2_pane_t

0x9bce,	// (0x0003778f) list_highlight_pane_cp024

0xef82,	// (0x0003cb43) phob2_cc_button_pane

0x99d4,	// (0x00037595) phob2_cc_data_pane_g1_ParamLimits

0x99d4,	// (0x00037595) phob2_cc_data_pane_g1

0x99e9,	// (0x000375aa) phob2_cc_data_pane_g2_ParamLimits

0x99e9,	// (0x000375aa) phob2_cc_data_pane_g2

0x0001,

0xff1a,	// (0x0003dadb) phob2_cc_data_pane_g_ParamLimits

0xff1a,	// (0x0003dadb) phob2_cc_data_pane_g

0x99fb,	// (0x000375bc) phob2_cc_data_pane_t1_ParamLimits

0x99fb,	// (0x000375bc) phob2_cc_data_pane_t1

0x9a13,	// (0x000375d4) phob2_cc_data_pane_t2_ParamLimits

0x9a13,	// (0x000375d4) phob2_cc_data_pane_t2

0x9a2b,	// (0x000375ec) phob2_cc_data_pane_t3_ParamLimits

0x9a2b,	// (0x000375ec) phob2_cc_data_pane_t3

0x0002,

0xff1f,	// (0x0003dae0) phob2_cc_data_pane_t_ParamLimits

0xff1f,	// (0x0003dae0) phob2_cc_data_pane_t

0xef8a,	// (0x0003cb4b) phob2_cc_list_pane_ParamLimits

0xef8a,	// (0x0003cb4b) phob2_cc_list_pane

0xd56d,	// (0x0003b12e) scroll_pane_cp035_ParamLimits

0xd56d,	// (0x0003b12e) scroll_pane_cp035

0xa66e,	// (0x0003822f) bg_button_pane_cp033

0xef96,	// (0x0003cb57) phob2_cc_button_pane_g1

0xefa2,	// (0x0003cb63) phob2_cc_button_pane_t1

0xefb7,	// (0x0003cb78) phob2_cc_button_pane_t2

0x0001,

0xff26,	// (0x0003dae7) phob2_cc_button_pane_t

0x9a43,	// (0x00037604) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9a43,	// (0x00037604) list_double_large_graphic_phob2_cc_pane

0x9a56,	// (0x00037617) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9a56,	// (0x00037617) list_double_large_graphic_phob2_cc_pane_g1

0x9a62,	// (0x00037623) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9a62,	// (0x00037623) list_double_large_graphic_phob2_cc_pane_g2

0x9a6e,	// (0x0003762f) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9a6e,	// (0x0003762f) list_double_large_graphic_phob2_cc_pane_g3

0x9a7a,	// (0x0003763b) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9a7a,	// (0x0003763b) list_double_large_graphic_phob2_cc_pane_g4

0x9a86,	// (0x00037647) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9a86,	// (0x00037647) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff2b,	// (0x0003daec) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff2b,	// (0x0003daec) list_double_large_graphic_phob2_cc_pane_g

0x9a92,	// (0x00037653) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9a92,	// (0x00037653) list_double_large_graphic_phob2_cc_pane_t1

0x9abb,	// (0x0003767c) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9abb,	// (0x0003767c) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff36,	// (0x0003daf7) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff36,	// (0x0003daf7) list_double_large_graphic_phob2_cc_pane_t

0xefc9,	// (0x0003cb8a) list_highlight_pane_cp025_ParamLimits

0xefc9,	// (0x0003cb8a) list_highlight_pane_cp025

0xa66e,	// (0x0003822f) bg_button_pane_cp033_ParamLimits

0xef96,	// (0x0003cb57) phob2_cc_button_pane_g1_ParamLimits

0xefa2,	// (0x0003cb63) phob2_cc_button_pane_t1_ParamLimits

0xefb7,	// (0x0003cb78) phob2_cc_button_pane_t2_ParamLimits

0xff26,	// (0x0003dae7) phob2_cc_button_pane_t_ParamLimits

0x1a11,	// (0x0002f5d2) popup_wgtman_window

0xd35a,	// (0x0003af1b) scroll_pane_cp038

0x9433,	// (0x00036ff4) wgtman_btn_pane_cp_01_ParamLimits

0x9433,	// (0x00036ff4) wgtman_btn_pane_cp_01

0xefd7,	// (0x0003cb98) wgtman_content_pane

0xefe0,	// (0x0003cba1) wgtman_heading_pane

0x9bce,	// (0x0003778f) bg_heading_pane_cp02

0xefe9,	// (0x0003cbaa) wgtman_heading_pane_g1

0xeff1,	// (0x0003cbb2) wgtman_heading_pane_t1

0xefff,	// (0x0003cbc0) scroll_pane_cp036

0xf007,	// (0x0003cbc8) wgtman_list_pane

0xf00f,	// (0x0003cbd0) wgtman_list_pane_t1_ParamLimits

0xf00f,	// (0x0003cbd0) wgtman_list_pane_t1

0x67d0,	// (0x00034391) cam4_grid_pane

0x7121,	// (0x00034ce2) bg_button_pane_cp015_ParamLimits

0x7135,	// (0x00034cf6) bg_button_pane_cp016_ParamLimits

0x7148,	// (0x00034d09) bg_button_pane_cp017_ParamLimits

0x71a0,	// (0x00034d61) popup_vitu2_query_window_g3_ParamLimits

0x71a0,	// (0x00034d61) popup_vitu2_query_window_g3

0x725d,	// (0x00034e1e) popup_vitu2_query_window_t6_ParamLimits

0x725d,	// (0x00034e1e) popup_vitu2_query_window_t6

0x7288,	// (0x00034e49) popup_vitu2_query_window_t7_ParamLimits

0x7288,	// (0x00034e49) popup_vitu2_query_window_t7

0xe0e2,	// (0x0003bca3) cam4_grid_pane_g1

0xe0eb,	// (0x0003bcac) cam4_grid_pane_g2

0xf02b,	// (0x0003cbec) cam4_grid_pane_g3

0xf034,	// (0x0003cbf5) cam4_grid_pane_g4

0x0003,

0xff3b,	// (0x0003dafc) cam4_grid_pane_g

0x281c,	// (0x000303dd) aid_placing_vt_slider_lsc_ParamLimits

0x2b19,	// (0x000306da) vidtel_button_pane_ParamLimits

0x2b19,	// (0x000306da) vidtel_button_pane

0xf03f,	// (0x0003cc00) bg_button_pane_cp034

0x9ae4,	// (0x000376a5) vidtel_button_pane_g1

0xf049,	// (0x0003cc0a) vidtel_button_pane_t1

0xd45c,	// (0x0003b01d) aid_size_vtel_slider_touch

0xd56d,	// (0x0003b12e) scroll_pane_cp039

0xde15,	// (0x0003b9d6) ncim_query_button_pane_cp01_ParamLimits

0xde34,	// (0x0003b9f5) ncimui_query_pane_g1_ParamLimits

0xa66e,	// (0x0003822f) input_focus_pane_cp012_ParamLimits

0xde59,	// (0x0003ba1a) ncim_query_entry_pane_t1_ParamLimits

0xd56d,	// (0x0003b12e) scroll_pane_cp039_ParamLimits

0x3d7a,	// (0x0003193b) navi_pane_bcale_mc_g1

0x3d82,	// (0x00031943) navi_pane_bcale_mc_t1

0xe418,	// (0x0003bfd9) main_sp_fs_email_pane_g1

0xe424,	// (0x0003bfe5) main_sp_fs_email_pane_g2

0x0001,

0xfceb,	// (0x0003d8ac) main_sp_fs_email_pane_g

0xe862,	// (0x0003c423) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe862,	// (0x0003c423) list_single_cale_mrui_row_pane_g3

0x9044,	// (0x00036c05) list_single_recal_day_pane_g5_event_pane

0xeada,	// (0x0003c69b) list_single_recal_day_pane_g7

0xf057,	// (0x0003cc18) list_recal_day_event_pane_cp01

0xf060,	// (0x0003cc21) list_recal_vselct_arw_lo_pane_cp01

0xf068,	// (0x0003cc29) list_recal_vselct_arw_up_pane_cp01

0xf070,	// (0x0003cc31) list_recal_vselct_pane_cp01

0xd47e,	// (0x0003b03f) list_recal_day_event_pane_cp01_g1

0xf07a,	// (0x0003cc3b) list_recal_day_event_pane_cp01_t1

0xeae2,	// (0x0003c6a3) list_single_recal_day_pane_t1_ParamLimits

0xeaf4,	// (0x0003c6b5) list_single_recal_day_pane_t2_ParamLimits

0xfe3d,	// (0x0003d9fe) list_single_recal_day_pane_t_ParamLimits

0xa246,	// (0x00037e07) bg_notes_pane_ParamLimits

0xa308,	// (0x00037ec9) list_notes_pane_ParamLimits

0x1c6e,	// (0x0002f82f) scroll_pane_cp06_ParamLimits

0xa32a,	// (0x00037eeb) main_notes_pane_ParamLimits

0x9bce,	// (0x0003778f) main_welc_pane

0x9aec,	// (0x000376ad) main_welc_body_pane_ParamLimits

0x9aec,	// (0x000376ad) main_welc_body_pane

0x9b09,	// (0x000376ca) main_welc_opti_pane_ParamLimits

0x9b09,	// (0x000376ca) main_welc_opti_pane

0x9b52,	// (0x00037713) main_welc_pane_t1_ParamLimits

0x9b52,	// (0x00037713) main_welc_pane_t1

0x9b74,	// (0x00037735) main_welc_body_row_pane_ParamLimits

0x9b74,	// (0x00037735) main_welc_body_row_pane

0xd54d,	// (0x0003b10e) main_welc_opti_row_pane_ParamLimits

0xd54d,	// (0x0003b10e) main_welc_opti_row_pane

0xf088,	// (0x0003cc49) main_welc_opti_row_pane_g1

0xf090,	// (0x0003cc51) main_welc_opti_row_pane_t1

0xf0a0,	// (0x0003cc61) main_welc_body_row_pane_t1

0xed59,	// (0x0003c91a) popup_notif_wgt_heading_pane

0xed73,	// (0x0003c934) aid_size_list_notif_wgt_del_ParamLimits

0xed80,	// (0x0003c941) list_notif_wgt_row_pane_g1_ParamLimits

0xed8c,	// (0x0003c94d) list_notif_wgt_row_pane_g2_ParamLimits

0xed98,	// (0x0003c959) list_notif_wgt_row_pane_g3_ParamLimits

0xfe95,	// (0x0003da56) list_notif_wgt_row_pane_g_ParamLimits

0xeda5,	// (0x0003c966) list_notif_wgt_row_pane_t1_ParamLimits

0xedba,	// (0x0003c97b) list_notif_wgt_row_pane_t2_ParamLimits

0xedcc,	// (0x0003c98d) list_notif_wgt_row_pane_t3_ParamLimits

0xfe9c,	// (0x0003da5d) list_notif_wgt_row_pane_t_ParamLimits

0x94cd,	// (0x0003708e) listrow_wgtman_pane_g1_ParamLimits

0x94da,	// (0x0003709b) listrow_wgtman_pane_g2_ParamLimits

0xfec5,	// (0x0003da86) listrow_wgtman_pane_g_ParamLimits

0x94f8,	// (0x000370b9) listrow_wgtman_pane_t1_ParamLimits

0x9510,	// (0x000370d1) listrow_wgtman_pane_t2_ParamLimits

0xfeca,	// (0x0003da8b) listrow_wgtman_pane_t_ParamLimits

0x9536,	// (0x000370f7) wait_bar_pane_cp09_ParamLimits

0x9bce,	// (0x0003778f) bg_popup_heading_pane_cp02

0xf0af,	// (0x0003cc70) popup_notif_wgt_heading_pane_g1

0xf0b7,	// (0x0003cc78) popup_notif_wgt_heading_pane_t1

0x9bce,	// (0x0003778f) main_vids_pane

0x9bce,	// (0x0003778f) vids_listscroll_pane

0x9b8a,	// (0x0003774b) scroll_pane_cp040

0x9bce,	// (0x0003778f) vids_list_pane

0x9b95,	// (0x00037756) vids_list_double_pane_ParamLimits

0x9b95,	// (0x00037756) vids_list_double_pane

0x9ba6,	// (0x00037767) vids_list_double_pane_g1

0x9baf,	// (0x00037770) vids_list_double_pane_t1

0x9bbe,	// (0x0003777f) vids_list_double_pane_t2

0x0001,

0xff49,	// (0x0003db0a) vids_list_double_pane_t

0x1a03,	// (0x0002f5c4) main_ncimui_pane_ParamLimits

0x7e3c,	// (0x000359fd) main_ncimui_pane_g1_ParamLimits

0x7e48,	// (0x00035a09) main_ncimui_pane_g2_ParamLimits

0x7e48,	// (0x00035a09) main_ncimui_pane_g2

0x0001,

0xfbf0,	// (0x0003d7b1) main_ncimui_pane_g_ParamLimits

0xfbf0,	// (0x0003d7b1) main_ncimui_pane_g

0x9b28,	// (0x000376e9) main_welc_pane_g1_ParamLimits

0x9b28,	// (0x000376e9) main_welc_pane_g1

0x9b3d,	// (0x000376fe) main_welc_pane_g2_ParamLimits

0x9b3d,	// (0x000376fe) main_welc_pane_g2

0x0001,

0xff44,	// (0x0003db05) main_welc_pane_g_ParamLimits

0xff44,	// (0x0003db05) main_welc_pane_g

0xa246,	// (0x00037e07) listscroll_mce_pane_ParamLimits

0x3e58,	// (0x00031a19) wait_bar_pane_cp10

0xc314,	// (0x00039ed5) main_cale_day_pane_ParamLimits

0xc314,	// (0x00039ed5) main_cale_week_pane_ParamLimits

0xa246,	// (0x00037e07) main_messa_pane_ParamLimits

0x5d60,	// (0x00033921) main_clock2_btn_pane_ParamLimits

0x5d60,	// (0x00033921) main_clock2_btn_pane

0xcb92,	// (0x0003a753) main_clock2_btn_pane_cp01_ParamLimits

0xcb92,	// (0x0003a753) main_clock2_btn_pane_cp01

0xe7ee,	// (0x0003c3af) list_cale_mrui_pane_ParamLimits

0xee10,	// (0x0003c9d1) main_cf0_pane_g2

0x0001,

0xfea3,	// (0x0003da64) main_cf0_pane_g

0x9709,	// (0x000372ca) area_left_week_number_pane_ParamLimits

0x9715,	// (0x000372d6) area_top_day_name_pane_ParamLimits

0x9728,	// (0x000372e9) frame_month_view_pane_ParamLimits

0xef37,	// (0x0003caf8) grid_month_view_pane_ParamLimits

0xef45,	// (0x0003cb06) frm_month_g1_ParamLimits

0x97a9,	// (0x0003736a) frm_month_g2_ParamLimits

0x97bc,	// (0x0003737d) frm_month_g3_ParamLimits

0x97cf,	// (0x00037390) frm_month_g4_ParamLimits

0x97e2,	// (0x000373a3) frm_month_g5_ParamLimits

0x97f5,	// (0x000373b6) frm_month_g6_ParamLimits

0x9808,	// (0x000373c9) frm_month_g7_ParamLimits

0xef52,	// (0x0003cb13) frm_month_g8_ParamLimits

0x981b,	// (0x000373dc) frm_month_g9_ParamLimits

0x982b,	// (0x000373ec) frm_month_g10_ParamLimits

0x983b,	// (0x000373fc) frm_month_g11_ParamLimits

0x984b,	// (0x0003740c) frm_month_g12_ParamLimits

0x985d,	// (0x0003741e) frm_month_g13_ParamLimits

0x986f,	// (0x00037430) frm_month_g14_ParamLimits

0x9883,	// (0x00037444) frm_month_g15_ParamLimits

0x9897,	// (0x00037458) frm_month_g16_ParamLimits

0xfeef,	// (0x0003dab0) frm_month_g_ParamLimits

0xef5f,	// (0x0003cb20) cell_top_day_name_pane_t1_ParamLimits

0x98ab,	// (0x0003746c) cell_area_left_week_number_pane_g1_ParamLimits

0x98b7,	// (0x00037478) cell_area_left_week_number_pane_t1_ParamLimits

0xc98a,	// (0x0003a54b) cell_month_view_pane_g1_ParamLimits

0x98ca,	// (0x0003748b) cell_month_view_pane_t1_ParamLimits

0xa23e,	// (0x00037dff) main_clock2_btn_pane_g1

0xf0c5,	// (0x0003cc86) main_clock2_btn_pane_t1

0xa66e,	// (0x0003822f) listscroll_cmail_pane_ParamLimits

0xe418,	// (0x0003bfd9) main_sp_fs_email_pane_g1_ParamLimits

0xe424,	// (0x0003bfe5) main_sp_fs_email_pane_g2_ParamLimits

0xfceb,	// (0x0003d8ac) main_sp_fs_email_pane_g_ParamLimits

0xea42,	// (0x0003c603) list_recal_day_pane_ParamLimits

0xea53,	// (0x0003c614) mian_recal_day_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Normal
