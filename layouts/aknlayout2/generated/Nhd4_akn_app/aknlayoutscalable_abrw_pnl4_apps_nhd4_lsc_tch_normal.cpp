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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0002ddd9 };

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
0x1bd1,	// (0x0002f9aa) Screen

0x1bdd,	// (0x0002f9b6) application_window

0x1c0d,	// (0x0002f9e6) area_bottom_pane_ParamLimits

0x1c0d,	// (0x0002f9e6) area_bottom_pane

0x0342,	// (0x0002e11b) area_top_pane_ParamLimits

0x0342,	// (0x0002e11b) area_top_pane

0x1c6a,	// (0x0002fa43) call_video_uplink_pane_ParamLimits

0x1c6a,	// (0x0002fa43) call_video_uplink_pane

0x03d0,	// (0x0002e1a9) main_pane_ParamLimits

0x03d0,	// (0x0002e1a9) main_pane

0xc44d,	// (0x0003a226) context_pane

0x4b42,	// (0x0003291b) navi_pane

0x4b74,	// (0x0003294d) popup_cale_events_window_ParamLimits

0x4b74,	// (0x0003294d) popup_cale_events_window

0xc460,	// (0x0003a239) popup_mup_playback_window

0x4b8c,	// (0x00032965) signal_pane

0xa3b1,	// (0x0003818a) main_browser_pane

0xa5ab,	// (0x00038384) main_burst_pane

0x07cd,	// (0x0002e5a6) main_calc_pane

0xc433,	// (0x0003a20c) main_cale_day_pane

0x07e1,	// (0x0002e5ba) main_cale_month_pane

0xc433,	// (0x0003a20c) main_cale_week_pane

0xa5ab,	// (0x00038384) main_call_pane

0xa085,	// (0x00037e5e) main_call_poc_pane

0xa5ab,	// (0x00038384) main_camera_pane

0xa5ab,	// (0x00038384) main_chi_dic_pane

0xad9c,	// (0x00038b75) main_clock_pane

0xa085,	// (0x00037e5e) main_fmradio_pane

0xa5ab,	// (0x00038384) main_graph_messa_pane

0xa085,	// (0x00037e5e) main_help_pane

0xa3b1,	// (0x0003818a) main_im_pane

0xa2e0,	// (0x000380b9) main_image_pane_ParamLimits

0xa2e0,	// (0x000380b9) main_image_pane

0xa085,	// (0x00037e5e) main_location2_pane

0xa5ab,	// (0x00038384) main_location_pane

0xa2e0,	// (0x000380b9) main_messa_pane

0xa085,	// (0x00037e5e) main_mp2_pane

0xa5ab,	// (0x00038384) main_mp_pane

0xa085,	// (0x00037e5e) main_msg_pane

0xa085,	// (0x00037e5e) main_mup_eq_pane

0xa085,	// (0x00037e5e) main_mup_pane

0xa3b1,	// (0x0003818a) main_notes_pane

0xa085,	// (0x00037e5e) main_pec_pane

0xa085,	// (0x00037e5e) main_phob_pane

0xa085,	// (0x00037e5e) main_pinb_pane

0xa085,	// (0x00037e5e) main_postcard_pane

0xa085,	// (0x00037e5e) main_qdial_pane

0xa5ab,	// (0x00038384) main_skin_pane

0xa085,	// (0x00037e5e) main_smil2_pane

0xa5ab,	// (0x00038384) main_smil_pane

0xa5ab,	// (0x00038384) main_video_pane

0xa5ab,	// (0x00038384) main_video_tele_pane

0xa2e0,	// (0x000380b9) main_viewer_pane_ParamLimits

0xa2e0,	// (0x000380b9) main_viewer_pane

0xa5ab,	// (0x00038384) main_vorec_pane

0x0833,	// (0x0002e60c) popup_blid_sat_info_window_ParamLimits

0x0833,	// (0x0002e60c) popup_blid_sat_info_window

0x088b,	// (0x0002e664) popup_dyc_status_message_window_ParamLimits

0x088b,	// (0x0002e664) popup_dyc_status_message_window

0x08a3,	// (0x0002e67c) popup_grid_large_graphic_window_ParamLimits

0x08a3,	// (0x0002e67c) popup_grid_large_graphic_window

0x0953,	// (0x0002e72c) popup_loc_request_window_ParamLimits

0x0953,	// (0x0002e72c) popup_loc_request_window

0x0a4f,	// (0x0002e828) popup_wml_address_window_ParamLimits

0x0a4f,	// (0x0002e828) popup_wml_address_window

0x4932,	// (0x0003270b) call_muted_g1

0x45e6,	// (0x000323bf) popup_call_audio_conf_window_ParamLimits

0x45e6,	// (0x000323bf) popup_call_audio_conf_window

0x4946,	// (0x0003271f) popup_call_audio_first_window_ParamLimits

0x4946,	// (0x0003271f) popup_call_audio_first_window

0x49bc,	// (0x00032795) popup_call_audio_in_window_ParamLimits

0x49bc,	// (0x00032795) popup_call_audio_in_window

0x49f8,	// (0x000327d1) popup_call_audio_out_window_ParamLimits

0x49f8,	// (0x000327d1) popup_call_audio_out_window

0x4a32,	// (0x0003280b) popup_call_audio_second_window_ParamLimits

0x4a32,	// (0x0003280b) popup_call_audio_second_window

0x4a88,	// (0x00032861) popup_call_audio_wait_window_ParamLimits

0x4a88,	// (0x00032861) popup_call_audio_wait_window

0x4abd,	// (0x00032896) popup_number_entry_window_ParamLimits

0x4abd,	// (0x00032896) popup_number_entry_window

0x9c72,	// (0x00037a4b) bg_popup_call_pane_cp05_ParamLimits

0x9c72,	// (0x00037a4b) bg_popup_call_pane_cp05

0x9c92,	// (0x00037a6b) popup_number_entry_window_t1

0x9ca5,	// (0x00037a7e) popup_number_entry_window_t2

0x9cb7,	// (0x00037a90) popup_number_entry_window_t3

0x0003,

0xf0c6,	// (0x0003ce9f) popup_number_entry_window_t

0x9cc9,	// (0x00037aa2) text_title_cp2

0x9cdc,	// (0x00037ab5) bg_popup_call_pane_cp_ParamLimits

0x9cdc,	// (0x00037ab5) bg_popup_call_pane_cp

0x9cea,	// (0x00037ac3) call_thumbnail_pane

0x9cf2,	// (0x00037acb) popup_call_audio_in_window_g1_ParamLimits

0x9cf2,	// (0x00037acb) popup_call_audio_in_window_g1

0x9cfe,	// (0x00037ad7) popup_call_audio_in_window_g2_ParamLimits

0x9cfe,	// (0x00037ad7) popup_call_audio_in_window_g2

0x9d0a,	// (0x00037ae3) popup_call_audio_in_window_g3_ParamLimits

0x9d0a,	// (0x00037ae3) popup_call_audio_in_window_g3

0x0002,

0xf0cf,	// (0x0003cea8) popup_call_audio_in_window_g_ParamLimits

0xf0cf,	// (0x0003cea8) popup_call_audio_in_window_g

0x9d16,	// (0x00037aef) popup_call_audio_in_window_t1_ParamLimits

0x9d16,	// (0x00037aef) popup_call_audio_in_window_t1

0x9d32,	// (0x00037b0b) popup_call_audio_in_window_t2_ParamLimits

0x9d32,	// (0x00037b0b) popup_call_audio_in_window_t2

0x9d4e,	// (0x00037b27) popup_call_audio_in_window_t3_ParamLimits

0x9d4e,	// (0x00037b27) popup_call_audio_in_window_t3

0x0002,

0xf0d6,	// (0x0003ceaf) popup_call_audio_in_window_t_ParamLimits

0xf0d6,	// (0x0003ceaf) popup_call_audio_in_window_t

0x9cdc,	// (0x00037ab5) bg_popup_call_pane_cp01_ParamLimits

0x9cdc,	// (0x00037ab5) bg_popup_call_pane_cp01

0x9cea,	// (0x00037ac3) call_thumbnail_pane_cp02

0x9d61,	// (0x00037b3a) call_type_pane_cp022

0x9d69,	// (0x00037b42) popup_call_audio_out_window_g1_ParamLimits

0x9d69,	// (0x00037b42) popup_call_audio_out_window_g1

0x9d7b,	// (0x00037b54) popup_call_audio_out_window_g2_ParamLimits

0x9d7b,	// (0x00037b54) popup_call_audio_out_window_g2

0x9d87,	// (0x00037b60) popup_call_audio_out_window_g3_ParamLimits

0x9d87,	// (0x00037b60) popup_call_audio_out_window_g3

0x0002,

0xf0dd,	// (0x0003ceb6) popup_call_audio_out_window_g_ParamLimits

0xf0dd,	// (0x0003ceb6) popup_call_audio_out_window_g

0x9d99,	// (0x00037b72) popup_call_audio_out_window_t1_ParamLimits

0x9d99,	// (0x00037b72) popup_call_audio_out_window_t1

0x9db1,	// (0x00037b8a) popup_call_audio_out_window_t2_ParamLimits

0x9db1,	// (0x00037b8a) popup_call_audio_out_window_t2

0x0001,

0xf0e4,	// (0x0003cebd) popup_call_audio_out_window_t_ParamLimits

0xf0e4,	// (0x0003cebd) popup_call_audio_out_window_t

0x9dc6,	// (0x00037b9f) bg_popup_call_pane_ParamLimits

0x9dc6,	// (0x00037b9f) bg_popup_call_pane

0x1ce1,	// (0x0002faba) call_thumbnail_pane_cp_ParamLimits

0x1ce1,	// (0x0002faba) call_thumbnail_pane_cp

0x9e4a,	// (0x00037c23) call_type_pane_cp01_ParamLimits

0x9e4a,	// (0x00037c23) call_type_pane_cp01

0x9e8e,	// (0x00037c67) popup_call_audio_first_window_g1_ParamLimits

0x9e8e,	// (0x00037c67) popup_call_audio_first_window_g1

0x9eda,	// (0x00037cb3) popup_call_audio_first_window_g2_ParamLimits

0x9eda,	// (0x00037cb3) popup_call_audio_first_window_g2

0x0001,

0xf0e9,	// (0x0003cec2) popup_call_audio_first_window_g_ParamLimits

0xf0e9,	// (0x0003cec2) popup_call_audio_first_window_g

0x9f1e,	// (0x00037cf7) popup_call_audio_first_window_t1_ParamLimits

0x9f1e,	// (0x00037cf7) popup_call_audio_first_window_t1

0x9fca,	// (0x00037da3) popup_call_audio_first_window_t4_ParamLimits

0x9fca,	// (0x00037da3) popup_call_audio_first_window_t4

0xa056,	// (0x00037e2f) popup_call_audio_first_window_t5_ParamLimits

0xa056,	// (0x00037e2f) popup_call_audio_first_window_t5

0x0002,

0xf0ee,	// (0x0003cec7) popup_call_audio_first_window_t_ParamLimits

0xf0ee,	// (0x0003cec7) popup_call_audio_first_window_t

0xa085,	// (0x00037e5e) bg_popup_call_pane_cp02

0xa08f,	// (0x00037e68) call_type_pane_cp023

0xa097,	// (0x00037e70) popup_call_audio_wait_window_g1

0xa09f,	// (0x00037e78) popup_call_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0003cece) popup_call_audio_wait_window_g

0xa0a7,	// (0x00037e80) popup_call_audio_wait_window_t3

0xa0b5,	// (0x00037e8e) bg_popup_call_pane_cp03_ParamLimits

0xa0b5,	// (0x00037e8e) bg_popup_call_pane_cp03

0xa115,	// (0x00037eee) call_thumbnail_pane_cp011_ParamLimits

0xa115,	// (0x00037eee) call_thumbnail_pane_cp011

0xa121,	// (0x00037efa) call_type_pane_cp034_ParamLimits

0xa121,	// (0x00037efa) call_type_pane_cp034

0xa15d,	// (0x00037f36) popup_call_audio_second_window_g1_ParamLimits

0xa15d,	// (0x00037f36) popup_call_audio_second_window_g1

0xa199,	// (0x00037f72) popup_call_audio_second_window_g2_ParamLimits

0xa199,	// (0x00037f72) popup_call_audio_second_window_g2

0x0001,

0xf0fa,	// (0x0003ced3) popup_call_audio_second_window_g_ParamLimits

0xf0fa,	// (0x0003ced3) popup_call_audio_second_window_g

0xa1d5,	// (0x00037fae) popup_call_audio_second_window_t1_ParamLimits

0xa1d5,	// (0x00037fae) popup_call_audio_second_window_t1

0xa256,	// (0x0003802f) popup_call_audio_second_window_t2_ParamLimits

0xa256,	// (0x0003802f) popup_call_audio_second_window_t2

0xa28c,	// (0x00038065) popup_call_audio_second_window_t3_ParamLimits

0xa28c,	// (0x00038065) popup_call_audio_second_window_t3

0x0002,

0xf0ff,	// (0x0003ced8) popup_call_audio_second_window_t_ParamLimits

0xf0ff,	// (0x0003ced8) popup_call_audio_second_window_t

0xa085,	// (0x00037e5e) bg_popup_call_pane_cp04

0xa2c2,	// (0x0003809b) list_conf_pane

0xa2ca,	// (0x000380a3) popup_call_audio_conf_window_t1

0xa2d8,	// (0x000380b1) call_thumbnail_pane_g1

0xa2e0,	// (0x000380b9) bg_pinb_pane_ParamLimits

0xa2e0,	// (0x000380b9) bg_pinb_pane

0xa2ee,	// (0x000380c7) find_pinb_pane

0xa2f7,	// (0x000380d0) listscroll_pinb_pane_ParamLimits

0xa2f7,	// (0x000380d0) listscroll_pinb_pane

0xa306,	// (0x000380df) pinb_bg_pane_g1

0x1d05,	// (0x0002fade) pinb_bg_pane_g2

0x1d11,	// (0x0002faea) pinb_bg_pane_g3

0x1d1d,	// (0x0002faf6) pinb_bg_pane_g4

0x1d29,	// (0x0002fb02) pinb_bg_pane_g5

0x1d35,	// (0x0002fb0e) pinb_bg_pane_g6

0x1d40,	// (0x0002fb19) pinb_bg_pane_g7

0x1d4b,	// (0x0002fb24) pinb_bg_pane_g8

0x1d56,	// (0x0002fb2f) pinb_bg_pane_g9

0x1d60,	// (0x0002fb39) pinb_bg_pane_g10

0x0009,

0xf106,	// (0x0003cedf) pinb_bg_pane_g

0x1d7d,	// (0x0002fb56) grid_pinb_pane

0x1d86,	// (0x0002fb5f) list_pinb_pane

0x1d8f,	// (0x0002fb68) scroll_pane_cp01_ParamLimits

0x1d8f,	// (0x0002fb68) scroll_pane_cp01

0xa310,	// (0x000380e9) find_pinb_pane_g1_ParamLimits

0xa310,	// (0x000380e9) find_pinb_pane_g1

0xa328,	// (0x00038101) find_pinb_pane_t1

0xa33a,	// (0x00038113) find_pinb_pane_t2

0x0001,

0xf120,	// (0x0003cef9) find_pinb_pane_t

0xa34f,	// (0x00038128) input_focus_pane_cp01_ParamLimits

0xa34f,	// (0x00038128) input_focus_pane_cp01

0x1da1,	// (0x0002fb7a) cell_pinb_pane_ParamLimits

0x1da1,	// (0x0002fb7a) cell_pinb_pane

0x1dcc,	// (0x0002fba5) cell_pinb_pane_g1_ParamLimits

0x1dcc,	// (0x0002fba5) cell_pinb_pane_g1

0xa35b,	// (0x00038134) cell_pinb_pane_g2_ParamLimits

0xa35b,	// (0x00038134) cell_pinb_pane_g2

0xa367,	// (0x00038140) cell_pinb_pane_g3_ParamLimits

0xa367,	// (0x00038140) cell_pinb_pane_g3

0x0002,

0xf125,	// (0x0003cefe) cell_pinb_pane_g_ParamLimits

0xf125,	// (0x0003cefe) cell_pinb_pane_g

0xa085,	// (0x00037e5e) grid_highlight_pane_cp01

0x1ddf,	// (0x0002fbb8) list_pinb_item_pane_ParamLimits

0x1ddf,	// (0x0002fbb8) list_pinb_item_pane

0xa085,	// (0x00037e5e) list_highlight_pane_cp02

0x1df2,	// (0x0002fbcb) list_pinb_item_pane_g1_ParamLimits

0x1df2,	// (0x0002fbcb) list_pinb_item_pane_g1

0x1dff,	// (0x0002fbd8) list_pinb_item_pane_g2_ParamLimits

0x1dff,	// (0x0002fbd8) list_pinb_item_pane_g2

0x1e0b,	// (0x0002fbe4) list_pinb_item_pane_g3_ParamLimits

0x1e0b,	// (0x0002fbe4) list_pinb_item_pane_g3

0x1e1c,	// (0x0002fbf5) list_pinb_item_pane_g4_ParamLimits

0x1e1c,	// (0x0002fbf5) list_pinb_item_pane_g4

0x0003,

0xf12c,	// (0x0003cf05) list_pinb_item_pane_g_ParamLimits

0xf12c,	// (0x0003cf05) list_pinb_item_pane_g

0x1e28,	// (0x0002fc01) list_pinb_item_pane_t1_ParamLimits

0x1e28,	// (0x0002fc01) list_pinb_item_pane_t1

0x056a,	// (0x0002e343) calc_display_pane

0x058f,	// (0x0002e368) calc_paper_pane

0x05b2,	// (0x0002e38b) grid_calc_pane

0xa085,	// (0x00037e5e) bg_list_pane_cp01

0x1e47,	// (0x0002fc20) clock_g1

0x1e4f,	// (0x0002fc28) clock_g2

0x0001,

0xf135,	// (0x0003cf0e) clock_g

0x1e57,	// (0x0002fc30) clock_t1_ParamLimits

0x1e57,	// (0x0002fc30) clock_t1

0x1e6c,	// (0x0002fc45) clock_t2_ParamLimits

0x1e6c,	// (0x0002fc45) clock_t2

0x1e7e,	// (0x0002fc57) clock_t3_ParamLimits

0x1e7e,	// (0x0002fc57) clock_t3

0x1e90,	// (0x0002fc69) clock_t4_ParamLimits

0x1e90,	// (0x0002fc69) clock_t4

0x1ea2,	// (0x0002fc7b) clock_t5_ParamLimits

0x1ea2,	// (0x0002fc7b) clock_t5

0x1eb7,	// (0x0002fc90) clock_t6_ParamLimits

0x1eb7,	// (0x0002fc90) clock_t6

0x1ec9,	// (0x0002fca2) clock_t7_ParamLimits

0x1ec9,	// (0x0002fca2) clock_t7

0x1edb,	// (0x0002fcb4) clock_t8_ParamLimits

0x1edb,	// (0x0002fcb4) clock_t8

0x1eef,	// (0x0002fcc8) clock_t9_ParamLimits

0x1eef,	// (0x0002fcc8) clock_t9

0x0008,

0xf13a,	// (0x0003cf13) clock_t_ParamLimits

0xf13a,	// (0x0003cf13) clock_t

0xa373,	// (0x0003814c) popup_clock_analogue_window_cp02

0xa373,	// (0x0003814c) popup_clock_digital_window_cp01

0xa37b,	// (0x00038154) listscroll_help_pane

0xa085,	// (0x00037e5e) phob_pre_status_pane

0xa385,	// (0x0003815e) grid_qdial_pane

0xa2e0,	// (0x000380b9) listscroll_mce_pane

0xa2e0,	// (0x000380b9) bg_notes_pane

0xa38f,	// (0x00038168) list_notes_pane

0x1f03,	// (0x0002fcdc) scroll_pane_cp06

0xa39d,	// (0x00038176) bg_calc_paper_pane

0x1f17,	// (0x0002fcf0) list_calc_pane

0xa3b1,	// (0x0003818a) bg_calc_display_pane

0x05e0,	// (0x0002e3b9) calc_display_pane_t1

0x05f2,	// (0x0002e3cb) calc_display_pane_t2

0x1f31,	// (0x0002fd0a) calc_display_pane_t3

0x0002,

0xf14d,	// (0x0003cf26) calc_display_pane_t

0x0604,	// (0x0002e3dd) cell_calc_pane_ParamLimits

0x0604,	// (0x0002e3dd) cell_calc_pane

0xa3bd,	// (0x00038196) bg_calc_paper_pane_g1

0xa3c9,	// (0x000381a2) bg_calc_paper_pane_g2

0xa3d5,	// (0x000381ae) bg_calc_paper_pane_g3

0xa3e1,	// (0x000381ba) bg_calc_paper_pane_g4

0xa3ed,	// (0x000381c6) bg_calc_paper_pane_g5

0x1f43,	// (0x0002fd1c) bg_calc_paper_pane_g6

0x1f52,	// (0x0002fd2b) bg_calc_paper_pane_g7

0x1f61,	// (0x0002fd3a) bg_calc_paper_pane_g8

0x0007,

0xf154,	// (0x0003cf2d) bg_calc_paper_pane_g

0x1f74,	// (0x0002fd4d) calc_bg_paper_pane_g9

0x1f87,	// (0x0002fd60) list_calc_item_pane_ParamLimits

0x1f87,	// (0x0002fd60) list_calc_item_pane

0xa3f9,	// (0x000381d2) list_calc_item_pane_g1

0x1f9c,	// (0x0002fd75) list_calc_item_pane_t1_ParamLimits

0x1f9c,	// (0x0002fd75) list_calc_item_pane_t1

0x0639,	// (0x0002e412) list_calc_item_pane_t2_ParamLimits

0x0639,	// (0x0002e412) list_calc_item_pane_t2

0x0001,

0xf165,	// (0x0003cf3e) list_calc_item_pane_t_ParamLimits

0xf165,	// (0x0003cf3e) list_calc_item_pane_t

0xa406,	// (0x000381df) cell_calc_pane_g1

0xa410,	// (0x000381e9) grid_highlight_pane_cp02

0xcabf,	// (0x0003a898) bg_calc_display_pane_g1

0x066b,	// (0x0002e444) bg_calc_display_pane_g2

0xa432,	// (0x0003820b) bg_calc_display_pane_g3

0x0002,

0xf16f,	// (0x0003cf48) bg_calc_display_pane_g

0x0675,	// (0x0002e44e) cell_qdial_pane_ParamLimits

0x0675,	// (0x0002e44e) cell_qdial_pane

0x1fae,	// (0x0002fd87) cell_qdial_pane_g1_ParamLimits

0x1fae,	// (0x0002fd87) cell_qdial_pane_g1

0x1fc4,	// (0x0002fd9d) cell_qdial_pane_g2_ParamLimits

0x1fc4,	// (0x0002fd9d) cell_qdial_pane_g2

0xa43b,	// (0x00038214) cell_qdial_pane_g3_ParamLimits

0xa43b,	// (0x00038214) cell_qdial_pane_g3

0x0003,

0xf176,	// (0x0003cf4f) cell_qdial_pane_g_ParamLimits

0xf176,	// (0x0003cf4f) cell_qdial_pane_g

0x1fea,	// (0x0002fdc3) cell_qdial_pane_t1_ParamLimits

0x1fea,	// (0x0002fdc3) cell_qdial_pane_t1

0x2002,	// (0x0002fddb) cell_qdial_pane_t2_ParamLimits

0x2002,	// (0x0002fddb) cell_qdial_pane_t2

0x2015,	// (0x0002fdee) cell_qdial_pane_t3_ParamLimits

0x2015,	// (0x0002fdee) cell_qdial_pane_t3

0x0002,

0xf17f,	// (0x0003cf58) cell_qdial_pane_t_ParamLimits

0xf17f,	// (0x0003cf58) cell_qdial_pane_t

0xa085,	// (0x00037e5e) grid_highlight_pane_cp04

0xa447,	// (0x00038220) thumbnail_qdial_pane_ParamLimits

0xa447,	// (0x00038220) thumbnail_qdial_pane

0xa4a3,	// (0x0003827c) list_help_pane

0xa4ac,	// (0x00038285) scroll_pane_cp02

0xa4b5,	// (0x0003828e) help_list_pane_t1_ParamLimits

0xa4b5,	// (0x0003828e) help_list_pane_t1

0x2028,	// (0x0002fe01) bg_notes_pane_g2

0x2030,	// (0x0002fe09) bg_notes_pane_g3

0x2038,	// (0x0002fe11) notes_bg_pane_g1

0x2040,	// (0x0002fe19) notes_bg_pane_g4

0x2048,	// (0x0002fe21) notes_bg_pane_g5

0x2050,	// (0x0002fe29) notes_bg_pane_g6

0x2058,	// (0x0002fe31) notes_bg_pane_g7

0x2060,	// (0x0002fe39) notes_bg_pane_g8

0x2068,	// (0x0002fe41) notes_bg_pane_g9

0x0006,

0xf19d,	// (0x0003cf76) notes_bg_pane_g

0x2070,	// (0x0002fe49) list_notes_text_pane_ParamLimits

0x2070,	// (0x0002fe49) list_notes_text_pane

0xa4d3,	// (0x000382ac) list_notes_text_pane_g1

0xa4dc,	// (0x000382b5) list_notes_text_pane_t1

0x2086,	// (0x0002fe5f) listscroll_cale_week_pane

0x20b2,	// (0x0002fe8b) bg_cale_heading_pane

0xa504,	// (0x000382dd) bg_cale_pane_cp01

0x20ca,	// (0x0002fea3) cale_week_corner_pane

0x20e9,	// (0x0002fec2) cale_week_day_heading_pane

0x2106,	// (0x0002fedf) cale_week_scroll_pane_g1

0x2119,	// (0x0002fef2) cale_week_scroll_pane_g2

0x2131,	// (0x0002ff0a) cale_week_scroll_pane_g3

0x2149,	// (0x0002ff22) cale_week_scroll_pane_g4

0x2161,	// (0x0002ff3a) cale_week_scroll_pane_g5

0x2181,	// (0x0002ff5a) cale_week_scroll_pane_g6

0x21a1,	// (0x0002ff7a) cale_week_scroll_pane_g7

0x21c1,	// (0x0002ff9a) cale_week_scroll_pane_g8

0x21e5,	// (0x0002ffbe) cale_week_scroll_pane_g9

0x21fd,	// (0x0002ffd6) cale_week_scroll_pane_g10

0x2215,	// (0x0002ffee) cale_week_scroll_pane_g11

0x222d,	// (0x00030006) cale_week_scroll_pane_g12

0x2245,	// (0x0003001e) cale_week_scroll_pane_g13

0x2245,	// (0x0003001e) cale_week_scroll_pane_g14

0x2245,	// (0x0003001e) cale_week_scroll_pane_g15

0x000f,

0xf1ac,	// (0x0003cf85) cale_week_scroll_pane_g

0x2281,	// (0x0003005a) cale_week_time_pane

0x22a5,	// (0x0003007e) grid_cale_week_pane

0xa533,	// (0x0003830c) scroll_pane_cp08

0x22cb,	// (0x000300a4) cell_cale_week_pane_ParamLimits

0x22cb,	// (0x000300a4) cell_cale_week_pane

0x2359,	// (0x00030132) cale_week_day_heading_pane_t1

0x2383,	// (0x0003015c) cale_week_day_heading_pane_t2

0x23b2,	// (0x0003018b) cale_week_day_heading_pane_t3

0x23e1,	// (0x000301ba) cale_week_day_heading_pane_t4

0x2410,	// (0x000301e9) cale_week_day_heading_pane_t5

0x2447,	// (0x00030220) cale_week_day_heading_pane_t6

0x247e,	// (0x00030257) cale_week_day_heading_pane_t7

0x0006,

0xf1cd,	// (0x0003cfa6) cale_week_day_heading_pane_t

0xa550,	// (0x00038329) bg_cale_side_pane

0x0689,	// (0x0002e462) cale_week_time_pane_t1

0x06a3,	// (0x0002e47c) cale_week_time_pane_t2

0x06bd,	// (0x0002e496) cale_week_time_pane_t3

0x06d7,	// (0x0002e4b0) cale_week_time_pane_t4

0x06f1,	// (0x0002e4ca) cale_week_time_pane_t5

0x070b,	// (0x0002e4e4) cale_week_time_pane_t6

0x0725,	// (0x0002e4fe) cale_week_time_pane_t7

0x073f,	// (0x0002e518) cale_week_time_pane_t8

0x0007,

0xf1dc,	// (0x0003cfb5) cale_week_time_pane_t

0x24a8,	// (0x00030281) cell_cale_week_pane_g2

0x24cc,	// (0x000302a5) cell_cale_week_pane_g3_ParamLimits

0x24cc,	// (0x000302a5) cell_cale_week_pane_g3

0xa55e,	// (0x00038337) grid_highlight_pane_cp07

0xa566,	// (0x0003833f) listscroll_gms_pane

0xa570,	// (0x00038349) grid_gms_pane

0xa579,	// (0x00038352) listscroll_gms_pane_g1

0xa581,	// (0x0003835a) listscroll_gms_pane_g2

0x0001,

0xf1ed,	// (0x0003cfc6) listscroll_gms_pane_g

0x24e4,	// (0x000302bd) scroll_pane_cp010

0x24ef,	// (0x000302c8) cell_gms_pane_ParamLimits

0x24ef,	// (0x000302c8) cell_gms_pane

0x2501,	// (0x000302da) cell_gms_pane_g1

0xa589,	// (0x00038362) cell_gms_pane_g2

0xa591,	// (0x0003836a) cell_gms_pane_g3

0xa59a,	// (0x00038373) cell_gms_pane_g4

0x0003,

0xf1f2,	// (0x0003cfcb) cell_gms_pane_g

0xa5a3,	// (0x0003837c) grid_highlight_pane_cp09

0x48dc,	// (0x000326b5) phob_pre_status_pane_g1

0x48e4,	// (0x000326bd) phob_pre_status_pane_g2

0x48ec,	// (0x000326c5) phob_pre_status_pane_g3

0x48f4,	// (0x000326cd) phob_pre_status_pane_g4

0x0004,

0xf5f0,	// (0x0003d3c9) phob_pre_status_pane_g

0x4904,	// (0x000326dd) phob_pre_status_pane_t1

0x4912,	// (0x000326eb) phob_pre_status_pane_t2

0x4922,	// (0x000326fb) phob_pre_status_pane_t3

0x0002,

0xf5fb,	// (0x0003d3d4) phob_pre_status_pane_t

0xa5ab,	// (0x00038384) bg_list_pane_cp05

0x2511,	// (0x000302ea) grid_vorec_pane

0x2519,	// (0x000302f2) vorec_t1

0x2527,	// (0x00030300) vorec_t2

0x2535,	// (0x0003030e) vorec_t3

0x2543,	// (0x0003031c) vorec_t4

0x1bab,	// (0x0002f984) vorec_t5

0x1bb9,	// (0x0002f992) vorec_t6

0x0004,

0xf1fb,	// (0x0003cfd4) vorec_t

0x1bc7,	// (0x0002f9a0) wait_bar_pane_cp01

0x255f,	// (0x00030338) cell_vorec_pane_ParamLimits

0x255f,	// (0x00030338) cell_vorec_pane

0x2572,	// (0x0003034b) cell_vorec_pane_g1

0xa085,	// (0x00037e5e) grid_highlight_pane_cp05

0x2594,	// (0x0003036d) cams_zoom_pane

0x25a3,	// (0x0003037c) image_vga_pane

0x25bd,	// (0x00030396) main_camera_pane_g1

0x25cf,	// (0x000303a8) main_camera_pane_g2

0x25df,	// (0x000303b8) main_camera_pane_g3

0x25ef,	// (0x000303c8) main_camera_pane_g4

0x25ff,	// (0x000303d8) main_camera_pane_g5

0x260f,	// (0x000303e8) main_camera_pane_g6

0x261f,	// (0x000303f8) main_camera_pane_g7

0x0007,

0xf206,	// (0x0003cfdf) main_camera_pane_g

0x262f,	// (0x00030408) main_camera_pane_t1

0x2645,	// (0x0003041e) main_camera_pane_t2

0x0001,

0xf217,	// (0x0003cff0) main_camera_pane_t

0x267f,	// (0x00030458) cams_zoom_pane_cp_ParamLimits

0x267f,	// (0x00030458) cams_zoom_pane_cp

0x26a7,	// (0x00030480) image_cif_pane_ParamLimits

0x26a7,	// (0x00030480) image_cif_pane

0x26e2,	// (0x000304bb) image_subqcif_pane

0x26ea,	// (0x000304c3) main_video_pane_g1_ParamLimits

0x26ea,	// (0x000304c3) main_video_pane_g1

0x270e,	// (0x000304e7) main_video_pane_g2_ParamLimits

0x270e,	// (0x000304e7) main_video_pane_g2

0x2742,	// (0x0003051b) main_video_pane_g3_ParamLimits

0x2742,	// (0x0003051b) main_video_pane_g3

0x2770,	// (0x00030549) main_video_pane_g4_ParamLimits

0x2770,	// (0x00030549) main_video_pane_g4

0x279e,	// (0x00030577) main_video_pane_g5_ParamLimits

0x279e,	// (0x00030577) main_video_pane_g5

0xa5bf,	// (0x00038398) main_video_pane_g6_ParamLimits

0xa5bf,	// (0x00038398) main_video_pane_g6

0x0006,

0xf21c,	// (0x0003cff5) main_video_pane_g_ParamLimits

0xf21c,	// (0x0003cff5) main_video_pane_g

0x27c7,	// (0x000305a0) main_video_pane_t1_ParamLimits

0x27c7,	// (0x000305a0) main_video_pane_t1

0xa5d9,	// (0x000383b2) cams_zoom_pane_g1

0xa5e2,	// (0x000383bb) cams_zoom_pane_g2

0xa5eb,	// (0x000383c4) cams_zoom_pane_g3

0xa5f4,	// (0x000383cd) cams_zoom_pane_g4

0x0003,

0xf22b,	// (0x0003d004) cams_zoom_pane_g

0x2824,	// (0x000305fd) grid_cams_pane

0x283e,	// (0x00030617) linegrid_cams_pane

0x2851,	// (0x0003062a) cell_cams_pane_ParamLimits

0x2851,	// (0x0003062a) cell_cams_pane

0xa5fd,	// (0x000383d6) cams_burst_image_pane

0xa605,	// (0x000383de) cell_cams_pane_g1

0xa085,	// (0x00037e5e) grid_highlight_pane_cp03

0xa406,	// (0x000381df) mp_bg_pane_g1

0xa085,	// (0x00037e5e) bg_list_pane_cp03

0xc358,	// (0x0003a131) bg_mp_pane

0xc360,	// (0x0003a139) grid_mp_pane

0xc368,	// (0x0003a141) media_player_g1

0xc370,	// (0x0003a149) media_player_t1

0xc37e,	// (0x0003a157) media_player_t2

0xc38c,	// (0x0003a165) media_player_t3

0xc39a,	// (0x0003a173) media_player_t4

0xc3a8,	// (0x0003a181) media_player_t5

0xc3b6,	// (0x0003a18f) media_player_t6

0xc3c4,	// (0x0003a19d) media_player_t7

0x0006,

0xf5da,	// (0x0003d3b3) media_player_t

0xc3d2,	// (0x0003a1ab) wait_bar_pane_cp02

0xf5bf,	// (0x0003d398) main_usb_pane_t

0x48d3,	// (0x000326ac) cell_mp_pane

0xa406,	// (0x000381df) cell_mp_pane_g1

0xa085,	// (0x00037e5e) grid_highlight_pane_cp06

0xa60d,	// (0x000383e6) grid_skin_colour_pane

0xa615,	// (0x000383ee) list_highlight_pane_cp03

0x2988,	// (0x00030761) skin_g1

0xa61d,	// (0x000383f6) skin_t1

0xa62c,	// (0x00038405) skin_t2

0x0001,

0xf260,	// (0x0003d039) skin_t

0x2990,	// (0x00030769) cell_skin_colour_pane_ParamLimits

0x2990,	// (0x00030769) cell_skin_colour_pane

0xa63a,	// (0x00038413) cell_skin_colour_pane_g1

0x2a09,	// (0x000307e2) call_video_g1_ParamLimits

0x2a09,	// (0x000307e2) call_video_g1

0x2a25,	// (0x000307fe) call_video_g2_ParamLimits

0x2a25,	// (0x000307fe) call_video_g2

0x0001,

0xf265,	// (0x0003d03e) call_video_g_ParamLimits

0xf265,	// (0x0003d03e) call_video_g

0x2a77,	// (0x00030850) call_video_uplink_pane_cp1_ParamLimits

0x2a77,	// (0x00030850) call_video_uplink_pane_cp1

0xa64c,	// (0x00038425) call_video_uplink_pane_cp2

0x2b16,	// (0x000308ef) video_down_crop_pane_ParamLimits

0x2b16,	// (0x000308ef) video_down_crop_pane

0x2bff,	// (0x000309d8) video_down_pane_ParamLimits

0x2bff,	// (0x000309d8) video_down_pane

0xa654,	// (0x0003842d) video_down_subqcif_pane_ParamLimits

0xa654,	// (0x0003842d) video_down_subqcif_pane

0xa66c,	// (0x00038445) video_down_subqcif_pane_cp_ParamLimits

0xa66c,	// (0x00038445) video_down_subqcif_pane_cp

0xa692,	// (0x0003846b) im_reading_pane_ParamLimits

0xa692,	// (0x0003846b) im_reading_pane

0x2d0f,	// (0x00030ae8) im_writing_pane_ParamLimits

0x2d0f,	// (0x00030ae8) im_writing_pane

0x2d25,	// (0x00030afe) im_reading_pane_t1

0xa6ac,	// (0x00038485) list_im_pane

0xa6bd,	// (0x00038496) scroll_pane_cp07

0x2d5f,	// (0x00030b38) im_writing_pane_t1_ParamLimits

0x2d5f,	// (0x00030b38) im_writing_pane_t1

0xa6d6,	// (0x000384af) im_writing_pane_t2_ParamLimits

0xa6d6,	// (0x000384af) im_writing_pane_t2

0x0001,

0xf26f,	// (0x0003d048) im_writing_pane_t_ParamLimits

0xf26f,	// (0x0003d048) im_writing_pane_t

0xa085,	// (0x00037e5e) input_focus_pane_cp04

0xa085,	// (0x00037e5e) input_focus_pane_cp05

0x2d74,	// (0x00030b4d) list_im_single_pane_ParamLimits

0x2d74,	// (0x00030b4d) list_im_single_pane

0x2d89,	// (0x00030b62) list_single_im_pane_t1

0x4893,	// (0x0003266c) blid_accuracy_pane

0x489b,	// (0x00032674) blid_compass_pane

0x48a5,	// (0x0003267e) main_location_t1

0x48b5,	// (0x0003268e) main_location_t2

0x48c5,	// (0x0003269e) main_location_t3

0x0002,

0xf5e9,	// (0x0003d3c2) main_location_t

0xa085,	// (0x00037e5e) aid_levels_location

0xa406,	// (0x000381df) blid_accuracy_pane_g1

0xa406,	// (0x000381df) blid_accuracy_pane_g2

0x0001,

0xf2d1,	// (0x0003d0aa) blid_accuracy_pane_g

0xa71e,	// (0x000384f7) wml_content_pane

0xa75c,	// (0x00038535) wml_button_pane_ParamLimits

0xa75c,	// (0x00038535) wml_button_pane

0x2d98,	// (0x00030b71) wml_list_single_large_pane_ParamLimits

0x2d98,	// (0x00030b71) wml_list_single_large_pane

0x2dad,	// (0x00030b86) wml_list_single_medium_pane_ParamLimits

0x2dad,	// (0x00030b86) wml_list_single_medium_pane

0x2dc4,	// (0x00030b9d) wml_list_single_small_pane_ParamLimits

0x2dc4,	// (0x00030b9d) wml_list_single_small_pane

0xa770,	// (0x00038549) wml_selection_box_pane_ParamLimits

0xa770,	// (0x00038549) wml_selection_box_pane

0xa783,	// (0x0003855c) wml_list_single_pane_t1

0xa792,	// (0x0003856b) wml_list_single_medium_pane_t1

0xa7a1,	// (0x0003857a) wml_list_single_large_pane_t1

0xa7b0,	// (0x00038589) input_focus_pane_cp02_ParamLimits

0xa7b0,	// (0x00038589) input_focus_pane_cp02

0xa7c3,	// (0x0003859c) wml_selection_box_pane_g1

0xa7cc,	// (0x000385a5) wml_selection_box_pane_t1_ParamLimits

0xa7cc,	// (0x000385a5) wml_selection_box_pane_t1

0xa2e0,	// (0x000380b9) bg_wml_button_pane_ParamLimits

0xa2e0,	// (0x000380b9) bg_wml_button_pane

0xa7e4,	// (0x000385bd) wml_button_pane_g1

0xa7fa,	// (0x000385d3) wml_button_pane_t1

0xa7e4,	// (0x000385bd) wml_button_bg_pane_g1

0xa80a,	// (0x000385e3) wml_button_bg_pane_g2

0xa812,	// (0x000385eb) wml_button_bg_pane_g3

0xa81a,	// (0x000385f3) wml_button_bg_pane_g4

0xa822,	// (0x000385fb) wml_button_bg_pane_g5

0xa82a,	// (0x00038603) wml_button_bg_pane_g6

0xa832,	// (0x0003860b) wml_button_bg_pane_g7

0xa83a,	// (0x00038613) wml_button_bg_pane_g8

0xa842,	// (0x0003861b) wml_button_bg_pane_g9

0x0008,

0xf274,	// (0x0003d04d) wml_button_bg_pane_g

0x2ddd,	// (0x00030bb6) bg_list_pane_cp02

0xa84a,	// (0x00038623) mce_header_pane_ParamLimits

0xa84a,	// (0x00038623) mce_header_pane

0xa860,	// (0x00038639) mce_icon_pane

0xa860,	// (0x00038639) mce_image_pane

0xa869,	// (0x00038642) mce_text_pane_ParamLimits

0xa869,	// (0x00038642) mce_text_pane

0x2de5,	// (0x00030bbe) scroll_pane_cp03

0xa754,	// (0x0003852d) scroll_pane_cp04

0xa87c,	// (0x00038655) scroll_pane_cp05_ParamLimits

0xa87c,	// (0x00038655) scroll_pane_cp05

0x2def,	// (0x00030bc8) mce_header_field_pane_ParamLimits

0x2def,	// (0x00030bc8) mce_header_field_pane

0x2e06,	// (0x00030bdf) mce_header_field_pane_2_ParamLimits

0x2e06,	// (0x00030bdf) mce_header_field_pane_2

0x2e1c,	// (0x00030bf5) mce_header_field_pane_3

0x2e24,	// (0x00030bfd) list_single_mce_message_pane_ParamLimits

0x2e24,	// (0x00030bfd) list_single_mce_message_pane

0x2e3a,	// (0x00030c13) list_single_mce_smart_pane_ParamLimits

0x2e3a,	// (0x00030c13) list_single_mce_smart_pane

0xa888,	// (0x00038661) input_focus_pane_cp03

0xa891,	// (0x0003866a) list_header_data_pane

0x2e5b,	// (0x00030c34) mce_header_field_pane_t1

0x2e6b,	// (0x00030c44) list_single_mce_header_pane_ParamLimits

0x2e6b,	// (0x00030c44) list_single_mce_header_pane

0xa899,	// (0x00038672) list_single_mce_header_pane_t1

0xa8a8,	// (0x00038681) list_single_mce_message_pane_g1

0xa8b0,	// (0x00038689) list_single_mce_message_pane_t1

0x2ea5,	// (0x00030c7e) bg_cale_heading_pane_cp01_ParamLimits

0x2ea5,	// (0x00030c7e) bg_cale_heading_pane_cp01

0xa8be,	// (0x00038697) bg_cale_pane_cp02_ParamLimits

0xa8be,	// (0x00038697) bg_cale_pane_cp02

0x2edf,	// (0x00030cb8) cale_month_corner_pane

0x2efe,	// (0x00030cd7) cale_month_day_heading_pane_ParamLimits

0x2efe,	// (0x00030cd7) cale_month_day_heading_pane

0x2f50,	// (0x00030d29) cale_month_pane_g1_ParamLimits

0x2f50,	// (0x00030d29) cale_month_pane_g1

0x2f7f,	// (0x00030d58) cale_month_pane_g2_ParamLimits

0x2f7f,	// (0x00030d58) cale_month_pane_g2

0x2faf,	// (0x00030d88) cale_month_pane_g3_ParamLimits

0x2faf,	// (0x00030d88) cale_month_pane_g3

0x2feb,	// (0x00030dc4) cale_month_pane_g4_ParamLimits

0x2feb,	// (0x00030dc4) cale_month_pane_g4

0x3027,	// (0x00030e00) cale_month_pane_g5_ParamLimits

0x3027,	// (0x00030e00) cale_month_pane_g5

0x306f,	// (0x00030e48) cale_month_pane_g6_ParamLimits

0x306f,	// (0x00030e48) cale_month_pane_g6

0x30bb,	// (0x00030e94) cale_month_pane_g7_ParamLimits

0x30bb,	// (0x00030e94) cale_month_pane_g7

0x310b,	// (0x00030ee4) cale_month_pane_g8_ParamLimits

0x310b,	// (0x00030ee4) cale_month_pane_g8

0x315f,	// (0x00030f38) cale_month_pane_g9_ParamLimits

0x315f,	// (0x00030f38) cale_month_pane_g9

0x31b1,	// (0x00030f8a) cale_month_pane_g10_ParamLimits

0x31b1,	// (0x00030f8a) cale_month_pane_g10

0x3203,	// (0x00030fdc) cale_month_pane_g11_ParamLimits

0x3203,	// (0x00030fdc) cale_month_pane_g11

0x3255,	// (0x0003102e) cale_month_pane_g12_ParamLimits

0x3255,	// (0x0003102e) cale_month_pane_g12

0x32a7,	// (0x00031080) cale_month_pane_g13_ParamLimits

0x32a7,	// (0x00031080) cale_month_pane_g13

0x000c,

0xf287,	// (0x0003d060) cale_month_pane_g_ParamLimits

0xf287,	// (0x0003d060) cale_month_pane_g

0x32f9,	// (0x000310d2) cale_month_week_pane

0x331d,	// (0x000310f6) grid_cale_month_pane_ParamLimits

0x331d,	// (0x000310f6) grid_cale_month_pane

0x3366,	// (0x0003113f) cale_month_day_heading_pane_t1

0x33a8,	// (0x00031181) cale_month_day_heading_pane_t2

0x33dd,	// (0x000311b6) cale_month_day_heading_pane_t3

0x3412,	// (0x000311eb) cale_month_day_heading_pane_t4

0x344f,	// (0x00031228) cale_month_day_heading_pane_t5

0x3494,	// (0x0003126d) cale_month_day_heading_pane_t6

0x34d9,	// (0x000312b2) cale_month_day_heading_pane_t7

0x0006,

0xf2a2,	// (0x0003d07b) cale_month_day_heading_pane_t

0xa550,	// (0x00038329) bg_cale_side_pane_cp01

0x3526,	// (0x000312ff) cale_month_week_pane_t1

0x353f,	// (0x00031318) cale_month_week_pane_t2

0x3558,	// (0x00031331) cale_month_week_pane_t3

0x3571,	// (0x0003134a) cale_month_week_pane_t4

0x358a,	// (0x00031363) cale_month_week_pane_t5

0x35a3,	// (0x0003137c) cale_month_week_pane_t6

0x0005,

0xf2b1,	// (0x0003d08a) cale_month_week_pane_t

0x35bc,	// (0x00031395) cell_cale_month_pane_ParamLimits

0x35bc,	// (0x00031395) cell_cale_month_pane

0x3714,	// (0x000314ed) cell_cale_month_pane_g1

0x075f,	// (0x0002e538) cell_cale_month_pane_t1_ParamLimits

0x075f,	// (0x0002e538) cell_cale_month_pane_t1

0xa55e,	// (0x00038337) grid_highlight_pane_cp08

0xa406,	// (0x000381df) main_smil_g1

0x3720,	// (0x000314f9) smil_status_pane

0xa8fd,	// (0x000386d6) smil_text_pane

0xc238,	// (0x0003a011) bg_popup_call3_rect_pane_g8

0xc240,	// (0x0003a019) bg_popup_call3_rect_pane_g9

0x0008,

0xf56a,	// (0x0003d343) bg_popup_call3_rect_pane_g

0xc4c7,	// (0x0003a2a0) smil_status_volume_pane_g1

0xa907,	// (0x000386e0) smil_status_pane_t1

0x4c28,	// (0x00032a01) volume_smil_pane

0xa91e,	// (0x000386f7) list_smil_text_pane

0x3735,	// (0x0003150e) scroll_pane_cp011

0x3740,	// (0x00031519) smil_text_list_pane_t1_ParamLimits

0x3740,	// (0x00031519) smil_text_list_pane_t1

0x3784,	// (0x0003155d) aid_volume_smil_ParamLimits

0x3784,	// (0x0003155d) aid_volume_smil

0xa406,	// (0x000381df) smil_volume_pane_g1

0xa406,	// (0x000381df) smil_volume_pane_g2

0x0001,

0xf2d1,	// (0x0003d0aa) smil_volume_pane_g

0x2086,	// (0x0002fe5f) listscroll_cale_day_pane

0xa928,	// (0x00038701) bg_cale_pane

0xa940,	// (0x00038719) list_cale_pane

0xa963,	// (0x0003873c) scroll_pane_cp09

0xa974,	// (0x0003874d) cale_bg_pane_g1

0xa97c,	// (0x00038755) cale_bg_pane_g2

0xa984,	// (0x0003875d) cale_bg_pane_g3

0xa98c,	// (0x00038765) cale_bg_pane_g4

0xa994,	// (0x0003876d) cale_bg_pane_g5

0xa99c,	// (0x00038775) cale_bg_pane_g6

0xa9a4,	// (0x0003877d) cale_bg_pane_g7

0xa9ac,	// (0x00038785) cale_bg_pane_g8

0xa9b4,	// (0x0003878d) cale_bg_pane_g9

0x0008,

0xf2d6,	// (0x0003d0af) cale_bg_pane_g

0x37ae,	// (0x00031587) list_cale_time_pane_ParamLimits

0x37ae,	// (0x00031587) list_cale_time_pane

0xa9bc,	// (0x00038795) list_cale_time_pane_g1_ParamLimits

0xa9bc,	// (0x00038795) list_cale_time_pane_g1

0xa9c8,	// (0x000387a1) list_cale_time_pane_g2_ParamLimits

0xa9c8,	// (0x000387a1) list_cale_time_pane_g2

0x37c4,	// (0x0003159d) list_cale_time_pane_g3_ParamLimits

0x37c4,	// (0x0003159d) list_cale_time_pane_g3

0x37d2,	// (0x000315ab) list_cale_time_pane_g4_ParamLimits

0x37d2,	// (0x000315ab) list_cale_time_pane_g4

0x37e0,	// (0x000315b9) list_cale_time_pane_g5_ParamLimits

0x37e0,	// (0x000315b9) list_cale_time_pane_g5

0x0005,

0xf2e9,	// (0x0003d0c2) list_cale_time_pane_g_ParamLimits

0xf2e9,	// (0x0003d0c2) list_cale_time_pane_g

0xa9e2,	// (0x000387bb) list_cale_time_pane_t1_ParamLimits

0xa9e2,	// (0x000387bb) list_cale_time_pane_t1

0xaa0a,	// (0x000387e3) list_cale_time_pane_t2_ParamLimits

0xaa0a,	// (0x000387e3) list_cale_time_pane_t2

0x3bd1,	// (0x000319aa) aid_blid_cardinal_pane

0x3c0f,	// (0x000319e8) compass_pane_t4

0xaa32,	// (0x0003880b) list_cale_time_pane_t4_ParamLimits

0xaa32,	// (0x0003880b) list_cale_time_pane_t4

0x3c1d,	// (0x000319f6) compass_pane_t5

0x3c2b,	// (0x00031a04) compass_pane_t6

0x3c39,	// (0x00031a12) compass_pane_t7

0xaeb6,	// (0x00038c8f) navi_pane_cc_t1

0xb093,	// (0x00038e6c) aid_phob_thumbnail_center_pane

0x42a9,	// (0x00032082) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2f6,	// (0x0003d0cf) list_cale_time_pane_t_ParamLimits

0xf2f6,	// (0x0003d0cf) list_cale_time_pane_t

0x9cdc,	// (0x00037ab5) bg_popup_window_pane_cp02_ParamLimits

0x9cdc,	// (0x00037ab5) bg_popup_window_pane_cp02

0xaa5a,	// (0x00038833) heading_pane_cp01_ParamLimits

0xaa5a,	// (0x00038833) heading_pane_cp01

0xaa66,	// (0x0003883f) loc_req_pane_ParamLimits

0xaa66,	// (0x0003883f) loc_req_pane

0xaa76,	// (0x0003884f) loc_type_pane_ParamLimits

0xaa76,	// (0x0003884f) loc_type_pane

0xaa88,	// (0x00038861) loc_type_pane_t1_ParamLimits

0xaa88,	// (0x00038861) loc_type_pane_t1

0xaa9a,	// (0x00038873) loc_type_pane_t2_ParamLimits

0xaa9a,	// (0x00038873) loc_type_pane_t2

0xaaac,	// (0x00038885) loc_type_pane_t3_ParamLimits

0xaaac,	// (0x00038885) loc_type_pane_t3

0x0002,

0xf2fd,	// (0x0003d0d6) loc_type_pane_t_ParamLimits

0xf2fd,	// (0x0003d0d6) loc_type_pane_t

0xaabe,	// (0x00038897) list_loc_req_pane

0xaac8,	// (0x000388a1) scroll_pane_cp012

0x37ee,	// (0x000315c7) list_single_loc_request_popup_menu_pane_ParamLimits

0x37ee,	// (0x000315c7) list_single_loc_request_popup_menu_pane

0xaad3,	// (0x000388ac) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaad3,	// (0x000388ac) list_single_loc_request_popup_menu_pane_g1

0xaadf,	// (0x000388b8) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaadf,	// (0x000388b8) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf304,	// (0x0003d0dd) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf304,	// (0x0003d0dd) list_single_loc_request_popup_menu_pane_g

0xaaeb,	// (0x000388c4) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaaeb,	// (0x000388c4) list_single_loc_request_popup_menu_pane_t1

0xa2e0,	// (0x000380b9) bg_popup_window_pane_cp03_ParamLimits

0xa2e0,	// (0x000380b9) bg_popup_window_pane_cp03

0xab01,	// (0x000388da) heading_loc_req_pane_ParamLimits

0xab01,	// (0x000388da) heading_loc_req_pane

0x37fb,	// (0x000315d4) popup_dyc_status_message_window_g1_ParamLimits

0x37fb,	// (0x000315d4) popup_dyc_status_message_window_g1

0x380f,	// (0x000315e8) popup_dyc_status_message_window_t1_ParamLimits

0x380f,	// (0x000315e8) popup_dyc_status_message_window_t1

0x3824,	// (0x000315fd) popup_dyc_status_message_window_t2_ParamLimits

0x3824,	// (0x000315fd) popup_dyc_status_message_window_t2

0x3839,	// (0x00031612) popup_dyc_status_message_window_t3_ParamLimits

0x3839,	// (0x00031612) popup_dyc_status_message_window_t3

0x0002,

0xf309,	// (0x0003d0e2) popup_dyc_status_message_window_t_ParamLimits

0xf309,	// (0x0003d0e2) popup_dyc_status_message_window_t

0xa085,	// (0x00037e5e) bg_heading_pane_cp01

0xab0d,	// (0x000388e6) heading_loc_req_pane_g1

0xab15,	// (0x000388ee) heading_loc_req_pane_g2

0xab1d,	// (0x000388f6) heading_loc_req_pane_g3

0x0002,

0xf310,	// (0x0003d0e9) heading_loc_req_pane_g

0xab25,	// (0x000388fe) heading_loc_req_pane_t1

0xab34,	// (0x0003890d) bg_popup_sub_pane_cp01_ParamLimits

0xab34,	// (0x0003890d) bg_popup_sub_pane_cp01

0xab42,	// (0x0003891b) popup_cale_events_window_g1_ParamLimits

0xab42,	// (0x0003891b) popup_cale_events_window_g1

0xab62,	// (0x0003893b) popup_cale_events_window_g2_ParamLimits

0xab62,	// (0x0003893b) popup_cale_events_window_g2

0x0001,

0xf344,	// (0x0003d11d) popup_cale_events_window_g_ParamLimits

0xf344,	// (0x0003d11d) popup_cale_events_window_g

0xab82,	// (0x0003895b) popup_cale_events_window_t1_ParamLimits

0xab82,	// (0x0003895b) popup_cale_events_window_t1

0xab94,	// (0x0003896d) popup_cale_events_window_t2_ParamLimits

0xab94,	// (0x0003896d) popup_cale_events_window_t2

0xabd2,	// (0x000389ab) popup_cale_events_window_t3_ParamLimits

0xabd2,	// (0x000389ab) popup_cale_events_window_t3

0xac0c,	// (0x000389e5) popup_cale_events_window_t4_ParamLimits

0xac0c,	// (0x000389e5) popup_cale_events_window_t4

0x0003,

0xf349,	// (0x0003d122) popup_cale_events_window_t_ParamLimits

0xf349,	// (0x0003d122) popup_cale_events_window_t

0x3932,	// (0x0003170b) call_type_pane

0x3942,	// (0x0003171b) popup_call_status_window_g1

0x3956,	// (0x0003172f) popup_call_status_window_g2

0x396a,	// (0x00031743) popup_call_status_window_g3

0x0002,

0xf352,	// (0x0003d12b) popup_call_status_window_g

0xac42,	// (0x00038a1b) call_type_pane_g1

0xac4b,	// (0x00038a24) call_type_pane_g2

0x0001,

0xf359,	// (0x0003d132) call_type_pane_g

0xa085,	// (0x00037e5e) bg_popup_sub_pane_cp02

0xac54,	// (0x00038a2d) listscroll_popup_wml_pane

0xac5c,	// (0x00038a35) list_wml_pane

0xac66,	// (0x00038a3f) scroll_pane_cp013

0xac71,	// (0x00038a4a) list_single_graphic_popup_wml_pane_ParamLimits

0xac71,	// (0x00038a4a) list_single_graphic_popup_wml_pane

0xa406,	// (0x000381df) list_single_graphic_popup_wml_pane_g1

0xac85,	// (0x00038a5e) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf35e,	// (0x0003d137) list_single_graphic_popup_wml_pane_g

0xac8d,	// (0x00038a66) list_single_graphic_popup_wml_pane_t1

0xaca3,	// (0x00038a7c) aid_call_pane

0xa2d8,	// (0x000380b1) popup_clock_analogue_window_g1

0xa2d8,	// (0x000380b1) popup_clock_analogue_window_g2

0x3979,	// (0x00031752) popup_clock_analogue_window_g3

0x3979,	// (0x00031752) popup_clock_analogue_window_g4

0xa406,	// (0x000381df) popup_clock_analogue_window_g5

0x0004,

0xf363,	// (0x0003d13c) popup_clock_analogue_window_g

0x3981,	// (0x0003175a) popup_clock_analogue_window_t1

0x398f,	// (0x00031768) clock_digital_number_pane_ParamLimits

0x398f,	// (0x00031768) clock_digital_number_pane

0x399b,	// (0x00031774) clock_digital_number_pane_cp02_ParamLimits

0x399b,	// (0x00031774) clock_digital_number_pane_cp02

0x39a7,	// (0x00031780) clock_digital_number_pane_cp03_ParamLimits

0x39a7,	// (0x00031780) clock_digital_number_pane_cp03

0x39b3,	// (0x0003178c) clock_digital_number_pane_cp04_ParamLimits

0x39b3,	// (0x0003178c) clock_digital_number_pane_cp04

0x39bf,	// (0x00031798) clock_digital_separator_pane_ParamLimits

0x39bf,	// (0x00031798) clock_digital_separator_pane

0x39cb,	// (0x000317a4) popup_clock_digital_window_t1

0xa406,	// (0x000381df) clock_digital_number_pane_g1

0xa406,	// (0x000381df) clock_digital_number_pane_g2

0x0001,

0xf2d1,	// (0x0003d0aa) clock_digital_number_pane_g

0xa406,	// (0x000381df) clock_digital_separator_pane_g1

0xa406,	// (0x000381df) clock_digital_separator_pane_g2

0x0001,

0xf2d1,	// (0x0003d0aa) clock_digital_separator_pane_g

0xa085,	// (0x00037e5e) bg_popup_window_pane_cp04

0xacab,	// (0x00038a84) heading_pane_cp03

0xacb3,	// (0x00038a8c) listscroll_popup_gms_pane

0xacbb,	// (0x00038a94) grid_large_graphic_popup_pane

0xacc5,	// (0x00038a9e) listscroll_popup_gms_pane_g1

0xaccd,	// (0x00038aa6) listscroll_popup_gms_pane_g2

0x0001,

0xf36e,	// (0x0003d147) listscroll_popup_gms_pane_g

0xa754,	// (0x0003852d) scroll_pane_cp014

0x39e8,	// (0x000317c1) cell_large_graphic_popup_pane_ParamLimits

0x39e8,	// (0x000317c1) cell_large_graphic_popup_pane

0x3a00,	// (0x000317d9) cell_large_graphic_popup_pane_g1_ParamLimits

0x3a00,	// (0x000317d9) cell_large_graphic_popup_pane_g1

0xacd5,	// (0x00038aae) cell_large_graphic_popup_pane_g2_ParamLimits

0xacd5,	// (0x00038aae) cell_large_graphic_popup_pane_g2

0xace1,	// (0x00038aba) cell_large_graphic_popup_pane_g3_ParamLimits

0xace1,	// (0x00038aba) cell_large_graphic_popup_pane_g3

0xacee,	// (0x00038ac7) cell_large_graphic_popup_pane_g4_ParamLimits

0xacee,	// (0x00038ac7) cell_large_graphic_popup_pane_g4

0x0003,

0xf373,	// (0x0003d14c) cell_large_graphic_popup_pane_g_ParamLimits

0xf373,	// (0x0003d14c) cell_large_graphic_popup_pane_g

0xacfe,	// (0x00038ad7) grid_highlight_pane_cp010

0xa406,	// (0x000381df) bg_popup_call_pane_g1

0xad08,	// (0x00038ae1) list_single_graphic_popup_conf_pane_ParamLimits

0xad08,	// (0x00038ae1) list_single_graphic_popup_conf_pane

0xad1b,	// (0x00038af4) list_highlight_pane_cp01

0xad24,	// (0x00038afd) list_single_graphic_popup_conf_pane_g1

0xad2c,	// (0x00038b05) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf37c,	// (0x0003d155) list_single_graphic_popup_conf_pane_g

0xad34,	// (0x00038b0d) list_single_graphic_popup_conf_pane_t1

0xad42,	// (0x00038b1b) linegrid_cams_pane_g1

0x3a0c,	// (0x000317e5) linegrid_cams_pane_g2

0xa591,	// (0x0003836a) linegrid_cams_pane_g3

0xad4b,	// (0x00038b24) linegrid_cams_pane_g4

0x3a15,	// (0x000317ee) linegrid_cams_pane_g5

0x3a1e,	// (0x000317f7) linegrid_cams_pane_g6

0xa59a,	// (0x00038373) linegrid_cams_pane_g7

0x0006,

0xf381,	// (0x0003d15a) linegrid_cams_pane_g

0xad54,	// (0x00038b2d) popup_clock_analogue_window

0xad54,	// (0x00038b2d) popup_clock_digital_window

0xa085,	// (0x00037e5e) popup_phob_thumbnail_window

0xa406,	// (0x000381df) call_video_uplink_pane_g1

0xad5d,	// (0x00038b36) call_video_uplink_pane_g2

0x0001,

0xf390,	// (0x0003d169) call_video_uplink_pane_g

0xad65,	// (0x00038b3e) video_uplink_pane

0xad6d,	// (0x00038b46) mce_image_pane_g1

0x3a29,	// (0x00031802) mce_image_pane_g2

0x3a31,	// (0x0003180a) mce_image_pane_g3

0x3a39,	// (0x00031812) mce_image_pane_g4

0x3a43,	// (0x0003181c) mce_image_pane_g5

0x0004,

0xf395,	// (0x0003d16e) mce_image_pane_g

0xad77,	// (0x00038b50) control_top_pane_stacon_cp01_ParamLimits

0xad77,	// (0x00038b50) control_top_pane_stacon_cp01

0xad8b,	// (0x00038b64) uni_indicator_pane_stacon_cp01_ParamLimits

0xad8b,	// (0x00038b64) uni_indicator_pane_stacon_cp01

0xad9c,	// (0x00038b75) bg_popup_sub_pane_cp03

0x3a4b,	// (0x00031824) chi_dic_find_pane

0x3a53,	// (0x0003182c) listscroll_chi_dic_pane

0x3a5c,	// (0x00031835) main_pane_chidic_g1

0x3a6f,	// (0x00031848) chi_dic_find_pane_t1

0xada6,	// (0x00038b7f) find_chidic_pane

0xadaf,	// (0x00038b88) chi_dic_list_pane_ParamLimits

0xadaf,	// (0x00038b88) chi_dic_list_pane

0xadc0,	// (0x00038b99) scroll_pane_cp020

0x3a7d,	// (0x00031856) find_chidic_pane_t1

0xa085,	// (0x00037e5e) input_focus_pane_cp06

0x3a8c,	// (0x00031865) list_chi_dic_pane_ParamLimits

0x3a8c,	// (0x00031865) list_chi_dic_pane

0x3a9e,	// (0x00031877) list_chi_dic_pane_t1_ParamLimits

0x3a9e,	// (0x00031877) list_chi_dic_pane_t1

0xa085,	// (0x00037e5e) list_highlight_pane_cp020

0xadc8,	// (0x00038ba1) bg_cale_heading_pane_g1

0x3ab1,	// (0x0003188a) bg_cale_heading_pane_g2

0x3ab9,	// (0x00031892) bg_cale_heading_pane_g3

0x3ac1,	// (0x0003189a) bg_cale_heading_pane_g4

0x3acb,	// (0x000318a4) bg_cale_heading_pane_g5

0x3ad5,	// (0x000318ae) bg_cale_heading_pane_g6

0x3add,	// (0x000318b6) bg_cale_heading_pane_g7

0x3ae5,	// (0x000318be) bg_cale_heading_pane_g8

0x3aef,	// (0x000318c8) bg_cale_heading_pane_g9

0x0008,

0xf3a0,	// (0x0003d179) bg_cale_heading_pane_g

0xadc8,	// (0x00038ba1) bg_cale_side_pane_g1

0x3af9,	// (0x000318d2) bg_cale_side_pane_g2

0x3b01,	// (0x000318da) bg_cale_side_pane_g3

0x3b09,	// (0x000318e2) bg_cale_side_pane_g4

0x3b11,	// (0x000318ea) bg_cale_side_pane_g5

0x3b19,	// (0x000318f2) bg_cale_side_pane_g6

0x3b21,	// (0x000318fa) bg_cale_side_pane_g7

0x3b29,	// (0x00031902) bg_cale_side_pane_g8

0x3b31,	// (0x0003190a) bg_cale_side_pane_g9

0x0008,

0xf3b3,	// (0x0003d18c) bg_cale_side_pane_g

0x3b39,	// (0x00031912) popup_call_status_window_ParamLimits

0x3b39,	// (0x00031912) popup_call_status_window

0xadd0,	// (0x00038ba9) stacon_top_pane

0xadd8,	// (0x00038bb1) status_pane_ParamLimits

0xadd8,	// (0x00038bb1) status_pane

0xaded,	// (0x00038bc6) status_small_pane

0xadf5,	// (0x00038bce) control_pane

0xa085,	// (0x00037e5e) stacon_bottom_pane

0xadfd,	// (0x00038bd6) list_single_mce_smart_pane_t1_ParamLimits

0xadfd,	// (0x00038bd6) list_single_mce_smart_pane_t1

0xae10,	// (0x00038be9) list_single_mce_smart_pane_t2_ParamLimits

0xae10,	// (0x00038be9) list_single_mce_smart_pane_t2

0x0001,

0xf3c6,	// (0x0003d19f) list_single_mce_smart_pane_t_ParamLimits

0xf3c6,	// (0x0003d19f) list_single_mce_smart_pane_t

0x3b80,	// (0x00031959) compass_pane

0x3b89,	// (0x00031962) main_location2_pane_t1

0x3b9b,	// (0x00031974) main_location2_pane_t2

0x3bad,	// (0x00031986) main_location2_pane_t3

0x0003,

0xf3cb,	// (0x0003d1a4) main_location2_pane_t

0xae2f,	// (0x00038c08) compass_pane_g1_ParamLimits

0xae2f,	// (0x00038c08) compass_pane_g1

0x3bf1,	// (0x000319ca) compass_pane_t1

0x3c00,	// (0x000319d9) compass_pane_t2

0x0005,

0xf3d4,	// (0x0003d1ad) compass_pane_t

0x3c47,	// (0x00031a20) text_secondary_cp61

0xaead,	// (0x00038c86) navi_pane_cams_g5

0xaf29,	// (0x00038d02) navi_pane_im_t1

0xaf37,	// (0x00038d10) navi_pane_mp_g1_ParamLimits

0xaf37,	// (0x00038d10) navi_pane_mp_g1

0xaf4b,	// (0x00038d24) navi_pane_mp_g2_ParamLimits

0xaf4b,	// (0x00038d24) navi_pane_mp_g2

0xaf57,	// (0x00038d30) navi_pane_mp_g3_ParamLimits

0xaf57,	// (0x00038d30) navi_pane_mp_g3

0x0002,

0xf3e8,	// (0x0003d1c1) navi_pane_mp_g_ParamLimits

0xf3e8,	// (0x0003d1c1) navi_pane_mp_g

0xaf63,	// (0x00038d3c) navi_pane_mp_t1

0xaf71,	// (0x00038d4a) navi_pane_mp_t2

0x0002,

0xf3ef,	// (0x0003d1c8) navi_pane_mp_t

0xafdc,	// (0x00038db5) navi_pane_vt_g1

0xaf63,	// (0x00038d3c) navi_pane_vt_t1

0xafe4,	// (0x00038dbd) navi_slider_pane

0xa5ab,	// (0x00038384) zooming_pane

0xaff4,	// (0x00038dcd) navi_slider_pane_g1

0x3c98,	// (0x00031a71) navi_slider_pane_g2

0x0006,

0xf3f6,	// (0x0003d1cf) navi_slider_pane_g

0xb018,	// (0x00038df1) aid_levels_zoom

0xb020,	// (0x00038df9) zooming_pane_g1

0xb028,	// (0x00038e01) zooming_pane_g2

0xb028,	// (0x00038e01) zooming_pane_g3

0x0002,

0xf405,	// (0x0003d1de) zooming_pane_g

0xb030,	// (0x00038e09) level_10_zoom

0xb039,	// (0x00038e12) level_11_zoom

0xb042,	// (0x00038e1b) level_1_zoom

0xb04b,	// (0x00038e24) level_2_zoom

0xb054,	// (0x00038e2d) level_3_zoom

0xb05d,	// (0x00038e36) level_4_zoom

0xb066,	// (0x00038e3f) level_5_zoom

0xb06f,	// (0x00038e48) level_6_zoom

0xb078,	// (0x00038e51) level_7_zoom

0xb081,	// (0x00038e5a) level_8_zoom

0xb08a,	// (0x00038e63) level_9_zoom

0xb09b,	// (0x00038e74) popup_phob_thumbnail_window_g1

0xb0a3,	// (0x00038e7c) popup_phob_thumbnail_window_g2

0x0001,

0xf40c,	// (0x0003d1e5) popup_phob_thumbnail_window_g

0xc3da,	// (0x0003a1b3) level_1_location

0xc3e2,	// (0x0003a1bb) level_2_location

0xc3ea,	// (0x0003a1c3) level_3_location

0xc3f2,	// (0x0003a1cb) level_4_location

0xa5ab,	// (0x00038384) level_5_location

0x3caa,	// (0x00031a83) mce_icon_pane_g1

0x3cb4,	// (0x00031a8d) mce_icon_pane_g2

0x0001,

0xf411,	// (0x0003d1ea) mce_icon_pane_g

0x3cbc,	// (0x00031a95) main_mup_pane_g1_ParamLimits

0x3cbc,	// (0x00031a95) main_mup_pane_g1

0x3cd2,	// (0x00031aab) main_mup_pane_g2_ParamLimits

0x3cd2,	// (0x00031aab) main_mup_pane_g2

0x3ce4,	// (0x00031abd) main_mup_pane_g3_ParamLimits

0x3ce4,	// (0x00031abd) main_mup_pane_g3

0x3cf6,	// (0x00031acf) main_mup_pane_g4_ParamLimits

0x3cf6,	// (0x00031acf) main_mup_pane_g4

0x3d0e,	// (0x00031ae7) main_mup_pane_g5_ParamLimits

0x3d0e,	// (0x00031ae7) main_mup_pane_g5

0x3d2a,	// (0x00031b03) main_mup_pane_g6_ParamLimits

0x3d2a,	// (0x00031b03) main_mup_pane_g6

0x3d42,	// (0x00031b1b) main_mup_pane_g7_ParamLimits

0x3d42,	// (0x00031b1b) main_mup_pane_g7

0x3d5a,	// (0x00031b33) main_mup_pane_g8_ParamLimits

0x3d5a,	// (0x00031b33) main_mup_pane_g8

0x3d72,	// (0x00031b4b) main_mup_pane_g9_ParamLimits

0x3d72,	// (0x00031b4b) main_mup_pane_g9

0x3d8c,	// (0x00031b65) main_mup_pane_g10_ParamLimits

0x3d8c,	// (0x00031b65) main_mup_pane_g10

0x3da6,	// (0x00031b7f) main_mup_pane_g11_ParamLimits

0x3da6,	// (0x00031b7f) main_mup_pane_g11

0x3dba,	// (0x00031b93) main_mup_pane_g12_ParamLimits

0x3dba,	// (0x00031b93) main_mup_pane_g12

0x3dd0,	// (0x00031ba9) main_mup_pane_g13_ParamLimits

0x3dd0,	// (0x00031ba9) main_mup_pane_g13

0x000c,

0xf416,	// (0x0003d1ef) main_mup_pane_g_ParamLimits

0xf416,	// (0x0003d1ef) main_mup_pane_g

0x3de4,	// (0x00031bbd) main_mup_pane_t1_ParamLimits

0x3de4,	// (0x00031bbd) main_mup_pane_t1

0x3dfe,	// (0x00031bd7) main_mup_pane_t2_ParamLimits

0x3dfe,	// (0x00031bd7) main_mup_pane_t2

0x3e16,	// (0x00031bef) main_mup_pane_t3_ParamLimits

0x3e16,	// (0x00031bef) main_mup_pane_t3

0x3e2e,	// (0x00031c07) main_mup_pane_t4_ParamLimits

0x3e2e,	// (0x00031c07) main_mup_pane_t4

0x3e4c,	// (0x00031c25) main_mup_pane_t5_ParamLimits

0x3e4c,	// (0x00031c25) main_mup_pane_t5

0x3e61,	// (0x00031c3a) main_mup_pane_t6_ParamLimits

0x3e61,	// (0x00031c3a) main_mup_pane_t6

0x0005,

0xf431,	// (0x0003d20a) main_mup_pane_t_ParamLimits

0xf431,	// (0x0003d20a) main_mup_pane_t

0x3e73,	// (0x00031c4c) mup_progress_pane_ParamLimits

0x3e73,	// (0x00031c4c) mup_progress_pane

0x3e7f,	// (0x00031c58) mup_visualizer_pane_ParamLimits

0x3e7f,	// (0x00031c58) mup_visualizer_pane

0x3eb3,	// (0x00031c8c) mup_volume_pane_ParamLimits

0x3eb3,	// (0x00031c8c) mup_volume_pane

0xb0ab,	// (0x00038e84) mup_visualizer_pane_g1_ParamLimits

0xb0ab,	// (0x00038e84) mup_visualizer_pane_g1

0xb0ab,	// (0x00038e84) mup_visualizer_pane_g2_ParamLimits

0xb0ab,	// (0x00038e84) mup_visualizer_pane_g2

0xae2f,	// (0x00038c08) mup_visualizer_pane_g3_ParamLimits

0xae2f,	// (0x00038c08) mup_visualizer_pane_g3

0x0002,

0xf43e,	// (0x0003d217) mup_visualizer_pane_g_ParamLimits

0xf43e,	// (0x0003d217) mup_visualizer_pane_g

0xa406,	// (0x000381df) mup_volume_pane_g1

0xb0c1,	// (0x00038e9a) mup_volume_pane_g2

0x0001,

0xf445,	// (0x0003d21e) mup_volume_pane_g

0xa406,	// (0x000381df) mup_progress_pane_g1

0xb0ca,	// (0x00038ea3) mup_progress_pane_g2

0xb0d3,	// (0x00038eac) mup_progress_pane_g3

0x0002,

0xf44a,	// (0x0003d223) mup_progress_pane_g

0xa085,	// (0x00037e5e) bg_popup_window_pane_cp05

0xb0dc,	// (0x00038eb5) heading_pane_cp02_ParamLimits

0xb0dc,	// (0x00038eb5) heading_pane_cp02

0xb0f6,	// (0x00038ecf) list_popup_blid_pane

0xb0fe,	// (0x00038ed7) list_blid_sat_info_pane_ParamLimits

0xb0fe,	// (0x00038ed7) list_blid_sat_info_pane

0xb111,	// (0x00038eea) list_blid_sat_info_pane_g1

0xb119,	// (0x00038ef2) list_blid_sat_info_pane_t1

0x3fc9,	// (0x00031da2) mup_equalizer_pane_ParamLimits

0x3fc9,	// (0x00031da2) mup_equalizer_pane

0x3fe2,	// (0x00031dbb) mup_equalizer_pane_cp1_ParamLimits

0x3fe2,	// (0x00031dbb) mup_equalizer_pane_cp1

0x3fff,	// (0x00031dd8) mup_equalizer_pane_cp2_ParamLimits

0x3fff,	// (0x00031dd8) mup_equalizer_pane_cp2

0x401c,	// (0x00031df5) mup_equalizer_pane_cp3_ParamLimits

0x401c,	// (0x00031df5) mup_equalizer_pane_cp3

0x403d,	// (0x00031e16) mup_equalizer_pane_cp4_ParamLimits

0x403d,	// (0x00031e16) mup_equalizer_pane_cp4

0x405e,	// (0x00031e37) mup_equalizer_pane_cp5

0x4072,	// (0x00031e4b) mup_equalizer_pane_cp6

0x4086,	// (0x00031e5f) mup_equalizer_pane_cp7

0xc2b8,	// (0x0003a091) bg_popup_call_poc_act_pane_g9

0xc2c0,	// (0x0003a099) bg_popup_call_poc_act_pane_g10

0xc2c8,	// (0x0003a0a1) bg_popup_call_poc_act_pane_g11

0x000a,

0xa2e0,	// (0x000380b9) mup_scale_pane

0xa406,	// (0x000381df) mup_scale_pane_g1

0xb127,	// (0x00038f00) mup_scale_pane_g2

0x0006,

0xf466,	// (0x0003d23f) mup_scale_pane_g

0xb14b,	// (0x00038f24) msg_data_pane

0xb153,	// (0x00038f2c) scroll_pane_cp017

0x40ac,	// (0x00031e85) bg_list_pane_cp04_ParamLimits

0x40ac,	// (0x00031e85) bg_list_pane_cp04

0xb15b,	// (0x00038f34) msg_data_pane_g1

0x40cc,	// (0x00031ea5) msg_data_pane_g2

0x40d4,	// (0x00031ead) msg_data_pane_g3

0x40dc,	// (0x00031eb5) msg_data_pane_g4

0x40e4,	// (0x00031ebd) msg_data_pane_g5

0x40ec,	// (0x00031ec5) msg_data_pane_g6

0x40f4,	// (0x00031ecd) msg_data_pane_g7

0x0006,

0xf475,	// (0x0003d24e) msg_data_pane_g

0x40fc,	// (0x00031ed5) msg_text_pane_ParamLimits

0x40fc,	// (0x00031ed5) msg_text_pane

0x412a,	// (0x00031f03) qrid_highlight_pane_cp011_ParamLimits

0x412a,	// (0x00031f03) qrid_highlight_pane_cp011

0xa085,	// (0x00037e5e) msg_body_pane

0xa085,	// (0x00037e5e) msg_header_pane

0xb16c,	// (0x00038f45) input_focus_pane_cp07

0x414e,	// (0x00031f27) msg_header_pane_t1_ParamLimits

0x414e,	// (0x00031f27) msg_header_pane_t1

0x4160,	// (0x00031f39) msg_header_pane_t2_ParamLimits

0x4160,	// (0x00031f39) msg_header_pane_t2

0x0001,

0xf489,	// (0x0003d262) msg_header_pane_t_ParamLimits

0xf489,	// (0x0003d262) msg_header_pane_t

0xb181,	// (0x00038f5a) msg_body_pane_g1

0x4172,	// (0x00031f4b) msg_body_pane_t1_ParamLimits

0x4172,	// (0x00031f4b) msg_body_pane_t1

0x41a3,	// (0x00031f7c) msg_body_pane_t2_ParamLimits

0x41a3,	// (0x00031f7c) msg_body_pane_t2

0x41b5,	// (0x00031f8e) msg_body_pane_t3_ParamLimits

0x41b5,	// (0x00031f8e) msg_body_pane_t3

0x0002,

0xf48e,	// (0x0003d267) msg_body_pane_t_ParamLimits

0xf48e,	// (0x0003d267) msg_body_pane_t

0x07a7,	// (0x0002e580) main_viewer_pane_g1_ParamLimits

0x07a7,	// (0x0002e580) main_viewer_pane_g1

0x07b5,	// (0x0002e58e) main_viewer_pane_g2_ParamLimits

0x07b5,	// (0x0002e58e) main_viewer_pane_g2

0x41fd,	// (0x00031fd6) main_viewer_pane_g3_ParamLimits

0x41fd,	// (0x00031fd6) main_viewer_pane_g3

0x420c,	// (0x00031fe5) main_viewer_pane_g4_ParamLimits

0x420c,	// (0x00031fe5) main_viewer_pane_g4

0x421b,	// (0x00031ff4) main_viewer_pane_g5_ParamLimits

0x421b,	// (0x00031ff4) main_viewer_pane_g5

0x421b,	// (0x00031ff4) main_viewer_pane_g7_ParamLimits

0x421b,	// (0x00031ff4) main_viewer_pane_g7

0xaad3,	// (0x000388ac) main_viewer_pane_g8_ParamLimits

0xaad3,	// (0x000388ac) main_viewer_pane_g8

0x0007,

0xf49e,	// (0x0003d277) main_viewer_pane_g_ParamLimits

0xf49e,	// (0x0003d277) main_viewer_pane_g

0xb189,	// (0x00038f62) viewer_content_pane_ParamLimits

0xb189,	// (0x00038f62) viewer_content_pane

0x4266,	// (0x0003203f) main_postcard_pane_g1_ParamLimits

0x4266,	// (0x0003203f) main_postcard_pane_g1

0x427c,	// (0x00032055) main_postcard_pane_g2_ParamLimits

0x427c,	// (0x00032055) main_postcard_pane_g2

0x4292,	// (0x0003206b) main_postcard_pane_g3_ParamLimits

0x4292,	// (0x0003206b) main_postcard_pane_g3

0x0005,

0xf4af,	// (0x0003d288) main_postcard_pane_g_ParamLimits

0xf4af,	// (0x0003d288) main_postcard_pane_g

0x42a9,	// (0x00032082) main_postcard_pane_g4

0xc4da,	// (0x0003a2b3) smil_status_volume_pane_g2

0x42ec,	// (0x000320c5) postcard_pane_ParamLimits

0x42ec,	// (0x000320c5) postcard_pane

0xb197,	// (0x00038f70) postcard_pane_g1_ParamLimits

0xb197,	// (0x00038f70) postcard_pane_g1

0x432e,	// (0x00032107) postcard_pane_g2_ParamLimits

0x432e,	// (0x00032107) postcard_pane_g2

0x433a,	// (0x00032113) postcard_pane_g3_ParamLimits

0x433a,	// (0x00032113) postcard_pane_g3

0xb1a5,	// (0x00038f7e) postcard_pane_g4_ParamLimits

0xb1a5,	// (0x00038f7e) postcard_pane_g4

0x4346,	// (0x0003211f) postcard_pane_g5_ParamLimits

0x4346,	// (0x0003211f) postcard_pane_g5

0x435b,	// (0x00032134) postcard_pane_g6_ParamLimits

0x435b,	// (0x00032134) postcard_pane_g6

0xb197,	// (0x00038f70) postcard_pane_g7_ParamLimits

0xb197,	// (0x00038f70) postcard_pane_g7

0x0006,

0xf4bc,	// (0x0003d295) postcard_pane_g_ParamLimits

0xf4bc,	// (0x0003d295) postcard_pane_g

0x436f,	// (0x00032148) main_mp2_pane_g1_ParamLimits

0x436f,	// (0x00032148) main_mp2_pane_g1

0x437b,	// (0x00032154) main_mp2_pane_g2_ParamLimits

0x437b,	// (0x00032154) main_mp2_pane_g2

0x4387,	// (0x00032160) main_mp2_pane_g3_ParamLimits

0x4387,	// (0x00032160) main_mp2_pane_g3

0x0002,

0xf4cb,	// (0x0003d2a4) main_mp2_pane_g_ParamLimits

0xf4cb,	// (0x0003d2a4) main_mp2_pane_g

0x4393,	// (0x0003216c) main_mp2_pane_t1_ParamLimits

0x4393,	// (0x0003216c) main_mp2_pane_t1

0x43a8,	// (0x00032181) main_mp2_pane_t2_ParamLimits

0x43a8,	// (0x00032181) main_mp2_pane_t2

0x43ba,	// (0x00032193) main_mp2_pane_t3_ParamLimits

0x43ba,	// (0x00032193) main_mp2_pane_t3

0x0002,

0xf4d2,	// (0x0003d2ab) main_mp2_pane_t_ParamLimits

0xf4d2,	// (0x0003d2ab) main_mp2_pane_t

0xb1b3,	// (0x00038f8c) pec_content_pane_ParamLimits

0xb1b3,	// (0x00038f8c) pec_content_pane

0xa754,	// (0x0003852d) scroll_pane_cp015

0xb1c5,	// (0x00038f9e) pec_attribute_pane_ParamLimits

0xb1c5,	// (0x00038f9e) pec_attribute_pane

0x43cc,	// (0x000321a5) pec_content_pane_g1_ParamLimits

0x43cc,	// (0x000321a5) pec_content_pane_g1

0xb1d5,	// (0x00038fae) pec_content_pane_t1_ParamLimits

0xb1d5,	// (0x00038fae) pec_content_pane_t1

0xb1e7,	// (0x00038fc0) pec_content_pane_t2_ParamLimits

0xb1e7,	// (0x00038fc0) pec_content_pane_t2

0x0001,

0xf4d9,	// (0x0003d2b2) pec_content_pane_t_ParamLimits

0xf4d9,	// (0x0003d2b2) pec_content_pane_t

0x43d8,	// (0x000321b1) list_single_graphic_pane_cp01_ParamLimits

0x43d8,	// (0x000321b1) list_single_graphic_pane_cp01

0xa2e0,	// (0x000380b9) bg_popup_sub_pane_cp04

0xb1f9,	// (0x00038fd2) popup_mup_playback_window_g1

0xb205,	// (0x00038fde) popup_mup_playback_window_t1

0xb21a,	// (0x00038ff3) popup_mup_playback_window_t2

0x0001,

0xf4de,	// (0x0003d2b7) popup_mup_playback_window_t

0xb251,	// (0x0003902a) main_image_pane_g1_ParamLimits

0xb251,	// (0x0003902a) main_image_pane_g1

0xb294,	// (0x0003906d) scroll_pane_cp018_ParamLimits

0xb294,	// (0x0003906d) scroll_pane_cp018

0xb2ac,	// (0x00039085) scroll_pane_cp016_ParamLimits

0xb2ac,	// (0x00039085) scroll_pane_cp016

0x44a6,	// (0x0003227f) smil2_image_pane_ParamLimits

0x44a6,	// (0x0003227f) smil2_image_pane

0x44d6,	// (0x000322af) smil2_root_pane_ParamLimits

0x44d6,	// (0x000322af) smil2_root_pane

0x450e,	// (0x000322e7) smil2_text_pane_ParamLimits

0x450e,	// (0x000322e7) smil2_text_pane

0xa085,	// (0x00037e5e) bg_list_pane_cp06

0xb2e8,	// (0x000390c1) grid_radio_pane

0xa085,	// (0x00037e5e) bg_popup_window_pane_cp06

0xb2f0,	// (0x000390c9) main_fmradio_pane_t1

0xacab,	// (0x00038a84) heading_pane_cp04

0xb2fe,	// (0x000390d7) main_fmradio_pane_t2

0xc310,	// (0x0003a0e9) popup_cale_lunar_info_window_g1

0xb30c,	// (0x000390e5) main_fmradio_pane_t3

0xc318,	// (0x0003a0f1) popup_cale_lunar_info_window_g2

0xb31a,	// (0x000390f3) main_fmradio_pane_t4

0x0001,

0xb328,	// (0x00039101) main_fmradio_pane_t5

0x0004,

0xf5cc,	// (0x0003d3a5) popup_cale_lunar_info_window_g

0xf4f3,	// (0x0003d2cc) main_fmradio_pane_t

0xb336,	// (0x0003910f) wait_bar_pane_cp03

0xb33e,	// (0x00039117) cell_fmradio_pane_ParamLimits

0xb33e,	// (0x00039117) cell_fmradio_pane

0xb197,	// (0x00038f70) cell_fmradio_pane_g1_ParamLimits

0xb197,	// (0x00038f70) cell_fmradio_pane_g1

0xa085,	// (0x00037e5e) grid_highlight_pane_cp011

0xb351,	// (0x0003912a) poc_content_pane_ParamLimits

0xb351,	// (0x0003912a) poc_content_pane

0xb363,	// (0x0003913c) scroll_pane_cp019

0x458e,	// (0x00032367) popup_call_poc_act_window_ParamLimits

0x458e,	// (0x00032367) popup_call_poc_act_window

0x45b2,	// (0x0003238b) popup_call_poc_inact_window_ParamLimits

0x45b2,	// (0x0003238b) popup_call_poc_inact_window

0xf590,	// (0x0003d369) bg_popup_call_poc_act_pane_g

0xc2d0,	// (0x0003a0a9) bg_popup_call_poc_inact_pane_g1

0xc2d8,	// (0x0003a0b1) bg_popup_call_poc_inact_pane_g2

0xb36b,	// (0x00039144) popup_call_poc_act_window_g2

0xc2e0,	// (0x0003a0b9) bg_popup_call_poc_inact_pane_g3

0xc260,	// (0x0003a039) bg_popup_call_poc_inact_pane_g4

0xc2e8,	// (0x0003a0c1) bg_popup_call_poc_inact_pane_g5

0xb373,	// (0x0003914c) popup_call_poc_act_window_t1_ParamLimits

0xb373,	// (0x0003914c) popup_call_poc_act_window_t1

0xb39b,	// (0x00039174) popup_call_poc_act_window_t2_ParamLimits

0xb39b,	// (0x00039174) popup_call_poc_act_window_t2

0xb3c3,	// (0x0003919c) popup_call_poc_act_window_t3_ParamLimits

0xb3c3,	// (0x0003919c) popup_call_poc_act_window_t3

0xb3eb,	// (0x000391c4) popup_call_poc_act_window_t4_ParamLimits

0xb3eb,	// (0x000391c4) popup_call_poc_act_window_t4

0x0003,

0xf4fe,	// (0x0003d2d7) popup_call_poc_act_window_t_ParamLimits

0xf4fe,	// (0x0003d2d7) popup_call_poc_act_window_t

0xc2f0,	// (0x0003a0c9) bg_popup_call_poc_inact_pane_g6

0xc2f8,	// (0x0003a0d1) bg_popup_call_poc_inact_pane_g7

0xc300,	// (0x0003a0d9) bg_popup_call_poc_inact_pane_g8

0xb3fd,	// (0x000391d6) popup_call_poc_inact_window_g2

0xc308,	// (0x0003a0e1) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a7,	// (0x0003d380) bg_popup_call_poc_inact_pane_g

0xb405,	// (0x000391de) popup_call_poc_inact_window_t1_ParamLimits

0xb405,	// (0x000391de) popup_call_poc_inact_window_t1

0xb41a,	// (0x000391f3) popup_call_poc_inact_window_t2_ParamLimits

0xb41a,	// (0x000391f3) popup_call_poc_inact_window_t2

0xb42f,	// (0x00039208) popup_call_poc_inact_window_t3_ParamLimits

0xb42f,	// (0x00039208) popup_call_poc_inact_window_t3

0x0002,

0xf507,	// (0x0003d2e0) popup_call_poc_inact_window_t_ParamLimits

0xf507,	// (0x0003d2e0) popup_call_poc_inact_window_t

0xc44d,	// (0x0003a226) context_pane_ParamLimits

0x4b8c,	// (0x00032965) signal_pane_ParamLimits

0xa5ab,	// (0x00038384) main_call2_pane

0x4b1b,	// (0x000328f4) popup_phob_thumbnail2_window_ParamLimits

0x4b1b,	// (0x000328f4) popup_phob_thumbnail2_window

0x41c7,	// (0x00031fa0) aid_hotspot_pointer_arrow_pane

0x41cf,	// (0x00031fa8) aid_hotspot_pointer_hand_pane

0x48fc,	// (0x000326d5) phob_pre_status_pane_g5

0x2594,	// (0x0003036d) cams_zoom_pane_ParamLimits

0x25a3,	// (0x0003037c) image_vga_pane_ParamLimits

0x25bd,	// (0x00030396) main_camera_pane_g1_ParamLimits

0x25cf,	// (0x000303a8) main_camera_pane_g2_ParamLimits

0x25df,	// (0x000303b8) main_camera_pane_g3_ParamLimits

0x25ef,	// (0x000303c8) main_camera_pane_g4_ParamLimits

0x25ff,	// (0x000303d8) main_camera_pane_g5_ParamLimits

0x260f,	// (0x000303e8) main_camera_pane_g6_ParamLimits

0x261f,	// (0x000303f8) main_camera_pane_g7_ParamLimits

0xf206,	// (0x0003cfdf) main_camera_pane_g_ParamLimits

0x262f,	// (0x00030408) main_camera_pane_t1_ParamLimits

0x2645,	// (0x0003041e) main_camera_pane_t2_ParamLimits

0xf217,	// (0x0003cff0) main_camera_pane_t_ParamLimits

0xa2e0,	// (0x000380b9) bg_popup_preview_window_pane_cp01_ParamLimits

0xa2e0,	// (0x000380b9) bg_popup_preview_window_pane_cp01

0xb444,	// (0x0003921d) popup_phob_thumbnail2_window_g1_ParamLimits

0xb444,	// (0x0003921d) popup_phob_thumbnail2_window_g1

0xa085,	// (0x00037e5e) call2_cli_visual_pane

0x45e6,	// (0x000323bf) popup_call2_audio_conf_window_ParamLimits

0x45e6,	// (0x000323bf) popup_call2_audio_conf_window

0x4606,	// (0x000323df) popup_call2_audio_first_window_ParamLimits

0x4606,	// (0x000323df) popup_call2_audio_first_window

0x469c,	// (0x00032475) popup_call2_audio_in_window_ParamLimits

0x469c,	// (0x00032475) popup_call2_audio_in_window

0x46e4,	// (0x000324bd) popup_call2_audio_out_window_ParamLimits

0x46e4,	// (0x000324bd) popup_call2_audio_out_window

0x474e,	// (0x00032527) popup_call2_audio_second_window_ParamLimits

0x474e,	// (0x00032527) popup_call2_audio_second_window

0x47b4,	// (0x0003258d) popup_call2_audio_wait_window_ParamLimits

0x47b4,	// (0x0003258d) popup_call2_audio_wait_window

0xa085,	// (0x00037e5e) bg_popup_call2_act_pane_cp03

0xa2c2,	// (0x0003809b) list_conf_pane_cp

0xb450,	// (0x00039229) popup_call2_audio_conf_window_t1

0xb45e,	// (0x00039237) list_single_graphic_popup_conf2_pane_ParamLimits

0xb45e,	// (0x00039237) list_single_graphic_popup_conf2_pane

0xad1b,	// (0x00038af4) list_highlight_pane_cp04

0xb471,	// (0x0003924a) list_single_graphic_popup_conf2_pane_g1

0xad2c,	// (0x00038b05) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf50e,	// (0x0003d2e7) list_single_graphic_popup_conf2_pane_g

0xb47b,	// (0x00039254) list_single_graphic_popup_conf2_pane_t1

0xb489,	// (0x00039262) bg_popup_call2_act_pane_cp01_ParamLimits

0xb489,	// (0x00039262) bg_popup_call2_act_pane_cp01

0xb513,	// (0x000392ec) call_type_pane_cp05_ParamLimits

0xb513,	// (0x000392ec) call_type_pane_cp05

0xb567,	// (0x00039340) popup_call2_audio_second_window_g1_ParamLimits

0xb567,	// (0x00039340) popup_call2_audio_second_window_g1

0xb5bb,	// (0x00039394) popup_call2_audio_second_window_g2_ParamLimits

0xb5bb,	// (0x00039394) popup_call2_audio_second_window_g2

0x0002,

0xf513,	// (0x0003d2ec) popup_call2_audio_second_window_g_ParamLimits

0xf513,	// (0x0003d2ec) popup_call2_audio_second_window_g

0xb620,	// (0x000393f9) popup_call2_audio_second_window_t1_ParamLimits

0xb620,	// (0x000393f9) popup_call2_audio_second_window_t1

0xb6db,	// (0x000394b4) popup_call2_audio_second_window_t2_ParamLimits

0xb6db,	// (0x000394b4) popup_call2_audio_second_window_t2

0xb72e,	// (0x00039507) popup_call2_audio_second_window_t3_ParamLimits

0xb72e,	// (0x00039507) popup_call2_audio_second_window_t3

0x0003,

0xf51a,	// (0x0003d2f3) popup_call2_audio_second_window_t_ParamLimits

0xf51a,	// (0x0003d2f3) popup_call2_audio_second_window_t

0xa085,	// (0x00037e5e) bg_popup_call2_in_pane_cp02

0xa08f,	// (0x00037e68) call_type_pane_cp04

0xa097,	// (0x00037e70) popup_call2_audio_wait_window_g1

0xa09f,	// (0x00037e78) popup_call2_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0003cece) popup_call2_audio_wait_window_g

0xa0a7,	// (0x00037e80) popup_call2_audio_wait_window_t3

0xb821,	// (0x000395fa) bg_popup_call2_act_pane_ParamLimits

0xb821,	// (0x000395fa) bg_popup_call2_act_pane

0xb8e1,	// (0x000396ba) call_type_pane_cp03_ParamLimits

0xb8e1,	// (0x000396ba) call_type_pane_cp03

0xb945,	// (0x0003971e) popup_call2_audio_first_window_g1_ParamLimits

0xb945,	// (0x0003971e) popup_call2_audio_first_window_g1

0xb9b5,	// (0x0003978e) popup_call2_audio_first_window_g2_ParamLimits

0xb9b5,	// (0x0003978e) popup_call2_audio_first_window_g2

0xb0ab,	// (0x00038e84) popup_call2_audio_first_window_g3_ParamLimits

0xb0ab,	// (0x00038e84) popup_call2_audio_first_window_g3

0x0004,

0xf523,	// (0x0003d2fc) popup_call2_audio_first_window_g_ParamLimits

0xf523,	// (0x0003d2fc) popup_call2_audio_first_window_g

0xba93,	// (0x0003986c) popup_call2_audio_first_window_t1_ParamLimits

0xba93,	// (0x0003986c) popup_call2_audio_first_window_t1

0xbb96,	// (0x0003996f) popup_call2_audio_first_window_t4_ParamLimits

0xbb96,	// (0x0003996f) popup_call2_audio_first_window_t4

0xbc79,	// (0x00039a52) popup_call2_audio_first_window_t5_ParamLimits

0xbc79,	// (0x00039a52) popup_call2_audio_first_window_t5

0x0003,

0xf52e,	// (0x0003d307) popup_call2_audio_first_window_t_ParamLimits

0xf52e,	// (0x0003d307) popup_call2_audio_first_window_t

0xa2d8,	// (0x000380b1) bg_popup_call2_act_pane_g1

0xc320,	// (0x0003a0f9) popup_cale_lunar_info_window_t1

0xc32e,	// (0x0003a107) popup_cale_lunar_info_window_t2

0xc33c,	// (0x0003a115) popup_cale_lunar_info_window_t3

0xa085,	// (0x00037e5e) bg_popup_call2_bubble_pane

0xbd7a,	// (0x00039b53) bg_popup_call2_in_pane_cp01_ParamLimits

0xbd7a,	// (0x00039b53) bg_popup_call2_in_pane_cp01

0x9d61,	// (0x00037b3a) call_type_pane_cp02

0xbdc2,	// (0x00039b9b) popup_call2_audio_out_window_g1_ParamLimits

0xbdc2,	// (0x00039b9b) popup_call2_audio_out_window_g1

0xbdee,	// (0x00039bc7) popup_call2_audio_out_window_g2_ParamLimits

0xbdee,	// (0x00039bc7) popup_call2_audio_out_window_g2

0xbe16,	// (0x00039bef) popup_call2_audio_out_window_g3_ParamLimits

0xbe16,	// (0x00039bef) popup_call2_audio_out_window_g3

0x0003,

0xf537,	// (0x0003d310) popup_call2_audio_out_window_g_ParamLimits

0xf537,	// (0x0003d310) popup_call2_audio_out_window_g

0xbe51,	// (0x00039c2a) popup_call2_audio_out_window_t1_ParamLimits

0xbe51,	// (0x00039c2a) popup_call2_audio_out_window_t1

0xbeb0,	// (0x00039c89) popup_call2_audio_out_window_t2_ParamLimits

0xbeb0,	// (0x00039c89) popup_call2_audio_out_window_t2

0xbf04,	// (0x00039cdd) popup_call2_audio_out_window_t3_ParamLimits

0xbf04,	// (0x00039cdd) popup_call2_audio_out_window_t3

0xbf1a,	// (0x00039cf3) popup_call2_audio_out_window_t4_ParamLimits

0xbf1a,	// (0x00039cf3) popup_call2_audio_out_window_t4

0xbf30,	// (0x00039d09) popup_call2_audio_out_window_t5_ParamLimits

0xbf30,	// (0x00039d09) popup_call2_audio_out_window_t5

0x0005,

0xf540,	// (0x0003d319) popup_call2_audio_out_window_t_ParamLimits

0xf540,	// (0x0003d319) popup_call2_audio_out_window_t

0xbf94,	// (0x00039d6d) bg_popup_call2_in_pane_ParamLimits

0xbf94,	// (0x00039d6d) bg_popup_call2_in_pane

0xbff0,	// (0x00039dc9) popup_call2_audio_in_window_g1_ParamLimits

0xbff0,	// (0x00039dc9) popup_call2_audio_in_window_g1

0xc028,	// (0x00039e01) popup_call2_audio_in_window_g2_ParamLimits

0xc028,	// (0x00039e01) popup_call2_audio_in_window_g2

0xc060,	// (0x00039e39) popup_call2_audio_in_window_g3_ParamLimits

0xc060,	// (0x00039e39) popup_call2_audio_in_window_g3

0x0003,

0xf54d,	// (0x0003d326) popup_call2_audio_in_window_g_ParamLimits

0xf54d,	// (0x0003d326) popup_call2_audio_in_window_g

0xc0b8,	// (0x00039e91) popup_call2_audio_in_window_t1_ParamLimits

0xc0b8,	// (0x00039e91) popup_call2_audio_in_window_t1

0xc138,	// (0x00039f11) popup_call2_audio_in_window_t2_ParamLimits

0xc138,	// (0x00039f11) popup_call2_audio_in_window_t2

0xc1b8,	// (0x00039f91) popup_call2_audio_in_window_t3_ParamLimits

0xc1b8,	// (0x00039f91) popup_call2_audio_in_window_t3

0xc1d2,	// (0x00039fab) popup_call2_audio_in_window_t4_ParamLimits

0xc1d2,	// (0x00039fab) popup_call2_audio_in_window_t4

0xc1e4,	// (0x00039fbd) popup_call2_audio_in_window_t5_ParamLimits

0xc1e4,	// (0x00039fbd) popup_call2_audio_in_window_t5

0xc1f6,	// (0x00039fcf) popup_call2_audio_in_window_t6_ParamLimits

0xc1f6,	// (0x00039fcf) popup_call2_audio_in_window_t6

0x0005,

0xf556,	// (0x0003d32f) popup_call2_audio_in_window_t_ParamLimits

0xf556,	// (0x0003d32f) popup_call2_audio_in_window_t

0xa2d8,	// (0x000380b1) bg_popup_call2_in_pane_g1

0xc34a,	// (0x0003a123) popup_cale_lunar_info_window_t4

0x0003,

0xf5d1,	// (0x0003d3aa) popup_cale_lunar_info_window_t

0xa2e0,	// (0x000380b9) bg_popup_call2_rect_pane_ParamLimits

0xa2e0,	// (0x000380b9) bg_popup_call2_rect_pane

0xa085,	// (0x00037e5e) call2_cli_visual_graphic_pane

0xa085,	// (0x00037e5e) call2_cli_visual_text_pane

0x4c1b,	// (0x000329f4) smil_status_volume_pane_g3

0x0002,

0xa406,	// (0x000381df) call2_cli_visual_graphic_pane_g1

0xa406,	// (0x000381df) call2_cli_visual_graphic_pane_g2

0xa406,	// (0x000381df) call2_cli_visual_graphic_pane_g3

0x0002,

0xf563,	// (0x0003d33c) call2_cli_visual_graphic_pane_g

0xc208,	// (0x00039fe1) bg_popup_call2_rect_pane_g1

0xa49b,	// (0x00038274) bg_popup_call2_rect_pane_g2

0xc210,	// (0x00039fe9) bg_popup_call2_rect_pane_g3

0xc218,	// (0x00039ff1) bg_popup_call2_rect_pane_g4

0xc220,	// (0x00039ff9) bg_popup_call2_rect_pane_g5

0xc228,	// (0x0003a001) bg_popup_call2_rect_pane_g6

0xc230,	// (0x0003a009) bg_popup_call2_rect_pane_g7

0xc238,	// (0x0003a011) bg_popup_call2_rect_pane_g8

0xc240,	// (0x0003a019) bg_popup_call2_rect_pane_g9

0x0008,

0xf56a,	// (0x0003d343) bg_popup_call2_rect_pane_g

0xc248,	// (0x0003a021) bg_popup_call2_bubble_pane_g1

0xc250,	// (0x0003a029) bg_popup_call2_bubble_pane_g2

0xc258,	// (0x0003a031) bg_popup_call2_bubble_pane_g3

0xc260,	// (0x0003a039) bg_popup_call2_bubble_pane_g4

0xc268,	// (0x0003a041) bg_popup_call2_bubble_pane_g5

0xc270,	// (0x0003a049) bg_popup_call2_bubble_pane_g6

0xc278,	// (0x0003a051) bg_popup_call2_bubble_pane_g7

0xc280,	// (0x0003a059) bg_popup_call2_bubble_pane_g8

0xc288,	// (0x0003a061) bg_popup_call2_bubble_pane_g9

0x0008,

0xf57d,	// (0x0003d356) bg_popup_call2_bubble_pane_g

0x2098,	// (0x0002fe71) aid_cale_week_size_cell_pane

0x265b,	// (0x00030434) aid_cams_cif_uncrop_pane_ParamLimits

0x265b,	// (0x00030434) aid_cams_cif_uncrop_pane

0x2810,	// (0x000305e9) aid_cams_size_cell_ParamLimits

0x2810,	// (0x000305e9) aid_cams_size_cell

0x2824,	// (0x000305fd) grid_cams_pane_ParamLimits

0x283e,	// (0x00030617) linegrid_cams_pane_ParamLimits

0x2a3b,	// (0x00030814) call_video_pane_t1

0x2a59,	// (0x00030832) call_video_pane_t2

0x0001,

0xf26a,	// (0x0003d043) call_video_pane_t

0x2e7f,	// (0x00030c58) aid_cale_month_size_cell_pane_ParamLimits

0x2e7f,	// (0x00030c58) aid_cale_month_size_cell_pane

0xf61a,	// (0x0003d3f3) smil_status_volume_pane_g

0x4c28,	// (0x00032a01) volume_smil_pane_ParamLimits

0x1bf1,	// (0x0002f9ca) aid_popup2_width_pane

0x1fd4,	// (0x0002fdad) cell_qdial_pane_g4_ParamLimits

0x1fd4,	// (0x0002fdad) cell_qdial_pane_g4

0x3bd1,	// (0x000319aa) aid_blid_cardinal_pane_ParamLimits

0x3bdd,	// (0x000319b6) aid_blid_destination_pane_ParamLimits

0x3bdd,	// (0x000319b6) aid_blid_destination_pane

0xa2e0,	// (0x000380b9) bg_popup_call_poc_act_pane_ParamLimits

0xa2e0,	// (0x000380b9) bg_popup_call_poc_act_pane

0xa2e0,	// (0x000380b9) bg_popup_call_poc_inact_pane_ParamLimits

0xa2e0,	// (0x000380b9) bg_popup_call_poc_inact_pane

0xc290,	// (0x0003a069) bg_popup_call_poc_act_pane_g1

0xc298,	// (0x0003a071) bg_popup_call_poc_act_pane_g2

0xc2a0,	// (0x0003a079) bg_popup_call_poc_act_pane_g3

0xc260,	// (0x0003a039) bg_popup_call_poc_act_pane_g4

0xc268,	// (0x0003a041) bg_popup_call_poc_act_pane_g5

0xc2a8,	// (0x0003a081) bg_popup_call_poc_act_pane_g6

0xc278,	// (0x0003a051) bg_popup_call_poc_act_pane_g7

0xc2b0,	// (0x0003a089) bg_popup_call_poc_act_pane_g8

0xa085,	// (0x00037e5e) main_usb_pane

0x4af6,	// (0x000328cf) popup_cale_lunar_info_window

0x2d25,	// (0x00030afe) im_reading_pane_t1_ParamLimits

0xa6ac,	// (0x00038485) list_im_pane_ParamLimits

0xa6bd,	// (0x00038496) scroll_pane_cp07_ParamLimits

0xa085,	// (0x00037e5e) grid_highlight_pane_cp012

0xa2e0,	// (0x000380b9) mup_scale_pane_ParamLimits

0xb197,	// (0x00038f70) main_usb_pane_g1_ParamLimits

0xb197,	// (0x00038f70) main_usb_pane_g1

0x4811,	// (0x000325ea) main_usb_pane_g2_ParamLimits

0x4811,	// (0x000325ea) main_usb_pane_g2

0x0001,

0xf5ba,	// (0x0003d393) main_usb_pane_g_ParamLimits

0xf5ba,	// (0x0003d393) main_usb_pane_g

0x4827,	// (0x00032600) main_usb_pane_t1_ParamLimits

0x4827,	// (0x00032600) main_usb_pane_t1

0x4839,	// (0x00032612) main_usb_pane_t2_ParamLimits

0x4839,	// (0x00032612) main_usb_pane_t2

0x484b,	// (0x00032624) main_usb_pane_t3_ParamLimits

0x484b,	// (0x00032624) main_usb_pane_t3

0x485d,	// (0x00032636) main_usb_pane_t4_ParamLimits

0x485d,	// (0x00032636) main_usb_pane_t4

0x486f,	// (0x00032648) main_usb_pane_t5_ParamLimits

0x486f,	// (0x00032648) main_usb_pane_t5

0x4881,	// (0x0003265a) main_usb_pane_t6_ParamLimits

0x4881,	// (0x0003265a) main_usb_pane_t6

0x0005,

0xf5bf,	// (0x0003d398) main_usb_pane_t_ParamLimits

0x3b80,	// (0x00031959) aid_text_placing

0x3b89,	// (0x00031962) main_location2_pane_t1_ParamLimits

0x3b9b,	// (0x00031974) main_location2_pane_t2_ParamLimits

0x3bad,	// (0x00031986) main_location2_pane_t3_ParamLimits

0x3bbf,	// (0x00031998) main_location2_pane_t4_ParamLimits

0x3bbf,	// (0x00031998) main_location2_pane_t4

0xf3cb,	// (0x0003d1a4) main_location2_pane_t_ParamLimits

0xa31c,	// (0x000380f5) find_pinb_pane_g2_ParamLimits

0xa31c,	// (0x000380f5) find_pinb_pane_g2

0x0001,

0xf11b,	// (0x0003cef4) find_pinb_pane_g_ParamLimits

0xf11b,	// (0x0003cef4) find_pinb_pane_g

0xa328,	// (0x00038101) find_pinb_pane_t1_ParamLimits

0xa33a,	// (0x00038113) find_pinb_pane_t2_ParamLimits

0xf120,	// (0x0003cef9) find_pinb_pane_t_ParamLimits

0xa085,	// (0x00037e5e) main_call3_pane

0x3366,	// (0x0003113f) cale_month_day_heading_pane_t1_ParamLimits

0x33a8,	// (0x00031181) cale_month_day_heading_pane_t2_ParamLimits

0x33dd,	// (0x000311b6) cale_month_day_heading_pane_t3_ParamLimits

0x3412,	// (0x000311eb) cale_month_day_heading_pane_t4_ParamLimits

0x344f,	// (0x00031228) cale_month_day_heading_pane_t5_ParamLimits

0x3494,	// (0x0003126d) cale_month_day_heading_pane_t6_ParamLimits

0x34d9,	// (0x000312b2) cale_month_day_heading_pane_t7_ParamLimits

0xf2a2,	// (0x0003d07b) cale_month_day_heading_pane_t_ParamLimits

0xa915,	// (0x000386ee) smil_status_volume_pane

0x430a,	// (0x000320e3) postcard_address_pane_ParamLimits

0x430a,	// (0x000320e3) postcard_address_pane

0x431c,	// (0x000320f5) postcard_message_pane_ParamLimits

0x431c,	// (0x000320f5) postcard_message_pane

0x47ee,	// (0x000325c7) call2_cli_visual_pane_t1_ParamLimits

0x47ee,	// (0x000325c7) call2_cli_visual_pane_t1

0x4ddd,	// (0x00032bb6) postcard_message_pane_t1_ParamLimits

0x4ddd,	// (0x00032bb6) postcard_message_pane_t1

0x4dc6,	// (0x00032b9f) postcard_address_pane_t1_ParamLimits

0x4dc6,	// (0x00032b9f) postcard_address_pane_t1

0x4db2,	// (0x00032b8b) popup_call3_audio_in_window_ParamLimits

0x4db2,	// (0x00032b8b) popup_call3_audio_in_window

0x4c3d,	// (0x00032a16) bg_popup_call3_in_pane_ParamLimits

0x4c3d,	// (0x00032a16) bg_popup_call3_in_pane

0x4cb3,	// (0x00032a8c) popup_call3_audio_in_window_g1_ParamLimits

0x4cb3,	// (0x00032a8c) popup_call3_audio_in_window_g1

0x4cd3,	// (0x00032aac) popup_call3_audio_in_window_g2_ParamLimits

0x4cd3,	// (0x00032aac) popup_call3_audio_in_window_g2

0x4cf3,	// (0x00032acc) popup_call3_audio_in_window_g3_ParamLimits

0x4cf3,	// (0x00032acc) popup_call3_audio_in_window_g3

0x0003,

0xf621,	// (0x0003d3fa) popup_call3_audio_in_window_g_ParamLimits

0xf621,	// (0x0003d3fa) popup_call3_audio_in_window_g

0x4d24,	// (0x00032afd) popup_call3_audio_in_window_t1_ParamLimits

0x4d24,	// (0x00032afd) popup_call3_audio_in_window_t1

0x4d62,	// (0x00032b3b) popup_call3_audio_in_window_t2_ParamLimits

0x4d62,	// (0x00032b3b) popup_call3_audio_in_window_t2

0x4da0,	// (0x00032b79) popup_call3_audio_in_window_t3_ParamLimits

0x4da0,	// (0x00032b79) popup_call3_audio_in_window_t3

0x0002,

0xf62a,	// (0x0003d403) popup_call3_audio_in_window_t_ParamLimits

0xf62a,	// (0x0003d403) popup_call3_audio_in_window_t

0xa5ab,	// (0x00038384) bg_popup_call3_rect_pane

0xc208,	// (0x00039fe1) bg_popup_call3_rect_pane_g1

0xa49b,	// (0x00038274) bg_popup_call3_rect_pane_g2

0xc210,	// (0x00039fe9) bg_popup_call3_rect_pane_g3

0xc218,	// (0x00039ff1) bg_popup_call3_rect_pane_g4

0xc220,	// (0x00039ff9) bg_popup_call3_rect_pane_g5

0xc228,	// (0x0003a001) bg_popup_call3_rect_pane_g6

0xc230,	// (0x0003a009) bg_popup_call3_rect_pane_g7

0x3ec9,	// (0x00031ca2) mup_visualizer_osc_pane

0xb0b9,	// (0x00038e92) mup_visualizer_spec_pane

0x4c6d,	// (0x00032a46) call3_video_qcif_pane_ParamLimits

0x4c6d,	// (0x00032a46) call3_video_qcif_pane

0x4c80,	// (0x00032a59) call3_video_qcif_uncrop_pane_ParamLimits

0x4c80,	// (0x00032a59) call3_video_qcif_uncrop_pane

0x4c8e,	// (0x00032a67) call3_video_subqcif_pane_ParamLimits

0x4c8e,	// (0x00032a67) call3_video_subqcif_pane

0x4ca2,	// (0x00032a7b) call3_video_subqcif_uncrop_pane_ParamLimits

0x4ca2,	// (0x00032a7b) call3_video_subqcif_uncrop_pane

0x4d13,	// (0x00032aec) popup_call3_audio_in_window_g4_ParamLimits

0x4d13,	// (0x00032aec) popup_call3_audio_in_window_g4

0x4c0a,	// (0x000329e3) mup_spec_half_pane

0x4c13,	// (0x000329ec) mup_spec_half_pane_cp

0xc4ad,	// (0x0003a286) mup_osc_middle_pane

0xc4b6,	// (0x0003a28f) mup_visualizer_osc_pane_g1

0x4bea,	// (0x000329c3) mup_spec_bar_pane_ParamLimits

0x4bea,	// (0x000329c3) mup_spec_bar_pane

0xc49a,	// (0x0003a273) mup_spec_bar_pane_g1

0xc4a4,	// (0x0003a27d) mup_spec_bar_pane_g2

0x0001,

0xf615,	// (0x0003d3ee) mup_spec_bar_pane_g

0x2098,	// (0x0002fe71) aid_cale_week_size_cell_pane_ParamLimits

0x20b2,	// (0x0002fe8b) bg_cale_heading_pane_ParamLimits

0xa504,	// (0x000382dd) bg_cale_pane_cp01_ParamLimits

0x20ca,	// (0x0002fea3) cale_week_corner_pane_ParamLimits

0x20e9,	// (0x0002fec2) cale_week_day_heading_pane_ParamLimits

0x2106,	// (0x0002fedf) cale_week_scroll_pane_g1_ParamLimits

0x2119,	// (0x0002fef2) cale_week_scroll_pane_g2_ParamLimits

0x2131,	// (0x0002ff0a) cale_week_scroll_pane_g3_ParamLimits

0x2149,	// (0x0002ff22) cale_week_scroll_pane_g4_ParamLimits

0x2161,	// (0x0002ff3a) cale_week_scroll_pane_g5_ParamLimits

0x2181,	// (0x0002ff5a) cale_week_scroll_pane_g6_ParamLimits

0x21a1,	// (0x0002ff7a) cale_week_scroll_pane_g7_ParamLimits

0x21c1,	// (0x0002ff9a) cale_week_scroll_pane_g8_ParamLimits

0x21e5,	// (0x0002ffbe) cale_week_scroll_pane_g9_ParamLimits

0x21fd,	// (0x0002ffd6) cale_week_scroll_pane_g10_ParamLimits

0x2215,	// (0x0002ffee) cale_week_scroll_pane_g11_ParamLimits

0x222d,	// (0x00030006) cale_week_scroll_pane_g12_ParamLimits

0x2245,	// (0x0003001e) cale_week_scroll_pane_g13_ParamLimits

0x2245,	// (0x0003001e) cale_week_scroll_pane_g14_ParamLimits

0x2245,	// (0x0003001e) cale_week_scroll_pane_g15_ParamLimits

0xf1ac,	// (0x0003cf85) cale_week_scroll_pane_g_ParamLimits

0x2281,	// (0x0003005a) cale_week_time_pane_ParamLimits

0x22a5,	// (0x0003007e) grid_cale_week_pane_ParamLimits

0xa521,	// (0x000382fa) listscroll_cale_week_pane_t1

0xa533,	// (0x0003830c) scroll_pane_cp08_ParamLimits

0x2edf,	// (0x00030cb8) cale_month_corner_pane_ParamLimits

0xa8eb,	// (0x000386c4) cale_month_pane_t1

0x32f9,	// (0x000310d2) cale_month_week_pane_ParamLimits

0x3942,	// (0x0003171b) popup_call_status_window_g1_ParamLimits

0x3956,	// (0x0003172f) popup_call_status_window_g2_ParamLimits

0x396a,	// (0x00031743) popup_call_status_window_g3_ParamLimits

0xf352,	// (0x0003d12b) popup_call_status_window_g_ParamLimits

0xac9b,	// (0x00038a74) aid_call2_pane

0x4140,	// (0x00031f19) msg_header_pane_g1

0x430a,	// (0x000320e3) postcard_address2_pane_ParamLimits

0x430a,	// (0x000320e3) postcard_address2_pane

0x431c,	// (0x000320f5) postcard_message2_pane_ParamLimits

0x431c,	// (0x000320f5) postcard_message2_pane

0x4b9a,	// (0x00032973) message2_row_pane_ParamLimits

0x4b9a,	// (0x00032973) message2_row_pane

0x4bb7,	// (0x00032990) address2_row_pane_ParamLimits

0x4bb7,	// (0x00032990) address2_row_pane

0xc468,	// (0x0003a241) postcard_message2_row_pane_g1

0xc470,	// (0x0003a249) postcard_message2_row_pane_t1

0xc468,	// (0x0003a241) address2_row_pane_g1

0xc470,	// (0x0003a249) address2_row_pane_t1

0x2509,	// (0x000302e2) aid_size_cell_vorec

0xa085,	// (0x00037e5e) main_rss_pane

0x4bca,	// (0x000329a3) rss_list_single_pane_ParamLimits

0x4bca,	// (0x000329a3) rss_list_single_pane

0xc47e,	// (0x0003a257) rss_list_single_pane_t1

0xc48c,	// (0x0003a265) rss_list_single_pane_t2

0x0001,

0xf610,	// (0x0003d3e9) rss_list_single_pane_t

0xa085,	// (0x00037e5e) main_camera2_pane

0xa085,	// (0x00037e5e) main_video2_pane

0x0ad5,	// (0x0002e8ae) cams_zoom_pane_cp2_ParamLimits

0x0ad5,	// (0x0002e8ae) cams_zoom_pane_cp2

0x0af5,	// (0x0002e8ce) image2_vga_pane_ParamLimits

0x0af5,	// (0x0002e8ce) image2_vga_pane

0x0b46,	// (0x0002e91f) main_camera2_pane_g1_ParamLimits

0x0b46,	// (0x0002e91f) main_camera2_pane_g1

0x0b66,	// (0x0002e93f) main_camera2_pane_g2_ParamLimits

0x0b66,	// (0x0002e93f) main_camera2_pane_g2

0x0b86,	// (0x0002e95f) main_camera2_pane_g3_ParamLimits

0x0b86,	// (0x0002e95f) main_camera2_pane_g3

0x0ba6,	// (0x0002e97f) main_camera2_pane_g4_ParamLimits

0x0ba6,	// (0x0002e97f) main_camera2_pane_g4

0x0bc6,	// (0x0002e99f) main_camera2_pane_g5_ParamLimits

0x0bc6,	// (0x0002e99f) main_camera2_pane_g5

0x0be6,	// (0x0002e9bf) main_camera2_pane_g6_ParamLimits

0x0be6,	// (0x0002e9bf) main_camera2_pane_g6

0x0c06,	// (0x0002e9df) main_camera2_pane_g7_ParamLimits

0x0c06,	// (0x0002e9df) main_camera2_pane_g7

0x0c26,	// (0x0002e9ff) main_camera2_pane_g8_ParamLimits

0x0c26,	// (0x0002e9ff) main_camera2_pane_g8

0x0008,

0xf631,	// (0x0003d40a) main_camera2_pane_g_ParamLimits

0xf631,	// (0x0003d40a) main_camera2_pane_g

0x0c66,	// (0x0002ea3f) main_camera2_pane_t1_ParamLimits

0x0c66,	// (0x0002ea3f) main_camera2_pane_t1

0x0c9b,	// (0x0002ea74) main_camera2_pane_t2_ParamLimits

0x0c9b,	// (0x0002ea74) main_camera2_pane_t2

0x0cc1,	// (0x0002ea9a) main_camera2_pane_t3_ParamLimits

0x0cc1,	// (0x0002ea9a) main_camera2_pane_t3

0x0d1f,	// (0x0002eaf8) main_camera2_pane_t4_ParamLimits

0x0d1f,	// (0x0002eaf8) main_camera2_pane_t4

0x0006,

0xf644,	// (0x0003d41d) main_camera2_pane_t_ParamLimits

0xf644,	// (0x0003d41d) main_camera2_pane_t

0x0db1,	// (0x0002eb8a) cams_zoom_pane_cp4_ParamLimits

0x0db1,	// (0x0002eb8a) cams_zoom_pane_cp4

0x0dc7,	// (0x0002eba0) image2_cif_pane_ParamLimits

0x0dc7,	// (0x0002eba0) image2_cif_pane

0x0df2,	// (0x0002ebcb) image2_subqcif_pane_ParamLimits

0x0df2,	// (0x0002ebcb) image2_subqcif_pane

0x0e0c,	// (0x0002ebe5) main_video2_pane_g1_ParamLimits

0x0e0c,	// (0x0002ebe5) main_video2_pane_g1

0x0e26,	// (0x0002ebff) main_video2_pane_g2_ParamLimits

0x0e26,	// (0x0002ebff) main_video2_pane_g2

0x0e3c,	// (0x0002ec15) main_video2_pane_g3_ParamLimits

0x0e3c,	// (0x0002ec15) main_video2_pane_g3

0x0e52,	// (0x0002ec2b) main_video2_pane_g4_ParamLimits

0x0e52,	// (0x0002ec2b) main_video2_pane_g4

0x0e68,	// (0x0002ec41) main_video2_pane_g5_ParamLimits

0x0e68,	// (0x0002ec41) main_video2_pane_g5

0x0e7e,	// (0x0002ec57) main_video2_pane_g6_ParamLimits

0x0e7e,	// (0x0002ec57) main_video2_pane_g6

0x0005,

0xf653,	// (0x0003d42c) main_video2_pane_g_ParamLimits

0xf653,	// (0x0003d42c) main_video2_pane_g

0x0e98,	// (0x0002ec71) main_video2_pane_t1_ParamLimits

0x0e98,	// (0x0002ec71) main_video2_pane_t1

0x0ebc,	// (0x0002ec95) main_video2_pane_t2_ParamLimits

0x0ebc,	// (0x0002ec95) main_video2_pane_t2

0x0f0a,	// (0x0002ece3) main_video2_pane_t3_ParamLimits

0x0f0a,	// (0x0002ece3) main_video2_pane_t3

0x0002,

0xf660,	// (0x0003d439) main_video2_pane_t_ParamLimits

0xf660,	// (0x0003d439) main_video2_pane_t

0x493c,	// (0x00032715) call_muted_g2

0x0001,

0xf602,	// (0x0003d3db) call_muted_g

0xa085,	// (0x00037e5e) main_mup2_pane

0x4e28,	// (0x00032c01) main_mup2_pane_g1_ParamLimits

0x4e28,	// (0x00032c01) main_mup2_pane_g1

0x4e34,	// (0x00032c0d) main_mup2_pane_g2_ParamLimits

0x4e34,	// (0x00032c0d) main_mup2_pane_g2

0x50a3,	// (0x00032e7c) main_mup_pane_g13_cp1

0x50ab,	// (0x00032e84) mup_volume_pane_cp1

0x4e50,	// (0x00032c29) main_mup2_pane_g4_ParamLimits

0x4e50,	// (0x00032c29) main_mup2_pane_g4

0x4e62,	// (0x00032c3b) main_mup2_pane_g5_ParamLimits

0x4e62,	// (0x00032c3b) main_mup2_pane_g5

0x4e74,	// (0x00032c4d) main_mup2_pane_g6_ParamLimits

0x4e74,	// (0x00032c4d) main_mup2_pane_g6

0x4e86,	// (0x00032c5f) main_mup2_pane_g7_ParamLimits

0x4e86,	// (0x00032c5f) main_mup2_pane_g7

0x0006,

0xf667,	// (0x0003d440) main_mup2_pane_g_ParamLimits

0xf667,	// (0x0003d440) main_mup2_pane_g

0x4e9e,	// (0x00032c77) main_mup2_pane_t1_ParamLimits

0x4e9e,	// (0x00032c77) main_mup2_pane_t1

0x4eb4,	// (0x00032c8d) main_mup2_pane_t2_ParamLimits

0x4eb4,	// (0x00032c8d) main_mup2_pane_t2

0x4eca,	// (0x00032ca3) main_mup2_pane_t3_ParamLimits

0x4eca,	// (0x00032ca3) main_mup2_pane_t3

0x4ee0,	// (0x00032cb9) main_mup2_pane_t4_ParamLimits

0x4ee0,	// (0x00032cb9) main_mup2_pane_t4

0x4ef8,	// (0x00032cd1) main_mup2_pane_t5_ParamLimits

0x4ef8,	// (0x00032cd1) main_mup2_pane_t5

0x4f10,	// (0x00032ce9) main_mup2_pane_t6_ParamLimits

0x4f10,	// (0x00032ce9) main_mup2_pane_t6

0x0005,

0xf676,	// (0x0003d44f) main_mup2_pane_t_ParamLimits

0xf676,	// (0x0003d44f) main_mup2_pane_t

0x4f40,	// (0x00032d19) mup2_visualizer_pane_ParamLimits

0x4f40,	// (0x00032d19) mup2_visualizer_pane

0x4f6e,	// (0x00032d47) mup_progress_pane_cp_ParamLimits

0x4f6e,	// (0x00032d47) mup_progress_pane_cp

0x508e,	// (0x00032e67) mup_volume_pane_cp_ParamLimits

0x508e,	// (0x00032e67) mup_volume_pane_cp

0x4f82,	// (0x00032d5b) mup2_visualizer_pane_g1_ParamLimits

0x4f82,	// (0x00032d5b) mup2_visualizer_pane_g1

0xc4ed,	// (0x0003a2c6) mup2_visualizer_pane_g2_ParamLimits

0xc4ed,	// (0x0003a2c6) mup2_visualizer_pane_g2

0x4f99,	// (0x00032d72) mup2_visualizer_pane_g3_ParamLimits

0x4f99,	// (0x00032d72) mup2_visualizer_pane_g3

0x0002,

0xf683,	// (0x0003d45c) mup2_visualizer_pane_g_ParamLimits

0xf683,	// (0x0003d45c) mup2_visualizer_pane_g

0xb2e0,	// (0x000390b9) aid_size_cell_fmradio

0x07c3,	// (0x0002e59c) aid_height_parent_landcape

0xa73b,	// (0x00038514) wml_content_pane_cp

0xa743,	// (0x0003851c) wml_tabs_pane

0xa74c,	// (0x00038525) popup_wml_miniature_window

0xa754,	// (0x0003852d) scroll_pane_cp021

0xa768,	// (0x00038541) wml_content_pane_comp8

0xa085,	// (0x00037e5e) bg_popup_sub_pane_cp05

0xc50b,	// (0x0003a2e4) popup_wml_miniature_window_g1

0xc513,	// (0x0003a2ec) wml_miniature_view_pane

0x4fa5,	// (0x00032d7e) aid_size_wml_view

0x4fad,	// (0x00032d86) wml_miniature_view_pane_g1

0x4fb6,	// (0x00032d8f) wml_miniature_view_pane_g2

0x4fbf,	// (0x00032d98) wml_miniature_view_pane_g3

0x4fc7,	// (0x00032da0) wml_miniature_view_pane_g4

0x4fcf,	// (0x00032da8) wml_miniature_view_pane_g5

0x4fd7,	// (0x00032db0) wml_miniature_view_pane_g6

0x4fdf,	// (0x00032db8) wml_miniature_view_pane_g7

0x4fe7,	// (0x00032dc0) wml_miniature_view_pane_g8

0x0007,

0xf68a,	// (0x0003d463) wml_miniature_view_pane_g

0xc51b,	// (0x0003a2f4) background_graphic_ParamLimits

0xc51b,	// (0x0003a2f4) background_graphic

0xc527,	// (0x0003a300) wml_tabs_2_pane

0xc530,	// (0x0003a309) wml_tabs_3_pane_ParamLimits

0xc530,	// (0x0003a309) wml_tabs_3_pane

0xc542,	// (0x0003a31b) wml_tabs_4_pane_ParamLimits

0xc542,	// (0x0003a31b) wml_tabs_4_pane

0xc558,	// (0x0003a331) wml_tabs_5_pane_ParamLimits

0xc558,	// (0x0003a331) wml_tabs_5_pane

0xc572,	// (0x0003a34b) wml_tabs_pane_g2_ParamLimits

0xc572,	// (0x0003a34b) wml_tabs_pane_g2

0xc586,	// (0x0003a35f) wml_tabs_pane_g3_ParamLimits

0xc586,	// (0x0003a35f) wml_tabs_pane_g3

0x4fef,	// (0x00032dc8) wml_tabs_2_active_pane_ParamLimits

0x4fef,	// (0x00032dc8) wml_tabs_2_active_pane

0x5003,	// (0x00032ddc) wml_tabs_2_passive_pane_ParamLimits

0x5003,	// (0x00032ddc) wml_tabs_2_passive_pane

0x5017,	// (0x00032df0) wml_tabs_3_active_pane_cp_ParamLimits

0x5017,	// (0x00032df0) wml_tabs_3_active_pane_cp

0x502c,	// (0x00032e05) wml_tabs_3_passive_pane_ParamLimits

0x502c,	// (0x00032e05) wml_tabs_3_passive_pane

0x503f,	// (0x00032e18) wml_tabs_3_passive_pane_cp_ParamLimits

0x503f,	// (0x00032e18) wml_tabs_3_passive_pane_cp

0x5056,	// (0x00032e2f) tabs_4_active_pane

0x505e,	// (0x00032e37) tabs_4_passive_pane

0x5068,	// (0x00032e41) tabs_4_passive_pane_cp

0x5070,	// (0x00032e49) tabs_4_passive_pane_cp2

0x4809,	// (0x000325e2) aid_height_text

0x3e9b,	// (0x00031c74) mup_volume_cont_pane_ParamLimits

0x3e9b,	// (0x00031c74) mup_volume_cont_pane

0x1d6b,	// (0x0002fb44) aid_size_cell_pinb

0x1d75,	// (0x0002fb4e) aid_size_list_pinb

0x4f5a,	// (0x00032d33) mup2_volume_cont_pane_ParamLimits

0x4f5a,	// (0x00032d33) mup2_volume_cont_pane

0x507a,	// (0x00032e53) mup2_volume_cont_pane_g1_ParamLimits

0x507a,	// (0x00032e53) mup2_volume_cont_pane_g1

0x0312,	// (0x0002e0eb) aid_size_cell_touch_ParamLimits

0x0312,	// (0x0002e0eb) aid_size_cell_touch

0x04fa,	// (0x0002e2d3) touch_pane_ParamLimits

0x04fa,	// (0x0002e2d3) touch_pane

0x1ca2,	// (0x0002fa7b) main_rss2_pane

0xc5a3,	// (0x0003a37c) listscroll_rss2_pane

0xc5ac,	// (0x0003a385) rss2_navigation_pane

0xc5b4,	// (0x0003a38d) list_rss2_pane

0xadc0,	// (0x00038b99) scroll_pane_cp22

0xc5bc,	// (0x0003a395) rss2_navigation_pane_g1

0xc5c5,	// (0x0003a39e) rss2_navigation_pane_g2

0xc5cd,	// (0x0003a3a6) rss2_navigation_pane_g3

0x0002,

0xf69b,	// (0x0003d474) rss2_navigation_pane_g

0xc5d5,	// (0x0003a3ae) rss2_navigation_pane_t1

0x50b3,	// (0x00032e8c) rss2_list_single_pane_ParamLimits

0x50b3,	// (0x00032e8c) rss2_list_single_pane

0xc5e3,	// (0x0003a3bc) rss2_list_single_pane_t2

0xc5f1,	// (0x0003a3ca) rss2_list_single_pane_t3_ParamLimits

0xc5f1,	// (0x0003a3ca) rss2_list_single_pane_t3

0xc60e,	// (0x0003a3e7) rss2_list_single_pane_t4

0x372b,	// (0x00031504) smil_status_pane_g1

0x1c88,	// (0x0002fa61) main_image2_pane_ParamLimits

0x1c88,	// (0x0002fa61) main_image2_pane

0x0c46,	// (0x0002ea1f) main_camera2_pane_g9_ParamLimits

0x0c46,	// (0x0002ea1f) main_camera2_pane_g9

0x0d74,	// (0x0002eb4d) main_camera2_pane_t5_ParamLimits

0x0d74,	// (0x0002eb4d) main_camera2_pane_t5

0x4df8,	// (0x00032bd1) main_camera2_pane_t6_ParamLimits

0x4df8,	// (0x00032bd1) main_camera2_pane_t6

0x50c9,	// (0x00032ea2) main_image2_pane_g1_ParamLimits

0x50c9,	// (0x00032ea2) main_image2_pane_g1

0x4544,	// (0x0003231d) smil2_video_pane_ParamLimits

0x4544,	// (0x0003231d) smil2_video_pane

0x1bfd,	// (0x0002f9d6) aid_zoom_text_primary_cp

0x1c7e,	// (0x0002fa57) popup_preview_fixed_window

0xa6a4,	// (0x0003847d) im_reading_pane_g1

0x0abd,	// (0x0002e896) cams2_bc_adjust_pane_cp_ParamLimits

0x0abd,	// (0x0002e896) cams2_bc_adjust_pane_cp

0x0da3,	// (0x0002eb7c) cams2_bc_adjust_pane_ParamLimits

0x0da3,	// (0x0002eb7c) cams2_bc_adjust_pane

0xd650,	// (0x0003b429) cams2_bc_adjust_pane_g1

0x50df,	// (0x00032eb8) cams2_slider_pane

0x50e8,	// (0x00032ec1) cams2_slider_pane_g1

0x50f1,	// (0x00032eca) cams2_slider_pane_g2

0x0006,

0xf6a2,	// (0x0003d47b) cams2_slider_pane_g

0x056a,	// (0x0002e343) calc_display_pane_ParamLimits

0x058f,	// (0x0002e368) calc_paper_pane_ParamLimits

0x05b2,	// (0x0002e38b) grid_calc_pane_ParamLimits

0x39cb,	// (0x000317a4) popup_clock_digital_window_t1_ParamLimits

0xb27d,	// (0x00039056) main_image_pane_t1

0x054c,	// (0x0002e325) aid_size_cell_calc_ParamLimits

0x054c,	// (0x0002e325) aid_size_cell_calc

0x081b,	// (0x0002e5f4) popup_blid_sat_info2_window_ParamLimits

0x081b,	// (0x0002e5f4) popup_blid_sat_info2_window

0xc624,	// (0x0003a3fd) aid_size_cell_blid

0xc62c,	// (0x0003a405) bg_popup_window_pane_cp07

0xc64f,	// (0x0003a428) grid_popup_blid_pane

0xc659,	// (0x0003a432) heading_pane_cp05_ParamLimits

0xc659,	// (0x0003a432) heading_pane_cp05

0xc723,	// (0x0003a4fc) cell_popup_blid_pane_ParamLimits

0xc723,	// (0x0003a4fc) cell_popup_blid_pane

0xc747,	// (0x0003a520) cell_popup_blid_pane_g1

0xc74f,	// (0x0003a528) cell_popup_blid_pane_t1

0x4f2a,	// (0x00032d03) mup2_indicator_pane_ParamLimits

0x4f2a,	// (0x00032d03) mup2_indicator_pane

0xa5ab,	// (0x00038384) mup2_visualizer_osc_pane

0xc4f9,	// (0x0003a2d2) mup2_visualizer_spec_pane_ParamLimits

0xc4f9,	// (0x0003a2d2) mup2_visualizer_spec_pane

0x510b,	// (0x00032ee4) mup2_spec_half_pane

0x5114,	// (0x00032eed) mup2_spec_half_pane_cp

0x511c,	// (0x00032ef5) mup2_spec_bar_pane_ParamLimits

0x511c,	// (0x00032ef5) mup2_spec_bar_pane

0xc49a,	// (0x0003a273) mup2_spec_bar_pane_g1

0xc4a4,	// (0x0003a27d) mup2_spec_bar_pane_g2

0x0001,

0xf615,	// (0x0003d3ee) mup2_spec_bar_pane_g

0x513c,	// (0x00032f15) mup2_osc_middle_pane

0xc4b6,	// (0x0003a28f) mup2_visualizer_osc_pane_g1

0x9c92,	// (0x00037a6b) popup_number_entry_window_t1_ParamLimits

0x9ca5,	// (0x00037a7e) popup_number_entry_window_t2_ParamLimits

0x9cb7,	// (0x00037a90) popup_number_entry_window_t3_ParamLimits

0x1cac,	// (0x0002fa85) popup_number_entry_window_t5_ParamLimits

0x1cac,	// (0x0002fa85) popup_number_entry_window_t5

0xf0c6,	// (0x0003ce9f) popup_number_entry_window_t_ParamLimits

0x9cc9,	// (0x00037aa2) text_title_cp2_ParamLimits

0x41d7,	// (0x00031fb0) aid_hotspot_pointer_text2_pane

0x422d,	// (0x00032006) main_viewer_pane_g9_ParamLimits

0x422d,	// (0x00032006) main_viewer_pane_g9

0xa8eb,	// (0x000386c4) cale_month_pane_t1_ParamLimits

0xa928,	// (0x00038701) bg_cale_pane_ParamLimits

0xa940,	// (0x00038719) list_cale_pane_ParamLimits

0xa951,	// (0x0003872a) listscroll_cale_day_pane_t1

0xa963,	// (0x0003873c) scroll_pane_cp09_ParamLimits

0x3ed1,	// (0x00031caa) main_mup_eq_pane_t1_ParamLimits

0x3ed1,	// (0x00031caa) main_mup_eq_pane_t1

0x3eeb,	// (0x00031cc4) main_mup_eq_pane_t2_ParamLimits

0x3eeb,	// (0x00031cc4) main_mup_eq_pane_t2

0x3f05,	// (0x00031cde) main_mup_eq_pane_t3_ParamLimits

0x3f05,	// (0x00031cde) main_mup_eq_pane_t3

0x3f21,	// (0x00031cfa) main_mup_eq_pane_t4_ParamLimits

0x3f21,	// (0x00031cfa) main_mup_eq_pane_t4

0x3f3d,	// (0x00031d16) main_mup_eq_pane_t5_ParamLimits

0x3f3d,	// (0x00031d16) main_mup_eq_pane_t5

0x3f59,	// (0x00031d32) main_mup_eq_pane_t6_ParamLimits

0x3f59,	// (0x00031d32) main_mup_eq_pane_t6

0x3f6d,	// (0x00031d46) main_mup_eq_pane_t7_ParamLimits

0x3f6d,	// (0x00031d46) main_mup_eq_pane_t7

0x3f81,	// (0x00031d5a) main_mup_eq_pane_t8_ParamLimits

0x3f81,	// (0x00031d5a) main_mup_eq_pane_t8

0x3f95,	// (0x00031d6e) main_mup_eq_pane_t9_ParamLimits

0x3f95,	// (0x00031d6e) main_mup_eq_pane_t9

0x3faf,	// (0x00031d88) main_mup_eq_pane_t10_ParamLimits

0x3faf,	// (0x00031d88) main_mup_eq_pane_t10

0x0009,

0xf451,	// (0x0003d22a) main_mup_eq_pane_t_ParamLimits

0xf451,	// (0x0003d22a) main_mup_eq_pane_t

0x405e,	// (0x00031e37) mup_equalizer_pane_cp5_ParamLimits

0x4072,	// (0x00031e4b) mup_equalizer_pane_cp6_ParamLimits

0x4086,	// (0x00031e5f) mup_equalizer_pane_cp7_ParamLimits

0x1ca2,	// (0x0002fa7b) main_gallery_pane

0xc4bf,	// (0x0003a298) smil2_volume_pane

0xc4c7,	// (0x0003a2a0) smil_status_volume_pane_g1_ParamLimits

0xc4da,	// (0x0003a2b3) smil_status_volume_pane_g2_ParamLimits

0x4c1b,	// (0x000329f4) smil_status_volume_pane_g3_ParamLimits

0xf61a,	// (0x0003d3f3) smil_status_volume_pane_g_ParamLimits

0xc62c,	// (0x0003a405) bg_popup_window_pane_cp07_ParamLimits

0xc63a,	// (0x0003a413) blid_firmament_pane

0x5145,	// (0x00032f1e) aid_size_cell_gallery_ParamLimits

0x5145,	// (0x00032f1e) aid_size_cell_gallery

0x515b,	// (0x00032f34) grid_gallery_pane_ParamLimits

0x515b,	// (0x00032f34) grid_gallery_pane

0x5174,	// (0x00032f4d) cell_gallery_pane_ParamLimits

0x5174,	// (0x00032f4d) cell_gallery_pane

0xc75d,	// (0x0003a536) bg_cell_gallery_focus_pane_ParamLimits

0xc75d,	// (0x0003a536) bg_cell_gallery_focus_pane

0xc76f,	// (0x0003a548) cell_gallery_pane_g1_ParamLimits

0xc76f,	// (0x0003a548) cell_gallery_pane_g1

0x51bd,	// (0x00032f96) cell_gallery_pane_g2_ParamLimits

0x51bd,	// (0x00032f96) cell_gallery_pane_g2

0x51ca,	// (0x00032fa3) cell_gallery_pane_g3_ParamLimits

0x51ca,	// (0x00032fa3) cell_gallery_pane_g3

0xc77b,	// (0x0003a554) cell_gallery_pane_g4_ParamLimits

0xc77b,	// (0x0003a554) cell_gallery_pane_g4

0x0003,

0xf6c8,	// (0x0003d4a1) cell_gallery_pane_g_ParamLimits

0xf6c8,	// (0x0003d4a1) cell_gallery_pane_g

0xc787,	// (0x0003a560) bg_cell_gallery_focus_pane_g1

0xc78f,	// (0x0003a568) bg_cell_gallery_focus_pane_g2

0xc797,	// (0x0003a570) bg_cell_gallery_focus_pane_g3

0xc79f,	// (0x0003a578) bg_cell_gallery_focus_pane_g4

0xc7a7,	// (0x0003a580) bg_cell_gallery_focus_pane_g5

0xc7af,	// (0x0003a588) bg_cell_gallery_focus_pane_g6

0xc7b7,	// (0x0003a590) bg_cell_gallery_focus_pane_g7

0xc7bf,	// (0x0003a598) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6d1,	// (0x0003d4aa) bg_cell_gallery_focus_pane_g

0xc7c7,	// (0x0003a5a0) aid_firma_cardinal

0xc7db,	// (0x0003a5b4) blid_firmament_pane_t1

0xc7f2,	// (0x0003a5cb) blid_firmament_pane_t2

0xc809,	// (0x0003a5e2) blid_firmament_pane_t3

0xc820,	// (0x0003a5f9) blid_firmament_pane_t4

0x0003,

0xf6e2,	// (0x0003d4bb) blid_firmament_pane_t

0xc837,	// (0x0003a610) blid_sat_info_pane

0xc847,	// (0x0003a620) blid_sat_info_pane_g1

0xc847,	// (0x0003a620) blid_sat_info_pane_g2

0x0001,

0xf6eb,	// (0x0003d4c4) blid_sat_info_pane_g

0xc851,	// (0x0003a62a) blid_sat_info_pane_t1

0xc85f,	// (0x0003a638) smil2_volume_content_pane

0xc868,	// (0x0003a641) smil2_volume_pane_g1

0xa432,	// (0x0003820b) smil2_volume_content_pane_g1

0xc870,	// (0x0003a649) smil2_volume_content_pane_g2

0xc879,	// (0x0003a652) smil2_volume_content_pane_g3

0xc882,	// (0x0003a65b) smil2_volume_content_pane_g4

0xc88b,	// (0x0003a664) smil2_volume_content_pane_g5

0xc894,	// (0x0003a66d) smil2_volume_content_pane_g6

0xc89d,	// (0x0003a676) smil2_volume_content_pane_g7

0xc8a6,	// (0x0003a67f) smil2_volume_content_pane_g8

0xc8af,	// (0x0003a688) smil2_volume_content_pane_g9

0xc8b8,	// (0x0003a691) smil2_volume_content_pane_g10

0x0009,

0xf6f0,	// (0x0003d4c9) smil2_volume_content_pane_g

0x2359,	// (0x00030132) cale_week_day_heading_pane_t1_ParamLimits

0x2383,	// (0x0003015c) cale_week_day_heading_pane_t2_ParamLimits

0x23b2,	// (0x0003018b) cale_week_day_heading_pane_t3_ParamLimits

0x23e1,	// (0x000301ba) cale_week_day_heading_pane_t4_ParamLimits

0x2410,	// (0x000301e9) cale_week_day_heading_pane_t5_ParamLimits

0x2447,	// (0x00030220) cale_week_day_heading_pane_t6_ParamLimits

0x247e,	// (0x00030257) cale_week_day_heading_pane_t7_ParamLimits

0xf1cd,	// (0x0003cfa6) cale_week_day_heading_pane_t_ParamLimits

0xa550,	// (0x00038329) bg_cale_side_pane_ParamLimits

0x0689,	// (0x0002e462) cale_week_time_pane_t1_ParamLimits

0x06a3,	// (0x0002e47c) cale_week_time_pane_t2_ParamLimits

0x06bd,	// (0x0002e496) cale_week_time_pane_t3_ParamLimits

0x06d7,	// (0x0002e4b0) cale_week_time_pane_t4_ParamLimits

0x06f1,	// (0x0002e4ca) cale_week_time_pane_t5_ParamLimits

0x070b,	// (0x0002e4e4) cale_week_time_pane_t6_ParamLimits

0x0725,	// (0x0002e4fe) cale_week_time_pane_t7_ParamLimits

0x073f,	// (0x0002e518) cale_week_time_pane_t8_ParamLimits

0xf1dc,	// (0x0003cfb5) cale_week_time_pane_t_ParamLimits

0x24a8,	// (0x00030281) cell_cale_week_pane_g2_ParamLimits

0xa550,	// (0x00038329) bg_cale_side_pane_cp01_ParamLimits

0x3526,	// (0x000312ff) cale_month_week_pane_t1_ParamLimits

0x353f,	// (0x00031318) cale_month_week_pane_t2_ParamLimits

0x3558,	// (0x00031331) cale_month_week_pane_t3_ParamLimits

0x3571,	// (0x0003134a) cale_month_week_pane_t4_ParamLimits

0x358a,	// (0x00031363) cale_month_week_pane_t5_ParamLimits

0x35a3,	// (0x0003137c) cale_month_week_pane_t6_ParamLimits

0xf2b1,	// (0x0003d08a) cale_month_week_pane_t_ParamLimits

0x3714,	// (0x000314ed) cell_cale_month_pane_g1_ParamLimits

0x1ca2,	// (0x0002fa7b) main_cale_event_viewer_pane

0x9c68,	// (0x00037a41) listscroll_cale_event_viewer_pane

0xc8c1,	// (0x0003a69a) list_cale_ev_pane

0xc8c9,	// (0x0003a6a2) scroll_pane_cp023

0xc8d5,	// (0x0003a6ae) field_cale_ev_pane_ParamLimits

0xc8d5,	// (0x0003a6ae) field_cale_ev_pane

0xc8f3,	// (0x0003a6cc) field_cale_ev_content_pane_ParamLimits

0xc8f3,	// (0x0003a6cc) field_cale_ev_content_pane

0xc8ff,	// (0x0003a6d8) field_cale_ev_pane_g1_ParamLimits

0xc8ff,	// (0x0003a6d8) field_cale_ev_pane_g1

0xc90b,	// (0x0003a6e4) field_cale_ev_pane_g2_ParamLimits

0xc90b,	// (0x0003a6e4) field_cale_ev_pane_g2

0xc923,	// (0x0003a6fc) field_cale_ev_pane_g3_ParamLimits

0xc923,	// (0x0003a6fc) field_cale_ev_pane_g3

0x0002,

0xf705,	// (0x0003d4de) field_cale_ev_pane_g_ParamLimits

0xf705,	// (0x0003d4de) field_cale_ev_pane_g

0xc93b,	// (0x0003a714) field_cale_ev_pane_t1_ParamLimits

0xc93b,	// (0x0003a714) field_cale_ev_pane_t1

0xa4b5,	// (0x0003828e) field_cale_ev_content_pane_t1_ParamLimits

0xa4b5,	// (0x0003828e) field_cale_ev_content_pane_t1

0xb163,	// (0x00038f3c) bg_button_pane_cp01

0x2086,	// (0x0002fe5f) listscroll_cale_week_pane_ParamLimits

0xa4fb,	// (0x000382d4) popup_toolbar_window_cp01

0xa521,	// (0x000382fa) listscroll_cale_week_pane_t1_ParamLimits

0x2086,	// (0x0002fe5f) listscroll_cale_day_pane_ParamLimits

0xa4fb,	// (0x000382d4) popup_toolbar_window_cp02

0xa951,	// (0x0003872a) listscroll_cale_day_pane_t1_ParamLimits

0x07e1,	// (0x0002e5ba) main_cale_month_pane_ParamLimits

0x4b2d,	// (0x00032906) popup_toolbar_window_cp03_ParamLimits

0x4b2d,	// (0x00032906) popup_toolbar_window_cp03

0x440c,	// (0x000321e5) main_image_pane_g2_ParamLimits

0x440c,	// (0x000321e5) main_image_pane_g2

0x441d,	// (0x000321f6) main_image_pane_g3_ParamLimits

0x441d,	// (0x000321f6) main_image_pane_g3

0x0002,

0xf4e3,	// (0x0003d2bc) main_image_pane_g_ParamLimits

0xf4e3,	// (0x0003d2bc) main_image_pane_g

0xb27d,	// (0x00039056) main_image_pane_t1_ParamLimits

0x442e,	// (0x00032207) main_image_pane_t2_ParamLimits

0x442e,	// (0x00032207) main_image_pane_t2

0x4440,	// (0x00032219) main_image_pane_t3_ParamLimits

0x4440,	// (0x00032219) main_image_pane_t3

0x4468,	// (0x00032241) main_image_pane_t4_ParamLimits

0x4468,	// (0x00032241) main_image_pane_t4

0x0003,

0xf4ea,	// (0x0003d2c3) main_image_pane_t_ParamLimits

0xf4ea,	// (0x0003d2c3) main_image_pane_t

0x4488,	// (0x00032261) popup_image_details_window_cp01

0x4492,	// (0x0003226b) popup_toobar_trans_pane_cp01_ParamLimits

0x4492,	// (0x0003226b) popup_toobar_trans_pane_cp01

0x08ec,	// (0x0002e6c5) popup_image_details_window_ParamLimits

0x08ec,	// (0x0002e6c5) popup_image_details_window

0x4b00,	// (0x000328d9) popup_image_focus_window

0x0a77,	// (0x0002e850) camera2_autofocus_pane_ParamLimits

0x0a77,	// (0x0002e850) camera2_autofocus_pane

0x9c68,	// (0x00037a41) bg_popup_sub_pane_cp06

0xc952,	// (0x0003a72b) popup_image_focus_window_g1

0xc95a,	// (0x0003a733) popup_image_focus_window_g2

0xc962,	// (0x0003a73b) popup_image_focus_window_g3

0xc96a,	// (0x0003a743) popup_image_focus_window_g4

0x0003,

0xf70c,	// (0x0003d4e5) popup_image_focus_window_g

0xc972,	// (0x0003a74b) popup_image_focus_window_t1

0xc980,	// (0x0003a759) popup_image_focus_window_t2

0xc990,	// (0x0003a769) popup_image_focus_window_t3

0x0002,

0xf715,	// (0x0003d4ee) popup_image_focus_window_t

0xc99e,	// (0x0003a777) camera2_autofocus_pane_g1

0xa7ec,	// (0x000385c5) bg_tb_trans_pane_cp01

0xc9ac,	// (0x0003a785) popup_image_details_window_g1

0xc9bf,	// (0x0003a798) popup_image_details_window_g2

0x0002,

0xf727,	// (0x0003d500) popup_image_details_window_g

0xc9e8,	// (0x0003a7c1) popup_image_details_window_t1

0xc9fa,	// (0x0003a7d3) popup_image_details_window_t2

0xca13,	// (0x0003a7ec) popup_image_details_window_t3

0xca27,	// (0x0003a800) popup_image_details_window_t4

0xca42,	// (0x0003a81b) popup_image_details_window_t5

0x0004,

0xf72e,	// (0x0003d507) popup_image_details_window_t

0xa39d,	// (0x00038176) bg_calc_paper_pane_ParamLimits

0x1ca2,	// (0x0002fa7b) grid_highlight_pane_cp013

0x1f17,	// (0x0002fcf0) list_calc_pane_ParamLimits

0x1f29,	// (0x0002fd02) scroll_pane_cp024

0xa3b1,	// (0x0003818a) bg_calc_display_pane_ParamLimits

0x05e0,	// (0x0002e3b9) calc_display_pane_t1_ParamLimits

0x05f2,	// (0x0002e3cb) calc_display_pane_t2_ParamLimits

0x1f31,	// (0x0002fd0a) calc_display_pane_t3_ParamLimits

0xf14d,	// (0x0003cf26) calc_display_pane_t_ParamLimits

0x0653,	// (0x0002e42c) cell_calc_pane_g2

0x0001,

0xf16a,	// (0x0003cf43) cell_calc_pane_g

0x065c,	// (0x0002e435) cell_calc_pane_t1

0xa410,	// (0x000381e9) grid_highlight_pane_cp02_ParamLimits

0xa426,	// (0x000381ff) toolbar_button_pane_cp01_ParamLimits

0xa426,	// (0x000381ff) toolbar_button_pane_cp01

0xb2c2,	// (0x0003909b) temp_image_control_pane_ParamLimits

0xb2c2,	// (0x0003909b) temp_image_control_pane

0x1c88,	// (0x0002fa61) main_mp3_pane

0xca5c,	// (0x0003a835) temp_image_control_pane_g1_ParamLimits

0xca5c,	// (0x0003a835) temp_image_control_pane_g1

0xca6a,	// (0x0003a843) temp_image_control_pane_g2_ParamLimits

0xca6a,	// (0x0003a843) temp_image_control_pane_g2

0xca7c,	// (0x0003a855) temp_image_control_pane_g3_ParamLimits

0xca7c,	// (0x0003a855) temp_image_control_pane_g3

0x5207,	// (0x00032fe0) temp_image_control_pane_g4_ParamLimits

0x5207,	// (0x00032fe0) temp_image_control_pane_g4

0x0003,

0xf739,	// (0x0003d512) temp_image_control_pane_g_ParamLimits

0xf739,	// (0x0003d512) temp_image_control_pane_g

0xca5c,	// (0x0003a835) main_mp3_pane_g1

0x521a,	// (0x00032ff3) main_mp3_pane_g2

0x0007,

0xf742,	// (0x0003d51b) main_mp3_pane_g

0xcad4,	// (0x0003a8ad) main_mp3_pane_t1

0xa5b3,	// (0x0003838c) main_camera_pane_g8_ParamLimits

0xa5b3,	// (0x0003838c) main_camera_pane_g8

0x27b6,	// (0x0003058f) main_video_pane_g7_ParamLimits

0x27b6,	// (0x0003058f) main_video_pane_g7

0x4e16,	// (0x00032bef) main_camera2_pane_t7_ParamLimits

0x4e16,	// (0x00032bef) main_camera2_pane_t7

0xa6fb,	// (0x000384d4) scroll_pane_cp025_ParamLimits

0xa6fb,	// (0x000384d4) scroll_pane_cp025

0xa70f,	// (0x000384e8) scroll_pane_cp026_ParamLimits

0xa70f,	// (0x000384e8) scroll_pane_cp026

0xa71e,	// (0x000384f7) wml_content_pane_ParamLimits

0x1ca2,	// (0x0002fa7b) main_touch_calib_pane

0x52ee,	// (0x000330c7) main_touch_calib_pane_g1

0x5300,	// (0x000330d9) main_touch_calib_pane_g2

0x5312,	// (0x000330eb) main_touch_calib_pane_g3

0x5324,	// (0x000330fd) main_touch_calib_pane_g4

0x0003,

0xf760,	// (0x0003d539) main_touch_calib_pane_g

0x5336,	// (0x0003310f) main_touch_calib_pane_t1

0x5350,	// (0x00033129) main_touch_calib_pane_t2

0x0004,

0xf769,	// (0x0003d542) main_touch_calib_pane_t

0xae8f,	// (0x00038c68) mup_progress_pane_cp02

0xaec4,	// (0x00038c9d) navi_pane_g1

0xaf7f,	// (0x00038d58) navi_pane_mp_t3

0x1c88,	// (0x0002fa61) main_mp3_pane_ParamLimits

0x4b42,	// (0x0003291b) navi_pane_ParamLimits

0xca5c,	// (0x0003a835) main_mp3_pane_g1_ParamLimits

0x521a,	// (0x00032ff3) main_mp3_pane_g2_ParamLimits

0x5228,	// (0x00033001) main_mp3_pane_g3_ParamLimits

0x5228,	// (0x00033001) main_mp3_pane_g3

0x5236,	// (0x0003300f) main_mp3_pane_g4_ParamLimits

0x5236,	// (0x0003300f) main_mp3_pane_g4

0xca8c,	// (0x0003a865) main_mp3_pane_g5_ParamLimits

0xca8c,	// (0x0003a865) main_mp3_pane_g5

0xca9a,	// (0x0003a873) main_mp3_pane_g6_ParamLimits

0xca9a,	// (0x0003a873) main_mp3_pane_g6

0xcaa7,	// (0x0003a880) main_mp3_pane_g7_ParamLimits

0xcaa7,	// (0x0003a880) main_mp3_pane_g7

0xcab3,	// (0x0003a88c) main_mp3_pane_g8_ParamLimits

0xcab3,	// (0x0003a88c) main_mp3_pane_g8

0xf742,	// (0x0003d51b) main_mp3_pane_g_ParamLimits

0x5242,	// (0x0003301b) main_mp3_pane_t2

0x5250,	// (0x00033029) main_mp3_pane_t3

0xcae2,	// (0x0003a8bb) main_mp3_pane_t4

0xcaf0,	// (0x0003a8c9) main_mp3_pane_t5

0x0005,

0xf753,	// (0x0003d52c) main_mp3_pane_t

0xcafe,	// (0x0003a8d7) mup_progress_pane_cp01

0x1bfd,	// (0x0002f9d6) aid_zoom_text_secondary2

0xc8c1,	// (0x0003a69a) list_cale_ev2_pane

0xc8c9,	// (0x0003a6a2) scroll_pane_cp023_ParamLimits

0x53a6,	// (0x0003317f) field_cale_ev2_pane_ParamLimits

0x53a6,	// (0x0003317f) field_cale_ev2_pane

0xcb06,	// (0x0003a8df) field_cale_ev2_pane_g1_ParamLimits

0xcb06,	// (0x0003a8df) field_cale_ev2_pane_g1

0xcb12,	// (0x0003a8eb) field_cale_ev2_pane_g2_ParamLimits

0xcb12,	// (0x0003a8eb) field_cale_ev2_pane_g2

0xcb2a,	// (0x0003a903) field_cale_ev2_pane_g3_ParamLimits

0xcb2a,	// (0x0003a903) field_cale_ev2_pane_g3

0x0003,

0xf774,	// (0x0003d54d) field_cale_ev2_pane_g_ParamLimits

0xf774,	// (0x0003d54d) field_cale_ev2_pane_g

0xcb4e,	// (0x0003a927) field_cale_ev2_pane_t1_ParamLimits

0xcb4e,	// (0x0003a927) field_cale_ev2_pane_t1

0xcb65,	// (0x0003a93e) field_cale_ev2_pane_t2_ParamLimits

0xcb65,	// (0x0003a93e) field_cale_ev2_pane_t2

0x0001,

0xf77d,	// (0x0003d556) field_cale_ev2_pane_t_ParamLimits

0xf77d,	// (0x0003d556) field_cale_ev2_pane_t

0x42c0,	// (0x00032099) main_postcard_pane_g5_ParamLimits

0x42c0,	// (0x00032099) main_postcard_pane_g5

0x42d6,	// (0x000320af) main_postcard_pane_g6_ParamLimits

0x42d6,	// (0x000320af) main_postcard_pane_g6

0x257c,	// (0x00030355) camera2_autofocus_pane_cp_ParamLimits

0x257c,	// (0x00030355) camera2_autofocus_pane_cp

0x1c88,	// (0x0002fa61) main_mup3_pane

0x540b,	// (0x000331e4) main_mup3_pane_g1_ParamLimits

0x540b,	// (0x000331e4) main_mup3_pane_g1

0x542d,	// (0x00033206) main_mup3_pane_g2_ParamLimits

0x542d,	// (0x00033206) main_mup3_pane_g2

0x54ad,	// (0x00033286) main_mup3_pane_g3_ParamLimits

0x54ad,	// (0x00033286) main_mup3_pane_g3

0x54f3,	// (0x000332cc) main_mup3_pane_g4_ParamLimits

0x54f3,	// (0x000332cc) main_mup3_pane_g4

0x5539,	// (0x00033312) main_mup3_pane_g5_ParamLimits

0x5539,	// (0x00033312) main_mup3_pane_g5

0x557f,	// (0x00033358) main_mup3_pane_g6_ParamLimits

0x557f,	// (0x00033358) main_mup3_pane_g6

0xcb7a,	// (0x0003a953) main_mup3_pane_g7_ParamLimits

0xcb7a,	// (0x0003a953) main_mup3_pane_g7

0x0007,

0xf78d,	// (0x0003d566) main_mup3_pane_g_ParamLimits

0xf78d,	// (0x0003d566) main_mup3_pane_g

0x55fd,	// (0x000333d6) main_mup3_pane_t1_ParamLimits

0x55fd,	// (0x000333d6) main_mup3_pane_t1

0x5671,	// (0x0003344a) main_mup3_pane_t2_ParamLimits

0x5671,	// (0x0003344a) main_mup3_pane_t2

0x5745,	// (0x0003351e) main_mup3_pane_t4_ParamLimits

0x5745,	// (0x0003351e) main_mup3_pane_t4

0x579b,	// (0x00033574) main_mup3_pane_t5_ParamLimits

0x579b,	// (0x00033574) main_mup3_pane_t5

0x5857,	// (0x00033630) main_mup3_pane_t6_ParamLimits

0x5857,	// (0x00033630) main_mup3_pane_t6

0x0005,

0xf79e,	// (0x0003d577) main_mup3_pane_t_ParamLimits

0xf79e,	// (0x0003d577) main_mup3_pane_t

0x590f,	// (0x000336e8) mup3_progress_pane_ParamLimits

0x590f,	// (0x000336e8) mup3_progress_pane

0x599b,	// (0x00033774) popup_mup3_control_window_ParamLimits

0x599b,	// (0x00033774) popup_mup3_control_window

0xcb88,	// (0x0003a961) popup_mup3_text_window

0x59cd,	// (0x000337a6) mup3_progress_pane_t1

0x59ec,	// (0x000337c5) mup3_progress_pane_t2

0xcb90,	// (0x0003a969) mup3_progress_pane_t3

0x0002,

0xf7ab,	// (0x0003d584) mup3_progress_pane_t

0xcbad,	// (0x0003a986) mup_progress_pane_cp03

0x9c68,	// (0x00037a41) bg_tb_trans_pane_cp04

0x5a0b,	// (0x000337e4) mup3_volume_pane

0x5a13,	// (0x000337ec) popup_mup3_control_window_g1

0x5a1c,	// (0x000337f5) mup3_volume_pane_g1

0x5a25,	// (0x000337fe) mup3_volume_pane_g2

0x5a2e,	// (0x00033807) mup3_volume_pane_g3

0x0002,

0xf7b2,	// (0x0003d58b) mup3_volume_pane_g

0x9c68,	// (0x00037a41) bg_tb_trans_pane_cp03

0xcbbd,	// (0x0003a996) popup_mup3_text_window_g1

0xcbc5,	// (0x0003a99e) popup_mup3_text_window_t1

0xa3f9,	// (0x000381d2) list_calc_item_pane_g1_ParamLimits

0xc59a,	// (0x0003a373) mup_volume_pane_cp_g1

0x536a,	// (0x00033143) main_touch_calib_pane_t3

0x537e,	// (0x00033157) main_touch_calib_pane_t4

0x5392,	// (0x0003316b) main_touch_calib_pane_t5

0x1be9,	// (0x0002f9c2) aid_cell_size_toolbar2

0x1bf1,	// (0x0002f9ca) aid_popup3_width_pane

0x1bfd,	// (0x0002f9d6) aid_zoom_text_msg_primary

0x2551,	// (0x0003032a) vorec_t7

0xa3bd,	// (0x00038196) bg_calc_paper_pane_g1_ParamLimits

0xa3c9,	// (0x000381a2) bg_calc_paper_pane_g2_ParamLimits

0xa3d5,	// (0x000381ae) bg_calc_paper_pane_g3_ParamLimits

0xa3e1,	// (0x000381ba) bg_calc_paper_pane_g4_ParamLimits

0xa3ed,	// (0x000381c6) bg_calc_paper_pane_g5_ParamLimits

0x1f43,	// (0x0002fd1c) bg_calc_paper_pane_g6_ParamLimits

0x1f52,	// (0x0002fd2b) bg_calc_paper_pane_g7_ParamLimits

0x1f61,	// (0x0002fd3a) bg_calc_paper_pane_g8_ParamLimits

0xf154,	// (0x0003cf2d) bg_calc_paper_pane_g_ParamLimits

0x1f74,	// (0x0002fd4d) calc_bg_paper_pane_g9_ParamLimits

0x26c8,	// (0x000304a1) image_qvga_pane_ParamLimits

0x26c8,	// (0x000304a1) image_qvga_pane

0xa2e0,	// (0x000380b9) bg_popup_sub_pane_cp04_ParamLimits

0xb1f9,	// (0x00038fd2) popup_mup_playback_window_g1_ParamLimits

0xb205,	// (0x00038fde) popup_mup_playback_window_t1_ParamLimits

0xb21a,	// (0x00038ff3) popup_mup_playback_window_t2_ParamLimits

0xf4de,	// (0x0003d2b7) popup_mup_playback_window_t_ParamLimits

0x4e44,	// (0x00032c1d) main_mup2_pane_g3_ParamLimits

0x4e44,	// (0x00032c1d) main_mup2_pane_g3

0x2adc,	// (0x000308b5) popup_toolbar_window_cp04

0xb60f,	// (0x000393e8) popup_call2_audio_second_window_g3_ParamLimits

0xb60f,	// (0x000393e8) popup_call2_audio_second_window_g3

0xba19,	// (0x000397f2) popup_call2_audio_first_window_g4_ParamLimits

0xba19,	// (0x000397f2) popup_call2_audio_first_window_g4

0xc098,	// (0x00039e71) popup_call2_audio_in_window_g4_ParamLimits

0xc098,	// (0x00039e71) popup_call2_audio_in_window_g4

0x43ee,	// (0x000321c7) aid_area_sk_bg_cut_ParamLimits

0x43ee,	// (0x000321c7) aid_area_sk_bg_cut

0xb22f,	// (0x00039008) aid_area_sk_bg_cut_2_ParamLimits

0xb22f,	// (0x00039008) aid_area_sk_bg_cut_2

0x51ad,	// (0x00032f86) aid_placing_details_win

0x51b5,	// (0x00032f8e) aid_placing_details_win_2

0xc99e,	// (0x0003a777) camera2_autofocus_pane_g1_ParamLimits

0x049f,	// (0x0002e278) popup_fixed_preview_cale_window_ParamLimits

0x049f,	// (0x0002e278) popup_fixed_preview_cale_window

0xaffd,	// (0x00038dd6) navi_slider_pane_g3

0xb006,	// (0x00038ddf) navi_slider_pane_g4

0xb00f,	// (0x00038de8) navi_slider_pane_g5

0xaffd,	// (0x00038dd6) navi_slider_pane_g6

0x3ca1,	// (0x00031a7a) navi_slider_pane_g7

0xb130,	// (0x00038f09) mup_scale_pane_g3

0xb139,	// (0x00038f12) mup_scale_pane_g4

0xb142,	// (0x00038f1b) mup_scale_pane_g5

0x409a,	// (0x00031e73) mup_scale_pane_g6

0x40a3,	// (0x00031e7c) mup_scale_pane_g7

0xaffd,	// (0x00038dd6) cams2_slider_pane_g3

0xc61c,	// (0x0003a3f5) cams2_slider_pane_g4

0x50fa,	// (0x00032ed3) cams2_slider_pane_g5

0xaffd,	// (0x00038dd6) cams2_slider_pane_g6

0x5102,	// (0x00032edb) cams2_slider_pane_g7

0xc847,	// (0x0003a620) camera2_autofocus_pane_cp_g1

0xc433,	// (0x0003a20c) bg_popup_preview_window_pane_cp02_ParamLimits

0xc433,	// (0x0003a20c) bg_popup_preview_window_pane_cp02

0xcbd3,	// (0x0003a9ac) list_fp_cale_pane_ParamLimits

0xcbd3,	// (0x0003a9ac) list_fp_cale_pane

0xcbdf,	// (0x0003a9b8) popup_fixed_preview_cale_window_t1_ParamLimits

0xcbdf,	// (0x0003a9b8) popup_fixed_preview_cale_window_t1

0x5a37,	// (0x00033810) popup_fixed_preview_cale_window_t2_ParamLimits

0x5a37,	// (0x00033810) popup_fixed_preview_cale_window_t2

0x5a4c,	// (0x00033825) popup_fixed_preview_cale_window_t3_ParamLimits

0x5a4c,	// (0x00033825) popup_fixed_preview_cale_window_t3

0x0002,

0xf7b9,	// (0x0003d592) popup_fixed_preview_cale_window_t_ParamLimits

0xf7b9,	// (0x0003d592) popup_fixed_preview_cale_window_t

0x5a61,	// (0x0003383a) list_single_fp_cale_pane_ParamLimits

0x5a61,	// (0x0003383a) list_single_fp_cale_pane

0xcbfd,	// (0x0003a9d6) list_single_fp_cale_pane_g1_ParamLimits

0xcbfd,	// (0x0003a9d6) list_single_fp_cale_pane_g1

0xcc09,	// (0x0003a9e2) list_single_fp_cale_pane_g2_ParamLimits

0xcc09,	// (0x0003a9e2) list_single_fp_cale_pane_g2

0x0002,

0xf7c0,	// (0x0003d599) list_single_fp_cale_pane_g_ParamLimits

0xf7c0,	// (0x0003d599) list_single_fp_cale_pane_g

0xcc22,	// (0x0003a9fb) list_single_fp_cale_pane_t1_ParamLimits

0xcc22,	// (0x0003a9fb) list_single_fp_cale_pane_t1

0xcc34,	// (0x0003aa0d) list_single_fp_cale_pane_t2_ParamLimits

0xcc34,	// (0x0003aa0d) list_single_fp_cale_pane_t2

0x0001,

0xf7c7,	// (0x0003d5a0) list_single_fp_cale_pane_t_ParamLimits

0xf7c7,	// (0x0003d5a0) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x1ca2,	// (0x0002fa7b) main_dialer_pane

0x5a77,	// (0x00033850) aid_cell_size_keypad

0x5a81,	// (0x0003385a) dialer_ne_pane

0x5a89,	// (0x00033862) grid_dialer_command_1_pane

0x5a91,	// (0x0003386a) grid_dialer_command_2_pane

0x5a99,	// (0x00033872) grid_dialer_keypad_pane

0x5aab,	// (0x00033884) bg_popup_call_pane_cp06_ParamLimits

0x5aab,	// (0x00033884) bg_popup_call_pane_cp06

0x5ab7,	// (0x00033890) dialer_ne_clear_pane_ParamLimits

0x5ab7,	// (0x00033890) dialer_ne_clear_pane

0xcc67,	// (0x0003aa40) dialer_ne_pane_g1

0xcc6f,	// (0x0003aa48) dialer_ne_pane_t1_ParamLimits

0xcc6f,	// (0x0003aa48) dialer_ne_pane_t1

0x5ac3,	// (0x0003389c) dialer_ne_pane_t2_ParamLimits

0x5ac3,	// (0x0003389c) dialer_ne_pane_t2

0x5aed,	// (0x000338c6) dialer_ne_pane_t3_ParamLimits

0x5aed,	// (0x000338c6) dialer_ne_pane_t3

0x0002,

0xf7cc,	// (0x0003d5a5) dialer_ne_pane_t_ParamLimits

0xf7cc,	// (0x0003d5a5) dialer_ne_pane_t

0x5b1d,	// (0x000338f6) dialer_ne_pane_t3_copy1_ParamLimits

0x5b1d,	// (0x000338f6) dialer_ne_pane_t3_copy1

0x5b4c,	// (0x00033925) cell_dialer_keypad_pane_ParamLimits

0x5b4c,	// (0x00033925) cell_dialer_keypad_pane

0x5b63,	// (0x0003393c) cell_dialer_command_1_pane_ParamLimits

0x5b63,	// (0x0003393c) cell_dialer_command_1_pane

0x5b79,	// (0x00033952) cell_dialer_command_2_pane_ParamLimits

0x5b79,	// (0x00033952) cell_dialer_command_2_pane

0xcc81,	// (0x0003aa5a) bg_button_pane_cp02_ParamLimits

0xcc81,	// (0x0003aa5a) bg_button_pane_cp02

0x5b88,	// (0x00033961) cell_dialer_keypad_pane_g1_ParamLimits

0x5b88,	// (0x00033961) cell_dialer_keypad_pane_g1

0xcc81,	// (0x0003aa5a) bg_button_pane_cp03_ParamLimits

0xcc81,	// (0x0003aa5a) bg_button_pane_cp03

0x5b9c,	// (0x00033975) cell_dialer_command_1_pane_g1_ParamLimits

0x5b9c,	// (0x00033975) cell_dialer_command_1_pane_g1

0xcc8d,	// (0x0003aa66) bg_button_pane_cp04

0x5bb0,	// (0x00033989) cell_dialer_command_2_pane_g1

0xa5ab,	// (0x00038384) bg_button_pane_cp06

0xcc95,	// (0x0003aa6e) dialer_ne_clear_pane_g1

0xaed0,	// (0x00038ca9) navi_pane_g2

0xaefe,	// (0x00038cd7) navi_pane_g3

0x0002,

0xf3e1,	// (0x0003d1ba) navi_pane_g

0xaf8d,	// (0x00038d66) navi_pane_mv_g2

0xafb4,	// (0x00038d8d) navi_pane_mv_g5

0x3c56,	// (0x00031a2f) navi_pane_mv_t1

0xa3b1,	// (0x0003818a) main_clock2_pane

0xa7ec,	// (0x000385c5) main_clock2_list_pane_ParamLimits

0xa7ec,	// (0x000385c5) main_clock2_list_pane

0x5c21,	// (0x000339fa) main_clock2_pane_t1_ParamLimits

0x5c21,	// (0x000339fa) main_clock2_pane_t1

0x5c5c,	// (0x00033a35) main_clock2_pane_t2_ParamLimits

0x5c5c,	// (0x00033a35) main_clock2_pane_t2

0x0004,

0xf7d8,	// (0x0003d5b1) main_clock2_pane_t_ParamLimits

0xf7d8,	// (0x0003d5b1) main_clock2_pane_t

0x5cfc,	// (0x00033ad5) popup_clock_analogue_window_cp03_ParamLimits

0x5cfc,	// (0x00033ad5) popup_clock_analogue_window_cp03

0x5d21,	// (0x00033afa) popup_clock_digital_window_cp02_ParamLimits

0x5d21,	// (0x00033afa) popup_clock_digital_window_cp02

0x5d9a,	// (0x00033b73) main_clock2_list_single_pane_ParamLimits

0x5d9a,	// (0x00033b73) main_clock2_list_single_pane

0xa5ab,	// (0x00038384) list_highlight_pane_cp05

0xcccf,	// (0x0003aaa8) main_clock2_list_single_pane_t1

0x2adc,	// (0x000308b5) popup_toolbar_window_cp04_ParamLimits

0x51d7,	// (0x00032fb0) camera2_autofocus_pane_g2_ParamLimits

0x51d7,	// (0x00032fb0) camera2_autofocus_pane_g2

0x51e3,	// (0x00032fbc) camera2_autofocus_pane_g3_ParamLimits

0x51e3,	// (0x00032fbc) camera2_autofocus_pane_g3

0x51ef,	// (0x00032fc8) camera2_autofocus_pane_g4_ParamLimits

0x51ef,	// (0x00032fc8) camera2_autofocus_pane_g4

0x51fb,	// (0x00032fd4) camera2_autofocus_pane_g5_ParamLimits

0x51fb,	// (0x00032fd4) camera2_autofocus_pane_g5

0x0004,

0xf71c,	// (0x0003d4f5) camera2_autofocus_pane_g_ParamLimits

0xf71c,	// (0x0003d4f5) camera2_autofocus_pane_g

0x53c7,	// (0x000331a0) camera2_autofocus_pane_cp_g2

0x53cf,	// (0x000331a8) camera2_autofocus_pane_cp_g3

0x53d7,	// (0x000331b0) camera2_autofocus_pane_cp_g4

0x53df,	// (0x000331b8) camera2_autofocus_pane_cp_g5

0x0004,

0xf782,	// (0x0003d55b) camera2_autofocus_pane_cp_g

0x5aa3,	// (0x0003387c) popup_dialer_spcha_window

0x9c68,	// (0x00037a41) bg_popup_sub_pane_cp07

0xccdd,	// (0x0003aab6) list_spcha_pane

0xcce5,	// (0x0003aabe) list_single_spcha_pane_ParamLimits

0xcce5,	// (0x0003aabe) list_single_spcha_pane

0x9c68,	// (0x00037a41) list_highlight_pane_cp06

0xccf6,	// (0x0003aacf) list_single_spcha_pane_t1

0xbe42,	// (0x00039c1b) popup_call2_audio_out_window_g4_ParamLimits

0xbe42,	// (0x00039c1b) popup_call2_audio_out_window_g4

0x1ca2,	// (0x0002fa7b) main_imed2_pane

0x4b08,	// (0x000328e1) popup_imed_adjust2_window

0x0904,	// (0x0002e6dd) popup_imed_trans_window_ParamLimits

0x0904,	// (0x0002e6dd) popup_imed_trans_window

0xc685,	// (0x0003a45e) popup_blid_sat_info2_window_t1

0xc693,	// (0x0003a46c) popup_blid_sat_info2_window_t2

0x000a,

0xf6b1,	// (0x0003d48a) popup_blid_sat_info2_window_t

0x5dac,	// (0x00033b85) aid_size_cell_colour_35

0x5dcc,	// (0x00033ba5) aid_size_cell_colour_112

0x5dec,	// (0x00033bc5) aid_size_cell_effect

0xc43f,	// (0x0003a218) bg_tb_trans_pane_cp02

0xaa5a,	// (0x00038833) heading_imed_pane

0x5e0c,	// (0x00033be5) listscroll_imed_pane

0xcd04,	// (0x0003aadd) heading_imed_pane_g1

0xcd0c,	// (0x0003aae5) heading_imed_pane_t1

0xcd1a,	// (0x0003aaf3) grid_imed_colour_35_pane_ParamLimits

0xcd1a,	// (0x0003aaf3) grid_imed_colour_35_pane

0x5e18,	// (0x00033bf1) grid_imed_effect_pane

0xcd32,	// (0x0003ab0b) list_imed_aspect_pane

0x5e2e,	// (0x00033c07) scroll_pane_cp027_ParamLimits

0x5e2e,	// (0x00033c07) scroll_pane_cp027

0x5e3f,	// (0x00033c18) cell_imed_effect_pane_ParamLimits

0x5e3f,	// (0x00033c18) cell_imed_effect_pane

0xcd3a,	// (0x0003ab13) cell_imed_colour_pane_ParamLimits

0xcd3a,	// (0x0003ab13) cell_imed_colour_pane

0xcd7c,	// (0x0003ab55) cell_imed_colour_pane_g1_ParamLimits

0xcd7c,	// (0x0003ab55) cell_imed_colour_pane_g1

0xcd8d,	// (0x0003ab66) hgihlgiht_grid_pane_cp016_ParamLimits

0xcd8d,	// (0x0003ab66) hgihlgiht_grid_pane_cp016

0x5e66,	// (0x00033c3f) cell_imed_effect_pane_g1

0x5e6e,	// (0x00033c47) grid_highlight_pane_cp017

0xcd9e,	// (0x0003ab77) list_imed_single_pane_ParamLimits

0xcd9e,	// (0x0003ab77) list_imed_single_pane

0x9c68,	// (0x00037a41) list_highlight_pane_cp07

0xcdb3,	// (0x0003ab8c) list_imed_aspect_pane_comp1_t1

0xc43f,	// (0x0003a218) bg_tb_trans_pane_cp05

0xcdd5,	// (0x0003abae) popup_imed_adjust2_window_g1

0xcdfc,	// (0x0003abd5) popup_imed_adjust2_window_t1

0xce14,	// (0x0003abed) slider_imed_adjust_pane

0xce28,	// (0x0003ac01) slider_imed_adjust_pane_g1

0xce38,	// (0x0003ac11) slider_imed_adjust_pane_g2

0xce48,	// (0x0003ac21) slider_imed_adjust_pane_g3

0xce59,	// (0x0003ac32) slider_imed_adjust_pane_g4

0x0003,

0xf7f5,	// (0x0003d5ce) slider_imed_adjust_pane_g

0x5e77,	// (0x00033c50) aid_size_cell_clipart2

0x5e83,	// (0x00033c5c) grid_imed_clipart_pane

0xce6a,	// (0x0003ac43) scroll_pane_cp031

0x5e8d,	// (0x00033c66) cell_imed_clipart_pane_ParamLimits

0x5e8d,	// (0x00033c66) cell_imed_clipart_pane

0x5eaf,	// (0x00033c88) cell_imed_clipart_pane_g1

0x9c68,	// (0x00037a41) grid_highlight_pane_cp014

0x5bfd,	// (0x000339d6) main_clock2_pane_g1_ParamLimits

0x5bfd,	// (0x000339d6) main_clock2_pane_g1

0x5d41,	// (0x00033b1a) aid_call2_pane_cp10

0x5d53,	// (0x00033b2c) aid_call_pane_cp10

0xae2f,	// (0x00038c08) popup_clock_analogue_window_cp10_g1

0xae2f,	// (0x00038c08) popup_clock_analogue_window_cp10_g2

0x5d65,	// (0x00033b3e) popup_clock_analogue_window_cp10_g3

0x5d65,	// (0x00033b3e) popup_clock_analogue_window_cp10_g4

0xae2f,	// (0x00038c08) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7e3,	// (0x0003d5bc) popup_clock_analogue_window_cp10_g

0x5d7b,	// (0x00033b54) popup_clock_analogue_window_cp10_t1

0x0f52,	// (0x0002ed2b) clock_digital_number_pane_cp10_ParamLimits

0x0f52,	// (0x0002ed2b) clock_digital_number_pane_cp10

0x0f6a,	// (0x0002ed43) clock_digital_number_pane_cp11_ParamLimits

0x0f6a,	// (0x0002ed43) clock_digital_number_pane_cp11

0x0f82,	// (0x0002ed5b) clock_digital_number_pane_cp12_ParamLimits

0x0f82,	// (0x0002ed5b) clock_digital_number_pane_cp12

0x0f9c,	// (0x0002ed75) clock_digital_number_pane_cp13_ParamLimits

0x0f9c,	// (0x0002ed75) clock_digital_number_pane_cp13

0x0fb6,	// (0x0002ed8f) clock_digital_separator_pane_cp10_ParamLimits

0x0fb6,	// (0x0002ed8f) clock_digital_separator_pane_cp10

0x0fd0,	// (0x0002eda9) popup_clock_digital_window_cp02_t1_ParamLimits

0x0fd0,	// (0x0002eda9) popup_clock_digital_window_cp02_t1

0xa2d8,	// (0x000380b1) clock_digital_number_pane_cp10_g1

0xa2d8,	// (0x000380b1) clock_digital_number_pane_cp10_g2

0x0001,

0xf7fe,	// (0x0003d5d7) clock_digital_number_pane_cp10_g

0xa2d8,	// (0x000380b1) clock_digital_separator_pane_cp10_g1

0xa2d8,	// (0x000380b1) clock_digital_separator_pane_g2_cp10

0xafbc,	// (0x00038d95) navi_pane_vded_g4

0xafc5,	// (0x00038d9e) navi_pane_vded_g5

0xafce,	// (0x00038da7) navi_pane_vded_t1

0x1ca2,	// (0x0002fa7b) main_vded_pane

0x5eb8,	// (0x00033c91) main_vded_pane_g1

0x5ec2,	// (0x00033c9b) main_vded_pane_g2

0x5ecc,	// (0x00033ca5) main_vded_pane_g3

0x0002,

0xf803,	// (0x0003d5dc) main_vded_pane_g

0x5ed6,	// (0x00033caf) main_vded_pane_t1

0x5ee4,	// (0x00033cbd) main_vded_pane_t2

0x0001,

0xf80a,	// (0x0003d5e3) main_vded_pane_t

0x5ef2,	// (0x00033ccb) vded_slider_pane

0x5efa,	// (0x00033cd3) vded_video_pane

0xce72,	// (0x0003ac4b) vded_video_pane_g1

0x5f02,	// (0x00033cdb) vded_video_pane_g2

0xc847,	// (0x0003a620) vded_video_pane_g3

0x0002,

0xf80f,	// (0x0003d5e8) vded_video_pane_g

0xce7c,	// (0x0003ac55) vded_slider_pane_g1

0xc59a,	// (0x0003a373) vded_slider_pane_g2

0xce85,	// (0x0003ac5e) vded_slider_pane_g3

0xce8e,	// (0x0003ac67) vded_slider_pane_g4

0xce97,	// (0x0003ac70) vded_slider_pane_g5

0x0004,

0xf816,	// (0x0003d5ef) vded_slider_pane_g

0x5983,	// (0x0003375c) mup3_rocker_pane_ParamLimits

0x5983,	// (0x0003375c) mup3_rocker_pane

0x5f0b,	// (0x00033ce4) mup3_control_keys_pane_g1

0x5f13,	// (0x00033cec) mup3_control_keys_pane_g2

0x5f1b,	// (0x00033cf4) mup3_control_keys_pane_g3

0x5f23,	// (0x00033cfc) mup3_control_keys_pane_g4

0x0003,

0xf821,	// (0x0003d5fa) mup3_control_keys_pane_g

0x04d6,	// (0x0002e2af) popup_toolbar2_fixed_window_cp01_ParamLimits

0x04d6,	// (0x0002e2af) popup_toolbar2_fixed_window_cp01

0x59b7,	// (0x00033790) popup_toolbar2_fixed_window_cp02_ParamLimits

0x59b7,	// (0x00033790) popup_toolbar2_fixed_window_cp02

0xb781,	// (0x0003955a) popup_call2_audio_second_window_t4_ParamLimits

0xb781,	// (0x0003955a) popup_call2_audio_second_window_t4

0xbcaf,	// (0x00039a88) popup_call2_audio_first_window_t6_ParamLimits

0xbcaf,	// (0x00039a88) popup_call2_audio_first_window_t6

0xbf45,	// (0x00039d1e) popup_call2_audio_out_window_t6_ParamLimits

0xbf45,	// (0x00039d1e) popup_call2_audio_out_window_t6

0x1ca2,	// (0x0002fa7b) main_vitu_pane

0x5f33,	// (0x00033d0c) aid_size_cell_itu_ParamLimits

0x5f33,	// (0x00033d0c) aid_size_cell_itu

0xa7ec,	// (0x000385c5) bg_popup_window_pane_cp08_ParamLimits

0xa7ec,	// (0x000385c5) bg_popup_window_pane_cp08

0x5f49,	// (0x00033d22) field_vitu_entry_pane_ParamLimits

0x5f49,	// (0x00033d22) field_vitu_entry_pane

0x5f61,	// (0x00033d3a) grid_vitu_function_pane_ParamLimits

0x5f61,	// (0x00033d3a) grid_vitu_function_pane

0x5f7c,	// (0x00033d55) grid_vitu_itu_pane_ParamLimits

0x5f7c,	// (0x00033d55) grid_vitu_itu_pane

0x5f9a,	// (0x00033d73) cell_vitu_itu_pane_ParamLimits

0x5f9a,	// (0x00033d73) cell_vitu_itu_pane

0x5fbc,	// (0x00033d95) cell_vitu_function_pane_ParamLimits

0x5fbc,	// (0x00033d95) cell_vitu_function_pane

0xa7ec,	// (0x000385c5) bg_popup_sub_pane_cp08_ParamLimits

0xa7ec,	// (0x000385c5) bg_popup_sub_pane_cp08

0x5fd5,	// (0x00033dae) field_vitu_entry_pane_t1_ParamLimits

0x5fd5,	// (0x00033dae) field_vitu_entry_pane_t1

0xceb8,	// (0x0003ac91) field_vitu_entry_pane_t2_ParamLimits

0xceb8,	// (0x0003ac91) field_vitu_entry_pane_t2

0x0001,

0xf82f,	// (0x0003d608) field_vitu_entry_pane_t_ParamLimits

0xf82f,	// (0x0003d608) field_vitu_entry_pane_t

0xced5,	// (0x0003acae) bg_button_pane_cp05_ParamLimits

0xced5,	// (0x0003acae) bg_button_pane_cp05

0x5ff4,	// (0x00033dcd) cell_vitu_itu_pane_g1

0x600c,	// (0x00033de5) cell_vitu_itu_pane_t1_ParamLimits

0x600c,	// (0x00033de5) cell_vitu_itu_pane_t1

0x601e,	// (0x00033df7) cell_vitu_itu_pane_t2_ParamLimits

0x601e,	// (0x00033df7) cell_vitu_itu_pane_t2

0x0002,

0xf834,	// (0x0003d60d) cell_vitu_itu_pane_t_ParamLimits

0xf834,	// (0x0003d60d) cell_vitu_itu_pane_t

0xcee3,	// (0x0003acbc) bg_button_pane_cp07

0x6053,	// (0x00033e2c) cell_vitu_function_pane_g1

0x1e3f,	// (0x0002fc18) main_calc_pane_g1

0x0336,	// (0x0002e10f) aid_visual_content_pane

0x1ca2,	// (0x0002fa7b) main_vradio_pane

0x605c,	// (0x00033e35) main_vradio_pane_g1_ParamLimits

0x605c,	// (0x00033e35) main_vradio_pane_g1

0xceed,	// (0x0003acc6) main_vradio_pane_g2_ParamLimits

0xceed,	// (0x0003acc6) main_vradio_pane_g2

0x0001,

0xf83b,	// (0x0003d614) main_vradio_pane_g_ParamLimits

0xf83b,	// (0x0003d614) main_vradio_pane_g

0x6075,	// (0x00033e4e) main_vradio_pane_t1_ParamLimits

0x6075,	// (0x00033e4e) main_vradio_pane_t1

0x608a,	// (0x00033e63) main_vradio_pane_t2_ParamLimits

0x608a,	// (0x00033e63) main_vradio_pane_t2

0xcefa,	// (0x0003acd3) main_vradio_pane_t3_ParamLimits

0xcefa,	// (0x0003acd3) main_vradio_pane_t3

0x0002,

0xf840,	// (0x0003d619) main_vradio_pane_t_ParamLimits

0xf840,	// (0x0003d619) main_vradio_pane_t

0x609f,	// (0x00033e78) vradio_rocker_control_pane_ParamLimits

0x609f,	// (0x00033e78) vradio_rocker_control_pane

0x60b1,	// (0x00033e8a) vradio_station_info_pane_ParamLimits

0x60b1,	// (0x00033e8a) vradio_station_info_pane

0xcf0e,	// (0x0003ace7) vradio_frequency_info_pane_ParamLimits

0xcf0e,	// (0x0003ace7) vradio_frequency_info_pane

0xc847,	// (0x0003a620) vradio_station_info_pane_g1

0xcf1d,	// (0x0003acf6) vradio_station_info_pane_t1_ParamLimits

0xcf1d,	// (0x0003acf6) vradio_station_info_pane_t1

0xcf3f,	// (0x0003ad18) vradio_station_info_pane_t2_ParamLimits

0xcf3f,	// (0x0003ad18) vradio_station_info_pane_t2

0x0001,

0xf847,	// (0x0003d620) vradio_station_info_pane_t_ParamLimits

0xf847,	// (0x0003d620) vradio_station_info_pane_t

0xcf51,	// (0x0003ad2a) vradio_tuning_pane

0xcf59,	// (0x0003ad32) vradio_rocker_control_pane_g1

0xcf61,	// (0x0003ad3a) vradio_rocker_control_pane_g2

0xcf69,	// (0x0003ad42) vradio_rocker_control_pane_g3

0xcf71,	// (0x0003ad4a) vradio_rocker_control_pane_g4

0xcf79,	// (0x0003ad52) vradio_rocker_control_pane_g5

0x0004,

0xf84c,	// (0x0003d625) vradio_rocker_control_pane_g

0x60c3,	// (0x00033e9c) vradio_frequency_info_pane_g1

0xcf81,	// (0x0003ad5a) vradio_frequency_info_pane_t1_ParamLimits

0xcf81,	// (0x0003ad5a) vradio_frequency_info_pane_t1

0x60cd,	// (0x00033ea6) vradio_tuning_pane_g1

0x60d8,	// (0x00033eb1) vradio_tuning_pane_t1

0x1c46,	// (0x0002fa1f) area_side_right_pane_ParamLimits

0x1c46,	// (0x0002fa1f) area_side_right_pane

0xc3fa,	// (0x0003a1d3) status_small_pane_g1

0xc402,	// (0x0003a1db) status_small_pane_g2

0xc40b,	// (0x0003a1e4) status_small_pane_g3

0xc414,	// (0x0003a1ed) status_small_pane_g4

0x0003,

0xf607,	// (0x0003d3e0) status_small_pane_g

0xc41d,	// (0x0003a1f6) status_small_pane_t1

0x1ca2,	// (0x0002fa7b) main_video3_pane

0xcf95,	// (0x0003ad6e) cams_zoom_vslider_pane

0xcf9d,	// (0x0003ad76) image3_wide_pane_ParamLimits

0xcf9d,	// (0x0003ad76) image3_wide_pane

0xcfb7,	// (0x0003ad90) image3_wide_small_pane

0xcfc3,	// (0x0003ad9c) main_video3_pane_g1_ParamLimits

0xcfc3,	// (0x0003ad9c) main_video3_pane_g1

0xcfdf,	// (0x0003adb8) main_video3_pane_g2_ParamLimits

0xcfdf,	// (0x0003adb8) main_video3_pane_g2

0x0001,

0xf857,	// (0x0003d630) main_video3_pane_g_ParamLimits

0xf857,	// (0x0003d630) main_video3_pane_g

0xcffb,	// (0x0003add4) main_video3_pane_t1_ParamLimits

0xcffb,	// (0x0003add4) main_video3_pane_t1

0xd026,	// (0x0003adff) main_video3_pane_t2_ParamLimits

0xd026,	// (0x0003adff) main_video3_pane_t2

0xd051,	// (0x0003ae2a) main_video3_pane_t3_ParamLimits

0xd051,	// (0x0003ae2a) main_video3_pane_t3

0x0002,

0xf85c,	// (0x0003d635) main_video3_pane_t_ParamLimits

0xf85c,	// (0x0003d635) main_video3_pane_t

0xd07e,	// (0x0003ae57) cams_zoom_vslider_pane_g1

0xd087,	// (0x0003ae60) cams_zoom_vslider_pane_g2

0x0001,

0xf863,	// (0x0003d63c) cams_zoom_vslider_pane_g

0xd08f,	// (0x0003ae68) small_slider_vertical_pane

0xc847,	// (0x0003a620) small_slider_vertical_pane_g1

0xc847,	// (0x0003a620) small_slider_vertical_pane_g2

0xd097,	// (0x0003ae70) small_slider_vertical_pane_g3

0x0002,

0xf868,	// (0x0003d641) small_slider_vertical_pane_g

0x1ca2,	// (0x0002fa7b) main_hwr_training_pane

0xd0a0,	// (0x0003ae79) hwr_training_instruct_pane_ParamLimits

0xd0a0,	// (0x0003ae79) hwr_training_instruct_pane

0x60e7,	// (0x00033ec0) hwr_training_navi_pane_ParamLimits

0x60e7,	// (0x00033ec0) hwr_training_navi_pane

0x6106,	// (0x00033edf) hwr_training_write_pane_ParamLimits

0x6106,	// (0x00033edf) hwr_training_write_pane

0x9c68,	// (0x00037a41) bg_frame_shadow_pane

0xd0d7,	// (0x0003aeb0) hwr_training_write_pane_g1

0xd0df,	// (0x0003aeb8) hwr_training_write_pane_g2

0xd0e7,	// (0x0003aec0) hwr_training_write_pane_g3

0xd0ef,	// (0x0003aec8) hwr_training_write_pane_g4

0xd0f7,	// (0x0003aed0) hwr_training_write_pane_g5

0xd0ff,	// (0x0003aed8) hwr_training_write_pane_g6

0xd107,	// (0x0003aee0) hwr_training_write_pane_g7

0x0006,

0xf86f,	// (0x0003d648) hwr_training_write_pane_g

0x6141,	// (0x00033f1a) hwr_training_navi_pane_g1_ParamLimits

0x6141,	// (0x00033f1a) hwr_training_navi_pane_g1

0x6153,	// (0x00033f2c) hwr_training_navi_pane_g2_ParamLimits

0x6153,	// (0x00033f2c) hwr_training_navi_pane_g2

0x6165,	// (0x00033f3e) hwr_training_navi_pane_g3_ParamLimits

0x6165,	// (0x00033f3e) hwr_training_navi_pane_g3

0x6175,	// (0x00033f4e) hwr_training_navi_pane_g4_ParamLimits

0x6175,	// (0x00033f4e) hwr_training_navi_pane_g4

0x0004,

0xf87e,	// (0x0003d657) hwr_training_navi_pane_g_ParamLimits

0xf87e,	// (0x0003d657) hwr_training_navi_pane_g

0x6182,	// (0x00033f5b) hwr_training_navi_pane_t1

0x6190,	// (0x00033f69) list_single_hwr_training_instruct_pane_ParamLimits

0x6190,	// (0x00033f69) list_single_hwr_training_instruct_pane

0xd10f,	// (0x0003aee8) list_single_hwr_training_instruct_pane_t1

0xc787,	// (0x0003a560) bg_frame_shadow_pane_g1

0xd11e,	// (0x0003aef7) bg_frame_shadow_pane_g2

0xd126,	// (0x0003aeff) bg_frame_shadow_pane_g3

0xd12e,	// (0x0003af07) bg_frame_shadow_pane_g4

0xd136,	// (0x0003af0f) bg_frame_shadow_pane_g5

0xd13e,	// (0x0003af17) bg_frame_shadow_pane_g6

0xd146,	// (0x0003af1f) bg_frame_shadow_pane_g7

0xa473,	// (0x0003824c) bg_frame_shadow_pane_g8

0x0007,

0xf889,	// (0x0003d662) bg_frame_shadow_pane_g

0x1ca2,	// (0x0002fa7b) main_video_tele_dialer_pane

0x1000,	// (0x0002edd9) aid_size_cell_video_keypad_ParamLimits

0x1000,	// (0x0002edd9) aid_size_cell_video_keypad

0x101a,	// (0x0002edf3) grid_video_dialer_keypad_pane_ParamLimits

0x101a,	// (0x0002edf3) grid_video_dialer_keypad_pane

0x1068,	// (0x0002ee41) video_down_pane_cp_ParamLimits

0x1068,	// (0x0002ee41) video_down_pane_cp

0x107e,	// (0x0002ee57) cell_video_dialer_keypad_pane_ParamLimits

0x107e,	// (0x0002ee57) cell_video_dialer_keypad_pane

0xd14e,	// (0x0003af27) bg_button_pane_cp08_ParamLimits

0xd14e,	// (0x0003af27) bg_button_pane_cp08

0x61c2,	// (0x00033f9b) cell_video_dialer_keypad_pane_g1_ParamLimits

0x61c2,	// (0x00033f9b) cell_video_dialer_keypad_pane_g1

0x596d,	// (0x00033746) mup3_rocker2_pane_ParamLimits

0x596d,	// (0x00033746) mup3_rocker2_pane

0xc847,	// (0x0003a620) mup3_rocker2_pane_g1

0x07f3,	// (0x0002e5cc) main_dialer2_pane

0x1ca2,	// (0x0002fa7b) main_mp4_pane

0x621a,	// (0x00033ff3) main_mp4_pane_g1_ParamLimits

0x621a,	// (0x00033ff3) main_mp4_pane_g1

0x621a,	// (0x00033ff3) main_mp4_pane_g2_ParamLimits

0x621a,	// (0x00033ff3) main_mp4_pane_g2

0x10a0,	// (0x0002ee79) main_mp4_pane_g3_ParamLimits

0x10a0,	// (0x0002ee79) main_mp4_pane_g3

0x6228,	// (0x00034001) main_mp4_pane_g4_ParamLimits

0x6228,	// (0x00034001) main_mp4_pane_g4

0x6256,	// (0x0003402f) main_mp4_pane_g5_ParamLimits

0x6256,	// (0x0003402f) main_mp4_pane_g5

0x0007,

0xf8a9,	// (0x0003d682) main_mp4_pane_g_ParamLimits

0xf8a9,	// (0x0003d682) main_mp4_pane_g

0x62ca,	// (0x000340a3) main_mp4_pane_t1_ParamLimits

0x62ca,	// (0x000340a3) main_mp4_pane_t1

0x6326,	// (0x000340ff) main_mp4_pane_t2_ParamLimits

0x6326,	// (0x000340ff) main_mp4_pane_t2

0xd15a,	// (0x0003af33) main_mp4_pane_t3_ParamLimits

0xd15a,	// (0x0003af33) main_mp4_pane_t3

0x6378,	// (0x00034151) main_mp4_pane_t4_ParamLimits

0x6378,	// (0x00034151) main_mp4_pane_t4

0x0003,

0xf8ba,	// (0x0003d693) main_mp4_pane_t_ParamLimits

0xf8ba,	// (0x0003d693) main_mp4_pane_t

0x63bc,	// (0x00034195) mp4_progress_pane_ParamLimits

0x63bc,	// (0x00034195) mp4_progress_pane

0x6406,	// (0x000341df) mp4_rocker_pane_ParamLimits

0x6406,	// (0x000341df) mp4_rocker_pane

0xd188,	// (0x0003af61) mp4_progress_pane_t1

0xd1a1,	// (0x0003af7a) mp4_progress_pane_t2

0x0001,

0xf8c3,	// (0x0003d69c) mp4_progress_pane_t

0xd1ba,	// (0x0003af93) mup_progress_pane_cp04

0xd658,	// (0x0003b431) mp4_rocker_pane_g1

0x10dc,	// (0x0002eeb5) aid_cell_size_keypad2_ParamLimits

0x10dc,	// (0x0002eeb5) aid_cell_size_keypad2

0x10f2,	// (0x0002eecb) dialer2_ne_pane_ParamLimits

0x10f2,	// (0x0002eecb) dialer2_ne_pane

0x110c,	// (0x0002eee5) grid_dialer2_keypad_pane_ParamLimits

0x110c,	// (0x0002eee5) grid_dialer2_keypad_pane

0xc62c,	// (0x0003a405) bg_popup_call_pane_cp07_ParamLimits

0xc62c,	// (0x0003a405) bg_popup_call_pane_cp07

0x6426,	// (0x000341ff) dialer2_ne_pane_t1_ParamLimits

0x6426,	// (0x000341ff) dialer2_ne_pane_t1

0x1128,	// (0x0002ef01) cell_dialer2_keypad_pane_ParamLimits

0x1128,	// (0x0002ef01) cell_dialer2_keypad_pane

0xd1df,	// (0x0003afb8) bg_button_pane_pane_cp04_ParamLimits

0xd1df,	// (0x0003afb8) bg_button_pane_pane_cp04

0x6462,	// (0x0003423b) cell_dialer2_keypad_pane_g1_ParamLimits

0x6462,	// (0x0003423b) cell_dialer2_keypad_pane_g1

0x29b0,	// (0x00030789) aid_placing_vt_set_content_ParamLimits

0x29b0,	// (0x00030789) aid_placing_vt_set_content

0x29d8,	// (0x000307b1) aid_placing_vt_set_title_ParamLimits

0x29d8,	// (0x000307b1) aid_placing_vt_set_title

0x1ca2,	// (0x0002fa7b) main_image3_pane

0x11a8,	// (0x0002ef81) area_side_right_pane_cp01_ParamLimits

0x11a8,	// (0x0002ef81) area_side_right_pane_cp01

0x621a,	// (0x00033ff3) main_image3_pane_g1_ParamLimits

0x621a,	// (0x00033ff3) main_image3_pane_g1

0x11bf,	// (0x0002ef98) main_image3_pane_g2_ParamLimits

0x11bf,	// (0x0002ef98) main_image3_pane_g2

0x11e7,	// (0x0002efc0) main_image3_pane_g3_ParamLimits

0x11e7,	// (0x0002efc0) main_image3_pane_g3

0x1211,	// (0x0002efea) main_image3_pane_g4_ParamLimits

0x1211,	// (0x0002efea) main_image3_pane_g4

0x0003,

0xf8d2,	// (0x0003d6ab) main_image3_pane_g_ParamLimits

0xf8d2,	// (0x0003d6ab) main_image3_pane_g

0x123b,	// (0x0002f014) main_image3_pane_t1_ParamLimits

0x123b,	// (0x0002f014) main_image3_pane_t1

0x1293,	// (0x0002f06c) main_image3_pane_t2_ParamLimits

0x1293,	// (0x0002f06c) main_image3_pane_t2

0x12e5,	// (0x0002f0be) main_image3_pane_t3_ParamLimits

0x12e5,	// (0x0002f0be) main_image3_pane_t3

0x0003,

0xf8db,	// (0x0003d6b4) main_image3_pane_t_ParamLimits

0xf8db,	// (0x0003d6b4) main_image3_pane_t

0xa7ec,	// (0x000385c5) grid_sctrl_middle_pane_cp01_ParamLimits

0xa7ec,	// (0x000385c5) grid_sctrl_middle_pane_cp01

0x64fc,	// (0x000342d5) cell_sctrl_middle_pane_cp01_ParamLimits

0x64fc,	// (0x000342d5) cell_sctrl_middle_pane_cp01

0x6519,	// (0x000342f2) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x6519,	// (0x000342f2) cell_sctrl_middle_pane_cp01_g1

0x1ca2,	// (0x0002fa7b) main_call4_pane

0x136d,	// (0x0002f146) aid_size_button_call4_ParamLimits

0x136d,	// (0x0002f146) aid_size_button_call4

0x13a0,	// (0x0002f179) call4_windows_pane_ParamLimits

0x13a0,	// (0x0002f179) call4_windows_pane

0x13bf,	// (0x0002f198) grid_call4_button_pane_ParamLimits

0x13bf,	// (0x0002f198) grid_call4_button_pane

0x6539,	// (0x00034312) call4_windows_conf_pane

0x6550,	// (0x00034329) popup_call4_audio_first_window_ParamLimits

0x6550,	// (0x00034329) popup_call4_audio_first_window

0x65a0,	// (0x00034379) popup_call4_audio_second_window_ParamLimits

0x65a0,	// (0x00034379) popup_call4_audio_second_window

0x65b7,	// (0x00034390) popup_call4_audio_wait_window_ParamLimits

0x65b7,	// (0x00034390) popup_call4_audio_wait_window

0x13e8,	// (0x0002f1c1) cell_call4_button_pane_ParamLimits

0x13e8,	// (0x0002f1c1) cell_call4_button_pane

0x65c5,	// (0x0003439e) bg_button_pane_cp09_ParamLimits

0x65c5,	// (0x0003439e) bg_button_pane_cp09

0x140d,	// (0x0002f1e6) cell_call4_button_pane_g1_ParamLimits

0x140d,	// (0x0002f1e6) cell_call4_button_pane_g1

0x1433,	// (0x0002f20c) cell_call4_button_pane_t1_ParamLimits

0x1433,	// (0x0002f20c) cell_call4_button_pane_t1

0xd1f3,	// (0x0003afcc) popup_call4_audio_conf_window_ParamLimits

0xd1f3,	// (0x0003afcc) popup_call4_audio_conf_window

0x59cd,	// (0x000337a6) mup3_progress_pane_t1_ParamLimits

0x59ec,	// (0x000337c5) mup3_progress_pane_t2_ParamLimits

0xcb90,	// (0x0003a969) mup3_progress_pane_t3_ParamLimits

0xf7ab,	// (0x0003d584) mup3_progress_pane_t_ParamLimits

0xcbad,	// (0x0003a986) mup_progress_pane_cp03_ParamLimits

0x5f2b,	// (0x00033d04) mup3_control_keys_pane_g4_copy1

0x63ea,	// (0x000341c3) mp4_rocker2_pane_ParamLimits

0x63ea,	// (0x000341c3) mp4_rocker2_pane

0xd207,	// (0x0003afe0) mp4_rocker2_pane_g1

0xd20f,	// (0x0003afe8) mp4_rocker2_pane_g2

0x6603,	// (0x000343dc) mp4_rocker2_pane_g3

0x660b,	// (0x000343e4) mp4_rocker2_pane_g4

0x6613,	// (0x000343ec) mp4_rocker2_pane_g5

0x0004,

0xf8e4,	// (0x0003d6bd) mp4_rocker2_pane_g

0x1ca2,	// (0x0002fa7b) main_camera4_pane

0x1ca2,	// (0x0002fa7b) main_video4_pane

0x1036,	// (0x0002ee0f) main_video_tele_dialer_pane_t1_ParamLimits

0x1036,	// (0x0002ee0f) main_video_tele_dialer_pane_t1

0x104f,	// (0x0002ee28) main_video_tele_dialer_pane_t2_ParamLimits

0x104f,	// (0x0002ee28) main_video_tele_dialer_pane_t2

0x0001,

0xf89a,	// (0x0003d673) main_video_tele_dialer_pane_t_ParamLimits

0xf89a,	// (0x0003d673) main_video_tele_dialer_pane_t

0x1475,	// (0x0002f24e) cam4_autofocus_pane_ParamLimits

0x1475,	// (0x0002f24e) cam4_autofocus_pane

0x148b,	// (0x0002f264) cam4_image_uncrop_pane_ParamLimits

0x148b,	// (0x0002f264) cam4_image_uncrop_pane

0x14a5,	// (0x0002f27e) cam4_indicators_pane_ParamLimits

0x14a5,	// (0x0002f27e) cam4_indicators_pane

0x14d0,	// (0x0002f2a9) main_camera4_pane_g1_ParamLimits

0x14d0,	// (0x0002f2a9) main_camera4_pane_g1

0x14e2,	// (0x0002f2bb) main_camera4_pane_g2_ParamLimits

0x14e2,	// (0x0002f2bb) main_camera4_pane_g2

0x14f5,	// (0x0002f2ce) main_camera4_pane_g3_ParamLimits

0x14f5,	// (0x0002f2ce) main_camera4_pane_g3

0x1508,	// (0x0002f2e1) main_camera4_pane_g4_ParamLimits

0x1508,	// (0x0002f2e1) main_camera4_pane_g4

0x151b,	// (0x0002f2f4) main_camera4_pane_g5_ParamLimits

0x151b,	// (0x0002f2f4) main_camera4_pane_g5

0x0005,

0xf8ef,	// (0x0003d6c8) main_camera4_pane_g_ParamLimits

0xf8ef,	// (0x0003d6c8) main_camera4_pane_g

0x153f,	// (0x0002f318) main_camera4_pane_t1_ParamLimits

0x153f,	// (0x0002f318) main_camera4_pane_t1

0x664b,	// (0x00034424) bg_tb_trans_pane_cp06

0x6661,	// (0x0003443a) cam4_indicators_pane_g1

0x6672,	// (0x0003444b) cam4_indicators_pane_g2

0x0002,

0xf90a,	// (0x0003d6e3) cam4_indicators_pane_g

0x668a,	// (0x00034463) cam4_indicators_pane_t1

0x158f,	// (0x0002f368) main_video4_pane_g1_ParamLimits

0x158f,	// (0x0002f368) main_video4_pane_g1

0x159e,	// (0x0002f377) main_video4_pane_g2_ParamLimits

0x159e,	// (0x0002f377) main_video4_pane_g2

0x15ad,	// (0x0002f386) main_video4_pane_g3_ParamLimits

0x15ad,	// (0x0002f386) main_video4_pane_g3

0x15bc,	// (0x0002f395) main_video4_pane_g4_ParamLimits

0x15bc,	// (0x0002f395) main_video4_pane_g4

0x0004,

0xf911,	// (0x0003d6ea) main_video4_pane_g_ParamLimits

0xf911,	// (0x0003d6ea) main_video4_pane_g

0x15da,	// (0x0002f3b3) vid4_indicators_pane_ParamLimits

0x15da,	// (0x0002f3b3) vid4_indicators_pane

0x1608,	// (0x0002f3e1) video4_image_uncrop_cif_pane_ParamLimits

0x1608,	// (0x0002f3e1) video4_image_uncrop_cif_pane

0x1622,	// (0x0002f3fb) video4_image_uncrop_nhd_pane_ParamLimits

0x1622,	// (0x0002f3fb) video4_image_uncrop_nhd_pane

0x148b,	// (0x0002f264) video4_image_uncrop_vga_pane_ParamLimits

0x148b,	// (0x0002f264) video4_image_uncrop_vga_pane

0x1c88,	// (0x0002fa61) bg_tb_trans_pane_cp07

0x66b4,	// (0x0003448d) vid4_indicators_pane_g1

0x66c8,	// (0x000344a1) vid4_indicators_pane_g2

0x66dc,	// (0x000344b5) vid4_indicators_pane_g3

0x0004,

0xf91c,	// (0x0003d6f5) vid4_indicators_pane_g

0x6709,	// (0x000344e2) vid4_indicators_pane_t1

0x6720,	// (0x000344f9) cam4_autofocus_pane_g1

0x6728,	// (0x00034501) cam4_autofocus_pane_g2

0x6730,	// (0x00034509) cam4_autofocus_pane_g3

0x0002,

0xf927,	// (0x0003d700) cam4_autofocus_pane_g

0x6738,	// (0x00034511) cam4_autofocus_pane_g3_copy1

0x61a6,	// (0x00033f7f) video_down_pane_cp_t1

0x61b4,	// (0x00033f8d) video_down_pane_cp_t2

0x0001,

0xf89f,	// (0x0003d678) video_down_pane_cp_t

0x1c88,	// (0x0002fa61) popup_vitu2_window_ParamLimits

0x1c88,	// (0x0002fa61) popup_vitu2_window

0x1636,	// (0x0002f40f) aid_size_cell2_itu2_ParamLimits

0x1636,	// (0x0002f40f) aid_size_cell2_itu2

0x165c,	// (0x0002f435) aid_size_cell_itu2_ParamLimits

0x165c,	// (0x0002f435) aid_size_cell_itu2

0x16b8,	// (0x0002f491) bg_popup_window_pane_cp09_ParamLimits

0x16b8,	// (0x0002f491) bg_popup_window_pane_cp09

0x16c6,	// (0x0002f49f) field_vitu2_entry_pane_ParamLimits

0x16c6,	// (0x0002f49f) field_vitu2_entry_pane

0x16ec,	// (0x0002f4c5) grid_vitu2_function_pane_ParamLimits

0x16ec,	// (0x0002f4c5) grid_vitu2_function_pane

0x173d,	// (0x0002f516) grid_vitu2_itu_pane_ParamLimits

0x173d,	// (0x0002f516) grid_vitu2_itu_pane

0x17d3,	// (0x0002f5ac) cell_vitu2_itu_pane_ParamLimits

0x17d3,	// (0x0002f5ac) cell_vitu2_itu_pane

0x17ff,	// (0x0002f5d8) cell_vitu2_function_pane_ParamLimits

0x17ff,	// (0x0002f5d8) cell_vitu2_function_pane

0xd217,	// (0x0003aff0) bg_popup_call_pane_cp08_ParamLimits

0xd217,	// (0x0003aff0) bg_popup_call_pane_cp08

0xd22e,	// (0x0003b007) field_vitu2_entry_pane_g1

0xd23a,	// (0x0003b013) field_vitu2_entry_pane_g2

0x0002,

0xf92e,	// (0x0003d707) field_vitu2_entry_pane_g

0x6740,	// (0x00034519) field_vitu2_entry_pane_t1_ParamLimits

0x6740,	// (0x00034519) field_vitu2_entry_pane_t1

0xd254,	// (0x0003b02d) field_vitu2_entry_pane_t2_ParamLimits

0xd254,	// (0x0003b02d) field_vitu2_entry_pane_t2

0x0001,

0xf935,	// (0x0003d70e) field_vitu2_entry_pane_t_ParamLimits

0xf935,	// (0x0003d70e) field_vitu2_entry_pane_t

0x183e,	// (0x0002f617) bg_button_pane_cp010_ParamLimits

0x183e,	// (0x0002f617) bg_button_pane_cp010

0x676f,	// (0x00034548) cell_vitu2_itu_pane_g1

0x185a,	// (0x0002f633) cell_vitu2_itu_pane_t1_ParamLimits

0x185a,	// (0x0002f633) cell_vitu2_itu_pane_t1

0x18b8,	// (0x0002f691) cell_vitu2_itu_pane_t2_ParamLimits

0x18b8,	// (0x0002f691) cell_vitu2_itu_pane_t2

0x0002,

0xf93f,	// (0x0003d718) cell_vitu2_itu_pane_t_ParamLimits

0xf93f,	// (0x0003d718) cell_vitu2_itu_pane_t

0x1c88,	// (0x0002fa61) bg_button_pane_cp011

0x19a4,	// (0x0002f77d) cell_vitu2_function_pane_g1

0x1ca2,	// (0x0002fa7b) main_myfav_hc_pane

0x1335,	// (0x0002f10e) popup_image3_note_pane_ParamLimits

0x1335,	// (0x0002f10e) popup_image3_note_pane

0x1351,	// (0x0002f12a) popup_image3_tool_bar_pane_ParamLimits

0x1351,	// (0x0002f12a) popup_image3_tool_bar_pane

0x1946,	// (0x0002f71f) cell_vitu2_itu_pane_t3_ParamLimits

0x1946,	// (0x0002f71f) cell_vitu2_itu_pane_t3

0x9c68,	// (0x00037a41) bg_popup_trans_pane

0xd279,	// (0x0003b052) grid_image3_tool_bar_pane

0xd283,	// (0x0003b05c) bg_popup_trans_pane_g1

0xa812,	// (0x000385eb) bg_popup_trans_pane_g2

0xd28b,	// (0x0003b064) bg_popup_trans_pane_g3

0xd293,	// (0x0003b06c) bg_popup_trans_pane_g4

0xd29b,	// (0x0003b074) bg_popup_trans_pane_g5

0xd2a3,	// (0x0003b07c) bg_popup_trans_pane_g6

0xd2ab,	// (0x0003b084) bg_popup_trans_pane_g7

0xd2b3,	// (0x0003b08c) bg_popup_trans_pane_g8

0xa7e4,	// (0x000385bd) bg_popup_trans_pane_g9

0x0008,

0xf946,	// (0x0003d71f) bg_popup_trans_pane_g

0xd2bb,	// (0x0003b094) cell_image3_tool_bar_pane_ParamLimits

0xd2bb,	// (0x0003b094) cell_image3_tool_bar_pane

0xc847,	// (0x0003a620) cell_image3_tool_bar_pane_g1

0x9c68,	// (0x00037a41) bg_popup_trans_pane_cp1

0xd2cf,	// (0x0003b0a8) popup_image3_note_pane_t1

0xd2dd,	// (0x0003b0b6) popup_image3_note_pane_t2

0xd2eb,	// (0x0003b0c4) popup_image3_note_pane_t3

0x0002,

0xf959,	// (0x0003d732) popup_image3_note_pane_t

0xd2f9,	// (0x0003b0d2) popup_image3_note_pane_t3_copy1

0x6781,	// (0x0003455a) bg_myfav_hc_instruction_pane_ParamLimits

0x6781,	// (0x0003455a) bg_myfav_hc_instruction_pane

0x6795,	// (0x0003456e) cell_myfav_contact_pane_ParamLimits

0x6795,	// (0x0003456e) cell_myfav_contact_pane

0x67b3,	// (0x0003458c) cell_myfav_contact_pane_cp1_ParamLimits

0x67b3,	// (0x0003458c) cell_myfav_contact_pane_cp1

0x67cb,	// (0x000345a4) cell_myfav_contact_pane_cp2_ParamLimits

0x67cb,	// (0x000345a4) cell_myfav_contact_pane_cp2

0x67e3,	// (0x000345bc) cell_myfav_contact_pane_cp3_ParamLimits

0x67e3,	// (0x000345bc) cell_myfav_contact_pane_cp3

0x67fa,	// (0x000345d3) cell_myfav_contact_pane_cp4_ParamLimits

0x67fa,	// (0x000345d3) cell_myfav_contact_pane_cp4

0x6812,	// (0x000345eb) cell_myfav_contact_pane_cp5_ParamLimits

0x6812,	// (0x000345eb) cell_myfav_contact_pane_cp5

0x6826,	// (0x000345ff) cell_myfav_contact_pane_cp6_ParamLimits

0x6826,	// (0x000345ff) cell_myfav_contact_pane_cp6

0x683c,	// (0x00034615) cell_myfav_contact_pane_cp7_ParamLimits

0x683c,	// (0x00034615) cell_myfav_contact_pane_cp7

0xd307,	// (0x0003b0e0) listscroll_gen_pane_cp05

0x6856,	// (0x0003462f) main_myfav_hc_pane_g1_ParamLimits

0x6856,	// (0x0003462f) main_myfav_hc_pane_g1

0x6870,	// (0x00034649) main_myfav_hc_pane_g2_ParamLimits

0x6870,	// (0x00034649) main_myfav_hc_pane_g2

0x0002,

0xf960,	// (0x0003d739) main_myfav_hc_pane_g_ParamLimits

0xf960,	// (0x0003d739) main_myfav_hc_pane_g

0x68a2,	// (0x0003467b) main_myfav_hc_pane_t1_ParamLimits

0x68a2,	// (0x0003467b) main_myfav_hc_pane_t1

0xd310,	// (0x0003b0e9) main_myfav_hc_pane_t2_ParamLimits

0xd310,	// (0x0003b0e9) main_myfav_hc_pane_t2

0xd322,	// (0x0003b0fb) main_myfav_hc_pane_t3_ParamLimits

0xd322,	// (0x0003b0fb) main_myfav_hc_pane_t3

0x68b9,	// (0x00034692) main_myfav_hc_pane_t4_ParamLimits

0x68b9,	// (0x00034692) main_myfav_hc_pane_t4

0x0004,

0xf967,	// (0x0003d740) main_myfav_hc_pane_t_ParamLimits

0xf967,	// (0x0003d740) main_myfav_hc_pane_t

0xc847,	// (0x0003a620) bg_myfav_hc_instruction_pane_g1

0xd334,	// (0x0003b10d) cell_myfav_contact_pane_g1_ParamLimits

0xd334,	// (0x0003b10d) cell_myfav_contact_pane_g1

0xd334,	// (0x0003b10d) cell_myfav_contact_pane_g2_ParamLimits

0xd334,	// (0x0003b10d) cell_myfav_contact_pane_g2

0xd340,	// (0x0003b119) cell_myfav_contact_pane_g3_ParamLimits

0xd340,	// (0x0003b119) cell_myfav_contact_pane_g3

0xcb7a,	// (0x0003a953) cell_myfav_contact_pane_g4_ParamLimits

0xcb7a,	// (0x0003a953) cell_myfav_contact_pane_g4

0xd34d,	// (0x0003b126) cell_myfav_contact_pane_g5_ParamLimits

0xd34d,	// (0x0003b126) cell_myfav_contact_pane_g5

0x0004,

0xf972,	// (0x0003d74b) cell_myfav_contact_pane_g_ParamLimits

0xf972,	// (0x0003d74b) cell_myfav_contact_pane_g

0x688a,	// (0x00034663) main_myfav_hc_pane_g3_ParamLimits

0x688a,	// (0x00034663) main_myfav_hc_pane_g3

0x0438,	// (0x0002e211) popup_adpt_find_window

0x68e1,	// (0x000346ba) afind_page_pane_ParamLimits

0x68e1,	// (0x000346ba) afind_page_pane

0x68f6,	// (0x000346cf) aid_size_cell_afind_ParamLimits

0x68f6,	// (0x000346cf) aid_size_cell_afind

0x6914,	// (0x000346ed) bg_popup_sub_pane_cp09_ParamLimits

0x6914,	// (0x000346ed) bg_popup_sub_pane_cp09

0x6921,	// (0x000346fa) find_pane_cp01_ParamLimits

0x6921,	// (0x000346fa) find_pane_cp01

0xd359,	// (0x0003b132) grid_afind_control_pane_ParamLimits

0xd359,	// (0x0003b132) grid_afind_control_pane

0x692e,	// (0x00034707) grid_afind_pane_ParamLimits

0x692e,	// (0x00034707) grid_afind_pane

0x694d,	// (0x00034726) cell_afind_pane_ParamLimits

0x694d,	// (0x00034726) cell_afind_pane

0xc847,	// (0x0003a620) afind_page_pane_g1

0x69b4,	// (0x0003478d) afind_page_pane_g2

0x69bd,	// (0x00034796) afind_page_pane_g3

0x0002,

0xf97d,	// (0x0003d756) afind_page_pane_g

0x69c6,	// (0x0003479f) afind_page_pane_t1

0xd36d,	// (0x0003b146) cell_afind_grid_control_pane_ParamLimits

0xd36d,	// (0x0003b146) cell_afind_grid_control_pane

0xd1df,	// (0x0003afb8) bg_button_pane_cp69_ParamLimits

0xd1df,	// (0x0003afb8) bg_button_pane_cp69

0x69e6,	// (0x000347bf) cell_afind_pane_g1_ParamLimits

0x69e6,	// (0x000347bf) cell_afind_pane_g1

0x69f3,	// (0x000347cc) cell_afind_pane_t1_ParamLimits

0x69f3,	// (0x000347cc) cell_afind_pane_t1

0xa5fd,	// (0x000383d6) bg_button_pane_cp72

0xd37c,	// (0x0003b155) cell_afind_grid_control_pane_g1

0x45cb,	// (0x000323a4) aid_image_placing_area_ParamLimits

0x45cb,	// (0x000323a4) aid_image_placing_area

0xcea0,	// (0x0003ac79) field_vitu_entry_pane_g1_ParamLimits

0xcea0,	// (0x0003ac79) field_vitu_entry_pane_g1

0xceac,	// (0x0003ac85) field_vitu_entry_pane_g2_ParamLimits

0xceac,	// (0x0003ac85) field_vitu_entry_pane_g2

0x0001,

0xf82a,	// (0x0003d603) field_vitu_entry_pane_g_ParamLimits

0xf82a,	// (0x0003d603) field_vitu_entry_pane_g

0x5ff4,	// (0x00033dcd) cell_vitu_itu_pane_g1_ParamLimits

0x6036,	// (0x00033e0f) cell_vitu_itu_pane_t3_ParamLimits

0x6036,	// (0x00033e0f) cell_vitu_itu_pane_t3

0xd188,	// (0x0003af61) mp4_progress_pane_t1_ParamLimits

0xd1a1,	// (0x0003af7a) mp4_progress_pane_t2_ParamLimits

0xf8c3,	// (0x0003d69c) mp4_progress_pane_t_ParamLimits

0xd1ba,	// (0x0003af93) mup_progress_pane_cp04_ParamLimits

0x68cd,	// (0x000346a6) main_myfav_hc_pane_t5_ParamLimits

0x68cd,	// (0x000346a6) main_myfav_hc_pane_t5

0x1c05,	// (0x0002f9de) aid_zoom_text_primary

0x0438,	// (0x0002e211) popup_adpt_find_window_ParamLimits

0x1c88,	// (0x0002fa61) main_cam_set_pane

0x14bc,	// (0x0002f295) cam4_zoom_pane_ParamLimits

0x14bc,	// (0x0002f295) cam4_zoom_pane

0x6a05,	// (0x000347de) main_cam_set_pane_g1_ParamLimits

0x6a05,	// (0x000347de) main_cam_set_pane_g1

0x6a13,	// (0x000347ec) main_cam_set_pane_g2_ParamLimits

0x6a13,	// (0x000347ec) main_cam_set_pane_g2

0x0001,

0xf984,	// (0x0003d75d) main_cam_set_pane_g_ParamLimits

0xf984,	// (0x0003d75d) main_cam_set_pane_g

0x6a34,	// (0x0003480d) main_cam_set_pane_t1_ParamLimits

0x6a34,	// (0x0003480d) main_cam_set_pane_t1

0x6a4f,	// (0x00034828) main_cset_listscroll_pane_ParamLimits

0x6a4f,	// (0x00034828) main_cset_listscroll_pane

0x6a6f,	// (0x00034848) main_cset_slider_pane_ParamLimits

0x6a6f,	// (0x00034848) main_cset_slider_pane

0xd38d,	// (0x0003b166) main_cset_list_pane_ParamLimits

0xd38d,	// (0x0003b166) main_cset_list_pane

0xd39d,	// (0x0003b176) scroll_pane_cp028

0x6a95,	// (0x0003486e) aid_area_touch_slider

0x6ab1,	// (0x0003488a) cset_slider_pane

0x6adb,	// (0x000348b4) main_cset_slider_pane_g1

0x6af0,	// (0x000348c9) main_cset_slider_pane_g2

0x0011,

0xf989,	// (0x0003d762) main_cset_slider_pane_g

0xd3ee,	// (0x0003b1c7) main_cset_slider_pane_t1

0x6b94,	// (0x0003496d) main_cset_slider_pane_t2

0x6bae,	// (0x00034987) main_cset_slider_pane_t3

0x6bc8,	// (0x000349a1) main_cset_slider_pane_t4

0x6be2,	// (0x000349bb) main_cset_slider_pane_t5

0x6bfc,	// (0x000349d5) main_cset_slider_pane_t6

0x6c11,	// (0x000349ea) main_cset_slider_pane_t7

0x000e,

0xf9ae,	// (0x0003d787) main_cset_slider_pane_t

0x6d15,	// (0x00034aee) cset_list_set_pane_ParamLimits

0x6d15,	// (0x00034aee) cset_list_set_pane

0x6d27,	// (0x00034b00) aid_position_infowindow_above

0x6d2f,	// (0x00034b08) aid_position_infowindow_below

0x6d37,	// (0x00034b10) cset_list_set_pane_g1_ParamLimits

0x6d37,	// (0x00034b10) cset_list_set_pane_g1

0x6d43,	// (0x00034b1c) cset_list_set_pane_g3_ParamLimits

0x6d43,	// (0x00034b1c) cset_list_set_pane_g3

0x0001,

0xf9cd,	// (0x0003d7a6) cset_list_set_pane_g_ParamLimits

0xf9cd,	// (0x0003d7a6) cset_list_set_pane_g

0x6d52,	// (0x00034b2b) cset_list_set_pane_t1_ParamLimits

0x6d52,	// (0x00034b2b) cset_list_set_pane_t1

0xa7ec,	// (0x000385c5) list_highlight_pane_cp021_ParamLimits

0xa7ec,	// (0x000385c5) list_highlight_pane_cp021

0xb130,	// (0x00038f09) cset_slider_pane_g1

0xb142,	// (0x00038f1b) cset_slider_pane_g2

0xb139,	// (0x00038f12) cset_slider_pane_g3

0x0002,

0xf9d2,	// (0x0003d7ab) cset_slider_pane_g

0x6d67,	// (0x00034b40) aid_area_touch_cam4_zoom

0x6d6f,	// (0x00034b48) cam4_zoom_cont_pane

0x6d77,	// (0x00034b50) cam4_zoom_pane_g1

0x6d7f,	// (0x00034b58) cam4_zoom_pane_g2

0x19b8,	// (0x0002f791) cam4_zoom_pane_g3

0x0002,

0xf9d9,	// (0x0003d7b2) cam4_zoom_pane_g

0x6d87,	// (0x00034b60) cam4_zoom_cont_pane_g1

0x6d90,	// (0x00034b69) cam4_zoom_cont_pane_g2

0x6d99,	// (0x00034b72) cam4_zoom_cont_pane_g3

0x0002,

0xf9e0,	// (0x0003d7b9) cam4_zoom_cont_pane_g

0x138b,	// (0x0002f164) call4_image_pane_ParamLimits

0x138b,	// (0x0002f164) call4_image_pane

0x6539,	// (0x00034312) call4_windows_conf_pane_ParamLimits

0x657e,	// (0x00034357) popup_call4_audio_in_window_ParamLimits

0x657e,	// (0x00034357) popup_call4_audio_in_window

0x9c68,	// (0x00037a41) bg_popup_call2_act_pane_cp02

0xd1eb,	// (0x0003afc4) call4_list_conf_pane

0xc847,	// (0x0003a620) call4_image_pane_g1

0xc847,	// (0x0003a620) call4_image_pane_g2

0x0001,

0xf6eb,	// (0x0003d4c4) call4_image_pane_g

0xd48e,	// (0x0003b267) list_single_graphic_popup_conf4_pane_ParamLimits

0xd48e,	// (0x0003b267) list_single_graphic_popup_conf4_pane

0x9c68,	// (0x00037a41) list_highlight_pane_cp022

0xd4a1,	// (0x0003b27a) list_single_graphic_popup_conf4_pane_g1

0xad2c,	// (0x00038b05) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9e7,	// (0x0003d7c0) list_single_graphic_popup_conf4_pane_g

0xd4a9,	// (0x0003b282) list_single_graphic_popup_conf4_pane_t1

0x2afc,	// (0x000308d5) popup_vtel_slider_window_ParamLimits

0x2afc,	// (0x000308d5) popup_vtel_slider_window

0xd1cd,	// (0x0003afa6) dialer2_ne_pane_t2_ParamLimits

0xd1cd,	// (0x0003afa6) dialer2_ne_pane_t2

0x0001,

0xf8c8,	// (0x0003d6a1) dialer2_ne_pane_t_ParamLimits

0xf8c8,	// (0x0003d6a1) dialer2_ne_pane_t

0xc62c,	// (0x0003a405) bg_popup_sub_pane_cp010_ParamLimits

0xc62c,	// (0x0003a405) bg_popup_sub_pane_cp010

0x6da2,	// (0x00034b7b) popup_vtel_slider_window_g1_ParamLimits

0x6da2,	// (0x00034b7b) popup_vtel_slider_window_g1

0x6db5,	// (0x00034b8e) popup_vtel_slider_window_g2_ParamLimits

0x6db5,	// (0x00034b8e) popup_vtel_slider_window_g2

0x0003,

0xf9ec,	// (0x0003d7c5) popup_vtel_slider_window_g_ParamLimits

0xf9ec,	// (0x0003d7c5) popup_vtel_slider_window_g

0x6e0b,	// (0x00034be4) vtel_slider_pane_ParamLimits

0x6e0b,	// (0x00034be4) vtel_slider_pane

0x6e2d,	// (0x00034c06) vtel_slider_pane_g1_ParamLimits

0x6e2d,	// (0x00034c06) vtel_slider_pane_g1

0x6e41,	// (0x00034c1a) vtel_slider_pane_g2_ParamLimits

0x6e41,	// (0x00034c1a) vtel_slider_pane_g2

0x6e59,	// (0x00034c32) vtel_slider_pane_g3_ParamLimits

0x6e59,	// (0x00034c32) vtel_slider_pane_g3

0x6e2d,	// (0x00034c06) vtel_slider_pane_g4_ParamLimits

0x6e2d,	// (0x00034c06) vtel_slider_pane_g4

0x6e6f,	// (0x00034c48) vtel_slider_pane_g5_ParamLimits

0x6e6f,	// (0x00034c48) vtel_slider_pane_g5

0x0004,

0xf9f5,	// (0x0003d7ce) vtel_slider_pane_g_ParamLimits

0xf9f5,	// (0x0003d7ce) vtel_slider_pane_g

0x1c88,	// (0x0002fa61) main_gallery2_pane

0x1688,	// (0x0002f461) aid_size_row_itut2_dropdow_list_ParamLimits

0x1688,	// (0x0002f461) aid_size_row_itut2_dropdow_list

0x1714,	// (0x0002f4ed) grid_vitu2_function_top_pane_ParamLimits

0x1714,	// (0x0002f4ed) grid_vitu2_function_top_pane

0x177e,	// (0x0002f557) popup_vitu2_dropdown_list_window_ParamLimits

0x177e,	// (0x0002f557) popup_vitu2_dropdown_list_window

0x17a7,	// (0x0002f580) popup_vitu2_match_list_window

0x19c0,	// (0x0002f799) cell_vitu2_function_top_pane_ParamLimits

0x19c0,	// (0x0002f799) cell_vitu2_function_top_pane

0x19d8,	// (0x0002f7b1) cell_vitu2_function_top_pane_cp01_ParamLimits

0x19d8,	// (0x0002f7b1) cell_vitu2_function_top_pane_cp01

0x19f4,	// (0x0002f7cd) cell_vitu2_function_top_wide_pane_ParamLimits

0x19f4,	// (0x0002f7cd) cell_vitu2_function_top_wide_pane

0x1c88,	// (0x0002fa61) bg_button_pane_cp012

0x1a10,	// (0x0002f7e9) cell_vitu2_function_top_pane_g1

0x6e85,	// (0x00034c5e) bg_button_pane_cp013_ParamLimits

0x6e85,	// (0x00034c5e) bg_button_pane_cp013

0x6ea1,	// (0x00034c7a) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6ea1,	// (0x00034c7a) cell_vitu2_function_top_wide_pane_g1

0x1c88,	// (0x0002fa61) bg_popup_sub_pane_cp20

0x1a24,	// (0x0002f7fd) list_vitu2_match_list_pane

0xd283,	// (0x0003b05c) bg_popup_sub_pane_cp20_g1

0xd28b,	// (0x0003b064) bg_popup_sub_pane_cp20_g2

0xa812,	// (0x000385eb) bg_popup_sub_pane_cp20_g3

0xd293,	// (0x0003b06c) bg_popup_sub_pane_cp20_g4

0xa7e4,	// (0x000385bd) bg_popup_sub_pane_cp20_g5

0xd4cd,	// (0x0003b2a6) bg_popup_sub_pane_cp20_g6

0xd2a3,	// (0x0003b07c) bg_popup_sub_pane_cp20_g7

0xd2ab,	// (0x0003b084) bg_popup_sub_pane_cp20_g8

0xd2b3,	// (0x0003b08c) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa00,	// (0x0003d7d9) bg_popup_sub_pane_cp20_g

0x6eb9,	// (0x00034c92) list_vitu2_match_list_item_pane_ParamLimits

0x6eb9,	// (0x00034c92) list_vitu2_match_list_item_pane

0x6ecb,	// (0x00034ca4) list_vitu2_match_list_item_pane_t1

0x1ca2,	// (0x0002fa7b) bg_popup_sub_pane_cp21

0x6f29,	// (0x00034d02) grid_vitu2_dropdown_list_pane

0x1a42,	// (0x0002f81b) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x1a42,	// (0x0002f81b) cell_vitu2_dropdown_list_char_pane

0x1a63,	// (0x0002f83c) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x1a63,	// (0x0002f83c) cell_vitu2_dropdown_list_ctrl_pane

0xd4d5,	// (0x0003b2ae) cell_vitu2_dropdown_list_char_pane_g1

0xd4de,	// (0x0003b2b7) cell_vitu2_dropdown_list_char_pane_g2

0xd4e7,	// (0x0003b2c0) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa1d,	// (0x0003d7f6) cell_vitu2_dropdown_list_char_pane_g

0x1a8f,	// (0x0002f868) cell_vitu2_dropdown_list_char_pane_t1

0x6f31,	// (0x00034d0a) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6f31,	// (0x00034d0a) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6f3e,	// (0x00034d17) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6f3e,	// (0x00034d17) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6f4b,	// (0x00034d24) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6f4b,	// (0x00034d24) cell_vitu2_dropdown_list_ctrl_pane_g3

0x1a9d,	// (0x0002f876) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x1a9d,	// (0x0002f876) cell_vitu2_dropdown_list_ctrl_pane_g4

0x664b,	// (0x00034424) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x664b,	// (0x00034424) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa24,	// (0x0003d7fd) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa24,	// (0x0003d7fd) cell_vitu2_dropdown_list_ctrl_pane_g

0x6f58,	// (0x00034d31) aid_size_cell_gallery2_ParamLimits

0x6f58,	// (0x00034d31) aid_size_cell_gallery2

0x6f76,	// (0x00034d4f) grid_gallery2_pane_ParamLimits

0x6f76,	// (0x00034d4f) grid_gallery2_pane

0x6f90,	// (0x00034d69) scroll_pane_cp029_ParamLimits

0x6f90,	// (0x00034d69) scroll_pane_cp029

0x6fa1,	// (0x00034d7a) cell_gallery2_pane_ParamLimits

0x6fa1,	// (0x00034d7a) cell_gallery2_pane

0xd4f0,	// (0x0003b2c9) cell_gallery2_pane_g2

0x7000,	// (0x00034dd9) cell_gallery2_pane_g3

0xd4f8,	// (0x0003b2d1) cell_gallery2_pane_g4

0xd500,	// (0x0003b2d9) cell_gallery2_pane_g5

0xa5ab,	// (0x00038384) grid_highlight_pane_cp10

0x17a7,	// (0x0002f580) popup_vitu2_match_list_window_ParamLimits

0x17bc,	// (0x0002f595) popup_vitu2_query_window_ParamLimits

0x17bc,	// (0x0002f595) popup_vitu2_query_window

0x1ca2,	// (0x0002fa7b) bg_vitu2_candi_button_pane

0xd4d5,	// (0x0003b2ae) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd4de,	// (0x0003b2b7) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd4e7,	// (0x0003b2c0) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x7008,	// (0x00034de1) bg_button_pane_cp015

0x701c,	// (0x00034df5) bg_button_pane_cp016

0x702f,	// (0x00034e08) bg_button_pane_cp017

0xc43f,	// (0x0003a218) bg_popup_sub_pane_cp22

0xd508,	// (0x0003b2e1) popup_vitu2_query_window_g1

0x7074,	// (0x00034e4d) popup_vitu2_query_window_g2

0x0002,

0xfa2f,	// (0x0003d808) popup_vitu2_query_window_g

0x7093,	// (0x00034e6c) popup_vitu2_query_window_t1_ParamLimits

0x7093,	// (0x00034e6c) popup_vitu2_query_window_t1

0x70c8,	// (0x00034ea1) popup_vitu2_query_window_t2_ParamLimits

0x70c8,	// (0x00034ea1) popup_vitu2_query_window_t2

0x70da,	// (0x00034eb3) popup_vitu2_query_window_t3_ParamLimits

0x70da,	// (0x00034eb3) popup_vitu2_query_window_t3

0x7102,	// (0x00034edb) popup_vitu2_query_window_t4_ParamLimits

0x7102,	// (0x00034edb) popup_vitu2_query_window_t4

0x7123,	// (0x00034efc) popup_vitu2_query_window_t5_ParamLimits

0x7123,	// (0x00034efc) popup_vitu2_query_window_t5

0x0006,

0xfa36,	// (0x0003d80f) popup_vitu2_query_window_t_ParamLimits

0xfa36,	// (0x0003d80f) popup_vitu2_query_window_t

0xd385,	// (0x0003b15e) main_cset_text_pane

0x6a95,	// (0x0003486e) aid_area_touch_slider_ParamLimits

0x6ab1,	// (0x0003488a) cset_slider_pane_ParamLimits

0x6adb,	// (0x000348b4) main_cset_slider_pane_g1_ParamLimits

0x6af0,	// (0x000348c9) main_cset_slider_pane_g2_ParamLimits

0xd3a6,	// (0x0003b17f) main_cset_slider_pane_g3_ParamLimits

0xd3a6,	// (0x0003b17f) main_cset_slider_pane_g3

0x6b05,	// (0x000348de) main_cset_slider_pane_g4_ParamLimits

0x6b05,	// (0x000348de) main_cset_slider_pane_g4

0x6b14,	// (0x000348ed) main_cset_slider_pane_g5_ParamLimits

0x6b14,	// (0x000348ed) main_cset_slider_pane_g5

0x6b20,	// (0x000348f9) main_cset_slider_pane_g6_ParamLimits

0x6b20,	// (0x000348f9) main_cset_slider_pane_g6

0xf989,	// (0x0003d762) main_cset_slider_pane_g_ParamLimits

0xd3ee,	// (0x0003b1c7) main_cset_slider_pane_t1_ParamLimits

0x6b94,	// (0x0003496d) main_cset_slider_pane_t2_ParamLimits

0x6bae,	// (0x00034987) main_cset_slider_pane_t3_ParamLimits

0x6bc8,	// (0x000349a1) main_cset_slider_pane_t4_ParamLimits

0x6be2,	// (0x000349bb) main_cset_slider_pane_t5_ParamLimits

0x6bfc,	// (0x000349d5) main_cset_slider_pane_t6_ParamLimits

0x6c11,	// (0x000349ea) main_cset_slider_pane_t7_ParamLimits

0x6c3b,	// (0x00034a14) main_cset_slider_pane_t8_ParamLimits

0x6c3b,	// (0x00034a14) main_cset_slider_pane_t8

0x6c63,	// (0x00034a3c) main_cset_slider_pane_t9_ParamLimits

0x6c63,	// (0x00034a3c) main_cset_slider_pane_t9

0x6c8b,	// (0x00034a64) main_cset_slider_pane_t10_ParamLimits

0x6c8b,	// (0x00034a64) main_cset_slider_pane_t10

0x6cb3,	// (0x00034a8c) main_cset_slider_pane_t11_ParamLimits

0x6cb3,	// (0x00034a8c) main_cset_slider_pane_t11

0x6cdb,	// (0x00034ab4) main_cset_slider_pane_t12_ParamLimits

0x6cdb,	// (0x00034ab4) main_cset_slider_pane_t12

0x6cf8,	// (0x00034ad1) main_cset_slider_pane_t13_ParamLimits

0x6cf8,	// (0x00034ad1) main_cset_slider_pane_t13

0xf9ae,	// (0x0003d787) main_cset_slider_pane_t_ParamLimits

0x9c68,	// (0x00037a41) bg_popup_sub_pane_cp011

0xd514,	// (0x0003b2ed) main_cset_text_pane_g1

0xd51c,	// (0x0003b2f5) main_cset_text_pane_t1

0xd52a,	// (0x0003b303) main_cset_text_pane_t2

0xd538,	// (0x0003b311) main_cset_text_pane_t3

0xd546,	// (0x0003b31f) main_cset_text_pane_t4

0xd554,	// (0x0003b32d) main_cset_text_pane_t5

0xd562,	// (0x0003b33b) main_cset_text_pane_t6

0xd570,	// (0x0003b349) main_cset_text_pane_t7

0x0006,

0xfa45,	// (0x0003d81e) main_cset_text_pane_t

0x1ca2,	// (0x0002fa7b) main_cam4_burst_pane

0x1ca2,	// (0x0002fa7b) main_cam5_pane

0x69d4,	// (0x000347ad) bg_button_pane_cp019

0x69dd,	// (0x000347b6) bg_button_pane_cp020

0xd3b2,	// (0x0003b18b) main_cset_slider_pane_g7_ParamLimits

0xd3b2,	// (0x0003b18b) main_cset_slider_pane_g7

0xd3be,	// (0x0003b197) main_cset_slider_pane_g8_ParamLimits

0xd3be,	// (0x0003b197) main_cset_slider_pane_g8

0x6b34,	// (0x0003490d) main_cset_slider_pane_g9_ParamLimits

0x6b34,	// (0x0003490d) main_cset_slider_pane_g9

0x6b40,	// (0x00034919) main_cset_slider_pane_g10_ParamLimits

0x6b40,	// (0x00034919) main_cset_slider_pane_g10

0x6b4c,	// (0x00034925) main_cset_slider_pane_g11_ParamLimits

0x6b4c,	// (0x00034925) main_cset_slider_pane_g11

0x6b58,	// (0x00034931) main_cset_slider_pane_g12_ParamLimits

0x6b58,	// (0x00034931) main_cset_slider_pane_g12

0x6b64,	// (0x0003493d) main_cset_slider_pane_g13_ParamLimits

0x6b64,	// (0x0003493d) main_cset_slider_pane_g13

0x6b70,	// (0x00034949) main_cset_slider_pane_g14_ParamLimits

0x6b70,	// (0x00034949) main_cset_slider_pane_g14

0x6b7c,	// (0x00034955) main_cset_slider_pane_g15_ParamLimits

0x6b7c,	// (0x00034955) main_cset_slider_pane_g15

0xd41c,	// (0x0003b1f5) main_cset_slider_pane_t14_ParamLimits

0xd41c,	// (0x0003b1f5) main_cset_slider_pane_t14

0xd455,	// (0x0003b22e) main_cset_slider_pane_t15_ParamLimits

0xd455,	// (0x0003b22e) main_cset_slider_pane_t15

0x719a,	// (0x00034f73) aid_cam4_burst_size_cell_ParamLimits

0x719a,	// (0x00034f73) aid_cam4_burst_size_cell

0x71ba,	// (0x00034f93) grid_cam4_burst_pane_ParamLimits

0x71ba,	// (0x00034f93) grid_cam4_burst_pane

0x71f2,	// (0x00034fcb) linegrid_cam4_burst_pane_ParamLimits

0x71f2,	// (0x00034fcb) linegrid_cam4_burst_pane

0xd662,	// (0x0003b43b) scroll_pane_cp30_ParamLimits

0xd662,	// (0x0003b43b) scroll_pane_cp30

0x7216,	// (0x00034fef) cell_cam4_burst_pane_ParamLimits

0x7216,	// (0x00034fef) cell_cam4_burst_pane

0xd57e,	// (0x0003b357) linegrid_cam4_burst_pane_g1_ParamLimits

0xd57e,	// (0x0003b357) linegrid_cam4_burst_pane_g1

0x7263,	// (0x0003503c) linegrid_cam4_burst_pane_g2_ParamLimits

0x7263,	// (0x0003503c) linegrid_cam4_burst_pane_g2

0xd58b,	// (0x0003b364) linegrid_cam4_burst_pane_g3_ParamLimits

0xd58b,	// (0x0003b364) linegrid_cam4_burst_pane_g3

0x0002,

0xfa54,	// (0x0003d82d) linegrid_cam4_burst_pane_g_ParamLimits

0xfa54,	// (0x0003d82d) linegrid_cam4_burst_pane_g

0x7274,	// (0x0003504d) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7274,	// (0x0003504d) linegrid_cam4_burst_pane_g3_copy1

0xd598,	// (0x0003b371) linegrid_cam4_burst_pane_g4_ParamLimits

0xd598,	// (0x0003b371) linegrid_cam4_burst_pane_g4

0x728e,	// (0x00035067) linegrid_cam4_burst_pane_g5_ParamLimits

0x728e,	// (0x00035067) linegrid_cam4_burst_pane_g5

0x729f,	// (0x00035078) linegrid_cam4_burst_pane_g6_ParamLimits

0x729f,	// (0x00035078) linegrid_cam4_burst_pane_g6

0xd5a5,	// (0x0003b37e) linegrid_cam4_burst_pane_g7_ParamLimits

0xd5a5,	// (0x0003b37e) linegrid_cam4_burst_pane_g7

0x72b6,	// (0x0003508f) cell_cam4_burst_pane_g1

0xd5be,	// (0x0003b397) main_cam5_pane_t1_ParamLimits

0xd5be,	// (0x0003b397) main_cam5_pane_t1

0xd5d0,	// (0x0003b3a9) main_cam5_pane_t2_ParamLimits

0xd5d0,	// (0x0003b3a9) main_cam5_pane_t2

0xd5e2,	// (0x0003b3bb) main_cam5_pane_t3_ParamLimits

0xd5e2,	// (0x0003b3bb) main_cam5_pane_t3

0xd5f4,	// (0x0003b3cd) main_cam5_pane_t4_ParamLimits

0xd5f4,	// (0x0003b3cd) main_cam5_pane_t4

0xd60c,	// (0x0003b3e5) main_cam5_pane_t5_ParamLimits

0xd60c,	// (0x0003b3e5) main_cam5_pane_t5

0xd620,	// (0x0003b3f9) main_cam5_pane_t6_ParamLimits

0xd620,	// (0x0003b3f9) main_cam5_pane_t6

0xd66e,	// (0x0003b447) main_cam5_pane_t7_ParamLimits

0xd66e,	// (0x0003b447) main_cam5_pane_t7

0xd680,	// (0x0003b459) main_cam5_pane_t8_ParamLimits

0xd680,	// (0x0003b459) main_cam5_pane_t8

0xd69c,	// (0x0003b475) main_cam5_pane_t9_ParamLimits

0xd69c,	// (0x0003b475) main_cam5_pane_t9

0xd6ae,	// (0x0003b487) main_cam5_pane_t10_ParamLimits

0xd6ae,	// (0x0003b487) main_cam5_pane_t10

0xd6c0,	// (0x0003b499) main_cam5_pane_t11_ParamLimits

0xd6c0,	// (0x0003b499) main_cam5_pane_t11

0xd6d2,	// (0x0003b4ab) main_cam5_pane_t12_ParamLimits

0xd6d2,	// (0x0003b4ab) main_cam5_pane_t12

0xd6e7,	// (0x0003b4c0) main_cam5_pane_t13_ParamLimits

0xd6e7,	// (0x0003b4c0) main_cam5_pane_t13

0x000c,

0xfa60,	// (0x0003d839) main_cam5_pane_t_ParamLimits

0xfa60,	// (0x0003d839) main_cam5_pane_t

0x04ba,	// (0x0002e293) popup_scut_keymap_window_ParamLimits

0x04ba,	// (0x0002e293) popup_scut_keymap_window

0x72c9,	// (0x000350a2) aid_size_cell_brow_shortcut

0xa5ab,	// (0x00038384) bg_popup_window_pane_cp010

0x72d5,	// (0x000350ae) grid_scut_pane

0x72e1,	// (0x000350ba) cell_scut_pane_ParamLimits

0x72e1,	// (0x000350ba) cell_scut_pane

0x72f8,	// (0x000350d1) cell_scut_pane_g1

0xd704,	// (0x0003b4dd) cell_scut_pane_t1

0xd713,	// (0x0003b4ec) cell_scut_pane_t2

0x7301,	// (0x000350da) cell_scut_pane_t3

0x0002,

0xfa7b,	// (0x0003d854) cell_scut_pane_t

0x5590,	// (0x00033369) main_mup3_pane_g8_ParamLimits

0x5590,	// (0x00033369) main_mup3_pane_g8

0x16a0,	// (0x0002f479) area_vitu2_query_pane_ParamLimits

0x16a0,	// (0x0002f479) area_vitu2_query_pane

0x7042,	// (0x00034e1b) input_focus_pane_cp08

0xd722,	// (0x0003b4fb) area_vitu2_query_pane_g1

0x730f,	// (0x000350e8) area_vitu2_query_pane_g2

0x0001,

0xfa82,	// (0x0003d85b) area_vitu2_query_pane_g

0x7320,	// (0x000350f9) area_vitu2_query_pane_t1_ParamLimits

0x7320,	// (0x000350f9) area_vitu2_query_pane_t1

0x7334,	// (0x0003510d) area_vitu2_query_pane_t2_ParamLimits

0x7334,	// (0x0003510d) area_vitu2_query_pane_t2

0x7348,	// (0x00035121) area_vitu2_query_pane_t3_ParamLimits

0x7348,	// (0x00035121) area_vitu2_query_pane_t3

0xd72e,	// (0x0003b507) area_vitu2_query_pane_t4_ParamLimits

0xd72e,	// (0x0003b507) area_vitu2_query_pane_t4

0xd756,	// (0x0003b52f) area_vitu2_query_pane_t5_ParamLimits

0xd756,	// (0x0003b52f) area_vitu2_query_pane_t5

0xd77e,	// (0x0003b557) area_vitu2_query_pane_t6_ParamLimits

0xd77e,	// (0x0003b557) area_vitu2_query_pane_t6

0x0006,

0xfa87,	// (0x0003d860) area_vitu2_query_pane_t_ParamLimits

0xfa87,	// (0x0003d860) area_vitu2_query_pane_t

0x7370,	// (0x00035149) bg_button_pane_cp018

0x737e,	// (0x00035157) bg_button_pane_cp021

0x738a,	// (0x00035163) bg_button_pane_cp022

0x739b,	// (0x00035174) input_focus_pane_cp09

0xae3b,	// (0x00038c14) aid_size_touch_mv_arrow_left

0xae66,	// (0x00038c3f) aid_size_touch_mv_arrow_right

0xd3ca,	// (0x0003b1a3) main_cset_slider_pane_g16_ParamLimits

0xd3ca,	// (0x0003b1a3) main_cset_slider_pane_g16

0xd3d6,	// (0x0003b1af) main_cset_slider_pane_g17_ParamLimits

0xd3d6,	// (0x0003b1af) main_cset_slider_pane_g17

0x72b6,	// (0x0003508f) cell_cam4_burst_pane_g1_ParamLimits

0x9c68,	// (0x00037a41) compa_mode_pane

0x6dc5,	// (0x00034b9e) popup_vtel_slider_window_g3_ParamLimits

0x6dc5,	// (0x00034b9e) popup_vtel_slider_window_g3

0x6ddc,	// (0x00034bb5) popup_vtel_slider_window_g4_ParamLimits

0x6ddc,	// (0x00034bb5) popup_vtel_slider_window_g4

0x6df3,	// (0x00034bcc) popup_vtel_slider_window_t1_ParamLimits

0x6df3,	// (0x00034bcc) popup_vtel_slider_window_t1

0x1ca2,	// (0x0002fa7b) main_cl_pane

0x4b08,	// (0x000328e1) popup_imed_adjust2_window_ParamLimits

0xc43f,	// (0x0003a218) bg_tb_trans_pane_cp05_ParamLimits

0xcdd5,	// (0x0003abae) popup_imed_adjust2_window_g1_ParamLimits

0xcde4,	// (0x0003abbd) popup_imed_adjust2_window_g2_ParamLimits

0xcde4,	// (0x0003abbd) popup_imed_adjust2_window_g2

0xcdf0,	// (0x0003abc9) popup_imed_adjust2_window_g3_ParamLimits

0xcdf0,	// (0x0003abc9) popup_imed_adjust2_window_g3

0x0002,

0xf7ee,	// (0x0003d5c7) popup_imed_adjust2_window_g_ParamLimits

0xf7ee,	// (0x0003d5c7) popup_imed_adjust2_window_g

0xcdfc,	// (0x0003abd5) popup_imed_adjust2_window_t1_ParamLimits

0xce14,	// (0x0003abed) slider_imed_adjust_pane_ParamLimits

0xce28,	// (0x0003ac01) slider_imed_adjust_pane_g1_ParamLimits

0xce38,	// (0x0003ac11) slider_imed_adjust_pane_g2_ParamLimits

0xce48,	// (0x0003ac21) slider_imed_adjust_pane_g3_ParamLimits

0xce59,	// (0x0003ac32) slider_imed_adjust_pane_g4_ParamLimits

0xf7f5,	// (0x0003d5ce) slider_imed_adjust_pane_g_ParamLimits

0x145d,	// (0x0002f236) aid_touch_area_cam4_ParamLimits

0x145d,	// (0x0002f236) aid_touch_area_cam4

0x661b,	// (0x000343f4) battery_pane_cp01

0x152c,	// (0x0002f305) main_camera4_pane_g6_ParamLimits

0x152c,	// (0x0002f305) main_camera4_pane_g6

0x1556,	// (0x0002f32f) main_camera4_pane_t2_ParamLimits

0x1556,	// (0x0002f32f) main_camera4_pane_t2

0x0001,

0xf8fc,	// (0x0003d6d5) main_camera4_pane_t_ParamLimits

0xf8fc,	// (0x0003d6d5) main_camera4_pane_t

0x1577,	// (0x0002f350) aid_touch_area_vid4_ParamLimits

0x1577,	// (0x0002f350) aid_touch_area_vid4

0x15cb,	// (0x0002f3a4) main_video4_pane_g5_ParamLimits

0x15cb,	// (0x0002f3a4) main_video4_pane_g5

0x15f0,	// (0x0002f3c9) vid4_progress_pane_ParamLimits

0x15f0,	// (0x0002f3c9) vid4_progress_pane

0xd3e2,	// (0x0003b1bb) main_cset_slider_pane_g18_ParamLimits

0xd3e2,	// (0x0003b1bb) main_cset_slider_pane_g18

0xd5b2,	// (0x0003b38b) cell_cam4_burst_pane_g2_ParamLimits

0xd5b2,	// (0x0003b38b) cell_cam4_burst_pane_g2

0x0001,

0xfa5b,	// (0x0003d834) cell_cam4_burst_pane_g_ParamLimits

0xfa5b,	// (0x0003d834) cell_cam4_burst_pane_g

0xa3b1,	// (0x0003818a) bg_cl_pane_ParamLimits

0xa3b1,	// (0x0003818a) bg_cl_pane

0x73ac,	// (0x00035185) cl_header_pane_ParamLimits

0x73ac,	// (0x00035185) cl_header_pane

0x73c0,	// (0x00035199) cl_listscroll_pane_ParamLimits

0x73c0,	// (0x00035199) cl_listscroll_pane

0xd7ca,	// (0x0003b5a3) bg_cl_pane_g1

0xd7d2,	// (0x0003b5ab) bg_cl_pane_g2

0xd7da,	// (0x0003b5b3) bg_cl_pane_g3

0xd7e2,	// (0x0003b5bb) bg_cl_pane_g4

0xd7ea,	// (0x0003b5c3) bg_cl_pane_g5

0xd7f2,	// (0x0003b5cb) bg_cl_pane_g6

0xd7fa,	// (0x0003b5d3) bg_cl_pane_g7

0xd802,	// (0x0003b5db) bg_cl_pane_g8

0xd80a,	// (0x0003b5e3) bg_cl_pane_g9

0x0008,

0xfa96,	// (0x0003d86f) bg_cl_pane_g

0x73d0,	// (0x000351a9) aid_height_cl_leading_ParamLimits

0x73d0,	// (0x000351a9) aid_height_cl_leading

0x73dc,	// (0x000351b5) aid_height_cl_text_ParamLimits

0x73dc,	// (0x000351b5) aid_height_cl_text

0xa7ec,	// (0x000385c5) bg_cl_header_pane_ParamLimits

0xa7ec,	// (0x000385c5) bg_cl_header_pane

0x73fb,	// (0x000351d4) cl_header_pane_g1_ParamLimits

0x73fb,	// (0x000351d4) cl_header_pane_g1

0x7411,	// (0x000351ea) cl_header_pane_t1_ParamLimits

0x7411,	// (0x000351ea) cl_header_pane_t1

0xd812,	// (0x0003b5eb) cl_list_pane

0xd39d,	// (0x0003b176) hc_scroll_pane_cp01

0xa7e4,	// (0x000385bd) bg_cl_header_pane_g1

0xd283,	// (0x0003b05c) bg_cl_header_pane_g2

0xa812,	// (0x000385eb) bg_cl_header_pane_g3

0xd293,	// (0x0003b06c) bg_cl_header_pane_g4

0xd28b,	// (0x0003b064) bg_cl_header_pane_g5

0xd4cd,	// (0x0003b2a6) bg_cl_header_pane_g6

0xd2ab,	// (0x0003b084) bg_cl_header_pane_g7

0xd2b3,	// (0x0003b08c) bg_cl_header_pane_g8

0xd2a3,	// (0x0003b07c) bg_cl_header_pane_g9

0x0008,

0xfaa9,	// (0x0003d882) bg_cl_header_pane_g

0x742a,	// (0x00035203) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x742a,	// (0x00035203) hc_cl_list_double_graphic_heading_pane

0x743b,	// (0x00035214) hc_cl_list_single_graphic_pane_ParamLimits

0x743b,	// (0x00035214) hc_cl_list_single_graphic_pane

0x7454,	// (0x0003522d) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7454,	// (0x0003522d) hc_cl_list_single_graphic_pane_g1

0x7460,	// (0x00035239) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7460,	// (0x00035239) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfabc,	// (0x0003d895) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfabc,	// (0x0003d895) hc_cl_list_single_graphic_pane_g

0x7474,	// (0x0003524d) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7474,	// (0x0003524d) hc_cl_list_single_graphic_pane_t1

0x7454,	// (0x0003522d) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7454,	// (0x0003522d) hc_cl_list_double_graphic_heading_pane_g1

0x7489,	// (0x00035262) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7489,	// (0x00035262) hc_cl_list_double_graphic_heading_pane_g2

0x749d,	// (0x00035276) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x749d,	// (0x00035276) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfac1,	// (0x0003d89a) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfac1,	// (0x0003d89a) hc_cl_list_double_graphic_heading_pane_g

0x74b1,	// (0x0003528a) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x74b1,	// (0x0003528a) hc_cl_list_double_graphic_heading_pane_t1

0x74c6,	// (0x0003529f) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x74c6,	// (0x0003529f) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfac8,	// (0x0003d8a1) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfac8,	// (0x0003d8a1) hc_cl_list_double_graphic_heading_pane_t

0x74e3,	// (0x000352bc) vid4_progress_pane_g1

0x74f3,	// (0x000352cc) vid4_progress_pane_g2

0x1ab9,	// (0x0002f892) vid4_progress_pane_g3

0x7503,	// (0x000352dc) vid4_progress_pane_g4

0x0004,

0xfacd,	// (0x0003d8a6) vid4_progress_pane_g

0x1acb,	// (0x0002f8a4) vid4_progress_pane_t1

0x751b,	// (0x000352f4) vid4_progress_pane_t2

0x0002,

0xfad8,	// (0x0003d8b1) vid4_progress_pane_t

0x1ae1,	// (0x0002f8ba) wait_bar_pane_cp07

0xc63a,	// (0x0003a413) blid_firmament_pane_ParamLimits

0xc67d,	// (0x0003a456) popup_blid_sat_info2_window_g1

0xc6a1,	// (0x0003a47a) popup_blid_sat_info2_window_t3

0xc6af,	// (0x0003a488) popup_blid_sat_info2_window_t4

0xc6bd,	// (0x0003a496) popup_blid_sat_info2_window_t5

0xc6cb,	// (0x0003a4a4) popup_blid_sat_info2_window_t6

0xc6db,	// (0x0003a4b4) popup_blid_sat_info2_window_t7

0xc6e9,	// (0x0003a4c2) popup_blid_sat_info2_window_t8

0xc6f7,	// (0x0003a4d0) popup_blid_sat_info2_window_t9

0xc705,	// (0x0003a4de) popup_blid_sat_info2_window_t10

0xc7c7,	// (0x0003a5a0) aid_firma_cardinal_ParamLimits

0xc7db,	// (0x0003a5b4) blid_firmament_pane_t1_ParamLimits

0xc7f2,	// (0x0003a5cb) blid_firmament_pane_t2_ParamLimits

0xc809,	// (0x0003a5e2) blid_firmament_pane_t3_ParamLimits

0xc820,	// (0x0003a5f9) blid_firmament_pane_t4_ParamLimits

0xf6e2,	// (0x0003d4bb) blid_firmament_pane_t_ParamLimits

0xc837,	// (0x0003a610) blid_sat_info_pane_ParamLimits

0x1c88,	// (0x0002fa61) main_cam_set_pane_ParamLimits

0x5dac,	// (0x00033b85) aid_size_cell_colour_35_ParamLimits

0x5dcc,	// (0x00033ba5) aid_size_cell_colour_112_ParamLimits

0x5dec,	// (0x00033bc5) aid_size_cell_effect_ParamLimits

0xc43f,	// (0x0003a218) bg_tb_trans_pane_cp02_ParamLimits

0xaa5a,	// (0x00038833) heading_imed_pane_ParamLimits

0x5e0c,	// (0x00033be5) listscroll_imed_pane_ParamLimits

0xba2b,	// (0x00039804) popup_call2_audio_first_window_g5_ParamLimits

0xba2b,	// (0x00039804) popup_call2_audio_first_window_g5

0x114a,	// (0x0002ef23) aid_size_touch_image3_arrow_left_ParamLimits

0x114a,	// (0x0002ef23) aid_size_touch_image3_arrow_left

0x1176,	// (0x0002ef4f) aid_size_touch_image3_arrow_right_ParamLimits

0x1176,	// (0x0002ef4f) aid_size_touch_image3_arrow_right

0x7530,	// (0x00035309) vid4_progress_pane_t3

0x6121,	// (0x00033efa) main_hwr_training_symbol_option_pane_ParamLimits

0x6121,	// (0x00033efa) main_hwr_training_symbol_option_pane

0xd0c2,	// (0x0003ae9b) popup_hwr_training_preview_window_ParamLimits

0xd0c2,	// (0x0003ae9b) popup_hwr_training_preview_window

0x0ff1,	// (0x0002edca) hwr_training_navi_pane_g5_ParamLimits

0x0ff1,	// (0x0002edca) hwr_training_navi_pane_g5

0xd271,	// (0x0003b04a) popup_char_count_window

0x1c88,	// (0x0002fa61) bg_popup_sub_pane_cp20_ParamLimits

0x1a24,	// (0x0002f7fd) list_vitu2_match_list_pane_ParamLimits

0x1a33,	// (0x0002f80c) vitu2_page_scroll_pane_ParamLimits

0x1a33,	// (0x0002f80c) vitu2_page_scroll_pane

0xd83d,	// (0x0003b616) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd83d,	// (0x0003b616) list_single_hwr_training_symbol_option_pane

0xd850,	// (0x0003b629) list_single_hwr_training_symbol_option_pane_g1

0xd858,	// (0x0003b631) list_single_hwr_training_symbol_option_pane_t1

0xd866,	// (0x0003b63f) bg_button_pane_cp023

0xd86f,	// (0x0003b648) bg_button_pane_cp024

0x757e,	// (0x00035357) vitu2_page_scroll_pane_g1

0x7586,	// (0x0003535f) vitu2_page_scroll_pane_g2

0x0001,

0xfadf,	// (0x0003d8b8) vitu2_page_scroll_pane_g

0x758e,	// (0x00035367) vitu2_page_scroll_pane_t1

0xa432,	// (0x0003820b) popup_char_count_window_g1

0xd8a2,	// (0x0003b67b) popup_char_count_window_g2

0xcabf,	// (0x0003a898) popup_char_count_window_g3

0x0002,

0xfae4,	// (0x0003d8bd) popup_char_count_window_g

0xd8ab,	// (0x0003b684) popup_char_count_window_t1

0x1ca2,	// (0x0002fa7b) main_vded2_pane

0xcdc1,	// (0x0003ab9a) aid_size_cell_imed_line

0xcdcb,	// (0x0003aba4) grid_imed_line_width_pane

0x66ed,	// (0x000344c6) vid4_indicators_pane_g4

0xd8b9,	// (0x0003b692) cell_imed_line_width_pane_ParamLimits

0xd8b9,	// (0x0003b692) cell_imed_line_width_pane

0xd8cd,	// (0x0003b6a6) cell_imed_line_width_pane_g1

0xd650,	// (0x0003b429) cell_imed_line_width_pane_g2

0x0001,

0xfaeb,	// (0x0003d8c4) cell_imed_line_width_pane_g

0x759d,	// (0x00035376) main_vded2_pane_g1_ParamLimits

0x759d,	// (0x00035376) main_vded2_pane_g1

0x75b3,	// (0x0003538c) main_vded2_pane_g2_ParamLimits

0x75b3,	// (0x0003538c) main_vded2_pane_g2

0x0001,

0xfaf0,	// (0x0003d8c9) main_vded2_pane_g_ParamLimits

0xfaf0,	// (0x0003d8c9) main_vded2_pane_g

0x75c5,	// (0x0003539e) vded2_slider_pane_ParamLimits

0x75c5,	// (0x0003539e) vded2_slider_pane

0x75d5,	// (0x000353ae) aid_size_touch_vded2_end

0x75df,	// (0x000353b8) aid_size_touch_vded2_playhead

0xd8d6,	// (0x0003b6af) aid_size_touch_vded2_start

0xd8de,	// (0x0003b6b7) vded2_slider_bg_pane

0xd8e7,	// (0x0003b6c0) vded2_slider_pane_g1

0xd8f0,	// (0x0003b6c9) vded2_slider_pane_g2

0x75e9,	// (0x000353c2) vded2_slider_pane_g3

0x0002,

0xfaf5,	// (0x0003d8ce) vded2_slider_pane_g

0xd8f8,	// (0x0003b6d1) vded2_slider_bg_pane_g1

0xd901,	// (0x0003b6da) vded2_slider_bg_pane_g2

0xd90a,	// (0x0003b6e3) vded2_slider_bg_pane_g3

0x0002,

0xfafc,	// (0x0003d8d5) vded2_slider_bg_pane_g

0x4239,	// (0x00032012) aid_postcard_touch_down_pane_ParamLimits

0x4239,	// (0x00032012) aid_postcard_touch_down_pane

0x424f,	// (0x00032028) aid_postcard_touch_up_pane_ParamLimits

0x424f,	// (0x00032028) aid_postcard_touch_up_pane

0x1ca2,	// (0x0002fa7b) main_blid2_pane

0x4aee,	// (0x000328c7) popup_blid2_search_window

0x9c68,	// (0x00037a41) blid2_gps_pane

0x9c68,	// (0x00037a41) blid2_navig_pane

0x9c68,	// (0x00037a41) blid2_search_pane

0x9c68,	// (0x00037a41) blid2_tripm_pane

0x75f4,	// (0x000353cd) blid2_search_pane_g1_ParamLimits

0x75f4,	// (0x000353cd) blid2_search_pane_g1

0x760c,	// (0x000353e5) blid2_search_pane_t1_ParamLimits

0x760c,	// (0x000353e5) blid2_search_pane_t1

0x761e,	// (0x000353f7) aid_size_cell_blid2_gps_ParamLimits

0x761e,	// (0x000353f7) aid_size_cell_blid2_gps

0x7636,	// (0x0003540f) blid2_gps_pane_g1_ParamLimits

0x7636,	// (0x0003540f) blid2_gps_pane_g1

0x764a,	// (0x00035423) grid_blid2_satellite_pane_ParamLimits

0x764a,	// (0x00035423) grid_blid2_satellite_pane

0x7664,	// (0x0003543d) blid2_navig_pane_g1_ParamLimits

0x7664,	// (0x0003543d) blid2_navig_pane_g1

0x7670,	// (0x00035449) blid2_navig_pane_t1_ParamLimits

0x7670,	// (0x00035449) blid2_navig_pane_t1

0x768b,	// (0x00035464) blid2_navig_pane_t2_ParamLimits

0x768b,	// (0x00035464) blid2_navig_pane_t2

0x0001,

0xfb03,	// (0x0003d8dc) blid2_navig_pane_t_ParamLimits

0xfb03,	// (0x0003d8dc) blid2_navig_pane_t

0x76a6,	// (0x0003547f) blid2_navig_ring_pane_ParamLimits

0x76a6,	// (0x0003547f) blid2_navig_ring_pane

0x76bf,	// (0x00035498) blid2_speed_pane_ParamLimits

0x76bf,	// (0x00035498) blid2_speed_pane

0x76cb,	// (0x000354a4) blid2_tripm_pane_g1_ParamLimits

0x76cb,	// (0x000354a4) blid2_tripm_pane_g1

0x76e6,	// (0x000354bf) blid2_tripm_pane_g2_ParamLimits

0x76e6,	// (0x000354bf) blid2_tripm_pane_g2

0x76fa,	// (0x000354d3) blid2_tripm_pane_g3_ParamLimits

0x76fa,	// (0x000354d3) blid2_tripm_pane_g3

0x770e,	// (0x000354e7) blid2_tripm_pane_g4_ParamLimits

0x770e,	// (0x000354e7) blid2_tripm_pane_g4

0x7722,	// (0x000354fb) blid2_tripm_pane_g5_ParamLimits

0x7722,	// (0x000354fb) blid2_tripm_pane_g5

0x0005,

0xfb08,	// (0x0003d8e1) blid2_tripm_pane_g_ParamLimits

0xfb08,	// (0x0003d8e1) blid2_tripm_pane_g

0x7748,	// (0x00035521) blid2_tripm_pane_t1_ParamLimits

0x7748,	// (0x00035521) blid2_tripm_pane_t1

0x7763,	// (0x0003553c) blid2_tripm_pane_t2_ParamLimits

0x7763,	// (0x0003553c) blid2_tripm_pane_t2

0x777c,	// (0x00035555) blid2_tripm_pane_t3_ParamLimits

0x777c,	// (0x00035555) blid2_tripm_pane_t3

0x0003,

0xfb15,	// (0x0003d8ee) blid2_tripm_pane_t_ParamLimits

0xfb15,	// (0x0003d8ee) blid2_tripm_pane_t

0x77c3,	// (0x0003559c) cell_blid2_satellite_pane_ParamLimits

0x77c3,	// (0x0003559c) cell_blid2_satellite_pane

0x77e1,	// (0x000355ba) cell_blid2_satellite_pane_g1

0xd913,	// (0x0003b6ec) cell_blid2_satellite_pane_t1

0xc847,	// (0x0003a620) blid2_speed_pane_g1

0xd921,	// (0x0003b6fa) blid2_speed_pane_t1

0xd92f,	// (0x0003b708) blid2_speed_pane_t2

0x0001,

0xfb1e,	// (0x0003d8f7) blid2_speed_pane_t

0xc847,	// (0x0003a620) blid2_navig_ring_pane_g1

0x77ea,	// (0x000355c3) blid2_navig_ring_pane_g2

0x77f2,	// (0x000355cb) blid2_navig_ring_pane_g3

0x77fa,	// (0x000355d3) blid2_navig_ring_pane_g4

0x7802,	// (0x000355db) blid2_navig_ring_pane_g5

0x0004,

0xfb23,	// (0x0003d8fc) blid2_navig_ring_pane_g

0x9c68,	// (0x00037a41) bg_popup_window_pane_cp011

0xd93d,	// (0x0003b716) popup_blid2_search_window_g1

0xd945,	// (0x0003b71e) popup_blid2_search_window_t1

0xd953,	// (0x0003b72c) popup_blid2_search_window_t2

0x0001,

0xfb2e,	// (0x0003d907) popup_blid2_search_window_t

0xa6f3,	// (0x000384cc) main_browser_pane_g1

0xa3b1,	// (0x0003818a) main_browser_pane_ParamLimits

0x1c88,	// (0x0002fa61) bg_button_pane_cp011_ParamLimits

0x19a4,	// (0x0002f77d) cell_vitu2_function_pane_g1_ParamLimits

0xc43f,	// (0x0003a218) bg_popup_sub_pane_cp22_ParamLimits

0x7042,	// (0x00034e1b) input_focus_pane_cp08_ParamLimits

0x7059,	// (0x00034e32) popup_vitu2_query_button_pane_ParamLimits

0x7059,	// (0x00034e32) popup_vitu2_query_button_pane

0x706a,	// (0x00034e43) popup_vitu2_query_input_button_pane

0xd508,	// (0x0003b2e1) popup_vitu2_query_window_g1_ParamLimits

0x7074,	// (0x00034e4d) popup_vitu2_query_window_g2_ParamLimits

0xfa2f,	// (0x0003d808) popup_vitu2_query_window_g_ParamLimits

0x9c68,	// (0x00037a41) bg_button_pane_cp026

0x780a,	// (0x000355e3) popup_vitu2_query_input_button_pane_g1

0x9c68,	// (0x00037a41) bg_button_pane_cp025

0xd961,	// (0x0003b73a) popup_vitu2_query_button_pane_t1

0x525e,	// (0x00033037) main_mp3_pane_t6

0x526c,	// (0x00033045) popup_slider_window_cp01

0x6659,	// (0x00034432) cam4_battery_pane

0x66ac,	// (0x00034485) cam4_battery_pane_cp02

0x74db,	// (0x000352b4) cam4_battery_pane_cp01

0x74db,	// (0x000352b4) cam4_battery_pane_cp03

0xd658,	// (0x0003b431) cam4_battery_pane_g1

0xc847,	// (0x0003a620) cam4_battery_pane_g2

0x0001,

0xfb33,	// (0x0003d90c) cam4_battery_pane_g

0xc713,	// (0x0003a4ec) popup_blid_sat_info2_window_t11

0xae3b,	// (0x00038c14) aid_size_touch_mv_arrow_left_ParamLimits

0xae66,	// (0x00038c3f) aid_size_touch_mv_arrow_right_ParamLimits

0xaec4,	// (0x00038c9d) navi_pane_g1_ParamLimits

0xaed0,	// (0x00038ca9) navi_pane_g2_ParamLimits

0xaefe,	// (0x00038cd7) navi_pane_g3_ParamLimits

0xf3e1,	// (0x0003d1ba) navi_pane_g_ParamLimits

0x3c56,	// (0x00031a2f) navi_pane_mv_t1_ParamLimits

0x5e18,	// (0x00033bf1) grid_imed_effect_pane_ParamLimits

0x29f9,	// (0x000307d2) aid_placing_vt_slider_lsc

0xa642,	// (0x0003841b) aid_placing_vt_slider_prt

0xa7ec,	// (0x000385c5) bg_tb_trans_pane_cp01_ParamLimits

0xc9ac,	// (0x0003a785) popup_image_details_window_g1_ParamLimits

0xc9bf,	// (0x0003a798) popup_image_details_window_g2_ParamLimits

0xc9d4,	// (0x0003a7ad) popup_image_details_window_g3_ParamLimits

0xc9d4,	// (0x0003a7ad) popup_image_details_window_g3

0xf727,	// (0x0003d500) popup_image_details_window_g_ParamLimits

0xc9e8,	// (0x0003a7c1) popup_image_details_window_t1_ParamLimits

0xc9fa,	// (0x0003a7d3) popup_image_details_window_t2_ParamLimits

0xca13,	// (0x0003a7ec) popup_image_details_window_t3_ParamLimits

0xca27,	// (0x0003a800) popup_image_details_window_t4_ParamLimits

0xca42,	// (0x0003a81b) popup_image_details_window_t5_ParamLimits

0xf72e,	// (0x0003d507) popup_image_details_window_t_ParamLimits

0x73e8,	// (0x000351c1) cl_header_name_pane_ParamLimits

0x73e8,	// (0x000351c1) cl_header_name_pane

0x7812,	// (0x000355eb) cl_header_name_pane_t1_ParamLimits

0x7812,	// (0x000355eb) cl_header_name_pane_t1

0x7833,	// (0x0003560c) cl_header_name_pane_t2_ParamLimits

0x7833,	// (0x0003560c) cl_header_name_pane_t2

0x7875,	// (0x0003564e) cl_header_name_pane_t3_ParamLimits

0x7875,	// (0x0003564e) cl_header_name_pane_t3

0x0002,

0xfb38,	// (0x0003d911) cl_header_name_pane_t_ParamLimits

0xfb38,	// (0x0003d911) cl_header_name_pane_t

0xaf8d,	// (0x00038d66) navi_pane_mv_g2_ParamLimits

0xd22e,	// (0x0003b007) field_vitu2_entry_pane_g1_ParamLimits

0xd23a,	// (0x0003b013) field_vitu2_entry_pane_g2_ParamLimits

0xd246,	// (0x0003b01f) field_vitu2_entry_pane_g3_ParamLimits

0xd246,	// (0x0003b01f) field_vitu2_entry_pane_g3

0xf92e,	// (0x0003d707) field_vitu2_entry_pane_g_ParamLimits

0x676f,	// (0x00034548) cell_vitu2_itu_pane_g1_ParamLimits

0x184c,	// (0x0002f625) cell_vitu2_itu_pane_g2_ParamLimits

0x184c,	// (0x0002f625) cell_vitu2_itu_pane_g2

0x0001,

0xf93a,	// (0x0003d713) cell_vitu2_itu_pane_g_ParamLimits

0xf93a,	// (0x0003d713) cell_vitu2_itu_pane_g

0x1c88,	// (0x0002fa61) bg_vkb2_func_pane_cp05_ParamLimits

0x1c88,	// (0x0002fa61) bg_vkb2_func_pane_cp05

0x1c88,	// (0x0002fa61) bg_vkb2_func_pane_cp03

0x1c88,	// (0x0002fa61) bg_vkb2_func_pane_cp04

0x1c88,	// (0x0002fa61) bg_vkb2_func_pane_cp10_ParamLimits

0x1c88,	// (0x0002fa61) bg_vkb2_func_pane_cp10

0x738a,	// (0x00035163) bg_vkb2_func_pane_cp08

0x7370,	// (0x00035149) bg_vkb2_func_pane_cp06

0x737e,	// (0x00035157) bg_vkb2_func_pane_cp07

0xd878,	// (0x0003b651) bg_vkb2_func_pane_cp11_ParamLimits

0xd878,	// (0x0003b651) bg_vkb2_func_pane_cp11

0xd88d,	// (0x0003b666) bg_vkb2_func_pane_cp12_ParamLimits

0xd88d,	// (0x0003b666) bg_vkb2_func_pane_cp12

0x9c68,	// (0x00037a41) bg_vkb2_func_pane_cp09

0xd283,	// (0x0003b05c) bg_vkb2_func_pane_g1

0xa812,	// (0x000385eb) bg_vkb2_func_pane_g2

0xd28b,	// (0x0003b064) bg_vkb2_func_pane_g3

0xd293,	// (0x0003b06c) bg_vkb2_func_pane_g4

0xd4cd,	// (0x0003b2a6) bg_vkb2_func_pane_g5

0xd2ab,	// (0x0003b084) bg_vkb2_func_pane_g6

0xd2b3,	// (0x0003b08c) bg_vkb2_func_pane_g7

0xd2a3,	// (0x0003b07c) bg_vkb2_func_pane_g8

0xa7e4,	// (0x000385bd) bg_vkb2_func_pane_g9

0x0008,

0xfb3f,	// (0x0003d918) bg_vkb2_func_pane_g

0x7736,	// (0x0003550f) blid2_tripm_pane_g6_ParamLimits

0x7736,	// (0x0003550f) blid2_tripm_pane_g6

0xd180,	// (0x0003af59) mp4_progress_pane_g1

0x77af,	// (0x00035588) blid2_tripm_values_pane_ParamLimits

0x77af,	// (0x00035588) blid2_tripm_values_pane

0x78a6,	// (0x0003567f) blid2_tripm_values_pane_t1

0x78b4,	// (0x0003568d) blid2_tripm_values_pane_t2

0x78c2,	// (0x0003569b) blid2_tripm_values_pane_t3

0x78d0,	// (0x000356a9) blid2_tripm_values_pane_t4

0x78de,	// (0x000356b7) blid2_tripm_values_pane_t5

0x78ec,	// (0x000356c5) blid2_tripm_values_pane_t6

0x78fa,	// (0x000356d3) blid2_tripm_values_pane_t7

0x7908,	// (0x000356e1) blid2_tripm_values_pane_t8

0x7916,	// (0x000356ef) blid2_tripm_values_pane_t9

0x0008,

0xfb52,	// (0x0003d92b) blid2_tripm_values_pane_t

0x2a3b,	// (0x00030814) call_video_pane_t1_ParamLimits

0x2a59,	// (0x00030832) call_video_pane_t2_ParamLimits

0xf26a,	// (0x0003d043) call_video_pane_t_ParamLimits

0x4140,	// (0x00031f19) msg_header_pane_g1_ParamLimits

0xb175,	// (0x00038f4e) msg_header_pane_g2_ParamLimits

0xb175,	// (0x00038f4e) msg_header_pane_g2

0x0001,

0xf484,	// (0x0003d25d) msg_header_pane_g_ParamLimits

0xf484,	// (0x0003d25d) msg_header_pane_g

0xa3b1,	// (0x0003818a) main_clock2_pane_ParamLimits

0x5bb8,	// (0x00033991) grid_clock2_toolbar_pane_ParamLimits

0x5bb8,	// (0x00033991) grid_clock2_toolbar_pane

0x5bb8,	// (0x00033991) listscroll_clock2_pane_ParamLimits

0x5bb8,	// (0x00033991) listscroll_clock2_pane

0x5c9c,	// (0x00033a75) main_clock2_pane_t3_ParamLimits

0x5c9c,	// (0x00033a75) main_clock2_pane_t3

0x5cc0,	// (0x00033a99) main_clock2_pane_t4_ParamLimits

0x5cc0,	// (0x00033a99) main_clock2_pane_t4

0xd96f,	// (0x0003b748) cell_clock2_toolbar_pane

0xd977,	// (0x0003b750) cell_clock2_toolbar_pane_cp01

0xd977,	// (0x0003b750) cell_clock2_toolbar_pane_cp02

0xd97f,	// (0x0003b758) cell_clock2_toolbar_pane_cp03

0xd987,	// (0x0003b760) list_clock2_pane

0xadc0,	// (0x00038b99) scroll_pane_cp10

0xd98f,	// (0x0003b768) list_single_clock2_pane_ParamLimits

0xd98f,	// (0x0003b768) list_single_clock2_pane

0xa5ab,	// (0x00038384) list_highlight_pane_cp08

0xd99c,	// (0x0003b775) list_single_clock2_pane_t1

0xd9aa,	// (0x0003b783) list_single_clock2_pane_t2

0x0001,

0xfb65,	// (0x0003d93e) list_single_clock2_pane_t

0x9c68,	// (0x00037a41) bg_button_pane_cp10

0xd9b8,	// (0x0003b791) cell_clock2_toolbar_pane_g1

0x078b,	// (0x0002e564) aid_main_viewer_pane_g1_ParamLimits

0x078b,	// (0x0002e564) aid_main_viewer_pane_g1

0x0799,	// (0x0002e572) aid_main_viewer_pane_g2_ParamLimits

0x0799,	// (0x0002e572) aid_main_viewer_pane_g2

0x41df,	// (0x00031fb8) aid_main_viewer_pane_g3_ParamLimits

0x41df,	// (0x00031fb8) aid_main_viewer_pane_g3

0x41ee,	// (0x00031fc7) aid_main_viewer_pane_g4_ParamLimits

0x41ee,	// (0x00031fc7) aid_main_viewer_pane_g4

0x0003,

0xf495,	// (0x0003d26e) aid_main_viewer_pane_g_ParamLimits

0xf495,	// (0x0003d26e) aid_main_viewer_pane_g

0x07cd,	// (0x0002e5a6) main_calc_pane_ParamLimits

0x07f3,	// (0x0002e5cc) main_dialer2_pane_ParamLimits

0x1ca2,	// (0x0002fa7b) main_cam6_pane

0x1ca2,	// (0x0002fa7b) main_vid6_pane

0x5bc4,	// (0x0003399d) listscroll_gen_pane_cp06_ParamLimits

0x5bc4,	// (0x0003399d) listscroll_gen_pane_cp06

0x5ce3,	// (0x00033abc) main_clock2_pane_t5_ParamLimits

0x5ce3,	// (0x00033abc) main_clock2_pane_t5

0x5d41,	// (0x00033b1a) aid_call2_pane_cp10_ParamLimits

0x5d53,	// (0x00033b2c) aid_call_pane_cp10_ParamLimits

0xae2f,	// (0x00038c08) popup_clock_analogue_window_cp10_g1_ParamLimits

0xae2f,	// (0x00038c08) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5d65,	// (0x00033b3e) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5d65,	// (0x00033b3e) popup_clock_analogue_window_cp10_g4_ParamLimits

0xae2f,	// (0x00038c08) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7e3,	// (0x0003d5bc) popup_clock_analogue_window_cp10_g_ParamLimits

0x5d7b,	// (0x00033b54) popup_clock_analogue_window_cp10_t1_ParamLimits

0x6477,	// (0x00034250) cell_dialer2_keypad_pane_g2_ParamLimits

0x6477,	// (0x00034250) cell_dialer2_keypad_pane_g2

0x0001,

0xf8cd,	// (0x0003d6a6) cell_dialer2_keypad_pane_g_ParamLimits

0xf8cd,	// (0x0003d6a6) cell_dialer2_keypad_pane_g

0x6493,	// (0x0003426c) cell_dialer2_keypad_pane_t1

0x6a87,	// (0x00034860) main_cset_text2_pane_ParamLimits

0x6a87,	// (0x00034860) main_cset_text2_pane

0xd722,	// (0x0003b4fb) area_vitu2_query_pane_g1_ParamLimits

0x730f,	// (0x000350e8) area_vitu2_query_pane_g2_ParamLimits

0xfa82,	// (0x0003d85b) area_vitu2_query_pane_g_ParamLimits

0xd7a6,	// (0x0003b57f) area_vitu2_query_pane_t7_ParamLimits

0xd7a6,	// (0x0003b57f) area_vitu2_query_pane_t7

0x7370,	// (0x00035149) bg_button_pane_cp018_ParamLimits

0x737e,	// (0x00035157) bg_button_pane_cp021_ParamLimits

0x738a,	// (0x00035163) bg_button_pane_cp022_ParamLimits

0x738a,	// (0x00035163) bg_vkb2_func_pane_cp08_ParamLimits

0x7370,	// (0x00035149) bg_vkb2_func_pane_cp06_ParamLimits

0x737e,	// (0x00035157) bg_vkb2_func_pane_cp07_ParamLimits

0x739b,	// (0x00035174) input_focus_pane_cp09_ParamLimits

0x7924,	// (0x000356fd) cam6_autofocus_pane_ParamLimits

0x7924,	// (0x000356fd) cam6_autofocus_pane

0x1af2,	// (0x0002f8cb) cam6_image_uncrop_pane_ParamLimits

0x1af2,	// (0x0002f8cb) cam6_image_uncrop_pane

0x1b01,	// (0x0002f8da) cam6_indi_pane_ParamLimits

0x1b01,	// (0x0002f8da) cam6_indi_pane

0x1b17,	// (0x0002f8f0) cam6_mode_pane_ParamLimits

0x1b17,	// (0x0002f8f0) cam6_mode_pane

0x1b29,	// (0x0002f902) cam6_timer_pane_ParamLimits

0x1b29,	// (0x0002f902) cam6_timer_pane

0x1b39,	// (0x0002f912) cam6_zoom_pane_ParamLimits

0x1b39,	// (0x0002f912) cam6_zoom_pane

0x7932,	// (0x0003570b) cam6_mode_pane_g1_ParamLimits

0x7932,	// (0x0003570b) cam6_mode_pane_g1

0x7942,	// (0x0003571b) cam6_mode_pane_g2_ParamLimits

0x7942,	// (0x0003571b) cam6_mode_pane_g2

0x7952,	// (0x0003572b) cam6_mode_pane_g3_ParamLimits

0x7952,	// (0x0003572b) cam6_mode_pane_g3

0x7962,	// (0x0003573b) cam6_mode_pane_g4_ParamLimits

0x7962,	// (0x0003573b) cam6_mode_pane_g4

0x0003,

0xfb6a,	// (0x0003d943) cam6_mode_pane_g_ParamLimits

0xfb6a,	// (0x0003d943) cam6_mode_pane_g

0xd634,	// (0x0003b40d) bg_tb_trans_pane_cp08_ParamLimits

0xd634,	// (0x0003b40d) bg_tb_trans_pane_cp08

0xd9c0,	// (0x0003b799) cam6_battery_pane_ParamLimits

0xd9c0,	// (0x0003b799) cam6_battery_pane

0xd9d6,	// (0x0003b7af) cam6_indi_pane_g1_ParamLimits

0xd9d6,	// (0x0003b7af) cam6_indi_pane_g1

0xd9e8,	// (0x0003b7c1) cam6_indi_pane_g2_ParamLimits

0xd9e8,	// (0x0003b7c1) cam6_indi_pane_g2

0xd9fa,	// (0x0003b7d3) cam6_indi_pane_g3_ParamLimits

0xd9fa,	// (0x0003b7d3) cam6_indi_pane_g3

0x0002,

0xfb73,	// (0x0003d94c) cam6_indi_pane_g_ParamLimits

0xfb73,	// (0x0003d94c) cam6_indi_pane_g

0xda0c,	// (0x0003b7e5) cam6_indi_pane_t1_ParamLimits

0xda0c,	// (0x0003b7e5) cam6_indi_pane_t1

0x7972,	// (0x0003574b) cam6_autofocus_pane_g1

0x797a,	// (0x00035753) cam6_autofocus_pane_g2

0x7982,	// (0x0003575b) cam6_autofocus_pane_g3

0x798a,	// (0x00035763) cam6_autofocus_pane_g4

0x0003,

0xfb7a,	// (0x0003d953) cam6_autofocus_pane_g

0xda32,	// (0x0003b80b) cam6_timer_pane_g1

0xda3a,	// (0x0003b813) cam6_timer_pane_t1

0xda48,	// (0x0003b821) cam6_zoom_cont_pane

0xda50,	// (0x0003b829) cam6_zoom_pane_g1

0xda58,	// (0x0003b831) cam6_zoom_pane_g2

0x7992,	// (0x0003576b) cam6_zoom_pane_g3

0x0002,

0xfb83,	// (0x0003d95c) cam6_zoom_pane_g

0xc847,	// (0x0003a620) cam6_battery_pane_g1

0xc847,	// (0x0003a620) cam6_battery_pane_g2

0x0001,

0xf6eb,	// (0x0003d4c4) cam6_battery_pane_g

0xda60,	// (0x0003b839) cam6_zoom_cont_pane_g1

0xda69,	// (0x0003b842) cam6_zoom_cont_pane_g2

0xda72,	// (0x0003b84b) cam6_zoom_cont_pane_g3

0x0002,

0xfb8a,	// (0x0003d963) cam6_zoom_cont_pane_g

0x79af,	// (0x00035788) cam6_mode_pane_cp_ParamLimits

0x79af,	// (0x00035788) cam6_mode_pane_cp

0x79c1,	// (0x0003579a) cam6_zoom_pane_cp_ParamLimits

0x79c1,	// (0x0003579a) cam6_zoom_pane_cp

0x79cd,	// (0x000357a6) vid6_image_uncrop_cif_pane_ParamLimits

0x79cd,	// (0x000357a6) vid6_image_uncrop_cif_pane

0x79dd,	// (0x000357b6) vid6_image_uncrop_nhd_pane_ParamLimits

0x79dd,	// (0x000357b6) vid6_image_uncrop_nhd_pane

0x79ec,	// (0x000357c5) vid6_image_uncrop_vga_pane_ParamLimits

0x79ec,	// (0x000357c5) vid6_image_uncrop_vga_pane

0x79fb,	// (0x000357d4) vid6_image_uncrop_wvga_pane_ParamLimits

0x79fb,	// (0x000357d4) vid6_image_uncrop_wvga_pane

0x7a0a,	// (0x000357e3) vid6_indi_pane_ParamLimits

0x7a0a,	// (0x000357e3) vid6_indi_pane

0xd634,	// (0x0003b40d) bg_tb_trans_pane_cp09_ParamLimits

0xd634,	// (0x0003b40d) bg_tb_trans_pane_cp09

0xda8a,	// (0x0003b863) cam6_battery_pane_cp_ParamLimits

0xda8a,	// (0x0003b863) cam6_battery_pane_cp

0xda96,	// (0x0003b86f) vid6_indi_pane_g1_ParamLimits

0xda96,	// (0x0003b86f) vid6_indi_pane_g1

0xdaa8,	// (0x0003b881) vid6_indi_pane_g2_ParamLimits

0xdaa8,	// (0x0003b881) vid6_indi_pane_g2

0xdaba,	// (0x0003b893) vid6_indi_pane_g3_ParamLimits

0xdaba,	// (0x0003b893) vid6_indi_pane_g3

0xdacf,	// (0x0003b8a8) vid6_indi_pane_g4_ParamLimits

0xdacf,	// (0x0003b8a8) vid6_indi_pane_g4

0xdae4,	// (0x0003b8bd) vid6_indi_pane_g5_ParamLimits

0xdae4,	// (0x0003b8bd) vid6_indi_pane_g5

0x0004,

0xfb91,	// (0x0003d96a) vid6_indi_pane_g_ParamLimits

0xfb91,	// (0x0003d96a) vid6_indi_pane_g

0xdafe,	// (0x0003b8d7) vid6_indi_pane_t1_ParamLimits

0xdafe,	// (0x0003b8d7) vid6_indi_pane_t1

0xdb14,	// (0x0003b8ed) vid6_indi_pane_t2_ParamLimits

0xdb14,	// (0x0003b8ed) vid6_indi_pane_t2

0xdb3c,	// (0x0003b915) vid6_indi_pane_t3_ParamLimits

0xdb3c,	// (0x0003b915) vid6_indi_pane_t3

0xdb64,	// (0x0003b93d) vid6_indi_pane_t4_ParamLimits

0xdb64,	// (0x0003b93d) vid6_indi_pane_t4

0x0003,

0xfb9c,	// (0x0003d975) vid6_indi_pane_t_ParamLimits

0xfb9c,	// (0x0003d975) vid6_indi_pane_t

0xdb88,	// (0x0003b961) wait_bar_pane_cp08

0x7a22,	// (0x000357fb) main_cset_text2_pane_t1_ParamLimits

0x7a22,	// (0x000357fb) main_cset_text2_pane_t1

0x799a,	// (0x00035773) listscroll_gen_pane_cp06_t1_ParamLimits

0x799a,	// (0x00035773) listscroll_gen_pane_cp06_t1

0x1ca2,	// (0x0002fa7b) main_cam6_set_pane

0x664b,	// (0x00034424) bg_tb_trans_pane_cp06_ParamLimits

0x6661,	// (0x0003443a) cam4_indicators_pane_g1_ParamLimits

0x6672,	// (0x0003444b) cam4_indicators_pane_g2_ParamLimits

0xf90a,	// (0x0003d6e3) cam4_indicators_pane_g_ParamLimits

0x668a,	// (0x00034463) cam4_indicators_pane_t1_ParamLimits

0x1c88,	// (0x0002fa61) bg_tb_trans_pane_cp07_ParamLimits

0x66b4,	// (0x0003448d) vid4_indicators_pane_g1_ParamLimits

0x66c8,	// (0x000344a1) vid4_indicators_pane_g2_ParamLimits

0x66dc,	// (0x000344b5) vid4_indicators_pane_g3_ParamLimits

0x66ed,	// (0x000344c6) vid4_indicators_pane_g4_ParamLimits

0xf91c,	// (0x0003d6f5) vid4_indicators_pane_g_ParamLimits

0x6709,	// (0x000344e2) vid4_indicators_pane_t1_ParamLimits

0x74e3,	// (0x000352bc) vid4_progress_pane_g1_ParamLimits

0x74f3,	// (0x000352cc) vid4_progress_pane_g2_ParamLimits

0x1ab9,	// (0x0002f892) vid4_progress_pane_g3_ParamLimits

0x7503,	// (0x000352dc) vid4_progress_pane_g4_ParamLimits

0xfacd,	// (0x0003d8a6) vid4_progress_pane_g_ParamLimits

0x1acb,	// (0x0002f8a4) vid4_progress_pane_t1_ParamLimits

0x751b,	// (0x000352f4) vid4_progress_pane_t2_ParamLimits

0x7530,	// (0x00035309) vid4_progress_pane_t3_ParamLimits

0xfad8,	// (0x0003d8b1) vid4_progress_pane_t_ParamLimits

0x1ae1,	// (0x0002f8ba) wait_bar_pane_cp07_ParamLimits

0x7a40,	// (0x00035819) main_cam6_set_pane_g2_ParamLimits

0x7a40,	// (0x00035819) main_cam6_set_pane_g2

0x7a64,	// (0x0003583d) main_cset6_listscroll_pane_ParamLimits

0x7a64,	// (0x0003583d) main_cset6_listscroll_pane

0x7a80,	// (0x00035859) main_cset6_slider_pane_ParamLimits

0x7a80,	// (0x00035859) main_cset6_slider_pane

0x7a96,	// (0x0003586f) main_cset6_text2_pane_ParamLimits

0x7a96,	// (0x0003586f) main_cset6_text2_pane

0xdb97,	// (0x0003b970) main_cset6_text_pane

0xdb9f,	// (0x0003b978) main_cset_list_pane_copy1_ParamLimits

0xdb9f,	// (0x0003b978) main_cset_list_pane_copy1

0xdbaf,	// (0x0003b988) scroll_pane_cp028_copy1

0x7aa4,	// (0x0003587d) cset_list_set_pane_copy1

0x7ab6,	// (0x0003588f) aid_position_infowindow_above_copy1

0x7abe,	// (0x00035897) aid_position_infowindow_below_copy1

0xdbb8,	// (0x0003b991) cset_list_set_pane_g1_copy1

0xdbc0,	// (0x0003b999) cset_list_set_pane_g3_copy1_ParamLimits

0xdbc0,	// (0x0003b999) cset_list_set_pane_g3_copy1

0xdbcf,	// (0x0003b9a8) cset_list_set_pane_t1_copy1_ParamLimits

0xdbcf,	// (0x0003b9a8) cset_list_set_pane_t1_copy1

0xa7ec,	// (0x000385c5) list_highlight_pane_cp021_copy1_ParamLimits

0xa7ec,	// (0x000385c5) list_highlight_pane_cp021_copy1

0xdbe4,	// (0x0003b9bd) cset6_slider_pane_ParamLimits

0xdbe4,	// (0x0003b9bd) cset6_slider_pane

0xdc10,	// (0x0003b9e9) main_cset6_slider_pane_g1_ParamLimits

0xdc10,	// (0x0003b9e9) main_cset6_slider_pane_g1

0x7ac6,	// (0x0003589f) main_cset6_slider_pane_g2_ParamLimits

0x7ac6,	// (0x0003589f) main_cset6_slider_pane_g2

0xdc38,	// (0x0003ba11) main_cset6_slider_pane_g3_ParamLimits

0xdc38,	// (0x0003ba11) main_cset6_slider_pane_g3

0x7aee,	// (0x000358c7) main_cset6_slider_pane_g4_ParamLimits

0x7aee,	// (0x000358c7) main_cset6_slider_pane_g4

0xdc44,	// (0x0003ba1d) main_cset6_slider_pane_g5_ParamLimits

0xdc44,	// (0x0003ba1d) main_cset6_slider_pane_g5

0xd3b2,	// (0x0003b18b) main_cset6_slider_pane_g7_ParamLimits

0xd3b2,	// (0x0003b18b) main_cset6_slider_pane_g7

0xd3be,	// (0x0003b197) main_cset6_slider_pane_g8_ParamLimits

0xd3be,	// (0x0003b197) main_cset6_slider_pane_g8

0x6b34,	// (0x0003490d) main_cset6_slider_pane_g9_ParamLimits

0x6b34,	// (0x0003490d) main_cset6_slider_pane_g9

0x6b40,	// (0x00034919) main_cset6_slider_pane_g10_ParamLimits

0x6b40,	// (0x00034919) main_cset6_slider_pane_g10

0x6b4c,	// (0x00034925) main_cset6_slider_pane_g11_ParamLimits

0x6b4c,	// (0x00034925) main_cset6_slider_pane_g11

0x6b58,	// (0x00034931) main_cset6_slider_pane_g12_ParamLimits

0x6b58,	// (0x00034931) main_cset6_slider_pane_g12

0x6b64,	// (0x0003493d) main_cset6_slider_pane_g13_ParamLimits

0x6b64,	// (0x0003493d) main_cset6_slider_pane_g13

0x6b70,	// (0x00034949) main_cset6_slider_pane_g14_ParamLimits

0x6b70,	// (0x00034949) main_cset6_slider_pane_g14

0x7afa,	// (0x000358d3) main_cset6_slider_pane_g15_ParamLimits

0x7afa,	// (0x000358d3) main_cset6_slider_pane_g15

0xd3ca,	// (0x0003b1a3) main_cset6_slider_pane_g16_ParamLimits

0xd3ca,	// (0x0003b1a3) main_cset6_slider_pane_g16

0xd3d6,	// (0x0003b1af) main_cset6_slider_pane_g17_ParamLimits

0xd3d6,	// (0x0003b1af) main_cset6_slider_pane_g17

0x0011,

0xfba5,	// (0x0003d97e) main_cset6_slider_pane_g_ParamLimits

0xfba5,	// (0x0003d97e) main_cset6_slider_pane_g

0xdc50,	// (0x0003ba29) main_cset6_slider_pane_t1_ParamLimits

0xdc50,	// (0x0003ba29) main_cset6_slider_pane_t1

0x7b2a,	// (0x00035903) main_cset6_slider_pane_t2_ParamLimits

0x7b2a,	// (0x00035903) main_cset6_slider_pane_t2

0x7b55,	// (0x0003592e) main_cset6_slider_pane_t3_ParamLimits

0x7b55,	// (0x0003592e) main_cset6_slider_pane_t3

0x7b80,	// (0x00035959) main_cset6_slider_pane_t4_ParamLimits

0x7b80,	// (0x00035959) main_cset6_slider_pane_t4

0x7bab,	// (0x00035984) main_cset6_slider_pane_t5_ParamLimits

0x7bab,	// (0x00035984) main_cset6_slider_pane_t5

0xdc91,	// (0x0003ba6a) main_cset6_slider_pane_t7_ParamLimits

0xdc91,	// (0x0003ba6a) main_cset6_slider_pane_t7

0x7bd6,	// (0x000359af) main_cset6_slider_pane_t8_ParamLimits

0x7bd6,	// (0x000359af) main_cset6_slider_pane_t8

0x7bfa,	// (0x000359d3) main_cset6_slider_pane_t9_ParamLimits

0x7bfa,	// (0x000359d3) main_cset6_slider_pane_t9

0x7c1e,	// (0x000359f7) main_cset6_slider_pane_t10_ParamLimits

0x7c1e,	// (0x000359f7) main_cset6_slider_pane_t10

0x7c42,	// (0x00035a1b) main_cset6_slider_pane_t11_ParamLimits

0x7c42,	// (0x00035a1b) main_cset6_slider_pane_t11

0xdcc7,	// (0x0003baa0) main_cset6_slider_pane_t14_ParamLimits

0xdcc7,	// (0x0003baa0) main_cset6_slider_pane_t14

0xdd00,	// (0x0003bad9) main_cset6_slider_pane_t15_ParamLimits

0xdd00,	// (0x0003bad9) main_cset6_slider_pane_t15

0x000b,

0xfbca,	// (0x0003d9a3) main_cset6_slider_pane_t_ParamLimits

0xfbca,	// (0x0003d9a3) main_cset6_slider_pane_t

0xd097,	// (0x0003ae70) cset_slider_pane_g1_copy1

0xdd39,	// (0x0003bb12) cset_slider_pane_g2_copy1

0xdd42,	// (0x0003bb1b) cset_slider_pane_g3_copy1

0x9c68,	// (0x00037a41) bg_popup_sub_pane_cp011_copy1

0xdd4b,	// (0x0003bb24) main_cset_text_pane_g1_copy1

0xd51c,	// (0x0003b2f5) main_cset_text_pane_t1_copy1

0xd52a,	// (0x0003b303) main_cset_text_pane_t2_copy1

0xd538,	// (0x0003b311) main_cset_text_pane_t3_copy1

0xd546,	// (0x0003b31f) main_cset_text_pane_t4_copy1

0xd554,	// (0x0003b32d) main_cset_text_pane_t5_copy1

0xdd53,	// (0x0003bb2c) main_cset_text_pane_t6_copy1

0xdd61,	// (0x0003bb3a) main_cset_text_pane_t7_copy1

0x7a22,	// (0x000357fb) main_cset_text2_pane_t1_copy1

0x1c88,	// (0x0002fa61) main_ncimui_pane

0x0a37,	// (0x0002e810) popup_query_ncimui_window_ParamLimits

0x0a37,	// (0x0002e810) popup_query_ncimui_window

0xcb42,	// (0x0003a91b) field_cale_ev2_pane_g4_ParamLimits

0xcb42,	// (0x0003a91b) field_cale_ev2_pane_g4

0x61d6,	// (0x00033faf) cell_video_dialer_keypad_pane_g2_ParamLimits

0x61d6,	// (0x00033faf) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8a4,	// (0x0003d67d) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8a4,	// (0x0003d67d) cell_video_dialer_keypad_pane_g

0x61ee,	// (0x00033fc7) cell_video_dialer_keypad_pane_t1

0x9c68,	// (0x00037a41) bg_popup_window_pane_cp012

0xacab,	// (0x00038a84) heading_pane_cp06

0xdd8d,	// (0x0003bb66) ncim_query_content_pane

0x9c68,	// (0x00037a41) bg_popup_heading_pane_cp01

0xdd95,	// (0x0003bb6e) ncim_heading_pane_t1

0xdda3,	// (0x0003bb7c) ncim_indicator_popup_pane

0xddb5,	// (0x0003bb8e) ncim_query_button_pane

0xddc9,	// (0x0003bba2) ncim_query_content_pane_t1

0xdddb,	// (0x0003bbb4) ncim_query_content_pane_t2

0x0005,

0xfc0e,	// (0x0003d9e7) ncim_query_content_pane_t

0xde15,	// (0x0003bbee) ncim_query_list_pane

0xde27,	// (0x0003bc00) ncim_query_popup_pane

0xdda3,	// (0x0003bb7c) ncim_indicator_popup_pane_ParamLimits

0x7e65,	// (0x00035c3e) ncim_query_content_pane_g1_ParamLimits

0x7e65,	// (0x00035c3e) ncim_query_content_pane_g1

0xddc9,	// (0x0003bba2) ncim_query_content_pane_t1_ParamLimits

0xdddb,	// (0x0003bbb4) ncim_query_content_pane_t2_ParamLimits

0x7e71,	// (0x00035c4a) ncim_query_content_pane_t3_ParamLimits

0x7e71,	// (0x00035c4a) ncim_query_content_pane_t3

0x7e99,	// (0x00035c72) ncim_query_content_pane_t4_ParamLimits

0x7e99,	// (0x00035c72) ncim_query_content_pane_t4

0x7ec1,	// (0x00035c9a) ncim_query_content_pane_t5_ParamLimits

0x7ec1,	// (0x00035c9a) ncim_query_content_pane_t5

0xdded,	// (0x0003bbc6) ncim_query_content_pane_t6_ParamLimits

0xdded,	// (0x0003bbc6) ncim_query_content_pane_t6

0xfc0e,	// (0x0003d9e7) ncim_query_content_pane_t_ParamLimits

0xde15,	// (0x0003bbee) ncim_query_list_pane_ParamLimits

0xde27,	// (0x0003bc00) ncim_query_popup_pane_ParamLimits

0xde3b,	// (0x0003bc14) wait_bar_pane_cp04

0x9c68,	// (0x00037a41) input_focus_pane_cp011

0xde43,	// (0x0003bc1c) ncim_query_popup_pane_t1

0xde51,	// (0x0003bc2a) ncim_list_query_list_pane_ParamLimits

0xde51,	// (0x0003bc2a) ncim_list_query_list_pane

0x9c68,	// (0x00037a41) bg_button_pane_cp027

0xde5e,	// (0x0003bc37) ncim_query_button_pane_g1

0x9c68,	// (0x00037a41) list_highlight_pane_cp012

0xde68,	// (0x0003bc41) ncim_list_query_list_pane_g1

0xde70,	// (0x0003bc49) ncim_list_query_list_pane_t1

0x667e,	// (0x00034457) cam4_indicators_pane_g3_ParamLimits

0x667e,	// (0x00034457) cam4_indicators_pane_g3

0x66f9,	// (0x000344d2) vid4_indicators_pane_g5_ParamLimits

0x66f9,	// (0x000344d2) vid4_indicators_pane_g5

0x750f,	// (0x000352e8) vid4_progress_pane_g5_ParamLimits

0x750f,	// (0x000352e8) vid4_progress_pane_g5

0x7d50,	// (0x00035b29) main_ncimui_pane_g1

0x7db9,	// (0x00035b92) ncimui_group_query_pane_ParamLimits

0x7db9,	// (0x00035b92) ncimui_group_query_pane

0x7e01,	// (0x00035bda) ncimui_list_pane_ParamLimits

0x7e01,	// (0x00035bda) ncimui_list_pane

0x7e28,	// (0x00035c01) ncimui_text_pane_ParamLimits

0x7e28,	// (0x00035c01) ncimui_text_pane

0x7ee9,	// (0x00035cc2) ncimui_text_pane_t1_ParamLimits

0x7ee9,	// (0x00035cc2) ncimui_text_pane_t1

0xde7e,	// (0x0003bc57) ncimui_list_single_graphic_pane_ParamLimits

0xde7e,	// (0x0003bc57) ncimui_list_single_graphic_pane

0x7f07,	// (0x00035ce0) ncimui_query_pane_ParamLimits

0x7f07,	// (0x00035ce0) ncimui_query_pane

0x9c68,	// (0x00037a41) list_highlight_pane_cp013

0xde8e,	// (0x0003bc67) ncim_list_query_list_pane_t1_copy1

0xde9c,	// (0x0003bc75) ncim_list_single_graphic_pane_g1

0x7f1a,	// (0x00035cf3) ncim_query_button_pane_cp01

0x7f26,	// (0x00035cff) ncim_query_entry_pane_ParamLimits

0x7f26,	// (0x00035cff) ncim_query_entry_pane

0x7f39,	// (0x00035d12) ncimui_query_pane_g1

0x7f45,	// (0x00035d1e) ncimui_query_pane_t1_ParamLimits

0x7f45,	// (0x00035d1e) ncimui_query_pane_t1

0xa7ec,	// (0x000385c5) input_focus_pane_cp012

0xdea4,	// (0x0003bc7d) ncim_query_entry_pane_t1

0xa3b1,	// (0x0003818a) main_im_pane_ParamLimits

0x1c88,	// (0x0002fa61) main_mobtv_pane_ParamLimits

0x1c88,	// (0x0002fa61) main_mobtv_pane

0x7b12,	// (0x000358eb) main_cset6_slider_pane_g18_ParamLimits

0x7b12,	// (0x000358eb) main_cset6_slider_pane_g18

0x7b1e,	// (0x000358f7) main_cset6_slider_pane_g19_ParamLimits

0x7b1e,	// (0x000358f7) main_cset6_slider_pane_g19

0x7f5e,	// (0x00035d37) bg_main_mobtv_pane_ParamLimits

0x7f5e,	// (0x00035d37) bg_main_mobtv_pane

0x7f6c,	// (0x00035d45) main_mobtv_info_pane

0x7f75,	// (0x00035d4e) main_mobtv_loading_pane_ParamLimits

0x7f75,	// (0x00035d4e) main_mobtv_loading_pane

0xdeb6,	// (0x0003bc8f) main_mobtv_pg_channel_list_pane

0xdec0,	// (0x0003bc99) main_mobtv_pg_hdr_pane

0x7f82,	// (0x00035d5b) main_mobtv_programe_curr_pane_ParamLimits

0x7f82,	// (0x00035d5b) main_mobtv_programe_curr_pane

0x7f8f,	// (0x00035d68) main_mobtv_programe_next_pane_ParamLimits

0x7f8f,	// (0x00035d68) main_mobtv_programe_next_pane

0xdec9,	// (0x0003bca2) popup_mobtv_noti_window

0xc847,	// (0x0003a620) main_tv_pg_hdr_pane_g1

0xded1,	// (0x0003bcaa) main_tv_pg_hdr_pane_g2

0xded9,	// (0x0003bcb2) main_tv_pg_hdr_pane_g3

0xdee1,	// (0x0003bcba) main_tv_pg_hdr_pane_g4

0xdee9,	// (0x0003bcc2) main_tv_pg_hdr_pane_g5

0xdef3,	// (0x0003bccc) main_tv_pg_hdr_pane_g6

0xdefd,	// (0x0003bcd6) main_tv_pg_hdr_pane_g7

0xdf07,	// (0x0003bce0) main_tv_pg_hdr_pane_g8

0xdf11,	// (0x0003bcea) main_tv_pg_hdr_pane_g9

0xdf1b,	// (0x0003bcf4) main_tv_pg_hdr_pane_g10

0xdf25,	// (0x0003bcfe) main_tv_pg_hdr_pane_g11

0x000a,

0xfc1b,	// (0x0003d9f4) main_tv_pg_hdr_pane_g

0xdf2f,	// (0x0003bd08) main_tv_pg_hdr_pane_t1

0xdf3d,	// (0x0003bd16) main_tv_pg_hdr_pane_t2

0xdf4b,	// (0x0003bd24) main_tv_pg_hdr_pane_t3

0xdf5b,	// (0x0003bd34) main_tv_pg_hdr_pane_t4

0xdf6b,	// (0x0003bd44) main_tv_pg_hdr_pane_t5

0x0004,

0xfc32,	// (0x0003da0b) main_tv_pg_hdr_pane_t

0xdf7b,	// (0x0003bd54) single_mobtv_pg_channel_pane_ParamLimits

0xdf7b,	// (0x0003bd54) single_mobtv_pg_channel_pane

0xdf8d,	// (0x0003bd66) single_mobtv_pg_channel_table_pane

0xa915,	// (0x000386ee) single_mobtv_pg_channel_thumb_pane

0xdf96,	// (0x0003bd6f) single_tv_pg_channel_pane_g1

0xdf9f,	// (0x0003bd78) single_tv_pg_channel_pane_g2

0x0001,

0xfc3d,	// (0x0003da16) single_tv_pg_channel_pane_g

0xca8c,	// (0x0003a865) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xca8c,	// (0x0003a865) bg_single_mobtv_pg_channel_thumb_pane

0xdfa8,	// (0x0003bd81) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdfa8,	// (0x0003bd81) single_mobtv_pg_channel_thumb_pane_g1

0xdfb6,	// (0x0003bd8f) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdfb6,	// (0x0003bd8f) single_mobtv_pg_channel_thumb_pane_g2

0xdfc2,	// (0x0003bd9b) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdfc2,	// (0x0003bd9b) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc42,	// (0x0003da1b) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc42,	// (0x0003da1b) single_mobtv_pg_channel_thumb_pane_g

0xdfce,	// (0x0003bda7) single_mobtv_pg_channel_thumb_pane_t1

0xdfdc,	// (0x0003bdb5) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc49,	// (0x0003da22) single_mobtv_pg_channel_thumb_pane_t

0xc847,	// (0x0003a620) bg_single_mobtv_pg_channel_table_pane_g1

0xc847,	// (0x0003a620) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6eb,	// (0x0003d4c4) bg_single_mobtv_pg_channel_table_pane_g

0xdfea,	// (0x0003bdc3) single_mobtv_pg_channel_table_pane_t1

0xdff8,	// (0x0003bdd1) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc4e,	// (0x0003da27) single_mobtv_pg_channel_table_pane_t

0x7fa4,	// (0x00035d7d) main_mobtv_info_pane_g1_ParamLimits

0x7fa4,	// (0x00035d7d) main_mobtv_info_pane_g1

0x7fc2,	// (0x00035d9b) main_mobtv_info_pane_t1_ParamLimits

0x7fc2,	// (0x00035d9b) main_mobtv_info_pane_t1

0x803a,	// (0x00035e13) main_mobtv_info_pane_t2_ParamLimits

0x803a,	// (0x00035e13) main_mobtv_info_pane_t2

0x0002,

0xfc58,	// (0x0003da31) main_mobtv_info_pane_t_ParamLimits

0xfc58,	// (0x0003da31) main_mobtv_info_pane_t

0x80c9,	// (0x00035ea2) wait_bar_pane_cp05

0x80db,	// (0x00035eb4) main_mobtv_loading_pane_g1_ParamLimits

0x80db,	// (0x00035eb4) main_mobtv_loading_pane_g1

0x80ee,	// (0x00035ec7) main_mobtv_loading_pane_g2_ParamLimits

0x80ee,	// (0x00035ec7) main_mobtv_loading_pane_g2

0x80fa,	// (0x00035ed3) main_mobtv_loading_pane_g3_ParamLimits

0x80fa,	// (0x00035ed3) main_mobtv_loading_pane_g3

0x0002,

0xfc5f,	// (0x0003da38) main_mobtv_loading_pane_g_ParamLimits

0xfc5f,	// (0x0003da38) main_mobtv_loading_pane_g

0xe006,	// (0x0003bddf) main_mobtv_loading_pane_t1_ParamLimits

0xe006,	// (0x0003bddf) main_mobtv_loading_pane_t1

0xe01e,	// (0x0003bdf7) main_mobtv_loading_pane_t2_ParamLimits

0xe01e,	// (0x0003bdf7) main_mobtv_loading_pane_t2

0x0001,

0x0011,	// (0x0002ddea) main_mobtv_loading_pane_t_ParamLimits

0x0011,	// (0x0002ddea) main_mobtv_loading_pane_t

0x810d,	// (0x00035ee6) wait_bar_pane_cp06_ParamLimits

0x810d,	// (0x00035ee6) wait_bar_pane_cp06

0xe042,	// (0x0003be1b) main_mobtv_programe_curr_pane_t1

0xe050,	// (0x0003be29) main_mobtv_programe_curr_pane_t2

0x0001,

0x0016,	// (0x0002ddef) main_mobtv_programe_curr_pane_t

0xe05e,	// (0x0003be37) main_mobtv_programe_next_pane_t1

0xe06c,	// (0x0003be45) main_mobtv_programe_next_pane_t2

0xe07a,	// (0x0003be53) main_mobtv_programe_next_pane_t3

0x0002,

0x001b,	// (0x0002ddf4) main_mobtv_programe_next_pane_t

0x9c68,	// (0x00037a41) bg_popup_mobtv_noti_window_pane

0xe088,	// (0x0003be61) popup_mobtv_noti_window_g1

0xe090,	// (0x0003be69) popup_mobtv_noti_window_t1

0xe09e,	// (0x0003be77) popup_mobtv_noti_window_t2

0x0001,

0x0022,	// (0x0002ddfb) popup_mobtv_noti_window_t

0xc847,	// (0x0003a620) bg_popup_mobtv_noti_window_pane_g1

0x1ca2,	// (0x0002fa7b) sc_clock_pane

0x1ca2,	// (0x0002fa7b) main_fs_bigclock_pane

0x7799,	// (0x00035572) blid2_tripm_pane_t4_ParamLimits

0x7799,	// (0x00035572) blid2_tripm_pane_t4

0x811c,	// (0x00035ef5) sc_clock_pane_g1_ParamLimits

0x811c,	// (0x00035ef5) sc_clock_pane_g1

0x812e,	// (0x00035f07) sc_clock_pane_t1_ParamLimits

0x812e,	// (0x00035f07) sc_clock_pane_t1

0x8150,	// (0x00035f29) sc_clock_pane_t2_ParamLimits

0x8150,	// (0x00035f29) sc_clock_pane_t2

0x8168,	// (0x00035f41) sc_clock_pane_t3_ParamLimits

0x8168,	// (0x00035f41) sc_clock_pane_t3

0x0004,

0xfc66,	// (0x0003da3f) sc_clock_pane_t_ParamLimits

0xfc66,	// (0x0003da3f) sc_clock_pane_t

0x9158,	// (0x00036f31) main_fs_bigclock_indicator_pane_ParamLimits

0x9158,	// (0x00036f31) main_fs_bigclock_indicator_pane

0x820e,	// (0x00035fe7) main_fs_bigclock_pane_g1_ParamLimits

0x820e,	// (0x00035fe7) main_fs_bigclock_pane_g1

0x9164,	// (0x00036f3d) main_fs_bigclock_pane_t1_ParamLimits

0x9164,	// (0x00036f3d) main_fs_bigclock_pane_t1

0x9176,	// (0x00036f4f) main_fs_bigclock_pane_t2_ParamLimits

0x9176,	// (0x00036f4f) main_fs_bigclock_pane_t2

0x918a,	// (0x00036f63) main_fs_bigclock_pane_t3_ParamLimits

0x918a,	// (0x00036f63) main_fs_bigclock_pane_t3

0x0002,

0xfe41,	// (0x0003dc1a) main_fs_bigclock_pane_t_ParamLimits

0xfe41,	// (0x0003dc1a) main_fs_bigclock_pane_t

0xeca9,	// (0x0003ca82) main_fs_bigclock_indicator_pane_g1

0xddbd,	// (0x0003bb96) ncim_query_content_pane_g2_ParamLimits

0xddbd,	// (0x0003bb96) ncim_query_content_pane_g2

0x0001,

0xfc09,	// (0x0003d9e2) ncim_query_content_pane_g_ParamLimits

0xfc09,	// (0x0003d9e2) ncim_query_content_pane_g

0x8181,	// (0x00035f5a) sc_clock_pane_t4_ParamLimits

0x8181,	// (0x00035f5a) sc_clock_pane_t4

0x1c88,	// (0x0002fa61) main_radioblah_pane

0x65d1,	// (0x000343aa) cell_call4_button_pane_t1_copy1_ParamLimits

0x65d1,	// (0x000343aa) cell_call4_button_pane_t1_copy1

0x7d68,	// (0x00035b41) main_ncimui_pane_t1_ParamLimits

0x7d68,	// (0x00035b41) main_ncimui_pane_t1

0x7d82,	// (0x00035b5b) main_ncimui_pane_t2_ParamLimits

0x7d82,	// (0x00035b5b) main_ncimui_pane_t2

0x0002,

0xfc02,	// (0x0003d9db) main_ncimui_pane_t_ParamLimits

0xfc02,	// (0x0003d9db) main_ncimui_pane_t

0xe1f6,	// (0x0003bfcf) main_radioblah_anim_pane_ParamLimits

0xe1f6,	// (0x0003bfcf) main_radioblah_anim_pane

0xe207,	// (0x0003bfe0) main_radioblah_info_pane_ParamLimits

0xe207,	// (0x0003bfe0) main_radioblah_info_pane

0xe21b,	// (0x0003bff4) main_radioblah_pane_t1_ParamLimits

0xe21b,	// (0x0003bff4) main_radioblah_pane_t1

0xe237,	// (0x0003c010) main_radioblah_pane_t2_ParamLimits

0xe237,	// (0x0003c010) main_radioblah_pane_t2

0x0003,

0xfc71,	// (0x0003da4a) main_radioblah_pane_t_ParamLimits

0xfc71,	// (0x0003da4a) main_radioblah_pane_t

0x826d,	// (0x00036046) main_radioblah_rocker_ctrl_pane_ParamLimits

0x826d,	// (0x00036046) main_radioblah_rocker_ctrl_pane

0xe27f,	// (0x0003c058) main_radioblah_info_pane_t1_ParamLimits

0xe27f,	// (0x0003c058) main_radioblah_info_pane_t1

0x82c5,	// (0x0003609e) main_radioblah_info_pane_t2_ParamLimits

0x82c5,	// (0x0003609e) main_radioblah_info_pane_t2

0x0003,

0xfc7a,	// (0x0003da53) main_radioblah_info_pane_t_ParamLimits

0xfc7a,	// (0x0003da53) main_radioblah_info_pane_t

0xc847,	// (0x0003a620) main_radioblah_rocker_ctrl_pane_g1

0x8375,	// (0x0003614e) main_radioblah_rocker_ctrl_pane_g2

0x837d,	// (0x00036156) main_radioblah_rocker_ctrl_pane_g3

0x8385,	// (0x0003615e) main_radioblah_rocker_ctrl_pane_g4

0x838d,	// (0x00036166) main_radioblah_rocker_ctrl_pane_g5

0x8395,	// (0x0003616e) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc83,	// (0x0003da5c) main_radioblah_rocker_ctrl_pane_g

0x7a22,	// (0x000357fb) main_cset_text2_pane_t1_copy1_ParamLimits

0x662f,	// (0x00034408) cam4_image_uncrop_qvga_pane

0x66a4,	// (0x0003447d) vid4_image_uncrop_qcif_pane

0x7924,	// (0x000356fd) cam6_image_uncrop_qvga_pane_ParamLimits

0x7924,	// (0x000356fd) cam6_image_uncrop_qvga_pane

0xda7a,	// (0x0003b853) vid6_image_uncrop_qcif_pane_ParamLimits

0xda7a,	// (0x0003b853) vid6_image_uncrop_qcif_pane

0x9c68,	// (0x00037a41) bg_popup_preview_window_pane_cp03

0xdd6f,	// (0x0003bb48) list_cset_text2_pane

0xdd77,	// (0x0003bb50) main_cset6_text2_pane_g1

0xdd7f,	// (0x0003bb58) main_cset6_text2_pane_t1

0xe2b9,	// (0x0003c092) list_cset_text2_pane_t1_ParamLimits

0xe2b9,	// (0x0003c092) list_cset_text2_pane_t1

0x1c88,	// (0x0002fa61) main_radioblah_pane_ParamLimits

0x80b5,	// (0x00035e8e) main_mobtv_info_pane_t3_ParamLimits

0x80b5,	// (0x00035e8e) main_mobtv_info_pane_t3

0x825b,	// (0x00036034) main_radioblah_pane_g1

0x8295,	// (0x0003606e) main_radioblah_info_pane_g1

0x831a,	// (0x000360f3) main_radioblah_info_pane_t3_ParamLimits

0x831a,	// (0x000360f3) main_radioblah_info_pane_t3

0x36c4,	// (0x0003149d) highlight_cell_cale_month_pane_ParamLimits

0x36c4,	// (0x0003149d) highlight_cell_cale_month_pane

0x1ca2,	// (0x0002fa7b) main_phob_fisheye_pane

0xcbf1,	// (0x0003a9ca) scroll_pane_cp0031_ParamLimits

0xcbf1,	// (0x0003a9ca) scroll_pane_cp0031

0xdb88,	// (0x0003b961) wait_bar_pane_cp08_ParamLimits

0x7aa4,	// (0x0003587d) cset_list_set_pane_copy1_ParamLimits

0xe2d4,	// (0x0003c0ad) highlight_cell_cale_month_pane_g1

0x839d,	// (0x00036176) highlight_cell_cale_month_pane_t1

0xd812,	// (0x0003b5eb) list_gen_pane_cp01

0xd39d,	// (0x0003b176) scroll_pane_01

0x83ab,	// (0x00036184) list_single_double_fisheye_pane

0x83b4,	// (0x0003618d) list_double_fisheye_pane_g1_ParamLimits

0x83b4,	// (0x0003618d) list_double_fisheye_pane_g1

0x83c0,	// (0x00036199) list_double_fisheye_pane_g2_ParamLimits

0x83c0,	// (0x00036199) list_double_fisheye_pane_g2

0x83d4,	// (0x000361ad) list_double_fisheye_pane_g3_ParamLimits

0x83d4,	// (0x000361ad) list_double_fisheye_pane_g3

0x0004,

0xfc90,	// (0x0003da69) list_double_fisheye_pane_g_ParamLimits

0xfc90,	// (0x0003da69) list_double_fisheye_pane_g

0x83fd,	// (0x000361d6) list_double_fisheye_pane_t1_ParamLimits

0x83fd,	// (0x000361d6) list_double_fisheye_pane_t1

0x8418,	// (0x000361f1) list_double_fisheye_pane_t2_ParamLimits

0x8418,	// (0x000361f1) list_double_fisheye_pane_t2

0x0001,

0xfc9b,	// (0x0003da74) list_double_fisheye_pane_t_ParamLimits

0xfc9b,	// (0x0003da74) list_double_fisheye_pane_t

0x1ca2,	// (0x0002fa7b) main_call5_pane

0x81ac,	// (0x00035f85) sc_swipe_pane_ParamLimits

0x81ac,	// (0x00035f85) sc_swipe_pane

0x844d,	// (0x00036226) call5_image_pane_ParamLimits

0x844d,	// (0x00036226) call5_image_pane

0x846a,	// (0x00036243) call5_swipe_1_pane_ParamLimits

0x846a,	// (0x00036243) call5_swipe_1_pane

0x847d,	// (0x00036256) call5_swipe_2_pane_ParamLimits

0x847d,	// (0x00036256) call5_swipe_2_pane

0x84a8,	// (0x00036281) popup_call5_audio_first_window_ParamLimits

0x84a8,	// (0x00036281) popup_call5_audio_first_window

0xca8c,	// (0x0003a865) call5_swipe_1_pane_g1_ParamLimits

0xca8c,	// (0x0003a865) call5_swipe_1_pane_g1

0xe2dc,	// (0x0003c0b5) call5_swipe_1_pane_g2_ParamLimits

0xe2dc,	// (0x0003c0b5) call5_swipe_1_pane_g2

0x0001,

0xfca0,	// (0x0003da79) call5_swipe_1_pane_g_ParamLimits

0xfca0,	// (0x0003da79) call5_swipe_1_pane_g

0xe2e8,	// (0x0003c0c1) call5_swipe_1_pane_t1_ParamLimits

0xe2e8,	// (0x0003c0c1) call5_swipe_1_pane_t1

0xca8c,	// (0x0003a865) call5_swipe_2_pane_g1_ParamLimits

0xca8c,	// (0x0003a865) call5_swipe_2_pane_g1

0xe2fd,	// (0x0003c0d6) call5_swipe_2_pane_g2_ParamLimits

0xe2fd,	// (0x0003c0d6) call5_swipe_2_pane_g2

0x0001,

0xfca5,	// (0x0003da7e) call5_swipe_2_pane_g_ParamLimits

0xfca5,	// (0x0003da7e) call5_swipe_2_pane_g

0xe309,	// (0x0003c0e2) call5_swipe_2_pane_t1_ParamLimits

0xe309,	// (0x0003c0e2) call5_swipe_2_pane_t1

0xe31e,	// (0x0003c0f7) sc_swipe_pane_g1_ParamLimits

0xe31e,	// (0x0003c0f7) sc_swipe_pane_g1

0xe32b,	// (0x0003c104) sc_swipe_pane_g2_ParamLimits

0xe32b,	// (0x0003c104) sc_swipe_pane_g2

0x0001,

0xfcaa,	// (0x0003da83) sc_swipe_pane_g_ParamLimits

0xfcaa,	// (0x0003da83) sc_swipe_pane_g

0xe337,	// (0x0003c110) sc_swipe_pane_t1_ParamLimits

0xe337,	// (0x0003c110) sc_swipe_pane_t1

0x1ca2,	// (0x0002fa7b) main_cmail_launcher_pane

0x84b9,	// (0x00036292) aid_size_cell_cmail_l_ParamLimits

0x84b9,	// (0x00036292) aid_size_cell_cmail_l

0x84c7,	// (0x000362a0) grid_cmail_l_pane_ParamLimits

0x84c7,	// (0x000362a0) grid_cmail_l_pane

0x84e1,	// (0x000362ba) cell_cmail_l_pane_ParamLimits

0x84e1,	// (0x000362ba) cell_cmail_l_pane

0xe34c,	// (0x0003c125) cell_cmail_l_pane_g1_ParamLimits

0xe34c,	// (0x0003c125) cell_cmail_l_pane_g1

0xe358,	// (0x0003c131) cell_cmail_l_pane_t1_ParamLimits

0xe358,	// (0x0003c131) cell_cmail_l_pane_t1

0xe36e,	// (0x0003c147) cell_cmail_l_pane_t2_ParamLimits

0xe36e,	// (0x0003c147) cell_cmail_l_pane_t2

0x0001,

0xfcaf,	// (0x0003da88) cell_cmail_l_pane_t_ParamLimits

0xfcaf,	// (0x0003da88) cell_cmail_l_pane_t

0xa7ec,	// (0x000385c5) grid_highlight_pane_cp018_ParamLimits

0xa7ec,	// (0x000385c5) grid_highlight_pane_cp018

0x039f,	// (0x0002e178) main2_pane_ParamLimits

0x039f,	// (0x0002e178) main2_pane

0xa453,	// (0x0003822c) popup_sp_fs_action_menu_bg_pane_g1

0xa45b,	// (0x00038234) popup_sp_fs_action_menu_bg_pane_g2

0xa463,	// (0x0003823c) popup_sp_fs_action_menu_bg_pane_g3

0xa46b,	// (0x00038244) popup_sp_fs_action_menu_bg_pane_g4

0xa473,	// (0x0003824c) popup_sp_fs_action_menu_bg_pane_g5

0xa47b,	// (0x00038254) popup_sp_fs_action_menu_bg_pane_g6

0xa483,	// (0x0003825c) popup_sp_fs_action_menu_bg_pane_g7

0xa48b,	// (0x00038264) popup_sp_fs_action_menu_bg_pane_g8

0xa493,	// (0x0003826c) popup_sp_fs_action_menu_bg_pane_g9

0xa49b,	// (0x00038274) popup_sp_fs_action_menu_bg_pane_g10

0xa49b,	// (0x00038274) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf186,	// (0x0003cf5f) popup_sp_fs_action_menu_bg_pane_g

0x2871,	// (0x0003064a) list_medium_line_x2_t3_g3_g1_ParamLimits

0x2871,	// (0x0003064a) list_medium_line_x2_t3_g3_g1

0x287d,	// (0x00030656) list_medium_line_x2_t3_g3_g2_ParamLimits

0x287d,	// (0x00030656) list_medium_line_x2_t3_g3_g2

0x2889,	// (0x00030662) list_medium_line_x2_t3_g3_g3_ParamLimits

0x2889,	// (0x00030662) list_medium_line_x2_t3_g3_g3

0x0002,

0xf234,	// (0x0003d00d) list_medium_line_x2_t3_g3_g_ParamLimits

0xf234,	// (0x0003d00d) list_medium_line_x2_t3_g3_g

0x2895,	// (0x0003066e) list_medium_line_x2_t3_g3_t1_ParamLimits

0x2895,	// (0x0003066e) list_medium_line_x2_t3_g3_t1

0x28aa,	// (0x00030683) list_medium_line_x2_t3_g3_t2_ParamLimits

0x28aa,	// (0x00030683) list_medium_line_x2_t3_g3_t2

0x28be,	// (0x00030697) list_medium_line_x2_t3_g3_t3_ParamLimits

0x28be,	// (0x00030697) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23b,	// (0x0003d014) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23b,	// (0x0003d014) list_medium_line_x2_t3_g3_t

0x2871,	// (0x0003064a) list_medium_line_x2_t3_g2_g1_ParamLimits

0x2871,	// (0x0003064a) list_medium_line_x2_t3_g2_g1

0x2889,	// (0x00030662) list_medium_line_x2_t3_g2_g2_ParamLimits

0x2889,	// (0x00030662) list_medium_line_x2_t3_g2_g2

0x0001,

0xf242,	// (0x0003d01b) list_medium_line_x2_t3_g2_g_ParamLimits

0xf242,	// (0x0003d01b) list_medium_line_x2_t3_g2_g

0x28d3,	// (0x000306ac) list_medium_line_x2_t3_g2_t1_ParamLimits

0x28d3,	// (0x000306ac) list_medium_line_x2_t3_g2_t1

0x28e9,	// (0x000306c2) list_medium_line_x2_t3_g2_t2_ParamLimits

0x28e9,	// (0x000306c2) list_medium_line_x2_t3_g2_t2

0x28fb,	// (0x000306d4) list_medium_line_x2_t3_g2_t3_ParamLimits

0x28fb,	// (0x000306d4) list_medium_line_x2_t3_g2_t3

0x0002,

0xf247,	// (0x0003d020) list_medium_line_x2_t3_g2_t_ParamLimits

0xf247,	// (0x0003d020) list_medium_line_x2_t3_g2_t

0x2871,	// (0x0003064a) list_medium_line_x2_t4_g4_g1_ParamLimits

0x2871,	// (0x0003064a) list_medium_line_x2_t4_g4_g1

0x2919,	// (0x000306f2) list_medium_line_x2_t4_g4_g2_ParamLimits

0x2919,	// (0x000306f2) list_medium_line_x2_t4_g4_g2

0x287d,	// (0x00030656) list_medium_line_x2_t4_g4_g3_ParamLimits

0x287d,	// (0x00030656) list_medium_line_x2_t4_g4_g3

0x2925,	// (0x000306fe) list_medium_line_x2_t4_g4_g4_ParamLimits

0x2925,	// (0x000306fe) list_medium_line_x2_t4_g4_g4

0x0003,

0xf24e,	// (0x0003d027) list_medium_line_x2_t4_g4_g_ParamLimits

0xf24e,	// (0x0003d027) list_medium_line_x2_t4_g4_g

0x2931,	// (0x0003070a) list_medium_line_x2_t4_g4_t1_ParamLimits

0x2931,	// (0x0003070a) list_medium_line_x2_t4_g4_t1

0x294b,	// (0x00030724) list_medium_line_x2_t4_g4_t2_ParamLimits

0x294b,	// (0x00030724) list_medium_line_x2_t4_g4_t2

0x2961,	// (0x0003073a) list_medium_line_x2_t4_g4_t3_ParamLimits

0x2961,	// (0x0003073a) list_medium_line_x2_t4_g4_t3

0x2976,	// (0x0003074f) list_medium_line_x2_t4_g4_t4_ParamLimits

0x2976,	// (0x0003074f) list_medium_line_x2_t4_g4_t4

0x0003,

0xf257,	// (0x0003d030) list_medium_line_x2_t4_g4_t_ParamLimits

0xf257,	// (0x0003d030) list_medium_line_x2_t4_g4_t

0x2871,	// (0x0003064a) list_medium_line_x2_t2_g4_g1_ParamLimits

0x2871,	// (0x0003064a) list_medium_line_x2_t2_g4_g1

0x2919,	// (0x000306f2) list_medium_line_x2_t2_g4_g2_ParamLimits

0x2919,	// (0x000306f2) list_medium_line_x2_t2_g4_g2

0x287d,	// (0x00030656) list_medium_line_x2_t2_g4_g3_ParamLimits

0x287d,	// (0x00030656) list_medium_line_x2_t2_g4_g3

0x2889,	// (0x00030662) list_medium_line_x2_t2_g4_g4_ParamLimits

0x2889,	// (0x00030662) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2be,	// (0x0003d097) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2be,	// (0x0003d097) list_medium_line_x2_t2_g4_g

0x36ea,	// (0x000314c3) list_medium_line_x2_t2_g4_t1_ParamLimits

0x36ea,	// (0x000314c3) list_medium_line_x2_t2_g4_t1

0x28be,	// (0x00030697) list_medium_line_x2_t2_g4_t2_ParamLimits

0x28be,	// (0x00030697) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2c7,	// (0x0003d0a0) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2c7,	// (0x0003d0a0) list_medium_line_x2_t2_g4_t

0x2871,	// (0x0003064a) list_medium_line_x2_t2_g3_g1_ParamLimits

0x2871,	// (0x0003064a) list_medium_line_x2_t2_g3_g1

0x287d,	// (0x00030656) list_medium_line_x2_t2_g3_g2_ParamLimits

0x287d,	// (0x00030656) list_medium_line_x2_t2_g3_g2

0x2889,	// (0x00030662) list_medium_line_x2_t2_g3_g3_ParamLimits

0x2889,	// (0x00030662) list_medium_line_x2_t2_g3_g3

0x0002,

0xf234,	// (0x0003d00d) list_medium_line_x2_t2_g3_g_ParamLimits

0xf234,	// (0x0003d00d) list_medium_line_x2_t2_g3_g

0x36ff,	// (0x000314d8) list_medium_line_x2_t2_g3_t1_ParamLimits

0x36ff,	// (0x000314d8) list_medium_line_x2_t2_g3_t1

0x28be,	// (0x00030697) list_medium_line_x2_t2_g3_t2_ParamLimits

0x28be,	// (0x00030697) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2cc,	// (0x0003d0a5) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2cc,	// (0x0003d0a5) list_medium_line_x2_t2_g3_t

0x3855,	// (0x0003162e) main_sp_fs_list_pane_ParamLimits

0x3855,	// (0x0003162e) main_sp_fs_list_pane

0xcac8,	// (0x0003a8a1) sp_fs_scroll_pane_ParamLimits

0xcac8,	// (0x0003a8a1) sp_fs_scroll_pane

0x3861,	// (0x0003163a) list_medium_line_x2_t3_t1

0x3871,	// (0x0003164a) list_medium_line_x2_t3_t2

0x387f,	// (0x00031658) list_medium_line_x2_t3_t3

0x0002,

0xf317,	// (0x0003d0f0) list_medium_line_x2_t3_t

0x388d,	// (0x00031666) list_medium_line_x3_t4_t1

0x389d,	// (0x00031676) list_medium_line_x3_t4_t2

0x38ab,	// (0x00031684) list_medium_line_x3_t4_t3

0x387f,	// (0x00031658) list_medium_line_x3_t4_t4

0x0003,

0xf31e,	// (0x0003d0f7) list_medium_line_x3_t4_t

0x38b9,	// (0x00031692) list_medium_line_x4_t5_t1

0x38c9,	// (0x000316a2) list_medium_line_x4_t5_t2

0x38ab,	// (0x00031684) list_medium_line_x4_t5_t3

0x38d7,	// (0x000316b0) list_medium_line_x4_t5_t4

0x387f,	// (0x00031658) list_medium_line_x4_t5_t5

0x0004,

0xf327,	// (0x0003d100) list_medium_line_x4_t5_t

0x2871,	// (0x0003064a) list_medium_line_t4_g4_g1_ParamLimits

0x2871,	// (0x0003064a) list_medium_line_t4_g4_g1

0x2925,	// (0x000306fe) list_medium_line_t4_g4_g2_ParamLimits

0x2925,	// (0x000306fe) list_medium_line_t4_g4_g2

0x38e5,	// (0x000316be) list_medium_line_t4_g4_g3_ParamLimits

0x38e5,	// (0x000316be) list_medium_line_t4_g4_g3

0x2889,	// (0x00030662) list_medium_line_t4_g4_g4_ParamLimits

0x2889,	// (0x00030662) list_medium_line_t4_g4_g4

0x0003,

0xf332,	// (0x0003d10b) list_medium_line_t4_g4_g_ParamLimits

0xf332,	// (0x0003d10b) list_medium_line_t4_g4_g

0x38f1,	// (0x000316ca) list_medium_line_t4_g4_t1_ParamLimits

0x38f1,	// (0x000316ca) list_medium_line_t4_g4_t1

0x3906,	// (0x000316df) list_medium_line_t4_g4_t2_ParamLimits

0x3906,	// (0x000316df) list_medium_line_t4_g4_t2

0x391c,	// (0x000316f5) list_medium_line_t4_g4_t3_ParamLimits

0x391c,	// (0x000316f5) list_medium_line_t4_g4_t3

0x28be,	// (0x00030697) list_medium_line_t4_g4_t4_ParamLimits

0x28be,	// (0x00030697) list_medium_line_t4_g4_t4

0x0003,

0xf33b,	// (0x0003d114) list_medium_line_t4_g4_t_ParamLimits

0xf33b,	// (0x0003d114) list_medium_line_t4_g4_t

0x3a64,	// (0x0003183d) chi_dic_find_pane_g1

0x0807,	// (0x0002e5e0) main_tport_pane

0xd4bf,	// (0x0003b298) list_medium_line_plain_t1

0x6ed9,	// (0x00034cb2) list_medium_line_t2_g2_g1_ParamLimits

0x6ed9,	// (0x00034cb2) list_medium_line_t2_g2_g1

0x6ee5,	// (0x00034cbe) list_medium_line_t2_g2_g2_ParamLimits

0x6ee5,	// (0x00034cbe) list_medium_line_t2_g2_g2

0x0001,

0xfa13,	// (0x0003d7ec) list_medium_line_t2_g2_g_ParamLimits

0xfa13,	// (0x0003d7ec) list_medium_line_t2_g2_g

0x6ef1,	// (0x00034cca) list_medium_line_t2_g2_t1_ParamLimits

0x6ef1,	// (0x00034cca) list_medium_line_t2_g2_t1

0x6f0b,	// (0x00034ce4) list_medium_line_t2_g2_t2_ParamLimits

0x6f0b,	// (0x00034ce4) list_medium_line_t2_g2_t2

0x0001,

0xfa18,	// (0x0003d7f1) list_medium_line_t2_g2_t_ParamLimits

0xfa18,	// (0x0003d7f1) list_medium_line_t2_g2_t

0xd81b,	// (0x0003b5f4) aid_sp_fs_list_icon_a_sm

0xd823,	// (0x0003b5fc) aid_sp_fs_list_icon_d

0xd82b,	// (0x0003b604) aid_sp_fs_text_primary

0xd834,	// (0x0003b60d) aid_sp_fs_text_secondary

0x7546,	// (0x0003531f) list_medium_line

0x7546,	// (0x0003531f) list_medium_line_g2

0x7546,	// (0x0003531f) list_medium_line_g3

0x7546,	// (0x0003531f) list_medium_line_plain

0x7546,	// (0x0003531f) list_medium_line_plain_t2

0x7546,	// (0x0003531f) list_medium_line_plain_t3

0x7546,	// (0x0003531f) list_medium_line_right_icon

0x7546,	// (0x0003531f) list_medium_line_right_iconx2

0x7546,	// (0x0003531f) list_medium_line_t2

0x7546,	// (0x0003531f) list_medium_line_t2_g2

0x7546,	// (0x0003531f) list_medium_line_t2_g3

0x7546,	// (0x0003531f) list_medium_line_t2_right_icon

0x7546,	// (0x0003531f) list_medium_line_t2_right_iconx2

0x7546,	// (0x0003531f) list_medium_line_t3

0x7546,	// (0x0003531f) list_medium_line_t3_g2

0x7546,	// (0x0003531f) list_medium_line_t3_g3

0x7546,	// (0x0003531f) list_medium_line_t3_right_iconx2

0x754f,	// (0x00035328) list_medium_line_t4_g4

0x7558,	// (0x00035331) list_medium_line_x2

0x7558,	// (0x00035331) list_medium_line_x2_t2_g2

0x7558,	// (0x00035331) list_medium_line_x2_t2_g3

0x7558,	// (0x00035331) list_medium_line_x2_t2_g4

0x7558,	// (0x00035331) list_medium_line_x2_t3

0x7558,	// (0x00035331) list_medium_line_x2_t3_g2

0x7558,	// (0x00035331) list_medium_line_x2_t3_g3

0x7558,	// (0x00035331) list_medium_line_x2_t3_g4

0x7558,	// (0x00035331) list_medium_line_x2_t4_g2

0x7558,	// (0x00035331) list_medium_line_x2_t4_g4

0x7561,	// (0x0003533a) list_medium_line_x3

0x7561,	// (0x0003533a) list_medium_line_x3_t4

0x7561,	// (0x0003533a) list_medium_line_x3_t4_g4

0x754f,	// (0x00035328) list_medium_line_x4_t4

0x754f,	// (0x00035328) list_medium_line_x4_t4_g7

0x754f,	// (0x00035328) list_medium_line_x4_t5

0x756a,	// (0x00035343) list_single_fs_dyc_pane_ParamLimits

0x756a,	// (0x00035343) list_single_fs_dyc_pane

0x2871,	// (0x0003064a) list_medium_line_x4_t4_g7_g1_ParamLimits

0x2871,	// (0x0003064a) list_medium_line_x4_t4_g7_g1

0x7c66,	// (0x00035a3f) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7c66,	// (0x00035a3f) list_medium_line_x4_t4_g7_g2

0x7c72,	// (0x00035a4b) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7c72,	// (0x00035a4b) list_medium_line_x4_t4_g7_g3

0x7c81,	// (0x00035a5a) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7c81,	// (0x00035a5a) list_medium_line_x4_t4_g7_g4

0x7c8d,	// (0x00035a66) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7c8d,	// (0x00035a66) list_medium_line_x4_t4_g7_g5

0x7c9c,	// (0x00035a75) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7c9c,	// (0x00035a75) list_medium_line_x4_t4_g7_g6

0x7cab,	// (0x00035a84) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7cab,	// (0x00035a84) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbe3,	// (0x0003d9bc) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbe3,	// (0x0003d9bc) list_medium_line_x4_t4_g7_g

0x7cb7,	// (0x00035a90) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7cb7,	// (0x00035a90) list_medium_line_x4_t4_g7_t1

0x7ccc,	// (0x00035aa5) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7ccc,	// (0x00035aa5) list_medium_line_x4_t4_g7_t2

0x7ce1,	// (0x00035aba) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7ce1,	// (0x00035aba) list_medium_line_x4_t4_g7_t3

0x7cf6,	// (0x00035acf) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7cf6,	// (0x00035acf) list_medium_line_x4_t4_g7_t4

0x7d08,	// (0x00035ae1) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7d08,	// (0x00035ae1) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbf2,	// (0x0003d9cb) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbf2,	// (0x0003d9cb) list_medium_line_x4_t4_g7_t

0x7d1a,	// (0x00035af3) list_single_dyc_row_pane_ParamLimits

0x7d1a,	// (0x00035af3) list_single_dyc_row_pane

0x843a,	// (0x00036213) call5_gesture_pane_ParamLimits

0x843a,	// (0x00036213) call5_gesture_pane

0x8490,	// (0x00036269) call5_windows_pane_ParamLimits

0x8490,	// (0x00036269) call5_windows_pane

0x84fb,	// (0x000362d4) call5_swipe_1_pane_cp_ParamLimits

0x84fb,	// (0x000362d4) call5_swipe_1_pane_cp

0x8507,	// (0x000362e0) call5_swipe_2_pane_cp_ParamLimits

0x8507,	// (0x000362e0) call5_swipe_2_pane_cp

0xa5ab,	// (0x00038384) call5_image_pane_cp

0x8513,	// (0x000362ec) popup_call5_audio_first_window_cp_ParamLimits

0x8513,	// (0x000362ec) popup_call5_audio_first_window_cp

0xe31e,	// (0x0003c0f7) call5_swipe_1_pane_g1_cp_ParamLimits

0xe31e,	// (0x0003c0f7) call5_swipe_1_pane_g1_cp

0xe38b,	// (0x0003c164) call5_swipe_1_pane_g2_cp

0xe337,	// (0x0003c110) call5_swipe_1_pane_t1_cp_ParamLimits

0xe337,	// (0x0003c110) call5_swipe_1_pane_t1_cp

0xe31e,	// (0x0003c0f7) call5_swipe_2_pane_g1_cp_ParamLimits

0xe31e,	// (0x0003c0f7) call5_swipe_2_pane_g1_cp

0xe393,	// (0x0003c16c) call5_swipe_2_pane_g2_cp

0xe39b,	// (0x0003c174) call5_swipe_2_pane_t1_cp_ParamLimits

0xe39b,	// (0x0003c174) call5_swipe_2_pane_t1_cp

0xa7ec,	// (0x000385c5) main_sp_fs_email_pane

0xe3b0,	// (0x0003c189) main_sp_fs_listscroll_pane_te

0x8521,	// (0x000362fa) popup_sp_fs_action_menu_pane_ParamLimits

0x8521,	// (0x000362fa) popup_sp_fs_action_menu_pane

0xc847,	// (0x0003a620) bg_sp_fs_ctrlbar_pane_g1

0xe3b9,	// (0x0003c192) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe3c2,	// (0x0003c19b) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe3cb,	// (0x0003c1a4) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc847,	// (0x0003a620) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcb4,	// (0x0003da8d) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc62c,	// (0x0003a405) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc62c,	// (0x0003a405) bg_sp_fs_ctrlbar_ddmenu_pane

0xe3d4,	// (0x0003c1ad) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe3d4,	// (0x0003c1ad) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe3e0,	// (0x0003c1b9) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe3e0,	// (0x0003c1b9) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcbd,	// (0x0003da96) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcbd,	// (0x0003da96) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe3ec,	// (0x0003c1c5) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe3ec,	// (0x0003c1c5) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x8565,	// (0x0003633e) list_medium_line_t2_right_icon_g1

0x856d,	// (0x00036346) list_medium_line_t2_right_icon_t1

0x857d,	// (0x00036356) list_medium_line_t2_right_icon_t2

0x0001,

0xfcc2,	// (0x0003da9b) list_medium_line_t2_right_icon_t

0xc43f,	// (0x0003a218) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc43f,	// (0x0003a218) bg_sp_fs_ctrlbar_pane

0x85d7,	// (0x000363b0) main_sp_fs_ctrlbar_button_pane_cp01

0x85e1,	// (0x000363ba) main_sp_fs_ctrlbar_ddmenu_pane

0xe43e,	// (0x0003c217) main_sp_fs_ctrlbar_pane_g1

0xe44a,	// (0x0003c223) main_sp_fs_ctrlbar_pane_g2

0x0001,

0x00a3,	// (0x0002de7c) main_sp_fs_ctrlbar_pane_g

0xe456,	// (0x0003c22f) main_sp_fs_ctrlbar_pane_t1

0x85eb,	// (0x000363c4) main_sp_fs_ctrlbar_pane

0x860f,	// (0x000363e8) main_sp_fs_listscroll_pane_te_cp01

0x862f,	// (0x00036408) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x862f,	// (0x00036408) popup_sp_fs_action_menu_pane_cp01

0xa7ec,	// (0x000385c5) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa7ec,	// (0x000385c5) bg_sp_fs_highlight_list_pane_cp01

0xe486,	// (0x0003c25f) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe486,	// (0x0003c25f) sp_fs_action_menu_list_gene_pane_g1

0xe495,	// (0x0003c26e) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe495,	// (0x0003c26e) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfccc,	// (0x0003daa5) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfccc,	// (0x0003daa5) sp_fs_action_menu_list_gene_pane_g

0xe4a2,	// (0x0003c27b) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe4a2,	// (0x0003c27b) sp_fs_action_menu_list_gene_pane_t1

0xe4ba,	// (0x0003c293) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe4ba,	// (0x0003c293) sp_fs_action_menu_list_gene_pane

0xe4d9,	// (0x0003c2b2) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe4d9,	// (0x0003c2b2) popup_sp_fs_action_menu_bg_pane

0xe4e7,	// (0x0003c2c0) sp_fs_action_menu_list_pane_ParamLimits

0xe4e7,	// (0x0003c2c0) sp_fs_action_menu_list_pane

0x865f,	// (0x00036438) sp_fs_scroll_pane_cp01_ParamLimits

0x865f,	// (0x00036438) sp_fs_scroll_pane_cp01

0x8685,	// (0x0003645e) list_medium_line_plain_t2_t1

0x8695,	// (0x0003646e) list_medium_line_plain_t2_t2

0x0001,

0xfcd1,	// (0x0003daaa) list_medium_line_plain_t2_t

0x86a5,	// (0x0003647e) list_medium_line_plain_t3_t1

0x86b5,	// (0x0003648e) list_medium_line_plain_t3_t2

0x86c3,	// (0x0003649c) list_medium_line_plain_t3_t3

0x0002,

0xfcd6,	// (0x0003daaf) list_medium_line_plain_t3_t

0x2871,	// (0x0003064a) list_medium_line_x2_t2_g2_g1_ParamLimits

0x2871,	// (0x0003064a) list_medium_line_x2_t2_g2_g1

0x2889,	// (0x00030662) list_medium_line_x2_t2_g2_g2_ParamLimits

0x2889,	// (0x00030662) list_medium_line_x2_t2_g2_g2

0x0001,

0xf242,	// (0x0003d01b) list_medium_line_x2_t2_g2_g_ParamLimits

0xf242,	// (0x0003d01b) list_medium_line_x2_t2_g2_g

0x38f1,	// (0x000316ca) list_medium_line_x2_t2_g2_t1_ParamLimits

0x38f1,	// (0x000316ca) list_medium_line_x2_t2_g2_t1

0x28be,	// (0x00030697) list_medium_line_x2_t2_g2_t2_ParamLimits

0x28be,	// (0x00030697) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcdd,	// (0x0003dab6) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcdd,	// (0x0003dab6) list_medium_line_x2_t2_g2_t

0x2871,	// (0x0003064a) list_medium_line_x2_t4_g2_g1_ParamLimits

0x2871,	// (0x0003064a) list_medium_line_x2_t4_g2_g1

0x2889,	// (0x00030662) list_medium_line_x2_t4_g2_g2_ParamLimits

0x2889,	// (0x00030662) list_medium_line_x2_t4_g2_g2

0x0001,

0xf242,	// (0x0003d01b) list_medium_line_x2_t4_g2_g_ParamLimits

0xf242,	// (0x0003d01b) list_medium_line_x2_t4_g2_g

0x86d1,	// (0x000364aa) list_medium_line_x2_t4_g2_t1_ParamLimits

0x86d1,	// (0x000364aa) list_medium_line_x2_t4_g2_t1

0x86eb,	// (0x000364c4) list_medium_line_x2_t4_g2_t2_ParamLimits

0x86eb,	// (0x000364c4) list_medium_line_x2_t4_g2_t2

0x8701,	// (0x000364da) list_medium_line_x2_t4_g2_t3_ParamLimits

0x8701,	// (0x000364da) list_medium_line_x2_t4_g2_t3

0x28be,	// (0x00030697) list_medium_line_x2_t4_g2_t4_ParamLimits

0x28be,	// (0x00030697) list_medium_line_x2_t4_g2_t4

0x0003,

0xfce2,	// (0x0003dabb) list_medium_line_x2_t4_g2_t_ParamLimits

0xfce2,	// (0x0003dabb) list_medium_line_x2_t4_g2_t

0x8716,	// (0x000364ef) list_medium_line_t3_right_iconx2_g1

0x8565,	// (0x0003633e) list_medium_line_t3_right_iconx2_g2

0x871e,	// (0x000364f7) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfceb,	// (0x0003dac4) list_medium_line_t3_right_iconx2_g

0x8728,	// (0x00036501) list_medium_line_t3_right_iconx2_t1

0x8738,	// (0x00036511) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfcf2,	// (0x0003dacb) list_medium_line_t3_right_iconx2_t

0x2871,	// (0x0003064a) list_medium_line_x3_t4_g4_g1_ParamLimits

0x2871,	// (0x0003064a) list_medium_line_x3_t4_g4_g1

0x287d,	// (0x00030656) list_medium_line_x3_t4_g4_g2_ParamLimits

0x287d,	// (0x00030656) list_medium_line_x3_t4_g4_g2

0x2925,	// (0x000306fe) list_medium_line_x3_t4_g4_g3_ParamLimits

0x2925,	// (0x000306fe) list_medium_line_x3_t4_g4_g3

0x8746,	// (0x0003651f) list_medium_line_x3_t4_g4_g4_ParamLimits

0x8746,	// (0x0003651f) list_medium_line_x3_t4_g4_g4

0x0003,

0xfcf7,	// (0x0003dad0) list_medium_line_x3_t4_g4_g_ParamLimits

0xfcf7,	// (0x0003dad0) list_medium_line_x3_t4_g4_g

0x8752,	// (0x0003652b) list_medium_line_x3_t4_g4_t1_ParamLimits

0x8752,	// (0x0003652b) list_medium_line_x3_t4_g4_t1

0x8769,	// (0x00036542) list_medium_line_x3_t4_g4_t2_ParamLimits

0x8769,	// (0x00036542) list_medium_line_x3_t4_g4_t2

0x8784,	// (0x0003655d) list_medium_line_x3_t4_g4_t3_ParamLimits

0x8784,	// (0x0003655d) list_medium_line_x3_t4_g4_t3

0x8799,	// (0x00036572) list_medium_line_x3_t4_g4_t4_ParamLimits

0x8799,	// (0x00036572) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd00,	// (0x0003dad9) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd00,	// (0x0003dad9) list_medium_line_x3_t4_g4_t

0x87b6,	// (0x0003658f) list_single_dyc_row_text_pane_t1_ParamLimits

0x87b6,	// (0x0003658f) list_single_dyc_row_text_pane_t1

0x87ff,	// (0x000365d8) list_single_dyc_row_text_pane_t2_ParamLimits

0x87ff,	// (0x000365d8) list_single_dyc_row_text_pane_t2

0xe507,	// (0x0003c2e0) list_single_dyc_row_text_pane_t3_ParamLimits

0xe507,	// (0x0003c2e0) list_single_dyc_row_text_pane_t3

0x0005,

0xfd09,	// (0x0003dae2) list_single_dyc_row_text_pane_t_ParamLimits

0xfd09,	// (0x0003dae2) list_single_dyc_row_text_pane_t

0xe52b,	// (0x0003c304) list_single_dyc_row_pane_g1_ParamLimits

0xe52b,	// (0x0003c304) list_single_dyc_row_pane_g1

0xe537,	// (0x0003c310) list_single_dyc_row_pane_g2_ParamLimits

0xe537,	// (0x0003c310) list_single_dyc_row_pane_g2

0xe543,	// (0x0003c31c) list_single_dyc_row_pane_g3_ParamLimits

0xe543,	// (0x0003c31c) list_single_dyc_row_pane_g3

0xe54f,	// (0x0003c328) list_single_dyc_row_pane_g4_ParamLimits

0xe54f,	// (0x0003c328) list_single_dyc_row_pane_g4

0x0003,

0xfd16,	// (0x0003daef) list_single_dyc_row_pane_g_ParamLimits

0xfd16,	// (0x0003daef) list_single_dyc_row_pane_g

0xe55b,	// (0x0003c334) list_single_dyc_row_text_pane_ParamLimits

0xe55b,	// (0x0003c334) list_single_dyc_row_text_pane

0x9c68,	// (0x00037a41) bg_sp_fs_scroll_pane

0xe57a,	// (0x0003c353) thumb_sp_fs_scroll_pane

0x6ed9,	// (0x00034cb2) list_medium_line_g1_ParamLimits

0x6ed9,	// (0x00034cb2) list_medium_line_g1

0xe583,	// (0x0003c35c) list_medium_line_t1_ParamLimits

0xe583,	// (0x0003c35c) list_medium_line_t1

0x2871,	// (0x0003064a) list_medium_line_x2_g1_ParamLimits

0x2871,	// (0x0003064a) list_medium_line_x2_g1

0x287d,	// (0x00030656) list_medium_line_x2_g2_ParamLimits

0x287d,	// (0x00030656) list_medium_line_x2_g2

0x0001,

0xfd1f,	// (0x0003daf8) list_medium_line_x2_g_ParamLimits

0xfd1f,	// (0x0003daf8) list_medium_line_x2_g

0xe598,	// (0x0003c371) list_medium_line_x2_t1_ParamLimits

0xe598,	// (0x0003c371) list_medium_line_x2_t1

0x2871,	// (0x0003064a) list_medium_line_x3_g1_ParamLimits

0x2871,	// (0x0003064a) list_medium_line_x3_g1

0x287d,	// (0x00030656) list_medium_line_x3_g2_ParamLimits

0x287d,	// (0x00030656) list_medium_line_x3_g2

0x0001,

0xfd1f,	// (0x0003daf8) list_medium_line_x3_g_ParamLimits

0xfd1f,	// (0x0003daf8) list_medium_line_x3_g

0xe598,	// (0x0003c371) list_medium_line_x3_t1_ParamLimits

0xe598,	// (0x0003c371) list_medium_line_x3_t1

0xe5ae,	// (0x0003c387) thumb_sp_fs_scroll_pane_g1

0xe5b7,	// (0x0003c390) thumb_sp_fs_scroll_pane_g2

0xe5c0,	// (0x0003c399) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd24,	// (0x0003dafd) thumb_sp_fs_scroll_pane_g

0xe5ae,	// (0x0003c387) bg_sp_fs_scroll_pane_g1

0xe5b7,	// (0x0003c390) bg_sp_fs_scroll_pane_g2

0xe5c0,	// (0x0003c399) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd24,	// (0x0003dafd) bg_sp_fs_scroll_pane_g

0x2871,	// (0x0003064a) list_medium_line_x2_t3_g4_g1_ParamLimits

0x2871,	// (0x0003064a) list_medium_line_x2_t3_g4_g1

0x2919,	// (0x000306f2) list_medium_line_x2_t3_g4_g2_ParamLimits

0x2919,	// (0x000306f2) list_medium_line_x2_t3_g4_g2

0x287d,	// (0x00030656) list_medium_line_x2_t3_g4_g3_ParamLimits

0x287d,	// (0x00030656) list_medium_line_x2_t3_g4_g3

0x2889,	// (0x00030662) list_medium_line_x2_t3_g4_g4_ParamLimits

0x2889,	// (0x00030662) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2be,	// (0x0003d097) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2be,	// (0x0003d097) list_medium_line_x2_t3_g4_g

0x8934,	// (0x0003670d) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8934,	// (0x0003670d) list_medium_line_x2_t3_g4_t1

0x894e,	// (0x00036727) list_medium_line_x2_t3_g4_t2_ParamLimits

0x894e,	// (0x00036727) list_medium_line_x2_t3_g4_t2

0x28be,	// (0x00030697) list_medium_line_x2_t3_g4_t3_ParamLimits

0x28be,	// (0x00030697) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd2b,	// (0x0003db04) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd2b,	// (0x0003db04) list_medium_line_x2_t3_g4_t

0x6ed9,	// (0x00034cb2) list_medium_line_g2_g1_ParamLimits

0x6ed9,	// (0x00034cb2) list_medium_line_g2_g1

0x6ee5,	// (0x00034cbe) list_medium_line_g2_g2_ParamLimits

0x6ee5,	// (0x00034cbe) list_medium_line_g2_g2

0x0001,

0xfa13,	// (0x0003d7ec) list_medium_line_g2_g_ParamLimits

0xfa13,	// (0x0003d7ec) list_medium_line_g2_g

0xe5c9,	// (0x0003c3a2) list_medium_line_g2_t1_ParamLimits

0xe5c9,	// (0x0003c3a2) list_medium_line_g2_t1

0x6ed9,	// (0x00034cb2) list_medium_line_t3_g2_g1_ParamLimits

0x6ed9,	// (0x00034cb2) list_medium_line_t3_g2_g1

0x6ee5,	// (0x00034cbe) list_medium_line_t3_g2_g2_ParamLimits

0x6ee5,	// (0x00034cbe) list_medium_line_t3_g2_g2

0x0001,

0xfa13,	// (0x0003d7ec) list_medium_line_t3_g2_g_ParamLimits

0xfa13,	// (0x0003d7ec) list_medium_line_t3_g2_g

0x8968,	// (0x00036741) list_medium_line_t3_g2_t1_ParamLimits

0x8968,	// (0x00036741) list_medium_line_t3_g2_t1

0x8982,	// (0x0003675b) list_medium_line_t3_g2_t2_ParamLimits

0x8982,	// (0x0003675b) list_medium_line_t3_g2_t2

0x8998,	// (0x00036771) list_medium_line_t3_g2_t3_ParamLimits

0x8998,	// (0x00036771) list_medium_line_t3_g2_t3

0x0002,

0xfd32,	// (0x0003db0b) list_medium_line_t3_g2_t_ParamLimits

0xfd32,	// (0x0003db0b) list_medium_line_t3_g2_t

0x8565,	// (0x0003633e) list_medium_line_right_icon_g1

0xe5de,	// (0x0003c3b7) list_medium_line_right_icon_t1

0x6ed9,	// (0x00034cb2) list_medium_line_t2_g1_ParamLimits

0x6ed9,	// (0x00034cb2) list_medium_line_t2_g1

0x89b2,	// (0x0003678b) list_medium_line_t2_t1_ParamLimits

0x89b2,	// (0x0003678b) list_medium_line_t2_t1

0x89cc,	// (0x000367a5) list_medium_line_t2_t2_ParamLimits

0x89cc,	// (0x000367a5) list_medium_line_t2_t2

0x0001,

0xfd39,	// (0x0003db12) list_medium_line_t2_t_ParamLimits

0xfd39,	// (0x0003db12) list_medium_line_t2_t

0x6ed9,	// (0x00034cb2) list_medium_line_t3_g1_ParamLimits

0x6ed9,	// (0x00034cb2) list_medium_line_t3_g1

0x89e5,	// (0x000367be) list_medium_line_t3_t1_ParamLimits

0x89e5,	// (0x000367be) list_medium_line_t3_t1

0x89ff,	// (0x000367d8) list_medium_line_t3_t2_ParamLimits

0x89ff,	// (0x000367d8) list_medium_line_t3_t2

0x8a15,	// (0x000367ee) list_medium_line_t3_t3_ParamLimits

0x8a15,	// (0x000367ee) list_medium_line_t3_t3

0x0002,

0xfd3e,	// (0x0003db17) list_medium_line_t3_t_ParamLimits

0xfd3e,	// (0x0003db17) list_medium_line_t3_t

0x6ed9,	// (0x00034cb2) list_medium_line_g3_g1_ParamLimits

0x6ed9,	// (0x00034cb2) list_medium_line_g3_g1

0x8a2a,	// (0x00036803) list_medium_line_g3_g2_ParamLimits

0x8a2a,	// (0x00036803) list_medium_line_g3_g2

0x6ee5,	// (0x00034cbe) list_medium_line_g3_g3_ParamLimits

0x6ee5,	// (0x00034cbe) list_medium_line_g3_g3

0x0002,

0xfd45,	// (0x0003db1e) list_medium_line_g3_g_ParamLimits

0xfd45,	// (0x0003db1e) list_medium_line_g3_g

0xe5ec,	// (0x0003c3c5) list_medium_line_g3_t1_ParamLimits

0xe5ec,	// (0x0003c3c5) list_medium_line_g3_t1

0x6ed9,	// (0x00034cb2) list_medium_line_t2_g3_g1_ParamLimits

0x6ed9,	// (0x00034cb2) list_medium_line_t2_g3_g1

0x8a2a,	// (0x00036803) list_medium_line_t2_g3_g2_ParamLimits

0x8a2a,	// (0x00036803) list_medium_line_t2_g3_g2

0x6ee5,	// (0x00034cbe) list_medium_line_t2_g3_g3_ParamLimits

0x6ee5,	// (0x00034cbe) list_medium_line_t2_g3_g3

0x0002,

0xfd45,	// (0x0003db1e) list_medium_line_t2_g3_g_ParamLimits

0xfd45,	// (0x0003db1e) list_medium_line_t2_g3_g

0x8a36,	// (0x0003680f) list_medium_line_t2_g3_t1_ParamLimits

0x8a36,	// (0x0003680f) list_medium_line_t2_g3_t1

0x8a50,	// (0x00036829) list_medium_line_t2_g3_t2_ParamLimits

0x8a50,	// (0x00036829) list_medium_line_t2_g3_t2

0x0001,

0xfd4c,	// (0x0003db25) list_medium_line_t2_g3_t_ParamLimits

0xfd4c,	// (0x0003db25) list_medium_line_t2_g3_t

0x6ed9,	// (0x00034cb2) list_medium_line_t3_g3_g1_ParamLimits

0x6ed9,	// (0x00034cb2) list_medium_line_t3_g3_g1

0x8a2a,	// (0x00036803) list_medium_line_t3_g3_g2_ParamLimits

0x8a2a,	// (0x00036803) list_medium_line_t3_g3_g2

0x6ee5,	// (0x00034cbe) list_medium_line_t3_g3_g3_ParamLimits

0x6ee5,	// (0x00034cbe) list_medium_line_t3_g3_g3

0x0002,

0xfd45,	// (0x0003db1e) list_medium_line_t3_g3_g_ParamLimits

0xfd45,	// (0x0003db1e) list_medium_line_t3_g3_g

0x8a6e,	// (0x00036847) list_medium_line_t3_g3_t1_ParamLimits

0x8a6e,	// (0x00036847) list_medium_line_t3_g3_t1

0x8a87,	// (0x00036860) list_medium_line_t3_g3_t2_ParamLimits

0x8a87,	// (0x00036860) list_medium_line_t3_g3_t2

0x8a9d,	// (0x00036876) list_medium_line_t3_g3_t3_ParamLimits

0x8a9d,	// (0x00036876) list_medium_line_t3_g3_t3

0x0002,

0xfd51,	// (0x0003db2a) list_medium_line_t3_g3_t_ParamLimits

0xfd51,	// (0x0003db2a) list_medium_line_t3_g3_t

0x8716,	// (0x000364ef) list_medium_line_right_iconx2_g1

0x8565,	// (0x0003633e) list_medium_line_right_iconx2_g2

0x0001,

0xfd58,	// (0x0003db31) list_medium_line_right_iconx2_g

0xe601,	// (0x0003c3da) list_medium_line_right_iconx2_t1

0x8716,	// (0x000364ef) list_medium_line_t2_right_iconx2_g1

0x8565,	// (0x0003633e) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd58,	// (0x0003db31) list_medium_line_t2_right_iconx2_g

0x8ab7,	// (0x00036890) list_medium_line_t2_right_iconx2_t1

0x8ac7,	// (0x000368a0) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd5d,	// (0x0003db36) list_medium_line_t2_right_iconx2_t

0x8ad9,	// (0x000368b2) list_medium_line_x4_t4_t1

0x8ae7,	// (0x000368c0) list_medium_line_x4_t4_t2

0x8af7,	// (0x000368d0) list_medium_line_x4_t4_t3

0x8b07,	// (0x000368e0) list_medium_line_x4_t4_t4

0x0003,

0xfd62,	// (0x0003db3b) list_medium_line_x4_t4_t

0x8b5a,	// (0x00036933) tport_appsw_pane_ParamLimits

0x8b5a,	// (0x00036933) tport_appsw_pane

0x8b72,	// (0x0003694b) tport_contact_pane_ParamLimits

0x8b72,	// (0x0003694b) tport_contact_pane

0x8b8a,	// (0x00036963) tport_listscroll_pane_ParamLimits

0x8b8a,	// (0x00036963) tport_listscroll_pane

0x8ba4,	// (0x0003697d) cell_tport_appsw_pane_ParamLimits

0x8ba4,	// (0x0003697d) cell_tport_appsw_pane

0xd246,	// (0x0003b01f) tport_appsw_pane_g1_ParamLimits

0xd246,	// (0x0003b01f) tport_appsw_pane_g1

0xe60f,	// (0x0003c3e8) tport_contact_pane_g1

0xe618,	// (0x0003c3f1) tport_contact_pane_t1

0xe626,	// (0x0003c3ff) tport_contact_pane_t2

0x0001,

0xfd6b,	// (0x0003db44) tport_contact_pane_t

0xe634,	// (0x0003c40d) list_tport_pane

0xe63d,	// (0x0003c416) scroll_pane_cp_030

0x8bec,	// (0x000369c5) cell_tport_appsw_pane_g1

0x8bfc,	// (0x000369d5) cell_tport_appsw_pane_t1

0x8c0a,	// (0x000369e3) grid_highlight_pane_cp019

0x8c12,	// (0x000369eb) list_tport_double_graphic_pane_ParamLimits

0x8c12,	// (0x000369eb) list_tport_double_graphic_pane

0xa7ec,	// (0x000385c5) list_highlight_pane_cp023_ParamLimits

0xa7ec,	// (0x000385c5) list_highlight_pane_cp023

0x8c1f,	// (0x000369f8) list_tport_double_graphic_pane_g1_ParamLimits

0x8c1f,	// (0x000369f8) list_tport_double_graphic_pane_g1

0x8c2c,	// (0x00036a05) list_tport_double_graphic_pane_t1_ParamLimits

0x8c2c,	// (0x00036a05) list_tport_double_graphic_pane_t1

0x8c41,	// (0x00036a1a) list_tport_double_graphic_pane_t2_ParamLimits

0x8c41,	// (0x00036a1a) list_tport_double_graphic_pane_t2

0x0001,

0xfd77,	// (0x0003db50) list_tport_double_graphic_pane_t_ParamLimits

0xfd77,	// (0x0003db50) list_tport_double_graphic_pane_t

0x9c68,	// (0x00037a41) main_cale_note_pane

0x1824,	// (0x0002f5fd) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x1824,	// (0x0002f5fd) cell_vitu2_function_top_wide_pane_cp01

0x80c9,	// (0x00035ea2) wait_bar_pane_cp05_ParamLimits

0xa7ec,	// (0x000385c5) listscroll_cmail_pane

0xe646,	// (0x0003c41f) list_cmail_pane

0x8c53,	// (0x00036a2c) list_cmail_body_pane

0x8c68,	// (0x00036a41) list_single_cmail_header_caption_pane

0x8c7f,	// (0x00036a58) list_single_cmail_header_detail_pane_ParamLimits

0x8c7f,	// (0x00036a58) list_single_cmail_header_detail_pane

0xe656,	// (0x0003c42f) list_single_cmail_header_caption_pane_t1

0x8ca9,	// (0x00036a82) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8ca9,	// (0x00036a82) list_single_cmail_header_detail_pane_g1

0xe66d,	// (0x0003c446) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe66d,	// (0x0003c446) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd7c,	// (0x0003db55) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd7c,	// (0x0003db55) list_single_cmail_header_detail_pane_g

0xe686,	// (0x0003c45f) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe686,	// (0x0003c45f) list_single_cmail_header_detail_pane_t1

0xe6e6,	// (0x0003c4bf) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe6e6,	// (0x0003c4bf) list_single_cmail_header_editor_pane_bg

0xdf9f,	// (0x0003bd78) list_cmail_body_pane_g1

0xe6fd,	// (0x0003c4d6) list_cmail_body_pane_t1

0xd283,	// (0x0003b05c) list_single_cmail_header_editor_pane_bg_g1

0xa812,	// (0x000385eb) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd293,	// (0x0003b06c) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd28b,	// (0x0003b064) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd4cd,	// (0x0003b2a6) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd2b3,	// (0x0003b08c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd2a3,	// (0x0003b07c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd2ab,	// (0x0003b084) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa7e4,	// (0x000385bd) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8cc1,	// (0x00036a9a) calenote_gesture_pane_ParamLimits

0x8cc1,	// (0x00036a9a) calenote_gesture_pane

0x8ce1,	// (0x00036aba) calenote_window_pane_ParamLimits

0x8ce1,	// (0x00036aba) calenote_window_pane

0xe70b,	// (0x0003c4e4) popup_note_window_cp01

0x8cfd,	// (0x00036ad6) calenote_swipe_1_pane_ParamLimits

0x8cfd,	// (0x00036ad6) calenote_swipe_1_pane

0x8507,	// (0x000362e0) calenote_swipe_2_pane_ParamLimits

0x8507,	// (0x000362e0) calenote_swipe_2_pane

0xe31e,	// (0x0003c0f7) calenote_swipe_1_pane_g1_ParamLimits

0xe31e,	// (0x0003c0f7) calenote_swipe_1_pane_g1

0xe32b,	// (0x0003c104) calenote_swipe_1_pane_g2_ParamLimits

0xe32b,	// (0x0003c104) calenote_swipe_1_pane_g2

0x0001,

0xfcaa,	// (0x0003da83) calenote_swipe_1_pane_g_ParamLimits

0xfcaa,	// (0x0003da83) calenote_swipe_1_pane_g

0xe71d,	// (0x0003c4f6) calenote_swipe_1_pane_t1_ParamLimits

0xe71d,	// (0x0003c4f6) calenote_swipe_1_pane_t1

0xe31e,	// (0x0003c0f7) calenote_swipe_2_pane_g1_ParamLimits

0xe31e,	// (0x0003c0f7) calenote_swipe_2_pane_g1

0xe73c,	// (0x0003c515) calenote_swipe_2_pane_g2_ParamLimits

0xe73c,	// (0x0003c515) calenote_swipe_2_pane_g2

0x0001,

0xfd88,	// (0x0003db61) calenote_swipe_2_pane_g_ParamLimits

0xfd88,	// (0x0003db61) calenote_swipe_2_pane_g

0xe748,	// (0x0003c521) calenote_swipe_2_pane_t1_ParamLimits

0xe748,	// (0x0003c521) calenote_swipe_2_pane_t1

0x9c68,	// (0x00037a41) main_mup_navstr_pane

0x5869,	// (0x00033642) main_mup3_pane_t7_ParamLimits

0x5869,	// (0x00033642) main_mup3_pane_t7

0x6284,	// (0x0003405d) main_mp4_pane_g6_ParamLimits

0x6284,	// (0x0003405d) main_mp4_pane_g6

0x64ea,	// (0x000342c3) main_image3_pane_t4_ParamLimits

0x64ea,	// (0x000342c3) main_image3_pane_t4

0x8d12,	// (0x00036aeb) popup_navstr_preview_pane_ParamLimits

0x8d12,	// (0x00036aeb) popup_navstr_preview_pane

0x8d26,	// (0x00036aff) scroll_navstr_pane_ParamLimits

0x8d26,	// (0x00036aff) scroll_navstr_pane

0x9c68,	// (0x00037a41) bg_popup_preview_window_pane_cp04

0xe76f,	// (0x0003c548) popup_navstr_preview_pane_t1

0x8d3a,	// (0x00036b13) scroll_navstr_pane_g1_ParamLimits

0x8d3a,	// (0x00036b13) scroll_navstr_pane_g1

0x8d4e,	// (0x00036b27) scroll_navstr_pane_t1_ParamLimits

0x8d4e,	// (0x00036b27) scroll_navstr_pane_t1

0xe714,	// (0x0003c4ed) bg_button_pane_cp014

0xe714,	// (0x0003c4ed) bg_button_pane_cp030

0x83e0,	// (0x000361b9) list_double_fisheye_pane_g4_ParamLimits

0x83e0,	// (0x000361b9) list_double_fisheye_pane_g4

0x83ec,	// (0x000361c5) list_double_fisheye_pane_g5_ParamLimits

0x83ec,	// (0x000361c5) list_double_fisheye_pane_g5

0xcac8,	// (0x0003a8a1) sp_fs_scroll_pane_cp03

0xe43e,	// (0x0003c217) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe44a,	// (0x0003c223) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0x00a3,	// (0x0002de7c) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe456,	// (0x0003c22f) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe64e,	// (0x0003c427) sp_fs_scroll_pane_cp02

0xa4ea,	// (0x000382c3) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa4ea,	// (0x000382c3) popup_sp_fs_calendar_preview_list_single_pane

0x9c68,	// (0x00037a41) main_cam6_pano_pane

0x1c88,	// (0x0002fa61) main_mup3_pane_ParamLimits

0x9c68,	// (0x00037a41) main_phacti_pane

0x7f9c,	// (0x00035d75) bg_button_pane_cp11

0x7fb6,	// (0x00035d8f) main_mobtv_info_pane_g2_ParamLimits

0x7fb6,	// (0x00035d8f) main_mobtv_info_pane_g2

0x0001,

0xfc53,	// (0x0003da2c) main_mobtv_info_pane_g_ParamLimits

0xfc53,	// (0x0003da2c) main_mobtv_info_pane_g

0x8193,	// (0x00035f6c) sc_clock_pane_t5_ParamLimits

0x8193,	// (0x00035f6c) sc_clock_pane_t5

0x825b,	// (0x00036034) main_radioblah_pane_g1_ParamLimits

0xe24f,	// (0x0003c028) main_radioblah_pane_t3_ParamLimits

0xe24f,	// (0x0003c028) main_radioblah_pane_t3

0xe267,	// (0x0003c040) main_radioblah_pane_t4_ParamLimits

0xe267,	// (0x0003c040) main_radioblah_pane_t4

0x8283,	// (0x0003605c) main_radioblah_text_pane_ParamLimits

0x8283,	// (0x0003605c) main_radioblah_text_pane

0x8295,	// (0x0003606e) main_radioblah_info_pane_g1_ParamLimits

0x832e,	// (0x00036107) main_radioblah_info_pane_t4_ParamLimits

0x832e,	// (0x00036107) main_radioblah_info_pane_t4

0xa7ec,	// (0x000385c5) main_sp_fs_calendar_pane

0x8d65,	// (0x00036b3e) main_phacti_pane_g1

0x8d6d,	// (0x00036b46) phacti_note_pane_ParamLimits

0x8d6d,	// (0x00036b46) phacti_note_pane

0xe786,	// (0x0003c55f) phacti_term_pane_ParamLimits

0xe786,	// (0x0003c55f) phacti_term_pane

0xe79b,	// (0x0003c574) phacti_note_pane_t1_ParamLimits

0xe79b,	// (0x0003c574) phacti_note_pane_t1

0xe7b2,	// (0x0003c58b) phacti_term_pane_g1

0xe7ba,	// (0x0003c593) phacti_term_pane_t1_ParamLimits

0xe7ba,	// (0x0003c593) phacti_term_pane_t1

0xe7e4,	// (0x0003c5bd) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe7ec,	// (0x0003c5c5) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfd92,	// (0x0003db6b) popup_sp_fs_calendar_preview_list_single_pane_g

0xe7f4,	// (0x0003c5cd) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe7f4,	// (0x0003c5cd) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe80a,	// (0x0003c5e3) aid_popup_sp_fs_bg_corner_pane

0xc847,	// (0x0003a620) popup_sp_fs_calendar_preview_bg_pane_g1

0x9c68,	// (0x00037a41) popup_sp_fs_calendar_preview_bg_pane

0x26fa,	// (0x000304d3) popup_sp_fs_calendar_preview_list_pane

0xc43f,	// (0x0003a218) bg_main_sp_fs_cale_pane_ParamLimits

0xc43f,	// (0x0003a218) bg_main_sp_fs_cale_pane

0xe81b,	// (0x0003c5f4) listscroll_cale_mrui_pane_ParamLimits

0xe81b,	// (0x0003c5f4) listscroll_cale_mrui_pane

0xd307,	// (0x0003b0e0) listscroll_sp_fs_schedule_track_pane

0xe830,	// (0x0003c609) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe830,	// (0x0003c609) main_sp_fs_ctrlbar_pane_cp01

0xe843,	// (0x0003c61c) main_sp_fs_ribbon_pane

0xe84b,	// (0x0003c624) popup_sp_fs_cale_preview_window

0x8de2,	// (0x00036bbb) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8de2,	// (0x00036bbb) list_single_sp_fs_schedule_track_pane

0xa7ec,	// (0x000385c5) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xa7ec,	// (0x000385c5) bg_sp_fs_highlight_list_pane_cp03

0x8df6,	// (0x00036bcf) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8df6,	// (0x00036bcf) list_single_sp_fs_schedule_track_pane_g1

0x8e02,	// (0x00036bdb) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8e02,	// (0x00036bdb) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfd97,	// (0x0003db70) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfd97,	// (0x0003db70) list_single_sp_fs_schedule_track_pane_g

0x8e0e,	// (0x00036be7) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8e0e,	// (0x00036be7) list_single_sp_fs_schedule_track_pane_t1

0x8e28,	// (0x00036c01) sp_fs_schedule_track_pane_ParamLimits

0x8e28,	// (0x00036c01) sp_fs_schedule_track_pane

0xe85d,	// (0x0003c636) sp_fs_schedule_track_pane_g1

0xe865,	// (0x0003c63e) sp_fs_schedule_track_pane_g2

0xe86d,	// (0x0003c646) sp_fs_schedule_track_pane_g3

0xe875,	// (0x0003c64e) sp_fs_schedule_track_pane_g4

0xe87d,	// (0x0003c656) sp_fs_schedule_track_pane_g5

0x0004,

0xfd9c,	// (0x0003db75) sp_fs_schedule_track_pane_g

0xd283,	// (0x0003b05c) bg_sp_fs_schedule_viewer_highlight_g1

0xa812,	// (0x000385eb) bg_sp_fs_schedule_viewer_highlight_g2

0xd28b,	// (0x0003b064) bg_sp_fs_schedule_viewer_highlight_g3

0xd293,	// (0x0003b06c) bg_sp_fs_schedule_viewer_highlight_g4

0xd4cd,	// (0x0003b2a6) bg_sp_fs_schedule_viewer_highlight_g5

0xd2a3,	// (0x0003b07c) bg_sp_fs_schedule_viewer_highlight_g6

0xd2ab,	// (0x0003b084) bg_sp_fs_schedule_viewer_highlight_g7

0xd2b3,	// (0x0003b08c) bg_sp_fs_schedule_viewer_highlight_g8

0xa7e4,	// (0x000385bd) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfda7,	// (0x0003db80) bg_sp_fs_schedule_viewer_highlight_g

0x9c68,	// (0x00037a41) bg_main_sp_fs_ribbon_pane

0x8e39,	// (0x00036c12) main_sp_fs_ribbon_pane_g1

0xe885,	// (0x0003c65e) main_sp_fs_ribbon_pane_t1

0x8e42,	// (0x00036c1b) main_sp_fs_ribbon_pane_t2

0xe894,	// (0x0003c66d) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdba,	// (0x0003db93) main_sp_fs_ribbon_pane_t

0xe8a3,	// (0x0003c67c) main_sp_fs_ribbon_scheduler_pane

0xe8ab,	// (0x0003c684) bg_main_sp_fs_ribbon_pane_g1

0xe8b4,	// (0x0003c68d) bg_main_sp_fs_ribbon_pane_g2

0xe8bd,	// (0x0003c696) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdc1,	// (0x0003db9a) bg_main_sp_fs_ribbon_pane_g

0xe8c5,	// (0x0003c69e) main_sp_fs_ribbon_scheduler_pane_g1

0xe8ce,	// (0x0003c6a7) main_sp_fs_ribbon_scheduler_pane_g2

0xe8d7,	// (0x0003c6b0) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdc8,	// (0x0003dba1) main_sp_fs_ribbon_scheduler_pane_g

0xe8e0,	// (0x0003c6b9) list_cale_mrui_pane

0x8e51,	// (0x00036c2a) sp_fs_scroll_pane_cp07_ParamLimits

0x8e51,	// (0x00036c2a) sp_fs_scroll_pane_cp07

0x8e6d,	// (0x00036c46) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8e6d,	// (0x00036c46) bg_sp_fs_schedule_viewer_highlight

0xe8ed,	// (0x0003c6c6) list_single_sp_fs_schedule_track_pane_cp01

0xe8f5,	// (0x0003c6ce) list_sp_fs_schedule_track_pane

0xe8fd,	// (0x0003c6d6) sp_fs_scroll_pane_cp06_ParamLimits

0xe8fd,	// (0x0003c6d6) sp_fs_scroll_pane_cp06

0xc847,	// (0x0003a620) bgmain_sp_fs_calendar_pane_g1

0x8e7d,	// (0x00036c56) list_single_cale_mrui_pane_ParamLimits

0x8e7d,	// (0x00036c56) list_single_cale_mrui_pane

0xe90f,	// (0x0003c6e8) list_single_cale_mrui_row_pane_ParamLimits

0xe90f,	// (0x0003c6e8) list_single_cale_mrui_row_pane

0xe91c,	// (0x0003c6f5) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe91c,	// (0x0003c6f5) list_single_cale_mrui_row_pane_g1

0xe961,	// (0x0003c73a) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe961,	// (0x0003c73a) list_single_cale_mrui_row_pane_t1

0x8e9e,	// (0x00036c77) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8e9e,	// (0x00036c77) list_single_cale_mrui_row_pane_t2

0xe973,	// (0x0003c74c) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe973,	// (0x0003c74c) list_single_cale_mrui_row_pane_t3

0xe9a2,	// (0x0003c77b) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe9a2,	// (0x0003c77b) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdd6,	// (0x0003dbaf) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdd6,	// (0x0003dbaf) list_single_cale_mrui_row_pane_t

0x8f06,	// (0x00036cdf) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8f06,	// (0x00036cdf) list_single_cmail_header_editor_pane_bg_cp01

0x8f2c,	// (0x00036d05) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8f2c,	// (0x00036d05) list_single_cmail_header_editor_pane_bg_cp02

0x8f4c,	// (0x00036d25) main_radioblah_text_pane_t1_ParamLimits

0x8f4c,	// (0x00036d25) main_radioblah_text_pane_t1

0xe9d1,	// (0x0003c7aa) cam6_indi_pane_cp01

0xe9d9,	// (0x0003c7b2) cam6_mode_pane_cp01

0xe9e1,	// (0x0003c7ba) cam6_pano_pane

0xe9ea,	// (0x0003c7c3) cam6_zoom_pane_cp01

0xe9f2,	// (0x0003c7cb) cam6_pano_image_pane

0xe9fd,	// (0x0003c7d6) cam6_pano_pane_g1

0xdf9f,	// (0x0003bd78) cam6_pano_pane_g2

0xea06,	// (0x0003c7df) cam6_pano_pane_g3

0xea0f,	// (0x0003c7e8) cam6_pano_pane_g4

0xce72,	// (0x0003ac4b) cam6_pano_pane_g5

0xea18,	// (0x0003c7f1) cam6_pano_pane_g6

0xea22,	// (0x0003c7fb) cam6_pano_pane_g7

0xea2a,	// (0x0003c803) cam6_pano_pane_g8

0xea33,	// (0x0003c80c) cam6_pano_pane_g9

0x0008,

0xfddf,	// (0x0003dbb8) cam6_pano_pane_g

0x9c68,	// (0x00037a41) main_browser_tag_pane

0xe767,	// (0x0003c540) grid_navstr_albumart_pane

0xea3e,	// (0x0003c817) cell_navstr_albumart_pane_ParamLimits

0xea3e,	// (0x0003c817) cell_navstr_albumart_pane

0xea5e,	// (0x0003c837) cell_navstr_albumart_pane_g1

0xc210,	// (0x00039fe9) cell_navstr_albumart_pane_g2

0xc220,	// (0x00039ff9) cell_navstr_albumart_pane_g3

0xc218,	// (0x00039ff1) cell_navstr_albumart_pane_g4

0x0003,

0xfdf2,	// (0x0003dbcb) cell_navstr_albumart_pane_g

0x8f67,	// (0x00036d40) bt_list_pane_ParamLimits

0x8f67,	// (0x00036d40) bt_list_pane

0x8f7b,	// (0x00036d54) bt_list_pane_t1

0x8f8a,	// (0x00036d63) bt_list_pane_t2

0x0001,

0xfdfb,	// (0x0003dbd4) bt_list_pane_t

0x9c68,	// (0x00037a41) main_cale_prevew_pane

0x8f99,	// (0x00036d72) popup_cale_preview_window_ParamLimits

0x8f99,	// (0x00036d72) popup_cale_preview_window

0xa7ec,	// (0x000385c5) bg_popup_preview_window_pane_cp05_ParamLimits

0xa7ec,	// (0x000385c5) bg_popup_preview_window_pane_cp05

0xea66,	// (0x0003c83f) list_cale_preview_pane_ParamLimits

0xea66,	// (0x0003c83f) list_cale_preview_pane

0x8fb2,	// (0x00036d8b) list_double_cale_preview_pane_ParamLimits

0x8fb2,	// (0x00036d8b) list_double_cale_preview_pane

0xd2bb,	// (0x0003b094) list_single_cale_preview_pane_ParamLimits

0xd2bb,	// (0x0003b094) list_single_cale_preview_pane

0x8fc4,	// (0x00036d9d) list_single_cale_preview_pane_g1

0x8fcc,	// (0x00036da5) list_single_cale_preview_pane_t1_ParamLimits

0x8fcc,	// (0x00036da5) list_single_cale_preview_pane_t1

0x8fe1,	// (0x00036dba) list_double_cale_preview_pane_g1

0x8fe9,	// (0x00036dc2) list_double_cale_preview_pane_t1_ParamLimits

0x8fe9,	// (0x00036dc2) list_double_cale_preview_pane_t1

0x8ffe,	// (0x00036dd7) list_double_cale_preview_pane_t2_ParamLimits

0x8ffe,	// (0x00036dd7) list_double_cale_preview_pane_t2

0x0001,

0xfe00,	// (0x0003dbd9) list_double_cale_preview_pane_t_ParamLimits

0xfe00,	// (0x0003dbd9) list_double_cale_preview_pane_t

0x9c68,	// (0x00037a41) main_ezdial_pane

0xa7ec,	// (0x000385c5) main_sp_fs_email_pane_ParamLimits

0x858f,	// (0x00036368) cmail_ddmenu_btn01_pane_ParamLimits

0x858f,	// (0x00036368) cmail_ddmenu_btn01_pane

0x85a2,	// (0x0003637b) cmail_ddmenu_btn02_pane_ParamLimits

0x85a2,	// (0x0003637b) cmail_ddmenu_btn02_pane

0x85c5,	// (0x0003639e) cmail_ddmenu_btn03_pane_ParamLimits

0x85c5,	// (0x0003639e) cmail_ddmenu_btn03_pane

0x85eb,	// (0x000363c4) main_sp_fs_ctrlbar_pane_ParamLimits

0x860f,	// (0x000363e8) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8c53,	// (0x00036a2c) list_cmail_body_pane_ParamLimits

0xe664,	// (0x0003c43d) bg_button_pane_cp12

0xe679,	// (0x0003c452) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe679,	// (0x0003c452) list_single_cmail_header_detail_pane_g3

0xe6c2,	// (0x0003c49b) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe6c2,	// (0x0003c49b) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd83,	// (0x0003db5c) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd83,	// (0x0003db5c) list_single_cmail_header_detail_pane_t

0xe7cf,	// (0x0003c5a8) phacti_term_pane_t2_ParamLimits

0xe7cf,	// (0x0003c5a8) phacti_term_pane_t2

0x0001,

0xfd8d,	// (0x0003db66) phacti_term_pane_t_ParamLimits

0xfd8d,	// (0x0003db66) phacti_term_pane_t

0xea72,	// (0x0003c84b) aid_size_list_single_double

0x9016,	// (0x00036def) popup_ezdial_listscroll_window

0x9032,	// (0x00036e0b) popup_number_entry_window_cp01

0xa5ab,	// (0x00038384) bg_popup_call_pane_cp09

0xea7e,	// (0x0003c857) ezdial_list_pane

0xea86,	// (0x0003c85f) scroll_pane_cp23

0xc43f,	// (0x0003a218) bg_button_pane_cp028_ParamLimits

0xc43f,	// (0x0003a218) bg_button_pane_cp028

0x9040,	// (0x00036e19) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x9040,	// (0x00036e19) cmail_ddmenu_btn01_pane_g1

0x904c,	// (0x00036e25) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x904c,	// (0x00036e25) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe05,	// (0x0003dbde) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe05,	// (0x0003dbde) cmail_ddmenu_btn01_pane_g

0xea8e,	// (0x0003c867) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xea8e,	// (0x0003c867) cmail_ddmenu_btn01_pane_t1

0xc43f,	// (0x0003a218) bg_button_pane_cp029_ParamLimits

0xc43f,	// (0x0003a218) bg_button_pane_cp029

0x9058,	// (0x00036e31) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x9058,	// (0x00036e31) cmail_ddmenu_btn02_pane_g1

0x9070,	// (0x00036e49) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x9070,	// (0x00036e49) cmail_ddmenu_btn02_pane_t1

0xa7ec,	// (0x000385c5) bg_button_pane_cp031_ParamLimits

0xa7ec,	// (0x000385c5) bg_button_pane_cp031

0x9058,	// (0x00036e31) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x9058,	// (0x00036e31) cmail_ddmenu_btn03_pane_g1

0x9070,	// (0x00036e49) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x9070,	// (0x00036e49) cmail_ddmenu_btn03_pane_t1

0x6493,	// (0x0003426c) cell_dialer2_keypad_pane_t1_ParamLimits

0x64ad,	// (0x00034286) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x64ad,	// (0x00034286) cell_dialer2_keypad_pane_t1_copy1

0x7db1,	// (0x00035b8a) ncimui_group_button_pane

0xa7ec,	// (0x000385c5) main_sp_fs_calendar_pane_ParamLimits

0x8c68,	// (0x00036a41) list_single_cmail_header_caption_pane_ParamLimits

0xe812,	// (0x0003c5eb) aid_recal_txt_sm_pane

0x9c68,	// (0x00037a41) mian_recal_day_pane

0xe84b,	// (0x0003c624) popup_sp_fs_cale_preview_window_ParamLimits

0xeaa3,	// (0x0003c87c) list_recal_day_pane

0xeae5,	// (0x0003c8be) list_single_recal_day_pane_ParamLimits

0xeae5,	// (0x0003c8be) list_single_recal_day_pane

0xeaf7,	// (0x0003c8d0) list_single_recal_day_pane_g1_ParamLimits

0xeaf7,	// (0x0003c8d0) list_single_recal_day_pane_g1

0xeb03,	// (0x0003c8dc) list_single_recal_day_pane_g2_ParamLimits

0xeb03,	// (0x0003c8dc) list_single_recal_day_pane_g2

0xeb0f,	// (0x0003c8e8) list_single_recal_day_pane_g3_ParamLimits

0xeb0f,	// (0x0003c8e8) list_single_recal_day_pane_g3

0x9094,	// (0x00036e6d) list_single_recal_day_pane_g4_ParamLimits

0x9094,	// (0x00036e6d) list_single_recal_day_pane_g4

0xeb1b,	// (0x0003c8f4) list_single_recal_day_pane_g5_ParamLimits

0xeb1b,	// (0x0003c8f4) list_single_recal_day_pane_g5

0xeb27,	// (0x0003c900) list_single_recal_day_pane_g6_ParamLimits

0xeb27,	// (0x0003c900) list_single_recal_day_pane_g6

0x0004,

0xfe14,	// (0x0003dbed) list_single_recal_day_pane_g_ParamLimits

0xfe14,	// (0x0003dbed) list_single_recal_day_pane_g

0xeb3b,	// (0x0003c914) list_single_recal_day_pane_t1

0xeb4d,	// (0x0003c926) list_single_recal_day_pane_t2

0x0001,

0xfe1f,	// (0x0003dbf8) list_single_recal_day_pane_t

0x90ac,	// (0x00036e85) ncimui_query_button_pane_ParamLimits

0x90ac,	// (0x00036e85) ncimui_query_button_pane

0x90bc,	// (0x00036e95) ncimui_query_button_pane_t1_ParamLimits

0x90bc,	// (0x00036e95) ncimui_query_button_pane_t1

0xeb5f,	// (0x0003c938) ncimui_query_button_pane_t2_ParamLimits

0xeb5f,	// (0x0003c938) ncimui_query_button_pane_t2

0x0001,

0xfe24,	// (0x0003dbfd) ncimui_query_button_pane_t_ParamLimits

0xfe24,	// (0x0003dbfd) ncimui_query_button_pane_t

0x90cf,	// (0x00036ea8) query_button_pane_ParamLimits

0x90cf,	// (0x00036ea8) query_button_pane

0x9c68,	// (0x00037a41) bg_button_pane_cp0028

0xeb72,	// (0x0003c94b) query_button_pane_t1

0x0807,	// (0x0002e5e0) main_tport_pane_ParamLimits

0x8b17,	// (0x000368f0) bg_popup_window_pane_cp01_ParamLimits

0x8b17,	// (0x000368f0) bg_popup_window_pane_cp01

0x8b32,	// (0x0003690b) heading_pane_cp08_ParamLimits

0x8b32,	// (0x0003690b) heading_pane_cp08

0x8b45,	// (0x0003691e) heading_pane_cp07_ParamLimits

0x8b45,	// (0x0003691e) heading_pane_cp07

0x8bec,	// (0x000369c5) cell_tport_appsw_pane_g2

0x0002,

0xfd70,	// (0x0003db49) cell_tport_appsw_pane_g

0x40c4,	// (0x00031e9d) input_candi_list_open_g1

0xa9d5,	// (0x000387ae) list_cale_time_pane_g6_ParamLimits

0xa9d5,	// (0x000387ae) list_cale_time_pane_g6

0x5276,	// (0x0003304f) aid_size_touch_calib_1_ParamLimits

0x5276,	// (0x0003304f) aid_size_touch_calib_1

0x5288,	// (0x00033061) aid_size_touch_calib_2_ParamLimits

0x5288,	// (0x00033061) aid_size_touch_calib_2

0x52a0,	// (0x00033079) aid_size_touch_calib_3_ParamLimits

0x52a0,	// (0x00033079) aid_size_touch_calib_3

0x52be,	// (0x00033097) aid_size_touch_calib_4_ParamLimits

0x52be,	// (0x00033097) aid_size_touch_calib_4

0x52d6,	// (0x000330af) main_touch_calib_button_group_pane_ParamLimits

0x52d6,	// (0x000330af) main_touch_calib_button_group_pane

0x52ee,	// (0x000330c7) main_touch_calib_pane_g1_ParamLimits

0x5300,	// (0x000330d9) main_touch_calib_pane_g2_ParamLimits

0x5312,	// (0x000330eb) main_touch_calib_pane_g3_ParamLimits

0x5324,	// (0x000330fd) main_touch_calib_pane_g4_ParamLimits

0xf760,	// (0x0003d539) main_touch_calib_pane_g_ParamLimits

0x5336,	// (0x0003310f) main_touch_calib_pane_t1_ParamLimits

0x5350,	// (0x00033129) main_touch_calib_pane_t2_ParamLimits

0x536a,	// (0x00033143) main_touch_calib_pane_t3_ParamLimits

0x537e,	// (0x00033157) main_touch_calib_pane_t4_ParamLimits

0x5392,	// (0x0003316b) main_touch_calib_pane_t5_ParamLimits

0xf769,	// (0x0003d542) main_touch_calib_pane_t_ParamLimits

0xcc15,	// (0x0003a9ee) list_single_fp_cale_pane_g3_ParamLimits

0xcc15,	// (0x0003a9ee) list_single_fp_cale_pane_g3

0x1c88,	// (0x0002fa61) bg_button_pane_cp012_ParamLimits

0x1c88,	// (0x0002fa61) bg_vkb2_func_pane_cp03_ParamLimits

0x1a10,	// (0x0002f7e9) cell_vitu2_function_top_pane_g1_ParamLimits

0x1c88,	// (0x0002fa61) bg_vkb2_func_pane_cp04_ParamLimits

0x7d3c,	// (0x00035b15) main_ncimui_button_group_pane_ParamLimits

0x7d3c,	// (0x00035b15) main_ncimui_button_group_pane

0x7d9c,	// (0x00035b75) main_ncimui_pane_t3_ParamLimits

0x7d9c,	// (0x00035b75) main_ncimui_pane_t3

0xe77d,	// (0x0003c556) phacti_button_group_pane

0xea72,	// (0x0003c84b) aid_size_list_single_double_ParamLimits

0x9016,	// (0x00036def) popup_ezdial_listscroll_window_ParamLimits

0x9032,	// (0x00036e0b) popup_number_entry_window_cp01_ParamLimits

0x90e2,	// (0x00036ebb) phacti_button_pane_ParamLimits

0x90e2,	// (0x00036ebb) phacti_button_pane

0x9c68,	// (0x00037a41) bg_button_pane_cp14

0xeb80,	// (0x0003c959) phacti_button_pane_t1

0x90f3,	// (0x00036ecc) main_touch_calib_button_pane_ParamLimits

0x90f3,	// (0x00036ecc) main_touch_calib_button_pane

0xa3b1,	// (0x0003818a) bg_button_pane_cp18_ParamLimits

0xa3b1,	// (0x0003818a) bg_button_pane_cp18

0xeb8e,	// (0x0003c967) main_touch_calib_button_pane_t1_ParamLimits

0xeb8e,	// (0x0003c967) main_touch_calib_button_pane_t1

0xeba4,	// (0x0003c97d) main_touch_calib_button_pane_t2_ParamLimits

0xeba4,	// (0x0003c97d) main_touch_calib_button_pane_t2

0x0001,

0xfe29,	// (0x0003dc02) main_touch_calib_button_pane_t_ParamLimits

0xfe29,	// (0x0003dc02) main_touch_calib_button_pane_t

0x9c68,	// (0x00037a41) cell_ncimui_button_pane

0x9c68,	// (0x00037a41) bg_button_pane_cp032

0xebc2,	// (0x0003c99b) cell_ncimui_button_pane_t1

0x64ca,	// (0x000342a3) image3_infobar_pane_ParamLimits

0x64ca,	// (0x000342a3) image3_infobar_pane

0x81bf,	// (0x00035f98) fs_bigclock_status_pane_ParamLimits

0x81bf,	// (0x00035f98) fs_bigclock_status_pane

0x81cc,	// (0x00035fa5) main_fs_bigclock_clock_pane_ParamLimits

0x81cc,	// (0x00035fa5) main_fs_bigclock_clock_pane

0x81ea,	// (0x00035fc3) main_fs_bigclock_indi_pane_ParamLimits

0x81ea,	// (0x00035fc3) main_fs_bigclock_indi_pane

0x821c,	// (0x00035ff5) main_fs_bigclock_swipe_pane_ParamLimits

0x821c,	// (0x00035ff5) main_fs_bigclock_swipe_pane

0x9c68,	// (0x00037a41) main_fs_clock_dumped_data

0xe0ac,	// (0x0003be85) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe0ac,	// (0x0003be85) list_single_fs_bigclock_indicator_pane_g1

0xe0c8,	// (0x0003bea1) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe0c8,	// (0x0003bea1) list_single_fs_bigclock_indicator_pane_g2

0xe0e2,	// (0x0003bebb) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe0e2,	// (0x0003bebb) list_single_fs_bigclock_indicator_pane_g3

0xe0fc,	// (0x0003bed5) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe0fc,	// (0x0003bed5) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0x0032,	// (0x0002de0b) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0x0032,	// (0x0002de0b) list_single_fs_bigclock_indicator_pane_g

0xe127,	// (0x0003bf00) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe127,	// (0x0003bf00) list_single_fs_bigclock_indicator_pane_t1

0xe14f,	// (0x0003bf28) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe14f,	// (0x0003bf28) list_single_fs_bigclock_indicator_pane_t2

0xe177,	// (0x0003bf50) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe177,	// (0x0003bf50) list_single_fs_bigclock_indicator_pane_t3

0xe19f,	// (0x0003bf78) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe19f,	// (0x0003bf78) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0x003d,	// (0x0002de16) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0x003d,	// (0x0002de16) list_single_fs_bigclock_indicator_pane_t

0xebd0,	// (0x0003c9a9) image3_infobar_fav_pane_ParamLimits

0xebd0,	// (0x0003c9a9) image3_infobar_fav_pane

0xebe0,	// (0x0003c9b9) image3_infobar_loc_pane_ParamLimits

0xebe0,	// (0x0003c9b9) image3_infobar_loc_pane

0xebf4,	// (0x0003c9cd) image3_infobar_time_pane_ParamLimits

0xebf4,	// (0x0003c9cd) image3_infobar_time_pane

0xc847,	// (0x0003a620) image3_infobar_time_pane_g1

0xec04,	// (0x0003c9dd) image3_infobar_time_pane_t1

0xc847,	// (0x0003a620) image3_infobar_loc_pane_g1

0xec12,	// (0x0003c9eb) image3_infobar_loc_pane_g2

0x0001,

0xfe2e,	// (0x0003dc07) image3_infobar_loc_pane_g

0xec1a,	// (0x0003c9f3) image3_infobar_loc_pane_t1

0xc847,	// (0x0003a620) image3_infobar_fav_pane_g1

0xec28,	// (0x0003ca01) image3_infobar_fav_pane_g2

0x0001,

0x020f,	// (0x0002dfe8) image3_infobar_fav_pane_g

0xec30,	// (0x0003ca09) fs_bigclock_status_battery_pane

0xec39,	// (0x0003ca12) fs_bigclock_status_signal_pane

0xec42,	// (0x0003ca1b) fs_bigclock_status_title_pane

0xec4b,	// (0x0003ca24) fs_bigclock_status_signal_pane_g1

0xec54,	// (0x0003ca2d) fs_bigclock_status_signal_pane_g2

0x0001,

0x0214,	// (0x0002dfed) fs_bigclock_status_signal_pane_g

0xec5c,	// (0x0003ca35) fs_bigclock_status_battery_pane_g1

0xec65,	// (0x0003ca3e) fs_bigclock_status_battery_pane_g2

0x0001,

0x0219,	// (0x0002dff2) fs_bigclock_status_battery_pane_g

0xec6d,	// (0x0003ca46) fs_bigclock_status_title_pane_t1

0x9108,	// (0x00036ee1) main_fs_bigclock_clock_pane_g1

0x9108,	// (0x00036ee1) main_fs_bigclock_clock_pane_g2

0x9119,	// (0x00036ef2) main_fs_bigclock_clock_pane_g3

0x9119,	// (0x00036ef2) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe33,	// (0x0003dc0c) main_fs_bigclock_clock_pane_g

0x912c,	// (0x00036f05) main_fs_bigclock_clock_pane_t1

0x9142,	// (0x00036f1b) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe3c,	// (0x0003dc15) main_fs_bigclock_clock_pane_t

0xec7b,	// (0x0003ca54) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec7b,	// (0x0003ca54) list_single_fs_bigclock_indicator_pane

0xec8c,	// (0x0003ca65) list_single_fs_bigclock_pane_ParamLimits

0xec8c,	// (0x0003ca65) list_single_fs_bigclock_pane

0xecb2,	// (0x0003ca8b) main_fs_bigclock_indicator_pane_t1

0xecc1,	// (0x0003ca9a) list_single_fs_bigclock_pane_g1

0xecc9,	// (0x0003caa2) list_single_fs_bigclock_pane_t1

0xc847,	// (0x0003a620) main_fs_bigclock_swipe_pane_g1

0xed0c,	// (0x0003cae5) main_fs_bigclock_swipe_pane_g2

0x0001,

0x0238,	// (0x0002e011) main_fs_bigclock_swipe_pane_g

0xed14,	// (0x0003caed) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xed14,	// (0x0003caed) main_fs_bigclock_swipe_pane_t1

0x3932,	// (0x0003170b) call_type_pane_ParamLimits

0x9c68,	// (0x00037a41) main_btmg_pane

0xe948,	// (0x0003c721) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe948,	// (0x0003c721) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdcf,	// (0x0003dba8) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdcf,	// (0x0003dba8) list_single_cale_mrui_row_pane_g

0xeacc,	// (0x0003c8a5) list_recal_vselct_arw_lo_pane

0xead4,	// (0x0003c8ad) list_recal_vselct_arw_up_pane

0xeadc,	// (0x0003c8b5) list_recal_vselct_pane

0x919c,	// (0x00036f75) btmg_button_pane

0x91a6,	// (0x00036f7f) main_btmg_pane_g1

0x9c68,	// (0x00037a41) bg_button_pane_cp044

0xed31,	// (0x0003cb0a) btmg_button_pane_t1

0xc42b,	// (0x0003a204) aid_listscroll_gen

0xa7ec,	// (0x000385c5) main_cntbar_detail_pane

0xe646,	// (0x0003c41f) list_cmail_folder_pane

0xcac8,	// (0x0003a8a1) sp_fs_scroll_pane_cp03_ParamLimits

0x91b0,	// (0x00036f89) list_single_fs_dyc_pane_cp01_ParamLimits

0x91b0,	// (0x00036f89) list_single_fs_dyc_pane_cp01

0xed3f,	// (0x0003cb18) aid_size_cmail_indent

0xed48,	// (0x0003cb21) list_single_dyc_row_pane_cp01

0x91f9,	// (0x00036fd2) cntbar_detail_list_pane_ParamLimits

0x91f9,	// (0x00036fd2) cntbar_detail_list_pane

0x9245,	// (0x0003701e) main_cntbar_detail_cont_pane_ParamLimits

0x9245,	// (0x0003701e) main_cntbar_detail_cont_pane

0xcac8,	// (0x0003a8a1) scroll_pane_cp032_ParamLimits

0xcac8,	// (0x0003a8a1) scroll_pane_cp032

0x9259,	// (0x00037032) cntbar_detail_list_event_pane_ParamLimits

0x9259,	// (0x00037032) cntbar_detail_list_event_pane

0x9209,	// (0x00036fe2) cntbar_detail_list_shct_pane

0xa860,	// (0x00038639) aid_list_gen

0xed51,	// (0x0003cb2a) aid_scroll

0xed5a,	// (0x0003cb33) aid_size_touch_scroll_bar

0x7558,	// (0x00035331) aid_list_double

0x7546,	// (0x0003531f) aid_list_single

0x7546,	// (0x0003531f) aid_list_single_lg

0x9269,	// (0x00037042) aid_list_z_g_a_sm

0x9271,	// (0x0003704a) aid_list_z_g_d

0x9279,	// (0x00037052) aid_txt_z_prm

0x9287,	// (0x00037060) aid_txt_z_prm_cp01

0x9295,	// (0x0003706e) aid_txt_z_sec

0x92a3,	// (0x0003707c) main_cntbar_detail_cont_pane_g1_ParamLimits

0x92a3,	// (0x0003707c) main_cntbar_detail_cont_pane_g1

0x92b7,	// (0x00037090) main_cntbar_detail_cont_pane_g2_ParamLimits

0x92b7,	// (0x00037090) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe48,	// (0x0003dc21) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe48,	// (0x0003dc21) main_cntbar_detail_cont_pane_g

0xed63,	// (0x0003cb3c) main_cntbar_detail_cont_pane_t1

0xed71,	// (0x0003cb4a) main_cntbar_detail_cont_pane_t2

0xed7f,	// (0x0003cb58) main_cntbar_detail_cont_pane_t3

0x0002,

0x0242,	// (0x0002e01b) main_cntbar_detail_cont_pane_t

0x92c7,	// (0x000370a0) cell_cntbar_detail_list_shct_pane_ParamLimits

0x92c7,	// (0x000370a0) cell_cntbar_detail_list_shct_pane

0xed8d,	// (0x0003cb66) cntbar_detail_list_shct_pane_g1

0xed96,	// (0x0003cb6f) cntbar_detail_list_shct_pane_g2

0x0001,

0x0249,	// (0x0002e022) cntbar_detail_list_shct_pane_g

0x92db,	// (0x000370b4) cntbar_detail_list_event_pane_g1_ParamLimits

0x92db,	// (0x000370b4) cntbar_detail_list_event_pane_g1

0x92e7,	// (0x000370c0) cntbar_detail_list_event_pane_g2_ParamLimits

0x92e7,	// (0x000370c0) cntbar_detail_list_event_pane_g2

0x0005,

0xfe4d,	// (0x0003dc26) cntbar_detail_list_event_pane_g_ParamLimits

0xfe4d,	// (0x0003dc26) cntbar_detail_list_event_pane_g

0x9353,	// (0x0003712c) cntbar_detail_list_event_pane_t1_ParamLimits

0x9353,	// (0x0003712c) cntbar_detail_list_event_pane_t1

0x9368,	// (0x00037141) cntbar_detail_list_event_pane_t2_ParamLimits

0x9368,	// (0x00037141) cntbar_detail_list_event_pane_t2

0x0002,

0xfe5a,	// (0x0003dc33) cntbar_detail_list_event_pane_t_ParamLimits

0xfe5a,	// (0x0003dc33) cntbar_detail_list_event_pane_t

0xc847,	// (0x0003a620) cell_cntbar_detail_list_shct_pane_g1

0xafac,	// (0x00038d85) navi_pane_mv_g3

0xa7ec,	// (0x000385c5) main_cntbar_detail_pane_ParamLimits

0x9c68,	// (0x00037a41) main_notif_wgt_pane

0x6212,	// (0x00033feb) aid_tch_main_mp4_pane_g4

0x641e,	// (0x000341f7) popup_slider_window_cp02

0xeac2,	// (0x0003c89b) list_recal_day_event_pane

0x91c7,	// (0x00036fa0) cntbar_detail_btn_pane_ParamLimits

0x91c7,	// (0x00036fa0) cntbar_detail_btn_pane

0x91e0,	// (0x00036fb9) cntbar_detail_btn_pane_cp01_ParamLimits

0x91e0,	// (0x00036fb9) cntbar_detail_btn_pane_cp01

0x9209,	// (0x00036fe2) cntbar_detail_list_shct_pane_ParamLimits

0x9219,	// (0x00036ff2) cntbar_detail_pane_g1_ParamLimits

0x9219,	// (0x00036ff2) cntbar_detail_pane_g1

0x9229,	// (0x00037002) cntbar_detail_pane_t1_ParamLimits

0x9229,	// (0x00037002) cntbar_detail_pane_t1

0x92f3,	// (0x000370cc) cntbar_detail_list_event_pane_g3_ParamLimits

0x92f3,	// (0x000370cc) cntbar_detail_list_event_pane_g3

0x930b,	// (0x000370e4) cntbar_detail_list_event_pane_g4_ParamLimits

0x930b,	// (0x000370e4) cntbar_detail_list_event_pane_g4

0x9323,	// (0x000370fc) cntbar_detail_list_event_pane_g5_ParamLimits

0x9323,	// (0x000370fc) cntbar_detail_list_event_pane_g5

0x933b,	// (0x00037114) cntbar_detail_list_event_pane_g6_ParamLimits

0x933b,	// (0x00037114) cntbar_detail_list_event_pane_g6

0x937d,	// (0x00037156) cntbar_detail_list_event_pane_t3_ParamLimits

0x937d,	// (0x00037156) cntbar_detail_list_event_pane_t3

0x938f,	// (0x00037168) popup_notif_wgt_window_ParamLimits

0x938f,	// (0x00037168) popup_notif_wgt_window

0x93a8,	// (0x00037181) popup_submenu_window_cp01_ParamLimits

0x93a8,	// (0x00037181) popup_submenu_window_cp01

0xa5ab,	// (0x00038384) bg_popup_window_pane_cp10

0xed9f,	// (0x0003cb78) listscroll_notif_wgt_pane

0xedb1,	// (0x0003cb8a) list_notif_wgt_window

0xedba,	// (0x0003cb93) scroll_pane_cp033

0x93ba,	// (0x00037193) list_notif_wgt_row_pane_ParamLimits

0x93ba,	// (0x00037193) list_notif_wgt_row_pane

0xedc3,	// (0x0003cb9c) aid_size_list_notif_wgt_del

0xedd0,	// (0x0003cba9) list_notif_wgt_row_pane_g1

0xeddc,	// (0x0003cbb5) list_notif_wgt_row_pane_g2

0xedeb,	// (0x0003cbc4) list_notif_wgt_row_pane_g3

0x0002,

0x0262,	// (0x0002e03b) list_notif_wgt_row_pane_g

0xedf8,	// (0x0003cbd1) list_notif_wgt_row_pane_t1

0xee0e,	// (0x0003cbe7) list_notif_wgt_row_pane_t2

0xee20,	// (0x0003cbf9) list_notif_wgt_row_pane_t3

0x0002,

0x0269,	// (0x0002e042) list_notif_wgt_row_pane_t

0xd4e7,	// (0x0003b2c0) list_recal_day_event_pane_g1

0xee32,	// (0x0003cc0b) list_recal_day_event_pane_t1

0x9c68,	// (0x00037a41) bg_button_pane_cp045

0x93ca,	// (0x000371a3) cntbar_detail_btn_pane_t1

0xc43f,	// (0x0003a218) main_callh_pane_ParamLimits

0xc43f,	// (0x0003a218) main_callh_pane

0x9c68,	// (0x00037a41) main_coverflow0_pane

0x9c68,	// (0x00037a41) main_wgtman_pane

0x8234,	// (0x0003600d) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8234,	// (0x0003600d) main_fs_bigclock_unlock_btn_pane

0x8be4,	// (0x000369bd) bg_button_pane_cp16

0x8bf4,	// (0x000369cd) cell_tport_appsw_pane_g3

0x93d8,	// (0x000371b1) cf0_flow_pane_ParamLimits

0x93d8,	// (0x000371b1) cf0_flow_pane

0xee41,	// (0x0003cc1a) listscroll_cf0_pane

0xee4c,	// (0x0003cc25) main_cf0_pane_g1

0x93ed,	// (0x000371c6) main_cf0_pane_t1_ParamLimits

0x93ed,	// (0x000371c6) main_cf0_pane_t1

0x9404,	// (0x000371dd) main_cf0_pane_t2_ParamLimits

0x9404,	// (0x000371dd) main_cf0_pane_t2

0x0001,

0xfe61,	// (0x0003dc3a) main_cf0_pane_t_ParamLimits

0xfe61,	// (0x0003dc3a) main_cf0_pane_t

0xee5e,	// (0x0003cc37) scroll_pane_cp11

0x941b,	// (0x000371f4) cf0_flow_pane_g1

0x9423,	// (0x000371fc) cf0_flow_pane_g2

0x0001,

0xfe66,	// (0x0003dc3f) cf0_flow_pane_g

0x942b,	// (0x00037204) cf0_flow_pane_t1

0x9c68,	// (0x00037a41) main_call6_pane

0x9c68,	// (0x00037a41) main_calllock_pane

0x1b45,	// (0x0002f91e) call6_btn_grp_pane_ParamLimits

0x1b45,	// (0x0002f91e) call6_btn_grp_pane

0x1b5f,	// (0x0002f938) call6_pane_g1_ParamLimits

0x1b5f,	// (0x0002f938) call6_pane_g1

0x1b75,	// (0x0002f94e) popup_call6_1st_window_ParamLimits

0x1b75,	// (0x0002f94e) popup_call6_1st_window

0x1b86,	// (0x0002f95f) popup_call6_2nd_window_ParamLimits

0x1b86,	// (0x0002f95f) popup_call6_2nd_window

0x1b97,	// (0x0002f970) cell_call6_btn_pane_ParamLimits

0x1b97,	// (0x0002f970) cell_call6_btn_pane

0xa5ab,	// (0x00038384) bg_popup_call2_in_pane_cp03

0xee69,	// (0x0003cc42) popup_call6_1st_window_g1

0xee71,	// (0x0003cc4a) popup_call6_1st_window_g2

0xee79,	// (0x0003cc52) popup_call6_1st_window_g3

0x0002,

0x027f,	// (0x0002e058) popup_call6_1st_window_g

0xee81,	// (0x0003cc5a) popup_call6_1st_window_t1

0xee90,	// (0x0003cc69) popup_call6_1st_window_t2

0xee9e,	// (0x0003cc77) popup_call6_1st_window_t3

0x0002,

0x0286,	// (0x0002e05f) popup_call6_1st_window_t

0xa5ab,	// (0x00038384) bg_popup_call2_in_pane_cp04

0xee69,	// (0x0003cc42) popup_call6_2nd_window_g1

0xee71,	// (0x0003cc4a) popup_call6_2nd_window_g2

0xee79,	// (0x0003cc52) popup_call6_2nd_window_g3

0x0002,

0x027f,	// (0x0002e058) popup_call6_2nd_window_g

0xee81,	// (0x0003cc5a) popup_call6_2nd_window_t1

0x1ca2,	// (0x0002fa7b) bg_button_pane_cp15

0x9439,	// (0x00037212) cell_call6_btn_pane_g1

0x9442,	// (0x0003721b) cell_call6_btn_pane_t1

0x9451,	// (0x0003722a) listscroll_wgtman_pane_ParamLimits

0x9451,	// (0x0003722a) listscroll_wgtman_pane

0x9472,	// (0x0003724b) wgtman_btn_pane_ParamLimits

0x9472,	// (0x0003724b) wgtman_btn_pane

0xadc0,	// (0x00038b99) aid_scroll_copy1

0xeeac,	// (0x0003cc85) list_wgtman_pane

0x94b5,	// (0x0003728e) wgtman_btn_pane_g1_ParamLimits

0x94b5,	// (0x0003728e) wgtman_btn_pane_g1

0x94e1,	// (0x000372ba) wgtman_btn_pane_t1_ParamLimits

0x94e1,	// (0x000372ba) wgtman_btn_pane_t1

0xeeb6,	// (0x0003cc8f) wgtman_btn_pane_t2_ParamLimits

0xeeb6,	// (0x0003cc8f) wgtman_btn_pane_t2

0x0001,

0xfe6b,	// (0x0003dc44) wgtman_btn_pane_t_ParamLimits

0xfe6b,	// (0x0003dc44) wgtman_btn_pane_t

0x951e,	// (0x000372f7) listrow_wgtman_pane_ParamLimits

0x951e,	// (0x000372f7) listrow_wgtman_pane

0x9530,	// (0x00037309) listrow_wgtman_pane_g1

0x953d,	// (0x00037316) listrow_wgtman_pane_g2

0x0001,

0xfe70,	// (0x0003dc49) listrow_wgtman_pane_g

0x955b,	// (0x00037334) listrow_wgtman_pane_t1

0x9573,	// (0x0003734c) listrow_wgtman_pane_t2

0x0001,

0xfe75,	// (0x0003dc4e) listrow_wgtman_pane_t

0x9599,	// (0x00037372) wait_bar_pane_cp09

0xeecd,	// (0x0003cca6) main_calllock_btn_pane

0xeed7,	// (0x0003ccb0) main_calllock_pane_g1

0x9c68,	// (0x00037a41) bg_button_pane_cp17

0xeee3,	// (0x0003ccbc) main_calllock_btn_pane_g1

0xeeec,	// (0x0003ccc5) main_calllock_btn_pane_t1

0x9c68,	// (0x00037a41) main_dialer3_pane

0x9c68,	// (0x00037a41) main_fmrd2_pane

0xc847,	// (0x0003a620) main_fs_bigclock_unlock_btn_pane_g1

0x95b3,	// (0x0003738c) main_fs_bigclock_unlock_btn_pane_t1

0x95c1,	// (0x0003739a) area_fmrd2_info_pane_ParamLimits

0x95c1,	// (0x0003739a) area_fmrd2_info_pane

0x95d2,	// (0x000373ab) area_fmrd2_visual_pane_ParamLimits

0x95d2,	// (0x000373ab) area_fmrd2_visual_pane

0x95e0,	// (0x000373b9) fmrd2_indi_pane_ParamLimits

0x95e0,	// (0x000373b9) fmrd2_indi_pane

0x95ed,	// (0x000373c6) area_fmrd2_visual_pane_g1

0x95f5,	// (0x000373ce) area_fmrd2_visual_pane_t1

0x9605,	// (0x000373de) area_fmrd2_visual_pane_t2

0x9615,	// (0x000373ee) area_fmrd2_visual_pane_t3

0x0002,

0xfe7f,	// (0x0003dc58) area_fmrd2_visual_pane_t

0x9625,	// (0x000373fe) area_fmrd2_info_pane_g1

0x962d,	// (0x00037406) area_fmrd2_info_pane_t1

0x963d,	// (0x00037416) area_fmrd2_info_pane_t2

0x964d,	// (0x00037426) area_fmrd2_info_pane_t3

0x965d,	// (0x00037436) area_fmrd2_info_pane_t4

0x0003,

0xfe86,	// (0x0003dc5f) area_fmrd2_info_pane_t

0x966b,	// (0x00037444) fmrd2_indi_pane_t1

0x967b,	// (0x00037454) fmrd2_indi_pane_t2

0x968b,	// (0x00037464) fmrd2_indi_pane_t3

0x0002,

0xfe8f,	// (0x0003dc68) fmrd2_indi_pane_t

0xe10b,	// (0x0003bee4) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe10b,	// (0x0003bee4) list_single_fs_bigclock_indicator_pane_g5

0xe1bc,	// (0x0003bf95) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe1bc,	// (0x0003bf95) list_single_fs_bigclock_indicator_pane_t5

0x8d81,	// (0x00036b5a) aid_cell_bcale_month_pane_ParamLimits

0x8d81,	// (0x00036b5a) aid_cell_bcale_month_pane

0x8d9f,	// (0x00036b78) bcale_month_pane_ParamLimits

0x8d9f,	// (0x00036b78) bcale_month_pane

0x8dc3,	// (0x00036b9c) bcale_preview_pane_ParamLimits

0x8dc3,	// (0x00036b9c) bcale_preview_pane

0xecc9,	// (0x0003caa2) list_single_fs_bigclock_pane_t1_ParamLimits

0xece8,	// (0x0003cac1) list_single_fs_bigclock_pane_t2_ParamLimits

0xece8,	// (0x0003cac1) list_single_fs_bigclock_pane_t2

0x0001,

0x0233,	// (0x0002e00c) list_single_fs_bigclock_pane_t_ParamLimits

0x0233,	// (0x0002e00c) list_single_fs_bigclock_pane_t

0x95ab,	// (0x00037384) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfe7a,	// (0x0003dc53) main_fs_bigclock_unlock_btn_pane_g

0x969b,	// (0x00037474) aid_dia3_key_size_ParamLimits

0x969b,	// (0x00037474) aid_dia3_key_size

0x96aa,	// (0x00037483) aid_dia3_listrow_size_ParamLimits

0x96aa,	// (0x00037483) aid_dia3_listrow_size

0x96bf,	// (0x00037498) dia3_keypad_fun_pane_ParamLimits

0x96bf,	// (0x00037498) dia3_keypad_fun_pane

0x96db,	// (0x000374b4) dia3_keypad_num_pane_ParamLimits

0x96db,	// (0x000374b4) dia3_keypad_num_pane

0x96f6,	// (0x000374cf) dia3_listscroll_pane_ParamLimits

0x96f6,	// (0x000374cf) dia3_listscroll_pane

0x9709,	// (0x000374e2) dia3_numentry_pane_ParamLimits

0x9709,	// (0x000374e2) dia3_numentry_pane

0xeefb,	// (0x0003ccd4) dia3_list_pane

0xef06,	// (0x0003ccdf) scroll_pane_cp12

0x9c68,	// (0x00037a41) bg_dia3_numentry_pane

0x971d,	// (0x000374f6) dia3_numentry_pane_t1

0x972c,	// (0x00037505) cell_dia3_key_num_pane

0x9734,	// (0x0003750d) cell_dia3_key0_fun_pane_ParamLimits

0x9734,	// (0x0003750d) cell_dia3_key0_fun_pane

0x9748,	// (0x00037521) cell_dia3_key1_fun_pane_ParamLimits

0x9748,	// (0x00037521) cell_dia3_key1_fun_pane

0x9760,	// (0x00037539) dia3_listrow_pane

0xde5e,	// (0x0003bc37) bg_dia3_numentry_pane_g1

0x9c68,	// (0x00037a41) bg_button_pane_cp21

0xef11,	// (0x0003ccea) cell_dia3_key_num_pane_t1

0xef1f,	// (0x0003ccf8) cell_dia3_key_num_pane_t2

0xef2e,	// (0x0003cd07) cell_dia3_key_num_pane_t3

0xef3d,	// (0x0003cd16) cell_dia3_key_num_pane_t4

0x0003,

0xfe96,	// (0x0003dc6f) cell_dia3_key_num_pane_t

0x9c68,	// (0x00037a41) bg_button_pane_cp19

0x9772,	// (0x0003754b) cell_dia3_key0_fun_pane_g1

0x9c68,	// (0x00037a41) bg_button_pane_cp20

0x977a,	// (0x00037553) cell_dia3_key1_fun_pane_g1

0x9782,	// (0x0003755b) area_left_week_number_pane

0x978e,	// (0x00037567) area_top_day_name_pane

0x97a1,	// (0x0003757a) frame_month_view_pane

0xef4c,	// (0x0003cd25) grid_month_view_pane

0x97b4,	// (0x0003758d) cell_top_day_name_pane_ParamLimits

0x97b4,	// (0x0003758d) cell_top_day_name_pane

0x97e1,	// (0x000375ba) cell_area_left_week_number_pane_ParamLimits

0x97e1,	// (0x000375ba) cell_area_left_week_number_pane

0x97f5,	// (0x000375ce) cell_month_view_pane_ParamLimits

0x97f5,	// (0x000375ce) cell_month_view_pane

0xef5a,	// (0x0003cd33) frm_month_g1

0x9822,	// (0x000375fb) frm_month_g2

0x9835,	// (0x0003760e) frm_month_g3

0x9848,	// (0x00037621) frm_month_g4

0x985b,	// (0x00037634) frm_month_g5

0x986e,	// (0x00037647) frm_month_g6

0x9881,	// (0x0003765a) frm_month_g7

0xef67,	// (0x0003cd40) frm_month_g8

0x9894,	// (0x0003766d) frm_month_g9

0x98a4,	// (0x0003767d) frm_month_g10

0x98b4,	// (0x0003768d) frm_month_g11

0x98c4,	// (0x0003769d) frm_month_g12

0x98d6,	// (0x000376af) frm_month_g13

0x98e8,	// (0x000376c1) frm_month_g14

0x98fc,	// (0x000376d5) frm_month_g15

0x9910,	// (0x000376e9) frm_month_g16

0x000f,

0xfe9f,	// (0x0003dc78) frm_month_g

0xef74,	// (0x0003cd4d) cell_top_day_name_pane_t1

0x9924,	// (0x000376fd) cell_area_left_week_number_pane_g1

0x9930,	// (0x00037709) cell_area_left_week_number_pane_t1

0xca8c,	// (0x0003a865) cell_month_view_pane_g1

0x9943,	// (0x0003771c) cell_month_view_pane_t1

0x9c68,	// (0x00037a41) main_fps_pane

0xe406,	// (0x0003c1df) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe406,	// (0x0003c1df) cmail_ddmenu_btn02_pane_cp1

0xe422,	// (0x0003c1fb) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe422,	// (0x0003c1fb) cmail_ddmenu_btn02_pane_cp2

0x9064,	// (0x00036e3d) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x9064,	// (0x00036e3d) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe0a,	// (0x0003dbe3) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe0a,	// (0x0003dbe3) cmail_ddmenu_btn02_pane_g

0x9082,	// (0x00036e5b) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x9082,	// (0x00036e5b) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe0f,	// (0x0003dbe8) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe0f,	// (0x0003dbe8) cmail_ddmenu_btn02_pane_t

0x9956,	// (0x0003772f) fps_text_pane_ParamLimits

0x9956,	// (0x0003772f) fps_text_pane

0x996d,	// (0x00037746) main_fps_pane_g1_ParamLimits

0x996d,	// (0x00037746) main_fps_pane_g1

0x9987,	// (0x00037760) wait_bar_pane_cp010_ParamLimits

0x9987,	// (0x00037760) wait_bar_pane_cp010

0x9998,	// (0x00037771) fps_text_pane_t1_ParamLimits

0x9998,	// (0x00037771) fps_text_pane_t1

0xe1e4,	// (0x0003bfbd) cam4_image_uncrop_pane_g1

0xe1ed,	// (0x0003bfc6) cam4_image_uncrop_pane_g2

0x6637,	// (0x00034410) cam4_image_uncrop_pane_g3

0x6640,	// (0x00034419) cam4_image_uncrop_pane_g4

0x0003,

0xf901,	// (0x0003d6da) cam4_image_uncrop_pane_g

0x9760,	// (0x00037539) dia3_listrow_pane_ParamLimits

0x9c68,	// (0x00037a41) main_phob2_pane

0x8bb5,	// (0x0003698e) cell_tport_appsw_pane_cp02_ParamLimits

0x8bb5,	// (0x0003698e) cell_tport_appsw_pane_cp02

0x8bc9,	// (0x000369a2) cell_tport_appsw_pane_cp03_ParamLimits

0x8bc9,	// (0x000369a2) cell_tport_appsw_pane_cp03

0x9c68,	// (0x00037a41) phob2_contact_card_pane

0x9c68,	// (0x00037a41) phob2_listscroll_pane

0xef87,	// (0x0003cd60) phob2_list_pane

0xef8f,	// (0x0003cd68) scroll_pane_cp034

0x99b0,	// (0x00037789) phob2_cc_data_pane_ParamLimits

0x99b0,	// (0x00037789) phob2_cc_data_pane

0x99cf,	// (0x000377a8) phob2_cc_listscroll_pane_ParamLimits

0x99cf,	// (0x000377a8) phob2_cc_listscroll_pane

0x951e,	// (0x000372f7) list_double_large_graphic_phob2_pane_ParamLimits

0x951e,	// (0x000372f7) list_double_large_graphic_phob2_pane

0x99ed,	// (0x000377c6) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x99ed,	// (0x000377c6) list_double_large_graphic_phob2_pane_g1

0x9a03,	// (0x000377dc) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9a03,	// (0x000377dc) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfec0,	// (0x0003dc99) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfec0,	// (0x0003dc99) list_double_large_graphic_phob2_pane_g

0x9a0f,	// (0x000377e8) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9a0f,	// (0x000377e8) list_double_large_graphic_phob2_pane_t1

0x9a25,	// (0x000377fe) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9a25,	// (0x000377fe) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfec5,	// (0x0003dc9e) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfec5,	// (0x0003dc9e) list_double_large_graphic_phob2_pane_t

0x9c68,	// (0x00037a41) list_highlight_pane_cp024

0x9a3a,	// (0x00037813) phob2_cc_button_pane

0x9a42,	// (0x0003781b) phob2_cc_data_pane_g1_ParamLimits

0x9a42,	// (0x0003781b) phob2_cc_data_pane_g1

0x9a57,	// (0x00037830) phob2_cc_data_pane_g2_ParamLimits

0x9a57,	// (0x00037830) phob2_cc_data_pane_g2

0x0001,

0xfeca,	// (0x0003dca3) phob2_cc_data_pane_g_ParamLimits

0xfeca,	// (0x0003dca3) phob2_cc_data_pane_g

0x9a67,	// (0x00037840) phob2_cc_data_pane_t1_ParamLimits

0x9a67,	// (0x00037840) phob2_cc_data_pane_t1

0x9a7f,	// (0x00037858) phob2_cc_data_pane_t2_ParamLimits

0x9a7f,	// (0x00037858) phob2_cc_data_pane_t2

0x9a97,	// (0x00037870) phob2_cc_data_pane_t3_ParamLimits

0x9a97,	// (0x00037870) phob2_cc_data_pane_t3

0x0002,

0xfecf,	// (0x0003dca8) phob2_cc_data_pane_t_ParamLimits

0xfecf,	// (0x0003dca8) phob2_cc_data_pane_t

0xef97,	// (0x0003cd70) phob2_cc_list_pane_ParamLimits

0xef97,	// (0x0003cd70) phob2_cc_list_pane

0xd662,	// (0x0003b43b) scroll_pane_cp035_ParamLimits

0xd662,	// (0x0003b43b) scroll_pane_cp035

0xa7ec,	// (0x000385c5) bg_button_pane_cp033

0xefa3,	// (0x0003cd7c) phob2_cc_button_pane_g1

0xefaf,	// (0x0003cd88) phob2_cc_button_pane_t1

0xefc4,	// (0x0003cd9d) phob2_cc_button_pane_t2

0x0001,

0xfed6,	// (0x0003dcaf) phob2_cc_button_pane_t

0x9aaf,	// (0x00037888) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9aaf,	// (0x00037888) list_double_large_graphic_phob2_cc_pane

0x9ae1,	// (0x000378ba) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9ae1,	// (0x000378ba) list_double_large_graphic_phob2_cc_pane_g1

0xefd6,	// (0x0003cdaf) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xefd6,	// (0x0003cdaf) list_double_large_graphic_phob2_cc_pane_g2

0x9aed,	// (0x000378c6) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9aed,	// (0x000378c6) list_double_large_graphic_phob2_cc_pane_g3

0x9af9,	// (0x000378d2) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9af9,	// (0x000378d2) list_double_large_graphic_phob2_cc_pane_g4

0x9b05,	// (0x000378de) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9b05,	// (0x000378de) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfedb,	// (0x0003dcb4) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfedb,	// (0x0003dcb4) list_double_large_graphic_phob2_cc_pane_g

0x9b11,	// (0x000378ea) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9b11,	// (0x000378ea) list_double_large_graphic_phob2_cc_pane_t1

0x9b3a,	// (0x00037913) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9b3a,	// (0x00037913) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfee6,	// (0x0003dcbf) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfee6,	// (0x0003dcbf) list_double_large_graphic_phob2_cc_pane_t

0xefe2,	// (0x0003cdbb) list_highlight_pane_cp025_ParamLimits

0xefe2,	// (0x0003cdbb) list_highlight_pane_cp025

0xa7ec,	// (0x000385c5) bg_button_pane_cp033_ParamLimits

0xefa3,	// (0x0003cd7c) phob2_cc_button_pane_g1_ParamLimits

0xefaf,	// (0x0003cd88) phob2_cc_button_pane_t1_ParamLimits

0xefc4,	// (0x0003cd9d) phob2_cc_button_pane_t2_ParamLimits

0xfed6,	// (0x0003dcaf) phob2_cc_button_pane_t_ParamLimits

0x1c96,	// (0x0002fa6f) popup_wgtman_window

0xd39d,	// (0x0003b176) scroll_pane_cp038

0x9497,	// (0x00037270) wgtman_btn_pane_cp_01_ParamLimits

0x9497,	// (0x00037270) wgtman_btn_pane_cp_01

0xeff0,	// (0x0003cdc9) wgtman_content_pane

0xeff9,	// (0x0003cdd2) wgtman_heading_pane

0x9c68,	// (0x00037a41) bg_heading_pane_cp02

0xf002,	// (0x0003cddb) wgtman_heading_pane_g1

0xf00a,	// (0x0003cde3) wgtman_heading_pane_t1

0xf018,	// (0x0003cdf1) scroll_pane_cp036

0xf020,	// (0x0003cdf9) wgtman_list_pane

0xe2b9,	// (0x0003c092) wgtman_list_pane_t1_ParamLimits

0xe2b9,	// (0x0003c092) wgtman_list_pane_t1

0x6623,	// (0x000343fc) cam4_grid_pane

0x7008,	// (0x00034de1) bg_button_pane_cp015_ParamLimits

0x701c,	// (0x00034df5) bg_button_pane_cp016_ParamLimits

0x702f,	// (0x00034e08) bg_button_pane_cp017_ParamLimits

0x7087,	// (0x00034e60) popup_vitu2_query_window_g3_ParamLimits

0x7087,	// (0x00034e60) popup_vitu2_query_window_g3

0x7144,	// (0x00034f1d) popup_vitu2_query_window_t6_ParamLimits

0x7144,	// (0x00034f1d) popup_vitu2_query_window_t6

0x716f,	// (0x00034f48) popup_vitu2_query_window_t7_ParamLimits

0x716f,	// (0x00034f48) popup_vitu2_query_window_t7

0xe1e4,	// (0x0003bfbd) cam4_grid_pane_g1

0xe1ed,	// (0x0003bfc6) cam4_grid_pane_g2

0xf028,	// (0x0003ce01) cam4_grid_pane_g3

0xf031,	// (0x0003ce0a) cam4_grid_pane_g4

0x0003,

0xfeeb,	// (0x0003dcc4) cam4_grid_pane_g

0x29f9,	// (0x000307d2) aid_placing_vt_slider_lsc_ParamLimits

0x2cf6,	// (0x00030acf) vidtel_button_pane_ParamLimits

0x2cf6,	// (0x00030acf) vidtel_button_pane

0x9c68,	// (0x00037a41) bg_button_pane_cp034

0xf03c,	// (0x0003ce15) vidtel_button_pane_g1

0xf044,	// (0x0003ce1d) vidtel_button_pane_t1

0xd4b7,	// (0x0003b290) aid_size_vtel_slider_touch

0xd662,	// (0x0003b43b) scroll_pane_cp039

0x7f1a,	// (0x00035cf3) ncim_query_button_pane_cp01_ParamLimits

0x7f39,	// (0x00035d12) ncimui_query_pane_g1_ParamLimits

0xa7ec,	// (0x000385c5) input_focus_pane_cp012_ParamLimits

0xdea4,	// (0x0003bc7d) ncim_query_entry_pane_t1_ParamLimits

0xd662,	// (0x0003b43b) scroll_pane_cp039_ParamLimits

0xae97,	// (0x00038c70) navi_pane_bcale_mc_g1

0xae9f,	// (0x00038c78) navi_pane_bcale_mc_t1

0xe46b,	// (0x0003c244) main_sp_fs_email_pane_g1

0xe477,	// (0x0003c250) main_sp_fs_email_pane_g2

0x0001,

0xfcc7,	// (0x0003daa0) main_sp_fs_email_pane_g

0xe954,	// (0x0003c72d) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe954,	// (0x0003c72d) list_single_cale_mrui_row_pane_g3

0x90a2,	// (0x00036e7b) list_single_recal_day_pane_g5_event_pane

0xeb33,	// (0x0003c90c) list_single_recal_day_pane_g7

0xf05a,	// (0x0003ce33) list_recal_day_event_pane_cp01

0xf063,	// (0x0003ce3c) list_recal_vselct_arw_lo_pane_cp01

0xf06b,	// (0x0003ce44) list_recal_vselct_arw_up_pane_cp01

0xf073,	// (0x0003ce4c) list_recal_vselct_pane_cp01

0xd4e7,	// (0x0003b2c0) list_recal_day_event_pane_cp01_g1

0xf07d,	// (0x0003ce56) list_recal_day_event_pane_cp01_t1

0xeb3b,	// (0x0003c914) list_single_recal_day_pane_t1_ParamLimits

0xeb4d,	// (0x0003c926) list_single_recal_day_pane_t2_ParamLimits

0xfe1f,	// (0x0003dbf8) list_single_recal_day_pane_t_ParamLimits

0xa2e0,	// (0x000380b9) bg_notes_pane_ParamLimits

0xa38f,	// (0x00038168) list_notes_pane_ParamLimits

0x1f03,	// (0x0002fcdc) scroll_pane_cp06_ParamLimits

0xa3b1,	// (0x0003818a) main_notes_pane_ParamLimits

0x9c68,	// (0x00037a41) main_welc_pane

0x9b63,	// (0x0003793c) main_welc_body_pane_ParamLimits

0x9b63,	// (0x0003793c) main_welc_body_pane

0x9b80,	// (0x00037959) main_welc_opti_pane_ParamLimits

0x9b80,	// (0x00037959) main_welc_opti_pane

0x9bc5,	// (0x0003799e) main_welc_pane_t1_ParamLimits

0x9bc5,	// (0x0003799e) main_welc_pane_t1

0x9be3,	// (0x000379bc) main_welc_body_row_pane_ParamLimits

0x9be3,	// (0x000379bc) main_welc_body_row_pane

0xd642,	// (0x0003b41b) main_welc_opti_row_pane_ParamLimits

0xd642,	// (0x0003b41b) main_welc_opti_row_pane

0xf08b,	// (0x0003ce64) main_welc_opti_row_pane_g1

0x9bf8,	// (0x000379d1) main_welc_opti_row_pane_t1

0xf093,	// (0x0003ce6c) main_welc_body_row_pane_t1

0xeda9,	// (0x0003cb82) popup_notif_wgt_heading_pane

0xedc3,	// (0x0003cb9c) aid_size_list_notif_wgt_del_ParamLimits

0xedd0,	// (0x0003cba9) list_notif_wgt_row_pane_g1_ParamLimits

0xeddc,	// (0x0003cbb5) list_notif_wgt_row_pane_g2_ParamLimits

0xedeb,	// (0x0003cbc4) list_notif_wgt_row_pane_g3_ParamLimits

0x0262,	// (0x0002e03b) list_notif_wgt_row_pane_g_ParamLimits

0xedf8,	// (0x0003cbd1) list_notif_wgt_row_pane_t1_ParamLimits

0xee0e,	// (0x0003cbe7) list_notif_wgt_row_pane_t2_ParamLimits

0xee20,	// (0x0003cbf9) list_notif_wgt_row_pane_t3_ParamLimits

0x0269,	// (0x0002e042) list_notif_wgt_row_pane_t_ParamLimits

0x9530,	// (0x00037309) listrow_wgtman_pane_g1_ParamLimits

0x953d,	// (0x00037316) listrow_wgtman_pane_g2_ParamLimits

0xfe70,	// (0x0003dc49) listrow_wgtman_pane_g_ParamLimits

0x955b,	// (0x00037334) listrow_wgtman_pane_t1_ParamLimits

0x9573,	// (0x0003734c) listrow_wgtman_pane_t2_ParamLimits

0xfe75,	// (0x0003dc4e) listrow_wgtman_pane_t_ParamLimits

0x9599,	// (0x00037372) wait_bar_pane_cp09_ParamLimits

0x9c68,	// (0x00037a41) bg_popup_heading_pane_cp02

0xf0a2,	// (0x0003ce7b) popup_notif_wgt_heading_pane_g1

0xf0aa,	// (0x0003ce83) popup_notif_wgt_heading_pane_t1

0x9c68,	// (0x00037a41) main_vids_pane

0x9c68,	// (0x00037a41) vids_listscroll_pane

0x9c07,	// (0x000379e0) scroll_pane_cp040

0x9c68,	// (0x00037a41) vids_list_pane

0x9c12,	// (0x000379eb) vids_list_double_pane_ParamLimits

0x9c12,	// (0x000379eb) vids_list_double_pane

0x9c23,	// (0x000379fc) vids_list_double_pane_g1

0x9c2c,	// (0x00037a05) vids_list_double_pane_t1

0x9c3c,	// (0x00037a15) vids_list_double_pane_t2

0x0001,

0xfef9,	// (0x0003dcd2) vids_list_double_pane_t

0x1c88,	// (0x0002fa61) main_ncimui_pane_ParamLimits

0x7d50,	// (0x00035b29) main_ncimui_pane_g1_ParamLimits

0x7d5c,	// (0x00035b35) main_ncimui_pane_g2_ParamLimits

0x7d5c,	// (0x00035b35) main_ncimui_pane_g2

0x0001,

0xfbfd,	// (0x0003d9d6) main_ncimui_pane_g_ParamLimits

0xfbfd,	// (0x0003d9d6) main_ncimui_pane_g

0x9b9b,	// (0x00037974) main_welc_pane_g1_ParamLimits

0x9b9b,	// (0x00037974) main_welc_pane_g1

0x9bb0,	// (0x00037989) main_welc_pane_g2_ParamLimits

0x9bb0,	// (0x00037989) main_welc_pane_g2

0x0001,

0xfef4,	// (0x0003dccd) main_welc_pane_g_ParamLimits

0xfef4,	// (0x0003dccd) main_welc_pane_g

0xa2e0,	// (0x000380b9) listscroll_mce_pane_ParamLimits

0xafec,	// (0x00038dc5) wait_bar_pane_cp10

0xc433,	// (0x0003a20c) main_cale_day_pane_ParamLimits

0xc433,	// (0x0003a20c) main_cale_week_pane_ParamLimits

0xa2e0,	// (0x000380b9) main_messa_pane_ParamLimits

0x5be9,	// (0x000339c2) main_clock2_btn_pane_ParamLimits

0x5be9,	// (0x000339c2) main_clock2_btn_pane

0xcc9d,	// (0x0003aa76) main_clock2_btn_pane_cp01_ParamLimits

0xcc9d,	// (0x0003aa76) main_clock2_btn_pane_cp01

0xe8e0,	// (0x0003c6b9) list_cale_mrui_pane_ParamLimits

0xee56,	// (0x0003cc2f) main_cf0_pane_g2

0x0001,

0x0270,	// (0x0002e049) main_cf0_pane_g

0x9782,	// (0x0003755b) area_left_week_number_pane_ParamLimits

0x978e,	// (0x00037567) area_top_day_name_pane_ParamLimits

0x97a1,	// (0x0003757a) frame_month_view_pane_ParamLimits

0xef4c,	// (0x0003cd25) grid_month_view_pane_ParamLimits

0xef5a,	// (0x0003cd33) frm_month_g1_ParamLimits

0x9822,	// (0x000375fb) frm_month_g2_ParamLimits

0x9835,	// (0x0003760e) frm_month_g3_ParamLimits

0x9848,	// (0x00037621) frm_month_g4_ParamLimits

0x985b,	// (0x00037634) frm_month_g5_ParamLimits

0x986e,	// (0x00037647) frm_month_g6_ParamLimits

0x9881,	// (0x0003765a) frm_month_g7_ParamLimits

0xef67,	// (0x0003cd40) frm_month_g8_ParamLimits

0x9894,	// (0x0003766d) frm_month_g9_ParamLimits

0x98a4,	// (0x0003767d) frm_month_g10_ParamLimits

0x98b4,	// (0x0003768d) frm_month_g11_ParamLimits

0x98c4,	// (0x0003769d) frm_month_g12_ParamLimits

0x98d6,	// (0x000376af) frm_month_g13_ParamLimits

0x98e8,	// (0x000376c1) frm_month_g14_ParamLimits

0x98fc,	// (0x000376d5) frm_month_g15_ParamLimits

0x9910,	// (0x000376e9) frm_month_g16_ParamLimits

0xfe9f,	// (0x0003dc78) frm_month_g_ParamLimits

0xef74,	// (0x0003cd4d) cell_top_day_name_pane_t1_ParamLimits

0x9924,	// (0x000376fd) cell_area_left_week_number_pane_g1_ParamLimits

0x9930,	// (0x00037709) cell_area_left_week_number_pane_t1_ParamLimits

0xca8c,	// (0x0003a865) cell_month_view_pane_g1_ParamLimits

0x9943,	// (0x0003771c) cell_month_view_pane_t1_ParamLimits

0xa2d8,	// (0x000380b1) main_clock2_btn_pane_g1

0xf0b8,	// (0x0003ce91) main_clock2_btn_pane_t1

0xa7ec,	// (0x000385c5) listscroll_cmail_pane_ParamLimits

0xe46b,	// (0x0003c244) main_sp_fs_email_pane_g1_ParamLimits

0xe477,	// (0x0003c250) main_sp_fs_email_pane_g2_ParamLimits

0xfcc7,	// (0x0003daa0) main_sp_fs_email_pane_g_ParamLimits

0xeaa3,	// (0x0003c87c) list_recal_day_pane_ParamLimits

0xeab4,	// (0x0003c88d) mian_recal_day_pane_t1

0x8875,	// (0x0003664e) list_single_dyc_row_text_pane_t4_ParamLimits

0x8875,	// (0x0003664e) list_single_dyc_row_text_pane_t4

0x88be,	// (0x00036697) list_single_dyc_row_text_pane_t5_ParamLimits

0x88be,	// (0x00036697) list_single_dyc_row_text_pane_t5

0xe519,	// (0x0003c2f2) list_single_dyc_row_text_pane_t6_ParamLimits

0xe519,	// (0x0003c2f2) list_single_dyc_row_text_pane_t6

0x37a6,	// (0x0003157f) aid_mgn_list_cale_time_pane

0x1c88,	// (0x0002fa61) main_gallery2_pane_ParamLimits

0xccb3,	// (0x0003aa8c) main_clock2_pane_cp01_t1

0xccc1,	// (0x0003aa9a) main_clock2_pane_cp01_t3

0x0001,

0xf7d3,	// (0x0003d5ac) main_clock2_pane_cp01_t

0x225d,	// (0x00030036) cale_week_scroll_pane_g16_ParamLimits

0x225d,	// (0x00030036) cale_week_scroll_pane_g16

0xa5ab,	// (0x00038384) vorec_slider_pane

0xf044,	// (0x0003ce1d) vidtel_button_pane_t1_ParamLimits

0x9108,	// (0x00036ee1) main_fs_bigclock_clock_pane_g1_ParamLimits

0x9108,	// (0x00036ee1) main_fs_bigclock_clock_pane_g2_ParamLimits

0x9119,	// (0x00036ef2) main_fs_bigclock_clock_pane_g3_ParamLimits

0x9119,	// (0x00036ef2) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe33,	// (0x0003dc0c) main_fs_bigclock_clock_pane_g_ParamLimits

0x912c,	// (0x00036f05) main_fs_bigclock_clock_pane_t1_ParamLimits

0x9142,	// (0x00036f1b) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe3c,	// (0x0003dc15) main_fs_bigclock_clock_pane_t_ParamLimits

0x53e7,	// (0x000331c0) main_mup3_lyrics_pane_ParamLimits

0x53e7,	// (0x000331c0) main_mup3_lyrics_pane

0x9c4c,	// (0x00037a25) main_mup3_lyrics_pane_t1_ParamLimits

0x9c4c,	// (0x00037a25) main_mup3_lyrics_pane_t1

0x61fc,	// (0x00033fd5) aid_main_mp4_pane_t1_area

0x6206,	// (0x00033fdf) aid_main_mp4_pane_t2_area

0x62b2,	// (0x0003408b) main_mp4_pane_g7_ParamLimits

0x62b2,	// (0x0003408b) main_mp4_pane_g7

0x62be,	// (0x00034097) main_mp4_pane_g8_ParamLimits

0x62be,	// (0x00034097) main_mp4_pane_g8

0x652f,	// (0x00034308) aid_call6_pane_g1_size

0x9aca,	// (0x000378a3) list_double_large_graphic_phob2_other_pane_ParamLimits

0x9aca,	// (0x000378a3) list_double_large_graphic_phob2_other_pane

0xadc8,	// (0x00038ba1) list_double_large_graphic_phob2_other_pane_g1

0x9c68,	// (0x00037a41) list_highlight_pane_cp026
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Normal
